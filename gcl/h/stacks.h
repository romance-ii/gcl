#ifndef MAXPAGE
#define MAXPAGE (32 * 1024)
#endif
#ifndef VSSIZE
#define VSSIZE 8192
#endif

#define VSGETA 128
EXTER object value_stack[VSSIZE + (STACK_OVER +1) *VSGETA];     

#define BDSSIZE		4096
#define	BDSGETA		160
EXTER struct bds_bd bind_stack[BDSSIZE + (STACK_OVER +1)* BDSGETA];

     
/*  #define	IHSSIZE		1024 */
/*  #define	IHSGETA		32 */
#define	IHSSIZE		4096
#define	IHSGETA		64
EXTER struct invocation_history ihs_stack[IHSSIZE + (STACK_OVER +1) * IHSGETA];     


#define FRSSIZE		1024
#define	FRSGETA		16
EXTER struct frame frame_stack[FRSSIZE + (STACK_OVER +1) * FRSGETA];

