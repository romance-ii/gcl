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

#ifdef __MINGW32__
#include <sys/types.h>          /* sigset_t */
#endif

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
gcl_signal(int signo, void (*handler) (/* ??? */))
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
int
unblock_signals(int n, int m)
{
  int result = 0;
  int current_mask;
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
    current_mask=0;
    result =((sigismember(&oset,n) ? signal_mask(n) : current_mask)
              |(sigismember(&oset,m) ? signal_mask(m) : current_mask));
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

void
unblock_sigusr_sigio(void)
{ 
#ifdef HAVE_SIGPROCMASK
  /* posix */
  { sigset_t set;
    sigemptyset(&set);
    sigaddset(&set,SIGUSR1);
    sigaddset(&set,SIGIO);
    sigprocmask( SIG_UNBLOCK,&set,0);
  }
#else
  int current_mask = sigblock(0);
  return sigsetmask(~(sigmask(SIGIO))&~(sigmask(SIGUSR1)) & current_mask);
#endif
}


static void
sigfpe1(void)
{
	gcl_signal(SIGFPE, sigfpe1);
	FEerror("Floating-point exception.", 0);
}
static void
sigpipe(void)
{
	gcl_signal(SIGPIPE, sigpipe);
	perror("");
	FEerror("Broken pipe", 0);
}


void
sigint(void)
{
  unblock_signals(SIGINT,SIGINT);
  terminal_interrupt(1);
}



static void
sigalrm(void)
{
  unblock_signals(SIGALRM,SIGALRM);
  raise_pending_signals(sig_try_to_delay);
}

DEFVAR("*INTERRUPT-ENABLE*",sSAinterrupt_enableA,SI,sLt,"");

DEF_ORDINARY("SIGUSR1-INTERRUPT",sSsigusr1_interrupt,SI,"");
DEF_ORDINARY("SIGIO-INTERRUPT",sSsigio_interrupt,SI,"");

static void
sigusr1(void)
{ifuncall1(sSsigusr1_interrupt,Cnil);}

static void
sigio(void)
{ifuncall1(sSsigio_interrupt,Cnil);}



void
install_default_signals(void)
{	gcl_signal(SIGFPE, sigfpe1);
	gcl_signal(SIGPIPE, sigpipe);
	gcl_signal(SIGINT, sigint);
	gcl_signal(SIGUSR1, sigusr1);
	gcl_signal(SIGIO, sigio);
	gcl_signal(SIGALRM, sigalrm);
	
	/*install_segmentation_catcher(); */
	signals_allowed = sig_normal;
      }


	

#endif
