
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
	(void) (*Lnk111)();
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
	(void) (*Lnk112)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk113)();
	vs_top=sup;
	V6= vs_base[0];
	if(!(type_of((V6))==t_cons||((V6))==Cnil)){
	goto T35;}
	{register object V7;
	register object V8;
	base[3]= (V5);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk113)();
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
	(void) (*Lnk114)();
	vs_top=sup;
	V16= vs_base[0];{object V17;
	V17= (type_of((V16))==t_fixnum?Ct:Cnil);
	if(V17==Cnil)goto T67;
	goto T66;
	goto T67;
T67:;}
	(void)((*(LnkLI115))());
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
	(void) (*Lnk116)();
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
	(void) (*Lnk117)();
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
	if(((VFUN_NARGS=4,(*(LnkLI118))((V13),/* INLINE-ARGS */V22,VV[6],VV[7])))==Cnil){
	goto T98;}
	base[1]= make_fixnum(V14);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk119)();
	vs_top=sup;
	princ_char(10,Cnil);
	vs_base=vs_top;
	(void) (*Lnk120)();
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
	(void) (*Lnk112)();
	vs_top=sup;
	V25= vs_base[0];
	bds_bind(VV[11],symbol_value(VV[10]));
	bds_bind(VV[12],Cnil);
	bds_bind(VV[13],symbol_value(VV[10]));
	V26= symbol_value(VV[9]);
	base[6]= (V24);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk116)();
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
	(void)((*(LnkLI115))());
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
	(void)((*(LnkLI115))());
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
	(void) (*Lnk120)();
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
	(void) (*Lnk117)();
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
	(void) (*Lnk112)();
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
	(void)((*(LnkLI115))());
	goto T177;
T177:;
	V37= fix((V25));{object V40;
	V40= (type_of((V36))==t_fixnum?Ct:Cnil);
	if(V40==Cnil)goto T182;
	goto T181;
	goto T182;
T182:;}
	(void)((*(LnkLI115))());
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
	(void) (*Lnk113)();
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
	(void) (*Lnk113)();
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
	(void)((*(LnkLI115))());
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
	base[6]= (*(LnkLI121))((V24));
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
	(void) (*Lnk112)();
	vs_top=sup;
	V45= vs_base[0];
	if(!((fix((V44)))>=(0))){
	goto T235;}
	vs_base=vs_top;
	(void) (*Lnk114)();
	vs_top=sup;
	V47= vs_base[0];
	V48 = make_fixnum((long)(1)+(fix(symbol_value(VV[9]))));
	base[1]= (number_compare(V47,V48)<=0?(V47):V48);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
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
	(void) (*Lnk113)();
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
	{register object V55;
	V56= car((V52));
	V55= list(3,VV[22],/* INLINE-ARGS */V56,list(2,VV[23],(V53)));
	V54= make_cons((V55),(V54));}
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
	goto T262;
T262:;
	if(((V60))!=Cnil){
	goto T263;}
	V59= reverse((V62));
	goto T259;
	goto T263;
T263:;
	{register object V63;
	V63= list(3,VV[24],(V61),car((V60)));
	V62= make_cons((V63),(V62));}
	V60= cdr((V60));
	V61= one_plus((V61));
	goto T262;}
	goto T259;
T259:;
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
	(void) (*Lnk122)();
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
	goto T284;
T284:;
	if(!(endp_prop((V67)))){
	goto T285;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T285;
T285:;
	base[1]= structure_ref((V68),VV[25],0);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk123)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T289;}
	setq(VV[26],(VFUN_NARGS=2,(*(LnkLI124))((V68),symbol_value(VV[26]))));
	goto T289;
T289:;
	V67= cdr((V67));
	V68= car((V67));
	goto T284;}
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
	goto T304;
T304:;
	if(!(endp_prop((V71)))){
	goto T305;}
	V70= Cnil;
	goto T300;
	goto T305;
T305:;
	V73= structure_ref((V72),VV[25],0);
	if(!(((V69))==(/* INLINE-ARGS */V73))){
	goto T309;}
	V70= (V72);
	goto T300;
	goto T309;
T309:;
	V71= cdr((V71));
	V72= car((V71));
	goto T304;}
	goto T300;
T300:;
	if(V70==Cnil)goto T299;
	base[1]= V70;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T299;
T299:;}
	base[1]= VV[27];
	base[2]= (V69);
	base[3]= VV[28];
	base[5]= (V69);
	vs_top=(vs_base=base+5)+1;
	Lstreamp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T324;}
	base[5]= (V69);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk125)();
	vs_top=sup;
	base[4]= vs_base[0];
	goto T322;
	goto T324;
T324:;
	base[4]= Cnil;
	goto T322;
T322:;
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk126)();
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
	(void) (*Lnk127)();
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
	goto T335;}
	setq(VV[29],VV[31]);
	goto T333;
	goto T335;
T335:;
	setq(VV[29],Ct);
	goto T333;
T333:;
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
	(void) (*Lnk127)();
	vs_top=sup;
	V84= vs_base[0];
	{object V86;
	V87= structure_ref(V84,VV[25],1);
	V88= (VFUN_NARGS=2,(*(LnkLI128))(VV[33],(V83)));
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
	(void) (*Lnk127)();
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
	goto T356;}
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
	(void) (*Lnk129)();
	vs_top=sup;
	V95= vs_base[0];
	if(!(type_of((V95))==t_cons)){
	bds_unwind1;
	goto T354;}
	if(!((car((V95)))==(VV[37]))){
	bds_unwind1;
	goto T354;}
	if(!(type_of(cadr((V95)))==t_string)){
	bds_unwind1;
	goto T354;}
	if(!(type_of(caddr((V95)))==t_fixnum)){
	bds_unwind1;
	goto T354;}
	(void)(structure_set((V91),VV[25],2,cadr((V95))));
	V96= structure_set((V91),VV[25],1,caddr((V95)));
	bds_unwind1;
	goto T354;}
	goto T356;
T356:;
	(void)((
	(type_of(symbol_value(VV[38])) == t_sfun ?(*((symbol_value(VV[38]))->sfn.sfn_self)):
	(fcall.fun=(symbol_value(VV[38])),fcall.argd=2,fcalln))((V89),(V90))));
	goto T354;
T354:;
	base[2]= Cnil;
	base[3]= (V89);
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	Lpeek_char();
	vs_top=sup;
	V97= vs_base[0];
	if(!(eql(V97,VV[30]))){
	goto T377;}
	setq(VV[29],VV[31]);
	goto T375;
	goto T377;
T377:;
	setq(VV[29],Ct);
	goto T375;
T375:;
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
	base[1]= symbol_function(VV[130]);
	base[2]= Cnil;
	base[3]= symbol_value(VV[39]);
	vs_top=(vs_base=base+0)+4;
	Lset_macro_character();
	vs_top=sup;
	base[0]= VV[40];
	base[1]= symbol_function(VV[131]);
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
	(void) (*Lnk132)();
	vs_top=sup;
	base[2]= (V98);
	vs_top=(vs_base=base+2)+1;
	Ltruename();
	vs_top=sup;
	V98= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk133)();
	vs_top=sup;
	bds_bind(VV[35],symbol_value(VV[39]));
	base[3]=symbol_function(VV[134]);
	base[4]= (V98);
	{object V100;
	V100= (V99);
	 vs_top=base+5;
	 while(!endp(V100))
	 {vs_push(car(V100));V100=cdr(V100);}
	vs_base=base+4;}
	(void) (*Lnk134)();
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
	goto T413;}
	setq(VV[29],Cnil);
	goto T413;
T413:;
	if(((V104))==Cnil){
	goto T417;}
	base[2]= (V101);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk127)();
	vs_top=sup;
	V104= vs_base[0];
	V103= structure_ref((V104),VV[25],1);
	goto T417;
T417:;
	{object V105;
	V105= (
	(type_of(symbol_value(VV[45])) == t_sfun ?(*((symbol_value(VV[45]))->sfn.sfn_self)):
	(fcall.fun=(symbol_value(VV[45])),fcall.argd=2,fcalln))((V101),(V102)));
	if(((V104))==Cnil){
	goto T425;}
	{object V107;
	object V108;
	V107= symbol_value(VV[44]);
	base[3]= (V104);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk135)();
	vs_top=sup;
	V109= vs_base[0];
	V108= make_cons(V109,(V103));
	base[3]= V105;
	base[4]= (V107);
	base[5]= (V108);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	goto T425;
T425:;
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
	goto T437;
T437:;
	if(!(type_of((V110))==t_cons)){
	goto T438;}
	base[1]= (V110);
	base[2]= symbol_value(VV[44]);
	vs_top=(vs_base=base+1)+2;
	Lgethash();
	vs_top=sup;
	V111= vs_base[0];
	if(((V111))==Cnil){
	goto T441;}
	if(!(type_of(car((V110)))==t_cons)){
	goto T448;}
	if((caar((V110)))==(VV[46])){
	goto T448;}
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
	goto T441;}
	goto T448;
T448:;
	V115= make_cons((V111),(V110));
	(void)((VFUN_NARGS=2,(*(LnkLI136))(/* INLINE-ARGS */V115,symbol_value(VV[47]))));
	goto T441;
T441:;
	base[1]= car((V110));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk137)();
	vs_top=sup;
	V110= cdr((V110));
	goto T437;
	goto T438;
T438:;
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
	goto T469;}
	base[2]= remprop((V116),VV[49]);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T469;
T469:;
	if(!((symbol_value(VV[35]))==(symbol_value(VV[39])))){
	goto T472;}
	base[2]= symbol_value(VV[47]);
	base[3]= small_fixnum(0);
	vs_top=(vs_base=base+2)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[2]= (V117);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk137)();
	vs_top=sup;
	{object V121;
	register long V122;
	V121= make_fixnum((long)length((V118)));
	V122= 0;
	goto T483;
T483:;
	V123 = make_fixnum(V122);
	if(!(number_compare(V123,(V121))>=0)){
	goto T484;}
	goto T479;
	goto T484;
T484:;
	{register long V124;
	V125= aref1((V118),V122);
	V124= fix(cdar(/* INLINE-ARGS */V125));
	if(!((V124)>(V120))){
	goto T490;}
	V120= V124;
	goto T490;
T490:;
	if(!((V124)<(V119))){
	goto T488;}
	V119= V124;}
	goto T488;
T488:;
	V122= (long)(V122)+1;
	goto T483;}
	goto T479;
T479:;
	if(!(((long)length(symbol_value(VV[47])))>(0))){
	goto T501;}
	{object V126;
	object V127;
	V128 = make_fixnum((long)((long)(V120)-(V119))+(2));
	V126= (VFUN_NARGS=3,(*(LnkLI138))(V128,VV[50],VV[51]));
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
	goto T512;
T512:;
	if(!(number_compare((V134),(V133))>=0)){
	goto T513;}
	goto T508;
	goto T513;
T513:;
	{object V135;
	V135= aref1((V118),fixint((V134)));
	(void)(aset1((V126),(long)(fix(cdar((V135))))-(V119),cdr((V135))));}
	V134= one_plus((V134));
	goto T512;}
	goto T508;
T508:;
	(void)(sputprop((V116),VV[49],(V126)));
	if(((V127))==Cnil){
	goto T524;}
	{object V136;
	object V137;
	V136= get((V116),VV[52],Cnil);
	V138= aref1((V127),0);
	V137= cdr(/* INLINE-ARGS */V138);
	{register object V139;
	object V140;
	V139= (V136);
	V140= car((V139));
	goto T531;
T531:;
	if(!(endp_prop((V139)))){
	goto T532;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T532;
T532:;
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
	(void) (*Lnk139)();
	vs_top=sup;
	V148= vs_base[0];
	(void)(aset1(V147,fixint((V140)),V148));}}
	V139= cdr((V139));
	V140= car((V139));
	goto T531;}}
	goto T524;
T524:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T501;
T501:;
	{object V149;
	V149= get((V116),VV[52],Cnil);
	base[2]= (V149);
	base[3]= VV[54];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk140)();
	return;}
	goto T472;
T472:;
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
	if(V151==Cnil)goto T553;
	base[1]= V151;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T553;
T553:;}
	base[1]= structure_ref((V150),VV[25],0);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk125)();
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
	goto T560;}
	{register object V157;
	V157= (V156);
	if(((V157))==Cnil){
	goto T563;}
	{object V158;
	register object V159;
	V158= make_fixnum((long)length((V157)));
	V159= small_fixnum(0);
	goto T568;
T568:;
	if(!(number_compare((V159),(V158))>=0)){
	goto T569;}
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;
	goto T569;
T569:;
	V160= aref1((V157),fixint((V159)));
	if(!(((V152))==(/* INLINE-ARGS */V160))){
	goto T573;}
	if(((V155))==Cnil){
	goto T576;}
	{register object V161;
	register object V162;
	V161= (V155);
	V162= number_minus(car((V161)),small_fixnum(1));
	if(type_of((V161))!=t_cons)FEwrong_type_argument(Scons,(V161));
	((V161))->c.c_car = (V162);}
	if(!((fix(car((V155))))>(0))){
	goto T576;}
	base[5]= VV[55];
	vs_top=(vs_base=base+5)+1;
	return;
	goto T576;
T576:;
	base[6]= (V154);
	base[7]= (V157);
	base[8]= (V159);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk139)();
	vs_top=sup;
	setq(VV[56],vs_base[0]);
	base[5]= symbol_value(VV[56]);
	base[6]= (V153);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk122)();
	vs_top=sup;
	base[5]= VV[55];
	vs_top=(vs_base=base+5)+1;
	return;
	goto T573;
T573:;
	V159= one_plus((V159));
	goto T568;}
	goto T563;
T563:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T560;
T560:;
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
	if(vs_base>=vs_top){vs_top=sup;goto T595;}
	V163=(base[0]);
	vs_top=sup;
	goto T596;
	goto T595;
T595:;
	vs_base=vs_top;
	(void) (*Lnk114)();
	vs_top=sup;
	V163= vs_base[0];
	goto T596;
T596:;
	{register object V164;
	V164= one_minus((V163));
	goto T600;
T600:;
	if(!((fix((V164)))<=(0))){
	goto T601;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T601;
T601:;
	{register object V165;
	base[1]= (V164);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk141)();
	vs_top=sup;
	V165= vs_base[0];
	if((get((V165),VV[49],Cnil))==Cnil){
	goto T605;}
	base[1]= (V165);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T605;
T605:;
	V164= make_fixnum((long)(fix((V164)))-(1));
	goto T600;}
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
	{object V166;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T617;}
	V166=(base[0]);
	vs_top=sup;
	goto T618;
	goto T617;
T617:;
	V166= small_fixnum(1);
	goto T618;
T618:;
	if(symbol_value(VV[53])!=Cnil){
	goto T620;}
	vs_base=vs_top;
	(void) (*Lnk142)();
	vs_top=sup;
	goto T620;
T620:;
	setq(VV[58],VV[59]);
	base[1]= VV[60];
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for STEP-NEXT	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	{object V167;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T623;}
	V167=(base[0]);
	vs_top=sup;
	goto T624;
	goto T623;
T623:;
	V167= small_fixnum(1);
	goto T624;
T624:;
	{object V168;
	vs_base=vs_top;
	(void) (*Lnk143)();
	vs_top=sup;
	V168= vs_base[0];
	setq(VV[61],make_cons((V167),(V168)));
	if(symbol_value(VV[53])!=Cnil){
	goto T629;}
	vs_base=vs_top;
	(void) (*Lnk142)();
	vs_top=sup;
	goto T629;
T629:;
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
	{object V169;
	object V170;
	object V171;
	object V172;
	check_arg(4);
	V169=(base[0]);
	V170=(base[1]);
	V171=(base[2]);
	V172=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V173;
	V173= Cnil;
	V173= (VFUN_NARGS=2,(*(LnkLI144))((V169),(V170)));
	if(((V173))==Cnil){
	goto T634;}
	setq(VV[58],Cnil);
	if(!(((long)length(symbol_value(VV[53])))>(0))){
	goto T640;}
	goto T639;
	goto T640;
T640:;
	setq(VV[53],Cnil);
	goto T639;
T639:;
	base[5]= (V171);
	base[6]= (V170);
	base[7]= (V173);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk139)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V172);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk122)();
	vs_top=sup;
	base[4]= Ct;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T634;
T634:;
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
	{object V174;
	object V175;
	check_arg(2);
	V174=(base[0]);
	V175=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V176;
	vs_base=vs_top;
	(void) (*Lnk143)();
	vs_top=sup;
	V176= vs_base[0];
	{object V177;
	V177= get((V176),VV[49],Cnil);
	base[2]= (V174);
	base[3]= (V177);
	base[4]= (V176);
	base[5]= (V175);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk145)();
	return;}}
	}
}
/*	function definition for BREAK-STEP-NEXT	*/

static void L30()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_reserve(VM28);
	{object V178;
	object V179;
	check_arg(2);
	V178=(base[0]);
	V179=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V180;
	vs_base=vs_top;
	(void) (*Lnk143)();
	vs_top=sup;
	V180= vs_base[0];
	if(!(eql(cdr(symbol_value(VV[61])),(V180)))){
	goto T657;}
	{object V181;
	V181= get((V180),VV[49],Cnil);
	base[2]= (V178);
	base[3]= (V181);
	base[4]= (V180);
	base[5]= (V179);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk145)();
	return;}
	goto T657;
T657:;
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
	{object V182;
	object V183;
	check_arg(2);
	V182=(base[0]);
	V183=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V184;
	V184= (VFUN_NARGS=4,(*(LnkLI144))((V182),symbol_value(VV[53]),VV[63],VV[64]));
	base[2]= Ct;
	base[3]= VV[65];
	base[4]= (V184);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[2]= aref1(symbol_value(VV[53]),fixint((V184)));
	base[3]= (V183);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk122)();
	return;}
	}
}
/*	function definition for DWIM	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_reserve(VM30);
	{register object V185;
	check_arg(1);
	V185=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V186;
	register object V187;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V186= vs_base[0];
	V187= car((V186));
	goto T675;
T675:;
	if(!(endp_prop((V186)))){
	goto T676;}
	goto T671;
	goto T676;
T676:;
	{register object V188;
	register object V189;
	base[3]= symbol_name((V185));
	base[4]= (V187);
	vs_top=(vs_base=base+3)+2;
	Lintern();
	if(vs_base>=vs_top){vs_top=sup;goto T684;}
	V188= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T685;}
	V189= vs_base[0];
	vs_top=sup;
	goto T686;
	goto T684;
T684:;
	V188= Cnil;
	goto T685;
T685:;
	V189= Cnil;
	goto T686;
T686:;
	if((get((V188),VV[49],Cnil))==Cnil){
	goto T688;}
	base[3]= (V188);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T688;
T688:;
	if((V189)!=Cnil){
	goto T680;}
	base[3]= (V188);
	vs_top=(vs_base=base+3)+1;
	Lunintern();
	vs_top=sup;}
	goto T680;
T680:;
	V186= cdr((V186));
	V187= car((V186));
	goto T675;}
	goto T671;
T671:;
	base[1]= Ct;
	base[2]= VV[66];
	base[3]= (V185);
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
	{register object V190;
	register object V191;
	object V192;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V190=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T699;}
	V191=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T700;}
	V192=(base[2]);
	vs_top=sup;
	goto T701;
	goto T699;
T699:;
	V191= small_fixnum(1);
	goto T700;
T700:;
	V192= Cnil;
	goto T701;
T701:;
	{object V193;
	V193= Cnil;
	{register object V194;
	V194= get((V190),VV[49],Cnil);
	if(((V194))!=Cnil){
	goto T706;}
	base[3]= (V190);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk146)();
	vs_top=sup;
	V193= vs_base[0];
	if(((V193))==Cnil){
	goto T706;}
	base[3]= (V193);
	base[4]= (V191);
	base[5]= (V192);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk147)();
	return;
	goto T706;
T706:;
	if(!(type_of((V194))==t_array||
type_of((V194))==t_vector||
type_of((V194))==t_string||
type_of((V194))==t_bitvector)){
	goto T718;}
	goto T717;
	goto T718;
T718:;
	base[3]= Ct;
	base[4]= VV[67];
	base[5]= (V190);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T717;
T717:;
	{object V195;
	V196= aref1((V194),0);
	V195= cdr(/* INLINE-ARGS */V196);
	if(((V192))==Cnil){
	goto T725;}
	V191= make_fixnum((long)(fix((V191)))-(fix((V195))));
	goto T725;
T725:;{object V197;
	if((fix((V191)))>=(1)){
	goto T732;}
	V197= Cnil;
	goto T731;
	goto T732;
T732:;
	V197= ((fix((V191)))<((long)length((V194)))?Ct:Cnil);
	goto T731;
T731:;
	if(V197==Cnil)goto T730;
	goto T729;
	goto T730;
T730:;}{object V198;
	base[3]= Ct;
	base[4]= VV[68];
	base[5]= (V190);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	V198= vs_base[0];
	if(V198==Cnil)goto T734;
	goto T729;
	goto T734;
T734:;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T729;
T729:;
	if(!(eql((V191),small_fixnum(1)))){
	goto T739;}
	{object V199;
	base[3]= (V190);
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	V199= vs_base[0];
	if(!(type_of((V199))==t_cons)){
	goto T739;}
	if(!((car((V199)))==(VV[69]))){
	goto T739;}
	if((caddr((V199)))==Cnil){
	goto T739;}
	V191= small_fixnum(2);}
	goto T739;
T739:;
	{register object V200;
	register object V201;
	V200= make_fixnum((long)((long)length((V194)))-(fix((V191))));
	V201= small_fixnum(0);
	goto T755;
T755:;
	if(!(number_compare((V201),(V200))>=0)){
	goto T756;}
	goto T751;
	goto T756;
T756:;
	V202= aref1((V194),fixint((V201)));
	if((/* INLINE-ARGS */V202)==(VV[51])){
	goto T760;}
	base[6]= (V190);
	base[7]= (V194);
	base[8]= make_fixnum((long)(fix((V191)))+(fix((V201))));
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk139)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk148)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk149)();
	vs_top=sup;
	vs_base=vs_top=base+4;
	vs_base[0]=Cnil;
	return;
	goto T760;
T760:;
	V201= one_plus((V201));
	goto T755;}
	goto T751;
T751:;
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
	{object V203;
	check_arg(1);
	V203=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V204;
	V204= Cnil;
	if(symbol_value(VV[53])!=Cnil){
	goto T775;}
	vs_base=vs_top;
	(void) (*Lnk142)();
	vs_top=sup;
	goto T775;
T775:;{object V205;
	V205= (VFUN_NARGS=2,(*(LnkLI144))(Cnil,symbol_value(VV[53])));
	if(V205==Cnil)goto T778;
	V204= V205;
	goto T777;
	goto T778;
T778:;}
	{object V206;
	V206= make_fixnum((long)length(symbol_value(VV[53])));
	(void)((VFUN_NARGS=2,(*(LnkLI136))(Cnil,symbol_value(VV[53]))));
	V204= (V206);}
	goto T777;
T777:;
	{object V207;
	{object V208= cdr(cdr(cdr((V203))));
	if((type_of(V208)!=t_cons) && ((V203)!= Cnil))
	 FEwrong_type_argument(Scons,V208);
	V207= (V208->c.c_car);}
	{object V212;
	V213= get(V207,VV[52],Cnil);
	V212= make_cons(V204,V213);
	(void)(sputprop(V207,VV[52],(V212)));}}
	(void)(aset1(symbol_value(VV[53]),fixint((V204)),(V203)));
	base[1]= (V204);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for SHORT-NAME	*/

static void L35()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_reserve(VM33);
	{object V214;
	check_arg(1);
	V214=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V215;
	V215= (VFUN_NARGS=4,(*(LnkLI144))(VV[71],(V214),VV[72],Ct));
	if(((V215))==Cnil){
	goto T789;}
	base[1]= (V214);
	base[2]= make_fixnum((long)(1)+(fix((V215))));
	vs_top=(vs_base=base+1)+2;
	Lsubseq();
	return;
	goto T789;
T789:;
	base[1]= (V214);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for SHOW-BREAK-POINT	*/

static void L36()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_reserve(VM34);
	{object V216;
	check_arg(1);
	V216=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V217;
	V217= Cnil;
	{register object V218;
	V218= aref1(symbol_value(VV[53]),fixint((V216)));
	if(((V218))==Cnil){
	goto T796;}
	if(!((car((V218)))==(Cnil))){
	goto T798;}
	V217= Ct;
	V218= cdr((V218));
	goto T798;
T798:;
	base[1]= Ct;
	base[2]= VV[73];
	base[3]= (V216);
	base[5]= cadr((V218));
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk150)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= caddr((V218));
	base[6]= (V217);
	vs_top=(vs_base=base+1)+6;
	Lformat();
	vs_top=sup;
	{object V219;
	V219= cadddr((V218));
	base[1]= Ct;
	base[2]= VV[74];
	base[4]= (V219);
	base[5]= caddr((V218));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk151)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V219);
	vs_top=(vs_base=base+1)+4;
	Lformat();
	return;}
	goto T796;
T796:;
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
	{register object V220;
	register object V221;
	check_arg(2);
	V220=(base[0]);
	V221=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V222;
	register object V223;
	V222= make_fixnum((long)length(symbol_value(VV[53])));
	V223= small_fixnum(0);
	goto T822;
T822:;
	if(!(number_compare((V223),(V222))>=0)){
	goto T823;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T823;
T823:;
	{register object x= (V223),V224= (V220);
	while(!endp(V224))
	if(eql(x,V224->c.c_car)){
	goto T828;
	}else V224=V224->c.c_cdr;}
	if(((V220))!=Cnil){
	goto T827;}
	goto T828;
T828:;
	{register object V225;
	V225= aref1(symbol_value(VV[53]),fixint((V223)));{object V226;
	V226= symbol_value(VV[53]);
	{object V228= (V221);
	if((V228!= VV[54]))goto T834;
	if(((V225))==Cnil){
	goto T835;}
	{object V230= cdr(cdr(cdr((V225))));
	if((type_of(V230)!=t_cons) && ((V225)!= Cnil))
	 FEwrong_type_argument(Scons,V230);
	V229= (V230->c.c_car);}
	{object V233= cdr(cdr(cdr((V225))));
	if((type_of(V233)!=t_cons) && ((V225)!= Cnil))
	 FEwrong_type_argument(Scons,V233);
	V232= (V233->c.c_car);}
	V231= get(V232,VV[52],Cnil);
	V234= (VFUN_NARGS=2,(*(LnkLI124))((V223),V231));
	(void)(sputprop(V229,VV[52],/* INLINE-ARGS */V234));
	goto T835;
T835:;
	V227= Cnil;
	goto T833;
	goto T834;
T834:;
	if((V228!= VV[152]))goto T841;
	if(!((car((V225)))==(Cnil))){
	goto T843;}
	V227= cdr((V225));
	goto T833;
	goto T843;
T843:;
	V227= Cnil;
	goto T833;
	goto T841;
T841:;
	if((V228!= VV[153]))goto T845;
	if(((V225))==Cnil){
	goto T847;}
	if((car((V225)))==(Cnil)){
	goto T847;}
	V227= make_cons(Cnil,(V225));
	goto T833;
	goto T847;
T847:;
	V227= (V225);
	goto T833;
	goto T845;
T845:;
	if((V228!= VV[154]))goto T851;
	if(((V225))==Cnil){
	goto T852;}
	base[3]= (V223);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk149)();
	vs_top=sup;
	princ_char(10,Cnil);
	goto T852;
T852:;
	V227= (V225);
	goto T833;
	goto T851;
T851:;
	V227= Cnil;}
	goto T833;
T833:;
	(void)(aset1(V226,fixint((V223)),V227));}}
	goto T827;
T827:;
	V223= one_plus((V223));
	goto T822;}
	}
}
/*	function definition for COMPLETE-PROP	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_reserve(VM36);
	{object V235;
	object V236;
	object V237;
	object V238;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V235=(base[0]);
	V236=(base[1]);
	V237=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T860;}
	V238=(base[3]);
	vs_top=sup;
	goto T861;
	goto T860;
T860:;
	V238= Cnil;
	goto T861;
T861:;
	if(!(type_of((V235))==t_symbol)){
	goto T863;}
	if((get((V235),(V237),Cnil))==Cnil){
	goto T863;}
	base[4]= (V235);
	vs_top=(vs_base=base+4)+1;
	Lsymbol_package();
	vs_top=sup;
	V239= vs_base[0];
	base[4]= (V236);
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V240= vs_base[0];
	if(!(equal(V239,V240))){
	goto T863;}
	base[4]= (V235);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T863;
T863:;
	{object V241;
	register object V242;
	V241= Cnil;
	V242= Cnil;
	{object V243;
	register object V244;
	register object V245;
	{object V246;
	base[4]= (V236);
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V246= vs_base[0];
	base[4]= (V246);
	vs_top=(vs_base=base+4)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T879;}
	V243= (V246);
	goto T875;
	goto T879;
T879:;
	base[4]= coerce_to_string((V246));
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V243= vs_base[0];}
	goto T875;
T875:;
	V244= Cnil;
	V245= Cnil;
	{object V247;
	register object V248;
	base[6]= (V243);
	vs_top=(vs_base=base+6)+1;
	Lpackage_use_list();
	vs_top=sup;
	V249= vs_base[0];
	V247= make_cons((V243),V249);
	V248= car((V247));
	goto T888;
T888:;
	if(!(endp_prop((V247)))){
	goto T889;}
	V244= Cnil;
	goto T874;
	goto T889;
T889:;
	{long V250;
	long V251;
	base[6]= (V248);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk155)();
	if(vs_base>=vs_top){vs_top=sup;goto T898;}
	V250= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T899;}
	V251= fix(vs_base[0]);
	vs_top=sup;
	goto T900;
	goto T898;
T898:;
	V250= fix(Cnil);
	goto T899;
T899:;
	V251= fix(Cnil);
	goto T900;
T900:;
	if(((V243))==((V248))){
	goto T901;}
	V251= 0;
	goto T901;
T901:;
	{object V252;
	register object V253;
	V254 = make_fixnum(V251);
	V255 = make_fixnum(V250);
	V252= number_plus(V254,V255);
	V253= small_fixnum(0);
	goto T908;
T908:;
	if(!(number_compare((V253),(V252))>=0)){
	goto T909;}
	goto T895;
	goto T909;
T909:;
	V256 = make_fixnum(V251);
	if(!(number_compare((V253),V256)<0)){
	goto T918;}
	base[7]= (V248);
	base[8]= (V253);
	vs_top=(vs_base=base+7)+2;
	siLpackage_internal();
	vs_top=sup;
	V245= vs_base[0];
	goto T916;
	goto T918;
T918:;
	base[7]= (V248);
	V257 = make_fixnum(V251);
	base[8]= number_minus((V253),V257);
	vs_top=(vs_base=base+7)+2;
	siLpackage_external();
	vs_top=sup;
	V245= vs_base[0];
	goto T916;
T916:;
	goto T914;
T914:;
	if(((V245))!=Cnil){
	goto T924;}
	goto T915;
	goto T924;
T924:;
	V244= car((V245));
	if(((V248))==((V243))){
	goto T930;}
	base[8]= symbol_name((V244));
	base[9]= (V243);
	vs_top=(vs_base=base+8)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+7)+1;
	Llast();
	vs_top=sup;
	V258= vs_base[0];
	if(!((VV[75])==(car(V258)))){
	goto T929;}
	goto T930;
T930:;
	if((get((V244),(V237),Cnil))==Cnil){
	goto T939;}
	base[7]= (V235);
	base[8]= (V244);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk156)();
	vs_top=sup;
	V259= vs_base[0];
	if(!(eql(V259,small_fixnum(0)))){
	goto T939;}
	if(((V242))==Cnil){
	goto T948;}
	{object V260;
	register object V261;
	V260= (V242);
	V242= make_cons((V244),Cnil);
	V261= (V242);
	if(type_of((V260))!=t_cons)FEwrong_type_argument(Scons,(V260));
	((V260))->c.c_cdr = (V261);
	goto T939;}
	goto T948;
T948:;
	V242= make_cons((V244),Cnil);
	V241= (V242);
	goto T939;
T939:;
	goto T929;
T929:;
	V245= cdr((V245));
	goto T914;
	goto T915;
T915:;
	goto T912;
	goto T912;
T912:;
	V253= one_plus((V253));
	goto T908;}}
	goto T895;
T895:;
	V247= cdr((V247));
	V248= car((V247));
	goto T888;}}
	goto T874;
T874:;
	if(((V238))==Cnil){
	goto T968;}
	base[4]= (V241);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T968;
T968:;
	if(!(((long)length((V241)))>(1))){
	goto T971;}
	base[4]= Ct;
	base[5]= VV[76];
	base[6]= (V237);
	base[7]= (V241);
	vs_top=(vs_base=base+4)+4;
	Lformat();
	vs_top=sup;
	goto T966;
	goto T971;
T971:;
	if(((V241))!=Cnil){
	goto T978;}
	base[4]= Ct;
	base[5]= VV[77];
	base[6]= (V235);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T966;
	goto T978;
T978:;
	base[4]= car((V241));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T966;
T966:;
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
	{register object V262;
	object V263;
	check_arg(2);
	V262=(base[0]);
	V263=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V264;
	V264= reverse((V263));
	goto T986;
T986:;
	if(!(type_of((V264))==t_cons)){
	goto T988;}
	base[2]= symbol_value(VV[78]);
	vs_top=(vs_base=base+2)+1;
	Lfill_pointer();
	vs_top=sup;
	V265= vs_base[0];
	if(!((fix(V265))>(fix((V262))))){
	goto T987;}
	goto T988;
T988:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T987;
T987:;{object V266;
	if(type_of(car((V264)))==t_cons){
	goto T998;}
	V266= Cnil;
	goto T997;
	goto T998;
T998:;
	{object V267= cdar((V264));
	V266= (type_of(V267)==t_cons||(V267)==Cnil?Ct:Cnil);}
	goto T997;
T997:;
	if(V266==Cnil)goto T996;
	goto T995;
	goto T996;
T996:;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T995;
T995:;
	base[2]= symbol_value(VV[78]);
	base[3]= VV[79];
	base[4]= caar((V264));
	base[5]= cadar((V264));
	base[6]= cdr((V264));
	vs_top=(vs_base=base+2)+5;
	Lformat();
	vs_top=sup;
	V264= cdr((V264));
	goto T986;}
	}
}
/*	function definition for APPLY-DISPLAY-FUN	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_reserve(VM38);
	bds_check;
	{object V268;
	object V269;
	object V270;
	check_arg(3);
	V268=(base[0]);
	V269=(base[1]);
	V270=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[13],symbol_value(VV[10]));
	bds_bind(VV[11],symbol_value(VV[10]));
	bds_bind(VV[80],Cnil);
	bds_bind(VV[81],VV[82]);
	bds_bind(VV[12],Ct);
	base[8]= symbol_value(VV[78]);
	base[9]= small_fixnum(0);
	vs_top=(vs_base=base+8)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[8]= symbol_value(VV[78]);
	base[9]= VV[83];
	vs_top=(vs_base=base+8)+2;
	Lformat();
	vs_top=sup;
	(void)((
	(type_of((V268)) == t_sfun ?(*(((V268))->sfn.sfn_self)):
	(fcall.fun=((V268)),fcall.argd=2,fcalln))((V269),(V270))));
	base[8]= symbol_value(VV[78]);
	vs_top=(vs_base=base+8)+1;
	Lfill_pointer();
	vs_top=sup;
	V271= vs_base[0];
	if(!((fix(V271))>(fix((V269))))){
	goto T1017;}
	base[8]= symbol_value(VV[78]);
	base[9]= (V269);
	vs_top=(vs_base=base+8)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[8]= symbol_value(VV[78]);
	base[9]= VV[84];
	vs_top=(vs_base=base+8)+2;
	Lformat();
	vs_top=sup;
	goto T1017;
T1017:;
	base[8]= symbol_value(VV[78]);
	base[9]= VV[85];
	vs_top=(vs_base=base+8)+2;
	Lformat();
	vs_top=sup;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	base[3]= symbol_value(VV[78]);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for GET-LINE-OF-FORM	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_reserve(VM39);
	{object V272;
	object V273;
	check_arg(2);
	V272=(base[0]);
	V273=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V274;
	V274= (VFUN_NARGS=2,(*(LnkLI144))((V272),(V273)));
	if(((V274))==Cnil){
	goto T1031;}
	V275= aref1((V273),0);
	base[2]= make_fixnum((long)(fix((V274)))+(fix(cdr(/* INLINE-ARGS */V275))));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1031;
T1031:;
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
	{object V276;
	check_arg(1);
	V276=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V277;
	V277= (V276);
	goto T1034;
T1034:;
	if(!((fix((V277)))<(fix(symbol_value(VV[86]))))){
	goto T1035;}
	{register object V278;
	V278= Cnil;
	(void)((MVloc[(0)]=((V277))));
	base[1]= (V278);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T1035;
T1035:;
	{register object V279;
	base[1]= (V277);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk141)();
	vs_top=sup;
	V279= vs_base[0];
	{register object V280;
	base[1]= (V279);
	vs_top=(vs_base=base+1)+1;
	Lspecial_form_p();
	vs_top=sup;
	V280= vs_base[0];
	if(((V280))==Cnil){
	goto T1046;}
	goto T1040;
	goto T1046;
T1046:;
	{register object V281;
	V281= get((V279),VV[87],Cnil);
	if(((V281))==Cnil){
	goto T1050;}
	goto T1040;
	goto T1050;
T1050:;
	base[1]= (V279);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1040;}
	{register object V282;
	V282= (V279);
	(void)((MVloc[(0)]=((V277))));
	base[1]= (V282);
	vs_top=(vs_base=base+1)+1;
	return;}}}}
	goto T1040;
T1040:;
	V277= make_fixnum((long)(fix((V277)))-(1));
	goto T1034;}
	}
}
/*	function definition for DBL-WHAT-FRAME	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_reserve(VM41);
	{register long V283;
	check_arg(1);
	V283=fix(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register long V284;
	register long V285;
	register object V286;
	V284= fix(symbol_value(VV[88]));
	V285= 0;
	V286= Cnil;
	goto T1063;
T1063:;
	{register object V287;
	base[1]= make_fixnum(V284);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk157)();
	vs_top=sup;
	V286= vs_base[0];
	V287= (V286);
	V284= fix((MVloc[(0)]));}
	if(!((V284)<=(V283))){
	goto T1071;}
	base[1]= make_fixnum(V285);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1071;
T1071:;
	V285= (long)(V285)+(1);
	V284= (long)(V284)-(1);
	goto T1063;}
	}
}
/*	function definition for DBL-UP	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_reserve(VM42);
	{register object V288;
	object V289;
	check_arg(2);
	V288=(base[0]);
	V289=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V290;
	object V291;
	object V292;
	object V293;
	object V294;
	V290= Cnil;
	V291= Cnil;
	V292= Cnil;
	V293= Cnil;
	V294= Cnil;
	base[2]= (V289);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk158)();
	vs_top=sup;
	V290= vs_base[0];
	if(!((fix((V288)))>=(0))){
	goto T1087;}
	{object V295;
	base[2]= (V288);
	base[3]= (V289);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk159)();
	vs_top=sup;
	setq(VV[9],vs_base[0]);
	V295= symbol_value(VV[9]);
	V288= (MVloc[(0)]);
	V291= (MVloc[(1)]);
	V292= (MVloc[(2)]);
	V293= (MVloc[(3)]);
	V294= (MVloc[(4)]);}
	(void)((*(LnkLI160))());
	base[2]= make_fixnum((long)(fix((V290)))+(fix((V288))));
	base[3]= Ct;
	base[4]= symbol_value(VV[9]);
	base[5]= (V291);
	base[6]= (V292);
	base[7]= (V293);
	base[8]= (V294);
	vs_top=(vs_base=base+2)+7;
	(void) (*Lnk161)();
	return;
	goto T1087;
T1087:;
	V288= make_fixnum((long)(fix((V290)))+(fix((V288))));
	if(!((fix((V288)))>=(0))){
	goto T1115;}
	goto T1114;
	goto T1115;
T1115:;
	V288= small_fixnum(0);
	goto T1114;
T1114:;
	V289= symbol_value(VV[88]);
	goto TTL;}
	}
}
/*	function definition for NEXT-STACK-FRAME	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_reserve(VM43);
	{object V296;
	check_arg(1);
	V296=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V297;
	register object V298;
	register object V299;
	register object V300;
	object V301;
	V297= Cnil;
	V298= Cnil;
	V299= Cnil;
	V300= Cnil;
	V301= Cnil;
	if(!((fix((V296)))<(fix(symbol_value(VV[86]))))){
	goto T1127;}
	(void)((MVloc[(0)]=(Cnil)));
	(void)((MVloc[(1)]=(Cnil)));
	(void)((MVloc[(2)]=(Cnil)));
	(void)((MVloc[(3)]=(Cnil)));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1127;
T1127:;
	{object V303;
	V303= Cnil;
	{object V304;
	base[1]= (V296);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk157)();
	vs_top=sup;
	V303= vs_base[0];
	V304= (V303);
	V299= (MVloc[(0)]);}
	V301= (V303);
	{object V305;
	V297= get((V303),VV[49],Cnil);
	if(((V297))!=Cnil){
	goto T1142;}
	V305= Cnil;
	goto T1141;
	goto T1142;
T1142:;
	{register object V306;
	register object V307;
	V306= make_fixnum((long)(fix((V296)))+(1));
	V307= Cnil;
	goto T1147;
T1147:;
	if(!(number_compare((V306),(V299))<=0)){
	goto T1148;}
	V305= Cnil;
	goto T1141;
	goto T1148;
T1148:;
	base[1]= (V306);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk116)();
	vs_top=sup;
	V307= vs_base[0];
	base[2]= (V306);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk116)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= (V297);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk162)();
	vs_top=sup;
	V298= vs_base[0];
	if(((V298))==Cnil){
	goto T1155;}
	{register object V308;
	V308= (V299);
	(void)((MVloc[(0)]=((V303))));
	(void)((MVloc[(1)]=((V298))));
	V309= aref1((V297),0);
	(void)((MVloc[(2)]=(car(/* INLINE-ARGS */V309))));
	base[2]= (V306);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V300= vs_base[0];
	base[1]= (V300);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk113)();
	vs_top=sup;
	V310= vs_base[0];
	base[1]= one_plus((V300));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk113)();
	vs_top=sup;
	V311= vs_base[0];
	base[1]= number_plus((V300),small_fixnum(2));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk113)();
	vs_top=sup;
	V312= vs_base[0];
	V313= list(3,V310,V311,V312);
	(void)((MVloc[(3)]=(/* INLINE-ARGS */V313)));
	base[1]= (V308);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T1155;
T1155:;
	V306= make_fixnum((long)(fix((V306)))-(1));
	goto T1147;}
	goto T1141;
T1141:;
	if(((V305))==Cnil){
	goto T1178;}
	base[1]= (V305);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1178;
T1178:;
	base[1]= (V301);
	vs_top=(vs_base=base+1)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1181;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1181;
T1181:;
	{object V314;
	V314= get((V301),VV[87],Cnil);
	if(((V314))==Cnil){
	goto T1186;}
	base[1]= (V314);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1186;
T1186:;
	base[1]= (V301);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1189;}
	(void)((MVloc[(0)]=((V301))));
	(void)((MVloc[(1)]=(Cnil)));
	(void)((MVloc[(2)]=(Cnil)));
	base[1]= (V299);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk163)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1198;}
	V316= Cnil;
	goto T1196;
	goto T1198;
T1198:;
	{object V317;
	base[1]= (V299);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V317= vs_base[0];
	base[1]= (V317);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk113)();
	vs_top=sup;
	V318= vs_base[0];
	base[1]= one_plus((V317));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk113)();
	vs_top=sup;
	V319= vs_base[0];
	base[1]= make_fixnum((long)(fix((V317)))+(2));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk113)();
	vs_top=sup;
	V320= vs_base[0];
	V316= list(3,V318,V319,V320);}
	goto T1196;
T1196:;
	(void)((MVloc[(3)]=(V316)));
	base[1]= V299;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1189;
T1189:;
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
	{register object V321;
	register object V322;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V321=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1209;}
	V322=(base[1]);
	vs_top=sup;
	goto T1210;
	goto T1209;
T1209:;
	V322= symbol_value(VV[88]);
	goto T1210;
T1210:;
	{register object V323;
	object V324;
	object V325;
	object V326;
	register object V327;
	V323= Cnil;
	V324= Cnil;
	V325= Cnil;
	V326= Cnil;
	V327= Cnil;
	if(!((fix((V321)))>=(0))){
	goto T1218;}
	goto T1217;
	goto T1218;
T1218:;
	V321= small_fixnum(0);
	goto T1217;
T1217:;
	{object V328;
	register object V329;
	V328= make_fixnum((long)(fix((V321)))+(1));
	V329= small_fixnum(0);
	goto T1225;
T1225:;
	if(!(number_compare((V329),(V328))>=0)){
	goto T1226;}
	goto T1221;
	goto T1226;
T1226:;
	base[3]= (V322);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk164)();
	vs_top=sup;
	V327= vs_base[0];
	if(((V327))==Cnil){
	goto T1235;}
	{register object V330;
	V322= (V327);
	V330= (V322);
	V323= (MVloc[(0)]);
	V324= (MVloc[(1)]);
	V325= (MVloc[(2)]);
	V326= (MVloc[(3)]);}
	V322= make_fixnum((long)(fix((V327)))-(1));
	goto T1233;
	goto T1235;
T1235:;
	V321= make_fixnum((long)(fix((V329)))-(1));
	goto T1221;
	goto T1233;
T1233:;
	V329= one_plus((V329));
	goto T1225;}
	goto T1221;
T1221:;
	V322= make_fixnum((long)(fix((V322)))+(1));
	base[2]= (V322);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk141)();
	vs_top=sup;
	V323= vs_base[0];
	(void)((MVloc[(0)]=((V321))));
	(void)((MVloc[(1)]=((V323))));
	(void)((MVloc[(2)]=((V324))));
	(void)((MVloc[(3)]=((V325))));
	(void)((MVloc[(4)]=((V326))));
	base[2]= V322;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for DBL-BACKTRACE	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_reserve(VM45);
	{object V332;
	register object V333;
	if(vs_top-vs_base>2) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T1263;}
	V332=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1264;}
	V333=(base[1]);
	vs_top=sup;
	goto T1265;
	goto T1263;
T1263:;
	V332= small_fixnum(1000);
	goto T1264;
T1264:;
	V333= symbol_value(VV[88]);
	goto T1265;
T1265:;
	{register object V334;
	register object V335;
	register object V336;
	register object V337;
	register object V338;
	V334= Cnil;
	V335= Cnil;
	V336= Cnil;
	V337= Cnil;
	V338= small_fixnum(0);
	goto T1275;
T1275:;
	{object V339;
	base[2]= (V333);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk164)();
	vs_top=sup;
	V333= vs_base[0];
	V339= (V333);
	V334= (MVloc[(0)]);
	V336= (MVloc[(1)]);
	V335= (MVloc[(2)]);
	V337= (MVloc[(3)]);}
	if((V334)!=Cnil){
	goto T1289;}
	goto T1273;
	goto T1289;
T1289:;
	base[2]= (V338);
	base[3]= Cnil;
	base[4]= (V333);
	base[5]= (V334);
	base[6]= (V336);
	base[7]= (V335);
	base[8]= (V337);
	vs_top=(vs_base=base+2)+7;
	(void) (*Lnk161)();
	vs_top=sup;
	V338= number_plus((V338),small_fixnum(1));
	if(!((fix((V338)))>=(fix((V332))))){
	goto T1300;}
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	vs_top=sup;
	goto T1273;
	goto T1300;
T1300:;
	V333= make_fixnum((long)(fix((V333)))-(1));
	goto T1275;
	goto T1273;
T1273:;
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
	{register object V340;
	object V341;
	check_arg(2);
	V340=(base[0]);
	V341=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V342;
	register object V343;
	base[4]= (V341);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V342= vs_base[0];
	base[4]= one_plus((V341));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V344= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk165)();
	vs_top=sup;
	V345= vs_base[0];
	V343= (number_compare(V344,V345)<=0?(V344):V345);
	base[4]= symbol_value(VV[78]);
	base[5]= VV[89];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	{register object V346;
	register object V347;
	base[4]= (V341);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk141)();
	vs_top=sup;
	V348= vs_base[0];
	V347= get(V348,VV[14],Cnil);
	V346= (V342);
	goto T1318;
T1318:;
	if((fix((V346)))>=(fix((V343)))){
	goto T1320;}
	base[4]= symbol_value(VV[78]);
	vs_top=(vs_base=base+4)+1;
	Lfill_pointer();
	vs_top=sup;
	V349= vs_base[0];
	if(!((fix(V349))>(fix((V340))))){
	goto T1319;}
	goto T1320;
T1320:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1319;
T1319:;
	base[4]= symbol_value(VV[78]);
	base[5]= VV[90];{object V350;
	V350= car((V347));
	if(V350==Cnil)goto T1331;
	base[6]= V350;
	goto T1330;
	goto T1331;
T1331:;}
	base[6]= VV[91];
	goto T1330;
T1330:;
	if((car((V347)))!=Cnil){
	goto T1335;}
	base[7]= make_fixnum((long)(fix((V346)))-(fix((V342))));
	goto T1333;
	goto T1335;
T1335:;
	base[7]= Cnil;
	goto T1333;
T1333:;
	base[9]= (V346);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk113)();
	vs_top=sup;
	base[8]= vs_base[0];
	V346= make_fixnum((long)(fix((V346)))+(1));
	base[9]= ((fix((V346)))<(fix((V343)))?Ct:Cnil);
	vs_top=(vs_base=base+4)+6;
	Lformat();
	vs_top=sup;
	V347= cdr((V347));
	goto T1318;}}
	}
}
/*	function definition for COMPUTING-ARGS-P	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_reserve(VM47);
	{object V351;
	check_arg(1);
	V351=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V351);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk116)();
	vs_top=sup;
	V352= vs_base[0];
	if(type_of(V352)==t_cons){
	goto T1344;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1344;
T1344:;
	if(number_compare((V351),small_fixnum(3))>0){
	goto T1348;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1348;
T1348:;
	base[1]= (V351);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk116)();
	vs_top=sup;
	V355= vs_base[0];
	{register object x= car(V355),V354= VV[92];
	while(!endp(V354))
	if(eql(x,V354->c.c_car)){
	V353= V354;
	goto T1350;
	}else V354=V354->c.c_cdr;
	V353= Cnil;}
	goto T1350;
T1350:;
	base[1]= ((V353)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for PRINT-STACK-FRAME	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_reserve(VM48);
	{object V356;
	object V357;
	register object V358;
	object V359;
	object V360;
	object V361;
	object V362;
	if(vs_top-vs_base<4) too_few_arguments();
	if(vs_top-vs_base>7) too_many_arguments();
	V356=(base[0]);
	V357=(base[1]);
	V358=(base[2]);
	V359=(base[3]);
	vs_base=vs_base+4;
	if(vs_base>=vs_top){vs_top=sup;goto T1353;}
	V360=(base[4]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1354;}
	V361=(base[5]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1355;}
	V362=(base[6]);
	vs_top=sup;
	goto T1356;
	goto T1353;
T1353:;
	V360= Cnil;
	goto T1354;
T1354:;
	V361= Cnil;
	goto T1355;
T1355:;
	V362= Cnil;
	goto T1356;
T1356:;
	if(((V357))==Cnil){
	goto T1360;}
	if(((V360))==Cnil){
	goto T1360;}
	base[7]= symbol_value(VV[1]);
	base[8]= VV[93];
	base[9]= (V361);
	base[10]= (V360);
	vs_top=(vs_base=base+7)+4;
	Lformat();
	vs_top=sup;
	goto T1360;
T1360:;
	{object V363;
	base[7]= (V358);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk166)();
	vs_top=sup;
	V363= vs_base[0];
	base[7]= symbol_value(VV[1]);
	base[8]= VV[94];
	base[9]= (V356);
	if((V363)==Cnil){
	base[10]= Cnil;
	goto T1375;}
	base[10]= VV[95];
	goto T1375;
T1375:;
	base[11]= (V359);
	base[13]= (V358);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk163)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1379;}
	base[13]= VV[96];
	base[14]= small_fixnum(80);
	base[17]= (V358);
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	base[16]= vs_base[0];
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk113)();
	vs_top=sup;
	V364= vs_base[0];
	base[15]= car(V364);
	vs_top=(vs_base=base+13)+3;
	(void) (*Lnk167)();
	vs_top=sup;
	base[12]= vs_base[0];
	goto T1377;
	goto T1379;
T1379:;
	base[13]= VV[97];
	base[14]= small_fixnum(80);
	base[15]= (V358);
	vs_top=(vs_base=base+13)+3;
	(void) (*Lnk167)();
	vs_top=sup;
	base[12]= vs_base[0];
	goto T1377;
T1377:;
	vs_top=(vs_base=base+7)+6;
	Lformat();
	vs_top=sup;
	if(((V361))==Cnil){
	goto T1391;}
	base[7]= symbol_value(VV[1]);
	base[8]= VV[98];
	base[9]= (V361);
	base[10]= (V360);
	vs_top=(vs_base=base+7)+4;
	Lformat();
	vs_top=sup;
	goto T1391;
T1391:;
	base[7]= symbol_value(VV[1]);
	base[8]= VV[99];
	base[9]= (V358);
	vs_top=(vs_base=base+7)+3;
	Lformat();
	return;}
	}
}
/*	function definition for MAKE-BREAK-POINT	*/

static void L51()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_reserve(VM49);
	{object V365;
	object V366;
	object V367;
	check_arg(3);
	V365=(base[0]);
	V366=(base[1]);
	V367=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	V368= aref1((V366),fixint((V367)));
	V369= aref1((V366),0);
	V370= car(/* INLINE-ARGS */V369);
	V371= aref1((V366),0);
	V372 = make_fixnum((long)(fix(cdr(/* INLINE-ARGS */V371)))+(fix((V367))));
	base[3]= list(4,/* INLINE-ARGS */V368,/* INLINE-ARGS */V370,V372,(V365));
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for RELATIVE-LINE	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_reserve(VM50);
	{object V373;
	object V374;
	check_arg(2);
	V373=(base[0]);
	V374=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V375;
	V375= get((V373),VV[49],Cnil);
	if(((V375))==Cnil){
	goto T1403;}
	V376= aref1((V375),0);
	base[2]= make_fixnum((long)(fix((V374)))-(fix(cdr(/* INLINE-ARGS */V376))));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1403;
T1403:;
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
	{register object V377;
	object V378;
	check_arg(2);
	V377=(base[0]);
	V378=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[100],Cnil);
	bds_bind(VV[101],symbol_value(VV[102]));
	bds_bind(VV[1],symbol_value(VV[102]));
	if(!(type_of((V377))==t_symbol)){
	goto T1405;}
	base[5]= (V377);
	vs_top=(vs_base=base+5)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1405;}
	{register object x= (V377),V379= car((V378));
	while(!endp(V379))
	if(type_of(V379->c.c_car)==t_cons &&eql(x,V379->c.c_car->c.c_car)){
	goto T1405;
	}else V379=V379->c.c_cdr;}
	base[5]= VV[103];
	vs_top=(vs_base=base+5)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T1405;
T1405:;
	{object V380;
	object V381;
	V382= list(2,VV[105],(V377));
	base[5]= list(5,VV[104],/* INLINE-ARGS */V382,Cnil,Cnil,list(2,VV[105],(V378)));
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk168)();
	if(vs_base>=vs_top){vs_top=sup;goto T1415;}
	V380= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1416;}
	V381= vs_base[0];
	vs_top=sup;
	goto T1417;
	goto T1415;
T1415:;
	V380= Cnil;
	goto T1416;
T1416:;
	V381= Cnil;
	goto T1417;
T1417:;
	if(((V380))==Cnil){
	goto T1419;}
	base[5]= VV[103];
	vs_top=(vs_base=base+5)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T1419;
T1419:;
	base[5]= (V381);
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
	{register object V383;
	register object V384;
	check_arg(2);
	V383=(base[0]);
	V384=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V385;
	V385= symbol_value(VV[9]);
	setq(VV[106],Cnil);
	setq(VV[9],(V385));
	if(((V384))==Cnil){
	goto T1428;}
	setq(VV[0],(V384));
	goto T1426;
	goto T1428;
T1428:;
	base[3]= (V385);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk113)();
	vs_top=sup;
	V386= vs_base[0];
	(void)(make_cons(V386,Cnil));
	goto T1426;
T1426:;
	if(((V383))==Cnil){
	goto T1434;}
	base[2]= symbol_value(VV[1]);
	base[3]= VV[107];
	base[4]= cadr((V383));
	base[5]= caddr((V383));
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
	base[2]= symbol_value(VV[1]);
	base[3]= VV[108];
	base[4]= cadr((V383));
	base[5]= caddr((V383));
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
	goto T1434;
T1434:;
	{register object V387;
	register object V388;
	V387= symbol_value(VV[109]);
	V388= car((V387));
	goto T1449;
T1449:;
	if(!(endp_prop((V387)))){
	goto T1450;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T1450;
T1450:;
	{register object V389;
	base[3]= (V388);
	base[4]= (V384);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk169)();
	vs_top=sup;
	V389= vs_base[0];
	if(!(((V389))==(VV[103]))){
	goto T1458;}
	goto T1454;
	goto T1458;
T1458:;
	base[3]= Ct;
	base[4]= VV[110];
	base[5]= (V388);
	base[6]= (V389);
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;}
	goto T1454;
T1454:;
	V387= cdr((V387));
	V388= car((V387));
	goto T1449;}}
	}
}
static void LnkT169(){ call_or_link(VV[169],(void **)(void *)&Lnk169);} /* SAFE-EVAL */
static void LnkT168(){ call_or_link(VV[168],(void **)(void *)&Lnk168);} /* ERROR-SET */
static void LnkT167(){ call_or_link(VV[167],(void **)(void *)&Lnk167);} /* APPLY-DISPLAY-FUN */
static void LnkT166(){ call_or_link(VV[166],(void **)(void *)&Lnk166);} /* COMPUTING-ARGS-P */
static void LnkT165(){ call_or_link(VV[165],(void **)(void *)&Lnk165);} /* VS-TOP */
static void LnkT164(){ call_or_link(VV[164],(void **)(void *)&Lnk164);} /* NEXT-STACK-FRAME */
static void LnkT163(){ call_or_link(VV[163],(void **)(void *)&Lnk163);} /* IHS-NOT-INTERPRETED-ENV */
static void LnkT162(){ call_or_link(VV[162],(void **)(void *)&Lnk162);} /* GET-LINE-OF-FORM */
static void LnkT161(){ call_or_link(VV[161],(void **)(void *)&Lnk161);} /* PRINT-STACK-FRAME */
static object  LnkTLI160(){return call_proc0(VV[160],(void **)(void *)&LnkLI160);} /* SET-ENV */
static void LnkT159(){ call_or_link(VV[159],(void **)(void *)&Lnk159);} /* NTH-STACK-FRAME */
static void LnkT158(){ call_or_link(VV[158],(void **)(void *)&Lnk158);} /* DBL-WHAT-FRAME */
static void LnkT157(){ call_or_link(VV[157],(void **)(void *)&Lnk157);} /* GET-NEXT-VISIBLE-FUN */
static void LnkT156(){ call_or_link(VV[156],(void **)(void *)&Lnk156);} /* STRING-MATCH */
static void LnkT155(){ call_or_link(VV[155],(void **)(void *)&Lnk155);} /* PACKAGE-SIZE */
static void LnkT151(){ call_or_link(VV[151],(void **)(void *)&Lnk151);} /* RELATIVE-LINE */
static void LnkT150(){ call_or_link(VV[150],(void **)(void *)&Lnk150);} /* SHORT-NAME */
static void LnkT149(){ call_or_link(VV[149],(void **)(void *)&Lnk149);} /* SHOW-BREAK-POINT */
static void LnkT148(){ call_or_link(VV[148],(void **)(void *)&Lnk148);} /* INSERT-BREAK-POINT */
static void LnkT147(){ call_or_link(VV[147],(void **)(void *)&Lnk147);} /* BREAK-FUNCTION */
static void LnkT146(){ call_or_link(VV[146],(void **)(void *)&Lnk146);} /* DWIM */
static void LnkT145(){ call_or_link(VV[145],(void **)(void *)&Lnk145);} /* MAYBE-BREAK */
static object  LnkTLI144(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[144],(void **)(void *)&LnkLI144,first,ap);va_end(ap);return V1;} /* POSITION */
static void LnkT143(){ call_or_link(VV[143],(void **)(void *)&Lnk143);} /* CURRENT-STEP-FUN */
static void LnkT142(){ call_or_link(VV[142],(void **)(void *)&Lnk142);} /* INIT-BREAK-POINTS */
static void LnkT141(){ call_or_link(VV[141],(void **)(void *)&Lnk141);} /* IHS-FNAME */
static void LnkT140(){ call_or_link(VV[140],(void **)(void *)&Lnk140);} /* ITERATE-OVER-BKPTS */
static void LnkT139(){ call_or_link(VV[139],(void **)(void *)&Lnk139);} /* MAKE-BREAK-POINT */
static object  LnkTLI138(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[138],(void **)(void *)&LnkLI138,first,ap);va_end(ap);return V1;} /* MAKE-ARRAY */
static void LnkT137(){ call_or_link(VV[137],(void **)(void *)&Lnk137);} /* WALK-THROUGH */
static object  LnkTLI136(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[136],(void **)(void *)&LnkLI136,first,ap);va_end(ap);return V1;} /* VECTOR-PUSH-EXTEND */
static void LnkT135(){ call_or_link(VV[135],(void **)(void *)&Lnk135);} /* INSTREAM-NAME */
static void LnkT134(){ call_or_link(VV[134],(void **)(void *)&Lnk134);} /* LOAD */
static void LnkT133(){ call_or_link(VV[133],(void **)(void *)&Lnk133);} /* SETUP-LINEINFO */
static void LnkT132(){ call_or_link(VV[132],(void **)(void *)&Lnk132);} /* CLEANUP */
static void LnkT129(){ call_or_link(VV[129],(void **)(void *)&Lnk129);} /* READ-FROM-STRING */
static object  LnkTLI128(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[128],(void **)(void *)&LnkLI128,first,ap);va_end(ap);return V1;} /* COUNT */
static void LnkT127(){ call_or_link(VV[127],(void **)(void *)&Lnk127);} /* GET-INSTREAM */
static void LnkT126(){ call_or_link(VV[126],(void **)(void *)&Lnk126);} /* MAKE-INSTREAM */
static void LnkT125(){ call_or_link(VV[125],(void **)(void *)&Lnk125);} /* STREAM-NAME */
static object  LnkTLI124(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[124],(void **)(void *)&LnkLI124,first,ap);va_end(ap);return V1;} /* DELETE */
static void LnkT123(){ call_or_link(VV[123],(void **)(void *)&Lnk123);} /* CLOSEDP */
static void LnkT122(){ call_or_link(VV[122],(void **)(void *)&Lnk122);} /* BREAK-LEVEL */
static object  LnkTLI121(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[121],(void **)(void *)&LnkLI121,1,first,ap);va_end(ap);return V1;} /* SHOW-ENVIRONMENT */
static void LnkT120(){ call_or_link(VV[120],(void **)(void *)&Lnk120);} /* BREAK-LOCALS */
static void LnkT119(){ call_or_link(VV[119],(void **)(void *)&Lnk119);} /* BREAK-GO */
static object  LnkTLI118(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[118],(void **)(void *)&LnkLI118,first,ap);va_end(ap);return V1;} /* SEARCH */
static void LnkT117(){ call_or_link(VV[117],(void **)(void *)&Lnk117);} /* COMPILED-FUNCTION-NAME */
static void LnkT116(){ call_or_link(VV[116],(void **)(void *)&Lnk116);} /* IHS-FUN */
static object  LnkTLI115(){return call_proc0(VV[115],(void **)(void *)&LnkLI115);} /* TYPE-ERROR */
static void LnkT114(){ call_or_link(VV[114],(void **)(void *)&Lnk114);} /* IHS-TOP */
static void LnkT113(){ call_or_link(VV[113],(void **)(void *)&Lnk113);} /* VS */
static void LnkT112(){ call_or_link(VV[112],(void **)(void *)&Lnk112);} /* IHS-VS */
static void LnkT111(){ call_or_link(VV[111],(void **)(void *)&Lnk111);} /* BREAK-PREVIOUS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

