/* Copyright William Schelter. All rights reserved.  This file does
the low level relocation which tends to be very system dependent.
It is included by the file sfasl.c
*/

typedef int (*FUNC)();
extern int akcltoc;
extern int toc_start;
static int current_toc;
static int ptrgl_offset = 0;
static int  ptrgl_text;

static int akcltoc_used=0;

/* This is an alternating list of addresses x1,y1,x2,y2,... where
   relocation entries for changing value in address x1 shold be read as changing
   it in y1 */

static  int  toc_addresses_to_relocate [10];
static  int *next_toc_addresses_to_relocate = toc_addresses_to_relocate ;
static int akcltoc_thisload;
static int begun_relocate = 0;

static int set_rel_bits(address,bits,val)
     char *address;
     int val;
     int bits;
{ bits += 1;
 if ( bits <= 16)
   {unsigned short  y = *(unsigned short *)address ;
    y = y &  (~0 << bits) ;
    y |= (val & ~(~0 << bits));
    *(unsigned short *)address = val;
  }
  else
   {unsigned int  y = *(unsigned int *)address ;
    y = y &  (~0 << bits) ;
    y |= (val & ~(~0 << bits));
    *(unsigned int *)address = y;
  }
}

#ifdef AIX3
struct syment *
get_symbol(name,scnum,sym_table,length)
     char *name;
     int scnum,length;
     struct syment *sym_table;
{ struct syment *end,*sym;
 char tem[SYMNMLEN +1];
  char *na;
  end =sym_table + length;
  for(sym=sym_table; sym < end; sym += (NUM_AUX(sym) +1))
    {if ((sym)->n_scnum  == scnum)
      { na=SYM_NAME(sym);
	if (strcmp(name,na) == 0)
	  {return sym;}}}
  return 0;}
#endif /* aix3 */

/*
 800b0000          l   r0,0x0(r11)  
 90410014         st   r2,0x14(r1)  
 7c0903a6      mtctr   r0           
 804b0004          l   r2,0x4(r11)         
 816b0008          l   r11,0x8(r11) 
 4e800420       bctr                
*/
int myptrgl[6] = {
  0x800b0000, 0x90410014, 0x7c0903a6, 0x804b0004,
  0x816b0008, 0x4e800420};

/* 7d8903a6      mtctr   r12 
 4e800420       bctr
 */
static int jmp_r12[2] = { 0x7d8903a6, 0x4e800420};

  
#define SYM_SMC(sym)  (((union auxent *)(sym+1))->x_csect.x_smclas)
#define SYM_TOC_ADDR(sym)  (((union auxent *)(sym+1))->x_csect.x_parmhash)
/* #define SYM_USED(sym)   (((union auxent *)(&sym[1]))->x_csect.x_snhash) */
#define  TC_SYMBOL_P(sym) ((sym)->n_scnum == DATA_NSCN && NUM_AUX((sym)) && \
			   (SYM_SMC(sym) == XMC_TC0 ||  SYM_SMC(sym) == XMC_TC))
			    


int FIXtemp ;
static int intcmp2(x,y)
     int *x,*y;
{ return (*x - *y);
}

#define  TOP6 (~0 << 26)
#define  BR_IN_DATA_P(x) (((x) & TOP6) == (DBEGIN & TOP6))


relocate()
{ struct syment *sym = &symbol_table[relocation_info.r_symndx];
  char *where;
  describe_sym(relocation_info.r_symndx);
  where = the_start + relocation_info.r_vaddr;
  dprintf (where has %x , *(int *)where);
  dprintf(   at %x -->, where );

  if(begun_relocate == 0)
    {int n =   next_toc_addresses_to_relocate - toc_addresses_to_relocate;
       begun_relocate = 1;
     FIXtemp = 0; /* dummy reference for export problem */
     qsort((char *)toc_addresses_to_relocate, n/2 , 2*sizeof(int),  intcmp2);
     next_toc_addresses_to_relocate
       = toc_addresses_to_relocate;}

  switch(RELOC_RTYPE(relocation_info))
    { int *q;

    case R_TOC:     /* TOC_ILodx */
      set_rel_bits(where,RELOC_RLEN(relocation_info), sym->n_value -  toc_start) ;
      break;
    case R_POS:   /* Pos_Rel */

       if (where == *next_toc_addresses_to_relocate)
	 {where = next_toc_addresses_to_relocate [1];
	  next_toc_addresses_to_relocate +=  2;}

     if ( sym->n_scnum == N_UNDEF || TC_SYMBOL_P(sym))
	set_rel_bits(where,RELOC_RLEN(relocation_info),  sym->n_value);
     else
       set_rel_bits(where,RELOC_RLEN(relocation_info), (*(int *)where)+ sym->n_value);

      break;
    case R_BR:   /* Brn_Sel */
    case R_RBR:  /* Brn_Selx */

      {int link_bit = ((((int *)where)[0]) & 1);
       if (((((int *)where)[0]) & TOP6 ) == 0x48000000)	/* bl or b relative */
	 {
	   if (((int *)where)[1] == 0x80410014) /* l   r2,0x14(r1) */
	     {int x = SYM_TOC_ADDR(sym);
	      if (x)
		{ ((int *)where)[0]  = 0x81820000 ; /*  l   r12,0x0(r2) */
		  set_rel_bits(where+2,15,x - toc_start);
		  (((int *)where)[1] = 0x48000000); /* b relative */
		  set_rel_bits(where+4, 0x19, ((int) jmp_r12) - ((int) where + 4 ));
		  ((int *)where)[1] |=  link_bit; /* link bit */
		  break;
		}
	      else		/* must be ptrgl */
		if  (BR_IN_DATA_P(sym->n_value))
		  {set_rel_bits(where, 0x19, sym->n_value - (int) where);
		   ((int *)where)[0] |=  link_bit; /* link bit */
		   break;}
	    }
	   else
	     if (BR_IN_DATA_P(sym->n_value))
	       {set_rel_bits(where, 0x19,  sym->n_value - (int) where);
		((int *)where)[0] |=  link_bit; /* link bit */
		break;}}
       else
	 FEerror("The type of Br_sel was new ",0,0);
     }
    default:
      fprintf(stdout, "%d: unsupported relocation type.",
	      RELOC_RTYPE(relocation_info) );
      FEerror("The relocation type was unknown",0,0);
    }
  dprintf( %x,*(int *)where);

}

fix_undef_toc_address(answ,sym,str)
     char *str;
     struct syment *sym;
     struct node *answ;
     /* undefined sym */
{ if (BR_IN_DATA_P(answ->address)) return;
  if (answ->tc_offset == 0)
    { answ->tc_offset = ( akcltoc + akcltoc_used - toc_start);
      * ((int *)( akcltoc + akcltoc_used)) = answ->address;
      akcltoc_used += sizeof(char *);
    }
 
      if (NUM_AUX(sym))
	SYM_TOC_ADDR(sym) =  (toc_start + answ->tc_offset);
      else printf("symbol should have aux entry");
  
  return;
}

      
    
    


#ifdef DEBUG
#undef describe_sym
#define describe_sym(x) do{if(sfasldebug) describe_sym1(x);} while (0)
describe_sym1(n)
int n;
{char *str;
 char tem[9];
 struct syment *sym;
 sym= &symbol_table[n];
 str= sym->n_zeroes == 0 ?
   &my_string_table[sym->n_offset] :
 (sym->n_name[SYMNMLEN -1] ?
  /* MAKE IT NULL TERMINATED */
  (strncpy(tem,sym->n_name,
	   SYMNMLEN),tem):
  sym->n_name );
 printf ("sym-index = %d table entry at %x",n,&symbol_table[n]);
 printf("symbol is (%s):\nsymbol_table[n]._n._n_name %s\nsymbol_table[n]._n._n_n._n_zeroes %d\nsymbol_table[n]._n._n_n._n_offset %d\nsymbol_table[n]._n._n_nptr[0] %d\nsymbol_table[n]._n._n_nptr[n] %d\nsymbol_table[n].n_value %d\nsymbol_table[n].n_scnum %d nsymbol_table[n].n_type %d\nsymbol_table[n].n_sclass %d\nsymbol_table[n].n_numaux %d", str,
	symbol_table[n]._n._n_name,
	symbol_table[n]._n._n_n._n_zeroes ,
	symbol_table[n]._n._n_n._n_offset ,
	symbol_table[n]._n._n_nptr[0] ,
	symbol_table[n]._n._n_nptr[1] ,
	symbol_table[n].n_value ,
	symbol_table[n].n_scnum ,
	symbol_table[n].n_type ,
	symbol_table[n].n_sclass ,
	symbol_table[n].n_numaux );
}

#endif 




/* allocate toc space in the preallocated region starting at akcltoc.
   If a symbol already has a toc entry, use that instead
   */

setup_for_aix_load()
{ bzero(toc_addresses_to_relocate,sizeof(toc_addresses_to_relocate));
  next_toc_addresses_to_relocate= toc_addresses_to_relocate;
  akcltoc_thisload = akcltoc + akcltoc_used;
  begun_relocate=0;

}

char *
sym_name(sym)
     struct syment *sym;
{static char tem[SYMNMLEN +1];
 char *name;
 tem[SYMNMLEN] = '0';
 name =  SYM_NAME(sym);
 return name;}
 
		 

allocate_toc(sym)
 struct syment *sym;
     /* sym is a symbol in the data section with an aux entry */ 
{ if (SYM_SMC(sym) == XMC_TC0)
    { sym->n_value =  toc_start; return 1;}
  if (SYM_SMC(sym) == XMC_TC)
    {struct node *answ = find_sym(sym,0);
     if (answ  && answ->tc_offset)
       { sym->n_value = toc_start + answ->tc_offset;
	 return 1;}
     {char *na = sym_name(sym);
#ifdef SYM_USED      
      if (TC_SYMBOL_P(sym) && SYM_USED(sym) == 0)
	return 0;
#endif
      if (answ == 0 && *na  &&  *na != '_')
	printf("(strange TC synbol %s[%d])",na,sym - symbol_table);}
     {int old_value;
      (*next_toc_addresses_to_relocate++) =  sym->n_value + start_address;
      sym->n_value = akcltoc + akcltoc_used;
      if (answ) answ->tc_offset = sym->n_value - toc_start;
      (*next_toc_addresses_to_relocate++) = sym->n_value;
      *((int *)(next_toc_addresses_to_relocate[-1])) =
	*((int *)(next_toc_addresses_to_relocate[-2]));
      akcltoc_used += sizeof(long int);
      if (next_toc_addresses_to_relocate - toc_addresses_to_relocate
	  >= (sizeof(toc_addresses_to_relocate)/sizeof(int)))
	FEerror("ran out",0,0);
      if (akcltoc_used > 24000) FEerror("toc exhausted",0,0);
      return 1;
    }}
  return 0;
}
