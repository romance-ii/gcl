
#include "cmpinclude.h"
#include "mislib.h"
init_mislib(){do_init(VV);}
/*	macro definition for TIME	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(!endp(V1))invalid_macro_call();}
	base[3]= listA(6,VV[0],VV[1],VV[2],VV[3],list(3,VV[4],VV[5],list(2,VV[6],base[2])),VV[7]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function LEAP-YEAR-P	*/

static object LI2(V3)

object V3;
{	 VMB2 VMS2 VMV2
TTL:;
	base[0]= (V3);
	base[1]= small_fixnum(4);
	vs_top=(vs_base=base+0)+2;
	Lmod();
	vs_top=sup;
	V4= vs_base[0];
	if(number_compare(small_fixnum(0),V4)==0){
	goto T1;}
	{object V5 = Cnil;
	VMR2(V5)}
T1:;
	base[0]= (V3);
	base[1]= small_fixnum(100);
	vs_top=(vs_base=base+0)+2;
	Lmod();
	vs_top=sup;
	V6= vs_base[0];
	if(!(((number_compare(small_fixnum(0),V6)==0?Ct:Cnil))==Cnil)){
	goto T6;}
	{object V7 = Ct;
	VMR2(V7)}
T6:;
	base[0]= (V3);
	base[1]= small_fixnum(400);
	vs_top=(vs_base=base+0)+2;
	Lmod();
	vs_top=sup;
	V8= vs_base[0];
	{object V9 = (number_compare(small_fixnum(0),V8)==0?Ct:Cnil);
	VMR2(V9)}
}
/*	local entry for function NUMBER-OF-DAYS-FROM-1900	*/

static object LI3(V11)

object V11;
{	 VMB3 VMS3 VMV3
TTL:;
	{object V12;
	V12= one_minus((V11));
	V13= number_minus((V11),VV[8]);
	base[0]= number_times(/* INLINE-ARGS */V13,small_fixnum(365));
	base[2]= (V12);
	base[3]= small_fixnum(4);
	vs_top=(vs_base=base+2)+2;
	Lfloor();
	vs_top=sup;
	base[1]= vs_base[0];
	base[3]= (V12);
	base[4]= small_fixnum(100);
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V14= vs_base[0];
	base[2]= number_negate(V14);
	base[4]= (V12);
	base[5]= small_fixnum(400);
	vs_top=(vs_base=base+4)+2;
	Lfloor();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= small_fixnum(-460);
	vs_top=(vs_base=base+0)+5;
	Lplus();
	vs_top=sup;
	{object V15 = vs_base[0];
	VMR3(V15)}}
}
/*	function definition for DECODE-UNIVERSAL-TIME	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	{register object V16;
	object V17;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V16=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T27;}
	V17=(base[1]);
	vs_top=sup;
	goto T28;
T27:;
	V17= symbol_value(VV[9]);
T28:;
	{object V18;
	object V19;
	object V20;
	register object V21;
	register object V22;
	register object V23;
	object V24;
	V18= Cnil;
	V19= Cnil;
	V20= Cnil;
	V21= Cnil;
	V22= Cnil;
	V23= Cnil;
	V24= Cnil;
	V25= number_times((V17),VV[10]);
	V16= number_minus((V16),/* INLINE-ARGS */V25);
	base[2]= (V16);
	base[3]= VV[11];
	vs_top=(vs_base=base+2)+2;
	Lfloor();
	if(vs_base<vs_top){
	V21= vs_base[0];
	vs_base++;
	}else{
	V21= Cnil;}
	if(vs_base<vs_top){
	V16= vs_base[0];
	}else{
	V16= Cnil;}
	vs_top=sup;
	base[2]= (V21);
	base[3]= small_fixnum(7);
	vs_top=(vs_base=base+2)+2;
	Lmod();
	vs_top=sup;
	V24= vs_base[0];
	base[2]= (V16);
	base[3]= VV[10];
	vs_top=(vs_base=base+2)+2;
	Lfloor();
	if(vs_base<vs_top){
	V20= vs_base[0];
	vs_base++;
	}else{
	V20= Cnil;}
	if(vs_base<vs_top){
	V16= vs_base[0];
	}else{
	V16= Cnil;}
	vs_top=sup;
	base[2]= (V16);
	base[3]= small_fixnum(60);
	vs_top=(vs_base=base+2)+2;
	Lfloor();
	if(vs_base<vs_top){
	V19= vs_base[0];
	vs_base++;
	}else{
	V19= Cnil;}
	if(vs_base<vs_top){
	V18= vs_base[0];
	}else{
	V18= Cnil;}
	vs_top=sup;
	base[2]= (V21);
	base[3]= small_fixnum(366);
	vs_top=(vs_base=base+2)+2;
	Lfloor();
	vs_top=sup;
	V26= vs_base[0];
	V23= number_plus(VV[8],V26);
	{register object V27;
	V27= Cnil;
T55:;
	V28= (*(LnkLI13))((V23));
	V27= number_minus((V21),/* INLINE-ARGS */V28);
	if(((*(LnkLI14))((V23)))==Cnil){
	goto T62;}
	V29= small_fixnum(366);
	goto T60;
T62:;
	V29= small_fixnum(365);
T60:;
	if(!(number_compare((V27),V29)<0)){
	goto T56;}
	V21= one_plus((V27));
	goto T53;
T56:;
	V23= number_plus((V23),small_fixnum(1));
	goto T55;}
T53:;
	if(((*(LnkLI14))((V23)))==Cnil){
	goto T70;}
	if(!(number_compare((V21),small_fixnum(60))==0)){
	goto T73;}
	base[2]= (V18);
	base[3]= (V19);
	base[4]= (V20);
	base[5]= small_fixnum(29);
	base[6]= small_fixnum(2);
	base[7]= (V23);
	base[8]= (V24);
	base[9]= Cnil;
	base[10]= (V17);
	vs_top=(vs_base=base+2)+9;
	return;
T73:;
	if(!(number_compare((V21),small_fixnum(60))>0)){
	goto T70;}
	V21= number_minus((V21),small_fixnum(1));
T70:;
	{register object V30;
	V30= VV[12];
T90:;
	if(!(number_compare((V21),car((V30)))<=0)){
	goto T91;}
	V31 = make_fixnum(length((V30)));
	V22= number_minus(small_fixnum(13),V31);
	goto T88;
T91:;
	V21= number_minus((V21),car((V30)));
	V30= cdr((V30));
	goto T90;}
T88:;
	base[2]= (V18);
	base[3]= (V19);
	base[4]= (V20);
	base[5]= (V21);
	base[6]= (V22);
	base[7]= (V23);
	base[8]= (V24);
	base[9]= Cnil;
	base[10]= (V17);
	vs_top=(vs_base=base+2)+9;
	return;}
	}
}
/*	local entry for function ENCODE-UNIVERSAL-TIME	*/

static object LI5(V37,V36,V35,V34,V33,V32,va_alist)
	object V37,V36,V35,V34,V33,V32;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	{object V38;
	object V39;
	object V40;
	object V41;
	object V42;
	register object V43;
	object V44;
	if(narg <6) too_few_arguments();
	V38= V37;
	V39= V36;
	V40= V35;
	V41= V34;
	V42= V33;
	V43= V32;
	narg = narg - 6;
	if (narg <= 0) goto T110;
	else {
	va_start(ap);
	V44= va_arg(ap,object);}
	--narg; goto T111;
T110:;
	V44= symbol_value(VV[9]);
T111:;
	V40= number_plus((V40),(V44));
	base[0]= small_fixnum(0);
	base[1]= (V43);
	base[2]= small_fixnum(99);
	vs_top=(vs_base=base+0)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T115;}
	{object V45;
	object V46;
	object V47;
	object V48;
	object V49;
	register object V50;
	object V51;
	object V52;
	object V53;
	vs_base=vs_top;
	(void) (*Lnk15)();
	if(vs_base>=vs_top){vs_top=sup;goto T122;}
	V45= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T123;}
	V46= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T124;}
	V47= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T125;}
	V48= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T126;}
	V49= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T127;}
	V50= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T128;}
	V51= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T129;}
	V52= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T130;}
	V53= vs_base[0];
	vs_top=sup;
	goto T131;
T122:;
	V45= Cnil;
T123:;
	V46= Cnil;
T124:;
	V47= Cnil;
T125:;
	V48= Cnil;
T126:;
	V49= Cnil;
T127:;
	V50= Cnil;
T128:;
	V51= Cnil;
T129:;
	V52= Cnil;
T130:;
	V53= Cnil;
T131:;
	base[0]= (V50);
	base[1]= small_fixnum(100);
	vs_top=(vs_base=base+0)+2;
	Lmod();
	vs_top=sup;
	V54= vs_base[0];
	V55= number_minus((V50),V54);
	V43= number_plus((V43),/* INLINE-ARGS */V55);
	V56= number_minus((V43),(V50));
	if(!(number_compare(/* INLINE-ARGS */V56,small_fixnum(-50))<0)){
	goto T138;}
	V43= number_plus((V43),small_fixnum(100));
	goto T115;
T138:;
	V57= number_minus((V43),(V50));
	if(!(number_compare(/* INLINE-ARGS */V57,small_fixnum(50))>=0)){
	goto T115;}
	V43= number_minus((V43),small_fixnum(100));}
T115:;
	if(((*(LnkLI14))((V43)))==Cnil){
	goto T145;}
	if(number_compare((V42),small_fixnum(2))>0){
	goto T144;}
T145:;
	V41= number_minus((V41),small_fixnum(1));
T144:;
	base[1]= (V41);
	base[2]= (*(LnkLI13))((V43));
	{object V59;
	base[3]= VV[12];
	base[4]= number_minus(small_fixnum(13),(V42));
	vs_top=(vs_base=base+3)+2;
	Lbutlast();
	vs_top=sup;
	V59= vs_base[0];
	 vs_top=base+3;
	 while(!endp(V59))
	 {vs_push(car(V59));V59=cdr(V59);}
	vs_base=base+1;}
	Lplus();
	vs_top=sup;
	V58= vs_base[0];
	base[0]= number_times(V58,VV[11]);
	base[1]= number_times((V40),VV[10]);
	base[2]= number_times((V39),small_fixnum(60));
	base[3]= (V38);
	vs_top=(vs_base=base+0)+4;
	Lplus();
	vs_top=sup;
	{object V60 = vs_base[0];
	VMR5(V60)}}
	}
static LnkT15(){ call_or_link(VV[15],&Lnk15);} /* GET-DECODED-TIME */
static object  LnkTLI14(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[14],&LnkLI14,1,ap);} /* LEAP-YEAR-P */
static object  LnkTLI13(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[13],&LnkLI13,1,ap);} /* NUMBER-OF-DAYS-FROM-1900 */
