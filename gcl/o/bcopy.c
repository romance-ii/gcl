#include <stdlib.h>
void bcopy(const char *s1, char *s2, size_t n)
{ while (n-- > 0)
    *s2++ = *s1++;
}


