
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
	base[5]= (V9);
	base[6]= V10;
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk174)(Lclptr174);
	return;
	goto T13;
T13:;
	if((V13!= VV[170]))goto T16;
	base[5]= (V9);
	base[6]= V10;
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk175)(Lclptr175);
	return;
	goto T16;
T16:;
	if((V13!= VV[172]))goto T19;
	base[5]= (V9);
	base[6]= V10;
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk176)(Lclptr176);
	return;
	goto T19;
T19:;
	FEerror("The ECASE key value ~s is illegal.",1,V13);
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;}
	}
}
/*	local entry for function (FAST-METHOD SLOT-ACCESSOR-STD-P (EFFECTIVE-SLOT-DEFINITION T))	*/

static object LI3(V21,V22,V23,V24)

object V21;object V22;register object V23;object V24;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V26;
	object V27;
	V26= CMPcar((V21));
	V27= CMPcdr((V21));
	{object V28;
	if(type_of(V23)==t_structure){
	goto T32;}
	goto T30;
	goto T32;
T32:;
	if(!(((V23)->str.str_def)==(VV[0]))){
	goto T30;}
	V28= STREF(object,(V23),4);
	goto T28;
	goto T30;
T30:;{object V30;
	V30= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V23);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V31= vs_base[0];
	if(!((V30)==(CMPcar(V31)))){
	goto T35;}}
	V28= CMPcar(((V23))->cc.cc_turbo[12]);
	goto T28;
	goto T35;
T35:;
	V28= Cnil;
	goto T28;
T28:;
	{long V32;
	{register object V33;
	V33= ((V26))->v.v_self[1];
	if(!(type_of(V33)==t_fixnum)){
	goto T46;}
	V33= ((V28))->v.v_self[fix((V33))];
	goto T44;
	goto T46;
T46:;
	V33= VV[3];
	goto T44;
T44:;
	if(!(((V33))==(VV[3]))){
	goto T49;}
	base[0]= (V23);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk179)(Lclptr179);
	vs_top=sup;
	V32= fix(vs_base[0]);
	goto T41;
	goto T49;
T49:;
	V32= fix((V33));}
	goto T41;
T41:;
	if(!(((V24))==(VV[4]))){
	goto T53;}
	{object V35 = ((7)==(V32)?Ct:Cnil);
	VMR3(V35)}
	goto T53;
T53:;
	{long V36;
	{object V37= (V24);
	if((V37!= VV[168]))goto T56;
	V36= 1;
	goto T55;
	goto T56;
T56:;
	if((V37!= VV[170]))goto T57;
	V36= 2;
	goto T55;
	goto T57;
T57:;
	if((V37!= VV[172]))goto T58;
	V36= 4;
	goto T55;
	goto T58;
T58:;
	FEerror("The ECASE key value ~s is illegal.",1,V37);
	V36= fix(Cnil);
	goto T55;}
	goto T55;
T55:;
	{object V38 = (((((long)((V36) & (V32)))==0?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR3(V38)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD (SETF SLOT-ACCESSOR-STD-P) (T EFFECTIVE-SLOT-DEFINITION T))	*/

static object LI4(V44,V45,V46,V47,V48)

object V44;object V45;object V46;register object V47;object V48;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{object V50;
	object V51;
	V50= CMPcar((V44));
	V51= CMPcdr((V44));
	{object V52;
	if(type_of(V47)==t_structure){
	goto T69;}
	goto T67;
	goto T69;
T69:;
	if(!(((V47)->str.str_def)==(VV[5]))){
	goto T67;}
	V52= STREF(object,(V47),4);
	goto T65;
	goto T67;
T67:;{object V54;
	V54= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V47);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V55= vs_base[0];
	if(!((V54)==(CMPcar(V55)))){
	goto T72;}}
	V52= CMPcar(((V47))->cc.cc_turbo[12]);
	goto T65;
	goto T72;
T72:;
	V52= Cnil;
	goto T65;
T65:;
	{long V56;
	long V57;
	{object V58= (V48);
	if((V58!= VV[168]))goto T80;
	V56= 1;
	goto T79;
	goto T80;
T80:;
	if((V58!= VV[170]))goto T81;
	V56= 2;
	goto T79;
	goto T81;
T81:;
	if((V58!= VV[172]))goto T82;
	V56= 4;
	goto T79;
	goto T82;
T82:;
	FEerror("The ECASE key value ~s is illegal.",1,V58);
	V56= fix(Cnil);
	goto T79;}
	goto T79;
T79:;
	{register object V59;
	V59= ((V50))->v.v_self[1];
	if(!(type_of(V59)==t_fixnum)){
	goto T88;}
	V59= ((V52))->v.v_self[fix((V59))];
	goto T86;
	goto T88;
T88:;
	V59= VV[3];
	goto T86;
T86:;
	if(!(((V59))==(VV[3]))){
	goto T91;}
	base[0]= (V47);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk179)(Lclptr179);
	vs_top=sup;
	V57= fix(vs_base[0]);
	goto T83;
	goto T91;
T91:;
	V57= fix((V59));}
	goto T83;
T83:;
	{object V61;
	if(((V46))==Cnil){
	goto T96;}
	V61= CMPmake_fixnum((long)((V56) | (V57)));
	goto T94;
	goto T96;
T96:;
	V61= CMPmake_fixnum((long)(((long)(~(V56))) & (V57)));
	goto T94;
T94:;
	{object V62;
	V62= ((V50))->v.v_self[1];
	if(!(type_of(V62)==t_fixnum)){
	goto T100;}
	(void)(((V52))->v.v_self[fix((V62))]= ((V61)));
	goto T78;
	goto T100;
T100:;
	base[0]= (V61);
	base[1]= (V47);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk180)(Lclptr180);
	vs_top=sup;}}}
	goto T78;
T78:;
	{object V64 = (V46);
	VMR4(V64)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD INITIALIZE-INTERNAL-SLOT-FUNCTIONS (EFFECTIVE-SLOT-DEFINITION))	*/

static object LI5(V68,V69,V70)

object V68;object V69;register object V70;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V72;
	object V73;
	V72= CMPcar((V68));
	V73= CMPcdr((V68));
	{object V74;
	if(type_of(V70)==t_structure){
	goto T114;}
	goto T112;
	goto T114;
T114:;
	if(!(((V70)->str.str_def)==(VV[6]))){
	goto T112;}
	V74= STREF(object,(V70),4);
	goto T110;
	goto T112;
T112:;{object V76;
	V76= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V70);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V77= vs_base[0];
	if(!((V76)==(CMPcar(V77)))){
	goto T117;}}
	V74= CMPcar(((V70))->cc.cc_turbo[12]);
	goto T110;
	goto T117;
T117:;
	V74= Cnil;
	goto T110;
T110:;
	{object V78;
	object V79;
	{register object V80;
	V80= ((V72))->v.v_self[2];
	if(!(type_of(V80)==t_fixnum)){
	goto T128;}
	V80= ((V74))->v.v_self[fix((V80))];
	goto T126;
	goto T128;
T128:;
	V80= VV[3];
	goto T126;
T126:;
	if(!(((V80))==(VV[3]))){
	goto T131;}
	base[2]= (V70);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk181)(Lclptr181);
	vs_top=sup;
	V78= vs_base[0];
	goto T123;
	goto T131;
T131:;
	V78= (V80);}
	goto T123;
T123:;
	{register object V82;
	V82= ((V72))->v.v_self[1];
	if(!(type_of(V82)==t_fixnum)){
	goto T139;}
	V82= ((V74))->v.v_self[fix((V82))];
	goto T137;
	goto T139;
T139:;
	V82= VV[3];
	goto T137;
T137:;
	if(!(((V82))==(VV[3]))){
	goto T142;}
	base[2]= (V70);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk182)(Lclptr182);
	vs_top=sup;
	V79= vs_base[0];
	goto T134;
	goto T142;
T142:;
	V79= (V82);}
	goto T134;
T134:;
	{object V84;{object V85;
	base[2]= (V78);
	base[3]= (VV[7]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V85= vs_base[0];
	if(V85==Cnil)goto T147;
	V84= V85;
	goto T146;
	goto T147;
T147:;}
	{object V87;
	object V88;
	V87= (VV[7]->s.s_dbind);
	base[3]= VV[8];
	base[4]= VV[9];
	base[5]= VV[10];
	base[6]= small_fixnum(5);
	vs_top=(vs_base=base+3)+4;
	Lmake_hash_table();
	vs_top=sup;
	V88= vs_base[0];
	base[3]= V78;
	base[4]= (V87);
	base[5]= (V88);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;
	V84= vs_base[0];}
	goto T146;
T146:;
	base[2]= V79;
	base[3]= V84;
	base[4]= V70;
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	vs_top=sup;}
	{register object V92;
	register object V93;
	V92= VV[11];
	V93= CMPcar((V92));
	goto T167;
T167:;
	if(!(((V92))==Cnil)){
	goto T168;}
	goto T163;
	goto T168;
T168:;
	{register object V94;
	register object V95;
	{object V96= (V93);
	if((V96!= VV[168]))goto T174;
	V94= VV[12];
	goto T173;
	goto T174;
T174:;
	if((V96!= VV[170]))goto T175;
	V94= VV[13];
	goto T173;
	goto T175;
T175:;
	if((V96!= VV[172]))goto T176;
	V94= VV[14];
	goto T173;
	goto T176;
T176:;
	FEerror("The ECASE key value ~s is illegal.",1,V96);
	V94= Cnil;
	goto T173;}
	goto T173;
T173:;
	V95= (*(LnkLI183))((V94));
	base[5]= (V70);
	base[6]= (V93);
	base[7]= (V95);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk184)(Lclptr184);
	vs_top=sup;}
	V92= CMPcdr((V92));
	V93= CMPcar((V92));
	goto T167;}
	goto T163;
T163:;
	{object V97 = (VFUN_NARGS=1,(*(LnkLI185))((V78)));
	VMR5(V97)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOT-ACCESSOR-INFO (EFFECTIVE-SLOT-DEFINITION T T))	*/

static object LI6(V103,V104,V105,V106,V107)

object V103;object V104;register object V105;register object V106;object V107;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{object V109;
	object V110;
	V109= CMPcar((V103));
	V110= CMPcdr((V103));
	{object V111;
	if(type_of(V105)==t_structure){
	goto T196;}
	goto T194;
	goto T196;
T196:;
	if(!(((V105)->str.str_def)==(VV[15]))){
	goto T194;}
	V111= STREF(object,(V105),4);
	goto T192;
	goto T194;
T194:;{object V113;
	V113= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V105);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V114= vs_base[0];
	if(!((V113)==(CMPcar(V114)))){
	goto T199;}}
	V111= CMPcar(((V105))->cc.cc_turbo[12]);
	goto T192;
	goto T199;
T199:;
	V111= Cnil;
	goto T192;
T192:;
	{object V115;
	register object V116;
	object V117;
	object V118;
	{register object V119;
	V119= ((V109))->v.v_self[2];
	if(!(type_of(V119)==t_fixnum)){
	goto T210;}
	V119= ((V111))->v.v_self[fix((V119))];
	goto T208;
	goto T210;
T210:;
	V119= VV[3];
	goto T208;
T208:;
	if(!(((V119))==(VV[3]))){
	goto T213;}
	base[4]= (V105);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk181)(Lclptr181);
	vs_top=sup;
	V115= vs_base[0];
	goto T205;
	goto T213;
T213:;
	V115= (V119);}
	goto T205;
T205:;
	{register object V121;
	V121= ((V109))->v.v_self[1];
	if(!(type_of(V121)==t_fixnum)){
	goto T221;}
	V121= ((V111))->v.v_self[fix((V121))];
	goto T219;
	goto T221;
T221:;
	V121= VV[3];
	goto T219;
T219:;
	if(!(((V121))==(VV[3]))){
	goto T224;}
	base[4]= (V105);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk182)(Lclptr182);
	vs_top=sup;
	V116= vs_base[0];
	goto T216;
	goto T224;
T224:;
	V116= (V121);}
	goto T216;
T216:;
	V117= (*(LnkLI186))((V116),(V115));
	if((V117)==Cnil){
	V118= Cnil;
	goto T228;}
	base[4]= (V117);
	base[5]= VV[4];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk187)(Lclptr187);
	vs_top=sup;
	V118= vs_base[0];
	goto T228;
T228:;
	{object V123;
	object V124;
	if(!(((VV[16]->s.s_dbind))==(VV[17]))){
	goto T234;}
	base[4]= (V107);
	base[5]= (V106);
	base[6]= (V116);
	base[7]= (V105);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk188)();
	goto T232;
	goto T234;
T234:;
	base[4]= (V116);
	base[5]= (V105);
	base[6]= (V106);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk189)();
	goto T232;
T232:;
	if(vs_base>=vs_top){vs_top=sup;goto T243;}
	V123= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T244;}
	V124= vs_base[0];
	vs_top=sup;
	goto T245;
	goto T243;
T243:;
	V123= Cnil;
	goto T244;
T244:;
	V124= Cnil;
	goto T245;
T245:;
	base[4]= (V123);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk190)();
	vs_top=sup;
	base[4]= (V124);
	base[5]= V105;
	base[6]= V106;
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk191)(Lclptr191);
	vs_top=sup;
	base[4]= (V123);
	base[5]= V105;
	base[6]= V106;
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk192)(Lclptr192);
	vs_top=sup;}
	if(((V117))==Cnil){
	goto T256;}
	V129 = (V118);
	base[4]= (V105);
	base[5]= VV[4];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk187)(Lclptr187);
	vs_top=sup;
	V130= vs_base[0];
	if((V129)==(V130)){
	goto T256;}
	{object V131;
	V131= make_cons((V116),(V115));
	(VV[18]->s.s_dbind)= make_cons((V131),(VV[18]->s.s_dbind));
	{object V132 = (VV[18]->s.s_dbind);
	VMR6(V132)}}
	goto T256;
T256:;
	{object V133 = Cnil;
	VMR6(V133)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-DEFINITION-ALLOCATION (STRUCTURE-SLOT-DEFINITION))	*/

static object LI7(V137,V138,V139)

object V137;object V138;object V139;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V141 = VV[19];
	VMR7(V141)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :AFTER (DOCUMENTATION-MIXIN T))	*/

static object LI8(V147,V148,V149,V150,V151)

object V147;object V148;object V149;object V150;object V151;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V153;
	object V155;
	V153= (*(LnkLI193))(VV[20],V151);
	if(!(type_of((V153))==t_cons)){
	goto T273;}
	V155= CMPcar((V153));
	goto T271;
	goto T273;
T273:;
	V155= Cnil;
	goto T271;
T271:;
	if((V153)==Cnil){
	goto T277;}
	{object V158 = (*(LnkLI194))((V155),V149,VV[21]);
	VMR8(V158)}
	goto T277;
T277:;
	{object V159 = Cnil;
	VMR8(V159)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD DOCUMENTATION (T))	*/

static object LI9(V164,V165,V166,V167)

object V164;object V165;object V166;object V167;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{register object V168;
	object V169;
	V168= (V167);
	if(((V168))==Cnil){
	goto T284;}
	{object V170;
	V170= CMPcar((V168));
	V168= CMPcdr((V168));
	V169= (V170);
	goto T282;}
	goto T284;
T284:;
	V169= Cnil;
	goto T282;
T282:;
	base[1]= (V166);
	base[2]= (V169);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk195)();
	vs_top=sup;
	{object V171 = vs_base[0];
	VMR9(V171)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD (SETF DOCUMENTATION) (T T))	*/

static object LI10(V177,V178,V179,V180,V181)

object V177;object V178;object V179;object V180;object V181;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{register object V182;
	object V183;
	V182= (V181);
	if(((V182))==Cnil){
	goto T297;}
	{object V184;
	V184= CMPcar((V182));
	V182= CMPcdr((V182));
	V183= (V184);
	goto T295;}
	goto T297;
T297:;
	V183= Cnil;
	goto T295;
T295:;
	base[1]= VV[22];
	base[2]= (V180);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	{object V185 = vs_base[0];
	VMR10(V185)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD DOCUMENTATION (DOCUMENTATION-MIXIN))	*/

static object LI11(V190,V191,V192,V193)

object V190;object V191;object V192;object V193;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{register object V194;
	object V195;
	V194= (V193);
	if(((V194))==Cnil){
	goto T310;}
	{object V196;
	V196= CMPcar((V194));
	V194= CMPcdr((V194));
	V195= (V196);
	goto T308;}
	goto T310;
T310:;
	V195= Cnil;
	goto T308;
T308:;
	{object V197 = (*(LnkLI196))((V192),VV[21]);
	VMR11(V197)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD (SETF DOCUMENTATION) (T DOCUMENTATION-MIXIN))	*/

static object LI12(V203,V204,V205,V206,V207)

object V203;object V204;object V205;object V206;object V207;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{register object V208;
	object V209;
	V208= (V207);
	if(((V208))==Cnil){
	goto T321;}
	{object V210;
	V210= CMPcar((V208));
	V208= CMPcdr((V208));
	V209= (V210);
	goto T319;}
	goto T321;
T321:;
	V209= Cnil;
	goto T319;
T319:;
	{object V213 = (*(LnkLI194))((V205),V206,VV[21]);
	VMR12(V213)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD DOCUMENTATION (STANDARD-SLOT-DEFINITION))	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V214;
	object V215;
	register object V216;
	object V217;
	check_arg(4);
	V214=(base[0]);
	V215=(base[1]);
	V216=(base[2]);
	V217=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V218;
	object V219;
	V218= (V217);
	if(((V218))==Cnil){
	goto T332;}
	{object V220;
	V220= CMPcar((V218));
	V218= CMPcdr((V218));
	V219= (V220);
	goto T330;}
	goto T332;
T332:;
	V219= Cnil;
	goto T330;
T330:;
	{object V221;
	object V222;
	V221= CMPcar((V214));
	V222= CMPcdr((V214));
	{object V223;
	if(type_of(V216)==t_structure){
	goto T345;}
	goto T343;
	goto T345;
T345:;
	if(!(((V216)->str.str_def)==(VV[23]))){
	goto T343;}
	V223= STREF(object,(V216),4);
	goto T341;
	goto T343;
T343:;{object V225;
	V225= (VV[2]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V216);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V226= vs_base[0];
	if(!((V225)==(CMPcar(V226)))){
	goto T348;}}
	V223= CMPcar(((V216))->cc.cc_turbo[12]);
	goto T341;
	goto T348;
T348:;
	V223= Cnil;
	goto T341;
T341:;
	{register object V227;
	V227= ((V221))->v.v_self[1];
	if(!(type_of(V227)==t_fixnum)){
	goto T358;}
	V227= ((V223))->v.v_self[fix((V227))];
	goto T356;
	goto T358;
T358:;
	V227= VV[3];
	goto T356;
T356:;
	if(!(((V227))==(VV[3]))){
	goto T361;}
	base[5]= (V216);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk197)(Lclptr197);
	return;
	goto T361;
T361:;
	base[5]= (V227);
	vs_top=(vs_base=base+5)+1;
	return;}}}}
	}
}
/*	function definition for (FAST-METHOD (SETF DOCUMENTATION) (T STANDARD-SLOT-DEFINITION))	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V229;
	object V230;
	object V231;
	register object V232;
	object V233;
	check_arg(5);
	V229=(base[0]);
	V230=(base[1]);
	V231=(base[2]);
	V232=(base[3]);
	V233=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V234;
	object V235;
	V234= (V233);
	if(((V234))==Cnil){
	goto T369;}
	{object V236;
	V236= CMPcar((V234));
	V234= CMPcdr((V234));
	V235= (V236);
	goto T367;}
	goto T369;
T369:;
	V235= Cnil;
	goto T367;
T367:;
	{object V237;
	object V238;
	V237= CMPcar((V229));
	V238= CMPcdr((V229));
	{object V239;
	if(type_of(V232)==t_structure){
	goto T382;}
	goto T380;
	goto T382;
T382:;
	if(!(((V232)->str.str_def)==(VV[24]))){
	goto T380;}
	V239= STREF(object,(V232),4);
	goto T378;
	goto T380;
T380:;{object V241;
	V241= (VV[2]->s.s_dbind);
	base[6]= small_fixnum(14);
	base[7]= (V232);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V242= vs_base[0];
	if(!((V241)==(CMPcar(V242)))){
	goto T385;}}
	V239= CMPcar(((V232))->cc.cc_turbo[12]);
	goto T378;
	goto T385;
T385:;
	V239= Cnil;
	goto T378;
T378:;
	{object V244;
	V244= ((V237))->v.v_self[1];
	if(!(type_of(V244)==t_fixnum)){
	goto T393;}
	base[6]= ((V239))->v.v_self[fix((V244))]= (V231);
	vs_top=(vs_base=base+6)+1;
	return;
	goto T393;
T393:;
	base[6]= V231;
	base[7]= (V232);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk198)(Lclptr198);
	return;}}}}
	}
}
/*	local entry for function (FAST-METHOD CLASS-FINALIZED-P (PCL-CLASS))	*/

static object LI15(V249,V250,V251)

object V249;object V250;register object V251;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V253;
	object V254;
	V253= CMPcar((V249));
	V254= CMPcdr((V249));
	{object V255;
	if(type_of(V251)==t_structure){
	goto T407;}
	goto T405;
	goto T407;
T407:;
	if(!(((V251)->str.str_def)==(VV[25]))){
	goto T405;}
	V255= STREF(object,(V251),4);
	goto T403;
	goto T405;
T405:;{object V257;
	V257= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V251);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V258= vs_base[0];
	if(!((V257)==(CMPcar(V258)))){
	goto T410;}}
	V255= CMPcar(((V251))->cc.cc_turbo[12]);
	goto T403;
	goto T410;
T410:;
	V255= Cnil;
	goto T403;
T403:;
	{register object V261;
	V261= ((V253))->v.v_self[1];
	if(!(type_of(V261)==t_fixnum)){
	goto T422;}
	V261= ((V255))->v.v_self[fix((V261))];
	goto T420;
	goto T422;
T422:;
	V261= VV[3];
	goto T420;
T420:;
	if(!(((V261))==(VV[3]))){
	goto T425;}
	base[0]= (V251);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V260= vs_base[0];
	goto T417;
	goto T425;
T425:;
	V260= (V261);}
	goto T417;
T417:;
	{object V263 = ((((V260)==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR15(V263)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD CLASS-PROTOTYPE (STD-CLASS))	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V264;
	object V265;
	register object V266;
	check_arg(3);
	V264=(base[0]);
	V265=(base[1]);
	V266=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V268;
	object V269;
	V268= CMPcar((V264));
	V269= CMPcdr((V264));
	{object V270;
	if(type_of(V266)==t_structure){
	goto T438;}
	goto T436;
	goto T438;
T438:;
	if(!(((V266)->str.str_def)==(VV[26]))){
	goto T436;}
	V270= STREF(object,(V266),4);
	goto T434;
	goto T436;
T436:;{object V272;
	V272= (VV[2]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V266);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V273= vs_base[0];
	if(!((V272)==(CMPcar(V273)))){
	goto T441;}}
	V270= CMPcar(((V266))->cc.cc_turbo[12]);
	goto T434;
	goto T441;
T441:;
	V270= Cnil;
	goto T434;
T434:;
	{object V275;
	{register object V276;
	V276= ((V268))->v.v_self[1];
	if(!(type_of(V276)==t_fixnum)){
	goto T453;}
	V276= ((V270))->v.v_self[fix((V276))];
	goto T451;
	goto T453;
T453:;
	V276= VV[3];
	goto T451;
T451:;
	if(!(((V276))==(VV[3]))){
	goto T456;}
	base[3]= (V266);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk200)(Lclptr200);
	vs_top=sup;
	V275= vs_base[0];
	goto T448;
	goto T456;
T456:;
	V275= (V276);}
	goto T448;
T448:;
	if(((V275))==Cnil){
	goto T460;}
	base[3]= (V275);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T460;
T460:;
	{object V278;
	base[3]= (V266);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk201)(Lclptr201);
	vs_top=sup;
	V278= vs_base[0];
	{object V279;
	V279= ((V268))->v.v_self[1];
	if(!(type_of(V279)==t_fixnum)){
	goto T466;}
	base[3]= ((V270))->v.v_self[fix((V279))]= ((V278));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T466;
T466:;
	base[3]= (V278);
	base[4]= (V266);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk202)(Lclptr202);
	return;}}}}}
	}
}
/*	function definition for (FAST-METHOD CLASS-PROTOTYPE (STRUCTURE-CLASS))	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
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
	{register object V285;
	object V286;
	V285= CMPcar((V281));
	V286= CMPcdr((V281));
	{register object V287;
	if(type_of(V283)==t_structure){
	goto T480;}
	goto T478;
	goto T480;
T480:;
	if(!(((V283)->str.str_def)==(VV[27]))){
	goto T478;}
	V287= STREF(object,(V283),4);
	goto T476;
	goto T478;
T478:;{object V289;
	V289= (VV[2]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V283);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V290= vs_base[0];
	if(!((V289)==(CMPcar(V290)))){
	goto T483;}}
	V287= CMPcar(((V283))->cc.cc_turbo[12]);
	goto T476;
	goto T483;
T483:;
	V287= Cnil;
	goto T476;
T476:;
	{object V292;
	{register object V293;
	V293= ((V285))->v.v_self[2];
	if(!(type_of(V293)==t_fixnum)){
	goto T495;}
	V293= ((V287))->v.v_self[fix((V293))];
	goto T493;
	goto T495;
T495:;
	V293= VV[3];
	goto T493;
T493:;
	if(!(((V293))==(VV[3]))){
	goto T498;}
	base[3]= (V283);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk200)(Lclptr200);
	vs_top=sup;
	V292= vs_base[0];
	goto T490;
	goto T498;
T498:;
	V292= (V293);}
	goto T490;
T490:;
	if(((V292))==Cnil){
	goto T502;}
	base[3]= (V292);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T502;
T502:;
	{object V295;
	{register object V296;
	V296= ((V285))->v.v_self[1];
	if(!(type_of(V296)==t_fixnum)){
	goto T512;}
	V296= ((V287))->v.v_self[fix((V296))];
	goto T510;
	goto T512;
T512:;
	V296= VV[3];
	goto T510;
T510:;
	if(!(((V296))==(VV[3]))){
	goto T515;}
	base[3]= (V283);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk203)(Lclptr203);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T506;}
	goto T507;
	goto T515;
T515:;
	if(((V296))==Cnil){
	goto T506;}}
	goto T507;
T507:;
	base[3]= (V283);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk201)(Lclptr201);
	vs_top=sup;
	V295= vs_base[0];
	goto T504;
	goto T506;
T506:;
	{register object V299;
	V299= ((V285))->v.v_self[3];
	if(!(type_of(V299)==t_fixnum)){
	goto T524;}
	V299= ((V287))->v.v_self[fix((V299))];
	goto T522;
	goto T524;
T524:;
	V299= VV[3];
	goto T522;
T522:;
	if(!(((V299))==(VV[3]))){
	goto T527;}
	base[3]= (V283);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V298= vs_base[0];
	goto T519;
	goto T527;
T527:;
	V298= (V299);}
	goto T519;
T519:;
	V295= (VFUN_NARGS=1,(*(LnkLI204))(V298));
	goto T504;
T504:;
	{object V301;
	V301= ((V285))->v.v_self[2];
	if(!(type_of(V301)==t_fixnum)){
	goto T532;}
	base[3]= ((V287))->v.v_self[fix((V301))]= ((V295));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T532;
T532:;
	base[3]= (V295);
	base[4]= (V283);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk202)(Lclptr202);
	return;}}}}}
	}
}
/*	local entry for function (FAST-METHOD CLASS-DIRECT-DEFAULT-INITARGS (SLOT-CLASS))	*/

static object LI18(V306,V307,V308)

object V306;object V307;object V308;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V310 = (*(LnkLI196))((V308),VV[28]);
	VMR18(V310)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-DEFAULT-INITARGS (SLOT-CLASS))	*/

static object LI19(V314,V315,V316)

object V314;object V315;object V316;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V318 = (*(LnkLI196))((V316),VV[29]);
	VMR19(V318)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-CONSTRUCTORS (SLOT-CLASS))	*/

static object LI20(V322,V323,V324)

object V322;object V323;object V324;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V326 = (*(LnkLI196))((V324),VV[30]);
	VMR20(V326)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-SLOT-CELLS (STD-CLASS))	*/

static object LI21(V330,V331,V332)

object V330;object V331;object V332;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{object V334 = (*(LnkLI196))((V332),VV[31]);
	VMR21(V334)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD ADD-DIRECT-SUBCLASS (CLASS CLASS))	*/

static object LI22(V339,V340,V341,V342)

object V339;object V340;register object V341;object V342;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{object V344;
	object V345;
	V344= CMPcar((V339));
	V345= CMPcdr((V339));
	{object V346;
	if(type_of(V341)==t_structure){
	goto T558;}
	goto T556;
	goto T558;
T558:;
	if(!(((V341)->str.str_def)==(VV[32]))){
	goto T556;}
	V346= STREF(object,(V341),4);
	goto T554;
	goto T556;
T556:;{object V348;
	V348= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V341);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V349= vs_base[0];
	if(!((V348)==(CMPcar(V349)))){
	goto T561;}}
	V346= CMPcar(((V341))->cc.cc_turbo[12]);
	goto T554;
	goto T561;
T561:;
	V346= Cnil;
	goto T554;
T554:;
	{object V352;
	base[0]= V342;
	{register object V353;
	V353= ((V344))->v.v_self[1];
	if(!(type_of(V353)==t_fixnum)){
	goto T577;}
	V353= ((V346))->v.v_self[fix((V353))];
	goto T575;
	goto T577;
T577:;
	V353= VV[3];
	goto T575;
T575:;
	if(!(((V353))==(VV[3]))){
	goto T580;}
	base[2]= (V341);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk205)(Lclptr205);
	vs_top=sup;
	base[1]= vs_base[0];
	goto T572;
	goto T580;
T580:;
	base[1]= (V353);}
	goto T572;
T572:;
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	V352= vs_base[0];
	{object V355;
	V355= ((V344))->v.v_self[1];
	if(!(type_of(V355)==t_fixnum)){
	goto T585;}
	(void)(((V346))->v.v_self[fix((V355))]= ((V352)));
	goto T569;
	goto T585;
T585:;
	base[0]= (V352);
	base[1]= (V341);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk206)(Lclptr206);
	vs_top=sup;}}
	goto T569;
T569:;
	{object V357 = (V342);
	VMR22(V357)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-DIRECT-SUBCLASS (CLASS CLASS))	*/

static object LI23(V362,V363,V364,V365)

object V362;object V363;register object V364;object V365;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	{object V367;
	object V368;
	V367= CMPcar((V362));
	V368= CMPcdr((V362));
	{object V369;
	if(type_of(V364)==t_structure){
	goto T599;}
	goto T597;
	goto T599;
T599:;
	if(!(((V364)->str.str_def)==(VV[33]))){
	goto T597;}
	V369= STREF(object,(V364),4);
	goto T595;
	goto T597;
T597:;{object V371;
	V371= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V364);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V372= vs_base[0];
	if(!((V371)==(CMPcar(V372)))){
	goto T602;}}
	V369= CMPcar(((V364))->cc.cc_turbo[12]);
	goto T595;
	goto T602;
T602:;
	V369= Cnil;
	goto T595;
T595:;
	{object V374;
	base[0]= (V365);
	{register object V375;
	V375= ((V367))->v.v_self[1];
	if(!(type_of(V375)==t_fixnum)){
	goto T618;}
	V375= ((V369))->v.v_self[fix((V375))];
	goto T616;
	goto T618;
T618:;
	V375= VV[3];
	goto T616;
T616:;
	if(!(((V375))==(VV[3]))){
	goto T621;}
	base[2]= (V364);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk205)(Lclptr205);
	vs_top=sup;
	base[1]= vs_base[0];
	goto T613;
	goto T621;
T621:;
	base[1]= (V375);}
	goto T613;
T613:;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk95)();
	vs_top=sup;
	V374= vs_base[0];
	{object V377;
	V377= ((V367))->v.v_self[1];
	if(!(type_of(V377)==t_fixnum)){
	goto T626;}
	(void)(((V369))->v.v_self[fix((V377))]= ((V374)));
	goto T610;
	goto T626;
T626:;
	base[0]= (V374);
	base[1]= (V364);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk206)(Lclptr206);
	vs_top=sup;}}
	goto T610;
T610:;
	{object V379 = (V365);
	VMR23(V379)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD ADD-DIRECT-METHOD (CLASS METHOD))	*/

static object LI24(V384,V385,V386,V387)

object V384;object V385;register object V386;object V387;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{register object V389;
	object V390;
	V389= CMPcar((V384));
	V390= CMPcdr((V384));
	{object V391;
	if(type_of(V386)==t_structure){
	goto T640;}
	goto T638;
	goto T640;
T640:;
	if(!(((V386)->str.str_def)==(VV[34]))){
	goto T638;}
	V391= STREF(object,(V386),4);
	goto T636;
	goto T638;
T638:;{object V393;
	V393= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V386);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V394= vs_base[0];
	if(!((V393)==(CMPcar(V394)))){
	goto T643;}}
	V391= CMPcar(((V386))->cc.cc_turbo[12]);
	goto T636;
	goto T643;
T643:;
	V391= Cnil;
	goto T636;
T636:;
	{object V396;
	object V397;
	{register object V398;
	V398= ((V389))->v.v_self[1];
	if(!(type_of(V398)==t_fixnum)){
	goto T658;}
	V398= ((V391))->v.v_self[fix((V398))];
	goto T656;
	goto T658;
T658:;
	V398= VV[3];
	goto T656;
T656:;
	if(!(((V398))==(VV[3]))){
	goto T661;}
	base[2]= (V386);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V396= vs_base[0];
	goto T653;
	goto T661;
T661:;
	V396= (V398);}
	goto T653;
T653:;
	base[2]= (V387);
	{register object V401;
	V401= ((V389))->v.v_self[1];
	if(!(type_of(V401)==t_fixnum)){
	goto T672;}
	V401= ((V391))->v.v_self[fix((V401))];
	goto T670;
	goto T672;
T672:;
	V401= VV[3];
	goto T670;
T670:;
	if(!(((V401))==(VV[3]))){
	goto T675;}
	base[4]= (V386);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V400= vs_base[0];
	goto T667;
	goto T675;
T675:;
	V400= (V401);}
	goto T667;
T667:;
	base[3]= CMPcar(V400);
	vs_top=(vs_base=base+2)+2;
	Ladjoin();
	vs_top=sup;
	V397= vs_base[0];
	((V396))->c.c_car = (V397);}
	{object V403;
	{register object V405;
	V405= ((V389))->v.v_self[1];
	if(!(type_of(V405)==t_fixnum)){
	goto T684;}
	V405= ((V391))->v.v_self[fix((V405))];
	goto T682;
	goto T684;
T684:;
	V405= VV[3];
	goto T682;
T682:;
	if(!(((V405))==(VV[3]))){
	goto T687;}
	base[1]= (V386);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V403= vs_base[0];
	goto T679;
	goto T687;
T687:;
	V403= (V405);}
	goto T679;
T679:;
	((V403))->c.c_cdr = Cnil;}
	{object V407 = (V387);
	VMR24(V407)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-DIRECT-METHOD (CLASS METHOD))	*/

static object LI25(V412,V413,V414,V415)

object V412;object V413;register object V414;object V415;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{register object V417;
	object V418;
	V417= CMPcar((V412));
	V418= CMPcdr((V412));
	{object V419;
	if(type_of(V414)==t_structure){
	goto T701;}
	goto T699;
	goto T701;
T701:;
	if(!(((V414)->str.str_def)==(VV[35]))){
	goto T699;}
	V419= STREF(object,(V414),4);
	goto T697;
	goto T699;
T699:;{object V421;
	V421= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V414);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V422= vs_base[0];
	if(!((V421)==(CMPcar(V422)))){
	goto T704;}}
	V419= CMPcar(((V414))->cc.cc_turbo[12]);
	goto T697;
	goto T704;
T704:;
	V419= Cnil;
	goto T697;
T697:;
	{object V424;
	object V425;
	{register object V426;
	V426= ((V417))->v.v_self[1];
	if(!(type_of(V426)==t_fixnum)){
	goto T719;}
	V426= ((V419))->v.v_self[fix((V426))];
	goto T717;
	goto T719;
T719:;
	V426= VV[3];
	goto T717;
T717:;
	if(!(((V426))==(VV[3]))){
	goto T722;}
	base[2]= (V414);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V424= vs_base[0];
	goto T714;
	goto T722;
T722:;
	V424= (V426);}
	goto T714;
T714:;
	base[2]= (V415);
	{register object V429;
	V429= ((V417))->v.v_self[1];
	if(!(type_of(V429)==t_fixnum)){
	goto T733;}
	V429= ((V419))->v.v_self[fix((V429))];
	goto T731;
	goto T733;
T733:;
	V429= VV[3];
	goto T731;
T731:;
	if(!(((V429))==(VV[3]))){
	goto T736;}
	base[4]= (V414);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V428= vs_base[0];
	goto T728;
	goto T736;
T736:;
	V428= (V429);}
	goto T728;
T728:;
	base[3]= CMPcar(V428);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk95)();
	vs_top=sup;
	V425= vs_base[0];
	((V424))->c.c_car = (V425);}
	{object V431;
	{register object V433;
	V433= ((V417))->v.v_self[1];
	if(!(type_of(V433)==t_fixnum)){
	goto T745;}
	V433= ((V419))->v.v_self[fix((V433))];
	goto T743;
	goto T745;
T745:;
	V433= VV[3];
	goto T743;
T743:;
	if(!(((V433))==(VV[3]))){
	goto T748;}
	base[1]= (V414);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V431= vs_base[0];
	goto T740;
	goto T748;
T748:;
	V431= (V433);}
	goto T740;
T740:;
	((V431))->c.c_cdr = Cnil;}
	{object V435 = (V415);
	VMR25(V435)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-DIRECT-METHODS (CLASS))	*/

static object LI26(V439,V440,V441)

object V439;object V440;register object V441;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V443;
	object V444;
	V443= CMPcar((V439));
	V444= CMPcdr((V439));
	{object V445;
	if(type_of(V441)==t_structure){
	goto T762;}
	goto T760;
	goto T762;
T762:;
	if(!(((V441)->str.str_def)==(VV[36]))){
	goto T760;}
	V445= STREF(object,(V441),4);
	goto T758;
	goto T760;
T760:;{object V447;
	V447= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V441);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V448= vs_base[0];
	if(!((V447)==(CMPcar(V448)))){
	goto T765;}}
	V445= CMPcar(((V441))->cc.cc_turbo[12]);
	goto T758;
	goto T765;
T765:;
	V445= Cnil;
	goto T758;
T758:;
	{register object V451;
	V451= ((V443))->v.v_self[1];
	if(!(type_of(V451)==t_fixnum)){
	goto T777;}
	V451= ((V445))->v.v_self[fix((V451))];
	goto T775;
	goto T777;
T777:;
	V451= VV[3];
	goto T775;
T775:;
	if(!(((V451))==(VV[3]))){
	goto T780;}
	base[0]= (V441);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V450= vs_base[0];
	goto T772;
	goto T780;
T780:;
	V450= (V451);}
	goto T772;
T772:;
	{object V453 = CMPcar(V450);
	VMR26(V453)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-DIRECT-GENERIC-FUNCTIONS (CLASS))	*/

static object LI27(V457,V458,V459)

object V457;object V458;register object V459;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V461;
	object V462;
	V461= CMPcar((V457));
	V462= CMPcdr((V457));
	{object V463;
	if(type_of(V459)==t_structure){
	goto T793;}
	goto T791;
	goto T793;
T793:;
	if(!(((V459)->str.str_def)==(VV[37]))){
	goto T791;}
	V463= STREF(object,(V459),4);
	goto T789;
	goto T791;
T791:;{object V465;
	V465= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V459);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V466= vs_base[0];
	if(!((V465)==(CMPcar(V466)))){
	goto T796;}}
	V463= CMPcar(((V459))->cc.cc_turbo[12]);
	goto T789;
	goto T796;
T796:;
	V463= Cnil;
	goto T789;
T789:;
	{object V468;
	{object V470;
	V470= ((V461))->v.v_self[1];
	if(!(type_of(V470)==t_fixnum)){
	goto T809;}
	V470= ((V463))->v.v_self[fix((V470))];
	goto T807;
	goto T809;
T809:;
	V470= VV[3];
	goto T807;
T807:;
	if(!(((V470))==(VV[3]))){
	goto T812;}
	base[0]= (V459);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V469= vs_base[0];
	goto T804;
	goto T812;
T812:;
	V469= (V470);}
	goto T804;
T804:;
	V468= CMPcdr(V469);
	if(((V468))==Cnil){
	goto T816;}
	{object V472 = (V468);
	VMR27(V472)}
	goto T816;
T816:;
	{object V473;
	object V474;
	{object V475;
	V475= ((V461))->v.v_self[1];
	if(!(type_of(V475)==t_fixnum)){
	goto T823;}
	V475= ((V463))->v.v_self[fix((V475))];
	goto T821;
	goto T823;
T823:;
	V475= VV[3];
	goto T821;
T821:;
	if(!(((V475))==(VV[3]))){
	goto T826;}
	base[2]= (V459);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V473= vs_base[0];
	goto T818;
	goto T826;
T826:;
	V473= (V475);}
	goto T818;
T818:;
	{register object V477;
	register object V478;
	V477= Cnil;
	V478= Cnil;
	{register object V479;
	register object V480;
	{object V482;
	V482= ((V461))->v.v_self[1];
	if(!(type_of(V482)==t_fixnum)){
	goto T839;}
	V482= ((V463))->v.v_self[fix((V482))];
	goto T837;
	goto T839;
T839:;
	V482= VV[3];
	goto T837;
T837:;
	if(!(((V482))==(VV[3]))){
	goto T842;}
	base[4]= (V459);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V481= vs_base[0];
	goto T834;
	goto T842;
T842:;
	V481= (V482);}
	goto T834;
T834:;
	V479= CMPcar(V481);
	V480= CMPcar((V479));
	goto T847;
T847:;
	if(!(((V479))==Cnil)){
	goto T848;}
	goto T832;
	goto T848;
T848:;
	{register object V484;
	base[4]= (V480);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk208)(Lclptr208);
	vs_top=sup;
	V484= vs_base[0];
	if(((V477))!=Cnil){
	goto T856;}
	V478= make_cons((V484),Cnil);
	V477= (V478);
	goto T852;
	goto T856;
T856:;
	{register object x= (V484),V485= (V477);
	while(V485!=Cnil)
	if(x==(V485->c.c_car)){
	goto T852;
	}else V485=V485->c.c_cdr;}
	V487= make_cons((V484),Cnil);
	((V478))->c.c_cdr = /* INLINE-ARGS */V487;
	V486= (V478);
	V478= CMPcdr(V486);}
	goto T852;
T852:;
	V479= CMPcdr((V479));
	V480= CMPcar((V479));
	goto T847;}
	goto T832;
T832:;
	V474= (V477);}
	((V473))->c.c_cdr = (V474);
	{object V488 = (V474);
	VMR27(V488)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-METHOD-TABLE (EQL-SPECIALIZER))	*/

static object LI28(V492,V493,V494)

object V492;object V493;object V494;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{object V496 = (VV[38]->s.s_dbind);
	VMR28(V496)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-METHOD-TABLE (CLASS-EQ-SPECIALIZER))	*/

static object LI29(V500,V501,V502)

object V500;object V501;object V502;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{object V504 = (VV[39]->s.s_dbind);
	VMR29(V504)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD ADD-DIRECT-METHOD (SPECIALIZER-WITH-OBJECT METHOD))	*/

static object LI30(V509,V510,V511,V512)

object V509;object V510;object V511;object V512;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{object V514;
	object V515;
	register object V516;
	base[3]= (V511);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk209)(Lclptr209);
	vs_top=sup;
	V514= vs_base[0];
	base[3]= (V511);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V515= vs_base[0];
	base[3]= (V514);
	base[4]= (V515);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V516= vs_base[0];
	if(((V516))!=Cnil){
	goto T887;}
	{object V519;
	V519= make_cons(Cnil,Cnil);
	base[4]= V514;
	base[5]= V515;
	base[6]= (V519);
	vs_top=(vs_base=base+4)+3;
	siLhash_set();
	vs_top=sup;
	V516= vs_base[0];}
	goto T887;
T887:;
	{object V521;
	base[4]= (V512);
	base[5]= CMPcar((V516));
	vs_top=(vs_base=base+4)+2;
	Ladjoin();
	vs_top=sup;
	V521= vs_base[0];
	(V516)->c.c_car = (V521);}
	(V516)->c.c_cdr = Cnil;
	{object V524 = (V512);
	VMR30(V524)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-DIRECT-METHOD (SPECIALIZER-WITH-OBJECT METHOD))	*/

static object LI31(V529,V530,V531,V532)

object V529;object V530;object V531;object V532;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{object V534;
	register object V535;
	base[2]= (V531);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk209)(Lclptr209);
	vs_top=sup;
	V534= vs_base[0];
	base[2]= (V534);
	base[4]= (V531);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V535= vs_base[0];
	if(((V535))==Cnil){
	goto T912;}
	{object V537;
	base[3]= (V532);
	base[4]= CMPcar((V535));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk95)();
	vs_top=sup;
	V537= vs_base[0];
	(V535)->c.c_car = (V537);}
	(V535)->c.c_cdr = Cnil;
	goto T912;
T912:;
	{object V540 = (V532);
	VMR31(V540)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-DIRECT-METHODS (SPECIALIZER-WITH-OBJECT))	*/

static object LI32(V544,V545,V546)

object V544;object V545;object V546;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	base[1]= (V546);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk209)(Lclptr209);
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= (V546);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V548= vs_base[0];
	{object V549 = CMPcar(V548);
	VMR32(V549)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-DIRECT-GENERIC-FUNCTIONS (SPECIALIZER-WITH-OBJECT))	*/

static object LI33(V553,V554,V555)

object V553;object V554;object V555;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{object V557;
	register object V558;
	base[2]= (V555);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk209)(Lclptr209);
	vs_top=sup;
	V557= vs_base[0];
	base[2]= (V557);
	base[4]= (V555);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V558= vs_base[0];
	if(((V558))==Cnil){
	goto T939;}{object V559;
	V559= CMPcdr((V558));
	if(V559==Cnil)goto T941;
	{object V560 = V559;
	VMR33(V560)}
	goto T941;
T941:;}
	{object V562;
	{register object V563;
	register object V564;
	V563= Cnil;
	V564= Cnil;
	{register object V565;
	register object V566;
	V565= CMPcar((V558));
	V566= CMPcar((V565));
	goto T950;
T950:;
	if(!(((V565))==Cnil)){
	goto T951;}
	goto T946;
	goto T951;
T951:;
	{register object V567;
	base[5]= (V566);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk208)(Lclptr208);
	vs_top=sup;
	V567= vs_base[0];
	if(((V563))!=Cnil){
	goto T959;}
	V564= make_cons((V567),Cnil);
	V563= (V564);
	goto T955;
	goto T959;
T959:;
	{register object x= (V567),V568= (V563);
	while(V568!=Cnil)
	if(x==(V568->c.c_car)){
	goto T955;
	}else V568=V568->c.c_cdr;}
	V570= make_cons((V567),Cnil);
	((V564))->c.c_cdr = /* INLINE-ARGS */V570;
	V569= (V564);
	V564= CMPcdr(V569);}
	goto T955;
T955:;
	V565= CMPcdr((V565));
	V566= CMPcar((V565));
	goto T950;}
	goto T946;
T946:;
	V562= (V563);}
	(V558)->c.c_cdr = (V562);
	{object V571 = (V562);
	VMR33(V571)}}
	goto T939;
T939:;
	{object V572 = Cnil;
	VMR33(V572)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAP-SPECIALIZERS	*/

static object LI35(V574)

object V574;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	base[0]=MMcons((V574),Cnil);
	base[1]= 
	make_cclosure_new(LC126,Cnil,base[0],Cdata);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk211)();
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
	{object V575 = Cnil;
	VMR34(V575)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAP-ALL-GENERIC-FUNCTIONS	*/

static object LI37(V577)

object V577;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	base[0]=MMcons((V577),Cnil);
	base[2]= VV[8];
	base[3]= VV[9];
	vs_top=(vs_base=base+2)+2;
	Lmake_hash_table();
	vs_top=sup;
	base[1]= vs_base[0];
	base[1]=MMcons(base[1],base[0]);
	V578= 
	make_cclosure_new(LC129,Cnil,base[1],Cdata);
	(void)((*(LnkLI212))(V578));
	{object V579 = Cnil;
	VMR35(V579)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :AFTER (CLASS-EQ-SPECIALIZER T))	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{object V580;
	object V581;
	register object V582;
	object V583;
	object V584;
	check_arg(5);
	V580=(base[0]);
	V581=(base[1]);
	V582=(base[2]);
	V583=(base[3]);
	V584=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V586;
	object V587;
	V586= CMPcar((V580));
	V587= CMPcdr((V580));
	{object V588;
	if(type_of(V582)==t_structure){
	goto T996;}
	goto T994;
	goto T996;
T996:;
	if(!(((V582)->str.str_def)==(VV[41]))){
	goto T994;}
	V588= STREF(object,(V582),4);
	goto T992;
	goto T994;
T994:;{object V590;
	V590= (VV[2]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V582);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V591= vs_base[0];
	if(!((V590)==(CMPcar(V591)))){
	goto T999;}}
	V588= CMPcar(((V582))->cc.cc_turbo[12]);
	goto T992;
	goto T999;
T999:;
	V588= Cnil;
	goto T992;
T992:;
	{object V592;
	base[5]= (V582);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk213)(Lclptr213);
	vs_top=sup;
	V593= vs_base[0];
	V592= list(2,VV[42],V593);
	{object V594;
	V594= ((V586))->v.v_self[1];
	if(!(type_of(V594)==t_fixnum)){
	goto T1010;}
	base[5]= ((V588))->v.v_self[fix((V594))]= ((V592));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T1010;
T1010:;
	base[5]= (V592);
	base[6]= (V582);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk214)(Lclptr214);
	return;}}}}
	}
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :AFTER (EQL-SPECIALIZER T))	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	{object V596;
	object V597;
	register object V598;
	object V599;
	object V600;
	check_arg(5);
	V596=(base[0]);
	V597=(base[1]);
	V598=(base[2]);
	V599=(base[3]);
	V600=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V602;
	object V603;
	V602= CMPcar((V596));
	V603= CMPcdr((V596));
	{object V604;
	if(type_of(V598)==t_structure){
	goto T1024;}
	goto T1022;
	goto T1024;
T1024:;
	if(!(((V598)->str.str_def)==(VV[43]))){
	goto T1022;}
	V604= STREF(object,(V598),4);
	goto T1020;
	goto T1022;
T1022:;{object V606;
	V606= (VV[2]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V598);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V607= vs_base[0];
	if(!((V606)==(CMPcar(V607)))){
	goto T1027;}}
	V604= CMPcar(((V598))->cc.cc_turbo[12]);
	goto T1020;
	goto T1027;
T1027:;
	V604= Cnil;
	goto T1020;
T1020:;
	{object V608;
	base[5]= (V598);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk209)(Lclptr209);
	vs_top=sup;
	V609= vs_base[0];
	V608= list(2,VV[44],V609);
	{object V610;
	V610= ((V602))->v.v_self[1];
	if(!(type_of(V610)==t_fixnum)){
	goto T1038;}
	base[5]= ((V604))->v.v_self[fix((V610))]= ((V608));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T1038;
T1038:;
	base[5]= (V608);
	base[6]= (V598);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk214)(Lclptr214);
	return;}}}}
	}
}
/*	local entry for function REAL-LOAD-DEFCLASS	*/

static object LI40(V618,V619,V620,V621,V622,V623)

object V618;object V619;object V620;object V621;object V622;object V623;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	(void)((*(LnkLI215))((V623)));
	{object V624;
	base[0]= (V618);
	base[1]= VV[45];
	base[2]= (V619);
	base[3]= VV[46];
	base[4]= (V620);
	base[5]= VV[47];
	base[6]= (V621);
	base[7]= VV[48];
	V626= list(2,VV[49],(V618));
	vs_base=vs_top;
	(void) (*Lnk216)();
	vs_top=sup;
	V627= vs_base[0];
	base[8]= list(2,/* INLINE-ARGS */V626,V627);
	{object V625;
	V625= (V622);
	 vs_top=base+9;
	 while(V625!=Cnil)
	 {vs_push((V625)->c.c_car);V625=(V625)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk217)();
	vs_top=sup;
	V624= vs_base[0];
	{object V628 = (V624);
	VMR38(V628)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for ENSURE-CLASS	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	{object V629;
	object V630;
	if(vs_top-vs_base<1) too_few_arguments();
	V629=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V630=(base[1]);
	vs_top=sup;
	base[2]=VV[218]->s.s_gfdef;
	base[3]= (V629);
	base[4]= (VFUN_NARGS=2,(*(LnkLI219))((V629),Cnil));
	{object V631;
	V631= (V630);
	 vs_top=base+5;
	 while(V631!=Cnil)
	 {vs_push((V631)->c.c_car);V631=(V631)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk218)(Lclptr218);
	return;
	}
}
/*	local entry for function (FAST-METHOD ENSURE-CLASS-USING-CLASS (T NULL))	*/

static object LI42(V637,V638,V639,V640,V641)

object V637;object V638;register object V639;register object V640;object V641;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{object V644;
	object V645;
	base[0]= (V640);
	base[1]= V641;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk220)();
	if(vs_base>=vs_top){vs_top=sup;goto T1064;}
	V644= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1065;}
	V645= vs_base[0];
	vs_top=sup;
	goto T1066;
	goto T1064;
T1064:;
	V644= Cnil;
	goto T1065;
T1065:;
	V645= Cnil;
	goto T1066;
T1066:;
	base[1]= (V644);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk221)(Lclptr221);
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V639);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk222)(Lclptr222);
	vs_top=sup;
	base[0]=VV[223]->s.s_gfdef;
	base[1]= (V644);
	base[2]= VV[50];
	base[3]= (V639);
	{object V646;
	V646= (V645);
	 vs_top=base+4;
	 while(V646!=Cnil)
	 {vs_push((V646)->c.c_car);V646=(V646)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk223)(Lclptr223);
	vs_top=sup;
	V640= vs_base[0];
	(void)((*(LnkLI224))(V640,V639));
	base[0]= (V640);
	base[1]= (V639);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk222)(Lclptr222);
	vs_top=sup;
	{object V649 = (V640);
	VMR40(V649)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD ENSURE-CLASS-USING-CLASS (T PCL-CLASS))	*/

static object LI43(V655,V656,V657,V658,V659)

object V655;object V656;object V657;register object V658;object V659;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V662;
	object V663;
	base[0]= (V658);
	base[1]= V659;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk220)();
	if(vs_base>=vs_top){vs_top=sup;goto T1087;}
	V662= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1088;}
	V663= vs_base[0];
	vs_top=sup;
	goto T1089;
	goto T1087;
T1087:;
	V662= Cnil;
	goto T1088;
T1088:;
	V663= Cnil;
	goto T1089;
T1089:;
	V664= (*(LnkLI225))((V658));
	V665 = (V662);
	if((/* INLINE-ARGS */V664)==(V665)){
	goto T1090;}
	base[0]= (V658);
	base[1]= (V662);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk226)(Lclptr226);
	vs_top=sup;
	goto T1090;
T1090:;
	base[0]=VV[227]->s.s_gfdef;
	base[1]= (V658);
	{object V666;
	V666= (V663);
	 vs_top=base+2;
	 while(V666!=Cnil)
	 {vs_push((V666)->c.c_car);V666=(V666)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	(void)((*(LnkLI224))(V658,V657));
	base[0]= (V658);
	base[1]= (V657);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk222)(Lclptr222);
	vs_top=sup;
	{object V669 = (V658);
	VMR41(V669)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-PREDICATE-NAME (T))	*/

static object LI44(V673,V674,V675)

object V673;object V674;object V675;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	{object V677 = VV[51];
	VMR42(V677)}
	return Cnil;
}
/*	function definition for ENSURE-CLASS-VALUES	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{object V678;
	object V679;
	check_arg(2);
	V678=(base[0]);
	V679=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V680;
	object V681;
	object V682;
	object V683;
	object V684;
	object V685;
	base[8]= (V679);
	vs_top=(vs_base=base+8)+1;
	Lcopy_list();
	vs_top=sup;
	V680= vs_base[0];
	V681= make_cons(small_fixnum(1),Cnil);
	base[8]= (V680);
	base[9]= VV[45];
	base[10]= (V681);
	vs_top=(vs_base=base+8)+3;
	Lgetf();
	vs_top=sup;
	V682= vs_base[0];
	base[8]= (V680);
	base[9]= VV[46];
	base[10]= (V681);
	vs_top=(vs_base=base+8)+3;
	Lgetf();
	vs_top=sup;
	V683= vs_base[0];
	base[8]= (V680);
	base[9]= VV[47];
	base[10]= (V681);
	vs_top=(vs_base=base+8)+3;
	Lgetf();
	vs_top=sup;
	V684= vs_base[0];
	if(!(((((V682))==((V681))?Ct:Cnil))==Cnil)){
	goto T1122;}
	V685= (VFUN_NARGS=1,(*(LnkLI219))((V682)));
	goto T1120;
	goto T1122;
T1122:;
	if(((V678))==Cnil){
	goto T1124;}
	base[8]= (V678);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1125;}
	goto T1124;
T1124:;
	V685= (VV[52]->s.s_dbind);
	goto T1120;
	goto T1125;
T1125:;
	V685= (*(LnkLI225))((V678));
	goto T1120;
T1120:;
	goto T1132;
T1132:;
	{register object V686;
	register object V687;
	base[8]= (V680);
	base[9]= VV[45];
	vs_top=(vs_base=base+8)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1139;}
	V686= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1140;}
	V687= vs_base[0];
	vs_top=sup;
	goto T1141;
	goto T1139;
T1139:;
	V686= Cnil;
	goto T1140;
T1140:;
	V687= Cnil;
	goto T1141;
T1141:;
	V680= (V686);
	if(((V687))!=Cnil){
	goto T1133;}}
	goto T1130;
	goto T1133;
T1133:;
	goto T1132;
	goto T1130;
T1130:;
	goto T1147;
T1147:;
	{register object V688;
	register object V689;
	base[8]= (V680);
	base[9]= VV[46];
	vs_top=(vs_base=base+8)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1154;}
	V688= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1155;}
	V689= vs_base[0];
	vs_top=sup;
	goto T1156;
	goto T1154;
T1154:;
	V688= Cnil;
	goto T1155;
T1155:;
	V689= Cnil;
	goto T1156;
T1156:;
	V680= (V688);
	if(((V689))!=Cnil){
	goto T1148;}}
	goto T1145;
	goto T1148;
T1148:;
	goto T1147;
	goto T1145;
T1145:;
	goto T1162;
T1162:;
	{register object V690;
	register object V691;
	base[8]= (V680);
	base[9]= VV[47];
	vs_top=(vs_base=base+8)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1169;}
	V690= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1170;}
	V691= vs_base[0];
	vs_top=sup;
	goto T1171;
	goto T1169;
T1169:;
	V690= Cnil;
	goto T1170;
T1170:;
	V691= Cnil;
	goto T1171;
T1171:;
	V680= (V690);
	if(((V691))!=Cnil){
	goto T1163;}}
	goto T1160;
	goto T1163;
T1163:;
	goto T1162;
	goto T1160;
T1160:;
	base[8]= (V685);
	if(((((V683))==((V681))?Ct:Cnil))==Cnil){
	goto T1178;}
	V692= Cnil;
	goto T1177;
	goto T1178;
T1178:;
	{object V693;
	object V694= (V683);
	if(V694==Cnil){
	V692= Cnil;
	goto T1177;}
	base[10]=V693=MMcons(Cnil,Cnil);
	goto T1180;
T1180:;
	base[11]= (V694->c.c_car);
	vs_top=(vs_base=base+11)+1;
	L46(base);
	vs_top=sup;
	(V693->c.c_car)= vs_base[0];
	if((V694=MMcdr(V694))==Cnil){
	V692= base[10];
	goto T1177;}
	V693=MMcdr(V693)=MMcons(Cnil,Cnil);
	goto T1180;}
	goto T1177;
T1177:;
	if(((((V684))==((V681))?Ct:Cnil))==Cnil){
	goto T1184;}
	V695= Cnil;
	goto T1183;
	goto T1184;
T1184:;
	V695= (V684);
	goto T1183;
T1183:;
	V696 = (V680);
	base[9]= listA(5,VV[46],V692,VV[47],V695,V696);
	vs_top=(vs_base=base+8)+2;
	return;}
	}
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :AFTER (STD-CLASS T))	*/

static object LI47(V702,V703,V704,V705,V706)

object V702;object V703;register object V704;object V705;object V706;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{object V708;
	object V710;
	object V711;
	object V713;
	object V714;
	object V716;
	object V717;
	object V719;
	V708= (*(LnkLI193))(VV[46],V706);
	if(!(type_of((V708))==t_cons)){
	goto T1191;}
	V710= CMPcar((V708));
	goto T1189;
	goto T1191;
T1191:;
	V710= Cnil;
	goto T1189;
T1189:;
	V711= (*(LnkLI193))(VV[47],V706);
	if(!(type_of((V711))==t_cons)){
	goto T1196;}
	V713= CMPcar((V711));
	goto T1194;
	goto T1196;
T1196:;
	V713= Cnil;
	goto T1194;
T1194:;
	V714= (*(LnkLI193))(VV[55],V706);
	if(!(type_of((V714))==t_cons)){
	goto T1201;}
	V716= CMPcar((V714));
	goto T1199;
	goto T1201;
T1201:;
	V716= Cnil;
	goto T1199;
T1199:;
	V717= (*(LnkLI193))(VV[56],V706);
	if(!(type_of((V717))==t_cons)){
	goto T1206;}
	V719= CMPcar((V717));
	goto T1204;
	goto T1206;
T1206:;
	V719= Cnil;
	goto T1204;
T1204:;
	{object V720;
	object V721;
	V720= CMPcar((V702));
	V721= CMPcdr((V702));
	{object V722;
	if(type_of(V704)==t_structure){
	goto T1216;}
	goto T1214;
	goto T1216;
T1216:;
	if(!(((V704)->str.str_def)==(VV[57]))){
	goto T1214;}
	V722= STREF(object,(V704),4);
	goto T1212;
	goto T1214;
T1214:;{object V724;
	V724= (VV[2]->s.s_dbind);
	base[8]= small_fixnum(14);
	base[9]= (V704);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V725= vs_base[0];
	if(!((V724)==(CMPcar(V725)))){
	goto T1219;}}
	V722= CMPcar(((V704))->cc.cc_turbo[12]);
	goto T1212;
	goto T1219;
T1219:;
	V722= Cnil;
	goto T1212;
T1212:;
	if((V708)==Cnil){
	goto T1227;}
	if((V710)!=Cnil){
	goto T1230;}
	V710= make_cons((VV[58]->s.s_dbind),Cnil);
	goto T1230;
T1230:;
	{register object V726;
	register object V727;
	V726= (V710);
	V727= CMPcar((V726));
	goto T1235;
T1235:;
	if(!(((V726))==Cnil)){
	goto T1236;}
	goto T1231;
	goto T1236;
T1236:;
	base[9]= (V704);
	base[10]= (V727);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk60)(Lclptr60);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1240;}
	base[9]= VV[59];
	base[10]= (V727);
	base[11]= (V704);
	base[12]= (*(LnkLI225))((V727));
	base[13]= (*(LnkLI225))((V704));
	base[14]= VV[60];
	vs_top=(vs_base=base+9)+6;
	Lerror();
	vs_top=sup;
	goto T1240;
T1240:;
	V726= CMPcdr((V726));
	V727= CMPcar((V726));
	goto T1235;}
	goto T1231;
T1231:;
	{object V729;
	V729= ((V720))->v.v_self[2];
	if(!(type_of(V729)==t_fixnum)){
	goto T1258;}
	(void)(((V722))->v.v_self[fix((V729))]= (V710));
	goto T1225;
	goto T1258;
T1258:;
	base[8]= V710;
	base[9]= (V704);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	goto T1225;}
	goto T1227;
T1227:;
	{object V731;
	V731= ((V720))->v.v_self[2];
	if(!(type_of(V731)==t_fixnum)){
	goto T1267;}
	V731= ((V722))->v.v_self[fix((V731))];
	goto T1265;
	goto T1267;
T1267:;
	V731= VV[3];
	goto T1265;
T1265:;
	if(!(((V731))==(VV[3]))){
	goto T1270;}
	base[8]= (V704);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V710= vs_base[0];
	goto T1262;
	goto T1270;
T1270:;
	V710= (V731);}
	goto T1262;
T1262:;
	goto T1225;
T1225:;
	if((V711)==Cnil){
	goto T1276;}
	{object V733;
	{object V734;
	object V735= (V713);
	if(V735==Cnil){
	V733= Cnil;
	goto T1278;}
	base[8]=V734=MMcons(Cnil,Cnil);
	goto T1279;
T1279:;
	base[9]= (V704);
	base[10]= (V735->c.c_car);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	(V734->c.c_car)= vs_base[0];
	if((V735=MMcdr(V735))==Cnil){
	V733= base[8];
	goto T1278;}
	V734=MMcdr(V734)=MMcons(Cnil,Cnil);
	goto T1279;}
	goto T1278;
T1278:;
	{object V737;
	V737= ((V720))->v.v_self[1];
	if(!(type_of(V737)==t_fixnum)){
	goto T1285;}
	V713= ((V722))->v.v_self[fix((V737))]= ((V733));
	goto T1274;
	goto T1285;
T1285:;
	base[8]= (V733);
	base[9]= (V704);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk232)(Lclptr232);
	vs_top=sup;
	V713= vs_base[0];
	goto T1274;}}
	goto T1276;
T1276:;
	{object V739;
	V739= ((V720))->v.v_self[1];
	if(!(type_of(V739)==t_fixnum)){
	goto T1293;}
	V739= ((V722))->v.v_self[fix((V739))];
	goto T1291;
	goto T1293;
T1293:;
	V739= VV[3];
	goto T1291;
T1291:;
	if(!(((V739))==(VV[3]))){
	goto T1296;}
	base[8]= (V704);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk233)(Lclptr233);
	vs_top=sup;
	V713= vs_base[0];
	goto T1274;
	goto T1296;
T1296:;
	V713= (V739);}
	goto T1274;
T1274:;
	if((V714)==Cnil){
	goto T1301;}
	(void)((*(LnkLI194))((V716),V704,VV[28]));
	goto T1299;
	goto T1301;
T1301:;
	V716= (*(LnkLI196))((V704),VV[28]);
	goto T1299;
T1299:;
	{object V746;
	register object V747;
	V746= Cnil;
	V747= Cnil;
	{register object V748;
	register object V749;
	V748= (V713);
	V749= CMPcar((V748));
	goto T1312;
T1312:;
	if(!(((V748))==Cnil)){
	goto T1313;}
	goto T1308;
	goto T1313;
T1313:;
	base[9]= (V749);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk234)(Lclptr234);
	vs_top=sup;
	V750= vs_base[0];
	V751 = (V704);
	if(!((V750)==(V751))){
	goto T1317;}
	{object V752;
	base[9]= (V749);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk235)(Lclptr235);
	vs_top=sup;
	V752= vs_base[0];
	{object V753;
	base[9]= (V749);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V754= vs_base[0];
	if(((V752))==Cnil){
	goto T1329;}
	vs_base=vs_top;
	{object _funobj = (V752);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V755= vs_base[0];
	goto T1327;
	goto T1329;
T1329:;
	V755= (VV[61]->s.s_dbind);
	goto T1327;
T1327:;
	V753= make_cons(V754,V755);
	if(((V746))!=Cnil){
	goto T1332;}
	V747= make_cons((V753),Cnil);
	V746= (V747);
	goto T1317;
	goto T1332;
T1332:;
	V757= make_cons((V753),Cnil);
	((V747))->c.c_cdr = /* INLINE-ARGS */V757;
	V756= (V747);
	V747= CMPcdr(V756);}}
	goto T1317;
T1317:;
	V748= CMPcdr((V748));
	V749= CMPcar((V748));
	goto T1312;}
	goto T1308;
T1308:;
	V745= (V746);}
	V758 = V704;
	V759 = VV[31];
	(void)((*(LnkLI194))(V745,V758,V759));
	if((V717)==Cnil){
	goto T1346;}
	{object V760;
	V760= CMPcar((V719));
	{object V761;
	V761= ((V720))->v.v_self[3];
	if(!(type_of(V761)==t_fixnum)){
	goto T1351;}
	V719= ((V722))->v.v_self[fix((V761))]= ((V760));
	goto T1344;
	goto T1351;
T1351:;
	base[8]= (V760);
	base[9]= (V704);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk237)(Lclptr237);
	vs_top=sup;
	V719= vs_base[0];
	goto T1344;}}
	goto T1346;
T1346:;
	{object V763;
	{object V764;
	V764= ((V720))->v.v_self[3];
	if(!(type_of(V764)==t_fixnum)){
	goto T1360;}
	V764= ((V722))->v.v_self[fix((V764))];
	goto T1358;
	goto T1360;
T1360:;
	V764= VV[3];
	goto T1358;
T1358:;
	if(!(((V764))==(VV[3]))){
	goto T1363;}
	base[8]= (V704);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk238)(Lclptr238);
	vs_top=sup;
	V763= vs_base[0];
	goto T1355;
	goto T1363;
T1363:;
	V763= (V764);}
	goto T1355;
T1355:;
	if(((V763))==Cnil){
	goto T1367;}
	V719= (V763);
	goto T1344;
	goto T1367;
T1367:;
	{object V766;
	base[9]= (V704);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk240)();
	vs_top=sup;
	V766= vs_base[0];
	{object V767;
	V767= ((V720))->v.v_self[3];
	if(!(type_of(V767)==t_fixnum)){
	goto T1374;}
	V719= ((V722))->v.v_self[fix((V767))]= ((V766));
	goto T1344;
	goto T1374;
T1374:;
	base[8]= (V766);
	base[9]= (V704);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk237)(Lclptr237);
	vs_top=sup;
	V719= vs_base[0];}}}
	goto T1344;
T1344:;
	(void)((*(LnkLI241))((V704),(V710)));
	(void)((*(LnkLI242))((V704),Cnil));
	(void)((*(LnkLI243))((V704),(V719)));
	{object V769 = (*(LnkLI244))((V704),(V713));
	VMR44(V769)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :BEFORE (CLASS T))	*/

static void L48()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	{object V770;
	object V771;
	register object V772;
	object V773;
	object V774;
	check_arg(5);
	V770=(base[0]);
	V771=(base[1]);
	V772=(base[2]);
	V773=(base[3]);
	V774=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V776;
	V776= (*(LnkLI245))(VV[50],V774);
	{object V777;
	object V778;
	V777= CMPcar((V770));
	V778= CMPcdr((V770));
	{object V779;
	if(type_of(V772)==t_structure){
	goto T1392;}
	goto T1390;
	goto T1392;
T1392:;
	if(!(((V772)->str.str_def)==(VV[62]))){
	goto T1390;}
	V779= STREF(object,(V772),4);
	goto T1388;
	goto T1390;
T1390:;{object V781;
	V781= (VV[2]->s.s_dbind);
	base[6]= small_fixnum(14);
	base[7]= (V772);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V782= vs_base[0];
	if(!((V781)==(CMPcar(V782)))){
	goto T1395;}}
	V779= CMPcar(((V772))->cc.cc_turbo[12]);
	goto T1388;
	goto T1395;
T1395:;
	V779= Cnil;
	goto T1388;
T1388:;
	{object V783;
	V783= list(2,VV[63],(V772));
	{object V784;
	V784= ((V777))->v.v_self[1];
	if(!(type_of(V784)==t_fixnum)){
	goto T1405;}
	(void)(((V779))->v.v_self[fix((V784))]= ((V783)));
	goto T1401;
	goto T1405;
T1405:;
	base[6]= (V783);
	base[7]= (V772);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk214)(Lclptr214);
	vs_top=sup;}}
	goto T1401;
T1401:;
	{object V786;
	base[6]= VV[64];
	base[7]= VV[65];
	base[8]= (V772);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk246)();
	vs_top=sup;
	V786= vs_base[0];
	{object V787;
	V787= ((V777))->v.v_self[2];
	if(!(type_of(V787)==t_fixnum)){
	goto T1415;}
	base[6]= ((V779))->v.v_self[fix((V787))]= ((V786));
	vs_top=(vs_base=base+6)+1;
	return;
	goto T1415;
T1415:;
	base[6]= (V786);
	base[7]= (V772);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk247)(Lclptr247);
	return;}}}}}
	}
}
/*	local entry for function (FAST-METHOD REINITIALIZE-INSTANCE :BEFORE (SLOT-CLASS))	*/

static object LI49(V793,V794,V795,V796)

object V793;object V794;register object V795;object V796;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	V798 = (V795);
	base[0]= (V795);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk249)(Lclptr249);
	vs_top=sup;
	V799= vs_base[0];
	(void)((*(LnkLI248))(V798,V799));
	V800 = (V795);
	base[0]= (V795);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk251)(Lclptr251);
	vs_top=sup;
	V801= vs_base[0];
	{object V802 = (*(LnkLI250))(V800,V801);
	VMR46(V802)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD REINITIALIZE-INSTANCE :AFTER (SLOT-CLASS))	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	{object V803;
	object V804;
	object V805;
	check_arg(4);
	V803=(base[0]);
	V804=(base[1]);
	base[2]=MMcons(base[2],Cnil);
	V805=(base[3]);
	vs_top=sup;
	base[4]=MMcons(V805,base[2]);
	base[5]= (base[2]->c.c_car);
	base[6]= 
	make_cclosure_new(LC130,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk252)(Lclptr252);
	return;
	}
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :AFTER (STRUCTURE-CLASS T))	*/

static object LI51(V812,V813,V814,V815,V816)

object V812;object V813;register object V814;object V815;object V816;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V818;
	object V820;
	object V821;
	register object V823;
	object V824;
	object V825;
	object V827;
	V818= (*(LnkLI193))(VV[46],V816);
	if(!(type_of((V818))==t_cons)){
	goto T1437;}
	V820= CMPcar((V818));
	goto T1435;
	goto T1437;
T1437:;
	V820= Cnil;
	goto T1435;
T1435:;
	V821= (*(LnkLI193))(VV[47],V816);
	if(!(type_of((V821))==t_cons)){
	goto T1442;}
	V823= CMPcar((V821));
	goto T1440;
	goto T1442;
T1442:;
	V823= Cnil;
	goto T1440;
T1440:;
	V824= (*(LnkLI245))(VV[55],V816);
	V825= (*(LnkLI193))(VV[56],V816);
	if(!(type_of((V825))==t_cons)){
	goto T1448;}
	V827= CMPcar((V825));
	goto T1446;
	goto T1448;
T1448:;
	V827= Cnil;
	goto T1446;
T1446:;
	{register object V828;
	object V829;
	V828= CMPcar((V812));
	V829= CMPcdr((V812));
	{register object V830;
	if(type_of(V814)==t_structure){
	goto T1458;}
	goto T1456;
	goto T1458;
T1458:;
	if(!(((V814)->str.str_def)==(VV[66]))){
	goto T1456;}
	V830= STREF(object,(V814),4);
	goto T1454;
	goto T1456;
T1456:;{object V832;
	V832= (VV[2]->s.s_dbind);
	base[7]= small_fixnum(14);
	base[8]= (V814);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V833= vs_base[0];
	if(!((V832)==(CMPcar(V833)))){
	goto T1461;}}
	V830= CMPcar(((V814))->cc.cc_turbo[12]);
	goto T1454;
	goto T1461;
T1461:;
	V830= Cnil;
	goto T1454;
T1454:;
	if((V818)==Cnil){
	goto T1469;}
	{object V834;
	if((V820)!=Cnil){
	V834= (V820);
	goto T1471;}
	base[7]= (V814);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V835= vs_base[0];
	if((((V835)==(VV[67])?Ct:Cnil))==Cnil){
	goto T1473;}
	V820= Cnil;
	goto T1472;
	goto T1473;
T1473:;
	V820= make_cons((VV[68]->s.s_dbind),Cnil);
	goto T1472;
T1472:;
	V834= (V820);
	goto T1471;
T1471:;
	{object V836;
	V836= ((V828))->v.v_self[5];
	if(!(type_of(V836)==t_fixnum)){
	goto T1479;}
	(void)(((V830))->v.v_self[fix((V836))]= ((V834)));
	goto T1467;
	goto T1479;
T1479:;
	base[7]= (V834);
	base[8]= (V814);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	goto T1467;}}
	goto T1469;
T1469:;
	{register object V838;
	V838= ((V828))->v.v_self[5];
	if(!(type_of(V838)==t_fixnum)){
	goto T1488;}
	V838= ((V830))->v.v_self[fix((V838))];
	goto T1486;
	goto T1488;
T1488:;
	V838= VV[3];
	goto T1486;
T1486:;
	if(!(((V838))==(VV[3]))){
	goto T1491;}
	base[7]= (V814);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V820= vs_base[0];
	goto T1483;
	goto T1491;
T1491:;
	V820= (V838);}
	goto T1483;
T1483:;
	goto T1467;
T1467:;
	{register object V840;
	object V841;
	object V842;
	base[10]= (V814);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V840= vs_base[0];
	{register object V843;
	V843= ((V828))->v.v_self[6];
	if(!(type_of(V843)==t_fixnum)){
	goto T1502;}
	V843= ((V830))->v.v_self[fix((V843))];
	goto T1500;
	goto T1502;
T1502:;
	V843= VV[3];
	goto T1500;
T1500:;
	if(!(((V843))==(VV[3]))){
	goto T1505;}
	base[10]= (V814);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk253)(Lclptr253);
	vs_top=sup;
	V841= vs_base[0];
	goto T1497;
	goto T1505;
T1505:;
	V841= (V843);}
	goto T1497;
T1497:;
	if((V841)!=Cnil){
	V842= (V841);
	goto T1508;}
	V845= (*(LnkLI254))((V840));
	V842= ((/* INLINE-ARGS */V845)==Cnil?Ct:Cnil);
	goto T1508;
T1508:;
	if((V821)==Cnil){
	goto T1511;}
	{object V846;
	{object V847;
	object V848= (V823);
	if(V848==Cnil){
	V823= Cnil;
	goto T1514;}
	base[10]=V847=MMcons(Cnil,Cnil);
	goto T1515;
T1515:;
	{object V849;
	V849= (V848->c.c_car);
	if(((V842))==Cnil){
	goto T1517;}
	{object V850;
	object V851;
	object V852;
	base[14]= (V849);
	base[15]= VV[50];
	vs_top=(vs_base=base+14)+2;
	Lgetf();
	vs_top=sup;
	V850= vs_base[0];
	base[14]= Cnil;
	base[15]= VV[69];
	base[16]= (V840);
	base[17]= (V850);
	vs_top=(vs_base=base+14)+4;
	Lformat();
	vs_top=sup;
	V851= vs_base[0];
	base[14]= (V851);
	vs_top=(vs_base=base+14)+1;
	Lintern();
	vs_top=sup;
	V852= vs_base[0];
	V849= listA(3,VV[70],(V852),(V849));}
	goto T1517;
T1517:;
	base[11]= (V814);
	base[12]= (V849);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	(V847->c.c_car)= vs_base[0];}
	if((V848=MMcdr(V848))==Cnil){
	V823= base[10];
	goto T1514;}
	V847=MMcdr(V847)=MMcons(Cnil,Cnil);
	goto T1515;}
	goto T1514;
T1514:;
	V846= (V823);
	{object V853;
	V853= ((V828))->v.v_self[4];
	if(!(type_of(V853)==t_fixnum)){
	goto T1535;}
	(void)(((V830))->v.v_self[fix((V853))]= ((V846)));
	goto T1509;
	goto T1535;
T1535:;
	base[10]= (V846);
	base[11]= (V814);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk232)(Lclptr232);
	vs_top=sup;
	goto T1509;}}
	goto T1511;
T1511:;
	{register object V855;
	V855= ((V828))->v.v_self[4];
	if(!(type_of(V855)==t_fixnum)){
	goto T1544;}
	V855= ((V830))->v.v_self[fix((V855))];
	goto T1542;
	goto T1544;
T1544:;
	V855= VV[3];
	goto T1542;
T1542:;
	if(!(((V855))==(VV[3]))){
	goto T1547;}
	base[10]= (V814);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk233)(Lclptr233);
	vs_top=sup;
	V823= vs_base[0];
	goto T1539;
	goto T1547;
T1547:;
	V823= (V855);}
	goto T1539;
T1539:;
	goto T1509;
T1509:;
	if(((V842))==Cnil){
	goto T1494;}
	{object V857;
	object V858;
	object V859;
	object V860;
	object V861;
	object V862;
	object V863;
	object V864;
	object V865;
	{register object V867;
	V867= ((V828))->v.v_self[5];
	if(!(type_of(V867)==t_fixnum)){
	goto T1558;}
	V867= ((V830))->v.v_self[fix((V867))];
	goto T1556;
	goto T1558;
T1558:;
	V867= VV[3];
	goto T1556;
T1556:;
	if(!(((V867))==(VV[3]))){
	goto T1561;}
	base[19]= (V814);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V866= vs_base[0];
	goto T1553;
	goto T1561;
T1561:;
	V866= (V867);}
	goto T1553;
T1553:;
	V857= CMPcar(V866);
	base[20]= Cnil;
	base[21]= VV[71];
	base[22]= (V840);
	vs_top=(vs_base=base+20)+3;
	Lformat();
	vs_top=sup;
	base[19]= vs_base[0];
	vs_top=(vs_base=base+19)+1;
	Lintern();
	vs_top=sup;
	V858= vs_base[0];
	base[20]= Cnil;
	base[21]= VV[72];
	base[22]= (V858);
	vs_top=(vs_base=base+20)+3;
	Lformat();
	vs_top=sup;
	base[19]= vs_base[0];
	vs_top=(vs_base=base+19)+1;
	Lintern();
	vs_top=sup;
	V859= vs_base[0];
	if(((V857))==Cnil){
	goto T1577;}
	base[19]= (V857);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V870= vs_base[0];
	V871= list(2,VV[74],V870);
	V869= make_cons(/* INLINE-ARGS */V871,Cnil);
	goto T1575;
	goto T1577;
T1577:;
	V869= Cnil;
	goto T1575;
T1575:;
	V872= list(2,VV[77],(V858));
	V873= list(4,VV[75],VV[76],/* INLINE-ARGS */V872,list(3,VV[78],(V859),Cnil));
	V874= append(V869,/* INLINE-ARGS */V873);
	V875= make_cons((V840),/* INLINE-ARGS */V874);
	{object V877;
	object V878= (V823);
	if(V878==Cnil){
	V876= Cnil;
	goto T1581;}
	base[19]=V877=MMcons(Cnil,Cnil);
	goto T1582;
T1582:;
	base[20]= (V878->c.c_car);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V880= vs_base[0];
	(V877->c.c_car)= list(2,V880,VV[61]);
	if((V878=MMcdr(V878))==Cnil){
	V876= base[19];
	goto T1581;}
	V877=MMcdr(V877)=MMcons(Cnil,Cnil);
	goto T1582;}
	goto T1581;
T1581:;
	V860= listA(3,VV[73],/* INLINE-ARGS */V875,V876);
	{object V881;
	object V882= (V823);
	if(V882==Cnil){
	V861= Cnil;
	goto T1586;}
	base[19]=V881=MMcons(Cnil,Cnil);
	goto T1587;
T1587:;
	base[21]= Cnil;
	base[22]= VV[79];
	base[23]= (V858);
	base[25]= (V882->c.c_car);
	vs_top=(vs_base=base+25)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	base[24]= vs_base[0];
	vs_top=(vs_base=base+21)+4;
	Lformat();
	vs_top=sup;
	base[20]= vs_base[0];
	vs_top=(vs_base=base+20)+1;
	Lintern();
	vs_top=sup;
	(V881->c.c_car)= vs_base[0];
	if((V882=MMcdr(V882))==Cnil){
	V861= base[19];
	goto T1586;}
	V881=MMcdr(V881)=MMcons(Cnil,Cnil);
	goto T1587;}
	goto T1586;
T1586:;
	{object V884;
	object V885= (V823);
	if(V885==Cnil){
	V862= Cnil;
	goto T1595;}
	base[19]=V884=MMcons(Cnil,Cnil);
	goto T1596;
T1596:;
	base[21]= Cnil;
	base[22]= VV[80];
	base[23]= (V858);
	base[25]= (V885->c.c_car);
	vs_top=(vs_base=base+25)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	base[24]= vs_base[0];
	vs_top=(vs_base=base+21)+4;
	Lformat();
	vs_top=sup;
	base[20]= vs_base[0];
	vs_top=(vs_base=base+20)+1;
	Lintern();
	vs_top=sup;
	(V884->c.c_car)= vs_base[0];
	if((V885=MMcdr(V885))==Cnil){
	V862= base[19];
	goto T1595;}
	V884=MMcdr(V884)=MMcons(Cnil,Cnil);
	goto T1596;}
	goto T1595;
T1595:;
	{object V887;
	object V888= (V823);
	object V889= (V861);
	if(V888==Cnil||V889==Cnil){
	V863= Cnil;
	goto T1604;}
	base[19]=V887=MMcons(Cnil,Cnil);
	goto T1605;
T1605:;
	{object V892;
	base[20]= (V888->c.c_car);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk255)(Lclptr255);
	vs_top=sup;
	V892= vs_base[0];
	V893= list(2,VV[83],list(3,VV[84],(V840),VV[85]));
	(V887->c.c_car)= list(5,VV[81],(V889->c.c_car),VV[82],/* INLINE-ARGS */V893,list(2,(V892),VV[85]));}
	if((V888=MMcdr(V888))==Cnil||(V889=MMcdr(V889))==Cnil){
	V863= base[19];
	goto T1604;}
	V887=MMcdr(V887)=MMcons(Cnil,Cnil);
	goto T1605;}
	goto T1604;
T1604:;
	{object V894;
	object V895= (V823);
	object V896= (V862);
	if(V895==Cnil||V896==Cnil){
	V864= Cnil;
	goto T1609;}
	base[19]=V894=MMcons(Cnil,Cnil);
	goto T1610;
T1610:;
	{object V899;
	base[20]= (V895->c.c_car);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk255)(Lclptr255);
	vs_top=sup;
	V899= vs_base[0];
	V900= list(2,VV[83],list(3,VV[84],(V840),VV[85]));
	(V894->c.c_car)= list(5,VV[81],(V896->c.c_car),VV[86],/* INLINE-ARGS */V900,list(3,VV[87],list(2,(V899),VV[85]),VV[88]));}
	if((V895=MMcdr(V895))==Cnil||(V896=MMcdr(V896))==Cnil){
	V864= base[19];
	goto T1609;}
	V894=MMcdr(V894)=MMcons(Cnil,Cnil);
	goto T1610;}
	goto T1609;
T1609:;
	V901 = (V860);
	base[19]= (V863);
	base[20]= (V864);
	V903= listA(3,VV[90],list(2,VV[91],(V840)),VV[92]);
	base[21]= make_cons(/* INLINE-ARGS */V903,Cnil);
	vs_top=(vs_base=base+19)+3;
	Lappend();
	vs_top=sup;
	V902= vs_base[0];
	V865= listA(3,VV[89],V901,V902);
	if(((*(LnkLI254))((V840)))!=Cnil){
	goto T1619;}
	base[19]= (V865);
	vs_top=(vs_base=base+19)+1;
	Leval();
	vs_top=sup;
	goto T1619;
T1619:;
	{
	object V904= (V823);
	object V905= (V861);
	object V906= (V862);
	if(V904==Cnil||V905==Cnil||V906==Cnil){
	goto T1623;}
	goto T1624;
T1624:;
	{object V910;
	object V911;
	V910= (*(LnkLI183))((V905->c.c_car));
	if(((*(LnkLI256))((V906->c.c_car)))==Cnil){
	goto T1629;}
	V911= (*(LnkLI183))((V906->c.c_car));
	goto T1627;
	goto T1629;
T1629:;
	V911= Cnil;
	goto T1627;
T1627:;
	base[21]= (V910);
	base[22]= (V904->c.c_car);
	vs_top=(vs_base=base+21)+2;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	base[21]= (V911);
	base[22]= (V904->c.c_car);
	vs_top=(vs_base=base+21)+2;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;}
	if((V904=MMcdr(V904))==Cnil||(V905=MMcdr(V905))==Cnil||(V906=MMcdr(V906))==Cnil){
	goto T1623;}
	goto T1624;}
	goto T1623;
T1623:;
	{object V913;
	V913= ((V828))->v.v_self[3];
	if(!(type_of(V913)==t_fixnum)){
	goto T1639;}
	(void)(((V830))->v.v_self[fix((V913))]= (V865));
	goto T1636;
	goto T1639;
T1639:;
	base[19]= V865;
	base[20]= (V814);
	vs_top=(vs_base=base+19)+2;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;}
	goto T1636;
T1636:;
	{object V916;
	V916= ((V828))->v.v_self[2];
	if(!(type_of(V916)==t_fixnum)){
	goto T1645;}
	(void)(((V830))->v.v_self[fix((V916))]= (V859));
	goto T1494;
	goto T1645;
T1645:;
	base[19]= V859;
	base[20]= (V814);
	vs_top=(vs_base=base+19)+2;
	(void) (*Lnk260)(Lclptr260);
	vs_top=sup;}}}
	goto T1494;
T1494:;
	(void)((*(LnkLI241))((V814),(V820)));
	{object V918;
	base[7]= (V814);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk261)(Lclptr261);
	vs_top=sup;
	V918= vs_base[0];
	{object V919;
	V919= ((V828))->v.v_self[1];
	if(!(type_of(V919)==t_fixnum)){
	goto T1655;}
	(void)(((V830))->v.v_self[fix((V919))]= ((V918)));
	goto T1650;
	goto T1655;
T1655:;
	base[7]= (V918);
	base[8]= (V814);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk98)(Lclptr98);
	vs_top=sup;}}
	goto T1650;
T1650:;
	{object V921;
	base[7]= (V814);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk262)(Lclptr262);
	vs_top=sup;
	V921= vs_base[0];
	{object V922;
	V922= ((V828))->v.v_self[8];
	if(!(type_of(V922)==t_fixnum)){
	goto T1664;}
	(void)(((V830))->v.v_self[fix((V922))]= ((V921)));
	goto T1659;
	goto T1664;
T1664:;
	base[7]= (V921);
	base[8]= (V814);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk102)(Lclptr102);
	vs_top=sup;}}
	goto T1659;
T1659:;
	{register object V924;
	V924= ((V828))->v.v_self[9];
	if(!(type_of(V924)==t_fixnum)){
	goto T1675;}
	V924= ((V830))->v.v_self[fix((V924))];
	goto T1673;
	goto T1675;
T1675:;
	V924= VV[3];
	goto T1673;
T1673:;
	if(!(((V924))==(VV[3]))){
	goto T1678;}
	base[7]= (V814);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1668;}
	goto T1670;
	goto T1678;
T1678:;
	if(((V924))!=Cnil){
	goto T1668;}}
	goto T1670;
T1670:;
	{object V926;
	V926= (VFUN_NARGS=2,(*(LnkLI263))(small_fixnum(0),(V814)));
	{object V927;
	V927= ((V828))->v.v_self[9];
	if(!(type_of(V927)==t_fixnum)){
	goto T1684;}
	(void)(((V830))->v.v_self[fix((V927))]= ((V926)));
	goto T1668;
	goto T1684;
T1684:;
	base[7]= (V926);
	base[8]= (V814);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;}}
	goto T1668;
T1668:;
	(void)((*(LnkLI264))((V814)));
	if((V825)==Cnil){
	goto T1692;}
	{object V929;
	V929= CMPcar((V827));
	{object V930;
	V930= ((V828))->v.v_self[7];
	if(!(type_of(V930)==t_fixnum)){
	goto T1697;}
	V827= ((V830))->v.v_self[fix((V930))]= ((V929));
	goto T1690;
	goto T1697;
T1697:;
	base[7]= (V929);
	base[8]= (V814);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk237)(Lclptr237);
	vs_top=sup;
	V827= vs_base[0];
	goto T1690;}}
	goto T1692;
T1692:;
	{object V932;
	{register object V933;
	V933= ((V828))->v.v_self[7];
	if(!(type_of(V933)==t_fixnum)){
	goto T1706;}
	V933= ((V830))->v.v_self[fix((V933))];
	goto T1704;
	goto T1706;
T1706:;
	V933= VV[3];
	goto T1704;
T1704:;
	if(!(((V933))==(VV[3]))){
	goto T1709;}
	base[7]= (V814);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk238)(Lclptr238);
	vs_top=sup;
	V932= vs_base[0];
	goto T1701;
	goto T1709;
T1709:;
	V932= (V933);}
	goto T1701;
T1701:;
	if(((V932))==Cnil){
	goto T1713;}
	V827= (V932);
	goto T1690;
	goto T1713;
T1713:;
	{object V935;
	base[8]= (V814);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk240)();
	vs_top=sup;
	V935= vs_base[0];
	{object V936;
	V936= ((V828))->v.v_self[7];
	if(!(type_of(V936)==t_fixnum)){
	goto T1720;}
	V827= ((V830))->v.v_self[fix((V936))]= ((V935));
	goto T1690;
	goto T1720;
T1720:;
	base[7]= (V935);
	base[8]= (V814);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk237)(Lclptr237);
	vs_top=sup;
	V827= vs_base[0];}}}
	goto T1690;
T1690:;
	(void)((*(LnkLI243))((V814),(V827)));
	{object V938 = (*(LnkLI244))((V814),(V823));
	VMR48(V938)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD DIRECT-SLOT-DEFINITION-CLASS (STRUCTURE-CLASS T))	*/

static object LI52(V943,V944,V945,V946)

object V943;object V944;object V945;object V946;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	{object V948 = (VFUN_NARGS=1,(*(LnkLI219))(VV[93]));
	VMR49(V948)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD FINALIZE-INHERITANCE (STRUCTURE-CLASS))	*/

static object LI53(V952,V953,V954)

object V952;object V953;object V954;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V956 = Cnil;
	VMR50(V956)}
	return Cnil;
}
/*	local entry for function ADD-SLOT-ACCESSORS	*/

static object LI54(V959,V960)

object V959;object V960;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V961 = (*(LnkLI265))((V959),(V960),VV[94]);
	VMR51(V961)}
	return Cnil;
}
/*	local entry for function REMOVE-SLOT-ACCESSORS	*/

static object LI55(V964,V965)

object V964;object V965;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{object V966 = (*(LnkLI265))((V964),(V965),VV[95]);
	VMR52(V966)}
	return Cnil;
}
/*	local entry for function FIX-SLOT-ACCESSORS	*/

static object LI58(V970,V971,V972)

object V970;object V971;object V972;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	base[0]= (V972);
	base[1]= (V970);
	{register object V973;
	object V974;
	V973= (V971);
	V974= CMPcar((V973));
	goto T1734;
T1734:;
	if(!(((V973))==Cnil)){
	goto T1735;}
	{object V975 = Cnil;
	VMR53(V975)}
	goto T1735;
T1735:;
	{register object V976;
	base[3]= (V974);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V976= vs_base[0];
	{register object V977;
	register object V978;
	base[5]= (V974);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk266)(Lclptr266);
	vs_top=sup;
	V977= vs_base[0];
	V978= CMPcar((V977));
	goto T1747;
T1747:;
	if(!(((V977))==Cnil)){
	goto T1748;}
	goto T1742;
	goto T1748;
T1748:;
	base[5]= (V978);
	base[6]= (V976);
	base[7]= VV[96];
	vs_top=(vs_base=base+5)+3;
	L59(base);
	vs_top=sup;
	V977= CMPcdr((V977));
	V978= CMPcar((V977));
	goto T1747;}
	goto T1742;
T1742:;
	{register object V979;
	register object V980;
	base[5]= (V974);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk267)(Lclptr267);
	vs_top=sup;
	V979= vs_base[0];
	V980= CMPcar((V979));
	goto T1765;
T1765:;
	if(!(((V979))==Cnil)){
	goto T1766;}
	goto T1739;
	goto T1766;
T1766:;
	base[5]= (V980);
	base[6]= (V976);
	base[7]= VV[97];
	vs_top=(vs_base=base+5)+3;
	L59(base);
	vs_top=sup;
	V979= CMPcdr((V979));
	V980= CMPcar((V979));
	goto T1765;}}
	goto T1739;
T1739:;
	V973= CMPcdr((V973));
	V974= CMPcar((V973));
	goto T1734;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-DIRECT-SUBCLASSES	*/

static object LI60(V983,V984)

register object V983;object V984;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	{register object V985;
	register object V986;
	V985= (V984);
	V986= CMPcar((V985));
	goto T1787;
T1787:;
	if(!(((V985))==Cnil)){
	goto T1788;}
	{object V987 = Cnil;
	VMR54(V987)}
	goto T1788;
T1788:;
	V989 = (V983);
	base[1]= (V983);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk268)(Lclptr268);
	vs_top=sup;
	V990= vs_base[0];
	{register object x= V989,V988= V990;
	while(V988!=Cnil)
	if(x==(V988->c.c_car)){
	goto T1792;
	}else V988=V988->c.c_cdr;}
	base[1]= (V986);
	base[2]= (V983);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk269)(Lclptr269);
	vs_top=sup;
	goto T1792;
T1792:;
	V985= CMPcdr((V985));
	V986= CMPcar((V985));
	goto T1787;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REMOVE-DIRECT-SUBCLASSES	*/

static object LI61(V993,V994)

register object V993;object V994;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{object V995;
	base[0]= (V993);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk249)(Lclptr249);
	vs_top=sup;
	V995= vs_base[0];
	{register object V996;
	register object V997;
	base[2]= (V995);
	base[3]= (V994);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	V996= vs_base[0];
	V997= CMPcar((V996));
	goto T1811;
T1811:;
	if(!(((V996))==Cnil)){
	goto T1812;}
	{object V998 = Cnil;
	VMR55(V998)}
	goto T1812;
T1812:;
	base[2]= (V997);
	base[3]= (V993);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk271)(Lclptr271);
	vs_top=sup;
	V996= CMPcdr((V996));
	V997= CMPcar((V996));
	goto T1811;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD FINALIZE-INHERITANCE (STD-CLASS))	*/

static object LI62(V1002,V1003,V1004)

object V1002;object V1003;object V1004;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V1006 = (*(LnkLI242))((V1004),Ct);
	VMR56(V1006)}
	return Cnil;
}
/*	local entry for function CLASS-HAS-A-FORWARD-REFERENCED-SUPERCLASS-P	*/

static object LI63(V1008)

object V1008;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;{object V1009;
	base[0]= (V1008);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V1009= vs_base[0];
	if(V1009==Cnil)goto T1827;
	{object V1010 = V1009;
	VMR57(V1010)}
	goto T1827;
T1827:;}
	base[0]= (VV[272]->s.s_gfdef);
	base[2]= (V1008);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk249)(Lclptr249);
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk273)();
	vs_top=sup;
	{object V1011 = vs_base[0];
	VMR57(V1011)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-CLASS	*/

static object LI64(V1014,V1015)

register object V1014;object V1015;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	if(((V1015))!=Cnil){
	goto T1834;}
	base[0]= (V1014);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk274)(Lclptr274);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1834;}
	if(((*(LnkLI272))((V1014)))!=Cnil){
	goto T1833;}
	goto T1834;
T1834:;
	V1016 = (V1014);
	base[0]= (V1014);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk261)(Lclptr261);
	vs_top=sup;
	V1017= vs_base[0];
	(void)((*(LnkLI275))(V1016,V1017));
	V1018 = (V1014);
	base[0]= (V1014);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk262)(Lclptr262);
	vs_top=sup;
	V1019= vs_base[0];
	(void)((*(LnkLI276))(V1018,V1019));
	(void)((*(LnkLI277))((V1014)));
	V1020 = (V1014);
	base[0]= (V1014);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk279)(Lclptr279);
	vs_top=sup;
	V1021= vs_base[0];
	(void)((*(LnkLI278))(V1020,V1021));
	base[0]= (V1014);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk280)();
	vs_top=sup;
	goto T1833;
T1833:;
	if(((V1015))!=Cnil){
	goto T1853;}
	{register object V1022;
	register object V1023;
	base[2]= (V1014);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk268)(Lclptr268);
	vs_top=sup;
	V1022= vs_base[0];
	V1023= CMPcar((V1022));
	goto T1859;
T1859:;
	if(!(((V1022))==Cnil)){
	goto T1860;}
	{object V1024 = Cnil;
	VMR58(V1024)}
	goto T1860;
T1860:;
	(void)((*(LnkLI242))((V1023),Cnil));
	V1022= CMPcdr((V1022));
	V1023= CMPcar((V1022));
	goto T1859;}
	goto T1853;
T1853:;
	{object V1025 = Cnil;
	VMR58(V1025)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-CPL	*/

static object LI65(V1028,V1029)

register object V1028;object V1029;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	base[0]= (V1028);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk274)(Lclptr274);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1870;}
	base[0]= (V1028);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk99)(Lclptr99);
	vs_top=sup;
	V1030= vs_base[0];
	V1031 = (V1029);
	if(equal(V1030,V1031)){
	goto T1870;}
	(void)((*(LnkLI281))((V1028)));
	goto T1870;
T1870:;
	if(!((VV[98])->s.s_gfdef!=OBJNULL)){
	goto T1880;}
	base[0]= (V1029);
	base[1]= (V1028);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk98)(Lclptr98);
	vs_top=sup;
	goto T1878;
	goto T1880;
T1880:;
	(void)((*(LnkLI283))(VV[98],VV[99]));
	goto T1878;
T1878:;
	{object V1032 = (*(LnkLI284))((V1029));
	VMR59(V1032)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-CLASS-CAN-PRECEDE-P	*/

static object LI66(V1034)

object V1034;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;
	if(((V1034))==Cnil){
	goto T1885;}
	{object V1035;
	V1035= CMPcar((V1034));
	{register object V1036;
	register object V1037;
	V1036= CMPcdr((V1034));
	V1037= CMPcar((V1036));
	goto T1892;
T1892:;
	if(!(((V1036))==Cnil)){
	goto T1893;}
	goto T1887;
	goto T1893;
T1893:;
	{register object V1038;
	register object V1039;
	register object V1040;
	register object V1041;
	V1038= (V1037);
	V1039= (V1035);
	V1040= VV[100];
	base[3]= (V1038);
	base[5]= (V1039);
	base[6]= (V1040);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk285)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	V1041= vs_base[0];
	base[3]= (V1039);
	base[4]= (V1040);
	base[5]= (V1041);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk286)();
	vs_top=sup;}
	V1036= CMPcdr((V1036));
	V1037= CMPcar((V1036));
	goto T1892;}}
	goto T1887;
T1887:;
	V1034= CMPcdr((V1034));
	goto TTL;
	goto T1885;
T1885:;
	{object V1042 = Cnil;
	VMR60(V1042)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLASS-CAN-PRECEDE-P	*/

static object LI67(V1045,V1046)

object V1045;object V1046;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	V1048 = (V1046);
	base[0]= (V1045);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk287)(Lclptr287);
	vs_top=sup;
	V1049= vs_base[0];
	{register object x= V1048,V1047= V1049;
	while(V1047!=Cnil)
	if(eql(x,V1047->c.c_car)){
	{object V1050 = V1047;
	VMR61(V1050)}
	}else V1047=V1047->c.c_cdr;
	{object V1051 = Cnil;
	VMR61(V1051)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-SLOTS	*/

static object LI68(V1054,V1055)

object V1054;object V1055;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	{register object V1056;
	register object V1057;
	V1056= Cnil;
	V1057= Cnil;
	{register object V1058;
	register object V1059;
	V1058= (V1055);
	V1059= CMPcar((V1058));
	goto T1922;
T1922:;
	if(!(((V1058))==Cnil)){
	goto T1923;}
	goto T1918;
	goto T1923;
T1923:;
	{register object V1060;
	base[1]= (V1059);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk234)(Lclptr234);
	vs_top=sup;
	V1060= vs_base[0];
	if(!(((V1060))==(VV[19]))){
	goto T1931;}
	V1056= make_cons(V1059,(V1056));
	goto T1927;
	goto T1931;
T1931:;
	base[1]= (V1060);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk288)(Lclptr288);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1927;}
	V1057= make_cons(V1059,(V1057));}
	goto T1927;
T1927:;
	V1058= CMPcdr((V1058));
	V1059= CMPcar((V1058));
	goto T1922;}
	goto T1918;
T1918:;
	{object V1063;
	object V1064;
	object V1065;
	object V1066;
	object V1067;
	object V1068;
	object V1069;
	base[8]=VV[236]->s.s_gfdef;
	base[9]= (V1056);
	base[10]= (VV[289]->s.s_gfdef);
	base[11]= VV[101];
	base[12]= (VV[290]->s.s_gfdef);
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk291)();
	vs_top=sup;
	V1072= vs_base[0];
	{object V1070;
	object V1071= V1072;
	if(V1071==Cnil){
	V1063= Cnil;
	goto T1943;}
	base[7]=V1070=MMcons(Cnil,Cnil);
	goto T1944;
T1944:;
	base[9]= (V1071->c.c_car);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	(V1070->c.c_car)= vs_base[0];
	if((V1071=MMcdr(V1071))==Cnil){
	V1063= base[7];
	goto T1943;}
	V1070=MMcdr(V1070)=MMcons(Cnil,Cnil);
	goto T1944;}
	goto T1943;
T1943:;
	V1064= CMPmake_fixnum((long)length((V1063)));
	V1065= (*(LnkLI292))((V1057));
	base[7]= (V1054);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	V1066= vs_base[0];
	if((V1066)==Cnil){
	V1067= Cnil;
	goto T1956;}
	V1067= ((V1066))->v.v_self[9];
	goto T1956;
T1956:;
	if((V1066)==Cnil){
	V1068= Cnil;
	goto T1957;}
	V1068= ((V1066))->v.v_self[10];
	goto T1957;
T1957:;
	if(((V1066))!=Cnil){
	goto T1960;}
	V1069= (VFUN_NARGS=2,(*(LnkLI263))((V1064),(V1054)));
	goto T1958;
	goto T1960;
T1960:;
	if(!(equal((V1063),(V1067)))){
	goto T1963;}
	{register object V1073;
	object V1074;
	register object V1075;
	object V1076;
	V1073= (V1068);
	V1074= Cnil;
	V1075= (V1065);
	V1076= Cnil;
	goto T1972;
T1972:;
	{object V1077;
	if(!(((V1073))==Cnil)){
	goto T1978;}
	goto T1966;
	goto T1978;
T1978:;
	V1077= CMPcar((V1073));
	V1073= CMPcdr((V1073));
	V1074= (V1077);}
	{object V1078;
	if(!(((V1075))==Cnil)){
	goto T1986;}
	goto T1966;
	goto T1986;
T1986:;
	V1078= CMPcar((V1075));
	V1075= CMPcdr((V1075));
	V1076= (V1078);}
	if((CMPcar((V1074)))==(CMPcar((V1076)))){
	goto T1973;}
	goto T1963;
	goto T1973;
T1973:;
	goto T1972;}
	goto T1966;
T1966:;
	V1069= (V1066);
	goto T1958;
	goto T1963;
T1963:;
	base[7]= (V1054);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk294)(Lclptr294);
	vs_top=sup;
	base[7]= (V1054);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	V1069= vs_base[0];
	goto T1958;
T1958:;
	if(!((VV[102])->s.s_gfdef!=OBJNULL)){
	goto T2000;}
	base[7]= (V1055);
	base[8]= V1054;
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk102)(Lclptr102);
	vs_top=sup;
	goto T1998;
	goto T2000;
T2000:;
	(void)((*(LnkLI283))(VV[102],VV[103]));
	goto T1998;
T1998:;
	(void)(((V1069))->v.v_self[9]= ((V1063)));
	(void)(((V1069))->v.v_self[10]= ((V1065)));
	(void)(((V1069))->v.v_self[12]= ((V1064)));
	if(!((VV[104])->s.s_gfdef!=OBJNULL)){
	goto T2008;}
	base[7]= (V1069);
	base[8]= V1054;
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;
	goto T1996;
	goto T2008;
T2008:;
	(void)((*(LnkLI283))(VV[104],VV[105]));
	goto T1996;
T1996:;
	if(((V1066))==((V1069))){
	goto T2013;}
	{object V1080 = (*(LnkLI264))((V1054));
	VMR62(V1080)}
	goto T2013;
T2013:;
	{object V1081 = Cnil;
	VMR62(V1081)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-CLASS-SLOTS	*/

static object LI69(V1083)

object V1083;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	{register object V1084;
	register object V1085;
	V1084= Cnil;
	V1085= Cnil;
	{register object V1086;
	register object V1087;
	V1086= (V1083);
	V1087= CMPcar((V1086));
	goto T2021;
T2021:;
	if(!(((V1086))==Cnil)){
	goto T2022;}
	goto T2017;
	goto T2022;
T2022:;
	{register object V1088;
	base[1]= (V1087);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V1090= vs_base[0];
	base[2]= (V1087);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk234)(Lclptr234);
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk31)(Lclptr31);
	vs_top=sup;
	V1091= vs_base[0];
	{register object x= V1090,V1089= V1091;
	while(V1089!=Cnil)
	if(eql(x,V1089->c.c_car->c.c_car) &&V1089->c.c_car != Cnil){
	V1088= (V1089->c.c_car);
	goto T2027;
	}else V1089=V1089->c.c_cdr;
	V1088= Cnil;}
	goto T2027;
T2027:;
	if(((V1084))!=Cnil){
	goto T2034;}
	V1085= make_cons((V1088),Cnil);
	V1084= (V1085);
	goto T2026;
	goto T2034;
T2034:;
	V1093= make_cons((V1088),Cnil);
	((V1085))->c.c_cdr = /* INLINE-ARGS */V1093;
	V1092= (V1085);
	V1085= CMPcdr(V1092);}
	goto T2026;
T2026:;
	V1086= CMPcdr((V1086));
	V1087= CMPcar((V1086));
	goto T2021;}
	goto T2017;
T2017:;
	{object V1094 = (V1084);
	VMR63(V1094)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-LAYOUT	*/

static object LI70(V1097,V1098)

object V1097;object V1098;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	{object V1099;
	register object V1100;
	V1099= Cnil;
	V1100= Cnil;
	{register object V1101;
	register object V1102;
	V1101= (V1098);
	V1102= CMPcar((V1101));
	goto T2052;
T2052:;
	if(!(((V1101))==Cnil)){
	goto T2053;}
	goto T2048;
	goto T2053;
T2053:;
	base[3]= (V1102);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk234)(Lclptr234);
	vs_top=sup;
	V1103= vs_base[0];
	if(!((V1103)==(VV[19]))){
	goto T2057;}
	{register object V1104;
	base[3]= (V1102);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V1104= vs_base[0];
	if(((V1099))!=Cnil){
	goto T2065;}
	V1100= make_cons((V1104),Cnil);
	V1099= (V1100);
	goto T2057;
	goto T2065;
T2065:;
	V1106= make_cons((V1104),Cnil);
	((V1100))->c.c_cdr = /* INLINE-ARGS */V1106;
	V1105= (V1100);
	V1100= CMPcdr(V1105);}
	goto T2057;
T2057:;
	V1101= CMPcdr((V1101));
	V1102= CMPcar((V1101));
	goto T2052;}
	goto T2048;
T2048:;
	base[0]= (V1099);}
	base[1]= Cnil;
	base[3]= CMPcar((V1097));
	base[4]= VV[103];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2079;}
	base[2]= (V1097);
	goto T2077;
	goto T2079;
T2079:;
	base[2]= CMPcdr((V1097));
	goto T2077;
T2077:;
	vs_top=(vs_base=base+2)+1;
	L71(base);
	vs_top=sup;
	V1107= append(base[0],base[1]);
	{object V1108 = reverse(/* INLINE-ARGS */V1107);
	VMR64(V1108)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-GFS-OF-CLASS	*/

static object LI74(V1110)

object V1110;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	base[0]=MMcons((V1110),Cnil);
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk274)(Lclptr274);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2084;}
	{object V1111;
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk99)(Lclptr99);
	vs_top=sup;
	V1111= vs_base[0];{object V1112;
	{register object x= (VV[106]->s.s_dbind),V1113= (V1111);
	while(V1113!=Cnil)
	if(eql(x,V1113->c.c_car)){
	V1112= V1113;
	goto T2092;
	}else V1113=V1113->c.c_cdr;
	V1112= Cnil;}
	goto T2092;
T2092:;
	if(V1112==Cnil)goto T2091;
	if((V1112)==Cnil){
	goto T2084;}
	goto T2088;
	goto T2091;
T2091:;}
	{register object x= (VV[107]->s.s_dbind),V1114= (V1111);
	while(V1114!=Cnil)
	if(eql(x,V1114->c.c_car)){
	goto T2088;
	}else V1114=V1114->c.c_cdr;
	goto T2084;}}
	goto T2088;
T2088:;
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
	{object V1115 = vs_base[0];
	VMR65(V1115)}
	goto T2084;
T2084:;
	{object V1116 = Cnil;
	VMR65(V1116)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-INITS	*/

static object LI76(V1119,V1120)

object V1119;object V1120;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	{object V1123 = (*(LnkLI194))((V1120),V1119,VV[29]);
	VMR66(V1123)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-DEFAULT-INITARGS (SLOT-CLASS))	*/

static object LI79(V1127,V1128,V1129)

object V1127;object V1128;object V1129;
{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	base[0]= (V1129);
	{object V1131;
	base[2]= base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk99)(Lclptr99);
	vs_top=sup;
	V1131= vs_base[0];
	base[2]= base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk296)(Lclptr296);
	vs_top=sup;
	base[1]= vs_base[0];
	{object V1132;
	base[2]= (V1131);
	vs_top=(vs_base=base+2)+1;
	L80(base);
	vs_top=sup;
	V1132= vs_base[0];
	base[2]= (V1132);
	base[3]= VV[8];
	base[4]= (VV[9]->s.s_gfdef);
	base[5]= VV[101];
	base[6]= (VV[297]->s.s_gfdef);
	base[7]= VV[108];
	base[8]= Ct;
	vs_top=(vs_base=base+2)+7;
	(void) (*Lnk298)();
	vs_top=sup;
	{object V1133 = vs_base[0];
	VMR67(V1133)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD DIRECT-SLOT-DEFINITION-CLASS (STD-CLASS T))	*/

static object LI81(V1138,V1139,V1140,V1141)

object V1138;object V1139;object V1140;object V1141;
{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	{object V1143 = (VFUN_NARGS=1,(*(LnkLI219))(VV[109]));
	VMR68(V1143)}
	return Cnil;
}
/*	function definition for MAKE-DIRECT-SLOTD	*/

static void L82()
{register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_check;
	{object V1144;
	object V1145;
	check_arg(2);
	V1144=(base[0]);
	V1145=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1146;
	V1146= listA(3,VV[65],(V1144),(V1145));
	base[2]=VV[223]->s.s_gfdef;
	base[4]= (V1144);
	base[5]= (V1146);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	base[3]= vs_base[0];
	{object V1147;
	V1147= (V1146);
	 vs_top=base+4;
	 while(V1147!=Cnil)
	 {vs_push((V1147)->c.c_car);V1147=(V1147)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk223)(Lclptr223);
	return;}
	}
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOTS (STD-CLASS))	*/

static object LI83(V1151,V1152,V1153)

object V1151;object V1152;object V1153;
{	 VMB70 VMS70 VMV70
	goto TTL;
TTL:;
	{register object V1155;
	V1155= Cnil;
	{object V1156;
	object V1157;
	base[2]= (V1153);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk99)(Lclptr99);
	vs_top=sup;
	V1156= vs_base[0];
	V1157= CMPcar((V1156));
	goto T2132;
T2132:;
	if(!(((V1156))==Cnil)){
	goto T2133;}
	goto T2127;
	goto T2133;
T2133:;
	{object V1158;
	base[2]= (V1157);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk251)(Lclptr251);
	vs_top=sup;
	V1158= vs_base[0];
	{register object V1159;
	register object V1160;
	V1159= (V1158);
	V1160= CMPcar((V1159));
	goto T2143;
T2143:;
	if(!(((V1159))==Cnil)){
	goto T2144;}
	goto T2137;
	goto T2144;
T2144:;
	{register object V1161;
	register object V1162;
	base[5]= (V1160);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V1161= vs_base[0];
	{register object x= (V1161),V1163= (V1155);
	while(V1163!=Cnil)
	if(EQ(x,V1163->c.c_car->c.c_car) &&V1163->c.c_car != Cnil){
	V1162= (V1163->c.c_car);
	goto T2151;
	}else V1163=V1163->c.c_cdr;
	V1162= Cnil;}
	goto T2151;
T2151:;
	if(((V1162))==Cnil){
	goto T2153;}
	{register object V1165;
	register object V1166;
	V1165= (V1162);
	V1166= make_cons(V1160,CMPcdr((V1165)));
	((V1165))->c.c_cdr = (V1166);
	goto T2148;}
	goto T2153;
T2153:;
	{object V1167;
	V1167= list(2,(V1161),(V1160));
	V1155= make_cons((V1167),(V1155));}}
	goto T2148;
T2148:;
	V1159= CMPcdr((V1159));
	V1160= CMPcar((V1159));
	goto T2143;}}
	goto T2137;
T2137:;
	V1156= CMPcdr((V1156));
	V1157= CMPcar((V1156));
	goto T2132;}
	goto T2127;
T2127:;
	{object V1168;
	object V1169= (V1155);
	if(V1169==Cnil){
	{object V1170 = Cnil;
	VMR70(V1170)}}
	base[0]=V1168=MMcons(Cnil,Cnil);
	goto T2170;
T2170:;
	base[1]= (V1153);
	base[2]= nreverse(CMPcdr((V1169->c.c_car)));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	(V1168->c.c_car)= vs_base[0];
	if((V1169=MMcdr(V1169))==Cnil){
	{object V1172 = base[0];
	VMR70(V1172)}}
	V1168=MMcdr(V1168)=MMcons(Cnil,Cnil);
	goto T2170;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOTS :AROUND (STD-CLASS))	*/

static object LI84(V1176,V1177,V1178)

object V1176;object V1177;object V1178;
{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	{object V1180;
	object V1181;
	object V1182;
	object V1183;
	if(((V1177))==Cnil){
	goto T2179;}
	base[0]= (V1177);
	base[1]= VV[110];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk301)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2183;}
	V1180= (
	V1184 = STREF(object,(V1177),0),
	(type_of(V1184) == t_sfun ?(*((V1184)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V1184)==t_vfun) ?
	(*((V1184)->sfn.sfn_self)):
	(fcall.fun=(V1184),fcalln))(STREF(object,(V1177),4),STREF(object,(V1177),8),(V1178)));
	goto T2177;
	goto T2183;
T2183:;
	if(!(type_of((V1177))==t_fixnum)){
	goto T2188;}
	{object V1185;
	object V1186;
	if(type_of(V1178)==t_structure){
	goto T2194;}
	goto T2192;
	goto T2194;
T2194:;
	if(!(((V1178)->str.str_def)==(VV[111]))){
	goto T2192;}
	V1185= STREF(object,(V1178),4);
	goto T2190;
	goto T2192;
T2192:;{object V1188;
	V1188= (VV[2]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1178);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1189= vs_base[0];
	if(!((V1188)==(CMPcar(V1189)))){
	goto T2197;}}
	V1185= CMPcar(((V1178))->cc.cc_turbo[12]);
	goto T2190;
	goto T2197;
T2197:;
	V1185= Cnil;
	goto T2190;
T2190:;
	if(((V1185))==Cnil){
	goto T2204;}
	V1186= ((V1185))->v.v_self[fix((V1177))];
	goto T2202;
	goto T2204;
T2204:;
	V1186= Cnil;
	goto T2202;
T2202:;
	if(!(((V1186))==(VV[3]))){
	goto T2207;}
	base[2]= (V1178);
	base[3]= (V1177);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk302)();
	vs_top=sup;
	V1180= vs_base[0];
	goto T2177;
	goto T2207;
T2207:;
	V1180= (V1186);
	goto T2177;}
	goto T2188;
T2188:;
	base[0]= V1177;
	base[1]= VV[112];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk301)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2212;}
	{object V1191;
	object V1192;
	object V1193;
	V1191= STREF(object,(V1177),0);
	V1192= make_cons((V1178),Cnil);
	V1193= STREF(object,(V1177),4);
	if(((V1193))==Cnil){
	goto T2220;}
	if((CMPcdr((V1193)))!=Cnil){
	goto T2220;}
	V1180= (
	(type_of((V1191)) == t_sfun ?(*(((V1191))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V1191))==t_vfun) ?
	(*(((V1191))->sfn.sfn_self)):
	(fcall.fun=((V1191)),fcalln))((V1192),CMPcar((V1193))));
	goto T2177;
	goto T2220;
T2220:;
	base[0]= (V1191);
	base[1]= (V1192);
	{object V1194;
	V1194= (V1193);
	 vs_top=base+2;
	 while(V1194!=Cnil)
	 {vs_push((V1194)->c.c_car);V1194=(V1194)->c.c_cdr;}
	vs_base=base+1;}
	{object _funobj = base[0];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1180= vs_base[0];
	goto T2177;}
	goto T2212;
T2212:;
	base[0]= V1177;
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2228;}
	V1180= (
	(type_of((V1177)) == t_sfun ?(*(((V1177))->sfn.sfn_self)):
	(fcall.argd=1,type_of((V1177))==t_vfun) ?
	(*(((V1177))->sfn.sfn_self)):
	(fcall.fun=((V1177)),fcalln))((V1178)));
	goto T2177;
	goto T2228;
T2228:;
	base[1]= VV[113];
	base[2]= V1177;
	base[3]= VV[114];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk303)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1180= vs_base[0];
	goto T2177;
	goto T2179;
T2179:;
	base[0]= VV[115];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1180= vs_base[0];
	goto T2177;
T2177:;
	base[0]= (V1178);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk99)(Lclptr99);
	vs_top=sup;
	V1181= vs_base[0];
	V1182= Cnil;
	V1183= Cnil;
	{register object V1195;
	register object V1196;
	V1195= (V1180);
	V1196= CMPcar((V1195));
	goto T2242;
T2242:;
	if(!(((V1195))==Cnil)){
	goto T2243;}
	goto T2238;
	goto T2243;
T2243:;
	{object V1197;
	base[1]= (V1196);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk234)(Lclptr234);
	vs_top=sup;
	V1197= vs_base[0];
	if(!(((V1197))==(VV[19]))){
	goto T2251;}
	V1182= make_cons(V1196,(V1182));
	goto T2247;
	goto T2251;
T2251:;
	base[1]= (V1197);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk288)(Lclptr288);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2247;}
	V1183= make_cons(V1196,(V1183));}
	goto T2247;
T2247:;
	V1195= CMPcdr((V1195));
	V1196= CMPcar((V1195));
	goto T2242;}
	goto T2238;
T2238:;
	{object V1200;
	V1200= (*(LnkLI304))((V1181),(V1182));
	{register object V1201;
	register object V1202;
	V1201= (V1182);
	V1202= CMPcar((V1201));
	goto T2268;
T2268:;
	if(!(((V1201))==Cnil)){
	goto T2269;}
	goto T2263;
	goto T2269;
T2269:;
	base[3]= (V1202);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V1200);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk305)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= V1202;
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk306)(Lclptr306);
	vs_top=sup;
	V1201= CMPcdr((V1201));
	V1202= CMPcar((V1201));
	goto T2268;}}
	goto T2263;
T2263:;
	{register object V1204;
	register object V1205;
	V1204= (V1183);
	V1205= CMPcar((V1204));
	goto T2288;
T2288:;
	if(!(((V1204))==Cnil)){
	goto T2289;}
	goto T2284;
	goto T2289;
T2289:;
	base[2]= (V1205);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V1208= vs_base[0];
	base[3]= (V1205);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk234)(Lclptr234);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk31)(Lclptr31);
	vs_top=sup;
	V1209= vs_base[0];
	{register object x= V1208,V1207= V1209;
	while(V1207!=Cnil)
	if(eql(x,V1207->c.c_car->c.c_car) &&V1207->c.c_car != Cnil){
	base[1]= (V1207->c.c_car);
	goto T2294;
	}else V1207=V1207->c.c_cdr;
	base[1]= Cnil;}
	goto T2294;
T2294:;
	base[2]= V1205;
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk306)(Lclptr306);
	vs_top=sup;
	V1204= CMPcdr((V1204));
	V1205= CMPcar((V1204));
	goto T2288;}
	goto T2284;
T2284:;
	base[0]=VV[307]->s.s_gfdef;
	{
	object V1210= (V1180);
	if(V1210==Cnil){
	goto T2306;}
	goto T2307;
T2307:;
	base[1]= (V1210->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk307)(Lclptr307);
	vs_top=sup;
	if((V1210=MMcdr(V1210))==Cnil){
	goto T2306;}
	goto T2307;}
	goto T2306;
T2306:;
	{object V1211 = (V1180);
	VMR71(V1211)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOTS (STRUCTURE-CLASS))	*/

static object LI85(V1215,V1216,V1217)

object V1215;object V1216;register object V1217;
{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V1219;
	object V1220;
	V1219= CMPcar((V1215));
	V1220= CMPcdr((V1215));
	{object V1221;
	if(type_of(V1217)==t_structure){
	goto T2320;}
	goto T2318;
	goto T2320;
T2320:;
	if(!(((V1217)->str.str_def)==(VV[116]))){
	goto T2318;}
	V1221= STREF(object,(V1217),4);
	goto T2316;
	goto T2318;
T2318:;{object V1223;
	V1223= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1217);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1224= vs_base[0];
	if(!((V1223)==(CMPcar(V1224)))){
	goto T2323;}}
	V1221= CMPcar(((V1217))->cc.cc_turbo[12]);
	goto T2316;
	goto T2323;
T2323:;
	V1221= Cnil;
	goto T2316;
T2316:;
	{register object V1228;
	V1228= ((V1219))->v.v_self[1];
	if(!(type_of(V1228)==t_fixnum)){
	goto T2335;}
	V1228= ((V1221))->v.v_self[fix((V1228))];
	goto T2333;
	goto T2335;
T2335:;
	V1228= VV[3];
	goto T2333;
T2333:;
	if(!(((V1228))==(VV[3]))){
	goto T2338;}
	base[1]= (V1217);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	V1227= vs_base[0];
	goto T2330;
	goto T2338;
T2338:;
	V1227= (V1228);}
	goto T2330;
T2330:;
	V1230= reverse(V1227);
	{object V1225;
	object V1226= /* INLINE-ARGS */V1230;
	if(V1226==Cnil){
	{object V1231 = Cnil;
	VMR72(V1231)}}
	base[0]=V1225=MMcons(Cnil,Cnil);
	goto T2329;
T2329:;
	base[2]= (V1226->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk251)(Lclptr251);
	vs_top=sup;
	V1235= vs_base[0];
	{object V1233;
	object V1234= V1235;
	if(V1234==Cnil){
	(V1225->c.c_cdr)= Cnil;
	goto T2341;}
	base[1]=V1233=MMcons(Cnil,Cnil);
	goto T2342;
T2342:;
	base[2]= (V1217);
	base[3]= make_cons((V1234->c.c_car),Cnil);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	(V1233->c.c_car)= vs_base[0];
	if((V1234=MMcdr(V1234))==Cnil){
	(V1225->c.c_cdr)= base[1];
	goto T2341;}
	V1233=MMcdr(V1233)=MMcons(Cnil,Cnil);
	goto T2342;}
	goto T2341;
T2341:;
	while(MMcdr(V1225)!=Cnil)V1225=MMcdr(V1225);
	if((V1226=MMcdr(V1226))==Cnil){
	base[0]=base[0]->c.c_cdr;
	{object V1237 = base[0];
	VMR72(V1237)}}
	goto T2329;}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOTS :AROUND (STRUCTURE-CLASS))	*/

static object LI86(V1241,V1242,V1243)

object V1241;register object V1242;register object V1243;
{	 VMB73 VMS73 VMV73
	goto TTL;
TTL:;
	{object V1245;
	if(((V1242))==Cnil){
	goto T2353;}
	base[0]= (V1242);
	base[1]= VV[110];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk301)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2357;}
	V1245= (
	V1246 = STREF(object,(V1242),0),
	(type_of(V1246) == t_sfun ?(*((V1246)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V1246)==t_vfun) ?
	(*((V1246)->sfn.sfn_self)):
	(fcall.fun=(V1246),fcalln))(STREF(object,(V1242),4),STREF(object,(V1242),8),(V1243)));
	goto T2351;
	goto T2357;
T2357:;
	if(!(type_of((V1242))==t_fixnum)){
	goto T2362;}
	{object V1247;
	object V1248;
	if(type_of(V1243)==t_structure){
	goto T2368;}
	goto T2366;
	goto T2368;
T2368:;
	if(!(((V1243)->str.str_def)==(VV[117]))){
	goto T2366;}
	V1247= STREF(object,(V1243),4);
	goto T2364;
	goto T2366;
T2366:;{object V1250;
	V1250= (VV[2]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1243);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1251= vs_base[0];
	if(!((V1250)==(CMPcar(V1251)))){
	goto T2371;}}
	V1247= CMPcar(((V1243))->cc.cc_turbo[12]);
	goto T2364;
	goto T2371;
T2371:;
	V1247= Cnil;
	goto T2364;
T2364:;
	if(((V1247))==Cnil){
	goto T2378;}
	V1248= ((V1247))->v.v_self[fix((V1242))];
	goto T2376;
	goto T2378;
T2378:;
	V1248= Cnil;
	goto T2376;
T2376:;
	if(!(((V1248))==(VV[3]))){
	goto T2381;}
	base[2]= (V1243);
	base[3]= (V1242);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk302)();
	vs_top=sup;
	V1245= vs_base[0];
	goto T2351;
	goto T2381;
T2381:;
	V1245= (V1248);
	goto T2351;}
	goto T2362;
T2362:;
	{register object V1252;
	V1252= (V1242);
	base[0]= (V1252);
	base[1]= VV[112];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk301)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2386;}
	{object V1253;
	object V1254;
	register object V1255;
	V1253= STREF(object,(V1242),0);
	V1254= make_cons((V1243),Cnil);
	V1255= STREF(object,(V1242),4);
	if(((V1255))==Cnil){
	goto T2394;}
	if((CMPcdr((V1255)))!=Cnil){
	goto T2394;}
	V1245= (
	(type_of((V1253)) == t_sfun ?(*(((V1253))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V1253))==t_vfun) ?
	(*(((V1253))->sfn.sfn_self)):
	(fcall.fun=((V1253)),fcalln))((V1254),CMPcar((V1255))));
	goto T2351;
	goto T2394;
T2394:;
	base[0]= (V1253);
	base[1]= (V1254);
	{object V1256;
	V1256= (V1255);
	 vs_top=base+2;
	 while(V1256!=Cnil)
	 {vs_push((V1256)->c.c_car);V1256=(V1256)->c.c_cdr;}
	vs_base=base+1;}
	{object _funobj = base[0];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1245= vs_base[0];
	goto T2351;}
	goto T2386;
T2386:;
	base[0]= (V1252);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2402;}
	V1245= (
	(type_of((V1242)) == t_sfun ?(*(((V1242))->sfn.sfn_self)):
	(fcall.argd=1,type_of((V1242))==t_vfun) ?
	(*(((V1242))->sfn.sfn_self)):
	(fcall.fun=((V1242)),fcalln))((V1243)));
	goto T2351;
	goto T2402;
T2402:;
	base[1]= VV[113];
	base[2]= (V1252);
	base[3]= VV[118];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk303)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1245= vs_base[0];
	goto T2351;}
	goto T2353;
T2353:;
	base[0]= VV[115];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1245= vs_base[0];
	goto T2351;
T2351:;
	base[0]=VV[307]->s.s_gfdef;
	{
	object V1257= (V1245);
	if(V1257==Cnil){
	goto T2410;}
	goto T2411;
T2411:;
	base[1]= (V1257->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk307)(Lclptr307);
	vs_top=sup;
	if((V1257=MMcdr(V1257))==Cnil){
	goto T2410;}
	goto T2411;}
	goto T2410;
T2410:;
	{object V1258 = (V1245);
	VMR73(V1258)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD COMPUTE-EFFECTIVE-SLOT-DEFINITION (SLOT-CLASS T))	*/

static void L87()
{register object *base=vs_base;
	register object *sup=base+VM74; VC74
	vs_check;
	{object V1259;
	object V1260;
	object V1261;
	object V1262;
	check_arg(4);
	V1259=(base[0]);
	V1260=(base[1]);
	V1261=(base[2]);
	V1262=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1264;
	object V1265;
	base[6]= (V1261);
	base[7]= (V1262);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk309)(Lclptr309);
	vs_top=sup;
	V1264= vs_base[0];
	base[6]= (V1261);
	base[7]= (V1264);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	V1265= vs_base[0];
	base[6]=VV[223]->s.s_gfdef;
	base[7]= (V1265);
	{object V1266;
	V1266= (V1264);
	 vs_top=base+8;
	 while(V1266!=Cnil)
	 {vs_push((V1266)->c.c_car);V1266=(V1266)->c.c_cdr;}
	vs_base=base+7;}
	(void) (*Lnk223)(Lclptr223);
	return;}
	}
}
/*	local entry for function (FAST-METHOD EFFECTIVE-SLOT-DEFINITION-CLASS (STD-CLASS T))	*/

static object LI88(V1271,V1272,V1273,V1274)

object V1271;object V1272;object V1273;object V1274;
{	 VMB75 VMS75 VMV75
	goto TTL;
TTL:;
	{object V1276 = (VFUN_NARGS=1,(*(LnkLI219))(VV[119]));
	VMR75(V1276)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD EFFECTIVE-SLOT-DEFINITION-CLASS (STRUCTURE-CLASS T))	*/

static object LI89(V1281,V1282,V1283,V1284)

object V1281;object V1282;object V1283;object V1284;
{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	{object V1286 = (VFUN_NARGS=1,(*(LnkLI219))(VV[120]));
	VMR76(V1286)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-EFFECTIVE-SLOT-DEFINITION-INITARGS (SLOT-CLASS T))	*/

static object LI90(V1291,V1292,V1293,V1294)

object V1291;object V1292;object V1293;object V1294;
{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V1296;
	object V1297;
	object V1298;
	register object V1299;
	object V1300;
	register object V1301;
	register object V1302;
	register object V1303;
	register object V1304;
	V1296= Cnil;
	V1297= Cnil;
	V1298= Cnil;
	V1299= Cnil;
	V1300= Cnil;
	V1301= Ct;
	V1302= Cnil;
	V1303= Cnil;
	V1304= Cnil;
	{register object V1305;
	register object V1306;
	V1305= (V1294);
	V1306= CMPcar((V1305));
	goto T2447;
T2447:;
	if(!(((V1305))==Cnil)){
	goto T2448;}
	goto T2443;
	goto T2448;
T2448:;
	if(((V1306))==Cnil){
	goto T2452;}
	if(((V1302))!=Cnil){
	goto T2455;}
	base[1]= (V1306);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V1296= vs_base[0];
	V1302= Ct;
	goto T2455;
T2455:;
	if(((V1303))!=Cnil){
	goto T2462;}
	base[1]= (V1306);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk235)(Lclptr235);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2462;}
	base[1]= (V1306);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk311)(Lclptr311);
	vs_top=sup;
	V1298= vs_base[0];
	base[1]= (V1306);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk235)(Lclptr235);
	vs_top=sup;
	V1297= vs_base[0];
	V1303= Ct;
	goto T2462;
T2462:;
	if(((V1304))!=Cnil){
	goto T2475;}
	base[1]= (V1306);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk234)(Lclptr234);
	vs_top=sup;
	V1300= vs_base[0];
	V1304= Ct;
	goto T2475;
T2475:;
	base[1]= (V1306);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk312)(Lclptr312);
	vs_top=sup;
	V1307= vs_base[0];
	V1308 = (V1299);
	V1299= append(V1307,V1308);
	{register object V1309;
	base[1]= (V1306);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk313)(Lclptr313);
	vs_top=sup;
	V1309= vs_base[0];
	if(!(((V1301))==(Ct))){
	goto T2490;}
	V1301= (V1309);
	goto T2488;
	goto T2490;
T2490:;
	base[1]= (V1301);
	base[2]= (V1309);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk314)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2493;}
	goto T2488;
	goto T2493;
T2493:;
	V1301= list(3,VV[121],(V1301),(V1309));
	goto T2488;
T2488:;}
	goto T2452;
T2452:;
	V1305= CMPcdr((V1305));
	V1306= CMPcar((V1305));
	goto T2447;}
	goto T2443;
T2443:;
	base[0]= VV[50];
	base[1]= (V1296);
	base[2]= VV[122];
	base[3]= (V1298);
	base[4]= VV[123];
	base[5]= (V1297);
	base[6]= VV[124];
	base[7]= (V1299);
	base[8]= VV[125];
	base[9]= (V1300);
	base[10]= VV[126];
	base[11]= (V1301);
	base[12]= VV[65];
	base[13]= (V1293);
	vs_top=(vs_base=base+0)+14;
	Llist();
	vs_top=sup;
	{object V1310 = vs_base[0];
	VMR77(V1310)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-EFFECTIVE-SLOT-DEFINITION-INITARGS :AROUND (STRUCTURE-CLASS T))	*/

static object LI91(V1315,V1316,V1317,V1318)

object V1315;register object V1316;register object V1317;register object V1318;
{	 VMB78 VMS78 VMV78
	goto TTL;
TTL:;
	{object V1320;
	V1320= CMPcar((V1318));
	base[0]= (V1320);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk255)(Lclptr255);
	vs_top=sup;
	V1321= vs_base[0];
	base[0]= (V1320);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V1322= vs_base[0];
	base[0]= (V1320);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk316)(Lclptr316);
	vs_top=sup;
	V1323= vs_base[0];
	if(((V1316))==Cnil){
	goto T2528;}
	base[0]= (V1316);
	base[1]= VV[110];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk301)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2532;}
	base[0]= STREF(object,(V1316),0);
	base[1]= STREF(object,(V1316),4);
	base[2]= STREF(object,(V1316),8);
	base[3]= (V1317);
	base[4]= (V1318);
	vs_top=(vs_base=base+1)+4;
	{object _funobj = base[0];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1324= vs_base[0];
	goto T2526;
	goto T2532;
T2532:;
	if(!(type_of((V1316))==t_fixnum)){
	goto T2542;}
	{object V1326;
	if(type_of(V1317)==t_structure){
	goto T2548;}
	goto T2546;
	goto T2548;
T2548:;
	if(!(((V1317)->str.str_def)==(VV[129]))){
	goto T2546;}
	V1326= STREF(object,(V1317),4);
	goto T2544;
	goto T2546;
T2546:;{object V1328;
	V1328= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1317);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1329= vs_base[0];
	if(!((V1328)==(CMPcar(V1329)))){
	goto T2551;}}
	V1326= CMPcar(((V1317))->cc.cc_turbo[12]);
	goto T2544;
	goto T2551;
T2551:;
	V1326= Cnil;
	goto T2544;
T2544:;
	if(((V1326))==Cnil){
	goto T2557;}
	V1324= ((V1326))->v.v_self[fix((V1316))]= (V1317);
	goto T2526;
	goto T2557;
T2557:;
	V1324= Cnil;
	goto T2526;}
	goto T2542;
T2542:;
	{register object V1330;
	V1330= (V1316);
	base[0]= (V1330);
	base[1]= VV[112];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk301)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2560;}
	{object V1331;
	object V1332;
	register object V1333;
	V1331= STREF(object,(V1316),0);
	V1332= list(2,(V1317),(V1318));
	V1333= STREF(object,(V1316),4);
	if(((V1333))==Cnil){
	goto T2568;}
	if((CMPcdr((V1333)))!=Cnil){
	goto T2568;}
	base[0]= (V1332);
	base[1]= CMPcar((V1333));
	vs_top=(vs_base=base+0)+2;
	{object _funobj = (V1331);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1324= vs_base[0];
	goto T2526;
	goto T2568;
T2568:;
	base[0]= (V1331);
	base[1]= (V1332);
	{object V1334;
	V1334= (V1333);
	 vs_top=base+2;
	 while(V1334!=Cnil)
	 {vs_push((V1334)->c.c_car);V1334=(V1334)->c.c_cdr;}
	vs_base=base+1;}
	{object _funobj = base[0];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1324= vs_base[0];
	goto T2526;}
	goto T2560;
T2560:;
	base[0]= (V1330);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2578;}
	base[0]= (V1317);
	base[1]= (V1318);
	vs_top=(vs_base=base+0)+2;
	{object _funobj = (V1316);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1324= vs_base[0];
	goto T2526;
	goto T2578;
T2578:;
	base[1]= VV[113];
	base[2]= (V1330);
	base[3]= VV[130];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk303)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1324= vs_base[0];
	goto T2526;}
	goto T2528;
T2528:;
	base[0]= VV[115];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1324= vs_base[0];
	goto T2526;
T2526:;
	{object V1335 = listA(7,VV[70],V1321,VV[127],V1322,VV[128],V1323,V1324);
	VMR78(V1335)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD READER-METHOD-CLASS (SLOT-CLASS T))	*/

static object LI92(V1341,V1342,V1343,V1344,V1345)

object V1341;object V1342;object V1343;object V1344;object V1345;
{	 VMB79 VMS79 VMV79
	goto TTL;
TTL:;
	{object V1348 = (VFUN_NARGS=1,(*(LnkLI219))(VV[131]));
	VMR79(V1348)}
	return Cnil;
}
/*	function definition for (FAST-METHOD ADD-READER-METHOD (SLOT-CLASS T T))	*/

static void L93()
{register object *base=vs_base;
	register object *sup=base+VM80; VC80
	vs_check;
	{object V1349;
	object V1350;
	register object V1351;
	object V1352;
	object V1353;
	check_arg(5);
	V1349=(base[0]);
	V1350=(base[1]);
	V1351=(base[2]);
	V1352=(base[3]);
	V1353=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]=(VV[317]->s.s_gfdef);
	base[6]= (V1352);
	base[8]=(VV[318]->s.s_gfdef);
	base[9]= VV[131];
	base[10]= Cnil;{object V1356;
	base[12]= (V1351);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V1356= vs_base[0];
	if(V1356==Cnil)goto T2600;
	V1355= V1356;
	goto T2599;
	goto T2600;
T2600:;}
	V1355= VV[132];
	goto T2599;
T2599:;
	base[11]= make_cons(V1355,Cnil);
	base[12]= make_cons((V1351),Cnil);
	base[14]= (V1351);
	base[15]= (V1353);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk319)(Lclptr319);
	vs_top=sup;
	base[13]= vs_base[0];
	base[14]= VV[133];
	base[15]= (V1353);
	base[7]= simple_lispcall(base+8,7);
	lispcall(base+5,2);
	return;
	}
}
/*	local entry for function (FAST-METHOD WRITER-METHOD-CLASS (SLOT-CLASS T))	*/

static object LI94(V1362,V1363,V1364,V1365,V1366)

object V1362;object V1363;object V1364;object V1365;object V1366;
{	 VMB81 VMS81 VMV81
	goto TTL;
TTL:;
	{object V1369 = (VFUN_NARGS=1,(*(LnkLI219))(VV[134]));
	VMR81(V1369)}
	return Cnil;
}
/*	function definition for (FAST-METHOD ADD-WRITER-METHOD (SLOT-CLASS T T))	*/

static void L95()
{register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	{object V1370;
	object V1371;
	register object V1372;
	object V1373;
	object V1374;
	check_arg(5);
	V1370=(base[0]);
	V1371=(base[1]);
	V1372=(base[2]);
	V1373=(base[3]);
	V1374=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]=(VV[317]->s.s_gfdef);
	base[6]= (V1373);
	base[8]=(VV[318]->s.s_gfdef);
	base[9]= VV[134];
	base[10]= Cnil;{object V1377;
	base[12]= (V1372);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V1377= vs_base[0];
	if(V1377==Cnil)goto T2621;
	V1376= V1377;
	goto T2620;
	goto T2621;
T2621:;}
	V1376= VV[132];
	goto T2620;
T2620:;
	base[11]= list(2,VV[135],V1376);
	base[12]= list(2,(VV[136]->s.s_dbind),(V1372));
	base[14]= (V1372);
	base[15]= (V1374);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk320)(Lclptr320);
	vs_top=sup;
	base[13]= vs_base[0];
	base[14]= VV[137];
	base[15]= (V1374);
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
	{object V1378;
	object V1379;
	register object V1380;
	object V1381;
	object V1382;
	check_arg(5);
	V1378=(base[0]);
	V1379=(base[1]);
	V1380=(base[2]);
	V1381=(base[3]);
	V1382=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]=(VV[317]->s.s_gfdef);
	base[6]= (V1381);
	base[8]=(VV[318]->s.s_gfdef);
	base[9]= VV[138];
	base[10]= Cnil;{object V1385;
	base[12]= (V1380);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V1385= vs_base[0];
	if(V1385==Cnil)goto T2639;
	V1384= V1385;
	goto T2638;
	goto T2639;
T2639:;}
	V1384= VV[132];
	goto T2638;
T2638:;
	base[11]= make_cons(V1384,Cnil);
	base[12]= make_cons((V1380),Cnil);
	base[14]= (V1380);
	base[15]= (V1382);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk321)(Lclptr321);
	vs_top=sup;
	base[13]= vs_base[0];
	base[14]= VV[139];
	base[15]= (V1382);
	base[7]= simple_lispcall(base+8,7);
	lispcall(base+5,2);
	return;
	}
}
/*	local entry for function (FAST-METHOD REMOVE-READER-METHOD (SLOT-CLASS T))	*/

static object LI97(V1390,V1391,V1392,V1393)

object V1390;object V1391;object V1392;object V1393;
{	 VMB84 VMS84 VMV84
	goto TTL;
TTL:;
	{object V1395;
	V1396= make_cons((V1392),Cnil);
	V1395= (VFUN_NARGS=4,(*(LnkLI322))((V1393),Cnil,/* INLINE-ARGS */V1396,Cnil));
	if(((V1395))==Cnil){
	goto T2653;}
	base[0]= (V1393);
	base[1]= (V1395);
	{object V1397 = simple_symlispcall(VV[323],base+0,2);
	VMR84(V1397)}
	goto T2653;
T2653:;
	{object V1398 = Cnil;
	VMR84(V1398)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-WRITER-METHOD (SLOT-CLASS T))	*/

static object LI98(V1403,V1404,V1405,V1406)

object V1403;object V1404;object V1405;object V1406;
{	 VMB85 VMS85 VMV85
	goto TTL;
TTL:;
	{object V1408;
	V1409= list(2,(VV[136]->s.s_dbind),(V1405));
	V1408= (VFUN_NARGS=4,(*(LnkLI322))((V1406),Cnil,/* INLINE-ARGS */V1409,Cnil));
	if(((V1408))==Cnil){
	goto T2662;}
	base[0]= (V1406);
	base[1]= (V1408);
	{object V1410 = simple_symlispcall(VV[323],base+0,2);
	VMR85(V1410)}
	goto T2662;
T2662:;
	{object V1411 = Cnil;
	VMR85(V1411)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-BOUNDP-METHOD (SLOT-CLASS T))	*/

static object LI99(V1416,V1417,V1418,V1419)

object V1416;object V1417;object V1418;object V1419;
{	 VMB86 VMS86 VMV86
	goto TTL;
TTL:;
	{object V1421;
	V1422= make_cons((V1418),Cnil);
	V1421= (VFUN_NARGS=4,(*(LnkLI322))((V1419),Cnil,/* INLINE-ARGS */V1422,Cnil));
	if(((V1421))==Cnil){
	goto T2671;}
	base[0]= (V1419);
	base[1]= (V1421);
	{object V1423 = simple_symlispcall(VV[323],base+0,2);
	VMR86(V1423)}
	goto T2671;
T2671:;
	{object V1424 = Cnil;
	VMR86(V1424)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-READER-METHOD-FUNCTION (SLOT-CLASS T))	*/

static object LI100(V1429,V1430,V1431,V1432)

object V1429;object V1430;object V1431;object V1432;
{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	base[0]= (V1431);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V1434= vs_base[0];
	V1435 = (V1432);
	{object V1436 = (*(LnkLI324))(V1434,V1435);
	VMR87(V1436)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-WRITER-METHOD-FUNCTION (SLOT-CLASS T))	*/

static object LI101(V1441,V1442,V1443,V1444)

object V1441;object V1442;object V1443;object V1444;
{	 VMB88 VMS88 VMV88
	goto TTL;
TTL:;
	base[0]= (V1443);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V1446= vs_base[0];
	V1447 = (V1444);
	{object V1448 = (*(LnkLI325))(V1446,V1447);
	VMR88(V1448)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-BOUNDP-METHOD-FUNCTION (SLOT-CLASS T))	*/

static object LI102(V1453,V1454,V1455,V1456)

object V1453;object V1454;object V1455;object V1456;
{	 VMB89 VMS89 VMV89
	goto TTL;
TTL:;
	base[0]= (V1455);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V1458= vs_base[0];
	V1459 = (V1456);
	{object V1460 = (*(LnkLI326))(V1458,V1459);
	VMR89(V1460)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD INFORM-TYPE-SYSTEM-ABOUT-CLASS (STD-CLASS T))	*/

static object LI103(V1465,V1466,V1467,V1468)

object V1465;object V1466;object V1467;object V1468;
{	 VMB90 VMS90 VMV90
	goto TTL;
TTL:;
	{object V1470 = (*(LnkLI327))((V1468));
	VMR90(V1470)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPATIBLE-META-CLASS-CHANGE-P (T T))	*/

static object LI104(V1475,V1476,V1477,V1478)

object V1475;object V1476;object V1477;object V1478;
{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	V1480= (*(LnkLI225))((V1477));
	V1481= (*(LnkLI225))((V1478));
	{object V1482 = ((/* INLINE-ARGS */V1480)==(/* INLINE-ARGS */V1481)?Ct:Cnil);
	VMR91(V1482)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD VALIDATE-SUPERCLASS (CLASS CLASS))	*/

static object LI105(V1487,V1488,V1489,V1490)

object V1487;object V1488;object V1489;object V1490;
{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;
	if(!(((V1490))==((VV[136]->s.s_dbind)))){
	goto T2700;}
	{object V1492 = Ct;
	VMR92(V1492)}
	goto T2700;
T2700:;
	V1493= (*(LnkLI225))((V1489));
	V1494= (*(LnkLI225))((V1490));
	{object V1495 = ((/* INLINE-ARGS */V1493)==(/* INLINE-ARGS */V1494)?Ct:Cnil);
	VMR92(V1495)}
	return Cnil;
}
/*	local entry for function FORCE-CACHE-FLUSHES	*/

static object LI106(V1497)

object V1497;
{	 VMB93 VMS93 VMV93
	goto TTL;
TTL:;
	{register object V1498;
	object V1499;
	base[2]= (V1497);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	V1498= vs_base[0];
	V1499= ((V1498))->v.v_self[8];
	if(!(((V1499))==(Ct))){
	goto T2706;}
	{register object V1500;
	V1500= (VFUN_NARGS=2,(*(LnkLI263))(((V1498))->v.v_self[12],(V1497)));
	(void)(((V1500))->v.v_self[9]= (((V1498))->v.v_self[9]));
	(void)(((V1500))->v.v_self[10]= (((V1498))->v.v_self[10]));
	if(!((VV[104])->s.s_gfdef!=OBJNULL)){
	goto T2713;}
	base[2]= (V1500);
	base[3]= (V1497);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;
	goto T2711;
	goto T2713;
T2713:;
	(void)((*(LnkLI283))(VV[104],VV[105]));
	goto T2711;
T2711:;
	{object V1501 = (*(LnkLI328))((V1498),VV[140],(V1500));
	VMR93(V1501)}}
	goto T2706;
T2706:;
	{object V1502 = Cnil;
	VMR93(V1502)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FLUSH-CACHE-TRAP	*/

static object LI107(V1506,V1507,V1508)

object V1506;object V1507;object V1508;
{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;
	{object V1509 = (*(LnkLI329))((V1508),(V1507));
	VMR94(V1509)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-INSTANCES-OBSOLETE (STD-CLASS))	*/

static object LI108(V1513,V1514,V1515)

object V1513;object V1514;register object V1515;
{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;
	{object V1517;
	object V1518;
	V1517= CMPcar((V1513));
	V1518= CMPcdr((V1513));
	{object V1519;
	if(type_of(V1515)==t_structure){
	goto T2727;}
	goto T2725;
	goto T2727;
T2727:;
	if(!(((V1515)->str.str_def)==(VV[141]))){
	goto T2725;}
	V1519= STREF(object,(V1515),4);
	goto T2723;
	goto T2725;
T2725:;{object V1521;
	V1521= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1515);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1522= vs_base[0];
	if(!((V1521)==(CMPcar(V1522)))){
	goto T2730;}}
	V1519= CMPcar(((V1515))->cc.cc_turbo[12]);
	goto T2723;
	goto T2730;
T2730:;
	V1519= Cnil;
	goto T2723;
T2723:;
	{register object V1523;
	register object V1524;
	base[2]= (V1515);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	V1523= vs_base[0];
	V1524= (VFUN_NARGS=2,(*(LnkLI263))(((V1523))->v.v_self[12],(V1515)));
	(void)(((V1524))->v.v_self[9]= (((V1523))->v.v_self[9]));
	(void)(((V1524))->v.v_self[10]= (((V1523))->v.v_self[10]));
	{object V1526;
	V1526= ((V1517))->v.v_self[1];
	if(!(type_of(V1526)==t_fixnum)){
	goto T2744;}
	(void)(((V1519))->v.v_self[fix((V1526))]= (V1524));
	goto T2741;
	goto T2744;
T2744:;
	base[2]= V1524;
	base[3]= (V1515);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;}
	goto T2741;
T2741:;
	(void)((*(LnkLI328))((V1523),VV[142],(V1524)));
	{object V1528 = (V1515);
	VMR95(V1528)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD MAKE-INSTANCES-OBSOLETE (SYMBOL))	*/

static void L109()
{register object *base=vs_base;
	register object *sup=base+VM96; VC96
	vs_check;
	{object V1529;
	object V1530;
	object V1531;
	check_arg(3);
	V1529=(base[0]);
	V1530=(base[1]);
	V1531=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (VFUN_NARGS=1,(*(LnkLI219))((V1531)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk294)(Lclptr294);
	return;
	}
}
/*	local entry for function OBSOLETE-INSTANCE-TRAP	*/

static object LI110(V1536,V1537,V1538)

object V1536;object V1537;object V1538;
{	 VMB97 VMS97 VMV97
	bds_check;
	goto TTL;
TTL:;
	if(type_of(V1538)==t_structure){
	goto T2757;}
	goto T2756;
	goto T2757;
T2757:;
	if(((V1538)->str.str_def)==(VV[143])){
	goto T2754;}
	goto T2756;
T2756:;{object V1540;
	V1540= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1538);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1541= vs_base[0];
	if((V1540)==(CMPcar(V1541))){
	goto T2754;}}
	if(((VV[144]->s.s_dbind))==Cnil){
	goto T2764;}
	{object V1542 = (VV[145]->s.s_dbind);
	VMR97(V1542)}
	goto T2764;
T2764:;
	bds_bind(VV[144],Ct);
	base[1]= VV[146];
	base[2]= (V1538);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	{object V1543 = vs_base[0];
	bds_unwind1;
	VMR97(V1543)}
	goto T2754;
T2754:;
	{object V1544;
	object V1545;
	object V1546;
	object V1547;
	object V1548;
	object V1549;
	object V1550;
	object V1551;
	register object V1552;
	register object V1553;
	V1544= ((V1537))->v.v_self[11];
	base[7]= (V1544);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk201)(Lclptr201);
	vs_top=sup;
	V1545= vs_base[0];
	V1546= ((V1536))->v.v_self[9];
	V1547= ((V1537))->v.v_self[9];
	if(type_of(V1538)==t_structure){
	goto T2777;}
	goto T2775;
	goto T2777;
T2777:;
	if(!(((V1538)->str.str_def)==(VV[147]))){
	goto T2775;}
	V1548= STREF(object,(V1538),4);
	goto T2773;
	goto T2775;
T2775:;{object V1555;
	V1555= (VV[2]->s.s_dbind);
	base[7]= small_fixnum(14);
	base[8]= (V1538);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1556= vs_base[0];
	if(!((V1555)==(CMPcar(V1556)))){
	goto T2780;}}
	V1548= CMPcar(((V1538))->cc.cc_turbo[12]);
	goto T2773;
	goto T2780;
T2780:;
	base[7]= VV[148];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	V1548= vs_base[0];
	goto T2773;
T2773:;
	if(type_of(V1545)==t_structure){
	goto T2790;}
	goto T2788;
	goto T2790;
T2790:;
	if(!(((V1545)->str.str_def)==(VV[149]))){
	goto T2788;}
	V1549= STREF(object,(V1545),4);
	goto T2786;
	goto T2788;
T2788:;{object V1558;
	V1558= (VV[2]->s.s_dbind);
	base[7]= small_fixnum(14);
	base[8]= (V1545);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1559= vs_base[0];
	if(!((V1558)==(CMPcar(V1559)))){
	goto T2793;}}
	V1549= CMPcar(((V1545))->cc.cc_turbo[12]);
	goto T2786;
	goto T2793;
T2793:;
	base[7]= VV[148];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	V1549= vs_base[0];
	goto T2786;
T2786:;
	V1550= ((V1536))->v.v_self[10];
	V1551= Cnil;
	V1552= Cnil;
	V1553= Cnil;
	{register object V1560;
	register object V1561;
	object V1562;
	object V1563;
	V1560= (V1546);
	V1561= Cnil;
	V1562= small_fixnum(0);
	V1563= Cnil;
	goto T2809;
T2809:;
	{object V1564;
	if(!(((V1560))==Cnil)){
	goto T2815;}
	goto T2803;
	goto T2815;
T2815:;
	V1564= CMPcar((V1560));
	V1560= CMPcdr((V1560));
	V1561= (V1564);}
	{object V1565;
	V1565= (V1562);
	V1562= number_plus((V1562),small_fixnum(1));
	V1563= (V1565);}
	{long V1566;
	object V1567;
	V1566= fix((V1563));
	base[8]= (V1561);
	base[9]= (V1547);
	base[10]= VV[8];
	base[11]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+8)+4;
	(void) (*Lnk305)();
	vs_top=sup;
	V1567= vs_base[0];
	if(((V1567))==Cnil){
	goto T2830;}
	(void)((((V1549))->v.v_self[fix((V1567))]=(((V1548))->v.v_self[V1566])));
	goto T2810;
	goto T2830;
T2830:;
	V1552= make_cons(V1561,(V1552));
	if((((V1548))->v.v_self[V1566])==((VV[61]->s.s_dbind))){
	goto T2810;}
	{object V1570;
	V1570= ((V1548))->v.v_self[V1566];
	{object V1571;
	base[9]= (V1553);
	base[10]= (V1570);
	base[11]= V1561;
	vs_top=(vs_base=base+9)+3;
	siLput_f();
	vs_top=sup;
	V1571= vs_base[0];
	V1553= (V1571);}}}
	goto T2810;
T2810:;
	goto T2809;}
	goto T2803;
T2803:;
	{register object V1572;
	register object V1573;
	V1572= (V1550);
	V1573= Cnil;
	goto T2848;
T2848:;
	{object V1574;
	if(!(((V1572))==Cnil)){
	goto T2854;}
	goto T2844;
	goto T2854;
T2854:;
	V1574= CMPcar((V1572));
	V1572= CMPcdr((V1572));
	V1573= (V1574);}
	{object V1575;
	object V1576;
	V1575= CMPcar((V1573));
	V1576= CMPcdr((V1573));
	{object V1577;
	base[7]= (V1575);
	base[8]= (V1547);
	base[9]= VV[8];
	base[10]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+7)+4;
	(void) (*Lnk305)();
	vs_top=sup;
	V1577= vs_base[0];
	if(((V1577))==Cnil){
	goto T2866;}
	(void)((((V1549))->v.v_self[fix((V1577))]=(CMPcdr((V1573)))));
	goto T2849;
	goto T2866;
T2866:;
	V1552= make_cons(V1575,(V1552));
	if(((V1576))==((VV[61]->s.s_dbind))){
	goto T2849;}
	{object V1581;
	base[7]= (V1553);
	base[8]= V1576;
	base[9]= V1575;
	vs_top=(vs_base=base+7)+3;
	siLput_f();
	vs_top=sup;
	V1581= vs_base[0];
	V1553= (V1581);}}}
	goto T2849;
T2849:;
	goto T2848;}
	goto T2844;
T2844:;
	{register object V1582;
	register object V1583;
	V1582= (V1547);
	V1583= CMPcar((V1582));
	goto T2883;
T2883:;
	if(!(((V1582))==Cnil)){
	goto T2884;}
	goto T2879;
	goto T2884;
T2884:;
	{register object x= (V1583),V1584= (V1546);
	while(V1584!=Cnil)
	if(x==(V1584->c.c_car)){
	goto T2888;
	}else V1584=V1584->c.c_cdr;}
	{register object x= (V1583),V1585= (V1550);
	while(V1585!=Cnil)
	if(EQ(x,V1585->c.c_car->c.c_car) &&V1585->c.c_car != Cnil){
	goto T2888;
	}else V1585=V1585->c.c_cdr;}
	V1551= make_cons(V1583,(V1551));
	goto T2888;
T2888:;
	V1582= CMPcdr((V1582));
	V1583= CMPcar((V1582));
	goto T2883;}
	goto T2879;
T2879:;
	(void)((*(LnkLI330))((V1538),(V1545)));
	base[7]= (V1538);
	base[8]= (V1551);
	base[9]= (V1552);
	base[10]= (V1553);
	vs_top=(vs_base=base+7)+4;
	(void) (*Lnk331)(Lclptr331);
	vs_top=sup;
	{object V1587 = (V1537);
	VMR97(V1587)}}
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
	{object V1588=base[0]->c.c_cdr;
	if(endp(V1588))invalid_macro_call();
	base[2]= (V1588->c.c_car);
	V1588=V1588->c.c_cdr;
	if(!endp(V1588))invalid_macro_call();}
	V1589= list(2,VV[153],base[2]);
	V1590= list(2,VV[154],base[2]);
	V1591= list(3,VV[87],/* INLINE-ARGS */V1590,list(2,VV[154],base[2]));
	V1592= list(2,VV[155],base[2]);
	base[3]= list(2,VV[89],list(4,VV[150],VV[151],list(4,VV[152],/* INLINE-ARGS */V1589,/* INLINE-ARGS */V1591,list(3,VV[87],/* INLINE-ARGS */V1592,list(2,VV[155],base[2]))),VV[156]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function CHANGE-CLASS-INTERNAL	*/

static object LI112(V1595,V1596)

object V1595;object V1596;
{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	{object V1597;
	object V1598;
	object V1599;
	object V1600;
	object V1601;
	object V1602;
	object V1603;
	object V1604;
	object V1605;
	V1597= (*(LnkLI225))((V1595));
	base[9]= (V1596);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk201)(Lclptr201);
	vs_top=sup;
	V1598= vs_base[0];
	if(type_of(V1598)==t_structure){
	goto T2912;}
	goto T2910;
	goto T2912;
T2912:;
	if(!(((V1598)->str.str_def)==(VV[157]))){
	goto T2910;}
	V1599= STREF(object,(V1598),0);
	goto T2908;
	goto T2910;
T2910:;{object V1607;
	V1607= (VV[2]->s.s_dbind);
	base[9]= small_fixnum(14);
	base[10]= (V1598);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1608= vs_base[0];
	if(!((V1607)==(CMPcar(V1608)))){
	goto T2915;}}
	V1599= CMPcar(((V1598))->cc.cc_turbo[13]);
	goto T2908;
	goto T2915;
T2915:;
	base[9]= VV[158];
	vs_top=(vs_base=base+9)+1;
	Lerror();
	vs_top=sup;
	V1599= vs_base[0];
	goto T2908;
T2908:;
	base[9]= (V1597);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	V1600= vs_base[0];
	V1601= ((V1600))->v.v_self[9];
	V1602= ((V1599))->v.v_self[9];
	if(type_of(V1595)==t_structure){
	goto T2929;}
	goto T2927;
	goto T2929;
T2929:;
	if(!(((V1595)->str.str_def)==(VV[159]))){
	goto T2927;}
	V1603= STREF(object,(V1595),4);
	goto T2925;
	goto T2927;
T2927:;{object V1610;
	V1610= (VV[2]->s.s_dbind);
	base[9]= small_fixnum(14);
	base[10]= (V1595);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1611= vs_base[0];
	if(!((V1610)==(CMPcar(V1611)))){
	goto T2932;}}
	V1603= CMPcar(((V1595))->cc.cc_turbo[12]);
	goto T2925;
	goto T2932;
T2932:;
	base[9]= VV[148];
	vs_top=(vs_base=base+9)+1;
	Lerror();
	vs_top=sup;
	V1603= vs_base[0];
	goto T2925;
T2925:;
	if(type_of(V1598)==t_structure){
	goto T2942;}
	goto T2940;
	goto T2942;
T2942:;
	if(!(((V1598)->str.str_def)==(VV[160]))){
	goto T2940;}
	V1604= STREF(object,(V1598),4);
	goto T2938;
	goto T2940;
T2940:;{object V1613;
	V1613= (VV[2]->s.s_dbind);
	base[9]= small_fixnum(14);
	base[10]= (V1598);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1614= vs_base[0];
	if(!((V1613)==(CMPcar(V1614)))){
	goto T2945;}}
	V1604= CMPcar(((V1598))->cc.cc_turbo[12]);
	goto T2938;
	goto T2945;
T2945:;
	base[9]= VV[148];
	vs_top=(vs_base=base+9)+1;
	Lerror();
	vs_top=sup;
	V1604= vs_base[0];
	goto T2938;
T2938:;
	V1605= ((V1600))->v.v_self[10];
	{register object V1615;
	object V1616;
	register object V1617;
	object V1618;
	V1615= (V1602);
	V1616= Cnil;
	V1617= small_fixnum(0);
	V1618= Cnil;
	goto T2958;
T2958:;
	{object V1619;
	if(!(((V1615))==Cnil)){
	goto T2964;}
	goto T2952;
	goto T2964;
T2964:;
	V1619= CMPcar((V1615));
	V1615= CMPcdr((V1615));
	V1616= (V1619);}
	{object V1620;
	V1620= (V1617);
	V1617= number_plus((V1617),small_fixnum(1));
	V1618= (V1620);}
	{long V1621;
	register object V1622;
	V1621= fix((V1618));
	base[10]= (V1616);
	base[11]= (V1601);
	base[12]= VV[8];
	base[13]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+10)+4;
	(void) (*Lnk305)();
	vs_top=sup;
	V1622= vs_base[0];
	if(((V1622))==Cnil){
	goto T2959;}
	(void)(((V1604))->v.v_self[V1621]= (((V1603))->v.v_self[fix((V1622))]));}
	goto T2959;
T2959:;
	goto T2958;}
	goto T2952;
T2952:;
	{register object V1623;
	register object V1624;
	V1623= (V1605);
	V1624= Cnil;
	goto T2985;
T2985:;
	{object V1625;
	if(!(((V1623))==Cnil)){
	goto T2991;}
	goto T2981;
	goto T2991;
T2991:;
	V1625= CMPcar((V1623));
	V1623= CMPcdr((V1623));
	V1624= (V1625);}
	{register object V1626;
	base[9]= CMPcar((V1624));
	base[10]= (V1602);
	base[11]= VV[8];
	base[12]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk305)();
	vs_top=sup;
	V1626= vs_base[0];
	if(((V1626))==Cnil){
	goto T2986;}
	(void)((((V1604))->v.v_self[fix((V1626))]=(CMPcdr((V1624)))));}
	goto T2986;
T2986:;
	goto T2985;}
	goto T2981;
T2981:;
	(void)((*(LnkLI330))((V1595),(V1598)));
	base[9]= (V1598);
	base[10]= (V1595);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk332)(Lclptr332);
	vs_top=sup;
	{object V1627 = (V1595);
	VMR99(V1627)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD CHANGE-CLASS (STANDARD-OBJECT STANDARD-CLASS))	*/

static object LI113(V1632,V1633,V1634,V1635)

object V1632;object V1633;register object V1634;object V1635;
{	 VMB100 VMS100 VMV100
	goto TTL;
TTL:;
	if(type_of(V1634)==t_structure){
	goto T3014;}
	goto T3013;
	goto T3014;
T3014:;
	if(((V1634)->str.str_def)==(VV[161])){
	goto T3011;}
	goto T3013;
T3013:;
	base[0]= VV[162];
	base[1]= (V1634);
	base[2]= (V1635);
	base[3]= VV[163];
	vs_top=(vs_base=base+0)+4;
	Lerror();
	vs_top=sup;
	goto T3011;
T3011:;
	{object V1638 = (*(LnkLI333))((V1634),(V1635));
	VMR100(V1638)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD CHANGE-CLASS (STANDARD-OBJECT FUNCALLABLE-STANDARD-CLASS))	*/

static object LI114(V1643,V1644,V1645,V1646)

object V1643;object V1644;register object V1645;object V1646;
{	 VMB101 VMS101 VMV101
	goto TTL;
TTL:;{object V1648;
	V1648= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1645);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1649= vs_base[0];
	if((V1648)==(CMPcar(V1649))){
	goto T3024;}}
	base[0]= VV[164];
	base[1]= (V1645);
	base[2]= (V1646);
	base[3]= VV[165];
	vs_top=(vs_base=base+0)+4;
	Lerror();
	vs_top=sup;
	goto T3024;
T3024:;
	{object V1650 = (*(LnkLI333))((V1645),(V1646));
	VMR101(V1650)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD CHANGE-CLASS (T SYMBOL))	*/

static void L115()
{register object *base=vs_base;
	register object *sup=base+VM102; VC102
	vs_check;
	{object V1651;
	object V1652;
	object V1653;
	object V1654;
	check_arg(4);
	V1651=(base[0]);
	V1652=(base[1]);
	V1653=(base[2]);
	V1654=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V1653);
	base[5]= (VFUN_NARGS=1,(*(LnkLI219))((V1654)));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk226)(Lclptr226);
	return;
	}
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :BEFORE (BUILT-IN-CLASS T))	*/

static object LI116(V1661,V1662,V1663,V1664,V1665)

object V1661;object V1662;object V1663;object V1664;object V1665;
{	 VMB103 VMS103 VMV103
	goto TTL;
TTL:;
	base[0]= VV[166];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V1668 = vs_base[0];
	VMR103(V1668)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-DIRECT-SLOTS (BUILT-IN-CLASS))	*/

static object LI117(V1672,V1673,V1674)

object V1672;object V1673;object V1674;
{	 VMB104 VMS104 VMV104
	goto TTL;
TTL:;
	{object V1676 = Cnil;
	VMR104(V1676)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-SLOTS (BUILT-IN-CLASS))	*/

static object LI118(V1680,V1681,V1682)

object V1680;object V1681;object V1682;
{	 VMB105 VMS105 VMV105
	goto TTL;
TTL:;
	{object V1684 = Cnil;
	VMR105(V1684)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-DIRECT-DEFAULT-INITARGS (BUILT-IN-CLASS))	*/

static object LI119(V1688,V1689,V1690)

object V1688;object V1689;object V1690;
{	 VMB106 VMS106 VMV106
	goto TTL;
TTL:;
	{object V1692 = Cnil;
	VMR106(V1692)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-DEFAULT-INITARGS (BUILT-IN-CLASS))	*/

static object LI120(V1696,V1697,V1698)

object V1696;object V1697;object V1698;
{	 VMB107 VMS107 VMV107
	goto TTL;
TTL:;
	{object V1700 = Cnil;
	VMR107(V1700)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD VALIDATE-SUPERCLASS (CLASS BUILT-IN-CLASS))	*/

static object LI121(V1705,V1706,V1707,V1708)

object V1705;object V1706;object V1707;object V1708;
{	 VMB108 VMS108 VMV108
	goto TTL;
TTL:;
	{object V1710 = (((V1708))==((VV[136]->s.s_dbind))?Ct:Cnil);
	VMR108(V1710)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD VALIDATE-SUPERCLASS (SLOT-CLASS FORWARD-REFERENCED-CLASS))	*/

static object LI122(V1715,V1716,V1717,V1718)

object V1715;object V1716;object V1717;object V1718;
{	 VMB109 VMS109 VMV109
	goto TTL;
TTL:;
	{object V1720 = Ct;
	VMR109(V1720)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD ADD-DEPENDENT (DEPENDENT-UPDATE-MIXIN T))	*/

static object LI123(V1725,V1726,V1727,V1728)

object V1725;object V1726;object V1727;object V1728;
{	 VMB110 VMS110 VMV110
	goto TTL;
TTL:;
	{object V1733;
	base[1]= V1728;
	base[2]= (*(LnkLI196))(V1727,VV[167]);
	vs_top=(vs_base=base+1)+2;
	Ladjoin();
	vs_top=sup;
	V1733= vs_base[0];
	{object V1736 = (*(LnkLI194))((V1733),V1727,VV[167]);
	VMR110(V1736)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-DEPENDENT (DEPENDENT-UPDATE-MIXIN T))	*/

static object LI124(V1741,V1742,V1743,V1744)

object V1741;object V1742;object V1743;object V1744;
{	 VMB111 VMS111 VMV111
	goto TTL;
TTL:;
	base[0]= (V1744);
	base[1]= (*(LnkLI196))((V1743),VV[167]);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk334)();
	vs_top=sup;
	V1748= vs_base[0];
	V1749 = V1743;
	V1750 = VV[167];
	{object V1751 = (*(LnkLI194))(V1748,V1749,V1750);
	VMR111(V1751)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAP-DEPENDENTS (DEPENDENT-UPDATE-MIXIN T))	*/

static object LI125(V1756,V1757,V1758,V1759)

object V1756;object V1757;object V1758;register object V1759;
{	 VMB112 VMS112 VMV112
	goto TTL;
TTL:;
	{register object V1761;
	register object V1762;
	V1761= (*(LnkLI196))((V1758),VV[167]);
	V1762= CMPcar((V1761));
	goto T3082;
T3082:;
	if(!(((V1761))==Cnil)){
	goto T3083;}
	{object V1763 = Cnil;
	VMR112(V1763)}
	goto T3083;
T3083:;
	(void)((
	(type_of((V1759)) == t_sfun ?(*(((V1759))->sfn.sfn_self)):
	(fcall.argd=1,type_of((V1759))==t_vfun) ?
	(*(((V1759))->sfn.sfn_self)):
	(fcall.fun=((V1759)),fcalln))((V1762))));
	V1761= CMPcdr((V1761));
	V1762= CMPcar((V1761));
	goto T3082;}
	base[0]=base[0];
	return Cnil;
}
/*	local function WALK	*/

static void L80(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM113; VC113
	vs_check;
	{register object V1764;
	check_arg(1);
	V1764=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1764))!=Cnil){
	goto T3094;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3094;
T3094:;
	{object V1765;
	{object V1766;
	V1766= CMPcar((V1764));
	V1764= CMPcdr((V1764));
	V1765= (V1766);}
	if(!(((V1765))==(base0[0]))){
	goto T3102;}
	V1767= base0[1];
	goto T3100;
	goto T3102;
T3102:;
	base[1]= (V1765);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk296)(Lclptr296);
	vs_top=sup;
	V1767= vs_base[0];
	goto T3100;
T3100:;
	base[1]= (V1764);
	vs_top=(vs_base=base+1)+1;
	L80(base0);
	vs_top=sup;
	V1768= vs_base[0];
	base[1]= append(V1767,V1768);
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
	{object V1769;
	object V1770;
	check_arg(2);
	V1769=(base[0]);
	V1770=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	base[3]= (V1769);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk335)(Lclptr335);
	return;
	}
}
/*	local function COLLECT-GFS	*/

static void L75(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM115; VC115
	vs_check;
	{object V1771;
	check_arg(1);
	V1771=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1772;
	register object V1773;
	base[3]= (V1771);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk336)(Lclptr336);
	vs_top=sup;
	V1772= vs_base[0];
	V1773= CMPcar((V1772));
	goto T3114;
T3114:;
	if(!(((V1772))==Cnil)){
	goto T3115;}
	goto T3109;
	goto T3115;
T3115:;
	{register object V1774;
	register object V1775;
	register object V1776;
	V1774= (V1773);
	V1775= base0[1];
	V1776= Ct;
	base[3]= (V1774);
	base[4]= (V1775);
	base[5]= (V1776);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	V1772= CMPcdr((V1772));
	V1773= CMPcar((V1772));
	goto T3114;}
	goto T3109;
T3109:;
	base[1]= (V1771);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk249)(Lclptr249);
	vs_top=sup;
	V1778= vs_base[0];
	{
	object V1777= V1778;
	if(V1777==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T3131;
T3131:;
	base[1]= (V1777->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L75(base0);
	vs_top=sup;
	if((V1777=MMcdr(V1777))==Cnil){
	base[1]= V1778;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T3131;}
	}
}
/*	local function RWALK	*/

static void L71(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM116; VC116
	vs_check;
	{object V1779;
	check_arg(1);
	V1779=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1779))==Cnil){
	goto T3137;}
	base[1]= CMPcdr((V1779));
	vs_top=(vs_base=base+1)+1;
	L71(base0);
	vs_top=sup;
	{register object V1780;
	object V1781;
	base[3]= CMPcar((V1779));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk337)(Lclptr337);
	vs_top=sup;
	V1780= vs_base[0];
	V1781= CMPcar((V1780));
	goto T3145;
T3145:;
	if(!(((V1780))==Cnil)){
	goto T3146;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T3146;
T3146:;
	{register object V1782;
	base[3]= (V1781);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V1782= vs_base[0];
	{register object x= (V1782),V1783= base0[0];
	while(V1783!=Cnil)
	if(eql(x,V1783->c.c_car)){
	goto T3154;
	}else V1783=V1783->c.c_cdr;
	goto T3150;}
	goto T3154;
T3154:;
	base0[1]= make_cons((V1782),base0[1]);
	base[3]= (V1782);
	base[4]= base0[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk95)();
	vs_top=sup;
	base0[0]= vs_base[0];}
	goto T3150;
T3150:;
	V1780= CMPcdr((V1780));
	V1781= CMPcar((V1780));
	goto T3145;}
	goto T3137;
T3137:;
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
	{object V1784;
	object V1785;
	object V1786;
	check_arg(3);
	V1784=(base[0]);
	V1785=(base[1]);
	V1786=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1787;
	base[3]= (V1784);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk338)();
	vs_top=sup;
	V1787= vs_base[0];
	{object V1788= (V1786);
	if((V1788!= VV[96]))goto T3167;
	if(!((base0[0])==(VV[94]))){
	goto T3169;}
	base[3]= base0[1];
	base[4]= (V1787);
	base[5]= (V1785);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk339)(Lclptr339);
	return;
	goto T3169;
T3169:;
	base[3]= base0[1];
	base[4]= (V1787);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk340)(Lclptr340);
	return;
	goto T3167;
T3167:;
	if((V1788!= VV[97]))goto T3176;
	if(!((base0[0])==(VV[94]))){
	goto T3178;}
	base[3]= base0[1];
	base[4]= (V1787);
	base[5]= (V1785);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk341)(Lclptr341);
	return;
	goto T3178;
T3178:;
	base[3]= base0[1];
	base[4]= (V1787);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk342)(Lclptr342);
	return;
	goto T3176;
T3176:;
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
	{object V1789;
	check_arg(1);
	V1789=(base[0]);
	vs_top=sup;
	base[1]=VV[343]->s.s_gfdef;
	base[2]= (base0[1]->c.c_car);
	base[3]= (V1789);
	{object V1790;
	V1790= (base0[0]->c.c_car);
	 vs_top=base+4;
	 while(V1790!=Cnil)
	 {vs_push((V1790)->c.c_car);V1790=(V1790)->c.c_cdr;}
	vs_base=base+2;}
	(void) (*Lnk343)(Lclptr343);
	return;
	}
}
/*	local function FIX-SUPER	*/

static void L46(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM119; VC119
	vs_check;
	{object V1791;
	check_arg(1);
	V1791=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V1791);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk288)(Lclptr288);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3189;}
	base[1]= (V1791);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3189;
T3189:;
	if(((*(LnkLI344))((V1791)))!=Cnil){
	goto T3193;}
	base[1]= VV[53];
	base[2]= (V1791);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	goto T3193;
T3193:;{object V1792;
	V1792= (VFUN_NARGS=2,(*(LnkLI219))((V1791),Cnil));
	if(V1792==Cnil)goto T3197;
	base[1]= V1792;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3197;
T3197:;}
	{object V1794;
	base[2]= VV[54];
	base[3]= VV[50];
	base[4]= (V1791);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk223)(Lclptr223);
	vs_top=sup;
	V1794= vs_base[0];
	base[2]= (*(LnkLI224))((V1794),V1791);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC129(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM120; VC120
	vs_check;
	{object V1795;
	check_arg(1);
	V1795=(base[0]);
	vs_top=sup;
	{register object V1796;
	register object V1797;
	base[3]= (V1795);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk336)(Lclptr336);
	vs_top=sup;
	V1796= vs_base[0];
	V1797= CMPcar((V1796));
	goto T3207;
T3207:;
	if(!(((V1796))==Cnil)){
	goto T3208;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T3208;
T3208:;
	base[3]= (V1797);
	base[4]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T3212;}
	{register object V1798;
	register object V1799;
	register object V1800;
	V1798= (V1797);
	V1799= (base0[0]->c.c_car);
	V1800= Ct;
	base[3]= (V1798);
	base[4]= (V1799);
	base[5]= (V1800);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	(void)((
	(type_of((base0[1]->c.c_car)) == t_sfun ?(*(((base0[1]->c.c_car))->sfn.sfn_self)):
	(fcall.argd=1,type_of((base0[1]->c.c_car))==t_vfun) ?
	(*(((base0[1]->c.c_car))->sfn.sfn_self)):
	(fcall.fun=((base0[1]->c.c_car)),fcalln))((V1797))));
	goto T3212;
T3212:;
	V1796= CMPcdr((V1796));
	V1797= CMPcar((V1796));
	goto T3207;}
	}
}
/*	local function CLOSURE	*/

static void LC128(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM121; VC121
	vs_check;
	{object V1801;
	object V1802;
	check_arg(2);
	V1801=(base[0]);
	V1802=(base[1]);
	vs_top=sup;
	base[2]= (V1802);
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
	{object V1803;
	object V1804;
	check_arg(2);
	V1803=(base[0]);
	V1804=(base[1]);
	vs_top=sup;
	base[2]= (*(LnkLI345))((V1803));
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
	{object V1805;
	check_arg(1);
	V1805=(base[0]);
	vs_top=sup;
	V1806 = (base0[0]->c.c_car);
	base[1]= (V1805);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk64)(Lclptr64);
	vs_top=sup;
	V1807= vs_base[0];
	(void)((
	V1808 = V1806,
	(type_of(V1808) == t_sfun ?(*((V1808)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V1808)==t_vfun) ?
	(*((V1808)->sfn.sfn_self)):
	(fcall.fun=(V1808),fcalln))(V1807)));
	base[1]= (V1805);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
static void LnkT64(ptr) object *ptr;{ call_or_link_closure(VV[64],(void **)(void *)&Lnk64,(void **)(void *)&Lclptr64);} /* CLASS-EQ-SPECIALIZER */
static object  LnkTLI345(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[345],(void **)(void *)&LnkLI345,1,first,ap);va_end(ap);return V1;} /* INTERN-EQL-SPECIALIZER */
static object  LnkTLI344(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[344],(void **)(void *)&LnkLI344,1,first,ap);va_end(ap);return V1;} /* LEGAL-CLASS-NAME-P */
static void LnkT343(ptr) object *ptr;{ call_or_link_closure(VV[343],(void **)(void *)&Lnk343,(void **)(void *)&Lclptr343);} /* UPDATE-DEPENDENT */
static void LnkT342(ptr) object *ptr;{ call_or_link_closure(VV[342],(void **)(void *)&Lnk342,(void **)(void *)&Lclptr342);} /* REMOVE-WRITER-METHOD */
static void LnkT341(ptr) object *ptr;{ call_or_link_closure(VV[341],(void **)(void *)&Lnk341,(void **)(void *)&Lclptr341);} /* ADD-WRITER-METHOD */
static void LnkT340(ptr) object *ptr;{ call_or_link_closure(VV[340],(void **)(void *)&Lnk340,(void **)(void *)&Lclptr340);} /* REMOVE-READER-METHOD */
static void LnkT339(ptr) object *ptr;{ call_or_link_closure(VV[339],(void **)(void *)&Lnk339,(void **)(void *)&Lclptr339);} /* ADD-READER-METHOD */
static void LnkT338(){ call_or_link(VV[338],(void **)(void *)&Lnk338);} /* ENSURE-GENERIC-FUNCTION */
static void LnkT337(ptr) object *ptr;{ call_or_link_closure(VV[337],(void **)(void *)&Lnk337,(void **)(void *)&Lclptr337);} /* CLASS-SLOTS */
static void LnkT336(ptr) object *ptr;{ call_or_link_closure(VV[336],(void **)(void *)&Lnk336,(void **)(void *)&Lclptr336);} /* SPECIALIZER-DIRECT-GENERIC-FUNCTIONS */
static void LnkT335(ptr) object *ptr;{ call_or_link_closure(VV[335],(void **)(void *)&Lnk335,(void **)(void *)&Lclptr335);} /* UPDATE-GF-DFUN */
static void LnkT334(){ call_or_link(VV[334],(void **)(void *)&Lnk334);} /* DELETE */
static object  LnkTLI333(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[333],(void **)(void *)&LnkLI333,2,first,ap);va_end(ap);return V1;} /* CHANGE-CLASS-INTERNAL */
static void LnkT332(ptr) object *ptr;{ call_or_link_closure(VV[332],(void **)(void *)&Lnk332,(void **)(void *)&Lclptr332);} /* UPDATE-INSTANCE-FOR-DIFFERENT-CLASS */
static void LnkT331(ptr) object *ptr;{ call_or_link_closure(VV[331],(void **)(void *)&Lnk331,(void **)(void *)&Lclptr331);} /* UPDATE-INSTANCE-FOR-REDEFINED-CLASS */
static object  LnkTLI330(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[330],(void **)(void *)&LnkLI330,2,first,ap);va_end(ap);return V1;} /* SWAP-WRAPPERS-AND-SLOTS */
static object  LnkTLI329(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[329],(void **)(void *)&LnkLI329,2,first,ap);va_end(ap);return V1;} /* SET-WRAPPER */
static object  LnkTLI328(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[328],(void **)(void *)&LnkLI328,3,first,ap);va_end(ap);return V1;} /* INVALIDATE-WRAPPER */
static object  LnkTLI327(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[327],(void **)(void *)&LnkLI327,1,first,ap);va_end(ap);return V1;} /* INFORM-TYPE-SYSTEM-ABOUT-STD-CLASS */
static object  LnkTLI326(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[326],(void **)(void *)&LnkLI326,2,first,ap);va_end(ap);return V1;} /* MAKE-STD-BOUNDP-METHOD-FUNCTION */
static object  LnkTLI325(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[325],(void **)(void *)&LnkLI325,2,first,ap);va_end(ap);return V1;} /* MAKE-STD-WRITER-METHOD-FUNCTION */
static object  LnkTLI324(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[324],(void **)(void *)&LnkLI324,2,first,ap);va_end(ap);return V1;} /* MAKE-STD-READER-METHOD-FUNCTION */
static object  LnkTLI322(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[322],(void **)(void *)&LnkLI322,first,ap);va_end(ap);return V1;} /* GET-METHOD */
static void LnkT321(ptr) object *ptr;{ call_or_link_closure(VV[321],(void **)(void *)&Lnk321,(void **)(void *)&Lclptr321);} /* MAKE-BOUNDP-METHOD-FUNCTION */
static void LnkT320(ptr) object *ptr;{ call_or_link_closure(VV[320],(void **)(void *)&Lnk320,(void **)(void *)&Lclptr320);} /* MAKE-WRITER-METHOD-FUNCTION */
static void LnkT319(ptr) object *ptr;{ call_or_link_closure(VV[319],(void **)(void *)&Lnk319,(void **)(void *)&Lclptr319);} /* MAKE-READER-METHOD-FUNCTION */
static void LnkT316(ptr) object *ptr;{ call_or_link_closure(VV[316],(void **)(void *)&Lnk316,(void **)(void *)&Lclptr316);} /* SLOT-DEFINITION-INTERNAL-WRITER-FUNCTION */
static void LnkT315(ptr) object *ptr;{ call_or_link_closure(VV[315],(void **)(void *)&Lnk315,(void **)(void *)&Lclptr315);} /* SLOT-DEFINITION-INTERNAL-READER-FUNCTION */
static void LnkT314(){ call_or_link(VV[314],(void **)(void *)&Lnk314);} /* *SUBTYPEP */
static void LnkT313(ptr) object *ptr;{ call_or_link_closure(VV[313],(void **)(void *)&Lnk313,(void **)(void *)&Lclptr313);} /* SLOT-DEFINITION-TYPE */
static void LnkT312(ptr) object *ptr;{ call_or_link_closure(VV[312],(void **)(void *)&Lnk312,(void **)(void *)&Lclptr312);} /* SLOT-DEFINITION-INITARGS */
static void LnkT311(ptr) object *ptr;{ call_or_link_closure(VV[311],(void **)(void *)&Lnk311,(void **)(void *)&Lclptr311);} /* SLOT-DEFINITION-INITFORM */
static void LnkT310(ptr) object *ptr;{ call_or_link_closure(VV[310],(void **)(void *)&Lnk310,(void **)(void *)&Lclptr310);} /* EFFECTIVE-SLOT-DEFINITION-CLASS */
static void LnkT309(ptr) object *ptr;{ call_or_link_closure(VV[309],(void **)(void *)&Lnk309,(void **)(void *)&Lclptr309);} /* COMPUTE-EFFECTIVE-SLOT-DEFINITION-INITARGS */
static void LnkT308(ptr) object *ptr;{ call_or_link_closure(VV[308],(void **)(void *)&Lnk308,(void **)(void *)&Lclptr308);} /* PCL CLASS-PRECEDENCE-LIST slot READER */
static void LnkT307(ptr) object *ptr;{ call_or_link_closure(VV[307],(void **)(void *)&Lnk307,(void **)(void *)&Lclptr307);} /* INITIALIZE-INTERNAL-SLOT-FUNCTIONS */
static void LnkT306(ptr) object *ptr;{ call_or_link_closure(VV[306],(void **)(void *)&Lnk306,(void **)(void *)&Lclptr306);} /* SETF PCL SLOT-DEFINITION-LOCATION */
static void LnkT305(){ call_or_link(VV[305],(void **)(void *)&Lnk305);} /* POSITION */
static object  LnkTLI304(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[304],(void **)(void *)&LnkLI304,2,first,ap);va_end(ap);return V1;} /* COMPUTE-LAYOUT */
static void LnkT303(){ call_or_link(VV[303],(void **)(void *)&Lnk303);} /* TYPECASE-ERROR-STRING */
static void LnkT302(){ call_or_link(VV[302],(void **)(void *)&Lnk302);} /* SLOT-UNBOUND-INTERNAL */
static void LnkT301(){ call_or_link(VV[301],(void **)(void *)&Lnk301);} /* STRUCTURE-SUBTYPE-P */
static void LnkT300(ptr) object *ptr;{ call_or_link_closure(VV[300],(void **)(void *)&Lnk300,(void **)(void *)&Lclptr300);} /* COMPUTE-EFFECTIVE-SLOT-DEFINITION */
static void LnkT299(ptr) object *ptr;{ call_or_link_closure(VV[299],(void **)(void *)&Lnk299,(void **)(void *)&Lclptr299);} /* DIRECT-SLOT-DEFINITION-CLASS */
static void LnkT298(){ call_or_link(VV[298],(void **)(void *)&Lnk298);} /* DELETE-DUPLICATES */
static void LnkT296(ptr) object *ptr;{ call_or_link_closure(VV[296],(void **)(void *)&Lnk296,(void **)(void *)&Lclptr296);} /* CLASS-DIRECT-DEFAULT-INITARGS */
static void LnkT295(){ call_or_link(VV[295],(void **)(void *)&Lnk295);} /* SLOT-BOUNDP-NORMAL */
static void LnkT31(ptr) object *ptr;{ call_or_link_closure(VV[31],(void **)(void *)&Lnk31,(void **)(void *)&Lclptr31);} /* CLASS-SLOT-CELLS */
static void LnkT294(ptr) object *ptr;{ call_or_link_closure(VV[294],(void **)(void *)&Lnk294,(void **)(void *)&Lclptr294);} /* MAKE-INSTANCES-OBSOLETE */
static void LnkT293(ptr) object *ptr;{ call_or_link_closure(VV[293],(void **)(void *)&Lnk293,(void **)(void *)&Lclptr293);} /* CLASS-WRAPPER */
static object  LnkTLI292(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[292],(void **)(void *)&LnkLI292,1,first,ap);va_end(ap);return V1;} /* COMPUTE-CLASS-SLOTS */
static void LnkT291(){ call_or_link(VV[291],(void **)(void *)&Lnk291);} /* SORT */
static void LnkT288(ptr) object *ptr;{ call_or_link_closure(VV[288],(void **)(void *)&Lnk288,(void **)(void *)&Lclptr288);} /* CLASSP */
static void LnkT287(ptr) object *ptr;{ call_or_link_closure(VV[287],(void **)(void *)&Lnk287,(void **)(void *)&Lclptr287);} /* CLASS-CAN-PRECEDE-LIST */
static void LnkT286(){ call_or_link(VV[286],(void **)(void *)&Lnk286);} /* SET-SLOT-VALUE-NORMAL */
static void LnkT285(){ call_or_link(VV[285],(void **)(void *)&Lnk285);} /* SLOT-VALUE-NORMAL */
static object  LnkTLI284(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[284],(void **)(void *)&LnkLI284,1,first,ap);va_end(ap);return V1;} /* UPDATE-CLASS-CAN-PRECEDE-P */
static object  LnkTLI283(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[283],(void **)(void *)&LnkLI283,2,first,ap);va_end(ap);return V1;} /* NO-SLOT */
static object  LnkTLI282(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[282],(void **)(void *)&LnkLI282,1,first,ap);va_end(ap);return V1;} /* %FBOUNDP */
static object  LnkTLI281(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[281],(void **)(void *)&LnkLI281,1,first,ap);va_end(ap);return V1;} /* FORCE-CACHE-FLUSHES */
static void LnkT99(ptr) object *ptr;{ call_or_link_closure(VV[99],(void **)(void *)&Lnk99,(void **)(void *)&Lclptr99);} /* CLASS-PRECEDENCE-LIST */
static void LnkT280(){ call_or_link(VV[280],(void **)(void *)&Lnk280);} /* UPDATE-MAKE-INSTANCE-FUNCTION-TABLE */
static void LnkT279(ptr) object *ptr;{ call_or_link_closure(VV[279],(void **)(void *)&Lnk279,(void **)(void *)&Lclptr279);} /* COMPUTE-DEFAULT-INITARGS */
static object  LnkTLI278(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[278],(void **)(void *)&LnkLI278,2,first,ap);va_end(ap);return V1;} /* UPDATE-INITS */
static object  LnkTLI277(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[277],(void **)(void *)&LnkLI277,1,first,ap);va_end(ap);return V1;} /* UPDATE-GFS-OF-CLASS */
static object  LnkTLI276(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[276],(void **)(void *)&LnkLI276,2,first,ap);va_end(ap);return V1;} /* UPDATE-SLOTS */
static object  LnkTLI275(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[275],(void **)(void *)&LnkLI275,2,first,ap);va_end(ap);return V1;} /* UPDATE-CPL */
static object  LnkTLI272(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[272],(void **)(void *)&LnkLI272,1,first,ap);va_end(ap);return V1;} /* CLASS-HAS-A-FORWARD-REFERENCED-SUPERCLASS-P */
static void LnkT274(ptr) object *ptr;{ call_or_link_closure(VV[274],(void **)(void *)&Lnk274,(void **)(void *)&Lclptr274);} /* CLASS-FINALIZED-P */
static void LnkT273(){ call_or_link(VV[273],(void **)(void *)&Lnk273);} /* SOME */
static void LnkT271(ptr) object *ptr;{ call_or_link_closure(VV[271],(void **)(void *)&Lnk271,(void **)(void *)&Lclptr271);} /* REMOVE-DIRECT-SUBCLASS */
static void LnkT270(){ call_or_link(VV[270],(void **)(void *)&Lnk270);} /* SET-DIFFERENCE */
static void LnkT269(ptr) object *ptr;{ call_or_link_closure(VV[269],(void **)(void *)&Lnk269,(void **)(void *)&Lclptr269);} /* ADD-DIRECT-SUBCLASS */
static void LnkT268(ptr) object *ptr;{ call_or_link_closure(VV[268],(void **)(void *)&Lnk268,(void **)(void *)&Lclptr268);} /* CLASS-DIRECT-SUBCLASSES */
static void LnkT267(ptr) object *ptr;{ call_or_link_closure(VV[267],(void **)(void *)&Lnk267,(void **)(void *)&Lclptr267);} /* SLOT-DEFINITION-WRITERS */
static void LnkT266(ptr) object *ptr;{ call_or_link_closure(VV[266],(void **)(void *)&Lnk266,(void **)(void *)&Lclptr266);} /* SLOT-DEFINITION-READERS */
static object  LnkTLI265(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[265],(void **)(void *)&LnkLI265,3,first,ap);va_end(ap);return V1;} /* FIX-SLOT-ACCESSORS */
static object  LnkTLI264(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[264],(void **)(void *)&LnkLI264,1,first,ap);va_end(ap);return V1;} /* UPDATE-PV-TABLE-CACHE-INFO */
static void LnkT104(ptr) object *ptr;{ call_or_link_closure(VV[104],(void **)(void *)&Lnk104,(void **)(void *)&Lclptr104);} /* PCL WRAPPER slot WRITER */
static object  LnkTLI263(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[263],(void **)(void *)&LnkLI263,first,ap);va_end(ap);return V1;} /* MAKE-WRAPPER */
static void LnkT102(ptr) object *ptr;{ call_or_link_closure(VV[102],(void **)(void *)&Lnk102,(void **)(void *)&Lclptr102);} /* PCL SLOTS slot WRITER */
static void LnkT262(ptr) object *ptr;{ call_or_link_closure(VV[262],(void **)(void *)&Lnk262,(void **)(void *)&Lclptr262);} /* COMPUTE-SLOTS */
static void LnkT98(ptr) object *ptr;{ call_or_link_closure(VV[98],(void **)(void *)&Lnk98,(void **)(void *)&Lclptr98);} /* PCL CLASS-PRECEDENCE-LIST slot WRITER */
static void LnkT261(ptr) object *ptr;{ call_or_link_closure(VV[261],(void **)(void *)&Lnk261,(void **)(void *)&Lclptr261);} /* COMPUTE-CLASS-PRECEDENCE-LIST */
static void LnkT260(ptr) object *ptr;{ call_or_link_closure(VV[260],(void **)(void *)&Lnk260,(void **)(void *)&Lclptr260);} /* PCL DEFSTRUCT-CONSTRUCTOR slot WRITER */
static void LnkT259(ptr) object *ptr;{ call_or_link_closure(VV[259],(void **)(void *)&Lnk259,(void **)(void *)&Lclptr259);} /* PCL DEFSTRUCT-FORM slot WRITER */
static void LnkT258(ptr) object *ptr;{ call_or_link_closure(VV[258],(void **)(void *)&Lnk258,(void **)(void *)&Lclptr258);} /* PCL INTERNAL-WRITER-FUNCTION slot WRITER */
static void LnkT257(ptr) object *ptr;{ call_or_link_closure(VV[257],(void **)(void *)&Lnk257,(void **)(void *)&Lclptr257);} /* PCL INTERNAL-READER-FUNCTION slot WRITER */
static object  LnkTLI256(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[256],(void **)(void *)&LnkLI256,1,first,ap);va_end(ap);return V1;} /* GBOUNDP */
static void LnkT255(ptr) object *ptr;{ call_or_link_closure(VV[255],(void **)(void *)&Lnk255,(void **)(void *)&Lclptr255);} /* SLOT-DEFINITION-DEFSTRUCT-ACCESSOR-SYMBOL */
static object  LnkTLI254(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[254],(void **)(void *)&LnkLI254,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-TYPE-P */
static void LnkT253(ptr) object *ptr;{ call_or_link_closure(VV[253],(void **)(void *)&Lnk253,(void **)(void *)&Lclptr253);} /* PCL FROM-DEFCLASS-P slot READER */
static void LnkT252(ptr) object *ptr;{ call_or_link_closure(VV[252],(void **)(void *)&Lnk252,(void **)(void *)&Lclptr252);} /* MAP-DEPENDENTS */
static void LnkT251(ptr) object *ptr;{ call_or_link_closure(VV[251],(void **)(void *)&Lnk251,(void **)(void *)&Lclptr251);} /* CLASS-DIRECT-SLOTS */
static object  LnkTLI250(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[250],(void **)(void *)&LnkLI250,2,first,ap);va_end(ap);return V1;} /* REMOVE-SLOT-ACCESSORS */
static void LnkT249(ptr) object *ptr;{ call_or_link_closure(VV[249],(void **)(void *)&Lnk249,(void **)(void *)&Lclptr249);} /* CLASS-DIRECT-SUPERCLASSES */
static object  LnkTLI248(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[248],(void **)(void *)&LnkLI248,2,first,ap);va_end(ap);return V1;} /* REMOVE-DIRECT-SUBCLASSES */
static void LnkT247(ptr) object *ptr;{ call_or_link_closure(VV[247],(void **)(void *)&Lnk247,(void **)(void *)&Lclptr247);} /* PCL CLASS-EQ-SPECIALIZER slot WRITER */
static void LnkT246(){ call_or_link(VV[246],(void **)(void *)&Lnk246);} /* MAKE-INSTANCE CLASS-EQ-SPECIALIZER (:CLASS) NIL */
static object  LnkTLI245(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[245],(void **)(void *)&LnkLI245,2,first,ap);va_end(ap);return V1;} /* GET-KEY-ARG */
static object  LnkTLI244(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[244],(void **)(void *)&LnkLI244,2,first,ap);va_end(ap);return V1;} /* ADD-SLOT-ACCESSORS */
static object  LnkTLI243(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[243],(void **)(void *)&LnkLI243,2,first,ap);va_end(ap);return V1;} /* MAKE-CLASS-PREDICATE */
static object  LnkTLI242(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[242],(void **)(void *)&LnkLI242,2,first,ap);va_end(ap);return V1;} /* UPDATE-CLASS */
static object  LnkTLI241(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[241],(void **)(void *)&LnkLI241,2,first,ap);va_end(ap);return V1;} /* ADD-DIRECT-SUBCLASSES */
static void LnkT240(){ call_or_link(VV[240],(void **)(void *)&Lnk240);} /* MAKE-CLASS-PREDICATE-NAME */
static void LnkT239(ptr) object *ptr;{ call_or_link_closure(VV[239],(void **)(void *)&Lnk239,(void **)(void *)&Lclptr239);} /* CLASS-NAME */
static void LnkT238(ptr) object *ptr;{ call_or_link_closure(VV[238],(void **)(void *)&Lnk238,(void **)(void *)&Lclptr238);} /* PCL PREDICATE-NAME slot READER */
static void LnkT237(ptr) object *ptr;{ call_or_link_closure(VV[237],(void **)(void *)&Lnk237,(void **)(void *)&Lclptr237);} /* PCL PREDICATE-NAME slot WRITER */
static void LnkT236(ptr) object *ptr;{ call_or_link_closure(VV[236],(void **)(void *)&Lnk236,(void **)(void *)&Lclptr236);} /* SLOT-DEFINITION-NAME */
static void LnkT235(ptr) object *ptr;{ call_or_link_closure(VV[235],(void **)(void *)&Lnk235,(void **)(void *)&Lclptr235);} /* SLOT-DEFINITION-INITFUNCTION */
static void LnkT234(ptr) object *ptr;{ call_or_link_closure(VV[234],(void **)(void *)&Lnk234,(void **)(void *)&Lclptr234);} /* SLOT-DEFINITION-ALLOCATION */
static void LnkT233(ptr) object *ptr;{ call_or_link_closure(VV[233],(void **)(void *)&Lnk233,(void **)(void *)&Lclptr233);} /* PCL DIRECT-SLOTS slot READER */
static void LnkT232(ptr) object *ptr;{ call_or_link_closure(VV[232],(void **)(void *)&Lnk232,(void **)(void *)&Lclptr232);} /* PCL DIRECT-SLOTS slot WRITER */
static void LnkT231(){ call_or_link(VV[231],(void **)(void *)&Lnk231);} /* MAKE-DIRECT-SLOTD */
static void LnkT230(ptr) object *ptr;{ call_or_link_closure(VV[230],(void **)(void *)&Lnk230,(void **)(void *)&Lclptr230);} /* PCL DIRECT-SUPERCLASSES slot READER */
static void LnkT229(ptr) object *ptr;{ call_or_link_closure(VV[229],(void **)(void *)&Lnk229,(void **)(void *)&Lclptr229);} /* PCL DIRECT-SUPERCLASSES slot WRITER */
static void LnkT60(ptr) object *ptr;{ call_or_link_closure(VV[60],(void **)(void *)&Lnk60,(void **)(void *)&Lclptr60);} /* VALIDATE-SUPERCLASS */
static void LnkT228(ptr) object *ptr;{ call_or_link_closure(VV[228],(void **)(void *)&Lnk228,(void **)(void *)&Lclptr228);} /* FORWARD-REFERENCED-CLASS-P */
static void LnkT227(ptr) object *ptr;{ call_or_link_closure(VV[227],(void **)(void *)&Lnk227,(void **)(void *)&Lclptr227);} /* REINITIALIZE-INSTANCE */
static void LnkT226(ptr) object *ptr;{ call_or_link_closure(VV[226],(void **)(void *)&Lnk226,(void **)(void *)&Lclptr226);} /* CHANGE-CLASS */
static object  LnkTLI225(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[225],(void **)(void *)&LnkLI225,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI224(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[224],(void **)(void *)&LnkLI224,2,first,ap);va_end(ap);return V1;} /* SETF PCL FIND-CLASS */
static void LnkT223(ptr) object *ptr;{ call_or_link_closure(VV[223],(void **)(void *)&Lnk223,(void **)(void *)&Lclptr223);} /* MAKE-INSTANCE */
static void LnkT222(ptr) object *ptr;{ call_or_link_closure(VV[222],(void **)(void *)&Lnk222,(void **)(void *)&Lclptr222);} /* INFORM-TYPE-SYSTEM-ABOUT-CLASS */
static void LnkT221(ptr) object *ptr;{ call_or_link_closure(VV[221],(void **)(void *)&Lnk221,(void **)(void *)&Lclptr221);} /* CLASS-PROTOTYPE */
static void LnkT220(){ call_or_link(VV[220],(void **)(void *)&Lnk220);} /* ENSURE-CLASS-VALUES */
static void LnkT218(ptr) object *ptr;{ call_or_link_closure(VV[218],(void **)(void *)&Lnk218,(void **)(void *)&Lclptr218);} /* ENSURE-CLASS-USING-CLASS */
static object  LnkTLI219(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[219],(void **)(void *)&LnkLI219,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT217(){ call_or_link(VV[217],(void **)(void *)&Lnk217);} /* ENSURE-CLASS */
static void LnkT216(){ call_or_link(VV[216],(void **)(void *)&Lnk216);} /* LOAD-TRUENAME */
static object  LnkTLI215(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[215],(void **)(void *)&LnkLI215,1,first,ap);va_end(ap);return V1;} /* DO-STANDARD-DEFSETFS-FOR-DEFCLASS */
static void LnkT214(ptr) object *ptr;{ call_or_link_closure(VV[214],(void **)(void *)&Lnk214,(void **)(void *)&Lclptr214);} /* LISP TYPE slot WRITER */
static void LnkT213(ptr) object *ptr;{ call_or_link_closure(VV[213],(void **)(void *)&Lnk213,(void **)(void *)&Lclptr213);} /* SPECIALIZER-CLASS */
static object  LnkTLI212(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[212],(void **)(void *)&LnkLI212,1,first,ap);va_end(ap);return V1;} /* MAP-SPECIALIZERS */
static void LnkT211(){ call_or_link(VV[211],(void **)(void *)&Lnk211);} /* MAP-ALL-CLASSES */
static void LnkT210(ptr) object *ptr;{ call_or_link_closure(VV[210],(void **)(void *)&Lnk210,(void **)(void *)&Lclptr210);} /* SPECIALIZER-METHOD-TABLE */
static void LnkT209(ptr) object *ptr;{ call_or_link_closure(VV[209],(void **)(void *)&Lnk209,(void **)(void *)&Lclptr209);} /* SPECIALIZER-OBJECT */
static void LnkT208(ptr) object *ptr;{ call_or_link_closure(VV[208],(void **)(void *)&Lnk208,(void **)(void *)&Lclptr208);} /* METHOD-GENERIC-FUNCTION */
static void LnkT207(ptr) object *ptr;{ call_or_link_closure(VV[207],(void **)(void *)&Lnk207,(void **)(void *)&Lclptr207);} /* PCL DIRECT-METHODS slot READER */
static void LnkT95(){ call_or_link(VV[95],(void **)(void *)&Lnk95);} /* REMOVE */
static void LnkT206(ptr) object *ptr;{ call_or_link_closure(VV[206],(void **)(void *)&Lnk206,(void **)(void *)&Lclptr206);} /* PCL DIRECT-SUBCLASSES slot WRITER */
static void LnkT205(ptr) object *ptr;{ call_or_link_closure(VV[205],(void **)(void *)&Lnk205,(void **)(void *)&Lclptr205);} /* PCL DIRECT-SUBCLASSES slot READER */
static object  LnkTLI204(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[204],(void **)(void *)&LnkLI204,first,ap);va_end(ap);return V1;} /* ALLOCATE-STANDARD-INSTANCE */
static void LnkT203(ptr) object *ptr;{ call_or_link_closure(VV[203],(void **)(void *)&Lnk203,(void **)(void *)&Lclptr203);} /* PCL DEFSTRUCT-CONSTRUCTOR slot READER */
static void LnkT202(ptr) object *ptr;{ call_or_link_closure(VV[202],(void **)(void *)&Lnk202,(void **)(void *)&Lclptr202);} /* PCL PROTOTYPE slot WRITER */
static void LnkT201(ptr) object *ptr;{ call_or_link_closure(VV[201],(void **)(void *)&Lnk201,(void **)(void *)&Lclptr201);} /* ALLOCATE-INSTANCE */
static void LnkT200(ptr) object *ptr;{ call_or_link_closure(VV[200],(void **)(void *)&Lnk200,(void **)(void *)&Lclptr200);} /* PCL PROTOTYPE slot READER */
static void LnkT199(ptr) object *ptr;{ call_or_link_closure(VV[199],(void **)(void *)&Lnk199,(void **)(void *)&Lclptr199);} /* PCL WRAPPER slot READER */
static void LnkT198(ptr) object *ptr;{ call_or_link_closure(VV[198],(void **)(void *)&Lnk198,(void **)(void *)&Lclptr198);} /* PCL DOCUMENTATION slot WRITER */
static void LnkT197(ptr) object *ptr;{ call_or_link_closure(VV[197],(void **)(void *)&Lnk197,(void **)(void *)&Lclptr197);} /* PCL DOCUMENTATION slot READER */
static object  LnkTLI196(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[196],(void **)(void *)&LnkLI196,2,first,ap);va_end(ap);return V1;} /* PLIST-VALUE */
static void LnkT195(){ call_or_link(VV[195],(void **)(void *)&Lnk195);} /* DOCUMENTATION */
static object  LnkTLI194(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[194],(void **)(void *)&LnkLI194,3,first,ap);va_end(ap);return V1;} /* SETF PCL PLIST-VALUE */
static object  LnkTLI193(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[193],(void **)(void *)&LnkLI193,2,first,ap);va_end(ap);return V1;} /* GET-KEY-ARG1 */
static void LnkT192(ptr) object *ptr;{ call_or_link_closure(VV[192],(void **)(void *)&Lnk192,(void **)(void *)&Lclptr192);} /* SETF PCL SLOT-ACCESSOR-FUNCTION */
static void LnkT191(ptr) object *ptr;{ call_or_link_closure(VV[191],(void **)(void *)&Lnk191,(void **)(void *)&Lclptr191);} /* SETF PCL SLOT-ACCESSOR-STD-P */
static void LnkT190(){ call_or_link(VV[190],(void **)(void *)&Lnk190);} /* TURBO-CLOSURE */
static void LnkT189(){ call_or_link(VV[189],(void **)(void *)&Lnk189);} /* GET-OPTIMIZED-STD-ACCESSOR-METHOD-FUNCTION */
static void LnkT188(){ call_or_link(VV[188],(void **)(void *)&Lnk188);} /* GET-ACCESSOR-METHOD-FUNCTION */
static void LnkT187(ptr) object *ptr;{ call_or_link_closure(VV[187],(void **)(void *)&Lnk187,(void **)(void *)&Lclptr187);} /* SLOT-ACCESSOR-STD-P */
static object  LnkTLI186(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[186],(void **)(void *)&LnkLI186,2,first,ap);va_end(ap);return V1;} /* FIND-SLOT-DEFINITION */
static object  LnkTLI185(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[185],(void **)(void *)&LnkLI185,first,ap);va_end(ap);return V1;} /* INITIALIZE-INTERNAL-SLOT-GFS */
static void LnkT184(ptr) object *ptr;{ call_or_link_closure(VV[184],(void **)(void *)&Lnk184,(void **)(void *)&Lclptr184);} /* COMPUTE-SLOT-ACCESSOR-INFO */
static object  LnkTLI183(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[183],(void **)(void *)&LnkLI183,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static void LnkT182(ptr) object *ptr;{ call_or_link_closure(VV[182],(void **)(void *)&Lnk182,(void **)(void *)&Lclptr182);} /* LISP CLASS slot READER */
static void LnkT181(ptr) object *ptr;{ call_or_link_closure(VV[181],(void **)(void *)&Lnk181,(void **)(void *)&Lclptr181);} /* PCL NAME slot READER */
static void LnkT180(ptr) object *ptr;{ call_or_link_closure(VV[180],(void **)(void *)&Lnk180,(void **)(void *)&Lclptr180);} /* PCL ACCESSOR-FLAGS slot WRITER */
static void LnkT179(ptr) object *ptr;{ call_or_link_closure(VV[179],(void **)(void *)&Lnk179,(void **)(void *)&Lclptr179);} /* PCL ACCESSOR-FLAGS slot READER */
static object  LnkTLI178(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[178],(void **)(void *)&LnkLI178,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT177(){ call_or_link(VV[177],(void **)(void *)&Lnk177);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT176(ptr) object *ptr;{ call_or_link_closure(VV[176],(void **)(void *)&Lnk176,(void **)(void *)&Lclptr176);} /* SETF PCL SLOT-DEFINITION-BOUNDP-FUNCTION */
static void LnkT175(ptr) object *ptr;{ call_or_link_closure(VV[175],(void **)(void *)&Lnk175,(void **)(void *)&Lclptr175);} /* SETF PCL SLOT-DEFINITION-WRITER-FUNCTION */
static void LnkT174(ptr) object *ptr;{ call_or_link_closure(VV[174],(void **)(void *)&Lnk174,(void **)(void *)&Lclptr174);} /* SETF PCL SLOT-DEFINITION-READER-FUNCTION */
static void LnkT173(ptr) object *ptr;{ call_or_link_closure(VV[173],(void **)(void *)&Lnk173,(void **)(void *)&Lclptr173);} /* SLOT-DEFINITION-BOUNDP-FUNCTION */
static void LnkT171(ptr) object *ptr;{ call_or_link_closure(VV[171],(void **)(void *)&Lnk171,(void **)(void *)&Lclptr171);} /* SLOT-DEFINITION-WRITER-FUNCTION */
static void LnkT169(ptr) object *ptr;{ call_or_link_closure(VV[169],(void **)(void *)&Lnk169,(void **)(void *)&Lclptr169);} /* SLOT-DEFINITION-READER-FUNCTION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

