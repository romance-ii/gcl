
#include "cmpinclude.h"
#include "gcl_mislib.h"
void init_gcl_mislib(){do_init(VV);}
/*	macro definition for TIME	*/

static void L1()
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
	goto TTL;
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
	goto T1;
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
	goto T6;
T6:;
	base[0]= (V3);
	base[1]= small_fixnum(400);
	vs_top=(vs_base=base+0)+2;
	Lmod();
	vs_top=sup;
	V8= vs_base[0];
	{object V9 = (number_compare(small_fixnum(0),V8)==0?Ct:Cnil);
	VMR2(V9)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function NUMBER-OF-DAYS-FROM-1900	*/

static object LI3(V11)

object V11;
{	 VMB3 VMS3 VMV3
	goto TTL;
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
	base[0]=base[0];
	return Cnil;
}
/*	function definition for DECODE-UNIVERSAL-TIME	*/

static void L4()
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
	goto T27;
T27:;
	V17= symbol_value(VV[9]);
	goto T28;
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
	goto T55;
T55:;
	V28= (*(LnkLI17))((V23));
	V27= number_minus((V21),/* INLINE-ARGS */V28);
	if(((*(LnkLI18))((V23)))==Cnil){
	goto T62;}
	V29= small_fixnum(366);
	goto T60;
	goto T62;
T62:;
	V29= small_fixnum(365);
	goto T60;
T60:;
	if(!(number_compare((V27),V29)<0)){
	goto T56;}
	V21= one_plus((V27));
	goto T53;
	goto T56;
T56:;
	V23= number_plus((V23),small_fixnum(1));
	goto T55;}
	goto T53;
T53:;
	if(((*(LnkLI18))((V23)))==Cnil){
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
	goto T73;
T73:;
	if(!(number_compare((V21),small_fixnum(60))>0)){
	goto T70;}
	V21= number_minus((V21),small_fixnum(1));
	goto T70;
T70:;
	{register object V30;
	V30= VV[12];
	goto T90;
T90:;
	if(!(number_compare((V21),car((V30)))<=0)){
	goto T91;}
	V31 = make_fixnum((long)length((V30)));
	V22= number_minus(small_fixnum(13),V31);
	goto T88;
	goto T91;
T91:;
	V21= number_minus((V21),car((V30)));
	V30= cdr((V30));
	goto T90;}
	goto T88;
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

static object LI5(object V37,object V36,object V35,object V34,object V33,object V32,object first,...)
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
	va_start(ap,first);
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
	V44= first;}
	--narg; goto T111;
	goto T110;
T110:;
	V44= symbol_value(VV[9]);
	goto T111;
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
	(void) (*Lnk19)();
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
	goto T122;
T122:;
	V45= Cnil;
	goto T123;
T123:;
	V46= Cnil;
	goto T124;
T124:;
	V47= Cnil;
	goto T125;
T125:;
	V48= Cnil;
	goto T126;
T126:;
	V49= Cnil;
	goto T127;
T127:;
	V50= Cnil;
	goto T128;
T128:;
	V51= Cnil;
	goto T129;
T129:;
	V52= Cnil;
	goto T130;
T130:;
	V53= Cnil;
	goto T131;
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
	goto T138;
T138:;
	V57= number_minus((V43),(V50));
	if(!(number_compare(/* INLINE-ARGS */V57,small_fixnum(50))>=0)){
	goto T115;}
	V43= number_minus((V43),small_fixnum(100));}
	goto T115;
T115:;
	if(((*(LnkLI18))((V43)))==Cnil){
	goto T145;}
	if(number_compare((V42),small_fixnum(2))>0){
	goto T144;}
	goto T145;
T145:;
	V41= number_minus((V41),small_fixnum(1));
	goto T144;
T144:;
	base[1]= (V41);
	base[2]= (*(LnkLI17))((V43));
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
	VMR5(V60)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for NTH-VALUE	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	check_arg(2);
	vs_top=sup;
	{object V61=base[0]->c.c_cdr;
	if(endp(V61))invalid_macro_call();
	base[2]= (V61->c.c_car);
	V61=V61->c.c_cdr;
	if(endp(V61))invalid_macro_call();
	base[3]= (V61->c.c_car);
	V61=V61->c.c_cdr;
	if(!endp(V61))invalid_macro_call();}
	base[4]= list(3,VV[13],base[2],list(2,VV[6],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for COMPILE-FILE-PATHNAME	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	{object V62;
	check_arg(1);
	V62=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[14];
	base[2]= (V62);
	base[3]= VV[15];
	base[4]= VV[16];
	vs_top=(vs_base=base+1)+4;
	Lmake_pathname();
	return;
	}
}
/*	function definition for CONSTANTLY	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(1);
	base[0]=MMcons(base[0],Cnil);
	vs_top=sup;
	base[1]= 
	make_cclosure_new(LC10,Cnil,base[0],Cdata);
	vs_top=(vs_base=base+1)+1;
	return;
}
/*	function definition for COMPLEMENT	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	check_arg(1);
	base[0]=MMcons(base[0],Cnil);
	vs_top=sup;
	base[1]= 
	make_cclosure_new(LC11,Cnil,base[0],Cdata);
	vs_top=(vs_base=base+1)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC11(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	{object V63;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V63=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	{object V65;
	V65= (V63);
	 vs_top=base+2;
	 while(!endp(V65))
	 {vs_push(car(V65));V65=cdr(V65);}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	vs_top=sup;
	V64= vs_base[0];
	base[1]= ((V64)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC10(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	{object V66;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V66=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT19(){ call_or_link(VV[19],(void **)(void *)&Lnk19);} /* GET-DECODED-TIME */
static object  LnkTLI18(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[18],(void **)(void *)&LnkLI18,1,first,ap);va_end(ap);return V1;} /* LEAP-YEAR-P */
static object  LnkTLI17(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[17],(void **)(void *)&LnkLI17,1,first,ap);va_end(ap);return V1;} /* NUMBER-OF-DAYS-FROM-1900 */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

