
#include "cmpinclude.h"
#include "gcl_serror.h"
void init_gcl_serror(){do_init(VV);}
/*	local entry for function MAKE-ERROR-CONDITION	*/

static object LI1(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{object V1;
	object V2;
	object V3;
	object V4;
	object V5;
	object V6;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI1key,first,ap);
	V1=(Vcs[0]);
	V2=(Vcs[1]);
	V3=(Vcs[2]);
	V4=(Vcs[3]);
	V5=(Vcs[4]);
	V6=(Vcs[5]);
	base[0]= VV[0];
	base[1]= (V1);
	base[2]= (V2);
	base[3]= (V3);
	base[4]= (V4);
	base[5]= (V5);
	base[6]= (V6);
	vs_top=(vs_base=base+0)+7;
	siLmake_structure();
	vs_top=sup;
	{object V7 = vs_base[0];
	VMR1(V7)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	macro definition for COND-ERROR	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	check_arg(2);
	vs_top=sup;
	{object V8=base[0]->c.c_cdr;
	if(endp(V8))invalid_macro_call();
	base[2]= (V8->c.c_car);
	V8=V8->c.c_cdr;
	if(endp(V8))invalid_macro_call();
	base[3]= (V8->c.c_car);
	V8=V8->c.c_cdr;
	base[4]= V8;}
	if(base[2]!=Cnil){
	goto T8;}
	base[2]= VV[1];
	goto T8;
T8:;
	{object V9;
	base[5]= VV[2];
	vs_top=(vs_base=base+5)+1;
	Lgensym();
	vs_top=sup;
	V9= vs_base[0];
	{register object V10;
	V11= list(2,VV[4],(V9));
	V12= car(base[2]);
	{object V14;
	object V15= base[4];
	if(endp(V15)){
	V13= Cnil;
	goto T13;}
	base[5]=V14=MMcons(Cnil,Cnil);
	goto T14;
T14:;
	(V14->c.c_car)= car((V15->c.c_car));
	V15=MMcdr(V15);
	if(endp(V15)){
	V13= base[5];
	goto T13;}
	V14=MMcdr(V14)=MMcons(Cnil,Cnil);
	goto T14;}
	goto T13;
T13:;
	V16= make_cons(VV[13],V13);
	V17= list(3,VV[3],/* INLINE-ARGS */V11,list(3,VV[5],VV[6],list(3,VV[7],list(3,VV[8],list(3,VV[9],list(2,VV[10],list(4,VV[11],base[2],/* INLINE-ARGS */V12,list(3,VV[12],/* INLINE-ARGS */V16,list(2,VV[4],(V9))))),VV[14]),base[3]),VV[15])));
	V18= append(base[4],VV[17]);
	V10= list(2,/* INLINE-ARGS */V17,make_cons(VV[16],/* INLINE-ARGS */V18));
	if((base[2])==Cnil){
	goto T18;}
	V10= listA(3,VV[18],base[2],(V10));
	goto T16;
	goto T18;
T18:;
	V10= make_cons(VV[8],(V10));
	goto T16;
T16:;
	base[5]= list(3,VV[19],VV[6],(V10));
	vs_top=(vs_base=base+5)+1;
	return;}}
}
/*	macro definition for COND-ANY-ERROR	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(2);
	vs_top=sup;
	{object V19=base[0]->c.c_cdr;
	if(endp(V19))invalid_macro_call();
	base[2]= (V19->c.c_car);
	V19=V19->c.c_cdr;
	if(endp(V19))invalid_macro_call();
	base[3]= (V19->c.c_car);
	V19=V19->c.c_cdr;
	base[4]= V19;}
	{register object V20;
	V21= list(3,VV[20],VV[21],list(3,VV[3],VV[22],list(3,VV[5],VV[6],base[3])));
	V22= list(2,Ct,make_cons(VV[23],base[2]));
	V23= make_cons(/* INLINE-ARGS */V22,Cnil);
	V24= append(base[4],/* INLINE-ARGS */V23);
	V20= list(2,/* INLINE-ARGS */V21,make_cons(VV[16],/* INLINE-ARGS */V24));
	if((base[2])==Cnil){
	goto T25;}
	V20= listA(3,VV[18],base[2],(V20));
	goto T23;
	goto T25;
T25:;
	V20= make_cons(VV[8],(V20));
	goto T23;
T23:;
	base[5]= list(3,VV[19],VV[6],(V20));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local entry for function UNIVERSAL-ERROR-HANDLER	*/

static object LI4(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB4 VMS4 VMV4
	{register object V25;
	va_start(ap,first);
	narg= narg - 0;
	V26 = list_vector_new(narg,first,ap);
	V25= V26;
	if((symbol_value(VV[24]))==Cnil){
	goto T29;}
	vs_base=vs_top;
	(void) (*Lnk72)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk73)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk74)();
	vs_top=sup;
	goto T29;
T29:;
	{register object V27;
	V28= car((V25));
	base[0]= (V25);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk76)();
	vs_top=sup;
	V29= vs_base[0];
	V30= caddr((V25));
	V31= cadddr((V25));
	base[0]= cdr(cddddr((V25)));
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V32= vs_base[0];
	base[0]= (V25);
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V33= vs_base[0];
	V27= (VFUN_NARGS=12,(*(LnkLI75))(VV[25],/* INLINE-ARGS */V28,VV[26],V29,VV[27],/* INLINE-ARGS */V30,VV[28],/* INLINE-ARGS */V31,VV[29],V32,VV[30],V33));
	if((symbol_value(VV[31]))==Cnil){
	goto T42;}
	{frame_ptr fr;
	fr=frs_sch_catch(VV[32]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[32]);
	base[0]= (V27);
	vs_top=(vs_base=base+0)+1;
	unwind(fr,VV[32]);}
	goto T42;
T42:;
	{object V34;
	{register object V35;
	V35= Cnil;
	{register long V36;
	register long V37;
	V36= 0;
	base[0]= symbol_value(VV[14]);
	vs_top=(vs_base=base+0)+1;
	Lfill_pointer();
	vs_top=sup;
	V37= fix(vs_base[0]);
	goto T50;
T50:;
	if(!((V36)>=(V37))){
	goto T51;}
	V34= Cnil;
	goto T45;
	goto T51;
T51:;
	V38= aref1(symbol_value(VV[14]),V36);
	V35= (
	V39 = /* INLINE-ARGS */V38,
	(type_of(V39) == t_sfun ?(*((V39)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V39)==t_vfun) ?
	(*((V39)->sfn.sfn_self)):
	(fcall.fun=(V39),fcalln))((V27)));
	if(((V35))==Cnil){
	goto T55;}
	{frame_ptr fr;
	fr=frs_sch_catch((V35));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,(V35));
	base[0]= (V27);
	vs_top=(vs_base=base+0)+1;
	unwind(fr,(V35));}
	goto T55;
T55:;
	V36= (long)(V36)+1;
	goto T50;}}
	goto T45;
T45:;
	if(((V34))==Cnil){
	goto T64;}
	{object V40 = (V34);
	VMR4(V40)}
	goto T64;
T64:;
	base[0]= get(symbol_value(VV[33]),VV[34],Cnil);
	{object V41;
	V41= (V25);
	 vs_top=base+1;
	 while(!endp(V41))
	 {vs_push(car(V41));V41=cdr(V41);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	{object V42 = vs_base[0];
	VMR4(V42)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for INF-SIGNAL	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{object V43;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V43=(base[0]);
	vs_top=sup;
	base[1]= symbol_value(VV[33]);
	{object V44;
	V44= structure_ref(car((V43)),VV[0],5);
	 vs_top=base+2;
	 while(!endp(V44))
	 {vs_push(car(V44));V44=cdr(V44);}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	return;
	}
}
/*	macro definition for DEF-ERROR-TYPE	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	check_arg(2);
	vs_top=sup;
	{object V45=base[0]->c.c_cdr;
	if(endp(V45))invalid_macro_call();
	base[2]= (V45->c.c_car);
	V45=V45->c.c_cdr;
	if(endp(V45))invalid_macro_call();
	{object V46= (V45->c.c_car);
	if(endp(V46))invalid_macro_call();
	base[3]= (V46->c.c_car);
	V46=V46->c.c_cdr;
	if(!endp(V46))invalid_macro_call();}
	V45=V45->c.c_cdr;
	base[4]= V45;}
	{object V47;
	base[6]= Cnil;
	base[7]= VV[35];
	base[8]= base[2];
	vs_top=(vs_base=base+6)+3;
	Lformat();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lintern();
	vs_top=sup;
	V47= vs_base[0];
	V48= listA(4,VV[38],(V47),make_cons(base[3],Cnil),base[4]);
	base[5]= list(4,VV[36],VV[37],/* INLINE-ARGS */V48,list(4,VV[39],base[2],Cnil,list(4,VV[40],VV[41],VV[42],list(3,VV[40],VV[43],list(2,VV[4],(V47))))));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local entry for function WTA-tester	*/

static object LI7(V50)

object V50;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	V51= structure_ref((V50),VV[0],0);
	{object V52 = (eql(/* INLINE-ARGS */V51,VV[44])?Ct:Cnil);
	VMR7(V52)}
	return Cnil;
}
/*	function definition for G1385	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= list(3,VV[45],VV[0],list(2,VV[46],VV[47]));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local entry for function SUBSCRIPT-OUT-OF-BOUNDS-tester	*/

static object LI9(V54)

object V54;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	V55= structure_ref((V54),VV[0],1);
	{object V56 = (equal(/* INLINE-ARGS */V55,VV[48])?Ct:Cnil);
	VMR9(V56)}
	return Cnil;
}
/*	function definition for G1386	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= list(3,VV[45],VV[0],list(2,VV[46],VV[49]));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local entry for function ERROR-tester	*/

static object LI11(V58)

object V58;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	V59= structure_ref((V58),VV[0],0);
	{object V60 = (eql(/* INLINE-ARGS */V59,VV[50])?Ct:Cnil);
	VMR11(V60)}
	return Cnil;
}
/*	function definition for G1387	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= list(3,VV[45],VV[0],list(2,VV[46],VV[51]));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local entry for function WRONG-TYPE-ARGUMENT-tester	*/

static object LI13(V62)

object V62;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	V63= structure_ref((V62),VV[0],0);
	{object V64 = (eql(/* INLINE-ARGS */V63,VV[52])?Ct:Cnil);
	VMR13(V64)}
	return Cnil;
}
/*	function definition for G1388	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= list(3,VV[45],VV[0],list(2,VV[46],VV[53]));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local entry for function TOO-FEW-ARGUMENTS-tester	*/

static object LI15(V66)

object V66;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	V67= structure_ref((V66),VV[0],0);
	{object V68 = (eql(/* INLINE-ARGS */V67,VV[54])?Ct:Cnil);
	VMR15(V68)}
	return Cnil;
}
/*	function definition for G1389	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= list(3,VV[45],VV[0],list(2,VV[46],VV[55]));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local entry for function TOO-MANY-ARGUMENTS-tester	*/

static object LI17(V70)

object V70;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	V71= structure_ref((V70),VV[0],0);
	{object V72 = (eql(/* INLINE-ARGS */V71,VV[56])?Ct:Cnil);
	VMR17(V72)}
	return Cnil;
}
/*	function definition for G1390	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= list(3,VV[45],VV[0],list(2,VV[46],VV[57]));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local entry for function UNEXPECTED-KEYWORD-tester	*/

static object LI19(V74)

object V74;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	V75= structure_ref((V74),VV[0],0);
	{object V76 = (eql(/* INLINE-ARGS */V75,VV[58])?Ct:Cnil);
	VMR19(V76)}
	return Cnil;
}
/*	function definition for G1391	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= list(3,VV[45],VV[0],list(2,VV[46],VV[59]));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local entry for function INVALID-FORM-tester	*/

static object LI21(V78)

object V78;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	V79= structure_ref((V78),VV[0],0);
	{object V80 = (eql(/* INLINE-ARGS */V79,VV[60])?Ct:Cnil);
	VMR21(V80)}
	return Cnil;
}
/*	function definition for G1392	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= list(3,VV[45],VV[0],list(2,VV[46],VV[61]));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local entry for function UNBOUND-VARIABLE-tester	*/

static object LI23(V82)

object V82;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	V83= structure_ref((V82),VV[0],0);
	{object V84 = (eql(/* INLINE-ARGS */V83,VV[62])?Ct:Cnil);
	VMR23(V84)}
	return Cnil;
}
/*	function definition for G1393	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= list(3,VV[45],VV[0],list(2,VV[46],VV[63]));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local entry for function INVALID-VARIABLE-tester	*/

static object LI25(V86)

object V86;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	V87= structure_ref((V86),VV[0],0);
	{object V88 = (eql(/* INLINE-ARGS */V87,VV[64])?Ct:Cnil);
	VMR25(V88)}
	return Cnil;
}
/*	function definition for G1394	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= list(3,VV[45],VV[0],list(2,VV[46],VV[65]));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local entry for function UNDEFINED-FUNCTION-tester	*/

static object LI27(V90)

object V90;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	V91= structure_ref((V90),VV[0],0);
	{object V92 = (eql(/* INLINE-ARGS */V91,VV[66])?Ct:Cnil);
	VMR27(V92)}
	return Cnil;
}
/*	function definition for G1395	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_reserve(VM28);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= list(3,VV[45],VV[0],list(2,VV[46],VV[67]));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local entry for function INVALID-FUNCTION-tester	*/

static object LI29(V94)

object V94;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	V95= structure_ref((V94),VV[0],0);
	{object V96 = (eql(/* INLINE-ARGS */V95,VV[68])?Ct:Cnil);
	VMR29(V96)}
	return Cnil;
}
/*	function definition for G1396	*/

static void L30()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_reserve(VM30);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= list(3,VV[45],VV[0],list(2,VV[46],VV[69]));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	macro definition for CONDITION-CASE	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_reserve(VM31);
	check_arg(2);
	vs_top=sup;
	{object V97=base[0]->c.c_cdr;
	if(endp(V97))invalid_macro_call();
	base[2]= (V97->c.c_car);
	V97=V97->c.c_cdr;
	if(endp(V97))invalid_macro_call();
	base[3]= (V97->c.c_car);
	V97=V97->c.c_cdr;
	base[4]= V97;}
	{register object V98;
	V98= car(base[2]);
	V99= make_cons((V98),Cnil);
	{register object V101;
	register object V102;
	V101= Cnil;
	V102= base[4];
	{register object V103;
	register object V104;
	register object V105;
	register object V106;
	V103= Cnil;
	V104= Cnil;
	V105= Cnil;
	V106= Cnil;
	goto T78;
T78:;
	if(((V102))==Cnil){
	goto T81;}
	goto T80;
	goto T81;
T81:;
	goto T79;
	goto T80;
T80:;
	{register object V107;
	V107= car((V102));
	V101= (V107);}
	{object V108= car((V101));
	if(!(type_of(V108)==t_cons||(V108)==Cnil)){
	goto T88;}}
	V109= list(3,VV[71],(V98),list(2,VV[4],make_cons(VV[13],car((V101)))));
	V105= make_cons(/* INLINE-ARGS */V109,cdr((V101)));
	if(((V104))==Cnil){
	goto T93;}
	{register object V110;
	register object V111;
	V110= (V104);
	V104= make_cons((V105),Cnil);
	V111= (V104);
	if(type_of((V110))!=t_cons)FEwrong_type_argument(Scons,(V110));
	((V110))->c.c_cdr = (V111);
	goto T86;}
	goto T93;
T93:;
	V104= make_cons((V105),Cnil);
	V103= (V104);
	goto T86;
	goto T88;
T88:;
	V112= list(3,VV[71],(V98),list(2,VV[4],car((V101))));
	V106= make_cons(/* INLINE-ARGS */V112,cdr((V101)));
	if(((V104))==Cnil){
	goto T104;}
	{register object V113;
	register object V114;
	V113= (V104);
	V104= make_cons((V106),Cnil);
	V114= (V104);
	if(type_of((V113))!=t_cons)FEwrong_type_argument(Scons,(V113));
	((V113))->c.c_cdr = (V114);
	goto T86;}
	goto T104;
T104:;
	V104= make_cons((V106),Cnil);
	V103= (V104);
	goto T86;
T86:;
	V102= cdr((V102));
	goto T78;
	goto T79;
T79:;
	V100= (V103);
	goto T76;
	V100= Cnil;
	goto T76;
	V100= Cnil;
	goto T76;}}
	goto T76;
T76:;
	base[5]= listA(4,VV[70],/* INLINE-ARGS */V99,base[3],V100);
	vs_top=(vs_base=base+5)+1;
	return;}
}
static void LnkT76(){ call_or_link(VV[76],(void **)(void *)&Lnk76);} /* FIFTH */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[75],(void **)(void *)&LnkLI75,first,ap);va_end(ap);return V1;} /* MAKE-ERROR-CONDITION */
static void LnkT74(){ call_or_link(VV[74],(void **)(void *)&Lnk74);} /* BREAK-VS */
static void LnkT73(){ call_or_link(VV[73],(void **)(void *)&Lnk73);} /* BACKTRACE */
static void LnkT72(){ call_or_link(VV[72],(void **)(void *)&Lnk72);} /* SIMPLE-BACKTRACE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

