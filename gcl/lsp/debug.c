
#include "cmpinclude.h"
#include "debug.h"
void init_debug(){do_init(VV);}
/*	function definition for SHOW-BREAK-VARIABLES	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	{register object V1;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T1;}
	V1=(base[0]);
	vs_top=sup;
	goto T2;
goto T1;
T1:;
	V1= small_fixnum(1);
goto T2;
T2:;
goto T5;
T5:;
	{register object V2;
	register object V3;
	V2= reverse(car(symbol_value(VV[0])));
	V3= car((V2));
goto T11;
T11:;
	if(!(endp_prop((V2)))){
	goto T12;}
	goto T7;
goto T12;
T12:;
	base[3]= symbol_value(VV[1]);
	base[4]= VV[2];
	base[5]= car((V3));
	base[6]= cadr((V3));
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;
	V2= cdr((V2));
	V3= car((V2));
	goto T11;}
goto T7;
T7:;
	V1= number_plus((V1),small_fixnum(-1));
	if(!((fix((V1)))>(0))){
	goto T27;}
	goto T26;
goto T27;
T27:;
	vs_base=vs_top=base+1;
	vs_base[0]=Cnil;
	return;
goto T26;
T26:;
	vs_base=vs_top;
	(void) (*Lnk110)();
	vs_top=sup;
	goto T5;
	}
}
/*	local entry for function SHOW-ENVIRONMENT	*/

static object LI2(V5)

object V5;
{	 VMB2 VMS2 VMV2
goto TTL;
TTL:;
	{object V6;
	base[1]= (V5);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V6= vs_base[0];
	if(!(type_of((V6))==t_cons||((V6))==Cnil)){
	goto T35;}
	{register object V7;
	register object V8;
	base[3]= (V5);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V9= vs_base[0];
	V7= reverse(V9);
	V8= car((V7));
goto T43;
T43:;
	if(!(endp_prop((V7)))){
	goto T44;}
	{object V10 = Cnil;
	VMR2(V10)}
goto T44;
T44:;
	base[2]= symbol_value(VV[1]);
	base[3]= VV[3];
	base[4]= car((V8));
	base[5]= cadr((V8));
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
	V7= cdr((V7));
	V8= car((V7));
	goto T43;}
goto T35;
T35:;
	{object V11 = Cnil;
	VMR2(V11)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SEARCH-STACK	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	{object V12;
	check_arg(1);
	V12=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V13;
	V13= Cnil;
	if(!(type_of((V12))==t_symbol)){
	goto T62;}
	V13= symbol_name((V12));
	goto T60;
goto T62;
T62:;
	V13= (V12);
goto T60;
T60:;
	{register long V14;
	register long V15;
	{object V16;
	vs_base=vs_top;
	(void) (*Lnk113)();
	vs_top=sup;
	V16= vs_base[0];{object V17;
	V17= (type_of((V16))==t_fixnum?Ct:Cnil);
	if(V17==Cnil)goto T67;
	goto T66;
goto T67;
T67:;}
	(void)((*(LnkLI114))());
goto T66;
T66:;
	V14= fix((V16));}
	V15= 2;
	{register object V18;
	V18= Cnil;
	{register object V19;
	V19= Cnil;
goto T71;
T71:;
	if((V14)<=(V15)){
	goto T74;}
	goto T73;
goto T74;
T74:;
	goto T72;
goto T73;
T73:;
	{register object V20;
	base[1]= make_fixnum(V14);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V20= vs_base[0];
	V18= (V20);}
	base[1]= (V18);
	vs_top=(vs_base=base+1)+1;
	Lcompiled_function_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T82;}
	base[1]= (V18);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk116)();
	vs_top=sup;
	V19= vs_base[0];
	goto T80;
goto T82;
T82:;
	if(!(type_of((V18))==t_symbol)){
	goto T88;}
	V19= (V18);
	goto T80;
goto T88;
T88:;
	if(!(type_of((V18))==t_cons||((V18))==Cnil)){
	goto T92;}
	{register object x= car((V18)),V21= VV[4];
	while(!endp(V21))
	if(eql(x,V21->c.c_car)){
	goto T95;
	}else V21=V21->c.c_cdr;
	goto T92;}
goto T95;
T95:;
	V19= cadr((V18));
	goto T80;
goto T92;
T92:;
	V19= VV[5];
goto T80;
T80:;
	V22= symbol_name((V19));
	if(((VFUN_NARGS=4,(*(LnkLI117))((V13),/* INLINE-ARGS */V22,VV[6],VV[7])))==Cnil){
	goto T98;}
	base[1]= make_fixnum(V14);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk118)();
	vs_top=sup;
	princ_char(10,Cnil);
	vs_base=vs_top;
	(void) (*Lnk119)();
	return;
goto T98;
T98:;
	V14= (long)(V14)-(1);
	goto T71;
goto T72;
T72:;
	base[1]= symbol_value(VV[1]);
	base[2]= VV[8];
	base[3]= (V13);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}}}}
	}
}
/*	function definition for BREAK-LOCALS	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	bds_check;
	{object V23;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T111;}
	V23=(base[0]);
	vs_top=sup;
	goto T112;
goto T111;
T111:;
	V23= small_fixnum(1);
goto T112;
T112:;
	{object V24;
	object V25;
	object V26;
	object V27;
	object V28;
	object V29;
	V24= symbol_value(VV[9]);
	base[6]= (V24);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V25= vs_base[0];
	bds_bind(VV[11],symbol_value(VV[10]));
	bds_bind(VV[12],Cnil);
	bds_bind(VV[13],symbol_value(VV[10]));
	V26= symbol_value(VV[9]);
	base[6]= (V24);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V27= vs_base[0];
	V28= Cnil;
	V29= Cnil;
	if(!((fix((V23)))>(1))){
	goto T123;}
	{register long V30;
	long V31;
	V30= 0;{object V32;
	V32= (type_of((V23))==t_fixnum?Ct:Cnil);
	if(V32==Cnil)goto T128;
	goto T127;
goto T128;
T128:;}
	(void)((*(LnkLI114))());
goto T127;
T127:;
	V31= fix((V23));
	{register long V33;
	long V34;{object V35;
	V35= (type_of((V26))==t_fixnum?Ct:Cnil);
	if(V35==Cnil)goto T132;
	goto T131;
goto T132;
T132:;}
	(void)((*(LnkLI114))());
goto T131;
T131:;
	V33= fix((V26));
	V34= 2;
goto T136;
T136:;
	if((V33)<=(V34)){
	goto T139;}
	goto T138;
goto T139;
T139:;
	goto T137;
goto T138;
T138:;
	if((V30)>=(V31)){
	goto T142;}
	goto T141;
goto T142;
T142:;
	goto T137;
goto T141;
T141:;
	bds_bind(VV[9],make_fixnum(V33));
	vs_base=vs_top;
	(void) (*Lnk119)();
	vs_top=sup;
	princ_char(10,Cnil);
	princ_char(10,Cnil);
	bds_unwind1;
	V30= (long)(V30)+(1);
	V33= (long)(V33)-(1);
	goto T136;
goto T137;
T137:;
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;}}
goto T123;
T123:;
	base[6]= (V27);
	vs_top=(vs_base=base+6)+1;
	Lcompiled_function_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T154;}
	base[6]= (V27);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk116)();
	vs_top=sup;
	V28= vs_base[0];
	goto T152;
goto T154;
T154:;
	V28= (V27);
goto T152;
T152:;
	if(!(type_of((V28))==t_symbol)){
	goto T160;}
	V29= get((V28),VV[14],Cnil);
goto T160;
T160:;
	{object V36;
	base[6]= make_fixnum((long)(1)+(fix(symbol_value(VV[9]))));
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V36= vs_base[0];
	if(((V36))==Cnil){
	goto T167;}
	base[6]= symbol_value(VV[1]);
	base[7]= VV[15];
	base[8]= (V28);
	vs_top=(vs_base=base+6)+3;
	Lformat();
	vs_top=sup;
	if(!(type_of((V28))==t_symbol)){
	goto T174;}
	{register long V37;
	long V38;{object V39;
	V39= (type_of((V25))==t_fixnum?Ct:Cnil);
	if(V39==Cnil)goto T178;
	goto T177;
goto T178;
T178:;}
	(void)((*(LnkLI114))());
goto T177;
T177:;
	V37= fix((V25));{object V40;
	V40= (type_of((V36))==t_fixnum?Ct:Cnil);
	if(V40==Cnil)goto T182;
	goto T181;
goto T182;
T182:;}
	(void)((*(LnkLI114))());
goto T181;
T181:;
	V38= fix((V36));
	{register long V41;
	V41= 0;
	{register object V42;
	V42= Cnil;
goto T186;
T186:;
	if((V37)>=(V38)){
	goto T189;}
	goto T188;
goto T189;
T189:;
	goto T187;
goto T188;
T188:;
	V42= Cnil;
	{register object x= small_fixnum(0),V43= (V29);
	while(!endp(V43))
	if(eql(x,V43->c.c_car)){
	goto T196;
	}else V43=V43->c.c_cdr;
	goto T195;}
goto T196;
T196:;
	base[6]= (V29);
	base[7]= make_fixnum(V41);
	vs_top=(vs_base=base+6)+2;
	Lgetf();
	vs_top=sup;
	V42= vs_base[0];
	goto T193;
goto T195;
T195:;
	V42= nth(V41,(V29));
goto T193;
T193:;
	if(((V42))==Cnil){
	goto T203;}
	base[6]= Ct;
	base[7]= VV[16];
	base[8]= make_fixnum(V41);
	base[9]= (V42);
	base[11]= make_fixnum(V37);
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	base[10]= vs_base[0];
	vs_top=(vs_base=base+6)+5;
	Lformat();
	vs_top=sup;
	goto T201;
goto T203;
T203:;
	base[6]= symbol_value(VV[1]);
	base[7]= VV[17];
	base[8]= make_fixnum(V41);
	base[10]= make_fixnum(V37);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	base[9]= vs_base[0];
	vs_top=(vs_base=base+6)+4;
	Lformat();
	vs_top=sup;
goto T201;
T201:;
	V37= (long)(V37)+(1);
	if(!((V41)<(2147483646))){
	goto T219;}
	goto T218;
goto T219;
T219:;
	(void)((*(LnkLI114))());
goto T218;
T218:;
	V41= (long)(V41)+(1);
	goto T186;
goto T187;
T187:;
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;}}}
goto T174;
T174:;
	if(!(type_of((V28))==t_cons||((V28))==Cnil)){
	goto T225;}
	base[6]= (*(LnkLI120))((V24));
	vs_top=(vs_base=base+6)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
goto T225;
T225:;
	base[6]= symbol_value(VV[1]);
	base[7]= VV[19];
	vs_top=(vs_base=base+6)+2;
	Lformat();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
goto T167;
T167:;
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;}}
	}
}
/*	function definition for LOC	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{object V44;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T229;}
	V44=(base[0]);
	vs_top=sup;
	goto T230;
goto T229;
T229:;
	V44= small_fixnum(0);
goto T230;
T230:;
	{object V45;
	base[1]= symbol_value(VV[9]);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V45= vs_base[0];
	if(!((fix((V44)))>=(0))){
	goto T235;}
	vs_base=vs_top;
	(void) (*Lnk113)();
	vs_top=sup;
	V47= vs_base[0];
	V48 = make_fixnum((long)(1)+(fix(symbol_value(VV[9]))));
	base[1]= (number_compare(V47,V48)<=0?(V47):V48);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V46= vs_base[0];
	if((fix((V44)))<((long)(fix(V46))-(fix((V45))))){
	goto T234;}
goto T235;
T235:;
	base[1]= VV[20];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
goto T234;
T234:;
	base[1]= make_fixnum((long)(fix((V44)))+(fix((V45))));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	return;}
	}
}
/*	macro definition for MV-SETQ	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	check_arg(2);
	vs_top=sup;
	{object V49=base[0]->c.c_cdr;
	if(endp(V49))invalid_macro_call();
	base[2]= (V49->c.c_car);
	V49=V49->c.c_cdr;
	if(endp(V49))invalid_macro_call();
	base[3]= (V49->c.c_car);
	V49=V49->c.c_cdr;
	if(!endp(V49))invalid_macro_call();}
	V50= list(3,VV[22],car(base[2]),base[3]);
	{register object V52;
	register object V53;
	register object V54;
	V52= cdr(base[2]);
	V53= small_fixnum(0);
	V54= Cnil;
goto T247;
T247:;
	if(((V52))!=Cnil){
	goto T248;}
	V51= reverse((V54));
	goto T244;
goto T248;
T248:;
	V55= car((V52));
	V56= list(3,VV[22],/* INLINE-ARGS */V55,list(2,VV[23],(V53)));
	V54= make_cons(/* INLINE-ARGS */V56,(V54));
	V52= cdr((V52));
	V53= one_plus((V53));
	goto T247;}
goto T244;
T244:;
	base[4]= listA(3,VV[21],/* INLINE-ARGS */V50,V51);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for MV-VALUES	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	check_arg(2);
	vs_top=sup;
	{object V57=base[0]->c.c_cdr;
	base[2]= V57;}
	V58= car(base[2]);
	{register object V60;
	register object V61;
	register object V62;
	V60= cdr(base[2]);
	V61= small_fixnum(0);
	V62= Cnil;
goto T261;
T261:;
	if(((V60))!=Cnil){
	goto T262;}
	V59= reverse((V62));
	goto T258;
goto T262;
T262:;
	V63= list(3,VV[24],(V61),car((V60)));
	V62= make_cons(/* INLINE-ARGS */V63,(V62));
	V60= cdr((V60));
	V61= one_plus((V61));
	goto T261;}
goto T258;
T258:;
	base[3]= listA(3,VV[21],/* INLINE-ARGS */V58,V59);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for DBL	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	base[0]= Cnil;
	base[1]= Cnil;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk121)();
	return;
}
/*	function definition for MAKE-INSTREAM	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{object V64;
	object V65;
	object V66;
	parse_key(vs_base,FALSE,FALSE,3,VV[27],VV[37],VV[28]);
	vs_top=sup;
	V64=(base[0]);
	if(base[4]==Cnil){
	V65= small_fixnum(0);
	}else{
	V65=(base[1]);}
	V66=(base[2]);
	base[6]= VV[25];
	base[7]= (V64);
	base[8]= (V65);
	base[9]= (V66);
	vs_top=(vs_base=base+6)+4;
	siLmake_structure();
	return;
	}
}
/*	function definition for CLEANUP	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V67;
	register object V68;
	V67= symbol_value(VV[26]);
	V68= car((V67));
goto T282;
T282:;
	if(!(endp_prop((V67)))){
	goto T283;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T283;
T283:;
	base[1]= structure_ref((V68),VV[25],0);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T287;}
	setq(VV[26],(VFUN_NARGS=2,(*(LnkLI123))((V68),symbol_value(VV[26]))));
goto T287;
T287:;
	V67= cdr((V67));
	V68= car((V67));
	goto T282;}
}
/*	function definition for GET-INSTREAM	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	{register object V69;
	check_arg(1);
	V69=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;{object V70;
	{register object V71;
	register object V72;
	V71= symbol_value(VV[26]);
	V72= car((V71));
goto T302;
T302:;
	if(!(endp_prop((V71)))){
	goto T303;}
	V70= Cnil;
	goto T298;
goto T303;
T303:;
	V73= structure_ref((V72),VV[25],0);
	if(!(((V69))==(/* INLINE-ARGS */V73))){
	goto T307;}
	V70= (V72);
	goto T298;
goto T307;
T307:;
	V71= cdr((V71));
	V72= car((V71));
	goto T302;}
goto T298;
T298:;
	if(V70==Cnil)goto T297;
	base[1]= V70;
	vs_top=(vs_base=base+1)+1;
	return;
goto T297;
T297:;}
	base[1]= VV[27];
	base[2]= (V69);
	base[3]= VV[28];
	base[5]= (V69);
	vs_top=(vs_base=base+5)+1;
	Lstreamp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T322;}
	base[5]= (V69);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	base[4]= vs_base[0];
	goto T320;
goto T322;
T322:;
	base[4]= Cnil;
goto T320;
T320:;
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk125)();
	vs_top=sup;
	V74= vs_base[0];
	setq(VV[26],make_cons(V74,symbol_value(VV[26])));
	base[1]= car(symbol_value(VV[26]));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for NEWLINE	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	{object V75;
	object V76;
	check_arg(2);
	V75=(base[0]);
	V76=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V77;
	base[2]= (V75);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk126)();
	vs_top=sup;
	V77= vs_base[0];
	{long V78= fix(structure_ref((V77),VV[25],1));
	V79 = make_fixnum((long)(1)+(/* INLINE-ARGS */V78));
	(void)(structure_set((V77),VV[25],1,V79));}}
	base[2]= Cnil;
	base[3]= (V75);
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	Lpeek_char();
	vs_top=sup;
	V80= vs_base[0];
	if(!(eql(V80,VV[30]))){
	goto T333;}
	setq(VV[29],VV[31]);
	goto T331;
goto T333;
T333:;
	setq(VV[29],Ct);
goto T331;
T331:;
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;
	}
}
/*	function definition for QUOTATION-READER	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	{object V81;
	object V82;
	check_arg(2);
	V81=(base[0]);
	V82=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V83;
	object V84;
	V83= (
	(type_of(symbol_value(VV[32])) == t_sfun ?(*((symbol_value(VV[32]))->sfn.sfn_self)):
	(fcall.fun=(symbol_value(VV[32])),fcall.argd=2,fcalln))((V81),(V82)));
	base[2]= (V81);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk126)();
	vs_top=sup;
	V84= vs_base[0];
	{object V86;
	V87= structure_ref(V84,VV[25],1);
	V88= (VFUN_NARGS=2,(*(LnkLI127))(VV[33],(V83)));
	V86= number_plus(/* INLINE-ARGS */V87,/* INLINE-ARGS */V88);
	(void)(structure_set(V84,VV[25],1,(V86)));}
	base[2]= (V83);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for NEW-SEMI-COLON-READER	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	bds_check;
	{register object V89;
	object V90;
	check_arg(2);
	V89=(base[0]);
	V90=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V91;
	object V92;
	base[2]= (V89);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk126)();
	vs_top=sup;
	V91= vs_base[0];
	base[2]= Cnil;
	base[3]= (V89);
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+2)+4;
	Lpeek_char();
	vs_top=sup;
	V92= vs_base[0];
	{long V93= fix(structure_ref((V91),VV[25],1));
	V94 = make_fixnum((long)(1)+(/* INLINE-ARGS */V93));
	(void)(structure_set((V91),VV[25],1,V94));}
	if(!(eql((V92),VV[34]))){
	goto T354;}
	base[2]= (V89);
	vs_top=(vs_base=base+2)+1;
	Lread_char();
	vs_top=sup;
	{register object V95;
	bds_bind(VV[35],symbol_value(VV[36]));
	base[5]= (V89);
	base[6]= Cnil;
	base[7]= Cnil;
	vs_top=(vs_base=base+5)+3;
	Lread_line();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk128)();
	vs_top=sup;
	V95= vs_base[0];
	if(!(type_of((V95))==t_cons)){
	bds_unwind1;
	goto T352;}
	if(!((car((V95)))==(VV[37]))){
	bds_unwind1;
	goto T352;}
	if(!(type_of(cadr((V95)))==t_string)){
	bds_unwind1;
	goto T352;}
	if(!(type_of(caddr((V95)))==t_fixnum)){
	bds_unwind1;
	goto T352;}
	(void)(structure_set((V91),VV[25],2,cadr((V95))));
	V96= structure_set((V91),VV[25],1,caddr((V95)));
	bds_unwind1;
	goto T352;}
goto T354;
T354:;
	(void)((
	(type_of(symbol_value(VV[38])) == t_sfun ?(*((symbol_value(VV[38]))->sfn.sfn_self)):
	(fcall.fun=(symbol_value(VV[38])),fcall.argd=2,fcalln))((V89),(V90))));
goto T352;
T352:;
	base[2]= Cnil;
	base[3]= (V89);
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	Lpeek_char();
	vs_top=sup;
	V97= vs_base[0];
	if(!(eql(V97,VV[30]))){
	goto T375;}
	setq(VV[29],VV[31]);
	goto T373;
goto T375;
T375:;
	setq(VV[29],Ct);
goto T373;
T373:;
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;}
	}
}
/*	function definition for SETUP-LINEINFO	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	base[0]= VV[33];
	base[1]= symbol_function(VV[129]);
	base[2]= Cnil;
	base[3]= symbol_value(VV[39]);
	vs_top=(vs_base=base+0)+4;
	Lset_macro_character();
	vs_top=sup;
	base[0]= VV[40];
	base[1]= symbol_function(VV[130]);
	base[2]= Cnil;
	base[3]= symbol_value(VV[39]);
	vs_top=(vs_base=base+0)+4;
	Lset_macro_character();
	vs_top=sup;
	base[0]= VV[30];
	base[1]= VV[41];
	base[2]= Cnil;
	base[3]= symbol_value(VV[39]);
	vs_top=(vs_base=base+0)+4;
	Lset_macro_character();
	vs_top=sup;
	base[0]= VV[42];
	base[1]= VV[43];
	base[2]= Cnil;
	base[3]= symbol_value(VV[39]);
	vs_top=(vs_base=base+0)+4;
	Lset_macro_character();
	return;
}
/*	function definition for NLOAD	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	bds_check;
	{object V98;
	object V99;
	if(vs_top-vs_base<1) too_few_arguments();
	V98=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V99=(base[1]);
	vs_top=sup;
	base[2]= symbol_value(VV[44]);
	vs_top=(vs_base=base+2)+1;
	Lclrhash();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk131)();
	vs_top=sup;
	base[2]= (V98);
	vs_top=(vs_base=base+2)+1;
	Ltruename();
	vs_top=sup;
	V98= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk132)();
	vs_top=sup;
	bds_bind(VV[35],symbol_value(VV[39]));
	base[3]=symbol_function(VV[133]);
	base[4]= (V98);
	{object V100;
	V100= (V99);
	 vs_top=base+5;
	 while(!endp(V100))
	 {vs_push(car(V100));V100=cdr(V100);}
	vs_base=base+4;}
	(void) (*Lnk133)();
	bds_unwind1;
	return;
	}
}
/*	function definition for LEFT-PARENTHESIS-READER	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{object V101;
	object V102;
	check_arg(2);
	V101=(base[0]);
	V102=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V103;
	register object V104;
	V103= Cnil;
	V104= symbol_value(VV[29]);
	if(!((symbol_value(VV[29]))==(Ct))){
	goto T411;}
	setq(VV[29],Cnil);
goto T411;
T411:;
	if(((V104))==Cnil){
	goto T415;}
	base[2]= (V101);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk126)();
	vs_top=sup;
	V104= vs_base[0];
	V103= structure_ref((V104),VV[25],1);
goto T415;
T415:;
	{object V105;
	V105= (
	(type_of(symbol_value(VV[45])) == t_sfun ?(*((symbol_value(VV[45]))->sfn.sfn_self)):
	(fcall.fun=(symbol_value(VV[45])),fcall.argd=2,fcalln))((V101),(V102)));
	if(((V104))==Cnil){
	goto T423;}
	{object V107;
	object V108;
	V107= symbol_value(VV[44]);
	base[3]= (V104);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk134)();
	vs_top=sup;
	V109= vs_base[0];
	V108= make_cons(V109,(V103));
	base[3]= V105;
	base[4]= (V107);
	base[5]= (V108);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
goto T423;
T423:;
	base[2]= (V105);
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	function definition for WALK-THROUGH	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{register object V110;
	check_arg(1);
	V110=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V111;
	V111= Cnil;
goto T435;
T435:;
	if(!(type_of((V110))==t_cons)){
	goto T436;}
	base[1]= (V110);
	base[2]= symbol_value(VV[44]);
	vs_top=(vs_base=base+1)+2;
	Lgethash();
	vs_top=sup;
	V111= vs_base[0];
	if(((V111))==Cnil){
	goto T439;}
	if(!(type_of(car((V110)))==t_cons)){
	goto T446;}
	if((caar((V110)))==(VV[46])){
	goto T446;}
	base[1]= (V110);
	base[2]= symbol_value(VV[44]);
	vs_top=(vs_base=base+1)+2;
	Lremhash();
	vs_top=sup;
	{register object V112;
	register object V113;
	register object V114;
	V112= car((V110));
	V113= symbol_value(VV[44]);
	V114= (V111);
	base[2]= (V112);
	base[3]= (V113);
	base[4]= (V114);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	vs_top=sup;
	goto T439;}
goto T446;
T446:;
	V115= make_cons((V111),(V110));
	(void)((VFUN_NARGS=2,(*(LnkLI135))(/* INLINE-ARGS */V115,symbol_value(VV[47]))));
goto T439;
T439:;
	base[1]= car((V110));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk136)();
	vs_top=sup;
	V110= cdr((V110));
	goto T435;
goto T436;
T436:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for COMPILER-DEF-HOOK	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{object V116;
	object V117;
	check_arg(2);
	V116=(base[0]);
	V117=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V118;
	register long V119;
	long V120;
	V118= symbol_value(VV[47]);
	V119= 2147483647;
	V120= -1;
	if(!(type_of((V117))!=t_cons)){
	goto T467;}
	base[2]= remprop((V116),VV[49]);
	vs_top=(vs_base=base+2)+1;
	return;
goto T467;
T467:;
	if(!((symbol_value(VV[35]))==(symbol_value(VV[39])))){
	goto T470;}
	base[2]= symbol_value(VV[47]);
	base[3]= small_fixnum(0);
	vs_top=(vs_base=base+2)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[2]= (V117);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk136)();
	vs_top=sup;
	{object V121;
	register long V122;
	V121= make_fixnum((long)length((V118)));
	V122= 0;
goto T481;
T481:;
	V123 = make_fixnum(V122);
	if(!(number_compare(V123,(V121))>=0)){
	goto T482;}
	goto T477;
goto T482;
T482:;
	{register long V124;
	V125= aref1((V118),V122);
	V124= fix(cdar(/* INLINE-ARGS */V125));
	if(!((V124)>(V120))){
	goto T488;}
	V120= V124;
goto T488;
T488:;
	if(!((V124)<(V119))){
	goto T486;}
	V119= V124;}
goto T486;
T486:;
	V122= (long)(V122)+1;
	goto T481;}
goto T477;
T477:;
	if(!(((long)length(symbol_value(VV[47])))>(0))){
	goto T499;}
	{object V126;
	object V127;
	V128 = make_fixnum((long)((long)(V120)-(V119))+(2));
	V126= (VFUN_NARGS=3,(*(LnkLI137))(V128,VV[50],VV[51]));
	V127= get((V116),VV[49],Cnil);
	V129= aref1((V118),0);
	V130= caar(/* INLINE-ARGS */V129);
	V131 = make_fixnum(V119);
	V132= make_cons(/* INLINE-ARGS */V130,V131);
	(void)(aset1((V126),0,/* INLINE-ARGS */V132));
	V119= (long)(V119)-(1);
	{object V133;
	register object V134;
	V133= make_fixnum((long)length((V118)));
	V134= small_fixnum(0);
goto T510;
T510:;
	if(!(number_compare((V134),(V133))>=0)){
	goto T511;}
	goto T506;
goto T511;
T511:;
	{object V135;
	V135= aref1((V118),fixint((V134)));
	(void)(aset1((V126),(long)(fix(cdar((V135))))-(V119),cdr((V135))));}
	V134= one_plus((V134));
	goto T510;}
goto T506;
T506:;
	(void)(sputprop((V116),VV[49],(V126)));
	if(((V127))==Cnil){
	goto T522;}
	{object V136;
	object V137;
	V136= get((V116),VV[52],Cnil);
	V138= aref1((V127),0);
	V137= cdr(/* INLINE-ARGS */V138);
	{register object V139;
	object V140;
	V139= (V136);
	V140= car((V139));
goto T529;
T529:;
	if(!(endp_prop((V139)))){
	goto T530;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
goto T530;
T530:;
	{object V141;
	object V142;
	object V143;
	V141= aref1(symbol_value(VV[53]),fixint((V140)));
	{object V144= cdr(cdr(cdr((V141))));
	if((type_of(V144)!=t_cons) && ((V141)!= Cnil))
	 FEwrong_type_argument(Scons,V144);
	V142= (V144->c.c_car);}
	{object V146= cdr(cdr((V141)));
	if((type_of(V146)!=t_cons) && ((V141)!= Cnil))
	 FEwrong_type_argument(Scons,V146);
	V145= fix((V146->c.c_car));}
	V143= make_fixnum((long)(V145)-(fix((V137))));{object V147;
	V147= symbol_value(VV[53]);
	base[6]= (V142);
	base[7]= (V126);
	base[8]= (V143);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk138)();
	vs_top=sup;
	V148= vs_base[0];
	(void)(aset1(V147,fixint((V140)),V148));}}
	V139= cdr((V139));
	V140= car((V139));
	goto T529;}}
goto T522;
T522:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
goto T499;
T499:;
	{object V149;
	V149= get((V116),VV[52],Cnil);
	base[2]= (V149);
	base[3]= VV[54];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk139)();
	return;}
goto T470;
T470:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for INSTREAM-NAME	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{object V150;
	check_arg(1);
	V150=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;{object V151;
	V151= structure_ref((V150),VV[25],2);
	if(V151==Cnil)goto T551;
	base[1]= V151;
	vs_top=(vs_base=base+1)+1;
	return;
goto T551;
T551:;}
	base[1]= structure_ref((V150),VV[25],0);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk124)();
	return;
	}
}
static object stream_name(str) object str;{
     if (str->sm.sm_object1 != 0 && type_of(str->sm.sm_object1)==t_string)
    return str->sm.sm_object1; else return Cnil; }
/*	function definition for STREAM-NAME	*/

static void L21()
{	object *old_base=vs_base;
	object x;
	check_arg(1);
	x=
	stream_name(
	vs_base[0]);
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=x;
}
static object closedp(str) object str;{return (str->sm.sm_fp==0 ? Ct :Cnil); }
/*	function definition for CLOSEDP	*/

static void L22()
{	object *old_base=vs_base;
	object x;
	check_arg(1);
	x=
	closedp(
	vs_base[0]);
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=x;
}
/*	function definition for FIND-LINE-IN-FUN	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{object V152;
	object V153;
	register object V154;
	register object V155;
	check_arg(4);
	V152=(base[0]);
	V153=(base[1]);
	V154=(base[2]);
	V155=(base[3]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V156;
	V156= Cnil;
	V156= get((V154),VV[49],Cnil);
	if(((V156))==Cnil){
	goto T558;}
	{register object V157;
	V157= (V156);
	if(((V157))==Cnil){
	goto T561;}
	{object V158;
	register object V159;
	V158= make_fixnum((long)length((V157)));
	V159= small_fixnum(0);
goto T566;
T566:;
	if(!(number_compare((V159),(V158))>=0)){
	goto T567;}
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;
goto T567;
T567:;
	V160= aref1((V157),fixint((V159)));
	if(!(((V152))==(/* INLINE-ARGS */V160))){
	goto T571;}
	if(((V155))==Cnil){
	goto T574;}
	{register object V161;
	register object V162;
	V161= (V155);
	V162= number_minus(car((V161)),small_fixnum(1));
	if(type_of((V161))!=t_cons)FEwrong_type_argument(Scons,(V161));
	((V161))->c.c_car = (V162);}
	if(!((fix(car((V155))))>(0))){
	goto T574;}
	base[5]= VV[55];
	vs_top=(vs_base=base+5)+1;
	return;
goto T574;
T574:;
	base[6]= (V154);
	base[7]= (V157);
	base[8]= (V159);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk138)();
	vs_top=sup;
	setq(VV[56],vs_base[0]);
	base[5]= symbol_value(VV[56]);
	base[6]= (V153);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	base[5]= VV[55];
	vs_top=(vs_base=base+5)+1;
	return;
goto T571;
T571:;
	V159= one_plus((V159));
	goto T566;}
goto T561;
T561:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
goto T558;
T558:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	function definition for CURRENT-STEP-FUN	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	{object V163;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T593;}
	V163=(base[0]);
	vs_top=sup;
	goto T594;
goto T593;
T593:;
	vs_base=vs_top;
	(void) (*Lnk113)();
	vs_top=sup;
	V163= vs_base[0];
goto T594;
T594:;
	{register object V164;
	V164= one_minus((V163));
goto T598;
T598:;
	if(!((fix((V164)))<=(0))){
	goto T599;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T599;
T599:;
	{register object V165;
	base[1]= (V164);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk140)();
	vs_top=sup;
	V165= vs_base[0];
	if((get((V165),VV[49],Cnil))==Cnil){
	goto T603;}
	base[1]= (V165);
	vs_top=(vs_base=base+1)+1;
	return;}
goto T603;
T603:;
	V164= make_fixnum((long)(fix((V164)))-(1));
	goto T598;}
	}
}
/*	function definition for INIT-BREAK-POINTS	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	base[0]= symbol_value(VV[57]);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	setq(VV[53],symbol_value(VV[57]));
	base[0]= symbol_value(VV[53]);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for STEP-INTO	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	if(symbol_value(VV[53])!=Cnil){
	goto T615;}
	vs_base=vs_top;
	(void) (*Lnk141)();
	vs_top=sup;
goto T615;
T615:;
	setq(VV[58],VV[59]);
	base[0]= VV[60];
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for STEP-NEXT	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	{object V166;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T618;}
	V166=(base[0]);
	vs_top=sup;
	goto T619;
goto T618;
T618:;
	V166= small_fixnum(1);
goto T619;
T619:;
	{object V167;
	vs_base=vs_top;
	(void) (*Lnk142)();
	vs_top=sup;
	V167= vs_base[0];
	setq(VV[61],make_cons((V166),(V167)));
	if(symbol_value(VV[53])!=Cnil){
	goto T624;}
	vs_base=vs_top;
	(void) (*Lnk141)();
	vs_top=sup;
goto T624;
T624:;
	setq(VV[58],VV[62]);
	base[1]= VV[60];
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for MAYBE-BREAK	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	{object V168;
	object V169;
	object V170;
	object V171;
	check_arg(4);
	V168=(base[0]);
	V169=(base[1]);
	V170=(base[2]);
	V171=(base[3]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V172;
	V172= Cnil;
	V172= (VFUN_NARGS=2,(*(LnkLI143))((V168),(V169)));
	if(((V172))==Cnil){
	goto T629;}
	setq(VV[58],Cnil);
	if(!(((long)length(symbol_value(VV[53])))>(0))){
	goto T635;}
	goto T634;
goto T635;
T635:;
	setq(VV[53],Cnil);
goto T634;
T634:;
	base[5]= (V170);
	base[6]= (V169);
	base[7]= (V172);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk138)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V171);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	base[4]= Ct;
	vs_top=(vs_base=base+4)+1;
	return;
goto T629;
T629:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	function definition for BREAK-STEP-INTO	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	{object V173;
	object V174;
	check_arg(2);
	V173=(base[0]);
	V174=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V175;
	vs_base=vs_top;
	(void) (*Lnk142)();
	vs_top=sup;
	V175= vs_base[0];
	{object V176;
	V176= get((V175),VV[49],Cnil);
	base[2]= (V173);
	base[3]= (V176);
	base[4]= (V175);
	base[5]= (V174);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk144)();
	return;}}
	}
}
/*	function definition for BREAK-STEP-NEXT	*/

static void L30()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_reserve(VM28);
	{object V177;
	object V178;
	check_arg(2);
	V177=(base[0]);
	V178=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V179;
	vs_base=vs_top;
	(void) (*Lnk142)();
	vs_top=sup;
	V179= vs_base[0];
	if(!(eql(cdr(symbol_value(VV[61])),(V179)))){
	goto T652;}
	{object V180;
	V180= get((V179),VV[49],Cnil);
	base[2]= (V177);
	base[3]= (V180);
	base[4]= (V179);
	base[5]= (V178);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk144)();
	return;}
goto T652;
T652:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for *BREAK-POINTS*	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_reserve(VM29);
	{object V181;
	object V182;
	check_arg(2);
	V181=(base[0]);
	V182=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V183;
	V183= (VFUN_NARGS=4,(*(LnkLI143))((V181),symbol_value(VV[53]),VV[63],VV[64]));
	base[2]= Ct;
	base[3]= VV[65];
	base[4]= (V183);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[2]= aref1(symbol_value(VV[53]),fixint((V183)));
	base[3]= (V182);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk121)();
	return;}
	}
}
/*	function definition for DWIM	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_reserve(VM30);
	{register object V184;
	check_arg(1);
	V184=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V185;
	register object V186;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V185= vs_base[0];
	V186= car((V185));
goto T670;
T670:;
	if(!(endp_prop((V185)))){
	goto T671;}
	goto T666;
goto T671;
T671:;
	{register object V187;
	register object V188;
	base[3]= symbol_name((V184));
	base[4]= (V186);
	vs_top=(vs_base=base+3)+2;
	Lintern();
	if(vs_base>=vs_top){vs_top=sup;goto T679;}
	V187= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T680;}
	V188= vs_base[0];
	vs_top=sup;
	goto T681;
goto T679;
T679:;
	V187= Cnil;
goto T680;
T680:;
	V188= Cnil;
goto T681;
T681:;
	if((get((V187),VV[49],Cnil))==Cnil){
	goto T683;}
	base[3]= (V187);
	vs_top=(vs_base=base+3)+1;
	return;
goto T683;
T683:;
	if((V188)!=Cnil){
	goto T675;}
	base[3]= (V187);
	vs_top=(vs_base=base+3)+1;
	Lunintern();
	vs_top=sup;}
goto T675;
T675:;
	V185= cdr((V185));
	V186= car((V185));
	goto T670;}
goto T666;
T666:;
	base[1]= Ct;
	base[2]= VV[66];
	base[3]= (V184);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	function definition for BREAK-FUNCTION	*/

static void L33()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_reserve(VM31);
	{register object V189;
	register object V190;
	object V191;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V189=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T694;}
	V190=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T695;}
	V191=(base[2]);
	vs_top=sup;
	goto T696;
goto T694;
T694:;
	V190= small_fixnum(1);
goto T695;
T695:;
	V191= Cnil;
goto T696;
T696:;
	{object V192;
	V192= Cnil;
	{register object V193;
	V193= get((V189),VV[49],Cnil);
	if(((V193))!=Cnil){
	goto T701;}
	base[3]= (V189);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk145)();
	vs_top=sup;
	V192= vs_base[0];
	if(((V192))==Cnil){
	goto T701;}
	base[3]= (V192);
	base[4]= (V190);
	base[5]= (V191);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk146)();
	return;
goto T701;
T701:;
	if(!(type_of((V193))==t_array||
type_of((V193))==t_vector||
type_of((V193))==t_string||
type_of((V193))==t_bitvector)){
	goto T713;}
	goto T712;
goto T713;
T713:;
	base[3]= Ct;
	base[4]= VV[67];
	base[5]= (V189);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
goto T712;
T712:;
	{object V194;
	V195= aref1((V193),0);
	V194= cdr(/* INLINE-ARGS */V195);
	if(((V191))==Cnil){
	goto T720;}
	V190= make_fixnum((long)(fix((V190)))-(fix((V194))));
goto T720;
T720:;{object V196;
	if((fix((V190)))>=(1)){
	goto T727;}
	V196= Cnil;
	goto T726;
goto T727;
T727:;
	V196= ((fix((V190)))<((long)length((V193)))?Ct:Cnil);
goto T726;
T726:;
	if(V196==Cnil)goto T725;
	goto T724;
goto T725;
T725:;}{object V197;
	base[3]= Ct;
	base[4]= VV[68];
	base[5]= (V189);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	V197= vs_base[0];
	if(V197==Cnil)goto T729;
	goto T724;
goto T729;
T729:;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
goto T724;
T724:;
	if(!(eql((V190),small_fixnum(1)))){
	goto T734;}
	{object V198;
	base[3]= (V189);
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	V198= vs_base[0];
	if(!(type_of((V198))==t_cons)){
	goto T734;}
	if(!((car((V198)))==(VV[69]))){
	goto T734;}
	if((caddr((V198)))==Cnil){
	goto T734;}
	V190= small_fixnum(2);}
goto T734;
T734:;
	{register object V199;
	register object V200;
	V199= make_fixnum((long)((long)length((V193)))-(fix((V190))));
	V200= small_fixnum(0);
goto T750;
T750:;
	if(!(number_compare((V200),(V199))>=0)){
	goto T751;}
	goto T746;
goto T751;
T751:;
	V201= aref1((V193),fixint((V200)));
	if((/* INLINE-ARGS */V201)==(VV[51])){
	goto T755;}
	base[6]= (V189);
	base[7]= (V193);
	base[8]= make_fixnum((long)(fix((V190)))+(fix((V200))));
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk138)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk147)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk148)();
	vs_top=sup;
	vs_base=vs_top=base+4;
	vs_base[0]=Cnil;
	return;
goto T755;
T755:;
	V200= one_plus((V200));
	goto T750;}
goto T746;
T746:;
	base[3]= Ct;
	base[4]= VV[70];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	return;}}}
	}
}
/*	function definition for INSERT-BREAK-POINT	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_reserve(VM32);
	{object V202;
	check_arg(1);
	V202=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V203;
	V203= Cnil;
	if(symbol_value(VV[53])!=Cnil){
	goto T770;}
	vs_base=vs_top;
	(void) (*Lnk141)();
	vs_top=sup;
goto T770;
T770:;{object V204;
	V204= (VFUN_NARGS=2,(*(LnkLI143))(Cnil,symbol_value(VV[53])));
	if(V204==Cnil)goto T773;
	V203= V204;
	goto T772;
goto T773;
T773:;}
	{object V205;
	V205= make_fixnum((long)length(symbol_value(VV[53])));
	(void)((VFUN_NARGS=2,(*(LnkLI135))(Cnil,symbol_value(VV[53]))));
	V203= (V205);}
goto T772;
T772:;
	{object V206;
	{object V207= cdr(cdr(cdr((V202))));
	if((type_of(V207)!=t_cons) && ((V202)!= Cnil))
	 FEwrong_type_argument(Scons,V207);
	V206= (V207->c.c_car);}
	{object V210;
	V211= get(V206,VV[52],Cnil);
	V210= make_cons((V203),V211);
	(void)(sputprop(V206,VV[52],(V210)));}}
	(void)(aset1(symbol_value(VV[53]),fixint((V203)),(V202)));
	base[1]= (V203);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for SHORT-NAME	*/

static void L35()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_reserve(VM33);
	{object V212;
	check_arg(1);
	V212=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V213;
	V213= (VFUN_NARGS=4,(*(LnkLI143))(VV[71],(V212),VV[72],Ct));
	if(((V213))==Cnil){
	goto T784;}
	base[1]= (V212);
	base[2]= make_fixnum((long)(1)+(fix((V213))));
	vs_top=(vs_base=base+1)+2;
	Lsubseq();
	return;
goto T784;
T784:;
	base[1]= (V212);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for SHOW-BREAK-POINT	*/

static void L36()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_reserve(VM34);
	{object V214;
	check_arg(1);
	V214=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V215;
	V215= Cnil;
	{register object V216;
	V216= aref1(symbol_value(VV[53]),fixint((V214)));
	if(((V216))==Cnil){
	goto T791;}
	if(!((car((V216)))==(Cnil))){
	goto T793;}
	V215= Ct;
	V216= cdr((V216));
goto T793;
T793:;
	base[1]= Ct;
	base[2]= VV[73];
	base[3]= (V214);
	base[5]= cadr((V216));
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk149)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= caddr((V216));
	base[6]= (V215);
	vs_top=(vs_base=base+1)+6;
	Lformat();
	vs_top=sup;
	{object V217;
	V217= cadddr((V216));
	base[1]= Ct;
	base[2]= VV[74];
	base[4]= (V217);
	base[5]= caddr((V216));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk150)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V217);
	vs_top=(vs_base=base+1)+4;
	Lformat();
	return;}
goto T791;
T791:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}}
	}
}
/*	function definition for ITERATE-OVER-BKPTS	*/

static void L37()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_reserve(VM35);
	{register object V218;
	register object V219;
	check_arg(2);
	V218=(base[0]);
	V219=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V220;
	register object V221;
	V220= make_fixnum((long)length(symbol_value(VV[53])));
	V221= small_fixnum(0);
goto T817;
T817:;
	if(!(number_compare((V221),(V220))>=0)){
	goto T818;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
goto T818;
T818:;
	{register object x= (V221),V222= (V218);
	while(!endp(V222))
	if(eql(x,V222->c.c_car)){
	goto T823;
	}else V222=V222->c.c_cdr;}
	if(((V218))!=Cnil){
	goto T822;}
goto T823;
T823:;
	{register object V223;
	V223= aref1(symbol_value(VV[53]),fixint((V221)));{object V224;
	V224= symbol_value(VV[53]);
	{object V226= (V219);
	if((V226!= VV[54]))goto T829;
	if(((V223))==Cnil){
	goto T830;}
	{object V228= cdr(cdr(cdr((V223))));
	if((type_of(V228)!=t_cons) && ((V223)!= Cnil))
	 FEwrong_type_argument(Scons,V228);
	V227= (V228->c.c_car);}
	{object V231= cdr(cdr(cdr((V223))));
	if((type_of(V231)!=t_cons) && ((V223)!= Cnil))
	 FEwrong_type_argument(Scons,V231);
	V230= (V231->c.c_car);}
	V229= get(V230,VV[52],Cnil);
	V232= (VFUN_NARGS=2,(*(LnkLI123))((V221),V229));
	(void)(sputprop(V227,VV[52],/* INLINE-ARGS */V232));
goto T830;
T830:;
	V225= Cnil;
	goto T828;
goto T829;
T829:;
	if((V226!= VV[151]))goto T836;
	if(!((car((V223)))==(Cnil))){
	goto T838;}
	V225= cdr((V223));
	goto T828;
goto T838;
T838:;
	V225= Cnil;
	goto T828;
goto T836;
T836:;
	if((V226!= VV[152]))goto T840;
	if(((V223))==Cnil){
	goto T842;}
	if((car((V223)))==(Cnil)){
	goto T842;}
	V225= make_cons(Cnil,(V223));
	goto T828;
goto T842;
T842:;
	V225= (V223);
	goto T828;
goto T840;
T840:;
	if((V226!= VV[153]))goto T846;
	if(((V223))==Cnil){
	goto T847;}
	base[3]= (V221);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk148)();
	vs_top=sup;
	princ_char(10,Cnil);
goto T847;
T847:;
	V225= (V223);
	goto T828;
goto T846;
T846:;
	V225= Cnil;}
goto T828;
T828:;
	(void)(aset1(V224,fixint((V221)),V225));}}
goto T822;
T822:;
	V221= one_plus((V221));
	goto T817;}
	}
}
/*	function definition for COMPLETE-PROP	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_reserve(VM36);
	{object V233;
	object V234;
	object V235;
	object V236;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V233=(base[0]);
	V234=(base[1]);
	V235=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T855;}
	V236=(base[3]);
	vs_top=sup;
	goto T856;
goto T855;
T855:;
	V236= Cnil;
goto T856;
T856:;
	if(!(type_of((V233))==t_symbol)){
	goto T858;}
	if((get((V233),(V235),Cnil))==Cnil){
	goto T858;}
	base[4]= (V233);
	vs_top=(vs_base=base+4)+1;
	Lsymbol_package();
	vs_top=sup;
	V237= vs_base[0];
	base[4]= (V234);
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V238= vs_base[0];
	if(!(equal(V237,V238))){
	goto T858;}
	base[4]= (V233);
	vs_top=(vs_base=base+4)+1;
	return;
goto T858;
T858:;
	{object V239;
	register object V240;
	V239= Cnil;
	V240= Cnil;
	{object V241;
	register object V242;
	register object V243;
	{object V244;
	base[4]= (V234);
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V244= vs_base[0];
	base[4]= (V244);
	vs_top=(vs_base=base+4)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T874;}
	V241= (V244);
	goto T870;
goto T874;
T874:;
	base[4]= coerce_to_string((V244));
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V241= vs_base[0];}
goto T870;
T870:;
	V242= Cnil;
	V243= Cnil;
	{long V245;
	long V246;
	base[4]= (V241);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk154)();
	if(vs_base>=vs_top){vs_top=sup;goto T880;}
	V245= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T881;}
	V246= fix(vs_base[0]);
	vs_top=sup;
	goto T882;
goto T880;
T880:;
	V245= fix(Cnil);
goto T881;
T881:;
	V246= fix(Cnil);
goto T882;
T882:;
	{object V247;
	register object V248;
	V249 = make_fixnum(V246);
	V250 = make_fixnum(V245);
	V247= number_plus(V249,V250);
	V248= small_fixnum(0);
goto T886;
T886:;
	if(!(number_compare((V248),(V247))>=0)){
	goto T887;}
	V242= Cnil;
	goto T869;
goto T887;
T887:;
	V251 = make_fixnum(V246);
	if(!(number_compare((V248),V251)<0)){
	goto T898;}
	base[5]= (V241);
	base[6]= (V248);
	vs_top=(vs_base=base+5)+2;
	siLpackage_internal();
	vs_top=sup;
	V243= vs_base[0];
	goto T896;
goto T898;
T898:;
	base[5]= (V241);
	V252 = make_fixnum(V246);
	base[6]= number_minus((V248),V252);
	vs_top=(vs_base=base+5)+2;
	siLpackage_external();
	vs_top=sup;
	V243= vs_base[0];
goto T896;
T896:;
goto T894;
T894:;
	if(((V243))!=Cnil){
	goto T904;}
	goto T895;
goto T904;
T904:;
	V242= car((V243));
	if((get((V242),(V235),Cnil))==Cnil){
	goto T909;}
	base[5]= (V233);
	base[6]= (V242);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk155)();
	vs_top=sup;
	V253= vs_base[0];
	if(!(eql(V253,small_fixnum(0)))){
	goto T909;}
	if(((V240))==Cnil){
	goto T918;}
	{register object V254;
	register object V255;
	V254= (V240);
	V240= make_cons((V242),Cnil);
	V255= (V240);
	if(type_of((V254))!=t_cons)FEwrong_type_argument(Scons,(V254));
	((V254))->c.c_cdr = (V255);
	goto T909;}
goto T918;
T918:;
	V240= make_cons((V242),Cnil);
	V239= (V240);
goto T909;
T909:;
	V243= cdr((V243));
	goto T894;
goto T895;
T895:;
	goto T892;
goto T892;
T892:;
	V248= one_plus((V248));
	goto T886;}}}
goto T869;
T869:;
	if(((V236))==Cnil){
	goto T933;}
	base[4]= (V239);
	vs_top=(vs_base=base+4)+1;
	return;
goto T933;
T933:;
	if(!(((long)length((V239)))>(1))){
	goto T936;}
	base[4]= Ct;
	base[5]= VV[75];
	base[6]= (V235);
	base[7]= (V239);
	vs_top=(vs_base=base+4)+4;
	Lformat();
	vs_top=sup;
	goto T931;
goto T936;
T936:;
	if(((V239))!=Cnil){
	goto T943;}
	base[4]= Ct;
	base[5]= VV[76];
	base[6]= (V233);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T931;
goto T943;
T943:;
	base[4]= car((V239));
	vs_top=(vs_base=base+4)+1;
	return;
goto T931;
T931:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	function definition for DISPLAY-ENV	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_reserve(VM37);
	{register object V256;
	object V257;
	check_arg(2);
	V256=(base[0]);
	V257=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V258;
	V258= reverse((V257));
goto T951;
T951:;
	if(!(type_of((V258))==t_cons)){
	goto T953;}
	base[2]= symbol_value(VV[77]);
	vs_top=(vs_base=base+2)+1;
	Lfill_pointer();
	vs_top=sup;
	V259= vs_base[0];
	if(!((fix(V259))>(fix((V256))))){
	goto T952;}
goto T953;
T953:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T952;
T952:;{object V260;
	if(type_of(car((V258)))==t_cons){
	goto T963;}
	V260= Cnil;
	goto T962;
goto T963;
T963:;
	{object V261= cdar((V258));
	V260= (type_of(V261)==t_cons||(V261)==Cnil?Ct:Cnil);}
goto T962;
T962:;
	if(V260==Cnil)goto T961;
	goto T960;
goto T961;
T961:;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T960;
T960:;
	base[2]= symbol_value(VV[77]);
	base[3]= VV[78];
	base[4]= caar((V258));
	base[5]= cadar((V258));
	base[6]= cdr((V258));
	vs_top=(vs_base=base+2)+5;
	Lformat();
	vs_top=sup;
	V258= cdr((V258));
	goto T951;}
	}
}
/*	function definition for APPLY-DISPLAY-FUN	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_reserve(VM38);
	bds_check;
	{object V262;
	object V263;
	object V264;
	check_arg(3);
	V262=(base[0]);
	V263=(base[1]);
	V264=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	bds_bind(VV[13],symbol_value(VV[10]));
	bds_bind(VV[11],symbol_value(VV[10]));
	bds_bind(VV[79],Cnil);
	bds_bind(VV[80],VV[81]);
	bds_bind(VV[12],Ct);
	base[8]= symbol_value(VV[77]);
	base[9]= small_fixnum(0);
	vs_top=(vs_base=base+8)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[8]= symbol_value(VV[77]);
	base[9]= VV[82];
	vs_top=(vs_base=base+8)+2;
	Lformat();
	vs_top=sup;
	(void)((
	(type_of((V262)) == t_sfun ?(*(((V262))->sfn.sfn_self)):
	(fcall.fun=((V262)),fcall.argd=2,fcalln))((V263),(V264))));
	base[8]= symbol_value(VV[77]);
	vs_top=(vs_base=base+8)+1;
	Lfill_pointer();
	vs_top=sup;
	V265= vs_base[0];
	if(!((fix(V265))>(fix((V263))))){
	goto T982;}
	base[8]= symbol_value(VV[77]);
	base[9]= (V263);
	vs_top=(vs_base=base+8)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[8]= symbol_value(VV[77]);
	base[9]= VV[83];
	vs_top=(vs_base=base+8)+2;
	Lformat();
	vs_top=sup;
goto T982;
T982:;
	base[8]= symbol_value(VV[77]);
	base[9]= VV[84];
	vs_top=(vs_base=base+8)+2;
	Lformat();
	vs_top=sup;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	base[3]= symbol_value(VV[77]);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for GET-LINE-OF-FORM	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_reserve(VM39);
	{object V266;
	object V267;
	check_arg(2);
	V266=(base[0]);
	V267=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V268;
	V268= (VFUN_NARGS=2,(*(LnkLI143))((V266),(V267)));
	if(((V268))==Cnil){
	goto T996;}
	V269= aref1((V267),0);
	base[2]= make_fixnum((long)(fix((V268)))+(fix(cdr(/* INLINE-ARGS */V269))));
	vs_top=(vs_base=base+2)+1;
	return;
goto T996;
T996:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for GET-NEXT-VISIBLE-FUN	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_reserve(VM40);
	{object V270;
	check_arg(1);
	V270=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V271;
	V271= (V270);
goto T999;
T999:;
	if(!((fix((V271)))<(fix(symbol_value(VV[85]))))){
	goto T1000;}
	{register object V272;
	V272= Cnil;
	(void)((MVloc[(0)]=((V271))));
	base[1]= (V272);
	vs_top=(vs_base=base+1)+1;
	return;}
goto T1000;
T1000:;
	{register object V273;
	base[1]= (V271);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk140)();
	vs_top=sup;
	V273= vs_base[0];
	{register object V274;
	base[1]= (V273);
	vs_top=(vs_base=base+1)+1;
	Lspecial_form_p();
	vs_top=sup;
	V274= vs_base[0];
	if(((V274))==Cnil){
	goto T1011;}
	goto T1005;
goto T1011;
T1011:;
	{register object V275;
	V275= get((V273),VV[86],Cnil);
	if(((V275))==Cnil){
	goto T1015;}
	goto T1005;
goto T1015;
T1015:;
	base[1]= (V273);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1005;}
	{register object V276;
	V276= (V273);
	(void)((MVloc[(0)]=((V271))));
	base[1]= (V276);
	vs_top=(vs_base=base+1)+1;
	return;}}}}
goto T1005;
T1005:;
	V271= make_fixnum((long)(fix((V271)))-(1));
	goto T999;}
	}
}
/*	function definition for DBL-WHAT-FRAME	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_reserve(VM41);
	{register long V277;
	check_arg(1);
	V277=fix(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register long V278;
	register long V279;
	register object V280;
	V278= fix(symbol_value(VV[87]));
	V279= 0;
	V280= Cnil;
goto T1028;
T1028:;
	{register object V281;
	base[1]= make_fixnum(V278);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk156)();
	vs_top=sup;
	V280= vs_base[0];
	V281= (V280);
	V278= fix((MVloc[(0)]));}
	if(!((V278)<=(V277))){
	goto T1036;}
	base[1]= make_fixnum(V279);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1036;
T1036:;
	V279= (long)(V279)+(1);
	V278= (long)(V278)-(1);
	goto T1028;}
	}
}
/*	function definition for DBL-UP	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_reserve(VM42);
	{register object V282;
	object V283;
	check_arg(2);
	V282=(base[0]);
	V283=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V284;
	object V285;
	object V286;
	object V287;
	object V288;
	V284= Cnil;
	V285= Cnil;
	V286= Cnil;
	V287= Cnil;
	V288= Cnil;
	base[2]= (V283);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk157)();
	vs_top=sup;
	V284= vs_base[0];
	if(!((fix((V282)))>=(0))){
	goto T1052;}
	{object V289;
	base[2]= (V282);
	base[3]= (V283);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk158)();
	vs_top=sup;
	setq(VV[9],vs_base[0]);
	V289= symbol_value(VV[9]);
	V282= (MVloc[(0)]);
	V285= (MVloc[(1)]);
	V286= (MVloc[(2)]);
	V287= (MVloc[(3)]);
	V288= (MVloc[(4)]);}
	(void)((*(LnkLI159))());
	base[2]= make_fixnum((long)(fix((V284)))+(fix((V282))));
	base[3]= Ct;
	base[4]= symbol_value(VV[9]);
	base[5]= (V285);
	base[6]= (V286);
	base[7]= (V287);
	base[8]= (V288);
	vs_top=(vs_base=base+2)+7;
	(void) (*Lnk160)();
	return;
goto T1052;
T1052:;
	V282= make_fixnum((long)(fix((V284)))+(fix((V282))));
	if(!((fix((V282)))>=(0))){
	goto T1080;}
	goto T1079;
goto T1080;
T1080:;
	V282= small_fixnum(0);
goto T1079;
T1079:;
	V283= symbol_value(VV[87]);
	goto TTL;}
	}
}
/*	function definition for NEXT-STACK-FRAME	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_reserve(VM43);
	{object V290;
	check_arg(1);
	V290=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V291;
	register object V292;
	register object V293;
	register object V294;
	object V295;
	V291= Cnil;
	V292= Cnil;
	V293= Cnil;
	V294= Cnil;
	V295= Cnil;
	if(!((fix((V290)))<(fix(symbol_value(VV[85]))))){
	goto T1092;}
	(void)((MVloc[(0)]=(Cnil)));
	(void)((MVloc[(1)]=(Cnil)));
	(void)((MVloc[(2)]=(Cnil)));
	(void)((MVloc[(3)]=(Cnil)));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T1092;
T1092:;
	{object V297;
	V297= Cnil;
	{object V298;
	base[1]= (V290);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk156)();
	vs_top=sup;
	V297= vs_base[0];
	V298= (V297);
	V293= (MVloc[(0)]);}
	V295= (V297);
	{object V299;
	V291= get((V297),VV[49],Cnil);
	if(((V291))!=Cnil){
	goto T1107;}
	V299= Cnil;
	goto T1106;
goto T1107;
T1107:;
	{register object V300;
	register object V301;
	V300= make_fixnum((long)(fix((V290)))+(1));
	V301= Cnil;
goto T1112;
T1112:;
	if(!(number_compare((V300),(V293))<=0)){
	goto T1113;}
	V299= Cnil;
	goto T1106;
goto T1113;
T1113:;
	base[1]= (V300);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V301= vs_base[0];
	base[2]= (V300);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= (V291);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk161)();
	vs_top=sup;
	V292= vs_base[0];
	if(((V292))==Cnil){
	goto T1120;}
	{register object V302;
	V302= (V293);
	(void)((MVloc[(0)]=((V297))));
	(void)((MVloc[(1)]=((V292))));
	V303= aref1((V291),0);
	(void)((MVloc[(2)]=(car(/* INLINE-ARGS */V303))));
	base[2]= (V300);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V294= vs_base[0];
	base[1]= (V294);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V304= vs_base[0];
	base[1]= one_plus((V294));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V305= vs_base[0];
	base[1]= number_plus((V294),small_fixnum(2));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V306= vs_base[0];
	V307= list(3,V304,V305,V306);
	(void)((MVloc[(3)]=(/* INLINE-ARGS */V307)));
	base[1]= (V302);
	vs_top=(vs_base=base+1)+1;
	return;}
goto T1120;
T1120:;
	V300= make_fixnum((long)(fix((V300)))-(1));
	goto T1112;}
goto T1106;
T1106:;
	if(((V299))==Cnil){
	goto T1143;}
	base[1]= (V299);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1143;
T1143:;
	base[1]= (V295);
	vs_top=(vs_base=base+1)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1146;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T1146;
T1146:;
	{object V308;
	V308= get((V295),VV[86],Cnil);
	if(((V308))==Cnil){
	goto T1151;}
	base[1]= (V308);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1151;
T1151:;
	base[1]= (V295);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1154;}
	(void)((MVloc[(0)]=((V295))));
	(void)((MVloc[(1)]=(Cnil)));
	(void)((MVloc[(2)]=(Cnil)));
	base[1]= (V293);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk162)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1163;}
	V310= Cnil;
	goto T1161;
goto T1163;
T1163:;
	{object V311;
	base[1]= (V293);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V311= vs_base[0];
	base[1]= (V311);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V312= vs_base[0];
	base[1]= one_plus((V311));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V313= vs_base[0];
	base[1]= make_fixnum((long)(fix((V311)))+(2));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V314= vs_base[0];
	V310= list(3,V312,V313,V314);}
goto T1161;
T1161:;
	(void)((MVloc[(3)]=(V310)));
	base[1]= V293;
	vs_top=(vs_base=base+1)+1;
	return;
goto T1154;
T1154:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}}}}
	}
}
/*	function definition for NTH-STACK-FRAME	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_reserve(VM44);
	{register object V315;
	register object V316;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V315=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1174;}
	V316=(base[1]);
	vs_top=sup;
	goto T1175;
goto T1174;
T1174:;
	V316= symbol_value(VV[87]);
goto T1175;
T1175:;
	{register object V317;
	object V318;
	object V319;
	object V320;
	register object V321;
	V317= Cnil;
	V318= Cnil;
	V319= Cnil;
	V320= Cnil;
	V321= Cnil;
	if(!((fix((V315)))>=(0))){
	goto T1183;}
	goto T1182;
goto T1183;
T1183:;
	V315= small_fixnum(0);
goto T1182;
T1182:;
	{object V322;
	register object V323;
	V322= make_fixnum((long)(fix((V315)))+(1));
	V323= small_fixnum(0);
goto T1190;
T1190:;
	if(!(number_compare((V323),(V322))>=0)){
	goto T1191;}
	goto T1186;
goto T1191;
T1191:;
	base[3]= (V316);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk163)();
	vs_top=sup;
	V321= vs_base[0];
	if(((V321))==Cnil){
	goto T1200;}
	{register object V324;
	V316= (V321);
	V324= (V316);
	V317= (MVloc[(0)]);
	V318= (MVloc[(1)]);
	V319= (MVloc[(2)]);
	V320= (MVloc[(3)]);}
	V316= make_fixnum((long)(fix((V321)))-(1));
	goto T1198;
goto T1200;
T1200:;
	V315= make_fixnum((long)(fix((V323)))-(1));
	goto T1186;
goto T1198;
T1198:;
	V323= one_plus((V323));
	goto T1190;}
goto T1186;
T1186:;
	V316= make_fixnum((long)(fix((V316)))+(1));
	base[2]= (V316);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk140)();
	vs_top=sup;
	V317= vs_base[0];
	(void)((MVloc[(0)]=((V315))));
	(void)((MVloc[(1)]=((V317))));
	(void)((MVloc[(2)]=((V318))));
	(void)((MVloc[(3)]=((V319))));
	(void)((MVloc[(4)]=((V320))));
	base[2]= V316;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for DBL-BACKTRACE	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_reserve(VM45);
	{object V326;
	register object V327;
	if(vs_top-vs_base>2) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T1228;}
	V326=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1229;}
	V327=(base[1]);
	vs_top=sup;
	goto T1230;
goto T1228;
T1228:;
	V326= small_fixnum(1000);
goto T1229;
T1229:;
	V327= symbol_value(VV[87]);
goto T1230;
T1230:;
	{register object V328;
	register object V329;
	register object V330;
	register object V331;
	register object V332;
	V328= Cnil;
	V329= Cnil;
	V330= Cnil;
	V331= Cnil;
	V332= small_fixnum(0);
goto T1240;
T1240:;
	{object V333;
	base[2]= (V327);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk163)();
	vs_top=sup;
	V327= vs_base[0];
	V333= (V327);
	V328= (MVloc[(0)]);
	V330= (MVloc[(1)]);
	V329= (MVloc[(2)]);
	V331= (MVloc[(3)]);}
	if((V328)!=Cnil){
	goto T1254;}
	goto T1238;
goto T1254;
T1254:;
	base[2]= (V332);
	base[3]= Cnil;
	base[4]= (V327);
	base[5]= (V328);
	base[6]= (V330);
	base[7]= (V329);
	base[8]= (V331);
	vs_top=(vs_base=base+2)+7;
	(void) (*Lnk160)();
	vs_top=sup;
	V332= number_plus((V332),small_fixnum(1));
	if(!((fix((V332)))>=(fix((V326))))){
	goto T1265;}
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	vs_top=sup;
	goto T1238;
goto T1265;
T1265:;
	V327= make_fixnum((long)(fix((V327)))-(1));
	goto T1240;
goto T1238;
T1238:;
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;}
	}
}
/*	function definition for DISPLAY-COMPILED-ENV	*/

static void L48()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_reserve(VM46);
	{register object V334;
	object V335;
	check_arg(2);
	V334=(base[0]);
	V335=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V336;
	register object V337;
	base[4]= (V335);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V336= vs_base[0];
	base[4]= one_plus((V335));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V338= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk164)();
	vs_top=sup;
	V339= vs_base[0];
	V337= (number_compare(V338,V339)<=0?(V338):V339);
	base[4]= symbol_value(VV[77]);
	base[5]= VV[88];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	{register object V340;
	register object V341;
	base[4]= (V335);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk140)();
	vs_top=sup;
	V342= vs_base[0];
	V341= get(V342,VV[14],Cnil);
	V340= (V336);
goto T1283;
T1283:;
	if((fix((V340)))>=(fix((V337)))){
	goto T1285;}
	base[4]= symbol_value(VV[77]);
	vs_top=(vs_base=base+4)+1;
	Lfill_pointer();
	vs_top=sup;
	V343= vs_base[0];
	if(!((fix(V343))>(fix((V334))))){
	goto T1284;}
goto T1285;
T1285:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
goto T1284;
T1284:;
	base[4]= symbol_value(VV[77]);
	base[5]= VV[89];{object V344;
	V344= car((V341));
	if(V344==Cnil)goto T1296;
	base[6]= V344;
	goto T1295;
goto T1296;
T1296:;}
	base[6]= VV[90];
goto T1295;
T1295:;
	if((car((V341)))!=Cnil){
	goto T1300;}
	base[7]= make_fixnum((long)(fix((V340)))-(fix((V336))));
	goto T1298;
goto T1300;
T1300:;
	base[7]= Cnil;
goto T1298;
T1298:;
	base[9]= (V340);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	base[8]= vs_base[0];
	V340= make_fixnum((long)(fix((V340)))+(1));
	base[9]= ((fix((V340)))<(fix((V337)))?Ct:Cnil);
	vs_top=(vs_base=base+4)+6;
	Lformat();
	vs_top=sup;
	V341= cdr((V341));
	goto T1283;}}
	}
}
/*	function definition for COMPUTING-ARGS-P	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_reserve(VM47);
	{object V345;
	check_arg(1);
	V345=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	base[1]= (V345);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V346= vs_base[0];
	if(type_of(V346)==t_cons){
	goto T1309;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T1309;
T1309:;
	if(number_compare((V345),small_fixnum(3))>0){
	goto T1313;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T1313;
T1313:;
	base[1]= (V345);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V349= vs_base[0];
	{register object x= car(V349),V348= VV[91];
	while(!endp(V348))
	if(eql(x,V348->c.c_car)){
	V347= V348;
	goto T1315;
	}else V348=V348->c.c_cdr;
	V347= Cnil;}
goto T1315;
T1315:;
	base[1]= ((V347)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for PRINT-STACK-FRAME	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_reserve(VM48);
	{object V350;
	object V351;
	register object V352;
	object V353;
	object V354;
	object V355;
	if(vs_top-vs_base<4) too_few_arguments();
	if(vs_top-vs_base>6) too_many_arguments();
	V350=(base[0]);
	V351=(base[1]);
	V352=(base[2]);
	V353=(base[3]);
	vs_base=vs_base+4;
	if(vs_base>=vs_top){vs_top=sup;goto T1318;}
	V354=(base[4]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1319;}
	V355=(base[5]);
	vs_top=sup;
	goto T1320;
goto T1318;
T1318:;
	V354= Cnil;
goto T1319;
T1319:;
	V355= Cnil;
goto T1320;
T1320:;
	if(((V351))==Cnil){
	goto T1323;}
	if(((V354))==Cnil){
	goto T1323;}
	base[6]= symbol_value(VV[1]);
	base[7]= VV[92];
	base[8]= (V355);
	base[9]= (V354);
	vs_top=(vs_base=base+6)+4;
	Lformat();
	vs_top=sup;
goto T1323;
T1323:;
	{object V356;
	base[6]= (V352);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk165)();
	vs_top=sup;
	V356= vs_base[0];
	base[6]= symbol_value(VV[1]);
	base[7]= VV[93];
	base[8]= (V350);
	if((V356)==Cnil){
	base[9]= Cnil;
	goto T1338;}
	base[9]= VV[94];
goto T1338;
T1338:;
	base[10]= (V353);
	base[12]= (V352);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk162)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1342;}
	base[12]= VV[95];
	base[13]= small_fixnum(80);
	base[16]= (V352);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	base[15]= vs_base[0];
	vs_top=(vs_base=base+15)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V357= vs_base[0];
	base[14]= car(V357);
	vs_top=(vs_base=base+12)+3;
	(void) (*Lnk166)();
	vs_top=sup;
	base[11]= vs_base[0];
	goto T1340;
goto T1342;
T1342:;
	base[12]= VV[96];
	base[13]= small_fixnum(80);
	base[14]= (V352);
	vs_top=(vs_base=base+12)+3;
	(void) (*Lnk166)();
	vs_top=sup;
	base[11]= vs_base[0];
goto T1340;
T1340:;
	vs_top=(vs_base=base+6)+6;
	Lformat();
	vs_top=sup;
	if(((V355))==Cnil){
	goto T1354;}
	base[6]= symbol_value(VV[1]);
	base[7]= VV[97];
	base[8]= (V355);
	base[9]= (V354);
	vs_top=(vs_base=base+6)+4;
	Lformat();
	vs_top=sup;
goto T1354;
T1354:;
	base[6]= symbol_value(VV[1]);
	base[7]= VV[98];
	base[8]= (V352);
	vs_top=(vs_base=base+6)+3;
	Lformat();
	return;}
	}
}
/*	function definition for MAKE-BREAK-POINT	*/

static void L51()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_reserve(VM49);
	{object V358;
	object V359;
	object V360;
	check_arg(3);
	V358=(base[0]);
	V359=(base[1]);
	V360=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	V361= aref1((V359),fixint((V360)));
	V362= aref1((V359),0);
	V363= car(/* INLINE-ARGS */V362);
	V364= aref1((V359),0);
	V365 = make_fixnum((long)(fix(cdr(/* INLINE-ARGS */V364)))+(fix((V360))));
	base[3]= list(4,/* INLINE-ARGS */V361,/* INLINE-ARGS */V363,V365,(V358));
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for RELATIVE-LINE	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_reserve(VM50);
	{object V366;
	object V367;
	check_arg(2);
	V366=(base[0]);
	V367=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V368;
	V368= get((V366),VV[49],Cnil);
	if(((V368))==Cnil){
	goto T1366;}
	V369= aref1((V368),0);
	base[2]= make_fixnum((long)(fix((V367)))-(fix(cdr(/* INLINE-ARGS */V369))));
	vs_top=(vs_base=base+2)+1;
	return;
goto T1366;
T1366:;
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for SAFE-EVAL	*/

static void L53()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_reserve(VM51);
	bds_check;
	{register object V370;
	object V371;
	check_arg(2);
	V370=(base[0]);
	V371=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	bds_bind(VV[99],Cnil);
	bds_bind(VV[100],symbol_value(VV[101]));
	bds_bind(VV[1],symbol_value(VV[101]));
	if(!(type_of((V370))==t_symbol)){
	goto T1368;}
	base[5]= (V370);
	vs_top=(vs_base=base+5)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1368;}
	{register object x= (V370),V372= car((V371));
	while(!endp(V372))
	if(type_of(V372->c.c_car)==t_cons &&eql(x,V372->c.c_car->c.c_car)){
	goto T1368;
	}else V372=V372->c.c_cdr;}
	base[5]= VV[102];
	vs_top=(vs_base=base+5)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
goto T1368;
T1368:;
	{object V373;
	object V374;
	V375= list(2,VV[104],(V370));
	base[5]= list(5,VV[103],/* INLINE-ARGS */V375,Cnil,Cnil,list(2,VV[104],(V371)));
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk167)();
	if(vs_base>=vs_top){vs_top=sup;goto T1378;}
	V373= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1379;}
	V374= vs_base[0];
	vs_top=sup;
	goto T1380;
goto T1378;
T1378:;
	V373= Cnil;
goto T1379;
T1379:;
	V374= Cnil;
goto T1380;
T1380:;
	if(((V373))==Cnil){
	goto T1382;}
	base[5]= VV[102];
	vs_top=(vs_base=base+5)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
goto T1382;
T1382:;
	base[5]= (V374);
	vs_top=(vs_base=base+5)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;}
	}
}
/*	function definition for SET-BACK	*/

static void L54()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_reserve(VM52);
	{register object V376;
	register object V377;
	check_arg(2);
	V376=(base[0]);
	V377=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V378;
	V378= symbol_value(VV[9]);
	setq(VV[105],Cnil);
	setq(VV[9],(V378));
	if(((V377))==Cnil){
	goto T1391;}
	setq(VV[0],(V377));
	goto T1389;
goto T1391;
T1391:;
	base[3]= (V378);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V379= vs_base[0];
	(void)(make_cons(V379,Cnil));
goto T1389;
T1389:;
	if(((V376))==Cnil){
	goto T1397;}
	base[2]= symbol_value(VV[1]);
	base[3]= VV[106];
	base[4]= cadr((V376));
	base[5]= caddr((V376));
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
	base[2]= symbol_value(VV[1]);
	base[3]= VV[107];
	base[4]= cadr((V376));
	base[5]= caddr((V376));
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
goto T1397;
T1397:;
	{register object V380;
	register object V381;
	V380= symbol_value(VV[108]);
	V381= car((V380));
goto T1412;
T1412:;
	if(!(endp_prop((V380)))){
	goto T1413;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
goto T1413;
T1413:;
	{register object V382;
	base[3]= (V381);
	base[4]= (V377);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk168)();
	vs_top=sup;
	V382= vs_base[0];
	if(!(((V382))==(VV[102]))){
	goto T1421;}
	goto T1417;
goto T1421;
T1421:;
	base[3]= Ct;
	base[4]= VV[109];
	base[5]= (V381);
	base[6]= (V382);
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;}
goto T1417;
T1417:;
	V380= cdr((V380));
	V381= car((V380));
	goto T1412;}}
	}
}
static void LnkT168(){ call_or_link(VV[168],(void **)&Lnk168);} /* SAFE-EVAL */
static void LnkT167(){ call_or_link(VV[167],(void **)&Lnk167);} /* ERROR-SET */
static void LnkT166(){ call_or_link(VV[166],(void **)&Lnk166);} /* APPLY-DISPLAY-FUN */
static void LnkT165(){ call_or_link(VV[165],(void **)&Lnk165);} /* COMPUTING-ARGS-P */
static void LnkT164(){ call_or_link(VV[164],(void **)&Lnk164);} /* VS-TOP */
static void LnkT163(){ call_or_link(VV[163],(void **)&Lnk163);} /* NEXT-STACK-FRAME */
static void LnkT162(){ call_or_link(VV[162],(void **)&Lnk162);} /* IHS-NOT-INTERPRETED-ENV */
static void LnkT161(){ call_or_link(VV[161],(void **)&Lnk161);} /* GET-LINE-OF-FORM */
static void LnkT160(){ call_or_link(VV[160],(void **)&Lnk160);} /* PRINT-STACK-FRAME */
static object  LnkTLI159(){return call_proc0(VV[159],(void **)&LnkLI159);} /* SET-ENV */
static void LnkT158(){ call_or_link(VV[158],(void **)&Lnk158);} /* NTH-STACK-FRAME */
static void LnkT157(){ call_or_link(VV[157],(void **)&Lnk157);} /* DBL-WHAT-FRAME */
static void LnkT156(){ call_or_link(VV[156],(void **)&Lnk156);} /* GET-NEXT-VISIBLE-FUN */
static void LnkT155(){ call_or_link(VV[155],(void **)&Lnk155);} /* STRING-MATCH */
static void LnkT154(){ call_or_link(VV[154],(void **)&Lnk154);} /* PACKAGE-SIZE */
static void LnkT150(){ call_or_link(VV[150],(void **)&Lnk150);} /* RELATIVE-LINE */
static void LnkT149(){ call_or_link(VV[149],(void **)&Lnk149);} /* SHORT-NAME */
static void LnkT148(){ call_or_link(VV[148],(void **)&Lnk148);} /* SHOW-BREAK-POINT */
static void LnkT147(){ call_or_link(VV[147],(void **)&Lnk147);} /* INSERT-BREAK-POINT */
static void LnkT146(){ call_or_link(VV[146],(void **)&Lnk146);} /* BREAK-FUNCTION */
static void LnkT145(){ call_or_link(VV[145],(void **)&Lnk145);} /* DWIM */
static void LnkT144(){ call_or_link(VV[144],(void **)&Lnk144);} /* MAYBE-BREAK */
static object  LnkTLI143(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[143],(void **)&LnkLI143,ap);va_end(ap);return V1;} /* POSITION */
static void LnkT142(){ call_or_link(VV[142],(void **)&Lnk142);} /* CURRENT-STEP-FUN */
static void LnkT141(){ call_or_link(VV[141],(void **)&Lnk141);} /* INIT-BREAK-POINTS */
static void LnkT140(){ call_or_link(VV[140],(void **)&Lnk140);} /* IHS-FNAME */
static void LnkT139(){ call_or_link(VV[139],(void **)&Lnk139);} /* ITERATE-OVER-BKPTS */
static void LnkT138(){ call_or_link(VV[138],(void **)&Lnk138);} /* MAKE-BREAK-POINT */
static object  LnkTLI137(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[137],(void **)&LnkLI137,ap);va_end(ap);return V1;} /* MAKE-ARRAY */
static void LnkT136(){ call_or_link(VV[136],(void **)&Lnk136);} /* WALK-THROUGH */
static object  LnkTLI135(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[135],(void **)&LnkLI135,ap);va_end(ap);return V1;} /* VECTOR-PUSH-EXTEND */
static void LnkT134(){ call_or_link(VV[134],(void **)&Lnk134);} /* INSTREAM-NAME */
static void LnkT133(){ call_or_link(VV[133],(void **)&Lnk133);} /* LOAD */
static void LnkT132(){ call_or_link(VV[132],(void **)&Lnk132);} /* SETUP-LINEINFO */
static void LnkT131(){ call_or_link(VV[131],(void **)&Lnk131);} /* CLEANUP */
static void LnkT128(){ call_or_link(VV[128],(void **)&Lnk128);} /* READ-FROM-STRING */
static object  LnkTLI127(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[127],(void **)&LnkLI127,ap);va_end(ap);return V1;} /* COUNT */
static void LnkT126(){ call_or_link(VV[126],(void **)&Lnk126);} /* GET-INSTREAM */
static void LnkT125(){ call_or_link(VV[125],(void **)&Lnk125);} /* MAKE-INSTREAM */
static void LnkT124(){ call_or_link(VV[124],(void **)&Lnk124);} /* STREAM-NAME */
static object  LnkTLI123(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[123],(void **)&LnkLI123,ap);va_end(ap);return V1;} /* DELETE */
static void LnkT122(){ call_or_link(VV[122],(void **)&Lnk122);} /* CLOSEDP */
static void LnkT121(){ call_or_link(VV[121],(void **)&Lnk121);} /* BREAK-LEVEL */
static object  LnkTLI120(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[120],(void **)&LnkLI120,1,ap);va_end(ap);return V1;} /* SHOW-ENVIRONMENT */
static void LnkT119(){ call_or_link(VV[119],(void **)&Lnk119);} /* BREAK-LOCALS */
static void LnkT118(){ call_or_link(VV[118],(void **)&Lnk118);} /* BREAK-GO */
static object  LnkTLI117(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[117],(void **)&LnkLI117,ap);va_end(ap);return V1;} /* SEARCH */
static void LnkT116(){ call_or_link(VV[116],(void **)&Lnk116);} /* COMPILED-FUNCTION-NAME */
static void LnkT115(){ call_or_link(VV[115],(void **)&Lnk115);} /* IHS-FUN */
static object  LnkTLI114(){return call_proc0(VV[114],(void **)&LnkLI114);} /* TYPE-ERROR */
static void LnkT113(){ call_or_link(VV[113],(void **)&Lnk113);} /* IHS-TOP */
static void LnkT112(){ call_or_link(VV[112],(void **)&Lnk112);} /* VS */
static void LnkT111(){ call_or_link(VV[111],(void **)&Lnk111);} /* IHS-VS */
static void LnkT110(){ call_or_link(VV[110],(void **)&Lnk110);} /* BREAK-PREVIOUS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

