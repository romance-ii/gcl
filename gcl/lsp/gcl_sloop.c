
#include "cmpinclude.h"
#include "gcl_sloop.h"
void init_gcl_sloop(){do_init(VV);}
/*	macro definition for LCASE	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	base[3]= V1;}
	{register object V2;
	register object V3;
	register object V4;
	V2= Cnil;
	V3= Cnil;
	V4= Cnil;
	{register object V5;
	register object V6;
	V5= base[3];
	V6= Cnil;
	goto T3;
T3:;
	if(((V3))!=Cnil){
	goto T5;}
	if(((V5))!=Cnil){
	goto T4;}
	goto T5;
T5:;
	goto T1;
	goto T4;
T4:;
	V6= CMPcar((V5));
	{register object V7;
	if(!(eql(CMPcar((V6)),Ct))){
	goto T15;}
	V3= Ct;
	V7= (V6);
	goto T13;
	goto T15;
T15:;
	if(!(eql(CMPcar((V6)),VV[0]))){
	goto T20;}
	V7= make_cons(VV[1],CMPcdr((V6)));
	goto T13;
	goto T20;
T20:;
	if(!(eql(CMPcar((V6)),VV[2]))){
	goto T23;}
	V7= make_cons(VV[3],CMPcdr((V6)));
	goto T13;
	goto T23;
T23:;
	{register object x= CMPcar((V6)),V8= VV[4];
	while(V8!=Cnil)
	if(eql(x,V8->c.c_car)){
	V4= V8;
	goto T28;
	}else V8=V8->c.c_cdr;
	V4= Cnil;}
	goto T28;
T28:;
	if(((V4))==Cnil){
	goto T26;}
	V9= list(3,VV[5],VV[6],list(3,VV[7],VV[8],list(2,VV[9],CMPcar((V4)))));
	V7= make_cons(/* INLINE-ARGS */V9,CMPcdr((V6)));
	goto T13;
	goto T26;
T26:;
	V10= list(3,VV[10],VV[8],list(2,VV[9],CMPcar((V6))));
	V7= make_cons(/* INLINE-ARGS */V10,CMPcdr((V6)));
	goto T13;
T13:;
	V2= make_cons((V7),(V2));}
	V5= CMPcdr((V5));
	goto T3;}
	goto T1;
T1:;
	if((V3)!=Cnil){
	goto T33;}
	V2= make_cons(VV[11],(V2));
	goto T33;
T33:;
	V12= list(2,VV[8],list(2,VV[13],base[2]));
	V13= make_cons(/* INLINE-ARGS */V12,Cnil);
	V14= nreverse((V2));
	base[4]= list(3,VV[12],/* INLINE-ARGS */V13,make_cons(VV[14],/* INLINE-ARGS */V14));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	local entry for function DESETQ1	*/

static object LI2(V17,V18)

register object V17;register object V18;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(!(type_of((V17))==t_symbol)){
	goto T36;}
	if((V17)==Cnil){
	{object V19 = Cnil;
	VMR2(V19)}}
	{object V20 = list(3,VV[15],(V17),(V18));
	VMR2(V20)}
	goto T36;
T36:;
	if(!(type_of((V17))==t_cons)){
	goto T39;}
	V21= CMPcar((V17));
	V22= list(2,VV[17],(V18));
	V23= (*(LnkLI246))(/* INLINE-ARGS */V21,/* INLINE-ARGS */V22);
	if(!(type_of(CMPcdr((V17)))==t_cons)){
	goto T43;}
	V25= CMPcdr((V17));
	V26= list(2,VV[18],(V18));
	V27= (*(LnkLI246))(/* INLINE-ARGS */V25,/* INLINE-ARGS */V26);
	V24= make_cons(/* INLINE-ARGS */V27,Cnil);
	goto T41;
	goto T43;
T43:;
	if((CMPcdr((V17)))!=Cnil){
	goto T45;}
	V24= Cnil;
	goto T41;
	goto T45;
T45:;
	V28= CMPcdr((V17));
	V29= list(3,VV[15],/* INLINE-ARGS */V28,list(2,VV[18],(V18)));
	V24= make_cons(/* INLINE-ARGS */V29,Cnil);
	goto T41;
T41:;
	{object V30 = listA(3,VV[16],/* INLINE-ARGS */V23,V24);
	VMR2(V30)}
	goto T39;
T39:;
	base[0]= VV[19];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V31 = vs_base[0];
	VMR2(V31)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for DESETQ	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	vs_top=sup;
	{object V32=base[0]->c.c_cdr;
	base[2]= (V32->c.c_car);
	V32=V32->c.c_cdr;
	base[3]= (V32->c.c_car);}
	if(!(type_of(base[3])!=t_cons)){
	goto T49;}
	base[4]= (*(LnkLI246))(base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T49;
T49:;
	{object V33;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V33= vs_base[0];
	V34= list(2,(V33),base[3]);
	V35= make_cons(/* INLINE-ARGS */V34,Cnil);
	base[4]= list(3,VV[12],/* INLINE-ARGS */V35,(*(LnkLI246))(base[2],(V33)));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for LOOP-RETURN	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	vs_top=sup;
	{object V36=base[0]->c.c_cdr;
	base[2]= V36;}
	if(!(((long)length(base[2]))<=(1))){
	goto T53;}
	base[3]= make_cons(VV[20],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T53;
T53:;
	base[3]= list(2,VV[20],make_cons(VV[21],base[2]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for LOOP-FINISH	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	vs_top=sup;
	base[2]= VV[22];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	macro definition for LOCAL-FINISH	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	vs_top=sup;
	base[2]= VV[23];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	macro definition for SLOOP	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	vs_top=sup;
	{object V39=base[0]->c.c_cdr;
	base[2]= V39;}
	base[3]= (*(LnkLI247))(base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for DEF-LOOP-MAP	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	vs_top=sup;
	{object V40=base[0]->c.c_cdr;
	base[2]= (V40->c.c_car);
	V40=V40->c.c_cdr;
	base[3]= (V40->c.c_car);
	V40=V40->c.c_cdr;
	base[4]= V40;}
	base[5]= (VFUN_NARGS=4,(*(LnkLI248))(base[2],base[3],base[4],VV[24]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for DEF-LOOP-FOR	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	vs_top=sup;
	{object V41=base[0]->c.c_cdr;
	base[2]= (V41->c.c_car);
	V41=V41->c.c_cdr;
	base[3]= (V41->c.c_car);
	V41=V41->c.c_cdr;
	base[4]= V41;}
	base[5]= (VFUN_NARGS=6,(*(LnkLI248))(base[2],base[3],base[4],VV[25],Cnil,small_fixnum(1)));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for DEF-LOOP-MACRO	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	vs_top=sup;
	{object V42=base[0]->c.c_cdr;
	base[2]= (V42->c.c_car);
	V42=V42->c.c_cdr;
	base[3]= (V42->c.c_car);
	V42=V42->c.c_cdr;
	base[4]= V42;}
	base[5]= (VFUN_NARGS=4,(*(LnkLI248))(base[2],base[3],base[4],VV[26]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for DEF-LOOP-COLLECT	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	vs_top=sup;
	{object V43=base[0]->c.c_cdr;
	base[2]= (V43->c.c_car);
	V43=V43->c.c_cdr;
	base[3]= (V43->c.c_car);
	V43=V43->c.c_cdr;
	base[4]= V43;}
	base[5]= (VFUN_NARGS=7,(*(LnkLI248))(base[2],base[3],base[4],VV[27],VV[28],small_fixnum(2),small_fixnum(2)));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for SLOOP-SWAP	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	vs_top=sup;
	base[2]= VV[29];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function L-EQUAL	*/

static object LI13(V47,V48)

object V47;register object V48;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	if(type_of((V47))==t_symbol){
	goto T55;}
	{object V49 = Cnil;
	VMR13(V49)}
	goto T55;
T55:;
	if(!(type_of((V48))==t_symbol)){
	goto T58;}
	V50= symbol_name((V47));
	V51= symbol_name((V48));
	{object V52 = (equal(/* INLINE-ARGS */V50,/* INLINE-ARGS */V51)?Ct:Cnil);
	VMR13(V52)}
	goto T58;
T58:;
	if(!(type_of((V48))==t_cons||((V48))==Cnil)){
	goto T61;}
	base[0]= (V47);
	base[1]= (V48);
	base[2]= VV[30];
	base[3]= VV[10];
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	{object V53 = vs_base[0];
	VMR13(V53)}
	goto T61;
T61:;
	{object V54 = Cnil;
	VMR13(V54)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-COLLECT-KEYWORD-P	*/

static object LI14(V56)

object V56;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;{object V57;
	base[0]= (V56);
	base[1]= VV[31];
	base[2]= VV[30];
	base[3]= VV[10];
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	V57= vs_base[0];
	if(V57==Cnil)goto T67;
	{object V58 = V57;
	VMR14(V58)}
	goto T67;
T67:;}
	{object V59 = (VFUN_NARGS=4,(*(LnkLI249))((V56),(VV[28]->s.s_dbind),VV[30],VV[10]));
	VMR14(V59)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TRANSLATE-NAME	*/

static object LI15(V61)

object V61;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V62;
	if(type_of((V61))==t_symbol){
	goto T74;}
	V62= Cnil;
	goto T73;
	goto T74;
T74:;
	base[0]= (V61);
	base[1]= (VV[32]->s.s_dbind);
	base[2]= VV[30];
	base[3]= VV[10];
	base[4]= VV[33];
	base[5]= VV[17];
	vs_top=(vs_base=base+0)+6;
	Lmember();
	vs_top=sup;
	V63= vs_base[0];
	V62= CMPcdar(V63);
	goto T73;
T73:;
	if(((V62))==Cnil){
	goto T84;}
	{object V64 = (V62);
	VMR15(V64)}
	goto T84;
T84:;
	{object V65 = (V61);
	VMR15(V65)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-POP	*/

static object LI16()

{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T87;}
	{object V66;
	V66= CMPcar((VV[34]->s.s_dbind));
	(VV[34]->s.s_dbind)= CMPcdr((VV[34]->s.s_dbind));
	(VV[35]->s.s_dbind)= (V66);}
	{object V67 = (VV[35]->s.s_dbind);
	VMR16(V67)}
	goto T87;
T87:;
	(VV[35]->s.s_dbind)= VV[36];
	{object V68 = Cnil;
	VMR16(V68)}
	return Cnil;
}
/*	local entry for function LOOP-UN-POP	*/

static object LI17()

{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V69= (VV[35]->s.s_dbind);
	if((V69!= VV[36]))goto T95;
	{object V70 = Cnil;
	VMR17(V70)}
	goto T95;
T95:;
	if((V69!= VV[250]))goto T96;
	base[0]= VV[37];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V71 = vs_base[0];
	VMR17(V71)}
	goto T96;
T96:;
	{object V72;
	V72= (VV[35]->s.s_dbind);
	(VV[34]->s.s_dbind)= make_cons((V72),(VV[34]->s.s_dbind));}
	(VV[35]->s.s_dbind)= VV[38];
	{object V73 = VV[38];
	VMR17(V73)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-PEEK	*/

static object LI18()

{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V74 = CMPcar((VV[34]->s.s_dbind));
	VMR18(V74)}
	return Cnil;
}
/*	local entry for function LOOP-LET-BINDINGS	*/

static object LI19(V76)

register object V76;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{register object V77;
	V77= CMPcar((V76));
	goto T104;
T104:;
	if(((V77))!=Cnil){
	goto T105;}
	{object V78 = nreverse(CMPcar((V76)));
	VMR19(V78)}
	goto T105;
T105:;{object V79;
	V79= CMPcdar((V77));
	if(V79==Cnil)goto T110;
	goto T109;
	goto T110;
T110:;}
	{register object V80;
	register object V81;
	V80= (V77);
	V81= CMPcaar((V77));
	((V80))->c.c_car = (V81);}
	goto T109;
T109:;
	V77= CMPcdr((V77));
	goto T104;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-LOOP	*/

static object LI20(V83)

object V83;
{	 VMB20 VMS20 VMV20
	bds_check;
	goto TTL;
TTL:;
	{register object V84;
	V84= Cnil;
	{register object V85;
	register object V86;
	bds_bind(VV[34],(V83));
	bds_bind(VV[54],(VV[54]->s.s_dbind));
	bds_bind(VV[35],Cnil);
	bds_bind(VV[53],Cnil);
	bds_bind(VV[49],Cnil);
	bds_bind(VV[51],Cnil);
	bds_bind(VV[48],Cnil);
	bds_bind(VV[50],Cnil);
	bds_bind(VV[43],Cnil);
	bds_bind(VV[42],Cnil);
	bds_bind(VV[52],Cnil);
	bds_bind(VV[44],Cnil);
	bds_bind(VV[45],Cnil);
	bds_bind(VV[47],Cnil);
	bds_bind(VV[41],Cnil);
	bds_bind(VV[46],Cnil);
	bds_bind(VV[40],Cnil);
	bds_bind(VV[39],Cnil);
	V85= Cnil;
	V86= VV[55];
	if(!(type_of(CMPcar((VV[34]->s.s_dbind)))==t_symbol)){
	goto T120;}
	if((CMPcar((VV[34]->s.s_dbind)))!=Cnil){
	goto T119;}
	goto T120;
T120:;
	(VV[34]->s.s_dbind)= make_cons(VV[56],(VV[34]->s.s_dbind));
	goto T119;
T119:;
	(void)((*(LnkLI251))());
	if(((VV[53]->s.s_dbind))!=Cnil){
	goto T127;}
	if(((VV[40]->s.s_dbind))==Cnil){
	goto T126;}
	goto T127;
T127:;
	if((VV[51]->s.s_dbind)!=Cnil){
	goto T131;}
	base[18]= VV[57];
	vs_top=(vs_base=base+18)+1;
	Lgensym();
	vs_top=sup;
	(VV[51]->s.s_dbind)= vs_base[0];
	goto T131;
T131:;
	if(eql(VV[55],(V86))){
	goto T134;}
	goto T126;
	goto T134;
T134:;
	base[18]= VV[58];
	vs_top=(vs_base=base+18)+1;
	Lgensym();
	vs_top=sup;
	V86= vs_base[0];
	goto T126;
T126:;
	{object V88;
	V88= list(3,VV[59],VV[60],list(4,VV[61],VV[62],list(2,VV[9],(VV[51]->s.s_dbind)),VV[63]));
	V85= make_cons((V88),(V85));}
	{object V89;
	V89= list(3,VV[64],Cnil,list(3,VV[61],VV[65],list(2,VV[9],(V86))));
	V85= make_cons((V89),(V85));}
	{object V90;
	V90= list(3,VV[66],Cnil,list(3,VV[61],VV[67],list(2,VV[9],(V86))));
	V85= make_cons((V90),(V85));}
	if((VV[45]->s.s_dbind)==Cnil){
	goto T147;}
	{object V91;
	V91= list(3,VV[68],(VV[51]->s.s_dbind),(VV[45]->s.s_dbind));
	(VV[43]->s.s_dbind)= make_cons((V91),(VV[43]->s.s_dbind));}
	goto T147;
T147:;
	base[18]= (VV[41]->s.s_dbind);
	base[19]= nreverse((VV[49]->s.s_dbind));
	base[20]= nreverse((VV[42]->s.s_dbind));
	vs_top=(vs_base=base+18)+3;
	Lappend();
	vs_top=sup;
	V84= vs_base[0];
	if(((VV[53]->s.s_dbind))==Cnil){
	goto T157;}
	V84= (*(LnkLI252))((V84));
	goto T155;
	goto T157;
T157:;
	V92= append((V84),VV[70]);
	V84= make_cons(VV[69],/* INLINE-ARGS */V92);
	goto T155;
T155:;
	{register object V93;{object V94;
	V94= (VV[51]->s.s_dbind);
	base[18]= nreverse((VV[48]->s.s_dbind));
	base[19]= (V84);
	base[20]= make_cons((V86),Cnil);
	base[21]= nreverse((VV[43]->s.s_dbind));
	base[22]= VV[74];
	vs_top=(vs_base=base+18)+5;
	Lappend();
	vs_top=sup;
	V95= vs_base[0];
	V93= list(3,VV[71],(V85),list(3,VV[72],V94,make_cons(VV[73],V95)));}
	if(eql((VV[75]->s.s_dbind),(VV[76]->s.s_dbind))){
	goto T168;}
	base[18]= (V93);
	vs_top=(vs_base=base+18)+1;
	Lcopy_tree();
	vs_top=sup;
	V93= vs_base[0];
	goto T168;
T168:;
	{register object V96;
	register object V97;
	V96= (VV[46]->s.s_dbind);
	V97= CMPcar((V96));
	goto T177;
T177:;
	if(!(((V96))==Cnil)){
	goto T178;}
	goto T173;
	goto T178;
T178:;
	V98= (*(LnkLI253))((V97));
	if((CMPcdr((V97)))!=Cnil){
	goto T185;}
	V99= Cnil;
	goto T184;
	goto T185;
T185:;
	V100= make_cons(VV[77],CMPcdr((V97)));
	V99= make_cons(/* INLINE-ARGS */V100,Cnil);
	goto T184;
T184:;
	V101= make_cons((V93),Cnil);
	V93= listA(3,VV[12],/* INLINE-ARGS */V98,append(V99,/* INLINE-ARGS */V101));
	V96= CMPcdr((V96));
	V97= CMPcar((V96));
	goto T177;}
	goto T173;
T173:;
	{object V102 = (V93);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR20(V102)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-LOOP1	*/

static object LI21()

{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{object V103;
	V104= (*(LnkLI254))();
	V103= (*(LnkLI13))(/* INLINE-ARGS */V104);
	if(((*(LnkLI10))((V103),VV[78]))==Cnil){
	goto T192;}
	(void)((*(LnkLI255))());
	(VV[51]->s.s_dbind)= (*(LnkLI255))();}
	goto T192;
T192:;
	{register object V105;
	V105= (*(LnkLI255))();
	goto T200;
T200:;
	if(((V105))!=Cnil){
	goto T201;}
	if(((VV[34]->s.s_dbind))!=Cnil){
	goto T201;}
	{object V106 = Cnil;
	VMR21(V106)}
	goto T201;
T201:;
	{register object V107;
	V107= (*(LnkLI13))((V105));
	{register object V108;
	V108= (*(LnkLI256))((V107));
	if(((V108))==Cnil){
	goto T211;}
	goto T207;
	goto T211;
T211:;
	if(((*(LnkLI10))((V107),VV[25]))==Cnil){
	goto T214;}
	(void)((*(LnkLI257))());
	goto T207;
	goto T214;
T214:;
	if(((*(LnkLI10))((V107),VV[79]))==Cnil){
	goto T217;}
	{register object V109;
	V110= (*(LnkLI255))();
	V109= list(3,VV[80],/* INLINE-ARGS */V110,VV[81]);
	(VV[49]->s.s_dbind)= make_cons((V109),(VV[49]->s.s_dbind));
	goto T207;}
	goto T217;
T217:;
	if(((*(LnkLI10))((V107),VV[82]))==Cnil){
	goto T222;}
	{register object V111;
	V112= (*(LnkLI255))();
	V111= list(3,VV[5],/* INLINE-ARGS */V112,VV[83]);
	(VV[49]->s.s_dbind)= make_cons((V111),(VV[49]->s.s_dbind));
	goto T207;}
	goto T222;
T222:;
	if(((*(LnkLI10))((V107),VV[56]))==Cnil){
	goto T227;}
	V113= (*(LnkLI258))();
	(VV[49]->s.s_dbind)= append(/* INLINE-ARGS */V113,(VV[49]->s.s_dbind));
	goto T207;
	goto T227;
T227:;
	if(((*(LnkLI10))((V107),VV[84]))==Cnil){
	goto T231;}
	V114= (*(LnkLI259))();
	(VV[49]->s.s_dbind)= append(/* INLINE-ARGS */V114,(VV[49]->s.s_dbind));
	goto T207;
	goto T231;
T231:;
	if(((*(LnkLI260))((V107)))==Cnil){
	goto T235;}
	V115= (*(LnkLI261))();
	(VV[49]->s.s_dbind)= append(/* INLINE-ARGS */V115,(VV[49]->s.s_dbind));
	goto T207;
	goto T235;
T235:;
	base[0]= VV[85];
	base[1]= (V107);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}}
	goto T207;
T207:;
	V105= (*(LnkLI255))();
	goto T200;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-NO-BODY	*/

static object LI22(V117)

object V117;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{register object V118;
	register object V119;
	V118= Ct;
	V119= Ct;
	{register object V120;
	V120= (V117);
	goto T247;
T247:;
	if(((V119))!=Cnil){
	goto T248;}
	if(((VV[34]->s.s_dbind))!=Cnil){
	goto T248;}
	goto T245;
	goto T248;
T248:;
	{register object V121;
	V121= (*(LnkLI13))((V120));
	if(((*(LnkLI10))((V121),VV[86]))==Cnil){
	goto T257;}
	(void)((*(LnkLI262))((V120)));
	goto T254;
	goto T257;
T257:;
	if(((*(LnkLI10))((V121),Cnil))==Cnil){
	goto T260;}
	goto T254;
	goto T260;
T260:;
	if(((*(LnkLI10))((V121),VV[87]))==Cnil){
	goto T263;}
	(void)((VFUN_NARGS=0,(*(LnkLI263))()));
	goto T254;
	goto T263;
T263:;
	if(((*(LnkLI10))((V121),VV[77]))==Cnil){
	goto T266;}
	V122= (*(LnkLI255))();
	(void)((VFUN_NARGS=2,(*(LnkLI264))(/* INLINE-ARGS */V122,Ct)));
	goto T254;
	goto T266;
T266:;
	if(((*(LnkLI10))((V121),VV[88]))==Cnil){
	goto T269;}
	(VV[47]->s.s_dbind)= (*(LnkLI255))();
	goto T254;
	goto T269;
T269:;
	if(((*(LnkLI10))((V121),VV[89]))==Cnil){
	goto T273;}
	V123= (*(LnkLI258))();
	(VV[42]->s.s_dbind)= append(/* INLINE-ARGS */V123,(VV[42]->s.s_dbind));
	goto T254;
	goto T273;
T273:;
	if(((*(LnkLI10))((V121),VV[90]))==Cnil){
	goto T277;}
	V124= (*(LnkLI258))();
	(VV[41]->s.s_dbind)= append(/* INLINE-ARGS */V124,(VV[41]->s.s_dbind));
	goto T254;
	goto T277;
T277:;
	if(((*(LnkLI10))((V121),VV[91]))==Cnil){
	goto T281;}
	(void)((VFUN_NARGS=2,(*(LnkLI263))(Cnil,Ct)));
	goto T254;
	goto T281;
T281:;
	if(!(type_of((V121))==t_symbol)){
	goto T284;}
	{object V125 =((V121))->s.s_plist;
	 object ind= VV[92];
	while(V125!=Cnil){
	if(V125->c.c_car==ind){
	if(((V125->c.c_cdr->c.c_car))==Cnil){
	goto T284;}
	goto T287;
	}else V125=V125->c.c_cdr->c.c_cdr;}
	goto T284;}
	goto T287;
T287:;
	(void)((VFUN_NARGS=2,(*(LnkLI265))((V120),VV[92])));
	goto T254;
	goto T284;
T284:;
	if(((V119))==Cnil){
	goto T290;}
	V118= Cnil;
	goto T288;
	goto T290;
T290:;
	(void)((*(LnkLI266))());
	goto T288;
T288:;
	goto T245;}
	goto T254;
T254:;
	V119= Cnil;
	V120= (*(LnkLI255))();
	goto T247;}
	goto T245;
T245:;
	{object V126 = (V118);
	VMR22(V126)}}
	return Cnil;
}
/*	local entry for function PARSE-LOOP-WITH	*/

static object LI23(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{object V127;
	object V128;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T298;
	else {
	V127= first;}
	if (--narg <= 0) goto T299;
	else {
	V128= va_arg(ap,object);}
	--narg; goto T300;
	goto T298;
T298:;
	V127= Cnil;
	goto T299;
T299:;
	V128= Cnil;
	goto T300;
T300:;
	{register object V129;
	V129= (*(LnkLI255))();
	{object V130;
	V131= (*(LnkLI254))();
	V130= (*(LnkLI13))(/* INLINE-ARGS */V131);
	if(((*(LnkLI10))((V130),VV[94]))==Cnil){
	goto T307;}
	(void)((*(LnkLI255))());
	if(!(type_of((V129))==t_symbol)){
	goto T311;}
	goto T310;
	goto T311;
T311:;
	base[0]= VV[95];
	base[1]= (V129);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T310;
T310:;
	V132= (*(LnkLI255))();
	(void)((VFUN_NARGS=7,(*(LnkLI267))((V129),/* INLINE-ARGS */V132,(((V127))==Cnil?Ct:Cnil),Cnil,Cnil,Ct,(V128))));
	goto T304;
	goto T307;
T307:;
	(void)((VFUN_NARGS=5,(*(LnkLI268))((V129),Cnil,Cnil,(((V127))==Cnil?Ct:Cnil),(V128))));}
	goto T304;
T304:;
	{object V133;
	V134= (*(LnkLI254))();
	V133= (*(LnkLI13))(/* INLINE-ARGS */V134);
	if(((*(LnkLI10))((V133),VV[5]))==Cnil){
	goto T317;}
	(void)((*(LnkLI255))());
	{object V135;
	V136= (*(LnkLI255))();
	V135= (*(LnkLI13))(/* INLINE-ARGS */V136);
	if(((*(LnkLI10))((V135),VV[87]))==Cnil){
	goto T322;}
	{object V137 = (VFUN_NARGS=1,(*(LnkLI263))(Ct));
	VMR23(V137)}
	goto T322;
T322:;
	if(((*(LnkLI10))((V135),VV[91]))==Cnil){
	goto T325;}
	{object V138 = (VFUN_NARGS=2,(*(LnkLI263))(Ct,Ct));
	VMR23(V138)}
	goto T325;
T325:;
	(void)((*(LnkLI266))());
	{object V139 = (VFUN_NARGS=1,(*(LnkLI263))(Ct));
	VMR23(V139)}}
	goto T317;
T317:;
	{object V140 = Cnil;
	VMR23(V140)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function PARSE-LOOP-DO	*/

static object LI24()

{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{register object V141;
	V141= Cnil;
	{register object V142;
	V142= (*(LnkLI255))();
	goto T332;
T332:;
	if(!(type_of((V142))==t_cons||((V142))==Cnil)){
	goto T337;}
	{register object V143;
	V143= (V142);
	V141= make_cons((V143),(V141));}
	if((VV[34]->s.s_dbind)!=Cnil){
	goto T335;}
	goto T329;
	goto T337;
T337:;
	(void)((*(LnkLI266))());
	goto T329;
	goto T335;
T335:;
	V142= (*(LnkLI255))();
	goto T332;}
	goto T329;
T329:;
	if((V141)!=Cnil){
	goto T346;}
	base[0]= VV[96];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T346;
T346:;
	{object V144 = (V141);
	VMR24(V144)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-LOOP-INITIALLY	*/

static object LI25(V146)

object V146;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{object V147;
	V147= (*(LnkLI13))((V146));
	if(((*(LnkLI10))((V147),VV[97]))==Cnil){
	goto T350;}
	{object V148;
	V148= (*(LnkLI258))();
	{register object V149;
	register object V150;
	V149= nreverse((V148));
	V150= CMPcar((V149));
	goto T356;
T356:;
	if(!(((V149))==Cnil)){
	goto T357;}
	{object V151 = Cnil;
	VMR25(V151)}
	goto T357;
T357:;
	{register object V152;
	if(type_of((V150))==t_cons||((V150))==Cnil){
	goto T363;}
	V152= Cnil;
	goto T362;
	goto T363;
T363:;
	{register object x= CMPcar((V150)),V153= VV[98];
	while(V153!=Cnil)
	if(eql(x,V153->c.c_car)){
	goto T365;
	}else V153=V153->c.c_cdr;}
	V152= Cnil;
	goto T362;
	goto T365;
T365:;
	if(((long)length((V150)))==(3)){
	goto T367;}
	V152= Cnil;
	goto T362;
	goto T367;
T367:;
	if(type_of(CMPcadr((V150)))==t_symbol){
	goto T369;}
	V152= Cnil;
	goto T362;
	goto T369;
T369:;
	base[2]= CMPcaddr((V150));
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T371;}
	V152= Cnil;
	goto T362;
	goto T371;
T371:;
	{register object x= CMPcadr((V150)),V154= CMPcaar((VV[46]->s.s_dbind));
	while(V154!=Cnil)
	if(eql(x,V154->c.c_car->c.c_car) &&V154->c.c_car != Cnil){
	goto T374;
	}else V154=V154->c.c_cdr;}
	V152= Cnil;
	goto T362;
	goto T374;
T374:;
	V152= (VFUN_NARGS=7,(*(LnkLI267))(CMPcadr((V150)),CMPcaddr((V150)),Cnil,Cnil,Cnil,Ct,Ct));
	goto T362;
T362:;
	if(((V152))==Cnil){
	goto T377;}
	goto T361;
	goto T377;
T377:;
	(VV[48]->s.s_dbind)= make_cons((V150),(VV[48]->s.s_dbind));}
	goto T361;
T361:;
	V149= CMPcdr((V149));
	V150= CMPcar((V149));
	goto T356;}}
	goto T350;
T350:;
	if(((*(LnkLI10))((V147),VV[99]))==Cnil){
	goto T386;}
	V155= (*(LnkLI258))();
	(VV[43]->s.s_dbind)= append(/* INLINE-ARGS */V155,(VV[43]->s.s_dbind));
	{object V156 = (VV[43]->s.s_dbind);
	VMR25(V156)}
	goto T386;
T386:;
	base[0]= VV[85];
	base[1]= (V147);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V157 = vs_base[0];
	VMR25(V157)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-ONE-WHEN-CLAUSE	*/

static object LI26()

{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{register object V158;
	register object V159;
	register object V160;
	V158= Cnil;
	V159= VV[100];
	V160= Cnil;
	goto T396;
T396:;
	if(((VV[34]->s.s_dbind))==Cnil){
	goto T399;}
	goto T398;
	goto T399;
T399:;
	goto T394;
	goto T398;
T398:;
	V160= (*(LnkLI255))();
	{register object V161;
	V161= (*(LnkLI13))((V160));
	{register object V162;
	V162= (*(LnkLI256))((V161));
	if(((V162))==Cnil){
	goto T407;}
	goto T403;
	goto T407;
T407:;
	if(((*(LnkLI260))((V161)))==Cnil){
	goto T410;}
	if(!(eql(VV[100],(V159)))){
	goto T413;}
	goto T412;
	goto T413;
T413:;
	goto T397;
	goto T412;
T412:;
	V163= (*(LnkLI261))();
	V158= append(/* INLINE-ARGS */V163,(V158));
	V159= VV[5];
	goto T403;
	goto T410;
T410:;
	if(((*(LnkLI10))((V161),VV[101]))==Cnil){
	goto T419;}
	if(!(eql(VV[100],(V159)))){
	goto T422;}
	goto T421;
	goto T422;
T422:;
	goto T397;
	goto T421;
T421:;
	V164= (*(LnkLI259))();
	V158= append(/* INLINE-ARGS */V164,(V158));
	V159= VV[5];
	goto T403;
	goto T419;
T419:;
	if(((*(LnkLI10))((V161),VV[56]))==Cnil){
	goto T428;}
	if(!(eql(VV[100],(V159)))){
	goto T431;}
	goto T430;
	goto T431;
T431:;
	goto T397;
	goto T430;
T430:;
	V165= (*(LnkLI258))();
	V158= append(/* INLINE-ARGS */V165,(V158));
	V159= VV[5];
	goto T403;
	goto T428;
T428:;
	if(((*(LnkLI10))((V161),VV[5]))==Cnil){
	goto T437;}
	if(!(eql(VV[5],(V159)))){
	goto T440;}
	goto T439;
	goto T440;
T440:;
	base[0]= VV[102];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T439;
T439:;
	V159= VV[100];
	goto T403;
	goto T437;
T437:;
	(void)((*(LnkLI266))());
	goto T394;}}
	goto T403;
T403:;
	goto T396;
	goto T397;
T397:;
	(void)((*(LnkLI266))());
	goto T394;
	goto T394;
T394:;
	if((V158)!=Cnil){
	goto T446;}
	base[0]= VV[103];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T446;
T446:;
	{object V166 = (V158);
	VMR26(V166)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-LOOP-WHEN	*/

static object LI27()

{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V167;
	object V168;
	object V169;
	V167= Cnil;
	V168= Cnil;
	V169= Cnil;
	{object V170;
	if(((*(LnkLI10))((VV[35]->s.s_dbind),VV[104]))==Cnil){
	goto T453;}
	V170= list(2,VV[105],(*(LnkLI255))());
	goto T451;
	goto T453;
T453:;
	V170= (*(LnkLI255))();
	goto T451;
T451:;
	V167= (*(LnkLI269))();
	{object V171;
	V172= (*(LnkLI254))();
	V171= (*(LnkLI13))(/* INLINE-ARGS */V172);
	if(((*(LnkLI10))((V171),VV[106]))==Cnil){
	goto T457;}
	(void)((*(LnkLI255))());
	V168= Ct;
	V169= (*(LnkLI269))();}
	goto T457;
T457:;
	V173= nreverse((V167));
	V174= make_cons((V170),/* INLINE-ARGS */V173);
	if((V168)==Cnil){
	V175= Cnil;
	goto T465;}
	V176= nreverse((V169));
	V177= make_cons(Ct,/* INLINE-ARGS */V176);
	V175= make_cons(/* INLINE-ARGS */V177,Cnil);
	goto T465;
T465:;
	V178= listA(3,VV[14],/* INLINE-ARGS */V174,V175);
	{object V179 = make_cons(/* INLINE-ARGS */V178,Cnil);
	VMR27(V179)}}}
	return Cnil;
}
/*	local entry for function POINTER-FOR-COLLECT	*/

static object LI28(V181)

object V181;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;{object V182;
	{register object x= (V181),V184= (VV[52]->s.s_dbind);
	while(V184!=Cnil)
	if(eql(x,V184->c.c_car->c.c_car) &&V184->c.c_car != Cnil){
	V183= (V184->c.c_car);
	goto T468;
	}else V184=V184->c.c_cdr;
	V183= Cnil;}
	goto T468;
T468:;
	V182= CMPcdr(V183);
	if(V182==Cnil)goto T466;
	{object V185 = V182;
	VMR28(V185)}
	goto T466;
T466:;}
	{object V186;
	base[0]= VV[107];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V187= vs_base[0];
	V186= (VFUN_NARGS=4,(*(LnkLI267))(V187,Cnil,Cnil,VV[0]));
	{object V188;
	V188= make_cons((V181),(V186));
	(VV[52]->s.s_dbind)= make_cons((V188),(VV[52]->s.s_dbind));}
	{object V189 = (V186);
	VMR28(V189)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-LOOP-COLLECT	*/

static object LI29()

{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{register object V190;
	register object V191;
	register object V192;
	V190= Cnil;
	V191= Cnil;
	V192= Cnil;
	if((VV[50]->s.s_dbind)==Cnil){
	goto T478;}
	{frame_ptr fr;
	fr=frs_sch_catch(VV[27]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[27]);
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	unwind(fr,VV[27]);}
	goto T478;
T478:;
	{register object V193;
	register object V194;
	V193= (VV[35]->s.s_dbind);
	V194= (*(LnkLI255))();
	{object V195;
	V196= (*(LnkLI255))();
	V195= (*(LnkLI13))(/* INLINE-ARGS */V196);
	if(((*(LnkLI10))((V195),VV[108]))==Cnil){
	goto T485;}
	V190= (*(LnkLI255))();
	(void)((VFUN_NARGS=6,(*(LnkLI267))((V190),Cnil,Cnil,Ct,Cnil,Ct)));
	goto T482;
	goto T485;
T485:;
	(void)((*(LnkLI266))());
	if(((VV[45]->s.s_dbind))==Cnil){
	goto T490;}
	V190= (VV[45]->s.s_dbind);
	goto T482;
	goto T490;
T490:;
	base[0]= VV[109];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V197= vs_base[0];
	(VV[45]->s.s_dbind)= (VFUN_NARGS=2,(*(LnkLI267))(V197,Cnil));
	V190= (VV[45]->s.s_dbind);}
	goto T482;
T482:;
	{object V198;
	V198= (*(LnkLI13))((V193));
	if(((*(LnkLI10))((V198),VV[110]))==Cnil){
	goto T497;}
	V191= (*(LnkLI270))((V190));
	if(((VV[111]->s.s_dbind))==Cnil){
	goto T503;}
	{object V199;
	V199= list(3,VV[15],(V191),list(2,VV[112],(V190)));
	base[1]= (V199);
	base[2]= (VV[48]->s.s_dbind);
	base[3]= VV[30];
	base[4]= VV[113];
	vs_top=(vs_base=base+1)+4;
	Ladjoin();
	vs_top=sup;
	(VV[48]->s.s_dbind)= vs_base[0];}
	goto T503;
T503:;
	{object V200;
	V200= (*(LnkLI13))((V193));
	if(((*(LnkLI10))((V200),VV[114]))==Cnil){
	goto T497;}
	if(!(type_of((V194))==t_cons||((V194))==Cnil)){
	goto T515;}
	if(eql(CMPcar((V194)),VV[61])){
	goto T497;}
	goto T515;
T515:;
	V194= list(2,VV[115],(V194));}}
	goto T497;
T497:;
	if(!(type_of((V194))==t_cons||((V194))==Cnil)){
	goto T522;}
	if(((VV[111]->s.s_dbind))!=Cnil){
	goto T522;}
	base[0]= VV[116];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V201= vs_base[0];
	V192= (VFUN_NARGS=3,(*(LnkLI267))(V201,Cnil,Cnil));
	goto T520;
	goto T522;
T522:;
	V192= (V194);
	goto T520;
T520:;
	{object V202;
	{object V203;
	V203= (*(LnkLI13))((V193));
	if(((*(LnkLI10))((V203),VV[117]))==Cnil){
	goto T533;}
	{object V204;
	V205= list(3,VV[15],list(2,VV[18],(V191)),(V192));
	V204= list(3,VV[5],/* INLINE-ARGS */V205,list(3,VV[15],(V191),list(2,VV[118],list(2,VV[18],(V191)))));
	if(((VV[111]->s.s_dbind))==Cnil){
	goto T537;}
	V202= make_cons((V204),Cnil);
	goto T530;
	goto T537;
T537:;
	V206= list(2,(V191),(V204));
	V207= list(3,VV[14],/* INLINE-ARGS */V206,list(2,Ct,list(3,VV[15],(V191),list(2,VV[118],list(3,VV[15],(V190),(V192))))));
	V202= make_cons(/* INLINE-ARGS */V207,Cnil);
	goto T530;}
	goto T533;
T533:;
	if(((*(LnkLI10))((V203),VV[27]))==Cnil){
	goto T540;}
	if(((VV[111]->s.s_dbind))==Cnil){
	goto T543;}
	V208= list(2,VV[18],(V191));
	V209= list(3,VV[15],/* INLINE-ARGS */V208,list(3,VV[15],(V191),list(3,VV[119],(V192),Cnil)));
	V202= make_cons(/* INLINE-ARGS */V209,Cnil);
	goto T530;
	goto T543;
T543:;
	V210= list(2,VV[18],(V191));
	V211= list(2,(V191),list(3,VV[15],/* INLINE-ARGS */V210,list(3,VV[15],(V191),list(3,VV[119],(V192),Cnil))));
	V212= list(3,VV[14],/* INLINE-ARGS */V211,list(2,Ct,list(3,VV[15],(V190),list(3,VV[15],(V191),list(3,VV[119],(V192),Cnil)))));
	V202= make_cons(/* INLINE-ARGS */V212,Cnil);
	goto T530;
	goto T540;
T540:;
	V193= (*(LnkLI13))((V193));
	if(((VFUN_NARGS=4,(*(LnkLI249))((V193),(VV[28]->s.s_dbind),VV[30],VV[10])))==Cnil){
	goto T548;}
	V202= (*(LnkLI271))((V193),(V190),(V192));
	goto T530;
	goto T548;
T548:;
	base[0]= VV[120];
	base[1]= (V193);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	V202= vs_base[0];}
	goto T530;
T530:;
	if(!(eql((V192),(V194)))){
	goto T553;}
	{object V213 = (V202);
	VMR29(V213)}
	goto T553;
T553:;
	V214= list(3,VV[15],(V192),(V194));
	V215= make_cons(/* INLINE-ARGS */V214,Cnil);
	{object V216 = nconc((V202),/* INLINE-ARGS */V215);
	VMR29(V216)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-PARSE-ADDITIONAL-COLLECTIONS	*/

static object LI30(V220,V221,V222)

object V220;object V221;object V222;
{	 VMB30 VMS30 VMV30
	bds_check;
	goto TTL;
TTL:;
	{register object V223;
	V223= Cnil;
	{object V224;
	object V225;
	V224= (VFUN_NARGS=4,(*(LnkLI249))((V220),(VV[28]->s.s_dbind),VV[30],VV[10]));
	{object V226 =((V224))->s.s_plist;
	 object ind= VV[121];
	while(V226!=Cnil){
	if(V226->c.c_car==ind){
	V225= (V226->c.c_cdr->c.c_car);
	goto T557;
	}else V226=V226->c.c_cdr->c.c_cdr;}
	V225= Cnil;}
	goto T557;
T557:;
	{object V227;
	V227= (
	(type_of((V225)) == t_sfun ?(*(((V225))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V225))==t_vfun) ?
	(*(((V225))->sfn.sfn_self)):
	(fcall.fun=((V225)),fcalln))((V221),(V222)));
	bds_bind(VV[34],(V227));
	bds_bind(VV[35],Cnil);
	{register object V228;
	V228= (*(LnkLI255))();
	goto T562;
T562:;
	if(((VV[34]->s.s_dbind))!=Cnil){
	goto T563;}
	goto T559;
	goto T563;
T563:;
	{register object V229;
	V229= (*(LnkLI13))((V228));
	{register object V230;
	V230= (*(LnkLI256))((V229));
	if(((V230))==Cnil){
	goto T571;}
	goto T567;
	goto T571;
T571:;
	if(((*(LnkLI10))((V229),VV[56]))==Cnil){
	goto T574;}
	V223= (*(LnkLI258))();
	goto T567;
	goto T574;
T574:;
	base[4]= VV[85];
	base[5]= (V229);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;}}
	goto T567;
T567:;
	V228= (*(LnkLI255))();
	goto T562;}
	goto T559;
T559:;
	{object V231 = (V223);
	bds_unwind1;
	bds_unwind1;
	VMR30(V231)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function THE-TYPE	*/

static object LI31(V234,V235)

object V234;register object V235;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	if((VV[47]->s.s_dbind)==Cnil){
	goto T582;}
	V235= Cnil;
	goto T582;
T582:;
	if((V235)==Cnil){
	goto T584;}{object V236;
	base[0]= (VV[54]->s.s_dbind);
	base[1]= (V235);
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V236= vs_base[0];
	if(V236==Cnil)goto T586;
	V235= V236;
	goto T585;
	goto T586;
T586:;}
	if((((type_of((V235))==t_symbol&&((V235))->s.s_hpack==keyword_package)?Ct:Cnil))==Cnil){
	goto T590;}
	V235= Cnil;
	goto T585;
	goto T590;
T590:;
	goto T585;
T585:;
	goto T584;
T584:;
	if(type_of((V235))==t_cons){
	goto T593;}
	goto T592;
	goto T593;
T593:;
	if((CMPcar((V235)))==(VV[122])){
	goto T595;}
	goto T592;
	goto T595;
T595:;
	V235= CMPcadr((V235));
	goto T592;
T592:;
	if(((V235))==Cnil){
	goto T599;}
	{object V237 = list(3,VV[123],(V235),(V234));
	VMR31(V237)}
	goto T599;
T599:;
	{object V238 = (V234);
	VMR31(V238)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TYPE-ERROR	*/

static object LI32()

{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	base[0]= VV[124];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V239 = vs_base[0];
	VMR32(V239)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-VALUE	*/

static object LI33(V242,V243)

register object V242;object V243;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{register object V244;
	V244= Cnil;
	if(((VV[47]->s.s_dbind))!=Cnil){
	goto T604;}
	if(((VV[125]->s.s_dbind))==Cnil){
	goto T604;}
	if(!(((V243))==(VV[126]))){
	goto T604;}
	base[0]= (VV[54]->s.s_dbind);
	base[1]= (V243);
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V244= vs_base[0];
	if(((V244))==Cnil){
	goto T604;}
	if(!(type_of((V244))==t_cons)){
	goto T618;}
	if(!((CMPcar((V244)))==(VV[122]))){
	goto T618;}
	V244= CMPcadr((V244));
	goto T616;
	goto T618;
T618:;
	goto T616;
T616:;
	base[0]= (V242);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T623;}
	{object V245;
	if(((VV[39]->s.s_dbind))==Cnil){
	goto T628;}
	base[1]= (V242);
	base[2]= VV[127];
	base[3]= (VV[39]->s.s_dbind);
	vs_top=(vs_base=base+1)+3;
	Lsubst();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V245= vs_base[0];
	goto T626;
	goto T628;
T628:;
	base[0]= (V242);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V245= vs_base[0];
	goto T626;
T626:;{object V246;
	base[0]= (V245);
	base[1]= (V244);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk129)();
	vs_top=sup;
	V246= vs_base[0];
	if(V246==Cnil)goto T636;
	goto T635;
	goto T636;
T636:;}
	base[0]= VV[128];
	base[1]= (V242);
	base[2]= (V244);
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	goto T635;
T635:;
	{object V247 = make_cons((V242),Cnil);
	VMR33(V247)}}
	goto T623;
T623:;
	{register object V248;
	V248= Cnil;
	if(!(type_of((V242))!=t_cons)){
	goto T645;}
	V249= Cnil;
	goto T643;
	goto T645;
T645:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V248= vs_base[0];
	V250= list(2,(V248),(V242));
	V249= make_cons(/* INLINE-ARGS */V250,Cnil);
	goto T643;
T643:;
	if(((VV[39]->s.s_dbind))==Cnil){
	goto T650;}
	if((V248)!=Cnil){
	base[0]= (V248);
	goto T652;}
	base[0]= (V242);
	goto T652;
T652:;
	base[1]= VV[127];
	base[2]= (VV[39]->s.s_dbind);
	vs_top=(vs_base=base+0)+3;
	Lsubst();
	vs_top=sup;
	V251= vs_base[0];
	goto T648;
	goto T650;
T650:;
	if((V248)!=Cnil){
	V251= (V248);
	goto T648;}
	V251= (V242);
	goto T648;
T648:;
	V252= list(3,VV[80],list(3,VV[129],V251,list(2,VV[9],(V244))),VV[130]);
	if((V248)!=Cnil){
	V253= (V248);
	goto T655;}
	V253= (V242);
	goto T655;
T655:;
	V254= list(4,VV[12],V249,/* INLINE-ARGS */V252,V253);
	{object V255 = make_cons(/* INLINE-ARGS */V254,Cnil);
	VMR33(V255)}}
	goto T604;
T604:;
	{object V256 = make_cons((V242),Cnil);
	VMR33(V256)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-ADD-BINDING	*/

static object LI34(object V258,object V257,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB34 VMS34 VMV34
	{object V259;
	register object V260;
	object V261;
	object V262;
	object V263;
	object V264;
	object V265;
	va_start(ap,first);
	V259= V258;
	V260= V257;
	narg = narg - 2;
	if (narg <= 0) goto T656;
	else {
	V261= first;}
	if (--narg <= 0) goto T657;
	else {
	V262= va_arg(ap,object);}
	if (--narg <= 0) goto T658;
	else {
	V263= va_arg(ap,object);}
	if (--narg <= 0) goto T659;
	else {
	V264= va_arg(ap,object);}
	if (--narg <= 0) goto T660;
	else {
	V265= va_arg(ap,object);}
	--narg; goto T661;
	goto T656;
T656:;
	V261= Ct;
	goto T657;
T657:;
	V262= Cnil;
	goto T658;
T658:;
	V263= Cnil;
	goto T659;
T659:;
	V264= Ct;
	goto T660;
T660:;
	V265= Cnil;
	goto T661;
T661:;
	{register object V266;
	V266= Cnil;
	if(((V261))!=Cnil){
	goto T669;}
	if(((VV[46]->s.s_dbind))!=Cnil){
	goto T668;}
	goto T669;
T669:;
	{object V267;
	V267= make_cons(Cnil,Cnil);
	(VV[46]->s.s_dbind)= make_cons((V267),(VV[46]->s.s_dbind));}
	goto T668;
T668:;
	{register object x= (V259),V268= CMPcaar((VV[46]->s.s_dbind));
	while(V268!=Cnil)
	if(eql(x,V268->c.c_car->c.c_car) &&V268->c.c_car != Cnil){
	V266= (V268->c.c_car);
	goto T679;
	}else V268=V268->c.c_cdr;
	V266= Cnil;}
	goto T679;
T679:;
	if(((V266))==Cnil){
	goto T677;}
	if((V264)==Cnil){
	goto T675;}
	{object V270;
	if((V260)==Cnil){
	V270= Cnil;
	goto T680;}
	V270= (*(LnkLI272))((V260),(V262));
	goto T680;
T680:;
	(V266)->c.c_cdr = (V270);
	goto T675;}
	goto T677;
T677:;
	{object V271;
	if((V265)!=Cnil){
	if(((V265))!=Cnil){
	goto T683;}
	goto T684;}
	base[0]= (V259);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V272= vs_base[0];
	if((V272)==Cnil){
	goto T685;}
	goto T684;
	goto T685;
T685:;
	base[0]= (V260);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T683;}
	goto T684;
T684:;
	V271= Cnil;
	goto T682;
	goto T683;
T683:;
	{register object V273;
	register object V274;
	V273= CMPcdr((VV[46]->s.s_dbind));
	V274= CMPcar((V273));
	goto T693;
T693:;
	if(!(((V273))==Cnil)){
	goto T694;}
	V271= Cnil;
	goto T682;
	goto T694;
T694:;
	{register object x= (V259),V275= CMPcar((V274));
	while(V275!=Cnil)
	if(eql(x,V275->c.c_car->c.c_car) &&V275->c.c_car != Cnil){
	V266= (V275->c.c_car);
	goto T701;
	}else V275=V275->c.c_cdr;
	V266= Cnil;}
	goto T701;
T701:;
	if(((V266))==Cnil){
	goto T698;}
	if((V264)==Cnil){
	goto T702;}
	{register object V276;
	register object V277;
	V276= (V266);
	if((V260)==Cnil){
	V277= Cnil;
	goto T704;}
	V277= (*(LnkLI272))((V260),(V262));
	goto T704;
T704:;
	((V276))->c.c_cdr = (V277);}
	goto T702;
T702:;
	V271= Ct;
	goto T682;
	goto T698;
T698:;
	V273= CMPcdr((V273));
	V274= CMPcar((V273));
	goto T693;}
	goto T682;
T682:;
	if(((V271))==Cnil){
	goto T712;}
	goto T675;
	goto T712;
T712:;
	{object V278;
	object V279;
	object V280;
	if((V260)==Cnil){
	V281= Cnil;
	goto T715;}
	V281= (*(LnkLI272))((V260),(V262));
	goto T715;
T715:;
	V278= make_cons((V259),V281);
	V279= (VV[46]->s.s_dbind);
	V280= make_cons((V278),CMPcaar((V279)));
	(CMPcar((V279)))->c.c_car = (V280);
	(void)(CMPcar((V279)));}}
	goto T675;
T675:;
	if((V262)==Cnil){
	goto T719;}
	(void)((VFUN_NARGS=3,(*(LnkLI273))((V259),(V262),(V263))));
	goto T719;
T719:;
	{object V282 = (V259);
	VMR34(V282)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LOOP-DECLARE-BINDING	*/

static object LI35(object V285,object V284,object V283,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB35 VMS35 VMV35
	{register object V286;
	register object V287;
	object V288;
	object V289;
	va_start(ap,first);
	V286= V285;
	V287= V284;
	V288= V283;
	narg = narg - 3;
	if (narg <= 0) goto T720;
	else {
	V289= first;}
	--narg; goto T721;
	goto T720;
T720:;
	V289= Cnil;
	goto T721;
T721:;
	{object V290;
	V290= Cnil;
	if((V287)==Cnil){
	goto T725;}
	{register object x= (V287),V291= (VV[131]->s.s_dbind);
	while(V291!=Cnil)
	if(eql(x,V291->c.c_car)){
	goto T726;
	}else V291=V291->c.c_cdr;}
	goto T725;
	goto T726;
T726:;
	base[0]= (VV[54]->s.s_dbind);
	base[1]= (V287);
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	V287= vs_base[0];
	if(((V287))!=Cnil){
	goto T728;}
	goto T725;
	goto T728;
T728:;
	if((VV[132]->s.s_dbind)==Cnil){
	goto T725;}
	(void)((VFUN_NARGS=3,(*(LnkLI273))((V286),VV[133],(V288))));
	goto T725;
T725:;
	if(((V287))==Cnil){
	goto T733;}
	if(((V288))!=Cnil){
	goto T734;}
	if(((VV[47]->s.s_dbind))!=Cnil){
	goto T733;}
	goto T734;
T734:;
	{register object V292;
	register object V293;
	V292= (VV[46]->s.s_dbind);
	V293= CMPcar((V292));
	goto T744;
T744:;
	if(!(((V292))==Cnil)){
	goto T745;}
	goto T740;
	goto T745;
T745:;
	{register object x= (V286),V294= CMPcar((V293));
	while(V294!=Cnil)
	if(eql(x,V294->c.c_car->c.c_car) &&V294->c.c_car != Cnil){
	goto T751;
	}else V294=V294->c.c_cdr;
	goto T749;}
	goto T751;
T751:;
	V290= Ct;
	{object V295;
	register object V296;
	register object V297;
	if(!(type_of((V287))==t_cons)){
	goto T757;}
	if(!((CMPcar((V287)))==(VV[122]))){
	goto T757;}
	V295= list(3,VV[122],CMPcadr((V287)),(V286));
	goto T755;
	goto T757;
T757:;
	if(((V289))==Cnil){
	goto T762;}
	V295= list(3,VV[122],(V287),(V286));
	goto T755;
	goto T762;
T762:;
	V295= list(2,(V287),(V286));
	goto T755;
T755:;
	V296= (V293);
	base[3]= (V295);
	base[4]= CMPcdr((V296));
	base[5]= VV[30];
	base[6]= VV[113];
	vs_top=(vs_base=base+3)+4;
	Ladjoin();
	vs_top=sup;
	V297= vs_base[0];
	((V296))->c.c_cdr = (V297);}
	goto T740;
	goto T749;
T749:;
	V292= CMPcdr((V292));
	V293= CMPcar((V292));
	goto T744;}
	goto T740;
T740:;
	if((V290)!=Cnil){
	goto T733;}
	if((VV[53]->s.s_dbind)!=Cnil){
	goto T733;}
	base[0]= VV[134];
	base[1]= (V286);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T733;
T733:;
	{object V298 = (V286);
	VMR35(V298)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function PARSE-LOOP-DECLARE	*/

static object LI36(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{register object V299;
	register object V300;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T778;
	else {
	V299= first;}
	if (--narg <= 0) goto T779;
	else {
	V300= va_arg(ap,object);}
	--narg; goto T780;
	goto T778;
T778:;
	V299= (*(LnkLI255))();
	goto T779;
T779:;
	V300= Ct;
	goto T780;
T780:;
	{object V301;
	register object V302;
	V301= CMPcar((V299));
	V302= Cnil;
	if(!(((V301))==(VV[122]))){
	goto T784;}
	V299= CMPcdr((V299));
	V301= CMPcar((V299));
	V302= Ct;
	goto T784;
T784:;
	{register object V303;
	register object V304;
	V303= CMPcdr((V299));
	V304= CMPcar((V303));
	goto T795;
T795:;
	if(!(((V303))==Cnil)){
	goto T796;}
	{object V305 = Cnil;
	VMR36(V305)}
	goto T796;
T796:;
	(void)((VFUN_NARGS=4,(*(LnkLI273))((V304),CMPcar((V299)),(V300),(V302))));
	V303= CMPcdr((V303));
	V304= CMPcar((V303));
	goto T795;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LOOP-ADD-TEMPS	*/

static object LI37(object V306,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB37 VMS37 VMV37
	{register object V307;
	object V308;
	object V309;
	object V310;
	object V311;
	va_start(ap,first);
	V307= V306;
	narg = narg - 1;
	if (narg <= 0) goto T806;
	else {
	V308= first;}
	if (--narg <= 0) goto T807;
	else {
	V309= va_arg(ap,object);}
	if (--narg <= 0) goto T808;
	else {
	V310= va_arg(ap,object);}
	if (--narg <= 0) goto T809;
	else {
	V311= va_arg(ap,object);}
	--narg; goto T810;
	goto T806;
T806:;
	V308= Cnil;
	goto T807;
T807:;
	V309= Cnil;
	goto T808;
T808:;
	V310= Cnil;
	goto T809;
T809:;
	V311= Cnil;
	goto T810;
T810:;
	{object V312;
	V312= (((V307))==Cnil?Ct:Cnil);
	if(((V312))==Cnil){
	goto T817;}
	{object V313 = (V312);
	VMR37(V313)}
	goto T817;
T817:;
	if(!(type_of((V307))==t_symbol)){
	goto T820;}
	{object V314 = (VFUN_NARGS=7,(*(LnkLI267))((V307),(V308),(V310),(V309),Cnil,Ct,(V311)));
	VMR37(V314)}
	goto T820;
T820:;
	if(!(type_of((V307))==t_cons||((V307))==Cnil)){
	goto T823;}
	(void)((VFUN_NARGS=1,(*(LnkLI268))(CMPcar((V307)))));
	{object V315 = (VFUN_NARGS=1,(*(LnkLI268))(CMPcdr((V307))));
	VMR37(V315)}
	goto T823;
T823:;
	{object V316 = Cnil;
	VMR37(V316)}}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function ADD-FROM-DATA	*/

static object LI38(object V317,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB38 VMS38 VMV38
	{register object V318;
	object V319;
	va_start(ap,first);
	V318= V317;
	narg= narg - 1;
	V320 = list_vector_new(narg,first,ap);
	V319= V320;
	if((V318)!=Cnil){
	goto T826;}
	base[0]= VV[135];
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V318= vs_base[0];
	goto T826;
T826:;
	{register object V321;
	register object V322;
	V321= (V318);
	V322= (V319);
	goto T831;
T831:;
	if(((V322))!=Cnil){
	goto T832;}
	goto T829;
	goto T832;
T832:;
	if((CMPcar((V322)))!=Cnil){
	goto T837;}
	goto T836;
	goto T837;
T837:;
	{register object V323;
	register object V324;
	V323= (V321);
	V324= CMPcar((V322));
	((V323))->c.c_car = (V324);}
	goto T836;
T836:;
	V321= CMPcdr((V321));
	V322= CMPcdr((V322));
	goto T831;}
	goto T829;
T829:;
	{object V325 = (V318);
	VMR38(V325)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function PARSE-LOOP-FOR	*/

static object LI39()

{	 VMB39 VMS39 VMV39
	bds_check;
	goto TTL;
TTL:;
	{register object V326;
	register object V327;
	V326= Cnil;
	V327= Cnil;
	{register object V328;
	object V329;
	register object V330;
	V328= (*(LnkLI255))();
	V329= Cnil;
	V330= Cnil;
	{object V331;
	V331= (*(LnkLI255))();
	goto T854;
T854:;
	{register object V332;
	V332= (*(LnkLI13))((V331));
	if(((*(LnkLI10))((V332),VV[136]))==Cnil){
	goto T860;}
	{object V333;
	base[1]= VV[137];
	vs_top=(vs_base=base+1)+1;
	Lgensym();
	vs_top=sup;
	V333= vs_base[0];
	(void)((VFUN_NARGS=4,(*(LnkLI268))((V328),Cnil,VV[138],Ct)));
	V334= (*(LnkLI255))();
	(void)((VFUN_NARGS=3,(*(LnkLI267))((V333),/* INLINE-ARGS */V334,Cnil)));
	{object V335;
	V335= list(3,VV[139],(V328),list(2,VV[17],(V333)));
	(VV[49]->s.s_dbind)= make_cons((V335),(VV[49]->s.s_dbind));}
	V330= list(3,VV[15],(V333),list(2,VV[18],(V333)));
	V329= list(2,VV[140],(V333));
	goto T857;}
	goto T860;
T860:;
	if(((*(LnkLI10))((V332),VV[141]))==Cnil){
	goto T873;}
	{register object V336;
	if(!(type_of((V328))==t_symbol)){
	goto T877;}
	V336= (V328);
	goto T875;
	goto T877;
T877:;
	base[1]= VV[142];
	vs_top=(vs_base=base+1)+1;
	Lgensym();
	vs_top=sup;
	V336= vs_base[0];
	goto T875;
T875:;
	(void)((VFUN_NARGS=4,(*(LnkLI268))((V328),Cnil,VV[138],Ct)));
	V337= (*(LnkLI255))();
	(void)((VFUN_NARGS=3,(*(LnkLI267))((V336),/* INLINE-ARGS */V337,Cnil)));
	V330= list(3,VV[15],(V336),list(2,VV[18],(V336)));
	if(eql((V336),(V328))){
	goto T884;}
	{object V338;
	V338= list(3,VV[139],(V328),(V336));
	(VV[49]->s.s_dbind)= make_cons((V338),(VV[49]->s.s_dbind));}
	goto T884;
T884:;
	V329= list(2,VV[140],(V336));
	goto T857;}
	goto T873;
T873:;
	if(((*(LnkLI10))((V332),VV[143]))==Cnil){
	goto T891;}
	V339= (*(LnkLI255))();
	V327= (VFUN_NARGS=6,(*(LnkLI274))((V327),(V328),/* INLINE-ARGS */V339,Cnil,Cnil,VV[144]));
	goto T857;
	goto T891;
T891:;
	if(((*(LnkLI10))((V332),VV[145]))==Cnil){
	goto T895;}
	V340= (*(LnkLI255))();
	V327= (VFUN_NARGS=6,(*(LnkLI274))((V327),(V328),/* INLINE-ARGS */V340,Cnil,Cnil,VV[146]));
	goto T857;
	goto T895;
T895:;
	if(((*(LnkLI10))((V332),VV[147]))==Cnil){
	goto T899;}
	V326= (*(LnkLI255))();
	if(((V327))==Cnil){
	goto T904;}
	V327= (VFUN_NARGS=5,(*(LnkLI274))((V327),Cnil,Cnil,Cnil,(V326)));
	goto T857;
	goto T904;
T904:;
	bds_bind(VV[148],small_fixnum(4));
	bds_bind(VV[149],small_fixnum(4));
	goto T909;
T909:;
	if(!((CMPcar(CMPcaddr((V330))))==(VV[18]))){
	goto T910;}
	bds_unwind1;
	bds_unwind1;
	goto T907;
	goto T910;
T910:;
	base[3]= VV[150];
	base[4]= VV[151];
	base[5]= VV[152];
	vs_top=(vs_base=base+3)+3;
	Lcerror();
	vs_top=sup;
	base[3]= (VV[153]->s.s_dbind);
	base[4]= VV[154];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	goto T909;
	goto T907;
T907:;
	V341= CMPcadr((V330));
	if(!(type_of((V326))==t_cons)){
	goto T926;}
	{register object x= CMPcar((V326)),V343= VV[155];
	while(V343!=Cnil)
	if(eql(x,V343->c.c_car)){
	goto T929;
	}else V343=V343->c.c_cdr;
	goto T926;}
	goto T929;
T929:;
	V342= list(2,CMPcadr((V326)),CMPcadr((V330)));
	goto T924;
	goto T926;
T926:;
	V342= list(3,VV[156],(V326),CMPcadr((V330)));
	goto T924;
T924:;
	V330= list(3,VV[15],/* INLINE-ARGS */V341,V342);
	goto T857;
	goto T899;
T899:;
	if(((*(LnkLI10))((V332),VV[157]))==Cnil){
	goto T931;}
	V344= (*(LnkLI255))();
	V327= (VFUN_NARGS=6,(*(LnkLI274))((V327),(V328),Cnil,/* INLINE-ARGS */V344,Cnil,VV[144]));
	goto T857;
	goto T931;
T931:;
	if(((*(LnkLI10))((V332),VV[158]))==Cnil){
	goto T935;}
	V345= (*(LnkLI255))();
	V327= (VFUN_NARGS=6,(*(LnkLI274))((V327),(V328),Cnil,/* INLINE-ARGS */V345,Cnil,VV[146]));
	goto T857;
	goto T935;
T935:;
	if(((*(LnkLI10))((V332),VV[159]))==Cnil){
	goto T939;}
	V346= (*(LnkLI255))();
	V327= (VFUN_NARGS=7,(*(LnkLI274))((V327),(V328),Cnil,/* INLINE-ARGS */V346,Cnil,Cnil,Ct));
	goto T857;
	goto T939;
T939:;
	if(!(type_of((V332))==t_symbol)){
	goto T943;}
	{object V347 =((V332))->s.s_plist;
	 object ind= VV[160];
	while(V347!=Cnil){
	if(V347->c.c_car==ind){
	if(((V347->c.c_cdr->c.c_car))==Cnil){
	goto T943;}
	goto T946;
	}else V347=V347->c.c_cdr->c.c_cdr;}
	goto T943;}
	goto T946;
T946:;
	V348= (*(LnkLI13))((V331));
	(void)((VFUN_NARGS=3,(*(LnkLI265))(/* INLINE-ARGS */V348,VV[160],(V328))));
	goto T851;
	goto T943;
T943:;
	if(!(type_of((V332))==t_symbol)){
	goto T949;}
	{object V349 =((V332))->s.s_plist;
	 object ind= VV[161];
	while(V349!=Cnil){
	if(V349->c.c_car==ind){
	if(((V349->c.c_cdr->c.c_car))==Cnil){
	goto T949;}
	goto T952;
	}else V349=V349->c.c_cdr->c.c_cdr;}
	goto T949;}
	goto T952;
T952:;
	V350= (*(LnkLI13))((V331));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V350,(V328)));
	goto T851;
	goto T949;
T949:;
	(void)((*(LnkLI266))());
	goto T851;}
	goto T857;
T857:;
	V331= (*(LnkLI255))();
	goto T854;}
	goto T851;
T851:;
	if(((V327))==Cnil){
	goto T958;}
	{object V351;
	object V352;
	object V353;
	object V354;
	object V355;
	object V356;
	V351= CMPcar(CMPcddddr((V327)));
	V352= CMPcadr(CMPcddddr((V327)));
	V353= CMPcar((V327));
	V354= CMPcaddr((V327));
	V355= CMPcadddr((V327));
	V356= Cnil;
	(void)((VFUN_NARGS=4,(*(LnkLI267))((V353),CMPcadr((V327)),Ct,VV[126])));
	base[1]= (V355);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T968;}
	goto T967;
	goto T968;
T968:;
	(VV[47]->s.s_dbind)= Ct;
	goto T967;
T967:;
	V357= list(3,(V351),(V353),(V355));
	V330= list(3,VV[15],(V353),(*(LnkLI276))(/* INLINE-ARGS */V357,VV[126]));
	if(((V354))==Cnil){
	goto T975;}
	{object V358;
	base[2]= VV[162];
	vs_top=(vs_base=base+2)+1;
	Lgensym();
	vs_top=sup;
	V358= vs_base[0];
	if(!(eql((V355),small_fixnum(1)))){
	goto T981;}
	if((CMPcadr(CMPcddddr((V327))))!=Cnil){
	goto T981;}
	base[1]= Cnil;
	goto T979;
	goto T981;
T981:;
	base[1]= list(3,(V351),VV[127],(V355));
	goto T979;
T979:;
	bds_bind(VV[39],base[1]);
	(void)((VFUN_NARGS=6,(*(LnkLI267))((V358),(V354),Cnil,VV[126],Cnil,Cnil)));
	if(((V352))==Cnil){
	goto T989;}
	if(!(((V351))==(VV[144]))){
	goto T992;}
	V359= VV[163];
	goto T987;
	goto T992;
T992:;
	V359= VV[164];
	goto T987;
	goto T989;
T989:;
	if(!(((V351))==(VV[144]))){
	goto T995;}
	V359= VV[165];
	goto T987;
	goto T995;
T995:;
	V359= VV[166];
	goto T987;
T987:;
	V329= list(3,V359,(V353),(V358));
	bds_unwind1;
	goto T958;}
	goto T975;
T975:;
	if(((VV[47]->s.s_dbind))!=Cnil){
	goto T958;}
	if(((VV[125]->s.s_dbind))==Cnil){
	goto T958;}
	base[1]= (VV[54]->s.s_dbind);
	base[2]= VV[126];
	vs_top=(vs_base=base+1)+2;
	Lgetf();
	vs_top=sup;
	V356= vs_base[0];
	if(((V356))==Cnil){
	goto T958;}
	if(!(type_of((V356))==t_cons)){
	goto T1008;}
	if(!((CMPcar((V356)))==(VV[122]))){
	goto T1008;}
	V356= CMPcadr((V356));
	goto T1008;
T1008:;
	base[1]= (V356);
	base[2]= VV[167];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk277)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T958;}
	base[1]= (V355);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1017;}
	goto T1016;
	goto T1017;
T1017:;
	base[1]= VV[168];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T1016;
T1016:;
	{object V360;
	if(!(((V351))==(VV[144]))){
	goto T1024;}
	if((V355)!=Cnil){
	V362= (V355);
	goto T1026;}
	V362= small_fixnum(1);
	goto T1026;
T1026:;
	V361= list(3,VV[164],(V353),number_minus(VV[169],V362));
	goto T1022;
	goto T1024;
T1024:;
	if((V355)!=Cnil){
	V363= (V355);
	goto T1027;}
	V363= small_fixnum(1);
	goto T1027;
T1027:;
	V361= list(3,VV[163],(V353),number_plus(VV[170],V363));
	goto T1022;
T1022:;
	V360= list(3,VV[80],V361,VV[171]);
	(VV[42]->s.s_dbind)= make_cons((V360),(VV[42]->s.s_dbind));}}
	goto T958;
T958:;
	if((V329)==Cnil){
	goto T1029;}
	{object V364;
	base[2]= list(3,VV[5],(V329),VV[172]);
	vs_top=(vs_base=base+2)+1;
	Lcopy_tree();
	vs_top=sup;
	V364= vs_base[0];
	(VV[41]->s.s_dbind)= make_cons((V364),(VV[41]->s.s_dbind));}
	goto T1029;
T1029:;
	if((V330)==Cnil){
	{object V365 = Cnil;
	VMR39(V365)}}
	(VV[42]->s.s_dbind)= make_cons(V330,(VV[42]->s.s_dbind));
	{object V367 = (VV[42]->s.s_dbind);
	VMR39(V367)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-LOOP-MACRO	*/

static object LI40(object V369,object V368,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB40 VMS40 VMV40
	{object V370;
	object V371;
	object V372;
	va_start(ap,first);
	V370= V369;
	V371= V368;
	narg = narg - 2;
	if (narg <= 0) goto T1034;
	else {
	V372= first;}
	--narg; goto T1035;
	goto T1034;
T1034:;
	V372= Cnil;
	goto T1035;
T1035:;
	{register object V373;
	V373= Cnil;
	{object V374;
	object V375;
	{object V376 =((V370))->s.s_plist;
	 object ind= (V371);
	while(V376!=Cnil){
	if(V376->c.c_car==ind){
	V374= (V376->c.c_cdr->c.c_car);
	goto T1038;
	}else V376=V376->c.c_cdr->c.c_cdr;}
	V374= Cnil;}
	goto T1038;
T1038:;
	V375= Cnil;
	{object V377= (V371);
	if((V377!= VV[160]))goto T1041;
	{object V378;
	{object V379 =((V370))->s.s_plist;
	 object ind= VV[173];
	while(V379!=Cnil){
	if(V379->c.c_car==ind){
	V378= (V379->c.c_cdr->c.c_car);
	goto T1042;
	}else V379=V379->c.c_cdr->c.c_cdr;}
	V378= Cnil;}
	goto T1042;
T1042:;{object V380;
	V380= CMPcdr((V378));
	if(V380==Cnil)goto T1044;
	goto T1043;
	goto T1044;
T1044:;}
	base[0]= VV[174];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1043;
T1043:;
	V375= CMPcdr((V378));
	goto T1040;}
	goto T1041;
T1041:;
	if((V377!= VV[92]))goto T1047;
	{object V381 =((V370))->s.s_plist;
	 object ind= VV[175];
	while(V381!=Cnil){
	if(V381->c.c_car==ind){
	V375= (V381->c.c_cdr->c.c_car);
	goto T1040;
	}else V381=V381->c.c_cdr->c.c_cdr;}
	V375= Cnil;
	goto T1040;}
	goto T1047;
T1047:;
	FEerror("The ECASE key value ~s is illegal.",1,V377);
	V375= Cnil;
	goto T1040;}
	goto T1040;
T1040:;
	{object V382;
	{register object x= VV[176],V383= (V375);
	while(V383!=Cnil)
	if(eql(x,V383->c.c_car)){
	goto T1051;
	}else V383=V383->c.c_cdr;
	goto T1050;}
	goto T1051;
T1051:;
	{object V384;
	V384= (VV[34]->s.s_dbind);
	(VV[34]->s.s_dbind)= Cnil;
	V382= (V384);
	goto T1048;}
	goto T1050;
T1050:;
	{register object V385;
	register object V386;
	V385= CMPmake_fixnum((long)length((V375)));
	V386= small_fixnum(0);
	goto T1057;
T1057:;
	if(!(number_compare((V386),(V385))>=0)){
	goto T1058;}
	V382= nreverse((V373));
	goto T1048;
	goto T1058;
T1058:;
	{register object V387;
	V387= CMPcar((VV[34]->s.s_dbind));
	V373= make_cons((V387),(V373));}
	(VV[34]->s.s_dbind)= CMPcdr((VV[34]->s.s_dbind));
	V386= one_plus((V386));
	goto T1057;}
	goto T1048;
T1048:;
	{object V389= (V371);
	if((V389!= VV[160]))goto T1072;
	base[0]= (V374);
	base[1]= (V372);
	{object V390;
	V390= (V382);
	 vs_top=base+2;
	 while(V390!=Cnil)
	 {vs_push((V390)->c.c_car);V390=(V390)->c.c_cdr;}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V388= vs_base[0];
	goto T1071;
	goto T1072;
T1072:;
	if((V389!= VV[92]))goto T1076;
	base[0]= (V374);
	{object V391;
	V391= (V382);
	 vs_top=base+1;
	 while(V391!=Cnil)
	 {vs_push((V391)->c.c_car);V391=(V391)->c.c_cdr;}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V388= vs_base[0];
	goto T1071;
	goto T1076;
T1076:;
	V388= Cnil;}
	goto T1071;
T1071:;
	(VV[34]->s.s_dbind)= append(V388,(VV[34]->s.s_dbind));
	{object V392 = (VV[34]->s.s_dbind);
	VMR40(V392)}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function PARSE-LOOP-MAP	*/

static object LI41(V395,V396)

object V395;object V396;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	if((VV[53]->s.s_dbind)==Cnil){
	goto T1079;}
	base[0]= VV[177];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1079;
T1079:;
	{object V397;
	object V398;
	{object V399 =((V395))->s.s_plist;
	 object ind= VV[161];
	while(V399!=Cnil){
	if(V399->c.c_car==ind){
	V397= (V399->c.c_cdr->c.c_car);
	goto T1081;
	}else V399=V399->c.c_cdr->c.c_cdr;}
	V397= Cnil;}
	goto T1081;
T1081:;
	{object V400 =((V395))->s.s_plist;
	 object ind= VV[178];
	while(V400!=Cnil){
	if(V400->c.c_car==ind){
	V398= (V400->c.c_cdr->c.c_car);
	goto T1082;
	}else V400=V400->c.c_cdr->c.c_cdr;}
	V398= Cnil;}
	goto T1082;
T1082:;
	if((V398)!=Cnil){
	goto T1083;}
	base[0]= VV[179];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1083;
T1083:;
	{register object x= VV[176],V401= (V398);
	while(V401!=Cnil)
	if(eql(x,V401->c.c_car)){
	goto T1087;
	}else V401=V401->c.c_cdr;
	goto T1085;}
	goto T1087;
T1087:;
	base[0]= VV[180];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1085;
T1085:;
	{register object V402;
	object V403;
	V402= Cnil;
	{object V404;
	register object V405;
	V406 = CMPmake_fixnum((long)length((V398)));
	V404= one_minus(V406);
	V405= small_fixnum(0);
	goto T1094;
T1094:;
	if(!(number_compare((V405),(V404))>=0)){
	goto T1095;}
	V403= nreverse((V402));
	goto T1090;
	goto T1095;
T1095:;
	{register object V407;
	V407= CMPcar((VV[34]->s.s_dbind));
	V402= make_cons((V407),(V402));}
	(VV[34]->s.s_dbind)= CMPcdr((VV[34]->s.s_dbind));
	V405= one_plus((V405));
	goto T1094;}
	goto T1090;
T1090:;
	{register object V408;
	register object V409;
	V408= (*(LnkLI255))();
	V409= Cnil;
	goto T1111;
T1111:;
	if(((*(LnkLI10))((V408),VV[77]))!=Cnil){
	goto T1112;}
	(void)((*(LnkLI266))());
	if((V409)==Cnil){
	(VV[44]->s.s_dbind)= Cnil;
	goto T1108;}
	(VV[44]->s.s_dbind)= make_cons(VV[77],(V409));
	goto T1108;
	goto T1112;
T1112:;
	{register object V410;
	V410= (*(LnkLI255))();
	V409= make_cons((V410),(V409));}
	V408= (*(LnkLI255))();
	goto T1111;}
	goto T1108;
T1108:;
	base[1]= (V397);
	base[2]= (V396);
	{object V411;
	V411= (V403);
	 vs_top=base+3;
	 while(V411!=Cnil)
	 {vs_push((V411)->c.c_car);V411=(V411)->c.c_cdr;}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	vs_top=sup;
	(VV[53]->s.s_dbind)= vs_base[0];
	{object V412 = Cnil;
	VMR41(V412)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SUBSTITUTE-SLOOP-BODY	*/

static object LI42(V414)

register object V414;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	if(((VV[53]->s.s_dbind))==Cnil){
	goto T1128;}
	base[0]= make_cons(VV[16],(V414));
	base[1]= VV[181];
	base[2]= (VV[53]->s.s_dbind);
	vs_top=(vs_base=base+0)+3;
	Lsubst();
	vs_top=sup;
	V415= vs_base[0];
	V414= make_cons(V415,Cnil);
	if((VV[44]->s.s_dbind)==Cnil){
	goto T1128;}
	base[0]= (VV[44]->s.s_dbind);
	base[1]= VV[182];
	base[2]= (V414);
	vs_top=(vs_base=base+0)+3;
	Lsubst();
	vs_top=sup;
	V414= vs_base[0];
	goto T1128;
T1128:;
	{object V416 = (V414);
	VMR42(V416)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEF-LOOP-INTERNAL	*/

static object LI43(object V420,object V419,object V418,object V417,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB43 VMS43 VMV43
	bds_check;
	{register object V421;
	register object V422;
	object V423;
	object V424;
	object V425;
	object V426;
	object V427;
	va_start(ap,first);
	V421= V420;
	V422= V419;
	V423= V418;
	V424= V417;
	narg = narg - 4;
	if (narg <= 0) goto T1141;
	else {
	V425= first;}
	if (--narg <= 0) goto T1142;
	else {
	V426= va_arg(ap,object);}
	if (--narg <= 0) goto T1143;
	else {
	V427= va_arg(ap,object);}
	--narg; goto T1144;
	goto T1141;
T1141:;
	V425= Cnil;
	goto T1142;
T1142:;
	V426= Cnil;
	goto T1143;
T1143:;
	V427= Cnil;
	goto T1144;
T1144:;
	{object V428;
	bds_bind(VV[184],VV[183]);
	base[3]= Cnil;
	base[4]= VV[185];
	base[5]= (V421);
	base[6]= (V424);
	vs_top=(vs_base=base+3)+4;
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lintern();
	vs_top=sup;
	V428= vs_base[0];
	if((V426)==Cnil){
	goto T1154;}
	V429 = CMPmake_fixnum((long)length((V422)));
	if(!(number_compare(V429,(V426))>=0)){
	goto T1155;}
	goto T1154;
	goto T1155;
T1155:;
	base[2]= VV[186];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1154;
T1154:;
	if((V427)==Cnil){
	goto T1158;}
	V430 = CMPmake_fixnum((long)length((V422)));
	if(!(number_compare(V430,(V427))<=0)){
	goto T1159;}
	goto T1158;
	goto T1159;
T1159:;
	base[2]= VV[187];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T1158;
T1158:;
	V431= listA(4,VV[190],(V428),(V422),(V423));
	if((V425)==Cnil){
	V432= Cnil;
	goto T1162;}
	V433= list(3,VV[191],list(2,VV[9],(V421)),(V425));
	V432= make_cons(/* INLINE-ARGS */V433,Cnil);
	goto T1162;
T1162:;
	V434= list(2,VV[9],(V421));
	base[3]= Cnil;
	base[4]= VV[192];
	base[5]= (V424);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= VV[193];
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lintern();
	vs_top=sup;
	V435= vs_base[0];
	V436= list(3,VV[7],/* INLINE-ARGS */V434,list(2,VV[9],V435));
	V437= list(3,VV[15],/* INLINE-ARGS */V436,list(2,VV[9],(V428)));
	V438= list(2,VV[9],(V421));
	base[3]= Cnil;
	base[4]= VV[194];
	base[5]= (V424);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= VV[193];
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lintern();
	vs_top=sup;
	V439= vs_base[0];
	V440= list(3,VV[7],/* INLINE-ARGS */V438,list(2,VV[9],V439));
	V441= list(2,/* INLINE-ARGS */V437,list(3,VV[15],/* INLINE-ARGS */V440,list(2,VV[9],(V422))));
	{object V442 = listA(4,VV[188],VV[189],/* INLINE-ARGS */V431,append(V432,/* INLINE-ARGS */V441));
	bds_unwind1;
	VMR43(V442)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SUM-SLOOP-COLLECT	*/

static object LI44(V445,V446)

object V445;object V446;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	V447= list(3,VV[195],(V445),small_fixnum(0));
	{object V448 = list(4,VV[97],/* INLINE-ARGS */V447,VV[56],list(3,VV[195],(V445),list(3,VV[144],(V445),(V446))));
	VMR44(V448)}
	return Cnil;
}
/*	local entry for function LOGXOR-SLOOP-COLLECT	*/

static object LI45(V451,V452)

register object V451;object V452;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	V453= list(3,VV[15],(V451),small_fixnum(0));
	V454= list(3,VV[15],(V451),list(3,VV[196],(V451),(V452)));
	{object V455 = list(6,VV[97],/* INLINE-ARGS */V453,VV[56],/* INLINE-ARGS */V454,VV[77],list(3,VV[167],(V451),(V452)));
	VMR45(V455)}
	return Cnil;
}
/*	local entry for function MAXIMIZE-SLOOP-COLLECT	*/

static object LI46(V458,V459)

register object V458;object V459;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	V460= list(3,VV[195],(V458),Cnil);
	V461= list(3,VV[15],(V458),list(3,VV[198],(V458),(V459)));
	{object V462 = list(4,VV[97],/* INLINE-ARGS */V460,VV[56],list(4,VV[197],(V458),/* INLINE-ARGS */V461,list(3,VV[15],(V458),(V459))));
	VMR46(V462)}
	return Cnil;
}
/*	local entry for function MINIMIZE-SLOOP-COLLECT	*/

static object LI47(V465,V466)

register object V465;object V466;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	V467= list(3,VV[195],(V465),Cnil);
	V468= list(3,VV[15],(V465),list(3,VV[199],(V465),(V466)));
	{object V469 = list(4,VV[97],/* INLINE-ARGS */V467,VV[56],list(4,VV[197],(V465),/* INLINE-ARGS */V468,list(3,VV[15],(V465),(V466))));
	VMR47(V469)}
	return Cnil;
}
/*	local entry for function COUNT-SLOOP-COLLECT	*/

static object LI48(V472,V473)

object V472;object V473;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	V474= list(3,VV[195],(V472),small_fixnum(0));
	{object V475 = list(4,VV[97],/* INLINE-ARGS */V474,VV[56],list(3,VV[5],(V473),list(3,VV[15],(V472),list(2,VV[200],(V472)))));
	VMR48(V475)}
	return Cnil;
}
/*	local entry for function THEREIS-SLOOP-COLLECT	*/

static object LI49(V478,V479)

object V478;object V479;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	{object V480 = list(2,VV[56],list(3,VV[197],(V479),list(2,VV[59],(V479))));
	VMR49(V480)}
	return Cnil;
}
/*	local entry for function ALWAYS-SLOOP-COLLECT	*/

static object LI50(V483,V484)

object V483;object V484;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	V485= list(3,VV[195],(V483),Ct);
	{object V486 = list(4,VV[97],/* INLINE-ARGS */V485,VV[56],list(3,VV[5],list(2,VV[140],(V484)),VV[201]));
	VMR50(V486)}
	return Cnil;
}
/*	local entry for function NEVER-SLOOP-COLLECT	*/

static object LI51(V489,V490)

object V489;object V490;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	V491= list(3,VV[195],(V489),Ct);
	{object V492 = list(4,VV[97],/* INLINE-ARGS */V491,VV[56],list(3,VV[5],(V490),VV[202]));
	VMR51(V492)}
	return Cnil;
}
/*	local entry for function AVERAGING-SLOOP-MACRO	*/

static object LI52(V494)

object V494;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	base[0]= VV[91];
	base[1]= VV[203];
	base[2]= VV[94];
	base[3]= VV[204];
	base[4]= VV[5];
	base[5]= VV[91];
	base[6]= VV[205];
	base[7]= VV[94];
	base[8]= small_fixnum(0);
	base[9]= VV[77];
	base[10]= VV[206];
	base[11]= VV[77];
	base[12]= VV[207];
	base[13]= VV[56];
	base[14]= list(3,VV[15],VV[203],list(3,VV[208],list(3,VV[144],VV[209],(V494)),VV[210]));
	base[15]= VV[211];
	vs_top=(vs_base=base+0)+16;
	LlistA();
	vs_top=sup;
	{object V495 = vs_base[0];
	VMR52(V495)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REPEAT-SLOOP-MACRO	*/

static object LI53(V497)

object V497;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	{object V498;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V498= vs_base[0];
	{object V499 = list(4,VV[25],(V498),VV[157],(V497));
	VMR53(V499)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RETURN-SLOOP-MACRO	*/

static object LI54(V501)

register object V501;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	if(!(type_of((V501))==t_cons)){
	goto T1196;}
	if(!((CMPcar((V501)))==(VV[21]))){
	goto T1196;}
	V502= CMPcdr((V501));
	goto T1194;
	goto T1196;
T1196:;
	V502= make_cons((V501),Cnil);
	goto T1194;
T1194:;
	{object V503 = list(2,VV[56],make_cons(VV[59],V502));
	VMR54(V503)}
	return Cnil;
}
/*	local entry for function IN-TABLE-SLOOP-MAP	*/

static object LI55(V506,V507)

object V506;object V507;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{object V508 = list(3,VV[212],list(2,VV[213],listA(3,VV[214],(V506),VV[215])),(V507));
	VMR55(V508)}
	return Cnil;
}
/*	local entry for function IN-PACKAGE-SLOOP-MAP	*/

static object LI56(V511,V512)

object V511;object V512;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V513 = list(3,VV[216],list(2,(V511),list(2,VV[217],(V512))),VV[181]);
	VMR56(V513)}
	return Cnil;
}
/*	local entry for function IN-ARRAY-SLOOP-FOR	*/

static object LI57(object V515,object V514,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB57 VMS57 VMV57
	{object V516;
	object V517;
	object V518;
	va_start(ap,first);
	V516= V515;
	V517= V514;
	narg= narg - 2;
	V519 = list_vector_new(narg,first,ap);
	V518= V519;
	{object V520;
	object V521;
	object V522;
	V520= Cnil;
	V521= Cnil;
	V522= Cnil;
	if(!(type_of((V516))==t_cons||((V516))==Cnil)){
	goto T1202;}
	V520= CMPcar((V516));
	V521= CMPcadr((V516));
	goto T1200;
	goto T1202;
T1202:;
	V520= (V516);
	base[0]= VV[218];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V521= vs_base[0];
	goto T1200;
T1200:;
	{object V523;
	{register object V524;
	register object V525;
	V524= (V518);
	V525= Cnil;
	goto T1213;
T1213:;
	{register object V526;
	V526= (*(LnkLI13))(CMPcar((V524)));
	{register object V527;
	V527= (*(LnkLI10))((V526),VV[219]);
	if(((V527))==Cnil){
	goto T1220;}
	goto T1216;
	goto T1220;
T1220:;
	if(((*(LnkLI10))((V526),VV[220]))==Cnil){
	goto T1223;}
	V522= Ct;
	goto T1216;
	goto T1223;
T1223:;
	{register object V528;
	V528= (*(LnkLI10))((V526),VV[147]);
	if(((V528))==Cnil){
	goto T1228;}
	goto T1216;
	goto T1228;
T1228:;
	base[0]= (V524);
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V518= vs_base[0];
	V523= nreverse((V525));
	goto T1211;}}}
	goto T1216;
T1216:;
	{register object V529;
	V529= CMPcar((V524));
	V525= make_cons((V529),(V525));}
	{register object V530;
	V530= CMPcadr((V524));
	V525= make_cons((V530),(V525));}
	V524= CMPcddr((V524));
	goto T1213;}
	goto T1211;
T1211:;
	if((V522)!=Cnil){
	goto T1242;}
	V531= list(2,VV[157],list(2,VV[221],(V517)));
	V523= nconc(/* INLINE-ARGS */V531,(V523));
	goto T1242;
T1242:;
	V532= listA(5,VV[87],(V520),VV[56],list(3,VV[15],(V520),list(3,VV[222],(V517),(V521))),(V518));
	{object V533 = listA(3,VV[25],(V521),append((V523),/* INLINE-ARGS */V532));
	VMR57(V533)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function =-SLOOP-FOR	*/

static object LI58(V536,V537)

register object V536;object V537;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	{object V538;
	V539= (*(LnkLI254))();
	V538= (*(LnkLI13))(/* INLINE-ARGS */V539);
	if(((*(LnkLI10))((V538),VV[223]))==Cnil){
	goto T1246;}
	(void)((*(LnkLI255))());
	V540= list(3,VV[139],(V536),(V537));
	{object V541 = list(6,VV[87],(V536),VV[97],/* INLINE-ARGS */V540,VV[89],list(3,VV[139],(V536),(*(LnkLI255))()));
	VMR58(V541)}
	goto T1246;
T1246:;
	{object V542 = list(4,VV[87],(V536),VV[56],list(3,VV[139],(V536),(V537)));
	VMR58(V542)}}
	return Cnil;
}
/*	local entry for function SLOOP-SLOOP-MACRO	*/

static object LI59(V544)

VOL object V544;
{	 VMB59 VMS59 VMV59
	bds_check;
	goto TTL;
TTL:;
	{object V545;
	V545= (*(LnkLI13))(CMPcar((V544)));
	{object V546;
	V546= (*(LnkLI10))((V545),VV[25]);
	if(((V546))==Cnil){
	goto T1253;}
	goto T1249;
	goto T1253;
T1253:;
	base[0]= VV[85];
	base[1]= (V545);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}}
	goto T1249;
T1249:;
	{VOL object V547;
	VOL object V548;
	VOL object V549;
	VOL object V550;
	VOL object V551;
	VOL object V552;
	VOL object V553;
	base[4]= VV[224];
	vs_top=(vs_base=base+4)+1;
	Lgensym();
	vs_top=sup;
	V548= vs_base[0];
	bds_bind(VV[50],Cnil);
	bds_bind(VV[49],Cnil);
	bds_bind(VV[53],Cnil);
	V547= Cnil;
	V549= Cnil;
	V550= Cnil;
	V551= Cnil;
	V552= Cnil;
	V553= Cnil;
	bds_bind(VV[34],(V544));
	(VV[40]->s.s_dbind)= Ct;
	(void)((*(LnkLI255))());
	{object V554;
	object V555;
	V554= (VV[46]->s.s_dbind);
	V555= (V549);
	V549= (V554);
	(VV[46]->s.s_dbind)= (V555);}
	{object V556;
	object V557;
	V556= (VV[48]->s.s_dbind);
	V557= (V550);
	V550= (V556);
	(VV[48]->s.s_dbind)= (V557);}
	{object V558;
	object V559;
	V558= (VV[43]->s.s_dbind);
	V559= (V551);
	V551= (V558);
	(VV[43]->s.s_dbind)= (V559);}
	{object V560;
	object V561;
	V560= (VV[41]->s.s_dbind);
	V561= (V552);
	V552= (V560);
	(VV[41]->s.s_dbind)= (V561);}
	{object V562;
	object V563;
	V562= (VV[42]->s.s_dbind);
	V563= (V553);
	V553= (V562);
	(VV[42]->s.s_dbind)= (V563);}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	(void)((*(LnkLI257))());
	{object V564;
	object V565;
	V564= (VV[46]->s.s_dbind);
	V565= (V549);
	V549= (V564);
	(VV[46]->s.s_dbind)= (V565);}
	{object V566;
	object V567;
	V566= (VV[48]->s.s_dbind);
	V567= (V550);
	V550= (V566);
	(VV[48]->s.s_dbind)= (V567);}
	{object V568;
	object V569;
	V568= (VV[43]->s.s_dbind);
	V569= (V551);
	V551= (V568);
	(VV[43]->s.s_dbind)= (V569);}
	{object V570;
	object V571;
	V570= (VV[41]->s.s_dbind);
	V571= (V552);
	V552= (V570);
	(VV[41]->s.s_dbind)= (V571);}
	{object V572;
	object V573;
	V572= (VV[42]->s.s_dbind);
	V573= (V553);
	V553= (V572);
	(VV[42]->s.s_dbind)= (V573);}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	goto T1339;
T1339:;
	if(((VV[34]->s.s_dbind))!=Cnil){
	goto T1340;}
	goto T1337;
	goto T1340;
T1340:;
	{VOL object V574;
	frs_push(FRS_CATCH,VV[27]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	V574= vs_base[0];
	goto T1345;}
	else{
	V575= (*(LnkLI251))();
	frs_pop();
	V574= V575;}
	goto T1345;
T1345:;
	if(((V574))==Cnil){
	goto T1348;}
	goto T1344;
	goto T1348;
T1348:;
	if(((VV[34]->s.s_dbind))!=Cnil){
	goto T1351;}
	goto T1337;
	goto T1351;
T1351:;
	(void)(print((VV[34]->s.s_dbind),Cnil));
	{object V576;
	object V577;
	V576= (VV[46]->s.s_dbind);
	V577= (V549);
	V549= (V576);
	(VV[46]->s.s_dbind)= (V577);}
	{object V578;
	object V579;
	V578= (VV[48]->s.s_dbind);
	V579= (V550);
	V550= (V578);
	(VV[48]->s.s_dbind)= (V579);}
	{object V580;
	object V581;
	V580= (VV[43]->s.s_dbind);
	V581= (V551);
	V551= (V580);
	(VV[43]->s.s_dbind)= (V581);}
	{object V582;
	object V583;
	V582= (VV[41]->s.s_dbind);
	V583= (V552);
	V552= (V582);
	(VV[41]->s.s_dbind)= (V583);}
	{object V584;
	object V585;
	V584= (VV[42]->s.s_dbind);
	V585= (V553);
	V553= (V584);
	(VV[42]->s.s_dbind)= (V585);}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	(void)((*(LnkLI261))());
	{object V586;
	object V587;
	V586= (VV[46]->s.s_dbind);
	V587= (V549);
	V549= (V586);
	(VV[46]->s.s_dbind)= (V587);}
	{object V588;
	object V589;
	V588= (VV[48]->s.s_dbind);
	V589= (V550);
	V550= (V588);
	(VV[48]->s.s_dbind)= (V589);}
	{object V590;
	object V591;
	V590= (VV[43]->s.s_dbind);
	V591= (V551);
	V551= (V590);
	(VV[43]->s.s_dbind)= (V591);}
	{object V592;
	object V593;
	V592= (VV[41]->s.s_dbind);
	V593= (V552);
	V552= (V592);
	(VV[41]->s.s_dbind)= (V593);}
	{object V594;
	object V595;
	V594= (VV[42]->s.s_dbind);
	V595= (V553);
	V553= (V594);
	(VV[42]->s.s_dbind)= (V595);}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	(void)(print((VV[34]->s.s_dbind),Cnil));}
	goto T1344;
T1344:;
	goto T1339;
	goto T1337;
T1337:;
	{object V596;
	object V597;
	V596= (VV[46]->s.s_dbind);
	V597= (V549);
	V549= (V596);
	(VV[46]->s.s_dbind)= (V597);}
	{object V598;
	object V599;
	V598= (VV[48]->s.s_dbind);
	V599= (V550);
	V550= (V598);
	(VV[48]->s.s_dbind)= (V599);}
	{object V600;
	object V601;
	V600= (VV[43]->s.s_dbind);
	V601= (V551);
	V551= (V600);
	(VV[43]->s.s_dbind)= (V601);}
	{object V602;
	object V603;
	V602= (VV[41]->s.s_dbind);
	V603= (V552);
	V552= (V602);
	(VV[41]->s.s_dbind)= (V603);}
	{object V604;
	object V605;
	V604= (VV[42]->s.s_dbind);
	V605= (V553);
	V553= (V604);
	(VV[42]->s.s_dbind)= (V605);}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	V547= nreverse((VV[49]->s.s_dbind));
	if((VV[53]->s.s_dbind)==Cnil){
	goto T1470;}
	V547= (*(LnkLI252))((V547));
	goto T1470;
T1470:;
	{object V606;
	V607= list(3,VV[66],Cnil,list(3,VV[61],VV[225],list(2,VV[9],(V548))));
	V608= make_cons(/* INLINE-ARGS */V607,Cnil);
	base[4]= nreverse((VV[48]->s.s_dbind));
	if(((VV[53]->s.s_dbind))==Cnil){
	goto T1476;}
	base[5]= Cnil;
	goto T1475;
	goto T1476;
T1476:;
	base[5]= VV[226];
	goto T1475;
T1475:;
	base[6]= nreverse((VV[41]->s.s_dbind));
	base[7]= (V547);
	base[8]= nreverse((VV[42]->s.s_dbind));
	if(((VV[53]->s.s_dbind))==Cnil){
	goto T1482;}
	base[9]= Cnil;
	goto T1481;
	goto T1482;
T1482:;
	base[9]= VV[227];
	goto T1481;
T1481:;
	V610= nreverse((VV[43]->s.s_dbind));
	base[10]= make_cons((V548),/* INLINE-ARGS */V610);
	vs_top=(vs_base=base+4)+7;
	Lappend();
	vs_top=sup;
	V609= vs_base[0];
	V606= list(3,VV[71],/* INLINE-ARGS */V608,make_cons(VV[73],V609));
	{object V611;
	object V612;
	V611= (VV[46]->s.s_dbind);
	V612= CMPcar((V611));
	goto T1489;
T1489:;
	if(!(((V611))==Cnil)){
	goto T1490;}
	goto T1485;
	goto T1490;
T1490:;
	V613= (*(LnkLI253))((V612));
	if((CMPcdr((V612)))!=Cnil){
	goto T1497;}
	V614= Cnil;
	goto T1496;
	goto T1497;
T1497:;
	V615= make_cons(VV[77],CMPcdr((V612)));
	V614= make_cons(/* INLINE-ARGS */V615,Cnil);
	goto T1496;
T1496:;
	V616= make_cons((V606),Cnil);
	V606= listA(3,VV[12],/* INLINE-ARGS */V613,append(V614,/* INLINE-ARGS */V616));
	V611= CMPcdr((V611));
	V612= CMPcar((V611));
	goto T1489;}
	goto T1485;
T1485:;
	{object V617;
	object V618;
	V617= (VV[46]->s.s_dbind);
	V618= (V549);
	V549= (V617);
	(VV[46]->s.s_dbind)= (V618);}
	{object V619;
	object V620;
	V619= (VV[48]->s.s_dbind);
	V620= (V550);
	V550= (V619);
	(VV[48]->s.s_dbind)= (V620);}
	{object V621;
	object V622;
	V621= (VV[43]->s.s_dbind);
	V622= (V551);
	V551= (V621);
	(VV[43]->s.s_dbind)= (V622);}
	{object V623;
	object V624;
	V623= (VV[41]->s.s_dbind);
	V624= (V552);
	V552= (V623);
	(VV[41]->s.s_dbind)= (V624);}
	{object V625;
	object V626;
	V625= (VV[42]->s.s_dbind);
	V626= (V553);
	V553= (V625);
	(VV[42]->s.s_dbind)= (V626);}
	(VV[50]->s.s_dbind)= (((VV[50]->s.s_dbind))==Cnil?Ct:Cnil);
	{object V627 = list(2,VV[56],(V606));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR59(V627)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function IN-CAREFULLY-SLOOP-FOR	*/

static object LI60(V630,V631)

object V630;object V631;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;
	{register object V632;
	base[0]= VV[228];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V632= vs_base[0];
	base[0]= VV[87];
	base[1]= (V632);
	base[2]= VV[5];
	base[3]= VV[87];
	base[4]= (V630);
	base[5]= VV[97];
	base[6]= list(3,VV[15],(V632),(V631));
	base[7]= VV[56];
	base[8]= list(3,VV[139],(V630),list(2,VV[17],(V632)));
	base[9]= VV[90];
	base[10]= list(3,VV[5],list(2,VV[229],(V632)),VV[230]);
	base[11]= VV[89];
	base[12]= list(3,VV[15],(V632),list(2,VV[18],(V632)));
	vs_top=(vs_base=base+0)+13;
	Llist();
	vs_top=sup;
	{object V633 = vs_base[0];
	VMR60(V633)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIRST-USE-SLOOP-FOR	*/

static object LI61(V638,V639,V640,V641)

object V638;object V639;object V640;object V641;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;{object V642;
	V642= (*(LnkLI10))((V640),VV[223]);
	if(V642==Cnil)goto T1557;
	goto T1556;
	goto T1557;
T1557:;}
	base[0]= VV[231];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1556;
T1556:;
	V643= list(3,VV[139],(V638),(V639));
	{object V644 = list(6,VV[87],(V638),VV[97],/* INLINE-ARGS */V643,VV[89],list(3,VV[139],(V638),(V641)));
	VMR61(V644)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIRST-SLOOP-FOR	*/

static object LI62(V649,V650,V651,V652)

register object V649;object V650;object V651;object V652;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;{object V653;
	V653= (*(LnkLI10))((V651),VV[223]);
	if(V653==Cnil)goto T1561;
	goto T1560;
	goto T1561;
T1561:;}
	base[0]= VV[232];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1560;
T1560:;
	if(((VV[42]->s.s_dbind))!=Cnil){
	goto T1565;}
	V654= list(3,VV[139],(V649),(V650));
	{object V655 = list(6,VV[87],(V649),VV[97],/* INLINE-ARGS */V654,VV[89],list(3,VV[139],(V649),(V652)));
	VMR62(V655)}
	goto T1565;
T1565:;
	{object V656;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V656= vs_base[0];
	V657= list(2,(V656),list(3,VV[139],(V649),(V652)));
	V658= list(3,VV[14],/* INLINE-ARGS */V657,list(2,Ct,list(3,VV[139],(V649),(V650))));
	{object V659 = list(8,VV[87],(V649),VV[87],(V656),VV[56],/* INLINE-ARGS */V658,VV[89],list(3,VV[139],(V656),Ct));
	VMR62(V659)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for FIND-IN-ORDERED-LIST	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_check;
	{register object V660;
	object V661;
	register object V662;
	V660=(base[0]);
	V661=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T1568;}
	V662=(base[2]);
	vs_top=sup;
	goto T1569;
	goto T1568;
T1568:;
	V662= (VV[233]->s.s_dbind);
	goto T1569;
T1569:;
	{register object V663;
	V663= Cnil;
	{register object V664;
	V664= (V661);
	goto T1573;
T1573:;
	if(((V664))!=Cnil){
	goto T1574;}
	base[3]= (V663);
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1574;
T1574:;
	if(!(eql(CMPcar((V664)),(V660)))){
	goto T1582;}
	base[3]= (V664);
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1582;
T1582:;
	base[3]= (V660);
	base[4]= CMPcar((V664));
	vs_top=(vs_base=base+3)+2;
	super_funcall_no_event((V662));
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1580;}
	base[3]= (V663);
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T1580;
T1580:;
	V663= (V664);
	V664= CMPcdr((V664));
	goto T1573;}}
	}
}
/*	local entry for function COLLATE-SLOOP-COLLECT	*/

static object LI64(V667,V668)

object V667;object V668;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	V669= list(3,VV[236],(V668),(V667));
	V670= list(2,VV[238],list(3,VV[15],VV[239],list(3,VV[119],(V668),VV[240])));
	{object V671 = list(2,VV[56],list(4,VV[234],VV[235],/* INLINE-ARGS */V669,list(3,VV[104],VV[237],list(3,VV[14],/* INLINE-ARGS */V670,list(2,Ct,list(3,VV[15],(V667),list(3,VV[119],(V668),(V667))))))));
	VMR64(V671)}
	return Cnil;
}
/*	local entry for function IN-FRINGE-SLOOP-MAP	*/

static object LI65(V674,V675)

register object V674;object V675;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	{register object V676;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V676= vs_base[0];
	V677= make_cons((V674),Cnil);
	V678= list(2,(V676),VV[244]);
	V679= make_cons(/* INLINE-ARGS */V678,Cnil);
	V680= list(2,VV[140],(V676));
	V681= make_cons(/* INLINE-ARGS */V680,Cnil);
	V682= list(2,VV[229],(V676));
	V683= list(3,VV[15],(V674),(V676));
	V684= list(3,/* INLINE-ARGS */V682,/* INLINE-ARGS */V683,list(3,VV[15],(V676),Cnil));
	V685= list(3,VV[15],(V674),list(2,VV[17],(V676)));
	V686= list(3,VV[14],/* INLINE-ARGS */V684,list(3,Ct,/* INLINE-ARGS */V685,list(3,VV[15],(V676),list(2,VV[18],(V676)))));
	V687= list(2,VV[140],(V674));
	V688= make_cons(/* INLINE-ARGS */V687,Cnil);
	V689= list(2,VV[229],(V674));
	V690= make_cons(/* INLINE-ARGS */V689,VV[245]);
	V691= list(3,VV[242],VV[243],list(5,VV[56],/* INLINE-ARGS */V679,/* INLINE-ARGS */V681,/* INLINE-ARGS */V686,list(4,VV[14],/* INLINE-ARGS */V688,/* INLINE-ARGS */V690,list(2,Ct,list(2,VV[242],(V674))))));
	V692= make_cons(/* INLINE-ARGS */V691,Cnil);
	{object V693 = list(3,VV[12],/* INLINE-ARGS */V677,list(3,VV[241],/* INLINE-ARGS */V692,list(2,VV[242],(V675))));
	VMR65(V693)}}
	base[0]=base[0];
	return Cnil;
}
static void LnkT277(){ call_or_link(VV[277],(void **)(void *)&Lnk277);} /* SUBTYPEP */
static object  LnkTLI276(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[276],(void **)(void *)&LnkLI276,2,first,ap);va_end(ap);return V1;} /* THE-TYPE */
static object  LnkTLI275(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[275],(void **)(void *)&LnkLI275,2,first,ap);va_end(ap);return V1;} /* PARSE-LOOP-MAP */
static object  LnkTLI274(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[274],(void **)(void *)&LnkLI274,first,ap);va_end(ap);return V1;} /* ADD-FROM-DATA */
static object  LnkTLI273(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[273],(void **)(void *)&LnkLI273,first,ap);va_end(ap);return V1;} /* LOOP-DECLARE-BINDING */
static object  LnkTLI272(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[272],(void **)(void *)&LnkLI272,2,first,ap);va_end(ap);return V1;} /* MAKE-VALUE */
static void LnkT129(){ call_or_link(VV[129],(void **)(void *)&Lnk129);} /* TYPEP */
static object  LnkTLI271(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[271],(void **)(void *)&LnkLI271,3,first,ap);va_end(ap);return V1;} /* LOOP-PARSE-ADDITIONAL-COLLECTIONS */
static object  LnkTLI270(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[270],(void **)(void *)&LnkLI270,1,first,ap);va_end(ap);return V1;} /* POINTER-FOR-COLLECT */
static object  LnkTLI269(){return call_proc0(VV[269],(void **)(void *)&LnkLI269);} /* PARSE-ONE-WHEN-CLAUSE */
static object  LnkTLI268(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[268],(void **)(void *)&LnkLI268,first,ap);va_end(ap);return V1;} /* LOOP-ADD-TEMPS */
static object  LnkTLI267(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[267],(void **)(void *)&LnkLI267,first,ap);va_end(ap);return V1;} /* LOOP-ADD-BINDING */
static object  LnkTLI266(){return call_proc0(VV[266],(void **)(void *)&LnkLI266);} /* LOOP-UN-POP */
static object  LnkTLI265(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[265],(void **)(void *)&LnkLI265,first,ap);va_end(ap);return V1;} /* PARSE-LOOP-MACRO */
static object  LnkTLI264(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[264],(void **)(void *)&LnkLI264,first,ap);va_end(ap);return V1;} /* PARSE-LOOP-DECLARE */
static object  LnkTLI263(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[263],(void **)(void *)&LnkLI263,first,ap);va_end(ap);return V1;} /* PARSE-LOOP-WITH */
static object  LnkTLI262(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[262],(void **)(void *)&LnkLI262,1,first,ap);va_end(ap);return V1;} /* PARSE-LOOP-INITIALLY */
static object  LnkTLI261(){return call_proc0(VV[261],(void **)(void *)&LnkLI261);} /* PARSE-LOOP-COLLECT */
static object  LnkTLI260(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[260],(void **)(void *)&LnkLI260,1,first,ap);va_end(ap);return V1;} /* LOOP-COLLECT-KEYWORD-P */
static object  LnkTLI259(){return call_proc0(VV[259],(void **)(void *)&LnkLI259);} /* PARSE-LOOP-WHEN */
static object  LnkTLI258(){return call_proc0(VV[258],(void **)(void *)&LnkLI258);} /* PARSE-LOOP-DO */
static object  LnkTLI257(){return call_proc0(VV[257],(void **)(void *)&LnkLI257);} /* PARSE-LOOP-FOR */
static object  LnkTLI256(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[256],(void **)(void *)&LnkLI256,1,first,ap);va_end(ap);return V1;} /* PARSE-NO-BODY */
static object  LnkTLI255(){return call_proc0(VV[255],(void **)(void *)&LnkLI255);} /* LOOP-POP */
static object  LnkTLI10(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[10],(void **)(void *)&LnkLI10,2,first,ap);va_end(ap);return V1;} /* L-EQUAL */
static object  LnkTLI254(){return call_proc0(VV[254],(void **)(void *)&LnkLI254);} /* LOOP-PEEK */
static object  LnkTLI13(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[13],(void **)(void *)&LnkLI13,1,first,ap);va_end(ap);return V1;} /* TRANSLATE-NAME */
static object  LnkTLI253(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[253],(void **)(void *)&LnkLI253,1,first,ap);va_end(ap);return V1;} /* LOOP-LET-BINDINGS */
static object  LnkTLI252(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[252],(void **)(void *)&LnkLI252,1,first,ap);va_end(ap);return V1;} /* SUBSTITUTE-SLOOP-BODY */
static object  LnkTLI251(){return call_proc0(VV[251],(void **)(void *)&LnkLI251);} /* PARSE-LOOP1 */
static object  LnkTLI249(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[249],(void **)(void *)&LnkLI249,first,ap);va_end(ap);return V1;} /* FIND */
static object  LnkTLI248(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[248],(void **)(void *)&LnkLI248,first,ap);va_end(ap);return V1;} /* DEF-LOOP-INTERNAL */
static object  LnkTLI247(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[247],(void **)(void *)&LnkLI247,1,first,ap);va_end(ap);return V1;} /* PARSE-LOOP */
static object  LnkTLI246(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[246],(void **)(void *)&LnkLI246,2,first,ap);va_end(ap);return V1;} /* DESETQ1 */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

