int bcmp(s1,s2,n)
char *s1,*s2;
int n;
{     while (n-- > 0)
	{if (*s1++ != *s2++)
	 return 1;}
      return 0;
    }


  
