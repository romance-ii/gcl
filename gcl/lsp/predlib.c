
#include "cmpinclude.h"
#include "predlib.h"
init_predlib(){do_init(VV);}
/*	macro definition for DEFTYPE	*/

static L1()
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
T3:;
	if(((V2))!=Cnil){
	goto T4;}
	goto T1;
T4:;
	{register object x= car((V2)),V4= VV[0];
	while(!endp(V4))
	if(eql(x,V4->c.c_car)){
	goto T10;
	}else V4=V4->c.c_cdr;
	goto T8;}
T10:;
	if((car((V2)))==(VV[1])){
	goto T11;}
	goto T1;
T11:;
	V3= make_cons(VV[1],(V3));
	V2= cdr((V2));
T20:;
	if(((V2))==Cnil){
	goto T22;}
	{register object x= car((V2)),V5= VV[0];
	while(!endp(V5))
	if(eql(x,V5->c.c_car)){
	goto T25;
	}else V5=V5->c.c_cdr;
	goto T21;}
T25:;
T22:;
	goto T18;
T21:;
	if(!(type_of(car((V2)))==t_symbol)){
	goto T29;}
	V6= list(2,car((V2)),VV[2]);
	V3= make_cons(/* INLINE-ARGS */V6,(V3));
	goto T27;
T29:;
	V3= make_cons(car((V2)),(V3));
T27:;
	V2= cdr((V2));
	goto T20;
T18:;
	base[5]= (V3);
	base[6]= (V2);
	vs_top=(vs_base=base+5)+2;
	Lreconc();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T1;
T8:;
	{object V7;
	V7= cdr((V2));
	V3= make_cons(car((V2)),(V3));
	V2= (V7);}
	goto T3;}
T1:;
	V8= list(2,VV[6],base[2]);
	V9= list(4,VV[5],/* INLINE-ARGS */V8,list(2,VV[6],listA(4,VV[7],base[2],base[3],base[4])),VV[8]);
	V10= list(2,VV[6],base[2]);
	V11= list(4,VV[5],/* INLINE-ARGS */V10,list(2,VV[9],listA(3,VV[10],base[3],base[4])),VV[11]);
	V12= list(2,VV[6],base[2]);
	V13= (*(LnkLI74))(base[4]);
	V14= list(4,VV[5],/* INLINE-ARGS */V12,/* INLINE-ARGS */V13,VV[12]);
	base[5]= list(6,VV[3],VV[4],/* INLINE-ARGS */V9,/* INLINE-ARGS */V11,/* INLINE-ARGS */V14,list(2,VV[6],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	function definition for G1073	*/

static L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	check_arg(0);
	vs_top=sup;
TTL:;
	base[0]= list(3,VV[13],VV[14],VV[15]);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for G1074	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(0);
	vs_top=sup;
TTL:;
	base[0]= VV[16];
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for G1075	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	{object V15;
	check_arg(1);
	V15=(base[0]);
	vs_top=sup;
TTL:;
	base[1]= list(3,VV[13],small_fixnum(0),one_minus((V15)));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1076	*/

static L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{object V16;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T45;}
	V16=(base[0]);
	vs_top=sup;
	goto T46;
T45:;
	V16= VV[17];
T46:;
	if(!(((V16))==(VV[17]))){
	goto T49;}
	base[1]= VV[18];
	vs_top=(vs_base=base+1)+1;
	return;
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
/*	function definition for G1077	*/

static L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	{object V22;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T51;}
	V22=(base[0]);
	vs_top=sup;
	goto T52;
T51:;
	V22= VV[17];
T52:;
	if(!(((V22))==(VV[17]))){
	goto T55;}
	base[1]= VV[19];
	vs_top=(vs_base=base+1)+1;
	return;
T55:;
	V23= number_expt(small_fixnum(2),(V22));
	base[1]= list(3,VV[13],small_fixnum(0),one_minus(/* INLINE-ARGS */V23));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1078	*/

static L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	check_arg(0);
	vs_top=sup;
TTL:;
	base[0]= list(2,VV[20],small_fixnum(8));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for G1079	*/

static L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(0);
	vs_top=sup;
TTL:;
	base[0]= list(2,VV[21],small_fixnum(8));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for G1080	*/

static L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	check_arg(0);
	vs_top=sup;
TTL:;
	base[0]= list(2,VV[20],small_fixnum(16));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for G1081	*/

static L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	check_arg(0);
	vs_top=sup;
TTL:;
	base[0]= list(2,VV[21],small_fixnum(16));
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for G1082	*/

static L11()
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
T57:;
	V24= VV[17];
T58:;
	V25= VV[17];
T59:;
	base[2]= list(3,VV[22],(V24),make_cons((V25),Cnil));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for G1083	*/

static L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	{object V26;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T62;}
	V26=(base[0]);
	vs_top=sup;
	goto T63;
T62:;
	V26= VV[17];
T63:;
	base[1]= list(3,VV[23],VV[24],(V26));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1084	*/

static L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	{object V27;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T65;}
	V27=(base[0]);
	vs_top=sup;
	goto T66;
T65:;
	V27= VV[17];
T66:;
	base[1]= list(3,VV[23],VV[25],(V27));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1085	*/

static L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	{object V28;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T68;}
	V28=(base[0]);
	vs_top=sup;
	goto T69;
T68:;
	V28= VV[17];
T69:;
	base[1]= list(3,VV[26],Ct,make_cons((V28),Cnil));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1086	*/

static L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	{object V29;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T71;}
	V29=(base[0]);
	vs_top=sup;
	goto T72;
T71:;
	V29= VV[17];
T72:;
	base[1]= list(3,VV[26],VV[24],make_cons((V29),Cnil));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for G1087	*/

static L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{object V30;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T74;}
	V30=(base[0]);
	vs_top=sup;
	goto T75;
T74:;
	V30= VV[17];
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
TTL:;
	if(type_of((V32))==t_array||
type_of((V32))==t_vector||
type_of((V32))==t_string||
type_of((V32))==t_bitvector){
	goto T77;}
	{object V33 = Cnil;
	VMR17(V33)}
T77:;
	base[0]= (V32);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk75)();
	vs_top=sup;
	V34= vs_base[0];
	if((V34)==Cnil){
	goto T79;}
	{object V35 = Cnil;
	VMR17(V35)}
T79:;
	base[0]= (V32);
	vs_top=(vs_base=base+0)+1;
	siLdisplaced_array_p();
	vs_top=sup;
	V36= vs_base[0];
	{object V37 = ((V36)==Cnil?Ct:Cnil);
	VMR17(V37)}
}
/*	function definition for TYPEP	*/

static L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{register object V38;
	register object V39;
	check_arg(2);
	V38=(base[0]);
	V39=(base[1]);
	vs_top=sup;
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
T90:;
	V40= car((V39));
	V41= cdr((V39));
T88:;
	{object V43;
	V43= get((V40),VV[27],Cnil);
	if(((V43))==Cnil){
	goto T98;}
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V43));
	return;}
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
T103:;
	if((V44!= VV[39]))goto T104;
	base[2]= (V38);
	base[3]= car((V41));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk76)();
	vs_top=sup;
	V46= vs_base[0];
	base[2]= ((V46)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
T104:;
	if((V44!= VV[37]))goto T108;
	{register object V47;
	V47= (V41);
T110:;
	if(((V47))!=Cnil){
	goto T111;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T111:;
	base[2]= (V38);
	base[3]= car((V47));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk76)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T115;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T115:;
	V47= cdr((V47));
	goto T110;}
T108:;
	if((V44!= VV[38]))goto T123;
	{register object V48;
	V48= (V41);
T125:;
	if(((V48))!=Cnil){
	goto T126;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T126:;
	base[2]= (V38);
	base[3]= car((V48));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk76)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T130;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T130:;
	V48= cdr((V48));
	goto T125;}
T123:;
	if((V44!= VV[77]))goto T138;
	base[2]= car((V41));
	base[3]= (V38);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event(base[2]);
	return;
T138:;
	if((V44!= Ct))goto T141;
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T141:;
	if((V44!= Cnil))goto T142;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
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
T149:;
	if((V44!= VV[78]))goto T152;
	if(type_of((V38))==t_character){
	goto T153;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T153:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lstandard_char_p();
	return;
T152:;
	if((V44!= VV[24]))goto T156;
	if(type_of((V38))==t_character){
	goto T157;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T157:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lstring_char_p();
	return;
T156:;
	if((V44!= VV[13]))goto T160;
	if(type_of((V38))==t_fixnum||type_of((V38))==t_bignum){
	goto T161;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T161:;
	base[2]= (*(LnkLI79))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
T160:;
	if((V44!= VV[61]))goto T163;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk80)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T164;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T164:;
	base[2]= (*(LnkLI79))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
T163:;
	if((V44!= VV[54]))goto T167;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk81)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T168;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T168:;
	base[2]= (*(LnkLI79))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
T167:;
	if((V44!= VV[62]))goto T171;
	if(type_of((V38))==t_shortfloat||type_of((V38))==t_longfloat){
	goto T172;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T172:;
	base[2]= (*(LnkLI79))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
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
T175:;
	base[2]= (*(LnkLI79))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
T174:;
	if((V44!= VV[82])
	&& (V44!= VV[83])
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
T180:;
	base[2]= (*(LnkLI79))((V38),(V41));
	vs_top=(vs_base=base+2)+1;
	return;
T179:;
	if((V44!= VV[65]))goto T184;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lcomplexp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T185;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T185:;
	if(!(((V41))==Cnil)){
	goto T188;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T188:;
	base[3]= (V38);
	vs_top=(vs_base=base+3)+1;
	Lrealpart();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= car((V41));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk76)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T190;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T190:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V38= vs_base[0];
	V39= car((V41));
	goto TTL;
T184:;
	if((V44!= VV[43]))goto T199;
	if(!(type_of((V38))==t_cons||((V38))==Cnil)){
	goto T200;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T200:;
	base[2]= (type_of((V38))==t_vector||
type_of((V38))==t_string||
type_of((V38))==t_bitvector?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
T199:;
	if((V44!= VV[84]))goto T202;
	if(type_of((V38))==t_string){
	goto T203;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T203:;
	if(!(((V41))==Cnil)){
	goto T205;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T205:;
	V54= (*(LnkLI86))((V38));
	base[2]= (*(LnkLI85))(/* INLINE-ARGS */V54,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
T202:;
	if((V44!= VV[87]))goto T207;
	if((type_of((V38))==t_bitvector)){
	goto T208;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T208:;
	if(!(((V41))==Cnil)){
	goto T210;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T210:;
	V55= (*(LnkLI86))((V38));
	base[2]= (*(LnkLI85))(/* INLINE-ARGS */V55,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
T207:;
	if((V44!= VV[88]))goto T212;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lsimple_string_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T213;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T213:;
	if(!(((V41))==Cnil)){
	goto T216;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T216:;
	V56= (*(LnkLI86))((V38));
	base[2]= (*(LnkLI85))(/* INLINE-ARGS */V56,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
T212:;
	if((V44!= VV[89]))goto T218;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lsimple_bit_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T219;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T219:;
	if(!(((V41))==Cnil)){
	goto T222;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T222:;
	V57= (*(LnkLI86))((V38));
	base[2]= (*(LnkLI85))(/* INLINE-ARGS */V57,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
T218:;
	if((V44!= VV[90]))goto T224;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Lsimple_vector_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T225;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T225:;
	if(!(((V41))==Cnil)){
	goto T228;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T228:;
	V58= (*(LnkLI86))((V38));
	base[2]= (*(LnkLI85))(/* INLINE-ARGS */V58,(V41));
	vs_top=(vs_base=base+2)+1;
	return;
T224:;
	if((V44!= VV[26]))goto T230;
	if(((*(LnkLI91))((V38)))!=Cnil){
	goto T231;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T231:;
	if(!(endp((V41)))){
	goto T235;}
	goto T233;
T235:;
	if(!((car((V41)))==(VV[17]))){
	goto T237;}
	goto T233;
T237:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V59= vs_base[0];
	V60= (*(LnkLI92))(car((V41)));
	if(equal(V59,/* INLINE-ARGS */V60)){
	goto T233;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T233:;
	if(!(endp(cdr((V41))))){
	goto T241;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T241:;
	if(!((cadr((V41)))==(VV[17]))){
	goto T243;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T243:;
	V61= (*(LnkLI86))((V38));
	base[2]= (*(LnkLI85))(/* INLINE-ARGS */V61,cadr((V41)));
	vs_top=(vs_base=base+2)+1;
	return;
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
T246:;
	if(!(endp((V41)))){
	goto T250;}
	goto T248;
T250:;
	if(!((car((V41)))==(VV[17]))){
	goto T252;}
	goto T248;
T252:;
	base[2]= (V38);
	vs_top=(vs_base=base+2)+1;
	Larray_element_type();
	vs_top=sup;
	V62= vs_base[0];
	V63= (*(LnkLI92))(car((V41)));
	if(equal(V62,/* INLINE-ARGS */V63)){
	goto T248;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T248:;
	if(!(endp(cdr((V41))))){
	goto T256;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T256:;
	if(!((cadr((V41)))==(VV[17]))){
	goto T258;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
T258:;
	V64= (*(LnkLI86))((V38));
	base[2]= (*(LnkLI85))(/* INLINE-ARGS */V64,cadr((V41)));
	vs_top=(vs_base=base+2)+1;
	return;
T245:;
	V42= get((V40),VV[33],Cnil);
	if(((V42))==Cnil){
	goto T261;}
	base[2]= (V38);
	base[3]= (V42);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk93)();
	return;
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
TTL:;
	{register object V68;
	register object V69;
	V68= Cnil;
	V69= Cnil;
T277:;
	if(!(type_of((V67))!=t_cons)){
	goto T281;}
	V68= (V67);
	V69= Cnil;
	goto T279;
T281:;
	V68= car((V67));
	V69= cdr((V67));
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
T290:;
	if(!(type_of((V67))!=t_cons)){
	goto T296;}
	{object V71 = make_cons((V67),Cnil);
	VMR19(V71)}
T296:;
	{object V72 = (V67);
	VMR19(V72)}
T278:;
	goto T277;}
}
/*	local entry for function KNOWN-TYPE-P	*/

static object LI20(V74)

register object V74;
{	 VMB20 VMS20 VMV20
TTL:;
	if(!(type_of((V74))==t_cons)){
	goto T299;}
	V74= car((V74));
T299:;
	{register object x= (V74),V75= VV[35];
	while(!endp(V75))
	if(eql(x,V75->c.c_car)){
	goto T303;
	}else V75=V75->c.c_cdr;}
	if((get((V74),VV[33],Cnil))==Cnil){
	goto T304;}
T303:;
	{object V76 = Ct;
	VMR20(V76)}
T304:;
	{object V77 = Cnil;
	VMR20(V77)}
}
/*	function definition for SUBTYPEP	*/

static L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{object V78;
	object V79;
	check_arg(2);
	V78=(base[0]);
	V79=(base[1]);
	vs_top=sup;
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
	V78= (*(LnkLI94))((V78));
	V79= (*(LnkLI94))((V79));
	if(!(equal((V78),(V79)))){
	goto T319;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
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
T340:;
	if(!(endp((V87)))){
	goto T341;}
	goto T336;
T341:;
	base[3]= (V88);
	base[4]= (V79);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk76)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T345;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
T345:;
	V87= cdr((V87));
	V88= car((V87));
	goto T340;}
T336:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T334:;
	if(!(((V80))==(VV[37]))){
	goto T360;}
	{register object V89;
	object V90;
	V89= (V82);
	V90= car((V89));
T366:;
	if(!(endp((V89)))){
	goto T367;}
	goto T362;
T367:;
	{object V91;
	object V92;
	base[3]= (V90);
	base[4]= (V79);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk95)();
	if(vs_base>=vs_top){vs_top=sup;goto T375;}
	V91= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T376;}
	V92= vs_base[0];
	vs_top=sup;
	goto T377;
T375:;
	V91= Cnil;
T376:;
	V92= Cnil;
T377:;
	if(((V91))!=Cnil){
	goto T371;}
	base[3]= (V91);
	base[4]= (V92);
	vs_top=(vs_base=base+3)+2;
	return;}
T371:;
	V89= cdr((V89));
	V90= car((V89));
	goto T366;}
T362:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T360:;
	if(!(((V80))==(VV[38]))){
	goto T390;}
	{register object V93;
	object V94;
	V93= (V82);
	V94= car((V93));
T396:;
	if(!(endp((V93)))){
	goto T397;}
	goto T392;
T397:;
	{object V95;
	base[3]= (V94);
	base[4]= (V79);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk95)();
	vs_top=sup;
	V95= vs_base[0];
	if(((V95))==Cnil){
	goto T401;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}
T401:;
	V93= cdr((V93));
	V94= car((V93));
	goto T396;}
T392:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
T390:;
	if(!(((V80))==(VV[39]))){
	goto T332;}
	if(!(((V81))==(VV[39]))){
	goto T419;}
	V78= car((V83));
	V79= car((V82));
	goto TTL;
T419:;
	V78= Ct;
	V79= list(3,VV[37],(V79),car((V82)));
	goto TTL;
T332:;
	if(!(((V81))==(VV[36]))){
	goto T429;}
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
T429:;
	if(!(((V81))==(VV[37]))){
	goto T434;}
	{register object V96;
	object V97;
	V96= (V83);
	V97= car((V96));
T440:;
	if(!(endp((V96)))){
	goto T441;}
	goto T436;
T441:;
	{object V98;
	base[3]= (V78);
	base[4]= (V97);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk95)();
	vs_top=sup;
	V98= vs_base[0];
	if(((V98))==Cnil){
	goto T445;}
	base[3]= Ct;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;}
T445:;
	V96= cdr((V96));
	V97= car((V96));
	goto T440;}
T436:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
T434:;
	if(!(((V81))==(VV[38]))){
	goto T461;}
	{register object V99;
	object V100;
	V99= (V83);
	V100= car((V99));
T467:;
	if(!(endp((V99)))){
	goto T468;}
	goto T463;
T468:;
	{object V101;
	object V102;
	base[3]= (V78);
	base[4]= (V100);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk95)();
	if(vs_base>=vs_top){vs_top=sup;goto T476;}
	V101= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T477;}
	V102= vs_base[0];
	vs_top=sup;
	goto T478;
T476:;
	V101= Cnil;
T477:;
	V102= Cnil;
T478:;
	if(((V101))!=Cnil){
	goto T472;}
	base[3]= (V101);
	base[4]= (V102);
	vs_top=(vs_base=base+3)+2;
	return;}
T472:;
	V99= cdr((V99));
	V100= car((V99));
	goto T467;}
T463:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T461:;
	if(!(((V81))==(VV[39]))){
	goto T427;}
	V78= list(3,VV[38],(V78),car((V83)));
	V79= Cnil;
	goto TTL;
T427:;
	V84= (*(LnkLI96))((V78));
	V85= (*(LnkLI96))((V79));
	if(((V80))==(Cnil)){
	goto T499;}
	if(((V81))==(Ct)){
	goto T499;}
	if(!(((V81))==(VV[40]))){
	goto T500;}
T499:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T500:;
	if(!(((V81))==(Cnil))){
	goto T509;}
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
T509:;
	if(!(((V80))==(Ct))){
	goto T514;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
T514:;
	if(!(((V80))==(VV[40]))){
	goto T519;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
T519:;
	if(!(((V81))==(VV[41]))){
	goto T524;}
	{register object x= (V80),V103= VV[42];
	while(!endp(V103))
	if(eql(x,V103->c.c_car)){
	goto T528;
	}else V103=V103->c.c_cdr;
	goto T527;}
T528:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T527:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
T524:;
	if(!(((V81))==(VV[43]))){
	goto T534;}
	{register object x= (V80),V104= VV[44];
	while(!endp(V104))
	if(eql(x,V104->c.c_car)){
	goto T538;
	}else V104=V104->c.c_cdr;
	goto T537;}
T538:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
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
T545:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T542:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
T534:;
	if(!(((V80))==(VV[41]))){
	goto T558;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
T558:;
	if(!(((V80))==(VV[43]))){
	goto T563;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
T563:;
	if(!(((V81))==(VV[45]))){
	goto T568;}
	{register object x= (V80),V105= VV[46];
	while(!endp(V105))
	if(eql(x,V105->c.c_car)){
	goto T572;
	}else V105=V105->c.c_cdr;
	goto T571;}
T572:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T571:;
	if(((V84))==Cnil){
	goto T576;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T576:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
T568:;
	if(!(((V80))==(VV[45]))){
	goto T583;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
T583:;
	if(!(((V81))==(VV[47]))){
	goto T588;}
	{register object x= (V80),V106= VV[48];
	while(!endp(V106))
	if(eql(x,V106->c.c_car)){
	goto T592;
	}else V106=V106->c.c_cdr;
	goto T591;}
T592:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T591:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
T588:;
	if(!(((V81))==(VV[49]))){
	goto T598;}
	if(!(((V80))==(VV[49]))){
	goto T601;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T601:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
T598:;
	if(!(((V81))==(VV[50]))){
	goto T608;}
	if(!(((V80))==(VV[50]))){
	goto T611;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T611:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
T608:;
	if(!(((V81))==(VV[51]))){
	goto T618;}
	{register object x= (V80),V107= VV[52];
	while(!endp(V107))
	if(eql(x,V107->c.c_car)){
	goto T622;
	}else V107=V107->c.c_cdr;
	goto T621;}
T622:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T621:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
T618:;
	if(!(((V80))==(VV[51]))){
	goto T628;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
T628:;
	if(!(((V81))==(VV[53]))){
	goto T633;}
	if(((V80))==(VV[53])){
	goto T635;}
	if((get((V80),VV[33],Cnil))==Cnil){
	goto T636;}
T635:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T636:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
T633:;
	if(!(((V80))==(VV[53]))){
	goto T645;}
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
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
T658:;
	if(((V109))!=Cnil){
	goto T659;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T659:;
	if(!(((V109))==(V108))){
	goto T665;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T665:;
	V109= structure_ref((V109),VV[33],4);
	goto T658;}
T655:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;}
T650:;
	if(!(((V81))==(VV[54]))){
	goto T676;}
	{register object x= (V80),V111= VV[55];
	while(!endp(V111))
	if(eql(x,V111->c.c_car)){
	goto T681;
	}else V111=V111->c.c_cdr;
	goto T679;}
T681:;
	if(((*(LnkLI97))((V82),(V83)))==Cnil){
	goto T679;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T679:;
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
T676:;
	if((get((V81),VV[33],Cnil))==Cnil){
	goto T688;}
	base[2]= Cnil;
	base[3]= (V84);
	vs_top=(vs_base=base+2)+2;
	return;
T688:;
	{object V112= (V80);
	if((V112!= VV[29]))goto T692;
	{object V113= (V81);
	if((V113!= VV[29]))goto T693;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T693:;
	if((V113!= VV[13])
	&& (V113!= VV[61]))goto T696;
	if(((*(LnkLI97))(VV[56],(V83)))==Cnil){
	goto T698;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T698:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T696:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;}
T692:;
	if((V112!= VV[30]))goto T706;
	{object V114= (V81);
	if((V114!= VV[30]))goto T707;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T707:;
	if((V114!= VV[61]))goto T710;
	if(((*(LnkLI97))(VV[57],(V83)))==Cnil){
	goto T712;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T712:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T710:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;}
T706:;
	if((V112!= VV[78]))goto T720;
	{register object x= (V81),V115= VV[58];
	while(!endp(V115))
	if(eql(x,V115->c.c_car)){
	goto T723;
	}else V115=V115->c.c_cdr;
	goto T722;}
T723:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T722:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
T720:;
	if((V112!= VV[24]))goto T728;
	{register object x= (V81),V116= VV[59];
	while(!endp(V116))
	if(eql(x,V116->c.c_car)){
	goto T731;
	}else V116=V116->c.c_cdr;
	goto T730;}
T731:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T730:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
T728:;
	if((V112!= VV[13]))goto T736;
	{register object x= (V81),V117= VV[60];
	while(!endp(V117))
	if(eql(x,V117->c.c_car)){
	goto T739;
	}else V117=V117->c.c_cdr;
	goto T738;}
T739:;
	base[2]= (*(LnkLI97))((V82),(V83));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T738:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
T736:;
	if((V112!= VV[61]))goto T744;
	if(!(((V81))==(VV[61]))){
	goto T746;}
	base[2]= (*(LnkLI97))((V82),(V83));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T746:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
T744:;
	if((V112!= VV[62]))goto T752;
	if(!(((V81))==(VV[62]))){
	goto T754;}
	base[2]= (*(LnkLI97))((V82),(V83));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T754:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
T752:;
	if((V112!= VV[31]))goto T760;
	{register object x= (V81),V118= VV[63];
	while(!endp(V118))
	if(eql(x,V118->c.c_car)){
	goto T763;
	}else V118=V118->c.c_cdr;
	goto T762;}
T763:;
	base[2]= (*(LnkLI97))((V82),(V83));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T762:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
T760:;
	if((V112!= VV[82])
	&& (V112!= VV[83])
	&& (V112!= VV[32]))goto T768;
	{register object x= (V81),V119= VV[64];
	while(!endp(V119))
	if(eql(x,V119->c.c_car)){
	goto T771;
	}else V119=V119->c.c_cdr;
	goto T770;}
T771:;
	base[2]= (*(LnkLI97))((V82),(V83));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T770:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
T768:;
	if((V112!= VV[65]))goto T776;
	if(!(((V81))==(VV[65]))){
	goto T778;}{object V120;
	V120= car((V82));
	if(V120==Cnil)goto T782;
	V78= V120;
	goto T781;
T782:;}
	V78= Ct;
T781:;{object V121;
	V121= car((V83));
	if(V121==Cnil)goto T785;
	V79= V121;
	goto T784;
T785:;}
	V79= Ct;
T784:;
	goto TTL;
T778:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
T776:;
	if((V112!= VV[26]))goto T789;
	if(((V81))==(VV[26])){
	goto T790;}
	if(!(((V81))==(VV[22]))){
	goto T791;}
T790:;
	if(endp((V82))){
	goto T796;}
	if(!((car((V82)))==(VV[17]))){
	goto T797;}
T796:;
	if(endp((V83))){
	goto T795;}
	if((car((V83)))==(VV[17])){
	goto T795;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T797:;
	if(endp((V83))){
	goto T795;}
	if((car((V83)))==(VV[17])){
	goto T795;}
	if(equal(car((V82)),car((V83)))){
	goto T795;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T795:;
	if(endp(cdr((V82)))){
	goto T816;}
	if(!((cadr((V82)))==(VV[17]))){
	goto T815;}
T816:;
	if(endp(cdr((V83)))){
	goto T820;}
	if(!((cadr((V83)))==(VV[17]))){
	goto T821;}
T820:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T821:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T815:;
	if(endp(cdr((V83)))){
	goto T830;}
	if(!((cadr((V83)))==(VV[17]))){
	goto T829;}
T830:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T829:;
	base[2]= (*(LnkLI85))(cadr((V82)),cadr((V83)));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T791:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
T789:;
	if((V112!= VV[22]))goto T840;
	if(!(((V81))==(VV[22]))){
	goto T842;}
	if(endp((V82))){
	goto T845;}
	if(!((car((V82)))==(VV[17]))){
	goto T846;}
T845:;
	if(endp((V83))){
	goto T844;}
	if((car((V83)))==(VV[17])){
	goto T844;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T846:;
	if(endp((V83))){
	goto T844;}
	if((car((V83)))==(VV[17])){
	goto T844;}
	if(equal(car((V82)),car((V83)))){
	goto T844;}
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T844:;
	if(endp(cdr((V82)))){
	goto T865;}
	if(!((cadr((V82)))==(VV[17]))){
	goto T864;}
T865:;
	if(endp(cdr((V83)))){
	goto T869;}
	if(!((cadr((V83)))==(VV[17]))){
	goto T870;}
T869:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T870:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T864:;
	if(endp(cdr((V83)))){
	goto T879;}
	if(!((cadr((V83)))==(VV[17]))){
	goto T878;}
T879:;
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T878:;
	base[2]= (*(LnkLI85))(cadr((V82)),cadr((V83)));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T842:;
	base[2]= Cnil;
	base[3]= (V85);
	vs_top=(vs_base=base+2)+2;
	return;
T840:;
	if(((V84))==Cnil){
	goto T890;}
	base[2]= (((V80))==((V81))?Ct:Cnil);
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
T890:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;}}
	}
}
/*	local entry for function SUB-INTERVAL-P	*/

static object LI22(V124,V125)

register object V124;register object V125;
{	 VMB22 VMS22 VMV22
TTL:;
	{register object V126;
	register object V127;
	register object V128;
	register object V129;
	V126= Cnil;
	V127= Cnil;
	V128= Cnil;
	V129= Cnil;
	if(!(endp((V124)))){
	goto T898;}
	V126= VV[17];
	V127= VV[17];
	goto T896;
T898:;
	if(!(endp(cdr((V124))))){
	goto T904;}
	V126= car((V124));
	V127= VV[17];
	goto T896;
T904:;
	V126= car((V124));
	V127= cadr((V124));
T896:;
	if(!(endp((V125)))){
	goto T914;}
	V128= VV[17];
	V129= VV[17];
	goto T912;
T914:;
	if(!(endp(cdr((V125))))){
	goto T920;}
	V128= car((V125));
	V129= VV[17];
	goto T912;
T920:;
	V128= car((V125));
	V129= cadr((V125));
T912:;
	if(!(((V126))==(VV[17]))){
	goto T930;}
	if(((V128))==(VV[17])){
	goto T928;}
	{object V130 = Cnil;
	VMR22(V130)}
T930:;
	{object V131;
	V131= (((V128))==(VV[17])?Ct:Cnil);
	if(((V131))==Cnil){
	goto T936;}
	goto T928;
T936:;
	if(!(type_of((V126))==t_cons)){
	goto T939;}
	if(!(type_of((V128))==t_cons)){
	goto T942;}
	if(!(number_compare(car((V126)),car((V128)))<0)){
	goto T928;}
	{object V132 = Cnil;
	VMR22(V132)}
T942:;
	if(!(number_compare(car((V126)),(V128))<0)){
	goto T928;}
	{object V133 = Cnil;
	VMR22(V133)}
T939:;
	{object V134;
	if(!(type_of((V128))==t_cons)){
	goto T950;}
	if(!(number_compare((V126),car((V128)))<=0)){
	goto T953;}
	{object V135 = Cnil;
	VMR22(V135)}
T953:;
	V134= Cnil;
	goto T948;
T950:;
	if(!(number_compare((V126),(V128))<0)){
	goto T956;}
	{object V136 = Cnil;
	VMR22(V136)}
T956:;
	V134= Cnil;
T948:;
	if(((V134))==Cnil){
	goto T928;}}}
T928:;
	if(!(((V127))==(VV[17]))){
	goto T962;}
	if(((V129))==(VV[17])){
	goto T960;}
	{object V137 = Cnil;
	VMR22(V137)}
T962:;
	{object V138;
	V138= (((V129))==(VV[17])?Ct:Cnil);
	if(((V138))==Cnil){
	goto T968;}
	goto T960;
T968:;
	if(!(type_of((V127))==t_cons)){
	goto T971;}
	if(!(type_of((V129))==t_cons)){
	goto T974;}
	if(!(number_compare(car((V127)),car((V129)))>0)){
	goto T960;}
	{object V139 = Cnil;
	VMR22(V139)}
T974:;
	if(!(number_compare(car((V127)),(V129))>0)){
	goto T960;}
	{object V140 = Cnil;
	VMR22(V140)}
T971:;
	{object V141;
	if(!(type_of((V129))==t_cons)){
	goto T982;}
	if(!(number_compare((V127),car((V129)))>=0)){
	goto T985;}
	{object V142 = Cnil;
	VMR22(V142)}
T985:;
	V141= Cnil;
	goto T980;
T982:;
	if(!(number_compare((V127),(V129))>0)){
	goto T988;}
	{object V143 = Cnil;
	VMR22(V143)}
T988:;
	V141= Cnil;
T980:;
	if(((V141))==Cnil){
	goto T960;}}}
T960:;
	{object V144 = Ct;
	VMR22(V144)}}
}
/*	local entry for function IN-INTERVAL-P	*/

static object LI23(V147,V148)

register object V147;register object V148;
{	 VMB23 VMS23 VMV23
TTL:;
	{register object V149;
	register object V150;
	V149= Cnil;
	V150= Cnil;
	if(!(endp((V148)))){
	goto T994;}
	V149= VV[17];
	V150= VV[17];
	goto T992;
T994:;
	if(!(endp(cdr((V148))))){
	goto T1000;}
	V149= car((V148));
	V150= VV[17];
	goto T992;
T1000:;
	V149= car((V148));
	V150= cadr((V148));
T992:;
	{object V151;
	V151= (((V149))==(VV[17])?Ct:Cnil);
	if(((V151))==Cnil){
	goto T1011;}
	goto T1008;
T1011:;
	if(!(type_of((V149))==t_cons)){
	goto T1014;}
	if(!(number_compare((V147),car((V149)))<=0)){
	goto T1008;}
	{object V152 = Cnil;
	VMR23(V152)}
T1014:;
	{object V153;
	if(!(number_compare((V147),(V149))<0)){
	goto T1020;}
	{object V154 = Cnil;
	VMR23(V154)}
T1020:;
	V153= Cnil;
	if(((V153))==Cnil){
	goto T1008;}}}
T1008:;
	{object V155;
	V155= (((V150))==(VV[17])?Ct:Cnil);
	if(((V155))==Cnil){
	goto T1027;}
	goto T1024;
T1027:;
	if(!(type_of((V150))==t_cons)){
	goto T1030;}
	if(!(number_compare((V147),car((V150)))>=0)){
	goto T1024;}
	{object V156 = Cnil;
	VMR23(V156)}
T1030:;
	{object V157;
	if(!(number_compare((V147),(V150))>0)){
	goto T1036;}
	{object V158 = Cnil;
	VMR23(V158)}
T1036:;
	V157= Cnil;
	if(((V157))==Cnil){
	goto T1024;}}}
T1024:;
	{object V159 = Ct;
	VMR23(V159)}}
}
/*	local entry for function MATCH-DIMENSIONS	*/

static object LI24(V162,V163)

object V162;register object V163;
{	 VMB24 VMS24 VMV24
TTL:;
	if(((V162))!=Cnil){
	goto T1041;}
	{object V164 = (((V163))==Cnil?Ct:Cnil);
	VMR24(V164)}
T1041:;
	if(!((car((V163)))==(VV[17]))){
	goto T1045;}
	goto T1043;
T1045:;
	if(eql(car((V162)),car((V163)))){
	goto T1043;}
	{object V165 = Cnil;
	VMR24(V165)}
T1043:;
	V162= cdr((V162));
	V163= cdr((V163));
	goto TTL;
}
/*	local entry for function COERCE	*/

static object LI25(V168,V169)

register object V168;object V169;
{	 VMB25 VMS25 VMV25
TTL:;
	base[0]= (V168);
	base[1]= (V169);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk76)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1050;}
	{object V170 = (V168);
	VMR25(V170)}
T1050:;
	V169= (*(LnkLI94))((V169));
	{object V171= car((V169));
	if((V171!= VV[41]))goto T1057;
	{register object V172;
	register object V173;
	V174 = make_fixnum(length((V168)));
	V173= one_minus(V174);
	V172= Cnil;
T1060:;
	if(!(number_compare((V173),small_fixnum(0))<0)){
	goto T1061;}
	{object V175 = (V172);
	VMR25(V175)}
T1061:;
	V176= elt((V168),fixint((V173)));
	V172= make_cons(/* INLINE-ARGS */V176,(V172));
	V173= one_minus((V173));
	goto T1060;}
T1057:;
	if((V171!= VV[22])
	&& (V171!= VV[26]))goto T1069;
	if(endp(cdr((V169)))){
	goto T1070;}
	if(endp(cddr((V169)))){
	goto T1070;}
	if((caddr((V169)))==(VV[17])){
	goto T1070;}
	if(endp(cdr(caddr((V169))))){
	goto T1070;}
	base[0]= VV[66];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T1070:;
	{register object V177;
	register object V178;
	register object V179;
	V180 = make_fixnum(length((V168)));
	V177= (VFUN_NARGS=2,(*(LnkLI98))((V169),V180));
	V179= make_fixnum(length((V168)));
	V178= small_fixnum(0);
T1083:;
	if(!(number_compare((V178),(V179))>=0)){
	goto T1084;}
	{object V181 = (V177);
	VMR25(V181)}
T1084:;
	V182= elt((V168),fixint((V178)));
	(void)(elt_set((V177),fixint((V178)),/* INLINE-ARGS */V182));
	V178= one_plus((V178));
	goto T1083;}
T1069:;
	if((V171!= VV[99]))goto T1092;
	base[0]= (V168);
	vs_top=(vs_base=base+0)+1;
	Lcharacter();
	vs_top=sup;
	{object V183 = vs_base[0];
	VMR25(V183)}
T1092:;
	if((V171!= VV[62]))goto T1094;
	base[0]= (V168);
	vs_top=(vs_base=base+0)+1;
	Lfloat();
	vs_top=sup;
	{object V184 = vs_base[0];
	VMR25(V184)}
T1094:;
	if((V171!= VV[31]))goto T1096;
	base[0]= (V168);
	base[1]= VV[67];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V185 = vs_base[0];
	VMR25(V185)}
T1096:;
	if((V171!= VV[82])
	&& (V171!= VV[83])
	&& (V171!= VV[32]))goto T1099;
	base[0]= (V168);
	base[1]= VV[68];
	vs_top=(vs_base=base+0)+2;
	Lfloat();
	vs_top=sup;
	{object V186 = vs_base[0];
	VMR25(V186)}
T1099:;
	if((V171!= VV[65]))goto T1102;
	if((cdr((V169)))==Cnil){
	goto T1103;}
	if((cadr((V169)))==Cnil){
	goto T1103;}
	if(!((cadr((V169)))==(VV[17]))){
	goto T1104;}
T1103:;
	base[1]= (V168);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= (V168);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V187 = vs_base[0];
	VMR25(V187)}
T1104:;
	base[1]= (V168);
	vs_top=(vs_base=base+1)+1;
	Lrealpart();
	vs_top=sup;
	V188= vs_base[0];
	base[0]= (*(LnkLI100))(V188,cadr((V169)));
	base[2]= (V168);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	V189= vs_base[0];
	base[1]= (*(LnkLI100))(V189,cadr((V169)));
	vs_top=(vs_base=base+0)+2;
	Lcomplex();
	vs_top=sup;
	{object V190 = vs_base[0];
	VMR25(V190)}
T1102:;
	base[0]= VV[69];
	base[1]= (V168);
	base[2]= (V169);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V191 = vs_base[0];
	VMR25(V191)}}
}
/*	function definition for WARN-VERSION	*/

static L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_reserve(VM26);
	{object V192;
	object V193;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V192=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1123;}
	V193=(base[1]);
	vs_top=sup;
	goto T1124;
T1123:;
	V193= Cnil;
T1124:;
	if(symbol_value(VV[70])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	if(!(((eql((V192),symbol_value(VV[70]))?Ct:Cnil))==Cnil)){
	goto T1128;}
	goto T1126;
T1128:;
	if(((eql((V193),symbol_value(VV[71]))?Ct:Cnil))==Cnil){
	goto T1126;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
T1126:;
	if(symbol_value(VV[72])==Cnil){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	base[2]= Ct;
	base[3]= VV[73];
	base[4]= (V193);
	base[5]= (V192);
	vs_top=(vs_base=base+2)+4;
	Lformat();
	return;
	}
}
static object  LnkTLI100(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[100],&LnkLI100,2,ap);} /* COERCE */
static object  LnkTLI98(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[98],&LnkLI98,ap);} /* MAKE-SEQUENCE */
static object  LnkTLI97(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[97],&LnkLI97,2,ap);} /* SUB-INTERVAL-P */
static object  LnkTLI96(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[96],&LnkLI96,1,ap);} /* KNOWN-TYPE-P */
static LnkT95(){ call_or_link(VV[95],&Lnk95);} /* SUBTYPEP */
static object  LnkTLI94(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[94],&LnkLI94,1,ap);} /* NORMALIZE-TYPE */
static LnkT93(){ call_or_link(VV[93],&Lnk93);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI92(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[92],&LnkLI92,1,ap);} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI91(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[91],&LnkLI91,1,ap);} /* SIMPLE-ARRAY-P */
static object  LnkTLI86(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[86],&LnkLI86,1,ap);} /* ARRAY-DIMENSIONS */
static object  LnkTLI85(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[85],&LnkLI85,2,ap);} /* MATCH-DIMENSIONS */
static LnkT81(){ call_or_link(VV[81],&Lnk81);} /* REALP */
static LnkT80(){ call_or_link(VV[80],&Lnk80);} /* RATIONALP */
static object  LnkTLI79(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[79],&LnkLI79,2,ap);} /* IN-INTERVAL-P */
static LnkT76(){ call_or_link(VV[76],&Lnk76);} /* TYPEP */
static LnkT75(){ call_or_link(VV[75],&Lnk75);} /* ARRAY-HAS-FILL-POINTER-P */
static object  LnkTLI74(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[74],&LnkLI74,1,ap);} /* FIND-DOCUMENTATION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

