
#include "cmpinclude.h"
#include "gcl_predlib.h"
void init_gcl_predlib(){do_init(VV);}
/*	macro definition for DEFTYPE	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[3]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	base[4]= V1;}
	{register object V2;
	register object V3;
	V2= base[3];
	V3= Cnil;
	goto T3;
T3:;
	if(((V2))!=Cnil){
	goto T4;}
	goto T1;
	goto T4;
T4:;
	{register object x= car((V2)),V4= VV[0];
	while(!endp(V4))
	if(eql(x,V4->c.c_car)){
	goto T10;
	}else V4=V4->c.c_cdr;
	goto T8;}
	goto T10;
T10:;
	if((car((V2)))==(VV[1])){
	goto T11;}
	goto T1;
	goto T11;
T11:;
	V3= make_cons(VV[1],(V3));
	V2= cdr((V2));
	goto T20;
T20:;
	if(((V2))==Cnil){
	goto T22;}
	{register object x= car((V2)),V5= VV[0];
	while(!endp(V5))
	if(eql(x,V5->c.c_car)){
	goto T25;
	}else V5=V5->c.c_cdr;
	goto T21;}
	goto T25;
T25:;
	goto T22;
T22:;
	goto T18;
	goto T21;
T21:;
	if(!(type_of(car((V2)))==t_symbol)){
	goto T29;}
	V6= list(2,car((V2)),VV[2]);
	V3= make_cons(/* INLINE-ARGS */V6,(V3));
	goto T27;
	goto T29;
T29:;
	V3= make_cons(car((V2)),(V3));
	goto T27;
T27:;
	V2= cdr((V2));
	goto T20;
	goto T18;
T18:;
	base[5]= (V3);
	base[6]= (V2);
	vs_top=(vs_base=base+5)+2;
	Lreconc();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T1;
	goto T8;
T8:;
	{object V7;
	V7= cdr((V2));
	V3= make_cons(car((V2)),(V3));
	V2= (V7);}
	goto T3;}
	goto T1;
T1:;
	V8= list(2,VV[6],base[2]);
	V9= list(4,VV[5],/* INLINE-ARGS */V8,list(2,VV[6],listA(4,VV[7],base[2],base[3],base[4])),VV[8]);
	V10= list(2,VV[6],base[2]);
	V11= list(4,VV[5],/* INLINE-ARGS */V10,list(2,VV[9],listA(3,VV[10],base[3],base[4])),VV[11]);
	V12= list(2,VV[6],base[2]);
	V13= (*(LnkLI122))(base[4]);
	V14= list(4,VV[5],/* INLINE-ARGS */V12,/* INLINE-ARGS */V13,VV[12]);
	base[5]= list(6,VV[3],VV[4],/* INLINE-ARGS */V9,/* INLINE-ARGS */V11,/* INLINE-ARGS */V14,list(2,VV[6],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	function definition for G1378	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= list(3,VV[13],VV[14],VV[15]);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for G1379	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[16];
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for G1380	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	{object V15;
	check_arg(1);
	V15=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= list(3,VV[13],small_fixnum(0),one_minus((V15)));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1381	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{object V16;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T45;}
	V16=(base[0]);
	vs_top=sup;
	goto T46;
	goto T45;
T45:;
	V16= VV[17];
	goto T46;
T46:;
	if(!(((V16))==(VV[17]))){
	goto T49;}
	base[1]= VV[18];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T49;
T49:;
	V17= one_minus((V16));
	V18= number_expt(small_fixnum(2),/* INLINE-ARGS */V17);
	V19= number_negate(/* INLINE-ARGS */V18);
	V20= one_minus((V16));
	V21= number_expt(small_fixnum(2),/* INLINE-ARGS */V20);
	base[1]= list(3,VV[13],/* INLINE-ARGS */V19,one_minus(/* INLINE-ARGS */V21));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1382	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	{object V22;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T51;}
	V22=(base[0]);
	vs_top=sup;
	goto T52;
	goto T51;
T51:;
	V22= VV[17];
	goto T52;
T52:;
	if(!(((V22))==(VV[17]))){
	goto T55;}
	base[1]= VV[19];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T55;
T55:;
	V23= number_expt(small_fixnum(2),(V22));
	base[1]= list(3,VV[13],small_fixnum(0),one_minus(/* INLINE-ARGS */V23));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1383	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= list(2,VV[20],small_fixnum(8));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for G1384	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= list(2,VV[21],small_fixnum(8));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for G1385	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= list(2,VV[20],small_fixnum(16));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for G1386	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= list(2,VV[21],small_fixnum(16));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for G1387	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	{object V24;
	object V25;
	if(vs_top-vs_base>2) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T57;}
	V24=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T58;}
	V25=(base[1]);
	vs_top=sup;
	goto T59;
	goto T57;
T57:;
	V24= VV[17];
	goto T58;
T58:;
	V25= VV[17];
	goto T59;
T59:;
	base[2]= list(3,VV[22],(V24),make_cons((V25),Cnil));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for G1388	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	{object V26;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T62;}
	V26=(base[0]);
	vs_top=sup;
	goto T63;
	goto T62;
T62:;
	V26= VV[17];
	goto T63;
T63:;
	base[1]= list(3,VV[23],VV[24],(V26));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1389	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	{object V27;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T65;}
	V27=(base[0]);
	vs_top=sup;
	goto T66;
	goto T65;
T65:;
	V27= VV[17];
	goto T66;
T66:;
	base[1]= list(3,VV[23],VV[25],(V27));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1390	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	{object V28;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T68;}
	V28=(base[0]);
	vs_top=sup;
	goto T69;
	goto T68;
T68:;
	V28= VV[17];
	goto T69;
T69:;
	base[1]= list(3,VV[23],VV[26],(V28));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1391	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	{object V29;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T71;}
	V29=(base[0]);
	vs_top=sup;
	goto T72;
	goto T71;
T71:;
	V29= VV[17];
	goto T72;
T72:;
	base[1]= list(3,VV[27],Ct,make_cons((V29),Cnil));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1392	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{object V30;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T74;}
	V30=(base[0]);
	vs_top=sup;
	goto T75;
	goto T74;
T74:;
	V30= VV[17];
	goto T75;
T75:;
	base[1]= list(3,VV[27],VV[24],make_cons((V30),Cnil));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1393	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{object V31;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T77;}
	V31=(base[0]);
	vs_top=sup;
	goto T78;
	goto T77;
T77:;
	V31= VV[17];
	goto T78;
T78:;
	base[1]= list(3,VV[27],VV[25],make_cons((V31),Cnil));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1394	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{object V32;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T80;}
	V32=(base[0]);
	vs_top=sup;
	goto T81;
	goto T80;
T80:;
	V32= VV[17];
	goto T81;
T81:;
	base[1]= list(3,VV[27],VV[26],make_cons((V32),Cnil));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function SIMPLE-ARRAY-P	*/

static object LI19(V34)

object V34;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	if(type_of((V34))==t_array||
type_of((V34))==t_vector||
type_of((V34))==t_string||
type_of((V34))==t_bitvector){
	goto T83;}
	{object V35 = Cnil;
	VMR19(V35)}
	goto T83;
T83:;
	base[0]= (V34);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk123)();
	vs_top=sup;
	V36= vs_base[0];
	if((V36)==Cnil){
	goto T85;}
	{object V37 = Cnil;
	VMR19(V37)}
	goto T85;
T85:;
	base[0]= (V34);
	vs_top=(vs_base=base+0)+1;
	siLdisplaced_array_p();
	vs_top=sup;
	V38= vs_base[0];
	{object V39 = ((V38)==Cnil?Ct:Cnil);
	VMR19(V39)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLASS-OF	*/

static object LI20(V41)

object V41;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V42 = Cnil;
	VMR20(V42)}
	return Cnil;
}
/*	local entry for function CLASSP	*/

static object LI21(V44)

object V44;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{object V45 = Cnil;
	VMR21(V45)}
	return Cnil;
}
/*	local entry for function CLASS-PRECEDENCE-LIST	*/

static object LI22(V47)

object V47;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{object V48 = Cnil;
	VMR22(V48)}
	return Cnil;
}
/*	local entry for function FIND-CLASS	*/

static object LI23(V50)

object V50;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	{object V51 = Cnil;
	VMR23(V51)}
	return Cnil;
}
/*	local entry for function FIND-CLASS-NO-ERROR	*/

static object LI24(V53)

object V53;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{object V54 = Cnil;
	VMR24(V54)}
	return Cnil;
}
/*	function definition for TYPEP	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	{register object V55;
	register object V56;
	object V57;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V55=(base[0]);
	V56=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T91;}
	V57=(base[2]);
	vs_top=sup;
	goto T92;
	goto T91;
T91:;
	V57= Cnil;
	goto T92;
T92:;
	{register object V58;
	register object V59;
	object V60;
	V58= Cnil;
	V59= Cnil;
	V60= Cnil;
	if(((*(LnkLI124))((V56)))==Cnil){
	goto T97;}
	V62= (*(LnkLI126))((V55));
	V63= (*(LnkLI125))(V62);
	{register object x= (V56),V61= /* INLINE-ARGS */V63;
	while(!endp(V61))
	if(eql(x,V61->c.c_car)){
	goto T102;
	}else V61=V61->c.c_cdr;
	goto T101;}
	goto T102;
T102:;
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T101;
T101:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T97;
T97:;
	if(!(type_of((V56))!=t_cons)){
	goto T106;}
	V58= (V56);
	V59= Cnil;
	goto T104;
	goto T106;
T106:;
	V58= car((V56));
	V59= cdr((V56));
	goto T104;
T104:;
	if(!(((V58))==(VV[28]))){
	goto T114;}
	V58= VV[29];
	goto T114;
T114:;
	{object V64;
	V64= get((V58),VV[30],Cnil);
	if(((V64))==Cnil){
	goto T118;}
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event((V64));
	return;}
	goto T118;
T118:;
	{object V65= (V58);
	if((V65!= VV[43]))goto T123;
	{register object x= (V55),V66= (V59);
	while(!endp(V66))
	if(eql(x,V66->c.c_car)){
	base[3]= V66;
	vs_top=(vs_base=base+3)+1;
	return;
	}else V66=V66->c.c_cdr;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T123;
T123:;
	if((V65!= VV[46]))goto T124;
	base[3]= (V55);
	base[4]= car((V59));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk127)();
	vs_top=sup;
	V67= vs_base[0];
	base[3]= ((V67)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T124;
T124:;
	if((V65!= VV[44]))goto T128;
	{register object V68;
	V68= (V59);
	goto T130;
T130:;
	if(((V68))!=Cnil){
	goto T131;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T131;
T131:;
	base[3]= (V55);
	base[4]= car((V68));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk127)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T135;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T135;
T135:;
	V68= cdr((V68));
	goto T130;}
	goto T128;
T128:;
	if((V65!= VV[45]))goto T143;
	{register object V69;
	V69= (V59);
	goto T145;
T145:;
	if(((V69))!=Cnil){
	goto T146;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T146;
T146:;
	base[3]= (V55);
	base[4]= car((V69));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk127)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T150;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T150;
T150:;
	V69= cdr((V69));
	goto T145;}
	goto T143;
T143:;
	if((V65!= VV[38]))goto T158;
	base[3]= car((V59));
	base[4]= (V55);
	vs_top=(vs_base=base+4)+1;
	super_funcall_no_event(base[3]);
	return;
	goto T158;
T158:;
	if((V65!= Ct))goto T161;
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T161;
T161:;
	if((V65!= Cnil))goto T162;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T162;
T162:;
	if((V65!= VV[59]))goto T163;
	if(!(((V55))==(Ct))){
	goto T164;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T164;
T164:;
	base[3]= (((V55))==(Cnil)?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T163;
T163:;
	if((V65!= VV[31]))goto T166;
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V70= vs_base[0];
	base[3]= ((V70)==(VV[31])?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T166;
T166:;
	if((V65!= VV[32]))goto T169;
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V71= vs_base[0];
	base[3]= ((V71)==(VV[32])?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T169;
T169:;
	if((V65!= VV[33]))goto T172;
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V72= vs_base[0];
	base[3]= ((V72)==(VV[33])?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T172;
T172:;
	if((V65!= VV[128]))goto T175;
	if(type_of((V55))==t_character){
	goto T176;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T176;
T176:;
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	Lstandard_char_p();
	return;
	goto T175;
T175:;
	if((V65!= VV[25])
	&& (V65!= VV[24]))goto T179;
	if(type_of((V55))==t_character){
	goto T180;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T180;
T180:;
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	Lstring_char_p();
	return;
	goto T179;
T179:;
	if((V65!= VV[13]))goto T183;
	if(type_of((V55))==t_fixnum||type_of((V55))==t_bignum){
	goto T184;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T184;
T184:;
	base[3]= (*(LnkLI129))((V55),(V59));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T183;
T183:;
	if((V65!= VV[107]))goto T186;
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk130)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T187;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T187;
T187:;
	base[3]= (*(LnkLI129))((V55),(V59));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T186;
T186:;
	if((V65!= VV[98]))goto T190;
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk131)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T191;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T191;
T191:;
	base[3]= (*(LnkLI129))((V55),(V59));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T190;
T190:;
	if((V65!= VV[108]))goto T194;
	if(type_of((V55))==t_shortfloat||type_of((V55))==t_longfloat){
	goto T195;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T195;
T195:;
	base[3]= (*(LnkLI129))((V55),(V59));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T194;
T194:;
	if((V65!= VV[34]))goto T197;
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V73= vs_base[0];
	if((V73)==(VV[34])){
	goto T198;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T198;
T198:;
	base[3]= (*(LnkLI129))((V55),(V59));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T197;
T197:;
	if((V65!= VV[132])
	&& (V65!= VV[133])
	&& (V65!= VV[35]))goto T202;
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V74= vs_base[0];
	if((V74)==(VV[35])){
	goto T203;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T203;
T203:;
	base[3]= (*(LnkLI129))((V55),(V59));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T202;
T202:;
	if((V65!= VV[111]))goto T207;
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	Lcomplexp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T208;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T208;
T208:;
	if(!(((V59))==Cnil)){
	goto T211;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T211;
T211:;
	base[4]= (V55);
	vs_top=(vs_base=base+4)+1;
	Lrealpart();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= car((V59));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk127)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T213;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T213;
T213:;
	base[4]= (V55);
	vs_top=(vs_base=base+4)+1;
	Limagpart();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= car((V59));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk127)();
	return;
	goto T207;
T207:;
	if((V65!= VV[50]))goto T221;
	if(!(type_of((V55))==t_cons||((V55))==Cnil)){
	goto T222;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T222;
T222:;
	base[3]= (type_of((V55))==t_vector||
type_of((V55))==t_string||
type_of((V55))==t_bitvector?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T221;
T221:;
	if((V65!= VV[134])
	&& (V65!= VV[135]))goto T224;
	if(type_of((V55))==t_string){
	goto T225;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T225;
T225:;
	if(!(endp_prop((V59)))){
	goto T227;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T227;
T227:;
	V75= (*(LnkLI137))((V55));
	base[3]= (*(LnkLI136))(/* INLINE-ARGS */V75,(V59));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T224;
T224:;
	if((V65!= VV[138]))goto T229;
	if((type_of((V55))==t_bitvector)){
	goto T230;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T230;
T230:;
	if(!(endp_prop((V59)))){
	goto T232;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T232;
T232:;
	V76= (*(LnkLI137))((V55));
	base[3]= (*(LnkLI136))(/* INLINE-ARGS */V76,(V59));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T229;
T229:;
	if((V65!= VV[139])
	&& (V65!= VV[140]))goto T234;
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	Lsimple_string_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T235;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T235;
T235:;
	if(!(endp_prop((V59)))){
	goto T238;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T238;
T238:;
	V77= (*(LnkLI137))((V55));
	base[3]= (*(LnkLI136))(/* INLINE-ARGS */V77,(V59));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T234;
T234:;
	if((V65!= VV[141]))goto T240;
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	Lsimple_bit_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T241;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T241;
T241:;
	if(!(endp_prop((V59)))){
	goto T244;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T244;
T244:;
	V78= (*(LnkLI137))((V55));
	base[3]= (*(LnkLI136))(/* INLINE-ARGS */V78,(V59));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T240;
T240:;
	if((V65!= VV[142]))goto T246;
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	Lsimple_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T247;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T247;
T247:;
	if(!(endp_prop((V59)))){
	goto T252;}
	goto T250;
	goto T252;
T252:;
	if(!((car((V59)))==(VV[17]))){
	goto T254;}
	goto T250;
	goto T254;
T254:;{object V79;
	if((car((V59)))==(Ct)){
	goto T258;}
	V79= Cnil;
	goto T257;
	goto T258;
T258:;
	if(((type_of((V55))==t_string?Ct:Cnil))==Cnil){
	goto T260;}
	V79= Cnil;
	goto T257;
	goto T260;
T260:;
	V79= ((((type_of((V55))==t_bitvector)?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T257;
T257:;
	if(V79==Cnil)goto T256;
	if((V79)!=Cnil){
	goto T250;}
	goto T251;
	goto T256;
T256:;}
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	Larray_element_type();
	vs_top=sup;
	V80= vs_base[0];
	V81= (*(LnkLI143))(car((V59)));
	if(equal(V80,/* INLINE-ARGS */V81)){
	goto T250;}
	goto T251;
T251:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T250;
T250:;
	if(!(endp_prop(cdr((V59))))){
	goto T264;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T264;
T264:;
	V82= (*(LnkLI137))((V55));
	base[3]= (*(LnkLI136))(/* INLINE-ARGS */V82,cdr((V59)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T246;
T246:;
	if((V65!= VV[23]))goto T266;
	if(type_of((V55))==t_vector||
type_of((V55))==t_string||
type_of((V55))==t_bitvector){
	goto T267;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T267;
T267:;
	if(!(endp_prop((V59)))){
	goto T271;}
	goto T269;
	goto T271;
T271:;
	if(!((car((V59)))==(VV[17]))){
	goto T273;}
	goto T269;
	goto T273;
T273:;{object V83;
	if((car((V59)))==(Ct)){
	goto T277;}
	V83= Cnil;
	goto T276;
	goto T277;
T277:;
	if(((type_of((V55))==t_string?Ct:Cnil))==Cnil){
	goto T279;}
	V83= Cnil;
	goto T276;
	goto T279;
T279:;
	V83= ((((type_of((V55))==t_bitvector)?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T276;
T276:;
	if(V83==Cnil)goto T275;
	if((V83)!=Cnil){
	goto T269;}
	goto T270;
	goto T275;
T275:;}
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	Larray_element_type();
	vs_top=sup;
	V84= vs_base[0];
	V85= (*(LnkLI143))(car((V59)));
	if(equal(V84,/* INLINE-ARGS */V85)){
	goto T269;}
	goto T270;
T270:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T269;
T269:;
	if(!(endp_prop(cdr((V59))))){
	goto T283;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T283;
T283:;
	V86= (*(LnkLI137))((V55));
	base[3]= (*(LnkLI136))(/* INLINE-ARGS */V86,cdr((V59)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T266;
T266:;
	if((V65!= VV[27]))goto T285;
	if(((*(LnkLI144))((V55)))!=Cnil){
	goto T286;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T286;
T286:;
	if(!(endp_prop((V59)))){
	goto T290;}
	goto T288;
	goto T290;
T290:;
	if(!((car((V59)))==(VV[17]))){
	goto T292;}
	goto T288;
	goto T292;
T292:;
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	Larray_element_type();
	vs_top=sup;
	V87= vs_base[0];
	V88= (*(LnkLI143))(car((V59)));
	if(equal(V87,/* INLINE-ARGS */V88)){
	goto T288;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T288;
T288:;
	if(!(endp_prop(cdr((V59))))){
	goto T296;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T296;
T296:;
	if(!((cadr((V59)))==(VV[17]))){
	goto T298;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T298;
T298:;
	{object V89= cadr((V59));
	if(!(type_of(V89)==t_cons||(V89)==Cnil)){
	goto T301;}}
	V90= (*(LnkLI137))((V55));
	base[3]= (*(LnkLI136))(/* INLINE-ARGS */V90,cadr((V59)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T301;
T301:;
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	Larray_rank();
	vs_top=sup;
	V91= vs_base[0];
	base[3]= (eql(V91,cadr((V59)))?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T285;
T285:;
	if((V65!= VV[22]))goto T305;
	if(type_of((V55))==t_array||
type_of((V55))==t_vector||
type_of((V55))==t_string||
type_of((V55))==t_bitvector){
	goto T306;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T306;
T306:;
	if(!(endp_prop((V59)))){
	goto T310;}
	goto T308;
	goto T310;
T310:;
	if(!((car((V59)))==(VV[17]))){
	goto T312;}
	goto T308;
	goto T312;
T312:;
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	Larray_element_type();
	vs_top=sup;
	V92= vs_base[0];
	V93= (*(LnkLI143))(car((V59)));
	if(equal(V92,/* INLINE-ARGS */V93)){
	goto T308;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T308;
T308:;
	if(!(endp_prop(cdr((V59))))){
	goto T316;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T316;
T316:;
	if(!((cadr((V59)))==(VV[17]))){
	goto T318;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T318;
T318:;
	{object V94= cadr((V59));
	if(!(type_of(V94)==t_cons||(V94)==Cnil)){
	goto T321;}}
	V95= (*(LnkLI137))((V55));
	base[3]= (*(LnkLI136))(/* INLINE-ARGS */V95,cadr((V59)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T321;
T321:;
	base[3]= (V55);
	vs_top=(vs_base=base+3)+1;
	Larray_rank();
	vs_top=sup;
	V96= vs_base[0];
	base[3]= (eql(V96,cadr((V59)))?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T305;
T305:;
	V60= get((V58),VV[36],Cnil);
	if(((V60))==Cnil){
	goto T326;}
	base[3]= (V55);
	base[4]= (V60);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk145)();
	return;
	goto T326;
T326:;
	V60= get((V58),VV[37],Cnil);
	if(((V60))==Cnil){
	goto T332;}
	base[3]= (V55);
	base[5]= (V60);
	{object V97;
	V97= (V59);
	 vs_top=base+6;
	 while(!endp(V97))
	 {vs_push(car(V97));V97=cdr(V97);}
	vs_base=base+6;}
	super_funcall_no_event(base[5]);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk127)();
	return;
	goto T332;
T332:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}}
	}
}
/*	local entry for function NORMALIZE-TYPE	*/

static object LI26(V99)

register object V99;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{register object V100;
	register object V101;
	V100= Cnil;
	V101= Cnil;
	if(!(type_of((V99))==t_cons)){
	goto T341;}
	if(!((car((V99)))==(VV[38]))){
	goto T341;}
	V100= get(cadr((V99)),VV[39],Cnil);
	if(((V100))!=Cnil){
	goto T346;}
	base[0]= VV[40];
	base[1]= (V99);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T346;
T346:;
	V99= (V100);
	goto T341;
T341:;
	goto T354;
T354:;
	if(!(type_of((V99))!=t_cons)){
	goto T358;}
	V100= (V99);
	V101= Cnil;
	goto T356;
	goto T358;
T358:;
	V100= car((V99));
	V101= cdr((V99));
	goto T356;
T356:;
	if((get((V100),VV[37],Cnil))==Cnil){
	goto T367;}
	base[0]= get((V100),VV[37],Cnil);
	{object V102;
	V102= (V101);
	 vs_top=base+1;
	 while(!endp(V102))
	 {vs_push(car(V102));V102=cdr(V102);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V99= vs_base[0];
	goto T355;
	goto T367;
T367:;
	if(!(type_of((V99))!=t_cons)){
	goto T373;}
	{object V103 = make_cons((V99),Cnil);
	VMR26(V103)}
	goto T373;
T373:;
	{object V104 = (V99);
	VMR26(V104)}
	goto T355;
T355:;
	goto T354;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function KNOWN-TYPE-P	*/

static object LI27(V106)

register object V106;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	if(!(type_of((V106))==t_cons)){
	goto T376;}
	V106= car((V106));
	goto T376;
T376:;
	V107= coerce_to_string((V106));
	if(equal(/* INLINE-ARGS */V107,VV[41])){
	goto T380;}
	{register object x= (V106),V108= VV[42];
	while(!endp(V108))
	if(eql(x,V108->c.c_car)){
	goto T380;
	}else V108=V108->c.c_cdr;}
	if((get((V106),VV[36],Cnil))==Cnil){
	goto T381;}
	goto T380;
T380:;
	{object V109 = Ct;
	VMR27(V109)}
	goto T381;
T381:;
	{object V110 = Cnil;
	VMR27(V110)}
	return Cnil;
}
/*	function definition for SUBTYPEP	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_reserve(VM28);
	{object V111;
	object V112;
	object V113;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V111=(base[0]);
	V112=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T387;}
	V113=(base[2]);
	vs_top=sup;
	goto T388;
	goto T387;
T387:;
	V113= Cnil;
	goto T388;
T388:;
	{object V114;
	object V115;
	object V116;
	object V117;
	object V118;
	object V119;
	object V120;
	V114= Cnil;
	V115= Cnil;
	V116= Cnil;
	V117= Cnil;
	V118= Cnil;
	V119= Cnil;
	V120= Cnil;
	{object V121;
	object V122;
	object V123;
	object V124;
	V121= (*(LnkLI124))((V111));
	V122= (*(LnkLI124))((V112));
	if(((V121))==Cnil){
	goto T402;}
	V123= (V111);
	goto T400;
	goto T402;
T402:;
	V123= (*(LnkLI146))((V111));
	goto T400;
T400:;
	if(((V122))==Cnil){
	goto T406;}
	V124= (V112);
	goto T404;
	goto T406;
T406:;
	V124= (*(LnkLI146))((V112));
	goto T404;
T404:;
	if(((V123))==Cnil){
	goto T408;}
	if(((V124))==Cnil){
	goto T408;}
	V126= (*(LnkLI125))((V123));
	{register object x= (V124),V125= /* INLINE-ARGS */V126;
	while(!endp(V125))
	if(eql(x,V125->c.c_car)){
	goto T415;
	}else V125=V125->c.c_cdr;
	goto T414;}
	goto T415;
T415:;
	base[7]= Ct;
	base[8]= Ct;
	vs_top=(vs_base=base+7)+2;
	return;
	goto T414;
T414:;
	base[7]= Cnil;
	base[8]= Ct;
	vs_top=(vs_base=base+7)+2;
	return;
	goto T408;
T408:;
	if(((V121))!=Cnil){
	goto T420;}
	if(((V122))==Cnil){
	goto T397;}
	goto T420;
T420:;
	base[7]= Cnil;
	base[8]= Ct;
	vs_top=(vs_base=base+7)+2;
	return;}
	goto T397;
T397:;
	V114= (*(LnkLI147))((V111));
	if(!((car((V114)))==(VV[38]))){
	goto T431;}
	V111= make_cons((V111),Cnil);
	goto T429;
	goto T431;
T431:;
	V111= (V114);
	goto T429;
T429:;
	V115= (*(LnkLI147))((V112));
	if(!((car((V115)))==(VV[38]))){
	goto T438;}
	V112= make_cons((V112),Cnil);
	goto T436;
	goto T438;
T438:;
	V112= (V115);
	goto T436;
T436:;
	if(!(equal((V111),(V112)))){
	goto T440;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T440;
T440:;
	V114= car((V111));
	V115= car((V112));
	V116= cdr((V111));
	V117= cdr((V112));
	if(!(((V114))==(VV[43]))){
	goto T455;}
	{register object V127;
	object V128;
	V127= (V116);
	V128= car((V127));
	goto T461;
T461:;
	if(!(endp_prop((V127)))){
	goto T462;}
	goto T457;
	goto T462;
T462:;
	base[4]= (V128);
	base[5]= (V112);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk127)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T466;}
	base[4]= Cnil;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	return;
	goto T466;
T466:;
	V127= cdr((V127));
	V128= car((V127));
	goto T461;}
	goto T457;
T457:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T455;
T455:;
	if(!(((V114))==(VV[44]))){
	goto T481;}
	{register object V129;
	object V130;
	V129= (V116);
	V130= car((V129));
	goto T487;
T487:;
	if(!(endp_prop((V129)))){
	goto T488;}
	goto T483;
	goto T488;
T488:;
	{object V131;
	object V132;
	base[4]= (V130);
	base[5]= (V112);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk148)();
	if(vs_base>=vs_top){vs_top=sup;goto T496;}
	V131= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T497;}
	V132= vs_base[0];
	vs_top=sup;
	goto T498;
	goto T496;
T496:;
	V131= Cnil;
	goto T497;
T497:;
	V132= Cnil;
	goto T498;
T498:;
	if(((V131))!=Cnil){
	goto T492;}
	base[4]= (V131);
	base[5]= (V132);
	vs_top=(vs_base=base+4)+2;
	return;}
	goto T492;
T492:;
	V129= cdr((V129));
	V130= car((V129));
	goto T487;}
	goto T483;
T483:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T481;
T481:;
	if(!(((V114))==(VV[45]))){
	goto T511;}
	{register object V133;
	object V134;
	V133= (V116);
	V134= car((V133));
	goto T517;
T517:;
	if(!(endp_prop((V133)))){
	goto T518;}
	goto T513;
	goto T518;
T518:;
	{object V135;
	base[4]= (V134);
	base[5]= (V112);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk148)();
	vs_top=sup;
	V135= vs_base[0];
	if(((V135))==Cnil){
	goto T522;}
	base[4]= Ct;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	return;}
	goto T522;
T522:;
	V133= cdr((V133));
	V134= car((V133));
	goto T517;}
	goto T513;
T513:;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T511;
T511:;
	if(!(((V114))==(VV[46]))){
	goto T453;}
	if(!(((V115))==(VV[46]))){
	goto T540;}
	base[3]= car((V117));
	base[4]= car((V116));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk148)();
	return;
	goto T540;
T540:;
	base[3]= Ct;
	base[4]= list(3,VV[44],(V112),car((V116)));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk148)();
	return;
	goto T453;
T453:;
	if(!(((V115))==(VV[43]))){
	goto T548;}
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T548;
T548:;
	if(!(((V115))==(VV[44]))){
	goto T553;}
	{register object V136;
	object V137;
	V136= (V117);
	V137= car((V136));
	goto T559;
T559:;
	if(!(endp_prop((V136)))){
	goto T560;}
	goto T555;
	goto T560;
T560:;
	{object V138;
	base[4]= (V111);
	base[5]= (V137);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk148)();
	vs_top=sup;
	V138= vs_base[0];
	if(((V138))==Cnil){
	goto T564;}
	base[4]= Ct;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	return;}
	goto T564;
T564:;
	V136= cdr((V136));
	V137= car((V136));
	goto T559;}
	goto T555;
T555:;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T553;
T553:;
	if(!(((V115))==(VV[45]))){
	goto T580;}
	{register object V139;
	object V140;
	V139= (V117);
	V140= car((V139));
	goto T586;
T586:;
	if(!(endp_prop((V139)))){
	goto T587;}
	goto T582;
	goto T587;
T587:;
	{object V141;
	object V142;
	base[4]= (V111);
	base[5]= (V140);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk148)();
	if(vs_base>=vs_top){vs_top=sup;goto T595;}
	V141= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T596;}
	V142= vs_base[0];
	vs_top=sup;
	goto T597;
	goto T595;
T595:;
	V141= Cnil;
	goto T596;
T596:;
	V142= Cnil;
	goto T597;
T597:;
	if(((V141))!=Cnil){
	goto T591;}
	base[4]= (V141);
	base[5]= (V142);
	vs_top=(vs_base=base+4)+2;
	return;}
	goto T591;
T591:;
	V139= cdr((V139));
	V140= car((V139));
	goto T586;}
	goto T582;
T582:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T580;
T580:;
	if(!(((V115))==(VV[46]))){
	goto T546;}
	base[3]= list(3,VV[45],(V111),car((V117)));
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk148)();
	return;
	goto T546;
T546:;
	V118= (*(LnkLI149))((V111));
	V119= (*(LnkLI149))((V112));
	if(((V114))==(Cnil)){
	goto T617;}
	if(((V115))==(Ct)){
	goto T617;}
	if(!(((V115))==(VV[47]))){
	goto T618;}
	goto T617;
T617:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T618;
T618:;
	if(!(((V115))==(Cnil))){
	goto T627;}
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T627;
T627:;
	if(!(((V114))==(Ct))){
	goto T632;}
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T632;
T632:;
	if(!(((V114))==(VV[47]))){
	goto T637;}
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T637;
T637:;
	if(!(((V115))==(VV[48]))){
	goto T642;}
	{register object x= (V114),V143= VV[49];
	while(!endp(V143))
	if(eql(x,V143->c.c_car)){
	goto T646;
	}else V143=V143->c.c_cdr;
	goto T645;}
	goto T646;
T646:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T645;
T645:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T642;
T642:;
	if(!(((V115))==(VV[50]))){
	goto T652;}
	{register object x= (V114),V144= VV[51];
	while(!endp(V144))
	if(eql(x,V144->c.c_car)){
	goto T656;
	}else V144=V144->c.c_cdr;
	goto T655;}
	goto T656;
T656:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T655;
T655:;
	if(((V114))==(VV[27])){
	goto T659;}
	if(!(((V114))==(VV[22]))){
	goto T660;}
	goto T659;
T659:;
	if((cdr((V116)))==Cnil){
	goto T665;}
	if(!(type_of(cadr((V116)))==t_cons)){
	goto T665;}
	if((cdadr((V116)))!=Cnil){
	goto T665;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T665;
T665:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T660;
T660:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T652;
T652:;
	if(!(((V114))==(VV[48]))){
	goto T678;}
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T678;
T678:;
	if(!(((V114))==(VV[50]))){
	goto T683;}
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T683;
T683:;
	if(!(((V115))==(VV[52]))){
	goto T688;}
	{register object x= (V114),V145= VV[53];
	while(!endp(V145))
	if(eql(x,V145->c.c_car)){
	goto T692;
	}else V145=V145->c.c_cdr;
	goto T691;}
	goto T692;
T692:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T691;
T691:;
	if(((V118))==Cnil){
	goto T696;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T696;
T696:;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T688;
T688:;
	if(!(((V114))==(VV[52]))){
	goto T703;}
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T703;
T703:;
	if(!(((V115))==(VV[54]))){
	goto T708;}
	{register object x= (V114),V146= VV[55];
	while(!endp(V146))
	if(eql(x,V146->c.c_car)){
	goto T712;
	}else V146=V146->c.c_cdr;
	goto T711;}
	goto T712;
T712:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T711;
T711:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T708;
T708:;
	if(!(((V115))==(VV[9]))){
	goto T718;}
	{register object x= (V114),V147= VV[56];
	while(!endp(V147))
	if(eql(x,V147->c.c_car)){
	goto T722;
	}else V147=V147->c.c_cdr;
	goto T721;}
	goto T722;
T722:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T721;
T721:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T718;
T718:;
	if(!(((V115))==(VV[57]))){
	goto T728;}
	if(!(((V114))==(VV[58]))){
	goto T731;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T731;
T731:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T728;
T728:;
	if(!(((V115))==(VV[59]))){
	goto T738;}
	if(!(((V114))==(VV[60]))){
	goto T741;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T741;
T741:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T738;
T738:;
	if(!(((V115))==(VV[61]))){
	goto T748;}
	{register object x= (V114),V148= VV[62];
	while(!endp(V148))
	if(eql(x,V148->c.c_car)){
	goto T752;
	}else V148=V148->c.c_cdr;
	goto T751;}
	goto T752;
T752:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T751;
T751:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T748;
T748:;
	if(!(((V115))==(VV[63]))){
	goto T758;}
	{register object x= (V114),V149= VV[64];
	while(!endp(V149))
	if(eql(x,V149->c.c_car)){
	goto T762;
	}else V149=V149->c.c_cdr;
	goto T761;}
	goto T762;
T762:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T761;
T761:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T758;
T758:;
	if(!(((V115))==(VV[65]))){
	goto T768;}
	V150= coerce_to_string((V114));
	if(equal(/* INLINE-ARGS */V150,VV[66])){
	goto T770;}
	{register object x= (V114),V151= VV[67];
	while(!endp(V151))
	if(eql(x,V151->c.c_car)){
	goto T774;
	}else V151=V151->c.c_cdr;
	goto T771;}
	goto T774;
T774:;
	goto T770;
T770:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T771;
T771:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T768;
T768:;
	if(!(((V115))==(VV[68]))){
	goto T780;}
	V152= coerce_to_string((V114));
	if(equal(/* INLINE-ARGS */V152,VV[69])){
	goto T782;}
	{register object x= (V114),V153= VV[70];
	while(!endp(V153))
	if(eql(x,V153->c.c_car)){
	goto T786;
	}else V153=V153->c.c_cdr;
	goto T783;}
	goto T786;
T786:;
	goto T782;
T782:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T783;
T783:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T780;
T780:;
	if(!(((V115))==(VV[71]))){
	goto T792;}
	if(!(((V114))==(VV[72]))){
	goto T795;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T795;
T795:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T792;
T792:;
	if(!(((V115))==(VV[73]))){
	goto T802;}
	if(!(((V114))==(VV[74]))){
	goto T805;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T805;
T805:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T802;
T802:;
	if(!(((V115))==(VV[75]))){
	goto T812;}
	{register object x= (V114),V154= VV[76];
	while(!endp(V154))
	if(eql(x,V154->c.c_car)){
	goto T816;
	}else V154=V154->c.c_cdr;
	goto T815;}
	goto T816;
T816:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T815;
T815:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T812;
T812:;
	V155= coerce_to_string((V115));
	if(equal(/* INLINE-ARGS */V155,VV[77])){
	goto T821;}
	if(!(((V115))==(VV[78]))){
	goto T822;}
	goto T821;
T821:;
	{register object x= (V114),V156= VV[79];
	while(!endp(V156))
	if(eql(x,V156->c.c_car)){
	goto T828;
	}else V156=V156->c.c_cdr;
	goto T827;}
	goto T828;
T828:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T827;
T827:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T822;
T822:;
	if(!(((V115))==(VV[80]))){
	goto T834;}
	{register object x= (V114),V157= VV[81];
	while(!endp(V157))
	if(eql(x,V157->c.c_car)){
	goto T838;
	}else V157=V157->c.c_cdr;
	goto T837;}
	goto T838;
T838:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T837;
T837:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T834;
T834:;
	if(!(((V115))==(VV[82]))){
	goto T844;}
	if(!(((V114))==(VV[83]))){
	goto T847;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T847;
T847:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T844;
T844:;
	if(!(((V115))==(VV[84]))){
	goto T854;}
	if(!(((V114))==(VV[85]))){
	goto T857;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T857;
T857:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T854;
T854:;
	if(!(((V115))==(VV[86]))){
	goto T864;}
	{register object x= (V114),V158= VV[87];
	while(!endp(V158))
	if(eql(x,V158->c.c_car)){
	goto T868;
	}else V158=V158->c.c_cdr;
	goto T867;}
	goto T868;
T868:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T867;
T867:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T864;
T864:;
	if(!(((V115))==(VV[86]))){
	goto T874;}
	{register object x= (V114),V159= VV[88];
	while(!endp(V159))
	if(eql(x,V159->c.c_car)){
	goto T878;
	}else V159=V159->c.c_cdr;
	goto T877;}
	goto T878;
T878:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T877;
T877:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T874;
T874:;
	if(!(((V115))==(VV[89]))){
	goto T884;}
	{register object x= (V114),V160= VV[90];
	while(!endp(V160))
	if(eql(x,V160->c.c_car)){
	goto T888;
	}else V160=V160->c.c_cdr;
	goto T887;}
	goto T888;
T888:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T887;
T887:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T884;
T884:;
	if(!(((V115))==(VV[91]))){
	goto T894;}
	{register object x= (V114),V161= VV[92];
	while(!endp(V161))
	if(eql(x,V161->c.c_car)){
	goto T898;
	}else V161=V161->c.c_cdr;
	goto T897;}
	goto T898;
T898:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T897;
T897:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T894;
T894:;
	if(!(((V115))==(VV[93]))){
	goto T904;}
	{register object x= (V114),V162= VV[94];
	while(!endp(V162))
	if(eql(x,V162->c.c_car)){
	goto T908;
	}else V162=V162->c.c_cdr;
	goto T907;}
	goto T908;
T908:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T907;
T907:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T904;
T904:;
	if(!(((V115))==(VV[95]))){
	goto T914;}
	if(!(((V114))==(VV[95]))){
	goto T917;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T917;
T917:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T914;
T914:;
	if(!(((V115))==(VV[60]))){
	goto T924;}
	if(!(((V114))==(VV[60]))){
	goto T927;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T927;
T927:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T924;
T924:;
	if(!(((V115))==(VV[96]))){
	goto T934;}
	{register object x= (V114),V163= VV[97];
	while(!endp(V163))
	if(eql(x,V163->c.c_car)){
	goto T938;
	}else V163=V163->c.c_cdr;
	goto T937;}
	goto T938;
T938:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T937;
T937:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T934;
T934:;
	if(!(((V114))==(VV[96]))){
	goto T944;}
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T944;
T944:;
	if(((V115))==(VV[29])){
	goto T948;}
	if(!(((V115))==(VV[28]))){
	goto T949;}
	goto T948;
T948:;
	if(((V114))==(VV[29])){
	goto T953;}
	if((get((V114),VV[36],Cnil))==Cnil){
	goto T954;}
	goto T953;
T953:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T954;
T954:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T949;
T949:;
	if(!(((V114))==(VV[29]))){
	goto T963;}
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T963;
T963:;
	V120= get((V114),VV[36],Cnil);
	if(((V120))==Cnil){
	goto T968;}
	{object V164;
	V164= get((V115),VV[36],Cnil);
	if(((V164))==Cnil){
	goto T973;}
	{register object V165;
	V165= (V120);
	goto T976;
T976:;
	if(((V165))!=Cnil){
	goto T977;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T977;
T977:;
	if(!(((V165))==(V164))){
	goto T983;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T983;
T983:;
	V165= structure_ref((V165),VV[36],4);
	goto T976;}
	goto T973;
T973:;
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;}
	goto T968;
T968:;
	if(!(((V115))==(VV[98]))){
	goto T994;}
	{register object x= (V114),V167= VV[99];
	while(!endp(V167))
	if(eql(x,V167->c.c_car)){
	goto T999;
	}else V167=V167->c.c_cdr;
	goto T997;}
	goto T999;
T999:;
	if(((*(LnkLI150))((V116),(V117)))==Cnil){
	goto T997;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T997;
T997:;
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T994;
T994:;
	if((get((V115),VV[36],Cnil))==Cnil){
	goto T1006;}
	base[3]= Cnil;
	base[4]= (V118);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1006;
T1006:;
	{object V168= (V114);
	if((V168!= VV[32]))goto T1010;
	{object V169= (V115);
	if((V169!= VV[32]))goto T1011;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1011;
T1011:;
	if((V169!= VV[13])
	&& (V169!= VV[107]))goto T1014;
	if(((*(LnkLI150))(VV[100],(V117)))==Cnil){
	goto T1016;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1016;
T1016:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1014;
T1014:;
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;}
	goto T1010;
T1010:;
	if((V168!= VV[33]))goto T1024;
	{object V170= (V115);
	if((V170!= VV[107]))goto T1025;
	if(((*(LnkLI150))(VV[101],(V117)))==Cnil){
	goto T1027;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1027;
T1027:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1025;
T1025:;
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;}
	goto T1024;
T1024:;
	if((V168!= VV[128]))goto T1035;
	{register object x= (V115),V171= VV[102];
	while(!endp(V171))
	if(eql(x,V171->c.c_car)){
	goto T1038;
	}else V171=V171->c.c_cdr;
	goto T1037;}
	goto T1038;
T1038:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1037;
T1037:;
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1035;
T1035:;
	if((V168!= VV[25]))goto T1043;
	{register object x= (V115),V172= VV[103];
	while(!endp(V172))
	if(eql(x,V172->c.c_car)){
	goto T1046;
	}else V172=V172->c.c_cdr;
	goto T1045;}
	goto T1046;
T1046:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1045;
T1045:;
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1043;
T1043:;
	if((V168!= VV[151]))goto T1051;
	{register object x= (V115),V173= VV[104];
	while(!endp(V173))
	if(eql(x,V173->c.c_car)){
	goto T1054;
	}else V173=V173->c.c_cdr;
	goto T1053;}
	goto T1054;
T1054:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1053;
T1053:;
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1051;
T1051:;
	if((V168!= VV[24]))goto T1059;
	if(!(((V115))==(VV[105]))){
	goto T1061;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1061;
T1061:;
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1059;
T1059:;
	if((V168!= VV[105]))goto T1067;
	if(!(((V115))==(VV[24]))){
	goto T1069;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1069;
T1069:;
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1067;
T1067:;
	if((V168!= VV[13]))goto T1075;
	{register object x= (V115),V174= VV[106];
	while(!endp(V174))
	if(eql(x,V174->c.c_car)){
	goto T1078;
	}else V174=V174->c.c_cdr;
	goto T1077;}
	goto T1078;
T1078:;
	base[3]= (*(LnkLI150))((V116),(V117));
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1077;
T1077:;
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1075;
T1075:;
	if((V168!= VV[107]))goto T1083;
	if(!(((V115))==(VV[107]))){
	goto T1085;}
	base[3]= (*(LnkLI150))((V116),(V117));
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1085;
T1085:;
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1083;
T1083:;
	if((V168!= VV[108]))goto T1091;
	if(!(((V115))==(VV[108]))){
	goto T1093;}
	base[3]= (*(LnkLI150))((V116),(V117));
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1093;
T1093:;
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1091;
T1091:;
	if((V168!= VV[34]))goto T1099;
	{register object x= (V115),V175= VV[109];
	while(!endp(V175))
	if(eql(x,V175->c.c_car)){
	goto T1102;
	}else V175=V175->c.c_cdr;
	goto T1101;}
	goto T1102;
T1102:;
	base[3]= (*(LnkLI150))((V116),(V117));
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1101;
T1101:;
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1099;
T1099:;
	if((V168!= VV[132])
	&& (V168!= VV[133])
	&& (V168!= VV[35]))goto T1107;
	{register object x= (V115),V176= VV[110];
	while(!endp(V176))
	if(eql(x,V176->c.c_car)){
	goto T1110;
	}else V176=V176->c.c_cdr;
	goto T1109;}
	goto T1110;
T1110:;
	base[3]= (*(LnkLI150))((V116),(V117));
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1109;
T1109:;
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1107;
T1107:;
	if((V168!= VV[111]))goto T1115;
	if(!(((V115))==(VV[111]))){
	goto T1117;}{object V177;
	V177= car((V116));
	if(V177==Cnil)goto T1120;
	base[3]= V177;
	goto T1119;
	goto T1120;
T1120:;}
	base[3]= Ct;
	goto T1119;
T1119:;{object V178;
	V178= car((V117));
	if(V178==Cnil)goto T1123;
	base[4]= V178;
	goto T1122;
	goto T1123;
T1123:;}
	base[4]= Ct;
	goto T1122;
T1122:;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk148)();
	return;
	goto T1117;
T1117:;
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1115;
T1115:;
	if((V168!= VV[27]))goto T1127;
	if(((V115))==(VV[27])){
	goto T1128;}
	if(!(((V115))==(VV[22]))){
	goto T1129;}
	goto T1128;
T1128:;
	if(endp_prop((V116))){
	goto T1134;}
	if(!((car((V116)))==(VV[17]))){
	goto T1135;}
	goto T1134;
T1134:;
	if(endp_prop((V117))){
	goto T1133;}
	if((car((V117)))==(VV[17])){
	goto T1133;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1135;
T1135:;
	if(endp_prop((V117))){
	goto T1133;}
	if((car((V117)))==(VV[17])){
	goto T1133;}
	if(equal(car((V116)),car((V117)))){
	goto T1133;}
	if(!((car((V116)))==(VV[25]))){
	goto T1149;}
	if((car((V117)))==(VV[24])){
	goto T1133;}
	goto T1149;
T1149:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1133;
T1133:;
	if(endp_prop(cdr((V116)))){
	goto T1158;}
	if(!((cadr((V116)))==(VV[17]))){
	goto T1157;}
	goto T1158;
T1158:;
	if(endp_prop(cdr((V117)))){
	goto T1162;}
	if(!((cadr((V117)))==(VV[17]))){
	goto T1163;}
	goto T1162;
T1162:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1163;
T1163:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1157;
T1157:;
	if(endp_prop(cdr((V117)))){
	goto T1172;}
	if(!((cadr((V117)))==(VV[17]))){
	goto T1171;}
	goto T1172;
T1172:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1171;
T1171:;
	base[3]= (*(LnkLI136))(cadr((V116)),cadr((V117)));
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1129;
T1129:;
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1127;
T1127:;
	if((V168!= VV[22]))goto T1182;
	if(!(((V115))==(VV[22]))){
	goto T1184;}
	if(endp_prop((V116))){
	goto T1187;}
	if(!((car((V116)))==(VV[17]))){
	goto T1188;}
	goto T1187;
T1187:;
	if(endp_prop((V117))){
	goto T1186;}
	if((car((V117)))==(VV[17])){
	goto T1186;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1188;
T1188:;
	if(endp_prop((V117))){
	goto T1186;}
	if((car((V117)))==(VV[17])){
	goto T1186;}
	if(equal(car((V116)),car((V117)))){
	goto T1186;}
	if(!((car((V116)))==(VV[25]))){
	goto T1202;}
	if((car((V117)))==(VV[24])){
	goto T1186;}
	goto T1202;
T1202:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1186;
T1186:;
	if(endp_prop(cdr((V116)))){
	goto T1211;}
	if(!((cadr((V116)))==(VV[17]))){
	goto T1210;}
	goto T1211;
T1211:;
	if(endp_prop(cdr((V117)))){
	goto T1215;}
	if(!((cadr((V117)))==(VV[17]))){
	goto T1216;}
	goto T1215;
T1215:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1216;
T1216:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1210;
T1210:;
	if(endp_prop(cdr((V117)))){
	goto T1225;}
	if(!((cadr((V117)))==(VV[17]))){
	goto T1224;}
	goto T1225;
T1225:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1224;
T1224:;
	base[3]= (*(LnkLI136))(cadr((V116)),cadr((V117)));
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1184;
T1184:;
	base[3]= Cnil;
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1182;
T1182:;
	if(((V118))==Cnil){
	goto T1236;}
	base[3]= (((V114))==((V115))?Ct:Cnil);
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1236;
T1236:;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	local entry for function SUB-INTERVAL-P	*/

static object LI29(V181,V182)

register object V181;register object V182;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{register object V183;
	register object V184;
	register object V185;
	register object V186;
	V183= Cnil;
	V184= Cnil;
	V185= Cnil;
	V186= Cnil;
	if(!(endp_prop((V181)))){
	goto T1244;}
	V183= VV[17];
	V184= VV[17];
	goto T1242;
	goto T1244;
T1244:;
	if(!(endp_prop(cdr((V181))))){
	goto T1250;}
	V183= car((V181));
	V184= VV[17];
	goto T1242;
	goto T1250;
T1250:;
	V183= car((V181));
	V184= cadr((V181));
	goto T1242;
T1242:;
	if(!(endp_prop((V182)))){
	goto T1260;}
	V185= VV[17];
	V186= VV[17];
	goto T1258;
	goto T1260;
T1260:;
	if(!(endp_prop(cdr((V182))))){
	goto T1266;}
	V185= car((V182));
	V186= VV[17];
	goto T1258;
	goto T1266;
T1266:;
	V185= car((V182));
	V186= cadr((V182));
	goto T1258;
T1258:;
	if(!(((V183))==(VV[17]))){
	goto T1276;}
	if(((V185))==(VV[17])){
	goto T1274;}
	{object V187 = Cnil;
	VMR29(V187)}
	goto T1276;
T1276:;
	{object V188;
	V188= (((V185))==(VV[17])?Ct:Cnil);
	if(((V188))==Cnil){
	goto T1282;}
	goto T1274;
	goto T1282;
T1282:;
	if(!(type_of((V183))==t_cons)){
	goto T1285;}
	if(!(type_of((V185))==t_cons)){
	goto T1288;}
	if(!(number_compare(car((V183)),car((V185)))<0)){
	goto T1274;}
	{object V189 = Cnil;
	VMR29(V189)}
	goto T1288;
T1288:;
	if(!(number_compare(car((V183)),(V185))<0)){
	goto T1274;}
	{object V190 = Cnil;
	VMR29(V190)}
	goto T1285;
T1285:;
	{object V191;
	if(!(type_of((V185))==t_cons)){
	goto T1296;}
	if(!(number_compare((V183),car((V185)))<=0)){
	goto T1299;}
	{object V192 = Cnil;
	VMR29(V192)}
	goto T1299;
T1299:;
	V191= Cnil;
	goto T1294;
	goto T1296;
T1296:;
	if(!(number_compare((V183),(V185))<0)){
	goto T1302;}
	{object V193 = Cnil;
	VMR29(V193)}
	goto T1302;
T1302:;
	V191= Cnil;
	goto T1294;
T1294:;
	if(((V191))==Cnil){
	goto T1274;}}}
	goto T1274;
T1274:;
	if(!(((V184))==(VV[17]))){
	goto T1308;}
	if(((V186))==(VV[17])){
	goto T1306;}
	{object V194 = Cnil;
	VMR29(V194)}
	goto T1308;
T1308:;
	{object V195;
	V195= (((V186))==(VV[17])?Ct:Cnil);
	if(((V195))==Cnil){
	goto T1314;}
	goto T1306;
	goto T1314;
T1314:;
	if(!(type_of((V184))==t_cons)){
	goto T1317;}
	if(!(type_of((V186))==t_cons)){
	goto T1320;}
	if(!(number_compare(car((V184)),car((V186)))>0)){
	goto T1306;}
	{object V196 = Cnil;
	VMR29(V196)}
	goto T1320;
T1320:;
	if(!(number_compare(car((V184)),(V186))>0)){
	goto T1306;}
	{object V197 = Cnil;
	VMR29(V197)}
	goto T1317;
T1317:;
	{object V198;
	if(!(type_of((V186))==t_cons)){
	goto T1328;}
	if(!(number_compare((V184),car((V186)))>=0)){
	goto T1331;}
	{object V199 = Cnil;
	VMR29(V199)}
	goto T1331;
T1331:;
	V198= Cnil;
	goto T1326;
	goto T1328;
T1328:;
	if(!(number_compare((V184),(V186))>0)){
	goto T1334;}
	{object V200 = Cnil;
	VMR29(V200)}
	goto T1334;
T1334:;
	V198= Cnil;
	goto T1326;
T1326:;
	if(((V198))==Cnil){
	goto T1306;}}}
	goto T1306;
T1306:;
	{object V201 = Ct;
	VMR29(V201)}}
	return Cnil;
}
/*	local entry for function IN-INTERVAL-P	*/

static object LI30(V204,V205)

register object V204;register object V205;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{register object V206;
	register object V207;
	V206= Cnil;
	V207= Cnil;
	if(!(endp_prop((V205)))){
	goto T1340;}
	V206= VV[17];
	V207= VV[17];
	goto T1338;
	goto T1340;
T1340:;
	if(!(endp_prop(cdr((V205))))){
	goto T1346;}
	V206= car((V205));
	V207= VV[17];
	goto T1338;
	goto T1346;
T1346:;
	V206= car((V205));
	V207= cadr((V205));
	goto T1338;
T1338:;
	{object V208;
	V208= (((V206))==(VV[17])?Ct:Cnil);
	if(((V208))==Cnil){
	goto T1357;}
	goto T1354;
	goto T1357;
T1357:;
	if(!(type_of((V206))==t_cons)){
	goto T1360;}
	if(!(number_compare((V204),car((V206)))<=0)){
	goto T1354;}
	{object V209 = Cnil;
	VMR30(V209)}
	goto T1360;
T1360:;
	{object V210;
	if(!(number_compare((V204),(V206))<0)){
	goto T1366;}
	{object V211 = Cnil;
	VMR30(V211)}
	goto T1366;
T1366:;
	V210= Cnil;
	if(((V210))==Cnil){
	goto T1354;}}}
	goto T1354;
T1354:;
	{object V212;
	V212= (((V207))==(VV[17])?Ct:Cnil);
	if(((V212))==Cnil){
	goto T1373;}
	goto T1370;
	goto T1373;
T1373:;
	if(!(type_of((V207))==t_cons)){
	goto T1376;}
	if(!(number_compare((V204),car((V207)))>=0)){
	goto T1370;}
	{object V213 = Cnil;
	VMR30(V213)}
	goto T1376;
T1376:;
	{object V214;
	if(!(number_compare((V204),(V207))>0)){
	goto T1382;}
	{object V215 = Cnil;
	VMR30(V215)}
	goto T1382;
T1382:;
	V214= Cnil;
	if(((V214))==Cnil){
	goto T1370;}}}
	goto T1370;
T1370:;
	{object V216 = Ct;
	VMR30(V216)}}
	return Cnil;
}
/*	local entry for function MATCH-DIMENSIONS	*/

static object LI31(V219,V220)

object V219;register object V220;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	if(((V219))!=Cnil){
	goto T1387;}
	{object V221 = (((V220))==Cnil?Ct:Cnil);
	VMR31(V221)}
	goto T1387;
T1387:;
	if(!((car((V220)))==(VV[17]))){
	goto T1391;}
	goto T1389;
	goto T1391;
T1391:;
	if(eql(car((V219)),car((V220)))){
	goto T1389;}
	{object V222 = Cnil;
	VMR31(V222)}
	goto T1389;
T1389:;
	V219= cdr((V219));
	V220= cdr((V220));
	goto TTL;
	return Cnil;
}
/*	local entry for function COERCE	*/

static object LI32(V225,V226)

register object V225;object V226;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	base[0]= (V225);
	base[1]= (V226);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk127)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1396;}
	{object V227 = (V225);
	VMR32(V227)}
	goto T1396;
T1396:;
	if(((*(LnkLI124))((V226)))==Cnil){
	goto T1401;}
	base[0]= VV[112];
	base[1]= VV[113];
	base[2]= (V225);
	base[3]= (V226);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk152)();
	vs_top=sup;
	goto T1401;
T1401:;
	V226= (*(LnkLI147))((V226));
	{object V228= car((V226));
	if((V228!= VV[48]))goto T1410;
	{register object V229;
	register object V230;
	V231 = make_fixnum((long)length((V225)));
	V230= one_minus(V231);
	V229= Cnil;
	goto T1413;
T1413:;
	if(!(number_compare((V230),small_fixnum(0))<0)){
	goto T1414;}
	{object V232 = (V229);
	VMR32(V232)}
	goto T1414;
T1414:;
	V233= elt((V225),fixint((V230)));
	V229= make_cons(/* INLINE-ARGS */V233,(V229));
	V230= one_minus((V230));
	goto T1413;}
	goto T1410;
T1410:;
	if((V228!= VV[22])
	&& (V228!= VV[27]))goto T1422;
	if(endp_prop(cdr((V226)))){
	goto T1423;}
	if(endp_prop(cddr((V226)))){
	goto T1423;}
	if((caddr((V226)))==(VV[17])){
	goto T1423;}
	if(endp_prop(cdr(caddr((V226))))){
	goto T1423;}
	base[0]= VV[114];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1423;
T1423:;
	{register object V234;
	register object V235;
	register object V236;
	V237 = make_fixnum((long)length((V225)));
	V234= (VFUN_NARGS=2,(*(LnkLI153))((V226),V237));
	V236= make_fixnum((long)length((V225)));
	V235= small_fixnum(0);
	goto T1436;
T1436:;
	if(!(number_compare((V235),(V236))>=0)){
	goto T1437;}
	{object V238 = (V234);
	VMR32(V238)}
	goto T1437;
T1437:;
	V239= elt((V225),fixint((V235)));
	(void)(elt_set((V234),fixint((V235)),/* INLINE-ARGS */V239));
	V235= one_plus((V235));
	goto T1436;}
	goto T1422;
T1422:;
	if((V228!= VV[105]))goto T1445;
	base[0]= (V225);
	vs_top=(vs_base=base+0)+1;
	Lcharacter();
	vs_top=sup;
	{object V240 = vs_base[0];
	VMR32(V240)}
	goto T1445;
T1445:;
	if((V228!= VV[108]))goto T1447;
	base[0]= (V225);
	vs_top=(vs_base=base+0)+1;
	Lfloat();
	vs_top=sup;
	{object V241 = vs_base[0];
	VMR32(V241)}
	goto T1447;
T1447:;
	if((V228!= VV[34]))goto T1449;
	base[0]= (V225);
	base[1]= VV[115];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V242 = vs_base[0];
	VMR32(V242)}
	goto T1449;
T1449:;
	if((V228!= VV[132])
	&& (V228!= VV[133])
	&& (V228!= VV[35]))goto T1452;
	base[0]= (V225);
	base[1]= VV[116];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V243 = vs_base[0];
	VMR32(V243)}
	goto T1452;
T1452:;
	if((V228!= VV[111]))goto T1455;
	if((cdr((V226)))==Cnil){
	goto T1456;}
	if((cadr((V226)))==Cnil){
	goto T1456;}
	if(!((cadr((V226)))==(VV[17]))){
	goto T1457;}
	goto T1456;
T1456:;
	base[1]= (V225);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= (V225);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V244 = vs_base[0];
	VMR32(V244)}
	goto T1457;
T1457:;
	base[1]= (V225);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	V245= vs_base[0];
	base[0]= (*(LnkLI154))(V245,cadr((V226)));
	base[2]= (V225);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V246= vs_base[0];
	base[1]= (*(LnkLI154))(V246,cadr((V226)));
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V247 = vs_base[0];
	VMR32(V247)}
	goto T1455;
T1455:;
	base[0]= VV[117];
	base[1]= (V225);
	base[2]= (V226);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V248 = vs_base[0];
	VMR32(V248)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WARN-VERSION	*/

static object LI33(object V249,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB33 VMS33 VMV33
	{object V250;
	object V251;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V250= V249;
	narg = narg - 1;
	if (narg <= 0) goto T1476;
	else {
	V251= first;}
	--narg; goto T1477;
	goto T1476;
T1476:;
	V251= Cnil;
	goto T1477;
T1477:;
	if(symbol_value(VV[118])==Cnil){
	{object V252 = Cnil;
	VMR33(V252)}}
	if(!(((eql((V250),symbol_value(VV[118]))?Ct:Cnil))==Cnil)){
	goto T1481;}
	goto T1479;
	goto T1481;
T1481:;
	if(((eql((V251),symbol_value(VV[119]))?Ct:Cnil))==Cnil){
	goto T1479;}
	{object V253 = Cnil;
	VMR33(V253)}
	goto T1479;
T1479:;
	if(symbol_value(VV[120])==Cnil){
	{object V254 = Cnil;
	VMR33(V254)}}
	base[0]= Ct;
	base[1]= VV[121];
	base[2]= (V251);
	base[3]= (V250);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V255 = vs_base[0];
	VMR33(V255)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
static object  LnkTLI154(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[154],(void **)(void *)&LnkLI154,2,first,ap);va_end(ap);return V1;} /* COERCE */
static object  LnkTLI153(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[153],(void **)(void *)&LnkLI153,first,ap);va_end(ap);return V1;} /* MAKE-SEQUENCE */
static void LnkT152(){ call_or_link(VV[152],(void **)(void *)&Lnk152);} /* SPECIFIC-ERROR */
static object  LnkTLI150(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[150],(void **)(void *)&LnkLI150,2,first,ap);va_end(ap);return V1;} /* SUB-INTERVAL-P */
static object  LnkTLI149(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[149],(void **)(void *)&LnkLI149,1,first,ap);va_end(ap);return V1;} /* KNOWN-TYPE-P */
static void LnkT148(){ call_or_link(VV[148],(void **)(void *)&Lnk148);} /* SUBTYPEP */
static object  LnkTLI147(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[147],(void **)(void *)&LnkLI147,1,first,ap);va_end(ap);return V1;} /* NORMALIZE-TYPE */
static object  LnkTLI146(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[146],(void **)(void *)&LnkLI146,1,first,ap);va_end(ap);return V1;} /* FIND-CLASS-NO-ERROR */
static void LnkT145(){ call_or_link(VV[145],(void **)(void *)&Lnk145);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI144(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[144],(void **)(void *)&LnkLI144,1,first,ap);va_end(ap);return V1;} /* SIMPLE-ARRAY-P */
static object  LnkTLI143(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[143],(void **)(void *)&LnkLI143,1,first,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI137(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[137],(void **)(void *)&LnkLI137,1,first,ap);va_end(ap);return V1;} /* ARRAY-DIMENSIONS */
static object  LnkTLI136(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[136],(void **)(void *)&LnkLI136,2,first,ap);va_end(ap);return V1;} /* MATCH-DIMENSIONS */
static void LnkT131(){ call_or_link(VV[131],(void **)(void *)&Lnk131);} /* REALP */
static void LnkT130(){ call_or_link(VV[130],(void **)(void *)&Lnk130);} /* RATIONALP */
static object  LnkTLI129(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[129],(void **)(void *)&LnkLI129,2,first,ap);va_end(ap);return V1;} /* IN-INTERVAL-P */
static void LnkT127(){ call_or_link(VV[127],(void **)(void *)&Lnk127);} /* TYPEP */
static object  LnkTLI126(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[126],(void **)(void *)&LnkLI126,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI125(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[125],(void **)(void *)&LnkLI125,1,first,ap);va_end(ap);return V1;} /* CLASS-PRECEDENCE-LIST */
static object  LnkTLI124(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[124],(void **)(void *)&LnkLI124,1,first,ap);va_end(ap);return V1;} /* CLASSP */
static void LnkT123(){ call_or_link(VV[123],(void **)(void *)&Lnk123);} /* ARRAY-HAS-FILL-POINTER-P */
static object  LnkTLI122(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[122],(void **)(void *)&LnkLI122,1,first,ap);va_end(ap);return V1;} /* FIND-DOCUMENTATION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

