
#undef setjmp
#define setjmp ((int(*)(void *))dlsetjmp)
#undef getc
#define getc   ((int(*)(void *))dlgetc)
#undef putc
#define putc   ((int(*)(int,void *))dlputc)
#undef bzero
#define bzero  ((void(*)(void *,int))dlbzero)
#undef memset
#define memset  ((void(*)(void *,int,int))dlmemset)
#undef feof
#define feof   ((int(*)(void *))dlfeof)
#undef fdopen
#define fdopen   (((void *)(*)(int,void *))dlfdopen)
#undef write
#define write   ((int(*)(int,void *,int))dlwrite)
#undef read
#define read   ((int(*)(int,void *,int))dlread)
#undef isinf
#define isinf  ((int(*)(double))dlisinf)
#undef isnan
#define isnan  ((int(*)(double))dlisnan)
#undef pipe
#define pipe  ((int(*)(int*))dlpipe)
#undef close
#define close  ((int(*)(int))dlclose)
#undef fork
#define fork  ((int(*)(void))dlfork)
