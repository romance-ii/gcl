#include <stdlib.h>
int bcmp(const char *s1, const char *s2, size_t n)
{     while (n-- > 0)
	{if (*s1++ != *s2++)
	 return 1;}
      return 0;
    }


  
