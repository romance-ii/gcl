
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
	base[4]= (V105);
	base[5]= VV[4];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk187)(Lclptr187);
	vs_top=sup;
	V129= vs_base[0];
	if(((V118))==(V129)){
	goto T256;}
	{object V130;
	V130= make_cons((V116),(V115));
	(VV[18]->s.s_dbind)= make_cons((V130),(VV[18]->s.s_dbind));
	{object V131 = (VV[18]->s.s_dbind);
	VMR6(V131)}}
	goto T256;
T256:;
	{object V132 = Cnil;
	VMR6(V132)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-DEFINITION-ALLOCATION (STRUCTURE-SLOT-DEFINITION))	*/

static object LI7(V136,V137,V138)

object V136;object V137;object V138;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V140 = VV[19];
	VMR7(V140)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :AFTER (DOCUMENTATION-MIXIN T))	*/

static object LI8(V146,V147,V148,V149,V150)

object V146;object V147;object V148;object V149;object V150;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V152;
	object V154;
	V152= (*(LnkLI193))(VV[20],V150);
	if(!(type_of((V152))==t_cons)){
	goto T273;}
	V154= CMPcar((V152));
	goto T271;
	goto T273;
T273:;
	V154= Cnil;
	goto T271;
T271:;
	if((V152)==Cnil){
	goto T277;}
	{object V157 = (*(LnkLI194))((V154),V148,VV[21]);
	VMR8(V157)}
	goto T277;
T277:;
	{object V158 = Cnil;
	VMR8(V158)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD DOCUMENTATION (T))	*/

static object LI9(V163,V164,V165,V166)

object V163;object V164;object V165;object V166;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{register object V167;
	object V168;
	V167= (V166);
	if(((V167))==Cnil){
	goto T284;}
	{object V169;
	V169= CMPcar((V167));
	V167= CMPcdr((V167));
	V168= (V169);
	goto T282;}
	goto T284;
T284:;
	V168= Cnil;
	goto T282;
T282:;
	base[1]= (V165);
	base[2]= (V168);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk195)();
	vs_top=sup;
	{object V170 = vs_base[0];
	VMR9(V170)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD (SETF DOCUMENTATION) (T T))	*/

static object LI10(V176,V177,V178,V179,V180)

object V176;object V177;object V178;object V179;object V180;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{register object V181;
	object V182;
	V181= (V180);
	if(((V181))==Cnil){
	goto T297;}
	{object V183;
	V183= CMPcar((V181));
	V181= CMPcdr((V181));
	V182= (V183);
	goto T295;}
	goto T297;
T297:;
	V182= Cnil;
	goto T295;
T295:;
	base[1]= VV[22];
	base[2]= (V179);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	{object V184 = vs_base[0];
	VMR10(V184)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD DOCUMENTATION (DOCUMENTATION-MIXIN))	*/

static object LI11(V189,V190,V191,V192)

object V189;object V190;object V191;object V192;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{register object V193;
	object V194;
	V193= (V192);
	if(((V193))==Cnil){
	goto T310;}
	{object V195;
	V195= CMPcar((V193));
	V193= CMPcdr((V193));
	V194= (V195);
	goto T308;}
	goto T310;
T310:;
	V194= Cnil;
	goto T308;
T308:;
	{object V196 = (*(LnkLI196))((V191),VV[21]);
	VMR11(V196)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD (SETF DOCUMENTATION) (T DOCUMENTATION-MIXIN))	*/

static object LI12(V202,V203,V204,V205,V206)

object V202;object V203;object V204;object V205;object V206;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{register object V207;
	object V208;
	V207= (V206);
	if(((V207))==Cnil){
	goto T321;}
	{object V209;
	V209= CMPcar((V207));
	V207= CMPcdr((V207));
	V208= (V209);
	goto T319;}
	goto T321;
T321:;
	V208= Cnil;
	goto T319;
T319:;
	{object V212 = (*(LnkLI194))((V204),V205,VV[21]);
	VMR12(V212)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD DOCUMENTATION (STANDARD-SLOT-DEFINITION))	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V213;
	object V214;
	register object V215;
	object V216;
	check_arg(4);
	V213=(base[0]);
	V214=(base[1]);
	V215=(base[2]);
	V216=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V217;
	object V218;
	V217= (V216);
	if(((V217))==Cnil){
	goto T332;}
	{object V219;
	V219= CMPcar((V217));
	V217= CMPcdr((V217));
	V218= (V219);
	goto T330;}
	goto T332;
T332:;
	V218= Cnil;
	goto T330;
T330:;
	{object V220;
	object V221;
	V220= CMPcar((V213));
	V221= CMPcdr((V213));
	{object V222;
	if(type_of(V215)==t_structure){
	goto T345;}
	goto T343;
	goto T345;
T345:;
	if(!(((V215)->str.str_def)==(VV[23]))){
	goto T343;}
	V222= STREF(object,(V215),4);
	goto T341;
	goto T343;
T343:;{object V224;
	V224= (VV[2]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V215);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V225= vs_base[0];
	if(!((V224)==(CMPcar(V225)))){
	goto T348;}}
	V222= CMPcar(((V215))->cc.cc_turbo[12]);
	goto T341;
	goto T348;
T348:;
	V222= Cnil;
	goto T341;
T341:;
	{register object V226;
	V226= ((V220))->v.v_self[1];
	if(!(type_of(V226)==t_fixnum)){
	goto T358;}
	V226= ((V222))->v.v_self[fix((V226))];
	goto T356;
	goto T358;
T358:;
	V226= VV[3];
	goto T356;
T356:;
	if(!(((V226))==(VV[3]))){
	goto T361;}
	base[5]= (V215);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk197)(Lclptr197);
	return;
	goto T361;
T361:;
	base[5]= (V226);
	vs_top=(vs_base=base+5)+1;
	return;}}}}
	}
}
/*	function definition for (FAST-METHOD (SETF DOCUMENTATION) (T STANDARD-SLOT-DEFINITION))	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V228;
	object V229;
	object V230;
	register object V231;
	object V232;
	check_arg(5);
	V228=(base[0]);
	V229=(base[1]);
	V230=(base[2]);
	V231=(base[3]);
	V232=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V233;
	object V234;
	V233= (V232);
	if(((V233))==Cnil){
	goto T369;}
	{object V235;
	V235= CMPcar((V233));
	V233= CMPcdr((V233));
	V234= (V235);
	goto T367;}
	goto T369;
T369:;
	V234= Cnil;
	goto T367;
T367:;
	{object V236;
	object V237;
	V236= CMPcar((V228));
	V237= CMPcdr((V228));
	{object V238;
	if(type_of(V231)==t_structure){
	goto T382;}
	goto T380;
	goto T382;
T382:;
	if(!(((V231)->str.str_def)==(VV[24]))){
	goto T380;}
	V238= STREF(object,(V231),4);
	goto T378;
	goto T380;
T380:;{object V240;
	V240= (VV[2]->s.s_dbind);
	base[6]= small_fixnum(14);
	base[7]= (V231);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V241= vs_base[0];
	if(!((V240)==(CMPcar(V241)))){
	goto T385;}}
	V238= CMPcar(((V231))->cc.cc_turbo[12]);
	goto T378;
	goto T385;
T385:;
	V238= Cnil;
	goto T378;
T378:;
	{object V243;
	V243= ((V236))->v.v_self[1];
	if(!(type_of(V243)==t_fixnum)){
	goto T393;}
	base[6]= ((V238))->v.v_self[fix((V243))]= (V230);
	vs_top=(vs_base=base+6)+1;
	return;
	goto T393;
T393:;
	base[6]= V230;
	base[7]= (V231);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk198)(Lclptr198);
	return;}}}}
	}
}
/*	local entry for function (FAST-METHOD CLASS-FINALIZED-P (PCL-CLASS))	*/

static object LI15(V248,V249,V250)

object V248;object V249;register object V250;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V252;
	object V253;
	V252= CMPcar((V248));
	V253= CMPcdr((V248));
	{object V254;
	if(type_of(V250)==t_structure){
	goto T407;}
	goto T405;
	goto T407;
T407:;
	if(!(((V250)->str.str_def)==(VV[25]))){
	goto T405;}
	V254= STREF(object,(V250),4);
	goto T403;
	goto T405;
T405:;{object V256;
	V256= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V250);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V257= vs_base[0];
	if(!((V256)==(CMPcar(V257)))){
	goto T410;}}
	V254= CMPcar(((V250))->cc.cc_turbo[12]);
	goto T403;
	goto T410;
T410:;
	V254= Cnil;
	goto T403;
T403:;
	{register object V260;
	V260= ((V252))->v.v_self[1];
	if(!(type_of(V260)==t_fixnum)){
	goto T422;}
	V260= ((V254))->v.v_self[fix((V260))];
	goto T420;
	goto T422;
T422:;
	V260= VV[3];
	goto T420;
T420:;
	if(!(((V260))==(VV[3]))){
	goto T425;}
	base[0]= (V250);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V259= vs_base[0];
	goto T417;
	goto T425;
T425:;
	V259= (V260);}
	goto T417;
T417:;
	{object V262 = ((((V259)==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR15(V262)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD CLASS-PROTOTYPE (STD-CLASS))	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V263;
	object V264;
	register object V265;
	check_arg(3);
	V263=(base[0]);
	V264=(base[1]);
	V265=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V267;
	object V268;
	V267= CMPcar((V263));
	V268= CMPcdr((V263));
	{object V269;
	if(type_of(V265)==t_structure){
	goto T438;}
	goto T436;
	goto T438;
T438:;
	if(!(((V265)->str.str_def)==(VV[26]))){
	goto T436;}
	V269= STREF(object,(V265),4);
	goto T434;
	goto T436;
T436:;{object V271;
	V271= (VV[2]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V265);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V272= vs_base[0];
	if(!((V271)==(CMPcar(V272)))){
	goto T441;}}
	V269= CMPcar(((V265))->cc.cc_turbo[12]);
	goto T434;
	goto T441;
T441:;
	V269= Cnil;
	goto T434;
T434:;
	{object V274;
	{register object V275;
	V275= ((V267))->v.v_self[1];
	if(!(type_of(V275)==t_fixnum)){
	goto T453;}
	V275= ((V269))->v.v_self[fix((V275))];
	goto T451;
	goto T453;
T453:;
	V275= VV[3];
	goto T451;
T451:;
	if(!(((V275))==(VV[3]))){
	goto T456;}
	base[3]= (V265);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk200)(Lclptr200);
	vs_top=sup;
	V274= vs_base[0];
	goto T448;
	goto T456;
T456:;
	V274= (V275);}
	goto T448;
T448:;
	if(((V274))==Cnil){
	goto T460;}
	base[3]= (V274);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T460;
T460:;
	{object V277;
	base[3]= (V265);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk201)(Lclptr201);
	vs_top=sup;
	V277= vs_base[0];
	{object V278;
	V278= ((V267))->v.v_self[1];
	if(!(type_of(V278)==t_fixnum)){
	goto T466;}
	base[3]= ((V269))->v.v_self[fix((V278))]= ((V277));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T466;
T466:;
	base[3]= (V277);
	base[4]= (V265);
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
	{object V280;
	object V281;
	register object V282;
	check_arg(3);
	V280=(base[0]);
	V281=(base[1]);
	V282=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V284;
	object V285;
	V284= CMPcar((V280));
	V285= CMPcdr((V280));
	{register object V286;
	if(type_of(V282)==t_structure){
	goto T480;}
	goto T478;
	goto T480;
T480:;
	if(!(((V282)->str.str_def)==(VV[27]))){
	goto T478;}
	V286= STREF(object,(V282),4);
	goto T476;
	goto T478;
T478:;{object V288;
	V288= (VV[2]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V282);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V289= vs_base[0];
	if(!((V288)==(CMPcar(V289)))){
	goto T483;}}
	V286= CMPcar(((V282))->cc.cc_turbo[12]);
	goto T476;
	goto T483;
T483:;
	V286= Cnil;
	goto T476;
T476:;
	{object V291;
	{register object V292;
	V292= ((V284))->v.v_self[2];
	if(!(type_of(V292)==t_fixnum)){
	goto T495;}
	V292= ((V286))->v.v_self[fix((V292))];
	goto T493;
	goto T495;
T495:;
	V292= VV[3];
	goto T493;
T493:;
	if(!(((V292))==(VV[3]))){
	goto T498;}
	base[3]= (V282);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk200)(Lclptr200);
	vs_top=sup;
	V291= vs_base[0];
	goto T490;
	goto T498;
T498:;
	V291= (V292);}
	goto T490;
T490:;
	if(((V291))==Cnil){
	goto T502;}
	base[3]= (V291);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T502;
T502:;
	{object V294;
	{register object V295;
	V295= ((V284))->v.v_self[1];
	if(!(type_of(V295)==t_fixnum)){
	goto T512;}
	V295= ((V286))->v.v_self[fix((V295))];
	goto T510;
	goto T512;
T512:;
	V295= VV[3];
	goto T510;
T510:;
	if(!(((V295))==(VV[3]))){
	goto T515;}
	base[3]= (V282);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk203)(Lclptr203);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T506;}
	goto T507;
	goto T515;
T515:;
	if(((V295))==Cnil){
	goto T506;}}
	goto T507;
T507:;
	base[3]= (V282);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk201)(Lclptr201);
	vs_top=sup;
	V294= vs_base[0];
	goto T504;
	goto T506;
T506:;
	{register object V298;
	V298= ((V284))->v.v_self[3];
	if(!(type_of(V298)==t_fixnum)){
	goto T524;}
	V298= ((V286))->v.v_self[fix((V298))];
	goto T522;
	goto T524;
T524:;
	V298= VV[3];
	goto T522;
T522:;
	if(!(((V298))==(VV[3]))){
	goto T527;}
	base[3]= (V282);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V297= vs_base[0];
	goto T519;
	goto T527;
T527:;
	V297= (V298);}
	goto T519;
T519:;
	V294= (VFUN_NARGS=1,(*(LnkLI204))(V297));
	goto T504;
T504:;
	{object V300;
	V300= ((V284))->v.v_self[2];
	if(!(type_of(V300)==t_fixnum)){
	goto T532;}
	base[3]= ((V286))->v.v_self[fix((V300))]= ((V294));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T532;
T532:;
	base[3]= (V294);
	base[4]= (V282);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk202)(Lclptr202);
	return;}}}}}
	}
}
/*	local entry for function (FAST-METHOD CLASS-DIRECT-DEFAULT-INITARGS (SLOT-CLASS))	*/

static object LI18(V305,V306,V307)

object V305;object V306;object V307;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V309 = (*(LnkLI196))((V307),VV[28]);
	VMR18(V309)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-DEFAULT-INITARGS (SLOT-CLASS))	*/

static object LI19(V313,V314,V315)

object V313;object V314;object V315;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V317 = (*(LnkLI196))((V315),VV[29]);
	VMR19(V317)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-CONSTRUCTORS (SLOT-CLASS))	*/

static object LI20(V321,V322,V323)

object V321;object V322;object V323;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V325 = (*(LnkLI196))((V323),VV[30]);
	VMR20(V325)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-SLOT-CELLS (STD-CLASS))	*/

static object LI21(V329,V330,V331)

object V329;object V330;object V331;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{object V333 = (*(LnkLI196))((V331),VV[31]);
	VMR21(V333)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD ADD-DIRECT-SUBCLASS (CLASS CLASS))	*/

static object LI22(V338,V339,V340,V341)

object V338;object V339;register object V340;object V341;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{object V343;
	object V344;
	V343= CMPcar((V338));
	V344= CMPcdr((V338));
	{object V345;
	if(type_of(V340)==t_structure){
	goto T558;}
	goto T556;
	goto T558;
T558:;
	if(!(((V340)->str.str_def)==(VV[32]))){
	goto T556;}
	V345= STREF(object,(V340),4);
	goto T554;
	goto T556;
T556:;{object V347;
	V347= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V340);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V348= vs_base[0];
	if(!((V347)==(CMPcar(V348)))){
	goto T561;}}
	V345= CMPcar(((V340))->cc.cc_turbo[12]);
	goto T554;
	goto T561;
T561:;
	V345= Cnil;
	goto T554;
T554:;
	{object V351;
	base[0]= V341;
	{register object V352;
	V352= ((V343))->v.v_self[1];
	if(!(type_of(V352)==t_fixnum)){
	goto T577;}
	V352= ((V345))->v.v_self[fix((V352))];
	goto T575;
	goto T577;
T577:;
	V352= VV[3];
	goto T575;
T575:;
	if(!(((V352))==(VV[3]))){
	goto T580;}
	base[2]= (V340);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk205)(Lclptr205);
	vs_top=sup;
	base[1]= vs_base[0];
	goto T572;
	goto T580;
T580:;
	base[1]= (V352);}
	goto T572;
T572:;
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	V351= vs_base[0];
	{object V354;
	V354= ((V343))->v.v_self[1];
	if(!(type_of(V354)==t_fixnum)){
	goto T585;}
	(void)(((V345))->v.v_self[fix((V354))]= ((V351)));
	goto T569;
	goto T585;
T585:;
	base[0]= (V351);
	base[1]= (V340);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk206)(Lclptr206);
	vs_top=sup;}}
	goto T569;
T569:;
	{object V356 = (V341);
	VMR22(V356)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-DIRECT-SUBCLASS (CLASS CLASS))	*/

static object LI23(V361,V362,V363,V364)

object V361;object V362;register object V363;object V364;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	{object V366;
	object V367;
	V366= CMPcar((V361));
	V367= CMPcdr((V361));
	{object V368;
	if(type_of(V363)==t_structure){
	goto T599;}
	goto T597;
	goto T599;
T599:;
	if(!(((V363)->str.str_def)==(VV[33]))){
	goto T597;}
	V368= STREF(object,(V363),4);
	goto T595;
	goto T597;
T597:;{object V370;
	V370= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V363);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V371= vs_base[0];
	if(!((V370)==(CMPcar(V371)))){
	goto T602;}}
	V368= CMPcar(((V363))->cc.cc_turbo[12]);
	goto T595;
	goto T602;
T602:;
	V368= Cnil;
	goto T595;
T595:;
	{object V373;
	base[0]= (V364);
	{register object V374;
	V374= ((V366))->v.v_self[1];
	if(!(type_of(V374)==t_fixnum)){
	goto T618;}
	V374= ((V368))->v.v_self[fix((V374))];
	goto T616;
	goto T618;
T618:;
	V374= VV[3];
	goto T616;
T616:;
	if(!(((V374))==(VV[3]))){
	goto T621;}
	base[2]= (V363);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk205)(Lclptr205);
	vs_top=sup;
	base[1]= vs_base[0];
	goto T613;
	goto T621;
T621:;
	base[1]= (V374);}
	goto T613;
T613:;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk95)();
	vs_top=sup;
	V373= vs_base[0];
	{object V376;
	V376= ((V366))->v.v_self[1];
	if(!(type_of(V376)==t_fixnum)){
	goto T626;}
	(void)(((V368))->v.v_self[fix((V376))]= ((V373)));
	goto T610;
	goto T626;
T626:;
	base[0]= (V373);
	base[1]= (V363);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk206)(Lclptr206);
	vs_top=sup;}}
	goto T610;
T610:;
	{object V378 = (V364);
	VMR23(V378)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD ADD-DIRECT-METHOD (CLASS METHOD))	*/

static object LI24(V383,V384,V385,V386)

object V383;object V384;register object V385;object V386;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{register object V388;
	object V389;
	V388= CMPcar((V383));
	V389= CMPcdr((V383));
	{object V390;
	if(type_of(V385)==t_structure){
	goto T640;}
	goto T638;
	goto T640;
T640:;
	if(!(((V385)->str.str_def)==(VV[34]))){
	goto T638;}
	V390= STREF(object,(V385),4);
	goto T636;
	goto T638;
T638:;{object V392;
	V392= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V385);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V393= vs_base[0];
	if(!((V392)==(CMPcar(V393)))){
	goto T643;}}
	V390= CMPcar(((V385))->cc.cc_turbo[12]);
	goto T636;
	goto T643;
T643:;
	V390= Cnil;
	goto T636;
T636:;
	{object V395;
	object V396;
	{register object V397;
	V397= ((V388))->v.v_self[1];
	if(!(type_of(V397)==t_fixnum)){
	goto T658;}
	V397= ((V390))->v.v_self[fix((V397))];
	goto T656;
	goto T658;
T658:;
	V397= VV[3];
	goto T656;
T656:;
	if(!(((V397))==(VV[3]))){
	goto T661;}
	base[2]= (V385);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V395= vs_base[0];
	goto T653;
	goto T661;
T661:;
	V395= (V397);}
	goto T653;
T653:;
	base[2]= (V386);
	{register object V400;
	V400= ((V388))->v.v_self[1];
	if(!(type_of(V400)==t_fixnum)){
	goto T672;}
	V400= ((V390))->v.v_self[fix((V400))];
	goto T670;
	goto T672;
T672:;
	V400= VV[3];
	goto T670;
T670:;
	if(!(((V400))==(VV[3]))){
	goto T675;}
	base[4]= (V385);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V399= vs_base[0];
	goto T667;
	goto T675;
T675:;
	V399= (V400);}
	goto T667;
T667:;
	base[3]= CMPcar(V399);
	vs_top=(vs_base=base+2)+2;
	Ladjoin();
	vs_top=sup;
	V396= vs_base[0];
	((V395))->c.c_car = (V396);}
	{object V402;
	{register object V404;
	V404= ((V388))->v.v_self[1];
	if(!(type_of(V404)==t_fixnum)){
	goto T684;}
	V404= ((V390))->v.v_self[fix((V404))];
	goto T682;
	goto T684;
T684:;
	V404= VV[3];
	goto T682;
T682:;
	if(!(((V404))==(VV[3]))){
	goto T687;}
	base[1]= (V385);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V402= vs_base[0];
	goto T679;
	goto T687;
T687:;
	V402= (V404);}
	goto T679;
T679:;
	((V402))->c.c_cdr = Cnil;}
	{object V406 = (V386);
	VMR24(V406)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-DIRECT-METHOD (CLASS METHOD))	*/

static object LI25(V411,V412,V413,V414)

object V411;object V412;register object V413;object V414;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{register object V416;
	object V417;
	V416= CMPcar((V411));
	V417= CMPcdr((V411));
	{object V418;
	if(type_of(V413)==t_structure){
	goto T701;}
	goto T699;
	goto T701;
T701:;
	if(!(((V413)->str.str_def)==(VV[35]))){
	goto T699;}
	V418= STREF(object,(V413),4);
	goto T697;
	goto T699;
T699:;{object V420;
	V420= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V413);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V421= vs_base[0];
	if(!((V420)==(CMPcar(V421)))){
	goto T704;}}
	V418= CMPcar(((V413))->cc.cc_turbo[12]);
	goto T697;
	goto T704;
T704:;
	V418= Cnil;
	goto T697;
T697:;
	{object V423;
	object V424;
	{register object V425;
	V425= ((V416))->v.v_self[1];
	if(!(type_of(V425)==t_fixnum)){
	goto T719;}
	V425= ((V418))->v.v_self[fix((V425))];
	goto T717;
	goto T719;
T719:;
	V425= VV[3];
	goto T717;
T717:;
	if(!(((V425))==(VV[3]))){
	goto T722;}
	base[2]= (V413);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V423= vs_base[0];
	goto T714;
	goto T722;
T722:;
	V423= (V425);}
	goto T714;
T714:;
	base[2]= (V414);
	{register object V428;
	V428= ((V416))->v.v_self[1];
	if(!(type_of(V428)==t_fixnum)){
	goto T733;}
	V428= ((V418))->v.v_self[fix((V428))];
	goto T731;
	goto T733;
T733:;
	V428= VV[3];
	goto T731;
T731:;
	if(!(((V428))==(VV[3]))){
	goto T736;}
	base[4]= (V413);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V427= vs_base[0];
	goto T728;
	goto T736;
T736:;
	V427= (V428);}
	goto T728;
T728:;
	base[3]= CMPcar(V427);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk95)();
	vs_top=sup;
	V424= vs_base[0];
	((V423))->c.c_car = (V424);}
	{object V430;
	{register object V432;
	V432= ((V416))->v.v_self[1];
	if(!(type_of(V432)==t_fixnum)){
	goto T745;}
	V432= ((V418))->v.v_self[fix((V432))];
	goto T743;
	goto T745;
T745:;
	V432= VV[3];
	goto T743;
T743:;
	if(!(((V432))==(VV[3]))){
	goto T748;}
	base[1]= (V413);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V430= vs_base[0];
	goto T740;
	goto T748;
T748:;
	V430= (V432);}
	goto T740;
T740:;
	((V430))->c.c_cdr = Cnil;}
	{object V434 = (V414);
	VMR25(V434)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-DIRECT-METHODS (CLASS))	*/

static object LI26(V438,V439,V440)

object V438;object V439;register object V440;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V442;
	object V443;
	V442= CMPcar((V438));
	V443= CMPcdr((V438));
	{object V444;
	if(type_of(V440)==t_structure){
	goto T762;}
	goto T760;
	goto T762;
T762:;
	if(!(((V440)->str.str_def)==(VV[36]))){
	goto T760;}
	V444= STREF(object,(V440),4);
	goto T758;
	goto T760;
T760:;{object V446;
	V446= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V440);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V447= vs_base[0];
	if(!((V446)==(CMPcar(V447)))){
	goto T765;}}
	V444= CMPcar(((V440))->cc.cc_turbo[12]);
	goto T758;
	goto T765;
T765:;
	V444= Cnil;
	goto T758;
T758:;
	{register object V450;
	V450= ((V442))->v.v_self[1];
	if(!(type_of(V450)==t_fixnum)){
	goto T777;}
	V450= ((V444))->v.v_self[fix((V450))];
	goto T775;
	goto T777;
T777:;
	V450= VV[3];
	goto T775;
T775:;
	if(!(((V450))==(VV[3]))){
	goto T780;}
	base[0]= (V440);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V449= vs_base[0];
	goto T772;
	goto T780;
T780:;
	V449= (V450);}
	goto T772;
T772:;
	{object V452 = CMPcar(V449);
	VMR26(V452)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-DIRECT-GENERIC-FUNCTIONS (CLASS))	*/

static object LI27(V456,V457,V458)

object V456;object V457;register object V458;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V460;
	object V461;
	V460= CMPcar((V456));
	V461= CMPcdr((V456));
	{object V462;
	if(type_of(V458)==t_structure){
	goto T793;}
	goto T791;
	goto T793;
T793:;
	if(!(((V458)->str.str_def)==(VV[37]))){
	goto T791;}
	V462= STREF(object,(V458),4);
	goto T789;
	goto T791;
T791:;{object V464;
	V464= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V458);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V465= vs_base[0];
	if(!((V464)==(CMPcar(V465)))){
	goto T796;}}
	V462= CMPcar(((V458))->cc.cc_turbo[12]);
	goto T789;
	goto T796;
T796:;
	V462= Cnil;
	goto T789;
T789:;
	{object V467;
	{object V469;
	V469= ((V460))->v.v_self[1];
	if(!(type_of(V469)==t_fixnum)){
	goto T809;}
	V469= ((V462))->v.v_self[fix((V469))];
	goto T807;
	goto T809;
T809:;
	V469= VV[3];
	goto T807;
T807:;
	if(!(((V469))==(VV[3]))){
	goto T812;}
	base[0]= (V458);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V468= vs_base[0];
	goto T804;
	goto T812;
T812:;
	V468= (V469);}
	goto T804;
T804:;
	V467= CMPcdr(V468);
	if(((V467))==Cnil){
	goto T816;}
	{object V471 = (V467);
	VMR27(V471)}
	goto T816;
T816:;
	{object V472;
	object V473;
	{object V474;
	V474= ((V460))->v.v_self[1];
	if(!(type_of(V474)==t_fixnum)){
	goto T823;}
	V474= ((V462))->v.v_self[fix((V474))];
	goto T821;
	goto T823;
T823:;
	V474= VV[3];
	goto T821;
T821:;
	if(!(((V474))==(VV[3]))){
	goto T826;}
	base[2]= (V458);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V472= vs_base[0];
	goto T818;
	goto T826;
T826:;
	V472= (V474);}
	goto T818;
T818:;
	{register object V476;
	register object V477;
	V476= Cnil;
	V477= Cnil;
	{register object V478;
	register object V479;
	{object V481;
	V481= ((V460))->v.v_self[1];
	if(!(type_of(V481)==t_fixnum)){
	goto T839;}
	V481= ((V462))->v.v_self[fix((V481))];
	goto T837;
	goto T839;
T839:;
	V481= VV[3];
	goto T837;
T837:;
	if(!(((V481))==(VV[3]))){
	goto T842;}
	base[4]= (V458);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk207)(Lclptr207);
	vs_top=sup;
	V480= vs_base[0];
	goto T834;
	goto T842;
T842:;
	V480= (V481);}
	goto T834;
T834:;
	V478= CMPcar(V480);
	V479= CMPcar((V478));
	goto T847;
T847:;
	if(!(((V478))==Cnil)){
	goto T848;}
	goto T832;
	goto T848;
T848:;
	{register object V483;
	base[4]= (V479);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk208)(Lclptr208);
	vs_top=sup;
	V483= vs_base[0];
	if(((V476))!=Cnil){
	goto T856;}
	V477= make_cons((V483),Cnil);
	V476= (V477);
	goto T852;
	goto T856;
T856:;
	{register object x= (V483),V484= (V476);
	while(V484!=Cnil)
	if(x==(V484->c.c_car)){
	goto T852;
	}else V484=V484->c.c_cdr;}
	V486= make_cons((V483),Cnil);
	((V477))->c.c_cdr = /* INLINE-ARGS */V486;
	V485= (V477);
	V477= CMPcdr(V485);}
	goto T852;
T852:;
	V478= CMPcdr((V478));
	V479= CMPcar((V478));
	goto T847;}
	goto T832;
T832:;
	V473= (V476);}
	((V472))->c.c_cdr = (V473);
	{object V487 = (V473);
	VMR27(V487)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-METHOD-TABLE (EQL-SPECIALIZER))	*/

static object LI28(V491,V492,V493)

object V491;object V492;object V493;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{object V495 = (VV[38]->s.s_dbind);
	VMR28(V495)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-METHOD-TABLE (CLASS-EQ-SPECIALIZER))	*/

static object LI29(V499,V500,V501)

object V499;object V500;object V501;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{object V503 = (VV[39]->s.s_dbind);
	VMR29(V503)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD ADD-DIRECT-METHOD (SPECIALIZER-WITH-OBJECT METHOD))	*/

static object LI30(V508,V509,V510,V511)

object V508;object V509;object V510;object V511;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{object V513;
	object V514;
	register object V515;
	base[3]= (V510);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk209)(Lclptr209);
	vs_top=sup;
	V513= vs_base[0];
	base[3]= (V510);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	V514= vs_base[0];
	base[3]= (V513);
	base[4]= (V514);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V515= vs_base[0];
	if(((V515))!=Cnil){
	goto T887;}
	{object V518;
	V518= make_cons(Cnil,Cnil);
	base[4]= V513;
	base[5]= V514;
	base[6]= (V518);
	vs_top=(vs_base=base+4)+3;
	siLhash_set();
	vs_top=sup;
	V515= vs_base[0];}
	goto T887;
T887:;
	{object V520;
	base[4]= (V511);
	base[5]= CMPcar((V515));
	vs_top=(vs_base=base+4)+2;
	Ladjoin();
	vs_top=sup;
	V520= vs_base[0];
	(V515)->c.c_car = (V520);}
	(V515)->c.c_cdr = Cnil;
	{object V523 = (V511);
	VMR30(V523)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-DIRECT-METHOD (SPECIALIZER-WITH-OBJECT METHOD))	*/

static object LI31(V528,V529,V530,V531)

object V528;object V529;object V530;object V531;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{object V533;
	register object V534;
	base[2]= (V530);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk209)(Lclptr209);
	vs_top=sup;
	V533= vs_base[0];
	base[2]= (V533);
	base[4]= (V530);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V534= vs_base[0];
	if(((V534))==Cnil){
	goto T912;}
	{object V536;
	base[3]= (V531);
	base[4]= CMPcar((V534));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk95)();
	vs_top=sup;
	V536= vs_base[0];
	(V534)->c.c_car = (V536);}
	(V534)->c.c_cdr = Cnil;
	goto T912;
T912:;
	{object V539 = (V531);
	VMR31(V539)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-DIRECT-METHODS (SPECIALIZER-WITH-OBJECT))	*/

static object LI32(V543,V544,V545)

object V543;object V544;object V545;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	base[1]= (V545);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk209)(Lclptr209);
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= (V545);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V547= vs_base[0];
	{object V548 = CMPcar(V547);
	VMR32(V548)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-DIRECT-GENERIC-FUNCTIONS (SPECIALIZER-WITH-OBJECT))	*/

static object LI33(V552,V553,V554)

object V552;object V553;object V554;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{object V556;
	register object V557;
	base[2]= (V554);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk209)(Lclptr209);
	vs_top=sup;
	V556= vs_base[0];
	base[2]= (V556);
	base[4]= (V554);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk210)(Lclptr210);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V557= vs_base[0];
	if(((V557))==Cnil){
	goto T939;}{object V558;
	V558= CMPcdr((V557));
	if(V558==Cnil)goto T941;
	{object V559 = V558;
	VMR33(V559)}
	goto T941;
T941:;}
	{object V561;
	{register object V562;
	register object V563;
	V562= Cnil;
	V563= Cnil;
	{register object V564;
	register object V565;
	V564= CMPcar((V557));
	V565= CMPcar((V564));
	goto T950;
T950:;
	if(!(((V564))==Cnil)){
	goto T951;}
	goto T946;
	goto T951;
T951:;
	{register object V566;
	base[5]= (V565);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk208)(Lclptr208);
	vs_top=sup;
	V566= vs_base[0];
	if(((V562))!=Cnil){
	goto T959;}
	V563= make_cons((V566),Cnil);
	V562= (V563);
	goto T955;
	goto T959;
T959:;
	{register object x= (V566),V567= (V562);
	while(V567!=Cnil)
	if(x==(V567->c.c_car)){
	goto T955;
	}else V567=V567->c.c_cdr;}
	V569= make_cons((V566),Cnil);
	((V563))->c.c_cdr = /* INLINE-ARGS */V569;
	V568= (V563);
	V563= CMPcdr(V568);}
	goto T955;
T955:;
	V564= CMPcdr((V564));
	V565= CMPcar((V564));
	goto T950;}
	goto T946;
T946:;
	V561= (V562);}
	(V557)->c.c_cdr = (V561);
	{object V570 = (V561);
	VMR33(V570)}}
	goto T939;
T939:;
	{object V571 = Cnil;
	VMR33(V571)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAP-SPECIALIZERS	*/

static object LI35(V573)

object V573;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	base[0]=MMcons((V573),Cnil);
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
	{object V574 = Cnil;
	VMR34(V574)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAP-ALL-GENERIC-FUNCTIONS	*/

static object LI37(V576)

object V576;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	base[0]=MMcons((V576),Cnil);
	base[2]= VV[8];
	base[3]= VV[9];
	vs_top=(vs_base=base+2)+2;
	Lmake_hash_table();
	vs_top=sup;
	base[1]= vs_base[0];
	base[1]=MMcons(base[1],base[0]);
	V577= 
	make_cclosure_new(LC129,Cnil,base[1],Cdata);
	(void)((*(LnkLI212))(V577));
	{object V578 = Cnil;
	VMR35(V578)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :AFTER (CLASS-EQ-SPECIALIZER T))	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{object V579;
	object V580;
	register object V581;
	object V582;
	object V583;
	check_arg(5);
	V579=(base[0]);
	V580=(base[1]);
	V581=(base[2]);
	V582=(base[3]);
	V583=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V585;
	object V586;
	V585= CMPcar((V579));
	V586= CMPcdr((V579));
	{object V587;
	if(type_of(V581)==t_structure){
	goto T996;}
	goto T994;
	goto T996;
T996:;
	if(!(((V581)->str.str_def)==(VV[41]))){
	goto T994;}
	V587= STREF(object,(V581),4);
	goto T992;
	goto T994;
T994:;{object V589;
	V589= (VV[2]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V581);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V590= vs_base[0];
	if(!((V589)==(CMPcar(V590)))){
	goto T999;}}
	V587= CMPcar(((V581))->cc.cc_turbo[12]);
	goto T992;
	goto T999;
T999:;
	V587= Cnil;
	goto T992;
T992:;
	{object V591;
	base[5]= (V581);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk213)(Lclptr213);
	vs_top=sup;
	V592= vs_base[0];
	V591= list(2,VV[42],V592);
	{object V593;
	V593= ((V585))->v.v_self[1];
	if(!(type_of(V593)==t_fixnum)){
	goto T1010;}
	base[5]= ((V587))->v.v_self[fix((V593))]= ((V591));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T1010;
T1010:;
	base[5]= (V591);
	base[6]= (V581);
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
	{object V595;
	object V596;
	register object V597;
	object V598;
	object V599;
	check_arg(5);
	V595=(base[0]);
	V596=(base[1]);
	V597=(base[2]);
	V598=(base[3]);
	V599=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V601;
	object V602;
	V601= CMPcar((V595));
	V602= CMPcdr((V595));
	{object V603;
	if(type_of(V597)==t_structure){
	goto T1024;}
	goto T1022;
	goto T1024;
T1024:;
	if(!(((V597)->str.str_def)==(VV[43]))){
	goto T1022;}
	V603= STREF(object,(V597),4);
	goto T1020;
	goto T1022;
T1022:;{object V605;
	V605= (VV[2]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V597);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V606= vs_base[0];
	if(!((V605)==(CMPcar(V606)))){
	goto T1027;}}
	V603= CMPcar(((V597))->cc.cc_turbo[12]);
	goto T1020;
	goto T1027;
T1027:;
	V603= Cnil;
	goto T1020;
T1020:;
	{object V607;
	base[5]= (V597);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk209)(Lclptr209);
	vs_top=sup;
	V608= vs_base[0];
	V607= list(2,VV[44],V608);
	{object V609;
	V609= ((V601))->v.v_self[1];
	if(!(type_of(V609)==t_fixnum)){
	goto T1038;}
	base[5]= ((V603))->v.v_self[fix((V609))]= ((V607));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T1038;
T1038:;
	base[5]= (V607);
	base[6]= (V597);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk214)(Lclptr214);
	return;}}}}
	}
}
/*	local entry for function REAL-LOAD-DEFCLASS	*/

static object LI40(V617,V618,V619,V620,V621,V622)

object V617;object V618;object V619;object V620;object V621;object V622;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	(void)((*(LnkLI215))((V622)));
	{object V623;
	base[0]= (V617);
	base[1]= VV[45];
	base[2]= (V618);
	base[3]= VV[46];
	base[4]= (V619);
	base[5]= VV[47];
	base[6]= (V620);
	base[7]= VV[48];
	V625= list(2,VV[49],(V617));
	vs_base=vs_top;
	(void) (*Lnk216)();
	vs_top=sup;
	V626= vs_base[0];
	base[8]= list(2,/* INLINE-ARGS */V625,V626);
	{object V624;
	V624= (V621);
	 vs_top=base+9;
	 while(V624!=Cnil)
	 {vs_push((V624)->c.c_car);V624=(V624)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk217)();
	vs_top=sup;
	V623= vs_base[0];
	{object V627 = (V623);
	VMR38(V627)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for ENSURE-CLASS	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	{object V628;
	object V629;
	if(vs_top-vs_base<1) too_few_arguments();
	V628=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V629=(base[1]);
	vs_top=sup;
	base[2]=VV[218]->s.s_gfdef;
	base[3]= (V628);
	base[4]= (VFUN_NARGS=2,(*(LnkLI219))((V628),Cnil));
	{object V630;
	V630= (V629);
	 vs_top=base+5;
	 while(V630!=Cnil)
	 {vs_push((V630)->c.c_car);V630=(V630)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk218)(Lclptr218);
	return;
	}
}
/*	local entry for function (FAST-METHOD ENSURE-CLASS-USING-CLASS (T NULL))	*/

static object LI42(V636,V637,V638,V639,V640)

object V636;object V637;register object V638;register object V639;object V640;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{object V643;
	object V644;
	base[0]= (V639);
	base[1]= V640;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk220)();
	if(vs_base>=vs_top){vs_top=sup;goto T1064;}
	V643= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1065;}
	V644= vs_base[0];
	vs_top=sup;
	goto T1066;
	goto T1064;
T1064:;
	V643= Cnil;
	goto T1065;
T1065:;
	V644= Cnil;
	goto T1066;
T1066:;
	base[1]= (V643);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk221)(Lclptr221);
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V638);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk222)(Lclptr222);
	vs_top=sup;
	base[0]=VV[223]->s.s_gfdef;
	base[1]= (V643);
	base[2]= VV[50];
	base[3]= (V638);
	{object V645;
	V645= (V644);
	 vs_top=base+4;
	 while(V645!=Cnil)
	 {vs_push((V645)->c.c_car);V645=(V645)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk223)(Lclptr223);
	vs_top=sup;
	V639= vs_base[0];
	(void)((*(LnkLI224))(V639,V638));
	base[0]= (V639);
	base[1]= (V638);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk222)(Lclptr222);
	vs_top=sup;
	{object V648 = (V639);
	VMR40(V648)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD ENSURE-CLASS-USING-CLASS (T PCL-CLASS))	*/

static object LI43(V654,V655,V656,V657,V658)

object V654;object V655;object V656;register object V657;object V658;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V661;
	object V662;
	base[0]= (V657);
	base[1]= V658;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk220)();
	if(vs_base>=vs_top){vs_top=sup;goto T1087;}
	V661= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1088;}
	V662= vs_base[0];
	vs_top=sup;
	goto T1089;
	goto T1087;
T1087:;
	V661= Cnil;
	goto T1088;
T1088:;
	V662= Cnil;
	goto T1089;
T1089:;
	V663= (*(LnkLI225))((V657));
	if((/* INLINE-ARGS */V663)==((V661))){
	goto T1090;}
	base[0]= (V657);
	base[1]= (V661);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk226)(Lclptr226);
	vs_top=sup;
	goto T1090;
T1090:;
	base[0]=VV[227]->s.s_gfdef;
	base[1]= (V657);
	{object V664;
	V664= (V662);
	 vs_top=base+2;
	 while(V664!=Cnil)
	 {vs_push((V664)->c.c_car);V664=(V664)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	(void)((*(LnkLI224))(V657,V656));
	base[0]= (V657);
	base[1]= (V656);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk222)(Lclptr222);
	vs_top=sup;
	{object V667 = (V657);
	VMR41(V667)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-PREDICATE-NAME (T))	*/

static object LI44(V671,V672,V673)

object V671;object V672;object V673;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	{object V675 = VV[51];
	VMR42(V675)}
	return Cnil;
}
/*	function definition for ENSURE-CLASS-VALUES	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{object V676;
	object V677;
	check_arg(2);
	V676=(base[0]);
	V677=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V678;
	object V679;
	object V680;
	object V681;
	object V682;
	object V683;
	base[8]= (V677);
	vs_top=(vs_base=base+8)+1;
	Lcopy_list();
	vs_top=sup;
	V678= vs_base[0];
	V679= make_cons(small_fixnum(1),Cnil);
	base[8]= (V678);
	base[9]= VV[45];
	base[10]= (V679);
	vs_top=(vs_base=base+8)+3;
	Lgetf();
	vs_top=sup;
	V680= vs_base[0];
	base[8]= (V678);
	base[9]= VV[46];
	base[10]= (V679);
	vs_top=(vs_base=base+8)+3;
	Lgetf();
	vs_top=sup;
	V681= vs_base[0];
	base[8]= (V678);
	base[9]= VV[47];
	base[10]= (V679);
	vs_top=(vs_base=base+8)+3;
	Lgetf();
	vs_top=sup;
	V682= vs_base[0];
	if(!(((((V680))==((V679))?Ct:Cnil))==Cnil)){
	goto T1122;}
	V683= (VFUN_NARGS=1,(*(LnkLI219))((V680)));
	goto T1120;
	goto T1122;
T1122:;
	if(((V676))==Cnil){
	goto T1124;}
	base[8]= (V676);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1125;}
	goto T1124;
T1124:;
	V683= (VV[52]->s.s_dbind);
	goto T1120;
	goto T1125;
T1125:;
	V683= (*(LnkLI225))((V676));
	goto T1120;
T1120:;
	goto T1132;
T1132:;
	{register object V684;
	register object V685;
	base[8]= (V678);
	base[9]= VV[45];
	vs_top=(vs_base=base+8)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1139;}
	V684= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1140;}
	V685= vs_base[0];
	vs_top=sup;
	goto T1141;
	goto T1139;
T1139:;
	V684= Cnil;
	goto T1140;
T1140:;
	V685= Cnil;
	goto T1141;
T1141:;
	V678= (V684);
	if(((V685))!=Cnil){
	goto T1133;}}
	goto T1130;
	goto T1133;
T1133:;
	goto T1132;
	goto T1130;
T1130:;
	goto T1147;
T1147:;
	{register object V686;
	register object V687;
	base[8]= (V678);
	base[9]= VV[46];
	vs_top=(vs_base=base+8)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1154;}
	V686= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1155;}
	V687= vs_base[0];
	vs_top=sup;
	goto T1156;
	goto T1154;
T1154:;
	V686= Cnil;
	goto T1155;
T1155:;
	V687= Cnil;
	goto T1156;
T1156:;
	V678= (V686);
	if(((V687))!=Cnil){
	goto T1148;}}
	goto T1145;
	goto T1148;
T1148:;
	goto T1147;
	goto T1145;
T1145:;
	goto T1162;
T1162:;
	{register object V688;
	register object V689;
	base[8]= (V678);
	base[9]= VV[47];
	vs_top=(vs_base=base+8)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1169;}
	V688= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1170;}
	V689= vs_base[0];
	vs_top=sup;
	goto T1171;
	goto T1169;
T1169:;
	V688= Cnil;
	goto T1170;
T1170:;
	V689= Cnil;
	goto T1171;
T1171:;
	V678= (V688);
	if(((V689))!=Cnil){
	goto T1163;}}
	goto T1160;
	goto T1163;
T1163:;
	goto T1162;
	goto T1160;
T1160:;
	base[8]= (V683);
	if(((((V681))==((V679))?Ct:Cnil))==Cnil){
	goto T1178;}
	V690= Cnil;
	goto T1177;
	goto T1178;
T1178:;
	{object V691;
	object V692= (V681);
	if(V692==Cnil){
	V690= Cnil;
	goto T1177;}
	base[10]=V691=MMcons(Cnil,Cnil);
	goto T1180;
T1180:;
	base[11]= (V692->c.c_car);
	vs_top=(vs_base=base+11)+1;
	L46(base);
	vs_top=sup;
	(V691->c.c_car)= vs_base[0];
	if((V692=MMcdr(V692))==Cnil){
	V690= base[10];
	goto T1177;}
	V691=MMcdr(V691)=MMcons(Cnil,Cnil);
	goto T1180;}
	goto T1177;
T1177:;
	if(((((V682))==((V679))?Ct:Cnil))==Cnil){
	goto T1184;}
	V693= Cnil;
	goto T1183;
	goto T1184;
T1184:;
	V693= (V682);
	goto T1183;
T1183:;
	base[9]= listA(5,VV[46],V690,VV[47],V693,(V678));
	vs_top=(vs_base=base+8)+2;
	return;}
	}
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :AFTER (STD-CLASS T))	*/

static object LI47(V699,V700,V701,V702,V703)

object V699;object V700;register object V701;object V702;object V703;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{object V705;
	object V707;
	object V708;
	object V710;
	object V711;
	object V713;
	object V714;
	object V716;
	V705= (*(LnkLI193))(VV[46],V703);
	if(!(type_of((V705))==t_cons)){
	goto T1191;}
	V707= CMPcar((V705));
	goto T1189;
	goto T1191;
T1191:;
	V707= Cnil;
	goto T1189;
T1189:;
	V708= (*(LnkLI193))(VV[47],V703);
	if(!(type_of((V708))==t_cons)){
	goto T1196;}
	V710= CMPcar((V708));
	goto T1194;
	goto T1196;
T1196:;
	V710= Cnil;
	goto T1194;
T1194:;
	V711= (*(LnkLI193))(VV[55],V703);
	if(!(type_of((V711))==t_cons)){
	goto T1201;}
	V713= CMPcar((V711));
	goto T1199;
	goto T1201;
T1201:;
	V713= Cnil;
	goto T1199;
T1199:;
	V714= (*(LnkLI193))(VV[56],V703);
	if(!(type_of((V714))==t_cons)){
	goto T1206;}
	V716= CMPcar((V714));
	goto T1204;
	goto T1206;
T1206:;
	V716= Cnil;
	goto T1204;
T1204:;
	{object V717;
	object V718;
	V717= CMPcar((V699));
	V718= CMPcdr((V699));
	{object V719;
	if(type_of(V701)==t_structure){
	goto T1216;}
	goto T1214;
	goto T1216;
T1216:;
	if(!(((V701)->str.str_def)==(VV[57]))){
	goto T1214;}
	V719= STREF(object,(V701),4);
	goto T1212;
	goto T1214;
T1214:;{object V721;
	V721= (VV[2]->s.s_dbind);
	base[8]= small_fixnum(14);
	base[9]= (V701);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V722= vs_base[0];
	if(!((V721)==(CMPcar(V722)))){
	goto T1219;}}
	V719= CMPcar(((V701))->cc.cc_turbo[12]);
	goto T1212;
	goto T1219;
T1219:;
	V719= Cnil;
	goto T1212;
T1212:;
	if((V705)==Cnil){
	goto T1227;}
	if((V707)!=Cnil){
	goto T1230;}
	V707= make_cons((VV[58]->s.s_dbind),Cnil);
	goto T1230;
T1230:;
	{register object V723;
	register object V724;
	V723= (V707);
	V724= CMPcar((V723));
	goto T1235;
T1235:;
	if(!(((V723))==Cnil)){
	goto T1236;}
	goto T1231;
	goto T1236;
T1236:;
	base[9]= (V701);
	base[10]= (V724);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk60)(Lclptr60);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1240;}
	base[9]= VV[59];
	base[10]= (V724);
	base[11]= (V701);
	base[12]= (*(LnkLI225))((V724));
	base[13]= (*(LnkLI225))((V701));
	base[14]= VV[60];
	vs_top=(vs_base=base+9)+6;
	Lerror();
	vs_top=sup;
	goto T1240;
T1240:;
	V723= CMPcdr((V723));
	V724= CMPcar((V723));
	goto T1235;}
	goto T1231;
T1231:;
	{object V726;
	V726= ((V717))->v.v_self[2];
	if(!(type_of(V726)==t_fixnum)){
	goto T1258;}
	(void)(((V719))->v.v_self[fix((V726))]= (V707));
	goto T1225;
	goto T1258;
T1258:;
	base[8]= V707;
	base[9]= (V701);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	goto T1225;}
	goto T1227;
T1227:;
	{object V728;
	V728= ((V717))->v.v_self[2];
	if(!(type_of(V728)==t_fixnum)){
	goto T1267;}
	V728= ((V719))->v.v_self[fix((V728))];
	goto T1265;
	goto T1267;
T1267:;
	V728= VV[3];
	goto T1265;
T1265:;
	if(!(((V728))==(VV[3]))){
	goto T1270;}
	base[8]= (V701);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V707= vs_base[0];
	goto T1262;
	goto T1270;
T1270:;
	V707= (V728);}
	goto T1262;
T1262:;
	goto T1225;
T1225:;
	if((V708)==Cnil){
	goto T1276;}
	{object V730;
	{object V731;
	object V732= (V710);
	if(V732==Cnil){
	V730= Cnil;
	goto T1278;}
	base[8]=V731=MMcons(Cnil,Cnil);
	goto T1279;
T1279:;
	base[9]= (V701);
	base[10]= (V732->c.c_car);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	(V731->c.c_car)= vs_base[0];
	if((V732=MMcdr(V732))==Cnil){
	V730= base[8];
	goto T1278;}
	V731=MMcdr(V731)=MMcons(Cnil,Cnil);
	goto T1279;}
	goto T1278;
T1278:;
	{object V734;
	V734= ((V717))->v.v_self[1];
	if(!(type_of(V734)==t_fixnum)){
	goto T1285;}
	V710= ((V719))->v.v_self[fix((V734))]= ((V730));
	goto T1274;
	goto T1285;
T1285:;
	base[8]= (V730);
	base[9]= (V701);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk232)(Lclptr232);
	vs_top=sup;
	V710= vs_base[0];
	goto T1274;}}
	goto T1276;
T1276:;
	{object V736;
	V736= ((V717))->v.v_self[1];
	if(!(type_of(V736)==t_fixnum)){
	goto T1293;}
	V736= ((V719))->v.v_self[fix((V736))];
	goto T1291;
	goto T1293;
T1293:;
	V736= VV[3];
	goto T1291;
T1291:;
	if(!(((V736))==(VV[3]))){
	goto T1296;}
	base[8]= (V701);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk233)(Lclptr233);
	vs_top=sup;
	V710= vs_base[0];
	goto T1274;
	goto T1296;
T1296:;
	V710= (V736);}
	goto T1274;
T1274:;
	if((V711)==Cnil){
	goto T1301;}
	(void)((*(LnkLI194))((V713),V701,VV[28]));
	goto T1299;
	goto T1301;
T1301:;
	V713= (*(LnkLI196))((V701),VV[28]);
	goto T1299;
T1299:;
	{object V743;
	register object V744;
	V743= Cnil;
	V744= Cnil;
	{register object V745;
	register object V746;
	V745= (V710);
	V746= CMPcar((V745));
	goto T1312;
T1312:;
	if(!(((V745))==Cnil)){
	goto T1313;}
	goto T1308;
	goto T1313;
T1313:;
	base[9]= (V746);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk234)(Lclptr234);
	vs_top=sup;
	V747= vs_base[0];
	if(!((V747)==((V701)))){
	goto T1317;}
	{object V748;
	base[9]= (V746);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk235)(Lclptr235);
	vs_top=sup;
	V748= vs_base[0];
	{object V749;
	base[9]= (V746);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V750= vs_base[0];
	if(((V748))==Cnil){
	goto T1329;}
	vs_base=vs_top;
	{object _funobj = (V748);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V751= vs_base[0];
	goto T1327;
	goto T1329;
T1329:;
	V751= (VV[61]->s.s_dbind);
	goto T1327;
T1327:;
	V749= make_cons(V750,V751);
	if(((V743))!=Cnil){
	goto T1332;}
	V744= make_cons((V749),Cnil);
	V743= (V744);
	goto T1317;
	goto T1332;
T1332:;
	V753= make_cons((V749),Cnil);
	((V744))->c.c_cdr = /* INLINE-ARGS */V753;
	V752= (V744);
	V744= CMPcdr(V752);}}
	goto T1317;
T1317:;
	V745= CMPcdr((V745));
	V746= CMPcar((V745));
	goto T1312;}
	goto T1308;
T1308:;
	V742= (V743);}
	(void)((*(LnkLI194))(V742,V701,VV[31]));
	if((V714)==Cnil){
	goto T1346;}
	{object V754;
	V754= CMPcar((V716));
	{object V755;
	V755= ((V717))->v.v_self[3];
	if(!(type_of(V755)==t_fixnum)){
	goto T1351;}
	V716= ((V719))->v.v_self[fix((V755))]= ((V754));
	goto T1344;
	goto T1351;
T1351:;
	base[8]= (V754);
	base[9]= (V701);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk237)(Lclptr237);
	vs_top=sup;
	V716= vs_base[0];
	goto T1344;}}
	goto T1346;
T1346:;
	{object V757;
	{object V758;
	V758= ((V717))->v.v_self[3];
	if(!(type_of(V758)==t_fixnum)){
	goto T1360;}
	V758= ((V719))->v.v_self[fix((V758))];
	goto T1358;
	goto T1360;
T1360:;
	V758= VV[3];
	goto T1358;
T1358:;
	if(!(((V758))==(VV[3]))){
	goto T1363;}
	base[8]= (V701);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk238)(Lclptr238);
	vs_top=sup;
	V757= vs_base[0];
	goto T1355;
	goto T1363;
T1363:;
	V757= (V758);}
	goto T1355;
T1355:;
	if(((V757))==Cnil){
	goto T1367;}
	V716= (V757);
	goto T1344;
	goto T1367;
T1367:;
	{object V760;
	base[9]= (V701);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk240)();
	vs_top=sup;
	V760= vs_base[0];
	{object V761;
	V761= ((V717))->v.v_self[3];
	if(!(type_of(V761)==t_fixnum)){
	goto T1374;}
	V716= ((V719))->v.v_self[fix((V761))]= ((V760));
	goto T1344;
	goto T1374;
T1374:;
	base[8]= (V760);
	base[9]= (V701);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk237)(Lclptr237);
	vs_top=sup;
	V716= vs_base[0];}}}
	goto T1344;
T1344:;
	(void)((*(LnkLI241))((V701),(V707)));
	(void)((*(LnkLI242))((V701),Cnil));
	(void)((*(LnkLI243))((V701),(V716)));
	{object V763 = (*(LnkLI244))((V701),(V710));
	VMR44(V763)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :BEFORE (CLASS T))	*/

static void L48()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	{object V764;
	object V765;
	register object V766;
	object V767;
	object V768;
	check_arg(5);
	V764=(base[0]);
	V765=(base[1]);
	V766=(base[2]);
	V767=(base[3]);
	V768=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V770;
	V770= (*(LnkLI245))(VV[50],V768);
	{object V771;
	object V772;
	V771= CMPcar((V764));
	V772= CMPcdr((V764));
	{object V773;
	if(type_of(V766)==t_structure){
	goto T1392;}
	goto T1390;
	goto T1392;
T1392:;
	if(!(((V766)->str.str_def)==(VV[62]))){
	goto T1390;}
	V773= STREF(object,(V766),4);
	goto T1388;
	goto T1390;
T1390:;{object V775;
	V775= (VV[2]->s.s_dbind);
	base[6]= small_fixnum(14);
	base[7]= (V766);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V776= vs_base[0];
	if(!((V775)==(CMPcar(V776)))){
	goto T1395;}}
	V773= CMPcar(((V766))->cc.cc_turbo[12]);
	goto T1388;
	goto T1395;
T1395:;
	V773= Cnil;
	goto T1388;
T1388:;
	{object V777;
	V777= list(2,VV[63],(V766));
	{object V778;
	V778= ((V771))->v.v_self[1];
	if(!(type_of(V778)==t_fixnum)){
	goto T1405;}
	(void)(((V773))->v.v_self[fix((V778))]= ((V777)));
	goto T1401;
	goto T1405;
T1405:;
	base[6]= (V777);
	base[7]= (V766);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk214)(Lclptr214);
	vs_top=sup;}}
	goto T1401;
T1401:;
	{object V780;
	base[6]= VV[64];
	base[7]= VV[65];
	base[8]= (V766);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk246)();
	vs_top=sup;
	V780= vs_base[0];
	{object V781;
	V781= ((V771))->v.v_self[2];
	if(!(type_of(V781)==t_fixnum)){
	goto T1415;}
	base[6]= ((V773))->v.v_self[fix((V781))]= ((V780));
	vs_top=(vs_base=base+6)+1;
	return;
	goto T1415;
T1415:;
	base[6]= (V780);
	base[7]= (V766);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk247)(Lclptr247);
	return;}}}}}
	}
}
/*	local entry for function (FAST-METHOD REINITIALIZE-INSTANCE :BEFORE (SLOT-CLASS))	*/

static object LI49(V787,V788,V789,V790)

object V787;object V788;register object V789;object V790;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	base[0]= (V789);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk249)(Lclptr249);
	vs_top=sup;
	V792= vs_base[0];
	(void)((*(LnkLI248))((V789),V792));
	base[0]= (V789);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk251)(Lclptr251);
	vs_top=sup;
	V793= vs_base[0];
	{object V794 = (*(LnkLI250))((V789),V793);
	VMR46(V794)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD REINITIALIZE-INSTANCE :AFTER (SLOT-CLASS))	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	{object V795;
	object V796;
	object V797;
	check_arg(4);
	V795=(base[0]);
	V796=(base[1]);
	base[2]=MMcons(base[2],Cnil);
	V797=(base[3]);
	vs_top=sup;
	base[4]=MMcons(V797,base[2]);
	base[5]= (base[2]->c.c_car);
	base[6]= 
	make_cclosure_new(LC130,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk252)(Lclptr252);
	return;
	}
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :AFTER (STRUCTURE-CLASS T))	*/

static object LI51(V804,V805,V806,V807,V808)

object V804;object V805;register object V806;object V807;object V808;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V810;
	object V812;
	object V813;
	register object V815;
	object V816;
	object V817;
	object V819;
	V810= (*(LnkLI193))(VV[46],V808);
	if(!(type_of((V810))==t_cons)){
	goto T1437;}
	V812= CMPcar((V810));
	goto T1435;
	goto T1437;
T1437:;
	V812= Cnil;
	goto T1435;
T1435:;
	V813= (*(LnkLI193))(VV[47],V808);
	if(!(type_of((V813))==t_cons)){
	goto T1442;}
	V815= CMPcar((V813));
	goto T1440;
	goto T1442;
T1442:;
	V815= Cnil;
	goto T1440;
T1440:;
	V816= (*(LnkLI245))(VV[55],V808);
	V817= (*(LnkLI193))(VV[56],V808);
	if(!(type_of((V817))==t_cons)){
	goto T1448;}
	V819= CMPcar((V817));
	goto T1446;
	goto T1448;
T1448:;
	V819= Cnil;
	goto T1446;
T1446:;
	{register object V820;
	object V821;
	V820= CMPcar((V804));
	V821= CMPcdr((V804));
	{register object V822;
	if(type_of(V806)==t_structure){
	goto T1458;}
	goto T1456;
	goto T1458;
T1458:;
	if(!(((V806)->str.str_def)==(VV[66]))){
	goto T1456;}
	V822= STREF(object,(V806),4);
	goto T1454;
	goto T1456;
T1456:;{object V824;
	V824= (VV[2]->s.s_dbind);
	base[7]= small_fixnum(14);
	base[8]= (V806);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V825= vs_base[0];
	if(!((V824)==(CMPcar(V825)))){
	goto T1461;}}
	V822= CMPcar(((V806))->cc.cc_turbo[12]);
	goto T1454;
	goto T1461;
T1461:;
	V822= Cnil;
	goto T1454;
T1454:;
	if((V810)==Cnil){
	goto T1469;}
	{object V826;
	if((V812)!=Cnil){
	V826= (V812);
	goto T1471;}
	base[7]= (V806);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V827= vs_base[0];
	if((((V827)==(VV[67])?Ct:Cnil))==Cnil){
	goto T1473;}
	V812= Cnil;
	goto T1472;
	goto T1473;
T1473:;
	V812= make_cons((VV[68]->s.s_dbind),Cnil);
	goto T1472;
T1472:;
	V826= (V812);
	goto T1471;
T1471:;
	{object V828;
	V828= ((V820))->v.v_self[5];
	if(!(type_of(V828)==t_fixnum)){
	goto T1479;}
	(void)(((V822))->v.v_self[fix((V828))]= ((V826)));
	goto T1467;
	goto T1479;
T1479:;
	base[7]= (V826);
	base[8]= (V806);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	goto T1467;}}
	goto T1469;
T1469:;
	{register object V830;
	V830= ((V820))->v.v_self[5];
	if(!(type_of(V830)==t_fixnum)){
	goto T1488;}
	V830= ((V822))->v.v_self[fix((V830))];
	goto T1486;
	goto T1488;
T1488:;
	V830= VV[3];
	goto T1486;
T1486:;
	if(!(((V830))==(VV[3]))){
	goto T1491;}
	base[7]= (V806);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V812= vs_base[0];
	goto T1483;
	goto T1491;
T1491:;
	V812= (V830);}
	goto T1483;
T1483:;
	goto T1467;
T1467:;
	{register object V832;
	object V833;
	object V834;
	base[10]= (V806);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V832= vs_base[0];
	{register object V835;
	V835= ((V820))->v.v_self[6];
	if(!(type_of(V835)==t_fixnum)){
	goto T1502;}
	V835= ((V822))->v.v_self[fix((V835))];
	goto T1500;
	goto T1502;
T1502:;
	V835= VV[3];
	goto T1500;
T1500:;
	if(!(((V835))==(VV[3]))){
	goto T1505;}
	base[10]= (V806);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk253)(Lclptr253);
	vs_top=sup;
	V833= vs_base[0];
	goto T1497;
	goto T1505;
T1505:;
	V833= (V835);}
	goto T1497;
T1497:;
	if((V833)!=Cnil){
	V834= (V833);
	goto T1508;}
	V837= (*(LnkLI254))((V832));
	V834= ((/* INLINE-ARGS */V837)==Cnil?Ct:Cnil);
	goto T1508;
T1508:;
	if((V813)==Cnil){
	goto T1511;}
	{object V838;
	{object V839;
	object V840= (V815);
	if(V840==Cnil){
	V815= Cnil;
	goto T1514;}
	base[10]=V839=MMcons(Cnil,Cnil);
	goto T1515;
T1515:;
	{object V841;
	V841= (V840->c.c_car);
	if(((V834))==Cnil){
	goto T1517;}
	{object V842;
	object V843;
	object V844;
	base[14]= (V841);
	base[15]= VV[50];
	vs_top=(vs_base=base+14)+2;
	Lgetf();
	vs_top=sup;
	V842= vs_base[0];
	base[14]= Cnil;
	base[15]= VV[69];
	base[16]= (V832);
	base[17]= (V842);
	vs_top=(vs_base=base+14)+4;
	Lformat();
	vs_top=sup;
	V843= vs_base[0];
	base[14]= (V843);
	vs_top=(vs_base=base+14)+1;
	Lintern();
	vs_top=sup;
	V844= vs_base[0];
	V841= listA(3,VV[70],(V844),(V841));}
	goto T1517;
T1517:;
	base[11]= (V806);
	base[12]= (V841);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk231)();
	vs_top=sup;
	(V839->c.c_car)= vs_base[0];}
	if((V840=MMcdr(V840))==Cnil){
	V815= base[10];
	goto T1514;}
	V839=MMcdr(V839)=MMcons(Cnil,Cnil);
	goto T1515;}
	goto T1514;
T1514:;
	V838= (V815);
	{object V845;
	V845= ((V820))->v.v_self[4];
	if(!(type_of(V845)==t_fixnum)){
	goto T1535;}
	(void)(((V822))->v.v_self[fix((V845))]= ((V838)));
	goto T1509;
	goto T1535;
T1535:;
	base[10]= (V838);
	base[11]= (V806);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk232)(Lclptr232);
	vs_top=sup;
	goto T1509;}}
	goto T1511;
T1511:;
	{register object V847;
	V847= ((V820))->v.v_self[4];
	if(!(type_of(V847)==t_fixnum)){
	goto T1544;}
	V847= ((V822))->v.v_self[fix((V847))];
	goto T1542;
	goto T1544;
T1544:;
	V847= VV[3];
	goto T1542;
T1542:;
	if(!(((V847))==(VV[3]))){
	goto T1547;}
	base[10]= (V806);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk233)(Lclptr233);
	vs_top=sup;
	V815= vs_base[0];
	goto T1539;
	goto T1547;
T1547:;
	V815= (V847);}
	goto T1539;
T1539:;
	goto T1509;
T1509:;
	if(((V834))==Cnil){
	goto T1494;}
	{object V849;
	object V850;
	object V851;
	object V852;
	object V853;
	object V854;
	object V855;
	object V856;
	object V857;
	{register object V859;
	V859= ((V820))->v.v_self[5];
	if(!(type_of(V859)==t_fixnum)){
	goto T1558;}
	V859= ((V822))->v.v_self[fix((V859))];
	goto T1556;
	goto T1558;
T1558:;
	V859= VV[3];
	goto T1556;
T1556:;
	if(!(((V859))==(VV[3]))){
	goto T1561;}
	base[19]= (V806);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V858= vs_base[0];
	goto T1553;
	goto T1561;
T1561:;
	V858= (V859);}
	goto T1553;
T1553:;
	V849= CMPcar(V858);
	base[20]= Cnil;
	base[21]= VV[71];
	base[22]= (V832);
	vs_top=(vs_base=base+20)+3;
	Lformat();
	vs_top=sup;
	base[19]= vs_base[0];
	vs_top=(vs_base=base+19)+1;
	Lintern();
	vs_top=sup;
	V850= vs_base[0];
	base[20]= Cnil;
	base[21]= VV[72];
	base[22]= (V850);
	vs_top=(vs_base=base+20)+3;
	Lformat();
	vs_top=sup;
	base[19]= vs_base[0];
	vs_top=(vs_base=base+19)+1;
	Lintern();
	vs_top=sup;
	V851= vs_base[0];
	if(((V849))==Cnil){
	goto T1577;}
	base[19]= (V849);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V862= vs_base[0];
	V863= list(2,VV[74],V862);
	V861= make_cons(/* INLINE-ARGS */V863,Cnil);
	goto T1575;
	goto T1577;
T1577:;
	V861= Cnil;
	goto T1575;
T1575:;
	V864= list(2,VV[77],(V850));
	V865= list(4,VV[75],VV[76],/* INLINE-ARGS */V864,list(3,VV[78],(V851),Cnil));
	V866= append(V861,/* INLINE-ARGS */V865);
	V867= make_cons((V832),/* INLINE-ARGS */V866);
	{object V869;
	object V870= (V815);
	if(V870==Cnil){
	V868= Cnil;
	goto T1581;}
	base[19]=V869=MMcons(Cnil,Cnil);
	goto T1582;
T1582:;
	base[20]= (V870->c.c_car);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V872= vs_base[0];
	(V869->c.c_car)= list(2,V872,VV[61]);
	if((V870=MMcdr(V870))==Cnil){
	V868= base[19];
	goto T1581;}
	V869=MMcdr(V869)=MMcons(Cnil,Cnil);
	goto T1582;}
	goto T1581;
T1581:;
	V852= listA(3,VV[73],/* INLINE-ARGS */V867,V868);
	{object V873;
	object V874= (V815);
	if(V874==Cnil){
	V853= Cnil;
	goto T1586;}
	base[19]=V873=MMcons(Cnil,Cnil);
	goto T1587;
T1587:;
	base[21]= Cnil;
	base[22]= VV[79];
	base[23]= (V850);
	base[25]= (V874->c.c_car);
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
	(V873->c.c_car)= vs_base[0];
	if((V874=MMcdr(V874))==Cnil){
	V853= base[19];
	goto T1586;}
	V873=MMcdr(V873)=MMcons(Cnil,Cnil);
	goto T1587;}
	goto T1586;
T1586:;
	{object V876;
	object V877= (V815);
	if(V877==Cnil){
	V854= Cnil;
	goto T1595;}
	base[19]=V876=MMcons(Cnil,Cnil);
	goto T1596;
T1596:;
	base[21]= Cnil;
	base[22]= VV[80];
	base[23]= (V850);
	base[25]= (V877->c.c_car);
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
	(V876->c.c_car)= vs_base[0];
	if((V877=MMcdr(V877))==Cnil){
	V854= base[19];
	goto T1595;}
	V876=MMcdr(V876)=MMcons(Cnil,Cnil);
	goto T1596;}
	goto T1595;
T1595:;
	{object V879;
	object V880= (V815);
	object V881= (V853);
	if(V880==Cnil||V881==Cnil){
	V855= Cnil;
	goto T1604;}
	base[19]=V879=MMcons(Cnil,Cnil);
	goto T1605;
T1605:;
	{object V884;
	base[20]= (V880->c.c_car);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk255)(Lclptr255);
	vs_top=sup;
	V884= vs_base[0];
	V885= list(2,VV[83],list(3,VV[84],(V832),VV[85]));
	(V879->c.c_car)= list(5,VV[81],(V881->c.c_car),VV[82],/* INLINE-ARGS */V885,list(2,(V884),VV[85]));}
	if((V880=MMcdr(V880))==Cnil||(V881=MMcdr(V881))==Cnil){
	V855= base[19];
	goto T1604;}
	V879=MMcdr(V879)=MMcons(Cnil,Cnil);
	goto T1605;}
	goto T1604;
T1604:;
	{object V886;
	object V887= (V815);
	object V888= (V854);
	if(V887==Cnil||V888==Cnil){
	V856= Cnil;
	goto T1609;}
	base[19]=V886=MMcons(Cnil,Cnil);
	goto T1610;
T1610:;
	{object V891;
	base[20]= (V887->c.c_car);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk255)(Lclptr255);
	vs_top=sup;
	V891= vs_base[0];
	V892= list(2,VV[83],list(3,VV[84],(V832),VV[85]));
	(V886->c.c_car)= list(5,VV[81],(V888->c.c_car),VV[86],/* INLINE-ARGS */V892,list(3,VV[87],list(2,(V891),VV[85]),VV[88]));}
	if((V887=MMcdr(V887))==Cnil||(V888=MMcdr(V888))==Cnil){
	V856= base[19];
	goto T1609;}
	V886=MMcdr(V886)=MMcons(Cnil,Cnil);
	goto T1610;}
	goto T1609;
T1609:;
	base[19]= (V855);
	base[20]= (V856);
	V894= listA(3,VV[90],list(2,VV[91],(V832)),VV[92]);
	base[21]= make_cons(/* INLINE-ARGS */V894,Cnil);
	vs_top=(vs_base=base+19)+3;
	Lappend();
	vs_top=sup;
	V893= vs_base[0];
	V857= listA(3,VV[89],(V852),V893);
	if(((*(LnkLI254))((V832)))!=Cnil){
	goto T1619;}
	base[19]= (V857);
	vs_top=(vs_base=base+19)+1;
	Leval();
	vs_top=sup;
	goto T1619;
T1619:;
	{
	object V895= (V815);
	object V896= (V853);
	object V897= (V854);
	if(V895==Cnil||V896==Cnil||V897==Cnil){
	goto T1623;}
	goto T1624;
T1624:;
	{object V901;
	object V902;
	V901= (*(LnkLI183))((V896->c.c_car));
	if(((*(LnkLI256))((V897->c.c_car)))==Cnil){
	goto T1629;}
	V902= (*(LnkLI183))((V897->c.c_car));
	goto T1627;
	goto T1629;
T1629:;
	V902= Cnil;
	goto T1627;
T1627:;
	base[21]= (V901);
	base[22]= (V895->c.c_car);
	vs_top=(vs_base=base+21)+2;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	base[21]= (V902);
	base[22]= (V895->c.c_car);
	vs_top=(vs_base=base+21)+2;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;}
	if((V895=MMcdr(V895))==Cnil||(V896=MMcdr(V896))==Cnil||(V897=MMcdr(V897))==Cnil){
	goto T1623;}
	goto T1624;}
	goto T1623;
T1623:;
	{object V904;
	V904= ((V820))->v.v_self[3];
	if(!(type_of(V904)==t_fixnum)){
	goto T1639;}
	(void)(((V822))->v.v_self[fix((V904))]= (V857));
	goto T1636;
	goto T1639;
T1639:;
	base[19]= V857;
	base[20]= (V806);
	vs_top=(vs_base=base+19)+2;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;}
	goto T1636;
T1636:;
	{object V907;
	V907= ((V820))->v.v_self[2];
	if(!(type_of(V907)==t_fixnum)){
	goto T1645;}
	(void)(((V822))->v.v_self[fix((V907))]= (V851));
	goto T1494;
	goto T1645;
T1645:;
	base[19]= V851;
	base[20]= (V806);
	vs_top=(vs_base=base+19)+2;
	(void) (*Lnk260)(Lclptr260);
	vs_top=sup;}}}
	goto T1494;
T1494:;
	(void)((*(LnkLI241))((V806),(V812)));
	{object V909;
	base[7]= (V806);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk261)(Lclptr261);
	vs_top=sup;
	V909= vs_base[0];
	{object V910;
	V910= ((V820))->v.v_self[1];
	if(!(type_of(V910)==t_fixnum)){
	goto T1655;}
	(void)(((V822))->v.v_self[fix((V910))]= ((V909)));
	goto T1650;
	goto T1655;
T1655:;
	base[7]= (V909);
	base[8]= (V806);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk98)(Lclptr98);
	vs_top=sup;}}
	goto T1650;
T1650:;
	{object V912;
	base[7]= (V806);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk262)(Lclptr262);
	vs_top=sup;
	V912= vs_base[0];
	{object V913;
	V913= ((V820))->v.v_self[8];
	if(!(type_of(V913)==t_fixnum)){
	goto T1664;}
	(void)(((V822))->v.v_self[fix((V913))]= ((V912)));
	goto T1659;
	goto T1664;
T1664:;
	base[7]= (V912);
	base[8]= (V806);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk102)(Lclptr102);
	vs_top=sup;}}
	goto T1659;
T1659:;
	{register object V915;
	V915= ((V820))->v.v_self[9];
	if(!(type_of(V915)==t_fixnum)){
	goto T1675;}
	V915= ((V822))->v.v_self[fix((V915))];
	goto T1673;
	goto T1675;
T1675:;
	V915= VV[3];
	goto T1673;
T1673:;
	if(!(((V915))==(VV[3]))){
	goto T1678;}
	base[7]= (V806);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1668;}
	goto T1670;
	goto T1678;
T1678:;
	if(((V915))!=Cnil){
	goto T1668;}}
	goto T1670;
T1670:;
	{object V917;
	V917= (VFUN_NARGS=2,(*(LnkLI263))(small_fixnum(0),(V806)));
	{object V918;
	V918= ((V820))->v.v_self[9];
	if(!(type_of(V918)==t_fixnum)){
	goto T1684;}
	(void)(((V822))->v.v_self[fix((V918))]= ((V917)));
	goto T1668;
	goto T1684;
T1684:;
	base[7]= (V917);
	base[8]= (V806);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;}}
	goto T1668;
T1668:;
	(void)((*(LnkLI264))((V806)));
	if((V817)==Cnil){
	goto T1692;}
	{object V920;
	V920= CMPcar((V819));
	{object V921;
	V921= ((V820))->v.v_self[7];
	if(!(type_of(V921)==t_fixnum)){
	goto T1697;}
	V819= ((V822))->v.v_self[fix((V921))]= ((V920));
	goto T1690;
	goto T1697;
T1697:;
	base[7]= (V920);
	base[8]= (V806);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk237)(Lclptr237);
	vs_top=sup;
	V819= vs_base[0];
	goto T1690;}}
	goto T1692;
T1692:;
	{object V923;
	{register object V924;
	V924= ((V820))->v.v_self[7];
	if(!(type_of(V924)==t_fixnum)){
	goto T1706;}
	V924= ((V822))->v.v_self[fix((V924))];
	goto T1704;
	goto T1706;
T1706:;
	V924= VV[3];
	goto T1704;
T1704:;
	if(!(((V924))==(VV[3]))){
	goto T1709;}
	base[7]= (V806);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk238)(Lclptr238);
	vs_top=sup;
	V923= vs_base[0];
	goto T1701;
	goto T1709;
T1709:;
	V923= (V924);}
	goto T1701;
T1701:;
	if(((V923))==Cnil){
	goto T1713;}
	V819= (V923);
	goto T1690;
	goto T1713;
T1713:;
	{object V926;
	base[8]= (V806);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk240)();
	vs_top=sup;
	V926= vs_base[0];
	{object V927;
	V927= ((V820))->v.v_self[7];
	if(!(type_of(V927)==t_fixnum)){
	goto T1720;}
	V819= ((V822))->v.v_self[fix((V927))]= ((V926));
	goto T1690;
	goto T1720;
T1720:;
	base[7]= (V926);
	base[8]= (V806);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk237)(Lclptr237);
	vs_top=sup;
	V819= vs_base[0];}}}
	goto T1690;
T1690:;
	(void)((*(LnkLI243))((V806),(V819)));
	{object V929 = (*(LnkLI244))((V806),(V815));
	VMR48(V929)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD DIRECT-SLOT-DEFINITION-CLASS (STRUCTURE-CLASS T))	*/

static object LI52(V934,V935,V936,V937)

object V934;object V935;object V936;object V937;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	{object V939 = (VFUN_NARGS=1,(*(LnkLI219))(VV[93]));
	VMR49(V939)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD FINALIZE-INHERITANCE (STRUCTURE-CLASS))	*/

static object LI53(V943,V944,V945)

object V943;object V944;object V945;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V947 = Cnil;
	VMR50(V947)}
	return Cnil;
}
/*	local entry for function ADD-SLOT-ACCESSORS	*/

static object LI54(V950,V951)

object V950;object V951;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V952 = (*(LnkLI265))((V950),(V951),VV[94]);
	VMR51(V952)}
	return Cnil;
}
/*	local entry for function REMOVE-SLOT-ACCESSORS	*/

static object LI55(V955,V956)

object V955;object V956;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{object V957 = (*(LnkLI265))((V955),(V956),VV[95]);
	VMR52(V957)}
	return Cnil;
}
/*	local entry for function FIX-SLOT-ACCESSORS	*/

static object LI58(V961,V962,V963)

object V961;object V962;object V963;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	base[0]= (V963);
	base[1]= (V961);
	{register object V964;
	object V965;
	V964= (V962);
	V965= CMPcar((V964));
	goto T1734;
T1734:;
	if(!(((V964))==Cnil)){
	goto T1735;}
	{object V966 = Cnil;
	VMR53(V966)}
	goto T1735;
T1735:;
	{register object V967;
	base[3]= (V965);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V967= vs_base[0];
	{register object V968;
	register object V969;
	base[5]= (V965);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk266)(Lclptr266);
	vs_top=sup;
	V968= vs_base[0];
	V969= CMPcar((V968));
	goto T1747;
T1747:;
	if(!(((V968))==Cnil)){
	goto T1748;}
	goto T1742;
	goto T1748;
T1748:;
	base[5]= (V969);
	base[6]= (V967);
	base[7]= VV[96];
	vs_top=(vs_base=base+5)+3;
	L59(base);
	vs_top=sup;
	V968= CMPcdr((V968));
	V969= CMPcar((V968));
	goto T1747;}
	goto T1742;
T1742:;
	{register object V970;
	register object V971;
	base[5]= (V965);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk267)(Lclptr267);
	vs_top=sup;
	V970= vs_base[0];
	V971= CMPcar((V970));
	goto T1765;
T1765:;
	if(!(((V970))==Cnil)){
	goto T1766;}
	goto T1739;
	goto T1766;
T1766:;
	base[5]= (V971);
	base[6]= (V967);
	base[7]= VV[97];
	vs_top=(vs_base=base+5)+3;
	L59(base);
	vs_top=sup;
	V970= CMPcdr((V970));
	V971= CMPcar((V970));
	goto T1765;}}
	goto T1739;
T1739:;
	V964= CMPcdr((V964));
	V965= CMPcar((V964));
	goto T1734;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-DIRECT-SUBCLASSES	*/

static object LI60(V974,V975)

register object V974;object V975;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	{register object V976;
	register object V977;
	V976= (V975);
	V977= CMPcar((V976));
	goto T1787;
T1787:;
	if(!(((V976))==Cnil)){
	goto T1788;}
	{object V978 = Cnil;
	VMR54(V978)}
	goto T1788;
T1788:;
	base[1]= (V974);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk268)(Lclptr268);
	vs_top=sup;
	V980= vs_base[0];
	{register object x= (V974),V979= V980;
	while(V979!=Cnil)
	if(x==(V979->c.c_car)){
	goto T1792;
	}else V979=V979->c.c_cdr;}
	base[1]= (V977);
	base[2]= (V974);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk269)(Lclptr269);
	vs_top=sup;
	goto T1792;
T1792:;
	V976= CMPcdr((V976));
	V977= CMPcar((V976));
	goto T1787;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REMOVE-DIRECT-SUBCLASSES	*/

static object LI61(V983,V984)

register object V983;object V984;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{object V985;
	base[0]= (V983);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk249)(Lclptr249);
	vs_top=sup;
	V985= vs_base[0];
	{register object V986;
	register object V987;
	base[2]= (V985);
	base[3]= (V984);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	V986= vs_base[0];
	V987= CMPcar((V986));
	goto T1811;
T1811:;
	if(!(((V986))==Cnil)){
	goto T1812;}
	{object V988 = Cnil;
	VMR55(V988)}
	goto T1812;
T1812:;
	base[2]= (V987);
	base[3]= (V983);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk271)(Lclptr271);
	vs_top=sup;
	V986= CMPcdr((V986));
	V987= CMPcar((V986));
	goto T1811;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD FINALIZE-INHERITANCE (STD-CLASS))	*/

static object LI62(V992,V993,V994)

object V992;object V993;object V994;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V996 = (*(LnkLI242))((V994),Ct);
	VMR56(V996)}
	return Cnil;
}
/*	local entry for function CLASS-HAS-A-FORWARD-REFERENCED-SUPERCLASS-P	*/

static object LI63(V998)

object V998;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;{object V999;
	base[0]= (V998);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V999= vs_base[0];
	if(V999==Cnil)goto T1827;
	{object V1000 = V999;
	VMR57(V1000)}
	goto T1827;
T1827:;}
	base[0]= (VV[272]->s.s_gfdef);
	base[2]= (V998);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk249)(Lclptr249);
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk273)();
	vs_top=sup;
	{object V1001 = vs_base[0];
	VMR57(V1001)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-CLASS	*/

static object LI64(V1004,V1005)

register object V1004;object V1005;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	if(((V1005))!=Cnil){
	goto T1834;}
	base[0]= (V1004);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk274)(Lclptr274);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1834;}
	if(((*(LnkLI272))((V1004)))!=Cnil){
	goto T1833;}
	goto T1834;
T1834:;
	base[0]= (V1004);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk261)(Lclptr261);
	vs_top=sup;
	V1006= vs_base[0];
	(void)((*(LnkLI275))((V1004),V1006));
	base[0]= (V1004);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk262)(Lclptr262);
	vs_top=sup;
	V1007= vs_base[0];
	(void)((*(LnkLI276))((V1004),V1007));
	(void)((*(LnkLI277))((V1004)));
	base[0]= (V1004);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk279)(Lclptr279);
	vs_top=sup;
	V1008= vs_base[0];
	(void)((*(LnkLI278))((V1004),V1008));
	base[0]= (V1004);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk280)();
	vs_top=sup;
	goto T1833;
T1833:;
	if(((V1005))!=Cnil){
	goto T1853;}
	{register object V1009;
	register object V1010;
	base[2]= (V1004);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk268)(Lclptr268);
	vs_top=sup;
	V1009= vs_base[0];
	V1010= CMPcar((V1009));
	goto T1859;
T1859:;
	if(!(((V1009))==Cnil)){
	goto T1860;}
	{object V1011 = Cnil;
	VMR58(V1011)}
	goto T1860;
T1860:;
	(void)((*(LnkLI242))((V1010),Cnil));
	V1009= CMPcdr((V1009));
	V1010= CMPcar((V1009));
	goto T1859;}
	goto T1853;
T1853:;
	{object V1012 = Cnil;
	VMR58(V1012)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-CPL	*/

static object LI65(V1015,V1016)

register object V1015;object V1016;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	base[0]= (V1015);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk274)(Lclptr274);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1870;}
	base[0]= (V1015);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk99)(Lclptr99);
	vs_top=sup;
	V1017= vs_base[0];
	if(equal(V1017,(V1016))){
	goto T1870;}
	(void)((*(LnkLI281))((V1015)));
	goto T1870;
T1870:;
	if(!((VV[98])->s.s_gfdef!=OBJNULL)){
	goto T1880;}
	base[0]= (V1016);
	base[1]= (V1015);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk98)(Lclptr98);
	vs_top=sup;
	goto T1878;
	goto T1880;
T1880:;
	(void)((*(LnkLI283))(VV[98],VV[99]));
	goto T1878;
T1878:;
	{object V1018 = (*(LnkLI284))((V1016));
	VMR59(V1018)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-CLASS-CAN-PRECEDE-P	*/

static object LI66(V1020)

object V1020;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;
	if(((V1020))==Cnil){
	goto T1885;}
	{object V1021;
	V1021= CMPcar((V1020));
	{register object V1022;
	register object V1023;
	V1022= CMPcdr((V1020));
	V1023= CMPcar((V1022));
	goto T1892;
T1892:;
	if(!(((V1022))==Cnil)){
	goto T1893;}
	goto T1887;
	goto T1893;
T1893:;
	{register object V1024;
	register object V1025;
	register object V1026;
	register object V1027;
	V1024= (V1023);
	V1025= (V1021);
	V1026= VV[100];
	base[3]= (V1024);
	base[5]= (V1025);
	base[6]= (V1026);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk285)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	V1027= vs_base[0];
	base[3]= (V1025);
	base[4]= (V1026);
	base[5]= (V1027);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk286)();
	vs_top=sup;}
	V1022= CMPcdr((V1022));
	V1023= CMPcar((V1022));
	goto T1892;}}
	goto T1887;
T1887:;
	V1020= CMPcdr((V1020));
	goto TTL;
	goto T1885;
T1885:;
	{object V1028 = Cnil;
	VMR60(V1028)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLASS-CAN-PRECEDE-P	*/

static object LI67(V1031,V1032)

object V1031;object V1032;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	base[0]= (V1031);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk287)(Lclptr287);
	vs_top=sup;
	V1034= vs_base[0];
	{register object x= (V1032),V1033= V1034;
	while(V1033!=Cnil)
	if(eql(x,V1033->c.c_car)){
	{object V1035 = V1033;
	VMR61(V1035)}
	}else V1033=V1033->c.c_cdr;
	{object V1036 = Cnil;
	VMR61(V1036)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-SLOTS	*/

static object LI68(V1039,V1040)

object V1039;object V1040;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	{register object V1041;
	register object V1042;
	V1041= Cnil;
	V1042= Cnil;
	{register object V1043;
	register object V1044;
	V1043= (V1040);
	V1044= CMPcar((V1043));
	goto T1922;
T1922:;
	if(!(((V1043))==Cnil)){
	goto T1923;}
	goto T1918;
	goto T1923;
T1923:;
	{register object V1045;
	base[1]= (V1044);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk234)(Lclptr234);
	vs_top=sup;
	V1045= vs_base[0];
	if(!(((V1045))==(VV[19]))){
	goto T1931;}
	V1041= make_cons(V1044,(V1041));
	goto T1927;
	goto T1931;
T1931:;
	base[1]= (V1045);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk288)(Lclptr288);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1927;}
	V1042= make_cons(V1044,(V1042));}
	goto T1927;
T1927:;
	V1043= CMPcdr((V1043));
	V1044= CMPcar((V1043));
	goto T1922;}
	goto T1918;
T1918:;
	{object V1048;
	object V1049;
	object V1050;
	object V1051;
	object V1052;
	object V1053;
	object V1054;
	base[8]=VV[236]->s.s_gfdef;
	base[9]= (V1041);
	base[10]= (VV[289]->s.s_gfdef);
	base[11]= VV[101];
	base[12]= (VV[290]->s.s_gfdef);
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk291)();
	vs_top=sup;
	V1057= vs_base[0];
	{object V1055;
	object V1056= V1057;
	if(V1056==Cnil){
	V1048= Cnil;
	goto T1943;}
	base[7]=V1055=MMcons(Cnil,Cnil);
	goto T1944;
T1944:;
	base[9]= (V1056->c.c_car);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	(V1055->c.c_car)= vs_base[0];
	if((V1056=MMcdr(V1056))==Cnil){
	V1048= base[7];
	goto T1943;}
	V1055=MMcdr(V1055)=MMcons(Cnil,Cnil);
	goto T1944;}
	goto T1943;
T1943:;
	V1049= CMPmake_fixnum((long)length((V1048)));
	V1050= (*(LnkLI292))((V1042));
	base[7]= (V1039);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	V1051= vs_base[0];
	if((V1051)==Cnil){
	V1052= Cnil;
	goto T1956;}
	V1052= ((V1051))->v.v_self[9];
	goto T1956;
T1956:;
	if((V1051)==Cnil){
	V1053= Cnil;
	goto T1957;}
	V1053= ((V1051))->v.v_self[10];
	goto T1957;
T1957:;
	if(((V1051))!=Cnil){
	goto T1960;}
	V1054= (VFUN_NARGS=2,(*(LnkLI263))((V1049),(V1039)));
	goto T1958;
	goto T1960;
T1960:;
	if(!(equal((V1048),(V1052)))){
	goto T1963;}
	{register object V1058;
	object V1059;
	register object V1060;
	object V1061;
	V1058= (V1053);
	V1059= Cnil;
	V1060= (V1050);
	V1061= Cnil;
	goto T1972;
T1972:;
	{object V1062;
	if(!(((V1058))==Cnil)){
	goto T1978;}
	goto T1966;
	goto T1978;
T1978:;
	V1062= CMPcar((V1058));
	V1058= CMPcdr((V1058));
	V1059= (V1062);}
	{object V1063;
	if(!(((V1060))==Cnil)){
	goto T1986;}
	goto T1966;
	goto T1986;
T1986:;
	V1063= CMPcar((V1060));
	V1060= CMPcdr((V1060));
	V1061= (V1063);}
	if((CMPcar((V1059)))==(CMPcar((V1061)))){
	goto T1973;}
	goto T1963;
	goto T1973;
T1973:;
	goto T1972;}
	goto T1966;
T1966:;
	V1054= (V1051);
	goto T1958;
	goto T1963;
T1963:;
	base[7]= (V1039);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk294)(Lclptr294);
	vs_top=sup;
	base[7]= (V1039);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	V1054= vs_base[0];
	goto T1958;
T1958:;
	if(!((VV[102])->s.s_gfdef!=OBJNULL)){
	goto T2000;}
	base[7]= (V1040);
	base[8]= V1039;
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk102)(Lclptr102);
	vs_top=sup;
	goto T1998;
	goto T2000;
T2000:;
	(void)((*(LnkLI283))(VV[102],VV[103]));
	goto T1998;
T1998:;
	(void)(((V1054))->v.v_self[9]= ((V1048)));
	(void)(((V1054))->v.v_self[10]= ((V1050)));
	(void)(((V1054))->v.v_self[12]= ((V1049)));
	if(!((VV[104])->s.s_gfdef!=OBJNULL)){
	goto T2008;}
	base[7]= (V1054);
	base[8]= V1039;
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;
	goto T1996;
	goto T2008;
T2008:;
	(void)((*(LnkLI283))(VV[104],VV[105]));
	goto T1996;
T1996:;
	if(((V1051))==((V1054))){
	goto T2013;}
	{object V1065 = (*(LnkLI264))((V1039));
	VMR62(V1065)}
	goto T2013;
T2013:;
	{object V1066 = Cnil;
	VMR62(V1066)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-CLASS-SLOTS	*/

static object LI69(V1068)

object V1068;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	{register object V1069;
	register object V1070;
	V1069= Cnil;
	V1070= Cnil;
	{register object V1071;
	register object V1072;
	V1071= (V1068);
	V1072= CMPcar((V1071));
	goto T2021;
T2021:;
	if(!(((V1071))==Cnil)){
	goto T2022;}
	goto T2017;
	goto T2022;
T2022:;
	{register object V1073;
	base[1]= (V1072);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V1075= vs_base[0];
	base[2]= (V1072);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk234)(Lclptr234);
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk31)(Lclptr31);
	vs_top=sup;
	V1076= vs_base[0];
	{register object x= V1075,V1074= V1076;
	while(V1074!=Cnil)
	if(eql(x,V1074->c.c_car->c.c_car) &&V1074->c.c_car != Cnil){
	V1073= (V1074->c.c_car);
	goto T2027;
	}else V1074=V1074->c.c_cdr;
	V1073= Cnil;}
	goto T2027;
T2027:;
	if(((V1069))!=Cnil){
	goto T2034;}
	V1070= make_cons((V1073),Cnil);
	V1069= (V1070);
	goto T2026;
	goto T2034;
T2034:;
	V1078= make_cons((V1073),Cnil);
	((V1070))->c.c_cdr = /* INLINE-ARGS */V1078;
	V1077= (V1070);
	V1070= CMPcdr(V1077);}
	goto T2026;
T2026:;
	V1071= CMPcdr((V1071));
	V1072= CMPcar((V1071));
	goto T2021;}
	goto T2017;
T2017:;
	{object V1079 = (V1069);
	VMR63(V1079)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-LAYOUT	*/

static object LI70(V1082,V1083)

object V1082;object V1083;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	{object V1084;
	register object V1085;
	V1084= Cnil;
	V1085= Cnil;
	{register object V1086;
	register object V1087;
	V1086= (V1083);
	V1087= CMPcar((V1086));
	goto T2052;
T2052:;
	if(!(((V1086))==Cnil)){
	goto T2053;}
	goto T2048;
	goto T2053;
T2053:;
	base[3]= (V1087);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk234)(Lclptr234);
	vs_top=sup;
	V1088= vs_base[0];
	if(!((V1088)==(VV[19]))){
	goto T2057;}
	{register object V1089;
	base[3]= (V1087);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V1089= vs_base[0];
	if(((V1084))!=Cnil){
	goto T2065;}
	V1085= make_cons((V1089),Cnil);
	V1084= (V1085);
	goto T2057;
	goto T2065;
T2065:;
	V1091= make_cons((V1089),Cnil);
	((V1085))->c.c_cdr = /* INLINE-ARGS */V1091;
	V1090= (V1085);
	V1085= CMPcdr(V1090);}
	goto T2057;
T2057:;
	V1086= CMPcdr((V1086));
	V1087= CMPcar((V1086));
	goto T2052;}
	goto T2048;
T2048:;
	base[0]= (V1084);}
	base[1]= Cnil;
	base[3]= CMPcar((V1082));
	base[4]= VV[103];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2079;}
	base[2]= (V1082);
	goto T2077;
	goto T2079;
T2079:;
	base[2]= CMPcdr((V1082));
	goto T2077;
T2077:;
	vs_top=(vs_base=base+2)+1;
	L71(base);
	vs_top=sup;
	V1092= append(base[0],base[1]);
	{object V1093 = reverse(/* INLINE-ARGS */V1092);
	VMR64(V1093)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-GFS-OF-CLASS	*/

static object LI74(V1095)

object V1095;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	base[0]=MMcons((V1095),Cnil);
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk274)(Lclptr274);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2084;}
	{object V1096;
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk99)(Lclptr99);
	vs_top=sup;
	V1096= vs_base[0];{object V1097;
	{register object x= (VV[106]->s.s_dbind),V1098= (V1096);
	while(V1098!=Cnil)
	if(eql(x,V1098->c.c_car)){
	V1097= V1098;
	goto T2092;
	}else V1098=V1098->c.c_cdr;
	V1097= Cnil;}
	goto T2092;
T2092:;
	if(V1097==Cnil)goto T2091;
	if((V1097)==Cnil){
	goto T2084;}
	goto T2088;
	goto T2091;
T2091:;}
	{register object x= (VV[107]->s.s_dbind),V1099= (V1096);
	while(V1099!=Cnil)
	if(eql(x,V1099->c.c_car)){
	goto T2088;
	}else V1099=V1099->c.c_cdr;
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
	{object V1100 = vs_base[0];
	VMR65(V1100)}
	goto T2084;
T2084:;
	{object V1101 = Cnil;
	VMR65(V1101)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-INITS	*/

static object LI76(V1104,V1105)

object V1104;object V1105;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	{object V1108 = (*(LnkLI194))((V1105),V1104,VV[29]);
	VMR66(V1108)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-DEFAULT-INITARGS (SLOT-CLASS))	*/

static object LI79(V1112,V1113,V1114)

object V1112;object V1113;object V1114;
{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	base[0]= (V1114);
	{object V1116;
	base[2]= base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk99)(Lclptr99);
	vs_top=sup;
	V1116= vs_base[0];
	base[2]= base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk296)(Lclptr296);
	vs_top=sup;
	base[1]= vs_base[0];
	{object V1117;
	base[2]= (V1116);
	vs_top=(vs_base=base+2)+1;
	L80(base);
	vs_top=sup;
	V1117= vs_base[0];
	base[2]= (V1117);
	base[3]= VV[8];
	base[4]= (VV[9]->s.s_gfdef);
	base[5]= VV[101];
	base[6]= (VV[297]->s.s_gfdef);
	base[7]= VV[108];
	base[8]= Ct;
	vs_top=(vs_base=base+2)+7;
	(void) (*Lnk298)();
	vs_top=sup;
	{object V1118 = vs_base[0];
	VMR67(V1118)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD DIRECT-SLOT-DEFINITION-CLASS (STD-CLASS T))	*/

static object LI81(V1123,V1124,V1125,V1126)

object V1123;object V1124;object V1125;object V1126;
{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	{object V1128 = (VFUN_NARGS=1,(*(LnkLI219))(VV[109]));
	VMR68(V1128)}
	return Cnil;
}
/*	function definition for MAKE-DIRECT-SLOTD	*/

static void L82()
{register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_check;
	{object V1129;
	object V1130;
	check_arg(2);
	V1129=(base[0]);
	V1130=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1131;
	V1131= listA(3,VV[65],(V1129),(V1130));
	base[2]=VV[223]->s.s_gfdef;
	base[4]= (V1129);
	base[5]= (V1131);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	base[3]= vs_base[0];
	{object V1132;
	V1132= (V1131);
	 vs_top=base+4;
	 while(V1132!=Cnil)
	 {vs_push((V1132)->c.c_car);V1132=(V1132)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk223)(Lclptr223);
	return;}
	}
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOTS (STD-CLASS))	*/

static object LI83(V1136,V1137,V1138)

object V1136;object V1137;object V1138;
{	 VMB70 VMS70 VMV70
	goto TTL;
TTL:;
	{register object V1140;
	V1140= Cnil;
	{object V1141;
	object V1142;
	base[2]= (V1138);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk99)(Lclptr99);
	vs_top=sup;
	V1141= vs_base[0];
	V1142= CMPcar((V1141));
	goto T2132;
T2132:;
	if(!(((V1141))==Cnil)){
	goto T2133;}
	goto T2127;
	goto T2133;
T2133:;
	{object V1143;
	base[2]= (V1142);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk251)(Lclptr251);
	vs_top=sup;
	V1143= vs_base[0];
	{register object V1144;
	register object V1145;
	V1144= (V1143);
	V1145= CMPcar((V1144));
	goto T2143;
T2143:;
	if(!(((V1144))==Cnil)){
	goto T2144;}
	goto T2137;
	goto T2144;
T2144:;
	{register object V1146;
	register object V1147;
	base[5]= (V1145);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V1146= vs_base[0];
	{register object x= (V1146),V1148= (V1140);
	while(V1148!=Cnil)
	if(EQ(x,V1148->c.c_car->c.c_car) &&V1148->c.c_car != Cnil){
	V1147= (V1148->c.c_car);
	goto T2151;
	}else V1148=V1148->c.c_cdr;
	V1147= Cnil;}
	goto T2151;
T2151:;
	if(((V1147))==Cnil){
	goto T2153;}
	{register object V1150;
	register object V1151;
	V1150= (V1147);
	V1151= make_cons(V1145,CMPcdr((V1150)));
	((V1150))->c.c_cdr = (V1151);
	goto T2148;}
	goto T2153;
T2153:;
	{object V1152;
	V1152= list(2,(V1146),(V1145));
	V1140= make_cons((V1152),(V1140));}}
	goto T2148;
T2148:;
	V1144= CMPcdr((V1144));
	V1145= CMPcar((V1144));
	goto T2143;}}
	goto T2137;
T2137:;
	V1141= CMPcdr((V1141));
	V1142= CMPcar((V1141));
	goto T2132;}
	goto T2127;
T2127:;
	{object V1153;
	object V1154= (V1140);
	if(V1154==Cnil){
	{object V1155 = Cnil;
	VMR70(V1155)}}
	base[0]=V1153=MMcons(Cnil,Cnil);
	goto T2170;
T2170:;
	base[1]= (V1138);
	base[2]= nreverse(CMPcdr((V1154->c.c_car)));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	(V1153->c.c_car)= vs_base[0];
	if((V1154=MMcdr(V1154))==Cnil){
	{object V1157 = base[0];
	VMR70(V1157)}}
	V1153=MMcdr(V1153)=MMcons(Cnil,Cnil);
	goto T2170;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOTS :AROUND (STD-CLASS))	*/

static object LI84(V1161,V1162,V1163)

object V1161;object V1162;object V1163;
{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	{object V1165;
	object V1166;
	object V1167;
	object V1168;
	if(((V1162))==Cnil){
	goto T2179;}
	base[0]= (V1162);
	base[1]= VV[110];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk301)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2183;}
	V1165= (
	V1169 = STREF(object,(V1162),0),
	(type_of(V1169) == t_sfun ?(*((V1169)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V1169)==t_vfun) ?
	(*((V1169)->sfn.sfn_self)):
	(fcall.fun=(V1169),fcalln))(STREF(object,(V1162),4),STREF(object,(V1162),8),(V1163)));
	goto T2177;
	goto T2183;
T2183:;
	if(!(type_of((V1162))==t_fixnum)){
	goto T2188;}
	{object V1170;
	object V1171;
	if(type_of(V1163)==t_structure){
	goto T2194;}
	goto T2192;
	goto T2194;
T2194:;
	if(!(((V1163)->str.str_def)==(VV[111]))){
	goto T2192;}
	V1170= STREF(object,(V1163),4);
	goto T2190;
	goto T2192;
T2192:;{object V1173;
	V1173= (VV[2]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1163);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1174= vs_base[0];
	if(!((V1173)==(CMPcar(V1174)))){
	goto T2197;}}
	V1170= CMPcar(((V1163))->cc.cc_turbo[12]);
	goto T2190;
	goto T2197;
T2197:;
	V1170= Cnil;
	goto T2190;
T2190:;
	if(((V1170))==Cnil){
	goto T2204;}
	V1171= ((V1170))->v.v_self[fix((V1162))];
	goto T2202;
	goto T2204;
T2204:;
	V1171= Cnil;
	goto T2202;
T2202:;
	if(!(((V1171))==(VV[3]))){
	goto T2207;}
	base[2]= (V1163);
	base[3]= (V1162);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk302)();
	vs_top=sup;
	V1165= vs_base[0];
	goto T2177;
	goto T2207;
T2207:;
	V1165= (V1171);
	goto T2177;}
	goto T2188;
T2188:;
	base[0]= V1162;
	base[1]= VV[112];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk301)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2212;}
	{object V1176;
	object V1177;
	object V1178;
	V1176= STREF(object,(V1162),0);
	V1177= make_cons((V1163),Cnil);
	V1178= STREF(object,(V1162),4);
	if(((V1178))==Cnil){
	goto T2220;}
	if((CMPcdr((V1178)))!=Cnil){
	goto T2220;}
	V1165= (
	(type_of((V1176)) == t_sfun ?(*(((V1176))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V1176))==t_vfun) ?
	(*(((V1176))->sfn.sfn_self)):
	(fcall.fun=((V1176)),fcalln))((V1177),CMPcar((V1178))));
	goto T2177;
	goto T2220;
T2220:;
	base[0]= (V1176);
	base[1]= (V1177);
	{object V1179;
	V1179= (V1178);
	 vs_top=base+2;
	 while(V1179!=Cnil)
	 {vs_push((V1179)->c.c_car);V1179=(V1179)->c.c_cdr;}
	vs_base=base+1;}
	{object _funobj = base[0];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1165= vs_base[0];
	goto T2177;}
	goto T2212;
T2212:;
	base[0]= V1162;
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2228;}
	V1165= (
	(type_of((V1162)) == t_sfun ?(*(((V1162))->sfn.sfn_self)):
	(fcall.argd=1,type_of((V1162))==t_vfun) ?
	(*(((V1162))->sfn.sfn_self)):
	(fcall.fun=((V1162)),fcalln))((V1163)));
	goto T2177;
	goto T2228;
T2228:;
	base[1]= VV[113];
	base[2]= V1162;
	base[3]= VV[114];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk303)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1165= vs_base[0];
	goto T2177;
	goto T2179;
T2179:;
	base[0]= VV[115];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1165= vs_base[0];
	goto T2177;
T2177:;
	base[0]= (V1163);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk99)(Lclptr99);
	vs_top=sup;
	V1166= vs_base[0];
	V1167= Cnil;
	V1168= Cnil;
	{register object V1180;
	register object V1181;
	V1180= (V1165);
	V1181= CMPcar((V1180));
	goto T2242;
T2242:;
	if(!(((V1180))==Cnil)){
	goto T2243;}
	goto T2238;
	goto T2243;
T2243:;
	{object V1182;
	base[1]= (V1181);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk234)(Lclptr234);
	vs_top=sup;
	V1182= vs_base[0];
	if(!(((V1182))==(VV[19]))){
	goto T2251;}
	V1167= make_cons(V1181,(V1167));
	goto T2247;
	goto T2251;
T2251:;
	base[1]= (V1182);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk288)(Lclptr288);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2247;}
	V1168= make_cons(V1181,(V1168));}
	goto T2247;
T2247:;
	V1180= CMPcdr((V1180));
	V1181= CMPcar((V1180));
	goto T2242;}
	goto T2238;
T2238:;
	{object V1185;
	V1185= (*(LnkLI304))((V1166),(V1167));
	{register object V1186;
	register object V1187;
	V1186= (V1167);
	V1187= CMPcar((V1186));
	goto T2268;
T2268:;
	if(!(((V1186))==Cnil)){
	goto T2269;}
	goto T2263;
	goto T2269;
T2269:;
	base[3]= (V1187);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V1185);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk305)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= V1187;
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk306)(Lclptr306);
	vs_top=sup;
	V1186= CMPcdr((V1186));
	V1187= CMPcar((V1186));
	goto T2268;}}
	goto T2263;
T2263:;
	{register object V1189;
	register object V1190;
	V1189= (V1168);
	V1190= CMPcar((V1189));
	goto T2288;
T2288:;
	if(!(((V1189))==Cnil)){
	goto T2289;}
	goto T2284;
	goto T2289;
T2289:;
	base[2]= (V1190);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V1193= vs_base[0];
	base[3]= (V1190);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk234)(Lclptr234);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk31)(Lclptr31);
	vs_top=sup;
	V1194= vs_base[0];
	{register object x= V1193,V1192= V1194;
	while(V1192!=Cnil)
	if(eql(x,V1192->c.c_car->c.c_car) &&V1192->c.c_car != Cnil){
	base[1]= (V1192->c.c_car);
	goto T2294;
	}else V1192=V1192->c.c_cdr;
	base[1]= Cnil;}
	goto T2294;
T2294:;
	base[2]= V1190;
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk306)(Lclptr306);
	vs_top=sup;
	V1189= CMPcdr((V1189));
	V1190= CMPcar((V1189));
	goto T2288;}
	goto T2284;
T2284:;
	base[0]=VV[307]->s.s_gfdef;
	{
	object V1195= (V1165);
	if(V1195==Cnil){
	goto T2306;}
	goto T2307;
T2307:;
	base[1]= (V1195->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk307)(Lclptr307);
	vs_top=sup;
	if((V1195=MMcdr(V1195))==Cnil){
	goto T2306;}
	goto T2307;}
	goto T2306;
T2306:;
	{object V1196 = (V1165);
	VMR71(V1196)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOTS (STRUCTURE-CLASS))	*/

static object LI85(V1200,V1201,V1202)

object V1200;object V1201;register object V1202;
{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V1204;
	object V1205;
	V1204= CMPcar((V1200));
	V1205= CMPcdr((V1200));
	{object V1206;
	if(type_of(V1202)==t_structure){
	goto T2320;}
	goto T2318;
	goto T2320;
T2320:;
	if(!(((V1202)->str.str_def)==(VV[116]))){
	goto T2318;}
	V1206= STREF(object,(V1202),4);
	goto T2316;
	goto T2318;
T2318:;{object V1208;
	V1208= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1202);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1209= vs_base[0];
	if(!((V1208)==(CMPcar(V1209)))){
	goto T2323;}}
	V1206= CMPcar(((V1202))->cc.cc_turbo[12]);
	goto T2316;
	goto T2323;
T2323:;
	V1206= Cnil;
	goto T2316;
T2316:;
	{register object V1213;
	V1213= ((V1204))->v.v_self[1];
	if(!(type_of(V1213)==t_fixnum)){
	goto T2335;}
	V1213= ((V1206))->v.v_self[fix((V1213))];
	goto T2333;
	goto T2335;
T2335:;
	V1213= VV[3];
	goto T2333;
T2333:;
	if(!(((V1213))==(VV[3]))){
	goto T2338;}
	base[1]= (V1202);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	V1212= vs_base[0];
	goto T2330;
	goto T2338;
T2338:;
	V1212= (V1213);}
	goto T2330;
T2330:;
	V1215= reverse(V1212);
	{object V1210;
	object V1211= /* INLINE-ARGS */V1215;
	if(V1211==Cnil){
	{object V1216 = Cnil;
	VMR72(V1216)}}
	base[0]=V1210=MMcons(Cnil,Cnil);
	goto T2329;
T2329:;
	base[2]= (V1211->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk251)(Lclptr251);
	vs_top=sup;
	V1220= vs_base[0];
	{object V1218;
	object V1219= V1220;
	if(V1219==Cnil){
	(V1210->c.c_cdr)= Cnil;
	goto T2341;}
	base[1]=V1218=MMcons(Cnil,Cnil);
	goto T2342;
T2342:;
	base[2]= (V1202);
	base[3]= make_cons((V1219->c.c_car),Cnil);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	(V1218->c.c_car)= vs_base[0];
	if((V1219=MMcdr(V1219))==Cnil){
	(V1210->c.c_cdr)= base[1];
	goto T2341;}
	V1218=MMcdr(V1218)=MMcons(Cnil,Cnil);
	goto T2342;}
	goto T2341;
T2341:;
	while(MMcdr(V1210)!=Cnil)V1210=MMcdr(V1210);
	if((V1211=MMcdr(V1211))==Cnil){
	base[0]=base[0]->c.c_cdr;
	{object V1222 = base[0];
	VMR72(V1222)}}
	goto T2329;}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOTS :AROUND (STRUCTURE-CLASS))	*/

static object LI86(V1226,V1227,V1228)

object V1226;register object V1227;register object V1228;
{	 VMB73 VMS73 VMV73
	goto TTL;
TTL:;
	{object V1230;
	if(((V1227))==Cnil){
	goto T2353;}
	base[0]= (V1227);
	base[1]= VV[110];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk301)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2357;}
	V1230= (
	V1231 = STREF(object,(V1227),0),
	(type_of(V1231) == t_sfun ?(*((V1231)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V1231)==t_vfun) ?
	(*((V1231)->sfn.sfn_self)):
	(fcall.fun=(V1231),fcalln))(STREF(object,(V1227),4),STREF(object,(V1227),8),(V1228)));
	goto T2351;
	goto T2357;
T2357:;
	if(!(type_of((V1227))==t_fixnum)){
	goto T2362;}
	{object V1232;
	object V1233;
	if(type_of(V1228)==t_structure){
	goto T2368;}
	goto T2366;
	goto T2368;
T2368:;
	if(!(((V1228)->str.str_def)==(VV[117]))){
	goto T2366;}
	V1232= STREF(object,(V1228),4);
	goto T2364;
	goto T2366;
T2366:;{object V1235;
	V1235= (VV[2]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V1228);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1236= vs_base[0];
	if(!((V1235)==(CMPcar(V1236)))){
	goto T2371;}}
	V1232= CMPcar(((V1228))->cc.cc_turbo[12]);
	goto T2364;
	goto T2371;
T2371:;
	V1232= Cnil;
	goto T2364;
T2364:;
	if(((V1232))==Cnil){
	goto T2378;}
	V1233= ((V1232))->v.v_self[fix((V1227))];
	goto T2376;
	goto T2378;
T2378:;
	V1233= Cnil;
	goto T2376;
T2376:;
	if(!(((V1233))==(VV[3]))){
	goto T2381;}
	base[2]= (V1228);
	base[3]= (V1227);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk302)();
	vs_top=sup;
	V1230= vs_base[0];
	goto T2351;
	goto T2381;
T2381:;
	V1230= (V1233);
	goto T2351;}
	goto T2362;
T2362:;
	{register object V1237;
	V1237= (V1227);
	base[0]= (V1237);
	base[1]= VV[112];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk301)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2386;}
	{object V1238;
	object V1239;
	register object V1240;
	V1238= STREF(object,(V1227),0);
	V1239= make_cons((V1228),Cnil);
	V1240= STREF(object,(V1227),4);
	if(((V1240))==Cnil){
	goto T2394;}
	if((CMPcdr((V1240)))!=Cnil){
	goto T2394;}
	V1230= (
	(type_of((V1238)) == t_sfun ?(*(((V1238))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V1238))==t_vfun) ?
	(*(((V1238))->sfn.sfn_self)):
	(fcall.fun=((V1238)),fcalln))((V1239),CMPcar((V1240))));
	goto T2351;
	goto T2394;
T2394:;
	base[0]= (V1238);
	base[1]= (V1239);
	{object V1241;
	V1241= (V1240);
	 vs_top=base+2;
	 while(V1241!=Cnil)
	 {vs_push((V1241)->c.c_car);V1241=(V1241)->c.c_cdr;}
	vs_base=base+1;}
	{object _funobj = base[0];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1230= vs_base[0];
	goto T2351;}
	goto T2386;
T2386:;
	base[0]= (V1237);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2402;}
	V1230= (
	(type_of((V1227)) == t_sfun ?(*(((V1227))->sfn.sfn_self)):
	(fcall.argd=1,type_of((V1227))==t_vfun) ?
	(*(((V1227))->sfn.sfn_self)):
	(fcall.fun=((V1227)),fcalln))((V1228)));
	goto T2351;
	goto T2402;
T2402:;
	base[1]= VV[113];
	base[2]= (V1237);
	base[3]= VV[118];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk303)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1230= vs_base[0];
	goto T2351;}
	goto T2353;
T2353:;
	base[0]= VV[115];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1230= vs_base[0];
	goto T2351;
T2351:;
	base[0]=VV[307]->s.s_gfdef;
	{
	object V1242= (V1230);
	if(V1242==Cnil){
	goto T2410;}
	goto T2411;
T2411:;
	base[1]= (V1242->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk307)(Lclptr307);
	vs_top=sup;
	if((V1242=MMcdr(V1242))==Cnil){
	goto T2410;}
	goto T2411;}
	goto T2410;
T2410:;
	{object V1243 = (V1230);
	VMR73(V1243)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD COMPUTE-EFFECTIVE-SLOT-DEFINITION (SLOT-CLASS T))	*/

static void L87()
{register object *base=vs_base;
	register object *sup=base+VM74; VC74
	vs_check;
	{object V1244;
	object V1245;
	object V1246;
	object V1247;
	check_arg(4);
	V1244=(base[0]);
	V1245=(base[1]);
	V1246=(base[2]);
	V1247=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1249;
	object V1250;
	base[6]= (V1246);
	base[7]= (V1247);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk309)(Lclptr309);
	vs_top=sup;
	V1249= vs_base[0];
	base[6]= (V1246);
	base[7]= (V1249);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	V1250= vs_base[0];
	base[6]=VV[223]->s.s_gfdef;
	base[7]= (V1250);
	{object V1251;
	V1251= (V1249);
	 vs_top=base+8;
	 while(V1251!=Cnil)
	 {vs_push((V1251)->c.c_car);V1251=(V1251)->c.c_cdr;}
	vs_base=base+7;}
	(void) (*Lnk223)(Lclptr223);
	return;}
	}
}
/*	local entry for function (FAST-METHOD EFFECTIVE-SLOT-DEFINITION-CLASS (STD-CLASS T))	*/

static object LI88(V1256,V1257,V1258,V1259)

object V1256;object V1257;object V1258;object V1259;
{	 VMB75 VMS75 VMV75
	goto TTL;
TTL:;
	{object V1261 = (VFUN_NARGS=1,(*(LnkLI219))(VV[119]));
	VMR75(V1261)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD EFFECTIVE-SLOT-DEFINITION-CLASS (STRUCTURE-CLASS T))	*/

static object LI89(V1266,V1267,V1268,V1269)

object V1266;object V1267;object V1268;object V1269;
{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	{object V1271 = (VFUN_NARGS=1,(*(LnkLI219))(VV[120]));
	VMR76(V1271)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-EFFECTIVE-SLOT-DEFINITION-INITARGS (SLOT-CLASS T))	*/

static object LI90(V1276,V1277,V1278,V1279)

object V1276;object V1277;object V1278;object V1279;
{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V1281;
	object V1282;
	object V1283;
	register object V1284;
	object V1285;
	register object V1286;
	register object V1287;
	register object V1288;
	register object V1289;
	V1281= Cnil;
	V1282= Cnil;
	V1283= Cnil;
	V1284= Cnil;
	V1285= Cnil;
	V1286= Ct;
	V1287= Cnil;
	V1288= Cnil;
	V1289= Cnil;
	{register object V1290;
	register object V1291;
	V1290= (V1279);
	V1291= CMPcar((V1290));
	goto T2447;
T2447:;
	if(!(((V1290))==Cnil)){
	goto T2448;}
	goto T2443;
	goto T2448;
T2448:;
	if(((V1291))==Cnil){
	goto T2452;}
	if(((V1287))!=Cnil){
	goto T2455;}
	base[1]= (V1291);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V1281= vs_base[0];
	V1287= Ct;
	goto T2455;
T2455:;
	if(((V1288))!=Cnil){
	goto T2462;}
	base[1]= (V1291);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk235)(Lclptr235);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2462;}
	base[1]= (V1291);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk311)(Lclptr311);
	vs_top=sup;
	V1283= vs_base[0];
	base[1]= (V1291);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk235)(Lclptr235);
	vs_top=sup;
	V1282= vs_base[0];
	V1288= Ct;
	goto T2462;
T2462:;
	if(((V1289))!=Cnil){
	goto T2475;}
	base[1]= (V1291);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk234)(Lclptr234);
	vs_top=sup;
	V1285= vs_base[0];
	V1289= Ct;
	goto T2475;
T2475:;
	base[1]= (V1291);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk312)(Lclptr312);
	vs_top=sup;
	V1292= vs_base[0];
	V1284= append(V1292,(V1284));
	{register object V1293;
	base[1]= (V1291);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk313)(Lclptr313);
	vs_top=sup;
	V1293= vs_base[0];
	if(!(((V1286))==(Ct))){
	goto T2490;}
	V1286= (V1293);
	goto T2488;
	goto T2490;
T2490:;
	base[1]= (V1286);
	base[2]= (V1293);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk314)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2493;}
	goto T2488;
	goto T2493;
T2493:;
	V1286= list(3,VV[121],(V1286),(V1293));
	goto T2488;
T2488:;}
	goto T2452;
T2452:;
	V1290= CMPcdr((V1290));
	V1291= CMPcar((V1290));
	goto T2447;}
	goto T2443;
T2443:;
	base[0]= VV[50];
	base[1]= (V1281);
	base[2]= VV[122];
	base[3]= (V1283);
	base[4]= VV[123];
	base[5]= (V1282);
	base[6]= VV[124];
	base[7]= (V1284);
	base[8]= VV[125];
	base[9]= (V1285);
	base[10]= VV[126];
	base[11]= (V1286);
	base[12]= VV[65];
	base[13]= (V1278);
	vs_top=(vs_base=base+0)+14;
	Llist();
	vs_top=sup;
	{object V1294 = vs_base[0];
	VMR77(V1294)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-EFFECTIVE-SLOT-DEFINITION-INITARGS :AROUND (STRUCTURE-CLASS T))	*/

static object LI91(V1299,V1300,V1301,V1302)

object V1299;register object V1300;register object V1301;register object V1302;
{	 VMB78 VMS78 VMV78
	goto TTL;
TTL:;
	{object V1304;
	V1304= CMPcar((V1302));
	base[0]= (V1304);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk255)(Lclptr255);
	vs_top=sup;
	V1305= vs_base[0];
	base[0]= (V1304);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V1306= vs_base[0];
	base[0]= (V1304);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk316)(Lclptr316);
	vs_top=sup;
	V1307= vs_base[0];
	if(((V1300))==Cnil){
	goto T2528;}
	base[0]= (V1300);
	base[1]= VV[110];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk301)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2532;}
	base[0]= STREF(object,(V1300),0);
	base[1]= STREF(object,(V1300),4);
	base[2]= STREF(object,(V1300),8);
	base[3]= (V1301);
	base[4]= (V1302);
	vs_top=(vs_base=base+1)+4;
	{object _funobj = base[0];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1308= vs_base[0];
	goto T2526;
	goto T2532;
T2532:;
	if(!(type_of((V1300))==t_fixnum)){
	goto T2542;}
	{object V1310;
	if(type_of(V1301)==t_structure){
	goto T2548;}
	goto T2546;
	goto T2548;
T2548:;
	if(!(((V1301)->str.str_def)==(VV[129]))){
	goto T2546;}
	V1310= STREF(object,(V1301),4);
	goto T2544;
	goto T2546;
T2546:;{object V1312;
	V1312= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1301);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1313= vs_base[0];
	if(!((V1312)==(CMPcar(V1313)))){
	goto T2551;}}
	V1310= CMPcar(((V1301))->cc.cc_turbo[12]);
	goto T2544;
	goto T2551;
T2551:;
	V1310= Cnil;
	goto T2544;
T2544:;
	if(((V1310))==Cnil){
	goto T2557;}
	V1308= ((V1310))->v.v_self[fix((V1300))]= (V1301);
	goto T2526;
	goto T2557;
T2557:;
	V1308= Cnil;
	goto T2526;}
	goto T2542;
T2542:;
	{register object V1314;
	V1314= (V1300);
	base[0]= (V1314);
	base[1]= VV[112];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk301)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2560;}
	{object V1315;
	object V1316;
	register object V1317;
	V1315= STREF(object,(V1300),0);
	V1316= list(2,(V1301),(V1302));
	V1317= STREF(object,(V1300),4);
	if(((V1317))==Cnil){
	goto T2568;}
	if((CMPcdr((V1317)))!=Cnil){
	goto T2568;}
	base[0]= (V1316);
	base[1]= CMPcar((V1317));
	vs_top=(vs_base=base+0)+2;
	{object _funobj = (V1315);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1308= vs_base[0];
	goto T2526;
	goto T2568;
T2568:;
	base[0]= (V1315);
	base[1]= (V1316);
	{object V1318;
	V1318= (V1317);
	 vs_top=base+2;
	 while(V1318!=Cnil)
	 {vs_push((V1318)->c.c_car);V1318=(V1318)->c.c_cdr;}
	vs_base=base+1;}
	{object _funobj = base[0];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1308= vs_base[0];
	goto T2526;}
	goto T2560;
T2560:;
	base[0]= (V1314);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2578;}
	base[0]= (V1301);
	base[1]= (V1302);
	vs_top=(vs_base=base+0)+2;
	{object _funobj = (V1300);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V1308= vs_base[0];
	goto T2526;
	goto T2578;
T2578:;
	base[1]= VV[113];
	base[2]= (V1314);
	base[3]= VV[130];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk303)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1308= vs_base[0];
	goto T2526;}
	goto T2528;
T2528:;
	base[0]= VV[115];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V1308= vs_base[0];
	goto T2526;
T2526:;
	{object V1319 = listA(7,VV[70],V1305,VV[127],V1306,VV[128],V1307,V1308);
	VMR78(V1319)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD READER-METHOD-CLASS (SLOT-CLASS T))	*/

static object LI92(V1325,V1326,V1327,V1328,V1329)

object V1325;object V1326;object V1327;object V1328;object V1329;
{	 VMB79 VMS79 VMV79
	goto TTL;
TTL:;
	{object V1332 = (VFUN_NARGS=1,(*(LnkLI219))(VV[131]));
	VMR79(V1332)}
	return Cnil;
}
/*	function definition for (FAST-METHOD ADD-READER-METHOD (SLOT-CLASS T T))	*/

static void L93()
{register object *base=vs_base;
	register object *sup=base+VM80; VC80
	vs_check;
	{object V1333;
	object V1334;
	register object V1335;
	object V1336;
	object V1337;
	check_arg(5);
	V1333=(base[0]);
	V1334=(base[1]);
	V1335=(base[2]);
	V1336=(base[3]);
	V1337=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]=(VV[317]->s.s_gfdef);
	base[6]= (V1336);
	base[8]=(VV[318]->s.s_gfdef);
	base[9]= VV[131];
	base[10]= Cnil;{object V1340;
	base[12]= (V1335);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V1340= vs_base[0];
	if(V1340==Cnil)goto T2600;
	V1339= V1340;
	goto T2599;
	goto T2600;
T2600:;}
	V1339= VV[132];
	goto T2599;
T2599:;
	base[11]= make_cons(V1339,Cnil);
	base[12]= make_cons((V1335),Cnil);
	base[14]= (V1335);
	base[15]= (V1337);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk319)(Lclptr319);
	vs_top=sup;
	base[13]= vs_base[0];
	base[14]= VV[133];
	base[15]= (V1337);
	base[7]= simple_lispcall(base+8,7);
	lispcall(base+5,2);
	return;
	}
}
/*	local entry for function (FAST-METHOD WRITER-METHOD-CLASS (SLOT-CLASS T))	*/

static object LI94(V1346,V1347,V1348,V1349,V1350)

object V1346;object V1347;object V1348;object V1349;object V1350;
{	 VMB81 VMS81 VMV81
	goto TTL;
TTL:;
	{object V1353 = (VFUN_NARGS=1,(*(LnkLI219))(VV[134]));
	VMR81(V1353)}
	return Cnil;
}
/*	function definition for (FAST-METHOD ADD-WRITER-METHOD (SLOT-CLASS T T))	*/

static void L95()
{register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	{object V1354;
	object V1355;
	register object V1356;
	object V1357;
	object V1358;
	check_arg(5);
	V1354=(base[0]);
	V1355=(base[1]);
	V1356=(base[2]);
	V1357=(base[3]);
	V1358=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]=(VV[317]->s.s_gfdef);
	base[6]= (V1357);
	base[8]=(VV[318]->s.s_gfdef);
	base[9]= VV[134];
	base[10]= Cnil;{object V1361;
	base[12]= (V1356);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V1361= vs_base[0];
	if(V1361==Cnil)goto T2621;
	V1360= V1361;
	goto T2620;
	goto T2621;
T2621:;}
	V1360= VV[132];
	goto T2620;
T2620:;
	base[11]= list(2,VV[135],V1360);
	base[12]= list(2,(VV[136]->s.s_dbind),(V1356));
	base[14]= (V1356);
	base[15]= (V1358);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk320)(Lclptr320);
	vs_top=sup;
	base[13]= vs_base[0];
	base[14]= VV[137];
	base[15]= (V1358);
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
	{object V1362;
	object V1363;
	register object V1364;
	object V1365;
	object V1366;
	check_arg(5);
	V1362=(base[0]);
	V1363=(base[1]);
	V1364=(base[2]);
	V1365=(base[3]);
	V1366=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]=(VV[317]->s.s_gfdef);
	base[6]= (V1365);
	base[8]=(VV[318]->s.s_gfdef);
	base[9]= VV[138];
	base[10]= Cnil;{object V1369;
	base[12]= (V1364);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V1369= vs_base[0];
	if(V1369==Cnil)goto T2639;
	V1368= V1369;
	goto T2638;
	goto T2639;
T2639:;}
	V1368= VV[132];
	goto T2638;
T2638:;
	base[11]= make_cons(V1368,Cnil);
	base[12]= make_cons((V1364),Cnil);
	base[14]= (V1364);
	base[15]= (V1366);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk321)(Lclptr321);
	vs_top=sup;
	base[13]= vs_base[0];
	base[14]= VV[139];
	base[15]= (V1366);
	base[7]= simple_lispcall(base+8,7);
	lispcall(base+5,2);
	return;
	}
}
/*	local entry for function (FAST-METHOD REMOVE-READER-METHOD (SLOT-CLASS T))	*/

static object LI97(V1374,V1375,V1376,V1377)

object V1374;object V1375;object V1376;object V1377;
{	 VMB84 VMS84 VMV84
	goto TTL;
TTL:;
	{object V1379;
	V1380= make_cons((V1376),Cnil);
	V1379= (VFUN_NARGS=4,(*(LnkLI322))((V1377),Cnil,/* INLINE-ARGS */V1380,Cnil));
	if(((V1379))==Cnil){
	goto T2653;}
	base[0]= (V1377);
	base[1]= (V1379);
	{object V1381 = simple_symlispcall(VV[323],base+0,2);
	VMR84(V1381)}
	goto T2653;
T2653:;
	{object V1382 = Cnil;
	VMR84(V1382)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-WRITER-METHOD (SLOT-CLASS T))	*/

static object LI98(V1387,V1388,V1389,V1390)

object V1387;object V1388;object V1389;object V1390;
{	 VMB85 VMS85 VMV85
	goto TTL;
TTL:;
	{object V1392;
	V1393= list(2,(VV[136]->s.s_dbind),(V1389));
	V1392= (VFUN_NARGS=4,(*(LnkLI322))((V1390),Cnil,/* INLINE-ARGS */V1393,Cnil));
	if(((V1392))==Cnil){
	goto T2662;}
	base[0]= (V1390);
	base[1]= (V1392);
	{object V1394 = simple_symlispcall(VV[323],base+0,2);
	VMR85(V1394)}
	goto T2662;
T2662:;
	{object V1395 = Cnil;
	VMR85(V1395)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-BOUNDP-METHOD (SLOT-CLASS T))	*/

static object LI99(V1400,V1401,V1402,V1403)

object V1400;object V1401;object V1402;object V1403;
{	 VMB86 VMS86 VMV86
	goto TTL;
TTL:;
	{object V1405;
	V1406= make_cons((V1402),Cnil);
	V1405= (VFUN_NARGS=4,(*(LnkLI322))((V1403),Cnil,/* INLINE-ARGS */V1406,Cnil));
	if(((V1405))==Cnil){
	goto T2671;}
	base[0]= (V1403);
	base[1]= (V1405);
	{object V1407 = simple_symlispcall(VV[323],base+0,2);
	VMR86(V1407)}
	goto T2671;
T2671:;
	{object V1408 = Cnil;
	VMR86(V1408)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-READER-METHOD-FUNCTION (SLOT-CLASS T))	*/

static object LI100(V1413,V1414,V1415,V1416)

object V1413;object V1414;object V1415;object V1416;
{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	base[0]= (V1415);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V1418= vs_base[0];
	{object V1419 = (*(LnkLI324))(V1418,(V1416));
	VMR87(V1419)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-WRITER-METHOD-FUNCTION (SLOT-CLASS T))	*/

static object LI101(V1424,V1425,V1426,V1427)

object V1424;object V1425;object V1426;object V1427;
{	 VMB88 VMS88 VMV88
	goto TTL;
TTL:;
	base[0]= (V1426);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V1429= vs_base[0];
	{object V1430 = (*(LnkLI325))(V1429,(V1427));
	VMR88(V1430)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-BOUNDP-METHOD-FUNCTION (SLOT-CLASS T))	*/

static object LI102(V1435,V1436,V1437,V1438)

object V1435;object V1436;object V1437;object V1438;
{	 VMB89 VMS89 VMV89
	goto TTL;
TTL:;
	base[0]= (V1437);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk239)(Lclptr239);
	vs_top=sup;
	V1440= vs_base[0];
	{object V1441 = (*(LnkLI326))(V1440,(V1438));
	VMR89(V1441)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD INFORM-TYPE-SYSTEM-ABOUT-CLASS (STD-CLASS T))	*/

static object LI103(V1446,V1447,V1448,V1449)

object V1446;object V1447;object V1448;object V1449;
{	 VMB90 VMS90 VMV90
	goto TTL;
TTL:;
	{object V1451 = (*(LnkLI327))((V1449));
	VMR90(V1451)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPATIBLE-META-CLASS-CHANGE-P (T T))	*/

static object LI104(V1456,V1457,V1458,V1459)

object V1456;object V1457;object V1458;object V1459;
{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	V1461= (*(LnkLI225))((V1458));
	V1462= (*(LnkLI225))((V1459));
	{object V1463 = ((/* INLINE-ARGS */V1461)==(/* INLINE-ARGS */V1462)?Ct:Cnil);
	VMR91(V1463)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD VALIDATE-SUPERCLASS (CLASS CLASS))	*/

static object LI105(V1468,V1469,V1470,V1471)

object V1468;object V1469;object V1470;object V1471;
{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;
	if(!(((V1471))==((VV[136]->s.s_dbind)))){
	goto T2700;}
	{object V1473 = Ct;
	VMR92(V1473)}
	goto T2700;
T2700:;
	V1474= (*(LnkLI225))((V1470));
	V1475= (*(LnkLI225))((V1471));
	{object V1476 = ((/* INLINE-ARGS */V1474)==(/* INLINE-ARGS */V1475)?Ct:Cnil);
	VMR92(V1476)}
	return Cnil;
}
/*	local entry for function FORCE-CACHE-FLUSHES	*/

static object LI106(V1478)

object V1478;
{	 VMB93 VMS93 VMV93
	goto TTL;
TTL:;
	{register object V1479;
	object V1480;
	base[2]= (V1478);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	V1479= vs_base[0];
	V1480= ((V1479))->v.v_self[8];
	if(!(((V1480))==(Ct))){
	goto T2706;}
	{register object V1481;
	V1481= (VFUN_NARGS=2,(*(LnkLI263))(((V1479))->v.v_self[12],(V1478)));
	(void)(((V1481))->v.v_self[9]= (((V1479))->v.v_self[9]));
	(void)(((V1481))->v.v_self[10]= (((V1479))->v.v_self[10]));
	if(!((VV[104])->s.s_gfdef!=OBJNULL)){
	goto T2713;}
	base[2]= (V1481);
	base[3]= (V1478);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;
	goto T2711;
	goto T2713;
T2713:;
	(void)((*(LnkLI283))(VV[104],VV[105]));
	goto T2711;
T2711:;
	{object V1482 = (*(LnkLI328))((V1479),VV[140],(V1481));
	VMR93(V1482)}}
	goto T2706;
T2706:;
	{object V1483 = Cnil;
	VMR93(V1483)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FLUSH-CACHE-TRAP	*/

static object LI107(V1487,V1488,V1489)

object V1487;object V1488;object V1489;
{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;
	{object V1490 = (*(LnkLI329))((V1489),(V1488));
	VMR94(V1490)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-INSTANCES-OBSOLETE (STD-CLASS))	*/

static object LI108(V1494,V1495,V1496)

object V1494;object V1495;register object V1496;
{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;
	{object V1498;
	object V1499;
	V1498= CMPcar((V1494));
	V1499= CMPcdr((V1494));
	{object V1500;
	if(type_of(V1496)==t_structure){
	goto T2727;}
	goto T2725;
	goto T2727;
T2727:;
	if(!(((V1496)->str.str_def)==(VV[141]))){
	goto T2725;}
	V1500= STREF(object,(V1496),4);
	goto T2723;
	goto T2725;
T2725:;{object V1502;
	V1502= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1496);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1503= vs_base[0];
	if(!((V1502)==(CMPcar(V1503)))){
	goto T2730;}}
	V1500= CMPcar(((V1496))->cc.cc_turbo[12]);
	goto T2723;
	goto T2730;
T2730:;
	V1500= Cnil;
	goto T2723;
T2723:;
	{register object V1504;
	register object V1505;
	base[2]= (V1496);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	V1504= vs_base[0];
	V1505= (VFUN_NARGS=2,(*(LnkLI263))(((V1504))->v.v_self[12],(V1496)));
	(void)(((V1505))->v.v_self[9]= (((V1504))->v.v_self[9]));
	(void)(((V1505))->v.v_self[10]= (((V1504))->v.v_self[10]));
	{object V1507;
	V1507= ((V1498))->v.v_self[1];
	if(!(type_of(V1507)==t_fixnum)){
	goto T2744;}
	(void)(((V1500))->v.v_self[fix((V1507))]= (V1505));
	goto T2741;
	goto T2744;
T2744:;
	base[2]= V1505;
	base[3]= (V1496);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;}
	goto T2741;
T2741:;
	(void)((*(LnkLI328))((V1504),VV[142],(V1505)));
	{object V1509 = (V1496);
	VMR95(V1509)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD MAKE-INSTANCES-OBSOLETE (SYMBOL))	*/

static void L109()
{register object *base=vs_base;
	register object *sup=base+VM96; VC96
	vs_check;
	{object V1510;
	object V1511;
	object V1512;
	check_arg(3);
	V1510=(base[0]);
	V1511=(base[1]);
	V1512=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (VFUN_NARGS=1,(*(LnkLI219))((V1512)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk294)(Lclptr294);
	return;
	}
}
/*	local entry for function OBSOLETE-INSTANCE-TRAP	*/

static object LI110(V1517,V1518,V1519)

object V1517;object V1518;object V1519;
{	 VMB97 VMS97 VMV97
	bds_check;
	goto TTL;
TTL:;
	if(type_of(V1519)==t_structure){
	goto T2757;}
	goto T2756;
	goto T2757;
T2757:;
	if(((V1519)->str.str_def)==(VV[143])){
	goto T2754;}
	goto T2756;
T2756:;{object V1521;
	V1521= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1519);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1522= vs_base[0];
	if((V1521)==(CMPcar(V1522))){
	goto T2754;}}
	if(((VV[144]->s.s_dbind))==Cnil){
	goto T2764;}
	{object V1523 = (VV[145]->s.s_dbind);
	VMR97(V1523)}
	goto T2764;
T2764:;
	bds_bind(VV[144],Ct);
	base[1]= VV[146];
	base[2]= (V1519);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	{object V1524 = vs_base[0];
	bds_unwind1;
	VMR97(V1524)}
	goto T2754;
T2754:;
	{object V1525;
	object V1526;
	object V1527;
	object V1528;
	object V1529;
	object V1530;
	object V1531;
	object V1532;
	register object V1533;
	register object V1534;
	V1525= ((V1518))->v.v_self[11];
	base[7]= (V1525);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk201)(Lclptr201);
	vs_top=sup;
	V1526= vs_base[0];
	V1527= ((V1517))->v.v_self[9];
	V1528= ((V1518))->v.v_self[9];
	if(type_of(V1519)==t_structure){
	goto T2777;}
	goto T2775;
	goto T2777;
T2777:;
	if(!(((V1519)->str.str_def)==(VV[147]))){
	goto T2775;}
	V1529= STREF(object,(V1519),4);
	goto T2773;
	goto T2775;
T2775:;{object V1536;
	V1536= (VV[2]->s.s_dbind);
	base[7]= small_fixnum(14);
	base[8]= (V1519);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1537= vs_base[0];
	if(!((V1536)==(CMPcar(V1537)))){
	goto T2780;}}
	V1529= CMPcar(((V1519))->cc.cc_turbo[12]);
	goto T2773;
	goto T2780;
T2780:;
	base[7]= VV[148];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	V1529= vs_base[0];
	goto T2773;
T2773:;
	if(type_of(V1526)==t_structure){
	goto T2790;}
	goto T2788;
	goto T2790;
T2790:;
	if(!(((V1526)->str.str_def)==(VV[149]))){
	goto T2788;}
	V1530= STREF(object,(V1526),4);
	goto T2786;
	goto T2788;
T2788:;{object V1539;
	V1539= (VV[2]->s.s_dbind);
	base[7]= small_fixnum(14);
	base[8]= (V1526);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1540= vs_base[0];
	if(!((V1539)==(CMPcar(V1540)))){
	goto T2793;}}
	V1530= CMPcar(((V1526))->cc.cc_turbo[12]);
	goto T2786;
	goto T2793;
T2793:;
	base[7]= VV[148];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	V1530= vs_base[0];
	goto T2786;
T2786:;
	V1531= ((V1517))->v.v_self[10];
	V1532= Cnil;
	V1533= Cnil;
	V1534= Cnil;
	{register object V1541;
	register object V1542;
	object V1543;
	object V1544;
	V1541= (V1527);
	V1542= Cnil;
	V1543= small_fixnum(0);
	V1544= Cnil;
	goto T2809;
T2809:;
	{object V1545;
	if(!(((V1541))==Cnil)){
	goto T2815;}
	goto T2803;
	goto T2815;
T2815:;
	V1545= CMPcar((V1541));
	V1541= CMPcdr((V1541));
	V1542= (V1545);}
	{object V1546;
	V1546= (V1543);
	V1543= number_plus((V1543),small_fixnum(1));
	V1544= (V1546);}
	{long V1547;
	object V1548;
	V1547= fix((V1544));
	base[8]= (V1542);
	base[9]= (V1528);
	base[10]= VV[8];
	base[11]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+8)+4;
	(void) (*Lnk305)();
	vs_top=sup;
	V1548= vs_base[0];
	if(((V1548))==Cnil){
	goto T2830;}
	(void)((((V1530))->v.v_self[fix((V1548))]=(((V1529))->v.v_self[V1547])));
	goto T2810;
	goto T2830;
T2830:;
	V1533= make_cons(V1542,(V1533));
	if((((V1529))->v.v_self[V1547])==((VV[61]->s.s_dbind))){
	goto T2810;}
	{object V1551;
	V1551= ((V1529))->v.v_self[V1547];
	{object V1552;
	base[9]= (V1534);
	base[10]= (V1551);
	base[11]= V1542;
	vs_top=(vs_base=base+9)+3;
	siLput_f();
	vs_top=sup;
	V1552= vs_base[0];
	V1534= (V1552);}}}
	goto T2810;
T2810:;
	goto T2809;}
	goto T2803;
T2803:;
	{register object V1553;
	register object V1554;
	V1553= (V1531);
	V1554= Cnil;
	goto T2848;
T2848:;
	{object V1555;
	if(!(((V1553))==Cnil)){
	goto T2854;}
	goto T2844;
	goto T2854;
T2854:;
	V1555= CMPcar((V1553));
	V1553= CMPcdr((V1553));
	V1554= (V1555);}
	{object V1556;
	object V1557;
	V1556= CMPcar((V1554));
	V1557= CMPcdr((V1554));
	{object V1558;
	base[7]= (V1556);
	base[8]= (V1528);
	base[9]= VV[8];
	base[10]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+7)+4;
	(void) (*Lnk305)();
	vs_top=sup;
	V1558= vs_base[0];
	if(((V1558))==Cnil){
	goto T2866;}
	(void)((((V1530))->v.v_self[fix((V1558))]=(CMPcdr((V1554)))));
	goto T2849;
	goto T2866;
T2866:;
	V1533= make_cons(V1556,(V1533));
	if(((V1557))==((VV[61]->s.s_dbind))){
	goto T2849;}
	{object V1562;
	base[7]= (V1534);
	base[8]= V1557;
	base[9]= V1556;
	vs_top=(vs_base=base+7)+3;
	siLput_f();
	vs_top=sup;
	V1562= vs_base[0];
	V1534= (V1562);}}}
	goto T2849;
T2849:;
	goto T2848;}
	goto T2844;
T2844:;
	{register object V1563;
	register object V1564;
	V1563= (V1528);
	V1564= CMPcar((V1563));
	goto T2883;
T2883:;
	if(!(((V1563))==Cnil)){
	goto T2884;}
	goto T2879;
	goto T2884;
T2884:;
	{register object x= (V1564),V1565= (V1527);
	while(V1565!=Cnil)
	if(x==(V1565->c.c_car)){
	goto T2888;
	}else V1565=V1565->c.c_cdr;}
	{register object x= (V1564),V1566= (V1531);
	while(V1566!=Cnil)
	if(EQ(x,V1566->c.c_car->c.c_car) &&V1566->c.c_car != Cnil){
	goto T2888;
	}else V1566=V1566->c.c_cdr;}
	V1532= make_cons(V1564,(V1532));
	goto T2888;
T2888:;
	V1563= CMPcdr((V1563));
	V1564= CMPcar((V1563));
	goto T2883;}
	goto T2879;
T2879:;
	(void)((*(LnkLI330))((V1519),(V1526)));
	base[7]= (V1519);
	base[8]= (V1532);
	base[9]= (V1533);
	base[10]= (V1534);
	vs_top=(vs_base=base+7)+4;
	(void) (*Lnk331)(Lclptr331);
	vs_top=sup;
	{object V1568 = (V1518);
	VMR97(V1568)}}
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
	{object V1569=base[0]->c.c_cdr;
	if(endp(V1569))invalid_macro_call();
	base[2]= (V1569->c.c_car);
	V1569=V1569->c.c_cdr;
	if(!endp(V1569))invalid_macro_call();}
	V1570= list(2,VV[153],base[2]);
	V1571= list(2,VV[154],base[2]);
	V1572= list(3,VV[87],/* INLINE-ARGS */V1571,list(2,VV[154],base[2]));
	V1573= list(2,VV[155],base[2]);
	base[3]= list(2,VV[89],list(4,VV[150],VV[151],list(4,VV[152],/* INLINE-ARGS */V1570,/* INLINE-ARGS */V1572,list(3,VV[87],/* INLINE-ARGS */V1573,list(2,VV[155],base[2]))),VV[156]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function CHANGE-CLASS-INTERNAL	*/

static object LI112(V1576,V1577)

object V1576;object V1577;
{	 VMB99 VMS99 VMV99
	goto TTL;
TTL:;
	{object V1578;
	object V1579;
	object V1580;
	object V1581;
	object V1582;
	object V1583;
	object V1584;
	object V1585;
	object V1586;
	V1578= (*(LnkLI225))((V1576));
	base[9]= (V1577);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk201)(Lclptr201);
	vs_top=sup;
	V1579= vs_base[0];
	if(type_of(V1579)==t_structure){
	goto T2912;}
	goto T2910;
	goto T2912;
T2912:;
	if(!(((V1579)->str.str_def)==(VV[157]))){
	goto T2910;}
	V1580= STREF(object,(V1579),0);
	goto T2908;
	goto T2910;
T2910:;{object V1588;
	V1588= (VV[2]->s.s_dbind);
	base[9]= small_fixnum(14);
	base[10]= (V1579);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1589= vs_base[0];
	if(!((V1588)==(CMPcar(V1589)))){
	goto T2915;}}
	V1580= CMPcar(((V1579))->cc.cc_turbo[13]);
	goto T2908;
	goto T2915;
T2915:;
	base[9]= VV[158];
	vs_top=(vs_base=base+9)+1;
	Lerror();
	vs_top=sup;
	V1580= vs_base[0];
	goto T2908;
T2908:;
	base[9]= (V1578);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	V1581= vs_base[0];
	V1582= ((V1581))->v.v_self[9];
	V1583= ((V1580))->v.v_self[9];
	if(type_of(V1576)==t_structure){
	goto T2929;}
	goto T2927;
	goto T2929;
T2929:;
	if(!(((V1576)->str.str_def)==(VV[159]))){
	goto T2927;}
	V1584= STREF(object,(V1576),4);
	goto T2925;
	goto T2927;
T2927:;{object V1591;
	V1591= (VV[2]->s.s_dbind);
	base[9]= small_fixnum(14);
	base[10]= (V1576);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1592= vs_base[0];
	if(!((V1591)==(CMPcar(V1592)))){
	goto T2932;}}
	V1584= CMPcar(((V1576))->cc.cc_turbo[12]);
	goto T2925;
	goto T2932;
T2932:;
	base[9]= VV[148];
	vs_top=(vs_base=base+9)+1;
	Lerror();
	vs_top=sup;
	V1584= vs_base[0];
	goto T2925;
T2925:;
	if(type_of(V1579)==t_structure){
	goto T2942;}
	goto T2940;
	goto T2942;
T2942:;
	if(!(((V1579)->str.str_def)==(VV[160]))){
	goto T2940;}
	V1585= STREF(object,(V1579),4);
	goto T2938;
	goto T2940;
T2940:;{object V1594;
	V1594= (VV[2]->s.s_dbind);
	base[9]= small_fixnum(14);
	base[10]= (V1579);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1595= vs_base[0];
	if(!((V1594)==(CMPcar(V1595)))){
	goto T2945;}}
	V1585= CMPcar(((V1579))->cc.cc_turbo[12]);
	goto T2938;
	goto T2945;
T2945:;
	base[9]= VV[148];
	vs_top=(vs_base=base+9)+1;
	Lerror();
	vs_top=sup;
	V1585= vs_base[0];
	goto T2938;
T2938:;
	V1586= ((V1581))->v.v_self[10];
	{register object V1596;
	object V1597;
	register object V1598;
	object V1599;
	V1596= (V1583);
	V1597= Cnil;
	V1598= small_fixnum(0);
	V1599= Cnil;
	goto T2958;
T2958:;
	{object V1600;
	if(!(((V1596))==Cnil)){
	goto T2964;}
	goto T2952;
	goto T2964;
T2964:;
	V1600= CMPcar((V1596));
	V1596= CMPcdr((V1596));
	V1597= (V1600);}
	{object V1601;
	V1601= (V1598);
	V1598= number_plus((V1598),small_fixnum(1));
	V1599= (V1601);}
	{long V1602;
	register object V1603;
	V1602= fix((V1599));
	base[10]= (V1597);
	base[11]= (V1582);
	base[12]= VV[8];
	base[13]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+10)+4;
	(void) (*Lnk305)();
	vs_top=sup;
	V1603= vs_base[0];
	if(((V1603))==Cnil){
	goto T2959;}
	(void)(((V1585))->v.v_self[V1602]= (((V1584))->v.v_self[fix((V1603))]));}
	goto T2959;
T2959:;
	goto T2958;}
	goto T2952;
T2952:;
	{register object V1604;
	register object V1605;
	V1604= (V1586);
	V1605= Cnil;
	goto T2985;
T2985:;
	{object V1606;
	if(!(((V1604))==Cnil)){
	goto T2991;}
	goto T2981;
	goto T2991;
T2991:;
	V1606= CMPcar((V1604));
	V1604= CMPcdr((V1604));
	V1605= (V1606);}
	{register object V1607;
	base[9]= CMPcar((V1605));
	base[10]= (V1583);
	base[11]= VV[8];
	base[12]= (VV[9]->s.s_gfdef);
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk305)();
	vs_top=sup;
	V1607= vs_base[0];
	if(((V1607))==Cnil){
	goto T2986;}
	(void)((((V1585))->v.v_self[fix((V1607))]=(CMPcdr((V1605)))));}
	goto T2986;
T2986:;
	goto T2985;}
	goto T2981;
T2981:;
	(void)((*(LnkLI330))((V1576),(V1579)));
	base[9]= (V1579);
	base[10]= (V1576);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk332)(Lclptr332);
	vs_top=sup;
	{object V1608 = (V1576);
	VMR99(V1608)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD CHANGE-CLASS (STANDARD-OBJECT STANDARD-CLASS))	*/

static object LI113(V1613,V1614,V1615,V1616)

object V1613;object V1614;register object V1615;object V1616;
{	 VMB100 VMS100 VMV100
	goto TTL;
TTL:;
	if(type_of(V1615)==t_structure){
	goto T3014;}
	goto T3013;
	goto T3014;
T3014:;
	if(((V1615)->str.str_def)==(VV[161])){
	goto T3011;}
	goto T3013;
T3013:;
	base[0]= VV[162];
	base[1]= (V1615);
	base[2]= (V1616);
	base[3]= VV[163];
	vs_top=(vs_base=base+0)+4;
	Lerror();
	vs_top=sup;
	goto T3011;
T3011:;
	{object V1619 = (*(LnkLI333))((V1615),(V1616));
	VMR100(V1619)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD CHANGE-CLASS (STANDARD-OBJECT FUNCALLABLE-STANDARD-CLASS))	*/

static object LI114(V1624,V1625,V1626,V1627)

object V1624;object V1625;register object V1626;object V1627;
{	 VMB101 VMS101 VMV101
	goto TTL;
TTL:;{object V1629;
	V1629= (VV[2]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1626);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk177)();
	vs_top=sup;
	V1630= vs_base[0];
	if((V1629)==(CMPcar(V1630))){
	goto T3024;}}
	base[0]= VV[164];
	base[1]= (V1626);
	base[2]= (V1627);
	base[3]= VV[165];
	vs_top=(vs_base=base+0)+4;
	Lerror();
	vs_top=sup;
	goto T3024;
T3024:;
	{object V1631 = (*(LnkLI333))((V1626),(V1627));
	VMR101(V1631)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD CHANGE-CLASS (T SYMBOL))	*/

static void L115()
{register object *base=vs_base;
	register object *sup=base+VM102; VC102
	vs_check;
	{object V1632;
	object V1633;
	object V1634;
	object V1635;
	check_arg(4);
	V1632=(base[0]);
	V1633=(base[1]);
	V1634=(base[2]);
	V1635=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V1634);
	base[5]= (VFUN_NARGS=1,(*(LnkLI219))((V1635)));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk226)(Lclptr226);
	return;
	}
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :BEFORE (BUILT-IN-CLASS T))	*/

static object LI116(V1642,V1643,V1644,V1645,V1646)

object V1642;object V1643;object V1644;object V1645;object V1646;
{	 VMB103 VMS103 VMV103
	goto TTL;
TTL:;
	base[0]= VV[166];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V1649 = vs_base[0];
	VMR103(V1649)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-DIRECT-SLOTS (BUILT-IN-CLASS))	*/

static object LI117(V1653,V1654,V1655)

object V1653;object V1654;object V1655;
{	 VMB104 VMS104 VMV104
	goto TTL;
TTL:;
	{object V1657 = Cnil;
	VMR104(V1657)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-SLOTS (BUILT-IN-CLASS))	*/

static object LI118(V1661,V1662,V1663)

object V1661;object V1662;object V1663;
{	 VMB105 VMS105 VMV105
	goto TTL;
TTL:;
	{object V1665 = Cnil;
	VMR105(V1665)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-DIRECT-DEFAULT-INITARGS (BUILT-IN-CLASS))	*/

static object LI119(V1669,V1670,V1671)

object V1669;object V1670;object V1671;
{	 VMB106 VMS106 VMV106
	goto TTL;
TTL:;
	{object V1673 = Cnil;
	VMR106(V1673)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-DEFAULT-INITARGS (BUILT-IN-CLASS))	*/

static object LI120(V1677,V1678,V1679)

object V1677;object V1678;object V1679;
{	 VMB107 VMS107 VMV107
	goto TTL;
TTL:;
	{object V1681 = Cnil;
	VMR107(V1681)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD VALIDATE-SUPERCLASS (CLASS BUILT-IN-CLASS))	*/

static object LI121(V1686,V1687,V1688,V1689)

object V1686;object V1687;object V1688;object V1689;
{	 VMB108 VMS108 VMV108
	goto TTL;
TTL:;
	{object V1691 = (((V1689))==((VV[136]->s.s_dbind))?Ct:Cnil);
	VMR108(V1691)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD VALIDATE-SUPERCLASS (SLOT-CLASS FORWARD-REFERENCED-CLASS))	*/

static object LI122(V1696,V1697,V1698,V1699)

object V1696;object V1697;object V1698;object V1699;
{	 VMB109 VMS109 VMV109
	goto TTL;
TTL:;
	{object V1701 = Ct;
	VMR109(V1701)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD ADD-DEPENDENT (DEPENDENT-UPDATE-MIXIN T))	*/

static object LI123(V1706,V1707,V1708,V1709)

object V1706;object V1707;object V1708;object V1709;
{	 VMB110 VMS110 VMV110
	goto TTL;
TTL:;
	{object V1714;
	base[1]= V1709;
	base[2]= (*(LnkLI196))(V1708,VV[167]);
	vs_top=(vs_base=base+1)+2;
	Ladjoin();
	vs_top=sup;
	V1714= vs_base[0];
	{object V1717 = (*(LnkLI194))((V1714),V1708,VV[167]);
	VMR110(V1717)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-DEPENDENT (DEPENDENT-UPDATE-MIXIN T))	*/

static object LI124(V1722,V1723,V1724,V1725)

object V1722;object V1723;object V1724;object V1725;
{	 VMB111 VMS111 VMV111
	goto TTL;
TTL:;
	base[0]= (V1725);
	base[1]= (*(LnkLI196))((V1724),VV[167]);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk334)();
	vs_top=sup;
	V1729= vs_base[0];
	{object V1730 = (*(LnkLI194))(V1729,V1724,VV[167]);
	VMR111(V1730)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAP-DEPENDENTS (DEPENDENT-UPDATE-MIXIN T))	*/

static object LI125(V1735,V1736,V1737,V1738)

object V1735;object V1736;object V1737;register object V1738;
{	 VMB112 VMS112 VMV112
	goto TTL;
TTL:;
	{register object V1740;
	register object V1741;
	V1740= (*(LnkLI196))((V1737),VV[167]);
	V1741= CMPcar((V1740));
	goto T3082;
T3082:;
	if(!(((V1740))==Cnil)){
	goto T3083;}
	{object V1742 = Cnil;
	VMR112(V1742)}
	goto T3083;
T3083:;
	(void)((
	(type_of((V1738)) == t_sfun ?(*(((V1738))->sfn.sfn_self)):
	(fcall.argd=1,type_of((V1738))==t_vfun) ?
	(*(((V1738))->sfn.sfn_self)):
	(fcall.fun=((V1738)),fcalln))((V1741))));
	V1740= CMPcdr((V1740));
	V1741= CMPcar((V1740));
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
	{register object V1743;
	check_arg(1);
	V1743=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1743))!=Cnil){
	goto T3094;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3094;
T3094:;
	{object V1744;
	{object V1745;
	V1745= CMPcar((V1743));
	V1743= CMPcdr((V1743));
	V1744= (V1745);}
	if(!(((V1744))==(base0[0]))){
	goto T3102;}
	V1746= base0[1];
	goto T3100;
	goto T3102;
T3102:;
	base[1]= (V1744);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk296)(Lclptr296);
	vs_top=sup;
	V1746= vs_base[0];
	goto T3100;
T3100:;
	base[1]= (V1743);
	vs_top=(vs_base=base+1)+1;
	L80(base0);
	vs_top=sup;
	V1747= vs_base[0];
	base[1]= append(V1746,V1747);
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
	{object V1748;
	object V1749;
	check_arg(2);
	V1748=(base[0]);
	V1749=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	base[3]= (V1748);
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
	{object V1750;
	check_arg(1);
	V1750=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1751;
	register object V1752;
	base[3]= (V1750);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk336)(Lclptr336);
	vs_top=sup;
	V1751= vs_base[0];
	V1752= CMPcar((V1751));
	goto T3114;
T3114:;
	if(!(((V1751))==Cnil)){
	goto T3115;}
	goto T3109;
	goto T3115;
T3115:;
	{register object V1753;
	register object V1754;
	register object V1755;
	V1753= (V1752);
	V1754= base0[1];
	V1755= Ct;
	base[3]= (V1753);
	base[4]= (V1754);
	base[5]= (V1755);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	V1751= CMPcdr((V1751));
	V1752= CMPcar((V1751));
	goto T3114;}
	goto T3109;
T3109:;
	base[1]= (V1750);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk249)(Lclptr249);
	vs_top=sup;
	V1757= vs_base[0];
	{
	object V1756= V1757;
	if(V1756==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T3131;
T3131:;
	base[1]= (V1756->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L75(base0);
	vs_top=sup;
	if((V1756=MMcdr(V1756))==Cnil){
	base[1]= V1757;
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
	{object V1758;
	check_arg(1);
	V1758=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1758))==Cnil){
	goto T3137;}
	base[1]= CMPcdr((V1758));
	vs_top=(vs_base=base+1)+1;
	L71(base0);
	vs_top=sup;
	{register object V1759;
	object V1760;
	base[3]= CMPcar((V1758));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk337)(Lclptr337);
	vs_top=sup;
	V1759= vs_base[0];
	V1760= CMPcar((V1759));
	goto T3145;
T3145:;
	if(!(((V1759))==Cnil)){
	goto T3146;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T3146;
T3146:;
	{register object V1761;
	base[3]= (V1760);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V1761= vs_base[0];
	{register object x= (V1761),V1762= base0[0];
	while(V1762!=Cnil)
	if(eql(x,V1762->c.c_car)){
	goto T3154;
	}else V1762=V1762->c.c_cdr;
	goto T3150;}
	goto T3154;
T3154:;
	base0[1]= make_cons((V1761),base0[1]);
	base[3]= (V1761);
	base[4]= base0[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk95)();
	vs_top=sup;
	base0[0]= vs_base[0];}
	goto T3150;
T3150:;
	V1759= CMPcdr((V1759));
	V1760= CMPcar((V1759));
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
	{object V1763;
	object V1764;
	object V1765;
	check_arg(3);
	V1763=(base[0]);
	V1764=(base[1]);
	V1765=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1766;
	base[3]= (V1763);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk338)();
	vs_top=sup;
	V1766= vs_base[0];
	{object V1767= (V1765);
	if((V1767!= VV[96]))goto T3167;
	if(!((base0[0])==(VV[94]))){
	goto T3169;}
	base[3]= base0[1];
	base[4]= (V1766);
	base[5]= (V1764);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk339)(Lclptr339);
	return;
	goto T3169;
T3169:;
	base[3]= base0[1];
	base[4]= (V1766);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk340)(Lclptr340);
	return;
	goto T3167;
T3167:;
	if((V1767!= VV[97]))goto T3176;
	if(!((base0[0])==(VV[94]))){
	goto T3178;}
	base[3]= base0[1];
	base[4]= (V1766);
	base[5]= (V1764);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk341)(Lclptr341);
	return;
	goto T3178;
T3178:;
	base[3]= base0[1];
	base[4]= (V1766);
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
	{object V1768;
	check_arg(1);
	V1768=(base[0]);
	vs_top=sup;
	base[1]=VV[343]->s.s_gfdef;
	base[2]= (base0[1]->c.c_car);
	base[3]= (V1768);
	{object V1769;
	V1769= (base0[0]->c.c_car);
	 vs_top=base+4;
	 while(V1769!=Cnil)
	 {vs_push((V1769)->c.c_car);V1769=(V1769)->c.c_cdr;}
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
	{object V1770;
	check_arg(1);
	V1770=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V1770);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk288)(Lclptr288);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3189;}
	base[1]= (V1770);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3189;
T3189:;
	if(((*(LnkLI344))((V1770)))!=Cnil){
	goto T3193;}
	base[1]= VV[53];
	base[2]= (V1770);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	goto T3193;
T3193:;{object V1771;
	V1771= (VFUN_NARGS=2,(*(LnkLI219))((V1770),Cnil));
	if(V1771==Cnil)goto T3197;
	base[1]= V1771;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3197;
T3197:;}
	{object V1773;
	base[2]= VV[54];
	base[3]= VV[50];
	base[4]= (V1770);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk223)(Lclptr223);
	vs_top=sup;
	V1773= vs_base[0];
	base[2]= (*(LnkLI224))((V1773),V1770);
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
	{object V1774;
	check_arg(1);
	V1774=(base[0]);
	vs_top=sup;
	{register object V1775;
	register object V1776;
	base[3]= (V1774);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk336)(Lclptr336);
	vs_top=sup;
	V1775= vs_base[0];
	V1776= CMPcar((V1775));
	goto T3207;
T3207:;
	if(!(((V1775))==Cnil)){
	goto T3208;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T3208;
T3208:;
	base[3]= (V1776);
	base[4]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T3212;}
	{register object V1777;
	register object V1778;
	register object V1779;
	V1777= (V1776);
	V1778= (base0[0]->c.c_car);
	V1779= Ct;
	base[3]= (V1777);
	base[4]= (V1778);
	base[5]= (V1779);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	(void)((
	(type_of((base0[1]->c.c_car)) == t_sfun ?(*(((base0[1]->c.c_car))->sfn.sfn_self)):
	(fcall.argd=1,type_of((base0[1]->c.c_car))==t_vfun) ?
	(*(((base0[1]->c.c_car))->sfn.sfn_self)):
	(fcall.fun=((base0[1]->c.c_car)),fcalln))((V1776))));
	goto T3212;
T3212:;
	V1775= CMPcdr((V1775));
	V1776= CMPcar((V1775));
	goto T3207;}
	}
}
/*	local function CLOSURE	*/

static void LC128(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM121; VC121
	vs_check;
	{object V1780;
	object V1781;
	check_arg(2);
	V1780=(base[0]);
	V1781=(base[1]);
	vs_top=sup;
	base[2]= (V1781);
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
	{object V1782;
	object V1783;
	check_arg(2);
	V1782=(base[0]);
	V1783=(base[1]);
	vs_top=sup;
	base[2]= (*(LnkLI345))((V1782));
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
	{object V1784;
	check_arg(1);
	V1784=(base[0]);
	vs_top=sup;
	base[1]= (V1784);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk64)(Lclptr64);
	vs_top=sup;
	V1785= vs_base[0];
	(void)((
	(type_of((base0[0]->c.c_car)) == t_sfun ?(*(((base0[0]->c.c_car))->sfn.sfn_self)):
	(fcall.argd=1,type_of((base0[0]->c.c_car))==t_vfun) ?
	(*(((base0[0]->c.c_car))->sfn.sfn_self)):
	(fcall.fun=((base0[0]->c.c_car)),fcalln))(V1785)));
	base[1]= (V1784);
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

