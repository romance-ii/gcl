
#include "cmpinclude.h"
#include "pcl_low.h"
void init_pcl_low(){do_init(VV);}
/*	macro definition for %SVREF	*/

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
	V2= list(3,VV[3],VV[4],base[2]);
	base[4]= list(3,VV[0],VV[1],list(3,VV[2],/* INLINE-ARGS */V2,list(3,VV[3],VV[5],base[3])));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for %SET-SVREF	*/

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
	if(endp(V3))invalid_macro_call();
	base[3]= (V3->c.c_car);
	V3=V3->c.c_cdr;
	if(endp(V3))invalid_macro_call();
	base[4]= (V3->c.c_car);
	V3=V3->c.c_cdr;
	if(!endp(V3))invalid_macro_call();}
	V4= list(3,VV[3],VV[4],base[2]);
	base[5]= list(3,VV[0],VV[6],list(3,VV[7],list(3,VV[2],/* INLINE-ARGS */V4,list(3,VV[3],VV[5],base[3])),base[4]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for WITHOUT-INTERRUPTS	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V5=base[0]->c.c_cdr;
	base[2]= V5;}
	base[3]= list(3,VV[8],VV[9],make_cons(VV[10],base[2]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-STD-INSTANCE	*/

static object LI4(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB4 VMS4 VMV4
	{object V6;
	object V7;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI4key,first,ap);
	V6=(Vcs[0]);
	V7=(Vcs[1]);
	base[0]= VV[11];
	base[1]= (V6);
	base[2]= (V7);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V8 = vs_base[0];
	VMR4(V8)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function %%ALLOCATE-INSTANCE--CLASS	*/

static object LI5()

{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	base[0]= VV[11];
	base[1]= Cnil;
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V11 = vs_base[0];
	VMR5(V11)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for %INSTANCE-REF	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V12=base[0]->c.c_cdr;
	if(endp(V12))invalid_macro_call();
	base[2]= (V12->c.c_car);
	V12=V12->c.c_cdr;
	if(endp(V12))invalid_macro_call();
	base[3]= (V12->c.c_car);
	V12=V12->c.c_cdr;
	if(!endp(V12))invalid_macro_call();}
	base[4]= list(3,VV[12],base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for INSTANCE-REF	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V13=base[0]->c.c_cdr;
	if(endp(V13))invalid_macro_call();
	base[2]= (V13->c.c_car);
	V13=V13->c.c_cdr;
	if(endp(V13))invalid_macro_call();
	base[3]= (V13->c.c_car);
	V13=V13->c.c_cdr;
	if(!endp(V13))invalid_macro_call();}
	base[4]= list(3,VV[2],base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for STD-INSTANCE-WRAPPER	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V14=base[0]->c.c_cdr;
	if(endp(V14))invalid_macro_call();
	base[2]= (V14->c.c_car);
	V14=V14->c.c_cdr;
	if(!endp(V14))invalid_macro_call();}
	base[3]= list(2,VV[13],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for STD-INSTANCE-SLOTS	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V15=base[0]->c.c_cdr;
	if(endp(V15))invalid_macro_call();
	base[2]= (V15->c.c_car);
	V15=V15->c.c_cdr;
	if(!endp(V15))invalid_macro_call();}
	base[3]= list(2,VV[14],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for GET-WRAPPER	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V16=base[0]->c.c_cdr;
	if(endp(V16))invalid_macro_call();
	base[2]= (V16->c.c_car);
	V16=V16->c.c_cdr;
	if(!endp(V16))invalid_macro_call();}
	V17= list(2,VV[16],base[2]);
	V18= list(2,/* INLINE-ARGS */V17,list(2,VV[17],base[2]));
	V19= list(2,VV[18],base[2]);
	base[3]= list(4,VV[15],/* INLINE-ARGS */V18,list(2,/* INLINE-ARGS */V19,list(2,VV[19],base[2])),VV[20]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for GET-INSTANCE-WRAPPER-OR-NIL	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V20=base[0]->c.c_cdr;
	if(endp(V20))invalid_macro_call();
	base[2]= (V20->c.c_car);
	V20=V20->c.c_cdr;
	if(!endp(V20))invalid_macro_call();}
	V21= list(2,VV[16],base[2]);
	V22= list(2,/* INLINE-ARGS */V21,list(2,VV[17],base[2]));
	V23= list(2,VV[18],base[2]);
	base[3]= list(3,VV[15],/* INLINE-ARGS */V22,list(2,/* INLINE-ARGS */V23,list(2,VV[19],base[2])));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for GET-SLOTS	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V24=base[0]->c.c_cdr;
	if(endp(V24))invalid_macro_call();
	base[2]= (V24->c.c_car);
	V24=V24->c.c_cdr;
	if(!endp(V24))invalid_macro_call();}
	V25= list(2,VV[16],base[2]);
	V26= list(2,/* INLINE-ARGS */V25,list(2,VV[21],base[2]));
	V27= list(2,VV[18],base[2]);
	base[3]= list(4,VV[15],/* INLINE-ARGS */V26,list(2,/* INLINE-ARGS */V27,list(2,VV[22],base[2])),VV[23]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for GET-SLOTS-OR-NIL	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V28=base[0]->c.c_cdr;
	if(endp(V28))invalid_macro_call();
	base[2]= (V28->c.c_car);
	V28=V28->c.c_cdr;
	if(!endp(V28))invalid_macro_call();}
	V29= list(2,VV[16],base[2]);
	V30= list(2,/* INLINE-ARGS */V29,list(2,VV[21],base[2]));
	V31= list(2,VV[18],base[2]);
	base[3]= list(3,VV[15],/* INLINE-ARGS */V30,list(2,/* INLINE-ARGS */V31,list(2,VV[22],base[2])));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function PRINT-STD-INSTANCE	*/

static object LI14(V35,V36,V37)

object V35;register object V36;object V37;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	base[0]= (V36);
	base[1]= VV[24];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{register object V38;
	V38= (*(LnkLI73))((V35));
	V39= (VFUN_NARGS=2,(*(LnkLI74))(VV[25],Cnil));
	if(((V38))==(/* INLINE-ARGS */V39)){
	goto T12;}
	V40= (VFUN_NARGS=2,(*(LnkLI74))(VV[26],Cnil));
	if(((V38))==(/* INLINE-ARGS */V40)){
	goto T12;}
	V41= (VFUN_NARGS=2,(*(LnkLI74))(VV[27],Cnil));
	if(!(((V38))==(/* INLINE-ARGS */V41))){
	goto T13;}
	goto T12;
T12:;
	base[0]= (V36);
	base[1]= VV[28];
	base[2]= (*(LnkLI75))((V38));
	base[3]= (*(LnkLI75))((V35));
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	goto T10;
	goto T13;
T13:;
	base[0]= (V36);
	base[1]= VV[29];
	base[2]= (*(LnkLI75))((V38));
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;}
	goto T10;
T10:;
	base[0]= (V36);
	base[1]= VV[30];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI76))((V35),(V36)));
	base[0]= (V36);
	base[1]= VV[31];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{object V42 = vs_base[0];
	VMR14(V42)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for %ALLOCATE-STATIC-SLOT-STORAGE--CLASS	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V43=base[0]->c.c_cdr;
	if(endp(V43))invalid_macro_call();
	base[2]= (V43->c.c_car);
	V43=V43->c.c_cdr;
	if(!endp(V43))invalid_macro_call();}
	base[3]= listA(3,VV[32],base[2],VV[33]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for STD-INSTANCE-CLASS	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V44=base[0]->c.c_cdr;
	if(endp(V44))invalid_macro_call();
	base[2]= (V44->c.c_car);
	V44=V44->c.c_cdr;
	if(!endp(V44))invalid_macro_call();}
	base[3]= list(2,VV[34],list(2,VV[17],base[2]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function FUNCTION-PRETTY-ARGLIST	*/

static object LI17(V46)

object V46;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V47 = Cnil;
	VMR17(V47)}
	return Cnil;
}
/*	local entry for function SET-FUNCTION-PRETTY-ARGLIST	*/

static object LI18(V50,V51)

object V50;object V51;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V52 = (V51);
	VMR18(V52)}
	return Cnil;
}
/*	function definition for SET-FUNCTION-NAME	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V53;
	object V54;
	check_arg(2);
	V53=(base[0]);
	V54=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]=(VV[77]->s.s_gfdef);
	base[3]= (V53);
	base[5]= (V54);
	base[4]= simple_symlispcall(VV[78],base+5,1);
	base[5]= (V54);
	lispcall(base+2,3);
	return;
	}
}
/*	local entry for function SET-FUNCTION-NAME-1	*/

static object LI20(V58,V59,V60)

object V58;object V59;object V60;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V61 = (V58);
	VMR20(V61)}
	return Cnil;
}
/*	local entry for function INTERN-FUNCTION-NAME	*/

static object LI21(V63)

register object V63;
{	 VMB21 VMS21 VMV21
	bds_check;
	goto TTL;
TTL:;
	if(!(type_of((V63))==t_symbol)){
	goto T37;}
	{object V64 = (V63);
	VMR21(V64)}
	goto T37;
T37:;
	if(!(type_of((V63))==t_cons||((V63))==Cnil)){
	goto T40;}
	bds_bind(VV[35],(VV[36]->s.s_dbind));
	bds_bind(VV[37],VV[38]);
	bds_bind(VV[39],Cnil);
	bds_bind(VV[40],Ct);
	base[5]= Cnil;
	base[6]= VV[41];
	base[7]= (V63);
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	base[0]= vs_base[0];
	base[1]= (VV[36]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	{object V65 = vs_base[0];
	VMR21(V65)}
	goto T40;
T40:;
	{object V66 = Cnil;
	VMR21(V66)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function IN-THE-COMPILER-P	*/

static object LI22()

{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{object V67 = (VV[42]->s.s_dbind);
	VMR22(V67)}
	return Cnil;
}
/*	function definition for COMPILE-LAMBDA	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{register object V68;
	object V69;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V68=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T47;}
	V69=(base[1]);
	vs_top=sup;
	goto T48;
	goto T47;
T47:;
	V69= VV[43];
	goto T48;
T48:;
	if(((VV[44]->s.s_dbind))==Cnil){
	goto T50;}
	vs_base=vs_top;
	(void) (*Lnk79)();
	vs_top=sup;
	goto T50;
T50:;
	if(((VV[45]->s.s_dbind))!=Cnil){
	goto T54;}
	base[2]= (*(LnkLI80))((V68));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T54;
T54:;
	if(((VV[46]->s.s_dbind))!=Cnil){
	goto T57;}
	if(((*(LnkLI81))())==Cnil){
	goto T57;}
	base[2]= (*(LnkLI82))((V68));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T57;
T57:;
	if(!(((V69))==(VV[43]))){
	goto T62;}
	base[2]= Cnil;
	base[3]= (V68);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk83)();
	return;
	goto T62;
T62:;
	if(!(((V69))==(VV[47]))){
	goto T67;}
	{register object x= (VV[48]->s.s_dbind),V70= VV[49];
	while(V70!=Cnil)
	if(eql(x,V70->c.c_car)){
	goto T70;
	}else V70=V70->c.c_cdr;
	goto T67;}
	goto T70;
T70:;
	base[2]= Cnil;
	base[3]= (V68);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk83)();
	return;
	goto T67;
T67:;
	if(!(((V69))==(VV[50]))){
	goto T74;}
	if(!(((VV[48]->s.s_dbind))==(VV[43]))){
	goto T74;}
	base[2]= Cnil;
	base[3]= (V68);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk83)();
	return;
	goto T74;
T74:;
	base[2]= (*(LnkLI80))((V68));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local entry for function COMPILE-LAMBDA-UNCOMPILED	*/

static object LI25(V72)

object V72;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	base[0]=MMcons((V72),Cnil);
	{object V73 = 
	make_cclosure_new(LC45,Cnil,base[0],Cdata);
	VMR24(V73)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPILE-LAMBDA-DEFERRED	*/

static object LI27(V75)

object V75;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	base[0]=MMcons((V75),Cnil);
	base[3]= (base[0]->c.c_car);
	base[4]= VV[51];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk84)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(Cnil,base[1]);
	{object V76 = 
	make_cclosure_new(LC46,Cnil,base[2],Cdata);
	VMR25(V76)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for PRECOMPILE-RANDOM-CODE-SEGMENTS	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V77=base[0]->c.c_cdr;
	if(endp(V77)){
	base[2]= Cnil;
	} else {
	base[2]= (V77->c.c_car);
	V77=V77->c.c_cdr;}
	if(!endp(V77))invalid_macro_call();}
	V78= list(2,VV[53],base[2]);
	V79= list(2,VV[54],base[2]);
	base[3]= list(6,VV[10],VV[52],/* INLINE-ARGS */V78,/* INLINE-ARGS */V79,list(2,VV[55],base[2]),VV[56]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function RECORD-DEFINITION	*/

static object LI29(object V81,object V80,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB27 VMS27 VMV27
	{object V82;
	object V83;
	object V84;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V82= V81;
	V83= V80;
	narg= narg - 2;
	V85 = list_vector_new(narg,first,ap);
	V84= V85;
	{object V86 = Cnil;
	VMR27(V86)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function DOCTOR-DFUN-FOR-THE-DEBUGGER	*/

static object LI30(V89,V90)

object V89;object V90;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{object V91 = (V90);
	VMR28(V91)}
	return Cnil;
}
/*	macro definition for BUILT-IN-OR-STRUCTURE-WRAPPER	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V92=base[0]->c.c_cdr;
	if(endp(V92))invalid_macro_call();
	base[2]= (V92->c.c_car);
	V92=V92->c.c_cdr;
	if(!endp(V92))invalid_macro_call();}
	{object V93;
	object V94;
	object V95;
	V93= Cnil;
	V94= Cnil;
	{register object V96;
	if(type_of(base[2])==t_symbol){
	goto T88;}
	if(type_of(base[2])==t_fixnum||
type_of(base[2])==t_bignum||
type_of(base[2])==t_ratio||
type_of(base[2])==t_shortfloat||
type_of(base[2])==t_longfloat||
type_of(base[2])==t_complex){
	goto T88;}
	if(!(type_of(base[2])==t_cons||(base[2])==Cnil)){
	goto T89;}
	{register object x= CMPcar(base[2]),V97= VV[57];
	while(V97!=Cnil)
	if(eql(x,V97->c.c_car)){
	goto T96;
	}else V97=V97->c.c_cdr;
	goto T89;}
	goto T96;
T96:;
	goto T88;
T88:;
	V96= base[2];
	goto T87;
	goto T89;
T89:;
	{object V98;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V98= vs_base[0];
	V93= make_cons(V98,(V93));
	V94= make_cons(base[2],(V94));
	V96= (V98);}
	goto T87;
T87:;
	if(((*(LnkLI85))())==Cnil){
	goto T103;}
	V101= list(2,VV[59],(V96));
	V102= list(2,VV[60],(V96));
	V103= list(2,VV[61],(V96));
	V104= listA(3,VV[58],(V96),VV[62]);
	V95= list(4,VV[58],/* INLINE-ARGS */V101,/* INLINE-ARGS */V102,list(4,VV[58],/* INLINE-ARGS */V103,/* INLINE-ARGS */V104,list(2,VV[63],(V96))));
	goto T86;
	goto T103;
T103:;
	V105= list(2,VV[61],(V96));
	V106= list(3,VV[65],/* INLINE-ARGS */V105,listA(3,VV[58],(V96),VV[66]));
	V95= list(3,VV[64],/* INLINE-ARGS */V106,list(2,VV[67],(V96)));}
	goto T86;
T86:;
	V111= reverse((V93));
	V112= reverse((V94));
	{object V108;
	object V109= /* INLINE-ARGS */V111;
	object V110= /* INLINE-ARGS */V112;
	if(V109==Cnil||V110==Cnil){
	V107= Cnil;
	goto T105;}
	base[4]=V108=MMcons(Cnil,Cnil);
	goto T106;
T106:;
	(V108->c.c_car)= list(2,(V109->c.c_car),(V110->c.c_car));
	if((V109=MMcdr(V109))==Cnil||(V110=MMcdr(V110))==Cnil){
	V107= base[4];
	goto T105;}
	V108=MMcdr(V108)=MMcons(Cnil,Cnil);
	goto T106;}
	goto T105;
T105:;
	base[4]= list(3,VV[68],V107,(V95));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for WRAPPER-OF-MACRO	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V113=base[0]->c.c_cdr;
	if(endp(V113))invalid_macro_call();
	base[2]= (V113->c.c_car);
	V113=V113->c.c_cdr;
	if(!endp(V113))invalid_macro_call();}
	V114= list(2,VV[16],base[2]);
	V115= list(2,/* INLINE-ARGS */V114,list(2,VV[17],base[2]));
	V116= list(2,VV[18],base[2]);
	V117= list(2,/* INLINE-ARGS */V116,list(2,VV[19],base[2]));
	base[3]= list(4,VV[15],/* INLINE-ARGS */V115,/* INLINE-ARGS */V117,list(2,Ct,list(2,VV[69],base[2])));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function DECLARE-STRUCTURE	*/

static object LI33(V121,V122,V123)

object V121;object V122;object V123;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{object V125;
	object V126;
	V125= (VV[70]->s.s_dbind);
	V126= make_cons((V122),(V123));
	base[1]= V121;
	base[2]= (V125);
	base[3]= (V126);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;
	{object V127 = vs_base[0];
	VMR31(V127)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEFAULT-STRUCTUREP	*/

static object LI34(V129)

object V129;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	base[0]= (V129);
	vs_top=(vs_base=base+0)+1;
	Ltype_of();
	vs_top=sup;
	V130= vs_base[0];
	{object V131 = (*(LnkLI86))(V130);
	VMR32(V131)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEFAULT-STRUCTURE-INSTANCE-P	*/

static object LI35(V133)

object V133;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{object V134;
	base[0]= (V133);
	vs_top=(vs_base=base+0)+1;
	Ltype_of();
	vs_top=sup;
	V134= vs_base[0];
	if(((((V134))==(VV[11])?Ct:Cnil))==Cnil){
	goto T117;}
	{object V135 = Cnil;
	VMR33(V135)}
	goto T117;
T117:;
	{object V136 = (*(LnkLI86))((V134));
	VMR33(V136)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEFAULT-STRUCTURE-TYPE	*/

static object LI36(V138)

object V138;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	base[0]= (V138);
	vs_top=(vs_base=base+0)+1;
	Ltype_of();
	vs_top=sup;
	{object V139 = vs_base[0];
	VMR34(V139)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function STRUCTURE-TYPE-P	*/

static object LI37(V141)

object V141;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	base[0]= (V141);
	base[1]= (VV[70]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V142= vs_base[0];
	{object V143 = ((((V142)==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR35(V143)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function STRUCTURE-TYPE-INCLUDED-TYPE-NAME	*/

static object LI38(V145)

object V145;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	base[0]= (V145);
	base[1]= (VV[70]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V146= vs_base[0];
	{object V147 = CMPcar(V146);
	VMR36(V147)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function STRUCTURE-TYPE-SLOT-DESCRIPTION-LIST	*/

static object LI39(V149)

object V149;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	base[0]= (V149);
	base[1]= (VV[70]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V150= vs_base[0];
	{object V151 = CMPcdr(V150);
	VMR37(V151)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function STRUCTURE-SLOTD-NAME	*/

static object LI40(V153)

object V153;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	{object V154 = CMPcar((V153));
	VMR38(V154)}
	return Cnil;
}
/*	local entry for function STRUCTURE-SLOTD-ACCESSOR-SYMBOL	*/

static object LI41(V156)

object V156;
{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	{object V157 = CMPcadr((V156));
	VMR39(V157)}
	return Cnil;
}
/*	local entry for function STRUCTURE-SLOTD-WRITER-FUNCTION	*/

static object LI42(V159)

object V159;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{object V160 = CMPcaddr((V159));
	VMR40(V160)}
	return Cnil;
}
/*	local entry for function STRUCTURE-SLOTD-TYPE	*/

static object LI43(V162)

object V162;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V163 = CMPcadddr((V162));
	VMR41(V163)}
	return Cnil;
}
/*	function definition for STRUCTURE-SLOTD-INIT-FORM	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	{object V164;
	check_arg(1);
	V164=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V164);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk87)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC46(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{object V165;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V165=(base[0]);
	vs_top=sup;
	if(((base0[0]->c.c_car))==Cnil){
	goto T131;}
	base[1]= (base0[0]->c.c_car);
	{object V166;
	V166= (V165);
	 vs_top=base+2;
	 while(V166!=Cnil)
	 {vs_push((V166)->c.c_car);V166=(V166)->c.c_cdr;}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	return;
	goto T131;
T131:;
	if(((*(LnkLI81))())==Cnil){
	goto T136;}
	base[1]= (base0[1]->c.c_car);
	{object V167;
	V167= (V165);
	 vs_top=base+2;
	 while(V167!=Cnil)
	 {vs_push((V167)->c.c_car);V167=(V167)->c.c_cdr;}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	return;
	goto T136;
T136:;
	base[1]= Cnil;
	base[2]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk83)();
	vs_top=sup;
	(base0[0]->c.c_car)= vs_base[0];
	base[1]= (base0[0]->c.c_car);
	{object V168;
	V168= (V165);
	 vs_top=base+2;
	 while(V168!=Cnil)
	 {vs_push((V168)->c.c_car);V168=(V168)->c.c_cdr;}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	return;
	}
}
/*	local function CLOSURE	*/

static void LC45(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_check;
	{object V169;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V169=(base[0]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	base[3]= VV[51];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk84)();
	vs_top=sup;
	base[1]= vs_base[0];
	{object V170;
	V170= (V169);
	 vs_top=base+2;
	 while(V170!=Cnil)
	 {vs_push((V170)->c.c_car);V170=(V170)->c.c_cdr;}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	return;
	}
}
static void LnkT87(){ call_or_link(VV[87],(void **)(void *)&Lnk87);} /* FIFTH */
static object  LnkTLI86(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[86],(void **)(void *)&LnkLI86,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-TYPE-P */
static object  LnkTLI85(){return call_proc0(VV[85],(void **)(void *)&LnkLI85);} /* STRUCTURE-FUNCTIONS-EXIST-P */
static void LnkT84(){ call_or_link(VV[84],(void **)(void *)&Lnk84);} /* COERCE */
static void LnkT83(){ call_or_link(VV[83],(void **)(void *)&Lnk83);} /* COMPILE */
static object  LnkTLI82(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[82],(void **)(void *)&LnkLI82,1,first,ap);va_end(ap);return V1;} /* COMPILE-LAMBDA-DEFERRED */
static object  LnkTLI81(){return call_proc0(VV[81],(void **)(void *)&LnkLI81);} /* IN-THE-COMPILER-P */
static object  LnkTLI80(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[80],(void **)(void *)&LnkLI80,1,first,ap);va_end(ap);return V1;} /* COMPILE-LAMBDA-UNCOMPILED */
static void LnkT79(){ call_or_link(VV[79],(void **)(void *)&Lnk79);} /* BREAK */
static object  LnkTLI76(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[76],(void **)(void *)&LnkLI76,2,first,ap);va_end(ap);return V1;} /* PRINTING-RANDOM-THING-INTERNAL */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[75],(void **)(void *)&LnkLI75,1,first,ap);va_end(ap);return V1;} /* EARLY-CLASS-NAME */
static object  LnkTLI74(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[74],(void **)(void *)&LnkLI74,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static object  LnkTLI73(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[73],(void **)(void *)&LnkLI73,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

