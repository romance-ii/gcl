/* Copyright William Schelter. All rights reserved.  This file does
the low level relocation which tends to be very system dependent.
It is included by the file sfasl.c
*/

#define EXTERNAL_P(rel) \
  relocation_info.r_type & )
  
#define HI12 0xfff00000
#define LO20 ~HI12
	
foo(){};
relocate()
{
  char *where;

  {unsigned int new_value;
   char tem [10];
#ifdef DEBUG
   printf("\nEnter relocate:*srelocation_info {r_symndx= %d, r_vaddr = %d,:",
	  relocation_info.r_symndx,
	  relocation_info.r_vaddr              
	  );fflush(stdout);
#endif
   where = the_start + relocation_info.r_vaddr;

   if(relocation_info.r_symndx < S_BSS){
#ifdef DEBUG
     printf("(relocation_info.r_symndx = %d < S_BSS)",relocation_info.r_symndx
	    );fflush(stdout);
     print_name(&symbol_table[relocation_info.r_symndx]);
#endif     
     switch(relocation_info.r_type){
     case R_KCALL:
       /* instructions like balix take a 20 bit argument
	  which wants to be the displacement in half words to
	  from the address of the instruction to the actual
	  address. */
       {int displ;
	unsigned int new;
	displ=  symbol_table[relocation_info.r_symndx].n_value -
	  (int)where;
	new= *(unsigned int *)where;

	/*			*(unsigned int *)where
				= (new & HI12) | ((displ >> 1) & LO20); */
	  /* need to store the halves separately, because word pointers
	     must be aligned */
	((unsigned short *)where)[0]=0x8b00;
	((unsigned short *)where)[1]=0x0c00;
	return ;}
     case R_PCRBYTE:		/* byte (pc relative) */
     case R_PCRWORD:		/* word (pc relative) */
     case R_PCRLONG:		/* word (pc relative) */       
       new_value=   - (int)start_address
	 + symbol_table[relocation_info.r_symndx].n_value;
       break;
     default:
       { new_value= 
	   symbol_table[relocation_info.r_symndx].n_value;}}}
   else
     { switch(relocation_info.r_symndx){
     case S_DATA: case S_BSS: case S_TEXT:
       new_value= (int)start_address;
       break;
     default:
       dprintf(relocation_info.r_type = %d, relocation_info.r_type);
#ifdef DEBUG       
       printf("\nrelocation_info {r_symndx= %d, r_vaddr = %d, Ignored:",
	      relocation_info.r_symndx,
	      relocation_info.r_vaddr              
	      );fflush(stdout);
#endif
       goto DONT;}
     };
   dprintf((type %d),relocation_info.r_type);
   switch(relocation_info.r_type){
   case R_RELBYTE:
   case R_PCRBYTE:     
     *( char *)where = new_value + *( char *) where;
     break;
   case R_RELWORD:
   case R_PCRWORD:     
     *( short *)where = new_value + *( short *) where;
     break;
   case R_RELLONG:
   case R_PCRLONG:
     /* I guess it must be long if in these areas
	I don't see how the size can vary.
      */
      if (((int)where %4) !=0) FEerror("long alignment not long aligned",0,0);
     *( long *)where = new_value + *( long *) where;
     break;
   default:
     printf("(bad type %d)",relocation_info.r_type);
   }
 DONT:;
 }
}

typedef int (*FUNC)();



/*  #define describe_sym(n) do{if (debug){printf("Sym No %d:",n); print_name(symbol_table+ (n));}}while(0)
*/

/* #include "spadutils.c" */


