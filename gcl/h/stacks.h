#ifndef MAXPAGE
#define MAXPAGE (128 * 1024)
#endif
#ifndef VSSIZE
#define VSSIZE 128*1024
#endif

#define VSGETA 128
EXTER object value_stack[VSSIZE + (STACK_OVER +1) *VSGETA];     

#ifndef BDSSIZE
#define BDSSIZE		2*1024
#endif
#define	BDSGETA		64
EXTER struct bds_bd bind_stack[BDSSIZE + (STACK_OVER +1)* BDSGETA];

     
#ifndef IHSSIZE
#define	IHSSIZE		4*1024
#endif
#define	IHSGETA		96
EXTER struct invocation_history ihs_stack[IHSSIZE + (STACK_OVER +1) * IHSGETA];     


#ifndef FRSSIZE
#define FRSSIZE		4*1024
#endif
#define	FRSGETA		96
EXTER struct frame frame_stack[FRSSIZE + (STACK_OVER +1) * FRSGETA];

