#ifndef _SYSDEP_SUNOS_H_
#define _SYSDEP_SUNOS_H_

#include <errno.h>

#define memmove(d,s,c)	bcopy(s,d,c)
#define strerror(err)	(perror(err),0)

#endif
