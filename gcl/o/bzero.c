#include <stdlib.h>
void bzero(char *b, size_t length)
{while(length-->0)
   *b++ = 0;
}
