#include <stdio.h>
#include <assert.h>
#include "mpi.h"

/* SHOULD ALSO CREATE THREADS AND HAVE EACH THREAD CALL BARRIER SEVERAL TIMES
 * WITH COMMON BARRIERTAG, TO SEE IF SENDs and RECEIVEs interfere.
 */

enum tags { WORKTAG1, WORKTAG2, WORKTAG3, BARRIERTAG, DIETAG };

void barrier(void);
#define WORKLEN 500000

int main(argc, argv)

int			argc;
char			*argv[];

{	int myrank, work;
	int		workarray[WORKLEN];
	MPI_Status	status;

	MPI_Init(&argc, &argv);		/* initialize MPI */
	MPI_Comm_rank(MPI_COMM_WORLD,	/* always use this */
		      &myrank);		/* process rank, 0 thru N-1 */

	/* Test ability to send to self. */
	if ( myrank == 0 ) {
	  printf("Sending large message to self.\n"); fflush(stdout);
	}
	if ( myrank == 0 ) {
          int flag = 0;
	  MPI_Send(&work, 1, MPI_INT, 0, WORKTAG1, MPI_COMM_WORLD);
	  MPI_Send(&work, 1, MPI_INT, 0, WORKTAG1, MPI_COMM_WORLD);
	  MPI_Iprobe( 0, MPI_ANY_TAG, MPI_COMM_WORLD, &flag, &status);
	  assert( flag == 1 );
	  MPI_Recv(&work, 1, MPI_INT, 0, WORKTAG1, MPI_COMM_WORLD, &status);
	  MPI_Iprobe( 0, MPI_ANY_TAG, MPI_COMM_WORLD, &flag, &status);
	  assert( flag == 1 );
	  MPI_Recv(&work, 1, MPI_INT, 0, WORKTAG1, MPI_COMM_WORLD, &status);
	  MPI_Iprobe( 0, MPI_ANY_TAG, MPI_COMM_WORLD, &flag, &status);
	  assert( flag == 0 );
	}

	/* Test out-of-order receives when tags arrive out of order. */
	if ( myrank == 0 ) {
	  printf("Sending 3 worktags and receiving out of order.\n");
	  fflush(stdout);
	}
	if ( myrank == 0 ) { /* Send in reverse order */
	  work = 1001;
	  MPI_Send(&work, 1, MPI_INT, 1, WORKTAG1,
		   MPI_COMM_WORLD);
	  work = 1002;
	  MPI_Send(&work, 1, MPI_INT, 1, WORKTAG2,
		   MPI_COMM_WORLD);
	  work = 1003;
	  MPI_Send(&work, 1, MPI_INT, 1, WORKTAG3,
		   MPI_COMM_WORLD);
	} else if ( myrank == 1 ) { /* Can slave receive in correct order? */
	  MPI_Recv(&work, 1, MPI_INT, 0, WORKTAG3,
		   MPI_COMM_WORLD, &status);
	  assert(work == 1003);
	  MPI_Recv(&work, 1, MPI_INT, 0, WORKTAG1,
		   MPI_COMM_WORLD, &status);
	  assert(work == 1001);
	  MPI_Recv(&work, 1, MPI_INT, 0, WORKTAG2,
		   MPI_COMM_WORLD, &status);
	  assert(work == 1002);
	}

	/* Test nonblocking sends.
	 * All-to-all sends followed by all-to-all recv. */
	if ( myrank == 0 ) {
	  printf("Testing nonblocking sends via all-to-all barrier.\n");
	  fflush(stdout);
	}
	barrier();

	/* Test nonblocking sends of very large messages.
	 *   This forces a deadly embrace unless one of the two processes
	 *   can send two large messages, and begin a receive, while the
	 *   other process has not yet begun any receive.
	 * However, it appears that some O/S (e.g. Linux 2.6.12 ??) have
	 *   a trick by which even if the master blocks on MPI_Send, when the
	 *   slave enters MPI_Send, this somehow blocks the master.
	 */
	if ( myrank == 0 ) {
	  printf("Sending two large messages before a receive at other end.\n");
	  fflush(stdout);
	}
	if (myrank == 0) {
		MPI_Send(workarray, WORKLEN, MPI_INT, 1, WORKTAG1,
			 MPI_COMM_WORLD);
		MPI_Send(workarray, WORKLEN, MPI_INT, 1, WORKTAG1,
			 MPI_COMM_WORLD);
		MPI_Recv(workarray, WORKLEN, MPI_INT, 1, WORKTAG1,
			 MPI_COMM_WORLD, &status);
		MPI_Recv(workarray, WORKLEN, MPI_INT, 1, WORKTAG1,
			 MPI_COMM_WORLD, &status);
	} else if (myrank == 1) {
		MPI_Send(workarray, WORKLEN, MPI_INT, 0, WORKTAG1,
			 MPI_COMM_WORLD);
		MPI_Send(workarray, WORKLEN, MPI_INT, 0, WORKTAG1,
			 MPI_COMM_WORLD);
		MPI_Recv(workarray, WORKLEN, MPI_INT, 0, WORKTAG1,
			 MPI_COMM_WORLD, &status);
		MPI_Recv(workarray, WORKLEN, MPI_INT, 0, WORKTAG1,
			 MPI_COMM_WORLD, &status);
	}


	MPI_Finalize();			/* cleanup MPI */
	return 0;
}

/* We do a barrier the hard way.  Everyone sends a message of 400 KB
 * (something larger than the network buffer), and then they receive it.
 * This requires the use of MPI_Bsend (or possibly MPI_Isend) to guarantee
 * no deadlock.  But if the macro TOPC is not defined, MPI_Send also works.
 */
void barrier()
{
	int		maxrank, myrank, rank, iter=1;
	int		work[WORKLEN];
	double		result;
	MPI_Status	status;

	MPI_Comm_size(MPI_COMM_WORLD,	/* always use this */
		      &maxrank);	/* #processes in application = N */
	MPI_Comm_rank(MPI_COMM_WORLD,	/* always use this */
		      &myrank);		/* process rank, 0 thru N-1 */

	for ( rank = 0; rank < maxrank; rank++ ) {
	  if ( rank != myrank)
	    /* This will turn into either MPI_Bsend or MPI_Isend
	     * in the future. */
	    MPI_Send(&work, WORKLEN, MPI_INT, rank, BARRIERTAG, MPI_COMM_WORLD);
	}
	for ( rank = 0; rank < maxrank; rank++ )
	  if ( rank != myrank) {
	    MPI_Recv(&work, WORKLEN, MPI_INT, rank, MPI_ANY_TAG, MPI_COMM_WORLD,
		     &status);
	    if ( status.MPI_TAG != BARRIERTAG )
		     printf("MPI: Application bug:  application message"
			    " being sent across barrier\n");
	  }
	/* Could do MPI_Testall here, if we were using MPI_Isend */
}
