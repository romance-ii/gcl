
#include "cmpinclude.h"
#include "clcs_macros.h"
void init_clcs_macros(){do_init(VV);}
/*	function definition for ACCUMULATE-CASES	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	{object V1;
	object V2;
	object V3;
	check_arg(3);
	V1=(base[0]);
	V2=(base[1]);
	V3=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V4;
	register object V5;
	V4= Cnil;
	V5= (V2);
	goto T2;
T2:;
	if(((V5))!=Cnil){
	goto T3;}
	base[3]= nreverse((V4));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T3;
T3:;
	{register object V6;
	V6= caar((V5));
	if(!(type_of((V6))!=t_cons)){
	goto T10;}
	{object V7;
	V7= (((V6))==Cnil?Ct:Cnil);
	if(((V7))==Cnil){
	goto T14;}
	goto T7;
	goto T14;
T14:;
	{register object x= (V6),V8= VV[0];
	while(!endp(V8))
	if(eql(x,V8->c.c_car)){
	goto T18;
	}else V8=V8->c.c_cdr;
	goto T17;}
	goto T18;
T18:;
	{register object x= (V1),V9= VV[1];
	while(!endp(V9))
	if(eql(x,V9->c.c_car)){
	goto T19;
	}else V9=V9->c.c_cdr;}
	base[3]= VV[2];
	base[4]= (V1);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk8)();
	vs_top=sup;
	goto T19;
T19:;
	{object V10;
	V10= make_cons((V6),Cnil);
	V4= make_cons((V10),(V4));
	goto T7;}
	goto T17;
T17:;
	V4= make_cons(V6,(V4));
	goto T7;}
	goto T10;
T10:;
	if(((V3))==Cnil){
	goto T28;}
	V4= make_cons(V6,(V4));
	goto T7;
	goto T28;
T28:;
	{register object V13;
	register object V14;
	V13= (V6);
	V14= car((V13));
	goto T34;
T34:;
	if(!(endp_prop((V13)))){
	goto T35;}
	goto T7;
	goto T35;
T35:;
	{register object V15;
	V15= (V14);
	V4= make_cons((V15),(V4));}
	V13= cdr((V13));
	V14= car((V13));
	goto T34;}}
	goto T7;
T7:;
	V5= cdr((V5));
	goto T2;}
	}
}
/*	function definition for ESCAPE-SPECIAL-CASES-REPLACE	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	{register object V16;
	check_arg(1);
	V16=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V17;
	V17= (V16);
	goto T51;
T51:;
	if(((V17))!=Cnil){
	goto T52;}
	base[1]= (V16);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T52;
T52:;
	{register object V18;
	V18= caar((V17));
	{register object x= (V18),V19= VV[3];
	while(!endp(V19))
	if(eql(x,V19->c.c_car)){
	goto T59;
	}else V19=V19->c.c_cdr;
	goto T56;}
	goto T59;
T59:;
	V20= car((V17));
	V21= make_cons((V18),Cnil);
	if(type_of(/* INLINE-ARGS */V20)!=t_cons)FEwrong_type_argument(Scons,/* INLINE-ARGS */V20);
	(/* INLINE-ARGS */V20)->c.c_car = /* INLINE-ARGS */V21;}
	goto T56;
T56:;
	V17= cdr((V17));
	goto T51;}
	}
}
/*	macro definition for ECASE	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(2);
	vs_top=sup;
	{object V22=base[0]->c.c_cdr;
	if(endp(V22))invalid_macro_call();
	base[2]= (V22->c.c_car);
	V22=V22->c.c_cdr;
	base[3]= V22;}
	{object V23;
	object V24;
	object V25;
	base[4]= VV[4];
	base[5]= base[3];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk72)();
	vs_top=sup;
	V23= vs_base[0];
	base[4]= base[3];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk73)();
	vs_top=sup;
	V24= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V25= vs_base[0];
	V26= list(2,(V25),base[2]);
	V27= make_cons(/* INLINE-ARGS */V26,Cnil);
	V28= list(2,VV[14],make_cons(VV[15],(V23)));
	V29= list(2,VV[7],list(10,VV[8],VV[9],VV[10],VV[11],VV[12],(V25),VV[13],/* INLINE-ARGS */V28,VV[16],list(2,VV[14],(V23))));
	V30= make_cons(/* INLINE-ARGS */V29,Cnil);
	base[4]= list(3,VV[5],/* INLINE-ARGS */V27,listA(3,VV[6],(V25),append((V24),/* INLINE-ARGS */V30)));
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
	{object V31=base[0]->c.c_cdr;
	if(endp(V31))invalid_macro_call();
	base[2]= (V31->c.c_car);
	V31=V31->c.c_cdr;
	base[3]= V31;}
	{object V32;
	object V33;
	object V34;
	object V35;
	base[4]= VV[17];
	base[5]= base[3];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk72)();
	vs_top=sup;
	V32= vs_base[0];
	base[4]= base[3];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk73)();
	vs_top=sup;
	V33= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V34= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V35= vs_base[0];
	V36= list(2,VV[14],make_cons(VV[15],(V32)));
	V37= list(10,VV[8],VV[22],VV[10],VV[23],VV[12],base[2],VV[13],/* INLINE-ARGS */V36,VV[16],list(2,VV[14],(V32)));
	V38= list(3,VV[27],VV[28],list(4,VV[29],VV[30],VV[31],list(2,VV[14],base[2])));
	V39= list(3,VV[34],base[2],VV[35]);
	V40= list(2,VV[7],list(3,VV[21],/* INLINE-ARGS */V37,list(8,VV[24],VV[25],VV[26],/* INLINE-ARGS */V38,VV[32],VV[33],/* INLINE-ARGS */V39,list(2,VV[36],(V35)))));
	V41= make_cons(/* INLINE-ARGS */V40,Cnil);
	base[4]= list(3,VV[18],(V34),list(3,VV[19],(V35),list(3,VV[20],(V34),listA(3,VV[6],base[2],append((V33),/* INLINE-ARGS */V41)))));
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
	{object V42=base[0]->c.c_cdr;
	if(endp(V42))invalid_macro_call();
	base[2]= (V42->c.c_car);
	V42=V42->c.c_cdr;
	base[3]= V42;}
	{object V43;
	object V44;
	base[4]= VV[37];
	base[5]= base[3];
	base[6]= Ct;
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk72)();
	vs_top=sup;
	V43= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V44= vs_base[0];
	V45= list(2,(V44),base[2]);
	V46= make_cons(/* INLINE-ARGS */V45,Cnil);
	V47= list(2,VV[14],make_cons(VV[41],(V43)));
	V48= list(2,VV[7],list(10,VV[8],VV[39],VV[10],VV[40],VV[12],(V44),VV[13],/* INLINE-ARGS */V47,VV[16],list(2,VV[14],(V43))));
	V49= make_cons(/* INLINE-ARGS */V48,Cnil);
	base[4]= list(3,VV[5],/* INLINE-ARGS */V46,listA(3,VV[38],(V44),append(base[3],/* INLINE-ARGS */V49)));
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
	{object V50=base[0]->c.c_cdr;
	if(endp(V50))invalid_macro_call();
	base[2]= (V50->c.c_car);
	V50=V50->c.c_cdr;
	base[3]= V50;}
	{object V51;
	object V52;
	object V53;
	base[4]= VV[42];
	base[5]= base[3];
	base[6]= Ct;
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk72)();
	vs_top=sup;
	V51= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V52= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V53= vs_base[0];
	V54= list(2,VV[14],make_cons(VV[41],(V51)));
	V55= list(10,VV[8],VV[43],VV[10],VV[44],VV[12],base[2],VV[13],/* INLINE-ARGS */V54,VV[16],list(2,VV[14],(V51)));
	V56= list(3,VV[27],VV[46],list(4,VV[29],VV[30],VV[47],list(2,VV[14],base[2])));
	V57= list(3,VV[34],base[2],VV[35]);
	V58= list(2,VV[7],list(3,VV[21],/* INLINE-ARGS */V55,list(8,VV[24],VV[45],VV[26],/* INLINE-ARGS */V56,VV[32],VV[33],/* INLINE-ARGS */V57,list(2,VV[36],(V53)))));
	V59= make_cons(/* INLINE-ARGS */V58,Cnil);
	base[4]= list(3,VV[18],(V52),list(3,VV[19],(V53),list(3,VV[20],(V52),listA(3,VV[38],base[2],append(base[3],/* INLINE-ARGS */V59)))));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	function definition for ASSERT-REPORT	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	{object V60;
	object V61;
	check_arg(2);
	V60=(base[0]);
	V61=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V61);
	base[3]= VV[48];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	if(((V60))==Cnil){
	goto T93;}
	base[2]= (V61);
	base[3]= VV[49];
	base[4]= make_fixnum((long)length((V60)));
	base[5]= (V60);
	vs_top=(vs_base=base+2)+4;
	Lformat();
	return;
	goto T93;
T93:;
	base[2]= (V61);
	base[3]= VV[50];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	return;
	}
}
/*	function definition for ASSERT-PROMPT	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{object V62;
	object V63;
	check_arg(2);
	V62=(base[0]);
	V63=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= VV[51];
	base[3]= (V62);
	base[4]= (V63);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk74)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T102;}
	base[2]= symbol_value(VV[52]);
	base[3]= VV[53];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	if(!(type_of((V62))==t_symbol)){
	goto T111;}
	{object symbols,values;
	bds_ptr V64=bds_top;
	base[2]= make_cons((V62),Cnil);
	symbols= base[2];
	base[3]= make_cons((V63),Cnil);
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
	bds_unwind(V64);
	return;}
	goto T111;
T111:;
	vs_base=vs_top;
	L9(base);
	return;
	goto T102;
T102:;
	base[2]= (V63);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for SIMPLE-ASSERTION-FAILURE	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{object V65;
	check_arg(1);
	V65=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[54];
	base[2]= VV[12];
	base[3]= (V65);
	base[4]= VV[13];
	base[5]= Cnil;
	base[6]= VV[55];
	base[7]= VV[56];
	base[8]= VV[57];
	base[9]= make_cons((V65),Cnil);
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
	{object V66=base[0]->c.c_cdr;
	if(endp(V66))invalid_macro_call();
	base[2]= (V66->c.c_car);
	V66=V66->c.c_cdr;
	if(endp(V66)){
	base[3]= Cnil;
	} else {
	base[3]= (V66->c.c_car);
	V66=V66->c.c_cdr;}
	if(endp(V66)){
	base[4]= Cnil;
	} else {
	base[4]= (V66->c.c_car);
	V66=V66->c.c_cdr;}
	base[5]= V66;}
	{object V67;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V67= vs_base[0];
	if((base[4])==Cnil){
	goto T129;}
	V68= listA(3,VV[8],base[4],base[5]);
	goto T127;
	goto T129;
T129:;
	V68= list(2,VV[59],list(2,VV[14],base[2]));
	goto T127;
T127:;
	V69= list(3,VV[27],VV[61],list(3,VV[62],list(2,VV[14],base[3]),VV[30]));
	{object V71;
	object V72= base[3];
	if(endp(V72)){
	V70= Cnil;
	goto T131;}
	base[6]=V71=MMcons(Cnil,Cnil);
	goto T132;
T132:;
	(V71->c.c_car)= list(3,VV[34],(V72->c.c_car),list(3,VV[63],list(2,VV[14],(V72->c.c_car)),(V72->c.c_car)));
	V72=MMcdr(V72);
	if(endp(V72)){
	V70= base[6];
	goto T131;}
	V71=MMcdr(V71)=MMcons(Cnil,Cnil);
	goto T132;}
	goto T131;
T131:;
	V74= list(2,VV[36],(V67));
	V75= make_cons(/* INLINE-ARGS */V74,Cnil);
	base[6]= list(3,VV[19],(V67),list(3,VV[58],base[2],list(3,VV[21],V68,listA(5,VV[60],Cnil,VV[26],/* INLINE-ARGS */V69,append(V70,/* INLINE-ARGS */V75)))));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	function definition for READ-EVALUATED-FORM	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	check_arg(0);
	vs_top=sup;
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
	V76= vs_base[0];
	base[0]= make_cons(V76,Cnil);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	macro definition for CHECK-TYPE	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	check_arg(2);
	vs_top=sup;
	{object V77=base[0]->c.c_cdr;
	if(endp(V77))invalid_macro_call();
	base[2]= (V77->c.c_car);
	V77=V77->c.c_cdr;
	if(endp(V77))invalid_macro_call();
	base[3]= (V77->c.c_car);
	V77=V77->c.c_cdr;
	if(endp(V77)){
	base[4]= Cnil;
	} else {
	base[4]= (V77->c.c_car);
	V77=V77->c.c_cdr;}
	if(!endp(V77))invalid_macro_call();}
	{object V78;
	object V79;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V78= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V79= vs_base[0];
	V80= list(3,VV[66],base[2],list(2,VV[14],base[3]));
	V81= list(3,VV[65],/* INLINE-ARGS */V80,list(3,VV[20],(V78),Cnil));
	if((base[4])==Cnil){
	goto T145;}
	V82= list(5,VV[8],VV[67],list(2,VV[14],base[2]),base[2],base[4]);
	goto T143;
	goto T145;
T145:;
	V83= list(2,VV[14],base[2]);
	V82= list(5,VV[8],VV[68],/* INLINE-ARGS */V83,base[2],list(2,VV[14],base[3]));
	goto T143;
T143:;
	V84= list(3,VV[27],VV[70],list(4,VV[29],VV[30],VV[71],list(2,VV[14],base[2])));
	V85= list(3,VV[34],base[2],VV[35]);
	base[5]= list(3,VV[18],(V78),list(4,VV[19],(V79),/* INLINE-ARGS */V81,list(3,VV[21],V82,list(8,VV[24],VV[69],VV[26],/* INLINE-ARGS */V84,VV[32],VV[33],/* INLINE-ARGS */V85,list(2,VV[36],(V79))))));
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
static void LnkT74(){ call_or_link(VV[74],(void **)&Lnk74);} /* Y-OR-N-P */
static void LnkT73(){ call_or_link(VV[73],(void **)&Lnk73);} /* ESCAPE-SPECIAL-CASES-REPLACE */
static void LnkT72(){ call_or_link(VV[72],(void **)&Lnk72);} /* ACCUMULATE-CASES */
static void LnkT8(){ call_or_link(VV[8],(void **)&Lnk8);} /* ERROR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

