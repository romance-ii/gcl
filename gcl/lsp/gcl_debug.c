
#include "cmpinclude.h"
#include "gcl_debug.h"
void init_gcl_debug(){do_init(VV);}
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
	(void) (*Lnk113)();
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
	(void) (*Lnk114)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V6= vs_base[0];
	if(!(type_of((V6))==t_cons||((V6))==Cnil)){
	goto T35;}
	{register object V7;
	register object V8;
	base[3]= (V5);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk114)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk115)();
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
/*	local entry for function SEARCH-STACK	*/

static object LI3(V13)

object V13;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V14;
	V14= Cnil;
	if(!(type_of((V13))==t_symbol)){
	goto T62;}
	V14= symbol_name((V13));
	goto T60;
	goto T62;
T62:;
	V14= (V13);
	goto T60;
T60:;
	{register long V15;
	register long V16;
	{object V17;
	vs_base=vs_top;
	(void) (*Lnk116)();
	vs_top=sup;
	V17= vs_base[0];{object V18;
	V18= (type_of((V17))==t_fixnum?Ct:Cnil);
	if(V18==Cnil)goto T67;
	goto T66;
	goto T67;
T67:;}
	(void)((*(LnkLI117))());
	goto T66;
T66:;
	V15= fix((V17));}
	V16= 2;
	{register object V19;
	V19= Cnil;
	{register object V20;
	V20= Cnil;
	goto T71;
T71:;
	if((V15)<=(V16)){
	goto T74;}
	goto T73;
	goto T74;
T74:;
	goto T72;
	goto T73;
T73:;
	{register object V21;
	base[0]= make_fixnum(V15);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk118)();
	vs_top=sup;
	V21= vs_base[0];
	V19= (V21);}
	base[0]= (V19);
	vs_top=(vs_base=base+0)+1;
	Lcompiled_function_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T82;}
	base[0]= (V19);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk119)();
	vs_top=sup;
	V20= vs_base[0];
	goto T80;
	goto T82;
T82:;
	if(!(type_of((V19))==t_symbol)){
	goto T88;}
	V20= (V19);
	goto T80;
	goto T88;
T88:;
	if(!(type_of((V19))==t_cons||((V19))==Cnil)){
	goto T92;}
	{register object x= car((V19)),V22= VV[4];
	while(!endp(V22))
	if(eql(x,V22->c.c_car)){
	goto T95;
	}else V22=V22->c.c_cdr;
	goto T92;}
	goto T95;
T95:;
	V20= cadr((V19));
	goto T80;
	goto T92;
T92:;
	V20= VV[5];
	goto T80;
T80:;
	V23= symbol_name((V20));
	if(((VFUN_NARGS=4,(*(LnkLI120))((V14),/* INLINE-ARGS */V23,VV[6],VV[7])))==Cnil){
	goto T98;}
	base[0]= make_fixnum(V15);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk121)();
	vs_top=sup;
	princ_char(10,Cnil);
	{object V24 = (VFUN_NARGS=0,(*(LnkLI122))());
	VMR3(V24)}
	goto T98;
T98:;
	V15= (long)(V15)-(1);
	goto T71;
	goto T72;
T72:;
	base[0]= symbol_value(VV[1]);
	base[1]= VV[8];
	base[2]= (V14);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V25 = Cnil;
	VMR3(V25)}
	{object V26 = Cnil;
	VMR3(V26)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BREAK-LOCALS	*/

static object LI4(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB4 VMS4 VMV4
	bds_check;
	{object V27;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T111;
	else {
	V27= first;}
	--narg; goto T112;
	goto T111;
T111:;
	V27= small_fixnum(1);
	goto T112;
T112:;
	{object V28;
	object V29;
	object V30;
	object V31;
	object V32;
	object V33;
	V28= symbol_value(VV[9]);
	base[5]= (V28);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk114)();
	vs_top=sup;
	V29= vs_base[0];
	bds_bind(VV[11],symbol_value(VV[10]));
	bds_bind(VV[12],Cnil);
	bds_bind(VV[13],symbol_value(VV[10]));
	V30= symbol_value(VV[9]);
	base[5]= (V28);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk118)();
	vs_top=sup;
	V31= vs_base[0];
	V32= Cnil;
	V33= Cnil;
	if(!((fix((V27)))>(1))){
	goto T123;}
	{register long V34;
	long V35;
	V34= 0;{object V36;
	V36= (type_of((V27))==t_fixnum?Ct:Cnil);
	if(V36==Cnil)goto T128;
	goto T127;
	goto T128;
T128:;}
	(void)((*(LnkLI117))());
	goto T127;
T127:;
	V35= fix((V27));
	{register long V37;
	long V38;{object V39;
	V39= (type_of((V30))==t_fixnum?Ct:Cnil);
	if(V39==Cnil)goto T132;
	goto T131;
	goto T132;
T132:;}
	(void)((*(LnkLI117))());
	goto T131;
T131:;
	V37= fix((V30));
	V38= 2;
	goto T136;
T136:;
	if((V37)<=(V38)){
	goto T139;}
	goto T138;
	goto T139;
T139:;
	goto T137;
	goto T138;
T138:;
	if((V34)>=(V35)){
	goto T142;}
	goto T141;
	goto T142;
T142:;
	goto T137;
	goto T141;
T141:;
	bds_bind(VV[9],make_fixnum(V37));
	(void)((VFUN_NARGS=0,(*(LnkLI122))()));
	princ_char(10,Cnil);
	princ_char(10,Cnil);
	bds_unwind1;
	V34= (long)(V34)+(1);
	V37= (long)(V37)-(1);
	goto T136;
	goto T137;
T137:;
	{object V40 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR4(V40)}
	{object V41 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR4(V41)}}}
	goto T123;
T123:;
	base[5]= (V31);
	vs_top=(vs_base=base+5)+1;
	Lcompiled_function_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T154;}
	base[5]= (V31);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk119)();
	vs_top=sup;
	V32= vs_base[0];
	goto T152;
	goto T154;
T154:;
	V32= (V31);
	goto T152;
T152:;
	if(!(type_of((V32))==t_symbol)){
	goto T160;}
	V33= get((V32),VV[14],Cnil);
	goto T160;
T160:;
	{object V42;
	base[5]= make_fixnum((long)(1)+(fix(symbol_value(VV[9]))));
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk114)();
	vs_top=sup;
	V42= vs_base[0];
	if(((V42))==Cnil){
	goto T167;}
	base[5]= symbol_value(VV[1]);
	base[6]= VV[15];
	base[7]= (V32);
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	if(!(type_of((V32))==t_symbol)){
	goto T174;}
	{register long V43;
	long V44;{object V45;
	V45= (type_of((V29))==t_fixnum?Ct:Cnil);
	if(V45==Cnil)goto T178;
	goto T177;
	goto T178;
T178:;}
	(void)((*(LnkLI117))());
	goto T177;
T177:;
	V43= fix((V29));{object V46;
	V46= (type_of((V42))==t_fixnum?Ct:Cnil);
	if(V46==Cnil)goto T182;
	goto T181;
	goto T182;
T182:;}
	(void)((*(LnkLI117))());
	goto T181;
T181:;
	V44= fix((V42));
	{register long V47;
	V47= 0;
	{register object V48;
	V48= Cnil;
	goto T186;
T186:;
	if((V43)>=(V44)){
	goto T189;}
	goto T188;
	goto T189;
T189:;
	goto T187;
	goto T188;
T188:;
	V48= Cnil;
	{register object x= small_fixnum(0),V49= (V33);
	while(!endp(V49))
	if(eql(x,V49->c.c_car)){
	goto T196;
	}else V49=V49->c.c_cdr;
	goto T195;}
	goto T196;
T196:;
	base[5]= (V33);
	base[6]= make_fixnum(V47);
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V48= vs_base[0];
	goto T193;
	goto T195;
T195:;
	V48= nth(V47,(V33));
	goto T193;
T193:;
	if(((V48))==Cnil){
	goto T203;}
	base[5]= Ct;
	base[6]= VV[16];
	base[7]= make_fixnum(V47);
	base[8]= (V48);
	base[10]= make_fixnum(V43);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	base[9]= vs_base[0];
	vs_top=(vs_base=base+5)+5;
	Lformat();
	vs_top=sup;
	goto T201;
	goto T203;
T203:;
	base[5]= symbol_value(VV[1]);
	base[6]= VV[17];
	base[7]= make_fixnum(V47);
	base[9]= make_fixnum(V43);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+5)+4;
	Lformat();
	vs_top=sup;
	goto T201;
T201:;
	V43= (long)(V43)+(1);
	if(!((V47)<(2147483646))){
	goto T219;}
	goto T218;
	goto T219;
T219:;
	(void)((*(LnkLI117))());
	goto T218;
T218:;
	V47= (long)(V47)+(1);
	goto T186;
	goto T187;
T187:;
	{object V50 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR4(V50)}
	{object V51 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR4(V51)}}}}
	goto T174;
T174:;
	if(!(type_of((V32))==t_cons||((V32))==Cnil)){
	goto T225;}
	{object V52 = (*(LnkLI123))((V28));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR4(V52)}
	goto T225;
T225:;
	base[5]= symbol_value(VV[1]);
	base[6]= VV[19];
	vs_top=(vs_base=base+5)+2;
	Lformat();
	vs_top=sup;
	{object V53 = vs_base[0];
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR4(V53)}
	goto T167;
T167:;
	{object V54 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR4(V54)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for LOC	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{object V55;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T229;}
	V55=(base[0]);
	vs_top=sup;
	goto T230;
	goto T229;
T229:;
	V55= small_fixnum(0);
	goto T230;
T230:;
	{object V56;
	base[1]= symbol_value(VV[9]);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk114)();
	vs_top=sup;
	V56= vs_base[0];
	if(!((fix((V55)))>=(0))){
	goto T235;}
	vs_base=vs_top;
	(void) (*Lnk116)();
	vs_top=sup;
	V58= vs_base[0];
	V59 = make_fixnum((long)(1)+(fix(symbol_value(VV[9]))));
	base[1]= (number_compare(V58,V59)<=0?(V58):V59);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk114)();
	vs_top=sup;
	V57= vs_base[0];
	if((fix((V55)))<((long)(fix(V57))-(fix((V56))))){
	goto T234;}
	goto T235;
T235:;
	base[1]= VV[20];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T234;
T234:;
	base[1]= make_fixnum((long)(fix((V55)))+(fix((V56))));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk115)();
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
	{object V60=base[0]->c.c_cdr;
	if(endp(V60))invalid_macro_call();
	base[2]= (V60->c.c_car);
	V60=V60->c.c_cdr;
	if(endp(V60))invalid_macro_call();
	base[3]= (V60->c.c_car);
	V60=V60->c.c_cdr;
	if(!endp(V60))invalid_macro_call();}
	V61= list(3,VV[22],car(base[2]),base[3]);
	{register object V63;
	register object V64;
	register object V65;
	V63= cdr(base[2]);
	V64= small_fixnum(0);
	V65= Cnil;
	goto T247;
T247:;
	if(((V63))!=Cnil){
	goto T248;}
	V62= reverse((V65));
	goto T244;
	goto T248;
T248:;
	{register object V66;
	V67= car((V63));
	V66= list(3,VV[22],/* INLINE-ARGS */V67,list(2,VV[23],(V64)));
	V65= make_cons((V66),(V65));}
	V63= cdr((V63));
	V64= one_plus((V64));
	goto T247;}
	goto T244;
T244:;
	base[4]= listA(3,VV[21],/* INLINE-ARGS */V61,V62);
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
	{object V68=base[0]->c.c_cdr;
	base[2]= V68;}
	V69= car(base[2]);
	{register object V71;
	register object V72;
	register object V73;
	V71= cdr(base[2]);
	V72= small_fixnum(0);
	V73= Cnil;
	goto T262;
T262:;
	if(((V71))!=Cnil){
	goto T263;}
	V70= reverse((V73));
	goto T259;
	goto T263;
T263:;
	{register object V74;
	V74= list(3,VV[24],(V72),car((V71)));
	V73= make_cons((V74),(V73));}
	V71= cdr((V71));
	V72= one_plus((V72));
	goto T262;}
	goto T259;
T259:;
	base[3]= listA(3,VV[21],/* INLINE-ARGS */V69,V70);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function DBL	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V75 = (VFUN_NARGS=2,(*(LnkLI124))(Cnil,Cnil));
	VMR8(V75)}
	return Cnil;
}
/*	local entry for function MAKE-INSTREAM	*/

static object LI9(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V76;
	object V77;
	object V78;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI9key,first,ap);
	V76=(Vcs[0]);
	V77=(Vcs[1]);
	V78=(Vcs[2]);
	base[0]= VV[25];
	base[1]= (V76);
	base[2]= (V77);
	base[3]= (V78);
	vs_top=(vs_base=base+0)+4;
	siLmake_structure();
	vs_top=sup;
	{object V79 = vs_base[0];
	VMR9(V79)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function CLEANUP	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{register object V80;
	register object V81;
	V80= symbol_value(VV[26]);
	V81= car((V80));
	goto T281;
T281:;
	if(!(endp_prop((V80)))){
	goto T282;}
	{object V82 = Cnil;
	VMR10(V82)}
	goto T282;
T282:;
	base[1]= structure_ref((V81),VV[25],0);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk126)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T286;}
	setq(VV[26],(VFUN_NARGS=2,(*(LnkLI127))((V81),symbol_value(VV[26]))));
	goto T286;
T286:;
	V80= cdr((V80));
	V81= car((V80));
	goto T281;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-INSTREAM	*/

static object LI11(V84)

register object V84;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;{object V85;
	{register object V86;
	register object V87;
	V86= symbol_value(VV[26]);
	V87= car((V86));
	goto T301;
T301:;
	if(!(endp_prop((V86)))){
	goto T302;}
	V85= Cnil;
	goto T297;
	goto T302;
T302:;
	V88= structure_ref((V87),VV[25],0);
	if(!(((V84))==(/* INLINE-ARGS */V88))){
	goto T306;}
	V85= (V87);
	goto T297;
	goto T306;
T306:;
	V86= cdr((V86));
	V87= car((V86));
	goto T301;}
	goto T297;
T297:;
	if(V85==Cnil)goto T296;
	{object V89 = V85;
	VMR11(V89)}
	goto T296;
T296:;}
	base[0]= (V84);
	vs_top=(vs_base=base+0)+1;
	Lstreamp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T317;}
	base[0]= (V84);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk129)();
	vs_top=sup;
	V90= vs_base[0];
	goto T315;
	goto T317;
T317:;
	V90= Cnil;
	goto T315;
T315:;
	V91= (VFUN_NARGS=4,(*(LnkLI128))(VV[27],(V84),VV[28],V90));
	setq(VV[26],make_cons(/* INLINE-ARGS */V91,symbol_value(VV[26])));
	{object V92 = car(symbol_value(VV[26]));
	VMR11(V92)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for NEWLINE	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	{object V93;
	object V94;
	check_arg(2);
	V93=(base[0]);
	V94=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V95;
	V95= (*(LnkLI130))((V93));
	{long V96= fix(structure_ref((V95),VV[25],1));
	V97 = make_fixnum((long)(1)+(/* INLINE-ARGS */V96));
	(void)(structure_set((V95),VV[25],1,V97));}}
	base[2]= Cnil;
	base[3]= (V93);
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	Lpeek_char();
	vs_top=sup;
	V98= vs_base[0];
	if(!(eql(V98,VV[30]))){
	goto T327;}
	setq(VV[29],VV[31]);
	goto T325;
	goto T327;
T327:;
	setq(VV[29],Ct);
	goto T325;
T325:;
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;
	}
}
/*	local entry for function QUOTATION-READER	*/

static object LI13(V101,V102)

object V101;object V102;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V103;
	object V104;
	V103= (
	(type_of(symbol_value(VV[32])) == t_sfun ?(*((symbol_value(VV[32]))->sfn.sfn_self)):
	(fcall.fun=(symbol_value(VV[32])),fcall.argd=2,fcalln))((V101),(V102)));
	V104= (*(LnkLI130))((V101));
	{object V106;
	V107= structure_ref(V104,VV[25],1);
	V108= (VFUN_NARGS=2,(*(LnkLI131))(VV[33],(V103)));
	V106= number_plus(/* INLINE-ARGS */V107,/* INLINE-ARGS */V108);
	(void)(structure_set(V104,VV[25],1,(V106)));}
	{object V109 = (V103);
	VMR13(V109)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for NEW-SEMI-COLON-READER	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	bds_check;
	{register object V110;
	object V111;
	check_arg(2);
	V110=(base[0]);
	V111=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V112;
	object V113;
	V112= (*(LnkLI130))((V110));
	base[2]= Cnil;
	base[3]= (V110);
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+2)+4;
	Lpeek_char();
	vs_top=sup;
	V113= vs_base[0];
	{long V114= fix(structure_ref((V112),VV[25],1));
	V115 = make_fixnum((long)(1)+(/* INLINE-ARGS */V114));
	(void)(structure_set((V112),VV[25],1,V115));}
	if(!(eql((V113),VV[34]))){
	goto T346;}
	base[2]= (V110);
	vs_top=(vs_base=base+2)+1;
	Lread_char();
	vs_top=sup;
	{register object V116;
	bds_bind(VV[35],symbol_value(VV[36]));
	base[5]= (V110);
	base[6]= Cnil;
	base[7]= Cnil;
	vs_top=(vs_base=base+5)+3;
	Lread_line();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk132)();
	vs_top=sup;
	V116= vs_base[0];
	if(!(type_of((V116))==t_cons)){
	bds_unwind1;
	goto T344;}
	if(!((car((V116)))==(VV[37]))){
	bds_unwind1;
	goto T344;}
	if(!(type_of(cadr((V116)))==t_string)){
	bds_unwind1;
	goto T344;}
	if(!(type_of(caddr((V116)))==t_fixnum)){
	bds_unwind1;
	goto T344;}
	(void)(structure_set((V112),VV[25],2,cadr((V116))));
	V117= structure_set((V112),VV[25],1,caddr((V116)));
	bds_unwind1;
	goto T344;}
	goto T346;
T346:;
	(void)((
	(type_of(symbol_value(VV[38])) == t_sfun ?(*((symbol_value(VV[38]))->sfn.sfn_self)):
	(fcall.fun=(symbol_value(VV[38])),fcall.argd=2,fcalln))((V110),(V111))));
	goto T344;
T344:;
	base[2]= Cnil;
	base[3]= (V110);
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	Lpeek_char();
	vs_top=sup;
	V118= vs_base[0];
	if(!(eql(V118,VV[30]))){
	goto T367;}
	setq(VV[29],VV[31]);
	goto T365;
	goto T367;
T367:;
	setq(VV[29],Ct);
	goto T365;
T365:;
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;}
	}
}
/*	local entry for function SETUP-LINEINFO	*/

static object LI15()

{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	base[0]= VV[33];
	base[1]= symbol_function(VV[133]);
	base[2]= Cnil;
	base[3]= symbol_value(VV[39]);
	vs_top=(vs_base=base+0)+4;
	Lset_macro_character();
	vs_top=sup;
	base[0]= VV[40];
	base[1]= symbol_function(VV[134]);
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
	vs_top=sup;
	{object V119 = vs_base[0];
	VMR15(V119)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for NLOAD	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	bds_check;
	{object V120;
	object V121;
	if(vs_top-vs_base<1) too_few_arguments();
	V120=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V121=(base[1]);
	vs_top=sup;
	base[2]= symbol_value(VV[44]);
	vs_top=(vs_base=base+2)+1;
	Lclrhash();
	vs_top=sup;
	(void)((*(LnkLI135))());
	base[2]= (V120);
	vs_top=(vs_base=base+2)+1;
	Ltruename();
	vs_top=sup;
	V120= vs_base[0];
	(void)((*(LnkLI136))());
	bds_bind(VV[35],symbol_value(VV[39]));
	base[3]=symbol_function(VV[137]);
	base[4]= (V120);
	{object V122;
	V122= (V121);
	 vs_top=base+5;
	 while(!endp(V122))
	 {vs_push(car(V122));V122=cdr(V122);}
	vs_base=base+4;}
	(void) (*Lnk137)();
	bds_unwind1;
	return;
	}
}
/*	local entry for function LEFT-PARENTHESIS-READER	*/

static object LI17(V125,V126)

object V125;object V126;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V127;
	register object V128;
	V127= Cnil;
	V128= symbol_value(VV[29]);
	if(!((symbol_value(VV[29]))==(Ct))){
	goto T403;}
	setq(VV[29],Cnil);
	goto T403;
T403:;
	if(((V128))==Cnil){
	goto T407;}
	V128= (*(LnkLI130))((V125));
	V127= structure_ref((V128),VV[25],1);
	goto T407;
T407:;
	{object V129;
	V129= (
	(type_of(symbol_value(VV[45])) == t_sfun ?(*((symbol_value(VV[45]))->sfn.sfn_self)):
	(fcall.fun=(symbol_value(VV[45])),fcall.argd=2,fcalln))((V125),(V126)));
	if(((V128))==Cnil){
	goto T414;}
	{object V131;
	object V132;
	V131= symbol_value(VV[44]);
	base[1]= (V128);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk138)();
	vs_top=sup;
	V133= vs_base[0];
	V132= make_cons(V133,(V127));
	base[1]= V129;
	base[2]= (V131);
	base[3]= (V132);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;}
	goto T414;
T414:;
	{object V134 = (V129);
	VMR17(V134)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-THROUGH	*/

static object LI18(V136)

register object V136;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{register object V137;
	V137= Cnil;
	goto T426;
T426:;
	if(!(type_of((V136))==t_cons)){
	goto T427;}
	base[0]= (V136);
	base[1]= symbol_value(VV[44]);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V137= vs_base[0];
	if(((V137))==Cnil){
	goto T430;}
	if(!(type_of(car((V136)))==t_cons)){
	goto T437;}
	if((caar((V136)))==(VV[46])){
	goto T437;}
	base[0]= (V136);
	base[1]= symbol_value(VV[44]);
	vs_top=(vs_base=base+0)+2;
	Lremhash();
	vs_top=sup;
	{register object V138;
	register object V139;
	register object V140;
	V138= car((V136));
	V139= symbol_value(VV[44]);
	V140= (V137);
	base[1]= (V138);
	base[2]= (V139);
	base[3]= (V140);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;
	goto T430;}
	goto T437;
T437:;
	V141= make_cons((V137),(V136));
	(void)((VFUN_NARGS=2,(*(LnkLI139))(/* INLINE-ARGS */V141,symbol_value(VV[47]))));
	goto T430;
T430:;
	(void)((*(LnkLI140))(car((V136))));
	V136= cdr((V136));
	goto T426;
	goto T427;
T427:;
	{object V142 = Cnil;
	VMR18(V142)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPILER-DEF-HOOK	*/

static object LI19(V145,V146)

object V145;object V146;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V147;
	register long V148;
	long V149;
	V147= symbol_value(VV[47]);
	V148= 2147483647;
	V149= -1;
	if(!(type_of((V146))!=t_cons)){
	goto T457;}
	{object V150 = remprop((V145),VV[49]);
	VMR19(V150)}
	goto T457;
T457:;
	if(!((symbol_value(VV[35]))==(symbol_value(VV[39])))){
	goto T460;}
	base[0]= symbol_value(VV[47]);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	(void)((*(LnkLI140))((V146)));
	{object V151;
	register long V152;
	V151= make_fixnum((long)length((V147)));
	V152= 0;
	goto T470;
T470:;
	V153 = make_fixnum(V152);
	if(!(number_compare(V153,(V151))>=0)){
	goto T471;}
	goto T466;
	goto T471;
T471:;
	{register long V154;
	V155= aref1((V147),V152);
	V154= fix(cdar(/* INLINE-ARGS */V155));
	if(!((V154)>(V149))){
	goto T477;}
	V149= V154;
	goto T477;
T477:;
	if(!((V154)<(V148))){
	goto T475;}
	V148= V154;}
	goto T475;
T475:;
	V152= (long)(V152)+1;
	goto T470;}
	goto T466;
T466:;
	if(!(((long)length(symbol_value(VV[47])))>(0))){
	goto T488;}
	{object V156;
	object V157;
	V158 = make_fixnum((long)((long)(V149)-(V148))+(2));
	V156= (VFUN_NARGS=3,(*(LnkLI141))(V158,VV[50],VV[51]));
	V157= get((V145),VV[49],Cnil);
	V159= aref1((V147),0);
	V160= caar(/* INLINE-ARGS */V159);
	V161 = make_fixnum(V148);
	V162= make_cons(/* INLINE-ARGS */V160,V161);
	(void)(aset1((V156),0,/* INLINE-ARGS */V162));
	V148= (long)(V148)-(1);
	{object V163;
	register object V164;
	V163= make_fixnum((long)length((V147)));
	V164= small_fixnum(0);
	goto T499;
T499:;
	if(!(number_compare((V164),(V163))>=0)){
	goto T500;}
	goto T495;
	goto T500;
T500:;
	{object V165;
	V165= aref1((V147),fixint((V164)));
	(void)(aset1((V156),(long)(fix(cdar((V165))))-(V148),cdr((V165))));}
	V164= one_plus((V164));
	goto T499;}
	goto T495;
T495:;
	(void)(sputprop((V145),VV[49],(V156)));
	if(((V157))==Cnil){
	goto T511;}
	{object V166;
	object V167;
	V166= get((V145),VV[52],Cnil);
	V168= aref1((V157),0);
	V167= cdr(/* INLINE-ARGS */V168);
	{register object V169;
	object V170;
	V169= (V166);
	V170= car((V169));
	goto T518;
T518:;
	if(!(endp_prop((V169)))){
	goto T519;}
	{object V171 = Cnil;
	VMR19(V171)}
	goto T519;
T519:;
	{object V172;
	object V173;
	object V174;
	V172= aref1(symbol_value(VV[53]),fixint((V170)));
	{object V175= cdr(cdr(cdr((V172))));
	if((type_of(V175)!=t_cons) && ((V172)!= Cnil))
	 FEwrong_type_argument(Scons,V175);
	V173= (V175->c.c_car);}
	{object V177= cdr(cdr((V172)));
	if((type_of(V177)!=t_cons) && ((V172)!= Cnil))
	 FEwrong_type_argument(Scons,V177);
	V176= fix((V177->c.c_car));}
	V174= make_fixnum((long)(V176)-(fix((V167))));{object V178;
	V178= symbol_value(VV[53]);
	V179= (*(LnkLI142))((V173),(V156),(V174));
	(void)(aset1(V178,fixint((V170)),/* INLINE-ARGS */V179));}}
	V169= cdr((V169));
	V170= car((V169));
	goto T518;}}
	goto T511;
T511:;
	{object V180 = Cnil;
	VMR19(V180)}}
	goto T488;
T488:;
	{object V181;
	V181= get((V145),VV[52],Cnil);
	{object V182 = (*(LnkLI143))((V181),VV[54]);
	VMR19(V182)}}
	goto T460;
T460:;
	{object V183 = Cnil;
	VMR19(V183)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for INSTREAM-NAME	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{object V184;
	check_arg(1);
	V184=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V185;
	V185= structure_ref((V184),VV[25],2);
	if(V185==Cnil)goto T534;
	base[1]= V185;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T534;
T534:;}
	base[1]= structure_ref((V184),VV[25],0);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk129)();
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
/*	local entry for function FIND-LINE-IN-FUN	*/

static object LI23(V190,V191,V192,V193)

object V190;object V191;register object V192;register object V193;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{object V194;
	V194= Cnil;
	V194= get((V192),VV[49],Cnil);
	if(((V194))==Cnil){
	goto T541;}
	{register object V195;
	V195= (V194);
	if(((V195))==Cnil){
	goto T544;}
	{object V196;
	register object V197;
	V196= make_fixnum((long)length((V195)));
	V197= small_fixnum(0);
	goto T549;
T549:;
	if(!(number_compare((V197),(V196))>=0)){
	goto T550;}
	{object V198 = Cnil;
	VMR21(V198)}
	goto T550;
T550:;
	V199= aref1((V195),fixint((V197)));
	if(!(((V190))==(/* INLINE-ARGS */V199))){
	goto T554;}
	if(((V193))==Cnil){
	goto T557;}
	{register object V200;
	register object V201;
	V200= (V193);
	V201= number_minus(car((V200)),small_fixnum(1));
	if(type_of((V200))!=t_cons)FEwrong_type_argument(Scons,(V200));
	((V200))->c.c_car = (V201);}
	if(!((fix(car((V193))))>(0))){
	goto T557;}
	{object V202 = VV[55];
	VMR21(V202)}
	goto T557;
T557:;
	setq(VV[56],(*(LnkLI142))((V192),(V195),(V197)));
	(void)((VFUN_NARGS=2,(*(LnkLI124))(symbol_value(VV[56]),(V191))));
	{object V203 = VV[55];
	VMR21(V203)}
	goto T554;
T554:;
	V197= one_plus((V197));
	goto T549;}
	goto T544;
T544:;
	{object V204 = Cnil;
	VMR21(V204)}}
	goto T541;
T541:;
	{object V205 = Cnil;
	VMR21(V205)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CURRENT-STEP-FUN	*/

static object LI24(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB22 VMS22 VMV22
	{object V206;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T571;
	else {
	V206= first;}
	--narg; goto T572;
	goto T571;
T571:;
	vs_base=vs_top;
	(void) (*Lnk116)();
	vs_top=sup;
	V206= vs_base[0];
	goto T572;
T572:;
	{register object V207;
	V207= one_minus((V206));
	goto T576;
T576:;
	if(!((fix((V207)))<=(0))){
	goto T577;}
	{object V208 = Cnil;
	VMR22(V208)}
	goto T577;
T577:;
	{register object V209;
	base[0]= (V207);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk144)();
	vs_top=sup;
	V209= vs_base[0];
	if((get((V209),VV[49],Cnil))==Cnil){
	goto T581;}
	{object V210 = (V209);
	VMR22(V210)}}
	goto T581;
T581:;
	V207= make_fixnum((long)(fix((V207)))-(1));
	goto T576;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function INIT-BREAK-POINTS	*/

static object LI25()

{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	base[0]= symbol_value(VV[57]);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	setq(VV[53],symbol_value(VV[57]));
	{object V211 = symbol_value(VV[53]);
	VMR23(V211)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function STEP-INTO	*/

static object LI26(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB24 VMS24 VMV24
	{object V212;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T593;
	else {
	V212= first;}
	--narg; goto T594;
	goto T593;
T593:;
	V212= small_fixnum(1);
	goto T594;
T594:;
	if(symbol_value(VV[53])!=Cnil){
	goto T596;}
	(void)((*(LnkLI145))());
	goto T596;
T596:;
	setq(VV[58],VV[59]);
	{object V213 = VV[60];
	VMR24(V213)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function STEP-NEXT	*/

static object LI27(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB25 VMS25 VMV25
	{object V214;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T599;
	else {
	V214= first;}
	--narg; goto T600;
	goto T599;
T599:;
	V214= small_fixnum(1);
	goto T600;
T600:;
	{object V215;
	V215= (VFUN_NARGS=0,(*(LnkLI146))());
	setq(VV[61],make_cons((V214),(V215)));
	if(symbol_value(VV[53])!=Cnil){
	goto T605;}
	(void)((*(LnkLI145))());
	goto T605;
T605:;
	setq(VV[58],VV[62]);
	{object V216 = VV[60];
	VMR25(V216)}}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function MAYBE-BREAK	*/

static object LI28(V221,V222,V223,V224)

object V221;object V222;object V223;object V224;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V225;
	V225= Cnil;
	V225= (VFUN_NARGS=2,(*(LnkLI147))((V221),(V222)));
	if(((V225))==Cnil){
	goto T610;}
	setq(VV[58],Cnil);
	if(!(((long)length(symbol_value(VV[53])))>(0))){
	goto T616;}
	goto T615;
	goto T616;
T616:;
	setq(VV[53],Cnil);
	goto T615;
T615:;
	V226= (*(LnkLI142))((V223),(V222),(V225));
	(void)((VFUN_NARGS=2,(*(LnkLI124))(/* INLINE-ARGS */V226,(V224))));
	{object V227 = Ct;
	VMR26(V227)}
	goto T610;
T610:;
	{object V228 = Cnil;
	VMR26(V228)}}
	return Cnil;
}
/*	local entry for function BREAK-STEP-INTO	*/

static object LI29(V231,V232)

object V231;object V232;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V233;
	V233= (VFUN_NARGS=0,(*(LnkLI146))());
	{object V234;
	V234= get((V233),VV[49],Cnil);
	{object V235 = (*(LnkLI148))((V231),(V234),(V233),(V232));
	VMR27(V235)}}}
	return Cnil;
}
/*	local entry for function BREAK-STEP-NEXT	*/

static object LI30(V238,V239)

object V238;object V239;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{object V240;
	V240= (VFUN_NARGS=0,(*(LnkLI146))());
	if(!(eql(cdr(symbol_value(VV[61])),(V240)))){
	goto T624;}
	{object V241;
	V241= get((V240),VV[49],Cnil);
	{object V242 = (*(LnkLI148))((V238),(V241),(V240),(V239));
	VMR28(V242)}}
	goto T624;
T624:;
	{object V243 = Cnil;
	VMR28(V243)}}
	return Cnil;
}
/*	local entry for function *BREAK-POINTS*	*/

static object LI31(V246,V247)

object V246;object V247;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{object V248;
	V248= (VFUN_NARGS=4,(*(LnkLI147))((V246),symbol_value(VV[53]),VV[63],VV[64]));
	base[0]= Ct;
	base[1]= VV[65];
	base[2]= (V248);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V249= aref1(symbol_value(VV[53]),fixint((V248)));
	{object V250 = (VFUN_NARGS=2,(*(LnkLI124))(/* INLINE-ARGS */V249,(V247)));
	VMR29(V250)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DWIM	*/

static object LI32(V252)

register object V252;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{register object V253;
	register object V254;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V253= vs_base[0];
	V254= car((V253));
	goto T636;
T636:;
	if(!(endp_prop((V253)))){
	goto T637;}
	goto T632;
	goto T637;
T637:;
	{register object V255;
	register object V256;
	base[2]= symbol_name((V252));
	base[3]= (V254);
	vs_top=(vs_base=base+2)+2;
	Lintern();
	if(vs_base>=vs_top){vs_top=sup;goto T645;}
	V255= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T646;}
	V256= vs_base[0];
	vs_top=sup;
	goto T647;
	goto T645;
T645:;
	V255= Cnil;
	goto T646;
T646:;
	V256= Cnil;
	goto T647;
T647:;
	if((get((V255),VV[49],Cnil))==Cnil){
	goto T649;}
	{object V257 = (V255);
	VMR30(V257)}
	goto T649;
T649:;
	if((V256)!=Cnil){
	goto T641;}
	base[2]= (V255);
	vs_top=(vs_base=base+2)+1;
	Lunintern();
	vs_top=sup;}
	goto T641;
T641:;
	V253= cdr((V253));
	V254= car((V253));
	goto T636;}
	goto T632;
T632:;
	base[0]= Ct;
	base[1]= VV[66];
	base[2]= (V252);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V258 = vs_base[0];
	VMR30(V258)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for BREAK-FUNCTION	*/

static void L33()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_reserve(VM31);
	{register object V259;
	register object V260;
	object V261;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V259=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T660;}
	V260=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T661;}
	V261=(base[2]);
	vs_top=sup;
	goto T662;
	goto T660;
T660:;
	V260= small_fixnum(1);
	goto T661;
T661:;
	V261= Cnil;
	goto T662;
T662:;
	{object V262;
	V262= Cnil;
	{register object V263;
	V263= get((V259),VV[49],Cnil);
	if(((V263))!=Cnil){
	goto T667;}
	V262= (*(LnkLI149))((V259));
	if(((V262))==Cnil){
	goto T667;}
	base[3]= (V262);
	base[4]= (V260);
	base[5]= (V261);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk150)();
	return;
	goto T667;
T667:;
	if(!(type_of((V263))==t_array||
type_of((V263))==t_vector||
type_of((V263))==t_string||
type_of((V263))==t_bitvector)){
	goto T678;}
	goto T677;
	goto T678;
T678:;
	base[3]= Ct;
	base[4]= VV[67];
	base[5]= (V259);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T677;
T677:;
	{object V264;
	V265= aref1((V263),0);
	V264= cdr(/* INLINE-ARGS */V265);
	if(((V261))==Cnil){
	goto T685;}
	V260= make_fixnum((long)(fix((V260)))-(fix((V264))));
	goto T685;
T685:;{object V266;
	if((fix((V260)))>=(1)){
	goto T692;}
	V266= Cnil;
	goto T691;
	goto T692;
T692:;
	V266= ((fix((V260)))<((long)length((V263)))?Ct:Cnil);
	goto T691;
T691:;
	if(V266==Cnil)goto T690;
	goto T689;
	goto T690;
T690:;}{object V267;
	base[3]= Ct;
	base[4]= VV[68];
	base[5]= (V259);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	V267= vs_base[0];
	if(V267==Cnil)goto T694;
	goto T689;
	goto T694;
T694:;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T689;
T689:;
	if(!(eql((V260),small_fixnum(1)))){
	goto T699;}
	{object V268;
	base[3]= (V259);
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	V268= vs_base[0];
	if(!(type_of((V268))==t_cons)){
	goto T699;}
	if(!((car((V268)))==(VV[69]))){
	goto T699;}
	if((caddr((V268)))==Cnil){
	goto T699;}
	V260= small_fixnum(2);}
	goto T699;
T699:;
	{register object V269;
	register object V270;
	V269= make_fixnum((long)((long)length((V263)))-(fix((V260))));
	V270= small_fixnum(0);
	goto T715;
T715:;
	if(!(number_compare((V270),(V269))>=0)){
	goto T716;}
	goto T711;
	goto T716;
T716:;
	V271= aref1((V263),fixint((V270)));
	if((/* INLINE-ARGS */V271)==(VV[51])){
	goto T720;}
	V272 = make_fixnum((long)(fix((V260)))+(fix((V270))));
	V273= (*(LnkLI142))((V259),(V263),V272);
	V274= (*(LnkLI152))(/* INLINE-ARGS */V273);
	(void)((*(LnkLI151))(/* INLINE-ARGS */V274));
	vs_base=vs_top=base+4;
	vs_base[0]=Cnil;
	return;
	goto T720;
T720:;
	V270= one_plus((V270));
	goto T715;}
	goto T711;
T711:;
	base[3]= Ct;
	base[4]= VV[70];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	return;}}}
	}
}
/*	local entry for function INSERT-BREAK-POINT	*/

static object LI34(V276)

object V276;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	{register object V277;
	V277= Cnil;
	if(symbol_value(VV[53])!=Cnil){
	goto T730;}
	(void)((*(LnkLI145))());
	goto T730;
T730:;{object V278;
	V278= (VFUN_NARGS=2,(*(LnkLI147))(Cnil,symbol_value(VV[53])));
	if(V278==Cnil)goto T733;
	V277= V278;
	goto T732;
	goto T733;
T733:;}
	{object V279;
	V279= make_fixnum((long)length(symbol_value(VV[53])));
	(void)((VFUN_NARGS=2,(*(LnkLI139))(Cnil,symbol_value(VV[53]))));
	V277= (V279);}
	goto T732;
T732:;
	{object V280;
	{object V281= cdr(cdr(cdr((V276))));
	if((type_of(V281)!=t_cons) && ((V276)!= Cnil))
	 FEwrong_type_argument(Scons,V281);
	V280= (V281->c.c_car);}
	{object V285;
	V286= get(V280,VV[52],Cnil);
	V285= make_cons(V277,V286);
	(void)(sputprop(V280,VV[52],(V285)));}}
	(void)(aset1(symbol_value(VV[53]),fixint((V277)),(V276)));
	{object V287 = (V277);
	VMR32(V287)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SHORT-NAME	*/

static object LI35(V289)

object V289;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{object V290;
	V290= (VFUN_NARGS=4,(*(LnkLI147))(VV[71],(V289),VV[72],Ct));
	if(((V290))==Cnil){
	goto T744;}
	base[0]= (V289);
	base[1]= make_fixnum((long)(1)+(fix((V290))));
	vs_top=(vs_base=base+0)+2;
	Lsubseq();
	vs_top=sup;
	{object V291 = vs_base[0];
	VMR33(V291)}
	goto T744;
T744:;
	{object V292 = (V289);
	VMR33(V292)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SHOW-BREAK-POINT	*/

static object LI36(V294)

object V294;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	{object V295;
	V295= Cnil;
	{register object V296;
	V296= aref1(symbol_value(VV[53]),fixint((V294)));
	if(((V296))==Cnil){
	goto T751;}
	if(!((car((V296)))==(Cnil))){
	goto T753;}
	V295= Ct;
	V296= cdr((V296));
	goto T753;
T753:;
	base[0]= Ct;
	base[1]= VV[73];
	base[2]= (V294);
	base[3]= (*(LnkLI153))(cadr((V296)));
	base[4]= caddr((V296));
	base[5]= (V295);
	vs_top=(vs_base=base+0)+6;
	Lformat();
	vs_top=sup;
	{object V297;
	V297= cadddr((V296));
	base[0]= Ct;
	base[1]= VV[74];
	base[2]= make_fixnum((long)(*(LnkLI154))((V297),caddr((V296))));
	base[3]= (V297);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V298 = vs_base[0];
	VMR34(V298)}}
	goto T751;
T751:;
	{object V299 = Cnil;
	VMR34(V299)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ITERATE-OVER-BKPTS	*/

static object LI37(V302,V303)

register object V302;register object V303;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	{register object V304;
	register object V305;
	V304= make_fixnum((long)length(symbol_value(VV[53])));
	V305= small_fixnum(0);
	goto T774;
T774:;
	if(!(number_compare((V305),(V304))>=0)){
	goto T775;}
	{object V306 = Cnil;
	VMR35(V306)}
	goto T775;
T775:;
	{register object x= (V305),V307= (V302);
	while(!endp(V307))
	if(eql(x,V307->c.c_car)){
	goto T780;
	}else V307=V307->c.c_cdr;}
	if(((V302))!=Cnil){
	goto T779;}
	goto T780;
T780:;
	{register object V308;
	V308= aref1(symbol_value(VV[53]),fixint((V305)));{object V309;
	V309= symbol_value(VV[53]);
	{object V311= (V303);
	if((V311!= VV[54]))goto T786;
	if(((V308))==Cnil){
	goto T787;}
	{object V313= cdr(cdr(cdr((V308))));
	if((type_of(V313)!=t_cons) && ((V308)!= Cnil))
	 FEwrong_type_argument(Scons,V313);
	V312= (V313->c.c_car);}
	{object V316= cdr(cdr(cdr((V308))));
	if((type_of(V316)!=t_cons) && ((V308)!= Cnil))
	 FEwrong_type_argument(Scons,V316);
	V315= (V316->c.c_car);}
	V314= get(V315,VV[52],Cnil);
	V317= (VFUN_NARGS=2,(*(LnkLI127))((V305),V314));
	(void)(sputprop(V312,VV[52],/* INLINE-ARGS */V317));
	goto T787;
T787:;
	V310= Cnil;
	goto T785;
	goto T786;
T786:;
	if((V311!= VV[155]))goto T793;
	if(!((car((V308)))==(Cnil))){
	goto T795;}
	V310= cdr((V308));
	goto T785;
	goto T795;
T795:;
	V310= Cnil;
	goto T785;
	goto T793;
T793:;
	if((V311!= VV[156]))goto T797;
	if(((V308))==Cnil){
	goto T799;}
	if((car((V308)))==(Cnil)){
	goto T799;}
	V310= make_cons(Cnil,(V308));
	goto T785;
	goto T799;
T799:;
	V310= (V308);
	goto T785;
	goto T797;
T797:;
	if((V311!= VV[157]))goto T803;
	if(((V308))==Cnil){
	goto T804;}
	(void)((*(LnkLI151))((V305)));
	princ_char(10,Cnil);
	goto T804;
T804:;
	V310= (V308);
	goto T785;
	goto T803;
T803:;
	V310= Cnil;}
	goto T785;
T785:;
	(void)(aset1(V309,fixint((V305)),V310));}}
	goto T779;
T779:;
	V305= one_plus((V305));
	goto T774;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPLETE-PROP	*/

static object LI38(object V320,object V319,object V318,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{object V321;
	object V322;
	object V323;
	object V324;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V321= V320;
	V322= V319;
	V323= V318;
	narg = narg - 3;
	if (narg <= 0) goto T811;
	else {
	V324= first;}
	--narg; goto T812;
	goto T811;
T811:;
	V324= Cnil;
	goto T812;
T812:;
	if(!(type_of((V321))==t_symbol)){
	goto T814;}
	if((get((V321),(V323),Cnil))==Cnil){
	goto T814;}
	base[0]= (V321);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V325= vs_base[0];
	base[0]= (V322);
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V326= vs_base[0];
	if(!(equal(V325,V326))){
	goto T814;}
	{object V327 = (V321);
	VMR36(V327)}
	goto T814;
T814:;
	{object V328;
	register object V329;
	V328= Cnil;
	V329= Cnil;
	{object V330;
	register object V331;
	register object V332;
	{object V333;
	base[0]= (V322);
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V333= vs_base[0];
	base[0]= (V333);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T829;}
	base[0]= coerce_to_string((V333));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V333= vs_base[0];
	if(((V333))!=Cnil){
	goto T829;}
	base[0]= VV[75];
	base[1]= VV[76];
	base[3]= (V322);
	vs_top=(vs_base=base+3)+1;
	Lfind_package();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk158)();
	vs_top=sup;
	goto T829;
T829:;
	V330= (V333);}
	V331= Cnil;
	V332= Cnil;
	{object V334;
	register object V335;
	base[2]= (V330);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V336= vs_base[0];
	V334= make_cons((V330),V336);
	V335= car((V334));
	goto T846;
T846:;
	if(!(endp_prop((V334)))){
	goto T847;}
	V331= Cnil;
	goto T825;
	goto T847;
T847:;
	{long V337;
	long V338;
	base[2]= (V335);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk159)();
	if(vs_base>=vs_top){vs_top=sup;goto T856;}
	V337= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T857;}
	V338= fix(vs_base[0]);
	vs_top=sup;
	goto T858;
	goto T856;
T856:;
	V337= fix(Cnil);
	goto T857;
T857:;
	V338= fix(Cnil);
	goto T858;
T858:;
	if(((V330))==((V335))){
	goto T859;}
	V338= 0;
	goto T859;
T859:;
	{object V339;
	register object V340;
	V341 = make_fixnum(V338);
	V342 = make_fixnum(V337);
	V339= number_plus(V341,V342);
	V340= small_fixnum(0);
	goto T866;
T866:;
	if(!(number_compare((V340),(V339))>=0)){
	goto T867;}
	goto T853;
	goto T867;
T867:;
	V343 = make_fixnum(V338);
	if(!(number_compare((V340),V343)<0)){
	goto T876;}
	base[3]= (V335);
	base[4]= (V340);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V332= vs_base[0];
	goto T874;
	goto T876;
T876:;
	base[3]= (V335);
	V344 = make_fixnum(V338);
	base[4]= number_minus((V340),V344);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V332= vs_base[0];
	goto T874;
T874:;
	goto T872;
T872:;
	if(((V332))!=Cnil){
	goto T882;}
	goto T873;
	goto T882;
T882:;
	V331= car((V332));
	if(((V335))==((V330))){
	goto T888;}
	base[4]= symbol_name((V331));
	base[5]= (V330);
	vs_top=(vs_base=base+4)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V345= vs_base[0];
	if(!((VV[77])==(car(V345)))){
	goto T887;}
	goto T888;
T888:;
	if((get((V331),(V323),Cnil))==Cnil){
	goto T897;}
	base[3]= (V321);
	base[4]= (V331);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk160)();
	vs_top=sup;
	V346= vs_base[0];
	if(!(eql(V346,small_fixnum(0)))){
	goto T897;}
	if(((V329))==Cnil){
	goto T906;}
	{object V347;
	register object V348;
	V347= (V329);
	V329= make_cons((V331),Cnil);
	V348= (V329);
	if(type_of((V347))!=t_cons)FEwrong_type_argument(Scons,(V347));
	((V347))->c.c_cdr = (V348);
	goto T897;}
	goto T906;
T906:;
	V329= make_cons((V331),Cnil);
	V328= (V329);
	goto T897;
T897:;
	goto T887;
T887:;
	V332= cdr((V332));
	goto T872;
	goto T873;
T873:;
	goto T870;
	goto T870;
T870:;
	V340= one_plus((V340));
	goto T866;}}
	goto T853;
T853:;
	V334= cdr((V334));
	V335= car((V334));
	goto T846;}}
	goto T825;
T825:;
	if(((V324))==Cnil){
	goto T926;}
	{object V349 = (V328);
	VMR36(V349)}
	goto T926;
T926:;
	if(!(((long)length((V328)))>(1))){
	goto T929;}
	base[0]= Ct;
	base[1]= VV[78];
	base[2]= (V323);
	base[3]= (V328);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	goto T924;
	goto T929;
T929:;
	if(((V328))!=Cnil){
	goto T936;}
	base[0]= Ct;
	base[1]= VV[79];
	base[2]= (V321);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T924;
	goto T936;
T936:;
	{object V350 = car((V328));
	VMR36(V350)}
	goto T924;
T924:;
	{object V351 = Cnil;
	VMR36(V351)}
	{object V352 = Cnil;
	VMR36(V352)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function DISPLAY-ENV	*/

static object LI39(V355,V356)

register object V355;object V356;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	{register object V357;
	V357= reverse((V356));
	goto T944;
T944:;
	if(!(type_of((V357))==t_cons)){
	goto T946;}
	base[0]= symbol_value(VV[80]);
	vs_top=(vs_base=base+0)+1;
	Lfill_pointer();
	vs_top=sup;
	V358= vs_base[0];
	if(!((fix(V358))>(fix((V355))))){
	goto T945;}
	goto T946;
T946:;
	{object V359 = Cnil;
	VMR37(V359)}
	goto T945;
T945:;{object V360;
	if(type_of(car((V357)))==t_cons){
	goto T956;}
	V360= Cnil;
	goto T955;
	goto T956;
T956:;
	{object V361= cdar((V357));
	V360= (type_of(V361)==t_cons||(V361)==Cnil?Ct:Cnil);}
	goto T955;
T955:;
	if(V360==Cnil)goto T954;
	goto T953;
	goto T954;
T954:;}
	{object V362 = Cnil;
	VMR37(V362)}
	goto T953;
T953:;
	base[0]= symbol_value(VV[80]);
	base[1]= VV[81];
	base[2]= caar((V357));
	base[3]= cadar((V357));
	base[4]= cdr((V357));
	vs_top=(vs_base=base+0)+5;
	Lformat();
	vs_top=sup;
	V357= cdr((V357));
	goto T944;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function APPLY-DISPLAY-FUN	*/

static object LI40(V366,V367,V368)

object V366;object V367;object V368;
{	 VMB38 VMS38 VMV38
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[13],symbol_value(VV[10]));
	bds_bind(VV[11],symbol_value(VV[10]));
	bds_bind(VV[82],Cnil);
	bds_bind(VV[83],VV[84]);
	bds_bind(VV[12],Ct);
	base[5]= symbol_value(VV[80]);
	base[6]= small_fixnum(0);
	vs_top=(vs_base=base+5)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[5]= symbol_value(VV[80]);
	base[6]= VV[85];
	vs_top=(vs_base=base+5)+2;
	Lformat();
	vs_top=sup;
	(void)((
	(type_of((V366)) == t_sfun ?(*(((V366))->sfn.sfn_self)):
	(fcall.fun=((V366)),fcall.argd=2,fcalln))((V367),(V368))));
	base[5]= symbol_value(VV[80]);
	vs_top=(vs_base=base+5)+1;
	Lfill_pointer();
	vs_top=sup;
	V369= vs_base[0];
	if(!((fix(V369))>(fix((V367))))){
	goto T975;}
	base[5]= symbol_value(VV[80]);
	base[6]= (V367);
	vs_top=(vs_base=base+5)+2;
	siLfill_pointer_set();
	vs_top=sup;
	base[5]= symbol_value(VV[80]);
	base[6]= VV[86];
	vs_top=(vs_base=base+5)+2;
	Lformat();
	vs_top=sup;
	goto T975;
T975:;
	base[5]= symbol_value(VV[80]);
	base[6]= VV[87];
	vs_top=(vs_base=base+5)+2;
	Lformat();
	vs_top=sup;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	{object V370 = symbol_value(VV[80]);
	VMR38(V370)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-LINE-OF-FORM	*/

static object LI41(V373,V374)

object V373;object V374;
{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	{object V375;
	V375= (VFUN_NARGS=2,(*(LnkLI147))((V373),(V374)));
	if(((V375))==Cnil){
	goto T989;}
	V376= aref1((V374),0);
	{object V377 = make_fixnum((long)(fix((V375)))+(fix(cdr(/* INLINE-ARGS */V376))));
	VMR39(V377)}
	goto T989;
T989:;
	{object V378 = Cnil;
	VMR39(V378)}}
	return Cnil;
}
/*	local entry for function GET-NEXT-VISIBLE-FUN	*/

static object LI42(V380)

object V380;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{register object V381;
	V381= (V380);
	goto T992;
T992:;
	if(!((fix((V381)))<(fix(symbol_value(VV[88]))))){
	goto T993;}
	{register object V382;
	V382= Cnil;
	(void)((MVloc[(0)]=((V381))));
	{object V383 = (V382);
	VMR40(V383)}}
	goto T993;
T993:;
	{register object V384;
	base[0]= (V381);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk144)();
	vs_top=sup;
	V384= vs_base[0];
	{register object V385;
	base[0]= (V384);
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	V385= vs_base[0];
	if(((V385))==Cnil){
	goto T1004;}
	goto T998;
	goto T1004;
T1004:;
	{register object V386;
	V386= get((V384),VV[89],Cnil);
	if(((V386))==Cnil){
	goto T1008;}
	goto T998;
	goto T1008;
T1008:;
	base[0]= (V384);
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T998;}
	{register object V387;
	V387= (V384);
	(void)((MVloc[(0)]=((V381))));
	{object V388 = (V387);
	VMR40(V388)}}}}}
	goto T998;
T998:;
	V381= make_fixnum((long)(fix((V381)))-(1));
	goto T992;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DBL-WHAT-FRAME	*/

static object LI43(V390)

register long V390;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{register long V391;
	register long V392;
	register object V393;
	V391= fix(symbol_value(VV[90]));
	V392= 0;
	V393= Cnil;
	goto T1021;
T1021:;
	{register object V394;
	V395 = make_fixnum(V391);
	V393= (*(LnkLI161))(V395);
	V394= (V393);
	V391= fix((MVloc[(0)]));}
	if(!((V391)<=(V390))){
	goto T1028;}
	{long V396 = V392;
	VMR41((object)V396)}
	goto T1028;
T1028:;
	V392= (long)(V392)+(1);
	V391= (long)(V391)-(1);
	goto T1021;}
}
/*	local entry for function DBL-UP	*/

static object LI44(V399,V400)

register object V399;object V400;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	{object V401;
	object V402;
	object V403;
	object V404;
	object V405;
	V401= Cnil;
	V402= Cnil;
	V403= Cnil;
	V404= Cnil;
	V405= Cnil;
	V401= make_fixnum((long)(*(LnkLI162))(fix((V400))));
	if(!((fix((V399)))>=(0))){
	goto T1043;}
	{object V406;
	setq(VV[9],(VFUN_NARGS=2,(*(LnkLI163))((V399),(V400))));
	V406= symbol_value(VV[9]);
	V399= (MVloc[(0)]);
	V402= (MVloc[(1)]);
	V403= (MVloc[(2)]);
	V404= (MVloc[(3)]);
	V405= (MVloc[(4)]);}
	(void)((*(LnkLI164))());
	V407 = make_fixnum((long)(fix((V401)))+(fix((V399))));
	{object V408 = (VFUN_NARGS=7,(*(LnkLI165))(V407,Ct,symbol_value(VV[9]),(V402),(V403),(V404),(V405)));
	VMR42(V408)}
	goto T1043;
T1043:;
	V399= make_fixnum((long)(fix((V401)))+(fix((V399))));
	if(!((fix((V399)))>=(0))){
	goto T1062;}
	goto T1061;
	goto T1062;
T1062:;
	V399= small_fixnum(0);
	goto T1061;
T1061:;
	V400= symbol_value(VV[90]);
	goto TTL;}
	return Cnil;
}
/*	local entry for function NEXT-STACK-FRAME	*/

static object LI45(V410)

object V410;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	{register object V411;
	register object V412;
	register object V413;
	register object V414;
	object V415;
	V411= Cnil;
	V412= Cnil;
	V413= Cnil;
	V414= Cnil;
	V415= Cnil;
	if(!((fix((V410)))<(fix(symbol_value(VV[88]))))){
	goto T1074;}
	(void)((MVloc[(0)]=(Cnil)));
	(void)((MVloc[(1)]=(Cnil)));
	(void)((MVloc[(2)]=(Cnil)));
	(void)((MVloc[(3)]=(Cnil)));
	{object V417 = Cnil;
	VMR43(V417)}
	goto T1074;
T1074:;
	{object V418;
	V418= Cnil;
	{object V419;
	V418= (*(LnkLI161))((V410));
	V419= (V418);
	V413= (MVloc[(0)]);}
	V415= (V418);
	{object V420;
	V411= get((V418),VV[49],Cnil);
	if(((V411))!=Cnil){
	goto T1088;}
	V420= Cnil;
	goto T1087;
	goto T1088;
T1088:;
	{register object V421;
	register object V422;
	V421= make_fixnum((long)(fix((V410)))+(1));
	V422= Cnil;
	goto T1093;
T1093:;
	if(!(number_compare((V421),(V413))<=0)){
	goto T1094;}
	V420= Cnil;
	goto T1087;
	goto T1094;
T1094:;
	base[0]= (V421);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk118)();
	vs_top=sup;
	V422= vs_base[0];
	base[0]= (V421);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk118)();
	vs_top=sup;
	V423= vs_base[0];
	V412= (*(LnkLI166))(V423,(V411));
	if(((V412))==Cnil){
	goto T1101;}
	{register object V424;
	V424= (V413);
	(void)((MVloc[(0)]=((V418))));
	(void)((MVloc[(1)]=((V412))));
	V425= aref1((V411),0);
	(void)((MVloc[(2)]=(car(/* INLINE-ARGS */V425))));
	base[1]= (V421);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk114)();
	vs_top=sup;
	V414= vs_base[0];
	base[0]= (V414);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V426= vs_base[0];
	base[0]= one_plus((V414));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V427= vs_base[0];
	base[0]= number_plus((V414),small_fixnum(2));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V428= vs_base[0];
	V429= list(3,V426,V427,V428);
	(void)((MVloc[(3)]=(/* INLINE-ARGS */V429)));
	{object V430 = (V424);
	VMR43(V430)}}
	goto T1101;
T1101:;
	V421= make_fixnum((long)(fix((V421)))-(1));
	goto T1093;}
	goto T1087;
T1087:;
	if(((V420))==Cnil){
	goto T1123;}
	{object V431 = (V420);
	VMR43(V431)}
	goto T1123;
T1123:;
	base[0]= (V415);
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1126;}
	{object V432 = Cnil;
	VMR43(V432)}
	goto T1126;
T1126:;
	{object V433;
	V433= get((V415),VV[89],Cnil);
	if(((V433))==Cnil){
	goto T1131;}
	{object V434 = (V433);
	VMR43(V434)}
	goto T1131;
T1131:;
	base[0]= (V415);
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1134;}
	(void)((MVloc[(0)]=((V415))));
	(void)((MVloc[(1)]=(Cnil)));
	(void)((MVloc[(2)]=(Cnil)));
	if(((*(LnkLI167))((V413)))==Cnil){
	goto T1143;}
	V436= Cnil;
	goto T1141;
	goto T1143;
T1143:;
	{object V437;
	base[0]= (V413);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk114)();
	vs_top=sup;
	V437= vs_base[0];
	base[0]= (V437);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V438= vs_base[0];
	base[0]= one_plus((V437));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V439= vs_base[0];
	base[0]= make_fixnum((long)(fix((V437)))+(2));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V440= vs_base[0];
	V436= list(3,V438,V439,V440);}
	goto T1141;
T1141:;
	(void)((MVloc[(3)]=(V436)));
	{object V441 = V413;
	VMR43(V441)}
	goto T1134;
T1134:;
	{object V442 = Cnil;
	VMR43(V442)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function NTH-STACK-FRAME	*/

static object LI46(object V443,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB44 VMS44 VMV44
	{register object V444;
	register object V445;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V444= V443;
	narg = narg - 1;
	if (narg <= 0) goto T1153;
	else {
	V445= first;}
	--narg; goto T1154;
	goto T1153;
T1153:;
	V445= symbol_value(VV[90]);
	goto T1154;
T1154:;
	{register object V446;
	object V447;
	object V448;
	object V449;
	register object V450;
	V446= Cnil;
	V447= Cnil;
	V448= Cnil;
	V449= Cnil;
	V450= Cnil;
	if(!((fix((V444)))>=(0))){
	goto T1162;}
	goto T1161;
	goto T1162;
T1162:;
	V444= small_fixnum(0);
	goto T1161;
T1161:;
	{object V451;
	register object V452;
	V451= make_fixnum((long)(fix((V444)))+(1));
	V452= small_fixnum(0);
	goto T1169;
T1169:;
	if(!(number_compare((V452),(V451))>=0)){
	goto T1170;}
	goto T1165;
	goto T1170;
T1170:;
	V450= (*(LnkLI168))((V445));
	if(((V450))==Cnil){
	goto T1178;}
	{register object V453;
	V445= (V450);
	V453= (V445);
	V446= (MVloc[(0)]);
	V447= (MVloc[(1)]);
	V448= (MVloc[(2)]);
	V449= (MVloc[(3)]);}
	V445= make_fixnum((long)(fix((V450)))-(1));
	goto T1176;
	goto T1178;
T1178:;
	V444= make_fixnum((long)(fix((V452)))-(1));
	goto T1165;
	goto T1176;
T1176:;
	V452= one_plus((V452));
	goto T1169;}
	goto T1165;
T1165:;
	V445= make_fixnum((long)(fix((V445)))+(1));
	base[0]= (V445);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk144)();
	vs_top=sup;
	V446= vs_base[0];
	(void)((MVloc[(0)]=((V444))));
	(void)((MVloc[(1)]=((V446))));
	(void)((MVloc[(2)]=((V447))));
	(void)((MVloc[(3)]=((V448))));
	(void)((MVloc[(4)]=((V449))));
	{object V455 = V445;
	VMR44(V455)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for DBL-BACKTRACE	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_reserve(VM45);
	{object V456;
	register object V457;
	if(vs_top-vs_base>2) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T1206;}
	V456=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1207;}
	V457=(base[1]);
	vs_top=sup;
	goto T1208;
	goto T1206;
T1206:;
	V456= small_fixnum(1000);
	goto T1207;
T1207:;
	V457= symbol_value(VV[90]);
	goto T1208;
T1208:;
	{register object V458;
	register object V459;
	register object V460;
	register object V461;
	register object V462;
	V458= Cnil;
	V459= Cnil;
	V460= Cnil;
	V461= Cnil;
	V462= small_fixnum(0);
	goto T1218;
T1218:;
	{object V463;
	V457= (*(LnkLI168))((V457));
	V463= (V457);
	V458= (MVloc[(0)]);
	V460= (MVloc[(1)]);
	V459= (MVloc[(2)]);
	V461= (MVloc[(3)]);}
	if((V458)!=Cnil){
	goto T1231;}
	goto T1216;
	goto T1231;
T1231:;
	(void)((VFUN_NARGS=7,(*(LnkLI165))((V462),Cnil,(V457),(V458),(V460),(V459),(V461))));
	V462= number_plus((V462),small_fixnum(1));
	if(!((fix((V462)))>=(fix((V456))))){
	goto T1235;}
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	vs_top=sup;
	goto T1216;
	goto T1235;
T1235:;
	V457= make_fixnum((long)(fix((V457)))-(1));
	goto T1218;
	goto T1216;
T1216:;
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;}
	}
}
/*	local entry for function DISPLAY-COMPILED-ENV	*/

static object LI48(V466,V467)

register object V466;object V467;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{register object V468;
	register object V469;
	base[2]= (V467);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk114)();
	vs_top=sup;
	V468= vs_base[0];
	base[2]= one_plus((V467));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk114)();
	vs_top=sup;
	V470= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk169)();
	vs_top=sup;
	V471= vs_base[0];
	V469= (number_compare(V470,V471)<=0?(V470):V471);
	base[2]= symbol_value(VV[80]);
	base[3]= VV[91];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	{register object V472;
	register object V473;
	base[2]= (V467);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk144)();
	vs_top=sup;
	V474= vs_base[0];
	V473= get(V474,VV[14],Cnil);
	V472= (V468);
	goto T1253;
T1253:;
	if((fix((V472)))>=(fix((V469)))){
	goto T1255;}
	base[2]= symbol_value(VV[80]);
	vs_top=(vs_base=base+2)+1;
	Lfill_pointer();
	vs_top=sup;
	V475= vs_base[0];
	if(!((fix(V475))>(fix((V466))))){
	goto T1254;}
	goto T1255;
T1255:;
	{object V476 = Cnil;
	VMR46(V476)}
	goto T1254;
T1254:;
	base[2]= symbol_value(VV[80]);
	base[3]= VV[92];{object V477;
	V477= car((V473));
	if(V477==Cnil)goto T1266;
	base[4]= V477;
	goto T1265;
	goto T1266;
T1266:;}
	base[4]= VV[93];
	goto T1265;
T1265:;
	if((car((V473)))!=Cnil){
	goto T1270;}
	base[5]= make_fixnum((long)(fix((V472)))-(fix((V468))));
	goto T1268;
	goto T1270;
T1270:;
	base[5]= Cnil;
	goto T1268;
T1268:;
	base[7]= (V472);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	base[6]= vs_base[0];
	V472= make_fixnum((long)(fix((V472)))+(1));
	base[7]= ((fix((V472)))<(fix((V469)))?Ct:Cnil);
	vs_top=(vs_base=base+2)+6;
	Lformat();
	vs_top=sup;
	V473= cdr((V473));
	goto T1253;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTING-ARGS-P	*/

static object LI49(V479)

object V479;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	base[0]= (V479);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk118)();
	vs_top=sup;
	V480= vs_base[0];
	if(type_of(V480)==t_cons){
	goto T1279;}
	{object V481 = Cnil;
	VMR47(V481)}
	goto T1279;
T1279:;
	if(number_compare((V479),small_fixnum(3))>0){
	goto T1283;}
	{object V482 = Cnil;
	VMR47(V482)}
	goto T1283;
T1283:;
	base[0]= (V479);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk118)();
	vs_top=sup;
	V485= vs_base[0];
	{register object x= car(V485),V484= VV[94];
	while(!endp(V484))
	if(eql(x,V484->c.c_car)){
	V483= V484;
	goto T1285;
	}else V484=V484->c.c_cdr;
	V483= Cnil;}
	goto T1285;
T1285:;
	{object V486 = ((V483)==Cnil?Ct:Cnil);
	VMR47(V486)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PRINT-STACK-FRAME	*/

static object LI50(object V490,object V489,object V488,object V487,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB48 VMS48 VMV48
	{object V491;
	object V492;
	register object V493;
	object V494;
	object V495;
	object V496;
	object V497;
	va_start(ap,first);
	if(narg <4) too_few_arguments();
	V491= V490;
	V492= V489;
	V493= V488;
	V494= V487;
	narg = narg - 4;
	if (narg <= 0) goto T1288;
	else {
	V495= first;}
	if (--narg <= 0) goto T1289;
	else {
	V496= va_arg(ap,object);}
	if (--narg <= 0) goto T1290;
	else {
	V497= va_arg(ap,object);}
	--narg; goto T1291;
	goto T1288;
T1288:;
	V495= Cnil;
	goto T1289;
T1289:;
	V496= Cnil;
	goto T1290;
T1290:;
	V497= Cnil;
	goto T1291;
T1291:;
	if(((V492))==Cnil){
	goto T1295;}
	if(((V495))==Cnil){
	goto T1295;}
	base[0]= symbol_value(VV[1]);
	base[1]= VV[95];
	base[2]= (V496);
	base[3]= (V495);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	goto T1295;
T1295:;
	{object V498;
	V498= (*(LnkLI170))((V493));
	base[0]= symbol_value(VV[1]);
	base[1]= VV[96];
	base[2]= (V491);
	if((V498)==Cnil){
	base[3]= Cnil;
	goto T1309;}
	base[3]= VV[97];
	goto T1309;
T1309:;
	base[4]= (V494);
	if(((*(LnkLI167))((V493)))!=Cnil){
	goto T1313;}
	base[7]= (V493);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk114)();
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V499= vs_base[0];
	base[5]= (*(LnkLI171))(VV[98],small_fixnum(80),car(V499));
	goto T1311;
	goto T1313;
T1313:;
	base[5]= (*(LnkLI171))(VV[99],small_fixnum(80),(V493));
	goto T1311;
T1311:;
	vs_top=(vs_base=base+0)+6;
	Lformat();
	vs_top=sup;
	if(((V496))==Cnil){
	goto T1318;}
	base[0]= symbol_value(VV[1]);
	base[1]= VV[100];
	base[2]= (V496);
	base[3]= (V495);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	goto T1318;
T1318:;
	base[0]= symbol_value(VV[1]);
	base[1]= VV[101];
	base[2]= (V493);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V500 = vs_base[0];
	VMR48(V500)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-BREAK-POINT	*/

static object LI51(V504,V505,V506)

object V504;object V505;object V506;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	V507= aref1((V505),fixint((V506)));
	V508= aref1((V505),0);
	V509= car(/* INLINE-ARGS */V508);
	V510= aref1((V505),0);
	V511 = make_fixnum((long)(fix(cdr(/* INLINE-ARGS */V510)))+(fix((V506))));
	{object V512 = list(4,/* INLINE-ARGS */V507,/* INLINE-ARGS */V509,V511,(V504));
	VMR49(V512)}
	return Cnil;
}
/*	local entry for function RELATIVE-LINE	*/

static object LI52(V515,V516)

object V515;object V516;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V517;
	V517= get((V515),VV[49],Cnil);
	if(((V517))==Cnil){
	goto T1330;}
	V518= aref1((V517),0);
	{long V519 = (long)(fix((V516)))-(fix(cdr(/* INLINE-ARGS */V518)));
	VMR50((object)V519)}
	goto T1330;
T1330:;
	{long V520 = 0;
	VMR50((object)V520)}}
}
/*	local entry for function SAFE-EVAL	*/

static object LI53(V523,V524)

register object V523;object V524;
{	 VMB51 VMS51 VMV51
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[102],Cnil);
	bds_bind(VV[103],symbol_value(VV[104]));
	bds_bind(VV[1],symbol_value(VV[104]));
	if(!(type_of((V523))==t_symbol)){
	goto T1332;}
	base[3]= (V523);
	vs_top=(vs_base=base+3)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1332;}
	{register object x= (V523),V525= car((V524));
	while(!endp(V525))
	if(type_of(V525->c.c_car)==t_cons &&eql(x,V525->c.c_car->c.c_car)){
	goto T1332;
	}else V525=V525->c.c_cdr;}
	{object V526 = VV[105];
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR51(V526)}
	goto T1332;
T1332:;
	{object V527;
	object V528;
	V529= list(2,VV[107],(V523));
	base[3]= list(5,VV[106],/* INLINE-ARGS */V529,Cnil,Cnil,list(2,VV[107],(V524)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk172)();
	if(vs_base>=vs_top){vs_top=sup;goto T1342;}
	V527= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1343;}
	V528= vs_base[0];
	vs_top=sup;
	goto T1344;
	goto T1342;
T1342:;
	V527= Cnil;
	goto T1343;
T1343:;
	V528= Cnil;
	goto T1344;
T1344:;
	if(((V527))==Cnil){
	goto T1346;}
	{object V530 = VV[105];
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR51(V530)}
	goto T1346;
T1346:;
	{object V531 = (V528);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR51(V531)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-BACK	*/

static object LI54(V534,V535)

register object V534;register object V535;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{object V536;
	V536= symbol_value(VV[9]);
	setq(VV[108],Cnil);
	setq(VV[9],(V536));
	if(((V535))==Cnil){
	goto T1355;}
	setq(VV[0],(V535));
	goto T1353;
	goto T1355;
T1355:;
	base[1]= (V536);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk114)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V537= vs_base[0];
	(void)(make_cons(V537,Cnil));
	goto T1353;
T1353:;
	if(((V534))==Cnil){
	goto T1361;}
	base[0]= symbol_value(VV[1]);
	base[1]= VV[109];
	base[2]= cadr((V534));
	base[3]= caddr((V534));
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	base[0]= symbol_value(VV[1]);
	base[1]= VV[110];
	base[2]= cadr((V534));
	base[3]= caddr((V534));
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	goto T1361;
T1361:;
	{register object V538;
	register object V539;
	V538= symbol_value(VV[111]);
	V539= car((V538));
	goto T1376;
T1376:;
	if(!(endp_prop((V538)))){
	goto T1377;}
	{object V540 = Cnil;
	VMR52(V540)}
	goto T1377;
T1377:;
	{register object V541;
	V541= (*(LnkLI173))((V539),(V535));
	if(!(((V541))==(VV[105]))){
	goto T1383;}
	goto T1381;
	goto T1383;
T1383:;
	base[1]= Ct;
	base[2]= VV[112];
	base[3]= (V539);
	base[4]= (V541);
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;}
	goto T1381;
T1381:;
	V538= cdr((V538));
	V539= car((V538));
	goto T1376;}}
	base[0]=base[0];
	return Cnil;
}
static object  LnkTLI173(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[173],(void **)(void *)&LnkLI173,2,first,ap);va_end(ap);return V1;} /* SAFE-EVAL */
static void LnkT172(){ call_or_link(VV[172],(void **)(void *)&Lnk172);} /* ERROR-SET */
static object  LnkTLI171(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[171],(void **)(void *)&LnkLI171,3,first,ap);va_end(ap);return V1;} /* APPLY-DISPLAY-FUN */
static object  LnkTLI170(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[170],(void **)(void *)&LnkLI170,1,first,ap);va_end(ap);return V1;} /* COMPUTING-ARGS-P */
static void LnkT169(){ call_or_link(VV[169],(void **)(void *)&Lnk169);} /* VS-TOP */
static object  LnkTLI168(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[168],(void **)(void *)&LnkLI168,1,first,ap);va_end(ap);return V1;} /* NEXT-STACK-FRAME */
static object  LnkTLI167(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[167],(void **)(void *)&LnkLI167,1,first,ap);va_end(ap);return V1;} /* IHS-NOT-INTERPRETED-ENV */
static object  LnkTLI166(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[166],(void **)(void *)&LnkLI166,2,first,ap);va_end(ap);return V1;} /* GET-LINE-OF-FORM */
static object  LnkTLI165(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[165],(void **)(void *)&LnkLI165,first,ap);va_end(ap);return V1;} /* PRINT-STACK-FRAME */
static object  LnkTLI164(){return call_proc0(VV[164],(void **)(void *)&LnkLI164);} /* SET-ENV */
static object  LnkTLI163(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[163],(void **)(void *)&LnkLI163,first,ap);va_end(ap);return V1;} /* NTH-STACK-FRAME */
static object  LnkTLI162(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[162],(void **)(void *)&LnkLI162,4353,first,ap);va_end(ap);return V1;} /* DBL-WHAT-FRAME */
static object  LnkTLI161(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[161],(void **)(void *)&LnkLI161,1,first,ap);va_end(ap);return V1;} /* GET-NEXT-VISIBLE-FUN */
static void LnkT160(){ call_or_link(VV[160],(void **)(void *)&Lnk160);} /* STRING-MATCH */
static void LnkT159(){ call_or_link(VV[159],(void **)(void *)&Lnk159);} /* PACKAGE-SIZE */
static void LnkT158(){ call_or_link(VV[158],(void **)(void *)&Lnk158);} /* SPECIFIC-ERROR */
static object  LnkTLI154(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[154],(void **)(void *)&LnkLI154,258,first,ap);va_end(ap);return V1;} /* RELATIVE-LINE */
static object  LnkTLI153(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[153],(void **)(void *)&LnkLI153,1,first,ap);va_end(ap);return V1;} /* SHORT-NAME */
static object  LnkTLI152(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[152],(void **)(void *)&LnkLI152,1,first,ap);va_end(ap);return V1;} /* INSERT-BREAK-POINT */
static object  LnkTLI151(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[151],(void **)(void *)&LnkLI151,1,first,ap);va_end(ap);return V1;} /* SHOW-BREAK-POINT */
static void LnkT150(){ call_or_link(VV[150],(void **)(void *)&Lnk150);} /* BREAK-FUNCTION */
static object  LnkTLI149(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[149],(void **)(void *)&LnkLI149,1,first,ap);va_end(ap);return V1;} /* DWIM */
static object  LnkTLI148(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[148],(void **)(void *)&LnkLI148,4,first,ap);va_end(ap);return V1;} /* MAYBE-BREAK */
static object  LnkTLI147(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[147],(void **)(void *)&LnkLI147,first,ap);va_end(ap);return V1;} /* POSITION */
static object  LnkTLI146(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[146],(void **)(void *)&LnkLI146,first,ap);va_end(ap);return V1;} /* CURRENT-STEP-FUN */
static object  LnkTLI145(){return call_proc0(VV[145],(void **)(void *)&LnkLI145);} /* INIT-BREAK-POINTS */
static void LnkT144(){ call_or_link(VV[144],(void **)(void *)&Lnk144);} /* IHS-FNAME */
static object  LnkTLI143(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[143],(void **)(void *)&LnkLI143,2,first,ap);va_end(ap);return V1;} /* ITERATE-OVER-BKPTS */
static object  LnkTLI142(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[142],(void **)(void *)&LnkLI142,3,first,ap);va_end(ap);return V1;} /* MAKE-BREAK-POINT */
static object  LnkTLI141(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[141],(void **)(void *)&LnkLI141,first,ap);va_end(ap);return V1;} /* MAKE-ARRAY */
static object  LnkTLI140(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[140],(void **)(void *)&LnkLI140,1,first,ap);va_end(ap);return V1;} /* WALK-THROUGH */
static object  LnkTLI139(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[139],(void **)(void *)&LnkLI139,first,ap);va_end(ap);return V1;} /* VECTOR-PUSH-EXTEND */
static void LnkT138(){ call_or_link(VV[138],(void **)(void *)&Lnk138);} /* INSTREAM-NAME */
static void LnkT137(){ call_or_link(VV[137],(void **)(void *)&Lnk137);} /* LOAD */
static object  LnkTLI136(){return call_proc0(VV[136],(void **)(void *)&LnkLI136);} /* SETUP-LINEINFO */
static object  LnkTLI135(){return call_proc0(VV[135],(void **)(void *)&LnkLI135);} /* CLEANUP */
static void LnkT132(){ call_or_link(VV[132],(void **)(void *)&Lnk132);} /* READ-FROM-STRING */
static object  LnkTLI131(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[131],(void **)(void *)&LnkLI131,first,ap);va_end(ap);return V1;} /* COUNT */
static object  LnkTLI130(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[130],(void **)(void *)&LnkLI130,1,first,ap);va_end(ap);return V1;} /* GET-INSTREAM */
static void LnkT129(){ call_or_link(VV[129],(void **)(void *)&Lnk129);} /* STREAM-NAME */
static object  LnkTLI128(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[128],(void **)(void *)&LnkLI128,first,ap);va_end(ap);return V1;} /* MAKE-INSTREAM */
static object  LnkTLI127(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[127],(void **)(void *)&LnkLI127,first,ap);va_end(ap);return V1;} /* DELETE */
static void LnkT126(){ call_or_link(VV[126],(void **)(void *)&Lnk126);} /* CLOSEDP */
static object  LnkTLI124(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[124],(void **)(void *)&LnkLI124,first,ap);va_end(ap);return V1;} /* BREAK-LEVEL */
static object  LnkTLI123(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[123],(void **)(void *)&LnkLI123,1,first,ap);va_end(ap);return V1;} /* SHOW-ENVIRONMENT */
static object  LnkTLI122(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[122],(void **)(void *)&LnkLI122,first,ap);va_end(ap);return V1;} /* BREAK-LOCALS */
static void LnkT121(){ call_or_link(VV[121],(void **)(void *)&Lnk121);} /* BREAK-GO */
static object  LnkTLI120(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[120],(void **)(void *)&LnkLI120,first,ap);va_end(ap);return V1;} /* SEARCH */
static void LnkT119(){ call_or_link(VV[119],(void **)(void *)&Lnk119);} /* COMPILED-FUNCTION-NAME */
static void LnkT118(){ call_or_link(VV[118],(void **)(void *)&Lnk118);} /* IHS-FUN */
static object  LnkTLI117(){return call_proc0(VV[117],(void **)(void *)&LnkLI117);} /* TYPE-ERROR */
static void LnkT116(){ call_or_link(VV[116],(void **)(void *)&Lnk116);} /* IHS-TOP */
static void LnkT115(){ call_or_link(VV[115],(void **)(void *)&Lnk115);} /* VS */
static void LnkT114(){ call_or_link(VV[114],(void **)(void *)&Lnk114);} /* IHS-VS */
static void LnkT113(){ call_or_link(VV[113],(void **)(void *)&Lnk113);} /* BREAK-PREVIOUS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

