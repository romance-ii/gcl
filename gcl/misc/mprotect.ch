In this file are all changes necessary to implement the 4.3BSD system
call mprotect, and the changes to make sigreturn pass back the address
where a fault occurred as the `code' arg.   Note that sun passes the
address as a 4'th arg.   This might be preferable, but would involve
changes to locore.s.

This has been tested on an hp370 running 4.3 BSD from MT Xinu.

A man page entry for the call as implemented below.

Inserting file /usr/man/man2/mprotect.2
---Begin File /usr/man/man2/mprotect.2---
.\" @(#)mprotect.2 
.TH MPROTECT 2 "9 December 1989"
.SH NAME
mprotect \- specify protection of data section memory
.SH SYNOPSIS
.nf
.ft B
#include <sys/mman.h>
.ft
.LP
.ft B
mprotect(addr, len, prot)
caddr_t addr;
int len, prot;
.ft
.fi
.IX  mprotect  ""  \fLmprotect\fP
.IX  "memory management"  mprotect  ""  \fLmprotect\fP
.IX  "change protections \(em \fLmprotect\fP"
.SH DESCRIPTION
.LP
.B mprotect(\|)
changes the access protections on the mappings specified
by
the range
[\fIaddr, addr + len\fP\^)
to be that specified by
.IR prot .
Legitimate values for
.I prot
are PROT_READ and (PROT_WRITE | PROT_READ). 
.SH RETURN VALUE
.LP
.B mprotect(\|)
returns 0 on success, \-1 on failure.
.SH ERRORS
.B mprotect(\|)
will fail if:
.TP 15
.SM EINVAL
.I addr
is not a multiple of the page size as returned
by
.BR getpagesize (2).
.TP
.SM ENOMEM
Addresses in the range
[\fIaddr, addr + len\fP)
are not in the data section of a process.
.LP
.SH SEE ALSO
.BR getpagesize (2),

---End File /usr/man/man2/mprotect.2---


You need to compile the following and add it to /lib/libc.a

Inserting file /usr/src/lib/libc/hp300/sys/mprotect.c
---Begin File /usr/src/lib/libc/hp300/sys/mprotect.c---
#ifdef SYSLIBC_SCCS
_sccsid:.asciz	"@(#)mprotect.c"
#endif SYSLIBC_SCCS

#include "SYS.h"

SYSCALL(mprotect)
	rts
---End File /usr/src/lib/libc/hp300/sys/mprotect.c---



*** hp300/machdep.c.orig	Tue Aug 29 13:09:56 1989
--- hp300/machdep.c	Mon Dec 11 17:07:18 1989
***************
*** 560,566 ****
  #endif
  	sigf.sf_signum = sig;
  	sigf.sf_code = 0;
! 	if (sig == SIGILL || sig == SIGFPE) {
  		sigf.sf_code = u.u_code;
  		u.u_code = 0;
  	}
--- 560,566 ----
  #endif
  	sigf.sf_signum = sig;
  	sigf.sf_code = 0;
! 	if (sig == SIGILL || sig == SIGFPE || sig == SIGBUS) {
  		sigf.sf_code = u.u_code;
  		u.u_code = 0;
  	}
*** sys/kern_mman.c.orig	Tue Aug 29 13:16:29 1989
--- sys/kern_mman.c	Thu Dec 14 10:07:39 1989
***************
*** 249,257 ****
  	u.u_pofile[fd] &= ~UF_MAPPED;
  }
  
  mprotect()
! {
  
  }
  
  madvise()
--- 249,296 ----
  	u.u_pofile[fd] &= ~UF_MAPPED;
  }
  
+ 
  mprotect()
! {	struct a {
! 		caddr_t	addr;
! 		int	len;
! 		int	prot;
! 	} *uap = (struct a *)u.u_ap;
! 	int fv,off;
! 	int tprot;
! 	register struct pte *pte;
! 	struct cmap *c;
! 	int s;
  
+ 	u.u_r.r_val1 = -1;
+ 
+ 	if ((uap->len < 0  ||
+ 	     (int)uap->addr & CLOFSET)) {
+ 	  u.u_error = EINVAL;
+ 	  return;
+ 	}
+ 
+ 
+ 	if ((uap->prot & PROT_WRITE) == 0)
+ 	  tprot= PG_RO;
+ 	else tprot=PG_RW;
+ 	/* check the pages are in data section  */
+ 	if (!(isadsv(u.u_procp, btoc(uap->addr))
+             &&isadsv(u.u_procp ,btoc(uap->addr+uap->len) -1)))
+ 	  {     u.u_error = ENOMEM;
+ 		return;}
+ 		
+ 
+ 	fv = btop(uap->addr);
+ 	pte = vtopte(u.u_procp, fv);
+ 	for (off = 0; off < uap->len; off += NBPG) {
+ 	  
+ 	  *(u_int *)pte &= ~PG_PROT;
+ 	  *(u_int *)pte |= tprot;
+ 	  pte++;}
+ 
+ 	newptes(vtopte(u.u_procp, fv), fv, btoc(uap->len));
+ 	u.u_r.r_val1 = 0;
  }
  
  madvise()
*** hp300/trap.c.orig	Tue Aug 29 13:09:59 1989
--- hp300/trap.c	Mon Dec 11 17:48:59 1989
***************
*** 112,117 ****
--- 112,118 ----
  
  	case T_BUSERR+USER:	/* bus error */
  	case T_ADDRERR+USER:	/* address error */
+ 		u.u_code=v;
  		i = SIGBUS;
  		break;
  
***************
*** 293,298 ****
--- 294,300 ----
  					printf("PTF|WPF...\n");
  					if (type == T_MMUFLT)
  						goto copyfault;
+ 					u.u_code=v;
  					i = SIGBUS;
  					break;
  				}
***************
*** 346,351 ****
--- 348,354 ----
  #endif
  			if (type == T_MMUFLT)
  				goto copyfault;
+ 			u.u_code=v;
  			i = SIGBUS;
  			break;
  		}
