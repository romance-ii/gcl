
#include "cmpinclude.h"
#include "gcl_destructuring_bind.h"
void init_gcl_destructuring_bind(){do_init(VV);}
/*	local entry for function DO-ARG-COUNT-ERROR	*/

static object LI1(V7,V8,V9,V10,V11,V12)

object V7;object V8;object V9;object V10;object V11;object V12;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= VV[0];
	base[1]= (V7);
	base[2]= (V8);
	base[3]= (V9);
	base[4]= (V10);
	base[5]= (V11);
	base[6]= (V12);
	vs_top=(vs_base=base+0)+7;
	Lerror();
	vs_top=sup;
	{object V13 = vs_base[0];
	VMR1(V13)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PARSE-DEFMACRO	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	bds_check;
	{object V14;
	object V15;
	object V16;
	object V17;
	object V18;
	object V19;
	object V20;
	object V21;
	object V22;
	parse_key(vs_base+5,FALSE,FALSE,5,VV[83],VV[84],VV[85],VV[86],VV[87]);
	V14=(base[0]);
	V15=(base[1]);
	V16=(base[2]);
	V17=(base[3]);
	V18=(base[4]);
	vs_top=sup;
	V19=(base[5]);
	if(base[11]==Cnil){
	V20= Ct;
	}else{
	V20=(base[6]);}
	V21=(base[7]);
	bds_bind(VV[1],base[8]);
	if(base[14]==Cnil){
	V22= VV[2];
	}else{
	V22=(base[9]);}
	{object V23;
	object V24;
	object V25;
	base[15]= (V16);
	base[16]= Cnil;
	base[17]= (V20);
	vs_top=(vs_base=base+15)+3;
	(void) (*Lnk30)();
	if(vs_base>=vs_top){vs_top=sup;goto T14;}
	V23= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T15;}
	V24= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T16;}
	V25= vs_base[0];
	vs_top=sup;
	goto T17;
	goto T14;
T14:;
	V23= Cnil;
	goto T15;
T15:;
	V24= Cnil;
	goto T16;
T16:;
	V25= Cnil;
	goto T17;
T17:;
	bds_bind(VV[3],Cnil);
	bds_bind(VV[4],Cnil);
	bds_bind(VV[5],Cnil);
	bds_bind(VV[6],Cnil);
	{object V26;
	object V27;
	object V28;
	base[19]= (V14);
	base[20]= (V15);
	base[21]= (V17);
	base[22]= (V18);
	base[23]= (V22);
	base[24]= (((V19))==Cnil?Ct:Cnil);
	base[25]= Cnil;
	base[26]= (V21);
	vs_top=(vs_base=base+19)+8;
	(void) (*Lnk88)();
	if(vs_base>=vs_top){vs_top=sup;goto T27;}
	V26= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T28;}
	V27= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T29;}
	V28= vs_base[0];
	vs_top=sup;
	goto T30;
	goto T27;
T27:;
	V26= Cnil;
	goto T28;
T28:;
	V27= Cnil;
	goto T29;
T29:;
	V28= Cnil;
	goto T30;
T30:;
	V29= nreverse((VV[5]->s.s_dbind));
	if(((VV[6]->s.s_dbind))==Cnil){
	goto T35;}
	V31= list(2,VV[8],make_cons(VV[9],(VV[6]->s.s_dbind)));
	base[20]= make_cons(/* INLINE-ARGS */V31,Cnil);
	goto T33;
	goto T35;
T35:;
	base[20]= Cnil;
	goto T33;
T33:;
	base[21]= (VV[3]->s.s_dbind);
	V32= nreverse((VV[4]->s.s_dbind));
	V33= listA(3,VV[7],/* INLINE-ARGS */V32,append((V24),(V23)));
	base[22]= make_cons(/* INLINE-ARGS */V33,Cnil);
	vs_top=(vs_base=base+20)+3;
	Lappend();
	vs_top=sup;
	V30= vs_base[0];
	base[19]= listA(3,VV[7],/* INLINE-ARGS */V29,V30);
	if(((V21))==Cnil){
	goto T41;}
	if(((V26))!=Cnil){
	goto T41;}
	V34= list(2,VV[8],list(2,VV[10],(V21)));
	base[20]= make_cons(/* INLINE-ARGS */V34,Cnil);
	goto T39;
	goto T41;
T41:;
	base[20]= Cnil;
	goto T39;
T39:;
	base[21]= (V25);
	base[22]= (V27);
	base[23]= (V28);
	vs_top=(vs_base=base+19)+5;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;}}
	}
}
/*	function definition for MAKE-KEYWORD	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{object V35;
	V35=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= symbol_name((V35));
	base[3]= VV[11];
	vs_top=(vs_base=base+3)+1;
	Lfind_package();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	Lintern();
	return;
	}
}
/*	function definition for DEFMACRO-ERROR	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{object V36;
	object V37;
	object V38;
	V36=(base[0]);
	V37=(base[1]);
	V38=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= VV[12];
	base[4]= VV[13];
	base[5]= (V36);
	base[6]= (V38);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk89)();
	return;
	}
}
/*	function definition for VERIFY-KEYWORDS	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{register object V39;
	register object V40;
	object V41;
	V39=(base[0]);
	V40=(base[1]);
	V41=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V42;
	register object V43;
	register object V44;
	V42= Cnil;
	V43= Cnil;
	V44= (V39);
	goto T56;
T56:;
	if(((V44))!=Cnil){
	goto T57;}
	if(((V43))==Cnil){
	goto T61;}
	if(((V41))!=Cnil){
	goto T61;}
	if(((*(LnkLI49))(VV[14],(V39)))!=Cnil){
	goto T61;}
	base[3]= VV[15];
	base[4]= list(2,(V43),(V40));
	vs_top=(vs_base=base+3)+2;
	return;
	goto T61;
T61:;
	base[3]= Cnil;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T57;
T57:;
	if(!(type_of((V44))==t_cons)){
	goto T73;}
	{object V45= CMPcdr((V44));
	if(type_of(V45)==t_cons||(V45)==Cnil){
	goto T74;}}
	goto T73;
T73:;
	base[3]= VV[16];
	base[4]= (V39);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T74;
T74:;
	if((CMPcdr((V44)))!=Cnil){
	goto T81;}
	base[3]= VV[17];
	base[4]= (V39);
	vs_top=(vs_base=base+3)+2;
	return;
	goto T81;
T81:;
	if((CMPcar((V44)))==(VV[14])){
	goto T85;}
	{register object x= CMPcar((V44)),V46= (V40);
	while(V46!=Cnil)
	if(eql(x,V46->c.c_car)){
	goto T89;
	}else V46=V46->c.c_cdr;
	goto T86;}
	goto T89;
T89:;
	goto T85;
T85:;
	{register object V47;
	V47= CMPcar((V44));
	V42= make_cons((V47),(V42));
	goto T72;}
	goto T86;
T86:;
	V43= CMPcar((V44));
	goto T72;
T72:;
	V44= CMPcddr((V44));
	goto T56;}
	}
}
/*	local entry for function LOOKUP-KEYWORD	*/

static object LI6(V50,V51)

register object V50;object V51;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{register object V52;
	V52= (V51);
	goto T97;
T97:;
	if(!(((V52))==Cnil)){
	goto T98;}
	{object V53 = Cnil;
	VMR6(V53)}
	goto T98;
T98:;
	if(!(((V50))==(CMPcar((V52))))){
	goto T102;}
	{object V54 = CMPcadr((V52));
	VMR6(V54)}
	goto T102;
T102:;
	V52= CMPcddr((V52));
	goto T97;}
	return Cnil;
}
/*	local entry for function KEYWORD-SUPPLIED-P	*/

static object LI7(V57,V58)

register object V57;object V58;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V59;
	V59= (V58);
	goto T109;
T109:;
	if(!(((V59))==Cnil)){
	goto T110;}
	{object V60 = Cnil;
	VMR7(V60)}
	goto T110;
T110:;
	if(!(((V57))==(CMPcar((V59))))){
	goto T114;}
	{object V61 = Ct;
	VMR7(V61)}
	goto T114;
T114:;
	V59= CMPcddr((V59));
	goto T109;}
	return Cnil;
}
/*	function definition for PARSE-DEFMACRO-LAMBDA-LIST	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	{object V62;
	object V63;
	register object V64;
	register object V65;
	object V66;
	object V67;
	object V68;
	object V69;
	V62=(base[0]);
	V63=(base[1]);
	V64=(base[2]);
	V65=(base[3]);
	V66=(base[4]);
	vs_base=vs_base+5;
	if(vs_base>=vs_top){vs_top=sup;goto T120;}
	V67=(base[5]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T121;}
	V68=(base[6]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T122;}
	V69=(base[7]);
	vs_top=sup;
	goto T123;
	goto T120;
T120:;
	V67= Cnil;
	goto T121;
T121:;
	V68= Cnil;
	goto T122;
T122:;
	V69= Cnil;
	goto T123;
T123:;
	{register object V70;
	object V71;
	register object V72;
	object V73;
	object V74;
	object V75;
	object V76;
	object V77;
	object V78;
	if(((V67))==Cnil){
	goto T129;}
	V70= list(2,VV[18],(V63));
	goto T127;
	goto T129;
T129:;
	V70= (V63);
	goto T127;
T127:;
	V71= VV[19];
	V72= small_fixnum(0);
	V73= small_fixnum(0);
	V74= Cnil;
	V75= Cnil;
	V76= Cnil;
	V77= Cnil;
	V78= Cnil;
	{object V79;
	V79= (V62);
	goto T136;
T136:;
	if(!(type_of((V79))!=t_cons)){
	goto T137;}
	goto T131;
	goto T137;
T137:;
	if(!((CMPcar((V79)))==(VV[20]))){
	goto T141;}
	goto T134;
	goto T141;
T141:;
	V79= CMPcdr((V79));
	goto T136;}
	goto T134;
T134:;
	if((CMPcar((V62)))==(VV[20])){
	goto T131;}
	base[8]= VV[21];
	base[9]= (V65);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	vs_top=sup;
	goto T131;
T131:;
	{register object V80;
	V80= (V62);
	goto T152;
T152:;
	if(!(type_of((V80))!=t_cons)){
	goto T153;}
	if(((V80))!=Cnil){
	goto T157;}
	goto T150;
	goto T157;
T157:;
	(void)((VFUN_NARGS=3,(*(LnkLI90))((V80),(V70),Cnil)));
	V76= Ct;
	goto T150;
	goto T153;
T153:;
	{register object V81;
	V81= CMPcar((V80));
	if(!(((V81))==(VV[20]))){
	goto T165;}
	if((CMPcdr((V80)))==Cnil){
	goto T168;}
	if(!(type_of(CMPcadr((V80)))==t_symbol)){
	goto T168;}
	V80= CMPcdr((V80));
	(void)((VFUN_NARGS=3,(*(LnkLI90))(CMPcar((V80)),(V63),Cnil)));
	goto T162;
	goto T168;
T168:;
	base[8]= VV[22];
	base[9]= (V65);
	base[10]= (V64);
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk91)();
	vs_top=sup;
	goto T162;
	goto T165;
T165:;
	if(!(((V81))==(VV[23]))){
	goto T178;}
	if(((V68))==Cnil){
	goto T182;}
	base[8]= VV[24];
	base[9]= (V65);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	vs_top=sup;
	goto T180;
	goto T182;
T182:;
	if(((V67))!=Cnil){
	goto T180;}
	base[8]= VV[25];
	vs_top=(vs_base=base+8)+1;
	Lerror();
	vs_top=sup;
	goto T180;
T180:;
	if((CMPcdr((V80)))==Cnil){
	goto T190;}
	if(!(type_of(CMPcadr((V80)))==t_symbol)){
	goto T190;}
	V80= CMPcdr((V80));
	(void)((VFUN_NARGS=3,(*(LnkLI90))(CMPcar((V80)),(V69),Cnil)));
	V78= Ct;
	goto T162;
	goto T190;
T190:;
	base[8]= VV[26];
	base[9]= (V65);
	base[10]= (V64);
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk91)();
	vs_top=sup;
	goto T162;
	goto T178;
T178:;
	if(((V81))==(VV[27])){
	goto T201;}
	if(!(((V81))==(VV[28]))){
	goto T202;}
	goto T201;
T201:;
	if((CMPcdr((V80)))==Cnil){
	goto T207;}
	if(!(type_of(CMPcadr((V80)))==t_symbol)){
	goto T207;}
	V80= CMPcdr((V80));
	V76= Ct;
	(void)((VFUN_NARGS=3,(*(LnkLI90))(CMPcar((V80)),(V70),Cnil)));
	goto T162;
	goto T207;
T207:;
	if((CMPcdr((V80)))==Cnil){
	goto T216;}
	if(!(type_of(CMPcadr((V80)))==t_cons)){
	goto T216;}
	if(!(type_of(CMPcaadr((V80)))==t_symbol)){
	goto T216;}
	V80= CMPcdr((V80));
	V76= Ct;
	{object V82;
	object V83;
	object V84;
	object V85;
	V82= CMPcaar((V80));
	V83= CMPcadar((V80));
	V84= CMPcaddar((V80));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V85= vs_base[0];
	V86= list(2,VV[29],list(4,VV[30],(V70),(V69),(((((V84))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil)));
	(void)((VFUN_NARGS=3,(*(LnkLI90))((V85),/* INLINE-ARGS */V86,Ct)));
	V78= Ct;
	if(((V82))==Cnil){
	goto T233;}
	V87= list(2,VV[31],(V85));
	(void)((VFUN_NARGS=3,(*(LnkLI90))((V82),/* INLINE-ARGS */V87,Cnil)));
	goto T233;
T233:;
	if(((V83))==Cnil){
	goto T236;}
	V88= list(2,VV[32],(V85));
	(void)((VFUN_NARGS=3,(*(LnkLI90))((V83),/* INLINE-ARGS */V88,Cnil)));
	goto T236;
T236:;
	if(((V84))==Cnil){
	goto T162;}
	V89= list(2,VV[33],(V85));
	(void)((VFUN_NARGS=3,(*(LnkLI90))((V84),/* INLINE-ARGS */V89,Cnil)));
	goto T162;}
	goto T216;
T216:;
	base[8]= symbol_name((V81));
	base[9]= (V65);
	base[10]= (V64);
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk91)();
	vs_top=sup;
	goto T162;
	goto T202;
T202:;
	if(!(((V81))==(VV[34]))){
	goto T245;}
	V71= VV[35];
	goto T162;
	goto T245;
T245:;
	if(!(((V81))==(VV[36]))){
	goto T249;}
	V71= VV[37];
	base[8]= VV[38];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V75= vs_base[0];
	(VV[6]->s.s_dbind)= make_cons(V75,(VV[6]->s.s_dbind));
	V76= Ct;
	(void)((VFUN_NARGS=3,(*(LnkLI90))((V75),(V70),Ct)));
	goto T162;
	goto T249;
T249:;
	if(!(((V81))==(VV[39]))){
	goto T261;}
	V77= Ct;
	goto T162;
	goto T261;
T261:;
	if(!(((V81))==(VV[40]))){
	goto T265;}
	V71= VV[41];
	goto T162;
	goto T265;
T265:;
	if(!(type_of((V81))==t_cons||((V81))==Cnil)){
	goto T269;}
	{object V91= (V71);
	if((V91!= VV[19]))goto T271;
	{object V92;
	base[8]= VV[42];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V92= vs_base[0];
	V93= list(2,VV[31],(V70));
	(void)((*(LnkLI92))((V92),/* INLINE-ARGS */V93,(V81),(V64),(V65),(V66)));
	base[8]= (V81);
	base[9]= (V92);
	base[10]= (V64);
	base[11]= (V65);
	base[12]= (V66);
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk88)();
	vs_top=sup;}
	V70= list(2,VV[18],(V70));
	V73= number_plus((V73),small_fixnum(1));
	V72= number_plus((V72),small_fixnum(1));
	goto T162;
	goto T271;
T271:;
	if((V91!= VV[35]))goto T286;
	if(!(((long)length((V81)))>(3))){
	goto T287;}
	base[8]= VV[43];
	base[9]= VV[44];
	base[10]= (V81);
	vs_top=(vs_base=base+8)+3;
	Lcerror();
	vs_top=sup;
	goto T287;
T287:;
	base[8]= CMPcar((V81));
	base[9]= CMPcadr((V81));
	base[10]= CMPcaddr((V81));
	base[11]= list(2,VV[45],list(2,VV[46],(V70)));
	base[12]= list(2,VV[31],(V70));
	base[13]= (V64);
	base[14]= (V65);
	base[15]= (V66);
	vs_top=(vs_base=base+8)+8;
	(void) (*Lnk93)();
	vs_top=sup;
	V70= list(2,VV[18],(V70));
	V72= number_plus((V72),small_fixnum(1));
	goto T162;
	goto T286;
T286:;
	if((V91!= VV[37]))goto T305;
	{object V94;
	object V95;
	object V96;
	object V97;
	V94= (type_of(CMPcar((V81)))==t_cons?Ct:Cnil);
	if(((V94))==Cnil){
	goto T309;}
	V95= CMPcadar((V81));
	goto T307;
	goto T309;
T309:;
	V95= CMPcar((V81));
	goto T307;
T307:;
	if(((V94))==Cnil){
	goto T313;}
	V96= CMPcaar((V81));
	goto T311;
	goto T313;
T313:;
	base[12]= (V95);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk94)();
	vs_top=sup;
	V96= vs_base[0];
	goto T311;
T311:;
	V97= CMPcaddr((V81));
	base[12]= (V95);
	base[13]= CMPcadr((V81));
	base[14]= (V97);
	base[15]= list(3,VV[47],list(2,VV[48],(V96)),(V75));
	base[16]= list(3,VV[49],list(2,VV[48],(V96)),(V75));
	base[17]= (V64);
	base[18]= (V65);
	base[19]= (V66);
	vs_top=(vs_base=base+12)+8;
	(void) (*Lnk93)();
	vs_top=sup;
	V74= make_cons(V96,(V74));
	goto T162;}
	goto T305;
T305:;
	if((V91!= VV[41]))goto T327;
	(void)((VFUN_NARGS=3,(*(LnkLI90))(CMPcar((V81)),CMPcadr((V81)),Cnil)));
	goto T162;
	goto T327;
T327:;
	goto T162;}
	goto T269;
T269:;
	if(!(type_of((V81))==t_symbol)){
	goto T329;}
	{object V99= (V71);
	if((V99!= VV[19]))goto T331;
	V73= number_plus((V73),small_fixnum(1));
	V72= number_plus((V72),small_fixnum(1));
	V100= list(2,VV[31],(V70));
	(void)((VFUN_NARGS=3,(*(LnkLI90))((V81),/* INLINE-ARGS */V100,Cnil)));
	V70= list(2,VV[18],(V70));
	goto T162;
	goto T331;
T331:;
	if((V99!= VV[35]))goto T338;
	V72= number_plus((V72),small_fixnum(1));
	V101= list(2,VV[31],(V70));
	V102= list(2,VV[45],list(2,VV[46],(V70)));
	(void)((VFUN_NARGS=4,(*(LnkLI90))((V81),/* INLINE-ARGS */V101,Cnil,/* INLINE-ARGS */V102)));
	V70= list(2,VV[18],(V70));
	goto T162;
	goto T338;
T338:;
	if((V99!= VV[37]))goto T343;
	{object V103;
	base[8]= (V81);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk94)();
	vs_top=sup;
	V103= vs_base[0];
	V104= list(3,VV[49],(V103),(V75));
	(void)((VFUN_NARGS=3,(*(LnkLI90))((V81),/* INLINE-ARGS */V104,Cnil)));
	V74= make_cons(V103,(V74));
	goto T162;}
	goto T343;
T343:;
	if((V99!= VV[41]))goto T348;
	(void)((VFUN_NARGS=3,(*(LnkLI90))((V81),Cnil,Cnil)));
	goto T162;
	goto T348;
T348:;
	goto T162;}
	goto T329;
T329:;
	base[8]= VV[50];
	base[9]= (V81);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	vs_top=sup;}
	goto T162;
T162:;
	V80= CMPcdr((V80));
	goto T152;}
	goto T150;
T150:;
	if(((V76))!=Cnil){
	goto T354;}
	{object V106;
	if(((V67))==Cnil){
	goto T360;}
	V107= list(2,VV[18],(V63));
	goto T358;
	goto T360;
T360:;
	V107= (V63);
	goto T358;
T358:;
	V108= list(2,VV[53],list(3,VV[54],VV[55],V107));
	if(((V76))!=Cnil){
	goto T364;}
	V109= make_cons((V72),Cnil);
	goto T362;
	goto T364;
T364:;
	V109= Cnil;
	goto T362;
T362:;
	V110= listA(4,VV[52],(V73),/* INLINE-ARGS */V108,V109);
	{object V112;
	if(((V67))==Cnil){
	goto T369;}
	V112= list(2,VV[18],(V63));
	goto T367;
	goto T369;
T369:;
	V112= (V63);
	goto T367;
T367:;
	if(!(((V66))==(VV[2]))){
	goto T372;}
	V113= list(2,VV[48],(V65));
	V114= list(2,VV[48],(V64));
	V115= list(2,VV[48],(V62));
	if(((V76))!=Cnil){
	goto T376;}
	V116= (V72);
	goto T374;
	goto T376;
T376:;
	V116= Cnil;
	goto T374;
T374:;
	V111= list(7,VV[56],/* INLINE-ARGS */V113,/* INLINE-ARGS */V114,(V112),/* INLINE-ARGS */V115,(V73),V116);
	goto T366;
	goto T372;
T372:;
	V117= list(2,VV[48],(V65));
	if(((V64))==Cnil){
	goto T380;}
	V118= list(2,VV[59],list(2,VV[48],(V64)));
	goto T378;
	goto T380;
T380:;
	V118= Cnil;
	goto T378;
T378:;
	V119= list(2,VV[48],(V62));
	if(((V76))!=Cnil){
	goto T384;}
	V120= list(2,VV[63],(V72));
	goto T382;
	goto T384;
T384:;
	V120= Cnil;
	goto T382;
T382:;
	V121= listA(7,VV[60],(V112),VV[61],/* INLINE-ARGS */V119,VV[62],(V73),V120);
	V111= listA(5,(V66),VV[57],VV[58],/* INLINE-ARGS */V117,append(V118,/* INLINE-ARGS */V121));}
	goto T366;
T366:;
	V106= list(3,VV[51],/* INLINE-ARGS */V110,V111);
	(VV[3]->s.s_dbind)= make_cons((V106),(VV[3]->s.s_dbind));}
	goto T354;
T354:;
	if(((V74))==Cnil){
	goto T387;}
	{object V122;
	object V123;
	base[8]= VV[64];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V122= vs_base[0];
	base[8]= VV[65];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V123= vs_base[0];
	{object V124;
	V125= list(2,(V122),(V123));
	V126= list(2,VV[48],(V74));
	V127= list(4,VV[67],(V75),/* INLINE-ARGS */V126,list(2,VV[48],(V77)));
	V128= list(2,VV[48],(V65));
	if(((V64))==Cnil){
	goto T397;}
	V129= list(2,VV[59],list(2,VV[48],(V64)));
	goto T395;
	goto T397;
T397:;
	V129= Cnil;
	goto T395;
T395:;
	V130= list(4,VV[70],(V122),VV[71],(V123));
	V124= list(4,VV[66],/* INLINE-ARGS */V125,/* INLINE-ARGS */V127,list(3,VV[68],(V122),listA(5,(V66),VV[69],VV[58],/* INLINE-ARGS */V128,append(V129,/* INLINE-ARGS */V130))));
	(VV[3]->s.s_dbind)= make_cons((V124),(VV[3]->s.s_dbind));}}
	goto T387;
T387:;
	base[8]= (V78);
	base[9]= (V73);
	if(((V76))!=Cnil){
	goto T404;}
	base[10]= (V72);
	goto T402;
	goto T404;
T404:;
	base[10]= Cnil;
	goto T402;
T402:;
	vs_top=(vs_base=base+8)+3;
	return;}
	}
}
/*	local entry for function PUSH-SUB-LIST-BINDING	*/

static object LI9(V137,V138,V139,V140,V141,V142)

object V137;object V138;object V139;object V140;object V141;object V142;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{register object V143;
	base[0]= VV[72];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V143= vs_base[0];
	{object V144;
	V145= list(2,(V143),(V138));
	V146= make_cons(/* INLINE-ARGS */V145,Cnil);
	V147= list(2,VV[75],(V143));
	V148= list(2,VV[48],(V141));
	if(((V140))==Cnil){
	goto T411;}
	V149= list(2,VV[59],list(2,VV[48],(V140)));
	goto T409;
	goto T411;
T411:;
	V149= Cnil;
	goto T409;
T409:;
	V150= list(4,VV[77],(V143),VV[61],list(2,VV[48],(V139)));
	V144= list(2,(V137),list(3,VV[73],/* INLINE-ARGS */V146,list(4,VV[74],/* INLINE-ARGS */V147,(V143),listA(5,(V142),VV[76],VV[58],/* INLINE-ARGS */V148,append(V149,/* INLINE-ARGS */V150)))));
	(VV[5]->s.s_dbind)= make_cons((V144),(VV[5]->s.s_dbind));
	{object V151 = (VV[5]->s.s_dbind);
	VMR9(V151)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PUSH-LET-BINDING	*/

static object LI10(object V154,object V153,object V152,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V155;
	object V156;
	object V157;
	object V158;
	object V159;
	va_start(ap,first);
	V155= V154;
	V156= V153;
	V157= V152;
	narg = narg - 3;
	if (narg <= 0) goto T414;
	else {
	V158= first;}
	if (--narg <= 0) goto T415;
	else {
	V159= va_arg(ap,object);}
	--narg; goto T416;
	goto T414;
T414:;
	V158= Cnil;
	goto T415;
T415:;
	V159= (VV[1]->s.s_dbind);
	goto T416;
T416:;
	{object V160;
	if(((V158))==Cnil){
	goto T421;}
	V160= list(2,(V155),list(4,VV[74],(V158),(V156),(V159)));
	goto T419;
	goto T421;
T421:;
	V160= list(2,(V155),(V156));
	goto T419;
T419:;
	if(((V157))==Cnil){
	goto T424;}
	(VV[5]->s.s_dbind)= make_cons(V160,(VV[5]->s.s_dbind));
	{object V162 = (VV[5]->s.s_dbind);
	VMR10(V162)}
	goto T424;
T424:;
	(VV[4]->s.s_dbind)= make_cons(V160,(VV[4]->s.s_dbind));
	{object V164 = (VV[4]->s.s_dbind);
	VMR10(V164)}}
	va_end(ap);
	return Cnil;}
	}
/*	function definition for PUSH-OPTIONAL-BINDING	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{register object V165;
	object V166;
	register object V167;
	object V168;
	object V169;
	object V170;
	object V171;
	object V172;
	V165=(base[0]);
	V166=(base[1]);
	V167=(base[2]);
	V168=(base[3]);
	V169=(base[4]);
	V170=(base[5]);
	V171=(base[6]);
	V172=(base[7]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V167))!=Cnil){
	goto T428;}
	base[8]= VV[78];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V167= vs_base[0];
	goto T428;
T428:;
	(void)((VFUN_NARGS=3,(*(LnkLI90))((V167),(V168),Ct)));
	if(!(type_of((V165))==t_cons)){
	goto T435;}
	{object V173;
	base[8]= VV[79];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V173= vs_base[0];
	V174= list(4,VV[74],(V167),(V169),(V166));
	(void)((*(LnkLI92))((V173),/* INLINE-ARGS */V174,(V165),(V170),(V171),(V172)));
	base[8]= (V165);
	base[9]= (V173);
	base[10]= (V170);
	base[11]= (V171);
	base[12]= (V172);
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk88)();
	return;}
	goto T435;
T435:;
	if(!(type_of((V165))==t_symbol)){
	goto T446;}
	base[8]= (VFUN_NARGS=5,(*(LnkLI90))((V165),(V169),Cnil,(V167),(V166)));
	vs_top=(vs_base=base+8)+1;
	return;
	goto T446;
T446:;
	base[8]= VV[80];
	base[9]= (V165);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	return;
	}
}
/*	function definition for PARSE-BODY	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{object V175;
	object V176;
	register object V177;
	V175=(base[0]);
	V176=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T450;}
	V177=(base[2]);
	vs_top=sup;
	goto T451;
	goto T450;
T450:;
	V177= Ct;
	goto T451;
T451:;
	{register object V178;
	register object V179;
	V178= Cnil;
	V179= Cnil;
	{register object V180;
	V180= (V175);
	goto T454;
T454:;
	if(!(((V180))==Cnil)){
	goto T455;}
	base[3]= (V180);
	base[4]= nreverse((V178));
	base[5]= (V179);
	vs_top=(vs_base=base+3)+3;
	return;
	goto T455;
T455:;
	{register object V181;
	V181= CMPcar((V180));
	if(!(type_of((V181))==t_string)){
	goto T465;}
	if((CMPcdr((V180)))==Cnil){
	goto T465;}
	if(((V177))==Cnil){
	goto T470;}
	V179= (V181);
	V177= Cnil;
	goto T462;
	goto T470;
T470:;
	base[3]= (V180);
	base[4]= nreverse((V178));
	base[5]= (V179);
	vs_top=(vs_base=base+3)+3;
	return;
	goto T465;
T465:;
	if(!(type_of((V181))==t_cons)){
	goto T478;}
	if(type_of(CMPcar((V181)))==t_symbol){
	goto T479;}
	goto T478;
T478:;
	base[3]= (V180);
	base[4]= nreverse((V178));
	base[5]= (V179);
	vs_top=(vs_base=base+3)+3;
	return;
	goto T479;
T479:;
	if(!((CMPcar((V181)))==(VV[8]))){
	goto T487;}
	{register object V182;
	V182= (V181);
	V178= make_cons((V182),(V178));
	goto T462;}
	goto T487;
T487:;
	base[3]= (V180);
	base[4]= nreverse((V178));
	base[5]= (V179);
	vs_top=(vs_base=base+3)+3;
	return;}
	goto T462;
T462:;
	V180= CMPcdr((V180));
	goto T454;}}
	}
}
/*	macro definition for DESTRUCTURING-BIND	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	vs_top=sup;
	{object V183=base[0]->c.c_cdr;
	base[2]= (V183->c.c_car);
	V183=V183->c.c_cdr;
	base[3]= (V183->c.c_car);
	V183=V183->c.c_cdr;
	base[4]= V183;}
	{object V184;
	base[6]= VV[81];
	vs_top=(vs_base=base+6)+1;
	Lgensym();
	vs_top=sup;
	V184= vs_base[0];
	{object V185;
	object V186;
	base[6]= base[2];
	base[7]= (V184);
	base[8]= base[4];
	base[9]= Cnil;
	base[10]= VV[82];
	base[11]= VV[83];
	base[12]= Ct;
	base[13]= VV[84];
	base[14]= Cnil;
	vs_top=(vs_base=base+6)+9;
	(void) (*Lnk95)();
	if(vs_base>=vs_top){vs_top=sup;goto T509;}
	V185= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T510;}
	V186= vs_base[0];
	vs_top=sup;
	goto T511;
	goto T509;
T509:;
	V185= Cnil;
	goto T510;
T510:;
	V186= Cnil;
	goto T511;
T511:;
	V187= list(2,(V184),base[3]);
	V188= make_cons(/* INLINE-ARGS */V187,Cnil);
	V189= make_cons((V185),Cnil);
	base[6]= listA(3,VV[73],/* INLINE-ARGS */V188,append((V186),/* INLINE-ARGS */V189));
	vs_top=(vs_base=base+6)+1;
	return;}}
}
static void LnkT95(){ call_or_link(VV[95],(void **)(void *)&Lnk95);} /* PARSE-DEFMACRO */
static void LnkT94(){ call_or_link(VV[94],(void **)(void *)&Lnk94);} /* MAKE-KEYWORD */
static void LnkT93(){ call_or_link(VV[93],(void **)(void *)&Lnk93);} /* PUSH-OPTIONAL-BINDING */
static object  LnkTLI92(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[92],(void **)(void *)&LnkLI92,6,first,ap);va_end(ap);return V1;} /* PUSH-SUB-LIST-BINDING */
static void LnkT91(){ call_or_link(VV[91],(void **)(void *)&Lnk91);} /* DEFMACRO-ERROR */
static object  LnkTLI90(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[90],(void **)(void *)&LnkLI90,first,ap);va_end(ap);return V1;} /* PUSH-LET-BINDING */
static object  LnkTLI49(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[49],(void **)(void *)&LnkLI49,2,first,ap);va_end(ap);return V1;} /* LOOKUP-KEYWORD */
static void LnkT89(){ call_or_link(VV[89],(void **)(void *)&Lnk89);} /* SPECIFIC-ERROR */
static void LnkT88(){ call_or_link(VV[88],(void **)(void *)&Lnk88);} /* PARSE-DEFMACRO-LAMBDA-LIST */
static void LnkT30(){ call_or_link(VV[30],(void **)(void *)&Lnk30);} /* PARSE-BODY */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

