
#include "include.h"
get_mark_bit()
{error("get_mark_bit called");}
set_mark_bit()
{error("set_mark_bit called");}
get_set_mark_bit()
{error("get_set_mark_bit called");}


/*
  These have all been replaced by macros

extern int *mark_table;

get_mark_bit(x)
int x;
{
	int y;

	y = (*(mark_table+(x/4/32)) >> (x/4%32)) & 1;
	return(y);
}

set_mark_bit(x)
int x;
{
	int y;

	y = 1 << (x/4%32);
	y = (*(mark_table+(x/4/32))) | y;
	*(mark_table+ (x/4/32))=y;
}

get_set_mark_bit(x)
int x;
{
	int y;

	y = get_mark_bit(x);
	set_mark_bit(x);
	return(y);
}

*/
