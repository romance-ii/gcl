
#include "cmpinclude.h"
#include "gcl_serror.h"
void init_gcl_serror(){do_init(VV);}
/*	function definition for MAKE-ERROR-CONDITION	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	{object V1;
	object V2;
	object V3;
	object V4;
	object V5;
	object V6;
	parse_key(vs_base,FALSE,FALSE,6,VV[25],VV[26],VV[27],VV[28],VV[29],VV[30]);
	vs_top=sup;
	V1=(base[0]);
	V2=(base[1]);
	V3=(base[2]);
	V4=(base[3]);
	V5=(base[4]);
	V6=(base[5]);
	base[12]= VV[0];
	base[13]= (V1);
	base[14]= (V2);
	base[15]= (V3);
	base[16]= (V4);
	base[17]= (V5);
	base[18]= (V6);
	vs_top=(vs_base=base+12)+7;
	siLmake_structure();
	return;
	}
}
/*	macro definition for COND-ERROR	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	check_arg(2);
	vs_top=sup;
	{object V7=base[0]->c.c_cdr;
	if(endp(V7))invalid_macro_call();
	base[2]= (V7->c.c_car);
	V7=V7->c.c_cdr;
	if(endp(V7))invalid_macro_call();
	base[3]= (V7->c.c_car);
	V7=V7->c.c_cdr;
	base[4]= V7;}
	if(base[2]!=Cnil){
	goto T8;}
	base[2]= VV[1];
	goto T8;
T8:;
	{object V8;
	base[5]= VV[2];
	vs_top=(vs_base=base+5)+1;
	Lgensym();
	vs_top=sup;
	V8= vs_base[0];
	{register object V9;
	V10= list(2,VV[4],(V8));
	V11= car(base[2]);
	{object V13;
	object V14= base[4];
	if(endp(V14)){
	V12= Cnil;
	goto T13;}
	base[5]=V13=MMcons(Cnil,Cnil);
	goto T14;
T14:;
	(V13->c.c_car)= car((V14->c.c_car));
	V14=MMcdr(V14);
	if(endp(V14)){
	V12= base[5];
	goto T13;}
	V13=MMcdr(V13)=MMcons(Cnil,Cnil);
	goto T14;}
	goto T13;
T13:;
	V15= make_cons(VV[13],V12);
	V16= list(3,VV[3],/* INLINE-ARGS */V10,list(3,VV[5],VV[6],list(3,VV[7],list(3,VV[8],list(3,VV[9],list(2,VV[10],list(4,VV[11],base[2],/* INLINE-ARGS */V11,list(3,VV[12],/* INLINE-ARGS */V15,list(2,VV[4],(V8))))),VV[14]),base[3]),VV[15])));
	V17= append(base[4],VV[17]);
	V9= list(2,/* INLINE-ARGS */V16,make_cons(VV[16],/* INLINE-ARGS */V17));
	if((base[2])==Cnil){
	goto T18;}
	V9= listA(3,VV[18],base[2],(V9));
	goto T16;
	goto T18;
T18:;
	V9= make_cons(VV[8],(V9));
	goto T16;
T16:;
	base[5]= list(3,VV[19],VV[6],(V9));
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
	{object V18=base[0]->c.c_cdr;
	if(endp(V18))invalid_macro_call();
	base[2]= (V18->c.c_car);
	V18=V18->c.c_cdr;
	if(endp(V18))invalid_macro_call();
	base[3]= (V18->c.c_car);
	V18=V18->c.c_cdr;
	base[4]= V18;}
	{register object V19;
	V20= list(3,VV[20],VV[21],list(3,VV[3],VV[22],list(3,VV[5],VV[6],base[3])));
	V21= list(2,Ct,make_cons(VV[23],base[2]));
	V22= make_cons(/* INLINE-ARGS */V21,Cnil);
	V23= append(base[4],/* INLINE-ARGS */V22);
	V19= list(2,/* INLINE-ARGS */V20,make_cons(VV[16],/* INLINE-ARGS */V23));
	if((base[2])==Cnil){
	goto T25;}
	V19= listA(3,VV[18],base[2],(V19));
	goto T23;
	goto T25;
T25:;
	V19= make_cons(VV[8],(V19));
	goto T23;
T23:;
	base[5]= list(3,VV[19],VV[6],(V19));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local entry for function UNIVERSAL-ERROR-HANDLER	*/

static object LI4(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB4 VMS4 VMV4
	{register object V24;
	va_start(ap,first);
	narg= narg - 0;
	V25 = list_vector_new(narg,first,ap);
	V24= V25;
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
	{register object V26;
	base[0]= VV[25];
	base[1]= car((V24));
	base[2]= VV[26];
	base[4]= (V24);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk75)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= VV[27];
	base[5]= caddr((V24));
	base[6]= VV[28];
	base[7]= cadddr((V24));
	base[8]= VV[29];
	base[10]= cdr(cddddr((V24)));
	vs_top=(vs_base=base+10)+1;
	Lcopy_list();
	vs_top=sup;
	base[9]= vs_base[0];
	base[10]= VV[30];
	base[12]= (V24);
	vs_top=(vs_base=base+12)+1;
	Lcopy_list();
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+0)+12;
	(void) (*Lnk76)();
	vs_top=sup;
	V26= vs_base[0];
	if((symbol_value(VV[31]))==Cnil){
	goto T51;}
	{frame_ptr fr;
	fr=frs_sch_catch(VV[32]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[32]);
	base[0]= (V26);
	vs_top=(vs_base=base+0)+1;
	unwind(fr,VV[32]);}
	goto T51;
T51:;
	{object V27;
	{register object V28;
	V28= Cnil;
	{register long V29;
	register long V30;
	V29= 0;
	base[0]= symbol_value(VV[14]);
	vs_top=(vs_base=base+0)+1;
	Lfill_pointer();
	vs_top=sup;
	V30= fix(vs_base[0]);
	goto T59;
T59:;
	if(!((V29)>=(V30))){
	goto T60;}
	V27= Cnil;
	goto T54;
	goto T60;
T60:;
	V31= aref1(symbol_value(VV[14]),V29);
	V28= (
	V32 = /* INLINE-ARGS */V31,
	(type_of(V32) == t_sfun ?(*((V32)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V32)==t_vfun) ?
	(*((V32)->sfn.sfn_self)):
	(fcall.fun=(V32),fcalln))((V26)));
	if(((V28))==Cnil){
	goto T64;}
	{frame_ptr fr;
	fr=frs_sch_catch((V28));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,(V28));
	base[0]= (V26);
	vs_top=(vs_base=base+0)+1;
	unwind(fr,(V28));}
	goto T64;
T64:;
	V29= (long)(V29)+1;
	goto T59;}}
	goto T54;
T54:;
	if(((V27))==Cnil){
	goto T73;}
	{object V33 = (V27);
	VMR4(V33)}
	goto T73;
T73:;
	base[0]= get(symbol_value(VV[33]),VV[34],Cnil);
	{object V34;
	V34= (V24);
	 vs_top=base+1;
	 while(!endp(V34))
	 {vs_push(car(V34));V34=cdr(V34);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	{object V35 = vs_base[0];
	VMR4(V35)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for INF-SIGNAL	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{object V36;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V36=(base[0]);
	vs_top=sup;
	base[1]= symbol_value(VV[33]);
	{object V37;
	V37= structure_ref(car((V36)),VV[0],5);
	 vs_top=base+2;
	 while(!endp(V37))
	 {vs_push(car(V37));V37=cdr(V37);}
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
	{object V38=base[0]->c.c_cdr;
	if(endp(V38))invalid_macro_call();
	base[2]= (V38->c.c_car);
	V38=V38->c.c_cdr;
	if(endp(V38))invalid_macro_call();
	{object V39= (V38->c.c_car);
	if(endp(V39))invalid_macro_call();
	base[3]= (V39->c.c_car);
	V39=V39->c.c_cdr;
	if(!endp(V39))invalid_macro_call();}
	V38=V38->c.c_cdr;
	base[4]= V38;}
	{object V40;
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
	V40= vs_base[0];
	V41= listA(4,VV[38],(V40),make_cons(base[3],Cnil),base[4]);
	base[5]= list(4,VV[36],VV[37],/* INLINE-ARGS */V41,list(4,VV[39],base[2],Cnil,list(4,VV[40],VV[41],VV[42],list(3,VV[40],VV[43],list(2,VV[4],(V40))))));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	function definition for WTA-tester	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	{object V42;
	check_arg(1);
	V42=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	V43= structure_ref((V42),VV[0],0);
	base[1]= (eql(/* INLINE-ARGS */V43,VV[44])?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1387	*/

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
/*	function definition for SUBSCRIPT-OUT-OF-BOUNDS-tester	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{object V44;
	check_arg(1);
	V44=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	V45= structure_ref((V44),VV[0],1);
	base[1]= (equal(/* INLINE-ARGS */V45,VV[48])?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1388	*/

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
/*	function definition for ERROR-tester	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	{object V46;
	check_arg(1);
	V46=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	V47= structure_ref((V46),VV[0],0);
	base[1]= (eql(/* INLINE-ARGS */V47,VV[50])?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1389	*/

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
/*	function definition for WRONG-TYPE-ARGUMENT-tester	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	{object V48;
	check_arg(1);
	V48=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	V49= structure_ref((V48),VV[0],0);
	base[1]= (eql(/* INLINE-ARGS */V49,VV[52])?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1390	*/

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
/*	function definition for TOO-FEW-ARGUMENTS-tester	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	{object V50;
	check_arg(1);
	V50=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	V51= structure_ref((V50),VV[0],0);
	base[1]= (eql(/* INLINE-ARGS */V51,VV[54])?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1391	*/

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
/*	function definition for TOO-MANY-ARGUMENTS-tester	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{object V52;
	check_arg(1);
	V52=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	V53= structure_ref((V52),VV[0],0);
	base[1]= (eql(/* INLINE-ARGS */V53,VV[56])?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1392	*/

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
/*	function definition for UNEXPECTED-KEYWORD-tester	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{object V54;
	check_arg(1);
	V54=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	V55= structure_ref((V54),VV[0],0);
	base[1]= (eql(/* INLINE-ARGS */V55,VV[58])?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1393	*/

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
/*	function definition for INVALID-FORM-tester	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{object V56;
	check_arg(1);
	V56=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	V57= structure_ref((V56),VV[0],0);
	base[1]= (eql(/* INLINE-ARGS */V57,VV[60])?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1394	*/

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
/*	function definition for UNBOUND-VARIABLE-tester	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	{object V58;
	check_arg(1);
	V58=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	V59= structure_ref((V58),VV[0],0);
	base[1]= (eql(/* INLINE-ARGS */V59,VV[62])?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1395	*/

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
/*	function definition for INVALID-VARIABLE-tester	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	{object V60;
	check_arg(1);
	V60=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	V61= structure_ref((V60),VV[0],0);
	base[1]= (eql(/* INLINE-ARGS */V61,VV[64])?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1396	*/

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
/*	function definition for UNDEFINED-FUNCTION-tester	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	{object V62;
	check_arg(1);
	V62=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	V63= structure_ref((V62),VV[0],0);
	base[1]= (eql(/* INLINE-ARGS */V63,VV[66])?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1397	*/

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
/*	function definition for INVALID-FUNCTION-tester	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_reserve(VM29);
	{object V64;
	check_arg(1);
	V64=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	V65= structure_ref((V64),VV[0],0);
	base[1]= (eql(/* INLINE-ARGS */V65,VV[68])?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1398	*/

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
	{object V66=base[0]->c.c_cdr;
	if(endp(V66))invalid_macro_call();
	base[2]= (V66->c.c_car);
	V66=V66->c.c_cdr;
	if(endp(V66))invalid_macro_call();
	base[3]= (V66->c.c_car);
	V66=V66->c.c_cdr;
	base[4]= V66;}
	{register object V67;
	V67= car(base[2]);
	V68= make_cons((V67),Cnil);
	{register object V70;
	register object V71;
	V70= Cnil;
	V71= base[4];
	{register object V72;
	register object V73;
	register object V74;
	register object V75;
	V72= Cnil;
	V73= Cnil;
	V74= Cnil;
	V75= Cnil;
	goto T87;
T87:;
	if(((V71))==Cnil){
	goto T90;}
	goto T89;
	goto T90;
T90:;
	goto T88;
	goto T89;
T89:;
	{register object V76;
	V76= car((V71));
	V70= (V76);}
	{object V77= car((V70));
	if(!(type_of(V77)==t_cons||(V77)==Cnil)){
	goto T97;}}
	V78= list(3,VV[71],(V67),list(2,VV[4],make_cons(VV[13],car((V70)))));
	V74= make_cons(/* INLINE-ARGS */V78,cdr((V70)));
	if(((V73))==Cnil){
	goto T102;}
	{register object V79;
	register object V80;
	V79= (V73);
	V73= make_cons((V74),Cnil);
	V80= (V73);
	if(type_of((V79))!=t_cons)FEwrong_type_argument(Scons,(V79));
	((V79))->c.c_cdr = (V80);
	goto T95;}
	goto T102;
T102:;
	V73= make_cons((V74),Cnil);
	V72= (V73);
	goto T95;
	goto T97;
T97:;
	V81= list(3,VV[71],(V67),list(2,VV[4],car((V70))));
	V75= make_cons(/* INLINE-ARGS */V81,cdr((V70)));
	if(((V73))==Cnil){
	goto T113;}
	{register object V82;
	register object V83;
	V82= (V73);
	V73= make_cons((V75),Cnil);
	V83= (V73);
	if(type_of((V82))!=t_cons)FEwrong_type_argument(Scons,(V82));
	((V82))->c.c_cdr = (V83);
	goto T95;}
	goto T113;
T113:;
	V73= make_cons((V75),Cnil);
	V72= (V73);
	goto T95;
T95:;
	V71= cdr((V71));
	goto T87;
	goto T88;
T88:;
	V69= (V72);
	goto T85;
	V69= Cnil;
	goto T85;
	V69= Cnil;
	goto T85;}}
	goto T85;
T85:;
	base[5]= listA(4,VV[70],/* INLINE-ARGS */V68,base[3],V69);
	vs_top=(vs_base=base+5)+1;
	return;}
}
static void LnkT76(){ call_or_link(VV[76],(void **)(void *)&Lnk76);} /* MAKE-ERROR-CONDITION */
static void LnkT75(){ call_or_link(VV[75],(void **)(void *)&Lnk75);} /* FIFTH */
static void LnkT74(){ call_or_link(VV[74],(void **)(void *)&Lnk74);} /* BREAK-VS */
static void LnkT73(){ call_or_link(VV[73],(void **)(void *)&Lnk73);} /* BACKTRACE */
static void LnkT72(){ call_or_link(VV[72],(void **)(void *)&Lnk72);} /* SIMPLE-BACKTRACE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

