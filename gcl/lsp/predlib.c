
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
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk123)();
	vs_top=sup;
	V48= vs_base[0];
	base[2]= ((V48)==((V44))?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T94;
T94:;
	if(!(type_of((V44))!=t_cons)){
	goto T102;}
	V45= (V44);
	V46= Cnil;
	goto T100;
goto T102;
T102:;
	V45= car((V44));
	V46= cdr((V44));
goto T100;
T100:;
	if(!(((V45))==(VV[28]))){
	goto T110;}
	V45= VV[29];
goto T110;
T110:;
	{object V49;
	V49= get((V45),VV[30],Cnil);
	if(((V49))==Cnil){
	goto T114;}
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V49));
	return;}
goto T114;
T114:;
	{object V50= (V45);
	if((V50!= VV[41]))goto T119;
	{register object x= (V43),V51= (V46);
	while(!endp(V51))
	if(eql(x,V51->c.c_car)){
	base[2]= V51;
	vs_top=(vs_base=base+2)+1;
	return;
	}else V51=V51->c.c_cdr;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
goto T119;
T119:;
	if((V50!= VV[44]))goto T120;
	base[2]= (V43);
	base[3]= car((V46));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk124)();
	vs_top=sup;
	V52= vs_base[0];
	base[2]= ((V52)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T120;
T120:;
	if((V50!= VV[42]))goto T124;
	{register object V53;
	V53= (V46);
goto T126;
T126:;
	if(((V53))!=Cnil){
	goto T127;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T127;
T127:;
	base[2]= (V43);
	base[3]= car((V53));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk124)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T131;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T131;
T131:;
	V53= cdr((V53));
	goto T126;}
goto T124;
T124:;
	if((V50!= VV[43]))goto T139;
	{register object V54;
	V54= (V46);
goto T141;
T141:;
	if(((V54))!=Cnil){
	goto T142;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T142;
T142:;
	base[2]= (V43);
	base[3]= car((V54));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk124)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T146;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T146;
T146:;
	V54= cdr((V54));
	goto T141;}
goto T139;
T139:;
	if((V50!= VV[40]))goto T154;
	base[2]= car((V46));
	base[3]= (V43);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event(base[2]);
	return;
goto T154;
T154:;
	if((V50!= Ct))goto T157;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T157;
T157:;
	if((V50!= Cnil))goto T158;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T158;
T158:;
	if((V50!= VV[57]))goto T159;
	if(!(((V43))==(Ct))){
	goto T160;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T160;
T160:;
	base[2]= (((V43))==(Cnil)?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T159;
T159:;
	if((V50!= VV[31]))goto T162;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V55= vs_base[0];
	base[2]= ((V55)==(VV[31])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T162;
T162:;
	if((V50!= VV[32]))goto T165;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V56= vs_base[0];
	base[2]= ((V56)==(VV[32])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T165;
T165:;
	if((V50!= VV[33]))goto T168;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V57= vs_base[0];
	base[2]= ((V57)==(VV[33])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T168;
T168:;
	if((V50!= VV[125]))goto T171;
	if(type_of((V43))==t_character){
	goto T172;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T172;
T172:;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Lstandard_char_p();
	return;
goto T171;
T171:;
	if((V50!= VV[25])
	&& (V50!= VV[24]))goto T175;
	if(type_of((V43))==t_character){
	goto T176;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T176;
T176:;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Lstring_char_p();
	return;
goto T175;
T175:;
	if((V50!= VV[13]))goto T179;
	if(type_of((V43))==t_fixnum||type_of((V43))==t_bignum){
	goto T180;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T180;
T180:;
	base[2]= (*(LnkLI126))((V43),(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T179;
T179:;
	if((V50!= VV[105]))goto T182;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk127)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T183;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T183;
T183:;
	base[2]= (*(LnkLI126))((V43),(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T182;
T182:;
	if((V50!= VV[96]))goto T186;
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
	base[2]= (*(LnkLI126))((V43),(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T186;
T186:;
	if((V50!= VV[106]))goto T190;
	if(type_of((V43))==t_shortfloat||type_of((V43))==t_longfloat){
	goto T191;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T191;
T191:;
	base[2]= (*(LnkLI126))((V43),(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T190;
T190:;
	if((V50!= VV[34]))goto T193;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V58= vs_base[0];
	if((V58)==(VV[34])){
	goto T194;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T194;
T194:;
	base[2]= (*(LnkLI126))((V43),(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T193;
T193:;
	if((V50!= VV[129])
	&& (V50!= VV[130])
	&& (V50!= VV[35]))goto T198;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V59= vs_base[0];
	if((V59)==(VV[35])){
	goto T199;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T199;
T199:;
	base[2]= (*(LnkLI126))((V43),(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T198;
T198:;
	if((V50!= VV[109]))goto T203;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Lcomplexp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T204;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T204;
T204:;
	if(!(((V46))==Cnil)){
	goto T207;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T207;
T207:;
	base[3]= (V43);
	vs_top=(vs_base=base+3)+1;
	Lrealpart();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= car((V46));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk124)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T209;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T209;
T209:;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V43= vs_base[0];
	V44= car((V46));
	goto TTL;
goto T203;
T203:;
	if((V50!= VV[48]))goto T218;
	if(!(type_of((V43))==t_cons||((V43))==Cnil)){
	goto T219;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T219;
T219:;
	base[2]= (type_of((V43))==t_vector||
type_of((V43))==t_string||
type_of((V43))==t_bitvector?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T218;
T218:;
	if((V50!= VV[131])
	&& (V50!= VV[132]))goto T221;
	if(type_of((V43))==t_string){
	goto T222;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T222;
T222:;
	if(!(((V46))==Cnil)){
	goto T224;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T224;
T224:;
	V60= (*(LnkLI134))((V43));
	base[2]= (*(LnkLI133))(/* INLINE-ARGS */V60,(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T221;
T221:;
	if((V50!= VV[135]))goto T226;
	if((type_of((V43))==t_bitvector)){
	goto T227;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T227;
T227:;
	if(!(((V46))==Cnil)){
	goto T229;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T229;
T229:;
	V61= (*(LnkLI134))((V43));
	base[2]= (*(LnkLI133))(/* INLINE-ARGS */V61,(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T226;
T226:;
	if((V50!= VV[136])
	&& (V50!= VV[137]))goto T231;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Lsimple_string_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T232;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T232;
T232:;
	if(!(((V46))==Cnil)){
	goto T235;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T235;
T235:;
	V62= (*(LnkLI134))((V43));
	base[2]= (*(LnkLI133))(/* INLINE-ARGS */V62,(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T231;
T231:;
	if((V50!= VV[138]))goto T237;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Lsimple_bit_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T238;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T238;
T238:;
	if(!(((V46))==Cnil)){
	goto T241;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T241;
T241:;
	V63= (*(LnkLI134))((V43));
	base[2]= (*(LnkLI133))(/* INLINE-ARGS */V63,(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T237;
T237:;
	if((V50!= VV[139]))goto T243;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Lsimple_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T244;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T244;
T244:;
	if(!(((V46))==Cnil)){
	goto T247;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T247;
T247:;
	V64= (*(LnkLI134))((V43));
	base[2]= (*(LnkLI133))(/* INLINE-ARGS */V64,(V46));
	vs_top=(vs_base=base+2)+1;
	return;
goto T243;
T243:;
	if((V50!= VV[27]))goto T249;
	if(((*(LnkLI140))((V43)))!=Cnil){
	goto T250;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T250;
T250:;
	if(!(endp_prop((V46)))){
	goto T254;}
	goto T252;
goto T254;
T254:;
	if(!((car((V46)))==(VV[17]))){
	goto T256;}
	goto T252;
goto T256;
T256:;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V65= vs_base[0];
	V66= (*(LnkLI141))(car((V46)));
	if(equal(V65,/* INLINE-ARGS */V66)){
	goto T252;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T252;
T252:;
	if(!(endp_prop(cdr((V46))))){
	goto T260;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T260;
T260:;
	if(!((cadr((V46)))==(VV[17]))){
	goto T262;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T262;
T262:;
	V67= (*(LnkLI134))((V43));
	base[2]= (*(LnkLI133))(/* INLINE-ARGS */V67,cadr((V46)));
	vs_top=(vs_base=base+2)+1;
	return;
goto T249;
T249:;
	if((V50!= VV[22]))goto T264;
	if(type_of((V43))==t_array||
type_of((V43))==t_vector||
type_of((V43))==t_string||
type_of((V43))==t_bitvector){
	goto T265;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T265;
T265:;
	if(!(endp_prop((V46)))){
	goto T269;}
	goto T267;
goto T269;
T269:;
	if(!((car((V46)))==(VV[17]))){
	goto T271;}
	goto T267;
goto T271;
T271:;
	base[2]= (V43);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V68= vs_base[0];
	V69= (*(LnkLI141))(car((V46)));
	if(equal(V68,/* INLINE-ARGS */V69)){
	goto T267;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T267;
T267:;
	if(!(endp_prop(cdr((V46))))){
	goto T275;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T275;
T275:;
	if(!((cadr((V46)))==(VV[17]))){
	goto T277;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T277;
T277:;
	V70= (*(LnkLI134))((V43));
	base[2]= (*(LnkLI133))(/* INLINE-ARGS */V70,cadr((V46)));
	vs_top=(vs_base=base+2)+1;
	return;
goto T264;
T264:;
	V47= get((V45),VV[36],Cnil);
	if(((V47))==Cnil){
	goto T280;}
	base[2]= (V43);
	base[3]= (V47);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk142)();
	return;
goto T280;
T280:;
	V47= get((V45),VV[37],Cnil);
	if(((V47))==Cnil){
	goto T286;}
	base[2]= (V47);
	{object V71;
	V71= Cnil;
	 vs_top=base+3;
	 while(!endp(V71))
	 {vs_push(car(V71));V71=cdr(V71);}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	vs_top=sup;
	V44= vs_base[0];
	goto TTL;
goto T286;
T286:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	local entry for function NORMALIZE-TYPE	*/

static object LI24(V73)

register object V73;
{	 VMB24 VMS24 VMV24
goto TTL;
TTL:;
	{register object V74;
	register object V75;
	V74= Cnil;
	V75= Cnil;
goto T297;
T297:;
	if(!(type_of((V73))!=t_cons)){
	goto T301;}
	V74= (V73);
	V75= Cnil;
	goto T299;
goto T301;
T301:;
	V74= car((V73));
	V75= cdr((V73));
goto T299;
T299:;
	if((get((V74),VV[37],Cnil))==Cnil){
	goto T310;}
	base[0]= get((V74),VV[37],Cnil);
	{object V76;
	V76= (V75);
	 vs_top=base+1;
	 while(!endp(V76))
	 {vs_push(car(V76));V76=cdr(V76);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V73= vs_base[0];
	goto T298;
goto T310;
T310:;
	if(!(type_of((V73))!=t_cons)){
	goto T316;}
	{object V77 = make_cons((V73),Cnil);
	VMR24(V77)}
goto T316;
T316:;
	{object V78 = (V73);
	VMR24(V78)}
goto T298;
T298:;
	goto T297;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function KNOWN-TYPE-P	*/

static object LI25(V80)

register object V80;
{	 VMB25 VMS25 VMV25
goto TTL;
TTL:;
	if(!(type_of((V80))==t_cons)){
	goto T319;}
	V80= car((V80));
goto T319;
T319:;
	V81= coerce_to_string((V80));
	if(equal(/* INLINE-ARGS */V81,VV[38])){
	goto T323;}
	{register object x= (V80),V82= VV[39];
	while(!endp(V82))
	if(eql(x,V82->c.c_car)){
	goto T323;
	}else V82=V82->c.c_cdr;}
	if((get((V80),VV[36],Cnil))==Cnil){
	goto T324;}
goto T323;
T323:;
	{object V83 = Ct;
	VMR25(V83)}
goto T324;
T324:;
	{object V84 = Cnil;
	VMR25(V84)}
	return Cnil;
}
/*	function definition for SUBTYPEP	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	{object V85;
	object V86;
	check_arg(2);
	V85=(base[0]);
	V86=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V87;
	object V88;
	object V89;
	object V90;
	object V91;
	object V92;
	object V93;
	V87= Cnil;
	V88= Cnil;
	V89= Cnil;
	V90= Cnil;
	V91= Cnil;
	V92= Cnil;
	V93= Cnil;
	{object V94;
	object V95;
	base[2]= (V85);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	V94= vs_base[0];
	base[2]= (V86);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	V95= vs_base[0];
	if(((V94))==Cnil){
	goto T342;}
	if(((V95))==Cnil){
	goto T342;}
	base[2]= (V85);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk143)();
	vs_top=sup;
	V97= vs_base[0];
	{register object x= (V86),V96= V97;
	while(!endp(V96))
	if(eql(x,V96->c.c_car)){
	goto T349;
	}else V96=V96->c.c_cdr;
	goto T348;}
goto T349;
T349:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T348;
T348:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T342;
T342:;
	if(((V94))!=Cnil){
	goto T356;}
	if(((V95))==Cnil){
	goto T337;}
goto T356;
T356:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;}
goto T337;
T337:;
	V87= (*(LnkLI144))((V85));
	if(!((car((V87)))==(VV[40]))){
	goto T367;}
	V85= make_cons((V85),Cnil);
	goto T365;
goto T367;
T367:;
	V85= (V87);
goto T365;
T365:;
	V88= (*(LnkLI144))((V86));
	if(!((car((V88)))==(VV[40]))){
	goto T374;}
	V86= make_cons((V86),Cnil);
	goto T372;
goto T374;
T374:;
	V86= (V88);
goto T372;
T372:;
	if(!(equal((V85),(V86)))){
	goto T376;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T376;
T376:;
	V87= car((V85));
	V88= car((V86));
	V89= cdr((V85));
	V90= cdr((V86));
	if(!(((V87))==(VV[41]))){
	goto T391;}
	{register object V98;
	object V99;
	V98= (V89);
	V99= car((V98));
goto T397;
T397:;
	if(!(endp_prop((V98)))){
	goto T398;}
	goto T393;
goto T398;
T398:;
	base[3]= (V99);
	base[4]= (V86);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk124)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T402;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
goto T402;
T402:;
	V98= cdr((V98));
	V99= car((V98));
	goto T397;}
goto T393;
T393:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T391;
T391:;
	if(!(((V87))==(VV[42]))){
	goto T417;}
	{register object V100;
	object V101;
	V100= (V89);
	V101= car((V100));
goto T423;
T423:;
	if(!(endp_prop((V100)))){
	goto T424;}
	goto T419;
goto T424;
T424:;
	{object V102;
	object V103;
	base[3]= (V101);
	base[4]= (V86);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk145)();
	if(vs_base>=vs_top){vs_top=sup;goto T432;}
	V102= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T433;}
	V103= vs_base[0];
	vs_top=sup;
	goto T434;
goto T432;
T432:;
	V102= Cnil;
goto T433;
T433:;
	V103= Cnil;
goto T434;
T434:;
	if(((V102))!=Cnil){
	goto T428;}
	base[3]= (V102);
	base[4]= (V103);
	vs_top=(vs_base=base+3)+2;
	return;}
goto T428;
T428:;
	V100= cdr((V100));
	V101= car((V100));
	goto T423;}
goto T419;
T419:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T417;
T417:;
	if(!(((V87))==(VV[43]))){
	goto T447;}
	{register object V104;
	object V105;
	V104= (V89);
	V105= car((V104));
goto T453;
T453:;
	if(!(endp_prop((V104)))){
	goto T454;}
	goto T449;
goto T454;
T454:;
	{object V106;
	base[3]= (V105);
	base[4]= (V86);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk145)();
	vs_top=sup;
	V106= vs_base[0];
	if(((V106))==Cnil){
	goto T458;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}
goto T458;
T458:;
	V104= cdr((V104));
	V105= car((V104));
	goto T453;}
goto T449;
T449:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T447;
T447:;
	if(!(((V87))==(VV[44]))){
	goto T389;}
	if(!(((V88))==(VV[44]))){
	goto T476;}
	V85= car((V90));
	V86= car((V89));
	goto TTL;
goto T476;
T476:;
	V85= Ct;
	V86= list(3,VV[42],(V86),car((V89)));
	goto TTL;
goto T389;
T389:;
	if(!(((V88))==(VV[41]))){
	goto T486;}
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T486;
T486:;
	if(!(((V88))==(VV[42]))){
	goto T491;}
	{register object V107;
	object V108;
	V107= (V90);
	V108= car((V107));
goto T497;
T497:;
	if(!(endp_prop((V107)))){
	goto T498;}
	goto T493;
goto T498;
T498:;
	{object V109;
	base[3]= (V85);
	base[4]= (V108);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk145)();
	vs_top=sup;
	V109= vs_base[0];
	if(((V109))==Cnil){
	goto T502;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}
goto T502;
T502:;
	V107= cdr((V107));
	V108= car((V107));
	goto T497;}
goto T493;
T493:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T491;
T491:;
	if(!(((V88))==(VV[43]))){
	goto T518;}
	{register object V110;
	object V111;
	V110= (V90);
	V111= car((V110));
goto T524;
T524:;
	if(!(endp_prop((V110)))){
	goto T525;}
	goto T520;
goto T525;
T525:;
	{object V112;
	object V113;
	base[3]= (V85);
	base[4]= (V111);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk145)();
	if(vs_base>=vs_top){vs_top=sup;goto T533;}
	V112= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T534;}
	V113= vs_base[0];
	vs_top=sup;
	goto T535;
goto T533;
T533:;
	V112= Cnil;
goto T534;
T534:;
	V113= Cnil;
goto T535;
T535:;
	if(((V112))!=Cnil){
	goto T529;}
	base[3]= (V112);
	base[4]= (V113);
	vs_top=(vs_base=base+3)+2;
	return;}
goto T529;
T529:;
	V110= cdr((V110));
	V111= car((V110));
	goto T524;}
goto T520;
T520:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T518;
T518:;
	if(!(((V88))==(VV[44]))){
	goto T484;}
	V85= list(3,VV[43],(V85),car((V90)));
	V86= Cnil;
	goto TTL;
goto T484;
T484:;
	V91= (*(LnkLI146))((V85));
	V92= (*(LnkLI146))((V86));
	if(((V87))==(Cnil)){
	goto T556;}
	if(((V88))==(Ct)){
	goto T556;}
	if(!(((V88))==(VV[45]))){
	goto T557;}
goto T556;
T556:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T557;
T557:;
	if(!(((V88))==(Cnil))){
	goto T566;}
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T566;
T566:;
	if(!(((V87))==(Ct))){
	goto T571;}
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T571;
T571:;
	if(!(((V87))==(VV[45]))){
	goto T576;}
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T576;
T576:;
	if(!(((V88))==(VV[46]))){
	goto T581;}
	{register object x= (V87),V114= VV[47];
	while(!endp(V114))
	if(eql(x,V114->c.c_car)){
	goto T585;
	}else V114=V114->c.c_cdr;
	goto T584;}
goto T585;
T585:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T584;
T584:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T581;
T581:;
	if(!(((V88))==(VV[48]))){
	goto T591;}
	{register object x= (V87),V115= VV[49];
	while(!endp(V115))
	if(eql(x,V115->c.c_car)){
	goto T595;
	}else V115=V115->c.c_cdr;
	goto T594;}
goto T595;
T595:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T594;
T594:;
	if(((V87))==(VV[27])){
	goto T598;}
	if(!(((V87))==(VV[22]))){
	goto T599;}
goto T598;
T598:;
	if((cdr((V89)))==Cnil){
	goto T604;}
	if(!(type_of(cadr((V89)))==t_cons)){
	goto T604;}
	if((cdadr((V89)))!=Cnil){
	goto T604;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T604;
T604:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T599;
T599:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T591;
T591:;
	if(!(((V87))==(VV[46]))){
	goto T617;}
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T617;
T617:;
	if(!(((V87))==(VV[48]))){
	goto T622;}
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T622;
T622:;
	if(!(((V88))==(VV[50]))){
	goto T627;}
	{register object x= (V87),V116= VV[51];
	while(!endp(V116))
	if(eql(x,V116->c.c_car)){
	goto T631;
	}else V116=V116->c.c_cdr;
	goto T630;}
goto T631;
T631:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T630;
T630:;
	if(((V91))==Cnil){
	goto T635;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T635;
T635:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T627;
T627:;
	if(!(((V87))==(VV[50]))){
	goto T642;}
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T642;
T642:;
	if(!(((V88))==(VV[52]))){
	goto T647;}
	{register object x= (V87),V117= VV[53];
	while(!endp(V117))
	if(eql(x,V117->c.c_car)){
	goto T651;
	}else V117=V117->c.c_cdr;
	goto T650;}
goto T651;
T651:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T650;
T650:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T647;
T647:;
	if(!(((V88))==(VV[9]))){
	goto T657;}
	{register object x= (V87),V118= VV[54];
	while(!endp(V118))
	if(eql(x,V118->c.c_car)){
	goto T661;
	}else V118=V118->c.c_cdr;
	goto T660;}
goto T661;
T661:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T660;
T660:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T657;
T657:;
	if(!(((V88))==(VV[55]))){
	goto T667;}
	if(!(((V87))==(VV[56]))){
	goto T670;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T670;
T670:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T667;
T667:;
	if(!(((V88))==(VV[57]))){
	goto T677;}
	if(!(((V87))==(VV[58]))){
	goto T680;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T680;
T680:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T677;
T677:;
	if(!(((V88))==(VV[59]))){
	goto T687;}
	{register object x= (V87),V119= VV[60];
	while(!endp(V119))
	if(eql(x,V119->c.c_car)){
	goto T691;
	}else V119=V119->c.c_cdr;
	goto T690;}
goto T691;
T691:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T690;
T690:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T687;
T687:;
	if(!(((V88))==(VV[61]))){
	goto T697;}
	{register object x= (V87),V120= VV[62];
	while(!endp(V120))
	if(eql(x,V120->c.c_car)){
	goto T701;
	}else V120=V120->c.c_cdr;
	goto T700;}
goto T701;
T701:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T700;
T700:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T697;
T697:;
	if(!(((V88))==(VV[63]))){
	goto T707;}
	V121= coerce_to_string((V87));
	if(equal(/* INLINE-ARGS */V121,VV[64])){
	goto T709;}
	{register object x= (V87),V122= VV[65];
	while(!endp(V122))
	if(eql(x,V122->c.c_car)){
	goto T713;
	}else V122=V122->c.c_cdr;
	goto T710;}
goto T713;
T713:;
goto T709;
T709:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T710;
T710:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T707;
T707:;
	if(!(((V88))==(VV[66]))){
	goto T719;}
	V123= coerce_to_string((V87));
	if(equal(/* INLINE-ARGS */V123,VV[67])){
	goto T721;}
	{register object x= (V87),V124= VV[68];
	while(!endp(V124))
	if(eql(x,V124->c.c_car)){
	goto T725;
	}else V124=V124->c.c_cdr;
	goto T722;}
goto T725;
T725:;
goto T721;
T721:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T722;
T722:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T719;
T719:;
	if(!(((V88))==(VV[69]))){
	goto T731;}
	if(!(((V87))==(VV[70]))){
	goto T734;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T734;
T734:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T731;
T731:;
	if(!(((V88))==(VV[71]))){
	goto T741;}
	if(!(((V87))==(VV[72]))){
	goto T744;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T744;
T744:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T741;
T741:;
	if(!(((V88))==(VV[73]))){
	goto T751;}
	{register object x= (V87),V125= VV[74];
	while(!endp(V125))
	if(eql(x,V125->c.c_car)){
	goto T755;
	}else V125=V125->c.c_cdr;
	goto T754;}
goto T755;
T755:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T754;
T754:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T751;
T751:;
	V126= coerce_to_string((V88));
	if(equal(/* INLINE-ARGS */V126,VV[75])){
	goto T760;}
	if(!(((V88))==(VV[76]))){
	goto T761;}
goto T760;
T760:;
	{register object x= (V87),V127= VV[77];
	while(!endp(V127))
	if(eql(x,V127->c.c_car)){
	goto T767;
	}else V127=V127->c.c_cdr;
	goto T766;}
goto T767;
T767:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T766;
T766:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T761;
T761:;
	if(!(((V88))==(VV[78]))){
	goto T773;}
	{register object x= (V87),V128= VV[79];
	while(!endp(V128))
	if(eql(x,V128->c.c_car)){
	goto T777;
	}else V128=V128->c.c_cdr;
	goto T776;}
goto T777;
T777:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T776;
T776:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T773;
T773:;
	if(!(((V88))==(VV[80]))){
	goto T783;}
	if(!(((V87))==(VV[81]))){
	goto T786;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T786;
T786:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T783;
T783:;
	if(!(((V88))==(VV[82]))){
	goto T793;}
	if(!(((V87))==(VV[83]))){
	goto T796;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T796;
T796:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T793;
T793:;
	if(!(((V88))==(VV[84]))){
	goto T803;}
	{register object x= (V87),V129= VV[85];
	while(!endp(V129))
	if(eql(x,V129->c.c_car)){
	goto T807;
	}else V129=V129->c.c_cdr;
	goto T806;}
goto T807;
T807:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T806;
T806:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T803;
T803:;
	if(!(((V88))==(VV[84]))){
	goto T813;}
	{register object x= (V87),V130= VV[86];
	while(!endp(V130))
	if(eql(x,V130->c.c_car)){
	goto T817;
	}else V130=V130->c.c_cdr;
	goto T816;}
goto T817;
T817:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T816;
T816:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T813;
T813:;
	if(!(((V88))==(VV[87]))){
	goto T823;}
	{register object x= (V87),V131= VV[88];
	while(!endp(V131))
	if(eql(x,V131->c.c_car)){
	goto T827;
	}else V131=V131->c.c_cdr;
	goto T826;}
goto T827;
T827:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T826;
T826:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T823;
T823:;
	if(!(((V88))==(VV[89]))){
	goto T833;}
	{register object x= (V87),V132= VV[90];
	while(!endp(V132))
	if(eql(x,V132->c.c_car)){
	goto T837;
	}else V132=V132->c.c_cdr;
	goto T836;}
goto T837;
T837:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T836;
T836:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T833;
T833:;
	if(!(((V88))==(VV[91]))){
	goto T843;}
	{register object x= (V87),V133= VV[92];
	while(!endp(V133))
	if(eql(x,V133->c.c_car)){
	goto T847;
	}else V133=V133->c.c_cdr;
	goto T846;}
goto T847;
T847:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T846;
T846:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T843;
T843:;
	if(!(((V88))==(VV[93]))){
	goto T853;}
	if(!(((V87))==(VV[93]))){
	goto T856;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T856;
T856:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T853;
T853:;
	if(!(((V88))==(VV[58]))){
	goto T863;}
	if(!(((V87))==(VV[58]))){
	goto T866;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T866;
T866:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T863;
T863:;
	if(!(((V88))==(VV[94]))){
	goto T873;}
	{register object x= (V87),V134= VV[95];
	while(!endp(V134))
	if(eql(x,V134->c.c_car)){
	goto T877;
	}else V134=V134->c.c_cdr;
	goto T876;}
goto T877;
T877:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T876;
T876:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T873;
T873:;
	if(!(((V87))==(VV[94]))){
	goto T883;}
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T883;
T883:;
	if(((V88))==(VV[29])){
	goto T887;}
	if(!(((V88))==(VV[28]))){
	goto T888;}
goto T887;
T887:;
	if(((V87))==(VV[29])){
	goto T892;}
	if((get((V87),VV[36],Cnil))==Cnil){
	goto T893;}
goto T892;
T892:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T893;
T893:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T888;
T888:;
	if(!(((V87))==(VV[29]))){
	goto T902;}
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T902;
T902:;
	V93= get((V87),VV[36],Cnil);
	if(((V93))==Cnil){
	goto T907;}
	{object V135;
	V135= get((V88),VV[36],Cnil);
	if(((V135))==Cnil){
	goto T912;}
	{register object V136;
	V136= (V93);
goto T915;
T915:;
	if(((V136))!=Cnil){
	goto T916;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T916;
T916:;
	if(!(((V136))==(V135))){
	goto T922;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T922;
T922:;
	V136= structure_ref((V136),VV[36],4);
	goto T915;}
goto T912;
T912:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T907;
T907:;
	if(!(((V88))==(VV[96]))){
	goto T933;}
	{register object x= (V87),V138= VV[97];
	while(!endp(V138))
	if(eql(x,V138->c.c_car)){
	goto T938;
	}else V138=V138->c.c_cdr;
	goto T936;}
goto T938;
T938:;
	if(((*(LnkLI147))((V89),(V90)))==Cnil){
	goto T936;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T936;
T936:;
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T933;
T933:;
	if((get((V88),VV[36],Cnil))==Cnil){
	goto T945;}
	base[2]= Cnil;
	base[3]= (V91);
	vs_top=(vs_base=base+2)+2;
	return;
goto T945;
T945:;
	{object V139= (V87);
	if((V139!= VV[32]))goto T949;
	{object V140= (V88);
	if((V140!= VV[32]))goto T950;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T950;
T950:;
	if((V140!= VV[13])
	&& (V140!= VV[105]))goto T953;
	if(((*(LnkLI147))(VV[98],(V90)))==Cnil){
	goto T955;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T955;
T955:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T953;
T953:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T949;
T949:;
	if((V139!= VV[33]))goto T963;
	{object V141= (V88);
	if((V141!= VV[105]))goto T964;
	if(((*(LnkLI147))(VV[99],(V90)))==Cnil){
	goto T966;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T966;
T966:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T964;
T964:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T963;
T963:;
	if((V139!= VV[125]))goto T974;
	{register object x= (V88),V142= VV[100];
	while(!endp(V142))
	if(eql(x,V142->c.c_car)){
	goto T977;
	}else V142=V142->c.c_cdr;
	goto T976;}
goto T977;
T977:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T976;
T976:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T974;
T974:;
	if((V139!= VV[25]))goto T982;
	{register object x= (V88),V143= VV[101];
	while(!endp(V143))
	if(eql(x,V143->c.c_car)){
	goto T985;
	}else V143=V143->c.c_cdr;
	goto T984;}
goto T985;
T985:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T984;
T984:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T982;
T982:;
	if((V139!= VV[148]))goto T990;
	{register object x= (V88),V144= VV[102];
	while(!endp(V144))
	if(eql(x,V144->c.c_car)){
	goto T993;
	}else V144=V144->c.c_cdr;
	goto T992;}
goto T993;
T993:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T992;
T992:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T990;
T990:;
	if((V139!= VV[24]))goto T998;
	if(!(((V88))==(VV[103]))){
	goto T1000;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1000;
T1000:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T998;
T998:;
	if((V139!= VV[103]))goto T1006;
	if(!(((V88))==(VV[24]))){
	goto T1008;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1008;
T1008:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1006;
T1006:;
	if((V139!= VV[13]))goto T1014;
	{register object x= (V88),V145= VV[104];
	while(!endp(V145))
	if(eql(x,V145->c.c_car)){
	goto T1017;
	}else V145=V145->c.c_cdr;
	goto T1016;}
goto T1017;
T1017:;
	base[2]= (*(LnkLI147))((V89),(V90));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1016;
T1016:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1014;
T1014:;
	if((V139!= VV[105]))goto T1022;
	if(!(((V88))==(VV[105]))){
	goto T1024;}
	base[2]= (*(LnkLI147))((V89),(V90));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1024;
T1024:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1022;
T1022:;
	if((V139!= VV[106]))goto T1030;
	if(!(((V88))==(VV[106]))){
	goto T1032;}
	base[2]= (*(LnkLI147))((V89),(V90));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1032;
T1032:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1030;
T1030:;
	if((V139!= VV[34]))goto T1038;
	{register object x= (V88),V146= VV[107];
	while(!endp(V146))
	if(eql(x,V146->c.c_car)){
	goto T1041;
	}else V146=V146->c.c_cdr;
	goto T1040;}
goto T1041;
T1041:;
	base[2]= (*(LnkLI147))((V89),(V90));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1040;
T1040:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1038;
T1038:;
	if((V139!= VV[129])
	&& (V139!= VV[130])
	&& (V139!= VV[35]))goto T1046;
	{register object x= (V88),V147= VV[108];
	while(!endp(V147))
	if(eql(x,V147->c.c_car)){
	goto T1049;
	}else V147=V147->c.c_cdr;
	goto T1048;}
goto T1049;
T1049:;
	base[2]= (*(LnkLI147))((V89),(V90));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1048;
T1048:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1046;
T1046:;
	if((V139!= VV[109]))goto T1054;
	if(!(((V88))==(VV[109]))){
	goto T1056;}{object V148;
	V148= car((V89));
	if(V148==Cnil)goto T1060;
	V85= V148;
	goto T1059;
goto T1060;
T1060:;}
	V85= Ct;
goto T1059;
T1059:;{object V149;
	V149= car((V90));
	if(V149==Cnil)goto T1063;
	V86= V149;
	goto T1062;
goto T1063;
T1063:;}
	V86= Ct;
goto T1062;
T1062:;
	goto TTL;
goto T1056;
T1056:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1054;
T1054:;
	if((V139!= VV[27]))goto T1067;
	if(((V88))==(VV[27])){
	goto T1068;}
	if(!(((V88))==(VV[22]))){
	goto T1069;}
goto T1068;
T1068:;
	if(endp_prop((V89))){
	goto T1074;}
	if(!((car((V89)))==(VV[17]))){
	goto T1075;}
goto T1074;
T1074:;
	if(endp_prop((V90))){
	goto T1073;}
	if((car((V90)))==(VV[17])){
	goto T1073;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1075;
T1075:;
	if(endp_prop((V90))){
	goto T1073;}
	if((car((V90)))==(VV[17])){
	goto T1073;}
	if(equal(car((V89)),car((V90)))){
	goto T1073;}
	if(!((car((V89)))==(VV[25]))){
	goto T1089;}
	if((car((V90)))==(VV[24])){
	goto T1073;}
goto T1089;
T1089:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1073;
T1073:;
	if(endp_prop(cdr((V89)))){
	goto T1098;}
	if(!((cadr((V89)))==(VV[17]))){
	goto T1097;}
goto T1098;
T1098:;
	if(endp_prop(cdr((V90)))){
	goto T1102;}
	if(!((cadr((V90)))==(VV[17]))){
	goto T1103;}
goto T1102;
T1102:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1103;
T1103:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1097;
T1097:;
	if(endp_prop(cdr((V90)))){
	goto T1112;}
	if(!((cadr((V90)))==(VV[17]))){
	goto T1111;}
goto T1112;
T1112:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1111;
T1111:;
	base[2]= (*(LnkLI133))(cadr((V89)),cadr((V90)));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1069;
T1069:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1067;
T1067:;
	if((V139!= VV[22]))goto T1122;
	if(!(((V88))==(VV[22]))){
	goto T1124;}
	if(endp_prop((V89))){
	goto T1127;}
	if(!((car((V89)))==(VV[17]))){
	goto T1128;}
goto T1127;
T1127:;
	if(endp_prop((V90))){
	goto T1126;}
	if((car((V90)))==(VV[17])){
	goto T1126;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1128;
T1128:;
	if(endp_prop((V90))){
	goto T1126;}
	if((car((V90)))==(VV[17])){
	goto T1126;}
	if(equal(car((V89)),car((V90)))){
	goto T1126;}
	if(!((car((V89)))==(VV[25]))){
	goto T1142;}
	if((car((V90)))==(VV[24])){
	goto T1126;}
goto T1142;
T1142:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1126;
T1126:;
	if(endp_prop(cdr((V89)))){
	goto T1151;}
	if(!((cadr((V89)))==(VV[17]))){
	goto T1150;}
goto T1151;
T1151:;
	if(endp_prop(cdr((V90)))){
	goto T1155;}
	if(!((cadr((V90)))==(VV[17]))){
	goto T1156;}
goto T1155;
T1155:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1156;
T1156:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1150;
T1150:;
	if(endp_prop(cdr((V90)))){
	goto T1165;}
	if(!((cadr((V90)))==(VV[17]))){
	goto T1164;}
goto T1165;
T1165:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1164;
T1164:;
	base[2]= (*(LnkLI133))(cadr((V89)),cadr((V90)));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1124;
T1124:;
	base[2]= Cnil;
	base[3]= (V92);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1122;
T1122:;
	if(((V91))==Cnil){
	goto T1176;}
	base[2]= (((V87))==((V88))?Ct:Cnil);
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1176;
T1176:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;}}
	}
}
/*	local entry for function SUB-INTERVAL-P	*/

static object LI27(V152,V153)

register object V152;register object V153;
{	 VMB27 VMS27 VMV27
goto TTL;
TTL:;
	{register object V154;
	register object V155;
	register object V156;
	register object V157;
	V154= Cnil;
	V155= Cnil;
	V156= Cnil;
	V157= Cnil;
	if(!(endp_prop((V152)))){
	goto T1184;}
	V154= VV[17];
	V155= VV[17];
	goto T1182;
goto T1184;
T1184:;
	if(!(endp_prop(cdr((V152))))){
	goto T1190;}
	V154= car((V152));
	V155= VV[17];
	goto T1182;
goto T1190;
T1190:;
	V154= car((V152));
	V155= cadr((V152));
goto T1182;
T1182:;
	if(!(endp_prop((V153)))){
	goto T1200;}
	V156= VV[17];
	V157= VV[17];
	goto T1198;
goto T1200;
T1200:;
	if(!(endp_prop(cdr((V153))))){
	goto T1206;}
	V156= car((V153));
	V157= VV[17];
	goto T1198;
goto T1206;
T1206:;
	V156= car((V153));
	V157= cadr((V153));
goto T1198;
T1198:;
	if(!(((V154))==(VV[17]))){
	goto T1216;}
	if(((V156))==(VV[17])){
	goto T1214;}
	{object V158 = Cnil;
	VMR27(V158)}
goto T1216;
T1216:;
	{object V159;
	V159= (((V156))==(VV[17])?Ct:Cnil);
	if(((V159))==Cnil){
	goto T1222;}
	goto T1214;
goto T1222;
T1222:;
	if(!(type_of((V154))==t_cons)){
	goto T1225;}
	if(!(type_of((V156))==t_cons)){
	goto T1228;}
	if(!(number_compare(car((V154)),car((V156)))<0)){
	goto T1214;}
	{object V160 = Cnil;
	VMR27(V160)}
goto T1228;
T1228:;
	if(!(number_compare(car((V154)),(V156))<0)){
	goto T1214;}
	{object V161 = Cnil;
	VMR27(V161)}
goto T1225;
T1225:;
	{object V162;
	if(!(type_of((V156))==t_cons)){
	goto T1236;}
	if(!(number_compare((V154),car((V156)))<=0)){
	goto T1239;}
	{object V163 = Cnil;
	VMR27(V163)}
goto T1239;
T1239:;
	V162= Cnil;
	goto T1234;
goto T1236;
T1236:;
	if(!(number_compare((V154),(V156))<0)){
	goto T1242;}
	{object V164 = Cnil;
	VMR27(V164)}
goto T1242;
T1242:;
	V162= Cnil;
goto T1234;
T1234:;
	if(((V162))==Cnil){
	goto T1214;}}}
goto T1214;
T1214:;
	if(!(((V155))==(VV[17]))){
	goto T1248;}
	if(((V157))==(VV[17])){
	goto T1246;}
	{object V165 = Cnil;
	VMR27(V165)}
goto T1248;
T1248:;
	{object V166;
	V166= (((V157))==(VV[17])?Ct:Cnil);
	if(((V166))==Cnil){
	goto T1254;}
	goto T1246;
goto T1254;
T1254:;
	if(!(type_of((V155))==t_cons)){
	goto T1257;}
	if(!(type_of((V157))==t_cons)){
	goto T1260;}
	if(!(number_compare(car((V155)),car((V157)))>0)){
	goto T1246;}
	{object V167 = Cnil;
	VMR27(V167)}
goto T1260;
T1260:;
	if(!(number_compare(car((V155)),(V157))>0)){
	goto T1246;}
	{object V168 = Cnil;
	VMR27(V168)}
goto T1257;
T1257:;
	{object V169;
	if(!(type_of((V157))==t_cons)){
	goto T1268;}
	if(!(number_compare((V155),car((V157)))>=0)){
	goto T1271;}
	{object V170 = Cnil;
	VMR27(V170)}
goto T1271;
T1271:;
	V169= Cnil;
	goto T1266;
goto T1268;
T1268:;
	if(!(number_compare((V155),(V157))>0)){
	goto T1274;}
	{object V171 = Cnil;
	VMR27(V171)}
goto T1274;
T1274:;
	V169= Cnil;
goto T1266;
T1266:;
	if(((V169))==Cnil){
	goto T1246;}}}
goto T1246;
T1246:;
	{object V172 = Ct;
	VMR27(V172)}}
	return Cnil;
}
/*	local entry for function IN-INTERVAL-P	*/

static object LI28(V175,V176)

register object V175;register object V176;
{	 VMB28 VMS28 VMV28
goto TTL;
TTL:;
	{register object V177;
	register object V178;
	V177= Cnil;
	V178= Cnil;
	if(!(endp_prop((V176)))){
	goto T1280;}
	V177= VV[17];
	V178= VV[17];
	goto T1278;
goto T1280;
T1280:;
	if(!(endp_prop(cdr((V176))))){
	goto T1286;}
	V177= car((V176));
	V178= VV[17];
	goto T1278;
goto T1286;
T1286:;
	V177= car((V176));
	V178= cadr((V176));
goto T1278;
T1278:;
	{object V179;
	V179= (((V177))==(VV[17])?Ct:Cnil);
	if(((V179))==Cnil){
	goto T1297;}
	goto T1294;
goto T1297;
T1297:;
	if(!(type_of((V177))==t_cons)){
	goto T1300;}
	if(!(number_compare((V175),car((V177)))<=0)){
	goto T1294;}
	{object V180 = Cnil;
	VMR28(V180)}
goto T1300;
T1300:;
	{object V181;
	if(!(number_compare((V175),(V177))<0)){
	goto T1306;}
	{object V182 = Cnil;
	VMR28(V182)}
goto T1306;
T1306:;
	V181= Cnil;
	if(((V181))==Cnil){
	goto T1294;}}}
goto T1294;
T1294:;
	{object V183;
	V183= (((V178))==(VV[17])?Ct:Cnil);
	if(((V183))==Cnil){
	goto T1313;}
	goto T1310;
goto T1313;
T1313:;
	if(!(type_of((V178))==t_cons)){
	goto T1316;}
	if(!(number_compare((V175),car((V178)))>=0)){
	goto T1310;}
	{object V184 = Cnil;
	VMR28(V184)}
goto T1316;
T1316:;
	{object V185;
	if(!(number_compare((V175),(V178))>0)){
	goto T1322;}
	{object V186 = Cnil;
	VMR28(V186)}
goto T1322;
T1322:;
	V185= Cnil;
	if(((V185))==Cnil){
	goto T1310;}}}
goto T1310;
T1310:;
	{object V187 = Ct;
	VMR28(V187)}}
	return Cnil;
}
/*	local entry for function MATCH-DIMENSIONS	*/

static object LI29(V190,V191)

object V190;register object V191;
{	 VMB29 VMS29 VMV29
goto TTL;
TTL:;
	if(((V190))!=Cnil){
	goto T1327;}
	{object V192 = (((V191))==Cnil?Ct:Cnil);
	VMR29(V192)}
goto T1327;
T1327:;
	if(!((car((V191)))==(VV[17]))){
	goto T1331;}
	goto T1329;
goto T1331;
T1331:;
	if(eql(car((V190)),car((V191)))){
	goto T1329;}
	{object V193 = Cnil;
	VMR29(V193)}
goto T1329;
T1329:;
	V190= cdr((V190));
	V191= cdr((V191));
	goto TTL;
	return Cnil;
}
/*	local entry for function COERCE	*/

static object LI30(V196,V197)

register object V196;object V197;
{	 VMB30 VMS30 VMV30
goto TTL;
TTL:;
	base[0]= (V196);
	base[1]= (V197);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk124)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1336;}
	{object V198 = (V196);
	VMR30(V198)}
goto T1336;
T1336:;
	base[0]= (V197);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1341;}
	base[0]= VV[110];
	base[1]= VV[111];
	base[2]= (V196);
	base[3]= (V197);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk149)();
	vs_top=sup;
goto T1341;
T1341:;
	V197= (*(LnkLI144))((V197));
	{object V199= car((V197));
	if((V199!= VV[46]))goto T1351;
	{register object V200;
	register object V201;
	V202 = make_fixnum((long)length((V196)));
	V201= one_minus(V202);
	V200= Cnil;
goto T1354;
T1354:;
	if(!(number_compare((V201),small_fixnum(0))<0)){
	goto T1355;}
	{object V203 = (V200);
	VMR30(V203)}
goto T1355;
T1355:;
	V204= elt((V196),fixint((V201)));
	V200= make_cons(/* INLINE-ARGS */V204,(V200));
	V201= one_minus((V201));
	goto T1354;}
goto T1351;
T1351:;
	if((V199!= VV[22])
	&& (V199!= VV[27]))goto T1363;
	if(endp_prop(cdr((V197)))){
	goto T1364;}
	if(endp_prop(cddr((V197)))){
	goto T1364;}
	if((caddr((V197)))==(VV[17])){
	goto T1364;}
	if(endp_prop(cdr(caddr((V197))))){
	goto T1364;}
	base[0]= VV[112];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T1364;
T1364:;
	{register object V205;
	register object V206;
	register object V207;
	V208 = make_fixnum((long)length((V196)));
	V205= (VFUN_NARGS=2,(*(LnkLI150))((V197),V208));
	V207= make_fixnum((long)length((V196)));
	V206= small_fixnum(0);
goto T1377;
T1377:;
	if(!(number_compare((V206),(V207))>=0)){
	goto T1378;}
	{object V209 = (V205);
	VMR30(V209)}
goto T1378;
T1378:;
	V210= elt((V196),fixint((V206)));
	(void)(elt_set((V205),fixint((V206)),/* INLINE-ARGS */V210));
	V206= one_plus((V206));
	goto T1377;}
goto T1363;
T1363:;
	if((V199!= VV[103]))goto T1386;
	base[0]= (V196);
	vs_top=(vs_base=base+0)+1;
	Lcharacter();
	vs_top=sup;
	{object V211 = vs_base[0];
	VMR30(V211)}
goto T1386;
T1386:;
	if((V199!= VV[106]))goto T1388;
	base[0]= (V196);
	vs_top=(vs_base=base+0)+1;
	Lfloat();
	vs_top=sup;
	{object V212 = vs_base[0];
	VMR30(V212)}
goto T1388;
T1388:;
	if((V199!= VV[34]))goto T1390;
	base[0]= (V196);
	base[1]= VV[113];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V213 = vs_base[0];
	VMR30(V213)}
goto T1390;
T1390:;
	if((V199!= VV[129])
	&& (V199!= VV[130])
	&& (V199!= VV[35]))goto T1393;
	base[0]= (V196);
	base[1]= VV[114];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V214 = vs_base[0];
	VMR30(V214)}
goto T1393;
T1393:;
	if((V199!= VV[109]))goto T1396;
	if((cdr((V197)))==Cnil){
	goto T1397;}
	if((cadr((V197)))==Cnil){
	goto T1397;}
	if(!((cadr((V197)))==(VV[17]))){
	goto T1398;}
goto T1397;
T1397:;
	base[1]= (V196);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= (V196);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V215 = vs_base[0];
	VMR30(V215)}
goto T1398;
T1398:;
	base[1]= (V196);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	V216= vs_base[0];
	base[0]= (*(LnkLI151))(V216,cadr((V197)));
	base[2]= (V196);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V217= vs_base[0];
	base[1]= (*(LnkLI151))(V217,cadr((V197)));
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V218 = vs_base[0];
	VMR30(V218)}
goto T1396;
T1396:;
	base[0]= VV[115];
	base[1]= (V196);
	base[2]= (V197);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V219 = vs_base[0];
	VMR30(V219)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WARN-VERSION	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_reserve(VM31);
	{object V220;
	object V221;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V220=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1417;}
	V221=(base[1]);
	vs_top=sup;
	goto T1418;
goto T1417;
T1417:;
	V221= Cnil;
goto T1418;
T1418:;
	if(symbol_value(VV[116])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	if(!(((eql((V220),symbol_value(VV[116]))?Ct:Cnil))==Cnil)){
	goto T1422;}
	goto T1420;
goto T1422;
T1422:;
	if(((eql((V221),symbol_value(VV[117]))?Ct:Cnil))==Cnil){
	goto T1420;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T1420;
T1420:;
	if(symbol_value(VV[118])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	base[2]= Ct;
	base[3]= VV[119];
	base[4]= (V221);
	base[5]= (V220);
	vs_top=(vs_base=base+2)+4;
	Lformat();
	return;
	}
}
static object  LnkTLI151(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[151],(void **)&LnkLI151,2,ap);va_end(ap);return V1;} /* COERCE */
static object  LnkTLI150(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[150],(void **)&LnkLI150,ap);va_end(ap);return V1;} /* MAKE-SEQUENCE */
static void LnkT149(){ call_or_link(VV[149],(void **)&Lnk149);} /* SPECIFIC-ERROR */
static object  LnkTLI147(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[147],(void **)&LnkLI147,2,ap);va_end(ap);return V1;} /* SUB-INTERVAL-P */
static object  LnkTLI146(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[146],(void **)&LnkLI146,1,ap);va_end(ap);return V1;} /* KNOWN-TYPE-P */
static void LnkT145(){ call_or_link(VV[145],(void **)&Lnk145);} /* SUBTYPEP */
static object  LnkTLI144(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[144],(void **)&LnkLI144,1,ap);va_end(ap);return V1;} /* NORMALIZE-TYPE */
static void LnkT143(){ call_or_link(VV[143],(void **)&Lnk143);} /* CLASS-PRECEDENCE-LIST */
static void LnkT142(){ call_or_link(VV[142],(void **)&Lnk142);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI141(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[141],(void **)&LnkLI141,1,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI140(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[140],(void **)&LnkLI140,1,ap);va_end(ap);return V1;} /* SIMPLE-ARRAY-P */
static object  LnkTLI134(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[134],(void **)&LnkLI134,1,ap);va_end(ap);return V1;} /* ARRAY-DIMENSIONS */
static object  LnkTLI133(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[133],(void **)&LnkLI133,2,ap);va_end(ap);return V1;} /* MATCH-DIMENSIONS */
static void LnkT128(){ call_or_link(VV[128],(void **)&Lnk128);} /* REALP */
static void LnkT127(){ call_or_link(VV[127],(void **)&Lnk127);} /* RATIONALP */
static object  LnkTLI126(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[126],(void **)&LnkLI126,2,ap);va_end(ap);return V1;} /* IN-INTERVAL-P */
static void LnkT124(){ call_or_link(VV[124],(void **)&Lnk124);} /* TYPEP */
static void LnkT123(){ call_or_link(VV[123],(void **)&Lnk123);} /* CLASS-OF */
static void LnkT122(){ call_or_link(VV[122],(void **)&Lnk122);} /* CLASSP */
static void LnkT121(){ call_or_link(VV[121],(void **)&Lnk121);} /* ARRAY-HAS-FILL-POINTER-P */
static object  LnkTLI120(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[120],(void **)&LnkLI120,1,ap);va_end(ap);return V1;} /* FIND-DOCUMENTATION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

