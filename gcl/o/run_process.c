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

#include <string.h>

#define IN_RUN_PROCESS
#include "include.h"
#ifdef RUN_PROCESS

void setup_stream_buffer(object);
object make_two_way_stream(object, object);

#ifdef __MINGW32__

#include<windows.h>
#include <fcntl.h>
#define PIPE_BUFFER_SIZE 2048

void DisplayError ( char *pszAPI );
void PrepAndLaunchRedirectedChild ( HANDLE hChildStdOut,
    HANDLE hChildStdIn,
    HANDLE hChildStdErr,
    PROCESS_INFORMATION *process_info,
    char *name );

/* Run a process, with name holding the process name and arguments
 * To test:
 *
 *    (setq fp (si::run-process "wish"))
 * 
 */
void run_process ( char *name )
{
    object stream_in, stream_out, stream;
    HANDLE hChildStdoutReadTmp,hChildStdoutRead,hChildStdoutWrite;
    HANDLE hChildStdinWriteTmp,hChildStdinRead,hChildStdinWrite;
    HANDLE hChildStderrWrite;
    SECURITY_ATTRIBUTES sec_att;
    PROCESS_INFORMATION process_info;
    int ofd, ifd;
    FILE *ofp, *ifp;
#if 0
    DWORD dwRead, dwWritten;
    /*CHAR chBuf[1024] = "puts $env(PATH)\n\0";*/
    CHAR chBuf[60] = "button .hello\npack .hello\n\0";
     /*CHAR chBuf[60] = "button .hello\n\0"; */
#endif
    
    /* Set up the security attributes struct. */
    sec_att.nLength= sizeof(SECURITY_ATTRIBUTES);
    sec_att.lpSecurityDescriptor = NULL;
    sec_att.bInheritHandle = TRUE;

    /* Create the child output r/w pipes. The read pipe is temporary. */
    if ( ! CreatePipe ( &hChildStdoutReadTmp,
                        &hChildStdoutWrite,
                        &sec_att,
                        PIPE_BUFFER_SIZE ) ) {
        DisplayError ( "CreatePipe stdout" );
    }
    
    /* Duplicate the output write handle to be used as std error
     * avoiding problems when the spawned process closes a
     * stdout handle. */
    if ( ! DuplicateHandle ( GetCurrentProcess (),
                             hChildStdoutWrite,
                             GetCurrentProcess (),
                             &hChildStderrWrite,
                             0,
                             TRUE, /* Inheritable */
                             DUPLICATE_SAME_ACCESS ) ) {
        DisplayError ( "DuplicateHandle stdout/stderr" );
    }
    
    /* Likewise, the child input pipes. */
    if ( ! CreatePipe ( &hChildStdinRead,
                        &hChildStdinWriteTmp,
                        &sec_att,
                        PIPE_BUFFER_SIZE ) ) {
        DisplayError ( "CreatePipe stdin" );
    }

    /* Make uninheritable copies of the output read handle and the
     * input write handles. Stops the spawned process from
     * inheriting non-closeable pipe handles. */
    if ( ! DuplicateHandle ( GetCurrentProcess(),
                             hChildStdoutReadTmp,
                             GetCurrentProcess(),
                             &hChildStdoutRead, /* The new handle. */
                             0,
                             FALSE, /* uninheritable. */
                             DUPLICATE_SAME_ACCESS ) ) {
        DisplayError ( "DuplicateHandle hChildStdoutRead" );
    }

    if ( ! DuplicateHandle ( GetCurrentProcess (),
                             hChildStdinWriteTmp,
                             GetCurrentProcess(),
                             &hChildStdinWrite, /* New handle. */
                             0,
                             FALSE, /* uninheritable. */
                             DUPLICATE_SAME_ACCESS ) ) {
        DisplayError ( "DuplicateHandle hChildStdinWrite" );
    }

    /* Kill the inheritable temporary handles. */
    if ( ! CloseHandle(hChildStdoutReadTmp ) ) DisplayError ( "CloseHandle: Temporary output read" );
    if ( ! CloseHandle(hChildStdinWriteTmp ) ) DisplayError ( "CloseHandle: Temporary input write" );

    PrepAndLaunchRedirectedChild ( hChildStdoutWrite,
				   hChildStdinRead,
				   hChildStderrWrite,
				   &process_info,
				   name );

    /* Close pipe handles to ensure that no inappropriately accessible pipe handles
     * remain in this process. */
    if ( ! CloseHandle ( hChildStdoutWrite ) ) DisplayError ( "CloseHandle: Output write" );
    if ( ! CloseHandle ( hChildStdinRead   ) ) DisplayError ( "CloseHandle: Input read" );
    if ( ! CloseHandle ( hChildStderrWrite ) ) DisplayError ( "CloseHandle: Error write" );

#if 0
    fprintf ( stderr, "Before write\n" );
    WriteFile ( hChildStdinWrite, chBuf, strlen ( chBuf ), 
               &dwWritten, NULL);
    FlushFileBuffers ( hChildStdinWrite );
    FlushFileBuffers ( hChildStdoutRead );
    fprintf ( stderr, "Before read\n" );
    if ( ! ReadFile( hChildStdoutRead, chBuf, 2, &dwRead, NULL ) || 
         dwRead == 0 ) {
        DisplayError ( "Nothing read\n" );
    } else {
        fprintf ( stderr, "Got Back: %s\n", chBuf );
    }
    fprintf ( stderr, "After read\n" );
#endif

    
    /* Connect up the Lisp objects with the pipes. */
    ofd = _open_osfhandle ( hChildStdoutRead, _O_RDONLY | _O_TEXT );
    ofp = _fdopen ( ofd, "r" );
    ifd = _open_osfhandle ( hChildStdinWrite, _O_WRONLY | _O_TEXT );
    ifp = _fdopen ( ifd, "w" );

#if 0
    {
        char buf[1024];
        fprintf ( ifp, "button .wibble\n" );
        fflush (ifp);
        fgets ( buf, 2, ofp );
        fprintf ( stderr, 
                  "run_process: ofd = %x, ofp = %x, ifd = %x, ifp = %x, buf[0] = %x, buf[1] = %x, buf = %s\n",
                  ofd, ofp, ifd, ifp, buf[0], buf[1], buf );
    }
#endif

    stream_in = (object) alloc_object(t_stream);
    stream_in->sm.sm_mode = smm_input;
    stream_in->sm.sm_fp = ofp;
    stream_out = (object) alloc_object(t_stream);
    stream_out->sm.sm_mode = smm_output;
    stream_out->sm.sm_fp = ifp;
    setup_stream_buffer ( stream_in );
    setup_stream_buffer ( stream_out );
    stream = make_two_way_stream ( stream_in, stream_out );
    vs_base[0] = stream;
    vs_base[1] = Cnil;
    vs_top = vs_base + 1;
}

/* Set up STARTUPINFO structure and launch redirected child. */
void PrepAndLaunchRedirectedChild (
    HANDLE hChildStdOut,
    HANDLE hChildStdIn,
    HANDLE hChildStdErr,
    PROCESS_INFORMATION *process_info,
    char * name )
{
    STARTUPINFO startup_info;

    /* Set up the start up info struct. */
    ZeroMemory ( &startup_info, sizeof ( STARTUPINFO ) );
    startup_info.cb         = sizeof ( STARTUPINFO );
    startup_info.dwFlags    = STARTF_USESTDHANDLES;
    startup_info.hStdOutput = hChildStdOut;
    startup_info.hStdInput  = hChildStdIn;
    startup_info.hStdError  = hChildStdErr;
    
    /* Launch the redirected process. */
    if ( ! CreateProcess ( NULL,
                           name,
                           NULL,
                           NULL,
                           TRUE,
                           CREATE_NEW_CONSOLE,
                           NULL,
                           NULL,
                           &startup_info,
                           process_info ) ) {
        DisplayError("CreateProcess");
    }
    
}

/* Display the error number and the corresponding Windows message. */
void DisplayError(char *pszAPI)
{
    LPVOID lpvMessageBuffer;
    CHAR szPrintBuffer[512];
    DWORD nCharsWritten;

    FormatMessage ( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM,
                    NULL,
                    GetLastError (),
                    MAKELANGID ( LANG_NEUTRAL, SUBLANG_DEFAULT ),
                   (LPTSTR) &lpvMessageBuffer,
                    0,
                    NULL );

    wsprintf ( szPrintBuffer,
               "%s:\n   error code = %d.\n   message    = %s.\n",
               pszAPI,
               GetLastError(),
               (char *)lpvMessageBuffer );

    WriteConsole ( GetStdHandle(STD_OUTPUT_HANDLE),
                   szPrintBuffer,
                   lstrlen ( szPrintBuffer ),
                   &nCharsWritten,
                   NULL );

    LocalFree ( lpvMessageBuffer );
    FEerror ( "RUN-PROCESS encountered problems.", 0 );
}

void siLrun_process()
{
    char cmdline[20480];
    int i, nargs;
    int old = signals_allowed;
    int argc = 0;

    nargs = vs_top - vs_base;
    for ( i = 0; i < nargs; i++ ) {
      check_type_string ( &vs_base[i] );
    }

    cmdline[0]='\0';
    for ( i = 0; i < nargs; i++ ) {
      if ( strlen ( cmdline ) + vs_base[i]->st.st_fillp + 2 > 20480 ) {
	FEerror ( "RUN-PROCESS command more than 20480 characters long.", 0 );
      }
      if ( i != 0 ) {
        strcat ( cmdline, " ");
      }
      strcat ( cmdline,  vs_base[i]->st.st_self );
      fprintf ( stderr, "siLrun_process: cmdline=%s\n", cmdline );
      argc++;
    }
    signals_allowed = sig_at_read;
    run_process ( cmdline );
    signals_allowed = old;
}

void
gcl_init_socket_function()
{
  make_si_function("RUN-PROCESS", siLrun_process);
}


#else /* __MINGW32__ */

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

object
make_socket_stream(host_l,port)
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
FFN(siLmake_socket_stream)()
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
  object stream_in, stream_out, stream;

  if (socketpair(AF_UNIX, SOCK_STREAM, 0, sockets_in) < 0)
    FEerror("Failure to open socket stream pair", 0);
  if (socketpair(AF_UNIX, SOCK_STREAM, 0, sockets_out) < 0)
    FEerror("Failure to open socket stream pair", 0);
  fp1 = fdopen(sockets_in[0], "r");
  fp2 = fdopen(sockets_out[0], "w");

#ifdef OVM_IO
  {int pid;
  pid = getpid();
  ioctl(sockets_in[0], SIOCSPGRP, (char *)&pid);
  if( fcntl(sockets_in[0], F_SETFL, FASYNC | FNDELAY) == -1)
    perror("Couldn't control socket");
  }
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

void
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
    
      
void
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
    
void
FFN(siLrun_process)()
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

void
FFN(siLmake_socket_pair)()
{
  make_socket_pair();
}

void
gcl_init_socket_function()
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
#endif /* MUST_USE_STATIC_LINK */

#endif /* __MINGW32__ */

#else /* no RUN_PROCESS */
/* static void */
/* init_socket_function(void) {;} */

#endif     
