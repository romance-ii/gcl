
#include "cmpinclude.h"
#include "pcl_std_class.h"
void init_pcl_std_class(){do_init(VV);}
/*	function definition for (FAST-METHOD SLOT-ACCESSOR-FUNCTION (EFFECTIVE-SLOT-DEFINITION T))	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	{object V1;
	object V2;
	register object V3;
	object V4;
	check_arg(4);
	V1=(base[0]);
	V2=(base[1]);
	V3=(base[2]);
	V4=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V6= (V4);
	if((V6!= VV[168]))goto T4;
	base[4]= (V3);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk169)(Lclptr169);
	return;
	goto T4;
T4:;
	if((V6!= VV[170]))goto T6;
	base[4]= (V3);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk171)(Lclptr171);
	return;
	goto T6;
T6:;
	if((V6!= VV[172]))goto T8;
	base[4]= (V3);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk173)(Lclptr173);
	return;
	goto T8;
T8:;
	FEerror("The ECASE key value ~s is illegal.",1,V6);
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	function definition for (FAST-METHOD (SETF SLOT-ACCESSOR-FUNCTION) (T EFFECTIVE-SLOT-DEFINITION T))	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{object V7;
	object V8;
	object V9;
	register object V10;
	object V11;
	check_arg(5);
	V7=(base[0]);
	V8=(base[1]);
	V9=(base[2]);
	V10=(base[3]);
	V11=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V13= (V11);
	if((V13!= VV[168]))goto T13;
	base[5]= ({object _tmp=get(VV[169],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[169])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[169])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[6]= V9;
	base[7]= V10;
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T13;
T13:;
	if((V13!= VV[170]))goto T17;
	base[5]= ({object _tmp=get(VV[171],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[171])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[171])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[6]= V9;
	base[7]= V10;
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T17;
T17:;
	if((V13!= VV[172]))goto T21;
	base[5]= ({object _tmp=get(VV[173],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[173])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[173])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[6]= V9;
	base[7]= V10;
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T21;
T21:;
	FEerror("The ECASE key value ~s is illegal.",1,V13);
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;}
	}
}
/*	local entry for function (FAST-METHOD SLOT-ACCESSOR-STD-P (EFFECTIVE-SLOT-DEFINITION T))	*/

static object LI3(V24,V25,V26,V27)

object V24;object V25;register object V26;object V27;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V29;
	object V30;
	V29= CMPcar((V24));
	V30= CMPcdr((V24));
	{object V31;
	if(type_of(V26)==t_structure){
	goto T35;}
	goto T33;
	goto T35;
T35:;
	if(!(((V26)->str.str_def)==(VV[0]))){
	goto T33;}
	V31= STREF(object,(V26),4);
	goto T31;
	goto T33;
T33:;{object V33;
	V33= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V26);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V34= vs_base[0];
	if(!((V33)==(CMPcar(V34)))){
	goto T38;}}
	V31= CMPcar(((V26))->cc.cc_turbo[12]);
	goto T31;
	goto T38;
T38:;
	V31= Cnil;
	goto T31;
T31:;
	{long V35;
	{register object V36;
	V36= ((V29))->v.v_self[1];
	if(!(type_of(V36)==t_fixnum)){
	goto T49;}
	V36= ((V31))->v.v_self[fix((V36))];
	goto T47;
	goto T49;
T49:;
	V36= VV[3];
	goto T47;
T47:;
	if(!(((V36))==(VV[3]))){
	goto T52;}
	base[0]= (V26);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk176)(Lclptr176);
	vs_top=sup;
	V35= fix(vs_base[0]);
	goto T44;
	goto T52;
T52:;
	V35= fix((V36));}
	goto T44;
T44:;
	if(!(((V27))==(VV[4]))){
	goto T56;}
	{object V38 = ((7)==(V35)?Ct:Cnil);
	VMR3(V38)}
	goto T56;
T56:;
	{long V39;
	{object V40= (V27);
	if((V40!= VV[168]))goto T59;
	V39= 1;
	goto T58;
	goto T59;
T59:;
	if((V40!= VV[170]))goto T60;
	V39= 2;
	goto T58;
	goto T60;
T60:;
	if((V40!= VV[172]))goto T61;
	V39= 4;
	goto T58;
	goto T61;
T61:;
	FEerror("The ECASE key value ~s is illegal.",1,V40);
	V39= fix(Cnil);
	goto T58;}
	goto T58;
T58:;
	{object V41 = (((((long)((V39) & (V35)))==0?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR3(V41)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD (SETF SLOT-ACCESSOR-STD-P) (T EFFECTIVE-SLOT-DEFINITION T))	*/

static object LI4(V47,V48,V49,V50,V51)

object V47;object V48;object V49;register object V50;object V51;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{object V53;
	object V54;
	V53= CMPcar((V47));
	V54= CMPcdr((V47));
	{object V55;
	if(type_of(V50)==t_structure){
	goto T72;}
	goto T70;
	goto T72;
T72:;
	if(!(((V50)->str.str_def)==(VV[5]))){
	goto T70;}
	V55= STREF(object,(V50),4);
	goto T68;
	goto T70;
T70:;{object V57;
	V57= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V50);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V58= vs_base[0];
	if(!((V57)==(CMPcar(V58)))){
	goto T75;}}
	V55= CMPcar(((V50))->cc.cc_turbo[12]);
	goto T68;
	goto T75;
T75:;
	V55= Cnil;
	goto T68;
T68:;
	{long V59;
	long V60;
	{object V61= (V51);
	if((V61!= VV[168]))goto T83;
	V59= 1;
	goto T82;
	goto T83;
T83:;
	if((V61!= VV[170]))goto T84;
	V59= 2;
	goto T82;
	goto T84;
T84:;
	if((V61!= VV[172]))goto T85;
	V59= 4;
	goto T82;
	goto T85;
T85:;
	FEerror("The ECASE key value ~s is illegal.",1,V61);
	V59= fix(Cnil);
	goto T82;}
	goto T82;
T82:;
	{register object V62;
	V62= ((V53))->v.v_self[1];
	if(!(type_of(V62)==t_fixnum)){
	goto T91;}
	V62= ((V55))->v.v_self[fix((V62))];
	goto T89;
	goto T91;
T91:;
	V62= VV[3];
	goto T89;
T89:;
	if(!(((V62))==(VV[3]))){
	goto T94;}
	base[0]= (V50);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk176)(Lclptr176);
	vs_top=sup;
	V60= fix(vs_base[0]);
	goto T86;
	goto T94;
T94:;
	V60= fix((V62));}
	goto T86;
T86:;
	{object V64;
	if(((V49))==Cnil){
	goto T99;}
	V64= CMPmake_fixnum((long)((V59) | (V60)));
	goto T97;
	goto T99;
T99:;
	V64= CMPmake_fixnum((long)(((long)(~(V59))) & (V60)));
	goto T97;
T97:;
	{object V65;
	V65= ((V53))->v.v_self[1];
	if(!(type_of(V65)==t_fixnum)){
	goto T103;}
	(void)(((V55))->v.v_self[fix((V65))]= ((V64)));
	goto T81;
	goto T103;
T103:;
	base[0]= (V64);
	base[1]= (V50);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)(Lclptr177);
	vs_top=sup;}}}
	goto T81;
T81:;
	{object V67 = (V49);
	VMR4(V67)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD INITIALIZE-INTERNAL-SLOT-FUNCTIONS (EFFECTIVE-SLOT-DEFINITION))	*/

static object LI5(V71,V72,V73)

object V71;object V72;register object V73;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V75;
	object V76;
	V75= CMPcar((V71));
	V76= CMPcdr((V71));
	{object V77;
	if(type_of(V73)==t_structure){
	goto T117;}
	goto T115;
	goto T117;
T117:;
	if(!(((V73)->str.str_def)==(VV[6]))){
	goto T115;}
	V77= STREF(object,(V73),4);
	goto T113;
	goto T115;
T115:;{object V79;
	V79= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V73);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V80= vs_base[0];
	if(!((V79)==(CMPcar(V80)))){
	goto T120;}}
	V77= CMPcar(((V73))->cc.cc_turbo[12]);
	goto T113;
	goto T120;
T120:;
	V77= Cnil;
	goto T113;
T113:;
	{object V81;
	object V82;
	{register object V83;
	V83= ((V75))->v.v_self[2];
	if(!(type_of(V83)==t_fixnum)){
	goto T131;}
	V83= ((V77))->v.v_self[fix((V83))];
	goto T129;
	goto T131;
T131:;
	V83= VV[3];
	goto T129;
T129:;
	if(!(((V83))==(VV[3]))){
	goto T134;}
	base[2]= (V73);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk178)(Lclptr178);
	vs_top=sup;
	V81= vs_base[0];
	goto T126;
	goto T134;
T134:;
	V81= (V83);}
	goto T126;
T126:;
	{register object V85;
	V85= ((V75))->v.v_self[1];
	if(!(type_of(V85)==t_fixnum)){
	goto T142;}
	V85= ((V77))->v.v_self[fix((V85))];
	goto T140;
	goto T142;
T142:;
	V85= VV[3];
	goto T140;
T140:;
	if(!(((V85))==(VV[3]))){
	goto T145;}
	base[2]= (V73);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk179)(Lclptr179);
	vs_top=sup;
	V82= vs_base[0];
	goto T137;
	goto T145;
T145:;
	V82= (V85);}
	goto T137;
T137:;
	{object V87;{object V88;
	base[2]= (V81);
	base[3]= (VV[7]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V88= vs_base[0];
	if(V88==Cnil)goto T150;
	V87= V88;
	goto T149;
	goto T150;
T150:;}
	{object V90;
	object V91;
	V90= (VV[7]->s.s_dbind);
	base[3]= VV[8];
	base[4]= VV[9];
	base[5]= VV[10];
	base[6]= small_fixnum(5);
	vs_top=(vs_base=base+3)+4;
	Lmake_hash_table();
	vs_top=sup;
	V91= vs_base[0];
	base[3]= V81;
	base[4]= (V90);
	base[5]= (V91);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;
	V87= vs_base[0];}
	goto T149;
T149:;
	base[2]= V82;
	base[3]= V87;
	base[4]= V73;
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	vs_top=sup;}
	{register object V95;
	register object V96;
	V95= VV[11];
	V96= CMPcar((V95));
	goto T170;
T170:;
	if(!(((V95))==Cnil)){
	goto T171;}
	goto T166;
	goto T171;
T171:;
	{register object V97;
	register object V98;
	{object V99= (V96);
	if((V99!= VV[168]))goto T177;
	V97= VV[12];
	goto T176;
	goto T177;
T177:;
	if((V99!= VV[170]))goto T178;
	V97= VV[13];
	goto T176;
	goto T178;
T178:;
	if((V99!= VV[172]))goto T179;
	V97= VV[14];
	goto T176;
	goto T179;
T179:;
	FEerror("The ECASE key value ~s is illegal.",1,V99);
	V97= Cnil;
	goto T176;}
	goto T176;
T176:;
	V98= (*(LnkLI180))((V97));
	base[5]= (V73);
	base[6]= (V96);
	base[7]= (V98);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk181)(Lclptr181);
	vs_top=sup;}
	V95= CMPcdr((V95));
	V96= CMPcar((V95));
	goto T170;}
	goto T166;
T166:;
	{object V100 = (VFUN_NARGS=1,(*(LnkLI182))((V81)));
	VMR5(V100)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOT-ACCESSOR-INFO (EFFECTIVE-SLOT-DEFINITION T T))	*/

static object LI6(V106,V107,V108,V109,V110)

object V106;object V107;register object V108;register object V109;object V110;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{object V112;
	object V113;
	V112= CMPcar((V106));
	V113= CMPcdr((V106));
	{object V114;
	if(type_of(V108)==t_structure){
	goto T199;}
	goto T197;
	goto T199;
T199:;
	if(!(((V108)->str.str_def)==(VV[15]))){
	goto T197;}
	V114= STREF(object,(V108),4);
	goto T195;
	goto T197;
T197:;{object V116;
	V116= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V108);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V117= vs_base[0];
	if(!((V116)==(CMPcar(V117)))){
	goto T202;}}
	V114= CMPcar(((V108))->cc.cc_turbo[12]);
	goto T195;
	goto T202;
T202:;
	V114= Cnil;
	goto T195;
T195:;
	{object V118;
	register object V119;
	object V120;
	object V121;
	{register object V122;
	V122= ((V112))->v.v_self[2];
	if(!(type_of(V122)==t_fixnum)){
	goto T213;}
	V122= ((V114))->v.v_self[fix((V122))];
	goto T211;
	goto T213;
T213:;
	V122= VV[3];
	goto T211;
T211:;
	if(!(((V122))==(VV[3]))){
	goto T216;}
	base[4]= (V108);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk178)(Lclptr178);
	vs_top=sup;
	V118= vs_base[0];
	goto T208;
	goto T216;
T216:;
	V118= (V122);}
	goto T208;
T208:;
	{register object V124;
	V124= ((V112))->v.v_self[1];
	if(!(type_of(V124)==t_fixnum)){
	goto T224;}
	V124= ((V114))->v.v_self[fix((V124))];
	goto T222;
	goto T224;
T224:;
	V124= VV[3];
	goto T222;
T222:;
	if(!(((V124))==(VV[3]))){
	goto T227;}
	base[4]= (V108);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk179)(Lclptr179);
	vs_top=sup;
	V119= vs_base[0];
	goto T219;
	goto T227;
T227:;
	V119= (V124);}
	goto T219;
T219:;
	V120= (*(LnkLI183))((V119),(V118));
	if((V120)==Cnil){
	V121= Cnil;
	goto T231;}
	base[4]= (V120);
	base[5]= VV[4];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk184)(Lclptr184);
	vs_top=sup;
	V121= vs_base[0];
	goto T231;
T231:;
	{object V126;
	object V127;
	if(!(((VV[16]->s.s_dbind))==(VV[17]))){
	goto T237;}
	base[4]= (V110);
	base[5]= (V109);
	base[6]= (V119);
	base[7]= (V108);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk185)();
	goto T235;
	goto T237;
T237:;
	base[4]= (V119);
	base[5]= (V108);
	base[6]= (V109);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk186)();
	goto T235;
T235:;
	if(vs_base>=vs_top){vs_top=sup;goto T246;}
	V126= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T247;}
	V127= vs_base[0];
	vs_top=sup;
	goto T248;
	goto T246;
T246:;
	V126= Cnil;
	goto T247;
T247:;
	V127= Cnil;
	goto T248;
T248:;
	base[4]= (V126);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk187)();
	vs_top=sup;
	V131= ({object _tmp=get(VV[184],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[184])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[184])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V132 = V127;
	V133 = V108;
	V134 = V109;
	(void)((
	V135 = V131,
	(type_of(V135) == t_sfun ?(*((V135)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V135)==t_vfun) ?
	(*((V135)->sfn.sfn_self)):
	(fcall.fun=(V135),fcalln))(V132,V133,V134)));
	V139= ({object _tmp=get(VV[188],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[188])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[188])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V140 = V126;
	V141 = V108;
	V142 = V109;
	(void)((
	V143 = V139,
	(type_of(V143) == t_sfun ?(*((V143)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V143)==t_vfun) ?
	(*((V143)->sfn.sfn_self)):
	(fcall.fun=(V143),fcalln))(V140,V141,V142)));}
	if(((V120))==Cnil){
	goto T255;}
	V144 = (V121);
	base[4]= (V108);
	base[5]= VV[4];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk184)(Lclptr184);
	vs_top=sup;
	V145= vs_base[0];
	if((V144)==(V145)){
	goto T255;}
	{object V146;
	V146= make_cons((V119),(V118));
	(VV[18]->s.s_dbind)= make_cons((V146),(VV[18]->s.s_dbind));
	{object V147 = (VV[18]->s.s_dbind);
	VMR6(V147)}}
	goto T255;
T255:;
	{object V148 = Cnil;
	VMR6(V148)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-DEFINITION-ALLOCATION (STRUCTURE-SLOT-DEFINITION))	*/

static object LI7(V152,V153,V154)

object V152;object V153;object V154;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V156 = VV[19];
	VMR7(V156)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :AFTER (DOCUMENTATION-MIXIN T))	*/

static object LI8(V162,V163,V164,V165,V166)

object V162;object V163;object V164;object V165;object V166;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V168;
	object V170;
	V168= (*(LnkLI189))(VV[20],V166);
	if(!(type_of((V168))==t_cons)){
	goto T272;}
	V170= CMPcar((V168));
	goto T270;
	goto T272;
T272:;
	V170= Cnil;
	goto T270;
T270:;
	if((V168)==Cnil){
	goto T276;}
	base[2]= ({object _tmp=get(VV[190],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[190])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[190])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[3]= V170;
	base[4]= V164;
	base[5]= VV[21];
	vs_top=(vs_base=base+3)+3;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	{object V174 = vs_base[0];
	VMR8(V174)}
	goto T276;
T276:;
	{object V175 = Cnil;
	VMR8(V175)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD DOCUMENTATION (T))	*/

static object LI9(V180,V181,V182,V183)

object V180;object V181;object V182;object V183;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{register object V184;
	object V185;
	V184= (V183);
	if(((V184))==Cnil){
	goto T287;}
	{object V186;
	V186= CMPcar((V184));
	V184= CMPcdr((V184));
	V185= (V186);
	goto T285;}
	goto T287;
T287:;
	V185= Cnil;
	goto T285;
T285:;
	base[1]= (V182);
	base[2]= (V185);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk191)();
	vs_top=sup;
	{object V187 = vs_base[0];
	VMR9(V187)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD (SETF DOCUMENTATION) (T T))	*/

static object LI10(V193,V194,V195,V196,V197)

object V193;object V194;object V195;object V196;object V197;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{register object V198;
	object V199;
	V198= (V197);
	if(((V198))==Cnil){
	goto T300;}
	{object V200;
	V200= CMPcar((V198));
	V198= CMPcdr((V198));
	V199= (V200);
	goto T298;}
	goto T300;
T300:;
	V199= Cnil;
	goto T298;
T298:;
	base[1]= VV[22];
	base[2]= (V196);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	{object V201 = vs_base[0];
	VMR10(V201)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD DOCUMENTATION (DOCUMENTATION-MIXIN))	*/

static object LI11(V206,V207,V208,V209)

object V206;object V207;object V208;object V209;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{register object V210;
	object V211;
	V210= (V209);
	if(((V210))==Cnil){
	goto T313;}
	{object V212;
	V212= CMPcar((V210));
	V210= CMPcdr((V210));
	V211= (V212);
	goto T311;}
	goto T313;
T313:;
	V211= Cnil;
	goto T311;
T311:;
	{object V213 = (*(LnkLI190))((V208),VV[21]);
	VMR11(V213)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD (SETF DOCUMENTATION) (T DOCUMENTATION-MIXIN))	*/

static object LI12(V219,V220,V221,V222,V223)

object V219;object V220;object V221;object V222;object V223;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{register object V224;
	object V225;
	V224= (V223);
	if(((V224))==Cnil){
	goto T324;}
	{object V226;
	V226= CMPcar((V224));
	V224= CMPcdr((V224));
	V225= (V226);
	goto T322;}
	goto T324;
T324:;
	V225= Cnil;
	goto T322;
T322:;
	base[1]= ({object _tmp=get(VV[190],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[190])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[190])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[2]= V221;
	base[3]= V222;
	base[4]= VV[21];
	vs_top=(vs_base=base+2)+3;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	{object V230 = vs_base[0];
	VMR12(V230)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD DOCUMENTATION (STANDARD-SLOT-DEFINITION))	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V231;
	object V232;
	register object V233;
	object V234;
	check_arg(4);
	V231=(base[0]);
	V232=(base[1]);
	V233=(base[2]);
	V234=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V235;
	object V236;
	V235= (V234);
	if(((V235))==Cnil){
	goto T339;}
	{object V237;
	V237= CMPcar((V235));
	V235= CMPcdr((V235));
	V236= (V237);
	goto T337;}
	goto T339;
T339:;
	V236= Cnil;
	goto T337;
T337:;
	{object V238;
	object V239;
	V238= CMPcar((V231));
	V239= CMPcdr((V231));
	{object V240;
	if(type_of(V233)==t_structure){
	goto T352;}
	goto T350;
	goto T352;
T352:;
	if(!(((V233)->str.str_def)==(VV[23]))){
	goto T350;}
	V240= STREF(object,(V233),4);
	goto T348;
	goto T350;
T350:;{object V242;
	V242= (VV[2]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V233);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V243= vs_base[0];
	if(!((V242)==(CMPcar(V243)))){
	goto T355;}}
	V240= CMPcar(((V233))->cc.cc_turbo[12]);
	goto T348;
	goto T355;
T355:;
	V240= Cnil;
	goto T348;
T348:;
	{register object V244;
	V244= ((V238))->v.v_self[1];
	if(!(type_of(V244)==t_fixnum)){
	goto T365;}
	V244= ((V240))->v.v_self[fix((V244))];
	goto T363;
	goto T365;
T365:;
	V244= VV[3];
	goto T363;
T363:;
	if(!(((V244))==(VV[3]))){
	goto T368;}
	base[5]= (V233);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk192)(Lclptr192);
	return;
	goto T368;
T368:;
	base[5]= (V244);
	vs_top=(vs_base=base+5)+1;
	return;}}}}
	}
}
/*	function definition for (FAST-METHOD (SETF DOCUMENTATION) (T STANDARD-SLOT-DEFINITION))	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V246;
	object V247;
	object V248;
	register object V249;
	object V250;
	check_arg(5);
	V246=(base[0]);
	V247=(base[1]);
	V248=(base[2]);
	V249=(base[3]);
	V250=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V251;
	object V252;
	V251= (V250);
	if(((V251))==Cnil){
	goto T376;}
	{object V253;
	V253= CMPcar((V251));
	V251= CMPcdr((V251));
	V252= (V253);
	goto T374;}
	goto T376;
T376:;
	V252= Cnil;
	goto T374;
T374:;
	{object V254;
	object V255;
	V254= CMPcar((V246));
	V255= CMPcdr((V246));
	{object V256;
	if(type_of(V249)==t_structure){
	goto T389;}
	goto T387;
	goto T389;
T389:;
	if(!(((V249)->str.str_def)==(VV[24]))){
	goto T387;}
	V256= STREF(object,(V249),4);
	goto T385;
	goto T387;
T387:;{object V258;
	V258= (VV[2]->s.s_dbind);
	base[6]= small_fixnum(14);
	base[7]= (V249);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V259= vs_base[0];
	if(!((V258)==(CMPcar(V259)))){
	goto T392;}}
	V256= CMPcar(((V249))->cc.cc_turbo[12]);
	goto T385;
	goto T392;
T392:;
	V256= Cnil;
	goto T385;
T385:;
	{object V261;
	V261= ((V254))->v.v_self[1];
	if(!(type_of(V261)==t_fixnum)){
	goto T400;}
	base[6]= ((V256))->v.v_self[fix((V261))]= (V248);
	vs_top=(vs_base=base+6)+1;
	return;
	goto T400;
T400:;
	base[6]= V248;
	base[7]= (V249);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk193)(Lclptr193);
	return;}}}}
	}
}
/*	local entry for function (FAST-METHOD CLASS-FINALIZED-P (PCL-CLASS))	*/

static object LI15(V266,V267,V268)

object V266;object V267;register object V268;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V270;
	object V271;
	V270= CMPcar((V266));
	V271= CMPcdr((V266));
	{object V272;
	if(type_of(V268)==t_structure){
	goto T414;}
	goto T412;
	goto T414;
T414:;
	if(!(((V268)->str.str_def)==(VV[25]))){
	goto T412;}
	V272= STREF(object,(V268),4);
	goto T410;
	goto T412;
T412:;{object V274;
	V274= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V268);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V275= vs_base[0];
	if(!((V274)==(CMPcar(V275)))){
	goto T417;}}
	V272= CMPcar(((V268))->cc.cc_turbo[12]);
	goto T410;
	goto T417;
T417:;
	V272= Cnil;
	goto T410;
T410:;
	{register object V278;
	V278= ((V270))->v.v_self[1];
	if(!(type_of(V278)==t_fixnum)){
	goto T429;}
	V278= ((V272))->v.v_self[fix((V278))];
	goto T427;
	goto T429;
T429:;
	V278= VV[3];
	goto T427;
T427:;
	if(!(((V278))==(VV[3]))){
	goto T432;}
	base[0]= (V268);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk194)(Lclptr194);
	vs_top=sup;
	V277= vs_base[0];
	goto T424;
	goto T432;
T432:;
	V277= (V278);}
	goto T424;
T424:;
	{object V280 = ((((V277)==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR15(V280)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD CLASS-PROTOTYPE (STD-CLASS))	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V281;
	object V282;
	register object V283;
	check_arg(3);
	V281=(base[0]);
	V282=(base[1]);
	V283=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V285;
	object V286;
	V285= CMPcar((V281));
	V286= CMPcdr((V281));
	{object V287;
	if(type_of(V283)==t_structure){
	goto T445;}
	goto T443;
	goto T445;
T445:;
	if(!(((V283)->str.str_def)==(VV[26]))){
	goto T443;}
	V287= STREF(object,(V283),4);
	goto T441;
	goto T443;
T443:;{object V289;
	V289= (VV[2]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V283);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V290= vs_base[0];
	if(!((V289)==(CMPcar(V290)))){
	goto T448;}}
	V287= CMPcar(((V283))->cc.cc_turbo[12]);
	goto T441;
	goto T448;
T448:;
	V287= Cnil;
	goto T441;
T441:;
	{object V292;
	{register object V293;
	V293= ((V285))->v.v_self[1];
	if(!(type_of(V293)==t_fixnum)){
	goto T460;}
	V293= ((V287))->v.v_self[fix((V293))];
	goto T458;
	goto T460;
T460:;
	V293= VV[3];
	goto T458;
T458:;
	if(!(((V293))==(VV[3]))){
	goto T463;}
	base[3]= (V283);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk195)(Lclptr195);
	vs_top=sup;
	V292= vs_base[0];
	goto T455;
	goto T463;
T463:;
	V292= (V293);}
	goto T455;
T455:;
	if(((V292))==Cnil){
	goto T467;}
	base[3]= (V292);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T467;
T467:;
	{object V295;
	base[3]= (V283);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk196)(Lclptr196);
	vs_top=sup;
	V295= vs_base[0];
	{object V296;
	V296= ((V285))->v.v_self[1];
	if(!(type_of(V296)==t_fixnum)){
	goto T473;}
	base[3]= ((V287))->v.v_self[fix((V296))]= ((V295));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T473;
T473:;
	base[3]= (V295);
	base[4]= (V283);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk197)(Lclptr197);
	return;}}}}}
	}
}
/*	function definition for (FAST-METHOD CLASS-PROTOTYPE (STRUCTURE-CLASS))	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{object V298;
	object V299;
	register object V300;
	check_arg(3);
	V298=(base[0]);
	V299=(base[1]);
	V300=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V302;
	object V303;
	V302= CMPcar((V298));
	V303= CMPcdr((V298));
	{register object V304;
	if(type_of(V300)==t_structure){
	goto T487;}
	goto T485;
	goto T487;
T487:;
	if(!(((V300)->str.str_def)==(VV[27]))){
	goto T485;}
	V304= STREF(object,(V300),4);
	goto T483;
	goto T485;
T485:;{object V306;
	V306= (VV[2]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V300);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V307= vs_base[0];
	if(!((V306)==(CMPcar(V307)))){
	goto T490;}}
	V304= CMPcar(((V300))->cc.cc_turbo[12]);
	goto T483;
	goto T490;
T490:;
	V304= Cnil;
	goto T483;
T483:;
	{object V309;
	{register object V310;
	V310= ((V302))->v.v_self[2];
	if(!(type_of(V310)==t_fixnum)){
	goto T502;}
	V310= ((V304))->v.v_self[fix((V310))];
	goto T500;
	goto T502;
T502:;
	V310= VV[3];
	goto T500;
T500:;
	if(!(((V310))==(VV[3]))){
	goto T505;}
	base[3]= (V300);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk195)(Lclptr195);
	vs_top=sup;
	V309= vs_base[0];
	goto T497;
	goto T505;
T505:;
	V309= (V310);}
	goto T497;
T497:;
	if(((V309))==Cnil){
	goto T509;}
	base[3]= (V309);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T509;
T509:;
	{object V312;
	{register object V313;
	V313= ((V302))->v.v_self[1];
	if(!(type_of(V313)==t_fixnum)){
	goto T519;}
	V313= ((V304))->v.v_self[fix((V313))];
	goto T517;
	goto T519;
T519:;
	V313= VV[3];
	goto T517;
T517:;
	if(!(((V313))==(VV[3]))){
	goto T522;}
	base[3]= (V300);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk198)(Lclptr198);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T513;}
	goto T514;
	goto T522;
T522:;
	if(((V313))==Cnil){
	goto T513;}}
	goto T514;
T514:;
	base[3]= (V300);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk196)(Lclptr196);
	vs_top=sup;
	V312= vs_base[0];
	goto T511;
	goto T513;
T513:;
	{register object V316;
	V316= ((V302))->v.v_self[3];
	if(!(type_of(V316)==t_fixnum)){
	goto T531;}
	V316= ((V304))->v.v_self[fix((V316))];
	goto T529;
	goto T531;
T531:;
	V316= VV[3];
	goto T529;
T529:;
	if(!(((V316))==(VV[3]))){
	goto T534;}
	base[3]= (V300);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk194)(Lclptr194);
	vs_top=sup;
	V315= vs_base[0];
	goto T526;
	goto T534;
T534:;
	V315= (V316);}
	goto T526;
T526:;
	V312= (VFUN_NARGS=1,(*(LnkLI199))(V315));
	goto T511;
T511:;
	{object V318;
	V318= ((V302))->v.v_self[2];
	if(!(type_of(V318)==t_fixnum)){
	goto T539;}
	base[3]= ((V304))->v.v_self[fix((V318))]= ((V312));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T539;
T539:;
	base[3]= (V312);
	base[4]= (V300);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk197)(Lclptr197);
	return;}}}}}
	}
}
/*	local entry for function (FAST-METHOD CLASS-DIRECT-DEFAULT-INITARGS (SLOT-CLASS))	*/

static object LI18(V323,V324,V325)

object V323;object V324;object V325;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V327 = (*(LnkLI190))((V325),VV[28]);
	VMR18(V327)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-DEFAULT-INITARGS (SLOT-CLASS))	*/

static object LI19(V331,V332,V333)

object V331;object V332;object V333;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V335 = (*(LnkLI190))((V333),VV[29]);
	VMR19(V335)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-CONSTRUCTORS (SLOT-CLASS))	*/

static object LI20(V339,V340,V341)

object V339;object V340;object V341;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V343 = (*(LnkLI190))((V341),VV[30]);
	VMR20(V343)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-SLOT-CELLS (STD-CLASS))	*/

static object LI21(V347,V348,V349)

object V347;object V348;object V349;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{object V351 = (*(LnkLI190))((V349),VV[31]);
	VMR21(V351)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD ADD-DIRECT-SUBCLASS (CLASS CLASS))	*/

static object LI22(V356,V357,V358,V359)

object V356;object V357;register object V358;object V359;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{object V361;
	object V362;
	V361= CMPcar((V356));
	V362= CMPcdr((V356));
	{object V363;
	if(type_of(V358)==t_structure){
	goto T565;}
	goto T563;
	goto T565;
T565:;
	if(!(((V358)->str.str_def)==(VV[32]))){
	goto T563;}
	V363= STREF(object,(V358),4);
	goto T561;
	goto T563;
T563:;{object V365;
	V365= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V358);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V366= vs_base[0];
	if(!((V365)==(CMPcar(V366)))){
	goto T568;}}
	V363= CMPcar(((V358))->cc.cc_turbo[12]);
	goto T561;
	goto T568;
T568:;
	V363= Cnil;
	goto T561;
T561:;
	{object V369;
	base[0]= V359;
	{register object V370;
	V370= ((V361))->v.v_self[1];
	if(!(type_of(V370)==t_fixnum)){
	goto T584;}
	V370= ((V363))->v.v_self[fix((V370))];
	goto T582;
	goto T584;
T584:;
	V370= VV[3];
	goto T582;
T582:;
	if(!(((V370))==(VV[3]))){
	goto T587;}
	base[2]= (V358);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk200)(Lclptr200);
	vs_top=sup;
	base[1]= vs_base[0];
	goto T579;
	goto T587;
T587:;
	base[1]= (V370);}
	goto T579;
T579:;
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	V369= vs_base[0];
	{object V372;
	V372= ((V361))->v.v_self[1];
	if(!(type_of(V372)==t_fixnum)){
	goto T592;}
	(void)(((V363))->v.v_self[fix((V372))]= ((V369)));
	goto T576;
	goto T592;
T592:;
	base[0]= (V369);
	base[1]= (V358);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk201)(Lclptr201);
	vs_top=sup;}}
	goto T576;
T576:;
	{object V374 = (V359);
	VMR22(V374)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-DIRECT-SUBCLASS (CLASS CLASS))	*/

static object LI23(V379,V380,V381,V382)

object V379;object V380;register object V381;object V382;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	{object V384;
	object V385;
	V384= CMPcar((V379));
	V385= CMPcdr((V379));
	{object V386;
	if(type_of(V381)==t_structure){
	goto T606;}
	goto T604;
	goto T606;
T606:;
	if(!(((V381)->str.str_def)==(VV[33]))){
	goto T604;}
	V386= STREF(object,(V381),4);
	goto T602;
	goto T604;
T604:;{object V388;
	V388= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V381);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V389= vs_base[0];
	if(!((V388)==(CMPcar(V389)))){
	goto T609;}}
	V386= CMPcar(((V381))->cc.cc_turbo[12]);
	goto T602;
	goto T609;
T609:;
	V386= Cnil;
	goto T602;
T602:;
	{object V391;
	base[0]= (V382);
	{register object V392;
	V392= ((V384))->v.v_self[1];
	if(!(type_of(V392)==t_fixnum)){
	goto T625;}
	V392= ((V386))->v.v_self[fix((V392))];
	goto T623;
	goto T625;
T625:;
	V392= VV[3];
	goto T623;
T623:;
	if(!(((V392))==(VV[3]))){
	goto T628;}
	base[2]= (V381);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk200)(Lclptr200);
	vs_top=sup;
	base[1]= vs_base[0];
	goto T620;
	goto T628;
T628:;
	base[1]= (V392);}
	goto T620;
T620:;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk95)();
	vs_top=sup;
	V391= vs_base[0];
	{object V394;
	V394= ((V384))->v.v_self[1];
	if(!(type_of(V394)==t_fixnum)){
	goto T633;}
	(void)(((V386))->v.v_self[fix((V394))]= ((V391)));
	goto T617;
	goto T633;
T633:;
	base[0]= (V391);
	base[1]= (V381);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk201)(Lclptr201);
	vs_top=sup;}}
	goto T617;
T617:;
	{object V396 = (V382);
	VMR23(V396)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD ADD-DIRECT-METHOD (CLASS METHOD))	*/

static object LI24(V401,V402,V403,V404)

object V401;object V402;register object V403;object V404;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{register object V406;
	object V407;
	V406= CMPcar((V401));
	V407= CMPcdr((V401));
	{object V408;
	if(type_of(V403)==t_structure){
	goto T647;}
	goto T645;
	goto T647;
T647:;
	if(!(((V403)->str.str_def)==(VV[34]))){
	goto T645;}
	V408= STREF(object,(V403),4);
	goto T643;
	goto T645;
T645:;{object V410;
	V410= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V403);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V411= vs_base[0];
	if(!((V410)==(CMPcar(V411)))){
	goto T650;}}
	V408= CMPcar(((V403))->cc.cc_turbo[12]);
	goto T643;
	goto T650;
T650:;
	V408= Cnil;
	goto T643;
T643:;
	{object V413;
	object V414;
	{register object V415;
	V415= ((V406))->v.v_self[1];
	if(!(type_of(V415)==t_fixnum)){
	goto T665;}
	V415= ((V408))->v.v_self[fix((V415))];
	goto T663;
	goto T665;
T665:;
	V415= VV[3];
	goto T663;
T663:;
	if(!(((V415))==(VV[3]))){
	goto T668;}
	base[2]= (V403);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk202)(Lclptr202);
	vs_top=sup;
	V413= vs_base[0];
	goto T660;
	goto T668;
T668:;
	V413= (V415);}
	goto T660;
T660:;
	base[2]= (V404);
	{register object V418;
	V418= ((V406))->v.v_self[1];
	if(!(type_of(V418)==t_fixnum)){
	goto T679;}
	V418= ((V408))->v.v_self[fix((V418))];
	goto T677;
	goto T679;
T679:;
	V418= VV[3];
	goto T677;
T677:;
	if(!(((V418))==(VV[3]))){
	goto T682;}
	base[4]= (V403);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk202)(Lclptr202);
	vs_top=sup;
	V417= vs_base[0];
	goto T674;
	goto T682;
T682:;
	V417= (V418);}
	goto T674;
T674:;
	base[3]= CMPcar(V417);
	vs_top=(vs_base=base+2)+2;
	Ladjoin();
	vs_top=sup;
	V414= vs_base[0];
	((V413))->c.c_car = (V414);}
	{object V420;
	{register object V422;
	V422= ((V406))->v.v_self[1];
	if(!(type_of(V422)==t_fixnum)){
	goto T691;}
	V422= ((V408))->v.v_self[fix((V422))];
	goto T689;
	goto T691;
T691:;
	V422= VV[3];
	goto T689;
T689:;
	if(!(((V422))==(VV[3]))){
	goto T694;}
	base[1]= (V403);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk202)(Lclptr202);
	vs_top=sup;
	V420= vs_base[0];
	goto T686;
	goto T694;
T694:;
	V420= (V422);}
	goto T686;
T686:;
	((V420))->c.c_cdr = Cnil;}
	{object V424 = (V404);
	VMR24(V424)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-DIRECT-METHOD (CLASS METHOD))	*/

static object LI25(V429,V430,V431,V432)

object V429;object V430;register object V431;object V432;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{register object V434;
	object V435;
	V434= CMPcar((V429));
	V435= CMPcdr((V429));
	{object V436;
	if(type_of(V431)==t_structure){
	goto T708;}
	goto T706;
	goto T708;
T708:;
	if(!(((V431)->str.str_def)==(VV[35]))){
	goto T706;}
	V436= STREF(object,(V431),4);
	goto T704;
	goto T706;
T706:;{object V438;
	V438= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V431);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V439= vs_base[0];
	if(!((V438)==(CMPcar(V439)))){
	goto T711;}}
	V436= CMPcar(((V431))->cc.cc_turbo[12]);
	goto T704;
	goto T711;
T711:;
	V436= Cnil;
	goto T704;
T704:;
	{object V441;
	object V442;
	{register object V443;
	V443= ((V434))->v.v_self[1];
	if(!(type_of(V443)==t_fixnum)){
	goto T726;}
	V443= ((V436))->v.v_self[fix((V443))];
	goto T724;
	goto T726;
T726:;
	V443= VV[3];
	goto T724;
T724:;
	if(!(((V443))==(VV[3]))){
	goto T729;}
	base[2]= (V431);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk202)(Lclptr202);
	vs_top=sup;
	V441= vs_base[0];
	goto T721;
	goto T729;
T729:;
	V441= (V443);}
	goto T721;
T721:;
	base[2]= (V432);
	{register object V446;
	V446= ((V434))->v.v_self[1];
	if(!(type_of(V446)==t_fixnum)){
	goto T740;}
	V446= ((V436))->v.v_self[fix((V446))];
	goto T738;
	goto T740;
T740:;
	V446= VV[3];
	goto T738;
T738:;
	if(!(((V446))==(VV[3]))){
	goto T743;}
	base[4]= (V431);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk202)(Lclptr202);
	vs_top=sup;
	V445= vs_base[0];
	goto T735;
	goto T743;
T743:;
	V445= (V446);}
	goto T735;
T735:;
	base[3]= CMPcar(V445);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk95)();
	vs_top=sup;
	V442= vs_base[0];
	((V441))->c.c_car = (V442);}
	{object V448;
	{register object V450;
	V450= ((V434))->v.v_self[1];
	if(!(type_of(V450)==t_fixnum)){
	goto T752;}
	V450= ((V436))->v.v_self[fix((V450))];
	goto T750;
	goto T752;
T752:;
	V450= VV[3];
	goto T750;
T750:;
	if(!(((V450))==(VV[3]))){
	goto T755;}
	base[1]= (V431);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk202)(Lclptr202);
	vs_top=sup;
	V448= vs_base[0];
	goto T747;
	goto T755;
T755:;
	V448= (V450);}
	goto T747;
T747:;
	((V448))->c.c_cdr = Cnil;}
	{object V452 = (V432);
	VMR25(V452)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-DIRECT-METHODS (CLASS))	*/

static object LI26(V456,V457,V458)

object V456;object V457;register object V458;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V460;
	object V461;
	V460= CMPcar((V456));
	V461= CMPcdr((V456));
	{object V462;
	if(type_of(V458)==t_structure){
	goto T769;}
	goto T767;
	goto T769;
T769:;
	if(!(((V458)->str.str_def)==(VV[36]))){
	goto T767;}
	V462= STREF(object,(V458),4);
	goto T765;
	goto T767;
T767:;{object V464;
	V464= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V458);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V465= vs_base[0];
	if(!((V464)==(CMPcar(V465)))){
	goto T772;}}
	V462= CMPcar(((V458))->cc.cc_turbo[12]);
	goto T765;
	goto T772;
T772:;
	V462= Cnil;
	goto T765;
T765:;
	{register object V468;
	V468= ((V460))->v.v_self[1];
	if(!(type_of(V468)==t_fixnum)){
	goto T784;}
	V468= ((V462))->v.v_self[fix((V468))];
	goto T782;
	goto T784;
T784:;
	V468= VV[3];
	goto T782;
T782:;
	if(!(((V468))==(VV[3]))){
	goto T787;}
	base[0]= (V458);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk202)(Lclptr202);
	vs_top=sup;
	V467= vs_base[0];
	goto T779;
	goto T787;
T787:;
	V467= (V468);}
	goto T779;
T779:;
	{object V470 = CMPcar(V467);
	VMR26(V470)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-DIRECT-GENERIC-FUNCTIONS (CLASS))	*/

static object LI27(V474,V475,V476)

object V474;object V475;register object V476;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V478;
	object V479;
	V478= CMPcar((V474));
	V479= CMPcdr((V474));
	{object V480;
	if(type_of(V476)==t_structure){
	goto T800;}
	goto T798;
	goto T800;
T800:;
	if(!(((V476)->str.str_def)==(VV[37]))){
	goto T798;}
	V480= STREF(object,(V476),4);
	goto T796;
	goto T798;
T798:;{object V482;
	V482= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V476);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V483= vs_base[0];
	if(!((V482)==(CMPcar(V483)))){
	goto T803;}}
	V480= CMPcar(((V476))->cc.cc_turbo[12]);
	goto T796;
	goto T803;
T803:;
	V480= Cnil;
	goto T796;
T796:;
	{object V485;
	{object V487;
	V487= ((V478))->v.v_self[1];
	if(!(type_of(V487)==t_fixnum)){
	goto T816;}
	V487= ((V480))->v.v_self[fix((V487))];
	goto T814;
	goto T816;
T816:;
	V487= VV[3];
	goto T814;
T814:;
	if(!(((V487))==(VV[3]))){
	goto T819;}
	base[0]= (V476);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk202)(Lclptr202);
	vs_top=sup;
	V486= vs_base[0];
	goto T811;
	goto T819;
T819:;
	V486= (V487);}
	goto T811;
T811:;
	V485= CMPcdr(V486);
	if(((V485))==Cnil){
	goto T823;}
	{object V489 = (V485);
	VMR27(V489)}
	goto T823;
T823:;
	{object V490;
	object V491;
	{object V492;
	V492= ((V478))->v.v_self[1];
	if(!(type_of(V492)==t_fixnum)){
	goto T830;}
	V492= ((V480))->v.v_self[fix((V492))];
	goto T828;
	goto T830;
T830:;
	V492= VV[3];
	goto T828;
T828:;
	if(!(((V492))==(VV[3]))){
	goto T833;}
	base[2]= (V476);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk202)(Lclptr202);
	vs_top=sup;
	V490= vs_base[0];
	goto T825;
	goto T833;
T833:;
	V490= (V492);}
	goto T825;
T825:;
	{register object V494;
	register object V495;
	V494= Cnil;
	V495= Cnil;
	{register object V496;
	register object V497;
	{object V499;
	V499= ((V478))->v.v_self[1];
	if(!(type_of(V499)==t_fixnum)){
	goto T846;}
	V499= ((V480))->v.v_self[fix((V499))];
	goto T844;
	goto T846;
T846:;
	V499= VV[3];
	goto T844;
T844:;
	if(!(((V499))==(VV[3]))){
	goto T849;}
	base[4]= (V476);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk202)(Lclptr202);
	vs_top=sup;
	V498= vs_base[0];
	goto T841;
	goto T849;
T849:;
	V498= (V499);}
	goto T841;
T841:;
	V496= CMPcar(V498);
	V497= CMPcar((V496));
	goto T854;
T854:;
	if(!(((V496))==Cnil)){
	goto T855;}
	goto T839;
	goto T855;
T855:;
	{register object V501;
	base[4]= (V497);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk203)(Lclptr203);
	vs_top=sup;
	V501= vs_base[0];
	if(((V494))!=Cnil){
	goto T863;}
	V495= make_cons((V501),Cnil);
	V494= (V495);
	goto T859;
	goto T863;
T863:;
	{register object x= (V501),V502= (V494);
	while(V502!=Cnil)
	if(x==(V502->c.c_car)){
	goto T859;
	}else V502=V502->c.c_cdr;}
	V504= make_cons((V501),Cnil);
	((V495))->c.c_cdr = /* INLINE-ARGS */V504;
	V503= (V495);
	V495= CMPcdr(V503);}
	goto T859;
T859:;
	V496= CMPcdr((V496));
	V497= CMPcar((V496));
	goto T854;}
	goto T839;
T839:;
	V491= (V494);}
	((V490))->c.c_cdr = (V491);
	{object V505 = (V491);
	VMR27(V505)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-METHOD-TABLE (EQL-SPECIALIZER))	*/

static object LI28(V509,V510,V511)

object V509;object V510;object V511;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{object V513 = (VV[38]->s.s_dbind);
	VMR28(V513)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-METHOD-TABLE (CLASS-EQ-SPECIALIZER))	*/

static object LI29(V517,V518,V519)

object V517;object V518;object V519;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{object V521 = (VV[39]->s.s_dbind);
	VMR29(V521)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD ADD-DIRECT-METHOD (SPECIALIZER-WITH-OBJECT METHOD))	*/

static object LI30(V526,V527,V528,V529)

object V526;object V527;object V528;object V529;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{object V531;
	object V532;
	register object V533;
	base[3]= (V528);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk204)(Lclptr204);
	vs_top=sup;
	V531= vs_base[0];
	base[3]= (V528);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk205)(Lclptr205);
	vs_top=sup;
	V532= vs_base[0];
	base[3]= (V531);
	base[4]= (V532);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V533= vs_base[0];
	if(((V533))!=Cnil){
	goto T894;}
	{object V536;
	V536= make_cons(Cnil,Cnil);
	base[4]= V531;
	base[5]= V532;
	base[6]= (V536);
	vs_top=(vs_base=base+4)+3;
	siLhash_set();
	vs_top=sup;
	V533= vs_base[0];}
	goto T894;
T894:;
	{object V538;
	base[4]= (V529);
	base[5]= CMPcar((V533));
	vs_top=(vs_base=base+4)+2;
	Ladjoin();
	vs_top=sup;
	V538= vs_base[0];
	(V533)->c.c_car = (V538);}
	(V533)->c.c_cdr = Cnil;
	{object V541 = (V529);
	VMR30(V541)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-DIRECT-METHOD (SPECIALIZER-WITH-OBJECT METHOD))	*/

static object LI31(V546,V547,V548,V549)

object V546;object V547;object V548;object V549;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{object V551;
	register object V552;
	base[2]= (V548);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk204)(Lclptr204);
	vs_top=sup;
	V551= vs_base[0];
	base[2]= (V551);
	base[4]= (V548);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk205)(Lclptr205);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V552= vs_base[0];
	if(((V552))==Cnil){
	goto T919;}
	{object V554;
	base[3]= (V549);
	base[4]= CMPcar((V552));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk95)();
	vs_top=sup;
	V554= vs_base[0];
	(V552)->c.c_car = (V554);}
	(V552)->c.c_cdr = Cnil;
	goto T919;
T919:;
	{object V557 = (V549);
	VMR31(V557)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-DIRECT-METHODS (SPECIALIZER-WITH-OBJECT))	*/

static object LI32(V561,V562,V563)

object V561;object V562;object V563;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	base[1]= (V563);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk204)(Lclptr204);
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= (V563);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk205)(Lclptr205);
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V565= vs_base[0];
	{object V566 = CMPcar(V565);
	VMR32(V566)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-DIRECT-GENERIC-FUNCTIONS (SPECIALIZER-WITH-OBJECT))	*/

static object LI33(V570,V571,V572)

object V570;object V571;object V572;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{object V574;
	register object V575;
	base[2]= (V572);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk204)(Lclptr204);
	vs_top=sup;
	V574= vs_base[0];
	base[2]= (V574);
	base[4]= (V572);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk205)(Lclptr205);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V575= vs_base[0];
	if(((V575))==Cnil){
	goto T946;}{object V576;
	V576= CMPcdr((V575));
	if(V576==Cnil)goto T948;
	{object V577 = V576;
	VMR33(V577)}
	goto T948;
T948:;}
	{object V579;
	{register object V580;
	register object V581;
	V580= Cnil;
	V581= Cnil;
	{register object V582;
	register object V583;
	V582= CMPcar((V575));
	V583= CMPcar((V582));
	goto T957;
T957:;
	if(!(((V582))==Cnil)){
	goto T958;}
	goto T953;
	goto T958;
T958:;
	{register object V584;
	base[5]= (V583);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk203)(Lclptr203);
	vs_top=sup;
	V584= vs_base[0];
	if(((V580))!=Cnil){
	goto T966;}
	V581= make_cons((V584),Cnil);
	V580= (V581);
	goto T962;
	goto T966;
T966:;
	{register object x= (V584),V585= (V580);
	while(V585!=Cnil)
	if(x==(V585->c.c_car)){
	goto T962;
	}else V585=V585->c.c_cdr;}
	V587= make_cons((V584),Cnil);
	((V581))->c.c_cdr = /* INLINE-ARGS */V587;
	V586= (V581);
	V581= CMPcdr(V586);}
	goto T962;
T962:;
	V582= CMPcdr((V582));
	V583= CMPcar((V582));
	goto T957;}
	goto T953;
T953:;
	V579= (V580);}
	(V575)->c.c_cdr = (V579);
	{object V588 = (V579);
	VMR33(V588)}}
	goto T946;
T946:;
	{object V589 = Cnil;
	VMR33(V589)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAP-SPECIALIZERS	*/

static object LI35(V591)

object V591;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	base[0]=MMcons((V591),Cnil);
	base[1]= 
	make_cclosure_new(LC126,Cnil,base[0],Cdata);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk206)();
	vs_top=sup;
	base[1]= 
	make_cclosure_new(LC127,Cnil,base[0],Cdata);
	base[2]= (VV[38]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lmaphash();
	vs_top=sup;
	base[1]= 
	make_cclosure_new(LC128,Cnil,base[0],Cdata);
	base[2]= (VV[40]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lmaphash();
	vs_top=sup;
	{object V592 = Cnil;
	VMR34(V592)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAP-ALL-GENERIC-FUNCTIONS	*/

static object LI37(V594)

object V594;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	base[0]=MMcons((V594),Cnil);
	base[2]= VV[8];
	base[3]= VV[9];
	vs_top=(vs_base=base+2)+2;
	Lmake_hash_table();
	vs_top=sup;
	base[1]= vs_base[0];
	base[1]=MMcons(base[1],base[0]);
	V595= 
	make_cclosure_new(LC129,Cnil,base[1],Cdata);
	(void)((*(LnkLI207))(V595));
	{object V596 = Cnil;
	VMR35(V596)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :AFTER (CLASS-EQ-SPECIALIZER T))	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{object V597;
	object V598;
	register object V599;
	object V600;
	object V601;
	check_arg(5);
	V597=(base[0]);
	V598=(base[1]);
	V599=(base[2]);
	V600=(base[3]);
	V601=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V603;
	object V604;
	V603= CMPcar((V597));
	V604= CMPcdr((V597));
	{object V605;
	if(type_of(V599)==t_structure){
	goto T1003;}
	goto T1001;
	goto T1003;
T1003:;
	if(!(((V599)->str.str_def)==(VV[41]))){
	goto T1001;}
	V605= STREF(object,(V599),4);
	goto T999;
	goto T1001;
T1001:;{object V607;
	V607= (VV[2]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V599);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V608= vs_base[0];
	if(!((V607)==(CMPcar(V608)))){
	goto T1006;}}
	V605= CMPcar(((V599))->cc.cc_turbo[12]);
	goto T999;
	goto T1006;
T1006:;
	V605= Cnil;
	goto T999;
T999:;
	{object V609;
	base[5]= (V599);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk208)(Lclptr208);
	vs_top=sup;
	V610= vs_base[0];
	V609= list(2,VV[42],V610);
	{object V611;
	V611= ((V603))->v.v_self[1];
	if(!(type_of(V611)==t_fixnum)){
	goto T1017;}
	base[5]= ((V605))->v.v_self[fix((V611))]= ((V609));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T1017;
T1017:;
	base[5]= (V609);
	base[6]= (V599);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk209)(Lclptr209);
	return;}}}}
	}
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :AFTER (EQL-SPECIALIZER T))	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	{object V613;
	object V614;
	register object V615;
	object V616;
	object V617;
	check_arg(5);
	V613=(base[0]);
	V614=(base[1]);
	V615=(base[2]);
	V616=(base[3]);
	V617=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V619;
	object V620;
	V619= CMPcar((V613));
	V620= CMPcdr((V613));
	{object V621;
	if(type_of(V615)==t_structure){
	goto T1031;}
	goto T1029;
	goto T1031;
T1031:;
	if(!(((V615)->str.str_def)==(VV[43]))){
	goto T1029;}
	V621= STREF(object,(V615),4);
	goto T1027;
	goto T1029;
T1029:;{object V623;
	V623= (VV[2]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V615);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V624= vs_base[0];
	if(!((V623)==(CMPcar(V624)))){
	goto T1034;}}
	V621= CMPcar(((V615))->cc.cc_turbo[12]);
	goto T1027;
	goto T1034;
T1034:;
	V621= Cnil;
	goto T1027;
T1027:;
	{object V625;
	base[5]= (V615);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk204)(Lclptr204);
	vs_top=sup;
	V626= vs_base[0];
	V625= list(2,VV[44],V626);
	{object V627;
	V627= ((V619))->v.v_self[1];
	if(!(type_of(V627)==t_fixnum)){
	goto T1045;}
	base[5]= ((V621))->v.v_self[fix((V627))]= ((V625));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T1045;
T1045:;
	base[5]= (V625);
	base[6]= (V615);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk209)(Lclptr209);
	return;}}}}
	}
}
/*	local entry for function REAL-LOAD-DEFCLASS	*/

static object LI40(V635,V636,V637,V638,V639,V640)

object V635;object V636;object V637;object V638;object V639;object V640;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	(void)((*(LnkLI210))((V640)));
	{object V641;
	base[0]= (V635);
	base[1]= VV[45];
	base[2]= (V636);
	base[3]= VV[46];
	base[4]= (V637);
	base[5]= VV[47];
	base[6]= (V638);
	base[7]= VV[48];
	V643= list(2,VV[49],(V635));
	vs_base=vs_top;
	(void) (*Lnk211)();
	vs_top=sup;
	V644= vs_base[0];
	base[8]= list(2,/* INLINE-ARGS */V643,V644);
	{object V642;
	V642= (V639);
	 vs_top=base+9;
	 while(V642!=Cnil)
	 {vs_push((V642)->c.c_car);V642=(V642)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk212)();
	vs_top=sup;
	V641= vs_base[0];
	{object V645 = (V641);
	VMR38(V645)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for ENSURE-CLASS	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	{object V646;
	object V647;
	if(vs_top-vs_base<1) too_few_arguments();
	V646=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V647=(base[1]);
	vs_top=sup;
	base[2]=VV[213]->s.s_gfdef;
	base[3]= (V646);
	base[4]= (VFUN_NARGS=2,(*(LnkLI214))((V646),Cnil));
	{object V648;
	V648= (V647);
	 vs_top=base+5;
	 while(V648!=Cnil)
	 {vs_push((V648)->c.c_car);V648=(V648)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk213)(Lclptr213);
	return;
	}
}
/*	local entry for function (FAST-METHOD ENSURE-CLASS-USING-CLASS (T NULL))	*/

static object LI42(V654,V655,V656,V657,V658)

object V654;object V655;register object V656;register object V657;object V658;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{object V661;
	object V662;
	base[0]= (V657);
	base[1]= V658;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk215)();
	if(vs_base>=vs_top){vs_top=sup;goto T1071;}
	V661= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1072;}
	V662= vs_base[0];
	vs_top=sup;
	goto T1073;
	goto T1071;
T1071:;
	V661= Cnil;
	goto T1072;
T1072:;
	V662= Cnil;
	goto T1073;
T1073:;
	base[1]= (V661);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk216)(Lclptr216);
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V656);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk217)(Lclptr217);
	vs_top=sup;
	base[0]=VV[218]->s.s_gfdef;
	base[1]= (V661);
	base[2]= VV[50];
	base[3]= (V656);
	{object V663;
	V663= (V662);
	 vs_top=base+4;
	 while(V663!=Cnil)
	 {vs_push((V663)->c.c_car);V663=(V663)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk218)(Lclptr218);
	vs_top=sup;
	V657= vs_base[0];
	V666= ({object _tmp=get(VV[214],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[214])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[214])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V667 = V657;
	V668 = V656;
	(void)((
	V669 = V666,
	(type_of(V669) == t_sfun ?(*((V669)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V669)==t_vfun) ?
	(*((V669)->sfn.sfn_self)):
	(fcall.fun=(V669),fcalln))(V667,V668)));
	base[0]= (V657);
	base[1]= (V656);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk217)(Lclptr217);
	vs_top=sup;
	{object V670 = (V657);
	VMR40(V670)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD ENSURE-CLASS-USING-CLASS (T PCL-CLASS))	*/

static object LI43(V676,V677,V678,V679,V680)

object V676;object V677;object V678;register object V679;object V680;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V683;
	object V684;
	base[0]= (V679);
	base[1]= V680;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk215)();
	if(vs_base>=vs_top){vs_top=sup;goto T1095;}
	V683= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1096;}
	V684= vs_base[0];
	vs_top=sup;
	goto T1097;
	goto T1095;
T1095:;
	V683= Cnil;
	goto T1096;
T1096:;
	V684= Cnil;
	goto T1097;
T1097:;
	V685= (*(LnkLI219))((V679));
	V686 = (V683);
	if((/* INLINE-ARGS */V685)==(V686)){
	goto T1098;}
	base[0]= (V679);
	base[1]= (V683);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk220)(Lclptr220);
	vs_top=sup;
	goto T1098;
T1098:;
	base[0]=VV[221]->s.s_gfdef;
	base[1]= (V679);
	{object V687;
	V687= (V684);
	 vs_top=base+2;
	 while(V687!=Cnil)
	 {vs_push((V687)->c.c_car);V687=(V687)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk221)(Lclptr221);
	vs_top=sup;
	V690= ({object _tmp=get(VV[214],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[214])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[214])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V691 = V679;
	V692 = V678;
	(void)((
	V693 = V690,
	(type_of(V693) == t_sfun ?(*((V693)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V693)==t_vfun) ?
	(*((V693)->sfn.sfn_self)):
	(fcall.fun=(V693),fcalln))(V691,V692)));
	base[0]= (V679);
	base[1]= (V678);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk217)(Lclptr217);
	vs_top=sup;
	{object V694 = (V679);
	VMR41(V694)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-PREDICATE-NAME (T))	*/

static object LI44(V698,V699,V700)

object V698;object V699;object V700;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	{object V702 = VV[51];
	VMR42(V702)}
	return Cnil;
}
/*	function definition for ENSURE-CLASS-VALUES	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{object V703;
	object V704;
	check_arg(2);
	V703=(base[0]);
	V704=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V705;
	object V706;
	object V707;
	object V708;
	object V709;
	object V710;
	base[8]= (V704);
	vs_top=(vs_base=base+8)+1;
	Lcopy_list();
	vs_top=sup;
	V705= vs_base[0];
	V706= make_cons(small_fixnum(1),Cnil);
	base[8]= (V705);
	base[9]= VV[45];
	base[10]= (V706);
	vs_top=(vs_base=base+8)+3;
	Lgetf();
	vs_top=sup;
	V707= vs_base[0];
	base[8]= (V705);
	base[9]= VV[46];
	base[10]= (V706);
	vs_top=(vs_base=base+8)+3;
	Lgetf();
	vs_top=sup;
	V708= vs_base[0];
	base[8]= (V705);
	base[9]= VV[47];
	base[10]= (V706);
	vs_top=(vs_base=base+8)+3;
	Lgetf();
	vs_top=sup;
	V709= vs_base[0];
	if(!(((((V707))==((V706))?Ct:Cnil))==Cnil)){
	goto T1131;}
	V710= (VFUN_NARGS=1,(*(LnkLI214))((V707)));
	goto T1129;
	goto T1131;
T1131:;
	if(((V703))==Cnil){
	goto T1133;}
	base[8]= (V703);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk222)(Lclptr222);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1134;}
	goto T1133;
T1133:;
	V710= (VV[52]->s.s_dbind);
	goto T1129;
	goto T1134;
T1134:;
	V710= (*(LnkLI219))((V703));
	goto T1129;
T1129:;
	goto T1141;
T1141:;
	{register object V711;
	register object V712;
	base[8]= (V705);
	base[9]= VV[45];
	vs_top=(vs_base=base+8)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1148;}
	V711= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1149;}
	V712= vs_base[0];
	vs_top=sup;
	goto T1150;
	goto T1148;
T1148:;
	V711= Cnil;
	goto T1149;
T1149:;
	V712= Cnil;
	goto T1150;
T1150:;
	V705= (V711);
	if(((V712))!=Cnil){
	goto T1142;}}
	goto T1139;
	goto T1142;
T1142:;
	goto T1141;
	goto T1139;
T1139:;
	goto T1156;
T1156:;
	{register object V713;
	register object V714;
	base[8]= (V705);
	base[9]= VV[46];
	vs_top=(vs_base=base+8)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1163;}
	V713= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1164;}
	V714= vs_base[0];
	vs_top=sup;
	goto T1165;
	goto T1163;
T1163:;
	V713= Cnil;
	goto T1164;
T1164:;
	V714= Cnil;
	goto T1165;
T1165:;
	V705= (V713);
	if(((V714))!=Cnil){
	goto T1157;}}
	goto T1154;
	goto T1157;
T1157:;
	goto T1156;
	goto T1154;
T1154:;
	goto T1171;
T1171:;
	{register object V715;
	register object V716;
	base[8]= (V705);
	base[9]= VV[47];
	vs_top=(vs_base=base+8)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1178;}
	V715= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1179;}
	V716= vs_base[0];
	vs_top=sup;
	goto T1180;
	goto T1178;
T1178:;
	V715= Cnil;
	goto T1179;
T1179:;
	V716= Cnil;
	goto T1180;
T1180:;
	V705= (V715);
	if(((V716))!=Cnil){
	goto T1172;}}
	goto T1169;
	goto T1172;
T1172:;
	goto T1171;
	goto T1169;
T1169:;
	base[8]= (V710);
	if(((((V708))==((V706))?Ct:Cnil))==Cnil){
	goto T1187;}
	V717= Cnil;
	goto T1186;
	goto T1187;
T1187:;
	{object V718;
	object V719= (V708);
	if(V719==Cnil){
	V717= Cnil;
	goto T1186;}
	base[10]=V718=MMcons(Cnil,Cnil);
	goto T1189;
T1189:;
	base[11]= (V719->c.c_car);
	vs_top=(vs_base=base+11)+1;
	L46(base);
	vs_top=sup;
	(V718->c.c_car)= vs_base[0];
	if((V719=MMcdr(V719))==Cnil){
	V717= base[10];
	goto T1186;}
	V718=MMcdr(V718)=MMcons(Cnil,Cnil);
	goto T1189;}
	goto T1186;
T1186:;
	if(((((V709))==((V706))?Ct:Cnil))==Cnil){
	goto T1193;}
	V720= Cnil;
	goto T1192;
	goto T1193;
T1193:;
	V720= (V709);
	goto T1192;
T1192:;
	V721 = (V705);
	base[9]= listA(5,VV[46],V717,VV[47],V720,V721);
	vs_top=(vs_base=base+8)+2;
	return;}
	}
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :AFTER (STD-CLASS T))	*/

static object LI47(V727,V728,V729,V730,V731)

object V727;object V728;register object V729;object V730;object V731;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{object V733;
	object V735;
	object V736;
	object V738;
	object V739;
	object V741;
	object V742;
	object V744;
	V733= (*(LnkLI189))(VV[46],V731);
	if(!(type_of((V733))==t_cons)){
	goto T1200;}
	V735= CMPcar((V733));
	goto T1198;
	goto T1200;
T1200:;
	V735= Cnil;
	goto T1198;
T1198:;
	V736= (*(LnkLI189))(VV[47],V731);
	if(!(type_of((V736))==t_cons)){
	goto T1205;}
	V738= CMPcar((V736));
	goto T1203;
	goto T1205;
T1205:;
	V738= Cnil;
	goto T1203;
T1203:;
	V739= (*(LnkLI189))(VV[55],V731);
	if(!(type_of((V739))==t_cons)){
	goto T1210;}
	V741= CMPcar((V739));
	goto T1208;
	goto T1210;
T1210:;
	V741= Cnil;
	goto T1208;
T1208:;
	V742= (*(LnkLI189))(VV[56],V731);
	if(!(type_of((V742))==t_cons)){
	goto T1215;}
	V744= CMPcar((V742));
	goto T1213;
	goto T1215;
T1215:;
	V744= Cnil;
	goto T1213;
T1213:;
	{object V745;
	object V746;
	V745= CMPcar((V727));
	V746= CMPcdr((V727));
	{object V747;
	if(type_of(V729)==t_structure){
	goto T1225;}
	goto T1223;
	goto T1225;
T1225:;
	if(!(((V729)->str.str_def)==(VV[57]))){
	goto T1223;}
	V747= STREF(object,(V729),4);
	goto T1221;
	goto T1223;
T1223:;{object V749;
	V749= (VV[2]->s.s_dbind);
	base[8]= small_fixnum(14);
	base[9]= (V729);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V750= vs_base[0];
	if(!((V749)==(CMPcar(V750)))){
	goto T1228;}}
	V747= CMPcar(((V729))->cc.cc_turbo[12]);
	goto T1221;
	goto T1228;
T1228:;
	V747= Cnil;
	goto T1221;
T1221:;
	if((V733)==Cnil){
	goto T1236;}
	if((V735)!=Cnil){
	goto T1239;}
	V735= make_cons((VV[58]->s.s_dbind),Cnil);
	goto T1239;
T1239:;
	{register object V751;
	register object V752;
	V751= (V735);
	V752= CMPcar((V751));
	goto T1244;
T1244:;
	if(!(((V751))==Cnil)){
	goto T1245;}
	goto T1240;
	goto T1245;
T1245:;
	base[9]= (V729);
	base[10]= (V752);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk60)(Lclptr60);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1249;}
	base[9]= VV[59];
	base[10]= (V752);
	base[11]= (V729);
	base[12]= (*(LnkLI219))((V752));
	base[13]= (*(LnkLI219))((V729));
	base[14]= VV[60];
	vs_top=(vs_base=base+9)+6;
	Lerror();
	vs_top=sup;
	goto T1249;
T1249:;
	V751= CMPcdr((V751));
	V752= CMPcar((V751));
	goto T1244;}
	goto T1240;
T1240:;
	{object V754;
	V754= ((V745))->v.v_self[2];
	if(!(type_of(V754)==t_fixnum)){
	goto T1267;}
	(void)(((V747))->v.v_self[fix((V754))]= (V735));
	goto T1234;
	goto T1267;
T1267:;
	base[8]= V735;
	base[9]= (V729);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk223)(Lclptr223);
	vs_top=sup;
	goto T1234;}
	goto T1236;
T1236:;
	{object V756;
	V756= ((V745))->v.v_self[2];
	if(!(type_of(V756)==t_fixnum)){
	goto T1276;}
	V756= ((V747))->v.v_self[fix((V756))];
	goto T1274;
	goto T1276;
T1276:;
	V756= VV[3];
	goto T1274;
T1274:;
	if(!(((V756))==(VV[3]))){
	goto T1279;}
	base[8]= (V729);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk224)(Lclptr224);
	vs_top=sup;
	V735= vs_base[0];
	goto T1271;
	goto T1279;
T1279:;
	V735= (V756);}
	goto T1271;
T1271:;
	goto T1234;
T1234:;
	if((V736)==Cnil){
	goto T1285;}
	{object V758;
	{object V759;
	object V760= (V738);
	if(V760==Cnil){
	V758= Cnil;
	goto T1287;}
	base[8]=V759=MMcons(Cnil,Cnil);
	goto T1288;
T1288:;
	base[9]= (V729);
	base[10]= (V760->c.c_car);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk225)();
	vs_top=sup;
	(V759->c.c_car)= vs_base[0];
	if((V760=MMcdr(V760))==Cnil){
	V758= base[8];
	goto T1287;}
	V759=MMcdr(V759)=MMcons(Cnil,Cnil);
	goto T1288;}
	goto T1287;
T1287:;
	{object V762;
	V762= ((V745))->v.v_self[1];
	if(!(type_of(V762)==t_fixnum)){
	goto T1294;}
	V738= ((V747))->v.v_self[fix((V762))]= ((V758));
	goto T1283;
	goto T1294;
T1294:;
	base[8]= (V758);
	base[9]= (V729);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk226)(Lclptr226);
	vs_top=sup;
	V738= vs_base[0];
	goto T1283;}}
	goto T1285;
T1285:;
	{object V764;
	V764= ((V745))->v.v_self[1];
	if(!(type_of(V764)==t_fixnum)){
	goto T1302;}
	V764= ((V747))->v.v_self[fix((V764))];
	goto T1300;
	goto T1302;
T1302:;
	V764= VV[3];
	goto T1300;
T1300:;
	if(!(((V764))==(VV[3]))){
	goto T1305;}
	base[8]= (V729);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	V738= vs_base[0];
	goto T1283;
	goto T1305;
T1305:;
	V738= (V764);}
	goto T1283;
T1283:;
	if((V739)==Cnil){
	goto T1310;}
	V769= ({object _tmp=get(VV[190],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[190])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[190])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V770 = V741;
	V771 = V729;
	V772 = VV[28];
	(void)((
	V773 = V769,
	(type_of(V773) == t_sfun ?(*((V773)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V773)==t_vfun) ?
	(*((V773)->sfn.sfn_self)):
	(fcall.fun=(V773),fcalln))(V770,V771,V772)));
	goto T1308;
	goto T1310;
T1310:;
	V741= (*(LnkLI190))((V729),VV[28]);
	goto T1308;
T1308:;
	{object V776;
	{object V777;
	register object V778;
	V777= Cnil;
	V778= Cnil;
	{register object V779;
	register object V780;
	V779= (V738);
	V780= CMPcar((V779));
	goto T1322;
T1322:;
	if(!(((V779))==Cnil)){
	goto T1323;}
	goto T1318;
	goto T1323;
T1323:;
	base[10]= (V780);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V781= vs_base[0];
	V782 = (V729);
	if(!((V781)==(V782))){
	goto T1327;}
	{object V783;
	base[10]= (V780);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V783= vs_base[0];
	{object V784;
	base[10]= (V780);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V785= vs_base[0];
	if(((V783))==Cnil){
	goto T1339;}
	vs_base=vs_top;
	{object _funobj = (V783);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V786= vs_base[0];
	goto T1337;
	goto T1339;
T1339:;
	V786= (VV[61]->s.s_dbind);
	goto T1337;
T1337:;
	V784= make_cons(V785,V786);
	if(((V777))!=Cnil){
	goto T1342;}
	V778= make_cons((V784),Cnil);
	V777= (V778);
	goto T1327;
	goto T1342;
T1342:;
	V788= make_cons((V784),Cnil);
	((V778))->c.c_cdr = /* INLINE-ARGS */V788;
	V787= (V778);
	V778= CMPcdr(V787);}}
	goto T1327;
T1327:;
	V779= CMPcdr((V779));
	V780= CMPcar((V779));
	goto T1322;}
	goto T1318;
T1318:;
	V776= (V777);}
	V789= ({object _tmp=get(VV[190],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[190])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[190])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V790 = (V776);
	V791 = V729;
	V792 = VV[31];
	(void)((
	V793 = V789,
	(type_of(V793) == t_sfun ?(*((V793)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V793)==t_vfun) ?
	(*((V793)->sfn.sfn_self)):
	(fcall.fun=(V793),fcalln))(V790,V791,V792)));}
	if((V742)==Cnil){
	goto T1357;}
	{object V794;
	V794= CMPcar((V744));
	{object V795;
	V795= ((V745))->v.v_self[3];
	if(!(type_of(V795)==t_fixnum)){
	goto T1362;}
	V744= ((V747))->v.v_self[fix((V795))]= ((V794));
	goto T1355;
	goto T1362;
T1362:;
	base[8]= (V794);
	base[9]= (V729);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk231)(Lclptr231);
	vs_top=sup;
	V744= vs_base[0];
	goto T1355;}}
	goto T1357;
T1357:;
	{object V797;
	{object V798;
	V798= ((V745))->v.v_self[3];
	if(!(type_of(V798)==t_fixnum)){
	goto T1371;}
	V798= ((V747))->v.v_self[fix((V798))];
	goto T1369;
	goto T1371;
T1371:;
	V798= VV[3];
	goto T1369;
T1369:;
	if(!(((V798))==(VV[3]))){
	goto T1374;}
	base[8]= (V729);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk232)(Lclptr232);
	vs_top=sup;
	V797= vs_base[0];
	goto T1366;
	goto T1374;
T1374:;
	V797= (V798);}
	goto T1366;
T1366:;
	if(((V797))==Cnil){
	goto T1378;}
	V744= (V797);
	goto T1355;
	goto T1378;
T1378:;
	{object V800;
	base[9]= (V729);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk233)(Lclptr233);
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk234)();
	vs_top=sup;
	V800= vs_base[0];
	{object V801;
	V801= ((V745))->v.v_self[3];
	if(!(type_of(V801)==t_fixnum)){
	goto T1385;}
	V744= ((V747))->v.v_self[fix((V801))]= ((V800));
	goto T1355;
	goto T1385;
T1385:;
	base[8]= (V800);
	base[9]= (V729);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk231)(Lclptr231);
	vs_top=sup;
	V744= vs_base[0];}}}
	goto T1355;
T1355:;
	(void)((*(LnkLI235))((V729),(V735)));
	(void)((*(LnkLI236))((V729),Cnil));
	(void)((*(LnkLI237))((V729),(V744)));
	{object V803 = (*(LnkLI238))((V729),(V738));
	VMR44(V803)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :BEFORE (CLASS T))	*/

static void L48()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	{object V804;
	object V805;
	register object V806;
	object V807;
	object V808;
	check_arg(5);
	V804=(base[0]);
	V805=(base[1]);
	V806=(base[2]);
	V807=(base[3]);
	V808=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V810;
	V810= (*(LnkLI239))(VV[50],V808);
	{object V811;
	object V812;
	V811= CMPcar((V804));
	V812= CMPcdr((V804));
	{object V813;
	if(type_of(V806)==t_structure){
	goto T1403;}
	goto T1401;
	goto T1403;
T1403:;
	if(!(((V806)->str.str_def)==(VV[62]))){
	goto T1401;}
	V813= STREF(object,(V806),4);
	goto T1399;
	goto T1401;
T1401:;{object V815;
	V815= (VV[2]->s.s_dbind);
	base[6]= small_fixnum(14);
	base[7]= (V806);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V816= vs_base[0];
	if(!((V815)==(CMPcar(V816)))){
	goto T1406;}}
	V813= CMPcar(((V806))->cc.cc_turbo[12]);
	goto T1399;
	goto T1406;
T1406:;
	V813= Cnil;
	goto T1399;
T1399:;
	{object V817;
	V817= list(2,VV[63],(V806));
	{object V818;
	V818= ((V811))->v.v_self[1];
	if(!(type_of(V818)==t_fixnum)){
	goto T1416;}
	(void)(((V813))->v.v_self[fix((V818))]= ((V817)));
	goto T1412;
	goto T1416;
T1416:;
	base[6]= (V817);
	base[7]= (V806);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk209)(Lclptr209);
	vs_top=sup;}}
	goto T1412;
T1412:;
	{object V820;
	base[6]= VV[64];
	base[7]= VV[65];
	base[8]= (V806);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk240)();
	vs_top=sup;
	V820= vs_base[0];
	{object V821;
	V821= ((V811))->v.v_self[2];
	if(!(type_of(V821)==t_fixnum)){
	goto T1426;}
	base[6]= ((V813))->v.v_self[fix((V821))]= ((V820));
	vs_top=(vs_base=base+6)+1;
	return;
	goto T1426;
T1426:;
	base[6]= (V820);
	base[7]= (V806);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk241)(Lclptr241);
	return;}}}}}
	}
}
/*	local entry for function (FAST-METHOD REINITIALIZE-INSTANCE :BEFORE (SLOT-CLASS))	*/

static object LI49(V827,V828,V829,V830)

object V827;object V828;register object V829;object V830;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	V832 = (V829);
	base[0]= (V829);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	V833= vs_base[0];
	(void)((*(LnkLI242))(V832,V833));
	V834 = (V829);
	base[0]= (V829);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk245)(Lclptr245);
	vs_top=sup;
	V835= vs_base[0];
	{object V836 = (*(LnkLI244))(V834,V835);
	VMR46(V836)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD REINITIALIZE-INSTANCE :AFTER (SLOT-CLASS))	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	{object V837;
	object V838;
	object V839;
	check_arg(4);
	V837=(base[0]);
	V838=(base[1]);
	base[2]=MMcons(base[2],Cnil);
	V839=(base[3]);
	vs_top=sup;
	base[4]=MMcons(V839,base[2]);
	base[5]= (base[2]->c.c_car);
	base[6]= 
	make_cclosure_new(LC130,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk246)(Lclptr246);
	return;
	}
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :AFTER (STRUCTURE-CLASS T))	*/

static object LI51(V846,V847,V848,V849,V850)

object V846;object V847;register object V848;object V849;object V850;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V852;
	object V854;
	object V855;
	register object V857;
	object V858;
	object V859;
	object V861;
	V852= (*(LnkLI189))(VV[46],V850);
	if(!(type_of((V852))==t_cons)){
	goto T1448;}
	V854= CMPcar((V852));
	goto T1446;
	goto T1448;
T1448:;
	V854= Cnil;
	goto T1446;
T1446:;
	V855= (*(LnkLI189))(VV[47],V850);
	if(!(type_of((V855))==t_cons)){
	goto T1453;}
	V857= CMPcar((V855));
	goto T1451;
	goto T1453;
T1453:;
	V857= Cnil;
	goto T1451;
T1451:;
	V858= (*(LnkLI239))(VV[55],V850);
	V859= (*(LnkLI189))(VV[56],V850);
	if(!(type_of((V859))==t_cons)){
	goto T1459;}
	V861= CMPcar((V859));
	goto T1457;
	goto T1459;
T1459:;
	V861= Cnil;
	goto T1457;
T1457:;
	{register object V862;
	object V863;
	V862= CMPcar((V846));
	V863= CMPcdr((V846));
	{register object V864;
	if(type_of(V848)==t_structure){
	goto T1469;}
	goto T1467;
	goto T1469;
T1469:;
	if(!(((V848)->str.str_def)==(VV[66]))){
	goto T1467;}
	V864= STREF(object,(V848),4);
	goto T1465;
	goto T1467;
T1467:;{object V866;
	V866= (VV[2]->s.s_dbind);
	base[7]= small_fixnum(14);
	base[8]= (V848);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V867= vs_base[0];
	if(!((V866)==(CMPcar(V867)))){
	goto T1472;}}
	V864= CMPcar(((V848))->cc.cc_turbo[12]);
	goto T1465;
	goto T1472;
T1472:;
	V864= Cnil;
	goto T1465;
T1465:;
	if((V852)==Cnil){
	goto T1480;}
	{object V868;
	if((V854)!=Cnil){
	V868= (V854);
	goto T1482;}
	base[7]= (V848);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk233)(Lclptr233);
	vs_top=sup;
	V869= vs_base[0];
	if((((V869)==(VV[67])?Ct:Cnil))==Cnil){
	goto T1484;}
	V854= Cnil;
	goto T1483;
	goto T1484;
T1484:;
	V854= make_cons((VV[68]->s.s_dbind),Cnil);
	goto T1483;
T1483:;
	V868= (V854);
	goto T1482;
T1482:;
	{object V870;
	V870= ((V862))->v.v_self[5];
	if(!(type_of(V870)==t_fixnum)){
	goto T1490;}
	(void)(((V864))->v.v_self[fix((V870))]= ((V868)));
	goto T1478;
	goto T1490;
T1490:;
	base[7]= (V868);
	base[8]= (V848);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk223)(Lclptr223);
	vs_top=sup;
	goto T1478;}}
	goto T1480;
T1480:;
	{register object V872;
	V872= ((V862))->v.v_self[5];
	if(!(type_of(V872)==t_fixnum)){
	goto T1499;}
	V872= ((V864))->v.v_self[fix((V872))];
	goto T1497;
	goto T1499;
T1499:;
	V872= VV[3];
	goto T1497;
T1497:;
	if(!(((V872))==(VV[3]))){
	goto T1502;}
	base[7]= (V848);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk224)(Lclptr224);
	vs_top=sup;
	V854= vs_base[0];
	goto T1494;
	goto T1502;
T1502:;
	V854= (V872);}
	goto T1494;
T1494:;
	goto T1478;
T1478:;
	{register object V874;
	object V875;
	object V876;
	base[10]= (V848);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk233)(Lclptr233);
	vs_top=sup;
	V874= vs_base[0];
	{register object V877;
	V877= ((V862))->v.v_self[6];
	if(!(type_of(V877)==t_fixnum)){
	goto T1513;}
	V877= ((V864))->v.v_self[fix((V877))];
	goto T1511;
	goto T1513;
T1513:;
	V877= VV[3];
	goto T1511;
T1511:;
	if(!(((V877))==(VV[3]))){
	goto T1516;}
	base[10]= (V848);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk247)(Lclptr247);
	vs_top=sup;
	V875= vs_base[0];
	goto T1508;
	goto T1516;
T1516:;
	V875= (V877);}
	goto T1508;
T1508:;
	if((V875)!=Cnil){
	V876= (V875);
	goto T1519;}
	V879= (*(LnkLI248))((V874));
	V876= ((/* INLINE-ARGS */V879)==Cnil?Ct:Cnil);
	goto T1519;
T1519:;
	if((V855)==Cnil){
	goto T1522;}
	{object V880;
	{object V881;
	object V882= (V857);
	if(V882==Cnil){
	V857= Cnil;
	goto T1525;}
	base[10]=V881=MMcons(Cnil,Cnil);
	goto T1526;
T1526:;
	{object V883;
	V883= (V882->c.c_car);
	if(((V876))==Cnil){
	goto T1528;}
	{object V884;
	object V885;
	object V886;
	base[14]= (V883);
	base[15]= VV[50];
	vs_top=(vs_base=base+14)+2;
	Lgetf();
	vs_top=sup;
	V884= vs_base[0];
	base[14]= Cnil;
	base[15]= VV[69];
	base[16]= (V874);
	base[17]= (V884);
	vs_top=(vs_base=base+14)+4;
	Lformat();
	vs_top=sup;
	V885= vs_base[0];
	base[14]= (V885);
	vs_top=(vs_base=base+14)+1;
	Lintern();
	vs_top=sup;
	V886= vs_base[0];
	V883= listA(3,VV[70],(V886),(V883));}
	goto T1528;
T1528:;
	base[11]= (V848);
	base[12]= (V883);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk225)();
	vs_top=sup;
	(V881->c.c_car)= vs_base[0];}
	if((V882=MMcdr(V882))==Cnil){
	V857= base[10];
	goto T1525;}
	V881=MMcdr(V881)=MMcons(Cnil,Cnil);
	goto T1526;}
	goto T1525;
T1525:;
	V880= (V857);
	{object V887;
	V887= ((V862))->v.v_self[4];
	if(!(type_of(V887)==t_fixnum)){
	goto T1546;}
	(void)(((V864))->v.v_self[fix((V887))]= ((V880)));
	goto T1520;
	goto T1546;
T1546:;
	base[10]= (V880);
	base[11]= (V848);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk226)(Lclptr226);
	vs_top=sup;
	goto T1520;}}
	goto T1522;
T1522:;
	{register object V889;
	V889= ((V862))->v.v_self[4];
	if(!(type_of(V889)==t_fixnum)){
	goto T1555;}
	V889= ((V864))->v.v_self[fix((V889))];
	goto T1553;
	goto T1555;
T1555:;
	V889= VV[3];
	goto T1553;
T1553:;
	if(!(((V889))==(VV[3]))){
	goto T1558;}
	base[10]= (V848);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	V857= vs_base[0];
	goto T1550;
	goto T1558;
T1558:;
	V857= (V889);}
	goto T1550;
T1550:;
	goto T1520;
T1520:;
	if(((V876))==Cnil){
	goto T1505;}
	{object V891;
	object V892;
	object V893;
	object V894;
	object V895;
	object V896;
	object V897;
	object V898;
	object V899;
	{register object V901;
	V901= ((V862))->v.v_self[5];
	if(!(type_of(V901)==t_fixnum)){
	goto T1569;}
	V901= ((V864))->v.v_self[fix((V901))];
	goto T1567;
	goto T1569;
T1569:;
	V901= VV[3];
	goto T1567;
T1567:;
	if(!(((V901))==(VV[3]))){
	goto T1572;}
	base[19]= (V848);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk224)(Lclptr224);
	vs_top=sup;
	V900= vs_base[0];
	goto T1564;
	goto T1572;
T1572:;
	V900= (V901);}
	goto T1564;
T1564:;
	V891= CMPcar(V900);
	base[20]= Cnil;
	base[21]= VV[71];
	base[22]= (V874);
	vs_top=(vs_base=base+20)+3;
	Lformat();
	vs_top=sup;
	base[19]= vs_base[0];
	vs_top=(vs_base=base+19)+1;
	Lintern();
	vs_top=sup;
	V892= vs_base[0];
	base[20]= Cnil;
	base[21]= VV[72];
	base[22]= (V892);
	vs_top=(vs_base=base+20)+3;
	Lformat();
	vs_top=sup;
	base[19]= vs_base[0];
	vs_top=(vs_base=base+19)+1;
	Lintern();
	vs_top=sup;
	V893= vs_base[0];
	if(((V891))==Cnil){
	goto T1588;}
	base[19]= (V891);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk233)(Lclptr233);
	vs_top=sup;
	V904= vs_base[0];
	V905= list(2,VV[74],V904);
	V903= make_cons(/* INLINE-ARGS */V905,Cnil);
	goto T1586;
	goto T1588;
T1588:;
	V903= Cnil;
	goto T1586;
T1586:;
	V906= list(2,VV[77],(V892));
	V907= list(4,VV[75],VV[76],/* INLINE-ARGS */V906,list(3,VV[78],(V893),Cnil));
	V908= append(V903,/* INLINE-ARGS */V907);
	V909= make_cons((V874),/* INLINE-ARGS */V908);
	{object V911;
	object V912= (V857);
	if(V912==Cnil){
	V910= Cnil;
	goto T1592;}
	base[19]=V911=MMcons(Cnil,Cnil);
	goto T1593;
T1593:;
	base[20]= (V912->c.c_car);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V914= vs_base[0];
	(V911->c.c_car)= list(2,V914,VV[61]);
	if((V912=MMcdr(V912))==Cnil){
	V910= base[19];
	goto T1592;}
	V911=MMcdr(V911)=MMcons(Cnil,Cnil);
	goto T1593;}
	goto T1592;
T1592:;
	V894= listA(3,VV[73],/* INLINE-ARGS */V909,V910);
	{object V915;
	object V916= (V857);
	if(V916==Cnil){
	V895= Cnil;
	goto T1597;}
	base[19]=V915=MMcons(Cnil,Cnil);
	goto T1598;
T1598:;
	base[21]= Cnil;
	base[22]= VV[79];
	base[23]= (V892);
	base[25]= (V916->c.c_car);
	vs_top=(vs_base=base+25)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	base[24]= vs_base[0];
	vs_top=(vs_base=base+21)+4;
	Lformat();
	vs_top=sup;
	base[20]= vs_base[0];
	vs_top=(vs_base=base+20)+1;
	Lintern();
	vs_top=sup;
	(V915->c.c_car)= vs_base[0];
	if((V916=MMcdr(V916))==Cnil){
	V895= base[19];
	goto T1597;}
	V915=MMcdr(V915)=MMcons(Cnil,Cnil);
	goto T1598;}
	goto T1597;
T1597:;
	{object V918;
	object V919= (V857);
	if(V919==Cnil){
	V896= Cnil;
	goto T1606;}
	base[19]=V918=MMcons(Cnil,Cnil);
	goto T1607;
T1607:;
	base[21]= Cnil;
	base[22]= VV[80];
	base[23]= (V892);
	base[25]= (V919->c.c_car);
	vs_top=(vs_base=base+25)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	base[24]= vs_base[0];
	vs_top=(vs_base=base+21)+4;
	Lformat();
	vs_top=sup;
	base[20]= vs_base[0];
	vs_top=(vs_base=base+20)+1;
	Lintern();
	vs_top=sup;
	(V918->c.c_car)= vs_base[0];
	if((V919=MMcdr(V919))==Cnil){
	V896= base[19];
	goto T1606;}
	V918=MMcdr(V918)=MMcons(Cnil,Cnil);
	goto T1607;}
	goto T1606;
T1606:;
	{object V921;
	object V922= (V857);
	object V923= (V895);
	if(V922==Cnil||V923==Cnil){
	V897= Cnil;
	goto T1615;}
	base[19]=V921=MMcons(Cnil,Cnil);
	goto T1616;
T1616:;
	{object V926;
	base[20]= (V922->c.c_car);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk249)(Lclptr249);
	vs_top=sup;
	V926= vs_base[0];
	V927= list(2,VV[83],list(3,VV[84],(V874),VV[85]));
	(V921->c.c_car)= list(5,VV[81],(V923->c.c_car),VV[82],/* INLINE-ARGS */V927,list(2,(V926),VV[85]));}
	if((V922=MMcdr(V922))==Cnil||(V923=MMcdr(V923))==Cnil){
	V897= base[19];
	goto T1615;}
	V921=MMcdr(V921)=MMcons(Cnil,Cnil);
	goto T1616;}
	goto T1615;
T1615:;
	{object V928;
	object V929= (V857);
	object V930= (V896);
	if(V929==Cnil||V930==Cnil){
	V898= Cnil;
	goto T1620;}
	base[19]=V928=MMcons(Cnil,Cnil);
	goto T1621;
T1621:;
	{object V933;
	base[20]= (V929->c.c_car);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk249)(Lclptr249);
	vs_top=sup;
	V933= vs_base[0];
	V934= list(2,VV[83],list(3,VV[84],(V874),VV[85]));
	(V928->c.c_car)= list(5,VV[81],(V930->c.c_car),VV[86],/* INLINE-ARGS */V934,list(3,VV[87],list(2,(V933),VV[85]),VV[88]));}
	if((V929=MMcdr(V929))==Cnil||(V930=MMcdr(V930))==Cnil){
	V898= base[19];
	goto T1620;}
	V928=MMcdr(V928)=MMcons(Cnil,Cnil);
	goto T1621;}
	goto T1620;
T1620:;
	V935 = (V894);
	base[19]= (V897);
	base[20]= (V898);
	V937= listA(3,VV[90],list(2,VV[91],(V874)),VV[92]);
	base[21]= make_cons(/* INLINE-ARGS */V937,Cnil);
	vs_top=(vs_base=base+19)+3;
	Lappend();
	vs_top=sup;
	V936= vs_base[0];
	V899= listA(3,VV[89],V935,V936);
	if(((*(LnkLI248))((V874)))!=Cnil){
	goto T1630;}
	base[19]= (V899);
	vs_top=(vs_base=base+19)+1;
	Leval();
	vs_top=sup;
	goto T1630;
T1630:;
	{
	object V938= (V857);
	object V939= (V895);
	object V940= (V896);
	if(V938==Cnil||V939==Cnil||V940==Cnil){
	goto T1634;}
	goto T1635;
T1635:;
	{object V944;
	object V945;
	V944= (*(LnkLI180))((V939->c.c_car));
	if(((*(LnkLI250))((V940->c.c_car)))==Cnil){
	goto T1640;}
	V945= (*(LnkLI180))((V940->c.c_car));
	goto T1638;
	goto T1640;
T1640:;
	V945= Cnil;
	goto T1638;
T1638:;
	base[21]= (V944);
	base[22]= (V938->c.c_car);
	vs_top=(vs_base=base+21)+2;
	(void) (*Lnk251)(Lclptr251);
	vs_top=sup;
	base[21]= (V945);
	base[22]= (V938->c.c_car);
	vs_top=(vs_base=base+21)+2;
	(void) (*Lnk252)(Lclptr252);
	vs_top=sup;}
	if((V938=MMcdr(V938))==Cnil||(V939=MMcdr(V939))==Cnil||(V940=MMcdr(V940))==Cnil){
	goto T1634;}
	goto T1635;}
	goto T1634;
T1634:;
	{object V947;
	V947= ((V862))->v.v_self[3];
	if(!(type_of(V947)==t_fixnum)){
	goto T1650;}
	(void)(((V864))->v.v_self[fix((V947))]= (V899));
	goto T1647;
	goto T1650;
T1650:;
	base[19]= V899;
	base[20]= (V848);
	vs_top=(vs_base=base+19)+2;
	(void) (*Lnk253)(Lclptr253);
	vs_top=sup;}
	goto T1647;
T1647:;
	{object V950;
	V950= ((V862))->v.v_self[2];
	if(!(type_of(V950)==t_fixnum)){
	goto T1656;}
	(void)(((V864))->v.v_self[fix((V950))]= (V893));
	goto T1505;
	goto T1656;
T1656:;
	base[19]= V893;
	base[20]= (V848);
	vs_top=(vs_base=base+19)+2;
	(void) (*Lnk254)(Lclptr254);
	vs_top=sup;}}}
	goto T1505;
T1505:;
	(void)((*(LnkLI235))((V848),(V854)));
	{object V952;
	base[7]= (V848);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk255)(Lclptr255);
	vs_top=sup;
	V952= vs_base[0];
	{object V953;
	V953= ((V862))->v.v_self[1];
	if(!(type_of(V953)==t_fixnum)){
	goto T1666;}
	(void)(((V864))->v.v_self[fix((V953))]= ((V952)));
	goto T1661;
	goto T1666;
T1666:;
	base[7]= (V952);
	base[8]= (V848);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk98)(Lclptr98);
	vs_top=sup;}}
	goto T1661;
T1661:;
	{object V955;
	base[7]= (V848);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk256)(Lclptr256);
	vs_top=sup;
	V955= vs_base[0];
	{object V956;
	V956= ((V862))->v.v_self[8];
	if(!(type_of(V956)==t_fixnum)){
	goto T1675;}
	(void)(((V864))->v.v_self[fix((V956))]= ((V955)));
	goto T1670;
	goto T1675;
T1675:;
	base[7]= (V955);
	base[8]= (V848);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk102)(Lclptr102);
	vs_top=sup;}}
	goto T1670;
T1670:;
	{register object V958;
	V958= ((V862))->v.v_self[9];
	if(!(type_of(V958)==t_fixnum)){
	goto T1686;}
	V958= ((V864))->v.v_self[fix((V958))];
	goto T1684;
	goto T1686;
T1686:;
	V958= VV[3];
	goto T1684;
T1684:;
	if(!(((V958))==(VV[3]))){
	goto T1689;}
	base[7]= (V848);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk194)(Lclptr194);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1679;}
	goto T1681;
	goto T1689;
T1689:;
	if(((V958))!=Cnil){
	goto T1679;}}
	goto T1681;
T1681:;
	{object V960;
	V960= (VFUN_NARGS=2,(*(LnkLI257))(small_fixnum(0),(V848)));
	{object V961;
	V961= ((V862))->v.v_self[9];
	if(!(type_of(V961)==t_fixnum)){
	goto T1695;}
	(void)(((V864))->v.v_self[fix((V961))]= ((V960)));
	goto T1679;
	goto T1695;
T1695:;
	base[7]= (V960);
	base[8]= (V848);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;}}
	goto T1679;
T1679:;
	(void)((*(LnkLI258))((V848)));
	if((V859)==Cnil){
	goto T1703;}
	{object V963;
	V963= CMPcar((V861));
	{object V964;
	V964= ((V862))->v.v_self[7];
	if(!(type_of(V964)==t_fixnum)){
	goto T1708;}
	V861= ((V864))->v.v_self[fix((V964))]= ((V963));
	goto T1701;
	goto T1708;
T1708:;
	base[7]= (V963);
	base[8]= (V848);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk231)(Lclptr231);
	vs_top=sup;
	V861= vs_base[0];
	goto T1701;}}
	goto T1703;
T1703:;
	{object V966;
	{register object V967;
	V967= ((V862))->v.v_self[7];
	if(!(type_of(V967)==t_fixnum)){
	goto T1717;}
	V967= ((V864))->v.v_self[fix((V967))];
	goto T1715;
	goto T1717;
T1717:;
	V967= VV[3];
	goto T1715;
T1715:;
	if(!(((V967))==(VV[3]))){
	goto T1720;}
	base[7]= (V848);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk232)(Lclptr232);
	vs_top=sup;
	V966= vs_base[0];
	goto T1712;
	goto T1720;
T1720:;
	V966= (V967);}
	goto T1712;
T1712:;
	if(((V966))==Cnil){
	goto T1724;}
	V861= (V966);
	goto T1701;
	goto T1724;
T1724:;
	{object V969;
	base[8]= (V848);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk233)(Lclptr233);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk234)();
	vs_top=sup;
	V969= vs_base[0];
	{object V970;
	V970= ((V862))->v.v_self[7];
	if(!(type_of(V970)==t_fixnum)){
	goto T1731;}
	V861= ((V864))->v.v_self[fix((V970))]= ((V969));
	goto T1701;
	goto T1731;
T1731:;
	base[7]= (V969);
	base[8]= (V848);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk231)(Lclptr231);
	vs_top=sup;
	V861= vs_base[0];}}}
	goto T1701;
T1701:;
	(void)((*(LnkLI237))((V848),(V861)));
	{object V972 = (*(LnkLI238))((V848),(V857));
	VMR48(V972)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD DIRECT-SLOT-DEFINITION-CLASS (STRUCTURE-CLASS T))	*/

static object LI52(V977,V978,V979,V980)

object V977;object V978;object V979;object V980;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	{object V982 = (VFUN_NARGS=1,(*(LnkLI214))(VV[93]));
	VMR49(V982)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD FINALIZE-INHERITANCE (STRUCTURE-CLASS))	*/

static object LI53(V986,V987,V988)

object V986;object V987;object V988;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V990 = Cnil;
	VMR50(V990)}
	return Cnil;
}
/*	local entry for function ADD-SLOT-ACCESSORS	*/

static object LI54(V993,V994)

object V993;object V994;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V995 = (*(LnkLI259))((V993),(V994),VV[94]);
	VMR51(V995)}
	return Cnil;
}
/*	local entry for function REMOVE-SLOT-ACCESSORS	*/

static object LI55(V998,V999)

object V998;object V999;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{object V1000 = (*(LnkLI259))((V998),(V999),VV[95]);
	VMR52(V1000)}
	return Cnil;
}
/*	local entry for function FIX-SLOT-ACCESSORS	*/

static object LI58(V1004,V1005,V1006)

object V1004;object V1005;object V1006;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	base[0]= (V1006);
	base[1]= (V1004);
	{register object V1007;
	object V1008;
	V1007= (V1005);
	V1008= CMPcar((V1007));
	goto T1745;
T1745:;
	if(!(((V1007))==Cnil)){
	goto T1746;}
	{object V1009 = Cnil;
	VMR53(V1009)}
	goto T1746;
T1746:;
	{register object V1010;
	base[3]= (V1008);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V1010= vs_base[0];
	{register object V1011;
	register object V1012;
	base[5]= (V1008);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk260)(Lclptr260);
	vs_top=sup;
	V1011= vs_base[0];
	V1012= CMPcar((V1011));
	goto T1758;
T1758:;
	if(!(((V1011))==Cnil)){
	goto T1759;}
	goto T1753;
	goto T1759;
T1759:;
	base[5]= (V1012);
	base[6]= (V1010);
	base[7]= VV[96];
	vs_top=(vs_base=base+5)+3;
	L59(base);
	vs_top=sup;
	V1011= CMPcdr((V1011));
	V1012= CMPcar((V1011));
	goto T1758;}
	goto T1753;
T1753:;
	{register object V1013;
	register object V1014;
	base[5]= (V1008);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk261)(Lclptr261);
	vs_top=sup;
	V1013= vs_base[0];
	V1014= CMPcar((V1013));
	goto T1776;
T1776:;
	if(!(((V1013))==Cnil)){
	goto T1777;}
	goto T1750;
	goto T1777;
T1777:;
	base[5]= (V1014);
	base[6]= (V1010);
	base[7]= VV[97];
	vs_top=(vs_base=base+5)+3;
	L59(base);
	vs_top=sup;
	V1013= CMPcdr((V1013));
	V1014= CMPcar((V1013));
	goto T1776;}}
	goto T1750;
T1750:;
	V1007= CMPcdr((V1007));
	V1008= CMPcar((V1007));
	goto T1745;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-DIRECT-SUBCLASSES	*/

static object LI60(V1017,V1018)

register object V1017;object V1018;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	{register object V1019;
	register object V1020;
	V1019= (V1018);
	V1020= CMPcar((V1019));
	goto T1798;
T1798:;
	if(!(((V1019))==Cnil)){
	goto T1799;}
	{object V1021 = Cnil;
	VMR54(V1021)}
	goto T1799;
T1799:;
	V1023 = (V1017);
	base[1]= (V1017);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk262)(Lclptr262);
	vs_top=sup;
	V1024= vs_base[0];
	{register object x= V1023,V1022= V1024;
	while(V1022!=Cnil)
	if(x==(V1022->c.c_car)){
	goto T1803;
	}else V1022=V1022->c.c_cdr;}
	base[1]= (V1020);
	base[2]= (V1017);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk263)(Lclptr263);
	vs_top=sup;
	goto T1803;
T1803:;
	V1019= CMPcdr((V1019));
	V1020= CMPcar((V1019));
	goto T1798;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REMOVE-DIRECT-SUBCLASSES	*/

static object LI61(V1027,V1028)

register object V1027;object V1028;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{object V1029;
	base[0]= (V1027);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	V1029= vs_base[0];
	{register object V1030;
	register object V1031;
	base[2]= (V1029);
	base[3]= (V1028);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk264)();
	vs_top=sup;
	V1030= vs_base[0];
	V1031= CMPcar((V1030));
	goto T1822;
T1822:;
	if(!(((V1030))==Cnil)){
	goto T1823;}
	{object V1032 = Cnil;
	VMR55(V1032)}
	goto T1823;
T1823:;
	base[2]= (V1031);
	base[3]= (V1027);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk265)(Lclptr265);
	vs_top=sup;
	V1030= CMPcdr((V1030));
	V1031= CMPcar((V1030));
	goto T1822;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD FINALIZE-INHERITANCE (STD-CLASS))	*/

static object LI62(V1036,V1037,V1038)

object V1036;object V1037;object V1038;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V1040 = (*(LnkLI236))((V1038),Ct);
	VMR56(V1040)}
	return Cnil;
}
/*	local entry for function CLASS-HAS-A-FORWARD-REFERENCED-SUPERCLASS-P	*/

static object LI63(V1042)

object V1042;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;{object V1043;
	base[0]= (V1042);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk222)(Lclptr222);
	vs_top=sup;
	V1043= vs_base[0];
	if(V1043==Cnil)goto T1838;
	{object V1044 = V1043;
	VMR57(V1044)}
	goto T1838;
T1838:;}
	base[0]= (VV[266]->s.s_gfdef);
	base[2]= (V1042);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk267)();
	vs_top=sup;
	{object V1045 = vs_base[0];
	VMR57(V1045)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-CLASS	*/

static object LI64(V1048,V1049)

register object V1048;object V1049;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	if(((V1049))!=Cnil){
	goto T1845;}
	base[0]= (V1048);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk268)(Lclptr268);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1845;}
	if(((*(LnkLI266))((V1048)))!=Cnil){
	goto T1844;}
	goto T1845;
T1845:;
	V1050 = (V1048);
	base[0]= (V1048);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk255)(Lclptr255);
	vs_top=sup;
	V1051= vs_base[0];
	(void)((*(LnkLI269))(V1050,V1051));
	V1052 = (V1048);
	base[0]= (V1048);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk256)(Lclptr256);
	vs_top=sup;
	V1053= vs_base[0];
	(void)((*(LnkLI270))(V1052,V1053));
	(void)((*(LnkLI271))((V1048)));
	V1054 = (V1048);
	base[0]= (V1048);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk273)(Lclptr273);
	vs_top=sup;
	V1055= vs_base[0];
	(void)((*(LnkLI272))(V1054,V1055));
	base[0]= (V1048);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk274)();
	vs_top=sup;
	goto T1844;
T1844:;
	if(((V1049))!=Cnil){
	goto T1864;}
	{register object V1056;
	register object V1057;
	base[2]= (V1048);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk262)(Lclptr262);
	vs_top=sup;
	V1056= vs_base[0];
	V1057= CMPcar((V1056));
	goto T1870;
T1870:;
	if(!(((V1056))==Cnil)){
	goto T1871;}
	{object V1058 = Cnil;
	VMR58(V1058)}
	goto T1871;
T1871:;
	(void)((*(LnkLI236))((V1057),Cnil));
	V1056= CMPcdr((V1056));
	V1057= CMPcar((V1056));
	goto T1870;}
	goto T1864;
T1864:;
	{object V1059 = Cnil;
	VMR58(V1059)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-CPL	*/

static object LI65(V1062,V1063)

register object V1062;object V1063;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	base[0]= (V1062);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk268)(Lclptr268);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1881;}
	base[0]= (V1062);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk99)(Lclptr99);
	vs_top=sup;
	V1064= vs_base[0];
	V1065 = (V1063);
	if(equal(V1064,V1065)){
	goto T1881;}
	(void)((*(LnkLI275))((V1062)));
	goto T1881;
T1881:;
	if(!((VV[98])->s.s_gfdef!=OBJNULL)){
	goto T1891;}
	base[0]= (V1063);
	base[1]= (V1062);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk98)(Lclptr98);
	vs_top=sup;
	goto T1889;
	goto T1891;
T1891:;
	(void)((*(LnkLI277))(VV[98],VV[99]));
	goto T1889;
T1889:;
	{object V1066 = (*(LnkLI278))((V1063));
	VMR59(V1066)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-CLASS-CAN-PRECEDE-P	*/

static object LI66(V1068)

object V1068;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;
	if(((V1068))==Cnil){
	goto T1896;}
	{object V1069;
	V1069= CMPcar((V1068));
	{register object V1070;
	register object V1071;
	V1070= CMPcdr((V1068));
	V1071= CMPcar((V1070));
	goto T1903;
T1903:;
	if(!(((V1070))==Cnil)){
	goto T1904;}
	goto T1898;
	goto T1904;
T1904:;
	{register object V1072;
	register object V1073;
	register object V1074;
	register object V1075;
	V1072= (V1071);
	V1073= (V1069);
	V1074= VV[100];
	base[3]= (V1072);
	base[5]= (V1073);
	base[6]= (V1074);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk279)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	V1075= vs_base[0];
	base[3]= (V1073);
	base[4]= (V1074);
	base[5]= (V1075);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk280)();
	vs_top=sup;}
	V1070= CMPcdr((V1070));
	V1071= CMPcar((V1070));
	goto T1903;}}
	goto T1898;
T1898:;
	V1068= CMPcdr((V1068));
	goto TTL;
	goto T1896;
T1896:;
	{object V1076 = Cnil;
	VMR60(V1076)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLASS-CAN-PRECEDE-P	*/

static object LI67(V1079,V1080)

object V1079;object V1080;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	V1082 = (V1080);
	base[0]= (V1079);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk281)(Lclptr281);
	vs_top=sup;
	V1083= vs_base[0];
	{register object x= V1082,V1081= V1083;
	while(V1081!=Cnil)
	if(eql(x,V1081->c.c_car)){
	{object V1084 = V1081;
	VMR61(V1084)}
	}else V1081=V1081->c.c_cdr;
	{object V1085 = Cnil;
	VMR61(V1085)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-SLOTS	*/

static object LI68(V1088,V1089)

object V1088;object V1089;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	{register object V1090;
	register object V1091;
	V1090= Cnil;
	V1091= Cnil;
	{register object V1092;
	register object V1093;
	V1092= (V1089);
	V1093= CMPcar((V1092));
	goto T1933;
T1933:;
	if(!(((V1092))==Cnil)){
	goto T1934;}
	goto T1929;
	goto T1934;
T1934:;
	{register object V1094;
	base[1]= (V1093);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V1094= vs_base[0];
	if(!(((V1094))==(VV[19]))){
	goto T1942;}
	V1090= make_cons(V1093,(V1090));
	goto T1938;
	goto T1942;
T1942:;
	base[1]= (V1094);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1938;}
	V1091= make_cons(V1093,(V1091));}
	goto T1938;
T1938:;
	V1092= CMPcdr((V1092));
	V1093= CMPcar((V1092));
	goto T1933;}
	goto T1929;
T1929:;
	{object V1097;
	object V1098;
	object V1099;
	object V1100;
	object V1101;
	object V1102;
	object V1103;
	base[8]=VV[230]->s.s_gfdef;
	base[9]= (V1090);
	base[10]= (VV[283]->s.s_gfdef);
	base[11]= VV[101];
	base[12]= (VV[284]->s.s_gfdef);
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk285)();
	vs_top=sup;
	V1106= vs_base[0];
	{object V1104;
	object V1105= V1106;
	if(V1105==Cnil){
	V1097= Cnil;
	goto T1954;}
	base[7]=V1104=MMcons(Cnil,Cnil);
	goto T1955;
T1955:;
	base[9]= (V1105->c.c_car);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	(V1104->c.c_car)= vs_base[0];
	if((V1105=MMcdr(V1105))==Cnil){
	V1097= base[7];
	goto T1954;}
	V1104=MMcdr(V1104)=MMcons(Cnil,Cnil);
	goto T1955;}
	goto T1954;
T1954:;
	V1098= CMPmake_fixnum((long)length((V1097)));
	V1099= (*(LnkLI286))((V1091));
	base[7]= (V1088);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk287)(Lclptr287);
	vs_top=sup;
	V1100= vs_base[0];
	if((V1100)==Cnil){
	V1101= Cnil;
	goto T1967;}
	V1101= ((V1100))->v.v_self[9];
	goto T1967;
T1967:;
	if((V1100)==Cnil){
	V1102= Cnil;
	goto T1968;}
	V1102= ((V1100))->v.v_self[10];
	goto T1968;
T1968:;
	if(((V1100))!=Cnil){
	goto T1971;}
	V1103= (VFUN_NARGS=2,(*(LnkLI257))((V1098),(V1088)));
	goto T1969;
	goto T1971;
T1971:;
	if(!(equal((V1097),(V1101)))){
	goto T1974;}
	{register object V1107;
	object V1108;
	register object V1109;
	object V1110;
	V1107= (V1102);
	V1108= Cnil;
	V1109= (V1099);
	V1110= Cnil;
	goto T1983;
T1983:;
	{object V1111;
	if(!(((V1107))==Cnil)){
	goto T1989;}
	goto T1977;
	goto T1989;
T1989:;
	V1111= CMPcar((V1107));
	V1107= CMPcdr((V1107));
	V1108= (V1111);}
	{object V1112;
	if(!(((V1109))==Cnil)){
	goto T1997;}
	goto T1977;
	goto T1997;
T1997:;
	V1112= CMPcar((V1109));
	V1109= CMPcdr((V1109));
	V1110= (V1112);}
	if((CMPcar((V1108)))==(CMPcar((V1110)))){
	goto T1984;}
	goto T1974;
	goto T1984;
T1984:;
	goto T1983;}
	goto T1977;
T1977:;
	V1103= (V1100);
	goto T1969;
	goto T1974;
T1974:;
	base[7]= (V1088);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk288)(Lclptr288);
	vs_top=sup;
	base[7]= (V1088);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk287)(Lclptr287);
	vs_top=sup;
	V1103= vs_base[0];
	goto T1969;
T1969:;
	if(!((VV[102])->s.s_gfdef!=OBJNULL)){
	goto T2011;}
	base[7]= (V1089);
	base[8]= V1088;
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk102)(Lclptr102);
	vs_top=sup;
	goto T2009;
	goto T2011;
T2011:;
	(void)((*(LnkLI277))(VV[102],VV[103]));
	goto T2009;
T2009:;
	(void)(((V1103))->v.v_self[9]= ((V1097)));
	(void)(((V1103))->v.v_self[10]= ((V1099)));
	(void)(((V1103))->v.v_self[12]= ((V1098)));
	if(!((VV[104])->s.s_gfdef!=OBJNULL)){
	goto T2019;}
	base[7]= (V1103);
	base[8]= V1088;
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;
	goto T2007;
	goto T2019;
T2019:;
	(void)((*(LnkLI277))(VV[104],VV[105]));
	goto T2007;
T2007:;
	if(((V1100))==((V1103))){
	goto T2024;}
	{object V1114 = (*(LnkLI258))((V1088));
	VMR62(V1114)}
	goto T2024;
T2024:;
	{object V1115 = Cnil;
	VMR62(V1115)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-CLASS-SLOTS	*/

static object LI69(V1117)

object V1117;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	{register object V1118;
	register object V1119;
	V1118= Cnil;
	V1119= Cnil;
	{register object V1120;
	register object V1121;
	V1120= (V1117);
	V1121= CMPcar((V1120));
	goto T2032;
T2032:;
	if(!(((V1120))==Cnil)){
	goto T2033;}
	goto T2028;
	goto T2033;
T2033:;
	{register object V1122;
	base[1]= (V1121);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V1124= vs_base[0];
	base[2]= (V1121);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk31)(Lclptr31);
	vs_top=sup;
	V1125= vs_base[0];
	{register object x= V1124,V1123= V1125;
	while(V1123!=Cnil)
	if(eql(x,V1123->c.c_car->c.c_car) &&V1123->c.c_car != Cnil){
	V1122= (V1123->c.c_car);
	goto T2038;
	}else V1123=V1123->c.c_cdr;
	V1122= Cnil;}
	goto T2038;
T2038:;
	if(((V1118))!=Cnil){
	goto T2045;}
	V1119= make_cons((V1122),Cnil);
	V1118= (V1119);
	goto T2037;
	goto T2045;
T2045:;
	V1127= make_cons((V1122),Cnil);
	((V1119))->c.c_cdr = /* INLINE-ARGS */V1127;
	V1126= (V1119);
	V1119= CMPcdr(V1126);}
	goto T2037;
T2037:;
	V1120= CMPcdr((V1120));
	V1121= CMPcar((V1120));
	goto T2032;}
	goto T2028;
T2028:;
	{object V1128 = (V1118);
	VMR63(V1128)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-LAYOUT	*/

static object LI70(V1131,V1132)

object V1131;object V1132;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	{object V1133;
	register object V1134;
	V1133= Cnil;
	V1134= Cnil;
	{register object V1135;
	register object V1136;
	V1135= (V1132);
	V1136= CMPcar((V1135));
	goto T2063;
T2063:;
	if(!(((V1135))==Cnil)){
	goto T2064;}
	goto T2059;
	goto T2064;
T2064:;
	base[3]= (V1136);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V1137= vs_base[0];
	if(!((V1137)==(VV[19]))){
	goto T2068;}
	{register object V1138;
	base[3]= (V1136);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V1138= vs_base[0];
	if(((V1133))!=Cnil){
	goto T2076;}
	V1134= make_cons((V1138),Cnil);
	V1133= (V1134);
	goto T2068;
	goto T2076;
T2076:;
	V1140= make_cons((V1138),Cnil);
	((V1134))->c.c_cdr = /* INLINE-ARGS */V1140;
	V1139= (V1134);
	V1134= CMPcdr(V1139);}
	goto T2068;
T2068:;
	V1135= CMPcdr((V1135));
	V1136= CMPcar((V1135));
	goto T2063;}
	goto T2059;
T2059:;
	base[0]= (V1133);}
	base[1]= Cnil;
	base[3]= CMPcar((V1131));
	base[4]= VV[103];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk289)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2090;}
	base[2]= (V1131);
	goto T2088;
	goto T2090;
T2090:;
	base[2]= CMPcdr((V1131));
	goto T2088;
T2088:;
	vs_top=(vs_base=base+2)+1;
	L71(base);
	vs_top=sup;
	V1141= append(base[0],base[1]);
	{object V1142 = reverse(/* INLINE-ARGS */V1141);
	VMR64(V1142)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-GFS-OF-CLASS	*/

static object LI74(V1144)

object V1144;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	base[0]=MMcons((V1144),Cnil);
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk268)(Lclptr268);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2095;}
	{object V1145;
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk99)(Lclptr99);
	vs_top=sup;
	V1145= vs_base[0];{object V1146;
	{register object x= (VV[106]->s.s_dbind),V1147= (V1145);
	while(V1147!=Cnil)
	if(eql(x,V1147->c.c_car)){
	V1146= V1147;
	goto T2103;
	}else V1147=V1147->c.c_cdr;
	V1146= Cnil;}
	goto T2103;
T2103:;
	if(V1146==Cnil)goto T2102;
	if((V1146)==Cnil){
	goto T2095;}
	goto T2099;
	goto T2102;
T2102:;}
	{register object x= (VV[107]->s.s_dbind),V1148= (V1145);
	while(V1148!=Cnil)
	if(eql(x,V1148->c.c_car)){
	goto T2099;
	}else V1148=V1148->c.c_cdr;
	goto T2095;}}
	goto T2099;
T2099:;
	base[2]= VV[8];
	base[3]= VV[9];
	vs_top=(vs_base=base+2)+2;
	Lmake_hash_table();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	L75(base);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC131,Cnil,base[0],Cdata);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	Lmaphash();
	vs_top=sup;
	{object V1149 = vs_base[0];
	VMR65(V1149)}
	goto T2095;
T2095:;
	{object V1150 = Cnil;
	VMR65(V1150)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-INITS	*/

static object LI76(V1153,V1154)

object V1153;object V1154;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	base[0]= ({object _tmp=get(VV[190],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[190])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[190])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[1]= V1154;
	base[2]= V1153;
	base[3]= VV[29];
	vs_top=(vs_base=base+1)+3;
	{object _funobj = base[0];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	{object V1158 = vs_base[0];
	VMR66(V1158)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-DEFAULT-INITARGS (SLOT-CLASS))	*/

static object LI79(V1162,V1163,V1164)

object V1162;object V1163;object V1164;
{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	base[0]= (V1164);
	{object V1166;
	base[2]= base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk99)(Lclptr99);
	vs_top=sup;
	V1166= vs_base[0];
	base[2]= base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk290)(Lclptr290);
	vs_top=sup;
	base[1]= vs_base[0];
	{object V1167;
	base[2]= (V1166);
	vs_top=(vs_base=base+2)+1;
	L80(base);
	vs_top=sup;
	V1167= vs_base[0];
	base[2]= (V1167);
	base[3]= VV[8];
	base[4]= (VV[9]->s.s_gfdef);
	base[5]= VV[101];
	base[6]= (VV[291]->s.s_gfdef);
	base[7]= VV[108];
	base[8]= Ct;
	vs_top=(vs_base=base+2)+7;
	(void) (*Lnk292)();
	vs_top=sup;
	{object V1168 = vs_base[0];
	VMR67(V1168)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD DIRECT-SLOT-DEFINITION-CLASS (STD-CLASS T))	*/

static object LI81(V1173,V1174,V1175,V1176)

object V1173;object V1174;object V1175;object V1176;
{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	{object V1178 = (VFUN_NARGS=1,(*(LnkLI214))(VV[109]));
	VMR68(V1178)}
	return Cnil;
}
/*	function definition for MAKE-DIRECT-SLOTD	*/

static void L82()
{register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_check;
	{object V1179;
	object V1180;
	check_arg(2);
	V1179=(base[0]);
	V1180=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1181;
	V1181= listA(3,VV[65],(V1179),(V1180));
	base[2]=VV[218]->s.s_gfdef;
	base[4]= (V1179);
	base[5]= (V1181);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	base[3]= vs_base[0];
	{object V1182;
	V1182= (V1181);
	 vs_top=base+4;
	 while(V1182!=Cnil)
	 {vs_push((V1182)->c.c_car);V1182=(V1182)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk218)(Lclptr218);
	return;}
	}
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOTS (STD-CLASS))	*/

static object LI83(V1186,V1187,V1188)

object V1186;object V1187;object V1188;
{	 VMB70 VMS70 VMV70
	goto TTL;
TTL:;
	{register object V1190;
	V1190= Cnil;
	{object V1191;
	object V1192;
	base[2]= (V1188);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk99)(Lclptr99);
	vs_top=sup;
	V1191= vs_base[0];
	V1192= CMPcar((V1191));
	goto T2147;
T2147:;
	if(!(((V1191))==Cnil)){
	goto T2148;}
	goto T2142;
	goto T2148;
T2148:;
	{object V1193;
	base[2]= (V1192);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk245)(Lclptr245);
	vs_top=sup;
	V1193= vs_base[0];
	{register object V1194;
	register object V1195;
	V1194= (V1193);
	V1195= CMPcar((V1194));
	goto T2158;
T2158:;
	if(!(((V1194))==Cnil)){
	goto T2159;}
	goto T2152;
	goto T2159;
T2159:;
	{register object V1196;
	register object V1197;
	base[5]= (V1195);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V1196= vs_base[0];
	{register object x= (V1196),V1198= (V1190);
	while(V1198!=Cnil)
	if(EQ(x,V1198->c.c_car->c.c_car) &&V1198->c.c_car != Cnil){
	V1197= (V1198->c.c_car);
	goto T2166;
	}else V1198=V1198->c.c_cdr;
	V1197= Cnil;}
	goto T2166;
T2166:;
	if(((V1197))==Cnil){
	goto T2168;}
	{register object V1200;
	register object V1201;
	V1200= (V1197);
	V1201= make_cons(V1195,CMPcdr((V1200)));
	((V1200))->c.c_cdr = (V1201);
	goto T2163;}
	goto T2168;
T2168:;
	{object V1202;
	V1202= list(2,(V1196),(V1195));
	V1190= make_cons((V1202),(V1190));}}
	goto T2163;
T2163:;
	V1194= CMPcdr((V1194));
	V1195= CMPcar((V1194));
	goto T2158;}}
	goto T2152;
T2152:;
	V1191= CMPcdr((V1191));
	V1192= CMPcar((V1191));
	goto T2147;}
	goto T2142;
T2142:;
	{object V1203;
	object V1204= (V1190);
	if(V1204==Cnil){
	{object V1205 = Cnil;
	VMR70(V1205)}}
	base[0]=V1203=MMcons(Cnil,Cnil);
	goto T2185;
T2185:;
	base[1]= (V1188);
	base[2]= nreverse(CMPcdr((V1204->c.c_car)));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk294)(Lclptr294);
	vs_top=sup;
	(V1203->c.c_car)= vs_base[0];
	if((V1204=MMcdr(V1204))==Cnil){
	{object V1207 = base[0];
	VMR70(V1207)}}
	V1203=MMcdr(V1203)=MMcons(Cnil,Cnil);
	goto T2185;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOTS :AROUND (STD-CLASS))	*/

static object LI84(V1211,V1212,V1213)

object V1211;object V1212;object V1213;
{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	{object V1215;
	object V1216;
	object V1217;
	object V1218;
	if(((V1212))==Cnil){
	goto T2194;}
	base[0]= (V1212);
	base[1]= VV[110];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2198;}
	V1215= (
	V1219 = STREF(object,(V1212),0),
	(type_of(V1219) == t_sfun ?(*((V1219)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V1219)==t_vfun) ?
	(*((V1219)->sfn.sfn_self)):
	(fcall.fun=(V1219),fcalln))(STREF(object,(V1212),4),STREF(object,(V1212),8),(V1213)));
	goto T2192;
	goto T2198;
T2198:;
	if(!(type_of((V1212))==t_fixnum)){
	goto T2203;}
	{object V1220;
	object V1221;
	if(type_of(V1213)==t_structure){
	goto T2209;}
	goto T2207;
	goto T2209;
T2209:;
	if(!(((V1213)->str.str_def)==(VV[111]))){
	goto T2207;}
	V1220= STREF(object,(V1213),4);
	goto T2205;
	goto T2207;
T2207:;{object V1223;
	V1223= (VV[2]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1213);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V1224= vs_base[0];
	if(!((V1223)==(CMPcar(V1224)))){
	goto T2212;}}
	V1220= CMPcar(((V1213))->cc.cc_turbo[12]);
	goto T2205;
	goto T2212;
T2212:;
	V1220= Cnil;
	goto T2205;
T2205:;
	if(((V1220))==Cnil){
	goto T2219;}
	V1221= ((V1220))->v.v_self[fix((V1212))];
	goto T2217;
	goto T2219;
T2219:;
	V1221= Cnil;
	goto T2217;
T2217:;
	if(!(((V1221))==(VV[3]))){
	goto T2222;}
	base[2]= (V1213);
	base[3]= (V1212);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk296)();
	vs_top=sup;
	V1215= vs_base[0];
	goto T2192;
	goto T2222;
T2222:;
	V1215= (V1221);
	goto T2192;}
	goto T2203;
T2203:;
	base[0]= V1212;
	base[1]= VV[112];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2227;}
	{object V1226;
	object V1227;
	object V1228;
	V1226= STREF(object,(V1212),0);
	V1227= make_cons((V1213),Cnil);
	V1228= STREF(object,(V1212),4);
	if(((V1228))==Cnil){
	goto T2235;}
	if((CMPcdr((V1228)))!=Cnil){
	goto T2235;}
	V1215= (
	(type_of((V1226)) == t_sfun ?(*(((V1226))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V1226))==t_vfun) ?
	(*(((V1226))->sfn.sfn_self)):
	(fcall.fun=((V1226)),fcalln))((V1227),CMPcar((V1228))));
	goto T2192;
	goto T2235;
T2235:;
	base[0]= (V1226);
	base[1]= (V1227);
	{object V1229;
	V1229= (V1228);
	 vs_top=base+2;
	 while(V1229!=Cnil)
	 {vs_push((V1229)->c.c_car);V1229=(V1229)->c.c_cdr;}
	vs_base=base+1;}
	{object _funobj = base[0];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1215= vs_base[0];
	goto T2192;}
	goto T2227;
T2227:;
	base[0]= V1212;
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2243;}
	V1215= (
	(type_of((V1212)) == t_sfun ?(*(((V1212))->sfn.sfn_self)):
	(fcall.argd=1,type_of((V1212))==t_vfun) ?
	(*(((V1212))->sfn.sfn_self)):
	(fcall.fun=((V1212)),fcalln))((V1213)));
	goto T2192;
	goto T2243;
T2243:;
	base[1]= VV[113];
	base[2]= V1212;
	base[3]= VV[114];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk297)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1215= vs_base[0];
	goto T2192;
	goto T2194;
T2194:;
	base[0]= VV[115];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1215= vs_base[0];
	goto T2192;
T2192:;
	base[0]= (V1213);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk99)(Lclptr99);
	vs_top=sup;
	V1216= vs_base[0];
	V1217= Cnil;
	V1218= Cnil;
	{register object V1230;
	register object V1231;
	V1230= (V1215);
	V1231= CMPcar((V1230));
	goto T2257;
T2257:;
	if(!(((V1230))==Cnil)){
	goto T2258;}
	goto T2253;
	goto T2258;
T2258:;
	{object V1232;
	base[1]= (V1231);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V1232= vs_base[0];
	if(!(((V1232))==(VV[19]))){
	goto T2266;}
	V1217= make_cons(V1231,(V1217));
	goto T2262;
	goto T2266;
T2266:;
	base[1]= (V1232);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2262;}
	V1218= make_cons(V1231,(V1218));}
	goto T2262;
T2262:;
	V1230= CMPcdr((V1230));
	V1231= CMPcar((V1230));
	goto T2257;}
	goto T2253;
T2253:;
	{object V1235;
	V1235= (*(LnkLI298))((V1216),(V1217));
	{register object V1236;
	register object V1237;
	V1236= (V1217);
	V1237= CMPcar((V1236));
	goto T2283;
T2283:;
	if(!(((V1236))==Cnil)){
	goto T2284;}
	goto T2278;
	goto T2284;
T2284:;
	{object V1239;
	base[3]= (V1237);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V1235);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk299)();
	vs_top=sup;
	V1239= vs_base[0];
	V1240= ({object _tmp=get(VV[284],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[284])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[284])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V1241 = (V1239);
	V1242 = V1237;
	(void)((
	V1243 = V1240,
	(type_of(V1243) == t_sfun ?(*((V1243)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V1243)==t_vfun) ?
	(*((V1243)->sfn.sfn_self)):
	(fcall.fun=(V1243),fcalln))(V1241,V1242)));}
	V1236= CMPcdr((V1236));
	V1237= CMPcar((V1236));
	goto T2283;}}
	goto T2278;
T2278:;
	{register object V1244;
	register object V1245;
	V1244= (V1218);
	V1245= CMPcar((V1244));
	goto T2303;
T2303:;
	if(!(((V1244))==Cnil)){
	goto T2304;}
	goto T2299;
	goto T2304;
T2304:;
	{object V1247;
	base[2]= (V1245);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V1249= vs_base[0];
	base[3]= (V1245);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk31)(Lclptr31);
	vs_top=sup;
	V1250= vs_base[0];
	{register object x= V1249,V1248= V1250;
	while(V1248!=Cnil)
	if(eql(x,V1248->c.c_car->c.c_car) &&V1248->c.c_car != Cnil){
	V1247= (V1248->c.c_car);
	goto T2309;
	}else V1248=V1248->c.c_cdr;
	V1247= Cnil;}
	goto T2309;
T2309:;
	V1251= ({object _tmp=get(VV[284],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[284])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[284])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V1252 = (V1247);
	V1253 = V1245;
	(void)((
	V1254 = V1251,
	(type_of(V1254) == t_sfun ?(*((V1254)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V1254)==t_vfun) ?
	(*((V1254)->sfn.sfn_self)):
	(fcall.fun=(V1254),fcalln))(V1252,V1253)));}
	V1244= CMPcdr((V1244));
	V1245= CMPcar((V1244));
	goto T2303;}
	goto T2299;
T2299:;
	base[0]=VV[300]->s.s_gfdef;
	{
	object V1255= (V1215);
	if(V1255==Cnil){
	goto T2321;}
	goto T2322;
T2322:;
	base[1]= (V1255->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	if((V1255=MMcdr(V1255))==Cnil){
	goto T2321;}
	goto T2322;}
	goto T2321;
T2321:;
	{object V1256 = (V1215);
	VMR71(V1256)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOTS (STRUCTURE-CLASS))	*/

static object LI85(V1260,V1261,V1262)

object V1260;object V1261;register object V1262;
{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V1264;
	object V1265;
	V1264= CMPcar((V1260));
	V1265= CMPcdr((V1260));
	{object V1266;
	if(type_of(V1262)==t_structure){
	goto T2335;}
	goto T2333;
	goto T2335;
T2335:;
	if(!(((V1262)->str.str_def)==(VV[116]))){
	goto T2333;}
	V1266= STREF(object,(V1262),4);
	goto T2331;
	goto T2333;
T2333:;{object V1268;
	V1268= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1262);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V1269= vs_base[0];
	if(!((V1268)==(CMPcar(V1269)))){
	goto T2338;}}
	V1266= CMPcar(((V1262))->cc.cc_turbo[12]);
	goto T2331;
	goto T2338;
T2338:;
	V1266= Cnil;
	goto T2331;
T2331:;
	{register object V1273;
	V1273= ((V1264))->v.v_self[1];
	if(!(type_of(V1273)==t_fixnum)){
	goto T2350;}
	V1273= ((V1266))->v.v_self[fix((V1273))];
	goto T2348;
	goto T2350;
T2350:;
	V1273= VV[3];
	goto T2348;
T2348:;
	if(!(((V1273))==(VV[3]))){
	goto T2353;}
	base[1]= (V1262);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk301)(Lclptr301);
	vs_top=sup;
	V1272= vs_base[0];
	goto T2345;
	goto T2353;
T2353:;
	V1272= (V1273);}
	goto T2345;
T2345:;
	V1275= reverse(V1272);
	{object V1270;
	object V1271= /* INLINE-ARGS */V1275;
	if(V1271==Cnil){
	{object V1276 = Cnil;
	VMR72(V1276)}}
	base[0]=V1270=MMcons(Cnil,Cnil);
	goto T2344;
T2344:;
	base[2]= (V1271->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk245)(Lclptr245);
	vs_top=sup;
	V1280= vs_base[0];
	{object V1278;
	object V1279= V1280;
	if(V1279==Cnil){
	(V1270->c.c_cdr)= Cnil;
	goto T2356;}
	base[1]=V1278=MMcons(Cnil,Cnil);
	goto T2357;
T2357:;
	base[2]= (V1262);
	base[3]= make_cons((V1279->c.c_car),Cnil);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk294)(Lclptr294);
	vs_top=sup;
	(V1278->c.c_car)= vs_base[0];
	if((V1279=MMcdr(V1279))==Cnil){
	(V1270->c.c_cdr)= base[1];
	goto T2356;}
	V1278=MMcdr(V1278)=MMcons(Cnil,Cnil);
	goto T2357;}
	goto T2356;
T2356:;
	while(MMcdr(V1270)!=Cnil)V1270=MMcdr(V1270);
	if((V1271=MMcdr(V1271))==Cnil){
	base[0]=base[0]->c.c_cdr;
	{object V1282 = base[0];
	VMR72(V1282)}}
	goto T2344;}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOTS :AROUND (STRUCTURE-CLASS))	*/

static object LI86(V1286,V1287,V1288)

object V1286;register object V1287;register object V1288;
{	 VMB73 VMS73 VMV73
	goto TTL;
TTL:;
	{object V1290;
	if(((V1287))==Cnil){
	goto T2368;}
	base[0]= (V1287);
	base[1]= VV[110];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2372;}
	V1290= (
	V1291 = STREF(object,(V1287),0),
	(type_of(V1291) == t_sfun ?(*((V1291)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V1291)==t_vfun) ?
	(*((V1291)->sfn.sfn_self)):
	(fcall.fun=(V1291),fcalln))(STREF(object,(V1287),4),STREF(object,(V1287),8),(V1288)));
	goto T2366;
	goto T2372;
T2372:;
	if(!(type_of((V1287))==t_fixnum)){
	goto T2377;}
	{object V1292;
	object V1293;
	if(type_of(V1288)==t_structure){
	goto T2383;}
	goto T2381;
	goto T2383;
T2383:;
	if(!(((V1288)->str.str_def)==(VV[117]))){
	goto T2381;}
	V1292= STREF(object,(V1288),4);
	goto T2379;
	goto T2381;
T2381:;{object V1295;
	V1295= (VV[2]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1288);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V1296= vs_base[0];
	if(!((V1295)==(CMPcar(V1296)))){
	goto T2386;}}
	V1292= CMPcar(((V1288))->cc.cc_turbo[12]);
	goto T2379;
	goto T2386;
T2386:;
	V1292= Cnil;
	goto T2379;
T2379:;
	if(((V1292))==Cnil){
	goto T2393;}
	V1293= ((V1292))->v.v_self[fix((V1287))];
	goto T2391;
	goto T2393;
T2393:;
	V1293= Cnil;
	goto T2391;
T2391:;
	if(!(((V1293))==(VV[3]))){
	goto T2396;}
	base[2]= (V1288);
	base[3]= (V1287);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk296)();
	vs_top=sup;
	V1290= vs_base[0];
	goto T2366;
	goto T2396;
T2396:;
	V1290= (V1293);
	goto T2366;}
	goto T2377;
T2377:;
	{register object V1297;
	V1297= (V1287);
	base[0]= (V1297);
	base[1]= VV[112];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2401;}
	{object V1298;
	object V1299;
	register object V1300;
	V1298= STREF(object,(V1287),0);
	V1299= make_cons((V1288),Cnil);
	V1300= STREF(object,(V1287),4);
	if(((V1300))==Cnil){
	goto T2409;}
	if((CMPcdr((V1300)))!=Cnil){
	goto T2409;}
	V1290= (
	(type_of((V1298)) == t_sfun ?(*(((V1298))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V1298))==t_vfun) ?
	(*(((V1298))->sfn.sfn_self)):
	(fcall.fun=((V1298)),fcalln))((V1299),CMPcar((V1300))));
	goto T2366;
	goto T2409;
T2409:;
	base[0]= (V1298);
	base[1]= (V1299);
	{object V1301;
	V1301= (V1300);
	 vs_top=base+2;
	 while(V1301!=Cnil)
	 {vs_push((V1301)->c.c_car);V1301=(V1301)->c.c_cdr;}
	vs_base=base+1;}
	{object _funobj = base[0];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1290= vs_base[0];
	goto T2366;}
	goto T2401;
T2401:;
	base[0]= (V1297);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2417;}
	V1290= (
	(type_of((V1287)) == t_sfun ?(*(((V1287))->sfn.sfn_self)):
	(fcall.argd=1,type_of((V1287))==t_vfun) ?
	(*(((V1287))->sfn.sfn_self)):
	(fcall.fun=((V1287)),fcalln))((V1288)));
	goto T2366;
	goto T2417;
T2417:;
	base[1]= VV[113];
	base[2]= (V1297);
	base[3]= VV[118];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk297)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1290= vs_base[0];
	goto T2366;}
	goto T2368;
T2368:;
	base[0]= VV[115];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1290= vs_base[0];
	goto T2366;
T2366:;
	base[0]=VV[300]->s.s_gfdef;
	{
	object V1302= (V1290);
	if(V1302==Cnil){
	goto T2425;}
	goto T2426;
T2426:;
	base[1]= (V1302->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	if((V1302=MMcdr(V1302))==Cnil){
	goto T2425;}
	goto T2426;}
	goto T2425;
T2425:;
	{object V1303 = (V1290);
	VMR73(V1303)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD COMPUTE-EFFECTIVE-SLOT-DEFINITION (SLOT-CLASS T))	*/

static void L87()
{register object *base=vs_base;
	register object *sup=base+VM74; VC74
	vs_check;
	{object V1304;
	object V1305;
	object V1306;
	object V1307;
	check_arg(4);
	V1304=(base[0]);
	V1305=(base[1]);
	V1306=(base[2]);
	V1307=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1309;
	object V1310;
	base[6]= (V1306);
	base[7]= (V1307);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk302)(Lclptr302);
	vs_top=sup;
	V1309= vs_base[0];
	base[6]= (V1306);
	base[7]= (V1309);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk303)(Lclptr303);
	vs_top=sup;
	V1310= vs_base[0];
	base[6]=VV[218]->s.s_gfdef;
	base[7]= (V1310);
	{object V1311;
	V1311= (V1309);
	 vs_top=base+8;
	 while(V1311!=Cnil)
	 {vs_push((V1311)->c.c_car);V1311=(V1311)->c.c_cdr;}
	vs_base=base+7;}
	(void) (*Lnk218)(Lclptr218);
	return;}
	}
}
/*	local entry for function (FAST-METHOD EFFECTIVE-SLOT-DEFINITION-CLASS (STD-CLASS T))	*/

static object LI88(V1316,V1317,V1318,V1319)

object V1316;object V1317;object V1318;object V1319;
{	 VMB75 VMS75 VMV75
	goto TTL;
TTL:;
	{object V1321 = (VFUN_NARGS=1,(*(LnkLI214))(VV[119]));
	VMR75(V1321)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD EFFECTIVE-SLOT-DEFINITION-CLASS (STRUCTURE-CLASS T))	*/

static object LI89(V1326,V1327,V1328,V1329)

object V1326;object V1327;object V1328;object V1329;
{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	{object V1331 = (VFUN_NARGS=1,(*(LnkLI214))(VV[120]));
	VMR76(V1331)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-EFFECTIVE-SLOT-DEFINITION-INITARGS (SLOT-CLASS T))	*/

static object LI90(V1336,V1337,V1338,V1339)

object V1336;object V1337;object V1338;object V1339;
{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V1341;
	object V1342;
	object V1343;
	register object V1344;
	object V1345;
	register object V1346;
	register object V1347;
	register object V1348;
	register object V1349;
	V1341= Cnil;
	V1342= Cnil;
	V1343= Cnil;
	V1344= Cnil;
	V1345= Cnil;
	V1346= Ct;
	V1347= Cnil;
	V1348= Cnil;
	V1349= Cnil;
	{register object V1350;
	register object V1351;
	V1350= (V1339);
	V1351= CMPcar((V1350));
	goto T2462;
T2462:;
	if(!(((V1350))==Cnil)){
	goto T2463;}
	goto T2458;
	goto T2463;
T2463:;
	if(((V1351))==Cnil){
	goto T2467;}
	if(((V1347))!=Cnil){
	goto T2470;}
	base[1]= (V1351);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V1341= vs_base[0];
	V1347= Ct;
	goto T2470;
T2470:;
	if(((V1348))!=Cnil){
	goto T2477;}
	base[1]= (V1351);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2477;}
	base[1]= (V1351);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk304)(Lclptr304);
	vs_top=sup;
	V1343= vs_base[0];
	base[1]= (V1351);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V1342= vs_base[0];
	V1348= Ct;
	goto T2477;
T2477:;
	if(((V1349))!=Cnil){
	goto T2490;}
	base[1]= (V1351);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V1345= vs_base[0];
	V1349= Ct;
	goto T2490;
T2490:;
	base[1]= (V1351);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk305)(Lclptr305);
	vs_top=sup;
	V1352= vs_base[0];
	V1353 = (V1344);
	V1344= append(V1352,V1353);
	{register object V1354;
	base[1]= (V1351);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk306)(Lclptr306);
	vs_top=sup;
	V1354= vs_base[0];
	if(!(((V1346))==(Ct))){
	goto T2505;}
	V1346= (V1354);
	goto T2503;
	goto T2505;
T2505:;
	base[1]= (V1346);
	base[2]= (V1354);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk307)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2508;}
	goto T2503;
	goto T2508;
T2508:;
	V1346= list(3,VV[121],(V1346),(V1354));
	goto T2503;
T2503:;}
	goto T2467;
T2467:;
	V1350= CMPcdr((V1350));
	V1351= CMPcar((V1350));
	goto T2462;}
	goto T2458;
T2458:;
	base[0]= VV[50];
	base[1]= (V1341);
	base[2]= VV[122];
	base[3]= (V1343);
	base[4]= VV[123];
	base[5]= (V1342);
	base[6]= VV[124];
	base[7]= (V1344);
	base[8]= VV[125];
	base[9]= (V1345);
	base[10]= VV[126];
	base[11]= (V1346);
	base[12]= VV[65];
	base[13]= (V1338);
	vs_top=(vs_base=base+0)+14;
	Llist();
	vs_top=sup;
	{object V1355 = vs_base[0];
	VMR77(V1355)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-EFFECTIVE-SLOT-DEFINITION-INITARGS :AROUND (STRUCTURE-CLASS T))	*/

static object LI91(V1360,V1361,V1362,V1363)

object V1360;register object V1361;register object V1362;register object V1363;
{	 VMB78 VMS78 VMV78
	goto TTL;
TTL:;
	{object V1365;
	V1365= CMPcar((V1363));
	base[0]= (V1365);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk249)(Lclptr249);
	vs_top=sup;
	V1366= vs_base[0];
	base[0]= (V1365);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	V1367= vs_base[0];
	base[0]= (V1365);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk309)(Lclptr309);
	vs_top=sup;
	V1368= vs_base[0];
	if(((V1361))==Cnil){
	goto T2543;}
	base[0]= (V1361);
	base[1]= VV[110];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2547;}
	base[0]= STREF(object,(V1361),0);
	base[1]= STREF(object,(V1361),4);
	base[2]= STREF(object,(V1361),8);
	base[3]= (V1362);
	base[4]= (V1363);
	vs_top=(vs_base=base+1)+4;
	{object _funobj = base[0];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1369= vs_base[0];
	goto T2541;
	goto T2547;
T2547:;
	if(!(type_of((V1361))==t_fixnum)){
	goto T2557;}
	{object V1371;
	if(type_of(V1362)==t_structure){
	goto T2563;}
	goto T2561;
	goto T2563;
T2563:;
	if(!(((V1362)->str.str_def)==(VV[129]))){
	goto T2561;}
	V1371= STREF(object,(V1362),4);
	goto T2559;
	goto T2561;
T2561:;{object V1373;
	V1373= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1362);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V1374= vs_base[0];
	if(!((V1373)==(CMPcar(V1374)))){
	goto T2566;}}
	V1371= CMPcar(((V1362))->cc.cc_turbo[12]);
	goto T2559;
	goto T2566;
T2566:;
	V1371= Cnil;
	goto T2559;
T2559:;
	if(((V1371))==Cnil){
	goto T2572;}
	V1369= ((V1371))->v.v_self[fix((V1361))]= (V1362);
	goto T2541;
	goto T2572;
T2572:;
	V1369= Cnil;
	goto T2541;}
	goto T2557;
T2557:;
	{register object V1375;
	V1375= (V1361);
	base[0]= (V1375);
	base[1]= VV[112];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2575;}
	{object V1376;
	object V1377;
	register object V1378;
	V1376= STREF(object,(V1361),0);
	V1377= list(2,(V1362),(V1363));
	V1378= STREF(object,(V1361),4);
	if(((V1378))==Cnil){
	goto T2583;}
	if((CMPcdr((V1378)))!=Cnil){
	goto T2583;}
	base[0]= (V1377);
	base[1]= CMPcar((V1378));
	vs_top=(vs_base=base+0)+2;
	{object _funobj = (V1376);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1369= vs_base[0];
	goto T2541;
	goto T2583;
T2583:;
	base[0]= (V1376);
	base[1]= (V1377);
	{object V1379;
	V1379= (V1378);
	 vs_top=base+2;
	 while(V1379!=Cnil)
	 {vs_push((V1379)->c.c_car);V1379=(V1379)->c.c_cdr;}
	vs_base=base+1;}
	{object _funobj = base[0];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1369= vs_base[0];
	goto T2541;}
	goto T2575;
T2575:;
	base[0]= (V1375);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2593;}
	base[0]= (V1362);
	base[1]= (V1363);
	vs_top=(vs_base=base+0)+2;
	{object _funobj = (V1361);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1369= vs_base[0];
	goto T2541;
	goto T2593;
T2593:;
	base[1]= VV[113];
	base[2]= (V1375);
	base[3]= VV[130];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk297)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1369= vs_base[0];
	goto T2541;}
	goto T2543;
T2543:;
	base[0]= VV[115];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1369= vs_base[0];
	goto T2541;
T2541:;
	{object V1380 = listA(7,VV[70],V1366,VV[127],V1367,VV[128],V1368,V1369);
	VMR78(V1380)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD READER-METHOD-CLASS (SLOT-CLASS T))	*/

static object LI92(V1386,V1387,V1388,V1389,V1390)

object V1386;object V1387;object V1388;object V1389;object V1390;
{	 VMB79 VMS79 VMV79
	goto TTL;
TTL:;
	{object V1393 = (VFUN_NARGS=1,(*(LnkLI214))(VV[131]));
	VMR79(V1393)}
	return Cnil;
}
/*	function definition for (FAST-METHOD ADD-READER-METHOD (SLOT-CLASS T T))	*/

static void L93()
{register object *base=vs_base;
	register object *sup=base+VM80; VC80
	vs_check;
	{object V1394;
	object V1395;
	register object V1396;
	object V1397;
	object V1398;
	check_arg(5);
	V1394=(base[0]);
	V1395=(base[1]);
	V1396=(base[2]);
	V1397=(base[3]);
	V1398=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]=(VV[310]->s.s_gfdef);
	base[6]= (V1397);
	base[8]=(VV[311]->s.s_gfdef);
	base[9]= VV[131];
	base[10]= Cnil;{object V1401;
	base[12]= (V1396);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk233)(Lclptr233);
	vs_top=sup;
	V1401= vs_base[0];
	if(V1401==Cnil)goto T2615;
	V1400= V1401;
	goto T2614;
	goto T2615;
T2615:;}
	V1400= VV[132];
	goto T2614;
T2614:;
	base[11]= make_cons(V1400,Cnil);
	base[12]= make_cons((V1396),Cnil);
	base[14]= (V1396);
	base[15]= (V1398);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk312)(Lclptr312);
	vs_top=sup;
	base[13]= vs_base[0];
	base[14]= VV[133];
	base[15]= (V1398);
	base[7]= simple_lispcall(base+8,7);
	lispcall(base+5,2);
	return;
	}
}
/*	local entry for function (FAST-METHOD WRITER-METHOD-CLASS (SLOT-CLASS T))	*/

static object LI94(V1407,V1408,V1409,V1410,V1411)

object V1407;object V1408;object V1409;object V1410;object V1411;
{	 VMB81 VMS81 VMV81
	goto TTL;
TTL:;
	{object V1414 = (VFUN_NARGS=1,(*(LnkLI214))(VV[134]));
	VMR81(V1414)}
	return Cnil;
}
/*	function definition for (FAST-METHOD ADD-WRITER-METHOD (SLOT-CLASS T T))	*/

static void L95()
{register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	{object V1415;
	object V1416;
	register object V1417;
	object V1418;
	object V1419;
	check_arg(5);
	V1415=(base[0]);
	V1416=(base[1]);
	V1417=(base[2]);
	V1418=(base[3]);
	V1419=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]=(VV[310]->s.s_gfdef);
	base[6]= (V1418);
	base[8]=(VV[311]->s.s_gfdef);
	base[9]= VV[134];
	base[10]= Cnil;{object V1422;
	base[12]= (V1417);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk233)(Lclptr233);
	vs_top=sup;
	V1422= vs_base[0];
	if(V1422==Cnil)goto T2636;
	V1421= V1422;
	goto T2635;
	goto T2636;
T2636:;}
	V1421= VV[132];
	goto T2635;
T2635:;
	base[11]= list(2,VV[135],V1421);
	base[12]= list(2,(VV[136]->s.s_dbind),(V1417));
	base[14]= (V1417);
	base[15]= (V1419);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk313)(Lclptr313);
	vs_top=sup;
	base[13]= vs_base[0];
	base[14]= VV[137];
	base[15]= (V1419);
	base[7]= simple_lispcall(base+8,7);
	lispcall(base+5,2);
	return;
	}
}
/*	function definition for (FAST-METHOD ADD-BOUNDP-METHOD (SLOT-CLASS T T))	*/

static void L96()
{register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_check;
	{object V1423;
	object V1424;
	register object V1425;
	object V1426;
	object V1427;
	check_arg(5);
	V1423=(base[0]);
	V1424=(base[1]);
	V1425=(base[2]);
	V1426=(base[3]);
	V1427=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]=(VV[310]->s.s_gfdef);
	base[6]= (V1426);
	base[8]=(VV[311]->s.s_gfdef);
	base[9]= VV[138];
	base[10]= Cnil;{object V1430;
	base[12]= (V1425);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk233)(Lclptr233);
	vs_top=sup;
	V1430= vs_base[0];
	if(V1430==Cnil)goto T2654;
	V1429= V1430;
	goto T2653;
	goto T2654;
T2654:;}
	V1429= VV[132];
	goto T2653;
T2653:;
	base[11]= make_cons(V1429,Cnil);
	base[12]= make_cons((V1425),Cnil);
	base[14]= (V1425);
	base[15]= (V1427);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	base[13]= vs_base[0];
	base[14]= VV[139];
	base[15]= (V1427);
	base[7]= simple_lispcall(base+8,7);
	lispcall(base+5,2);
	return;
	}
}
/*	local entry for function (FAST-METHOD REMOVE-READER-METHOD (SLOT-CLASS T))	*/

static object LI97(V1435,V1436,V1437,V1438)

object V1435;object V1436;object V1437;object V1438;
{	 VMB84 VMS84 VMV84
	goto TTL;
TTL:;
	{object V1440;
	V1441= make_cons((V1437),Cnil);
	V1440= (VFUN_NARGS=4,(*(LnkLI315))((V1438),Cnil,/* INLINE-ARGS */V1441,Cnil));
	if(((V1440))==Cnil){
	goto T2668;}
	base[0]= (V1438);
	base[1]= (V1440);
	{object V1442 = simple_symlispcall(VV[316],base+0,2);
	VMR84(V1442)}
	goto T2668;
T2668:;
	{object V1443 = Cnil;
	VMR84(V1443)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-WRITER-METHOD (SLOT-CLASS T))	*/

static object LI98(V1448,V1449,V1450,V1451)

object V1448;object V1449;object V1450;object V1451;
{	 VMB85 VMS85 VMV85
	goto TTL;
TTL:;
	{object V1453;
	V1454= list(2,(VV[136]->s.s_dbind),(V1450));
	V1453= (VFUN_NARGS=4,(*(LnkLI315))((V1451),Cnil,/* INLINE-ARGS */V1454,Cnil));
	if(((V1453))==Cnil){
	goto T2677;}
	base[0]= (V1451);
	base[1]= (V1453);
	{object V1455 = simple_symlispcall(VV[316],base+0,2);
	VMR85(V1455)}
	goto T2677;
T2677:;
	{object V1456 = Cnil;
	VMR85(V1456)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-BOUNDP-METHOD (SLOT-CLASS T))	*/

static object LI99(V1461,V1462,V1463,V1464)

object V1461;object V1462;object V1463;object V1464;
{	 VMB86 VMS86 VMV86
	goto TTL;
TTL:;
	{object V1466;
	V1467= make_cons((V1463),Cnil);
	V1466= (VFUN_NARGS=4,(*(LnkLI315))((V1464),Cnil,/* INLINE-ARGS */V1467,Cnil));
	if(((V1466))==Cnil){
	goto T2686;}
	base[0]= (V1464);
	base[1]= (V1466);
	{object V1468 = simple_symlispcall(VV[316],base+0,2);
	VMR86(V1468)}
	goto T2686;
T2686:;
	{object V1469 = Cnil;
	VMR86(V1469)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-READER-METHOD-FUNCTION (SLOT-CLASS T))	*/

static object LI100(V1474,V1475,V1476,V1477)

object V1474;object V1475;object V1476;object V1477;
{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	base[0]= (V1476);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk233)(Lclptr233);
	vs_top=sup;
	V1479= vs_base[0];
	V1480 = (V1477);
	{object V1481 = (*(LnkLI317))(V1479,V1480);
	VMR87(V1481)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-WRITER-METHOD-FUNCTION (SLOT-CLASS T))	*/

static object LI101(V1486,V1487,V1488,V1489)

object V1486;object V1487;object V1488;object V1489;
{	 VMB88 VMS88 VMV88
	goto TTL;
TTL:;
	base[0]= (V1488);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk233)(Lclptr233);
	vs_top=sup;
	V1491= vs_base[0];
	V1492 = (V1489);
	{object V1493 = (*(LnkLI318))(V1491,V1492);
	VMR88(V1493)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-BOUNDP-METHOD-FUNCTION (SLOT-CLASS T))	*/

static object LI102(V1498,V1499,V1500,V1501)

object V1498;object V1499;object V1500;object V1501;
{	 VMB89 VMS89 VMV89
	goto TTL;
TTL:;
	base[0]= (V1500);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk233)(Lclptr233);
	vs_top=sup;
	V1503= vs_base[0];
	V1504 = (V1501);
	{object V1505 = (*(LnkLI319))(V1503,V1504);
	VMR89(V1505)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD INFORM-TYPE-SYSTEM-ABOUT-CLASS (STD-CLASS T))	*/

static object LI103(V1510,V1511,V1512,V1513)

object V1510;object V1511;object V1512;object V1513;
{	 VMB90 VMS90 VMV90
	goto TTL;
TTL:;
	{object V1515 = (*(LnkLI320))((V1513));
	VMR90(V1515)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPATIBLE-META-CLASS-CHANGE-P (T T))	*/

static object LI104(V1520,V1521,V1522,V1523)

object V1520;object V1521;object V1522;object V1523;
{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	V1525= (*(LnkLI219))((V1522));
	V1526= (*(LnkLI219))((V1523));
	{object V1527 = ((/* INLINE-ARGS */V1525)==(/* INLINE-ARGS */V1526)?Ct:Cnil);
	VMR91(V1527)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD VALIDATE-SUPERCLASS (CLASS CLASS))	*/

static object LI105(V1532,V1533,V1534,V1535)

object V1532;object V1533;object V1534;object V1535;
{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;
	if(!(((V1535))==((VV[136]->s.s_dbind)))){
	goto T2715;}
	{object V1537 = Ct;
	VMR92(V1537)}
	goto T2715;
T2715:;
	V1538= (*(LnkLI219))((V1534));
	V1539= (*(LnkLI219))((V1535));
	{object V1540 = ((/* INLINE-ARGS */V1538)==(/* INLINE-ARGS */V1539)?Ct:Cnil);
	VMR92(V1540)}
	return Cnil;
}
/*	local entry for function FORCE-CACHE-FLUSHES	*/

static object LI106(V1542)

object V1542;
{	 VMB93 VMS93 VMV93
	goto TTL;
TTL:;
	{register object V1543;
	object V1544;
	base[2]= (V1542);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk287)(Lclptr287);
	vs_top=sup;
	V1543= vs_base[0];
	V1544= ((V1543))->v.v_self[8];
	if(!(((V1544))==(Ct))){
	goto T2721;}
	{register object V1545;
	V1545= (VFUN_NARGS=2,(*(LnkLI257))(((V1543))->v.v_self[12],(V1542)));
	(void)(((V1545))->v.v_self[9]= (((V1543))->v.v_self[9]));
	(void)(((V1545))->v.v_self[10]= (((V1543))->v.v_self[10]));
	if(!((VV[104])->s.s_gfdef!=OBJNULL)){
	goto T2728;}
	base[2]= (V1545);
	base[3]= (V1542);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;
	goto T2726;
	goto T2728;
T2728:;
	(void)((*(LnkLI277))(VV[104],VV[105]));
	goto T2726;
T2726:;
	{object V1546 = (*(LnkLI321))((V1543),VV[140],(V1545));
	VMR93(V1546)}}
	goto T2721;
T2721:;
	{object V1547 = Cnil;
	VMR93(V1547)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FLUSH-CACHE-TRAP	*/

static object LI107(V1551,V1552,V1553)

object V1551;object V1552;object V1553;
{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;
	{object V1554 = (*(LnkLI322))((V1553),(V1552));
	VMR94(V1554)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-INSTANCES-OBSOLETE (STD-CLASS))	*/

static object LI108(V1558,V1559,V1560)

object V1558;object V1559;register object V1560;
{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;
	{object V1562;
	object V1563;
	V1562= CMPcar((V1558));
	V1563= CMPcdr((V1558));
	{object V1564;
	if(type_of(V1560)==t_structure){
	goto T2742;}
	goto T2740;
	goto T2742;
T2742:;
	if(!(((V1560)->str.str_def)==(VV[141]))){
	goto T2740;}
	V1564= STREF(object,(V1560),4);
	goto T2738;
	goto T2740;
T2740:;{object V1566;
	V1566= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1560);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V1567= vs_base[0];
	if(!((V1566)==(CMPcar(V1567)))){
	goto T2745;}}
	V1564= CMPcar(((V1560))->cc.cc_turbo[12]);
	goto T2738;
	goto T2745;
T2745:;
	V1564= Cnil;
	goto T2738;
T2738:;
	{register object V1568;
	register object V1569;
	base[2]= (V1560);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk287)(Lclptr287);
	vs_top=sup;
	V1568= vs_base[0];
	V1569= (VFUN_NARGS=2,(*(LnkLI257))(((V1568))->v.v_self[12],(V1560)));
	(void)(((V1569))->v.v_self[9]= (((V1568))->v.v_self[9]));
	(void)(((V1569))->v.v_self[10]= (((V1568))->v.v_self[10]));
	{object V1571;
	V1571= ((V1562))->v.v_self[1];
	if(!(type_of(V1571)==t_fixnum)){
	goto T2759;}
	(void)(((V1564))->v.v_self[fix((V1571))]= (V1569));
	goto T2756;
	goto T2759;
T2759:;
	base[2]= V1569;
	base[3]= (V1560);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;}
	goto T2756;
T2756:;
	(void)((*(LnkLI321))((V1568),VV[142],(V1569)));
	{object V1573 = (V1560);
	VMR95(V1573)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD MAKE-INSTANCES-OBSOLETE (SYMBOL))	*/

static void L109()
{register object *base=vs_base;
	register object *sup=base+VM96; VC96
	vs_check;
	{object V1574;
	object V1575;
	object V1576;
	check_arg(3);
	V1574=(base[0]);
	V1575=(base[1]);
	V1576=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (VFUN_NARGS=1,(*(LnkLI214))((V1576)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk288)(Lclptr288);
	return;
	}
}
/*	local entry for function OBSOLETE-INSTANCE-TRAP	*/

static object LI110(V1581,V1582,V1583)

object V1581;object V1582;object V1583;
{	 VMB97 VMS97 VMV97
	bds_check;
	goto TTL;
TTL:;
	if(type_of(V1583)==t_structure){
	goto T2772;}
	goto T2771;
	goto T2772;
T2772:;
	if(((V1583)->str.str_def)==(VV[143])){
	goto T2769;}
	goto T2771;
T2771:;{object V1585;
	V1585= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1583);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V1586= vs_base[0];
	if((V1585)==(CMPcar(V1586))){
	goto T2769;}}
	if(((VV[144]->s.s_dbind))==Cnil){
	goto T2779;}
	{object V1587 = (VV[145]->s.s_dbind);
	VMR97(V1587)}
	goto T2779;
T2779:;
	bds_bind(VV[144],Ct);
	base[1]= VV[146];
	base[2]= (V1583);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	{object V1588 = vs_base[0];
	bds_unwind1;
	VMR97(V1588)}
	goto T2769;
T2769:;
	{object V1589;
	object V1590;
	object V1591;
	object V1592;
	object V1593;
	object V1594;
	object V1595;
	object V1596;
	register object V1597;
	register object V1598;
	V1589= ((V1582))->v.v_self[11];
	base[7]= (V1589);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk196)(Lclptr196);
	vs_top=sup;
	V1590= vs_base[0];
	V1591= ((V1581))->v.v_self[9];
	V1592= ((V1582))->v.v_self[9];
	if(type_of(V1583)==t_structure){
	goto T2792;}
	goto T2790;
	goto T2792;
T2792:;
	if(!(((V1583)->str.str_def)==(VV[147]))){
	goto T2790;}
	V1593= STREF(object,(V1583),4);
	goto T2788;
	goto T2790;
T2790:;{object V1600;
	V1600= (VV[2]->s.s_dbind);
	base[7]= small_fixnum(14);
	base[8]= (V1583);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V1601= vs_base[0];
	if(!((V1600)==(CMPcar(V1601)))){
	goto T2795;}}
	V1593= CMPcar(((V1583))->cc.cc_turbo[12]);
	goto T2788;
	goto T2795;
T2795:;
	base[7]= VV[148];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	V1593= vs_base[0];
	goto T2788;
T2788:;
	if(type_of(V1590)==t_structure){
	goto T2805;}
	goto T2803;
	goto T2805;
T2805:;
	if(!(((V1590)->str.str_def)==(VV[149]))){
	goto T2803;}
	V1594= STREF(object,(V1590),4);
	goto T2801;
	goto T2803;
T2803:;{object V1603;
	V1603= (VV[2]->s.s_dbind);
	base[7]= small_fixnum(14);
	base[8]= (V1590);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V1604= vs_base[0];
	if(!((V1603)==(CMPcar(V1604)))){
	goto T2808;}}
	V1594= CMPcar(((V1590))->cc.cc_turbo[12]);
	goto T2801;
	goto T2808;
T2808:;
	base[7]= VV[148];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	V1594= vs_base[0];
	goto T2801;
T2801:;
	V1595= ((V1581))->v.v_self[10];
	V1596= Cnil;
	V1597= Cnil;
	V1598= Cnil;
	{register object V1605;
	register object V1606;
	object V1607;
	object V1608;
	V1605= (V1591);
	V1606= Cnil;
	V1607= small_fixnum(0);
	V1608= Cnil;
	goto T2824;
T2824:;
	{object V1609;
	if(!(((V1605))==Cnil)){
	goto T2830;}
	goto T2818;
	goto T2830;
T2830:;
	V1609= CMPcar((V1605));
	V1605= CMPcdr((V1605));
	V1606= (V1609);}
	{object V1610;
	V1610= (V1607);
	V1607= number_plus((V1607),small_fixnum(1));
	V1608= (V1610);}
	{long V1611;
	object V1612;
	V1611= fix((V1608));
	base[8]= (V1606);
	base[9]= (V1592);
	base[10]= VV[8];
	base[11]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+8)+4;
	(void) (*Lnk299)();
	vs_top=sup;
	V1612= vs_base[0];
	if(((V1612))==Cnil){
	goto T2845;}
	(void)((((V1594))->v.v_self[fix((V1612))]=(((V1593))->v.v_self[V1611])));
	goto T2825;
	goto T2845;
T2845:;
	V1597= make_cons(V1606,(V1597));
	if((((V1593))->v.v_self[V1611])==((VV[61]->s.s_dbind))){
	goto T2825;}
	{object V1615;
	V1615= ((V1593))->v.v_self[V1611];
	{object V1616;
	base[9]= (V1598);
	base[10]= (V1615);
	base[11]= V1606;
	vs_top=(vs_base=base+9)+3;
	siLput_f();
	vs_top=sup;
	V1616= vs_base[0];
	V1598= (V1616);}}}
	goto T2825;
T2825:;
	goto T2824;}
	goto T2818;
T2818:;
	{register object V1617;
	register object V1618;
	V1617= (V1595);
	V1618= Cnil;
	goto T2863;
T2863:;
	{object V1619;
	if(!(((V1617))==Cnil)){
	goto T2869;}
	goto T2859;
	goto T2869;
T2869:;
	V1619= CMPcar((V1617));
	V1617= CMPcdr((V1617));
	V1618= (V1619);}
	{object V1620;
	object V1621;
	V1620= CMPcar((V1618));
	V1621= CMPcdr((V1618));
	{object V1622;
	base[7]= (V1620);
	base[8]= (V1592);
	base[9]= VV[8];
	base[10]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+7)+4;
	(void) (*Lnk299)();
	vs_top=sup;
	V1622= vs_base[0];
	if(((V1622))==Cnil){
	goto T2881;}
	(void)((((V1594))->v.v_self[fix((V1622))]=(CMPcdr((V1618)))));
	goto T2864;
	goto T2881;
T2881:;
	V1597= make_cons(V1620,(V1597));
	if(((V1621))==((VV[61]->s.s_dbind))){
	goto T2864;}
	{object V1626;
	base[7]= (V1598);
	base[8]= V1621;
	base[9]= V1620;
	vs_top=(vs_base=base+7)+3;
	siLput_f();
	vs_top=sup;
	V1626= vs_base[0];
	V1598= (V1626);}}}
	goto T2864;
T2864:;
	goto T2863;}
	goto T2859;
T2859:;
	{register object V1627;
	register object V1628;
	V1627= (V1592);
	V1628= CMPcar((V1627));
	goto T2898;
T2898:;
	if(!(((V1627))==Cnil)){
	goto T2899;}
	goto T2894;
	goto T2899;
T2899:;
	{register object x= (V1628),V1629= (V1591);
	while(V1629!=Cnil)
	if(x==(V1629->c.c_car)){
	goto T2903;
	}else V1629=V1629->c.c_cdr;}
	{register object x= (V1628),V1630= (V1595);
	while(V1630!=Cnil)
	if(EQ(x,V1630->c.c_car->c.c_car) &&V1630->c.c_car != Cnil){
	goto T2903;
	}else V1630=V1630->c.c_cdr;}
	V1596= make_cons(V1628,(V1596));
	goto T2903;
T2903:;
	V1627= CMPcdr((V1627));
	V1628= CMPcar((V1627));
	goto T2898;}
	goto T2894;
T2894:;
	(void)((*(LnkLI323))((V1583),(V1590)));
	base[7]= (V1583);
	base[8]= (V1596);
	base[9]= (V1597);
	base[10]= (V1598);
	vs_top=(vs_base=base+7)+4;
	(void) (*Lnk324)(Lclptr324);
	vs_top=sup;
	{object V1632 = (V1582);
	VMR97(V1632)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for COPY-INSTANCE-INTERNAL	*/

static void L111()
{register object *base=vs_base;
	register object *sup=base+VM98; VC98
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1633=base[0]->c.c_cdr;
	if(endp(V1633))invalid_macro_call();
	base[2]= (V1633->c.c_car);
	V1633=V1633->c.c_cdr;
	if(!endp(V1633))invalid_macro_call();}
	V1634= list(2,VV[153],base[2]);
	V1635= list(2,VV[154],base[2]);
	V1636= list(3,VV[87],/* INLINE-ARGS */V1635,list(2,VV[154],base[2]));
	V1637= list(2,VV[155],base[2]);
	base[3]= list(2,VV[89],list(4,VV[150],VV[151],list(4,VV[152],/* INLINE-ARGS */V1634,/* INLINE-ARGS */V1636,list(3,VV[87],/* INLINE-ARGS */V1637,list(2,VV[155],base[2]))),VV[156]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function CHANGE-CLASS-INTERNAL	*/

static object LI112(V1640,V1641)

object V1640;object V1641;
{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	{object V1642;
	object V1643;
	object V1644;
	object V1645;
	object V1646;
	object V1647;
	object V1648;
	object V1649;
	object V1650;
	V1642= (*(LnkLI219))((V1640));
	base[9]= (V1641);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk196)(Lclptr196);
	vs_top=sup;
	V1643= vs_base[0];
	if(type_of(V1643)==t_structure){
	goto T2927;}
	goto T2925;
	goto T2927;
T2927:;
	if(!(((V1643)->str.str_def)==(VV[157]))){
	goto T2925;}
	V1644= STREF(object,(V1643),0);
	goto T2923;
	goto T2925;
T2925:;{object V1652;
	V1652= (VV[2]->s.s_dbind);
	base[9]= small_fixnum(14);
	base[10]= (V1643);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V1653= vs_base[0];
	if(!((V1652)==(CMPcar(V1653)))){
	goto T2930;}}
	V1644= CMPcar(((V1643))->cc.cc_turbo[13]);
	goto T2923;
	goto T2930;
T2930:;
	base[9]= VV[158];
	vs_top=(vs_base=base+9)+1;
	Lerror();
	vs_top=sup;
	V1644= vs_base[0];
	goto T2923;
T2923:;
	base[9]= (V1642);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk287)(Lclptr287);
	vs_top=sup;
	V1645= vs_base[0];
	V1646= ((V1645))->v.v_self[9];
	V1647= ((V1644))->v.v_self[9];
	if(type_of(V1640)==t_structure){
	goto T2944;}
	goto T2942;
	goto T2944;
T2944:;
	if(!(((V1640)->str.str_def)==(VV[159]))){
	goto T2942;}
	V1648= STREF(object,(V1640),4);
	goto T2940;
	goto T2942;
T2942:;{object V1655;
	V1655= (VV[2]->s.s_dbind);
	base[9]= small_fixnum(14);
	base[10]= (V1640);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V1656= vs_base[0];
	if(!((V1655)==(CMPcar(V1656)))){
	goto T2947;}}
	V1648= CMPcar(((V1640))->cc.cc_turbo[12]);
	goto T2940;
	goto T2947;
T2947:;
	base[9]= VV[148];
	vs_top=(vs_base=base+9)+1;
	Lerror();
	vs_top=sup;
	V1648= vs_base[0];
	goto T2940;
T2940:;
	if(type_of(V1643)==t_structure){
	goto T2957;}
	goto T2955;
	goto T2957;
T2957:;
	if(!(((V1643)->str.str_def)==(VV[160]))){
	goto T2955;}
	V1649= STREF(object,(V1643),4);
	goto T2953;
	goto T2955;
T2955:;{object V1658;
	V1658= (VV[2]->s.s_dbind);
	base[9]= small_fixnum(14);
	base[10]= (V1643);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V1659= vs_base[0];
	if(!((V1658)==(CMPcar(V1659)))){
	goto T2960;}}
	V1649= CMPcar(((V1643))->cc.cc_turbo[12]);
	goto T2953;
	goto T2960;
T2960:;
	base[9]= VV[148];
	vs_top=(vs_base=base+9)+1;
	Lerror();
	vs_top=sup;
	V1649= vs_base[0];
	goto T2953;
T2953:;
	V1650= ((V1645))->v.v_self[10];
	{register object V1660;
	object V1661;
	register object V1662;
	object V1663;
	V1660= (V1647);
	V1661= Cnil;
	V1662= small_fixnum(0);
	V1663= Cnil;
	goto T2973;
T2973:;
	{object V1664;
	if(!(((V1660))==Cnil)){
	goto T2979;}
	goto T2967;
	goto T2979;
T2979:;
	V1664= CMPcar((V1660));
	V1660= CMPcdr((V1660));
	V1661= (V1664);}
	{object V1665;
	V1665= (V1662);
	V1662= number_plus((V1662),small_fixnum(1));
	V1663= (V1665);}
	{long V1666;
	register object V1667;
	V1666= fix((V1663));
	base[10]= (V1661);
	base[11]= (V1646);
	base[12]= VV[8];
	base[13]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+10)+4;
	(void) (*Lnk299)();
	vs_top=sup;
	V1667= vs_base[0];
	if(((V1667))==Cnil){
	goto T2974;}
	(void)(((V1649))->v.v_self[V1666]= (((V1648))->v.v_self[fix((V1667))]));}
	goto T2974;
T2974:;
	goto T2973;}
	goto T2967;
T2967:;
	{register object V1668;
	register object V1669;
	V1668= (V1650);
	V1669= Cnil;
	goto T3000;
T3000:;
	{object V1670;
	if(!(((V1668))==Cnil)){
	goto T3006;}
	goto T2996;
	goto T3006;
T3006:;
	V1670= CMPcar((V1668));
	V1668= CMPcdr((V1668));
	V1669= (V1670);}
	{register object V1671;
	base[9]= CMPcar((V1669));
	base[10]= (V1647);
	base[11]= VV[8];
	base[12]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk299)();
	vs_top=sup;
	V1671= vs_base[0];
	if(((V1671))==Cnil){
	goto T3001;}
	(void)((((V1649))->v.v_self[fix((V1671))]=(CMPcdr((V1669)))));}
	goto T3001;
T3001:;
	goto T3000;}
	goto T2996;
T2996:;
	(void)((*(LnkLI323))((V1640),(V1643)));
	base[9]= (V1643);
	base[10]= (V1640);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk325)(Lclptr325);
	vs_top=sup;
	{object V1672 = (V1640);
	VMR99(V1672)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD CHANGE-CLASS (STANDARD-OBJECT STANDARD-CLASS))	*/

static object LI113(V1677,V1678,V1679,V1680)

object V1677;object V1678;register object V1679;object V1680;
{	 VMB100 VMS100 VMV100
	goto TTL;
TTL:;
	if(type_of(V1679)==t_structure){
	goto T3029;}
	goto T3028;
	goto T3029;
T3029:;
	if(((V1679)->str.str_def)==(VV[161])){
	goto T3026;}
	goto T3028;
T3028:;
	base[0]= VV[162];
	base[1]= (V1679);
	base[2]= (V1680);
	base[3]= VV[163];
	vs_top=(vs_base=base+0)+4;
	Lerror();
	vs_top=sup;
	goto T3026;
T3026:;
	{object V1683 = (*(LnkLI326))((V1679),(V1680));
	VMR100(V1683)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD CHANGE-CLASS (STANDARD-OBJECT FUNCALLABLE-STANDARD-CLASS))	*/

static object LI114(V1688,V1689,V1690,V1691)

object V1688;object V1689;register object V1690;object V1691;
{	 VMB101 VMS101 VMV101
	goto TTL;
TTL:;{object V1693;
	V1693= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1690);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk174)();
	vs_top=sup;
	V1694= vs_base[0];
	if((V1693)==(CMPcar(V1694))){
	goto T3039;}}
	base[0]= VV[164];
	base[1]= (V1690);
	base[2]= (V1691);
	base[3]= VV[165];
	vs_top=(vs_base=base+0)+4;
	Lerror();
	vs_top=sup;
	goto T3039;
T3039:;
	{object V1695 = (*(LnkLI326))((V1690),(V1691));
	VMR101(V1695)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD CHANGE-CLASS (T SYMBOL))	*/

static void L115()
{register object *base=vs_base;
	register object *sup=base+VM102; VC102
	vs_check;
	{object V1696;
	object V1697;
	object V1698;
	object V1699;
	check_arg(4);
	V1696=(base[0]);
	V1697=(base[1]);
	V1698=(base[2]);
	V1699=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V1698);
	base[5]= (VFUN_NARGS=1,(*(LnkLI214))((V1699)));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk220)(Lclptr220);
	return;
	}
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :BEFORE (BUILT-IN-CLASS T))	*/

static object LI116(V1706,V1707,V1708,V1709,V1710)

object V1706;object V1707;object V1708;object V1709;object V1710;
{	 VMB103 VMS103 VMV103
	goto TTL;
TTL:;
	base[0]= VV[166];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V1713 = vs_base[0];
	VMR103(V1713)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-DIRECT-SLOTS (BUILT-IN-CLASS))	*/

static object LI117(V1717,V1718,V1719)

object V1717;object V1718;object V1719;
{	 VMB104 VMS104 VMV104
	goto TTL;
TTL:;
	{object V1721 = Cnil;
	VMR104(V1721)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-SLOTS (BUILT-IN-CLASS))	*/

static object LI118(V1725,V1726,V1727)

object V1725;object V1726;object V1727;
{	 VMB105 VMS105 VMV105
	goto TTL;
TTL:;
	{object V1729 = Cnil;
	VMR105(V1729)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-DIRECT-DEFAULT-INITARGS (BUILT-IN-CLASS))	*/

static object LI119(V1733,V1734,V1735)

object V1733;object V1734;object V1735;
{	 VMB106 VMS106 VMV106
	goto TTL;
TTL:;
	{object V1737 = Cnil;
	VMR106(V1737)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-DEFAULT-INITARGS (BUILT-IN-CLASS))	*/

static object LI120(V1741,V1742,V1743)

object V1741;object V1742;object V1743;
{	 VMB107 VMS107 VMV107
	goto TTL;
TTL:;
	{object V1745 = Cnil;
	VMR107(V1745)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD VALIDATE-SUPERCLASS (CLASS BUILT-IN-CLASS))	*/

static object LI121(V1750,V1751,V1752,V1753)

object V1750;object V1751;object V1752;object V1753;
{	 VMB108 VMS108 VMV108
	goto TTL;
TTL:;
	{object V1755 = (((V1753))==((VV[136]->s.s_dbind))?Ct:Cnil);
	VMR108(V1755)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD VALIDATE-SUPERCLASS (SLOT-CLASS FORWARD-REFERENCED-CLASS))	*/

static object LI122(V1760,V1761,V1762,V1763)

object V1760;object V1761;object V1762;object V1763;
{	 VMB109 VMS109 VMV109
	goto TTL;
TTL:;
	{object V1765 = Ct;
	VMR109(V1765)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD ADD-DEPENDENT (DEPENDENT-UPDATE-MIXIN T))	*/

static object LI123(V1770,V1771,V1772,V1773)

object V1770;object V1771;object V1772;object V1773;
{	 VMB110 VMS110 VMV110
	goto TTL;
TTL:;
	{object V1778;
	base[1]= V1773;
	base[2]= (*(LnkLI190))(V1772,VV[167]);
	vs_top=(vs_base=base+1)+2;
	Ladjoin();
	vs_top=sup;
	V1778= vs_base[0];
	base[1]= ({object _tmp=get(VV[190],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[190])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[190])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[2]= (V1778);
	base[3]= V1772;
	base[4]= VV[167];
	vs_top=(vs_base=base+2)+3;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	{object V1779 = vs_base[0];
	VMR110(V1779)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-DEPENDENT (DEPENDENT-UPDATE-MIXIN T))	*/

static object LI124(V1784,V1785,V1786,V1787)

object V1784;object V1785;object V1786;object V1787;
{	 VMB111 VMS111 VMV111
	goto TTL;
TTL:;
	{object V1791;
	base[1]= (V1787);
	base[2]= (*(LnkLI190))((V1786),VV[167]);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk327)();
	vs_top=sup;
	V1791= vs_base[0];
	base[1]= ({object _tmp=get(VV[190],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[190])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[190])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[2]= (V1791);
	base[3]= V1786;
	base[4]= VV[167];
	vs_top=(vs_base=base+2)+3;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	{object V1792 = vs_base[0];
	VMR111(V1792)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAP-DEPENDENTS (DEPENDENT-UPDATE-MIXIN T))	*/

static object LI125(V1797,V1798,V1799,V1800)

object V1797;object V1798;object V1799;register object V1800;
{	 VMB112 VMS112 VMV112
	goto TTL;
TTL:;
	{register object V1802;
	register object V1803;
	V1802= (*(LnkLI190))((V1799),VV[167]);
	V1803= CMPcar((V1802));
	goto T3105;
T3105:;
	if(!(((V1802))==Cnil)){
	goto T3106;}
	{object V1804 = Cnil;
	VMR112(V1804)}
	goto T3106;
T3106:;
	(void)((
	(type_of((V1800)) == t_sfun ?(*(((V1800))->sfn.sfn_self)):
	(fcall.argd=1,type_of((V1800))==t_vfun) ?
	(*(((V1800))->sfn.sfn_self)):
	(fcall.fun=((V1800)),fcalln))((V1803))));
	V1802= CMPcdr((V1802));
	V1803= CMPcar((V1802));
	goto T3105;}
	base[0]=base[0];
	return Cnil;
}
/*	local function WALK	*/

static void L80(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM113; VC113
	vs_check;
	{register object V1805;
	check_arg(1);
	V1805=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1805))!=Cnil){
	goto T3117;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3117;
T3117:;
	{object V1806;
	{object V1807;
	V1807= CMPcar((V1805));
	V1805= CMPcdr((V1805));
	V1806= (V1807);}
	if(!(((V1806))==(base0[0]))){
	goto T3125;}
	V1808= base0[1];
	goto T3123;
	goto T3125;
T3125:;
	base[1]= (V1806);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk290)(Lclptr290);
	vs_top=sup;
	V1808= vs_base[0];
	goto T3123;
T3123:;
	base[1]= (V1805);
	vs_top=(vs_base=base+1)+1;
	L80(base0);
	vs_top=sup;
	V1809= vs_base[0];
	base[1]= append(V1808,V1809);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC131(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM114; VC114
	vs_check;
	{object V1810;
	object V1811;
	check_arg(2);
	V1810=(base[0]);
	V1811=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	base[3]= (V1810);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk328)(Lclptr328);
	return;
	}
}
/*	local function COLLECT-GFS	*/

static void L75(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM115; VC115
	vs_check;
	{object V1812;
	check_arg(1);
	V1812=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1813;
	register object V1814;
	base[3]= (V1812);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk329)(Lclptr329);
	vs_top=sup;
	V1813= vs_base[0];
	V1814= CMPcar((V1813));
	goto T3137;
T3137:;
	if(!(((V1813))==Cnil)){
	goto T3138;}
	goto T3132;
	goto T3138;
T3138:;
	{register object V1815;
	register object V1816;
	register object V1817;
	V1815= (V1814);
	V1816= base0[1];
	V1817= Ct;
	base[3]= (V1815);
	base[4]= (V1816);
	base[5]= (V1817);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	V1813= CMPcdr((V1813));
	V1814= CMPcar((V1813));
	goto T3137;}
	goto T3132;
T3132:;
	base[1]= (V1812);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	V1819= vs_base[0];
	{
	object V1818= V1819;
	if(V1818==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T3154;
T3154:;
	base[1]= (V1818->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L75(base0);
	vs_top=sup;
	if((V1818=MMcdr(V1818))==Cnil){
	base[1]= V1819;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T3154;}
	}
}
/*	local function RWALK	*/

static void L71(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM116; VC116
	vs_check;
	{object V1820;
	check_arg(1);
	V1820=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1820))==Cnil){
	goto T3160;}
	base[1]= CMPcdr((V1820));
	vs_top=(vs_base=base+1)+1;
	L71(base0);
	vs_top=sup;
	{register object V1821;
	object V1822;
	base[3]= CMPcar((V1820));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk330)(Lclptr330);
	vs_top=sup;
	V1821= vs_base[0];
	V1822= CMPcar((V1821));
	goto T3168;
T3168:;
	if(!(((V1821))==Cnil)){
	goto T3169;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T3169;
T3169:;
	{register object V1823;
	base[3]= (V1822);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V1823= vs_base[0];
	{register object x= (V1823),V1824= base0[0];
	while(V1824!=Cnil)
	if(eql(x,V1824->c.c_car)){
	goto T3177;
	}else V1824=V1824->c.c_cdr;
	goto T3173;}
	goto T3177;
T3177:;
	base0[1]= make_cons((V1823),base0[1]);
	base[3]= (V1823);
	base[4]= base0[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk95)();
	vs_top=sup;
	base0[0]= vs_base[0];}
	goto T3173;
T3173:;
	V1821= CMPcdr((V1821));
	V1822= CMPcar((V1821));
	goto T3168;}
	goto T3160;
T3160:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function FIX	*/

static void L59(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM117; VC117
	vs_check;
	{object V1825;
	object V1826;
	object V1827;
	check_arg(3);
	V1825=(base[0]);
	V1826=(base[1]);
	V1827=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1828;
	base[3]= (V1825);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk331)();
	vs_top=sup;
	V1828= vs_base[0];
	{object V1829= (V1827);
	if((V1829!= VV[96]))goto T3190;
	if(!((base0[0])==(VV[94]))){
	goto T3192;}
	base[3]= base0[1];
	base[4]= (V1828);
	base[5]= (V1826);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk332)(Lclptr332);
	return;
	goto T3192;
T3192:;
	base[3]= base0[1];
	base[4]= (V1828);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk333)(Lclptr333);
	return;
	goto T3190;
T3190:;
	if((V1829!= VV[97]))goto T3199;
	if(!((base0[0])==(VV[94]))){
	goto T3201;}
	base[3]= base0[1];
	base[4]= (V1828);
	base[5]= (V1826);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk334)(Lclptr334);
	return;
	goto T3201;
T3201:;
	base[3]= base0[1];
	base[4]= (V1828);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk335)(Lclptr335);
	return;
	goto T3199;
T3199:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC130(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM118; VC118
	vs_check;
	{object V1830;
	check_arg(1);
	V1830=(base[0]);
	vs_top=sup;
	base[1]=VV[336]->s.s_gfdef;
	base[2]= (base0[1]->c.c_car);
	base[3]= (V1830);
	{object V1831;
	V1831= (base0[0]->c.c_car);
	 vs_top=base+4;
	 while(V1831!=Cnil)
	 {vs_push((V1831)->c.c_car);V1831=(V1831)->c.c_cdr;}
	vs_base=base+2;}
	(void) (*Lnk336)(Lclptr336);
	return;
	}
}
/*	local function FIX-SUPER	*/

static void L46(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM119; VC119
	vs_check;
	{object V1832;
	check_arg(1);
	V1832=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V1832);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3212;}
	base[1]= (V1832);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3212;
T3212:;
	if(((*(LnkLI337))((V1832)))!=Cnil){
	goto T3216;}
	base[1]= VV[53];
	base[2]= (V1832);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	goto T3216;
T3216:;{object V1833;
	V1833= (VFUN_NARGS=2,(*(LnkLI214))((V1832),Cnil));
	if(V1833==Cnil)goto T3220;
	base[1]= V1833;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3220;
T3220:;}
	{object V1835;
	base[2]= VV[54];
	base[3]= VV[50];
	base[4]= (V1832);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk218)(Lclptr218);
	vs_top=sup;
	V1835= vs_base[0];
	base[2]= ({object _tmp=get(VV[214],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[214])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[214])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[3]= (V1835);
	base[4]= V1832;
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC129(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM120; VC120
	vs_check;
	{object V1836;
	check_arg(1);
	V1836=(base[0]);
	vs_top=sup;
	{register object V1837;
	register object V1838;
	base[3]= (V1836);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk329)(Lclptr329);
	vs_top=sup;
	V1837= vs_base[0];
	V1838= CMPcar((V1837));
	goto T3233;
T3233:;
	if(!(((V1837))==Cnil)){
	goto T3234;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T3234;
T3234:;
	base[3]= (V1838);
	base[4]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T3238;}
	{register object V1839;
	register object V1840;
	register object V1841;
	V1839= (V1838);
	V1840= (base0[0]->c.c_car);
	V1841= Ct;
	base[3]= (V1839);
	base[4]= (V1840);
	base[5]= (V1841);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	(void)((
	(type_of((base0[1]->c.c_car)) == t_sfun ?(*(((base0[1]->c.c_car))->sfn.sfn_self)):
	(fcall.argd=1,type_of((base0[1]->c.c_car))==t_vfun) ?
	(*(((base0[1]->c.c_car))->sfn.sfn_self)):
	(fcall.fun=((base0[1]->c.c_car)),fcalln))((V1838))));
	goto T3238;
T3238:;
	V1837= CMPcdr((V1837));
	V1838= CMPcar((V1837));
	goto T3233;}
	}
}
/*	local function CLOSURE	*/

static void LC128(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM121; VC121
	vs_check;
	{object V1842;
	object V1843;
	check_arg(2);
	V1842=(base[0]);
	V1843=(base[1]);
	vs_top=sup;
	base[2]= (V1843);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local function CLOSURE	*/

static void LC127(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM122; VC122
	vs_check;
	{object V1844;
	object V1845;
	check_arg(2);
	V1844=(base[0]);
	V1845=(base[1]);
	vs_top=sup;
	base[2]= (*(LnkLI338))((V1844));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC126(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM123; VC123
	vs_check;
	{object V1846;
	check_arg(1);
	V1846=(base[0]);
	vs_top=sup;
	V1847 = (base0[0]->c.c_car);
	base[1]= (V1846);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk64)(Lclptr64);
	vs_top=sup;
	V1848= vs_base[0];
	(void)((
	V1849 = V1847,
	(type_of(V1849) == t_sfun ?(*((V1849)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V1849)==t_vfun) ?
	(*((V1849)->sfn.sfn_self)):
	(fcall.fun=(V1849),fcalln))(V1848)));
	base[1]= (V1846);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
static void LnkT64(ptr) object *ptr;{ call_or_link_closure(VV[64],(void **)(void *)&Lnk64,(void **)(void *)&Lclptr64);} /* CLASS-EQ-SPECIALIZER */
static object  LnkTLI338(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[338],(void **)(void *)&LnkLI338,1,first,ap);va_end(ap);return V1;} /* INTERN-EQL-SPECIALIZER */
static object  LnkTLI337(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[337],(void **)(void *)&LnkLI337,1,first,ap);va_end(ap);return V1;} /* LEGAL-CLASS-NAME-P */
static void LnkT336(ptr) object *ptr;{ call_or_link_closure(VV[336],(void **)(void *)&Lnk336,(void **)(void *)&Lclptr336);} /* UPDATE-DEPENDENT */
static void LnkT335(ptr) object *ptr;{ call_or_link_closure(VV[335],(void **)(void *)&Lnk335,(void **)(void *)&Lclptr335);} /* REMOVE-WRITER-METHOD */
static void LnkT334(ptr) object *ptr;{ call_or_link_closure(VV[334],(void **)(void *)&Lnk334,(void **)(void *)&Lclptr334);} /* ADD-WRITER-METHOD */
static void LnkT333(ptr) object *ptr;{ call_or_link_closure(VV[333],(void **)(void *)&Lnk333,(void **)(void *)&Lclptr333);} /* REMOVE-READER-METHOD */
static void LnkT332(ptr) object *ptr;{ call_or_link_closure(VV[332],(void **)(void *)&Lnk332,(void **)(void *)&Lclptr332);} /* ADD-READER-METHOD */
static void LnkT331(){ call_or_link(VV[331],(void **)(void *)&Lnk331);} /* ENSURE-GENERIC-FUNCTION */
static void LnkT330(ptr) object *ptr;{ call_or_link_closure(VV[330],(void **)(void *)&Lnk330,(void **)(void *)&Lclptr330);} /* CLASS-SLOTS */
static void LnkT329(ptr) object *ptr;{ call_or_link_closure(VV[329],(void **)(void *)&Lnk329,(void **)(void *)&Lclptr329);} /* SPECIALIZER-DIRECT-GENERIC-FUNCTIONS */
static void LnkT328(ptr) object *ptr;{ call_or_link_closure(VV[328],(void **)(void *)&Lnk328,(void **)(void *)&Lclptr328);} /* UPDATE-GF-DFUN */
static void LnkT327(){ call_or_link(VV[327],(void **)(void *)&Lnk327);} /* DELETE */
static object  LnkTLI326(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[326],(void **)(void *)&LnkLI326,2,first,ap);va_end(ap);return V1;} /* CHANGE-CLASS-INTERNAL */
static void LnkT325(ptr) object *ptr;{ call_or_link_closure(VV[325],(void **)(void *)&Lnk325,(void **)(void *)&Lclptr325);} /* UPDATE-INSTANCE-FOR-DIFFERENT-CLASS */
static void LnkT324(ptr) object *ptr;{ call_or_link_closure(VV[324],(void **)(void *)&Lnk324,(void **)(void *)&Lclptr324);} /* UPDATE-INSTANCE-FOR-REDEFINED-CLASS */
static object  LnkTLI323(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[323],(void **)(void *)&LnkLI323,2,first,ap);va_end(ap);return V1;} /* SWAP-WRAPPERS-AND-SLOTS */
static object  LnkTLI322(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[322],(void **)(void *)&LnkLI322,2,first,ap);va_end(ap);return V1;} /* SET-WRAPPER */
static object  LnkTLI321(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[321],(void **)(void *)&LnkLI321,3,first,ap);va_end(ap);return V1;} /* INVALIDATE-WRAPPER */
static object  LnkTLI320(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[320],(void **)(void *)&LnkLI320,1,first,ap);va_end(ap);return V1;} /* INFORM-TYPE-SYSTEM-ABOUT-STD-CLASS */
static object  LnkTLI319(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[319],(void **)(void *)&LnkLI319,2,first,ap);va_end(ap);return V1;} /* MAKE-STD-BOUNDP-METHOD-FUNCTION */
static object  LnkTLI318(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[318],(void **)(void *)&LnkLI318,2,first,ap);va_end(ap);return V1;} /* MAKE-STD-WRITER-METHOD-FUNCTION */
static object  LnkTLI317(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[317],(void **)(void *)&LnkLI317,2,first,ap);va_end(ap);return V1;} /* MAKE-STD-READER-METHOD-FUNCTION */
static object  LnkTLI315(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[315],(void **)(void *)&LnkLI315,first,ap);va_end(ap);return V1;} /* GET-METHOD */
static void LnkT314(ptr) object *ptr;{ call_or_link_closure(VV[314],(void **)(void *)&Lnk314,(void **)(void *)&Lclptr314);} /* MAKE-BOUNDP-METHOD-FUNCTION */
static void LnkT313(ptr) object *ptr;{ call_or_link_closure(VV[313],(void **)(void *)&Lnk313,(void **)(void *)&Lclptr313);} /* MAKE-WRITER-METHOD-FUNCTION */
static void LnkT312(ptr) object *ptr;{ call_or_link_closure(VV[312],(void **)(void *)&Lnk312,(void **)(void *)&Lclptr312);} /* MAKE-READER-METHOD-FUNCTION */
static void LnkT309(ptr) object *ptr;{ call_or_link_closure(VV[309],(void **)(void *)&Lnk309,(void **)(void *)&Lclptr309);} /* SLOT-DEFINITION-INTERNAL-WRITER-FUNCTION */
static void LnkT308(ptr) object *ptr;{ call_or_link_closure(VV[308],(void **)(void *)&Lnk308,(void **)(void *)&Lclptr308);} /* SLOT-DEFINITION-INTERNAL-READER-FUNCTION */
static void LnkT307(){ call_or_link(VV[307],(void **)(void *)&Lnk307);} /* *SUBTYPEP */
static void LnkT306(ptr) object *ptr;{ call_or_link_closure(VV[306],(void **)(void *)&Lnk306,(void **)(void *)&Lclptr306);} /* SLOT-DEFINITION-TYPE */
static void LnkT305(ptr) object *ptr;{ call_or_link_closure(VV[305],(void **)(void *)&Lnk305,(void **)(void *)&Lclptr305);} /* SLOT-DEFINITION-INITARGS */
static void LnkT304(ptr) object *ptr;{ call_or_link_closure(VV[304],(void **)(void *)&Lnk304,(void **)(void *)&Lclptr304);} /* SLOT-DEFINITION-INITFORM */
static void LnkT303(ptr) object *ptr;{ call_or_link_closure(VV[303],(void **)(void *)&Lnk303,(void **)(void *)&Lclptr303);} /* EFFECTIVE-SLOT-DEFINITION-CLASS */
static void LnkT302(ptr) object *ptr;{ call_or_link_closure(VV[302],(void **)(void *)&Lnk302,(void **)(void *)&Lclptr302);} /* COMPUTE-EFFECTIVE-SLOT-DEFINITION-INITARGS */
static void LnkT301(ptr) object *ptr;{ call_or_link_closure(VV[301],(void **)(void *)&Lnk301,(void **)(void *)&Lclptr301);} /* PCL CLASS-PRECEDENCE-LIST slot READER */
static void LnkT300(ptr) object *ptr;{ call_or_link_closure(VV[300],(void **)(void *)&Lnk300,(void **)(void *)&Lclptr300);} /* INITIALIZE-INTERNAL-SLOT-FUNCTIONS */
static void LnkT299(){ call_or_link(VV[299],(void **)(void *)&Lnk299);} /* POSITION */
static object  LnkTLI298(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[298],(void **)(void *)&LnkLI298,2,first,ap);va_end(ap);return V1;} /* COMPUTE-LAYOUT */
static void LnkT297(){ call_or_link(VV[297],(void **)(void *)&Lnk297);} /* TYPECASE-ERROR-STRING */
static void LnkT296(){ call_or_link(VV[296],(void **)(void *)&Lnk296);} /* SLOT-UNBOUND-INTERNAL */
static void LnkT295(){ call_or_link(VV[295],(void **)(void *)&Lnk295);} /* STRUCTURE-SUBTYPE-P */
static void LnkT294(ptr) object *ptr;{ call_or_link_closure(VV[294],(void **)(void *)&Lnk294,(void **)(void *)&Lclptr294);} /* COMPUTE-EFFECTIVE-SLOT-DEFINITION */
static void LnkT293(ptr) object *ptr;{ call_or_link_closure(VV[293],(void **)(void *)&Lnk293,(void **)(void *)&Lclptr293);} /* DIRECT-SLOT-DEFINITION-CLASS */
static void LnkT292(){ call_or_link(VV[292],(void **)(void *)&Lnk292);} /* DELETE-DUPLICATES */
static void LnkT290(ptr) object *ptr;{ call_or_link_closure(VV[290],(void **)(void *)&Lnk290,(void **)(void *)&Lclptr290);} /* CLASS-DIRECT-DEFAULT-INITARGS */
static void LnkT289(){ call_or_link(VV[289],(void **)(void *)&Lnk289);} /* SLOT-BOUNDP-NORMAL */
static void LnkT31(ptr) object *ptr;{ call_or_link_closure(VV[31],(void **)(void *)&Lnk31,(void **)(void *)&Lclptr31);} /* CLASS-SLOT-CELLS */
static void LnkT288(ptr) object *ptr;{ call_or_link_closure(VV[288],(void **)(void *)&Lnk288,(void **)(void *)&Lclptr288);} /* MAKE-INSTANCES-OBSOLETE */
static void LnkT287(ptr) object *ptr;{ call_or_link_closure(VV[287],(void **)(void *)&Lnk287,(void **)(void *)&Lclptr287);} /* CLASS-WRAPPER */
static object  LnkTLI286(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[286],(void **)(void *)&LnkLI286,1,first,ap);va_end(ap);return V1;} /* COMPUTE-CLASS-SLOTS */
static void LnkT285(){ call_or_link(VV[285],(void **)(void *)&Lnk285);} /* SORT */
static void LnkT282(ptr) object *ptr;{ call_or_link_closure(VV[282],(void **)(void *)&Lnk282,(void **)(void *)&Lclptr282);} /* CLASSP */
static void LnkT281(ptr) object *ptr;{ call_or_link_closure(VV[281],(void **)(void *)&Lnk281,(void **)(void *)&Lclptr281);} /* CLASS-CAN-PRECEDE-LIST */
static void LnkT280(){ call_or_link(VV[280],(void **)(void *)&Lnk280);} /* SET-SLOT-VALUE-NORMAL */
static void LnkT279(){ call_or_link(VV[279],(void **)(void *)&Lnk279);} /* SLOT-VALUE-NORMAL */
static object  LnkTLI278(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[278],(void **)(void *)&LnkLI278,1,first,ap);va_end(ap);return V1;} /* UPDATE-CLASS-CAN-PRECEDE-P */
static object  LnkTLI277(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[277],(void **)(void *)&LnkLI277,2,first,ap);va_end(ap);return V1;} /* NO-SLOT */
static object  LnkTLI276(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[276],(void **)(void *)&LnkLI276,1,first,ap);va_end(ap);return V1;} /* %FBOUNDP */
static object  LnkTLI275(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[275],(void **)(void *)&LnkLI275,1,first,ap);va_end(ap);return V1;} /* FORCE-CACHE-FLUSHES */
static void LnkT99(ptr) object *ptr;{ call_or_link_closure(VV[99],(void **)(void *)&Lnk99,(void **)(void *)&Lclptr99);} /* CLASS-PRECEDENCE-LIST */
static void LnkT274(){ call_or_link(VV[274],(void **)(void *)&Lnk274);} /* UPDATE-MAKE-INSTANCE-FUNCTION-TABLE */
static void LnkT273(ptr) object *ptr;{ call_or_link_closure(VV[273],(void **)(void *)&Lnk273,(void **)(void *)&Lclptr273);} /* COMPUTE-DEFAULT-INITARGS */
static object  LnkTLI272(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[272],(void **)(void *)&LnkLI272,2,first,ap);va_end(ap);return V1;} /* UPDATE-INITS */
static object  LnkTLI271(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[271],(void **)(void *)&LnkLI271,1,first,ap);va_end(ap);return V1;} /* UPDATE-GFS-OF-CLASS */
static object  LnkTLI270(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[270],(void **)(void *)&LnkLI270,2,first,ap);va_end(ap);return V1;} /* UPDATE-SLOTS */
static object  LnkTLI269(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[269],(void **)(void *)&LnkLI269,2,first,ap);va_end(ap);return V1;} /* UPDATE-CPL */
static object  LnkTLI266(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[266],(void **)(void *)&LnkLI266,1,first,ap);va_end(ap);return V1;} /* CLASS-HAS-A-FORWARD-REFERENCED-SUPERCLASS-P */
static void LnkT268(ptr) object *ptr;{ call_or_link_closure(VV[268],(void **)(void *)&Lnk268,(void **)(void *)&Lclptr268);} /* CLASS-FINALIZED-P */
static void LnkT267(){ call_or_link(VV[267],(void **)(void *)&Lnk267);} /* SOME */
static void LnkT265(ptr) object *ptr;{ call_or_link_closure(VV[265],(void **)(void *)&Lnk265,(void **)(void *)&Lclptr265);} /* REMOVE-DIRECT-SUBCLASS */
static void LnkT264(){ call_or_link(VV[264],(void **)(void *)&Lnk264);} /* SET-DIFFERENCE */
static void LnkT263(ptr) object *ptr;{ call_or_link_closure(VV[263],(void **)(void *)&Lnk263,(void **)(void *)&Lclptr263);} /* ADD-DIRECT-SUBCLASS */
static void LnkT262(ptr) object *ptr;{ call_or_link_closure(VV[262],(void **)(void *)&Lnk262,(void **)(void *)&Lclptr262);} /* CLASS-DIRECT-SUBCLASSES */
static void LnkT261(ptr) object *ptr;{ call_or_link_closure(VV[261],(void **)(void *)&Lnk261,(void **)(void *)&Lclptr261);} /* SLOT-DEFINITION-WRITERS */
static void LnkT260(ptr) object *ptr;{ call_or_link_closure(VV[260],(void **)(void *)&Lnk260,(void **)(void *)&Lclptr260);} /* SLOT-DEFINITION-READERS */
static object  LnkTLI259(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[259],(void **)(void *)&LnkLI259,3,first,ap);va_end(ap);return V1;} /* FIX-SLOT-ACCESSORS */
static object  LnkTLI258(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[258],(void **)(void *)&LnkLI258,1,first,ap);va_end(ap);return V1;} /* UPDATE-PV-TABLE-CACHE-INFO */
static void LnkT104(ptr) object *ptr;{ call_or_link_closure(VV[104],(void **)(void *)&Lnk104,(void **)(void *)&Lclptr104);} /* PCL WRAPPER slot WRITER */
static object  LnkTLI257(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[257],(void **)(void *)&LnkLI257,first,ap);va_end(ap);return V1;} /* MAKE-WRAPPER */
static void LnkT102(ptr) object *ptr;{ call_or_link_closure(VV[102],(void **)(void *)&Lnk102,(void **)(void *)&Lclptr102);} /* PCL SLOTS slot WRITER */
static void LnkT256(ptr) object *ptr;{ call_or_link_closure(VV[256],(void **)(void *)&Lnk256,(void **)(void *)&Lclptr256);} /* COMPUTE-SLOTS */
static void LnkT98(ptr) object *ptr;{ call_or_link_closure(VV[98],(void **)(void *)&Lnk98,(void **)(void *)&Lclptr98);} /* PCL CLASS-PRECEDENCE-LIST slot WRITER */
static void LnkT255(ptr) object *ptr;{ call_or_link_closure(VV[255],(void **)(void *)&Lnk255,(void **)(void *)&Lclptr255);} /* COMPUTE-CLASS-PRECEDENCE-LIST */
static void LnkT254(ptr) object *ptr;{ call_or_link_closure(VV[254],(void **)(void *)&Lnk254,(void **)(void *)&Lclptr254);} /* PCL DEFSTRUCT-CONSTRUCTOR slot WRITER */
static void LnkT253(ptr) object *ptr;{ call_or_link_closure(VV[253],(void **)(void *)&Lnk253,(void **)(void *)&Lclptr253);} /* PCL DEFSTRUCT-FORM slot WRITER */
static void LnkT252(ptr) object *ptr;{ call_or_link_closure(VV[252],(void **)(void *)&Lnk252,(void **)(void *)&Lclptr252);} /* PCL INTERNAL-WRITER-FUNCTION slot WRITER */
static void LnkT251(ptr) object *ptr;{ call_or_link_closure(VV[251],(void **)(void *)&Lnk251,(void **)(void *)&Lclptr251);} /* PCL INTERNAL-READER-FUNCTION slot WRITER */
static object  LnkTLI250(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[250],(void **)(void *)&LnkLI250,1,first,ap);va_end(ap);return V1;} /* GBOUNDP */
static void LnkT249(ptr) object *ptr;{ call_or_link_closure(VV[249],(void **)(void *)&Lnk249,(void **)(void *)&Lclptr249);} /* SLOT-DEFINITION-DEFSTRUCT-ACCESSOR-SYMBOL */
static object  LnkTLI248(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[248],(void **)(void *)&LnkLI248,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-TYPE-P */
static void LnkT247(ptr) object *ptr;{ call_or_link_closure(VV[247],(void **)(void *)&Lnk247,(void **)(void *)&Lclptr247);} /* PCL FROM-DEFCLASS-P slot READER */
static void LnkT246(ptr) object *ptr;{ call_or_link_closure(VV[246],(void **)(void *)&Lnk246,(void **)(void *)&Lclptr246);} /* MAP-DEPENDENTS */
static void LnkT245(ptr) object *ptr;{ call_or_link_closure(VV[245],(void **)(void *)&Lnk245,(void **)(void *)&Lclptr245);} /* CLASS-DIRECT-SLOTS */
static object  LnkTLI244(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[244],(void **)(void *)&LnkLI244,2,first,ap);va_end(ap);return V1;} /* REMOVE-SLOT-ACCESSORS */
static void LnkT243(ptr) object *ptr;{ call_or_link_closure(VV[243],(void **)(void *)&Lnk243,(void **)(void *)&Lclptr243);} /* CLASS-DIRECT-SUPERCLASSES */
static object  LnkTLI242(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[242],(void **)(void *)&LnkLI242,2,first,ap);va_end(ap);return V1;} /* REMOVE-DIRECT-SUBCLASSES */
static void LnkT241(ptr) object *ptr;{ call_or_link_closure(VV[241],(void **)(void *)&Lnk241,(void **)(void *)&Lclptr241);} /* PCL CLASS-EQ-SPECIALIZER slot WRITER */
static void LnkT240(){ call_or_link(VV[240],(void **)(void *)&Lnk240);} /* MAKE-INSTANCE CLASS-EQ-SPECIALIZER (:CLASS) NIL */
static object  LnkTLI239(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[239],(void **)(void *)&LnkLI239,2,first,ap);va_end(ap);return V1;} /* GET-KEY-ARG */
static object  LnkTLI238(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[238],(void **)(void *)&LnkLI238,2,first,ap);va_end(ap);return V1;} /* ADD-SLOT-ACCESSORS */
static object  LnkTLI237(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[237],(void **)(void *)&LnkLI237,2,first,ap);va_end(ap);return V1;} /* MAKE-CLASS-PREDICATE */
static object  LnkTLI236(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[236],(void **)(void *)&LnkLI236,2,first,ap);va_end(ap);return V1;} /* UPDATE-CLASS */
static object  LnkTLI235(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[235],(void **)(void *)&LnkLI235,2,first,ap);va_end(ap);return V1;} /* ADD-DIRECT-SUBCLASSES */
static void LnkT234(){ call_or_link(VV[234],(void **)(void *)&Lnk234);} /* MAKE-CLASS-PREDICATE-NAME */
static void LnkT233(ptr) object *ptr;{ call_or_link_closure(VV[233],(void **)(void *)&Lnk233,(void **)(void *)&Lclptr233);} /* CLASS-NAME */
static void LnkT232(ptr) object *ptr;{ call_or_link_closure(VV[232],(void **)(void *)&Lnk232,(void **)(void *)&Lclptr232);} /* PCL PREDICATE-NAME slot READER */
static void LnkT231(ptr) object *ptr;{ call_or_link_closure(VV[231],(void **)(void *)&Lnk231,(void **)(void *)&Lclptr231);} /* PCL PREDICATE-NAME slot WRITER */
static void LnkT230(ptr) object *ptr;{ call_or_link_closure(VV[230],(void **)(void *)&Lnk230,(void **)(void *)&Lclptr230);} /* SLOT-DEFINITION-NAME */
static void LnkT229(ptr) object *ptr;{ call_or_link_closure(VV[229],(void **)(void *)&Lnk229,(void **)(void *)&Lclptr229);} /* SLOT-DEFINITION-INITFUNCTION */
static void LnkT228(ptr) object *ptr;{ call_or_link_closure(VV[228],(void **)(void *)&Lnk228,(void **)(void *)&Lclptr228);} /* SLOT-DEFINITION-ALLOCATION */
static void LnkT227(ptr) object *ptr;{ call_or_link_closure(VV[227],(void **)(void *)&Lnk227,(void **)(void *)&Lclptr227);} /* PCL DIRECT-SLOTS slot READER */
static void LnkT226(ptr) object *ptr;{ call_or_link_closure(VV[226],(void **)(void *)&Lnk226,(void **)(void *)&Lclptr226);} /* PCL DIRECT-SLOTS slot WRITER */
static void LnkT225(){ call_or_link(VV[225],(void **)(void *)&Lnk225);} /* MAKE-DIRECT-SLOTD */
static void LnkT224(ptr) object *ptr;{ call_or_link_closure(VV[224],(void **)(void *)&Lnk224,(void **)(void *)&Lclptr224);} /* PCL DIRECT-SUPERCLASSES slot READER */
static void LnkT223(ptr) object *ptr;{ call_or_link_closure(VV[223],(void **)(void *)&Lnk223,(void **)(void *)&Lclptr223);} /* PCL DIRECT-SUPERCLASSES slot WRITER */
static void LnkT60(ptr) object *ptr;{ call_or_link_closure(VV[60],(void **)(void *)&Lnk60,(void **)(void *)&Lclptr60);} /* VALIDATE-SUPERCLASS */
static void LnkT222(ptr) object *ptr;{ call_or_link_closure(VV[222],(void **)(void *)&Lnk222,(void **)(void *)&Lclptr222);} /* FORWARD-REFERENCED-CLASS-P */
static void LnkT221(ptr) object *ptr;{ call_or_link_closure(VV[221],(void **)(void *)&Lnk221,(void **)(void *)&Lclptr221);} /* REINITIALIZE-INSTANCE */
static void LnkT220(ptr) object *ptr;{ call_or_link_closure(VV[220],(void **)(void *)&Lnk220,(void **)(void *)&Lclptr220);} /* CHANGE-CLASS */
static object  LnkTLI219(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[219],(void **)(void *)&LnkLI219,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static void LnkT218(ptr) object *ptr;{ call_or_link_closure(VV[218],(void **)(void *)&Lnk218,(void **)(void *)&Lclptr218);} /* MAKE-INSTANCE */
static void LnkT217(ptr) object *ptr;{ call_or_link_closure(VV[217],(void **)(void *)&Lnk217,(void **)(void *)&Lclptr217);} /* INFORM-TYPE-SYSTEM-ABOUT-CLASS */
static void LnkT216(ptr) object *ptr;{ call_or_link_closure(VV[216],(void **)(void *)&Lnk216,(void **)(void *)&Lclptr216);} /* CLASS-PROTOTYPE */
static void LnkT215(){ call_or_link(VV[215],(void **)(void *)&Lnk215);} /* ENSURE-CLASS-VALUES */
static void LnkT213(ptr) object *ptr;{ call_or_link_closure(VV[213],(void **)(void *)&Lnk213,(void **)(void *)&Lclptr213);} /* ENSURE-CLASS-USING-CLASS */
static object  LnkTLI214(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[214],(void **)(void *)&LnkLI214,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT212(){ call_or_link(VV[212],(void **)(void *)&Lnk212);} /* ENSURE-CLASS */
static void LnkT211(){ call_or_link(VV[211],(void **)(void *)&Lnk211);} /* LOAD-TRUENAME */
static object  LnkTLI210(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[210],(void **)(void *)&LnkLI210,1,first,ap);va_end(ap);return V1;} /* DO-STANDARD-DEFSETFS-FOR-DEFCLASS */
static void LnkT209(ptr) object *ptr;{ call_or_link_closure(VV[209],(void **)(void *)&Lnk209,(void **)(void *)&Lclptr209);} /* LISP TYPE slot WRITER */
static void LnkT208(ptr) object *ptr;{ call_or_link_closure(VV[208],(void **)(void *)&Lnk208,(void **)(void *)&Lclptr208);} /* SPECIALIZER-CLASS */
static object  LnkTLI207(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[207],(void **)(void *)&LnkLI207,1,first,ap);va_end(ap);return V1;} /* MAP-SPECIALIZERS */
static void LnkT206(){ call_or_link(VV[206],(void **)(void *)&Lnk206);} /* MAP-ALL-CLASSES */
static void LnkT205(ptr) object *ptr;{ call_or_link_closure(VV[205],(void **)(void *)&Lnk205,(void **)(void *)&Lclptr205);} /* SPECIALIZER-METHOD-TABLE */
static void LnkT204(ptr) object *ptr;{ call_or_link_closure(VV[204],(void **)(void *)&Lnk204,(void **)(void *)&Lclptr204);} /* SPECIALIZER-OBJECT */
static void LnkT203(ptr) object *ptr;{ call_or_link_closure(VV[203],(void **)(void *)&Lnk203,(void **)(void *)&Lclptr203);} /* METHOD-GENERIC-FUNCTION */
static void LnkT202(ptr) object *ptr;{ call_or_link_closure(VV[202],(void **)(void *)&Lnk202,(void **)(void *)&Lclptr202);} /* PCL DIRECT-METHODS slot READER */
static void LnkT95(){ call_or_link(VV[95],(void **)(void *)&Lnk95);} /* REMOVE */
static void LnkT201(ptr) object *ptr;{ call_or_link_closure(VV[201],(void **)(void *)&Lnk201,(void **)(void *)&Lclptr201);} /* PCL DIRECT-SUBCLASSES slot WRITER */
static void LnkT200(ptr) object *ptr;{ call_or_link_closure(VV[200],(void **)(void *)&Lnk200,(void **)(void *)&Lclptr200);} /* PCL DIRECT-SUBCLASSES slot READER */
static object  LnkTLI199(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[199],(void **)(void *)&LnkLI199,first,ap);va_end(ap);return V1;} /* ALLOCATE-STANDARD-INSTANCE */
static void LnkT198(ptr) object *ptr;{ call_or_link_closure(VV[198],(void **)(void *)&Lnk198,(void **)(void *)&Lclptr198);} /* PCL DEFSTRUCT-CONSTRUCTOR slot READER */
static void LnkT197(ptr) object *ptr;{ call_or_link_closure(VV[197],(void **)(void *)&Lnk197,(void **)(void *)&Lclptr197);} /* PCL PROTOTYPE slot WRITER */
static void LnkT196(ptr) object *ptr;{ call_or_link_closure(VV[196],(void **)(void *)&Lnk196,(void **)(void *)&Lclptr196);} /* ALLOCATE-INSTANCE */
static void LnkT195(ptr) object *ptr;{ call_or_link_closure(VV[195],(void **)(void *)&Lnk195,(void **)(void *)&Lclptr195);} /* PCL PROTOTYPE slot READER */
static void LnkT194(ptr) object *ptr;{ call_or_link_closure(VV[194],(void **)(void *)&Lnk194,(void **)(void *)&Lclptr194);} /* PCL WRAPPER slot READER */
static void LnkT193(ptr) object *ptr;{ call_or_link_closure(VV[193],(void **)(void *)&Lnk193,(void **)(void *)&Lclptr193);} /* PCL DOCUMENTATION slot WRITER */
static void LnkT192(ptr) object *ptr;{ call_or_link_closure(VV[192],(void **)(void *)&Lnk192,(void **)(void *)&Lclptr192);} /* PCL DOCUMENTATION slot READER */
static object  LnkTLI190(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[190],(void **)(void *)&LnkLI190,2,first,ap);va_end(ap);return V1;} /* PLIST-VALUE */
static void LnkT191(){ call_or_link(VV[191],(void **)(void *)&Lnk191);} /* DOCUMENTATION */
static object  LnkTLI189(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[189],(void **)(void *)&LnkLI189,2,first,ap);va_end(ap);return V1;} /* GET-KEY-ARG1 */
static void LnkT187(){ call_or_link(VV[187],(void **)(void *)&Lnk187);} /* TURBO-CLOSURE */
static void LnkT186(){ call_or_link(VV[186],(void **)(void *)&Lnk186);} /* GET-OPTIMIZED-STD-ACCESSOR-METHOD-FUNCTION */
static void LnkT185(){ call_or_link(VV[185],(void **)(void *)&Lnk185);} /* GET-ACCESSOR-METHOD-FUNCTION */
static void LnkT184(ptr) object *ptr;{ call_or_link_closure(VV[184],(void **)(void *)&Lnk184,(void **)(void *)&Lclptr184);} /* SLOT-ACCESSOR-STD-P */
static object  LnkTLI183(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[183],(void **)(void *)&LnkLI183,2,first,ap);va_end(ap);return V1;} /* FIND-SLOT-DEFINITION */
static object  LnkTLI182(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[182],(void **)(void *)&LnkLI182,first,ap);va_end(ap);return V1;} /* INITIALIZE-INTERNAL-SLOT-GFS */
static void LnkT181(ptr) object *ptr;{ call_or_link_closure(VV[181],(void **)(void *)&Lnk181,(void **)(void *)&Lclptr181);} /* COMPUTE-SLOT-ACCESSOR-INFO */
static object  LnkTLI180(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[180],(void **)(void *)&LnkLI180,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static void LnkT179(ptr) object *ptr;{ call_or_link_closure(VV[179],(void **)(void *)&Lnk179,(void **)(void *)&Lclptr179);} /* LISP CLASS slot READER */
static void LnkT178(ptr) object *ptr;{ call_or_link_closure(VV[178],(void **)(void *)&Lnk178,(void **)(void *)&Lclptr178);} /* PCL NAME slot READER */
static void LnkT177(ptr) object *ptr;{ call_or_link_closure(VV[177],(void **)(void *)&Lnk177,(void **)(void *)&Lclptr177);} /* PCL ACCESSOR-FLAGS slot WRITER */
static void LnkT176(ptr) object *ptr;{ call_or_link_closure(VV[176],(void **)(void *)&Lnk176,(void **)(void *)&Lclptr176);} /* PCL ACCESSOR-FLAGS slot READER */
static object  LnkTLI175(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[175],(void **)(void *)&LnkLI175,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT174(){ call_or_link(VV[174],(void **)(void *)&Lnk174);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT173(ptr) object *ptr;{ call_or_link_closure(VV[173],(void **)(void *)&Lnk173,(void **)(void *)&Lclptr173);} /* SLOT-DEFINITION-BOUNDP-FUNCTION */
static void LnkT171(ptr) object *ptr;{ call_or_link_closure(VV[171],(void **)(void *)&Lnk171,(void **)(void *)&Lclptr171);} /* SLOT-DEFINITION-WRITER-FUNCTION */
static void LnkT169(ptr) object *ptr;{ call_or_link_closure(VV[169],(void **)(void *)&Lnk169,(void **)(void *)&Lclptr169);} /* SLOT-DEFINITION-READER-FUNCTION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

