

#define ALLOCATE(n) (*gcl_gmp_allocfun)(n)

void *gcl_gmp_alloc(size_t size)
{
   return (void *) ALLOCATE(size);
}

void *gcl_gmp_realloc(void *oldmem, size_t oldsize, size_t newsize)
{
  unsigned int *old,*new;
  int i = oldsize;
  if (MP_SELF(big_gcprotect)) abort();
  MP_SELF(big_gcprotect)=oldmem;
  MP_ALLOCATED(big_gcprotect)=oldsize/MP_LIMB_SIZE;
  new = (void *)ALLOCATE(newsize);
  old = oldmem;
  bcopy(MP_SELF(big_gcprotect),new,oldsize);
  MP_SELF(big_gcprotect)=0;
  if (inheap(oldmem)) insert_contblock(oldmem,oldsize);
  return new;
}

void gcl_gmp_free(void *old, size_t oldsize)
{
}

