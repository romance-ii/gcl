#include <stdlib.h>
void bzero(void *b, size_t length)
{while(length-->0)
   *((char *)b)++ = 0;
}
