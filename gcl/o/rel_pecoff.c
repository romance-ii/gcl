/* Copyright William Schelter. All rights reserved.  This file does
the low level relocation which tends to be very system dependent.
It is included by the file sfasl.c
*/

void
relocate()
{
  char *where;
  describe_sym ( relocation_info.r_symndx, 0 );
  where = the_start + relocation_info.r_vaddr;
  if ( relocation_info.r_type == R_ABS ) {
      return;
  }
  
  switch(relocation_info.r_type)
    {

    case R_DIR32:
        *(int *)where = *((int *)where) + 
            symbol_table[relocation_info.r_symndx].n_value;
        break;
      
    case R_PCRLONG:
        /* the following is logical, except the address offset is
           not where the 'where' is but where the 'call' is just
           AFTER the 'where'.
           */
        *(int *)where = symbol_table[relocation_info.r_symndx].n_value
            - (int) where - sizeof(int *);

        break;

  default:
        fprintf ( stderr, "%d: unsupported relocation type.\n",
                  relocation_info.r_type);
        FEerror("The relocation type was unknown\n",0,0);
    }

}
