
#include <errno.h>


#ifndef NO_DEFUN
#ifndef DEFUN
#define DEFUN(string,ret,fname,pack,min,max, flags, ret0a0,a12,a34,a56,doc) ret fname
#endif
#endif


#ifndef HZ
#define HZ 60
#endif

#ifndef SET_TIMEVAL
#define SET_TIMEVAL(t,timeout) \
  t.tv_sec = timeout/HZ; t.tv_usec = (int) ((timeout%HZ)*(1000000.0)/HZ)
#endif


DEFUN("CHECK-FD-FOR-INPUT",int,fScheck_fd_for_input,
      SI,0,0,NONE,II,IO,OO,OO,

"Check FD a file descriptor for data to read, waiting TIMEOUT clicks \
for data to become available.  Here there are \
INTERNAL-TIME-UNITS-PER-SECOND in one second.  Return is 1 if data \
available on FD, 0 if timeout reached and -1 if failed.")

     (fd,timeout)
int fd;
int timeout;
{
  fd_set inp;
  int n;
  struct timeval t;

  SET_TIMEVAL(t,timeout);
  FD_ZERO(&inp);
  FD_SET(fd, &inp);
  n = select(fd + 1, &inp, NULL, NULL, &t);
  if (n < 0)
    return -1;
  else if (FD_ISSET(fd, &inp))
    return 1;
  else
    return 0;
}


/* read from FD into BUF, M bytes allowing TIMEOUT if necessary.
   return number of bytes read.
   
 */
our_read(fd,buf,m,timeout)
     int fd,m,timeout;
     char *buf;
{ int r,tot=0;
  char *p = buf;
  while(tot < m && (fScheck_fd_for_input(fd,timeout)>0))
    { r = read(fd,p,m);
      if (r == 0) return tot;
      if (r == -1)
	{ if (errno != EAGAIN)
	    return -1;}
      else {
	tot += r;
	p += r;
    }}
  return tot;
}

/* write to FD file descriptor from BUF sending NBYTES. */

our_write(fd,buf,nbytes)
     char *buf;
     int fd,nbytes;
     
{ int result = 0;
  int m;
  int n = nbytes;
  char *p=buf;
  while (n>0)
    { m=write(fd,p,n);
      if (m< 0)
	{ perror("write failed:");
	  return -1;}
      if (m==0)
	{ fprintf(stderr,
		  "write failed? 0 bytes written nbytes %d [%s] lost:",
		  n,p
		  );
	  return result;
	}
	    
      p+= m;
      n-= m;
      result+= m;
    }
  if (n>0)
    { perror("Could not write all data:");
      return result;
   }
  /* should not happen */
  if (result!= nbytes) abort();
  return result;
}


