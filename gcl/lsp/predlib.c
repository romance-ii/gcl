
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
	V13= (*(LnkLI118))(base[4]);
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
	(void) (*Lnk119)();
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
/*	function definition for TYPEP	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{register object V40;
	register object V41;
	check_arg(2);
	V40=(base[0]);
	V41=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V42;
	register object V43;
	register object V44;
	V42= Cnil;
	V43= Cnil;
	V44= Cnil;
	if(!(type_of((V41))!=t_cons)){
	goto T96;}
	V42= (V41);
	V43= Cnil;
	goto T94;
goto T96;
T96:;
	V42= car((V41));
	V43= cdr((V41));
goto T94;
T94:;
	if(!(((V42))==(VV[28]))){
	goto T104;}
	V42= VV[29];
goto T104;
T104:;
	{object V45;
	V45= get((V42),VV[30],Cnil);
	if(((V45))==Cnil){
	goto T108;}
	base[2]= (V40);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V45));
	return;}
goto T108;
T108:;
	{object V46= (V42);
	if((V46!= VV[41]))goto T113;
	{register object x= (V40),V47= (V43);
	while(!endp(V47))
	if(eql(x,V47->c.c_car)){
	base[2]= V47;
	vs_top=(vs_base=base+2)+1;
	return;
	}else V47=V47->c.c_cdr;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
goto T113;
T113:;
	if((V46!= VV[44]))goto T114;
	base[2]= (V40);
	base[3]= car((V43));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk120)();
	vs_top=sup;
	V48= vs_base[0];
	base[2]= ((V48)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T114;
T114:;
	if((V46!= VV[42]))goto T118;
	{register object V49;
	V49= (V43);
goto T120;
T120:;
	if(((V49))!=Cnil){
	goto T121;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T121;
T121:;
	base[2]= (V40);
	base[3]= car((V49));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk120)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T125;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T125;
T125:;
	V49= cdr((V49));
	goto T120;}
goto T118;
T118:;
	if((V46!= VV[43]))goto T133;
	{register object V50;
	V50= (V43);
goto T135;
T135:;
	if(((V50))!=Cnil){
	goto T136;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T136;
T136:;
	base[2]= (V40);
	base[3]= car((V50));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk120)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T140;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T140;
T140:;
	V50= cdr((V50));
	goto T135;}
goto T133;
T133:;
	if((V46!= VV[40]))goto T148;
	base[2]= car((V43));
	base[3]= (V40);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event(base[2]);
	return;
goto T148;
T148:;
	if((V46!= Ct))goto T151;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T151;
T151:;
	if((V46!= Cnil))goto T152;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T152;
T152:;
	if((V46!= VV[57]))goto T153;
	if(!(((V40))==(Ct))){
	goto T154;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T154;
T154:;
	base[2]= (((V40))==(Cnil)?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T153;
T153:;
	if((V46!= VV[31]))goto T156;
	base[2]= (V40);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V51= vs_base[0];
	base[2]= ((V51)==(VV[31])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T156;
T156:;
	if((V46!= VV[32]))goto T159;
	base[2]= (V40);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V52= vs_base[0];
	base[2]= ((V52)==(VV[32])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T159;
T159:;
	if((V46!= VV[33]))goto T162;
	base[2]= (V40);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V53= vs_base[0];
	base[2]= ((V53)==(VV[33])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T162;
T162:;
	if((V46!= VV[121]))goto T165;
	if(type_of((V40))==t_character){
	goto T166;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T166;
T166:;
	base[2]= (V40);
	vs_top=(vs_base=base+2)+1;
	Lstandard_char_p();
	return;
goto T165;
T165:;
	if((V46!= VV[25])
	&& (V46!= VV[24]))goto T169;
	if(type_of((V40))==t_character){
	goto T170;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T170;
T170:;
	base[2]= (V40);
	vs_top=(vs_base=base+2)+1;
	Lstring_char_p();
	return;
goto T169;
T169:;
	if((V46!= VV[13]))goto T173;
	if(type_of((V40))==t_fixnum||type_of((V40))==t_bignum){
	goto T174;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T174;
T174:;
	base[2]= (*(LnkLI122))((V40),(V43));
	vs_top=(vs_base=base+2)+1;
	return;
goto T173;
T173:;
	if((V46!= VV[105]))goto T176;
	base[2]= (V40);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk123)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T177;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T177;
T177:;
	base[2]= (*(LnkLI122))((V40),(V43));
	vs_top=(vs_base=base+2)+1;
	return;
goto T176;
T176:;
	if((V46!= VV[96]))goto T180;
	base[2]= (V40);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T181;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T181;
T181:;
	base[2]= (*(LnkLI122))((V40),(V43));
	vs_top=(vs_base=base+2)+1;
	return;
goto T180;
T180:;
	if((V46!= VV[106]))goto T184;
	if(type_of((V40))==t_shortfloat||type_of((V40))==t_longfloat){
	goto T185;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T185;
T185:;
	base[2]= (*(LnkLI122))((V40),(V43));
	vs_top=(vs_base=base+2)+1;
	return;
goto T184;
T184:;
	if((V46!= VV[34]))goto T187;
	base[2]= (V40);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V54= vs_base[0];
	if((V54)==(VV[34])){
	goto T188;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T188;
T188:;
	base[2]= (*(LnkLI122))((V40),(V43));
	vs_top=(vs_base=base+2)+1;
	return;
goto T187;
T187:;
	if((V46!= VV[125])
	&& (V46!= VV[126])
	&& (V46!= VV[35]))goto T192;
	base[2]= (V40);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V55= vs_base[0];
	if((V55)==(VV[35])){
	goto T193;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T193;
T193:;
	base[2]= (*(LnkLI122))((V40),(V43));
	vs_top=(vs_base=base+2)+1;
	return;
goto T192;
T192:;
	if((V46!= VV[109]))goto T197;
	base[2]= (V40);
	vs_top=(vs_base=base+2)+1;
	Lcomplexp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T198;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T198;
T198:;
	if(!(((V43))==Cnil)){
	goto T201;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T201;
T201:;
	base[3]= (V40);
	vs_top=(vs_base=base+3)+1;
	Lrealpart();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= car((V43));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk120)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T203;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T203;
T203:;
	base[2]= (V40);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V40= vs_base[0];
	V41= car((V43));
	goto TTL;
goto T197;
T197:;
	if((V46!= VV[48]))goto T212;
	if(!(type_of((V40))==t_cons||((V40))==Cnil)){
	goto T213;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T213;
T213:;
	base[2]= (type_of((V40))==t_vector||
type_of((V40))==t_string||
type_of((V40))==t_bitvector?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T212;
T212:;
	if((V46!= VV[127])
	&& (V46!= VV[128]))goto T215;
	if(type_of((V40))==t_string){
	goto T216;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T216;
T216:;
	if(!(((V43))==Cnil)){
	goto T218;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T218;
T218:;
	V56= (*(LnkLI130))((V40));
	base[2]= (*(LnkLI129))(/* INLINE-ARGS */V56,(V43));
	vs_top=(vs_base=base+2)+1;
	return;
goto T215;
T215:;
	if((V46!= VV[131]))goto T220;
	if((type_of((V40))==t_bitvector)){
	goto T221;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T221;
T221:;
	if(!(((V43))==Cnil)){
	goto T223;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T223;
T223:;
	V57= (*(LnkLI130))((V40));
	base[2]= (*(LnkLI129))(/* INLINE-ARGS */V57,(V43));
	vs_top=(vs_base=base+2)+1;
	return;
goto T220;
T220:;
	if((V46!= VV[132])
	&& (V46!= VV[133]))goto T225;
	base[2]= (V40);
	vs_top=(vs_base=base+2)+1;
	Lsimple_string_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T226;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T226;
T226:;
	if(!(((V43))==Cnil)){
	goto T229;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T229;
T229:;
	V58= (*(LnkLI130))((V40));
	base[2]= (*(LnkLI129))(/* INLINE-ARGS */V58,(V43));
	vs_top=(vs_base=base+2)+1;
	return;
goto T225;
T225:;
	if((V46!= VV[134]))goto T231;
	base[2]= (V40);
	vs_top=(vs_base=base+2)+1;
	Lsimple_bit_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T232;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T232;
T232:;
	if(!(((V43))==Cnil)){
	goto T235;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T235;
T235:;
	V59= (*(LnkLI130))((V40));
	base[2]= (*(LnkLI129))(/* INLINE-ARGS */V59,(V43));
	vs_top=(vs_base=base+2)+1;
	return;
goto T231;
T231:;
	if((V46!= VV[135]))goto T237;
	base[2]= (V40);
	vs_top=(vs_base=base+2)+1;
	Lsimple_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T238;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T238;
T238:;
	if(!(((V43))==Cnil)){
	goto T241;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T241;
T241:;
	V60= (*(LnkLI130))((V40));
	base[2]= (*(LnkLI129))(/* INLINE-ARGS */V60,(V43));
	vs_top=(vs_base=base+2)+1;
	return;
goto T237;
T237:;
	if((V46!= VV[27]))goto T243;
	if(((*(LnkLI136))((V40)))!=Cnil){
	goto T244;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T244;
T244:;
	if(!(endp_prop((V43)))){
	goto T248;}
	goto T246;
goto T248;
T248:;
	if(!((car((V43)))==(VV[17]))){
	goto T250;}
	goto T246;
goto T250;
T250:;
	base[2]= (V40);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V61= vs_base[0];
	V62= (*(LnkLI137))(car((V43)));
	if(equal(V61,/* INLINE-ARGS */V62)){
	goto T246;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T246;
T246:;
	if(!(endp_prop(cdr((V43))))){
	goto T254;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T254;
T254:;
	if(!((cadr((V43)))==(VV[17]))){
	goto T256;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T256;
T256:;
	V63= (*(LnkLI130))((V40));
	base[2]= (*(LnkLI129))(/* INLINE-ARGS */V63,cadr((V43)));
	vs_top=(vs_base=base+2)+1;
	return;
goto T243;
T243:;
	if((V46!= VV[22]))goto T258;
	if(type_of((V40))==t_array||
type_of((V40))==t_vector||
type_of((V40))==t_string||
type_of((V40))==t_bitvector){
	goto T259;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T259;
T259:;
	if(!(endp_prop((V43)))){
	goto T263;}
	goto T261;
goto T263;
T263:;
	if(!((car((V43)))==(VV[17]))){
	goto T265;}
	goto T261;
goto T265;
T265:;
	base[2]= (V40);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V64= vs_base[0];
	V65= (*(LnkLI137))(car((V43)));
	if(equal(V64,/* INLINE-ARGS */V65)){
	goto T261;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T261;
T261:;
	if(!(endp_prop(cdr((V43))))){
	goto T269;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T269;
T269:;
	if(!((cadr((V43)))==(VV[17]))){
	goto T271;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T271;
T271:;
	V66= (*(LnkLI130))((V40));
	base[2]= (*(LnkLI129))(/* INLINE-ARGS */V66,cadr((V43)));
	vs_top=(vs_base=base+2)+1;
	return;
goto T258;
T258:;
	V44= get((V42),VV[36],Cnil);
	if(((V44))==Cnil){
	goto T274;}
	base[2]= (V40);
	base[3]= (V44);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk138)();
	return;
goto T274;
T274:;
	V44= get((V42),VV[37],Cnil);
	if(((V44))==Cnil){
	goto T280;}
	base[2]= (V44);
	{object V67;
	V67= Cnil;
	 vs_top=base+3;
	 while(!endp(V67))
	 {vs_push(car(V67));V67=cdr(V67);}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	vs_top=sup;
	V41= vs_base[0];
	goto TTL;
goto T280;
T280:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	local entry for function NORMALIZE-TYPE	*/

static object LI21(V69)

register object V69;
{	 VMB21 VMS21 VMV21
goto TTL;
TTL:;
	{register object V70;
	register object V71;
	V70= Cnil;
	V71= Cnil;
goto T291;
T291:;
	if(!(type_of((V69))!=t_cons)){
	goto T295;}
	V70= (V69);
	V71= Cnil;
	goto T293;
goto T295;
T295:;
	V70= car((V69));
	V71= cdr((V69));
goto T293;
T293:;
	if((get((V70),VV[37],Cnil))==Cnil){
	goto T304;}
	base[0]= get((V70),VV[37],Cnil);
	{object V72;
	V72= (V71);
	 vs_top=base+1;
	 while(!endp(V72))
	 {vs_push(car(V72));V72=cdr(V72);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V69= vs_base[0];
	goto T292;
goto T304;
T304:;
	if(!(type_of((V69))!=t_cons)){
	goto T310;}
	{object V73 = make_cons((V69),Cnil);
	VMR21(V73)}
goto T310;
T310:;
	{object V74 = (V69);
	VMR21(V74)}
goto T292;
T292:;
	goto T291;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function KNOWN-TYPE-P	*/

static object LI22(V76)

register object V76;
{	 VMB22 VMS22 VMV22
goto TTL;
TTL:;
	if(!(type_of((V76))==t_cons)){
	goto T313;}
	V76= car((V76));
goto T313;
T313:;
	V77= coerce_to_string((V76));
	if(equal(/* INLINE-ARGS */V77,VV[38])){
	goto T317;}
	{register object x= (V76),V78= VV[39];
	while(!endp(V78))
	if(eql(x,V78->c.c_car)){
	goto T317;
	}else V78=V78->c.c_cdr;}
	if((get((V76),VV[36],Cnil))==Cnil){
	goto T318;}
goto T317;
T317:;
	{object V79 = Ct;
	VMR22(V79)}
goto T318;
T318:;
	{object V80 = Cnil;
	VMR22(V80)}
	return Cnil;
}
/*	function definition for SUBTYPEP	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
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
	object V85;
	object V86;
	object V87;
	object V88;
	object V89;
	V83= Cnil;
	V84= Cnil;
	V85= Cnil;
	V86= Cnil;
	V87= Cnil;
	V88= Cnil;
	V89= Cnil;
	V83= (*(LnkLI139))((V81));
	if(!((car((V83)))==(VV[40]))){
	goto T336;}
	V81= make_cons((V81),Cnil);
	goto T334;
goto T336;
T336:;
	V81= (V83);
goto T334;
T334:;
	V84= (*(LnkLI139))((V82));
	if(!((car((V84)))==(VV[40]))){
	goto T343;}
	V82= make_cons((V82),Cnil);
	goto T341;
goto T343;
T343:;
	V82= (V84);
goto T341;
T341:;
	if(!(equal((V81),(V82)))){
	goto T345;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T345;
T345:;
	V83= car((V81));
	V84= car((V82));
	V85= cdr((V81));
	V86= cdr((V82));
	if(!(((V83))==(VV[41]))){
	goto T360;}
	{register object V90;
	object V91;
	V90= (V85);
	V91= car((V90));
goto T366;
T366:;
	if(!(endp_prop((V90)))){
	goto T367;}
	goto T362;
goto T367;
T367:;
	base[3]= (V91);
	base[4]= (V82);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk120)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T371;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
goto T371;
T371:;
	V90= cdr((V90));
	V91= car((V90));
	goto T366;}
goto T362;
T362:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T360;
T360:;
	if(!(((V83))==(VV[42]))){
	goto T386;}
	{register object V92;
	object V93;
	V92= (V85);
	V93= car((V92));
goto T392;
T392:;
	if(!(endp_prop((V92)))){
	goto T393;}
	goto T388;
goto T393;
T393:;
	{object V94;
	object V95;
	base[3]= (V93);
	base[4]= (V82);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk140)();
	if(vs_base>=vs_top){vs_top=sup;goto T401;}
	V94= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T402;}
	V95= vs_base[0];
	vs_top=sup;
	goto T403;
goto T401;
T401:;
	V94= Cnil;
goto T402;
T402:;
	V95= Cnil;
goto T403;
T403:;
	if(((V94))!=Cnil){
	goto T397;}
	base[3]= (V94);
	base[4]= (V95);
	vs_top=(vs_base=base+3)+2;
	return;}
goto T397;
T397:;
	V92= cdr((V92));
	V93= car((V92));
	goto T392;}
goto T388;
T388:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T386;
T386:;
	if(!(((V83))==(VV[43]))){
	goto T416;}
	{register object V96;
	object V97;
	V96= (V85);
	V97= car((V96));
goto T422;
T422:;
	if(!(endp_prop((V96)))){
	goto T423;}
	goto T418;
goto T423;
T423:;
	{object V98;
	base[3]= (V97);
	base[4]= (V82);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk140)();
	vs_top=sup;
	V98= vs_base[0];
	if(((V98))==Cnil){
	goto T427;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}
goto T427;
T427:;
	V96= cdr((V96));
	V97= car((V96));
	goto T422;}
goto T418;
T418:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T416;
T416:;
	if(!(((V83))==(VV[44]))){
	goto T358;}
	if(!(((V84))==(VV[44]))){
	goto T445;}
	V81= car((V86));
	V82= car((V85));
	goto TTL;
goto T445;
T445:;
	V81= Ct;
	V82= list(3,VV[42],(V82),car((V85)));
	goto TTL;
goto T358;
T358:;
	if(!(((V84))==(VV[41]))){
	goto T455;}
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T455;
T455:;
	if(!(((V84))==(VV[42]))){
	goto T460;}
	{register object V99;
	object V100;
	V99= (V86);
	V100= car((V99));
goto T466;
T466:;
	if(!(endp_prop((V99)))){
	goto T467;}
	goto T462;
goto T467;
T467:;
	{object V101;
	base[3]= (V81);
	base[4]= (V100);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk140)();
	vs_top=sup;
	V101= vs_base[0];
	if(((V101))==Cnil){
	goto T471;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}
goto T471;
T471:;
	V99= cdr((V99));
	V100= car((V99));
	goto T466;}
goto T462;
T462:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T460;
T460:;
	if(!(((V84))==(VV[43]))){
	goto T487;}
	{register object V102;
	object V103;
	V102= (V86);
	V103= car((V102));
goto T493;
T493:;
	if(!(endp_prop((V102)))){
	goto T494;}
	goto T489;
goto T494;
T494:;
	{object V104;
	object V105;
	base[3]= (V81);
	base[4]= (V103);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk140)();
	if(vs_base>=vs_top){vs_top=sup;goto T502;}
	V104= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T503;}
	V105= vs_base[0];
	vs_top=sup;
	goto T504;
goto T502;
T502:;
	V104= Cnil;
goto T503;
T503:;
	V105= Cnil;
goto T504;
T504:;
	if(((V104))!=Cnil){
	goto T498;}
	base[3]= (V104);
	base[4]= (V105);
	vs_top=(vs_base=base+3)+2;
	return;}
goto T498;
T498:;
	V102= cdr((V102));
	V103= car((V102));
	goto T493;}
goto T489;
T489:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T487;
T487:;
	if(!(((V84))==(VV[44]))){
	goto T453;}
	V81= list(3,VV[43],(V81),car((V86)));
	V82= Cnil;
	goto TTL;
goto T453;
T453:;
	V87= (*(LnkLI141))((V81));
	V88= (*(LnkLI141))((V82));
	if(((V83))==(Cnil)){
	goto T525;}
	if(((V84))==(Ct)){
	goto T525;}
	if(!(((V84))==(VV[45]))){
	goto T526;}
goto T525;
T525:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T526;
T526:;
	if(!(((V84))==(Cnil))){
	goto T535;}
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T535;
T535:;
	if(!(((V83))==(Ct))){
	goto T540;}
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T540;
T540:;
	if(!(((V83))==(VV[45]))){
	goto T545;}
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T545;
T545:;
	if(!(((V84))==(VV[46]))){
	goto T550;}
	{register object x= (V83),V106= VV[47];
	while(!endp(V106))
	if(eql(x,V106->c.c_car)){
	goto T554;
	}else V106=V106->c.c_cdr;
	goto T553;}
goto T554;
T554:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T553;
T553:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T550;
T550:;
	if(!(((V84))==(VV[48]))){
	goto T560;}
	{register object x= (V83),V107= VV[49];
	while(!endp(V107))
	if(eql(x,V107->c.c_car)){
	goto T564;
	}else V107=V107->c.c_cdr;
	goto T563;}
goto T564;
T564:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T563;
T563:;
	if(((V83))==(VV[27])){
	goto T567;}
	if(!(((V83))==(VV[22]))){
	goto T568;}
goto T567;
T567:;
	if((cdr((V85)))==Cnil){
	goto T573;}
	if(!(type_of(cadr((V85)))==t_cons)){
	goto T573;}
	if((cdadr((V85)))!=Cnil){
	goto T573;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T573;
T573:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T568;
T568:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T560;
T560:;
	if(!(((V83))==(VV[46]))){
	goto T586;}
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T586;
T586:;
	if(!(((V83))==(VV[48]))){
	goto T591;}
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T591;
T591:;
	if(!(((V84))==(VV[50]))){
	goto T596;}
	{register object x= (V83),V108= VV[51];
	while(!endp(V108))
	if(eql(x,V108->c.c_car)){
	goto T600;
	}else V108=V108->c.c_cdr;
	goto T599;}
goto T600;
T600:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T599;
T599:;
	if(((V87))==Cnil){
	goto T604;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T604;
T604:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T596;
T596:;
	if(!(((V83))==(VV[50]))){
	goto T611;}
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T611;
T611:;
	if(!(((V84))==(VV[52]))){
	goto T616;}
	{register object x= (V83),V109= VV[53];
	while(!endp(V109))
	if(eql(x,V109->c.c_car)){
	goto T620;
	}else V109=V109->c.c_cdr;
	goto T619;}
goto T620;
T620:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T619;
T619:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T616;
T616:;
	if(!(((V84))==(VV[9]))){
	goto T626;}
	{register object x= (V83),V110= VV[54];
	while(!endp(V110))
	if(eql(x,V110->c.c_car)){
	goto T630;
	}else V110=V110->c.c_cdr;
	goto T629;}
goto T630;
T630:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T629;
T629:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T626;
T626:;
	if(!(((V84))==(VV[55]))){
	goto T636;}
	if(!(((V83))==(VV[56]))){
	goto T639;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T639;
T639:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T636;
T636:;
	if(!(((V84))==(VV[57]))){
	goto T646;}
	if(!(((V83))==(VV[58]))){
	goto T649;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T649;
T649:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T646;
T646:;
	if(!(((V84))==(VV[59]))){
	goto T656;}
	{register object x= (V83),V111= VV[60];
	while(!endp(V111))
	if(eql(x,V111->c.c_car)){
	goto T660;
	}else V111=V111->c.c_cdr;
	goto T659;}
goto T660;
T660:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T659;
T659:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T656;
T656:;
	if(!(((V84))==(VV[61]))){
	goto T666;}
	{register object x= (V83),V112= VV[62];
	while(!endp(V112))
	if(eql(x,V112->c.c_car)){
	goto T670;
	}else V112=V112->c.c_cdr;
	goto T669;}
goto T670;
T670:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T669;
T669:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T666;
T666:;
	if(!(((V84))==(VV[63]))){
	goto T676;}
	V113= coerce_to_string((V83));
	if(equal(/* INLINE-ARGS */V113,VV[64])){
	goto T678;}
	{register object x= (V83),V114= VV[65];
	while(!endp(V114))
	if(eql(x,V114->c.c_car)){
	goto T682;
	}else V114=V114->c.c_cdr;
	goto T679;}
goto T682;
T682:;
goto T678;
T678:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T679;
T679:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T676;
T676:;
	if(!(((V84))==(VV[66]))){
	goto T688;}
	V115= coerce_to_string((V83));
	if(equal(/* INLINE-ARGS */V115,VV[67])){
	goto T690;}
	{register object x= (V83),V116= VV[68];
	while(!endp(V116))
	if(eql(x,V116->c.c_car)){
	goto T694;
	}else V116=V116->c.c_cdr;
	goto T691;}
goto T694;
T694:;
goto T690;
T690:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T691;
T691:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T688;
T688:;
	if(!(((V84))==(VV[69]))){
	goto T700;}
	if(!(((V83))==(VV[70]))){
	goto T703;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T703;
T703:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T700;
T700:;
	if(!(((V84))==(VV[71]))){
	goto T710;}
	if(!(((V83))==(VV[72]))){
	goto T713;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T713;
T713:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T710;
T710:;
	if(!(((V84))==(VV[73]))){
	goto T720;}
	{register object x= (V83),V117= VV[74];
	while(!endp(V117))
	if(eql(x,V117->c.c_car)){
	goto T724;
	}else V117=V117->c.c_cdr;
	goto T723;}
goto T724;
T724:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T723;
T723:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T720;
T720:;
	V118= coerce_to_string((V84));
	if(equal(/* INLINE-ARGS */V118,VV[75])){
	goto T729;}
	if(!(((V84))==(VV[76]))){
	goto T730;}
goto T729;
T729:;
	{register object x= (V83),V119= VV[77];
	while(!endp(V119))
	if(eql(x,V119->c.c_car)){
	goto T736;
	}else V119=V119->c.c_cdr;
	goto T735;}
goto T736;
T736:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T735;
T735:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T730;
T730:;
	if(!(((V84))==(VV[78]))){
	goto T742;}
	{register object x= (V83),V120= VV[79];
	while(!endp(V120))
	if(eql(x,V120->c.c_car)){
	goto T746;
	}else V120=V120->c.c_cdr;
	goto T745;}
goto T746;
T746:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T745;
T745:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T742;
T742:;
	if(!(((V84))==(VV[80]))){
	goto T752;}
	if(!(((V83))==(VV[81]))){
	goto T755;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T755;
T755:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T752;
T752:;
	if(!(((V84))==(VV[82]))){
	goto T762;}
	if(!(((V83))==(VV[83]))){
	goto T765;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T765;
T765:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T762;
T762:;
	if(!(((V84))==(VV[84]))){
	goto T772;}
	{register object x= (V83),V121= VV[85];
	while(!endp(V121))
	if(eql(x,V121->c.c_car)){
	goto T776;
	}else V121=V121->c.c_cdr;
	goto T775;}
goto T776;
T776:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T775;
T775:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T772;
T772:;
	if(!(((V84))==(VV[84]))){
	goto T782;}
	{register object x= (V83),V122= VV[86];
	while(!endp(V122))
	if(eql(x,V122->c.c_car)){
	goto T786;
	}else V122=V122->c.c_cdr;
	goto T785;}
goto T786;
T786:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T785;
T785:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T782;
T782:;
	if(!(((V84))==(VV[87]))){
	goto T792;}
	{register object x= (V83),V123= VV[88];
	while(!endp(V123))
	if(eql(x,V123->c.c_car)){
	goto T796;
	}else V123=V123->c.c_cdr;
	goto T795;}
goto T796;
T796:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T795;
T795:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T792;
T792:;
	if(!(((V84))==(VV[89]))){
	goto T802;}
	{register object x= (V83),V124= VV[90];
	while(!endp(V124))
	if(eql(x,V124->c.c_car)){
	goto T806;
	}else V124=V124->c.c_cdr;
	goto T805;}
goto T806;
T806:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T805;
T805:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T802;
T802:;
	if(!(((V84))==(VV[91]))){
	goto T812;}
	{register object x= (V83),V125= VV[92];
	while(!endp(V125))
	if(eql(x,V125->c.c_car)){
	goto T816;
	}else V125=V125->c.c_cdr;
	goto T815;}
goto T816;
T816:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T815;
T815:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T812;
T812:;
	if(!(((V84))==(VV[93]))){
	goto T822;}
	if(!(((V83))==(VV[93]))){
	goto T825;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T825;
T825:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T822;
T822:;
	if(!(((V84))==(VV[58]))){
	goto T832;}
	if(!(((V83))==(VV[58]))){
	goto T835;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T835;
T835:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T832;
T832:;
	if(!(((V84))==(VV[94]))){
	goto T842;}
	{register object x= (V83),V126= VV[95];
	while(!endp(V126))
	if(eql(x,V126->c.c_car)){
	goto T846;
	}else V126=V126->c.c_cdr;
	goto T845;}
goto T846;
T846:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T845;
T845:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T842;
T842:;
	if(!(((V83))==(VV[94]))){
	goto T852;}
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T852;
T852:;
	if(((V84))==(VV[29])){
	goto T856;}
	if(!(((V84))==(VV[28]))){
	goto T857;}
goto T856;
T856:;
	if(((V83))==(VV[29])){
	goto T861;}
	if((get((V83),VV[36],Cnil))==Cnil){
	goto T862;}
goto T861;
T861:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T862;
T862:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T857;
T857:;
	if(!(((V83))==(VV[29]))){
	goto T871;}
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T871;
T871:;
	V89= get((V83),VV[36],Cnil);
	if(((V89))==Cnil){
	goto T876;}
	{object V127;
	V127= get((V84),VV[36],Cnil);
	if(((V127))==Cnil){
	goto T881;}
	{register object V128;
	V128= (V89);
goto T884;
T884:;
	if(((V128))!=Cnil){
	goto T885;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T885;
T885:;
	if(!(((V128))==(V127))){
	goto T891;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T891;
T891:;
	V128= structure_ref((V128),VV[36],4);
	goto T884;}
goto T881;
T881:;
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T876;
T876:;
	if(!(((V84))==(VV[96]))){
	goto T902;}
	{register object x= (V83),V130= VV[97];
	while(!endp(V130))
	if(eql(x,V130->c.c_car)){
	goto T907;
	}else V130=V130->c.c_cdr;
	goto T905;}
goto T907;
T907:;
	if(((*(LnkLI142))((V85),(V86)))==Cnil){
	goto T905;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T905;
T905:;
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T902;
T902:;
	if((get((V84),VV[36],Cnil))==Cnil){
	goto T914;}
	base[2]= Cnil;
	base[3]= (V87);
	vs_top=(vs_base=base+2)+2;
	return;
goto T914;
T914:;
	{object V131= (V83);
	if((V131!= VV[32]))goto T918;
	{object V132= (V84);
	if((V132!= VV[32]))goto T919;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T919;
T919:;
	if((V132!= VV[13])
	&& (V132!= VV[105]))goto T922;
	if(((*(LnkLI142))(VV[98],(V86)))==Cnil){
	goto T924;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T924;
T924:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T922;
T922:;
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T918;
T918:;
	if((V131!= VV[33]))goto T932;
	{object V133= (V84);
	if((V133!= VV[105]))goto T933;
	if(((*(LnkLI142))(VV[99],(V86)))==Cnil){
	goto T935;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T935;
T935:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T933;
T933:;
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T932;
T932:;
	if((V131!= VV[121]))goto T943;
	{register object x= (V84),V134= VV[100];
	while(!endp(V134))
	if(eql(x,V134->c.c_car)){
	goto T946;
	}else V134=V134->c.c_cdr;
	goto T945;}
goto T946;
T946:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T945;
T945:;
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T943;
T943:;
	if((V131!= VV[25]))goto T951;
	{register object x= (V84),V135= VV[101];
	while(!endp(V135))
	if(eql(x,V135->c.c_car)){
	goto T954;
	}else V135=V135->c.c_cdr;
	goto T953;}
goto T954;
T954:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T953;
T953:;
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T951;
T951:;
	if((V131!= VV[143]))goto T959;
	{register object x= (V84),V136= VV[102];
	while(!endp(V136))
	if(eql(x,V136->c.c_car)){
	goto T962;
	}else V136=V136->c.c_cdr;
	goto T961;}
goto T962;
T962:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T961;
T961:;
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T959;
T959:;
	if((V131!= VV[24]))goto T967;
	if(!(((V84))==(VV[103]))){
	goto T969;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T969;
T969:;
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T967;
T967:;
	if((V131!= VV[103]))goto T975;
	if(!(((V84))==(VV[24]))){
	goto T977;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T977;
T977:;
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T975;
T975:;
	if((V131!= VV[13]))goto T983;
	{register object x= (V84),V137= VV[104];
	while(!endp(V137))
	if(eql(x,V137->c.c_car)){
	goto T986;
	}else V137=V137->c.c_cdr;
	goto T985;}
goto T986;
T986:;
	base[2]= (*(LnkLI142))((V85),(V86));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T985;
T985:;
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T983;
T983:;
	if((V131!= VV[105]))goto T991;
	if(!(((V84))==(VV[105]))){
	goto T993;}
	base[2]= (*(LnkLI142))((V85),(V86));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T993;
T993:;
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T991;
T991:;
	if((V131!= VV[106]))goto T999;
	if(!(((V84))==(VV[106]))){
	goto T1001;}
	base[2]= (*(LnkLI142))((V85),(V86));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1001;
T1001:;
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T999;
T999:;
	if((V131!= VV[34]))goto T1007;
	{register object x= (V84),V138= VV[107];
	while(!endp(V138))
	if(eql(x,V138->c.c_car)){
	goto T1010;
	}else V138=V138->c.c_cdr;
	goto T1009;}
goto T1010;
T1010:;
	base[2]= (*(LnkLI142))((V85),(V86));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1009;
T1009:;
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1007;
T1007:;
	if((V131!= VV[125])
	&& (V131!= VV[126])
	&& (V131!= VV[35]))goto T1015;
	{register object x= (V84),V139= VV[108];
	while(!endp(V139))
	if(eql(x,V139->c.c_car)){
	goto T1018;
	}else V139=V139->c.c_cdr;
	goto T1017;}
goto T1018;
T1018:;
	base[2]= (*(LnkLI142))((V85),(V86));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1017;
T1017:;
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1015;
T1015:;
	if((V131!= VV[109]))goto T1023;
	if(!(((V84))==(VV[109]))){
	goto T1025;}{object V140;
	V140= car((V85));
	if(V140==Cnil)goto T1029;
	V81= V140;
	goto T1028;
goto T1029;
T1029:;}
	V81= Ct;
goto T1028;
T1028:;{object V141;
	V141= car((V86));
	if(V141==Cnil)goto T1032;
	V82= V141;
	goto T1031;
goto T1032;
T1032:;}
	V82= Ct;
goto T1031;
T1031:;
	goto TTL;
goto T1025;
T1025:;
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1023;
T1023:;
	if((V131!= VV[27]))goto T1036;
	if(((V84))==(VV[27])){
	goto T1037;}
	if(!(((V84))==(VV[22]))){
	goto T1038;}
goto T1037;
T1037:;
	if(endp_prop((V85))){
	goto T1043;}
	if(!((car((V85)))==(VV[17]))){
	goto T1044;}
goto T1043;
T1043:;
	if(endp_prop((V86))){
	goto T1042;}
	if((car((V86)))==(VV[17])){
	goto T1042;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1044;
T1044:;
	if(endp_prop((V86))){
	goto T1042;}
	if((car((V86)))==(VV[17])){
	goto T1042;}
	if(equal(car((V85)),car((V86)))){
	goto T1042;}
	if(!((car((V85)))==(VV[25]))){
	goto T1058;}
	if((car((V86)))==(VV[24])){
	goto T1042;}
goto T1058;
T1058:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1042;
T1042:;
	if(endp_prop(cdr((V85)))){
	goto T1067;}
	if(!((cadr((V85)))==(VV[17]))){
	goto T1066;}
goto T1067;
T1067:;
	if(endp_prop(cdr((V86)))){
	goto T1071;}
	if(!((cadr((V86)))==(VV[17]))){
	goto T1072;}
goto T1071;
T1071:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1072;
T1072:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1066;
T1066:;
	if(endp_prop(cdr((V86)))){
	goto T1081;}
	if(!((cadr((V86)))==(VV[17]))){
	goto T1080;}
goto T1081;
T1081:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1080;
T1080:;
	base[2]= (*(LnkLI129))(cadr((V85)),cadr((V86)));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1038;
T1038:;
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1036;
T1036:;
	if((V131!= VV[22]))goto T1091;
	if(!(((V84))==(VV[22]))){
	goto T1093;}
	if(endp_prop((V85))){
	goto T1096;}
	if(!((car((V85)))==(VV[17]))){
	goto T1097;}
goto T1096;
T1096:;
	if(endp_prop((V86))){
	goto T1095;}
	if((car((V86)))==(VV[17])){
	goto T1095;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1097;
T1097:;
	if(endp_prop((V86))){
	goto T1095;}
	if((car((V86)))==(VV[17])){
	goto T1095;}
	if(equal(car((V85)),car((V86)))){
	goto T1095;}
	if(!((car((V85)))==(VV[25]))){
	goto T1111;}
	if((car((V86)))==(VV[24])){
	goto T1095;}
goto T1111;
T1111:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1095;
T1095:;
	if(endp_prop(cdr((V85)))){
	goto T1120;}
	if(!((cadr((V85)))==(VV[17]))){
	goto T1119;}
goto T1120;
T1120:;
	if(endp_prop(cdr((V86)))){
	goto T1124;}
	if(!((cadr((V86)))==(VV[17]))){
	goto T1125;}
goto T1124;
T1124:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1125;
T1125:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1119;
T1119:;
	if(endp_prop(cdr((V86)))){
	goto T1134;}
	if(!((cadr((V86)))==(VV[17]))){
	goto T1133;}
goto T1134;
T1134:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1133;
T1133:;
	base[2]= (*(LnkLI129))(cadr((V85)),cadr((V86)));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1093;
T1093:;
	base[2]= Cnil;
	base[3]= (V88);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1091;
T1091:;
	if(((V87))==Cnil){
	goto T1145;}
	base[2]= (((V83))==((V84))?Ct:Cnil);
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1145;
T1145:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;}}
	}
}
/*	local entry for function SUB-INTERVAL-P	*/

static object LI24(V144,V145)

register object V144;register object V145;
{	 VMB24 VMS24 VMV24
goto TTL;
TTL:;
	{register object V146;
	register object V147;
	register object V148;
	register object V149;
	V146= Cnil;
	V147= Cnil;
	V148= Cnil;
	V149= Cnil;
	if(!(endp_prop((V144)))){
	goto T1153;}
	V146= VV[17];
	V147= VV[17];
	goto T1151;
goto T1153;
T1153:;
	if(!(endp_prop(cdr((V144))))){
	goto T1159;}
	V146= car((V144));
	V147= VV[17];
	goto T1151;
goto T1159;
T1159:;
	V146= car((V144));
	V147= cadr((V144));
goto T1151;
T1151:;
	if(!(endp_prop((V145)))){
	goto T1169;}
	V148= VV[17];
	V149= VV[17];
	goto T1167;
goto T1169;
T1169:;
	if(!(endp_prop(cdr((V145))))){
	goto T1175;}
	V148= car((V145));
	V149= VV[17];
	goto T1167;
goto T1175;
T1175:;
	V148= car((V145));
	V149= cadr((V145));
goto T1167;
T1167:;
	if(!(((V146))==(VV[17]))){
	goto T1185;}
	if(((V148))==(VV[17])){
	goto T1183;}
	{object V150 = Cnil;
	VMR24(V150)}
goto T1185;
T1185:;
	{object V151;
	V151= (((V148))==(VV[17])?Ct:Cnil);
	if(((V151))==Cnil){
	goto T1191;}
	goto T1183;
goto T1191;
T1191:;
	if(!(type_of((V146))==t_cons)){
	goto T1194;}
	if(!(type_of((V148))==t_cons)){
	goto T1197;}
	if(!(number_compare(car((V146)),car((V148)))<0)){
	goto T1183;}
	{object V152 = Cnil;
	VMR24(V152)}
goto T1197;
T1197:;
	if(!(number_compare(car((V146)),(V148))<0)){
	goto T1183;}
	{object V153 = Cnil;
	VMR24(V153)}
goto T1194;
T1194:;
	{object V154;
	if(!(type_of((V148))==t_cons)){
	goto T1205;}
	if(!(number_compare((V146),car((V148)))<=0)){
	goto T1208;}
	{object V155 = Cnil;
	VMR24(V155)}
goto T1208;
T1208:;
	V154= Cnil;
	goto T1203;
goto T1205;
T1205:;
	if(!(number_compare((V146),(V148))<0)){
	goto T1211;}
	{object V156 = Cnil;
	VMR24(V156)}
goto T1211;
T1211:;
	V154= Cnil;
goto T1203;
T1203:;
	if(((V154))==Cnil){
	goto T1183;}}}
goto T1183;
T1183:;
	if(!(((V147))==(VV[17]))){
	goto T1217;}
	if(((V149))==(VV[17])){
	goto T1215;}
	{object V157 = Cnil;
	VMR24(V157)}
goto T1217;
T1217:;
	{object V158;
	V158= (((V149))==(VV[17])?Ct:Cnil);
	if(((V158))==Cnil){
	goto T1223;}
	goto T1215;
goto T1223;
T1223:;
	if(!(type_of((V147))==t_cons)){
	goto T1226;}
	if(!(type_of((V149))==t_cons)){
	goto T1229;}
	if(!(number_compare(car((V147)),car((V149)))>0)){
	goto T1215;}
	{object V159 = Cnil;
	VMR24(V159)}
goto T1229;
T1229:;
	if(!(number_compare(car((V147)),(V149))>0)){
	goto T1215;}
	{object V160 = Cnil;
	VMR24(V160)}
goto T1226;
T1226:;
	{object V161;
	if(!(type_of((V149))==t_cons)){
	goto T1237;}
	if(!(number_compare((V147),car((V149)))>=0)){
	goto T1240;}
	{object V162 = Cnil;
	VMR24(V162)}
goto T1240;
T1240:;
	V161= Cnil;
	goto T1235;
goto T1237;
T1237:;
	if(!(number_compare((V147),(V149))>0)){
	goto T1243;}
	{object V163 = Cnil;
	VMR24(V163)}
goto T1243;
T1243:;
	V161= Cnil;
goto T1235;
T1235:;
	if(((V161))==Cnil){
	goto T1215;}}}
goto T1215;
T1215:;
	{object V164 = Ct;
	VMR24(V164)}}
	return Cnil;
}
/*	local entry for function IN-INTERVAL-P	*/

static object LI25(V167,V168)

register object V167;register object V168;
{	 VMB25 VMS25 VMV25
goto TTL;
TTL:;
	{register object V169;
	register object V170;
	V169= Cnil;
	V170= Cnil;
	if(!(endp_prop((V168)))){
	goto T1249;}
	V169= VV[17];
	V170= VV[17];
	goto T1247;
goto T1249;
T1249:;
	if(!(endp_prop(cdr((V168))))){
	goto T1255;}
	V169= car((V168));
	V170= VV[17];
	goto T1247;
goto T1255;
T1255:;
	V169= car((V168));
	V170= cadr((V168));
goto T1247;
T1247:;
	{object V171;
	V171= (((V169))==(VV[17])?Ct:Cnil);
	if(((V171))==Cnil){
	goto T1266;}
	goto T1263;
goto T1266;
T1266:;
	if(!(type_of((V169))==t_cons)){
	goto T1269;}
	if(!(number_compare((V167),car((V169)))<=0)){
	goto T1263;}
	{object V172 = Cnil;
	VMR25(V172)}
goto T1269;
T1269:;
	{object V173;
	if(!(number_compare((V167),(V169))<0)){
	goto T1275;}
	{object V174 = Cnil;
	VMR25(V174)}
goto T1275;
T1275:;
	V173= Cnil;
	if(((V173))==Cnil){
	goto T1263;}}}
goto T1263;
T1263:;
	{object V175;
	V175= (((V170))==(VV[17])?Ct:Cnil);
	if(((V175))==Cnil){
	goto T1282;}
	goto T1279;
goto T1282;
T1282:;
	if(!(type_of((V170))==t_cons)){
	goto T1285;}
	if(!(number_compare((V167),car((V170)))>=0)){
	goto T1279;}
	{object V176 = Cnil;
	VMR25(V176)}
goto T1285;
T1285:;
	{object V177;
	if(!(number_compare((V167),(V170))>0)){
	goto T1291;}
	{object V178 = Cnil;
	VMR25(V178)}
goto T1291;
T1291:;
	V177= Cnil;
	if(((V177))==Cnil){
	goto T1279;}}}
goto T1279;
T1279:;
	{object V179 = Ct;
	VMR25(V179)}}
	return Cnil;
}
/*	local entry for function MATCH-DIMENSIONS	*/

static object LI26(V182,V183)

object V182;register object V183;
{	 VMB26 VMS26 VMV26
goto TTL;
TTL:;
	if(((V182))!=Cnil){
	goto T1296;}
	{object V184 = (((V183))==Cnil?Ct:Cnil);
	VMR26(V184)}
goto T1296;
T1296:;
	if(!((car((V183)))==(VV[17]))){
	goto T1300;}
	goto T1298;
goto T1300;
T1300:;
	if(eql(car((V182)),car((V183)))){
	goto T1298;}
	{object V185 = Cnil;
	VMR26(V185)}
goto T1298;
T1298:;
	V182= cdr((V182));
	V183= cdr((V183));
	goto TTL;
	return Cnil;
}
/*	local entry for function COERCE	*/

static object LI27(V188,V189)

register object V188;object V189;
{	 VMB27 VMS27 VMV27
goto TTL;
TTL:;
	base[0]= (V188);
	base[1]= (V189);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk120)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1305;}
	{object V190 = (V188);
	VMR27(V190)}
goto T1305;
T1305:;
	V189= (*(LnkLI139))((V189));
	{object V191= car((V189));
	if((V191!= VV[46]))goto T1312;
	{register object V192;
	register object V193;
	V194 = make_fixnum((long)length((V188)));
	V193= one_minus(V194);
	V192= Cnil;
goto T1315;
T1315:;
	if(!(number_compare((V193),small_fixnum(0))<0)){
	goto T1316;}
	{object V195 = (V192);
	VMR27(V195)}
goto T1316;
T1316:;
	V196= elt((V188),fixint((V193)));
	V192= make_cons(/* INLINE-ARGS */V196,(V192));
	V193= one_minus((V193));
	goto T1315;}
goto T1312;
T1312:;
	if((V191!= VV[22])
	&& (V191!= VV[27]))goto T1324;
	if(endp_prop(cdr((V189)))){
	goto T1325;}
	if(endp_prop(cddr((V189)))){
	goto T1325;}
	if((caddr((V189)))==(VV[17])){
	goto T1325;}
	if(endp_prop(cdr(caddr((V189))))){
	goto T1325;}
	base[0]= VV[110];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T1325;
T1325:;
	{register object V197;
	register object V198;
	register object V199;
	V200 = make_fixnum((long)length((V188)));
	V197= (VFUN_NARGS=2,(*(LnkLI144))((V189),V200));
	V199= make_fixnum((long)length((V188)));
	V198= small_fixnum(0);
goto T1338;
T1338:;
	if(!(number_compare((V198),(V199))>=0)){
	goto T1339;}
	{object V201 = (V197);
	VMR27(V201)}
goto T1339;
T1339:;
	V202= elt((V188),fixint((V198)));
	(void)(elt_set((V197),fixint((V198)),/* INLINE-ARGS */V202));
	V198= one_plus((V198));
	goto T1338;}
goto T1324;
T1324:;
	if((V191!= VV[103]))goto T1347;
	base[0]= (V188);
	vs_top=(vs_base=base+0)+1;
	Lcharacter();
	vs_top=sup;
	{object V203 = vs_base[0];
	VMR27(V203)}
goto T1347;
T1347:;
	if((V191!= VV[106]))goto T1349;
	base[0]= (V188);
	vs_top=(vs_base=base+0)+1;
	Lfloat();
	vs_top=sup;
	{object V204 = vs_base[0];
	VMR27(V204)}
goto T1349;
T1349:;
	if((V191!= VV[34]))goto T1351;
	base[0]= (V188);
	base[1]= VV[111];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V205 = vs_base[0];
	VMR27(V205)}
goto T1351;
T1351:;
	if((V191!= VV[125])
	&& (V191!= VV[126])
	&& (V191!= VV[35]))goto T1354;
	base[0]= (V188);
	base[1]= VV[112];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V206 = vs_base[0];
	VMR27(V206)}
goto T1354;
T1354:;
	if((V191!= VV[109]))goto T1357;
	if((cdr((V189)))==Cnil){
	goto T1358;}
	if((cadr((V189)))==Cnil){
	goto T1358;}
	if(!((cadr((V189)))==(VV[17]))){
	goto T1359;}
goto T1358;
T1358:;
	base[1]= (V188);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= (V188);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V207 = vs_base[0];
	VMR27(V207)}
goto T1359;
T1359:;
	base[1]= (V188);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	V208= vs_base[0];
	base[0]= (*(LnkLI145))(V208,cadr((V189)));
	base[2]= (V188);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V209= vs_base[0];
	base[1]= (*(LnkLI145))(V209,cadr((V189)));
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V210 = vs_base[0];
	VMR27(V210)}
goto T1357;
T1357:;
	base[0]= VV[113];
	base[1]= (V188);
	base[2]= (V189);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V211 = vs_base[0];
	VMR27(V211)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WARN-VERSION	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_reserve(VM28);
	{object V212;
	object V213;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V212=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1378;}
	V213=(base[1]);
	vs_top=sup;
	goto T1379;
goto T1378;
T1378:;
	V213= Cnil;
goto T1379;
T1379:;
	if(symbol_value(VV[114])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	if(!(((eql((V212),symbol_value(VV[114]))?Ct:Cnil))==Cnil)){
	goto T1383;}
	goto T1381;
goto T1383;
T1383:;
	if(((eql((V213),symbol_value(VV[115]))?Ct:Cnil))==Cnil){
	goto T1381;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T1381;
T1381:;
	if(symbol_value(VV[116])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	base[2]= Ct;
	base[3]= VV[117];
	base[4]= (V213);
	base[5]= (V212);
	vs_top=(vs_base=base+2)+4;
	Lformat();
	return;
	}
}
static object  LnkTLI145(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[145],(void **)&LnkLI145,2,ap);va_end(ap);return V1;} /* COERCE */
static object  LnkTLI144(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[144],(void **)&LnkLI144,ap);va_end(ap);return V1;} /* MAKE-SEQUENCE */
static object  LnkTLI142(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[142],(void **)&LnkLI142,2,ap);va_end(ap);return V1;} /* SUB-INTERVAL-P */
static object  LnkTLI141(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[141],(void **)&LnkLI141,1,ap);va_end(ap);return V1;} /* KNOWN-TYPE-P */
static void LnkT140(){ call_or_link(VV[140],(void **)&Lnk140);} /* SUBTYPEP */
static object  LnkTLI139(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[139],(void **)&LnkLI139,1,ap);va_end(ap);return V1;} /* NORMALIZE-TYPE */
static void LnkT138(){ call_or_link(VV[138],(void **)&Lnk138);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI137(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[137],(void **)&LnkLI137,1,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI136(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[136],(void **)&LnkLI136,1,ap);va_end(ap);return V1;} /* SIMPLE-ARRAY-P */
static object  LnkTLI130(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[130],(void **)&LnkLI130,1,ap);va_end(ap);return V1;} /* ARRAY-DIMENSIONS */
static object  LnkTLI129(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[129],(void **)&LnkLI129,2,ap);va_end(ap);return V1;} /* MATCH-DIMENSIONS */
static void LnkT124(){ call_or_link(VV[124],(void **)&Lnk124);} /* REALP */
static void LnkT123(){ call_or_link(VV[123],(void **)&Lnk123);} /* RATIONALP */
static object  LnkTLI122(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[122],(void **)&LnkLI122,2,ap);va_end(ap);return V1;} /* IN-INTERVAL-P */
static void LnkT120(){ call_or_link(VV[120],(void **)&Lnk120);} /* TYPEP */
static void LnkT119(){ call_or_link(VV[119],(void **)&Lnk119);} /* ARRAY-HAS-FILL-POINTER-P */
static object  LnkTLI118(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[118],(void **)&LnkLI118,1,ap);va_end(ap);return V1;} /* FIND-DOCUMENTATION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

