#define NEWS


#define	MC68020
#define	IEEEFLOAT



#undef   FILECPY_HEADER
#define FILECPY_HEADER \
	if (header.a_magic == ZMAGIC) \
		filecpy(save, original, PAGSIZ - sizeof(header)); \
	filecpy(save, original, header.a_text);

#define DATA_BEGIN  (char *)((TXTRELOC+header.a_text+(SEGSIZ-1)) & ~(SEGSIZ-1))

#define	TXTRELOC	0

/* Begin for cmpinclude */


/* End for cmpinclude */
