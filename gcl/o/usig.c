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

You should have received a copy of the GNU Library General Public License 
along with GCL; see the file COPYING.  If not, write to the Free Software
Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

*/



#ifndef IN_UNIXINT
#include "include.h"


#include <signal.h>
#endif

#ifdef USIG
#include USIG
#else

#ifdef HAVE_SIGACTION
#define HAVE_SIGPROCMASK
#endif


#include "usig.h"

EXTER
char signals_handled[6];

void
gcl_signal(signo,handler)
     int signo;
     void (*handler)();
{
  char *p = signals_handled;
  while (*p)
    { if (*p==signo)
	{our_signal_handler[signo] = handler;
	 handler = main_signal_handler;
	 break;
       }
      p++;}
 
  {      
  
#ifdef HAVE_SIGACTION
    struct sigaction action;
    action.sa_handler = handler;
/*    action.sa_flags =  SA_RESTART | ((signo == SIGSEGV || signo == SIGBUS) ? SV_ONSTACK : 0) */
   action.sa_flags = SA_RESTART | ((signo == SIGSEGV || signo == SIGBUS) ? SV_ONSTACK : 0)  
#ifdef SA_SIGINFO
    | SA_SIGINFO
#endif      
      ;
    sigemptyset(&action.sa_mask);
    sigaddset(&action.sa_mask,signo);
    sigaction(signo,&action,0);
#else
#ifdef HAVE_SIGVEC
    struct sigvec vec;
    vec.sv_handler =  handler;
    vec.sv_flags =  (signo == SIGSEGV || signo == SIGBUS ? SV_ONSTACK : 0);
    vec.sv_mask = sigmask(signo);
    sigvec(signo,&vec,0);
#else
    signal(signo,handler);
#endif
#endif
  }
}

/* remove the signal n from the signal mask */

unblock_signals(n,m)
{ int current_mask;
  int result;
#ifdef  SIG_UNBLOCK_SIGNALS
  SIG_UNBLOCK_SIGNALS(result,n,n);
#else  
#ifdef HAVE_SIGPROCMASK
  /* posix */
  { sigset_t set,oset;
    sigemptyset(&set);
    sigaddset(&set,n);
    sigaddset(&set,m);
    sigprocmask(SIG_UNBLOCK,&set,&oset);
    result =((sigismember(&oset,n) ? signal_mask(n) : 0)
              |(sigismember(&oset,m) ? signal_mask(m) : 0));
  }
#else

  current_mask = sigblock(0);
  sigsetmask(~(sigmask(m)) & ~(sigmask(n)) & current_mask);
  result = (current_mask & sigmask(m) ? signal_mask(m) : 0)
    | (current_mask & sigmask(n) ? signal_mask(n) : 0);
#endif
#endif
  return result;
}

unblock_sigusr_sigio()
{ int current_mask;
#ifdef HAVE_SIGPROCMASK
  /* posix */
  { sigset_t set;
    sigemptyset(&set);
    sigaddset(&set,SIGUSR1);
    sigaddset(&set,SIGIO);
    sigprocmask( SIG_UNBLOCK,&set,0);
  }
#else
  current_mask = sigblock(0);
  return sigsetmask(~(sigmask(SIGIO))&~(sigmask(SIGUSR1)) & current_mask);
#endif
}


void
sigfpe()
{
	gcl_signal(SIGFPE, sigfpe);
	FEerror("Floating-point exception.", 0);
}
sigpipe()
{
	gcl_signal(SIGPIPE, sigpipe);
	perror("");
	FEerror("Broken pipe", 0);
}


void
sigint()
{
  unblock_signals(SIGINT,SIGINT);
  terminal_interrupt(1);
}



void
sigalrm()
{
  unblock_signals(SIGALRM,SIGALRM);
  raise_pending_signals(sig_try_to_delay);
}

DEFVAR("*INTERRUPT-ENABLE*",sSAinterrupt_enableA,SI,sLt,"");

DEF_ORDINARY("SIGUSR1-INTERRUPT",sSsigusr1_interrupt,SI,"");
DEF_ORDINARY("SIGIO-INTERRUPT",sSsigio_interrupt,SI,"");

void
sigusr1()
{ifuncall1(sSsigusr1_interrupt,Cnil);}

void
sigio()
{ifuncall1(sSsigio_interrupt,Cnil);}



void
install_default_signals()
{	gcl_signal(SIGFPE, sigfpe);
	gcl_signal(SIGPIPE, sigpipe);
	gcl_signal(SIGINT, sigint);
	gcl_signal(SIGUSR1, sigusr1);
	gcl_signal(SIGIO, sigio);
	gcl_signal(SIGALRM, sigalrm);
	
	/*install_segmentation_catcher(); */
	signals_allowed = sig_normal;
      }


	

#endif
