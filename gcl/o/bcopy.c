#include <stdlib.h>
void bcopy(const void *s1, void *s2, size_t n)
{ while (n-- > 0) {
    *((char *)s2)++ = *((char *)s1)++;
}
}


