
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
	base[5]= base[4];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	V13= vs_base[0];
	V14= list(4,VV[5],/* INLINE-ARGS */V12,V13,VV[12]);
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
	if(vs_base>=vs_top){vs_top=sup;goto T47;}
	V16=(base[0]);
	vs_top=sup;
	goto T48;
	goto T47;
T47:;
	V16= VV[17];
	goto T48;
T48:;
	if(!(((V16))==(VV[17]))){
	goto T51;}
	base[1]= VV[18];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T51;
T51:;
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
	if(vs_base>=vs_top){vs_top=sup;goto T53;}
	V22=(base[0]);
	vs_top=sup;
	goto T54;
	goto T53;
T53:;
	V22= VV[17];
	goto T54;
T54:;
	if(!(((V22))==(VV[17]))){
	goto T57;}
	base[1]= VV[19];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T57;
T57:;
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
	if(vs_base>=vs_top){vs_top=sup;goto T59;}
	V24=(base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T60;}
	V25=(base[1]);
	vs_top=sup;
	goto T61;
	goto T59;
T59:;
	V24= VV[17];
	goto T60;
T60:;
	V25= VV[17];
	goto T61;
T61:;
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
	if(vs_base>=vs_top){vs_top=sup;goto T64;}
	V26=(base[0]);
	vs_top=sup;
	goto T65;
	goto T64;
T64:;
	V26= VV[17];
	goto T65;
T65:;
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
	if(vs_base>=vs_top){vs_top=sup;goto T67;}
	V27=(base[0]);
	vs_top=sup;
	goto T68;
	goto T67;
T67:;
	V27= VV[17];
	goto T68;
T68:;
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
	if(vs_base>=vs_top){vs_top=sup;goto T70;}
	V28=(base[0]);
	vs_top=sup;
	goto T71;
	goto T70;
T70:;
	V28= VV[17];
	goto T71;
T71:;
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
	if(vs_base>=vs_top){vs_top=sup;goto T73;}
	V29=(base[0]);
	vs_top=sup;
	goto T74;
	goto T73;
T73:;
	V29= VV[17];
	goto T74;
T74:;
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
	if(vs_base>=vs_top){vs_top=sup;goto T76;}
	V30=(base[0]);
	vs_top=sup;
	goto T77;
	goto T76;
T76:;
	V30= VV[17];
	goto T77;
T77:;
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
	if(vs_base>=vs_top){vs_top=sup;goto T79;}
	V31=(base[0]);
	vs_top=sup;
	goto T80;
	goto T79;
T79:;
	V31= VV[17];
	goto T80;
T80:;
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
	if(vs_base>=vs_top){vs_top=sup;goto T82;}
	V32=(base[0]);
	vs_top=sup;
	goto T83;
	goto T82;
T82:;
	V32= VV[17];
	goto T83;
T83:;
	base[1]= list(3,VV[27],VV[26],make_cons((V32),Cnil));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for SIMPLE-ARRAY-P	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{object V33;
	check_arg(1);
	V33=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(type_of((V33))==t_array||
type_of((V33))==t_vector||
type_of((V33))==t_string||
type_of((V33))==t_bitvector){
	goto T85;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T85;
T85:;
	base[1]= (V33);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk123)();
	vs_top=sup;
	V34= vs_base[0];
	if((V34)==Cnil){
	goto T87;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T87;
T87:;
	base[1]= (V33);
	vs_top=(vs_base=base+1)+1;
	siLdisplaced_array_p();
	vs_top=sup;
	V35= vs_base[0];
	base[1]= ((V35)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for CLASS-OF	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{object V36;
	check_arg(1);
	V36=(base[0]);
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
	{object V37;
	check_arg(1);
	V37=(base[0]);
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
	{object V38;
	check_arg(1);
	V38=(base[0]);
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
	{object V39;
	check_arg(1);
	V39=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for FIND-CLASS-NO-ERROR	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
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
/*	function definition for TYPEP	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_reserve(VM25);
	{register object V41;
	register object V42;
	object V43;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V41=(base[0]);
	V42=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T93;}
	V43=(base[2]);
	vs_top=sup;
	goto T94;
	goto T93;
T93:;
	V43= Cnil;
	goto T94;
T94:;
	{register object V44;
	register object V45;
	object V46;
	V44= Cnil;
	V45= Cnil;
	V46= Cnil;
	base[3]= (V42);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T99;}
	base[4]= (V41);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk125)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk126)();
	vs_top=sup;
	V48= vs_base[0];
	{register object x= (V42),V47= V48;
	while(!endp(V47))
	if(eql(x,V47->c.c_car)){
	goto T105;
	}else V47=V47->c.c_cdr;
	goto T104;}
	goto T105;
T105:;
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T104;
T104:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T99;
T99:;
	if(!(type_of((V42))!=t_cons)){
	goto T111;}
	V44= (V42);
	V45= Cnil;
	goto T109;
	goto T111;
T111:;
	V44= car((V42));
	V45= cdr((V42));
	goto T109;
T109:;
	if(!(((V44))==(VV[28]))){
	goto T119;}
	V44= VV[29];
	goto T119;
T119:;
	{object V49;
	V49= get((V44),VV[30],Cnil);
	if(((V49))==Cnil){
	goto T123;}
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event((V49));
	return;}
	goto T123;
T123:;
	{object V50= (V44);
	if((V50!= VV[43]))goto T128;
	{register object x= (V41),V51= (V45);
	while(!endp(V51))
	if(eql(x,V51->c.c_car)){
	base[3]= V51;
	vs_top=(vs_base=base+3)+1;
	return;
	}else V51=V51->c.c_cdr;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T128;
T128:;
	if((V50!= VV[46]))goto T129;
	base[3]= (V41);
	base[4]= car((V45));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk127)();
	vs_top=sup;
	V52= vs_base[0];
	base[3]= ((V52)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T129;
T129:;
	if((V50!= VV[44]))goto T133;
	{register object V53;
	V53= (V45);
	goto T135;
T135:;
	if(((V53))!=Cnil){
	goto T136;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T136;
T136:;
	base[3]= (V41);
	base[4]= car((V53));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk127)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T140;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T140;
T140:;
	V53= cdr((V53));
	goto T135;}
	goto T133;
T133:;
	if((V50!= VV[45]))goto T148;
	{register object V54;
	V54= (V45);
	goto T150;
T150:;
	if(((V54))!=Cnil){
	goto T151;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T151;
T151:;
	base[3]= (V41);
	base[4]= car((V54));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk127)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T155;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T155;
T155:;
	V54= cdr((V54));
	goto T150;}
	goto T148;
T148:;
	if((V50!= VV[38]))goto T163;
	base[3]= car((V45));
	base[4]= (V41);
	vs_top=(vs_base=base+4)+1;
	super_funcall_no_event(base[3]);
	return;
	goto T163;
T163:;
	if((V50!= Ct))goto T166;
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T166;
T166:;
	if((V50!= Cnil))goto T167;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T167;
T167:;
	if((V50!= VV[59]))goto T168;
	if(!(((V41))==(Ct))){
	goto T169;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T169;
T169:;
	base[3]= (((V41))==(Cnil)?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T168;
T168:;
	if((V50!= VV[31]))goto T171;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V55= vs_base[0];
	base[3]= ((V55)==(VV[31])?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T171;
T171:;
	if((V50!= VV[32]))goto T174;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V56= vs_base[0];
	base[3]= ((V56)==(VV[32])?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T174;
T174:;
	if((V50!= VV[33]))goto T177;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V57= vs_base[0];
	base[3]= ((V57)==(VV[33])?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T177;
T177:;
	if((V50!= VV[128]))goto T180;
	if(type_of((V41))==t_character){
	goto T181;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T181;
T181:;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	Lstandard_char_p();
	return;
	goto T180;
T180:;
	if((V50!= VV[25])
	&& (V50!= VV[24]))goto T184;
	if(type_of((V41))==t_character){
	goto T185;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T185;
T185:;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	Lstring_char_p();
	return;
	goto T184;
T184:;
	if((V50!= VV[13]))goto T188;
	if(type_of((V41))==t_fixnum||type_of((V41))==t_bignum){
	goto T189;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T189;
T189:;
	base[3]= (V41);
	base[4]= (V45);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk129)();
	return;
	goto T188;
T188:;
	if((V50!= VV[107]))goto T193;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk130)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T194;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T194;
T194:;
	base[3]= (V41);
	base[4]= (V45);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk129)();
	return;
	goto T193;
T193:;
	if((V50!= VV[98]))goto T199;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk131)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T200;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T200;
T200:;
	base[3]= (V41);
	base[4]= (V45);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk129)();
	return;
	goto T199;
T199:;
	if((V50!= VV[108]))goto T205;
	if(type_of((V41))==t_shortfloat||type_of((V41))==t_longfloat){
	goto T206;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T206;
T206:;
	base[3]= (V41);
	base[4]= (V45);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk129)();
	return;
	goto T205;
T205:;
	if((V50!= VV[34]))goto T210;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V58= vs_base[0];
	if((V58)==(VV[34])){
	goto T211;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T211;
T211:;
	base[3]= (V41);
	base[4]= (V45);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk129)();
	return;
	goto T210;
T210:;
	if((V50!= VV[132])
	&& (V50!= VV[133])
	&& (V50!= VV[35]))goto T217;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V59= vs_base[0];
	if((V59)==(VV[35])){
	goto T218;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T218;
T218:;
	base[3]= (V41);
	base[4]= (V45);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk129)();
	return;
	goto T217;
T217:;
	if((V50!= VV[111]))goto T224;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	Lcomplexp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T225;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T225;
T225:;
	if(!(((V45))==Cnil)){
	goto T228;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T228;
T228:;
	base[4]= (V41);
	vs_top=(vs_base=base+4)+1;
	Lrealpart();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= car((V45));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk127)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T230;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T230;
T230:;
	base[4]= (V41);
	vs_top=(vs_base=base+4)+1;
	Limagpart();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= car((V45));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk127)();
	return;
	goto T224;
T224:;
	if((V50!= VV[50]))goto T238;
	if(!(type_of((V41))==t_cons||((V41))==Cnil)){
	goto T239;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T239;
T239:;
	base[3]= (type_of((V41))==t_vector||
type_of((V41))==t_string||
type_of((V41))==t_bitvector?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T238;
T238:;
	if((V50!= VV[134])
	&& (V50!= VV[135]))goto T241;
	if(type_of((V41))==t_string){
	goto T242;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T242;
T242:;
	if(!(endp_prop((V45)))){
	goto T244;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T244;
T244:;
	base[4]= (V41);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk136)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V45);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk137)();
	return;
	goto T241;
T241:;
	if((V50!= VV[138]))goto T249;
	if((type_of((V41))==t_bitvector)){
	goto T250;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T250;
T250:;
	if(!(endp_prop((V45)))){
	goto T252;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T252;
T252:;
	base[4]= (V41);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk136)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V45);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk137)();
	return;
	goto T249;
T249:;
	if((V50!= VV[139])
	&& (V50!= VV[140]))goto T257;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	Lsimple_string_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T258;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T258;
T258:;
	if(!(endp_prop((V45)))){
	goto T261;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T261;
T261:;
	base[4]= (V41);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk136)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V45);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk137)();
	return;
	goto T257;
T257:;
	if((V50!= VV[141]))goto T266;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	Lsimple_bit_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T267;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T267;
T267:;
	if(!(endp_prop((V45)))){
	goto T270;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T270;
T270:;
	base[4]= (V41);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk136)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V45);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk137)();
	return;
	goto T266;
T266:;
	if((V50!= VV[142]))goto T275;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	Lsimple_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T276;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T276;
T276:;
	if(!(endp_prop((V45)))){
	goto T281;}
	goto T279;
	goto T281;
T281:;
	if(!((car((V45)))==(VV[17]))){
	goto T283;}
	goto T279;
	goto T283;
T283:;{object V60;
	if((car((V45)))==(Ct)){
	goto T287;}
	V60= Cnil;
	goto T286;
	goto T287;
T287:;
	if(((type_of((V41))==t_string?Ct:Cnil))==Cnil){
	goto T289;}
	V60= Cnil;
	goto T286;
	goto T289;
T289:;
	V60= ((((type_of((V41))==t_bitvector)?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T286;
T286:;
	if(V60==Cnil)goto T285;
	if((V60)!=Cnil){
	goto T279;}
	goto T280;
	goto T285;
T285:;}
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	Larray_element_type();
	vs_top=sup;
	V61= vs_base[0];
	base[3]= car((V45));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk143)();
	vs_top=sup;
	V62= vs_base[0];
	if(equal(V61,V62)){
	goto T279;}
	goto T280;
T280:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T279;
T279:;
	if(!(endp_prop(cdr((V45))))){
	goto T295;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T295;
T295:;
	base[4]= (V41);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk136)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= cdr((V45));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk137)();
	return;
	goto T275;
T275:;
	if((V50!= VV[23]))goto T300;
	if(type_of((V41))==t_vector||
type_of((V41))==t_string||
type_of((V41))==t_bitvector){
	goto T301;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T301;
T301:;
	if(!(endp_prop((V45)))){
	goto T305;}
	goto T303;
	goto T305;
T305:;
	if(!((car((V45)))==(VV[17]))){
	goto T307;}
	goto T303;
	goto T307;
T307:;{object V63;
	if((car((V45)))==(Ct)){
	goto T311;}
	V63= Cnil;
	goto T310;
	goto T311;
T311:;
	if(((type_of((V41))==t_string?Ct:Cnil))==Cnil){
	goto T313;}
	V63= Cnil;
	goto T310;
	goto T313;
T313:;
	V63= ((((type_of((V41))==t_bitvector)?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T310;
T310:;
	if(V63==Cnil)goto T309;
	if((V63)!=Cnil){
	goto T303;}
	goto T304;
	goto T309;
T309:;}
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	Larray_element_type();
	vs_top=sup;
	V64= vs_base[0];
	base[3]= car((V45));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk143)();
	vs_top=sup;
	V65= vs_base[0];
	if(equal(V64,V65)){
	goto T303;}
	goto T304;
T304:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T303;
T303:;
	if(!(endp_prop(cdr((V45))))){
	goto T319;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T319;
T319:;
	base[4]= (V41);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk136)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= cdr((V45));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk137)();
	return;
	goto T300;
T300:;
	if((V50!= VV[27]))goto T324;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk144)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T325;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T325;
T325:;
	if(!(endp_prop((V45)))){
	goto T330;}
	goto T328;
	goto T330;
T330:;
	if(!((car((V45)))==(VV[17]))){
	goto T332;}
	goto T328;
	goto T332;
T332:;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	Larray_element_type();
	vs_top=sup;
	V66= vs_base[0];
	base[3]= car((V45));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk143)();
	vs_top=sup;
	V67= vs_base[0];
	if(equal(V66,V67)){
	goto T328;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T328;
T328:;
	if(!(endp_prop(cdr((V45))))){
	goto T338;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T338;
T338:;
	if(!((cadr((V45)))==(VV[17]))){
	goto T340;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T340;
T340:;
	{object V68= cadr((V45));
	if(!(type_of(V68)==t_cons||(V68)==Cnil)){
	goto T343;}}
	base[4]= (V41);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk136)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= cadr((V45));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk137)();
	return;
	goto T343;
T343:;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	Larray_rank();
	vs_top=sup;
	V69= vs_base[0];
	base[3]= (eql(V69,cadr((V45)))?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T324;
T324:;
	if((V50!= VV[22]))goto T350;
	if(type_of((V41))==t_array||
type_of((V41))==t_vector||
type_of((V41))==t_string||
type_of((V41))==t_bitvector){
	goto T351;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T351;
T351:;
	if(!(endp_prop((V45)))){
	goto T355;}
	goto T353;
	goto T355;
T355:;
	if(!((car((V45)))==(VV[17]))){
	goto T357;}
	goto T353;
	goto T357;
T357:;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	Larray_element_type();
	vs_top=sup;
	V70= vs_base[0];
	base[3]= car((V45));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk143)();
	vs_top=sup;
	V71= vs_base[0];
	if(equal(V70,V71)){
	goto T353;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T353;
T353:;
	if(!(endp_prop(cdr((V45))))){
	goto T363;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T363;
T363:;
	if(!((cadr((V45)))==(VV[17]))){
	goto T365;}
	base[3]= Ct;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T365;
T365:;
	{object V72= cadr((V45));
	if(!(type_of(V72)==t_cons||(V72)==Cnil)){
	goto T368;}}
	base[4]= (V41);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk136)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= cadr((V45));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk137)();
	return;
	goto T368;
T368:;
	base[3]= (V41);
	vs_top=(vs_base=base+3)+1;
	Larray_rank();
	vs_top=sup;
	V73= vs_base[0];
	base[3]= (eql(V73,cadr((V45)))?Ct:Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T350;
T350:;
	V46= get((V44),VV[36],Cnil);
	if(((V46))==Cnil){
	goto T376;}
	base[3]= (V41);
	base[4]= (V46);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk145)();
	return;
	goto T376;
T376:;
	V46= get((V44),VV[37],Cnil);
	if(((V46))==Cnil){
	goto T382;}
	base[3]= (V41);
	base[5]= (V46);
	{object V74;
	V74= (V45);
	 vs_top=base+6;
	 while(!endp(V74))
	 {vs_push(car(V74));V74=cdr(V74);}
	vs_base=base+6;}
	super_funcall_no_event(base[5]);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk127)();
	return;
	goto T382;
T382:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}}
	}
}
/*	function definition for NORMALIZE-TYPE	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	{register object V75;
	check_arg(1);
	V75=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V76;
	register object V77;
	V76= Cnil;
	V77= Cnil;
	if(!(type_of((V75))==t_cons)){
	goto T391;}
	if(!((car((V75)))==(VV[38]))){
	goto T391;}
	V76= get(cadr((V75)),VV[39],Cnil);
	if(((V76))!=Cnil){
	goto T396;}
	base[1]= VV[40];
	base[2]= (V75);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	goto T396;
T396:;
	V75= (V76);
	goto T391;
T391:;
	goto T404;
T404:;
	if(!(type_of((V75))!=t_cons)){
	goto T408;}
	V76= (V75);
	V77= Cnil;
	goto T406;
	goto T408;
T408:;
	V76= car((V75));
	V77= cdr((V75));
	goto T406;
T406:;
	if((get((V76),VV[37],Cnil))==Cnil){
	goto T417;}
	base[1]= get((V76),VV[37],Cnil);
	{object V78;
	V78= (V77);
	 vs_top=base+2;
	 while(!endp(V78))
	 {vs_push(car(V78));V78=cdr(V78);}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	vs_top=sup;
	V75= vs_base[0];
	goto T405;
	goto T417;
T417:;
	if(!(type_of((V75))!=t_cons)){
	goto T423;}
	base[1]= make_cons((V75),Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T423;
T423:;
	base[1]= (V75);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T405;
T405:;
	goto T404;}
	}
}
/*	function definition for KNOWN-TYPE-P	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	{register object V79;
	check_arg(1);
	V79=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V79))==t_cons)){
	goto T426;}
	V79= car((V79));
	goto T426;
T426:;
	V80= coerce_to_string((V79));
	if(equal(/* INLINE-ARGS */V80,VV[41])){
	goto T430;}
	{register object x= (V79),V81= VV[42];
	while(!endp(V81))
	if(eql(x,V81->c.c_car)){
	goto T430;
	}else V81=V81->c.c_cdr;}
	if((get((V79),VV[36],Cnil))==Cnil){
	goto T431;}
	goto T430;
T430:;
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T431;
T431:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for SUBTYPEP	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_reserve(VM28);
	{object V82;
	object V83;
	object V84;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V82=(base[0]);
	V83=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T437;}
	V84=(base[2]);
	vs_top=sup;
	goto T438;
	goto T437;
T437:;
	V84= Cnil;
	goto T438;
T438:;
	{object V85;
	object V86;
	object V87;
	object V88;
	object V89;
	object V90;
	object V91;
	V85= Cnil;
	V86= Cnil;
	V87= Cnil;
	V88= Cnil;
	V89= Cnil;
	V90= Cnil;
	V91= Cnil;
	{object V92;
	object V93;
	object V94;
	object V95;
	base[7]= (V82);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	V92= vs_base[0];
	base[7]= (V83);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	V93= vs_base[0];
	if(((V92))==Cnil){
	goto T454;}
	V94= (V82);
	goto T452;
	goto T454;
T454:;
	base[7]= (V82);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk146)();
	vs_top=sup;
	V94= vs_base[0];
	goto T452;
T452:;
	if(((V93))==Cnil){
	goto T459;}
	V95= (V83);
	goto T457;
	goto T459;
T459:;
	base[7]= (V83);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk146)();
	vs_top=sup;
	V95= vs_base[0];
	goto T457;
T457:;
	if(((V94))==Cnil){
	goto T462;}
	if(((V95))==Cnil){
	goto T462;}
	base[7]= (V94);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk126)();
	vs_top=sup;
	V97= vs_base[0];
	{register object x= (V95),V96= V97;
	while(!endp(V96))
	if(eql(x,V96->c.c_car)){
	goto T469;
	}else V96=V96->c.c_cdr;
	goto T468;}
	goto T469;
T469:;
	base[7]= Ct;
	base[8]= Ct;
	vs_top=(vs_base=base+7)+2;
	return;
	goto T468;
T468:;
	base[7]= Cnil;
	base[8]= Ct;
	vs_top=(vs_base=base+7)+2;
	return;
	goto T462;
T462:;
	if(((V92))!=Cnil){
	goto T476;}
	if(((V93))==Cnil){
	goto T447;}
	goto T476;
T476:;
	base[7]= Cnil;
	base[8]= Ct;
	vs_top=(vs_base=base+7)+2;
	return;}
	goto T447;
T447:;
	base[3]= (V82);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk147)();
	vs_top=sup;
	V85= vs_base[0];
	if(!((car((V85)))==(VV[38]))){
	goto T488;}
	V82= make_cons((V82),Cnil);
	goto T486;
	goto T488;
T488:;
	V82= (V85);
	goto T486;
T486:;
	base[3]= (V83);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk147)();
	vs_top=sup;
	V86= vs_base[0];
	if(!((car((V86)))==(VV[38]))){
	goto T496;}
	V83= make_cons((V83),Cnil);
	goto T494;
	goto T496;
T496:;
	V83= (V86);
	goto T494;
T494:;
	if(!(equal((V82),(V83)))){
	goto T498;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T498;
T498:;
	V85= car((V82));
	V86= car((V83));
	V87= cdr((V82));
	V88= cdr((V83));
	if(!(((V85))==(VV[43]))){
	goto T513;}
	{register object V98;
	object V99;
	V98= (V87);
	V99= car((V98));
	goto T519;
T519:;
	if(!(endp_prop((V98)))){
	goto T520;}
	goto T515;
	goto T520;
T520:;
	base[4]= (V99);
	base[5]= (V83);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk127)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T524;}
	base[4]= Cnil;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	return;
	goto T524;
T524:;
	V98= cdr((V98));
	V99= car((V98));
	goto T519;}
	goto T515;
T515:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T513;
T513:;
	if(!(((V85))==(VV[44]))){
	goto T539;}
	{register object V100;
	object V101;
	V100= (V87);
	V101= car((V100));
	goto T545;
T545:;
	if(!(endp_prop((V100)))){
	goto T546;}
	goto T541;
	goto T546;
T546:;
	{object V102;
	object V103;
	base[4]= (V101);
	base[5]= (V83);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk148)();
	if(vs_base>=vs_top){vs_top=sup;goto T554;}
	V102= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T555;}
	V103= vs_base[0];
	vs_top=sup;
	goto T556;
	goto T554;
T554:;
	V102= Cnil;
	goto T555;
T555:;
	V103= Cnil;
	goto T556;
T556:;
	if(((V102))!=Cnil){
	goto T550;}
	base[4]= (V102);
	base[5]= (V103);
	vs_top=(vs_base=base+4)+2;
	return;}
	goto T550;
T550:;
	V100= cdr((V100));
	V101= car((V100));
	goto T545;}
	goto T541;
T541:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T539;
T539:;
	if(!(((V85))==(VV[45]))){
	goto T569;}
	{register object V104;
	object V105;
	V104= (V87);
	V105= car((V104));
	goto T575;
T575:;
	if(!(endp_prop((V104)))){
	goto T576;}
	goto T571;
	goto T576;
T576:;
	{object V106;
	base[4]= (V105);
	base[5]= (V83);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk148)();
	vs_top=sup;
	V106= vs_base[0];
	if(((V106))==Cnil){
	goto T580;}
	base[4]= Ct;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	return;}
	goto T580;
T580:;
	V104= cdr((V104));
	V105= car((V104));
	goto T575;}
	goto T571;
T571:;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T569;
T569:;
	if(!(((V85))==(VV[46]))){
	goto T511;}
	if(!(((V86))==(VV[46]))){
	goto T598;}
	base[3]= car((V88));
	base[4]= car((V87));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk148)();
	return;
	goto T598;
T598:;
	base[3]= Ct;
	base[4]= list(3,VV[44],(V83),car((V87)));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk148)();
	return;
	goto T511;
T511:;
	if(!(((V86))==(VV[43]))){
	goto T606;}
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T606;
T606:;
	if(!(((V86))==(VV[44]))){
	goto T611;}
	{register object V107;
	object V108;
	V107= (V88);
	V108= car((V107));
	goto T617;
T617:;
	if(!(endp_prop((V107)))){
	goto T618;}
	goto T613;
	goto T618;
T618:;
	{object V109;
	base[4]= (V82);
	base[5]= (V108);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk148)();
	vs_top=sup;
	V109= vs_base[0];
	if(((V109))==Cnil){
	goto T622;}
	base[4]= Ct;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	return;}
	goto T622;
T622:;
	V107= cdr((V107));
	V108= car((V107));
	goto T617;}
	goto T613;
T613:;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T611;
T611:;
	if(!(((V86))==(VV[45]))){
	goto T638;}
	{register object V110;
	object V111;
	V110= (V88);
	V111= car((V110));
	goto T644;
T644:;
	if(!(endp_prop((V110)))){
	goto T645;}
	goto T640;
	goto T645;
T645:;
	{object V112;
	object V113;
	base[4]= (V82);
	base[5]= (V111);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk148)();
	if(vs_base>=vs_top){vs_top=sup;goto T653;}
	V112= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T654;}
	V113= vs_base[0];
	vs_top=sup;
	goto T655;
	goto T653;
T653:;
	V112= Cnil;
	goto T654;
T654:;
	V113= Cnil;
	goto T655;
T655:;
	if(((V112))!=Cnil){
	goto T649;}
	base[4]= (V112);
	base[5]= (V113);
	vs_top=(vs_base=base+4)+2;
	return;}
	goto T649;
T649:;
	V110= cdr((V110));
	V111= car((V110));
	goto T644;}
	goto T640;
T640:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T638;
T638:;
	if(!(((V86))==(VV[46]))){
	goto T604;}
	base[3]= list(3,VV[45],(V82),car((V88)));
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk148)();
	return;
	goto T604;
T604:;
	base[3]= (V82);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk149)();
	vs_top=sup;
	V89= vs_base[0];
	base[3]= (V83);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk149)();
	vs_top=sup;
	V90= vs_base[0];
	if(((V85))==(Cnil)){
	goto T677;}
	if(((V86))==(Ct)){
	goto T677;}
	if(!(((V86))==(VV[47]))){
	goto T678;}
	goto T677;
T677:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T678;
T678:;
	if(!(((V86))==(Cnil))){
	goto T687;}
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T687;
T687:;
	if(!(((V85))==(Ct))){
	goto T692;}
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T692;
T692:;
	if(!(((V85))==(VV[47]))){
	goto T697;}
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T697;
T697:;
	if(!(((V86))==(VV[48]))){
	goto T702;}
	{register object x= (V85),V114= VV[49];
	while(!endp(V114))
	if(eql(x,V114->c.c_car)){
	goto T706;
	}else V114=V114->c.c_cdr;
	goto T705;}
	goto T706;
T706:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T705;
T705:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T702;
T702:;
	if(!(((V86))==(VV[50]))){
	goto T712;}
	{register object x= (V85),V115= VV[51];
	while(!endp(V115))
	if(eql(x,V115->c.c_car)){
	goto T716;
	}else V115=V115->c.c_cdr;
	goto T715;}
	goto T716;
T716:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T715;
T715:;
	if(((V85))==(VV[27])){
	goto T719;}
	if(!(((V85))==(VV[22]))){
	goto T720;}
	goto T719;
T719:;
	if((cdr((V87)))==Cnil){
	goto T725;}
	if(!(type_of(cadr((V87)))==t_cons)){
	goto T725;}
	if((cdadr((V87)))!=Cnil){
	goto T725;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T725;
T725:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T720;
T720:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T712;
T712:;
	if(!(((V85))==(VV[48]))){
	goto T738;}
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T738;
T738:;
	if(!(((V85))==(VV[50]))){
	goto T743;}
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T743;
T743:;
	if(!(((V86))==(VV[52]))){
	goto T748;}
	{register object x= (V85),V116= VV[53];
	while(!endp(V116))
	if(eql(x,V116->c.c_car)){
	goto T752;
	}else V116=V116->c.c_cdr;
	goto T751;}
	goto T752;
T752:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T751;
T751:;
	if(((V89))==Cnil){
	goto T756;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T756;
T756:;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T748;
T748:;
	if(!(((V85))==(VV[52]))){
	goto T763;}
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T763;
T763:;
	if(!(((V86))==(VV[54]))){
	goto T768;}
	{register object x= (V85),V117= VV[55];
	while(!endp(V117))
	if(eql(x,V117->c.c_car)){
	goto T772;
	}else V117=V117->c.c_cdr;
	goto T771;}
	goto T772;
T772:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T771;
T771:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T768;
T768:;
	if(!(((V86))==(VV[9]))){
	goto T778;}
	{register object x= (V85),V118= VV[56];
	while(!endp(V118))
	if(eql(x,V118->c.c_car)){
	goto T782;
	}else V118=V118->c.c_cdr;
	goto T781;}
	goto T782;
T782:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T781;
T781:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T778;
T778:;
	if(!(((V86))==(VV[57]))){
	goto T788;}
	if(!(((V85))==(VV[58]))){
	goto T791;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T791;
T791:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T788;
T788:;
	if(!(((V86))==(VV[59]))){
	goto T798;}
	if(!(((V85))==(VV[60]))){
	goto T801;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T801;
T801:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T798;
T798:;
	if(!(((V86))==(VV[61]))){
	goto T808;}
	{register object x= (V85),V119= VV[62];
	while(!endp(V119))
	if(eql(x,V119->c.c_car)){
	goto T812;
	}else V119=V119->c.c_cdr;
	goto T811;}
	goto T812;
T812:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T811;
T811:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T808;
T808:;
	if(!(((V86))==(VV[63]))){
	goto T818;}
	{register object x= (V85),V120= VV[64];
	while(!endp(V120))
	if(eql(x,V120->c.c_car)){
	goto T822;
	}else V120=V120->c.c_cdr;
	goto T821;}
	goto T822;
T822:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T821;
T821:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T818;
T818:;
	if(!(((V86))==(VV[65]))){
	goto T828;}
	V121= coerce_to_string((V85));
	if(equal(/* INLINE-ARGS */V121,VV[66])){
	goto T830;}
	{register object x= (V85),V122= VV[67];
	while(!endp(V122))
	if(eql(x,V122->c.c_car)){
	goto T834;
	}else V122=V122->c.c_cdr;
	goto T831;}
	goto T834;
T834:;
	goto T830;
T830:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T831;
T831:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T828;
T828:;
	if(!(((V86))==(VV[68]))){
	goto T840;}
	V123= coerce_to_string((V85));
	if(equal(/* INLINE-ARGS */V123,VV[69])){
	goto T842;}
	{register object x= (V85),V124= VV[70];
	while(!endp(V124))
	if(eql(x,V124->c.c_car)){
	goto T846;
	}else V124=V124->c.c_cdr;
	goto T843;}
	goto T846;
T846:;
	goto T842;
T842:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T843;
T843:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T840;
T840:;
	if(!(((V86))==(VV[71]))){
	goto T852;}
	if(!(((V85))==(VV[72]))){
	goto T855;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T855;
T855:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T852;
T852:;
	if(!(((V86))==(VV[73]))){
	goto T862;}
	if(!(((V85))==(VV[74]))){
	goto T865;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T865;
T865:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T862;
T862:;
	if(!(((V86))==(VV[75]))){
	goto T872;}
	{register object x= (V85),V125= VV[76];
	while(!endp(V125))
	if(eql(x,V125->c.c_car)){
	goto T876;
	}else V125=V125->c.c_cdr;
	goto T875;}
	goto T876;
T876:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T875;
T875:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T872;
T872:;
	V126= coerce_to_string((V86));
	if(equal(/* INLINE-ARGS */V126,VV[77])){
	goto T881;}
	if(!(((V86))==(VV[78]))){
	goto T882;}
	goto T881;
T881:;
	{register object x= (V85),V127= VV[79];
	while(!endp(V127))
	if(eql(x,V127->c.c_car)){
	goto T888;
	}else V127=V127->c.c_cdr;
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
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T882;
T882:;
	if(!(((V86))==(VV[80]))){
	goto T894;}
	{register object x= (V85),V128= VV[81];
	while(!endp(V128))
	if(eql(x,V128->c.c_car)){
	goto T898;
	}else V128=V128->c.c_cdr;
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
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T894;
T894:;
	if(!(((V86))==(VV[82]))){
	goto T904;}
	if(!(((V85))==(VV[83]))){
	goto T907;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T907;
T907:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T904;
T904:;
	if(!(((V86))==(VV[84]))){
	goto T914;}
	if(!(((V85))==(VV[85]))){
	goto T917;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T917;
T917:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T914;
T914:;
	if(!(((V86))==(VV[86]))){
	goto T924;}
	{register object x= (V85),V129= VV[87];
	while(!endp(V129))
	if(eql(x,V129->c.c_car)){
	goto T928;
	}else V129=V129->c.c_cdr;
	goto T927;}
	goto T928;
T928:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T927;
T927:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T924;
T924:;
	if(!(((V86))==(VV[86]))){
	goto T934;}
	{register object x= (V85),V130= VV[88];
	while(!endp(V130))
	if(eql(x,V130->c.c_car)){
	goto T938;
	}else V130=V130->c.c_cdr;
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
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T934;
T934:;
	if(!(((V86))==(VV[89]))){
	goto T944;}
	{register object x= (V85),V131= VV[90];
	while(!endp(V131))
	if(eql(x,V131->c.c_car)){
	goto T948;
	}else V131=V131->c.c_cdr;
	goto T947;}
	goto T948;
T948:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T947;
T947:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T944;
T944:;
	if(!(((V86))==(VV[91]))){
	goto T954;}
	{register object x= (V85),V132= VV[92];
	while(!endp(V132))
	if(eql(x,V132->c.c_car)){
	goto T958;
	}else V132=V132->c.c_cdr;
	goto T957;}
	goto T958;
T958:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T957;
T957:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T954;
T954:;
	if(!(((V86))==(VV[93]))){
	goto T964;}
	{register object x= (V85),V133= VV[94];
	while(!endp(V133))
	if(eql(x,V133->c.c_car)){
	goto T968;
	}else V133=V133->c.c_cdr;
	goto T967;}
	goto T968;
T968:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T967;
T967:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T964;
T964:;
	if(!(((V86))==(VV[95]))){
	goto T974;}
	if(!(((V85))==(VV[95]))){
	goto T977;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T977;
T977:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T974;
T974:;
	if(!(((V86))==(VV[60]))){
	goto T984;}
	if(!(((V85))==(VV[60]))){
	goto T987;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T987;
T987:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T984;
T984:;
	if(!(((V86))==(VV[96]))){
	goto T994;}
	{register object x= (V85),V134= VV[97];
	while(!endp(V134))
	if(eql(x,V134->c.c_car)){
	goto T998;
	}else V134=V134->c.c_cdr;
	goto T997;}
	goto T998;
T998:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T997;
T997:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T994;
T994:;
	if(!(((V85))==(VV[96]))){
	goto T1004;}
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1004;
T1004:;
	if(((V86))==(VV[29])){
	goto T1008;}
	if(!(((V86))==(VV[28]))){
	goto T1009;}
	goto T1008;
T1008:;
	if(((V85))==(VV[29])){
	goto T1013;}
	if((get((V85),VV[36],Cnil))==Cnil){
	goto T1014;}
	goto T1013;
T1013:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1014;
T1014:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1009;
T1009:;
	if(!(((V85))==(VV[29]))){
	goto T1023;}
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1023;
T1023:;
	V91= get((V85),VV[36],Cnil);
	if(((V91))==Cnil){
	goto T1028;}
	{object V135;
	V135= get((V86),VV[36],Cnil);
	if(((V135))==Cnil){
	goto T1033;}
	{register object V136;
	V136= (V91);
	goto T1036;
T1036:;
	if(((V136))!=Cnil){
	goto T1037;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1037;
T1037:;
	if(!(((V136))==(V135))){
	goto T1043;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1043;
T1043:;
	V136= structure_ref((V136),VV[36],4);
	goto T1036;}
	goto T1033;
T1033:;
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;}
	goto T1028;
T1028:;
	if(!(((V86))==(VV[98]))){
	goto T1054;}
	{register object x= (V85),V138= VV[99];
	while(!endp(V138))
	if(eql(x,V138->c.c_car)){
	goto T1059;
	}else V138=V138->c.c_cdr;
	goto T1057;}
	goto T1059;
T1059:;
	base[3]= (V87);
	base[4]= (V88);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk150)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1057;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1057;
T1057:;
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1054;
T1054:;
	if((get((V86),VV[36],Cnil))==Cnil){
	goto T1068;}
	base[3]= Cnil;
	base[4]= (V89);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1068;
T1068:;
	{object V139= (V85);
	if((V139!= VV[32]))goto T1072;
	{object V140= (V86);
	if((V140!= VV[32]))goto T1073;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1073;
T1073:;
	if((V140!= VV[13])
	&& (V140!= VV[107]))goto T1076;
	base[3]= VV[100];
	base[4]= (V88);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk150)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1078;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1078;
T1078:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1076;
T1076:;
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;}
	goto T1072;
T1072:;
	if((V139!= VV[33]))goto T1088;
	{object V141= (V86);
	if((V141!= VV[107]))goto T1089;
	base[3]= VV[101];
	base[4]= (V88);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk150)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1091;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1091;
T1091:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1089;
T1089:;
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;}
	goto T1088;
T1088:;
	if((V139!= VV[128]))goto T1101;
	{register object x= (V86),V142= VV[102];
	while(!endp(V142))
	if(eql(x,V142->c.c_car)){
	goto T1104;
	}else V142=V142->c.c_cdr;
	goto T1103;}
	goto T1104;
T1104:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1103;
T1103:;
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1101;
T1101:;
	if((V139!= VV[25]))goto T1109;
	{register object x= (V86),V143= VV[103];
	while(!endp(V143))
	if(eql(x,V143->c.c_car)){
	goto T1112;
	}else V143=V143->c.c_cdr;
	goto T1111;}
	goto T1112;
T1112:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1111;
T1111:;
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1109;
T1109:;
	if((V139!= VV[151]))goto T1117;
	{register object x= (V86),V144= VV[104];
	while(!endp(V144))
	if(eql(x,V144->c.c_car)){
	goto T1120;
	}else V144=V144->c.c_cdr;
	goto T1119;}
	goto T1120;
T1120:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1119;
T1119:;
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1117;
T1117:;
	if((V139!= VV[24]))goto T1125;
	if(!(((V86))==(VV[105]))){
	goto T1127;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1127;
T1127:;
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1125;
T1125:;
	if((V139!= VV[105]))goto T1133;
	if(!(((V86))==(VV[24]))){
	goto T1135;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1135;
T1135:;
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1133;
T1133:;
	if((V139!= VV[13]))goto T1141;
	{register object x= (V86),V145= VV[106];
	while(!endp(V145))
	if(eql(x,V145->c.c_car)){
	goto T1144;
	}else V145=V145->c.c_cdr;
	goto T1143;}
	goto T1144;
T1144:;
	base[4]= (V87);
	base[5]= (V88);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk150)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1143;
T1143:;
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1141;
T1141:;
	if((V139!= VV[107]))goto T1151;
	if(!(((V86))==(VV[107]))){
	goto T1153;}
	base[4]= (V87);
	base[5]= (V88);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk150)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1153;
T1153:;
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1151;
T1151:;
	if((V139!= VV[108]))goto T1161;
	if(!(((V86))==(VV[108]))){
	goto T1163;}
	base[4]= (V87);
	base[5]= (V88);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk150)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1163;
T1163:;
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1161;
T1161:;
	if((V139!= VV[34]))goto T1171;
	{register object x= (V86),V146= VV[109];
	while(!endp(V146))
	if(eql(x,V146->c.c_car)){
	goto T1174;
	}else V146=V146->c.c_cdr;
	goto T1173;}
	goto T1174;
T1174:;
	base[4]= (V87);
	base[5]= (V88);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk150)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1173;
T1173:;
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1171;
T1171:;
	if((V139!= VV[132])
	&& (V139!= VV[133])
	&& (V139!= VV[35]))goto T1181;
	{register object x= (V86),V147= VV[110];
	while(!endp(V147))
	if(eql(x,V147->c.c_car)){
	goto T1184;
	}else V147=V147->c.c_cdr;
	goto T1183;}
	goto T1184;
T1184:;
	base[4]= (V87);
	base[5]= (V88);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk150)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1183;
T1183:;
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1181;
T1181:;
	if((V139!= VV[111]))goto T1191;
	if(!(((V86))==(VV[111]))){
	goto T1193;}{object V148;
	V148= car((V87));
	if(V148==Cnil)goto T1196;
	base[3]= V148;
	goto T1195;
	goto T1196;
T1196:;}
	base[3]= Ct;
	goto T1195;
T1195:;{object V149;
	V149= car((V88));
	if(V149==Cnil)goto T1199;
	base[4]= V149;
	goto T1198;
	goto T1199;
T1199:;}
	base[4]= Ct;
	goto T1198;
T1198:;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk148)();
	return;
	goto T1193;
T1193:;
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1191;
T1191:;
	if((V139!= VV[27]))goto T1203;
	if(((V86))==(VV[27])){
	goto T1204;}
	if(!(((V86))==(VV[22]))){
	goto T1205;}
	goto T1204;
T1204:;
	if(endp_prop((V87))){
	goto T1210;}
	if(!((car((V87)))==(VV[17]))){
	goto T1211;}
	goto T1210;
T1210:;
	if(endp_prop((V88))){
	goto T1209;}
	if((car((V88)))==(VV[17])){
	goto T1209;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1211;
T1211:;
	if(endp_prop((V88))){
	goto T1209;}
	if((car((V88)))==(VV[17])){
	goto T1209;}
	if(equal(car((V87)),car((V88)))){
	goto T1209;}
	if(!((car((V87)))==(VV[25]))){
	goto T1225;}
	if((car((V88)))==(VV[24])){
	goto T1209;}
	goto T1225;
T1225:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1209;
T1209:;
	if(endp_prop(cdr((V87)))){
	goto T1234;}
	if(!((cadr((V87)))==(VV[17]))){
	goto T1233;}
	goto T1234;
T1234:;
	if(endp_prop(cdr((V88)))){
	goto T1238;}
	if(!((cadr((V88)))==(VV[17]))){
	goto T1239;}
	goto T1238;
T1238:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1239;
T1239:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1233;
T1233:;
	if(endp_prop(cdr((V88)))){
	goto T1248;}
	if(!((cadr((V88)))==(VV[17]))){
	goto T1247;}
	goto T1248;
T1248:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1247;
T1247:;
	base[4]= cadr((V87));
	base[5]= cadr((V88));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk137)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1205;
T1205:;
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1203;
T1203:;
	if((V139!= VV[22]))goto T1260;
	if(!(((V86))==(VV[22]))){
	goto T1262;}
	if(endp_prop((V87))){
	goto T1265;}
	if(!((car((V87)))==(VV[17]))){
	goto T1266;}
	goto T1265;
T1265:;
	if(endp_prop((V88))){
	goto T1264;}
	if((car((V88)))==(VV[17])){
	goto T1264;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1266;
T1266:;
	if(endp_prop((V88))){
	goto T1264;}
	if((car((V88)))==(VV[17])){
	goto T1264;}
	if(equal(car((V87)),car((V88)))){
	goto T1264;}
	if(!((car((V87)))==(VV[25]))){
	goto T1280;}
	if((car((V88)))==(VV[24])){
	goto T1264;}
	goto T1280;
T1280:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1264;
T1264:;
	if(endp_prop(cdr((V87)))){
	goto T1289;}
	if(!((cadr((V87)))==(VV[17]))){
	goto T1288;}
	goto T1289;
T1289:;
	if(endp_prop(cdr((V88)))){
	goto T1293;}
	if(!((cadr((V88)))==(VV[17]))){
	goto T1294;}
	goto T1293;
T1293:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1294;
T1294:;
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1288;
T1288:;
	if(endp_prop(cdr((V88)))){
	goto T1303;}
	if(!((cadr((V88)))==(VV[17]))){
	goto T1302;}
	goto T1303;
T1303:;
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1302;
T1302:;
	base[4]= cadr((V87));
	base[5]= cadr((V88));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk137)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1262;
T1262:;
	base[3]= Cnil;
	base[4]= (V90);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1260;
T1260:;
	if(((V89))==Cnil){
	goto T1316;}
	base[3]= (((V85))==((V86))?Ct:Cnil);
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1316;
T1316:;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	function definition for SUB-INTERVAL-P	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_reserve(VM29);
	{register object V150;
	register object V151;
	check_arg(2);
	V150=(base[0]);
	V151=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V152;
	register object V153;
	register object V154;
	register object V155;
	V152= Cnil;
	V153= Cnil;
	V154= Cnil;
	V155= Cnil;
	if(!(endp_prop((V150)))){
	goto T1324;}
	V152= VV[17];
	V153= VV[17];
	goto T1322;
	goto T1324;
T1324:;
	if(!(endp_prop(cdr((V150))))){
	goto T1330;}
	V152= car((V150));
	V153= VV[17];
	goto T1322;
	goto T1330;
T1330:;
	V152= car((V150));
	V153= cadr((V150));
	goto T1322;
T1322:;
	if(!(endp_prop((V151)))){
	goto T1340;}
	V154= VV[17];
	V155= VV[17];
	goto T1338;
	goto T1340;
T1340:;
	if(!(endp_prop(cdr((V151))))){
	goto T1346;}
	V154= car((V151));
	V155= VV[17];
	goto T1338;
	goto T1346;
T1346:;
	V154= car((V151));
	V155= cadr((V151));
	goto T1338;
T1338:;
	if(!(((V152))==(VV[17]))){
	goto T1356;}
	if(((V154))==(VV[17])){
	goto T1354;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1356;
T1356:;
	{object V156;
	V156= (((V154))==(VV[17])?Ct:Cnil);
	if(((V156))==Cnil){
	goto T1362;}
	goto T1354;
	goto T1362;
T1362:;
	if(!(type_of((V152))==t_cons)){
	goto T1365;}
	if(!(type_of((V154))==t_cons)){
	goto T1368;}
	if(!(number_compare(car((V152)),car((V154)))<0)){
	goto T1354;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1368;
T1368:;
	if(!(number_compare(car((V152)),(V154))<0)){
	goto T1354;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1365;
T1365:;
	{object V157;
	if(!(type_of((V154))==t_cons)){
	goto T1376;}
	if(!(number_compare((V152),car((V154)))<=0)){
	goto T1379;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1379;
T1379:;
	V157= Cnil;
	goto T1374;
	goto T1376;
T1376:;
	if(!(number_compare((V152),(V154))<0)){
	goto T1382;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1382;
T1382:;
	V157= Cnil;
	goto T1374;
T1374:;
	if(((V157))==Cnil){
	goto T1354;}}}
	goto T1354;
T1354:;
	if(!(((V153))==(VV[17]))){
	goto T1388;}
	if(((V155))==(VV[17])){
	goto T1386;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1388;
T1388:;
	{object V158;
	V158= (((V155))==(VV[17])?Ct:Cnil);
	if(((V158))==Cnil){
	goto T1394;}
	goto T1386;
	goto T1394;
T1394:;
	if(!(type_of((V153))==t_cons)){
	goto T1397;}
	if(!(type_of((V155))==t_cons)){
	goto T1400;}
	if(!(number_compare(car((V153)),car((V155)))>0)){
	goto T1386;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1400;
T1400:;
	if(!(number_compare(car((V153)),(V155))>0)){
	goto T1386;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1397;
T1397:;
	{object V159;
	if(!(type_of((V155))==t_cons)){
	goto T1408;}
	if(!(number_compare((V153),car((V155)))>=0)){
	goto T1411;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1411;
T1411:;
	V159= Cnil;
	goto T1406;
	goto T1408;
T1408:;
	if(!(number_compare((V153),(V155))>0)){
	goto T1414;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1414;
T1414:;
	V159= Cnil;
	goto T1406;
T1406:;
	if(((V159))==Cnil){
	goto T1386;}}}
	goto T1386;
T1386:;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for IN-INTERVAL-P	*/

static void L30()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_reserve(VM30);
	{register object V160;
	register object V161;
	check_arg(2);
	V160=(base[0]);
	V161=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V162;
	register object V163;
	V162= Cnil;
	V163= Cnil;
	if(!(endp_prop((V161)))){
	goto T1420;}
	V162= VV[17];
	V163= VV[17];
	goto T1418;
	goto T1420;
T1420:;
	if(!(endp_prop(cdr((V161))))){
	goto T1426;}
	V162= car((V161));
	V163= VV[17];
	goto T1418;
	goto T1426;
T1426:;
	V162= car((V161));
	V163= cadr((V161));
	goto T1418;
T1418:;
	{object V164;
	V164= (((V162))==(VV[17])?Ct:Cnil);
	if(((V164))==Cnil){
	goto T1437;}
	goto T1434;
	goto T1437;
T1437:;
	if(!(type_of((V162))==t_cons)){
	goto T1440;}
	if(!(number_compare((V160),car((V162)))<=0)){
	goto T1434;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1440;
T1440:;
	{object V165;
	if(!(number_compare((V160),(V162))<0)){
	goto T1446;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1446;
T1446:;
	V165= Cnil;
	if(((V165))==Cnil){
	goto T1434;}}}
	goto T1434;
T1434:;
	{object V166;
	V166= (((V163))==(VV[17])?Ct:Cnil);
	if(((V166))==Cnil){
	goto T1453;}
	goto T1450;
	goto T1453;
T1453:;
	if(!(type_of((V163))==t_cons)){
	goto T1456;}
	if(!(number_compare((V160),car((V163)))>=0)){
	goto T1450;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1456;
T1456:;
	{object V167;
	if(!(number_compare((V160),(V163))>0)){
	goto T1462;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1462;
T1462:;
	V167= Cnil;
	if(((V167))==Cnil){
	goto T1450;}}}
	goto T1450;
T1450:;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for MATCH-DIMENSIONS	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_reserve(VM31);
	{object V168;
	register object V169;
	check_arg(2);
	V168=(base[0]);
	V169=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V168))!=Cnil){
	goto T1467;}
	base[2]= (((V169))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1467;
T1467:;
	if(!((car((V169)))==(VV[17]))){
	goto T1471;}
	goto T1469;
	goto T1471;
T1471:;
	if(eql(car((V168)),car((V169)))){
	goto T1469;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1469;
T1469:;
	V168= cdr((V168));
	V169= cdr((V169));
	goto TTL;
	}
}
/*	function definition for COERCE	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_reserve(VM32);
	{register object V170;
	object V171;
	check_arg(2);
	V170=(base[0]);
	V171=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V170);
	base[3]= (V171);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk127)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1476;}
	base[2]= (V170);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1476;
T1476:;
	base[2]= (V171);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1481;}
	base[2]= VV[112];
	base[3]= VV[113];
	base[4]= (V170);
	base[5]= (V171);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk152)();
	vs_top=sup;
	goto T1481;
T1481:;
	base[2]= (V171);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk147)();
	vs_top=sup;
	V171= vs_base[0];
	{object V172= car((V171));
	if((V172!= VV[48]))goto T1492;
	{register object V173;
	register object V174;
	V175 = make_fixnum((long)length((V170)));
	V174= one_minus(V175);
	V173= Cnil;
	goto T1495;
T1495:;
	if(!(number_compare((V174),small_fixnum(0))<0)){
	goto T1496;}
	base[2]= (V173);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1496;
T1496:;
	V176= elt((V170),fixint((V174)));
	V173= make_cons(/* INLINE-ARGS */V176,(V173));
	V174= one_minus((V174));
	goto T1495;}
	goto T1492;
T1492:;
	if((V172!= VV[22])
	&& (V172!= VV[27]))goto T1504;
	if(endp_prop(cdr((V171)))){
	goto T1505;}
	if(endp_prop(cddr((V171)))){
	goto T1505;}
	if((caddr((V171)))==(VV[17])){
	goto T1505;}
	if(endp_prop(cdr(caddr((V171))))){
	goto T1505;}
	base[2]= VV[114];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1505;
T1505:;
	{register object V177;
	register object V178;
	register object V179;
	base[2]= (V171);
	base[3]= make_fixnum((long)length((V170)));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk153)();
	vs_top=sup;
	V177= vs_base[0];
	V179= make_fixnum((long)length((V170)));
	V178= small_fixnum(0);
	goto T1520;
T1520:;
	if(!(number_compare((V178),(V179))>=0)){
	goto T1521;}
	base[2]= (V177);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1521;
T1521:;
	V180= elt((V170),fixint((V178)));
	(void)(elt_set((V177),fixint((V178)),/* INLINE-ARGS */V180));
	V178= one_plus((V178));
	goto T1520;}
	goto T1504;
T1504:;
	if((V172!= VV[105]))goto T1529;
	base[2]= (V170);
	vs_top=(vs_base=base+2)+1;
	Lcharacter();
	return;
	goto T1529;
T1529:;
	if((V172!= VV[108]))goto T1531;
	base[2]= (V170);
	vs_top=(vs_base=base+2)+1;
	Lfloat();
	return;
	goto T1531;
T1531:;
	if((V172!= VV[34]))goto T1533;
	base[2]= (V170);
	base[3]= VV[115];
	vs_top=(vs_base=base+2)+2;
	Lfloat();
	return;
	goto T1533;
T1533:;
	if((V172!= VV[132])
	&& (V172!= VV[133])
	&& (V172!= VV[35]))goto T1536;
	base[2]= (V170);
	base[3]= VV[116];
	vs_top=(vs_base=base+2)+2;
	Lfloat();
	return;
	goto T1536;
T1536:;
	if((V172!= VV[111]))goto T1539;
	if((cdr((V171)))==Cnil){
	goto T1540;}
	if((cadr((V171)))==Cnil){
	goto T1540;}
	if(!((cadr((V171)))==(VV[17]))){
	goto T1541;}
	goto T1540;
T1540:;
	base[3]= (V170);
	vs_top=(vs_base=base+3)+1;
	Lrealpart();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= (V170);
	vs_top=(vs_base=base+4)+1;
	Limagpart();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lcomplex();
	return;
	goto T1541;
T1541:;
	base[4]= (V170);
	vs_top=(vs_base=base+4)+1;
	Lrealpart();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= cadr((V171));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk154)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[5]= (V170);
	vs_top=(vs_base=base+5)+1;
	Limagpart();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= cadr((V171));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk154)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lcomplex();
	return;
	goto T1539;
T1539:;
	base[2]= VV[117];
	base[3]= (V170);
	base[4]= (V171);
	vs_top=(vs_base=base+2)+3;
	Lerror();
	return;}
	}
}
/*	function definition for WARN-VERSION	*/

static void L33()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_reserve(VM33);
	{object V181;
	object V182;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V181=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1562;}
	V182=(base[1]);
	vs_top=sup;
	goto T1563;
	goto T1562;
T1562:;
	V182= Cnil;
	goto T1563;
T1563:;
	if(symbol_value(VV[118])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	if(!(((eql((V181),symbol_value(VV[118]))?Ct:Cnil))==Cnil)){
	goto T1567;}
	goto T1565;
	goto T1567;
T1567:;
	if(((eql((V182),symbol_value(VV[119]))?Ct:Cnil))==Cnil){
	goto T1565;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1565;
T1565:;
	if(symbol_value(VV[120])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	base[2]= Ct;
	base[3]= VV[121];
	base[4]= (V182);
	base[5]= (V181);
	vs_top=(vs_base=base+2)+4;
	Lformat();
	return;
	}
}
static void LnkT154(){ call_or_link(VV[154],(void **)(void *)&Lnk154);} /* COERCE */
static void LnkT153(){ call_or_link(VV[153],(void **)(void *)&Lnk153);} /* MAKE-SEQUENCE */
static void LnkT152(){ call_or_link(VV[152],(void **)(void *)&Lnk152);} /* SPECIFIC-ERROR */
static void LnkT150(){ call_or_link(VV[150],(void **)(void *)&Lnk150);} /* SUB-INTERVAL-P */
static void LnkT149(){ call_or_link(VV[149],(void **)(void *)&Lnk149);} /* KNOWN-TYPE-P */
static void LnkT148(){ call_or_link(VV[148],(void **)(void *)&Lnk148);} /* SUBTYPEP */
static void LnkT147(){ call_or_link(VV[147],(void **)(void *)&Lnk147);} /* NORMALIZE-TYPE */
static void LnkT146(){ call_or_link(VV[146],(void **)(void *)&Lnk146);} /* FIND-CLASS-NO-ERROR */
static void LnkT145(){ call_or_link(VV[145],(void **)(void *)&Lnk145);} /* STRUCTURE-SUBTYPE-P */
static void LnkT144(){ call_or_link(VV[144],(void **)(void *)&Lnk144);} /* SIMPLE-ARRAY-P */
static void LnkT143(){ call_or_link(VV[143],(void **)(void *)&Lnk143);} /* BEST-ARRAY-ELEMENT-TYPE */
static void LnkT137(){ call_or_link(VV[137],(void **)(void *)&Lnk137);} /* MATCH-DIMENSIONS */
static void LnkT136(){ call_or_link(VV[136],(void **)(void *)&Lnk136);} /* ARRAY-DIMENSIONS */
static void LnkT131(){ call_or_link(VV[131],(void **)(void *)&Lnk131);} /* REALP */
static void LnkT130(){ call_or_link(VV[130],(void **)(void *)&Lnk130);} /* RATIONALP */
static void LnkT129(){ call_or_link(VV[129],(void **)(void *)&Lnk129);} /* IN-INTERVAL-P */
static void LnkT127(){ call_or_link(VV[127],(void **)(void *)&Lnk127);} /* TYPEP */
static void LnkT126(){ call_or_link(VV[126],(void **)(void *)&Lnk126);} /* CLASS-PRECEDENCE-LIST */
static void LnkT125(){ call_or_link(VV[125],(void **)(void *)&Lnk125);} /* CLASS-OF */
static void LnkT124(){ call_or_link(VV[124],(void **)(void *)&Lnk124);} /* CLASSP */
static void LnkT123(){ call_or_link(VV[123],(void **)(void *)&Lnk123);} /* ARRAY-HAS-FILL-POINTER-P */
static void LnkT122(){ call_or_link(VV[122],(void **)(void *)&Lnk122);} /* FIND-DOCUMENTATION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

