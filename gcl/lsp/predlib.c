
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
	V13= (*(LnkLI81))(base[4]);
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
	(void) (*Lnk82)();
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
	(void) (*Lnk83)();
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
	(void) (*Lnk83)();
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
	(void) (*Lnk83)();
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
	if((V44!= VV[84]))goto T138;
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
	if((V44!= VV[85]))goto T143;
	if(!(((V38))==(Ct))){
	goto T144;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T144;
T144:;
	base[2]= (((V38))==(Cnil)?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T143;
T143:;
	if((V44!= VV[28]))goto T146;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V49= vs_base[0];
	base[2]= ((V49)==(VV[28])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T146;
T146:;
	if((V44!= VV[29]))goto T149;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V50= vs_base[0];
	base[2]= ((V50)==(VV[29])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T149;
T149:;
	if((V44!= VV[30]))goto T152;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V51= vs_base[0];
	base[2]= ((V51)==(VV[30])?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T152;
T152:;
	if((V44!= VV[86]))goto T155;
	if(type_of((V38))==t_character){
	goto T156;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T156;
T156:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lstandard_char_p();
	return;
goto T155;
T155:;
	if((V44!= VV[24]))goto T159;
	if(type_of((V38))==t_character){
	goto T160;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T160;
T160:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lstring_char_p();
	return;
goto T159;
T159:;
	if((V44!= VV[13]))goto T163;
	if(type_of((V38))==t_fixnum||type_of((V38))==t_bignum){
	goto T164;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T164;
T164:;
	base[2]= (*(LnkLI87))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T163;
T163:;
	if((V44!= VV[68]))goto T166;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk88)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T167;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T167;
T167:;
	base[2]= (*(LnkLI87))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T166;
T166:;
	if((V44!= VV[57]))goto T170;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk89)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T171;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T171;
T171:;
	base[2]= (*(LnkLI87))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T170;
T170:;
	if((V44!= VV[69]))goto T174;
	if(type_of((V38))==t_shortfloat||type_of((V38))==t_longfloat){
	goto T175;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T175;
T175:;
	base[2]= (*(LnkLI87))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T174;
T174:;
	if((V44!= VV[31]))goto T177;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V52= vs_base[0];
	if((V52)==(VV[31])){
	goto T178;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T178;
T178:;
	base[2]= (*(LnkLI87))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T177;
T177:;
	if((V44!= VV[90])
	&& (V44!= VV[91])
	&& (V44!= VV[32]))goto T182;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V53= vs_base[0];
	if((V53)==(VV[32])){
	goto T183;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T183;
T183:;
	base[2]= (*(LnkLI87))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T182;
T182:;
	if((V44!= VV[72]))goto T187;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lcomplexp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T188;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T188;
T188:;
	if(!(((V41))==Cnil)){
	goto T191;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T191;
T191:;
	base[3]= (V38);
	vs_top=(vs_base=base+3)+1;
	Lrealpart();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= car((V41));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk83)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T193;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T193;
T193:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V38= vs_base[0];
	V39= car((V41));
	goto TTL;
goto T187;
T187:;
	if((V44!= VV[43]))goto T202;
	if(!(type_of((V38))==t_cons||((V38))==Cnil)){
	goto T203;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T203;
T203:;
	base[2]= (type_of((V38))==t_vector||
type_of((V38))==t_string||
type_of((V38))==t_bitvector?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T202;
T202:;
	if((V44!= VV[92]))goto T205;
	if(type_of((V38))==t_string){
	goto T206;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T206;
T206:;
	if(!(((V41))==Cnil)){
	goto T208;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T208;
T208:;
	V54= (*(LnkLI94))((V38));
	base[2]= (*(LnkLI93))(/* INLINE-ARGS */V54,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T205;
T205:;
	if((V44!= VV[95]))goto T210;
	if((type_of((V38))==t_bitvector)){
	goto T211;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T211;
T211:;
	if(!(((V41))==Cnil)){
	goto T213;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T213;
T213:;
	V55= (*(LnkLI94))((V38));
	base[2]= (*(LnkLI93))(/* INLINE-ARGS */V55,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T210;
T210:;
	if((V44!= VV[96]))goto T215;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lsimple_string_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T216;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T216;
T216:;
	if(!(((V41))==Cnil)){
	goto T219;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T219;
T219:;
	V56= (*(LnkLI94))((V38));
	base[2]= (*(LnkLI93))(/* INLINE-ARGS */V56,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T215;
T215:;
	if((V44!= VV[97]))goto T221;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lsimple_bit_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T222;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T222;
T222:;
	if(!(((V41))==Cnil)){
	goto T225;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T225;
T225:;
	V57= (*(LnkLI94))((V38));
	base[2]= (*(LnkLI93))(/* INLINE-ARGS */V57,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T221;
T221:;
	if((V44!= VV[98]))goto T227;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lsimple_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T228;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T228;
T228:;
	if(!(((V41))==Cnil)){
	goto T231;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T231;
T231:;
	V58= (*(LnkLI94))((V38));
	base[2]= (*(LnkLI93))(/* INLINE-ARGS */V58,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
goto T227;
T227:;
	if((V44!= VV[26]))goto T233;
	if(((*(LnkLI99))((V38)))!=Cnil){
	goto T234;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T234;
T234:;
	if(!(endp_prop((V41)))){
	goto T238;}
	goto T236;
goto T238;
T238:;
	if(!((car((V41)))==(VV[17]))){
	goto T240;}
	goto T236;
goto T240;
T240:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V59= vs_base[0];
	V60= (*(LnkLI100))(car((V41)));
	if(equal(V59,/* INLINE-ARGS */V60)){
	goto T236;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T236;
T236:;
	if(!(endp_prop(cdr((V41))))){
	goto T244;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T244;
T244:;
	if(!((cadr((V41)))==(VV[17]))){
	goto T246;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T246;
T246:;
	V61= (*(LnkLI94))((V38));
	base[2]= (*(LnkLI93))(/* INLINE-ARGS */V61,cadr((V41)));
	vs_top=(vs_base=base+2)+1;
	return;
goto T233;
T233:;
	if((V44!= VV[22]))goto T248;
	if(type_of((V38))==t_array||
type_of((V38))==t_vector||
type_of((V38))==t_string||
type_of((V38))==t_bitvector){
	goto T249;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T249;
T249:;
	if(!(endp_prop((V41)))){
	goto T253;}
	goto T251;
goto T253;
T253:;
	if(!((car((V41)))==(VV[17]))){
	goto T255;}
	goto T251;
goto T255;
T255:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V62= vs_base[0];
	V63= (*(LnkLI100))(car((V41)));
	if(equal(V62,/* INLINE-ARGS */V63)){
	goto T251;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T251;
T251:;
	if(!(endp_prop(cdr((V41))))){
	goto T259;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T259;
T259:;
	if(!((cadr((V41)))==(VV[17]))){
	goto T261;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
goto T261;
T261:;
	V64= (*(LnkLI94))((V38));
	base[2]= (*(LnkLI93))(/* INLINE-ARGS */V64,cadr((V41)));
	vs_top=(vs_base=base+2)+1;
	return;
goto T248;
T248:;
	V42= get((V40),VV[33],Cnil);
	if(((V42))==Cnil){
	goto T264;}
	base[2]= (V38);
	base[3]= (V42);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk101)();
	return;
goto T264;
T264:;
	if((get((V40),VV[34],Cnil))==Cnil){
	goto T270;}
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
goto T270;
T270:;
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
goto T280;
T280:;
	if(!(type_of((V67))!=t_cons)){
	goto T284;}
	V68= (V67);
	V69= Cnil;
	goto T282;
goto T284;
T284:;
	V68= car((V67));
	V69= cdr((V67));
goto T282;
T282:;
	if((get((V68),VV[34],Cnil))==Cnil){
	goto T293;}
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
	goto T281;
goto T293;
T293:;
	if(!(type_of((V67))!=t_cons)){
	goto T299;}
	{object V71 = make_cons((V67),Cnil);
	VMR19(V71)}
goto T299;
T299:;
	{object V72 = (V67);
	VMR19(V72)}
goto T281;
T281:;
	goto T280;}
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
	goto T302;}
	V74= car((V74));
goto T302;
T302:;
	{register object x= (V74),V75= VV[35];
	while(!endp(V75))
	if(eql(x,V75->c.c_car)){
	goto T306;
	}else V75=V75->c.c_cdr;}
	if((get((V74),VV[33],Cnil))==Cnil){
	goto T307;}
goto T306;
T306:;
	{object V76 = Ct;
	VMR20(V76)}
goto T307;
T307:;
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
	V78= (*(LnkLI102))((V78));
	V79= (*(LnkLI102))((V79));
	if(!(equal((V78),(V79)))){
	goto T322;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T322;
T322:;
	V80= car((V78));
	V81= car((V79));
	V82= cdr((V78));
	V83= cdr((V79));
	if(!(((V80))==(VV[36]))){
	goto T337;}
	{register object V87;
	object V88;
	V87= (V82);
	V88= car((V87));
goto T343;
T343:;
	if(!(endp_prop((V87)))){
	goto T344;}
	goto T339;
goto T344;
T344:;
	base[3]= (V88);
	base[4]= (V79);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk83)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T348;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
goto T348;
T348:;
	V87= cdr((V87));
	V88= car((V87));
	goto T343;}
goto T339;
T339:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T337;
T337:;
	if(!(((V80))==(VV[37]))){
	goto T363;}
	{register object V89;
	object V90;
	V89= (V82);
	V90= car((V89));
goto T369;
T369:;
	if(!(endp_prop((V89)))){
	goto T370;}
	goto T365;
goto T370;
T370:;
	{object V91;
	object V92;
	base[3]= (V90);
	base[4]= (V79);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk103)();
	if(vs_base>=vs_top){vs_top=sup;goto T378;}
	V91= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T379;}
	V92= vs_base[0];
	vs_top=sup;
	goto T380;
goto T378;
T378:;
	V91= Cnil;
goto T379;
T379:;
	V92= Cnil;
goto T380;
T380:;
	if(((V91))!=Cnil){
	goto T374;}
	base[3]= (V91);
	base[4]= (V92);
	vs_top=(vs_base=base+3)+2;
	return;}
goto T374;
T374:;
	V89= cdr((V89));
	V90= car((V89));
	goto T369;}
goto T365;
T365:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T363;
T363:;
	if(!(((V80))==(VV[38]))){
	goto T393;}
	{register object V93;
	object V94;
	V93= (V82);
	V94= car((V93));
goto T399;
T399:;
	if(!(endp_prop((V93)))){
	goto T400;}
	goto T395;
goto T400;
T400:;
	{object V95;
	base[3]= (V94);
	base[4]= (V79);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk103)();
	vs_top=sup;
	V95= vs_base[0];
	if(((V95))==Cnil){
	goto T404;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}
goto T404;
T404:;
	V93= cdr((V93));
	V94= car((V93));
	goto T399;}
goto T395;
T395:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T393;
T393:;
	if(!(((V80))==(VV[39]))){
	goto T335;}
	if(!(((V81))==(VV[39]))){
	goto T422;}
	V78= car((V83));
	V79= car((V82));
	goto TTL;
goto T422;
T422:;
	V78= Ct;
	V79= list(3,VV[37],(V79),car((V82)));
	goto TTL;
goto T335;
T335:;
	if(!(((V81))==(VV[36]))){
	goto T432;}
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T432;
T432:;
	if(!(((V81))==(VV[37]))){
	goto T437;}
	{register object V96;
	object V97;
	V96= (V83);
	V97= car((V96));
goto T443;
T443:;
	if(!(endp_prop((V96)))){
	goto T444;}
	goto T439;
goto T444;
T444:;
	{object V98;
	base[3]= (V78);
	base[4]= (V97);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk103)();
	vs_top=sup;
	V98= vs_base[0];
	if(((V98))==Cnil){
	goto T448;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}
goto T448;
T448:;
	V96= cdr((V96));
	V97= car((V96));
	goto T443;}
goto T439;
T439:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T437;
T437:;
	if(!(((V81))==(VV[38]))){
	goto T464;}
	{register object V99;
	object V100;
	V99= (V83);
	V100= car((V99));
goto T470;
T470:;
	if(!(endp_prop((V99)))){
	goto T471;}
	goto T466;
goto T471;
T471:;
	{object V101;
	object V102;
	base[3]= (V78);
	base[4]= (V100);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk103)();
	if(vs_base>=vs_top){vs_top=sup;goto T479;}
	V101= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T480;}
	V102= vs_base[0];
	vs_top=sup;
	goto T481;
goto T479;
T479:;
	V101= Cnil;
goto T480;
T480:;
	V102= Cnil;
goto T481;
T481:;
	if(((V101))!=Cnil){
	goto T475;}
	base[3]= (V101);
	base[4]= (V102);
	vs_top=(vs_base=base+3)+2;
	return;}
goto T475;
T475:;
	V99= cdr((V99));
	V100= car((V99));
	goto T470;}
goto T466;
T466:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T464;
T464:;
	if(!(((V81))==(VV[39]))){
	goto T430;}
	V78= list(3,VV[38],(V78),car((V83)));
	V79= Cnil;
	goto TTL;
goto T430;
T430:;
	V84= (*(LnkLI104))((V78));
	V85= (*(LnkLI104))((V79));
	if(((V80))==(Cnil)){
	goto T502;}
	if(((V81))==(Ct)){
	goto T502;}
	if(!(((V81))==(VV[40]))){
	goto T503;}
goto T502;
T502:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T503;
T503:;
	if(!(((V81))==(Cnil))){
	goto T512;}
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T512;
T512:;
	if(!(((V80))==(Ct))){
	goto T517;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T517;
T517:;
	if(!(((V80))==(VV[40]))){
	goto T522;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T522;
T522:;
	if(!(((V81))==(VV[41]))){
	goto T527;}
	{register object x= (V80),V103= VV[42];
	while(!endp(V103))
	if(eql(x,V103->c.c_car)){
	goto T531;
	}else V103=V103->c.c_cdr;
	goto T530;}
goto T531;
T531:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T530;
T530:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T527;
T527:;
	if(!(((V81))==(VV[43]))){
	goto T537;}
	{register object x= (V80),V104= VV[44];
	while(!endp(V104))
	if(eql(x,V104->c.c_car)){
	goto T541;
	}else V104=V104->c.c_cdr;
	goto T540;}
goto T541;
T541:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T540;
T540:;
	if(((V80))==(VV[26])){
	goto T544;}
	if(!(((V80))==(VV[22]))){
	goto T545;}
goto T544;
T544:;
	if((cdr((V82)))==Cnil){
	goto T550;}
	if(!(type_of(cadr((V82)))==t_cons)){
	goto T550;}
	if((cdadr((V82)))!=Cnil){
	goto T550;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T550;
T550:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T545;
T545:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T537;
T537:;
	if(!(((V80))==(VV[41]))){
	goto T563;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T563;
T563:;
	if(!(((V80))==(VV[43]))){
	goto T568;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T568;
T568:;
	if(!(((V81))==(VV[45]))){
	goto T573;}
	{register object x= (V80),V105= VV[46];
	while(!endp(V105))
	if(eql(x,V105->c.c_car)){
	goto T577;
	}else V105=V105->c.c_cdr;
	goto T576;}
goto T577;
T577:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T576;
T576:;
	if(((V84))==Cnil){
	goto T581;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T581;
T581:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
goto T573;
T573:;
	if(!(((V80))==(VV[45]))){
	goto T588;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T588;
T588:;
	if(!(((V81))==(VV[47]))){
	goto T593;}
	{register object x= (V80),V106= VV[48];
	while(!endp(V106))
	if(eql(x,V106->c.c_car)){
	goto T597;
	}else V106=V106->c.c_cdr;
	goto T596;}
goto T597;
T597:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T596;
T596:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T593;
T593:;
	if(!(((V81))==(VV[9]))){
	goto T603;}
	{register object x= (V80),V107= VV[49];
	while(!endp(V107))
	if(eql(x,V107->c.c_car)){
	goto T607;
	}else V107=V107->c.c_cdr;
	goto T606;}
goto T607;
T607:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T606;
T606:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T603;
T603:;
	if(!(((V81))==(VV[50]))){
	goto T613;}
	if(!(((V80))==(VV[51]))){
	goto T616;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T616;
T616:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T613;
T613:;
	if(!(((V81))==(VV[52]))){
	goto T623;}
	if(!(((V80))==(VV[52]))){
	goto T626;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T626;
T626:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T623;
T623:;
	if(!(((V81))==(VV[53]))){
	goto T633;}
	if(!(((V80))==(VV[53]))){
	goto T636;}
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
	if(!(((V81))==(VV[54]))){
	goto T643;}
	{register object x= (V80),V108= VV[55];
	while(!endp(V108))
	if(eql(x,V108->c.c_car)){
	goto T647;
	}else V108=V108->c.c_cdr;
	goto T646;}
goto T647;
T647:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T646;
T646:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T643;
T643:;
	if(!(((V80))==(VV[54]))){
	goto T653;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T653;
T653:;
	if(!(((V81))==(VV[56]))){
	goto T658;}
	if(((V80))==(VV[56])){
	goto T660;}
	if((get((V80),VV[33],Cnil))==Cnil){
	goto T661;}
goto T660;
T660:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T661;
T661:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T658;
T658:;
	if(!(((V80))==(VV[56]))){
	goto T670;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T670;
T670:;
	V86= get((V80),VV[33],Cnil);
	if(((V86))==Cnil){
	goto T675;}
	{object V109;
	V109= get((V81),VV[33],Cnil);
	if(((V109))==Cnil){
	goto T680;}
	{register object V110;
	V110= (V86);
goto T683;
T683:;
	if(((V110))!=Cnil){
	goto T684;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T684;
T684:;
	if(!(((V110))==(V109))){
	goto T690;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T690;
T690:;
	V110= structure_ref((V110),VV[33],4);
	goto T683;}
goto T680;
T680:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T675;
T675:;
	if(!(((V81))==(VV[57]))){
	goto T701;}
	{register object x= (V80),V112= VV[58];
	while(!endp(V112))
	if(eql(x,V112->c.c_car)){
	goto T706;
	}else V112=V112->c.c_cdr;
	goto T704;}
goto T706;
T706:;
	if(((*(LnkLI105))((V82),(V83)))==Cnil){
	goto T704;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T704;
T704:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T701;
T701:;
	if((get((V81),VV[33],Cnil))==Cnil){
	goto T713;}
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
goto T713;
T713:;
	{object V113= (V80);
	if((V113!= VV[29]))goto T717;
	{object V114= (V81);
	if((V114!= VV[29]))goto T718;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T718;
T718:;
	if((V114!= VV[13])
	&& (V114!= VV[68]))goto T721;
	if(((*(LnkLI105))(VV[59],(V83)))==Cnil){
	goto T723;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T723;
T723:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T721;
T721:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T717;
T717:;
	if((V113!= VV[30]))goto T731;
	{object V115= (V81);
	if((V115!= VV[30]))goto T732;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T732;
T732:;
	if((V115!= VV[68]))goto T735;
	if(((*(LnkLI105))(VV[60],(V83)))==Cnil){
	goto T737;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T737;
T737:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T735;
T735:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;}
goto T731;
T731:;
	if((V113!= VV[86]))goto T745;
	{register object x= (V81),V116= VV[61];
	while(!endp(V116))
	if(eql(x,V116->c.c_car)){
	goto T748;
	}else V116=V116->c.c_cdr;
	goto T747;}
goto T748;
T748:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T747;
T747:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T745;
T745:;
	if((V113!= VV[106]))goto T753;
	{register object x= (V81),V117= VV[62];
	while(!endp(V117))
	if(eql(x,V117->c.c_car)){
	goto T756;
	}else V117=V117->c.c_cdr;
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
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T753;
T753:;
	if((V113!= VV[107]))goto T761;
	{register object x= (V81),V118= VV[63];
	while(!endp(V118))
	if(eql(x,V118->c.c_car)){
	goto T764;
	}else V118=V118->c.c_cdr;
	goto T763;}
goto T764;
T764:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T763;
T763:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T761;
T761:;
	if((V113!= VV[108]))goto T769;
	{register object x= (V81),V119= VV[64];
	while(!endp(V119))
	if(eql(x,V119->c.c_car)){
	goto T772;
	}else V119=V119->c.c_cdr;
	goto T771;}
goto T772;
T772:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T771;
T771:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T769;
T769:;
	if((V113!= VV[24]))goto T777;
	{register object x= (V81),V120= VV[65];
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
goto T777;
T777:;
	if((V113!= VV[109]))goto T785;
	{register object x= (V81),V121= VV[66];
	while(!endp(V121))
	if(eql(x,V121->c.c_car)){
	goto T788;
	}else V121=V121->c.c_cdr;
	goto T787;}
goto T788;
T788:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T787;
T787:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T785;
T785:;
	if((V113!= VV[13]))goto T793;
	{register object x= (V81),V122= VV[67];
	while(!endp(V122))
	if(eql(x,V122->c.c_car)){
	goto T796;
	}else V122=V122->c.c_cdr;
	goto T795;}
goto T796;
T796:;
	base[2]= (*(LnkLI105))((V82),(V83));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T795;
T795:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T793;
T793:;
	if((V113!= VV[68]))goto T801;
	if(!(((V81))==(VV[68]))){
	goto T803;}
	base[2]= (*(LnkLI105))((V82),(V83));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T803;
T803:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T801;
T801:;
	if((V113!= VV[69]))goto T809;
	if(!(((V81))==(VV[69]))){
	goto T811;}
	base[2]= (*(LnkLI105))((V82),(V83));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T811;
T811:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T809;
T809:;
	if((V113!= VV[31]))goto T817;
	{register object x= (V81),V123= VV[70];
	while(!endp(V123))
	if(eql(x,V123->c.c_car)){
	goto T820;
	}else V123=V123->c.c_cdr;
	goto T819;}
goto T820;
T820:;
	base[2]= (*(LnkLI105))((V82),(V83));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T819;
T819:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T817;
T817:;
	if((V113!= VV[90])
	&& (V113!= VV[91])
	&& (V113!= VV[32]))goto T825;
	{register object x= (V81),V124= VV[71];
	while(!endp(V124))
	if(eql(x,V124->c.c_car)){
	goto T828;
	}else V124=V124->c.c_cdr;
	goto T827;}
goto T828;
T828:;
	base[2]= (*(LnkLI105))((V82),(V83));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T827;
T827:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T825;
T825:;
	if((V113!= VV[72]))goto T833;
	if(!(((V81))==(VV[72]))){
	goto T835;}{object V125;
	V125= car((V82));
	if(V125==Cnil)goto T839;
	V78= V125;
	goto T838;
goto T839;
T839:;}
	V78= Ct;
goto T838;
T838:;{object V126;
	V126= car((V83));
	if(V126==Cnil)goto T842;
	V79= V126;
	goto T841;
goto T842;
T842:;}
	V79= Ct;
goto T841;
T841:;
	goto TTL;
goto T835;
T835:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T833;
T833:;
	if((V113!= VV[26]))goto T846;
	if(((V81))==(VV[26])){
	goto T847;}
	if(!(((V81))==(VV[22]))){
	goto T848;}
goto T847;
T847:;
	if(endp_prop((V82))){
	goto T853;}
	if(!((car((V82)))==(VV[17]))){
	goto T854;}
goto T853;
T853:;
	if(endp_prop((V83))){
	goto T852;}
	if((car((V83)))==(VV[17])){
	goto T852;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T854;
T854:;
	if(endp_prop((V83))){
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
	if(endp_prop(cdr((V82)))){
	goto T873;}
	if(!((cadr((V82)))==(VV[17]))){
	goto T872;}
goto T873;
T873:;
	if(endp_prop(cdr((V83)))){
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
	if(endp_prop(cdr((V83)))){
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
	base[2]= (*(LnkLI93))(cadr((V82)),cadr((V83)));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T848;
T848:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T846;
T846:;
	if((V113!= VV[22]))goto T897;
	if(!(((V81))==(VV[22]))){
	goto T899;}
	if(endp_prop((V82))){
	goto T902;}
	if(!((car((V82)))==(VV[17]))){
	goto T903;}
goto T902;
T902:;
	if(endp_prop((V83))){
	goto T901;}
	if((car((V83)))==(VV[17])){
	goto T901;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T903;
T903:;
	if(endp_prop((V83))){
	goto T901;}
	if((car((V83)))==(VV[17])){
	goto T901;}
	if(equal(car((V82)),car((V83)))){
	goto T901;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T901;
T901:;
	if(endp_prop(cdr((V82)))){
	goto T922;}
	if(!((cadr((V82)))==(VV[17]))){
	goto T921;}
goto T922;
T922:;
	if(endp_prop(cdr((V83)))){
	goto T926;}
	if(!((cadr((V83)))==(VV[17]))){
	goto T927;}
goto T926;
T926:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T927;
T927:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T921;
T921:;
	if(endp_prop(cdr((V83)))){
	goto T936;}
	if(!((cadr((V83)))==(VV[17]))){
	goto T935;}
goto T936;
T936:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T935;
T935:;
	base[2]= (*(LnkLI93))(cadr((V82)),cadr((V83)));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T899;
T899:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
goto T897;
T897:;
	if(((V84))==Cnil){
	goto T947;}
	base[2]= (((V80))==((V81))?Ct:Cnil);
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
goto T947;
T947:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;}}
	}
}
/*	local entry for function SUB-INTERVAL-P	*/

static object LI22(V129,V130)

register object V129;register object V130;
{	 VMB22 VMS22 VMV22
goto TTL;
TTL:;
	{register object V131;
	register object V132;
	register object V133;
	register object V134;
	V131= Cnil;
	V132= Cnil;
	V133= Cnil;
	V134= Cnil;
	if(!(endp_prop((V129)))){
	goto T955;}
	V131= VV[17];
	V132= VV[17];
	goto T953;
goto T955;
T955:;
	if(!(endp_prop(cdr((V129))))){
	goto T961;}
	V131= car((V129));
	V132= VV[17];
	goto T953;
goto T961;
T961:;
	V131= car((V129));
	V132= cadr((V129));
goto T953;
T953:;
	if(!(endp_prop((V130)))){
	goto T971;}
	V133= VV[17];
	V134= VV[17];
	goto T969;
goto T971;
T971:;
	if(!(endp_prop(cdr((V130))))){
	goto T977;}
	V133= car((V130));
	V134= VV[17];
	goto T969;
goto T977;
T977:;
	V133= car((V130));
	V134= cadr((V130));
goto T969;
T969:;
	if(!(((V131))==(VV[17]))){
	goto T987;}
	if(((V133))==(VV[17])){
	goto T985;}
	{object V135 = Cnil;
	VMR22(V135)}
goto T987;
T987:;
	{object V136;
	V136= (((V133))==(VV[17])?Ct:Cnil);
	if(((V136))==Cnil){
	goto T993;}
	goto T985;
goto T993;
T993:;
	if(!(type_of((V131))==t_cons)){
	goto T996;}
	if(!(type_of((V133))==t_cons)){
	goto T999;}
	if(!(number_compare(car((V131)),car((V133)))<0)){
	goto T985;}
	{object V137 = Cnil;
	VMR22(V137)}
goto T999;
T999:;
	if(!(number_compare(car((V131)),(V133))<0)){
	goto T985;}
	{object V138 = Cnil;
	VMR22(V138)}
goto T996;
T996:;
	{object V139;
	if(!(type_of((V133))==t_cons)){
	goto T1007;}
	if(!(number_compare((V131),car((V133)))<=0)){
	goto T1010;}
	{object V140 = Cnil;
	VMR22(V140)}
goto T1010;
T1010:;
	V139= Cnil;
	goto T1005;
goto T1007;
T1007:;
	if(!(number_compare((V131),(V133))<0)){
	goto T1013;}
	{object V141 = Cnil;
	VMR22(V141)}
goto T1013;
T1013:;
	V139= Cnil;
goto T1005;
T1005:;
	if(((V139))==Cnil){
	goto T985;}}}
goto T985;
T985:;
	if(!(((V132))==(VV[17]))){
	goto T1019;}
	if(((V134))==(VV[17])){
	goto T1017;}
	{object V142 = Cnil;
	VMR22(V142)}
goto T1019;
T1019:;
	{object V143;
	V143= (((V134))==(VV[17])?Ct:Cnil);
	if(((V143))==Cnil){
	goto T1025;}
	goto T1017;
goto T1025;
T1025:;
	if(!(type_of((V132))==t_cons)){
	goto T1028;}
	if(!(type_of((V134))==t_cons)){
	goto T1031;}
	if(!(number_compare(car((V132)),car((V134)))>0)){
	goto T1017;}
	{object V144 = Cnil;
	VMR22(V144)}
goto T1031;
T1031:;
	if(!(number_compare(car((V132)),(V134))>0)){
	goto T1017;}
	{object V145 = Cnil;
	VMR22(V145)}
goto T1028;
T1028:;
	{object V146;
	if(!(type_of((V134))==t_cons)){
	goto T1039;}
	if(!(number_compare((V132),car((V134)))>=0)){
	goto T1042;}
	{object V147 = Cnil;
	VMR22(V147)}
goto T1042;
T1042:;
	V146= Cnil;
	goto T1037;
goto T1039;
T1039:;
	if(!(number_compare((V132),(V134))>0)){
	goto T1045;}
	{object V148 = Cnil;
	VMR22(V148)}
goto T1045;
T1045:;
	V146= Cnil;
goto T1037;
T1037:;
	if(((V146))==Cnil){
	goto T1017;}}}
goto T1017;
T1017:;
	{object V149 = Ct;
	VMR22(V149)}}
	return Cnil;
}
/*	local entry for function IN-INTERVAL-P	*/

static object LI23(V152,V153)

register object V152;register object V153;
{	 VMB23 VMS23 VMV23
goto TTL;
TTL:;
	{register object V154;
	register object V155;
	V154= Cnil;
	V155= Cnil;
	if(!(endp_prop((V153)))){
	goto T1051;}
	V154= VV[17];
	V155= VV[17];
	goto T1049;
goto T1051;
T1051:;
	if(!(endp_prop(cdr((V153))))){
	goto T1057;}
	V154= car((V153));
	V155= VV[17];
	goto T1049;
goto T1057;
T1057:;
	V154= car((V153));
	V155= cadr((V153));
goto T1049;
T1049:;
	{object V156;
	V156= (((V154))==(VV[17])?Ct:Cnil);
	if(((V156))==Cnil){
	goto T1068;}
	goto T1065;
goto T1068;
T1068:;
	if(!(type_of((V154))==t_cons)){
	goto T1071;}
	if(!(number_compare((V152),car((V154)))<=0)){
	goto T1065;}
	{object V157 = Cnil;
	VMR23(V157)}
goto T1071;
T1071:;
	{object V158;
	if(!(number_compare((V152),(V154))<0)){
	goto T1077;}
	{object V159 = Cnil;
	VMR23(V159)}
goto T1077;
T1077:;
	V158= Cnil;
	if(((V158))==Cnil){
	goto T1065;}}}
goto T1065;
T1065:;
	{object V160;
	V160= (((V155))==(VV[17])?Ct:Cnil);
	if(((V160))==Cnil){
	goto T1084;}
	goto T1081;
goto T1084;
T1084:;
	if(!(type_of((V155))==t_cons)){
	goto T1087;}
	if(!(number_compare((V152),car((V155)))>=0)){
	goto T1081;}
	{object V161 = Cnil;
	VMR23(V161)}
goto T1087;
T1087:;
	{object V162;
	if(!(number_compare((V152),(V155))>0)){
	goto T1093;}
	{object V163 = Cnil;
	VMR23(V163)}
goto T1093;
T1093:;
	V162= Cnil;
	if(((V162))==Cnil){
	goto T1081;}}}
goto T1081;
T1081:;
	{object V164 = Ct;
	VMR23(V164)}}
	return Cnil;
}
/*	local entry for function MATCH-DIMENSIONS	*/

static object LI24(V167,V168)

object V167;register object V168;
{	 VMB24 VMS24 VMV24
goto TTL;
TTL:;
	if(((V167))!=Cnil){
	goto T1098;}
	{object V169 = (((V168))==Cnil?Ct:Cnil);
	VMR24(V169)}
goto T1098;
T1098:;
	if(!((car((V168)))==(VV[17]))){
	goto T1102;}
	goto T1100;
goto T1102;
T1102:;
	if(eql(car((V167)),car((V168)))){
	goto T1100;}
	{object V170 = Cnil;
	VMR24(V170)}
goto T1100;
T1100:;
	V167= cdr((V167));
	V168= cdr((V168));
	goto TTL;
	return Cnil;
}
/*	local entry for function COERCE	*/

static object LI25(V173,V174)

register object V173;object V174;
{	 VMB25 VMS25 VMV25
goto TTL;
TTL:;
	base[0]= (V173);
	base[1]= (V174);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk83)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1107;}
	{object V175 = (V173);
	VMR25(V175)}
goto T1107;
T1107:;
	V174= (*(LnkLI102))((V174));
	{object V176= car((V174));
	if((V176!= VV[41]))goto T1114;
	{register object V177;
	register object V178;
	V179 = make_fixnum((long)length((V173)));
	V178= one_minus(V179);
	V177= Cnil;
goto T1117;
T1117:;
	if(!(number_compare((V178),small_fixnum(0))<0)){
	goto T1118;}
	{object V180 = (V177);
	VMR25(V180)}
goto T1118;
T1118:;
	V181= elt((V173),fixint((V178)));
	V177= make_cons(/* INLINE-ARGS */V181,(V177));
	V178= one_minus((V178));
	goto T1117;}
goto T1114;
T1114:;
	if((V176!= VV[22])
	&& (V176!= VV[26]))goto T1126;
	if(endp_prop(cdr((V174)))){
	goto T1127;}
	if(endp_prop(cddr((V174)))){
	goto T1127;}
	if((caddr((V174)))==(VV[17])){
	goto T1127;}
	if(endp_prop(cdr(caddr((V174))))){
	goto T1127;}
	base[0]= VV[73];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T1127;
T1127:;
	{register object V182;
	register object V183;
	register object V184;
	V185 = make_fixnum((long)length((V173)));
	V182= (VFUN_NARGS=2,(*(LnkLI110))((V174),V185));
	V184= make_fixnum((long)length((V173)));
	V183= small_fixnum(0);
goto T1140;
T1140:;
	if(!(number_compare((V183),(V184))>=0)){
	goto T1141;}
	{object V186 = (V182);
	VMR25(V186)}
goto T1141;
T1141:;
	V187= elt((V173),fixint((V183)));
	(void)(elt_set((V182),fixint((V183)),/* INLINE-ARGS */V187));
	V183= one_plus((V183));
	goto T1140;}
goto T1126;
T1126:;
	if((V176!= VV[109]))goto T1149;
	base[0]= (V173);
	vs_top=(vs_base=base+0)+1;
	Lcharacter();
	vs_top=sup;
	{object V188 = vs_base[0];
	VMR25(V188)}
goto T1149;
T1149:;
	if((V176!= VV[69]))goto T1151;
	base[0]= (V173);
	vs_top=(vs_base=base+0)+1;
	Lfloat();
	vs_top=sup;
	{object V189 = vs_base[0];
	VMR25(V189)}
goto T1151;
T1151:;
	if((V176!= VV[31]))goto T1153;
	base[0]= (V173);
	base[1]= VV[74];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V190 = vs_base[0];
	VMR25(V190)}
goto T1153;
T1153:;
	if((V176!= VV[90])
	&& (V176!= VV[91])
	&& (V176!= VV[32]))goto T1156;
	base[0]= (V173);
	base[1]= VV[75];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V191 = vs_base[0];
	VMR25(V191)}
goto T1156;
T1156:;
	if((V176!= VV[72]))goto T1159;
	if((cdr((V174)))==Cnil){
	goto T1160;}
	if((cadr((V174)))==Cnil){
	goto T1160;}
	if(!((cadr((V174)))==(VV[17]))){
	goto T1161;}
goto T1160;
T1160:;
	base[1]= (V173);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= (V173);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V192 = vs_base[0];
	VMR25(V192)}
goto T1161;
T1161:;
	base[1]= (V173);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	V193= vs_base[0];
	base[0]= (*(LnkLI111))(V193,cadr((V174)));
	base[2]= (V173);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V194= vs_base[0];
	base[1]= (*(LnkLI111))(V194,cadr((V174)));
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V195 = vs_base[0];
	VMR25(V195)}
goto T1159;
T1159:;
	base[0]= VV[76];
	base[1]= (V173);
	base[2]= (V174);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V196 = vs_base[0];
	VMR25(V196)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WARN-VERSION	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	{object V197;
	object V198;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V197=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1180;}
	V198=(base[1]);
	vs_top=sup;
	goto T1181;
goto T1180;
T1180:;
	V198= Cnil;
goto T1181;
T1181:;
	if(symbol_value(VV[77])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	if(!(((eql((V197),symbol_value(VV[77]))?Ct:Cnil))==Cnil)){
	goto T1185;}
	goto T1183;
goto T1185;
T1185:;
	if(((eql((V198),symbol_value(VV[78]))?Ct:Cnil))==Cnil){
	goto T1183;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T1183;
T1183:;
	if(symbol_value(VV[79])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	base[2]= Ct;
	base[3]= VV[80];
	base[4]= (V198);
	base[5]= (V197);
	vs_top=(vs_base=base+2)+4;
	Lformat();
	return;
	}
}
static object  LnkTLI111(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[111],(void **)&LnkLI111,2,ap);va_end(ap);return V1;} /* COERCE */
static object  LnkTLI110(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[110],(void **)&LnkLI110,ap);va_end(ap);return V1;} /* MAKE-SEQUENCE */
static object  LnkTLI105(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[105],(void **)&LnkLI105,2,ap);va_end(ap);return V1;} /* SUB-INTERVAL-P */
static object  LnkTLI104(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[104],(void **)&LnkLI104,1,ap);va_end(ap);return V1;} /* KNOWN-TYPE-P */
static void LnkT103(){ call_or_link(VV[103],(void **)&Lnk103);} /* SUBTYPEP */
static object  LnkTLI102(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[102],(void **)&LnkLI102,1,ap);va_end(ap);return V1;} /* NORMALIZE-TYPE */
static void LnkT101(){ call_or_link(VV[101],(void **)&Lnk101);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI100(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[100],(void **)&LnkLI100,1,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI99(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[99],(void **)&LnkLI99,1,ap);va_end(ap);return V1;} /* SIMPLE-ARRAY-P */
static object  LnkTLI94(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[94],(void **)&LnkLI94,1,ap);va_end(ap);return V1;} /* ARRAY-DIMENSIONS */
static object  LnkTLI93(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[93],(void **)&LnkLI93,2,ap);va_end(ap);return V1;} /* MATCH-DIMENSIONS */
static void LnkT89(){ call_or_link(VV[89],(void **)&Lnk89);} /* REALP */
static void LnkT88(){ call_or_link(VV[88],(void **)&Lnk88);} /* RATIONALP */
static object  LnkTLI87(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[87],(void **)&LnkLI87,2,ap);va_end(ap);return V1;} /* IN-INTERVAL-P */
static void LnkT83(){ call_or_link(VV[83],(void **)&Lnk83);} /* TYPEP */
static void LnkT82(){ call_or_link(VV[82],(void **)&Lnk82);} /* ARRAY-HAS-FILL-POINTER-P */
static object  LnkTLI81(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[81],(void **)&LnkLI81,1,ap);va_end(ap);return V1;} /* FIND-DOCUMENTATION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

