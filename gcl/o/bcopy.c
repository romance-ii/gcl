void
bcopy(s1,s2,n)
char *s1,*s2;
int n;
{ while (n-- > 0)
    *s2++ = *s1++;
}


