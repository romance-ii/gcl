
#include "cmpinclude.h"
#include "predlib.h"
void init_predlib(){do_init(VV);}
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
	V13= (*(LnkLI120))(base[4]);
	V14= list(4,VV[5],/* INLINE-ARGS */V12,/* INLINE-ARGS */V13,VV[12]);
	base[5]= list(6,VV[3],VV[4],/* INLINE-ARGS */V9,/* INLINE-ARGS */V11,/* INLINE-ARGS */V14,list(2,VV[6],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	function definition for G1380	*/

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
/*	function definition for G1381	*/

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
/*	function definition for G1382	*/

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
/*	function definition for G1383	*/

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
/*	function definition for G1384	*/

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
/*	function definition for G1385	*/

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
/*	function definition for G1386	*/

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
/*	function definition for G1387	*/

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
/*	function definition for G1388	*/

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
/*	function definition for G1389	*/

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
/*	function definition for G1390	*/

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
/*	function definition for G1391	*/

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
/*	function definition for G1392	*/

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
/*	function definition for G1393	*/

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
/*	function definition for G1394	*/

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
/*	function definition for G1395	*/

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
/*	function definition for G1396	*/

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
	(void) (*Lnk121)();
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
/*	function definition for CLASS-OF	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{object V40;
	check_arg(1);
	V40=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for CLASSP	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{object V41;
	check_arg(1);
	V41=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for CLASS-PRECEDENCE-LIST	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	{object V42;
	check_arg(1);
	V42=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for FIND-CLASS	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	{object V43;
	check_arg(1);
	V43=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for TYPEP	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	{register object V44;
	register object V45;
	object V46;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V44=(base[0]);
	V45=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T91;}
	V46=(base[2]);
	vs_top=sup;
	goto T92;
	goto T91;
T91:;
	V46= Cnil;
	goto T92;
T92:;
	{register object V47;
	register object V48;
	object V49;
	V47= Cnil;
	V48= Cnil;
	V49= Cnil;
	base[3]= (V45);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T97;}
	base[4]= (V44);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk123)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	V51= vs_base[0];
	{register object x= (V45),V50= V51;
	while(!endp(V50))
	if(eql(x,V50->c.c_car)){
	goto T103;
	}else V50=V50->c.c_cdr;
	goto T102;}
	goto T103;
T103:;
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T102;
T102:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T97;
T97:;
	if(!(type_of((V45))!=t_cons)){
	goto T109;}
	V47= (V45);
	V48= Cnil;
	goto T107;
	goto T109;
T109:;
	V47= car((V45));
	V48= cdr((V45));
	goto T107;
T107:;
	if(!(((V47))==(VV[28]))){
	goto T117;}
	V47= VV[29];
	goto T117;
T117:;
	{object V52;
	V52= get((V47),VV[30],Cnil);
	if(((V52))==Cnil){
	goto T121;}
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event((V52));
	return;}
	goto T121;
T121:;
	{object V53= (V47);
	if((V53!= VV[42]))goto T126;
	{register object x= (V44),V54= (V48);
	while(!endp(V54))
	if(eql(x,V54->c.c_car)){
	base[3]= V54;
	vs_top=(vs_base=base+3)+1;
	return;
	}else V54=V54->c.c_cdr;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T126;
T126:;
	if((V53!= VV[45]))goto T127;
	base[3]= (V44);
	base[4]= car((V48));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk125)();
	vs_top=sup;
	V55= vs_base[0];
	base[3]= ((V55)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T127;
T127:;
	if((V53!= VV[43]))goto T131;
	{register object V56;
	V56= (V48);
	goto T133;
T133:;
	if(((V56))!=Cnil){
	goto T134;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T134;
T134:;
	base[3]= (V44);
	base[4]= car((V56));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk125)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T138;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T138;
T138:;
	V56= cdr((V56));
	goto T133;}
	goto T131;
T131:;
	if((V53!= VV[44]))goto T146;
	{register object V57;
	V57= (V48);
	goto T148;
T148:;
	if(((V57))!=Cnil){
	goto T149;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T149;
T149:;
	base[3]= (V44);
	base[4]= car((V57));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk125)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T153;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T153;
T153:;
	V57= cdr((V57));
	goto T148;}
	goto T146;
T146:;
	if((V53!= VV[41]))goto T161;
	base[3]= car((V48));
	base[4]= (V44);
	vs_top=(vs_base=base+4)+1;
	super_funcall_no_event(base[3]);
	return;
	goto T161;
T161:;
	if((V53!= Ct))goto T164;
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T164;
T164:;
	if((V53!= Cnil))goto T165;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T165;
T165:;
	if((V53!= VV[58]))goto T166;
	if(!(((V44))==(Ct))){
	goto T167;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T167;
T167:;
	base[3]= (((V44))==(Cnil)?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T166;
T166:;
	if((V53!= VV[31]))goto T169;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V58= vs_base[0];
	base[3]= ((V58)==(VV[31])?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T169;
T169:;
	if((V53!= VV[32]))goto T172;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V59= vs_base[0];
	base[3]= ((V59)==(VV[32])?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T172;
T172:;
	if((V53!= VV[33]))goto T175;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V60= vs_base[0];
	base[3]= ((V60)==(VV[33])?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T175;
T175:;
	if((V53!= VV[126]))goto T178;
	if(type_of((V44))==t_character){
	goto T179;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T179;
T179:;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Lstandard_char_p();
	return;
	goto T178;
T178:;
	if((V53!= VV[25])
	&& (V53!= VV[24]))goto T182;
	if(type_of((V44))==t_character){
	goto T183;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T183;
T183:;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Lstring_char_p();
	return;
	goto T182;
T182:;
	if((V53!= VV[13]))goto T186;
	if(type_of((V44))==t_fixnum||type_of((V44))==t_bignum){
	goto T187;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T187;
T187:;
	base[3]= (*(LnkLI127))((V44),(V48));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T186;
T186:;
	if((V53!= VV[105]))goto T189;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T190;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T190;
T190:;
	base[3]= (*(LnkLI127))((V44),(V48));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T189;
T189:;
	if((V53!= VV[96]))goto T193;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk129)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T194;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T194;
T194:;
	base[3]= (*(LnkLI127))((V44),(V48));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T193;
T193:;
	if((V53!= VV[106]))goto T197;
	if(type_of((V44))==t_shortfloat||type_of((V44))==t_longfloat){
	goto T198;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T198;
T198:;
	base[3]= (*(LnkLI127))((V44),(V48));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T197;
T197:;
	if((V53!= VV[34]))goto T200;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V61= vs_base[0];
	if((V61)==(VV[34])){
	goto T201;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T201;
T201:;
	base[3]= (*(LnkLI127))((V44),(V48));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T200;
T200:;
	if((V53!= VV[130])
	&& (V53!= VV[131])
	&& (V53!= VV[35]))goto T205;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V62= vs_base[0];
	if((V62)==(VV[35])){
	goto T206;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T206;
T206:;
	base[3]= (*(LnkLI127))((V44),(V48));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T205;
T205:;
	if((V53!= VV[109]))goto T210;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Lcomplexp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T211;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T211;
T211:;
	if(!(((V48))==Cnil)){
	goto T214;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T214;
T214:;
	base[4]= (V44);
	vs_top=(vs_base=base+4)+1;
	Lrealpart();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= car((V48));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk125)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T216;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T216;
T216:;
	base[4]= (V44);
	vs_top=(vs_base=base+4)+1;
	Limagpart();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= car((V48));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk125)();
	return;
	goto T210;
T210:;
	if((V53!= VV[49]))goto T224;
	if(!(type_of((V44))==t_cons||((V44))==Cnil)){
	goto T225;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T225;
T225:;
	base[3]= (type_of((V44))==t_vector||
type_of((V44))==t_string||
type_of((V44))==t_bitvector?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T224;
T224:;
	if((V53!= VV[132])
	&& (V53!= VV[133]))goto T227;
	if(type_of((V44))==t_string){
	goto T228;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T228;
T228:;
	if(!(endp_prop((V48)))){
	goto T230;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T230;
T230:;
	V63= (*(LnkLI135))((V44));
	base[3]= (*(LnkLI134))(/* INLINE-ARGS */V63,(V48));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T227;
T227:;
	if((V53!= VV[136]))goto T232;
	if((type_of((V44))==t_bitvector)){
	goto T233;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T233;
T233:;
	if(!(endp_prop((V48)))){
	goto T235;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T235;
T235:;
	V64= (*(LnkLI135))((V44));
	base[3]= (*(LnkLI134))(/* INLINE-ARGS */V64,(V48));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T232;
T232:;
	if((V53!= VV[137])
	&& (V53!= VV[138]))goto T237;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Lsimple_string_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T238;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T238;
T238:;
	if(!(endp_prop((V48)))){
	goto T241;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T241;
T241:;
	V65= (*(LnkLI135))((V44));
	base[3]= (*(LnkLI134))(/* INLINE-ARGS */V65,(V48));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T237;
T237:;
	if((V53!= VV[139]))goto T243;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Lsimple_bit_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T244;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T244;
T244:;
	if(!(endp_prop((V48)))){
	goto T247;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T247;
T247:;
	V66= (*(LnkLI135))((V44));
	base[3]= (*(LnkLI134))(/* INLINE-ARGS */V66,(V48));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T243;
T243:;
	if((V53!= VV[140]))goto T249;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Lsimple_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T250;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T250;
T250:;
	if(!(endp_prop((V48)))){
	goto T255;}
	goto T253;
	goto T255;
T255:;
	if(!((car((V48)))==(VV[17]))){
	goto T257;}
	goto T253;
	goto T257;
T257:;{object V67;
	if((car((V48)))==(Ct)){
	goto T261;}
	V67= Cnil;
	goto T260;
	goto T261;
T261:;
	if(((type_of((V44))==t_string?Ct:Cnil))==Cnil){
	goto T263;}
	V67= Cnil;
	goto T260;
	goto T263;
T263:;
	V67= ((((type_of((V44))==t_bitvector)?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T260;
T260:;
	if(V67==Cnil)goto T259;
	if((V67)!=Cnil){
	goto T253;}
	goto T254;
	goto T259;
T259:;}
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Larray_element_type();
	vs_top=sup;
	V68= vs_base[0];
	V69= (*(LnkLI141))(car((V48)));
	if(equal(V68,/* INLINE-ARGS */V69)){
	goto T253;}
	goto T254;
T254:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T253;
T253:;
	if(!(endp_prop(cdr((V48))))){
	goto T267;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T267;
T267:;
	V70= (*(LnkLI135))((V44));
	base[3]= (*(LnkLI134))(/* INLINE-ARGS */V70,cdr((V48)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T249;
T249:;
	if((V53!= VV[23]))goto T269;
	if(type_of((V44))==t_vector||
type_of((V44))==t_string||
type_of((V44))==t_bitvector){
	goto T270;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T270;
T270:;
	if(!(endp_prop((V48)))){
	goto T274;}
	goto T272;
	goto T274;
T274:;
	if(!((car((V48)))==(VV[17]))){
	goto T276;}
	goto T272;
	goto T276;
T276:;{object V71;
	if((car((V48)))==(Ct)){
	goto T280;}
	V71= Cnil;
	goto T279;
	goto T280;
T280:;
	if(((type_of((V44))==t_string?Ct:Cnil))==Cnil){
	goto T282;}
	V71= Cnil;
	goto T279;
	goto T282;
T282:;
	V71= ((((type_of((V44))==t_bitvector)?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T279;
T279:;
	if(V71==Cnil)goto T278;
	if((V71)!=Cnil){
	goto T272;}
	goto T273;
	goto T278;
T278:;}
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Larray_element_type();
	vs_top=sup;
	V72= vs_base[0];
	V73= (*(LnkLI141))(car((V48)));
	if(equal(V72,/* INLINE-ARGS */V73)){
	goto T272;}
	goto T273;
T273:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T272;
T272:;
	if(!(endp_prop(cdr((V48))))){
	goto T286;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T286;
T286:;
	V74= (*(LnkLI135))((V44));
	base[3]= (*(LnkLI134))(/* INLINE-ARGS */V74,cdr((V48)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T269;
T269:;
	if((V53!= VV[27]))goto T288;
	if(((*(LnkLI142))((V44)))!=Cnil){
	goto T289;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T289;
T289:;
	if(!(endp_prop((V48)))){
	goto T293;}
	goto T291;
	goto T293;
T293:;
	if(!((car((V48)))==(VV[17]))){
	goto T295;}
	goto T291;
	goto T295;
T295:;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Larray_element_type();
	vs_top=sup;
	V75= vs_base[0];
	V76= (*(LnkLI141))(car((V48)));
	if(equal(V75,/* INLINE-ARGS */V76)){
	goto T291;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T291;
T291:;
	if(!(endp_prop(cdr((V48))))){
	goto T299;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T299;
T299:;
	if(!((cadr((V48)))==(VV[17]))){
	goto T301;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T301;
T301:;
	{object V77= cadr((V48));
	if(!(type_of(V77)==t_cons||(V77)==Cnil)){
	goto T304;}}
	V78= (*(LnkLI135))((V44));
	base[3]= (*(LnkLI134))(/* INLINE-ARGS */V78,cadr((V48)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T304;
T304:;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Larray_rank();
	vs_top=sup;
	V79= vs_base[0];
	base[3]= (eql(V79,cadr((V48)))?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T288;
T288:;
	if((V53!= VV[22]))goto T308;
	if(type_of((V44))==t_array||
type_of((V44))==t_vector||
type_of((V44))==t_string||
type_of((V44))==t_bitvector){
	goto T309;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T309;
T309:;
	if(!(endp_prop((V48)))){
	goto T313;}
	goto T311;
	goto T313;
T313:;
	if(!((car((V48)))==(VV[17]))){
	goto T315;}
	goto T311;
	goto T315;
T315:;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Larray_element_type();
	vs_top=sup;
	V80= vs_base[0];
	V81= (*(LnkLI141))(car((V48)));
	if(equal(V80,/* INLINE-ARGS */V81)){
	goto T311;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T311;
T311:;
	if(!(endp_prop(cdr((V48))))){
	goto T319;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T319;
T319:;
	if(!((cadr((V48)))==(VV[17]))){
	goto T321;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T321;
T321:;
	{object V82= cadr((V48));
	if(!(type_of(V82)==t_cons||(V82)==Cnil)){
	goto T324;}}
	V83= (*(LnkLI135))((V44));
	base[3]= (*(LnkLI134))(/* INLINE-ARGS */V83,cadr((V48)));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T324;
T324:;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Larray_rank();
	vs_top=sup;
	V84= vs_base[0];
	base[3]= (eql(V84,cadr((V48)))?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T308;
T308:;
	V49= get((V47),VV[36],Cnil);
	if(((V49))==Cnil){
	goto T329;}
	base[3]= (V44);
	base[4]= (V49);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk143)();
	return;
	goto T329;
T329:;
	V49= get((V47),VV[37],Cnil);
	if(((V49))==Cnil){
	goto T335;}
	base[3]= (V44);
	base[5]= (V49);
	{object V85;
	V85= (V48);
	 vs_top=base+6;
	 while(!endp(V85))
	 {vs_push(car(V85));V85=cdr(V85);}
	vs_base=base+6;}
	super_funcall_no_event(base[5]);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk125)();
	return;
	goto T335;
T335:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}}
	}
}
/*	local entry for function NORMALIZE-TYPE	*/

static object LI25(V87)

register object V87;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{register object V88;
	register object V89;
	V88= Cnil;
	V89= Cnil;
	goto T345;
T345:;
	if(!(type_of((V87))!=t_cons)){
	goto T349;}
	V88= (V87);
	V89= Cnil;
	goto T347;
	goto T349;
T349:;
	V88= car((V87));
	V89= cdr((V87));
	goto T347;
T347:;
	if((get((V88),VV[37],Cnil))==Cnil){
	goto T358;}
	base[0]= get((V88),VV[37],Cnil);
	{object V90;
	V90= (V89);
	 vs_top=base+1;
	 while(!endp(V90))
	 {vs_push(car(V90));V90=cdr(V90);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V87= vs_base[0];
	goto T346;
	goto T358;
T358:;
	if(!(type_of((V87))!=t_cons)){
	goto T364;}
	{object V91 = make_cons((V87),Cnil);
	VMR25(V91)}
	goto T364;
T364:;
	{object V92 = (V87);
	VMR25(V92)}
	goto T346;
T346:;
	goto T345;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function KNOWN-TYPE-P	*/

static object LI26(V94)

register object V94;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	if(!(type_of((V94))==t_cons)){
	goto T367;}
	V94= car((V94));
	goto T367;
T367:;
	V95= coerce_to_string((V94));
	if(equal(/* INLINE-ARGS */V95,VV[38])){
	goto T371;}
	{register object x= (V94),V96= VV[39];
	while(!endp(V96))
	if(eql(x,V96->c.c_car)){
	goto T371;
	}else V96=V96->c.c_cdr;}
	if((get((V94),VV[36],Cnil))==Cnil){
	goto T372;}
	goto T371;
T371:;
	{object V97 = Ct;
	VMR26(V97)}
	goto T372;
T372:;
	{object V98 = Cnil;
	VMR26(V98)}
	return Cnil;
}
/*	function definition for SUBTYPEP	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	{object V99;
	object V100;
	object V101;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V99=(base[0]);
	V100=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T378;}
	V101=(base[2]);
	vs_top=sup;
	goto T379;
	goto T378;
T378:;
	V101= Cnil;
	goto T379;
T379:;
	{object V102;
	object V103;
	object V104;
	object V105;
	object V106;
	object V107;
	object V108;
	V102= Cnil;
	V103= Cnil;
	V104= Cnil;
	V105= Cnil;
	V106= Cnil;
	V107= Cnil;
	V108= Cnil;
	{object V109;
	object V110;
	base[3]= (V99);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	V109= vs_base[0];
	base[3]= (V100);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	V110= vs_base[0];
	if(((V109))==Cnil){
	goto T393;}
	if(((V110))==Cnil){
	goto T393;}
	base[3]= (V99);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	V112= vs_base[0];
	{register object x= (V100),V111= V112;
	while(!endp(V111))
	if(eql(x,V111->c.c_car)){
	goto T400;
	}else V111=V111->c.c_cdr;
	goto T399;}
	goto T400;
T400:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T399;
T399:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T393;
T393:;
	if(((V109))==Cnil){
	goto T407;}
	if(((V100))==(VV[28])){
	goto T408;}
	if(!(((V100))==(VV[40]))){
	goto T407;}
	goto T408;
T408:;
	base[3]= (V100);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk144)();
	vs_top=sup;
	V114= vs_base[0];
	base[3]= (V99);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	V115= vs_base[0];
	{register object x= V114,V113= V115;
	while(!endp(V113))
	if(eql(x,V113->c.c_car)){
	goto T416;
	}else V113=V113->c.c_cdr;
	goto T415;}
	goto T416;
T416:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T415;
T415:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T407;
T407:;
	if(((V109))!=Cnil){
	goto T425;}
	if(((V110))==Cnil){
	goto T388;}
	goto T425;
T425:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}
	goto T388;
T388:;
	V102= (*(LnkLI145))((V99));
	if(!((car((V102)))==(VV[41]))){
	goto T436;}
	V99= make_cons((V99),Cnil);
	goto T434;
	goto T436;
T436:;
	V99= (V102);
	goto T434;
T434:;
	V103= (*(LnkLI145))((V100));
	if(!((car((V103)))==(VV[41]))){
	goto T443;}
	V100= make_cons((V100),Cnil);
	goto T441;
	goto T443;
T443:;
	V100= (V103);
	goto T441;
T441:;
	if(!(equal((V99),(V100)))){
	goto T445;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T445;
T445:;
	V102= car((V99));
	V103= car((V100));
	V104= cdr((V99));
	V105= cdr((V100));
	if(!(((V102))==(VV[42]))){
	goto T460;}
	{register object V116;
	object V117;
	V116= (V104);
	V117= car((V116));
	goto T466;
T466:;
	if(!(endp_prop((V116)))){
	goto T467;}
	goto T462;
	goto T467;
T467:;
	base[4]= (V117);
	base[5]= (V100);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk125)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T471;}
	base[4]= Cnil;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	return;
	goto T471;
T471:;
	V116= cdr((V116));
	V117= car((V116));
	goto T466;}
	goto T462;
T462:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T460;
T460:;
	if(!(((V102))==(VV[43]))){
	goto T486;}
	{register object V118;
	object V119;
	V118= (V104);
	V119= car((V118));
	goto T492;
T492:;
	if(!(endp_prop((V118)))){
	goto T493;}
	goto T488;
	goto T493;
T493:;
	{object V120;
	object V121;
	base[4]= (V119);
	base[5]= (V100);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk146)();
	if(vs_base>=vs_top){vs_top=sup;goto T501;}
	V120= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T502;}
	V121= vs_base[0];
	vs_top=sup;
	goto T503;
	goto T501;
T501:;
	V120= Cnil;
	goto T502;
T502:;
	V121= Cnil;
	goto T503;
T503:;
	if(((V120))!=Cnil){
	goto T497;}
	base[4]= (V120);
	base[5]= (V121);
	vs_top=(vs_base=base+4)+2;
	return;}
	goto T497;
T497:;
	V118= cdr((V118));
	V119= car((V118));
	goto T492;}
	goto T488;
T488:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T486;
T486:;
	if(!(((V102))==(VV[44]))){
	goto T516;}
	{register object V122;
	object V123;
	V122= (V104);
	V123= car((V122));
	goto T522;
T522:;
	if(!(endp_prop((V122)))){
	goto T523;}
	goto T518;
	goto T523;
T523:;
	{object V124;
	base[4]= (V123);
	base[5]= (V100);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk146)();
	vs_top=sup;
	V124= vs_base[0];
	if(((V124))==Cnil){
	goto T527;}
	base[4]= Ct;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	return;}
	goto T527;
T527:;
	V122= cdr((V122));
	V123= car((V122));
	goto T522;}
	goto T518;
T518:;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T516;
T516:;
	if(!(((V102))==(VV[45]))){
	goto T458;}
	if(!(((V103))==(VV[45]))){
	goto T545;}
	base[3]= car((V105));
	base[4]= car((V104));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk146)();
	return;
	goto T545;
T545:;
	base[3]= Ct;
	base[4]= list(3,VV[43],(V100),car((V104)));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk146)();
	return;
	goto T458;
T458:;
	if(!(((V103))==(VV[42]))){
	goto T553;}
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T553;
T553:;
	if(!(((V103))==(VV[43]))){
	goto T558;}
	{register object V125;
	object V126;
	V125= (V105);
	V126= car((V125));
	goto T564;
T564:;
	if(!(endp_prop((V125)))){
	goto T565;}
	goto T560;
	goto T565;
T565:;
	{object V127;
	base[4]= (V99);
	base[5]= (V126);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk146)();
	vs_top=sup;
	V127= vs_base[0];
	if(((V127))==Cnil){
	goto T569;}
	base[4]= Ct;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	return;}
	goto T569;
T569:;
	V125= cdr((V125));
	V126= car((V125));
	goto T564;}
	goto T560;
T560:;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T558;
T558:;
	if(!(((V103))==(VV[44]))){
	goto T585;}
	{register object V128;
	object V129;
	V128= (V105);
	V129= car((V128));
	goto T591;
T591:;
	if(!(endp_prop((V128)))){
	goto T592;}
	goto T587;
	goto T592;
T592:;
	{object V130;
	object V131;
	base[4]= (V99);
	base[5]= (V129);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk146)();
	if(vs_base>=vs_top){vs_top=sup;goto T600;}
	V130= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T601;}
	V131= vs_base[0];
	vs_top=sup;
	goto T602;
	goto T600;
T600:;
	V130= Cnil;
	goto T601;
T601:;
	V131= Cnil;
	goto T602;
T602:;
	if(((V130))!=Cnil){
	goto T596;}
	base[4]= (V130);
	base[5]= (V131);
	vs_top=(vs_base=base+4)+2;
	return;}
	goto T596;
T596:;
	V128= cdr((V128));
	V129= car((V128));
	goto T591;}
	goto T587;
T587:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T585;
T585:;
	if(!(((V103))==(VV[45]))){
	goto T551;}
	base[3]= list(3,VV[44],(V99),car((V105)));
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk146)();
	return;
	goto T551;
T551:;
	V106= (*(LnkLI147))((V99));
	V107= (*(LnkLI147))((V100));
	if(((V102))==(Cnil)){
	goto T622;}
	if(((V103))==(Ct)){
	goto T622;}
	if(!(((V103))==(VV[46]))){
	goto T623;}
	goto T622;
T622:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T623;
T623:;
	if(!(((V103))==(Cnil))){
	goto T632;}
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T632;
T632:;
	if(!(((V102))==(Ct))){
	goto T637;}
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T637;
T637:;
	if(!(((V102))==(VV[46]))){
	goto T642;}
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T642;
T642:;
	if(!(((V103))==(VV[47]))){
	goto T647;}
	{register object x= (V102),V132= VV[48];
	while(!endp(V132))
	if(eql(x,V132->c.c_car)){
	goto T651;
	}else V132=V132->c.c_cdr;
	goto T650;}
	goto T651;
T651:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T650;
T650:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T647;
T647:;
	if(!(((V103))==(VV[49]))){
	goto T657;}
	{register object x= (V102),V133= VV[50];
	while(!endp(V133))
	if(eql(x,V133->c.c_car)){
	goto T661;
	}else V133=V133->c.c_cdr;
	goto T660;}
	goto T661;
T661:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T660;
T660:;
	if(((V102))==(VV[27])){
	goto T664;}
	if(!(((V102))==(VV[22]))){
	goto T665;}
	goto T664;
T664:;
	if((cdr((V104)))==Cnil){
	goto T670;}
	if(!(type_of(cadr((V104)))==t_cons)){
	goto T670;}
	if((cdadr((V104)))!=Cnil){
	goto T670;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T670;
T670:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T665;
T665:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T657;
T657:;
	if(!(((V102))==(VV[47]))){
	goto T683;}
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T683;
T683:;
	if(!(((V102))==(VV[49]))){
	goto T688;}
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T688;
T688:;
	if(!(((V103))==(VV[51]))){
	goto T693;}
	{register object x= (V102),V134= VV[52];
	while(!endp(V134))
	if(eql(x,V134->c.c_car)){
	goto T697;
	}else V134=V134->c.c_cdr;
	goto T696;}
	goto T697;
T697:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T696;
T696:;
	if(((V106))==Cnil){
	goto T701;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T701;
T701:;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T693;
T693:;
	if(!(((V102))==(VV[51]))){
	goto T708;}
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T708;
T708:;
	if(!(((V103))==(VV[53]))){
	goto T713;}
	{register object x= (V102),V135= VV[54];
	while(!endp(V135))
	if(eql(x,V135->c.c_car)){
	goto T717;
	}else V135=V135->c.c_cdr;
	goto T716;}
	goto T717;
T717:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T716;
T716:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T713;
T713:;
	if(!(((V103))==(VV[9]))){
	goto T723;}
	{register object x= (V102),V136= VV[55];
	while(!endp(V136))
	if(eql(x,V136->c.c_car)){
	goto T727;
	}else V136=V136->c.c_cdr;
	goto T726;}
	goto T727;
T727:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T726;
T726:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T723;
T723:;
	if(!(((V103))==(VV[56]))){
	goto T733;}
	if(!(((V102))==(VV[57]))){
	goto T736;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T736;
T736:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T733;
T733:;
	if(!(((V103))==(VV[58]))){
	goto T743;}
	if(!(((V102))==(VV[59]))){
	goto T746;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T746;
T746:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T743;
T743:;
	if(!(((V103))==(VV[40]))){
	goto T753;}
	{register object x= (V102),V137= VV[60];
	while(!endp(V137))
	if(eql(x,V137->c.c_car)){
	goto T757;
	}else V137=V137->c.c_cdr;
	goto T756;}
	goto T757;
T757:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T756;
T756:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T753;
T753:;
	if(!(((V103))==(VV[61]))){
	goto T763;}
	{register object x= (V102),V138= VV[62];
	while(!endp(V138))
	if(eql(x,V138->c.c_car)){
	goto T767;
	}else V138=V138->c.c_cdr;
	goto T766;}
	goto T767;
T767:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T766;
T766:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T763;
T763:;
	if(!(((V103))==(VV[63]))){
	goto T773;}
	V139= coerce_to_string((V102));
	if(equal(/* INLINE-ARGS */V139,VV[64])){
	goto T775;}
	{register object x= (V102),V140= VV[65];
	while(!endp(V140))
	if(eql(x,V140->c.c_car)){
	goto T779;
	}else V140=V140->c.c_cdr;
	goto T776;}
	goto T779;
T779:;
	goto T775;
T775:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T776;
T776:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T773;
T773:;
	if(!(((V103))==(VV[66]))){
	goto T785;}
	V141= coerce_to_string((V102));
	if(equal(/* INLINE-ARGS */V141,VV[67])){
	goto T787;}
	{register object x= (V102),V142= VV[68];
	while(!endp(V142))
	if(eql(x,V142->c.c_car)){
	goto T791;
	}else V142=V142->c.c_cdr;
	goto T788;}
	goto T791;
T791:;
	goto T787;
T787:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T788;
T788:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T785;
T785:;
	if(!(((V103))==(VV[69]))){
	goto T797;}
	if(!(((V102))==(VV[70]))){
	goto T800;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T800;
T800:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T797;
T797:;
	if(!(((V103))==(VV[71]))){
	goto T807;}
	if(!(((V102))==(VV[72]))){
	goto T810;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T810;
T810:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T807;
T807:;
	if(!(((V103))==(VV[73]))){
	goto T817;}
	{register object x= (V102),V143= VV[74];
	while(!endp(V143))
	if(eql(x,V143->c.c_car)){
	goto T821;
	}else V143=V143->c.c_cdr;
	goto T820;}
	goto T821;
T821:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T820;
T820:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T817;
T817:;
	V144= coerce_to_string((V103));
	if(equal(/* INLINE-ARGS */V144,VV[75])){
	goto T826;}
	if(!(((V103))==(VV[76]))){
	goto T827;}
	goto T826;
T826:;
	{register object x= (V102),V145= VV[77];
	while(!endp(V145))
	if(eql(x,V145->c.c_car)){
	goto T833;
	}else V145=V145->c.c_cdr;
	goto T832;}
	goto T833;
T833:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T832;
T832:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T827;
T827:;
	if(!(((V103))==(VV[78]))){
	goto T839;}
	{register object x= (V102),V146= VV[79];
	while(!endp(V146))
	if(eql(x,V146->c.c_car)){
	goto T843;
	}else V146=V146->c.c_cdr;
	goto T842;}
	goto T843;
T843:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T842;
T842:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T839;
T839:;
	if(!(((V103))==(VV[80]))){
	goto T849;}
	if(!(((V102))==(VV[81]))){
	goto T852;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T852;
T852:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T849;
T849:;
	if(!(((V103))==(VV[82]))){
	goto T859;}
	if(!(((V102))==(VV[83]))){
	goto T862;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T862;
T862:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T859;
T859:;
	if(!(((V103))==(VV[84]))){
	goto T869;}
	{register object x= (V102),V147= VV[85];
	while(!endp(V147))
	if(eql(x,V147->c.c_car)){
	goto T873;
	}else V147=V147->c.c_cdr;
	goto T872;}
	goto T873;
T873:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T872;
T872:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T869;
T869:;
	if(!(((V103))==(VV[84]))){
	goto T879;}
	{register object x= (V102),V148= VV[86];
	while(!endp(V148))
	if(eql(x,V148->c.c_car)){
	goto T883;
	}else V148=V148->c.c_cdr;
	goto T882;}
	goto T883;
T883:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T882;
T882:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T879;
T879:;
	if(!(((V103))==(VV[87]))){
	goto T889;}
	{register object x= (V102),V149= VV[88];
	while(!endp(V149))
	if(eql(x,V149->c.c_car)){
	goto T893;
	}else V149=V149->c.c_cdr;
	goto T892;}
	goto T893;
T893:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T892;
T892:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T889;
T889:;
	if(!(((V103))==(VV[89]))){
	goto T899;}
	{register object x= (V102),V150= VV[90];
	while(!endp(V150))
	if(eql(x,V150->c.c_car)){
	goto T903;
	}else V150=V150->c.c_cdr;
	goto T902;}
	goto T903;
T903:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T902;
T902:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T899;
T899:;
	if(!(((V103))==(VV[91]))){
	goto T909;}
	{register object x= (V102),V151= VV[92];
	while(!endp(V151))
	if(eql(x,V151->c.c_car)){
	goto T913;
	}else V151=V151->c.c_cdr;
	goto T912;}
	goto T913;
T913:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T912;
T912:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T909;
T909:;
	if(!(((V103))==(VV[93]))){
	goto T919;}
	if(!(((V102))==(VV[93]))){
	goto T922;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T922;
T922:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T919;
T919:;
	if(!(((V103))==(VV[59]))){
	goto T929;}
	if(!(((V102))==(VV[59]))){
	goto T932;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T932;
T932:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T929;
T929:;
	if(!(((V103))==(VV[94]))){
	goto T939;}
	{register object x= (V102),V152= VV[95];
	while(!endp(V152))
	if(eql(x,V152->c.c_car)){
	goto T943;
	}else V152=V152->c.c_cdr;
	goto T942;}
	goto T943;
T943:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T942;
T942:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T939;
T939:;
	if(!(((V102))==(VV[94]))){
	goto T949;}
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T949;
T949:;
	if(((V103))==(VV[29])){
	goto T953;}
	if(!(((V103))==(VV[28]))){
	goto T954;}
	goto T953;
T953:;
	if(((V102))==(VV[29])){
	goto T958;}
	if((get((V102),VV[36],Cnil))==Cnil){
	goto T959;}
	goto T958;
T958:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T959;
T959:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T954;
T954:;
	if(!(((V102))==(VV[29]))){
	goto T968;}
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T968;
T968:;
	V108= get((V102),VV[36],Cnil);
	if(((V108))==Cnil){
	goto T973;}
	{object V153;
	V153= get((V103),VV[36],Cnil);
	if(((V153))==Cnil){
	goto T978;}
	{register object V154;
	V154= (V108);
	goto T981;
T981:;
	if(((V154))!=Cnil){
	goto T982;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T982;
T982:;
	if(!(((V154))==(V153))){
	goto T988;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T988;
T988:;
	V154= structure_ref((V154),VV[36],4);
	goto T981;}
	goto T978;
T978:;
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;}
	goto T973;
T973:;
	if(!(((V103))==(VV[96]))){
	goto T999;}
	{register object x= (V102),V156= VV[97];
	while(!endp(V156))
	if(eql(x,V156->c.c_car)){
	goto T1004;
	}else V156=V156->c.c_cdr;
	goto T1002;}
	goto T1004;
T1004:;
	if(((*(LnkLI148))((V104),(V105)))==Cnil){
	goto T1002;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1002;
T1002:;
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T999;
T999:;
	if((get((V103),VV[36],Cnil))==Cnil){
	goto T1011;}
	base[3]= Cnil;
	base[4]= (V106);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1011;
T1011:;
	{object V157= (V102);
	if((V157!= VV[32]))goto T1015;
	{object V158= (V103);
	if((V158!= VV[32]))goto T1016;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1016;
T1016:;
	if((V158!= VV[13])
	&& (V158!= VV[105]))goto T1019;
	if(((*(LnkLI148))(VV[98],(V105)))==Cnil){
	goto T1021;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1021;
T1021:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1019;
T1019:;
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;}
	goto T1015;
T1015:;
	if((V157!= VV[33]))goto T1029;
	{object V159= (V103);
	if((V159!= VV[105]))goto T1030;
	if(((*(LnkLI148))(VV[99],(V105)))==Cnil){
	goto T1032;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1032;
T1032:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1030;
T1030:;
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;}
	goto T1029;
T1029:;
	if((V157!= VV[126]))goto T1040;
	{register object x= (V103),V160= VV[100];
	while(!endp(V160))
	if(eql(x,V160->c.c_car)){
	goto T1043;
	}else V160=V160->c.c_cdr;
	goto T1042;}
	goto T1043;
T1043:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1042;
T1042:;
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1040;
T1040:;
	if((V157!= VV[25]))goto T1048;
	{register object x= (V103),V161= VV[101];
	while(!endp(V161))
	if(eql(x,V161->c.c_car)){
	goto T1051;
	}else V161=V161->c.c_cdr;
	goto T1050;}
	goto T1051;
T1051:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1050;
T1050:;
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1048;
T1048:;
	if((V157!= VV[149]))goto T1056;
	{register object x= (V103),V162= VV[102];
	while(!endp(V162))
	if(eql(x,V162->c.c_car)){
	goto T1059;
	}else V162=V162->c.c_cdr;
	goto T1058;}
	goto T1059;
T1059:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1058;
T1058:;
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1056;
T1056:;
	if((V157!= VV[24]))goto T1064;
	if(!(((V103))==(VV[103]))){
	goto T1066;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1066;
T1066:;
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1064;
T1064:;
	if((V157!= VV[103]))goto T1072;
	if(!(((V103))==(VV[24]))){
	goto T1074;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1074;
T1074:;
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1072;
T1072:;
	if((V157!= VV[13]))goto T1080;
	{register object x= (V103),V163= VV[104];
	while(!endp(V163))
	if(eql(x,V163->c.c_car)){
	goto T1083;
	}else V163=V163->c.c_cdr;
	goto T1082;}
	goto T1083;
T1083:;
	base[3]= (*(LnkLI148))((V104),(V105));
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1082;
T1082:;
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1080;
T1080:;
	if((V157!= VV[105]))goto T1088;
	if(!(((V103))==(VV[105]))){
	goto T1090;}
	base[3]= (*(LnkLI148))((V104),(V105));
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1090;
T1090:;
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1088;
T1088:;
	if((V157!= VV[106]))goto T1096;
	if(!(((V103))==(VV[106]))){
	goto T1098;}
	base[3]= (*(LnkLI148))((V104),(V105));
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1098;
T1098:;
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1096;
T1096:;
	if((V157!= VV[34]))goto T1104;
	{register object x= (V103),V164= VV[107];
	while(!endp(V164))
	if(eql(x,V164->c.c_car)){
	goto T1107;
	}else V164=V164->c.c_cdr;
	goto T1106;}
	goto T1107;
T1107:;
	base[3]= (*(LnkLI148))((V104),(V105));
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1106;
T1106:;
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1104;
T1104:;
	if((V157!= VV[130])
	&& (V157!= VV[131])
	&& (V157!= VV[35]))goto T1112;
	{register object x= (V103),V165= VV[108];
	while(!endp(V165))
	if(eql(x,V165->c.c_car)){
	goto T1115;
	}else V165=V165->c.c_cdr;
	goto T1114;}
	goto T1115;
T1115:;
	base[3]= (*(LnkLI148))((V104),(V105));
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1114;
T1114:;
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1112;
T1112:;
	if((V157!= VV[109]))goto T1120;
	if(!(((V103))==(VV[109]))){
	goto T1122;}{object V166;
	V166= car((V104));
	if(V166==Cnil)goto T1125;
	base[3]= V166;
	goto T1124;
	goto T1125;
T1125:;}
	base[3]= Ct;
	goto T1124;
T1124:;{object V167;
	V167= car((V105));
	if(V167==Cnil)goto T1128;
	base[4]= V167;
	goto T1127;
	goto T1128;
T1128:;}
	base[4]= Ct;
	goto T1127;
T1127:;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk146)();
	return;
	goto T1122;
T1122:;
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1120;
T1120:;
	if((V157!= VV[27]))goto T1132;
	if(((V103))==(VV[27])){
	goto T1133;}
	if(!(((V103))==(VV[22]))){
	goto T1134;}
	goto T1133;
T1133:;
	if(endp_prop((V104))){
	goto T1139;}
	if(!((car((V104)))==(VV[17]))){
	goto T1140;}
	goto T1139;
T1139:;
	if(endp_prop((V105))){
	goto T1138;}
	if((car((V105)))==(VV[17])){
	goto T1138;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1140;
T1140:;
	if(endp_prop((V105))){
	goto T1138;}
	if((car((V105)))==(VV[17])){
	goto T1138;}
	if(equal(car((V104)),car((V105)))){
	goto T1138;}
	if(!((car((V104)))==(VV[25]))){
	goto T1154;}
	if((car((V105)))==(VV[24])){
	goto T1138;}
	goto T1154;
T1154:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1138;
T1138:;
	if(endp_prop(cdr((V104)))){
	goto T1163;}
	if(!((cadr((V104)))==(VV[17]))){
	goto T1162;}
	goto T1163;
T1163:;
	if(endp_prop(cdr((V105)))){
	goto T1167;}
	if(!((cadr((V105)))==(VV[17]))){
	goto T1168;}
	goto T1167;
T1167:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1168;
T1168:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1162;
T1162:;
	if(endp_prop(cdr((V105)))){
	goto T1177;}
	if(!((cadr((V105)))==(VV[17]))){
	goto T1176;}
	goto T1177;
T1177:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1176;
T1176:;
	base[3]= (*(LnkLI134))(cadr((V104)),cadr((V105)));
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1134;
T1134:;
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1132;
T1132:;
	if((V157!= VV[22]))goto T1187;
	if(!(((V103))==(VV[22]))){
	goto T1189;}
	if(endp_prop((V104))){
	goto T1192;}
	if(!((car((V104)))==(VV[17]))){
	goto T1193;}
	goto T1192;
T1192:;
	if(endp_prop((V105))){
	goto T1191;}
	if((car((V105)))==(VV[17])){
	goto T1191;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1193;
T1193:;
	if(endp_prop((V105))){
	goto T1191;}
	if((car((V105)))==(VV[17])){
	goto T1191;}
	if(equal(car((V104)),car((V105)))){
	goto T1191;}
	if(!((car((V104)))==(VV[25]))){
	goto T1207;}
	if((car((V105)))==(VV[24])){
	goto T1191;}
	goto T1207;
T1207:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1191;
T1191:;
	if(endp_prop(cdr((V104)))){
	goto T1216;}
	if(!((cadr((V104)))==(VV[17]))){
	goto T1215;}
	goto T1216;
T1216:;
	if(endp_prop(cdr((V105)))){
	goto T1220;}
	if(!((cadr((V105)))==(VV[17]))){
	goto T1221;}
	goto T1220;
T1220:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1221;
T1221:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1215;
T1215:;
	if(endp_prop(cdr((V105)))){
	goto T1230;}
	if(!((cadr((V105)))==(VV[17]))){
	goto T1229;}
	goto T1230;
T1230:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1229;
T1229:;
	base[3]= (*(LnkLI134))(cadr((V104)),cadr((V105)));
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1189;
T1189:;
	base[3]= Cnil;
	base[4]= (V107);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1187;
T1187:;
	if(((V106))==Cnil){
	goto T1241;}
	base[3]= (((V102))==((V103))?Ct:Cnil);
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1241;
T1241:;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	local entry for function SUB-INTERVAL-P	*/

static object LI28(V170,V171)

register object V170;register object V171;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{register object V172;
	register object V173;
	register object V174;
	register object V175;
	V172= Cnil;
	V173= Cnil;
	V174= Cnil;
	V175= Cnil;
	if(!(endp_prop((V170)))){
	goto T1249;}
	V172= VV[17];
	V173= VV[17];
	goto T1247;
	goto T1249;
T1249:;
	if(!(endp_prop(cdr((V170))))){
	goto T1255;}
	V172= car((V170));
	V173= VV[17];
	goto T1247;
	goto T1255;
T1255:;
	V172= car((V170));
	V173= cadr((V170));
	goto T1247;
T1247:;
	if(!(endp_prop((V171)))){
	goto T1265;}
	V174= VV[17];
	V175= VV[17];
	goto T1263;
	goto T1265;
T1265:;
	if(!(endp_prop(cdr((V171))))){
	goto T1271;}
	V174= car((V171));
	V175= VV[17];
	goto T1263;
	goto T1271;
T1271:;
	V174= car((V171));
	V175= cadr((V171));
	goto T1263;
T1263:;
	if(!(((V172))==(VV[17]))){
	goto T1281;}
	if(((V174))==(VV[17])){
	goto T1279;}
	{object V176 = Cnil;
	VMR28(V176)}
	goto T1281;
T1281:;
	{object V177;
	V177= (((V174))==(VV[17])?Ct:Cnil);
	if(((V177))==Cnil){
	goto T1287;}
	goto T1279;
	goto T1287;
T1287:;
	if(!(type_of((V172))==t_cons)){
	goto T1290;}
	if(!(type_of((V174))==t_cons)){
	goto T1293;}
	if(!(number_compare(car((V172)),car((V174)))<0)){
	goto T1279;}
	{object V178 = Cnil;
	VMR28(V178)}
	goto T1293;
T1293:;
	if(!(number_compare(car((V172)),(V174))<0)){
	goto T1279;}
	{object V179 = Cnil;
	VMR28(V179)}
	goto T1290;
T1290:;
	{object V180;
	if(!(type_of((V174))==t_cons)){
	goto T1301;}
	if(!(number_compare((V172),car((V174)))<=0)){
	goto T1304;}
	{object V181 = Cnil;
	VMR28(V181)}
	goto T1304;
T1304:;
	V180= Cnil;
	goto T1299;
	goto T1301;
T1301:;
	if(!(number_compare((V172),(V174))<0)){
	goto T1307;}
	{object V182 = Cnil;
	VMR28(V182)}
	goto T1307;
T1307:;
	V180= Cnil;
	goto T1299;
T1299:;
	if(((V180))==Cnil){
	goto T1279;}}}
	goto T1279;
T1279:;
	if(!(((V173))==(VV[17]))){
	goto T1313;}
	if(((V175))==(VV[17])){
	goto T1311;}
	{object V183 = Cnil;
	VMR28(V183)}
	goto T1313;
T1313:;
	{object V184;
	V184= (((V175))==(VV[17])?Ct:Cnil);
	if(((V184))==Cnil){
	goto T1319;}
	goto T1311;
	goto T1319;
T1319:;
	if(!(type_of((V173))==t_cons)){
	goto T1322;}
	if(!(type_of((V175))==t_cons)){
	goto T1325;}
	if(!(number_compare(car((V173)),car((V175)))>0)){
	goto T1311;}
	{object V185 = Cnil;
	VMR28(V185)}
	goto T1325;
T1325:;
	if(!(number_compare(car((V173)),(V175))>0)){
	goto T1311;}
	{object V186 = Cnil;
	VMR28(V186)}
	goto T1322;
T1322:;
	{object V187;
	if(!(type_of((V175))==t_cons)){
	goto T1333;}
	if(!(number_compare((V173),car((V175)))>=0)){
	goto T1336;}
	{object V188 = Cnil;
	VMR28(V188)}
	goto T1336;
T1336:;
	V187= Cnil;
	goto T1331;
	goto T1333;
T1333:;
	if(!(number_compare((V173),(V175))>0)){
	goto T1339;}
	{object V189 = Cnil;
	VMR28(V189)}
	goto T1339;
T1339:;
	V187= Cnil;
	goto T1331;
T1331:;
	if(((V187))==Cnil){
	goto T1311;}}}
	goto T1311;
T1311:;
	{object V190 = Ct;
	VMR28(V190)}}
	return Cnil;
}
/*	local entry for function IN-INTERVAL-P	*/

static object LI29(V193,V194)

register object V193;register object V194;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{register object V195;
	register object V196;
	V195= Cnil;
	V196= Cnil;
	if(!(endp_prop((V194)))){
	goto T1345;}
	V195= VV[17];
	V196= VV[17];
	goto T1343;
	goto T1345;
T1345:;
	if(!(endp_prop(cdr((V194))))){
	goto T1351;}
	V195= car((V194));
	V196= VV[17];
	goto T1343;
	goto T1351;
T1351:;
	V195= car((V194));
	V196= cadr((V194));
	goto T1343;
T1343:;
	{object V197;
	V197= (((V195))==(VV[17])?Ct:Cnil);
	if(((V197))==Cnil){
	goto T1362;}
	goto T1359;
	goto T1362;
T1362:;
	if(!(type_of((V195))==t_cons)){
	goto T1365;}
	if(!(number_compare((V193),car((V195)))<=0)){
	goto T1359;}
	{object V198 = Cnil;
	VMR29(V198)}
	goto T1365;
T1365:;
	{object V199;
	if(!(number_compare((V193),(V195))<0)){
	goto T1371;}
	{object V200 = Cnil;
	VMR29(V200)}
	goto T1371;
T1371:;
	V199= Cnil;
	if(((V199))==Cnil){
	goto T1359;}}}
	goto T1359;
T1359:;
	{object V201;
	V201= (((V196))==(VV[17])?Ct:Cnil);
	if(((V201))==Cnil){
	goto T1378;}
	goto T1375;
	goto T1378;
T1378:;
	if(!(type_of((V196))==t_cons)){
	goto T1381;}
	if(!(number_compare((V193),car((V196)))>=0)){
	goto T1375;}
	{object V202 = Cnil;
	VMR29(V202)}
	goto T1381;
T1381:;
	{object V203;
	if(!(number_compare((V193),(V196))>0)){
	goto T1387;}
	{object V204 = Cnil;
	VMR29(V204)}
	goto T1387;
T1387:;
	V203= Cnil;
	if(((V203))==Cnil){
	goto T1375;}}}
	goto T1375;
T1375:;
	{object V205 = Ct;
	VMR29(V205)}}
	return Cnil;
}
/*	local entry for function MATCH-DIMENSIONS	*/

static object LI30(V208,V209)

object V208;register object V209;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	if(((V208))!=Cnil){
	goto T1392;}
	{object V210 = (((V209))==Cnil?Ct:Cnil);
	VMR30(V210)}
	goto T1392;
T1392:;
	if(!((car((V209)))==(VV[17]))){
	goto T1396;}
	goto T1394;
	goto T1396;
T1396:;
	if(eql(car((V208)),car((V209)))){
	goto T1394;}
	{object V211 = Cnil;
	VMR30(V211)}
	goto T1394;
T1394:;
	V208= cdr((V208));
	V209= cdr((V209));
	goto TTL;
	return Cnil;
}
/*	local entry for function COERCE	*/

static object LI31(V214,V215)

register object V214;object V215;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	base[0]= (V214);
	base[1]= (V215);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk125)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1401;}
	{object V216 = (V214);
	VMR31(V216)}
	goto T1401;
T1401:;
	base[0]= (V215);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1406;}
	base[0]= VV[110];
	base[1]= VV[111];
	base[2]= (V214);
	base[3]= (V215);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk150)();
	vs_top=sup;
	goto T1406;
T1406:;
	V215= (*(LnkLI145))((V215));
	{object V217= car((V215));
	if((V217!= VV[47]))goto T1416;
	{register object V218;
	register object V219;
	V220 = make_fixnum((long)length((V214)));
	V219= one_minus(V220);
	V218= Cnil;
	goto T1419;
T1419:;
	if(!(number_compare((V219),small_fixnum(0))<0)){
	goto T1420;}
	{object V221 = (V218);
	VMR31(V221)}
	goto T1420;
T1420:;
	V222= elt((V214),fixint((V219)));
	V218= make_cons(/* INLINE-ARGS */V222,(V218));
	V219= one_minus((V219));
	goto T1419;}
	goto T1416;
T1416:;
	if((V217!= VV[22])
	&& (V217!= VV[27]))goto T1428;
	if(endp_prop(cdr((V215)))){
	goto T1429;}
	if(endp_prop(cddr((V215)))){
	goto T1429;}
	if((caddr((V215)))==(VV[17])){
	goto T1429;}
	if(endp_prop(cdr(caddr((V215))))){
	goto T1429;}
	base[0]= VV[112];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1429;
T1429:;
	{register object V223;
	register object V224;
	register object V225;
	V226 = make_fixnum((long)length((V214)));
	V223= (VFUN_NARGS=2,(*(LnkLI151))((V215),V226));
	V225= make_fixnum((long)length((V214)));
	V224= small_fixnum(0);
	goto T1442;
T1442:;
	if(!(number_compare((V224),(V225))>=0)){
	goto T1443;}
	{object V227 = (V223);
	VMR31(V227)}
	goto T1443;
T1443:;
	V228= elt((V214),fixint((V224)));
	(void)(elt_set((V223),fixint((V224)),/* INLINE-ARGS */V228));
	V224= one_plus((V224));
	goto T1442;}
	goto T1428;
T1428:;
	if((V217!= VV[103]))goto T1451;
	base[0]= (V214);
	vs_top=(vs_base=base+0)+1;
	Lcharacter();
	vs_top=sup;
	{object V229 = vs_base[0];
	VMR31(V229)}
	goto T1451;
T1451:;
	if((V217!= VV[106]))goto T1453;
	base[0]= (V214);
	vs_top=(vs_base=base+0)+1;
	Lfloat();
	vs_top=sup;
	{object V230 = vs_base[0];
	VMR31(V230)}
	goto T1453;
T1453:;
	if((V217!= VV[34]))goto T1455;
	base[0]= (V214);
	base[1]= VV[113];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V231 = vs_base[0];
	VMR31(V231)}
	goto T1455;
T1455:;
	if((V217!= VV[130])
	&& (V217!= VV[131])
	&& (V217!= VV[35]))goto T1458;
	base[0]= (V214);
	base[1]= VV[114];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V232 = vs_base[0];
	VMR31(V232)}
	goto T1458;
T1458:;
	if((V217!= VV[109]))goto T1461;
	if((cdr((V215)))==Cnil){
	goto T1462;}
	if((cadr((V215)))==Cnil){
	goto T1462;}
	if(!((cadr((V215)))==(VV[17]))){
	goto T1463;}
	goto T1462;
T1462:;
	base[1]= (V214);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= (V214);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V233 = vs_base[0];
	VMR31(V233)}
	goto T1463;
T1463:;
	base[1]= (V214);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	V234= vs_base[0];
	base[0]= (*(LnkLI152))(V234,cadr((V215)));
	base[2]= (V214);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V235= vs_base[0];
	base[1]= (*(LnkLI152))(V235,cadr((V215)));
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V236 = vs_base[0];
	VMR31(V236)}
	goto T1461;
T1461:;
	base[0]= VV[115];
	base[1]= (V214);
	base[2]= (V215);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V237 = vs_base[0];
	VMR31(V237)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WARN-VERSION	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_reserve(VM32);
	{object V238;
	object V239;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V238=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1482;}
	V239=(base[1]);
	vs_top=sup;
	goto T1483;
	goto T1482;
T1482:;
	V239= Cnil;
	goto T1483;
T1483:;
	if(symbol_value(VV[116])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	if(!(((eql((V238),symbol_value(VV[116]))?Ct:Cnil))==Cnil)){
	goto T1487;}
	goto T1485;
	goto T1487;
T1487:;
	if(((eql((V239),symbol_value(VV[117]))?Ct:Cnil))==Cnil){
	goto T1485;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1485;
T1485:;
	if(symbol_value(VV[118])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	base[2]= Ct;
	base[3]= VV[119];
	base[4]= (V239);
	base[5]= (V238);
	vs_top=(vs_base=base+2)+4;
	Lformat();
	return;
	}
}
static object  LnkTLI152(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[152],(void **)(void *)&LnkLI152,2,first,ap);va_end(ap);return V1;} /* COERCE */
static object  LnkTLI151(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[151],(void **)(void *)&LnkLI151,first,ap);va_end(ap);return V1;} /* MAKE-SEQUENCE */
static void LnkT150(){ call_or_link(VV[150],(void **)(void *)&Lnk150);} /* SPECIFIC-ERROR */
static object  LnkTLI148(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[148],(void **)(void *)&LnkLI148,2,first,ap);va_end(ap);return V1;} /* SUB-INTERVAL-P */
static object  LnkTLI147(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[147],(void **)(void *)&LnkLI147,1,first,ap);va_end(ap);return V1;} /* KNOWN-TYPE-P */
static void LnkT146(){ call_or_link(VV[146],(void **)(void *)&Lnk146);} /* SUBTYPEP */
static object  LnkTLI145(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[145],(void **)(void *)&LnkLI145,1,first,ap);va_end(ap);return V1;} /* NORMALIZE-TYPE */
static void LnkT144(){ call_or_link(VV[144],(void **)(void *)&Lnk144);} /* FIND-CLASS */
static void LnkT143(){ call_or_link(VV[143],(void **)(void *)&Lnk143);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI142(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[142],(void **)(void *)&LnkLI142,1,first,ap);va_end(ap);return V1;} /* SIMPLE-ARRAY-P */
static object  LnkTLI141(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[141],(void **)(void *)&LnkLI141,1,first,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI135(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[135],(void **)(void *)&LnkLI135,1,first,ap);va_end(ap);return V1;} /* ARRAY-DIMENSIONS */
static object  LnkTLI134(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[134],(void **)(void *)&LnkLI134,2,first,ap);va_end(ap);return V1;} /* MATCH-DIMENSIONS */
static void LnkT129(){ call_or_link(VV[129],(void **)(void *)&Lnk129);} /* REALP */
static void LnkT128(){ call_or_link(VV[128],(void **)(void *)&Lnk128);} /* RATIONALP */
static object  LnkTLI127(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[127],(void **)(void *)&LnkLI127,2,first,ap);va_end(ap);return V1;} /* IN-INTERVAL-P */
static void LnkT125(){ call_or_link(VV[125],(void **)(void *)&Lnk125);} /* TYPEP */
static void LnkT124(){ call_or_link(VV[124],(void **)(void *)&Lnk124);} /* CLASS-PRECEDENCE-LIST */
static void LnkT123(){ call_or_link(VV[123],(void **)(void *)&Lnk123);} /* CLASS-OF */
static void LnkT122(){ call_or_link(VV[122],(void **)(void *)&Lnk122);} /* CLASSP */
static void LnkT121(){ call_or_link(VV[121],(void **)(void *)&Lnk121);} /* ARRAY-HAS-FILL-POINTER-P */
static object  LnkTLI120(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[120],(void **)(void *)&LnkLI120,1,first,ap);va_end(ap);return V1;} /* FIND-DOCUMENTATION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

