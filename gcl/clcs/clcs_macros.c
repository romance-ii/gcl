
#include "cmpinclude.h"
#include "clcs_macros.h"
void init_clcs_macros(){do_init(VV);}
/*	local entry for function ACCUMULATE-CASES	*/

static object LI1(V4,V5,V6)

object V4;object V5;object V6;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	{register object V7;
	register object V8;
	V7= Cnil;
	V8= (V5);
	goto T2;
T2:;
	if(((V8))!=Cnil){
	goto T3;}
	{object V9 = nreverse((V7));
	VMR1(V9)}
	goto T3;
T3:;
	{register object V10;
	V10= caar((V8));
	if(!(type_of((V10))!=t_cons)){
	goto T10;}
	{object V11;
	V11= (((V10))==Cnil?Ct:Cnil);
	if(((V11))==Cnil){
	goto T14;}
	goto T7;
	goto T14;
T14:;
	{register object x= (V10),V12= VV[0];
	while(!endp(V12))
	if(eql(x,V12->c.c_car)){
	goto T18;
	}else V12=V12->c.c_cdr;
	goto T17;}
	goto T18;
T18:;
	{register object x= (V4),V13= VV[1];
	while(!endp(V13))
	if(eql(x,V13->c.c_car)){
	goto T19;
	}else V13=V13->c.c_cdr;}
	base[0]= VV[2];
	base[1]= (V4);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk8)();
	vs_top=sup;
	goto T19;
T19:;
	{object V14;
	V14= make_cons((V10),Cnil);
	V7= make_cons((V14),(V7));
	goto T7;}
	goto T17;
T17:;
	V7= make_cons(V10,(V7));
	goto T7;}
	goto T10;
T10:;
	if(((V6))==Cnil){
	goto T28;}
	V7= make_cons(V10,(V7));
	goto T7;
	goto T28;
T28:;
	{register object V17;
	register object V18;
	V17= (V10);
	V18= car((V17));
	goto T34;
T34:;
	if(!(endp_prop((V17)))){
	goto T35;}
	goto T7;
	goto T35;
T35:;
	{register object V19;
	V19= (V18);
	V7= make_cons((V19),(V7));}
	V17= cdr((V17));
	V18= car((V17));
	goto T34;}}
	goto T7;
T7:;
	V8= cdr((V8));
	goto T2;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ESCAPE-SPECIAL-CASES-REPLACE	*/

static object LI2(V21)

register object V21;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{register object V22;
	V22= (V21);
	goto T51;
T51:;
	if(((V22))!=Cnil){
	goto T52;}
	{object V23 = (V21);
	VMR2(V23)}
	goto T52;
T52:;
	{register object V24;
	V24= caar((V22));
	{register object x= (V24),V25= VV[3];
	while(!endp(V25))
	if(eql(x,V25->c.c_car)){
	goto T59;
	}else V25=V25->c.c_cdr;
	goto T56;}
	goto T59;
T59:;
	V26= car((V22));
	V27= make_cons((V24),Cnil);
	if(type_of(/* INLINE-ARGS */V26)!=t_cons)FEwrong_type_argument(Scons,/* INLINE-ARGS */V26);
	(/* INLINE-ARGS */V26)->c.c_car = /* INLINE-ARGS */V27;}
	goto T56;
T56:;
	V22= cdr((V22));
	goto T51;}
	return Cnil;
}
/*	macro definition for ECASE	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(2);
	vs_top=sup;
	{object V28=base[0]->c.c_cdr;
	if(endp(V28))invalid_macro_call();
	base[2]= (V28->c.c_car);
	V28=V28->c.c_cdr;
	base[3]= V28;}
	{object V29;
	object V30;
	object V31;
	V29= (*(LnkLI72))(VV[4],base[3],Cnil);
	V30= (*(LnkLI73))(base[3]);
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V31= vs_base[0];
	V32= list(2,(V31),base[2]);
	V33= make_cons(/* INLINE-ARGS */V32,Cnil);
	V34= list(2,VV[14],make_cons(VV[15],(V29)));
	V35= list(2,VV[7],list(10,VV[8],VV[9],VV[10],VV[11],VV[12],(V31),VV[13],/* INLINE-ARGS */V34,VV[16],list(2,VV[14],(V29))));
	V36= make_cons(/* INLINE-ARGS */V35,Cnil);
	base[4]= list(3,VV[5],/* INLINE-ARGS */V33,listA(3,VV[6],(V31),append((V30),/* INLINE-ARGS */V36)));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for CCASE	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	check_arg(2);
	vs_top=sup;
	{object V37=base[0]->c.c_cdr;
	if(endp(V37))invalid_macro_call();
	base[2]= (V37->c.c_car);
	V37=V37->c.c_cdr;
	base[3]= V37;}
	{object V38;
	object V39;
	object V40;
	object V41;
	V38= (*(LnkLI72))(VV[17],base[3],Cnil);
	V39= (*(LnkLI73))(base[3]);
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V40= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V41= vs_base[0];
	V42= list(2,VV[14],make_cons(VV[15],(V38)));
	V43= list(10,VV[8],VV[22],VV[10],VV[23],VV[12],base[2],VV[13],/* INLINE-ARGS */V42,VV[16],list(2,VV[14],(V38)));
	V44= list(3,VV[27],VV[28],list(4,VV[29],VV[30],VV[31],list(2,VV[14],base[2])));
	V45= list(3,VV[34],base[2],VV[35]);
	V46= list(2,VV[7],list(3,VV[21],/* INLINE-ARGS */V43,list(8,VV[24],VV[25],VV[26],/* INLINE-ARGS */V44,VV[32],VV[33],/* INLINE-ARGS */V45,list(2,VV[36],(V41)))));
	V47= make_cons(/* INLINE-ARGS */V46,Cnil);
	base[4]= list(3,VV[18],(V40),list(3,VV[19],(V41),list(3,VV[20],(V40),listA(3,VV[6],base[2],append((V39),/* INLINE-ARGS */V47)))));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for ETYPECASE	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	check_arg(2);
	vs_top=sup;
	{object V48=base[0]->c.c_cdr;
	if(endp(V48))invalid_macro_call();
	base[2]= (V48->c.c_car);
	V48=V48->c.c_cdr;
	base[3]= V48;}
	{object V49;
	object V50;
	V49= (*(LnkLI72))(VV[37],base[3],Ct);
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V50= vs_base[0];
	V51= list(2,(V50),base[2]);
	V52= make_cons(/* INLINE-ARGS */V51,Cnil);
	V53= list(2,VV[14],make_cons(VV[41],(V49)));
	V54= list(2,VV[7],list(10,VV[8],VV[39],VV[10],VV[40],VV[12],(V50),VV[13],/* INLINE-ARGS */V53,VV[16],list(2,VV[14],(V49))));
	V55= make_cons(/* INLINE-ARGS */V54,Cnil);
	base[4]= list(3,VV[5],/* INLINE-ARGS */V52,listA(3,VV[38],(V50),append(base[3],/* INLINE-ARGS */V55)));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for CTYPECASE	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	check_arg(2);
	vs_top=sup;
	{object V56=base[0]->c.c_cdr;
	if(endp(V56))invalid_macro_call();
	base[2]= (V56->c.c_car);
	V56=V56->c.c_cdr;
	base[3]= V56;}
	{object V57;
	object V58;
	object V59;
	V57= (*(LnkLI72))(VV[42],base[3],Ct);
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V58= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V59= vs_base[0];
	V60= list(2,VV[14],make_cons(VV[41],(V57)));
	V61= list(10,VV[8],VV[43],VV[10],VV[44],VV[12],base[2],VV[13],/* INLINE-ARGS */V60,VV[16],list(2,VV[14],(V57)));
	V62= list(3,VV[27],VV[46],list(4,VV[29],VV[30],VV[47],list(2,VV[14],base[2])));
	V63= list(3,VV[34],base[2],VV[35]);
	V64= list(2,VV[7],list(3,VV[21],/* INLINE-ARGS */V61,list(8,VV[24],VV[45],VV[26],/* INLINE-ARGS */V62,VV[32],VV[33],/* INLINE-ARGS */V63,list(2,VV[36],(V59)))));
	V65= make_cons(/* INLINE-ARGS */V64,Cnil);
	base[4]= list(3,VV[18],(V58),list(3,VV[19],(V59),list(3,VV[20],(V58),listA(3,VV[38],base[2],append(base[3],/* INLINE-ARGS */V65)))));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	local entry for function ASSERT-REPORT	*/

static object LI7(V68,V69)

object V68;object V69;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	base[0]= (V69);
	base[1]= VV[48];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	if(((V68))==Cnil){
	goto T79;}
	base[0]= (V69);
	base[1]= VV[49];
	base[2]= make_fixnum((long)length((V68)));
	base[3]= (V68);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V70 = vs_base[0];
	VMR7(V70)}
	goto T79;
T79:;
	base[0]= (V69);
	base[1]= VV[50];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{object V71 = vs_base[0];
	VMR7(V71)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for ASSERT-PROMPT	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{object V72;
	object V73;
	check_arg(2);
	V72=(base[0]);
	V73=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= VV[51];
	base[3]= (V72);
	base[4]= (V73);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk74)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T88;}
	base[2]= symbol_value(VV[52]);
	base[3]= VV[53];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	if(!(type_of((V72))==t_symbol)){
	goto T97;}
	{object symbols,values;
	bds_ptr V74=bds_top;
	base[2]= make_cons((V72),Cnil);
	symbols= base[2];
	base[3]= make_cons((V73),Cnil);
	values= base[3];
	while(!endp(symbols)){
	if(type_of(MMcar(symbols))!=t_symbol)
	FEinvalid_variable("~s is not a symbol.",MMcar(symbols));
	if(endp(values))bds_bind(MMcar(symbols),OBJNULL);
	else{bds_bind(MMcar(symbols),MMcar(values));
	values=MMcdr(values);}
	symbols=MMcdr(symbols);}
	vs_base=vs_top;
	L9(base);
	bds_unwind(V74);
	return;}
	goto T97;
T97:;
	vs_base=vs_top;
	L9(base);
	return;
	goto T88;
T88:;
	base[2]= (V73);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for SIMPLE-ASSERTION-FAILURE	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{object V75;
	check_arg(1);
	V75=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[54];
	base[2]= VV[12];
	base[3]= (V75);
	base[4]= VV[13];
	base[5]= Cnil;
	base[6]= VV[55];
	base[7]= VV[56];
	base[8]= VV[57];
	base[9]= make_cons((V75),Cnil);
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk8)();
	return;
	}
}
/*	macro definition for ASSERT	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	check_arg(2);
	vs_top=sup;
	{object V76=base[0]->c.c_cdr;
	if(endp(V76))invalid_macro_call();
	base[2]= (V76->c.c_car);
	V76=V76->c.c_cdr;
	if(endp(V76)){
	base[3]= Cnil;
	} else {
	base[3]= (V76->c.c_car);
	V76=V76->c.c_cdr;}
	if(endp(V76)){
	base[4]= Cnil;
	} else {
	base[4]= (V76->c.c_car);
	V76=V76->c.c_cdr;}
	base[5]= V76;}
	{object V77;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V77= vs_base[0];
	if((base[4])==Cnil){
	goto T115;}
	V78= listA(3,VV[8],base[4],base[5]);
	goto T113;
	goto T115;
T115:;
	V78= list(2,VV[59],list(2,VV[14],base[2]));
	goto T113;
T113:;
	V79= list(3,VV[27],VV[61],list(3,VV[62],list(2,VV[14],base[3]),VV[30]));
	{object V81;
	object V82= base[3];
	if(endp(V82)){
	V80= Cnil;
	goto T117;}
	base[6]=V81=MMcons(Cnil,Cnil);
	goto T118;
T118:;
	(V81->c.c_car)= list(3,VV[34],(V82->c.c_car),list(3,VV[63],list(2,VV[14],(V82->c.c_car)),(V82->c.c_car)));
	V82=MMcdr(V82);
	if(endp(V82)){
	V80= base[6];
	goto T117;}
	V81=MMcdr(V81)=MMcons(Cnil,Cnil);
	goto T118;}
	goto T117;
T117:;
	V84= list(2,VV[36],(V77));
	V85= make_cons(/* INLINE-ARGS */V84,Cnil);
	base[6]= list(3,VV[19],(V77),list(3,VV[58],base[2],list(3,VV[21],V78,listA(5,VV[60],Cnil,VV[26],/* INLINE-ARGS */V79,append(V80,/* INLINE-ARGS */V85)))));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	local entry for function READ-EVALUATED-FORM	*/

static object LI12()

{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	base[0]= symbol_value(VV[52]);
	base[1]= VV[64];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	base[1]= symbol_value(VV[52]);
	vs_top=(vs_base=base+1)+1;
	Lread();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V86= vs_base[0];
	{object V87 = make_cons(V86,Cnil);
	VMR11(V87)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for CHECK-TYPE	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	check_arg(2);
	vs_top=sup;
	{object V88=base[0]->c.c_cdr;
	if(endp(V88))invalid_macro_call();
	base[2]= (V88->c.c_car);
	V88=V88->c.c_cdr;
	if(endp(V88))invalid_macro_call();
	base[3]= (V88->c.c_car);
	V88=V88->c.c_cdr;
	if(endp(V88)){
	base[4]= Cnil;
	} else {
	base[4]= (V88->c.c_car);
	V88=V88->c.c_cdr;}
	if(!endp(V88))invalid_macro_call();}
	{object V89;
	object V90;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V89= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V90= vs_base[0];
	V91= list(3,VV[66],base[2],list(2,VV[14],base[3]));
	V92= list(3,VV[65],/* INLINE-ARGS */V91,list(3,VV[20],(V89),Cnil));
	if((base[4])==Cnil){
	goto T131;}
	V93= list(5,VV[8],VV[67],list(2,VV[14],base[2]),base[2],base[4]);
	goto T129;
	goto T131;
T131:;
	V94= list(2,VV[14],base[2]);
	V93= list(5,VV[8],VV[68],/* INLINE-ARGS */V94,base[2],list(2,VV[14],base[3]));
	goto T129;
T129:;
	V95= list(3,VV[27],VV[70],list(4,VV[29],VV[30],VV[71],list(2,VV[14],base[2])));
	V96= list(3,VV[34],base[2],VV[35]);
	base[5]= list(3,VV[18],(V89),list(4,VV[19],(V90),/* INLINE-ARGS */V92,list(3,VV[21],V93,list(8,VV[24],VV[69],VV[26],/* INLINE-ARGS */V95,VV[32],VV[33],/* INLINE-ARGS */V96,list(2,VV[36],(V90))))));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local function READ-IT	*/

static void L9(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= symbol_value(VV[52]);
	vs_top=(vs_base=base+1)+1;
	Lread();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Leval();
	return;
}
static void LnkT74(){ call_or_link(VV[74],(void **)(void *)&Lnk74);} /* Y-OR-N-P */
static object  LnkTLI73(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[73],(void **)(void *)&LnkLI73,1,first,ap);va_end(ap);return V1;} /* ESCAPE-SPECIAL-CASES-REPLACE */
static object  LnkTLI72(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[72],(void **)(void *)&LnkLI72,3,first,ap);va_end(ap);return V1;} /* ACCUMULATE-CASES */
static void LnkT8(){ call_or_link(VV[8],(void **)(void *)&Lnk8);} /* ERROR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

