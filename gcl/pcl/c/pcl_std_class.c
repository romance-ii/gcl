
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
	{object V7= V4;
	if((V7!= VV[249]))goto T3;
	base[4]= (V3);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk250)(Lclptr250);
	return;
	goto T3;
T3:;
	if((V7!= VV[251]))goto T5;
	base[4]= (V3);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk252)(Lclptr252);
	return;
	goto T5;
T5:;
	if((V7!= VV[253]))goto T7;
	base[4]= (V3);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk254)(Lclptr254);
	return;
	goto T7;
T7:;
	base[4]= VV[0];
	base[5]= VV[1];
	base[6]= VV[2];
	base[7]= VV[3];
	base[8]= V4;
	base[9]= VV[4];
	base[10]= VV[8];
	base[11]= VV[6];
	base[12]= VV[9];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk255)();
	return;}
	}
}
/*	function definition for (FAST-METHOD (SETF SLOT-ACCESSOR-FUNCTION) (T EFFECTIVE-SLOT-DEFINITION T))	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{object V8;
	object V9;
	register object V10;
	register object V11;
	object V12;
	check_arg(5);
	V8=(base[0]);
	V9=(base[1]);
	V10=(base[2]);
	V11=(base[3]);
	V12=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V15= V12;
	if((V15!= VV[249]))goto T20;
	base[5]= ({object _tmp=get(VV[250],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[250])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[250])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[6]= V10;
	base[7]= V11;
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T20;
T20:;
	if((V15!= VV[251]))goto T24;
	base[5]= ({object _tmp=get(VV[252],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[252])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[252])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[6]= V10;
	base[7]= V11;
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T24;
T24:;
	if((V15!= VV[253]))goto T28;
	base[5]= ({object _tmp=get(VV[254],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[254])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[254])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[6]= V10;
	base[7]= V11;
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T28;
T28:;
	base[5]= VV[0];
	base[6]= VV[1];
	base[7]= VV[2];
	base[8]= VV[3];
	base[9]= V12;
	base[10]= VV[4];
	base[11]= VV[12];
	base[12]= VV[6];
	base[13]= VV[13];
	vs_top=(vs_base=base+5)+9;
	(void) (*Lnk255)();
	return;}
	}
}
/*	local entry for function (FAST-METHOD SLOT-ACCESSOR-STD-P (EFFECTIVE-SLOT-DEFINITION T))	*/

static object LI3(V26,V27,V28,V29)

register object V26;object V27;register object V28;register object V29;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V31;
	object V32;
	V31= CMPcar((V26));
	V32= CMPcdr((V26));
	{object V33;
	if(type_of(V28)==t_structure){
	goto T51;}
	goto T49;
	goto T51;
T51:;
	if(!(((V28)->str.str_def)==(VV[21]))){
	goto T49;}
	V33= STREF(object,(V28),4);
	goto T47;
	goto T49;
T49:;{object V35;
	V35= (VV[16]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V28);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V36= vs_base[0];
	if(!((V35)==(CMPcar(V36)))){
	goto T54;}}
	V33= CMPcar(((V28))->cc.cc_turbo[12]);
	goto T47;
	goto T54;
T54:;
	V33= Cnil;
	goto T47;
T47:;
	{long V37;
	{register object V38;
	V38= ((V31))->v.v_self[1];
	if(!(type_of(V38)==t_fixnum)){
	goto T64;}
	V38= ((V33))->v.v_self[fix((V38))];
	goto T62;
	goto T64;
T64:;
	V38= VV[17];
	goto T62;
T62:;
	if(!(((V38))==(VV[17]))){
	goto T67;}
	base[0]= (V28);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V37= fix(vs_base[0]);
	goto T59;
	goto T67;
T67:;
	V37= fix((V38));}
	goto T59;
T59:;
	if(!(((V29))==(VV[18]))){
	goto T71;}
	{object V40 = ((7)==(V37)?Ct:Cnil);
	VMR3(V40)}
	goto T71;
T71:;
	{long V41;
	{object V43= V29;
	if((V43!= VV[249]))goto T74;
	V41= 1;
	goto T73;
	goto T74;
T74:;
	if((V43!= VV[251]))goto T75;
	V41= 2;
	goto T73;
	goto T75;
T75:;
	if((V43!= VV[253]))goto T76;
	V41= 4;
	goto T73;
	goto T76;
T76:;
	base[0]= VV[0];
	base[1]= VV[1];
	base[2]= VV[2];
	base[3]= VV[3];
	base[4]= V29;
	base[5]= VV[4];
	base[6]= VV[22];
	base[7]= VV[6];
	base[8]= VV[23];
	vs_top=(vs_base=base+0)+9;
	(void) (*Lnk255)();
	vs_top=sup;
	V41= fix(vs_base[0]);}
	goto T73;
T73:;
	{object V44 = (((((long)((V41) & (V37)))==0?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR3(V44)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD (SETF SLOT-ACCESSOR-STD-P) (T EFFECTIVE-SLOT-DEFINITION T))	*/

static object LI4(V50,V51,V52,V53,V54)

register object V50;object V51;register object V52;register object V53;object V54;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{object V56;
	object V57;
	V56= CMPcar((V50));
	V57= CMPcdr((V50));
	{object V58;
	if(type_of(V53)==t_structure){
	goto T96;}
	goto T94;
	goto T96;
T96:;
	if(!(((V53)->str.str_def)==(VV[27]))){
	goto T94;}
	V58= STREF(object,(V53),4);
	goto T92;
	goto T94;
T94:;{object V60;
	V60= (VV[16]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V53);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V61= vs_base[0];
	if(!((V60)==(CMPcar(V61)))){
	goto T99;}}
	V58= CMPcar(((V53))->cc.cc_turbo[12]);
	goto T92;
	goto T99;
T99:;
	V58= Cnil;
	goto T92;
T92:;
	{long V62;
	long V63;
	{object V65= V54;
	if((V65!= VV[249]))goto T106;
	V62= 1;
	goto T105;
	goto T106;
T106:;
	if((V65!= VV[251]))goto T107;
	V62= 2;
	goto T105;
	goto T107;
T107:;
	if((V65!= VV[253]))goto T108;
	V62= 4;
	goto T105;
	goto T108;
T108:;
	base[0]= VV[0];
	base[1]= VV[1];
	base[2]= VV[2];
	base[3]= VV[3];
	base[4]= V54;
	base[5]= VV[4];
	base[6]= VV[28];
	base[7]= VV[6];
	base[8]= VV[29];
	vs_top=(vs_base=base+0)+9;
	(void) (*Lnk255)();
	vs_top=sup;
	V62= fix(vs_base[0]);}
	goto T105;
T105:;
	{register object V66;
	V66= ((V56))->v.v_self[1];
	if(!(type_of(V66)==t_fixnum)){
	goto T123;}
	V66= ((V58))->v.v_self[fix((V66))];
	goto T121;
	goto T123;
T123:;
	V66= VV[17];
	goto T121;
T121:;
	if(!(((V66))==(VV[17]))){
	goto T126;}
	base[0]= (V53);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk258)(Lclptr258);
	vs_top=sup;
	V63= fix(vs_base[0]);
	goto T118;
	goto T126;
T126:;
	V63= fix((V66));}
	goto T118;
T118:;
	{object V68;
	if(((V52))==Cnil){
	goto T131;}
	V68= CMPmake_fixnum((long)((V62) | (V63)));
	goto T129;
	goto T131;
T131:;
	V68= CMPmake_fixnum((long)(((long)(~(V62))) & (V63)));
	goto T129;
T129:;
	{object V69;
	V69= ((V56))->v.v_self[1];
	if(!(type_of(V69)==t_fixnum)){
	goto T135;}
	(void)(((V58))->v.v_self[fix((V69))]= ((V68)));
	goto T104;
	goto T135;
T135:;
	base[0]= (V68);
	base[1]= (V53);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;}}}
	goto T104;
T104:;
	{object V71 = (V52);
	VMR4(V71)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD INITIALIZE-INTERNAL-SLOT-FUNCTIONS (EFFECTIVE-SLOT-DEFINITION))	*/

static object LI5(V75,V76,V77)

object V75;object V76;register object V77;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V79;
	object V80;
	V79= CMPcar((V75));
	V80= CMPcdr((V75));
	{object V81;
	if(type_of(V77)==t_structure){
	goto T149;}
	goto T147;
	goto T149;
T149:;
	if(!(((V77)->str.str_def)==(VV[41]))){
	goto T147;}
	V81= STREF(object,(V77),4);
	goto T145;
	goto T147;
T147:;{object V83;
	V83= (VV[16]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V77);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V84= vs_base[0];
	if(!((V83)==(CMPcar(V84)))){
	goto T152;}}
	V81= CMPcar(((V77))->cc.cc_turbo[12]);
	goto T145;
	goto T152;
T152:;
	V81= Cnil;
	goto T145;
T145:;
	{object V85;
	object V86;
	{object V87;
	V87= ((V79))->v.v_self[2];
	if(!(type_of(V87)==t_fixnum)){
	goto T162;}
	V87= ((V81))->v.v_self[fix((V87))];
	goto T160;
	goto T162;
T162:;
	V87= VV[17];
	goto T160;
T160:;
	if(!(((V87))==(VV[17]))){
	goto T165;}
	base[2]= (V77);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk260)(Lclptr260);
	vs_top=sup;
	V85= vs_base[0];
	goto T157;
	goto T165;
T165:;
	V85= (V87);}
	goto T157;
T157:;
	{object V89;
	V89= ((V79))->v.v_self[1];
	if(!(type_of(V89)==t_fixnum)){
	goto T173;}
	V89= ((V81))->v.v_self[fix((V89))];
	goto T171;
	goto T173;
T173:;
	V89= VV[17];
	goto T171;
T171:;
	if(!(((V89))==(VV[17]))){
	goto T176;}
	base[2]= (V77);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk261)(Lclptr261);
	vs_top=sup;
	V86= vs_base[0];
	goto T168;
	goto T176;
T176:;
	V86= (V89);}
	goto T168;
T168:;
	{object V91;{object V92;
	base[2]= (V85);
	base[3]= (VV[31]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V92= vs_base[0];
	if(V92==Cnil)goto T181;
	V91= V92;
	goto T180;
	goto T181;
T181:;}
	{object V94;
	object V95;
	V94= (VV[31]->s.s_dbind);
	base[3]= VV[32];
	base[4]= VV[33];
	base[5]= VV[34];
	base[6]= small_fixnum(5);
	vs_top=(vs_base=base+3)+4;
	Lmake_hash_table();
	vs_top=sup;
	V95= vs_base[0];
	base[3]= V85;
	base[4]= (V94);
	base[5]= (V95);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;
	V91= vs_base[0];}
	goto T180;
T180:;
	base[2]= V86;
	base[3]= V91;
	base[4]= V77;
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	vs_top=sup;}
	{register object V99;
	register object V100;
	V99= VV[35];
	V100= CMPcar((V99));
	goto T201;
T201:;
	if(!(((V99))==Cnil)){
	goto T202;}
	goto T197;
	goto T202;
T202:;
	{register object V101;
	register object V102;
	{register object V103;
	V103= (V100);
	{object V104= (V103);
	if((V104!= VV[249]))goto T208;
	V101= VV[36];
	goto T207;
	goto T208;
T208:;
	if((V104!= VV[251]))goto T209;
	V101= VV[37];
	goto T207;
	goto T209;
T209:;
	if((V104!= VV[253]))goto T210;
	V101= VV[38];
	goto T207;
	goto T210;
T210:;
	base[5]= VV[0];
	base[6]= VV[1];
	base[7]= VV[2];
	base[8]= VV[3];
	base[9]= (V103);
	base[10]= VV[4];
	base[11]= VV[42];
	base[12]= VV[6];
	base[13]= VV[43];
	vs_top=(vs_base=base+5)+9;
	(void) (*Lnk255)();
	vs_top=sup;
	V101= vs_base[0];}}
	goto T207;
T207:;
	V102= (*(LnkLI262))((V101));
	base[5]= (V77);
	base[6]= (V100);
	base[7]= (V102);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk263)(Lclptr263);
	vs_top=sup;}
	V99= CMPcdr((V99));
	V100= CMPcar((V99));
	goto T201;}
	goto T197;
T197:;
	{object V105 = (VFUN_NARGS=1,(*(LnkLI264))((V85)));
	VMR5(V105)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOT-ACCESSOR-INFO (EFFECTIVE-SLOT-DEFINITION T T))	*/

static object LI6(V111,V112,V113,V114,V115)

register object V111;object V112;register object V113;register object V114;object V115;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{object V117;
	object V118;
	V117= CMPcar((V111));
	V118= CMPcdr((V111));
	{object V119;
	if(type_of(V113)==t_structure){
	goto T239;}
	goto T237;
	goto T239;
T239:;
	if(!(((V113)->str.str_def)==(VV[48]))){
	goto T237;}
	V119= STREF(object,(V113),4);
	goto T235;
	goto T237;
T237:;{object V121;
	V121= (VV[16]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V113);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V122= vs_base[0];
	if(!((V121)==(CMPcar(V122)))){
	goto T242;}}
	V119= CMPcar(((V113))->cc.cc_turbo[12]);
	goto T235;
	goto T242;
T242:;
	V119= Cnil;
	goto T235;
T235:;
	{object V123;
	register object V124;
	object V125;
	object V126;
	{register object V127;
	V127= ((V117))->v.v_self[2];
	if(!(type_of(V127)==t_fixnum)){
	goto T252;}
	V127= ((V119))->v.v_self[fix((V127))];
	goto T250;
	goto T252;
T252:;
	V127= VV[17];
	goto T250;
T250:;
	if(!(((V127))==(VV[17]))){
	goto T255;}
	base[4]= (V113);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk260)(Lclptr260);
	vs_top=sup;
	V123= vs_base[0];
	goto T247;
	goto T255;
T255:;
	V123= (V127);}
	goto T247;
T247:;
	{register object V129;
	V129= ((V117))->v.v_self[1];
	if(!(type_of(V129)==t_fixnum)){
	goto T263;}
	V129= ((V119))->v.v_self[fix((V129))];
	goto T261;
	goto T263;
T263:;
	V129= VV[17];
	goto T261;
T261:;
	if(!(((V129))==(VV[17]))){
	goto T266;}
	base[4]= (V113);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk261)(Lclptr261);
	vs_top=sup;
	V124= vs_base[0];
	goto T258;
	goto T266;
T266:;
	V124= (V129);}
	goto T258;
T258:;
	V125= (*(LnkLI265))((V124),(V123));
	if((V125)==Cnil){
	V126= Cnil;
	goto T270;}
	base[4]= (V125);
	base[5]= VV[18];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk266)(Lclptr266);
	vs_top=sup;
	V126= vs_base[0];
	goto T270;
T270:;
	{object V131;
	object V132;
	if(!(((VV[45]->s.s_dbind))==(VV[46]))){
	goto T276;}
	base[4]= (V115);
	base[5]= (V114);
	base[6]= (V124);
	base[7]= (V113);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk267)();
	goto T274;
	goto T276;
T276:;
	base[4]= (V124);
	base[5]= (V113);
	base[6]= (V114);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk268)();
	goto T274;
T274:;
	if(vs_base>=vs_top){vs_top=sup;goto T285;}
	V131= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T286;}
	V132= vs_base[0];
	vs_top=sup;
	goto T287;
	goto T285;
T285:;
	V131= Cnil;
	goto T286;
T286:;
	V132= Cnil;
	goto T287;
T287:;
	base[4]= (V131);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk269)();
	vs_top=sup;
	V136= ({object _tmp=get(VV[266],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[266])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[266])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V137 = V136,
	(type_of(V137) == t_sfun ?(*((V137)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V137)==t_vfun) ?
	(*((V137)->sfn.sfn_self)):
	(fcall.fun=(V137),fcalln))(V132,V113,V114)));
	V141= ({object _tmp=get(VV[270],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[270])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[270])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V142 = V141,
	(type_of(V142) == t_sfun ?(*((V142)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V142)==t_vfun) ?
	(*((V142)->sfn.sfn_self)):
	(fcall.fun=(V142),fcalln))(V131,V113,V114)));}
	if(((V125))==Cnil){
	goto T294;}
	base[4]= (V113);
	base[5]= VV[18];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk266)(Lclptr266);
	vs_top=sup;
	V143= vs_base[0];
	if(((V126))==(V143)){
	goto T294;}
	{object V144;
	V144= make_cons((V124),(V123));
	(VV[47]->s.s_dbind)= make_cons((V144),(VV[47]->s.s_dbind));
	{object V145 = (VV[47]->s.s_dbind);
	VMR6(V145)}}
	goto T294;
T294:;
	{object V146 = Cnil;
	VMR6(V146)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOT-DEFINITION-ALLOCATION (STRUCTURE-SLOT-DEFINITION))	*/

static object LI7(V150,V151,V152)

object V150;object V151;object V152;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V154 = VV[49];
	VMR7(V154)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :AFTER (DOCUMENTATION-MIXIN T))	*/

static object LI8(V160,V161,V162,V163,V164)

object V160;object V161;object V162;object V163;object V164;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V166;
	object V168;
	base[2]= VV[50];
	base[3]= V164;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V166= vs_base[0];
	if(((V166))==Cnil){
	goto T312;}
	V168= CMPcar((V166));
	goto T310;
	goto T312;
T312:;
	V168= Cnil;
	goto T310;
T310:;
	if((V166)==Cnil){
	goto T315;}
	base[2]= ({object _tmp=get(VV[272],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[272])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[272])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[3]= V168;
	base[4]= V162;
	base[5]= VV[51];
	vs_top=(vs_base=base+3)+3;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	{object V172 = vs_base[0];
	VMR8(V172)}
	goto T315;
T315:;
	{object V173 = Cnil;
	VMR8(V173)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD DOCUMENTATION (T))	*/

static object LI9(V178,V179,V180,V181)

object V178;object V179;object V180;object V181;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{register object V182;
	object V183;
	V182= (V181);
	if(((V182))==Cnil){
	goto T326;}
	{object V184;
	V184= CMPcar((V182));
	V182= CMPcdr((V182));
	V183= (V184);
	goto T324;}
	goto T326;
T326:;
	V183= Cnil;
	goto T324;
T324:;
	base[1]= (V180);
	base[2]= (V183);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk273)();
	vs_top=sup;
	{object V185 = vs_base[0];
	VMR9(V185)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD (SETF DOCUMENTATION) (T T))	*/

static object LI10(V191,V192,V193,V194,V195)

object V191;object V192;object V193;object V194;object V195;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{register object V196;
	object V197;
	V196= (V195);
	if(((V196))==Cnil){
	goto T338;}
	{object V198;
	V198= CMPcar((V196));
	V196= CMPcdr((V196));
	V197= (V198);
	goto T336;}
	goto T338;
T338:;
	V197= Cnil;
	goto T336;
T336:;
	base[1]= VV[52];
	base[2]= (V194);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	{object V199 = vs_base[0];
	VMR10(V199)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD DOCUMENTATION (DOCUMENTATION-MIXIN))	*/

static object LI11(V204,V205,V206,V207)

object V204;object V205;object V206;object V207;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{register object V208;
	object V209;
	V208= (V207);
	if(((V208))==Cnil){
	goto T350;}
	{object V210;
	V210= CMPcar((V208));
	V208= CMPcdr((V208));
	V209= (V210);
	goto T348;}
	goto T350;
T350:;
	V209= Cnil;
	goto T348;
T348:;
	{object V211 = (*(LnkLI272))((V206),VV[51]);
	VMR11(V211)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD (SETF DOCUMENTATION) (T DOCUMENTATION-MIXIN))	*/

static object LI12(V217,V218,V219,V220,V221)

object V217;object V218;object V219;object V220;object V221;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{register object V222;
	object V223;
	V222= (V221);
	if(((V222))==Cnil){
	goto T360;}
	{object V224;
	V224= CMPcar((V222));
	V222= CMPcdr((V222));
	V223= (V224);
	goto T358;}
	goto T360;
T360:;
	V223= Cnil;
	goto T358;
T358:;
	base[1]= ({object _tmp=get(VV[272],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[272])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[272])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[2]= V219;
	base[3]= V220;
	base[4]= VV[51];
	vs_top=(vs_base=base+2)+3;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	{object V228 = vs_base[0];
	VMR12(V228)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD DOCUMENTATION (STANDARD-SLOT-DEFINITION))	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{register object V229;
	object V230;
	register object V231;
	object V232;
	check_arg(4);
	V229=(base[0]);
	V230=(base[1]);
	V231=(base[2]);
	V232=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V233;
	object V234;
	V233= (V232);
	if(((V233))==Cnil){
	goto T374;}
	{object V235;
	V235= CMPcar((V233));
	V233= CMPcdr((V233));
	V234= (V235);
	goto T372;}
	goto T374;
T374:;
	V234= Cnil;
	goto T372;
T372:;
	{object V236;
	object V237;
	V236= CMPcar((V229));
	V237= CMPcdr((V229));
	{object V238;
	if(type_of(V231)==t_structure){
	goto T387;}
	goto T385;
	goto T387;
T387:;
	if(!(((V231)->str.str_def)==(VV[54]))){
	goto T385;}
	V238= STREF(object,(V231),4);
	goto T383;
	goto T385;
T385:;{object V240;
	V240= (VV[16]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V231);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V241= vs_base[0];
	if(!((V240)==(CMPcar(V241)))){
	goto T390;}}
	V238= CMPcar(((V231))->cc.cc_turbo[12]);
	goto T383;
	goto T390;
T390:;
	V238= Cnil;
	goto T383;
T383:;
	{register object V242;
	V242= ((V236))->v.v_self[1];
	if(!(type_of(V242)==t_fixnum)){
	goto T399;}
	V242= ((V238))->v.v_self[fix((V242))];
	goto T397;
	goto T399;
T399:;
	V242= VV[17];
	goto T397;
T397:;
	if(!(((V242))==(VV[17]))){
	goto T402;}
	base[5]= (V231);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk274)(Lclptr274);
	return;
	goto T402;
T402:;
	base[5]= (V242);
	vs_top=(vs_base=base+5)+1;
	return;}}}}
	}
}
/*	function definition for (FAST-METHOD (SETF DOCUMENTATION) (T STANDARD-SLOT-DEFINITION))	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{register object V244;
	object V245;
	object V246;
	register object V247;
	object V248;
	check_arg(5);
	V244=(base[0]);
	V245=(base[1]);
	V246=(base[2]);
	V247=(base[3]);
	V248=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V249;
	object V250;
	V249= (V248);
	if(((V249))==Cnil){
	goto T410;}
	{object V251;
	V251= CMPcar((V249));
	V249= CMPcdr((V249));
	V250= (V251);
	goto T408;}
	goto T410;
T410:;
	V250= Cnil;
	goto T408;
T408:;
	{object V252;
	object V253;
	V252= CMPcar((V244));
	V253= CMPcdr((V244));
	{object V254;
	if(type_of(V247)==t_structure){
	goto T423;}
	goto T421;
	goto T423;
T423:;
	if(!(((V247)->str.str_def)==(VV[56]))){
	goto T421;}
	V254= STREF(object,(V247),4);
	goto T419;
	goto T421;
T421:;{object V256;
	V256= (VV[16]->s.s_dbind);
	base[6]= small_fixnum(14);
	base[7]= (V247);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V257= vs_base[0];
	if(!((V256)==(CMPcar(V257)))){
	goto T426;}}
	V254= CMPcar(((V247))->cc.cc_turbo[12]);
	goto T419;
	goto T426;
T426:;
	V254= Cnil;
	goto T419;
T419:;
	{object V259;
	V259= ((V252))->v.v_self[1];
	if(!(type_of(V259)==t_fixnum)){
	goto T433;}
	base[6]= ((V254))->v.v_self[fix((V259))]= (V246);
	vs_top=(vs_base=base+6)+1;
	return;
	goto T433;
T433:;
	base[6]= V246;
	base[7]= (V247);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk275)(Lclptr275);
	return;}}}}
	}
}
/*	local entry for function (FAST-METHOD CLASS-FINALIZED-P (PCL-CLASS))	*/

static object LI15(V264,V265,V266)

register object V264;object V265;register object V266;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V268;
	object V269;
	V268= CMPcar((V264));
	V269= CMPcdr((V264));
	{object V270;
	if(type_of(V266)==t_structure){
	goto T447;}
	goto T445;
	goto T447;
T447:;
	if(!(((V266)->str.str_def)==(VV[58]))){
	goto T445;}
	V270= STREF(object,(V266),4);
	goto T443;
	goto T445;
T445:;{object V272;
	V272= (VV[16]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V266);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V273= vs_base[0];
	if(!((V272)==(CMPcar(V273)))){
	goto T450;}}
	V270= CMPcar(((V266))->cc.cc_turbo[12]);
	goto T443;
	goto T450;
T450:;
	V270= Cnil;
	goto T443;
T443:;
	{register object V276;
	V276= ((V268))->v.v_self[1];
	if(!(type_of(V276)==t_fixnum)){
	goto T461;}
	V276= ((V270))->v.v_self[fix((V276))];
	goto T459;
	goto T461;
T461:;
	V276= VV[17];
	goto T459;
T459:;
	if(!(((V276))==(VV[17]))){
	goto T464;}
	base[0]= (V266);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk276)(Lclptr276);
	vs_top=sup;
	V275= vs_base[0];
	goto T456;
	goto T464;
T464:;
	V275= (V276);}
	goto T456;
T456:;
	{object V278 = ((((V275)==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR15(V278)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD CLASS-PROTOTYPE (STD-CLASS))	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{register object V279;
	object V280;
	register object V281;
	check_arg(3);
	V279=(base[0]);
	V280=(base[1]);
	V281=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V283;
	object V284;
	V283= CMPcar((V279));
	V284= CMPcdr((V279));
	{object V285;
	if(type_of(V281)==t_structure){
	goto T477;}
	goto T475;
	goto T477;
T477:;
	if(!(((V281)->str.str_def)==(VV[60]))){
	goto T475;}
	V285= STREF(object,(V281),4);
	goto T473;
	goto T475;
T475:;{object V287;
	V287= (VV[16]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V281);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V288= vs_base[0];
	if(!((V287)==(CMPcar(V288)))){
	goto T480;}}
	V285= CMPcar(((V281))->cc.cc_turbo[12]);
	goto T473;
	goto T480;
T480:;
	V285= Cnil;
	goto T473;
T473:;
	{object V290;
	{register object V291;
	V291= ((V283))->v.v_self[1];
	if(!(type_of(V291)==t_fixnum)){
	goto T491;}
	V291= ((V285))->v.v_self[fix((V291))];
	goto T489;
	goto T491;
T491:;
	V291= VV[17];
	goto T489;
T489:;
	if(!(((V291))==(VV[17]))){
	goto T494;}
	base[3]= (V281);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk277)(Lclptr277);
	vs_top=sup;
	V290= vs_base[0];
	goto T486;
	goto T494;
T494:;
	V290= (V291);}
	goto T486;
T486:;
	if(((V290))==Cnil){
	goto T498;}
	base[3]= (V290);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T498;
T498:;
	{object V293;
	base[3]= (V281);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V293= vs_base[0];
	{object V294;
	V294= ((V283))->v.v_self[1];
	if(!(type_of(V294)==t_fixnum)){
	goto T504;}
	base[3]= ((V285))->v.v_self[fix((V294))]= ((V293));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T504;
T504:;
	base[3]= (V293);
	base[4]= (V281);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk279)(Lclptr279);
	return;}}}}}
	}
}
/*	function definition for (FAST-METHOD CLASS-PROTOTYPE (STRUCTURE-CLASS))	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{register object V296;
	object V297;
	register object V298;
	check_arg(3);
	V296=(base[0]);
	V297=(base[1]);
	V298=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V300;
	object V301;
	V300= CMPcar((V296));
	V301= CMPcdr((V296));
	{object V302;
	if(type_of(V298)==t_structure){
	goto T518;}
	goto T516;
	goto T518;
T518:;
	if(!(((V298)->str.str_def)==(VV[62]))){
	goto T516;}
	V302= STREF(object,(V298),4);
	goto T514;
	goto T516;
T516:;{object V304;
	V304= (VV[16]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V298);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V305= vs_base[0];
	if(!((V304)==(CMPcar(V305)))){
	goto T521;}}
	V302= CMPcar(((V298))->cc.cc_turbo[12]);
	goto T514;
	goto T521;
T521:;
	V302= Cnil;
	goto T514;
T514:;
	{object V307;
	{register object V308;
	V308= ((V300))->v.v_self[2];
	if(!(type_of(V308)==t_fixnum)){
	goto T532;}
	V308= ((V302))->v.v_self[fix((V308))];
	goto T530;
	goto T532;
T532:;
	V308= VV[17];
	goto T530;
T530:;
	if(!(((V308))==(VV[17]))){
	goto T535;}
	base[3]= (V298);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk277)(Lclptr277);
	vs_top=sup;
	V307= vs_base[0];
	goto T527;
	goto T535;
T535:;
	V307= (V308);}
	goto T527;
T527:;
	if(((V307))==Cnil){
	goto T539;}
	base[3]= (V307);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T539;
T539:;
	{object V310;
	{register object V311;
	V311= ((V300))->v.v_self[1];
	if(!(type_of(V311)==t_fixnum)){
	goto T549;}
	V311= ((V302))->v.v_self[fix((V311))];
	goto T547;
	goto T549;
T549:;
	V311= VV[17];
	goto T547;
T547:;
	if(!(((V311))==(VV[17]))){
	goto T552;}
	base[3]= (V298);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T543;}
	goto T544;
	goto T552;
T552:;
	if(((V311))==Cnil){
	goto T543;}}
	goto T544;
T544:;
	base[3]= (V298);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V310= vs_base[0];
	goto T541;
	goto T543;
T543:;
	{register object V314;
	V314= ((V300))->v.v_self[3];
	if(!(type_of(V314)==t_fixnum)){
	goto T561;}
	V314= ((V302))->v.v_self[fix((V314))];
	goto T559;
	goto T561;
T561:;
	V314= VV[17];
	goto T559;
T559:;
	if(!(((V314))==(VV[17]))){
	goto T564;}
	base[3]= (V298);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk276)(Lclptr276);
	vs_top=sup;
	V313= vs_base[0];
	goto T556;
	goto T564;
T564:;
	V313= (V314);}
	goto T556;
T556:;
	V310= (VFUN_NARGS=1,(*(LnkLI281))(V313));
	goto T541;
T541:;
	{object V316;
	V316= ((V300))->v.v_self[2];
	if(!(type_of(V316)==t_fixnum)){
	goto T569;}
	base[3]= ((V302))->v.v_self[fix((V316))]= ((V310));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T569;
T569:;
	base[3]= (V310);
	base[4]= (V298);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk279)(Lclptr279);
	return;}}}}}
	}
}
/*	local entry for function (FAST-METHOD CLASS-DIRECT-DEFAULT-INITARGS (SLOT-CLASS))	*/

static object LI18(V321,V322,V323)

object V321;object V322;object V323;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V325 = (*(LnkLI272))((V323),VV[63]);
	VMR18(V325)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-DEFAULT-INITARGS (SLOT-CLASS))	*/

static object LI19(V329,V330,V331)

object V329;object V330;object V331;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V333 = (*(LnkLI272))((V331),VV[64]);
	VMR19(V333)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-CONSTRUCTORS (SLOT-CLASS))	*/

static object LI20(V337,V338,V339)

object V337;object V338;object V339;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V341 = (*(LnkLI272))((V339),VV[65]);
	VMR20(V341)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-SLOT-CELLS (STD-CLASS))	*/

static object LI21(V345,V346,V347)

object V345;object V346;object V347;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{object V349 = (*(LnkLI272))((V347),VV[66]);
	VMR21(V349)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD ADD-DIRECT-SUBCLASS (CLASS CLASS))	*/

static object LI22(V354,V355,V356,V357)

register object V354;object V355;register object V356;register object V357;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{object V359;
	object V360;
	V359= CMPcar((V354));
	V360= CMPcdr((V354));
	{object V361;
	if(type_of(V356)==t_structure){
	goto T591;}
	goto T589;
	goto T591;
T591:;
	if(!(((V356)->str.str_def)==(VV[68]))){
	goto T589;}
	V361= STREF(object,(V356),4);
	goto T587;
	goto T589;
T589:;{object V363;
	V363= (VV[16]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V356);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V364= vs_base[0];
	if(!((V363)==(CMPcar(V364)))){
	goto T594;}}
	V361= CMPcar(((V356))->cc.cc_turbo[12]);
	goto T587;
	goto T594;
T594:;
	V361= Cnil;
	goto T587;
T587:;
	{object V367;
	base[0]= V357;
	{register object V368;
	V368= ((V359))->v.v_self[1];
	if(!(type_of(V368)==t_fixnum)){
	goto T608;}
	V368= ((V361))->v.v_self[fix((V368))];
	goto T606;
	goto T608;
T608:;
	V368= VV[17];
	goto T606;
T606:;
	if(!(((V368))==(VV[17]))){
	goto T611;}
	base[2]= (V356);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	base[1]= vs_base[0];
	goto T603;
	goto T611;
T611:;
	base[1]= (V368);}
	goto T603;
T603:;
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	V367= vs_base[0];
	{object V370;
	V370= ((V359))->v.v_self[1];
	if(!(type_of(V370)==t_fixnum)){
	goto T616;}
	(void)(((V361))->v.v_self[fix((V370))]= ((V367)));
	goto T600;
	goto T616;
T616:;
	base[0]= (V367);
	base[1]= (V356);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;}}
	goto T600;
T600:;
	{object V372 = (V357);
	VMR22(V372)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-DIRECT-SUBCLASS (CLASS CLASS))	*/

static object LI23(V377,V378,V379,V380)

register object V377;object V378;register object V379;register object V380;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	{object V382;
	object V383;
	V382= CMPcar((V377));
	V383= CMPcdr((V377));
	{object V384;
	if(type_of(V379)==t_structure){
	goto T630;}
	goto T628;
	goto T630;
T630:;
	if(!(((V379)->str.str_def)==(VV[70]))){
	goto T628;}
	V384= STREF(object,(V379),4);
	goto T626;
	goto T628;
T628:;{object V386;
	V386= (VV[16]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V379);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V387= vs_base[0];
	if(!((V386)==(CMPcar(V387)))){
	goto T633;}}
	V384= CMPcar(((V379))->cc.cc_turbo[12]);
	goto T626;
	goto T633;
T633:;
	V384= Cnil;
	goto T626;
T626:;
	{object V389;
	base[0]= (V380);
	{register object V390;
	V390= ((V382))->v.v_self[1];
	if(!(type_of(V390)==t_fixnum)){
	goto T647;}
	V390= ((V384))->v.v_self[fix((V390))];
	goto T645;
	goto T647;
T647:;
	V390= VV[17];
	goto T645;
T645:;
	if(!(((V390))==(VV[17]))){
	goto T650;}
	base[2]= (V379);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	base[1]= vs_base[0];
	goto T642;
	goto T650;
T650:;
	base[1]= (V390);}
	goto T642;
T642:;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk145)();
	vs_top=sup;
	V389= vs_base[0];
	{object V392;
	V392= ((V382))->v.v_self[1];
	if(!(type_of(V392)==t_fixnum)){
	goto T655;}
	(void)(((V384))->v.v_self[fix((V392))]= ((V389)));
	goto T639;
	goto T655;
T655:;
	base[0]= (V389);
	base[1]= (V379);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;}}
	goto T639;
T639:;
	{object V394 = (V380);
	VMR23(V394)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD ADD-DIRECT-METHOD (CLASS METHOD))	*/

static object LI24(V399,V400,V401,V402)

register object V399;object V400;register object V401;register object V402;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{register object V404;
	object V405;
	V404= CMPcar((V399));
	V405= CMPcdr((V399));
	{object V406;
	if(type_of(V401)==t_structure){
	goto T669;}
	goto T667;
	goto T669;
T669:;
	if(!(((V401)->str.str_def)==(VV[72]))){
	goto T667;}
	V406= STREF(object,(V401),4);
	goto T665;
	goto T667;
T667:;{object V408;
	V408= (VV[16]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V401);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V409= vs_base[0];
	if(!((V408)==(CMPcar(V409)))){
	goto T672;}}
	V406= CMPcar(((V401))->cc.cc_turbo[12]);
	goto T665;
	goto T672;
T672:;
	V406= Cnil;
	goto T665;
T665:;
	{object V411;
	object V412;
	{register object V413;
	V413= ((V404))->v.v_self[1];
	if(!(type_of(V413)==t_fixnum)){
	goto T685;}
	V413= ((V406))->v.v_self[fix((V413))];
	goto T683;
	goto T685;
T685:;
	V413= VV[17];
	goto T683;
T683:;
	if(!(((V413))==(VV[17]))){
	goto T688;}
	base[2]= (V401);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V411= vs_base[0];
	goto T680;
	goto T688;
T688:;
	V411= (V413);}
	goto T680;
T680:;
	base[2]= (V402);
	{register object V416;
	V416= ((V404))->v.v_self[1];
	if(!(type_of(V416)==t_fixnum)){
	goto T699;}
	V416= ((V406))->v.v_self[fix((V416))];
	goto T697;
	goto T699;
T699:;
	V416= VV[17];
	goto T697;
T697:;
	if(!(((V416))==(VV[17]))){
	goto T702;}
	base[4]= (V401);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V415= vs_base[0];
	goto T694;
	goto T702;
T702:;
	V415= (V416);}
	goto T694;
T694:;
	base[3]= CMPcar(V415);
	vs_top=(vs_base=base+2)+2;
	Ladjoin();
	vs_top=sup;
	V412= vs_base[0];
	((V411))->c.c_car = (V412);}
	{object V418;
	{register object V420;
	V420= ((V404))->v.v_self[1];
	if(!(type_of(V420)==t_fixnum)){
	goto T711;}
	V420= ((V406))->v.v_self[fix((V420))];
	goto T709;
	goto T711;
T711:;
	V420= VV[17];
	goto T709;
T709:;
	if(!(((V420))==(VV[17]))){
	goto T714;}
	base[1]= (V401);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V418= vs_base[0];
	goto T706;
	goto T714;
T714:;
	V418= (V420);}
	goto T706;
T706:;
	((V418))->c.c_cdr = Cnil;}
	{object V422 = (V402);
	VMR24(V422)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-DIRECT-METHOD (CLASS METHOD))	*/

static object LI25(V427,V428,V429,V430)

register object V427;object V428;register object V429;register object V430;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{register object V432;
	object V433;
	V432= CMPcar((V427));
	V433= CMPcdr((V427));
	{object V434;
	if(type_of(V429)==t_structure){
	goto T728;}
	goto T726;
	goto T728;
T728:;
	if(!(((V429)->str.str_def)==(VV[74]))){
	goto T726;}
	V434= STREF(object,(V429),4);
	goto T724;
	goto T726;
T726:;{object V436;
	V436= (VV[16]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V429);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V437= vs_base[0];
	if(!((V436)==(CMPcar(V437)))){
	goto T731;}}
	V434= CMPcar(((V429))->cc.cc_turbo[12]);
	goto T724;
	goto T731;
T731:;
	V434= Cnil;
	goto T724;
T724:;
	{object V439;
	object V440;
	{register object V441;
	V441= ((V432))->v.v_self[1];
	if(!(type_of(V441)==t_fixnum)){
	goto T744;}
	V441= ((V434))->v.v_self[fix((V441))];
	goto T742;
	goto T744;
T744:;
	V441= VV[17];
	goto T742;
T742:;
	if(!(((V441))==(VV[17]))){
	goto T747;}
	base[2]= (V429);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V439= vs_base[0];
	goto T739;
	goto T747;
T747:;
	V439= (V441);}
	goto T739;
T739:;
	base[2]= (V430);
	{register object V444;
	V444= ((V432))->v.v_self[1];
	if(!(type_of(V444)==t_fixnum)){
	goto T758;}
	V444= ((V434))->v.v_self[fix((V444))];
	goto T756;
	goto T758;
T758:;
	V444= VV[17];
	goto T756;
T756:;
	if(!(((V444))==(VV[17]))){
	goto T761;}
	base[4]= (V429);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V443= vs_base[0];
	goto T753;
	goto T761;
T761:;
	V443= (V444);}
	goto T753;
T753:;
	base[3]= CMPcar(V443);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk145)();
	vs_top=sup;
	V440= vs_base[0];
	((V439))->c.c_car = (V440);}
	{object V446;
	{register object V448;
	V448= ((V432))->v.v_self[1];
	if(!(type_of(V448)==t_fixnum)){
	goto T770;}
	V448= ((V434))->v.v_self[fix((V448))];
	goto T768;
	goto T770;
T770:;
	V448= VV[17];
	goto T768;
T768:;
	if(!(((V448))==(VV[17]))){
	goto T773;}
	base[1]= (V429);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V446= vs_base[0];
	goto T765;
	goto T773;
T773:;
	V446= (V448);}
	goto T765;
T765:;
	((V446))->c.c_cdr = Cnil;}
	{object V450 = (V430);
	VMR25(V450)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-DIRECT-METHODS (CLASS))	*/

static object LI26(V454,V455,V456)

register object V454;object V455;register object V456;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V458;
	object V459;
	V458= CMPcar((V454));
	V459= CMPcdr((V454));
	{object V460;
	if(type_of(V456)==t_structure){
	goto T787;}
	goto T785;
	goto T787;
T787:;
	if(!(((V456)->str.str_def)==(VV[76]))){
	goto T785;}
	V460= STREF(object,(V456),4);
	goto T783;
	goto T785;
T785:;{object V462;
	V462= (VV[16]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V456);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V463= vs_base[0];
	if(!((V462)==(CMPcar(V463)))){
	goto T790;}}
	V460= CMPcar(((V456))->cc.cc_turbo[12]);
	goto T783;
	goto T790;
T790:;
	V460= Cnil;
	goto T783;
T783:;
	{register object V466;
	V466= ((V458))->v.v_self[1];
	if(!(type_of(V466)==t_fixnum)){
	goto T801;}
	V466= ((V460))->v.v_self[fix((V466))];
	goto T799;
	goto T801;
T801:;
	V466= VV[17];
	goto T799;
T799:;
	if(!(((V466))==(VV[17]))){
	goto T804;}
	base[0]= (V456);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V465= vs_base[0];
	goto T796;
	goto T804;
T804:;
	V465= (V466);}
	goto T796;
T796:;
	{object V468 = CMPcar(V465);
	VMR26(V468)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-DIRECT-GENERIC-FUNCTIONS (CLASS))	*/

static object LI27(V472,V473,V474)

object V472;object V473;register object V474;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V476;
	object V477;
	V476= CMPcar((V472));
	V477= CMPcdr((V472));
	{object V478;
	if(type_of(V474)==t_structure){
	goto T817;}
	goto T815;
	goto T817;
T817:;
	if(!(((V474)->str.str_def)==(VV[78]))){
	goto T815;}
	V478= STREF(object,(V474),4);
	goto T813;
	goto T815;
T815:;{object V480;
	V480= (VV[16]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V474);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V481= vs_base[0];
	if(!((V480)==(CMPcar(V481)))){
	goto T820;}}
	V478= CMPcar(((V474))->cc.cc_turbo[12]);
	goto T813;
	goto T820;
T820:;
	V478= Cnil;
	goto T813;
T813:;
	{object V483;
	{object V485;
	V485= ((V476))->v.v_self[1];
	if(!(type_of(V485)==t_fixnum)){
	goto T832;}
	V485= ((V478))->v.v_self[fix((V485))];
	goto T830;
	goto T832;
T832:;
	V485= VV[17];
	goto T830;
T830:;
	if(!(((V485))==(VV[17]))){
	goto T835;}
	base[0]= (V474);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V484= vs_base[0];
	goto T827;
	goto T835;
T835:;
	V484= (V485);}
	goto T827;
T827:;
	V483= CMPcdr(V484);
	if(((V483))==Cnil){
	goto T839;}
	{object V487 = (V483);
	VMR27(V487)}
	goto T839;
T839:;
	{object V488;
	object V489;
	{object V490;
	V490= ((V476))->v.v_self[1];
	if(!(type_of(V490)==t_fixnum)){
	goto T846;}
	V490= ((V478))->v.v_self[fix((V490))];
	goto T844;
	goto T846;
T846:;
	V490= VV[17];
	goto T844;
T844:;
	if(!(((V490))==(VV[17]))){
	goto T849;}
	base[2]= (V474);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V488= vs_base[0];
	goto T841;
	goto T849;
T849:;
	V488= (V490);}
	goto T841;
T841:;
	{register object V492;
	register object V493;
	V492= Cnil;
	V493= Cnil;
	{register object V494;
	register object V495;
	{object V497;
	V497= ((V476))->v.v_self[1];
	if(!(type_of(V497)==t_fixnum)){
	goto T862;}
	V497= ((V478))->v.v_self[fix((V497))];
	goto T860;
	goto T862;
T862:;
	V497= VV[17];
	goto T860;
T860:;
	if(!(((V497))==(VV[17]))){
	goto T865;}
	base[4]= (V474);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V496= vs_base[0];
	goto T857;
	goto T865;
T865:;
	V496= (V497);}
	goto T857;
T857:;
	V494= CMPcar(V496);
	V495= CMPcar((V494));
	goto T870;
T870:;
	if(!(((V494))==Cnil)){
	goto T871;}
	goto T855;
	goto T871;
T871:;
	{register object V499;
	base[4]= (V495);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk285)(Lclptr285);
	vs_top=sup;
	V499= vs_base[0];
	if(((V492))!=Cnil){
	goto T879;}
	V493= make_cons((V499),Cnil);
	V492= (V493);
	goto T875;
	goto T879;
T879:;
	{register object x= (V499),V500= (V492);
	while(V500!=Cnil)
	if(x==(V500->c.c_car)){
	goto T875;
	}else V500=V500->c.c_cdr;}
	V502= make_cons((V499),Cnil);
	((V493))->c.c_cdr = /* INLINE-ARGS */V502;
	V501= (V493);
	V493= CMPcdr(V501);}
	goto T875;
T875:;
	V494= CMPcdr((V494));
	V495= CMPcar((V494));
	goto T870;}
	goto T855;
T855:;
	V489= (V492);}
	((V488))->c.c_cdr = (V489);
	{object V503 = (V489);
	VMR27(V503)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-METHOD-TABLE (EQL-SPECIALIZER))	*/

static object LI28(V507,V508,V509)

object V507;object V508;object V509;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{object V511 = (VV[79]->s.s_dbind);
	VMR28(V511)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-METHOD-TABLE (CLASS-EQ-SPECIALIZER))	*/

static object LI29(V515,V516,V517)

object V515;object V516;object V517;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{object V519 = (VV[80]->s.s_dbind);
	VMR29(V519)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD ADD-DIRECT-METHOD (SPECIALIZER-WITH-OBJECT METHOD))	*/

static object LI30(V524,V525,V526,V527)

object V524;object V525;register object V526;register object V527;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{object V529;
	object V530;
	register object V531;
	base[3]= (V526);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	V529= vs_base[0];
	base[3]= (V526);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk287)(Lclptr287);
	vs_top=sup;
	V530= vs_base[0];
	base[3]= (V529);
	base[4]= (V530);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V531= vs_base[0];
	if(((V531))!=Cnil){
	goto T906;}
	{object V534;
	V534= make_cons(Cnil,Cnil);
	base[4]= V529;
	base[5]= V530;
	base[6]= (V534);
	vs_top=(vs_base=base+4)+3;
	siLhash_set();
	vs_top=sup;
	V531= vs_base[0];}
	goto T906;
T906:;
	{object V536;
	base[4]= (V527);
	base[5]= CMPcar((V531));
	vs_top=(vs_base=base+4)+2;
	Ladjoin();
	vs_top=sup;
	V536= vs_base[0];
	(V531)->c.c_car = (V536);}
	(V531)->c.c_cdr = Cnil;
	{object V539 = (V527);
	VMR30(V539)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-DIRECT-METHOD (SPECIALIZER-WITH-OBJECT METHOD))	*/

static object LI31(V544,V545,V546,V547)

object V544;object V545;register object V546;register object V547;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{object V549;
	register object V550;
	base[2]= (V546);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	V549= vs_base[0];
	base[2]= (V549);
	base[4]= (V546);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk287)(Lclptr287);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V550= vs_base[0];
	if(((V550))==Cnil){
	goto T929;}
	{object V552;
	base[3]= (V547);
	base[4]= CMPcar((V550));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk145)();
	vs_top=sup;
	V552= vs_base[0];
	(V550)->c.c_car = (V552);}
	(V550)->c.c_cdr = Cnil;
	goto T929;
T929:;
	{object V555 = (V547);
	VMR31(V555)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-DIRECT-METHODS (SPECIALIZER-WITH-OBJECT))	*/

static object LI32(V559,V560,V561)

object V559;object V560;register object V561;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	base[1]= (V561);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	base[0]= vs_base[0];
	base[2]= (V561);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk287)(Lclptr287);
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V563= vs_base[0];
	{object V564 = CMPcar(V563);
	VMR32(V564)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD SPECIALIZER-DIRECT-GENERIC-FUNCTIONS (SPECIALIZER-WITH-OBJECT))	*/

static object LI33(V568,V569,V570)

object V568;object V569;register object V570;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{object V572;
	register object V573;
	base[2]= (V570);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	V572= vs_base[0];
	base[2]= (V572);
	base[4]= (V570);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk287)(Lclptr287);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V573= vs_base[0];
	if(((V573))==Cnil){
	goto T954;}{object V574;
	V574= CMPcdr((V573));
	if(V574==Cnil)goto T956;
	{object V575 = V574;
	VMR33(V575)}
	goto T956;
T956:;}
	{object V577;
	{register object V578;
	register object V579;
	V578= Cnil;
	V579= Cnil;
	{register object V580;
	register object V581;
	V580= CMPcar((V573));
	V581= CMPcar((V580));
	goto T965;
T965:;
	if(!(((V580))==Cnil)){
	goto T966;}
	goto T961;
	goto T966;
T966:;
	{register object V582;
	base[5]= (V581);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk285)(Lclptr285);
	vs_top=sup;
	V582= vs_base[0];
	if(((V578))!=Cnil){
	goto T974;}
	V579= make_cons((V582),Cnil);
	V578= (V579);
	goto T970;
	goto T974;
T974:;
	{register object x= (V582),V583= (V578);
	while(V583!=Cnil)
	if(x==(V583->c.c_car)){
	goto T970;
	}else V583=V583->c.c_cdr;}
	V585= make_cons((V582),Cnil);
	((V579))->c.c_cdr = /* INLINE-ARGS */V585;
	V584= (V579);
	V579= CMPcdr(V584);}
	goto T970;
T970:;
	V580= CMPcdr((V580));
	V581= CMPcar((V580));
	goto T965;}
	goto T961;
T961:;
	V577= (V578);}
	(V573)->c.c_cdr = (V577);
	{object V586 = (V577);
	VMR33(V586)}}
	goto T954;
T954:;
	{object V587 = Cnil;
	VMR33(V587)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAP-SPECIALIZERS	*/

static object LI35(V589)

object V589;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	base[0]=MMcons((V589),Cnil);
	base[1]= 
	make_cclosure_new(LC137,Cnil,base[0],Cdata);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk288)();
	vs_top=sup;
	base[1]= 
	make_cclosure_new(LC138,Cnil,base[0],Cdata);
	base[2]= (VV[79]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lmaphash();
	vs_top=sup;
	base[1]= 
	make_cclosure_new(LC139,Cnil,base[0],Cdata);
	base[2]= (VV[81]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lmaphash();
	vs_top=sup;
	{object V590 = Cnil;
	VMR34(V590)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAP-ALL-GENERIC-FUNCTIONS	*/

static object LI37(V592)

object V592;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	base[0]=MMcons((V592),Cnil);
	base[2]= VV[32];
	base[3]= VV[33];
	vs_top=(vs_base=base+2)+2;
	Lmake_hash_table();
	vs_top=sup;
	base[1]= vs_base[0];
	base[1]=MMcons(base[1],base[0]);
	V593= 
	make_cclosure_new(LC140,Cnil,base[1],Cdata);
	(void)((*(LnkLI289))(V593));
	{object V594 = Cnil;
	VMR35(V594)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :AFTER (CLASS-EQ-SPECIALIZER T))	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{register object V595;
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
	goto T1011;}
	goto T1009;
	goto T1011;
T1011:;
	if(!(((V597)->str.str_def)==(VV[84]))){
	goto T1009;}
	V603= STREF(object,(V597),4);
	goto T1007;
	goto T1009;
T1009:;{object V605;
	V605= (VV[16]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V597);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V606= vs_base[0];
	if(!((V605)==(CMPcar(V606)))){
	goto T1014;}}
	V603= CMPcar(((V597))->cc.cc_turbo[12]);
	goto T1007;
	goto T1014;
T1014:;
	V603= Cnil;
	goto T1007;
T1007:;
	{object V607;
	base[5]= (V597);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk290)(Lclptr290);
	vs_top=sup;
	V608= vs_base[0];
	V607= list(2,VV[83],V608);
	{object V609;
	V609= ((V601))->v.v_self[1];
	if(!(type_of(V609)==t_fixnum)){
	goto T1024;}
	base[5]= ((V603))->v.v_self[fix((V609))]= ((V607));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T1024;
T1024:;
	base[5]= (V607);
	base[6]= (V597);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk291)(Lclptr291);
	return;}}}}
	}
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :AFTER (EQL-SPECIALIZER T))	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	{register object V611;
	object V612;
	register object V613;
	object V614;
	object V615;
	check_arg(5);
	V611=(base[0]);
	V612=(base[1]);
	V613=(base[2]);
	V614=(base[3]);
	V615=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V617;
	object V618;
	V617= CMPcar((V611));
	V618= CMPcdr((V611));
	{object V619;
	if(type_of(V613)==t_structure){
	goto T1038;}
	goto T1036;
	goto T1038;
T1038:;
	if(!(((V613)->str.str_def)==(VV[87]))){
	goto T1036;}
	V619= STREF(object,(V613),4);
	goto T1034;
	goto T1036;
T1036:;{object V621;
	V621= (VV[16]->s.s_dbind);
	base[5]= small_fixnum(14);
	base[6]= (V613);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V622= vs_base[0];
	if(!((V621)==(CMPcar(V622)))){
	goto T1041;}}
	V619= CMPcar(((V613))->cc.cc_turbo[12]);
	goto T1034;
	goto T1041;
T1041:;
	V619= Cnil;
	goto T1034;
T1034:;
	{object V623;
	base[5]= (V613);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	V624= vs_base[0];
	V623= list(2,VV[86],V624);
	{object V625;
	V625= ((V617))->v.v_self[1];
	if(!(type_of(V625)==t_fixnum)){
	goto T1051;}
	base[5]= ((V619))->v.v_self[fix((V625))]= ((V623));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T1051;
T1051:;
	base[5]= (V623);
	base[6]= (V613);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk291)(Lclptr291);
	return;}}}}
	}
}
/*	local entry for function REAL-LOAD-DEFCLASS	*/

static object LI40(V633,V634,V635,V636,V637,V638)

object V633;object V634;object V635;object V636;object V637;object V638;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	(void)((*(LnkLI292))((V638)));
	{object V639;
	base[0]= (V633);
	base[1]= VV[88];
	base[2]= (V634);
	base[3]= VV[89];
	base[4]= (V635);
	base[5]= VV[90];
	base[6]= (V636);
	base[7]= VV[91];
	V641= list(2,VV[92],(V633));
	vs_base=vs_top;
	(void) (*Lnk293)();
	vs_top=sup;
	V642= vs_base[0];
	base[8]= list(2,/* INLINE-ARGS */V641,V642);
	{object V640;
	V640= (V637);
	 vs_top=base+9;
	 while(V640!=Cnil)
	 {vs_push((V640)->c.c_car);V640=(V640)->c.c_cdr;}
	vs_base=base+0;}
	(void) (*Lnk294)();
	vs_top=sup;
	V639= vs_base[0];
	{object V643 = (V639);
	VMR38(V643)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for ENSURE-CLASS	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	{object V644;
	object V645;
	if(vs_top-vs_base<1) too_few_arguments();
	V644=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V645=(base[1]);
	vs_top=sup;
	base[2]=VV[295]->s.s_gfdef;
	base[3]= (V644);
	base[4]= (VFUN_NARGS=2,(*(LnkLI296))((V644),Cnil));
	{object V646;
	V646= (V645);
	 vs_top=base+5;
	 while(V646!=Cnil)
	 {vs_push((V646)->c.c_car);V646=(V646)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk295)(Lclptr295);
	return;
	}
}
/*	local entry for function (FAST-METHOD ENSURE-CLASS-USING-CLASS (T NULL))	*/

static object LI42(V652,V653,V654,V655,V656)

object V652;object V653;register object V654;register object V655;object V656;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{object V659;
	object V660;
	base[0]= (V655);
	base[1]= V656;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk297)();
	if(vs_base>=vs_top){vs_top=sup;goto T1076;}
	V659= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1077;}
	V660= vs_base[0];
	vs_top=sup;
	goto T1078;
	goto T1076;
T1076:;
	V659= Cnil;
	goto T1077;
T1077:;
	V660= Cnil;
	goto T1078;
T1078:;
	base[1]= (V659);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk298)(Lclptr298);
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V654);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	base[0]=VV[300]->s.s_gfdef;
	base[1]= (V659);
	base[2]= VV[1];
	base[3]= (V654);
	{object V661;
	V661= (V660);
	 vs_top=base+4;
	 while(V661!=Cnil)
	 {vs_push((V661)->c.c_car);V661=(V661)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	V655= vs_base[0];
	V664= ({object _tmp=get(VV[296],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[296])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[296])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V665 = V664,
	(type_of(V665) == t_sfun ?(*((V665)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V665)==t_vfun) ?
	(*((V665)->sfn.sfn_self)):
	(fcall.fun=(V665),fcalln))(V655,V654)));
	base[0]= (V655);
	base[1]= (V654);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	{object V666 = (V655);
	VMR40(V666)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD ENSURE-CLASS-USING-CLASS (T PCL-CLASS))	*/

static object LI43(V672,V673,V674,V675,V676)

object V672;object V673;register object V674;register object V675;object V676;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V679;
	object V680;
	base[0]= (V675);
	base[1]= V676;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk297)();
	if(vs_base>=vs_top){vs_top=sup;goto T1099;}
	V679= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1100;}
	V680= vs_base[0];
	vs_top=sup;
	goto T1101;
	goto T1099;
T1099:;
	V679= Cnil;
	goto T1100;
T1100:;
	V680= Cnil;
	goto T1101;
T1101:;
	V681= (*(LnkLI301))((V675));
	if((/* INLINE-ARGS */V681)==((V679))){
	goto T1102;}
	base[0]= (V675);
	base[1]= (V679);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk302)(Lclptr302);
	vs_top=sup;
	goto T1102;
T1102:;
	base[0]=VV[303]->s.s_gfdef;
	base[1]= (V675);
	{object V682;
	V682= (V680);
	 vs_top=base+2;
	 while(V682!=Cnil)
	 {vs_push((V682)->c.c_car);V682=(V682)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk303)(Lclptr303);
	vs_top=sup;
	V685= ({object _tmp=get(VV[296],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[296])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[296])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V686 = V685,
	(type_of(V686) == t_sfun ?(*((V686)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V686)==t_vfun) ?
	(*((V686)->sfn.sfn_self)):
	(fcall.fun=(V686),fcalln))(V675,V674)));
	base[0]= (V675);
	base[1]= (V674);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk299)(Lclptr299);
	vs_top=sup;
	{object V687 = (V675);
	VMR41(V687)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-PREDICATE-NAME (T))	*/

static object LI44(V691,V692,V693)

object V691;object V692;object V693;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	{object V695 = VV[93];
	VMR42(V695)}
	return Cnil;
}
/*	function definition for ENSURE-CLASS-VALUES	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{object V696;
	object V697;
	check_arg(2);
	V696=(base[0]);
	V697=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V698;
	object V699;
	object V700;
	object V701;
	object V702;
	object V703;
	base[8]= (V697);
	vs_top=(vs_base=base+8)+1;
	Lcopy_list();
	vs_top=sup;
	V698= vs_base[0];
	V699= make_cons(small_fixnum(1),Cnil);
	base[8]= (V698);
	base[9]= VV[88];
	base[10]= (V699);
	vs_top=(vs_base=base+8)+3;
	Lgetf();
	vs_top=sup;
	V700= vs_base[0];
	base[8]= (V698);
	base[9]= VV[89];
	base[10]= (V699);
	vs_top=(vs_base=base+8)+3;
	Lgetf();
	vs_top=sup;
	V701= vs_base[0];
	base[8]= (V698);
	base[9]= VV[90];
	base[10]= (V699);
	vs_top=(vs_base=base+8)+3;
	Lgetf();
	vs_top=sup;
	V702= vs_base[0];
	if(!(((((V700))==((V699))?Ct:Cnil))==Cnil)){
	goto T1134;}
	V703= (VFUN_NARGS=1,(*(LnkLI296))((V700)));
	goto T1132;
	goto T1134;
T1134:;
	if(((V696))==Cnil){
	goto T1136;}
	base[8]= (V696);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk304)(Lclptr304);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1137;}
	goto T1136;
T1136:;
	V703= (VV[94]->s.s_dbind);
	goto T1132;
	goto T1137;
T1137:;
	V703= (*(LnkLI301))((V696));
	goto T1132;
T1132:;
	{object V704;
	object V705;
	object V706;
	base[8]= (V698);
	base[9]= VV[90];
	vs_top=(vs_base=base+8)+2;
	Lgetf();
	vs_top=sup;
	V704= vs_base[0];
	V705= Cnil;
	V706= Cnil;
	base[8]=MMcons(Cnil,Cnil);
	goto T1147;
T1147:;
	if(!(type_of((V704))!=t_cons)){
	goto T1149;}
	goto T1148;
	goto T1149;
T1149:;
	{object V707;
	V707= (V704);
	V705= CMPcar((V707));
	V707= CMPcdr((V707));
	V706= (V707);}
	V704= CMPcdr((V704));
	base[9]= (V705);
	base[10]= VV[1];
	vs_top=(vs_base=base+9)+2;
	Lgetf();
	vs_top=sup;
	(base[8]->c.c_car)= vs_base[0];
	base[9]= 
	make_cclosure_new(LC141,Cnil,base[8],Cdata);
	base[10]= (V706);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk305)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1166;}
	base[9]= VV[95];
	base[10]= VV[96];
	base[11]= (base[8]->c.c_car);
	vs_top=(vs_base=base+9)+3;
	(void) (*Lnk306)();
	vs_top=sup;
	goto T1164;
	goto T1166;
T1166:;
	{register object V708;
	register object V709;
	register object V710;
	object V711;
	V708= (V705);
	V709= Cnil;
	V710= Cnil;
	V711= Cnil;
	goto T1174;
T1174:;
	if(!(type_of((V708))!=t_cons)){
	goto T1176;}
	goto T1175;
	goto T1176;
T1176:;
	{register object V712;
	V712= (V708);
	V709= CMPcar((V712));
	V712= CMPcdr((V712));
	V710= CMPcar((V712));
	V712= CMPcdr((V712));
	V711= (V712);}
	V708= CMPcddr((V708));
	{register object x= (V709),V713= VV[97];
	while(V713!=Cnil)
	if(eql(x,V713->c.c_car)){
	goto T1194;
	}else V713=V713->c.c_cdr;
	goto T1191;}
	goto T1194;
T1194:;
	base[9]= (V711);
	base[10]= (V709);
	base[11]= (V699);
	vs_top=(vs_base=base+9)+3;
	Lgetf();
	vs_top=sup;
	V714= vs_base[0];
	if(((V699))==(V714)){
	goto T1191;}
	base[9]= VV[95];
	base[10]= VV[98];
	base[11]= (V709);
	base[12]= (base[8]->c.c_car);
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk306)();
	vs_top=sup;
	goto T1191;
T1191:;
	goto T1174;
	goto T1175;
T1175:;
	goto T1164;}
	goto T1164;
T1164:;
	goto T1147;
	goto T1148;
T1148:;
	goto T1142;}
	goto T1142;
T1142:;
	{object V715;
	object V716;
	object V717;
	base[8]= (V698);
	base[9]= VV[99];
	vs_top=(vs_base=base+8)+2;
	Lgetf();
	vs_top=sup;
	V715= vs_base[0];
	V716= Cnil;
	V717= Cnil;
	base[8]=MMcons(Cnil,Cnil);
	goto T1209;
T1209:;
	if(!(type_of((V715))!=t_cons)){
	goto T1211;}
	goto T1210;
	goto T1211;
T1211:;
	{object V718;
	V718= (V715);
	V716= CMPcar((V718));
	V718= CMPcdr((V718));
	V717= (V718);}
	V715= CMPcdr((V715));
	(base[8]->c.c_car)= CMPcar((V716));
	base[9]= 
	make_cclosure_new(LC142,Cnil,base[8],Cdata);
	base[10]= (V717);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk305)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1224;}
	base[9]= VV[95];
	base[10]= VV[100];
	base[11]= (base[8]->c.c_car);
	base[12]= (V696);
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk306)();
	vs_top=sup;
	goto T1224;
T1224:;
	goto T1209;
	goto T1210;
T1210:;
	goto T1204;}
	goto T1204;
T1204:;
	goto T1235;
T1235:;
	{object V719;
	object V720;
	base[8]= (V698);
	base[9]= VV[88];
	vs_top=(vs_base=base+8)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1242;}
	V719= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1243;}
	V720= vs_base[0];
	vs_top=sup;
	goto T1244;
	goto T1242;
T1242:;
	V719= Cnil;
	goto T1243;
T1243:;
	V720= Cnil;
	goto T1244;
T1244:;
	V698= (V719);
	if(((V720))!=Cnil){
	goto T1236;}}
	goto T1233;
	goto T1236;
T1236:;
	goto T1235;
	goto T1233;
T1233:;
	goto T1250;
T1250:;
	{object V721;
	object V722;
	base[8]= (V698);
	base[9]= VV[89];
	vs_top=(vs_base=base+8)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1257;}
	V721= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1258;}
	V722= vs_base[0];
	vs_top=sup;
	goto T1259;
	goto T1257;
T1257:;
	V721= Cnil;
	goto T1258;
T1258:;
	V722= Cnil;
	goto T1259;
T1259:;
	V698= (V721);
	if(((V722))!=Cnil){
	goto T1251;}}
	goto T1248;
	goto T1251;
T1251:;
	goto T1250;
	goto T1248;
T1248:;
	goto T1265;
T1265:;
	{object V723;
	object V724;
	base[8]= (V698);
	base[9]= VV[90];
	vs_top=(vs_base=base+8)+2;
	siLrem_f();
	if(vs_base>=vs_top){vs_top=sup;goto T1272;}
	V723= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1273;}
	V724= vs_base[0];
	vs_top=sup;
	goto T1274;
	goto T1272;
T1272:;
	V723= Cnil;
	goto T1273;
T1273:;
	V724= Cnil;
	goto T1274;
T1274:;
	V698= (V723);
	if(((V724))!=Cnil){
	goto T1266;}}
	goto T1263;
	goto T1266;
T1266:;
	goto T1265;
	goto T1263;
T1263:;
	base[8]= (V703);
	if(((((V701))==((V699))?Ct:Cnil))==Cnil){
	goto T1281;}
	V725= Cnil;
	goto T1280;
	goto T1281;
T1281:;
	{object V726;
	object V727= (V701);
	if(V727==Cnil){
	V725= Cnil;
	goto T1280;}
	base[10]=V726=MMcons(Cnil,Cnil);
	goto T1283;
T1283:;
	base[11]= (V727->c.c_car);
	vs_top=(vs_base=base+11)+1;
	L46(base);
	vs_top=sup;
	(V726->c.c_car)= vs_base[0];
	if((V727=MMcdr(V727))==Cnil){
	V725= base[10];
	goto T1280;}
	V726=MMcdr(V726)=MMcons(Cnil,Cnil);
	goto T1283;}
	goto T1280;
T1280:;
	if(((((V702))==((V699))?Ct:Cnil))==Cnil){
	goto T1287;}
	V728= Cnil;
	goto T1286;
	goto T1287;
T1287:;
	V728= (V702);
	goto T1286;
T1286:;
	base[9]= listA(5,VV[89],V725,VV[90],V728,(V698));
	vs_top=(vs_base=base+8)+2;
	return;}
	}
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :AFTER (STD-CLASS T))	*/

static object LI47(V734,V735,V736,V737,V738)

object V734;object V735;register object V736;object V737;object V738;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{object V740;
	object V742;
	object V743;
	object V745;
	object V746;
	object V748;
	object V749;
	object V751;
	base[8]= VV[89];
	base[9]= V738;
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V740= vs_base[0];
	if(((V740))==Cnil){
	goto T1296;}
	V742= CMPcar((V740));
	goto T1294;
	goto T1296;
T1296:;
	V742= Cnil;
	goto T1294;
T1294:;
	base[8]= VV[90];
	base[9]= V738;
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V743= vs_base[0];
	if(((V743))==Cnil){
	goto T1303;}
	V745= CMPcar((V743));
	goto T1301;
	goto T1303;
T1303:;
	V745= Cnil;
	goto T1301;
T1301:;
	base[8]= VV[99];
	base[9]= V738;
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V746= vs_base[0];
	if(((V746))==Cnil){
	goto T1310;}
	V748= CMPcar((V746));
	goto T1308;
	goto T1310;
T1310:;
	V748= Cnil;
	goto T1308;
T1308:;
	base[8]= VV[103];
	base[9]= V738;
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V749= vs_base[0];
	if(((V749))==Cnil){
	goto T1317;}
	V751= CMPcar((V749));
	goto T1315;
	goto T1317;
T1317:;
	V751= Cnil;
	goto T1315;
T1315:;
	{object V752;
	object V753;
	V752= CMPcar((V734));
	V753= CMPcdr((V734));
	{object V754;
	if(type_of(V736)==t_structure){
	goto T1327;}
	goto T1325;
	goto T1327;
T1327:;
	if(!(((V736)->str.str_def)==(VV[109]))){
	goto T1325;}
	V754= STREF(object,(V736),4);
	goto T1323;
	goto T1325;
T1325:;{object V756;
	V756= (VV[16]->s.s_dbind);
	base[8]= small_fixnum(14);
	base[9]= (V736);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V757= vs_base[0];
	if(!((V756)==(CMPcar(V757)))){
	goto T1330;}}
	V754= CMPcar(((V736))->cc.cc_turbo[12]);
	goto T1323;
	goto T1330;
T1330:;
	V754= Cnil;
	goto T1323;
T1323:;
	if((V740)==Cnil){
	goto T1337;}
	if((V742)!=Cnil){
	goto T1340;}
	V742= make_cons((VV[105]->s.s_dbind),Cnil);
	goto T1340;
T1340:;
	{register object V758;
	register object V759;
	V758= (V742);
	V759= CMPcar((V758));
	goto T1345;
T1345:;
	if(!(((V758))==Cnil)){
	goto T1346;}
	goto T1341;
	goto T1346;
T1346:;
	base[9]= (V736);
	base[10]= (V759);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk107)(Lclptr107);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1350;}
	base[9]= VV[106];
	base[10]= (V759);
	base[11]= (V736);
	base[12]= (*(LnkLI301))((V759));
	base[13]= (*(LnkLI301))((V736));
	base[14]= VV[107];
	vs_top=(vs_base=base+9)+6;
	Lerror();
	vs_top=sup;
	goto T1350;
T1350:;
	V758= CMPcdr((V758));
	V759= CMPcar((V758));
	goto T1345;}
	goto T1341;
T1341:;
	{object V761;
	V761= ((V752))->v.v_self[2];
	if(!(type_of(V761)==t_fixnum)){
	goto T1368;}
	(void)(((V754))->v.v_self[fix((V761))]= (V742));
	goto T1335;
	goto T1368;
T1368:;
	base[8]= V742;
	base[9]= (V736);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk307)(Lclptr307);
	vs_top=sup;
	goto T1335;}
	goto T1337;
T1337:;
	{object V763;
	V763= ((V752))->v.v_self[2];
	if(!(type_of(V763)==t_fixnum)){
	goto T1377;}
	V763= ((V754))->v.v_self[fix((V763))];
	goto T1375;
	goto T1377;
T1377:;
	V763= VV[17];
	goto T1375;
T1375:;
	if(!(((V763))==(VV[17]))){
	goto T1380;}
	base[8]= (V736);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	V742= vs_base[0];
	goto T1372;
	goto T1380;
T1380:;
	V742= (V763);}
	goto T1372;
T1372:;
	goto T1335;
T1335:;
	if((V743)==Cnil){
	goto T1386;}
	{object V765;
	{object V766;
	object V767= (V745);
	if(V767==Cnil){
	V765= Cnil;
	goto T1388;}
	base[8]=V766=MMcons(Cnil,Cnil);
	goto T1389;
T1389:;
	base[9]= (V736);
	base[10]= (V767->c.c_car);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk309)();
	vs_top=sup;
	(V766->c.c_car)= vs_base[0];
	if((V767=MMcdr(V767))==Cnil){
	V765= base[8];
	goto T1388;}
	V766=MMcdr(V766)=MMcons(Cnil,Cnil);
	goto T1389;}
	goto T1388;
T1388:;
	{object V769;
	V769= ((V752))->v.v_self[1];
	if(!(type_of(V769)==t_fixnum)){
	goto T1395;}
	V745= ((V754))->v.v_self[fix((V769))]= ((V765));
	goto T1384;
	goto T1395;
T1395:;
	base[8]= (V765);
	base[9]= (V736);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	V745= vs_base[0];
	goto T1384;}}
	goto T1386;
T1386:;
	{object V771;
	V771= ((V752))->v.v_self[1];
	if(!(type_of(V771)==t_fixnum)){
	goto T1403;}
	V771= ((V754))->v.v_self[fix((V771))];
	goto T1401;
	goto T1403;
T1403:;
	V771= VV[17];
	goto T1401;
T1401:;
	if(!(((V771))==(VV[17]))){
	goto T1406;}
	base[8]= (V736);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk311)(Lclptr311);
	vs_top=sup;
	V745= vs_base[0];
	goto T1384;
	goto T1406;
T1406:;
	V745= (V771);}
	goto T1384;
T1384:;
	if((V746)==Cnil){
	goto T1411;}
	V776= ({object _tmp=get(VV[272],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[272])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[272])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V777 = V776,
	(type_of(V777) == t_sfun ?(*((V777)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V777)==t_vfun) ?
	(*((V777)->sfn.sfn_self)):
	(fcall.fun=(V777),fcalln))(V748,V736,VV[63])));
	goto T1409;
	goto T1411;
T1411:;
	V748= (*(LnkLI272))((V736),VV[63]);
	goto T1409;
T1409:;
	{object V780;
	{object V781;
	object V782;
	V781= Cnil;
	V782= Cnil;
	{register object V783;
	register object V784;
	V783= (V745);
	V784= CMPcar((V783));
	goto T1423;
T1423:;
	if(!(((V783))==Cnil)){
	goto T1424;}
	goto T1419;
	goto T1424;
T1424:;
	base[10]= (V784);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk312)(Lclptr312);
	vs_top=sup;
	V785= vs_base[0];
	if(!((V785)==((V736)))){
	goto T1428;}
	{object V786;
	base[10]= (V784);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk313)(Lclptr313);
	vs_top=sup;
	V786= vs_base[0];
	{object V787;
	base[10]= (V784);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	V788= vs_base[0];
	if(((V786))==Cnil){
	goto T1440;}
	vs_base=vs_top;
	{object _funobj = (V786);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V789= vs_base[0];
	goto T1438;
	goto T1440;
T1440:;
	V789= (VV[108]->s.s_dbind);
	goto T1438;
T1438:;
	V787= make_cons(V788,V789);
	if(((V781))!=Cnil){
	goto T1443;}
	V782= make_cons((V787),Cnil);
	V781= (V782);
	goto T1428;
	goto T1443;
T1443:;
	V791= make_cons((V787),Cnil);
	((V782))->c.c_cdr = /* INLINE-ARGS */V791;
	V790= (V782);
	V782= CMPcdr(V790);}}
	goto T1428;
T1428:;
	V783= CMPcdr((V783));
	V784= CMPcar((V783));
	goto T1423;}
	goto T1419;
T1419:;
	V780= (V781);}
	V792= ({object _tmp=get(VV[272],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[272])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[272])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V793 = V792,
	(type_of(V793) == t_sfun ?(*((V793)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V793)==t_vfun) ?
	(*((V793)->sfn.sfn_self)):
	(fcall.fun=(V793),fcalln))((V780),V736,VV[66])));}
	if((V749)==Cnil){
	goto T1458;}
	{object V794;
	V794= CMPcar((V751));
	{object V795;
	V795= ((V752))->v.v_self[3];
	if(!(type_of(V795)==t_fixnum)){
	goto T1463;}
	V751= ((V754))->v.v_self[fix((V795))]= ((V794));
	goto T1456;
	goto T1463;
T1463:;
	base[8]= (V794);
	base[9]= (V736);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V751= vs_base[0];
	goto T1456;}}
	goto T1458;
T1458:;
	{object V797;
	{object V798;
	V798= ((V752))->v.v_self[3];
	if(!(type_of(V798)==t_fixnum)){
	goto T1472;}
	V798= ((V754))->v.v_self[fix((V798))];
	goto T1470;
	goto T1472;
T1472:;
	V798= VV[17];
	goto T1470;
T1470:;
	if(!(((V798))==(VV[17]))){
	goto T1475;}
	base[8]= (V736);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk316)(Lclptr316);
	vs_top=sup;
	V797= vs_base[0];
	goto T1467;
	goto T1475;
T1475:;
	V797= (V798);}
	goto T1467;
T1467:;
	if(((V797))==Cnil){
	goto T1479;}
	V751= (V797);
	goto T1456;
	goto T1479;
T1479:;
	{object V800;
	base[9]= (V736);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk317)(Lclptr317);
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk318)();
	vs_top=sup;
	V800= vs_base[0];
	{object V801;
	V801= ((V752))->v.v_self[3];
	if(!(type_of(V801)==t_fixnum)){
	goto T1486;}
	V751= ((V754))->v.v_self[fix((V801))]= ((V800));
	goto T1456;
	goto T1486;
T1486:;
	base[8]= (V800);
	base[9]= (V736);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V751= vs_base[0];}}}
	goto T1456;
T1456:;
	(void)((*(LnkLI319))((V736),(V742)));
	(void)((*(LnkLI320))((V736),Cnil));
	(void)((*(LnkLI321))((V736),(V751)));
	{object V803 = (*(LnkLI322))((V736),(V745));
	VMR44(V803)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE :BEFORE (CLASS T))	*/

static void L48()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	{register object V804;
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
	base[6]= VV[1];
	base[7]= V808;
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V811= vs_base[0];
	V810= CMPcar(V811);
	{object V812;
	object V813;
	V812= CMPcar((V804));
	V813= CMPcdr((V804));
	{object V814;
	if(type_of(V806)==t_structure){
	goto T1507;}
	goto T1505;
	goto T1507;
T1507:;
	if(!(((V806)->str.str_def)==(VV[114]))){
	goto T1505;}
	V814= STREF(object,(V806),4);
	goto T1503;
	goto T1505;
T1505:;{object V816;
	V816= (VV[16]->s.s_dbind);
	base[6]= small_fixnum(14);
	base[7]= (V806);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V817= vs_base[0];
	if(!((V816)==(CMPcar(V817)))){
	goto T1510;}}
	V814= CMPcar(((V806))->cc.cc_turbo[12]);
	goto T1503;
	goto T1510;
T1510:;
	V814= Cnil;
	goto T1503;
T1503:;
	{object V818;
	V818= list(2,VV[111],(V806));
	{object V819;
	V819= ((V812))->v.v_self[1];
	if(!(type_of(V819)==t_fixnum)){
	goto T1519;}
	(void)(((V814))->v.v_self[fix((V819))]= ((V818)));
	goto T1515;
	goto T1519;
T1519:;
	base[6]= (V818);
	base[7]= (V806);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;}}
	goto T1515;
T1515:;
	{object V821;
	base[6]= VV[112];
	base[7]= VV[113];
	base[8]= (V806);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk323)();
	vs_top=sup;
	V821= vs_base[0];
	{object V822;
	V822= ((V812))->v.v_self[2];
	if(!(type_of(V822)==t_fixnum)){
	goto T1529;}
	base[6]= ((V814))->v.v_self[fix((V822))]= ((V821));
	vs_top=(vs_base=base+6)+1;
	return;
	goto T1529;
T1529:;
	base[6]= (V821);
	base[7]= (V806);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk324)(Lclptr324);
	return;}}}}}
	}
}
/*	local entry for function (FAST-METHOD REINITIALIZE-INSTANCE :BEFORE (SLOT-CLASS))	*/

static object LI49(V828,V829,V830,V831)

object V828;object V829;register object V830;object V831;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	base[0]= (V830);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk326)(Lclptr326);
	vs_top=sup;
	V833= vs_base[0];
	(void)((*(LnkLI325))((V830),V833));
	base[0]= (V830);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk328)(Lclptr328);
	vs_top=sup;
	V834= vs_base[0];
	{object V835 = (*(LnkLI327))((V830),V834);
	VMR46(V835)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD REINITIALIZE-INSTANCE :AFTER (SLOT-CLASS))	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	{object V836;
	object V837;
	object V838;
	check_arg(4);
	V836=(base[0]);
	V837=(base[1]);
	base[2]=MMcons(base[2],Cnil);
	V838=(base[3]);
	vs_top=sup;
	base[4]=MMcons(V838,base[2]);
	base[5]= (base[2]->c.c_car);
	base[6]= 
	make_cclosure_new(LC143,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk329)(Lclptr329);
	return;
	}
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :AFTER (STRUCTURE-CLASS T))	*/

static object LI51(V845,V846,V847,V848,V849)

register object V845;object V846;register object V847;object V848;object V849;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V851;
	object V853;
	object V854;
	register object V856;
	object V857;
	object V858;
	object V860;
	base[7]= VV[89];
	base[8]= V849;
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V851= vs_base[0];
	if(((V851))==Cnil){
	goto T1551;}
	V853= CMPcar((V851));
	goto T1549;
	goto T1551;
T1551:;
	V853= Cnil;
	goto T1549;
T1549:;
	base[7]= VV[90];
	base[8]= V849;
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V854= vs_base[0];
	if(((V854))==Cnil){
	goto T1558;}
	V856= CMPcar((V854));
	goto T1556;
	goto T1558;
T1558:;
	V856= Cnil;
	goto T1556;
T1556:;
	base[7]= VV[99];
	base[8]= V849;
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V861= vs_base[0];
	V857= CMPcar(V861);
	base[7]= VV[103];
	base[8]= V849;
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk271)();
	vs_top=sup;
	V858= vs_base[0];
	if(((V858))==Cnil){
	goto T1569;}
	V860= CMPcar((V858));
	goto T1567;
	goto T1569;
T1569:;
	V860= Cnil;
	goto T1567;
T1567:;
	{register object V862;
	object V863;
	V862= CMPcar((V845));
	V863= CMPcdr((V845));
	{register object V864;
	if(type_of(V847)==t_structure){
	goto T1579;}
	goto T1577;
	goto T1579;
T1579:;
	if(!(((V847)->str.str_def)==(VV[142]))){
	goto T1577;}
	V864= STREF(object,(V847),4);
	goto T1575;
	goto T1577;
T1577:;{object V866;
	V866= (VV[16]->s.s_dbind);
	base[7]= small_fixnum(14);
	base[8]= (V847);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V867= vs_base[0];
	if(!((V866)==(CMPcar(V867)))){
	goto T1582;}}
	V864= CMPcar(((V847))->cc.cc_turbo[12]);
	goto T1575;
	goto T1582;
T1582:;
	V864= Cnil;
	goto T1575;
T1575:;
	if((V851)==Cnil){
	goto T1589;}
	{object V868;
	if((V853)!=Cnil){
	V868= (V853);
	goto T1591;}
	base[7]= (V847);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk317)(Lclptr317);
	vs_top=sup;
	V869= vs_base[0];
	if((((V869)==(VV[116])?Ct:Cnil))==Cnil){
	goto T1593;}
	V853= Cnil;
	goto T1592;
	goto T1593;
T1593:;
	V853= make_cons((VV[117]->s.s_dbind),Cnil);
	goto T1592;
T1592:;
	V868= (V853);
	goto T1591;
T1591:;
	{object V870;
	V870= ((V862))->v.v_self[5];
	if(!(type_of(V870)==t_fixnum)){
	goto T1599;}
	(void)(((V864))->v.v_self[fix((V870))]= ((V868)));
	goto T1587;
	goto T1599;
T1599:;
	base[7]= (V868);
	base[8]= (V847);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk307)(Lclptr307);
	vs_top=sup;
	goto T1587;}}
	goto T1589;
T1589:;
	{register object V872;
	V872= ((V862))->v.v_self[5];
	if(!(type_of(V872)==t_fixnum)){
	goto T1608;}
	V872= ((V864))->v.v_self[fix((V872))];
	goto T1606;
	goto T1608;
T1608:;
	V872= VV[17];
	goto T1606;
T1606:;
	if(!(((V872))==(VV[17]))){
	goto T1611;}
	base[7]= (V847);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	V853= vs_base[0];
	goto T1603;
	goto T1611;
T1611:;
	V853= (V872);}
	goto T1603;
T1603:;
	goto T1587;
T1587:;
	{register object V874;
	object V875;
	object V876;
	base[10]= (V847);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk317)(Lclptr317);
	vs_top=sup;
	V874= vs_base[0];
	{register object V877;
	V877= ((V862))->v.v_self[6];
	if(!(type_of(V877)==t_fixnum)){
	goto T1622;}
	V877= ((V864))->v.v_self[fix((V877))];
	goto T1620;
	goto T1622;
T1622:;
	V877= VV[17];
	goto T1620;
T1620:;
	if(!(((V877))==(VV[17]))){
	goto T1625;}
	base[10]= (V847);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk330)(Lclptr330);
	vs_top=sup;
	V875= vs_base[0];
	goto T1617;
	goto T1625;
T1625:;
	V875= (V877);}
	goto T1617;
T1617:;
	if((V875)!=Cnil){
	V876= (V875);
	goto T1628;}
	V879= (*(LnkLI331))((V874));
	V876= ((/* INLINE-ARGS */V879)==Cnil?Ct:Cnil);
	goto T1628;
T1628:;
	if((V854)==Cnil){
	goto T1631;}
	{object V880;
	{object V881;
	object V882= (V856);
	if(V882==Cnil){
	V856= Cnil;
	goto T1634;}
	base[10]=V881=MMcons(Cnil,Cnil);
	goto T1635;
T1635:;
	{object V883;
	V883= (V882->c.c_car);
	if(((V876))==Cnil){
	goto T1637;}
	{object V884;
	object V885;
	object V886;
	base[14]= (V883);
	base[15]= VV[1];
	vs_top=(vs_base=base+14)+2;
	Lgetf();
	vs_top=sup;
	V884= vs_base[0];
	base[14]= Cnil;
	base[15]= VV[118];
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
	V883= listA(3,VV[119],(V886),(V883));}
	goto T1637;
T1637:;
	base[11]= (V847);
	base[12]= (V883);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk309)();
	vs_top=sup;
	(V881->c.c_car)= vs_base[0];}
	if((V882=MMcdr(V882))==Cnil){
	V856= base[10];
	goto T1634;}
	V881=MMcdr(V881)=MMcons(Cnil,Cnil);
	goto T1635;}
	goto T1634;
T1634:;
	V880= (V856);
	{object V887;
	V887= ((V862))->v.v_self[4];
	if(!(type_of(V887)==t_fixnum)){
	goto T1655;}
	(void)(((V864))->v.v_self[fix((V887))]= ((V880)));
	goto T1629;
	goto T1655;
T1655:;
	base[10]= (V880);
	base[11]= (V847);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	goto T1629;}}
	goto T1631;
T1631:;
	{register object V889;
	V889= ((V862))->v.v_self[4];
	if(!(type_of(V889)==t_fixnum)){
	goto T1664;}
	V889= ((V864))->v.v_self[fix((V889))];
	goto T1662;
	goto T1664;
T1664:;
	V889= VV[17];
	goto T1662;
T1662:;
	if(!(((V889))==(VV[17]))){
	goto T1667;}
	base[10]= (V847);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk311)(Lclptr311);
	vs_top=sup;
	V856= vs_base[0];
	goto T1659;
	goto T1667;
T1667:;
	V856= (V889);}
	goto T1659;
T1659:;
	goto T1629;
T1629:;
	if(((V876))==Cnil){
	goto T1614;}
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
	goto T1678;}
	V901= ((V864))->v.v_self[fix((V901))];
	goto T1676;
	goto T1678;
T1678:;
	V901= VV[17];
	goto T1676;
T1676:;
	if(!(((V901))==(VV[17]))){
	goto T1681;}
	base[19]= (V847);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk308)(Lclptr308);
	vs_top=sup;
	V900= vs_base[0];
	goto T1673;
	goto T1681;
T1681:;
	V900= (V901);}
	goto T1673;
T1673:;
	V891= CMPcar(V900);
	base[20]= Cnil;
	base[21]= VV[120];
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
	base[21]= VV[121];
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
	goto T1697;}
	base[19]= (V891);
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk317)(Lclptr317);
	vs_top=sup;
	V904= vs_base[0];
	V905= list(2,VV[123],V904);
	V903= make_cons(/* INLINE-ARGS */V905,Cnil);
	goto T1695;
	goto T1697;
T1697:;
	V903= Cnil;
	goto T1695;
T1695:;
	V906= list(2,VV[126],(V892));
	V907= list(4,VV[124],VV[125],/* INLINE-ARGS */V906,list(3,VV[127],(V893),Cnil));
	V908= append(V903,/* INLINE-ARGS */V907);
	V909= make_cons((V874),/* INLINE-ARGS */V908);
	{object V911;
	object V912= (V856);
	if(V912==Cnil){
	V910= Cnil;
	goto T1701;}
	base[19]=V911=MMcons(Cnil,Cnil);
	goto T1702;
T1702:;
	base[20]= (V912->c.c_car);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	V914= vs_base[0];
	(V911->c.c_car)= list(2,V914,VV[108]);
	if((V912=MMcdr(V912))==Cnil){
	V910= base[19];
	goto T1701;}
	V911=MMcdr(V911)=MMcons(Cnil,Cnil);
	goto T1702;}
	goto T1701;
T1701:;
	V894= listA(3,VV[122],/* INLINE-ARGS */V909,V910);
	{object V915;
	object V916= (V856);
	if(V916==Cnil){
	V895= Cnil;
	goto T1706;}
	base[19]=V915=MMcons(Cnil,Cnil);
	goto T1707;
T1707:;
	base[21]= Cnil;
	base[22]= VV[128];
	base[23]= (V892);
	base[25]= (V916->c.c_car);
	vs_top=(vs_base=base+25)+1;
	(void) (*Lnk314)(Lclptr314);
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
	goto T1706;}
	V915=MMcdr(V915)=MMcons(Cnil,Cnil);
	goto T1707;}
	goto T1706;
T1706:;
	{object V918;
	object V919= (V856);
	if(V919==Cnil){
	V896= Cnil;
	goto T1715;}
	base[19]=V918=MMcons(Cnil,Cnil);
	goto T1716;
T1716:;
	base[21]= Cnil;
	base[22]= VV[129];
	base[23]= (V892);
	base[25]= (V919->c.c_car);
	vs_top=(vs_base=base+25)+1;
	(void) (*Lnk314)(Lclptr314);
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
	goto T1715;}
	V918=MMcdr(V918)=MMcons(Cnil,Cnil);
	goto T1716;}
	goto T1715;
T1715:;
	{object V921;
	object V922= (V856);
	object V923= (V895);
	if(V922==Cnil||V923==Cnil){
	V897= Cnil;
	goto T1724;}
	base[19]=V921=MMcons(Cnil,Cnil);
	goto T1725;
T1725:;
	{object V926;
	base[20]= (V922->c.c_car);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk332)(Lclptr332);
	vs_top=sup;
	V926= vs_base[0];
	V927= list(2,VV[132],list(3,VV[133],(V874),VV[134]));
	(V921->c.c_car)= list(5,VV[130],(V923->c.c_car),VV[131],/* INLINE-ARGS */V927,list(2,(V926),VV[134]));}
	if((V922=MMcdr(V922))==Cnil||(V923=MMcdr(V923))==Cnil){
	V897= base[19];
	goto T1724;}
	V921=MMcdr(V921)=MMcons(Cnil,Cnil);
	goto T1725;}
	goto T1724;
T1724:;
	{object V928;
	object V929= (V856);
	object V930= (V896);
	if(V929==Cnil||V930==Cnil){
	V898= Cnil;
	goto T1729;}
	base[19]=V928=MMcons(Cnil,Cnil);
	goto T1730;
T1730:;
	{object V933;
	base[20]= (V929->c.c_car);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk332)(Lclptr332);
	vs_top=sup;
	V933= vs_base[0];
	V934= list(2,VV[132],list(3,VV[133],(V874),VV[134]));
	(V928->c.c_car)= list(5,VV[130],(V930->c.c_car),VV[135],/* INLINE-ARGS */V934,list(3,VV[136],list(2,(V933),VV[134]),VV[137]));}
	if((V929=MMcdr(V929))==Cnil||(V930=MMcdr(V930))==Cnil){
	V898= base[19];
	goto T1729;}
	V928=MMcdr(V928)=MMcons(Cnil,Cnil);
	goto T1730;}
	goto T1729;
T1729:;
	base[19]= (V897);
	base[20]= (V898);
	V936= listA(3,VV[139],list(2,VV[140],(V874)),VV[141]);
	base[21]= make_cons(/* INLINE-ARGS */V936,Cnil);
	vs_top=(vs_base=base+19)+3;
	Lappend();
	vs_top=sup;
	V935= vs_base[0];
	V899= listA(3,VV[138],(V894),V935);
	if(((*(LnkLI331))((V874)))!=Cnil){
	goto T1739;}
	base[19]= (V899);
	vs_top=(vs_base=base+19)+1;
	Leval();
	vs_top=sup;
	goto T1739;
T1739:;
	{
	object V937= (V856);
	object V938= (V895);
	object V939= (V896);
	if(V937==Cnil||V938==Cnil||V939==Cnil){
	goto T1743;}
	goto T1744;
T1744:;
	{object V943;
	object V944;
	V943= (*(LnkLI262))((V938->c.c_car));
	if(((*(LnkLI333))((V939->c.c_car)))==Cnil){
	goto T1749;}
	V944= (*(LnkLI262))((V939->c.c_car));
	goto T1747;
	goto T1749;
T1749:;
	V944= Cnil;
	goto T1747;
T1747:;
	base[21]= (V943);
	base[22]= (V937->c.c_car);
	vs_top=(vs_base=base+21)+2;
	(void) (*Lnk334)(Lclptr334);
	vs_top=sup;
	base[21]= (V944);
	base[22]= (V937->c.c_car);
	vs_top=(vs_base=base+21)+2;
	(void) (*Lnk335)(Lclptr335);
	vs_top=sup;}
	if((V937=MMcdr(V937))==Cnil||(V938=MMcdr(V938))==Cnil||(V939=MMcdr(V939))==Cnil){
	goto T1743;}
	goto T1744;}
	goto T1743;
T1743:;
	{object V946;
	V946= ((V862))->v.v_self[3];
	if(!(type_of(V946)==t_fixnum)){
	goto T1759;}
	(void)(((V864))->v.v_self[fix((V946))]= (V899));
	goto T1756;
	goto T1759;
T1759:;
	base[19]= V899;
	base[20]= (V847);
	vs_top=(vs_base=base+19)+2;
	(void) (*Lnk336)(Lclptr336);
	vs_top=sup;}
	goto T1756;
T1756:;
	{object V949;
	V949= ((V862))->v.v_self[2];
	if(!(type_of(V949)==t_fixnum)){
	goto T1765;}
	(void)(((V864))->v.v_self[fix((V949))]= (V893));
	goto T1614;
	goto T1765;
T1765:;
	base[19]= V893;
	base[20]= (V847);
	vs_top=(vs_base=base+19)+2;
	(void) (*Lnk337)(Lclptr337);
	vs_top=sup;}}}
	goto T1614;
T1614:;
	(void)((*(LnkLI319))((V847),(V853)));
	{object V951;
	base[7]= (V847);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk338)(Lclptr338);
	vs_top=sup;
	V951= vs_base[0];
	{object V952;
	V952= ((V862))->v.v_self[1];
	if(!(type_of(V952)==t_fixnum)){
	goto T1775;}
	(void)(((V864))->v.v_self[fix((V952))]= ((V951)));
	goto T1770;
	goto T1775;
T1775:;
	base[7]= (V951);
	base[8]= (V847);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk148)(Lclptr148);
	vs_top=sup;}}
	goto T1770;
T1770:;
	{object V954;
	base[7]= (V847);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk339)(Lclptr339);
	vs_top=sup;
	V954= vs_base[0];
	{object V955;
	V955= ((V862))->v.v_self[8];
	if(!(type_of(V955)==t_fixnum)){
	goto T1784;}
	(void)(((V864))->v.v_self[fix((V955))]= ((V954)));
	goto T1779;
	goto T1784;
T1784:;
	base[7]= (V954);
	base[8]= (V847);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk152)(Lclptr152);
	vs_top=sup;}}
	goto T1779;
T1779:;
	{register object V957;
	V957= ((V862))->v.v_self[9];
	if(!(type_of(V957)==t_fixnum)){
	goto T1795;}
	V957= ((V864))->v.v_self[fix((V957))];
	goto T1793;
	goto T1795;
T1795:;
	V957= VV[17];
	goto T1793;
T1793:;
	if(!(((V957))==(VV[17]))){
	goto T1798;}
	base[7]= (V847);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk276)(Lclptr276);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1788;}
	goto T1790;
	goto T1798;
T1798:;
	if(((V957))!=Cnil){
	goto T1788;}}
	goto T1790;
T1790:;
	{object V959;
	V959= (VFUN_NARGS=2,(*(LnkLI340))(small_fixnum(0),(V847)));
	{object V960;
	V960= ((V862))->v.v_self[9];
	if(!(type_of(V960)==t_fixnum)){
	goto T1804;}
	(void)(((V864))->v.v_self[fix((V960))]= ((V959)));
	goto T1788;
	goto T1804;
T1804:;
	base[7]= (V959);
	base[8]= (V847);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk154)(Lclptr154);
	vs_top=sup;}}
	goto T1788;
T1788:;
	(void)((*(LnkLI341))((V847)));
	if((V858)==Cnil){
	goto T1812;}
	{object V962;
	V962= CMPcar((V860));
	{object V963;
	V963= ((V862))->v.v_self[7];
	if(!(type_of(V963)==t_fixnum)){
	goto T1817;}
	V860= ((V864))->v.v_self[fix((V963))]= ((V962));
	goto T1810;
	goto T1817;
T1817:;
	base[7]= (V962);
	base[8]= (V847);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V860= vs_base[0];
	goto T1810;}}
	goto T1812;
T1812:;
	{object V965;
	{register object V966;
	V966= ((V862))->v.v_self[7];
	if(!(type_of(V966)==t_fixnum)){
	goto T1826;}
	V966= ((V864))->v.v_self[fix((V966))];
	goto T1824;
	goto T1826;
T1826:;
	V966= VV[17];
	goto T1824;
T1824:;
	if(!(((V966))==(VV[17]))){
	goto T1829;}
	base[7]= (V847);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk316)(Lclptr316);
	vs_top=sup;
	V965= vs_base[0];
	goto T1821;
	goto T1829;
T1829:;
	V965= (V966);}
	goto T1821;
T1821:;
	if(((V965))==Cnil){
	goto T1833;}
	V860= (V965);
	goto T1810;
	goto T1833;
T1833:;
	{object V968;
	base[8]= (V847);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk317)(Lclptr317);
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk318)();
	vs_top=sup;
	V968= vs_base[0];
	{object V969;
	V969= ((V862))->v.v_self[7];
	if(!(type_of(V969)==t_fixnum)){
	goto T1840;}
	V860= ((V864))->v.v_self[fix((V969))]= ((V968));
	goto T1810;
	goto T1840;
T1840:;
	base[7]= (V968);
	base[8]= (V847);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk315)(Lclptr315);
	vs_top=sup;
	V860= vs_base[0];}}}
	goto T1810;
T1810:;
	(void)((*(LnkLI321))((V847),(V860)));
	{object V971 = (*(LnkLI322))((V847),(V856));
	VMR48(V971)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD DIRECT-SLOT-DEFINITION-CLASS (STRUCTURE-CLASS T))	*/

static object LI52(V976,V977,V978,V979)

object V976;object V977;object V978;object V979;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	{object V981 = (VFUN_NARGS=1,(*(LnkLI296))(VV[143]));
	VMR49(V981)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD FINALIZE-INHERITANCE (STRUCTURE-CLASS))	*/

static object LI53(V985,V986,V987)

object V985;object V986;object V987;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V989 = Cnil;
	VMR50(V989)}
	return Cnil;
}
/*	local entry for function ADD-SLOT-ACCESSORS	*/

static object LI54(V992,V993)

object V992;object V993;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V994 = (*(LnkLI342))((V992),(V993),VV[144]);
	VMR51(V994)}
	return Cnil;
}
/*	local entry for function REMOVE-SLOT-ACCESSORS	*/

static object LI55(V997,V998)

object V997;object V998;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{object V999 = (*(LnkLI342))((V997),(V998),VV[145]);
	VMR52(V999)}
	return Cnil;
}
/*	local entry for function FIX-SLOT-ACCESSORS	*/

static object LI58(V1003,V1004,V1005)

object V1003;object V1004;object V1005;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	base[0]= (V1005);
	base[1]= (V1003);
	{object V1006;
	object V1007;
	V1006= (V1004);
	V1007= CMPcar((V1006));
	goto T1852;
T1852:;
	if(!(((V1006))==Cnil)){
	goto T1853;}
	{object V1008 = Cnil;
	VMR53(V1008)}
	goto T1853;
T1853:;
	{register object V1009;
	base[3]= (V1007);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	V1009= vs_base[0];
	{register object V1010;
	register object V1011;
	base[5]= (V1007);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk343)(Lclptr343);
	vs_top=sup;
	V1010= vs_base[0];
	V1011= CMPcar((V1010));
	goto T1865;
T1865:;
	if(!(((V1010))==Cnil)){
	goto T1866;}
	goto T1860;
	goto T1866;
T1866:;
	base[5]= (V1011);
	base[6]= (V1009);
	base[7]= VV[146];
	vs_top=(vs_base=base+5)+3;
	L59(base);
	vs_top=sup;
	V1010= CMPcdr((V1010));
	V1011= CMPcar((V1010));
	goto T1865;}
	goto T1860;
T1860:;
	{register object V1012;
	register object V1013;
	base[5]= (V1007);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk344)(Lclptr344);
	vs_top=sup;
	V1012= vs_base[0];
	V1013= CMPcar((V1012));
	goto T1883;
T1883:;
	if(!(((V1012))==Cnil)){
	goto T1884;}
	goto T1857;
	goto T1884;
T1884:;
	base[5]= (V1013);
	base[6]= (V1009);
	base[7]= VV[147];
	vs_top=(vs_base=base+5)+3;
	L59(base);
	vs_top=sup;
	V1012= CMPcdr((V1012));
	V1013= CMPcar((V1012));
	goto T1883;}}
	goto T1857;
T1857:;
	V1006= CMPcdr((V1006));
	V1007= CMPcar((V1006));
	goto T1852;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-DIRECT-SUBCLASSES	*/

static object LI60(V1016,V1017)

register object V1016;object V1017;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	{register object V1018;
	register object V1019;
	V1018= (V1017);
	V1019= CMPcar((V1018));
	goto T1905;
T1905:;
	if(!(((V1018))==Cnil)){
	goto T1906;}
	{object V1020 = Cnil;
	VMR54(V1020)}
	goto T1906;
T1906:;
	base[1]= (V1016);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk345)(Lclptr345);
	vs_top=sup;
	V1022= vs_base[0];
	{register object x= (V1016),V1021= V1022;
	while(V1021!=Cnil)
	if(x==(V1021->c.c_car)){
	goto T1910;
	}else V1021=V1021->c.c_cdr;}
	base[1]= (V1019);
	base[2]= (V1016);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk346)(Lclptr346);
	vs_top=sup;
	goto T1910;
T1910:;
	V1018= CMPcdr((V1018));
	V1019= CMPcar((V1018));
	goto T1905;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REMOVE-DIRECT-SUBCLASSES	*/

static object LI61(V1025,V1026)

register object V1025;object V1026;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{object V1027;
	base[0]= (V1025);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk326)(Lclptr326);
	vs_top=sup;
	V1027= vs_base[0];
	{register object V1028;
	register object V1029;
	base[2]= (V1027);
	base[3]= (V1026);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk347)();
	vs_top=sup;
	V1028= vs_base[0];
	V1029= CMPcar((V1028));
	goto T1929;
T1929:;
	if(!(((V1028))==Cnil)){
	goto T1930;}
	{object V1030 = Cnil;
	VMR55(V1030)}
	goto T1930;
T1930:;
	base[2]= (V1029);
	base[3]= (V1025);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk348)(Lclptr348);
	vs_top=sup;
	V1028= CMPcdr((V1028));
	V1029= CMPcar((V1028));
	goto T1929;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD FINALIZE-INHERITANCE (STD-CLASS))	*/

static object LI62(V1034,V1035,V1036)

object V1034;object V1035;object V1036;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V1038 = (*(LnkLI320))((V1036),Ct);
	VMR56(V1038)}
	return Cnil;
}
/*	local entry for function CLASS-HAS-A-FORWARD-REFERENCED-SUPERCLASS-P	*/

static object LI63(V1040)

object V1040;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;{object V1041;
	base[0]= (V1040);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk304)(Lclptr304);
	vs_top=sup;
	V1041= vs_base[0];
	if(V1041==Cnil)goto T1944;
	{object V1042 = V1041;
	VMR57(V1042)}
	goto T1944;
T1944:;}
	base[0]= (VV[349]->s.s_gfdef);
	base[2]= (V1040);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk326)(Lclptr326);
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk305)();
	vs_top=sup;
	{object V1043 = vs_base[0];
	VMR57(V1043)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-CLASS	*/

static object LI64(V1046,V1047)

register object V1046;object V1047;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	if(((V1047))!=Cnil){
	goto T1951;}
	base[0]= (V1046);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk350)(Lclptr350);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1951;}
	if(((*(LnkLI349))((V1046)))!=Cnil){
	goto T1950;}
	goto T1951;
T1951:;
	base[0]= (V1046);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk338)(Lclptr338);
	vs_top=sup;
	V1048= vs_base[0];
	(void)((*(LnkLI351))((V1046),V1048));
	base[0]= (V1046);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk339)(Lclptr339);
	vs_top=sup;
	V1049= vs_base[0];
	(void)((*(LnkLI352))((V1046),V1049));
	(void)((*(LnkLI353))((V1046)));
	base[0]= (V1046);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk355)(Lclptr355);
	vs_top=sup;
	V1050= vs_base[0];
	(void)((*(LnkLI354))((V1046),V1050));
	base[0]= (V1046);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk356)();
	vs_top=sup;
	goto T1950;
T1950:;
	if(((V1047))!=Cnil){
	goto T1970;}
	{register object V1051;
	register object V1052;
	base[2]= (V1046);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk345)(Lclptr345);
	vs_top=sup;
	V1051= vs_base[0];
	V1052= CMPcar((V1051));
	goto T1976;
T1976:;
	if(!(((V1051))==Cnil)){
	goto T1977;}
	{object V1053 = Cnil;
	VMR58(V1053)}
	goto T1977;
T1977:;
	(void)((*(LnkLI320))((V1052),Cnil));
	V1051= CMPcdr((V1051));
	V1052= CMPcar((V1051));
	goto T1976;}
	goto T1970;
T1970:;
	{object V1054 = Cnil;
	VMR58(V1054)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-CPL	*/

static object LI65(V1057,V1058)

register object V1057;object V1058;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	base[0]= (V1057);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk350)(Lclptr350);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1987;}
	base[0]= (V1057);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk149)(Lclptr149);
	vs_top=sup;
	V1059= vs_base[0];
	if(equal(V1059,(V1058))){
	goto T1987;}
	(void)((*(LnkLI357))((V1057)));
	goto T1987;
T1987:;
	if(!((VV[148])->s.s_gfdef!=OBJNULL)){
	goto T1997;}
	base[0]= (V1058);
	base[1]= (V1057);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk148)(Lclptr148);
	vs_top=sup;
	goto T1995;
	goto T1997;
T1997:;
	(void)((*(LnkLI359))(VV[148],VV[149]));
	goto T1995;
T1995:;
	{object V1060 = (*(LnkLI360))((V1058));
	VMR59(V1060)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-CLASS-CAN-PRECEDE-P	*/

static object LI66(V1062)

object V1062;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;
	if(((V1062))==Cnil){
	goto T2002;}
	{object V1063;
	V1063= CMPcar((V1062));
	{register object V1064;
	register object V1065;
	V1064= CMPcdr((V1062));
	V1065= CMPcar((V1064));
	goto T2009;
T2009:;
	if(!(((V1064))==Cnil)){
	goto T2010;}
	goto T2004;
	goto T2010;
T2010:;
	{register object V1066;
	register object V1067;
	register object V1068;
	register object V1069;
	V1066= (V1065);
	V1067= (V1063);
	V1068= VV[150];
	base[3]= (V1066);
	base[5]= (V1067);
	base[6]= (V1068);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk361)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	Ladjoin();
	vs_top=sup;
	V1069= vs_base[0];
	base[3]= (V1067);
	base[4]= (V1068);
	base[5]= (V1069);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk362)();
	vs_top=sup;}
	V1064= CMPcdr((V1064));
	V1065= CMPcar((V1064));
	goto T2009;}}
	goto T2004;
T2004:;
	V1062= CMPcdr((V1062));
	goto TTL;
	goto T2002;
T2002:;
	{object V1070 = Cnil;
	VMR60(V1070)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLASS-CAN-PRECEDE-P	*/

static object LI67(V1073,V1074)

object V1073;object V1074;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	base[0]= (V1073);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk363)(Lclptr363);
	vs_top=sup;
	V1076= vs_base[0];
	{register object x= (V1074),V1075= V1076;
	while(V1075!=Cnil)
	if(eql(x,V1075->c.c_car)){
	{object V1077 = V1075;
	VMR61(V1077)}
	}else V1075=V1075->c.c_cdr;
	{object V1078 = Cnil;
	VMR61(V1078)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-SLOTS	*/

static object LI68(V1081,V1082)

object V1081;object V1082;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	{register object V1083;
	register object V1084;
	V1083= Cnil;
	V1084= Cnil;
	{register object V1085;
	register object V1086;
	V1085= (V1082);
	V1086= CMPcar((V1085));
	goto T2039;
T2039:;
	if(!(((V1085))==Cnil)){
	goto T2040;}
	goto T2035;
	goto T2040;
T2040:;
	{register object V1087;
	base[1]= (V1086);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk312)(Lclptr312);
	vs_top=sup;
	V1087= vs_base[0];
	if(!(((V1087))==(VV[49]))){
	goto T2048;}
	V1083= make_cons(V1086,(V1083));
	goto T2044;
	goto T2048;
T2048:;
	base[1]= (V1087);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2044;}
	V1084= make_cons(V1086,(V1084));}
	goto T2044;
T2044:;
	V1085= CMPcdr((V1085));
	V1086= CMPcar((V1085));
	goto T2039;}
	goto T2035;
T2035:;
	{object V1090;
	object V1091;
	object V1092;
	object V1093;
	object V1094;
	object V1095;
	object V1096;
	base[8]=VV[314]->s.s_gfdef;
	base[9]= (V1083);
	base[10]= (VV[365]->s.s_gfdef);
	base[11]= VV[151];
	base[12]= (VV[366]->s.s_gfdef);
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk367)();
	vs_top=sup;
	V1099= vs_base[0];
	{object V1097;
	object V1098= V1099;
	if(V1098==Cnil){
	V1090= Cnil;
	goto T2060;}
	base[7]=V1097=MMcons(Cnil,Cnil);
	goto T2061;
T2061:;
	base[9]= (V1098->c.c_car);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	(V1097->c.c_car)= vs_base[0];
	if((V1098=MMcdr(V1098))==Cnil){
	V1090= base[7];
	goto T2060;}
	V1097=MMcdr(V1097)=MMcons(Cnil,Cnil);
	goto T2061;}
	goto T2060;
T2060:;
	V1091= CMPmake_fixnum((long)length((V1090)));
	V1092= (*(LnkLI368))((V1084));
	base[7]= (V1081);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk369)(Lclptr369);
	vs_top=sup;
	V1093= vs_base[0];
	if((V1093)==Cnil){
	V1094= Cnil;
	goto T2073;}
	V1094= ((V1093))->v.v_self[9];
	goto T2073;
T2073:;
	if((V1093)==Cnil){
	V1095= Cnil;
	goto T2074;}
	V1095= ((V1093))->v.v_self[10];
	goto T2074;
T2074:;
	if(((V1093))!=Cnil){
	goto T2077;}
	V1096= (VFUN_NARGS=2,(*(LnkLI340))((V1091),(V1081)));
	goto T2075;
	goto T2077;
T2077:;
	if(!(equal((V1090),(V1094)))){
	goto T2080;}
	{register object V1100;
	object V1101;
	register object V1102;
	object V1103;
	V1100= (V1095);
	V1101= Cnil;
	V1102= (V1092);
	V1103= Cnil;
	goto T2089;
T2089:;
	{object V1104;
	if(!(((V1100))==Cnil)){
	goto T2095;}
	goto T2083;
	goto T2095;
T2095:;
	V1104= CMPcar((V1100));
	V1100= CMPcdr((V1100));
	V1101= (V1104);}
	{object V1105;
	if(!(((V1102))==Cnil)){
	goto T2103;}
	goto T2083;
	goto T2103;
T2103:;
	V1105= CMPcar((V1102));
	V1102= CMPcdr((V1102));
	V1103= (V1105);}
	if((CMPcar((V1101)))==(CMPcar((V1103)))){
	goto T2090;}
	goto T2080;
	goto T2090;
T2090:;
	goto T2089;}
	goto T2083;
T2083:;
	V1096= (V1093);
	goto T2075;
	goto T2080;
T2080:;
	base[7]= (V1081);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk370)(Lclptr370);
	vs_top=sup;
	base[7]= (V1081);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk369)(Lclptr369);
	vs_top=sup;
	V1096= vs_base[0];
	goto T2075;
T2075:;
	if(!((VV[152])->s.s_gfdef!=OBJNULL)){
	goto T2117;}
	base[7]= (V1082);
	base[8]= V1081;
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk152)(Lclptr152);
	vs_top=sup;
	goto T2115;
	goto T2117;
T2117:;
	(void)((*(LnkLI359))(VV[152],VV[153]));
	goto T2115;
T2115:;
	(void)(((V1096))->v.v_self[9]= ((V1090)));
	(void)(((V1096))->v.v_self[10]= ((V1092)));
	(void)(((V1096))->v.v_self[12]= ((V1091)));
	if(!((VV[154])->s.s_gfdef!=OBJNULL)){
	goto T2125;}
	base[7]= (V1096);
	base[8]= V1081;
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk154)(Lclptr154);
	vs_top=sup;
	goto T2113;
	goto T2125;
T2125:;
	(void)((*(LnkLI359))(VV[154],VV[155]));
	goto T2113;
T2113:;
	if(((V1093))==((V1096))){
	goto T2130;}
	{object V1107 = (*(LnkLI341))((V1081));
	VMR62(V1107)}
	goto T2130;
T2130:;
	{object V1108 = Cnil;
	VMR62(V1108)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-CLASS-SLOTS	*/

static object LI69(V1110)

object V1110;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	{register object V1111;
	register object V1112;
	V1111= Cnil;
	V1112= Cnil;
	{register object V1113;
	register object V1114;
	V1113= (V1110);
	V1114= CMPcar((V1113));
	goto T2138;
T2138:;
	if(!(((V1113))==Cnil)){
	goto T2139;}
	goto T2134;
	goto T2139;
T2139:;
	{register object V1115;
	base[1]= (V1114);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	V1117= vs_base[0];
	base[2]= (V1114);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk312)(Lclptr312);
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk66)(Lclptr66);
	vs_top=sup;
	V1118= vs_base[0];
	{register object x= V1117,V1116= V1118;
	while(V1116!=Cnil)
	if(eql(x,V1116->c.c_car->c.c_car) &&V1116->c.c_car != Cnil){
	V1115= (V1116->c.c_car);
	goto T2144;
	}else V1116=V1116->c.c_cdr;
	V1115= Cnil;}
	goto T2144;
T2144:;
	if(((V1111))!=Cnil){
	goto T2151;}
	V1112= make_cons((V1115),Cnil);
	V1111= (V1112);
	goto T2143;
	goto T2151;
T2151:;
	V1120= make_cons((V1115),Cnil);
	((V1112))->c.c_cdr = /* INLINE-ARGS */V1120;
	V1119= (V1112);
	V1112= CMPcdr(V1119);}
	goto T2143;
T2143:;
	V1113= CMPcdr((V1113));
	V1114= CMPcar((V1113));
	goto T2138;}
	goto T2134;
T2134:;
	{object V1121 = (V1111);
	VMR63(V1121)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-LAYOUT	*/

static object LI70(V1124,V1125)

object V1124;object V1125;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	{object V1126;
	register object V1127;
	V1126= Cnil;
	V1127= Cnil;
	{register object V1128;
	register object V1129;
	V1128= (V1125);
	V1129= CMPcar((V1128));
	goto T2169;
T2169:;
	if(!(((V1128))==Cnil)){
	goto T2170;}
	goto T2165;
	goto T2170;
T2170:;
	base[3]= (V1129);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk312)(Lclptr312);
	vs_top=sup;
	V1130= vs_base[0];
	if(!((V1130)==(VV[49]))){
	goto T2174;}
	{register object V1131;
	base[3]= (V1129);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	V1131= vs_base[0];
	if(((V1126))!=Cnil){
	goto T2182;}
	V1127= make_cons((V1131),Cnil);
	V1126= (V1127);
	goto T2174;
	goto T2182;
T2182:;
	V1133= make_cons((V1131),Cnil);
	((V1127))->c.c_cdr = /* INLINE-ARGS */V1133;
	V1132= (V1127);
	V1127= CMPcdr(V1132);}
	goto T2174;
T2174:;
	V1128= CMPcdr((V1128));
	V1129= CMPcar((V1128));
	goto T2169;}
	goto T2165;
T2165:;
	base[0]= (V1126);}
	base[1]= Cnil;
	base[3]= CMPcar((V1124));
	base[4]= VV[153];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk371)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2196;}
	base[2]= (V1124);
	goto T2194;
	goto T2196;
T2196:;
	base[2]= CMPcdr((V1124));
	goto T2194;
T2194:;
	vs_top=(vs_base=base+2)+1;
	L71(base);
	vs_top=sup;
	V1134= append(base[0],base[1]);
	{object V1135 = reverse(/* INLINE-ARGS */V1134);
	VMR64(V1135)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-GFS-OF-CLASS	*/

static object LI74(V1137)

object V1137;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	base[0]=MMcons((V1137),Cnil);
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk350)(Lclptr350);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2201;}
	{object V1138;
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk149)(Lclptr149);
	vs_top=sup;
	V1138= vs_base[0];{object V1139;
	{register object x= (VV[156]->s.s_dbind),V1140= (V1138);
	while(V1140!=Cnil)
	if(eql(x,V1140->c.c_car)){
	V1139= V1140;
	goto T2209;
	}else V1140=V1140->c.c_cdr;
	V1139= Cnil;}
	goto T2209;
T2209:;
	if(V1139==Cnil)goto T2208;
	if((V1139)==Cnil){
	goto T2201;}
	goto T2205;
	goto T2208;
T2208:;}
	{register object x= (VV[157]->s.s_dbind),V1141= (V1138);
	while(V1141!=Cnil)
	if(eql(x,V1141->c.c_car)){
	goto T2205;
	}else V1141=V1141->c.c_cdr;
	goto T2201;}}
	goto T2205;
T2205:;
	base[2]= VV[32];
	base[3]= VV[33];
	vs_top=(vs_base=base+2)+2;
	Lmake_hash_table();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	L75(base);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC144,Cnil,base[0],Cdata);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	Lmaphash();
	vs_top=sup;
	{object V1142 = vs_base[0];
	VMR65(V1142)}
	goto T2201;
T2201:;
	{object V1143 = Cnil;
	VMR65(V1143)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-INITS	*/

static object LI76(V1146,V1147)

object V1146;object V1147;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	base[0]= ({object _tmp=get(VV[272],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[272])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[272])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[1]= V1147;
	base[2]= V1146;
	base[3]= VV[64];
	vs_top=(vs_base=base+1)+3;
	{object _funobj = base[0];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	{object V1151 = vs_base[0];
	VMR66(V1151)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-DEFAULT-INITARGS (SLOT-CLASS))	*/

static object LI80(V1155,V1156,V1157)

object V1155;object V1156;object V1157;
{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	base[0]= (V1157);
	{object V1159;
	base[2]= base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk149)(Lclptr149);
	vs_top=sup;
	V1159= vs_base[0];
	base[2]= base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk372)(Lclptr372);
	vs_top=sup;
	base[1]= vs_base[0];
	{object V1160;
	base[2]= (V1159);
	vs_top=(vs_base=base+2)+1;
	L82(base);
	vs_top=sup;
	V1160= vs_base[0];
	base[2]= (V1160);
	base[3]= VV[32];
	base[4]= (VV[33]->s.s_gfdef);
	base[5]= VV[151];
	base[6]= (VV[373]->s.s_gfdef);
	base[7]= VV[158];
	base[8]= Ct;
	vs_top=(vs_base=base+2)+7;
	(void) (*Lnk374)();
	vs_top=sup;
	{object V1161 = vs_base[0];
	VMR67(V1161)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD DIRECT-SLOT-DEFINITION-CLASS (STD-CLASS T))	*/

static object LI83(V1166,V1167,V1168,V1169)

object V1166;object V1167;object V1168;object V1169;
{	 VMB68 VMS68 VMV68
	goto TTL;
TTL:;
	{object V1171 = (VFUN_NARGS=1,(*(LnkLI296))(VV[159]));
	VMR68(V1171)}
	return Cnil;
}
/*	function definition for MAKE-DIRECT-SLOTD	*/

static void L84()
{register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_check;
	{object V1172;
	object V1173;
	check_arg(2);
	V1172=(base[0]);
	V1173=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1174;
	V1174= listA(3,VV[113],(V1172),(V1173));
	base[2]=VV[300]->s.s_gfdef;
	base[4]= (V1172);
	base[5]= (V1174);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk375)(Lclptr375);
	vs_top=sup;
	base[3]= vs_base[0];
	{object V1175;
	V1175= (V1174);
	 vs_top=base+4;
	 while(V1175!=Cnil)
	 {vs_push((V1175)->c.c_car);V1175=(V1175)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk300)(Lclptr300);
	return;}
	}
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOTS (STD-CLASS))	*/

static object LI85(V1179,V1180,V1181)

object V1179;object V1180;object V1181;
{	 VMB70 VMS70 VMV70
	goto TTL;
TTL:;
	{register object V1183;
	V1183= Cnil;
	{object V1184;
	object V1185;
	base[2]= (V1181);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk149)(Lclptr149);
	vs_top=sup;
	V1184= vs_base[0];
	V1185= CMPcar((V1184));
	goto T2250;
T2250:;
	if(!(((V1184))==Cnil)){
	goto T2251;}
	goto T2245;
	goto T2251;
T2251:;
	{object V1186;
	base[2]= (V1185);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk328)(Lclptr328);
	vs_top=sup;
	V1186= vs_base[0];
	{register object V1187;
	register object V1188;
	V1187= (V1186);
	V1188= CMPcar((V1187));
	goto T2261;
T2261:;
	if(!(((V1187))==Cnil)){
	goto T2262;}
	goto T2255;
	goto T2262;
T2262:;
	{register object V1189;
	register object V1190;
	base[5]= (V1188);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	V1189= vs_base[0];
	{register object x= (V1189),V1191= (V1183);
	while(V1191!=Cnil)
	if(EQ(x,V1191->c.c_car->c.c_car) &&V1191->c.c_car != Cnil){
	V1190= (V1191->c.c_car);
	goto T2269;
	}else V1191=V1191->c.c_cdr;
	V1190= Cnil;}
	goto T2269;
T2269:;
	if(((V1190))==Cnil){
	goto T2271;}
	{register object V1193;
	register object V1194;
	V1193= (V1190);
	V1194= make_cons(V1188,CMPcdr((V1193)));
	((V1193))->c.c_cdr = (V1194);
	goto T2266;}
	goto T2271;
T2271:;
	{object V1195;
	V1195= list(2,(V1189),(V1188));
	V1183= make_cons((V1195),(V1183));}}
	goto T2266;
T2266:;
	V1187= CMPcdr((V1187));
	V1188= CMPcar((V1187));
	goto T2261;}}
	goto T2255;
T2255:;
	V1184= CMPcdr((V1184));
	V1185= CMPcar((V1184));
	goto T2250;}
	goto T2245;
T2245:;
	{object V1196;
	object V1197= (V1183);
	if(V1197==Cnil){
	{object V1198 = Cnil;
	VMR70(V1198)}}
	base[0]=V1196=MMcons(Cnil,Cnil);
	goto T2288;
T2288:;
	base[1]= (V1181);
	base[2]= nreverse(CMPcdr((V1197->c.c_car)));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk376)(Lclptr376);
	vs_top=sup;
	(V1196->c.c_car)= vs_base[0];
	if((V1197=MMcdr(V1197))==Cnil){
	{object V1200 = base[0];
	VMR70(V1200)}}
	V1196=MMcdr(V1196)=MMcons(Cnil,Cnil);
	goto T2288;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOTS :AROUND (STD-CLASS))	*/

static object LI88(V1204,V1205,V1206)

object V1204;object V1205;object V1206;
{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	base[0]= (V1206);
	base[1]= (V1205);
	{object V1208;
	object V1209;
	object V1210;
	object V1211;
	vs_base=vs_top;
	L89(base);
	vs_top=sup;
	V1208= vs_base[0];
	base[2]= base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk149)(Lclptr149);
	vs_top=sup;
	V1209= vs_base[0];
	V1210= Cnil;
	V1211= Cnil;
	{register object V1212;
	object V1213;
	V1212= (V1208);
	V1213= CMPcar((V1212));
	goto T2301;
T2301:;
	if(!(((V1212))==Cnil)){
	goto T2302;}
	goto T2297;
	goto T2302;
T2302:;
	{object V1214;
	base[3]= (V1213);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk312)(Lclptr312);
	vs_top=sup;
	V1214= vs_base[0];
	if(!(((V1214))==(VV[49]))){
	goto T2310;}
	V1210= make_cons(V1213,(V1210));
	goto T2306;
	goto T2310;
T2310:;
	base[3]= (V1214);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2306;}
	V1211= make_cons(V1213,(V1211));}
	goto T2306;
T2306:;
	V1212= CMPcdr((V1212));
	V1213= CMPcar((V1212));
	goto T2301;}
	goto T2297;
T2297:;
	{object V1217;
	V1217= (*(LnkLI377))((V1209),(V1210));
	{register object V1218;
	object V1219;
	V1218= (V1210);
	V1219= CMPcar((V1218));
	goto T2327;
T2327:;
	if(!(((V1218))==Cnil)){
	goto T2328;}
	goto T2322;
	goto T2328;
T2328:;
	{object V1221;
	base[5]= (V1219);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V1217);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk378)();
	vs_top=sup;
	V1221= vs_base[0];
	V1222= ({object _tmp=get(VV[366],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[366])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[366])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V1223 = V1222,
	(type_of(V1223) == t_sfun ?(*((V1223)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V1223)==t_vfun) ?
	(*((V1223)->sfn.sfn_self)):
	(fcall.fun=(V1223),fcalln))((V1221),V1219)));}
	V1218= CMPcdr((V1218));
	V1219= CMPcar((V1218));
	goto T2327;}}
	goto T2322;
T2322:;
	{register object V1224;
	object V1225;
	V1224= (V1211);
	V1225= CMPcar((V1224));
	goto T2347;
T2347:;
	if(!(((V1224))==Cnil)){
	goto T2348;}
	goto T2343;
	goto T2348;
T2348:;
	{object V1227;
	base[4]= (V1225);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	V1229= vs_base[0];
	base[5]= (V1225);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk312)(Lclptr312);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk66)(Lclptr66);
	vs_top=sup;
	V1230= vs_base[0];
	{register object x= V1229,V1228= V1230;
	while(V1228!=Cnil)
	if(eql(x,V1228->c.c_car->c.c_car) &&V1228->c.c_car != Cnil){
	V1227= (V1228->c.c_car);
	goto T2353;
	}else V1228=V1228->c.c_cdr;
	V1227= Cnil;}
	goto T2353;
T2353:;
	V1231= ({object _tmp=get(VV[366],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[366])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[366])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V1232 = V1231,
	(type_of(V1232) == t_sfun ?(*((V1232)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V1232)==t_vfun) ?
	(*((V1232)->sfn.sfn_self)):
	(fcall.fun=(V1232),fcalln))((V1227),V1225)));}
	V1224= CMPcdr((V1224));
	V1225= CMPcar((V1224));
	goto T2347;}
	goto T2343;
T2343:;
	base[2]=VV[379]->s.s_gfdef;
	{
	object V1233= (V1208);
	if(V1233==Cnil){
	goto T2365;}
	goto T2366;
T2366:;
	base[3]= (V1233->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk379)(Lclptr379);
	vs_top=sup;
	if((V1233=MMcdr(V1233))==Cnil){
	goto T2365;}
	goto T2366;}
	goto T2365;
T2365:;
	{object V1234 = (V1208);
	VMR71(V1234)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOTS (STRUCTURE-CLASS))	*/

static object LI90(V1238,V1239,V1240)

register object V1238;object V1239;register object V1240;
{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V1242;
	object V1243;
	V1242= CMPcar((V1238));
	V1243= CMPcdr((V1238));
	{object V1244;
	if(type_of(V1240)==t_structure){
	goto T2379;}
	goto T2377;
	goto T2379;
T2379:;
	if(!(((V1240)->str.str_def)==(VV[177]))){
	goto T2377;}
	V1244= STREF(object,(V1240),4);
	goto T2375;
	goto T2377;
T2377:;{object V1246;
	V1246= (VV[16]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1240);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V1247= vs_base[0];
	if(!((V1246)==(CMPcar(V1247)))){
	goto T2382;}}
	V1244= CMPcar(((V1240))->cc.cc_turbo[12]);
	goto T2375;
	goto T2382;
T2382:;
	V1244= Cnil;
	goto T2375;
T2375:;
	{register object V1251;
	V1251= ((V1242))->v.v_self[1];
	if(!(type_of(V1251)==t_fixnum)){
	goto T2393;}
	V1251= ((V1244))->v.v_self[fix((V1251))];
	goto T2391;
	goto T2393;
T2393:;
	V1251= VV[17];
	goto T2391;
T2391:;
	if(!(((V1251))==(VV[17]))){
	goto T2396;}
	base[1]= (V1240);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk380)(Lclptr380);
	vs_top=sup;
	V1250= vs_base[0];
	goto T2388;
	goto T2396;
T2396:;
	V1250= (V1251);}
	goto T2388;
T2388:;
	V1253= reverse(V1250);
	{object V1248;
	object V1249= /* INLINE-ARGS */V1253;
	if(V1249==Cnil){
	{object V1254 = Cnil;
	VMR72(V1254)}}
	base[0]=V1248=MMcons(Cnil,Cnil);
	goto T2387;
T2387:;
	base[2]= (V1249->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk328)(Lclptr328);
	vs_top=sup;
	V1258= vs_base[0];
	{object V1256;
	object V1257= V1258;
	if(V1257==Cnil){
	(V1248->c.c_cdr)= Cnil;
	goto T2399;}
	base[1]=V1256=MMcons(Cnil,Cnil);
	goto T2400;
T2400:;
	base[2]= (V1240);
	base[3]= make_cons((V1257->c.c_car),Cnil);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk376)(Lclptr376);
	vs_top=sup;
	(V1256->c.c_car)= vs_base[0];
	if((V1257=MMcdr(V1257))==Cnil){
	(V1248->c.c_cdr)= base[1];
	goto T2399;}
	V1256=MMcdr(V1256)=MMcons(Cnil,Cnil);
	goto T2400;}
	goto T2399;
T2399:;
	while(MMcdr(V1248)!=Cnil)V1248=MMcdr(V1248);
	if((V1249=MMcdr(V1249))==Cnil){
	base[0]=base[0]->c.c_cdr;
	{object V1260 = base[0];
	VMR72(V1260)}}
	goto T2387;}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-SLOTS :AROUND (STRUCTURE-CLASS))	*/

static object LI93(V1264,V1265,V1266)

object V1264;object V1265;object V1266;
{	 VMB73 VMS73 VMV73
	goto TTL;
TTL:;
	base[0]= (V1266);
	base[1]= (V1265);
	{object V1268;
	vs_base=vs_top;
	L94(base);
	vs_top=sup;
	V1268= vs_base[0];
	base[2]=VV[379]->s.s_gfdef;
	{
	object V1269= (V1268);
	if(V1269==Cnil){
	goto T2409;}
	goto T2410;
T2410:;
	base[3]= (V1269->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk379)(Lclptr379);
	vs_top=sup;
	if((V1269=MMcdr(V1269))==Cnil){
	goto T2409;}
	goto T2410;}
	goto T2409;
T2409:;
	{object V1270 = (V1268);
	VMR73(V1270)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD COMPUTE-EFFECTIVE-SLOT-DEFINITION (SLOT-CLASS T))	*/

static void L95()
{register object *base=vs_base;
	register object *sup=base+VM74; VC74
	vs_check;
	{object V1271;
	object V1272;
	register object V1273;
	object V1274;
	check_arg(4);
	V1271=(base[0]);
	V1272=(base[1]);
	V1273=(base[2]);
	V1274=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1276;
	object V1277;
	base[6]= (V1273);
	base[7]= (V1274);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk381)(Lclptr381);
	vs_top=sup;
	V1276= vs_base[0];
	base[6]= (V1273);
	base[7]= (V1276);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk382)(Lclptr382);
	vs_top=sup;
	V1277= vs_base[0];
	base[6]=VV[300]->s.s_gfdef;
	base[7]= (V1277);
	{object V1278;
	V1278= (V1276);
	 vs_top=base+8;
	 while(V1278!=Cnil)
	 {vs_push((V1278)->c.c_car);V1278=(V1278)->c.c_cdr;}
	vs_base=base+7;}
	(void) (*Lnk300)(Lclptr300);
	return;}
	}
}
/*	local entry for function (FAST-METHOD EFFECTIVE-SLOT-DEFINITION-CLASS (STD-CLASS T))	*/

static object LI96(V1283,V1284,V1285,V1286)

object V1283;object V1284;object V1285;object V1286;
{	 VMB75 VMS75 VMV75
	goto TTL;
TTL:;
	{object V1288 = (VFUN_NARGS=1,(*(LnkLI296))(VV[191]));
	VMR75(V1288)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD EFFECTIVE-SLOT-DEFINITION-CLASS (STRUCTURE-CLASS T))	*/

static object LI97(V1293,V1294,V1295,V1296)

object V1293;object V1294;object V1295;object V1296;
{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	{object V1298 = (VFUN_NARGS=1,(*(LnkLI296))(VV[192]));
	VMR76(V1298)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-EFFECTIVE-SLOT-DEFINITION-INITARGS (SLOT-CLASS T))	*/

static object LI98(V1303,V1304,V1305,V1306)

object V1303;object V1304;object V1305;object V1306;
{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V1308;
	object V1309;
	object V1310;
	register object V1311;
	object V1312;
	register object V1313;
	register object V1314;
	register object V1315;
	register object V1316;
	V1308= Cnil;
	V1309= Cnil;
	V1310= Cnil;
	V1311= Cnil;
	V1312= Cnil;
	V1313= Ct;
	V1314= Cnil;
	V1315= Cnil;
	V1316= Cnil;
	{register object V1317;
	register object V1318;
	V1317= (V1306);
	V1318= CMPcar((V1317));
	goto T2442;
T2442:;
	if(!(((V1317))==Cnil)){
	goto T2443;}
	goto T2438;
	goto T2443;
T2443:;
	if(((V1318))==Cnil){
	goto T2447;}
	if(((V1314))!=Cnil){
	goto T2450;}
	base[1]= (V1318);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	V1308= vs_base[0];
	V1314= Ct;
	goto T2450;
T2450:;
	if(((V1315))!=Cnil){
	goto T2457;}
	base[1]= (V1318);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk313)(Lclptr313);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2457;}
	base[1]= (V1318);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk383)(Lclptr383);
	vs_top=sup;
	V1310= vs_base[0];
	base[1]= (V1318);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk313)(Lclptr313);
	vs_top=sup;
	V1309= vs_base[0];
	V1315= Ct;
	goto T2457;
T2457:;
	if(((V1316))!=Cnil){
	goto T2470;}
	base[1]= (V1318);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk312)(Lclptr312);
	vs_top=sup;
	V1312= vs_base[0];
	V1316= Ct;
	goto T2470;
T2470:;
	base[1]= (V1318);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk384)(Lclptr384);
	vs_top=sup;
	V1319= vs_base[0];
	V1311= append(V1319,(V1311));
	{register object V1320;
	base[1]= (V1318);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk385)(Lclptr385);
	vs_top=sup;
	V1320= vs_base[0];
	if(!(((V1313))==(Ct))){
	goto T2485;}
	V1313= (V1320);
	goto T2483;
	goto T2485;
T2485:;
	base[1]= (V1313);
	base[2]= (V1320);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk386)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2488;}
	goto T2483;
	goto T2488;
T2488:;
	V1313= list(3,VV[193],(V1313),(V1320));
	goto T2483;
T2483:;}
	goto T2447;
T2447:;
	V1317= CMPcdr((V1317));
	V1318= CMPcar((V1317));
	goto T2442;}
	goto T2438;
T2438:;
	base[0]= VV[1];
	base[1]= (V1308);
	base[2]= VV[194];
	base[3]= (V1310);
	base[4]= VV[195];
	base[5]= (V1309);
	base[6]= VV[196];
	base[7]= (V1311);
	base[8]= VV[197];
	base[9]= (V1312);
	base[10]= VV[198];
	base[11]= (V1313);
	base[12]= VV[113];
	base[13]= (V1305);
	vs_top=(vs_base=base+0)+14;
	Llist();
	vs_top=sup;
	{object V1321 = vs_base[0];
	VMR77(V1321)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPUTE-EFFECTIVE-SLOT-DEFINITION-INITARGS :AROUND (STRUCTURE-CLASS T))	*/

static object LI101(V1326,V1327,V1328,V1329)

object V1326;object V1327;object V1328;object V1329;
{	 VMB78 VMS78 VMV78
	goto TTL;
TTL:;
	base[0]= (V1329);
	base[1]= (V1328);
	base[2]= (V1327);
	{object V1331;
	V1331= CMPcar(base[0]);
	base[3]= (V1331);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk332)(Lclptr332);
	vs_top=sup;
	V1332= vs_base[0];
	base[3]= (V1331);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk387)(Lclptr387);
	vs_top=sup;
	V1333= vs_base[0];
	base[3]= (V1331);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk388)(Lclptr388);
	vs_top=sup;
	V1334= vs_base[0];
	vs_base=vs_top;
	L102(base);
	vs_top=sup;
	V1335= vs_base[0];
	{object V1336 = listA(7,VV[119],V1332,VV[199],V1333,VV[200],V1334,V1335);
	VMR78(V1336)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD READER-METHOD-CLASS (SLOT-CLASS T))	*/

static object LI103(V1342,V1343,V1344,V1345,V1346)

object V1342;object V1343;object V1344;object V1345;object V1346;
{	 VMB79 VMS79 VMV79
	goto TTL;
TTL:;
	{object V1349 = (VFUN_NARGS=1,(*(LnkLI296))(VV[214]));
	VMR79(V1349)}
	return Cnil;
}
/*	function definition for (FAST-METHOD ADD-READER-METHOD (SLOT-CLASS T T))	*/

static void L104()
{register object *base=vs_base;
	register object *sup=base+VM80; VC80
	vs_check;
	{object V1350;
	object V1351;
	register object V1352;
	object V1353;
	register object V1354;
	check_arg(5);
	V1350=(base[0]);
	V1351=(base[1]);
	V1352=(base[2]);
	V1353=(base[3]);
	V1354=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]=(VV[389]->s.s_gfdef);
	base[6]= (V1353);
	base[8]=(VV[390]->s.s_gfdef);
	base[9]= VV[214];
	base[10]= Cnil;{object V1357;
	base[12]= (V1352);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk317)(Lclptr317);
	vs_top=sup;
	V1357= vs_base[0];
	if(V1357==Cnil)goto T2531;
	V1356= V1357;
	goto T2530;
	goto T2531;
T2531:;}
	V1356= VV[215];
	goto T2530;
T2530:;
	base[11]= make_cons(V1356,Cnil);
	base[12]= make_cons((V1352),Cnil);
	base[14]= (V1352);
	base[15]= (V1354);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk391)(Lclptr391);
	vs_top=sup;
	base[13]= vs_base[0];
	base[14]= VV[216];
	base[15]= (V1354);
	base[7]= simple_lispcall(base+8,7);
	lispcall(base+5,2);
	return;
	}
}
/*	local entry for function (FAST-METHOD WRITER-METHOD-CLASS (SLOT-CLASS T))	*/

static object LI105(V1363,V1364,V1365,V1366,V1367)

object V1363;object V1364;object V1365;object V1366;object V1367;
{	 VMB81 VMS81 VMV81
	goto TTL;
TTL:;
	{object V1370 = (VFUN_NARGS=1,(*(LnkLI296))(VV[217]));
	VMR81(V1370)}
	return Cnil;
}
/*	function definition for (FAST-METHOD ADD-WRITER-METHOD (SLOT-CLASS T T))	*/

static void L106()
{register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	{object V1371;
	object V1372;
	register object V1373;
	object V1374;
	register object V1375;
	check_arg(5);
	V1371=(base[0]);
	V1372=(base[1]);
	V1373=(base[2]);
	V1374=(base[3]);
	V1375=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]=(VV[389]->s.s_gfdef);
	base[6]= (V1374);
	base[8]=(VV[390]->s.s_gfdef);
	base[9]= VV[217];
	base[10]= Cnil;{object V1378;
	base[12]= (V1373);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk317)(Lclptr317);
	vs_top=sup;
	V1378= vs_base[0];
	if(V1378==Cnil)goto T2550;
	V1377= V1378;
	goto T2549;
	goto T2550;
T2550:;}
	V1377= VV[215];
	goto T2549;
T2549:;
	base[11]= list(2,VV[218],V1377);
	base[12]= list(2,(VV[219]->s.s_dbind),(V1373));
	base[14]= (V1373);
	base[15]= (V1375);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk392)(Lclptr392);
	vs_top=sup;
	base[13]= vs_base[0];
	base[14]= VV[220];
	base[15]= (V1375);
	base[7]= simple_lispcall(base+8,7);
	lispcall(base+5,2);
	return;
	}
}
/*	function definition for (FAST-METHOD ADD-BOUNDP-METHOD (SLOT-CLASS T T))	*/

static void L107()
{register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_check;
	{object V1379;
	object V1380;
	register object V1381;
	object V1382;
	register object V1383;
	check_arg(5);
	V1379=(base[0]);
	V1380=(base[1]);
	V1381=(base[2]);
	V1382=(base[3]);
	V1383=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]=(VV[389]->s.s_gfdef);
	base[6]= (V1382);
	base[8]=(VV[390]->s.s_gfdef);
	base[9]= VV[221];
	base[10]= Cnil;{object V1386;
	base[12]= (V1381);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk317)(Lclptr317);
	vs_top=sup;
	V1386= vs_base[0];
	if(V1386==Cnil)goto T2567;
	V1385= V1386;
	goto T2566;
	goto T2567;
T2567:;}
	V1385= VV[215];
	goto T2566;
T2566:;
	base[11]= make_cons(V1385,Cnil);
	base[12]= make_cons((V1381),Cnil);
	base[14]= (V1381);
	base[15]= (V1383);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk393)(Lclptr393);
	vs_top=sup;
	base[13]= vs_base[0];
	base[14]= VV[222];
	base[15]= (V1383);
	base[7]= simple_lispcall(base+8,7);
	lispcall(base+5,2);
	return;
	}
}
/*	local entry for function (FAST-METHOD REMOVE-READER-METHOD (SLOT-CLASS T))	*/

static object LI108(V1391,V1392,V1393,V1394)

object V1391;object V1392;object V1393;register object V1394;
{	 VMB84 VMS84 VMV84
	goto TTL;
TTL:;
	{object V1396;
	V1397= make_cons((V1393),Cnil);
	V1396= (VFUN_NARGS=4,(*(LnkLI394))((V1394),Cnil,/* INLINE-ARGS */V1397,Cnil));
	if(((V1396))==Cnil){
	goto T2580;}
	base[0]= (V1394);
	base[1]= (V1396);
	{object V1398 = simple_symlispcall(VV[395],base+0,2);
	VMR84(V1398)}
	goto T2580;
T2580:;
	{object V1399 = Cnil;
	VMR84(V1399)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-WRITER-METHOD (SLOT-CLASS T))	*/

static object LI109(V1404,V1405,V1406,V1407)

object V1404;object V1405;object V1406;register object V1407;
{	 VMB85 VMS85 VMV85
	goto TTL;
TTL:;
	{object V1409;
	V1410= list(2,(VV[219]->s.s_dbind),(V1406));
	V1409= (VFUN_NARGS=4,(*(LnkLI394))((V1407),Cnil,/* INLINE-ARGS */V1410,Cnil));
	if(((V1409))==Cnil){
	goto T2588;}
	base[0]= (V1407);
	base[1]= (V1409);
	{object V1411 = simple_symlispcall(VV[395],base+0,2);
	VMR85(V1411)}
	goto T2588;
T2588:;
	{object V1412 = Cnil;
	VMR85(V1412)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-BOUNDP-METHOD (SLOT-CLASS T))	*/

static object LI110(V1417,V1418,V1419,V1420)

object V1417;object V1418;object V1419;register object V1420;
{	 VMB86 VMS86 VMV86
	goto TTL;
TTL:;
	{object V1422;
	V1423= make_cons((V1419),Cnil);
	V1422= (VFUN_NARGS=4,(*(LnkLI394))((V1420),Cnil,/* INLINE-ARGS */V1423,Cnil));
	if(((V1422))==Cnil){
	goto T2596;}
	base[0]= (V1420);
	base[1]= (V1422);
	{object V1424 = simple_symlispcall(VV[395],base+0,2);
	VMR86(V1424)}
	goto T2596;
T2596:;
	{object V1425 = Cnil;
	VMR86(V1425)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-READER-METHOD-FUNCTION (SLOT-CLASS T))	*/

static object LI111(V1430,V1431,V1432,V1433)

object V1430;object V1431;object V1432;object V1433;
{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	base[0]= (V1432);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk317)(Lclptr317);
	vs_top=sup;
	V1435= vs_base[0];
	{object V1436 = (*(LnkLI396))(V1435,(V1433));
	VMR87(V1436)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-WRITER-METHOD-FUNCTION (SLOT-CLASS T))	*/

static object LI112(V1441,V1442,V1443,V1444)

object V1441;object V1442;object V1443;object V1444;
{	 VMB88 VMS88 VMV88
	goto TTL;
TTL:;
	base[0]= (V1443);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk317)(Lclptr317);
	vs_top=sup;
	V1446= vs_base[0];
	{object V1447 = (*(LnkLI397))(V1446,(V1444));
	VMR88(V1447)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-BOUNDP-METHOD-FUNCTION (SLOT-CLASS T))	*/

static object LI113(V1452,V1453,V1454,V1455)

object V1452;object V1453;object V1454;object V1455;
{	 VMB89 VMS89 VMV89
	goto TTL;
TTL:;
	base[0]= (V1454);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk317)(Lclptr317);
	vs_top=sup;
	V1457= vs_base[0];
	{object V1458 = (*(LnkLI398))(V1457,(V1455));
	VMR89(V1458)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD INFORM-TYPE-SYSTEM-ABOUT-CLASS (STD-CLASS T))	*/

static object LI114(V1463,V1464,V1465,V1466)

object V1463;object V1464;object V1465;object V1466;
{	 VMB90 VMS90 VMV90
	goto TTL;
TTL:;
	{object V1468 = (*(LnkLI399))((V1466));
	VMR90(V1468)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD COMPATIBLE-META-CLASS-CHANGE-P (T T))	*/

static object LI115(V1473,V1474,V1475,V1476)

object V1473;object V1474;object V1475;object V1476;
{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	V1478= (*(LnkLI301))((V1475));
	V1479= (*(LnkLI301))((V1476));
	{object V1480 = ((/* INLINE-ARGS */V1478)==(/* INLINE-ARGS */V1479)?Ct:Cnil);
	VMR91(V1480)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD VALIDATE-SUPERCLASS (CLASS CLASS))	*/

static object LI116(V1485,V1486,V1487,V1488)

object V1485;object V1486;object V1487;register object V1488;
{	 VMB92 VMS92 VMV92
	goto TTL;
TTL:;
	if(!(((V1488))==((VV[219]->s.s_dbind)))){
	goto T2618;}
	{object V1490 = Ct;
	VMR92(V1490)}
	goto T2618;
T2618:;
	V1491= (*(LnkLI301))((V1487));
	V1492= (*(LnkLI301))((V1488));
	{object V1493 = ((/* INLINE-ARGS */V1491)==(/* INLINE-ARGS */V1492)?Ct:Cnil);
	VMR92(V1493)}
	return Cnil;
}
/*	local entry for function FORCE-CACHE-FLUSHES	*/

static object LI117(V1495)

object V1495;
{	 VMB93 VMS93 VMV93
	goto TTL;
TTL:;
	{register object V1496;
	object V1497;
	base[2]= (V1495);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk369)(Lclptr369);
	vs_top=sup;
	V1496= vs_base[0];
	V1497= ((V1496))->v.v_self[8];
	if(!(((V1497))==(Ct))){
	goto T2624;}
	{register object V1498;
	V1498= (VFUN_NARGS=2,(*(LnkLI340))(((V1496))->v.v_self[12],(V1495)));
	(void)(((V1498))->v.v_self[9]= (((V1496))->v.v_self[9]));
	(void)(((V1498))->v.v_self[10]= (((V1496))->v.v_self[10]));
	if(!((VV[154])->s.s_gfdef!=OBJNULL)){
	goto T2631;}
	base[2]= (V1498);
	base[3]= (V1495);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk154)(Lclptr154);
	vs_top=sup;
	goto T2629;
	goto T2631;
T2631:;
	(void)((*(LnkLI359))(VV[154],VV[155]));
	goto T2629;
T2629:;
	{object V1499 = (*(LnkLI400))((V1496),VV[223],(V1498));
	VMR93(V1499)}}
	goto T2624;
T2624:;
	{object V1500 = Cnil;
	VMR93(V1500)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FLUSH-CACHE-TRAP	*/

static object LI118(V1504,V1505,V1506)

object V1504;object V1505;object V1506;
{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;
	{object V1507 = (*(LnkLI401))((V1506),(V1505));
	VMR94(V1507)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-INSTANCES-OBSOLETE (STD-CLASS))	*/

static object LI119(V1511,V1512,V1513)

register object V1511;object V1512;register object V1513;
{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;
	{object V1515;
	object V1516;
	V1515= CMPcar((V1511));
	V1516= CMPcdr((V1511));
	{object V1517;
	if(type_of(V1513)==t_structure){
	goto T2645;}
	goto T2643;
	goto T2645;
T2645:;
	if(!(((V1513)->str.str_def)==(VV[226]))){
	goto T2643;}
	V1517= STREF(object,(V1513),4);
	goto T2641;
	goto T2643;
T2643:;{object V1519;
	V1519= (VV[16]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1513);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V1520= vs_base[0];
	if(!((V1519)==(CMPcar(V1520)))){
	goto T2648;}}
	V1517= CMPcar(((V1513))->cc.cc_turbo[12]);
	goto T2641;
	goto T2648;
T2648:;
	V1517= Cnil;
	goto T2641;
T2641:;
	{register object V1521;
	register object V1522;
	base[2]= (V1513);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk369)(Lclptr369);
	vs_top=sup;
	V1521= vs_base[0];
	V1522= (VFUN_NARGS=2,(*(LnkLI340))(((V1521))->v.v_self[12],(V1513)));
	(void)(((V1522))->v.v_self[9]= (((V1521))->v.v_self[9]));
	(void)(((V1522))->v.v_self[10]= (((V1521))->v.v_self[10]));
	{object V1524;
	V1524= ((V1515))->v.v_self[1];
	if(!(type_of(V1524)==t_fixnum)){
	goto T2661;}
	(void)(((V1517))->v.v_self[fix((V1524))]= (V1522));
	goto T2658;
	goto T2661;
T2661:;
	base[2]= V1522;
	base[3]= (V1513);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk154)(Lclptr154);
	vs_top=sup;}
	goto T2658;
T2658:;
	(void)((*(LnkLI400))((V1521),VV[225],(V1522)));
	{object V1526 = (V1513);
	VMR95(V1526)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD MAKE-INSTANCES-OBSOLETE (SYMBOL))	*/

static void L120()
{register object *base=vs_base;
	register object *sup=base+VM96; VC96
	vs_check;
	{object V1527;
	object V1528;
	object V1529;
	check_arg(3);
	V1527=(base[0]);
	V1528=(base[1]);
	V1529=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (VFUN_NARGS=1,(*(LnkLI296))((V1529)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk370)(Lclptr370);
	return;
	}
}
/*	local entry for function OBSOLETE-INSTANCE-TRAP	*/

static object LI121(V1534,V1535,V1536)

object V1534;object V1535;object V1536;
{	 VMB97 VMS97 VMV97
	bds_check;
	goto TTL;
TTL:;
	if(type_of(V1536)==t_structure){
	goto T2673;}
	goto T2672;
	goto T2673;
T2673:;
	if(((V1536)->str.str_def)==(VV[227])){
	goto T2670;}
	goto T2672;
T2672:;{object V1538;
	V1538= (VV[16]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V1536);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V1539= vs_base[0];
	if((V1538)==(CMPcar(V1539))){
	goto T2670;}}
	if(((VV[228]->s.s_dbind))==Cnil){
	goto T2680;}
	{object V1540 = (VV[229]->s.s_dbind);
	VMR97(V1540)}
	goto T2680;
T2680:;
	bds_bind(VV[228],Ct);
	base[1]= VV[230];
	base[2]= (V1536);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	{object V1541 = vs_base[0];
	bds_unwind1;
	VMR97(V1541)}
	goto T2670;
T2670:;
	{object V1542;
	object V1543;
	object V1544;
	object V1545;
	object V1546;
	object V1547;
	object V1548;
	object V1549;
	register object V1550;
	register object V1551;
	V1542= ((V1535))->v.v_self[11];
	base[7]= (V1542);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V1543= vs_base[0];
	V1544= ((V1534))->v.v_self[9];
	V1545= ((V1535))->v.v_self[9];
	if(type_of(V1536)==t_structure){
	goto T2693;}
	goto T2691;
	goto T2693;
T2693:;
	if(!(((V1536)->str.str_def)==(VV[231]))){
	goto T2691;}
	V1546= STREF(object,(V1536),4);
	goto T2689;
	goto T2691;
T2691:;{object V1553;
	V1553= (VV[16]->s.s_dbind);
	base[7]= small_fixnum(14);
	base[8]= (V1536);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V1554= vs_base[0];
	if(!((V1553)==(CMPcar(V1554)))){
	goto T2696;}}
	V1546= CMPcar(((V1536))->cc.cc_turbo[12]);
	goto T2689;
	goto T2696;
T2696:;
	base[7]= VV[232];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	V1546= vs_base[0];
	goto T2689;
T2689:;
	if(type_of(V1543)==t_structure){
	goto T2706;}
	goto T2704;
	goto T2706;
T2706:;
	if(!(((V1543)->str.str_def)==(VV[233]))){
	goto T2704;}
	V1547= STREF(object,(V1543),4);
	goto T2702;
	goto T2704;
T2704:;{object V1556;
	V1556= (VV[16]->s.s_dbind);
	base[7]= small_fixnum(14);
	base[8]= (V1543);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V1557= vs_base[0];
	if(!((V1556)==(CMPcar(V1557)))){
	goto T2709;}}
	V1547= CMPcar(((V1543))->cc.cc_turbo[12]);
	goto T2702;
	goto T2709;
T2709:;
	base[7]= VV[232];
	vs_top=(vs_base=base+7)+1;
	Lerror();
	vs_top=sup;
	V1547= vs_base[0];
	goto T2702;
T2702:;
	V1548= ((V1534))->v.v_self[10];
	V1549= Cnil;
	V1550= Cnil;
	V1551= Cnil;
	{register object V1558;
	register object V1559;
	object V1560;
	object V1561;
	V1558= (V1544);
	V1559= Cnil;
	V1560= small_fixnum(0);
	V1561= Cnil;
	goto T2725;
T2725:;
	{object V1562;
	if(!(((V1558))==Cnil)){
	goto T2731;}
	goto T2719;
	goto T2731;
T2731:;
	V1562= CMPcar((V1558));
	V1558= CMPcdr((V1558));
	V1559= (V1562);}
	{object V1563;
	V1563= (V1560);
	V1560= number_plus((V1560),small_fixnum(1));
	V1561= (V1563);}
	{long V1564;
	object V1565;
	V1564= fix((V1561));
	base[8]= (V1559);
	base[9]= (V1545);
	base[10]= VV[32];
	base[11]= (VV[33]->s.s_gfdef);
	vs_top=(vs_base=base+8)+4;
	(void) (*Lnk378)();
	vs_top=sup;
	V1565= vs_base[0];
	if(((V1565))==Cnil){
	goto T2746;}
	(void)((((V1547))->v.v_self[fix((V1565))]=(((V1546))->v.v_self[V1564])));
	goto T2726;
	goto T2746;
T2746:;
	V1550= make_cons(V1559,(V1550));
	if((((V1546))->v.v_self[V1564])==((VV[108]->s.s_dbind))){
	goto T2726;}
	{object V1568;
	V1568= ((V1546))->v.v_self[V1564];
	{object V1569;
	base[9]= (V1551);
	base[10]= (V1568);
	base[11]= V1559;
	vs_top=(vs_base=base+9)+3;
	siLput_f();
	vs_top=sup;
	V1569= vs_base[0];
	V1551= (V1569);}}}
	goto T2726;
T2726:;
	goto T2725;}
	goto T2719;
T2719:;
	{register object V1570;
	register object V1571;
	V1570= (V1548);
	V1571= Cnil;
	goto T2764;
T2764:;
	{object V1572;
	if(!(((V1570))==Cnil)){
	goto T2770;}
	goto T2760;
	goto T2770;
T2770:;
	V1572= CMPcar((V1570));
	V1570= CMPcdr((V1570));
	V1571= (V1572);}
	{object V1573;
	object V1574;
	V1573= CMPcar((V1571));
	V1574= CMPcdr((V1571));
	{object V1575;
	base[7]= (V1573);
	base[8]= (V1545);
	base[9]= VV[32];
	base[10]= (VV[33]->s.s_gfdef);
	vs_top=(vs_base=base+7)+4;
	(void) (*Lnk378)();
	vs_top=sup;
	V1575= vs_base[0];
	if(((V1575))==Cnil){
	goto T2782;}
	(void)((((V1547))->v.v_self[fix((V1575))]=(CMPcdr((V1571)))));
	goto T2765;
	goto T2782;
T2782:;
	V1550= make_cons(V1573,(V1550));
	if(((V1574))==((VV[108]->s.s_dbind))){
	goto T2765;}
	{object V1579;
	base[7]= (V1551);
	base[8]= V1574;
	base[9]= V1573;
	vs_top=(vs_base=base+7)+3;
	siLput_f();
	vs_top=sup;
	V1579= vs_base[0];
	V1551= (V1579);}}}
	goto T2765;
T2765:;
	goto T2764;}
	goto T2760;
T2760:;
	{register object V1580;
	register object V1581;
	V1580= (V1545);
	V1581= CMPcar((V1580));
	goto T2799;
T2799:;
	if(!(((V1580))==Cnil)){
	goto T2800;}
	goto T2795;
	goto T2800;
T2800:;
	{register object x= (V1581),V1582= (V1544);
	while(V1582!=Cnil)
	if(x==(V1582->c.c_car)){
	goto T2804;
	}else V1582=V1582->c.c_cdr;}
	{register object x= (V1581),V1583= (V1548);
	while(V1583!=Cnil)
	if(EQ(x,V1583->c.c_car->c.c_car) &&V1583->c.c_car != Cnil){
	goto T2804;
	}else V1583=V1583->c.c_cdr;}
	V1549= make_cons(V1581,(V1549));
	goto T2804;
T2804:;
	V1580= CMPcdr((V1580));
	V1581= CMPcar((V1580));
	goto T2799;}
	goto T2795;
T2795:;
	(void)((*(LnkLI402))((V1536),(V1543)));
	base[7]= (V1536);
	base[8]= (V1549);
	base[9]= (V1550);
	base[10]= (V1551);
	vs_top=(vs_base=base+7)+4;
	(void) (*Lnk403)(Lclptr403);
	vs_top=sup;
	{object V1585 = (V1535);
	VMR97(V1585)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for COPY-INSTANCE-INTERNAL	*/

static void L122()
{register object *base=vs_base;
	register object *sup=base+VM98; VC98
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1586=base[0]->c.c_cdr;
	if(endp(V1586))invalid_macro_call();
	base[2]= (V1586->c.c_car);
	V1586=V1586->c.c_cdr;
	if(!endp(V1586))invalid_macro_call();}
	V1587= list(2,VV[237],base[2]);
	V1588= list(2,VV[238],base[2]);
	V1589= list(3,VV[136],/* INLINE-ARGS */V1588,list(2,VV[238],base[2]));
	V1590= list(2,VV[239],base[2]);
	base[3]= list(2,VV[138],list(4,VV[234],VV[235],list(4,VV[236],/* INLINE-ARGS */V1587,/* INLINE-ARGS */V1589,list(3,VV[136],/* INLINE-ARGS */V1590,list(2,VV[239],base[2]))),VV[240]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function CHANGE-CLASS-INTERNAL	*/

static object LI123(V1594,V1595,V1596)

object V1594;object V1595;object V1596;
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
	V1597= (*(LnkLI301))((V1594));
	base[9]= (V1595);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk278)(Lclptr278);
	vs_top=sup;
	V1598= vs_base[0];
	if(type_of(V1598)==t_structure){
	goto T2828;}
	goto T2826;
	goto T2828;
T2828:;
	if(!(((V1598)->str.str_def)==(VV[241]))){
	goto T2826;}
	V1599= STREF(object,(V1598),0);
	goto T2824;
	goto T2826;
T2826:;{object V1607;
	V1607= (VV[16]->s.s_dbind);
	base[9]= small_fixnum(14);
	base[10]= (V1598);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V1608= vs_base[0];
	if(!((V1607)==(CMPcar(V1608)))){
	goto T2831;}}
	V1599= CMPcar(((V1598))->cc.cc_turbo[13]);
	goto T2824;
	goto T2831;
T2831:;
	base[9]= VV[242];
	vs_top=(vs_base=base+9)+1;
	Lerror();
	vs_top=sup;
	V1599= vs_base[0];
	goto T2824;
T2824:;
	base[9]= (V1597);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk369)(Lclptr369);
	vs_top=sup;
	V1600= vs_base[0];
	V1601= ((V1600))->v.v_self[9];
	V1602= ((V1599))->v.v_self[9];
	if(type_of(V1594)==t_structure){
	goto T2845;}
	goto T2843;
	goto T2845;
T2845:;
	if(!(((V1594)->str.str_def)==(VV[243]))){
	goto T2843;}
	V1603= STREF(object,(V1594),4);
	goto T2841;
	goto T2843;
T2843:;{object V1610;
	V1610= (VV[16]->s.s_dbind);
	base[9]= small_fixnum(14);
	base[10]= (V1594);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V1611= vs_base[0];
	if(!((V1610)==(CMPcar(V1611)))){
	goto T2848;}}
	V1603= CMPcar(((V1594))->cc.cc_turbo[12]);
	goto T2841;
	goto T2848;
T2848:;
	base[9]= VV[232];
	vs_top=(vs_base=base+9)+1;
	Lerror();
	vs_top=sup;
	V1603= vs_base[0];
	goto T2841;
T2841:;
	if(type_of(V1598)==t_structure){
	goto T2858;}
	goto T2856;
	goto T2858;
T2858:;
	if(!(((V1598)->str.str_def)==(VV[244]))){
	goto T2856;}
	V1604= STREF(object,(V1598),4);
	goto T2854;
	goto T2856;
T2856:;{object V1613;
	V1613= (VV[16]->s.s_dbind);
	base[9]= small_fixnum(14);
	base[10]= (V1598);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V1614= vs_base[0];
	if(!((V1613)==(CMPcar(V1614)))){
	goto T2861;}}
	V1604= CMPcar(((V1598))->cc.cc_turbo[12]);
	goto T2854;
	goto T2861;
T2861:;
	base[9]= VV[232];
	vs_top=(vs_base=base+9)+1;
	Lerror();
	vs_top=sup;
	V1604= vs_base[0];
	goto T2854;
T2854:;
	V1605= ((V1600))->v.v_self[10];
	{object V1615;
	register object V1616;
	register object V1617;
	V1615= Cnil;
	V1616= (V1602);
	V1617= small_fixnum(0);
	{register object V1618;
	V1618= Cnil;
	if(!(((V1616))==Cnil)){
	goto T2872;}
	goto T2871;
	goto T2872;
T2872:;
	V1615= CMPcar((V1616));
	goto T2870;
T2870:;
	V1616= CMPcdr((V1616));
	base[9]= (V1615);
	base[10]= (V1601);
	base[11]= VV[32];
	base[12]= (VV[33]->s.s_gfdef);
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk378)();
	vs_top=sup;
	V1618= vs_base[0];
	if(((V1618))==Cnil){
	goto T2884;}
	(void)((((V1604))->v.v_self[fix((V1617))]=(((V1603))->v.v_self[fix((V1618))])));
	goto T2884;
T2884:;
	if(!(((V1616))==Cnil)){
	goto T2887;}
	goto T2871;
	goto T2887;
T2887:;
	{object V1619;
	V1619= CMPcar((V1616));
	V1617= one_plus((V1617));
	V1615= (V1619);}
	goto T2870;
	goto T2871;
T2871:;
	goto T2868;}}
	goto T2868;
T2868:;
	{object V1620;
	object V1621;
	register object V1622;
	V1620= Cnil;
	V1621= Cnil;
	V1622= (V1605);
	{register object V1623;
	V1623= Cnil;
	goto T2897;
T2897:;
	if(!(((V1622))==Cnil)){
	goto T2899;}
	goto T2898;
	goto T2899;
T2899:;
	{register object V1624;
	V1624= CMPcar((V1622));
	V1620= CMPcar((V1624));
	V1624= CMPcdr((V1624));
	V1621= (V1624);}
	V1622= CMPcdr((V1622));
	base[9]= (V1620);
	base[10]= (V1602);
	base[11]= VV[32];
	base[12]= (VV[33]->s.s_gfdef);
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk378)();
	vs_top=sup;
	V1623= vs_base[0];
	if(((V1623))==Cnil){
	goto T2917;}
	(void)((((V1604))->v.v_self[fix((V1623))]=((V1621))));
	goto T2917;
T2917:;
	goto T2897;
	goto T2898;
T2898:;
	goto T2895;}}
	goto T2895;
T2895:;
	(void)((*(LnkLI402))((V1594),(V1598)));
	base[9]=VV[404]->s.s_gfdef;
	base[10]= (V1598);
	base[11]= (V1594);
	{object V1625;
	V1625= (V1596);
	 vs_top=base+12;
	 while(V1625!=Cnil)
	 {vs_push((V1625)->c.c_car);V1625=(V1625)->c.c_cdr;}
	vs_base=base+10;}
	(void) (*Lnk404)(Lclptr404);
	vs_top=sup;
	{object V1626 = (V1594);
	VMR99(V1626)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD CHANGE-CLASS (STANDARD-OBJECT STANDARD-CLASS))	*/

static object LI124(V1632,V1633,V1634,V1635,V1636)

object V1632;object V1633;object V1634;object V1635;object V1636;
{	 VMB100 VMS100 VMV100
	goto TTL;
TTL:;
	{object V1639 = (*(LnkLI405))((V1634),(V1635),V1636);
	VMR100(V1639)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CHANGE-CLASS (STANDARD-OBJECT FUNCALLABLE-STANDARD-CLASS))	*/

static object LI125(V1645,V1646,V1647,V1648,V1649)

object V1645;object V1646;object V1647;object V1648;object V1649;
{	 VMB101 VMS101 VMV101
	goto TTL;
TTL:;
	base[0]= VV[245];
	base[1]= (V1647);
	base[2]= (V1648);
	base[3]= VV[246];
	vs_top=(vs_base=base+0)+4;
	Lerror();
	vs_top=sup;
	{object V1652 = vs_base[0];
	VMR101(V1652)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD CHANGE-CLASS (T SYMBOL))	*/

static void L126()
{register object *base=vs_base;
	register object *sup=base+VM102; VC102
	vs_check;
	{object V1653;
	object V1654;
	object V1655;
	object V1656;
	object V1657;
	check_arg(5);
	V1653=(base[0]);
	V1654=(base[1]);
	V1655=(base[2]);
	V1656=(base[3]);
	V1657=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]=VV[302]->s.s_gfdef;
	base[6]= (V1655);
	base[7]= (VFUN_NARGS=1,(*(LnkLI296))((V1656)));
	{object V1660;
	V1660= V1657;
	 vs_top=base+8;
	 while(V1660!=Cnil)
	 {vs_push((V1660)->c.c_car);V1660=(V1660)->c.c_cdr;}
	vs_base=base+6;}
	(void) (*Lnk302)(Lclptr302);
	return;
	}
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE :BEFORE (BUILT-IN-CLASS T))	*/

static object LI127(V1666,V1667,V1668,V1669,V1670)

object V1666;object V1667;object V1668;object V1669;object V1670;
{	 VMB103 VMS103 VMV103
	goto TTL;
TTL:;
	base[0]= VV[247];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V1673 = vs_base[0];
	VMR103(V1673)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-DIRECT-SLOTS (BUILT-IN-CLASS))	*/

static object LI128(V1677,V1678,V1679)

object V1677;object V1678;object V1679;
{	 VMB104 VMS104 VMV104
	goto TTL;
TTL:;
	{object V1681 = Cnil;
	VMR104(V1681)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-SLOTS (BUILT-IN-CLASS))	*/

static object LI129(V1685,V1686,V1687)

object V1685;object V1686;object V1687;
{	 VMB105 VMS105 VMV105
	goto TTL;
TTL:;
	{object V1689 = Cnil;
	VMR105(V1689)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-DIRECT-DEFAULT-INITARGS (BUILT-IN-CLASS))	*/

static object LI130(V1693,V1694,V1695)

object V1693;object V1694;object V1695;
{	 VMB106 VMS106 VMV106
	goto TTL;
TTL:;
	{object V1697 = Cnil;
	VMR106(V1697)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD CLASS-DEFAULT-INITARGS (BUILT-IN-CLASS))	*/

static object LI131(V1701,V1702,V1703)

object V1701;object V1702;object V1703;
{	 VMB107 VMS107 VMV107
	goto TTL;
TTL:;
	{object V1705 = Cnil;
	VMR107(V1705)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD VALIDATE-SUPERCLASS (CLASS BUILT-IN-CLASS))	*/

static object LI132(V1710,V1711,V1712,V1713)

object V1710;object V1711;object V1712;object V1713;
{	 VMB108 VMS108 VMV108
	goto TTL;
TTL:;
	{object V1715 = (((V1713))==((VV[219]->s.s_dbind))?Ct:Cnil);
	VMR108(V1715)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD VALIDATE-SUPERCLASS (SLOT-CLASS FORWARD-REFERENCED-CLASS))	*/

static object LI133(V1720,V1721,V1722,V1723)

object V1720;object V1721;object V1722;object V1723;
{	 VMB109 VMS109 VMV109
	goto TTL;
TTL:;
	{object V1725 = Ct;
	VMR109(V1725)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD ADD-DEPENDENT (DEPENDENT-UPDATE-MIXIN T))	*/

static object LI134(V1730,V1731,V1732,V1733)

object V1730;object V1731;object V1732;object V1733;
{	 VMB110 VMS110 VMV110
	goto TTL;
TTL:;
	{object V1738;
	base[1]= V1733;
	base[2]= (*(LnkLI272))(V1732,VV[248]);
	vs_top=(vs_base=base+1)+2;
	Ladjoin();
	vs_top=sup;
	V1738= vs_base[0];
	base[1]= ({object _tmp=get(VV[272],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[272])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[272])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[2]= (V1738);
	base[3]= V1732;
	base[4]= VV[248];
	vs_top=(vs_base=base+2)+3;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	{object V1739 = vs_base[0];
	VMR110(V1739)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD REMOVE-DEPENDENT (DEPENDENT-UPDATE-MIXIN T))	*/

static object LI135(V1744,V1745,V1746,V1747)

object V1744;object V1745;register object V1746;object V1747;
{	 VMB111 VMS111 VMV111
	goto TTL;
TTL:;
	{object V1751;
	base[1]= (V1747);
	base[2]= (*(LnkLI272))((V1746),VV[248]);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk406)();
	vs_top=sup;
	V1751= vs_base[0];
	base[1]= ({object _tmp=get(VV[272],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[272])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[272])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[2]= (V1751);
	base[3]= V1746;
	base[4]= VV[248];
	vs_top=(vs_base=base+2)+3;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	{object V1752 = vs_base[0];
	VMR111(V1752)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAP-DEPENDENTS (DEPENDENT-UPDATE-MIXIN T))	*/

static object LI136(V1757,V1758,V1759,V1760)

object V1757;object V1758;object V1759;register object V1760;
{	 VMB112 VMS112 VMV112
	goto TTL;
TTL:;
	{register object V1762;
	register object V1763;
	V1762= (*(LnkLI272))((V1759),VV[248]);
	V1763= CMPcar((V1762));
	goto T2976;
T2976:;
	if(!(((V1762))==Cnil)){
	goto T2977;}
	{object V1764 = Cnil;
	VMR112(V1764)}
	goto T2977;
T2977:;
	(void)((
	(type_of((V1760)) == t_sfun ?(*(((V1760))->sfn.sfn_self)):
	(fcall.argd=1,type_of((V1760))==t_vfun) ?
	(*(((V1760))->sfn.sfn_self)):
	(fcall.fun=((V1760)),fcalln))((V1763))));
	V1762= CMPcdr((V1762));
	V1763= CMPcar((V1762));
	goto T2976;}
	base[0]=base[0];
	return Cnil;
}
/*	local function CALL-NEXT-METHOD	*/

static void L102(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM113; VC113
	vs_check;
	{object V1765;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1765=(base[0]);
	vs_top=sup;
	if((base0[2])==Cnil){
	goto T2988;}
	if(((V1765))==Cnil){
	goto T2991;}
	{register object V1766;
	register object V1767;
	object V1768;
	V1766= (V1765);
	{object V1769;
	V1769= CMPcar((V1766));
	V1766= CMPcdr((V1766));
	V1767= (V1769);}
	{object V1770;
	V1770= CMPcar((V1766));
	V1766= CMPcdr((V1766));
	V1768= (V1770);}
	base[3]= base0[2];
	base[4]= VV[160];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3004;}
	base[3]= STREF(object,base0[2],0);
	base[4]= STREF(object,base0[2],4);
	base[5]= STREF(object,base0[2],8);
	base[6]= (V1767);
	base[7]= (V1768);
	vs_top=(vs_base=base+4)+4;
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3004;
T3004:;
	if(!(type_of(base0[2])==t_fixnum)){
	goto T3014;}
	{object V1772;
	if(type_of(V1767)==t_structure){
	goto T3020;}
	goto T3018;
	goto T3020;
T3020:;
	if(!(((V1767)->str.str_def)==(VV[208]))){
	goto T3018;}
	V1772= STREF(object,(V1767),4);
	goto T3016;
	goto T3018;
T3018:;{object V1774;
	V1774= (VV[16]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V1767);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V1775= vs_base[0];
	if(!((V1774)==(CMPcar(V1775)))){
	goto T3023;}}
	V1772= CMPcar(((V1767))->cc.cc_turbo[12]);
	goto T3016;
	goto T3023;
T3023:;
	V1772= Cnil;
	goto T3016;
T3016:;
	if(((V1772))==Cnil){
	goto T3029;}
	base[3]= ((V1772))->v.v_self[fix(base0[2])]= (V1767);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T3029;
T3029:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T3014;
T3014:;
	{register object V1777;
	V1777= base0[2];
	base[3]= (V1777);
	base[4]= VV[162];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3032;}
	{object V1778;
	object V1779;
	register object V1780;
	V1778= STREF(object,base0[2],0);
	V1779= list(2,(V1767),(V1768));
	V1780= STREF(object,base0[2],4);
	if(((V1780))==Cnil){
	goto T3040;}
	if((CMPcdr((V1780)))!=Cnil){
	goto T3040;}
	base[3]= (V1779);
	base[4]= CMPcar((V1780));
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (V1778);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3040;
T3040:;
	base[3]= (V1778);
	base[4]= (V1779);
	{object V1781;
	V1781= (V1780);
	 vs_top=base+5;
	 while(V1781!=Cnil)
	 {vs_push((V1781)->c.c_car);V1781=(V1781)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T3032;
T3032:;
	base[3]= (V1777);
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3050;}
	base[3]= (V1767);
	base[4]= (V1768);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base0[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3050;
T3050:;
	base[3]= VV[0];
	base[4]= VV[1];
	base[5]= VV[163];
	base[6]= VV[3];
	base[7]= base0[2];
	base[8]= VV[4];
	base[9]= VV[209];
	base[10]= VV[6];
	base[11]= VV[210];
	vs_top=(vs_base=base+3)+9;
	(void) (*Lnk255)();
	return;}}
	goto T2991;
T2991:;
	base[1]= base0[2];
	base[2]= VV[160];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3066;}
	base[1]= STREF(object,base0[2],0);
	base[2]= STREF(object,base0[2],4);
	base[3]= STREF(object,base0[2],8);
	base[4]= base0[1];
	base[5]= base0[0];
	vs_top=(vs_base=base+2)+4;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3066;
T3066:;
	if(!(type_of(base0[2])==t_fixnum)){
	goto T3076;}
	{object V1783;
	if(type_of(base0[1])==t_structure){
	goto T3082;}
	goto T3080;
	goto T3082;
T3082:;
	if(!(((base0[1])->str.str_def)==(VV[211]))){
	goto T3080;}
	V1783= STREF(object,base0[1],4);
	goto T3078;
	goto T3080;
T3080:;{object V1785;
	V1785= (VV[16]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= base0[1];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V1786= vs_base[0];
	if(!((V1785)==(CMPcar(V1786)))){
	goto T3085;}}
	V1783= CMPcar((base0[1])->cc.cc_turbo[12]);
	goto T3078;
	goto T3085;
T3085:;
	V1783= Cnil;
	goto T3078;
T3078:;
	if(((V1783))==Cnil){
	goto T3091;}
	base[1]= ((V1783))->v.v_self[fix(base0[2])]= (base0[1]);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3091;
T3091:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T3076;
T3076:;
	{register object V1788;
	V1788= base0[2];
	base[1]= (V1788);
	base[2]= VV[162];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3094;}
	{object V1789;
	object V1790;
	register object V1791;
	V1789= STREF(object,base0[2],0);
	V1790= list(2,base0[1],base0[0]);
	V1791= STREF(object,base0[2],4);
	if(((V1791))==Cnil){
	goto T3102;}
	if((CMPcdr((V1791)))!=Cnil){
	goto T3102;}
	base[1]= (V1790);
	base[2]= CMPcar((V1791));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V1789);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3102;
T3102:;
	base[1]= (V1789);
	base[2]= (V1790);
	{object V1792;
	V1792= (V1791);
	 vs_top=base+3;
	 while(V1792!=Cnil)
	 {vs_push((V1792)->c.c_car);V1792=(V1792)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T3094;
T3094:;
	base[1]= (V1788);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3112;}
	base[1]= base0[1];
	base[2]= base0[0];
	vs_top=(vs_base=base+1)+2;
	{object _funobj = base0[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3112;
T3112:;
	base[1]= VV[0];
	base[2]= VV[1];
	base[3]= VV[163];
	base[4]= VV[3];
	base[5]= base0[2];
	base[6]= VV[4];
	base[7]= VV[212];
	base[8]= VV[6];
	base[9]= VV[213];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk255)();
	return;}
	goto T2988;
T2988:;
	base[1]= VV[207];
	base[2]= base0[1];
	base[3]= base0[0];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk408)();
	return;
	}
}
/*	local function CALL-NEXT-METHOD	*/

static void L94(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM114; VC114
	vs_check;
	{object V1793;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1793=(base[0]);
	vs_top=sup;
	if((base0[1])==Cnil){
	goto T3130;}
	if(((V1793))==Cnil){
	goto T3133;}
	{object V1794;
	register object V1795;
	V1794= (V1793);
	{object V1796;
	V1796= CMPcar((V1794));
	V1794= CMPcdr((V1794));
	V1795= (V1796);}
	base[2]= base0[1];
	base[3]= VV[160];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3142;}
	base[2]= STREF(object,base0[1],0);
	base[3]= STREF(object,base0[1],4);
	base[4]= STREF(object,base0[1],8);
	base[5]= (V1795);
	vs_top=(vs_base=base+3)+3;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3142;
T3142:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T3151;}
	{object V1797;
	object V1798;
	if(type_of(V1795)==t_structure){
	goto T3157;}
	goto T3155;
	goto T3157;
T3157:;
	if(!(((V1795)->str.str_def)==(VV[185]))){
	goto T3155;}
	V1797= STREF(object,(V1795),4);
	goto T3153;
	goto T3155;
T3155:;{object V1800;
	V1800= (VV[16]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V1795);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V1801= vs_base[0];
	if(!((V1800)==(CMPcar(V1801)))){
	goto T3160;}}
	V1797= CMPcar(((V1795))->cc.cc_turbo[12]);
	goto T3153;
	goto T3160;
T3160:;
	V1797= Cnil;
	goto T3153;
T3153:;
	if(((V1797))==Cnil){
	goto T3167;}
	V1798= ((V1797))->v.v_self[fix(base0[1])];
	goto T3165;
	goto T3167;
T3167:;
	V1798= Cnil;
	goto T3165;
T3165:;
	if(!(((V1798))==(VV[17]))){
	goto T3170;}
	base[4]= (V1795);
	base[5]= base0[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk409)();
	return;
	goto T3170;
T3170:;
	base[4]= (V1798);
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T3151;
T3151:;
	{register object V1803;
	V1803= base0[1];
	base[2]= (V1803);
	base[3]= VV[162];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3175;}
	{object V1804;
	object V1805;
	register object V1806;
	V1804= STREF(object,base0[1],0);
	V1805= make_cons((V1795),Cnil);
	V1806= STREF(object,base0[1],4);
	if(((V1806))==Cnil){
	goto T3183;}
	if((CMPcdr((V1806)))!=Cnil){
	goto T3183;}
	base[2]= (V1805);
	base[3]= CMPcar((V1806));
	vs_top=(vs_base=base+2)+2;
	{object _funobj = (V1804);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3183;
T3183:;
	base[2]= (V1804);
	base[3]= (V1805);
	{object V1807;
	V1807= (V1806);
	 vs_top=base+4;
	 while(V1807!=Cnil)
	 {vs_push((V1807)->c.c_car);V1807=(V1807)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T3175;
T3175:;
	base[2]= (V1803);
	vs_top=(vs_base=base+2)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3193;}
	base[2]= (V1795);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3193;
T3193:;
	base[2]= VV[0];
	base[3]= VV[1];
	base[4]= VV[163];
	base[5]= VV[3];
	base[6]= base0[1];
	base[7]= VV[4];
	base[8]= VV[186];
	base[9]= VV[6];
	base[10]= VV[187];
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk255)();
	return;}}
	goto T3133;
T3133:;
	base[1]= base0[1];
	base[2]= VV[160];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3208;}
	base[1]= STREF(object,base0[1],0);
	base[2]= STREF(object,base0[1],4);
	base[3]= STREF(object,base0[1],8);
	base[4]= base0[0];
	vs_top=(vs_base=base+2)+3;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3208;
T3208:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T3217;}
	{object V1808;
	object V1809;
	if(type_of(base0[0])==t_structure){
	goto T3223;}
	goto T3221;
	goto T3223;
T3223:;
	if(!(((base0[0])->str.str_def)==(VV[188]))){
	goto T3221;}
	V1808= STREF(object,base0[0],4);
	goto T3219;
	goto T3221;
T3221:;{object V1811;
	V1811= (VV[16]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= base0[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V1812= vs_base[0];
	if(!((V1811)==(CMPcar(V1812)))){
	goto T3226;}}
	V1808= CMPcar((base0[0])->cc.cc_turbo[12]);
	goto T3219;
	goto T3226;
T3226:;
	V1808= Cnil;
	goto T3219;
T3219:;
	if(((V1808))==Cnil){
	goto T3233;}
	V1809= ((V1808))->v.v_self[fix(base0[1])];
	goto T3231;
	goto T3233;
T3233:;
	V1809= Cnil;
	goto T3231;
T3231:;
	if(!(((V1809))==(VV[17]))){
	goto T3236;}
	base[3]= base0[0];
	base[4]= base0[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk409)();
	return;
	goto T3236;
T3236:;
	base[3]= (V1809);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T3217;
T3217:;
	{register object V1814;
	V1814= base0[1];
	base[1]= (V1814);
	base[2]= VV[162];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3241;}
	{object V1815;
	object V1816;
	register object V1817;
	V1815= STREF(object,base0[1],0);
	V1816= make_cons(base0[0],Cnil);
	V1817= STREF(object,base0[1],4);
	if(((V1817))==Cnil){
	goto T3249;}
	if((CMPcdr((V1817)))!=Cnil){
	goto T3249;}
	base[1]= (V1816);
	base[2]= CMPcar((V1817));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V1815);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3249;
T3249:;
	base[1]= (V1815);
	base[2]= (V1816);
	{object V1818;
	V1818= (V1817);
	 vs_top=base+3;
	 while(V1818!=Cnil)
	 {vs_push((V1818)->c.c_car);V1818=(V1818)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T3241;
T3241:;
	base[1]= (V1814);
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3259;}
	base[1]= base0[0];
	vs_top=(vs_base=base+1)+1;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3259;
T3259:;
	base[1]= VV[0];
	base[2]= VV[1];
	base[3]= VV[163];
	base[4]= VV[3];
	base[5]= base0[1];
	base[6]= VV[4];
	base[7]= VV[189];
	base[8]= VV[6];
	base[9]= VV[190];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk255)();
	return;}
	goto T3130;
T3130:;
	base[1]= VV[184];
	base[2]= base0[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk408)();
	return;
	}
}
/*	local function CALL-NEXT-METHOD	*/

static void L89(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM115; VC115
	vs_check;
	{object V1819;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1819=(base[0]);
	vs_top=sup;
	if((base0[1])==Cnil){
	goto T3275;}
	if(((V1819))==Cnil){
	goto T3278;}
	{object V1820;
	object V1821;
	V1820= (V1819);
	{object V1822;
	V1822= CMPcar((V1820));
	V1820= CMPcdr((V1820));
	V1821= (V1822);}
	base[2]= base0[1];
	base[3]= VV[160];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3287;}
	base[2]= STREF(object,base0[1],0);
	base[3]= STREF(object,base0[1],4);
	base[4]= STREF(object,base0[1],8);
	base[5]= (V1821);
	vs_top=(vs_base=base+3)+3;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3287;
T3287:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T3296;}
	{object V1823;
	object V1824;
	if(type_of(V1821)==t_structure){
	goto T3302;}
	goto T3300;
	goto T3302;
T3302:;
	if(!(((V1821)->str.str_def)==(VV[170]))){
	goto T3300;}
	V1823= STREF(object,(V1821),4);
	goto T3298;
	goto T3300;
T3300:;{object V1826;
	V1826= (VV[16]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V1821);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V1827= vs_base[0];
	if(!((V1826)==(CMPcar(V1827)))){
	goto T3305;}}
	V1823= CMPcar(((V1821))->cc.cc_turbo[12]);
	goto T3298;
	goto T3305;
T3305:;
	V1823= Cnil;
	goto T3298;
T3298:;
	if(((V1823))==Cnil){
	goto T3312;}
	V1824= ((V1823))->v.v_self[fix(base0[1])];
	goto T3310;
	goto T3312;
T3312:;
	V1824= Cnil;
	goto T3310;
T3310:;
	if(!(((V1824))==(VV[17]))){
	goto T3315;}
	base[4]= (V1821);
	base[5]= base0[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk409)();
	return;
	goto T3315;
T3315:;
	base[4]= (V1824);
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T3296;
T3296:;
	base[2]= base0[1];
	base[3]= VV[162];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3320;}
	{object V1830;
	object V1831;
	object V1832;
	V1830= STREF(object,base0[1],0);
	V1831= make_cons((V1821),Cnil);
	V1832= STREF(object,base0[1],4);
	if(((V1832))==Cnil){
	goto T3328;}
	if((CMPcdr((V1832)))!=Cnil){
	goto T3328;}
	base[2]= (V1831);
	base[3]= CMPcar((V1832));
	vs_top=(vs_base=base+2)+2;
	{object _funobj = (V1830);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3328;
T3328:;
	base[2]= (V1830);
	base[3]= (V1831);
	{object V1833;
	V1833= (V1832);
	 vs_top=base+4;
	 while(V1833!=Cnil)
	 {vs_push((V1833)->c.c_car);V1833=(V1833)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T3320;
T3320:;
	base[2]= base0[1];
	vs_top=(vs_base=base+2)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3338;}
	base[2]= (V1821);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3338;
T3338:;
	base[2]= VV[0];
	base[3]= VV[1];
	base[4]= VV[163];
	base[5]= VV[3];
	base[6]= base0[1];
	base[7]= VV[4];
	base[8]= VV[171];
	base[9]= VV[6];
	base[10]= VV[172];
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk255)();
	return;}
	goto T3278;
T3278:;
	base[1]= base0[1];
	base[2]= VV[160];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3353;}
	base[1]= STREF(object,base0[1],0);
	base[2]= STREF(object,base0[1],4);
	base[3]= STREF(object,base0[1],8);
	base[4]= base0[0];
	vs_top=(vs_base=base+2)+3;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3353;
T3353:;
	if(!(type_of(base0[1])==t_fixnum)){
	goto T3362;}
	{object V1834;
	object V1835;
	if(type_of(base0[0])==t_structure){
	goto T3368;}
	goto T3366;
	goto T3368;
T3368:;
	if(!(((base0[0])->str.str_def)==(VV[173]))){
	goto T3366;}
	V1834= STREF(object,base0[0],4);
	goto T3364;
	goto T3366;
T3366:;{object V1837;
	V1837= (VV[16]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= base0[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk256)();
	vs_top=sup;
	V1838= vs_base[0];
	if(!((V1837)==(CMPcar(V1838)))){
	goto T3371;}}
	V1834= CMPcar((base0[0])->cc.cc_turbo[12]);
	goto T3364;
	goto T3371;
T3371:;
	V1834= Cnil;
	goto T3364;
T3364:;
	if(((V1834))==Cnil){
	goto T3378;}
	V1835= ((V1834))->v.v_self[fix(base0[1])];
	goto T3376;
	goto T3378;
T3378:;
	V1835= Cnil;
	goto T3376;
T3376:;
	if(!(((V1835))==(VV[17]))){
	goto T3381;}
	base[3]= base0[0];
	base[4]= base0[1];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk409)();
	return;
	goto T3381;
T3381:;
	base[3]= (V1835);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T3362;
T3362:;
	base[1]= base0[1];
	base[2]= VV[162];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk407)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3386;}
	{object V1841;
	object V1842;
	object V1843;
	V1841= STREF(object,base0[1],0);
	V1842= make_cons(base0[0],Cnil);
	V1843= STREF(object,base0[1],4);
	if(((V1843))==Cnil){
	goto T3394;}
	if((CMPcdr((V1843)))!=Cnil){
	goto T3394;}
	base[1]= (V1842);
	base[2]= CMPcar((V1843));
	vs_top=(vs_base=base+1)+2;
	{object _funobj = (V1841);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3394;
T3394:;
	base[1]= (V1841);
	base[2]= (V1842);
	{object V1844;
	V1844= (V1843);
	 vs_top=base+3;
	 while(V1844!=Cnil)
	 {vs_push((V1844)->c.c_car);V1844=(V1844)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T3386;
T3386:;
	base[1]= base0[1];
	vs_top=(vs_base=base+1)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3404;}
	base[1]= base0[0];
	vs_top=(vs_base=base+1)+1;
	{object _funobj = base0[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T3404;
T3404:;
	base[1]= VV[0];
	base[2]= VV[1];
	base[3]= VV[163];
	base[4]= VV[3];
	base[5]= base0[1];
	base[6]= VV[4];
	base[7]= VV[174];
	base[8]= VV[6];
	base[9]= VV[175];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk255)();
	return;
	goto T3275;
T3275:;
	base[1]= VV[169];
	base[2]= base0[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk408)();
	return;
	}
}
/*	local function WALK	*/

static void L82(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM116; VC116
	vs_check;
	{register object V1845;
	check_arg(1);
	V1845=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1845))!=Cnil){
	goto T3420;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3420;
T3420:;
	{object V1846;
	{object V1847;
	V1847= CMPcar((V1845));
	V1845= CMPcdr((V1845));
	V1846= (V1847);}
	if(!(((V1846))==(base0[0]))){
	goto T3428;}
	V1848= base0[1];
	goto T3426;
	goto T3428;
T3428:;
	base[1]= (V1846);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk372)(Lclptr372);
	vs_top=sup;
	V1848= vs_base[0];
	goto T3426;
T3426:;
	base[1]= (V1845);
	vs_top=(vs_base=base+1)+1;
	L82(base0);
	vs_top=sup;
	V1849= vs_base[0];
	base[1]= append(V1848,V1849);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC144(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM117; VC117
	vs_check;
	{object V1850;
	object V1851;
	check_arg(2);
	V1850=(base[0]);
	V1851=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	base[3]= (V1850);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk410)(Lclptr410);
	return;
	}
}
/*	local function COLLECT-GFS	*/

static void L75(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM118; VC118
	vs_check;
	{object V1852;
	check_arg(1);
	V1852=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V1853;
	register object V1854;
	base[3]= (V1852);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk411)(Lclptr411);
	vs_top=sup;
	V1853= vs_base[0];
	V1854= CMPcar((V1853));
	goto T3440;
T3440:;
	if(!(((V1853))==Cnil)){
	goto T3441;}
	goto T3435;
	goto T3441;
T3441:;
	{register object V1855;
	register object V1856;
	register object V1857;
	V1855= (V1854);
	V1856= base0[1];
	V1857= Ct;
	base[3]= (V1855);
	base[4]= (V1856);
	base[5]= (V1857);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	V1853= CMPcdr((V1853));
	V1854= CMPcar((V1853));
	goto T3440;}
	goto T3435;
T3435:;
	base[1]= (V1852);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk326)(Lclptr326);
	vs_top=sup;
	V1859= vs_base[0];
	{
	object V1858= V1859;
	if(V1858==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T3457;
T3457:;
	base[1]= (V1858->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L75(base0);
	vs_top=sup;
	if((V1858=MMcdr(V1858))==Cnil){
	base[1]= V1859;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T3457;}
	}
}
/*	local function RWALK	*/

static void L71(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM119; VC119
	vs_check;
	{object V1860;
	check_arg(1);
	V1860=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V1860))==Cnil){
	goto T3463;}
	base[1]= CMPcdr((V1860));
	vs_top=(vs_base=base+1)+1;
	L71(base0);
	vs_top=sup;
	{register object V1861;
	object V1862;
	base[3]= CMPcar((V1860));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk412)(Lclptr412);
	vs_top=sup;
	V1861= vs_base[0];
	V1862= CMPcar((V1861));
	goto T3471;
T3471:;
	if(!(((V1861))==Cnil)){
	goto T3472;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T3472;
T3472:;
	{register object V1863;
	base[3]= (V1862);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk314)(Lclptr314);
	vs_top=sup;
	V1863= vs_base[0];
	{register object x= (V1863),V1864= base0[0];
	while(V1864!=Cnil)
	if(eql(x,V1864->c.c_car)){
	goto T3480;
	}else V1864=V1864->c.c_cdr;
	goto T3476;}
	goto T3480;
T3480:;
	base0[1]= make_cons((V1863),base0[1]);
	base[3]= (V1863);
	base[4]= base0[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk145)();
	vs_top=sup;
	base0[0]= vs_base[0];}
	goto T3476;
T3476:;
	V1861= CMPcdr((V1861));
	V1862= CMPcar((V1861));
	goto T3471;}
	goto T3463;
T3463:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function FIX	*/

static void L59(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM120; VC120
	vs_check;
	{object V1865;
	object V1866;
	object V1867;
	check_arg(3);
	V1865=(base[0]);
	V1866=(base[1]);
	V1867=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1868;
	base[3]= (V1865);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk413)();
	vs_top=sup;
	V1868= vs_base[0];
	{object V1869= (V1867);
	if((V1869!= VV[146]))goto T3493;
	if(!((base0[0])==(VV[144]))){
	goto T3495;}
	base[3]= base0[1];
	base[4]= (V1868);
	base[5]= (V1866);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk414)(Lclptr414);
	return;
	goto T3495;
T3495:;
	base[3]= base0[1];
	base[4]= (V1868);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk415)(Lclptr415);
	return;
	goto T3493;
T3493:;
	if((V1869!= VV[147]))goto T3502;
	if(!((base0[0])==(VV[144]))){
	goto T3504;}
	base[3]= base0[1];
	base[4]= (V1868);
	base[5]= (V1866);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk416)(Lclptr416);
	return;
	goto T3504;
T3504:;
	base[3]= base0[1];
	base[4]= (V1868);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk417)(Lclptr417);
	return;
	goto T3502;
T3502:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC143(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM121; VC121
	vs_check;
	{object V1870;
	check_arg(1);
	V1870=(base[0]);
	vs_top=sup;
	base[1]=VV[418]->s.s_gfdef;
	base[2]= (base0[1]->c.c_car);
	base[3]= (V1870);
	{object V1871;
	V1871= (base0[0]->c.c_car);
	 vs_top=base+4;
	 while(V1871!=Cnil)
	 {vs_push((V1871)->c.c_car);V1871=(V1871)->c.c_cdr;}
	vs_base=base+2;}
	(void) (*Lnk418)(Lclptr418);
	return;
	}
}
/*	local function CLOSURE	*/

static void LC142(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM122; VC122
	vs_check;
	{object V1872;
	check_arg(1);
	V1872=(base[0]);
	vs_top=sup;
	base[1]= ((CMPcar((V1872)))==((base0[0]->c.c_car))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC141(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM123; VC123
	vs_check;
	{object V1873;
	check_arg(1);
	V1873=(base[0]);
	vs_top=sup;
	base[1]= (V1873);
	base[2]= VV[1];
	vs_top=(vs_base=base+1)+2;
	Lgetf();
	vs_top=sup;
	V1874= vs_base[0];
	base[1]= (((base0[0]->c.c_car))==(V1874)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function FIX-SUPER	*/

static void L46(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM124; VC124
	vs_check;
	{object V1875;
	check_arg(1);
	V1875=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V1875);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk364)(Lclptr364);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T3518;}
	base[1]= (V1875);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3518;
T3518:;
	if(((*(LnkLI419))((V1875)))!=Cnil){
	goto T3522;}
	base[1]= VV[101];
	base[2]= (V1875);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	goto T3522;
T3522:;{object V1876;
	V1876= (VFUN_NARGS=2,(*(LnkLI296))((V1875),Cnil));
	if(V1876==Cnil)goto T3526;
	base[1]= V1876;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T3526;
T3526:;}
	{object V1878;
	base[2]= VV[102];
	base[3]= VV[1];
	base[4]= (V1875);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk300)(Lclptr300);
	vs_top=sup;
	V1878= vs_base[0];
	base[2]= ({object _tmp=get(VV[296],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[296])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[296])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	base[3]= (V1878);
	base[4]= V1875;
	vs_top=(vs_base=base+3)+2;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC140(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM125; VC125
	vs_check;
	{object V1879;
	check_arg(1);
	V1879=(base[0]);
	vs_top=sup;
	{register object V1880;
	register object V1881;
	base[3]= (V1879);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk411)(Lclptr411);
	vs_top=sup;
	V1880= vs_base[0];
	V1881= CMPcar((V1880));
	goto T3539;
T3539:;
	if(!(((V1880))==Cnil)){
	goto T3540;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T3540;
T3540:;
	base[3]= (V1881);
	base[4]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T3544;}
	{register object V1882;
	register object V1883;
	register object V1884;
	V1882= (V1881);
	V1883= (base0[0]->c.c_car);
	V1884= Ct;
	base[3]= (V1882);
	base[4]= (V1883);
	base[5]= (V1884);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	(void)((
	(type_of((base0[1]->c.c_car)) == t_sfun ?(*(((base0[1]->c.c_car))->sfn.sfn_self)):
	(fcall.argd=1,type_of((base0[1]->c.c_car))==t_vfun) ?
	(*(((base0[1]->c.c_car))->sfn.sfn_self)):
	(fcall.fun=((base0[1]->c.c_car)),fcalln))((V1881))));
	goto T3544;
T3544:;
	V1880= CMPcdr((V1880));
	V1881= CMPcar((V1880));
	goto T3539;}
	}
}
/*	local function CLOSURE	*/

static void LC139(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM126; VC126
	vs_check;
	{object V1885;
	object V1886;
	check_arg(2);
	V1885=(base[0]);
	V1886=(base[1]);
	vs_top=sup;
	base[2]= (V1886);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local function CLOSURE	*/

static void LC138(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM127; VC127
	vs_check;
	{object V1887;
	object V1888;
	check_arg(2);
	V1887=(base[0]);
	V1888=(base[1]);
	vs_top=sup;
	base[2]= (*(LnkLI420))((V1887));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC137(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM128; VC128
	vs_check;
	{object V1889;
	check_arg(1);
	V1889=(base[0]);
	vs_top=sup;
	base[1]= (V1889);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk112)(Lclptr112);
	vs_top=sup;
	V1890= vs_base[0];
	(void)((
	(type_of((base0[0]->c.c_car)) == t_sfun ?(*(((base0[0]->c.c_car))->sfn.sfn_self)):
	(fcall.argd=1,type_of((base0[0]->c.c_car))==t_vfun) ?
	(*(((base0[0]->c.c_car))->sfn.sfn_self)):
	(fcall.fun=((base0[0]->c.c_car)),fcalln))(V1890)));
	base[1]= (V1889);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
static void LnkT112(ptr) object *ptr;{ call_or_link_closure(VV[112],(void **)(void *)&Lnk112,(void **)(void *)&Lclptr112);} /* CLASS-EQ-SPECIALIZER */
static object  LnkTLI420(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[420],(void **)(void *)&LnkLI420,1,first,ap);va_end(ap);return V1;} /* INTERN-EQL-SPECIALIZER */
static object  LnkTLI419(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[419],(void **)(void *)&LnkLI419,1,first,ap);va_end(ap);return V1;} /* LEGAL-CLASS-NAME-P */
static void LnkT418(ptr) object *ptr;{ call_or_link_closure(VV[418],(void **)(void *)&Lnk418,(void **)(void *)&Lclptr418);} /* UPDATE-DEPENDENT */
static void LnkT417(ptr) object *ptr;{ call_or_link_closure(VV[417],(void **)(void *)&Lnk417,(void **)(void *)&Lclptr417);} /* REMOVE-WRITER-METHOD */
static void LnkT416(ptr) object *ptr;{ call_or_link_closure(VV[416],(void **)(void *)&Lnk416,(void **)(void *)&Lclptr416);} /* ADD-WRITER-METHOD */
static void LnkT415(ptr) object *ptr;{ call_or_link_closure(VV[415],(void **)(void *)&Lnk415,(void **)(void *)&Lclptr415);} /* REMOVE-READER-METHOD */
static void LnkT414(ptr) object *ptr;{ call_or_link_closure(VV[414],(void **)(void *)&Lnk414,(void **)(void *)&Lclptr414);} /* ADD-READER-METHOD */
static void LnkT413(){ call_or_link(VV[413],(void **)(void *)&Lnk413);} /* ENSURE-GENERIC-FUNCTION */
static void LnkT412(ptr) object *ptr;{ call_or_link_closure(VV[412],(void **)(void *)&Lnk412,(void **)(void *)&Lclptr412);} /* CLASS-SLOTS */
static void LnkT411(ptr) object *ptr;{ call_or_link_closure(VV[411],(void **)(void *)&Lnk411,(void **)(void *)&Lclptr411);} /* SPECIALIZER-DIRECT-GENERIC-FUNCTIONS */
static void LnkT410(ptr) object *ptr;{ call_or_link_closure(VV[410],(void **)(void *)&Lnk410,(void **)(void *)&Lclptr410);} /* UPDATE-GF-DFUN */
static void LnkT409(){ call_or_link(VV[409],(void **)(void *)&Lnk409);} /* SLOT-UNBOUND-INTERNAL */
static void LnkT408(){ call_or_link(VV[408],(void **)(void *)&Lnk408);} /* CALL-NO-NEXT-METHOD */
static void LnkT407(){ call_or_link(VV[407],(void **)(void *)&Lnk407);} /* STRUCTURE-SUBTYPE-P */
static void LnkT406(){ call_or_link(VV[406],(void **)(void *)&Lnk406);} /* DELETE */
static object  LnkTLI405(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[405],(void **)(void *)&LnkLI405,3,first,ap);va_end(ap);return V1;} /* CHANGE-CLASS-INTERNAL */
static void LnkT404(ptr) object *ptr;{ call_or_link_closure(VV[404],(void **)(void *)&Lnk404,(void **)(void *)&Lclptr404);} /* UPDATE-INSTANCE-FOR-DIFFERENT-CLASS */
static void LnkT403(ptr) object *ptr;{ call_or_link_closure(VV[403],(void **)(void *)&Lnk403,(void **)(void *)&Lclptr403);} /* UPDATE-INSTANCE-FOR-REDEFINED-CLASS */
static object  LnkTLI402(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[402],(void **)(void *)&LnkLI402,2,first,ap);va_end(ap);return V1;} /* SWAP-WRAPPERS-AND-SLOTS */
static object  LnkTLI401(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[401],(void **)(void *)&LnkLI401,2,first,ap);va_end(ap);return V1;} /* SET-WRAPPER */
static object  LnkTLI400(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[400],(void **)(void *)&LnkLI400,3,first,ap);va_end(ap);return V1;} /* INVALIDATE-WRAPPER */
static object  LnkTLI399(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[399],(void **)(void *)&LnkLI399,1,first,ap);va_end(ap);return V1;} /* INFORM-TYPE-SYSTEM-ABOUT-STD-CLASS */
static object  LnkTLI398(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[398],(void **)(void *)&LnkLI398,2,first,ap);va_end(ap);return V1;} /* MAKE-STD-BOUNDP-METHOD-FUNCTION */
static object  LnkTLI397(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[397],(void **)(void *)&LnkLI397,2,first,ap);va_end(ap);return V1;} /* MAKE-STD-WRITER-METHOD-FUNCTION */
static object  LnkTLI396(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[396],(void **)(void *)&LnkLI396,2,first,ap);va_end(ap);return V1;} /* MAKE-STD-READER-METHOD-FUNCTION */
static object  LnkTLI394(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[394],(void **)(void *)&LnkLI394,first,ap);va_end(ap);return V1;} /* GET-METHOD */
static void LnkT393(ptr) object *ptr;{ call_or_link_closure(VV[393],(void **)(void *)&Lnk393,(void **)(void *)&Lclptr393);} /* MAKE-BOUNDP-METHOD-FUNCTION */
static void LnkT392(ptr) object *ptr;{ call_or_link_closure(VV[392],(void **)(void *)&Lnk392,(void **)(void *)&Lclptr392);} /* MAKE-WRITER-METHOD-FUNCTION */
static void LnkT391(ptr) object *ptr;{ call_or_link_closure(VV[391],(void **)(void *)&Lnk391,(void **)(void *)&Lclptr391);} /* MAKE-READER-METHOD-FUNCTION */
static void LnkT388(ptr) object *ptr;{ call_or_link_closure(VV[388],(void **)(void *)&Lnk388,(void **)(void *)&Lclptr388);} /* SLOT-DEFINITION-INTERNAL-WRITER-FUNCTION */
static void LnkT387(ptr) object *ptr;{ call_or_link_closure(VV[387],(void **)(void *)&Lnk387,(void **)(void *)&Lclptr387);} /* SLOT-DEFINITION-INTERNAL-READER-FUNCTION */
static void LnkT386(){ call_or_link(VV[386],(void **)(void *)&Lnk386);} /* *SUBTYPEP */
static void LnkT385(ptr) object *ptr;{ call_or_link_closure(VV[385],(void **)(void *)&Lnk385,(void **)(void *)&Lclptr385);} /* SLOT-DEFINITION-TYPE */
static void LnkT384(ptr) object *ptr;{ call_or_link_closure(VV[384],(void **)(void *)&Lnk384,(void **)(void *)&Lclptr384);} /* SLOT-DEFINITION-INITARGS */
static void LnkT383(ptr) object *ptr;{ call_or_link_closure(VV[383],(void **)(void *)&Lnk383,(void **)(void *)&Lclptr383);} /* SLOT-DEFINITION-INITFORM */
static void LnkT382(ptr) object *ptr;{ call_or_link_closure(VV[382],(void **)(void *)&Lnk382,(void **)(void *)&Lclptr382);} /* EFFECTIVE-SLOT-DEFINITION-CLASS */
static void LnkT381(ptr) object *ptr;{ call_or_link_closure(VV[381],(void **)(void *)&Lnk381,(void **)(void *)&Lclptr381);} /* COMPUTE-EFFECTIVE-SLOT-DEFINITION-INITARGS */
static void LnkT380(ptr) object *ptr;{ call_or_link_closure(VV[380],(void **)(void *)&Lnk380,(void **)(void *)&Lclptr380);} /* PCL CLASS-PRECEDENCE-LIST slot READER */
static void LnkT379(ptr) object *ptr;{ call_or_link_closure(VV[379],(void **)(void *)&Lnk379,(void **)(void *)&Lclptr379);} /* INITIALIZE-INTERNAL-SLOT-FUNCTIONS */
static void LnkT378(){ call_or_link(VV[378],(void **)(void *)&Lnk378);} /* POSITION */
static object  LnkTLI377(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[377],(void **)(void *)&LnkLI377,2,first,ap);va_end(ap);return V1;} /* COMPUTE-LAYOUT */
static void LnkT376(ptr) object *ptr;{ call_or_link_closure(VV[376],(void **)(void *)&Lnk376,(void **)(void *)&Lclptr376);} /* COMPUTE-EFFECTIVE-SLOT-DEFINITION */
static void LnkT375(ptr) object *ptr;{ call_or_link_closure(VV[375],(void **)(void *)&Lnk375,(void **)(void *)&Lclptr375);} /* DIRECT-SLOT-DEFINITION-CLASS */
static void LnkT374(){ call_or_link(VV[374],(void **)(void *)&Lnk374);} /* DELETE-DUPLICATES */
static void LnkT372(ptr) object *ptr;{ call_or_link_closure(VV[372],(void **)(void *)&Lnk372,(void **)(void *)&Lclptr372);} /* CLASS-DIRECT-DEFAULT-INITARGS */
static void LnkT371(){ call_or_link(VV[371],(void **)(void *)&Lnk371);} /* SLOT-BOUNDP-NORMAL */
static void LnkT66(ptr) object *ptr;{ call_or_link_closure(VV[66],(void **)(void *)&Lnk66,(void **)(void *)&Lclptr66);} /* CLASS-SLOT-CELLS */
static void LnkT370(ptr) object *ptr;{ call_or_link_closure(VV[370],(void **)(void *)&Lnk370,(void **)(void *)&Lclptr370);} /* MAKE-INSTANCES-OBSOLETE */
static void LnkT369(ptr) object *ptr;{ call_or_link_closure(VV[369],(void **)(void *)&Lnk369,(void **)(void *)&Lclptr369);} /* CLASS-WRAPPER */
static object  LnkTLI368(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[368],(void **)(void *)&LnkLI368,1,first,ap);va_end(ap);return V1;} /* COMPUTE-CLASS-SLOTS */
static void LnkT367(){ call_or_link(VV[367],(void **)(void *)&Lnk367);} /* SORT */
static void LnkT364(ptr) object *ptr;{ call_or_link_closure(VV[364],(void **)(void *)&Lnk364,(void **)(void *)&Lclptr364);} /* CLASSP */
static void LnkT363(ptr) object *ptr;{ call_or_link_closure(VV[363],(void **)(void *)&Lnk363,(void **)(void *)&Lclptr363);} /* CLASS-CAN-PRECEDE-LIST */
static void LnkT362(){ call_or_link(VV[362],(void **)(void *)&Lnk362);} /* SET-SLOT-VALUE-NORMAL */
static void LnkT361(){ call_or_link(VV[361],(void **)(void *)&Lnk361);} /* SLOT-VALUE-NORMAL */
static object  LnkTLI360(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[360],(void **)(void *)&LnkLI360,1,first,ap);va_end(ap);return V1;} /* UPDATE-CLASS-CAN-PRECEDE-P */
static object  LnkTLI359(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[359],(void **)(void *)&LnkLI359,2,first,ap);va_end(ap);return V1;} /* NO-SLOT */
static object  LnkTLI358(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[358],(void **)(void *)&LnkLI358,1,first,ap);va_end(ap);return V1;} /* %FBOUNDP */
static object  LnkTLI357(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[357],(void **)(void *)&LnkLI357,1,first,ap);va_end(ap);return V1;} /* FORCE-CACHE-FLUSHES */
static void LnkT149(ptr) object *ptr;{ call_or_link_closure(VV[149],(void **)(void *)&Lnk149,(void **)(void *)&Lclptr149);} /* CLASS-PRECEDENCE-LIST */
static void LnkT356(){ call_or_link(VV[356],(void **)(void *)&Lnk356);} /* UPDATE-MAKE-INSTANCE-FUNCTION-TABLE */
static void LnkT355(ptr) object *ptr;{ call_or_link_closure(VV[355],(void **)(void *)&Lnk355,(void **)(void *)&Lclptr355);} /* COMPUTE-DEFAULT-INITARGS */
static object  LnkTLI354(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[354],(void **)(void *)&LnkLI354,2,first,ap);va_end(ap);return V1;} /* UPDATE-INITS */
static object  LnkTLI353(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[353],(void **)(void *)&LnkLI353,1,first,ap);va_end(ap);return V1;} /* UPDATE-GFS-OF-CLASS */
static object  LnkTLI352(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[352],(void **)(void *)&LnkLI352,2,first,ap);va_end(ap);return V1;} /* UPDATE-SLOTS */
static object  LnkTLI351(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[351],(void **)(void *)&LnkLI351,2,first,ap);va_end(ap);return V1;} /* UPDATE-CPL */
static object  LnkTLI349(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[349],(void **)(void *)&LnkLI349,1,first,ap);va_end(ap);return V1;} /* CLASS-HAS-A-FORWARD-REFERENCED-SUPERCLASS-P */
static void LnkT350(ptr) object *ptr;{ call_or_link_closure(VV[350],(void **)(void *)&Lnk350,(void **)(void *)&Lclptr350);} /* CLASS-FINALIZED-P */
static void LnkT348(ptr) object *ptr;{ call_or_link_closure(VV[348],(void **)(void *)&Lnk348,(void **)(void *)&Lclptr348);} /* REMOVE-DIRECT-SUBCLASS */
static void LnkT347(){ call_or_link(VV[347],(void **)(void *)&Lnk347);} /* SET-DIFFERENCE */
static void LnkT346(ptr) object *ptr;{ call_or_link_closure(VV[346],(void **)(void *)&Lnk346,(void **)(void *)&Lclptr346);} /* ADD-DIRECT-SUBCLASS */
static void LnkT345(ptr) object *ptr;{ call_or_link_closure(VV[345],(void **)(void *)&Lnk345,(void **)(void *)&Lclptr345);} /* CLASS-DIRECT-SUBCLASSES */
static void LnkT344(ptr) object *ptr;{ call_or_link_closure(VV[344],(void **)(void *)&Lnk344,(void **)(void *)&Lclptr344);} /* SLOT-DEFINITION-WRITERS */
static void LnkT343(ptr) object *ptr;{ call_or_link_closure(VV[343],(void **)(void *)&Lnk343,(void **)(void *)&Lclptr343);} /* SLOT-DEFINITION-READERS */
static object  LnkTLI342(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[342],(void **)(void *)&LnkLI342,3,first,ap);va_end(ap);return V1;} /* FIX-SLOT-ACCESSORS */
static object  LnkTLI341(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[341],(void **)(void *)&LnkLI341,1,first,ap);va_end(ap);return V1;} /* UPDATE-PV-TABLE-CACHE-INFO */
static void LnkT154(ptr) object *ptr;{ call_or_link_closure(VV[154],(void **)(void *)&Lnk154,(void **)(void *)&Lclptr154);} /* PCL WRAPPER slot WRITER */
static object  LnkTLI340(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[340],(void **)(void *)&LnkLI340,first,ap);va_end(ap);return V1;} /* MAKE-WRAPPER */
static void LnkT152(ptr) object *ptr;{ call_or_link_closure(VV[152],(void **)(void *)&Lnk152,(void **)(void *)&Lclptr152);} /* PCL SLOTS slot WRITER */
static void LnkT339(ptr) object *ptr;{ call_or_link_closure(VV[339],(void **)(void *)&Lnk339,(void **)(void *)&Lclptr339);} /* COMPUTE-SLOTS */
static void LnkT148(ptr) object *ptr;{ call_or_link_closure(VV[148],(void **)(void *)&Lnk148,(void **)(void *)&Lclptr148);} /* PCL CLASS-PRECEDENCE-LIST slot WRITER */
static void LnkT338(ptr) object *ptr;{ call_or_link_closure(VV[338],(void **)(void *)&Lnk338,(void **)(void *)&Lclptr338);} /* COMPUTE-CLASS-PRECEDENCE-LIST */
static void LnkT337(ptr) object *ptr;{ call_or_link_closure(VV[337],(void **)(void *)&Lnk337,(void **)(void *)&Lclptr337);} /* PCL DEFSTRUCT-CONSTRUCTOR slot WRITER */
static void LnkT336(ptr) object *ptr;{ call_or_link_closure(VV[336],(void **)(void *)&Lnk336,(void **)(void *)&Lclptr336);} /* PCL DEFSTRUCT-FORM slot WRITER */
static void LnkT335(ptr) object *ptr;{ call_or_link_closure(VV[335],(void **)(void *)&Lnk335,(void **)(void *)&Lclptr335);} /* PCL INTERNAL-WRITER-FUNCTION slot WRITER */
static void LnkT334(ptr) object *ptr;{ call_or_link_closure(VV[334],(void **)(void *)&Lnk334,(void **)(void *)&Lclptr334);} /* PCL INTERNAL-READER-FUNCTION slot WRITER */
static object  LnkTLI333(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[333],(void **)(void *)&LnkLI333,1,first,ap);va_end(ap);return V1;} /* GBOUNDP */
static void LnkT332(ptr) object *ptr;{ call_or_link_closure(VV[332],(void **)(void *)&Lnk332,(void **)(void *)&Lclptr332);} /* SLOT-DEFINITION-DEFSTRUCT-ACCESSOR-SYMBOL */
static object  LnkTLI331(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[331],(void **)(void *)&LnkLI331,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-TYPE-P */
static void LnkT330(ptr) object *ptr;{ call_or_link_closure(VV[330],(void **)(void *)&Lnk330,(void **)(void *)&Lclptr330);} /* PCL FROM-DEFCLASS-P slot READER */
static void LnkT329(ptr) object *ptr;{ call_or_link_closure(VV[329],(void **)(void *)&Lnk329,(void **)(void *)&Lclptr329);} /* MAP-DEPENDENTS */
static void LnkT328(ptr) object *ptr;{ call_or_link_closure(VV[328],(void **)(void *)&Lnk328,(void **)(void *)&Lclptr328);} /* CLASS-DIRECT-SLOTS */
static object  LnkTLI327(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[327],(void **)(void *)&LnkLI327,2,first,ap);va_end(ap);return V1;} /* REMOVE-SLOT-ACCESSORS */
static void LnkT326(ptr) object *ptr;{ call_or_link_closure(VV[326],(void **)(void *)&Lnk326,(void **)(void *)&Lclptr326);} /* CLASS-DIRECT-SUPERCLASSES */
static object  LnkTLI325(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[325],(void **)(void *)&LnkLI325,2,first,ap);va_end(ap);return V1;} /* REMOVE-DIRECT-SUBCLASSES */
static void LnkT324(ptr) object *ptr;{ call_or_link_closure(VV[324],(void **)(void *)&Lnk324,(void **)(void *)&Lclptr324);} /* PCL CLASS-EQ-SPECIALIZER slot WRITER */
static void LnkT323(){ call_or_link(VV[323],(void **)(void *)&Lnk323);} /* MAKE-INSTANCE CLASS-EQ-SPECIALIZER (:CLASS) NIL */
static object  LnkTLI322(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[322],(void **)(void *)&LnkLI322,2,first,ap);va_end(ap);return V1;} /* ADD-SLOT-ACCESSORS */
static object  LnkTLI321(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[321],(void **)(void *)&LnkLI321,2,first,ap);va_end(ap);return V1;} /* MAKE-CLASS-PREDICATE */
static object  LnkTLI320(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[320],(void **)(void *)&LnkLI320,2,first,ap);va_end(ap);return V1;} /* UPDATE-CLASS */
static object  LnkTLI319(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[319],(void **)(void *)&LnkLI319,2,first,ap);va_end(ap);return V1;} /* ADD-DIRECT-SUBCLASSES */
static void LnkT318(){ call_or_link(VV[318],(void **)(void *)&Lnk318);} /* MAKE-CLASS-PREDICATE-NAME */
static void LnkT317(ptr) object *ptr;{ call_or_link_closure(VV[317],(void **)(void *)&Lnk317,(void **)(void *)&Lclptr317);} /* CLASS-NAME */
static void LnkT316(ptr) object *ptr;{ call_or_link_closure(VV[316],(void **)(void *)&Lnk316,(void **)(void *)&Lclptr316);} /* PCL PREDICATE-NAME slot READER */
static void LnkT315(ptr) object *ptr;{ call_or_link_closure(VV[315],(void **)(void *)&Lnk315,(void **)(void *)&Lclptr315);} /* PCL PREDICATE-NAME slot WRITER */
static void LnkT314(ptr) object *ptr;{ call_or_link_closure(VV[314],(void **)(void *)&Lnk314,(void **)(void *)&Lclptr314);} /* SLOT-DEFINITION-NAME */
static void LnkT313(ptr) object *ptr;{ call_or_link_closure(VV[313],(void **)(void *)&Lnk313,(void **)(void *)&Lclptr313);} /* SLOT-DEFINITION-INITFUNCTION */
static void LnkT312(ptr) object *ptr;{ call_or_link_closure(VV[312],(void **)(void *)&Lnk312,(void **)(void *)&Lclptr312);} /* SLOT-DEFINITION-ALLOCATION */
static void LnkT311(ptr) object *ptr;{ call_or_link_closure(VV[311],(void **)(void *)&Lnk311,(void **)(void *)&Lclptr311);} /* PCL DIRECT-SLOTS slot READER */
static void LnkT310(ptr) object *ptr;{ call_or_link_closure(VV[310],(void **)(void *)&Lnk310,(void **)(void *)&Lclptr310);} /* PCL DIRECT-SLOTS slot WRITER */
static void LnkT309(){ call_or_link(VV[309],(void **)(void *)&Lnk309);} /* MAKE-DIRECT-SLOTD */
static void LnkT308(ptr) object *ptr;{ call_or_link_closure(VV[308],(void **)(void *)&Lnk308,(void **)(void *)&Lclptr308);} /* PCL DIRECT-SUPERCLASSES slot READER */
static void LnkT307(ptr) object *ptr;{ call_or_link_closure(VV[307],(void **)(void *)&Lnk307,(void **)(void *)&Lclptr307);} /* PCL DIRECT-SUPERCLASSES slot WRITER */
static void LnkT107(ptr) object *ptr;{ call_or_link_closure(VV[107],(void **)(void *)&Lnk107,(void **)(void *)&Lclptr107);} /* VALIDATE-SUPERCLASS */
static void LnkT306(){ call_or_link(VV[306],(void **)(void *)&Lnk306);} /* SPECIFIC-ERROR */
static void LnkT305(){ call_or_link(VV[305],(void **)(void *)&Lnk305);} /* SOME */
static void LnkT304(ptr) object *ptr;{ call_or_link_closure(VV[304],(void **)(void *)&Lnk304,(void **)(void *)&Lclptr304);} /* FORWARD-REFERENCED-CLASS-P */
static void LnkT303(ptr) object *ptr;{ call_or_link_closure(VV[303],(void **)(void *)&Lnk303,(void **)(void *)&Lclptr303);} /* REINITIALIZE-INSTANCE */
static void LnkT302(ptr) object *ptr;{ call_or_link_closure(VV[302],(void **)(void *)&Lnk302,(void **)(void *)&Lclptr302);} /* CHANGE-CLASS */
static object  LnkTLI301(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[301],(void **)(void *)&LnkLI301,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static void LnkT300(ptr) object *ptr;{ call_or_link_closure(VV[300],(void **)(void *)&Lnk300,(void **)(void *)&Lclptr300);} /* MAKE-INSTANCE */
static void LnkT299(ptr) object *ptr;{ call_or_link_closure(VV[299],(void **)(void *)&Lnk299,(void **)(void *)&Lclptr299);} /* INFORM-TYPE-SYSTEM-ABOUT-CLASS */
static void LnkT298(ptr) object *ptr;{ call_or_link_closure(VV[298],(void **)(void *)&Lnk298,(void **)(void *)&Lclptr298);} /* CLASS-PROTOTYPE */
static void LnkT297(){ call_or_link(VV[297],(void **)(void *)&Lnk297);} /* ENSURE-CLASS-VALUES */
static void LnkT295(ptr) object *ptr;{ call_or_link_closure(VV[295],(void **)(void *)&Lnk295,(void **)(void *)&Lclptr295);} /* ENSURE-CLASS-USING-CLASS */
static object  LnkTLI296(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[296],(void **)(void *)&LnkLI296,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT294(){ call_or_link(VV[294],(void **)(void *)&Lnk294);} /* ENSURE-CLASS */
static void LnkT293(){ call_or_link(VV[293],(void **)(void *)&Lnk293);} /* LOAD-TRUENAME */
static object  LnkTLI292(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[292],(void **)(void *)&LnkLI292,1,first,ap);va_end(ap);return V1;} /* DO-STANDARD-DEFSETFS-FOR-DEFCLASS */
static void LnkT291(ptr) object *ptr;{ call_or_link_closure(VV[291],(void **)(void *)&Lnk291,(void **)(void *)&Lclptr291);} /* LISP TYPE slot WRITER */
static void LnkT290(ptr) object *ptr;{ call_or_link_closure(VV[290],(void **)(void *)&Lnk290,(void **)(void *)&Lclptr290);} /* SPECIALIZER-CLASS */
static object  LnkTLI289(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[289],(void **)(void *)&LnkLI289,1,first,ap);va_end(ap);return V1;} /* MAP-SPECIALIZERS */
static void LnkT288(){ call_or_link(VV[288],(void **)(void *)&Lnk288);} /* MAP-ALL-CLASSES */
static void LnkT287(ptr) object *ptr;{ call_or_link_closure(VV[287],(void **)(void *)&Lnk287,(void **)(void *)&Lclptr287);} /* SPECIALIZER-METHOD-TABLE */
static void LnkT286(ptr) object *ptr;{ call_or_link_closure(VV[286],(void **)(void *)&Lnk286,(void **)(void *)&Lclptr286);} /* SPECIALIZER-OBJECT */
static void LnkT285(ptr) object *ptr;{ call_or_link_closure(VV[285],(void **)(void *)&Lnk285,(void **)(void *)&Lclptr285);} /* METHOD-GENERIC-FUNCTION */
static void LnkT284(ptr) object *ptr;{ call_or_link_closure(VV[284],(void **)(void *)&Lnk284,(void **)(void *)&Lclptr284);} /* PCL DIRECT-METHODS slot READER */
static void LnkT145(){ call_or_link(VV[145],(void **)(void *)&Lnk145);} /* REMOVE */
static void LnkT283(ptr) object *ptr;{ call_or_link_closure(VV[283],(void **)(void *)&Lnk283,(void **)(void *)&Lclptr283);} /* PCL DIRECT-SUBCLASSES slot WRITER */
static void LnkT282(ptr) object *ptr;{ call_or_link_closure(VV[282],(void **)(void *)&Lnk282,(void **)(void *)&Lclptr282);} /* PCL DIRECT-SUBCLASSES slot READER */
static object  LnkTLI281(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[281],(void **)(void *)&LnkLI281,first,ap);va_end(ap);return V1;} /* ALLOCATE-STANDARD-INSTANCE */
static void LnkT280(ptr) object *ptr;{ call_or_link_closure(VV[280],(void **)(void *)&Lnk280,(void **)(void *)&Lclptr280);} /* PCL DEFSTRUCT-CONSTRUCTOR slot READER */
static void LnkT279(ptr) object *ptr;{ call_or_link_closure(VV[279],(void **)(void *)&Lnk279,(void **)(void *)&Lclptr279);} /* PCL PROTOTYPE slot WRITER */
static void LnkT278(ptr) object *ptr;{ call_or_link_closure(VV[278],(void **)(void *)&Lnk278,(void **)(void *)&Lclptr278);} /* ALLOCATE-INSTANCE */
static void LnkT277(ptr) object *ptr;{ call_or_link_closure(VV[277],(void **)(void *)&Lnk277,(void **)(void *)&Lclptr277);} /* PCL PROTOTYPE slot READER */
static void LnkT276(ptr) object *ptr;{ call_or_link_closure(VV[276],(void **)(void *)&Lnk276,(void **)(void *)&Lclptr276);} /* PCL WRAPPER slot READER */
static void LnkT275(ptr) object *ptr;{ call_or_link_closure(VV[275],(void **)(void *)&Lnk275,(void **)(void *)&Lclptr275);} /* PCL DOCUMENTATION slot WRITER */
static void LnkT274(ptr) object *ptr;{ call_or_link_closure(VV[274],(void **)(void *)&Lnk274,(void **)(void *)&Lclptr274);} /* PCL DOCUMENTATION slot READER */
static object  LnkTLI272(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[272],(void **)(void *)&LnkLI272,2,first,ap);va_end(ap);return V1;} /* PLIST-VALUE */
static void LnkT273(){ call_or_link(VV[273],(void **)(void *)&Lnk273);} /* DOCUMENTATION */
static void LnkT271(){ call_or_link(VV[271],(void **)(void *)&Lnk271);} /* GET-KEY-ARG-TAIL */
static void LnkT269(){ call_or_link(VV[269],(void **)(void *)&Lnk269);} /* TURBO-CLOSURE */
static void LnkT268(){ call_or_link(VV[268],(void **)(void *)&Lnk268);} /* GET-OPTIMIZED-STD-ACCESSOR-METHOD-FUNCTION */
static void LnkT267(){ call_or_link(VV[267],(void **)(void *)&Lnk267);} /* GET-ACCESSOR-METHOD-FUNCTION */
static void LnkT266(ptr) object *ptr;{ call_or_link_closure(VV[266],(void **)(void *)&Lnk266,(void **)(void *)&Lclptr266);} /* SLOT-ACCESSOR-STD-P */
static object  LnkTLI265(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[265],(void **)(void *)&LnkLI265,2,first,ap);va_end(ap);return V1;} /* FIND-SLOT-DEFINITION */
static object  LnkTLI264(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[264],(void **)(void *)&LnkLI264,first,ap);va_end(ap);return V1;} /* INITIALIZE-INTERNAL-SLOT-GFS */
static void LnkT263(ptr) object *ptr;{ call_or_link_closure(VV[263],(void **)(void *)&Lnk263,(void **)(void *)&Lclptr263);} /* COMPUTE-SLOT-ACCESSOR-INFO */
static object  LnkTLI262(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[262],(void **)(void *)&LnkLI262,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static void LnkT261(ptr) object *ptr;{ call_or_link_closure(VV[261],(void **)(void *)&Lnk261,(void **)(void *)&Lclptr261);} /* LISP CLASS slot READER */
static void LnkT260(ptr) object *ptr;{ call_or_link_closure(VV[260],(void **)(void *)&Lnk260,(void **)(void *)&Lclptr260);} /* PCL NAME slot READER */
static void LnkT259(ptr) object *ptr;{ call_or_link_closure(VV[259],(void **)(void *)&Lnk259,(void **)(void *)&Lclptr259);} /* PCL ACCESSOR-FLAGS slot WRITER */
static void LnkT258(ptr) object *ptr;{ call_or_link_closure(VV[258],(void **)(void *)&Lnk258,(void **)(void *)&Lclptr258);} /* PCL ACCESSOR-FLAGS slot READER */
static object  LnkTLI257(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[257],(void **)(void *)&LnkLI257,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT256(){ call_or_link(VV[256],(void **)(void *)&Lnk256);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT255(){ call_or_link(VV[255],(void **)(void *)&Lnk255);} /* ERROR */
static void LnkT254(ptr) object *ptr;{ call_or_link_closure(VV[254],(void **)(void *)&Lnk254,(void **)(void *)&Lclptr254);} /* SLOT-DEFINITION-BOUNDP-FUNCTION */
static void LnkT252(ptr) object *ptr;{ call_or_link_closure(VV[252],(void **)(void *)&Lnk252,(void **)(void *)&Lclptr252);} /* SLOT-DEFINITION-WRITER-FUNCTION */
static void LnkT250(ptr) object *ptr;{ call_or_link_closure(VV[250],(void **)(void *)&Lnk250,(void **)(void *)&Lclptr250);} /* SLOT-DEFINITION-READER-FUNCTION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

