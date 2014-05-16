/*
 Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

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

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>


#include "include.h"

#ifdef _WIN32
#include <windows.h>
#define sleep(n) Sleep(1000 * n)
#endif

#ifdef ATT3B2
#include <signal.h>
int
system(command)
char *command;
{
	char buf[4];
	extern sigint();

	signal(SIGINT, SIG_IGN);
	write(4, command, strlen(command)+1);
	read(5, buf, 1);
	signal(SIGINT, sigint);
	return(buf[0]<<8);
}
#endif

#ifdef E15
#include <signal.h>
int
system(command)
char *command;
{
	char buf[4];
	extern sigint();

	signal(SIGINT, SIG_IGN);
	write(4, command, strlen(command)+1);
	read(5, buf, 1);
	signal(SIGINT, sigint);
	return(buf[0]<<8);
}
#endif

#ifdef _WIN32

DEFVAR("*WINE-DETECTED*",sSAwine_detectedA,SI,Cnil,"");

#include "windows.h"

static int mpid;

void
close_msys() {

  msystem("");

}

void
detect_wine() {

  char b[4096];
  struct stat ss;
  const char *s="/proc/self/status";
  FILE *f;
  object o;

  sSAwine_detectedA->s.s_dbind=Cnil;

  if (stat(s,&ss))
    return;

  massert(f=fopen(s,"r"));
  massert(fscanf(f,"%s",b)==1);
  massert(fscanf(f,"%s",b)==1);
  massert(!fclose(f));

  if (strncmp("wineserver",b,9))
    return;

  massert(o=sSAsystem_directoryA->s.s_dbind);
  massert(o!=Cnil);
  mpid=getpid();
  
  massert(snprintf(b,sizeof(b),"%-.*smsys /tmp/ out%0d tmp%0d log%0d",
		   o->st.st_fillp,o->st.st_self,mpid,mpid,mpid)>0);
  massert(!system(b));

  sSAwine_detectedA->s.s_dbind=Ct;
  
  massert(!atexit(close_msys));
  
}
#endif  

int
msystem(const char *s) {

  int r;

#ifdef _WIN32

  if (sSAwine_detectedA->s.s_dbind==Ct) {

    char b[4096],b1[4096],c;
    FILE *fp;

    massert(snprintf(b,sizeof(b),"/tmp/out%0d",mpid)>0);
    massert(snprintf(b1,sizeof(b1),"%s1",b)>0);

    massert(fp=fopen(b1,"w"));
    massert(fprintf(fp,"%s",s)>=0);
    massert(!fclose(fp));

    massert(MoveFileEx(b1,b,MOVEFILE_REPLACE_EXISTING));
    
    if (!*s)
      return 0;
    
    for (;;Sleep(100)) {
      
      massert(fp=fopen(b,"r"));
      massert((c=fgetc(fp))!=EOF);
      if (c!=s[0]) {
	massert(ungetc(c,fp)!=EOF);
	break;
      }
      massert(!fclose(fp));
      
    }
    
    massert(fscanf(fp,"%d",&r)==1);
    massert(!fclose(fp));

  } else

#endif
    r=system(s);
    
  return r;

}

static void
FFN(Lsystem)(void)
{
	char command[32768];
	int i;

	check_arg(1);
	check_type_string(&vs_base[0]);
	if (vs_base[0]->st.st_fillp >= 32768)
		FEerror("Too long command line: ~S.", 1, vs_base[0]);
	for (i = 0;  i < vs_base[0]->st.st_fillp;  i++)
		command[i] = vs_base[0]->st.st_self[i];
	command[i] = '\0';
	{int old = signals_allowed;
	 int res;
	 signals_allowed = sig_at_read;
	 res = msystem(command) ;
	 signals_allowed = old;
	 vs_base[0] = make_fixnum(res >> 8);
	 vs_base[1] = make_fixnum((res & 0xff));
	 vs_top++;
       }
}

DEFUN("GETPID",object,fSgetpid,SI,0,0,NONE,OO,OO,OO,OO,(void),
      "getpid  returns  the  process  ID  of the current process") {
  return make_fixnum(getpid());
}

void
gcl_init_unixsys(void)
{
	make_si_function("SYSTEM", Lsystem);
}
