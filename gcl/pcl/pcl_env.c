
#include "cmpinclude.h"
#include "pcl_env.h"
void init_pcl_env(){do_init(VV);}
/*	function definition for (DEFGENERIC DESCRIBE-OBJECT)10274	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[0];
	base[1]= VV[1];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk88)();
	return;
}
/*	function definition for PCL-DESCRIBE	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{object V1;
	check_arg(1);
	V1=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V1);
	base[2]= (VV[2]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk0)(Lclptr0);
	vs_top=sup;
	vs_base=vs_top=base+1;
	vs_base[0]=Cnil;
	return;
	}
}
/*	function definition for (FAST-METHOD DESCRIBE-OBJECT (T T))	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{object V2;
	object V3;
	register object V4;
	object V5;
	check_arg(4);
	V2=(base[0]);
	V3=(base[1]);
	V4=(base[2]);
	V5=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V4);
	vs_top=(vs_base=base+4)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T9;}
	base[4]= (*(LnkLI89))((V4),(V5));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T9;
T9:;
	{object V7 =(VV[3])->s.s_plist;
	 object ind= VV[4];
	while(V7!=Cnil){
	if(V7->c.c_car==ind){
	base[4]= (V7->c.c_cdr->c.c_car);
	goto T12;
	}else V7=V7->c.c_cdr->c.c_cdr;}
	base[4]= Cnil;}
	goto T12;
T12:;
	base[5]= (V4);
	vs_top=(vs_base=base+5)+1;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	function definition for (FAST-METHOD DESCRIBE-OBJECT (SLOT-OBJECT T))	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{object V8;
	object V9;
	register object V10;
	check_arg(4);
	V8=(base[0]);
	V9=(base[1]);
	V10=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V12;
	object V13;
	register object V14;
	register object V15;
	register object V16;
	V12= (*(LnkLI90))((V10));
	base[7]= (V12);
	base[8]= (V10);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk91)(Lclptr91);
	vs_top=sup;
	V13= vs_base[0];
	base[6]= small_fixnum(0);
	V14= Cnil;
	V15= Cnil;
	V16= Cnil;
	{object V17;
	register object V18;
	V17= (V13);
	V18= CMPcar((V17));
	goto T27;
T27:;
	if(!(((V17))==Cnil)){
	goto T28;}
	goto T23;
	goto T28;
T28:;
	base[9]= (V18);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk92)(Lclptr92);
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+8)+1;
	L7(base);
	vs_top=sup;
	base[8]= (V18);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk93)(Lclptr93);
	vs_top=sup;
	V20= vs_base[0];
	{object V19= V20;
	if((V19!= VV[94]))goto T38;
	V14= make_cons(V18,(V14));
	goto T35;
	goto T38;
T38:;
	if((V19!= VV[95]))goto T40;
	V15= make_cons(V18,(V15));
	goto T35;
	goto T40;
T40:;
	V16= make_cons(V18,(V16));}
	goto T35;
T35:;
	V17= CMPcdr((V17));
	V18= CMPcar((V17));
	goto T27;}
	goto T23;
T23:;
	V24= number_plus(base[6],small_fixnum(3));
	base[6]= (number_compare(/* INLINE-ARGS */V24,small_fixnum(30))<=0?(/* INLINE-ARGS */V24):small_fixnum(30));
	base[7]= base[3];
	base[8]= VV[5];
	base[9]= (V10);
	base[10]= (V12);
	vs_top=(vs_base=base+7)+4;
	Lformat();
	vs_top=sup;
	if(((V14))==Cnil){
	goto T55;}
	base[7]= base[3];
	base[8]= VV[6];
	vs_top=(vs_base=base+7)+2;
	Lformat();
	vs_top=sup;
	{object V25;
	object V26;
	V25= nreverse((V14));
	V26= CMPcar((V25));
	goto T64;
T64:;
	if(!(((V25))==Cnil)){
	goto T65;}
	goto T55;
	goto T65;
T65:;
	base[10]= (V26);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk92)(Lclptr92);
	vs_top=sup;
	base[9]= vs_base[0];
	base[11]= (V10);
	base[13]= (V26);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk92)(Lclptr92);
	vs_top=sup;
	base[12]= vs_base[0];
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk96)();
	vs_top=sup;
	base[10]= vs_base[0];
	vs_top=(vs_base=base+9)+2;
	L8(base);
	vs_top=sup;
	V25= CMPcdr((V25));
	V26= CMPcar((V25));
	goto T64;}
	goto T55;
T55:;
	if(((V15))==Cnil){
	goto T81;}
	base[7]= base[3];
	base[8]= VV[7];
	vs_top=(vs_base=base+7)+2;
	Lformat();
	vs_top=sup;
	{object V27;
	object V28;
	V27= nreverse((V15));
	V28= CMPcar((V27));
	goto T90;
T90:;
	if(!(((V27))==Cnil)){
	goto T91;}
	goto T81;
	goto T91;
T91:;
	base[10]= (V28);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk92)(Lclptr92);
	vs_top=sup;
	base[9]= vs_base[0];
	base[11]= (V10);
	base[13]= (V28);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk92)(Lclptr92);
	vs_top=sup;
	base[12]= vs_base[0];
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk96)();
	vs_top=sup;
	base[10]= vs_base[0];
	vs_top=(vs_base=base+9)+2;
	L8(base);
	vs_top=sup;
	V27= CMPcdr((V27));
	V28= CMPcar((V27));
	goto T90;}
	goto T81;
T81:;
	if(((V16))==Cnil){
	goto T107;}
	base[7]= base[3];
	base[8]= VV[8];
	vs_top=(vs_base=base+7)+2;
	Lformat();
	vs_top=sup;
	{object V29;
	object V30;
	V29= nreverse((V16));
	V30= CMPcar((V29));
	goto T116;
T116:;
	if(!(((V29))==Cnil)){
	goto T117;}
	goto T107;
	goto T117;
T117:;
	base[10]= (V30);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk92)(Lclptr92);
	vs_top=sup;
	base[9]= vs_base[0];
	base[11]= (V10);
	base[13]= (V30);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk92)(Lclptr92);
	vs_top=sup;
	base[12]= vs_base[0];
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk96)();
	vs_top=sup;
	base[10]= vs_base[0];
	base[12]= (V30);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk93)(Lclptr93);
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+9)+3;
	L8(base);
	vs_top=sup;
	V29= CMPcdr((V29));
	V30= CMPcar((V29));
	goto T116;}
	goto T107;
T107:;
	vs_base=vs_top=base+7;
	vs_base[0]=Cnil;
	return;}
	}
}
/*	function definition for (FAST-METHOD SLOTS-TO-INSPECT (SLOT-CLASS SLOT-OBJECT))	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{object V31;
	object V32;
	object V33;
	object V34;
	check_arg(4);
	V31=(base[0]);
	V32=(base[1]);
	V33=(base[2]);
	V34=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V33);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk97)(Lclptr97);
	return;
	}
}
/*	function definition for (FAST-METHOD DESCRIBE-OBJECT (STANDARD-GENERIC-FUNCTION T))	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V36;
	check_arg(4);
	V36=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= base[3];
	base[5]= VV[11];
	base[6]= base[2];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[4]= base[3];
	base[5]= VV[12];
	base[7]= base[2];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk98)(Lclptr98);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[4]= base[3];
	base[5]= VV[13];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	{register object V38;
	register object V39;
	base[6]= base[2];
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk99)(Lclptr99);
	vs_top=sup;
	V38= vs_base[0];
	V39= CMPcar((V38));
	goto T157;
T157:;
	if(!(((V38))==Cnil)){
	goto T158;}
	goto T152;
	goto T158;
T158:;
	base[6]= base[3];
	base[7]= VV[14];
	base[9]= (V39);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk100)(Lclptr100);
	vs_top=sup;
	base[8]= vs_base[0];
	base[9]= (*(LnkLI101))((V39));
	vs_top=(vs_base=base+6)+4;
	Lformat();
	vs_top=sup;{object V40;
	base[7]= (V39);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk102)(Lclptr102);
	vs_top=sup;
	V40= vs_base[0];
	if(V40==Cnil)goto T170;
	base[6]= V40;
	goto T169;
	goto T170;
T170:;}
	base[7]= (V39);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk103)(Lclptr103);
	vs_top=sup;
	base[6]= vs_base[0];
	goto T169;
T169:;
	base[7]= base[3];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk0)(Lclptr0);
	vs_top=sup;
	V38= CMPcdr((V38));
	V39= CMPcar((V38));
	goto T157;}
	goto T152;
T152:;
	if(((VV[15]->s.s_dbind))==Cnil){
	goto T181;}
	vs_base=vs_top;
	L11(base);
	return;
	goto T181;
T181:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	function definition for (FAST-METHOD DESCRIBE-OBJECT (CLASS T))	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{object V41;
	check_arg(4);
	V41=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= base[3];
	base[5]= VV[33];
	base[6]= base[2];
	base[8]= (*(LnkLI90))(base[2]);
	vs_top=(vs_base=base+8)+1;
	L15(base);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	Lformat();
	vs_top=sup;
	{register object V43;
	base[4]= base[2];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;
	V43= vs_base[0];
	if(((V43))==Cnil){
	goto T196;}
	V44= (VFUN_NARGS=2,(*(LnkLI105))((V43),Cnil));
	if(!((base[2])==(/* INLINE-ARGS */V44))){
	goto T199;}
	base[4]= base[3];
	base[5]= VV[34];
	base[6]= (V43);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T192;
	goto T199;
T199:;
	base[4]= base[3];
	base[5]= VV[35];
	base[6]= (V43);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T192;
	goto T196;
T196:;
	base[4]= base[3];
	base[5]= VV[36];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;}
	goto T192;
T192:;
	base[4]= base[3];
	base[5]= VV[37];
	base[8]= base[2];
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk106)(Lclptr106);
	vs_top=sup;
	V47= vs_base[0];
	{object V45;
	object V46= V47;
	if(V46==Cnil){
	base[6]= Cnil;
	goto T211;}
	base[7]=V45=MMcons(Cnil,Cnil);
	goto T212;
T212:;
	base[8]= (V46->c.c_car);
	vs_top=(vs_base=base+8)+1;
	L15(base);
	vs_top=sup;
	(V45->c.c_car)= vs_base[0];
	if((V46=MMcdr(V46))==Cnil){
	base[6]= base[7];
	goto T211;}
	V45=MMcdr(V45)=MMcons(Cnil,Cnil);
	goto T212;}
	goto T211;
T211:;
	base[9]= base[2];
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk107)(Lclptr107);
	vs_top=sup;
	V50= vs_base[0];
	{object V48;
	object V49= V50;
	if(V49==Cnil){
	base[7]= Cnil;
	goto T217;}
	base[8]=V48=MMcons(Cnil,Cnil);
	goto T218;
T218:;
	base[9]= (V49->c.c_car);
	vs_top=(vs_base=base+9)+1;
	L15(base);
	vs_top=sup;
	(V48->c.c_car)= vs_base[0];
	if((V49=MMcdr(V49))==Cnil){
	base[7]= base[8];
	goto T217;}
	V48=MMcdr(V48)=MMcons(Cnil,Cnil);
	goto T218;}
	goto T217;
T217:;
	base[10]= base[2];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk108)(Lclptr108);
	vs_top=sup;
	V53= vs_base[0];
	{object V51;
	object V52= V53;
	if(V52==Cnil){
	base[8]= Cnil;
	goto T223;}
	base[9]=V51=MMcons(Cnil,Cnil);
	goto T224;
T224:;
	base[10]= (V52->c.c_car);
	vs_top=(vs_base=base+10)+1;
	L15(base);
	vs_top=sup;
	(V51->c.c_car)= vs_base[0];
	if((V52=MMcdr(V52))==Cnil){
	base[8]= base[9];
	goto T223;}
	V51=MMcdr(V51)=MMcons(Cnil,Cnil);
	goto T224;}
	goto T223;
T223:;
	base[10]= base[2];
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk109)(Lclptr109);
	vs_top=sup;
	V54= vs_base[0];
	base[9]= CMPmake_fixnum((long)length(V54));
	vs_top=(vs_base=base+4)+6;
	Lformat();
	vs_top=sup;
	if(((VV[15]->s.s_dbind))==Cnil){
	goto T233;}
	vs_base=vs_top;
	L14(base);
	return;
	goto T233;
T233:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local entry for function DESCRIBE-PACKAGE	*/

static object LI16(V57,V58)

object V57;object V58;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	base[0]= (V57);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T235;}
	base[0]= (V57);
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V57= vs_base[0];
	goto T235;
T235:;
	base[0]= (V58);
	base[1]= VV[45];
	base[2]= (V57);
	base[4]= (V57);
	vs_top=(vs_base=base+4)+1;
	Ltype_of();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V59;
	base[0]= (V57);
	vs_top=(vs_base=base+0)+1;
	Lpackage_nicknames();
	vs_top=sup;
	V59= vs_base[0];
	if(((V59))==Cnil){
	goto T247;}
	base[0]= (V58);
	base[1]= VV[46];
	base[3]= (V59);
	vs_top=(vs_base=base+3)+1;
	Lbutlast();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= (V59);
	vs_top=(vs_base=base+4)+1;
	Llast();
	vs_top=sup;
	V60= vs_base[0];
	base[3]= CMPcar(V60);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;}
	goto T247;
T247:;
	{object V61;
	object V62;
	V61= small_fixnum(0);
	V62= small_fixnum(0);
	{object V63;
	register object V64;
	register object V65;
	{object V66;
	V66= (V57);
	base[0]= (V66);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T264;}
	base[0]= coerce_to_string((V66));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V66= vs_base[0];
	if(((V66))!=Cnil){
	goto T264;}
	base[0]= VV[47];
	base[1]= VV[48];
	base[2]= (V57);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk110)();
	vs_top=sup;
	goto T264;
T264:;
	V63= (V66);}
	V64= Cnil;
	V65= Cnil;
	{long V67;
	long V68;
	base[0]= (V63);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk111)();
	vs_top=sup;
	V67= fix(vs_base[0]);
	V68= 0;
	goto T279;
T279:;
	if(!((V68)>=(V67))){
	goto T282;}
	V64= Cnil;
	goto T262;
	goto T282;
T282:;
	base[0]= (V63);
	base[1]= CMPmake_fixnum(V68);
	vs_top=(vs_base=base+0)+2;
	siLpackage_external();
	vs_top=sup;
	V65= vs_base[0];
	goto T280;
T280:;
	if(((V65))!=Cnil){
	goto T290;}
	goto T281;
	goto T290;
T290:;
	V64= CMPcar((V65));
	V62= number_plus((V62),small_fixnum(1));
	V65= CMPcdr((V65));
	goto T280;
	goto T281;
T281:;
	V68= (long)(V68)+1;
	goto T279;}}
	goto T262;
T262:;
	{register object V69;
	object V70;
	register object V71;
	{object V72;
	V72= (V57);
	base[0]= (V72);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T304;}
	base[0]= coerce_to_string((V72));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V72= vs_base[0];
	if(((V72))!=Cnil){
	goto T304;}
	base[0]= VV[47];
	base[1]= VV[48];
	base[2]= (V57);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk110)();
	vs_top=sup;
	goto T304;
T304:;
	V69= (V72);}
	V70= Cnil;
	V71= Cnil;
	{object V73;
	register object V74;
	base[2]= (V69);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V75= vs_base[0];
	V73= make_cons((V69),V75);
	V74= CMPcar((V73));
	goto T320;
T320:;
	if(!(((V73))==Cnil)){
	goto T321;}
	V70= Cnil;
	goto T302;
	goto T321;
T321:;
	{long V76;
	register long V77;
	base[2]= (V74);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk111)();
	if(vs_base>=vs_top){vs_top=sup;goto T330;}
	V76= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T331;}
	V77= fix(vs_base[0]);
	vs_top=sup;
	goto T332;
	goto T330;
T330:;
	V76= fix(Cnil);
	goto T331;
T331:;
	V77= fix(Cnil);
	goto T332;
T332:;
	if(((V69))==((V74))){
	goto T333;}
	V77= 0;
	goto T333;
T333:;
	{long V78;
	register long V79;
	V78= (long)(V77)+(V76);
	V79= 0;
	goto T340;
T340:;
	if(!((V79)>=(V78))){
	goto T343;}
	goto T327;
	goto T343;
T343:;
	if(!((V79)<(V77))){
	goto T348;}
	base[2]= (V74);
	base[3]= CMPmake_fixnum(V79);
	vs_top=(vs_base=base+2)+2;
	siLpackage_internal();
	vs_top=sup;
	V71= vs_base[0];
	goto T346;
	goto T348;
T348:;
	base[2]= (V74);
	V80 = CMPmake_fixnum(V79);
	V81 = CMPmake_fixnum(V77);
	base[3]= number_minus(V80,V81);
	vs_top=(vs_base=base+2)+2;
	siLpackage_external();
	vs_top=sup;
	V71= vs_base[0];
	goto T346;
T346:;
	goto T341;
T341:;
	if(((V71))!=Cnil){
	goto T354;}
	goto T342;
	goto T354;
T354:;
	V70= CMPcar((V71));
	if(((V74))==((V69))){
	goto T360;}
	base[3]= symbol_name((V70));
	base[4]= (V69);
	vs_top=(vs_base=base+3)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V82= vs_base[0];
	if(!((VV[49])==(CMPcar(V82)))){
	goto T359;}
	goto T360;
T360:;
	V61= number_plus((V61),small_fixnum(1));
	goto T359;
T359:;
	V71= CMPcdr((V71));
	goto T341;
	goto T342;
T342:;
	V79= (long)(V79)+1;
	goto T340;}}
	goto T327;
T327:;
	V73= CMPcdr((V73));
	V74= CMPcar((V73));
	goto T320;}}
	goto T302;
T302:;
	V61= number_minus((V61),(V62));
	base[0]= (V58);
	base[1]= VV[50];
	base[2]= (V61);
	base[3]= (V62);
	base[4]= number_plus((V61),(V62));
	vs_top=(vs_base=base+0)+5;
	Lformat();
	vs_top=sup;}
	{object V83;
	base[0]= (V57);
	vs_top=(vs_base=base+0)+1;
	Lpackage_use_list();
	vs_top=sup;
	V83= vs_base[0];
	if(((V83))==Cnil){
	goto T388;}
	base[0]= (V58);
	base[1]= VV[51];
	{object V84;
	object V85= (V83);
	if(V85==Cnil){
	base[2]= Cnil;
	goto T395;}
	base[3]=V84=MMcons(Cnil,Cnil);
	goto T396;
T396:;
	base[4]= (V85->c.c_car);
	vs_top=(vs_base=base+4)+1;
	Lpackage_name();
	vs_top=sup;
	(V84->c.c_car)= vs_base[0];
	if((V85=MMcdr(V85))==Cnil){
	base[2]= base[3];
	goto T395;}
	V84=MMcdr(V84)=MMcons(Cnil,Cnil);
	goto T396;}
	goto T395;
T395:;
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;}
	goto T388;
T388:;
	{object V86;
	base[0]= (V57);
	vs_top=(vs_base=base+0)+1;
	Lpackage_use_list();
	vs_top=sup;
	V86= vs_base[0];
	if(((V86))==Cnil){
	goto T402;}
	base[0]= (V58);
	base[1]= VV[52];
	{object V87;
	object V88= (V86);
	if(V88==Cnil){
	base[2]= Cnil;
	goto T406;}
	base[3]=V87=MMcons(Cnil,Cnil);
	goto T407;
T407:;
	base[4]= (V88->c.c_car);
	vs_top=(vs_base=base+4)+1;
	Lpackage_name();
	vs_top=sup;
	(V87->c.c_car)= vs_base[0];
	if((V88=MMcdr(V88))==Cnil){
	base[2]= base[3];
	goto T406;}
	V87=MMcdr(V87)=MMcons(Cnil,Cnil);
	goto T407;}
	goto T406;
T406:;
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V89 = vs_base[0];
	VMR8(V89)}
	goto T402;
T402:;
	{object V90 = Cnil;
	VMR8(V90)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass TRACED-METHOD10451	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[53];
	base[1]= VV[54];
	base[2]= VV[55];
	V91= listA(9,VV[22],VV[56],VV[57],Cnil,VV[58],Cnil,VV[59],VV[60],Cnil);
	V92= listA(9,VV[22],VV[61],VV[57],VV[62],VV[58],Cnil,VV[59],VV[63],Cnil);
	base[4]= VV[64];
	base[5]= (VV[112]->s.s_gfdef);
	base[6]= VV[22];
	base[7]= VV[65];
	base[8]= VV[57];
	base[9]= VV[66];
	base[10]= VV[58];
	base[11]= VV[67];
	base[12]= VV[59];
	base[13]= Cnil;
	base[14]= VV[68];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V93= vs_base[0];
	base[3]= list(3,/* INLINE-ARGS */V91,/* INLINE-ARGS */V92,V93);
	base[4]= Cnil;
	base[5]= VV[69];
	symlispcall(VV[113],base+0,6);
	return;
}
/*	function definition for (FAST-METHOD METHOD-LAMBDA-LIST (TRACED-METHOD))	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{register object V94;
	object V95;
	register object V96;
	check_arg(3);
	V94=(base[0]);
	V95=(base[1]);
	V96=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V98;
	object V99;
	V98= CMPcar((V94));
	V99= CMPcdr((V94));
	{object V100;
	if(type_of(V96)==t_structure){
	goto T438;}
	goto T436;
	goto T438;
T438:;
	if(!(((V96)->str.str_def)==(VV[72]))){
	goto T436;}
	V100= STREF(object,(V96),4);
	goto T434;
	goto T436;
T436:;{object V102;
	V102= (VV[19]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V96);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	V103= vs_base[0];
	if(!((V102)==(CMPcar(V103)))){
	goto T441;}}
	V100= CMPcar(((V96))->cc.cc_turbo[12]);
	goto T434;
	goto T441;
T441:;
	V100= Cnil;
	goto T434;
T434:;
	{register object V105;
	V105= ((V98))->v.v_self[1];
	if(!(type_of(V105)==t_fixnum)){
	goto T452;}
	V105= ((V100))->v.v_self[fix((V105))];
	goto T450;
	goto T452;
T452:;
	V105= VV[71];
	goto T450;
T450:;
	if(!(((V105))==(VV[71]))){
	goto T455;}
	base[4]= (V96);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk83)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T447;
	goto T455;
T455:;
	base[3]= (V105);}
	goto T447;
T447:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk116)(Lclptr116);
	return;}}
	}
}
/*	function definition for (FAST-METHOD METHOD-SPECIALIZERS (TRACED-METHOD))	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{register object V107;
	object V108;
	register object V109;
	check_arg(3);
	V107=(base[0]);
	V108=(base[1]);
	V109=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V111;
	object V112;
	V111= CMPcar((V107));
	V112= CMPcdr((V107));
	{object V113;
	if(type_of(V109)==t_structure){
	goto T468;}
	goto T466;
	goto T468;
T468:;
	if(!(((V109)->str.str_def)==(VV[74]))){
	goto T466;}
	V113= STREF(object,(V109),4);
	goto T464;
	goto T466;
T466:;{object V115;
	V115= (VV[19]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V109);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	V116= vs_base[0];
	if(!((V115)==(CMPcar(V116)))){
	goto T471;}}
	V113= CMPcar(((V109))->cc.cc_turbo[12]);
	goto T464;
	goto T471;
T471:;
	V113= Cnil;
	goto T464;
T464:;
	{register object V118;
	V118= ((V111))->v.v_self[1];
	if(!(type_of(V118)==t_fixnum)){
	goto T482;}
	V118= ((V113))->v.v_self[fix((V118))];
	goto T480;
	goto T482;
T482:;
	V118= VV[71];
	goto T480;
T480:;
	if(!(((V118))==(VV[71]))){
	goto T485;}
	base[4]= (V109);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk83)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T477;
	goto T485;
T485:;
	base[3]= (V118);}
	goto T477;
T477:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk117)(Lclptr117);
	return;}}
	}
}
/*	function definition for (FAST-METHOD METHOD-QUALIFIERS (TRACED-METHOD))	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{register object V120;
	object V121;
	register object V122;
	check_arg(3);
	V120=(base[0]);
	V121=(base[1]);
	V122=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V124;
	object V125;
	V124= CMPcar((V120));
	V125= CMPcdr((V120));
	{object V126;
	if(type_of(V122)==t_structure){
	goto T498;}
	goto T496;
	goto T498;
T498:;
	if(!(((V122)->str.str_def)==(VV[76]))){
	goto T496;}
	V126= STREF(object,(V122),4);
	goto T494;
	goto T496;
T496:;{object V128;
	V128= (VV[19]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V122);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	V129= vs_base[0];
	if(!((V128)==(CMPcar(V129)))){
	goto T501;}}
	V126= CMPcar(((V122))->cc.cc_turbo[12]);
	goto T494;
	goto T501;
T501:;
	V126= Cnil;
	goto T494;
T494:;
	{register object V131;
	V131= ((V124))->v.v_self[1];
	if(!(type_of(V131)==t_fixnum)){
	goto T512;}
	V131= ((V126))->v.v_self[fix((V131))];
	goto T510;
	goto T512;
T512:;
	V131= VV[71];
	goto T510;
T510:;
	if(!(((V131))==(VV[71]))){
	goto T515;}
	base[4]= (V122);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk83)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T507;
	goto T515;
T515:;
	base[3]= (V131);}
	goto T507;
T507:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk100)(Lclptr100);
	return;}}
	}
}
/*	function definition for (FAST-METHOD ACCESSOR-METHOD-SLOT-NAME (TRACED-METHOD))	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{register object V133;
	object V134;
	register object V135;
	check_arg(3);
	V133=(base[0]);
	V134=(base[1]);
	V135=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V137;
	object V138;
	V137= CMPcar((V133));
	V138= CMPcdr((V133));
	{object V139;
	if(type_of(V135)==t_structure){
	goto T528;}
	goto T526;
	goto T528;
T528:;
	if(!(((V135)->str.str_def)==(VV[78]))){
	goto T526;}
	V139= STREF(object,(V135),4);
	goto T524;
	goto T526;
T526:;{object V141;
	V141= (VV[19]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V135);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	V142= vs_base[0];
	if(!((V141)==(CMPcar(V142)))){
	goto T531;}}
	V139= CMPcar(((V135))->cc.cc_turbo[12]);
	goto T524;
	goto T531;
T531:;
	V139= Cnil;
	goto T524;
T524:;
	{register object V144;
	V144= ((V137))->v.v_self[1];
	if(!(type_of(V144)==t_fixnum)){
	goto T542;}
	V144= ((V139))->v.v_self[fix((V144))];
	goto T540;
	goto T542;
T542:;
	V144= VV[71];
	goto T540;
T540:;
	if(!(((V144))==(VV[71]))){
	goto T545;}
	base[4]= (V135);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk83)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T537;
	goto T545;
T545:;
	base[3]= (V144);}
	goto T537;
T537:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk118)(Lclptr118);
	return;}}
	}
}
/*	local entry for function TRACE-METHOD	*/

static object LI22(object V146,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB14 VMS14 VMV14
	{object V147;
	object V148;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V147= V146;
	narg= narg - 1;
	V149 = list_vector_new(narg,first,ap);
	V148= V149;
	{object V150;
	object V151;
	object V152;
	base[0]= (V147);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk119)();
	if(vs_base>=vs_top){vs_top=sup;goto T550;}
	V150= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T551;}
	V151= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T552;}
	V152= vs_base[0];
	vs_top=sup;
	goto T553;
	goto T550;
T550:;
	V150= Cnil;
	goto T551;
T551:;
	V151= Cnil;
	goto T552;
T552:;
	V152= Cnil;
	goto T553;
T553:;
	{object V153;
	object V154;
	base[2]= (V151);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk103)(Lclptr103);
	vs_top=sup;
	V155= vs_base[0];
	V153= (*(LnkLI120))(V155,(V152),(V148));
	base[2]= VV[53];
	base[3]= VV[79];
	base[4]= (V151);
	base[5]= VV[80];
	base[6]= (V153);
	vs_top=(vs_base=base+2)+5;
	(void) (*Lnk121)(Lclptr121);
	vs_top=sup;
	V154= vs_base[0];
	base[2]= (V150);
	base[3]= (V151);
	(void)simple_symlispcall(VV[122],base+2,2);
	base[2]= (V150);
	base[3]= (V154);
	(void)simple_symlispcall(VV[123],base+2,2);
	base[2]= V154;
	base[3]= (VV[81]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Ladjoin();
	vs_top=sup;
	(VV[81]->s.s_dbind)= vs_base[0];
	{object V157 = (V154);
	VMR14(V157)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for UNTRACE-METHOD	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	{register object V158;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T573;}
	V158=(base[0]);
	vs_top=sup;
	goto T574;
	goto T573;
T573:;
	V158= Cnil;
	goto T574;
T574:;
	if(((V158))==Cnil){
	goto T577;}
	{object V159;
	object V160;
	base[1]= (V158);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk119)();
	if(vs_base>=vs_top){vs_top=sup;goto T581;}
	V159= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T582;}
	V160= vs_base[0];
	vs_top=sup;
	goto T583;
	goto T581;
T581:;
	V159= Cnil;
	goto T582;
T582:;
	V160= Cnil;
	goto T583;
T583:;
	{register object x= (V160),V161= (VV[81]->s.s_dbind);
	while(V161!=Cnil)
	if(x==(V161->c.c_car)){
	goto T586;
	}else V161=V161->c.c_cdr;
	goto T585;}
	goto T586;
T586:;
	base[1]= (V160);
	vs_top=(vs_base=base+1)+1;
	L24(base);
	return;
	goto T585;
T585:;
	base[1]= VV[82];
	base[2]= (V160);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;}
	goto T577;
T577:;
	{register object V162;
	register object V163;
	V162= (VV[81]->s.s_dbind);
	V163= CMPcar((V162));
	goto T593;
T593:;
	if(!(((V162))==Cnil)){
	goto T594;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T594;
T594:;
	base[2]= (V163);
	vs_top=(vs_base=base+2)+1;
	L24(base);
	vs_top=sup;
	V162= CMPcdr((V162));
	V163= CMPcar((V162));
	goto T593;}
	}
}
/*	local entry for function TRACE-METHOD-INTERNAL	*/

static object LI25(V167,V168,V169)

object V167;register object V168;object V169;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	base[0]= list(2,VV[84],(V168));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	base[0]= (V168);
	base[1]= (V167);
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	base[0]= listA(3,VV[85],(V168),(V169));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	base[0]= (V168);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	{object V170 = vs_base[0];
	VMR16(V170)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for UNDEFMETHOD	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V171=base[0]->c.c_cdr;
	base[2]= V171;}
	base[3]= list(2,VV[86],list(2,VV[87],base[2]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function UNDEFMETHOD-1	*/

static object LI27(V173)

object V173;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V174;
	object V175;
	base[0]= (V173);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk119)();
	if(vs_base>=vs_top){vs_top=sup;goto T615;}
	V174= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T616;}
	V175= vs_base[0];
	vs_top=sup;
	goto T617;
	goto T615;
T615:;
	V174= Cnil;
	goto T616;
T616:;
	V175= Cnil;
	goto T617;
T617:;
	if(((V174))==Cnil){
	goto T619;}
	if(((V175))==Cnil){
	goto T619;}
	base[0]= (V174);
	base[1]= (V175);
	(void)simple_symlispcall(VV[122],base+0,2);
	{object V176 = (V175);
	VMR18(V176)}
	goto T619;
T619:;
	{object V177 = Cnil;
	VMR18(V177)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function UNTRACE-1	*/

static void L24(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{register object V178;
	check_arg(1);
	V178=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V179;
	base[1]= (V178);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk124)(Lclptr124);
	vs_top=sup;
	V179= vs_base[0];
	if(((V179))==Cnil){
	goto T629;}
	base[1]= (V179);
	base[2]= (V178);
	(void)simple_symlispcall(VV[122],base+1,2);
	base[1]=(VV[123]->s.s_gfdef);
	base[2]= (V179);
	if(!((VV[83])->s.s_gfdef!=OBJNULL)){
	goto T638;}
	base[4]= (V178);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk83)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T636;
	goto T638;
T638:;
	base[3]= (*(LnkLI126))(VV[83],VV[56]);
	goto T636;
T636:;
	(void)simple_lispcall(base+1,2);
	base[1]= (V178);
	base[2]= (VV[81]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk127)();
	vs_top=sup;
	(VV[81]->s.s_dbind)= vs_base[0];
	base[1]= (VV[81]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T629;
T629:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function PRETTY-CLASS	*/

static void L15(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{object V180;
	check_arg(1);
	V180=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V181;
	base[1]= (V180);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;
	V181= vs_base[0];
	if(V181==Cnil)goto T644;
	base[1]= V181;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T644;
T644:;}
	base[1]= (V180);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CALL-NEXT-METHOD	*/

static void L14(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{object V182;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V182=(base[0]);
	vs_top=sup;
	if((base0[1])==Cnil){
	goto T648;}
	if(((V182))==Cnil){
	goto T651;}
	{register object V183;
	register object V184;
	object V185;
	V183= (V182);
	{object V186;
	V186= CMPcar((V183));
	V183= CMPcdr((V183));
	V184= (V186);}
	{object V187;
	V187= CMPcar((V183));
	V183= CMPcdr((V183));
	V185= (V187);}
	base[3]= base0[1];
	base[4]= VV[16];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T664;}
	base[3]= STREF(object,base0[1],0);
	base[4]= STREF(object,base0[1],4);
	base[5]= STREF(object,base0[1],8);
	base[6]= (V184);
	base[7]= (V185);
	vs_top=(vs_base=base+4)+4;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T664;
T664:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T674;}
	{object V189;
	if(type_of(V184)==t_structure){
	goto T680;}
	goto T678;
	goto T680;
T680:;
	if(!(((V184)->str.str_def)==(VV[38]))){
	goto T678;}
	V189= STREF(object,(V184),4);
	goto T676;
	goto T678;
T678:;{object V191;
	V191= (VV[19]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V184);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	V192= vs_base[0];
	if(!((V191)==(CMPcar(V192)))){
	goto T683;}}
	V189= CMPcar(((V184))->cc.cc_turbo[12]);
	goto T676;
	goto T683;
T683:;
	V189= Cnil;
	goto T676;
T676:;
	if(((V189))==Cnil){
	goto T689;}
	base[3]= ((V189))->v.v_self[fix(base0[1])]= (V184);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T689;
T689:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T674;
T674:;
	{register object V194;
	V194= base0[1];
	base[3]= (V194);
	base[4]= VV[20];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T692;}
	{object V195;
	object V196;
	register object V197;
	V195= STREF(object,base0[1],0);
	V196= list(2,(V184),(V185));
	V197= STREF(object,base0[1],4);
	if(((V197))==Cnil){
	goto T700;}
	if((CMPcdr((V197)))!=Cnil){
	goto T700;}
	base[3]= (V196);
	base[4]= CMPcar((V197));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V195);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T700;
T700:;
	base[3]= (V195);
	base[4]= (V196);
	{object V198;
	V198= (V197);
	 vs_top=base+5;
	 while(V198!=Cnil)
	 {vs_push((V198)->c.c_car);V198=(V198)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T692;
T692:;
	base[3]= (V194);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T710;}
	base[3]= (V184);
	base[4]= (V185);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T710;
T710:;
	base[3]= VV[21];
	base[4]= VV[22];
	base[5]= VV[23];
	base[6]= VV[24];
	base[7]= base0[1];
	base[8]= VV[25];
	base[9]= VV[39];
	base[10]= VV[27];
	base[11]= VV[40];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk129)();
	return;}}
	goto T651;
T651:;
	base[1]= base0[1];
	base[2]= VV[16];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T726;}
	base[1]= STREF(object,base0[1],0);
	base[2]= STREF(object,base0[1],4);
	base[3]= STREF(object,base0[1],8);
	base[4]= base0[2];
	base[5]= base0[3];
	vs_top=(vs_base=base+2)+4;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T726;
T726:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T736;}
	{object V200;
	if(type_of(base0[2])==t_structure){
	goto T742;}
	goto T740;
	goto T742;
T742:;
	if(!(((base0[2])->str.str_def)==(VV[41]))){
	goto T740;}
	V200= STREF(object,base0[2],4);
	goto T738;
	goto T740;
T740:;{object V202;
	V202= (VV[19]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= base0[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	V203= vs_base[0];
	if(!((V202)==(CMPcar(V203)))){
	goto T745;}}
	V200= CMPcar((base0[2])->cc.cc_turbo[12]);
	goto T738;
	goto T745;
T745:;
	V200= Cnil;
	goto T738;
T738:;
	if(((V200))==Cnil){
	goto T751;}
	base[1]= ((V200))->v.v_self[fix(base0[1])]= (base0[2]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T751;
T751:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T736;
T736:;
	{register object V205;
	V205= base0[1];
	base[1]= (V205);
	base[2]= VV[20];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T754;}
	{object V206;
	object V207;
	register object V208;
	V206= STREF(object,base0[1],0);
	V207= list(2,base0[2],base0[3]);
	V208= STREF(object,base0[1],4);
	if(((V208))==Cnil){
	goto T762;}
	if((CMPcdr((V208)))!=Cnil){
	goto T762;}
	base[1]= (V207);
	base[2]= CMPcar((V208));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V206);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T762;
T762:;
	base[1]= (V206);
	base[2]= (V207);
	{object V209;
	V209= (V208);
	 vs_top=base+3;
	 while(V209!=Cnil)
	 {vs_push((V209)->c.c_car);V209=(V209)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T754;
T754:;
	base[1]= (V205);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T772;}
	base[1]= base0[2];
	base[2]= base0[3];
	vs_top=(vs_base=base+1)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T772;
T772:;
	base[1]= VV[21];
	base[2]= VV[22];
	base[3]= VV[23];
	base[4]= VV[24];
	base[5]= base0[1];
	base[6]= VV[25];
	base[7]= VV[42];
	base[8]= VV[27];
	base[9]= VV[43];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk129)();
	return;}
	goto T648;
T648:;
	base[1]= VV[44];
	base[2]= base0[2];
	base[3]= base0[3];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk130)();
	return;
	}
}
/*	local function CALL-NEXT-METHOD	*/

static void L11(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	{object V210;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V210=(base[0]);
	vs_top=sup;
	if((base0[1])==Cnil){
	goto T790;}
	if(((V210))==Cnil){
	goto T793;}
	{object V211;
	register object V212;
	object V213;
	V211= (V210);
	{object V214;
	V214= CMPcar((V211));
	V211= CMPcdr((V211));
	V212= (V214);}
	{object V215;
	V215= CMPcar((V211));
	V211= CMPcdr((V211));
	V213= (V215);}
	base[3]= base0[1];
	base[4]= VV[16];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T806;}
	base[3]= STREF(object,base0[1],0);
	base[4]= STREF(object,base0[1],4);
	base[5]= STREF(object,base0[1],8);
	base[6]= (V212);
	base[7]= (V213);
	vs_top=(vs_base=base+4)+4;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T806;
T806:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T816;}
	{object V217;
	if(type_of(V212)==t_structure){
	goto T822;}
	goto T820;
	goto T822;
T822:;
	if(!(((V212)->str.str_def)==(VV[17]))){
	goto T820;}
	V217= STREF(object,(V212),4);
	goto T818;
	goto T820;
T820:;{object V219;
	V219= (VV[19]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V212);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	V220= vs_base[0];
	if(!((V219)==(CMPcar(V220)))){
	goto T825;}}
	V217= CMPcar(((V212))->cc.cc_turbo[12]);
	goto T818;
	goto T825;
T825:;
	V217= Cnil;
	goto T818;
T818:;
	if(((V217))==Cnil){
	goto T831;}
	base[3]= ((V217))->v.v_self[fix(base0[1])]= (V212);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T831;
T831:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T816;
T816:;
	base[3]= base0[1];
	base[4]= VV[20];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T834;}
	{object V223;
	object V224;
	object V225;
	V223= STREF(object,base0[1],0);
	V224= list(2,(V212),(V213));
	V225= STREF(object,base0[1],4);
	if(((V225))==Cnil){
	goto T842;}
	if((CMPcdr((V225)))!=Cnil){
	goto T842;}
	base[3]= (V224);
	base[4]= CMPcar((V225));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V223);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T842;
T842:;
	base[3]= (V223);
	base[4]= (V224);
	{object V226;
	V226= (V225);
	 vs_top=base+5;
	 while(V226!=Cnil)
	 {vs_push((V226)->c.c_car);V226=(V226)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T834;
T834:;
	base[3]= base0[1];
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T852;}
	base[3]= (V212);
	base[4]= (V213);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T852;
T852:;
	base[3]= VV[21];
	base[4]= VV[22];
	base[5]= VV[23];
	base[6]= VV[24];
	base[7]= base0[1];
	base[8]= VV[25];
	base[9]= VV[26];
	base[10]= VV[27];
	base[11]= VV[28];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk129)();
	return;}
	goto T793;
T793:;
	base[1]= base0[1];
	base[2]= VV[16];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T868;}
	base[1]= STREF(object,base0[1],0);
	base[2]= STREF(object,base0[1],4);
	base[3]= STREF(object,base0[1],8);
	base[4]= base0[2];
	base[5]= base0[3];
	vs_top=(vs_base=base+2)+4;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T868;
T868:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T878;}
	{object V228;
	if(type_of(base0[2])==t_structure){
	goto T884;}
	goto T882;
	goto T884;
T884:;
	if(!(((base0[2])->str.str_def)==(VV[29]))){
	goto T882;}
	V228= STREF(object,base0[2],4);
	goto T880;
	goto T882;
T882:;{object V230;
	V230= (VV[19]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= base0[2];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk114)();
	vs_top=sup;
	V231= vs_base[0];
	if(!((V230)==(CMPcar(V231)))){
	goto T887;}}
	V228= CMPcar((base0[2])->cc.cc_turbo[12]);
	goto T880;
	goto T887;
T887:;
	V228= Cnil;
	goto T880;
T880:;
	if(((V228))==Cnil){
	goto T893;}
	base[1]= ((V228))->v.v_self[fix(base0[1])]= (base0[2]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T893;
T893:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T878;
T878:;
	base[1]= base0[1];
	base[2]= VV[20];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk128)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T896;}
	{object V234;
	object V235;
	object V236;
	V234= STREF(object,base0[1],0);
	V235= list(2,base0[2],base0[3]);
	V236= STREF(object,base0[1],4);
	if(((V236))==Cnil){
	goto T904;}
	if((CMPcdr((V236)))!=Cnil){
	goto T904;}
	base[1]= (V235);
	base[2]= CMPcar((V236));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V234);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T904;
T904:;
	base[1]= (V234);
	base[2]= (V235);
	{object V237;
	V237= (V236);
	 vs_top=base+3;
	 while(V237!=Cnil)
	 {vs_push((V237)->c.c_car);V237=(V237)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T896;
T896:;
	base[1]= base0[1];
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T914;}
	base[1]= base0[2];
	base[2]= base0[3];
	vs_top=(vs_base=base+1)+2;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T914;
T914:;
	base[1]= VV[21];
	base[2]= VV[22];
	base[3]= VV[23];
	base[4]= VV[24];
	base[5]= base0[1];
	base[6]= VV[25];
	base[7]= VV[30];
	base[8]= VV[27];
	base[9]= VV[31];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk129)();
	return;
	goto T790;
T790:;
	base[1]= VV[32];
	base[2]= base0[2];
	base[3]= base0[3];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk130)();
	return;
	}
}
/*	local function DESCRIBE-SLOT	*/

static void L8(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V238;
	object V239;
	object V240;
	object V241;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V238=(base[0]);
	V239=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T931;}
	V240=(base[2]);
	V241= Ct;
	vs_top=sup;
	goto T932;
	goto T931;
T931:;
	V240= Cnil;
	V241= Cnil;
	goto T932;
T932:;
	if(((V241))==Cnil){
	goto T935;}
	base[4]= base0[3];
	base[5]= VV[9];
	base[6]= (V238);
	base[7]= (V240);
	base[8]= number_plus(base0[6],small_fixnum(7));
	base[9]= (V239);
	vs_top=(vs_base=base+4)+6;
	Lformat();
	return;
	goto T935;
T935:;
	base[4]= base0[3];
	base[5]= VV[10];
	base[6]= (V238);
	base[7]= base0[6];
	base[8]= (V239);
	vs_top=(vs_base=base+4)+5;
	Lformat();
	return;
	}
}
/*	local function ADJUST-SLOT-NAME-LENGTH	*/

static void L7(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V242;
	check_arg(1);
	V242=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V243= symbol_name((V242));
	V244 = CMPmake_fixnum((long)(/* INLINE-ARGS */V243)->v.v_fillp);
	base0[6]= (number_compare(base0[6],V244)>=0?(base0[6]):V244);}
	base[1]= base0[6];
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT130(){ call_or_link(VV[130],(void **)(void *)&Lnk130);} /* CALL-NO-NEXT-METHOD */
static void LnkT129(){ call_or_link(VV[129],(void **)(void *)&Lnk129);} /* ERROR */
static void LnkT128(){ call_or_link(VV[128],(void **)(void *)&Lnk128);} /* STRUCTURE-SUBTYPE-P */
static void LnkT127(){ call_or_link(VV[127],(void **)(void *)&Lnk127);} /* REMOVE */
static object  LnkTLI126(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[126],(void **)(void *)&LnkLI126,2,first,ap);va_end(ap);return V1;} /* NO-SLOT */
static object  LnkTLI125(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[125],(void **)(void *)&LnkLI125,1,first,ap);va_end(ap);return V1;} /* %FBOUNDP */
static void LnkT124(ptr) object *ptr;{ call_or_link_closure(VV[124],(void **)(void *)&Lnk124,(void **)(void *)&Lclptr124);} /* METHOD-GENERIC-FUNCTION */
static void LnkT121(ptr) object *ptr;{ call_or_link_closure(VV[121],(void **)(void *)&Lnk121,(void **)(void *)&Lclptr121);} /* MAKE-INSTANCE */
static object  LnkTLI120(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[120],(void **)(void *)&LnkLI120,3,first,ap);va_end(ap);return V1;} /* TRACE-METHOD-INTERNAL */
static void LnkT119(){ call_or_link(VV[119],(void **)(void *)&Lnk119);} /* PARSE-METHOD-OR-SPEC */
static void LnkT118(ptr) object *ptr;{ call_or_link_closure(VV[118],(void **)(void *)&Lnk118,(void **)(void *)&Lclptr118);} /* ACCESSOR-METHOD-SLOT-NAME */
static void LnkT117(ptr) object *ptr;{ call_or_link_closure(VV[117],(void **)(void *)&Lnk117,(void **)(void *)&Lclptr117);} /* METHOD-SPECIALIZERS */
static void LnkT116(ptr) object *ptr;{ call_or_link_closure(VV[116],(void **)(void *)&Lnk116,(void **)(void *)&Lclptr116);} /* METHOD-LAMBDA-LIST */
static void LnkT83(){ call_or_link(VV[83],(void **)(void *)&Lnk83);} /* LISP METHOD slot READER */
static object  LnkTLI115(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[115],(void **)(void *)&LnkLI115,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT114(){ call_or_link(VV[114],(void **)(void *)&Lnk114);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT111(){ call_or_link(VV[111],(void **)(void *)&Lnk111);} /* PACKAGE-SIZE */
static void LnkT110(){ call_or_link(VV[110],(void **)(void *)&Lnk110);} /* SPECIFIC-ERROR */
static void LnkT109(ptr) object *ptr;{ call_or_link_closure(VV[109],(void **)(void *)&Lnk109,(void **)(void *)&Lclptr109);} /* SPECIALIZER-DIRECT-METHODS */
static void LnkT108(ptr) object *ptr;{ call_or_link_closure(VV[108],(void **)(void *)&Lnk108,(void **)(void *)&Lclptr108);} /* CLASS-PRECEDENCE-LIST */
static void LnkT107(ptr) object *ptr;{ call_or_link_closure(VV[107],(void **)(void *)&Lnk107,(void **)(void *)&Lclptr107);} /* CLASS-DIRECT-SUBCLASSES */
static void LnkT106(ptr) object *ptr;{ call_or_link_closure(VV[106],(void **)(void *)&Lnk106,(void **)(void *)&Lclptr106);} /* CLASS-DIRECT-SUPERCLASSES */
static object  LnkTLI105(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[105],(void **)(void *)&LnkLI105,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT104(ptr) object *ptr;{ call_or_link_closure(VV[104],(void **)(void *)&Lnk104,(void **)(void *)&Lclptr104);} /* CLASS-NAME */
static void LnkT103(ptr) object *ptr;{ call_or_link_closure(VV[103],(void **)(void *)&Lnk103,(void **)(void *)&Lclptr103);} /* METHOD-FUNCTION */
static void LnkT102(ptr) object *ptr;{ call_or_link_closure(VV[102],(void **)(void *)&Lnk102,(void **)(void *)&Lclptr102);} /* METHOD-FAST-FUNCTION */
static object  LnkTLI101(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[101],(void **)(void *)&LnkLI101,1,first,ap);va_end(ap);return V1;} /* UNPARSE-SPECIALIZERS */
static void LnkT100(ptr) object *ptr;{ call_or_link_closure(VV[100],(void **)(void *)&Lnk100,(void **)(void *)&Lclptr100);} /* METHOD-QUALIFIERS */
static void LnkT99(ptr) object *ptr;{ call_or_link_closure(VV[99],(void **)(void *)&Lnk99,(void **)(void *)&Lclptr99);} /* GENERIC-FUNCTION-METHODS */
static void LnkT98(ptr) object *ptr;{ call_or_link_closure(VV[98],(void **)(void *)&Lnk98,(void **)(void *)&Lclptr98);} /* GENERIC-FUNCTION-PRETTY-ARGLIST */
static void LnkT97(ptr) object *ptr;{ call_or_link_closure(VV[97],(void **)(void *)&Lnk97,(void **)(void *)&Lclptr97);} /* CLASS-SLOTS */
static void LnkT96(){ call_or_link(VV[96],(void **)(void *)&Lnk96);} /* SLOT-VALUE-OR-DEFAULT */
static void LnkT93(ptr) object *ptr;{ call_or_link_closure(VV[93],(void **)(void *)&Lnk93,(void **)(void *)&Lclptr93);} /* SLOT-DEFINITION-ALLOCATION */
static void LnkT92(ptr) object *ptr;{ call_or_link_closure(VV[92],(void **)(void *)&Lnk92,(void **)(void *)&Lclptr92);} /* SLOT-DEFINITION-NAME */
static void LnkT91(ptr) object *ptr;{ call_or_link_closure(VV[91],(void **)(void *)&Lnk91,(void **)(void *)&Lclptr91);} /* SLOTS-TO-INSPECT */
static object  LnkTLI90(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[90],(void **)(void *)&LnkLI90,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI89(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[89],(void **)(void *)&LnkLI89,2,first,ap);va_end(ap);return V1;} /* DESCRIBE-PACKAGE */
static void LnkT0(ptr) object *ptr;{ call_or_link_closure(VV[0],(void **)(void *)&Lnk0,(void **)(void *)&Lclptr0);} /* DESCRIBE-OBJECT */
static void LnkT88(){ call_or_link(VV[88],(void **)(void *)&Lnk88);} /* LOAD-DEFGENERIC */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

