
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
	(void) (*Lnk169)();
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
/*	function definition for G2581	*/

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
	V24= (VV[183]->s.s_gfdef);
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
	V37= (VV[183]->s.s_gfdef);
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
	(void)((*(LnkLI184))((V48),(V49)));
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
	V61= (*(LnkLI186))((V54));
	{object V62 = (*(LnkLI185))(/* INLINE-ARGS */V61);
	VMR13(V62)}
	goto T69;
T69:;
	{object V63;
	V63= CMPcdr((V55));
	{object V65;
	V65= ((V63))->v.v_self[0];
	(V55)->c.c_cdr = (V65);}
	{object V66 = (*(LnkLI185))((V63));
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
	(void)((*(LnkLI185))((V68)));
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
	base[2]= (VV[187]->s.s_gfdef);
	base[3]= VV[27];
	base[4]= (VV[188]->s.s_gfdef);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk189)();
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
	base[3]= (VV[73]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk190)();
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
	(void) (*Lnk190)();
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
	base[3]= list(3,VV[37],base[2],(*(LnkLI191))(VV[38]));
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
	base[3]= list(3,VV[37],base[2],(*(LnkLI191))(VV[39]));
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
	base[3]= list(3,VV[37],base[2],(*(LnkLI191))(VV[40]));
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
	base[3]= list(3,VV[37],base[2],(*(LnkLI191))(VV[41]));
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
	base[3]= list(3,VV[37],base[2],(*(LnkLI191))(VV[42]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for MAKE-WRAPPER-INTERNAL	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	bds_check;
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
	if(!(eql((V115),VV[46]))){
	goto T200;}
	{register object V116;
	V116= list(3,VV[14],list(3,VV[37],VV[43],(V110)),VV[47]);
	if(((V107))!=Cnil){
	goto T204;}
	V108= make_cons((V116),Cnil);
	V107= (V108);
	goto T186;
	goto T204;
T204:;
	V118= make_cons((V116),Cnil);
	((V108))->c.c_cdr = /* INLINE-ARGS */V118;
	V117= (V108);
	V108= CMPcdr(V117);
	goto T186;}
	goto T200;
T200:;
	{register object x= (V115),V119= VV[48];
	while(V119!=Cnil)
	if(eql(x,V119->c.c_car)){
	goto T212;
	}else V119=V119->c.c_cdr;
	goto T211;}
	goto T212;
T212:;
	goto T186;
	goto T211;
T211:;
	bds_bind(VV[49],small_fixnum(4));
	bds_bind(VV[50],small_fixnum(4));
	base[4]= VV[51];
	base[5]= VV[52];
	base[6]= (V115);
	base[7]= VV[46];
	base[8]= VV[38];
	base[9]= VV[39];
	base[10]= VV[40];
	base[11]= VV[41];
	base[12]= VV[42];
	vs_top=(vs_base=base+4)+9;
	Lerror();
	vs_top=sup;
	bds_unwind1;
	bds_unwind1;}
	goto T186;
T186:;
	goto T185;}
	goto T179;
T179:;
	V106= (V107);}
	base[2]= listA(3,VV[10],/* INLINE-ARGS */V105,append(V106,VV[53]));
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function MAKE-WRAPPER	*/

static object LI30(object V120,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB30 VMS30 VMV30
	{object V121;
	object V122;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V121= V120;
	narg = narg - 1;
	if (narg <= 0) goto T223;
	else {
	V122= first;}
	--narg; goto T224;
	goto T223;
T223:;
	V122= Cnil;
	goto T224;
T224:;
	{object V123;
	{register object V124;
	base[0]= small_fixnum(13);
	base[1]= VV[5];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk44)();
	vs_top=sup;
	V124= vs_base[0];
	V125 = CMPmake_fixnum((long)(*(LnkLI192))());
	(void)(((V124))->v.v_self[0]= (V125));
	V126 = CMPmake_fixnum((long)(*(LnkLI192))());
	(void)(((V124))->v.v_self[1]= (V126));
	V127 = CMPmake_fixnum((long)(*(LnkLI192))());
	(void)(((V124))->v.v_self[2]= (V127));
	V128 = CMPmake_fixnum((long)(*(LnkLI192))());
	(void)(((V124))->v.v_self[3]= (V128));
	V129 = CMPmake_fixnum((long)(*(LnkLI192))());
	(void)(((V124))->v.v_self[4]= (V129));
	V130 = CMPmake_fixnum((long)(*(LnkLI192))());
	(void)(((V124))->v.v_self[5]= (V130));
	V131 = CMPmake_fixnum((long)(*(LnkLI192))());
	(void)(((V124))->v.v_self[6]= (V131));
	V132 = CMPmake_fixnum((long)(*(LnkLI192))());
	(void)(((V124))->v.v_self[7]= (V132));
	(void)(((V124))->v.v_self[8]= (Ct));
	V123= (V124);}
	(void)(((V123))->v.v_self[12]= ((V121)));
	(void)(((V123))->v.v_self[11]= ((V122)));
	{object V133 = (V123);
	VMR30(V133)}}
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
	{object V134=base[0]->c.c_cdr;
	if(endp(V134))invalid_macro_call();
	base[2]= (V134->c.c_car);
	V134=V134->c.c_cdr;
	if(endp(V134))invalid_macro_call();
	base[3]= (V134->c.c_car);
	V134=V134->c.c_cdr;
	if(!endp(V134))invalid_macro_call();}
	base[4]= list(3,VV[1],VV[54],list(3,VV[0],list(2,VV[55],base[2]),base[3]));
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
	{object V135=base[0]->c.c_cdr;
	if(endp(V135))invalid_macro_call();
	base[2]= (V135->c.c_car);
	V135=V135->c.c_cdr;
	if(!endp(V135))invalid_macro_call();}
	base[3]= list(2,VV[56],list(2,VV[57],base[2]));
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
	{object V136=base[0]->c.c_cdr;
	if(endp(V136))invalid_macro_call();
	base[2]= (V136->c.c_car);
	V136=V136->c.c_cdr;
	if(!endp(V136))invalid_macro_call();}
	base[3]= list(2,VV[58],base[2]);
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
	{object V137=base[0]->c.c_cdr;
	if(endp(V137))invalid_macro_call();
	base[2]= (V137->c.c_car);
	V137=V137->c.c_cdr;
	if(!endp(V137))invalid_macro_call();}
	base[3]= list(3,VV[59],list(2,VV[60],base[2]),VV[61]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function INVALIDATE-WRAPPER	*/

static object LI35(V141,V142,V143)

object V141;object V142;object V143;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	{object V144= (V142);
	if((V144!= VV[193])
	&& (V144!= VV[63]))goto T242;
	{object V145;
	V145= Cnil;
	{register object V146;
	register object V147;
	base[2]= (V141);
	base[3]= (VV[62]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V146= vs_base[0];
	V147= CMPcar((V146));
	goto T249;
T249:;
	if(!(((V146))==Cnil)){
	goto T250;}
	goto T243;
	goto T250;
T250:;
	if(!(((V142))==(VV[63]))){
	goto T254;}
	{register object V149;
	V149= VV[63];
	(V147)->c.c_car = (V149);}
	goto T254;
T254:;
	{register object V151;
	V151= (V143);
	(CMPcdr(V147))->c.c_car = (V151);
	(void)(CMPcdr(V147));}
	V145= make_cons(V147,(V145));
	V146= CMPcdr((V146));
	V147= CMPcar((V146));
	goto T249;}
	goto T243;
T243:;
	{register object V154;
	object V155;
	register object V156;
	object V157;
	V154= VV[32];
	V155= Cnil;
	V156= small_fixnum(0);
	V157= Cnil;
	goto T275;
T275:;
	{object V158;
	if(!(((V154))==Cnil)){
	goto T281;}
	goto T269;
	goto T281;
T281:;
	V158= CMPcar((V154));
	V154= CMPcdr((V154));
	V155= (V158);}
	{object V159;
	V159= (V156);
	V156= number_plus((V156),small_fixnum(1));
	V157= (V159);}
	if(!(((V155))==(VV[46]))){
	goto T276;}
	(void)(((V141)->v.v_self[fix((V157))]=(small_fixnum(0))));
	goto T276;
T276:;
	goto T275;}
	goto T269;
T269:;
	{object V160;
	V161= list(2,(V142),(V143));
	V160= ((V141))->v.v_self[8]= (/* INLINE-ARGS */V161);
	V145= make_cons((V160),(V145));}
	{object V163;
	V163= (VV[62]->s.s_dbind);
	base[0]= V141;
	base[1]= (V163);
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	siLhash_set();
	vs_top=sup;}
	{object V166;
	V166= (VV[62]->s.s_dbind);
	base[0]= V143;
	base[1]= (V166);
	base[2]= V145;
	vs_top=(vs_base=base+0)+3;
	siLhash_set();
	vs_top=sup;
	{object V168 = vs_base[0];
	VMR35(V168)}}}
	goto T242;
T242:;
	FEerror("The ECASE key value ~s is illegal.",1,V144);
	{object V169 = Cnil;
	VMR35(V169)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CHECK-WRAPPER-VALIDITY	*/

static object LI36(V171)

register object V171;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	{register object V172;
	register object V173;
	V172= (*(LnkLI71))((V171));
	V173= ((V172))->v.v_self[8];
	if(!(((V173))==(Ct))){
	goto T307;}
	{object V174 = (V172);
	VMR36(V174)}
	goto T307;
T307:;
	{object V175;
	{object V176= CMPcar((V173));
	if((V176!= VV[193]))goto T310;
	V175= (*(LnkLI194))((V172),CMPcadr((V173)),(V171));
	goto T309;
	goto T310;
T310:;
	if((V176!= VV[63]))goto T311;
	V175= (*(LnkLI195))((V172),CMPcadr((V173)),(V171));
	goto T309;
	goto T311;
T311:;
	FEerror("The ECASE key value ~s is illegal.",1,V176);
	V175= Cnil;
	goto T309;}
	goto T309;
T309:;
	V177= (*(LnkLI71))((V171));
	if(!(((((V175))==(/* INLINE-ARGS */V177)?Ct:Cnil))==Cnil)){
	goto T314;}
	base[2]= VV[64];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T312;
	goto T314;
T314:;
	if(!((((((V175))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T312;}
	base[2]= VV[65];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T312;
T312:;
	{object V178 = (V175);
	VMR36(V178)}}}
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
	{object V179=base[0]->c.c_cdr;
	if(endp(V179))invalid_macro_call();
	base[2]= (V179->c.c_car);
	V179=V179->c.c_cdr;
	if(!endp(V179))invalid_macro_call();}
	{object V180;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V180= vs_base[0];
	V181= list(2,VV[67],base[2]);
	V182= list(2,/* INLINE-ARGS */V181,list(2,VV[68],base[2]));
	V183= list(2,VV[69],base[2]);
	V184= list(2,/* INLINE-ARGS */V183,list(2,VV[70],base[2]));
	V185= list(2,(V180),list(4,VV[66],/* INLINE-ARGS */V182,/* INLINE-ARGS */V184,list(2,Ct,list(2,VV[71],base[2]))));
	V186= make_cons(/* INLINE-ARGS */V185,Cnil);
	V187= list(3,VV[73],VV[74],list(2,VV[60],(V180)));
	base[3]= list(3,VV[10],/* INLINE-ARGS */V186,list(4,VV[72],/* INLINE-ARGS */V187,(V180),list(2,VV[75],base[2])));
	vs_top=(vs_base=base+3)+1;
	return;}
}
/*	local entry for function GET-CACHE	*/

static object LI38(V192,V193,V194,V195)

object V192;object V193;object V194;long V195;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	{register object V196;{object V197;
	{object V198;
	V198= CMPcar((VV[76]->s.s_dbind));
	(VV[76]->s.s_dbind)= CMPcdr((VV[76]->s.s_dbind));
	V197= (V198);}
	if(V197==Cnil)goto T322;
	V196= V197;
	goto T321;
	goto T322;
T322:;}
	V196= (*(LnkLI196))();
	goto T321;
T321:;
	{long V199;
	long V200;
	long V201;
	long V202;
	base[0]= (V192);
	base[1]= (V193);
	base[2]= CMPmake_fixnum(V195);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk197)();
	if(vs_base>=vs_top){vs_top=sup;goto T331;}
	V199= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T332;}
	V200= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T333;}
	V201= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T334;}
	V202= fix(vs_base[0]);
	vs_top=sup;
	goto T335;
	goto T331;
T331:;
	V199= fix(Cnil);
	goto T332;
T332:;
	V200= fix(Cnil);
	goto T333;
T333:;
	V201= fix(Cnil);
	goto T334;
T334:;
	V202= fix(Cnil);
	goto T335;
T335:;
	V203= Ct;
	STSET(unsigned short,(V196),4, fix((V192)));
	(void)(fix((V192)));
	V204= Ct;
	STSET(object,(V196),8, (V193));
	(void)((V193));
	V205= Ct;
	STSET(fixnum,(V196),12, V202);
	(void)(V202);
	{long V206= fix((*(LnkLI191))(VV[46]));
	V207= Ct;
	STSET(unsigned char,(V196),16, /* INLINE-ARGS */V206);
	(void)(/* INLINE-ARGS */V206);}
	V208= Ct;
	STSET(object,(V196),20, (V194));
	(void)((V194));
	V209= Ct;
	STSET(fixnum,(V196),24, V199);
	(void)(V199);
	V210= Ct;
	STSET(fixnum,(V196),28, V200);
	(void)(V200);
	V211= Ct;
	STSET(unsigned short,(V196),32, V201);
	(void)(V201);
	{long V213;
	V213= (long)(V202)-1;
	if(!(number_compare((V192),small_fixnum(1))==0)){
	goto T349;}
	V212= (long)(V213)*(V201);
	goto T346;
	goto T349;
T349:;
	V212= (long)((long)(V213)*(V201))+1;}
	goto T346;
T346:;
	V214= Ct;
	STSET(fixnum,(V196),36, V212);
	(void)(V212);
	V215 = CMPmake_fixnum(V200);
	V216= (*(LnkLI198))(V215);
	V217= Ct;
	STSET(object,(V196),40, /* INLINE-ARGS */V216);
	(void)(/* INLINE-ARGS */V216);
	V218= Ct;
	STSET(object,(V196),44, Cnil);
	(void)(Cnil);
	{object V219 = (V196);
	VMR38(V219)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-CACHE-FROM-CACHE	*/

static object LI39(object V221,object V220,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB39 VMS39 VMV39
	{register object V222;
	long V223;
	object V224;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V222= V221;
	V223= fix(V220);
	narg = narg - 2;
	if (narg <= 0) goto T352;
	else {
	V224= first;}
	--narg; goto T353;
	goto T352;
T352:;
	V224= (*(LnkLI191))(VV[46]);
	goto T353;
T353:;
	{object V225;
	object V226;
	register object V227;
	V225= CMPmake_fixnum((long)STREF(unsigned short,(V222),4));
	V226= STREF(object,(V222),8);{object V228;
	{object V229;
	V229= CMPcar((VV[76]->s.s_dbind));
	(VV[76]->s.s_dbind)= CMPcdr((VV[76]->s.s_dbind));
	V228= (V229);}
	if(V228==Cnil)goto T358;
	V227= V228;
	goto T357;
	goto T358;
T358:;}
	V227= (*(LnkLI196))();
	goto T357;
T357:;
	{long V230;
	long V231;
	long V232;
	long V233;
	if(!((V223)==((long)STREF(fixnum,(V222),12)))){
	goto T365;}
	base[0]= CMPmake_fixnum((long)STREF(fixnum,(V222),24));
	base[1]= CMPmake_fixnum((long)STREF(fixnum,(V222),28));
	base[2]= CMPmake_fixnum((long)STREF(unsigned short,(V222),32));
	base[3]= CMPmake_fixnum((long)STREF(fixnum,(V222),12));
	vs_top=(vs_base=base+0)+4;
	goto T363;
	goto T365;
T365:;
	base[0]= (V225);
	base[1]= (V226);
	base[2]= CMPmake_fixnum(V223);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk197)();
	goto T363;
T363:;
	if(vs_base>=vs_top){vs_top=sup;goto T374;}
	V230= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T375;}
	V231= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T376;}
	V232= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T377;}
	V233= fix(vs_base[0]);
	vs_top=sup;
	goto T378;
	goto T374;
T374:;
	V230= fix(Cnil);
	goto T375;
T375:;
	V231= fix(Cnil);
	goto T376;
T376:;
	V232= fix(Cnil);
	goto T377;
T377:;
	V233= fix(Cnil);
	goto T378;
T378:;
	V234= Ct;
	STSET(object,(V227),0, STREF(object,(V222),0));
	(void)(STREF(object,(V222),0));
	V235= Ct;
	STSET(unsigned short,(V227),4, fix((V225)));
	(void)(fix((V225)));
	V236= Ct;
	STSET(object,(V227),8, (V226));
	(void)((V226));
	V237= Ct;
	STSET(fixnum,(V227),12, V233);
	(void)(V233);
	V238= Ct;
	STSET(unsigned char,(V227),16, fix((V224)));
	(void)(fix((V224)));
	V239= Ct;
	STSET(object,(V227),20, STREF(object,(V222),20));
	(void)(STREF(object,(V222),20));
	V240= Ct;
	STSET(fixnum,(V227),24, V230);
	(void)(V230);
	V241= Ct;
	STSET(fixnum,(V227),28, V231);
	(void)(V231);
	V242= Ct;
	STSET(unsigned short,(V227),32, V232);
	(void)(V232);
	{long V244;
	V244= (long)(V233)-1;
	if(!(number_compare((V225),small_fixnum(1))==0)){
	goto T393;}
	V243= (long)(V244)*(V232);
	goto T390;
	goto T393;
T393:;
	V243= (long)((long)(V244)*(V232))+1;}
	goto T390;
T390:;
	V245= Ct;
	STSET(fixnum,(V227),36, V243);
	(void)(V243);
	V246 = CMPmake_fixnum(V231);
	V247= (*(LnkLI198))(V246);
	V248= Ct;
	STSET(object,(V227),40, /* INLINE-ARGS */V247);
	(void)(/* INLINE-ARGS */V247);
	V249= Ct;
	STSET(object,(V227),44, Cnil);
	(void)(Cnil);
	{object V250 = (V227);
	VMR39(V250)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function COPY-CACHE	*/

static object LI40(V252)

object V252;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{object V253;
	object V254;
	register object V255;
	register object V256;
	base[4]= (V252);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk199)();
	vs_top=sup;
	V253= vs_base[0];
	V254= CMPmake_fixnum((long)STREF(fixnum,(V252),28));
	V255= STREF(object,(V252),40);
	V256= (*(LnkLI198))((V254));
	{register long V257;
	register long V258;
	V257= fix((V254));
	V258= 0;
	goto T405;
T405:;
	if(!((V258)>=(V257))){
	goto T406;}
	goto T401;
	goto T406;
T406:;
	(void)(((V256))->v.v_self[V258]= (((V255))->v.v_self[V258]));
	V258= (long)(V258)+1;
	goto T405;}
	goto T401;
T401:;
	V259= Ct;
	STSET(object,(V253),40, (V256));
	(void)((V256));
	{object V260 = (V253);
	VMR40(V260)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FREE-CACHE	*/

static object LI41(V262)

register object V262;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	(void)((*(LnkLI200))(STREF(object,(V262),40)));
	V263= Ct;
	STSET(object,(V262),40, VV[77]);
	(void)(VV[77]);
	V264= Ct;
	STSET(object,(V262),0, Cnil);
	(void)(Cnil);
	(VV[76]->s.s_dbind)= make_cons(V262,(VV[76]->s.s_dbind));
	{object V266 = Cnil;
	VMR41(V266)}
	return Cnil;
}
/*	local entry for function COMPUTE-LINE-SIZE	*/

static object LI42(V268)

object V268;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	{object V269 = (*(LnkLI201))(fix((V268)));
	VMR42(V269)}
	return Cnil;
}
/*	function definition for COMPUTE-CACHE-PARAMETERS	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{long V270;
	object V271;
	register object V272;
	check_arg(3);
	V270=fix(base[0]);
	V271=(base[1]);
	V272=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((V270)==(1))){
	goto T420;}
	{register long V273;
	long V274;
	if(((V271))==Cnil){
	goto T424;}
	V273= 2;
	goto T422;
	goto T424;
T424:;
	V273= 1;
	goto T422;
T422:;
	if(!(type_of((V272))==t_fixnum)){
	goto T428;}
	{long V275= fix((*(LnkLI201))(fix((V272))));
	V274= (long)(V273)*(/* INLINE-ARGS */V275);
	goto T426;}
	goto T428;
T428:;
	base[3]= (V272);
	base[4]= small_fixnum(0);
	vs_top=(vs_base=base+3)+2;
	Larray_dimension();
	vs_top=sup;
	V274= fix(vs_base[0]);
	goto T426;
T426:;
	base[3]= CMPmake_fixnum((long)(((long)(V274)-1) ^ ((long)(V273)-1)));
	base[4]= CMPmake_fixnum(V274);
	base[5]= CMPmake_fixnum(V273);
	base[6]= CMPmake_fixnum((long)(V274>=0&&(V273)>0?(V274)/(V273):ifloor(V274,V273)));
	vs_top=(vs_base=base+3)+4;
	return;}
	goto T420;
T420:;
	{register long V276;
	long V277;
	if(((V271))==Cnil){
	goto T439;}
	V279 = CMPmake_fixnum(V270);
	V278= fix(one_plus(V279));
	goto T437;
	goto T439;
T439:;
	V278= V270;
	goto T437;
T437:;
	V276= fix((*(LnkLI201))(V278));
	if(!(type_of((V272))==t_fixnum)){
	goto T443;}
	{long V280= fix((*(LnkLI201))(fix((V272))));
	V277= (long)(V276)*(/* INLINE-ARGS */V280);
	goto T441;}
	goto T443;
T443:;
	base[3]= (V272);
	base[4]= small_fixnum(0);
	vs_top=(vs_base=base+3)+2;
	Larray_dimension();
	vs_top=sup;
	V281= vs_base[0];
	V277= fix(one_minus(V281));
	goto T441;
T441:;
	base[3]= CMPmake_fixnum((long)(((long)(V277)-1) ^ ((long)(V276)-1)));
	base[4]= CMPmake_fixnum((long)(V277)+1);
	base[5]= CMPmake_fixnum(V276);
	base[6]= CMPmake_fixnum((long)(V277>=0&&(V276)>0?(V277)/(V276):ifloor(V277,V276)));
	vs_top=(vs_base=base+3)+4;
	return;}
	}
}
/*	local entry for function COMPUTE-PRIMARY-CACHE-LOCATION	*/

static object LI44(V285,V286,V287)

register long V285;long V286;object V287;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	if(type_of((V287))==t_cons||((V287))==Cnil){
	goto T453;}
	{long V288 = (long)((V286) & (fix(((V287))->v.v_self[V285])));
	VMR44((object)V288)}
	goto T453;
T453:;
	{register long V289;
	register long V290;
	V289= 0;
	V290= 0;
	{register object V291;
	register object V292;
	V291= (V287);
	V292= CMPcar((V291));
	goto T461;
T461:;
	if(!(((V291))==Cnil)){
	goto T462;}
	goto T457;
	goto T462;
T462:;
	{register long V293;
	V293= fix(((V292))->v.v_self[V285]);
	if(!((V293)==0)){
	goto T469;}
	{long V294 = 0;
	VMR44((object)V294)}
	goto T469;
T469:;
	V289= (long)(V289)+(V293);}
	if((V290)==0){
	goto T472;}
	if(!(((long)(V290>=0&&(4)>0?(V290)%(4):imod(V290,4)))==0)){
	goto T472;}
	V289= (long)((V289) & (134217727));
	goto T472;
T472:;
	V290= (long)(V290)+(1);
	V291= CMPcdr((V291));
	V292= CMPcar((V291));
	goto T461;}
	goto T457;
T457:;
	{long V295 = (long)((long)((V286) & (V289)))+1;
	VMR44((object)V295)}}
	base[0]=base[0];
}
/*	local entry for function COMPUTE-PRIMARY-CACHE-LOCATION-FROM-LOCATION	*/

static object LI45(object V297,object V296,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB45 VMS45 VMV45
	{object V298;
	register long V299;
	object V300;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V298= V297;
	V299= fix(V296);
	narg = narg - 2;
	if (narg <= 0) goto T485;
	else {
	V300= first;}
	--narg; goto T486;
	goto T485;
T485:;
	V300= (V298);
	goto T486;
T486:;
	{register long V301;
	register object V302;
	register long V303;
	long V304;
	long V305;
	V301= 0;
	V302= STREF(object,(V300),40);
	V303= (long)STREF(unsigned char,(V298),16);
	V304= (long)STREF(fixnum,(V298),24);
	V305= (long)STREF(unsigned short,(V298),4);
	{register long V306;
	register long V307;
	V306= V305;
	V307= 0;
	goto T497;
T497:;
	if(!((V307)>=(V306))){
	goto T498;}
	goto T493;
	goto T498;
T498:;
	{register object V308;
	register long V309;
	V308= ((V302))->v.v_self[(long)(V307)+(V299)];
	V309= fix(((V308))->v.v_self[V303]);
	V301= (long)(V301)+(V309);}
	if((V307)==0){
	goto T505;}
	if(!(((long)(V307>=0&&(4)>0?(V307)%(4):imod(V307,4)))==0)){
	goto T505;}
	V301= (long)((V301) & (134217727));
	goto T505;
T505:;
	V307= (long)(V307)+1;
	goto T497;}
	goto T493;
T493:;
	if(!((V305)==(1))){
	goto T515;}
	{object V310 = CMPmake_fixnum((long)((V304) & (V301)));
	VMR45(V310)}
	goto T515;
T515:;
	{object V311 = CMPmake_fixnum((long)((long)((V304) & (V301)))+1);
	VMR45(V311)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function RAISE-METATYPE	*/

static object LI48(V314,V315)

object V314;object V315;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	base[0]= (V315);
	base[1]= (VFUN_NARGS=1,(*(LnkLI202))(VV[78]));
	base[2]= (VFUN_NARGS=1,(*(LnkLI202))(VV[79]));
	base[3]= (VFUN_NARGS=1,(*(LnkLI202))(VV[80]));
	base[4]= (VFUN_NARGS=1,(*(LnkLI202))(VV[81]));
	base[5]= (VFUN_NARGS=1,(*(LnkLI202))(VV[82]));
	{register object V316;
	base[6]= base[0];
	vs_top=(vs_base=base+6)+1;
	L49(base);
	vs_top=sup;
	V316= vs_base[0];
	if(!(((V316))==(VV[83]))){
	goto T525;}
	{object V317 = VV[41];
	VMR46(V317)}
	goto T525;
T525:;
	if(((V314))!=Cnil){
	goto T528;}
	{object V318 = (V316);
	VMR46(V318)}
	goto T528;
T528:;
	if(!(((V314))==((V316)))){
	goto T531;}
	{object V319 = (V316);
	VMR46(V319)}
	goto T531;
T531:;
	{object V320 = VV[41];
	VMR46(V320)}}
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
	{object V321=base[0]->c.c_cdr;
	if(endp(V321))invalid_macro_call();
	{object V322= (V321->c.c_car);
	if(endp(V322))invalid_macro_call();
	base[2]= (V322->c.c_car);
	V322=V322->c.c_cdr;
	if(endp(V322))invalid_macro_call();
	base[3]= (V322->c.c_car);
	V322=V322->c.c_cdr;
	if(!endp(V322))invalid_macro_call();}
	V321=V321->c.c_cdr;
	if(endp(V321))invalid_macro_call();
	{object V323= (V321->c.c_car);
	if(endp(V323))invalid_macro_call();
	base[4]= (V323->c.c_car);
	V323=V323->c.c_cdr;
	if(endp(V323))invalid_macro_call();
	base[5]= (V323->c.c_car);
	V323=V323->c.c_cdr;
	if(endp(V323)){
	base[6]= Cnil;
	} else {
	base[6]= (V323->c.c_car);
	V323=V323->c.c_cdr;}
	if(endp(V323)){
	base[7]= Cnil;
	} else {
	base[7]= (V323->c.c_car);
	V323=V323->c.c_cdr;}
	if(endp(V323)){
	base[8]= Cnil;
	} else {
	base[8]= (V323->c.c_car);
	V323=V323->c.c_cdr;}
	if(!endp(V323))invalid_macro_call();}
	V321=V321->c.c_cdr;
	if(endp(V321))invalid_macro_call();
	base[9]= (V321->c.c_car);
	V321=V321->c.c_cdr;
	base[10]= V321;}
	V324= list(2,VV[92],base[2]);
	V325= list(2,base[5],Cnil);
	V326= list(2,base[4],Cnil);
	if((base[6])==Cnil){
	goto T538;}
	V327= VV[95];
	goto T536;
	goto T538;
T538:;
	V327= Cnil;
	goto T536;
T536:;
	V328= listA(6,/* INLINE-ARGS */V324,/* INLINE-ARGS */V325,VV[93],/* INLINE-ARGS */V326,VV[94],V327);
	V329= list(2,VV[97],base[3]);
	if((base[6])==Cnil){
	goto T542;}
	V330= VV[101];
	goto T540;
	goto T542;
T542:;
	V330= Cnil;
	goto T540;
T540:;
	V331= listA(3,VV[99],VV[100],V330);
	V332= list(4,VV[105],VV[106],list(3,VV[107],base[5],Ct),VV[108]);
	V333= list(2,VV[109],base[4]);
	V334= list(2,/* INLINE-ARGS */V333,list(3,VV[107],base[4],VV[43]));
	V335= list(2,VV[110],list(2,VV[111],base[4]));
	V336= list(4,VV[66],/* INLINE-ARGS */V334,list(3,/* INLINE-ARGS */V335,VV[112],list(3,VV[107],base[4],list(3,VV[113],base[4],VV[114]))),VV[115]);
	if((base[6])==Cnil){
	goto T546;}
	V337= VV[116];
	goto T544;
	goto T546;
T546:;
	V337= Cnil;
	goto T544;
T544:;
	V338= listA(6,VV[102],VV[103],VV[104],/* INLINE-ARGS */V332,/* INLINE-ARGS */V336,V337);
	if((base[6])==Cnil){
	goto T550;}
	V339= VV[117];
	goto T548;
	goto T550;
T550:;
	V339= Cnil;
	goto T548;
T548:;
	V340= list(4,VV[96],/* INLINE-ARGS */V329,VV[98],listA(4,VV[91],/* INLINE-ARGS */V331,/* INLINE-ARGS */V338,V339));
	if((base[6])==Cnil){
	goto T554;}
	V342= list(2,base[6],VV[119]);
	V343= list(2,base[7],VV[120]);
	V341= list(3,/* INLINE-ARGS */V342,/* INLINE-ARGS */V343,list(2,base[8],list(3,VV[121],VV[122],base[7])));
	goto T552;
	goto T554;
T554:;
	V341= Cnil;
	goto T552;
T552:;
	base[11]= list(4,VV[91],/* INLINE-ARGS */V328,/* INLINE-ARGS */V340,list(4,VV[72],VV[118],base[9],listA(3,VV[91],V341,base[10])));
	vs_top=(vs_base=base+11)+1;
	return;
}
/*	local entry for function DFUN-ARG-SYMBOL	*/

static object LI51(V345)

object V345;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;{object V346;
	V346= nth(fix((V345)),(VV[123]->s.s_dbind));
	if(V346==Cnil)goto T556;
	{object V347 = V346;
	VMR48(V347)}
	goto T556;
T556:;}
	base[1]= Cnil;
	base[2]= VV[124];
	base[3]= (V345);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[125]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V348 = vs_base[0];
	VMR48(V348)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SLOT-VECTOR-SYMBOL	*/

static object LI52(V350)

object V350;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;{object V351;
	V351= nth(fix((V350)),(VV[126]->s.s_dbind));
	if(V351==Cnil)goto T563;
	{object V352 = V351;
	VMR49(V352)}
	goto T563;
T563:;}
	base[1]= Cnil;
	base[2]= VV[127];
	base[3]= (V350);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[125]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V353 = vs_base[0];
	VMR49(V353)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-DFUN-LAMBDA-LIST	*/

static object LI53(V356,V357)

object V356;object V357;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{register object V358;
	register object V359;
	V358= Cnil;
	V359= Cnil;
	{register object V360;
	register object V361;
	register object V362;
	register object V363;
	V360= small_fixnum(0);
	V361= Cnil;
	V362= (V356);
	V363= Cnil;
	goto T579;
T579:;
	{object V364;
	V364= (V360);
	V360= number_plus((V360),small_fixnum(1));
	V361= (V364);}
	{object V365;
	if(!(((V362))==Cnil)){
	goto T589;}
	goto T573;
	goto T589;
T589:;
	V365= CMPcar((V362));
	V362= CMPcdr((V362));
	V363= (V365);}
	{register object V366;
	V366= (*(LnkLI203))((V361));
	if(((V358))!=Cnil){
	goto T596;}
	V359= make_cons((V366),Cnil);
	V358= (V359);
	goto T580;
	goto T596;
T596:;
	V368= make_cons((V366),Cnil);
	((V359))->c.c_cdr = /* INLINE-ARGS */V368;
	V367= (V359);
	V359= CMPcdr(V367);}
	goto T580;
T580:;
	goto T579;}
	goto T573;
T573:;
	if(((V357))==Cnil){
	goto T572;}
	if(((V358))!=Cnil){
	goto T607;}
	V359= make_cons(VV[128],Cnil);
	V358= (V359);
	goto T605;
	goto T607;
T607:;
	V371= make_cons(VV[128],Cnil);
	((V359))->c.c_cdr = /* INLINE-ARGS */V371;
	V370= (V359);
	V359= CMPcdr(V370);
	goto T605;
T605:;
	if(((V358))!=Cnil){
	goto T614;}
	V359= make_cons(VV[129],Cnil);
	V358= (V359);
	goto T572;
	goto T614;
T614:;
	V374= make_cons(VV[129],Cnil);
	((V359))->c.c_cdr = /* INLINE-ARGS */V374;
	V373= (V359);
	V359= CMPcdr(V373);
	goto T572;
T572:;
	{object V375 = (V358);
	VMR50(V375)}}
	return Cnil;
}
/*	local entry for function MAKE-DLAP-LAMBDA-LIST	*/

static object LI54(V378,V379)

object V378;object V379;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{register object V380;
	register object V381;
	V380= Cnil;
	V381= Cnil;
	{register object V382;
	register object V383;
	register object V384;
	register object V385;
	V382= small_fixnum(0);
	V383= Cnil;
	V384= (V378);
	V385= Cnil;
	goto T629;
T629:;
	{object V386;
	V386= (V382);
	V382= number_plus((V382),small_fixnum(1));
	V383= (V386);}
	{object V387;
	if(!(((V384))==Cnil)){
	goto T639;}
	goto T623;
	goto T639;
T639:;
	V387= CMPcar((V384));
	V384= CMPcdr((V384));
	V385= (V387);}
	{register object V388;
	V388= (*(LnkLI203))((V383));
	if(((V380))!=Cnil){
	goto T646;}
	V381= make_cons((V388),Cnil);
	V380= (V381);
	goto T630;
	goto T646;
T646:;
	V390= make_cons((V388),Cnil);
	((V381))->c.c_cdr = /* INLINE-ARGS */V390;
	V389= (V381);
	V381= CMPcdr(V389);}
	goto T630;
T630:;
	goto T629;}
	goto T623;
T623:;
	if(((V379))==Cnil){
	goto T622;}
	if(((V380))!=Cnil){
	goto T656;}
	V381= make_cons(VV[128],Cnil);
	V380= (V381);
	goto T622;
	goto T656;
T656:;
	V393= make_cons(VV[128],Cnil);
	((V381))->c.c_cdr = /* INLINE-ARGS */V393;
	V392= (V381);
	V381= CMPcdr(V392);
	goto T622;
T622:;
	{object V394 = (V380);
	VMR51(V394)}}
	return Cnil;
}
/*	local entry for function MAKE-EMF-CALL	*/

static object LI55(object V397,object V396,object V395,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB52 VMS52 VMV52
	{object V398;
	object V399;
	object V400;
	object V401;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V398= V397;
	V399= V396;
	V400= V395;
	narg = narg - 3;
	if (narg <= 0) goto T662;
	else {
	V401= first;}
	--narg; goto T663;
	goto T662;
T662:;
	V401= Cnil;
	goto T663;
T663:;
	{object V402;
	{register object V403;
	register object V404;
	V403= Cnil;
	V404= Cnil;
	{register object V405;
	register object V406;
	register object V407;
	register object V408;
	V405= small_fixnum(0);
	V406= Cnil;
	V407= (V398);
	V408= Cnil;
	goto T674;
T674:;
	{object V409;
	V409= (V405);
	V405= number_plus((V405),small_fixnum(1));
	V406= (V409);}
	{object V410;
	if(!(((V407))==Cnil)){
	goto T684;}
	goto T668;
	goto T684;
T684:;
	V410= CMPcar((V407));
	V407= CMPcdr((V407));
	V408= (V410);}
	{register object V411;
	V411= (*(LnkLI203))((V406));
	if(((V403))!=Cnil){
	goto T691;}
	V404= make_cons((V411),Cnil);
	V403= (V404);
	goto T675;
	goto T691;
T691:;
	V413= make_cons((V411),Cnil);
	((V404))->c.c_cdr = /* INLINE-ARGS */V413;
	V412= (V404);
	V404= CMPcdr(V412);}
	goto T675;
T675:;
	goto T674;}
	goto T668;
T668:;
	V402= (V403);}
	if(!(((V401))==(VV[130]))){
	goto T700;}
	V414= VV[131];
	goto T698;
	goto T700;
T700:;
	V414= VV[132];
	goto T698;
T698:;
	if(((V399))==Cnil){
	goto T704;}
	V415= VV[133];
	goto T702;
	goto T704;
T704:;
	V415= Cnil;
	goto T702;
T702:;
	{object V416 = listA(4,V414,(V400),(V399),append((V402),V415));
	VMR52(V416)}}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function MAKE-DFUN-CALL	*/

static object LI56(V420,V421,V422)

object V420;object V421;object V422;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	{object V423;
	{register object V424;
	register object V425;
	V424= Cnil;
	V425= Cnil;
	{register object V426;
	register object V427;
	register object V428;
	register object V429;
	V426= small_fixnum(0);
	V427= Cnil;
	V428= (V420);
	V429= Cnil;
	goto T715;
T715:;
	{object V430;
	V430= (V426);
	V426= number_plus((V426),small_fixnum(1));
	V427= (V430);}
	{object V431;
	if(!(((V428))==Cnil)){
	goto T725;}
	goto T709;
	goto T725;
T725:;
	V431= CMPcar((V428));
	V428= CMPcdr((V428));
	V429= (V431);}
	{register object V432;
	V432= (*(LnkLI203))((V427));
	if(((V424))!=Cnil){
	goto T732;}
	V425= make_cons((V432),Cnil);
	V424= (V425);
	goto T716;
	goto T732;
T732:;
	V434= make_cons((V432),Cnil);
	((V425))->c.c_cdr = /* INLINE-ARGS */V434;
	V433= (V425);
	V425= CMPcdr(V433);}
	goto T716;
T716:;
	goto T715;}
	goto T709;
T709:;
	V423= (V424);}
	if(((V421))==Cnil){
	goto T740;}
	{object V435 = listA(3,VV[134],(V422),append((V423),VV[135]));
	VMR53(V435)}
	goto T740;
T740:;
	{object V436 = listA(3,VV[136],(V422),(V423));
	VMR53(V436)}}
	return Cnil;
}
/*	local entry for function MAKE-DFUN-ARG-LIST	*/

static object LI57(V439,V440)

object V439;object V440;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	{object V441;
	{register object V442;
	register object V443;
	V442= Cnil;
	V443= Cnil;
	{register object V444;
	register object V445;
	register object V446;
	register object V447;
	V444= small_fixnum(0);
	V445= Cnil;
	V446= (V439);
	V447= Cnil;
	goto T751;
T751:;
	{object V448;
	V448= (V444);
	V444= number_plus((V444),small_fixnum(1));
	V445= (V448);}
	{object V449;
	if(!(((V446))==Cnil)){
	goto T761;}
	goto T745;
	goto T761;
T761:;
	V449= CMPcar((V446));
	V446= CMPcdr((V446));
	V447= (V449);}
	{register object V450;
	V450= (*(LnkLI203))((V445));
	if(((V442))!=Cnil){
	goto T768;}
	V443= make_cons((V450),Cnil);
	V442= (V443);
	goto T752;
	goto T768;
T768:;
	V452= make_cons((V450),Cnil);
	((V443))->c.c_cdr = /* INLINE-ARGS */V452;
	V451= (V443);
	V443= CMPcdr(V451);}
	goto T752;
T752:;
	goto T751;}
	goto T745;
T745:;
	V441= (V442);}
	if(((V440))==Cnil){
	goto T776;}
	V453= append((V441),VV[138]);
	{object V454 = make_cons(VV[137],/* INLINE-ARGS */V453);
	VMR54(V454)}
	goto T776;
T776:;
	{object V455 = make_cons(VV[139],(V441));
	VMR54(V455)}}
	return Cnil;
}
/*	local entry for function MAKE-FAST-METHOD-CALL-LAMBDA-LIST	*/

static object LI58(V458,V459)

object V458;object V459;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{register object V460;
	register object V461;
	V460= Cnil;
	V461= Cnil;
	if(((V460))!=Cnil){
	goto T783;}
	V461= make_cons(VV[140],Cnil);
	V460= (V461);
	goto T781;
	goto T783;
T783:;
	V464= make_cons(VV[140],Cnil);
	((V461))->c.c_cdr = /* INLINE-ARGS */V464;
	V463= (V461);
	V461= CMPcdr(V463);
	goto T781;
T781:;
	if(((V460))!=Cnil){
	goto T791;}
	V461= make_cons(VV[141],Cnil);
	V460= (V461);
	goto T789;
	goto T791;
T791:;
	V467= make_cons(VV[141],Cnil);
	((V461))->c.c_cdr = /* INLINE-ARGS */V467;
	V466= (V461);
	V461= CMPcdr(V466);
	goto T789;
T789:;
	{register object V468;
	register object V469;
	register object V470;
	register object V471;
	V468= small_fixnum(0);
	V469= Cnil;
	V470= (V458);
	V471= Cnil;
	goto T803;
T803:;
	{object V472;
	V472= (V468);
	V468= number_plus((V468),small_fixnum(1));
	V469= (V472);}
	{object V473;
	if(!(((V470))==Cnil)){
	goto T813;}
	goto T797;
	goto T813;
T813:;
	V473= CMPcar((V470));
	V470= CMPcdr((V470));
	V471= (V473);}
	{register object V474;
	V474= (*(LnkLI203))((V469));
	if(((V460))!=Cnil){
	goto T820;}
	V461= make_cons((V474),Cnil);
	V460= (V461);
	goto T804;
	goto T820;
T820:;
	V476= make_cons((V474),Cnil);
	((V461))->c.c_cdr = /* INLINE-ARGS */V476;
	V475= (V461);
	V461= CMPcdr(V475);}
	goto T804;
T804:;
	goto T803;}
	goto T797;
T797:;
	if(((V459))==Cnil){
	goto T780;}
	if(((V460))!=Cnil){
	goto T830;}
	V461= make_cons(VV[129],Cnil);
	V460= (V461);
	goto T780;
	goto T830;
T830:;
	V479= make_cons(VV[129],Cnil);
	((V461))->c.c_cdr = /* INLINE-ARGS */V479;
	V478= (V461);
	V461= CMPcdr(V478);
	goto T780;
T780:;
	{object V480 = (V460);
	VMR55(V480)}}
	return Cnil;
}
/*	macro definition for FIN-LAMBDA-FN	*/

static void L59()
{register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V481=base[0]->c.c_cdr;
	if(endp(V481))invalid_macro_call();
	base[2]= (V481->c.c_car);
	V481=V481->c.c_cdr;
	base[3]= V481;}
	base[4]= list(2,VV[142],listA(3,VV[143],base[2],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function MAKE-DISPATCH-LAMBDA	*/

static object LI60(V486,V487,V488,V489)

object V486;object V487;object V488;object V489;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;
	if(((V486))==Cnil){
	goto T838;}
	V490= (*(LnkLI204))((V487),(V488));
	goto T836;
	goto T838;
T838:;
	V490= (*(LnkLI205))((V487),(V488));
	goto T836;
T836:;
	if(((V486))!=Cnil){
	goto T842;}
	V491= VV[144];
	goto T840;
	goto T842;
T842:;
	V491= Cnil;
	goto T840;
T840:;
	{object V492 = listA(3,VV[143],V490,append(V491,(V489)));
	VMR57(V492)}
	return Cnil;
}
/*	macro definition for WITH-LOCAL-CACHE-FUNCTIONS	*/

static void L61()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V493=base[0]->c.c_cdr;
	if(endp(V493))invalid_macro_call();
	{object V494= (V493->c.c_car);
	if(endp(V494))invalid_macro_call();
	base[2]= (V494->c.c_car);
	V494=V494->c.c_cdr;
	if(!endp(V494))invalid_macro_call();}
	V493=V493->c.c_cdr;
	base[3]= V493;}
	V495= list(2,VV[145],base[2]);
	V496= make_cons(/* INLINE-ARGS */V495,Cnil);
	{object V498;
	object V499= VV[150];
	if(V499==Cnil){
	V497= Cnil;
	goto T844;}
	base[4]=V498=MMcons(Cnil,Cnil);
	goto T845;
T845:;
	{register object V500;
	V500= (V499->c.c_car);
	V501= CMPcar((V500));
	V502= CMPcadr((V500));
	{object V504;
	object V505= CMPcadr((V500));
	if(V505==Cnil){
	V503= Cnil;
	goto T847;}
	base[5]=V504=MMcons(Cnil,Cnil);
	goto T848;
T848:;
	(V504->c.c_car)= list(3,VV[139],list(2,VV[149],(V505->c.c_car)),(V505->c.c_car));
	if((V505=MMcdr(V505))==Cnil){
	V503= base[5];
	goto T847;}
	V504=MMcdr(V504)=MMcons(Cnil,Cnil);
	goto T848;}
	goto T847;
T847:;
	V507= make_cons(VV[139],V503);
	(V498->c.c_car)= list(3,/* INLINE-ARGS */V501,/* INLINE-ARGS */V502,list(4,VV[137],VV[148],/* INLINE-ARGS */V507,list(2,VV[149],CMPcddr((V500)))));}
	if((V499=MMcdr(V499))==Cnil){
	V497= base[4];
	goto T844;}
	V498=MMcdr(V498)=MMcons(Cnil,Cnil);
	goto T845;}
	goto T844;
T844:;
	base[4]= list(4,VV[10],/* INLINE-ARGS */V496,VV[146],listA(3,VV[147],V497,base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function FILL-CACHE	*/

static object LI62(object V510,object V509,object V508,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB59 VMS59 VMV59
	{register object V511;
	register object V512;
	object V513;
	object V514;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V511= V510;
	V512= V509;
	V513= V508;
	narg = narg - 3;
	if (narg <= 0) goto T850;
	else {
	V514= first;}
	--narg; goto T851;
	goto T850;
T850:;
	V514= Cnil;
	goto T851;
T851:;
	if(((V512))!=Cnil){
	goto T853;}
	base[0]= VV[151];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T853;
T853:;{object V515;
	V515= (*(LnkLI206))(Cnil,(V511),(V512),(V513));
	if(V515==Cnil)goto T857;
	{object V516 = V515;
	VMR59(V516)}
	goto T857;
T857:;}{object V517;
	V519 = CMPmake_fixnum((long)(*(LnkLI207))((V511)));
	base[0]= number_times(V519,VV[152]);
	vs_top=(vs_base=base+0)+1;
	Lceiling();
	vs_top=sup;
	V518= vs_base[0];
	if(!(((long)STREF(unsigned short,(V511),4))==(1))){
	goto T867;}
	V520= one_minus(CMPmake_fixnum((long)STREF(fixnum,(V511),12)));
	goto T865;
	goto T867;
T867:;
	V520= CMPmake_fixnum((long)STREF(fixnum,(V511),12));
	goto T865;
T865:;
	if(number_compare(V518,V520)<0){
	goto T861;}
	V517= Cnil;
	goto T860;
	goto T861;
T861:;
	V517= (*(LnkLI208))((V511),(V512),(V513),(V514));
	goto T860;
T860:;
	if(V517==Cnil)goto T859;
	{object V521 = V517;
	VMR59(V521)}
	goto T859;
T859:;}
	{object V522 = (*(LnkLI209))((V511),(V512),(V513),(V514));
	VMR59(V522)}
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
	{object V523=base[0]->c.c_cdr;
	if(endp(V523))invalid_macro_call();
	base[2]= (V523->c.c_car);
	V523=V523->c.c_cdr;
	if(!endp(V523))invalid_macro_call();}
	base[3]= list(3,VV[9],list(3,VV[105],VV[153],list(2,VV[154],base[2])),base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function CHECK-CACHE	*/

static object LI64(V525)

object V525;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	{register object V526;
	V526= (V525);
	{register object V527;
	object V528;
	V529= (long)STREF(unsigned short,(V526),4);
	if(!((V529)==(1))){
	goto T871;}
	V527= small_fixnum(0);
	goto T869;
	goto T871;
T871:;
	V527= small_fixnum(1);
	goto T869;
T869:;
	V530= STREF(object,(V526),20);
	V531= CMPmake_fixnum((long)STREF(fixnum,(V526),12));
	V528= (
	V532 = V530,
	(type_of(V532) == t_sfun ?(*((V532)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V532)==t_vfun) ?
	(*((V532)->sfn.sfn_self)):
	(fcall.fun=(V532),fcalln))(V531));
	{long V533;
	register long V534;
	V533= (long)STREF(fixnum,(V526),12);
	V534= 0;
	goto T880;
T880:;
	if(!((V534)>=(V533))){
	goto T881;}
	{object V535 = (V525);
	VMR61(V535)}
	goto T881;
T881:;
	{long V536;
	V536= fix((V527));
	V537= (long)STREF(unsigned short,(V526),4);
	if((V537)==(1)){
	goto T889;}
	goto T887;
	goto T889;
T889:;
	if((V536)==(0)){
	goto T884;}}
	goto T887;
T887:;
	{object V538;
	V538= CMPmake_fixnum(V534);
	{long V539;
	V539= fix((V538));
	V540= (long)STREF(unsigned short,(V526),4);
	if((V540)==(1)){
	goto T897;}
	goto T893;
	goto T897;
T897:;
	if(!((V539)==(0))){
	goto T893;}}
	base[0]= VV[155];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T893;
T893:;
	V541= STREF(object,(V526),40);
	{register long V543;
	V543= fix((V538));
	{long V544;
	V544= V543;
	V545= (long)STREF(unsigned short,(V526),4);
	if((V545)==(1)){
	goto T908;}
	goto T904;
	goto T908;
T908:;
	if(!((V544)==(0))){
	goto T904;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T904;
T904:;
	V546= (long)STREF(unsigned short,(V526),4);
	if(!((V546)==(1))){
	goto T913;}
	V547= (long)STREF(unsigned short,(V526),32);
	V542= (long)(V543)*(V547);
	goto T902;
	goto T913;
T913:;
	V548= (long)STREF(unsigned short,(V526),32);
	V542= (long)((long)(V543)*(V548))+1;}
	goto T902;
T902:;
	if(!(((((V541)->v.v_self[V542])==Cnil?Ct:Cnil))==Cnil)){
	goto T884;}}
	{register object V549;
	object V550;
	register object V551;
	V549= (VFUN_NARGS=2,(*(LnkLI210))((V525),(V527)));
	{long V552;
	{long V553;
	V553= fix((V549));
	V554= (long)STREF(unsigned short,(V526),4);
	if((V554)==(1)){
	goto T925;}
	goto T922;
	goto T925;
T925:;
	if(!((V553)==(0))){
	goto T922;}}
	{long V555;
	V555= fix((V549));
	V556= (long)STREF(fixnum,(V526),36);
	if(!((V555)==(V556))){
	goto T930;}
	V557= (long)STREF(unsigned short,(V526),4);
	if(!((V557)==(1))){
	goto T934;}
	V552= (long)STREF(unsigned short,(V526),32);
	goto T920;
	goto T934;
T934:;
	V552= 1;
	goto T920;
	goto T930;
T930:;
	V558= (long)STREF(unsigned short,(V526),32);
	V552= (long)(V555)+(V558);
	goto T920;}
	goto T922;
T922:;
	V552= fix((V549));
	goto T920;
T920:;
	V559= (long)STREF(unsigned short,(V526),4);
	if(!((V559)==(1))){
	goto T939;}
	base[3]= CMPmake_fixnum(V552);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V526),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V550= vs_base[0];
	goto T919;
	goto T939;
T939:;
	base[3]= CMPmake_fixnum((long)(V552)-1);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V526),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V550= vs_base[0];}
	goto T919;
T919:;
	if(((V550))==Cnil){
	goto T948;}
	{long V560;
	long V561;
	V560= fix((V550));
	V561= V534;
	{register long V562;
	V562= (long)(V561)-(V560);
	if(!((V562)<0)){
	goto T953;}
	V563= (long)STREF(fixnum,(V526),12);
	V562= (long)(V562)+(V563);
	{long V564;
	V564= 0;
	V565= (long)STREF(unsigned short,(V526),4);
	if((V565)==(1)){
	goto T962;}
	goto T953;
	goto T962;
T962:;
	if(!((V564)==(0))){
	goto T953;}}
	V562= (long)(V562)-1;
	goto T953;
T953:;
	V551= CMPmake_fixnum(V562);
	goto T946;}}
	goto T948;
T948:;
	V551= Cnil;
	goto T946;
T946:;
	if(((V551))==Cnil){
	goto T884;}
	if(!(number_compare((V551),(V528))>0)){
	goto T884;}
	base[3]= VV[157];
	base[4]= (V525);
	base[5]= (V527);
	base[6]= (V551);
	base[7]= (V528);
	vs_top=(vs_base=base+3)+5;
	Lerror();
	vs_top=sup;}
	goto T884;
T884:;
	{long V566;
	V566= fix((V527));
	V567= (long)STREF(fixnum,(V526),36);
	if(!((V566)==(V567))){
	goto T979;}
	V568= (long)STREF(unsigned short,(V526),4);
	if(!((V568)==(1))){
	goto T983;}
	V527= CMPmake_fixnum((long)STREF(unsigned short,(V526),32));
	goto T976;
	goto T983;
T983:;
	V527= small_fixnum(1);
	goto T976;
	goto T979;
T979:;
	V569= (long)STREF(unsigned short,(V526),32);
	V527= CMPmake_fixnum((long)(V566)+(V569));}
	goto T976;
T976:;
	V534= (long)(V534)+1;
	goto T880;}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PROBE-CACHE	*/

static object LI65(object V571,object V570,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB62 VMS62 VMV62
	{object V572;
	object V573;
	object V574;
	object V575;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V572= V571;
	V573= V570;
	narg = narg - 2;
	if (narg <= 0) goto T990;
	else {
	V574= first;}
	if (--narg <= 0) goto T991;
	else {
	V575= va_arg(ap,object);}
	--narg; goto T992;
	goto T990;
T990:;
	V574= Cnil;
	goto T991;
T991:;
	V575= Cnil;
	goto T992;
T992:;
	if(((V573))!=Cnil){
	goto T995;}
	base[0]= VV[158];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T995;
T995:;
	{register object V576;
	V576= (V572);
	{register long V577;
	long V578;
	V579= (long)STREF(unsigned char,(V576),16);
	V580= (long)STREF(fixnum,(V576),24);
	V577= (long)(*(LnkLI211))(V579,V580,(V573));
	if((V575)==Cnil){
	goto T1005;}
	V581= V575;
	goto T1003;
	goto T1005;
T1005:;
	V581= STREF(object,(V576),20);
	goto T1003;
T1003:;
	V583= CMPmake_fixnum((long)STREF(fixnum,(V576),12));
	V578= fix((
	V584 = V581,
	(type_of(V584) == t_sfun ?(*((V584)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V584)==t_vfun) ?
	(*((V584)->sfn.sfn_self)):
	(fcall.fun=(V584),fcalln))(V583)));
	{long V585;
	V585= V577;
	V586= (long)STREF(unsigned short,(V576),4);
	if((V586)==(1)){
	goto T1012;}
	goto T1008;
	goto T1012;
T1012:;
	if(!((V585)==(0))){
	goto T1008;}}
	{long V587;
	V587= V577;
	V588= (long)STREF(fixnum,(V576),36);
	if(!((V587)==(V588))){
	goto T1018;}
	V589= (long)STREF(unsigned short,(V576),4);
	if(!((V589)==(1))){
	goto T1022;}
	V577= (long)STREF(unsigned short,(V576),32);
	goto T1015;
	goto T1022;
T1022:;
	V577= 1;
	goto T1015;
	goto T1018;
T1018:;
	V590= (long)STREF(unsigned short,(V576),32);
	V577= (long)(V587)+(V590);}
	goto T1015;
T1015:;
	goto T1008;
T1008:;
	{long V591;
	long V592;
	V591= (long)(V578)+1;
	V592= 0;
	goto T1030;
T1030:;
	if(!((V592)>=(V591))){
	goto T1031;}
	goto T1026;
	goto T1031;
T1031:;
	{register long V593;
	register object V594;
	V593= V577;
	V594= (V573);
	{register object V595;
	V595= STREF(object,(V576),40);
	V596= (long)STREF(unsigned short,(V576),4);
	if(!((V596)==(1))){
	goto T1040;}
	if(!(((V594))==(((V595))->v.v_self[V593]))){
	goto T1034;}
	goto T1036;
	goto T1040;
T1040:;
	{long V597;
	register long V598;
	V597= (long)STREF(unsigned short,(V576),4);
	V598= 0;
	goto T1046;
T1046:;
	if(!((V598)>=(V597))){
	goto T1047;}
	goto T1036;
	goto T1047;
T1047:;
	{object V600;
	V600= CMPcar((V594));
	V594= CMPcdr((V594));
	V599= (V600);}
	if((V599)==(((V595))->v.v_self[(long)(V593)+(V598)])){
	goto T1050;}
	goto T1034;
	goto T1050;
T1050:;
	V598= (long)(V598)+1;
	goto T1046;}}}
	goto T1036;
T1036:;
	V601= STREF(object,(V576),8);
	if(!((V601)==Cnil)){
	goto T1060;}
	{object V602 = Ct;
	VMR62(V602)}
	goto T1060;
T1060:;
	{long V603;
	V603= V577;
	if((STREF(object,(V576),8))!=Cnil){
	goto T1064;}
	{object V604 = Cnil;
	VMR62(V604)}
	goto T1064;
T1064:;
	V605= STREF(object,(V576),40);
	V606= (long)STREF(unsigned short,(V576),4);
	{object V607 = (V605)->v.v_self[(long)(V603)+(V606)];
	VMR62(V607)}}
	goto T1034;
T1034:;
	{long V608;
	V608= V577;
	V609= (long)STREF(fixnum,(V576),36);
	if(!((V608)==(V609))){
	goto T1072;}
	V610= (long)STREF(unsigned short,(V576),4);
	if(!((V610)==(1))){
	goto T1076;}
	V577= (long)STREF(unsigned short,(V576),32);
	goto T1069;
	goto T1076;
T1076:;
	V577= 1;
	goto T1069;
	goto T1072;
T1072:;
	V611= (long)STREF(unsigned short,(V576),32);
	V577= (long)(V608)+(V611);}
	goto T1069;
T1069:;
	V592= (long)(V592)+1;
	goto T1030;}
	goto T1026;
T1026:;
	{register object V612;
	object V613;
	V612= STREF(object,(V576),44);
	V613= CMPcar((V612));
	goto T1087;
T1087:;
	if(!(((V612))==Cnil)){
	goto T1088;}
	goto T1083;
	goto T1088;
T1088:;
	if(!(equal(CMPcar((V613)),(V573)))){
	goto T1092;}
	V614= STREF(object,(V576),8);
	if(!((V614)==Cnil)){
	goto T1095;}
	{object V615 = Ct;
	VMR62(V615)}
	goto T1095;
T1095:;
	{object V616 = CMPcdr((V613));
	VMR62(V616)}
	goto T1092;
T1092:;
	V612= CMPcdr((V612));
	V613= CMPcar((V612));
	goto T1087;}
	goto T1083;
T1083:;
	{object V617 = (V574);
	VMR62(V617)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAP-CACHE	*/

static object LI66(object V619,object V618,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB63 VMS63 VMV63
	{object V620;
	object V621;
	object V622;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V620= V619;
	V621= V618;
	narg = narg - 2;
	if (narg <= 0) goto T1103;
	else {
	V622= first;}
	--narg; goto T1104;
	goto T1103;
T1103:;
	V622= Cnil;
	goto T1104;
T1104:;
	{register object V623;
	V623= (V621);
	{object V624;
	if((V622)==Cnil){
	V624= Cnil;
	goto T1107;}
	V624= STREF(object,(V623),8);
	goto T1107;
T1107:;
	{long V625;
	register long V626;
	V625= (long)STREF(fixnum,(V623),12);
	V626= 0;
	goto T1112;
T1112:;
	if(!((V626)>=(V625))){
	goto T1113;}
	goto T1108;
	goto T1113;
T1113:;
	{long V627;
	V627= V626;
	V628= (long)STREF(unsigned short,(V623),4);
	if((V628)==(1)){
	goto T1121;}
	goto T1119;
	goto T1121;
T1121:;
	if((V627)==(0)){
	goto T1116;}}
	goto T1119;
T1119:;
	{long V629;
	V629= V626;
	{long V631;
	V631= V629;
	V632= (long)STREF(unsigned short,(V623),4);
	if((V632)==(1)){
	goto T1130;}
	goto T1126;
	goto T1130;
T1130:;
	if(!((V631)==(0))){
	goto T1126;}}
	base[0]= VV[159];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1126;
T1126:;
	{long V633;
	register object V634;
	{long V635;
	V635= V629;
	{long V636;
	V636= V635;
	V637= (long)STREF(unsigned short,(V623),4);
	if((V637)==(1)){
	goto T1140;}
	goto T1136;
	goto T1140;
T1140:;
	if(!((V636)==(0))){
	goto T1136;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1136;
T1136:;
	V638= (long)STREF(unsigned short,(V623),4);
	if(!((V638)==(1))){
	goto T1145;}
	V639= (long)STREF(unsigned short,(V623),32);
	V633= (long)(V635)*(V639);
	goto T1134;
	goto T1145;
T1145:;
	V640= (long)STREF(unsigned short,(V623),32);
	V633= (long)((long)(V635)*(V640))+1;}
	goto T1134;
T1134:;
	V634= Cnil;
	{object V641;
	object V642;
	V641= STREF(object,(V623),40);
	V642= (((V634))==Cnil?Ct:Cnil);
	{long V643;
	register long V644;
	V643= (long)STREF(unsigned short,(V623),4);
	V644= 0;
	goto T1155;
T1155:;
	if(!((V644)>=(V643))){
	goto T1156;}
	if(((V642))==Cnil){
	goto T1116;}
	goto T1124;
	goto T1156;
T1156:;
	{register object V645;
	V645= ((V641))->v.v_self[(long)(V633)+(V644)];
	if(((V645))==Cnil){
	goto T1162;}
	if(!((((((V645))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1161;}
	goto T1162;
T1162:;
	goto T1116;
	goto T1161;
T1161:;
	if(((V634))==Cnil){
	goto T1166;}
	if(!(type_of((V634))==t_cons)){
	goto T1172;}
	{object V647;
	V647= CMPcar((V634));
	V634= CMPcdr((V634));
	V646= (V647);
	goto T1170;}
	goto T1172;
T1172:;
	V646= (V634);
	goto T1170;
T1170:;
	if(((V645))==(V646)){
	goto T1159;}
	goto T1166;
T1166:;
	V642= Ct;}
	goto T1159;
T1159:;
	V644= (long)(V644)+1;
	goto T1155;}}}}
	goto T1124;
T1124:;
	{object V648;
	{long V650;
	V650= V626;
	{long V651;
	V651= V650;
	V652= (long)STREF(unsigned short,(V623),4);
	if((V652)==(1)){
	goto T1188;}
	goto T1184;
	goto T1188;
T1188:;
	if(!((V651)==(0))){
	goto T1184;}}
	base[0]= VV[160];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1184;
T1184:;
	{long V653;
	{long V654;
	V654= V650;
	{long V655;
	V655= V654;
	V656= (long)STREF(unsigned short,(V623),4);
	if((V656)==(1)){
	goto T1198;}
	goto T1194;
	goto T1198;
T1198:;
	if(!((V655)==(0))){
	goto T1194;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1194;
T1194:;
	V657= (long)STREF(unsigned short,(V623),4);
	if(!((V657)==(1))){
	goto T1203;}
	V658= (long)STREF(unsigned short,(V623),32);
	V653= (long)(V654)*(V658);
	goto T1192;
	goto T1203;
T1203:;
	V659= (long)STREF(unsigned short,(V623),32);
	V653= (long)((long)(V654)*(V659))+1;}
	goto T1192;
T1192:;
	V660= (long)STREF(unsigned short,(V623),4);
	if(!((V660)==(1))){
	goto T1209;}
	V661= STREF(object,(V623),40);
	V649= (V661)->v.v_self[V653];
	goto T1182;
	goto T1209;
T1209:;
	{object V662;
	object V663;
	base[0]= CMPmake_fixnum((long)STREF(unsigned short,(V623),4));
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	V662= vs_base[0];
	V663= STREF(object,(V623),40);
	{long V664;
	register long V665;
	V664= (long)STREF(unsigned short,(V623),4);
	V665= 0;
	goto T1219;
T1219:;
	if(!((V665)>=(V664))){
	goto T1220;}
	V649= (V662);
	goto T1182;
	goto T1220;
T1220:;
	{object V666;
	object V668;
	V666= CMPmake_fixnum(V665);
	V668= ((V663))->v.v_self[(long)(V653)+(V665)];
	(nthcdr(fix((V666)),V662))->c.c_car = (V668);
	(void)(nthcdr(fix((V666)),V662));}
	V665= (long)(V665)+1;
	goto T1219;}}}}
	goto T1182;
T1182:;
	{long V670;
	V670= V626;
	{long V671;
	V671= V670;
	V672= (long)STREF(unsigned short,(V623),4);
	if((V672)==(1)){
	goto T1236;}
	goto T1232;
	goto T1236;
T1236:;
	if(!((V671)==(0))){
	goto T1232;}}
	base[0]= VV[161];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1232;
T1232:;
	{long V673;
	{long V674;
	V674= V670;
	{long V675;
	V675= V674;
	V676= (long)STREF(unsigned short,(V623),4);
	if((V676)==(1)){
	goto T1246;}
	goto T1242;
	goto T1246;
T1246:;
	if(!((V675)==(0))){
	goto T1242;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1242;
T1242:;
	V677= (long)STREF(unsigned short,(V623),4);
	if(!((V677)==(1))){
	goto T1251;}
	V678= (long)STREF(unsigned short,(V623),32);
	V673= (long)(V674)*(V678);
	goto T1240;
	goto T1251;
T1251:;
	V679= (long)STREF(unsigned short,(V623),32);
	V673= (long)((long)(V674)*(V679))+1;}
	goto T1240;
T1240:;
	if((STREF(object,(V623),8))!=Cnil){
	goto T1256;}
	V669= Cnil;
	goto T1230;
	goto T1256;
T1256:;
	V680= STREF(object,(V623),40);
	V681= (long)STREF(unsigned short,(V623),4);
	V669= (V680)->v.v_self[(long)(V673)+(V681)];}}
	goto T1230;
T1230:;
	V648= (
	(type_of((V620)) == t_sfun ?(*(((V620))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V620))==t_vfun) ?
	(*(((V620))->sfn.sfn_self)):
	(fcall.fun=((V620)),fcalln))(V649,V669));
	if(((V624))==Cnil){
	goto T1116;}
	V682= STREF(object,(V623),40);
	{long V684;
	V684= V626;
	{long V685;
	V685= V684;
	V686= (long)STREF(unsigned short,(V623),4);
	if((V686)==(1)){
	goto T1269;}
	goto T1265;
	goto T1269;
T1269:;
	if(!((V685)==(0))){
	goto T1265;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1265;
T1265:;
	V687= (long)STREF(unsigned short,(V623),4);
	if(!((V687)==(1))){
	goto T1274;}
	V688= (long)STREF(unsigned short,(V623),32);
	V683= CMPmake_fixnum((long)(V684)*(V688));
	goto T1263;
	goto T1274;
T1274:;
	V689= (long)STREF(unsigned short,(V623),32);
	V683= CMPmake_fixnum((long)((long)(V684)*(V689))+1);}
	goto T1263;
T1263:;
	V690= CMPmake_fixnum((long)STREF(unsigned short,(V623),4));
	{long V691= fix(number_plus(V683,V690));
	(void)((V682)->v.v_self[/* INLINE-ARGS */V691]= ((V648)));}}
	goto T1116;
T1116:;
	V626= (long)(V626)+1;
	goto T1112;}
	goto T1108;
T1108:;
	{object V692;
	object V693;
	V692= STREF(object,(V623),44);
	V693= CMPcar((V692));
	goto T1286;
T1286:;
	if(!(((V692))==Cnil)){
	goto T1287;}
	goto T1106;
	goto T1287;
T1287:;
	{object V694;
	V694= (
	(type_of((V620)) == t_sfun ?(*(((V620))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V620))==t_vfun) ?
	(*(((V620))->sfn.sfn_self)):
	(fcall.fun=((V620)),fcalln))(CMPcar((V693)),CMPcdr((V693))));
	if(((V624))==Cnil){
	goto T1291;}
	(V693)->c.c_cdr = V694;}
	goto T1291;
T1291:;
	V692= CMPcdr((V692));
	V693= CMPcar((V692));
	goto T1286;}}}
	goto T1106;
T1106:;
	{object V697 = (V621);
	VMR63(V697)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function CACHE-COUNT	*/

static object LI67(V699)

object V699;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	{register object V700;
	V700= (V699);
	{register long V701;
	V701= 0;
	{long V702;
	register long V703;
	V702= (long)STREF(fixnum,(V700),12);
	V703= 0;
	goto T1305;
T1305:;
	if(!((V703)>=(V702))){
	goto T1306;}
	{long V704 = V701;
	VMR64((object)V704)}
	goto T1306;
T1306:;
	{register long V705;
	V705= V703;
	V706= (long)STREF(unsigned short,(V700),4);
	if((V706)==(1)){
	goto T1313;}
	goto T1311;
	goto T1313;
T1313:;
	if((V705)==(0)){
	goto T1309;}}
	goto T1311;
T1311:;
	{register object V707;
	V707= CMPmake_fixnum(V703);
	{register long V708;
	V708= fix((V707));
	V709= (long)STREF(unsigned short,(V700),4);
	if((V709)==(1)){
	goto T1322;}
	goto T1318;
	goto T1322;
T1322:;
	if(!((V708)==(0))){
	goto T1318;}}
	base[0]= VV[155];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1318;
T1318:;
	V710= STREF(object,(V700),40);
	{register long V712;
	V712= fix((V707));
	{register long V713;
	V713= V712;
	V714= (long)STREF(unsigned short,(V700),4);
	if((V714)==(1)){
	goto T1333;}
	goto T1329;
	goto T1333;
T1333:;
	if(!((V713)==(0))){
	goto T1329;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1329;
T1329:;
	V715= (long)STREF(unsigned short,(V700),4);
	if(!((V715)==(1))){
	goto T1338;}
	V716= (long)STREF(unsigned short,(V700),32);
	V711= (long)(V712)*(V716);
	goto T1327;
	goto T1338;
T1338:;
	V717= (long)STREF(unsigned short,(V700),32);
	V711= (long)((long)(V712)*(V717))+1;}
	goto T1327;
T1327:;
	if(!(((((V710)->v.v_self[V711])==Cnil?Ct:Cnil))==Cnil)){
	goto T1309;}}
	V701= (long)(V701)+(1);
	goto T1309;
T1309:;
	V703= (long)(V703)+1;
	goto T1305;}}}
	base[0]=base[0];
}
/*	local entry for function ENTRY-IN-CACHE-P	*/

static object LI68(V721,V722,V723)

object V721;object V722;object V723;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	{register object V724;
	V724= (V721);
	{long V725;
	register long V726;
	V725= (long)STREF(fixnum,(V724),12);
	V726= 0;
	goto T1350;
T1350:;
	if(!((V726)>=(V725))){
	goto T1351;}
	{object V727 = Cnil;
	VMR65(V727)}
	goto T1351;
T1351:;
	{long V728;
	V728= V726;
	V729= (long)STREF(unsigned short,(V724),4);
	if((V729)==(1)){
	goto T1358;}
	goto T1356;
	goto T1358;
T1358:;
	if((V728)==(0)){
	goto T1354;}}
	goto T1356;
T1356:;
	{long V731;
	V731= V726;
	{long V732;
	V732= V731;
	V733= (long)STREF(unsigned short,(V724),4);
	if((V733)==(1)){
	goto T1369;}
	goto T1365;
	goto T1369;
T1369:;
	if(!((V732)==(0))){
	goto T1365;}}
	base[0]= VV[160];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1365;
T1365:;
	{long V734;
	{register long V735;
	V735= V731;
	{long V736;
	V736= V735;
	V737= (long)STREF(unsigned short,(V724),4);
	if((V737)==(1)){
	goto T1379;}
	goto T1375;
	goto T1379;
T1379:;
	if(!((V736)==(0))){
	goto T1375;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1375;
T1375:;
	V738= (long)STREF(unsigned short,(V724),4);
	if(!((V738)==(1))){
	goto T1384;}
	V739= (long)STREF(unsigned short,(V724),32);
	V734= (long)(V735)*(V739);
	goto T1373;
	goto T1384;
T1384:;
	V740= (long)STREF(unsigned short,(V724),32);
	V734= (long)((long)(V735)*(V740))+1;}
	goto T1373;
T1373:;
	V741= (long)STREF(unsigned short,(V724),4);
	if(!((V741)==(1))){
	goto T1390;}
	V742= STREF(object,(V724),40);
	V730= (V742)->v.v_self[V734];
	goto T1363;
	goto T1390;
T1390:;
	{register object V743;
	object V744;
	base[0]= CMPmake_fixnum((long)STREF(unsigned short,(V724),4));
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	V743= vs_base[0];
	V744= STREF(object,(V724),40);
	{long V745;
	register long V746;
	V745= (long)STREF(unsigned short,(V724),4);
	V746= 0;
	goto T1400;
T1400:;
	if(!((V746)>=(V745))){
	goto T1401;}
	V730= (V743);
	goto T1363;
	goto T1401;
T1401:;
	{object V747;
	register object V749;
	V747= CMPmake_fixnum(V746);
	V749= ((V744))->v.v_self[(long)(V734)+(V746)];
	(nthcdr(fix((V747)),V743))->c.c_car = (V749);
	(void)(nthcdr(fix((V747)),V743));}
	V746= (long)(V746)+1;
	goto T1400;}}}}
	goto T1363;
T1363:;
	if(!(equal(V730,(V722)))){
	goto T1354;}
	{object V750 = Ct;
	VMR65(V750)}
	goto T1354;
T1354:;
	V726= (long)(V726)+1;
	goto T1350;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FILL-CACHE-P	*/

static object LI69(V755,V756,V757,V758)

object V755;object V756;object V757;object V758;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	{long V760;
	long V761;
	V762= (long)STREF(unsigned char,V756,16);
	V763= (long)STREF(fixnum,V756,24);
	V760= (long)(*(LnkLI211))(V762,V763,(V757));
	{long V764;
	V764= V760;
	V765= (long)STREF(unsigned short,V756,4);
	if(!((V765)==(1))){
	goto T1420;}
	base[0]= CMPmake_fixnum(V764);
	base[1]= CMPmake_fixnum((long)STREF(unsigned short,V756,32));
	vs_top=(vs_base=base+0)+2;
	Lfloor();
	vs_top=sup;
	V761= fix(vs_base[0]);
	goto T1417;
	goto T1420;
T1420:;
	base[0]= CMPmake_fixnum((long)(V764)-1);
	base[1]= CMPmake_fixnum((long)STREF(unsigned short,V756,32));
	vs_top=(vs_base=base+0)+2;
	Lfloor();
	vs_top=sup;
	V761= fix(vs_base[0]);}
	goto T1417;
T1417:;
	{object V766;
	object V767;
	base[0]= CMPmake_fixnum(V761);
	base[1]= (V756);
	base[2]= (V757);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk212)();
	if(vs_base>=vs_top){vs_top=sup;goto T1431;}
	V766= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1432;}
	V767= vs_base[0];
	vs_top=sup;
	goto T1433;
	goto T1431;
T1431:;
	V766= Cnil;
	goto T1432;
T1432:;
	V767= Cnil;
	goto T1433;
T1433:;
	if(((V755))!=Cnil){
	goto T1434;}
	if(((V767))==Cnil){
	goto T1435;}
	goto T1434;
T1434:;
	if(((V767))!=Cnil){
	goto T1439;}
	{object V768;
	object V770;
	{long V772;
	V772= fix((V766));
	{long V773;
	V773= V772;
	V774= (long)STREF(unsigned short,V756,4);
	if((V774)==(1)){
	goto T1449;}
	goto T1445;
	goto T1449;
T1449:;
	if(!((V773)==(0))){
	goto T1445;}}
	base[2]= VV[160];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1445;
T1445:;
	{long V775;
	{long V776;
	V776= V772;
	{long V777;
	V777= V776;
	V778= (long)STREF(unsigned short,V756,4);
	if((V778)==(1)){
	goto T1459;}
	goto T1455;
	goto T1459;
T1459:;
	if(!((V777)==(0))){
	goto T1455;}}
	base[2]= VV[156];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1455;
T1455:;
	V779= (long)STREF(unsigned short,V756,4);
	if(!((V779)==(1))){
	goto T1464;}
	V780= (long)STREF(unsigned short,V756,32);
	V775= (long)(V776)*(V780);
	goto T1453;
	goto T1464;
T1464:;
	V781= (long)STREF(unsigned short,V756,32);
	V775= (long)((long)(V776)*(V781))+1;}
	goto T1453;
T1453:;
	V782= (long)STREF(unsigned short,V756,4);
	if(!((V782)==(1))){
	goto T1470;}
	V783= STREF(object,V756,40);
	V771= (V783)->v.v_self[V775];
	goto T1443;
	goto T1470;
T1470:;
	{register object V784;
	object V785;
	base[2]= CMPmake_fixnum((long)STREF(unsigned short,V756,4));
	vs_top=(vs_base=base+2)+1;
	Lmake_list();
	vs_top=sup;
	V784= vs_base[0];
	V785= STREF(object,V756,40);
	{long V786;
	register long V787;
	V786= (long)STREF(unsigned short,V756,4);
	V787= 0;
	goto T1480;
T1480:;
	if(!((V787)>=(V786))){
	goto T1481;}
	V771= (V784);
	goto T1443;
	goto T1481;
T1481:;
	{object V788;
	register object V790;
	V788= CMPmake_fixnum(V787);
	V790= ((V785))->v.v_self[(long)(V775)+(V787)];
	(nthcdr(fix((V788)),V784))->c.c_car = (V790);
	(void)(nthcdr(fix((V788)),V784));}
	V787= (long)(V787)+1;
	goto T1480;}}}}
	goto T1443;
T1443:;
	{long V792;
	V792= fix((V766));
	{long V793;
	V793= V792;
	V794= (long)STREF(unsigned short,V756,4);
	if((V794)==(1)){
	goto T1497;}
	goto T1493;
	goto T1497;
T1497:;
	if(!((V793)==(0))){
	goto T1493;}}
	base[2]= VV[161];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1493;
T1493:;
	{long V795;
	{long V796;
	V796= V792;
	{long V797;
	V797= V796;
	V798= (long)STREF(unsigned short,V756,4);
	if((V798)==(1)){
	goto T1507;}
	goto T1503;
	goto T1507;
T1507:;
	if(!((V797)==(0))){
	goto T1503;}}
	base[2]= VV[156];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1503;
T1503:;
	V799= (long)STREF(unsigned short,V756,4);
	if(!((V799)==(1))){
	goto T1512;}
	V800= (long)STREF(unsigned short,V756,32);
	V795= (long)(V796)*(V800);
	goto T1501;
	goto T1512;
T1512:;
	V801= (long)STREF(unsigned short,V756,32);
	V795= (long)((long)(V796)*(V801))+1;}
	goto T1501;
T1501:;
	if((STREF(object,V756,8))!=Cnil){
	goto T1517;}
	V791= Cnil;
	goto T1491;
	goto T1517;
T1517:;
	V802= STREF(object,V756,40);
	V803= (long)STREF(unsigned short,V756,4);
	V791= (V802)->v.v_self[(long)(V795)+(V803)];}}
	goto T1491;
T1491:;
	V768= make_cons(V771,V791);
	V770= make_cons((V768),STREF(object,V756,44));
	V804= Ct;
	STSET(object,V756,44, (V770));
	(void)((V770));}
	goto T1439;
T1439:;
	{long V805;
	V805= fix((V766));
	{long V806;
	V806= V805;
	V807= (long)STREF(unsigned short,V756,4);
	if((V807)==(1)){
	goto T1527;}
	goto T1523;
	goto T1527;
T1527:;
	if(!((V806)==(0))){
	goto T1523;}}
	base[0]= VV[162];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1523;
T1523:;
	{long V808;
	object V809;
	{long V810;
	V810= V805;
	{long V811;
	V811= V810;
	V812= (long)STREF(unsigned short,V756,4);
	if((V812)==(1)){
	goto T1537;}
	goto T1533;
	goto T1537;
T1537:;
	if(!((V811)==(0))){
	goto T1533;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1533;
T1533:;
	V813= (long)STREF(unsigned short,V756,4);
	if(!((V813)==(1))){
	goto T1542;}
	V814= (long)STREF(unsigned short,V756,32);
	V808= (long)(V810)*(V814);
	goto T1531;
	goto T1542;
T1542:;
	V815= (long)STREF(unsigned short,V756,32);
	V808= (long)((long)(V810)*(V815))+1;}
	goto T1531;
T1531:;
	V809= STREF(object,V756,40);
	V816= (long)STREF(unsigned short,V756,4);
	if(!((V816)==(1))){
	goto T1550;}
	(void)(((V809))->v.v_self[V808]= ((V757)));
	if((STREF(object,V756,8))==Cnil){
	goto T1548;}
	(void)(((V809))->v.v_self[(long)(V808)+1]= ((V758)));
	goto T1548;
	goto T1550;
T1550:;
	{register long V817;
	V817= 0;
	{register object V818;
	register object V819;
	V818= (V757);
	V819= CMPcar((V818));
	goto T1561;
T1561:;
	if(!(((V818))==Cnil)){
	goto T1562;}
	goto T1556;
	goto T1562;
T1562:;
	(void)(((V809))->v.v_self[(long)(V808)+(V817)]= ((V819)));
	V817= (long)(V817)+1;
	V818= CMPcdr((V818));
	V819= CMPcar((V818));
	goto T1561;}}
	goto T1556;
T1556:;
	if((STREF(object,V756,8))==Cnil){
	goto T1548;}
	V820= (long)STREF(unsigned short,V756,4);
	(void)(((V809))->v.v_self[(long)(V808)+(V820)]= ((V758)));
	goto T1548;
T1548:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1577;}
	(void)((*(LnkLI154))((V756)));
	goto T1577;
T1577:;
	{object V821 = (V756);
	VMR66(V821)}}}
	goto T1435;
T1435:;
	{object V822 = Cnil;
	VMR66(V822)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FILL-CACHE-FROM-CACHE-P	*/

static object LI70(V827,V828,V829,V830)

object V827;object V828;object V829;long V830;
{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	{long V832;
	{long V833;
	{long V835;
	V835= V830;
	{long V836;
	V836= V835;
	V837= (long)STREF(unsigned short,V828,4);
	if((V837)==(1)){
	goto T1588;}
	goto T1584;
	goto T1588;
T1588:;
	if(!((V836)==(0))){
	goto T1584;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1584;
T1584:;
	V838= (long)STREF(unsigned short,V828,4);
	if(!((V838)==(1))){
	goto T1593;}
	V839= (long)STREF(unsigned short,V828,32);
	V834= CMPmake_fixnum((long)(V835)*(V839));
	goto T1582;
	goto T1593;
T1593:;
	V840= (long)STREF(unsigned short,V828,32);
	V834= CMPmake_fixnum((long)((long)(V835)*(V840))+1);}
	goto T1582;
T1582:;
	V833= fix((VFUN_NARGS=3,(*(LnkLI210))((V828),V834,(V829))));
	V841= (long)STREF(unsigned short,V828,4);
	if(!((V841)==(1))){
	goto T1599;}
	base[0]= CMPmake_fixnum(V833);
	base[1]= CMPmake_fixnum((long)STREF(unsigned short,V828,32));
	vs_top=(vs_base=base+0)+2;
	Lfloor();
	vs_top=sup;
	V832= fix(vs_base[0]);
	goto T1580;
	goto T1599;
T1599:;
	base[0]= CMPmake_fixnum((long)(V833)-1);
	base[1]= CMPmake_fixnum((long)STREF(unsigned short,V828,32));
	vs_top=(vs_base=base+0)+2;
	Lfloor();
	vs_top=sup;
	V832= fix(vs_base[0]);}
	goto T1580;
T1580:;
	{object V842;
	object V843;
	base[0]= CMPmake_fixnum(V832);
	base[1]= (V828);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk212)();
	if(vs_base>=vs_top){vs_top=sup;goto T1609;}
	V842= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1610;}
	V843= vs_base[0];
	vs_top=sup;
	goto T1611;
	goto T1609;
T1609:;
	V842= Cnil;
	goto T1610;
T1610:;
	V843= Cnil;
	goto T1611;
T1611:;
	if(((V827))!=Cnil){
	goto T1612;}
	if(((V843))==Cnil){
	goto T1613;}
	goto T1612;
T1612:;
	if(((V843))!=Cnil){
	goto T1617;}
	{object V844;
	object V846;
	{long V848;
	V848= fix((V842));
	{long V849;
	V849= V848;
	V850= (long)STREF(unsigned short,V828,4);
	if((V850)==(1)){
	goto T1627;}
	goto T1623;
	goto T1627;
T1627:;
	if(!((V849)==(0))){
	goto T1623;}}
	base[2]= VV[160];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1623;
T1623:;
	{long V851;
	{long V852;
	V852= V848;
	{long V853;
	V853= V852;
	V854= (long)STREF(unsigned short,V828,4);
	if((V854)==(1)){
	goto T1637;}
	goto T1633;
	goto T1637;
T1637:;
	if(!((V853)==(0))){
	goto T1633;}}
	base[2]= VV[156];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1633;
T1633:;
	V855= (long)STREF(unsigned short,V828,4);
	if(!((V855)==(1))){
	goto T1642;}
	V856= (long)STREF(unsigned short,V828,32);
	V851= (long)(V852)*(V856);
	goto T1631;
	goto T1642;
T1642:;
	V857= (long)STREF(unsigned short,V828,32);
	V851= (long)((long)(V852)*(V857))+1;}
	goto T1631;
T1631:;
	V858= (long)STREF(unsigned short,V828,4);
	if(!((V858)==(1))){
	goto T1648;}
	V859= STREF(object,V828,40);
	V847= (V859)->v.v_self[V851];
	goto T1621;
	goto T1648;
T1648:;
	{register object V860;
	object V861;
	base[2]= CMPmake_fixnum((long)STREF(unsigned short,V828,4));
	vs_top=(vs_base=base+2)+1;
	Lmake_list();
	vs_top=sup;
	V860= vs_base[0];
	V861= STREF(object,V828,40);
	{long V862;
	register long V863;
	V862= (long)STREF(unsigned short,V828,4);
	V863= 0;
	goto T1658;
T1658:;
	if(!((V863)>=(V862))){
	goto T1659;}
	V847= (V860);
	goto T1621;
	goto T1659;
T1659:;
	{register object V864;
	register object V865;
	register object V866;
	V864= CMPmake_fixnum(V863);
	V865= (V860);
	V866= ((V861))->v.v_self[(long)(V851)+(V863)];
	(nthcdr(fix((V864)),(V865)))->c.c_car = (V866);
	(void)(nthcdr(fix((V864)),(V865)));}
	V863= (long)(V863)+1;
	goto T1658;}}}}
	goto T1621;
T1621:;
	{long V868;
	V868= fix((V842));
	{long V869;
	V869= V868;
	V870= (long)STREF(unsigned short,V828,4);
	if((V870)==(1)){
	goto T1676;}
	goto T1672;
	goto T1676;
T1676:;
	if(!((V869)==(0))){
	goto T1672;}}
	base[2]= VV[161];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1672;
T1672:;
	{long V871;
	{long V872;
	V872= V868;
	{long V873;
	V873= V872;
	V874= (long)STREF(unsigned short,V828,4);
	if((V874)==(1)){
	goto T1686;}
	goto T1682;
	goto T1686;
T1686:;
	if(!((V873)==(0))){
	goto T1682;}}
	base[2]= VV[156];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1682;
T1682:;
	V875= (long)STREF(unsigned short,V828,4);
	if(!((V875)==(1))){
	goto T1691;}
	V876= (long)STREF(unsigned short,V828,32);
	V871= (long)(V872)*(V876);
	goto T1680;
	goto T1691;
T1691:;
	V877= (long)STREF(unsigned short,V828,32);
	V871= (long)((long)(V872)*(V877))+1;}
	goto T1680;
T1680:;
	if((STREF(object,V828,8))!=Cnil){
	goto T1696;}
	V867= Cnil;
	goto T1670;
	goto T1696;
T1696:;
	V878= STREF(object,V828,40);
	V879= (long)STREF(unsigned short,V828,4);
	V867= (V878)->v.v_self[(long)(V871)+(V879)];}}
	goto T1670;
T1670:;
	V844= make_cons(V847,V867);
	V846= make_cons((V844),STREF(object,V828,44));
	V880= Ct;
	STSET(object,V828,44, (V846));
	(void)((V846));}
	goto T1617;
T1617:;
	{object V881;
	object V882;
	long V883;
	V881= STREF(object,(V829),40);
	V882= STREF(object,V828,40);
	V883= fix((V842));
	{long V884;
	V884= V883;
	V885= (long)STREF(unsigned short,V828,4);
	if((V885)==(1)){
	goto T1709;}
	goto T1706;
	goto T1709;
T1709:;
	if(!((V884)==(0))){
	goto T1706;}}
	base[0]= VV[163];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1704;
	goto T1706;
T1706:;
	{long V886;
	long V887;
	{long V888;
	V888= V830;
	{long V889;
	V889= V888;
	V890= (long)STREF(unsigned short,V828,4);
	if((V890)==(1)){
	goto T1719;}
	goto T1715;
	goto T1719;
T1719:;
	if(!((V889)==(0))){
	goto T1715;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1715;
T1715:;
	V891= (long)STREF(unsigned short,V828,4);
	if(!((V891)==(1))){
	goto T1724;}
	V892= (long)STREF(unsigned short,V828,32);
	V886= (long)(V888)*(V892);
	goto T1713;
	goto T1724;
T1724:;
	V893= (long)STREF(unsigned short,V828,32);
	V886= (long)((long)(V888)*(V893))+1;}
	goto T1713;
T1713:;
	{long V894;
	V894= V883;
	{long V895;
	V895= V894;
	V896= (long)STREF(unsigned short,V828,4);
	if((V896)==(1)){
	goto T1735;}
	goto T1731;
	goto T1735;
T1735:;
	if(!((V895)==(0))){
	goto T1731;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1731;
T1731:;
	V897= (long)STREF(unsigned short,V828,4);
	if(!((V897)==(1))){
	goto T1740;}
	V898= (long)STREF(unsigned short,V828,32);
	V887= (long)(V894)*(V898);
	goto T1729;
	goto T1740;
T1740:;
	V899= (long)STREF(unsigned short,V828,32);
	V887= (long)((long)(V894)*(V899))+1;}
	goto T1729;
T1729:;
	{long V902;
	register long V903;
	V902= (long)STREF(unsigned short,V828,32);
	V903= 0;
	goto T1749;
T1749:;
	if(!((V903)>=(V902))){
	goto T1750;}
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	goto T1745;
	goto T1750;
T1750:;
	(void)(((V882))->v.v_self[(long)(V887)+(V903)]= (((V881))->v.v_self[(long)(V886)+(V903)]));
	V903= (long)(V903)+1;
	goto T1749;}
	goto T1745;
T1745:;
	{object *V901=vs_top;object *V900=vs_base; vs_base=V901;
	{register object *base0=base;
	{register object *base=V901;
	register object *sup=vs_base+VM68;
	base0[0]=base0[0];
	base[0]=base[0];
	vs_check;
	vs_top=sup;
	{long V904;
	V904= fix(((V882))->v.v_self[0]);
	if(!((V904)==(2147483647))){
	goto T1761;}
	V905= small_fixnum(1);
	goto T1759;
	goto T1761;
T1761:;
	V905= CMPmake_fixnum((long)(V904)+1);
	goto T1759;
T1759:;
	(void)(((V882))->v.v_self[0]= (V905));}
	}}
	vs_base=V900;vs_top=V901;}
	vs_top=sup;}
	goto T1704;
T1704:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1763;}
	(void)((*(LnkLI154))((V828)));
	goto T1763;
T1763:;
	{object V906 = (V828);
	VMR67(V906)}}
	goto T1613;
T1613:;
	{object V907 = Cnil;
	VMR67(V907)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADJUST-CACHE	*/

static object LI74(V912,V913,V914,V915)

object V912;object V913;object V914;object V915;
{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	base[0]= (V912);
	{register object V916;
	V916= base[0];
	V917= CMPmake_fixnum((long)STREF(fixnum,(V916),12));
	V918= CMPmake_fixnum((long)STREF(unsigned char,(V916),16));
	base[1]= (VFUN_NARGS=3,(*(LnkLI213))(base[0],V917,V918));
	{object V919;
	V919= CMPmake_fixnum((long)STREF(unsigned char,base[1],16));
	goto T1771;
T1771:;
	if(((V919))!=Cnil){
	goto T1772;}
	(void)((*(LnkLI214))(base[1]));
	{object V920 = Cnil;
	VMR69(V920)}
	goto T1772;
T1772:;
	{long V921;
	V921= fix((V919));
	V922= Ct;
	STSET(unsigned char,base[1],16, V921);
	(void)(V921);
	{long V923;
	register long V924;
	V923= (long)STREF(fixnum,(V916),12);
	V924= 0;
	goto T1787;
T1787:;
	if(!((V924)>=(V923))){
	goto T1788;}
	goto T1783;
	goto T1788;
T1788:;
	{long V925;
	V925= V924;
	V926= (long)STREF(unsigned short,(V916),4);
	if((V926)==(1)){
	goto T1796;}
	goto T1794;
	goto T1796;
T1796:;
	if((V925)==(0)){
	goto T1791;}}
	goto T1794;
T1794:;
	{long V927;
	V927= V924;
	{long V929;
	V929= V927;
	V930= (long)STREF(unsigned short,(V916),4);
	if((V930)==(1)){
	goto T1805;}
	goto T1801;
	goto T1805;
T1805:;
	if(!((V929)==(0))){
	goto T1801;}}
	base[2]= VV[159];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1801;
T1801:;
	{long V931;
	register object V932;
	{long V933;
	V933= V927;
	{long V934;
	V934= V933;
	V935= (long)STREF(unsigned short,(V916),4);
	if((V935)==(1)){
	goto T1815;}
	goto T1811;
	goto T1815;
T1815:;
	if(!((V934)==(0))){
	goto T1811;}}
	base[2]= VV[156];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1811;
T1811:;
	V936= (long)STREF(unsigned short,(V916),4);
	if(!((V936)==(1))){
	goto T1820;}
	V937= (long)STREF(unsigned short,(V916),32);
	V931= (long)(V933)*(V937);
	goto T1809;
	goto T1820;
T1820:;
	V938= (long)STREF(unsigned short,(V916),32);
	V931= (long)((long)(V933)*(V938))+1;}
	goto T1809;
T1809:;
	V932= V913;
	{object V939;
	object V940;
	V939= STREF(object,(V916),40);
	V940= (((V932))==Cnil?Ct:Cnil);
	{long V941;
	register long V942;
	V941= (long)STREF(unsigned short,(V916),4);
	V942= 0;
	goto T1830;
T1830:;
	if(!((V942)>=(V941))){
	goto T1831;}
	if(((V940))==Cnil){
	goto T1791;}
	goto T1799;
	goto T1831;
T1831:;
	{register object V943;
	V943= ((V939))->v.v_self[(long)(V931)+(V942)];
	if(((V943))==Cnil){
	goto T1837;}
	if(!((((((V943))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1836;}
	goto T1837;
T1837:;
	goto T1791;
	goto T1836;
T1836:;
	if(((V932))==Cnil){
	goto T1841;}
	if(!(type_of((V932))==t_cons)){
	goto T1847;}
	{object V945;
	V945= CMPcar((V932));
	V932= CMPcdr((V932));
	V944= (V945);
	goto T1845;}
	goto T1847;
T1847:;
	V944= (V932);
	goto T1845;
T1845:;
	if(((V943))==(V944)){
	goto T1834;}
	goto T1841;
T1841:;
	V940= Ct;}
	goto T1834;
T1834:;
	V942= (long)(V942)+1;
	goto T1830;}}}}
	goto T1799;
T1799:;
	base[2]= CMPmake_fixnum(V924);
	vs_top=(vs_base=base+2)+1;
	L75(base);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1791;}
	goto T1781;
	goto T1791;
T1791:;
	V924= (long)(V924)+1;
	goto T1787;}
	goto T1783;
T1783:;
	{register object V946;
	object V947;
	V946= STREF(object,base[0],44);
	V947= CMPcar((V946));
	goto T1867;
T1867:;
	if(!(((V946))==Cnil)){
	goto T1868;}
	goto T1863;
	goto T1868;
T1868:;
	base[4]= CMPcar((V947));
	base[5]= CMPcdr((V947));
	vs_top=(vs_base=base+4)+2;
	L76(base);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1872;}
	goto T1781;
	goto T1872;
T1872:;
	V946= CMPcdr((V946));
	V947= CMPcar((V946));
	goto T1867;}
	goto T1863;
T1863:;
	base[2]= (V913);
	base[3]= (V914);
	vs_top=(vs_base=base+2)+2;
	L76(base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1781;}
	if(((V915))==Cnil){
	goto T1885;}
	(void)((*(LnkLI214))(base[0]));
	goto T1885;
T1885:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1888;}
	(void)((*(LnkLI154))(base[1]));
	goto T1888;
T1888:;
	{object V948 = base[1];
	VMR69(V948)}
	goto T1781;
T1781:;
	(void)((*(LnkLI185))(STREF(object,base[1],40)));}
	V919= (*(LnkLI36))((V919));
	goto T1771;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXPAND-CACHE	*/

static object LI81(V953,V954,V955,V956)

object V953;object V954;object V955;object V956;
{	 VMB70 VMS70 VMV70
	goto TTL;
TTL:;
	base[0]= (V953);
	base[1]= base[0];
	V957= CMPmake_fixnum((long)STREF(fixnum,base[1],12));
	V958= number_times(V957,small_fixnum(2));
	base[2]= (VFUN_NARGS=2,(*(LnkLI213))(base[0],/* INLINE-ARGS */V958));
	{long V959;
	register long V960;
	V959= (long)STREF(fixnum,base[1],12);
	V960= 0;
	goto T1900;
T1900:;
	if(!((V960)>=(V959))){
	goto T1901;}
	goto T1896;
	goto T1901;
T1901:;
	{long V961;
	V961= V960;
	V962= (long)STREF(unsigned short,base[1],4);
	if((V962)==(1)){
	goto T1909;}
	goto T1907;
	goto T1909;
T1909:;
	if((V961)==(0)){
	goto T1904;}}
	goto T1907;
T1907:;
	{long V963;
	V963= V960;
	{long V965;
	V965= V963;
	V966= (long)STREF(unsigned short,base[1],4);
	if((V966)==(1)){
	goto T1918;}
	goto T1914;
	goto T1918;
T1918:;
	if(!((V965)==(0))){
	goto T1914;}}
	base[3]= VV[159];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T1914;
T1914:;
	{long V967;
	register object V968;
	{long V969;
	V969= V963;
	{long V970;
	V970= V969;
	V971= (long)STREF(unsigned short,base[1],4);
	if((V971)==(1)){
	goto T1928;}
	goto T1924;
	goto T1928;
T1928:;
	if(!((V970)==(0))){
	goto T1924;}}
	base[3]= VV[156];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T1924;
T1924:;
	V972= (long)STREF(unsigned short,base[1],4);
	if(!((V972)==(1))){
	goto T1933;}
	V973= (long)STREF(unsigned short,base[1],32);
	V967= (long)(V969)*(V973);
	goto T1922;
	goto T1933;
T1933:;
	V974= (long)STREF(unsigned short,base[1],32);
	V967= (long)((long)(V969)*(V974))+1;}
	goto T1922;
T1922:;
	V968= V954;
	{object V975;
	object V976;
	V975= STREF(object,base[1],40);
	V976= (((V968))==Cnil?Ct:Cnil);
	{long V977;
	register long V978;
	V977= (long)STREF(unsigned short,base[1],4);
	V978= 0;
	goto T1943;
T1943:;
	if(!((V978)>=(V977))){
	goto T1944;}
	if(((V976))==Cnil){
	goto T1904;}
	goto T1912;
	goto T1944;
T1944:;
	{register object V979;
	V979= ((V975))->v.v_self[(long)(V967)+(V978)];
	if(((V979))==Cnil){
	goto T1950;}
	if(!((((((V979))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1949;}
	goto T1950;
T1950:;
	goto T1904;
	goto T1949;
T1949:;
	if(((V968))==Cnil){
	goto T1954;}
	if(!(type_of((V968))==t_cons)){
	goto T1960;}
	{object V981;
	V981= CMPcar((V968));
	V968= CMPcdr((V968));
	V980= (V981);
	goto T1958;}
	goto T1960;
T1960:;
	V980= (V968);
	goto T1958;
T1958:;
	if(((V979))==(V980)){
	goto T1947;}
	goto T1954;
T1954:;
	V976= Ct;}
	goto T1947;
T1947:;
	V978= (long)(V978)+1;
	goto T1943;}}}}
	goto T1912;
T1912:;
	base[3]= CMPmake_fixnum(V960);
	vs_top=(vs_base=base+3)+1;
	L82(base);
	vs_top=sup;
	goto T1904;
T1904:;
	V960= (long)(V960)+1;
	goto T1900;}
	goto T1896;
T1896:;
	{object V982;
	register object V983;
	V982= STREF(object,base[0],44);
	V983= CMPcar((V982));
	goto T1977;
T1977:;
	if(!(((V982))==Cnil)){
	goto T1978;}
	goto T1973;
	goto T1978;
T1978:;
	base[5]= CMPcar((V983));
	base[6]= CMPcdr((V983));
	vs_top=(vs_base=base+5)+2;
	L84(base);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1982;}
	base[5]= CMPcar((V983));
	base[6]= CMPcdr((V983));
	vs_top=(vs_base=base+5)+2;
	L83(base);
	vs_top=sup;
	goto T1982;
T1982:;
	V982= CMPcdr((V982));
	V983= CMPcar((V982));
	goto T1977;}
	goto T1973;
T1973:;
	base[3]= (V954);
	base[4]= (V955);
	vs_top=(vs_base=base+3)+2;
	L84(base);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1994;}
	base[3]= (V954);
	base[4]= (V955);
	vs_top=(vs_base=base+3)+2;
	L83(base);
	vs_top=sup;
	goto T1994;
T1994:;
	if(((V956))==Cnil){
	goto T2001;}
	(void)((*(LnkLI214))(base[0]));
	goto T2001;
T2001:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T2004;}
	(void)((*(LnkLI154))(base[2]));
	goto T2004;
T2004:;
	{object V984 = base[2];
	VMR70(V984)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for FIND-FREE-CACHE-LINE	*/

static void L85()
{register object *base=vs_base;
	register object *sup=base+VM71; VC71
	vs_check;
	{long V985;
	object V986;
	object V987;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V985=fix(base[0]);
	V986=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2007;}
	V987=(base[2]);
	vs_top=sup;
	goto T2008;
	goto T2007;
T2007:;
	V987= Cnil;
	goto T2008;
T2008:;
	{register object V988;
	V988= (V986);
	{long V989;
	V989= V985;
	V990= (long)STREF(unsigned short,(V988),4);
	if((V990)==(1)){
	goto T2014;}
	goto T2010;
	goto T2014;
T2014:;
	if(!((V989)==(0))){
	goto T2010;}}
	{long V991;
	V991= V985;
	V992= (long)STREF(fixnum,(V988),12);
	if(!((V991)==((long)(V992)-1))){
	goto T2020;}
	{long V993;
	V993= 0;
	V994= (long)STREF(unsigned short,(V988),4);
	if((V994)==(1)){
	goto T2027;}
	goto T2024;
	goto T2027;
T2027:;
	if(!((V993)==(0))){
	goto T2024;}}
	V985= 1;
	goto T2017;
	goto T2024;
T2024:;
	V985= 0;
	goto T2017;
	goto T2020;
T2020:;
	V985= (long)(V991)+1;}
	goto T2017;
T2017:;
	goto T2010;
T2010:;
	{long V995;
	object V996;
	register object V997;
	long V998;
	long V999;
	V1000= STREF(object,(V988),20);
	V1001= CMPmake_fixnum((long)STREF(fixnum,(V988),12));
	V995= fix((
	V1002 = V1000,
	(type_of(V1002) == t_sfun ?(*((V1002)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V1002)==t_vfun) ?
	(*((V1002)->sfn.sfn_self)):
	(fcall.fun=(V1002),fcalln))(V1001)));
	V998= V985;
	V999= V985;
	V996= Cnil;
	V997= Cnil;
	goto T2037;
T2037:;
	{register long V1003;
	long V1004;
	V1003= V999;
	{long V1005;
	long V1006;
	V1005= V998;
	V1006= V999;
	{long V1007;
	V1007= (long)(V1006)-(V1005);
	if(!((V1007)<0)){
	goto T2044;}
	V1008= (long)STREF(fixnum,(V988),12);
	V1007= (long)(V1007)+(V1008);
	{long V1009;
	V1009= 0;
	V1010= (long)STREF(unsigned short,(V988),4);
	if((V1010)==(1)){
	goto T2053;}
	goto T2044;
	goto T2053;
T2053:;
	if(!((V1009)==(0))){
	goto T2044;}}
	V1007= (long)(V1007)-1;
	goto T2044;
T2044:;
	V1004= V1007;}}
	goto T2058;
T2058:;
	{long V1011;
	V1011= V1003;
	{long V1013;
	V1013= V1011;
	V1014= (long)STREF(unsigned short,(V988),4);
	if((V1014)==(1)){
	goto T2069;}
	goto T2065;
	goto T2069;
T2069:;
	if(!((V1013)==(0))){
	goto T2065;}}
	base[3]= VV[159];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2065;
T2065:;
	{long V1015;
	register object V1016;
	{long V1017;
	V1017= V1011;
	{long V1018;
	V1018= V1017;
	V1019= (long)STREF(unsigned short,(V988),4);
	if((V1019)==(1)){
	goto T2079;}
	goto T2075;
	goto T2079;
T2079:;
	if(!((V1018)==(0))){
	goto T2075;}}
	base[3]= VV[156];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2075;
T2075:;
	V1020= (long)STREF(unsigned short,(V988),4);
	if(!((V1020)==(1))){
	goto T2084;}
	V1021= (long)STREF(unsigned short,(V988),32);
	V1015= (long)(V1017)*(V1021);
	goto T2073;
	goto T2084;
T2084:;
	V1022= (long)STREF(unsigned short,(V988),32);
	V1015= (long)((long)(V1017)*(V1022))+1;}
	goto T2073;
T2073:;
	V1016= V987;
	{object V1023;
	object V1024;
	V1023= STREF(object,(V988),40);
	V1024= (((V1016))==Cnil?Ct:Cnil);
	{long V1025;
	register long V1026;
	V1025= (long)STREF(unsigned short,(V988),4);
	V1026= 0;
	goto T2094;
T2094:;
	if(!((V1026)>=(V1025))){
	goto T2095;}
	if(((V1024))!=Cnil){
	goto T2061;}
	goto T2063;
	goto T2095;
T2095:;
	{object V1027;
	V1027= ((V1023))->v.v_self[(long)(V1015)+(V1026)];
	if(((V1027))==Cnil){
	goto T2101;}
	if(!((((((V1027))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T2100;}
	goto T2101;
T2101:;
	goto T2063;
	goto T2100;
T2100:;
	if(((V1016))==Cnil){
	goto T2105;}
	if(!(type_of((V1016))==t_cons)){
	goto T2111;}
	{object V1029;
	V1029= CMPcar((V1016));
	V1016= CMPcdr((V1016));
	V1028= (V1029);
	goto T2109;}
	goto T2111;
T2111:;
	V1028= (V1016);
	goto T2109;
T2109:;
	if(((V1027))==(V1028)){
	goto T2098;}
	goto T2105;
T2105:;
	V1024= Ct;}
	goto T2098;
T2098:;
	V1026= (long)(V1026)+1;
	goto T2094;}}}}
	goto T2063;
T2063:;
	{object V1030;
	V1030= CMPmake_fixnum(V1003);
	V997= make_cons((V1030),(V997));}
	goto T2035;
	goto T2061;
T2061:;
	if(((V996))==Cnil){
	goto T2123;}
	if(!((V1003)>=(V985))){
	goto T2123;}
	base[3]= CMPmake_fixnum(V985);
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T2123;
T2123:;
	{object V1031;
	{long V1032;
	long V1033;
	{long V1034;
	V1034= V1003;
	{long V1035;
	{long V1036;
	V1036= V1034;
	V1037= (V988);
	{long V1039;
	V1039= V1036;
	{long V1040;
	V1040= V1039;
	V1041= (long)STREF(unsigned short,(V988),4);
	if((V1041)==(1)){
	goto T2143;}
	goto T2139;
	goto T2143;
T2143:;
	if(!((V1040)==(0))){
	goto T2139;}}
	base[3]= VV[156];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2139;
T2139:;
	V1042= (long)STREF(unsigned short,(V988),4);
	if(!((V1042)==(1))){
	goto T2148;}
	V1043= (long)STREF(unsigned short,(V988),32);
	V1038= CMPmake_fixnum((long)(V1039)*(V1043));
	goto T2137;
	goto T2148;
T2148:;
	V1044= (long)STREF(unsigned short,(V988),32);
	V1038= CMPmake_fixnum((long)((long)(V1039)*(V1044))+1);}
	goto T2137;
T2137:;
	V1035= fix((VFUN_NARGS=2,(*(LnkLI210))(V1037,V1038)));}
	V1045= (long)STREF(unsigned short,(V988),4);
	if(!((V1045)==(1))){
	goto T2154;}
	base[3]= CMPmake_fixnum(V1035);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V988),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V1032= fix(vs_base[0]);
	goto T2132;
	goto T2154;
T2154:;
	base[3]= CMPmake_fixnum((long)(V1035)-1);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V988),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V1032= fix(vs_base[0]);}}
	goto T2132;
T2132:;
	V1033= V1003;
	{register long V1046;
	V1046= (long)(V1033)-(V1032);
	if(!((V1046)<0)){
	goto T2163;}
	V1047= (long)STREF(fixnum,(V988),12);
	V1046= (long)(V1046)+(V1047);
	{long V1048;
	V1048= 0;
	V1049= (long)STREF(unsigned short,(V988),4);
	if((V1049)==(1)){
	goto T2172;}
	goto T2163;
	goto T2172;
T2172:;
	if(!((V1048)==(0))){
	goto T2163;}}
	V1046= (long)(V1046)-1;
	goto T2163;
T2163:;
	V1031= CMPmake_fixnum(V1046);}}
	V1050 = CMPmake_fixnum(V995);
	if(!(number_compare((V1031),V1050)>=0)){
	goto T2176;}
	base[3]= CMPmake_fixnum(V985);
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T2176;
T2176:;
	if(!((V1004)==(V995))){
	goto T2184;}
	goto T2182;
	goto T2184;
T2184:;
	V1051 = CMPmake_fixnum(V1004);
	if(!(number_compare(V1051,(V1031))==0)){
	goto T2187;}
	base[3]= small_fixnum(2);
	vs_top=(vs_base=base+3)+1;
	Lrandom();
	vs_top=sup;
	V1052= vs_base[0];
	if(!(number_compare(small_fixnum(0),V1052)==0)){
	goto T2130;}
	goto T2182;
	goto T2187;
T2187:;
	V1053 = CMPmake_fixnum(V1004);
	if(!(number_compare(V1053,(V1031))>0)){
	goto T2192;}
	goto T2182;
	goto T2192;
T2192:;
	goto T2130;
	goto T2182;
T2182:;
	V1054= (long)STREF(fixnum,(V988),12);
	if(!((V1003)==((long)(V1054)-1))){
	goto T2194;}
	V996= Ct;
	goto T2194;
T2194:;
	{long V1055;
	V1055= V1003;
	{long V1056;
	{long V1057;
	V1057= V1055;
	V1058= (V988);
	{long V1060;
	V1060= V1057;
	{long V1061;
	V1061= V1060;
	V1062= (long)STREF(unsigned short,(V988),4);
	if((V1062)==(1)){
	goto T2211;}
	goto T2207;
	goto T2211;
T2211:;
	if(!((V1061)==(0))){
	goto T2207;}}
	base[3]= VV[156];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2207;
T2207:;
	V1063= (long)STREF(unsigned short,(V988),4);
	if(!((V1063)==(1))){
	goto T2216;}
	V1064= (long)STREF(unsigned short,(V988),32);
	V1059= CMPmake_fixnum((long)(V1060)*(V1064));
	goto T2205;
	goto T2216;
T2216:;
	V1065= (long)STREF(unsigned short,(V988),32);
	V1059= CMPmake_fixnum((long)((long)(V1060)*(V1065))+1);}
	goto T2205;
T2205:;
	V1056= fix((VFUN_NARGS=2,(*(LnkLI210))(V1058,V1059)));}
	V1066= (long)STREF(unsigned short,(V988),4);
	if(!((V1066)==(1))){
	goto T2222;}
	base[3]= CMPmake_fixnum(V1056);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V988),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V998= fix(vs_base[0]);
	goto T2200;
	goto T2222;
T2222:;
	base[3]= CMPmake_fixnum((long)(V1056)-1);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V988),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V998= fix(vs_base[0]);}}
	goto T2200;
T2200:;
	{long V1067;
	V1067= V1003;
	V1068= (long)STREF(fixnum,(V988),12);
	if(!((V1067)==((long)(V1068)-1))){
	goto T2233;}
	{long V1069;
	V1069= 0;
	V1070= (long)STREF(unsigned short,(V988),4);
	if((V1070)==(1)){
	goto T2240;}
	goto T2237;
	goto T2240;
T2240:;
	if(!((V1069)==(0))){
	goto T2237;}}
	V999= 1;
	goto T2230;
	goto T2237;
T2237:;
	V999= 0;
	goto T2230;
	goto T2233;
T2233:;
	V999= (long)(V1067)+1;}
	goto T2230;
T2230:;
	{object V1071;
	V1071= CMPmake_fixnum(V1003);
	V997= make_cons((V1071),(V997));}
	goto T2038;}
	goto T2130;
T2130:;
	V1072= (long)STREF(fixnum,(V988),12);
	if(!((V1003)==((long)(V1072)-1))){
	goto T2246;}
	V996= Ct;
	goto T2246;
T2246:;
	{long V1073;
	V1073= V1003;
	V1074= (long)STREF(fixnum,(V988),12);
	if(!((V1073)==((long)(V1074)-1))){
	goto T2256;}
	{long V1075;
	V1075= 0;
	V1076= (long)STREF(unsigned short,(V988),4);
	if((V1076)==(1)){
	goto T2263;}
	goto T2260;
	goto T2263;
T2263:;
	if(!((V1075)==(0))){
	goto T2260;}}
	V1003= 1;
	goto T2253;
	goto T2260;
T2260:;
	V1003= 0;
	goto T2253;
	goto T2256;
T2256:;
	V1003= (long)(V1073)+1;}
	goto T2253;
T2253:;
	V1004= (long)(V1004)+1;
	goto T2058;}
	goto T2038;
T2038:;
	goto T2037;
	goto T2035;
T2035:;
	goto T2271;
T2271:;
	if((CMPcdr((V997)))!=Cnil){
	goto T2273;}
	goto T2269;
	goto T2273;
T2273:;
	{long V1077;
	long V1078;
	{object V1079;
	V1079= CMPcar((V997));
	V997= CMPcdr((V997));
	V1077= fix((V1079));}
	V1078= fix(CMPcar((V997)));
	{long V1080;
	long V1081;
	object V1082;
	{long V1083;
	V1083= V1078;
	{long V1084;
	V1084= V1083;
	V1085= (long)STREF(unsigned short,(V988),4);
	if((V1085)==(1)){
	goto T2287;}
	goto T2283;
	goto T2287;
T2287:;
	if(!((V1084)==(0))){
	goto T2283;}}
	base[3]= VV[156];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2283;
T2283:;
	V1086= (long)STREF(unsigned short,(V988),4);
	if(!((V1086)==(1))){
	goto T2292;}
	V1087= (long)STREF(unsigned short,(V988),32);
	V1080= (long)(V1083)*(V1087);
	goto T2281;
	goto T2292;
T2292:;
	V1088= (long)STREF(unsigned short,(V988),32);
	V1080= (long)((long)(V1083)*(V1088))+1;}
	goto T2281;
T2281:;
	{long V1089;
	V1089= V1077;
	{long V1090;
	V1090= V1089;
	V1091= (long)STREF(unsigned short,(V988),4);
	if((V1091)==(1)){
	goto T2303;}
	goto T2299;
	goto T2303;
T2303:;
	if(!((V1090)==(0))){
	goto T2299;}}
	base[3]= VV[156];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2299;
T2299:;
	V1092= (long)STREF(unsigned short,(V988),4);
	if(!((V1092)==(1))){
	goto T2308;}
	V1093= (long)STREF(unsigned short,(V988),32);
	V1081= (long)(V1089)*(V1093);
	goto T2297;
	goto T2308;
T2308:;
	V1094= (long)STREF(unsigned short,(V988),32);
	V1081= (long)((long)(V1089)*(V1094))+1;}
	goto T2297;
T2297:;
	V1082= STREF(object,(V988),40);
	{long V1097;
	long V1098;
	V1097= (long)STREF(unsigned short,(V988),32);
	V1098= 0;
	goto T2318;
T2318:;
	if(!((V1098)>=(V1097))){
	goto T2319;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	goto T2314;
	goto T2319;
T2319:;
	(void)(((V1082))->v.v_self[(long)(V1081)+(V1098)]= (((V1082))->v.v_self[(long)(V1080)+(V1098)]));
	(void)(((V1082))->v.v_self[(long)(V1080)+(V1098)]= (Cnil));
	V1098= (long)(V1098)+1;
	goto T2318;}
	goto T2314;
T2314:;
	{object *V1096=vs_top;object *V1095=vs_base; vs_base=V1096;
	{register object *base0=base;
	{register object *base=V1096;
	register object *sup=vs_base+VM72;
	base0[0]=base0[0];
	base[0]=base[0];
	vs_check;
	vs_top=sup;
	{long V1099;
	V1099= fix(((V1082))->v.v_self[0]);
	if(!((V1099)==(2147483647))){
	goto T2331;}
	V1100= small_fixnum(1);
	goto T2329;
	goto T2331;
T2331:;
	V1100= CMPmake_fixnum((long)(V1099)+1);
	goto T2329;
T2329:;
	(void)(((V1082))->v.v_self[0]= (V1100));}
	}}
	vs_base=V1095;vs_top=V1096;}
	vs_top=sup;}}
	goto T2271;
	goto T2269;
T2269:;
	base[3]= CMPcar((V997));
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	local entry for function DEFAULT-LIMIT-FN	*/

static object LI86(V1102)

object V1102;
{	 VMB73 VMS73 VMV73
	goto TTL;
TTL:;
	{object V1103= (V1102);
	if(!eql(V1103,VV[164])
	&& !eql(V1103,VV[165])
	&& !eql(V1103,VV[166]))goto T2336;
	{long V1104 = 1;
	VMR73((object)V1104)}
	goto T2336;
T2336:;
	if(!eql(V1103,VV[167])
	&& !eql(V1103,VV[168]))goto T2337;
	{long V1105 = 4;
	VMR73((object)V1105)}
	goto T2337;
T2337:;
	{long V1106 = 6;
	VMR73((object)V1106)}}
}
/*	local entry for function CACHES-TO-ALLOCATE	*/

static object LI87()

{	 VMB74 VMS74 VMV74
	goto TTL;
TTL:;
	base[1]=MMcons(Cnil,Cnil);
	base[2]= 
	make_cclosure_new(LC89,Cnil,base[1],Cdata);
	base[3]= (VV[76]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lmaphash();
	vs_top=sup;
	base[0]= (base[1]->c.c_car);
	base[1]= (VV[215]->s.s_gfdef);
	base[2]= VV[27];
	base[3]= (VV[216]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk189)();
	vs_top=sup;
	{object V1107 = vs_base[0];
	VMR74(V1107)}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC89(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM75; VC75
	vs_check;
	{object V1108;
	object V1109;
	check_arg(2);
	V1108=(base[0]);
	V1109=(base[1]);
	vs_top=sup;
	{object V1110;
	V1110= list(2,CMPcar((V1109)),(V1108));
	(base0[0]->c.c_car)= make_cons((V1110),(base0[0]->c.c_car));
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
	{object V1111;
	object V1112;
	check_arg(2);
	V1111=(base[0]);
	V1112=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI206))(Cnil,base0[2],(V1111),(V1112));
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
	{object V1113;
	object V1114;
	check_arg(2);
	V1113=(base[0]);
	V1114=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;{object V1115;
	V1115= (*(LnkLI208))(base0[2],(V1113),(V1114),Ct);
	if(V1115==Cnil)goto T2348;
	base0[2]= V1115;
	goto T2347;
	goto T2348;
T2348:;}
	base0[2]= (*(LnkLI206))(Ct,base0[2],(V1113),(V1114));
	goto T2347;
T2347:;
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
	{object V1116;
	check_arg(1);
	V1116=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((*(LnkLI217))(Cnil,base0[2],base0[0],fix((V1116))))!=Cnil){
	goto T2351;}
	{long V1117;
	V1117= fix((V1116));
	{long V1118;
	V1118= V1117;
	V1119= (long)STREF(unsigned short,base0[1],4);
	if((V1119)==(1)){
	goto T2359;}
	goto T2355;
	goto T2359;
T2359:;
	if(!((V1118)==(0))){
	goto T2355;}}
	base[2]= VV[160];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T2355;
T2355:;
	{long V1120;
	{long V1121;
	V1121= V1117;
	{long V1122;
	V1122= V1121;
	V1123= (long)STREF(unsigned short,base0[1],4);
	if((V1123)==(1)){
	goto T2369;}
	goto T2365;
	goto T2369;
T2369:;
	if(!((V1122)==(0))){
	goto T2365;}}
	base[2]= VV[156];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T2365;
T2365:;
	V1124= (long)STREF(unsigned short,base0[1],4);
	if(!((V1124)==(1))){
	goto T2374;}
	V1125= (long)STREF(unsigned short,base0[1],32);
	V1120= (long)(V1121)*(V1125);
	goto T2363;
	goto T2374;
T2374:;
	V1126= (long)STREF(unsigned short,base0[1],32);
	V1120= (long)((long)(V1121)*(V1126))+1;}
	goto T2363;
T2363:;
	V1127= (long)STREF(unsigned short,base0[1],4);
	if(!((V1127)==(1))){
	goto T2380;}
	V1128= STREF(object,base0[1],40);
	base[1]= (V1128)->v.v_self[V1120];
	goto T2353;
	goto T2380;
T2380:;
	{object V1129;
	object V1130;
	base[2]= CMPmake_fixnum((long)STREF(unsigned short,base0[1],4));
	vs_top=(vs_base=base+2)+1;
	Lmake_list();
	vs_top=sup;
	V1129= vs_base[0];
	V1130= STREF(object,base0[1],40);
	{long V1131;
	register long V1132;
	V1131= (long)STREF(unsigned short,base0[1],4);
	V1132= 0;
	goto T2390;
T2390:;
	if(!((V1132)>=(V1131))){
	goto T2391;}
	base[1]= (V1129);
	goto T2353;
	goto T2391;
T2391:;
	{object V1133;
	object V1135;
	V1133= CMPmake_fixnum(V1132);
	V1135= ((V1130))->v.v_self[(long)(V1120)+(V1132)];
	(nthcdr(fix((V1133)),V1129))->c.c_car = (V1135);
	(void)(nthcdr(fix((V1133)),V1129));}
	V1132= (long)(V1132)+1;
	goto T2390;}}}}
	goto T2353;
T2353:;
	{long V1136;
	V1136= fix((V1116));
	{long V1137;
	V1137= V1136;
	V1138= (long)STREF(unsigned short,base0[1],4);
	if((V1138)==(1)){
	goto T2407;}
	goto T2403;
	goto T2407;
T2407:;
	if(!((V1137)==(0))){
	goto T2403;}}
	base[3]= VV[161];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2403;
T2403:;
	{long V1139;
	{long V1140;
	V1140= V1136;
	{long V1141;
	V1141= V1140;
	V1142= (long)STREF(unsigned short,base0[1],4);
	if((V1142)==(1)){
	goto T2417;}
	goto T2413;
	goto T2417;
T2417:;
	if(!((V1141)==(0))){
	goto T2413;}}
	base[3]= VV[156];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2413;
T2413:;
	V1143= (long)STREF(unsigned short,base0[1],4);
	if(!((V1143)==(1))){
	goto T2422;}
	V1144= (long)STREF(unsigned short,base0[1],32);
	V1139= (long)(V1140)*(V1144);
	goto T2411;
	goto T2422;
T2422:;
	V1145= (long)STREF(unsigned short,base0[1],32);
	V1139= (long)((long)(V1140)*(V1145))+1;}
	goto T2411;
T2411:;
	if((STREF(object,base0[1],8))!=Cnil){
	goto T2427;}
	base[2]= Cnil;
	goto T2401;
	goto T2427;
T2427:;
	V1146= STREF(object,base0[1],40);
	V1147= (long)STREF(unsigned short,base0[1],4);
	base[2]= (V1146)->v.v_self[(long)(V1139)+(V1147)];}}
	goto T2401;
T2401:;
	vs_top=(vs_base=base+1)+2;
	L83(base0);
	return;
	goto T2351;
T2351:;
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
	{object V1148;
	object V1149;
	check_arg(2);
	V1148=(base[0]);
	V1149=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI206))(Cnil,base0[1],(V1148),(V1149));
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
	{object V1150;
	check_arg(1);
	V1150=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (*(LnkLI217))(Cnil,base0[1],base0[0],fix((V1150)));
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
	{object V1151;
	check_arg(1);
	V1151=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1152;
	if(!(((VV[84]->s.s_dbind))==(VV[85]))){
	goto T2433;}
	base[1]= (V1151);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk219)(Lclptr219);
	vs_top=sup;
	V1153= vs_base[0];
	V1152= (*(LnkLI218))(V1153);
	goto T2431;
	goto T2433;
T2433:;
	V1152= (*(LnkLI218))((V1151));
	goto T2431;
T2431:;
	if(!(((V1151))==((VV[86]->s.s_dbind)))){
	goto T2438;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2438;
T2438:;
	base[1]= (V1152);
	base[2]= base0[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk220)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2441;}
	base[1]= VV[87];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2441;
T2441:;
	base[1]= (V1152);
	base[2]= base0[3];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk220)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2446;}
	base[1]= VV[87];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2446;
T2446:;
	base[1]= (V1152);
	base[2]= base0[4];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk220)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2451;}
	base[1]= VV[88];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2451;
T2451:;
	base[1]= (V1152);
	base[2]= base0[5];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk220)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2456;}
	base[1]= VV[89];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2456;
T2456:;
	base[1]= (V1152);
	base[2]= base0[1];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk220)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2461;}
	base[1]= VV[83];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2461;
T2461:;
	base[1]= VV[90];
	base[2]= base0[0];
	base[3]= (V1152);
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
	{object V1154;
	object V1155;
	check_arg(2);
	V1154=(base[0]);
	V1155=(base[1]);
	vs_top=sup;
	{object V1156;
	V1156= list(2,(V1154),(V1155));
	(base0[0]->c.c_car)= make_cons((V1156),(base0[0]->c.c_car));
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
static void LnkT220(){ call_or_link(VV[220],(void **)(void *)&Lnk220);} /* *SUBTYPEP */
static void LnkT219(ptr) object *ptr;{ call_or_link_closure(VV[219],(void **)(void *)&Lnk219,(void **)(void *)&Lclptr219);} /* SPECIALIZER-CLASS */
static object  LnkTLI218(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[218],(void **)(void *)&LnkLI218,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI217(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[217],(void **)(void *)&LnkLI217,262148,first,ap);va_end(ap);return V1;} /* FILL-CACHE-FROM-CACHE-P */
static object  LnkTLI36(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[36],(void **)(void *)&LnkLI36,1,first,ap);va_end(ap);return V1;} /* NEXT-WRAPPER-FIELD */
static object  LnkTLI214(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[214],(void **)(void *)&LnkLI214,1,first,ap);va_end(ap);return V1;} /* FREE-CACHE */
static object  LnkTLI213(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[213],(void **)(void *)&LnkLI213,first,ap);va_end(ap);return V1;} /* GET-CACHE-FROM-CACHE */
static object  LnkTLI154(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[154],(void **)(void *)&LnkLI154,1,first,ap);va_end(ap);return V1;} /* CHECK-CACHE */
static void LnkT212(){ call_or_link(VV[212],(void **)(void *)&Lnk212);} /* FIND-FREE-CACHE-LINE */
static object  LnkTLI211(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[211],(void **)(void *)&LnkLI211,20739,first,ap);va_end(ap);return V1;} /* COMPUTE-PRIMARY-CACHE-LOCATION */
static object  LnkTLI210(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[210],(void **)(void *)&LnkLI210,first,ap);va_end(ap);return V1;} /* COMPUTE-PRIMARY-CACHE-LOCATION-FROM-LOCATION */
static object  LnkTLI209(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[209],(void **)(void *)&LnkLI209,4,first,ap);va_end(ap);return V1;} /* EXPAND-CACHE */
static object  LnkTLI208(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[208],(void **)(void *)&LnkLI208,4,first,ap);va_end(ap);return V1;} /* ADJUST-CACHE */
static object  LnkTLI207(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[207],(void **)(void *)&LnkLI207,257,first,ap);va_end(ap);return V1;} /* CACHE-COUNT */
static object  LnkTLI206(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[206],(void **)(void *)&LnkLI206,4,first,ap);va_end(ap);return V1;} /* FILL-CACHE-P */
static object  LnkTLI205(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[205],(void **)(void *)&LnkLI205,2,first,ap);va_end(ap);return V1;} /* MAKE-FAST-METHOD-CALL-LAMBDA-LIST */
static object  LnkTLI204(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[204],(void **)(void *)&LnkLI204,2,first,ap);va_end(ap);return V1;} /* MAKE-DFUN-LAMBDA-LIST */
static object  LnkTLI203(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[203],(void **)(void *)&LnkLI203,1,first,ap);va_end(ap);return V1;} /* DFUN-ARG-SYMBOL */
static object  LnkTLI202(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[202],(void **)(void *)&LnkLI202,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static object  LnkTLI201(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[201],(void **)(void *)&LnkLI201,4097,first,ap);va_end(ap);return V1;} /* POWER-OF-TWO-CEILING */
static object  LnkTLI200(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[200],(void **)(void *)&LnkLI200,1,first,ap);va_end(ap);return V1;} /* FREE-CACHE-VECTOR */
static void LnkT199(){ call_or_link(VV[199],(void **)(void *)&Lnk199);} /* COPY-CACHE-INTERNAL */
static object  LnkTLI198(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[198],(void **)(void *)&LnkLI198,1,first,ap);va_end(ap);return V1;} /* GET-CACHE-VECTOR */
static void LnkT197(){ call_or_link(VV[197],(void **)(void *)&Lnk197);} /* COMPUTE-CACHE-PARAMETERS */
static object  LnkTLI196(){return call_proc0(VV[196],(void **)(void *)&LnkLI196);} /* MAKE-CACHE */
static object  LnkTLI195(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[195],(void **)(void *)&LnkLI195,3,first,ap);va_end(ap);return V1;} /* OBSOLETE-INSTANCE-TRAP */
static object  LnkTLI194(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[194],(void **)(void *)&LnkLI194,3,first,ap);va_end(ap);return V1;} /* FLUSH-CACHE-TRAP */
static object  LnkTLI71(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[71],(void **)(void *)&LnkLI71,1,first,ap);va_end(ap);return V1;} /* WRAPPER-OF */
static object  LnkTLI192(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[192],(void **)(void *)&LnkLI192,256,first,ap);va_end(ap);return V1;} /* GET-WRAPPER-CACHE-NUMBER */
static object  LnkTLI191(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[191],(void **)(void *)&LnkLI191,1,first,ap);va_end(ap);return V1;} /* WRAPPER-FIELD */
static void LnkT190(){ call_or_link(VV[190],(void **)(void *)&Lnk190);} /* POSITION */
static void LnkT189(){ call_or_link(VV[189],(void **)(void *)&Lnk189);} /* SORT */
static object  LnkTLI186(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[186],(void **)(void *)&LnkLI186,1,first,ap);va_end(ap);return V1;} /* ALLOCATE-CACHE-VECTOR */
static object  LnkTLI185(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[185],(void **)(void *)&LnkLI185,1,first,ap);va_end(ap);return V1;} /* FLUSH-CACHE-VECTOR-INTERNAL */
static object  LnkTLI184(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[184],(void **)(void *)&LnkLI184,2,first,ap);va_end(ap);return V1;} /* PRINTING-RANDOM-THING-INTERNAL */
static void LnkT169(){ call_or_link(VV[169],(void **)(void *)&Lnk169);} /* FILL */
static void LnkT44(){ call_or_link(VV[44],(void **)(void *)&Lnk44);} /* MAKE-ARRAY */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

