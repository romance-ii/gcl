/* Copyright William Schelter. All rights reserved.  This file does
the low level relocation which tends to be very system dependent.
It is included by the file sfasl.c
*/

print_rel(rel,sym)
struct syment *sym;
 struct reloc *rel;
{char tem[10];
  printf(" (name = %s)",SYM_NAME(sym));
 printf("{r_type=%d",rel->r_type);
 fflush(stdout);
}


#ifdef DEBUG

#define describe_sym describe_sym1
describe_sym1(n)
int n;
{char *str;
 char tem[9];
 struct syment *sym;
 sym= &symbol_table[n];
 str = SYM_NAME(sym);
 if (debug == 0)  return 1;
 printf ("sym-index = %d table entry at %x",n,&symbol_table[n]);
 printf("symbol is (%s):\nsymbol_table[n]._n._n_name %d\nsymbol_table[n]._n._n_n._n_zeroes %d\nsymbol_table[n]._n._n_n._n_offset %d\nsymbol_table[n]._n._n_nptr[0] %d\nsymbol_table[n]._n._n_nptr[n] %d\nsymbol_table[n].n_value %d\nsymbol_table[n].n_scnum %d " 
"\nsymbol_table[n].n_type %d\nsymbol_table[n].n_sclass %d\nsymbol_table[n].n_numaux %d", 
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

#define LONG_AT_ADDR(p)  *((unsigned int *)p)
#define STORE_LONG(p,val) (*((unsigned int *)p)) = (val)




relocate()
{
  char *where;
  int old_val,new_val;
#ifdef DEBUG
  if (debug)
    {print_rel(&relocation_info,&symbol_table[relocation_info.r_symndx]);
     describe_sym(relocation_info.r_symndx);}
#endif
  where = the_start + relocation_info.r_vaddr;
  dprintf (where has %x , *where);
  dprintf(   at %x -->, where );
  
  if (relocation_info.r_type == R_ABS)
    { dprintf( r_abs ,0);  return; }
  old_val = LONG_AT_ADDR(where);
  switch(relocation_info.r_type)
    { int *q;
      
    case R_RELLONG:  
    case R_DIR32:
      new_val= old_val + symbol_table[relocation_info.r_symndx].n_value;
      dprintf(new val r_dir32 %x , new_val);
      STORE_LONG(where,new_val);
      break;

    case R_PCRLONG:

      new_val = old_val - (int) start_address +
	symbol_table[relocation_info.r_symndx].n_value;
      dprintf( r_pcrlong new value = %x , new_val)
      STORE_LONG(where,new_val);
      break;

    default:
      fprintf(stderr, "%d: unsupported relocation type.",
	      relocation_info.r_type);
      FEerror("The relocation type was unknown",0,0);
    }

}

 


