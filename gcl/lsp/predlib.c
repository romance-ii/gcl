
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
	V13= (*(LnkLI119))(base[4]);
	V14= list(4,VV[5],/* INLINE-ARGS */V12,/* INLINE-ARGS */V13,VV[12]);
	base[5]= list(6,VV[3],VV[4],/* INLINE-ARGS */V9,/* INLINE-ARGS */V11,/* INLINE-ARGS */V14,list(2,VV[6],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	function definition for G1027	*/

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
/*	function definition for G1028	*/

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
/*	function definition for G1029	*/

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
/*	function definition for G1030	*/

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
/*	function definition for G1031	*/

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
/*	function definition for G1032	*/

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
/*	function definition for G1033	*/

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
/*	function definition for G1034	*/

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
/*	function definition for G1035	*/

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
/*	function definition for G1036	*/

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
/*	function definition for G1037	*/

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
/*	function definition for G1038	*/

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
/*	function definition for G1039	*/

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
	base[1]= list(3,VV[26],Ct,make_cons((V28),Cnil));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1040	*/

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
	base[1]= list(3,VV[26],VV[24],make_cons((V29),Cnil));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1041	*/

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
	base[1]= list(3,VV[26],VV[25],make_cons((V30),Cnil));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function SIMPLE-ARRAY-P	*/

static object LI17(V32)

object V32;
{	 VMB17 VMS17 VMV17
goto TTL;
TTL:;
	if(type_of((V32))==t_array||
type_of((V32))==t_vector||
type_of((V32))==t_string||
type_of((V32))==t_bitvector){
	goto T77;}
	{object V33 = Cnil;
	VMR17(V33)}
goto T77;
T77:;
	base[0]= (V32);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk120)();
	vs_top=sup;
	V34= vs_base[0];
	if((V34)==Cnil){
	goto T79;}
	{object V35 = Cnil;
	VMR17(V35)}
goto T79;
T79:;
	base[0]= (V32);
	vs_top=(vs_base=base+0)+1;
	siLdisplaced_array_p();
	vs_top=sup;
	V36= vs_base[0];
	{object V37 = ((V36)==Cnil?Ct:Cnil);
	VMR17(V37)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for TYPEP	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{register object V38;
	register object V39;
	check_arg(2);
	V38=(base[0]);
	V39=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V40;
	register object V41;
	register object V42;
	V40= Cnil;
	V41= Cnil;
	V42= Cnil;
	if(!(type_of((V39))!=t_cons)){
	goto T90;}
	V40= (V39);
	V41= Cnil;
	goto T88;
goto T90;
T90:;
	V40= car((V39));
	V41= cdr((V39));
goto T88;
T88:;
	if(!(((V40))==(VV[27]))){
	goto T98;}
	V40= VV[28];
goto T98;
T98:;
	{object V43;
	V43= get((V40),VV[29],Cnil);
	if(((V43))==Cnil){
	goto T102;}
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V43));
	return;}
goto T102;
T102:;
	{object V44= (V40);
	if((V44!= VV[40]))goto T107;
	{register object x= (V38),V45= (V41);
	while(!endp(V45))
	if(eql(x,V45->c.c_car)){
	base[2]= V45;
	vs_top=(vs_base=base+2)+1;
	return;
	}else V45=V45->c.c_cdr;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
goto T107;
T107:;
	if((V44!= VV[43]))goto T108;
	base[2]= (V38);
	base[3]= car((V41));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	V46= vs_base[0];
	base[2]= ((V46)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T108;
T108:;
	if((V44!= VV[41]))goto T112;
	{register object V47;
	V47= (V41);
goto T114;
T114:;
	if(((V47))!=Cnil){
	goto T115;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T115;
T115:;
	base[2]= (V38);
	base[3]= car((V47));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T119;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T119;
T119:;
	V47= cdr((V47));
	goto T114;}
goto T112;
T112:;
	if((V44!= VV[42]))goto T127;
	{register object V48;
	V48= (V41);
goto T129;
T129:;
	if(((V48))!=Cnil){
	goto T130;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T130;
T130:;
	base[2]= (V38);
	base[3]= car((V48));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T134;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T134;
T134:;
	V48= cdr((V48));
	goto T129;}
goto T127;
T127:;
	if((V44!= VV[39]))goto T142;
	base[2]= car((V41));
	base[3]= (V38);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event(base[2]);
	return;
goto T142;
T142:;
	if((V44!= Ct))goto T145;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T145;
T145:;
	if((V44!= Cnil))goto T146;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T146;
T146:;
	if((V44!= VV[56]))goto T147;
	if(!(((V38))==(Ct))){
	goto T148;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T148;
T148:;
	base[2]= (((V38))==(Cnil)?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T147;
T147:;
	if((V44!= VV[30]))goto T150;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V49= vs_base[0];
	base[2]= ((V49)==(VV[30])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T150;
T150:;
	if((V44!= VV[31]))goto T153;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V50= vs_base[0];
	base[2]= ((V50)==(VV[31])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T153;
T153:;
	if((V44!= VV[32]))goto T156;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V51= vs_base[0];
	base[2]= ((V51)==(VV[32])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T156;
T156:;
	if((V44!= VV[122]))goto T159;
	if(type_of((V38))==t_character){
	goto T160;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T160;
T160:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lstandard_char_p();
	return;
goto T159;
T159:;
	if((V44!= VV[123])
	&& (V44!= VV[24]))goto T163;
	if(type_of((V38))==t_character){
	goto T164;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T164;
T164:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lstring_char_p();
	return;
goto T163;
T163:;
	if((V44!= VV[13]))goto T167;
	if(type_of((V38))==t_fixnum||type_of((V38))==t_bignum){
	goto T168;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T168;
T168:;
	base[2]= (*(LnkLI124))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T167;
T167:;
	if((V44!= VV[106]))goto T170;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk125)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T171;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T171;
T171:;
	base[2]= (*(LnkLI124))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T170;
T170:;
	if((V44!= VV[95]))goto T174;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk126)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T175;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T175;
T175:;
	base[2]= (*(LnkLI124))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T174;
T174:;
	if((V44!= VV[107]))goto T178;
	if(type_of((V38))==t_shortfloat||type_of((V38))==t_longfloat){
	goto T179;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T179;
T179:;
	base[2]= (*(LnkLI124))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T178;
T178:;
	if((V44!= VV[33]))goto T181;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V52= vs_base[0];
	if((V52)==(VV[33])){
	goto T182;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T182;
T182:;
	base[2]= (*(LnkLI124))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T181;
T181:;
	if((V44!= VV[127])
	&& (V44!= VV[128])
	&& (V44!= VV[34]))goto T186;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V53= vs_base[0];
	if((V53)==(VV[34])){
	goto T187;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T187;
T187:;
	base[2]= (*(LnkLI124))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T186;
T186:;
	if((V44!= VV[110]))goto T191;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lcomplexp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T192;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T192;
T192:;
	if(!(((V41))==Cnil)){
	goto T195;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T195;
T195:;
	base[3]= (V38);
	vs_top=(vs_base=base+3)+1;
	Lrealpart();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= car((V41));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T197;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T197;
T197:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V38= vs_base[0];
	V39= car((V41));
	goto TTL;
goto T191;
T191:;
	if((V44!= VV[47]))goto T206;
	if(!(type_of((V38))==t_cons||((V38))==Cnil)){
	goto T207;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T207;
T207:;
	base[2]= (type_of((V38))==t_vector||
type_of((V38))==t_string||
type_of((V38))==t_bitvector?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T206;
T206:;
	if((V44!= VV[129]))goto T209;
	if(type_of((V38))==t_string){
	goto T210;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T210;
T210:;
	if(!(((V41))==Cnil)){
	goto T212;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T212;
T212:;
	V54= (*(LnkLI131))((V38));
	base[2]= (*(LnkLI130))(/* INLINE-ARGS */V54,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T209;
T209:;
	if((V44!= VV[132]))goto T214;
	if((type_of((V38))==t_bitvector)){
	goto T215;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T215;
T215:;
	if(!(((V41))==Cnil)){
	goto T217;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T217;
T217:;
	V55= (*(LnkLI131))((V38));
	base[2]= (*(LnkLI130))(/* INLINE-ARGS */V55,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T214;
T214:;
	if((V44!= VV[133]))goto T219;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lsimple_string_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T220;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T220;
T220:;
	if(!(((V41))==Cnil)){
	goto T223;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T223;
T223:;
	V56= (*(LnkLI131))((V38));
	base[2]= (*(LnkLI130))(/* INLINE-ARGS */V56,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T219;
T219:;
	if((V44!= VV[134]))goto T225;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lsimple_bit_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T226;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T226;
T226:;
	if(!(((V41))==Cnil)){
	goto T229;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T229;
T229:;
	V57= (*(LnkLI131))((V38));
	base[2]= (*(LnkLI130))(/* INLINE-ARGS */V57,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T225;
T225:;
	if((V44!= VV[135]))goto T231;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lsimple_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T232;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T232;
T232:;
	if(!(((V41))==Cnil)){
	goto T235;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T235;
T235:;
	V58= (*(LnkLI131))((V38));
	base[2]= (*(LnkLI130))(/* INLINE-ARGS */V58,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T231;
T231:;
	if((V44!= VV[26]))goto T237;
	if(((*(LnkLI136))((V38)))!=Cnil){
	goto T238;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T238;
T238:;
	if(!(endp_prop((V41)))){
	goto T242;}
	goto T240;
goto T242;
T242:;
	if(!((car((V41)))==(VV[17]))){
	goto T244;}
	goto T240;
goto T244;
T244:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V59= vs_base[0];
	V60= (*(LnkLI137))(car((V41)));
	if(equal(V59,/* INLINE-ARGS */V60)){
	goto T240;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T240;
T240:;
	if(!(endp_prop(cdr((V41))))){
	goto T248;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T248;
T248:;
	if(!((cadr((V41)))==(VV[17]))){
	goto T250;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T250;
T250:;
	V61= (*(LnkLI131))((V38));
	base[2]= (*(LnkLI130))(/* INLINE-ARGS */V61,cadr((V41)));
	vs_top=(vs_base=base+2)+1;
	return;
goto T237;
T237:;
	if((V44!= VV[22]))goto T252;
	if(type_of((V38))==t_array||
type_of((V38))==t_vector||
type_of((V38))==t_string||
type_of((V38))==t_bitvector){
	goto T253;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T253;
T253:;
	if(!(endp_prop((V41)))){
	goto T257;}
	goto T255;
goto T257;
T257:;
	if(!((car((V41)))==(VV[17]))){
	goto T259;}
	goto T255;
goto T259;
T259:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V62= vs_base[0];
	V63= (*(LnkLI137))(car((V41)));
	if(equal(V62,/* INLINE-ARGS */V63)){
	goto T255;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T255;
T255:;
	if(!(endp_prop(cdr((V41))))){
	goto T263;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T263;
T263:;
	if(!((cadr((V41)))==(VV[17]))){
	goto T265;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T265;
T265:;
	V64= (*(LnkLI131))((V38));
	base[2]= (*(LnkLI130))(/* INLINE-ARGS */V64,cadr((V41)));
	vs_top=(vs_base=base+2)+1;
	return;
goto T252;
T252:;
	V42= get((V40),VV[35],Cnil);
	if(((V42))==Cnil){
	goto T268;}
	base[2]= (V38);
	base[3]= (V42);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk138)();
	return;
goto T268;
T268:;
	V42= get((V40),VV[36],Cnil);
	if(((V42))==Cnil){
	goto T274;}
	base[2]= (V42);
	{object V65;
	V65= Cnil;
	 vs_top=base+3;
	 while(!endp(V65))
	 {vs_push(car(V65));V65=cdr(V65);}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	vs_top=sup;
	V39= vs_base[0];
	goto TTL;
goto T274;
T274:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	local entry for function NORMALIZE-TYPE	*/

static object LI19(V67)

register object V67;
{	 VMB19 VMS19 VMV19
goto TTL;
TTL:;
	{register object V68;
	register object V69;
	V68= Cnil;
	V69= Cnil;
goto T285;
T285:;
	if(!(type_of((V67))!=t_cons)){
	goto T289;}
	V68= (V67);
	V69= Cnil;
	goto T287;
goto T289;
T289:;
	V68= car((V67));
	V69= cdr((V67));
goto T287;
T287:;
	if((get((V68),VV[36],Cnil))==Cnil){
	goto T298;}
	base[0]= get((V68),VV[36],Cnil);
	{object V70;
	V70= (V69);
	 vs_top=base+1;
	 while(!endp(V70))
	 {vs_push(car(V70));V70=cdr(V70);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V67= vs_base[0];
	goto T286;
goto T298;
T298:;
	if(!(type_of((V67))!=t_cons)){
	goto T304;}
	{object V71 = make_cons((V67),Cnil);
	VMR19(V71)}
goto T304;
T304:;
	{object V72 = (V67);
	VMR19(V72)}
goto T286;
T286:;
	goto T285;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function KNOWN-TYPE-P	*/

static object LI20(V74)

register object V74;
{	 VMB20 VMS20 VMV20
goto TTL;
TTL:;
	if(!(type_of((V74))==t_cons)){
	goto T307;}
	V74= car((V74));
goto T307;
T307:;
	V75= coerce_to_string((V74));
	if(equal(/* INLINE-ARGS */V75,VV[37])){
	goto T311;}
	{register object x= (V74),V76= VV[38];
	while(!endp(V76))
	if(eql(x,V76->c.c_car)){
	goto T311;
	}else V76=V76->c.c_cdr;}
	if((get((V74),VV[35],Cnil))==Cnil){
	goto T312;}
goto T311;
T311:;
	{object V77 = Ct;
	VMR20(V77)}
goto T312;
T312:;
	{object V78 = Cnil;
	VMR20(V78)}
	return Cnil;
}
/*	function definition for SUBTYPEP	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{object V79;
	object V80;
	check_arg(2);
	V79=(base[0]);
	V80=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V81;
	object V82;
	object V83;
	object V84;
	object V85;
	object V86;
	object V87;
	V81= Cnil;
	V82= Cnil;
	V83= Cnil;
	V84= Cnil;
	V85= Cnil;
	V86= Cnil;
	V87= Cnil;
	V81= (*(LnkLI139))((V79));
	if(!((car((V81)))==(VV[39]))){
	goto T330;}
	V79= make_cons((V79),Cnil);
	goto T328;
goto T330;
T330:;
	V79= (V81);
goto T328;
T328:;
	V82= (*(LnkLI139))((V80));
	if(!((car((V82)))==(VV[39]))){
	goto T337;}
	V80= make_cons((V80),Cnil);
	goto T335;
goto T337;
T337:;
	V80= (V82);
goto T335;
T335:;
	if(!(equal((V79),(V80)))){
	goto T339;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T339;
T339:;
	V81= car((V79));
	V82= car((V80));
	V83= cdr((V79));
	V84= cdr((V80));
	if(!(((V81))==(VV[40]))){
	goto T354;}
	{register object V88;
	object V89;
	V88= (V83);
	V89= car((V88));
goto T360;
T360:;
	if(!(endp_prop((V88)))){
	goto T361;}
	goto T356;
goto T361;
T361:;
	base[3]= (V89);
	base[4]= (V80);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T365;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
goto T365;
T365:;
	V88= cdr((V88));
	V89= car((V88));
	goto T360;}
goto T356;
T356:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T354;
T354:;
	if(!(((V81))==(VV[41]))){
	goto T380;}
	{register object V90;
	object V91;
	V90= (V83);
	V91= car((V90));
goto T386;
T386:;
	if(!(endp_prop((V90)))){
	goto T387;}
	goto T382;
goto T387;
T387:;
	{object V92;
	object V93;
	base[3]= (V91);
	base[4]= (V80);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk140)();
	if(vs_base>=vs_top){vs_top=sup;goto T395;}
	V92= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T396;}
	V93= vs_base[0];
	vs_top=sup;
	goto T397;
goto T395;
T395:;
	V92= Cnil;
goto T396;
T396:;
	V93= Cnil;
goto T397;
T397:;
	if(((V92))!=Cnil){
	goto T391;}
	base[3]= (V92);
	base[4]= (V93);
	vs_top=(vs_base=base+3)+2;
	return;}
goto T391;
T391:;
	V90= cdr((V90));
	V91= car((V90));
	goto T386;}
goto T382;
T382:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T380;
T380:;
	if(!(((V81))==(VV[42]))){
	goto T410;}
	{register object V94;
	object V95;
	V94= (V83);
	V95= car((V94));
goto T416;
T416:;
	if(!(endp_prop((V94)))){
	goto T417;}
	goto T412;
goto T417;
T417:;
	{object V96;
	base[3]= (V95);
	base[4]= (V80);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk140)();
	vs_top=sup;
	V96= vs_base[0];
	if(((V96))==Cnil){
	goto T421;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}
goto T421;
T421:;
	V94= cdr((V94));
	V95= car((V94));
	goto T416;}
goto T412;
T412:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T410;
T410:;
	if(!(((V81))==(VV[43]))){
	goto T352;}
	if(!(((V82))==(VV[43]))){
	goto T439;}
	V79= car((V84));
	V80= car((V83));
	goto TTL;
goto T439;
T439:;
	V79= Ct;
	V80= list(3,VV[41],(V80),car((V83)));
	goto TTL;
goto T352;
T352:;
	if(!(((V82))==(VV[40]))){
	goto T449;}
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T449;
T449:;
	if(!(((V82))==(VV[41]))){
	goto T454;}
	{register object V97;
	object V98;
	V97= (V84);
	V98= car((V97));
goto T460;
T460:;
	if(!(endp_prop((V97)))){
	goto T461;}
	goto T456;
goto T461;
T461:;
	{object V99;
	base[3]= (V79);
	base[4]= (V98);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk140)();
	vs_top=sup;
	V99= vs_base[0];
	if(((V99))==Cnil){
	goto T465;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}
goto T465;
T465:;
	V97= cdr((V97));
	V98= car((V97));
	goto T460;}
goto T456;
T456:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T454;
T454:;
	if(!(((V82))==(VV[42]))){
	goto T481;}
	{register object V100;
	object V101;
	V100= (V84);
	V101= car((V100));
goto T487;
T487:;
	if(!(endp_prop((V100)))){
	goto T488;}
	goto T483;
goto T488;
T488:;
	{object V102;
	object V103;
	base[3]= (V79);
	base[4]= (V101);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk140)();
	if(vs_base>=vs_top){vs_top=sup;goto T496;}
	V102= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T497;}
	V103= vs_base[0];
	vs_top=sup;
	goto T498;
goto T496;
T496:;
	V102= Cnil;
goto T497;
T497:;
	V103= Cnil;
goto T498;
T498:;
	if(((V102))!=Cnil){
	goto T492;}
	base[3]= (V102);
	base[4]= (V103);
	vs_top=(vs_base=base+3)+2;
	return;}
goto T492;
T492:;
	V100= cdr((V100));
	V101= car((V100));
	goto T487;}
goto T483;
T483:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T481;
T481:;
	if(!(((V82))==(VV[43]))){
	goto T447;}
	V79= list(3,VV[42],(V79),car((V84)));
	V80= Cnil;
	goto TTL;
goto T447;
T447:;
	V85= (*(LnkLI141))((V79));
	V86= (*(LnkLI141))((V80));
	if(((V81))==(Cnil)){
	goto T519;}
	if(((V82))==(Ct)){
	goto T519;}
	if(!(((V82))==(VV[44]))){
	goto T520;}
goto T519;
T519:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T520;
T520:;
	if(!(((V82))==(Cnil))){
	goto T529;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T529;
T529:;
	if(!(((V81))==(Ct))){
	goto T534;}
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T534;
T534:;
	if(!(((V81))==(VV[44]))){
	goto T539;}
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T539;
T539:;
	if(!(((V82))==(VV[45]))){
	goto T544;}
	{register object x= (V81),V104= VV[46];
	while(!endp(V104))
	if(eql(x,V104->c.c_car)){
	goto T548;
	}else V104=V104->c.c_cdr;
	goto T547;}
goto T548;
T548:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T547;
T547:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T544;
T544:;
	if(!(((V82))==(VV[47]))){
	goto T554;}
	{register object x= (V81),V105= VV[48];
	while(!endp(V105))
	if(eql(x,V105->c.c_car)){
	goto T558;
	}else V105=V105->c.c_cdr;
	goto T557;}
goto T558;
T558:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T557;
T557:;
	if(((V81))==(VV[26])){
	goto T561;}
	if(!(((V81))==(VV[22]))){
	goto T562;}
goto T561;
T561:;
	if((cdr((V83)))==Cnil){
	goto T567;}
	if(!(type_of(cadr((V83)))==t_cons)){
	goto T567;}
	if((cdadr((V83)))!=Cnil){
	goto T567;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T567;
T567:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T562;
T562:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T554;
T554:;
	if(!(((V81))==(VV[45]))){
	goto T580;}
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T580;
T580:;
	if(!(((V81))==(VV[47]))){
	goto T585;}
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T585;
T585:;
	if(!(((V82))==(VV[49]))){
	goto T590;}
	{register object x= (V81),V106= VV[50];
	while(!endp(V106))
	if(eql(x,V106->c.c_car)){
	goto T594;
	}else V106=V106->c.c_cdr;
	goto T593;}
goto T594;
T594:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T593;
T593:;
	if(((V85))==Cnil){
	goto T598;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T598;
T598:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T590;
T590:;
	if(!(((V81))==(VV[49]))){
	goto T605;}
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T605;
T605:;
	if(!(((V82))==(VV[51]))){
	goto T610;}
	{register object x= (V81),V107= VV[52];
	while(!endp(V107))
	if(eql(x,V107->c.c_car)){
	goto T614;
	}else V107=V107->c.c_cdr;
	goto T613;}
goto T614;
T614:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T613;
T613:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T610;
T610:;
	if(!(((V82))==(VV[9]))){
	goto T620;}
	{register object x= (V81),V108= VV[53];
	while(!endp(V108))
	if(eql(x,V108->c.c_car)){
	goto T624;
	}else V108=V108->c.c_cdr;
	goto T623;}
goto T624;
T624:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T623;
T623:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T620;
T620:;
	if(!(((V82))==(VV[54]))){
	goto T630;}
	if(!(((V81))==(VV[55]))){
	goto T633;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T633;
T633:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T630;
T630:;
	if(!(((V82))==(VV[56]))){
	goto T640;}
	if(!(((V81))==(VV[57]))){
	goto T643;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T643;
T643:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T640;
T640:;
	if(!(((V82))==(VV[58]))){
	goto T650;}
	{register object x= (V81),V109= VV[59];
	while(!endp(V109))
	if(eql(x,V109->c.c_car)){
	goto T654;
	}else V109=V109->c.c_cdr;
	goto T653;}
goto T654;
T654:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T653;
T653:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T650;
T650:;
	if(!(((V82))==(VV[60]))){
	goto T660;}
	{register object x= (V81),V110= VV[61];
	while(!endp(V110))
	if(eql(x,V110->c.c_car)){
	goto T664;
	}else V110=V110->c.c_cdr;
	goto T663;}
goto T664;
T664:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T663;
T663:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T660;
T660:;
	if(!(((V82))==(VV[62]))){
	goto T670;}
	V111= coerce_to_string((V81));
	if(equal(/* INLINE-ARGS */V111,VV[63])){
	goto T672;}
	{register object x= (V81),V112= VV[64];
	while(!endp(V112))
	if(eql(x,V112->c.c_car)){
	goto T676;
	}else V112=V112->c.c_cdr;
	goto T673;}
goto T676;
T676:;
goto T672;
T672:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T673;
T673:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T670;
T670:;
	if(!(((V82))==(VV[65]))){
	goto T682;}
	V113= coerce_to_string((V81));
	if(equal(/* INLINE-ARGS */V113,VV[66])){
	goto T684;}
	{register object x= (V81),V114= VV[67];
	while(!endp(V114))
	if(eql(x,V114->c.c_car)){
	goto T688;
	}else V114=V114->c.c_cdr;
	goto T685;}
goto T688;
T688:;
goto T684;
T684:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T685;
T685:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T682;
T682:;
	if(!(((V82))==(VV[68]))){
	goto T694;}
	if(!(((V81))==(VV[69]))){
	goto T697;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T697;
T697:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T694;
T694:;
	if(!(((V82))==(VV[70]))){
	goto T704;}
	if(!(((V81))==(VV[71]))){
	goto T707;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T707;
T707:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T704;
T704:;
	if(!(((V82))==(VV[72]))){
	goto T714;}
	{register object x= (V81),V115= VV[73];
	while(!endp(V115))
	if(eql(x,V115->c.c_car)){
	goto T718;
	}else V115=V115->c.c_cdr;
	goto T717;}
goto T718;
T718:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T717;
T717:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T714;
T714:;
	V116= coerce_to_string((V82));
	if(equal(/* INLINE-ARGS */V116,VV[74])){
	goto T723;}
	if(!(((V82))==(VV[75]))){
	goto T724;}
goto T723;
T723:;
	{register object x= (V81),V117= VV[76];
	while(!endp(V117))
	if(eql(x,V117->c.c_car)){
	goto T730;
	}else V117=V117->c.c_cdr;
	goto T729;}
goto T730;
T730:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T729;
T729:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T724;
T724:;
	if(!(((V82))==(VV[77]))){
	goto T736;}
	{register object x= (V81),V118= VV[78];
	while(!endp(V118))
	if(eql(x,V118->c.c_car)){
	goto T740;
	}else V118=V118->c.c_cdr;
	goto T739;}
goto T740;
T740:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T739;
T739:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T736;
T736:;
	if(!(((V82))==(VV[79]))){
	goto T746;}
	if(!(((V81))==(VV[80]))){
	goto T749;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T749;
T749:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T746;
T746:;
	if(!(((V82))==(VV[81]))){
	goto T756;}
	if(!(((V81))==(VV[82]))){
	goto T759;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T759;
T759:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T756;
T756:;
	if(!(((V82))==(VV[83]))){
	goto T766;}
	{register object x= (V81),V119= VV[84];
	while(!endp(V119))
	if(eql(x,V119->c.c_car)){
	goto T770;
	}else V119=V119->c.c_cdr;
	goto T769;}
goto T770;
T770:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T769;
T769:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T766;
T766:;
	if(!(((V82))==(VV[83]))){
	goto T776;}
	{register object x= (V81),V120= VV[85];
	while(!endp(V120))
	if(eql(x,V120->c.c_car)){
	goto T780;
	}else V120=V120->c.c_cdr;
	goto T779;}
goto T780;
T780:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T779;
T779:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T776;
T776:;
	if(!(((V82))==(VV[86]))){
	goto T786;}
	{register object x= (V81),V121= VV[87];
	while(!endp(V121))
	if(eql(x,V121->c.c_car)){
	goto T790;
	}else V121=V121->c.c_cdr;
	goto T789;}
goto T790;
T790:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T789;
T789:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T786;
T786:;
	if(!(((V82))==(VV[88]))){
	goto T796;}
	{register object x= (V81),V122= VV[89];
	while(!endp(V122))
	if(eql(x,V122->c.c_car)){
	goto T800;
	}else V122=V122->c.c_cdr;
	goto T799;}
goto T800;
T800:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T799;
T799:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T796;
T796:;
	if(!(((V82))==(VV[90]))){
	goto T806;}
	{register object x= (V81),V123= VV[91];
	while(!endp(V123))
	if(eql(x,V123->c.c_car)){
	goto T810;
	}else V123=V123->c.c_cdr;
	goto T809;}
goto T810;
T810:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T809;
T809:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T806;
T806:;
	if(!(((V82))==(VV[92]))){
	goto T816;}
	if(!(((V81))==(VV[92]))){
	goto T819;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T819;
T819:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T816;
T816:;
	if(!(((V82))==(VV[57]))){
	goto T826;}
	if(!(((V81))==(VV[57]))){
	goto T829;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T829;
T829:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T826;
T826:;
	if(!(((V82))==(VV[93]))){
	goto T836;}
	{register object x= (V81),V124= VV[94];
	while(!endp(V124))
	if(eql(x,V124->c.c_car)){
	goto T840;
	}else V124=V124->c.c_cdr;
	goto T839;}
goto T840;
T840:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T839;
T839:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T836;
T836:;
	if(!(((V81))==(VV[93]))){
	goto T846;}
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T846;
T846:;
	if(((V82))==(VV[28])){
	goto T850;}
	if(!(((V82))==(VV[27]))){
	goto T851;}
goto T850;
T850:;
	if(((V81))==(VV[28])){
	goto T855;}
	if((get((V81),VV[35],Cnil))==Cnil){
	goto T856;}
goto T855;
T855:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T856;
T856:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T851;
T851:;
	if(!(((V81))==(VV[28]))){
	goto T865;}
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T865;
T865:;
	V87= get((V81),VV[35],Cnil);
	if(((V87))==Cnil){
	goto T870;}
	{object V125;
	V125= get((V82),VV[35],Cnil);
	if(((V125))==Cnil){
	goto T875;}
	{register object V126;
	V126= (V87);
goto T878;
T878:;
	if(((V126))!=Cnil){
	goto T879;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T879;
T879:;
	if(!(((V126))==(V125))){
	goto T885;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T885;
T885:;
	V126= structure_ref((V126),VV[35],4);
	goto T878;}
goto T875;
T875:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T870;
T870:;
	if(!(((V82))==(VV[95]))){
	goto T896;}
	{register object x= (V81),V128= VV[96];
	while(!endp(V128))
	if(eql(x,V128->c.c_car)){
	goto T901;
	}else V128=V128->c.c_cdr;
	goto T899;}
goto T901;
T901:;
	if(((*(LnkLI142))((V83),(V84)))==Cnil){
	goto T899;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T899;
T899:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T896;
T896:;
	if((get((V82),VV[35],Cnil))==Cnil){
	goto T908;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T908;
T908:;
	{object V129= (V81);
	if((V129!= VV[31]))goto T912;
	{object V130= (V82);
	if((V130!= VV[31]))goto T913;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T913;
T913:;
	if((V130!= VV[13])
	&& (V130!= VV[106]))goto T916;
	if(((*(LnkLI142))(VV[97],(V84)))==Cnil){
	goto T918;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T918;
T918:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T916;
T916:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T912;
T912:;
	if((V129!= VV[32]))goto T926;
	{object V131= (V82);
	if((V131!= VV[106]))goto T927;
	if(((*(LnkLI142))(VV[98],(V84)))==Cnil){
	goto T929;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T929;
T929:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T927;
T927:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T926;
T926:;
	if((V129!= VV[122]))goto T937;
	{register object x= (V82),V132= VV[99];
	while(!endp(V132))
	if(eql(x,V132->c.c_car)){
	goto T940;
	}else V132=V132->c.c_cdr;
	goto T939;}
goto T940;
T940:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T939;
T939:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T937;
T937:;
	if((V129!= VV[143]))goto T945;
	{register object x= (V82),V133= VV[100];
	while(!endp(V133))
	if(eql(x,V133->c.c_car)){
	goto T948;
	}else V133=V133->c.c_cdr;
	goto T947;}
goto T948;
T948:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T947;
T947:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T945;
T945:;
	if((V129!= VV[123]))goto T953;
	{register object x= (V82),V134= VV[101];
	while(!endp(V134))
	if(eql(x,V134->c.c_car)){
	goto T956;
	}else V134=V134->c.c_cdr;
	goto T955;}
goto T956;
T956:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T955;
T955:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T953;
T953:;
	if((V129!= VV[144]))goto T961;
	{register object x= (V82),V135= VV[102];
	while(!endp(V135))
	if(eql(x,V135->c.c_car)){
	goto T964;
	}else V135=V135->c.c_cdr;
	goto T963;}
goto T964;
T964:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T963;
T963:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T961;
T961:;
	if((V129!= VV[145]))goto T969;
	{register object x= (V82),V136= VV[103];
	while(!endp(V136))
	if(eql(x,V136->c.c_car)){
	goto T972;
	}else V136=V136->c.c_cdr;
	goto T971;}
goto T972;
T972:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T971;
T971:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T969;
T969:;
	if((V129!= VV[24]))goto T977;
	if(!(((V82))==(VV[104]))){
	goto T979;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T979;
T979:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T977;
T977:;
	if((V129!= VV[104]))goto T985;
	if(!(((V82))==(VV[24]))){
	goto T987;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T987;
T987:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T985;
T985:;
	if((V129!= VV[13]))goto T993;
	{register object x= (V82),V137= VV[105];
	while(!endp(V137))
	if(eql(x,V137->c.c_car)){
	goto T996;
	}else V137=V137->c.c_cdr;
	goto T995;}
goto T996;
T996:;
	base[2]= (*(LnkLI142))((V83),(V84));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T995;
T995:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T993;
T993:;
	if((V129!= VV[106]))goto T1001;
	if(!(((V82))==(VV[106]))){
	goto T1003;}
	base[2]= (*(LnkLI142))((V83),(V84));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1003;
T1003:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1001;
T1001:;
	if((V129!= VV[107]))goto T1009;
	if(!(((V82))==(VV[107]))){
	goto T1011;}
	base[2]= (*(LnkLI142))((V83),(V84));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1011;
T1011:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1009;
T1009:;
	if((V129!= VV[33]))goto T1017;
	{register object x= (V82),V138= VV[108];
	while(!endp(V138))
	if(eql(x,V138->c.c_car)){
	goto T1020;
	}else V138=V138->c.c_cdr;
	goto T1019;}
goto T1020;
T1020:;
	base[2]= (*(LnkLI142))((V83),(V84));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1019;
T1019:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1017;
T1017:;
	if((V129!= VV[127])
	&& (V129!= VV[128])
	&& (V129!= VV[34]))goto T1025;
	{register object x= (V82),V139= VV[109];
	while(!endp(V139))
	if(eql(x,V139->c.c_car)){
	goto T1028;
	}else V139=V139->c.c_cdr;
	goto T1027;}
goto T1028;
T1028:;
	base[2]= (*(LnkLI142))((V83),(V84));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1027;
T1027:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1025;
T1025:;
	if((V129!= VV[110]))goto T1033;
	if(!(((V82))==(VV[110]))){
	goto T1035;}{object V140;
	V140= car((V83));
	if(V140==Cnil)goto T1039;
	V79= V140;
	goto T1038;
goto T1039;
T1039:;}
	V79= Ct;
goto T1038;
T1038:;{object V141;
	V141= car((V84));
	if(V141==Cnil)goto T1042;
	V80= V141;
	goto T1041;
goto T1042;
T1042:;}
	V80= Ct;
goto T1041;
T1041:;
	goto TTL;
goto T1035;
T1035:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1033;
T1033:;
	if((V129!= VV[26]))goto T1046;
	if(((V82))==(VV[26])){
	goto T1047;}
	if(!(((V82))==(VV[22]))){
	goto T1048;}
goto T1047;
T1047:;
	if(endp_prop((V83))){
	goto T1053;}
	if(!((car((V83)))==(VV[17]))){
	goto T1054;}
goto T1053;
T1053:;
	if(endp_prop((V84))){
	goto T1052;}
	if((car((V84)))==(VV[17])){
	goto T1052;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1054;
T1054:;
	if(endp_prop((V84))){
	goto T1052;}
	if((car((V84)))==(VV[17])){
	goto T1052;}
	if(equal(car((V83)),car((V84)))){
	goto T1052;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1052;
T1052:;
	if(endp_prop(cdr((V83)))){
	goto T1073;}
	if(!((cadr((V83)))==(VV[17]))){
	goto T1072;}
goto T1073;
T1073:;
	if(endp_prop(cdr((V84)))){
	goto T1077;}
	if(!((cadr((V84)))==(VV[17]))){
	goto T1078;}
goto T1077;
T1077:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1078;
T1078:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1072;
T1072:;
	if(endp_prop(cdr((V84)))){
	goto T1087;}
	if(!((cadr((V84)))==(VV[17]))){
	goto T1086;}
goto T1087;
T1087:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1086;
T1086:;
	base[2]= (*(LnkLI130))(cadr((V83)),cadr((V84)));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1048;
T1048:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1046;
T1046:;
	if((V129!= VV[22]))goto T1097;
	if(!(((V82))==(VV[22]))){
	goto T1099;}
	if(endp_prop((V83))){
	goto T1102;}
	if(!((car((V83)))==(VV[17]))){
	goto T1103;}
goto T1102;
T1102:;
	if(endp_prop((V84))){
	goto T1101;}
	if((car((V84)))==(VV[17])){
	goto T1101;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1103;
T1103:;
	if(endp_prop((V84))){
	goto T1101;}
	if((car((V84)))==(VV[17])){
	goto T1101;}
	if(equal(car((V83)),car((V84)))){
	goto T1101;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1101;
T1101:;
	if(endp_prop(cdr((V83)))){
	goto T1122;}
	if(!((cadr((V83)))==(VV[17]))){
	goto T1121;}
goto T1122;
T1122:;
	if(endp_prop(cdr((V84)))){
	goto T1126;}
	if(!((cadr((V84)))==(VV[17]))){
	goto T1127;}
goto T1126;
T1126:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1127;
T1127:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1121;
T1121:;
	if(endp_prop(cdr((V84)))){
	goto T1136;}
	if(!((cadr((V84)))==(VV[17]))){
	goto T1135;}
goto T1136;
T1136:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1135;
T1135:;
	base[2]= (*(LnkLI130))(cadr((V83)),cadr((V84)));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1099;
T1099:;
	base[2]= Cnil;
	base[3]= (V86);
	vs_top=(vs_base=base+2)+2;
	return;
goto T1097;
T1097:;
	if(((V85))==Cnil){
	goto T1147;}
	base[2]= (((V81))==((V82))?Ct:Cnil);
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T1147;
T1147:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;}}
	}
}
/*	local entry for function SUB-INTERVAL-P	*/

static object LI22(V144,V145)

register object V144;register object V145;
{	 VMB22 VMS22 VMV22
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
	goto T1155;}
	V146= VV[17];
	V147= VV[17];
	goto T1153;
goto T1155;
T1155:;
	if(!(endp_prop(cdr((V144))))){
	goto T1161;}
	V146= car((V144));
	V147= VV[17];
	goto T1153;
goto T1161;
T1161:;
	V146= car((V144));
	V147= cadr((V144));
goto T1153;
T1153:;
	if(!(endp_prop((V145)))){
	goto T1171;}
	V148= VV[17];
	V149= VV[17];
	goto T1169;
goto T1171;
T1171:;
	if(!(endp_prop(cdr((V145))))){
	goto T1177;}
	V148= car((V145));
	V149= VV[17];
	goto T1169;
goto T1177;
T1177:;
	V148= car((V145));
	V149= cadr((V145));
goto T1169;
T1169:;
	if(!(((V146))==(VV[17]))){
	goto T1187;}
	if(((V148))==(VV[17])){
	goto T1185;}
	{object V150 = Cnil;
	VMR22(V150)}
goto T1187;
T1187:;
	{object V151;
	V151= (((V148))==(VV[17])?Ct:Cnil);
	if(((V151))==Cnil){
	goto T1193;}
	goto T1185;
goto T1193;
T1193:;
	if(!(type_of((V146))==t_cons)){
	goto T1196;}
	if(!(type_of((V148))==t_cons)){
	goto T1199;}
	if(!(number_compare(car((V146)),car((V148)))<0)){
	goto T1185;}
	{object V152 = Cnil;
	VMR22(V152)}
goto T1199;
T1199:;
	if(!(number_compare(car((V146)),(V148))<0)){
	goto T1185;}
	{object V153 = Cnil;
	VMR22(V153)}
goto T1196;
T1196:;
	{object V154;
	if(!(type_of((V148))==t_cons)){
	goto T1207;}
	if(!(number_compare((V146),car((V148)))<=0)){
	goto T1210;}
	{object V155 = Cnil;
	VMR22(V155)}
goto T1210;
T1210:;
	V154= Cnil;
	goto T1205;
goto T1207;
T1207:;
	if(!(number_compare((V146),(V148))<0)){
	goto T1213;}
	{object V156 = Cnil;
	VMR22(V156)}
goto T1213;
T1213:;
	V154= Cnil;
goto T1205;
T1205:;
	if(((V154))==Cnil){
	goto T1185;}}}
goto T1185;
T1185:;
	if(!(((V147))==(VV[17]))){
	goto T1219;}
	if(((V149))==(VV[17])){
	goto T1217;}
	{object V157 = Cnil;
	VMR22(V157)}
goto T1219;
T1219:;
	{object V158;
	V158= (((V149))==(VV[17])?Ct:Cnil);
	if(((V158))==Cnil){
	goto T1225;}
	goto T1217;
goto T1225;
T1225:;
	if(!(type_of((V147))==t_cons)){
	goto T1228;}
	if(!(type_of((V149))==t_cons)){
	goto T1231;}
	if(!(number_compare(car((V147)),car((V149)))>0)){
	goto T1217;}
	{object V159 = Cnil;
	VMR22(V159)}
goto T1231;
T1231:;
	if(!(number_compare(car((V147)),(V149))>0)){
	goto T1217;}
	{object V160 = Cnil;
	VMR22(V160)}
goto T1228;
T1228:;
	{object V161;
	if(!(type_of((V149))==t_cons)){
	goto T1239;}
	if(!(number_compare((V147),car((V149)))>=0)){
	goto T1242;}
	{object V162 = Cnil;
	VMR22(V162)}
goto T1242;
T1242:;
	V161= Cnil;
	goto T1237;
goto T1239;
T1239:;
	if(!(number_compare((V147),(V149))>0)){
	goto T1245;}
	{object V163 = Cnil;
	VMR22(V163)}
goto T1245;
T1245:;
	V161= Cnil;
goto T1237;
T1237:;
	if(((V161))==Cnil){
	goto T1217;}}}
goto T1217;
T1217:;
	{object V164 = Ct;
	VMR22(V164)}}
	return Cnil;
}
/*	local entry for function IN-INTERVAL-P	*/

static object LI23(V167,V168)

register object V167;register object V168;
{	 VMB23 VMS23 VMV23
goto TTL;
TTL:;
	{register object V169;
	register object V170;
	V169= Cnil;
	V170= Cnil;
	if(!(endp_prop((V168)))){
	goto T1251;}
	V169= VV[17];
	V170= VV[17];
	goto T1249;
goto T1251;
T1251:;
	if(!(endp_prop(cdr((V168))))){
	goto T1257;}
	V169= car((V168));
	V170= VV[17];
	goto T1249;
goto T1257;
T1257:;
	V169= car((V168));
	V170= cadr((V168));
goto T1249;
T1249:;
	{object V171;
	V171= (((V169))==(VV[17])?Ct:Cnil);
	if(((V171))==Cnil){
	goto T1268;}
	goto T1265;
goto T1268;
T1268:;
	if(!(type_of((V169))==t_cons)){
	goto T1271;}
	if(!(number_compare((V167),car((V169)))<=0)){
	goto T1265;}
	{object V172 = Cnil;
	VMR23(V172)}
goto T1271;
T1271:;
	{object V173;
	if(!(number_compare((V167),(V169))<0)){
	goto T1277;}
	{object V174 = Cnil;
	VMR23(V174)}
goto T1277;
T1277:;
	V173= Cnil;
	if(((V173))==Cnil){
	goto T1265;}}}
goto T1265;
T1265:;
	{object V175;
	V175= (((V170))==(VV[17])?Ct:Cnil);
	if(((V175))==Cnil){
	goto T1284;}
	goto T1281;
goto T1284;
T1284:;
	if(!(type_of((V170))==t_cons)){
	goto T1287;}
	if(!(number_compare((V167),car((V170)))>=0)){
	goto T1281;}
	{object V176 = Cnil;
	VMR23(V176)}
goto T1287;
T1287:;
	{object V177;
	if(!(number_compare((V167),(V170))>0)){
	goto T1293;}
	{object V178 = Cnil;
	VMR23(V178)}
goto T1293;
T1293:;
	V177= Cnil;
	if(((V177))==Cnil){
	goto T1281;}}}
goto T1281;
T1281:;
	{object V179 = Ct;
	VMR23(V179)}}
	return Cnil;
}
/*	local entry for function MATCH-DIMENSIONS	*/

static object LI24(V182,V183)

object V182;register object V183;
{	 VMB24 VMS24 VMV24
goto TTL;
TTL:;
	if(((V182))!=Cnil){
	goto T1298;}
	{object V184 = (((V183))==Cnil?Ct:Cnil);
	VMR24(V184)}
goto T1298;
T1298:;
	if(!((car((V183)))==(VV[17]))){
	goto T1302;}
	goto T1300;
goto T1302;
T1302:;
	if(eql(car((V182)),car((V183)))){
	goto T1300;}
	{object V185 = Cnil;
	VMR24(V185)}
goto T1300;
T1300:;
	V182= cdr((V182));
	V183= cdr((V183));
	goto TTL;
	return Cnil;
}
/*	local entry for function COERCE	*/

static object LI25(V188,V189)

register object V188;object V189;
{	 VMB25 VMS25 VMV25
goto TTL;
TTL:;
	base[0]= (V188);
	base[1]= (V189);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1307;}
	{object V190 = (V188);
	VMR25(V190)}
goto T1307;
T1307:;
	V189= (*(LnkLI139))((V189));
	{object V191= car((V189));
	if((V191!= VV[45]))goto T1314;
	{register object V192;
	register object V193;
	V194 = make_fixnum((long)length((V188)));
	V193= one_minus(V194);
	V192= Cnil;
goto T1317;
T1317:;
	if(!(number_compare((V193),small_fixnum(0))<0)){
	goto T1318;}
	{object V195 = (V192);
	VMR25(V195)}
goto T1318;
T1318:;
	V196= elt((V188),fixint((V193)));
	V192= make_cons(/* INLINE-ARGS */V196,(V192));
	V193= one_minus((V193));
	goto T1317;}
goto T1314;
T1314:;
	if((V191!= VV[22])
	&& (V191!= VV[26]))goto T1326;
	if(endp_prop(cdr((V189)))){
	goto T1327;}
	if(endp_prop(cddr((V189)))){
	goto T1327;}
	if((caddr((V189)))==(VV[17])){
	goto T1327;}
	if(endp_prop(cdr(caddr((V189))))){
	goto T1327;}
	base[0]= VV[111];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T1327;
T1327:;
	{register object V197;
	register object V198;
	register object V199;
	V200 = make_fixnum((long)length((V188)));
	V197= (VFUN_NARGS=2,(*(LnkLI146))((V189),V200));
	V199= make_fixnum((long)length((V188)));
	V198= small_fixnum(0);
goto T1340;
T1340:;
	if(!(number_compare((V198),(V199))>=0)){
	goto T1341;}
	{object V201 = (V197);
	VMR25(V201)}
goto T1341;
T1341:;
	V202= elt((V188),fixint((V198)));
	(void)(elt_set((V197),fixint((V198)),/* INLINE-ARGS */V202));
	V198= one_plus((V198));
	goto T1340;}
goto T1326;
T1326:;
	if((V191!= VV[104]))goto T1349;
	base[0]= (V188);
	vs_top=(vs_base=base+0)+1;
	Lcharacter();
	vs_top=sup;
	{object V203 = vs_base[0];
	VMR25(V203)}
goto T1349;
T1349:;
	if((V191!= VV[107]))goto T1351;
	base[0]= (V188);
	vs_top=(vs_base=base+0)+1;
	Lfloat();
	vs_top=sup;
	{object V204 = vs_base[0];
	VMR25(V204)}
goto T1351;
T1351:;
	if((V191!= VV[33]))goto T1353;
	base[0]= (V188);
	base[1]= VV[112];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V205 = vs_base[0];
	VMR25(V205)}
goto T1353;
T1353:;
	if((V191!= VV[127])
	&& (V191!= VV[128])
	&& (V191!= VV[34]))goto T1356;
	base[0]= (V188);
	base[1]= VV[113];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V206 = vs_base[0];
	VMR25(V206)}
goto T1356;
T1356:;
	if((V191!= VV[110]))goto T1359;
	if((cdr((V189)))==Cnil){
	goto T1360;}
	if((cadr((V189)))==Cnil){
	goto T1360;}
	if(!((cadr((V189)))==(VV[17]))){
	goto T1361;}
goto T1360;
T1360:;
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
	VMR25(V207)}
goto T1361;
T1361:;
	base[1]= (V188);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	V208= vs_base[0];
	base[0]= (*(LnkLI147))(V208,cadr((V189)));
	base[2]= (V188);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V209= vs_base[0];
	base[1]= (*(LnkLI147))(V209,cadr((V189)));
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V210 = vs_base[0];
	VMR25(V210)}
goto T1359;
T1359:;
	base[0]= VV[114];
	base[1]= (V188);
	base[2]= (V189);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V211 = vs_base[0];
	VMR25(V211)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WARN-VERSION	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	{object V212;
	object V213;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V212=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1380;}
	V213=(base[1]);
	vs_top=sup;
	goto T1381;
goto T1380;
T1380:;
	V213= Cnil;
goto T1381;
T1381:;
	if(symbol_value(VV[115])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	if(!(((eql((V212),symbol_value(VV[115]))?Ct:Cnil))==Cnil)){
	goto T1385;}
	goto T1383;
goto T1385;
T1385:;
	if(((eql((V213),symbol_value(VV[116]))?Ct:Cnil))==Cnil){
	goto T1383;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T1383;
T1383:;
	if(symbol_value(VV[117])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	base[2]= Ct;
	base[3]= VV[118];
	base[4]= (V213);
	base[5]= (V212);
	vs_top=(vs_base=base+2)+4;
	Lformat();
	return;
	}
}
static object  LnkTLI147(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[147],(void **)&LnkLI147,2,ap);va_end(ap);return V1;} /* COERCE */
static object  LnkTLI146(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[146],(void **)&LnkLI146,ap);va_end(ap);return V1;} /* MAKE-SEQUENCE */
static object  LnkTLI142(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[142],(void **)&LnkLI142,2,ap);va_end(ap);return V1;} /* SUB-INTERVAL-P */
static object  LnkTLI141(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[141],(void **)&LnkLI141,1,ap);va_end(ap);return V1;} /* KNOWN-TYPE-P */
static void LnkT140(){ call_or_link(VV[140],(void **)&Lnk140);} /* SUBTYPEP */
static object  LnkTLI139(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[139],(void **)&LnkLI139,1,ap);va_end(ap);return V1;} /* NORMALIZE-TYPE */
static void LnkT138(){ call_or_link(VV[138],(void **)&Lnk138);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI137(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[137],(void **)&LnkLI137,1,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI136(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[136],(void **)&LnkLI136,1,ap);va_end(ap);return V1;} /* SIMPLE-ARRAY-P */
static object  LnkTLI131(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[131],(void **)&LnkLI131,1,ap);va_end(ap);return V1;} /* ARRAY-DIMENSIONS */
static object  LnkTLI130(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[130],(void **)&LnkLI130,2,ap);va_end(ap);return V1;} /* MATCH-DIMENSIONS */
static void LnkT126(){ call_or_link(VV[126],(void **)&Lnk126);} /* REALP */
static void LnkT125(){ call_or_link(VV[125],(void **)&Lnk125);} /* RATIONALP */
static object  LnkTLI124(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[124],(void **)&LnkLI124,2,ap);va_end(ap);return V1;} /* IN-INTERVAL-P */
static void LnkT121(){ call_or_link(VV[121],(void **)&Lnk121);} /* TYPEP */
static void LnkT120(){ call_or_link(VV[120],(void **)&Lnk120);} /* ARRAY-HAS-FILL-POINTER-P */
static object  LnkTLI119(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[119],(void **)&LnkLI119,1,ap);va_end(ap);return V1;} /* FIND-DOCUMENTATION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

