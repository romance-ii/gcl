
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
	check_arg(2);
	V44=(base[0]);
	V45=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V46;
	register object V47;
	object V48;
	V46= Cnil;
	V47= Cnil;
	V48= Cnil;
	base[2]= (V45);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T94;}
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk123)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	V50= vs_base[0];
	{register object x= (V45),V49= V50;
	while(!endp(V49))
	if(eql(x,V49->c.c_car)){
	goto T100;
	}else V49=V49->c.c_cdr;
	goto T99;}
	goto T100;
T100:;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T99;
T99:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T94;
T94:;
	if(!(type_of((V45))!=t_cons)){
	goto T106;}
	V46= (V45);
	V47= Cnil;
	goto T104;
	goto T106;
T106:;
	V46= car((V45));
	V47= cdr((V45));
	goto T104;
T104:;
	if(!(((V46))==(VV[28]))){
	goto T114;}
	V46= VV[29];
	goto T114;
T114:;
	{object V51;
	V51= get((V46),VV[30],Cnil);
	if(((V51))==Cnil){
	goto T118;}
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V51));
	return;}
	goto T118;
T118:;
	{object V52= (V46);
	if((V52!= VV[42]))goto T123;
	{register object x= (V44),V53= (V47);
	while(!endp(V53))
	if(eql(x,V53->c.c_car)){
	base[2]= V53;
	vs_top=(vs_base=base+2)+1;
	return;
	}else V53=V53->c.c_cdr;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T123;
T123:;
	if((V52!= VV[45]))goto T124;
	base[2]= (V44);
	base[3]= car((V47));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk125)();
	vs_top=sup;
	V54= vs_base[0];
	base[2]= ((V54)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T124;
T124:;
	if((V52!= VV[43]))goto T128;
	{register object V55;
	V55= (V47);
	goto T130;
T130:;
	if(((V55))!=Cnil){
	goto T131;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T131;
T131:;
	base[2]= (V44);
	base[3]= car((V55));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk125)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T135;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T135;
T135:;
	V55= cdr((V55));
	goto T130;}
	goto T128;
T128:;
	if((V52!= VV[44]))goto T143;
	{register object V56;
	V56= (V47);
	goto T145;
T145:;
	if(((V56))!=Cnil){
	goto T146;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T146;
T146:;
	base[2]= (V44);
	base[3]= car((V56));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk125)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T150;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T150;
T150:;
	V56= cdr((V56));
	goto T145;}
	goto T143;
T143:;
	if((V52!= VV[41]))goto T158;
	base[2]= car((V47));
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event(base[2]);
	return;
	goto T158;
T158:;
	if((V52!= Ct))goto T161;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T161;
T161:;
	if((V52!= Cnil))goto T162;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T162;
T162:;
	if((V52!= VV[58]))goto T163;
	if(!(((V44))==(Ct))){
	goto T164;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T164;
T164:;
	base[2]= (((V44))==(Cnil)?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T163;
T163:;
	if((V52!= VV[31]))goto T166;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V57= vs_base[0];
	base[2]= ((V57)==(VV[31])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T166;
T166:;
	if((V52!= VV[32]))goto T169;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V58= vs_base[0];
	base[2]= ((V58)==(VV[32])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T169;
T169:;
	if((V52!= VV[33]))goto T172;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V59= vs_base[0];
	base[2]= ((V59)==(VV[33])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T172;
T172:;
	if((V52!= VV[126]))goto T175;
	if(type_of((V44))==t_character){
	goto T176;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T176;
T176:;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Lstandard_char_p();
	return;
	goto T175;
T175:;
	if((V52!= VV[25])
	&& (V52!= VV[24]))goto T179;
	if(type_of((V44))==t_character){
	goto T180;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T180;
T180:;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Lstring_char_p();
	return;
	goto T179;
T179:;
	if((V52!= VV[13]))goto T183;
	if(type_of((V44))==t_fixnum||type_of((V44))==t_bignum){
	goto T184;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T184;
T184:;
	base[2]= (*(LnkLI127))((V44),(V47));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T183;
T183:;
	if((V52!= VV[105]))goto T186;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T187;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T187;
T187:;
	base[2]= (*(LnkLI127))((V44),(V47));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T186;
T186:;
	if((V52!= VV[96]))goto T190;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk129)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T191;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T191;
T191:;
	base[2]= (*(LnkLI127))((V44),(V47));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T190;
T190:;
	if((V52!= VV[106]))goto T194;
	if(type_of((V44))==t_shortfloat||type_of((V44))==t_longfloat){
	goto T195;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T195;
T195:;
	base[2]= (*(LnkLI127))((V44),(V47));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T194;
T194:;
	if((V52!= VV[34]))goto T197;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V60= vs_base[0];
	if((V60)==(VV[34])){
	goto T198;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T198;
T198:;
	base[2]= (*(LnkLI127))((V44),(V47));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T197;
T197:;
	if((V52!= VV[130])
	&& (V52!= VV[131])
	&& (V52!= VV[35]))goto T202;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V61= vs_base[0];
	if((V61)==(VV[35])){
	goto T203;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T203;
T203:;
	base[2]= (*(LnkLI127))((V44),(V47));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T202;
T202:;
	if((V52!= VV[109]))goto T207;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Lcomplexp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T208;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T208;
T208:;
	if(!(((V47))==Cnil)){
	goto T211;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T211;
T211:;
	base[3]= (V44);
	vs_top=(vs_base=base+3)+1;
	Lrealpart();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= car((V47));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk125)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T213;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T213;
T213:;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V44= vs_base[0];
	V45= car((V47));
	goto TTL;
	goto T207;
T207:;
	if((V52!= VV[49]))goto T222;
	if(!(type_of((V44))==t_cons||((V44))==Cnil)){
	goto T223;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T223;
T223:;
	base[2]= (type_of((V44))==t_vector||
type_of((V44))==t_string||
type_of((V44))==t_bitvector?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T222;
T222:;
	if((V52!= VV[132])
	&& (V52!= VV[133]))goto T225;
	if(type_of((V44))==t_string){
	goto T226;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T226;
T226:;
	if(!(endp_prop((V47)))){
	goto T228;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T228;
T228:;
	V62= (*(LnkLI135))((V44));
	base[2]= (*(LnkLI134))(/* INLINE-ARGS */V62,(V47));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T225;
T225:;
	if((V52!= VV[136]))goto T230;
	if((type_of((V44))==t_bitvector)){
	goto T231;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T231;
T231:;
	if(!(endp_prop((V47)))){
	goto T233;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T233;
T233:;
	V63= (*(LnkLI135))((V44));
	base[2]= (*(LnkLI134))(/* INLINE-ARGS */V63,(V47));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T230;
T230:;
	if((V52!= VV[137])
	&& (V52!= VV[138]))goto T235;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Lsimple_string_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T236;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T236;
T236:;
	if(!(endp_prop((V47)))){
	goto T239;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T239;
T239:;
	V64= (*(LnkLI135))((V44));
	base[2]= (*(LnkLI134))(/* INLINE-ARGS */V64,(V47));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T235;
T235:;
	if((V52!= VV[139]))goto T241;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Lsimple_bit_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T242;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T242;
T242:;
	if(!(endp_prop((V47)))){
	goto T245;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T245;
T245:;
	V65= (*(LnkLI135))((V44));
	base[2]= (*(LnkLI134))(/* INLINE-ARGS */V65,(V47));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T241;
T241:;
	if((V52!= VV[140]))goto T247;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Lsimple_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T248;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T248;
T248:;
	if(!(endp_prop((V47)))){
	goto T253;}
	goto T251;
	goto T253;
T253:;
	if(!((car((V47)))==(VV[17]))){
	goto T255;}
	goto T251;
	goto T255;
T255:;{object V66;
	if((car((V47)))==(Ct)){
	goto T259;}
	V66= Cnil;
	goto T258;
	goto T259;
T259:;
	if(((type_of((V44))==t_string?Ct:Cnil))==Cnil){
	goto T261;}
	V66= Cnil;
	goto T258;
	goto T261;
T261:;
	V66= ((((type_of((V44))==t_bitvector)?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T258;
T258:;
	if(V66==Cnil)goto T257;
	if((V66)!=Cnil){
	goto T251;}
	goto T252;
	goto T257;
T257:;}
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V67= vs_base[0];
	V68= (*(LnkLI141))(car((V47)));
	if(equal(V67,/* INLINE-ARGS */V68)){
	goto T251;}
	goto T252;
T252:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T251;
T251:;
	if(!(endp_prop(cdr((V47))))){
	goto T265;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T265;
T265:;
	V69= (*(LnkLI135))((V44));
	base[2]= (*(LnkLI134))(/* INLINE-ARGS */V69,cdr((V47)));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T247;
T247:;
	if((V52!= VV[23]))goto T267;
	if(type_of((V44))==t_vector||
type_of((V44))==t_string||
type_of((V44))==t_bitvector){
	goto T268;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T268;
T268:;
	if(!(endp_prop((V47)))){
	goto T272;}
	goto T270;
	goto T272;
T272:;
	if(!((car((V47)))==(VV[17]))){
	goto T274;}
	goto T270;
	goto T274;
T274:;{object V70;
	if((car((V47)))==(Ct)){
	goto T278;}
	V70= Cnil;
	goto T277;
	goto T278;
T278:;
	if(((type_of((V44))==t_string?Ct:Cnil))==Cnil){
	goto T280;}
	V70= Cnil;
	goto T277;
	goto T280;
T280:;
	V70= ((((type_of((V44))==t_bitvector)?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T277;
T277:;
	if(V70==Cnil)goto T276;
	if((V70)!=Cnil){
	goto T270;}
	goto T271;
	goto T276;
T276:;}
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V71= vs_base[0];
	V72= (*(LnkLI141))(car((V47)));
	if(equal(V71,/* INLINE-ARGS */V72)){
	goto T270;}
	goto T271;
T271:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T270;
T270:;
	if(!(endp_prop(cdr((V47))))){
	goto T284;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T284;
T284:;
	V73= (*(LnkLI135))((V44));
	base[2]= (*(LnkLI134))(/* INLINE-ARGS */V73,cdr((V47)));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T267;
T267:;
	if((V52!= VV[27]))goto T286;
	if(((*(LnkLI142))((V44)))!=Cnil){
	goto T287;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T287;
T287:;
	if(!(endp_prop((V47)))){
	goto T291;}
	goto T289;
	goto T291;
T291:;
	if(!((car((V47)))==(VV[17]))){
	goto T293;}
	goto T289;
	goto T293;
T293:;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V74= vs_base[0];
	V75= (*(LnkLI141))(car((V47)));
	if(equal(V74,/* INLINE-ARGS */V75)){
	goto T289;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T289;
T289:;
	if(!(endp_prop(cdr((V47))))){
	goto T297;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T297;
T297:;
	if(!((cadr((V47)))==(VV[17]))){
	goto T299;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T299;
T299:;
	{object V76= cadr((V47));
	if(!(type_of(V76)==t_cons||(V76)==Cnil)){
	goto T302;}}
	V77= (*(LnkLI135))((V44));
	base[2]= (*(LnkLI134))(/* INLINE-ARGS */V77,cadr((V47)));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T302;
T302:;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Larray_rank();
	vs_top=sup;
	V78= vs_base[0];
	base[2]= (eql(V78,cadr((V47)))?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T286;
T286:;
	if((V52!= VV[22]))goto T306;
	if(type_of((V44))==t_array||
type_of((V44))==t_vector||
type_of((V44))==t_string||
type_of((V44))==t_bitvector){
	goto T307;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T307;
T307:;
	if(!(endp_prop((V47)))){
	goto T311;}
	goto T309;
	goto T311;
T311:;
	if(!((car((V47)))==(VV[17]))){
	goto T313;}
	goto T309;
	goto T313;
T313:;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V79= vs_base[0];
	V80= (*(LnkLI141))(car((V47)));
	if(equal(V79,/* INLINE-ARGS */V80)){
	goto T309;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T309;
T309:;
	if(!(endp_prop(cdr((V47))))){
	goto T317;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T317;
T317:;
	if(!((cadr((V47)))==(VV[17]))){
	goto T319;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T319;
T319:;
	{object V81= cadr((V47));
	if(!(type_of(V81)==t_cons||(V81)==Cnil)){
	goto T322;}}
	V82= (*(LnkLI135))((V44));
	base[2]= (*(LnkLI134))(/* INLINE-ARGS */V82,cadr((V47)));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T322;
T322:;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	Larray_rank();
	vs_top=sup;
	V83= vs_base[0];
	base[2]= (eql(V83,cadr((V47)))?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T306;
T306:;
	V48= get((V46),VV[36],Cnil);
	if(((V48))==Cnil){
	goto T327;}
	base[2]= (V44);
	base[3]= (V48);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk143)();
	return;
	goto T327;
T327:;
	V48= get((V46),VV[37],Cnil);
	if(((V48))==Cnil){
	goto T333;}
	base[2]= (V48);
	{object V84;
	V84= (V47);
	 vs_top=base+3;
	 while(!endp(V84))
	 {vs_push(car(V84));V84=cdr(V84);}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	vs_top=sup;
	V45= vs_base[0];
	goto TTL;
	goto T333;
T333:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	local entry for function NORMALIZE-TYPE	*/

static object LI25(V86)

register object V86;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{register object V87;
	register object V88;
	V87= Cnil;
	V88= Cnil;
	goto T344;
T344:;
	if(!(type_of((V86))!=t_cons)){
	goto T348;}
	V87= (V86);
	V88= Cnil;
	goto T346;
	goto T348;
T348:;
	V87= car((V86));
	V88= cdr((V86));
	goto T346;
T346:;
	if((get((V87),VV[37],Cnil))==Cnil){
	goto T357;}
	base[0]= get((V87),VV[37],Cnil);
	{object V89;
	V89= (V88);
	 vs_top=base+1;
	 while(!endp(V89))
	 {vs_push(car(V89));V89=cdr(V89);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V86= vs_base[0];
	goto T345;
	goto T357;
T357:;
	if(!(type_of((V86))!=t_cons)){
	goto T363;}
	{object V90 = make_cons((V86),Cnil);
	VMR25(V90)}
	goto T363;
T363:;
	{object V91 = (V86);
	VMR25(V91)}
	goto T345;
T345:;
	goto T344;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function KNOWN-TYPE-P	*/

static object LI26(V93)

register object V93;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	if(!(type_of((V93))==t_cons)){
	goto T366;}
	V93= car((V93));
	goto T366;
T366:;
	V94= coerce_to_string((V93));
	if(equal(/* INLINE-ARGS */V94,VV[38])){
	goto T370;}
	{register object x= (V93),V95= VV[39];
	while(!endp(V95))
	if(eql(x,V95->c.c_car)){
	goto T370;
	}else V95=V95->c.c_cdr;}
	if((get((V93),VV[36],Cnil))==Cnil){
	goto T371;}
	goto T370;
T370:;
	{object V96 = Ct;
	VMR26(V96)}
	goto T371;
T371:;
	{object V97 = Cnil;
	VMR26(V97)}
	return Cnil;
}
/*	function definition for SUBTYPEP	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	{object V98;
	object V99;
	check_arg(2);
	V98=(base[0]);
	V99=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V100;
	object V101;
	object V102;
	object V103;
	object V104;
	object V105;
	object V106;
	V100= Cnil;
	V101= Cnil;
	V102= Cnil;
	V103= Cnil;
	V104= Cnil;
	V105= Cnil;
	V106= Cnil;
	{object V107;
	object V108;
	base[2]= (V98);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	V107= vs_base[0];
	base[2]= (V99);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	V108= vs_base[0];
	if(((V107))==Cnil){
	goto T389;}
	if(((V108))==Cnil){
	goto T389;}
	base[2]= (V98);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	V110= vs_base[0];
	{register object x= (V99),V109= V110;
	while(!endp(V109))
	if(eql(x,V109->c.c_car)){
	goto T396;
	}else V109=V109->c.c_cdr;
	goto T395;}
	goto T396;
T396:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T395;
T395:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T389;
T389:;
	if(((V107))==Cnil){
	goto T403;}
	if(((V99))==(VV[28])){
	goto T404;}
	if(!(((V99))==(VV[40]))){
	goto T403;}
	goto T404;
T404:;
	base[2]= (V99);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk144)();
	vs_top=sup;
	V112= vs_base[0];
	base[2]= (V98);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	V113= vs_base[0];
	{register object x= V112,V111= V113;
	while(!endp(V111))
	if(eql(x,V111->c.c_car)){
	goto T412;
	}else V111=V111->c.c_cdr;
	goto T411;}
	goto T412;
T412:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T411;
T411:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T403;
T403:;
	if(((V107))!=Cnil){
	goto T421;}
	if(((V108))==Cnil){
	goto T384;}
	goto T421;
T421:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;}
	goto T384;
T384:;
	V100= (*(LnkLI145))((V98));
	if(!((car((V100)))==(VV[41]))){
	goto T432;}
	V98= make_cons((V98),Cnil);
	goto T430;
	goto T432;
T432:;
	V98= (V100);
	goto T430;
T430:;
	V101= (*(LnkLI145))((V99));
	if(!((car((V101)))==(VV[41]))){
	goto T439;}
	V99= make_cons((V99),Cnil);
	goto T437;
	goto T439;
T439:;
	V99= (V101);
	goto T437;
T437:;
	if(!(equal((V98),(V99)))){
	goto T441;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T441;
T441:;
	V100= car((V98));
	V101= car((V99));
	V102= cdr((V98));
	V103= cdr((V99));
	if(!(((V100))==(VV[42]))){
	goto T456;}
	{register object V114;
	object V115;
	V114= (V102);
	V115= car((V114));
	goto T462;
T462:;
	if(!(endp_prop((V114)))){
	goto T463;}
	goto T458;
	goto T463;
T463:;
	base[3]= (V115);
	base[4]= (V99);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk125)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T467;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T467;
T467:;
	V114= cdr((V114));
	V115= car((V114));
	goto T462;}
	goto T458;
T458:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T456;
T456:;
	if(!(((V100))==(VV[43]))){
	goto T482;}
	{register object V116;
	object V117;
	V116= (V102);
	V117= car((V116));
	goto T488;
T488:;
	if(!(endp_prop((V116)))){
	goto T489;}
	goto T484;
	goto T489;
T489:;
	{object V118;
	object V119;
	base[3]= (V117);
	base[4]= (V99);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk146)();
	if(vs_base>=vs_top){vs_top=sup;goto T497;}
	V118= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T498;}
	V119= vs_base[0];
	vs_top=sup;
	goto T499;
	goto T497;
T497:;
	V118= Cnil;
	goto T498;
T498:;
	V119= Cnil;
	goto T499;
T499:;
	if(((V118))!=Cnil){
	goto T493;}
	base[3]= (V118);
	base[4]= (V119);
	vs_top=(vs_base=base+3)+2;
	return;}
	goto T493;
T493:;
	V116= cdr((V116));
	V117= car((V116));
	goto T488;}
	goto T484;
T484:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T482;
T482:;
	if(!(((V100))==(VV[44]))){
	goto T512;}
	{register object V120;
	object V121;
	V120= (V102);
	V121= car((V120));
	goto T518;
T518:;
	if(!(endp_prop((V120)))){
	goto T519;}
	goto T514;
	goto T519;
T519:;
	{object V122;
	base[3]= (V121);
	base[4]= (V99);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk146)();
	vs_top=sup;
	V122= vs_base[0];
	if(((V122))==Cnil){
	goto T523;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}
	goto T523;
T523:;
	V120= cdr((V120));
	V121= car((V120));
	goto T518;}
	goto T514;
T514:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T512;
T512:;
	if(!(((V100))==(VV[45]))){
	goto T454;}
	if(!(((V101))==(VV[45]))){
	goto T541;}
	V98= car((V103));
	V99= car((V102));
	goto TTL;
	goto T541;
T541:;
	V98= Ct;
	V99= list(3,VV[43],(V99),car((V102)));
	goto TTL;
	goto T454;
T454:;
	if(!(((V101))==(VV[42]))){
	goto T551;}
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T551;
T551:;
	if(!(((V101))==(VV[43]))){
	goto T556;}
	{register object V123;
	object V124;
	V123= (V103);
	V124= car((V123));
	goto T562;
T562:;
	if(!(endp_prop((V123)))){
	goto T563;}
	goto T558;
	goto T563;
T563:;
	{object V125;
	base[3]= (V98);
	base[4]= (V124);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk146)();
	vs_top=sup;
	V125= vs_base[0];
	if(((V125))==Cnil){
	goto T567;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}
	goto T567;
T567:;
	V123= cdr((V123));
	V124= car((V123));
	goto T562;}
	goto T558;
T558:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T556;
T556:;
	if(!(((V101))==(VV[44]))){
	goto T583;}
	{register object V126;
	object V127;
	V126= (V103);
	V127= car((V126));
	goto T589;
T589:;
	if(!(endp_prop((V126)))){
	goto T590;}
	goto T585;
	goto T590;
T590:;
	{object V128;
	object V129;
	base[3]= (V98);
	base[4]= (V127);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk146)();
	if(vs_base>=vs_top){vs_top=sup;goto T598;}
	V128= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T599;}
	V129= vs_base[0];
	vs_top=sup;
	goto T600;
	goto T598;
T598:;
	V128= Cnil;
	goto T599;
T599:;
	V129= Cnil;
	goto T600;
T600:;
	if(((V128))!=Cnil){
	goto T594;}
	base[3]= (V128);
	base[4]= (V129);
	vs_top=(vs_base=base+3)+2;
	return;}
	goto T594;
T594:;
	V126= cdr((V126));
	V127= car((V126));
	goto T589;}
	goto T585;
T585:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T583;
T583:;
	if(!(((V101))==(VV[45]))){
	goto T549;}
	V98= list(3,VV[44],(V98),car((V103)));
	V99= Cnil;
	goto TTL;
	goto T549;
T549:;
	V104= (*(LnkLI147))((V98));
	V105= (*(LnkLI147))((V99));
	if(((V100))==(Cnil)){
	goto T621;}
	if(((V101))==(Ct)){
	goto T621;}
	if(!(((V101))==(VV[46]))){
	goto T622;}
	goto T621;
T621:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T622;
T622:;
	if(!(((V101))==(Cnil))){
	goto T631;}
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T631;
T631:;
	if(!(((V100))==(Ct))){
	goto T636;}
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T636;
T636:;
	if(!(((V100))==(VV[46]))){
	goto T641;}
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T641;
T641:;
	if(!(((V101))==(VV[47]))){
	goto T646;}
	{register object x= (V100),V130= VV[48];
	while(!endp(V130))
	if(eql(x,V130->c.c_car)){
	goto T650;
	}else V130=V130->c.c_cdr;
	goto T649;}
	goto T650;
T650:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T649;
T649:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T646;
T646:;
	if(!(((V101))==(VV[49]))){
	goto T656;}
	{register object x= (V100),V131= VV[50];
	while(!endp(V131))
	if(eql(x,V131->c.c_car)){
	goto T660;
	}else V131=V131->c.c_cdr;
	goto T659;}
	goto T660;
T660:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T659;
T659:;
	if(((V100))==(VV[27])){
	goto T663;}
	if(!(((V100))==(VV[22]))){
	goto T664;}
	goto T663;
T663:;
	if((cdr((V102)))==Cnil){
	goto T669;}
	if(!(type_of(cadr((V102)))==t_cons)){
	goto T669;}
	if((cdadr((V102)))!=Cnil){
	goto T669;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T669;
T669:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T664;
T664:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T656;
T656:;
	if(!(((V100))==(VV[47]))){
	goto T682;}
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T682;
T682:;
	if(!(((V100))==(VV[49]))){
	goto T687;}
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T687;
T687:;
	if(!(((V101))==(VV[51]))){
	goto T692;}
	{register object x= (V100),V132= VV[52];
	while(!endp(V132))
	if(eql(x,V132->c.c_car)){
	goto T696;
	}else V132=V132->c.c_cdr;
	goto T695;}
	goto T696;
T696:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T695;
T695:;
	if(((V104))==Cnil){
	goto T700;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T700;
T700:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T692;
T692:;
	if(!(((V100))==(VV[51]))){
	goto T707;}
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T707;
T707:;
	if(!(((V101))==(VV[53]))){
	goto T712;}
	{register object x= (V100),V133= VV[54];
	while(!endp(V133))
	if(eql(x,V133->c.c_car)){
	goto T716;
	}else V133=V133->c.c_cdr;
	goto T715;}
	goto T716;
T716:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T715;
T715:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T712;
T712:;
	if(!(((V101))==(VV[9]))){
	goto T722;}
	{register object x= (V100),V134= VV[55];
	while(!endp(V134))
	if(eql(x,V134->c.c_car)){
	goto T726;
	}else V134=V134->c.c_cdr;
	goto T725;}
	goto T726;
T726:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T725;
T725:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T722;
T722:;
	if(!(((V101))==(VV[56]))){
	goto T732;}
	if(!(((V100))==(VV[57]))){
	goto T735;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T735;
T735:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T732;
T732:;
	if(!(((V101))==(VV[58]))){
	goto T742;}
	if(!(((V100))==(VV[59]))){
	goto T745;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T745;
T745:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T742;
T742:;
	if(!(((V101))==(VV[40]))){
	goto T752;}
	{register object x= (V100),V135= VV[60];
	while(!endp(V135))
	if(eql(x,V135->c.c_car)){
	goto T756;
	}else V135=V135->c.c_cdr;
	goto T755;}
	goto T756;
T756:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T755;
T755:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T752;
T752:;
	if(!(((V101))==(VV[61]))){
	goto T762;}
	{register object x= (V100),V136= VV[62];
	while(!endp(V136))
	if(eql(x,V136->c.c_car)){
	goto T766;
	}else V136=V136->c.c_cdr;
	goto T765;}
	goto T766;
T766:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T765;
T765:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T762;
T762:;
	if(!(((V101))==(VV[63]))){
	goto T772;}
	V137= coerce_to_string((V100));
	if(equal(/* INLINE-ARGS */V137,VV[64])){
	goto T774;}
	{register object x= (V100),V138= VV[65];
	while(!endp(V138))
	if(eql(x,V138->c.c_car)){
	goto T778;
	}else V138=V138->c.c_cdr;
	goto T775;}
	goto T778;
T778:;
	goto T774;
T774:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T775;
T775:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T772;
T772:;
	if(!(((V101))==(VV[66]))){
	goto T784;}
	V139= coerce_to_string((V100));
	if(equal(/* INLINE-ARGS */V139,VV[67])){
	goto T786;}
	{register object x= (V100),V140= VV[68];
	while(!endp(V140))
	if(eql(x,V140->c.c_car)){
	goto T790;
	}else V140=V140->c.c_cdr;
	goto T787;}
	goto T790;
T790:;
	goto T786;
T786:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T787;
T787:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T784;
T784:;
	if(!(((V101))==(VV[69]))){
	goto T796;}
	if(!(((V100))==(VV[70]))){
	goto T799;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T799;
T799:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T796;
T796:;
	if(!(((V101))==(VV[71]))){
	goto T806;}
	if(!(((V100))==(VV[72]))){
	goto T809;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T809;
T809:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T806;
T806:;
	if(!(((V101))==(VV[73]))){
	goto T816;}
	{register object x= (V100),V141= VV[74];
	while(!endp(V141))
	if(eql(x,V141->c.c_car)){
	goto T820;
	}else V141=V141->c.c_cdr;
	goto T819;}
	goto T820;
T820:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T819;
T819:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T816;
T816:;
	V142= coerce_to_string((V101));
	if(equal(/* INLINE-ARGS */V142,VV[75])){
	goto T825;}
	if(!(((V101))==(VV[76]))){
	goto T826;}
	goto T825;
T825:;
	{register object x= (V100),V143= VV[77];
	while(!endp(V143))
	if(eql(x,V143->c.c_car)){
	goto T832;
	}else V143=V143->c.c_cdr;
	goto T831;}
	goto T832;
T832:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T831;
T831:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T826;
T826:;
	if(!(((V101))==(VV[78]))){
	goto T838;}
	{register object x= (V100),V144= VV[79];
	while(!endp(V144))
	if(eql(x,V144->c.c_car)){
	goto T842;
	}else V144=V144->c.c_cdr;
	goto T841;}
	goto T842;
T842:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T841;
T841:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T838;
T838:;
	if(!(((V101))==(VV[80]))){
	goto T848;}
	if(!(((V100))==(VV[81]))){
	goto T851;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T851;
T851:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T848;
T848:;
	if(!(((V101))==(VV[82]))){
	goto T858;}
	if(!(((V100))==(VV[83]))){
	goto T861;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T861;
T861:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T858;
T858:;
	if(!(((V101))==(VV[84]))){
	goto T868;}
	{register object x= (V100),V145= VV[85];
	while(!endp(V145))
	if(eql(x,V145->c.c_car)){
	goto T872;
	}else V145=V145->c.c_cdr;
	goto T871;}
	goto T872;
T872:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T871;
T871:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T868;
T868:;
	if(!(((V101))==(VV[84]))){
	goto T878;}
	{register object x= (V100),V146= VV[86];
	while(!endp(V146))
	if(eql(x,V146->c.c_car)){
	goto T882;
	}else V146=V146->c.c_cdr;
	goto T881;}
	goto T882;
T882:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T881;
T881:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T878;
T878:;
	if(!(((V101))==(VV[87]))){
	goto T888;}
	{register object x= (V100),V147= VV[88];
	while(!endp(V147))
	if(eql(x,V147->c.c_car)){
	goto T892;
	}else V147=V147->c.c_cdr;
	goto T891;}
	goto T892;
T892:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T891;
T891:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T888;
T888:;
	if(!(((V101))==(VV[89]))){
	goto T898;}
	{register object x= (V100),V148= VV[90];
	while(!endp(V148))
	if(eql(x,V148->c.c_car)){
	goto T902;
	}else V148=V148->c.c_cdr;
	goto T901;}
	goto T902;
T902:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T901;
T901:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T898;
T898:;
	if(!(((V101))==(VV[91]))){
	goto T908;}
	{register object x= (V100),V149= VV[92];
	while(!endp(V149))
	if(eql(x,V149->c.c_car)){
	goto T912;
	}else V149=V149->c.c_cdr;
	goto T911;}
	goto T912;
T912:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T911;
T911:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T908;
T908:;
	if(!(((V101))==(VV[93]))){
	goto T918;}
	if(!(((V100))==(VV[93]))){
	goto T921;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T921;
T921:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T918;
T918:;
	if(!(((V101))==(VV[59]))){
	goto T928;}
	if(!(((V100))==(VV[59]))){
	goto T931;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T931;
T931:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T928;
T928:;
	if(!(((V101))==(VV[94]))){
	goto T938;}
	{register object x= (V100),V150= VV[95];
	while(!endp(V150))
	if(eql(x,V150->c.c_car)){
	goto T942;
	}else V150=V150->c.c_cdr;
	goto T941;}
	goto T942;
T942:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T941;
T941:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T938;
T938:;
	if(!(((V100))==(VV[94]))){
	goto T948;}
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T948;
T948:;
	if(((V101))==(VV[29])){
	goto T952;}
	if(!(((V101))==(VV[28]))){
	goto T953;}
	goto T952;
T952:;
	if(((V100))==(VV[29])){
	goto T957;}
	if((get((V100),VV[36],Cnil))==Cnil){
	goto T958;}
	goto T957;
T957:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T958;
T958:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T953;
T953:;
	if(!(((V100))==(VV[29]))){
	goto T967;}
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T967;
T967:;
	V106= get((V100),VV[36],Cnil);
	if(((V106))==Cnil){
	goto T972;}
	{object V151;
	V151= get((V101),VV[36],Cnil);
	if(((V151))==Cnil){
	goto T977;}
	{register object V152;
	V152= (V106);
	goto T980;
T980:;
	if(((V152))!=Cnil){
	goto T981;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T981;
T981:;
	if(!(((V152))==(V151))){
	goto T987;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T987;
T987:;
	V152= structure_ref((V152),VV[36],4);
	goto T980;}
	goto T977;
T977:;
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;}
	goto T972;
T972:;
	if(!(((V101))==(VV[96]))){
	goto T998;}
	{register object x= (V100),V154= VV[97];
	while(!endp(V154))
	if(eql(x,V154->c.c_car)){
	goto T1003;
	}else V154=V154->c.c_cdr;
	goto T1001;}
	goto T1003;
T1003:;
	if(((*(LnkLI148))((V102),(V103)))==Cnil){
	goto T1001;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1001;
T1001:;
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T998;
T998:;
	if((get((V101),VV[36],Cnil))==Cnil){
	goto T1010;}
	base[2]= Cnil;
	base[3]= (V104);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1010;
T1010:;
	{object V155= (V100);
	if((V155!= VV[32]))goto T1014;
	{object V156= (V101);
	if((V156!= VV[32]))goto T1015;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1015;
T1015:;
	if((V156!= VV[13])
	&& (V156!= VV[105]))goto T1018;
	if(((*(LnkLI148))(VV[98],(V103)))==Cnil){
	goto T1020;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1020;
T1020:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1018;
T1018:;
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;}
	goto T1014;
T1014:;
	if((V155!= VV[33]))goto T1028;
	{object V157= (V101);
	if((V157!= VV[105]))goto T1029;
	if(((*(LnkLI148))(VV[99],(V103)))==Cnil){
	goto T1031;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1031;
T1031:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1029;
T1029:;
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;}
	goto T1028;
T1028:;
	if((V155!= VV[126]))goto T1039;
	{register object x= (V101),V158= VV[100];
	while(!endp(V158))
	if(eql(x,V158->c.c_car)){
	goto T1042;
	}else V158=V158->c.c_cdr;
	goto T1041;}
	goto T1042;
T1042:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1041;
T1041:;
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1039;
T1039:;
	if((V155!= VV[25]))goto T1047;
	{register object x= (V101),V159= VV[101];
	while(!endp(V159))
	if(eql(x,V159->c.c_car)){
	goto T1050;
	}else V159=V159->c.c_cdr;
	goto T1049;}
	goto T1050;
T1050:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1049;
T1049:;
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1047;
T1047:;
	if((V155!= VV[149]))goto T1055;
	{register object x= (V101),V160= VV[102];
	while(!endp(V160))
	if(eql(x,V160->c.c_car)){
	goto T1058;
	}else V160=V160->c.c_cdr;
	goto T1057;}
	goto T1058;
T1058:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1057;
T1057:;
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1055;
T1055:;
	if((V155!= VV[24]))goto T1063;
	if(!(((V101))==(VV[103]))){
	goto T1065;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1065;
T1065:;
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1063;
T1063:;
	if((V155!= VV[103]))goto T1071;
	if(!(((V101))==(VV[24]))){
	goto T1073;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1073;
T1073:;
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1071;
T1071:;
	if((V155!= VV[13]))goto T1079;
	{register object x= (V101),V161= VV[104];
	while(!endp(V161))
	if(eql(x,V161->c.c_car)){
	goto T1082;
	}else V161=V161->c.c_cdr;
	goto T1081;}
	goto T1082;
T1082:;
	base[2]= (*(LnkLI148))((V102),(V103));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1081;
T1081:;
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1079;
T1079:;
	if((V155!= VV[105]))goto T1087;
	if(!(((V101))==(VV[105]))){
	goto T1089;}
	base[2]= (*(LnkLI148))((V102),(V103));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1089;
T1089:;
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1087;
T1087:;
	if((V155!= VV[106]))goto T1095;
	if(!(((V101))==(VV[106]))){
	goto T1097;}
	base[2]= (*(LnkLI148))((V102),(V103));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1097;
T1097:;
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1095;
T1095:;
	if((V155!= VV[34]))goto T1103;
	{register object x= (V101),V162= VV[107];
	while(!endp(V162))
	if(eql(x,V162->c.c_car)){
	goto T1106;
	}else V162=V162->c.c_cdr;
	goto T1105;}
	goto T1106;
T1106:;
	base[2]= (*(LnkLI148))((V102),(V103));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1105;
T1105:;
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1103;
T1103:;
	if((V155!= VV[130])
	&& (V155!= VV[131])
	&& (V155!= VV[35]))goto T1111;
	{register object x= (V101),V163= VV[108];
	while(!endp(V163))
	if(eql(x,V163->c.c_car)){
	goto T1114;
	}else V163=V163->c.c_cdr;
	goto T1113;}
	goto T1114;
T1114:;
	base[2]= (*(LnkLI148))((V102),(V103));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1113;
T1113:;
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1111;
T1111:;
	if((V155!= VV[109]))goto T1119;
	if(!(((V101))==(VV[109]))){
	goto T1121;}{object V164;
	V164= car((V102));
	if(V164==Cnil)goto T1125;
	V98= V164;
	goto T1124;
	goto T1125;
T1125:;}
	V98= Ct;
	goto T1124;
T1124:;{object V165;
	V165= car((V103));
	if(V165==Cnil)goto T1128;
	V99= V165;
	goto T1127;
	goto T1128;
T1128:;}
	V99= Ct;
	goto T1127;
T1127:;
	goto TTL;
	goto T1121;
T1121:;
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1119;
T1119:;
	if((V155!= VV[27]))goto T1132;
	if(((V101))==(VV[27])){
	goto T1133;}
	if(!(((V101))==(VV[22]))){
	goto T1134;}
	goto T1133;
T1133:;
	if(endp_prop((V102))){
	goto T1139;}
	if(!((car((V102)))==(VV[17]))){
	goto T1140;}
	goto T1139;
T1139:;
	if(endp_prop((V103))){
	goto T1138;}
	if((car((V103)))==(VV[17])){
	goto T1138;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1140;
T1140:;
	if(endp_prop((V103))){
	goto T1138;}
	if((car((V103)))==(VV[17])){
	goto T1138;}
	if(equal(car((V102)),car((V103)))){
	goto T1138;}
	if(!((car((V102)))==(VV[25]))){
	goto T1154;}
	if((car((V103)))==(VV[24])){
	goto T1138;}
	goto T1154;
T1154:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1138;
T1138:;
	if(endp_prop(cdr((V102)))){
	goto T1163;}
	if(!((cadr((V102)))==(VV[17]))){
	goto T1162;}
	goto T1163;
T1163:;
	if(endp_prop(cdr((V103)))){
	goto T1167;}
	if(!((cadr((V103)))==(VV[17]))){
	goto T1168;}
	goto T1167;
T1167:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1168;
T1168:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1162;
T1162:;
	if(endp_prop(cdr((V103)))){
	goto T1177;}
	if(!((cadr((V103)))==(VV[17]))){
	goto T1176;}
	goto T1177;
T1177:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1176;
T1176:;
	base[2]= (*(LnkLI134))(cadr((V102)),cadr((V103)));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1134;
T1134:;
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1132;
T1132:;
	if((V155!= VV[22]))goto T1187;
	if(!(((V101))==(VV[22]))){
	goto T1189;}
	if(endp_prop((V102))){
	goto T1192;}
	if(!((car((V102)))==(VV[17]))){
	goto T1193;}
	goto T1192;
T1192:;
	if(endp_prop((V103))){
	goto T1191;}
	if((car((V103)))==(VV[17])){
	goto T1191;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1193;
T1193:;
	if(endp_prop((V103))){
	goto T1191;}
	if((car((V103)))==(VV[17])){
	goto T1191;}
	if(equal(car((V102)),car((V103)))){
	goto T1191;}
	if(!((car((V102)))==(VV[25]))){
	goto T1207;}
	if((car((V103)))==(VV[24])){
	goto T1191;}
	goto T1207;
T1207:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1191;
T1191:;
	if(endp_prop(cdr((V102)))){
	goto T1216;}
	if(!((cadr((V102)))==(VV[17]))){
	goto T1215;}
	goto T1216;
T1216:;
	if(endp_prop(cdr((V103)))){
	goto T1220;}
	if(!((cadr((V103)))==(VV[17]))){
	goto T1221;}
	goto T1220;
T1220:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1221;
T1221:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1215;
T1215:;
	if(endp_prop(cdr((V103)))){
	goto T1230;}
	if(!((cadr((V103)))==(VV[17]))){
	goto T1229;}
	goto T1230;
T1230:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1229;
T1229:;
	base[2]= (*(LnkLI134))(cadr((V102)),cadr((V103)));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1189;
T1189:;
	base[2]= Cnil;
	base[3]= (V105);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1187;
T1187:;
	if(((V104))==Cnil){
	goto T1241;}
	base[2]= (((V100))==((V101))?Ct:Cnil);
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1241;
T1241:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;}}
	}
}
/*	local entry for function SUB-INTERVAL-P	*/

static object LI28(V168,V169)

register object V168;register object V169;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{register object V170;
	register object V171;
	register object V172;
	register object V173;
	V170= Cnil;
	V171= Cnil;
	V172= Cnil;
	V173= Cnil;
	if(!(endp_prop((V168)))){
	goto T1249;}
	V170= VV[17];
	V171= VV[17];
	goto T1247;
	goto T1249;
T1249:;
	if(!(endp_prop(cdr((V168))))){
	goto T1255;}
	V170= car((V168));
	V171= VV[17];
	goto T1247;
	goto T1255;
T1255:;
	V170= car((V168));
	V171= cadr((V168));
	goto T1247;
T1247:;
	if(!(endp_prop((V169)))){
	goto T1265;}
	V172= VV[17];
	V173= VV[17];
	goto T1263;
	goto T1265;
T1265:;
	if(!(endp_prop(cdr((V169))))){
	goto T1271;}
	V172= car((V169));
	V173= VV[17];
	goto T1263;
	goto T1271;
T1271:;
	V172= car((V169));
	V173= cadr((V169));
	goto T1263;
T1263:;
	if(!(((V170))==(VV[17]))){
	goto T1281;}
	if(((V172))==(VV[17])){
	goto T1279;}
	{object V174 = Cnil;
	VMR28(V174)}
	goto T1281;
T1281:;
	{object V175;
	V175= (((V172))==(VV[17])?Ct:Cnil);
	if(((V175))==Cnil){
	goto T1287;}
	goto T1279;
	goto T1287;
T1287:;
	if(!(type_of((V170))==t_cons)){
	goto T1290;}
	if(!(type_of((V172))==t_cons)){
	goto T1293;}
	if(!(number_compare(car((V170)),car((V172)))<0)){
	goto T1279;}
	{object V176 = Cnil;
	VMR28(V176)}
	goto T1293;
T1293:;
	if(!(number_compare(car((V170)),(V172))<0)){
	goto T1279;}
	{object V177 = Cnil;
	VMR28(V177)}
	goto T1290;
T1290:;
	{object V178;
	if(!(type_of((V172))==t_cons)){
	goto T1301;}
	if(!(number_compare((V170),car((V172)))<=0)){
	goto T1304;}
	{object V179 = Cnil;
	VMR28(V179)}
	goto T1304;
T1304:;
	V178= Cnil;
	goto T1299;
	goto T1301;
T1301:;
	if(!(number_compare((V170),(V172))<0)){
	goto T1307;}
	{object V180 = Cnil;
	VMR28(V180)}
	goto T1307;
T1307:;
	V178= Cnil;
	goto T1299;
T1299:;
	if(((V178))==Cnil){
	goto T1279;}}}
	goto T1279;
T1279:;
	if(!(((V171))==(VV[17]))){
	goto T1313;}
	if(((V173))==(VV[17])){
	goto T1311;}
	{object V181 = Cnil;
	VMR28(V181)}
	goto T1313;
T1313:;
	{object V182;
	V182= (((V173))==(VV[17])?Ct:Cnil);
	if(((V182))==Cnil){
	goto T1319;}
	goto T1311;
	goto T1319;
T1319:;
	if(!(type_of((V171))==t_cons)){
	goto T1322;}
	if(!(type_of((V173))==t_cons)){
	goto T1325;}
	if(!(number_compare(car((V171)),car((V173)))>0)){
	goto T1311;}
	{object V183 = Cnil;
	VMR28(V183)}
	goto T1325;
T1325:;
	if(!(number_compare(car((V171)),(V173))>0)){
	goto T1311;}
	{object V184 = Cnil;
	VMR28(V184)}
	goto T1322;
T1322:;
	{object V185;
	if(!(type_of((V173))==t_cons)){
	goto T1333;}
	if(!(number_compare((V171),car((V173)))>=0)){
	goto T1336;}
	{object V186 = Cnil;
	VMR28(V186)}
	goto T1336;
T1336:;
	V185= Cnil;
	goto T1331;
	goto T1333;
T1333:;
	if(!(number_compare((V171),(V173))>0)){
	goto T1339;}
	{object V187 = Cnil;
	VMR28(V187)}
	goto T1339;
T1339:;
	V185= Cnil;
	goto T1331;
T1331:;
	if(((V185))==Cnil){
	goto T1311;}}}
	goto T1311;
T1311:;
	{object V188 = Ct;
	VMR28(V188)}}
	return Cnil;
}
/*	local entry for function IN-INTERVAL-P	*/

static object LI29(V191,V192)

register object V191;register object V192;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{register object V193;
	register object V194;
	V193= Cnil;
	V194= Cnil;
	if(!(endp_prop((V192)))){
	goto T1345;}
	V193= VV[17];
	V194= VV[17];
	goto T1343;
	goto T1345;
T1345:;
	if(!(endp_prop(cdr((V192))))){
	goto T1351;}
	V193= car((V192));
	V194= VV[17];
	goto T1343;
	goto T1351;
T1351:;
	V193= car((V192));
	V194= cadr((V192));
	goto T1343;
T1343:;
	{object V195;
	V195= (((V193))==(VV[17])?Ct:Cnil);
	if(((V195))==Cnil){
	goto T1362;}
	goto T1359;
	goto T1362;
T1362:;
	if(!(type_of((V193))==t_cons)){
	goto T1365;}
	if(!(number_compare((V191),car((V193)))<=0)){
	goto T1359;}
	{object V196 = Cnil;
	VMR29(V196)}
	goto T1365;
T1365:;
	{object V197;
	if(!(number_compare((V191),(V193))<0)){
	goto T1371;}
	{object V198 = Cnil;
	VMR29(V198)}
	goto T1371;
T1371:;
	V197= Cnil;
	if(((V197))==Cnil){
	goto T1359;}}}
	goto T1359;
T1359:;
	{object V199;
	V199= (((V194))==(VV[17])?Ct:Cnil);
	if(((V199))==Cnil){
	goto T1378;}
	goto T1375;
	goto T1378;
T1378:;
	if(!(type_of((V194))==t_cons)){
	goto T1381;}
	if(!(number_compare((V191),car((V194)))>=0)){
	goto T1375;}
	{object V200 = Cnil;
	VMR29(V200)}
	goto T1381;
T1381:;
	{object V201;
	if(!(number_compare((V191),(V194))>0)){
	goto T1387;}
	{object V202 = Cnil;
	VMR29(V202)}
	goto T1387;
T1387:;
	V201= Cnil;
	if(((V201))==Cnil){
	goto T1375;}}}
	goto T1375;
T1375:;
	{object V203 = Ct;
	VMR29(V203)}}
	return Cnil;
}
/*	local entry for function MATCH-DIMENSIONS	*/

static object LI30(V206,V207)

object V206;register object V207;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	if(((V206))!=Cnil){
	goto T1392;}
	{object V208 = (((V207))==Cnil?Ct:Cnil);
	VMR30(V208)}
	goto T1392;
T1392:;
	if(!((car((V207)))==(VV[17]))){
	goto T1396;}
	goto T1394;
	goto T1396;
T1396:;
	if(eql(car((V206)),car((V207)))){
	goto T1394;}
	{object V209 = Cnil;
	VMR30(V209)}
	goto T1394;
T1394:;
	V206= cdr((V206));
	V207= cdr((V207));
	goto TTL;
	return Cnil;
}
/*	local entry for function COERCE	*/

static object LI31(V212,V213)

register object V212;object V213;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	base[0]= (V212);
	base[1]= (V213);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk125)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1401;}
	{object V214 = (V212);
	VMR31(V214)}
	goto T1401;
T1401:;
	base[0]= (V213);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1406;}
	base[0]= VV[110];
	base[1]= VV[111];
	base[2]= (V212);
	base[3]= (V213);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk150)();
	vs_top=sup;
	goto T1406;
T1406:;
	V213= (*(LnkLI145))((V213));
	{object V215= car((V213));
	if((V215!= VV[47]))goto T1416;
	{register object V216;
	register object V217;
	V218 = make_fixnum((long)length((V212)));
	V217= one_minus(V218);
	V216= Cnil;
	goto T1419;
T1419:;
	if(!(number_compare((V217),small_fixnum(0))<0)){
	goto T1420;}
	{object V219 = (V216);
	VMR31(V219)}
	goto T1420;
T1420:;
	V220= elt((V212),fixint((V217)));
	V216= make_cons(/* INLINE-ARGS */V220,(V216));
	V217= one_minus((V217));
	goto T1419;}
	goto T1416;
T1416:;
	if((V215!= VV[22])
	&& (V215!= VV[27]))goto T1428;
	if(endp_prop(cdr((V213)))){
	goto T1429;}
	if(endp_prop(cddr((V213)))){
	goto T1429;}
	if((caddr((V213)))==(VV[17])){
	goto T1429;}
	if(endp_prop(cdr(caddr((V213))))){
	goto T1429;}
	base[0]= VV[112];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1429;
T1429:;
	{register object V221;
	register object V222;
	register object V223;
	V224 = make_fixnum((long)length((V212)));
	V221= (VFUN_NARGS=2,(*(LnkLI151))((V213),V224));
	V223= make_fixnum((long)length((V212)));
	V222= small_fixnum(0);
	goto T1442;
T1442:;
	if(!(number_compare((V222),(V223))>=0)){
	goto T1443;}
	{object V225 = (V221);
	VMR31(V225)}
	goto T1443;
T1443:;
	V226= elt((V212),fixint((V222)));
	(void)(elt_set((V221),fixint((V222)),/* INLINE-ARGS */V226));
	V222= one_plus((V222));
	goto T1442;}
	goto T1428;
T1428:;
	if((V215!= VV[103]))goto T1451;
	base[0]= (V212);
	vs_top=(vs_base=base+0)+1;
	Lcharacter();
	vs_top=sup;
	{object V227 = vs_base[0];
	VMR31(V227)}
	goto T1451;
T1451:;
	if((V215!= VV[106]))goto T1453;
	base[0]= (V212);
	vs_top=(vs_base=base+0)+1;
	Lfloat();
	vs_top=sup;
	{object V228 = vs_base[0];
	VMR31(V228)}
	goto T1453;
T1453:;
	if((V215!= VV[34]))goto T1455;
	base[0]= (V212);
	base[1]= VV[113];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V229 = vs_base[0];
	VMR31(V229)}
	goto T1455;
T1455:;
	if((V215!= VV[130])
	&& (V215!= VV[131])
	&& (V215!= VV[35]))goto T1458;
	base[0]= (V212);
	base[1]= VV[114];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V230 = vs_base[0];
	VMR31(V230)}
	goto T1458;
T1458:;
	if((V215!= VV[109]))goto T1461;
	if((cdr((V213)))==Cnil){
	goto T1462;}
	if((cadr((V213)))==Cnil){
	goto T1462;}
	if(!((cadr((V213)))==(VV[17]))){
	goto T1463;}
	goto T1462;
T1462:;
	base[1]= (V212);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= (V212);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V231 = vs_base[0];
	VMR31(V231)}
	goto T1463;
T1463:;
	base[1]= (V212);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	V232= vs_base[0];
	base[0]= (*(LnkLI152))(V232,cadr((V213)));
	base[2]= (V212);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V233= vs_base[0];
	base[1]= (*(LnkLI152))(V233,cadr((V213)));
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V234 = vs_base[0];
	VMR31(V234)}
	goto T1461;
T1461:;
	base[0]= VV[115];
	base[1]= (V212);
	base[2]= (V213);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V235 = vs_base[0];
	VMR31(V235)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WARN-VERSION	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_reserve(VM32);
	{object V236;
	object V237;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V236=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1482;}
	V237=(base[1]);
	vs_top=sup;
	goto T1483;
	goto T1482;
T1482:;
	V237= Cnil;
	goto T1483;
T1483:;
	if(symbol_value(VV[116])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	if(!(((eql((V236),symbol_value(VV[116]))?Ct:Cnil))==Cnil)){
	goto T1487;}
	goto T1485;
	goto T1487;
T1487:;
	if(((eql((V237),symbol_value(VV[117]))?Ct:Cnil))==Cnil){
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
	base[4]= (V237);
	base[5]= (V236);
	vs_top=(vs_base=base+2)+4;
	Lformat();
	return;
	}
}
static object  LnkTLI152(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[152],(void **)&LnkLI152,2,first,ap);va_end(ap);return V1;} /* COERCE */
static object  LnkTLI151(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[151],(void **)&LnkLI151,first,ap);va_end(ap);return V1;} /* MAKE-SEQUENCE */
static void LnkT150(){ call_or_link(VV[150],(void **)&Lnk150);} /* SPECIFIC-ERROR */
static object  LnkTLI148(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[148],(void **)&LnkLI148,2,first,ap);va_end(ap);return V1;} /* SUB-INTERVAL-P */
static object  LnkTLI147(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[147],(void **)&LnkLI147,1,first,ap);va_end(ap);return V1;} /* KNOWN-TYPE-P */
static void LnkT146(){ call_or_link(VV[146],(void **)&Lnk146);} /* SUBTYPEP */
static object  LnkTLI145(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[145],(void **)&LnkLI145,1,first,ap);va_end(ap);return V1;} /* NORMALIZE-TYPE */
static void LnkT144(){ call_or_link(VV[144],(void **)&Lnk144);} /* FIND-CLASS */
static void LnkT143(){ call_or_link(VV[143],(void **)&Lnk143);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI142(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[142],(void **)&LnkLI142,1,first,ap);va_end(ap);return V1;} /* SIMPLE-ARRAY-P */
static object  LnkTLI141(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[141],(void **)&LnkLI141,1,first,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI135(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[135],(void **)&LnkLI135,1,first,ap);va_end(ap);return V1;} /* ARRAY-DIMENSIONS */
static object  LnkTLI134(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[134],(void **)&LnkLI134,2,first,ap);va_end(ap);return V1;} /* MATCH-DIMENSIONS */
static void LnkT129(){ call_or_link(VV[129],(void **)&Lnk129);} /* REALP */
static void LnkT128(){ call_or_link(VV[128],(void **)&Lnk128);} /* RATIONALP */
static object  LnkTLI127(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[127],(void **)&LnkLI127,2,first,ap);va_end(ap);return V1;} /* IN-INTERVAL-P */
static void LnkT125(){ call_or_link(VV[125],(void **)&Lnk125);} /* TYPEP */
static void LnkT124(){ call_or_link(VV[124],(void **)&Lnk124);} /* CLASS-PRECEDENCE-LIST */
static void LnkT123(){ call_or_link(VV[123],(void **)&Lnk123);} /* CLASS-OF */
static void LnkT122(){ call_or_link(VV[122],(void **)&Lnk122);} /* CLASSP */
static void LnkT121(){ call_or_link(VV[121],(void **)&Lnk121);} /* ARRAY-HAS-FILL-POINTER-P */
static object  LnkTLI120(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[120],(void **)&LnkLI120,1,first,ap);va_end(ap);return V1;} /* FIND-DOCUMENTATION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

