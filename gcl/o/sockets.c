/*
 Copyright (C) 1994 Rami el Charif, W. Schelter 

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

You should have received a copy of the GNU Library General Public License 
along with GCL; see the file COPYING.  If not, write to the Free Software
Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

*/


#define IN_SOCKETS

#include "include.h"

#ifdef HAVE_NSOCKET

#include "sheader.h"

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#ifdef __STDC__
#include <string.h> 
#endif

# include <netdb.h> 

#include <sys/time.h>
#ifndef NO_UNISTD_H
#include <unistd.h>
#endif
#include <fcntl.h>
/*#include <signal.h> */

#include <errno.h> 

void write_timeout_error();
void connection_failure();


#define BIND_MAX_RETRY		128
#define BIND_ADDRESS_INCREMENT	16
#define BIND_INITIAL_ADDRESS	5000
#define BIND_LAST_ADDRESS	65534
static iLastAddressUsed = BIND_INITIAL_ADDRESS;

DEFUN("OPEN-NAMED-SOCKET",object,fSopen_named_socket,SI,1,1,NONE,OI,OO,OO,OO,
"Open a socket on PORT and return (cons fd portname) where file \
descriptor is a small fixnum which is the write file descriptor for \
the socket.  If PORT is zero do automatic allocation of port") 
     (port)
int port;
{ int s, n, rc; struct
sockaddr_in addr;

  /* Using TCP layer */
  s = socket(PF_INET, SOCK_STREAM, 0);
  if (s < 0)
    {
      perror("ERROR !!! socket creation failed in sock_connect_to_name\n");
      return Cnil;
    }

  addr.sin_family = PF_INET;
  addr.sin_addr.s_addr = INADDR_ANY;
  memset(addr.sin_zero, 0, 8);
  n = sizeof addr;

  if (port == 0)
    {
#define MY_HTONS(x) htons((unsigned short)((x) & 0xffff))      
      int cRetry = 0;
      do {
	addr.sin_port = MY_HTONS(iLastAddressUsed);
	rc = bind(s, (struct sockaddr *)&addr, n);

	cRetry++;
	iLastAddressUsed += BIND_ADDRESS_INCREMENT;
	if (iLastAddressUsed > BIND_LAST_ADDRESS)
	  iLastAddressUsed = BIND_INITIAL_ADDRESS;
      } while ((rc < 0) && (errno == EADDRINUSE) && (cRetry < BIND_MAX_RETRY));
      if (0)
	{
	  fprintf(stderr,
  "\nAssigned automatic address to socket : port(%d), errno(%d), bind_rc(%d), iLastAddressUsed(%d), retries(%d)\n"
		  , addr.sin_port, errno, rc, iLastAddressUsed, cRetry
		  );
	  fflush(stderr);
	}
    }
  else
    {
      addr.sin_port = MY_HTONS(port);
      rc = bind(s, (struct sockaddr *)&addr, n);
    }
  if (rc < 0)
    {
      perror("ERROR !!! Failed to bind socket in sock_open_named_socket\n");
      close(s);
      return Cnil;
    }
  rc = listen(s, 3);
  if (rc < 0)
    {
      perror("ERROR ! listen failed on socket in sock_open_named_socket");
      close(s);
      return Cnil;
    }

  return make_cons(make_fixnum(s), make_fixnum(ntohs(addr.sin_port)));
}

DEFUN("CLOSE-FD",object,fSclose_fd,SI,1,1,NONE,OI,OO,OO,OO,
      "Close the file descriptor FD")(fd)
     int fd;
{RETURN1(0==close(fd) ? Ct : Cnil);}

DEFUN("CLOSE-SD",object,fSclose_sfd,SI,1,1,NONE,OO,OO,OO,OO,
      "Close the socket connection sfd")(sfd)
     object sfd;
{ int res;
  free(OBJ_TO_CONNECTION_STATE(sfd)->read_buffer);
  res = close(OBJ_TO_CONNECTION_STATE(sfd)->fd);
  free (OBJ_TO_CONNECTION_STATE(sfd));
  RETURN1(res ? Ct : Cnil);
}


DEFUN("ACCEPT-SOCKET-CONNECTION",object,fSaccept_socket_connection,
      SI,1,1,NONE,OO,OO,OO,OO,
      "Given a NAMED_SOCKET it waits for a connection on this \
and returns (list* named_socket fd name1) when one is established")
     (named_socket)
     object named_socket;
{
  int n, fd;
  struct sockaddr_in addr;
  object x; 
  n = sizeof addr;
  fd = accept(fix(car(named_socket)) , (struct sockaddr *)&addr, &n);
  if (fd < 0)
    {
      perror("ERROR ! accept on socket failed in sock_accept_connection");
      fflush(stderr);
      return Cnil;
    }
  x = alloc_simple_string(sizeof(struct connection_state));
  x->ust.ust_self = (void *)setup_connection_state(fd);
  return make_cons(
		   make_cons(x
			     , make_simple_string(
						  inet_ntoa(addr.sin_addr))),
		   named_socket
		   );
}

object
sock_hostname_to_hostid_list(host_name)
     char *host_name;
{
  struct hostent *h;
  object addr_list = Cnil;
  int i;

  h = gethostbyname(host_name);

  for (i = 0; h->h_addr_list[i] != 0; i++)
    {
      addr_list = make_cons(make_simple_string(inet_ntoa(*(struct in_addr *)h->h_addr_list[i])), addr_list);
    }
  return addr_list;
}

    
      

DEFUN("HOSTNAME-TO-HOSTID",object,fShostname_to_hostid,SI,1,1,
      NONE,OO,OO,OO,OO,"")(host)
{
  struct hostent *h;
  char buf[300];
  char *p;
  p = lisp_copy_to_null_terminated(host,buf,sizeof(buf));
  h = gethostbyname(p);
  if (p != buf) free (p);
  if (h && h->h_addr_list[0])
    return
     make_simple_string(inet_ntoa(*(struct in_addr *)h->h_addr_list[0]));
  else return Cnil;
}

DEFUN("GETHOSTNAME",object,fSgethostname,SI,0,0,NONE,OO,OO,OO,OO,
      "Returns HOSTNAME of the local host")
     ()
{char buf[300];
 if (0 == gethostname(buf,sizeof(buf)))
   return make_simple_string(buf);
 else return Cnil;
}

DEFUN("HOSTID-TO-HOSTNAME",object,fShostid_to_hostname,SI,
      1,10,NONE,OO,OO,OO,OO,"")
     (host_id)
     object host_id;
{char *hostid;
  struct in_addr addr;
  struct hostent *h;
  char buf[300];
  hostid = lisp_copy_to_null_terminated(host_id,buf,sizeof(buf));
  addr.s_addr = inet_addr(hostid);
  h = gethostbyaddr((char *)&addr, 4, AF_INET);
  if (h && h->h_name && *h->h_name)
    return make_simple_string(h->h_name);
  else
    return Cnil;
}

object
sock_get_name(s)
     int s;
{
  struct sockaddr_in addr;
  int m = sizeof(addr);
  getsockname(s, (struct sockaddr *)&addr, &m);
  return make_cons(
		   make_cons(
			     make_fixnum(addr.sin_port)
			     , make_simple_string(inet_ntoa(addr.sin_addr))
			     )
		   ,make_cons(make_fixnum(addr.sin_family)
			      , make_fixnum(s))
		   );
}

#include "comm.c"


DEFUN("CONNECTION-STATE-FD",int,fSconnection_state_fd,SI,1,1,NONE,IO,OO,OO,OO,"") (sfd)
     object sfd;
{ return OBJ_TO_CONNECTION_STATE(sfd)->fd;
}
     
DEFUN("OUR-WRITE",int,fSour_write,SI,3,3,NONE,IO,OI,OO,OO,"")
     (sfd,buffer,nbytes)
     object buffer;
     object sfd;
     int nbytes;
{ return write1(OBJ_TO_CONNECTION_STATE(sfd),buffer->ust.ust_self,nbytes);
}

DEFUN("OUR-READ-WITH-OFFSET",int,fSour_read_with_offset,SI,5,5,NONE,
      IO,OI,II,OO,
      "Read from STATE-FD into string BUFFER putting data at OFFSET and reading NBYTES, waiting for TIMEOUT before failing")
     (fd,buffer,offset,nbytes,timeout)
     int offset,nbytes,timeout;
     object buffer,fd;
{ return read1(OBJ_TO_CONNECTION_STATE(fd),&((buffer)->ust.ust_self[offset]),nbytes,timeout);
}


enum print_arglist_codes {
    normal,
    no_leading_space,
    join_follows,
    end_join,
    begin_join,
    begin_join_no_leading_space,
    no_quote,
    no_quote_no_leading_space,
    no_quote_downcase,
    no_quotes_and_no_leading_space
  };

  /* push object X into the string with fill pointer STR, according to CODE
     */
  

#define PUSH(_c) do{if (--left < 0) goto FAIL; \
		     *xx++ = _c;}while(0)


#define BEGIN_QUOTE '"'
#define END_QUOTE '"'

static needs_quoting[256];

DEFUN("PRINT-TO-STRING1",object,fSprint_to_string1,SI,3,3,NONE,OO,OO,OO,OO,
      "Print to STRING the object X according to CODE.   The string must have \
fill pointer, and this will be advanced.")
     (str,x,the_code)
object str,x;
object the_code;
{ enum type t = type_of(x);
  int fp = str->st.st_fillp;
  char *xx = &(str->st.st_self[fp]);
  int left = str->st.st_dim - fp;
  char buf[30];
  char *p;
  enum print_arglist_codes code = fix(the_code);

  if (code==no_quote || code == no_quotes_and_no_leading_space)
       { needs_quoting['"']=0;
	 needs_quoting['$']=0;
	 needs_quoting['\\']=0;
	  needs_quoting['[']=0;
/*	 needs_quoting[']']=0; */
       }
  else { needs_quoting['"']=1;
	 needs_quoting['$']=1;
	 needs_quoting['\\']=1;
	 needs_quoting['[']=1;
/*	 needs_quoting[']']=1; */
       }
 { 
  int downcase ;
  int do_end_quote = 0;
  if(type_of(str)!=t_string)
    FEerror("Must be given string with fill pointer",0);
  if (t==t_symbol) downcase=1;
  else downcase=0;
  
  switch (code){

  case no_quote_downcase:
    downcase = 1;
  case no_quote:
    PUSH(' ');
  case  no_quotes_and_no_leading_space:
  case no_quote_no_leading_space:
  break;

  case normal:
    PUSH(' ');
  case no_leading_space:
    if (t==t_string)
      { do_end_quote = 1;
	PUSH(BEGIN_QUOTE);
      }
    break;
    
  case begin_join:
    PUSH(' ');
  case begin_join_no_leading_space:
    PUSH(BEGIN_QUOTE);
    break;
  case  end_join:
    do_end_quote=1;
    break;
  case join_follows:


    break;
  default: abort();
  }
  
  switch (t) {
  case t_symbol:
    if (x->s.s_hpack == keyword_package)
      {if (code == normal)
	 PUSH('-');}
  case t_string:
    {int len = x->st.st_fillp;
      p = &x->st.st_self[0];
     if (downcase)
     while (--len>=0)
       { char c = *p++;
	 c=tolower(c);
	 if(needs_quoting[c])
	   PUSH('\\');
	 PUSH(c);}
     else
       while (--len>=0)
       { char c = *p++;
	 if(needs_quoting[c])
	   PUSH('\\');	 
	 PUSH(c);}}
   break;
   case t_fixnum:
     sprintf(buf,"%d",fix(x));
     p = buf;
     while(*p) {PUSH(*p);p++;}
     break;
   case t_longfloat:
     sprintf(buf,"%.2f",lf(x));
     p = buf;
     while(*p) {PUSH(*p);p++;}
     break;
   case t_shortfloat:
     sprintf(buf,"%.2f",sf(x));
     p = buf;
     while(*p) {PUSH(*p);p++;}
     break;
   case t_bignum:
     goto FAIL;
   default:
     FEerror("Bad type for print_string ~s",1,x);
   }
     if(do_end_quote) PUSH('"');
    str->st.st_fillp += (xx - &(str->st.st_self[fp]));
    return Ct;
 FAIL:

  /* either ran out of storage or tried to print a bignum.
     The caller will handle these two cases
     */
   return Cnil;
   }
}

void
not_defined_for_os()
{ FEerror("Function not defined for this operating system",0);}


DEFUN("SET-SIGIO-FOR-FD",object,fSset_sigio_for_fd,SI,1,1,NONE,OI,OO,OO,OO,"")
     (fd)
     int fd;
{ int flags;
  /* for the moment we will use SIGUSR1 to notify, instead of depending on SIGIO,
     since LINUX does not support the latter yet...
     So right  now this does nothing... 
  */   
#if !defined(FASYNC) || !defined(SET_FD_TO_GIVE_SIGIO)
  not_defined_for_os();

#else
#ifdef SET_FD_TO_GIVE_SIGIO
  SET_FD_TO_GIVE_SIGIO(fd);
#else
  /* want something like this... but wont work on all machines. */
  flags = fcntl(fd,F_GETFL,0);
  if (flags == -1
      || ( flags |=  FASYNC , 0)
      || -1 ==   fcntl(fd,F_SETFL,flags)
      || -1 ==   fcntl(fd,F_SETOWN,getpid()))
    {perror("Could not set ASYNC IO for SIGIO:");
     return Cnil;}
#endif
#endif

  return (Ct);

}
     
DEFUN("RESET-STRING-INPUT-STREAM",object,fSreset_string_input_stream,SI,4,4,NONE,OO,OI,IO,OO,
      "Reuse a string output STREAM by setting its output to STRING \
and positioning the ouput/input to start at START and end at END")
     (strm,string,start,end)
     object strm,string;
     int start,end;
{ strm->sm.sm_object0 = string;
  strm->sm.sm_int0 = start;
  strm->sm.sm_int1 = end;
  return strm;
}

DEFUN("CHECK-STATE-INPUT",int ,fScheck_state_input,SI,2,2,NONE,IO,IO,OO,OO,
      "") (osfd,timeout)
     object osfd;
     int timeout;
{
  return fScheck_dsfd_for_input(OBJ_TO_CONNECTION_STATE(osfd),timeout);

}

DEFUN("CLEAR-CONNECTION-STATE",int,fSclear_connection_state,
      SI,1,1,NONE,IO,OO,OO,OO,
      "Read on FD until nothing left to read.  Return number of bytes read")
     (osfd)
     object osfd;
{ 
  struct connection_state *sfd = OBJ_TO_CONNECTION_STATE(osfd);
 int n=fSclear_connection(sfd->fd);;
  
  sfd->valid_data = sfd->read_buffer;
  sfd->valid_data_size = 0;
  sfd->bytes_received_not_confirmed += n;
 return n;
}

#endif

void
write_timeout_error(s)
     char *s;
{FEerror("Write timeout: ~s",1,make_simple_string(s));
}

void
connection_failure(s)
     char *s;
{FEerror("Connect failure: ~s",1,make_simple_string(s));
}


