/* By Mike Ballantyne */
/*
 Copyright (C) 1994  W. Schelter

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

*/



#define IN_RUN_PROCESS
#include "include.h"
#ifdef RUN_PROCESS

/*
 * System Include Files
 *
 * The system files here each define some part of the information needed to
 * compile the inet package.  They need to exist of every host you port this
 * code to.  I have added some comments that I hope will help you "find"
 * the file if it does not have the same name of your host.
 */
#undef PAGESIZE
#include <errno.h>	/* errno global, error codes for UNIX IO	*/
#include <sys/types.h>	/* Data types definitions			*/
#include <sys/socket.h>	/* Socket definitions with out this forget it	*/
#include <netinet/in.h>	/* Internet address definition AF_INET etc...	*/
#include <signal.h>	/* UNIX Signal codes				*/
#include <sys/ioctl.h>	/* IO control standard UNIx fair		*/
#include <sys/file.h>
#include <fcntl.h>	/* Function to set socket aync/interrupt	*/
#include <sys/time.h>	/* Time for select time out                     */
#include <netdb.h>	/* Data Base interface for network files	*/
#include <stdio.h>



/* LISP - Lisp Wrapper for the "c" code.
 *
 * The lisp OBJECT is passed to the code and a string must be extracted
 * and null terminated to make it work with the "C" code.
 *
 * Lisp Interface code.
 */

static char *lisp_to_string(string)
object string;
{
	int	i, len;
	char	*sself;
	char	*cstr;

	len = string->st.st_fillp;

	cstr = (char *) malloc (len+1);
	sself = &(string->st.st_self[0]);
	for (i=0; i<len; i++)
	{
		cstr[i] = sself[i];
	}
	cstr[i] = 0;
	return (cstr);
}

/* open_connection - Open_Connection a socket to a server that you know by port number.
 *
 * The caller must know the number of the service and and name of the
 * host that tyhe serive is on.  The name of the host can be "localhost"
 * for a service on the same host as the clinet.
 *
 */
static int open_connection(host,server)
char	*host;
int	server;
{
	int res;
	int pid;
	int	sock;
	struct	hostent	*hp;
	struct	sockaddr_in	sock_add;	/* Address of socket          */

	if((hp = gethostbyname(host)) == NULL)
	{
		FEerror("No such host.",0);
	}

	bzero((char *)&sock_add, sizeof(sock_add));
	bcopy(hp->h_addr, (char *)&sock_add.sin_addr, hp->h_length);
	sock_add.sin_family = hp->h_addrtype;

	sock_add.sin_port = htons((short)server);

	sock = socket( hp->h_addrtype, SOCK_STREAM , 0);

	if(sock < 1)
	{
		FEerror("No Sockets!",0);
	}

	if(connect(sock, (const struct sockaddr *)&sock_add, sizeof(sock_add)) < 0)
	{
		close(sock);
		FEerror("Connection Failed.",0);
	}
	pid = getpid();
	if(ioctl(sock, SIOCSPGRP, (char *)&pid) < 0 )
	{
		FEerror("Could not set process group of socket.",0);
	}

#ifdef OVM_IO
	res = fcntl(sock,F_SETFL,FASYNC | FNDELAY);
#else
	res = fcntl(sock,F_SETFL,FASYNC);
#endif
	return(sock);
}

object make_stream(host_l,socket,smm)
object	host_l;
int socket;
enum smmode smm;
{
	char	*mode;
	object	stream;
	FILE	*fp;
	vs_mark;


	switch(smm)
	{
	case smm_input:
		mode = "r";
		break;
	case smm_output:
		mode = "w";
		break;
	default:
		FEerror("make_stream : wrong mode",0);
	}

	fp = fdopen(socket,mode);
	stream = (object)  alloc_object(t_stream);
	stream->sm.sm_mode = (short)smm;
	stream->sm.sm_fp = fp;

	stream->sm.sm_object0 = sLstring_char;
	stream->sm.sm_object1 = host_l;
	stream->sm.sm_int0 = stream->sm.sm_int1 = 0;
	vs_push(stream);
	setup_stream_buffer(stream);
	vs_reset;
	return(stream);
}

object make_socket_stream(host_l,port)
object	host_l;
object	port;
{
	char	*host = lisp_to_string(host_l);
	object	stream_in;
	object	stream_out;
	object	stream;
	int	socket;

	socket = open_connection(host, fix(port));
   	stream_in  = make_stream(host_l,socket, smm_input);
   	stream_out = make_stream(host_l,socket, smm_output);

	stream = make_two_way_stream(stream_in,stream_out);

	return(stream);
}

void
siLmake_socket_stream()
{
  check_arg(2);
  vs_base[0] = make_socket_stream(vs_base[0], vs_base[1]);
  vs_pop;
}

/*
 * make 2 two-way streams
 */

object
make_socket_pair()
{
  int sockets_in[2];
  int sockets_out[2];
  FILE *fp1, *fp2;
  int pid;
  object stream_in, stream_out, stream;

  if (socketpair(AF_UNIX, SOCK_STREAM, 0, sockets_in) < 0)
    FEerror("Failure to open socket stream pair", 0);
  if (socketpair(AF_UNIX, SOCK_STREAM, 0, sockets_out) < 0)
    FEerror("Failure to open socket stream pair", 0);
  fp1 = fdopen(sockets_in[0], "r");
  fp2 = fdopen(sockets_out[0], "w");

#ifdef OVM_IO
  pid = getpid();
  ioctl(sockets_in[0], SIOCSPGRP, (char *)&pid);
  if( fcntl(sockets_in[0], F_SETFL, FASYNC | FNDELAY) == -1)
    perror("Couldn't control socket");

#endif


  stream_in = (object) alloc_object(t_stream);
  stream_in->sm.sm_mode = smm_input;
  stream_in->sm.sm_fp = fp1;
  stream_in->sm.sm_int0 = sockets_in[1];
  stream_in->sm.sm_int1 = 0;
  stream_out = (object) alloc_object(t_stream);
  stream_out->sm.sm_mode = smm_output;
  stream_out->sm.sm_fp = fp2;
  setup_stream_buffer(stream_in);
  setup_stream_buffer(stream_out);
  stream_out->sm.sm_int0 = sockets_out[1];
  stream_out->sm.sm_int1 = 0;
  stream = make_two_way_stream(stream_in, stream_out);
  return(stream);
}
/* the routines for spawning off a process with streams 
 *
 * Assumes that istream and ostream are both associated
 * with "C" type streams.
 */


spawn_process_with_streams(istream, ostream, pname, argv)
object istream;
object ostream;
char *pname;
char **argv;
{

  int fdin;
  int fdout;
  if (istream->sm.sm_fp == NULL || ostream->sm.sm_fp == NULL)
    FEerror("Cannot spawn process with given stream", 0);
  fdin = istream->sm.sm_int0;
  fdout = ostream->sm.sm_int0;
  if (fork() == 0)
    { /* the child --- replace standard in and out with descriptors given */
      close(0);
      dup(fdin);
      close(1);
      dup(fdout);
      fprintf(stderr, "\n***** Spawning process %s ", pname);
      if (execvp(pname, argv) == -1)
	{
	  fprintf(stderr, "\n***** Error in process spawning *******");
	  fflush(stderr);
	  exit(1);
	}
    }



  
}
    
      
run_process(filename, argv)
char *filename;
char **argv;
{
  object stream = make_socket_pair();
  spawn_process_with_streams(stream->sm.sm_object1,
			    stream->sm.sm_object0,
			    filename, argv);
  vs_base[0] = stream;
  vs_base[1] = Cnil;
  vs_top = vs_base + 2;
}
    
siLrun_process()
{
  int i;
  object arglist;
  char *argv[100];

  arglist = vs_base[1];
  argv[0] = "";
  for(i = 1; arglist != Cnil; i++) {
     argv[i] = lisp_to_string(arglist->c.c_car);
     arglist = arglist->c.c_cdr;
  }
  argv[i] = (char *)0;
  run_process(object_to_string(vs_base[0]), argv);
}

siLmake_socket_pair()
{
  make_socket_pair();
}

init_socket_function()
{
  make_si_function("MAKE-SOCKET-STREAM", siLmake_socket_stream); 
  make_si_function("MAKE-SOCKET-PAIR", siLmake_socket_pair);
  make_si_function("RUN-PROCESS", siLrun_process);
}

#ifdef MUST_USE_STATIC_LINK
#ifdef __svr4__
getpagesize()
{ return PAGESIZE;
}

dlclose()
{fprintf(stderr,"calling 'dl' function sun did not supply..exitting") ;exit(1);}
dgettext()
{dlclose();}
dlopen()
{dlclose();}
dlerror()
{dlclose();}

dlsym()
{dlclose();}



#endif
#endif

#else /* no RUN_PROCESS */

init_socket_function(){;}

#endif     
