
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
	(void) (*Lnk122)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T289;}
	setq(VV[26],(VFUN_NARGS=2,(*(LnkLI123))((V68),symbol_value(VV[26]))));
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
	(void) (*Lnk124)();
	vs_top=sup;
	base[4]= vs_base[0];
	goto T322;
goto T324;
T324:;
	base[4]= Cnil;
goto T322;
T322:;
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
	(void) (*Lnk128)();
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
	goto T413;}
	setq(VV[29],Cnil);
goto T413;
T413:;
	if(((V104))==Cnil){
	goto T417;}
	base[2]= (V101);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk126)();
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
	(void)((VFUN_NARGS=2,(*(LnkLI135))(/* INLINE-ARGS */V115,symbol_value(VV[47]))));
goto T441;
T441:;
	base[1]= car((V110));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk136)();
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
	(void) (*Lnk136)();
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
	(void) (*Lnk138)();
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
	(void) (*Lnk139)();
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
	(void) (*Lnk113)();
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
	(void) (*Lnk140)();
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
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	if(symbol_value(VV[53])!=Cnil){
	goto T617;}
	vs_base=vs_top;
	(void) (*Lnk141)();
	vs_top=sup;
goto T617;
T617:;
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
	if(vs_base>=vs_top){vs_top=sup;goto T620;}
	V166=(base[0]);
	vs_top=sup;
	goto T621;
goto T620;
T620:;
	V166= small_fixnum(1);
goto T621;
T621:;
	{object V167;
	vs_base=vs_top;
	(void) (*Lnk142)();
	vs_top=sup;
	V167= vs_base[0];
	setq(VV[61],make_cons((V166),(V167)));
	if(symbol_value(VV[53])!=Cnil){
	goto T626;}
	vs_base=vs_top;
	(void) (*Lnk141)();
	vs_top=sup;
goto T626;
T626:;
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
	goto T631;}
	setq(VV[58],Cnil);
	if(!(((long)length(symbol_value(VV[53])))>(0))){
	goto T637;}
	goto T636;
goto T637;
T637:;
	setq(VV[53],Cnil);
goto T636;
T636:;
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
goto T631;
T631:;
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
	goto T654;}
	{object V180;
	V180= get((V179),VV[49],Cnil);
	base[2]= (V177);
	base[3]= (V180);
	base[4]= (V179);
	base[5]= (V178);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk144)();
	return;}
goto T654;
T654:;
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
goto T672;
T672:;
	if(!(endp_prop((V185)))){
	goto T673;}
	goto T668;
goto T673;
T673:;
	{register object V187;
	register object V188;
	base[3]= symbol_name((V184));
	base[4]= (V186);
	vs_top=(vs_base=base+3)+2;
	Lintern();
	if(vs_base>=vs_top){vs_top=sup;goto T681;}
	V187= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T682;}
	V188= vs_base[0];
	vs_top=sup;
	goto T683;
goto T681;
T681:;
	V187= Cnil;
goto T682;
T682:;
	V188= Cnil;
goto T683;
T683:;
	if((get((V187),VV[49],Cnil))==Cnil){
	goto T685;}
	base[3]= (V187);
	vs_top=(vs_base=base+3)+1;
	return;
goto T685;
T685:;
	if((V188)!=Cnil){
	goto T677;}
	base[3]= (V187);
	vs_top=(vs_base=base+3)+1;
	Lunintern();
	vs_top=sup;}
goto T677;
T677:;
	V185= cdr((V185));
	V186= car((V185));
	goto T672;}
goto T668;
T668:;
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
	if(vs_base>=vs_top){vs_top=sup;goto T696;}
	V190=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T697;}
	V191=(base[2]);
	vs_top=sup;
	goto T698;
goto T696;
T696:;
	V190= small_fixnum(1);
goto T697;
T697:;
	V191= Cnil;
goto T698;
T698:;
	{object V192;
	V192= Cnil;
	{register object V193;
	V193= get((V189),VV[49],Cnil);
	if(((V193))!=Cnil){
	goto T703;}
	base[3]= (V189);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk145)();
	vs_top=sup;
	V192= vs_base[0];
	if(((V192))==Cnil){
	goto T703;}
	base[3]= (V192);
	base[4]= (V190);
	base[5]= (V191);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk146)();
	return;
goto T703;
T703:;
	if(!(type_of((V193))==t_array||
type_of((V193))==t_vector||
type_of((V193))==t_string||
type_of((V193))==t_bitvector)){
	goto T715;}
	goto T714;
goto T715;
T715:;
	base[3]= Ct;
	base[4]= VV[67];
	base[5]= (V189);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
goto T714;
T714:;
	{object V194;
	V195= aref1((V193),0);
	V194= cdr(/* INLINE-ARGS */V195);
	if(((V191))==Cnil){
	goto T722;}
	V190= make_fixnum((long)(fix((V190)))-(fix((V194))));
goto T722;
T722:;{object V196;
	if((fix((V190)))>=(1)){
	goto T729;}
	V196= Cnil;
	goto T728;
goto T729;
T729:;
	V196= ((fix((V190)))<((long)length((V193)))?Ct:Cnil);
goto T728;
T728:;
	if(V196==Cnil)goto T727;
	goto T726;
goto T727;
T727:;}{object V197;
	base[3]= Ct;
	base[4]= VV[68];
	base[5]= (V189);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	V197= vs_base[0];
	if(V197==Cnil)goto T731;
	goto T726;
goto T731;
T731:;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
goto T726;
T726:;
	if(!(eql((V190),small_fixnum(1)))){
	goto T736;}
	{object V198;
	base[3]= (V189);
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	V198= vs_base[0];
	if(!(type_of((V198))==t_cons)){
	goto T736;}
	if(!((car((V198)))==(VV[69]))){
	goto T736;}
	if((caddr((V198)))==Cnil){
	goto T736;}
	V190= small_fixnum(2);}
goto T736;
T736:;
	{register object V199;
	register object V200;
	V199= make_fixnum((long)((long)length((V193)))-(fix((V190))));
	V200= small_fixnum(0);
goto T752;
T752:;
	if(!(number_compare((V200),(V199))>=0)){
	goto T753;}
	goto T748;
goto T753;
T753:;
	V201= aref1((V193),fixint((V200)));
	if((/* INLINE-ARGS */V201)==(VV[51])){
	goto T757;}
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
goto T757;
T757:;
	V200= one_plus((V200));
	goto T752;}
goto T748;
T748:;
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
	goto T772;}
	vs_base=vs_top;
	(void) (*Lnk141)();
	vs_top=sup;
goto T772;
T772:;{object V204;
	V204= (VFUN_NARGS=2,(*(LnkLI143))(Cnil,symbol_value(VV[53])));
	if(V204==Cnil)goto T775;
	V203= V204;
	goto T774;
goto T775;
T775:;}
	{object V205;
	V205= make_fixnum((long)length(symbol_value(VV[53])));
	(void)((VFUN_NARGS=2,(*(LnkLI135))(Cnil,symbol_value(VV[53]))));
	V203= (V205);}
goto T774;
T774:;
	{object V206;
	{object V207= cdr(cdr(cdr((V202))));
	if((type_of(V207)!=t_cons) && ((V202)!= Cnil))
	 FEwrong_type_argument(Scons,V207);
	V206= (V207->c.c_car);}
	{object V211;
	V212= get(V206,VV[52],Cnil);
	V211= make_cons(V203,V212);
	(void)(sputprop(V206,VV[52],(V211)));}}
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
	{object V213;
	check_arg(1);
	V213=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V214;
	V214= (VFUN_NARGS=4,(*(LnkLI143))(VV[71],(V213),VV[72],Ct));
	if(((V214))==Cnil){
	goto T786;}
	base[1]= (V213);
	base[2]= make_fixnum((long)(1)+(fix((V214))));
	vs_top=(vs_base=base+1)+2;
	Lsubseq();
	return;
goto T786;
T786:;
	base[1]= (V213);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for SHOW-BREAK-POINT	*/

static void L36()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_reserve(VM34);
	{object V215;
	check_arg(1);
	V215=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V216;
	V216= Cnil;
	{register object V217;
	V217= aref1(symbol_value(VV[53]),fixint((V215)));
	if(((V217))==Cnil){
	goto T793;}
	if(!((car((V217)))==(Cnil))){
	goto T795;}
	V216= Ct;
	V217= cdr((V217));
goto T795;
T795:;
	base[1]= Ct;
	base[2]= VV[73];
	base[3]= (V215);
	base[5]= cadr((V217));
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk149)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= caddr((V217));
	base[6]= (V216);
	vs_top=(vs_base=base+1)+6;
	Lformat();
	vs_top=sup;
	{object V218;
	V218= cadddr((V217));
	base[1]= Ct;
	base[2]= VV[74];
	base[4]= (V218);
	base[5]= caddr((V217));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk150)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V218);
	vs_top=(vs_base=base+1)+4;
	Lformat();
	return;}
goto T793;
T793:;
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
	{register object V219;
	register object V220;
	check_arg(2);
	V219=(base[0]);
	V220=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V221;
	register object V222;
	V221= make_fixnum((long)length(symbol_value(VV[53])));
	V222= small_fixnum(0);
goto T819;
T819:;
	if(!(number_compare((V222),(V221))>=0)){
	goto T820;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
goto T820;
T820:;
	{register object x= (V222),V223= (V219);
	while(!endp(V223))
	if(eql(x,V223->c.c_car)){
	goto T825;
	}else V223=V223->c.c_cdr;}
	if(((V219))!=Cnil){
	goto T824;}
goto T825;
T825:;
	{register object V224;
	V224= aref1(symbol_value(VV[53]),fixint((V222)));{object V225;
	V225= symbol_value(VV[53]);
	{object V227= (V220);
	if((V227!= VV[54]))goto T831;
	if(((V224))==Cnil){
	goto T832;}
	{object V229= cdr(cdr(cdr((V224))));
	if((type_of(V229)!=t_cons) && ((V224)!= Cnil))
	 FEwrong_type_argument(Scons,V229);
	V228= (V229->c.c_car);}
	{object V232= cdr(cdr(cdr((V224))));
	if((type_of(V232)!=t_cons) && ((V224)!= Cnil))
	 FEwrong_type_argument(Scons,V232);
	V231= (V232->c.c_car);}
	V230= get(V231,VV[52],Cnil);
	V233= (VFUN_NARGS=2,(*(LnkLI123))((V222),V230));
	(void)(sputprop(V228,VV[52],/* INLINE-ARGS */V233));
goto T832;
T832:;
	V226= Cnil;
	goto T830;
goto T831;
T831:;
	if((V227!= VV[151]))goto T838;
	if(!((car((V224)))==(Cnil))){
	goto T840;}
	V226= cdr((V224));
	goto T830;
goto T840;
T840:;
	V226= Cnil;
	goto T830;
goto T838;
T838:;
	if((V227!= VV[152]))goto T842;
	if(((V224))==Cnil){
	goto T844;}
	if((car((V224)))==(Cnil)){
	goto T844;}
	V226= make_cons(Cnil,(V224));
	goto T830;
goto T844;
T844:;
	V226= (V224);
	goto T830;
goto T842;
T842:;
	if((V227!= VV[153]))goto T848;
	if(((V224))==Cnil){
	goto T849;}
	base[3]= (V222);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk148)();
	vs_top=sup;
	princ_char(10,Cnil);
goto T849;
T849:;
	V226= (V224);
	goto T830;
goto T848;
T848:;
	V226= Cnil;}
goto T830;
T830:;
	(void)(aset1(V225,fixint((V222)),V226));}}
goto T824;
T824:;
	V222= one_plus((V222));
	goto T819;}
	}
}
/*	function definition for COMPLETE-PROP	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_reserve(VM36);
	{object V234;
	object V235;
	object V236;
	object V237;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V234=(base[0]);
	V235=(base[1]);
	V236=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T857;}
	V237=(base[3]);
	vs_top=sup;
	goto T858;
goto T857;
T857:;
	V237= Cnil;
goto T858;
T858:;
	if(!(type_of((V234))==t_symbol)){
	goto T860;}
	if((get((V234),(V236),Cnil))==Cnil){
	goto T860;}
	base[4]= (V234);
	vs_top=(vs_base=base+4)+1;
	Lsymbol_package();
	vs_top=sup;
	V238= vs_base[0];
	base[4]= (V235);
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V239= vs_base[0];
	if(!(equal(V238,V239))){
	goto T860;}
	base[4]= (V234);
	vs_top=(vs_base=base+4)+1;
	return;
goto T860;
T860:;
	{object V240;
	register object V241;
	V240= Cnil;
	V241= Cnil;
	{object V242;
	register object V243;
	register object V244;
	{object V245;
	base[4]= (V235);
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V245= vs_base[0];
	base[4]= (V245);
	vs_top=(vs_base=base+4)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T876;}
	V242= (V245);
	goto T872;
goto T876;
T876:;
	base[4]= coerce_to_string((V245));
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V242= vs_base[0];}
goto T872;
T872:;
	V243= Cnil;
	V244= Cnil;
	{long V246;
	long V247;
	base[4]= (V242);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk154)();
	if(vs_base>=vs_top){vs_top=sup;goto T882;}
	V246= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T883;}
	V247= fix(vs_base[0]);
	vs_top=sup;
	goto T884;
goto T882;
T882:;
	V246= fix(Cnil);
goto T883;
T883:;
	V247= fix(Cnil);
goto T884;
T884:;
	{object V248;
	register object V249;
	V250 = make_fixnum(V247);
	V251 = make_fixnum(V246);
	V248= number_plus(V250,V251);
	V249= small_fixnum(0);
goto T888;
T888:;
	if(!(number_compare((V249),(V248))>=0)){
	goto T889;}
	V243= Cnil;
	goto T871;
goto T889;
T889:;
	V252 = make_fixnum(V247);
	if(!(number_compare((V249),V252)<0)){
	goto T900;}
	base[5]= (V242);
	base[6]= (V249);
	vs_top=(vs_base=base+5)+2;
	siLpackage_internal();
	vs_top=sup;
	V244= vs_base[0];
	goto T898;
goto T900;
T900:;
	base[5]= (V242);
	V253 = make_fixnum(V247);
	base[6]= number_minus((V249),V253);
	vs_top=(vs_base=base+5)+2;
	siLpackage_external();
	vs_top=sup;
	V244= vs_base[0];
goto T898;
T898:;
goto T896;
T896:;
	if(((V244))!=Cnil){
	goto T906;}
	goto T897;
goto T906;
T906:;
	V243= car((V244));
	if((get((V243),(V236),Cnil))==Cnil){
	goto T911;}
	base[5]= (V234);
	base[6]= (V243);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk155)();
	vs_top=sup;
	V254= vs_base[0];
	if(!(eql(V254,small_fixnum(0)))){
	goto T911;}
	if(((V241))==Cnil){
	goto T920;}
	{register object V255;
	register object V256;
	V255= (V241);
	V241= make_cons((V243),Cnil);
	V256= (V241);
	if(type_of((V255))!=t_cons)FEwrong_type_argument(Scons,(V255));
	((V255))->c.c_cdr = (V256);
	goto T911;}
goto T920;
T920:;
	V241= make_cons((V243),Cnil);
	V240= (V241);
goto T911;
T911:;
	V244= cdr((V244));
	goto T896;
goto T897;
T897:;
	goto T894;
goto T894;
T894:;
	V249= one_plus((V249));
	goto T888;}}}
goto T871;
T871:;
	if(((V237))==Cnil){
	goto T935;}
	base[4]= (V240);
	vs_top=(vs_base=base+4)+1;
	return;
goto T935;
T935:;
	if(!(((long)length((V240)))>(1))){
	goto T938;}
	base[4]= Ct;
	base[5]= VV[75];
	base[6]= (V236);
	base[7]= (V240);
	vs_top=(vs_base=base+4)+4;
	Lformat();
	vs_top=sup;
	goto T933;
goto T938;
T938:;
	if(((V240))!=Cnil){
	goto T945;}
	base[4]= Ct;
	base[5]= VV[76];
	base[6]= (V234);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T933;
goto T945;
T945:;
	base[4]= car((V240));
	vs_top=(vs_base=base+4)+1;
	return;
goto T933;
T933:;
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
	{register object V257;
	object V258;
	check_arg(2);
	V257=(base[0]);
	V258=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V259;
	V259= reverse((V258));
goto T953;
T953:;
	if(!(type_of((V259))==t_cons)){
	goto T955;}
	base[2]= symbol_value(VV[77]);
	vs_top=(vs_base=base+2)+1;
	Lfill_pointer();
	vs_top=sup;
	V260= vs_base[0];
	if(!((fix(V260))>(fix((V257))))){
	goto T954;}
goto T955;
T955:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T954;
T954:;{object V261;
	if(type_of(car((V259)))==t_cons){
	goto T965;}
	V261= Cnil;
	goto T964;
goto T965;
T965:;
	{object V262= cdar((V259));
	V261= (type_of(V262)==t_cons||(V262)==Cnil?Ct:Cnil);}
goto T964;
T964:;
	if(V261==Cnil)goto T963;
	goto T962;
goto T963;
T963:;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T962;
T962:;
	base[2]= symbol_value(VV[77]);
	base[3]= VV[78];
	base[4]= caar((V259));
	base[5]= cadar((V259));
	base[6]= cdr((V259));
	vs_top=(vs_base=base+2)+5;
	Lformat();
	vs_top=sup;
	V259= cdr((V259));
	goto T953;}
	}
}
/*	function definition for APPLY-DISPLAY-FUN	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_reserve(VM38);
	bds_check;
	{object V263;
	object V264;
	object V265;
	check_arg(3);
	V263=(base[0]);
	V264=(base[1]);
	V265=(base[2]);
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
	(type_of((V263)) == t_sfun ?(*(((V263))->sfn.sfn_self)):
	(fcall.fun=((V263)),fcall.argd=2,fcalln))((V264),(V265))));
	base[8]= symbol_value(VV[77]);
	vs_top=(vs_base=base+8)+1;
	Lfill_pointer();
	vs_top=sup;
	V266= vs_base[0];
	if(!((fix(V266))>(fix((V264))))){
	goto T984;}
	base[8]= symbol_value(VV[77]);
	base[9]= (V264);
	vs_top=(vs_base=base+8)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[8]= symbol_value(VV[77]);
	base[9]= VV[83];
	vs_top=(vs_base=base+8)+2;
	Lformat();
	vs_top=sup;
goto T984;
T984:;
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
	{object V267;
	object V268;
	check_arg(2);
	V267=(base[0]);
	V268=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V269;
	V269= (VFUN_NARGS=2,(*(LnkLI143))((V267),(V268)));
	if(((V269))==Cnil){
	goto T998;}
	V270= aref1((V268),0);
	base[2]= make_fixnum((long)(fix((V269)))+(fix(cdr(/* INLINE-ARGS */V270))));
	vs_top=(vs_base=base+2)+1;
	return;
goto T998;
T998:;
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
	{object V271;
	check_arg(1);
	V271=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V272;
	V272= (V271);
goto T1001;
T1001:;
	if(!((fix((V272)))<(fix(symbol_value(VV[85]))))){
	goto T1002;}
	{register object V273;
	V273= Cnil;
	(void)((MVloc[(0)]=((V272))));
	base[1]= (V273);
	vs_top=(vs_base=base+1)+1;
	return;}
goto T1002;
T1002:;
	{register object V274;
	base[1]= (V272);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk140)();
	vs_top=sup;
	V274= vs_base[0];
	{register object V275;
	base[1]= (V274);
	vs_top=(vs_base=base+1)+1;
	Lspecial_form_p();
	vs_top=sup;
	V275= vs_base[0];
	if(((V275))==Cnil){
	goto T1013;}
	goto T1007;
goto T1013;
T1013:;
	{register object V276;
	V276= get((V274),VV[86],Cnil);
	if(((V276))==Cnil){
	goto T1017;}
	goto T1007;
goto T1017;
T1017:;
	base[1]= (V274);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1007;}
	{register object V277;
	V277= (V274);
	(void)((MVloc[(0)]=((V272))));
	base[1]= (V277);
	vs_top=(vs_base=base+1)+1;
	return;}}}}
goto T1007;
T1007:;
	V272= make_fixnum((long)(fix((V272)))-(1));
	goto T1001;}
	}
}
/*	function definition for DBL-WHAT-FRAME	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_reserve(VM41);
	{register long V278;
	check_arg(1);
	V278=fix(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register long V279;
	register long V280;
	register object V281;
	V279= fix(symbol_value(VV[87]));
	V280= 0;
	V281= Cnil;
goto T1030;
T1030:;
	{register object V282;
	base[1]= make_fixnum(V279);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk156)();
	vs_top=sup;
	V281= vs_base[0];
	V282= (V281);
	V279= fix((MVloc[(0)]));}
	if(!((V279)<=(V278))){
	goto T1038;}
	base[1]= make_fixnum(V280);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1038;
T1038:;
	V280= (long)(V280)+(1);
	V279= (long)(V279)-(1);
	goto T1030;}
	}
}
/*	function definition for DBL-UP	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_reserve(VM42);
	{register object V283;
	object V284;
	check_arg(2);
	V283=(base[0]);
	V284=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V285;
	object V286;
	object V287;
	object V288;
	object V289;
	V285= Cnil;
	V286= Cnil;
	V287= Cnil;
	V288= Cnil;
	V289= Cnil;
	base[2]= (V284);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk157)();
	vs_top=sup;
	V285= vs_base[0];
	if(!((fix((V283)))>=(0))){
	goto T1054;}
	{object V290;
	base[2]= (V283);
	base[3]= (V284);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk158)();
	vs_top=sup;
	setq(VV[9],vs_base[0]);
	V290= symbol_value(VV[9]);
	V283= (MVloc[(0)]);
	V286= (MVloc[(1)]);
	V287= (MVloc[(2)]);
	V288= (MVloc[(3)]);
	V289= (MVloc[(4)]);}
	(void)((*(LnkLI159))());
	base[2]= make_fixnum((long)(fix((V285)))+(fix((V283))));
	base[3]= Ct;
	base[4]= symbol_value(VV[9]);
	base[5]= (V286);
	base[6]= (V287);
	base[7]= (V288);
	base[8]= (V289);
	vs_top=(vs_base=base+2)+7;
	(void) (*Lnk160)();
	return;
goto T1054;
T1054:;
	V283= make_fixnum((long)(fix((V285)))+(fix((V283))));
	if(!((fix((V283)))>=(0))){
	goto T1082;}
	goto T1081;
goto T1082;
T1082:;
	V283= small_fixnum(0);
goto T1081;
T1081:;
	V284= symbol_value(VV[87]);
	goto TTL;}
	}
}
/*	function definition for NEXT-STACK-FRAME	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_reserve(VM43);
	{object V291;
	check_arg(1);
	V291=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V292;
	register object V293;
	register object V294;
	register object V295;
	object V296;
	V292= Cnil;
	V293= Cnil;
	V294= Cnil;
	V295= Cnil;
	V296= Cnil;
	if(!((fix((V291)))<(fix(symbol_value(VV[85]))))){
	goto T1094;}
	(void)((MVloc[(0)]=(Cnil)));
	(void)((MVloc[(1)]=(Cnil)));
	(void)((MVloc[(2)]=(Cnil)));
	(void)((MVloc[(3)]=(Cnil)));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T1094;
T1094:;
	{object V298;
	V298= Cnil;
	{object V299;
	base[1]= (V291);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk156)();
	vs_top=sup;
	V298= vs_base[0];
	V299= (V298);
	V294= (MVloc[(0)]);}
	V296= (V298);
	{object V300;
	V292= get((V298),VV[49],Cnil);
	if(((V292))!=Cnil){
	goto T1109;}
	V300= Cnil;
	goto T1108;
goto T1109;
T1109:;
	{register object V301;
	register object V302;
	V301= make_fixnum((long)(fix((V291)))+(1));
	V302= Cnil;
goto T1114;
T1114:;
	if(!(number_compare((V301),(V294))<=0)){
	goto T1115;}
	V300= Cnil;
	goto T1108;
goto T1115;
T1115:;
	base[1]= (V301);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V302= vs_base[0];
	base[2]= (V301);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= (V292);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk161)();
	vs_top=sup;
	V293= vs_base[0];
	if(((V293))==Cnil){
	goto T1122;}
	{register object V303;
	V303= (V294);
	(void)((MVloc[(0)]=((V298))));
	(void)((MVloc[(1)]=((V293))));
	V304= aref1((V292),0);
	(void)((MVloc[(2)]=(car(/* INLINE-ARGS */V304))));
	base[2]= (V301);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V295= vs_base[0];
	base[1]= (V295);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V305= vs_base[0];
	base[1]= one_plus((V295));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V306= vs_base[0];
	base[1]= number_plus((V295),small_fixnum(2));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V307= vs_base[0];
	V308= list(3,V305,V306,V307);
	(void)((MVloc[(3)]=(/* INLINE-ARGS */V308)));
	base[1]= (V303);
	vs_top=(vs_base=base+1)+1;
	return;}
goto T1122;
T1122:;
	V301= make_fixnum((long)(fix((V301)))-(1));
	goto T1114;}
goto T1108;
T1108:;
	if(((V300))==Cnil){
	goto T1145;}
	base[1]= (V300);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1145;
T1145:;
	base[1]= (V296);
	vs_top=(vs_base=base+1)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1148;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T1148;
T1148:;
	{object V309;
	V309= get((V296),VV[86],Cnil);
	if(((V309))==Cnil){
	goto T1153;}
	base[1]= (V309);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1153;
T1153:;
	base[1]= (V296);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1156;}
	(void)((MVloc[(0)]=((V296))));
	(void)((MVloc[(1)]=(Cnil)));
	(void)((MVloc[(2)]=(Cnil)));
	base[1]= (V294);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk162)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1165;}
	V311= Cnil;
	goto T1163;
goto T1165;
T1165:;
	{object V312;
	base[1]= (V294);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V312= vs_base[0];
	base[1]= (V312);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V313= vs_base[0];
	base[1]= one_plus((V312));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V314= vs_base[0];
	base[1]= make_fixnum((long)(fix((V312)))+(2));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V315= vs_base[0];
	V311= list(3,V313,V314,V315);}
goto T1163;
T1163:;
	(void)((MVloc[(3)]=(V311)));
	base[1]= V294;
	vs_top=(vs_base=base+1)+1;
	return;
goto T1156;
T1156:;
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
	{register object V316;
	register object V317;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V316=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1176;}
	V317=(base[1]);
	vs_top=sup;
	goto T1177;
goto T1176;
T1176:;
	V317= symbol_value(VV[87]);
goto T1177;
T1177:;
	{register object V318;
	object V319;
	object V320;
	object V321;
	register object V322;
	V318= Cnil;
	V319= Cnil;
	V320= Cnil;
	V321= Cnil;
	V322= Cnil;
	if(!((fix((V316)))>=(0))){
	goto T1185;}
	goto T1184;
goto T1185;
T1185:;
	V316= small_fixnum(0);
goto T1184;
T1184:;
	{object V323;
	register object V324;
	V323= make_fixnum((long)(fix((V316)))+(1));
	V324= small_fixnum(0);
goto T1192;
T1192:;
	if(!(number_compare((V324),(V323))>=0)){
	goto T1193;}
	goto T1188;
goto T1193;
T1193:;
	base[3]= (V317);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk163)();
	vs_top=sup;
	V322= vs_base[0];
	if(((V322))==Cnil){
	goto T1202;}
	{register object V325;
	V317= (V322);
	V325= (V317);
	V318= (MVloc[(0)]);
	V319= (MVloc[(1)]);
	V320= (MVloc[(2)]);
	V321= (MVloc[(3)]);}
	V317= make_fixnum((long)(fix((V322)))-(1));
	goto T1200;
goto T1202;
T1202:;
	V316= make_fixnum((long)(fix((V324)))-(1));
	goto T1188;
goto T1200;
T1200:;
	V324= one_plus((V324));
	goto T1192;}
goto T1188;
T1188:;
	V317= make_fixnum((long)(fix((V317)))+(1));
	base[2]= (V317);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk140)();
	vs_top=sup;
	V318= vs_base[0];
	(void)((MVloc[(0)]=((V316))));
	(void)((MVloc[(1)]=((V318))));
	(void)((MVloc[(2)]=((V319))));
	(void)((MVloc[(3)]=((V320))));
	(void)((MVloc[(4)]=((V321))));
	base[2]= V317;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for DBL-BACKTRACE	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_reserve(VM45);
	{object V327;
	register object V328;
	if(vs_top-vs_base>2) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T1230;}
	V327=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1231;}
	V328=(base[1]);
	vs_top=sup;
	goto T1232;
goto T1230;
T1230:;
	V327= small_fixnum(1000);
goto T1231;
T1231:;
	V328= symbol_value(VV[87]);
goto T1232;
T1232:;
	{register object V329;
	register object V330;
	register object V331;
	register object V332;
	register object V333;
	V329= Cnil;
	V330= Cnil;
	V331= Cnil;
	V332= Cnil;
	V333= small_fixnum(0);
goto T1242;
T1242:;
	{object V334;
	base[2]= (V328);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk163)();
	vs_top=sup;
	V328= vs_base[0];
	V334= (V328);
	V329= (MVloc[(0)]);
	V331= (MVloc[(1)]);
	V330= (MVloc[(2)]);
	V332= (MVloc[(3)]);}
	if((V329)!=Cnil){
	goto T1256;}
	goto T1240;
goto T1256;
T1256:;
	base[2]= (V333);
	base[3]= Cnil;
	base[4]= (V328);
	base[5]= (V329);
	base[6]= (V331);
	base[7]= (V330);
	base[8]= (V332);
	vs_top=(vs_base=base+2)+7;
	(void) (*Lnk160)();
	vs_top=sup;
	V333= number_plus((V333),small_fixnum(1));
	if(!((fix((V333)))>=(fix((V327))))){
	goto T1267;}
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	vs_top=sup;
	goto T1240;
goto T1267;
T1267:;
	V328= make_fixnum((long)(fix((V328)))-(1));
	goto T1242;
goto T1240;
T1240:;
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
	{register object V335;
	object V336;
	check_arg(2);
	V335=(base[0]);
	V336=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V337;
	register object V338;
	base[4]= (V336);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V337= vs_base[0];
	base[4]= one_plus((V336));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V339= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk164)();
	vs_top=sup;
	V340= vs_base[0];
	V338= (number_compare(V339,V340)<=0?(V339):V340);
	base[4]= symbol_value(VV[77]);
	base[5]= VV[88];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	{register object V341;
	register object V342;
	base[4]= (V336);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk140)();
	vs_top=sup;
	V343= vs_base[0];
	V342= get(V343,VV[14],Cnil);
	V341= (V337);
goto T1285;
T1285:;
	if((fix((V341)))>=(fix((V338)))){
	goto T1287;}
	base[4]= symbol_value(VV[77]);
	vs_top=(vs_base=base+4)+1;
	Lfill_pointer();
	vs_top=sup;
	V344= vs_base[0];
	if(!((fix(V344))>(fix((V335))))){
	goto T1286;}
goto T1287;
T1287:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
goto T1286;
T1286:;
	base[4]= symbol_value(VV[77]);
	base[5]= VV[89];{object V345;
	V345= car((V342));
	if(V345==Cnil)goto T1298;
	base[6]= V345;
	goto T1297;
goto T1298;
T1298:;}
	base[6]= VV[90];
goto T1297;
T1297:;
	if((car((V342)))!=Cnil){
	goto T1302;}
	base[7]= make_fixnum((long)(fix((V341)))-(fix((V337))));
	goto T1300;
goto T1302;
T1302:;
	base[7]= Cnil;
goto T1300;
T1300:;
	base[9]= (V341);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	base[8]= vs_base[0];
	V341= make_fixnum((long)(fix((V341)))+(1));
	base[9]= ((fix((V341)))<(fix((V338)))?Ct:Cnil);
	vs_top=(vs_base=base+4)+6;
	Lformat();
	vs_top=sup;
	V342= cdr((V342));
	goto T1285;}}
	}
}
/*	function definition for COMPUTING-ARGS-P	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_reserve(VM47);
	{object V346;
	check_arg(1);
	V346=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	base[1]= (V346);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V347= vs_base[0];
	if(type_of(V347)==t_cons){
	goto T1311;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T1311;
T1311:;
	if(number_compare((V346),small_fixnum(3))>0){
	goto T1315;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T1315;
T1315:;
	base[1]= (V346);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V350= vs_base[0];
	{register object x= car(V350),V349= VV[91];
	while(!endp(V349))
	if(eql(x,V349->c.c_car)){
	V348= V349;
	goto T1317;
	}else V349=V349->c.c_cdr;
	V348= Cnil;}
goto T1317;
T1317:;
	base[1]= ((V348)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for PRINT-STACK-FRAME	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_reserve(VM48);
	{object V351;
	object V352;
	register object V353;
	object V354;
	object V355;
	object V356;
	if(vs_top-vs_base<4) too_few_arguments();
	if(vs_top-vs_base>6) too_many_arguments();
	V351=(base[0]);
	V352=(base[1]);
	V353=(base[2]);
	V354=(base[3]);
	vs_base=vs_base+4;
	if(vs_base>=vs_top){vs_top=sup;goto T1320;}
	V355=(base[4]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1321;}
	V356=(base[5]);
	vs_top=sup;
	goto T1322;
goto T1320;
T1320:;
	V355= Cnil;
goto T1321;
T1321:;
	V356= Cnil;
goto T1322;
T1322:;
	if(((V352))==Cnil){
	goto T1325;}
	if(((V355))==Cnil){
	goto T1325;}
	base[6]= symbol_value(VV[1]);
	base[7]= VV[92];
	base[8]= (V356);
	base[9]= (V355);
	vs_top=(vs_base=base+6)+4;
	Lformat();
	vs_top=sup;
goto T1325;
T1325:;
	{object V357;
	base[6]= (V353);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk165)();
	vs_top=sup;
	V357= vs_base[0];
	base[6]= symbol_value(VV[1]);
	base[7]= VV[93];
	base[8]= (V351);
	if((V357)==Cnil){
	base[9]= Cnil;
	goto T1340;}
	base[9]= VV[94];
goto T1340;
T1340:;
	base[10]= (V354);
	base[12]= (V353);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk162)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1344;}
	base[12]= VV[95];
	base[13]= small_fixnum(80);
	base[16]= (V353);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	base[15]= vs_base[0];
	vs_top=(vs_base=base+15)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V358= vs_base[0];
	base[14]= car(V358);
	vs_top=(vs_base=base+12)+3;
	(void) (*Lnk166)();
	vs_top=sup;
	base[11]= vs_base[0];
	goto T1342;
goto T1344;
T1344:;
	base[12]= VV[96];
	base[13]= small_fixnum(80);
	base[14]= (V353);
	vs_top=(vs_base=base+12)+3;
	(void) (*Lnk166)();
	vs_top=sup;
	base[11]= vs_base[0];
goto T1342;
T1342:;
	vs_top=(vs_base=base+6)+6;
	Lformat();
	vs_top=sup;
	if(((V356))==Cnil){
	goto T1356;}
	base[6]= symbol_value(VV[1]);
	base[7]= VV[97];
	base[8]= (V356);
	base[9]= (V355);
	vs_top=(vs_base=base+6)+4;
	Lformat();
	vs_top=sup;
goto T1356;
T1356:;
	base[6]= symbol_value(VV[1]);
	base[7]= VV[98];
	base[8]= (V353);
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
	{object V359;
	object V360;
	object V361;
	check_arg(3);
	V359=(base[0]);
	V360=(base[1]);
	V361=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	V362= aref1((V360),fixint((V361)));
	V363= aref1((V360),0);
	V364= car(/* INLINE-ARGS */V363);
	V365= aref1((V360),0);
	V366 = make_fixnum((long)(fix(cdr(/* INLINE-ARGS */V365)))+(fix((V361))));
	base[3]= list(4,/* INLINE-ARGS */V362,/* INLINE-ARGS */V364,V366,(V359));
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for RELATIVE-LINE	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_reserve(VM50);
	{object V367;
	object V368;
	check_arg(2);
	V367=(base[0]);
	V368=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V369;
	V369= get((V367),VV[49],Cnil);
	if(((V369))==Cnil){
	goto T1368;}
	V370= aref1((V369),0);
	base[2]= make_fixnum((long)(fix((V368)))-(fix(cdr(/* INLINE-ARGS */V370))));
	vs_top=(vs_base=base+2)+1;
	return;
goto T1368;
T1368:;
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
	{register object V371;
	object V372;
	check_arg(2);
	V371=(base[0]);
	V372=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	bds_bind(VV[99],Cnil);
	bds_bind(VV[100],symbol_value(VV[101]));
	bds_bind(VV[1],symbol_value(VV[101]));
	if(!(type_of((V371))==t_symbol)){
	goto T1370;}
	base[5]= (V371);
	vs_top=(vs_base=base+5)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1370;}
	{register object x= (V371),V373= car((V372));
	while(!endp(V373))
	if(type_of(V373->c.c_car)==t_cons &&eql(x,V373->c.c_car->c.c_car)){
	goto T1370;
	}else V373=V373->c.c_cdr;}
	base[5]= VV[102];
	vs_top=(vs_base=base+5)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
goto T1370;
T1370:;
	{object V374;
	object V375;
	V376= list(2,VV[104],(V371));
	base[5]= list(5,VV[103],/* INLINE-ARGS */V376,Cnil,Cnil,list(2,VV[104],(V372)));
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk167)();
	if(vs_base>=vs_top){vs_top=sup;goto T1380;}
	V374= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1381;}
	V375= vs_base[0];
	vs_top=sup;
	goto T1382;
goto T1380;
T1380:;
	V374= Cnil;
goto T1381;
T1381:;
	V375= Cnil;
goto T1382;
T1382:;
	if(((V374))==Cnil){
	goto T1384;}
	base[5]= VV[102];
	vs_top=(vs_base=base+5)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
goto T1384;
T1384:;
	base[5]= (V375);
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
	{register object V377;
	register object V378;
	check_arg(2);
	V377=(base[0]);
	V378=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V379;
	V379= symbol_value(VV[9]);
	setq(VV[105],Cnil);
	setq(VV[9],(V379));
	if(((V378))==Cnil){
	goto T1393;}
	setq(VV[0],(V378));
	goto T1391;
goto T1393;
T1393:;
	base[3]= (V379);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V380= vs_base[0];
	(void)(make_cons(V380,Cnil));
goto T1391;
T1391:;
	if(((V377))==Cnil){
	goto T1399;}
	base[2]= symbol_value(VV[1]);
	base[3]= VV[106];
	base[4]= cadr((V377));
	base[5]= caddr((V377));
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
	base[2]= symbol_value(VV[1]);
	base[3]= VV[107];
	base[4]= cadr((V377));
	base[5]= caddr((V377));
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
goto T1399;
T1399:;
	{register object V381;
	register object V382;
	V381= symbol_value(VV[108]);
	V382= car((V381));
goto T1414;
T1414:;
	if(!(endp_prop((V381)))){
	goto T1415;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
goto T1415;
T1415:;
	{register object V383;
	base[3]= (V382);
	base[4]= (V378);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk168)();
	vs_top=sup;
	V383= vs_base[0];
	if(!(((V383))==(VV[102]))){
	goto T1423;}
	goto T1419;
goto T1423;
T1423:;
	base[3]= Ct;
	base[4]= VV[109];
	base[5]= (V382);
	base[6]= (V383);
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;}
goto T1419;
T1419:;
	V381= cdr((V381));
	V382= car((V381));
	goto T1414;}}
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

