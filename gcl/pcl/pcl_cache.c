
#include "cmpinclude.h"
#include "pcl_cache.h"
void init_pcl_cache(){do_init(VV);}
/*	macro definition for CACHE-VECTOR-REF	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[3]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(!endp(V1))invalid_macro_call();}
	V2= list(3,VV[1],VV[2],base[2]);
	base[4]= list(3,VV[0],/* INLINE-ARGS */V2,list(3,VV[1],VV[3],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for CACHE-VECTOR-SIZE	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V3=base[0]->c.c_cdr;
	if(endp(V3))invalid_macro_call();
	base[2]= (V3->c.c_car);
	V3=V3->c.c_cdr;
	if(!endp(V3))invalid_macro_call();}
	base[3]= list(3,VV[4],list(3,VV[1],VV[2],base[2]),small_fixnum(0));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function ALLOCATE-CACHE-VECTOR	*/

static object LI3(V5)

object V5;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	base[0]= (V5);
	base[1]= VV[5];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk44)();
	vs_top=sup;
	{object V6 = vs_base[0];
	VMR3(V6)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for CACHE-VECTOR-LOCK-COUNT	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V7=base[0]->c.c_cdr;
	if(endp(V7))invalid_macro_call();
	base[2]= (V7->c.c_car);
	V7=V7->c.c_cdr;
	if(!endp(V7))invalid_macro_call();}
	base[3]= list(3,VV[6],base[2],small_fixnum(0));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function FLUSH-CACHE-VECTOR-INTERNAL	*/

static object LI5(V9)

object V9;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	base[0]= (V9);
	base[1]= Cnil;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	(void)(((V9))->v.v_self[0]= (small_fixnum(0)));
	{object V10 = (V9);
	VMR5(V10)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for MODIFY-CACHE	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V11=base[0]->c.c_cdr;
	if(endp(V11))invalid_macro_call();
	base[2]= (V11->c.c_car);
	V11=V11->c.c_cdr;
	base[3]= V11;}
	V12= make_cons(VV[9],base[3]);
	V13= list(2,VV[11],list(2,VV[12],base[2]));
	V14= make_cons(/* INLINE-ARGS */V13,Cnil);
	base[4]= list(2,VV[7],list(3,VV[8],/* INLINE-ARGS */V12,list(4,VV[10],/* INLINE-ARGS */V14,VV[13],list(3,VV[14],list(2,VV[12],base[2]),VV[15]))));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for G2628	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[16];
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local entry for function POWER-OF-TWO-CEILING	*/

static object LI8(V16)

long V16;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	base[0]= small_fixnum(1);
	V17 = CMPmake_fixnum(V16);
	base[2]= one_minus(V17);
	vs_top=(vs_base=base+2)+1;
	Linteger_length();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lash();
	vs_top=sup;
	{object V18 = vs_base[0];
	VMR8(V18)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-CACHE	*/

static object LI9(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V19;
	object V20;
	object V21;
	object V22;
	object V23;
	object V24;
	object V25;
	object V26;
	object V27;
	object V28;
	object V29;
	object V30;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI9key,first,ap);
	V19=(Vcs[0]);
	V20=(Vcs[1]);
	V21=(Vcs[2]);
	V22=(Vcs[3]);
	V23=(Vcs[4]);
	if(Vcs[5]==0){
	V24= (VV[191]->s.s_gfdef);
	}else{
	V24=(Vcs[5]);}
	V25=(Vcs[6]);
	V26=(Vcs[7]);
	V27=(Vcs[8]);
	V28=(Vcs[9]);
	V29=(Vcs[10]);
	V30=(Vcs[11]);
	base[0]= VV[18];
	base[1]= (V19);
	base[2]= (V20);
	base[3]= (V21);
	base[4]= (V22);
	base[5]= (V23);
	base[6]= (V24);
	base[7]= (V25);
	base[8]= (V26);
	base[9]= (V27);
	base[10]= (V28);
	base[11]= (V29);
	base[12]= (V30);
	vs_top=(vs_base=base+0)+13;
	siLmake_structure();
	vs_top=sup;
	{object V31 = vs_base[0];
	VMR9(V31)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MAKE-CACHE	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V37;
	V37= (VV[191]->s.s_gfdef);
	base[1]= VV[18];
	base[2]= Cnil;
	base[3]= small_fixnum(1);
	base[4]= Cnil;
	base[5]= small_fixnum(0);
	base[6]= small_fixnum(0);
	base[7]= (V37);
	base[8]= small_fixnum(0);
	base[9]= small_fixnum(0);
	base[10]= small_fixnum(1);
	base[11]= small_fixnum(0);
	base[12]= VV[17];
	base[13]= Cnil;
	vs_top=(vs_base=base+1)+13;
	siLmake_structure();
	vs_top=sup;
	{object V44 = vs_base[0];
	VMR10(V44)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PRINT-CACHE	*/

static object LI11(V48,V49,V50)

register object V48;register object V49;object V50;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	base[0]= (V49);
	base[1]= VV[19];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	base[0]= (V49);
	base[1]= VV[20];
	base[2]= CMPmake_fixnum((long)STREF(unsigned short,(V48),4));
	base[3]= STREF(object,(V48),8);
	base[4]= CMPmake_fixnum((long)STREF(fixnum,(V48),12));
	vs_top=(vs_base=base+0)+5;
	Lformat();
	vs_top=sup;
	base[0]= (V49);
	base[1]= VV[21];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI192))((V48),(V49)));
	base[0]= (V49);
	base[1]= VV[22];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{object V51 = vs_base[0];
	VMR11(V51)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for CACHE-LOCK-COUNT	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V52=base[0]->c.c_cdr;
	if(endp(V52))invalid_macro_call();
	base[2]= (V52->c.c_car);
	V52=V52->c.c_cdr;
	if(!endp(V52))invalid_macro_call();}
	base[3]= list(2,VV[12],list(2,VV[23],base[2]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function GET-CACHE-VECTOR	*/

static object LI13(V54)

register object V54;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{register object V55;
	base[0]= (V54);
	base[1]= (VV[24]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V55= vs_base[0];
	if(((V55))!=Cnil){
	goto T58;}
	{object V57;
	object V58;
	V57= (VV[24]->s.s_dbind);
	V58= make_cons(small_fixnum(0),Cnil);
	base[1]= V54;
	base[2]= (V57);
	base[3]= (V58);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;}
	goto TTL;
	goto T58;
T58:;
	if((CMPcdr((V55)))!=Cnil){
	goto T69;}
	{object V60;
	V60= number_plus(CMPcar(V55),small_fixnum(1));
	(V55)->c.c_car = (V60);}
	V61= (*(LnkLI194))((V54));
	{object V62 = (*(LnkLI193))(/* INLINE-ARGS */V61);
	VMR13(V62)}
	goto T69;
T69:;
	{object V63;
	V63= CMPcdr((V55));
	{object V65;
	V65= ((V63))->v.v_self[0];
	(V55)->c.c_cdr = (V65);}
	{object V66 = (*(LnkLI193))((V63));
	VMR13(V66)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FREE-CACHE-VECTOR	*/

static object LI14(V68)

register object V68;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{register object V69;
	base[1]= (V68);
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+1)+2;
	Larray_dimension();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[24]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V69= vs_base[0];
	if(((V69))!=Cnil){
	goto T84;}
	base[0]= VV[25];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V70 = vs_base[0];
	VMR14(V70)}
	goto T84;
T84:;
	{register object V71;
	V71= CMPcdr((V69));
	goto T90;
T90:;
	if(((V71))!=Cnil){
	goto T92;}
	goto T88;
	goto T92;
T92:;
	if(!(((V71))==((V68)))){
	goto T95;}
	base[0]= VV[26];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T95;
T95:;
	V71= ((V71))->v.v_self[0];
	goto T90;
	goto T88;
T88:;
	(void)((*(LnkLI193))((V68)));
	(void)(((V68))->v.v_self[0]= (CMPcdr((V69))));
	(V69)->c.c_cdr = V68;
	{object V74 = Cnil;
	VMR14(V74)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SHOW-FREE-CACHE-VECTORS	*/

static object LI15()

{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	base[0]=MMcons(Cnil,Cnil);
	base[1]= 
	make_cclosure_new(LC88,Cnil,base[0],Cdata);
	base[2]= (VV[24]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lmaphash();
	vs_top=sup;
	base[1]= (base[0]->c.c_car);
	base[2]= (VV[195]->s.s_gfdef);
	base[3]= VV[27];
	base[4]= (VV[196]->s.s_gfdef);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk197)();
	vs_top=sup;
	(base[0]->c.c_car)= vs_base[0];
	{register object V75;
	register object V76;
	V75= (base[0]->c.c_car);
	V76= CMPcar((V75));
	goto T117;
T117:;
	if(!(((V75))==Cnil)){
	goto T118;}
	{object V77 = Cnil;
	VMR15(V77)}
	goto T118;
T118:;
	{object V78;
	register object V79;
	register object V80;
	register object V81;
	register object V82;
	V78= CMPcar((V76));
	V79= CMPcadr((V76));
	V80= CMPcar((V79));
	V81= CMPcdr((V79));
	V82= small_fixnum(0);
	goto T130;
T130:;
	if(((V81))!=Cnil){
	goto T132;}
	goto T128;
	goto T132;
T132:;
	V81= ((V81))->v.v_self[0];
	V82= number_plus((V82),small_fixnum(1));
	goto T130;
	goto T128;
T128:;
	base[6]= Ct;
	base[7]= VV[28];
	base[8]= (V80);
	base[9]= (V78);
	base[10]= (V82);
	base[13]= (V82);
	base[15]= (V80);
	vs_top=(vs_base=base+15)+1;
	Lfloat();
	vs_top=sup;
	base[14]= vs_base[0];
	vs_top=(vs_base=base+13)+2;
	Ldivide();
	vs_top=sup;
	V83= vs_base[0];
	base[12]= number_times(small_fixnum(100),V83);
	vs_top=(vs_base=base+12)+1;
	Lfloor();
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+6)+6;
	Lformat();
	vs_top=sup;}
	V75= CMPcdr((V75));
	V76= CMPcar((V75));
	goto T117;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-WRAPPER-CACHE-NUMBER	*/

static object LI16()

{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{register long V84;
	V84= 0;
	goto T157;
T157:;
	base[0]= VV[29];
	base[2]= VV[30];
	base[3]= (VV[31]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lrandom();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Llogand();
	vs_top=sup;
	V84= fix(vs_base[0]);
	if((V84)==0){
	goto T158;}
	{long V85 = V84;
	VMR16((object)V85)}
	goto T158;
T158:;
	goto T157;}
	base[0]=base[0];
}
/*	local entry for function WRAPPER-FIELD	*/

static object LI17(V87)

object V87;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	base[0]= (V87);
	base[1]= VV[32];
	base[2]= VV[33];
	base[3]= (VV[81]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk198)();
	vs_top=sup;
	{object V88 = vs_base[0];
	VMR17(V88)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function NEXT-WRAPPER-FIELD	*/

static object LI18(V90)

object V90;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	base[0]= nth(fix((V90)),VV[32]);
	base[1]= VV[32];
	base[2]= VV[34];
	base[3]= one_plus((V90));
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk198)();
	vs_top=sup;
	{object V91 = vs_base[0];
	VMR18(V91)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for FIRST-WRAPPER-CACHE-NUMBER-INDEX	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V92=base[0]->c.c_cdr;
	if(!endp(V92))invalid_macro_call();}
	base[2]= VV[35];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	macro definition for NEXT-WRAPPER-CACHE-NUMBER-INDEX	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V93=base[0]->c.c_cdr;
	if(endp(V93))invalid_macro_call();
	base[2]= (V93->c.c_car);
	V93=V93->c.c_cdr;
	if(!endp(V93))invalid_macro_call();}
	base[3]= list(2,VV[36],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for WRAPPER-CACHE-NUMBER-VECTOR	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V94=base[0]->c.c_cdr;
	if(endp(V94))invalid_macro_call();
	base[2]= (V94->c.c_car);
	V94=V94->c.c_cdr;
	if(!endp(V94))invalid_macro_call();}
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	macro definition for CACHE-NUMBER-VECTOR-REF	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V95=base[0]->c.c_cdr;
	if(endp(V95))invalid_macro_call();
	base[2]= (V95->c.c_car);
	V95=V95->c.c_cdr;
	if(endp(V95))invalid_macro_call();
	base[3]= (V95->c.c_car);
	V95=V95->c.c_cdr;
	if(!endp(V95))invalid_macro_call();}
	base[4]= list(3,VV[0],base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for WRAPPER-REF	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V96=base[0]->c.c_cdr;
	if(endp(V96))invalid_macro_call();
	base[2]= (V96->c.c_car);
	V96=V96->c.c_cdr;
	if(endp(V96))invalid_macro_call();
	base[3]= (V96->c.c_car);
	V96=V96->c.c_cdr;
	if(!endp(V96))invalid_macro_call();}
	base[4]= list(3,VV[0],base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for WRAPPER-STATE	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V97=base[0]->c.c_cdr;
	if(endp(V97))invalid_macro_call();
	base[2]= (V97->c.c_car);
	V97=V97->c.c_cdr;
	if(!endp(V97))invalid_macro_call();}
	base[3]= list(3,VV[37],base[2],(*(LnkLI199))(VV[38]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for WRAPPER-INSTANCE-SLOTS-LAYOUT	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V98=base[0]->c.c_cdr;
	if(endp(V98))invalid_macro_call();
	base[2]= (V98->c.c_car);
	V98=V98->c.c_cdr;
	if(!endp(V98))invalid_macro_call();}
	base[3]= list(3,VV[37],base[2],(*(LnkLI199))(VV[39]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for WRAPPER-CLASS-SLOTS	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V99=base[0]->c.c_cdr;
	if(endp(V99))invalid_macro_call();
	base[2]= (V99->c.c_car);
	V99=V99->c.c_cdr;
	if(!endp(V99))invalid_macro_call();}
	base[3]= list(3,VV[37],base[2],(*(LnkLI199))(VV[40]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for WRAPPER-CLASS	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V100=base[0]->c.c_cdr;
	if(endp(V100))invalid_macro_call();
	base[2]= (V100->c.c_car);
	V100=V100->c.c_cdr;
	if(!endp(V100))invalid_macro_call();}
	base[3]= list(3,VV[37],base[2],(*(LnkLI199))(VV[41]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for WRAPPER-NO-OF-INSTANCE-SLOTS	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V101=base[0]->c.c_cdr;
	if(endp(V101))invalid_macro_call();
	base[2]= (V101->c.c_car);
	V101=V101->c.c_cdr;
	if(!endp(V101))invalid_macro_call();}
	base[3]= list(3,VV[37],base[2],(*(LnkLI199))(VV[42]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for MAKE-WRAPPER-INTERNAL	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V102=base[0]->c.c_cdr;
	if(!endp(V102))invalid_macro_call();}
	V103 = CMPmake_fixnum((long)length(VV[32]));
	V104= list(2,VV[43],listA(3,VV[44],V103,VV[45]));
	V105= make_cons(/* INLINE-ARGS */V104,Cnil);
	{register object V107;
	register object V108;
	V107= Cnil;
	V108= Cnil;
	{register object V109;
	register object V110;
	register object V111;
	register object V112;
	V109= small_fixnum(0);
	V110= Cnil;
	V111= VV[32];
	V112= Cnil;
	goto T185;
T185:;
	{register object V113;
	V113= (V109);
	V109= number_plus((V109),small_fixnum(1));
	V110= (V113);}
	{register object V114;
	if(!(((V111))==Cnil)){
	goto T195;}
	goto T179;
	goto T195;
T195:;
	V114= CMPcar((V111));
	V111= CMPcdr((V111));
	V112= (V114);}
	{register object V115;
	V115= (V112);
	{register object V116;
	V116= (V115);
	if(!(eql((V116),VV[46]))){
	goto T200;}
	{register object V117;
	V117= list(3,VV[14],list(3,VV[37],VV[43],(V110)),VV[47]);
	if(((V107))!=Cnil){
	goto T204;}
	V108= make_cons((V117),Cnil);
	V107= (V108);
	goto T186;
	goto T204;
T204:;
	V119= make_cons((V117),Cnil);
	((V108))->c.c_cdr = /* INLINE-ARGS */V119;
	V118= (V108);
	V108= CMPcdr(V118);
	goto T186;}
	goto T200;
T200:;
	{register object x= (V116),V120= VV[48];
	while(V120!=Cnil)
	if(eql(x,V120->c.c_car)){
	goto T212;
	}else V120=V120->c.c_cdr;
	goto T211;}
	goto T212;
T212:;
	goto T186;
	goto T211;
T211:;
	base[2]= VV[49];
	base[3]= VV[50];
	base[4]= VV[51];
	base[5]= VV[52];
	base[6]= (V115);
	base[7]= VV[53];
	base[8]= VV[54];
	base[9]= VV[55];
	base[10]= VV[56];
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk200)();
	vs_top=sup;}}
	goto T186;
T186:;
	goto T185;}
	goto T179;
T179:;
	V106= (V107);}
	base[2]= listA(3,VV[10],/* INLINE-ARGS */V105,append(V106,VV[57]));
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function MAKE-WRAPPER	*/

static object LI30(object V121,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB30 VMS30 VMV30
	{object V122;
	object V123;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V122= V121;
	narg = narg - 1;
	if (narg <= 0) goto T223;
	else {
	V123= first;}
	--narg; goto T224;
	goto T223;
T223:;
	V123= Cnil;
	goto T224;
T224:;
	{object V124;
	{register object V125;
	base[0]= small_fixnum(13);
	base[1]= VV[5];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk44)();
	vs_top=sup;
	V125= vs_base[0];
	V126 = CMPmake_fixnum((long)(*(LnkLI201))());
	(void)(((V125))->v.v_self[0]= (V126));
	V127 = CMPmake_fixnum((long)(*(LnkLI201))());
	(void)(((V125))->v.v_self[1]= (V127));
	V128 = CMPmake_fixnum((long)(*(LnkLI201))());
	(void)(((V125))->v.v_self[2]= (V128));
	V129 = CMPmake_fixnum((long)(*(LnkLI201))());
	(void)(((V125))->v.v_self[3]= (V129));
	V130 = CMPmake_fixnum((long)(*(LnkLI201))());
	(void)(((V125))->v.v_self[4]= (V130));
	V131 = CMPmake_fixnum((long)(*(LnkLI201))());
	(void)(((V125))->v.v_self[5]= (V131));
	V132 = CMPmake_fixnum((long)(*(LnkLI201))());
	(void)(((V125))->v.v_self[6]= (V132));
	V133 = CMPmake_fixnum((long)(*(LnkLI201))());
	(void)(((V125))->v.v_self[7]= (V133));
	(void)(((V125))->v.v_self[8]= (Ct));
	V124= (V125);}
	(void)(((V124))->v.v_self[12]= ((V122)));
	(void)(((V124))->v.v_self[11]= ((V123)));
	{object V134 = (V124);
	VMR30(V134)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for WRAPPER-CACHE-NUMBER-VECTOR-REF	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V135=base[0]->c.c_cdr;
	if(endp(V135))invalid_macro_call();
	base[2]= (V135->c.c_car);
	V135=V135->c.c_cdr;
	if(endp(V135))invalid_macro_call();
	base[3]= (V135->c.c_car);
	V135=V135->c.c_cdr;
	if(!endp(V135))invalid_macro_call();}
	base[4]= list(3,VV[1],VV[58],list(3,VV[0],list(2,VV[59],base[2]),base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for CLASS-NO-OF-INSTANCE-SLOTS	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V136=base[0]->c.c_cdr;
	if(endp(V136))invalid_macro_call();
	base[2]= (V136->c.c_car);
	V136=V136->c.c_cdr;
	if(!endp(V136))invalid_macro_call();}
	base[3]= list(2,VV[60],list(2,VV[61],base[2]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for WRAPPER-CLASS*	*/

static void L33()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V137=base[0]->c.c_cdr;
	if(endp(V137))invalid_macro_call();
	base[2]= (V137->c.c_car);
	V137=V137->c.c_cdr;
	if(!endp(V137))invalid_macro_call();}
	base[3]= list(2,VV[62],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INVALID-WRAPPER-P	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V138=base[0]->c.c_cdr;
	if(endp(V138))invalid_macro_call();
	base[2]= (V138->c.c_car);
	V138=V138->c.c_cdr;
	if(!endp(V138))invalid_macro_call();}
	base[3]= list(3,VV[63],list(2,VV[64],base[2]),VV[65]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function INVALIDATE-WRAPPER	*/

static object LI35(V142,V143,V144)

object V142;object V143;object V144;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	{object V146= V143;
	if((V146!= VV[202])
	&& (V146!= VV[67]))goto T242;
	{object V147;
	V147= Cnil;
	{register object V148;
	register object V149;
	base[2]= (V142);
	base[3]= (VV[66]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V148= vs_base[0];
	V149= CMPcar((V148));
	goto T249;
T249:;
	if(!(((V148))==Cnil)){
	goto T250;}
	goto T243;
	goto T250;
T250:;
	if(!(((V143))==(VV[67]))){
	goto T254;}
	{register object V151;
	V151= VV[67];
	(V149)->c.c_car = (V151);}
	goto T254;
T254:;
	{register object V153;
	V153= (V144);
	(CMPcdr(V149))->c.c_car = (V153);
	(void)(CMPcdr(V149));}
	V147= make_cons(V149,(V147));
	V148= CMPcdr((V148));
	V149= CMPcar((V148));
	goto T249;}
	goto T243;
T243:;
	{register object V156;
	object V157;
	register object V158;
	object V159;
	V156= VV[32];
	V157= Cnil;
	V158= small_fixnum(0);
	V159= Cnil;
	goto T275;
T275:;
	{object V160;
	if(!(((V156))==Cnil)){
	goto T281;}
	goto T269;
	goto T281;
T281:;
	V160= CMPcar((V156));
	V156= CMPcdr((V156));
	V157= (V160);}
	{object V161;
	V161= (V158);
	V158= number_plus((V158),small_fixnum(1));
	V159= (V161);}
	if(!(((V157))==(VV[46]))){
	goto T276;}
	(void)(((V142)->v.v_self[fix((V159))]=(small_fixnum(0))));
	goto T276;
T276:;
	goto T275;}
	goto T269;
T269:;
	{object V162;
	V163= list(2,(V143),(V144));
	V162= ((V142))->v.v_self[8]= (/* INLINE-ARGS */V163);
	V147= make_cons((V162),(V147));}
	{object V165;
	V165= (VV[66]->s.s_dbind);
	base[0]= V142;
	base[1]= (V165);
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	siLhash_set();
	vs_top=sup;}
	{object V168;
	V168= (VV[66]->s.s_dbind);
	base[0]= V144;
	base[1]= (V168);
	base[2]= V147;
	vs_top=(vs_base=base+0)+3;
	siLhash_set();
	vs_top=sup;
	{object V170 = vs_base[0];
	VMR35(V170)}}}
	goto T242;
T242:;
	base[0]= VV[49];
	base[1]= VV[50];
	base[2]= VV[51];
	base[3]= VV[52];
	base[4]= V143;
	base[5]= VV[53];
	base[6]= VV[68];
	base[7]= VV[55];
	base[8]= VV[69];
	vs_top=(vs_base=base+0)+9;
	(void) (*Lnk200)();
	vs_top=sup;
	{object V171 = vs_base[0];
	VMR35(V171)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CHECK-WRAPPER-VALIDITY	*/

static object LI36(V173)

register object V173;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	{register object V174;
	register object V175;
	V174= (*(LnkLI79))((V173));
	V175= ((V174))->v.v_self[8];
	if(!(((V175))==(Ct))){
	goto T316;}
	{object V176 = (V174);
	VMR36(V176)}
	goto T316;
T316:;
	{object V177;
	{object V178;
	V178= CMPcar((V175));
	{object V179= (V178);
	if((V179!= VV[202]))goto T320;
	V177= (*(LnkLI203))((V174),CMPcadr((V175)),(V173));
	goto T318;
	goto T320;
T320:;
	if((V179!= VV[67]))goto T321;
	V177= (*(LnkLI204))((V174),CMPcadr((V175)),(V173));
	goto T318;
	goto T321;
T321:;
	base[2]= VV[49];
	base[3]= VV[50];
	base[4]= VV[51];
	base[5]= VV[52];
	base[6]= (V178);
	base[7]= VV[53];
	base[8]= VV[70];
	base[9]= VV[55];
	base[10]= VV[71];
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk200)();
	vs_top=sup;
	V177= vs_base[0];}}
	goto T318;
T318:;
	V180= (*(LnkLI79))((V173));
	if(!(((((V177))==(/* INLINE-ARGS */V180)?Ct:Cnil))==Cnil)){
	goto T333;}
	base[2]= VV[72];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T331;
	goto T333;
T333:;
	if(!((((((V177))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T331;}
	base[2]= VV[73];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T331;
T331:;
	{object V181 = (V177);
	VMR36(V181)}}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for CHECK-WRAPPER-VALIDITY1	*/

static void L37()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V182=base[0]->c.c_cdr;
	if(endp(V182))invalid_macro_call();
	base[2]= (V182->c.c_car);
	V182=V182->c.c_cdr;
	if(!endp(V182))invalid_macro_call();}
	{object V183;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V183= vs_base[0];
	V184= list(2,VV[75],base[2]);
	V185= list(2,/* INLINE-ARGS */V184,list(2,VV[76],base[2]));
	V186= list(2,VV[77],base[2]);
	V187= list(2,/* INLINE-ARGS */V186,list(2,VV[78],base[2]));
	V188= list(2,(V183),list(4,VV[74],/* INLINE-ARGS */V185,/* INLINE-ARGS */V187,list(2,Ct,list(2,VV[79],base[2]))));
	V189= make_cons(/* INLINE-ARGS */V188,Cnil);
	V190= list(3,VV[81],VV[82],list(2,VV[64],(V183)));
	base[3]= list(3,VV[10],/* INLINE-ARGS */V189,list(4,VV[80],/* INLINE-ARGS */V190,(V183),list(2,VV[83],base[2])));
	vs_top=(vs_base=base+3)+1;
	return;}
}
/*	local entry for function GET-CACHE	*/

static object LI38(V195,V196,V197,V198)

object V195;object V196;object V197;long V198;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	{register object V199;{object V200;
	{object V201;
	V201= CMPcar((VV[84]->s.s_dbind));
	(VV[84]->s.s_dbind)= CMPcdr((VV[84]->s.s_dbind));
	V200= (V201);}
	if(V200==Cnil)goto T341;
	V199= V200;
	goto T340;
	goto T341;
T341:;}
	V199= (*(LnkLI205))();
	goto T340;
T340:;
	{long V202;
	long V203;
	long V204;
	long V205;
	base[0]= (V195);
	base[1]= (V196);
	base[2]= CMPmake_fixnum(V198);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk206)();
	if(vs_base>=vs_top){vs_top=sup;goto T350;}
	V202= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T351;}
	V203= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T352;}
	V204= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T353;}
	V205= fix(vs_base[0]);
	vs_top=sup;
	goto T354;
	goto T350;
T350:;
	V202= fix(Cnil);
	goto T351;
T351:;
	V203= fix(Cnil);
	goto T352;
T352:;
	V204= fix(Cnil);
	goto T353;
T353:;
	V205= fix(Cnil);
	goto T354;
T354:;
	V206= Ct;
	STSET(unsigned short,(V199),4, fix((V195)));
	(void)(fix((V195)));
	V207= Ct;
	STSET(object,(V199),8, (V196));
	(void)((V196));
	V208= Ct;
	STSET(fixnum,(V199),12, V205);
	(void)(V205);
	{long V209= fix((*(LnkLI199))(VV[46]));
	V210= Ct;
	STSET(unsigned char,(V199),16, /* INLINE-ARGS */V209);
	(void)(/* INLINE-ARGS */V209);}
	V211= Ct;
	STSET(object,(V199),20, (V197));
	(void)((V197));
	V212= Ct;
	STSET(fixnum,(V199),24, V202);
	(void)(V202);
	V213= Ct;
	STSET(fixnum,(V199),28, V203);
	(void)(V203);
	V214= Ct;
	STSET(unsigned short,(V199),32, V204);
	(void)(V204);
	{long V216;
	V216= (long)(V205)-1;
	if(!(number_compare((V195),small_fixnum(1))==0)){
	goto T368;}
	V215= (long)(V216)*(V204);
	goto T365;
	goto T368;
T368:;
	V215= (long)((long)(V216)*(V204))+1;}
	goto T365;
T365:;
	V217= Ct;
	STSET(fixnum,(V199),36, V215);
	(void)(V215);
	V218 = CMPmake_fixnum(V203);
	V219= (*(LnkLI207))(V218);
	V220= Ct;
	STSET(object,(V199),40, /* INLINE-ARGS */V219);
	(void)(/* INLINE-ARGS */V219);
	V221= Ct;
	STSET(object,(V199),44, Cnil);
	(void)(Cnil);
	{object V222 = (V199);
	VMR38(V222)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-CACHE-FROM-CACHE	*/

static object LI39(object V224,object V223,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB39 VMS39 VMV39
	{register object V225;
	long V226;
	object V227;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V225= V224;
	V226= fix(V223);
	narg = narg - 2;
	if (narg <= 0) goto T371;
	else {
	V227= first;}
	--narg; goto T372;
	goto T371;
T371:;
	V227= (*(LnkLI199))(VV[46]);
	goto T372;
T372:;
	{object V228;
	object V229;
	register object V230;
	V228= CMPmake_fixnum((long)STREF(unsigned short,(V225),4));
	V229= STREF(object,(V225),8);{object V231;
	{object V232;
	V232= CMPcar((VV[84]->s.s_dbind));
	(VV[84]->s.s_dbind)= CMPcdr((VV[84]->s.s_dbind));
	V231= (V232);}
	if(V231==Cnil)goto T377;
	V230= V231;
	goto T376;
	goto T377;
T377:;}
	V230= (*(LnkLI205))();
	goto T376;
T376:;
	{long V233;
	long V234;
	long V235;
	long V236;
	if(!((V226)==((long)STREF(fixnum,(V225),12)))){
	goto T384;}
	base[0]= CMPmake_fixnum((long)STREF(fixnum,(V225),24));
	base[1]= CMPmake_fixnum((long)STREF(fixnum,(V225),28));
	base[2]= CMPmake_fixnum((long)STREF(unsigned short,(V225),32));
	base[3]= CMPmake_fixnum((long)STREF(fixnum,(V225),12));
	vs_top=(vs_base=base+0)+4;
	goto T382;
	goto T384;
T384:;
	base[0]= (V228);
	base[1]= (V229);
	base[2]= CMPmake_fixnum(V226);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk206)();
	goto T382;
T382:;
	if(vs_base>=vs_top){vs_top=sup;goto T393;}
	V233= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T394;}
	V234= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T395;}
	V235= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T396;}
	V236= fix(vs_base[0]);
	vs_top=sup;
	goto T397;
	goto T393;
T393:;
	V233= fix(Cnil);
	goto T394;
T394:;
	V234= fix(Cnil);
	goto T395;
T395:;
	V235= fix(Cnil);
	goto T396;
T396:;
	V236= fix(Cnil);
	goto T397;
T397:;
	V237= Ct;
	STSET(object,(V230),0, STREF(object,(V225),0));
	(void)(STREF(object,(V225),0));
	V238= Ct;
	STSET(unsigned short,(V230),4, fix((V228)));
	(void)(fix((V228)));
	V239= Ct;
	STSET(object,(V230),8, (V229));
	(void)((V229));
	V240= Ct;
	STSET(fixnum,(V230),12, V236);
	(void)(V236);
	V241= Ct;
	STSET(unsigned char,(V230),16, fix((V227)));
	(void)(fix((V227)));
	V242= Ct;
	STSET(object,(V230),20, STREF(object,(V225),20));
	(void)(STREF(object,(V225),20));
	V243= Ct;
	STSET(fixnum,(V230),24, V233);
	(void)(V233);
	V244= Ct;
	STSET(fixnum,(V230),28, V234);
	(void)(V234);
	V245= Ct;
	STSET(unsigned short,(V230),32, V235);
	(void)(V235);
	{long V247;
	V247= (long)(V236)-1;
	if(!(number_compare((V228),small_fixnum(1))==0)){
	goto T412;}
	V246= (long)(V247)*(V235);
	goto T409;
	goto T412;
T412:;
	V246= (long)((long)(V247)*(V235))+1;}
	goto T409;
T409:;
	V248= Ct;
	STSET(fixnum,(V230),36, V246);
	(void)(V246);
	V249 = CMPmake_fixnum(V234);
	V250= (*(LnkLI207))(V249);
	V251= Ct;
	STSET(object,(V230),40, /* INLINE-ARGS */V250);
	(void)(/* INLINE-ARGS */V250);
	V252= Ct;
	STSET(object,(V230),44, Cnil);
	(void)(Cnil);
	{object V253 = (V230);
	VMR39(V253)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function COPY-CACHE	*/

static object LI40(V255)

object V255;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{object V256;
	object V257;
	register object V258;
	register object V259;
	base[4]= (V255);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk208)();
	vs_top=sup;
	V256= vs_base[0];
	V257= CMPmake_fixnum((long)STREF(fixnum,(V255),28));
	V258= STREF(object,(V255),40);
	V259= (*(LnkLI207))((V257));
	{register long V260;
	register long V261;
	V260= fix((V257));
	V261= 0;
	goto T424;
T424:;
	if(!((V261)>=(V260))){
	goto T425;}
	goto T420;
	goto T425;
T425:;
	(void)(((V259))->v.v_self[V261]= (((V258))->v.v_self[V261]));
	V261= (long)(V261)+1;
	goto T424;}
	goto T420;
T420:;
	V262= Ct;
	STSET(object,(V256),40, (V259));
	(void)((V259));
	{object V263 = (V256);
	VMR40(V263)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FREE-CACHE	*/

static object LI41(V265)

register object V265;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	(void)((*(LnkLI209))(STREF(object,(V265),40)));
	V266= Ct;
	STSET(object,(V265),40, VV[85]);
	(void)(VV[85]);
	V267= Ct;
	STSET(object,(V265),0, Cnil);
	(void)(Cnil);
	(VV[84]->s.s_dbind)= make_cons(V265,(VV[84]->s.s_dbind));
	{object V269 = Cnil;
	VMR41(V269)}
	return Cnil;
}
/*	local entry for function COMPUTE-LINE-SIZE	*/

static object LI42(V271)

object V271;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	{object V272 = (*(LnkLI210))(fix((V271)));
	VMR42(V272)}
	return Cnil;
}
/*	function definition for COMPUTE-CACHE-PARAMETERS	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{long V273;
	object V274;
	register object V275;
	check_arg(3);
	V273=fix(base[0]);
	V274=(base[1]);
	V275=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((V273)==(1))){
	goto T439;}
	{register long V276;
	long V277;
	if(((V274))==Cnil){
	goto T443;}
	V276= 2;
	goto T441;
	goto T443;
T443:;
	V276= 1;
	goto T441;
T441:;
	if(!(type_of((V275))==t_fixnum)){
	goto T447;}
	{long V278= fix((*(LnkLI210))(fix((V275))));
	V277= (long)(V276)*(/* INLINE-ARGS */V278);
	goto T445;}
	goto T447;
T447:;
	base[3]= (V275);
	base[4]= small_fixnum(0);
	vs_top=(vs_base=base+3)+2;
	Larray_dimension();
	vs_top=sup;
	V277= fix(vs_base[0]);
	goto T445;
T445:;
	base[3]= CMPmake_fixnum((long)(((long)(V277)-1) ^ ((long)(V276)-1)));
	base[4]= CMPmake_fixnum(V277);
	base[5]= CMPmake_fixnum(V276);
	base[6]= CMPmake_fixnum((long)({fixnum _t=(V277)/(V276);((V276)<0  && (V277)<=0) || ((V276)>0 && (V277)>=0) || ((V276)*_t == (V277)) ? _t : _t - 1;}));
	vs_top=(vs_base=base+3)+4;
	return;}
	goto T439;
T439:;
	{register long V279;
	long V280;
	if(((V274))==Cnil){
	goto T458;}
	V282 = CMPmake_fixnum(V273);
	V281= fix(one_plus(V282));
	goto T456;
	goto T458;
T458:;
	V281= V273;
	goto T456;
T456:;
	V279= fix((*(LnkLI210))(V281));
	if(!(type_of((V275))==t_fixnum)){
	goto T462;}
	{long V283= fix((*(LnkLI210))(fix((V275))));
	V280= (long)(V279)*(/* INLINE-ARGS */V283);
	goto T460;}
	goto T462;
T462:;
	base[3]= (V275);
	base[4]= small_fixnum(0);
	vs_top=(vs_base=base+3)+2;
	Larray_dimension();
	vs_top=sup;
	V284= vs_base[0];
	V280= fix(one_minus(V284));
	goto T460;
T460:;
	base[3]= CMPmake_fixnum((long)(((long)(V280)-1) ^ ((long)(V279)-1)));
	base[4]= CMPmake_fixnum((long)(V280)+1);
	base[5]= CMPmake_fixnum(V279);
	base[6]= CMPmake_fixnum((long)({fixnum _t=(V280)/(V279);((V279)<0  && (V280)<=0) || ((V279)>0 && (V280)>=0) || ((V279)*_t == (V280)) ? _t : _t - 1;}));
	vs_top=(vs_base=base+3)+4;
	return;}
	}
}
/*	local entry for function COMPUTE-PRIMARY-CACHE-LOCATION	*/

static object LI44(V288,V289,V290)

register long V288;long V289;object V290;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	if(type_of((V290))==t_cons||((V290))==Cnil){
	goto T472;}
	{long V291 = (long)((V289) & (fix(((V290))->v.v_self[V288])));
	VMR44((object)V291)}
	goto T472;
T472:;
	{register long V292;
	register long V293;
	V292= 0;
	V293= 0;
	{register object V294;
	register object V295;
	V294= (V290);
	V295= CMPcar((V294));
	goto T480;
T480:;
	if(!(((V294))==Cnil)){
	goto T481;}
	goto T476;
	goto T481;
T481:;
	{register long V296;
	V296= fix(((V295))->v.v_self[V288]);
	if(!((V296)==0)){
	goto T488;}
	{long V297 = 0;
	VMR44((object)V297)}
	goto T488;
T488:;
	V292= (long)(V292)+(V296);}
	if((V293)==0){
	goto T491;}
	if(!(((long)({fixnum _t=(V293)%(4);((4)<0 && _t<=0) || ((4)>0 && _t>=0) ? _t : _t + (4);}))==0)){
	goto T491;}
	V292= (long)((V292) & (134217727));
	goto T491;
T491:;
	V293= (long)(V293)+(1);
	V294= CMPcdr((V294));
	V295= CMPcar((V294));
	goto T480;}
	goto T476;
T476:;
	{long V298 = (long)((long)((V289) & (V292)))+1;
	VMR44((object)V298)}}
	base[0]=base[0];
}
/*	local entry for function COMPUTE-PRIMARY-CACHE-LOCATION-FROM-LOCATION	*/

static object LI45(object V300,object V299,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB45 VMS45 VMV45
	{object V301;
	register long V302;
	object V303;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V301= V300;
	V302= fix(V299);
	narg = narg - 2;
	if (narg <= 0) goto T504;
	else {
	V303= first;}
	--narg; goto T505;
	goto T504;
T504:;
	V303= (V301);
	goto T505;
T505:;
	{register long V304;
	register object V305;
	register long V306;
	long V307;
	long V308;
	V304= 0;
	V305= STREF(object,(V303),40);
	V306= (long)STREF(unsigned char,(V301),16);
	V307= (long)STREF(fixnum,(V301),24);
	V308= (long)STREF(unsigned short,(V301),4);
	{register long V309;
	register long V310;
	V309= V308;
	V310= 0;
	goto T516;
T516:;
	if(!((V310)>=(V309))){
	goto T517;}
	goto T512;
	goto T517;
T517:;
	{register object V311;
	register long V312;
	V311= ((V305))->v.v_self[(long)(V310)+(V302)];
	V312= fix(((V311))->v.v_self[V306]);
	V304= (long)(V304)+(V312);}
	if((V310)==0){
	goto T524;}
	if(!(((long)({fixnum _t=(V310)%(4);((4)<0 && _t<=0) || ((4)>0 && _t>=0) ? _t : _t + (4);}))==0)){
	goto T524;}
	V304= (long)((V304) & (134217727));
	goto T524;
T524:;
	V310= (long)(V310)+1;
	goto T516;}
	goto T512;
T512:;
	if(!((V308)==(1))){
	goto T534;}
	{object V313 = CMPmake_fixnum((long)((V307) & (V304)));
	VMR45(V313)}
	goto T534;
T534:;
	{object V314 = CMPmake_fixnum((long)((long)((V307) & (V304)))+1);
	VMR45(V314)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function RAISE-METATYPE	*/

static object LI48(V317,V318)

register object V317;object V318;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	base[0]= (V318);
	base[1]= (VFUN_NARGS=1,(*(LnkLI211))(VV[86]));
	base[2]= (VFUN_NARGS=1,(*(LnkLI211))(VV[87]));
	base[3]= (VFUN_NARGS=1,(*(LnkLI211))(VV[88]));
	base[4]= (VFUN_NARGS=1,(*(LnkLI211))(VV[89]));
	base[5]= (VFUN_NARGS=1,(*(LnkLI211))(VV[90]));
	{register object V319;
	base[6]= base[0];
	vs_top=(vs_base=base+6)+1;
	L49(base);
	vs_top=sup;
	V319= vs_base[0];
	if(!(((V319))==(VV[91]))){
	goto T544;}
	{object V320 = VV[41];
	VMR46(V320)}
	goto T544;
T544:;
	if(((V317))!=Cnil){
	goto T547;}
	{object V321 = (V319);
	VMR46(V321)}
	goto T547;
T547:;
	if(!(((V317))==((V319)))){
	goto T550;}
	{object V322 = (V319);
	VMR46(V322)}
	goto T550;
T550:;
	{object V323 = VV[41];
	VMR46(V323)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for WITH-DFUN-WRAPPERS	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V324=base[0]->c.c_cdr;
	if(endp(V324))invalid_macro_call();
	{object V325= (V324->c.c_car);
	if(endp(V325))invalid_macro_call();
	base[2]= (V325->c.c_car);
	V325=V325->c.c_cdr;
	if(endp(V325))invalid_macro_call();
	base[3]= (V325->c.c_car);
	V325=V325->c.c_cdr;
	if(!endp(V325))invalid_macro_call();}
	V324=V324->c.c_cdr;
	if(endp(V324))invalid_macro_call();
	{object V326= (V324->c.c_car);
	if(endp(V326))invalid_macro_call();
	base[4]= (V326->c.c_car);
	V326=V326->c.c_cdr;
	if(endp(V326))invalid_macro_call();
	base[5]= (V326->c.c_car);
	V326=V326->c.c_cdr;
	if(endp(V326)){
	base[6]= Cnil;
	} else {
	base[6]= (V326->c.c_car);
	V326=V326->c.c_cdr;}
	if(endp(V326)){
	base[7]= Cnil;
	} else {
	base[7]= (V326->c.c_car);
	V326=V326->c.c_cdr;}
	if(endp(V326)){
	base[8]= Cnil;
	} else {
	base[8]= (V326->c.c_car);
	V326=V326->c.c_cdr;}
	if(!endp(V326))invalid_macro_call();}
	V324=V324->c.c_cdr;
	if(endp(V324))invalid_macro_call();
	base[9]= (V324->c.c_car);
	V324=V324->c.c_cdr;
	base[10]= V324;}
	V327= list(2,VV[100],base[2]);
	V328= list(2,base[5],Cnil);
	V329= list(2,base[4],Cnil);
	if((base[6])==Cnil){
	goto T557;}
	V330= VV[103];
	goto T555;
	goto T557;
T557:;
	V330= Cnil;
	goto T555;
T555:;
	V331= listA(6,/* INLINE-ARGS */V327,/* INLINE-ARGS */V328,VV[101],/* INLINE-ARGS */V329,VV[102],V330);
	V332= list(2,VV[105],base[3]);
	if((base[6])==Cnil){
	goto T561;}
	V333= VV[109];
	goto T559;
	goto T561;
T561:;
	V333= Cnil;
	goto T559;
T559:;
	V334= listA(3,VV[107],VV[108],V333);
	V335= list(4,VV[113],VV[114],list(3,VV[115],base[5],Ct),VV[116]);
	V336= list(2,VV[117],base[4]);
	V337= list(2,/* INLINE-ARGS */V336,list(3,VV[115],base[4],VV[43]));
	V338= list(2,VV[118],list(2,VV[119],base[4]));
	V339= list(4,VV[74],/* INLINE-ARGS */V337,list(3,/* INLINE-ARGS */V338,VV[120],list(3,VV[115],base[4],list(3,VV[121],base[4],VV[122]))),VV[123]);
	if((base[6])==Cnil){
	goto T565;}
	V340= VV[124];
	goto T563;
	goto T565;
T565:;
	V340= Cnil;
	goto T563;
T563:;
	V341= listA(6,VV[110],VV[111],VV[112],/* INLINE-ARGS */V335,/* INLINE-ARGS */V339,V340);
	if((base[6])==Cnil){
	goto T569;}
	V342= VV[125];
	goto T567;
	goto T569;
T569:;
	V342= Cnil;
	goto T567;
T567:;
	V343= list(4,VV[104],/* INLINE-ARGS */V332,VV[106],listA(4,VV[99],/* INLINE-ARGS */V334,/* INLINE-ARGS */V341,V342));
	if((base[6])==Cnil){
	goto T573;}
	V345= list(2,base[6],VV[127]);
	V346= list(2,base[7],VV[128]);
	V344= list(3,/* INLINE-ARGS */V345,/* INLINE-ARGS */V346,list(2,base[8],list(3,VV[129],VV[130],base[7])));
	goto T571;
	goto T573;
T573:;
	V344= Cnil;
	goto T571;
T571:;
	base[11]= list(4,VV[99],/* INLINE-ARGS */V331,/* INLINE-ARGS */V343,list(4,VV[80],VV[126],base[9],listA(3,VV[99],V344,base[10])));
	vs_top=(vs_base=base+11)+1;
	return;
}
/*	local entry for function DFUN-ARG-SYMBOL	*/

static object LI51(V348)

object V348;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;{object V349;
	V349= nth(fix((V348)),(VV[131]->s.s_dbind));
	if(V349==Cnil)goto T575;
	{object V350 = V349;
	VMR48(V350)}
	goto T575;
T575:;}
	base[1]= Cnil;
	base[2]= VV[132];
	base[3]= (V348);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[133]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V351 = vs_base[0];
	VMR48(V351)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SLOT-VECTOR-SYMBOL	*/

static object LI52(V353)

object V353;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;{object V354;
	V354= nth(fix((V353)),(VV[134]->s.s_dbind));
	if(V354==Cnil)goto T582;
	{object V355 = V354;
	VMR49(V355)}
	goto T582;
T582:;}
	base[1]= Cnil;
	base[2]= VV[135];
	base[3]= (V353);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[133]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V356 = vs_base[0];
	VMR49(V356)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-DFUN-LAMBDA-LIST	*/

static object LI53(V359,V360)

object V359;object V360;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{register object V361;
	register object V362;
	V361= Cnil;
	V362= Cnil;
	{register object V363;
	register object V364;
	register object V365;
	register object V366;
	V363= small_fixnum(0);
	V364= Cnil;
	V365= (V359);
	V366= Cnil;
	goto T598;
T598:;
	{object V367;
	V367= (V363);
	V363= number_plus((V363),small_fixnum(1));
	V364= (V367);}
	{object V368;
	if(!(((V365))==Cnil)){
	goto T608;}
	goto T592;
	goto T608;
T608:;
	V368= CMPcar((V365));
	V365= CMPcdr((V365));
	V366= (V368);}
	{register object V369;
	V369= (*(LnkLI212))((V364));
	if(((V361))!=Cnil){
	goto T615;}
	V362= make_cons((V369),Cnil);
	V361= (V362);
	goto T599;
	goto T615;
T615:;
	V371= make_cons((V369),Cnil);
	((V362))->c.c_cdr = /* INLINE-ARGS */V371;
	V370= (V362);
	V362= CMPcdr(V370);}
	goto T599;
T599:;
	goto T598;}
	goto T592;
T592:;
	if(((V360))==Cnil){
	goto T591;}
	if(((V361))!=Cnil){
	goto T626;}
	V362= make_cons(VV[136],Cnil);
	V361= (V362);
	goto T624;
	goto T626;
T626:;
	V374= make_cons(VV[136],Cnil);
	((V362))->c.c_cdr = /* INLINE-ARGS */V374;
	V373= (V362);
	V362= CMPcdr(V373);
	goto T624;
T624:;
	if(((V361))!=Cnil){
	goto T633;}
	V362= make_cons(VV[137],Cnil);
	V361= (V362);
	goto T591;
	goto T633;
T633:;
	V377= make_cons(VV[137],Cnil);
	((V362))->c.c_cdr = /* INLINE-ARGS */V377;
	V376= (V362);
	V362= CMPcdr(V376);
	goto T591;
T591:;
	{object V378 = (V361);
	VMR50(V378)}}
	return Cnil;
}
/*	local entry for function MAKE-DLAP-LAMBDA-LIST	*/

static object LI54(V381,V382)

object V381;object V382;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{register object V383;
	register object V384;
	V383= Cnil;
	V384= Cnil;
	{register object V385;
	register object V386;
	register object V387;
	register object V388;
	V385= small_fixnum(0);
	V386= Cnil;
	V387= (V381);
	V388= Cnil;
	goto T648;
T648:;
	{object V389;
	V389= (V385);
	V385= number_plus((V385),small_fixnum(1));
	V386= (V389);}
	{object V390;
	if(!(((V387))==Cnil)){
	goto T658;}
	goto T642;
	goto T658;
T658:;
	V390= CMPcar((V387));
	V387= CMPcdr((V387));
	V388= (V390);}
	{register object V391;
	V391= (*(LnkLI212))((V386));
	if(((V383))!=Cnil){
	goto T665;}
	V384= make_cons((V391),Cnil);
	V383= (V384);
	goto T649;
	goto T665;
T665:;
	V393= make_cons((V391),Cnil);
	((V384))->c.c_cdr = /* INLINE-ARGS */V393;
	V392= (V384);
	V384= CMPcdr(V392);}
	goto T649;
T649:;
	goto T648;}
	goto T642;
T642:;
	if(((V382))==Cnil){
	goto T641;}
	if(((V383))!=Cnil){
	goto T675;}
	V384= make_cons(VV[136],Cnil);
	V383= (V384);
	goto T641;
	goto T675;
T675:;
	V396= make_cons(VV[136],Cnil);
	((V384))->c.c_cdr = /* INLINE-ARGS */V396;
	V395= (V384);
	V384= CMPcdr(V395);
	goto T641;
T641:;
	{object V397 = (V383);
	VMR51(V397)}}
	return Cnil;
}
/*	local entry for function MAKE-EMF-CALL	*/

static object LI55(object V400,object V399,object V398,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB52 VMS52 VMV52
	{object V401;
	object V402;
	object V403;
	object V404;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V401= V400;
	V402= V399;
	V403= V398;
	narg = narg - 3;
	if (narg <= 0) goto T681;
	else {
	V404= first;}
	--narg; goto T682;
	goto T681;
T681:;
	V404= Cnil;
	goto T682;
T682:;
	{object V405;
	{register object V406;
	register object V407;
	V406= Cnil;
	V407= Cnil;
	{register object V408;
	register object V409;
	register object V410;
	register object V411;
	V408= small_fixnum(0);
	V409= Cnil;
	V410= (V401);
	V411= Cnil;
	goto T693;
T693:;
	{object V412;
	V412= (V408);
	V408= number_plus((V408),small_fixnum(1));
	V409= (V412);}
	{object V413;
	if(!(((V410))==Cnil)){
	goto T703;}
	goto T687;
	goto T703;
T703:;
	V413= CMPcar((V410));
	V410= CMPcdr((V410));
	V411= (V413);}
	{register object V414;
	V414= (*(LnkLI212))((V409));
	if(((V406))!=Cnil){
	goto T710;}
	V407= make_cons((V414),Cnil);
	V406= (V407);
	goto T694;
	goto T710;
T710:;
	V416= make_cons((V414),Cnil);
	((V407))->c.c_cdr = /* INLINE-ARGS */V416;
	V415= (V407);
	V407= CMPcdr(V415);}
	goto T694;
T694:;
	goto T693;}
	goto T687;
T687:;
	V405= (V406);}
	if(!(((V404))==(VV[138]))){
	goto T719;}
	V417= VV[139];
	goto T717;
	goto T719;
T719:;
	V417= VV[140];
	goto T717;
T717:;
	if(((V402))==Cnil){
	goto T723;}
	V418= VV[141];
	goto T721;
	goto T723;
T723:;
	V418= Cnil;
	goto T721;
T721:;
	{object V419 = listA(4,V417,(V403),(V402),append((V405),V418));
	VMR52(V419)}}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function MAKE-DFUN-CALL	*/

static object LI56(V423,V424,V425)

object V423;object V424;object V425;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	{object V426;
	{register object V427;
	register object V428;
	V427= Cnil;
	V428= Cnil;
	{register object V429;
	register object V430;
	register object V431;
	register object V432;
	V429= small_fixnum(0);
	V430= Cnil;
	V431= (V423);
	V432= Cnil;
	goto T734;
T734:;
	{object V433;
	V433= (V429);
	V429= number_plus((V429),small_fixnum(1));
	V430= (V433);}
	{object V434;
	if(!(((V431))==Cnil)){
	goto T744;}
	goto T728;
	goto T744;
T744:;
	V434= CMPcar((V431));
	V431= CMPcdr((V431));
	V432= (V434);}
	{register object V435;
	V435= (*(LnkLI212))((V430));
	if(((V427))!=Cnil){
	goto T751;}
	V428= make_cons((V435),Cnil);
	V427= (V428);
	goto T735;
	goto T751;
T751:;
	V437= make_cons((V435),Cnil);
	((V428))->c.c_cdr = /* INLINE-ARGS */V437;
	V436= (V428);
	V428= CMPcdr(V436);}
	goto T735;
T735:;
	goto T734;}
	goto T728;
T728:;
	V426= (V427);}
	if(((V424))==Cnil){
	goto T759;}
	{object V438 = listA(3,VV[142],(V425),append((V426),VV[143]));
	VMR53(V438)}
	goto T759;
T759:;
	{object V439 = listA(3,VV[144],(V425),(V426));
	VMR53(V439)}}
	return Cnil;
}
/*	local entry for function MAKE-DFUN-ARG-LIST	*/

static object LI57(V442,V443)

object V442;object V443;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	{object V444;
	{register object V445;
	register object V446;
	V445= Cnil;
	V446= Cnil;
	{register object V447;
	register object V448;
	register object V449;
	register object V450;
	V447= small_fixnum(0);
	V448= Cnil;
	V449= (V442);
	V450= Cnil;
	goto T770;
T770:;
	{object V451;
	V451= (V447);
	V447= number_plus((V447),small_fixnum(1));
	V448= (V451);}
	{object V452;
	if(!(((V449))==Cnil)){
	goto T780;}
	goto T764;
	goto T780;
T780:;
	V452= CMPcar((V449));
	V449= CMPcdr((V449));
	V450= (V452);}
	{register object V453;
	V453= (*(LnkLI212))((V448));
	if(((V445))!=Cnil){
	goto T787;}
	V446= make_cons((V453),Cnil);
	V445= (V446);
	goto T771;
	goto T787;
T787:;
	V455= make_cons((V453),Cnil);
	((V446))->c.c_cdr = /* INLINE-ARGS */V455;
	V454= (V446);
	V446= CMPcdr(V454);}
	goto T771;
T771:;
	goto T770;}
	goto T764;
T764:;
	V444= (V445);}
	if(((V443))==Cnil){
	goto T795;}
	V456= append((V444),VV[146]);
	{object V457 = make_cons(VV[145],/* INLINE-ARGS */V456);
	VMR54(V457)}
	goto T795;
T795:;
	{object V458 = make_cons(VV[147],(V444));
	VMR54(V458)}}
	return Cnil;
}
/*	local entry for function MAKE-FAST-METHOD-CALL-LAMBDA-LIST	*/

static object LI58(V461,V462)

object V461;object V462;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{register object V463;
	register object V464;
	V463= Cnil;
	V464= Cnil;
	if(((V463))!=Cnil){
	goto T802;}
	V464= make_cons(VV[148],Cnil);
	V463= (V464);
	goto T800;
	goto T802;
T802:;
	V467= make_cons(VV[148],Cnil);
	((V464))->c.c_cdr = /* INLINE-ARGS */V467;
	V466= (V464);
	V464= CMPcdr(V466);
	goto T800;
T800:;
	if(((V463))!=Cnil){
	goto T810;}
	V464= make_cons(VV[149],Cnil);
	V463= (V464);
	goto T808;
	goto T810;
T810:;
	V470= make_cons(VV[149],Cnil);
	((V464))->c.c_cdr = /* INLINE-ARGS */V470;
	V469= (V464);
	V464= CMPcdr(V469);
	goto T808;
T808:;
	{register object V471;
	register object V472;
	register object V473;
	register object V474;
	V471= small_fixnum(0);
	V472= Cnil;
	V473= (V461);
	V474= Cnil;
	goto T822;
T822:;
	{object V475;
	V475= (V471);
	V471= number_plus((V471),small_fixnum(1));
	V472= (V475);}
	{object V476;
	if(!(((V473))==Cnil)){
	goto T832;}
	goto T816;
	goto T832;
T832:;
	V476= CMPcar((V473));
	V473= CMPcdr((V473));
	V474= (V476);}
	{register object V477;
	V477= (*(LnkLI212))((V472));
	if(((V463))!=Cnil){
	goto T839;}
	V464= make_cons((V477),Cnil);
	V463= (V464);
	goto T823;
	goto T839;
T839:;
	V479= make_cons((V477),Cnil);
	((V464))->c.c_cdr = /* INLINE-ARGS */V479;
	V478= (V464);
	V464= CMPcdr(V478);}
	goto T823;
T823:;
	goto T822;}
	goto T816;
T816:;
	if(((V462))==Cnil){
	goto T799;}
	if(((V463))!=Cnil){
	goto T849;}
	V464= make_cons(VV[137],Cnil);
	V463= (V464);
	goto T799;
	goto T849;
T849:;
	V482= make_cons(VV[137],Cnil);
	((V464))->c.c_cdr = /* INLINE-ARGS */V482;
	V481= (V464);
	V464= CMPcdr(V481);
	goto T799;
T799:;
	{object V483 = (V463);
	VMR55(V483)}}
	return Cnil;
}
/*	macro definition for FIN-LAMBDA-FN	*/

static void L59()
{register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V484=base[0]->c.c_cdr;
	if(endp(V484))invalid_macro_call();
	base[2]= (V484->c.c_car);
	V484=V484->c.c_cdr;
	base[3]= V484;}
	base[4]= list(2,VV[150],listA(3,VV[151],base[2],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function MAKE-DISPATCH-LAMBDA	*/

static object LI60(V489,V490,V491,V492)

object V489;object V490;object V491;object V492;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;
	if(((V489))==Cnil){
	goto T857;}
	V493= (*(LnkLI213))((V490),(V491));
	goto T855;
	goto T857;
T857:;
	V493= (*(LnkLI214))((V490),(V491));
	goto T855;
T855:;
	if(((V489))!=Cnil){
	goto T861;}
	V494= VV[152];
	goto T859;
	goto T861;
T861:;
	V494= Cnil;
	goto T859;
T859:;
	{object V495 = listA(3,VV[151],V493,append(V494,(V492)));
	VMR57(V495)}
	return Cnil;
}
/*	macro definition for WITH-LOCAL-CACHE-FUNCTIONS	*/

static void L61()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V496=base[0]->c.c_cdr;
	if(endp(V496))invalid_macro_call();
	{object V497= (V496->c.c_car);
	if(endp(V497))invalid_macro_call();
	base[2]= (V497->c.c_car);
	V497=V497->c.c_cdr;
	if(!endp(V497))invalid_macro_call();}
	V496=V496->c.c_cdr;
	base[3]= V496;}
	V498= list(2,VV[153],base[2]);
	V499= make_cons(/* INLINE-ARGS */V498,Cnil);
	{object V501;
	object V502= VV[158];
	if(V502==Cnil){
	V500= Cnil;
	goto T863;}
	base[4]=V501=MMcons(Cnil,Cnil);
	goto T864;
T864:;
	{register object V503;
	V503= (V502->c.c_car);
	V504= CMPcar((V503));
	V505= CMPcadr((V503));
	{object V507;
	object V508= CMPcadr((V503));
	if(V508==Cnil){
	V506= Cnil;
	goto T866;}
	base[5]=V507=MMcons(Cnil,Cnil);
	goto T867;
T867:;
	(V507->c.c_car)= list(3,VV[147],list(2,VV[157],(V508->c.c_car)),(V508->c.c_car));
	if((V508=MMcdr(V508))==Cnil){
	V506= base[5];
	goto T866;}
	V507=MMcdr(V507)=MMcons(Cnil,Cnil);
	goto T867;}
	goto T866;
T866:;
	V510= make_cons(VV[147],V506);
	(V501->c.c_car)= list(3,/* INLINE-ARGS */V504,/* INLINE-ARGS */V505,list(4,VV[145],VV[156],/* INLINE-ARGS */V510,list(2,VV[157],CMPcddr((V503)))));}
	if((V502=MMcdr(V502))==Cnil){
	V500= base[4];
	goto T863;}
	V501=MMcdr(V501)=MMcons(Cnil,Cnil);
	goto T864;}
	goto T863;
T863:;
	base[4]= list(4,VV[10],/* INLINE-ARGS */V499,VV[154],listA(3,VV[155],V500,base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function FILL-CACHE	*/

static object LI62(object V513,object V512,object V511,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB59 VMS59 VMV59
	{register object V514;
	register object V515;
	object V516;
	object V517;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V514= V513;
	V515= V512;
	V516= V511;
	narg = narg - 3;
	if (narg <= 0) goto T869;
	else {
	V517= first;}
	--narg; goto T870;
	goto T869;
T869:;
	V517= Cnil;
	goto T870;
T870:;
	if(((V515))!=Cnil){
	goto T872;}
	base[0]= VV[159];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T872;
T872:;{object V518;
	V518= (*(LnkLI215))(Cnil,(V514),(V515),(V516));
	if(V518==Cnil)goto T876;
	{object V519 = V518;
	VMR59(V519)}
	goto T876;
T876:;}{object V520;
	V522 = CMPmake_fixnum((long)(*(LnkLI216))((V514)));
	base[0]= number_times(V522,VV[160]);
	vs_top=(vs_base=base+0)+1;
	Lceiling();
	vs_top=sup;
	V521= vs_base[0];
	if(!(((long)STREF(unsigned short,(V514),4))==(1))){
	goto T886;}
	V523= one_minus(CMPmake_fixnum((long)STREF(fixnum,(V514),12)));
	goto T884;
	goto T886;
T886:;
	V523= CMPmake_fixnum((long)STREF(fixnum,(V514),12));
	goto T884;
T884:;
	if(number_compare(V521,V523)<0){
	goto T880;}
	V520= Cnil;
	goto T879;
	goto T880;
T880:;
	V520= (*(LnkLI217))((V514),(V515),(V516),(V517));
	goto T879;
T879:;
	if(V520==Cnil)goto T878;
	{object V524 = V520;
	VMR59(V524)}
	goto T878;
T878:;}
	{object V525 = (*(LnkLI218))((V514),(V515),(V516),(V517));
	VMR59(V525)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for MAYBE-CHECK-CACHE	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V526=base[0]->c.c_cdr;
	if(endp(V526))invalid_macro_call();
	base[2]= (V526->c.c_car);
	V526=V526->c.c_cdr;
	if(!endp(V526))invalid_macro_call();}
	base[3]= list(3,VV[9],list(3,VV[113],VV[161],list(2,VV[162],base[2])),base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function CHECK-CACHE	*/

static object LI64(V528)

object V528;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	{register object V529;
	V529= (V528);
	{register object V530;
	object V531;
	V532= (long)STREF(unsigned short,(V529),4);
	if(!((V532)==(1))){
	goto T890;}
	V530= small_fixnum(0);
	goto T888;
	goto T890;
T890:;
	V530= small_fixnum(1);
	goto T888;
T888:;
	V533= STREF(object,(V529),20);
	V534= CMPmake_fixnum((long)STREF(fixnum,(V529),12));
	V531= (
	V535 = V533,
	(type_of(V535) == t_sfun ?(*((V535)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V535)==t_vfun) ?
	(*((V535)->sfn.sfn_self)):
	(fcall.fun=(V535),fcalln))(V534));
	{long V536;
	register long V537;
	V536= (long)STREF(fixnum,(V529),12);
	V537= 0;
	goto T899;
T899:;
	if(!((V537)>=(V536))){
	goto T900;}
	{object V538 = (V528);
	VMR61(V538)}
	goto T900;
T900:;
	{long V539;
	V539= fix((V530));
	V540= (long)STREF(unsigned short,(V529),4);
	if((V540)==(1)){
	goto T908;}
	goto T906;
	goto T908;
T908:;
	if((V539)==(0)){
	goto T903;}}
	goto T906;
T906:;
	{object V541;
	V541= CMPmake_fixnum(V537);
	{long V542;
	V542= fix((V541));
	V543= (long)STREF(unsigned short,(V529),4);
	if((V543)==(1)){
	goto T916;}
	goto T912;
	goto T916;
T916:;
	if(!((V542)==(0))){
	goto T912;}}
	base[0]= VV[163];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T912;
T912:;
	V544= STREF(object,(V529),40);
	{register long V546;
	V546= fix((V541));
	{long V547;
	V547= V546;
	V548= (long)STREF(unsigned short,(V529),4);
	if((V548)==(1)){
	goto T927;}
	goto T923;
	goto T927;
T927:;
	if(!((V547)==(0))){
	goto T923;}}
	base[0]= VV[164];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T923;
T923:;
	V549= (long)STREF(unsigned short,(V529),4);
	if(!((V549)==(1))){
	goto T932;}
	V550= (long)STREF(unsigned short,(V529),32);
	V545= (long)(V546)*(V550);
	goto T921;
	goto T932;
T932:;
	V551= (long)STREF(unsigned short,(V529),32);
	V545= (long)((long)(V546)*(V551))+1;}
	goto T921;
T921:;
	if(!(((((V544)->v.v_self[V545])==Cnil?Ct:Cnil))==Cnil)){
	goto T903;}}
	{register object V552;
	object V553;
	register object V554;
	V552= (VFUN_NARGS=2,(*(LnkLI219))((V528),(V530)));
	{long V555;
	{long V556;
	V556= fix((V552));
	V557= (long)STREF(unsigned short,(V529),4);
	if((V557)==(1)){
	goto T944;}
	goto T941;
	goto T944;
T944:;
	if(!((V556)==(0))){
	goto T941;}}
	{long V558;
	V558= fix((V552));
	V559= (long)STREF(fixnum,(V529),36);
	if(!((V558)==(V559))){
	goto T949;}
	V560= (long)STREF(unsigned short,(V529),4);
	if(!((V560)==(1))){
	goto T953;}
	V555= (long)STREF(unsigned short,(V529),32);
	goto T939;
	goto T953;
T953:;
	V555= 1;
	goto T939;
	goto T949;
T949:;
	V561= (long)STREF(unsigned short,(V529),32);
	V555= (long)(V558)+(V561);
	goto T939;}
	goto T941;
T941:;
	V555= fix((V552));
	goto T939;
T939:;
	V562= (long)STREF(unsigned short,(V529),4);
	if(!((V562)==(1))){
	goto T958;}
	base[3]= CMPmake_fixnum(V555);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V529),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V553= vs_base[0];
	goto T938;
	goto T958;
T958:;
	base[3]= CMPmake_fixnum((long)(V555)-1);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V529),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V553= vs_base[0];}
	goto T938;
T938:;
	if(((V553))==Cnil){
	goto T967;}
	{long V563;
	long V564;
	V563= fix((V553));
	V564= V537;
	{register long V565;
	V565= (long)(V564)-(V563);
	if(!((V565)<0)){
	goto T972;}
	V566= (long)STREF(fixnum,(V529),12);
	V565= (long)(V565)+(V566);
	{long V567;
	V567= 0;
	V568= (long)STREF(unsigned short,(V529),4);
	if((V568)==(1)){
	goto T981;}
	goto T972;
	goto T981;
T981:;
	if(!((V567)==(0))){
	goto T972;}}
	V565= (long)(V565)-1;
	goto T972;
T972:;
	V554= CMPmake_fixnum(V565);
	goto T965;}}
	goto T967;
T967:;
	V554= Cnil;
	goto T965;
T965:;
	if(((V554))==Cnil){
	goto T903;}
	if(!(number_compare((V554),(V531))>0)){
	goto T903;}
	base[3]= VV[165];
	base[4]= (V528);
	base[5]= (V530);
	base[6]= (V554);
	base[7]= (V531);
	vs_top=(vs_base=base+3)+5;
	Lerror();
	vs_top=sup;}
	goto T903;
T903:;
	{long V569;
	V569= fix((V530));
	V570= (long)STREF(fixnum,(V529),36);
	if(!((V569)==(V570))){
	goto T998;}
	V571= (long)STREF(unsigned short,(V529),4);
	if(!((V571)==(1))){
	goto T1002;}
	V530= CMPmake_fixnum((long)STREF(unsigned short,(V529),32));
	goto T995;
	goto T1002;
T1002:;
	V530= small_fixnum(1);
	goto T995;
	goto T998;
T998:;
	V572= (long)STREF(unsigned short,(V529),32);
	V530= CMPmake_fixnum((long)(V569)+(V572));}
	goto T995;
T995:;
	V537= (long)(V537)+1;
	goto T899;}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PROBE-CACHE	*/

static object LI65(object V574,object V573,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB62 VMS62 VMV62
	{object V575;
	object V576;
	object V577;
	object V578;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V575= V574;
	V576= V573;
	narg = narg - 2;
	if (narg <= 0) goto T1009;
	else {
	V577= first;}
	if (--narg <= 0) goto T1010;
	else {
	V578= va_arg(ap,object);}
	--narg; goto T1011;
	goto T1009;
T1009:;
	V577= Cnil;
	goto T1010;
T1010:;
	V578= Cnil;
	goto T1011;
T1011:;
	if(((V576))!=Cnil){
	goto T1014;}
	base[0]= VV[166];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1014;
T1014:;
	{register object V579;
	V579= (V575);
	{register long V580;
	long V581;
	V582= (long)STREF(unsigned char,(V579),16);
	V583= (long)STREF(fixnum,(V579),24);
	V580= (long)(*(LnkLI220))(V582,V583,(V576));
	if((V578)==Cnil){
	goto T1024;}
	V584= V578;
	goto T1022;
	goto T1024;
T1024:;
	V584= STREF(object,(V579),20);
	goto T1022;
T1022:;
	V586= CMPmake_fixnum((long)STREF(fixnum,(V579),12));
	V581= fix((
	V587 = V584,
	(type_of(V587) == t_sfun ?(*((V587)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V587)==t_vfun) ?
	(*((V587)->sfn.sfn_self)):
	(fcall.fun=(V587),fcalln))(V586)));
	{long V588;
	V588= V580;
	V589= (long)STREF(unsigned short,(V579),4);
	if((V589)==(1)){
	goto T1031;}
	goto T1027;
	goto T1031;
T1031:;
	if(!((V588)==(0))){
	goto T1027;}}
	{long V590;
	V590= V580;
	V591= (long)STREF(fixnum,(V579),36);
	if(!((V590)==(V591))){
	goto T1037;}
	V592= (long)STREF(unsigned short,(V579),4);
	if(!((V592)==(1))){
	goto T1041;}
	V580= (long)STREF(unsigned short,(V579),32);
	goto T1034;
	goto T1041;
T1041:;
	V580= 1;
	goto T1034;
	goto T1037;
T1037:;
	V593= (long)STREF(unsigned short,(V579),32);
	V580= (long)(V590)+(V593);}
	goto T1034;
T1034:;
	goto T1027;
T1027:;
	{long V594;
	long V595;
	V594= (long)(V581)+1;
	V595= 0;
	goto T1049;
T1049:;
	if(!((V595)>=(V594))){
	goto T1050;}
	goto T1045;
	goto T1050;
T1050:;
	{register long V596;
	register object V597;
	V596= V580;
	V597= (V576);
	{register object V598;
	V598= STREF(object,(V579),40);
	V599= (long)STREF(unsigned short,(V579),4);
	if(!((V599)==(1))){
	goto T1059;}
	if(!(((V597))==(((V598))->v.v_self[V596]))){
	goto T1053;}
	goto T1055;
	goto T1059;
T1059:;
	{long V600;
	register long V601;
	V600= (long)STREF(unsigned short,(V579),4);
	V601= 0;
	goto T1065;
T1065:;
	if(!((V601)>=(V600))){
	goto T1066;}
	goto T1055;
	goto T1066;
T1066:;
	{object V603;
	V603= CMPcar((V597));
	V597= CMPcdr((V597));
	V602= (V603);}
	if((V602)==(((V598))->v.v_self[(long)(V596)+(V601)])){
	goto T1069;}
	goto T1053;
	goto T1069;
T1069:;
	V601= (long)(V601)+1;
	goto T1065;}}}
	goto T1055;
T1055:;
	V604= STREF(object,(V579),8);
	if(!((V604)==Cnil)){
	goto T1079;}
	{object V605 = Ct;
	VMR62(V605)}
	goto T1079;
T1079:;
	{long V606;
	V606= V580;
	if((STREF(object,(V579),8))!=Cnil){
	goto T1083;}
	{object V607 = Cnil;
	VMR62(V607)}
	goto T1083;
T1083:;
	V608= STREF(object,(V579),40);
	V609= (long)STREF(unsigned short,(V579),4);
	{object V610 = (V608)->v.v_self[(long)(V606)+(V609)];
	VMR62(V610)}}
	goto T1053;
T1053:;
	{long V611;
	V611= V580;
	V612= (long)STREF(fixnum,(V579),36);
	if(!((V611)==(V612))){
	goto T1091;}
	V613= (long)STREF(unsigned short,(V579),4);
	if(!((V613)==(1))){
	goto T1095;}
	V580= (long)STREF(unsigned short,(V579),32);
	goto T1088;
	goto T1095;
T1095:;
	V580= 1;
	goto T1088;
	goto T1091;
T1091:;
	V614= (long)STREF(unsigned short,(V579),32);
	V580= (long)(V611)+(V614);}
	goto T1088;
T1088:;
	V595= (long)(V595)+1;
	goto T1049;}
	goto T1045;
T1045:;
	{register object V615;
	object V616;
	V615= STREF(object,(V579),44);
	V616= CMPcar((V615));
	goto T1106;
T1106:;
	if(!(((V615))==Cnil)){
	goto T1107;}
	goto T1102;
	goto T1107;
T1107:;
	if(!(equal(CMPcar((V616)),(V576)))){
	goto T1111;}
	V617= STREF(object,(V579),8);
	if(!((V617)==Cnil)){
	goto T1114;}
	{object V618 = Ct;
	VMR62(V618)}
	goto T1114;
T1114:;
	{object V619 = CMPcdr((V616));
	VMR62(V619)}
	goto T1111;
T1111:;
	V615= CMPcdr((V615));
	V616= CMPcar((V615));
	goto T1106;}
	goto T1102;
T1102:;
	{object V620 = (V577);
	VMR62(V620)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAP-CACHE	*/

static object LI66(object V622,object V621,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB63 VMS63 VMV63
	{object V623;
	object V624;
	object V625;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V623= V622;
	V624= V621;
	narg = narg - 2;
	if (narg <= 0) goto T1122;
	else {
	V625= first;}
	--narg; goto T1123;
	goto T1122;
T1122:;
	V625= Cnil;
	goto T1123;
T1123:;
	{register object V626;
	V626= (V624);
	{object V627;
	if((V625)==Cnil){
	V627= Cnil;
	goto T1126;}
	V627= STREF(object,(V626),8);
	goto T1126;
T1126:;
	{long V628;
	register long V629;
	V628= (long)STREF(fixnum,(V626),12);
	V629= 0;
	goto T1131;
T1131:;
	if(!((V629)>=(V628))){
	goto T1132;}
	goto T1127;
	goto T1132;
T1132:;
	{long V630;
	V630= V629;
	V631= (long)STREF(unsigned short,(V626),4);
	if((V631)==(1)){
	goto T1140;}
	goto T1138;
	goto T1140;
T1140:;
	if((V630)==(0)){
	goto T1135;}}
	goto T1138;
T1138:;
	{long V632;
	V632= V629;
	{long V634;
	V634= V632;
	V635= (long)STREF(unsigned short,(V626),4);
	if((V635)==(1)){
	goto T1149;}
	goto T1145;
	goto T1149;
T1149:;
	if(!((V634)==(0))){
	goto T1145;}}
	base[0]= VV[167];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1145;
T1145:;
	{long V636;
	register object V637;
	{long V638;
	V638= V632;
	{long V639;
	V639= V638;
	V640= (long)STREF(unsigned short,(V626),4);
	if((V640)==(1)){
	goto T1159;}
	goto T1155;
	goto T1159;
T1159:;
	if(!((V639)==(0))){
	goto T1155;}}
	base[0]= VV[164];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1155;
T1155:;
	V641= (long)STREF(unsigned short,(V626),4);
	if(!((V641)==(1))){
	goto T1164;}
	V642= (long)STREF(unsigned short,(V626),32);
	V636= (long)(V638)*(V642);
	goto T1153;
	goto T1164;
T1164:;
	V643= (long)STREF(unsigned short,(V626),32);
	V636= (long)((long)(V638)*(V643))+1;}
	goto T1153;
T1153:;
	V637= Cnil;
	{object V644;
	object V645;
	V644= STREF(object,(V626),40);
	V645= (((V637))==Cnil?Ct:Cnil);
	{long V646;
	register long V647;
	V646= (long)STREF(unsigned short,(V626),4);
	V647= 0;
	goto T1174;
T1174:;
	if(!((V647)>=(V646))){
	goto T1175;}
	if(((V645))==Cnil){
	goto T1135;}
	goto T1143;
	goto T1175;
T1175:;
	{register object V648;
	V648= ((V644))->v.v_self[(long)(V636)+(V647)];
	if(((V648))==Cnil){
	goto T1181;}
	if(!((((((V648))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1180;}
	goto T1181;
T1181:;
	goto T1135;
	goto T1180;
T1180:;
	if(((V637))==Cnil){
	goto T1185;}
	if(!(type_of((V637))==t_cons)){
	goto T1191;}
	{object V650;
	V650= CMPcar((V637));
	V637= CMPcdr((V637));
	V649= (V650);
	goto T1189;}
	goto T1191;
T1191:;
	V649= (V637);
	goto T1189;
T1189:;
	if(((V648))==(V649)){
	goto T1178;}
	goto T1185;
T1185:;
	V645= Ct;}
	goto T1178;
T1178:;
	V647= (long)(V647)+1;
	goto T1174;}}}}
	goto T1143;
T1143:;
	{object V651;
	{long V653;
	V653= V629;
	{long V654;
	V654= V653;
	V655= (long)STREF(unsigned short,(V626),4);
	if((V655)==(1)){
	goto T1207;}
	goto T1203;
	goto T1207;
T1207:;
	if(!((V654)==(0))){
	goto T1203;}}
	base[0]= VV[168];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1203;
T1203:;
	{long V656;
	{long V657;
	V657= V653;
	{long V658;
	V658= V657;
	V659= (long)STREF(unsigned short,(V626),4);
	if((V659)==(1)){
	goto T1217;}
	goto T1213;
	goto T1217;
T1217:;
	if(!((V658)==(0))){
	goto T1213;}}
	base[0]= VV[164];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1213;
T1213:;
	V660= (long)STREF(unsigned short,(V626),4);
	if(!((V660)==(1))){
	goto T1222;}
	V661= (long)STREF(unsigned short,(V626),32);
	V656= (long)(V657)*(V661);
	goto T1211;
	goto T1222;
T1222:;
	V662= (long)STREF(unsigned short,(V626),32);
	V656= (long)((long)(V657)*(V662))+1;}
	goto T1211;
T1211:;
	V663= (long)STREF(unsigned short,(V626),4);
	if(!((V663)==(1))){
	goto T1228;}
	V664= STREF(object,(V626),40);
	V652= (V664)->v.v_self[V656];
	goto T1201;
	goto T1228;
T1228:;
	{object V665;
	object V666;
	base[0]= CMPmake_fixnum((long)STREF(unsigned short,(V626),4));
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	V665= vs_base[0];
	V666= STREF(object,(V626),40);
	{long V667;
	register long V668;
	V667= (long)STREF(unsigned short,(V626),4);
	V668= 0;
	goto T1238;
T1238:;
	if(!((V668)>=(V667))){
	goto T1239;}
	V652= (V665);
	goto T1201;
	goto T1239;
T1239:;
	{object V669;
	object V671;
	V669= CMPmake_fixnum(V668);
	V671= ((V666))->v.v_self[(long)(V656)+(V668)];
	(nthcdr(fix((V669)),V665))->c.c_car = (V671);
	(void)(nthcdr(fix((V669)),V665));}
	V668= (long)(V668)+1;
	goto T1238;}}}}
	goto T1201;
T1201:;
	{long V673;
	V673= V629;
	{long V674;
	V674= V673;
	V675= (long)STREF(unsigned short,(V626),4);
	if((V675)==(1)){
	goto T1255;}
	goto T1251;
	goto T1255;
T1255:;
	if(!((V674)==(0))){
	goto T1251;}}
	base[0]= VV[169];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1251;
T1251:;
	{long V676;
	{long V677;
	V677= V673;
	{long V678;
	V678= V677;
	V679= (long)STREF(unsigned short,(V626),4);
	if((V679)==(1)){
	goto T1265;}
	goto T1261;
	goto T1265;
T1265:;
	if(!((V678)==(0))){
	goto T1261;}}
	base[0]= VV[164];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1261;
T1261:;
	V680= (long)STREF(unsigned short,(V626),4);
	if(!((V680)==(1))){
	goto T1270;}
	V681= (long)STREF(unsigned short,(V626),32);
	V676= (long)(V677)*(V681);
	goto T1259;
	goto T1270;
T1270:;
	V682= (long)STREF(unsigned short,(V626),32);
	V676= (long)((long)(V677)*(V682))+1;}
	goto T1259;
T1259:;
	if((STREF(object,(V626),8))!=Cnil){
	goto T1275;}
	V672= Cnil;
	goto T1249;
	goto T1275;
T1275:;
	V683= STREF(object,(V626),40);
	V684= (long)STREF(unsigned short,(V626),4);
	V672= (V683)->v.v_self[(long)(V676)+(V684)];}}
	goto T1249;
T1249:;
	V651= (
	(type_of((V623)) == t_sfun ?(*(((V623))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V623))==t_vfun) ?
	(*(((V623))->sfn.sfn_self)):
	(fcall.fun=((V623)),fcalln))(V652,V672));
	if(((V627))==Cnil){
	goto T1135;}
	V685= STREF(object,(V626),40);
	{long V687;
	V687= V629;
	{long V688;
	V688= V687;
	V689= (long)STREF(unsigned short,(V626),4);
	if((V689)==(1)){
	goto T1288;}
	goto T1284;
	goto T1288;
T1288:;
	if(!((V688)==(0))){
	goto T1284;}}
	base[0]= VV[164];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1284;
T1284:;
	V690= (long)STREF(unsigned short,(V626),4);
	if(!((V690)==(1))){
	goto T1293;}
	V691= (long)STREF(unsigned short,(V626),32);
	V686= CMPmake_fixnum((long)(V687)*(V691));
	goto T1282;
	goto T1293;
T1293:;
	V692= (long)STREF(unsigned short,(V626),32);
	V686= CMPmake_fixnum((long)((long)(V687)*(V692))+1);}
	goto T1282;
T1282:;
	V693= CMPmake_fixnum((long)STREF(unsigned short,(V626),4));
	{long V694= fix(number_plus(V686,V693));
	(void)((V685)->v.v_self[/* INLINE-ARGS */V694]= ((V651)));}}
	goto T1135;
T1135:;
	V629= (long)(V629)+1;
	goto T1131;}
	goto T1127;
T1127:;
	{object V695;
	object V696;
	V695= STREF(object,(V626),44);
	V696= CMPcar((V695));
	goto T1305;
T1305:;
	if(!(((V695))==Cnil)){
	goto T1306;}
	goto T1125;
	goto T1306;
T1306:;
	{object V697;
	V697= (
	(type_of((V623)) == t_sfun ?(*(((V623))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V623))==t_vfun) ?
	(*(((V623))->sfn.sfn_self)):
	(fcall.fun=((V623)),fcalln))(CMPcar((V696)),CMPcdr((V696))));
	if(((V627))==Cnil){
	goto T1310;}
	(V696)->c.c_cdr = V697;}
	goto T1310;
T1310:;
	V695= CMPcdr((V695));
	V696= CMPcar((V695));
	goto T1305;}}}
	goto T1125;
T1125:;
	{object V700 = (V624);
	VMR63(V700)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function CACHE-COUNT	*/

static object LI67(V702)

object V702;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	{register object V703;
	V703= (V702);
	{register long V704;
	V704= 0;
	{long V705;
	register long V706;
	V705= (long)STREF(fixnum,(V703),12);
	V706= 0;
	goto T1324;
T1324:;
	if(!((V706)>=(V705))){
	goto T1325;}
	{long V707 = V704;
	VMR64((object)V707)}
	goto T1325;
T1325:;
	{register long V708;
	V708= V706;
	V709= (long)STREF(unsigned short,(V703),4);
	if((V709)==(1)){
	goto T1332;}
	goto T1330;
	goto T1332;
T1332:;
	if((V708)==(0)){
	goto T1328;}}
	goto T1330;
T1330:;
	{register object V710;
	V710= CMPmake_fixnum(V706);
	{register long V711;
	V711= fix((V710));
	V712= (long)STREF(unsigned short,(V703),4);
	if((V712)==(1)){
	goto T1341;}
	goto T1337;
	goto T1341;
T1341:;
	if(!((V711)==(0))){
	goto T1337;}}
	base[0]= VV[163];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1337;
T1337:;
	V713= STREF(object,(V703),40);
	{register long V715;
	V715= fix((V710));
	{register long V716;
	V716= V715;
	V717= (long)STREF(unsigned short,(V703),4);
	if((V717)==(1)){
	goto T1352;}
	goto T1348;
	goto T1352;
T1352:;
	if(!((V716)==(0))){
	goto T1348;}}
	base[0]= VV[164];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1348;
T1348:;
	V718= (long)STREF(unsigned short,(V703),4);
	if(!((V718)==(1))){
	goto T1357;}
	V719= (long)STREF(unsigned short,(V703),32);
	V714= (long)(V715)*(V719);
	goto T1346;
	goto T1357;
T1357:;
	V720= (long)STREF(unsigned short,(V703),32);
	V714= (long)((long)(V715)*(V720))+1;}
	goto T1346;
T1346:;
	if(!(((((V713)->v.v_self[V714])==Cnil?Ct:Cnil))==Cnil)){
	goto T1328;}}
	V704= (long)(V704)+(1);
	goto T1328;
T1328:;
	V706= (long)(V706)+1;
	goto T1324;}}}
	base[0]=base[0];
}
/*	local entry for function ENTRY-IN-CACHE-P	*/

static object LI68(V724,V725,V726)

object V724;object V725;object V726;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	{register object V727;
	V727= (V724);
	{long V728;
	register long V729;
	V728= (long)STREF(fixnum,(V727),12);
	V729= 0;
	goto T1369;
T1369:;
	if(!((V729)>=(V728))){
	goto T1370;}
	{object V730 = Cnil;
	VMR65(V730)}
	goto T1370;
T1370:;
	{long V731;
	V731= V729;
	V732= (long)STREF(unsigned short,(V727),4);
	if((V732)==(1)){
	goto T1377;}
	goto T1375;
	goto T1377;
T1377:;
	if((V731)==(0)){
	goto T1373;}}
	goto T1375;
T1375:;
	{long V734;
	V734= V729;
	{long V735;
	V735= V734;
	V736= (long)STREF(unsigned short,(V727),4);
	if((V736)==(1)){
	goto T1388;}
	goto T1384;
	goto T1388;
T1388:;
	if(!((V735)==(0))){
	goto T1384;}}
	base[0]= VV[168];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1384;
T1384:;
	{long V737;
	{register long V738;
	V738= V734;
	{long V739;
	V739= V738;
	V740= (long)STREF(unsigned short,(V727),4);
	if((V740)==(1)){
	goto T1398;}
	goto T1394;
	goto T1398;
T1398:;
	if(!((V739)==(0))){
	goto T1394;}}
	base[0]= VV[164];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1394;
T1394:;
	V741= (long)STREF(unsigned short,(V727),4);
	if(!((V741)==(1))){
	goto T1403;}
	V742= (long)STREF(unsigned short,(V727),32);
	V737= (long)(V738)*(V742);
	goto T1392;
	goto T1403;
T1403:;
	V743= (long)STREF(unsigned short,(V727),32);
	V737= (long)((long)(V738)*(V743))+1;}
	goto T1392;
T1392:;
	V744= (long)STREF(unsigned short,(V727),4);
	if(!((V744)==(1))){
	goto T1409;}
	V745= STREF(object,(V727),40);
	V733= (V745)->v.v_self[V737];
	goto T1382;
	goto T1409;
T1409:;
	{register object V746;
	object V747;
	base[0]= CMPmake_fixnum((long)STREF(unsigned short,(V727),4));
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	V746= vs_base[0];
	V747= STREF(object,(V727),40);
	{long V748;
	register long V749;
	V748= (long)STREF(unsigned short,(V727),4);
	V749= 0;
	goto T1419;
T1419:;
	if(!((V749)>=(V748))){
	goto T1420;}
	V733= (V746);
	goto T1382;
	goto T1420;
T1420:;
	{object V750;
	register object V752;
	V750= CMPmake_fixnum(V749);
	V752= ((V747))->v.v_self[(long)(V737)+(V749)];
	(nthcdr(fix((V750)),V746))->c.c_car = (V752);
	(void)(nthcdr(fix((V750)),V746));}
	V749= (long)(V749)+1;
	goto T1419;}}}}
	goto T1382;
T1382:;
	if(!(equal(V733,(V725)))){
	goto T1373;}
	{object V753 = Ct;
	VMR65(V753)}
	goto T1373;
T1373:;
	V729= (long)(V729)+1;
	goto T1369;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FILL-CACHE-P	*/

static object LI69(V758,V759,V760,V761)

object V758;object V759;object V760;object V761;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	{long V763;
	long V764;
	V765= (long)STREF(unsigned char,V759,16);
	V766= (long)STREF(fixnum,V759,24);
	V763= (long)(*(LnkLI220))(V765,V766,(V760));
	{long V767;
	V767= V763;
	V768= (long)STREF(unsigned short,V759,4);
	if(!((V768)==(1))){
	goto T1439;}
	base[0]= CMPmake_fixnum(V767);
	base[1]= CMPmake_fixnum((long)STREF(unsigned short,V759,32));
	vs_top=(vs_base=base+0)+2;
	Lfloor();
	vs_top=sup;
	V764= fix(vs_base[0]);
	goto T1436;
	goto T1439;
T1439:;
	base[0]= CMPmake_fixnum((long)(V767)-1);
	base[1]= CMPmake_fixnum((long)STREF(unsigned short,V759,32));
	vs_top=(vs_base=base+0)+2;
	Lfloor();
	vs_top=sup;
	V764= fix(vs_base[0]);}
	goto T1436;
T1436:;
	{object V769;
	object V770;
	base[0]= CMPmake_fixnum(V764);
	base[1]= (V759);
	base[2]= (V760);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk221)();
	if(vs_base>=vs_top){vs_top=sup;goto T1450;}
	V769= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1451;}
	V770= vs_base[0];
	vs_top=sup;
	goto T1452;
	goto T1450;
T1450:;
	V769= Cnil;
	goto T1451;
T1451:;
	V770= Cnil;
	goto T1452;
T1452:;
	if(((V758))!=Cnil){
	goto T1453;}
	if(((V770))==Cnil){
	goto T1454;}
	goto T1453;
T1453:;
	if(((V770))!=Cnil){
	goto T1458;}
	{object V771;
	object V773;
	{long V775;
	V775= fix((V769));
	{long V776;
	V776= V775;
	V777= (long)STREF(unsigned short,V759,4);
	if((V777)==(1)){
	goto T1468;}
	goto T1464;
	goto T1468;
T1468:;
	if(!((V776)==(0))){
	goto T1464;}}
	base[2]= VV[168];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1464;
T1464:;
	{long V778;
	{long V779;
	V779= V775;
	{long V780;
	V780= V779;
	V781= (long)STREF(unsigned short,V759,4);
	if((V781)==(1)){
	goto T1478;}
	goto T1474;
	goto T1478;
T1478:;
	if(!((V780)==(0))){
	goto T1474;}}
	base[2]= VV[164];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1474;
T1474:;
	V782= (long)STREF(unsigned short,V759,4);
	if(!((V782)==(1))){
	goto T1483;}
	V783= (long)STREF(unsigned short,V759,32);
	V778= (long)(V779)*(V783);
	goto T1472;
	goto T1483;
T1483:;
	V784= (long)STREF(unsigned short,V759,32);
	V778= (long)((long)(V779)*(V784))+1;}
	goto T1472;
T1472:;
	V785= (long)STREF(unsigned short,V759,4);
	if(!((V785)==(1))){
	goto T1489;}
	V786= STREF(object,V759,40);
	V774= (V786)->v.v_self[V778];
	goto T1462;
	goto T1489;
T1489:;
	{register object V787;
	object V788;
	base[2]= CMPmake_fixnum((long)STREF(unsigned short,V759,4));
	vs_top=(vs_base=base+2)+1;
	Lmake_list();
	vs_top=sup;
	V787= vs_base[0];
	V788= STREF(object,V759,40);
	{long V789;
	register long V790;
	V789= (long)STREF(unsigned short,V759,4);
	V790= 0;
	goto T1499;
T1499:;
	if(!((V790)>=(V789))){
	goto T1500;}
	V774= (V787);
	goto T1462;
	goto T1500;
T1500:;
	{object V791;
	register object V793;
	V791= CMPmake_fixnum(V790);
	V793= ((V788))->v.v_self[(long)(V778)+(V790)];
	(nthcdr(fix((V791)),V787))->c.c_car = (V793);
	(void)(nthcdr(fix((V791)),V787));}
	V790= (long)(V790)+1;
	goto T1499;}}}}
	goto T1462;
T1462:;
	{long V795;
	V795= fix((V769));
	{long V796;
	V796= V795;
	V797= (long)STREF(unsigned short,V759,4);
	if((V797)==(1)){
	goto T1516;}
	goto T1512;
	goto T1516;
T1516:;
	if(!((V796)==(0))){
	goto T1512;}}
	base[2]= VV[169];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1512;
T1512:;
	{long V798;
	{long V799;
	V799= V795;
	{long V800;
	V800= V799;
	V801= (long)STREF(unsigned short,V759,4);
	if((V801)==(1)){
	goto T1526;}
	goto T1522;
	goto T1526;
T1526:;
	if(!((V800)==(0))){
	goto T1522;}}
	base[2]= VV[164];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1522;
T1522:;
	V802= (long)STREF(unsigned short,V759,4);
	if(!((V802)==(1))){
	goto T1531;}
	V803= (long)STREF(unsigned short,V759,32);
	V798= (long)(V799)*(V803);
	goto T1520;
	goto T1531;
T1531:;
	V804= (long)STREF(unsigned short,V759,32);
	V798= (long)((long)(V799)*(V804))+1;}
	goto T1520;
T1520:;
	if((STREF(object,V759,8))!=Cnil){
	goto T1536;}
	V794= Cnil;
	goto T1510;
	goto T1536;
T1536:;
	V805= STREF(object,V759,40);
	V806= (long)STREF(unsigned short,V759,4);
	V794= (V805)->v.v_self[(long)(V798)+(V806)];}}
	goto T1510;
T1510:;
	V771= make_cons(V774,V794);
	V773= make_cons((V771),STREF(object,V759,44));
	V807= Ct;
	STSET(object,V759,44, (V773));
	(void)((V773));}
	goto T1458;
T1458:;
	{long V808;
	V808= fix((V769));
	{long V809;
	V809= V808;
	V810= (long)STREF(unsigned short,V759,4);
	if((V810)==(1)){
	goto T1546;}
	goto T1542;
	goto T1546;
T1546:;
	if(!((V809)==(0))){
	goto T1542;}}
	base[0]= VV[170];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1542;
T1542:;
	{long V811;
	object V812;
	{long V813;
	V813= V808;
	{long V814;
	V814= V813;
	V815= (long)STREF(unsigned short,V759,4);
	if((V815)==(1)){
	goto T1556;}
	goto T1552;
	goto T1556;
T1556:;
	if(!((V814)==(0))){
	goto T1552;}}
	base[0]= VV[164];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1552;
T1552:;
	V816= (long)STREF(unsigned short,V759,4);
	if(!((V816)==(1))){
	goto T1561;}
	V817= (long)STREF(unsigned short,V759,32);
	V811= (long)(V813)*(V817);
	goto T1550;
	goto T1561;
T1561:;
	V818= (long)STREF(unsigned short,V759,32);
	V811= (long)((long)(V813)*(V818))+1;}
	goto T1550;
T1550:;
	V812= STREF(object,V759,40);
	V819= (long)STREF(unsigned short,V759,4);
	if(!((V819)==(1))){
	goto T1569;}
	(void)(((V812))->v.v_self[V811]= ((V760)));
	if((STREF(object,V759,8))==Cnil){
	goto T1567;}
	(void)(((V812))->v.v_self[(long)(V811)+1]= ((V761)));
	goto T1567;
	goto T1569;
T1569:;
	{register long V820;
	V820= 0;
	{register object V821;
	register object V822;
	V821= (V760);
	V822= CMPcar((V821));
	goto T1580;
T1580:;
	if(!(((V821))==Cnil)){
	goto T1581;}
	goto T1575;
	goto T1581;
T1581:;
	(void)(((V812))->v.v_self[(long)(V811)+(V820)]= ((V822)));
	V820= (long)(V820)+1;
	V821= CMPcdr((V821));
	V822= CMPcar((V821));
	goto T1580;}}
	goto T1575;
T1575:;
	if((STREF(object,V759,8))==Cnil){
	goto T1567;}
	V823= (long)STREF(unsigned short,V759,4);
	(void)(((V812))->v.v_self[(long)(V811)+(V823)]= ((V761)));
	goto T1567;
T1567:;
	if(((VV[161]->s.s_dbind))==Cnil){
	goto T1596;}
	(void)((*(LnkLI162))((V759)));
	goto T1596;
T1596:;
	{object V824 = (V759);
	VMR66(V824)}}}
	goto T1454;
T1454:;
	{object V825 = Cnil;
	VMR66(V825)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FILL-CACHE-FROM-CACHE-P	*/

static object LI70(V830,V831,V832,V833)

object V830;object V831;object V832;long V833;
{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	{long V835;
	{long V836;
	{long V838;
	V838= V833;
	{long V839;
	V839= V838;
	V840= (long)STREF(unsigned short,V831,4);
	if((V840)==(1)){
	goto T1607;}
	goto T1603;
	goto T1607;
T1607:;
	if(!((V839)==(0))){
	goto T1603;}}
	base[0]= VV[164];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1603;
T1603:;
	V841= (long)STREF(unsigned short,V831,4);
	if(!((V841)==(1))){
	goto T1612;}
	V842= (long)STREF(unsigned short,V831,32);
	V837= CMPmake_fixnum((long)(V838)*(V842));
	goto T1601;
	goto T1612;
T1612:;
	V843= (long)STREF(unsigned short,V831,32);
	V837= CMPmake_fixnum((long)((long)(V838)*(V843))+1);}
	goto T1601;
T1601:;
	V836= fix((VFUN_NARGS=3,(*(LnkLI219))((V831),V837,(V832))));
	V844= (long)STREF(unsigned short,V831,4);
	if(!((V844)==(1))){
	goto T1618;}
	base[0]= CMPmake_fixnum(V836);
	base[1]= CMPmake_fixnum((long)STREF(unsigned short,V831,32));
	vs_top=(vs_base=base+0)+2;
	Lfloor();
	vs_top=sup;
	V835= fix(vs_base[0]);
	goto T1599;
	goto T1618;
T1618:;
	base[0]= CMPmake_fixnum((long)(V836)-1);
	base[1]= CMPmake_fixnum((long)STREF(unsigned short,V831,32));
	vs_top=(vs_base=base+0)+2;
	Lfloor();
	vs_top=sup;
	V835= fix(vs_base[0]);}
	goto T1599;
T1599:;
	{object V845;
	object V846;
	base[0]= CMPmake_fixnum(V835);
	base[1]= (V831);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk221)();
	if(vs_base>=vs_top){vs_top=sup;goto T1628;}
	V845= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1629;}
	V846= vs_base[0];
	vs_top=sup;
	goto T1630;
	goto T1628;
T1628:;
	V845= Cnil;
	goto T1629;
T1629:;
	V846= Cnil;
	goto T1630;
T1630:;
	if(((V830))!=Cnil){
	goto T1631;}
	if(((V846))==Cnil){
	goto T1632;}
	goto T1631;
T1631:;
	if(((V846))!=Cnil){
	goto T1636;}
	{object V847;
	object V849;
	{long V851;
	V851= fix((V845));
	{long V852;
	V852= V851;
	V853= (long)STREF(unsigned short,V831,4);
	if((V853)==(1)){
	goto T1646;}
	goto T1642;
	goto T1646;
T1646:;
	if(!((V852)==(0))){
	goto T1642;}}
	base[2]= VV[168];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1642;
T1642:;
	{long V854;
	{long V855;
	V855= V851;
	{long V856;
	V856= V855;
	V857= (long)STREF(unsigned short,V831,4);
	if((V857)==(1)){
	goto T1656;}
	goto T1652;
	goto T1656;
T1656:;
	if(!((V856)==(0))){
	goto T1652;}}
	base[2]= VV[164];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1652;
T1652:;
	V858= (long)STREF(unsigned short,V831,4);
	if(!((V858)==(1))){
	goto T1661;}
	V859= (long)STREF(unsigned short,V831,32);
	V854= (long)(V855)*(V859);
	goto T1650;
	goto T1661;
T1661:;
	V860= (long)STREF(unsigned short,V831,32);
	V854= (long)((long)(V855)*(V860))+1;}
	goto T1650;
T1650:;
	V861= (long)STREF(unsigned short,V831,4);
	if(!((V861)==(1))){
	goto T1667;}
	V862= STREF(object,V831,40);
	V850= (V862)->v.v_self[V854];
	goto T1640;
	goto T1667;
T1667:;
	{register object V863;
	object V864;
	base[2]= CMPmake_fixnum((long)STREF(unsigned short,V831,4));
	vs_top=(vs_base=base+2)+1;
	Lmake_list();
	vs_top=sup;
	V863= vs_base[0];
	V864= STREF(object,V831,40);
	{long V865;
	register long V866;
	V865= (long)STREF(unsigned short,V831,4);
	V866= 0;
	goto T1677;
T1677:;
	if(!((V866)>=(V865))){
	goto T1678;}
	V850= (V863);
	goto T1640;
	goto T1678;
T1678:;
	{register object V867;
	register object V868;
	register object V869;
	V867= CMPmake_fixnum(V866);
	V868= (V863);
	V869= ((V864))->v.v_self[(long)(V854)+(V866)];
	(nthcdr(fix((V867)),(V868)))->c.c_car = (V869);
	(void)(nthcdr(fix((V867)),(V868)));}
	V866= (long)(V866)+1;
	goto T1677;}}}}
	goto T1640;
T1640:;
	{long V871;
	V871= fix((V845));
	{long V872;
	V872= V871;
	V873= (long)STREF(unsigned short,V831,4);
	if((V873)==(1)){
	goto T1695;}
	goto T1691;
	goto T1695;
T1695:;
	if(!((V872)==(0))){
	goto T1691;}}
	base[2]= VV[169];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1691;
T1691:;
	{long V874;
	{long V875;
	V875= V871;
	{long V876;
	V876= V875;
	V877= (long)STREF(unsigned short,V831,4);
	if((V877)==(1)){
	goto T1705;}
	goto T1701;
	goto T1705;
T1705:;
	if(!((V876)==(0))){
	goto T1701;}}
	base[2]= VV[164];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1701;
T1701:;
	V878= (long)STREF(unsigned short,V831,4);
	if(!((V878)==(1))){
	goto T1710;}
	V879= (long)STREF(unsigned short,V831,32);
	V874= (long)(V875)*(V879);
	goto T1699;
	goto T1710;
T1710:;
	V880= (long)STREF(unsigned short,V831,32);
	V874= (long)((long)(V875)*(V880))+1;}
	goto T1699;
T1699:;
	if((STREF(object,V831,8))!=Cnil){
	goto T1715;}
	V870= Cnil;
	goto T1689;
	goto T1715;
T1715:;
	V881= STREF(object,V831,40);
	V882= (long)STREF(unsigned short,V831,4);
	V870= (V881)->v.v_self[(long)(V874)+(V882)];}}
	goto T1689;
T1689:;
	V847= make_cons(V850,V870);
	V849= make_cons((V847),STREF(object,V831,44));
	V883= Ct;
	STSET(object,V831,44, (V849));
	(void)((V849));}
	goto T1636;
T1636:;
	{object V884;
	object V885;
	long V886;
	V884= STREF(object,(V832),40);
	V885= STREF(object,V831,40);
	V886= fix((V845));
	{long V887;
	V887= V886;
	V888= (long)STREF(unsigned short,V831,4);
	if((V888)==(1)){
	goto T1728;}
	goto T1725;
	goto T1728;
T1728:;
	if(!((V887)==(0))){
	goto T1725;}}
	base[0]= VV[171];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1723;
	goto T1725;
T1725:;
	{long V889;
	long V890;
	{long V891;
	V891= V833;
	{long V892;
	V892= V891;
	V893= (long)STREF(unsigned short,V831,4);
	if((V893)==(1)){
	goto T1738;}
	goto T1734;
	goto T1738;
T1738:;
	if(!((V892)==(0))){
	goto T1734;}}
	base[0]= VV[164];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1734;
T1734:;
	V894= (long)STREF(unsigned short,V831,4);
	if(!((V894)==(1))){
	goto T1743;}
	V895= (long)STREF(unsigned short,V831,32);
	V889= (long)(V891)*(V895);
	goto T1732;
	goto T1743;
T1743:;
	V896= (long)STREF(unsigned short,V831,32);
	V889= (long)((long)(V891)*(V896))+1;}
	goto T1732;
T1732:;
	{long V897;
	V897= V886;
	{long V898;
	V898= V897;
	V899= (long)STREF(unsigned short,V831,4);
	if((V899)==(1)){
	goto T1754;}
	goto T1750;
	goto T1754;
T1754:;
	if(!((V898)==(0))){
	goto T1750;}}
	base[0]= VV[164];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1750;
T1750:;
	V900= (long)STREF(unsigned short,V831,4);
	if(!((V900)==(1))){
	goto T1759;}
	V901= (long)STREF(unsigned short,V831,32);
	V890= (long)(V897)*(V901);
	goto T1748;
	goto T1759;
T1759:;
	V902= (long)STREF(unsigned short,V831,32);
	V890= (long)((long)(V897)*(V902))+1;}
	goto T1748;
T1748:;
	{long V905;
	register long V906;
	V905= (long)STREF(unsigned short,V831,32);
	V906= 0;
	goto T1768;
T1768:;
	if(!((V906)>=(V905))){
	goto T1769;}
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	goto T1764;
	goto T1769;
T1769:;
	(void)(((V885))->v.v_self[(long)(V890)+(V906)]= (((V884))->v.v_self[(long)(V889)+(V906)]));
	V906= (long)(V906)+1;
	goto T1768;}
	goto T1764;
T1764:;
	{object *V904=vs_top;object *V903=vs_base; vs_base=V904;
	{register object *base0=base;
	{register object *base=V904;
	register object *sup=vs_base+VM68;
	base0[0]=base0[0];
	base[0]=base[0];
	vs_check;
	vs_top=sup;
	{long V907;
	V907= fix(((V885))->v.v_self[0]);
	if(!((V907)==(2147483647))){
	goto T1780;}
	V908= small_fixnum(1);
	goto T1778;
	goto T1780;
T1780:;
	V908= CMPmake_fixnum((long)(V907)+1);
	goto T1778;
T1778:;
	(void)(((V885))->v.v_self[0]= (V908));}
	}}
	vs_base=V903;vs_top=V904;}
	vs_top=sup;}
	goto T1723;
T1723:;
	if(((VV[161]->s.s_dbind))==Cnil){
	goto T1782;}
	(void)((*(LnkLI162))((V831)));
	goto T1782;
T1782:;
	{object V909 = (V831);
	VMR67(V909)}}
	goto T1632;
T1632:;
	{object V910 = Cnil;
	VMR67(V910)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADJUST-CACHE	*/

static object LI74(V915,V916,V917,V918)

object V915;object V916;object V917;object V918;
{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	base[0]= (V915);
	{register object V919;
	V919= base[0];
	V920= CMPmake_fixnum((long)STREF(fixnum,(V919),12));
	V921= CMPmake_fixnum((long)STREF(unsigned char,(V919),16));
	base[1]= (VFUN_NARGS=3,(*(LnkLI222))(base[0],V920,V921));
	{object V922;
	V922= CMPmake_fixnum((long)STREF(unsigned char,base[1],16));
	goto T1790;
T1790:;
	if(((V922))!=Cnil){
	goto T1791;}
	(void)((*(LnkLI223))(base[1]));
	{object V923 = Cnil;
	VMR69(V923)}
	goto T1791;
T1791:;
	{long V924;
	V924= fix((V922));
	V925= Ct;
	STSET(unsigned char,base[1],16, V924);
	(void)(V924);
	{long V926;
	register long V927;
	V926= (long)STREF(fixnum,(V919),12);
	V927= 0;
	goto T1806;
T1806:;
	if(!((V927)>=(V926))){
	goto T1807;}
	goto T1802;
	goto T1807;
T1807:;
	{long V928;
	V928= V927;
	V929= (long)STREF(unsigned short,(V919),4);
	if((V929)==(1)){
	goto T1815;}
	goto T1813;
	goto T1815;
T1815:;
	if((V928)==(0)){
	goto T1810;}}
	goto T1813;
T1813:;
	{long V930;
	V930= V927;
	{long V932;
	V932= V930;
	V933= (long)STREF(unsigned short,(V919),4);
	if((V933)==(1)){
	goto T1824;}
	goto T1820;
	goto T1824;
T1824:;
	if(!((V932)==(0))){
	goto T1820;}}
	base[2]= VV[167];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1820;
T1820:;
	{long V934;
	register object V935;
	{long V936;
	V936= V930;
	{long V937;
	V937= V936;
	V938= (long)STREF(unsigned short,(V919),4);
	if((V938)==(1)){
	goto T1834;}
	goto T1830;
	goto T1834;
T1834:;
	if(!((V937)==(0))){
	goto T1830;}}
	base[2]= VV[164];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1830;
T1830:;
	V939= (long)STREF(unsigned short,(V919),4);
	if(!((V939)==(1))){
	goto T1839;}
	V940= (long)STREF(unsigned short,(V919),32);
	V934= (long)(V936)*(V940);
	goto T1828;
	goto T1839;
T1839:;
	V941= (long)STREF(unsigned short,(V919),32);
	V934= (long)((long)(V936)*(V941))+1;}
	goto T1828;
T1828:;
	V935= V916;
	{object V942;
	object V943;
	V942= STREF(object,(V919),40);
	V943= (((V935))==Cnil?Ct:Cnil);
	{long V944;
	register long V945;
	V944= (long)STREF(unsigned short,(V919),4);
	V945= 0;
	goto T1849;
T1849:;
	if(!((V945)>=(V944))){
	goto T1850;}
	if(((V943))==Cnil){
	goto T1810;}
	goto T1818;
	goto T1850;
T1850:;
	{register object V946;
	V946= ((V942))->v.v_self[(long)(V934)+(V945)];
	if(((V946))==Cnil){
	goto T1856;}
	if(!((((((V946))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1855;}
	goto T1856;
T1856:;
	goto T1810;
	goto T1855;
T1855:;
	if(((V935))==Cnil){
	goto T1860;}
	if(!(type_of((V935))==t_cons)){
	goto T1866;}
	{object V948;
	V948= CMPcar((V935));
	V935= CMPcdr((V935));
	V947= (V948);
	goto T1864;}
	goto T1866;
T1866:;
	V947= (V935);
	goto T1864;
T1864:;
	if(((V946))==(V947)){
	goto T1853;}
	goto T1860;
T1860:;
	V943= Ct;}
	goto T1853;
T1853:;
	V945= (long)(V945)+1;
	goto T1849;}}}}
	goto T1818;
T1818:;
	base[2]= CMPmake_fixnum(V927);
	vs_top=(vs_base=base+2)+1;
	L75(base);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1810;}
	goto T1800;
	goto T1810;
T1810:;
	V927= (long)(V927)+1;
	goto T1806;}
	goto T1802;
T1802:;
	{object V949;
	object V950;
	V949= STREF(object,base[0],44);
	V950= CMPcar((V949));
	goto T1886;
T1886:;
	if(!(((V949))==Cnil)){
	goto T1887;}
	goto T1882;
	goto T1887;
T1887:;
	base[4]= CMPcar((V950));
	base[5]= CMPcdr((V950));
	vs_top=(vs_base=base+4)+2;
	L76(base);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1891;}
	goto T1800;
	goto T1891;
T1891:;
	V949= CMPcdr((V949));
	V950= CMPcar((V949));
	goto T1886;}
	goto T1882;
T1882:;
	base[2]= (V916);
	base[3]= (V917);
	vs_top=(vs_base=base+2)+2;
	L76(base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1800;}
	if(((V918))==Cnil){
	goto T1904;}
	(void)((*(LnkLI223))(base[0]));
	goto T1904;
T1904:;
	if(((VV[161]->s.s_dbind))==Cnil){
	goto T1907;}
	(void)((*(LnkLI162))(base[1]));
	goto T1907;
T1907:;
	{object V951 = base[1];
	VMR69(V951)}
	goto T1800;
T1800:;
	(void)((*(LnkLI193))(STREF(object,base[1],40)));}
	V922= (*(LnkLI36))((V922));
	goto T1790;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXPAND-CACHE	*/

static object LI81(V956,V957,V958,V959)

object V956;object V957;object V958;object V959;
{	 VMB70 VMS70 VMV70
	goto TTL;
TTL:;
	base[0]= (V956);
	base[1]= base[0];
	V960= CMPmake_fixnum((long)STREF(fixnum,base[1],12));
	V961= number_times(V960,small_fixnum(2));
	base[2]= (VFUN_NARGS=2,(*(LnkLI222))(base[0],/* INLINE-ARGS */V961));
	{long V962;
	long V963;
	V962= (long)STREF(fixnum,base[1],12);
	V963= 0;
	goto T1919;
T1919:;
	if(!((V963)>=(V962))){
	goto T1920;}
	goto T1915;
	goto T1920;
T1920:;
	{long V964;
	V964= V963;
	V965= (long)STREF(unsigned short,base[1],4);
	if((V965)==(1)){
	goto T1928;}
	goto T1926;
	goto T1928;
T1928:;
	if((V964)==(0)){
	goto T1923;}}
	goto T1926;
T1926:;
	{long V966;
	V966= V963;
	{long V968;
	V968= V966;
	V969= (long)STREF(unsigned short,base[1],4);
	if((V969)==(1)){
	goto T1937;}
	goto T1933;
	goto T1937;
T1937:;
	if(!((V968)==(0))){
	goto T1933;}}
	base[3]= VV[167];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T1933;
T1933:;
	{long V970;
	register object V971;
	{long V972;
	V972= V966;
	{long V973;
	V973= V972;
	V974= (long)STREF(unsigned short,base[1],4);
	if((V974)==(1)){
	goto T1947;}
	goto T1943;
	goto T1947;
T1947:;
	if(!((V973)==(0))){
	goto T1943;}}
	base[3]= VV[164];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T1943;
T1943:;
	V975= (long)STREF(unsigned short,base[1],4);
	if(!((V975)==(1))){
	goto T1952;}
	V976= (long)STREF(unsigned short,base[1],32);
	V970= (long)(V972)*(V976);
	goto T1941;
	goto T1952;
T1952:;
	V977= (long)STREF(unsigned short,base[1],32);
	V970= (long)((long)(V972)*(V977))+1;}
	goto T1941;
T1941:;
	V971= V957;
	{object V978;
	object V979;
	V978= STREF(object,base[1],40);
	V979= (((V971))==Cnil?Ct:Cnil);
	{long V980;
	register long V981;
	V980= (long)STREF(unsigned short,base[1],4);
	V981= 0;
	goto T1962;
T1962:;
	if(!((V981)>=(V980))){
	goto T1963;}
	if(((V979))==Cnil){
	goto T1923;}
	goto T1931;
	goto T1963;
T1963:;
	{register object V982;
	V982= ((V978))->v.v_self[(long)(V970)+(V981)];
	if(((V982))==Cnil){
	goto T1969;}
	if(!((((((V982))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1968;}
	goto T1969;
T1969:;
	goto T1923;
	goto T1968;
T1968:;
	if(((V971))==Cnil){
	goto T1973;}
	if(!(type_of((V971))==t_cons)){
	goto T1979;}
	{object V984;
	V984= CMPcar((V971));
	V971= CMPcdr((V971));
	V983= (V984);
	goto T1977;}
	goto T1979;
T1979:;
	V983= (V971);
	goto T1977;
T1977:;
	if(((V982))==(V983)){
	goto T1966;}
	goto T1973;
T1973:;
	V979= Ct;}
	goto T1966;
T1966:;
	V981= (long)(V981)+1;
	goto T1962;}}}}
	goto T1931;
T1931:;
	base[3]= CMPmake_fixnum(V963);
	vs_top=(vs_base=base+3)+1;
	L82(base);
	vs_top=sup;
	goto T1923;
T1923:;
	V963= (long)(V963)+1;
	goto T1919;}
	goto T1915;
T1915:;
	{object V985;
	object V986;
	V985= STREF(object,base[0],44);
	V986= CMPcar((V985));
	goto T1996;
T1996:;
	if(!(((V985))==Cnil)){
	goto T1997;}
	goto T1992;
	goto T1997;
T1997:;
	base[5]= CMPcar((V986));
	base[6]= CMPcdr((V986));
	vs_top=(vs_base=base+5)+2;
	L84(base);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2001;}
	base[5]= CMPcar((V986));
	base[6]= CMPcdr((V986));
	vs_top=(vs_base=base+5)+2;
	L83(base);
	vs_top=sup;
	goto T2001;
T2001:;
	V985= CMPcdr((V985));
	V986= CMPcar((V985));
	goto T1996;}
	goto T1992;
T1992:;
	base[3]= (V957);
	base[4]= (V958);
	vs_top=(vs_base=base+3)+2;
	L84(base);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2013;}
	base[3]= (V957);
	base[4]= (V958);
	vs_top=(vs_base=base+3)+2;
	L83(base);
	vs_top=sup;
	goto T2013;
T2013:;
	if(((V959))==Cnil){
	goto T2020;}
	(void)((*(LnkLI223))(base[0]));
	goto T2020;
T2020:;
	if(((VV[161]->s.s_dbind))==Cnil){
	goto T2023;}
	(void)((*(LnkLI162))(base[2]));
	goto T2023;
T2023:;
	{object V987 = base[2];
	VMR70(V987)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for FIND-FREE-CACHE-LINE	*/

static void L85()
{register object *base=vs_base;
	register object *sup=base+VM71; VC71
	vs_check;
	{long V988;
	object V989;
	object V990;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V988=fix(base[0]);
	V989=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2026;}
	V990=(base[2]);
	vs_top=sup;
	goto T2027;
	goto T2026;
T2026:;
	V990= Cnil;
	goto T2027;
T2027:;
	{register object V991;
	V991= (V989);
	{long V992;
	V992= V988;
	V993= (long)STREF(unsigned short,(V991),4);
	if((V993)==(1)){
	goto T2033;}
	goto T2029;
	goto T2033;
T2033:;
	if(!((V992)==(0))){
	goto T2029;}}
	{long V994;
	V994= V988;
	V995= (long)STREF(fixnum,(V991),12);
	if(!((V994)==((long)(V995)-1))){
	goto T2039;}
	{long V996;
	V996= 0;
	V997= (long)STREF(unsigned short,(V991),4);
	if((V997)==(1)){
	goto T2046;}
	goto T2043;
	goto T2046;
T2046:;
	if(!((V996)==(0))){
	goto T2043;}}
	V988= 1;
	goto T2036;
	goto T2043;
T2043:;
	V988= 0;
	goto T2036;
	goto T2039;
T2039:;
	V988= (long)(V994)+1;}
	goto T2036;
T2036:;
	goto T2029;
T2029:;
	{long V998;
	object V999;
	register object V1000;
	long V1001;
	long V1002;
	V1003= STREF(object,(V991),20);
	V1004= CMPmake_fixnum((long)STREF(fixnum,(V991),12));
	V998= fix((
	V1005 = V1003,
	(type_of(V1005) == t_sfun ?(*((V1005)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V1005)==t_vfun) ?
	(*((V1005)->sfn.sfn_self)):
	(fcall.fun=(V1005),fcalln))(V1004)));
	V1001= V988;
	V1002= V988;
	V999= Cnil;
	V1000= Cnil;
	goto T2056;
T2056:;
	{register long V1006;
	long V1007;
	V1006= V1002;
	{long V1008;
	long V1009;
	V1008= V1001;
	V1009= V1002;
	{long V1010;
	V1010= (long)(V1009)-(V1008);
	if(!((V1010)<0)){
	goto T2063;}
	V1011= (long)STREF(fixnum,(V991),12);
	V1010= (long)(V1010)+(V1011);
	{long V1012;
	V1012= 0;
	V1013= (long)STREF(unsigned short,(V991),4);
	if((V1013)==(1)){
	goto T2072;}
	goto T2063;
	goto T2072;
T2072:;
	if(!((V1012)==(0))){
	goto T2063;}}
	V1010= (long)(V1010)-1;
	goto T2063;
T2063:;
	V1007= V1010;}}
	goto T2077;
T2077:;
	{long V1014;
	V1014= V1006;
	{long V1016;
	V1016= V1014;
	V1017= (long)STREF(unsigned short,(V991),4);
	if((V1017)==(1)){
	goto T2088;}
	goto T2084;
	goto T2088;
T2088:;
	if(!((V1016)==(0))){
	goto T2084;}}
	base[3]= VV[167];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2084;
T2084:;
	{long V1018;
	register object V1019;
	{long V1020;
	V1020= V1014;
	{long V1021;
	V1021= V1020;
	V1022= (long)STREF(unsigned short,(V991),4);
	if((V1022)==(1)){
	goto T2098;}
	goto T2094;
	goto T2098;
T2098:;
	if(!((V1021)==(0))){
	goto T2094;}}
	base[3]= VV[164];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2094;
T2094:;
	V1023= (long)STREF(unsigned short,(V991),4);
	if(!((V1023)==(1))){
	goto T2103;}
	V1024= (long)STREF(unsigned short,(V991),32);
	V1018= (long)(V1020)*(V1024);
	goto T2092;
	goto T2103;
T2103:;
	V1025= (long)STREF(unsigned short,(V991),32);
	V1018= (long)((long)(V1020)*(V1025))+1;}
	goto T2092;
T2092:;
	V1019= V990;
	{object V1026;
	object V1027;
	V1026= STREF(object,(V991),40);
	V1027= (((V1019))==Cnil?Ct:Cnil);
	{long V1028;
	register long V1029;
	V1028= (long)STREF(unsigned short,(V991),4);
	V1029= 0;
	goto T2113;
T2113:;
	if(!((V1029)>=(V1028))){
	goto T2114;}
	if(((V1027))!=Cnil){
	goto T2080;}
	goto T2082;
	goto T2114;
T2114:;
	{object V1030;
	V1030= ((V1026))->v.v_self[(long)(V1018)+(V1029)];
	if(((V1030))==Cnil){
	goto T2120;}
	if(!((((((V1030))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T2119;}
	goto T2120;
T2120:;
	goto T2082;
	goto T2119;
T2119:;
	if(((V1019))==Cnil){
	goto T2124;}
	if(!(type_of((V1019))==t_cons)){
	goto T2130;}
	{object V1032;
	V1032= CMPcar((V1019));
	V1019= CMPcdr((V1019));
	V1031= (V1032);
	goto T2128;}
	goto T2130;
T2130:;
	V1031= (V1019);
	goto T2128;
T2128:;
	if(((V1030))==(V1031)){
	goto T2117;}
	goto T2124;
T2124:;
	V1027= Ct;}
	goto T2117;
T2117:;
	V1029= (long)(V1029)+1;
	goto T2113;}}}}
	goto T2082;
T2082:;
	{object V1033;
	V1033= CMPmake_fixnum(V1006);
	V1000= make_cons((V1033),(V1000));}
	goto T2054;
	goto T2080;
T2080:;
	if(((V999))==Cnil){
	goto T2142;}
	if(!((V1006)>=(V988))){
	goto T2142;}
	base[3]= CMPmake_fixnum(V988);
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T2142;
T2142:;
	{object V1034;
	{long V1035;
	long V1036;
	{long V1037;
	V1037= V1006;
	{long V1038;
	{long V1039;
	V1039= V1037;
	V1040= (V991);
	{long V1042;
	V1042= V1039;
	{long V1043;
	V1043= V1042;
	V1044= (long)STREF(unsigned short,(V991),4);
	if((V1044)==(1)){
	goto T2162;}
	goto T2158;
	goto T2162;
T2162:;
	if(!((V1043)==(0))){
	goto T2158;}}
	base[3]= VV[164];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2158;
T2158:;
	V1045= (long)STREF(unsigned short,(V991),4);
	if(!((V1045)==(1))){
	goto T2167;}
	V1046= (long)STREF(unsigned short,(V991),32);
	V1041= CMPmake_fixnum((long)(V1042)*(V1046));
	goto T2156;
	goto T2167;
T2167:;
	V1047= (long)STREF(unsigned short,(V991),32);
	V1041= CMPmake_fixnum((long)((long)(V1042)*(V1047))+1);}
	goto T2156;
T2156:;
	V1038= fix((VFUN_NARGS=2,(*(LnkLI219))(V1040,V1041)));}
	V1048= (long)STREF(unsigned short,(V991),4);
	if(!((V1048)==(1))){
	goto T2173;}
	base[3]= CMPmake_fixnum(V1038);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V991),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V1035= fix(vs_base[0]);
	goto T2151;
	goto T2173;
T2173:;
	base[3]= CMPmake_fixnum((long)(V1038)-1);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V991),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V1035= fix(vs_base[0]);}}
	goto T2151;
T2151:;
	V1036= V1006;
	{register long V1049;
	V1049= (long)(V1036)-(V1035);
	if(!((V1049)<0)){
	goto T2182;}
	V1050= (long)STREF(fixnum,(V991),12);
	V1049= (long)(V1049)+(V1050);
	{long V1051;
	V1051= 0;
	V1052= (long)STREF(unsigned short,(V991),4);
	if((V1052)==(1)){
	goto T2191;}
	goto T2182;
	goto T2191;
T2191:;
	if(!((V1051)==(0))){
	goto T2182;}}
	V1049= (long)(V1049)-1;
	goto T2182;
T2182:;
	V1034= CMPmake_fixnum(V1049);}}
	V1053 = CMPmake_fixnum(V998);
	if(!(number_compare((V1034),V1053)>=0)){
	goto T2195;}
	base[3]= CMPmake_fixnum(V988);
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T2195;
T2195:;
	if(!((V1007)==(V998))){
	goto T2203;}
	goto T2201;
	goto T2203;
T2203:;
	V1054 = CMPmake_fixnum(V1007);
	if(!(number_compare(V1054,(V1034))==0)){
	goto T2206;}
	base[3]= small_fixnum(2);
	vs_top=(vs_base=base+3)+1;
	Lrandom();
	vs_top=sup;
	V1055= vs_base[0];
	if(!(number_compare(small_fixnum(0),V1055)==0)){
	goto T2149;}
	goto T2201;
	goto T2206;
T2206:;
	V1056 = CMPmake_fixnum(V1007);
	if(!(number_compare(V1056,(V1034))>0)){
	goto T2211;}
	goto T2201;
	goto T2211;
T2211:;
	goto T2149;
	goto T2201;
T2201:;
	V1057= (long)STREF(fixnum,(V991),12);
	if(!((V1006)==((long)(V1057)-1))){
	goto T2213;}
	V999= Ct;
	goto T2213;
T2213:;
	{long V1058;
	V1058= V1006;
	{long V1059;
	{long V1060;
	V1060= V1058;
	V1061= (V991);
	{long V1063;
	V1063= V1060;
	{long V1064;
	V1064= V1063;
	V1065= (long)STREF(unsigned short,(V991),4);
	if((V1065)==(1)){
	goto T2230;}
	goto T2226;
	goto T2230;
T2230:;
	if(!((V1064)==(0))){
	goto T2226;}}
	base[3]= VV[164];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2226;
T2226:;
	V1066= (long)STREF(unsigned short,(V991),4);
	if(!((V1066)==(1))){
	goto T2235;}
	V1067= (long)STREF(unsigned short,(V991),32);
	V1062= CMPmake_fixnum((long)(V1063)*(V1067));
	goto T2224;
	goto T2235;
T2235:;
	V1068= (long)STREF(unsigned short,(V991),32);
	V1062= CMPmake_fixnum((long)((long)(V1063)*(V1068))+1);}
	goto T2224;
T2224:;
	V1059= fix((VFUN_NARGS=2,(*(LnkLI219))(V1061,V1062)));}
	V1069= (long)STREF(unsigned short,(V991),4);
	if(!((V1069)==(1))){
	goto T2241;}
	base[3]= CMPmake_fixnum(V1059);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V991),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V1001= fix(vs_base[0]);
	goto T2219;
	goto T2241;
T2241:;
	base[3]= CMPmake_fixnum((long)(V1059)-1);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V991),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V1001= fix(vs_base[0]);}}
	goto T2219;
T2219:;
	{long V1070;
	V1070= V1006;
	V1071= (long)STREF(fixnum,(V991),12);
	if(!((V1070)==((long)(V1071)-1))){
	goto T2252;}
	{long V1072;
	V1072= 0;
	V1073= (long)STREF(unsigned short,(V991),4);
	if((V1073)==(1)){
	goto T2259;}
	goto T2256;
	goto T2259;
T2259:;
	if(!((V1072)==(0))){
	goto T2256;}}
	V1002= 1;
	goto T2249;
	goto T2256;
T2256:;
	V1002= 0;
	goto T2249;
	goto T2252;
T2252:;
	V1002= (long)(V1070)+1;}
	goto T2249;
T2249:;
	{object V1074;
	V1074= CMPmake_fixnum(V1006);
	V1000= make_cons((V1074),(V1000));}
	goto T2057;}
	goto T2149;
T2149:;
	V1075= (long)STREF(fixnum,(V991),12);
	if(!((V1006)==((long)(V1075)-1))){
	goto T2265;}
	V999= Ct;
	goto T2265;
T2265:;
	{long V1076;
	V1076= V1006;
	V1077= (long)STREF(fixnum,(V991),12);
	if(!((V1076)==((long)(V1077)-1))){
	goto T2275;}
	{long V1078;
	V1078= 0;
	V1079= (long)STREF(unsigned short,(V991),4);
	if((V1079)==(1)){
	goto T2282;}
	goto T2279;
	goto T2282;
T2282:;
	if(!((V1078)==(0))){
	goto T2279;}}
	V1006= 1;
	goto T2272;
	goto T2279;
T2279:;
	V1006= 0;
	goto T2272;
	goto T2275;
T2275:;
	V1006= (long)(V1076)+1;}
	goto T2272;
T2272:;
	V1007= (long)(V1007)+1;
	goto T2077;}
	goto T2057;
T2057:;
	goto T2056;
	goto T2054;
T2054:;
	goto T2290;
T2290:;
	if((CMPcdr((V1000)))!=Cnil){
	goto T2292;}
	goto T2288;
	goto T2292;
T2292:;
	{long V1080;
	long V1081;
	{object V1082;
	V1082= CMPcar((V1000));
	V1000= CMPcdr((V1000));
	V1080= fix((V1082));}
	V1081= fix(CMPcar((V1000)));
	{long V1083;
	long V1084;
	object V1085;
	{long V1086;
	V1086= V1081;
	{long V1087;
	V1087= V1086;
	V1088= (long)STREF(unsigned short,(V991),4);
	if((V1088)==(1)){
	goto T2306;}
	goto T2302;
	goto T2306;
T2306:;
	if(!((V1087)==(0))){
	goto T2302;}}
	base[3]= VV[164];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2302;
T2302:;
	V1089= (long)STREF(unsigned short,(V991),4);
	if(!((V1089)==(1))){
	goto T2311;}
	V1090= (long)STREF(unsigned short,(V991),32);
	V1083= (long)(V1086)*(V1090);
	goto T2300;
	goto T2311;
T2311:;
	V1091= (long)STREF(unsigned short,(V991),32);
	V1083= (long)((long)(V1086)*(V1091))+1;}
	goto T2300;
T2300:;
	{long V1092;
	V1092= V1080;
	{long V1093;
	V1093= V1092;
	V1094= (long)STREF(unsigned short,(V991),4);
	if((V1094)==(1)){
	goto T2322;}
	goto T2318;
	goto T2322;
T2322:;
	if(!((V1093)==(0))){
	goto T2318;}}
	base[3]= VV[164];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2318;
T2318:;
	V1095= (long)STREF(unsigned short,(V991),4);
	if(!((V1095)==(1))){
	goto T2327;}
	V1096= (long)STREF(unsigned short,(V991),32);
	V1084= (long)(V1092)*(V1096);
	goto T2316;
	goto T2327;
T2327:;
	V1097= (long)STREF(unsigned short,(V991),32);
	V1084= (long)((long)(V1092)*(V1097))+1;}
	goto T2316;
T2316:;
	V1085= STREF(object,(V991),40);
	{long V1100;
	long V1101;
	V1100= (long)STREF(unsigned short,(V991),32);
	V1101= 0;
	goto T2337;
T2337:;
	if(!((V1101)>=(V1100))){
	goto T2338;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	goto T2333;
	goto T2338;
T2338:;
	(void)(((V1085))->v.v_self[(long)(V1084)+(V1101)]= (((V1085))->v.v_self[(long)(V1083)+(V1101)]));
	(void)(((V1085))->v.v_self[(long)(V1083)+(V1101)]= (Cnil));
	V1101= (long)(V1101)+1;
	goto T2337;}
	goto T2333;
T2333:;
	{object *V1099=vs_top;object *V1098=vs_base; vs_base=V1099;
	{register object *base0=base;
	{register object *base=V1099;
	register object *sup=vs_base+VM72;
	base0[0]=base0[0];
	base[0]=base[0];
	vs_check;
	vs_top=sup;
	{long V1102;
	V1102= fix(((V1085))->v.v_self[0]);
	if(!((V1102)==(2147483647))){
	goto T2350;}
	V1103= small_fixnum(1);
	goto T2348;
	goto T2350;
T2350:;
	V1103= CMPmake_fixnum((long)(V1102)+1);
	goto T2348;
T2348:;
	(void)(((V1085))->v.v_self[0]= (V1103));}
	}}
	vs_base=V1098;vs_top=V1099;}
	vs_top=sup;}}
	goto T2290;
	goto T2288;
T2288:;
	base[3]= CMPcar((V1000));
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	local entry for function DEFAULT-LIMIT-FN	*/

static object LI86(V1105)

object V1105;
{	 VMB73 VMS73 VMV73
	goto TTL;
TTL:;
	{object V1106= (V1105);
	if(!eql(V1106,VV[172])
	&& !eql(V1106,VV[173])
	&& !eql(V1106,VV[174]))goto T2355;
	{long V1107 = 1;
	VMR73((object)V1107)}
	goto T2355;
T2355:;
	if(!eql(V1106,VV[175])
	&& !eql(V1106,VV[176]))goto T2356;
	{long V1108 = 4;
	VMR73((object)V1108)}
	goto T2356;
T2356:;
	{long V1109 = 6;
	VMR73((object)V1109)}}
}
/*	local entry for function CACHES-TO-ALLOCATE	*/

static object LI87()

{	 VMB74 VMS74 VMV74
	goto TTL;
TTL:;
	base[1]=MMcons(Cnil,Cnil);
	base[2]= 
	make_cclosure_new(LC89,Cnil,base[1],Cdata);
	base[3]= (VV[84]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lmaphash();
	vs_top=sup;
	base[0]= (base[1]->c.c_car);
	base[1]= (VV[224]->s.s_gfdef);
	base[2]= VV[27];
	base[3]= (VV[225]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk197)();
	vs_top=sup;
	{object V1110 = vs_base[0];
	VMR74(V1110)}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC89(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM75; VC75
	vs_check;
	{object V1111;
	object V1112;
	check_arg(2);
	V1111=(base[0]);
	V1112=(base[1]);
	vs_top=sup;
	{object V1113;
	V1113= list(2,CMPcar((V1112)),(V1111));
	(base0[0]->c.c_car)= make_cons((V1113),(base0[0]->c.c_car));
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function TRY-ONE-FILL	*/

static void L84(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM76; VC76
	vs_check;
	{object V1114;
	object V1115;
	check_arg(2);
	V1114=(base[0]);
	V1115=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI215))(Cnil,base0[2],(V1114),(V1115));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function DO-ONE-FILL	*/

static void L83(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM77; VC77
	vs_check;
	{object V1116;
	object V1117;
	check_arg(2);
	V1116=(base[0]);
	V1117=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;{object V1118;
	V1118= (*(LnkLI217))(base0[2],(V1116),(V1117),Ct);
	if(V1118==Cnil)goto T2367;
	base0[2]= V1118;
	goto T2366;
	goto T2367;
T2367:;}
	base0[2]= (*(LnkLI215))(Ct,base0[2],(V1116),(V1117));
	goto T2366;
T2366:;
	base[2]= base0[2];
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function DO-ONE-FILL-FROM-LINE	*/

static void L82(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM78; VC78
	vs_check;
	{object V1119;
	check_arg(1);
	V1119=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((*(LnkLI226))(Cnil,base0[2],base0[0],fix((V1119))))!=Cnil){
	goto T2370;}
	{long V1120;
	V1120= fix((V1119));
	{long V1121;
	V1121= V1120;
	V1122= (long)STREF(unsigned short,base0[1],4);
	if((V1122)==(1)){
	goto T2378;}
	goto T2374;
	goto T2378;
T2378:;
	if(!((V1121)==(0))){
	goto T2374;}}
	base[2]= VV[168];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T2374;
T2374:;
	{long V1123;
	{long V1124;
	V1124= V1120;
	{long V1125;
	V1125= V1124;
	V1126= (long)STREF(unsigned short,base0[1],4);
	if((V1126)==(1)){
	goto T2388;}
	goto T2384;
	goto T2388;
T2388:;
	if(!((V1125)==(0))){
	goto T2384;}}
	base[2]= VV[164];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T2384;
T2384:;
	V1127= (long)STREF(unsigned short,base0[1],4);
	if(!((V1127)==(1))){
	goto T2393;}
	V1128= (long)STREF(unsigned short,base0[1],32);
	V1123= (long)(V1124)*(V1128);
	goto T2382;
	goto T2393;
T2393:;
	V1129= (long)STREF(unsigned short,base0[1],32);
	V1123= (long)((long)(V1124)*(V1129))+1;}
	goto T2382;
T2382:;
	V1130= (long)STREF(unsigned short,base0[1],4);
	if(!((V1130)==(1))){
	goto T2399;}
	V1131= STREF(object,base0[1],40);
	base[1]= (V1131)->v.v_self[V1123];
	goto T2372;
	goto T2399;
T2399:;
	{object V1132;
	object V1133;
	base[2]= CMPmake_fixnum((long)STREF(unsigned short,base0[1],4));
	vs_top=(vs_base=base+2)+1;
	Lmake_list();
	vs_top=sup;
	V1132= vs_base[0];
	V1133= STREF(object,base0[1],40);
	{long V1134;
	long V1135;
	V1134= (long)STREF(unsigned short,base0[1],4);
	V1135= 0;
	goto T2409;
T2409:;
	if(!((V1135)>=(V1134))){
	goto T2410;}
	base[1]= (V1132);
	goto T2372;
	goto T2410;
T2410:;
	{object V1136;
	object V1138;
	V1136= CMPmake_fixnum(V1135);
	V1138= ((V1133))->v.v_self[(long)(V1123)+(V1135)];
	(nthcdr(fix((V1136)),V1132))->c.c_car = (V1138);
	(void)(nthcdr(fix((V1136)),V1132));}
	V1135= (long)(V1135)+1;
	goto T2409;}}}}
	goto T2372;
T2372:;
	{long V1139;
	V1139= fix((V1119));
	{long V1140;
	V1140= V1139;
	V1141= (long)STREF(unsigned short,base0[1],4);
	if((V1141)==(1)){
	goto T2426;}
	goto T2422;
	goto T2426;
T2426:;
	if(!((V1140)==(0))){
	goto T2422;}}
	base[3]= VV[169];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2422;
T2422:;
	{long V1142;
	{long V1143;
	V1143= V1139;
	{long V1144;
	V1144= V1143;
	V1145= (long)STREF(unsigned short,base0[1],4);
	if((V1145)==(1)){
	goto T2436;}
	goto T2432;
	goto T2436;
T2436:;
	if(!((V1144)==(0))){
	goto T2432;}}
	base[3]= VV[164];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2432;
T2432:;
	V1146= (long)STREF(unsigned short,base0[1],4);
	if(!((V1146)==(1))){
	goto T2441;}
	V1147= (long)STREF(unsigned short,base0[1],32);
	V1142= (long)(V1143)*(V1147);
	goto T2430;
	goto T2441;
T2441:;
	V1148= (long)STREF(unsigned short,base0[1],32);
	V1142= (long)((long)(V1143)*(V1148))+1;}
	goto T2430;
T2430:;
	if((STREF(object,base0[1],8))!=Cnil){
	goto T2446;}
	base[2]= Cnil;
	goto T2420;
	goto T2446;
T2446:;
	V1149= STREF(object,base0[1],40);
	V1150= (long)STREF(unsigned short,base0[1],4);
	base[2]= (V1149)->v.v_self[(long)(V1142)+(V1150)];}}
	goto T2420;
T2420:;
	vs_top=(vs_base=base+1)+2;
	L83(base0);
	return;
	goto T2370;
T2370:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function TRY-ONE-FILL	*/

static void L76(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM79; VC79
	vs_check;
	{object V1151;
	object V1152;
	check_arg(2);
	V1151=(base[0]);
	V1152=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI215))(Cnil,base0[1],(V1151),(V1152));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function TRY-ONE-FILL-FROM-LINE	*/

static void L75(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM80; VC80
	vs_check;
	{object V1153;
	check_arg(1);
	V1153=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (*(LnkLI226))(Cnil,base0[1],base0[0],fix((V1153)));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function SPECIALIZER->METATYPE	*/

static void L49(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM81; VC81
	vs_check;
	{object V1154;
	check_arg(1);
	V1154=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1155;
	if(!(((VV[92]->s.s_dbind))==(VV[93]))){
	goto T2452;}
	base[1]= (V1154);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V1156= vs_base[0];
	V1155= (*(LnkLI227))(V1156);
	goto T2450;
	goto T2452;
T2452:;
	V1155= (*(LnkLI227))((V1154));
	goto T2450;
T2450:;
	if(!(((V1154))==((VV[94]->s.s_dbind)))){
	goto T2457;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2457;
T2457:;
	base[1]= (V1155);
	base[2]= base0[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk229)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2460;}
	base[1]= VV[95];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2460;
T2460:;
	base[1]= (V1155);
	base[2]= base0[3];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk229)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2465;}
	base[1]= VV[95];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2465;
T2465:;
	base[1]= (V1155);
	base[2]= base0[4];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk229)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2470;}
	base[1]= VV[96];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2470;
T2470:;
	base[1]= (V1155);
	base[2]= base0[5];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk229)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2475;}
	base[1]= VV[97];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2475;
T2475:;
	base[1]= (V1155);
	base[2]= base0[1];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk229)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2480;}
	base[1]= VV[91];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2480;
T2480:;
	base[1]= VV[98];
	base[2]= base0[0];
	base[3]= (V1155);
	vs_top=(vs_base=base+1)+3;
	Lerror();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC88(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	{object V1157;
	object V1158;
	check_arg(2);
	V1157=(base[0]);
	V1158=(base[1]);
	vs_top=sup;
	{object V1159;
	V1159= list(2,(V1157),(V1158));
	(base0[0]->c.c_car)= make_cons((V1159),(base0[0]->c.c_car));
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
static void LnkT229(){ call_or_link(VV[229],(void **)(void *)&Lnk229);} /* *SUBTYPEP */
static void LnkT228(ptr) object *ptr;{ call_or_link_closure(VV[228],(void **)(void *)&Lnk228,(void **)(void *)&Lclptr228);} /* SPECIALIZER-CLASS */
static object  LnkTLI227(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[227],(void **)(void *)&LnkLI227,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI226(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[226],(void **)(void *)&LnkLI226,262148,first,ap);va_end(ap);return V1;} /* FILL-CACHE-FROM-CACHE-P */
static object  LnkTLI36(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[36],(void **)(void *)&LnkLI36,1,first,ap);va_end(ap);return V1;} /* NEXT-WRAPPER-FIELD */
static object  LnkTLI223(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[223],(void **)(void *)&LnkLI223,1,first,ap);va_end(ap);return V1;} /* FREE-CACHE */
static object  LnkTLI222(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[222],(void **)(void *)&LnkLI222,first,ap);va_end(ap);return V1;} /* GET-CACHE-FROM-CACHE */
static object  LnkTLI162(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[162],(void **)(void *)&LnkLI162,1,first,ap);va_end(ap);return V1;} /* CHECK-CACHE */
static void LnkT221(){ call_or_link(VV[221],(void **)(void *)&Lnk221);} /* FIND-FREE-CACHE-LINE */
static object  LnkTLI220(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[220],(void **)(void *)&LnkLI220,20739,first,ap);va_end(ap);return V1;} /* COMPUTE-PRIMARY-CACHE-LOCATION */
static object  LnkTLI219(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[219],(void **)(void *)&LnkLI219,first,ap);va_end(ap);return V1;} /* COMPUTE-PRIMARY-CACHE-LOCATION-FROM-LOCATION */
static object  LnkTLI218(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[218],(void **)(void *)&LnkLI218,4,first,ap);va_end(ap);return V1;} /* EXPAND-CACHE */
static object  LnkTLI217(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[217],(void **)(void *)&LnkLI217,4,first,ap);va_end(ap);return V1;} /* ADJUST-CACHE */
static object  LnkTLI216(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[216],(void **)(void *)&LnkLI216,257,first,ap);va_end(ap);return V1;} /* CACHE-COUNT */
static object  LnkTLI215(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[215],(void **)(void *)&LnkLI215,4,first,ap);va_end(ap);return V1;} /* FILL-CACHE-P */
static object  LnkTLI214(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[214],(void **)(void *)&LnkLI214,2,first,ap);va_end(ap);return V1;} /* MAKE-FAST-METHOD-CALL-LAMBDA-LIST */
static object  LnkTLI213(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[213],(void **)(void *)&LnkLI213,2,first,ap);va_end(ap);return V1;} /* MAKE-DFUN-LAMBDA-LIST */
static object  LnkTLI212(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[212],(void **)(void *)&LnkLI212,1,first,ap);va_end(ap);return V1;} /* DFUN-ARG-SYMBOL */
static object  LnkTLI211(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[211],(void **)(void *)&LnkLI211,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static object  LnkTLI210(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[210],(void **)(void *)&LnkLI210,4097,first,ap);va_end(ap);return V1;} /* POWER-OF-TWO-CEILING */
static object  LnkTLI209(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[209],(void **)(void *)&LnkLI209,1,first,ap);va_end(ap);return V1;} /* FREE-CACHE-VECTOR */
static void LnkT208(){ call_or_link(VV[208],(void **)(void *)&Lnk208);} /* COPY-CACHE-INTERNAL */
static object  LnkTLI207(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[207],(void **)(void *)&LnkLI207,1,first,ap);va_end(ap);return V1;} /* GET-CACHE-VECTOR */
static void LnkT206(){ call_or_link(VV[206],(void **)(void *)&Lnk206);} /* COMPUTE-CACHE-PARAMETERS */
static object  LnkTLI205(){return call_proc0(VV[205],(void **)(void *)&LnkLI205);} /* MAKE-CACHE */
static object  LnkTLI204(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[204],(void **)(void *)&LnkLI204,3,first,ap);va_end(ap);return V1;} /* OBSOLETE-INSTANCE-TRAP */
static object  LnkTLI203(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[203],(void **)(void *)&LnkLI203,3,first,ap);va_end(ap);return V1;} /* FLUSH-CACHE-TRAP */
static object  LnkTLI79(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[79],(void **)(void *)&LnkLI79,1,first,ap);va_end(ap);return V1;} /* WRAPPER-OF */
static object  LnkTLI201(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[201],(void **)(void *)&LnkLI201,256,first,ap);va_end(ap);return V1;} /* GET-WRAPPER-CACHE-NUMBER */
static void LnkT200(){ call_or_link(VV[200],(void **)(void *)&Lnk200);} /* ERROR */
static object  LnkTLI199(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[199],(void **)(void *)&LnkLI199,1,first,ap);va_end(ap);return V1;} /* WRAPPER-FIELD */
static void LnkT198(){ call_or_link(VV[198],(void **)(void *)&Lnk198);} /* POSITION */
static void LnkT197(){ call_or_link(VV[197],(void **)(void *)&Lnk197);} /* SORT */
static object  LnkTLI194(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[194],(void **)(void *)&LnkLI194,1,first,ap);va_end(ap);return V1;} /* ALLOCATE-CACHE-VECTOR */
static object  LnkTLI193(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[193],(void **)(void *)&LnkLI193,1,first,ap);va_end(ap);return V1;} /* FLUSH-CACHE-VECTOR-INTERNAL */
static object  LnkTLI192(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[192],(void **)(void *)&LnkLI192,2,first,ap);va_end(ap);return V1;} /* PRINTING-RANDOM-THING-INTERNAL */
static void LnkT177(){ call_or_link(VV[177],(void **)(void *)&Lnk177);} /* FILL */
static void LnkT44(){ call_or_link(VV[44],(void **)(void *)&Lnk44);} /* MAKE-ARRAY */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

