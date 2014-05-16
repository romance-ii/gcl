/* Copyright William Schelter. All rights reserved.  This file does
the low level relocation which tends to be very system dependent.
It is included by the file sfasl.c
*/


relocate()
{
  char *where;
  describe_sym(relocation_info.r_symndx);
  where = the_start + relocation_info.r_vaddr;
  dprintf (where has %x , *where);
  dprintf(   at %x -->, where );
  
  if (relocation_info.r_type == R_ABS)
    { dprintf( r_abs ,0)  return; }
  switch(relocation_info.r_type)
    { int *q;

    case      R_RELLONG:
      dprintf(new val r_rellong %x ,  *((int *)where) + 
	      symbol_table[relocation_info.r_symndx].n_value);
      *(int *)where= *((int *)where) +
                 symbol_table[relocation_info.r_symndx].n_value;
      break;

    case    R_RELWORD:
        dprintf(new val r_relword %x ,  *((short *)where) + 
	      symbol_table[relocation_info.r_symndx].n_value);
      *(short *)where= *((short *)where) +
                 symbol_table[relocation_info.r_symndx].n_value;
      break;
    case R_PCRLONG:

      dprintf( r_pcrlong new value = %x ,
	      *((int *)where)  - (int)start_address
	      + symbol_table[relocation_info.r_symndx].n_value );
      *(int *)where=  *((int *)where)  - (int)start_address
	+ symbol_table[relocation_info.r_symndx].n_value;
      break;

    default:
      fprintf(stdout, "%d: unsupported relocation type.",
	      relocation_info.r_type);
      FEerror("The relocation type was unknown",0,0);
    }

}




#ifdef DEBUG

#define describe_sym describe_sym1
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
 printf("symbol is (%s):\nsymbol_table[n]._n._n_name %s\nsymbol_table[n]._n._n_n._n_zeroes %d\nsymbol_table[n]._n._n_n._n_offset %d\nsymbol_table[n]._n._n_nptr[0] %d\nsymbol_table[n]._n._n_nptr[n] %d\nsymbol_table[n].n_value %d\nsymbol_table[n].n_scnum %d
\nsymbol_table[n].n_type %d\nsymbol_table[n].n_sclass %d\nsymbol_table[n].n_numaux %d", str,
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
