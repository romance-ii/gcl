
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
/*	function definition for G2521	*/

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
	V98 = base[2];
	base[3]= list(3,VV[37],V98,(*(LnkLI191))(VV[38]));
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
	{object V99=base[0]->c.c_cdr;
	if(endp(V99))invalid_macro_call();
	base[2]= (V99->c.c_car);
	V99=V99->c.c_cdr;
	if(!endp(V99))invalid_macro_call();}
	V100 = base[2];
	base[3]= list(3,VV[37],V100,(*(LnkLI191))(VV[39]));
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
	{object V101=base[0]->c.c_cdr;
	if(endp(V101))invalid_macro_call();
	base[2]= (V101->c.c_car);
	V101=V101->c.c_cdr;
	if(!endp(V101))invalid_macro_call();}
	V102 = base[2];
	base[3]= list(3,VV[37],V102,(*(LnkLI191))(VV[40]));
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
	{object V103=base[0]->c.c_cdr;
	if(endp(V103))invalid_macro_call();
	base[2]= (V103->c.c_car);
	V103=V103->c.c_cdr;
	if(!endp(V103))invalid_macro_call();}
	V104 = base[2];
	base[3]= list(3,VV[37],V104,(*(LnkLI191))(VV[41]));
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
	{object V105=base[0]->c.c_cdr;
	if(endp(V105))invalid_macro_call();
	base[2]= (V105->c.c_car);
	V105=V105->c.c_cdr;
	if(!endp(V105))invalid_macro_call();}
	V106 = base[2];
	base[3]= list(3,VV[37],V106,(*(LnkLI191))(VV[42]));
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
	{object V107=base[0]->c.c_cdr;
	if(!endp(V107))invalid_macro_call();}
	V108 = CMPmake_fixnum((long)length(VV[32]));
	V109= list(2,VV[43],listA(3,VV[44],V108,VV[45]));
	V110= make_cons(/* INLINE-ARGS */V109,Cnil);
	{register object V112;
	register object V113;
	V112= Cnil;
	V113= Cnil;
	{register object V114;
	register object V115;
	register object V116;
	register object V117;
	V114= small_fixnum(0);
	V115= Cnil;
	V116= VV[32];
	V117= Cnil;
	goto T185;
T185:;
	{register object V118;
	V118= (V114);
	V114= number_plus((V114),small_fixnum(1));
	V115= (V118);}
	{register object V119;
	if(!(((V116))==Cnil)){
	goto T195;}
	goto T179;
	goto T195;
T195:;
	V119= CMPcar((V116));
	V116= CMPcdr((V116));
	V117= (V119);}
	{register object V120;
	V120= (V117);
	if(!(eql((V120),VV[46]))){
	goto T200;}
	{register object V121;
	V121= list(3,VV[14],list(3,VV[37],VV[43],(V115)),VV[47]);
	if(((V112))!=Cnil){
	goto T204;}
	V113= make_cons((V121),Cnil);
	V112= (V113);
	goto T186;
	goto T204;
T204:;
	V123= make_cons((V121),Cnil);
	((V113))->c.c_cdr = /* INLINE-ARGS */V123;
	V122= (V113);
	V113= CMPcdr(V122);
	goto T186;}
	goto T200;
T200:;
	{register object x= (V120),V124= VV[48];
	while(V124!=Cnil)
	if(eql(x,V124->c.c_car)){
	goto T212;
	}else V124=V124->c.c_cdr;
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
	base[6]= (V120);
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
	V111= (V112);}
	base[2]= listA(3,VV[10],/* INLINE-ARGS */V110,append(V111,VV[53]));
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function MAKE-WRAPPER	*/

static object LI30(object V125,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB30 VMS30 VMV30
	{object V126;
	object V127;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V126= V125;
	narg = narg - 1;
	if (narg <= 0) goto T223;
	else {
	V127= first;}
	--narg; goto T224;
	goto T223;
T223:;
	V127= Cnil;
	goto T224;
T224:;
	{object V128;
	{register object V129;
	base[0]= small_fixnum(13);
	base[1]= VV[5];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk44)();
	vs_top=sup;
	V129= vs_base[0];
	V130 = (V129);
	V131 = CMPmake_fixnum((long)(*(LnkLI192))());
	(void)((V130)->v.v_self[0]= (V131));
	V132 = (V129);
	V133 = CMPmake_fixnum((long)(*(LnkLI192))());
	(void)((V132)->v.v_self[1]= (V133));
	V134 = (V129);
	V135 = CMPmake_fixnum((long)(*(LnkLI192))());
	(void)((V134)->v.v_self[2]= (V135));
	V136 = (V129);
	V137 = CMPmake_fixnum((long)(*(LnkLI192))());
	(void)((V136)->v.v_self[3]= (V137));
	V138 = (V129);
	V139 = CMPmake_fixnum((long)(*(LnkLI192))());
	(void)((V138)->v.v_self[4]= (V139));
	V140 = (V129);
	V141 = CMPmake_fixnum((long)(*(LnkLI192))());
	(void)((V140)->v.v_self[5]= (V141));
	V142 = (V129);
	V143 = CMPmake_fixnum((long)(*(LnkLI192))());
	(void)((V142)->v.v_self[6]= (V143));
	V144 = (V129);
	V145 = CMPmake_fixnum((long)(*(LnkLI192))());
	(void)((V144)->v.v_self[7]= (V145));
	(void)(((V129))->v.v_self[8]= (Ct));
	V128= (V129);}
	(void)(((V128))->v.v_self[12]= ((V126)));
	(void)(((V128))->v.v_self[11]= ((V127)));
	{object V146 = (V128);
	VMR30(V146)}}
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
	{object V147=base[0]->c.c_cdr;
	if(endp(V147))invalid_macro_call();
	base[2]= (V147->c.c_car);
	V147=V147->c.c_cdr;
	if(endp(V147))invalid_macro_call();
	base[3]= (V147->c.c_car);
	V147=V147->c.c_cdr;
	if(!endp(V147))invalid_macro_call();}
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
	{object V148=base[0]->c.c_cdr;
	if(endp(V148))invalid_macro_call();
	base[2]= (V148->c.c_car);
	V148=V148->c.c_cdr;
	if(!endp(V148))invalid_macro_call();}
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
	{object V149=base[0]->c.c_cdr;
	if(endp(V149))invalid_macro_call();
	base[2]= (V149->c.c_car);
	V149=V149->c.c_cdr;
	if(!endp(V149))invalid_macro_call();}
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
	{object V150=base[0]->c.c_cdr;
	if(endp(V150))invalid_macro_call();
	base[2]= (V150->c.c_car);
	V150=V150->c.c_cdr;
	if(!endp(V150))invalid_macro_call();}
	base[3]= list(3,VV[59],list(2,VV[60],base[2]),VV[61]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function INVALIDATE-WRAPPER	*/

static object LI35(V154,V155,V156)

object V154;object V155;object V156;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	{object V157= (V155);
	if((V157!= VV[193])
	&& (V157!= VV[63]))goto T242;
	{object V158;
	V158= Cnil;
	{register object V159;
	register object V160;
	base[2]= (V154);
	base[3]= (VV[62]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V159= vs_base[0];
	V160= CMPcar((V159));
	goto T249;
T249:;
	if(!(((V159))==Cnil)){
	goto T250;}
	goto T243;
	goto T250;
T250:;
	if(!(((V155))==(VV[63]))){
	goto T254;}
	{register object V162;
	V162= VV[63];
	(V160)->c.c_car = (V162);}
	goto T254;
T254:;
	{register object V164;
	V164= (V156);
	(CMPcdr(V160))->c.c_car = (V164);
	(void)(CMPcdr(V160));}
	V158= make_cons(V160,(V158));
	V159= CMPcdr((V159));
	V160= CMPcar((V159));
	goto T249;}
	goto T243;
T243:;
	{register object V167;
	object V168;
	register object V169;
	object V170;
	V167= VV[32];
	V168= Cnil;
	V169= small_fixnum(0);
	V170= Cnil;
	goto T275;
T275:;
	{object V171;
	if(!(((V167))==Cnil)){
	goto T281;}
	goto T269;
	goto T281;
T281:;
	V171= CMPcar((V167));
	V167= CMPcdr((V167));
	V168= (V171);}
	{object V172;
	V172= (V169);
	V169= number_plus((V169),small_fixnum(1));
	V170= (V172);}
	if(!(((V168))==(VV[46]))){
	goto T276;}
	(void)(((V154)->v.v_self[fix((V170))]=(small_fixnum(0))));
	goto T276;
T276:;
	goto T275;}
	goto T269;
T269:;
	{object V173;
	V174= list(2,(V155),(V156));
	V173= ((V154))->v.v_self[8]= (/* INLINE-ARGS */V174);
	V158= make_cons((V173),(V158));}
	{object V176;
	V176= (VV[62]->s.s_dbind);
	base[0]= V154;
	base[1]= (V176);
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	siLhash_set();
	vs_top=sup;}
	{object V179;
	V179= (VV[62]->s.s_dbind);
	base[0]= V156;
	base[1]= (V179);
	base[2]= V158;
	vs_top=(vs_base=base+0)+3;
	siLhash_set();
	vs_top=sup;
	{object V181 = vs_base[0];
	VMR35(V181)}}}
	goto T242;
T242:;
	FEerror("The ECASE key value ~s is illegal.",1,V157);
	{object V182 = Cnil;
	VMR35(V182)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CHECK-WRAPPER-VALIDITY	*/

static object LI36(V184)

register object V184;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	{register object V185;
	register object V186;
	V185= (*(LnkLI71))((V184));
	V186= ((V185))->v.v_self[8];
	if(!(((V186))==(Ct))){
	goto T307;}
	{object V187 = (V185);
	VMR36(V187)}
	goto T307;
T307:;
	{object V188;
	{object V189= CMPcar((V186));
	if((V189!= VV[193]))goto T310;
	V188= (*(LnkLI194))((V185),CMPcadr((V186)),(V184));
	goto T309;
	goto T310;
T310:;
	if((V189!= VV[63]))goto T311;
	V188= (*(LnkLI195))((V185),CMPcadr((V186)),(V184));
	goto T309;
	goto T311;
T311:;
	FEerror("The ECASE key value ~s is illegal.",1,V189);
	V188= Cnil;
	goto T309;}
	goto T309;
T309:;
	V190 = (V188);
	V191= (*(LnkLI71))((V184));
	if(!((((V190)==(/* INLINE-ARGS */V191)?Ct:Cnil))==Cnil)){
	goto T314;}
	base[2]= VV[64];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T312;
	goto T314;
T314:;
	if(!((((((V188))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T312;}
	base[2]= VV[65];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T312;
T312:;
	{object V192 = (V188);
	VMR36(V192)}}}
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
	{object V193=base[0]->c.c_cdr;
	if(endp(V193))invalid_macro_call();
	base[2]= (V193->c.c_car);
	V193=V193->c.c_cdr;
	if(!endp(V193))invalid_macro_call();}
	{object V194;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V194= vs_base[0];
	V195= list(2,VV[67],base[2]);
	V196= list(2,/* INLINE-ARGS */V195,list(2,VV[68],base[2]));
	V197= list(2,VV[69],base[2]);
	V198= list(2,/* INLINE-ARGS */V197,list(2,VV[70],base[2]));
	V199= list(2,(V194),list(4,VV[66],/* INLINE-ARGS */V196,/* INLINE-ARGS */V198,list(2,Ct,list(2,VV[71],base[2]))));
	V200= make_cons(/* INLINE-ARGS */V199,Cnil);
	V201= list(3,VV[73],VV[74],list(2,VV[60],(V194)));
	base[3]= list(3,VV[10],/* INLINE-ARGS */V200,list(4,VV[72],/* INLINE-ARGS */V201,(V194),list(2,VV[75],base[2])));
	vs_top=(vs_base=base+3)+1;
	return;}
}
/*	local entry for function GET-CACHE	*/

static object LI38(V206,V207,V208,V209)

object V206;object V207;object V208;long V209;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	{register object V210;{object V211;
	{object V212;
	V212= CMPcar((VV[76]->s.s_dbind));
	(VV[76]->s.s_dbind)= CMPcdr((VV[76]->s.s_dbind));
	V211= (V212);}
	if(V211==Cnil)goto T322;
	V210= V211;
	goto T321;
	goto T322;
T322:;}
	V210= (*(LnkLI196))();
	goto T321;
T321:;
	{long V213;
	long V214;
	long V215;
	long V216;
	base[0]= (V206);
	base[1]= (V207);
	base[2]= CMPmake_fixnum(V209);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk197)();
	if(vs_base>=vs_top){vs_top=sup;goto T331;}
	V213= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T332;}
	V214= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T333;}
	V215= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T334;}
	V216= fix(vs_base[0]);
	vs_top=sup;
	goto T335;
	goto T331;
T331:;
	V213= fix(Cnil);
	goto T332;
T332:;
	V214= fix(Cnil);
	goto T333;
T333:;
	V215= fix(Cnil);
	goto T334;
T334:;
	V216= fix(Cnil);
	goto T335;
T335:;
	V217 = (V210);
	V218 = fix((V206));
	V219= Ct;
	STSET(unsigned short,V217,4, V218);
	(void)(V218);
	V220 = (V210);
	V221 = (V207);
	V222= Ct;
	STSET(object,V220,8, V221);
	(void)(V221);
	V223 = (V210);
	V224 = V216;
	V225= Ct;
	STSET(fixnum,V223,12, V224);
	(void)(V224);
	V226 = (V210);
	{long V227= fix((*(LnkLI191))(VV[46]));
	V228= Ct;
	STSET(unsigned char,V226,16, /* INLINE-ARGS */V227);
	(void)(/* INLINE-ARGS */V227);}
	V229 = (V210);
	V230 = (V208);
	V231= Ct;
	STSET(object,V229,20, V230);
	(void)(V230);
	V232 = (V210);
	V233 = V213;
	V234= Ct;
	STSET(fixnum,V232,24, V233);
	(void)(V233);
	V235 = (V210);
	V236 = V214;
	V237= Ct;
	STSET(fixnum,V235,28, V236);
	(void)(V236);
	V238 = (V210);
	V239 = V215;
	V240= Ct;
	STSET(unsigned short,V238,32, V239);
	(void)(V239);
	V241 = (V210);
	{long V243;
	V243= (long)(V216)-1;
	if(!(number_compare((V206),small_fixnum(1))==0)){
	goto T349;}
	V242= (long)(V243)*(V215);
	goto T346;
	goto T349;
T349:;
	V242= (long)((long)(V243)*(V215))+1;}
	goto T346;
T346:;
	V244= Ct;
	STSET(fixnum,V241,36, V242);
	(void)(V242);
	V245 = (V210);
	V246 = CMPmake_fixnum(V214);
	V247= (*(LnkLI198))(V246);
	V248= Ct;
	STSET(object,V245,40, /* INLINE-ARGS */V247);
	(void)(/* INLINE-ARGS */V247);
	V249 = (V210);
	V250= Ct;
	STSET(object,V249,44, Cnil);
	(void)(Cnil);
	{object V251 = (V210);
	VMR38(V251)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-CACHE-FROM-CACHE	*/

static object LI39(object V253,object V252,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB39 VMS39 VMV39
	{register object V254;
	long V255;
	object V256;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V254= V253;
	V255= fix(V252);
	narg = narg - 2;
	if (narg <= 0) goto T352;
	else {
	V256= first;}
	--narg; goto T353;
	goto T352;
T352:;
	V256= (*(LnkLI191))(VV[46]);
	goto T353;
T353:;
	{object V257;
	object V258;
	register object V259;
	V257= CMPmake_fixnum((long)STREF(unsigned short,(V254),4));
	V258= STREF(object,(V254),8);{object V260;
	{object V261;
	V261= CMPcar((VV[76]->s.s_dbind));
	(VV[76]->s.s_dbind)= CMPcdr((VV[76]->s.s_dbind));
	V260= (V261);}
	if(V260==Cnil)goto T358;
	V259= V260;
	goto T357;
	goto T358;
T358:;}
	V259= (*(LnkLI196))();
	goto T357;
T357:;
	{long V262;
	long V263;
	long V264;
	long V265;
	if(!((V255)==((long)STREF(fixnum,(V254),12)))){
	goto T365;}
	base[0]= CMPmake_fixnum((long)STREF(fixnum,(V254),24));
	base[1]= CMPmake_fixnum((long)STREF(fixnum,(V254),28));
	base[2]= CMPmake_fixnum((long)STREF(unsigned short,(V254),32));
	base[3]= CMPmake_fixnum((long)STREF(fixnum,(V254),12));
	vs_top=(vs_base=base+0)+4;
	goto T363;
	goto T365;
T365:;
	base[0]= (V257);
	base[1]= (V258);
	base[2]= CMPmake_fixnum(V255);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk197)();
	goto T363;
T363:;
	if(vs_base>=vs_top){vs_top=sup;goto T374;}
	V262= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T375;}
	V263= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T376;}
	V264= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T377;}
	V265= fix(vs_base[0]);
	vs_top=sup;
	goto T378;
	goto T374;
T374:;
	V262= fix(Cnil);
	goto T375;
T375:;
	V263= fix(Cnil);
	goto T376;
T376:;
	V264= fix(Cnil);
	goto T377;
T377:;
	V265= fix(Cnil);
	goto T378;
T378:;
	V266 = (V259);
	V267= Ct;
	STSET(object,V266,0, STREF(object,(V254),0));
	(void)(STREF(object,(V254),0));
	V268 = (V259);
	V269 = fix((V257));
	V270= Ct;
	STSET(unsigned short,V268,4, V269);
	(void)(V269);
	V271 = (V259);
	V272 = (V258);
	V273= Ct;
	STSET(object,V271,8, V272);
	(void)(V272);
	V274 = (V259);
	V275 = V265;
	V276= Ct;
	STSET(fixnum,V274,12, V275);
	(void)(V275);
	V277 = (V259);
	V278 = fix((V256));
	V279= Ct;
	STSET(unsigned char,V277,16, V278);
	(void)(V278);
	V280 = (V259);
	V281= Ct;
	STSET(object,V280,20, STREF(object,(V254),20));
	(void)(STREF(object,(V254),20));
	V282 = (V259);
	V283 = V262;
	V284= Ct;
	STSET(fixnum,V282,24, V283);
	(void)(V283);
	V285 = (V259);
	V286 = V263;
	V287= Ct;
	STSET(fixnum,V285,28, V286);
	(void)(V286);
	V288 = (V259);
	V289 = V264;
	V290= Ct;
	STSET(unsigned short,V288,32, V289);
	(void)(V289);
	V291 = (V259);
	{long V293;
	V293= (long)(V265)-1;
	if(!(number_compare((V257),small_fixnum(1))==0)){
	goto T393;}
	V292= (long)(V293)*(V264);
	goto T390;
	goto T393;
T393:;
	V292= (long)((long)(V293)*(V264))+1;}
	goto T390;
T390:;
	V294= Ct;
	STSET(fixnum,V291,36, V292);
	(void)(V292);
	V295 = (V259);
	V296 = CMPmake_fixnum(V263);
	V297= (*(LnkLI198))(V296);
	V298= Ct;
	STSET(object,V295,40, /* INLINE-ARGS */V297);
	(void)(/* INLINE-ARGS */V297);
	V299 = (V259);
	V300= Ct;
	STSET(object,V299,44, Cnil);
	(void)(Cnil);
	{object V301 = (V259);
	VMR39(V301)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function COPY-CACHE	*/

static object LI40(V303)

object V303;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{object V304;
	object V305;
	register object V306;
	register object V307;
	base[4]= (V303);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk199)();
	vs_top=sup;
	V304= vs_base[0];
	V305= CMPmake_fixnum((long)STREF(fixnum,(V303),28));
	V306= STREF(object,(V303),40);
	V307= (*(LnkLI198))((V305));
	{register long V308;
	register long V309;
	V308= fix((V305));
	V309= 0;
	goto T405;
T405:;
	if(!((V309)>=(V308))){
	goto T406;}
	goto T401;
	goto T406;
T406:;
	(void)(((V307))->v.v_self[V309]= (((V306))->v.v_self[V309]));
	V309= (long)(V309)+1;
	goto T405;}
	goto T401;
T401:;
	V310 = (V304);
	V311 = (V307);
	V312= Ct;
	STSET(object,V310,40, V311);
	(void)(V311);
	{object V313 = (V304);
	VMR40(V313)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FREE-CACHE	*/

static object LI41(V315)

register object V315;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	(void)((*(LnkLI200))(STREF(object,(V315),40)));
	V316 = (V315);
	V317= Ct;
	STSET(object,V316,40, VV[77]);
	(void)(VV[77]);
	V318 = (V315);
	V319= Ct;
	STSET(object,V318,0, Cnil);
	(void)(Cnil);
	(VV[76]->s.s_dbind)= make_cons(V315,(VV[76]->s.s_dbind));
	{object V321 = Cnil;
	VMR41(V321)}
	return Cnil;
}
/*	local entry for function COMPUTE-LINE-SIZE	*/

static object LI42(V323)

object V323;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	{object V324 = (*(LnkLI201))(fix((V323)));
	VMR42(V324)}
	return Cnil;
}
/*	function definition for COMPUTE-CACHE-PARAMETERS	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{long V325;
	object V326;
	register object V327;
	check_arg(3);
	V325=fix(base[0]);
	V326=(base[1]);
	V327=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((V325)==(1))){
	goto T420;}
	{register long V328;
	long V329;
	if(((V326))==Cnil){
	goto T424;}
	V328= 2;
	goto T422;
	goto T424;
T424:;
	V328= 1;
	goto T422;
T422:;
	if(!(type_of((V327))==t_fixnum)){
	goto T428;}
	V330 = V328;
	{long V331= fix((*(LnkLI201))(fix((V327))));
	V329= (long)(V330)*(/* INLINE-ARGS */V331);
	goto T426;}
	goto T428;
T428:;
	base[3]= (V327);
	base[4]= small_fixnum(0);
	vs_top=(vs_base=base+3)+2;
	Larray_dimension();
	vs_top=sup;
	V329= fix(vs_base[0]);
	goto T426;
T426:;
	base[3]= CMPmake_fixnum((long)(((long)(V329)-1) ^ ((long)(V328)-1)));
	base[4]= CMPmake_fixnum(V329);
	base[5]= CMPmake_fixnum(V328);
	base[6]= CMPmake_fixnum((long)(V329>=0&&(V328)>0?(V329)/(V328):ifloor(V329,V328)));
	vs_top=(vs_base=base+3)+4;
	return;}
	goto T420;
T420:;
	{register long V332;
	long V333;
	if(((V326))==Cnil){
	goto T439;}
	V335 = CMPmake_fixnum(V325);
	V334= fix(one_plus(V335));
	goto T437;
	goto T439;
T439:;
	V334= V325;
	goto T437;
T437:;
	V332= fix((*(LnkLI201))(V334));
	if(!(type_of((V327))==t_fixnum)){
	goto T443;}
	V336 = V332;
	{long V337= fix((*(LnkLI201))(fix((V327))));
	V333= (long)(V336)*(/* INLINE-ARGS */V337);
	goto T441;}
	goto T443;
T443:;
	base[3]= (V327);
	base[4]= small_fixnum(0);
	vs_top=(vs_base=base+3)+2;
	Larray_dimension();
	vs_top=sup;
	V338= vs_base[0];
	V333= fix(one_minus(V338));
	goto T441;
T441:;
	base[3]= CMPmake_fixnum((long)(((long)(V333)-1) ^ ((long)(V332)-1)));
	base[4]= CMPmake_fixnum((long)(V333)+1);
	base[5]= CMPmake_fixnum(V332);
	base[6]= CMPmake_fixnum((long)(V333>=0&&(V332)>0?(V333)/(V332):ifloor(V333,V332)));
	vs_top=(vs_base=base+3)+4;
	return;}
	}
}
/*	local entry for function COMPUTE-PRIMARY-CACHE-LOCATION	*/

static object LI44(V342,V343,V344)

register long V342;long V343;object V344;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	if(type_of((V344))==t_cons||((V344))==Cnil){
	goto T453;}
	{long V345 = (long)((V343) & (fix(((V344))->v.v_self[V342])));
	VMR44((object)V345)}
	goto T453;
T453:;
	{register long V346;
	register long V347;
	V346= 0;
	V347= 0;
	{register object V348;
	register object V349;
	V348= (V344);
	V349= CMPcar((V348));
	goto T461;
T461:;
	if(!(((V348))==Cnil)){
	goto T462;}
	goto T457;
	goto T462;
T462:;
	{register long V350;
	V350= fix(((V349))->v.v_self[V342]);
	if(!((V350)==0)){
	goto T469;}
	{long V351 = 0;
	VMR44((object)V351)}
	goto T469;
T469:;
	V346= (long)(V346)+(V350);}
	if((V347)==0){
	goto T472;}
	if(!(((long)(V347>=0&&(4)>0?(V347)%(4):imod(V347,4)))==0)){
	goto T472;}
	V346= (long)((V346) & (134217727));
	goto T472;
T472:;
	V347= (long)(V347)+(1);
	V348= CMPcdr((V348));
	V349= CMPcar((V348));
	goto T461;}
	goto T457;
T457:;
	{long V352 = (long)((long)((V343) & (V346)))+1;
	VMR44((object)V352)}}
	base[0]=base[0];
}
/*	local entry for function COMPUTE-PRIMARY-CACHE-LOCATION-FROM-LOCATION	*/

static object LI45(object V354,object V353,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB45 VMS45 VMV45
	{object V355;
	register long V356;
	object V357;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V355= V354;
	V356= fix(V353);
	narg = narg - 2;
	if (narg <= 0) goto T485;
	else {
	V357= first;}
	--narg; goto T486;
	goto T485;
T485:;
	V357= (V355);
	goto T486;
T486:;
	{register long V358;
	register object V359;
	register long V360;
	long V361;
	long V362;
	V358= 0;
	V359= STREF(object,(V357),40);
	V360= (long)STREF(unsigned char,(V355),16);
	V361= (long)STREF(fixnum,(V355),24);
	V362= (long)STREF(unsigned short,(V355),4);
	{register long V363;
	register long V364;
	V363= V362;
	V364= 0;
	goto T497;
T497:;
	if(!((V364)>=(V363))){
	goto T498;}
	goto T493;
	goto T498;
T498:;
	{register object V365;
	register long V366;
	V365= ((V359))->v.v_self[(long)(V364)+(V356)];
	V366= fix(((V365))->v.v_self[V360]);
	V358= (long)(V358)+(V366);}
	if((V364)==0){
	goto T505;}
	if(!(((long)(V364>=0&&(4)>0?(V364)%(4):imod(V364,4)))==0)){
	goto T505;}
	V358= (long)((V358) & (134217727));
	goto T505;
T505:;
	V364= (long)(V364)+1;
	goto T497;}
	goto T493;
T493:;
	if(!((V362)==(1))){
	goto T515;}
	{object V367 = CMPmake_fixnum((long)((V361) & (V358)));
	VMR45(V367)}
	goto T515;
T515:;
	{object V368 = CMPmake_fixnum((long)((long)((V361) & (V358)))+1);
	VMR45(V368)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function RAISE-METATYPE	*/

static object LI48(V371,V372)

object V371;object V372;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	base[0]= (V372);
	base[1]= (VFUN_NARGS=1,(*(LnkLI202))(VV[78]));
	base[2]= (VFUN_NARGS=1,(*(LnkLI202))(VV[79]));
	base[3]= (VFUN_NARGS=1,(*(LnkLI202))(VV[80]));
	base[4]= (VFUN_NARGS=1,(*(LnkLI202))(VV[81]));
	base[5]= (VFUN_NARGS=1,(*(LnkLI202))(VV[82]));
	{register object V373;
	base[6]= base[0];
	vs_top=(vs_base=base+6)+1;
	L49(base);
	vs_top=sup;
	V373= vs_base[0];
	if(!(((V373))==(VV[83]))){
	goto T525;}
	{object V374 = VV[41];
	VMR46(V374)}
	goto T525;
T525:;
	if(((V371))!=Cnil){
	goto T528;}
	{object V375 = (V373);
	VMR46(V375)}
	goto T528;
T528:;
	if(!(((V371))==((V373)))){
	goto T531;}
	{object V376 = (V373);
	VMR46(V376)}
	goto T531;
T531:;
	{object V377 = VV[41];
	VMR46(V377)}}
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
	{object V378=base[0]->c.c_cdr;
	if(endp(V378))invalid_macro_call();
	{object V379= (V378->c.c_car);
	if(endp(V379))invalid_macro_call();
	base[2]= (V379->c.c_car);
	V379=V379->c.c_cdr;
	if(endp(V379))invalid_macro_call();
	base[3]= (V379->c.c_car);
	V379=V379->c.c_cdr;
	if(!endp(V379))invalid_macro_call();}
	V378=V378->c.c_cdr;
	if(endp(V378))invalid_macro_call();
	{object V380= (V378->c.c_car);
	if(endp(V380))invalid_macro_call();
	base[4]= (V380->c.c_car);
	V380=V380->c.c_cdr;
	if(endp(V380))invalid_macro_call();
	base[5]= (V380->c.c_car);
	V380=V380->c.c_cdr;
	if(endp(V380)){
	base[6]= Cnil;
	} else {
	base[6]= (V380->c.c_car);
	V380=V380->c.c_cdr;}
	if(endp(V380)){
	base[7]= Cnil;
	} else {
	base[7]= (V380->c.c_car);
	V380=V380->c.c_cdr;}
	if(endp(V380)){
	base[8]= Cnil;
	} else {
	base[8]= (V380->c.c_car);
	V380=V380->c.c_cdr;}
	if(!endp(V380))invalid_macro_call();}
	V378=V378->c.c_cdr;
	if(endp(V378))invalid_macro_call();
	base[9]= (V378->c.c_car);
	V378=V378->c.c_cdr;
	base[10]= V378;}
	V381= list(2,VV[92],base[2]);
	V382= list(2,base[5],Cnil);
	V383= list(2,base[4],Cnil);
	if((base[6])==Cnil){
	goto T538;}
	V384= VV[95];
	goto T536;
	goto T538;
T538:;
	V384= Cnil;
	goto T536;
T536:;
	V385= listA(6,/* INLINE-ARGS */V381,/* INLINE-ARGS */V382,VV[93],/* INLINE-ARGS */V383,VV[94],V384);
	V386= list(2,VV[97],base[3]);
	if((base[6])==Cnil){
	goto T542;}
	V387= VV[101];
	goto T540;
	goto T542;
T542:;
	V387= Cnil;
	goto T540;
T540:;
	V388= listA(3,VV[99],VV[100],V387);
	V389= list(4,VV[105],VV[106],list(3,VV[107],base[5],Ct),VV[108]);
	V390= list(2,VV[109],base[4]);
	V391= list(2,/* INLINE-ARGS */V390,list(3,VV[107],base[4],VV[43]));
	V392= list(2,VV[110],list(2,VV[111],base[4]));
	V393= list(4,VV[66],/* INLINE-ARGS */V391,list(3,/* INLINE-ARGS */V392,VV[112],list(3,VV[107],base[4],list(3,VV[113],base[4],VV[114]))),VV[115]);
	if((base[6])==Cnil){
	goto T546;}
	V394= VV[116];
	goto T544;
	goto T546;
T546:;
	V394= Cnil;
	goto T544;
T544:;
	V395= listA(6,VV[102],VV[103],VV[104],/* INLINE-ARGS */V389,/* INLINE-ARGS */V393,V394);
	if((base[6])==Cnil){
	goto T550;}
	V396= VV[117];
	goto T548;
	goto T550;
T550:;
	V396= Cnil;
	goto T548;
T548:;
	V397= list(4,VV[96],/* INLINE-ARGS */V386,VV[98],listA(4,VV[91],/* INLINE-ARGS */V388,/* INLINE-ARGS */V395,V396));
	if((base[6])==Cnil){
	goto T554;}
	V399= list(2,base[6],VV[119]);
	V400= list(2,base[7],VV[120]);
	V398= list(3,/* INLINE-ARGS */V399,/* INLINE-ARGS */V400,list(2,base[8],list(3,VV[121],VV[122],base[7])));
	goto T552;
	goto T554;
T554:;
	V398= Cnil;
	goto T552;
T552:;
	V401 = base[10];
	base[11]= list(4,VV[91],/* INLINE-ARGS */V385,/* INLINE-ARGS */V397,list(4,VV[72],VV[118],base[9],listA(3,VV[91],V398,V401)));
	vs_top=(vs_base=base+11)+1;
	return;
}
/*	local entry for function DFUN-ARG-SYMBOL	*/

static object LI51(V403)

object V403;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;{object V404;
	V404= nth(fix((V403)),(VV[123]->s.s_dbind));
	if(V404==Cnil)goto T556;
	{object V405 = V404;
	VMR48(V405)}
	goto T556;
T556:;}
	base[1]= Cnil;
	base[2]= VV[124];
	base[3]= (V403);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[125]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V406 = vs_base[0];
	VMR48(V406)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SLOT-VECTOR-SYMBOL	*/

static object LI52(V408)

object V408;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;{object V409;
	V409= nth(fix((V408)),(VV[126]->s.s_dbind));
	if(V409==Cnil)goto T563;
	{object V410 = V409;
	VMR49(V410)}
	goto T563;
T563:;}
	base[1]= Cnil;
	base[2]= VV[127];
	base[3]= (V408);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (VV[125]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V411 = vs_base[0];
	VMR49(V411)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-DFUN-LAMBDA-LIST	*/

static object LI53(V414,V415)

object V414;object V415;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{register object V416;
	register object V417;
	V416= Cnil;
	V417= Cnil;
	{register object V418;
	register object V419;
	register object V420;
	register object V421;
	V418= small_fixnum(0);
	V419= Cnil;
	V420= (V414);
	V421= Cnil;
	goto T579;
T579:;
	{object V422;
	V422= (V418);
	V418= number_plus((V418),small_fixnum(1));
	V419= (V422);}
	{object V423;
	if(!(((V420))==Cnil)){
	goto T589;}
	goto T573;
	goto T589;
T589:;
	V423= CMPcar((V420));
	V420= CMPcdr((V420));
	V421= (V423);}
	{register object V424;
	V424= (*(LnkLI203))((V419));
	if(((V416))!=Cnil){
	goto T596;}
	V417= make_cons((V424),Cnil);
	V416= (V417);
	goto T580;
	goto T596;
T596:;
	V426= make_cons((V424),Cnil);
	((V417))->c.c_cdr = /* INLINE-ARGS */V426;
	V425= (V417);
	V417= CMPcdr(V425);}
	goto T580;
T580:;
	goto T579;}
	goto T573;
T573:;
	if(((V415))==Cnil){
	goto T572;}
	if(((V416))!=Cnil){
	goto T607;}
	V417= make_cons(VV[128],Cnil);
	V416= (V417);
	goto T605;
	goto T607;
T607:;
	V429= make_cons(VV[128],Cnil);
	((V417))->c.c_cdr = /* INLINE-ARGS */V429;
	V428= (V417);
	V417= CMPcdr(V428);
	goto T605;
T605:;
	if(((V416))!=Cnil){
	goto T614;}
	V417= make_cons(VV[129],Cnil);
	V416= (V417);
	goto T572;
	goto T614;
T614:;
	V432= make_cons(VV[129],Cnil);
	((V417))->c.c_cdr = /* INLINE-ARGS */V432;
	V431= (V417);
	V417= CMPcdr(V431);
	goto T572;
T572:;
	{object V433 = (V416);
	VMR50(V433)}}
	return Cnil;
}
/*	local entry for function MAKE-DLAP-LAMBDA-LIST	*/

static object LI54(V436,V437)

object V436;object V437;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{register object V438;
	register object V439;
	V438= Cnil;
	V439= Cnil;
	{register object V440;
	register object V441;
	register object V442;
	register object V443;
	V440= small_fixnum(0);
	V441= Cnil;
	V442= (V436);
	V443= Cnil;
	goto T629;
T629:;
	{object V444;
	V444= (V440);
	V440= number_plus((V440),small_fixnum(1));
	V441= (V444);}
	{object V445;
	if(!(((V442))==Cnil)){
	goto T639;}
	goto T623;
	goto T639;
T639:;
	V445= CMPcar((V442));
	V442= CMPcdr((V442));
	V443= (V445);}
	{register object V446;
	V446= (*(LnkLI203))((V441));
	if(((V438))!=Cnil){
	goto T646;}
	V439= make_cons((V446),Cnil);
	V438= (V439);
	goto T630;
	goto T646;
T646:;
	V448= make_cons((V446),Cnil);
	((V439))->c.c_cdr = /* INLINE-ARGS */V448;
	V447= (V439);
	V439= CMPcdr(V447);}
	goto T630;
T630:;
	goto T629;}
	goto T623;
T623:;
	if(((V437))==Cnil){
	goto T622;}
	if(((V438))!=Cnil){
	goto T656;}
	V439= make_cons(VV[128],Cnil);
	V438= (V439);
	goto T622;
	goto T656;
T656:;
	V451= make_cons(VV[128],Cnil);
	((V439))->c.c_cdr = /* INLINE-ARGS */V451;
	V450= (V439);
	V439= CMPcdr(V450);
	goto T622;
T622:;
	{object V452 = (V438);
	VMR51(V452)}}
	return Cnil;
}
/*	local entry for function MAKE-EMF-CALL	*/

static object LI55(object V455,object V454,object V453,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB52 VMS52 VMV52
	{object V456;
	object V457;
	object V458;
	object V459;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V456= V455;
	V457= V454;
	V458= V453;
	narg = narg - 3;
	if (narg <= 0) goto T662;
	else {
	V459= first;}
	--narg; goto T663;
	goto T662;
T662:;
	V459= Cnil;
	goto T663;
T663:;
	{object V460;
	{register object V461;
	register object V462;
	V461= Cnil;
	V462= Cnil;
	{register object V463;
	register object V464;
	register object V465;
	register object V466;
	V463= small_fixnum(0);
	V464= Cnil;
	V465= (V456);
	V466= Cnil;
	goto T674;
T674:;
	{object V467;
	V467= (V463);
	V463= number_plus((V463),small_fixnum(1));
	V464= (V467);}
	{object V468;
	if(!(((V465))==Cnil)){
	goto T684;}
	goto T668;
	goto T684;
T684:;
	V468= CMPcar((V465));
	V465= CMPcdr((V465));
	V466= (V468);}
	{register object V469;
	V469= (*(LnkLI203))((V464));
	if(((V461))!=Cnil){
	goto T691;}
	V462= make_cons((V469),Cnil);
	V461= (V462);
	goto T675;
	goto T691;
T691:;
	V471= make_cons((V469),Cnil);
	((V462))->c.c_cdr = /* INLINE-ARGS */V471;
	V470= (V462);
	V462= CMPcdr(V470);}
	goto T675;
T675:;
	goto T674;}
	goto T668;
T668:;
	V460= (V461);}
	if(!(((V459))==(VV[130]))){
	goto T700;}
	V472= VV[131];
	goto T698;
	goto T700;
T700:;
	V472= VV[132];
	goto T698;
T698:;
	V473 = (V458);
	V474 = (V457);
	V475 = (V460);
	if(((V457))==Cnil){
	goto T704;}
	V476= VV[133];
	goto T702;
	goto T704;
T704:;
	V476= Cnil;
	goto T702;
T702:;
	{object V477 = listA(4,V472,V473,V474,append(V475,V476));
	VMR52(V477)}}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function MAKE-DFUN-CALL	*/

static object LI56(V481,V482,V483)

object V481;object V482;object V483;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	{object V484;
	{register object V485;
	register object V486;
	V485= Cnil;
	V486= Cnil;
	{register object V487;
	register object V488;
	register object V489;
	register object V490;
	V487= small_fixnum(0);
	V488= Cnil;
	V489= (V481);
	V490= Cnil;
	goto T715;
T715:;
	{object V491;
	V491= (V487);
	V487= number_plus((V487),small_fixnum(1));
	V488= (V491);}
	{object V492;
	if(!(((V489))==Cnil)){
	goto T725;}
	goto T709;
	goto T725;
T725:;
	V492= CMPcar((V489));
	V489= CMPcdr((V489));
	V490= (V492);}
	{register object V493;
	V493= (*(LnkLI203))((V488));
	if(((V485))!=Cnil){
	goto T732;}
	V486= make_cons((V493),Cnil);
	V485= (V486);
	goto T716;
	goto T732;
T732:;
	V495= make_cons((V493),Cnil);
	((V486))->c.c_cdr = /* INLINE-ARGS */V495;
	V494= (V486);
	V486= CMPcdr(V494);}
	goto T716;
T716:;
	goto T715;}
	goto T709;
T709:;
	V484= (V485);}
	if(((V482))==Cnil){
	goto T740;}
	{object V496 = listA(3,VV[134],(V483),append((V484),VV[135]));
	VMR53(V496)}
	goto T740;
T740:;
	{object V497 = listA(3,VV[136],(V483),(V484));
	VMR53(V497)}}
	return Cnil;
}
/*	local entry for function MAKE-DFUN-ARG-LIST	*/

static object LI57(V500,V501)

object V500;object V501;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	{object V502;
	{register object V503;
	register object V504;
	V503= Cnil;
	V504= Cnil;
	{register object V505;
	register object V506;
	register object V507;
	register object V508;
	V505= small_fixnum(0);
	V506= Cnil;
	V507= (V500);
	V508= Cnil;
	goto T751;
T751:;
	{object V509;
	V509= (V505);
	V505= number_plus((V505),small_fixnum(1));
	V506= (V509);}
	{object V510;
	if(!(((V507))==Cnil)){
	goto T761;}
	goto T745;
	goto T761;
T761:;
	V510= CMPcar((V507));
	V507= CMPcdr((V507));
	V508= (V510);}
	{register object V511;
	V511= (*(LnkLI203))((V506));
	if(((V503))!=Cnil){
	goto T768;}
	V504= make_cons((V511),Cnil);
	V503= (V504);
	goto T752;
	goto T768;
T768:;
	V513= make_cons((V511),Cnil);
	((V504))->c.c_cdr = /* INLINE-ARGS */V513;
	V512= (V504);
	V504= CMPcdr(V512);}
	goto T752;
T752:;
	goto T751;}
	goto T745;
T745:;
	V502= (V503);}
	if(((V501))==Cnil){
	goto T776;}
	V514= append((V502),VV[138]);
	{object V515 = make_cons(VV[137],/* INLINE-ARGS */V514);
	VMR54(V515)}
	goto T776;
T776:;
	{object V516 = make_cons(VV[139],(V502));
	VMR54(V516)}}
	return Cnil;
}
/*	local entry for function MAKE-FAST-METHOD-CALL-LAMBDA-LIST	*/

static object LI58(V519,V520)

object V519;object V520;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{register object V521;
	register object V522;
	V521= Cnil;
	V522= Cnil;
	if(((V521))!=Cnil){
	goto T783;}
	V522= make_cons(VV[140],Cnil);
	V521= (V522);
	goto T781;
	goto T783;
T783:;
	V525= make_cons(VV[140],Cnil);
	((V522))->c.c_cdr = /* INLINE-ARGS */V525;
	V524= (V522);
	V522= CMPcdr(V524);
	goto T781;
T781:;
	if(((V521))!=Cnil){
	goto T791;}
	V522= make_cons(VV[141],Cnil);
	V521= (V522);
	goto T789;
	goto T791;
T791:;
	V528= make_cons(VV[141],Cnil);
	((V522))->c.c_cdr = /* INLINE-ARGS */V528;
	V527= (V522);
	V522= CMPcdr(V527);
	goto T789;
T789:;
	{register object V529;
	register object V530;
	register object V531;
	register object V532;
	V529= small_fixnum(0);
	V530= Cnil;
	V531= (V519);
	V532= Cnil;
	goto T803;
T803:;
	{object V533;
	V533= (V529);
	V529= number_plus((V529),small_fixnum(1));
	V530= (V533);}
	{object V534;
	if(!(((V531))==Cnil)){
	goto T813;}
	goto T797;
	goto T813;
T813:;
	V534= CMPcar((V531));
	V531= CMPcdr((V531));
	V532= (V534);}
	{register object V535;
	V535= (*(LnkLI203))((V530));
	if(((V521))!=Cnil){
	goto T820;}
	V522= make_cons((V535),Cnil);
	V521= (V522);
	goto T804;
	goto T820;
T820:;
	V537= make_cons((V535),Cnil);
	((V522))->c.c_cdr = /* INLINE-ARGS */V537;
	V536= (V522);
	V522= CMPcdr(V536);}
	goto T804;
T804:;
	goto T803;}
	goto T797;
T797:;
	if(((V520))==Cnil){
	goto T780;}
	if(((V521))!=Cnil){
	goto T830;}
	V522= make_cons(VV[129],Cnil);
	V521= (V522);
	goto T780;
	goto T830;
T830:;
	V540= make_cons(VV[129],Cnil);
	((V522))->c.c_cdr = /* INLINE-ARGS */V540;
	V539= (V522);
	V522= CMPcdr(V539);
	goto T780;
T780:;
	{object V541 = (V521);
	VMR55(V541)}}
	return Cnil;
}
/*	macro definition for FIN-LAMBDA-FN	*/

static void L59()
{register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V542=base[0]->c.c_cdr;
	if(endp(V542))invalid_macro_call();
	base[2]= (V542->c.c_car);
	V542=V542->c.c_cdr;
	base[3]= V542;}
	base[4]= list(2,VV[142],listA(3,VV[143],base[2],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function MAKE-DISPATCH-LAMBDA	*/

static object LI60(V547,V548,V549,V550)

object V547;object V548;object V549;object V550;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;
	if(((V547))==Cnil){
	goto T838;}
	V551= (*(LnkLI204))((V548),(V549));
	goto T836;
	goto T838;
T838:;
	V551= (*(LnkLI205))((V548),(V549));
	goto T836;
T836:;
	if(((V547))!=Cnil){
	goto T842;}
	V552= VV[144];
	goto T840;
	goto T842;
T842:;
	V552= Cnil;
	goto T840;
T840:;
	V553 = (V550);
	{object V554 = listA(3,VV[143],V551,append(V552,V553));
	VMR57(V554)}
	return Cnil;
}
/*	macro definition for WITH-LOCAL-CACHE-FUNCTIONS	*/

static void L61()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V555=base[0]->c.c_cdr;
	if(endp(V555))invalid_macro_call();
	{object V556= (V555->c.c_car);
	if(endp(V556))invalid_macro_call();
	base[2]= (V556->c.c_car);
	V556=V556->c.c_cdr;
	if(!endp(V556))invalid_macro_call();}
	V555=V555->c.c_cdr;
	base[3]= V555;}
	V557= list(2,VV[145],base[2]);
	V558= make_cons(/* INLINE-ARGS */V557,Cnil);
	{object V560;
	object V561= VV[150];
	if(V561==Cnil){
	V559= Cnil;
	goto T844;}
	base[4]=V560=MMcons(Cnil,Cnil);
	goto T845;
T845:;
	{register object V562;
	V562= (V561->c.c_car);
	V563= CMPcar((V562));
	V564= CMPcadr((V562));
	{object V566;
	object V567= CMPcadr((V562));
	if(V567==Cnil){
	V565= Cnil;
	goto T847;}
	base[5]=V566=MMcons(Cnil,Cnil);
	goto T848;
T848:;
	(V566->c.c_car)= list(3,VV[139],list(2,VV[149],(V567->c.c_car)),(V567->c.c_car));
	if((V567=MMcdr(V567))==Cnil){
	V565= base[5];
	goto T847;}
	V566=MMcdr(V566)=MMcons(Cnil,Cnil);
	goto T848;}
	goto T847;
T847:;
	V569= make_cons(VV[139],V565);
	(V560->c.c_car)= list(3,/* INLINE-ARGS */V563,/* INLINE-ARGS */V564,list(4,VV[137],VV[148],/* INLINE-ARGS */V569,list(2,VV[149],CMPcddr((V562)))));}
	if((V561=MMcdr(V561))==Cnil){
	V559= base[4];
	goto T844;}
	V560=MMcdr(V560)=MMcons(Cnil,Cnil);
	goto T845;}
	goto T844;
T844:;
	V570 = base[3];
	base[4]= list(4,VV[10],/* INLINE-ARGS */V558,VV[146],listA(3,VV[147],V559,V570));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function FILL-CACHE	*/

static object LI62(object V573,object V572,object V571,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB59 VMS59 VMV59
	{register object V574;
	register object V575;
	object V576;
	object V577;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V574= V573;
	V575= V572;
	V576= V571;
	narg = narg - 3;
	if (narg <= 0) goto T850;
	else {
	V577= first;}
	--narg; goto T851;
	goto T850;
T850:;
	V577= Cnil;
	goto T851;
T851:;
	if(((V575))!=Cnil){
	goto T853;}
	base[0]= VV[151];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T853;
T853:;{object V578;
	V578= (*(LnkLI206))(Cnil,(V574),(V575),(V576));
	if(V578==Cnil)goto T857;
	{object V579 = V578;
	VMR59(V579)}
	goto T857;
T857:;}{object V580;
	V582 = CMPmake_fixnum((long)(*(LnkLI207))((V574)));
	base[0]= number_times(V582,VV[152]);
	vs_top=(vs_base=base+0)+1;
	Lceiling();
	vs_top=sup;
	V581= vs_base[0];
	if(!(((long)STREF(unsigned short,(V574),4))==(1))){
	goto T867;}
	V583= one_minus(CMPmake_fixnum((long)STREF(fixnum,(V574),12)));
	goto T865;
	goto T867;
T867:;
	V583= CMPmake_fixnum((long)STREF(fixnum,(V574),12));
	goto T865;
T865:;
	if(number_compare(V581,V583)<0){
	goto T861;}
	V580= Cnil;
	goto T860;
	goto T861;
T861:;
	V580= (*(LnkLI208))((V574),(V575),(V576),(V577));
	goto T860;
T860:;
	if(V580==Cnil)goto T859;
	{object V584 = V580;
	VMR59(V584)}
	goto T859;
T859:;}
	{object V585 = (*(LnkLI209))((V574),(V575),(V576),(V577));
	VMR59(V585)}
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
	{object V586=base[0]->c.c_cdr;
	if(endp(V586))invalid_macro_call();
	base[2]= (V586->c.c_car);
	V586=V586->c.c_cdr;
	if(!endp(V586))invalid_macro_call();}
	base[3]= list(3,VV[9],list(3,VV[105],VV[153],list(2,VV[154],base[2])),base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function CHECK-CACHE	*/

static object LI64(V588)

object V588;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	{register object V589;
	V589= (V588);
	{register object V590;
	object V591;
	V592= (long)STREF(unsigned short,(V589),4);
	if(!((V592)==(1))){
	goto T871;}
	V590= small_fixnum(0);
	goto T869;
	goto T871;
T871:;
	V590= small_fixnum(1);
	goto T869;
T869:;
	V593= STREF(object,(V589),20);
	V594= CMPmake_fixnum((long)STREF(fixnum,(V589),12));
	V591= (
	V595 = V593,
	(type_of(V595) == t_sfun ?(*((V595)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V595)==t_vfun) ?
	(*((V595)->sfn.sfn_self)):
	(fcall.fun=(V595),fcalln))(V594));
	{long V596;
	register long V597;
	V596= (long)STREF(fixnum,(V589),12);
	V597= 0;
	goto T880;
T880:;
	if(!((V597)>=(V596))){
	goto T881;}
	{object V598 = (V588);
	VMR61(V598)}
	goto T881;
T881:;
	{long V599;
	V599= fix((V590));
	V600= (long)STREF(unsigned short,(V589),4);
	if((V600)==(1)){
	goto T889;}
	goto T887;
	goto T889;
T889:;
	if((V599)==(0)){
	goto T884;}}
	goto T887;
T887:;
	{object V601;
	V601= CMPmake_fixnum(V597);
	{long V602;
	V602= fix((V601));
	V603= (long)STREF(unsigned short,(V589),4);
	if((V603)==(1)){
	goto T897;}
	goto T893;
	goto T897;
T897:;
	if(!((V602)==(0))){
	goto T893;}}
	base[0]= VV[155];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T893;
T893:;
	V604= STREF(object,(V589),40);
	{register long V606;
	V606= fix((V601));
	{long V607;
	V607= V606;
	V608= (long)STREF(unsigned short,(V589),4);
	if((V608)==(1)){
	goto T908;}
	goto T904;
	goto T908;
T908:;
	if(!((V607)==(0))){
	goto T904;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T904;
T904:;
	V609= (long)STREF(unsigned short,(V589),4);
	if(!((V609)==(1))){
	goto T913;}
	V610 = V606;
	V611= (long)STREF(unsigned short,(V589),32);
	V605= (long)(V610)*(V611);
	goto T902;
	goto T913;
T913:;
	V612 = V606;
	V613= (long)STREF(unsigned short,(V589),32);
	V605= (long)((long)(V612)*(V613))+1;}
	goto T902;
T902:;
	if(!(((((V604)->v.v_self[V605])==Cnil?Ct:Cnil))==Cnil)){
	goto T884;}}
	{register object V614;
	object V615;
	register object V616;
	V614= (VFUN_NARGS=2,(*(LnkLI210))((V588),(V590)));
	{long V617;
	{long V618;
	V618= fix((V614));
	V619= (long)STREF(unsigned short,(V589),4);
	if((V619)==(1)){
	goto T925;}
	goto T922;
	goto T925;
T925:;
	if(!((V618)==(0))){
	goto T922;}}
	{long V620;
	V620= fix((V614));
	V621 = V620;
	V622= (long)STREF(fixnum,(V589),36);
	if(!((V621)==(V622))){
	goto T930;}
	V623= (long)STREF(unsigned short,(V589),4);
	if(!((V623)==(1))){
	goto T934;}
	V617= (long)STREF(unsigned short,(V589),32);
	goto T920;
	goto T934;
T934:;
	V617= 1;
	goto T920;
	goto T930;
T930:;
	V624 = V620;
	V625= (long)STREF(unsigned short,(V589),32);
	V617= (long)(V624)+(V625);
	goto T920;}
	goto T922;
T922:;
	V617= fix((V614));
	goto T920;
T920:;
	V626= (long)STREF(unsigned short,(V589),4);
	if(!((V626)==(1))){
	goto T939;}
	base[3]= CMPmake_fixnum(V617);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V589),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V615= vs_base[0];
	goto T919;
	goto T939;
T939:;
	base[3]= CMPmake_fixnum((long)(V617)-1);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V589),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V615= vs_base[0];}
	goto T919;
T919:;
	if(((V615))==Cnil){
	goto T948;}
	{long V627;
	long V628;
	V627= fix((V615));
	V628= V597;
	{register long V629;
	V629= (long)(V628)-(V627);
	if(!((V629)<0)){
	goto T953;}
	V630 = V629;
	V631= (long)STREF(fixnum,(V589),12);
	V629= (long)(V630)+(V631);
	{long V632;
	V632= 0;
	V633= (long)STREF(unsigned short,(V589),4);
	if((V633)==(1)){
	goto T962;}
	goto T953;
	goto T962;
T962:;
	if(!((V632)==(0))){
	goto T953;}}
	V629= (long)(V629)-1;
	goto T953;
T953:;
	V616= CMPmake_fixnum(V629);
	goto T946;}}
	goto T948;
T948:;
	V616= Cnil;
	goto T946;
T946:;
	if(((V616))==Cnil){
	goto T884;}
	if(!(number_compare((V616),(V591))>0)){
	goto T884;}
	base[3]= VV[157];
	base[4]= (V588);
	base[5]= (V590);
	base[6]= (V616);
	base[7]= (V591);
	vs_top=(vs_base=base+3)+5;
	Lerror();
	vs_top=sup;}
	goto T884;
T884:;
	{long V634;
	V634= fix((V590));
	V635 = V634;
	V636= (long)STREF(fixnum,(V589),36);
	if(!((V635)==(V636))){
	goto T979;}
	V637= (long)STREF(unsigned short,(V589),4);
	if(!((V637)==(1))){
	goto T983;}
	V590= CMPmake_fixnum((long)STREF(unsigned short,(V589),32));
	goto T976;
	goto T983;
T983:;
	V590= small_fixnum(1);
	goto T976;
	goto T979;
T979:;
	V638 = V634;
	V639= (long)STREF(unsigned short,(V589),32);
	V590= CMPmake_fixnum((long)(V638)+(V639));}
	goto T976;
T976:;
	V597= (long)(V597)+1;
	goto T880;}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PROBE-CACHE	*/

static object LI65(object V641,object V640,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB62 VMS62 VMV62
	{object V642;
	object V643;
	object V644;
	object V645;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V642= V641;
	V643= V640;
	narg = narg - 2;
	if (narg <= 0) goto T990;
	else {
	V644= first;}
	if (--narg <= 0) goto T991;
	else {
	V645= va_arg(ap,object);}
	--narg; goto T992;
	goto T990;
T990:;
	V644= Cnil;
	goto T991;
T991:;
	V645= Cnil;
	goto T992;
T992:;
	if(((V643))!=Cnil){
	goto T995;}
	base[0]= VV[158];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T995;
T995:;
	{register object V646;
	V646= (V642);
	{register long V647;
	long V648;
	V649= (long)STREF(unsigned char,(V646),16);
	V650= (long)STREF(fixnum,(V646),24);
	V651 = (V643);
	V647= (long)(*(LnkLI211))(V649,V650,V651);
	if((V645)==Cnil){
	goto T1005;}
	V652= V645;
	goto T1003;
	goto T1005;
T1005:;
	V652= STREF(object,(V646),20);
	goto T1003;
T1003:;
	V654= CMPmake_fixnum((long)STREF(fixnum,(V646),12));
	V648= fix((
	V655 = V652,
	(type_of(V655) == t_sfun ?(*((V655)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V655)==t_vfun) ?
	(*((V655)->sfn.sfn_self)):
	(fcall.fun=(V655),fcalln))(V654)));
	{long V656;
	V656= V647;
	V657= (long)STREF(unsigned short,(V646),4);
	if((V657)==(1)){
	goto T1012;}
	goto T1008;
	goto T1012;
T1012:;
	if(!((V656)==(0))){
	goto T1008;}}
	{long V658;
	V658= V647;
	V659 = V658;
	V660= (long)STREF(fixnum,(V646),36);
	if(!((V659)==(V660))){
	goto T1018;}
	V661= (long)STREF(unsigned short,(V646),4);
	if(!((V661)==(1))){
	goto T1022;}
	V647= (long)STREF(unsigned short,(V646),32);
	goto T1015;
	goto T1022;
T1022:;
	V647= 1;
	goto T1015;
	goto T1018;
T1018:;
	V662 = V658;
	V663= (long)STREF(unsigned short,(V646),32);
	V647= (long)(V662)+(V663);}
	goto T1015;
T1015:;
	goto T1008;
T1008:;
	{long V664;
	long V665;
	V664= (long)(V648)+1;
	V665= 0;
	goto T1030;
T1030:;
	if(!((V665)>=(V664))){
	goto T1031;}
	goto T1026;
	goto T1031;
T1031:;
	{register long V666;
	register object V667;
	V666= V647;
	V667= (V643);
	{register object V668;
	V668= STREF(object,(V646),40);
	V669= (long)STREF(unsigned short,(V646),4);
	if(!((V669)==(1))){
	goto T1040;}
	if(!(((V667))==(((V668))->v.v_self[V666]))){
	goto T1034;}
	goto T1036;
	goto T1040;
T1040:;
	{long V670;
	register long V671;
	V670= (long)STREF(unsigned short,(V646),4);
	V671= 0;
	goto T1046;
T1046:;
	if(!((V671)>=(V670))){
	goto T1047;}
	goto T1036;
	goto T1047;
T1047:;
	{object V673;
	V673= CMPcar((V667));
	V667= CMPcdr((V667));
	V672= (V673);}
	if((V672)==(((V668))->v.v_self[(long)(V666)+(V671)])){
	goto T1050;}
	goto T1034;
	goto T1050;
T1050:;
	V671= (long)(V671)+1;
	goto T1046;}}}
	goto T1036;
T1036:;
	V674= STREF(object,(V646),8);
	if(!((V674)==Cnil)){
	goto T1060;}
	{object V675 = Ct;
	VMR62(V675)}
	goto T1060;
T1060:;
	{long V676;
	V676= V647;
	if((STREF(object,(V646),8))!=Cnil){
	goto T1064;}
	{object V677 = Cnil;
	VMR62(V677)}
	goto T1064;
T1064:;
	V678= STREF(object,(V646),40);
	V679 = V676;
	V680= (long)STREF(unsigned short,(V646),4);
	{object V681 = (V678)->v.v_self[(long)(V679)+(V680)];
	VMR62(V681)}}
	goto T1034;
T1034:;
	{long V682;
	V682= V647;
	V683 = V682;
	V684= (long)STREF(fixnum,(V646),36);
	if(!((V683)==(V684))){
	goto T1072;}
	V685= (long)STREF(unsigned short,(V646),4);
	if(!((V685)==(1))){
	goto T1076;}
	V647= (long)STREF(unsigned short,(V646),32);
	goto T1069;
	goto T1076;
T1076:;
	V647= 1;
	goto T1069;
	goto T1072;
T1072:;
	V686 = V682;
	V687= (long)STREF(unsigned short,(V646),32);
	V647= (long)(V686)+(V687);}
	goto T1069;
T1069:;
	V665= (long)(V665)+1;
	goto T1030;}
	goto T1026;
T1026:;
	{register object V688;
	object V689;
	V688= STREF(object,(V646),44);
	V689= CMPcar((V688));
	goto T1087;
T1087:;
	if(!(((V688))==Cnil)){
	goto T1088;}
	goto T1083;
	goto T1088;
T1088:;
	if(!(equal(CMPcar((V689)),(V643)))){
	goto T1092;}
	V690= STREF(object,(V646),8);
	if(!((V690)==Cnil)){
	goto T1095;}
	{object V691 = Ct;
	VMR62(V691)}
	goto T1095;
T1095:;
	{object V692 = CMPcdr((V689));
	VMR62(V692)}
	goto T1092;
T1092:;
	V688= CMPcdr((V688));
	V689= CMPcar((V688));
	goto T1087;}
	goto T1083;
T1083:;
	{object V693 = (V644);
	VMR62(V693)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAP-CACHE	*/

static object LI66(object V695,object V694,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB63 VMS63 VMV63
	{object V696;
	object V697;
	object V698;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V696= V695;
	V697= V694;
	narg = narg - 2;
	if (narg <= 0) goto T1103;
	else {
	V698= first;}
	--narg; goto T1104;
	goto T1103;
T1103:;
	V698= Cnil;
	goto T1104;
T1104:;
	{register object V699;
	V699= (V697);
	{object V700;
	if((V698)==Cnil){
	V700= Cnil;
	goto T1107;}
	V700= STREF(object,(V699),8);
	goto T1107;
T1107:;
	{long V701;
	register long V702;
	V701= (long)STREF(fixnum,(V699),12);
	V702= 0;
	goto T1112;
T1112:;
	if(!((V702)>=(V701))){
	goto T1113;}
	goto T1108;
	goto T1113;
T1113:;
	{long V703;
	V703= V702;
	V704= (long)STREF(unsigned short,(V699),4);
	if((V704)==(1)){
	goto T1121;}
	goto T1119;
	goto T1121;
T1121:;
	if((V703)==(0)){
	goto T1116;}}
	goto T1119;
T1119:;
	{long V705;
	V705= V702;
	{long V707;
	V707= V705;
	V708= (long)STREF(unsigned short,(V699),4);
	if((V708)==(1)){
	goto T1130;}
	goto T1126;
	goto T1130;
T1130:;
	if(!((V707)==(0))){
	goto T1126;}}
	base[0]= VV[159];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1126;
T1126:;
	{long V709;
	register object V710;
	{long V711;
	V711= V705;
	{long V712;
	V712= V711;
	V713= (long)STREF(unsigned short,(V699),4);
	if((V713)==(1)){
	goto T1140;}
	goto T1136;
	goto T1140;
T1140:;
	if(!((V712)==(0))){
	goto T1136;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1136;
T1136:;
	V714= (long)STREF(unsigned short,(V699),4);
	if(!((V714)==(1))){
	goto T1145;}
	V715 = V711;
	V716= (long)STREF(unsigned short,(V699),32);
	V709= (long)(V715)*(V716);
	goto T1134;
	goto T1145;
T1145:;
	V717 = V711;
	V718= (long)STREF(unsigned short,(V699),32);
	V709= (long)((long)(V717)*(V718))+1;}
	goto T1134;
T1134:;
	V710= Cnil;
	{object V719;
	object V720;
	V719= STREF(object,(V699),40);
	V720= (((V710))==Cnil?Ct:Cnil);
	{long V721;
	register long V722;
	V721= (long)STREF(unsigned short,(V699),4);
	V722= 0;
	goto T1155;
T1155:;
	if(!((V722)>=(V721))){
	goto T1156;}
	if(((V720))==Cnil){
	goto T1116;}
	goto T1124;
	goto T1156;
T1156:;
	{register object V723;
	V723= ((V719))->v.v_self[(long)(V709)+(V722)];
	if(((V723))==Cnil){
	goto T1162;}
	if(!((((((V723))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1161;}
	goto T1162;
T1162:;
	goto T1116;
	goto T1161;
T1161:;
	if(((V710))==Cnil){
	goto T1166;}
	V724 = (V723);
	if(!(type_of((V710))==t_cons)){
	goto T1172;}
	{object V726;
	V726= CMPcar((V710));
	V710= CMPcdr((V710));
	V725= (V726);
	goto T1170;}
	goto T1172;
T1172:;
	V725= (V710);
	goto T1170;
T1170:;
	if((V724)==(V725)){
	goto T1159;}
	goto T1166;
T1166:;
	V720= Ct;}
	goto T1159;
T1159:;
	V722= (long)(V722)+1;
	goto T1155;}}}}
	goto T1124;
T1124:;
	{object V727;
	V728 = (V696);
	{long V730;
	V730= V702;
	{long V731;
	V731= V730;
	V732= (long)STREF(unsigned short,(V699),4);
	if((V732)==(1)){
	goto T1188;}
	goto T1184;
	goto T1188;
T1188:;
	if(!((V731)==(0))){
	goto T1184;}}
	base[0]= VV[160];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1184;
T1184:;
	{long V733;
	{long V734;
	V734= V730;
	{long V735;
	V735= V734;
	V736= (long)STREF(unsigned short,(V699),4);
	if((V736)==(1)){
	goto T1198;}
	goto T1194;
	goto T1198;
T1198:;
	if(!((V735)==(0))){
	goto T1194;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1194;
T1194:;
	V737= (long)STREF(unsigned short,(V699),4);
	if(!((V737)==(1))){
	goto T1203;}
	V738 = V734;
	V739= (long)STREF(unsigned short,(V699),32);
	V733= (long)(V738)*(V739);
	goto T1192;
	goto T1203;
T1203:;
	V740 = V734;
	V741= (long)STREF(unsigned short,(V699),32);
	V733= (long)((long)(V740)*(V741))+1;}
	goto T1192;
T1192:;
	V742= (long)STREF(unsigned short,(V699),4);
	if(!((V742)==(1))){
	goto T1209;}
	V743= STREF(object,(V699),40);
	V744 = V733;
	V729= (V743)->v.v_self[V744];
	goto T1182;
	goto T1209;
T1209:;
	{object V745;
	object V746;
	base[0]= CMPmake_fixnum((long)STREF(unsigned short,(V699),4));
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	V745= vs_base[0];
	V746= STREF(object,(V699),40);
	{long V747;
	register long V748;
	V747= (long)STREF(unsigned short,(V699),4);
	V748= 0;
	goto T1219;
T1219:;
	if(!((V748)>=(V747))){
	goto T1220;}
	V729= (V745);
	goto T1182;
	goto T1220;
T1220:;
	{object V749;
	object V751;
	V749= CMPmake_fixnum(V748);
	V751= ((V746))->v.v_self[(long)(V733)+(V748)];
	(nthcdr(fix((V749)),V745))->c.c_car = (V751);
	(void)(nthcdr(fix((V749)),V745));}
	V748= (long)(V748)+1;
	goto T1219;}}}}
	goto T1182;
T1182:;
	{long V753;
	V753= V702;
	{long V754;
	V754= V753;
	V755= (long)STREF(unsigned short,(V699),4);
	if((V755)==(1)){
	goto T1236;}
	goto T1232;
	goto T1236;
T1236:;
	if(!((V754)==(0))){
	goto T1232;}}
	base[0]= VV[161];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1232;
T1232:;
	{long V756;
	{long V757;
	V757= V753;
	{long V758;
	V758= V757;
	V759= (long)STREF(unsigned short,(V699),4);
	if((V759)==(1)){
	goto T1246;}
	goto T1242;
	goto T1246;
T1246:;
	if(!((V758)==(0))){
	goto T1242;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1242;
T1242:;
	V760= (long)STREF(unsigned short,(V699),4);
	if(!((V760)==(1))){
	goto T1251;}
	V761 = V757;
	V762= (long)STREF(unsigned short,(V699),32);
	V756= (long)(V761)*(V762);
	goto T1240;
	goto T1251;
T1251:;
	V763 = V757;
	V764= (long)STREF(unsigned short,(V699),32);
	V756= (long)((long)(V763)*(V764))+1;}
	goto T1240;
T1240:;
	if((STREF(object,(V699),8))!=Cnil){
	goto T1256;}
	V752= Cnil;
	goto T1230;
	goto T1256;
T1256:;
	V765= STREF(object,(V699),40);
	V766 = V756;
	V767= (long)STREF(unsigned short,(V699),4);
	V752= (V765)->v.v_self[(long)(V766)+(V767)];}}
	goto T1230;
T1230:;
	V727= (
	V768 = V728,
	(type_of(V768) == t_sfun ?(*((V768)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V768)==t_vfun) ?
	(*((V768)->sfn.sfn_self)):
	(fcall.fun=(V768),fcalln))(V729,V752));
	if(((V700))==Cnil){
	goto T1116;}
	V769= STREF(object,(V699),40);
	{long V771;
	V771= V702;
	{long V772;
	V772= V771;
	V773= (long)STREF(unsigned short,(V699),4);
	if((V773)==(1)){
	goto T1269;}
	goto T1265;
	goto T1269;
T1269:;
	if(!((V772)==(0))){
	goto T1265;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1265;
T1265:;
	V774= (long)STREF(unsigned short,(V699),4);
	if(!((V774)==(1))){
	goto T1274;}
	V775 = V771;
	V776= (long)STREF(unsigned short,(V699),32);
	V770= CMPmake_fixnum((long)(V775)*(V776));
	goto T1263;
	goto T1274;
T1274:;
	V777 = V771;
	V778= (long)STREF(unsigned short,(V699),32);
	V770= CMPmake_fixnum((long)((long)(V777)*(V778))+1);}
	goto T1263;
T1263:;
	V779= CMPmake_fixnum((long)STREF(unsigned short,(V699),4));
	{long V780= fix(number_plus(V770,V779));
	V781 = (V727);
	(void)((V769)->v.v_self[/* INLINE-ARGS */V780]= (V781));}}
	goto T1116;
T1116:;
	V702= (long)(V702)+1;
	goto T1112;}
	goto T1108;
T1108:;
	{object V782;
	object V783;
	V782= STREF(object,(V699),44);
	V783= CMPcar((V782));
	goto T1286;
T1286:;
	if(!(((V782))==Cnil)){
	goto T1287;}
	goto T1106;
	goto T1287;
T1287:;
	{object V784;
	V784= (
	(type_of((V696)) == t_sfun ?(*(((V696))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V696))==t_vfun) ?
	(*(((V696))->sfn.sfn_self)):
	(fcall.fun=((V696)),fcalln))(CMPcar((V783)),CMPcdr((V783))));
	if(((V700))==Cnil){
	goto T1291;}
	(V783)->c.c_cdr = V784;}
	goto T1291;
T1291:;
	V782= CMPcdr((V782));
	V783= CMPcar((V782));
	goto T1286;}}}
	goto T1106;
T1106:;
	{object V787 = (V697);
	VMR63(V787)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function CACHE-COUNT	*/

static object LI67(V789)

object V789;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	{register object V790;
	V790= (V789);
	{register long V791;
	V791= 0;
	{long V792;
	register long V793;
	V792= (long)STREF(fixnum,(V790),12);
	V793= 0;
	goto T1305;
T1305:;
	if(!((V793)>=(V792))){
	goto T1306;}
	{long V794 = V791;
	VMR64((object)V794)}
	goto T1306;
T1306:;
	{register long V795;
	V795= V793;
	V796= (long)STREF(unsigned short,(V790),4);
	if((V796)==(1)){
	goto T1313;}
	goto T1311;
	goto T1313;
T1313:;
	if((V795)==(0)){
	goto T1309;}}
	goto T1311;
T1311:;
	{register object V797;
	V797= CMPmake_fixnum(V793);
	{register long V798;
	V798= fix((V797));
	V799= (long)STREF(unsigned short,(V790),4);
	if((V799)==(1)){
	goto T1322;}
	goto T1318;
	goto T1322;
T1322:;
	if(!((V798)==(0))){
	goto T1318;}}
	base[0]= VV[155];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1318;
T1318:;
	V800= STREF(object,(V790),40);
	{register long V802;
	V802= fix((V797));
	{register long V803;
	V803= V802;
	V804= (long)STREF(unsigned short,(V790),4);
	if((V804)==(1)){
	goto T1333;}
	goto T1329;
	goto T1333;
T1333:;
	if(!((V803)==(0))){
	goto T1329;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1329;
T1329:;
	V805= (long)STREF(unsigned short,(V790),4);
	if(!((V805)==(1))){
	goto T1338;}
	V806 = V802;
	V807= (long)STREF(unsigned short,(V790),32);
	V801= (long)(V806)*(V807);
	goto T1327;
	goto T1338;
T1338:;
	V808 = V802;
	V809= (long)STREF(unsigned short,(V790),32);
	V801= (long)((long)(V808)*(V809))+1;}
	goto T1327;
T1327:;
	if(!(((((V800)->v.v_self[V801])==Cnil?Ct:Cnil))==Cnil)){
	goto T1309;}}
	V791= (long)(V791)+(1);
	goto T1309;
T1309:;
	V793= (long)(V793)+1;
	goto T1305;}}}
	base[0]=base[0];
}
/*	local entry for function ENTRY-IN-CACHE-P	*/

static object LI68(V813,V814,V815)

object V813;object V814;object V815;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	{register object V816;
	V816= (V813);
	{long V817;
	register long V818;
	V817= (long)STREF(fixnum,(V816),12);
	V818= 0;
	goto T1350;
T1350:;
	if(!((V818)>=(V817))){
	goto T1351;}
	{object V819 = Cnil;
	VMR65(V819)}
	goto T1351;
T1351:;
	{long V820;
	V820= V818;
	V821= (long)STREF(unsigned short,(V816),4);
	if((V821)==(1)){
	goto T1358;}
	goto T1356;
	goto T1358;
T1358:;
	if((V820)==(0)){
	goto T1354;}}
	goto T1356;
T1356:;
	{long V823;
	V823= V818;
	{long V824;
	V824= V823;
	V825= (long)STREF(unsigned short,(V816),4);
	if((V825)==(1)){
	goto T1369;}
	goto T1365;
	goto T1369;
T1369:;
	if(!((V824)==(0))){
	goto T1365;}}
	base[0]= VV[160];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1365;
T1365:;
	{long V826;
	{register long V827;
	V827= V823;
	{long V828;
	V828= V827;
	V829= (long)STREF(unsigned short,(V816),4);
	if((V829)==(1)){
	goto T1379;}
	goto T1375;
	goto T1379;
T1379:;
	if(!((V828)==(0))){
	goto T1375;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1375;
T1375:;
	V830= (long)STREF(unsigned short,(V816),4);
	if(!((V830)==(1))){
	goto T1384;}
	V831 = V827;
	V832= (long)STREF(unsigned short,(V816),32);
	V826= (long)(V831)*(V832);
	goto T1373;
	goto T1384;
T1384:;
	V833 = V827;
	V834= (long)STREF(unsigned short,(V816),32);
	V826= (long)((long)(V833)*(V834))+1;}
	goto T1373;
T1373:;
	V835= (long)STREF(unsigned short,(V816),4);
	if(!((V835)==(1))){
	goto T1390;}
	V836= STREF(object,(V816),40);
	V837 = V826;
	V822= (V836)->v.v_self[V837];
	goto T1363;
	goto T1390;
T1390:;
	{register object V838;
	object V839;
	base[0]= CMPmake_fixnum((long)STREF(unsigned short,(V816),4));
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	V838= vs_base[0];
	V839= STREF(object,(V816),40);
	{long V840;
	register long V841;
	V840= (long)STREF(unsigned short,(V816),4);
	V841= 0;
	goto T1400;
T1400:;
	if(!((V841)>=(V840))){
	goto T1401;}
	V822= (V838);
	goto T1363;
	goto T1401;
T1401:;
	{object V842;
	register object V844;
	V842= CMPmake_fixnum(V841);
	V844= ((V839))->v.v_self[(long)(V826)+(V841)];
	(nthcdr(fix((V842)),V838))->c.c_car = (V844);
	(void)(nthcdr(fix((V842)),V838));}
	V841= (long)(V841)+1;
	goto T1400;}}}}
	goto T1363;
T1363:;
	V845 = (V814);
	if(!(equal(V822,V845))){
	goto T1354;}
	{object V846 = Ct;
	VMR65(V846)}
	goto T1354;
T1354:;
	V818= (long)(V818)+1;
	goto T1350;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FILL-CACHE-P	*/

static object LI69(V851,V852,V853,V854)

object V851;object V852;object V853;object V854;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	{long V856;
	long V857;
	V858= (long)STREF(unsigned char,V852,16);
	V859= (long)STREF(fixnum,V852,24);
	V860 = (V853);
	V856= (long)(*(LnkLI211))(V858,V859,V860);
	{long V861;
	V861= V856;
	V862= (long)STREF(unsigned short,V852,4);
	if(!((V862)==(1))){
	goto T1420;}
	base[0]= CMPmake_fixnum(V861);
	base[1]= CMPmake_fixnum((long)STREF(unsigned short,V852,32));
	vs_top=(vs_base=base+0)+2;
	Lfloor();
	vs_top=sup;
	V857= fix(vs_base[0]);
	goto T1417;
	goto T1420;
T1420:;
	base[0]= CMPmake_fixnum((long)(V861)-1);
	base[1]= CMPmake_fixnum((long)STREF(unsigned short,V852,32));
	vs_top=(vs_base=base+0)+2;
	Lfloor();
	vs_top=sup;
	V857= fix(vs_base[0]);}
	goto T1417;
T1417:;
	{object V863;
	object V864;
	base[0]= CMPmake_fixnum(V857);
	base[1]= (V852);
	base[2]= (V853);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk212)();
	if(vs_base>=vs_top){vs_top=sup;goto T1431;}
	V863= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1432;}
	V864= vs_base[0];
	vs_top=sup;
	goto T1433;
	goto T1431;
T1431:;
	V863= Cnil;
	goto T1432;
T1432:;
	V864= Cnil;
	goto T1433;
T1433:;
	if(((V851))!=Cnil){
	goto T1434;}
	if(((V864))==Cnil){
	goto T1435;}
	goto T1434;
T1434:;
	if(((V864))!=Cnil){
	goto T1439;}
	{object V865;
	object V867;
	{long V869;
	V869= fix((V863));
	{long V870;
	V870= V869;
	V871= (long)STREF(unsigned short,V852,4);
	if((V871)==(1)){
	goto T1449;}
	goto T1445;
	goto T1449;
T1449:;
	if(!((V870)==(0))){
	goto T1445;}}
	base[2]= VV[160];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1445;
T1445:;
	{long V872;
	{long V873;
	V873= V869;
	{long V874;
	V874= V873;
	V875= (long)STREF(unsigned short,V852,4);
	if((V875)==(1)){
	goto T1459;}
	goto T1455;
	goto T1459;
T1459:;
	if(!((V874)==(0))){
	goto T1455;}}
	base[2]= VV[156];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1455;
T1455:;
	V876= (long)STREF(unsigned short,V852,4);
	if(!((V876)==(1))){
	goto T1464;}
	V877 = V873;
	V878= (long)STREF(unsigned short,V852,32);
	V872= (long)(V877)*(V878);
	goto T1453;
	goto T1464;
T1464:;
	V879 = V873;
	V880= (long)STREF(unsigned short,V852,32);
	V872= (long)((long)(V879)*(V880))+1;}
	goto T1453;
T1453:;
	V881= (long)STREF(unsigned short,V852,4);
	if(!((V881)==(1))){
	goto T1470;}
	V882= STREF(object,V852,40);
	V883 = V872;
	V868= (V882)->v.v_self[V883];
	goto T1443;
	goto T1470;
T1470:;
	{register object V884;
	object V885;
	base[2]= CMPmake_fixnum((long)STREF(unsigned short,V852,4));
	vs_top=(vs_base=base+2)+1;
	Lmake_list();
	vs_top=sup;
	V884= vs_base[0];
	V885= STREF(object,V852,40);
	{long V886;
	register long V887;
	V886= (long)STREF(unsigned short,V852,4);
	V887= 0;
	goto T1480;
T1480:;
	if(!((V887)>=(V886))){
	goto T1481;}
	V868= (V884);
	goto T1443;
	goto T1481;
T1481:;
	{object V888;
	register object V890;
	V888= CMPmake_fixnum(V887);
	V890= ((V885))->v.v_self[(long)(V872)+(V887)];
	(nthcdr(fix((V888)),V884))->c.c_car = (V890);
	(void)(nthcdr(fix((V888)),V884));}
	V887= (long)(V887)+1;
	goto T1480;}}}}
	goto T1443;
T1443:;
	{long V892;
	V892= fix((V863));
	{long V893;
	V893= V892;
	V894= (long)STREF(unsigned short,V852,4);
	if((V894)==(1)){
	goto T1497;}
	goto T1493;
	goto T1497;
T1497:;
	if(!((V893)==(0))){
	goto T1493;}}
	base[2]= VV[161];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1493;
T1493:;
	{long V895;
	{long V896;
	V896= V892;
	{long V897;
	V897= V896;
	V898= (long)STREF(unsigned short,V852,4);
	if((V898)==(1)){
	goto T1507;}
	goto T1503;
	goto T1507;
T1507:;
	if(!((V897)==(0))){
	goto T1503;}}
	base[2]= VV[156];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1503;
T1503:;
	V899= (long)STREF(unsigned short,V852,4);
	if(!((V899)==(1))){
	goto T1512;}
	V900 = V896;
	V901= (long)STREF(unsigned short,V852,32);
	V895= (long)(V900)*(V901);
	goto T1501;
	goto T1512;
T1512:;
	V902 = V896;
	V903= (long)STREF(unsigned short,V852,32);
	V895= (long)((long)(V902)*(V903))+1;}
	goto T1501;
T1501:;
	if((STREF(object,V852,8))!=Cnil){
	goto T1517;}
	V891= Cnil;
	goto T1491;
	goto T1517;
T1517:;
	V904= STREF(object,V852,40);
	V905 = V895;
	V906= (long)STREF(unsigned short,V852,4);
	V891= (V904)->v.v_self[(long)(V905)+(V906)];}}
	goto T1491;
T1491:;
	V865= make_cons(V868,V891);
	V867= make_cons((V865),STREF(object,V852,44));
	V907 = V852;
	V908 = (V867);
	V909= Ct;
	STSET(object,V907,44, V908);
	(void)(V908);}
	goto T1439;
T1439:;
	{long V910;
	V910= fix((V863));
	{long V911;
	V911= V910;
	V912= (long)STREF(unsigned short,V852,4);
	if((V912)==(1)){
	goto T1527;}
	goto T1523;
	goto T1527;
T1527:;
	if(!((V911)==(0))){
	goto T1523;}}
	base[0]= VV[162];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1523;
T1523:;
	{long V913;
	object V914;
	{long V915;
	V915= V910;
	{long V916;
	V916= V915;
	V917= (long)STREF(unsigned short,V852,4);
	if((V917)==(1)){
	goto T1537;}
	goto T1533;
	goto T1537;
T1537:;
	if(!((V916)==(0))){
	goto T1533;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1533;
T1533:;
	V918= (long)STREF(unsigned short,V852,4);
	if(!((V918)==(1))){
	goto T1542;}
	V919 = V915;
	V920= (long)STREF(unsigned short,V852,32);
	V913= (long)(V919)*(V920);
	goto T1531;
	goto T1542;
T1542:;
	V921 = V915;
	V922= (long)STREF(unsigned short,V852,32);
	V913= (long)((long)(V921)*(V922))+1;}
	goto T1531;
T1531:;
	V914= STREF(object,V852,40);
	V923= (long)STREF(unsigned short,V852,4);
	if(!((V923)==(1))){
	goto T1550;}
	(void)(((V914))->v.v_self[V913]= ((V853)));
	if((STREF(object,V852,8))==Cnil){
	goto T1548;}
	(void)(((V914))->v.v_self[(long)(V913)+1]= ((V854)));
	goto T1548;
	goto T1550;
T1550:;
	{register long V924;
	V924= 0;
	{register object V925;
	register object V926;
	V925= (V853);
	V926= CMPcar((V925));
	goto T1561;
T1561:;
	if(!(((V925))==Cnil)){
	goto T1562;}
	goto T1556;
	goto T1562;
T1562:;
	(void)(((V914))->v.v_self[(long)(V913)+(V924)]= ((V926)));
	V924= (long)(V924)+1;
	V925= CMPcdr((V925));
	V926= CMPcar((V925));
	goto T1561;}}
	goto T1556;
T1556:;
	if((STREF(object,V852,8))==Cnil){
	goto T1548;}
	V927 = V913;
	V928= (long)STREF(unsigned short,V852,4);
	(void)(((V914))->v.v_self[(long)(V927)+(V928)]= ((V854)));
	goto T1548;
T1548:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1577;}
	(void)((*(LnkLI154))((V852)));
	goto T1577;
T1577:;
	{object V929 = (V852);
	VMR66(V929)}}}
	goto T1435;
T1435:;
	{object V930 = Cnil;
	VMR66(V930)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FILL-CACHE-FROM-CACHE-P	*/

static object LI70(V935,V936,V937,V938)

object V935;object V936;object V937;long V938;
{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	{long V940;
	{long V941;
	V942 = (V936);
	{long V944;
	V944= V938;
	{long V945;
	V945= V944;
	V946= (long)STREF(unsigned short,V936,4);
	if((V946)==(1)){
	goto T1588;}
	goto T1584;
	goto T1588;
T1588:;
	if(!((V945)==(0))){
	goto T1584;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1584;
T1584:;
	V947= (long)STREF(unsigned short,V936,4);
	if(!((V947)==(1))){
	goto T1593;}
	V948 = V944;
	V949= (long)STREF(unsigned short,V936,32);
	V943= CMPmake_fixnum((long)(V948)*(V949));
	goto T1582;
	goto T1593;
T1593:;
	V950 = V944;
	V951= (long)STREF(unsigned short,V936,32);
	V943= CMPmake_fixnum((long)((long)(V950)*(V951))+1);}
	goto T1582;
T1582:;
	V952 = (V937);
	V941= fix((VFUN_NARGS=3,(*(LnkLI210))(V942,V943,V952)));
	V953= (long)STREF(unsigned short,V936,4);
	if(!((V953)==(1))){
	goto T1599;}
	base[0]= CMPmake_fixnum(V941);
	base[1]= CMPmake_fixnum((long)STREF(unsigned short,V936,32));
	vs_top=(vs_base=base+0)+2;
	Lfloor();
	vs_top=sup;
	V940= fix(vs_base[0]);
	goto T1580;
	goto T1599;
T1599:;
	base[0]= CMPmake_fixnum((long)(V941)-1);
	base[1]= CMPmake_fixnum((long)STREF(unsigned short,V936,32));
	vs_top=(vs_base=base+0)+2;
	Lfloor();
	vs_top=sup;
	V940= fix(vs_base[0]);}
	goto T1580;
T1580:;
	{object V954;
	object V955;
	base[0]= CMPmake_fixnum(V940);
	base[1]= (V936);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk212)();
	if(vs_base>=vs_top){vs_top=sup;goto T1609;}
	V954= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1610;}
	V955= vs_base[0];
	vs_top=sup;
	goto T1611;
	goto T1609;
T1609:;
	V954= Cnil;
	goto T1610;
T1610:;
	V955= Cnil;
	goto T1611;
T1611:;
	if(((V935))!=Cnil){
	goto T1612;}
	if(((V955))==Cnil){
	goto T1613;}
	goto T1612;
T1612:;
	if(((V955))!=Cnil){
	goto T1617;}
	{object V956;
	object V958;
	{long V960;
	V960= fix((V954));
	{long V961;
	V961= V960;
	V962= (long)STREF(unsigned short,V936,4);
	if((V962)==(1)){
	goto T1627;}
	goto T1623;
	goto T1627;
T1627:;
	if(!((V961)==(0))){
	goto T1623;}}
	base[2]= VV[160];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1623;
T1623:;
	{long V963;
	{long V964;
	V964= V960;
	{long V965;
	V965= V964;
	V966= (long)STREF(unsigned short,V936,4);
	if((V966)==(1)){
	goto T1637;}
	goto T1633;
	goto T1637;
T1637:;
	if(!((V965)==(0))){
	goto T1633;}}
	base[2]= VV[156];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1633;
T1633:;
	V967= (long)STREF(unsigned short,V936,4);
	if(!((V967)==(1))){
	goto T1642;}
	V968 = V964;
	V969= (long)STREF(unsigned short,V936,32);
	V963= (long)(V968)*(V969);
	goto T1631;
	goto T1642;
T1642:;
	V970 = V964;
	V971= (long)STREF(unsigned short,V936,32);
	V963= (long)((long)(V970)*(V971))+1;}
	goto T1631;
T1631:;
	V972= (long)STREF(unsigned short,V936,4);
	if(!((V972)==(1))){
	goto T1648;}
	V973= STREF(object,V936,40);
	V974 = V963;
	V959= (V973)->v.v_self[V974];
	goto T1621;
	goto T1648;
T1648:;
	{register object V975;
	object V976;
	base[2]= CMPmake_fixnum((long)STREF(unsigned short,V936,4));
	vs_top=(vs_base=base+2)+1;
	Lmake_list();
	vs_top=sup;
	V975= vs_base[0];
	V976= STREF(object,V936,40);
	{long V977;
	register long V978;
	V977= (long)STREF(unsigned short,V936,4);
	V978= 0;
	goto T1658;
T1658:;
	if(!((V978)>=(V977))){
	goto T1659;}
	V959= (V975);
	goto T1621;
	goto T1659;
T1659:;
	{register object V979;
	register object V980;
	register object V981;
	V979= CMPmake_fixnum(V978);
	V980= (V975);
	V981= ((V976))->v.v_self[(long)(V963)+(V978)];
	(nthcdr(fix((V979)),(V980)))->c.c_car = (V981);
	(void)(nthcdr(fix((V979)),(V980)));}
	V978= (long)(V978)+1;
	goto T1658;}}}}
	goto T1621;
T1621:;
	{long V983;
	V983= fix((V954));
	{long V984;
	V984= V983;
	V985= (long)STREF(unsigned short,V936,4);
	if((V985)==(1)){
	goto T1676;}
	goto T1672;
	goto T1676;
T1676:;
	if(!((V984)==(0))){
	goto T1672;}}
	base[2]= VV[161];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1672;
T1672:;
	{long V986;
	{long V987;
	V987= V983;
	{long V988;
	V988= V987;
	V989= (long)STREF(unsigned short,V936,4);
	if((V989)==(1)){
	goto T1686;}
	goto T1682;
	goto T1686;
T1686:;
	if(!((V988)==(0))){
	goto T1682;}}
	base[2]= VV[156];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1682;
T1682:;
	V990= (long)STREF(unsigned short,V936,4);
	if(!((V990)==(1))){
	goto T1691;}
	V991 = V987;
	V992= (long)STREF(unsigned short,V936,32);
	V986= (long)(V991)*(V992);
	goto T1680;
	goto T1691;
T1691:;
	V993 = V987;
	V994= (long)STREF(unsigned short,V936,32);
	V986= (long)((long)(V993)*(V994))+1;}
	goto T1680;
T1680:;
	if((STREF(object,V936,8))!=Cnil){
	goto T1696;}
	V982= Cnil;
	goto T1670;
	goto T1696;
T1696:;
	V995= STREF(object,V936,40);
	V996 = V986;
	V997= (long)STREF(unsigned short,V936,4);
	V982= (V995)->v.v_self[(long)(V996)+(V997)];}}
	goto T1670;
T1670:;
	V956= make_cons(V959,V982);
	V958= make_cons((V956),STREF(object,V936,44));
	V998 = V936;
	V999 = (V958);
	V1000= Ct;
	STSET(object,V998,44, V999);
	(void)(V999);}
	goto T1617;
T1617:;
	{object V1001;
	object V1002;
	long V1003;
	V1001= STREF(object,(V937),40);
	V1002= STREF(object,V936,40);
	V1003= fix((V954));
	{long V1004;
	V1004= V1003;
	V1005= (long)STREF(unsigned short,V936,4);
	if((V1005)==(1)){
	goto T1709;}
	goto T1706;
	goto T1709;
T1709:;
	if(!((V1004)==(0))){
	goto T1706;}}
	base[0]= VV[163];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1704;
	goto T1706;
T1706:;
	{long V1006;
	long V1007;
	{long V1008;
	V1008= V938;
	{long V1009;
	V1009= V1008;
	V1010= (long)STREF(unsigned short,V936,4);
	if((V1010)==(1)){
	goto T1719;}
	goto T1715;
	goto T1719;
T1719:;
	if(!((V1009)==(0))){
	goto T1715;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1715;
T1715:;
	V1011= (long)STREF(unsigned short,V936,4);
	if(!((V1011)==(1))){
	goto T1724;}
	V1012 = V1008;
	V1013= (long)STREF(unsigned short,V936,32);
	V1006= (long)(V1012)*(V1013);
	goto T1713;
	goto T1724;
T1724:;
	V1014 = V1008;
	V1015= (long)STREF(unsigned short,V936,32);
	V1006= (long)((long)(V1014)*(V1015))+1;}
	goto T1713;
T1713:;
	{long V1016;
	V1016= V1003;
	{long V1017;
	V1017= V1016;
	V1018= (long)STREF(unsigned short,V936,4);
	if((V1018)==(1)){
	goto T1735;}
	goto T1731;
	goto T1735;
T1735:;
	if(!((V1017)==(0))){
	goto T1731;}}
	base[0]= VV[156];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1731;
T1731:;
	V1019= (long)STREF(unsigned short,V936,4);
	if(!((V1019)==(1))){
	goto T1740;}
	V1020 = V1016;
	V1021= (long)STREF(unsigned short,V936,32);
	V1007= (long)(V1020)*(V1021);
	goto T1729;
	goto T1740;
T1740:;
	V1022 = V1016;
	V1023= (long)STREF(unsigned short,V936,32);
	V1007= (long)((long)(V1022)*(V1023))+1;}
	goto T1729;
T1729:;
	{long V1026;
	register long V1027;
	V1026= (long)STREF(unsigned short,V936,32);
	V1027= 0;
	goto T1749;
T1749:;
	if(!((V1027)>=(V1026))){
	goto T1750;}
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	goto T1745;
	goto T1750;
T1750:;
	(void)(((V1002))->v.v_self[(long)(V1007)+(V1027)]= (((V1001))->v.v_self[(long)(V1006)+(V1027)]));
	V1027= (long)(V1027)+1;
	goto T1749;}
	goto T1745;
T1745:;
	{object *V1025=vs_top;object *V1024=vs_base; vs_base=V1025;
	{register object *base0=base;
	{register object *base=V1025;
	register object *sup=vs_base+VM68;
	base0[0]=base0[0];
	base[0]=base[0];
	vs_check;
	vs_top=sup;
	{long V1028;
	V1028= fix(((V1002))->v.v_self[0]);
	V1029 = (V1002);
	if(!((V1028)==(2147483647))){
	goto T1761;}
	V1030= small_fixnum(1);
	goto T1759;
	goto T1761;
T1761:;
	V1030= CMPmake_fixnum((long)(V1028)+1);
	goto T1759;
T1759:;
	(void)((V1029)->v.v_self[0]= (V1030));}
	}}
	vs_base=V1024;vs_top=V1025;}
	vs_top=sup;}
	goto T1704;
T1704:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1763;}
	(void)((*(LnkLI154))((V936)));
	goto T1763;
T1763:;
	{object V1031 = (V936);
	VMR67(V1031)}}
	goto T1613;
T1613:;
	{object V1032 = Cnil;
	VMR67(V1032)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADJUST-CACHE	*/

static object LI74(V1037,V1038,V1039,V1040)

object V1037;object V1038;object V1039;object V1040;
{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	base[0]= (V1037);
	{register object V1041;
	V1041= base[0];
	V1042 = base[0];
	V1043= CMPmake_fixnum((long)STREF(fixnum,(V1041),12));
	V1044= CMPmake_fixnum((long)STREF(unsigned char,(V1041),16));
	base[1]= (VFUN_NARGS=3,(*(LnkLI213))(V1042,V1043,V1044));
	{object V1045;
	V1045= CMPmake_fixnum((long)STREF(unsigned char,base[1],16));
	goto T1771;
T1771:;
	if(((V1045))!=Cnil){
	goto T1772;}
	(void)((*(LnkLI214))(base[1]));
	{object V1046 = Cnil;
	VMR69(V1046)}
	goto T1772;
T1772:;
	{long V1047;
	V1047= fix((V1045));
	V1048 = base[1];
	V1049 = V1047;
	V1050= Ct;
	STSET(unsigned char,V1048,16, V1049);
	(void)(V1049);
	{long V1051;
	register long V1052;
	V1051= (long)STREF(fixnum,(V1041),12);
	V1052= 0;
	goto T1787;
T1787:;
	if(!((V1052)>=(V1051))){
	goto T1788;}
	goto T1783;
	goto T1788;
T1788:;
	{long V1053;
	V1053= V1052;
	V1054= (long)STREF(unsigned short,(V1041),4);
	if((V1054)==(1)){
	goto T1796;}
	goto T1794;
	goto T1796;
T1796:;
	if((V1053)==(0)){
	goto T1791;}}
	goto T1794;
T1794:;
	{long V1055;
	V1055= V1052;
	{long V1057;
	V1057= V1055;
	V1058= (long)STREF(unsigned short,(V1041),4);
	if((V1058)==(1)){
	goto T1805;}
	goto T1801;
	goto T1805;
T1805:;
	if(!((V1057)==(0))){
	goto T1801;}}
	base[2]= VV[159];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1801;
T1801:;
	{long V1059;
	register object V1060;
	{long V1061;
	V1061= V1055;
	{long V1062;
	V1062= V1061;
	V1063= (long)STREF(unsigned short,(V1041),4);
	if((V1063)==(1)){
	goto T1815;}
	goto T1811;
	goto T1815;
T1815:;
	if(!((V1062)==(0))){
	goto T1811;}}
	base[2]= VV[156];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1811;
T1811:;
	V1064= (long)STREF(unsigned short,(V1041),4);
	if(!((V1064)==(1))){
	goto T1820;}
	V1065 = V1061;
	V1066= (long)STREF(unsigned short,(V1041),32);
	V1059= (long)(V1065)*(V1066);
	goto T1809;
	goto T1820;
T1820:;
	V1067 = V1061;
	V1068= (long)STREF(unsigned short,(V1041),32);
	V1059= (long)((long)(V1067)*(V1068))+1;}
	goto T1809;
T1809:;
	V1060= V1038;
	{object V1069;
	object V1070;
	V1069= STREF(object,(V1041),40);
	V1070= (((V1060))==Cnil?Ct:Cnil);
	{long V1071;
	register long V1072;
	V1071= (long)STREF(unsigned short,(V1041),4);
	V1072= 0;
	goto T1830;
T1830:;
	if(!((V1072)>=(V1071))){
	goto T1831;}
	if(((V1070))==Cnil){
	goto T1791;}
	goto T1799;
	goto T1831;
T1831:;
	{register object V1073;
	V1073= ((V1069))->v.v_self[(long)(V1059)+(V1072)];
	if(((V1073))==Cnil){
	goto T1837;}
	if(!((((((V1073))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1836;}
	goto T1837;
T1837:;
	goto T1791;
	goto T1836;
T1836:;
	if(((V1060))==Cnil){
	goto T1841;}
	V1074 = (V1073);
	if(!(type_of((V1060))==t_cons)){
	goto T1847;}
	{object V1076;
	V1076= CMPcar((V1060));
	V1060= CMPcdr((V1060));
	V1075= (V1076);
	goto T1845;}
	goto T1847;
T1847:;
	V1075= (V1060);
	goto T1845;
T1845:;
	if((V1074)==(V1075)){
	goto T1834;}
	goto T1841;
T1841:;
	V1070= Ct;}
	goto T1834;
T1834:;
	V1072= (long)(V1072)+1;
	goto T1830;}}}}
	goto T1799;
T1799:;
	base[2]= CMPmake_fixnum(V1052);
	vs_top=(vs_base=base+2)+1;
	L75(base);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1791;}
	goto T1781;
	goto T1791;
T1791:;
	V1052= (long)(V1052)+1;
	goto T1787;}
	goto T1783;
T1783:;
	{register object V1077;
	object V1078;
	V1077= STREF(object,base[0],44);
	V1078= CMPcar((V1077));
	goto T1867;
T1867:;
	if(!(((V1077))==Cnil)){
	goto T1868;}
	goto T1863;
	goto T1868;
T1868:;
	base[4]= CMPcar((V1078));
	base[5]= CMPcdr((V1078));
	vs_top=(vs_base=base+4)+2;
	L76(base);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1872;}
	goto T1781;
	goto T1872;
T1872:;
	V1077= CMPcdr((V1077));
	V1078= CMPcar((V1077));
	goto T1867;}
	goto T1863;
T1863:;
	base[2]= (V1038);
	base[3]= (V1039);
	vs_top=(vs_base=base+2)+2;
	L76(base);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1781;}
	if(((V1040))==Cnil){
	goto T1885;}
	(void)((*(LnkLI214))(base[0]));
	goto T1885;
T1885:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1888;}
	(void)((*(LnkLI154))(base[1]));
	goto T1888;
T1888:;
	{object V1079 = base[1];
	VMR69(V1079)}
	goto T1781;
T1781:;
	(void)((*(LnkLI185))(STREF(object,base[1],40)));}
	V1045= (*(LnkLI36))((V1045));
	goto T1771;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXPAND-CACHE	*/

static object LI81(V1084,V1085,V1086,V1087)

object V1084;object V1085;object V1086;object V1087;
{	 VMB70 VMS70 VMV70
	goto TTL;
TTL:;
	base[0]= (V1084);
	base[1]= base[0];
	V1088= CMPmake_fixnum((long)STREF(fixnum,base[1],12));
	V1089= number_times(V1088,small_fixnum(2));
	base[2]= (VFUN_NARGS=2,(*(LnkLI213))(base[0],/* INLINE-ARGS */V1089));
	{long V1090;
	register long V1091;
	V1090= (long)STREF(fixnum,base[1],12);
	V1091= 0;
	goto T1900;
T1900:;
	if(!((V1091)>=(V1090))){
	goto T1901;}
	goto T1896;
	goto T1901;
T1901:;
	{long V1092;
	V1092= V1091;
	V1093= (long)STREF(unsigned short,base[1],4);
	if((V1093)==(1)){
	goto T1909;}
	goto T1907;
	goto T1909;
T1909:;
	if((V1092)==(0)){
	goto T1904;}}
	goto T1907;
T1907:;
	{long V1094;
	V1094= V1091;
	{long V1096;
	V1096= V1094;
	V1097= (long)STREF(unsigned short,base[1],4);
	if((V1097)==(1)){
	goto T1918;}
	goto T1914;
	goto T1918;
T1918:;
	if(!((V1096)==(0))){
	goto T1914;}}
	base[3]= VV[159];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T1914;
T1914:;
	{long V1098;
	register object V1099;
	{long V1100;
	V1100= V1094;
	{long V1101;
	V1101= V1100;
	V1102= (long)STREF(unsigned short,base[1],4);
	if((V1102)==(1)){
	goto T1928;}
	goto T1924;
	goto T1928;
T1928:;
	if(!((V1101)==(0))){
	goto T1924;}}
	base[3]= VV[156];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T1924;
T1924:;
	V1103= (long)STREF(unsigned short,base[1],4);
	if(!((V1103)==(1))){
	goto T1933;}
	V1104 = V1100;
	V1105= (long)STREF(unsigned short,base[1],32);
	V1098= (long)(V1104)*(V1105);
	goto T1922;
	goto T1933;
T1933:;
	V1106 = V1100;
	V1107= (long)STREF(unsigned short,base[1],32);
	V1098= (long)((long)(V1106)*(V1107))+1;}
	goto T1922;
T1922:;
	V1099= V1085;
	{object V1108;
	object V1109;
	V1108= STREF(object,base[1],40);
	V1109= (((V1099))==Cnil?Ct:Cnil);
	{long V1110;
	register long V1111;
	V1110= (long)STREF(unsigned short,base[1],4);
	V1111= 0;
	goto T1943;
T1943:;
	if(!((V1111)>=(V1110))){
	goto T1944;}
	if(((V1109))==Cnil){
	goto T1904;}
	goto T1912;
	goto T1944;
T1944:;
	{register object V1112;
	V1112= ((V1108))->v.v_self[(long)(V1098)+(V1111)];
	if(((V1112))==Cnil){
	goto T1950;}
	if(!((((((V1112))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1949;}
	goto T1950;
T1950:;
	goto T1904;
	goto T1949;
T1949:;
	if(((V1099))==Cnil){
	goto T1954;}
	V1113 = (V1112);
	if(!(type_of((V1099))==t_cons)){
	goto T1960;}
	{object V1115;
	V1115= CMPcar((V1099));
	V1099= CMPcdr((V1099));
	V1114= (V1115);
	goto T1958;}
	goto T1960;
T1960:;
	V1114= (V1099);
	goto T1958;
T1958:;
	if((V1113)==(V1114)){
	goto T1947;}
	goto T1954;
T1954:;
	V1109= Ct;}
	goto T1947;
T1947:;
	V1111= (long)(V1111)+1;
	goto T1943;}}}}
	goto T1912;
T1912:;
	base[3]= CMPmake_fixnum(V1091);
	vs_top=(vs_base=base+3)+1;
	L82(base);
	vs_top=sup;
	goto T1904;
T1904:;
	V1091= (long)(V1091)+1;
	goto T1900;}
	goto T1896;
T1896:;
	{object V1116;
	register object V1117;
	V1116= STREF(object,base[0],44);
	V1117= CMPcar((V1116));
	goto T1977;
T1977:;
	if(!(((V1116))==Cnil)){
	goto T1978;}
	goto T1973;
	goto T1978;
T1978:;
	base[5]= CMPcar((V1117));
	base[6]= CMPcdr((V1117));
	vs_top=(vs_base=base+5)+2;
	L84(base);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1982;}
	base[5]= CMPcar((V1117));
	base[6]= CMPcdr((V1117));
	vs_top=(vs_base=base+5)+2;
	L83(base);
	vs_top=sup;
	goto T1982;
T1982:;
	V1116= CMPcdr((V1116));
	V1117= CMPcar((V1116));
	goto T1977;}
	goto T1973;
T1973:;
	base[3]= (V1085);
	base[4]= (V1086);
	vs_top=(vs_base=base+3)+2;
	L84(base);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1994;}
	base[3]= (V1085);
	base[4]= (V1086);
	vs_top=(vs_base=base+3)+2;
	L83(base);
	vs_top=sup;
	goto T1994;
T1994:;
	if(((V1087))==Cnil){
	goto T2001;}
	(void)((*(LnkLI214))(base[0]));
	goto T2001;
T2001:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T2004;}
	(void)((*(LnkLI154))(base[2]));
	goto T2004;
T2004:;
	{object V1118 = base[2];
	VMR70(V1118)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for FIND-FREE-CACHE-LINE	*/

static void L85()
{register object *base=vs_base;
	register object *sup=base+VM71; VC71
	vs_check;
	{long V1119;
	object V1120;
	object V1121;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V1119=fix(base[0]);
	V1120=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2007;}
	V1121=(base[2]);
	vs_top=sup;
	goto T2008;
	goto T2007;
T2007:;
	V1121= Cnil;
	goto T2008;
T2008:;
	{register object V1122;
	V1122= (V1120);
	{long V1123;
	V1123= V1119;
	V1124= (long)STREF(unsigned short,(V1122),4);
	if((V1124)==(1)){
	goto T2014;}
	goto T2010;
	goto T2014;
T2014:;
	if(!((V1123)==(0))){
	goto T2010;}}
	{long V1125;
	V1125= V1119;
	V1126= (long)STREF(fixnum,(V1122),12);
	if(!((V1125)==((long)(V1126)-1))){
	goto T2020;}
	{long V1127;
	V1127= 0;
	V1128= (long)STREF(unsigned short,(V1122),4);
	if((V1128)==(1)){
	goto T2027;}
	goto T2024;
	goto T2027;
T2027:;
	if(!((V1127)==(0))){
	goto T2024;}}
	V1119= 1;
	goto T2017;
	goto T2024;
T2024:;
	V1119= 0;
	goto T2017;
	goto T2020;
T2020:;
	V1119= (long)(V1125)+1;}
	goto T2017;
T2017:;
	goto T2010;
T2010:;
	{long V1129;
	object V1130;
	register object V1131;
	long V1132;
	long V1133;
	V1134= STREF(object,(V1122),20);
	V1135= CMPmake_fixnum((long)STREF(fixnum,(V1122),12));
	V1129= fix((
	V1136 = V1134,
	(type_of(V1136) == t_sfun ?(*((V1136)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V1136)==t_vfun) ?
	(*((V1136)->sfn.sfn_self)):
	(fcall.fun=(V1136),fcalln))(V1135)));
	V1132= V1119;
	V1133= V1119;
	V1130= Cnil;
	V1131= Cnil;
	goto T2037;
T2037:;
	{register long V1137;
	long V1138;
	V1137= V1133;
	{long V1139;
	long V1140;
	V1139= V1132;
	V1140= V1133;
	{long V1141;
	V1141= (long)(V1140)-(V1139);
	if(!((V1141)<0)){
	goto T2044;}
	V1142 = V1141;
	V1143= (long)STREF(fixnum,(V1122),12);
	V1141= (long)(V1142)+(V1143);
	{long V1144;
	V1144= 0;
	V1145= (long)STREF(unsigned short,(V1122),4);
	if((V1145)==(1)){
	goto T2053;}
	goto T2044;
	goto T2053;
T2053:;
	if(!((V1144)==(0))){
	goto T2044;}}
	V1141= (long)(V1141)-1;
	goto T2044;
T2044:;
	V1138= V1141;}}
	goto T2058;
T2058:;
	{long V1146;
	V1146= V1137;
	{long V1148;
	V1148= V1146;
	V1149= (long)STREF(unsigned short,(V1122),4);
	if((V1149)==(1)){
	goto T2069;}
	goto T2065;
	goto T2069;
T2069:;
	if(!((V1148)==(0))){
	goto T2065;}}
	base[3]= VV[159];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2065;
T2065:;
	{long V1150;
	register object V1151;
	{long V1152;
	V1152= V1146;
	{long V1153;
	V1153= V1152;
	V1154= (long)STREF(unsigned short,(V1122),4);
	if((V1154)==(1)){
	goto T2079;}
	goto T2075;
	goto T2079;
T2079:;
	if(!((V1153)==(0))){
	goto T2075;}}
	base[3]= VV[156];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2075;
T2075:;
	V1155= (long)STREF(unsigned short,(V1122),4);
	if(!((V1155)==(1))){
	goto T2084;}
	V1156 = V1152;
	V1157= (long)STREF(unsigned short,(V1122),32);
	V1150= (long)(V1156)*(V1157);
	goto T2073;
	goto T2084;
T2084:;
	V1158 = V1152;
	V1159= (long)STREF(unsigned short,(V1122),32);
	V1150= (long)((long)(V1158)*(V1159))+1;}
	goto T2073;
T2073:;
	V1151= V1121;
	{object V1160;
	object V1161;
	V1160= STREF(object,(V1122),40);
	V1161= (((V1151))==Cnil?Ct:Cnil);
	{long V1162;
	register long V1163;
	V1162= (long)STREF(unsigned short,(V1122),4);
	V1163= 0;
	goto T2094;
T2094:;
	if(!((V1163)>=(V1162))){
	goto T2095;}
	if(((V1161))!=Cnil){
	goto T2061;}
	goto T2063;
	goto T2095;
T2095:;
	{object V1164;
	V1164= ((V1160))->v.v_self[(long)(V1150)+(V1163)];
	if(((V1164))==Cnil){
	goto T2101;}
	if(!((((((V1164))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T2100;}
	goto T2101;
T2101:;
	goto T2063;
	goto T2100;
T2100:;
	if(((V1151))==Cnil){
	goto T2105;}
	V1165 = (V1164);
	if(!(type_of((V1151))==t_cons)){
	goto T2111;}
	{object V1167;
	V1167= CMPcar((V1151));
	V1151= CMPcdr((V1151));
	V1166= (V1167);
	goto T2109;}
	goto T2111;
T2111:;
	V1166= (V1151);
	goto T2109;
T2109:;
	if((V1165)==(V1166)){
	goto T2098;}
	goto T2105;
T2105:;
	V1161= Ct;}
	goto T2098;
T2098:;
	V1163= (long)(V1163)+1;
	goto T2094;}}}}
	goto T2063;
T2063:;
	{object V1168;
	V1168= CMPmake_fixnum(V1137);
	V1131= make_cons((V1168),(V1131));}
	goto T2035;
	goto T2061;
T2061:;
	if(((V1130))==Cnil){
	goto T2123;}
	if(!((V1137)>=(V1119))){
	goto T2123;}
	base[3]= CMPmake_fixnum(V1119);
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T2123;
T2123:;
	{object V1169;
	{long V1170;
	long V1171;
	{long V1172;
	V1172= V1137;
	{long V1173;
	{long V1174;
	V1174= V1172;
	V1175= (V1122);
	{long V1177;
	V1177= V1174;
	{long V1178;
	V1178= V1177;
	V1179= (long)STREF(unsigned short,(V1122),4);
	if((V1179)==(1)){
	goto T2143;}
	goto T2139;
	goto T2143;
T2143:;
	if(!((V1178)==(0))){
	goto T2139;}}
	base[3]= VV[156];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2139;
T2139:;
	V1180= (long)STREF(unsigned short,(V1122),4);
	if(!((V1180)==(1))){
	goto T2148;}
	V1181 = V1177;
	V1182= (long)STREF(unsigned short,(V1122),32);
	V1176= CMPmake_fixnum((long)(V1181)*(V1182));
	goto T2137;
	goto T2148;
T2148:;
	V1183 = V1177;
	V1184= (long)STREF(unsigned short,(V1122),32);
	V1176= CMPmake_fixnum((long)((long)(V1183)*(V1184))+1);}
	goto T2137;
T2137:;
	V1173= fix((VFUN_NARGS=2,(*(LnkLI210))(V1175,V1176)));}
	V1185= (long)STREF(unsigned short,(V1122),4);
	if(!((V1185)==(1))){
	goto T2154;}
	base[3]= CMPmake_fixnum(V1173);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V1122),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V1170= fix(vs_base[0]);
	goto T2132;
	goto T2154;
T2154:;
	base[3]= CMPmake_fixnum((long)(V1173)-1);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V1122),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V1170= fix(vs_base[0]);}}
	goto T2132;
T2132:;
	V1171= V1137;
	{register long V1186;
	V1186= (long)(V1171)-(V1170);
	if(!((V1186)<0)){
	goto T2163;}
	V1187 = V1186;
	V1188= (long)STREF(fixnum,(V1122),12);
	V1186= (long)(V1187)+(V1188);
	{long V1189;
	V1189= 0;
	V1190= (long)STREF(unsigned short,(V1122),4);
	if((V1190)==(1)){
	goto T2172;}
	goto T2163;
	goto T2172;
T2172:;
	if(!((V1189)==(0))){
	goto T2163;}}
	V1186= (long)(V1186)-1;
	goto T2163;
T2163:;
	V1169= CMPmake_fixnum(V1186);}}
	V1191 = CMPmake_fixnum(V1129);
	if(!(number_compare((V1169),V1191)>=0)){
	goto T2176;}
	base[3]= CMPmake_fixnum(V1119);
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T2176;
T2176:;
	if(!((V1138)==(V1129))){
	goto T2184;}
	goto T2182;
	goto T2184;
T2184:;
	V1192 = CMPmake_fixnum(V1138);
	if(!(number_compare(V1192,(V1169))==0)){
	goto T2187;}
	base[3]= small_fixnum(2);
	vs_top=(vs_base=base+3)+1;
	Lrandom();
	vs_top=sup;
	V1193= vs_base[0];
	if(!(number_compare(small_fixnum(0),V1193)==0)){
	goto T2130;}
	goto T2182;
	goto T2187;
T2187:;
	V1194 = CMPmake_fixnum(V1138);
	if(!(number_compare(V1194,(V1169))>0)){
	goto T2192;}
	goto T2182;
	goto T2192;
T2192:;
	goto T2130;
	goto T2182;
T2182:;
	V1195= (long)STREF(fixnum,(V1122),12);
	if(!((V1137)==((long)(V1195)-1))){
	goto T2194;}
	V1130= Ct;
	goto T2194;
T2194:;
	{long V1196;
	V1196= V1137;
	{long V1197;
	{long V1198;
	V1198= V1196;
	V1199= (V1122);
	{long V1201;
	V1201= V1198;
	{long V1202;
	V1202= V1201;
	V1203= (long)STREF(unsigned short,(V1122),4);
	if((V1203)==(1)){
	goto T2211;}
	goto T2207;
	goto T2211;
T2211:;
	if(!((V1202)==(0))){
	goto T2207;}}
	base[3]= VV[156];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2207;
T2207:;
	V1204= (long)STREF(unsigned short,(V1122),4);
	if(!((V1204)==(1))){
	goto T2216;}
	V1205 = V1201;
	V1206= (long)STREF(unsigned short,(V1122),32);
	V1200= CMPmake_fixnum((long)(V1205)*(V1206));
	goto T2205;
	goto T2216;
T2216:;
	V1207 = V1201;
	V1208= (long)STREF(unsigned short,(V1122),32);
	V1200= CMPmake_fixnum((long)((long)(V1207)*(V1208))+1);}
	goto T2205;
T2205:;
	V1197= fix((VFUN_NARGS=2,(*(LnkLI210))(V1199,V1200)));}
	V1209= (long)STREF(unsigned short,(V1122),4);
	if(!((V1209)==(1))){
	goto T2222;}
	base[3]= CMPmake_fixnum(V1197);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V1122),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V1132= fix(vs_base[0]);
	goto T2200;
	goto T2222;
T2222:;
	base[3]= CMPmake_fixnum((long)(V1197)-1);
	base[4]= CMPmake_fixnum((long)STREF(unsigned short,(V1122),32));
	vs_top=(vs_base=base+3)+2;
	Lfloor();
	vs_top=sup;
	V1132= fix(vs_base[0]);}}
	goto T2200;
T2200:;
	{long V1210;
	V1210= V1137;
	V1211= (long)STREF(fixnum,(V1122),12);
	if(!((V1210)==((long)(V1211)-1))){
	goto T2233;}
	{long V1212;
	V1212= 0;
	V1213= (long)STREF(unsigned short,(V1122),4);
	if((V1213)==(1)){
	goto T2240;}
	goto T2237;
	goto T2240;
T2240:;
	if(!((V1212)==(0))){
	goto T2237;}}
	V1133= 1;
	goto T2230;
	goto T2237;
T2237:;
	V1133= 0;
	goto T2230;
	goto T2233;
T2233:;
	V1133= (long)(V1210)+1;}
	goto T2230;
T2230:;
	{object V1214;
	V1214= CMPmake_fixnum(V1137);
	V1131= make_cons((V1214),(V1131));}
	goto T2038;}
	goto T2130;
T2130:;
	V1215= (long)STREF(fixnum,(V1122),12);
	if(!((V1137)==((long)(V1215)-1))){
	goto T2246;}
	V1130= Ct;
	goto T2246;
T2246:;
	{long V1216;
	V1216= V1137;
	V1217= (long)STREF(fixnum,(V1122),12);
	if(!((V1216)==((long)(V1217)-1))){
	goto T2256;}
	{long V1218;
	V1218= 0;
	V1219= (long)STREF(unsigned short,(V1122),4);
	if((V1219)==(1)){
	goto T2263;}
	goto T2260;
	goto T2263;
T2263:;
	if(!((V1218)==(0))){
	goto T2260;}}
	V1137= 1;
	goto T2253;
	goto T2260;
T2260:;
	V1137= 0;
	goto T2253;
	goto T2256;
T2256:;
	V1137= (long)(V1216)+1;}
	goto T2253;
T2253:;
	V1138= (long)(V1138)+1;
	goto T2058;}
	goto T2038;
T2038:;
	goto T2037;
	goto T2035;
T2035:;
	goto T2271;
T2271:;
	if((CMPcdr((V1131)))!=Cnil){
	goto T2273;}
	goto T2269;
	goto T2273;
T2273:;
	{long V1220;
	long V1221;
	{object V1222;
	V1222= CMPcar((V1131));
	V1131= CMPcdr((V1131));
	V1220= fix((V1222));}
	V1221= fix(CMPcar((V1131)));
	{long V1223;
	long V1224;
	object V1225;
	{long V1226;
	V1226= V1221;
	{long V1227;
	V1227= V1226;
	V1228= (long)STREF(unsigned short,(V1122),4);
	if((V1228)==(1)){
	goto T2287;}
	goto T2283;
	goto T2287;
T2287:;
	if(!((V1227)==(0))){
	goto T2283;}}
	base[3]= VV[156];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2283;
T2283:;
	V1229= (long)STREF(unsigned short,(V1122),4);
	if(!((V1229)==(1))){
	goto T2292;}
	V1230 = V1226;
	V1231= (long)STREF(unsigned short,(V1122),32);
	V1223= (long)(V1230)*(V1231);
	goto T2281;
	goto T2292;
T2292:;
	V1232 = V1226;
	V1233= (long)STREF(unsigned short,(V1122),32);
	V1223= (long)((long)(V1232)*(V1233))+1;}
	goto T2281;
T2281:;
	{long V1234;
	V1234= V1220;
	{long V1235;
	V1235= V1234;
	V1236= (long)STREF(unsigned short,(V1122),4);
	if((V1236)==(1)){
	goto T2303;}
	goto T2299;
	goto T2303;
T2303:;
	if(!((V1235)==(0))){
	goto T2299;}}
	base[3]= VV[156];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2299;
T2299:;
	V1237= (long)STREF(unsigned short,(V1122),4);
	if(!((V1237)==(1))){
	goto T2308;}
	V1238 = V1234;
	V1239= (long)STREF(unsigned short,(V1122),32);
	V1224= (long)(V1238)*(V1239);
	goto T2297;
	goto T2308;
T2308:;
	V1240 = V1234;
	V1241= (long)STREF(unsigned short,(V1122),32);
	V1224= (long)((long)(V1240)*(V1241))+1;}
	goto T2297;
T2297:;
	V1225= STREF(object,(V1122),40);
	{long V1244;
	long V1245;
	V1244= (long)STREF(unsigned short,(V1122),32);
	V1245= 0;
	goto T2318;
T2318:;
	if(!((V1245)>=(V1244))){
	goto T2319;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	goto T2314;
	goto T2319;
T2319:;
	(void)(((V1225))->v.v_self[(long)(V1224)+(V1245)]= (((V1225))->v.v_self[(long)(V1223)+(V1245)]));
	(void)(((V1225))->v.v_self[(long)(V1223)+(V1245)]= (Cnil));
	V1245= (long)(V1245)+1;
	goto T2318;}
	goto T2314;
T2314:;
	{object *V1243=vs_top;object *V1242=vs_base; vs_base=V1243;
	{register object *base0=base;
	{register object *base=V1243;
	register object *sup=vs_base+VM72;
	base0[0]=base0[0];
	base[0]=base[0];
	vs_check;
	vs_top=sup;
	{long V1246;
	V1246= fix(((V1225))->v.v_self[0]);
	V1247 = (V1225);
	if(!((V1246)==(2147483647))){
	goto T2331;}
	V1248= small_fixnum(1);
	goto T2329;
	goto T2331;
T2331:;
	V1248= CMPmake_fixnum((long)(V1246)+1);
	goto T2329;
T2329:;
	(void)((V1247)->v.v_self[0]= (V1248));}
	}}
	vs_base=V1242;vs_top=V1243;}
	vs_top=sup;}}
	goto T2271;
	goto T2269;
T2269:;
	base[3]= CMPcar((V1131));
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	local entry for function DEFAULT-LIMIT-FN	*/

static object LI86(V1250)

object V1250;
{	 VMB73 VMS73 VMV73
	goto TTL;
TTL:;
	{object V1251= (V1250);
	if(!eql(V1251,VV[164])
	&& !eql(V1251,VV[165])
	&& !eql(V1251,VV[166]))goto T2336;
	{long V1252 = 1;
	VMR73((object)V1252)}
	goto T2336;
T2336:;
	if(!eql(V1251,VV[167])
	&& !eql(V1251,VV[168]))goto T2337;
	{long V1253 = 4;
	VMR73((object)V1253)}
	goto T2337;
T2337:;
	{long V1254 = 6;
	VMR73((object)V1254)}}
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
	{object V1255 = vs_base[0];
	VMR74(V1255)}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC89(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM75; VC75
	vs_check;
	{object V1256;
	object V1257;
	check_arg(2);
	V1256=(base[0]);
	V1257=(base[1]);
	vs_top=sup;
	{object V1258;
	V1258= list(2,CMPcar((V1257)),(V1256));
	(base0[0]->c.c_car)= make_cons((V1258),(base0[0]->c.c_car));
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
	{object V1259;
	object V1260;
	check_arg(2);
	V1259=(base[0]);
	V1260=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI206))(Cnil,base0[2],(V1259),(V1260));
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
	{object V1261;
	object V1262;
	check_arg(2);
	V1261=(base[0]);
	V1262=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;{object V1263;
	V1263= (*(LnkLI208))(base0[2],(V1261),(V1262),Ct);
	if(V1263==Cnil)goto T2348;
	base0[2]= V1263;
	goto T2347;
	goto T2348;
T2348:;}
	base0[2]= (*(LnkLI206))(Ct,base0[2],(V1261),(V1262));
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
	{object V1264;
	check_arg(1);
	V1264=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((*(LnkLI217))(Cnil,base0[2],base0[0],fix((V1264))))!=Cnil){
	goto T2351;}
	{long V1265;
	V1265= fix((V1264));
	{long V1266;
	V1266= V1265;
	V1267= (long)STREF(unsigned short,base0[1],4);
	if((V1267)==(1)){
	goto T2359;}
	goto T2355;
	goto T2359;
T2359:;
	if(!((V1266)==(0))){
	goto T2355;}}
	base[2]= VV[160];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T2355;
T2355:;
	{long V1268;
	{long V1269;
	V1269= V1265;
	{long V1270;
	V1270= V1269;
	V1271= (long)STREF(unsigned short,base0[1],4);
	if((V1271)==(1)){
	goto T2369;}
	goto T2365;
	goto T2369;
T2369:;
	if(!((V1270)==(0))){
	goto T2365;}}
	base[2]= VV[156];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T2365;
T2365:;
	V1272= (long)STREF(unsigned short,base0[1],4);
	if(!((V1272)==(1))){
	goto T2374;}
	V1273 = V1269;
	V1274= (long)STREF(unsigned short,base0[1],32);
	V1268= (long)(V1273)*(V1274);
	goto T2363;
	goto T2374;
T2374:;
	V1275 = V1269;
	V1276= (long)STREF(unsigned short,base0[1],32);
	V1268= (long)((long)(V1275)*(V1276))+1;}
	goto T2363;
T2363:;
	V1277= (long)STREF(unsigned short,base0[1],4);
	if(!((V1277)==(1))){
	goto T2380;}
	V1278= STREF(object,base0[1],40);
	V1279 = V1268;
	base[1]= (V1278)->v.v_self[V1279];
	goto T2353;
	goto T2380;
T2380:;
	{object V1280;
	object V1281;
	base[2]= CMPmake_fixnum((long)STREF(unsigned short,base0[1],4));
	vs_top=(vs_base=base+2)+1;
	Lmake_list();
	vs_top=sup;
	V1280= vs_base[0];
	V1281= STREF(object,base0[1],40);
	{long V1282;
	register long V1283;
	V1282= (long)STREF(unsigned short,base0[1],4);
	V1283= 0;
	goto T2390;
T2390:;
	if(!((V1283)>=(V1282))){
	goto T2391;}
	base[1]= (V1280);
	goto T2353;
	goto T2391;
T2391:;
	{object V1284;
	object V1286;
	V1284= CMPmake_fixnum(V1283);
	V1286= ((V1281))->v.v_self[(long)(V1268)+(V1283)];
	(nthcdr(fix((V1284)),V1280))->c.c_car = (V1286);
	(void)(nthcdr(fix((V1284)),V1280));}
	V1283= (long)(V1283)+1;
	goto T2390;}}}}
	goto T2353;
T2353:;
	{long V1287;
	V1287= fix((V1264));
	{long V1288;
	V1288= V1287;
	V1289= (long)STREF(unsigned short,base0[1],4);
	if((V1289)==(1)){
	goto T2407;}
	goto T2403;
	goto T2407;
T2407:;
	if(!((V1288)==(0))){
	goto T2403;}}
	base[3]= VV[161];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2403;
T2403:;
	{long V1290;
	{long V1291;
	V1291= V1287;
	{long V1292;
	V1292= V1291;
	V1293= (long)STREF(unsigned short,base0[1],4);
	if((V1293)==(1)){
	goto T2417;}
	goto T2413;
	goto T2417;
T2417:;
	if(!((V1292)==(0))){
	goto T2413;}}
	base[3]= VV[156];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T2413;
T2413:;
	V1294= (long)STREF(unsigned short,base0[1],4);
	if(!((V1294)==(1))){
	goto T2422;}
	V1295 = V1291;
	V1296= (long)STREF(unsigned short,base0[1],32);
	V1290= (long)(V1295)*(V1296);
	goto T2411;
	goto T2422;
T2422:;
	V1297 = V1291;
	V1298= (long)STREF(unsigned short,base0[1],32);
	V1290= (long)((long)(V1297)*(V1298))+1;}
	goto T2411;
T2411:;
	if((STREF(object,base0[1],8))!=Cnil){
	goto T2427;}
	base[2]= Cnil;
	goto T2401;
	goto T2427;
T2427:;
	V1299= STREF(object,base0[1],40);
	V1300 = V1290;
	V1301= (long)STREF(unsigned short,base0[1],4);
	base[2]= (V1299)->v.v_self[(long)(V1300)+(V1301)];}}
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
	{object V1302;
	object V1303;
	check_arg(2);
	V1302=(base[0]);
	V1303=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI206))(Cnil,base0[1],(V1302),(V1303));
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
	{object V1304;
	check_arg(1);
	V1304=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (*(LnkLI217))(Cnil,base0[1],base0[0],fix((V1304)));
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
	{object V1305;
	check_arg(1);
	V1305=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1306;
	if(!(((VV[84]->s.s_dbind))==(VV[85]))){
	goto T2433;}
	base[1]= (V1305);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk219)(Lclptr219);
	vs_top=sup;
	V1307= vs_base[0];
	V1306= (*(LnkLI218))(V1307);
	goto T2431;
	goto T2433;
T2433:;
	V1306= (*(LnkLI218))((V1305));
	goto T2431;
T2431:;
	if(!(((V1305))==((VV[86]->s.s_dbind)))){
	goto T2438;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2438;
T2438:;
	base[1]= (V1306);
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
	base[1]= (V1306);
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
	base[1]= (V1306);
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
	base[1]= (V1306);
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
	base[1]= (V1306);
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
	base[3]= (V1306);
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
	{object V1308;
	object V1309;
	check_arg(2);
	V1308=(base[0]);
	V1309=(base[1]);
	vs_top=sup;
	{object V1310;
	V1310= list(2,(V1308),(V1309));
	(base0[0]->c.c_car)= make_cons((V1310),(base0[0]->c.c_car));
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

