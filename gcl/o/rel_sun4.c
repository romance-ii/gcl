/* Copyright William Schelter. All rights reserved.  This file does
the low level relocation which tends to be very system dependent.
It is included by the file sfasl.c
Thanks to Blewett@research.att.com, for an initial effort on this.
*/

/*
   Unfortunately the original documentation of the relocation types
was rather sketchy, so I was not able to determine the correct
behaviour of types which were not currently being output.
   
  These will have to be added later, for the moment an abort will occur.
One way to check your work is to compile sfasl.c defining STAND, and then
compare (using comp.c) the output from it with the output from ld.
  */

relocate()
{
  char *where;
  {
    unsigned int new_value;
    long x;
    where = the_start + relocation_info.r_address;
    dprintf (where has %x , *where);
    dprintf(   at %x -->, where );
#ifdef DEBUG    
    dshow();
#endif    
    if(relocation_info.r_extern)
      {
	switch (relocation_info.r_type)
	  {
	  case RELOC_DISP8:	       /* Disp's (pc-rel)    */
	  case RELOC_DISP16:
	  case RELOC_DISP32:  abort();
	  case RELOC_WDISP30:
	    dprintf (	      symbol_table[relocation_info.r_index].n_value %d,
		     	      symbol_table[relocation_info.r_index].n_value);
	    new_value =
	      symbol_table[relocation_info.r_index].n_value
		+ relocation_info.r_addend
		  - (int)start_address;
	    break;
	  case RELOC_8:		/* simplest relocs    */
	  case RELOC_16: 		     
	  case RELOC_32: 		    
	  case RELOC_HI22:	/* SR 22-bit relocs   */ 
	  case RELOC_LO10:
	    dprintf(   symbol_table[relocation_info.r_index].n_value = %d ,
		         symbol_table[relocation_info.r_index].n_value);
	    new_value =
	      symbol_table[relocation_info.r_index].n_value;

	    break;
	  default:
	    printf ("extern non-supported relocation_info.r_type=%d\n",
		    relocation_info.r_type);
	    fflush (stdout);
	    goto DONT;
	  }
	dprintf( new value %x , new_value);
	dprintf( rtype %x , relocation_info.r_type);
      }
    else
      {
	switch(relocation_info.r_index)	/* was symbolnum */
	  {
	  case N_DATA: case N_BSS: case N_TEXT:
	    new_value= (int)start_address;
	    break;
	  default:
	    abort();
	    goto DONT;
	  }
      }

    switch (relocation_info.r_type)
      {
#define WHERE relocation_info.r_addend
      case RELOC_8:		/* simplest relocs    */
	*(char *)where = x = new_value + WHERE;
	break;
      case RELOC_16:
	*(short *)where = x = new_value + WHERE;
	break;
      case RELOC_32:
	*(int *)where = x = new_value + WHERE;
	break;

      case RELOC_DISP8:		/* Disp's (pc-rel)    */
	abort();
	*(char *)where = x = new_value + *(char *) where;
	break;
      case RELOC_DISP16:
	abort();
	*(short *)where = x = new_value + *(short *) where;
	break;
      case RELOC_DISP32:
	abort();
	*(int *)where = new_value + *(int *) where;
	x =  new_value + *( int *) where;
	break;

      case RELOC_WDISP30:	/* SR word disp's     */
#define MASK30BITS 0x3FFFFFFF
	*(int *)where = ((((int) new_value) >> 2) & MASK30BITS)
	  | (~MASK30BITS & ( *(int *) where));
	break;

      case RELOC_WDISP22:
	goto Default;

      case RELOC_HI22:		/* SR 22-bit relocs   */
	x = ((unsigned long) (new_value + relocation_info.r_addend)) >> 10;
#define MASK22 0x3fffff	
	*(long *) where= (~MASK22 & *(long *)where) | x;
	break;

      case RELOC_22:
      case RELOC_13:		/* SR 13&10-bit relocs*/
	goto Default;
      case RELOC_LO10:
	x = ((unsigned long) (new_value + relocation_info.r_addend)) & 0x3ff;
	*(unsigned short *)(where + 2) |= x;
	break;

      case RELOC_SFA_BASE:	/* SR S.F.A. relocs   */
      case RELOC_SFA_OFF13:
      case RELOC_BASE10:	/* base_relative pic */
      case RELOC_BASE13:
      case RELOC_BASE22:
      case RELOC_PC10:		/* special pc-rel pic*/
      case RELOC_PC22:
      case RELOC_JMP_TBL:	/* jmp_tbl_rel in pic */
      case RELOC_SEGOFF16:	/* ShLib offset-in-seg*/
      case RELOC_GLOB_DAT:	/* rtld relocs */
      case RELOC_JMP_SLOT:
      case RELOC_RELATIVE:

      Default:
      default:
	printf ("non-supported relocation_info.r_type=%d\n",
		relocation_info.r_type);
	fflush (stdout);
	abort();
      }
  DONT:;
  }

}


#ifdef DEBUG

dshow()
{ if(debug)
  printf("\nrelocation_info:{r_address %d,r_index %d,r_extern %d \n r_type %d, r_addend %d"
	 , relocation_info.r_address
, relocation_info.r_index
, relocation_info.r_extern
, relocation_info.r_type
, relocation_info.r_addend);
    fflush(stdout);}

#endif /* DEBUG */

