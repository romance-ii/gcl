/*
  NetBSD.h based on original -

  386-bsd.h 

  Hacked September/93 by Paul F. Werkowsksi for 386BSD.
    Tested on i486 EISA 16MB hardware/386BSD 0.1 + PatchKit 0.2.4
    * gcc-2.3.3
    * SGC enabled (big performance win but needs a small kernel hack)
    * Files in September-16-92-Systems.tar (PCL clcs loop clx) compile & run.
      CLUE also compiles and runs. 16 MB insufficient memory to compile CLIO.

  Hacked November/93 by Werkowski for FreeBSD. 

    Essentially no changes except to use 'unexlin.c' instead of
    'unixsave.c'. FreeBSD 1.0.2 has (at this time 17-Nov-93) a bug in
    stdio that needs repair before this will work - otherwise use libc.a
    from 386bsd pk2.4. The 'bug' is that vfprintf prints out a 0l0 as '
    0e+00' while akcl edit_double in print.d expects something like '
    0.00000000000e+00'.

  Richard Tobin <richard@castle.ed.ac.uk> 

    ported akcl-1.619 to NetBSD 0.9

  Bill Morgart <wsm@morticia.ssw.com> 10/19/94

    Ported gcl-1.0 to NetBSD 1.0Beta 
    Modified gcl-1.1 for NetBSD 1.0Beta (static linked)

*/

#include "bsd.h"
/*#include "386.h" /* NOT if you want this to work on 386bsd!!!*/

#define ADDITIONAL_FEATURES \
		     ADD_FEATURE("386BSD");\
                     ADD_FEATURE("NetBSD");


#define	I386			/* ?? this is apparently not used anywhere */
#define	IEEEFLOAT

/* NetBSD stdio is based on chris torek's work, no setbuf */
#define NO_SETBUF
#define setup_stream_buffer(x)
#define deallocate_stream_buffer(x)


#undef HAVE_XDR

#define USE_ATT_TIME

/* begin listen for input */
#undef LISTEN_FOR_INPUT		/* default in bsd.h is loser in 386bsd */

#define LISTEN_FOR_INPUT(fp) \
  if((fp)->_r <=0 && (c=0,ioctl((fp)->_file, FIONREAD, &c),c<=0)) \
  return 0;

/* end listen for input */

/* begin stuff for dumping and reloading */
#define DATA_BEGIN (char *)N_DATADDR(header);
#define A_TEXT_OFFSET(x) (sizeof (struct exec))
#define A_TEXT_SEEK(hdr) (N_TXTOFF(hdr) + A_TEXT_OFFSET(hdr))
#define start_of_data() &etext
#define start_of_text() ((char *)(sizeof(struct exec) + getpagesize()))

#define UNIXSAVE "unexec.c"
#ifdef UNIXSAVE 
 extern char etext;
#endif

#define RELOC_FILE "rel_sun3.c" /* for SFASL - enabled in bsd.h */

/* end stuff for dumping and reloading */

/* begin setup alternate signal stack */
#define SIG_STACK_SIZE SIGSTKSZ
#define SETUP_SIG_STACK \
{ static struct sigaltstack estack ; \
  estack.ss_size = sizeof(estack_buf) ; \
  estack.ss_flags = 0; \
  estack.ss_base = (char *) &estack_buf[SIG_STACK_SIZE-1]; \
  if (sigaltstack(&estack, (struct sigaltstack *)0) < 0) \
               perror("sigaltstack");} \

/* end setup signal stack  */

#define HZ		60

/* begin  for GC */
#define PAGEWIDTH 12		/* i386 sees 4096 byte pages */
#define HARDWARE_PAGESIZE (1 << PAGEWIDTH)

/* end for GC */

/* begin read_header */
#undef READ_HEADER
#define READ_HEADER \
 	fread(&header, sizeof(header), 1, original); \
	data_begin=DATA_BEGIN; \
	{ \
            int extra = ((int)sbrk(0) & (HARDWARE_PAGESIZE - 1)); \
	    if(extra != 0) \
	      sbrk(HARDWARE_PAGESIZE - extra); \
	} \
	data_end = sbrk(0); \
	original_data = header.a_data; \
	header.a_data = data_end - data_begin; \
	header.a_bss = 0; \
	fwrite(&header, sizeof(header), 1, save); \
	fflush(save);

/* end read header */

#define INSTALL_SEGMENTATION_CATCHER \
  	 (void) signal(SIGSEGV,segmentation_catcher); \
  	 (void) signal(SIGBUS,segmentation_catcher)






