/* Copyright William Schelter. All rights reserved.  This file does
the low level relocation which tends to be very system dependent.
It is included by the file sfasl.c
*/

relocate()
{
 char *where;

  {unsigned int new_value;
   where = the_start + relocation_info.r_address;
   if(relocation_info.r_extern)
     {
       if (relocation_info.r_pcrel)
	 new_value=   - (int)start_address
	   + symbol_table[relocation_info.r_symbolnum].n_value;
       else
	 { new_value= 
	     symbol_table[relocation_info.r_symbolnum].n_value;}}
   else
     { switch(relocation_info.r_symbolnum){
     case N_DATA: case N_BSS: case N_TEXT:
       new_value= (int)start_address;
       break;
     default:
       dprintf(relocation_info.r_extern = %d, relocation_info.r_extern);
       printf("\nrelocation_info {r_symbolnum= %d, r_address = %d, r_extern=0 Ignored:",relocation_info.r_address,
	      relocation_info.r_symbolnum);fflush(stdout);
       goto DONT;}
     };
   switch(relocation_info.r_length){
   case 0:
     *( char *)where = new_value + *( char *) where; break;
   case 1:
     *( short *)where = new_value + *( short *) where; break;
   case 2:
     *( long *)where = new_value + *( long *) where; break;
   }
 DONT:;
 }
}



