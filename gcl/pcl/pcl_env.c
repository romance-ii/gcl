
#include "cmpinclude.h"
#include "pcl_env.h"
void init_pcl_env(){do_init(VV);}
/*	function definition for (DEFGENERIC DESCRIBE-OBJECT)9136	*/

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
	(void) (*Lnk71)();
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
	object V4;
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
	goto T10;}
	base[4]= (*(LnkLI72))((V4),(V5));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T10;
T10:;
	{object V7 =(VV[3])->s.s_plist;
	 object ind= VV[4];
	while(V7!=Cnil){
	if(V7->c.c_car==ind){
	base[4]= (V7->c.c_cdr->c.c_car);
	goto T13;
	}else V7=V7->c.c_cdr->c.c_cdr;}
	base[4]= Cnil;}
	goto T13;
T13:;
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
	object V10;
	check_arg(4);
	V8=(base[0]);
	V9=(base[1]);
	V10=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V12;
	object V13;
	object V14;
	object V15;
	object V16;
	V12= (*(LnkLI73))((V10));
	base[7]= (V12);
	base[8]= (V10);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk74)(Lclptr74);
	vs_top=sup;
	V13= vs_base[0];
	base[6]= small_fixnum(0);
	V14= Cnil;
	V15= Cnil;
	V16= Cnil;
	{register object V17;
	register object V18;
	V17= (V13);
	V18= CMPcar((V17));
	goto T29;
T29:;
	if(!(((V17))==Cnil)){
	goto T30;}
	goto T25;
	goto T30;
T30:;
	base[9]= (V18);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk75)(Lclptr75);
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+8)+1;
	L5(base);
	vs_top=sup;
	base[8]= (V18);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk76)(Lclptr76);
	vs_top=sup;
	V20= vs_base[0];
	{object V19= V20;
	if((V19!= VV[77]))goto T40;
	V14= make_cons(V18,(V14));
	goto T37;
	goto T40;
T40:;
	if((V19!= VV[78]))goto T42;
	V15= make_cons(V18,(V15));
	goto T37;
	goto T42;
T42:;
	V16= make_cons(V18,(V16));}
	goto T37;
T37:;
	V17= CMPcdr((V17));
	V18= CMPcar((V17));
	goto T29;}
	goto T25;
T25:;
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
	goto T57;}
	base[7]= base[3];
	base[8]= VV[6];
	vs_top=(vs_base=base+7)+2;
	Lformat();
	vs_top=sup;
	{register object V25;
	object V26;
	V25= nreverse((V14));
	V26= CMPcar((V25));
	goto T66;
T66:;
	if(!(((V25))==Cnil)){
	goto T67;}
	goto T57;
	goto T67;
T67:;
	base[10]= (V26);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk75)(Lclptr75);
	vs_top=sup;
	base[9]= vs_base[0];
	base[11]= (V10);
	base[13]= (V26);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk75)(Lclptr75);
	vs_top=sup;
	base[12]= vs_base[0];
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk79)();
	vs_top=sup;
	base[10]= vs_base[0];
	vs_top=(vs_base=base+9)+2;
	L6(base);
	vs_top=sup;
	V25= CMPcdr((V25));
	V26= CMPcar((V25));
	goto T66;}
	goto T57;
T57:;
	if(((V15))==Cnil){
	goto T83;}
	base[7]= base[3];
	base[8]= VV[7];
	vs_top=(vs_base=base+7)+2;
	Lformat();
	vs_top=sup;
	{register object V27;
	object V28;
	V27= nreverse((V15));
	V28= CMPcar((V27));
	goto T92;
T92:;
	if(!(((V27))==Cnil)){
	goto T93;}
	goto T83;
	goto T93;
T93:;
	base[10]= (V28);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk75)(Lclptr75);
	vs_top=sup;
	base[9]= vs_base[0];
	base[11]= (V10);
	base[13]= (V28);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk75)(Lclptr75);
	vs_top=sup;
	base[12]= vs_base[0];
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk79)();
	vs_top=sup;
	base[10]= vs_base[0];
	vs_top=(vs_base=base+9)+2;
	L6(base);
	vs_top=sup;
	V27= CMPcdr((V27));
	V28= CMPcar((V27));
	goto T92;}
	goto T83;
T83:;
	if(((V16))==Cnil){
	goto T109;}
	base[7]= base[3];
	base[8]= VV[8];
	vs_top=(vs_base=base+7)+2;
	Lformat();
	vs_top=sup;
	{register object V29;
	register object V30;
	V29= nreverse((V16));
	V30= CMPcar((V29));
	goto T118;
T118:;
	if(!(((V29))==Cnil)){
	goto T119;}
	goto T109;
	goto T119;
T119:;
	base[10]= (V30);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk75)(Lclptr75);
	vs_top=sup;
	base[9]= vs_base[0];
	base[11]= (V10);
	base[13]= (V30);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk75)(Lclptr75);
	vs_top=sup;
	base[12]= vs_base[0];
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk79)();
	vs_top=sup;
	base[10]= vs_base[0];
	base[12]= (V30);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk76)(Lclptr76);
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+9)+3;
	L6(base);
	vs_top=sup;
	V29= CMPcdr((V29));
	V30= CMPcar((V29));
	goto T118;}
	goto T109;
T109:;
	vs_base=vs_top=base+7;
	vs_base[0]=Cnil;
	return;}
	}
}
/*	function definition for (FAST-METHOD SLOTS-TO-INSPECT (SLOT-CLASS SLOT-OBJECT))	*/

static void L7()
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
	(void) (*Lnk80)(Lclptr80);
	return;
	}
}
/*	function definition for (FAST-METHOD DESCRIBE-OBJECT (STANDARD-GENERIC-FUNCTION T))	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V36;
	register object V37;
	register object V38;
	register object V39;
	check_arg(4);
	V36=(base[0]);
	V37=(base[1]);
	V38=(base[2]);
	V39=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V39);
	base[5]= VV[11];
	base[6]= (V38);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[4]= (V39);
	base[5]= VV[12];
	base[7]= (V38);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk81)(Lclptr81);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[4]= (V39);
	base[5]= VV[13];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;
	{register object V41;
	register object V42;
	base[6]= (V38);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk82)(Lclptr82);
	vs_top=sup;
	V41= vs_base[0];
	V42= CMPcar((V41));
	goto T162;
T162:;
	if(!(((V41))==Cnil)){
	goto T163;}
	goto T157;
	goto T163;
T163:;
	base[6]= (V39);
	base[7]= VV[14];
	base[9]= (V42);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk83)(Lclptr83);
	vs_top=sup;
	base[8]= vs_base[0];
	base[9]= (*(LnkLI84))((V42));
	vs_top=(vs_base=base+6)+4;
	Lformat();
	vs_top=sup;{object V43;
	base[7]= (V42);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk85)(Lclptr85);
	vs_top=sup;
	V43= vs_base[0];
	if(V43==Cnil)goto T175;
	base[6]= V43;
	goto T174;
	goto T175;
T175:;}
	base[7]= (V42);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk86)(Lclptr86);
	vs_top=sup;
	base[6]= vs_base[0];
	goto T174;
T174:;
	base[7]= (V39);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk0)(Lclptr0);
	vs_top=sup;
	V41= CMPcdr((V41));
	V42= CMPcar((V41));
	goto T162;}
	goto T157;
T157:;
	if(((VV[15]->s.s_dbind))==Cnil){
	goto T186;}
	if(((V37))==Cnil){
	goto T189;}
	base[4]= (V37);
	base[5]= VV[16];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk87)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T193;}
	base[4]= STREF(object,(V37),0);
	base[5]= STREF(object,(V37),4);
	base[6]= STREF(object,(V37),8);
	base[7]= (V38);
	base[8]= (V39);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T193;
T193:;
	if(!(type_of((V37))==t_fixnum)){
	goto T203;}
	{object V45;
	if(type_of(V38)==t_structure){
	goto T209;}
	goto T207;
	goto T209;
T209:;
	if(!(((V38)->str.str_def)==(VV[17]))){
	goto T207;}
	V45= STREF(object,(V38),4);
	goto T205;
	goto T207;
T207:;{object V47;
	V47= (VV[19]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V38);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk88)();
	vs_top=sup;
	V48= vs_base[0];
	if(!((V47)==(CMPcar(V48)))){
	goto T212;}}
	V45= CMPcar(((V38))->cc.cc_turbo[12]);
	goto T205;
	goto T212;
T212:;
	V45= Cnil;
	goto T205;
T205:;
	if(((V45))==Cnil){
	goto T218;}
	base[4]= ((V45))->v.v_self[fix((V37))]= (V38);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T218;
T218:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T203;
T203:;
	{register object V49;
	V49= (V37);
	base[4]= (V49);
	base[5]= VV[20];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk87)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T221;}
	{object V50;
	object V51;
	object V52;
	V50= STREF(object,(V37),0);
	V51= list(2,(V38),(V39));
	V52= STREF(object,(V37),4);
	if(((V52))==Cnil){
	goto T229;}
	if((CMPcdr((V52)))!=Cnil){
	goto T229;}
	base[4]= (V51);
	base[5]= CMPcar((V52));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V50);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T229;
T229:;
	base[4]= (V50);
	base[5]= (V51);
	{object V53;
	V53= (V52);
	 vs_top=base+6;
	 while(V53!=Cnil)
	 {vs_push((V53)->c.c_car);V53=(V53)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T221;
T221:;
	base[4]= (V49);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T239;}
	base[4]= (V38);
	base[5]= (V39);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V37);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T239;
T239:;
	base[5]= VV[21];
	base[6]= (V49);
	base[7]= VV[22];
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk90)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	return;}
	goto T189;
T189:;
	base[4]= VV[23];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	return;
	goto T186;
T186:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	function definition for (FAST-METHOD DESCRIBE-OBJECT (CLASS T))	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{object V54;
	register object V55;
	register object V56;
	register object V57;
	check_arg(4);
	V54=(base[0]);
	V55=(base[1]);
	V56=(base[2]);
	V57=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V57);
	base[5]= VV[24];
	base[6]= (V56);
	base[8]= (*(LnkLI73))((V56));
	vs_top=(vs_base=base+8)+1;
	L10(base);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+4)+4;
	Lformat();
	vs_top=sup;
	{register object V59;
	base[4]= (V56);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk91)(Lclptr91);
	vs_top=sup;
	V59= vs_base[0];
	if(((V59))==Cnil){
	goto T263;}
	V60= (VFUN_NARGS=2,(*(LnkLI92))((V59),Cnil));
	if(!(((V56))==(/* INLINE-ARGS */V60))){
	goto T266;}
	base[4]= (V57);
	base[5]= VV[25];
	base[6]= (V59);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T259;
	goto T266;
T266:;
	base[4]= (V57);
	base[5]= VV[26];
	base[6]= (V59);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	goto T259;
	goto T263;
T263:;
	base[4]= (V57);
	base[5]= VV[27];
	vs_top=(vs_base=base+4)+2;
	Lformat();
	vs_top=sup;}
	goto T259;
T259:;
	base[4]= (V57);
	base[5]= VV[28];
	base[8]= (V56);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk93)(Lclptr93);
	vs_top=sup;
	V63= vs_base[0];
	{object V61;
	object V62= V63;
	if(V62==Cnil){
	base[6]= Cnil;
	goto T278;}
	base[7]=V61=MMcons(Cnil,Cnil);
	goto T279;
T279:;
	base[8]= (V62->c.c_car);
	vs_top=(vs_base=base+8)+1;
	L10(base);
	vs_top=sup;
	(V61->c.c_car)= vs_base[0];
	if((V62=MMcdr(V62))==Cnil){
	base[6]= base[7];
	goto T278;}
	V61=MMcdr(V61)=MMcons(Cnil,Cnil);
	goto T279;}
	goto T278;
T278:;
	base[9]= (V56);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk94)(Lclptr94);
	vs_top=sup;
	V66= vs_base[0];
	{object V64;
	object V65= V66;
	if(V65==Cnil){
	base[7]= Cnil;
	goto T284;}
	base[8]=V64=MMcons(Cnil,Cnil);
	goto T285;
T285:;
	base[9]= (V65->c.c_car);
	vs_top=(vs_base=base+9)+1;
	L10(base);
	vs_top=sup;
	(V64->c.c_car)= vs_base[0];
	if((V65=MMcdr(V65))==Cnil){
	base[7]= base[8];
	goto T284;}
	V64=MMcdr(V64)=MMcons(Cnil,Cnil);
	goto T285;}
	goto T284;
T284:;
	base[10]= (V56);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk95)(Lclptr95);
	vs_top=sup;
	V69= vs_base[0];
	{object V67;
	object V68= V69;
	if(V68==Cnil){
	base[8]= Cnil;
	goto T290;}
	base[9]=V67=MMcons(Cnil,Cnil);
	goto T291;
T291:;
	base[10]= (V68->c.c_car);
	vs_top=(vs_base=base+10)+1;
	L10(base);
	vs_top=sup;
	(V67->c.c_car)= vs_base[0];
	if((V68=MMcdr(V68))==Cnil){
	base[8]= base[9];
	goto T290;}
	V67=MMcdr(V67)=MMcons(Cnil,Cnil);
	goto T291;}
	goto T290;
T290:;
	base[10]= (V56);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk96)(Lclptr96);
	vs_top=sup;
	V70= vs_base[0];
	base[9]= CMPmake_fixnum((long)length(V70));
	vs_top=(vs_base=base+4)+6;
	Lformat();
	vs_top=sup;
	if(((VV[15]->s.s_dbind))==Cnil){
	goto T300;}
	if(((V55))==Cnil){
	goto T303;}
	base[4]= (V55);
	base[5]= VV[16];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk87)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T307;}
	base[4]= STREF(object,(V55),0);
	base[5]= STREF(object,(V55),4);
	base[6]= STREF(object,(V55),8);
	base[7]= (V56);
	base[8]= (V57);
	vs_top=(vs_base=base+5)+4;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T307;
T307:;
	if(!(type_of((V55))==t_fixnum)){
	goto T317;}
	{object V72;
	if(type_of(V56)==t_structure){
	goto T323;}
	goto T321;
	goto T323;
T323:;
	if(!(((V56)->str.str_def)==(VV[29]))){
	goto T321;}
	V72= STREF(object,(V56),4);
	goto T319;
	goto T321;
T321:;{object V74;
	V74= (VV[19]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V56);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk88)();
	vs_top=sup;
	V75= vs_base[0];
	if(!((V74)==(CMPcar(V75)))){
	goto T326;}}
	V72= CMPcar(((V56))->cc.cc_turbo[12]);
	goto T319;
	goto T326;
T326:;
	V72= Cnil;
	goto T319;
T319:;
	if(((V72))==Cnil){
	goto T332;}
	base[4]= ((V72))->v.v_self[fix((V55))]= (V56);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T332;
T332:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T317;
T317:;
	{register object V76;
	V76= (V55);
	base[4]= (V76);
	base[5]= VV[20];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk87)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T335;}
	{object V77;
	object V78;
	register object V79;
	V77= STREF(object,(V55),0);
	V78= list(2,(V56),(V57));
	V79= STREF(object,(V55),4);
	if(((V79))==Cnil){
	goto T343;}
	if((CMPcdr((V79)))!=Cnil){
	goto T343;}
	base[4]= (V78);
	base[5]= CMPcar((V79));
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V77);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T343;
T343:;
	base[4]= (V77);
	base[5]= (V78);
	{object V80;
	V80= (V79);
	 vs_top=base+6;
	 while(V80!=Cnil)
	 {vs_push((V80)->c.c_car);V80=(V80)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T335;
T335:;
	base[4]= (V76);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T353;}
	base[4]= (V56);
	base[5]= (V57);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V55);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T353;
T353:;
	base[5]= VV[21];
	base[6]= (V76);
	base[7]= VV[30];
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk90)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	return;}
	goto T303;
T303:;
	base[4]= VV[23];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	return;
	goto T300;
T300:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	}
}
/*	local entry for function DESCRIBE-PACKAGE	*/

static object LI11(V83,V84)

object V83;object V84;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	base[0]= (V83);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T363;}
	base[0]= (V83);
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V83= vs_base[0];
	goto T363;
T363:;
	base[0]= (V84);
	base[1]= VV[31];
	base[2]= (V83);
	base[4]= (V83);
	vs_top=(vs_base=base+4)+1;
	Ltype_of();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V85;
	base[0]= (V83);
	vs_top=(vs_base=base+0)+1;
	Lpackage_nicknames();
	vs_top=sup;
	V85= vs_base[0];
	if(((V85))==Cnil){
	goto T375;}
	base[0]= (V84);
	base[1]= VV[32];
	base[3]= (V85);
	vs_top=(vs_base=base+3)+1;
	Lbutlast();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= (V85);
	vs_top=(vs_base=base+4)+1;
	Llast();
	vs_top=sup;
	V86= vs_base[0];
	base[3]= CMPcar(V86);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;}
	goto T375;
T375:;
	{object V87;
	object V88;
	V87= small_fixnum(0);
	V88= small_fixnum(0);
	{object V89;
	register object V90;
	register object V91;
	{object V92;
	V92= (V83);
	base[0]= (V92);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T392;}
	base[0]= coerce_to_string((V92));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V92= vs_base[0];
	if(((V92))!=Cnil){
	goto T392;}
	base[0]= VV[33];
	base[1]= VV[34];
	base[2]= (V83);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk97)();
	vs_top=sup;
	goto T392;
T392:;
	V89= (V92);}
	V90= Cnil;
	V91= Cnil;
	{long V93;
	long V94;
	base[0]= (V89);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk98)();
	vs_top=sup;
	V93= fix(vs_base[0]);
	V94= 0;
	goto T407;
T407:;
	if(!((V94)>=(V93))){
	goto T410;}
	V90= Cnil;
	goto T390;
	goto T410;
T410:;
	base[0]= (V89);
	base[1]= CMPmake_fixnum(V94);
	vs_top=(vs_base=base+0)+2;
	siLpackage_external();
	vs_top=sup;
	V91= vs_base[0];
	goto T408;
T408:;
	if(((V91))!=Cnil){
	goto T418;}
	goto T409;
	goto T418;
T418:;
	V90= CMPcar((V91));
	V88= number_plus((V88),small_fixnum(1));
	V91= CMPcdr((V91));
	goto T408;
	goto T409;
T409:;
	V94= (long)(V94)+1;
	goto T407;}}
	goto T390;
T390:;
	{register object V95;
	object V96;
	register object V97;
	{object V98;
	V98= (V83);
	base[0]= (V98);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T432;}
	base[0]= coerce_to_string((V98));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V98= vs_base[0];
	if(((V98))!=Cnil){
	goto T432;}
	base[0]= VV[33];
	base[1]= VV[34];
	base[2]= (V83);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk97)();
	vs_top=sup;
	goto T432;
T432:;
	V95= (V98);}
	V96= Cnil;
	V97= Cnil;
	{object V99;
	register object V100;
	base[2]= (V95);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V101= vs_base[0];
	V99= make_cons((V95),V101);
	V100= CMPcar((V99));
	goto T448;
T448:;
	if(!(((V99))==Cnil)){
	goto T449;}
	V96= Cnil;
	goto T430;
	goto T449;
T449:;
	{long V102;
	register long V103;
	base[2]= (V100);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk98)();
	if(vs_base>=vs_top){vs_top=sup;goto T458;}
	V102= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T459;}
	V103= fix(vs_base[0]);
	vs_top=sup;
	goto T460;
	goto T458;
T458:;
	V102= fix(Cnil);
	goto T459;
T459:;
	V103= fix(Cnil);
	goto T460;
T460:;
	if(((V95))==((V100))){
	goto T461;}
	V103= 0;
	goto T461;
T461:;
	{long V104;
	register long V105;
	V104= (long)(V103)+(V102);
	V105= 0;
	goto T468;
T468:;
	if(!((V105)>=(V104))){
	goto T471;}
	goto T455;
	goto T471;
T471:;
	if(!((V105)<(V103))){
	goto T476;}
	base[2]= (V100);
	base[3]= CMPmake_fixnum(V105);
	vs_top=(vs_base=base+2)+2;
	siLpackage_internal();
	vs_top=sup;
	V97= vs_base[0];
	goto T474;
	goto T476;
T476:;
	base[2]= (V100);
	V106 = CMPmake_fixnum(V105);
	V107 = CMPmake_fixnum(V103);
	base[3]= number_minus(V106,V107);
	vs_top=(vs_base=base+2)+2;
	siLpackage_external();
	vs_top=sup;
	V97= vs_base[0];
	goto T474;
T474:;
	goto T469;
T469:;
	if(((V97))!=Cnil){
	goto T482;}
	goto T470;
	goto T482;
T482:;
	V96= CMPcar((V97));
	if(((V100))==((V95))){
	goto T488;}
	base[3]= symbol_name((V96));
	base[4]= (V95);
	vs_top=(vs_base=base+3)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V108= vs_base[0];
	if(!((VV[35])==(CMPcar(V108)))){
	goto T487;}
	goto T488;
T488:;
	V87= number_plus((V87),small_fixnum(1));
	goto T487;
T487:;
	V97= CMPcdr((V97));
	goto T469;
	goto T470;
T470:;
	V105= (long)(V105)+1;
	goto T468;}}
	goto T455;
T455:;
	V99= CMPcdr((V99));
	V100= CMPcar((V99));
	goto T448;}}
	goto T430;
T430:;
	V87= number_minus((V87),(V88));
	base[0]= (V84);
	base[1]= VV[36];
	base[2]= (V87);
	base[3]= (V88);
	base[4]= number_plus((V87),(V88));
	vs_top=(vs_base=base+0)+5;
	Lformat();
	vs_top=sup;}
	{object V109;
	base[0]= (V83);
	vs_top=(vs_base=base+0)+1;
	Lpackage_use_list();
	vs_top=sup;
	V109= vs_base[0];
	if(((V109))==Cnil){
	goto T516;}
	base[0]= (V84);
	base[1]= VV[37];
	{object V110;
	object V111= (V109);
	if(V111==Cnil){
	base[2]= Cnil;
	goto T523;}
	base[3]=V110=MMcons(Cnil,Cnil);
	goto T524;
T524:;
	base[4]= (V111->c.c_car);
	vs_top=(vs_base=base+4)+1;
	Lpackage_name();
	vs_top=sup;
	(V110->c.c_car)= vs_base[0];
	if((V111=MMcdr(V111))==Cnil){
	base[2]= base[3];
	goto T523;}
	V110=MMcdr(V110)=MMcons(Cnil,Cnil);
	goto T524;}
	goto T523;
T523:;
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;}
	goto T516;
T516:;
	{object V112;
	base[0]= (V83);
	vs_top=(vs_base=base+0)+1;
	Lpackage_use_list();
	vs_top=sup;
	V112= vs_base[0];
	if(((V112))==Cnil){
	goto T530;}
	base[0]= (V84);
	base[1]= VV[38];
	{object V113;
	object V114= (V112);
	if(V114==Cnil){
	base[2]= Cnil;
	goto T534;}
	base[3]=V113=MMcons(Cnil,Cnil);
	goto T535;
T535:;
	base[4]= (V114->c.c_car);
	vs_top=(vs_base=base+4)+1;
	Lpackage_name();
	vs_top=sup;
	(V113->c.c_car)= vs_base[0];
	if((V114=MMcdr(V114))==Cnil){
	base[2]= base[3];
	goto T534;}
	V113=MMcdr(V113)=MMcons(Cnil,Cnil);
	goto T535;}
	goto T534;
T534:;
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V115 = vs_base[0];
	VMR8(V115)}
	goto T530;
T530:;
	{object V116 = Cnil;
	VMR8(V116)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass TRACED-METHOD9257	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[39];
	base[1]= VV[40];
	base[2]= VV[41];
	V117= listA(9,VV[42],VV[43],VV[44],Cnil,VV[45],Cnil,VV[46],VV[47],Cnil);
	V118= listA(9,VV[42],VV[48],VV[44],VV[49],VV[45],Cnil,VV[46],VV[50],Cnil);
	base[4]= VV[51];
	base[5]= (VV[99]->s.s_gfdef);
	base[6]= VV[42];
	base[7]= VV[52];
	base[8]= VV[44];
	base[9]= VV[53];
	base[10]= VV[45];
	base[11]= VV[54];
	base[12]= VV[46];
	base[13]= Cnil;
	base[14]= VV[55];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V119= vs_base[0];
	base[3]= list(3,/* INLINE-ARGS */V117,/* INLINE-ARGS */V118,V119);
	base[4]= Cnil;
	base[5]= VV[56];
	symlispcall(VV[100],base+0,6);
	return;
}
/*	function definition for (FAST-METHOD METHOD-LAMBDA-LIST (TRACED-METHOD))	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V120;
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
	goto T566;}
	goto T564;
	goto T566;
T566:;
	if(!(((V122)->str.str_def)==(VV[57]))){
	goto T564;}
	V126= STREF(object,(V122),4);
	goto T562;
	goto T564;
T564:;{object V128;
	V128= (VV[19]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V122);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk88)();
	vs_top=sup;
	V129= vs_base[0];
	if(!((V128)==(CMPcar(V129)))){
	goto T569;}}
	V126= CMPcar(((V122))->cc.cc_turbo[12]);
	goto T562;
	goto T569;
T569:;
	V126= Cnil;
	goto T562;
T562:;
	{register object V131;
	V131= ((V124))->v.v_self[1];
	if(!(type_of(V131)==t_fixnum)){
	goto T581;}
	V131= ((V126))->v.v_self[fix((V131))];
	goto T579;
	goto T581;
T581:;
	V131= VV[58];
	goto T579;
T579:;
	if(!(((V131))==(VV[58]))){
	goto T584;}
	base[4]= (V122);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk66)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T576;
	goto T584;
T584:;
	base[3]= (V131);}
	goto T576;
T576:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk101)(Lclptr101);
	return;}}
	}
}
/*	function definition for (FAST-METHOD METHOD-SPECIALIZERS (TRACED-METHOD))	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V133;
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
	goto T597;}
	goto T595;
	goto T597;
T597:;
	if(!(((V135)->str.str_def)==(VV[59]))){
	goto T595;}
	V139= STREF(object,(V135),4);
	goto T593;
	goto T595;
T595:;{object V141;
	V141= (VV[19]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V135);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk88)();
	vs_top=sup;
	V142= vs_base[0];
	if(!((V141)==(CMPcar(V142)))){
	goto T600;}}
	V139= CMPcar(((V135))->cc.cc_turbo[12]);
	goto T593;
	goto T600;
T600:;
	V139= Cnil;
	goto T593;
T593:;
	{register object V144;
	V144= ((V137))->v.v_self[1];
	if(!(type_of(V144)==t_fixnum)){
	goto T612;}
	V144= ((V139))->v.v_self[fix((V144))];
	goto T610;
	goto T612;
T612:;
	V144= VV[58];
	goto T610;
T610:;
	if(!(((V144))==(VV[58]))){
	goto T615;}
	base[4]= (V135);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk66)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T607;
	goto T615;
T615:;
	base[3]= (V144);}
	goto T607;
T607:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk102)(Lclptr102);
	return;}}
	}
}
/*	function definition for (FAST-METHOD METHOD-QUALIFIERS (TRACED-METHOD))	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{object V146;
	object V147;
	register object V148;
	check_arg(3);
	V146=(base[0]);
	V147=(base[1]);
	V148=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V150;
	object V151;
	V150= CMPcar((V146));
	V151= CMPcdr((V146));
	{object V152;
	if(type_of(V148)==t_structure){
	goto T628;}
	goto T626;
	goto T628;
T628:;
	if(!(((V148)->str.str_def)==(VV[60]))){
	goto T626;}
	V152= STREF(object,(V148),4);
	goto T624;
	goto T626;
T626:;{object V154;
	V154= (VV[19]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V148);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk88)();
	vs_top=sup;
	V155= vs_base[0];
	if(!((V154)==(CMPcar(V155)))){
	goto T631;}}
	V152= CMPcar(((V148))->cc.cc_turbo[12]);
	goto T624;
	goto T631;
T631:;
	V152= Cnil;
	goto T624;
T624:;
	{register object V157;
	V157= ((V150))->v.v_self[1];
	if(!(type_of(V157)==t_fixnum)){
	goto T643;}
	V157= ((V152))->v.v_self[fix((V157))];
	goto T641;
	goto T643;
T643:;
	V157= VV[58];
	goto T641;
T641:;
	if(!(((V157))==(VV[58]))){
	goto T646;}
	base[4]= (V148);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk66)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T638;
	goto T646;
T646:;
	base[3]= (V157);}
	goto T638;
T638:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk83)(Lclptr83);
	return;}}
	}
}
/*	function definition for (FAST-METHOD ACCESSOR-METHOD-SLOT-NAME (TRACED-METHOD))	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V159;
	object V160;
	register object V161;
	check_arg(3);
	V159=(base[0]);
	V160=(base[1]);
	V161=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V163;
	object V164;
	V163= CMPcar((V159));
	V164= CMPcdr((V159));
	{object V165;
	if(type_of(V161)==t_structure){
	goto T659;}
	goto T657;
	goto T659;
T659:;
	if(!(((V161)->str.str_def)==(VV[61]))){
	goto T657;}
	V165= STREF(object,(V161),4);
	goto T655;
	goto T657;
T657:;{object V167;
	V167= (VV[19]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V161);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk88)();
	vs_top=sup;
	V168= vs_base[0];
	if(!((V167)==(CMPcar(V168)))){
	goto T662;}}
	V165= CMPcar(((V161))->cc.cc_turbo[12]);
	goto T655;
	goto T662;
T662:;
	V165= Cnil;
	goto T655;
T655:;
	{register object V170;
	V170= ((V163))->v.v_self[1];
	if(!(type_of(V170)==t_fixnum)){
	goto T674;}
	V170= ((V165))->v.v_self[fix((V170))];
	goto T672;
	goto T674;
T674:;
	V170= VV[58];
	goto T672;
T672:;
	if(!(((V170))==(VV[58]))){
	goto T677;}
	base[4]= (V161);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk66)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T669;
	goto T677;
T677:;
	base[3]= (V170);}
	goto T669;
T669:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk103)(Lclptr103);
	return;}}
	}
}
/*	local entry for function TRACE-METHOD	*/

static object LI17(object V172,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB14 VMS14 VMV14
	{object V173;
	object V174;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V173= V172;
	narg= narg - 1;
	V175 = list_vector_new(narg,first,ap);
	V174= V175;
	{object V176;
	object V177;
	object V178;
	base[0]= (V173);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk104)();
	if(vs_base>=vs_top){vs_top=sup;goto T682;}
	V176= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T683;}
	V177= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T684;}
	V178= vs_base[0];
	vs_top=sup;
	goto T685;
	goto T682;
T682:;
	V176= Cnil;
	goto T683;
T683:;
	V177= Cnil;
	goto T684;
T684:;
	V178= Cnil;
	goto T685;
T685:;
	{object V179;
	object V180;
	base[2]= (V177);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk86)(Lclptr86);
	vs_top=sup;
	V181= vs_base[0];
	V179= (*(LnkLI105))(V181,(V178),(V174));
	base[2]= VV[39];
	base[3]= VV[62];
	base[4]= (V177);
	base[5]= VV[63];
	base[6]= (V179);
	vs_top=(vs_base=base+2)+5;
	(void) (*Lnk106)(Lclptr106);
	vs_top=sup;
	V180= vs_base[0];
	base[2]= (V176);
	base[3]= (V177);
	(void)simple_symlispcall(VV[107],base+2,2);
	base[2]= (V176);
	base[3]= (V180);
	(void)simple_symlispcall(VV[108],base+2,2);
	base[2]= V180;
	base[3]= (VV[64]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Ladjoin();
	vs_top=sup;
	(VV[64]->s.s_dbind)= vs_base[0];
	{object V183 = (V180);
	VMR14(V183)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for UNTRACE-METHOD	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	{object V184;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T705;}
	V184=(base[0]);
	vs_top=sup;
	goto T706;
	goto T705;
T705:;
	V184= Cnil;
	goto T706;
T706:;
	if(((V184))==Cnil){
	goto T709;}
	{object V185;
	object V186;
	base[1]= (V184);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk104)();
	if(vs_base>=vs_top){vs_top=sup;goto T713;}
	V185= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T714;}
	V186= vs_base[0];
	vs_top=sup;
	goto T715;
	goto T713;
T713:;
	V185= Cnil;
	goto T714;
T714:;
	V186= Cnil;
	goto T715;
T715:;
	{register object x= (V186),V187= (VV[64]->s.s_dbind);
	while(V187!=Cnil)
	if(x==(V187->c.c_car)){
	goto T718;
	}else V187=V187->c.c_cdr;
	goto T717;}
	goto T718;
T718:;
	base[1]= (V186);
	vs_top=(vs_base=base+1)+1;
	L19(base);
	return;
	goto T717;
T717:;
	base[1]= VV[65];
	base[2]= (V186);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;}
	goto T709;
T709:;
	{register object V188;
	register object V189;
	V188= (VV[64]->s.s_dbind);
	V189= CMPcar((V188));
	goto T725;
T725:;
	if(!(((V188))==Cnil)){
	goto T726;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T726;
T726:;
	base[2]= (V189);
	vs_top=(vs_base=base+2)+1;
	L19(base);
	vs_top=sup;
	V188= CMPcdr((V188));
	V189= CMPcar((V188));
	goto T725;}
	}
}
/*	local entry for function TRACE-METHOD-INTERNAL	*/

static object LI20(V193,V194,V195)

object V193;register object V194;object V195;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	base[0]= list(2,VV[67],(V194));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	base[0]= (V194);
	base[1]= (V193);
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	base[0]= listA(3,VV[68],(V194),(V195));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	base[0]= (V194);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	{object V196 = vs_base[0];
	VMR16(V196)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for UNDEFMETHOD	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V197=base[0]->c.c_cdr;
	base[2]= V197;}
	base[3]= list(2,VV[69],list(2,VV[70],base[2]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function UNDEFMETHOD-1	*/

static object LI22(V199)

object V199;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V200;
	object V201;
	base[0]= (V199);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk104)();
	if(vs_base>=vs_top){vs_top=sup;goto T747;}
	V200= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T748;}
	V201= vs_base[0];
	vs_top=sup;
	goto T749;
	goto T747;
T747:;
	V200= Cnil;
	goto T748;
T748:;
	V201= Cnil;
	goto T749;
T749:;
	if(((V200))==Cnil){
	goto T751;}
	if(((V201))==Cnil){
	goto T751;}
	base[0]= (V200);
	base[1]= (V201);
	(void)simple_symlispcall(VV[107],base+0,2);
	{object V202 = (V201);
	VMR18(V202)}
	goto T751;
T751:;
	{object V203 = Cnil;
	VMR18(V203)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function UNTRACE-1	*/

static void L19(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{register object V204;
	check_arg(1);
	V204=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V205;
	base[1]= (V204);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk109)(Lclptr109);
	vs_top=sup;
	V205= vs_base[0];
	if(((V205))==Cnil){
	goto T761;}
	base[1]= (V205);
	base[2]= (V204);
	(void)simple_symlispcall(VV[107],base+1,2);
	base[1]=(VV[108]->s.s_gfdef);
	base[2]= (V205);
	if(!((VV[66])->s.s_gfdef!=OBJNULL)){
	goto T770;}
	base[4]= (V204);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk66)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T768;
	goto T770;
T770:;
	base[3]= (*(LnkLI111))(VV[66],VV[43]);
	goto T768;
T768:;
	(void)simple_lispcall(base+1,2);
	base[1]= (V204);
	base[2]= (VV[64]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk112)();
	vs_top=sup;
	(VV[64]->s.s_dbind)= vs_base[0];
	base[1]= (VV[64]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T761;
T761:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function PRETTY-CLASS	*/

static void L10(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{object V206;
	check_arg(1);
	V206=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V207;
	base[1]= (V206);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk91)(Lclptr91);
	vs_top=sup;
	V207= vs_base[0];
	if(V207==Cnil)goto T776;
	base[1]= V207;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T776;
T776:;}
	base[1]= (V206);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function DESCRIBE-SLOT	*/

static void L6(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{object V208;
	object V209;
	object V210;
	object V211;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V208=(base[0]);
	V209=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T779;}
	V210=(base[2]);
	V211= Ct;
	vs_top=sup;
	goto T780;
	goto T779;
T779:;
	V210= Cnil;
	V211= Cnil;
	goto T780;
T780:;
	if(((V211))==Cnil){
	goto T783;}
	base[4]= base0[3];
	base[5]= VV[9];
	base[6]= (V208);
	base[7]= (V210);
	base[8]= number_plus(base0[6],small_fixnum(7));
	base[9]= (V209);
	vs_top=(vs_base=base+4)+6;
	Lformat();
	return;
	goto T783;
T783:;
	base[4]= base0[3];
	base[5]= VV[10];
	base[6]= (V208);
	base[7]= base0[6];
	base[8]= (V209);
	vs_top=(vs_base=base+4)+5;
	Lformat();
	return;
	}
}
/*	local function ADJUST-SLOT-NAME-LENGTH	*/

static void L5(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	{object V212;
	check_arg(1);
	V212=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V213= symbol_name((V212));
	V214 = CMPmake_fixnum((long)(/* INLINE-ARGS */V213)->v.v_fillp);
	base0[6]= (number_compare(base0[6],V214)>=0?(base0[6]):V214);}
	base[1]= base0[6];
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT112(){ call_or_link(VV[112],(void **)(void *)&Lnk112);} /* REMOVE */
static object  LnkTLI111(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[111],(void **)(void *)&LnkLI111,2,first,ap);va_end(ap);return V1;} /* NO-SLOT */
static object  LnkTLI110(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[110],(void **)(void *)&LnkLI110,1,first,ap);va_end(ap);return V1;} /* %FBOUNDP */
static void LnkT109(ptr) object *ptr;{ call_or_link_closure(VV[109],(void **)(void *)&Lnk109,(void **)(void *)&Lclptr109);} /* METHOD-GENERIC-FUNCTION */
static void LnkT106(ptr) object *ptr;{ call_or_link_closure(VV[106],(void **)(void *)&Lnk106,(void **)(void *)&Lclptr106);} /* MAKE-INSTANCE */
static object  LnkTLI105(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[105],(void **)(void *)&LnkLI105,3,first,ap);va_end(ap);return V1;} /* TRACE-METHOD-INTERNAL */
static void LnkT104(){ call_or_link(VV[104],(void **)(void *)&Lnk104);} /* PARSE-METHOD-OR-SPEC */
static void LnkT103(ptr) object *ptr;{ call_or_link_closure(VV[103],(void **)(void *)&Lnk103,(void **)(void *)&Lclptr103);} /* ACCESSOR-METHOD-SLOT-NAME */
static void LnkT102(ptr) object *ptr;{ call_or_link_closure(VV[102],(void **)(void *)&Lnk102,(void **)(void *)&Lclptr102);} /* METHOD-SPECIALIZERS */
static void LnkT101(ptr) object *ptr;{ call_or_link_closure(VV[101],(void **)(void *)&Lnk101,(void **)(void *)&Lclptr101);} /* METHOD-LAMBDA-LIST */
static void LnkT66(){ call_or_link(VV[66],(void **)(void *)&Lnk66);} /* LISP METHOD slot READER */
static void LnkT98(){ call_or_link(VV[98],(void **)(void *)&Lnk98);} /* PACKAGE-SIZE */
static void LnkT97(){ call_or_link(VV[97],(void **)(void *)&Lnk97);} /* SPECIFIC-ERROR */
static void LnkT96(ptr) object *ptr;{ call_or_link_closure(VV[96],(void **)(void *)&Lnk96,(void **)(void *)&Lclptr96);} /* SPECIALIZER-DIRECT-METHODS */
static void LnkT95(ptr) object *ptr;{ call_or_link_closure(VV[95],(void **)(void *)&Lnk95,(void **)(void *)&Lclptr95);} /* CLASS-PRECEDENCE-LIST */
static void LnkT94(ptr) object *ptr;{ call_or_link_closure(VV[94],(void **)(void *)&Lnk94,(void **)(void *)&Lclptr94);} /* CLASS-DIRECT-SUBCLASSES */
static void LnkT93(ptr) object *ptr;{ call_or_link_closure(VV[93],(void **)(void *)&Lnk93,(void **)(void *)&Lclptr93);} /* CLASS-DIRECT-SUPERCLASSES */
static object  LnkTLI92(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[92],(void **)(void *)&LnkLI92,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT91(ptr) object *ptr;{ call_or_link_closure(VV[91],(void **)(void *)&Lnk91,(void **)(void *)&Lclptr91);} /* CLASS-NAME */
static void LnkT90(){ call_or_link(VV[90],(void **)(void *)&Lnk90);} /* TYPECASE-ERROR-STRING */
static object  LnkTLI89(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[89],(void **)(void *)&LnkLI89,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT88(){ call_or_link(VV[88],(void **)(void *)&Lnk88);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT87(){ call_or_link(VV[87],(void **)(void *)&Lnk87);} /* STRUCTURE-SUBTYPE-P */
static void LnkT86(ptr) object *ptr;{ call_or_link_closure(VV[86],(void **)(void *)&Lnk86,(void **)(void *)&Lclptr86);} /* METHOD-FUNCTION */
static void LnkT85(ptr) object *ptr;{ call_or_link_closure(VV[85],(void **)(void *)&Lnk85,(void **)(void *)&Lclptr85);} /* METHOD-FAST-FUNCTION */
static object  LnkTLI84(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[84],(void **)(void *)&LnkLI84,1,first,ap);va_end(ap);return V1;} /* UNPARSE-SPECIALIZERS */
static void LnkT83(ptr) object *ptr;{ call_or_link_closure(VV[83],(void **)(void *)&Lnk83,(void **)(void *)&Lclptr83);} /* METHOD-QUALIFIERS */
static void LnkT82(ptr) object *ptr;{ call_or_link_closure(VV[82],(void **)(void *)&Lnk82,(void **)(void *)&Lclptr82);} /* GENERIC-FUNCTION-METHODS */
static void LnkT81(ptr) object *ptr;{ call_or_link_closure(VV[81],(void **)(void *)&Lnk81,(void **)(void *)&Lclptr81);} /* GENERIC-FUNCTION-PRETTY-ARGLIST */
static void LnkT80(ptr) object *ptr;{ call_or_link_closure(VV[80],(void **)(void *)&Lnk80,(void **)(void *)&Lclptr80);} /* CLASS-SLOTS */
static void LnkT79(){ call_or_link(VV[79],(void **)(void *)&Lnk79);} /* SLOT-VALUE-OR-DEFAULT */
static void LnkT76(ptr) object *ptr;{ call_or_link_closure(VV[76],(void **)(void *)&Lnk76,(void **)(void *)&Lclptr76);} /* SLOT-DEFINITION-ALLOCATION */
static void LnkT75(ptr) object *ptr;{ call_or_link_closure(VV[75],(void **)(void *)&Lnk75,(void **)(void *)&Lclptr75);} /* SLOT-DEFINITION-NAME */
static void LnkT74(ptr) object *ptr;{ call_or_link_closure(VV[74],(void **)(void *)&Lnk74,(void **)(void *)&Lclptr74);} /* SLOTS-TO-INSPECT */
static object  LnkTLI73(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[73],(void **)(void *)&LnkLI73,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI72(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[72],(void **)(void *)&LnkLI72,2,first,ap);va_end(ap);return V1;} /* DESCRIBE-PACKAGE */
static void LnkT0(ptr) object *ptr;{ call_or_link_closure(VV[0],(void **)(void *)&Lnk0,(void **)(void *)&Lclptr0);} /* DESCRIBE-OBJECT */
static void LnkT71(){ call_or_link(VV[71],(void **)(void *)&Lnk71);} /* LOAD-DEFGENERIC */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

