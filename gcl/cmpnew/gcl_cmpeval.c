
#include "cmpinclude.h"
#include "gcl_cmpeval.h"
void init_gcl_cmpeval(){do_init(VV);}
/*	local entry for function C1EXPR*	*/

static object LI1(V3,V4)

register object V3;object V4;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	V3= (*(LnkLI123))((V3));
	(void)((*(LnkLI124))((V4),CMPcadr((V3))));
	{object V5 = (V3);
	VMR1(V5)}
	return Cnil;
}
/*	local entry for function C1EXPR	*/

static object LI2(V7)

VOL object V7;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	frs_push(FRS_CATCH,VV[0]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	V7= vs_base[0];
	goto T5;}
	else{
	if(!(type_of((V7))==t_symbol)){
	goto T8;}
	if(!(((V7))==(Cnil))){
	goto T11;}
	V8= (*(LnkLI125))();
	frs_pop();
	V7= V8;
	goto T5;
	goto T11;
T11:;
	if(!(((V7))==(Ct))){
	goto T14;}
	V9= (*(LnkLI126))();
	frs_pop();
	V7= V9;
	goto T5;
	goto T14;
T14:;
	if(!((type_of((V7))==t_symbol&&((V7))->s.s_hpack==keyword_package))){
	goto T17;}
	V10= (*(LnkLI128))((V7));
	V11= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],/* INLINE-ARGS */V10));
	V12= list(3,VV[1],/* INLINE-ARGS */V11,list(2,VV[3],(*(LnkLI129))((V7))));
	frs_pop();
	V7= V12;
	goto T5;
	goto T17;
T17:;
	base[0]= (V7);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T20;}
	{object V13;
	base[0]= (V7);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_value();
	vs_top=sup;
	V13= vs_base[0];{object V14;
	V14= (*(LnkLI130))((V13),Cnil);
	if(V14==Cnil)goto T25;
	frs_pop();
	V7= V14;
	goto T5;
	goto T25;
T25:;}
	V15= (*(LnkLI128))((V13));
	V16= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],/* INLINE-ARGS */V15));
	V17= list(3,VV[1],/* INLINE-ARGS */V16,list(2,VV[3],(*(LnkLI131))((V7))));
	frs_pop();
	V7= V17;
	goto T5;}
	goto T20;
T20:;
	V18= (*(LnkLI132))((V7));
	frs_pop();
	V7= V18;
	goto T5;
	goto T8;
T8:;
	if(!(type_of((V7))==t_cons)){
	goto T28;}
	{register object V19;
	V19= CMPcar((V7));
	if(!(type_of((V19))==t_symbol)){
	goto T32;}
	base[0]= (V19);
	base[1]= CMPcdr((V7));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk133)();
	vs_top=sup;
	frs_pop();
	V7= vs_base[0];
	goto T5;
	goto T32;
T32:;
	if(!(type_of((V19))==t_cons)){
	goto T37;}
	if(!((CMPcar((V19)))==(VV[4]))){
	goto T37;}
	V20= (*(LnkLI134))(CMPcdr((V19)),CMPcdr((V7)));
	frs_pop();
	V7= V20;
	goto T5;
	goto T37;
T37:;
	if(!(type_of((V19))==t_cons)){
	goto T42;}
	if(!((CMPcar((V19)))==(VV[5]))){
	goto T42;}
	V21= (VFUN_NARGS=1,(*(LnkLI135))(VV[6]));
	frs_pop();
	V7= V21;
	goto T5;
	goto T42;
T42:;
	V22= (VFUN_NARGS=2,(*(LnkLI135))(VV[7],(V19)));
	frs_pop();
	V7= V22;
	goto T5;}
	goto T28;
T28:;
	V23= (*(LnkLI130))((V7),Ct);
	frs_pop();
	V7= V23;}
	goto T5;
T5:;
	if(!(((V7))==(VV[8]))){
	goto T47;}
	{object V24 = (*(LnkLI125))();
	VMR2(V24)}
	goto T47;
T47:;
	{object V25 = (V7);
	VMR2(V25)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1SHARP-COMMA	*/

static object LI3(V27)

object V27;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	V28= make_cons(VV[5],(V27));
	{object V29 = (*(LnkLI130))(/* INLINE-ARGS */V28,Ct);
	VMR3(V29)}
	return Cnil;
}
/*	local entry for function C1DEFINE-STRUCTURE	*/

static object LI4(V31)

object V31;
{	 VMB4 VMS4 VMV4
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[9],Cnil);
	base[1]= make_cons(VV[10],(V31));
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	V32= listA(3,VV[5],VV[10],(V31));
	(void)((*(LnkLI130))(/* INLINE-ARGS */V32,Ct));
	(void)((*(LnkLI136))());
	{object V33 = Cnil;
	bds_unwind1;
	VMR4(V33)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1NIL	*/

static object LI5()

{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V34 = (VV[11]->s.s_dbind);
	VMR5(V34)}
	return Cnil;
}
/*	local entry for function C1T	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{object V35 = (VV[12]->s.s_dbind);
	VMR6(V35)}
	return Cnil;
}
/*	local entry for function FLAGS-POS	*/

static object LI7(V37)

register object V37;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register long V38;
	V38= 0;
	{register object V39;
	register object V40;
	V39= VV[13];
	V40= CMPcar((V39));
	goto T58;
T58:;
	if(!(((V39))==Cnil)){
	goto T59;}
	goto T54;
	goto T59;
T59:;
	{register object x= (V37),V41= (V40);
	while(V41!=Cnil)
	if(x==(V41->c.c_car)){
	goto T65;
	}else V41=V41->c.c_cdr;
	goto T63;}
	goto T65;
T65:;
	{object V42 = CMPmake_fixnum(V38);
	VMR7(V42)}
	goto T63;
T63:;
	V38= (long)(V38)+(1);
	V39= CMPcdr((V39));
	V40= CMPcar((V39));
	goto T58;}
	goto T54;
T54:;
	base[0]= VV[14];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V43 = vs_base[0];
	VMR7(V43)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for FLAG-P	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	vs_top=sup;
	{object V44=base[0]->c.c_cdr;
	base[2]= (V44->c.c_car);
	V44=V44->c.c_cdr;
	base[3]= (V44->c.c_car);}
	V45= (*(LnkLI137))(base[3]);
	base[4]= list(3,VV[15],/* INLINE-ARGS */V45,base[2]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function FIX-OPT	*/

static object LI9(V47)

register object V47;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{register object V48;
	V48= CMPcddr((V47));
	if(type_of(CMPcar((V48)))==t_fixnum){
	goto T75;}
	if(((VV[16]->s.s_dbind))==Cnil){
	goto T78;}
	(void)((VFUN_NARGS=2,(*(LnkLI138))(VV[17],(V47))));
	goto T78;
T78:;
	{object V50;
	if((CMPcar((V48)))==Cnil){
	goto T85;}
	base[1]= small_fixnum(2);
	goto T83;
	goto T85;
T85:;
	base[1]= small_fixnum(0);
	goto T83;
T83:;
	if((CMPcadr((V48)))==Cnil){
	goto T89;}
	base[2]= small_fixnum(1);
	goto T87;
	goto T89;
T89:;
	base[2]= small_fixnum(0);
	goto T87;
T87:;
	vs_top=(vs_base=base+1)+2;
	Llogior();
	vs_top=sup;
	V51= vs_base[0];
	V50= make_cons(V51,CMPcddr((V48)));
	(CMPcdr(V47))->c.c_cdr = (V50);
	(void)(CMPcdr(V47));}
	goto T75;
T75:;
	{object V52 = (V47);
	VMR9(V52)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RESULT-TYPE-FROM-ARGS	*/

static object LI10(V55,V56)

object V55;register object V56;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V57;
	V57= Cnil;
	{object V58 =((V55))->s.s_plist;
	 object ind= VV[18];
	while(V58!=Cnil){
	if(V58->c.c_car==ind){
	V57= (V58->c.c_cdr->c.c_car);
	goto T97;
	}else V58=V58->c.c_cdr->c.c_cdr;}
	V57= Cnil;}
	goto T97;
T97:;
	if(((V57))==Cnil){
	goto T94;}
	if(((V57))==(VV[19])){
	goto T94;}
	if(type_of((V57))==t_cons){
	goto T94;}
	{register object V59;
	object V60;
	V59= VV[20];
	V60= CMPcar((V59));
	goto T104;
T104:;
	if(!(((V59))==Cnil)){
	goto T105;}
	{object V61 = Cnil;
	VMR10(V61)}
	goto T105;
T105:;
	{register object V62;
	register object V63;
	{object V64 =((V55))->s.s_plist;
	 object ind= (V60);
	while(V64!=Cnil){
	if(V64->c.c_car==ind){
	V62= (V64->c.c_cdr->c.c_car);
	goto T110;
	}else V64=V64->c.c_cdr->c.c_cdr;}
	V62= Cnil;}
	goto T110;
T110:;
	V63= CMPcar((V62));
	goto T113;
T113:;
	if(!(((V62))==Cnil)){
	goto T114;}
	goto T109;
	goto T114;
T114:;
	(void)((*(LnkLI139))((V63)));
	base[3]= small_fixnum(3);
	base[4]= CMPcaddr((V63));
	vs_top=(vs_base=base+3)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T119;}
	if(!(((long)length((V56)))==((long)length(CMPcar((V63)))))){
	goto T119;}
	{register object V65;
	register object V66;
	V66= CMPcar((V63));
	V65= (V56);
	goto T130;
T130:;
	if(((V65))!=Cnil){
	goto T131;}
	goto T127;
	goto T131;
T131:;
	if((CMPcar((V65)))==(CMPcar((V66)))){
	goto T135;}
	if(((*(LnkLI140))(CMPcar((V66)),CMPcar((V65))))!=Cnil){
	goto T135;}
	goto T119;
	goto T135;
T135:;
	V65= CMPcdr((V65));
	V66= CMPcdr((V66));
	goto T130;}
	goto T127;
T127:;
	{object V67 = CMPcadr((V63));
	VMR10(V67)}
	goto T119;
T119:;
	V62= CMPcdr((V62));
	V63= CMPcar((V62));
	goto T113;}
	goto T109;
T109:;
	V59= CMPcdr((V59));
	V60= CMPcar((V59));
	goto T104;}
	goto T94;
T94:;
	{object V68 = Cnil;
	VMR10(V68)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for FLAGS	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	vs_top=sup;
	{object V69=base[0]->c.c_cdr;
	base[2]= V69;
	base[3]= small_fixnum(0);}
	{register object V70;
	register object V71;
	V70= base[2];
	V71= CMPcar((V70));
	goto T159;
T159:;
	if(!(((V70))==Cnil)){
	goto T160;}
	goto T155;
	goto T160;
T160:;
	base[5]= base[3];
	base[7]= small_fixnum(1);
	base[8]= (*(LnkLI137))((V71));
	vs_top=(vs_base=base+7)+2;
	Lash();
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+5)+2;
	Llogior();
	vs_top=sup;
	base[3]= vs_base[0];
	V70= CMPcdr((V70));
	V71= CMPcar((V70));
	goto T159;}
	goto T155;
T155:;
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for C1SYMBOL-FUN	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{object V72;
	register object V73;
	V72=(base[0]);
	V73=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V74;
	V74= Cnil;
	{object V75 =((V72))->s.s_plist;
	 object ind= VV[21];
	while(V75!=Cnil){
	if(V75->c.c_car==ind){
	V74= (V75->c.c_cdr->c.c_car);
	goto T179;
	}else V75=V75->c.c_cdr->c.c_cdr;}
	V74= Cnil;}
	goto T179;
T179:;
	if(((V74))==Cnil){
	goto T177;}
	base[2]= (V73);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V74));
	return;
	goto T177;
T177:;
	{object V76;
	{object V77 =((V72))->s.s_plist;
	 object ind= VV[22];
	while(V77!=Cnil){
	if(V77->c.c_car==ind){
	V74= (V77->c.c_cdr->c.c_car);
	goto T184;
	}else V77=V77->c.c_cdr->c.c_cdr;}
	V74= Cnil;}
	goto T184;
T184:;
	if(((V74))!=Cnil){
	goto T182;}
	V76= Cnil;
	goto T181;
	goto T182;
T182:;
	V76= (
	(type_of((V74)) == t_sfun ?(*(((V74))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V74))==t_vfun) ?
	(*(((V74))->sfn.sfn_self)):
	(fcall.fun=((V74)),fcalln))((V72),(V73)));
	goto T181;
T181:;
	if(((V76))==Cnil){
	goto T186;}
	base[2]= (V76);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T186;
T186:;
	V74= (*(LnkLI141))((V72));
	if(((V74))==Cnil){
	goto T189;}
	if(!((CMPcar((V74)))==(VV[23]))){
	goto T193;}
	{object V78;
	object V79;
	V78= (VFUN_NARGS=2,(*(LnkLI127))(VV[24],Ct));
	V79= (*(LnkLI142))((V73),(V78));
	{object V80;
	V80= (*(LnkLI143))(CMPcaddr((V74)));
	if(((V80))==Cnil){
	goto T197;}
	V81= Ct;
	STSET(object,(V78),8, (V80));
	(void)((V80));}
	goto T197;
T197:;
	{register object V82;
	V82= (*(LnkLI144))(CMPcaddr((V74)));
	if(((V82))==Cnil){
	goto T201;}
	{object V83;
	V83= Cnil;
	{object V84;
	object V85;
	V84= (V79);
	V85= CMPcar((V84));
	goto T209;
T209:;
	if(!(((V84))==Cnil)){
	goto T210;}
	goto T205;
	goto T210;
T210:;
	if(!(((V82))==Cnil)){
	goto T216;}
	V83= make_cons(V85,(V83));
	goto T214;
	goto T216;
T216:;
	{object V87;
	V87= (*(LnkLI145))(CMPcar((V82)),(V85),CMPcar((V73)));
	V83= make_cons((V87),(V83));}
	{object V88;
	V88= CMPcar((V82));
	V82= CMPcdr((V82));}
	{object V89;
	V89= CMPcar((V73));
	V73= CMPcdr((V73));}
	goto T214;
T214:;
	V84= CMPcdr((V84));
	V85= CMPcar((V84));
	goto T209;}
	goto T205;
T205:;
	V79= reverse((V83));}}
	goto T201;
T201:;
	base[4]= list(4,VV[23],(V78),CMPcddr((V74)),(V79));
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T193;
T193:;
	V90= (*(LnkLI146))((V74),(V72),(V73));
	base[2]= (*(LnkLI123))(/* INLINE-ARGS */V90);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T189;
T189:;
	{object V91;
	{object V92 =((V72))->s.s_plist;
	 object ind= VV[26];
	while(V92!=Cnil){
	if(V92->c.c_car==ind){
	V74= (V92->c.c_cdr->c.c_car);
	goto T238;
	}else V92=V92->c.c_cdr->c.c_cdr;}
	V74= Cnil;}
	goto T238;
T238:;
	if(((V74))!=Cnil){
	goto T236;}
	V91= Cnil;
	goto T235;
	goto T236;
T236:;
	if(((*(LnkLI147))((V72)))!=Cnil){
	goto T239;}
	V91= Cnil;
	goto T235;
	goto T239;
T239:;
	V91= (
	(type_of((V74)) == t_sfun ?(*(((V74))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V74))==t_vfun) ?
	(*(((V74))->sfn.sfn_self)):
	(fcall.fun=((V74)),fcalln))((V72),(V73)));
	goto T235;
T235:;
	if(((V91))==Cnil){
	goto T242;}
	base[2]= (V91);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T242;
T242:;
	{object V93 =((V72))->s.s_plist;
	 object ind= VV[27];
	while(V93!=Cnil){
	if(V93->c.c_car==ind){
	V74= (V93->c.c_cdr->c.c_car);
	goto T248;
	}else V93=V93->c.c_cdr->c.c_cdr;}
	V74= Cnil;}
	goto T248;
T248:;
	if(((V74))==Cnil){
	goto T245;}
	if(((*(LnkLI147))((V72)))==Cnil){
	goto T245;}
	base[2]= (V73);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V74));
	return;
	goto T245;
T245:;
	{object V94 =((V72))->s.s_plist;
	 object ind= VV[28];
	while(V94!=Cnil){
	if(V94->c.c_car==ind){
	V74= (V94->c.c_cdr->c.c_car);
	goto T255;
	}else V94=V94->c.c_cdr->c.c_cdr;}
	V74= Cnil;}
	goto T255;
T255:;
	if(((V74))==Cnil){
	goto T252;}
	if(((*(LnkLI147))((V72)))==Cnil){
	goto T252;}
	base[2]= CMPcar((V74));
	base[3]= (V73);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event(base[2]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T252;}
	base[2]= CMPcdr((V74));
	base[3]= (V73);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event(base[2]);
	return;
	goto T252;
T252:;
	{object V95;
	base[2]= (V72);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_package();
	vs_top=sup;
	V96= vs_base[0];
	base[2]= VV[29];
	vs_top=(vs_base=base+2)+1;
	Lsymbol_package();
	vs_top=sup;
	V97= vs_base[0];
	if((V96)==(V97)){
	goto T265;}
	goto T264;
	goto T265;
T265:;
	base[2]= (V72);
	vs_top=(vs_base=base+2)+1;
	Lfboundp();
	vs_top=sup;
	V98= vs_base[0];
	if((V98)==Cnil){
	goto T271;}
	goto T264;
	goto T271;
T271:;
	(void)((VFUN_NARGS=2,(*(LnkLI138))(VV[30],(V72))));
	goto T264;
T264:;
	if((VV[31]->s.s_dbind)==Cnil){
	goto T275;}
	base[2]= VV[32];
	base[3]= (V72);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk32)();
	vs_top=sup;
	goto T275;
T275:;
	V95= Cnil;
	if(((V95))==Cnil){
	goto T279;}
	base[2]= (V95);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T279;
T279:;
	base[2]= (V72);
	vs_top=(vs_base=base+2)+1;
	Lmacro_function();
	vs_top=sup;
	V74= vs_base[0];
	if(((V74))==Cnil){
	goto T282;}
	V99= (*(LnkLI146))((V74),(V72),(V73));
	base[2]= (*(LnkLI123))(/* INLINE-ARGS */V99);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T282;
T282:;
	{object V100 =((V72))->s.s_plist;
	 object ind= VV[33];
	while(V100!=Cnil){
	if(V100->c.c_car==ind){
	V74= (V100->c.c_cdr->c.c_car);
	goto T289;
	}else V100=V100->c.c_cdr->c.c_cdr;}
	V74= Cnil;}
	goto T289;
T289:;
	if(((V74))==Cnil){
	goto T287;}
	V102= list(2,VV[35],(V74));
	base[2]= list(4,VV[34],/* INLINE-ARGS */V102,list(2,VV[35],make_cons((V72),(V73))),Cnil);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk148)();
	vs_top=sup;
	V101= vs_base[0];
	base[2]= (*(LnkLI123))(V101);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T287;
T287:;
	{object V103 =((V72))->s.s_plist;
	 object ind= VV[36];
	while(V103!=Cnil){
	if(V103->c.c_car==ind){
	V74= (V103->c.c_cdr->c.c_car);
	goto T296;
	}else V103=V103->c.c_cdr->c.c_cdr;}
	V74= Cnil;}
	goto T296;
T296:;
	if(((V74))==Cnil){
	goto T293;}
	if(((*(LnkLI147))((V72)))==Cnil){
	goto T293;}
	if(!(type_of((V74))==t_cons)){
	goto T293;}
	if(!(type_of(CMPcdr((V74)))==t_fixnum)){
	goto T293;}
	if(((V73))==Cnil){
	goto T293;}
	if(!((CMPcdr((V73)))==Cnil)){
	goto T293;}
	{object V104= CMPcar((V74));
	if((V104!= VV[46]))goto T306;
	V105= list(3,VV[37],CMPcar((V73)),CMPcdr((V74)));
	base[2]= (*(LnkLI123))(/* INLINE-ARGS */V105);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T306;
T306:;
	if((V104!= VV[113]))goto T307;
	V106= list(3,VV[38],CMPcdr((V74)),CMPcar((V73)));
	base[2]= (*(LnkLI123))(/* INLINE-ARGS */V106);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T307;
T307:;
	base[2]= (*(LnkLI149))(CMPcar((V73)),CMPcar((V74)),CMPcdr((V74)));
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T293;
T293:;
	if(!(((V72))==(VV[5]))){
	goto T309;}
	base[2]= (VFUN_NARGS=1,(*(LnkLI135))(VV[39]));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T309;
T309:;
	{object V107;
	object V108;
	{object V110 =((V72))->s.s_plist;
	 object ind= VV[40];
	while(V110!=Cnil){
	if(V110->c.c_car==ind){
	V109= (V110->c.c_cdr->c.c_car);
	goto T312;
	}else V110=V110->c.c_cdr->c.c_cdr;}
	V109= Cnil;}
	goto T312;
T312:;
	V107= (VFUN_NARGS=2,(*(LnkLI127))(VV[24],((V109)==Cnil?Ct:Cnil)));
	V108= (*(LnkLI142))((V73),(V107));
	{object V111;
	V111= (*(LnkLI150))((V72));
	if(((V111))==Cnil){
	goto T314;}
	if(!(equal((V111),VV[41]))){
	goto T319;}
	V111= Cnil;
	goto T314;
	goto T319;
T319:;
	V112= Ct;
	STSET(object,(V107),8, (V111));
	(void)((V111));}
	goto T314;
T314:;
	{register object V113;
	V113= (*(LnkLI151))((V72));
	if(((V113))==Cnil){
	goto T322;}
	{register object V114;
	register object V115;
	object V116;
	V114= (V108);
	V115= Cnil;
	V116= (V73);
	goto T327;
T327:;
	if(!(((V114))==Cnil)){
	goto T328;}
	V108= reverse((V115));
	goto T322;
	goto T328;
T328:;
	if(!(((V113))==Cnil)){
	goto T335;}
	{object V117;
	V117= CMPcar((V114));
	V115= make_cons((V117),(V115));
	goto T333;}
	goto T335;
T335:;
	{object V118;
	V118= (*(LnkLI145))(CMPcar((V113)),CMPcar((V114)),CMPcar((V116)));
	V115= make_cons((V118),(V115));}
	{object V119;
	V119= CMPcar((V113));
	V113= CMPcdr((V113));}
	goto T333;
T333:;
	V114= CMPcdr((V114));
	V116= CMPcdr((V116));
	goto T327;}}
	goto T322;
T322:;
	{register object V120;
	{object V121 =((V72))->s.s_plist;
	 object ind= VV[42];
	while(V121!=Cnil){
	if(V121->c.c_car==ind){
	V120= (V121->c.c_cdr->c.c_car);
	goto T350;
	}else V121=V121->c.c_cdr->c.c_cdr;}
	V120= Cnil;}
	goto T350;
T350:;
	if(((V120))==Cnil){
	goto T349;}
	{object V122;
	object V123;
	V122= (V108);
	V123= (V73);
	goto T354;
T354:;
	if(((V120))==Cnil){
	goto T356;}
	if(!(((V122))==Cnil)){
	goto T355;}
	goto T356;
T356:;
	goto T349;
	goto T355;
T355:;
	(void)((*(LnkLI152))(CMPcar((V120)),CMPcar((V122)),CMPcar((V123))));
	{object V124;
	V124= CMPcar((V120));
	V120= CMPcdr((V120));}
	V122= CMPcdr((V122));
	V123= CMPcdr((V123));
	goto T354;}}
	goto T349;
T349:;
	{object V125= (V72);
	if((V125!= VV[153]))goto T371;
	{object V126;
	V126= STREF(object,CMPcadar((V108)),8);
	if(!(((V126))==(VV[43]))){
	goto T374;}
	V126= VV[44];
	if((VV[44])!=Cnil){
	goto T373;}
	goto T374;
T374:;
	if(!(type_of((V126))==t_cons)){
	goto T370;}
	if((CMPcar((V126)))==(VV[45])){
	goto T381;}
	if(!((CMPcar((V126)))==(VV[46]))){
	goto T370;}
	goto T381;
T381:;
	V126= CMPcadr((V126));
	if(((V126))==Cnil){
	goto T370;}
	goto T373;
T373:;
	V126= (*(LnkLI154))(STREF(object,(V107),8),(V126));
	if(((V126))!=Cnil){
	goto T389;}
	V127= make_cons((V72),(V73));
	(void)((VFUN_NARGS=2,(*(LnkLI138))(VV[47],/* INLINE-ARGS */V127)));
	goto T389;
T389:;
	V128= Ct;
	STSET(object,(V107),8, (V126));
	(void)((V126));
	goto T370;}
	goto T371;
T371:;
	if((V125!= VV[155]))goto T392;
	{object V129;
	V129= STREF(object,CMPcadar((V108)),8);
	if(!(((V129))==(VV[43]))){
	goto T395;}
	V129= VV[44];
	if((VV[44])!=Cnil){
	goto T394;}
	goto T395;
T395:;
	if(!(type_of((V129))==t_cons)){
	goto T370;}
	if((CMPcar((V129)))==(VV[45])){
	goto T402;}
	if(!((CMPcar((V129)))==(VV[46]))){
	goto T370;}
	goto T402;
T402:;
	V129= CMPcadr((V129));
	if(((V129))==Cnil){
	goto T370;}
	goto T394;
T394:;
	base[4]= (V108);
	vs_top=(vs_base=base+4)+1;
	Llast();
	vs_top=sup;
	V130= vs_base[0];
	V131= (*(LnkLI154))(STREF(object,CMPcadar(V130),8),(V129));
	V129= (*(LnkLI154))(STREF(object,(V107),8),/* INLINE-ARGS */V131);
	if(((V129))!=Cnil){
	goto T412;}
	V132= make_cons((V72),(V73));
	(void)((VFUN_NARGS=2,(*(LnkLI138))(VV[48],/* INLINE-ARGS */V132)));
	goto T412;
T412:;
	V133= Ct;
	STSET(object,(V107),8, (V129));
	(void)((V129));
	base[4]= (V108);
	vs_top=(vs_base=base+4)+1;
	Llast();
	vs_top=sup;
	V134= vs_base[0];
	V135= CMPcadar(V134);
	V136= Ct;
	STSET(object,/* INLINE-ARGS */V135,8, (V129));
	(void)((V129));
	goto T370;}
	goto T392;
T392:;}
	goto T370;
T370:;
	{object V137;
	{object V139;
	object V140= (V108);
	if(V140==Cnil){
	V138= Cnil;
	goto T420;}
	base[4]=V139=MMcons(Cnil,Cnil);
	goto T421;
T421:;
	(V139->c.c_car)= STREF(object,CMPcadr((V140->c.c_car)),8);
	if((V140=MMcdr(V140))==Cnil){
	V138= base[4];
	goto T420;}
	V139=MMcdr(V139)=MMcons(Cnil,Cnil);
	goto T421;}
	goto T420;
T420:;
	V137= (*(LnkLI156))((V72),V138);
	if(((V137))==Cnil){
	goto T418;}
	V137= (*(LnkLI154))((V137),STREF(object,(V107),8));
	V142= Ct;
	STSET(object,(V107),8, (V137));
	(void)((V137));}
	goto T418;
T418:;
	base[4]= list(4,VV[49],(V107),(V72),(V108));
	vs_top=(vs_base=base+4)+1;
	return;}}}}}
	}
}
/*	local entry for function REPLACE-CONSTANT	*/

static object LI13(V144)

object V144;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{register object V145;
	register object V146;
	V145= Cnil;
	V146= Cnil;
	{register object V147;
	V147= (V144);
	goto T430;
T430:;
	if(((V147))!=Cnil){
	goto T431;}
	{object V148 = (V145);
	VMR13(V148)}
	goto T431;
T431:;
	base[0]= CMPcar((V147));
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T435;}
	base[0]= CMPcar((V147));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V146= vs_base[0];
	if(type_of((V146))==t_fixnum||
type_of((V146))==t_bignum||
type_of((V146))==t_ratio||
type_of((V146))==t_shortfloat||
type_of((V146))==t_longfloat||
type_of((V146))==t_complex){
	goto T436;}
	if(!(type_of((V146))==t_character)){
	goto T435;}
	goto T436;
T436:;
	V145= Ct;
	{register object V149;
	register object V150;
	V149= (V147);
	V150= (V146);
	((V149))->c.c_car = (V150);}
	goto T435;
T435:;
	V147= CMPcdr((V147));
	goto T430;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1LAMBDA-FUN	*/

static object LI14(V153,V154)

register object V153;object V154;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{object V155;
	V155= (VFUN_NARGS=2,(*(LnkLI127))(VV[24],Ct));
	V154= (*(LnkLI142))((V154),(V155));
	V153= (VFUN_NARGS=1,(*(LnkLI157))((V153)));
	(void)((*(LnkLI124))((V155),CMPcadr((V153))));
	{object V156 = list(4,VV[50],(V155),(V153),(V154));
	VMR14(V156)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C2EXPR	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	bds_check;
	{register object V157;
	V157=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((CMPcar((V157)))==(VV[49]))){
	goto T460;}
	base[1]= (*(LnkLI158))(CMPcaddr((V157)),CMPcadddr((V157)),Cnil,STREF(object,CMPcadr((V157)),8));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T460;
T460:;
	if((CMPcar((V157)))==(VV[51])){
	goto T462;}
	if(!((CMPcar((V157)))==(VV[52]))){
	goto T463;}
	goto T462;
T462:;
	base[1]= (*(LnkLI159))(CMPcadr((V157)));
	bds_bind(VV[53],base[1]);
	{object V158 =(CMPcar((V157)))->s.s_plist;
	 object ind= VV[54];
	while(V158!=Cnil){
	if(V158->c.c_car==ind){
	base[2]= (V158->c.c_cdr->c.c_car);
	goto T468;
	}else V158=V158->c.c_cdr->c.c_cdr;}
	base[2]= Cnil;}
	goto T468;
T468:;
	{object V159;
	V159= CMPcddr((V157));
	 vs_top=base+3;
	 while(V159!=Cnil)
	 {vs_push((V159)->c.c_car);V159=(V159)->c.c_cdr;}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	bds_unwind1;
	return;
	goto T463;
T463:;
	{register object V160;
	{object V161 =(CMPcar((V157)))->s.s_plist;
	 object ind= VV[54];
	while(V161!=Cnil){
	if(V161->c.c_car==ind){
	V160= (V161->c.c_cdr->c.c_car);
	goto T470;
	}else V161=V161->c.c_cdr->c.c_cdr;}
	V160= Cnil;}
	goto T470;
T470:;
	if(((V160))==Cnil){
	goto T472;}
	base[1]= (V160);
	{object V162;
	V162= CMPcddr((V157));
	 vs_top=base+2;
	 while(V162!=Cnil)
	 {vs_push((V162)->c.c_car);V162=(V162)->c.c_cdr;}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	return;
	goto T472;
T472:;
	{object V163 =(CMPcar((V157)))->s.s_plist;
	 object ind= VV[55];
	while(V163!=Cnil){
	if(V163->c.c_car==ind){
	V160= (V163->c.c_cdr->c.c_car);
	goto T479;
	}else V163=V163->c.c_cdr->c.c_cdr;}
	V160= Cnil;}
	goto T479;
T479:;
	if(((V160))==Cnil){
	goto T477;}
	base[1]= (V157);
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V160));
	return;
	goto T477;
T477:;
	base[1]= (*(LnkLI160))();
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local entry for function C2FUNCALL-SFUN	*/

static object LI16(V167,V168,V169)

object V167;object V168;object V169;
{	 VMB16 VMS16 VMV16
	bds_check;
	goto TTL;
TTL:;
	{object V170;
	object V171;
	V170= Cnil;
	V171= make_cons((V167),(V168));
	bds_bind(VV[56],small_fixnum(0));
	base[2]= CMPmake_fixnum((long)length((V171)));
	base[3]= VV[57];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V172= vs_base[0];
	V173= list(4,V172,Ct,small_fixnum(3),VV[58]);
	V170= (*(LnkLI161))(/* INLINE-ARGS */V173,(V171));
	(void)((VFUN_NARGS=1,(*(LnkLI162))((V170))));
	{object V174 = (*(LnkLI163))();
	bds_unwind1;
	VMR16(V174)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2EXPR*	*/

static object LI17(V176)

object V176;
{	 VMB17 VMS17 VMV17
	bds_check;
	goto TTL;
TTL:;
	(VV[60]->s.s_dbind)= number_plus((VV[60]->s.s_dbind),small_fixnum(1));
	bds_bind(VV[59],make_cons((VV[60]->s.s_dbind),Cnil));
	bds_bind(VV[61],make_cons((VV[59]->s.s_dbind),(VV[61]->s.s_dbind)));
	base[2]= (V176);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk164)();
	vs_top=sup;
	if((CMPcdr((VV[59]->s.s_dbind)))==Cnil){
	goto T497;}
	princ_str("\n	goto T",VV[62]);
	(void)((*(LnkLI165))(CMPcar((VV[59]->s.s_dbind))));
	princ_char(59,VV[62]);
	princ_str("\nT",VV[62]);
	(void)((*(LnkLI165))(CMPcar((VV[59]->s.s_dbind))));
	princ_str(":;",VV[62]);
	{object V177 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR17(V177)}
	goto T497;
T497:;
	{object V178 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR17(V178)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2EXPR-TOP	*/

static object LI18(V181,V182)

object V181;object V182;
{	 VMB18 VMS18 VMV18
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[63],small_fixnum(0));
	bds_bind(VV[64],small_fixnum(0));
	bds_bind(VV[65],one_plus((VV[65]->s.s_dbind)));
	(VV[66]->s.s_dbind)= number_plus((VV[66]->s.s_dbind),small_fixnum(1));
	bds_bind(VV[67],(VV[66]->s.s_dbind));
	princ_str("\n	{register object *base",VV[62]);
	V183= one_minus((VV[65]->s.s_dbind));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V183));
	princ_str("=base;",VV[62]);
	(VV[68]->s.s_dbind)= Ct;
	princ_str("\n	{register object *base=V",VV[62]);
	(void)((*(LnkLI165))((V182)));
	princ_char(59,VV[62]);
	princ_str("\n	register object *sup=vs_base+VM",VV[62]);
	(void)((*(LnkLI165))((VV[67]->s.s_dbind)));
	princ_char(59,VV[62]);
	princ_str("\n	base",VV[62]);
	V184= one_minus((VV[65]->s.s_dbind));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V184));
	princ_str("[0]=base",VV[62]);
	V185= one_minus((VV[65]->s.s_dbind));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V185));
	princ_str("[0];",VV[62]);
	princ_str("\n	base[0]=base[0];",VV[62]);
	if(((VV[69]->s.s_dbind))==Cnil){
	goto T533;}
	princ_str("\n	vs_reserve(VM",VV[62]);
	(void)((*(LnkLI165))((VV[67]->s.s_dbind)));
	princ_str(");",VV[62]);
	goto T531;
	goto T533;
T533:;
	princ_str("\n	vs_check;",VV[62]);
	goto T531;
T531:;
	princ_str("\n	",VV[62]);
	(void)((*(LnkLI166))());
	base[4]= (V181);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk164)();
	vs_top=sup;
	{object V186;
	V186= make_cons((VV[67]->s.s_dbind),(VV[64]->s.s_dbind));
	(VV[70]->s.s_dbind)= make_cons((V186),(VV[70]->s.s_dbind));}
	princ_str("\n	}}",VV[62]);
	{object V187 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR18(V187)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2EXPR-TOP*	*/

static object LI19(V190,V191)

object V190;object V191;
{	 VMB19 VMS19 VMV19
	bds_check;
	goto TTL;
TTL:;
	(VV[60]->s.s_dbind)= number_plus((VV[60]->s.s_dbind),small_fixnum(1));
	bds_bind(VV[59],make_cons((VV[60]->s.s_dbind),Cnil));
	bds_bind(VV[61],make_cons((VV[59]->s.s_dbind),(VV[61]->s.s_dbind)));
	(void)((*(LnkLI167))((V190),(V191)));
	if((CMPcdr((VV[59]->s.s_dbind)))==Cnil){
	goto T552;}
	princ_str("\n	goto T",VV[62]);
	(void)((*(LnkLI165))(CMPcar((VV[59]->s.s_dbind))));
	princ_char(59,VV[62]);
	princ_str("\nT",VV[62]);
	(void)((*(LnkLI165))(CMPcar((VV[59]->s.s_dbind))));
	princ_str(":;",VV[62]);
	{object V192 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR19(V192)}
	goto T552;
T552:;
	{object V193 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR19(V193)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1PROGN	*/

static object LI20(V195)

register object V195;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{register object V196;
	V196= Cnil;
	if(!(((V195))==Cnil)){
	goto T563;}
	{object V197 = (*(LnkLI125))();
	VMR20(V197)}
	goto T563;
T563:;
	if(!((CMPcdr((V195)))==Cnil)){
	goto T566;}
	{object V198 = (*(LnkLI123))(CMPcar((V195)));
	VMR20(V198)}
	goto T566;
T566:;
	{register object V199;
	V199= (VFUN_NARGS=0,(*(LnkLI127))());
	{register object V200;
	register object V201;
	V200= (V195);
	V201= CMPcar((V200));
	goto T573;
T573:;
	if(!(((V200))==Cnil)){
	goto T574;}
	goto T569;
	goto T574;
T574:;
	V201= (*(LnkLI123))((V201));
	{register object V202;
	V202= (V201);
	V196= make_cons((V202),(V196));}
	(void)((*(LnkLI124))((V199),CMPcadr((V201))));
	V200= CMPcdr((V200));
	V201= CMPcar((V200));
	goto T573;}
	goto T569;
T569:;
	V203= Ct;
	STSET(object,(V199),8, STREF(object,CMPcadar((V196)),8));
	(void)(STREF(object,CMPcadar((V196)),8));
	{object V204 = list(3,VV[71],(V199),reverse((V196)));
	VMR20(V204)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1PROGN*	*/

static object LI21(V207,V208)

register object V207;object V208;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	V207= (*(LnkLI168))((V207));
	(void)((*(LnkLI124))((V208),CMPcadr((V207))));
	{object V209 = (V207);
	VMR21(V209)}
	return Cnil;
}
/*	function definition for C2PROGN	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	bds_check;
	{object V210;
	V210=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V211;
	V211= (V210);
	goto T594;
T594:;
	if(!((CMPcdr((V211)))==Cnil)){
	goto T595;}
	base[1]= CMPcar((V211));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk164)();
	return;
	goto T595;
T595:;
	bds_bind(VV[72],VV[73]);
	(VV[60]->s.s_dbind)= number_plus((VV[60]->s.s_dbind),small_fixnum(1));
	bds_bind(VV[59],make_cons((VV[60]->s.s_dbind),Cnil));
	bds_bind(VV[61],make_cons((VV[59]->s.s_dbind),(VV[61]->s.s_dbind)));
	base[4]= CMPcar((V211));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk164)();
	vs_top=sup;
	if((CMPcdr((VV[59]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T600;}
	princ_str("\n	goto T",VV[62]);
	(void)((*(LnkLI165))(CMPcar((VV[59]->s.s_dbind))));
	princ_char(59,VV[62]);
	princ_str("\nT",VV[62]);
	(void)((*(LnkLI165))(CMPcar((VV[59]->s.s_dbind))));
	princ_str(":;",VV[62]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T600;
T600:;
	V211= CMPcdr((V211));
	goto T594;}
	}
}
/*	local entry for function C1ARGS	*/

static object LI23(V214,V215)

object V214;object V215;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	{object V216;
	object V217= (V214);
	if(V217==Cnil){
	{object V218 = Cnil;
	VMR23(V218)}}
	base[0]=V216=MMcons(Cnil,Cnil);
	goto T618;
T618:;
	(V216->c.c_car)= (*(LnkLI169))((V217->c.c_car),(V215));
	if((V217=MMcdr(V217))==Cnil){
	{object V220 = base[0];
	VMR23(V220)}}
	V216=MMcdr(V216)=MMcons(Cnil,Cnil);
	goto T618;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1STRUCTURE-REF	*/

static object LI24(V222)

register object V222;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	if(((VV[69]->s.s_dbind))!=Cnil){
	goto T621;}
	if(((V222))==Cnil){
	goto T621;}
	if((CMPcdr((V222)))==Cnil){
	goto T621;}
	if(!(type_of(CMPcadr((V222)))==t_cons)){
	goto T621;}
	if(!((CMPcaadr((V222)))==(VV[35]))){
	goto T621;}
	if((CMPcdadr((V222)))==Cnil){
	goto T621;}
	if(!(type_of(CMPcadadr((V222)))==t_symbol)){
	goto T621;}
	if(!((CMPcddadr((V222)))==Cnil)){
	goto T621;}
	if((CMPcddr((V222)))==Cnil){
	goto T621;}
	if(!(type_of(CMPcaddr((V222)))==t_fixnum)){
	goto T621;}
	if(!((CMPcdddr((V222)))==Cnil)){
	goto T621;}
	{object V223 = (*(LnkLI149))(CMPcar((V222)),CMPcadadr((V222)),CMPcaddr((V222)));
	VMR24(V223)}
	goto T621;
T621:;
	{object V224;
	V224= (VFUN_NARGS=0,(*(LnkLI127))());
	{object V225 = list(4,VV[49],(V224),VV[74],(*(LnkLI142))((V222),(V224)));
	VMR24(V225)}}
	return Cnil;
}
/*	local entry for function C1STRUCTURE-REF1	*/

static object LI25(V229,V230,V231)

object V229;object V230;object V231;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{object V232;
	V232= (VFUN_NARGS=0,(*(LnkLI127))());
	if(((VV[69]->s.s_dbind))==Cnil){
	goto T646;}
	V233= list(4,VV[74],(V229),list(2,VV[35],(V230)),(V231));
	{object V234 = (*(LnkLI123))(/* INLINE-ARGS */V233);
	VMR25(V234)}
	goto T646;
T646:;
	{object V235;
	object V236;
	{object V237 =((V230))->s.s_plist;
	 object ind= VV[76];
	while(V237!=Cnil){
	if(V237->c.c_car==ind){
	V235= (V237->c.c_cdr->c.c_car);
	goto T648;
	}else V237=V237->c.c_cdr->c.c_cdr;}
	V235= Cnil;}
	goto T648;
T648:;
	V236= aref1(STREF(object,(V235),8),fix((V231)));
	V238= aref1((VV[75]->s.s_dbind),fix((V236)));
	V239= (*(LnkLI170))(/* INLINE-ARGS */V238);
	V240= Ct;
	STSET(object,(V232),8, /* INLINE-ARGS */V239);
	(void)(/* INLINE-ARGS */V239);
	V241= (*(LnkLI169))((V229),(V232));
	V242= (*(LnkLI171))((V230));
	{object V243 = list(6,VV[77],(V232),/* INLINE-ARGS */V241,/* INLINE-ARGS */V242,(V231),(V235));
	VMR25(V243)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COERCE-LOC-STRUCTURE-REF	*/

static object LI26(V246,V247)

object V246;object V247;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V248;
	V248= CMPcdr((V246));
	{object V249;
	object V250;
	V249= CMPcadddr((V248));
	V250= CMPcaddr((V248));
	if(((V249))==Cnil){
	goto T655;}
	{object V251;
	register object V252;
	V251= aref1(STREF(object,(V249),8),fix((V250)));
	V252= aref1((VV[75]->s.s_dbind),fix((V251)));
	V253= (*(LnkLI170))((V252));
	V254= (*(LnkLI172))(/* INLINE-ARGS */V253);
	if(!((/* INLINE-ARGS */V254)==(VV[78]))){
	goto T659;}
	if(!(eql((V251),small_fixnum(0)))){
	goto T662;}
	goto T659;
	goto T662;
T662:;
	base[5]= VV[79];
	base[6]= (V252);
	vs_top=(vs_base=base+5)+2;
	Lerror();
	vs_top=sup;
	goto T659;
T659:;
	V255= CMPcar((V246));
	V256= (*(LnkLI170))((V252));
	V257= Ct;
	STSET(object,/* INLINE-ARGS */V255,8, /* INLINE-ARGS */V256);
	(void)(/* INLINE-ARGS */V256);
	V258= (*(LnkLI170))((V252));
	V259= (*(LnkLI172))(/* INLINE-ARGS */V258);
	V260= make_cons(CMPcar((V248)),Cnil);
	V261= (VFUN_NARGS=2,(*(LnkLI174))(/* INLINE-ARGS */V260,VV[81]));
	V262= list(4,/* INLINE-ARGS */V259,small_fixnum(0),VV[80],list(4,CMPcar(/* INLINE-ARGS */V261),VV[82],(V250),(V249)));
	V263= (*(LnkLI170))((V247));
	{object V264 = (*(LnkLI173))(/* INLINE-ARGS */V262,/* INLINE-ARGS */V263);
	VMR26(V264)}}
	goto T655;
T655:;
	{object V265 = (*(LnkLI175))();
	VMR26(V265)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2STRUCTURE-REF	*/

static object LI27(V270,V271,V272,V273)

object V270;object V271;object V272;object V273;
{	 VMB27 VMS27 VMV27
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[63],(VV[63]->s.s_dbind));
	bds_bind(VV[56],small_fixnum(0));
	{object V274;
	object V275;
	V276= make_cons((V270),Cnil);
	V277= (VFUN_NARGS=2,(*(LnkLI174))(/* INLINE-ARGS */V276,VV[83]));
	V274= CMPcar(/* INLINE-ARGS */V277);{object V278;
	V278= (VV[75]->s.s_dbind);
	V279= aref1(STREF(object,(V273),8),fix((V272)));
	V275= aref1(V278,fix(/* INLINE-ARGS */V279));}
	V280= (*(LnkLI170))((V275));
	V281= (*(LnkLI172))(/* INLINE-ARGS */V280);
	V282= list(4,/* INLINE-ARGS */V281,small_fixnum(0),VV[80],list(4,(V274),(V271),(V272),(V273)));
	(void)((VFUN_NARGS=1,(*(LnkLI162))(/* INLINE-ARGS */V282)));}
	{object V283 = (*(LnkLI163))();
	bds_unwind1;
	bds_unwind1;
	VMR27(V283)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MY-CALL	*/

static object LI28(V288,V289,V290,V291)

object V288;object V289;object V290;object V291;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{object V292;
	object V293;
	V292= STREF(object,(V291),8);
	V293= STREF(object,(V291),32);
	if(((VV[69]->s.s_dbind))==Cnil){
	goto T674;}
	{object V294 = (*(LnkLI175))();
	VMR28(V294)}
	goto T674;
T674:;
	princ_str("STREF(",VV[62]);{object V295;
	V295= (VV[75]->s.s_dbind);
	V296= aref1((V292),fix((V290)));
	V297= aref1(V295,fix(/* INLINE-ARGS */V296));
	V298= (*(LnkLI176))(/* INLINE-ARGS */V297);
	(void)((*(LnkLI165))(/* INLINE-ARGS */V298));}
	princ_char(44,VV[62]);
	(void)((*(LnkLI165))((V288)));
	princ_char(44,VV[62]);
	V299= aref1((V293),fix((V290)));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V299));
	princ_char(41,VV[62]);
	{object V300 = Cnil;
	VMR28(V300)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1STRUCTURE-SET	*/

static object LI29(V302)

register object V302;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{register object V303;
	V303= (VFUN_NARGS=0,(*(LnkLI127))());
	if(((V302))==Cnil){
	goto T685;}
	if(((VV[69]->s.s_dbind))!=Cnil){
	goto T685;}
	if((CMPcdr((V302)))==Cnil){
	goto T685;}
	if(!(type_of(CMPcadr((V302)))==t_cons)){
	goto T685;}
	if(!((CMPcaadr((V302)))==(VV[35]))){
	goto T685;}
	if((CMPcdadr((V302)))==Cnil){
	goto T685;}
	if(!(type_of(CMPcadadr((V302)))==t_symbol)){
	goto T685;}
	if(!((CMPcddadr((V302)))==Cnil)){
	goto T685;}
	if((CMPcddr((V302)))==Cnil){
	goto T685;}
	if(!(type_of(CMPcaddr((V302)))==t_fixnum)){
	goto T685;}
	if((CMPcdddr((V302)))==Cnil){
	goto T685;}
	if(!((CMPcddddr((V302)))==Cnil)){
	goto T685;}
	{object V304;
	object V305;
	V304= (*(LnkLI123))(CMPcar((V302)));
	V305= (*(LnkLI123))(CMPcadddr((V302)));
	(void)((*(LnkLI124))((V303),CMPcadr((V304))));
	(void)((*(LnkLI124))((V303),CMPcadr((V305))));
	V306= Ct;
	STSET(object,(V303),8, STREF(object,CMPcadr((V305)),8));
	(void)(STREF(object,CMPcadr((V305)),8));
	V307= (*(LnkLI171))(CMPcadadr((V302)));
	V308= CMPcaddr((V302));
	{object V310 =(CMPcadadr((V302)))->s.s_plist;
	 object ind= VV[76];
	while(V310!=Cnil){
	if(V310->c.c_car==ind){
	V309= (V310->c.c_cdr->c.c_car);
	goto T714;
	}else V310=V310->c.c_cdr->c.c_cdr;}
	V309= Cnil;}
	goto T714;
T714:;
	{object V311 = list(7,VV[84],(V303),(V304),/* INLINE-ARGS */V307,/* INLINE-ARGS */V308,(V305),V309);
	VMR29(V311)}}
	goto T685;
T685:;
	{object V312 = list(4,VV[49],(V303),VV[85],(*(LnkLI142))((V302),(V303)));
	VMR29(V312)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2STRUCTURE-SET	*/

static object LI30(V318,V319,V320,V321,V322)

object V318;object V319;object V320;object V321;object V322;
{	 VMB30 VMS30 VMV30
	bds_check;
	goto TTL;
TTL:;
	{object V323;
	V323= Cnil;
	bds_bind(VV[63],(VV[63]->s.s_dbind));
	bds_bind(VV[56],small_fixnum(0));
	{object V324;
	object V325;
	object V326;
	object V327;
	object V328;
	object V329;
	V324= STREF(object,(V322),8);{object V330;
	V330= (VV[75]->s.s_dbind);
	V331= aref1((V324),fix((V320)));
	V325= aref1(V330,fix(/* INLINE-ARGS */V331));}
	V326= STREF(object,(V322),32);
	V327= (*(LnkLI170))((V325));
	V328= Cnil;
	V329= Cnil;
	V332= (VFUN_NARGS=0,(*(LnkLI127))());
	V333= list(3,(V318),(V321),list(4,VV[49],/* INLINE-ARGS */V332,VV[86],Cnil));
	if(!(((V325))==(Ct))){
	goto T727;}
	V334= VV[87];
	goto T725;
	goto T727;
T727:;
	V334= list(3,Ct,(V327),Ct);
	goto T725;
T725:;
	V323= (VFUN_NARGS=2,(*(LnkLI174))(/* INLINE-ARGS */V333,V334));
	V328= CMPcar((V323));
	V329= CMPcadr((V323));
	if(((VV[69]->s.s_dbind))==Cnil){
	goto T733;}
	(void)((*(LnkLI175))());
	goto T733;
T733:;
	princ_str("\n	STSET(",VV[62]);
	V335= (*(LnkLI176))((V325));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V335));
	princ_char(44,VV[62]);
	(void)((*(LnkLI165))((V328)));
	princ_char(44,VV[62]);
	V336= aref1((V326),fix((V320)));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V336));
	princ_str(", ",VV[62]);
	(void)((*(LnkLI165))((V329)));
	princ_str(");",VV[62]);
	V337= (*(LnkLI172))((V327));
	V338= list(4,/* INLINE-ARGS */V337,small_fixnum(0),VV[88],make_cons((V329),Cnil));
	(void)((VFUN_NARGS=1,(*(LnkLI162))(/* INLINE-ARGS */V338)));
	{object V339 = (*(LnkLI163))();
	bds_unwind1;
	bds_unwind1;
	VMR30(V339)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1CONSTANT-VALUE	*/

static object LI31(V342,V343)

register object V342;object V343;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	if(!(((V342))==(Cnil))){
	goto T748;}
	{object V344 = (*(LnkLI125))();
	VMR31(V344)}
	goto T748;
T748:;
	if(!(((V342))==(Ct))){
	goto T751;}
	{object V345 = (*(LnkLI126))();
	VMR31(V345)}
	goto T751;
T751:;
	if(!(type_of((V342))==t_fixnum)){
	goto T754;}
	V346= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],VV[89]));
	V348= (*(LnkLI177))((V342));
	if(number_compare(/* INLINE-ARGS */V348,VV[91])>=0){
	goto T757;}
	V347= Cnil;
	goto T756;
	goto T757;
T757:;
	V347= (*(LnkLI129))((V342));
	goto T756;
T756:;
	{object V349 = list(3,VV[1],/* INLINE-ARGS */V346,list(3,VV[90],V347,(V342)));
	VMR31(V349)}
	goto T754;
T754:;
	if(!(type_of((V342))==t_character)){
	goto T760;}
	V350= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],VV[44]));
	V351= (*(LnkLI129))((V342));
	base[0]= (V342);
	vs_top=(vs_base=base+0)+1;
	Lchar_code();
	vs_top=sup;
	V352= vs_base[0];
	{object V353 = list(3,VV[1],/* INLINE-ARGS */V350,list(3,VV[92],/* INLINE-ARGS */V351,V352));
	VMR31(V353)}
	goto T760;
T760:;
	if(!(type_of((V342))==t_longfloat)){
	goto T765;}
	{object V354;
	object V355;
	V354= Cnil;
	V355= Cnil;
	{register object x= (V342),V357= (VV[93]->s.s_dbind);
	while(V357!=Cnil)
	if(eql(x,V357->c.c_car->c.c_car) &&V357->c.c_car != Cnil){
	V356= (V357->c.c_car);
	goto T771;
	}else V357=V357->c.c_cdr;
	V356= Cnil;}
	goto T771;
T771:;
	V354= CMPcadr(V356);
	if(((V354))!=Cnil){
	goto T767;}
	V355= (*(LnkLI177))((V342));
	base[0]= VV[94];
	base[1]= small_fixnum(2);
	vs_top=(vs_base=base+0)+2;
	Ldivide();
	vs_top=sup;
	V358= vs_base[0];
	if(!(number_compare((V355),V358)>0)){
	goto T773;}
	base[0]= (V342);
	base[1]= VV[94];
	vs_top=(vs_base=base+0)+2;
	Ldivide();
	vs_top=sup;
	V359= vs_base[0];
	V360= list(4,VV[5],VV[19],V359,VV[95]);
	if(((*(LnkLI123))(/* INLINE-ARGS */V360))!=Cnil){
	goto T772;}
	goto T773;
T773:;
	V361 = make_longfloat((double)(4.94065645841246540e-324)*(double)(1.0000000e+20));
	if(!(number_compare((V355),V361)<0)){
	goto T767;}
	base[0]= (V342);
	base[1]= VV[96];
	vs_top=(vs_base=base+0)+2;
	Ldivide();
	vs_top=sup;
	V362= vs_base[0];
	V363= list(4,VV[5],VV[19],V362,VV[98]);
	if(((*(LnkLI123))(/* INLINE-ARGS */V363))==Cnil){
	goto T767;}
	goto T772;
T772:;
	{object V364;
	V354= (VV[99]->s.s_dbind);
	V364= list(2,(V342),(V354));
	(VV[93]->s.s_dbind)= make_cons((V364),(VV[93]->s.s_dbind));}
	goto T767;
T767:;
	V365= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],VV[100]));
	if((V354)!=Cnil){
	V366= (V354);
	goto T793;}
	V366= (*(LnkLI129))((V342));
	goto T793;
T793:;
	{object V367 = list(3,VV[1],/* INLINE-ARGS */V365,list(3,VV[101],V366,(V342)));
	VMR31(V367)}}
	goto T765;
T765:;
	if(!(type_of((V342))==t_shortfloat)){
	goto T795;}
	V368= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],VV[102]));
	V369= (*(LnkLI129))((V342));
	{object V370 = list(3,VV[1],/* INLINE-ARGS */V368,list(3,VV[103],/* INLINE-ARGS */V369,(V342)));
	VMR31(V370)}
	goto T795;
T795:;
	if(((V343))==Cnil){
	goto T798;}
	V371= (*(LnkLI128))((V342));
	V372= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],/* INLINE-ARGS */V371));
	{object V373 = list(3,VV[1],/* INLINE-ARGS */V372,list(2,VV[3],(*(LnkLI129))((V342))));
	VMR31(V373)}
	goto T798;
T798:;
	{object V374 = Cnil;
	VMR31(V374)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for DEFINE-COMPILER-MACRO	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	vs_top=sup;
	{object V375=base[0]->c.c_cdr;
	base[2]= (V375->c.c_car);
	V375=V375->c.c_cdr;
	base[3]= (V375->c.c_car);
	V375=V375->c.c_cdr;
	base[4]= V375;}
	V376= list(2,VV[35],base[2]);
	V377= list(2,VV[35],base[2]);
	V378= list(2,VV[35],base[3]);
	V379= list(4,VV[104],/* INLINE-ARGS */V376,list(2,VV[105],list(4,VV[106],/* INLINE-ARGS */V377,/* INLINE-ARGS */V378,list(2,VV[35],base[4]))),VV[107]);
	base[5]= list(3,VV[71],/* INLINE-ARGS */V379,list(2,VV[35],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function UNDEF-COMPILER-MACRO	*/

static object LI33(V381)

object V381;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{object V382 = remprop((V381),VV[33]);
	VMR33(V382)}
	return Cnil;
}
/*	macro definition for DEFINE-INLINE-FUNCTION	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	bds_check;
	vs_top=sup;
	{object V383=base[0]->c.c_cdr;
	base[2]= (V383->c.c_car);
	V383=V383->c.c_cdr;
	base[3]= (V383->c.c_car);
	V383=V383->c.c_cdr;
	base[4]= V383;}
	{register object V384;
	V384= Cnil;
	bds_bind(VV[108],(VV[108]->s.s_dbind));
	{register object V385;
	register object V386;
	V385= base[3];
	V386= CMPcar((V385));
	goto T804;
T804:;
	if(!(((V385))==Cnil)){
	goto T805;}
	goto T800;
	goto T805;
T805:;
	if(!(type_of((V386))==t_symbol)){
	goto T811;}
	{register object x= (V386),V387= VV[109];
	while(V387!=Cnil)
	if(x==(V387->c.c_car)){
	goto T811;
	}else V387=V387->c.c_cdr;}
	{register object V388;{object V389;
	{register object V390;
	V390= CMPcar((VV[108]->s.s_dbind));
	(VV[108]->s.s_dbind)= CMPcdr((VV[108]->s.s_dbind));
	V389= (V390);}
	if(V389==Cnil)goto T816;
	V388= V389;
	goto T815;
	goto T816;
T816:;}
	base[8]= VV[110];
	base[10]= VV[111];
	vs_top=(vs_base=base+10)+1;
	Lfind_package();
	vs_top=sup;
	base[9]= vs_base[0];
	vs_top=(vs_base=base+8)+2;
	Lgentemp();
	vs_top=sup;
	V388= vs_base[0];
	goto T815;
T815:;
	V384= make_cons((V388),(V384));
	goto T809;}
	goto T811;
T811:;
	base[7]= VV[112];
	base[8]= (V386);
	base[9]= base[2];
	vs_top=(vs_base=base+7)+3;
	Lerror();
	vs_top=sup;
	goto T809;
T809:;
	V385= CMPcdr((V385));
	V386= CMPcar((V385));
	goto T804;}
	goto T800;
T800:;
	{object V391;
	{object V393;
	object V394= base[3];
	object V395= (V384);
	if(V394==Cnil||V395==Cnil){
	V392= Cnil;
	goto T834;}
	base[6]=V393=MMcons(Cnil,Cnil);
	goto T835;
T835:;
	(V393->c.c_car)= list(3,VV[113],list(2,VV[35],(V394->c.c_car)),(V395->c.c_car));
	if((V394=MMcdr(V394))==Cnil||(V395=MMcdr(V395))==Cnil){
	V392= base[6];
	goto T834;}
	V393=MMcdr(V393)=MMcons(Cnil,Cnil);
	goto T835;}
	goto T834;
T834:;
	V391= make_cons(VV[113],V392);
	V398= listA(4,VV[114],base[2],base[3],base[4]);
	base[6]= list(3,VV[71],/* INLINE-ARGS */V398,list(4,VV[115],base[2],(V384),list(4,VV[116],VV[117],(V391),list(2,VV[35],base[4]))));
	vs_top=(vs_base=base+6)+1;
	bds_unwind1;
	return;}}
}
/*	local entry for function NAME-TO-SD	*/

static object LI35(V400)

object V400;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	{object V401;
	V401= Cnil;{object V402;
	if(type_of((V400))==t_symbol){
	goto T841;}
	V402= Cnil;
	goto T840;
	goto T841;
T841:;
	{object V403 =((V400))->s.s_plist;
	 object ind= VV[76];
	while(V403!=Cnil){
	if(V403->c.c_car==ind){
	V401= (V403->c.c_cdr->c.c_car);
	goto T843;
	}else V403=V403->c.c_cdr->c.c_cdr;}
	V401= Cnil;}
	goto T843;
T843:;
	V402= (V401);
	goto T840;
T840:;
	if(V402==Cnil)goto T839;
	goto T838;
	goto T839;
T839:;}
	base[0]= VV[118];
	base[1]= (V400);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T838;
T838:;
	{object V404 = (V401);
	VMR35(V404)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function NAME-SD1	*/

static object LI36(V406)

object V406;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;{object V407;
	{object V408 =((V406))->s.s_plist;
	 object ind= VV[119];
	while(V408!=Cnil){
	if(V408->c.c_car==ind){
	V407= (V408->c.c_cdr->c.c_car);
	goto T847;
	}else V408=V408->c.c_cdr->c.c_cdr;}
	V407= Cnil;}
	goto T847;
T847:;
	if(V407==Cnil)goto T846;
	{object V409 = V407;
	VMR36(V409)}
	goto T846;
T846:;}
	V410= list(3,VV[5],VV[119],list(2,VV[35],(V406)));
	{object V411 = sputprop((V406),VV[120],/* INLINE-ARGS */V410);
	VMR36(V411)}
	return Cnil;
}
/*	local entry for function CO1STRUCTURE-PREDICATE	*/

static object LI37(V414,V415)

object V414;object V415;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	{object V416;
	V416= Cnil;
	if(!(type_of((V414))==t_symbol)){
	goto T850;}
	{object V417 =((V414))->s.s_plist;
	 object ind= VV[121];
	while(V417!=Cnil){
	if(V417->c.c_car==ind){
	V416= (V417->c.c_cdr->c.c_car);
	goto T854;
	}else V417=V417->c.c_cdr->c.c_cdr;}
	V416= Cnil;}
	goto T854;
T854:;
	if(((V416))==Cnil){
	goto T850;}
	V418= CMPcar((V415));
	V419= list(3,VV[122],/* INLINE-ARGS */V418,list(2,VV[35],(V416)));
	{object V420 = (*(LnkLI123))(/* INLINE-ARGS */V419);
	VMR37(V420)}
	goto T850;
T850:;
	{object V421 = Cnil;
	VMR37(V421)}}
	return Cnil;
}
static object  LnkTLI177(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[177],(void **)(void *)&LnkLI177,1,first,ap);va_end(ap);return V1;} /* ABS */
static object  LnkTLI176(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[176],(void **)(void *)&LnkLI176,1,first,ap);va_end(ap);return V1;} /* AET-C-TYPE */
static object  LnkTLI175(){return call_proc0(VV[175],(void **)(void *)&LnkLI175);} /* WFS-ERROR */
static object  LnkTLI174(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[174],(void **)(void *)&LnkLI174,first,ap);va_end(ap);return V1;} /* INLINE-ARGS */
static object  LnkTLI173(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[173],(void **)(void *)&LnkLI173,2,first,ap);va_end(ap);return V1;} /* COERCE-LOC */
static object  LnkTLI172(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[172],(void **)(void *)&LnkLI172,1,first,ap);va_end(ap);return V1;} /* INLINE-TYPE */
static object  LnkTLI171(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[171],(void **)(void *)&LnkLI171,1,first,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI170(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[170],(void **)(void *)&LnkLI170,1,first,ap);va_end(ap);return V1;} /* TYPE-FILTER */
static object  LnkTLI169(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[169],(void **)(void *)&LnkLI169,2,first,ap);va_end(ap);return V1;} /* C1EXPR* */
static object  LnkTLI168(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[168],(void **)(void *)&LnkLI168,1,first,ap);va_end(ap);return V1;} /* C1PROGN */
static object  LnkTLI167(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[167],(void **)(void *)&LnkLI167,2,first,ap);va_end(ap);return V1;} /* C2EXPR-TOP */
static object  LnkTLI166(){return call_proc0(VV[166],(void **)(void *)&LnkLI166);} /* RESET-TOP */
static object  LnkTLI165(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[165],(void **)(void *)&LnkLI165,1,first,ap);va_end(ap);return V1;} /* WT1 */
static void LnkT164(){ call_or_link(VV[164],(void **)(void *)&Lnk164);} /* C2EXPR */
static object  LnkTLI163(){return call_proc0(VV[163],(void **)(void *)&LnkLI163);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI162(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[162],(void **)(void *)&LnkLI162,first,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI161(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[161],(void **)(void *)&LnkLI161,2,first,ap);va_end(ap);return V1;} /* GET-INLINE-LOC */
static object  LnkTLI160(){return call_proc0(VV[160],(void **)(void *)&LnkLI160);} /* BABOON */
static object  LnkTLI159(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[159],(void **)(void *)&LnkLI159,1,first,ap);va_end(ap);return V1;} /* VOLATILE */
static object  LnkTLI158(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[158],(void **)(void *)&LnkLI158,4,first,ap);va_end(ap);return V1;} /* C2CALL-GLOBAL */
static object  LnkTLI157(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[157],(void **)(void *)&LnkLI157,first,ap);va_end(ap);return V1;} /* C1LAMBDA-EXPR */
static object  LnkTLI156(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[156],(void **)(void *)&LnkLI156,2,first,ap);va_end(ap);return V1;} /* RESULT-TYPE-FROM-ARGS */
static object  LnkTLI154(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[154],(void **)(void *)&LnkLI154,2,first,ap);va_end(ap);return V1;} /* TYPE-AND */
static object  LnkTLI152(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[152],(void **)(void *)&LnkLI152,3,first,ap);va_end(ap);return V1;} /* CHECK-FORM-TYPE */
static object  LnkTLI151(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[151],(void **)(void *)&LnkLI151,1,first,ap);va_end(ap);return V1;} /* GET-ARG-TYPES */
static object  LnkTLI150(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[150],(void **)(void *)&LnkLI150,1,first,ap);va_end(ap);return V1;} /* GET-RETURN-TYPE */
static object  LnkTLI149(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[149],(void **)(void *)&LnkLI149,3,first,ap);va_end(ap);return V1;} /* C1STRUCTURE-REF1 */
static void LnkT148(){ call_or_link(VV[148],(void **)(void *)&Lnk148);} /* CMP-EVAL */
static void LnkT32(){ call_or_link(VV[32],(void **)(void *)&Lnk32);} /* RECORD-CALL-INFO */
static object  LnkTLI147(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[147],(void **)(void *)&LnkLI147,1,first,ap);va_end(ap);return V1;} /* INLINE-POSSIBLE */
static object  LnkTLI146(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[146],(void **)(void *)&LnkLI146,3,first,ap);va_end(ap);return V1;} /* CMP-EXPAND-MACRO */
static object  LnkTLI145(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[145],(void **)(void *)&LnkLI145,3,first,ap);va_end(ap);return V1;} /* AND-FORM-TYPE */
static object  LnkTLI144(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[144],(void **)(void *)&LnkLI144,1,first,ap);va_end(ap);return V1;} /* GET-LOCAL-ARG-TYPES */
static object  LnkTLI143(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[143],(void **)(void *)&LnkLI143,1,first,ap);va_end(ap);return V1;} /* GET-LOCAL-RETURN-TYPE */
static object  LnkTLI142(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[142],(void **)(void *)&LnkLI142,2,first,ap);va_end(ap);return V1;} /* C1ARGS */
static object  LnkTLI141(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[141],(void **)(void *)&LnkLI141,1,first,ap);va_end(ap);return V1;} /* C1LOCAL-FUN */
static object  LnkTLI140(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[140],(void **)(void *)&LnkLI140,2,first,ap);va_end(ap);return V1;} /* TYPE>= */
static object  LnkTLI139(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[139],(void **)(void *)&LnkLI139,1,first,ap);va_end(ap);return V1;} /* FIX-OPT */
static object  LnkTLI138(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[138],(void **)(void *)&LnkLI138,first,ap);va_end(ap);return V1;} /* CMPWARN */
static object  LnkTLI137(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[137],(void **)(void *)&LnkLI137,1,first,ap);va_end(ap);return V1;} /* FLAGS-POS */
static object  LnkTLI136(){return call_proc0(VV[136],(void **)(void *)&LnkLI136);} /* ADD-LOAD-TIME-SHARP-COMMA */
static object  LnkTLI135(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[135],(void **)(void *)&LnkLI135,first,ap);va_end(ap);return V1;} /* CMPERR */
static object  LnkTLI134(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[134],(void **)(void *)&LnkLI134,2,first,ap);va_end(ap);return V1;} /* C1LAMBDA-FUN */
static void LnkT133(){ call_or_link(VV[133],(void **)(void *)&Lnk133);} /* C1SYMBOL-FUN */
static object  LnkTLI132(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[132],(void **)(void *)&LnkLI132,1,first,ap);va_end(ap);return V1;} /* C1VAR */
static object  LnkTLI131(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[131],(void **)(void *)&LnkLI131,1,first,ap);va_end(ap);return V1;} /* ADD-CONSTANT */
static object  LnkTLI130(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[130],(void **)(void *)&LnkLI130,2,first,ap);va_end(ap);return V1;} /* C1CONSTANT-VALUE */
static object  LnkTLI129(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[129],(void **)(void *)&LnkLI129,1,first,ap);va_end(ap);return V1;} /* ADD-OBJECT */
static object  LnkTLI128(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[128],(void **)(void *)&LnkLI128,1,first,ap);va_end(ap);return V1;} /* OBJECT-TYPE */
static object  LnkTLI127(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[127],(void **)(void *)&LnkLI127,first,ap);va_end(ap);return V1;} /* MAKE-INFO */
static object  LnkTLI126(){return call_proc0(VV[126],(void **)(void *)&LnkLI126);} /* C1T */
static object  LnkTLI125(){return call_proc0(VV[125],(void **)(void *)&LnkLI125);} /* C1NIL */
static object  LnkTLI124(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[124],(void **)(void *)&LnkLI124,2,first,ap);va_end(ap);return V1;} /* ADD-INFO */
static object  LnkTLI123(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[123],(void **)(void *)&LnkLI123,1,first,ap);va_end(ap);return V1;} /* C1EXPR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

