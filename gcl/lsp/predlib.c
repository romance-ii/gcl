
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
/*	function definition for G1364	*/

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
/*	function definition for G1365	*/

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
/*	function definition for G1366	*/

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
/*	function definition for G1367	*/

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
/*	function definition for G1368	*/

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
/*	function definition for G1369	*/

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
/*	function definition for G1370	*/

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
/*	function definition for G1371	*/

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
/*	function definition for G1372	*/

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
/*	function definition for G1373	*/

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
/*	function definition for G1374	*/

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
/*	function definition for G1375	*/

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
/*	function definition for G1376	*/

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
/*	function definition for G1377	*/

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
/*	function definition for G1378	*/

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
/*	function definition for G1379	*/

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
/*	function definition for G1380	*/

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
/*	function definition for TYPEP	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	{register object V43;
	register object V44;
	check_arg(2);
	V43=(base[0]);
	V44=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V45;
	register object V46;
	object V47;
	V45= Cnil;
	V46= Cnil;
	V47= Cnil;
	base[2]= (V44);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T94;}
	base[3]= (V43);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk123)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	V49= vs_base[0];
	{register object x= (V44),V48= V49;
	while(!endp(V48))
	if(eql(x,V48->c.c_car)){
	goto T100;
	}else V48=V48->c.c_cdr;
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
	if(!(type_of((V44))!=t_cons)){
	goto T106;}
	V45= (V44);
	V46= Cnil;
	goto T104;
goto T106;
T106:;
	V45= car((V44));
	V46= cdr((V44));
goto T104;
T104:;
	if(!(((V45))==(VV[28]))){
	goto T114;}
	V45= VV[29];
goto T114;
T114:;
	{object V50;
	V50= get((V45),VV[30],Cnil);
	if(((V50))==Cnil){
	goto T118;}
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V50));
	return;}
goto T118;
T118:;
	{object V51= (V45);
	if((V51!= VV[41]))goto T123;
	{register object x= (V43),V52= (V46);
	while(!endp(V52))
	if(eql(x,V52->c.c_car)){
	base[2]= V52;
	vs_top=(vs_base=base+2)+1;
	return;
	}else V52=V52->c.c_cdr;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
goto T123;
T123:;
	if((V51!= VV[44]))goto T124;
	base[2]= (V43);
	base[3]= car((V46));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk125)();
	vs_top=sup;
	V53= vs_base[0];
	base[2]= ((V53)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T124;
T124:;
	if((V51!= VV[42]))goto T128;
	{register object V54;
	V54= (V46);
goto T130;
T130:;
	if(((V54))!=Cnil){
	goto T131;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T131;
T131:;
	base[2]= (V43);
	base[3]= car((V54));
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
	V54= cdr((V54));
	goto T130;}
goto T128;
T128:;
	if((V51!= VV[43]))goto T143;
	{register object V55;
	V55= (V46);
goto T145;
T145:;
	if(((V55))!=Cnil){
	goto T146;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T146;
T146:;
	base[2]= (V43);
	base[3]= car((V55));
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
	V55= cdr((V55));
	goto T145;}
goto T143;
T143:;
	if((V51!= VV[40]))goto T158;
	base[2]= car((V46));
	base[3]= (V43);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event(base[2]);
	return;
goto T158;
T158:;
	if((V51!= Ct))goto T161;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T161;
T161:;
	if((V51!= Cnil))goto T162;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T162;
T162:;
	if((V51!= VV[57]))goto T163;
	if(!(((V43))==(Ct))){
	goto T164;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T164;
T164:;
	base[2]= (((V43))==(Cnil)?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T163;
T163:;
	if((V51!= VV[31]))goto T166;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V56= vs_base[0];
	base[2]= ((V56)==(VV[31])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T166;
T166:;
	if((V51!= VV[32]))goto T169;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V57= vs_base[0];
	base[2]= ((V57)==(VV[32])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T169;
T169:;
	if((V51!= VV[33]))goto T172;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V58= vs_base[0];
	base[2]= ((V58)==(VV[33])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T172;
T172:;
	if((V51!= VV[126]))goto T175;
	if(type_of((V43))==t_character){
	goto T176;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T176;
T176:;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Lstandard_char_p();
	return;
goto T175;
T175:;
	if((V51!= VV[25])
	&& (V51!= VV[24]))goto T179;
	if(type_of((V43))==t_character){
	goto T180;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T180;
T180:;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Lstring_char_p();
	return;
goto T179;
T179:;
	if((V51!= VV[13]))goto T183;
	if(type_of((V43))==t_fixnum||type_of((V43))==t_bignum){
	goto T184;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T184;
T184:;
	base[2]= (*(LnkLI127))((V43),(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T183;
T183:;
	if((V51!= VV[105]))goto T186;
	base[2]= (V43);
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
	base[2]= (*(LnkLI127))((V43),(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T186;
T186:;
	if((V51!= VV[96]))goto T190;
	base[2]= (V43);
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
	base[2]= (*(LnkLI127))((V43),(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T190;
T190:;
	if((V51!= VV[106]))goto T194;
	if(type_of((V43))==t_shortfloat||type_of((V43))==t_longfloat){
	goto T195;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T195;
T195:;
	base[2]= (*(LnkLI127))((V43),(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T194;
T194:;
	if((V51!= VV[34]))goto T197;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V59= vs_base[0];
	if((V59)==(VV[34])){
	goto T198;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T198;
T198:;
	base[2]= (*(LnkLI127))((V43),(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T197;
T197:;
	if((V51!= VV[130])
	&& (V51!= VV[131])
	&& (V51!= VV[35]))goto T202;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V60= vs_base[0];
	if((V60)==(VV[35])){
	goto T203;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T203;
T203:;
	base[2]= (*(LnkLI127))((V43),(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T202;
T202:;
	if((V51!= VV[109]))goto T207;
	base[2]= (V43);
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
	if(!(((V46))==Cnil)){
	goto T211;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T211;
T211:;
	base[3]= (V43);
	vs_top=(vs_base=base+3)+1;
	Lrealpart();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= car((V46));
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
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V43= vs_base[0];
	V44= car((V46));
	goto TTL;
goto T207;
T207:;
	if((V51!= VV[48]))goto T222;
	if(!(type_of((V43))==t_cons||((V43))==Cnil)){
	goto T223;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T223;
T223:;
	base[2]= (type_of((V43))==t_vector||
type_of((V43))==t_string||
type_of((V43))==t_bitvector?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T222;
T222:;
	if((V51!= VV[132])
	&& (V51!= VV[133]))goto T225;
	if(type_of((V43))==t_string){
	goto T226;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T226;
T226:;
	if(!(((V46))==Cnil)){
	goto T228;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T228;
T228:;
	V61= (*(LnkLI135))((V43));
	base[2]= (*(LnkLI134))(/* INLINE-ARGS */V61,(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T225;
T225:;
	if((V51!= VV[136]))goto T230;
	if((type_of((V43))==t_bitvector)){
	goto T231;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T231;
T231:;
	if(!(((V46))==Cnil)){
	goto T233;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T233;
T233:;
	V62= (*(LnkLI135))((V43));
	base[2]= (*(LnkLI134))(/* INLINE-ARGS */V62,(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T230;
T230:;
	if((V51!= VV[137])
	&& (V51!= VV[138]))goto T235;
	base[2]= (V43);
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
	if(!(((V46))==Cnil)){
	goto T239;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T239;
T239:;
	V63= (*(LnkLI135))((V43));
	base[2]= (*(LnkLI134))(/* INLINE-ARGS */V63,(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T235;
T235:;
	if((V51!= VV[139]))goto T241;
	base[2]= (V43);
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
	if(!(((V46))==Cnil)){
	goto T245;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T245;
T245:;
	V64= (*(LnkLI135))((V43));
	base[2]= (*(LnkLI134))(/* INLINE-ARGS */V64,(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T241;
T241:;
	if((V51!= VV[140]))goto T247;
	base[2]= (V43);
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
	if(!(((V46))==Cnil)){
	goto T251;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T251;
T251:;
	V65= (*(LnkLI135))((V43));
	base[2]= (*(LnkLI134))(/* INLINE-ARGS */V65,(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T247;
T247:;
	if((V51!= VV[27]))goto T253;
	if(((*(LnkLI141))((V43)))!=Cnil){
	goto T254;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T254;
T254:;
	if(!(endp_prop((V46)))){
	goto T258;}
	goto T256;
goto T258;
T258:;
	if(!((car((V46)))==(VV[17]))){
	goto T260;}
	goto T256;
goto T260;
T260:;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V66= vs_base[0];
	V67= (*(LnkLI142))(car((V46)));
	if(equal(V66,/* INLINE-ARGS */V67)){
	goto T256;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T256;
T256:;
	if(!(endp_prop(cdr((V46))))){
	goto T264;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T264;
T264:;
	if(!((cadr((V46)))==(VV[17]))){
	goto T266;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T266;
T266:;
	V68= (*(LnkLI135))((V43));
	base[2]= (*(LnkLI134))(/* INLINE-ARGS */V68,cadr((V46)));
	vs_top=(vs_base=base+2)+1;
	return;
goto T253;
T253:;
	if((V51!= VV[22]))goto T268;
	if(type_of((V43))==t_array||
type_of((V43))==t_vector||
type_of((V43))==t_string||
type_of((V43))==t_bitvector){
	goto T269;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T269;
T269:;
	if(!(endp_prop((V46)))){
	goto T273;}
	goto T271;
goto T273;
T273:;
	if(!((car((V46)))==(VV[17]))){
	goto T275;}
	goto T271;
goto T275;
T275:;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V69= vs_base[0];
	V70= (*(LnkLI142))(car((V46)));
	if(equal(V69,/* INLINE-ARGS */V70)){
	goto T271;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T271;
T271:;
	if(!(endp_prop(cdr((V46))))){
	goto T279;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T279;
T279:;
	if(!((cadr((V46)))==(VV[17]))){
	goto T281;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T281;
T281:;
	V71= (*(LnkLI135))((V43));
	base[2]= (*(LnkLI134))(/* INLINE-ARGS */V71,cadr((V46)));
	vs_top=(vs_base=base+2)+1;
	return;
goto T268;
T268:;
	V47= get((V45),VV[36],Cnil);
	if(((V47))==Cnil){
	goto T284;}
	base[2]= (V43);
	base[3]= (V47);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk143)();
	return;
goto T284;
T284:;
	V47= get((V45),VV[37],Cnil);
	if(((V47))==Cnil){
	goto T290;}
	base[2]= (V47);
	{object V72;
	V72= Cnil;
	 vs_top=base+3;
	 while(!endp(V72))
	 {vs_push(car(V72));V72=cdr(V72);}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	vs_top=sup;
	V44= vs_base[0];
	goto TTL;
goto T290;
T290:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	local entry for function NORMALIZE-TYPE	*/

static object LI24(V74)

register object V74;
{	 VMB24 VMS24 VMV24
goto TTL;
TTL:;
	{register object V75;
	register object V76;
	V75= Cnil;
	V76= Cnil;
goto T301;
T301:;
	if(!(type_of((V74))!=t_cons)){
	goto T305;}
	V75= (V74);
	V76= Cnil;
	goto T303;
goto T305;
T305:;
	V75= car((V74));
	V76= cdr((V74));
goto T303;
T303:;
	if((get((V75),VV[37],Cnil))==Cnil){
	goto T314;}
	base[0]= get((V75),VV[37],Cnil);
	{object V77;
	V77= (V76);
	 vs_top=base+1;
	 while(!endp(V77))
	 {vs_push(car(V77));V77=cdr(V77);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V74= vs_base[0];
	goto T302;
goto T314;
T314:;
	if(!(type_of((V74))!=t_cons)){
	goto T320;}
	{object V78 = make_cons((V74),Cnil);
	VMR24(V78)}
goto T320;
T320:;
	{object V79 = (V74);
	VMR24(V79)}
goto T302;
T302:;
	goto T301;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function KNOWN-TYPE-P	*/

static object LI25(V81)

register object V81;
{	 VMB25 VMS25 VMV25
goto TTL;
TTL:;
	if(!(type_of((V81))==t_cons)){
	goto T323;}
	V81= car((V81));
goto T323;
T323:;
	V82= coerce_to_string((V81));
	if(equal(/* INLINE-ARGS */V82,VV[38])){
	goto T327;}
	{register object x= (V81),V83= VV[39];
	while(!endp(V83))
	if(eql(x,V83->c.c_car)){
	goto T327;
	}else V83=V83->c.c_cdr;}
	if((get((V81),VV[36],Cnil))==Cnil){
	goto T328;}
goto T327;
T327:;
	{object V84 = Ct;
	VMR25(V84)}
goto T328;
T328:;
	{object V85 = Cnil;
	VMR25(V85)}
	return Cnil;
}
/*	function definition for SUBTYPEP	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	{object V86;
	object V87;
	check_arg(2);
	V86=(base[0]);
	V87=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V88;
	object V89;
	object V90;
	object V91;
	object V92;
	object V93;
	object V94;
	V88= Cnil;
	V89= Cnil;
	V90= Cnil;
	V91= Cnil;
	V92= Cnil;
	V93= Cnil;
	V94= Cnil;
	{object V95;
	object V96;
	base[2]= (V86);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	V95= vs_base[0];
	base[2]= (V87);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	V96= vs_base[0];
	if(((V95))==Cnil){
	goto T346;}
	if(((V96))==Cnil){
	goto T346;}
	base[2]= (V86);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	V98= vs_base[0];
	{register object x= (V87),V97= V98;
	while(!endp(V97))
	if(eql(x,V97->c.c_car)){
	goto T353;
	}else V97=V97->c.c_cdr;
	goto T352;}
goto T353;
T353:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T352;
T352:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T346;
T346:;
	if(((V95))!=Cnil){
	goto T360;}
	if(((V96))==Cnil){
	goto T341;}
goto T360;
T360:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;}
goto T341;
T341:;
	V88= (*(LnkLI144))((V86));
	if(!((car((V88)))==(VV[40]))){
	goto T371;}
	V86= make_cons((V86),Cnil);
	goto T369;
goto T371;
T371:;
	V86= (V88);
goto T369;
T369:;
	V89= (*(LnkLI144))((V87));
	if(!((car((V89)))==(VV[40]))){
	goto T378;}
	V87= make_cons((V87),Cnil);
	goto T376;
goto T378;
T378:;
	V87= (V89);
goto T376;
T376:;
	if(!(equal((V86),(V87)))){
	goto T380;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T380;
T380:;
	V88= car((V86));
	V89= car((V87));
	V90= cdr((V86));
	V91= cdr((V87));
	if(!(((V88))==(VV[41]))){
	goto T395;}
	{register object V99;
	object V100;
	V99= (V90);
	V100= car((V99));
goto T401;
T401:;
	if(!(endp_prop((V99)))){
	goto T402;}
	goto T397;
goto T402;
T402:;
	base[3]= (V100);
	base[4]= (V87);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk125)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T406;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
goto T406;
T406:;
	V99= cdr((V99));
	V100= car((V99));
	goto T401;}
goto T397;
T397:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T395;
T395:;
	if(!(((V88))==(VV[42]))){
	goto T421;}
	{register object V101;
	object V102;
	V101= (V90);
	V102= car((V101));
goto T427;
T427:;
	if(!(endp_prop((V101)))){
	goto T428;}
	goto T423;
goto T428;
T428:;
	{object V103;
	object V104;
	base[3]= (V102);
	base[4]= (V87);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk145)();
	if(vs_base>=vs_top){vs_top=sup;goto T436;}
	V103= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T437;}
	V104= vs_base[0];
	vs_top=sup;
	goto T438;
goto T436;
T436:;
	V103= Cnil;
goto T437;
T437:;
	V104= Cnil;
goto T438;
T438:;
	if(((V103))!=Cnil){
	goto T432;}
	base[3]= (V103);
	base[4]= (V104);
	vs_top=(vs_base=base+3)+2;
	return;}
goto T432;
T432:;
	V101= cdr((V101));
	V102= car((V101));
	goto T427;}
goto T423;
T423:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T421;
T421:;
	if(!(((V88))==(VV[43]))){
	goto T451;}
	{register object V105;
	object V106;
	V105= (V90);
	V106= car((V105));
goto T457;
T457:;
	if(!(endp_prop((V105)))){
	goto T458;}
	goto T453;
goto T458;
T458:;
	{object V107;
	base[3]= (V106);
	base[4]= (V87);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk145)();
	vs_top=sup;
	V107= vs_base[0];
	if(((V107))==Cnil){
	goto T462;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}
goto T462;
T462:;
	V105= cdr((V105));
	V106= car((V105));
	goto T457;}
goto T453;
T453:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T451;
T451:;
	if(!(((V88))==(VV[44]))){
	goto T393;}
	if(!(((V89))==(VV[44]))){
	goto T480;}
	V86= car((V91));
	V87= car((V90));
	goto TTL;
goto T480;
T480:;
	V86= Ct;
	V87= list(3,VV[42],(V87),car((V90)));
	goto TTL;
goto T393;
T393:;
	if(!(((V89))==(VV[41]))){
	goto T490;}
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T490;
T490:;
	if(!(((V89))==(VV[42]))){
	goto T495;}
	{register object V108;
	object V109;
	V108= (V91);
	V109= car((V108));
goto T501;
T501:;
	if(!(endp_prop((V108)))){
	goto T502;}
	goto T497;
goto T502;
T502:;
	{object V110;
	base[3]= (V86);
	base[4]= (V109);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk145)();
	vs_top=sup;
	V110= vs_base[0];
	if(((V110))==Cnil){
	goto T506;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}
goto T506;
T506:;
	V108= cdr((V108));
	V109= car((V108));
	goto T501;}
goto T497;
T497:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T495;
T495:;
	if(!(((V89))==(VV[43]))){
	goto T522;}
	{register object V111;
	object V112;
	V111= (V91);
	V112= car((V111));
goto T528;
T528:;
	if(!(endp_prop((V111)))){
	goto T529;}
	goto T524;
goto T529;
T529:;
	{object V113;
	object V114;
	base[3]= (V86);
	base[4]= (V112);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk145)();
	if(vs_base>=vs_top){vs_top=sup;goto T537;}
	V113= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T538;}
	V114= vs_base[0];
	vs_top=sup;
	goto T539;
goto T537;
T537:;
	V113= Cnil;
goto T538;
T538:;
	V114= Cnil;
goto T539;
T539:;
	if(((V113))!=Cnil){
	goto T533;}
	base[3]= (V113);
	base[4]= (V114);
	vs_top=(vs_base=base+3)+2;
	return;}
goto T533;
T533:;
	V111= cdr((V111));
	V112= car((V111));
	goto T528;}
goto T524;
T524:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T522;
T522:;
	if(!(((V89))==(VV[44]))){
	goto T488;}
	V86= list(3,VV[43],(V86),car((V91)));
	V87= Cnil;
	goto TTL;
goto T488;
T488:;
	V92= (*(LnkLI146))((V86));
	V93= (*(LnkLI146))((V87));
	if(((V88))==(Cnil)){
	goto T560;}
	if(((V89))==(Ct)){
	goto T560;}
	if(!(((V89))==(VV[45]))){
	goto T561;}
goto T560;
T560:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T561;
T561:;
	if(!(((V89))==(Cnil))){
	goto T570;}
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T570;
T570:;
	if(!(((V88))==(Ct))){
	goto T575;}
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T575;
T575:;
	if(!(((V88))==(VV[45]))){
	goto T580;}
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T580;
T580:;
	if(!(((V89))==(VV[46]))){
	goto T585;}
	{register object x= (V88),V115= VV[47];
	while(!endp(V115))
	if(eql(x,V115->c.c_car)){
	goto T589;
	}else V115=V115->c.c_cdr;
	goto T588;}
goto T589;
T589:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T588;
T588:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T585;
T585:;
	if(!(((V89))==(VV[48]))){
	goto T595;}
	{register object x= (V88),V116= VV[49];
	while(!endp(V116))
	if(eql(x,V116->c.c_car)){
	goto T599;
	}else V116=V116->c.c_cdr;
	goto T598;}
goto T599;
T599:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T598;
T598:;
	if(((V88))==(VV[27])){
	goto T602;}
	if(!(((V88))==(VV[22]))){
	goto T603;}
goto T602;
T602:;
	if((cdr((V90)))==Cnil){
	goto T608;}
	if(!(type_of(cadr((V90)))==t_cons)){
	goto T608;}
	if((cdadr((V90)))!=Cnil){
	goto T608;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T608;
T608:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T603;
T603:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T595;
T595:;
	if(!(((V88))==(VV[46]))){
	goto T621;}
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T621;
T621:;
	if(!(((V88))==(VV[48]))){
	goto T626;}
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T626;
T626:;
	if(!(((V89))==(VV[50]))){
	goto T631;}
	{register object x= (V88),V117= VV[51];
	while(!endp(V117))
	if(eql(x,V117->c.c_car)){
	goto T635;
	}else V117=V117->c.c_cdr;
	goto T634;}
goto T635;
T635:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T634;
T634:;
	if(((V92))==Cnil){
	goto T639;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T639;
T639:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T631;
T631:;
	if(!(((V88))==(VV[50]))){
	goto T646;}
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T646;
T646:;
	if(!(((V89))==(VV[52]))){
	goto T651;}
	{register object x= (V88),V118= VV[53];
	while(!endp(V118))
	if(eql(x,V118->c.c_car)){
	goto T655;
	}else V118=V118->c.c_cdr;
	goto T654;}
goto T655;
T655:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T654;
T654:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T651;
T651:;
	if(!(((V89))==(VV[9]))){
	goto T661;}
	{register object x= (V88),V119= VV[54];
	while(!endp(V119))
	if(eql(x,V119->c.c_car)){
	goto T665;
	}else V119=V119->c.c_cdr;
	goto T664;}
goto T665;
T665:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T664;
T664:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T661;
T661:;
	if(!(((V89))==(VV[55]))){
	goto T671;}
	if(!(((V88))==(VV[56]))){
	goto T674;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T674;
T674:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T671;
T671:;
	if(!(((V89))==(VV[57]))){
	goto T681;}
	if(!(((V88))==(VV[58]))){
	goto T684;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T684;
T684:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T681;
T681:;
	if(!(((V89))==(VV[59]))){
	goto T691;}
	{register object x= (V88),V120= VV[60];
	while(!endp(V120))
	if(eql(x,V120->c.c_car)){
	goto T695;
	}else V120=V120->c.c_cdr;
	goto T694;}
goto T695;
T695:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T694;
T694:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T691;
T691:;
	if(!(((V89))==(VV[61]))){
	goto T701;}
	{register object x= (V88),V121= VV[62];
	while(!endp(V121))
	if(eql(x,V121->c.c_car)){
	goto T705;
	}else V121=V121->c.c_cdr;
	goto T704;}
goto T705;
T705:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T704;
T704:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T701;
T701:;
	if(!(((V89))==(VV[63]))){
	goto T711;}
	V122= coerce_to_string((V88));
	if(equal(/* INLINE-ARGS */V122,VV[64])){
	goto T713;}
	{register object x= (V88),V123= VV[65];
	while(!endp(V123))
	if(eql(x,V123->c.c_car)){
	goto T717;
	}else V123=V123->c.c_cdr;
	goto T714;}
goto T717;
T717:;
goto T713;
T713:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T714;
T714:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T711;
T711:;
	if(!(((V89))==(VV[66]))){
	goto T723;}
	V124= coerce_to_string((V88));
	if(equal(/* INLINE-ARGS */V124,VV[67])){
	goto T725;}
	{register object x= (V88),V125= VV[68];
	while(!endp(V125))
	if(eql(x,V125->c.c_car)){
	goto T729;
	}else V125=V125->c.c_cdr;
	goto T726;}
goto T729;
T729:;
goto T725;
T725:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T726;
T726:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T723;
T723:;
	if(!(((V89))==(VV[69]))){
	goto T735;}
	if(!(((V88))==(VV[70]))){
	goto T738;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T738;
T738:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T735;
T735:;
	if(!(((V89))==(VV[71]))){
	goto T745;}
	if(!(((V88))==(VV[72]))){
	goto T748;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T748;
T748:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T745;
T745:;
	if(!(((V89))==(VV[73]))){
	goto T755;}
	{register object x= (V88),V126= VV[74];
	while(!endp(V126))
	if(eql(x,V126->c.c_car)){
	goto T759;
	}else V126=V126->c.c_cdr;
	goto T758;}
goto T759;
T759:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T758;
T758:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T755;
T755:;
	V127= coerce_to_string((V89));
	if(equal(/* INLINE-ARGS */V127,VV[75])){
	goto T764;}
	if(!(((V89))==(VV[76]))){
	goto T765;}
goto T764;
T764:;
	{register object x= (V88),V128= VV[77];
	while(!endp(V128))
	if(eql(x,V128->c.c_car)){
	goto T771;
	}else V128=V128->c.c_cdr;
	goto T770;}
goto T771;
T771:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T770;
T770:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T765;
T765:;
	if(!(((V89))==(VV[78]))){
	goto T777;}
	{register object x= (V88),V129= VV[79];
	while(!endp(V129))
	if(eql(x,V129->c.c_car)){
	goto T781;
	}else V129=V129->c.c_cdr;
	goto T780;}
goto T781;
T781:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T780;
T780:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T777;
T777:;
	if(!(((V89))==(VV[80]))){
	goto T787;}
	if(!(((V88))==(VV[81]))){
	goto T790;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T790;
T790:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T787;
T787:;
	if(!(((V89))==(VV[82]))){
	goto T797;}
	if(!(((V88))==(VV[83]))){
	goto T800;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T800;
T800:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T797;
T797:;
	if(!(((V89))==(VV[84]))){
	goto T807;}
	{register object x= (V88),V130= VV[85];
	while(!endp(V130))
	if(eql(x,V130->c.c_car)){
	goto T811;
	}else V130=V130->c.c_cdr;
	goto T810;}
goto T811;
T811:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T810;
T810:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T807;
T807:;
	if(!(((V89))==(VV[84]))){
	goto T817;}
	{register object x= (V88),V131= VV[86];
	while(!endp(V131))
	if(eql(x,V131->c.c_car)){
	goto T821;
	}else V131=V131->c.c_cdr;
	goto T820;}
goto T821;
T821:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T820;
T820:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T817;
T817:;
	if(!(((V89))==(VV[87]))){
	goto T827;}
	{register object x= (V88),V132= VV[88];
	while(!endp(V132))
	if(eql(x,V132->c.c_car)){
	goto T831;
	}else V132=V132->c.c_cdr;
	goto T830;}
goto T831;
T831:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T830;
T830:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T827;
T827:;
	if(!(((V89))==(VV[89]))){
	goto T837;}
	{register object x= (V88),V133= VV[90];
	while(!endp(V133))
	if(eql(x,V133->c.c_car)){
	goto T841;
	}else V133=V133->c.c_cdr;
	goto T840;}
goto T841;
T841:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T840;
T840:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T837;
T837:;
	if(!(((V89))==(VV[91]))){
	goto T847;}
	{register object x= (V88),V134= VV[92];
	while(!endp(V134))
	if(eql(x,V134->c.c_car)){
	goto T851;
	}else V134=V134->c.c_cdr;
	goto T850;}
goto T851;
T851:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T850;
T850:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T847;
T847:;
	if(!(((V89))==(VV[93]))){
	goto T857;}
	if(!(((V88))==(VV[93]))){
	goto T860;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T860;
T860:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T857;
T857:;
	if(!(((V89))==(VV[58]))){
	goto T867;}
	if(!(((V88))==(VV[58]))){
	goto T870;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T870;
T870:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T867;
T867:;
	if(!(((V89))==(VV[94]))){
	goto T877;}
	{register object x= (V88),V135= VV[95];
	while(!endp(V135))
	if(eql(x,V135->c.c_car)){
	goto T881;
	}else V135=V135->c.c_cdr;
	goto T880;}
goto T881;
T881:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T880;
T880:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T877;
T877:;
	if(!(((V88))==(VV[94]))){
	goto T887;}
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T887;
T887:;
	if(((V89))==(VV[29])){
	goto T891;}
	if(!(((V89))==(VV[28]))){
	goto T892;}
goto T891;
T891:;
	if(((V88))==(VV[29])){
	goto T896;}
	if((get((V88),VV[36],Cnil))==Cnil){
	goto T897;}
goto T896;
T896:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T897;
T897:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T892;
T892:;
	if(!(((V88))==(VV[29]))){
	goto T906;}
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T906;
T906:;
	V94= get((V88),VV[36],Cnil);
	if(((V94))==Cnil){
	goto T911;}
	{object V136;
	V136= get((V89),VV[36],Cnil);
	if(((V136))==Cnil){
	goto T916;}
	{register object V137;
	V137= (V94);
goto T919;
T919:;
	if(((V137))!=Cnil){
	goto T920;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T920;
T920:;
	if(!(((V137))==(V136))){
	goto T926;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T926;
T926:;
	V137= structure_ref((V137),VV[36],4);
	goto T919;}
goto T916;
T916:;
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T911;
T911:;
	if(!(((V89))==(VV[96]))){
	goto T937;}
	{register object x= (V88),V139= VV[97];
	while(!endp(V139))
	if(eql(x,V139->c.c_car)){
	goto T942;
	}else V139=V139->c.c_cdr;
	goto T940;}
goto T942;
T942:;
	if(((*(LnkLI147))((V90),(V91)))==Cnil){
	goto T940;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T940;
T940:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T937;
T937:;
	if((get((V89),VV[36],Cnil))==Cnil){
	goto T949;}
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T949;
T949:;
	{object V140= (V88);
	if((V140!= VV[32]))goto T953;
	{object V141= (V89);
	if((V141!= VV[32]))goto T954;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T954;
T954:;
	if((V141!= VV[13])
	&& (V141!= VV[105]))goto T957;
	if(((*(LnkLI147))(VV[98],(V91)))==Cnil){
	goto T959;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T959;
T959:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T957;
T957:;
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T953;
T953:;
	if((V140!= VV[33]))goto T967;
	{object V142= (V89);
	if((V142!= VV[105]))goto T968;
	if(((*(LnkLI147))(VV[99],(V91)))==Cnil){
	goto T970;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T970;
T970:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T968;
T968:;
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T967;
T967:;
	if((V140!= VV[126]))goto T978;
	{register object x= (V89),V143= VV[100];
	while(!endp(V143))
	if(eql(x,V143->c.c_car)){
	goto T981;
	}else V143=V143->c.c_cdr;
	goto T980;}
goto T981;
T981:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T980;
T980:;
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T978;
T978:;
	if((V140!= VV[25]))goto T986;
	{register object x= (V89),V144= VV[101];
	while(!endp(V144))
	if(eql(x,V144->c.c_car)){
	goto T989;
	}else V144=V144->c.c_cdr;
	goto T988;}
goto T989;
T989:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T988;
T988:;
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T986;
T986:;
	if((V140!= VV[148]))goto T994;
	{register object x= (V89),V145= VV[102];
	while(!endp(V145))
	if(eql(x,V145->c.c_car)){
	goto T997;
	}else V145=V145->c.c_cdr;
	goto T996;}
goto T997;
T997:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T996;
T996:;
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T994;
T994:;
	if((V140!= VV[24]))goto T1002;
	if(!(((V89))==(VV[103]))){
	goto T1004;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1004;
T1004:;
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1002;
T1002:;
	if((V140!= VV[103]))goto T1010;
	if(!(((V89))==(VV[24]))){
	goto T1012;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1012;
T1012:;
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1010;
T1010:;
	if((V140!= VV[13]))goto T1018;
	{register object x= (V89),V146= VV[104];
	while(!endp(V146))
	if(eql(x,V146->c.c_car)){
	goto T1021;
	}else V146=V146->c.c_cdr;
	goto T1020;}
goto T1021;
T1021:;
	base[2]= (*(LnkLI147))((V90),(V91));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1020;
T1020:;
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1018;
T1018:;
	if((V140!= VV[105]))goto T1026;
	if(!(((V89))==(VV[105]))){
	goto T1028;}
	base[2]= (*(LnkLI147))((V90),(V91));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1028;
T1028:;
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1026;
T1026:;
	if((V140!= VV[106]))goto T1034;
	if(!(((V89))==(VV[106]))){
	goto T1036;}
	base[2]= (*(LnkLI147))((V90),(V91));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1036;
T1036:;
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1034;
T1034:;
	if((V140!= VV[34]))goto T1042;
	{register object x= (V89),V147= VV[107];
	while(!endp(V147))
	if(eql(x,V147->c.c_car)){
	goto T1045;
	}else V147=V147->c.c_cdr;
	goto T1044;}
goto T1045;
T1045:;
	base[2]= (*(LnkLI147))((V90),(V91));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1044;
T1044:;
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1042;
T1042:;
	if((V140!= VV[130])
	&& (V140!= VV[131])
	&& (V140!= VV[35]))goto T1050;
	{register object x= (V89),V148= VV[108];
	while(!endp(V148))
	if(eql(x,V148->c.c_car)){
	goto T1053;
	}else V148=V148->c.c_cdr;
	goto T1052;}
goto T1053;
T1053:;
	base[2]= (*(LnkLI147))((V90),(V91));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1052;
T1052:;
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1050;
T1050:;
	if((V140!= VV[109]))goto T1058;
	if(!(((V89))==(VV[109]))){
	goto T1060;}{object V149;
	V149= car((V90));
	if(V149==Cnil)goto T1064;
	V86= V149;
	goto T1063;
goto T1064;
T1064:;}
	V86= Ct;
goto T1063;
T1063:;{object V150;
	V150= car((V91));
	if(V150==Cnil)goto T1067;
	V87= V150;
	goto T1066;
goto T1067;
T1067:;}
	V87= Ct;
goto T1066;
T1066:;
	goto TTL;
goto T1060;
T1060:;
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1058;
T1058:;
	if((V140!= VV[27]))goto T1071;
	if(((V89))==(VV[27])){
	goto T1072;}
	if(!(((V89))==(VV[22]))){
	goto T1073;}
goto T1072;
T1072:;
	if(endp_prop((V90))){
	goto T1078;}
	if(!((car((V90)))==(VV[17]))){
	goto T1079;}
goto T1078;
T1078:;
	if(endp_prop((V91))){
	goto T1077;}
	if((car((V91)))==(VV[17])){
	goto T1077;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1079;
T1079:;
	if(endp_prop((V91))){
	goto T1077;}
	if((car((V91)))==(VV[17])){
	goto T1077;}
	if(equal(car((V90)),car((V91)))){
	goto T1077;}
	if(!((car((V90)))==(VV[25]))){
	goto T1093;}
	if((car((V91)))==(VV[24])){
	goto T1077;}
goto T1093;
T1093:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1077;
T1077:;
	if(endp_prop(cdr((V90)))){
	goto T1102;}
	if(!((cadr((V90)))==(VV[17]))){
	goto T1101;}
goto T1102;
T1102:;
	if(endp_prop(cdr((V91)))){
	goto T1106;}
	if(!((cadr((V91)))==(VV[17]))){
	goto T1107;}
goto T1106;
T1106:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1107;
T1107:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1101;
T1101:;
	if(endp_prop(cdr((V91)))){
	goto T1116;}
	if(!((cadr((V91)))==(VV[17]))){
	goto T1115;}
goto T1116;
T1116:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1115;
T1115:;
	base[2]= (*(LnkLI134))(cadr((V90)),cadr((V91)));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1073;
T1073:;
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1071;
T1071:;
	if((V140!= VV[22]))goto T1126;
	if(!(((V89))==(VV[22]))){
	goto T1128;}
	if(endp_prop((V90))){
	goto T1131;}
	if(!((car((V90)))==(VV[17]))){
	goto T1132;}
goto T1131;
T1131:;
	if(endp_prop((V91))){
	goto T1130;}
	if((car((V91)))==(VV[17])){
	goto T1130;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1132;
T1132:;
	if(endp_prop((V91))){
	goto T1130;}
	if((car((V91)))==(VV[17])){
	goto T1130;}
	if(equal(car((V90)),car((V91)))){
	goto T1130;}
	if(!((car((V90)))==(VV[25]))){
	goto T1146;}
	if((car((V91)))==(VV[24])){
	goto T1130;}
goto T1146;
T1146:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1130;
T1130:;
	if(endp_prop(cdr((V90)))){
	goto T1155;}
	if(!((cadr((V90)))==(VV[17]))){
	goto T1154;}
goto T1155;
T1155:;
	if(endp_prop(cdr((V91)))){
	goto T1159;}
	if(!((cadr((V91)))==(VV[17]))){
	goto T1160;}
goto T1159;
T1159:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1160;
T1160:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1154;
T1154:;
	if(endp_prop(cdr((V91)))){
	goto T1169;}
	if(!((cadr((V91)))==(VV[17]))){
	goto T1168;}
goto T1169;
T1169:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1168;
T1168:;
	base[2]= (*(LnkLI134))(cadr((V90)),cadr((V91)));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1128;
T1128:;
	base[2]= Cnil;
	base[3]= (V93);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1126;
T1126:;
	if(((V92))==Cnil){
	goto T1180;}
	base[2]= (((V88))==((V89))?Ct:Cnil);
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1180;
T1180:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;}}
	}
}
/*	local entry for function SUB-INTERVAL-P	*/

static object LI27(V153,V154)

register object V153;register object V154;
{	 VMB27 VMS27 VMV27
goto TTL;
TTL:;
	{register object V155;
	register object V156;
	register object V157;
	register object V158;
	V155= Cnil;
	V156= Cnil;
	V157= Cnil;
	V158= Cnil;
	if(!(endp_prop((V153)))){
	goto T1188;}
	V155= VV[17];
	V156= VV[17];
	goto T1186;
goto T1188;
T1188:;
	if(!(endp_prop(cdr((V153))))){
	goto T1194;}
	V155= car((V153));
	V156= VV[17];
	goto T1186;
goto T1194;
T1194:;
	V155= car((V153));
	V156= cadr((V153));
goto T1186;
T1186:;
	if(!(endp_prop((V154)))){
	goto T1204;}
	V157= VV[17];
	V158= VV[17];
	goto T1202;
goto T1204;
T1204:;
	if(!(endp_prop(cdr((V154))))){
	goto T1210;}
	V157= car((V154));
	V158= VV[17];
	goto T1202;
goto T1210;
T1210:;
	V157= car((V154));
	V158= cadr((V154));
goto T1202;
T1202:;
	if(!(((V155))==(VV[17]))){
	goto T1220;}
	if(((V157))==(VV[17])){
	goto T1218;}
	{object V159 = Cnil;
	VMR27(V159)}
goto T1220;
T1220:;
	{object V160;
	V160= (((V157))==(VV[17])?Ct:Cnil);
	if(((V160))==Cnil){
	goto T1226;}
	goto T1218;
goto T1226;
T1226:;
	if(!(type_of((V155))==t_cons)){
	goto T1229;}
	if(!(type_of((V157))==t_cons)){
	goto T1232;}
	if(!(number_compare(car((V155)),car((V157)))<0)){
	goto T1218;}
	{object V161 = Cnil;
	VMR27(V161)}
goto T1232;
T1232:;
	if(!(number_compare(car((V155)),(V157))<0)){
	goto T1218;}
	{object V162 = Cnil;
	VMR27(V162)}
goto T1229;
T1229:;
	{object V163;
	if(!(type_of((V157))==t_cons)){
	goto T1240;}
	if(!(number_compare((V155),car((V157)))<=0)){
	goto T1243;}
	{object V164 = Cnil;
	VMR27(V164)}
goto T1243;
T1243:;
	V163= Cnil;
	goto T1238;
goto T1240;
T1240:;
	if(!(number_compare((V155),(V157))<0)){
	goto T1246;}
	{object V165 = Cnil;
	VMR27(V165)}
goto T1246;
T1246:;
	V163= Cnil;
goto T1238;
T1238:;
	if(((V163))==Cnil){
	goto T1218;}}}
goto T1218;
T1218:;
	if(!(((V156))==(VV[17]))){
	goto T1252;}
	if(((V158))==(VV[17])){
	goto T1250;}
	{object V166 = Cnil;
	VMR27(V166)}
goto T1252;
T1252:;
	{object V167;
	V167= (((V158))==(VV[17])?Ct:Cnil);
	if(((V167))==Cnil){
	goto T1258;}
	goto T1250;
goto T1258;
T1258:;
	if(!(type_of((V156))==t_cons)){
	goto T1261;}
	if(!(type_of((V158))==t_cons)){
	goto T1264;}
	if(!(number_compare(car((V156)),car((V158)))>0)){
	goto T1250;}
	{object V168 = Cnil;
	VMR27(V168)}
goto T1264;
T1264:;
	if(!(number_compare(car((V156)),(V158))>0)){
	goto T1250;}
	{object V169 = Cnil;
	VMR27(V169)}
goto T1261;
T1261:;
	{object V170;
	if(!(type_of((V158))==t_cons)){
	goto T1272;}
	if(!(number_compare((V156),car((V158)))>=0)){
	goto T1275;}
	{object V171 = Cnil;
	VMR27(V171)}
goto T1275;
T1275:;
	V170= Cnil;
	goto T1270;
goto T1272;
T1272:;
	if(!(number_compare((V156),(V158))>0)){
	goto T1278;}
	{object V172 = Cnil;
	VMR27(V172)}
goto T1278;
T1278:;
	V170= Cnil;
goto T1270;
T1270:;
	if(((V170))==Cnil){
	goto T1250;}}}
goto T1250;
T1250:;
	{object V173 = Ct;
	VMR27(V173)}}
	return Cnil;
}
/*	local entry for function IN-INTERVAL-P	*/

static object LI28(V176,V177)

register object V176;register object V177;
{	 VMB28 VMS28 VMV28
goto TTL;
TTL:;
	{register object V178;
	register object V179;
	V178= Cnil;
	V179= Cnil;
	if(!(endp_prop((V177)))){
	goto T1284;}
	V178= VV[17];
	V179= VV[17];
	goto T1282;
goto T1284;
T1284:;
	if(!(endp_prop(cdr((V177))))){
	goto T1290;}
	V178= car((V177));
	V179= VV[17];
	goto T1282;
goto T1290;
T1290:;
	V178= car((V177));
	V179= cadr((V177));
goto T1282;
T1282:;
	{object V180;
	V180= (((V178))==(VV[17])?Ct:Cnil);
	if(((V180))==Cnil){
	goto T1301;}
	goto T1298;
goto T1301;
T1301:;
	if(!(type_of((V178))==t_cons)){
	goto T1304;}
	if(!(number_compare((V176),car((V178)))<=0)){
	goto T1298;}
	{object V181 = Cnil;
	VMR28(V181)}
goto T1304;
T1304:;
	{object V182;
	if(!(number_compare((V176),(V178))<0)){
	goto T1310;}
	{object V183 = Cnil;
	VMR28(V183)}
goto T1310;
T1310:;
	V182= Cnil;
	if(((V182))==Cnil){
	goto T1298;}}}
goto T1298;
T1298:;
	{object V184;
	V184= (((V179))==(VV[17])?Ct:Cnil);
	if(((V184))==Cnil){
	goto T1317;}
	goto T1314;
goto T1317;
T1317:;
	if(!(type_of((V179))==t_cons)){
	goto T1320;}
	if(!(number_compare((V176),car((V179)))>=0)){
	goto T1314;}
	{object V185 = Cnil;
	VMR28(V185)}
goto T1320;
T1320:;
	{object V186;
	if(!(number_compare((V176),(V179))>0)){
	goto T1326;}
	{object V187 = Cnil;
	VMR28(V187)}
goto T1326;
T1326:;
	V186= Cnil;
	if(((V186))==Cnil){
	goto T1314;}}}
goto T1314;
T1314:;
	{object V188 = Ct;
	VMR28(V188)}}
	return Cnil;
}
/*	local entry for function MATCH-DIMENSIONS	*/

static object LI29(V191,V192)

object V191;register object V192;
{	 VMB29 VMS29 VMV29
goto TTL;
TTL:;
	if(((V191))!=Cnil){
	goto T1331;}
	{object V193 = (((V192))==Cnil?Ct:Cnil);
	VMR29(V193)}
goto T1331;
T1331:;
	if(!((car((V192)))==(VV[17]))){
	goto T1335;}
	goto T1333;
goto T1335;
T1335:;
	if(eql(car((V191)),car((V192)))){
	goto T1333;}
	{object V194 = Cnil;
	VMR29(V194)}
goto T1333;
T1333:;
	V191= cdr((V191));
	V192= cdr((V192));
	goto TTL;
	return Cnil;
}
/*	local entry for function COERCE	*/

static object LI30(V197,V198)

register object V197;object V198;
{	 VMB30 VMS30 VMV30
goto TTL;
TTL:;
	base[0]= (V197);
	base[1]= (V198);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk125)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1340;}
	{object V199 = (V197);
	VMR30(V199)}
goto T1340;
T1340:;
	base[0]= (V198);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1345;}
	base[0]= VV[110];
	base[1]= VV[111];
	base[2]= (V197);
	base[3]= (V198);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk149)();
	vs_top=sup;
goto T1345;
T1345:;
	V198= (*(LnkLI144))((V198));
	{object V200= car((V198));
	if((V200!= VV[46]))goto T1355;
	{register object V201;
	register object V202;
	V203 = make_fixnum((long)length((V197)));
	V202= one_minus(V203);
	V201= Cnil;
goto T1358;
T1358:;
	if(!(number_compare((V202),small_fixnum(0))<0)){
	goto T1359;}
	{object V204 = (V201);
	VMR30(V204)}
goto T1359;
T1359:;
	V205= elt((V197),fixint((V202)));
	V201= make_cons(/* INLINE-ARGS */V205,(V201));
	V202= one_minus((V202));
	goto T1358;}
goto T1355;
T1355:;
	if((V200!= VV[22])
	&& (V200!= VV[27]))goto T1367;
	if(endp_prop(cdr((V198)))){
	goto T1368;}
	if(endp_prop(cddr((V198)))){
	goto T1368;}
	if((caddr((V198)))==(VV[17])){
	goto T1368;}
	if(endp_prop(cdr(caddr((V198))))){
	goto T1368;}
	base[0]= VV[112];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T1368;
T1368:;
	{register object V206;
	register object V207;
	register object V208;
	V209 = make_fixnum((long)length((V197)));
	V206= (VFUN_NARGS=2,(*(LnkLI150))((V198),V209));
	V208= make_fixnum((long)length((V197)));
	V207= small_fixnum(0);
goto T1381;
T1381:;
	if(!(number_compare((V207),(V208))>=0)){
	goto T1382;}
	{object V210 = (V206);
	VMR30(V210)}
goto T1382;
T1382:;
	V211= elt((V197),fixint((V207)));
	(void)(elt_set((V206),fixint((V207)),/* INLINE-ARGS */V211));
	V207= one_plus((V207));
	goto T1381;}
goto T1367;
T1367:;
	if((V200!= VV[103]))goto T1390;
	base[0]= (V197);
	vs_top=(vs_base=base+0)+1;
	Lcharacter();
	vs_top=sup;
	{object V212 = vs_base[0];
	VMR30(V212)}
goto T1390;
T1390:;
	if((V200!= VV[106]))goto T1392;
	base[0]= (V197);
	vs_top=(vs_base=base+0)+1;
	Lfloat();
	vs_top=sup;
	{object V213 = vs_base[0];
	VMR30(V213)}
goto T1392;
T1392:;
	if((V200!= VV[34]))goto T1394;
	base[0]= (V197);
	base[1]= VV[113];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V214 = vs_base[0];
	VMR30(V214)}
goto T1394;
T1394:;
	if((V200!= VV[130])
	&& (V200!= VV[131])
	&& (V200!= VV[35]))goto T1397;
	base[0]= (V197);
	base[1]= VV[114];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V215 = vs_base[0];
	VMR30(V215)}
goto T1397;
T1397:;
	if((V200!= VV[109]))goto T1400;
	if((cdr((V198)))==Cnil){
	goto T1401;}
	if((cadr((V198)))==Cnil){
	goto T1401;}
	if(!((cadr((V198)))==(VV[17]))){
	goto T1402;}
goto T1401;
T1401:;
	base[1]= (V197);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= (V197);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V216 = vs_base[0];
	VMR30(V216)}
goto T1402;
T1402:;
	base[1]= (V197);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	V217= vs_base[0];
	base[0]= (*(LnkLI151))(V217,cadr((V198)));
	base[2]= (V197);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V218= vs_base[0];
	base[1]= (*(LnkLI151))(V218,cadr((V198)));
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V219 = vs_base[0];
	VMR30(V219)}
goto T1400;
T1400:;
	base[0]= VV[115];
	base[1]= (V197);
	base[2]= (V198);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V220 = vs_base[0];
	VMR30(V220)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WARN-VERSION	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_reserve(VM31);
	{object V221;
	object V222;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V221=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1421;}
	V222=(base[1]);
	vs_top=sup;
	goto T1422;
goto T1421;
T1421:;
	V222= Cnil;
goto T1422;
T1422:;
	if(symbol_value(VV[116])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	if(!(((eql((V221),symbol_value(VV[116]))?Ct:Cnil))==Cnil)){
	goto T1426;}
	goto T1424;
goto T1426;
T1426:;
	if(((eql((V222),symbol_value(VV[117]))?Ct:Cnil))==Cnil){
	goto T1424;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T1424;
T1424:;
	if(symbol_value(VV[118])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	base[2]= Ct;
	base[3]= VV[119];
	base[4]= (V222);
	base[5]= (V221);
	vs_top=(vs_base=base+2)+4;
	Lformat();
	return;
	}
}
static object  LnkTLI151(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[151],(void **)&LnkLI151,2,first,ap);va_end(ap);return V1;} /* COERCE */
static object  LnkTLI150(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[150],(void **)&LnkLI150,first,ap);va_end(ap);return V1;} /* MAKE-SEQUENCE */
static void LnkT149(){ call_or_link(VV[149],(void **)&Lnk149);} /* SPECIFIC-ERROR */
static object  LnkTLI147(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[147],(void **)&LnkLI147,2,first,ap);va_end(ap);return V1;} /* SUB-INTERVAL-P */
static object  LnkTLI146(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[146],(void **)&LnkLI146,1,first,ap);va_end(ap);return V1;} /* KNOWN-TYPE-P */
static void LnkT145(){ call_or_link(VV[145],(void **)&Lnk145);} /* SUBTYPEP */
static object  LnkTLI144(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[144],(void **)&LnkLI144,1,first,ap);va_end(ap);return V1;} /* NORMALIZE-TYPE */
static void LnkT143(){ call_or_link(VV[143],(void **)&Lnk143);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI142(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[142],(void **)&LnkLI142,1,first,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI141(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[141],(void **)&LnkLI141,1,first,ap);va_end(ap);return V1;} /* SIMPLE-ARRAY-P */
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

