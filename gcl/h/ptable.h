/* format of a rsyms output file:
struct lsymbol_table tab;   gives number of symbols, and sum of length of 
			 strings 
addr,char[],addr,char[],...
This can be read since the addr is sizeof(int) and the char[] is null
terminated, immediately followed by and addr...
there are tab.n_symbols pairs occurring.

*/
#ifndef HEADER_SEEK
#define HEADER_SEEK(x)
#endif


typedef unsigned int addr;

struct node{
  char *string;
  addr address;
#ifdef AIX3
  unsigned short tc_offset;
#endif  
};

struct lsymbol_table{
  unsigned int n_symbols ;
  unsigned int tot_leng;};

#define SYM_ADDRESS(table,i) ((*(table).ptable))[i].address
#define SYM_STRING(table,i) ((*(table).ptable))[i].string
#define SYM_TC_OFF(table,i) ((*(table).ptable))[i].tc_offset

/* typedef struct node *TABL;  */
/* gcc does not like typedef struct node TABL[];*/

typedef struct node TABL[]; 

struct node * find_sym_ptable();

struct  string_address_table
{ TABL *ptable;
  unsigned int length;
  unsigned int alloc_length;
};

struct string_address_table c_table;
struct string_address_table combined_table;

#define PTABLE_EXTRA 20

char *malloc();
