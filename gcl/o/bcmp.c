int bcmp(const void *s1, const void *s2, size_t n)
{     while (n-- > 0)
	{if (*s1++ != *s2++)
	 return 1;}
      return 0;
    }


  
