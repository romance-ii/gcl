
#include "cmpinclude.h"
#include "debug.h"
init_debug(){do_init(VV);}
/*	function definition for SHOW-BREAK-VARIABLES	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	{register object V1;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T1;}
	V1=(base[0]);
	vs_top=sup;
	goto T2;
T1:;
	V1= small_fixnum(1);
T2:;
T5:;
	{register object V2;
	register object V3;
	V2= reverse(car(symbol_value(VV[0])));
	V3= car((V2));
T11:;
	if(!(endp((V2)))){
	goto T12;}
	goto T7;
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
T7:;
	V1= number_plus((V1),small_fixnum(-1));
	if(!((fix((V1)))>(0))){
	goto T27;}
	goto T26;
T27:;
	vs_base=vs_top=base+1;
	vs_base[0]=Cnil;
	return;
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
T43:;
	if(!(endp((V7)))){
	goto T44;}
	{object V10 = Cnil;
	VMR2(V10)}
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
T35:;
	{object V11 = Cnil;
	VMR2(V11)}}
}
/*	function definition for SEARCH-STACK	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	{object V12;
	check_arg(1);
	V12=(base[0]);
	vs_top=sup;
TTL:;
	{object V13;
	V13= Cnil;
	if(!(type_of((V12))==t_symbol)){
	goto T62;}
	V13= symbol_name((V12));
	goto T60;
T62:;
	V13= (V12);
T60:;
	{register int V14;
	register int V15;
	{object V16;
	vs_base=vs_top;
	(void) (*Lnk113)();
	vs_top=sup;
	V16= vs_base[0];{object V17;
	V17= (type_of((V16))==t_fixnum?Ct:Cnil);
	if(V17==Cnil)goto T67;
	goto T66;
T67:;}
	(void)((*(LnkLI114))());
T66:;
	V14= fix((V16));}
	V15= 2;
	{register object V18;
	V18= Cnil;
	{register object V19;
	V19= Cnil;
T71:;
	if((V14)<=(V15)){
	goto T74;}
	goto T73;
T74:;
	goto T72;
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
T82:;
	if(!(type_of((V18))==t_symbol)){
	goto T88;}
	V19= (V18);
	goto T80;
T88:;
	if(!(type_of((V18))==t_cons||((V18))==Cnil)){
	goto T92;}
	{register object x= car((V18)),V21= VV[4];
	while(!endp(V21))
	if(eql(x,V21->c.c_car)){
	goto T95;
	}else V21=V21->c.c_cdr;
	goto T92;}
T95:;
	V19= cadr((V18));
	goto T80;
T92:;
	V19= VV[5];
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
T98:;
	V14= (V14)-(1);
	goto T71;
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

static L4()
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
T111:;
	V23= small_fixnum(1);
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
	{register int V30;
	int V31;
	V30= 0;{object V32;
	V32= (type_of((V23))==t_fixnum?Ct:Cnil);
	if(V32==Cnil)goto T128;
	goto T127;
T128:;}
	(void)((*(LnkLI114))());
T127:;
	V31= fix((V23));
	{register int V33;
	int V34;{object V35;
	V35= (type_of((V26))==t_fixnum?Ct:Cnil);
	if(V35==Cnil)goto T132;
	goto T131;
T132:;}
	(void)((*(LnkLI114))());
T131:;
	V33= fix((V26));
	V34= 2;
T136:;
	if((V33)<=(V34)){
	goto T139;}
	goto T138;
T139:;
	goto T137;
T138:;
	if((V30)>=(V31)){
	goto T142;}
	goto T141;
T142:;
	goto T137;
T141:;
	bds_bind(VV[9],make_fixnum(V33));
	vs_base=vs_top;
	(void) (*Lnk119)();
	vs_top=sup;
	princ_char(10,Cnil);
	princ_char(10,Cnil);
	bds_unwind1;
	V30= (V30)+(1);
	V33= (V33)-(1);
	goto T136;
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
T154:;
	V28= (V27);
T152:;
	if(!(type_of((V28))==t_symbol)){
	goto T160;}
	V29= get((V28),VV[14],Cnil);
T160:;
	{object V36;
	base[6]= make_fixnum((1)+(fix(symbol_value(VV[9]))));
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
	{register int V37;
	int V38;{object V39;
	V39= (type_of((V25))==t_fixnum?Ct:Cnil);
	if(V39==Cnil)goto T178;
	goto T177;
T178:;}
	(void)((*(LnkLI114))());
T177:;
	V37= fix((V25));{object V40;
	V40= (type_of((V36))==t_fixnum?Ct:Cnil);
	if(V40==Cnil)goto T182;
	goto T181;
T182:;}
	(void)((*(LnkLI114))());
T181:;
	V38= fix((V36));
	{register int V41;
	V41= 0;
	{register object V42;
	V42= Cnil;
T186:;
	if((V37)>=(V38)){
	goto T189;}
	goto T188;
T189:;
	goto T187;
T188:;
	V42= Cnil;
	{register object x= small_fixnum(0),V43= (V29);
	while(!endp(V43))
	if(eql(x,V43->c.c_car)){
	goto T196;
	}else V43=V43->c.c_cdr;
	goto T195;}
T196:;
	base[6]= (V29);
	base[7]= make_fixnum(V41);
	vs_top=(vs_base=base+6)+2;
	Lgetf();
	vs_top=sup;
	V42= vs_base[0];
	goto T193;
T195:;
	V42= nth(V41,(V29));
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
T201:;
	V37= (V37)+(1);
	if(!((V41)<(2147483646))){
	goto T219;}
	goto T218;
T219:;
	(void)((*(LnkLI114))());
T218:;
	V41= (V41)+(1);
	goto T186;
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
T174:;
	if(!(type_of((V28))==t_cons||((V28))==Cnil)){
	goto T225;}
	base[6]= (*(LnkLI120))((V24));
	vs_top=(vs_base=base+6)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
T225:;
	base[6]= symbol_value(VV[1]);
	base[7]= VV[19];
	vs_top=(vs_base=base+6)+2;
	Lformat();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
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

static L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{object V44;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T229;}
	V44=(base[0]);
	vs_top=sup;
	goto T230;
T229:;
	V44= small_fixnum(0);
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
	V48 = make_fixnum((1)+(fix(symbol_value(VV[9]))));
	base[1]= (number_compare(V47,V48)<=0?(V47):V48);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V46= vs_base[0];
	if((fix((V44)))<((fix(V46))-(fix((V45))))){
	goto T234;}
T235:;
	base[1]= VV[20];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
T234:;
	base[1]= make_fixnum((fix((V44)))+(fix((V45))));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	return;}
	}
}
/*	macro definition for MV-SETQ	*/

static L6()
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
T247:;
	if(((V52))!=Cnil){
	goto T248;}
	V51= reverse((V54));
	goto T244;
T248:;
	V55= car((V52));
	V56= list(3,VV[22],/* INLINE-ARGS */V55,list(2,VV[23],(V53)));
	V54= make_cons(/* INLINE-ARGS */V56,(V54));
	V52= cdr((V52));
	V53= one_plus((V53));
	goto T247;}
T244:;
	base[4]= listA(3,VV[21],/* INLINE-ARGS */V50,V51);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for MV-VALUES	*/

static L7()
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
T261:;
	if(((V60))!=Cnil){
	goto T262;}
	V59= reverse((V62));
	goto T258;
T262:;
	V63= list(3,VV[24],(V61),car((V60)));
	V62= make_cons(/* INLINE-ARGS */V63,(V62));
	V60= cdr((V60));
	V61= one_plus((V61));
	goto T261;}
T258:;
	base[3]= listA(3,VV[21],/* INLINE-ARGS */V58,V59);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for DBL	*/

static L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(0);
	vs_top=sup;
TTL:;
	base[0]= Cnil;
	base[1]= Cnil;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk121)();
	return;
}
/*	function definition for MAKE-INSTREAM	*/

static L9()
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

static L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	check_arg(0);
	vs_top=sup;
TTL:;
	{register object V67;
	register object V68;
	V67= symbol_value(VV[26]);
	V68= car((V67));
T282:;
	if(!(endp((V67)))){
	goto T283;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T283:;
	base[1]= structure_ref((V68),VV[25],0);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T287;}
	setq(VV[26],(VFUN_NARGS=2,(*(LnkLI123))((V68),symbol_value(VV[26]))));
T287:;
	V67= cdr((V67));
	V68= car((V67));
	goto T282;}
}
/*	function definition for GET-INSTREAM	*/

static L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	{register object V69;
	check_arg(1);
	V69=(base[0]);
	vs_top=sup;
TTL:;{object V70;
	{register object V71;
	register object V72;
	V71= symbol_value(VV[26]);
	V72= car((V71));
T302:;
	if(!(endp((V71)))){
	goto T303;}
	V70= Cnil;
	goto T298;
T303:;
	V73= structure_ref((V72),VV[25],0);
	if(!(((V69))==(/* INLINE-ARGS */V73))){
	goto T307;}
	V70= (V72);
	goto T298;
T307:;
	V71= cdr((V71));
	V72= car((V71));
	goto T302;}
T298:;
	if(V70==Cnil)goto T297;
	base[1]= V70;
	vs_top=(vs_base=base+1)+1;
	return;
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
T322:;
	base[4]= Cnil;
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

static L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	{object V75;
	object V76;
	check_arg(2);
	V75=(base[0]);
	V76=(base[1]);
	vs_top=sup;
TTL:;
	{object V77;
	base[2]= (V75);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk126)();
	vs_top=sup;
	V77= vs_base[0];
	{int V78= fix(structure_ref((V77),VV[25],1));
	V79 = make_fixnum((1)+(/* INLINE-ARGS */V78));
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
T333:;
	setq(VV[29],Ct);
T331:;
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;
	}
}
/*	function definition for QUOTATION-READER	*/

static L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	{object V81;
	object V82;
	check_arg(2);
	V81=(base[0]);
	V82=(base[1]);
	vs_top=sup;
TTL:;
	{object V83;
	object V84;
	V83= (
	(type_of(symbol_value(VV[32])) == t_sfun ?(*(object (*)())((symbol_value(VV[32]))->sfn.sfn_self)):
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

static L14()
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
	{int V93= fix(structure_ref((V91),VV[25],1));
	V94 = make_fixnum((1)+(/* INLINE-ARGS */V93));
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
T354:;
	(void)((
	(type_of(symbol_value(VV[38])) == t_sfun ?(*(object (*)())((symbol_value(VV[38]))->sfn.sfn_self)):
	(fcall.fun=(symbol_value(VV[38])),fcall.argd=2,fcalln))((V89),(V90))));
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
T375:;
	setq(VV[29],Ct);
T373:;
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;}
	}
}
/*	function definition for SETUP-LINEINFO	*/

static L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	check_arg(0);
	vs_top=sup;
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

static L16()
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

static L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{object V101;
	object V102;
	check_arg(2);
	V101=(base[0]);
	V102=(base[1]);
	vs_top=sup;
TTL:;
	{object V103;
	register object V104;
	V103= Cnil;
	V104= symbol_value(VV[29]);
	if(!((symbol_value(VV[29]))==(Ct))){
	goto T411;}
	setq(VV[29],Cnil);
T411:;
	if(((V104))==Cnil){
	goto T415;}
	base[2]= (V101);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk126)();
	vs_top=sup;
	V104= vs_base[0];
	V103= structure_ref((V104),VV[25],1);
T415:;
	{object V105;
	V105= (
	(type_of(symbol_value(VV[45])) == t_sfun ?(*(object (*)())((symbol_value(VV[45]))->sfn.sfn_self)):
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
T423:;
	base[2]= (V105);
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	function definition for WALK-THROUGH	*/

static L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{register object V110;
	check_arg(1);
	V110=(base[0]);
	vs_top=sup;
TTL:;
	{register object V111;
	V111= Cnil;
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
T446:;
	V115= make_cons((V111),(V110));
	(void)((VFUN_NARGS=2,(*(LnkLI135))(/* INLINE-ARGS */V115,symbol_value(VV[47]))));
T439:;
	base[1]= car((V110));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk136)();
	vs_top=sup;
	V110= cdr((V110));
	goto T435;
T436:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for COMPILER-DEF-HOOK	*/

static L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{object V116;
	object V117;
	check_arg(2);
	V116=(base[0]);
	V117=(base[1]);
	vs_top=sup;
TTL:;
	{object V118;
	register int V119;
	int V120;
	V118= symbol_value(VV[47]);
	V119= 2147483647;
	V120= -1;
	if(!(type_of((V117))!=t_cons)){
	goto T467;}
	base[2]= remprop((V116),VV[49]);
	vs_top=(vs_base=base+2)+1;
	return;
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
	register int V122;
	V121= make_fixnum(length((V118)));
	V122= 0;
T481:;
	V123 = make_fixnum(V122);
	if(!(number_compare(V123,(V121))>=0)){
	goto T482;}
	goto T477;
T482:;
	{register int V124;
	V125= aref1((V118),V122);
	V124= fix(cdar(/* INLINE-ARGS */V125));
	if(!((V124)>(V120))){
	goto T488;}
	V120= V124;
T488:;
	if(!((V124)<(V119))){
	goto T486;}
	V119= V124;}
T486:;
	V122= (V122)+1;
	goto T481;}
T477:;
	if(!((length(symbol_value(VV[47])))>(0))){
	goto T499;}
	{object V126;
	object V127;
	V128 = make_fixnum(((V120)-(V119))+(2));
	V126= (VFUN_NARGS=3,(*(LnkLI137))(V128,VV[50],VV[51]));
	V127= get((V116),VV[49],Cnil);
	V129= aref1((V118),0);
	V130= caar(/* INLINE-ARGS */V129);
	V131 = make_fixnum(V119);
	V132= make_cons(/* INLINE-ARGS */V130,V131);
	(void)(aset1((V126),0,/* INLINE-ARGS */V132));
	V119= (V119)-(1);
	{object V133;
	register object V134;
	V133= make_fixnum(length((V118)));
	V134= small_fixnum(0);
T510:;
	if(!(number_compare((V134),(V133))>=0)){
	goto T511;}
	goto T506;
T511:;
	{object V135;
	V135= aref1((V118),fixint((V134)));
	(void)(aset1((V126),(fix(cdar((V135))))-(V119),cdr((V135))));}
	V134= one_plus((V134));
	goto T510;}
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
T529:;
	if(!(endp((V139)))){
	goto T530;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
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
	V143= make_fixnum((V145)-(fix((V137))));{object V147;
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
T522:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
T499:;
	{object V149;
	V149= get((V116),VV[52],Cnil);
	base[2]= (V149);
	base[3]= VV[54];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk139)();
	return;}
T470:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for INSTREAM-NAME	*/

static L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{object V150;
	check_arg(1);
	V150=(base[0]);
	vs_top=sup;
TTL:;{object V151;
	V151= structure_ref((V150),VV[25],2);
	if(V151==Cnil)goto T551;
	base[1]= V151;
	vs_top=(vs_base=base+1)+1;
	return;
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

static L21()
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

static L22()
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

static L23()
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
	V158= make_fixnum(length((V157)));
	V159= small_fixnum(0);
T566:;
	if(!(number_compare((V159),(V158))>=0)){
	goto T567;}
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;
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
T571:;
	V159= one_plus((V159));
	goto T566;}
T561:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
T558:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	function definition for CURRENT-STEP-FUN	*/

static L24()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	{object V163;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T593;}
	V163=(base[0]);
	vs_top=sup;
	goto T594;
T593:;
	vs_base=vs_top;
	(void) (*Lnk113)();
	vs_top=sup;
	V163= vs_base[0];
T594:;
	{register object V164;
	V164= one_minus((V163));
T598:;
	if(!((fix((V164)))<=(0))){
	goto T599;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
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
T603:;
	V164= make_fixnum((fix((V164)))-(1));
	goto T598;}
	}
}
/*	function definition for INIT-BREAK-POINTS	*/

static L25()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	check_arg(0);
	vs_top=sup;
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

static L26()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	{object V166;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T615;}
	V166=(base[0]);
	vs_top=sup;
	goto T616;
T615:;
	V166= small_fixnum(1);
T616:;
	if(symbol_value(VV[53])!=Cnil){
	goto T618;}
	vs_base=vs_top;
	(void) (*Lnk141)();
	vs_top=sup;
T618:;
	setq(VV[58],VV[59]);
	base[1]= VV[60];
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for STEP-NEXT	*/

static L27()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	{object V167;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T621;}
	V167=(base[0]);
	vs_top=sup;
	goto T622;
T621:;
	V167= small_fixnum(1);
T622:;
	{object V168;
	vs_base=vs_top;
	(void) (*Lnk142)();
	vs_top=sup;
	V168= vs_base[0];
	setq(VV[61],make_cons((V167),(V168)));
	if(symbol_value(VV[53])!=Cnil){
	goto T627;}
	vs_base=vs_top;
	(void) (*Lnk141)();
	vs_top=sup;
T627:;
	setq(VV[58],VV[62]);
	base[1]= VV[60];
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for MAYBE-BREAK	*/

static L28()
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
TTL:;
	{object V173;
	V173= Cnil;
	V173= (VFUN_NARGS=2,(*(LnkLI143))((V169),(V170)));
	if(((V173))==Cnil){
	goto T632;}
	setq(VV[58],Cnil);
	if(!((length(symbol_value(VV[53])))>(0))){
	goto T638;}
	goto T637;
T638:;
	setq(VV[53],Cnil);
T637:;
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
T632:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	function definition for BREAK-STEP-INTO	*/

static L29()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	{object V174;
	object V175;
	check_arg(2);
	V174=(base[0]);
	V175=(base[1]);
	vs_top=sup;
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

static L30()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_reserve(VM28);
	{object V178;
	object V179;
	check_arg(2);
	V178=(base[0]);
	V179=(base[1]);
	vs_top=sup;
TTL:;
	{object V180;
	vs_base=vs_top;
	(void) (*Lnk142)();
	vs_top=sup;
	V180= vs_base[0];
	if(!(eql(cdr(symbol_value(VV[61])),(V180)))){
	goto T655;}
	{object V181;
	V181= get((V180),VV[49],Cnil);
	base[2]= (V178);
	base[3]= (V181);
	base[4]= (V180);
	base[5]= (V179);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk144)();
	return;}
T655:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for *BREAK-POINTS*	*/

static L31()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_reserve(VM29);
	{object V182;
	object V183;
	check_arg(2);
	V182=(base[0]);
	V183=(base[1]);
	vs_top=sup;
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

static L32()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_reserve(VM30);
	{register object V185;
	check_arg(1);
	V185=(base[0]);
	vs_top=sup;
TTL:;
	{register object V186;
	register object V187;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V186= vs_base[0];
	V187= car((V186));
T673:;
	if(!(endp((V186)))){
	goto T674;}
	goto T669;
T674:;
	{register object V188;
	register object V189;
	base[3]= symbol_name((V185));
	base[4]= (V187);
	vs_top=(vs_base=base+3)+2;
	Lintern();
	if(vs_base>=vs_top){vs_top=sup;goto T682;}
	V188= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T683;}
	V189= vs_base[0];
	vs_top=sup;
	goto T684;
T682:;
	V188= Cnil;
T683:;
	V189= Cnil;
T684:;
	if((get((V188),VV[49],Cnil))==Cnil){
	goto T686;}
	base[3]= (V188);
	vs_top=(vs_base=base+3)+1;
	return;
T686:;
	if((V189)!=Cnil){
	goto T678;}
	base[3]= (V188);
	vs_top=(vs_base=base+3)+1;
	Lunintern();
	vs_top=sup;}
T678:;
	V186= cdr((V186));
	V187= car((V186));
	goto T673;}
T669:;
	base[1]= Ct;
	base[2]= VV[66];
	base[3]= (V185);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	function definition for BREAK-FUNCTION	*/

static L33()
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
	if(vs_base>=vs_top){vs_top=sup;goto T697;}
	V191=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T698;}
	V192=(base[2]);
	vs_top=sup;
	goto T699;
T697:;
	V191= small_fixnum(1);
T698:;
	V192= Cnil;
T699:;
	{object V193;
	V193= Cnil;
	{register object V194;
	V194= get((V190),VV[49],Cnil);
	if(((V194))!=Cnil){
	goto T704;}
	base[3]= (V190);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk145)();
	vs_top=sup;
	V193= vs_base[0];
	if(((V193))==Cnil){
	goto T704;}
	base[3]= (V193);
	base[4]= (V191);
	base[5]= (V192);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk146)();
	return;
T704:;
	if(!(type_of((V194))==t_array||
type_of((V194))==t_vector||
type_of((V194))==t_string||
type_of((V194))==t_bitvector)){
	goto T716;}
	goto T715;
T716:;
	base[3]= Ct;
	base[4]= VV[67];
	base[5]= (V190);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
T715:;
	{object V195;
	V196= aref1((V194),0);
	V195= cdr(/* INLINE-ARGS */V196);
	if(((V192))==Cnil){
	goto T723;}
	V191= make_fixnum((fix((V191)))-(fix((V195))));
T723:;{object V197;
	if((fix((V191)))>=(1)){
	goto T730;}
	V197= Cnil;
	goto T729;
T730:;
	V197= ((fix((V191)))<(length((V194)))?Ct:Cnil);
T729:;
	if(V197==Cnil)goto T728;
	goto T727;
T728:;}{object V198;
	base[3]= Ct;
	base[4]= VV[68];
	base[5]= (V190);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	V198= vs_base[0];
	if(V198==Cnil)goto T732;
	goto T727;
T732:;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
T727:;
	if(!(eql((V191),small_fixnum(1)))){
	goto T737;}
	{object V199;
	base[3]= (V190);
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	V199= vs_base[0];
	if(!(type_of((V199))==t_cons)){
	goto T737;}
	if(!((car((V199)))==(VV[69]))){
	goto T737;}
	if((caddr((V199)))==Cnil){
	goto T737;}
	V191= small_fixnum(2);}
T737:;
	{register object V200;
	register object V201;
	V200= make_fixnum((length((V194)))-(fix((V191))));
	V201= small_fixnum(0);
T753:;
	if(!(number_compare((V201),(V200))>=0)){
	goto T754;}
	goto T749;
T754:;
	V202= aref1((V194),fixint((V201)));
	if((/* INLINE-ARGS */V202)==(VV[51])){
	goto T758;}
	base[6]= (V190);
	base[7]= (V194);
	base[8]= make_fixnum((fix((V191)))+(fix((V201))));
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
T758:;
	V201= one_plus((V201));
	goto T753;}
T749:;
	base[3]= Ct;
	base[4]= VV[70];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	return;}}}
	}
}
/*	function definition for INSERT-BREAK-POINT	*/

static L34()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_reserve(VM32);
	{object V203;
	check_arg(1);
	V203=(base[0]);
	vs_top=sup;
TTL:;
	{register object V204;
	V204= Cnil;
	if(symbol_value(VV[53])!=Cnil){
	goto T773;}
	vs_base=vs_top;
	(void) (*Lnk141)();
	vs_top=sup;
T773:;{object V205;
	V205= (VFUN_NARGS=2,(*(LnkLI143))(Cnil,symbol_value(VV[53])));
	if(V205==Cnil)goto T776;
	V204= V205;
	goto T775;
T776:;}
	{object V206;
	V206= make_fixnum(length(symbol_value(VV[53])));
	(void)((VFUN_NARGS=2,(*(LnkLI135))(Cnil,symbol_value(VV[53]))));
	V204= (V206);}
T775:;
	{object V207;
	{object V208= cdr(cdr(cdr((V203))));
	if((type_of(V208)!=t_cons) && ((V203)!= Cnil))
	 FEwrong_type_argument(Scons,V208);
	V207= (V208->c.c_car);}
	{object V211;
	V212= get(V207,VV[52],Cnil);
	V211= make_cons((V204),V212);
	(void)(sputprop(V207,VV[52],(V211)));}}
	(void)(aset1(symbol_value(VV[53]),fixint((V204)),(V203)));
	base[1]= (V204);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for SHORT-NAME	*/

static L35()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_reserve(VM33);
	{object V213;
	check_arg(1);
	V213=(base[0]);
	vs_top=sup;
TTL:;
	{object V214;
	V214= (VFUN_NARGS=4,(*(LnkLI143))(VV[71],(V213),VV[72],Ct));
	if(((V214))==Cnil){
	goto T787;}
	base[1]= (V213);
	base[2]= make_fixnum((1)+(fix((V214))));
	vs_top=(vs_base=base+1)+2;
	Lsubseq();
	return;
T787:;
	base[1]= (V213);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for SHOW-BREAK-POINT	*/

static L36()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_reserve(VM34);
	{object V215;
	check_arg(1);
	V215=(base[0]);
	vs_top=sup;
TTL:;
	{object V216;
	V216= Cnil;
	{register object V217;
	V217= aref1(symbol_value(VV[53]),fixint((V215)));
	if(((V217))==Cnil){
	goto T794;}
	if(!((car((V217)))==(Cnil))){
	goto T796;}
	V216= Ct;
	V217= cdr((V217));
T796:;
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
T794:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}}
	}
}
/*	function definition for ITERATE-OVER-BKPTS	*/

static L37()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_reserve(VM35);
	{register object V219;
	register object V220;
	check_arg(2);
	V219=(base[0]);
	V220=(base[1]);
	vs_top=sup;
TTL:;
	{register object V221;
	register object V222;
	V221= make_fixnum(length(symbol_value(VV[53])));
	V222= small_fixnum(0);
T820:;
	if(!(number_compare((V222),(V221))>=0)){
	goto T821;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
T821:;
	{register object x= (V222),V223= (V219);
	while(!endp(V223))
	if(eql(x,V223->c.c_car)){
	goto T826;
	}else V223=V223->c.c_cdr;}
	if(((V219))!=Cnil){
	goto T825;}
T826:;
	{register object V224;
	V224= aref1(symbol_value(VV[53]),fixint((V222)));{object V225;
	V225= symbol_value(VV[53]);
	{object V227= (V220);
	if((V227!= VV[54]))goto T832;
	if(((V224))==Cnil){
	goto T833;}
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
T833:;
	V226= Cnil;
	goto T831;
T832:;
	if((V227!= VV[151]))goto T839;
	if(!((car((V224)))==(Cnil))){
	goto T841;}
	V226= cdr((V224));
	goto T831;
T841:;
	V226= Cnil;
	goto T831;
T839:;
	if((V227!= VV[152]))goto T843;
	if(((V224))==Cnil){
	goto T845;}
	if((car((V224)))==(Cnil)){
	goto T845;}
	V226= make_cons(Cnil,(V224));
	goto T831;
T845:;
	V226= (V224);
	goto T831;
T843:;
	if((V227!= VV[153]))goto T849;
	if(((V224))==Cnil){
	goto T850;}
	base[3]= (V222);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk148)();
	vs_top=sup;
	princ_char(10,Cnil);
T850:;
	V226= (V224);
	goto T831;
T849:;
	V226= Cnil;}
T831:;
	(void)(aset1(V225,fixint((V222)),V226));}}
T825:;
	V222= one_plus((V222));
	goto T820;}
	}
}
/*	function definition for COMPLETE-PROP	*/

static L38()
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
	if(vs_base>=vs_top){vs_top=sup;goto T858;}
	V237=(base[3]);
	vs_top=sup;
	goto T859;
T858:;
	V237= Cnil;
T859:;
	if(!(type_of((V234))==t_symbol)){
	goto T861;}
	if((get((V234),(V236),Cnil))==Cnil){
	goto T861;}
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
	goto T861;}
	base[4]= (V234);
	vs_top=(vs_base=base+4)+1;
	return;
T861:;
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
	goto T877;}
	V242= (V245);
	goto T873;
T877:;
	base[4]= coerce_to_string((V245));
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V242= vs_base[0];}
T873:;
	V243= Cnil;
	V244= Cnil;
	{int V246;
	int V247;
	base[4]= (V242);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk154)();
	if(vs_base>=vs_top){vs_top=sup;goto T883;}
	V246= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T884;}
	V247= fix(vs_base[0]);
	vs_top=sup;
	goto T885;
T883:;
	V246= fix(Cnil);
T884:;
	V247= fix(Cnil);
T885:;
	{object V248;
	register object V249;
	V250 = make_fixnum(V247);
	V251 = make_fixnum(V246);
	V248= number_plus(V250,V251);
	V249= small_fixnum(0);
T889:;
	if(!(number_compare((V249),(V248))>=0)){
	goto T890;}
	V243= Cnil;
	goto T872;
T890:;
	V252 = make_fixnum(V247);
	if(!(number_compare((V249),V252)<0)){
	goto T901;}
	base[5]= (V242);
	base[6]= (V249);
	vs_top=(vs_base=base+5)+2;
	siLpackage_internal();
	vs_top=sup;
	V244= vs_base[0];
	goto T899;
T901:;
	base[5]= (V242);
	V253 = make_fixnum(V247);
	base[6]= number_minus((V249),V253);
	vs_top=(vs_base=base+5)+2;
	siLpackage_external();
	vs_top=sup;
	V244= vs_base[0];
T899:;
T897:;
	if(((V244))!=Cnil){
	goto T907;}
	goto T898;
T907:;
	V243= car((V244));
	if((get((V243),(V236),Cnil))==Cnil){
	goto T912;}
	base[5]= (V234);
	base[6]= (V243);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk155)();
	vs_top=sup;
	V254= vs_base[0];
	if(!(eql(V254,small_fixnum(0)))){
	goto T912;}
	if(((V241))==Cnil){
	goto T921;}
	{register object V255;
	register object V256;
	V255= (V241);
	V241= make_cons((V243),Cnil);
	V256= (V241);
	if(type_of((V255))!=t_cons)FEwrong_type_argument(Scons,(V255));
	((V255))->c.c_cdr = (V256);
	goto T912;}
T921:;
	V241= make_cons((V243),Cnil);
	V240= (V241);
T912:;
	V244= cdr((V244));
	goto T897;
T898:;
	goto T895;
T895:;
	V249= one_plus((V249));
	goto T889;}}}
T872:;
	if(((V237))==Cnil){
	goto T936;}
	base[4]= (V240);
	vs_top=(vs_base=base+4)+1;
	return;
T936:;
	if(!((length((V240)))>(1))){
	goto T939;}
	base[4]= Ct;
	base[5]= VV[75];
	base[6]= (V236);
	base[7]= (V240);
	vs_top=(vs_base=base+4)+4;
	Lformat();
	vs_top=sup;
	goto T934;
T939:;
	if(((V240))!=Cnil){
	goto T946;}
	base[4]= Ct;
	base[5]= VV[76];
	base[6]= (V234);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T934;
T946:;
	base[4]= car((V240));
	vs_top=(vs_base=base+4)+1;
	return;
T934:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	function definition for DISPLAY-ENV	*/

static L39()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_reserve(VM37);
	{register object V257;
	object V258;
	check_arg(2);
	V257=(base[0]);
	V258=(base[1]);
	vs_top=sup;
TTL:;
	{register object V259;
	V259= reverse((V258));
T954:;
	if(!(type_of((V259))==t_cons)){
	goto T956;}
	base[2]= symbol_value(VV[77]);
	vs_top=(vs_base=base+2)+1;
	Lfill_pointer();
	vs_top=sup;
	V260= vs_base[0];
	if(!((fix(V260))>(fix((V257))))){
	goto T955;}
T956:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T955:;{object V261;
	if(type_of(car((V259)))==t_cons){
	goto T966;}
	V261= Cnil;
	goto T965;
T966:;
	{object V262= cdar((V259));
	V261= (type_of(V262)==t_cons||(V262)==Cnil?Ct:Cnil);}
T965:;
	if(V261==Cnil)goto T964;
	goto T963;
T964:;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T963:;
	base[2]= symbol_value(VV[77]);
	base[3]= VV[78];
	base[4]= caar((V259));
	base[5]= cadar((V259));
	base[6]= cdr((V259));
	vs_top=(vs_base=base+2)+5;
	Lformat();
	vs_top=sup;
	V259= cdr((V259));
	goto T954;}
	}
}
/*	function definition for APPLY-DISPLAY-FUN	*/

static L40()
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
	(type_of((V263)) == t_sfun ?(*(object (*)())(((V263))->sfn.sfn_self)):
	(fcall.fun=((V263)),fcall.argd=2,fcalln))((V264),(V265))));
	base[8]= symbol_value(VV[77]);
	vs_top=(vs_base=base+8)+1;
	Lfill_pointer();
	vs_top=sup;
	V266= vs_base[0];
	if(!((fix(V266))>(fix((V264))))){
	goto T985;}
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
T985:;
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

static L41()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_reserve(VM39);
	{object V267;
	object V268;
	check_arg(2);
	V267=(base[0]);
	V268=(base[1]);
	vs_top=sup;
TTL:;
	{object V269;
	V269= (VFUN_NARGS=2,(*(LnkLI143))((V267),(V268)));
	if(((V269))==Cnil){
	goto T999;}
	V270= aref1((V268),0);
	base[2]= make_fixnum((fix((V269)))+(fix(cdr(/* INLINE-ARGS */V270))));
	vs_top=(vs_base=base+2)+1;
	return;
T999:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for GET-NEXT-VISIBLE-FUN	*/

static L42()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_reserve(VM40);
	{object V271;
	check_arg(1);
	V271=(base[0]);
	vs_top=sup;
TTL:;
	{register object V272;
	V272= (V271);
T1002:;
	if(!((fix((V272)))<(fix(symbol_value(VV[85]))))){
	goto T1003;}
	{register object V273;
	V273= Cnil;
	(void)((MVloc[(0)]=((V272))));
	base[1]= (V273);
	vs_top=(vs_base=base+1)+1;
	return;}
T1003:;
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
	goto T1014;}
	goto T1008;
T1014:;
	{register object V276;
	V276= get((V274),VV[86],Cnil);
	if(((V276))==Cnil){
	goto T1018;}
	goto T1008;
T1018:;
	base[1]= (V274);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1008;}
	{register object V277;
	V277= (V274);
	(void)((MVloc[(0)]=((V272))));
	base[1]= (V277);
	vs_top=(vs_base=base+1)+1;
	return;}}}}
T1008:;
	V272= make_fixnum((fix((V272)))-(1));
	goto T1002;}
	}
}
/*	function definition for DBL-WHAT-FRAME	*/

static L43()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_reserve(VM41);
	{register int V278;
	check_arg(1);
	V278=fix(base[0]);
	vs_top=sup;
TTL:;
	{register int V279;
	register int V280;
	register object V281;
	V279= fix(symbol_value(VV[87]));
	V280= 0;
	V281= Cnil;
T1031:;
	{register object V282;
	base[1]= make_fixnum(V279);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk156)();
	vs_top=sup;
	V281= vs_base[0];
	V282= (V281);
	V279= fix((MVloc[(0)]));}
	if(!((V279)<=(V278))){
	goto T1039;}
	base[1]= make_fixnum(V280);
	vs_top=(vs_base=base+1)+1;
	return;
T1039:;
	V280= (V280)+(1);
	V279= (V279)-(1);
	goto T1031;}
	}
}
/*	function definition for DBL-UP	*/

static L44()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_reserve(VM42);
	{register object V283;
	object V284;
	check_arg(2);
	V283=(base[0]);
	V284=(base[1]);
	vs_top=sup;
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
	goto T1055;}
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
	base[2]= make_fixnum((fix((V285)))+(fix((V283))));
	base[3]= Ct;
	base[4]= symbol_value(VV[9]);
	base[5]= (V286);
	base[6]= (V287);
	base[7]= (V288);
	base[8]= (V289);
	vs_top=(vs_base=base+2)+7;
	(void) (*Lnk160)();
	return;
T1055:;
	V283= make_fixnum((fix((V285)))+(fix((V283))));
	if(!((fix((V283)))>=(0))){
	goto T1083;}
	goto T1082;
T1083:;
	V283= small_fixnum(0);
T1082:;
	V284= symbol_value(VV[87]);
	goto TTL;}
	}
}
/*	function definition for NEXT-STACK-FRAME	*/

static L45()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_reserve(VM43);
	{object V291;
	check_arg(1);
	V291=(base[0]);
	vs_top=sup;
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
	goto T1095;}
	(void)((MVloc[(0)]=(Cnil)));
	(void)((MVloc[(1)]=(Cnil)));
	(void)((MVloc[(2)]=(Cnil)));
	(void)((MVloc[(3)]=(Cnil)));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T1095:;
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
	goto T1110;}
	V300= Cnil;
	goto T1109;
T1110:;
	{register object V301;
	register object V302;
	V301= make_fixnum((fix((V291)))+(1));
	V302= Cnil;
T1115:;
	if(!(number_compare((V301),(V294))<=0)){
	goto T1116;}
	V300= Cnil;
	goto T1109;
T1116:;
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
	goto T1123;}
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
T1123:;
	V301= make_fixnum((fix((V301)))-(1));
	goto T1115;}
T1109:;
	if(((V300))==Cnil){
	goto T1146;}
	base[1]= (V300);
	vs_top=(vs_base=base+1)+1;
	return;
T1146:;
	base[1]= (V296);
	vs_top=(vs_base=base+1)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1149;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T1149:;
	{object V309;
	V309= get((V296),VV[86],Cnil);
	if(((V309))==Cnil){
	goto T1154;}
	base[1]= (V309);
	vs_top=(vs_base=base+1)+1;
	return;
T1154:;
	base[1]= (V296);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1157;}
	(void)((MVloc[(0)]=((V296))));
	(void)((MVloc[(1)]=(Cnil)));
	(void)((MVloc[(2)]=(Cnil)));
	base[1]= (V294);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk162)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1166;}
	V311= Cnil;
	goto T1164;
T1166:;
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
	base[1]= make_fixnum((fix((V312)))+(2));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V315= vs_base[0];
	V311= list(3,V313,V314,V315);}
T1164:;
	(void)((MVloc[(3)]=(V311)));
	base[1]= V294;
	vs_top=(vs_base=base+1)+1;
	return;
T1157:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}}}}
	}
}
/*	function definition for NTH-STACK-FRAME	*/

static L46()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_reserve(VM44);
	{register object V316;
	register object V317;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V316=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1177;}
	V317=(base[1]);
	vs_top=sup;
	goto T1178;
T1177:;
	V317= symbol_value(VV[87]);
T1178:;
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
	goto T1186;}
	goto T1185;
T1186:;
	V316= small_fixnum(0);
T1185:;
	{object V323;
	register object V324;
	V323= make_fixnum((fix((V316)))+(1));
	V324= small_fixnum(0);
T1193:;
	if(!(number_compare((V324),(V323))>=0)){
	goto T1194;}
	goto T1189;
T1194:;
	base[3]= (V317);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk163)();
	vs_top=sup;
	V322= vs_base[0];
	if(((V322))==Cnil){
	goto T1203;}
	{register object V325;
	V317= (V322);
	V325= (V317);
	V318= (MVloc[(0)]);
	V319= (MVloc[(1)]);
	V320= (MVloc[(2)]);
	V321= (MVloc[(3)]);}
	V317= make_fixnum((fix((V322)))-(1));
	goto T1201;
T1203:;
	V316= make_fixnum((fix((V324)))-(1));
	goto T1189;
T1201:;
	V324= one_plus((V324));
	goto T1193;}
T1189:;
	V317= make_fixnum((fix((V317)))+(1));
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

static L47()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_reserve(VM45);
	{object V327;
	register object V328;
	if(vs_top-vs_base>2) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T1231;}
	V327=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1232;}
	V328=(base[1]);
	vs_top=sup;
	goto T1233;
T1231:;
	V327= small_fixnum(1000);
T1232:;
	V328= symbol_value(VV[87]);
T1233:;
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
T1243:;
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
	goto T1257;}
	goto T1241;
T1257:;
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
	goto T1268;}
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	vs_top=sup;
	goto T1241;
T1268:;
	V328= make_fixnum((fix((V328)))-(1));
	goto T1243;
T1241:;
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;}
	}
}
/*	function definition for DISPLAY-COMPILED-ENV	*/

static L48()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_reserve(VM46);
	{register object V335;
	object V336;
	check_arg(2);
	V335=(base[0]);
	V336=(base[1]);
	vs_top=sup;
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
T1286:;
	if((fix((V341)))>=(fix((V338)))){
	goto T1288;}
	base[4]= symbol_value(VV[77]);
	vs_top=(vs_base=base+4)+1;
	Lfill_pointer();
	vs_top=sup;
	V344= vs_base[0];
	if(!((fix(V344))>(fix((V335))))){
	goto T1287;}
T1288:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
T1287:;
	base[4]= symbol_value(VV[77]);
	base[5]= VV[89];{object V345;
	V345= car((V342));
	if(V345==Cnil)goto T1299;
	base[6]= V345;
	goto T1298;
T1299:;}
	base[6]= VV[90];
T1298:;
	if((car((V342)))!=Cnil){
	goto T1303;}
	base[7]= make_fixnum((fix((V341)))-(fix((V337))));
	goto T1301;
T1303:;
	base[7]= Cnil;
T1301:;
	base[9]= (V341);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	base[8]= vs_base[0];
	V341= make_fixnum((fix((V341)))+(1));
	base[9]= ((fix((V341)))<(fix((V338)))?Ct:Cnil);
	vs_top=(vs_base=base+4)+6;
	Lformat();
	vs_top=sup;
	V342= cdr((V342));
	goto T1286;}}
	}
}
/*	function definition for COMPUTING-ARGS-P	*/

static L49()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_reserve(VM47);
	{object V346;
	check_arg(1);
	V346=(base[0]);
	vs_top=sup;
TTL:;
	base[1]= (V346);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V347= vs_base[0];
	if(type_of(V347)==t_cons){
	goto T1312;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T1312:;
	if(number_compare((V346),small_fixnum(3))>0){
	goto T1316;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
T1316:;
	base[1]= (V346);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V350= vs_base[0];
	{register object x= car(V350),V349= VV[91];
	while(!endp(V349))
	if(eql(x,V349->c.c_car)){
	V348= V349;
	goto T1318;
	}else V349=V349->c.c_cdr;
	V348= Cnil;}
T1318:;
	base[1]= ((V348)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for PRINT-STACK-FRAME	*/

static L50()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_reserve(VM48);
	{object V351;
	object V352;
	register object V353;
	object V354;
	object V355;
	object V356;
	object V357;
	if(vs_top-vs_base<4) too_few_arguments();
	if(vs_top-vs_base>7) too_many_arguments();
	V351=(base[0]);
	V352=(base[1]);
	V353=(base[2]);
	V354=(base[3]);
	vs_base=vs_base+4;
	if(vs_base>=vs_top){vs_top=sup;goto T1321;}
	V355=(base[4]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1322;}
	V356=(base[5]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1323;}
	V357=(base[6]);
	vs_top=sup;
	goto T1324;
T1321:;
	V355= Cnil;
T1322:;
	V356= Cnil;
T1323:;
	V357= Cnil;
T1324:;
	if(((V352))==Cnil){
	goto T1328;}
	if(((V355))==Cnil){
	goto T1328;}
	base[7]= symbol_value(VV[1]);
	base[8]= VV[92];
	base[9]= (V356);
	base[10]= (V355);
	vs_top=(vs_base=base+7)+4;
	Lformat();
	vs_top=sup;
T1328:;
	{object V358;
	base[7]= (V353);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk165)();
	vs_top=sup;
	V358= vs_base[0];
	base[7]= symbol_value(VV[1]);
	base[8]= VV[93];
	base[9]= (V351);
	if((V358)==Cnil){
	base[10]= Cnil;
	goto T1343;}
	base[10]= VV[94];
T1343:;
	base[11]= (V354);
	base[13]= (V353);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk162)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1347;}
	base[13]= VV[95];
	base[14]= small_fixnum(80);
	base[17]= (V353);
	vs_top=(vs_base=base+17)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	base[16]= vs_base[0];
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V359= vs_base[0];
	base[15]= car(V359);
	vs_top=(vs_base=base+13)+3;
	(void) (*Lnk166)();
	vs_top=sup;
	base[12]= vs_base[0];
	goto T1345;
T1347:;
	base[13]= VV[96];
	base[14]= small_fixnum(80);
	base[15]= (V353);
	vs_top=(vs_base=base+13)+3;
	(void) (*Lnk166)();
	vs_top=sup;
	base[12]= vs_base[0];
T1345:;
	vs_top=(vs_base=base+7)+6;
	Lformat();
	vs_top=sup;
	if(((V356))==Cnil){
	goto T1359;}
	base[7]= symbol_value(VV[1]);
	base[8]= VV[97];
	base[9]= (V356);
	base[10]= (V355);
	vs_top=(vs_base=base+7)+4;
	Lformat();
	vs_top=sup;
T1359:;
	base[7]= symbol_value(VV[1]);
	base[8]= VV[98];
	base[9]= (V353);
	vs_top=(vs_base=base+7)+3;
	Lformat();
	return;}
	}
}
/*	function definition for MAKE-BREAK-POINT	*/

static L51()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_reserve(VM49);
	{object V360;
	object V361;
	object V362;
	check_arg(3);
	V360=(base[0]);
	V361=(base[1]);
	V362=(base[2]);
	vs_top=sup;
TTL:;
	V363= aref1((V361),fixint((V362)));
	V364= aref1((V361),0);
	V365= car(/* INLINE-ARGS */V364);
	V366= aref1((V361),0);
	V367 = make_fixnum((fix(cdr(/* INLINE-ARGS */V366)))+(fix((V362))));
	base[3]= list(4,/* INLINE-ARGS */V363,/* INLINE-ARGS */V365,V367,(V360));
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for RELATIVE-LINE	*/

static L52()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_reserve(VM50);
	{object V368;
	object V369;
	check_arg(2);
	V368=(base[0]);
	V369=(base[1]);
	vs_top=sup;
TTL:;
	{object V370;
	V370= get((V368),VV[49],Cnil);
	if(((V370))==Cnil){
	goto T1371;}
	V371= aref1((V370),0);
	base[2]= make_fixnum((fix((V369)))-(fix(cdr(/* INLINE-ARGS */V371))));
	vs_top=(vs_base=base+2)+1;
	return;
T1371:;
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for SAFE-EVAL	*/

static L53()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_reserve(VM51);
	bds_check;
	{register object V372;
	object V373;
	check_arg(2);
	V372=(base[0]);
	V373=(base[1]);
	vs_top=sup;
TTL:;
	bds_bind(VV[99],Cnil);
	bds_bind(VV[100],symbol_value(VV[101]));
	bds_bind(VV[1],symbol_value(VV[101]));
	if(!(type_of((V372))==t_symbol)){
	goto T1373;}
	base[5]= (V372);
	vs_top=(vs_base=base+5)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1373;}
	{register object x= (V372),V374= car((V373));
	while(!endp(V374))
	if(type_of(V374->c.c_car)==t_cons &&eql(x,V374->c.c_car->c.c_car)){
	goto T1373;
	}else V374=V374->c.c_cdr;}
	base[5]= VV[102];
	vs_top=(vs_base=base+5)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
T1373:;
	{object V375;
	object V376;
	V377= list(2,VV[104],(V372));
	base[5]= list(5,VV[103],/* INLINE-ARGS */V377,Cnil,Cnil,list(2,VV[104],(V373)));
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk167)();
	if(vs_base>=vs_top){vs_top=sup;goto T1383;}
	V375= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1384;}
	V376= vs_base[0];
	vs_top=sup;
	goto T1385;
T1383:;
	V375= Cnil;
T1384:;
	V376= Cnil;
T1385:;
	if(((V375))==Cnil){
	goto T1387;}
	base[5]= VV[102];
	vs_top=(vs_base=base+5)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
T1387:;
	base[5]= (V376);
	vs_top=(vs_base=base+5)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;}
	}
}
/*	function definition for SET-BACK	*/

static L54()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_reserve(VM52);
	{register object V378;
	register object V379;
	check_arg(2);
	V378=(base[0]);
	V379=(base[1]);
	vs_top=sup;
TTL:;
	{object V380;
	V380= symbol_value(VV[9]);
	setq(VV[105],Cnil);
	setq(VV[9],(V380));
	if(((V379))==Cnil){
	goto T1396;}
	setq(VV[0],(V379));
	goto T1394;
T1396:;
	base[3]= (V380);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk112)();
	vs_top=sup;
	V381= vs_base[0];
	(void)(make_cons(V381,Cnil));
T1394:;
	if(((V378))==Cnil){
	goto T1402;}
	base[2]= symbol_value(VV[1]);
	base[3]= VV[106];
	base[4]= cadr((V378));
	base[5]= caddr((V378));
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
	base[2]= symbol_value(VV[1]);
	base[3]= VV[107];
	base[4]= cadr((V378));
	base[5]= caddr((V378));
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
T1402:;
	{register object V382;
	register object V383;
	V382= symbol_value(VV[108]);
	V383= car((V382));
T1417:;
	if(!(endp((V382)))){
	goto T1418;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
T1418:;
	{register object V384;
	base[3]= (V383);
	base[4]= (V379);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk168)();
	vs_top=sup;
	V384= vs_base[0];
	if(!(((V384))==(VV[102]))){
	goto T1426;}
	goto T1422;
T1426:;
	base[3]= Ct;
	base[4]= VV[109];
	base[5]= (V383);
	base[6]= (V384);
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;}
T1422:;
	V382= cdr((V382));
	V383= car((V382));
	goto T1417;}}
	}
}
static LnkT168(){ call_or_link(VV[168],&Lnk168);} /* SAFE-EVAL */
static LnkT167(){ call_or_link(VV[167],&Lnk167);} /* ERROR-SET */
static LnkT166(){ call_or_link(VV[166],&Lnk166);} /* APPLY-DISPLAY-FUN */
static LnkT165(){ call_or_link(VV[165],&Lnk165);} /* COMPUTING-ARGS-P */
static LnkT164(){ call_or_link(VV[164],&Lnk164);} /* VS-TOP */
static LnkT163(){ call_or_link(VV[163],&Lnk163);} /* NEXT-STACK-FRAME */
static LnkT162(){ call_or_link(VV[162],&Lnk162);} /* IHS-NOT-INTERPRETED-ENV */
static LnkT161(){ call_or_link(VV[161],&Lnk161);} /* GET-LINE-OF-FORM */
static LnkT160(){ call_or_link(VV[160],&Lnk160);} /* PRINT-STACK-FRAME */
static object  LnkTLI159(){return call_proc0(VV[159],&LnkLI159);} /* SET-ENV */
static LnkT158(){ call_or_link(VV[158],&Lnk158);} /* NTH-STACK-FRAME */
static LnkT157(){ call_or_link(VV[157],&Lnk157);} /* DBL-WHAT-FRAME */
static LnkT156(){ call_or_link(VV[156],&Lnk156);} /* GET-NEXT-VISIBLE-FUN */
static LnkT155(){ call_or_link(VV[155],&Lnk155);} /* STRING-MATCH */
static LnkT154(){ call_or_link(VV[154],&Lnk154);} /* PACKAGE-SIZE */
static LnkT150(){ call_or_link(VV[150],&Lnk150);} /* RELATIVE-LINE */
static LnkT149(){ call_or_link(VV[149],&Lnk149);} /* SHORT-NAME */
static LnkT148(){ call_or_link(VV[148],&Lnk148);} /* SHOW-BREAK-POINT */
static LnkT147(){ call_or_link(VV[147],&Lnk147);} /* INSERT-BREAK-POINT */
static LnkT146(){ call_or_link(VV[146],&Lnk146);} /* BREAK-FUNCTION */
static LnkT145(){ call_or_link(VV[145],&Lnk145);} /* DWIM */
static LnkT144(){ call_or_link(VV[144],&Lnk144);} /* MAYBE-BREAK */
static object  LnkTLI143(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[143],&LnkLI143,ap);} /* POSITION */
static LnkT142(){ call_or_link(VV[142],&Lnk142);} /* CURRENT-STEP-FUN */
static LnkT141(){ call_or_link(VV[141],&Lnk141);} /* INIT-BREAK-POINTS */
static LnkT140(){ call_or_link(VV[140],&Lnk140);} /* IHS-FNAME */
static LnkT139(){ call_or_link(VV[139],&Lnk139);} /* ITERATE-OVER-BKPTS */
static LnkT138(){ call_or_link(VV[138],&Lnk138);} /* MAKE-BREAK-POINT */
static object  LnkTLI137(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[137],&LnkLI137,ap);} /* MAKE-ARRAY */
static LnkT136(){ call_or_link(VV[136],&Lnk136);} /* WALK-THROUGH */
static object  LnkTLI135(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[135],&LnkLI135,ap);} /* VECTOR-PUSH-EXTEND */
static LnkT134(){ call_or_link(VV[134],&Lnk134);} /* INSTREAM-NAME */
static LnkT133(){ call_or_link(VV[133],&Lnk133);} /* LOAD */
static LnkT132(){ call_or_link(VV[132],&Lnk132);} /* SETUP-LINEINFO */
static LnkT131(){ call_or_link(VV[131],&Lnk131);} /* CLEANUP */
static LnkT128(){ call_or_link(VV[128],&Lnk128);} /* READ-FROM-STRING */
static object  LnkTLI127(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[127],&LnkLI127,ap);} /* COUNT */
static LnkT126(){ call_or_link(VV[126],&Lnk126);} /* GET-INSTREAM */
static LnkT125(){ call_or_link(VV[125],&Lnk125);} /* MAKE-INSTREAM */
static LnkT124(){ call_or_link(VV[124],&Lnk124);} /* STREAM-NAME */
static object  LnkTLI123(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[123],&LnkLI123,ap);} /* DELETE */
static LnkT122(){ call_or_link(VV[122],&Lnk122);} /* CLOSEDP */
static LnkT121(){ call_or_link(VV[121],&Lnk121);} /* BREAK-LEVEL */
static object  LnkTLI120(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[120],&LnkLI120,1,ap);} /* SHOW-ENVIRONMENT */
static LnkT119(){ call_or_link(VV[119],&Lnk119);} /* BREAK-LOCALS */
static LnkT118(){ call_or_link(VV[118],&Lnk118);} /* BREAK-GO */
static object  LnkTLI117(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[117],&LnkLI117,ap);} /* SEARCH */
static LnkT116(){ call_or_link(VV[116],&Lnk116);} /* COMPILED-FUNCTION-NAME */
static LnkT115(){ call_or_link(VV[115],&Lnk115);} /* IHS-FUN */
static object  LnkTLI114(){return call_proc0(VV[114],&LnkLI114);} /* TYPE-ERROR */
static LnkT113(){ call_or_link(VV[113],&Lnk113);} /* IHS-TOP */
static LnkT112(){ call_or_link(VV[112],&Lnk112);} /* VS */
static LnkT111(){ call_or_link(VV[111],&Lnk111);} /* IHS-VS */
static LnkT110(){ call_or_link(VV[110],&Lnk110);} /* BREAK-PREVIOUS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

