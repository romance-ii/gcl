/*
	big_log_op(x, y, op) performs the logical operation op onto
	x and y, and return the result in x destructively.

	
*/

void minimize_lg(x)
GEN x;
{int j,i,lgx = lgef(x);
 GEN u = x+2;
 i = lgx;
 i -= 2;
 while (-- i >= 0)
   { if (*u++) break;
   }
 j = lgx -i -3;
 if (j)
   { GEN v = x+2;
     GEN w = v + j;
     GEN lim = x+lgx;
     while (w<lim)
       {*v++ = *w++;}
     setlgef(x,(i+3));}
 if (i==-1) setsigne(x,0);
}


/* Fix this.   Should be destructive into x0.
   It is for the benefit of log_op;
   Maybe write an mp version, and then do it.
*/   

GEN
complementi(x)
     GEN x;
{int l = lgef(x);
 GEN u = cgeti(l);
 unsigned plong * v ;
 unsigned plong *w ;

 MP_START_LOW(w,(unsigned plong *)x,l);
 MP_START_LOW(v,(unsigned plong *)u,l);
 setlgef(u,l);
 setsigne(u,1);
 l -= MP_CODE_WORDS;
 {unsigned int next=0;
  while (--l >=0)
    { unsigned int last = MP_NEXT_UP(w);
      MP_NEXT_UP(v) = next - last ;
       if (last > next)
	 { next -= 1 ;}}
  return u;}}
 
object big_log_op(x0,y0,op)
object x0,y0;
 plong (*op)();     
{ int leadx,leady;
  int result_length;
  int lgx,lgy;
  GEN x,y,u,up,result;
  save_avma;
  x = MP(x0);
  y = (type_of(y0)==t_bignum ? MP(y0) : stoi(fix(y0)));
  leadx = signe(x);
  lgx=lgef(x);
  if (leadx < 0)
    x = complementi(x);
  else leadx = 0;

  lgy = lgef(y);
  leady = signe(y);
  if (leady < 0)
    y=complementi(y);
  else leady = 0;
  result_length = (lgx > lgy ? lgx : lgy);
  u = result = cgeti(result_length);
  setlgef(result,result_length);
  MP_START_LOW(u,u,result_length);
  result_length -= MP_CODE_WORDS;

  x += lgx;
  y += lgy;
  lgx -= MP_CODE_WORDS;
  lgy -= MP_CODE_WORDS;

  while (--lgx >= 0)
    { if (--lgy >= 0)
	{ MP_NEXT_UP(u) = (*op)(MP_NEXT_UP(x),MP_NEXT_UP(y));}
    else MP_NEXT_UP(u) = (*op)(MP_NEXT_UP(x),leady);
      }
  /*  lgx is now 0 */
  while (--lgy >= 0)
    {  MP_NEXT_UP(u) = (*op)(leadx,MP_NEXT_UP(y));}
  {int leadresult = (*op)(leadx,leady);
   if (leadresult < 0)
     { result = complementi(result);
       setsigne(result,-1);}
   else setsigne(result,1);}
  minimize_lg(result);
  restore_avma;
  gcopy_to_big(result,x0);
  return x0;
}

/*
	x : fixnum or bignum (may be not normalized)
	y : integer
   returns
	fixnum or bignum ( not normalized )
*/

object big_log_op();

/*
	x : fixnum or bignum (may be not normalized)
	y : integer
   returns
	fixnum or bignum ( not normalized )
*/


object
log_op(op,ignore)
int (*op)();
void (*ignore)();
{
	object x;
	int	narg, i, j;
	

	narg = vs_top - vs_base;
	if (narg < 2) too_few_arguments();
	i = narg;
	while(--i >= 0)
		if (type_of(vs_base[i]) == t_bignum) goto BIG_OP;
	j = fix(vs_base[0]);
	i = 1;
	while (i < narg) {
		j = (*op)(j, fix(vs_base[i]));
		i++;
	}
	return(make_fixnum(j));

BIG_OP:
	x = (object)copy_to_big(vs_base[0]);
	vs_push(x);
	i = 1;
	{save_avma;
	while (i < narg) {
		x = (object)big_log_op(x, vs_base[i], op);
		i++;
	}
	 restore_avma;}
	x = normalize_big_to_object(x);
	vs_pop;
	return(x);
}



int
big_bitp(x, p)
object	x;
int	p;
{ GEN u = MP(x);
  int ans ;
  int i = p /32;
  if (signe(u) < 0)
    {  save_avma;
       u = complementi(u);
       restore_avma;
   }
  if (i < lgef(u) -MP_CODE_WORDS)
    { ans = ((MP_ITH_WORD(u,i,lgef(u))) & (1 << p%32));}
  else if (big_sign(x) < 0) ans = 1;
  else ans = 0;
  return ans;
}
/* these done without function call in above code ... */
#define mp_b_clr_op (void *)0
#define mp_b_set_op (void *)0
#define mp_b_1_op (void *)0
#define mp_b_2_op (void *)0
#define mp_b_c1_op (void *)0
#define mp_b_c2_op (void *)0
#define mp_and_op (void *)0
#define mp_ior_op (void *)0
#define mp_xor_op (void *)0
#define mp_eqv_op (void *)0
#define mp_nand_op (void *)0
#define mp_nor_op (void *)0
#define mp_andc1_op (void *)0
#define mp_andc2_op (void *)0
#define mp_orc1_op (void *)0
#define mp_orc2_op (void *)0

/* like integer-length  in base 2 */
gen_bitlength(u)
     GEN u;
{
  GEN w;
  int l = lg(u);
  our_ulong high;
  w = u;
  MP_START_HIGH(u,u,l);
  high = MP_NEXT_DOWN(u);
  count = int_bit_length(high) ;
	    
  l -= MP_CODE_WORDS;
	    
  if (signe(w) < 0 &&
      high == (1 << (count -1)))
    /* in the case of -(1<< n)
       it is one less */
    { int ll = l;
    int nzero = 0;
    while (--ll > 0)
      { if (MP_NEXT_DOWN(u))
	{nzero= 1; break;}}
    if (nzero == 0) --count ;}
		
  count +=               32* (l - 1);
  return count;	    
}
/* number of 1's in 2's complement notation */
gen_bitcount(u)
     GEN u;
     
{ save_avma;
 if (signe(u) < 0)
   { u = subsi(-1,u);}
 count = 0;
 {int leng = lgef(u);
 MP_START_LOW(u,u,leng);
 leng -= MP_CODE_WORDS;
 while (--leng >= 0)
   { count += count_int_bits(MP_NEXT_UP(u));}}
 restore_avma;
 return count;
}




