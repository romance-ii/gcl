
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
	(void) (*Lnk141)();
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
	(void) (*Lnk142)();
	vs_top=sup;
	V168= vs_base[0];
	setq(VV[61],make_cons((V167),(V168)));
	if(symbol_value(VV[53])!=Cnil){
	goto T629;}
	vs_base=vs_top;
	(void) (*Lnk141)();
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
	V173= (VFUN_NARGS=2,(*(LnkLI143))((V169),(V170)));
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
	(void) (*Lnk138)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V172);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk121)();
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
	(void) (*Lnk142)();
	vs_top=sup;
	V176= vs_base[0];
	{object V177;
	V177= get((V176),VV[49],Cnil);
	base[2]= (V174);
	base[3]= (V177);
	base[4]= (V176);
	base[5]= (V175);
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
	(void) (*Lnk142)();
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
	(void) (*Lnk144)();
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
	V184= (VFUN_NARGS=4,(*(LnkLI143))((V182),symbol_value(VV[53]),VV[63],VV[64]));
	base[2]= Ct;
	base[3]= VV[65];
	base[4]= (V184);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[2]= aref1(symbol_value(VV[53]),fixint((V184)));
	base[3]= (V183);
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
	(void) (*Lnk145)();
	vs_top=sup;
	V193= vs_base[0];
	if(((V193))==Cnil){
	goto T706;}
	base[3]= (V193);
	base[4]= (V191);
	base[5]= (V192);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk146)();
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
	(void) (*Lnk141)();
	vs_top=sup;
goto T775;
T775:;{object V205;
	V205= (VFUN_NARGS=2,(*(LnkLI143))(Cnil,symbol_value(VV[53])));
	if(V205==Cnil)goto T778;
	V204= V205;
	goto T777;
goto T778;
T778:;}
	{object V206;
	V206= make_fixnum((long)length(symbol_value(VV[53])));
	(void)((VFUN_NARGS=2,(*(LnkLI135))(Cnil,symbol_value(VV[53]))));
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
	V215= (VFUN_NARGS=4,(*(LnkLI143))(VV[71],(V214),VV[72],Ct));
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
	(void) (*Lnk149)();
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
	(void) (*Lnk150)();
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
	V234= (VFUN_NARGS=2,(*(LnkLI123))((V223),V231));
	(void)(sputprop(V229,VV[52],/* INLINE-ARGS */V234));
goto T835;
T835:;
	V227= Cnil;
	goto T833;
goto T834;
T834:;
	if((V228!= VV[151]))goto T841;
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
	if((V228!= VV[152]))goto T845;
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
	if((V228!= VV[153]))goto T851;
	if(((V225))==Cnil){
	goto T852;}
	base[3]= (V223);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk148)();
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
	{long V247;
	long V248;
	base[4]= (V243);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk154)();
	if(vs_base>=vs_top){vs_top=sup;goto T885;}
	V247= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T886;}
	V248= fix(vs_base[0]);
	vs_top=sup;
	goto T887;
goto T885;
T885:;
	V247= fix(Cnil);
goto T886;
T886:;
	V248= fix(Cnil);
goto T887;
T887:;
	{object V249;
	register object V250;
	V251 = make_fixnum(V248);
	V252 = make_fixnum(V247);
	V249= number_plus(V251,V252);
	V250= small_fixnum(0);
goto T891;
T891:;
	if(!(number_compare((V250),(V249))>=0)){
	goto T892;}
	V244= Cnil;
	goto T874;
goto T892;
T892:;
	V253 = make_fixnum(V248);
	if(!(number_compare((V250),V253)<0)){
	goto T903;}
	base[5]= (V243);
	base[6]= (V250);
	vs_top=(vs_base=base+5)+2;
	siLpackage_internal();
	vs_top=sup;
	V245= vs_base[0];
	goto T901;
goto T903;
T903:;
	base[5]= (V243);
	V254 = make_fixnum(V248);
	base[6]= number_minus((V250),V254);
	vs_top=(vs_base=base+5)+2;
	siLpackage_external();
	vs_top=sup;
	V245= vs_base[0];
goto T901;
T901:;
goto T899;
T899:;
	if(((V245))!=Cnil){
	goto T909;}
	goto T900;
goto T909;
T909:;
	V244= car((V245));
	if((get((V244),(V237),Cnil))==Cnil){
	goto T914;}
	base[5]= (V235);
	base[6]= (V244);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk155)();
	vs_top=sup;
	V255= vs_base[0];
	if(!(eql(V255,small_fixnum(0)))){
	goto T914;}
	if(((V242))==Cnil){
	goto T923;}
	{register object V256;
	register object V257;
	V256= (V242);
	V242= make_cons((V244),Cnil);
	V257= (V242);
	if(type_of((V256))!=t_cons)FEwrong_type_argument(Scons,(V256));
	((V256))->c.c_cdr = (V257);
	goto T914;}
goto T923;
T923:;
	V242= make_cons((V244),Cnil);
	V241= (V242);
goto T914;
T914:;
	V245= cdr((V245));
	goto T899;
goto T900;
T900:;
	goto T897;
goto T897;
T897:;
	V250= one_plus((V250));
	goto T891;}}}
goto T874;
T874:;
	if(((V238))==Cnil){
	goto T938;}
	base[4]= (V241);
	vs_top=(vs_base=base+4)+1;
	return;
goto T938;
T938:;
	if(!(((long)length((V241)))>(1))){
	goto T941;}
	base[4]= Ct;
	base[5]= VV[75];
	base[6]= (V237);
	base[7]= (V241);
	vs_top=(vs_base=base+4)+4;
	Lformat();
	vs_top=sup;
	goto T936;
goto T941;
T941:;
	if(((V241))!=Cnil){
	goto T948;}
	base[4]= Ct;
	base[5]= VV[76];
	base[6]= (V235);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T936;
goto T948;
T948:;
	base[4]= car((V241));
	vs_top=(vs_base=base+4)+1;
	return;
goto T936;
T936:;
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
	{register object V258;
	object V259;
	check_arg(2);
	V258=(base[0]);
	V259=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V260;
	V260= reverse((V259));
goto T956;
T956:;
	if(!(type_of((V260))==t_cons)){
	goto T958;}
	base[2]= symbol_value(VV[77]);
	vs_top=(vs_base=base+2)+1;
	Lfill_pointer();
	vs_top=sup;
	V261= vs_base[0];
	if(!((fix(V261))>(fix((V258))))){
	goto T957;}
goto T958;
T958:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T957;
T957:;{object V262;
	if(type_of(car((V260)))==t_cons){
	goto T968;}
	V262= Cnil;
	goto T967;
goto T968;
T968:;
	{object V263= cdar((V260));
	V262= (type_of(V263)==t_cons||(V263)==Cnil?Ct:Cnil);}
goto T967;
T967:;
	if(V262==Cnil)goto T966;
	goto T965;
goto T966;
T966:;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T965;
T965:;
	base[2]= symbol_value(VV[77]);
	base[3]= VV[78];
	base[4]= caar((V260));
	base[5]= cadar((V260));
	base[6]= cdr((V260));
	vs_top=(vs_base=base+2)+5;
	Lformat();
	vs_top=sup;
	V260= cdr((V260));
	goto T956;}
	}
}
/*	function definition for APPLY-DISPLAY-FUN	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_reserve(VM38);
	bds_check;
	{object V264;
	object V265;
	object V266;
	check_arg(3);
	V264=(base[0]);
	V265=(base[1]);
	V266=(base[2]);
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
	(type_of((V264)) == t_sfun ?(*(((V264))->sfn.sfn_self)):
	(fcall.fun=((V264)),fcall.argd=2,fcalln))((V265),(V266))));
	base[8]= symbol_value(VV[77]);
	vs_top=(vs_base=base+8)+1;
	Lfill_pointer();
	vs_top=sup;
	V267= vs_base[0];
	if(!((fix(V267))>(fix((V265))))){
	goto T987;}
	base[8]= symbol_value(VV[77]);
	base[9]= (V265);
	vs_top=(vs_base=base+8)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[8]= symbol_value(VV[77]);
	base[9]= VV[83];
	vs_top=(vs_base=base+8)+2;
	Lformat();
	vs_top=sup;
goto T987;
T987:;
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
	{object V268;
	object V269;
	check_arg(2);
	V268=(base[0]);
	V269=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V270;
	V270= (VFUN_NARGS=2,(*(LnkLI143))((V268),(V269)));
	if(((V270))==Cnil){
	goto T1001;}
	V271= aref1((V269),0);
	base[2]= make_fixnum((long)(fix((V270)))+(fix(cdr(/* INLINE-ARGS */V271))));
	vs_top=(vs_base=base+2)+1;
	return;
goto T1001;
T1001:;
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
	{object V272;
	check_arg(1);
	V272=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V273;
	V273= (V272);
goto T1004;
T1004:;
	if(!((fix((V273)))<(fix(symbol_value(VV[85]))))){
	goto T1005;}
	{register object V274;
	V274= Cnil;
	(void)((MVloc[(0)]=((V273))));
	base[1]= (V274);
	vs_top=(vs_base=base+1)+1;
	return;}
goto T1005;
T1005:;
	{register object V275;
	base[1]= (V273);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk140)();
	vs_top=sup;
	V275= vs_base[0];
	{register object V276;
	base[1]= (V275);
	vs_top=(vs_base=base+1)+1;
	Lspecial_form_p();
	vs_top=sup;
	V276= vs_base[0];
	if(((V276))==Cnil){
	goto T1016;}
	goto T1010;
goto T1016;
T1016:;
	{register object V277;
	V277= get((V275),VV[86],Cnil);
	if(((V277))==Cnil){
	goto T1020;}
	goto T1010;
goto T1020;
T1020:;
	base[1]= (V275);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1010;}
	{register object V278;
	V278= (V275);
	(void)((MVloc[(0)]=((V273))));
	base[1]= (V278);
	vs_top=(vs_base=base+1)+1;
	return;}}}}
goto T1010;
T1010:;
	V273= make_fixnum((long)(fix((V273)))-(1));
	goto T1004;}
	}
}
/*	function definition for DBL-WHAT-FRAME	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_reserve(VM41);
	{register long V279;
	check_arg(1);
	V279=fix(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register long V280;
	register long V281;
	register object V282;
	V280= fix(symbol_value(VV[87]));
	V281= 0;
	V282= Cnil;
goto T1033;
T1033:;
	{register object V283;
	base[1]= make_fixnum(V280);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk156)();
	vs_top=sup;
	V282= vs_base[0];
	V283= (V282);
	V280= fix((MVloc[(0)]));}
	if(!((V280)<=(V279))){
	goto T1041;}
	base[1]= make_fixnum(V281);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1041;
T1041:;
	V281= (long)(V281)+(1);
	V280= (long)(V280)-(1);
	goto T1033;}
	}
}
/*	function definition for DBL-UP	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_reserve(VM42);
	{register object V284;
	object V285;
	check_arg(2);
	V284=(base[0]);
	V285=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V286;
	object V287;
	object V288;
	object V289;
	object V290;
	V286= Cnil;
	V287= Cnil;
	V288= Cnil;
	V289= Cnil;
	V290= Cnil;
	base[2]= (V285);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk157)();
	vs_top=sup;
	V286= vs_base[0];
	if(!((fix((V284)))>=(0))){
	goto T1057;}
	{object V291;
	base[2]= (V284);
	base[3]= (V285);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk158)();
	vs_top=sup;
	setq(VV[9],vs_base[0]);
	V291= symbol_value(VV[9]);
	V284= (MVloc[(0)]);
	V287= (MVloc[(1)]);
	V288= (MVloc[(2)]);
	V289= (MVloc[(3)]);
	V290= (MVloc[(4)]);}
	(void)((*(LnkLI159))());
	base[2]= make_fixnum((long)(fix((V286)))+(fix((V284))));
	base[3]= Ct;
	base[4]= symbol_value(VV[9]);
	base[5]= (V287);
	base[6]= (V288);
	base[7]= (V289);
	base[8]= (V290);
	vs_top=(vs_base=base+2)+7;
	(void) (*Lnk160)();
	return;
goto T1057;
T1057:;
	V284= make_fixnum((long)(fix((V286)))+(fix((V284))));
	if(!((fix((V284)))>=(0))){
	goto T1085;}
	goto T1084;
goto T1085;
T1085:;
	V284= small_fixnum(0);
goto T1084;
T1084:;
	V285= symbol_value(VV[87]);
	goto TTL;}
	}
}
/*	function definition for NEXT-STACK-FRAME	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_reserve(VM43);
	{object V292;
	check_arg(1);
	V292=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V293;
	register object V294;
	register object V295;
	register object V296;
	object V297;
	V293= Cnil;
	V294= Cnil;
	V295= Cnil;
	V296= Cnil;
	V297= Cnil;
	if(!((fix((V292)))<(fix(symbol_value(VV[85]))))){
	goto T1097;}
	(void)((MVloc[(0)]=(Cnil)));
	(void)((MVloc[(1)]=(Cnil)));
	(void)((MVloc[(2)]=(Cnil)));
	(void)((MVloc[(3)]=(Cnil)));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T1097;
T1097:;
	{object V299;
	V299= Cnil;
	{object V300;
	base[1]= (V292);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk156)();
	vs_top=sup;
	V299= vs_base[0];
	V300= (V299);
	V295= (MVloc[(0)]);}
	V297= (V299);
	{object V301;
	V293= get((V299),VV[49],Cnil);
	if(((V293))!=Cnil){
	goto T1112;}
	V301= Cnil;
	goto T1111;
goto T1112;
T1112:;
	{register object V302;
	register object V303;
	V302= make_fixnum((long)(fix((V292)))+(1));
	V303= Cnil;
goto T1117;
T1117:;
	if(!(number_compare((V302),(V295))<=0)){
	goto T1118;}
	V301= Cnil;
	goto T1111;
goto T1118;
T1118:;
	base[1]= (V302);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V303= vs_base[0];
	base[2]= (V302);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= (V293);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk161)();
	vs_top=sup;
	V294= vs_base[0];
	if(((V294))==Cnil){
	goto T1125;}
	{register object V304;
	V304= (V295);
	(void)((MVloc[(0)]=((V299))));
	(void)((MVloc[(1)]=((V294))));
	V305= aref1((V293),0);
	(void)((MVloc[(2)]=(car(/* INLINE-ARGS */V305))));
	base[2]= (V302);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V296= vs_base[0];
	base[1]= (V296);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V306= vs_base[0];
	base[1]= one_plus((V296));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V307= vs_base[0];
	base[1]= number_plus((V296),small_fixnum(2));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V308= vs_base[0];
	V309= list(3,V306,V307,V308);
	(void)((MVloc[(3)]=(/* INLINE-ARGS */V309)));
	base[1]= (V304);
	vs_top=(vs_base=base+1)+1;
	return;}
goto T1125;
T1125:;
	V302= make_fixnum((long)(fix((V302)))-(1));
	goto T1117;}
goto T1111;
T1111:;
	if(((V301))==Cnil){
	goto T1148;}
	base[1]= (V301);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1148;
T1148:;
	base[1]= (V297);
	vs_top=(vs_base=base+1)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1151;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T1151;
T1151:;
	{object V310;
	V310= get((V297),VV[86],Cnil);
	if(((V310))==Cnil){
	goto T1156;}
	base[1]= (V310);
	vs_top=(vs_base=base+1)+1;
	return;
goto T1156;
T1156:;
	base[1]= (V297);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1159;}
	(void)((MVloc[(0)]=((V297))));
	(void)((MVloc[(1)]=(Cnil)));
	(void)((MVloc[(2)]=(Cnil)));
	base[1]= (V295);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk162)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1168;}
	V312= Cnil;
	goto T1166;
goto T1168;
T1168:;
	{object V313;
	base[1]= (V295);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V313= vs_base[0];
	base[1]= (V313);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V314= vs_base[0];
	base[1]= one_plus((V313));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V315= vs_base[0];
	base[1]= make_fixnum((long)(fix((V313)))+(2));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V316= vs_base[0];
	V312= list(3,V314,V315,V316);}
goto T1166;
T1166:;
	(void)((MVloc[(3)]=(V312)));
	base[1]= V295;
	vs_top=(vs_base=base+1)+1;
	return;
goto T1159;
T1159:;
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
	{register object V317;
	register object V318;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V317=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1179;}
	V318=(base[1]);
	vs_top=sup;
	goto T1180;
goto T1179;
T1179:;
	V318= symbol_value(VV[87]);
goto T1180;
T1180:;
	{register object V319;
	object V320;
	object V321;
	object V322;
	register object V323;
	V319= Cnil;
	V320= Cnil;
	V321= Cnil;
	V322= Cnil;
	V323= Cnil;
	if(!((fix((V317)))>=(0))){
	goto T1188;}
	goto T1187;
goto T1188;
T1188:;
	V317= small_fixnum(0);
goto T1187;
T1187:;
	{object V324;
	register object V325;
	V324= make_fixnum((long)(fix((V317)))+(1));
	V325= small_fixnum(0);
goto T1195;
T1195:;
	if(!(number_compare((V325),(V324))>=0)){
	goto T1196;}
	goto T1191;
goto T1196;
T1196:;
	base[3]= (V318);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk163)();
	vs_top=sup;
	V323= vs_base[0];
	if(((V323))==Cnil){
	goto T1205;}
	{register object V326;
	V318= (V323);
	V326= (V318);
	V319= (MVloc[(0)]);
	V320= (MVloc[(1)]);
	V321= (MVloc[(2)]);
	V322= (MVloc[(3)]);}
	V318= make_fixnum((long)(fix((V323)))-(1));
	goto T1203;
goto T1205;
T1205:;
	V317= make_fixnum((long)(fix((V325)))-(1));
	goto T1191;
goto T1203;
T1203:;
	V325= one_plus((V325));
	goto T1195;}
goto T1191;
T1191:;
	V318= make_fixnum((long)(fix((V318)))+(1));
	base[2]= (V318);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk140)();
	vs_top=sup;
	V319= vs_base[0];
	(void)((MVloc[(0)]=((V317))));
	(void)((MVloc[(1)]=((V319))));
	(void)((MVloc[(2)]=((V320))));
	(void)((MVloc[(3)]=((V321))));
	(void)((MVloc[(4)]=((V322))));
	base[2]= V318;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for DBL-BACKTRACE	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_reserve(VM45);
	{object V328;
	register object V329;
	if(vs_top-vs_base>2) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T1233;}
	V328=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1234;}
	V329=(base[1]);
	vs_top=sup;
	goto T1235;
goto T1233;
T1233:;
	V328= small_fixnum(1000);
goto T1234;
T1234:;
	V329= symbol_value(VV[87]);
goto T1235;
T1235:;
	{register object V330;
	register object V331;
	register object V332;
	register object V333;
	register object V334;
	V330= Cnil;
	V331= Cnil;
	V332= Cnil;
	V333= Cnil;
	V334= small_fixnum(0);
goto T1245;
T1245:;
	{object V335;
	base[2]= (V329);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk163)();
	vs_top=sup;
	V329= vs_base[0];
	V335= (V329);
	V330= (MVloc[(0)]);
	V332= (MVloc[(1)]);
	V331= (MVloc[(2)]);
	V333= (MVloc[(3)]);}
	if((V330)!=Cnil){
	goto T1259;}
	goto T1243;
goto T1259;
T1259:;
	base[2]= (V334);
	base[3]= Cnil;
	base[4]= (V329);
	base[5]= (V330);
	base[6]= (V332);
	base[7]= (V331);
	base[8]= (V333);
	vs_top=(vs_base=base+2)+7;
	(void) (*Lnk160)();
	vs_top=sup;
	V334= number_plus((V334),small_fixnum(1));
	if(!((fix((V334)))>=(fix((V328))))){
	goto T1270;}
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	vs_top=sup;
	goto T1243;
goto T1270;
T1270:;
	V329= make_fixnum((long)(fix((V329)))-(1));
	goto T1245;
goto T1243;
T1243:;
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
	{register object V336;
	object V337;
	check_arg(2);
	V336=(base[0]);
	V337=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V338;
	register object V339;
	base[4]= (V337);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V338= vs_base[0];
	base[4]= one_plus((V337));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V340= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk164)();
	vs_top=sup;
	V341= vs_base[0];
	V339= (number_compare(V340,V341)<=0?(V340):V341);
	base[4]= symbol_value(VV[77]);
	base[5]= VV[88];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	{register object V342;
	register object V343;
	base[4]= (V337);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk140)();
	vs_top=sup;
	V344= vs_base[0];
	V343= get(V344,VV[14],Cnil);
	V342= (V338);
goto T1288;
T1288:;
	if((fix((V342)))>=(fix((V339)))){
	goto T1290;}
	base[4]= symbol_value(VV[77]);
	vs_top=(vs_base=base+4)+1;
	Lfill_pointer();
	vs_top=sup;
	V345= vs_base[0];
	if(!((fix(V345))>(fix((V336))))){
	goto T1289;}
goto T1290;
T1290:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
goto T1289;
T1289:;
	base[4]= symbol_value(VV[77]);
	base[5]= VV[89];{object V346;
	V346= car((V343));
	if(V346==Cnil)goto T1301;
	base[6]= V346;
	goto T1300;
goto T1301;
T1301:;}
	base[6]= VV[90];
goto T1300;
T1300:;
	if((car((V343)))!=Cnil){
	goto T1305;}
	base[7]= make_fixnum((long)(fix((V342)))-(fix((V338))));
	goto T1303;
goto T1305;
T1305:;
	base[7]= Cnil;
goto T1303;
T1303:;
	base[9]= (V342);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	base[8]= vs_base[0];
	V342= make_fixnum((long)(fix((V342)))+(1));
	base[9]= ((fix((V342)))<(fix((V339)))?Ct:Cnil);
	vs_top=(vs_base=base+4)+6;
	Lformat();
	vs_top=sup;
	V343= cdr((V343));
	goto T1288;}}
	}
}
/*	function definition for COMPUTING-ARGS-P	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_reserve(VM47);
	{object V347;
	check_arg(1);
	V347=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	base[1]= (V347);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V348= vs_base[0];
	if(type_of(V348)==t_cons){
	goto T1314;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T1314;
T1314:;
	if(number_compare((V347),small_fixnum(3))>0){
	goto T1318;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T1318;
T1318:;
	base[1]= (V347);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V351= vs_base[0];
	{register object x= car(V351),V350= VV[91];
	while(!endp(V350))
	if(eql(x,V350->c.c_car)){
	V349= V350;
	goto T1320;
	}else V350=V350->c.c_cdr;
	V349= Cnil;}
goto T1320;
T1320:;
	base[1]= ((V349)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for PRINT-STACK-FRAME	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_reserve(VM48);
	{object V352;
	object V353;
	register object V354;
	object V355;
	object V356;
	object V357;
	object V358;
	if(vs_top-vs_base<4) too_few_arguments();
	if(vs_top-vs_base>7) too_many_arguments();
	V352=(base[0]);
	V353=(base[1]);
	V354=(base[2]);
	V355=(base[3]);
	vs_base=vs_base+4;
	if(vs_base>=vs_top){vs_top=sup;goto T1323;}
	V356=(base[4]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1324;}
	V357=(base[5]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1325;}
	V358=(base[6]);
	vs_top=sup;
	goto T1326;
goto T1323;
T1323:;
	V356= Cnil;
goto T1324;
T1324:;
	V357= Cnil;
goto T1325;
T1325:;
	V358= Cnil;
goto T1326;
T1326:;
	if(((V353))==Cnil){
	goto T1330;}
	if(((V356))==Cnil){
	goto T1330;}
	base[7]= symbol_value(VV[1]);
	base[8]= VV[92];
	base[9]= (V357);
	base[10]= (V356);
	vs_top=(vs_base=base+7)+4;
	Lformat();
	vs_top=sup;
goto T1330;
T1330:;
	{object V359;
	base[7]= (V354);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk165)();
	vs_top=sup;
	V359= vs_base[0];
	base[7]= symbol_value(VV[1]);
	base[8]= VV[93];
	base[9]= (V352);
	if((V359)==Cnil){
	base[10]= Cnil;
	goto T1345;}
	base[10]= VV[94];
goto T1345;
T1345:;
	base[11]= (V355);
	base[13]= (V354);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk162)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1349;}
	base[13]= VV[95];
	base[14]= small_fixnum(80);
	base[17]= (V354);
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	base[16]= vs_base[0];
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V360= vs_base[0];
	base[15]= car(V360);
	vs_top=(vs_base=base+13)+3;
	(void) (*Lnk166)();
	vs_top=sup;
	base[12]= vs_base[0];
	goto T1347;
goto T1349;
T1349:;
	base[13]= VV[96];
	base[14]= small_fixnum(80);
	base[15]= (V354);
	vs_top=(vs_base=base+13)+3;
	(void) (*Lnk166)();
	vs_top=sup;
	base[12]= vs_base[0];
goto T1347;
T1347:;
	vs_top=(vs_base=base+7)+6;
	Lformat();
	vs_top=sup;
	if(((V357))==Cnil){
	goto T1361;}
	base[7]= symbol_value(VV[1]);
	base[8]= VV[97];
	base[9]= (V357);
	base[10]= (V356);
	vs_top=(vs_base=base+7)+4;
	Lformat();
	vs_top=sup;
goto T1361;
T1361:;
	base[7]= symbol_value(VV[1]);
	base[8]= VV[98];
	base[9]= (V354);
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
	{object V361;
	object V362;
	object V363;
	check_arg(3);
	V361=(base[0]);
	V362=(base[1]);
	V363=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	V364= aref1((V362),fixint((V363)));
	V365= aref1((V362),0);
	V366= car(/* INLINE-ARGS */V365);
	V367= aref1((V362),0);
	V368 = make_fixnum((long)(fix(cdr(/* INLINE-ARGS */V367)))+(fix((V363))));
	base[3]= list(4,/* INLINE-ARGS */V364,/* INLINE-ARGS */V366,V368,(V361));
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for RELATIVE-LINE	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_reserve(VM50);
	{object V369;
	object V370;
	check_arg(2);
	V369=(base[0]);
	V370=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V371;
	V371= get((V369),VV[49],Cnil);
	if(((V371))==Cnil){
	goto T1373;}
	V372= aref1((V371),0);
	base[2]= make_fixnum((long)(fix((V370)))-(fix(cdr(/* INLINE-ARGS */V372))));
	vs_top=(vs_base=base+2)+1;
	return;
goto T1373;
T1373:;
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
	{register object V373;
	object V374;
	check_arg(2);
	V373=(base[0]);
	V374=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	bds_bind(VV[99],Cnil);
	bds_bind(VV[100],symbol_value(VV[101]));
	bds_bind(VV[1],symbol_value(VV[101]));
	if(!(type_of((V373))==t_symbol)){
	goto T1375;}
	base[5]= (V373);
	vs_top=(vs_base=base+5)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1375;}
	{register object x= (V373),V375= car((V374));
	while(!endp(V375))
	if(type_of(V375->c.c_car)==t_cons &&eql(x,V375->c.c_car->c.c_car)){
	goto T1375;
	}else V375=V375->c.c_cdr;}
	base[5]= VV[102];
	vs_top=(vs_base=base+5)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
goto T1375;
T1375:;
	{object V376;
	object V377;
	V378= list(2,VV[104],(V373));
	base[5]= list(5,VV[103],/* INLINE-ARGS */V378,Cnil,Cnil,list(2,VV[104],(V374)));
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk167)();
	if(vs_base>=vs_top){vs_top=sup;goto T1385;}
	V376= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1386;}
	V377= vs_base[0];
	vs_top=sup;
	goto T1387;
goto T1385;
T1385:;
	V376= Cnil;
goto T1386;
T1386:;
	V377= Cnil;
goto T1387;
T1387:;
	if(((V376))==Cnil){
	goto T1389;}
	base[5]= VV[102];
	vs_top=(vs_base=base+5)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
goto T1389;
T1389:;
	base[5]= (V377);
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
	{register object V379;
	register object V380;
	check_arg(2);
	V379=(base[0]);
	V380=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V381;
	V381= symbol_value(VV[9]);
	setq(VV[105],Cnil);
	setq(VV[9],(V381));
	if(((V380))==Cnil){
	goto T1398;}
	setq(VV[0],(V380));
	goto T1396;
goto T1398;
T1398:;
	base[3]= (V381);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V382= vs_base[0];
	(void)(make_cons(V382,Cnil));
goto T1396;
T1396:;
	if(((V379))==Cnil){
	goto T1404;}
	base[2]= symbol_value(VV[1]);
	base[3]= VV[106];
	base[4]= cadr((V379));
	base[5]= caddr((V379));
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
	base[2]= symbol_value(VV[1]);
	base[3]= VV[107];
	base[4]= cadr((V379));
	base[5]= caddr((V379));
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
goto T1404;
T1404:;
	{register object V383;
	register object V384;
	V383= symbol_value(VV[108]);
	V384= car((V383));
goto T1419;
T1419:;
	if(!(endp_prop((V383)))){
	goto T1420;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
goto T1420;
T1420:;
	{register object V385;
	base[3]= (V384);
	base[4]= (V380);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk168)();
	vs_top=sup;
	V385= vs_base[0];
	if(!(((V385))==(VV[102]))){
	goto T1428;}
	goto T1424;
goto T1428;
T1428:;
	base[3]= Ct;
	base[4]= VV[109];
	base[5]= (V384);
	base[6]= (V385);
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;}
goto T1424;
T1424:;
	V383= cdr((V383));
	V384= car((V383));
	goto T1419;}}
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

