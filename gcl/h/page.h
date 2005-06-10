

#define MAYBE_DATA_P(pp) ((char *)(pp)>= (char *) DBEGIN)

#ifndef DBEGIN
#define DBEGIN 0
#endif

#define VALID_DATA_ADDRESS_P(pp) \
  (MAYBE_DATA_P(pp) &&  ((char *)(pp) < heap_end))

#ifndef page
#define page(p)	((unsigned long)(((unsigned long)(((char *)(p))-DBEGIN)>>PAGEWIDTH)))
#define	pagetochar(x)	((char *)((((unsigned long)x) << PAGEWIDTH) + DBEGIN))
#endif
  
#ifdef UNIX
#define CHECK_FOR_INTERRUPT \
   if (interrupt_flag) sigint()
#else
#define CHECK_FOR_INTERRUPT
#endif

/* alignment required for pointers */
#ifndef PTR_ALIGN
#define PTR_ALIGN SIZEOF_LONG
#endif

#define ROUND_UP_PTR(n)	(((long)(n) + (PTR_ALIGN-1)) & ~(PTR_ALIGN-1))
#define ROUND_DOWN_PTR(n) (((long)(n)  & ~(PTR_ALIGN-1)))

/* alignment required for contiguous pointers */
#if PTR_ALIGN < SIZEOF_CONTBLOCK
#define CPTR_ALIGN SIZEOF_CONTBLOCK
#else
#define CPTR_ALIGN PTR_ALIGN
#endif
/* #define CPTR_ALIGN (PTR_ALIGN < sizeof(struct contblock) ? sizeof(struct contblock) : PTR_ALIGN) */

#define ROUND_UP_PTR_CONT(n)	(((long)(n) + (CPTR_ALIGN-1)) & ~(CPTR_ALIGN-1))
#define ROUND_DOWN_PTR_CONT(n) (((long)(n)  & ~(CPTR_ALIGN-1)))

#ifdef SGC

char sgc_type_map[MAXPAGE];
/*  int memory_protect(); */

#define NORMAL_PAGE 0

/* writable til next gc at least */
#define SGC_TEMP_WRITABLE  1   

/* Contains objects which will be gc'd */
#define SGC_PAGE_FLAG  2       

/* keep writable eg malloc's for system call */
#define SGC_PERM_WRITABLE 4    
#define SGC_WRITABLE  (SGC_PERM_WRITABLE | SGC_TEMP_WRITABLE)
#define SGC_PAGE (SGC_TEMP_WRITABLE | SGC_PAGE_FLAG)

#define SGC_PAGE_P(p) ((unsigned long)p<MAXPAGE && (sgc_type_map[p] & SGC_PAGE_FLAG))
#define WRITABLE_PAGE_P(p) ((unsigned long)p<MAXPAGE && (sgc_type_map[p] & SGC_WRITABLE))
#define ON_SGC_PAGE(x) ((unsigned long)page(x)<MAXPAGE && (sgc_type_map[page(x)] & SGC_PAGE_FLAG))
#define ON_WRITABLE_PAGE(x) ((unsigned long)page(x)<MAXPAGE && (sgc_type_map[page(x)] & SGC_WRITABLE))


#define  IF_WRITABLE(x,if_code) do {unsigned long xSG= page(x); \
			    if(((xSG & (-MAXPAGE)) ==0) && xSG < MAXPAGE && \
			       (sgc_type_map[xSG] & SGC_WRITABLE)) \
				 {if_code;}} while(0)

#define sgc_mark_object(x) IF_WRITABLE(x,if(!is_marked(x)) sgc_mark_object1(x))
/*
#define sgc_mark_object(x) sgc_mark_object1(x)
*/
/* When not 0, the free lists in the type manager are freelists
   on SGC_PAGE's, for those types supporting sgc.
   Marking and sweeping is done specially */
   
int sgc_on;


/* for the S field of the FIRSTWORD */
enum sgc_type { SGC_NORMAL,    /* not allocated since the last sgc */
                SGC_RECENT     /* allocated since last sgc */
 		};


#define TM_BASE_TYPE_P(i) (((int) (tm_table[i].tm_type)) == i)

/* void perm_writable(char *,long) ; */
/* void make_writable(long,long); */


#define ROUND_DOWN_PAGE_NO(x) ((x) - (x % page_multiple))
#define ROUND_UP_PAGE_NO(x) (page_multiple *(((x)+page_multiple \
					      -1)/page_multiple))

/* check if a relblock address is new relblock */
#define SGC_RELBLOCK_P(x)  ((char *)(x) >= rb_start)

#define SGC_OR_M(x) (is_marked_or_free((object)x) || (is_cons((object)x) ? ON_SGC_PAGE((object)x) : ((object)x)->d.s))
#ifndef SIGPROTV
#define SIGPROTV SIGSEGV
#endif

#ifndef INSTALL_MPROTECT_HANDLER
#define INSTALL_MPROTECT_HANDLER gcl_signal(SIGPROTV, memprotect_handler)
#endif
/* extern void memprotect_handler (); */

        
#else  /* END SGC */
#define sgc_quit()
#define sgc_start()
#define sgc_count_type(x) 0
#endif     

extern int sgc_enabled;
#define TM_NUSED(pt) (((pt).tm_npage*(pt).tm_nppage) - (pt).tm_nfree - (pt).tm_alt_nfree)




    /* virtual memory pages are this multiple of lisp page size */
#ifndef IN_MAIN  
extern int page_multiple;
#endif       


/*
	Type map.

	enum type type_map[MAXPAGE];
*/
char type_map[MAXPAGE];

#define	available_pages	\
	((long)((real_maxpage-page(heap_end)-new_holepage-nrbpage-real_maxpage/32)))
