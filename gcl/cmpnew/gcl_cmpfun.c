
#include "cmpinclude.h"
#include "gcl_cmpfun.h"
void init_gcl_cmpfun(){do_init(VV);}
/*	local entry for function C1PRINC	*/

static object LI1(V2)

register object V2;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	{register object V3;
	register object V4;
	V3= Cnil;
	V4= (VFUN_NARGS=0,(*(LnkLI208))());
	if(!(((V2))==Cnil)){
	goto T3;}
	(void)((*(LnkLI209))(VV[0],small_fixnum(1),small_fixnum(0)));
	goto T3;
T3:;
	if((CMPcdr((V2)))==Cnil){
	goto T6;}
	if((CMPcddr((V2)))==Cnil){
	goto T6;}
	V5 = CMPmake_fixnum((long)length((V2)));
	(void)((*(LnkLI210))(VV[0],small_fixnum(2),V5));
	goto T6;
T6:;
	if(!((CMPcdr((V2)))==Cnil)){
	goto T14;}
	V3= (*(LnkLI211))();
	goto T12;
	goto T14;
T14:;
	V3= (*(LnkLI212))(CMPcadr((V2)),(V4));
	goto T12;
T12:;
	if(!(type_of(CMPcar((V2)))==t_string)){
	goto T19;}
	V6 = CMPmake_fixnum((long)length(CMPcar((V2))));
	if(number_compare(V6,(VV[1]->s.s_dbind))<=0){
	goto T18;}
	goto T19;
T19:;
	if(!(type_of(CMPcar((V2)))==t_character)){
	goto T17;}
	goto T18;
T18:;
	if((CMPcdr((V2)))==Cnil){
	goto T16;}
	if(!((CMPcar((V3)))==(VV[2]))){
	goto T17;}
	{register object x= STREF(object,CMPcaaddr((V3)),4),V7= VV[3];
	while(V7!=Cnil)
	if(eql(x,V7->c.c_car)){
	goto T28;
	}else V7=V7->c.c_cdr;
	goto T17;}
	goto T28;
T28:;
	goto T16;
T16:;
	V8= CMPcar((V2));
	if(!((CMPcdr((V2)))==Cnil)){
	goto T31;}
	V9= Cnil;
	goto T29;
	goto T31;
T31:;
	V9= STREF(object,CMPcaaddr((V3)),16);
	goto T29;
T29:;
	{object V10 = list(5,VV[0],(V4),/* INLINE-ARGS */V8,V9,(V3));
	VMR1(V10)}
	goto T17;
T17:;
	V11= (*(LnkLI212))(CMPcar((V2)),(V4));
	{object V12 = list(4,VV[4],(V4),VV[0],list(2,/* INLINE-ARGS */V11,(V3)));
	VMR1(V12)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2PRINC	*/

static object LI2(V16,V17,V18)

register object V16;register object V17;object V18;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(!(((VV[5]->s.s_dbind))==(VV[6]))){
	goto T34;}
	if(!(type_of((V16))==t_character)){
	goto T38;}
	princ_str("\n	princ_char(",VV[7]);
	base[0]= (V16);
	vs_top=(vs_base=base+0)+1;
	Lchar_code();
	vs_top=sup;
	V19= vs_base[0];
	(void)((*(LnkLI213))(V19));
	if(((V17))!=Cnil){
	goto T47;}
	princ_str(",Cnil",VV[7]);
	goto T45;
	goto T47;
T47:;
	princ_str(",VV[",VV[7]);
	(void)((*(LnkLI213))((V17)));
	princ_char(93,VV[7]);
	goto T45;
T45:;
	princ_str(");",VV[7]);
	goto T36;
	goto T38;
T38:;
	if(!(((long)length((V16)))==(1))){
	goto T55;}
	princ_str("\n	princ_char(",VV[7]);
	base[0]= aref1((V16),fix(small_fixnum(0)));
	vs_top=(vs_base=base+0)+1;
	Lchar_code();
	vs_top=sup;
	V20= vs_base[0];
	(void)((*(LnkLI213))(V20));
	if(((V17))!=Cnil){
	goto T64;}
	princ_str(",Cnil",VV[7]);
	goto T62;
	goto T64;
T64:;
	princ_str(",VV[",VV[7]);
	(void)((*(LnkLI213))((V17)));
	princ_char(93,VV[7]);
	goto T62;
T62:;
	princ_str(");",VV[7]);
	goto T36;
	goto T55;
T55:;
	princ_str("\n	princ_str(\"",VV[7]);
	{register long V21;
	register long V22;
	V21= (long)length((V16));
	V22= 0;
	goto T77;
T77:;
	if(!((V22)>=(V21))){
	goto T78;}
	goto T73;
	goto T78;
T78:;
	{register object V23;
	V24 = CMPmake_fixnum(V22);
	V23= code_char(((V16))->ust.ust_self[fix(V24)]);
	if(!(char_code((V23))==char_code(VV[8]))){
	goto T85;}
	princ_str("\\\\",VV[7]);
	goto T82;
	goto T85;
T85:;
	if(!(char_code((V23))==char_code(VV[9]))){
	goto T89;}
	princ_str("\\\"",VV[7]);
	goto T82;
	goto T89;
T89:;
	if(!(char_code((V23))==char_code(VV[10]))){
	goto T93;}
	princ_str("\\n",VV[7]);
	goto T82;
	goto T93;
T93:;
	(void)((*(LnkLI213))((V23)));}
	goto T82;
T82:;
	V22= (long)(V22)+1;
	goto T77;}
	goto T73;
T73:;
	princ_str("\",",VV[7]);
	if(((V17))!=Cnil){
	goto T104;}
	princ_str("Cnil",VV[7]);
	goto T102;
	goto T104;
T104:;
	princ_str("VV[",VV[7]);
	(void)((*(LnkLI213))((V17)));
	princ_char(93,VV[7]);
	goto T102;
T102:;
	princ_str(");",VV[7]);
	goto T36;
T36:;
	{object V25 = (VFUN_NARGS=1,(*(LnkLI214))(Cnil));
	VMR2(V25)}
	goto T34;
T34:;
	if(type_of(V16)==t_character){
	goto T114;}
	goto T112;
	goto T114;
T114:;
	if(!(((long)(10))==((long)(char_code(V16))))){
	goto T112;}
	V27= make_cons((V18),Cnil);
	{object V28 = (*(LnkLI215))(VV[11],/* INLINE-ARGS */V27,Cnil,Ct);
	VMR2(V28)}
	goto T112;
T112:;
	if(!(type_of((V16))==t_character)){
	goto T118;}
	V29= VV[14];
	goto T116;
	goto T118;
T118:;
	V29= VV[15];
	goto T116;
T116:;
	V30= (VFUN_NARGS=2,(*(LnkLI208))(VV[13],V29));
	V31= list(2,list(3,VV[12],/* INLINE-ARGS */V30,list(2,VV[16],(*(LnkLI216))((V16)))),(V18));
	{object V32 = (*(LnkLI215))(VV[0],/* INLINE-ARGS */V31,Cnil,Ct);
	VMR2(V32)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1TERPRI	*/

static object LI3(V34)

register object V34;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{register object V35;
	object V36;
	V35= Cnil;
	V36= (VFUN_NARGS=0,(*(LnkLI208))());
	if(((V34))==Cnil){
	goto T122;}
	if((CMPcdr((V34)))==Cnil){
	goto T122;}
	V37 = CMPmake_fixnum((long)length((V34)));
	(void)((*(LnkLI210))(VV[11],small_fixnum(1),V37));
	goto T122;
T122:;
	if(!(((V34))==Cnil)){
	goto T130;}
	V35= (*(LnkLI211))();
	goto T128;
	goto T130;
T130:;
	V35= (*(LnkLI212))(CMPcar((V34)),(V36));
	goto T128;
T128:;
	if(((V34))==Cnil){
	goto T132;}
	if(!((CMPcar((V35)))==(VV[2]))){
	goto T133;}
	{register object x= STREF(object,CMPcaaddr((V35)),4),V38= VV[17];
	while(V38!=Cnil)
	if(eql(x,V38->c.c_car)){
	goto T138;
	}else V38=V38->c.c_cdr;
	goto T133;}
	goto T138;
T138:;
	goto T132;
T132:;
	if(!(((V34))==Cnil)){
	goto T141;}
	V39= Cnil;
	goto T139;
	goto T141;
T141:;
	V39= STREF(object,CMPcaaddr((V35)),16);
	goto T139;
T139:;
	{object V40 = list(5,VV[0],(V36),VV[10],V39,(V35));
	VMR3(V40)}
	goto T133;
T133:;
	{object V41 = list(4,VV[4],(V36),VV[11],make_cons((V35),Cnil));
	VMR3(V41)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1APPLY	*/

static object LI4(V43)

register object V43;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{register object V44;
	V44= Cnil;
	if(((V43))==Cnil){
	goto T145;}
	if(!((CMPcdr((V43)))==Cnil)){
	goto T144;}
	goto T145;
T145:;
	V45 = CMPmake_fixnum((long)length((V43)));
	(void)((*(LnkLI209))(VV[18],small_fixnum(2),V45));
	goto T144;
T144:;
	{register object V46;
	V46= (*(LnkLI217))(CMPcar((V43)));
	base[0]= CMPcadr((V46));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk218)();
	vs_top=sup;
	V44= vs_base[0];
	V43= (*(LnkLI219))(CMPcdr((V43)),(V44));
	if(!((CMPcar((V46)))==(VV[19]))){
	goto T156;}
	{object V47;
	register object V48;
	V47= CMPcaddr((V46));
	V48= CMPcaddr((V47));
	if((CMPcadr((V48)))!=Cnil){
	goto T161;}
	if((CMPcadddr((V48)))!=Cnil){
	goto T161;}
	{object V49 = (*(LnkLI220))((V44),CMPcar((V48)),CMPcaddr((V48)),CMPcar(CMPcddddr((V47))),(V43));
	VMR4(V49)}
	goto T161;
T161:;
	{object V50 = list(4,VV[18],(V44),(V46),(V43));
	VMR4(V50)}}
	goto T156;
T156:;
	{object V51 = list(4,VV[18],(V44),(V46),(V43));
	VMR4(V51)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2APPLY	*/

static object LI5(V54,V55)

object V54;object V55;
{	 VMB5 VMS5 VMV5
	bds_check;
	goto TTL;
TTL:;
	{object V56;
	bds_bind(VV[20],(VV[20]->s.s_dbind));
	V56= Cnil;
	V56= (*(LnkLI221))((V54));
	{object V57;
	register object V58;
	base[1]= (VV[20]->s.s_dbind);
	V57= (VV[20]->s.s_dbind);
	(VV[22]->s.s_dbind)= number_plus((VV[22]->s.s_dbind),small_fixnum(1));
	V58= list(2,VV[21],(VV[22]->s.s_dbind));
	bds_bind(VV[20],base[1]);
	{register object V59;
	V59= (V55);
	goto T175;
T175:;
	if(!((CMPcdr((V59)))==Cnil)){
	goto T176;}
	princ_str("\n	{object ",VV[7]);
	(void)((*(LnkLI213))((V58)));
	princ_char(59,VV[7]);
	bds_bind(VV[5],(V58));
	V60= (*(LnkLI222))(CMPcar((V59)));
	bds_unwind1;
	goto T173;
	goto T176;
T176:;
	base[2]= list(2,VV[23],(*(LnkLI223))());
	bds_bind(VV[5],base[2]);
	V61= (*(LnkLI222))(CMPcar((V59)));
	bds_unwind1;
	V59= CMPcdr((V59));
	goto T175;}
	goto T173;
T173:;
	princ_str("\n	 vs_top=base+",VV[7]);
	(void)((*(LnkLI213))((VV[20]->s.s_dbind)));
	princ_char(59,VV[7]);
	(VV[24]->s.s_dbind)= Ct;
	if(((VV[25]->s.s_dbind))==Cnil){
	goto T197;}
	princ_str("\n	 while(!endp(",VV[7]);
	(void)((*(LnkLI213))((V58)));
	princ_str("))",VV[7]);
	princ_str("\n	 {vs_push(car(",VV[7]);
	(void)((*(LnkLI213))((V58)));
	princ_str("));",VV[7]);
	(void)((*(LnkLI213))((V58)));
	princ_str("=cdr(",VV[7]);
	(void)((*(LnkLI213))((V58)));
	princ_str(");}",VV[7]);
	goto T195;
	goto T197;
T197:;
	princ_str("\n	 while(",VV[7]);
	(void)((*(LnkLI213))((V58)));
	princ_str("!=Cnil)",VV[7]);
	princ_str("\n	 {vs_push((",VV[7]);
	(void)((*(LnkLI213))((V58)));
	princ_str(")->c.c_car);",VV[7]);
	(void)((*(LnkLI213))((V58)));
	princ_str("=(",VV[7]);
	(void)((*(LnkLI213))((V58)));
	princ_str(")->c.c_cdr;}",VV[7]);
	goto T195;
T195:;
	princ_str("\n	vs_base=base+",VV[7]);
	(void)((*(LnkLI213))((V57)));
	princ_str(";}",VV[7]);
	(VV[24]->s.s_dbind)= Ct;
	bds_unwind1;}
	{object V62 = (VFUN_NARGS=3,(*(LnkLI224))((V54),VV[26],(V56)));
	bds_unwind1;
	VMR5(V62)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1APPLY-OPTIMIZE	*/

static object LI6(V68,V69,V70,V71,V72)

object V68;register object V69;object V70;object V71;register object V72;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{register object V73;
	register object V74;
	V73= Cnil;
	V74= Cnil;
	goto T232;
T232:;
	if((CMPcdr((V72)))==Cnil){
	goto T234;}
	if(!(((V69))==Cnil)){
	goto T233;}
	goto T234;
T234:;
	goto T230;
	goto T233;
T233:;
	{register object V75;
	{register object V76;
	V76= CMPcar((V69));
	V69= CMPcdr((V69));
	V75= (V76);}
	V73= make_cons((V75),(V73));}
	{register object V77;
	{register object V78;
	V78= CMPcar((V72));
	V72= CMPcdr((V72));
	V77= (V78);}
	V74= make_cons((V77),(V74));}
	goto T232;
	goto T230;
T230:;
	if((CMPcdr((V72)))==Cnil){
	goto T254;}
	if(((V70))!=Cnil){
	goto T256;}
	(void)((VFUN_NARGS=1,(*(LnkLI225))(VV[27])));
	goto T256;
T256:;
	V73= make_cons(V70,(V73));
	{object V80;
	V80= list(4,VV[4],(V68),VV[28],(V72));
	V74= make_cons((V80),(V74));}
	V81= reverse((V73));
	{object V82 = list(5,VV[29],(V68),/* INLINE-ARGS */V81,reverse((V74)),(V71));
	VMR6(V82)}
	goto T254;
T254:;
	if(((V69))==Cnil){
	goto T265;}
	{object V83;
	V83= (VFUN_NARGS=4,(*(LnkLI226))(VV[30],VV[31],VV[32],Ct));
	V73= make_cons(V83,(V73));
	{object V85;
	V85= CMPcar((V72));
	V74= make_cons((V85),(V74));}
	V86= reverse((V73));
	V87= reverse((V74));
	{object V88 = list(5,VV[29],(V68),/* INLINE-ARGS */V86,/* INLINE-ARGS */V87,list(6,VV[33],CMPcadr((V71)),(V83),(V69),(V70),(V71)));
	VMR6(V88)}}
	goto T265;
T265:;
	if(((V70))==Cnil){
	goto T274;}
	V73= make_cons(V70,(V73));
	{object V90;
	V90= CMPcar((V72));
	V74= make_cons((V90),(V74));}
	V91= reverse((V73));
	{object V92 = list(5,VV[29],(V68),/* INLINE-ARGS */V91,reverse((V74)),(V71));
	VMR6(V92)}
	goto T274;
T274:;
	{object V93;
	V93= (VFUN_NARGS=4,(*(LnkLI226))(VV[30],VV[31],VV[32],Ct));
	V73= make_cons(V93,(V73));
	{object V95;
	V95= CMPcar((V72));
	V74= make_cons((V95),(V74));}
	V96= reverse((V73));
	V97= reverse((V74));
	{object V98 = list(5,VV[29],(V68),/* INLINE-ARGS */V96,/* INLINE-ARGS */V97,list(6,VV[33],CMPcadr((V71)),(V93),(V69),(V70),(V71)));
	VMR6(V98)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C2APPLY-OPTIMIZE	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	bds_check;
	{object V99;
	object V100;
	object V101;
	object V102;
	V99=(base[0]);
	V100=(base[1]);
	V101=(base[2]);
	V102=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[34],(VV[34]->s.s_dbind));
	bds_bind(VV[20],(VV[20]->s.s_dbind));
	bds_bind(VV[35],(VV[35]->s.s_dbind));
	bds_bind(VV[36],(VV[36]->s.s_dbind));
	if(((VV[25]->s.s_dbind))!=Cnil){
	goto T288;}
	if(((VV[37]->s.s_dbind))==Cnil){
	goto T287;}
	goto T288;
T288:;
	princ_str("\n	",VV[7]);
	if(((V101))==Cnil){
	goto T297;}
	V103= VV[38];
	goto T295;
	goto T297;
T297:;
	V103= VV[39];
	goto T295;
T295:;
	(void)((*(LnkLI213))(V103));
	princ_char(40,VV[7]);
	V104 = CMPmake_fixnum((long)length((V100)));
	(void)((*(LnkLI213))(V104));
	princ_char(44,VV[7]);
	(void)((*(LnkLI227))((V99),Cnil));
	princ_str(");",VV[7]);
	goto T287;
T287:;
	{object V105;
	object V106;
	V105= (V100);
	V106= CMPcar((V105));
	goto T308;
T308:;
	if(!(((V105))==Cnil)){
	goto T309;}
	goto T304;
	goto T309;
T309:;
	V107= (*(LnkLI223))();
	V108= Ct;
	STSET(object,(V106),8, /* INLINE-ARGS */V107);
	(void)(/* INLINE-ARGS */V107);
	V105= CMPcdr((V105));
	V106= CMPcar((V105));
	goto T308;}
	goto T304;
T304:;
	if(((V101))==Cnil){
	goto T319;}
	V109= (*(LnkLI223))();
	V110= Ct;
	STSET(object,(V101),8, /* INLINE-ARGS */V109);
	(void)(/* INLINE-ARGS */V109);
	goto T319;
T319:;
	{register long V111;
	object V112;
	V111= 0;
	V112= (V100);
	goto T325;
T325:;
	if(!(((V112))==Cnil)){
	goto T326;}
	if(((V101))==Cnil){
	goto T322;}
	princ_str("\n	",VV[7]);
	(void)((*(LnkLI228))(STREF(object,(V101),8)));
	princ_str("= ",VV[7]);
	{long V113;
	register long V114;
	V113= V111;
	V114= 0;
	goto T339;
T339:;
	if(!((V114)>=(V113))){
	goto T340;}
	goto T335;
	goto T340;
T340:;
	princ_char(40,VV[7]);
	V114= (long)(V114)+1;
	goto T339;}
	goto T335;
T335:;
	(void)((*(LnkLI227))((V99),Cnil));
	{long V115;
	register long V116;
	V115= V111;
	V116= 0;
	goto T354;
T354:;
	if(!((V116)>=(V115))){
	goto T355;}
	goto T350;
	goto T355;
T355:;
	princ_str("\n	)->c.c_cdr",VV[7]);
	V116= (long)(V116)+1;
	goto T354;}
	goto T350;
T350:;
	princ_char(59,VV[7]);
	goto T322;
	goto T326;
T326:;
	princ_str("\n	",VV[7]);
	(void)((*(LnkLI228))(STREF(object,CMPcar((V112)),8)));
	princ_str("=(",VV[7]);
	{long V117;
	register long V118;
	V117= V111;
	V118= 0;
	goto T374;
T374:;
	if(!((V118)>=(V117))){
	goto T375;}
	goto T370;
	goto T375;
T375:;
	princ_char(40,VV[7]);
	V118= (long)(V118)+1;
	goto T374;}
	goto T370;
T370:;
	(void)((*(LnkLI227))((V99),Cnil));
	{long V119;
	register long V120;
	V119= V111;
	V120= 0;
	goto T389;
T389:;
	if(!((V120)>=(V119))){
	goto T390;}
	goto T385;
	goto T390;
T390:;
	princ_str("\n	)->c.c_cdr",VV[7]);
	V120= (long)(V120)+1;
	goto T389;}
	goto T385;
T385:;
	princ_str(")->c.c_car;",VV[7]);
	V111= (long)(V111)+1;
	V112= CMPcdr((V112));
	goto T325;}
	goto T322;
T322:;
	{object V121;
	object V122;
	V121= (V100);
	V122= CMPcar((V121));
	goto T409;
T409:;
	if(!(((V121))==Cnil)){
	goto T410;}
	goto T405;
	goto T410;
T410:;
	(void)((*(LnkLI229))((V122)));
	V121= CMPcdr((V121));
	V122= CMPcar((V121));
	goto T409;}
	goto T405;
T405:;
	if(((V101))==Cnil){
	goto T420;}
	(void)((*(LnkLI229))((V101)));
	goto T420;
T420:;
	base[8]= (V102);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk230)();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function C1FUNCALL	*/

static object LI8(V124)

object V124;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V125;
	object V126;
	V125= Cnil;
	V126= (VFUN_NARGS=0,(*(LnkLI208))());
	if(!(((V124))==Cnil)){
	goto T426;}
	(void)((*(LnkLI209))(VV[40],small_fixnum(1),small_fixnum(0)));
	goto T426;
T426:;
	V125= (*(LnkLI217))(CMPcar((V124)));
	(void)((*(LnkLI231))((V126),CMPcadr((V125))));
	{object V127 = list(4,VV[40],(V126),(V125),(*(LnkLI219))(CMPcdr((V124)),(V126)));
	VMR8(V127)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1RPLACA	*/

static object LI9(V129)

register object V129;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{object V130;
	V130= (VFUN_NARGS=0,(*(LnkLI208))());
	if(((V129))==Cnil){
	goto T434;}
	if(!((CMPcdr((V129)))==Cnil)){
	goto T433;}
	goto T434;
T434:;
	V131 = CMPmake_fixnum((long)length((V129)));
	(void)((*(LnkLI209))(VV[41],small_fixnum(2),V131));
	goto T433;
T433:;
	if((CMPcddr((V129)))==Cnil){
	goto T438;}
	V132 = CMPmake_fixnum((long)length((V129)));
	(void)((*(LnkLI210))(VV[41],small_fixnum(2),V132));
	goto T438;
T438:;
	V129= (*(LnkLI219))((V129),(V130));
	{object V133 = list(3,VV[41],(V130),(V129));
	VMR9(V133)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2RPLACA	*/

static object LI10(V135)

register object V135;
{	 VMB10 VMS10 VMV10
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[20],(VV[20]->s.s_dbind));
	bds_bind(VV[42],small_fixnum(0));
	V135= (VFUN_NARGS=2,(*(LnkLI232))((V135),VV[43]));
	if(((VV[25]->s.s_dbind))==Cnil){
	goto T445;}
	princ_str("\n	if(type_of(",VV[7]);
	(void)((*(LnkLI213))(CMPcar((V135))));
	princ_str(")!=t_cons)",VV[7]);
	princ_str("FEwrong_type_argument(Scons,",VV[7]);
	(void)((*(LnkLI213))(CMPcar((V135))));
	princ_str(");",VV[7]);
	goto T445;
T445:;
	princ_str("\n	(",VV[7]);
	(void)((*(LnkLI213))(CMPcar((V135))));
	princ_str(")->c.c_car = ",VV[7]);
	(void)((*(LnkLI213))(CMPcadr((V135))));
	princ_char(59,VV[7]);
	(void)((VFUN_NARGS=1,(*(LnkLI214))(CMPcar((V135)))));
	{object V136 = (*(LnkLI233))();
	bds_unwind1;
	bds_unwind1;
	VMR10(V136)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1RPLACD	*/

static object LI11(V138)

register object V138;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V139;
	V139= (VFUN_NARGS=0,(*(LnkLI208))());
	if(((V138))==Cnil){
	goto T463;}
	if(!((CMPcdr((V138)))==Cnil)){
	goto T462;}
	goto T463;
T463:;
	V140 = CMPmake_fixnum((long)length((V138)));
	(void)((*(LnkLI209))(VV[44],small_fixnum(2),V140));
	goto T462;
T462:;
	if((CMPcddr((V138)))==Cnil){
	goto T467;}
	V141 = CMPmake_fixnum((long)length((V138)));
	(void)((*(LnkLI210))(VV[44],small_fixnum(2),V141));
	goto T467;
T467:;
	V138= (*(LnkLI219))((V138),(V139));
	{object V142 = list(3,VV[44],(V139),(V138));
	VMR11(V142)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2RPLACD	*/

static object LI12(V144)

register object V144;
{	 VMB12 VMS12 VMV12
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[20],(VV[20]->s.s_dbind));
	bds_bind(VV[42],small_fixnum(0));
	V144= (VFUN_NARGS=2,(*(LnkLI232))((V144),VV[45]));
	if(((VV[25]->s.s_dbind))==Cnil){
	goto T474;}
	princ_str("\n	if(type_of(",VV[7]);
	(void)((*(LnkLI213))(CMPcar((V144))));
	princ_str(")!=t_cons)",VV[7]);
	princ_str("FEwrong_type_argument(Scons,",VV[7]);
	(void)((*(LnkLI213))(CMPcar((V144))));
	princ_str(");",VV[7]);
	goto T474;
T474:;
	princ_str("\n	(",VV[7]);
	(void)((*(LnkLI213))(CMPcar((V144))));
	princ_str(")->c.c_cdr = ",VV[7]);
	(void)((*(LnkLI213))(CMPcadr((V144))));
	princ_char(59,VV[7]);
	(void)((VFUN_NARGS=1,(*(LnkLI214))(CMPcar((V144)))));
	{object V145 = (*(LnkLI233))();
	bds_unwind1;
	bds_unwind1;
	VMR12(V145)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1MEMQ	*/

static object LI13(V147)

register object V147;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V148;
	V148= (VFUN_NARGS=0,(*(LnkLI208))());
	if(((V147))==Cnil){
	goto T492;}
	if(!((CMPcdr((V147)))==Cnil)){
	goto T491;}
	goto T492;
T492:;
	V149 = CMPmake_fixnum((long)length((V147)));
	(void)((*(LnkLI209))(VV[46],small_fixnum(2),V149));
	goto T491;
T491:;
	if((CMPcddr((V147)))==Cnil){
	goto T496;}
	V150 = CMPmake_fixnum((long)length((V147)));
	(void)((*(LnkLI210))(VV[46],small_fixnum(2),V150));
	goto T496;
T496:;
	V151= list(2,CMPcar((V147)),CMPcadr((V147)));
	{object V152 = list(4,VV[47],(V148),VV[48],(*(LnkLI219))(/* INLINE-ARGS */V151,(V148)));
	VMR13(V152)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1MEMBER	*/

static object LI14(V154)

register object V154;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{register object V155;
	V155= (VFUN_NARGS=0,(*(LnkLI208))());
	if(((V154))==Cnil){
	goto T501;}
	if(!((CMPcdr((V154)))==Cnil)){
	goto T500;}
	goto T501;
T501:;
	V156 = CMPmake_fixnum((long)length((V154)));
	(void)((*(LnkLI209))(VV[49],small_fixnum(2),V156));
	goto T500;
T500:;
	if(!((CMPcddr((V154)))==Cnil)){
	goto T506;}
	{object V157 = list(4,VV[47],(V155),VV[50],(*(LnkLI219))((V154),(V155)));
	VMR14(V157)}
	goto T506;
T506:;
	if(!((CMPcaddr((V154)))==(VV[51]))){
	goto T509;}
	if(!(((long)length((V154)))==(4))){
	goto T509;}
	{register object x= CMPcadddr((V154)),V158= VV[52];
	while(V158!=Cnil)
	if(equal(x,V158->c.c_car)){
	goto T514;
	}else V158=V158->c.c_cdr;
	goto T509;}
	goto T514;
T514:;
	V159= CMPcadr(CMPcadddr((V154)));
	V160= list(2,CMPcar((V154)),CMPcadr((V154)));
	{object V161 = list(4,VV[47],(V155),/* INLINE-ARGS */V159,(*(LnkLI219))(/* INLINE-ARGS */V160,(V155)));
	VMR14(V161)}
	goto T509;
T509:;
	{object V162 = list(4,VV[4],(V155),VV[49],(*(LnkLI219))((V154),(V155)));
	VMR14(V162)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2MEMBER!2	*/

static object LI15(V165,V166)

object V165;register object V166;
{	 VMB15 VMS15 VMV15
	bds_check;
	goto TTL;
TTL:;
	{register object V167;
	bds_bind(VV[20],(VV[20]->s.s_dbind));
	bds_bind(VV[42],small_fixnum(0));
	(VV[22]->s.s_dbind)= number_plus((VV[22]->s.s_dbind),small_fixnum(1));
	V167= (VV[22]->s.s_dbind);
	V166= (VFUN_NARGS=2,(*(LnkLI232))((V166),VV[53]));
	princ_str("\n	{register object x= ",VV[7]);
	(void)((*(LnkLI213))(CMPcar((V166))));
	princ_str(",V",VV[7]);
	(void)((*(LnkLI213))((V167)));
	princ_str("= ",VV[7]);
	(void)((*(LnkLI213))(CMPcadr((V166))));
	princ_char(59,VV[7]);
	if(((VV[25]->s.s_dbind))==Cnil){
	goto T529;}
	princ_str("\n	while(!endp(V",VV[7]);
	(void)((*(LnkLI213))((V167)));
	princ_str("))",VV[7]);
	goto T527;
	goto T529;
T529:;
	princ_str("\n	while(V",VV[7]);
	(void)((*(LnkLI213))((V167)));
	princ_str("!=Cnil)",VV[7]);
	goto T527;
T527:;
	if(!(((V165))==(VV[48]))){
	goto T539;}
	princ_str("\n	if(x==(V",VV[7]);
	(void)((*(LnkLI213))((V167)));
	princ_str("->c.c_car)){",VV[7]);
	goto T537;
	goto T539;
T539:;
	princ_str("\n	if(",VV[7]);
	base[3]= symbol_name((V165));
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V168= vs_base[0];
	(void)((*(LnkLI213))(V168));
	princ_str("(x,V",VV[7]);
	(void)((*(LnkLI213))((V167)));
	princ_str("->c.c_car)){",VV[7]);
	goto T537;
T537:;
	if(!(type_of((VV[5]->s.s_dbind))==t_cons)){
	goto T553;}
	if((CMPcar((VV[5]->s.s_dbind)))==(VV[54])){
	goto T552;}
	if(!((CMPcar((VV[5]->s.s_dbind)))==(VV[55]))){
	goto T553;}
	goto T552;
T552:;
	(void)((VFUN_NARGS=2,(*(LnkLI214))(Ct,VV[56])));
	goto T551;
	goto T553;
T553:;
	V169= list(2,VV[21],(V167));
	(void)((VFUN_NARGS=2,(*(LnkLI214))(/* INLINE-ARGS */V169,VV[56])));
	goto T551;
T551:;
	princ_str("\n	}else V",VV[7]);
	(void)((*(LnkLI213))((V167)));
	princ_str("=V",VV[7]);
	(void)((*(LnkLI213))((V167)));
	princ_str("->c.c_cdr;",VV[7]);
	(void)((VFUN_NARGS=1,(*(LnkLI214))(Cnil)));
	princ_char(125,VV[7]);
	{object V170 = (*(LnkLI233))();
	bds_unwind1;
	bds_unwind1;
	VMR15(V170)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1ASSOC	*/

static object LI16(V172)

register object V172;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{register object V173;
	V173= (VFUN_NARGS=0,(*(LnkLI208))());
	if(((V172))==Cnil){
	goto T570;}
	if(!((CMPcdr((V172)))==Cnil)){
	goto T569;}
	goto T570;
T570:;
	V174 = CMPmake_fixnum((long)length((V172)));
	(void)((*(LnkLI209))(VV[57],small_fixnum(2),V174));
	goto T569;
T569:;
	if(!((CMPcddr((V172)))==Cnil)){
	goto T575;}
	{object V175 = list(4,VV[58],(V173),VV[50],(*(LnkLI219))((V172),(V173)));
	VMR16(V175)}
	goto T575;
T575:;
	if(!((CMPcaddr((V172)))==(VV[51]))){
	goto T578;}
	if(!(((long)length((V172)))==(4))){
	goto T578;}
	{register object x= CMPcadddr((V172)),V176= VV[59];
	while(V176!=Cnil)
	if(equal(x,V176->c.c_car)){
	goto T583;
	}else V176=V176->c.c_cdr;
	goto T578;}
	goto T583;
T583:;
	V177= CMPcadr(CMPcadddr((V172)));
	V178= list(2,CMPcar((V172)),CMPcadr((V172)));
	{object V179 = list(4,VV[58],(V173),/* INLINE-ARGS */V177,(*(LnkLI219))(/* INLINE-ARGS */V178,(V173)));
	VMR16(V179)}
	goto T578;
T578:;
	{object V180 = list(4,VV[4],(V173),VV[57],(*(LnkLI219))((V172),(V173)));
	VMR16(V180)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2ASSOC!2	*/

static object LI17(V183,V184)

object V183;register object V184;
{	 VMB17 VMS17 VMV17
	bds_check;
	goto TTL;
TTL:;
	{register object V185;
	register object V186;
	bds_bind(VV[20],(VV[20]->s.s_dbind));
	bds_bind(VV[42],small_fixnum(0));
	(VV[22]->s.s_dbind)= number_plus((VV[22]->s.s_dbind),small_fixnum(1));
	V185= (VV[22]->s.s_dbind);
	V186= Cnil;
	V184= (VFUN_NARGS=2,(*(LnkLI232))((V184),VV[60]));
	V186= symbol_name((V183));
	if(!(((V183))==(VV[48]))){
	goto T592;}
	goto T591;
	goto T592;
T592:;
	base[3]= (V186);
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V186= vs_base[0];
	goto T591;
T591:;
	princ_str("\n	{register object x= ",VV[7]);
	(void)((*(LnkLI213))(CMPcar((V184))));
	princ_str(",V",VV[7]);
	(void)((*(LnkLI213))((V185)));
	princ_str("= ",VV[7]);
	(void)((*(LnkLI213))(CMPcadr((V184))));
	princ_char(59,VV[7]);
	if(((VV[25]->s.s_dbind))==Cnil){
	goto T606;}
	princ_str("\n	while(!endp(V",VV[7]);
	(void)((*(LnkLI213))((V185)));
	princ_str("))",VV[7]);
	princ_str("\n	if(type_of(V",VV[7]);
	(void)((*(LnkLI213))((V185)));
	princ_str("->c.c_car)==t_cons &&",VV[7]);
	(void)((*(LnkLI213))((V186)));
	princ_str("(x,V",VV[7]);
	(void)((*(LnkLI213))((V185)));
	princ_str("->c.c_car->c.c_car)){",VV[7]);
	goto T604;
	goto T606;
T606:;
	princ_str("\n	while(V",VV[7]);
	(void)((*(LnkLI213))((V185)));
	princ_str("!=Cnil)",VV[7]);
	princ_str("\n	if(",VV[7]);
	(void)((*(LnkLI213))((V186)));
	princ_str("(x,V",VV[7]);
	(void)((*(LnkLI213))((V185)));
	princ_str("->c.c_car->c.c_car) &&",VV[7]);
	princ_char(86,VV[7]);
	(void)((*(LnkLI213))((V185)));
	princ_str("->c.c_car != Cnil){",VV[7]);
	goto T604;
T604:;
	if(!(type_of((VV[5]->s.s_dbind))==t_cons)){
	goto T633;}
	if((CMPcar((VV[5]->s.s_dbind)))==(VV[54])){
	goto T632;}
	if(!((CMPcar((VV[5]->s.s_dbind)))==(VV[55]))){
	goto T633;}
	goto T632;
T632:;
	(void)((VFUN_NARGS=2,(*(LnkLI214))(Ct,VV[56])));
	goto T631;
	goto T633;
T633:;
	V187= list(2,VV[61],(V185));
	(void)((VFUN_NARGS=2,(*(LnkLI214))(/* INLINE-ARGS */V187,VV[56])));
	goto T631;
T631:;
	princ_str("\n	}else V",VV[7]);
	(void)((*(LnkLI213))((V185)));
	princ_str("=V",VV[7]);
	(void)((*(LnkLI213))((V185)));
	princ_str("->c.c_cdr;",VV[7]);
	(void)((VFUN_NARGS=1,(*(LnkLI214))(Cnil)));
	princ_char(125,VV[7]);
	{object V188 = (*(LnkLI233))();
	bds_unwind1;
	bds_unwind1;
	VMR17(V188)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOLE3	*/

static object LI18(V192,V193,V194)

object V192;object V193;object V194;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	base[0]= (V192);
	base[1]= (V193);
	base[2]= (V194);
	vs_top=(vs_base=base+0)+3;
	Lboole();
	vs_top=sup;
	{object V195 = vs_base[0];
	VMR18(V195)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1BOOLE-CONDITION	*/

static object LI19(V197)

object V197;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	if((((CMPcddr((V197)))==Cnil?Ct:Cnil))==Cnil){
	goto T651;}
	{object V198 = Cnil;
	VMR19(V198)}
	goto T651;
T651:;
	if((CMPcdddr((V197)))==Cnil){
	goto T653;}
	{object V199 = Cnil;
	VMR19(V199)}
	goto T653;
T653:;
	{object V200 = (*(LnkLI234))(CMPcar((V197)));
	VMR19(V200)}
	return Cnil;
}
/*	local entry for function C1BOOLE3	*/

static object LI20(V202)

object V202;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	V203= make_cons(VV[62],(V202));
	{object V204 = (*(LnkLI235))(/* INLINE-ARGS */V203);
	VMR20(V204)}
	return Cnil;
}
/*	function definition for INLINE-BOOLE3	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{object V205;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V205=(base[0]);
	vs_top=sup;
	{object V206;
	V206= CMPcadr(CMPcar((V205)));
	if(!((CMPcar((V206)))==(VV[63]))){
	goto T657;}
	goto T656;
	goto T657;
T657:;
	base[1]= VV[64];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T656;
T656:;
	{object V207;
	V207= (*(LnkLI234))(CMPcaddr((V206)));
	if((V207)!=Cnil){
	goto T661;}
	base[1]= VV[65];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T661;
T661:;
	base[1]= (V207);
	base[2]= CMPcdr((V205));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk236)();
	return;}}
	}
}
/*	local entry for function INLINE-BOOLE3-STRING	*/

static object LI22(V209)

register object V209;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	base[0]= (V209);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T666;}
	goto T665;
	goto T666;
T666:;
	base[0]= (V209);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V209= vs_base[0];
	goto T665;
T665:;
	{object V210= (V209);
	if(!eql(V210,VV[66]))goto T671;
	{object V211 = VV[67];
	VMR22(V211)}
	goto T671;
T671:;
	if(!eql(V210,VV[68]))goto T672;
	{object V212 = VV[69];
	VMR22(V212)}
	goto T672;
T672:;
	if(!eql(V210,VV[70]))goto T673;
	{object V213 = VV[71];
	VMR22(V213)}
	goto T673;
T673:;
	if(!eql(V210,VV[72]))goto T674;
	{object V214 = VV[73];
	VMR22(V214)}
	goto T674;
T674:;
	if(!eql(V210,VV[74]))goto T675;
	{object V215 = VV[75];
	VMR22(V215)}
	goto T675;
T675:;
	if(!eql(V210,VV[76]))goto T676;
	{object V216 = VV[77];
	VMR22(V216)}
	goto T676;
T676:;
	if(!eql(V210,VV[78]))goto T677;
	{object V217 = VV[79];
	VMR22(V217)}
	goto T677;
T677:;
	if(!eql(V210,VV[80]))goto T678;
	{object V218 = VV[81];
	VMR22(V218)}
	goto T678;
T678:;
	if(!eql(V210,VV[82]))goto T679;
	{object V219 = VV[83];
	VMR22(V219)}
	goto T679;
T679:;
	if(!eql(V210,VV[84]))goto T680;
	{object V220 = VV[85];
	VMR22(V220)}
	goto T680;
T680:;
	{object V221 = Cnil;
	VMR22(V221)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1ASH-CONDITION	*/

static object LI23(V223)

object V223;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	{register object V224;
	V224= CMPcadr((V223));{object V225;
	{register object V226;
	V226= (V224);
	if(type_of((V226))==t_fixnum){
	goto T684;}
	V225= Cnil;
	goto T683;
	goto T684;
T684:;
	if((fix((V226)))>=(-31)){
	goto T686;}
	V225= Cnil;
	goto T683;
	goto T686;
T686:;
	V225= ((fix((V226)))<=(31)?Ct:Cnil);}
	goto T683;
T683:;
	if(V225==Cnil)goto T682;
	{object V227 = V225;
	VMR23(V227)}
	goto T682;
T682:;}
	if(type_of((V224))==t_cons){
	goto T688;}
	{object V228 = Cnil;
	VMR23(V228)}
	goto T688;
T688:;
	if((CMPcar((V224)))==(VV[86])){
	goto T690;}
	{object V229 = Cnil;
	VMR23(V229)}
	goto T690;
T690:;
	{object V230;
	V230= CMPcadr((V224));
	base[0]= (V230);
	base[1]= VV[87];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	{object V231 = vs_base[0];
	VMR23(V231)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1ASH	*/

static object LI24(V233)

object V233;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{register object V234;
	register object V235;
	V234= CMPcadr((V233));
	V235= Cnil;
	base[0]= (V234);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T698;}
	base[0]= (V234);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V234= vs_base[0];{object V236;
	base[0]= (V234);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk238)();
	vs_top=sup;
	V236= vs_base[0];
	if(V236==Cnil)goto T705;
	goto T704;
	goto T705;
T705:;}
	base[0]= VV[88];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T704;
T704:;
	if(!(number_compare((V234),small_fixnum(0))<0)){
	goto T710;}
	V235= VV[89];
	goto T696;
	goto T710;
T710:;
	if(!(number_compare((V234),small_fixnum(0))>=0)){
	goto T696;}
	V235= VV[90];
	goto T696;
	goto T698;
T698:;
	{object V237;
	V237= CMPcadr((V234));
	base[0]= (V237);
	base[1]= VV[91];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T718;}
	V235= VV[90];
	goto T696;
	goto T718;
T718:;
	base[0]= (V237);
	base[1]= VV[92];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T724;}
	V235= VV[89];
	goto T696;
	goto T724;
T724:;
	base[0]= VV[93];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;}
	goto T696;
T696:;
	V238= make_cons((V235),(V233));
	{object V239 = (*(LnkLI235))(/* INLINE-ARGS */V238);
	VMR24(V239)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SHIFT>>	*/

static object LI25(V242,V243)

object V242;object V243;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	base[0]= (V242);
	base[1]= (V243);
	vs_top=(vs_base=base+0)+2;
	Lash();
	vs_top=sup;
	{object V244 = vs_base[0];
	VMR25(V244)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SHIFT<<	*/

static object LI26(V247,V248)

object V247;object V248;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	base[0]= (V247);
	base[1]= (V248);
	vs_top=(vs_base=base+0)+2;
	Lash();
	vs_top=sup;
	{object V249 = vs_base[0];
	VMR26(V249)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1LDB	*/

static object LI27(V252,V253)

object V252;object V253;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{register object V254;
	object V255;
	V254= Cnil;
	base[1]= VV[94];
	vs_top=(vs_base=base+1)+1;
	Linteger_length();
	vs_top=sup;
	V255= vs_base[0];
	{register object V256;
	{object V257;
	V254= CMPcar((V253));
	if(type_of((V254))==t_cons){
	goto T740;}
	V257= Cnil;
	goto T739;
	goto T740;
T740:;
	if((VV[95])==(CMPcar((V254)))){
	goto T743;}
	V257= Cnil;
	goto T739;
	goto T743;
T743:;
	V257= make_cons(CMPcadr((V254)),CMPcaddr((V254)));
	goto T739;
T739:;
	if(((V257))==Cnil){
	goto T746;}
	V256= (V257);
	goto T738;
	goto T746;
T746:;
	V256= Cnil;}
	goto T738;
T738:;
	{object V258= CMPcdr((V256));
	if(!(type_of(V258)==t_fixnum||type_of(V258)==t_bignum)){
	goto T749;}}
	{object V259= CMPcar((V256));
	if(!(type_of(V259)==t_fixnum||type_of(V259)==t_bignum)){
	goto T749;}}
	V260= number_plus(CMPcar((V256)),CMPcdr((V256)));
	if(!(number_compare(/* INLINE-ARGS */V260,(V255))<0)){
	goto T749;}
	base[1]= (*(LnkLI239))(CMPcadr((V253)));
	base[2]= VV[96];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T749;}
	V261= list(3,VV[86],VV[96],list(4,VV[97],CMPcar((V256)),CMPcdr((V256)),CMPcadr((V253))));
	{object V262 = (*(LnkLI235))(/* INLINE-ARGS */V261);
	VMR27(V262)}
	goto T749;
T749:;
	{object V263 = Cnil;
	VMR27(V263)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1LENGTH	*/

static object LI28(V265)

register object V265;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{register object V266;
	V266= (VFUN_NARGS=0,(*(LnkLI208))());
	V267= Ct;
	STSET(object,(V266),8, VV[96]);
	(void)(VV[96]);
	{object V268;
	if(type_of(CMPcar((V265)))==t_cons){
	goto T762;}
	V268= Cnil;
	goto T761;
	goto T762;
T762:;
	if((CMPcaar((V265)))==(VV[99])){
	goto T764;}
	V268= Cnil;
	goto T761;
	goto T764;
T764:;
	{object V269;
	V269= CMPcdr(CMPcar((V265)));
	if((V269)==Cnil){
	V268= Cnil;
	goto T761;}
	if((CMPcddr((V269)))==Cnil){
	goto T767;}
	V268= Cnil;
	goto T761;
	goto T767;
T767:;
	V268= list(4,VV[4],(V266),VV[100],(*(LnkLI219))((V269),(V266)));}
	goto T761;
T761:;
	if(((V268))==Cnil){
	goto T770;}
	{object V270 = (V268);
	VMR28(V270)}
	goto T770;
T770:;
	V265= (*(LnkLI219))((V265),(V266));
	{object V271 = list(4,VV[4],(V266),VV[101],(V265));
	VMR28(V271)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1GET	*/

static object LI29(V273)

register object V273;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{object V274;
	V274= (VFUN_NARGS=0,(*(LnkLI208))());
	if(((V273))==Cnil){
	goto T776;}
	if(!((CMPcdr((V273)))==Cnil)){
	goto T775;}
	goto T776;
T776:;
	V275 = CMPmake_fixnum((long)length((V273)));
	(void)((*(LnkLI209))(VV[102],small_fixnum(2),V275));
	goto T775;
T775:;
	if((CMPcddr((V273)))==Cnil){
	goto T780;}
	if((CMPcdddr((V273)))==Cnil){
	goto T780;}
	V276 = CMPmake_fixnum((long)length((V273)));
	(void)((*(LnkLI210))(VV[102],small_fixnum(3),V276));
	goto T780;
T780:;
	{object V277 = list(3,VV[102],(V274),(*(LnkLI219))((V273),(V274)));
	VMR29(V277)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2GET	*/

static object LI30(V279)

register object V279;
{	 VMB30 VMS30 VMV30
	bds_check;
	goto TTL;
TTL:;
	if(((VV[25]->s.s_dbind))==Cnil){
	goto T786;}
	{object V280 = (*(LnkLI215))(VV[102],(V279),Cnil,Ct);
	VMR30(V280)}
	goto T786;
T786:;
	{register object V281;
	base[0]= (VV[20]->s.s_dbind);
	(VV[22]->s.s_dbind)= number_plus((VV[22]->s.s_dbind),small_fixnum(1));
	V281= (VV[22]->s.s_dbind);
	bds_bind(VV[20],base[0]);
	bds_bind(VV[42],small_fixnum(0));
	if((CMPcddr((V279)))==Cnil){
	goto T795;}
	V282= VV[103];
	goto T793;
	goto T795;
T795:;
	V282= VV[104];
	goto T793;
T793:;
	V279= (VFUN_NARGS=2,(*(LnkLI232))((V279),V282));
	princ_str("\n	{object V",VV[7]);
	(void)((*(LnkLI213))((V281)));
	princ_str(" =(",VV[7]);
	(void)((*(LnkLI213))(CMPcar((V279))));
	princ_str(")->s.s_plist;",VV[7]);
	princ_str("\n	 object ind= ",VV[7]);
	(void)((*(LnkLI213))(CMPcadr((V279))));
	princ_char(59,VV[7]);
	princ_str("\n	while(V",VV[7]);
	(void)((*(LnkLI213))((V281)));
	princ_str("!=Cnil){",VV[7]);
	princ_str("\n	if(V",VV[7]);
	(void)((*(LnkLI213))((V281)));
	princ_str("->c.c_car==ind){",VV[7]);
	V283= list(2,VV[105],(V281));
	(void)((VFUN_NARGS=2,(*(LnkLI214))(/* INLINE-ARGS */V283,VV[56])));
	princ_str("\n	}else V",VV[7]);
	(void)((*(LnkLI213))((V281)));
	princ_str("=V",VV[7]);
	(void)((*(LnkLI213))((V281)));
	princ_str("->c.c_cdr->c.c_cdr;}",VV[7]);
	if((CMPcddr((V279)))==Cnil){
	goto T825;}
	V284= CMPcaddr((V279));
	goto T823;
	goto T825;
T825:;
	V284= Cnil;
	goto T823;
T823:;
	(void)((VFUN_NARGS=1,(*(LnkLI214))(V284)));
	princ_char(125,VV[7]);
	{object V285 = (*(LnkLI233))();
	bds_unwind1;
	bds_unwind1;
	VMR30(V285)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1EQL	*/

static object LI31(V288,V289)

object V288;register object V289;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;{object V290;
	if((CMPcdr((V289)))!=Cnil){
	goto T833;}
	V290= Cnil;
	goto T832;
	goto T833;
T833:;
	V290= (((VV[25]->s.s_dbind))==Cnil?Ct:Cnil);
	goto T832;
T832:;
	if(V290==Cnil)goto T831;
	goto T830;
	goto T831;
T831:;}
	{object V291 = Cnil;
	VMR31(V291)}
	goto T830;
T830:;
	if(((*(LnkLI240))((V289)))==Cnil){
	goto T836;}
	if(!(type_of(CMPcadr((V289)))==t_character)){
	goto T838;}
	V289= reverse((V289));
	goto T838;
T838:;
	if(!(type_of(CMPcar((V289)))==t_character)){
	goto T843;}
	{register object V292;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V292= vs_base[0];
	V293= list(2,(V292),CMPcadr((V289)));
	V294= make_cons(/* INLINE-ARGS */V293,Cnil);
	V295= (*(LnkLI239))(CMPcadr((V289)));
	V296= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V295,(V292)));
	V297= list(3,VV[109],(V292),VV[110]);
	V298= list(2,VV[112],CMPcar((V289)));
	V299= list(4,VV[29],/* INLINE-ARGS */V294,/* INLINE-ARGS */V296,list(3,VV[108],/* INLINE-ARGS */V297,list(3,VV[111],/* INLINE-ARGS */V298,list(3,VV[86],VV[96],list(2,VV[112],list(3,VV[86],VV[14],(V292)))))));
	{object V300 = (*(LnkLI235))(/* INLINE-ARGS */V299);
	VMR31(V300)}}
	goto T843;
T843:;
	{object V301 = Cnil;
	VMR31(V301)}
	goto T836;
T836:;
	{object V302 = Cnil;
	VMR31(V302)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RESULT-TYPE	*/

static object LI32(V304)

register object V304;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	if(!(type_of((V304))==t_symbol)){
	goto T847;}
	{object V305;
	V305= (*(LnkLI235))((V304));
	{object V306 = STREF(object,CMPcadr((V305)),8);
	VMR32(V306)}}
	goto T847;
T847:;
	base[0]= (V304);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T851;}
	base[0]= (V304);
	vs_top=(vs_base=base+0)+1;
	Ltype_of();
	vs_top=sup;
	V307= vs_base[0];
	{object V308 = (*(LnkLI241))(V307);
	VMR32(V308)}
	goto T851;
T851:;
	if(!(type_of((V304))==t_cons)){
	goto T857;}
	if(!((CMPcar((V304)))==(VV[86]))){
	goto T857;}
	{object V309 = (*(LnkLI241))(CMPcadr((V304)));
	VMR32(V309)}
	goto T857;
T857:;
	{object V310 = Ct;
	VMR32(V310)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1TYPEP	*/

static object LI33(V313,V314)

object V313;register object V314;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{register object V315;
	V315= Cnil;
	{register object V316;
	register object V317;
	register object V318;
	V316= CMPcar((V314));
	V317= Cnil;
	if(type_of(CMPcadr((V314)))==t_cons){
	goto T866;}
	V318= Cnil;
	goto T865;
	goto T866;
T866:;
	if((CMPcar(CMPcadr((V314))))==(VV[113])){
	goto T868;}
	V318= Cnil;
	goto T865;
	goto T868;
T868:;
	V318= CMPcadr(CMPcadr((V314)));
	goto T865;
T865:;
	base[2]= (*(LnkLI239))(CMPcar((V314)));
	base[3]= (V318);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T870;}
	V317= Ct;
	{object V319 = (*(LnkLI235))((V317));
	VMR33(V319)}
	goto T870;
T870:;
	if(((V318))!=Cnil){
	goto T880;}
	V317= Cnil;
	goto T878;
	goto T880;
T880:;
	{register object x= (V318),V320= (VV[114]->s.s_dbind);
	while(V320!=Cnil)
	if(equal(x,V320->c.c_car->c.c_car) &&V320->c.c_car != Cnil){
	V313= (V320->c.c_car);
	goto T885;
	}else V320=V320->c.c_cdr;
	V313= Cnil;}
	goto T885;
T885:;
	if(((V313))==Cnil){
	goto T883;}
	V317= list(2,CMPcdr((V313)),(V316));
	goto T878;
	goto T883;
T883:;
	if(!(type_of((V318))==t_cons)){
	goto T887;}
	if(!((CMPcar((V318)))==(VV[115]))){
	goto T890;}
	if((CMPcddr((V318)))==Cnil){
	goto T886;}
	goto T890;
T890:;
	{register object x= CMPcar((V318)),V321= VV[116];
	while(V321!=Cnil)
	if(eql(x,V321->c.c_car)){
	goto T895;
	}else V321=V321->c.c_cdr;
	goto T887;}
	goto T895;
T895:;
	if(!(equal(CMPcaddr((V318)),VV[117]))){
	goto T887;}
	goto T886;
T886:;
	V315= (*(LnkLI242))(CMPcadr((V318)));
	if(!(((V315))==(VV[118]))){
	goto T900;}
	V317= list(2,VV[119],(V316));
	goto T878;
	goto T900;
T900:;
	if(!(((V315))==(VV[120]))){
	goto T903;}
	V317= list(2,VV[121],(V316));
	goto T878;
	goto T903;
T903:;
	V315= (VFUN_NARGS=2,(*(LnkLI243))((V315),(VV[122]->s.s_dbind)));
	if(((V315))==Cnil){
	goto T906;}
	V317= list(3,VV[86],VV[123],list(3,VV[124],(V316),(V315)));
	goto T878;
	goto T906;
T906:;
	V317= Cnil;
	goto T878;
	goto T887;
T887:;
	{object V322;
	if(type_of((V318))==t_cons){
	goto T910;}
	V322= Cnil;
	goto T909;
	goto T910;
T910:;
	if((CMPcar((V318)))==(VV[125])){
	goto T912;}
	V322= Cnil;
	goto T909;
	goto T912;
T912:;
	if(type_of(CMPcdr((V318)))==t_cons){
	goto T914;}
	V322= Cnil;
	goto T909;
	goto T914;
T914:;
	if((CMPcadr((V318)))!=Cnil){
	goto T916;}
	V322= Cnil;
	goto T909;
	goto T916;
T916:;
	if(type_of(CMPcadr((V318)))==t_symbol){
	goto T918;}
	V322= Cnil;
	goto T909;
	goto T918;
T918:;
	base[2]= CMPcadr((V318));
	vs_top=(vs_base=base+2)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T920;}
	V322= Cnil;
	goto T909;
	goto T920;
T920:;
	if((CMPcddr((V318)))==Cnil){
	goto T923;}
	V322= Cnil;
	goto T909;
	goto T923;
T923:;
	V322= list(2,CMPcadr((V318)),(V316));
	goto T909;
T909:;
	if(((V322))==Cnil){
	goto T926;}
	V317= (V322);
	goto T878;
	goto T926;
T926:;
	base[2]= (V318);
	base[3]= VV[96];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T929;}
	V315= (*(LnkLI244))((V318));
	if(type_of((V315))==t_cons){
	goto T935;}
	V317= Cnil;
	goto T878;
	goto T935;
T935:;
	base[2]= CMPcadr((V315));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk238)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T937;}
	V317= Cnil;
	goto T878;
	goto T937;
T937:;
	base[2]= CMPcaddr((V315));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk238)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T940;}
	V317= Cnil;
	goto T878;
	goto T940;
T940:;
	V323= list(2,VV[126],(V316));
	V324= make_cons(/* INLINE-ARGS */V323,Cnil);
	V325= (*(LnkLI239))((V316));
	V326= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V325,VV[126]));
	V327= list(3,VV[128],VV[129],CMPcadr((V315)));
	V317= list(4,VV[29],/* INLINE-ARGS */V324,/* INLINE-ARGS */V326,list(4,VV[108],VV[127],/* INLINE-ARGS */V327,list(3,VV[130],VV[131],CMPcaddr((V315)))));
	goto T878;
	goto T929;
T929:;
	if(!(type_of((V318))==t_symbol)){
	goto T944;}
	{object V328 =((V318))->s.s_plist;
	 object ind= VV[132];
	while(V328!=Cnil){
	if(V328->c.c_car==ind){
	V315= (V328->c.c_cdr->c.c_car);
	goto T948;
	}else V328=V328->c.c_cdr->c.c_cdr;}
	V315= Cnil;}
	goto T948;
T948:;
	if(((V315))==Cnil){
	goto T944;}
	if((STREF(object,(V315),44))!=Cnil){
	goto T949;}
	if(((VV[133]->s.s_dbind))==Cnil){
	goto T950;}
	goto T949;
T949:;
	V317= (*(LnkLI245))((V316),(V315));
	goto T878;
	goto T950;
T950:;
	V317= list(3,VV[134],(V316),list(2,VV[113],(V318)));
	goto T878;
	goto T944;
T944:;
	V317= Cnil;}
	goto T878;
T878:;
	if((V317)==Cnil){
	{object V329 = Cnil;
	VMR33(V329)}}
	V330= list(3,VV[86],VV[123],(V317));
	{object V331 = (*(LnkLI235))(/* INLINE-ARGS */V330);
	VMR33(V331)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function STRUCT-TYPE-OPT	*/

static object LI34(V334,V335)

object V334;object V335;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	{register object V336;
	object V337;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V336= vs_base[0];
	V337= (*(LnkLI246))(STREF(object,(V335),0));
	V338= list(2,(V336),(V334));
	V339= make_cons(/* INLINE-ARGS */V338,Cnil);
	V340= list(2,VV[135],(V336));
	if(!(((long)length((V337)))<(3))){
	goto T958;}
	{object V343;
	object V344= (V337);
	if(V344==Cnil){
	V342= Cnil;
	goto T960;}
	base[0]=V343=MMcons(Cnil,Cnil);
	goto T961;
T961:;
	V346= list(2,VV[137],(V336));
	(V343->c.c_car)= list(3,VV[48],/* INLINE-ARGS */V346,(*(LnkLI247))((V344->c.c_car)));
	if((V344=MMcdr(V344))==Cnil){
	V342= base[0];
	goto T960;}
	V343=MMcdr(V343)=MMcons(Cnil,Cnil);
	goto T961;}
	goto T960;
T960:;
	V341= make_cons(VV[136],V342);
	goto T956;
	goto T958;
T958:;
	V341= list(3,VV[134],(V336),(*(LnkLI247))(STREF(object,(V335),0)));
	goto T956;
T956:;
	{object V347 = list(3,VV[29],/* INLINE-ARGS */V339,list(3,VV[108],/* INLINE-ARGS */V340,V341));
	VMR34(V347)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-INCLUDED	*/

static object LI35(V349)

object V349;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	{object V350;
	{object V351 =((V349))->s.s_plist;
	 object ind= VV[132];
	while(V351!=Cnil){
	if(V351->c.c_car==ind){
	V350= (V351->c.c_cdr->c.c_car);
	goto T963;
	}else V351=V351->c.c_cdr->c.c_cdr;}
	V350= Cnil;}
	goto T963;
T963:;
	{object V353;
	object V354= STREF(object,(V350),12);
	if(V354==Cnil){
	V352= Cnil;
	goto T964;}
	base[0]=V353=MMcons(Cnil,Cnil);
	goto T965;
T965:;
	(V353->c.c_cdr)= (*(LnkLI246))((V354->c.c_car));
	while(MMcdr(V353)!=Cnil)V353=MMcdr(V353);
	if((V354=MMcdr(V354))==Cnil){
	base[0]=base[0]->c.c_cdr;
	V352= base[0];
	goto T964;}
	goto T965;}
	goto T964;
T964:;
	{object V355 = make_cons(STREF(object,(V350),0),V352);
	VMR35(V355)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1SCHAR	*/

static object LI36(V358,V359)

object V358;register object V359;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	{object V360= CMPcar((V359));
	if(type_of(V360)==t_cons||(V360)==Cnil){
	goto T968;}}
	{object V361 = Cnil;
	VMR36(V361)}
	goto T968;
T968:;
	if(((VV[25]->s.s_dbind))==Cnil){
	goto T970;}
	{object V362 = Cnil;
	VMR36(V362)}
	goto T970;
T970:;
	if((CMPcdr((V359)))!=Cnil){
	goto T972;}
	{object V363 = Cnil;
	VMR36(V363)}
	goto T972;
T972:;
	if((CMPcaar((V359)))==(VV[99])){
	goto T974;}
	{object V364 = Cnil;
	VMR36(V364)}
	goto T974;
T974:;
	V365= list(3,VV[138],list(3,VV[86],VV[15],CMPcadr(CMPcar((V359)))),CMPcadr((V359)));
	{object V366 = (*(LnkLI235))(/* INLINE-ARGS */V365);
	VMR36(V366)}
	return Cnil;
}
/*	local entry for function CONS-TO-LISTA	*/

static object LI37(V368)

object V368;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	{register object V369;
	base[0]= (V368);
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V369= vs_base[0];
	{object V370;
	if(type_of((V369))==t_cons){
	goto T979;}
	V370= Cnil;
	goto T978;
	goto T979;
T979:;
	if(type_of(CMPcar((V369)))==t_cons){
	goto T981;}
	V370= Cnil;
	goto T978;
	goto T981;
T981:;
	if((CMPcaar((V369)))==(VV[139])){
	goto T983;}
	V370= Cnil;
	goto T978;
	goto T983;
T983:;
	if(((long)length(CMPcdar((V369))))==(2)){
	goto T985;}
	V370= Cnil;
	goto T978;
	goto T985;
T985:;
	base[0]= (V368);
	vs_top=(vs_base=base+0)+1;
	Lbutlast();
	vs_top=sup;
	V371= vs_base[0];
	V372= append(V371,CMPcdar((V369)));
	V370= (*(LnkLI248))(/* INLINE-ARGS */V372);
	goto T978;
T978:;
	if(((V370))==Cnil){
	goto T990;}
	{object V373 = (V370);
	VMR37(V373)}
	goto T990;
T990:;
	{object V374 = (V368);
	VMR37(V374)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1CONS	*/

static object LI38(V377,V378)

object V377;object V378;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	{register object V379;
	if(((long)length((V378)))==(2)){
	goto T994;}
	V379= Cnil;
	goto T993;
	goto T994;
T994:;
	V379= (*(LnkLI248))((V378));
	goto T993;
T993:;
	if(((((V379))==((V378))?Ct:Cnil))==Cnil){
	goto T996;}
	{object V380 = Cnil;
	VMR38(V380)}
	goto T996;
T996:;
	base[0]= (V379);
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V382= vs_base[0];
	if(!(equal(VV[140],V382))){
	goto T1000;}
	base[0]= (V379);
	vs_top=(vs_base=base+0)+1;
	Lbutlast();
	vs_top=sup;
	V383= vs_base[0];
	V381= make_cons(VV[141],V383);
	goto T998;
	goto T1000;
T1000:;
	V381= make_cons(VV[28],(V379));
	goto T998;
T998:;
	{object V384 = (*(LnkLI235))(V381);
	VMR38(V384)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1NTH-CONDITION	*/

static object LI39(V386)

register object V386;
{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	if(((((V386))==Cnil?Ct:Cnil))==Cnil){
	goto T1006;}
	{object V387 = Cnil;
	VMR39(V387)}
	goto T1006;
T1006:;
	if((((CMPcdr((V386)))==Cnil?Ct:Cnil))==Cnil){
	goto T1008;}
	{object V388 = Cnil;
	VMR39(V388)}
	goto T1008;
T1008:;
	if((CMPcddr((V386)))==Cnil){
	goto T1010;}
	{object V389 = Cnil;
	VMR39(V389)}
	goto T1010;
T1010:;
	{object V390= CMPcar((V386));
	if(type_of(V390)==t_fixnum||
type_of(V390)==t_bignum||
type_of(V390)==t_ratio||
type_of(V390)==t_shortfloat||
type_of(V390)==t_longfloat||
type_of(V390)==t_complex){
	goto T1012;}}
	{object V391 = Cnil;
	VMR39(V391)}
	goto T1012;
T1012:;
	base[0]= small_fixnum(0);
	base[1]= CMPcar((V386));
	base[2]= small_fixnum(7);
	vs_top=(vs_base=base+0)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	{object V392 = vs_base[0];
	VMR39(V392)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1NTH	*/

static object LI40(V394)

register object V394;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{object V396= CMPcar((V394));
	if(!eql(V396,VV[142]))goto T1018;
	V395= make_cons(VV[61],CMPcdr((V394)));
	goto T1017;
	goto T1018;
T1018:;
	if(!eql(V396,VV[80]))goto T1019;
	V395= make_cons(VV[105],CMPcdr((V394)));
	goto T1017;
	goto T1019;
T1019:;
	if(!eql(V396,VV[68]))goto T1020;
	V395= make_cons(VV[143],CMPcdr((V394)));
	goto T1017;
	goto T1020;
T1020:;
	if(!eql(V396,VV[144]))goto T1021;
	V395= make_cons(VV[145],CMPcdr((V394)));
	goto T1017;
	goto T1021;
T1021:;
	if(!eql(V396,VV[66]))goto T1022;
	V395= list(2,VV[61],make_cons(VV[146],CMPcdr((V394))));
	goto T1017;
	goto T1022;
T1022:;
	if(!eql(V396,VV[147]))goto T1023;
	V395= list(2,VV[105],make_cons(VV[146],CMPcdr((V394))));
	goto T1017;
	goto T1023;
T1023:;
	if(!eql(V396,VV[82]))goto T1024;
	V395= list(2,VV[143],make_cons(VV[146],CMPcdr((V394))));
	goto T1017;
	goto T1024;
T1024:;
	if(!eql(V396,VV[84]))goto T1025;
	V395= list(2,VV[145],make_cons(VV[146],CMPcdr((V394))));
	goto T1017;
	goto T1025;
T1025:;
	V395= Cnil;}
	goto T1017;
T1017:;
	{object V397 = (*(LnkLI235))(V395);
	VMR40(V397)}
	return Cnil;
}
/*	local entry for function C1NTHCDR-CONDITION	*/

static object LI41(V399)

register object V399;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	if(((((V399))==Cnil?Ct:Cnil))==Cnil){
	goto T1026;}
	{object V400 = Cnil;
	VMR41(V400)}
	goto T1026;
T1026:;
	if((((CMPcdr((V399)))==Cnil?Ct:Cnil))==Cnil){
	goto T1028;}
	{object V401 = Cnil;
	VMR41(V401)}
	goto T1028;
T1028:;
	if((CMPcddr((V399)))==Cnil){
	goto T1030;}
	{object V402 = Cnil;
	VMR41(V402)}
	goto T1030;
T1030:;
	{object V403= CMPcar((V399));
	if(type_of(V403)==t_fixnum||
type_of(V403)==t_bignum||
type_of(V403)==t_ratio||
type_of(V403)==t_shortfloat||
type_of(V403)==t_longfloat||
type_of(V403)==t_complex){
	goto T1032;}}
	{object V404 = Cnil;
	VMR41(V404)}
	goto T1032;
T1032:;
	base[0]= small_fixnum(0);
	base[1]= CMPcar((V399));
	base[2]= small_fixnum(7);
	vs_top=(vs_base=base+0)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	{object V405 = vs_base[0];
	VMR41(V405)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1NTHCDR	*/

static object LI42(V407)

register object V407;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	{object V409= CMPcar((V407));
	if(!eql(V409,VV[142]))goto T1038;
	V408= CMPcadr((V407));
	goto T1037;
	goto T1038;
T1038:;
	if(!eql(V409,VV[80]))goto T1039;
	V408= make_cons(VV[148],CMPcdr((V407)));
	goto T1037;
	goto T1039;
T1039:;
	if(!eql(V409,VV[68]))goto T1040;
	V408= make_cons(VV[149],CMPcdr((V407)));
	goto T1037;
	goto T1040;
T1040:;
	if(!eql(V409,VV[144]))goto T1041;
	V408= make_cons(VV[150],CMPcdr((V407)));
	goto T1037;
	goto T1041;
T1041:;
	if(!eql(V409,VV[66]))goto T1042;
	V408= make_cons(VV[146],CMPcdr((V407)));
	goto T1037;
	goto T1042;
T1042:;
	if(!eql(V409,VV[147]))goto T1043;
	V408= list(2,VV[148],make_cons(VV[146],CMPcdr((V407))));
	goto T1037;
	goto T1043;
T1043:;
	if(!eql(V409,VV[82]))goto T1044;
	V408= list(2,VV[149],make_cons(VV[146],CMPcdr((V407))));
	goto T1037;
	goto T1044;
T1044:;
	if(!eql(V409,VV[84]))goto T1045;
	V408= list(2,VV[150],make_cons(VV[146],CMPcdr((V407))));
	goto T1037;
	goto T1045;
T1045:;
	V408= Cnil;}
	goto T1037;
T1037:;
	{object V410 = (*(LnkLI235))(V408);
	VMR42(V410)}
	return Cnil;
}
/*	local entry for function C1RPLACA-NTHCDR	*/

static object LI43(V412)

register object V412;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	{object V413;
	V413= (VFUN_NARGS=0,(*(LnkLI208))());
	if(((V412))==Cnil){
	goto T1048;}
	if((CMPcdr((V412)))==Cnil){
	goto T1048;}
	if(!((CMPcddr((V412)))==Cnil)){
	goto T1047;}
	goto T1048;
T1048:;
	V414 = CMPmake_fixnum((long)length((V412)));
	(void)((*(LnkLI209))(VV[151],small_fixnum(3),V414));
	goto T1047;
T1047:;
	if((CMPcdddr((V412)))==Cnil){
	goto T1054;}
	V415 = CMPmake_fixnum((long)length((V412)));
	(void)((*(LnkLI209))(VV[151],small_fixnum(3),V415));
	goto T1054;
T1054:;
	{object V416= CMPcadr((V412));
	if(!(type_of(V416)==t_fixnum||
type_of(V416)==t_bignum||
type_of(V416)==t_ratio||
type_of(V416)==t_shortfloat||
type_of(V416)==t_longfloat||
type_of(V416)==t_complex)){
	goto T1058;}}
	base[1]= small_fixnum(0);
	base[2]= CMPcadr((V412));
	base[3]= small_fixnum(10);
	vs_top=(vs_base=base+1)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1058;}
	{register object V417;
	object V418;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V417= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V418= vs_base[0];
	V419= list(2,(V417),CMPcar((V412)));
	V420= list(2,/* INLINE-ARGS */V419,list(2,(V418),CMPcaddr((V412))));
	V421= list(3,VV[152],(V417),list(3,VV[153],CMPcadr((V412)),(V417)));
	V422= list(5,VV[29],/* INLINE-ARGS */V420,/* INLINE-ARGS */V421,list(3,VV[152],list(2,VV[61],(V417)),(V418)),(V418));
	{object V423 = (*(LnkLI235))(/* INLINE-ARGS */V422);
	VMR43(V423)}}
	goto T1058;
T1058:;
	{object V424 = list(4,VV[4],(V413),VV[151],(*(LnkLI219))((V412),(V413)));
	VMR43(V424)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FAST-READ	*/

static object LI44(V427,V428)

register object V427;object V428;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	if(((VV[25]->s.s_dbind))!=Cnil){
	goto T1068;}
	if(!(number_compare((VV[154]->s.s_dbind),small_fixnum(2))<0)){
	goto T1068;}
	if((CMPcadr((V427)))!=Cnil){
	goto T1068;}
	if(!((VV[155])->s.s_dbind!=OBJNULL)){
	goto T1068;}
	if(!(type_of(CMPcar((V427)))!=t_cons)){
	goto T1077;}{object V429;
	V429= CMPcar((V427));
	if(V429==Cnil)goto T1080;
	goto T1079;
	goto T1080;
T1080:;}
	V427= make_cons(VV[156],CMPcdr((V427)));
	goto T1079;
T1079:;
	{register object V430;
	object V431;
	V430= CMPcar((V427));
	V431= CMPcaddr((V427));
	V432= list(2,VV[160],(V430));
	V433= list(3,VV[161],VV[162],list(2,VV[163],(V430)));
	V434= list(3,VV[50],VV[162],small_fixnum(-1));
	V435= list(2,list(3,VV[108],/* INLINE-ARGS */V434,list(2,VV[164],(V430))),(V431));
	if(!(((V428))==(VV[165]))){
	goto T1087;}
	V436= VV[166];
	goto T1085;
	goto T1087;
T1087:;
	V436= VV[162];
	goto T1085;
T1085:;
	V437= list(3,/* INLINE-ARGS */V432,/* INLINE-ARGS */V433,list(3,VV[159],/* INLINE-ARGS */V435,list(2,Ct,V436)));
	{object V438 = list(4,VV[29],VV[157],VV[158],list(3,VV[159],/* INLINE-ARGS */V437,list(2,Ct,list(3,(V428),(V430),(V431)))));
	VMR44(V438)}}
	goto T1077;
T1077:;
	V439= list(2,VV[167],CMPcar((V427)));
	V440= make_cons(/* INLINE-ARGS */V439,Cnil);
	V441= (*(LnkLI239))(CMPcar((V427)));
	V442= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V441,VV[167]));
	V443= make_cons(VV[167],CMPcdr((V427)));
	{object V444 = list(4,VV[29],/* INLINE-ARGS */V440,/* INLINE-ARGS */V442,(*(LnkLI249))(/* INLINE-ARGS */V443,(V428)));
	VMR44(V444)}
	goto T1068;
T1068:;
	{object V445 = Cnil;
	VMR44(V445)}
	return Cnil;
}
/*	local entry for function CO1READ-BYTE	*/

static object LI45(V448,V449)

object V448;object V449;
{	 VMB45 VMS45 VMV45
	bds_check;
	goto TTL;
TTL:;
	{object V450;
	V450= Cnil;
	V450= (*(LnkLI249))((V449),VV[168]);
	if(((V450))==Cnil){
	goto T1092;}
	bds_bind(VV[154],small_fixnum(10));
	{object V451 = (*(LnkLI235))((V450));
	bds_unwind1;
	VMR45(V451)}
	goto T1092;
T1092:;
	{object V452 = Cnil;
	VMR45(V452)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1READ-CHAR	*/

static object LI46(V455,V456)

object V455;object V456;
{	 VMB46 VMS46 VMV46
	bds_check;
	goto TTL;
TTL:;
	{object V457;
	V457= Cnil;
	V457= (*(LnkLI249))((V456),VV[165]);
	if(((V457))==Cnil){
	goto T1098;}
	bds_bind(VV[154],small_fixnum(10));
	{object V458 = (*(LnkLI235))((V457));
	bds_unwind1;
	VMR46(V458)}
	goto T1098;
T1098:;
	{object V459 = Cnil;
	VMR46(V459)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CFAST-WRITE	*/

static object LI47(V462,V463)

object V462;object V463;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	if(((VV[25]->s.s_dbind))!=Cnil){
	goto T1102;}
	if(!(number_compare((VV[154]->s.s_dbind),small_fixnum(2))<0)){
	goto T1102;}
	if(!((VV[155])->s.s_dbind!=OBJNULL)){
	goto T1102;}
	{register object V464;
	V464= CMPcadr((V462));
	if((V464)!=Cnil){
	goto T1109;}
	V464= VV[169];
	goto T1109;
T1109:;
	if(!(type_of((V464))!=t_cons)){
	goto T1112;}
	V465= list(2,VV[160],(V464));
	V466= list(2,/* INLINE-ARGS */V465,list(3,VV[86],VV[96],list(3,VV[170],VV[171],(V464))));
	{object V467 = list(3,VV[159],/* INLINE-ARGS */V466,list(2,Ct,list(3,(V463),VV[171],(V464))));
	VMR47(V467)}
	goto T1112;
T1112:;
	V468= list(2,VV[172],(V464));
	V469= make_cons(/* INLINE-ARGS */V468,Cnil);
	V470= (*(LnkLI239))((V464));
	V471= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V470,VV[172]));
	V472= list(2,VV[171],VV[172]);
	{object V473 = list(4,VV[29],/* INLINE-ARGS */V469,/* INLINE-ARGS */V471,(*(LnkLI250))(/* INLINE-ARGS */V472,(V463)));
	VMR47(V473)}}
	goto T1102;
T1102:;
	{object V474 = Cnil;
	VMR47(V474)}
	return Cnil;
}
/*	local entry for function CO1WRITE-BYTE	*/

static object LI48(V477,V478)

object V477;register object V478;
{	 VMB48 VMS48 VMV48
	bds_check;
	goto TTL;
TTL:;
	{object V479;
	V479= (*(LnkLI250))((V478),VV[173]);
	if(((V479))==Cnil){
	goto T1117;}
	bds_bind(VV[154],small_fixnum(10));
	V480= list(2,VV[171],CMPcar((V478)));
	V481= make_cons(/* INLINE-ARGS */V480,Cnil);
	if(!(type_of(CMPcar((V478)))!=t_cons)){
	goto T1121;}
	V482= CMPcar((V478));
	goto T1119;
	goto T1121;
T1121:;
	V482= VV[171];
	goto T1119;
T1119:;
	V483= list(5,VV[29],/* INLINE-ARGS */V481,VV[174],(V479),V482);
	{object V484 = (*(LnkLI235))(/* INLINE-ARGS */V483);
	bds_unwind1;
	VMR48(V484)}
	goto T1117;
T1117:;
	{object V485 = Cnil;
	VMR48(V485)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1WRITE-CHAR	*/

static object LI49(V488,V489)

object V488;register object V489;
{	 VMB49 VMS49 VMV49
	bds_check;
	goto TTL;
TTL:;
	{object V490;
	V490= (*(LnkLI250))((V489),VV[175]);
	if(((V490))==Cnil){
	goto T1126;}
	bds_bind(VV[154],small_fixnum(10));
	V491= list(2,VV[171],CMPcar((V489)));
	V492= make_cons(/* INLINE-ARGS */V491,Cnil);
	if(!(type_of(CMPcar((V489)))!=t_cons)){
	goto T1130;}
	V493= CMPcar((V489));
	goto T1128;
	goto T1130;
T1130:;
	V493= VV[171];
	goto T1128;
T1128:;
	V494= list(5,VV[29],/* INLINE-ARGS */V492,VV[176],(V490),V493);
	{object V495 = (*(LnkLI235))(/* INLINE-ARGS */V494);
	bds_unwind1;
	VMR49(V495)}
	goto T1126;
T1126:;
	{object V496 = Cnil;
	VMR49(V496)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function AET-C-TYPE	*/

static object LI50(V498)

object V498;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V499= (V498);
	if((V499!= Ct))goto T1132;
	{object V500 = VV[177];
	VMR50(V500)}
	goto T1132;
T1132:;
	if((V499!= VV[118])
	&& (V499!= VV[251]))goto T1133;
	{object V501 = VV[178];
	VMR50(V501)}
	goto T1133;
T1133:;
	if((V499!= VV[96]))goto T1134;
	{object V502 = VV[179];
	VMR50(V502)}
	goto T1134;
T1134:;
	if((V499!= VV[252]))goto T1135;
	{object V503 = VV[180];
	VMR50(V503)}
	goto T1135;
T1135:;
	if((V499!= VV[253]))goto T1136;
	{object V504 = VV[181];
	VMR50(V504)}
	goto T1136;
T1136:;
	if((V499!= VV[254]))goto T1137;
	{object V505 = VV[182];
	VMR50(V505)}
	goto T1137;
T1137:;
	if((V499!= VV[253]))goto T1138;
	{object V506 = VV[183];
	VMR50(V506)}
	goto T1138;
T1138:;
	if((V499!= VV[255]))goto T1139;
	{object V507 = VV[184];
	VMR50(V507)}
	goto T1139;
T1139:;
	if((V499!= VV[256]))goto T1140;
	{object V508 = VV[185];
	VMR50(V508)}
	goto T1140;
T1140:;
	FEerror("The ECASE key value ~s is illegal.",1,V499);
	{object V509 = Cnil;
	VMR50(V509)}}
	return Cnil;
}
/*	local entry for function CO1VECTOR-PUSH	*/

static object LI51(V512,V513)

object V512;register object V513;
{	 VMB51 VMS51 VMV51
	bds_check;
	goto TTL;
TTL:;
	if(((VV[25]->s.s_dbind))!=Cnil){
	goto T1143;}
	if(number_compare((VV[154]->s.s_dbind),small_fixnum(3))>0){
	goto T1143;}
	if((CMPcdr((V513)))==Cnil){
	goto T1143;}
	bds_bind(VV[154],small_fixnum(10));
	V514= list(2,VV[187],CMPcar((V513)));
	V515= listA(3,/* INLINE-ARGS */V514,list(2,VV[188],CMPcadr((V513))),VV[189]);
	V516= (*(LnkLI239))(CMPcadr((V513)));
	V517= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V516,VV[188]));
	V518= (*(LnkLI239))(CMPcar((V513)));
	V519= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V518,VV[187]));
	if(!(((V512))==(VV[192]))){
	goto T1151;}
	V520= listA(4,VV[192],VV[187],VV[188],CMPcddr((V513)));
	goto T1149;
	goto T1151;
T1151:;
	V520= Cnil;
	goto T1149;
T1149:;
	V521= list(6,VV[186],/* INLINE-ARGS */V515,VV[190],/* INLINE-ARGS */V517,/* INLINE-ARGS */V519,list(3,VV[159],VV[191],list(2,Ct,V520)));
	{object V522 = (*(LnkLI235))(/* INLINE-ARGS */V521);
	bds_unwind1;
	VMR51(V522)}
	goto T1143;
T1143:;
	{object V523 = Cnil;
	VMR51(V523)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CONSTANT-FOLD-P	*/

static object LI52(V525)

register object V525;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	base[0]= (V525);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1154;}
	{object V526 = Ct;
	VMR52(V526)}
	goto T1154;
T1154:;
	if(!(type_of((V525))!=t_cons)){
	goto T1158;}
	{object V527 = Cnil;
	VMR52(V527)}
	goto T1158;
T1158:;
	if(!((CMPcar((V525)))==(VV[86]))){
	goto T1161;}
	V525= CMPcaddr((V525));
	goto TTL;
	goto T1161;
T1161:;
	if(!(type_of(CMPcar((V525)))==t_symbol)){
	goto T1166;}
	{object V529 =(CMPcar((V525)))->s.s_plist;
	 object ind= VV[193];
	while(V529!=Cnil){
	if(V529->c.c_car==ind){
	V528= (V529->c.c_cdr->c.c_car);
	goto T1170;
	}else V529=V529->c.c_cdr->c.c_cdr;}
	V528= Cnil;}
	goto T1170;
T1170:;
	if(!((V528)==(VV[194]))){
	goto T1166;}
	{register object V530;
	register object V531;
	V530= CMPcdr((V525));
	V531= CMPcar((V530));
	goto T1175;
T1175:;
	if(!(((V530))==Cnil)){
	goto T1176;}
	goto T1171;
	goto T1176;
T1176:;{object V532;
	V532= (*(LnkLI257))((V531));
	if(V532==Cnil)goto T1181;
	goto T1180;
	goto T1181;
T1181:;}
	{object V533 = Cnil;
	VMR52(V533)}
	goto T1180;
T1180:;
	V530= CMPcdr((V530));
	V531= CMPcar((V530));
	goto T1175;}
	goto T1171;
T1171:;
	{object V534 = Ct;
	VMR52(V534)}
	goto T1166;
T1166:;
	{object V535 = Cnil;
	VMR52(V535)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1CONSTANT-FOLD	*/

static object LI53(V538,V539)

object V538;object V539;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	base[0]= (V538);
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1189;}
	{register object V540;
	register object V541;
	V540= (V539);
	V541= CMPcar((V540));
	goto T1197;
T1197:;
	if(!(((V540))==Cnil)){
	goto T1198;}
	goto T1193;
	goto T1198;
T1198:;{object V542;
	V542= (*(LnkLI257))((V541));
	if(V542==Cnil)goto T1203;
	goto T1202;
	goto T1203;
T1203:;}
	{object V543 = Cnil;
	VMR53(V543)}
	goto T1202;
T1202:;
	V540= CMPcdr((V540));
	V541= CMPcar((V540));
	goto T1197;}
	goto T1193;
T1193:;
	base[0]= make_cons((V538),(V539));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk258)();
	vs_top=sup;
	V544= vs_base[0];
	{object V545 = (*(LnkLI235))(V544);
	VMR53(V545)}
	goto T1189;
T1189:;
	{object V546 = Cnil;
	VMR53(V546)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1SPECIAL-FIX-DECL	*/

static object LI54(V549,V550)

object V549;register object V550;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	{object V552= (V549);
	if((V552!= VV[260])
	&& (V552!= VV[261]))goto T1213;
	V553= CMPcar((V550));
	V554= CMPcadr((V550));
	base[0]= CMPcddr((V550));
	vs_top=(vs_base=base+0)+1;
	L55(base);
	vs_top=sup;
	V555= vs_base[0];
	V551= listA(4,(V549),/* INLINE-ARGS */V553,/* INLINE-ARGS */V554,V555);
	goto T1212;
	goto T1213;
T1213:;
	if((V552!= VV[262])
	&& (V552!= VV[263]))goto T1216;
	V556= CMPcar((V550));
	base[0]= CMPcdr((V550));
	vs_top=(vs_base=base+0)+1;
	L55(base);
	vs_top=sup;
	V557= vs_base[0];
	V551= listA(3,(V549),/* INLINE-ARGS */V556,V557);
	goto T1212;
	goto T1216;
T1216:;
	V551= Cnil;}
	goto T1212;
T1212:;
	V558= (*(LnkLI259))(V551);
	{object V559 = (*(LnkLI235))(/* INLINE-ARGS */V558);
	VMR54(V559)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1SUBLIS	*/

static object LI56(V562,V563)

object V562;register object V563;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{register object V564;
	V564= Cnil;switch((long)length((V563))){
	case 2:
	goto T1224;
T1224:;
	V564= VV[50];
	if((VV[50])!=Cnil){
	goto T1221;}
	goto T1222;
	case 4:
	goto T1225;
T1225:;
	if((CMPcaddr((V563)))==(VV[51])){
	goto T1228;}
	goto T1222;
	goto T1228;
T1228:;
	{register object x= CMPcadddr((V563)),V565= VV[195];
	while(V565!=Cnil)
	if(eql(x,V565->c.c_car)){
	goto T1232;
	}else V565=V565->c.c_cdr;
	goto T1231;}
	goto T1232;
T1232:;
	V564= VV[196];
	if((VV[196])!=Cnil){
	goto T1221;}
	goto T1222;
	goto T1231;
T1231:;
	{register object x= CMPcadddr((V563)),V566= VV[197];
	while(V566!=Cnil)
	if(eql(x,V566->c.c_car)){
	goto T1236;
	}else V566=V566->c.c_cdr;
	goto T1235;}
	goto T1236;
T1236:;
	V564= VV[50];
	if((VV[50])!=Cnil){
	goto T1221;}
	goto T1222;
	goto T1235;
T1235:;
	{register object x= CMPcadddr((V563)),V567= VV[198];
	while(V567!=Cnil)
	if(eql(x,V567->c.c_car)){
	goto T1240;
	}else V567=V567->c.c_cdr;
	goto T1239;}
	goto T1240;
T1240:;
	V564= VV[48];
	if((VV[48])!=Cnil){
	goto T1221;}
	goto T1222;
	goto T1239;
T1239:;
	goto T1222;
	default:
	goto T1226;
T1226:;
	goto T1222;}
	goto T1222;
T1222:;
	{object V568 = Cnil;
	VMR55(V568)}
	goto T1221;
T1221:;
	{object V569;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V569= vs_base[0];
	V570= list(2,(V569),CMPcar((V563)));
	V571= make_cons(/* INLINE-ARGS */V570,Cnil);
	V572= CMPcadr((V563));
	V573= list(3,VV[29],/* INLINE-ARGS */V571,list(4,VV[199],(V569),/* INLINE-ARGS */V572,list(2,VV[113],(V564))));
	{object V574 = (*(LnkLI235))(/* INLINE-ARGS */V573);
	VMR55(V574)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SUBLIS1-INLINE	*/

static object LI57(V578,V579,V580)

object V578;object V579;object V580;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V581;
	V582= (VFUN_NARGS=4,(*(LnkLI264))(CMPcadr((V580)),(VV[200]->s.s_dbind),VV[201],VV[105]));
	V581= CMPcar(/* INLINE-ARGS */V582);{object V583;
	{register object x= (V581),V584= VV[202];
	while(V584!=Cnil)
	if(eql(x,V584->c.c_car)){
	V583= V584;
	goto T1246;
	}else V584=V584->c.c_cdr;
	V583= Cnil;}
	goto T1246;
T1246:;
	if(V583==Cnil)goto T1245;
	goto T1244;
	goto T1245;
T1245:;}
	base[0]= VV[203];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1244;
T1244:;
	princ_str("(check_alist(",VV[7]);
	(void)((*(LnkLI213))((V578)));
	princ_str("),sublis1(",VV[7]);
	(void)((*(LnkLI213))((V578)));
	princ_char(44,VV[7]);
	(void)((*(LnkLI213))((V579)));
	princ_char(44,VV[7]);
	base[0]= Cnil;
	base[1]= VV[204];
	base[2]= (V581);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V585= vs_base[0];
	(void)((*(LnkLI213))(V585));
	{object V586 = Cnil;
	VMR56(V586)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1LIST-NTH	*/

static object LI58(V588)

register object V588;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;
	{register object V589;
	V589= (VFUN_NARGS=0,(*(LnkLI208))());
	if(((V588))==Cnil){
	goto T1262;}
	if(!((CMPcdr((V588)))==Cnil)){
	goto T1261;}
	goto T1262;
T1262:;
	V590 = CMPmake_fixnum((long)length((V588)));
	(void)((*(LnkLI209))(VV[151],small_fixnum(2),V590));
	goto T1261;
T1261:;
	if((CMPcddr((V588)))==Cnil){
	goto T1266;}
	V591 = CMPmake_fixnum((long)length((V588)));
	(void)((*(LnkLI209))(VV[151],small_fixnum(2),V591));
	goto T1266;
T1266:;
	{object V592= CMPcar((V588));
	if(!(type_of(V592)==t_fixnum||
type_of(V592)==t_bignum||
type_of(V592)==t_ratio||
type_of(V592)==t_shortfloat||
type_of(V592)==t_longfloat||
type_of(V592)==t_complex)){
	goto T1270;}}
	base[1]= small_fixnum(0);
	base[2]= CMPcar((V588));
	base[3]= small_fixnum(10);
	vs_top=(vs_base=base+1)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1270;}
	V593= CMPcar((V588));
	V594= make_cons(CMPcadr((V588)),Cnil);
	{object V595 = list(4,VV[205],(V589),/* INLINE-ARGS */V593,(*(LnkLI219))(/* INLINE-ARGS */V594,(V589)));
	VMR57(V595)}
	goto T1270;
T1270:;
	{object V596 = list(4,VV[4],(V589),VV[206],(*(LnkLI219))((V588),(V589)));
	VMR57(V596)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2LIST-NTH-IMMEDIATE	*/

static object LI59(V599,V600)

object V599;object V600;
{	 VMB58 VMS58 VMV58
	bds_check;
	goto TTL;
TTL:;
	{object V601;
	(VV[22]->s.s_dbind)= number_plus((VV[22]->s.s_dbind),small_fixnum(1));
	V601= (VV[22]->s.s_dbind);
	bds_bind(VV[20],(VV[20]->s.s_dbind));
	bds_bind(VV[42],small_fixnum(0));
	V600= (VFUN_NARGS=2,(*(LnkLI232))((V600),VV[207]));
	princ_str("\n	{object V",VV[7]);
	(void)((*(LnkLI213))((V601)));
	princ_str("= ",VV[7]);
	if(((VV[25]->s.s_dbind))==Cnil){
	goto T1287;}
	{register long V602;
	register long V603;
	V602= fix((V599));
	V603= 0;
	goto T1293;
T1293:;
	if(!((V603)>=(V602))){
	goto T1294;}
	goto T1289;
	goto T1294;
T1294:;
	princ_str("cdr(",VV[7]);
	V603= (long)(V603)+1;
	goto T1293;}
	goto T1289;
T1289:;
	(void)((*(LnkLI213))(CMPcar((V600))));
	{register long V604;
	register long V605;
	V604= fix((V599));
	V605= 0;
	goto T1309;
T1309:;
	if(!((V605)>=(V604))){
	goto T1310;}
	goto T1305;
	goto T1310;
T1310:;
	princ_char(41,VV[7]);
	V605= (long)(V605)+1;
	goto T1309;}
	goto T1305;
T1305:;
	princ_char(59,VV[7]);
	princ_str("\n	if((type_of(V",VV[7]);
	(void)((*(LnkLI213))((V601)));
	princ_str(")!=t_cons) && (",VV[7]);
	(void)((*(LnkLI213))(CMPcar((V600))));
	princ_str("!= Cnil))",VV[7]);
	princ_str("\n	 FEwrong_type_argument(Scons,V",VV[7]);
	(void)((*(LnkLI213))((V601)));
	princ_str(");",VV[7]);
	goto T1285;
	goto T1287;
T1287:;
	princ_str("\n	",VV[7]);
	(void)((*(LnkLI213))(CMPcar((V600))));
	{register long V606;
	register long V607;
	V606= fix((V599));
	V607= 0;
	goto T1337;
T1337:;
	if(!((V607)>=(V606))){
	goto T1338;}
	goto T1333;
	goto T1338;
T1338:;
	princ_str("\n	->c.c_cdr",VV[7]);
	V607= (long)(V607)+1;
	goto T1337;}
	goto T1333;
T1333:;
	princ_char(59,VV[7]);
	goto T1285;
T1285:;
	V608= list(2,VV[61],(V601));
	(void)((VFUN_NARGS=1,(*(LnkLI214))(/* INLINE-ARGS */V608)));
	princ_char(125,VV[7]);
	{object V609 = (*(LnkLI233))();
	bds_unwind1;
	bds_unwind1;
	VMR58(V609)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function FIXUP	*/

static void L55(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_check;
	{register object V610;
	V610=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V611;
	V611= Cnil;
	goto T1353;
T1353:;
	if(!(type_of((V610))==t_cons)){
	goto T1356;}
	goto T1355;
	goto T1356;
T1356:;
	goto T1354;
	goto T1355;
T1355:;
	{register object V612;
	V612= CMPcar((V610));
	if(!(type_of((V612))==t_cons)){
	goto T1361;}
	V612= (*(LnkLI259))((V612));
	if(((V612))==Cnil){
	goto T1361;}
	if(!((CMPcar((V612)))==(VV[106]))){
	goto T1361;}
	{register object V613;
	V613= (V612);
	V611= make_cons((V613),(V611));}
	{register object V614;
	V614= CMPcar((V610));
	V610= CMPcdr((V610));
	goto T1358;}
	goto T1361;
T1361:;
	goto T1354;}
	goto T1358;
T1358:;
	goto T1353;
	goto T1354;
T1354:;
	V615= nreverse((V611));
	base[1]= nconc(/* INLINE-ARGS */V615,(V610));
	vs_top=(vs_base=base+1)+1;
	return;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
static object  LnkTLI264(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[264],(void **)(void *)&LnkLI264,first,ap);va_end(ap);return V1;} /* FIND */
static object  LnkTLI259(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[259],(void **)(void *)&LnkLI259,1,first,ap);va_end(ap);return V1;} /* CMP-MACROEXPAND */
static void LnkT258(){ call_or_link(VV[258],(void **)(void *)&Lnk258);} /* CMP-EVAL */
static object  LnkTLI257(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[257],(void **)(void *)&LnkLI257,1,first,ap);va_end(ap);return V1;} /* CONSTANT-FOLD-P */
static object  LnkTLI250(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[250],(void **)(void *)&LnkLI250,2,first,ap);va_end(ap);return V1;} /* CFAST-WRITE */
static object  LnkTLI249(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[249],(void **)(void *)&LnkLI249,2,first,ap);va_end(ap);return V1;} /* FAST-READ */
static object  LnkTLI248(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[248],(void **)(void *)&LnkLI248,1,first,ap);va_end(ap);return V1;} /* CONS-TO-LISTA */
static object  LnkTLI247(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[247],(void **)(void *)&LnkLI247,1,first,ap);va_end(ap);return V1;} /* NAME-SD1 */
static object  LnkTLI246(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[246],(void **)(void *)&LnkLI246,1,first,ap);va_end(ap);return V1;} /* GET-INCLUDED */
static object  LnkTLI245(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[245],(void **)(void *)&LnkLI245,2,first,ap);va_end(ap);return V1;} /* STRUCT-TYPE-OPT */
static object  LnkTLI244(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[244],(void **)(void *)&LnkLI244,1,first,ap);va_end(ap);return V1;} /* NORMALIZE-TYPE */
static object  LnkTLI243(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[243],(void **)(void *)&LnkLI243,first,ap);va_end(ap);return V1;} /* POSITION */
static object  LnkTLI242(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[242],(void **)(void *)&LnkLI242,1,first,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI241(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[241],(void **)(void *)&LnkLI241,1,first,ap);va_end(ap);return V1;} /* TYPE-FILTER */
static object  LnkTLI240(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[240],(void **)(void *)&LnkLI240,1,first,ap);va_end(ap);return V1;} /* REPLACE-CONSTANT */
static object  LnkTLI239(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[239],(void **)(void *)&LnkLI239,1,first,ap);va_end(ap);return V1;} /* RESULT-TYPE */
static void LnkT238(){ call_or_link(VV[238],(void **)(void *)&Lnk238);} /* FIXNUMP */
static void LnkT237(){ call_or_link(VV[237],(void **)(void *)&Lnk237);} /* SUBTYPEP */
static void LnkT236(){ call_or_link(VV[236],(void **)(void *)&Lnk236);} /* WT-INLINE-LOC */
static object  LnkTLI235(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[235],(void **)(void *)&LnkLI235,1,first,ap);va_end(ap);return V1;} /* C1EXPR */
static object  LnkTLI234(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[234],(void **)(void *)&LnkLI234,1,first,ap);va_end(ap);return V1;} /* INLINE-BOOLE3-STRING */
static object  LnkTLI233(){return call_proc0(VV[233],(void **)(void *)&LnkLI233);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI232(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[232],(void **)(void *)&LnkLI232,first,ap);va_end(ap);return V1;} /* INLINE-ARGS */
static object  LnkTLI231(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[231],(void **)(void *)&LnkLI231,2,first,ap);va_end(ap);return V1;} /* ADD-INFO */
static void LnkT230(){ call_or_link(VV[230],(void **)(void *)&Lnk230);} /* C2EXPR */
static object  LnkTLI229(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[229],(void **)(void *)&LnkLI229,1,first,ap);va_end(ap);return V1;} /* C2BIND */
static object  LnkTLI228(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[228],(void **)(void *)&LnkLI228,1,first,ap);va_end(ap);return V1;} /* WT-VS */
static object  LnkTLI227(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[227],(void **)(void *)&LnkLI227,2,first,ap);va_end(ap);return V1;} /* WT-VAR */
static object  LnkTLI226(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[226],(void **)(void *)&LnkLI226,first,ap);va_end(ap);return V1;} /* MAKE-VAR */
static object  LnkTLI225(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[225],(void **)(void *)&LnkLI225,first,ap);va_end(ap);return V1;} /* CMPERR */
static object  LnkTLI224(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[224],(void **)(void *)&LnkLI224,first,ap);va_end(ap);return V1;} /* C2FUNCALL */
static object  LnkTLI223(){return call_proc0(VV[223],(void **)(void *)&LnkLI223);} /* VS-PUSH */
static object  LnkTLI222(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[222],(void **)(void *)&LnkLI222,1,first,ap);va_end(ap);return V1;} /* C2EXPR* */
static object  LnkTLI221(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[221],(void **)(void *)&LnkLI221,1,first,ap);va_end(ap);return V1;} /* SAVE-FUNOB */
static object  LnkTLI220(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[220],(void **)(void *)&LnkLI220,5,first,ap);va_end(ap);return V1;} /* C1APPLY-OPTIMIZE */
static object  LnkTLI219(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[219],(void **)(void *)&LnkLI219,2,first,ap);va_end(ap);return V1;} /* C1ARGS */
static void LnkT218(){ call_or_link(VV[218],(void **)(void *)&Lnk218);} /* COPY-INFO */
static object  LnkTLI217(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[217],(void **)(void *)&LnkLI217,1,first,ap);va_end(ap);return V1;} /* C1FUNOB */
static object  LnkTLI216(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[216],(void **)(void *)&LnkLI216,1,first,ap);va_end(ap);return V1;} /* ADD-OBJECT */
static object  LnkTLI215(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[215],(void **)(void *)&LnkLI215,4,first,ap);va_end(ap);return V1;} /* C2CALL-GLOBAL */
static object  LnkTLI214(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[214],(void **)(void *)&LnkLI214,first,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI213(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[213],(void **)(void *)&LnkLI213,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI212(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[212],(void **)(void *)&LnkLI212,2,first,ap);va_end(ap);return V1;} /* C1EXPR* */
static object  LnkTLI211(){return call_proc0(VV[211],(void **)(void *)&LnkLI211);} /* C1NIL */
static object  LnkTLI210(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[210],(void **)(void *)&LnkLI210,3,first,ap);va_end(ap);return V1;} /* TOO-MANY-ARGS */
static object  LnkTLI209(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[209],(void **)(void *)&LnkLI209,3,first,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */
static object  LnkTLI208(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[208],(void **)(void *)&LnkLI208,first,ap);va_end(ap);return V1;} /* MAKE-INFO */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

