
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
	V13= (*(LnkLI75))(base[4]);
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
	(void) (*Lnk76)();
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
	object V42;
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
	{object V43;
	V43= get((V40),VV[27],Cnil);
	if(((V43))==Cnil){
	goto T98;}
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V43));
	return;}
goto T98;
T98:;
	{object V44= (V40);
	if((V44!= VV[36]))goto T103;
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
goto T103;
T103:;
	if((V44!= VV[39]))goto T104;
	base[2]= (V38);
	base[3]= car((V41));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	V46= vs_base[0];
	base[2]= ((V46)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T104;
T104:;
	if((V44!= VV[37]))goto T108;
	{register object V47;
	V47= (V41);
goto T110;
T110:;
	if(((V47))!=Cnil){
	goto T111;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T111;
T111:;
	base[2]= (V38);
	base[3]= car((V47));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T115;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T115;
T115:;
	V47= cdr((V47));
	goto T110;}
goto T108;
T108:;
	if((V44!= VV[38]))goto T123;
	{register object V48;
	V48= (V41);
goto T125;
T125:;
	if(((V48))!=Cnil){
	goto T126;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T126;
T126:;
	base[2]= (V38);
	base[3]= car((V48));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T130;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T130;
T130:;
	V48= cdr((V48));
	goto T125;}
goto T123;
T123:;
	if((V44!= VV[78]))goto T138;
	base[2]= car((V41));
	base[3]= (V38);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event(base[2]);
	return;
goto T138;
T138:;
	if((V44!= Ct))goto T141;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T141;
T141:;
	if((V44!= Cnil))goto T142;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T142;
T142:;
	if((V44!= VV[28]))goto T143;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V49= vs_base[0];
	base[2]= ((V49)==(VV[28])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T143;
T143:;
	if((V44!= VV[29]))goto T146;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V50= vs_base[0];
	base[2]= ((V50)==(VV[29])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T146;
T146:;
	if((V44!= VV[30]))goto T149;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V51= vs_base[0];
	base[2]= ((V51)==(VV[30])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T149;
T149:;
	if((V44!= VV[79]))goto T152;
	if(type_of((V38))==t_character){
	goto T153;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T153;
T153:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lstandard_char_p();
	return;
goto T152;
T152:;
	if((V44!= VV[24]))goto T156;
	if(type_of((V38))==t_character){
	goto T157;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T157;
T157:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lstring_char_p();
	return;
goto T156;
T156:;
	if((V44!= VV[13]))goto T160;
	if(type_of((V38))==t_fixnum||type_of((V38))==t_bignum){
	goto T161;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T161;
T161:;
	base[2]= (*(LnkLI80))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T160;
T160:;
	if((V44!= VV[62]))goto T163;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk81)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T164;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T164;
T164:;
	base[2]= (*(LnkLI80))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T163;
T163:;
	if((V44!= VV[54]))goto T167;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk82)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T168;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T168;
T168:;
	base[2]= (*(LnkLI80))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T167;
T167:;
	if((V44!= VV[63]))goto T171;
	if(type_of((V38))==t_shortfloat||type_of((V38))==t_longfloat){
	goto T172;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T172;
T172:;
	base[2]= (*(LnkLI80))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T171;
T171:;
	if((V44!= VV[31]))goto T174;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V52= vs_base[0];
	if((V52)==(VV[31])){
	goto T175;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T175;
T175:;
	base[2]= (*(LnkLI80))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T174;
T174:;
	if((V44!= VV[83])
	&& (V44!= VV[84])
	&& (V44!= VV[32]))goto T179;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V53= vs_base[0];
	if((V53)==(VV[32])){
	goto T180;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T180;
T180:;
	base[2]= (*(LnkLI80))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T179;
T179:;
	if((V44!= VV[66]))goto T184;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lcomplexp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T185;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T185;
T185:;
	if(!(((V41))==Cnil)){
	goto T188;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T188;
T188:;
	base[3]= (V38);
	vs_top=(vs_base=base+3)+1;
	Lrealpart();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= car((V41));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T190;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T190;
T190:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V38= vs_base[0];
	V39= car((V41));
	goto TTL;
goto T184;
T184:;
	if((V44!= VV[43]))goto T199;
	if(!(type_of((V38))==t_cons||((V38))==Cnil)){
	goto T200;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T200;
T200:;
	base[2]= (type_of((V38))==t_vector||
type_of((V38))==t_string||
type_of((V38))==t_bitvector?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T199;
T199:;
	if((V44!= VV[85]))goto T202;
	if(type_of((V38))==t_string){
	goto T203;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T203;
T203:;
	if(!(((V41))==Cnil)){
	goto T205;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T205;
T205:;
	V54= (*(LnkLI87))((V38));
	base[2]= (*(LnkLI86))(/* INLINE-ARGS */V54,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T202;
T202:;
	if((V44!= VV[88]))goto T207;
	if((type_of((V38))==t_bitvector)){
	goto T208;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T208;
T208:;
	if(!(((V41))==Cnil)){
	goto T210;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T210;
T210:;
	V55= (*(LnkLI87))((V38));
	base[2]= (*(LnkLI86))(/* INLINE-ARGS */V55,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T207;
T207:;
	if((V44!= VV[89]))goto T212;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lsimple_string_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T213;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T213;
T213:;
	if(!(((V41))==Cnil)){
	goto T216;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T216;
T216:;
	V56= (*(LnkLI87))((V38));
	base[2]= (*(LnkLI86))(/* INLINE-ARGS */V56,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T212;
T212:;
	if((V44!= VV[90]))goto T218;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lsimple_bit_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T219;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T219;
T219:;
	if(!(((V41))==Cnil)){
	goto T222;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T222;
T222:;
	V57= (*(LnkLI87))((V38));
	base[2]= (*(LnkLI86))(/* INLINE-ARGS */V57,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T218;
T218:;
	if((V44!= VV[91]))goto T224;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lsimple_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T225;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T225;
T225:;
	if(!(((V41))==Cnil)){
	goto T228;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T228;
T228:;
	V58= (*(LnkLI87))((V38));
	base[2]= (*(LnkLI86))(/* INLINE-ARGS */V58,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T224;
T224:;
	if((V44!= VV[26]))goto T230;
	if(((*(LnkLI92))((V38)))!=Cnil){
	goto T231;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T231;
T231:;
	if(!(endp((V41)))){
	goto T235;}
	goto T233;
goto T235;
T235:;
	if(!((car((V41)))==(VV[17]))){
	goto T237;}
	goto T233;
goto T237;
T237:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V59= vs_base[0];
	V60= (*(LnkLI93))(car((V41)));
	if(equal(V59,/* INLINE-ARGS */V60)){
	goto T233;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T233;
T233:;
	if(!(endp(cdr((V41))))){
	goto T241;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T241;
T241:;
	if(!((cadr((V41)))==(VV[17]))){
	goto T243;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T243;
T243:;
	V61= (*(LnkLI87))((V38));
	base[2]= (*(LnkLI86))(/* INLINE-ARGS */V61,cadr((V41)));
	vs_top=(vs_base=base+2)+1;
	return;
goto T230;
T230:;
	if((V44!= VV[22]))goto T245;
	if(type_of((V38))==t_array||
type_of((V38))==t_vector||
type_of((V38))==t_string||
type_of((V38))==t_bitvector){
	goto T246;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T246;
T246:;
	if(!(endp((V41)))){
	goto T250;}
	goto T248;
goto T250;
T250:;
	if(!((car((V41)))==(VV[17]))){
	goto T252;}
	goto T248;
goto T252;
T252:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V62= vs_base[0];
	V63= (*(LnkLI93))(car((V41)));
	if(equal(V62,/* INLINE-ARGS */V63)){
	goto T248;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T248;
T248:;
	if(!(endp(cdr((V41))))){
	goto T256;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T256;
T256:;
	if(!((cadr((V41)))==(VV[17]))){
	goto T258;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T258;
T258:;
	V64= (*(LnkLI87))((V38));
	base[2]= (*(LnkLI86))(/* INLINE-ARGS */V64,cadr((V41)));
	vs_top=(vs_base=base+2)+1;
	return;
goto T245;
T245:;
	V42= get((V40),VV[33],Cnil);
	if(((V42))==Cnil){
	goto T261;}
	base[2]= (V38);
	base[3]= (V42);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk94)();
	return;
goto T261;
T261:;
	if((get((V40),VV[34],Cnil))==Cnil){
	goto T267;}
	base[2]= get((V40),VV[34],Cnil);
	{object V65;
	V65= (V41);
	 vs_top=base+3;
	 while(!endp(V65))
	 {vs_push(car(V65));V65=cdr(V65);}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	vs_top=sup;
	V39= vs_base[0];
	goto TTL;
goto T267;
T267:;
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
goto T277;
T277:;
	if(!(type_of((V67))!=t_cons)){
	goto T281;}
	V68= (V67);
	V69= Cnil;
	goto T279;
goto T281;
T281:;
	V68= car((V67));
	V69= cdr((V67));
goto T279;
T279:;
	if((get((V68),VV[34],Cnil))==Cnil){
	goto T290;}
	base[0]= get((V68),VV[34],Cnil);
	{object V70;
	V70= (V69);
	 vs_top=base+1;
	 while(!endp(V70))
	 {vs_push(car(V70));V70=cdr(V70);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V67= vs_base[0];
	goto T278;
goto T290;
T290:;
	if(!(type_of((V67))!=t_cons)){
	goto T296;}
	{object V71 = make_cons((V67),Cnil);
	VMR19(V71)}
goto T296;
T296:;
	{object V72 = (V67);
	VMR19(V72)}
goto T278;
T278:;
	goto T277;}
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
	goto T299;}
	V74= car((V74));
goto T299;
T299:;
	{register object x= (V74),V75= VV[35];
	while(!endp(V75))
	if(eql(x,V75->c.c_car)){
	goto T303;
	}else V75=V75->c.c_cdr;}
	if((get((V74),VV[33],Cnil))==Cnil){
	goto T304;}
goto T303;
T303:;
	{object V76 = Ct;
	VMR20(V76)}
goto T304;
T304:;
	{object V77 = Cnil;
	VMR20(V77)}
	return Cnil;
}
/*	function definition for SUBTYPEP	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{object V78;
	object V79;
	check_arg(2);
	V78=(base[0]);
	V79=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V80;
	object V81;
	object V82;
	object V83;
	object V84;
	object V85;
	object V86;
	V80= Cnil;
	V81= Cnil;
	V82= Cnil;
	V83= Cnil;
	V84= Cnil;
	V85= Cnil;
	V86= Cnil;
	V78= (*(LnkLI95))((V78));
	V79= (*(LnkLI95))((V79));
	if(!(equal((V78),(V79)))){
	goto T319;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T319;
T319:;
	V80= car((V78));
	V81= car((V79));
	V82= cdr((V78));
	V83= cdr((V79));
	if(!(((V80))==(VV[36]))){
	goto T334;}
	{register object V87;
	object V88;
	V87= (V82);
	V88= car((V87));
goto T340;
T340:;
	if(!(endp((V87)))){
	goto T341;}
	goto T336;
goto T341;
T341:;
	base[3]= (V88);
	base[4]= (V79);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T345;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
goto T345;
T345:;
	V87= cdr((V87));
	V88= car((V87));
	goto T340;}
goto T336;
T336:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T334;
T334:;
	if(!(((V80))==(VV[37]))){
	goto T360;}
	{register object V89;
	object V90;
	V89= (V82);
	V90= car((V89));
goto T366;
T366:;
	if(!(endp((V89)))){
	goto T367;}
	goto T362;
goto T367;
T367:;
	{object V91;
	object V92;
	base[3]= (V90);
	base[4]= (V79);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk96)();
	if(vs_base>=vs_top){vs_top=sup;goto T375;}
	V91= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T376;}
	V92= vs_base[0];
	vs_top=sup;
	goto T377;
goto T375;
T375:;
	V91= Cnil;
goto T376;
T376:;
	V92= Cnil;
goto T377;
T377:;
	if(((V91))!=Cnil){
	goto T371;}
	base[3]= (V91);
	base[4]= (V92);
	vs_top=(vs_base=base+3)+2;
	return;}
goto T371;
T371:;
	V89= cdr((V89));
	V90= car((V89));
	goto T366;}
goto T362;
T362:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T360;
T360:;
	if(!(((V80))==(VV[38]))){
	goto T390;}
	{register object V93;
	object V94;
	V93= (V82);
	V94= car((V93));
goto T396;
T396:;
	if(!(endp((V93)))){
	goto T397;}
	goto T392;
goto T397;
T397:;
	{object V95;
	base[3]= (V94);
	base[4]= (V79);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk96)();
	vs_top=sup;
	V95= vs_base[0];
	if(((V95))==Cnil){
	goto T401;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}
goto T401;
T401:;
	V93= cdr((V93));
	V94= car((V93));
	goto T396;}
goto T392;
T392:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T390;
T390:;
	if(!(((V80))==(VV[39]))){
	goto T332;}
	if(!(((V81))==(VV[39]))){
	goto T419;}
	V78= car((V83));
	V79= car((V82));
	goto TTL;
goto T419;
T419:;
	V78= Ct;
	V79= list(3,VV[37],(V79),car((V82)));
	goto TTL;
goto T332;
T332:;
	if(!(((V81))==(VV[36]))){
	goto T429;}
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T429;
T429:;
	if(!(((V81))==(VV[37]))){
	goto T434;}
	{register object V96;
	object V97;
	V96= (V83);
	V97= car((V96));
goto T440;
T440:;
	if(!(endp((V96)))){
	goto T441;}
	goto T436;
goto T441;
T441:;
	{object V98;
	base[3]= (V78);
	base[4]= (V97);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk96)();
	vs_top=sup;
	V98= vs_base[0];
	if(((V98))==Cnil){
	goto T445;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}
goto T445;
T445:;
	V96= cdr((V96));
	V97= car((V96));
	goto T440;}
goto T436;
T436:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T434;
T434:;
	if(!(((V81))==(VV[38]))){
	goto T461;}
	{register object V99;
	object V100;
	V99= (V83);
	V100= car((V99));
goto T467;
T467:;
	if(!(endp((V99)))){
	goto T468;}
	goto T463;
goto T468;
T468:;
	{object V101;
	object V102;
	base[3]= (V78);
	base[4]= (V100);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk96)();
	if(vs_base>=vs_top){vs_top=sup;goto T476;}
	V101= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T477;}
	V102= vs_base[0];
	vs_top=sup;
	goto T478;
goto T476;
T476:;
	V101= Cnil;
goto T477;
T477:;
	V102= Cnil;
goto T478;
T478:;
	if(((V101))!=Cnil){
	goto T472;}
	base[3]= (V101);
	base[4]= (V102);
	vs_top=(vs_base=base+3)+2;
	return;}
goto T472;
T472:;
	V99= cdr((V99));
	V100= car((V99));
	goto T467;}
goto T463;
T463:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T461;
T461:;
	if(!(((V81))==(VV[39]))){
	goto T427;}
	V78= list(3,VV[38],(V78),car((V83)));
	V79= Cnil;
	goto TTL;
goto T427;
T427:;
	V84= (*(LnkLI97))((V78));
	V85= (*(LnkLI97))((V79));
	if(((V80))==(Cnil)){
	goto T499;}
	if(((V81))==(Ct)){
	goto T499;}
	if(!(((V81))==(VV[40]))){
	goto T500;}
goto T499;
T499:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T500;
T500:;
	if(!(((V81))==(Cnil))){
	goto T509;}
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T509;
T509:;
	if(!(((V80))==(Ct))){
	goto T514;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T514;
T514:;
	if(!(((V80))==(VV[40]))){
	goto T519;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T519;
T519:;
	if(!(((V81))==(VV[41]))){
	goto T524;}
	{register object x= (V80),V103= VV[42];
	while(!endp(V103))
	if(eql(x,V103->c.c_car)){
	goto T528;
	}else V103=V103->c.c_cdr;
	goto T527;}
goto T528;
T528:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T527;
T527:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T524;
T524:;
	if(!(((V81))==(VV[43]))){
	goto T534;}
	{register object x= (V80),V104= VV[44];
	while(!endp(V104))
	if(eql(x,V104->c.c_car)){
	goto T538;
	}else V104=V104->c.c_cdr;
	goto T537;}
goto T538;
T538:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T537;
T537:;
	if(!(((V80))==(VV[22]))){
	goto T542;}
	if((cdr((V82)))==Cnil){
	goto T545;}
	if(!(type_of(cadr((V82)))==t_cons)){
	goto T545;}
	if((cdadr((V82)))!=Cnil){
	goto T545;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T545;
T545:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T542;
T542:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T534;
T534:;
	if(!(((V80))==(VV[41]))){
	goto T558;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T558;
T558:;
	if(!(((V80))==(VV[43]))){
	goto T563;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T563;
T563:;
	if(!(((V81))==(VV[45]))){
	goto T568;}
	{register object x= (V80),V105= VV[46];
	while(!endp(V105))
	if(eql(x,V105->c.c_car)){
	goto T572;
	}else V105=V105->c.c_cdr;
	goto T571;}
goto T572;
T572:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T571;
T571:;
	if(((V84))==Cnil){
	goto T576;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T576;
T576:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T568;
T568:;
	if(!(((V80))==(VV[45]))){
	goto T583;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T583;
T583:;
	if(!(((V81))==(VV[47]))){
	goto T588;}
	{register object x= (V80),V106= VV[48];
	while(!endp(V106))
	if(eql(x,V106->c.c_car)){
	goto T592;
	}else V106=V106->c.c_cdr;
	goto T591;}
goto T592;
T592:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T591;
T591:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T588;
T588:;
	if(!(((V81))==(VV[49]))){
	goto T598;}
	if(!(((V80))==(VV[49]))){
	goto T601;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T601;
T601:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T598;
T598:;
	if(!(((V81))==(VV[50]))){
	goto T608;}
	if(!(((V80))==(VV[50]))){
	goto T611;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T611;
T611:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T608;
T608:;
	if(!(((V81))==(VV[51]))){
	goto T618;}
	{register object x= (V80),V107= VV[52];
	while(!endp(V107))
	if(eql(x,V107->c.c_car)){
	goto T622;
	}else V107=V107->c.c_cdr;
	goto T621;}
goto T622;
T622:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T621;
T621:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T618;
T618:;
	if(!(((V80))==(VV[51]))){
	goto T628;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T628;
T628:;
	if(!(((V81))==(VV[53]))){
	goto T633;}
	if(((V80))==(VV[53])){
	goto T635;}
	if((get((V80),VV[33],Cnil))==Cnil){
	goto T636;}
goto T635;
T635:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T636;
T636:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T633;
T633:;
	if(!(((V80))==(VV[53]))){
	goto T645;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T645;
T645:;
	V86= get((V80),VV[33],Cnil);
	if(((V86))==Cnil){
	goto T650;}
	{object V108;
	V108= get((V81),VV[33],Cnil);
	if(((V108))==Cnil){
	goto T655;}
	{register object V109;
	V109= (V86);
goto T658;
T658:;
	if(((V109))!=Cnil){
	goto T659;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T659;
T659:;
	if(!(((V109))==(V108))){
	goto T665;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T665;
T665:;
	V109= structure_ref((V109),VV[33],4);
	goto T658;}
goto T655;
T655:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T650;
T650:;
	if(!(((V81))==(VV[54]))){
	goto T676;}
	{register object x= (V80),V111= VV[55];
	while(!endp(V111))
	if(eql(x,V111->c.c_car)){
	goto T681;
	}else V111=V111->c.c_cdr;
	goto T679;}
goto T681;
T681:;
	if(((*(LnkLI98))((V82),(V83)))==Cnil){
	goto T679;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T679;
T679:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T676;
T676:;
	if((get((V81),VV[33],Cnil))==Cnil){
	goto T688;}
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T688;
T688:;
	{object V112= (V80);
	if((V112!= VV[29]))goto T692;
	{object V113= (V81);
	if((V113!= VV[29]))goto T693;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T693;
T693:;
	if((V113!= VV[13])
	&& (V113!= VV[62]))goto T696;
	if(((*(LnkLI98))(VV[56],(V83)))==Cnil){
	goto T698;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T698;
T698:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T696;
T696:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T692;
T692:;
	if((V112!= VV[30]))goto T706;
	{object V114= (V81);
	if((V114!= VV[30]))goto T707;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T707;
T707:;
	if((V114!= VV[62]))goto T710;
	if(((*(LnkLI98))(VV[57],(V83)))==Cnil){
	goto T712;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T712;
T712:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T710;
T710:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T706;
T706:;
	if((V112!= VV[79]))goto T720;
	{register object x= (V81),V115= VV[58];
	while(!endp(V115))
	if(eql(x,V115->c.c_car)){
	goto T723;
	}else V115=V115->c.c_cdr;
	goto T722;}
goto T723;
T723:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T722;
T722:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T720;
T720:;
	if((V112!= VV[24]))goto T728;
	{register object x= (V81),V116= VV[59];
	while(!endp(V116))
	if(eql(x,V116->c.c_car)){
	goto T731;
	}else V116=V116->c.c_cdr;
	goto T730;}
goto T731;
T731:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T730;
T730:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T728;
T728:;
	if((V112!= VV[99]))goto T736;
	{register object x= (V81),V117= VV[60];
	while(!endp(V117))
	if(eql(x,V117->c.c_car)){
	goto T739;
	}else V117=V117->c.c_cdr;
	goto T738;}
goto T739;
T739:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T738;
T738:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T736;
T736:;
	if((V112!= VV[13]))goto T744;
	{register object x= (V81),V118= VV[61];
	while(!endp(V118))
	if(eql(x,V118->c.c_car)){
	goto T747;
	}else V118=V118->c.c_cdr;
	goto T746;}
goto T747;
T747:;
	base[2]= (*(LnkLI98))((V82),(V83));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T746;
T746:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T744;
T744:;
	if((V112!= VV[62]))goto T752;
	if(!(((V81))==(VV[62]))){
	goto T754;}
	base[2]= (*(LnkLI98))((V82),(V83));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T754;
T754:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T752;
T752:;
	if((V112!= VV[63]))goto T760;
	if(!(((V81))==(VV[63]))){
	goto T762;}
	base[2]= (*(LnkLI98))((V82),(V83));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T762;
T762:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T760;
T760:;
	if((V112!= VV[31]))goto T768;
	{register object x= (V81),V119= VV[64];
	while(!endp(V119))
	if(eql(x,V119->c.c_car)){
	goto T771;
	}else V119=V119->c.c_cdr;
	goto T770;}
goto T771;
T771:;
	base[2]= (*(LnkLI98))((V82),(V83));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T770;
T770:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T768;
T768:;
	if((V112!= VV[83])
	&& (V112!= VV[84])
	&& (V112!= VV[32]))goto T776;
	{register object x= (V81),V120= VV[65];
	while(!endp(V120))
	if(eql(x,V120->c.c_car)){
	goto T779;
	}else V120=V120->c.c_cdr;
	goto T778;}
goto T779;
T779:;
	base[2]= (*(LnkLI98))((V82),(V83));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T778;
T778:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T776;
T776:;
	if((V112!= VV[66]))goto T784;
	if(!(((V81))==(VV[66]))){
	goto T786;}{object V121;
	V121= car((V82));
	if(V121==Cnil)goto T790;
	V78= V121;
	goto T789;
goto T790;
T790:;}
	V78= Ct;
goto T789;
T789:;{object V122;
	V122= car((V83));
	if(V122==Cnil)goto T793;
	V79= V122;
	goto T792;
goto T793;
T793:;}
	V79= Ct;
goto T792;
T792:;
	goto TTL;
goto T786;
T786:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T784;
T784:;
	if((V112!= VV[26]))goto T797;
	if(((V81))==(VV[26])){
	goto T798;}
	if(!(((V81))==(VV[22]))){
	goto T799;}
goto T798;
T798:;
	if(endp((V82))){
	goto T804;}
	if(!((car((V82)))==(VV[17]))){
	goto T805;}
goto T804;
T804:;
	if(endp((V83))){
	goto T803;}
	if((car((V83)))==(VV[17])){
	goto T803;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T805;
T805:;
	if(endp((V83))){
	goto T803;}
	if((car((V83)))==(VV[17])){
	goto T803;}
	if(equal(car((V82)),car((V83)))){
	goto T803;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T803;
T803:;
	if(endp(cdr((V82)))){
	goto T824;}
	if(!((cadr((V82)))==(VV[17]))){
	goto T823;}
goto T824;
T824:;
	if(endp(cdr((V83)))){
	goto T828;}
	if(!((cadr((V83)))==(VV[17]))){
	goto T829;}
goto T828;
T828:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T829;
T829:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T823;
T823:;
	if(endp(cdr((V83)))){
	goto T838;}
	if(!((cadr((V83)))==(VV[17]))){
	goto T837;}
goto T838;
T838:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T837;
T837:;
	base[2]= (*(LnkLI86))(cadr((V82)),cadr((V83)));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T799;
T799:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T797;
T797:;
	if((V112!= VV[22]))goto T848;
	if(!(((V81))==(VV[22]))){
	goto T850;}
	if(endp((V82))){
	goto T853;}
	if(!((car((V82)))==(VV[17]))){
	goto T854;}
goto T853;
T853:;
	if(endp((V83))){
	goto T852;}
	if((car((V83)))==(VV[17])){
	goto T852;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T854;
T854:;
	if(endp((V83))){
	goto T852;}
	if((car((V83)))==(VV[17])){
	goto T852;}
	if(equal(car((V82)),car((V83)))){
	goto T852;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T852;
T852:;
	if(endp(cdr((V82)))){
	goto T873;}
	if(!((cadr((V82)))==(VV[17]))){
	goto T872;}
goto T873;
T873:;
	if(endp(cdr((V83)))){
	goto T877;}
	if(!((cadr((V83)))==(VV[17]))){
	goto T878;}
goto T877;
T877:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T878;
T878:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T872;
T872:;
	if(endp(cdr((V83)))){
	goto T887;}
	if(!((cadr((V83)))==(VV[17]))){
	goto T886;}
goto T887;
T887:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T886;
T886:;
	base[2]= (*(LnkLI86))(cadr((V82)),cadr((V83)));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T850;
T850:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T848;
T848:;
	if(((V84))==Cnil){
	goto T898;}
	base[2]= (((V80))==((V81))?Ct:Cnil);
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T898;
T898:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;}}
	}
}
/*	local entry for function SUB-INTERVAL-P	*/

static object LI22(V125,V126)

register object V125;register object V126;
{	 VMB22 VMS22 VMV22
goto TTL;
TTL:;
	{register object V127;
	register object V128;
	register object V129;
	register object V130;
	V127= Cnil;
	V128= Cnil;
	V129= Cnil;
	V130= Cnil;
	if(!(endp((V125)))){
	goto T906;}
	V127= VV[17];
	V128= VV[17];
	goto T904;
goto T906;
T906:;
	if(!(endp(cdr((V125))))){
	goto T912;}
	V127= car((V125));
	V128= VV[17];
	goto T904;
goto T912;
T912:;
	V127= car((V125));
	V128= cadr((V125));
goto T904;
T904:;
	if(!(endp((V126)))){
	goto T922;}
	V129= VV[17];
	V130= VV[17];
	goto T920;
goto T922;
T922:;
	if(!(endp(cdr((V126))))){
	goto T928;}
	V129= car((V126));
	V130= VV[17];
	goto T920;
goto T928;
T928:;
	V129= car((V126));
	V130= cadr((V126));
goto T920;
T920:;
	if(!(((V127))==(VV[17]))){
	goto T938;}
	if(((V129))==(VV[17])){
	goto T936;}
	{object V131 = Cnil;
	VMR22(V131)}
goto T938;
T938:;
	{object V132;
	V132= (((V129))==(VV[17])?Ct:Cnil);
	if(((V132))==Cnil){
	goto T944;}
	goto T936;
goto T944;
T944:;
	if(!(type_of((V127))==t_cons)){
	goto T947;}
	if(!(type_of((V129))==t_cons)){
	goto T950;}
	if(!(number_compare(car((V127)),car((V129)))<0)){
	goto T936;}
	{object V133 = Cnil;
	VMR22(V133)}
goto T950;
T950:;
	if(!(number_compare(car((V127)),(V129))<0)){
	goto T936;}
	{object V134 = Cnil;
	VMR22(V134)}
goto T947;
T947:;
	{object V135;
	if(!(type_of((V129))==t_cons)){
	goto T958;}
	if(!(number_compare((V127),car((V129)))<=0)){
	goto T961;}
	{object V136 = Cnil;
	VMR22(V136)}
goto T961;
T961:;
	V135= Cnil;
	goto T956;
goto T958;
T958:;
	if(!(number_compare((V127),(V129))<0)){
	goto T964;}
	{object V137 = Cnil;
	VMR22(V137)}
goto T964;
T964:;
	V135= Cnil;
goto T956;
T956:;
	if(((V135))==Cnil){
	goto T936;}}}
goto T936;
T936:;
	if(!(((V128))==(VV[17]))){
	goto T970;}
	if(((V130))==(VV[17])){
	goto T968;}
	{object V138 = Cnil;
	VMR22(V138)}
goto T970;
T970:;
	{object V139;
	V139= (((V130))==(VV[17])?Ct:Cnil);
	if(((V139))==Cnil){
	goto T976;}
	goto T968;
goto T976;
T976:;
	if(!(type_of((V128))==t_cons)){
	goto T979;}
	if(!(type_of((V130))==t_cons)){
	goto T982;}
	if(!(number_compare(car((V128)),car((V130)))>0)){
	goto T968;}
	{object V140 = Cnil;
	VMR22(V140)}
goto T982;
T982:;
	if(!(number_compare(car((V128)),(V130))>0)){
	goto T968;}
	{object V141 = Cnil;
	VMR22(V141)}
goto T979;
T979:;
	{object V142;
	if(!(type_of((V130))==t_cons)){
	goto T990;}
	if(!(number_compare((V128),car((V130)))>=0)){
	goto T993;}
	{object V143 = Cnil;
	VMR22(V143)}
goto T993;
T993:;
	V142= Cnil;
	goto T988;
goto T990;
T990:;
	if(!(number_compare((V128),(V130))>0)){
	goto T996;}
	{object V144 = Cnil;
	VMR22(V144)}
goto T996;
T996:;
	V142= Cnil;
goto T988;
T988:;
	if(((V142))==Cnil){
	goto T968;}}}
goto T968;
T968:;
	{object V145 = Ct;
	VMR22(V145)}}
	return Cnil;
}
/*	local entry for function IN-INTERVAL-P	*/

static object LI23(V148,V149)

register object V148;register object V149;
{	 VMB23 VMS23 VMV23
goto TTL;
TTL:;
	{register object V150;
	register object V151;
	V150= Cnil;
	V151= Cnil;
	if(!(endp((V149)))){
	goto T1002;}
	V150= VV[17];
	V151= VV[17];
	goto T1000;
goto T1002;
T1002:;
	if(!(endp(cdr((V149))))){
	goto T1008;}
	V150= car((V149));
	V151= VV[17];
	goto T1000;
goto T1008;
T1008:;
	V150= car((V149));
	V151= cadr((V149));
goto T1000;
T1000:;
	{object V152;
	V152= (((V150))==(VV[17])?Ct:Cnil);
	if(((V152))==Cnil){
	goto T1019;}
	goto T1016;
goto T1019;
T1019:;
	if(!(type_of((V150))==t_cons)){
	goto T1022;}
	if(!(number_compare((V148),car((V150)))<=0)){
	goto T1016;}
	{object V153 = Cnil;
	VMR23(V153)}
goto T1022;
T1022:;
	{object V154;
	if(!(number_compare((V148),(V150))<0)){
	goto T1028;}
	{object V155 = Cnil;
	VMR23(V155)}
goto T1028;
T1028:;
	V154= Cnil;
	if(((V154))==Cnil){
	goto T1016;}}}
goto T1016;
T1016:;
	{object V156;
	V156= (((V151))==(VV[17])?Ct:Cnil);
	if(((V156))==Cnil){
	goto T1035;}
	goto T1032;
goto T1035;
T1035:;
	if(!(type_of((V151))==t_cons)){
	goto T1038;}
	if(!(number_compare((V148),car((V151)))>=0)){
	goto T1032;}
	{object V157 = Cnil;
	VMR23(V157)}
goto T1038;
T1038:;
	{object V158;
	if(!(number_compare((V148),(V151))>0)){
	goto T1044;}
	{object V159 = Cnil;
	VMR23(V159)}
goto T1044;
T1044:;
	V158= Cnil;
	if(((V158))==Cnil){
	goto T1032;}}}
goto T1032;
T1032:;
	{object V160 = Ct;
	VMR23(V160)}}
	return Cnil;
}
/*	local entry for function MATCH-DIMENSIONS	*/

static object LI24(V163,V164)

object V163;register object V164;
{	 VMB24 VMS24 VMV24
goto TTL;
TTL:;
	if(((V163))!=Cnil){
	goto T1049;}
	{object V165 = (((V164))==Cnil?Ct:Cnil);
	VMR24(V165)}
goto T1049;
T1049:;
	if(!((car((V164)))==(VV[17]))){
	goto T1053;}
	goto T1051;
goto T1053;
T1053:;
	if(eql(car((V163)),car((V164)))){
	goto T1051;}
	{object V166 = Cnil;
	VMR24(V166)}
goto T1051;
T1051:;
	V163= cdr((V163));
	V164= cdr((V164));
	goto TTL;
	return Cnil;
}
/*	local entry for function COERCE	*/

static object LI25(V169,V170)

register object V169;object V170;
{	 VMB25 VMS25 VMV25
goto TTL;
TTL:;
	base[0]= (V169);
	base[1]= (V170);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1058;}
	{object V171 = (V169);
	VMR25(V171)}
goto T1058;
T1058:;
	V170= (*(LnkLI95))((V170));
	{object V172= car((V170));
	if((V172!= VV[41]))goto T1065;
	{register object V173;
	register object V174;
	V175 = make_fixnum((long)length((V169)));
	V174= one_minus(V175);
	V173= Cnil;
goto T1068;
T1068:;
	if(!(number_compare((V174),small_fixnum(0))<0)){
	goto T1069;}
	{object V176 = (V173);
	VMR25(V176)}
goto T1069;
T1069:;
	V177= elt((V169),fixint((V174)));
	V173= make_cons(/* INLINE-ARGS */V177,(V173));
	V174= one_minus((V174));
	goto T1068;}
goto T1065;
T1065:;
	if((V172!= VV[22])
	&& (V172!= VV[26]))goto T1077;
	if(endp(cdr((V170)))){
	goto T1078;}
	if(endp(cddr((V170)))){
	goto T1078;}
	if((caddr((V170)))==(VV[17])){
	goto T1078;}
	if(endp(cdr(caddr((V170))))){
	goto T1078;}
	base[0]= VV[67];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T1078;
T1078:;
	{register object V178;
	register object V179;
	register object V180;
	V181 = make_fixnum((long)length((V169)));
	V178= (VFUN_NARGS=2,(*(LnkLI100))((V170),V181));
	V180= make_fixnum((long)length((V169)));
	V179= small_fixnum(0);
goto T1091;
T1091:;
	if(!(number_compare((V179),(V180))>=0)){
	goto T1092;}
	{object V182 = (V178);
	VMR25(V182)}
goto T1092;
T1092:;
	V183= elt((V169),fixint((V179)));
	(void)(elt_set((V178),fixint((V179)),/* INLINE-ARGS */V183));
	V179= one_plus((V179));
	goto T1091;}
goto T1077;
T1077:;
	if((V172!= VV[99]))goto T1100;
	base[0]= (V169);
	vs_top=(vs_base=base+0)+1;
	Lcharacter();
	vs_top=sup;
	{object V184 = vs_base[0];
	VMR25(V184)}
goto T1100;
T1100:;
	if((V172!= VV[63]))goto T1102;
	base[0]= (V169);
	vs_top=(vs_base=base+0)+1;
	Lfloat();
	vs_top=sup;
	{object V185 = vs_base[0];
	VMR25(V185)}
goto T1102;
T1102:;
	if((V172!= VV[31]))goto T1104;
	base[0]= (V169);
	base[1]= VV[68];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V186 = vs_base[0];
	VMR25(V186)}
goto T1104;
T1104:;
	if((V172!= VV[83])
	&& (V172!= VV[84])
	&& (V172!= VV[32]))goto T1107;
	base[0]= (V169);
	base[1]= VV[69];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V187 = vs_base[0];
	VMR25(V187)}
goto T1107;
T1107:;
	if((V172!= VV[66]))goto T1110;
	if((cdr((V170)))==Cnil){
	goto T1111;}
	if((cadr((V170)))==Cnil){
	goto T1111;}
	if(!((cadr((V170)))==(VV[17]))){
	goto T1112;}
goto T1111;
T1111:;
	base[1]= (V169);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= (V169);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V188 = vs_base[0];
	VMR25(V188)}
goto T1112;
T1112:;
	base[1]= (V169);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	V189= vs_base[0];
	base[0]= (*(LnkLI101))(V189,cadr((V170)));
	base[2]= (V169);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V190= vs_base[0];
	base[1]= (*(LnkLI101))(V190,cadr((V170)));
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V191 = vs_base[0];
	VMR25(V191)}
goto T1110;
T1110:;
	base[0]= VV[70];
	base[1]= (V169);
	base[2]= (V170);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V192 = vs_base[0];
	VMR25(V192)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WARN-VERSION	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	{object V193;
	object V194;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V193=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1131;}
	V194=(base[1]);
	vs_top=sup;
	goto T1132;
goto T1131;
T1131:;
	V194= Cnil;
goto T1132;
T1132:;
	if(symbol_value(VV[71])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	if(!(((eql((V193),symbol_value(VV[71]))?Ct:Cnil))==Cnil)){
	goto T1136;}
	goto T1134;
goto T1136;
T1136:;
	if(((eql((V194),symbol_value(VV[72]))?Ct:Cnil))==Cnil){
	goto T1134;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T1134;
T1134:;
	if(symbol_value(VV[73])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	base[2]= Ct;
	base[3]= VV[74];
	base[4]= (V194);
	base[5]= (V193);
	vs_top=(vs_base=base+2)+4;
	Lformat();
	return;
	}
}
static object  LnkTLI101(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[101],(void **)&LnkLI101,2,ap);va_end(ap);return V1;} /* COERCE */
static object  LnkTLI100(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[100],(void **)&LnkLI100,ap);va_end(ap);return V1;} /* MAKE-SEQUENCE */
static object  LnkTLI98(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[98],(void **)&LnkLI98,2,ap);va_end(ap);return V1;} /* SUB-INTERVAL-P */
static object  LnkTLI97(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[97],(void **)&LnkLI97,1,ap);va_end(ap);return V1;} /* KNOWN-TYPE-P */
static void LnkT96(){ call_or_link(VV[96],(void **)&Lnk96);} /* SUBTYPEP */
static object  LnkTLI95(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[95],(void **)&LnkLI95,1,ap);va_end(ap);return V1;} /* NORMALIZE-TYPE */
static void LnkT94(){ call_or_link(VV[94],(void **)&Lnk94);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI93(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[93],(void **)&LnkLI93,1,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI92(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[92],(void **)&LnkLI92,1,ap);va_end(ap);return V1;} /* SIMPLE-ARRAY-P */
static object  LnkTLI87(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[87],(void **)&LnkLI87,1,ap);va_end(ap);return V1;} /* ARRAY-DIMENSIONS */
static object  LnkTLI86(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[86],(void **)&LnkLI86,2,ap);va_end(ap);return V1;} /* MATCH-DIMENSIONS */
static void LnkT82(){ call_or_link(VV[82],(void **)&Lnk82);} /* REALP */
static void LnkT81(){ call_or_link(VV[81],(void **)&Lnk81);} /* RATIONALP */
static object  LnkTLI80(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[80],(void **)&LnkLI80,2,ap);va_end(ap);return V1;} /* IN-INTERVAL-P */
static void LnkT77(){ call_or_link(VV[77],(void **)&Lnk77);} /* TYPEP */
static void LnkT76(){ call_or_link(VV[76],(void **)&Lnk76);} /* ARRAY-HAS-FILL-POINTER-P */
static object  LnkTLI75(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[75],(void **)&LnkLI75,1,ap);va_end(ap);return V1;} /* FIND-DOCUMENTATION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

