
#include "cmpinclude.h"
#include "pcl_env.h"
void init_pcl_env(){do_init(VV);}
/*	function definition for (DEFGENERIC DESCRIBE-OBJECT)9122	*/

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
	(void) (*Lnk69)();
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
	base[4]= (*(LnkLI70))((V4),(V5));
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
	V12= (*(LnkLI71))((V10));
	base[7]= (V12);
	base[8]= (V10);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk72)(Lclptr72);
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
	(void) (*Lnk73)(Lclptr73);
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+8)+1;
	L5(base);
	vs_top=sup;
	base[8]= (V18);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk74)(Lclptr74);
	vs_top=sup;
	V20= vs_base[0];
	{object V19= V20;
	if((V19!= VV[75]))goto T40;
	V14= make_cons(V18,(V14));
	goto T37;
	goto T40;
T40:;
	if((V19!= VV[76]))goto T42;
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
	(void) (*Lnk73)(Lclptr73);
	vs_top=sup;
	base[9]= vs_base[0];
	base[11]= (V10);
	base[13]= (V26);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk73)(Lclptr73);
	vs_top=sup;
	base[12]= vs_base[0];
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk77)();
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
	(void) (*Lnk73)(Lclptr73);
	vs_top=sup;
	base[9]= vs_base[0];
	base[11]= (V10);
	base[13]= (V28);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk73)(Lclptr73);
	vs_top=sup;
	base[12]= vs_base[0];
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk77)();
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
	(void) (*Lnk73)(Lclptr73);
	vs_top=sup;
	base[9]= vs_base[0];
	base[11]= (V10);
	base[13]= (V30);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk73)(Lclptr73);
	vs_top=sup;
	base[12]= vs_base[0];
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	base[10]= vs_base[0];
	base[12]= (V30);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk74)(Lclptr74);
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
	(void) (*Lnk78)(Lclptr78);
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
	(void) (*Lnk79)(Lclptr79);
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
	(void) (*Lnk80)(Lclptr80);
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
	(void) (*Lnk81)(Lclptr81);
	vs_top=sup;
	base[8]= vs_base[0];
	base[9]= (*(LnkLI82))((V42));
	vs_top=(vs_base=base+6)+4;
	Lformat();
	vs_top=sup;{object V43;
	base[7]= (V42);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk83)(Lclptr83);
	vs_top=sup;
	V43= vs_base[0];
	if(V43==Cnil)goto T175;
	base[6]= V43;
	goto T174;
	goto T175;
T175:;}
	base[7]= (V42);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk84)(Lclptr84);
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
	(void) (*Lnk85)();
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
	(void) (*Lnk86)();
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
	(void) (*Lnk85)();
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
	(void) (*Lnk88)();
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
	base[8]= (*(LnkLI71))((V56));
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
	(void) (*Lnk89)(Lclptr89);
	vs_top=sup;
	V59= vs_base[0];
	if(((V59))==Cnil){
	goto T263;}
	V60= (VFUN_NARGS=2,(*(LnkLI90))((V59),Cnil));
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
	(void) (*Lnk91)(Lclptr91);
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
	(void) (*Lnk92)(Lclptr92);
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
	(void) (*Lnk93)(Lclptr93);
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
	(void) (*Lnk94)(Lclptr94);
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
	(void) (*Lnk85)();
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
	(void) (*Lnk86)();
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
	(void) (*Lnk85)();
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
	(void) (*Lnk88)();
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
	base[0]= V83;
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T393;}
	V89= V83;
	goto T391;
	goto T393;
T393:;
	base[0]= coerce_to_string(V83);
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V89= vs_base[0];
	goto T391;
T391:;
	V90= Cnil;
	V91= Cnil;
	{object V93;
	object V94;
	base[1]= (V89);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk95)();
	vs_top=sup;
	V93= vs_base[0];
	V94= small_fixnum(0);
	goto T401;
T401:;
	if(!(number_compare((V94),(V93))>=0)){
	goto T402;}
	V90= Cnil;
	goto T390;
	goto T402;
T402:;
	base[1]= (V89);
	base[2]= (V94);
	vs_top=(vs_base=base+1)+2;
	siLpackage_external();
	vs_top=sup;
	V91= vs_base[0];
	goto T409;
T409:;
	if(((V91))!=Cnil){
	goto T414;}
	goto T410;
	goto T414;
T414:;
	V90= CMPcar((V91));
	V88= number_plus((V88),small_fixnum(1));
	V91= CMPcdr((V91));
	goto T409;
	goto T410;
T410:;
	goto T407;
	goto T407;
T407:;
	V94= one_plus((V94));
	goto T401;}}
	goto T390;
T390:;
	{register object V95;
	object V96;
	register object V97;
	base[0]= V83;
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T429;}
	V95= V83;
	goto T427;
	goto T429;
T429:;
	base[0]= coerce_to_string(V83);
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V95= vs_base[0];
	goto T427;
T427:;
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
	goto T438;
T438:;
	if(!(((V99))==Cnil)){
	goto T439;}
	V96= Cnil;
	goto T426;
	goto T439;
T439:;
	{long V102;
	register long V103;
	base[2]= (V100);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk95)();
	if(vs_base>=vs_top){vs_top=sup;goto T448;}
	V102= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T449;}
	V103= fix(vs_base[0]);
	vs_top=sup;
	goto T450;
	goto T448;
T448:;
	V102= fix(Cnil);
	goto T449;
T449:;
	V103= fix(Cnil);
	goto T450;
T450:;
	if(((V95))==((V100))){
	goto T451;}
	V103= 0;
	goto T451;
T451:;
	{object V104;
	register object V105;
	V106 = CMPmake_fixnum(V103);
	V107 = CMPmake_fixnum(V102);
	V104= number_plus(V106,V107);
	V105= small_fixnum(0);
	goto T458;
T458:;
	if(!(number_compare((V105),(V104))>=0)){
	goto T459;}
	goto T445;
	goto T459;
T459:;
	V108 = CMPmake_fixnum(V103);
	if(!(number_compare((V105),V108)<0)){
	goto T468;}
	base[3]= (V100);
	base[4]= (V105);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V97= vs_base[0];
	goto T466;
	goto T468;
T468:;
	base[3]= (V100);
	V109 = CMPmake_fixnum(V103);
	base[4]= number_minus((V105),V109);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V97= vs_base[0];
	goto T466;
T466:;
	goto T464;
T464:;
	if(((V97))!=Cnil){
	goto T474;}
	goto T465;
	goto T474;
T474:;
	V96= CMPcar((V97));
	if(((V100))==((V95))){
	goto T480;}
	base[4]= symbol_name((V96));
	base[5]= (V95);
	vs_top=(vs_base=base+4)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V110= vs_base[0];
	if(!((VV[33])==(CMPcar(V110)))){
	goto T479;}
	goto T480;
T480:;
	V87= number_plus((V87),small_fixnum(1));
	goto T479;
T479:;
	V97= CMPcdr((V97));
	goto T464;
	goto T465;
T465:;
	goto T462;
	goto T462;
T462:;
	V105= one_plus((V105));
	goto T458;}}
	goto T445;
T445:;
	V99= CMPcdr((V99));
	V100= CMPcar((V99));
	goto T438;}}
	goto T426;
T426:;
	V87= number_minus((V87),(V88));
	base[0]= (V84);
	base[1]= VV[34];
	base[2]= (V87);
	base[3]= (V88);
	base[4]= number_plus((V87),(V88));
	vs_top=(vs_base=base+0)+5;
	Lformat();
	vs_top=sup;}
	{object V111;
	base[0]= (V83);
	vs_top=(vs_base=base+0)+1;
	Lpackage_use_list();
	vs_top=sup;
	V111= vs_base[0];
	if(((V111))==Cnil){
	goto T508;}
	base[0]= (V84);
	base[1]= VV[35];
	{object V112;
	object V113= (V111);
	if(V113==Cnil){
	base[2]= Cnil;
	goto T515;}
	base[3]=V112=MMcons(Cnil,Cnil);
	goto T516;
T516:;
	base[4]= (V113->c.c_car);
	vs_top=(vs_base=base+4)+1;
	Lpackage_name();
	vs_top=sup;
	(V112->c.c_car)= vs_base[0];
	if((V113=MMcdr(V113))==Cnil){
	base[2]= base[3];
	goto T515;}
	V112=MMcdr(V112)=MMcons(Cnil,Cnil);
	goto T516;}
	goto T515;
T515:;
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;}
	goto T508;
T508:;
	{object V114;
	base[0]= (V83);
	vs_top=(vs_base=base+0)+1;
	Lpackage_use_list();
	vs_top=sup;
	V114= vs_base[0];
	if(((V114))==Cnil){
	goto T522;}
	base[0]= (V84);
	base[1]= VV[36];
	{object V115;
	object V116= (V114);
	if(V116==Cnil){
	base[2]= Cnil;
	goto T526;}
	base[3]=V115=MMcons(Cnil,Cnil);
	goto T527;
T527:;
	base[4]= (V116->c.c_car);
	vs_top=(vs_base=base+4)+1;
	Lpackage_name();
	vs_top=sup;
	(V115->c.c_car)= vs_base[0];
	if((V116=MMcdr(V116))==Cnil){
	base[2]= base[3];
	goto T526;}
	V115=MMcdr(V115)=MMcons(Cnil,Cnil);
	goto T527;}
	goto T526;
T526:;
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V117 = vs_base[0];
	VMR8(V117)}
	goto T522;
T522:;
	{object V118 = Cnil;
	VMR8(V118)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for Defclass TRACED-METHOD9243	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[37];
	base[1]= VV[38];
	base[2]= VV[39];
	V119= listA(9,VV[40],VV[41],VV[42],Cnil,VV[43],Cnil,VV[44],VV[45],Cnil);
	V120= listA(9,VV[40],VV[46],VV[42],VV[47],VV[43],Cnil,VV[44],VV[48],Cnil);
	base[4]= VV[49];
	base[5]= (VV[96]->s.s_gfdef);
	base[6]= VV[40];
	base[7]= VV[50];
	base[8]= VV[42];
	base[9]= VV[51];
	base[10]= VV[43];
	base[11]= VV[52];
	base[12]= VV[44];
	base[13]= Cnil;
	base[14]= VV[53];
	vs_top=(vs_base=base+4)+11;
	LlistA();
	vs_top=sup;
	V121= vs_base[0];
	base[3]= list(3,/* INLINE-ARGS */V119,/* INLINE-ARGS */V120,V121);
	base[4]= Cnil;
	base[5]= VV[54];
	symlispcall(VV[97],base+0,6);
	return;
}
/*	function definition for (FAST-METHOD METHOD-LAMBDA-LIST (TRACED-METHOD))	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V122;
	object V123;
	register object V124;
	check_arg(3);
	V122=(base[0]);
	V123=(base[1]);
	V124=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V126;
	object V127;
	V126= CMPcar((V122));
	V127= CMPcdr((V122));
	{object V128;
	if(type_of(V124)==t_structure){
	goto T558;}
	goto T556;
	goto T558;
T558:;
	if(!(((V124)->str.str_def)==(VV[55]))){
	goto T556;}
	V128= STREF(object,(V124),4);
	goto T554;
	goto T556;
T556:;{object V130;
	V130= (VV[19]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V124);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk86)();
	vs_top=sup;
	V131= vs_base[0];
	if(!((V130)==(CMPcar(V131)))){
	goto T561;}}
	V128= CMPcar(((V124))->cc.cc_turbo[12]);
	goto T554;
	goto T561;
T561:;
	V128= Cnil;
	goto T554;
T554:;
	{register object V133;
	V133= ((V126))->v.v_self[1];
	if(!(type_of(V133)==t_fixnum)){
	goto T573;}
	V133= ((V128))->v.v_self[fix((V133))];
	goto T571;
	goto T573;
T573:;
	V133= VV[56];
	goto T571;
T571:;
	if(!(((V133))==(VV[56]))){
	goto T576;}
	base[4]= (V124);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk64)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T568;
	goto T576;
T576:;
	base[3]= (V133);}
	goto T568;
T568:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk98)(Lclptr98);
	return;}}
	}
}
/*	function definition for (FAST-METHOD METHOD-SPECIALIZERS (TRACED-METHOD))	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V135;
	object V136;
	register object V137;
	check_arg(3);
	V135=(base[0]);
	V136=(base[1]);
	V137=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V139;
	object V140;
	V139= CMPcar((V135));
	V140= CMPcdr((V135));
	{object V141;
	if(type_of(V137)==t_structure){
	goto T589;}
	goto T587;
	goto T589;
T589:;
	if(!(((V137)->str.str_def)==(VV[57]))){
	goto T587;}
	V141= STREF(object,(V137),4);
	goto T585;
	goto T587;
T587:;{object V143;
	V143= (VV[19]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V137);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk86)();
	vs_top=sup;
	V144= vs_base[0];
	if(!((V143)==(CMPcar(V144)))){
	goto T592;}}
	V141= CMPcar(((V137))->cc.cc_turbo[12]);
	goto T585;
	goto T592;
T592:;
	V141= Cnil;
	goto T585;
T585:;
	{register object V146;
	V146= ((V139))->v.v_self[1];
	if(!(type_of(V146)==t_fixnum)){
	goto T604;}
	V146= ((V141))->v.v_self[fix((V146))];
	goto T602;
	goto T604;
T604:;
	V146= VV[56];
	goto T602;
T602:;
	if(!(((V146))==(VV[56]))){
	goto T607;}
	base[4]= (V137);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk64)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T599;
	goto T607;
T607:;
	base[3]= (V146);}
	goto T599;
T599:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk99)(Lclptr99);
	return;}}
	}
}
/*	function definition for (FAST-METHOD METHOD-QUALIFIERS (TRACED-METHOD))	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{object V148;
	object V149;
	register object V150;
	check_arg(3);
	V148=(base[0]);
	V149=(base[1]);
	V150=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V152;
	object V153;
	V152= CMPcar((V148));
	V153= CMPcdr((V148));
	{object V154;
	if(type_of(V150)==t_structure){
	goto T620;}
	goto T618;
	goto T620;
T620:;
	if(!(((V150)->str.str_def)==(VV[58]))){
	goto T618;}
	V154= STREF(object,(V150),4);
	goto T616;
	goto T618;
T618:;{object V156;
	V156= (VV[19]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V150);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk86)();
	vs_top=sup;
	V157= vs_base[0];
	if(!((V156)==(CMPcar(V157)))){
	goto T623;}}
	V154= CMPcar(((V150))->cc.cc_turbo[12]);
	goto T616;
	goto T623;
T623:;
	V154= Cnil;
	goto T616;
T616:;
	{register object V159;
	V159= ((V152))->v.v_self[1];
	if(!(type_of(V159)==t_fixnum)){
	goto T635;}
	V159= ((V154))->v.v_self[fix((V159))];
	goto T633;
	goto T635;
T635:;
	V159= VV[56];
	goto T633;
T633:;
	if(!(((V159))==(VV[56]))){
	goto T638;}
	base[4]= (V150);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk64)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T630;
	goto T638;
T638:;
	base[3]= (V159);}
	goto T630;
T630:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk81)(Lclptr81);
	return;}}
	}
}
/*	function definition for (FAST-METHOD ACCESSOR-METHOD-SLOT-NAME (TRACED-METHOD))	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V161;
	object V162;
	register object V163;
	check_arg(3);
	V161=(base[0]);
	V162=(base[1]);
	V163=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V165;
	object V166;
	V165= CMPcar((V161));
	V166= CMPcdr((V161));
	{object V167;
	if(type_of(V163)==t_structure){
	goto T651;}
	goto T649;
	goto T651;
T651:;
	if(!(((V163)->str.str_def)==(VV[59]))){
	goto T649;}
	V167= STREF(object,(V163),4);
	goto T647;
	goto T649;
T649:;{object V169;
	V169= (VV[19]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V163);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk86)();
	vs_top=sup;
	V170= vs_base[0];
	if(!((V169)==(CMPcar(V170)))){
	goto T654;}}
	V167= CMPcar(((V163))->cc.cc_turbo[12]);
	goto T647;
	goto T654;
T654:;
	V167= Cnil;
	goto T647;
T647:;
	{register object V172;
	V172= ((V165))->v.v_self[1];
	if(!(type_of(V172)==t_fixnum)){
	goto T666;}
	V172= ((V167))->v.v_self[fix((V172))];
	goto T664;
	goto T666;
T666:;
	V172= VV[56];
	goto T664;
T664:;
	if(!(((V172))==(VV[56]))){
	goto T669;}
	base[4]= (V163);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk64)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T661;
	goto T669;
T669:;
	base[3]= (V172);}
	goto T661;
T661:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk100)(Lclptr100);
	return;}}
	}
}
/*	local entry for function TRACE-METHOD	*/

static object LI17(object V174,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB14 VMS14 VMV14
	{object V175;
	object V176;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V175= V174;
	narg= narg - 1;
	V177 = list_vector_new(narg,first,ap);
	V176= V177;
	{object V178;
	object V179;
	object V180;
	base[0]= (V175);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T674;}
	V178= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T675;}
	V179= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T676;}
	V180= vs_base[0];
	vs_top=sup;
	goto T677;
	goto T674;
T674:;
	V178= Cnil;
	goto T675;
T675:;
	V179= Cnil;
	goto T676;
T676:;
	V180= Cnil;
	goto T677;
T677:;
	{object V181;
	object V182;
	base[2]= (V179);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk84)(Lclptr84);
	vs_top=sup;
	V183= vs_base[0];
	V181= (*(LnkLI102))(V183,(V180),(V176));
	base[2]= VV[37];
	base[3]= VV[60];
	base[4]= (V179);
	base[5]= VV[61];
	base[6]= (V181);
	vs_top=(vs_base=base+2)+5;
	(void) (*Lnk103)(Lclptr103);
	vs_top=sup;
	V182= vs_base[0];
	base[2]= (V178);
	base[3]= (V179);
	(void)simple_symlispcall(VV[104],base+2,2);
	base[2]= (V178);
	base[3]= (V182);
	(void)simple_symlispcall(VV[105],base+2,2);
	base[2]= V182;
	base[3]= (VV[62]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Ladjoin();
	vs_top=sup;
	(VV[62]->s.s_dbind)= vs_base[0];
	{object V185 = (V182);
	VMR14(V185)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for UNTRACE-METHOD	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	{object V186;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T697;}
	V186=(base[0]);
	vs_top=sup;
	goto T698;
	goto T697;
T697:;
	V186= Cnil;
	goto T698;
T698:;
	if(((V186))==Cnil){
	goto T701;}
	{object V187;
	object V188;
	base[1]= (V186);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T705;}
	V187= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T706;}
	V188= vs_base[0];
	vs_top=sup;
	goto T707;
	goto T705;
T705:;
	V187= Cnil;
	goto T706;
T706:;
	V188= Cnil;
	goto T707;
T707:;
	{register object x= (V188),V189= (VV[62]->s.s_dbind);
	while(V189!=Cnil)
	if(x==(V189->c.c_car)){
	goto T710;
	}else V189=V189->c.c_cdr;
	goto T709;}
	goto T710;
T710:;
	base[1]= (V188);
	vs_top=(vs_base=base+1)+1;
	L19(base);
	return;
	goto T709;
T709:;
	base[1]= VV[63];
	base[2]= (V188);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;}
	goto T701;
T701:;
	{register object V190;
	register object V191;
	V190= (VV[62]->s.s_dbind);
	V191= CMPcar((V190));
	goto T717;
T717:;
	if(!(((V190))==Cnil)){
	goto T718;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T718;
T718:;
	base[2]= (V191);
	vs_top=(vs_base=base+2)+1;
	L19(base);
	vs_top=sup;
	V190= CMPcdr((V190));
	V191= CMPcar((V190));
	goto T717;}
	}
}
/*	local entry for function TRACE-METHOD-INTERNAL	*/

static object LI20(V195,V196,V197)

object V195;register object V196;object V197;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	base[0]= list(2,VV[65],(V196));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	base[0]= (V196);
	base[1]= (V195);
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	base[0]= listA(3,VV[66],(V196),(V197));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	base[0]= (V196);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	{object V198 = vs_base[0];
	VMR16(V198)}
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
	{object V199=base[0]->c.c_cdr;
	base[2]= V199;}
	base[3]= list(2,VV[67],list(2,VV[68],base[2]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function UNDEFMETHOD-1	*/

static object LI22(V201)

object V201;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V202;
	object V203;
	base[0]= (V201);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk101)();
	if(vs_base>=vs_top){vs_top=sup;goto T739;}
	V202= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T740;}
	V203= vs_base[0];
	vs_top=sup;
	goto T741;
	goto T739;
T739:;
	V202= Cnil;
	goto T740;
T740:;
	V203= Cnil;
	goto T741;
T741:;
	if(((V202))==Cnil){
	goto T743;}
	if(((V203))==Cnil){
	goto T743;}
	base[0]= (V202);
	base[1]= (V203);
	(void)simple_symlispcall(VV[104],base+0,2);
	{object V204 = (V203);
	VMR18(V204)}
	goto T743;
T743:;
	{object V205 = Cnil;
	VMR18(V205)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function UNTRACE-1	*/

static void L19(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{register object V206;
	check_arg(1);
	V206=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V207;
	base[1]= (V206);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk106)(Lclptr106);
	vs_top=sup;
	V207= vs_base[0];
	if(((V207))==Cnil){
	goto T753;}
	base[1]= (V207);
	base[2]= (V206);
	(void)simple_symlispcall(VV[104],base+1,2);
	base[1]=(VV[105]->s.s_gfdef);
	base[2]= (V207);
	if(!((VV[64])->s.s_gfdef!=OBJNULL)){
	goto T762;}
	base[4]= (V206);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk64)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T760;
	goto T762;
T762:;
	base[3]= (*(LnkLI108))(VV[64],VV[41]);
	goto T760;
T760:;
	(void)simple_lispcall(base+1,2);
	base[1]= (V206);
	base[2]= (VV[62]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk109)();
	vs_top=sup;
	(VV[62]->s.s_dbind)= vs_base[0];
	base[1]= (VV[62]->s.s_dbind);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T753;
T753:;
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
	{object V208;
	check_arg(1);
	V208=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V209;
	base[1]= (V208);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk89)(Lclptr89);
	vs_top=sup;
	V209= vs_base[0];
	if(V209==Cnil)goto T768;
	base[1]= V209;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T768;
T768:;}
	base[1]= (V208);
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
	{object V210;
	object V211;
	object V212;
	object V213;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V210=(base[0]);
	V211=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T771;}
	V212=(base[2]);
	V213= Ct;
	vs_top=sup;
	goto T772;
	goto T771;
T771:;
	V212= Cnil;
	V213= Cnil;
	goto T772;
T772:;
	if(((V213))==Cnil){
	goto T775;}
	base[4]= base0[3];
	base[5]= VV[9];
	base[6]= (V210);
	base[7]= (V212);
	base[8]= number_plus(base0[6],small_fixnum(7));
	base[9]= (V211);
	vs_top=(vs_base=base+4)+6;
	Lformat();
	return;
	goto T775;
T775:;
	base[4]= base0[3];
	base[5]= VV[10];
	base[6]= (V210);
	base[7]= base0[6];
	base[8]= (V211);
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
	{object V214;
	check_arg(1);
	V214=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V215= symbol_name((V214));
	V216 = CMPmake_fixnum((long)(/* INLINE-ARGS */V215)->v.v_fillp);
	base0[6]= (number_compare(base0[6],V216)>=0?(base0[6]):V216);}
	base[1]= base0[6];
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT109(){ call_or_link(VV[109],(void **)(void *)&Lnk109);} /* REMOVE */
static object  LnkTLI108(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[108],(void **)(void *)&LnkLI108,2,first,ap);va_end(ap);return V1;} /* NO-SLOT */
static object  LnkTLI107(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[107],(void **)(void *)&LnkLI107,1,first,ap);va_end(ap);return V1;} /* %FBOUNDP */
static void LnkT106(ptr) object *ptr;{ call_or_link_closure(VV[106],(void **)(void *)&Lnk106,(void **)(void *)&Lclptr106);} /* METHOD-GENERIC-FUNCTION */
static void LnkT103(ptr) object *ptr;{ call_or_link_closure(VV[103],(void **)(void *)&Lnk103,(void **)(void *)&Lclptr103);} /* MAKE-INSTANCE */
static object  LnkTLI102(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[102],(void **)(void *)&LnkLI102,3,first,ap);va_end(ap);return V1;} /* TRACE-METHOD-INTERNAL */
static void LnkT101(){ call_or_link(VV[101],(void **)(void *)&Lnk101);} /* PARSE-METHOD-OR-SPEC */
static void LnkT100(ptr) object *ptr;{ call_or_link_closure(VV[100],(void **)(void *)&Lnk100,(void **)(void *)&Lclptr100);} /* ACCESSOR-METHOD-SLOT-NAME */
static void LnkT99(ptr) object *ptr;{ call_or_link_closure(VV[99],(void **)(void *)&Lnk99,(void **)(void *)&Lclptr99);} /* METHOD-SPECIALIZERS */
static void LnkT98(ptr) object *ptr;{ call_or_link_closure(VV[98],(void **)(void *)&Lnk98,(void **)(void *)&Lclptr98);} /* METHOD-LAMBDA-LIST */
static void LnkT64(){ call_or_link(VV[64],(void **)(void *)&Lnk64);} /* LISP METHOD slot READER */
static void LnkT95(){ call_or_link(VV[95],(void **)(void *)&Lnk95);} /* PACKAGE-SIZE */
static void LnkT94(ptr) object *ptr;{ call_or_link_closure(VV[94],(void **)(void *)&Lnk94,(void **)(void *)&Lclptr94);} /* SPECIALIZER-DIRECT-METHODS */
static void LnkT93(ptr) object *ptr;{ call_or_link_closure(VV[93],(void **)(void *)&Lnk93,(void **)(void *)&Lclptr93);} /* CLASS-PRECEDENCE-LIST */
static void LnkT92(ptr) object *ptr;{ call_or_link_closure(VV[92],(void **)(void *)&Lnk92,(void **)(void *)&Lclptr92);} /* CLASS-DIRECT-SUBCLASSES */
static void LnkT91(ptr) object *ptr;{ call_or_link_closure(VV[91],(void **)(void *)&Lnk91,(void **)(void *)&Lclptr91);} /* CLASS-DIRECT-SUPERCLASSES */
static object  LnkTLI90(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[90],(void **)(void *)&LnkLI90,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT89(ptr) object *ptr;{ call_or_link_closure(VV[89],(void **)(void *)&Lnk89,(void **)(void *)&Lclptr89);} /* CLASS-NAME */
static void LnkT88(){ call_or_link(VV[88],(void **)(void *)&Lnk88);} /* TYPECASE-ERROR-STRING */
static object  LnkTLI87(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[87],(void **)(void *)&LnkLI87,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT86(){ call_or_link(VV[86],(void **)(void *)&Lnk86);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT85(){ call_or_link(VV[85],(void **)(void *)&Lnk85);} /* STRUCTURE-SUBTYPE-P */
static void LnkT84(ptr) object *ptr;{ call_or_link_closure(VV[84],(void **)(void *)&Lnk84,(void **)(void *)&Lclptr84);} /* METHOD-FUNCTION */
static void LnkT83(ptr) object *ptr;{ call_or_link_closure(VV[83],(void **)(void *)&Lnk83,(void **)(void *)&Lclptr83);} /* METHOD-FAST-FUNCTION */
static object  LnkTLI82(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[82],(void **)(void *)&LnkLI82,1,first,ap);va_end(ap);return V1;} /* UNPARSE-SPECIALIZERS */
static void LnkT81(ptr) object *ptr;{ call_or_link_closure(VV[81],(void **)(void *)&Lnk81,(void **)(void *)&Lclptr81);} /* METHOD-QUALIFIERS */
static void LnkT80(ptr) object *ptr;{ call_or_link_closure(VV[80],(void **)(void *)&Lnk80,(void **)(void *)&Lclptr80);} /* GENERIC-FUNCTION-METHODS */
static void LnkT79(ptr) object *ptr;{ call_or_link_closure(VV[79],(void **)(void *)&Lnk79,(void **)(void *)&Lclptr79);} /* GENERIC-FUNCTION-PRETTY-ARGLIST */
static void LnkT78(ptr) object *ptr;{ call_or_link_closure(VV[78],(void **)(void *)&Lnk78,(void **)(void *)&Lclptr78);} /* CLASS-SLOTS */
static void LnkT77(){ call_or_link(VV[77],(void **)(void *)&Lnk77);} /* SLOT-VALUE-OR-DEFAULT */
static void LnkT74(ptr) object *ptr;{ call_or_link_closure(VV[74],(void **)(void *)&Lnk74,(void **)(void *)&Lclptr74);} /* SLOT-DEFINITION-ALLOCATION */
static void LnkT73(ptr) object *ptr;{ call_or_link_closure(VV[73],(void **)(void *)&Lnk73,(void **)(void *)&Lclptr73);} /* SLOT-DEFINITION-NAME */
static void LnkT72(ptr) object *ptr;{ call_or_link_closure(VV[72],(void **)(void *)&Lnk72,(void **)(void *)&Lclptr72);} /* SLOTS-TO-INSPECT */
static object  LnkTLI71(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[71],(void **)(void *)&LnkLI71,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI70(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[70],(void **)(void *)&LnkLI70,2,first,ap);va_end(ap);return V1;} /* DESCRIBE-PACKAGE */
static void LnkT0(ptr) object *ptr;{ call_or_link_closure(VV[0],(void **)(void *)&Lnk0,(void **)(void *)&Lclptr0);} /* DESCRIBE-OBJECT */
static void LnkT69(){ call_or_link(VV[69],(void **)(void *)&Lnk69);} /* LOAD-DEFGENERIC */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

