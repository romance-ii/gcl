#include <stdlib.h>
void *
bsearch(const void *key, const void *base, size_t nel, size_t keysize, int (*compar)(const void *, const void *))
{
  char *beg=base;
  char *end=base+keysize*(nel-1);
  char *mid;
  int cmp,tem;
  if (nel==0) return 0;
  cmp=(*compar)(beg,key);
  if (cmp==0) return beg;
  if (cmp> 0) return 0;
  cmp= (*compar)(key,end);
  if (cmp==0) return end;
  if (cmp> 0)return 0;
  /* key is in range from here on */
 start:
  if (nel<=2) return 0;
  tem=nel;
  nel=nel/2;
  mid=beg+(nel)*keysize;
  cmp= (*compar)(key,mid);
  if (cmp==0) return mid;
  if (cmp< 0) {end=mid; nel++;
	       goto start;;
	     }
  beg=mid;
  nel=tem-(nel);
  goto start;
}
