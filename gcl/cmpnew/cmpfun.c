
#include "cmpinclude.h"
#include "cmpfun.h"
init_cmpfun(){do_init(VV);}
/*	local entry for function C1PRINC	*/

static object LI1(V2)

register object V2;
{	 VMB1 VMS1 VMV1
TTL:;
	{register object V3;
	register object V4;
	V3= Cnil;
	V4= (VFUN_NARGS=0,(*(LnkLI208))());
	if(!(endp((V2)))){
	goto T3;}
	(void)((*(LnkLI209))(VV[0],small_fixnum(1),small_fixnum(0)));
T3:;
	if(endp(cdr((V2)))){
	goto T6;}
	if(endp(cddr((V2)))){
	goto T6;}
	V5 = make_fixnum(length((V2)));
	(void)((*(LnkLI210))(VV[0],small_fixnum(2),V5));
T6:;
	if(!(endp(cdr((V2))))){
	goto T14;}
	V3= (*(LnkLI211))();
	goto T12;
T14:;
	V3= (*(LnkLI212))(cadr((V2)),(V4));
T12:;
	if(!(type_of(car((V2)))==t_string)){
	goto T19;}
	V6 = make_fixnum(length(car((V2))));
	if(number_compare(V6,symbol_value(VV[1]))<=0){
	goto T18;}
T19:;
	if(!(type_of(car((V2)))==t_character)){
	goto T17;}
T18:;
	if(endp(cdr((V2)))){
	goto T16;}
	if(!((car((V3)))==(VV[2]))){
	goto T17;}
	V8= structure_ref(caaddr((V3)),VV[2],1);
	{register object x= /* INLINE-ARGS */V8,V7= VV[3];
	while(!endp(V7))
	if(eql(x,V7->c.c_car)){
	goto T28;
	}else V7=V7->c.c_cdr;
	goto T17;}
T28:;
T16:;
	V9= car((V2));
	if(!(endp(cdr((V2))))){
	goto T31;}
	V10= Cnil;
	goto T29;
T31:;
	V10= structure_ref(caaddr((V3)),VV[2],4);
T29:;
	{object V11 = list(5,VV[0],(V4),/* INLINE-ARGS */V9,V10,(V3));
	VMR1(V11)}
T17:;
	V12= (*(LnkLI212))(car((V2)),(V4));
	{object V13 = list(4,VV[4],(V4),VV[0],list(2,/* INLINE-ARGS */V12,(V3)));
	VMR1(V13)}}
}
/*	local entry for function C2PRINC	*/

static object LI2(V17,V18,V19)

register object V17;register object V18;object V19;
{	 VMB2 VMS2 VMV2
TTL:;
	if(!((symbol_value(VV[5]))==(VV[6]))){
	goto T34;}
	if(!(type_of((V17))==t_character)){
	goto T38;}
	princ_str("\n	princ_char(",VV[7]);
	base[0]= (V17);
	vs_top=(vs_base=base+0)+1;
	Lchar_code();
	vs_top=sup;
	V20= vs_base[0];
	(void)((*(LnkLI213))(V20));
	if(((V18))!=Cnil){
	goto T47;}
	princ_str(",Cnil",VV[7]);
	goto T45;
T47:;
	princ_str(",VV[",VV[7]);
	(void)((*(LnkLI213))((V18)));
	princ_char(93,VV[7]);
T45:;
	princ_str(");",VV[7]);
	goto T36;
T38:;
	if(!((length((V17)))==(1))){
	goto T55;}
	princ_str("\n	princ_char(",VV[7]);
	base[0]= aref1((V17),0);
	vs_top=(vs_base=base+0)+1;
	Lchar_code();
	vs_top=sup;
	V21= vs_base[0];
	(void)((*(LnkLI213))(V21));
	if(((V18))!=Cnil){
	goto T64;}
	princ_str(",Cnil",VV[7]);
	goto T62;
T64:;
	princ_str(",VV[",VV[7]);
	(void)((*(LnkLI213))((V18)));
	princ_char(93,VV[7]);
T62:;
	princ_str(");",VV[7]);
	goto T36;
T55:;
	princ_str("\n	princ_str(\"",VV[7]);
	{register int V22;
	register int V23;
	V22= length((V17));
	V23= 0;
T77:;
	if(!((V23)>=(V22))){
	goto T78;}
	goto T73;
T78:;
	{register object V24;
	V24= elt((V17),V23);
	base[0]= (V24);
	base[1]= VV[8];
	vs_top=(vs_base=base+0)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T85;}
	princ_str("\\\\",VV[7]);
	goto T82;
T85:;
	base[0]= (V24);
	base[1]= VV[9];
	vs_top=(vs_base=base+0)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T91;}
	princ_str("\\\"",VV[7]);
	goto T82;
T91:;
	base[0]= (V24);
	base[1]= VV[10];
	vs_top=(vs_base=base+0)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T97;}
	princ_str("\\n",VV[7]);
	goto T82;
T97:;
	(void)((*(LnkLI213))((V24)));}
T82:;
	V23= (V23)+1;
	goto T77;}
T73:;
	princ_str("\",",VV[7]);
	if(((V18))!=Cnil){
	goto T110;}
	princ_str("Cnil",VV[7]);
	goto T108;
T110:;
	princ_str("VV[",VV[7]);
	(void)((*(LnkLI213))((V18)));
	princ_char(93,VV[7]);
T108:;
	princ_str(");",VV[7]);
T36:;
	{object V25 = (VFUN_NARGS=1,(*(LnkLI214))(Cnil));
	VMR2(V25)}
T34:;
	if(!(eql((V17),VV[10]))){
	goto T118;}
	V26= make_cons((V19),Cnil);
	{object V27 = (*(LnkLI215))(VV[11],/* INLINE-ARGS */V26,Cnil,Ct);
	VMR2(V27)}
T118:;
	if(!(type_of((V17))==t_character)){
	goto T122;}
	V28= VV[14];
	goto T120;
T122:;
	V28= VV[15];
T120:;
	V29= (VFUN_NARGS=2,(*(LnkLI208))(VV[13],V28));
	V30= list(2,list(3,VV[12],/* INLINE-ARGS */V29,list(2,VV[16],(*(LnkLI216))((V17)))),(V19));
	{object V31 = (*(LnkLI215))(VV[0],/* INLINE-ARGS */V30,Cnil,Ct);
	VMR2(V31)}
}
/*	local entry for function C1TERPRI	*/

static object LI3(V33)

register object V33;
{	 VMB3 VMS3 VMV3
TTL:;
	{register object V34;
	object V35;
	V34= Cnil;
	V35= (VFUN_NARGS=0,(*(LnkLI208))());
	if(endp((V33))){
	goto T126;}
	if(endp(cdr((V33)))){
	goto T126;}
	V36 = make_fixnum(length((V33)));
	(void)((*(LnkLI210))(VV[11],small_fixnum(1),V36));
T126:;
	if(!(endp((V33)))){
	goto T134;}
	V34= (*(LnkLI211))();
	goto T132;
T134:;
	V34= (*(LnkLI212))(car((V33)),(V35));
T132:;
	if(endp((V33))){
	goto T136;}
	if(!((car((V34)))==(VV[2]))){
	goto T137;}
	V38= structure_ref(caaddr((V34)),VV[2],1);
	{register object x= /* INLINE-ARGS */V38,V37= VV[17];
	while(!endp(V37))
	if(eql(x,V37->c.c_car)){
	goto T142;
	}else V37=V37->c.c_cdr;
	goto T137;}
T142:;
T136:;
	if(!(endp((V33)))){
	goto T145;}
	V39= Cnil;
	goto T143;
T145:;
	V39= structure_ref(caaddr((V34)),VV[2],4);
T143:;
	{object V40 = list(5,VV[0],(V35),VV[10],V39,(V34));
	VMR3(V40)}
T137:;
	{object V41 = list(4,VV[4],(V35),VV[11],make_cons((V34),Cnil));
	VMR3(V41)}}
}
/*	local entry for function C1APPLY	*/

static object LI4(V43)

register object V43;
{	 VMB4 VMS4 VMV4
TTL:;
	{register object V44;
	V44= Cnil;
	if(endp((V43))){
	goto T149;}
	if(!(endp(cdr((V43))))){
	goto T148;}
T149:;
	V45 = make_fixnum(length((V43)));
	(void)((*(LnkLI209))(VV[18],small_fixnum(2),V45));
T148:;
	{register object V46;
	V46= (*(LnkLI217))(car((V43)));
	base[0]= cadr((V46));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk218)();
	vs_top=sup;
	V44= vs_base[0];
	V43= (*(LnkLI219))(cdr((V43)),(V44));
	if(!((car((V46)))==(VV[19]))){
	goto T160;}
	{object V47;
	register object V48;
	V47= caddr((V46));
	V48= caddr((V47));
	if((cadr((V48)))!=Cnil){
	goto T165;}
	if((cadddr((V48)))!=Cnil){
	goto T165;}
	{object V49 = (*(LnkLI220))((V44),car((V48)),caddr((V48)),car(cddddr((V47))),(V43));
	VMR4(V49)}
T165:;
	{object V50 = list(4,VV[18],(V44),(V46),(V43));
	VMR4(V50)}}
T160:;
	{object V51 = list(4,VV[18],(V44),(V46),(V43));
	VMR4(V51)}}}
}
/*	local entry for function C2APPLY	*/

static object LI5(V54,V55)

object V54;object V55;
{	 VMB5 VMS5 VMV5
	bds_check;
TTL:;
	{object V56;
	bds_bind(VV[20],symbol_value(VV[20]));
	V56= Cnil;
	V56= (*(LnkLI221))((V54));
	{object V57;
	register object V58;
	base[1]= (VV[20]->s.s_dbind);
	V57= (VV[20]->s.s_dbind);
	setq(VV[22],number_plus(symbol_value(VV[22]),small_fixnum(1)));
	V58= list(2,VV[21],symbol_value(VV[22]));
	bds_bind(VV[20],base[1]);
	{register object V59;
	V59= (V55);
T179:;
	if(!(endp(cdr((V59))))){
	goto T180;}
	princ_str("\n	{object ",VV[7]);
	(void)((*(LnkLI213))((V58)));
	princ_char(59,VV[7]);
	bds_bind(VV[5],(V58));
	V60= (*(LnkLI222))(car((V59)));
	bds_unwind1;
	goto T177;
T180:;
	base[2]= list(2,VV[23],(*(LnkLI223))());
	bds_bind(VV[5],base[2]);
	V61= (*(LnkLI222))(car((V59)));
	bds_unwind1;
	V59= cdr((V59));
	goto T179;}
T177:;
	princ_str("\n	 vs_top=base+",VV[7]);
	(void)((*(LnkLI213))((VV[20]->s.s_dbind)));
	princ_char(59,VV[7]);
	setq(VV[24],Ct);
	if((symbol_value(VV[25]))==Cnil){
	goto T201;}
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
	goto T199;
T201:;
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
T199:;
	princ_str("\n	vs_base=base+",VV[7]);
	(void)((*(LnkLI213))((V57)));
	princ_str(";}",VV[7]);
	setq(VV[24],Ct);
	bds_unwind1;}
	{object V62 = (VFUN_NARGS=3,(*(LnkLI224))((V54),VV[26],(V56)));
	bds_unwind1;
	VMR5(V62)}}
}
/*	local entry for function C1APPLY-OPTIMIZE	*/

static object LI6(V68,V69,V70,V71,V72)

object V68;register object V69;object V70;object V71;register object V72;
{	 VMB6 VMS6 VMV6
TTL:;
	{register object V73;
	register object V74;
	V73= Cnil;
	V74= Cnil;
T236:;
	if(endp(cdr((V72)))){
	goto T238;}
	if(!(endp((V69)))){
	goto T237;}
T238:;
	goto T234;
T237:;
	{register object V76;
	V76= car((V69));
	V69= cdr((V69));
	V75= (V76);}
	V73= make_cons(V75,(V73));
	{register object V78;
	V78= car((V72));
	V72= cdr((V72));
	V77= (V78);}
	V74= make_cons(V77,(V74));
	goto T236;
T234:;
	if((cdr((V72)))==Cnil){
	goto T258;}
	if(((V70))!=Cnil){
	goto T260;}
	(void)((VFUN_NARGS=1,(*(LnkLI225))(VV[27])));
T260:;
	V73= make_cons((V70),(V73));
	V79= list(4,VV[4],(V68),VV[28],(V72));
	V74= make_cons(/* INLINE-ARGS */V79,(V74));
	V80= reverse((V73));
	{object V81 = list(5,VV[29],(V68),/* INLINE-ARGS */V80,reverse((V74)),(V71));
	VMR6(V81)}
T258:;
	if(((V69))==Cnil){
	goto T268;}
	{object V82;
	V82= (VFUN_NARGS=4,(*(LnkLI226))(VV[30],VV[31],VV[32],Ct));
	V73= make_cons((V82),(V73));
	V74= make_cons(car((V72)),(V74));
	V83= reverse((V73));
	V84= reverse((V74));
	{object V85 = list(5,VV[29],(V68),/* INLINE-ARGS */V83,/* INLINE-ARGS */V84,list(6,VV[33],cadr((V71)),(V82),(V69),(V70),(V71)));
	VMR6(V85)}}
T268:;
	if(((V70))==Cnil){
	goto T276;}
	V73= make_cons((V70),(V73));
	V74= make_cons(car((V72)),(V74));
	V86= reverse((V73));
	{object V87 = list(5,VV[29],(V68),/* INLINE-ARGS */V86,reverse((V74)),(V71));
	VMR6(V87)}
T276:;
	{object V88;
	V88= (VFUN_NARGS=4,(*(LnkLI226))(VV[30],VV[31],VV[32],Ct));
	V73= make_cons((V88),(V73));
	V74= make_cons(car((V72)),(V74));
	V89= reverse((V73));
	V90= reverse((V74));
	{object V91 = list(5,VV[29],(V68),/* INLINE-ARGS */V89,/* INLINE-ARGS */V90,list(6,VV[33],cadr((V71)),(V88),(V69),(V70),(V71)));
	VMR6(V91)}}}
}
/*	function definition for C2APPLY-OPTIMIZE	*/

static L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	bds_check;
	{object V92;
	object V93;
	object V94;
	object V95;
	check_arg(4);
	V92=(base[0]);
	V93=(base[1]);
	V94=(base[2]);
	V95=(base[3]);
	vs_top=sup;
TTL:;
	bds_bind(VV[34],symbol_value(VV[34]));
	bds_bind(VV[20],symbol_value(VV[20]));
	bds_bind(VV[35],symbol_value(VV[35]));
	bds_bind(VV[36],symbol_value(VV[36]));
	if((symbol_value(VV[25]))!=Cnil){
	goto T288;}
	if((symbol_value(VV[37]))==Cnil){
	goto T287;}
T288:;
	princ_str("\n	",VV[7]);
	if(((V94))==Cnil){
	goto T297;}
	V96= VV[38];
	goto T295;
T297:;
	V96= VV[39];
T295:;
	(void)((*(LnkLI213))(V96));
	princ_char(40,VV[7]);
	V97 = make_fixnum(length((V93)));
	(void)((*(LnkLI213))(V97));
	princ_char(44,VV[7]);
	(void)((*(LnkLI227))((V92),Cnil));
	princ_str(");",VV[7]);
T287:;
	{object V98;
	object V99;
	V98= (V93);
	V99= car((V98));
T308:;
	if(!(endp((V98)))){
	goto T309;}
	goto T304;
T309:;
	V100= (*(LnkLI223))();
	(void)(structure_set((V99),VV[2],2,/* INLINE-ARGS */V100));
	V98= cdr((V98));
	V99= car((V98));
	goto T308;}
T304:;
	if(((V94))==Cnil){
	goto T319;}
	V101= (*(LnkLI223))();
	(void)(structure_set((V94),VV[2],2,/* INLINE-ARGS */V101));
T319:;
	{register int V102;
	object V103;
	V102= 0;
	V103= (V93);
T325:;
	if(!(endp((V103)))){
	goto T326;}
	if(((V94))==Cnil){
	goto T322;}
	princ_str("\n	",VV[7]);
	V104= structure_ref((V94),VV[2],2);
	(void)((*(LnkLI228))(/* INLINE-ARGS */V104));
	princ_str("= ",VV[7]);
	{int V105;
	register int V106;
	V105= V102;
	V106= 0;
T339:;
	if(!((V106)>=(V105))){
	goto T340;}
	goto T335;
T340:;
	princ_char(40,VV[7]);
	V106= (V106)+1;
	goto T339;}
T335:;
	(void)((*(LnkLI227))((V92),Cnil));
	{int V107;
	register int V108;
	V107= V102;
	V108= 0;
T354:;
	if(!((V108)>=(V107))){
	goto T355;}
	goto T350;
T355:;
	princ_str("\n	)->c.c_cdr",VV[7]);
	V108= (V108)+1;
	goto T354;}
T350:;
	princ_char(59,VV[7]);
	goto T322;
T326:;
	princ_str("\n	",VV[7]);
	V109= structure_ref(car((V103)),VV[2],2);
	(void)((*(LnkLI228))(/* INLINE-ARGS */V109));
	princ_str("=(",VV[7]);
	{int V110;
	register int V111;
	V110= V102;
	V111= 0;
T374:;
	if(!((V111)>=(V110))){
	goto T375;}
	goto T370;
T375:;
	princ_char(40,VV[7]);
	V111= (V111)+1;
	goto T374;}
T370:;
	(void)((*(LnkLI227))((V92),Cnil));
	{int V112;
	register int V113;
	V112= V102;
	V113= 0;
T389:;
	if(!((V113)>=(V112))){
	goto T390;}
	goto T385;
T390:;
	princ_str("\n	)->c.c_cdr",VV[7]);
	V113= (V113)+1;
	goto T389;}
T385:;
	princ_str(")->c.c_car;",VV[7]);
	V102= (V102)+1;
	V103= cdr((V103));
	goto T325;}
T322:;
	{object V114;
	object V115;
	V114= (V93);
	V115= car((V114));
T409:;
	if(!(endp((V114)))){
	goto T410;}
	goto T405;
T410:;
	(void)((*(LnkLI229))((V115)));
	V114= cdr((V114));
	V115= car((V114));
	goto T409;}
T405:;
	if(((V94))==Cnil){
	goto T420;}
	(void)((*(LnkLI229))((V94)));
T420:;
	base[8]= (V95);
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

static object LI8(V117)

object V117;
{	 VMB8 VMS8 VMV8
TTL:;
	{object V118;
	object V119;
	V118= Cnil;
	V119= (VFUN_NARGS=0,(*(LnkLI208))());
	if(!(endp((V117)))){
	goto T426;}
	(void)((*(LnkLI209))(VV[40],small_fixnum(1),small_fixnum(0)));
T426:;
	V118= (*(LnkLI217))(car((V117)));
	(void)((*(LnkLI231))((V119),cadr((V118))));
	{object V120 = list(4,VV[40],(V119),(V118),(*(LnkLI219))(cdr((V117)),(V119)));
	VMR8(V120)}}
}
/*	local entry for function C1RPLACA	*/

static object LI9(V122)

register object V122;
{	 VMB9 VMS9 VMV9
TTL:;
	{object V123;
	V123= (VFUN_NARGS=0,(*(LnkLI208))());
	if(endp((V122))){
	goto T434;}
	if(!(endp(cdr((V122))))){
	goto T433;}
T434:;
	V124 = make_fixnum(length((V122)));
	(void)((*(LnkLI209))(VV[41],small_fixnum(2),V124));
T433:;
	if(endp(cddr((V122)))){
	goto T438;}
	V125 = make_fixnum(length((V122)));
	(void)((*(LnkLI210))(VV[41],small_fixnum(2),V125));
T438:;
	V122= (*(LnkLI219))((V122),(V123));
	{object V126 = list(3,VV[41],(V123),(V122));
	VMR9(V126)}}
}
/*	local entry for function C2RPLACA	*/

static object LI10(V128)

register object V128;
{	 VMB10 VMS10 VMV10
	bds_check;
TTL:;
	bds_bind(VV[20],symbol_value(VV[20]));
	bds_bind(VV[42],small_fixnum(0));
	V128= (VFUN_NARGS=2,(*(LnkLI232))((V128),VV[43]));
	if((symbol_value(VV[25]))==Cnil){
	goto T445;}
	princ_str("\n	if(type_of(",VV[7]);
	(void)((*(LnkLI213))(car((V128))));
	princ_str(")!=t_cons)",VV[7]);
	princ_str("FEwrong_type_argument(Scons,",VV[7]);
	(void)((*(LnkLI213))(car((V128))));
	princ_str(");",VV[7]);
T445:;
	princ_str("\n	(",VV[7]);
	(void)((*(LnkLI213))(car((V128))));
	princ_str(")->c.c_car = ",VV[7]);
	(void)((*(LnkLI213))(cadr((V128))));
	princ_char(59,VV[7]);
	(void)((VFUN_NARGS=1,(*(LnkLI214))(car((V128)))));
	{object V129 = (*(LnkLI233))();
	bds_unwind1;
	bds_unwind1;
	VMR10(V129)}
}
/*	local entry for function C1RPLACD	*/

static object LI11(V131)

register object V131;
{	 VMB11 VMS11 VMV11
TTL:;
	{object V132;
	V132= (VFUN_NARGS=0,(*(LnkLI208))());
	if(endp((V131))){
	goto T463;}
	if(!(endp(cdr((V131))))){
	goto T462;}
T463:;
	V133 = make_fixnum(length((V131)));
	(void)((*(LnkLI209))(VV[44],small_fixnum(2),V133));
T462:;
	if(endp(cddr((V131)))){
	goto T467;}
	V134 = make_fixnum(length((V131)));
	(void)((*(LnkLI210))(VV[44],small_fixnum(2),V134));
T467:;
	V131= (*(LnkLI219))((V131),(V132));
	{object V135 = list(3,VV[44],(V132),(V131));
	VMR11(V135)}}
}
/*	local entry for function C2RPLACD	*/

static object LI12(V137)

register object V137;
{	 VMB12 VMS12 VMV12
	bds_check;
TTL:;
	bds_bind(VV[20],symbol_value(VV[20]));
	bds_bind(VV[42],small_fixnum(0));
	V137= (VFUN_NARGS=2,(*(LnkLI232))((V137),VV[45]));
	if((symbol_value(VV[25]))==Cnil){
	goto T474;}
	princ_str("\n	if(type_of(",VV[7]);
	(void)((*(LnkLI213))(car((V137))));
	princ_str(")!=t_cons)",VV[7]);
	princ_str("FEwrong_type_argument(Scons,",VV[7]);
	(void)((*(LnkLI213))(car((V137))));
	princ_str(");",VV[7]);
T474:;
	princ_str("\n	(",VV[7]);
	(void)((*(LnkLI213))(car((V137))));
	princ_str(")->c.c_cdr = ",VV[7]);
	(void)((*(LnkLI213))(cadr((V137))));
	princ_char(59,VV[7]);
	(void)((VFUN_NARGS=1,(*(LnkLI214))(car((V137)))));
	{object V138 = (*(LnkLI233))();
	bds_unwind1;
	bds_unwind1;
	VMR12(V138)}
}
/*	local entry for function C1MEMQ	*/

static object LI13(V140)

register object V140;
{	 VMB13 VMS13 VMV13
TTL:;
	{object V141;
	V141= (VFUN_NARGS=0,(*(LnkLI208))());
	if(endp((V140))){
	goto T492;}
	if(!(endp(cdr((V140))))){
	goto T491;}
T492:;
	V142 = make_fixnum(length((V140)));
	(void)((*(LnkLI209))(VV[46],small_fixnum(2),V142));
T491:;
	if(endp(cddr((V140)))){
	goto T496;}
	V143 = make_fixnum(length((V140)));
	(void)((*(LnkLI210))(VV[46],small_fixnum(2),V143));
T496:;
	V144= list(2,car((V140)),cadr((V140)));
	{object V145 = list(4,VV[47],(V141),VV[48],(*(LnkLI219))(/* INLINE-ARGS */V144,(V141)));
	VMR13(V145)}}
}
/*	local entry for function C1MEMBER	*/

static object LI14(V147)

register object V147;
{	 VMB14 VMS14 VMV14
TTL:;
	{register object V148;
	V148= (VFUN_NARGS=0,(*(LnkLI208))());
	if(endp((V147))){
	goto T501;}
	if(!(endp(cdr((V147))))){
	goto T500;}
T501:;
	V149 = make_fixnum(length((V147)));
	(void)((*(LnkLI209))(VV[49],small_fixnum(2),V149));
T500:;
	if(!(endp(cddr((V147))))){
	goto T506;}
	{object V150 = list(4,VV[47],(V148),VV[50],(*(LnkLI219))((V147),(V148)));
	VMR14(V150)}
T506:;
	if(!((caddr((V147)))==(VV[51]))){
	goto T509;}
	if(!((length((V147)))==(4))){
	goto T509;}
	{register object x= cadddr((V147)),V151= VV[52];
	while(!endp(V151))
	if(equal(x,V151->c.c_car)){
	goto T514;
	}else V151=V151->c.c_cdr;
	goto T509;}
T514:;
	V152= cadr(cadddr((V147)));
	V153= list(2,car((V147)),cadr((V147)));
	{object V154 = list(4,VV[47],(V148),/* INLINE-ARGS */V152,(*(LnkLI219))(/* INLINE-ARGS */V153,(V148)));
	VMR14(V154)}
T509:;
	{object V155 = list(4,VV[4],(V148),VV[49],(*(LnkLI219))((V147),(V148)));
	VMR14(V155)}}
}
/*	local entry for function C2MEMBER!2	*/

static object LI15(V158,V159)

object V158;register object V159;
{	 VMB15 VMS15 VMV15
	bds_check;
TTL:;
	{register object V160;
	bds_bind(VV[20],symbol_value(VV[20]));
	bds_bind(VV[42],small_fixnum(0));
	setq(VV[22],number_plus(symbol_value(VV[22]),small_fixnum(1)));
	V160= symbol_value(VV[22]);
	V159= (VFUN_NARGS=2,(*(LnkLI232))((V159),VV[53]));
	princ_str("\n	{register object x= ",VV[7]);
	(void)((*(LnkLI213))(car((V159))));
	princ_str(",V",VV[7]);
	(void)((*(LnkLI213))((V160)));
	princ_str("= ",VV[7]);
	(void)((*(LnkLI213))(cadr((V159))));
	princ_char(59,VV[7]);
	if((symbol_value(VV[25]))==Cnil){
	goto T529;}
	princ_str("\n	while(!endp(V",VV[7]);
	(void)((*(LnkLI213))((V160)));
	princ_str("))",VV[7]);
	goto T527;
T529:;
	princ_str("\n	while(V",VV[7]);
	(void)((*(LnkLI213))((V160)));
	princ_str("!=Cnil)",VV[7]);
T527:;
	if(!(((V158))==(VV[48]))){
	goto T539;}
	princ_str("\n	if(x==(V",VV[7]);
	(void)((*(LnkLI213))((V160)));
	princ_str("->c.c_car)){",VV[7]);
	goto T537;
T539:;
	princ_str("\n	if(",VV[7]);
	base[3]= symbol_name((V158));
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V161= vs_base[0];
	(void)((*(LnkLI213))(V161));
	princ_str("(x,V",VV[7]);
	(void)((*(LnkLI213))((V160)));
	princ_str("->c.c_car)){",VV[7]);
T537:;
	if(!(type_of(symbol_value(VV[5]))==t_cons)){
	goto T553;}
	if((car(symbol_value(VV[5])))==(VV[54])){
	goto T552;}
	if(!((car(symbol_value(VV[5])))==(VV[55]))){
	goto T553;}
T552:;
	(void)((VFUN_NARGS=2,(*(LnkLI214))(Ct,VV[56])));
	goto T551;
T553:;
	V162= list(2,VV[21],(V160));
	(void)((VFUN_NARGS=2,(*(LnkLI214))(/* INLINE-ARGS */V162,VV[56])));
T551:;
	princ_str("\n	}else V",VV[7]);
	(void)((*(LnkLI213))((V160)));
	princ_str("=V",VV[7]);
	(void)((*(LnkLI213))((V160)));
	princ_str("->c.c_cdr;",VV[7]);
	(void)((VFUN_NARGS=1,(*(LnkLI214))(Cnil)));
	princ_char(125,VV[7]);
	{object V163 = (*(LnkLI233))();
	bds_unwind1;
	bds_unwind1;
	VMR15(V163)}}
}
/*	local entry for function C1ASSOC	*/

static object LI16(V165)

register object V165;
{	 VMB16 VMS16 VMV16
TTL:;
	{register object V166;
	V166= (VFUN_NARGS=0,(*(LnkLI208))());
	if(endp((V165))){
	goto T570;}
	if(!(endp(cdr((V165))))){
	goto T569;}
T570:;
	V167 = make_fixnum(length((V165)));
	(void)((*(LnkLI209))(VV[57],small_fixnum(2),V167));
T569:;
	if(!(endp(cddr((V165))))){
	goto T575;}
	{object V168 = list(4,VV[58],(V166),VV[50],(*(LnkLI219))((V165),(V166)));
	VMR16(V168)}
T575:;
	if(!((caddr((V165)))==(VV[51]))){
	goto T578;}
	if(!((length((V165)))==(4))){
	goto T578;}
	{register object x= cadddr((V165)),V169= VV[59];
	while(!endp(V169))
	if(equal(x,V169->c.c_car)){
	goto T583;
	}else V169=V169->c.c_cdr;
	goto T578;}
T583:;
	V170= cadr(cadddr((V165)));
	V171= list(2,car((V165)),cadr((V165)));
	{object V172 = list(4,VV[58],(V166),/* INLINE-ARGS */V170,(*(LnkLI219))(/* INLINE-ARGS */V171,(V166)));
	VMR16(V172)}
T578:;
	{object V173 = list(4,VV[4],(V166),VV[57],(*(LnkLI219))((V165),(V166)));
	VMR16(V173)}}
}
/*	local entry for function C2ASSOC!2	*/

static object LI17(V176,V177)

object V176;register object V177;
{	 VMB17 VMS17 VMV17
	bds_check;
TTL:;
	{register object V178;
	register object V179;
	bds_bind(VV[20],symbol_value(VV[20]));
	bds_bind(VV[42],small_fixnum(0));
	setq(VV[22],number_plus(symbol_value(VV[22]),small_fixnum(1)));
	V178= symbol_value(VV[22]);
	V179= Cnil;
	V177= (VFUN_NARGS=2,(*(LnkLI232))((V177),VV[60]));
	V179= symbol_name((V176));
	if(!(((V176))==(VV[48]))){
	goto T592;}
	goto T591;
T592:;
	base[3]= (V179);
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V179= vs_base[0];
T591:;
	princ_str("\n	{register object x= ",VV[7]);
	(void)((*(LnkLI213))(car((V177))));
	princ_str(",V",VV[7]);
	(void)((*(LnkLI213))((V178)));
	princ_str("= ",VV[7]);
	(void)((*(LnkLI213))(cadr((V177))));
	princ_char(59,VV[7]);
	if((symbol_value(VV[25]))==Cnil){
	goto T606;}
	princ_str("\n	while(!endp(V",VV[7]);
	(void)((*(LnkLI213))((V178)));
	princ_str("))",VV[7]);
	princ_str("\n	if(type_of(V",VV[7]);
	(void)((*(LnkLI213))((V178)));
	princ_str("->c.c_car)==t_cons &&",VV[7]);
	(void)((*(LnkLI213))((V179)));
	princ_str("(x,V",VV[7]);
	(void)((*(LnkLI213))((V178)));
	princ_str("->c.c_car->c.c_car)){",VV[7]);
	goto T604;
T606:;
	princ_str("\n	while(V",VV[7]);
	(void)((*(LnkLI213))((V178)));
	princ_str("!=Cnil)",VV[7]);
	princ_str("\n	if(",VV[7]);
	(void)((*(LnkLI213))((V179)));
	princ_str("(x,V",VV[7]);
	(void)((*(LnkLI213))((V178)));
	princ_str("->c.c_car->c.c_car) &&",VV[7]);
	princ_char(86,VV[7]);
	(void)((*(LnkLI213))((V178)));
	princ_str("->c.c_car != Cnil){",VV[7]);
T604:;
	if(!(type_of(symbol_value(VV[5]))==t_cons)){
	goto T633;}
	if((car(symbol_value(VV[5])))==(VV[54])){
	goto T632;}
	if(!((car(symbol_value(VV[5])))==(VV[55]))){
	goto T633;}
T632:;
	(void)((VFUN_NARGS=2,(*(LnkLI214))(Ct,VV[56])));
	goto T631;
T633:;
	V180= list(2,VV[61],(V178));
	(void)((VFUN_NARGS=2,(*(LnkLI214))(/* INLINE-ARGS */V180,VV[56])));
T631:;
	princ_str("\n	}else V",VV[7]);
	(void)((*(LnkLI213))((V178)));
	princ_str("=V",VV[7]);
	(void)((*(LnkLI213))((V178)));
	princ_str("->c.c_cdr;",VV[7]);
	(void)((VFUN_NARGS=1,(*(LnkLI214))(Cnil)));
	princ_char(125,VV[7]);
	{object V181 = (*(LnkLI233))();
	bds_unwind1;
	bds_unwind1;
	VMR17(V181)}}
}
/*	function definition for BOOLE3	*/

static L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{object V182;
	object V183;
	object V184;
	check_arg(3);
	V182=(base[0]);
	V183=(base[1]);
	V184=(base[2]);
	vs_top=sup;
TTL:;
	base[3]= (V182);
	base[4]= (V183);
	base[5]= (V184);
	vs_top=(vs_base=base+3)+3;
	Lboole();
	return;
	}
}
/*	local entry for function C1BOOLE-CONDITION	*/

static object LI19(V186)

object V186;
{	 VMB19 VMS19 VMV19
TTL:;
	if(((endp(cddr((V186)))?Ct:Cnil))==Cnil){
	goto T651;}
	{object V187 = Cnil;
	VMR19(V187)}
T651:;
	if(endp(cdddr((V186)))){
	goto T653;}
	{object V188 = Cnil;
	VMR19(V188)}
T653:;
	{object V189 = (*(LnkLI234))(car((V186)));
	VMR19(V189)}
}
/*	local entry for function C1BOOLE3	*/

static object LI20(V191)

object V191;
{	 VMB20 VMS20 VMV20
TTL:;
	V192= make_cons(VV[62],(V191));
	{object V193 = (*(LnkLI235))(/* INLINE-ARGS */V192);
	VMR20(V193)}
}
/*	function definition for INLINE-BOOLE3	*/

static L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{object V194;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V194=(base[0]);
	vs_top=sup;
	{object V195;
	V195= cadr(car((V194)));
	if(!((car((V195)))==(VV[63]))){
	goto T657;}
	goto T656;
T657:;
	base[1]= VV[64];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
T656:;
	{object V196;
	V196= (*(LnkLI234))(caddr((V195)));
	if((V196)!=Cnil){
	goto T661;}
	base[1]= VV[65];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
T661:;
	base[1]= (V196);
	base[2]= cdr((V194));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk236)();
	return;}}
	}
}
/*	local entry for function INLINE-BOOLE3-STRING	*/

static object LI22(V198)

register object V198;
{	 VMB22 VMS22 VMV22
TTL:;
	base[0]= (V198);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T666;}
	goto T665;
T666:;
	base[0]= (V198);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V198= vs_base[0];
T665:;
	{object V199= (V198);
	if(!eql(V199,VV[66]))goto T671;
	{object V200 = VV[67];
	VMR22(V200)}
T671:;
	if(!eql(V199,VV[68]))goto T672;
	{object V201 = VV[69];
	VMR22(V201)}
T672:;
	if(!eql(V199,VV[70]))goto T673;
	{object V202 = VV[71];
	VMR22(V202)}
T673:;
	if(!eql(V199,VV[72]))goto T674;
	{object V203 = VV[73];
	VMR22(V203)}
T674:;
	if(!eql(V199,VV[74]))goto T675;
	{object V204 = VV[75];
	VMR22(V204)}
T675:;
	if(!eql(V199,VV[76]))goto T676;
	{object V205 = VV[77];
	VMR22(V205)}
T676:;
	if(!eql(V199,VV[78]))goto T677;
	{object V206 = VV[79];
	VMR22(V206)}
T677:;
	if(!eql(V199,VV[80]))goto T678;
	{object V207 = VV[81];
	VMR22(V207)}
T678:;
	if(!eql(V199,VV[82]))goto T679;
	{object V208 = VV[83];
	VMR22(V208)}
T679:;
	if(!eql(V199,VV[84]))goto T680;
	{object V209 = VV[85];
	VMR22(V209)}
T680:;
	{object V210 = Cnil;
	VMR22(V210)}}
}
/*	local entry for function C1ASH-CONDITION	*/

static object LI23(V212)

object V212;
{	 VMB23 VMS23 VMV23
TTL:;
	{register object V213;
	V213= cadr((V212));{object V214;
	{register object V215;
	V215= (V213);
	if(type_of((V215))==t_fixnum){
	goto T684;}
	V214= Cnil;
	goto T683;
T684:;
	if((fix((V215)))>=(-31)){
	goto T686;}
	V214= Cnil;
	goto T683;
T686:;
	V214= ((fix((V215)))<=(31)?Ct:Cnil);}
T683:;
	if(V214==Cnil)goto T682;
	{object V216 = V214;
	VMR23(V216)}
T682:;}
	if(type_of((V213))==t_cons){
	goto T688;}
	{object V217 = Cnil;
	VMR23(V217)}
T688:;
	if((car((V213)))==(VV[86])){
	goto T690;}
	{object V218 = Cnil;
	VMR23(V218)}
T690:;
	{object V219;
	V219= cadr((V213));
	base[0]= (V219);
	base[1]= VV[87];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	{object V220 = vs_base[0];
	VMR23(V220)}}}
}
/*	local entry for function C1ASH	*/

static object LI24(V222)

object V222;
{	 VMB24 VMS24 VMV24
TTL:;
	{register object V223;
	register object V224;
	V223= cadr((V222));
	V224= Cnil;
	base[0]= (V223);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T698;}
	base[0]= (V223);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V223= vs_base[0];{object V225;
	base[0]= (V223);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk238)();
	vs_top=sup;
	V225= vs_base[0];
	if(V225==Cnil)goto T705;
	goto T704;
T705:;}
	base[0]= VV[88];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T704:;
	if(!(number_compare((V223),small_fixnum(0))<0)){
	goto T710;}
	V224= VV[89];
	goto T696;
T710:;
	if(!(number_compare((V223),small_fixnum(0))>=0)){
	goto T696;}
	V224= VV[90];
	goto T696;
T698:;
	{object V226;
	V226= cadr((V223));
	base[0]= (V226);
	base[1]= VV[91];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T718;}
	V224= VV[90];
	goto T696;
T718:;
	base[0]= (V226);
	base[1]= VV[92];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T724;}
	V224= VV[89];
	goto T696;
T724:;
	base[0]= VV[93];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;}
T696:;
	V227= make_cons((V224),(V222));
	{object V228 = (*(LnkLI235))(/* INLINE-ARGS */V227);
	VMR24(V228)}}
}
/*	local entry for function SHIFT>>	*/

static object LI25(V231,V232)

object V231;object V232;
{	 VMB25 VMS25 VMV25
TTL:;
	base[0]= (V231);
	base[1]= (V232);
	vs_top=(vs_base=base+0)+2;
	Lash();
	vs_top=sup;
	{object V233 = vs_base[0];
	VMR25(V233)}
}
/*	local entry for function SHIFT<<	*/

static object LI26(V236,V237)

object V236;object V237;
{	 VMB26 VMS26 VMV26
TTL:;
	base[0]= (V236);
	base[1]= (V237);
	vs_top=(vs_base=base+0)+2;
	Lash();
	vs_top=sup;
	{object V238 = vs_base[0];
	VMR26(V238)}
}
/*	function definition for CO1LDB	*/

static L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	{object V239;
	object V240;
	check_arg(2);
	V239=(base[0]);
	V240=(base[1]);
	vs_top=sup;
TTL:;
	{register object V241;
	object V242;
	V241= Cnil;
	base[3]= VV[94];
	vs_top=(vs_base=base+3)+1;
	Linteger_length();
	vs_top=sup;
	V242= vs_base[0];
	{register object V243;
	{object V244;
	V241= car((V240));
	if(type_of((V241))==t_cons){
	goto T740;}
	V244= Cnil;
	goto T739;
T740:;
	if((VV[95])==(car((V241)))){
	goto T743;}
	V244= Cnil;
	goto T739;
T743:;
	V244= make_cons(cadr((V241)),caddr((V241)));
T739:;
	if(((V244))==Cnil){
	goto T746;}
	V243= (V244);
	goto T738;
T746:;
	V243= Cnil;}
T738:;
	{object V245= cdr((V243));
	if(!(type_of(V245)==t_fixnum||type_of(V245)==t_bignum)){
	goto T749;}}
	{object V246= car((V243));
	if(!(type_of(V246)==t_fixnum||type_of(V246)==t_bignum)){
	goto T749;}}
	V247= number_plus(car((V243)),cdr((V243)));
	if(!(number_compare(/* INLINE-ARGS */V247,(V242))<0)){
	goto T749;}
	base[3]= (*(LnkLI239))(cadr((V240)));
	base[4]= VV[96];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T749;}
	V248= list(3,VV[86],VV[96],list(4,VV[97],car((V243)),cdr((V243)),cadr((V240))));
	base[3]= (*(LnkLI235))(/* INLINE-ARGS */V248);
	vs_top=(vs_base=base+3)+1;
	return;
T749:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}}
	}
}
/*	local entry for function C1LENGTH	*/

static object LI28(V250)

register object V250;
{	 VMB28 VMS28 VMV28
TTL:;
	{register object V251;
	V251= (VFUN_NARGS=0,(*(LnkLI208))());
	(void)(structure_set((V251),VV[98],2,VV[96]));
	{object V252;
	if(type_of(car((V250)))==t_cons){
	goto T762;}
	V252= Cnil;
	goto T761;
T762:;
	if((caar((V250)))==(VV[99])){
	goto T764;}
	V252= Cnil;
	goto T761;
T764:;
	{object V253;
	V253= cdr(car((V250)));
	if((V253)==Cnil){
	V252= Cnil;
	goto T761;}
	if((cddr((V253)))==Cnil){
	goto T767;}
	V252= Cnil;
	goto T761;
T767:;
	V252= list(4,VV[4],(V251),VV[100],(*(LnkLI219))((V253),(V251)));}
T761:;
	if(((V252))==Cnil){
	goto T770;}
	{object V254 = (V252);
	VMR28(V254)}
T770:;
	V250= (*(LnkLI219))((V250),(V251));
	{object V255 = list(4,VV[4],(V251),VV[101],(V250));
	VMR28(V255)}}}
}
/*	local entry for function C1GET	*/

static object LI29(V257)

register object V257;
{	 VMB29 VMS29 VMV29
TTL:;
	{object V258;
	V258= (VFUN_NARGS=0,(*(LnkLI208))());
	if(endp((V257))){
	goto T776;}
	if(!(endp(cdr((V257))))){
	goto T775;}
T776:;
	V259 = make_fixnum(length((V257)));
	(void)((*(LnkLI209))(VV[102],small_fixnum(2),V259));
T775:;
	if(endp(cddr((V257)))){
	goto T780;}
	if(endp(cdddr((V257)))){
	goto T780;}
	V260 = make_fixnum(length((V257)));
	(void)((*(LnkLI210))(VV[102],small_fixnum(3),V260));
T780:;
	{object V261 = list(3,VV[102],(V258),(*(LnkLI219))((V257),(V258)));
	VMR29(V261)}}
}
/*	local entry for function C2GET	*/

static object LI30(V263)

register object V263;
{	 VMB30 VMS30 VMV30
	bds_check;
TTL:;
	if((symbol_value(VV[25]))==Cnil){
	goto T786;}
	{object V264 = (*(LnkLI215))(VV[102],(V263),Cnil,Ct);
	VMR30(V264)}
T786:;
	{register object V265;
	base[0]= symbol_value(VV[20]);
	setq(VV[22],number_plus(symbol_value(VV[22]),small_fixnum(1)));
	V265= symbol_value(VV[22]);
	bds_bind(VV[20],base[0]);
	bds_bind(VV[42],small_fixnum(0));
	if((cddr((V263)))==Cnil){
	goto T795;}
	V266= VV[103];
	goto T793;
T795:;
	V266= VV[104];
T793:;
	V263= (VFUN_NARGS=2,(*(LnkLI232))((V263),V266));
	princ_str("\n	{object V",VV[7]);
	(void)((*(LnkLI213))((V265)));
	princ_str(" =(",VV[7]);
	(void)((*(LnkLI213))(car((V263))));
	princ_str(")->s.s_plist;",VV[7]);
	princ_str("\n	 object ind= ",VV[7]);
	(void)((*(LnkLI213))(cadr((V263))));
	princ_char(59,VV[7]);
	princ_str("\n	while(V",VV[7]);
	(void)((*(LnkLI213))((V265)));
	princ_str("!=Cnil){",VV[7]);
	princ_str("\n	if(V",VV[7]);
	(void)((*(LnkLI213))((V265)));
	princ_str("->c.c_car==ind){",VV[7]);
	V267= list(2,VV[105],(V265));
	(void)((VFUN_NARGS=2,(*(LnkLI214))(/* INLINE-ARGS */V267,VV[56])));
	princ_str("\n	}else V",VV[7]);
	(void)((*(LnkLI213))((V265)));
	princ_str("=V",VV[7]);
	(void)((*(LnkLI213))((V265)));
	princ_str("->c.c_cdr->c.c_cdr;}",VV[7]);
	if((cddr((V263)))==Cnil){
	goto T825;}
	V268= caddr((V263));
	goto T823;
T825:;
	V268= Cnil;
T823:;
	(void)((VFUN_NARGS=1,(*(LnkLI214))(V268)));
	princ_char(125,VV[7]);
	{object V269 = (*(LnkLI233))();
	bds_unwind1;
	bds_unwind1;
	VMR30(V269)}}
}
/*	local entry for function CO1EQL	*/

static object LI31(V272,V273)

object V272;register object V273;
{	 VMB31 VMS31 VMV31
TTL:;{object V274;
	if((cdr((V273)))!=Cnil){
	goto T833;}
	V274= Cnil;
	goto T832;
T833:;
	V274= ((symbol_value(VV[25]))==Cnil?Ct:Cnil);
T832:;
	if(V274==Cnil)goto T831;
	goto T830;
T831:;}
	{object V275 = Cnil;
	VMR31(V275)}
T830:;
	if(((*(LnkLI240))((V273)))==Cnil){
	goto T836;}
	if(!(type_of(cadr((V273)))==t_character)){
	goto T838;}
	V273= reverse((V273));
T838:;
	if(!(type_of(car((V273)))==t_character)){
	goto T843;}
	{register object V276;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V276= vs_base[0];
	V277= list(2,(V276),cadr((V273)));
	V278= make_cons(/* INLINE-ARGS */V277,Cnil);
	V279= (*(LnkLI239))(cadr((V273)));
	V280= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V279,(V276)));
	V281= list(3,VV[109],(V276),VV[110]);
	V282= list(2,VV[112],car((V273)));
	V283= list(4,VV[29],/* INLINE-ARGS */V278,/* INLINE-ARGS */V280,list(3,VV[108],/* INLINE-ARGS */V281,list(3,VV[111],/* INLINE-ARGS */V282,list(3,VV[86],VV[96],list(2,VV[112],list(3,VV[86],VV[14],(V276)))))));
	{object V284 = (*(LnkLI235))(/* INLINE-ARGS */V283);
	VMR31(V284)}}
T843:;
	{object V285 = Cnil;
	VMR31(V285)}
T836:;
	{object V286 = Cnil;
	VMR31(V286)}
}
/*	local entry for function RESULT-TYPE	*/

static object LI32(V288)

register object V288;
{	 VMB32 VMS32 VMV32
TTL:;
	if(!(type_of((V288))==t_symbol)){
	goto T847;}
	{object V289;
	V289= (*(LnkLI235))((V288));
	{object V290 = structure_ref(cadr((V289)),VV[98],2);
	VMR32(V290)}}
T847:;
	base[0]= (V288);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T851;}
	base[0]= (V288);
	vs_top=(vs_base=base+0)+1;
	Ltype_of();
	vs_top=sup;
	V291= vs_base[0];
	{object V292 = (*(LnkLI241))(V291);
	VMR32(V292)}
T851:;
	if(!(type_of((V288))==t_cons)){
	goto T857;}
	if(!((car((V288)))==(VV[86]))){
	goto T857;}
	{object V293 = (*(LnkLI241))(cadr((V288)));
	VMR32(V293)}
T857:;
	{object V294 = Ct;
	VMR32(V294)}
}
/*	local entry for function CO1TYPEP	*/

static object LI33(V297,V298)

object V297;register object V298;
{	 VMB33 VMS33 VMV33
TTL:;
	{register object V299;
	V299= Cnil;
	{register object V300;
	register object V301;
	register object V302;
	V300= car((V298));
	V301= Cnil;
	if(type_of(cadr((V298)))==t_cons){
	goto T866;}
	V302= Cnil;
	goto T865;
T866:;
	if((car(cadr((V298))))==(VV[113])){
	goto T868;}
	V302= Cnil;
	goto T865;
T868:;
	V302= cadr(cadr((V298)));
T865:;
	base[2]= (*(LnkLI239))(car((V298)));
	base[3]= (V302);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T870;}
	V301= Ct;
	{object V303 = (*(LnkLI235))((V301));
	VMR33(V303)}
T870:;
	if(((V302))!=Cnil){
	goto T880;}
	V301= Cnil;
	goto T878;
T880:;
	{register object x= (V302),V304= symbol_value(VV[114]);
	while(!endp(V304))
	if(type_of(V304->c.c_car)==t_cons &&equal(x,V304->c.c_car->c.c_car)){
	V297= (V304->c.c_car);
	goto T885;
	}else V304=V304->c.c_cdr;
	V297= Cnil;}
T885:;
	if(((V297))==Cnil){
	goto T883;}
	V301= list(2,cdr((V297)),(V300));
	goto T878;
T883:;
	if(!(type_of((V302))==t_cons)){
	goto T887;}
	if(!((car((V302)))==(VV[115]))){
	goto T890;}
	if((cddr((V302)))==Cnil){
	goto T886;}
T890:;
	{register object x= car((V302)),V305= VV[116];
	while(!endp(V305))
	if(eql(x,V305->c.c_car)){
	goto T895;
	}else V305=V305->c.c_cdr;
	goto T887;}
T895:;
	if(!(equal(caddr((V302)),VV[117]))){
	goto T887;}
T886:;
	V299= (*(LnkLI242))(cadr((V302)));
	if(!(((V299))==(VV[118]))){
	goto T900;}
	V301= list(2,VV[119],(V300));
	goto T878;
T900:;
	if(!(((V299))==(VV[120]))){
	goto T903;}
	V301= list(2,VV[121],(V300));
	goto T878;
T903:;
	V299= (VFUN_NARGS=2,(*(LnkLI243))((V299),symbol_value(VV[122])));
	if(((V299))==Cnil){
	goto T906;}
	V301= list(3,VV[86],VV[123],list(3,VV[124],(V300),(V299)));
	goto T878;
T906:;
	V301= Cnil;
	goto T878;
T887:;
	{object V306;
	if(type_of((V302))==t_cons){
	goto T910;}
	V306= Cnil;
	goto T909;
T910:;
	if((car((V302)))==(VV[125])){
	goto T912;}
	V306= Cnil;
	goto T909;
T912:;
	if(type_of(cdr((V302)))==t_cons){
	goto T914;}
	V306= Cnil;
	goto T909;
T914:;
	if((cadr((V302)))!=Cnil){
	goto T916;}
	V306= Cnil;
	goto T909;
T916:;
	if(type_of(cadr((V302)))==t_symbol){
	goto T918;}
	V306= Cnil;
	goto T909;
T918:;
	base[2]= cadr((V302));
	vs_top=(vs_base=base+2)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T920;}
	V306= Cnil;
	goto T909;
T920:;
	if((cddr((V302)))==Cnil){
	goto T923;}
	V306= Cnil;
	goto T909;
T923:;
	V306= list(2,cadr((V302)),(V300));
T909:;
	if(((V306))==Cnil){
	goto T926;}
	V301= (V306);
	goto T878;
T926:;
	base[2]= (V302);
	base[3]= VV[96];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T929;}
	V299= (*(LnkLI244))((V302));
	if(type_of((V299))==t_cons){
	goto T935;}
	V301= Cnil;
	goto T878;
T935:;
	base[2]= cadr((V299));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk238)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T937;}
	V301= Cnil;
	goto T878;
T937:;
	base[2]= caddr((V299));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk238)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T940;}
	V301= Cnil;
	goto T878;
T940:;
	V307= list(2,VV[126],(V300));
	V308= make_cons(/* INLINE-ARGS */V307,Cnil);
	V309= (*(LnkLI239))((V300));
	V310= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V309,VV[126]));
	V311= list(3,VV[128],VV[129],cadr((V299)));
	V301= list(4,VV[29],/* INLINE-ARGS */V308,/* INLINE-ARGS */V310,list(4,VV[108],VV[127],/* INLINE-ARGS */V311,list(3,VV[130],VV[131],caddr((V299)))));
	goto T878;
T929:;
	if(!(type_of((V302))==t_symbol)){
	goto T944;}
	V299= get((V302),VV[132],Cnil);
	if(((V299))==Cnil){
	goto T944;}
	if((structure_ref((V299),VV[132],11))!=Cnil){
	goto T949;}
	if((symbol_value(VV[133]))==Cnil){
	goto T950;}
T949:;
	V301= (*(LnkLI245))((V300),(V299));
	goto T878;
T950:;
	V301= list(3,VV[134],(V300),list(2,VV[113],(V302)));
	goto T878;
T944:;
	V301= Cnil;}
T878:;
	if((V301)==Cnil){
	{object V312 = Cnil;
	VMR33(V312)}}
	V313= list(3,VV[86],VV[123],(V301));
	{object V314 = (*(LnkLI235))(/* INLINE-ARGS */V313);
	VMR33(V314)}}}
}
/*	local entry for function STRUCT-TYPE-OPT	*/

static object LI34(V317,V318)

object V317;object V318;
{	 VMB34 VMS34 VMV34
TTL:;
	{register object V319;
	object V320;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V319= vs_base[0];
	V321= structure_ref((V318),VV[132],0);
	V320= (*(LnkLI246))(/* INLINE-ARGS */V321);
	V322= list(2,(V319),(V317));
	V323= make_cons(/* INLINE-ARGS */V322,Cnil);
	V324= list(2,VV[135],(V319));
	if(!((length((V320)))<(3))){
	goto T958;}
	{object V327;
	object V328= (V320);
	if(endp(V328)){
	V326= Cnil;
	goto T960;}
	base[0]=V327=MMcons(Cnil,Cnil);
T961:;
	V330= list(2,VV[137],(V319));
	(V327->c.c_car)= list(3,VV[48],/* INLINE-ARGS */V330,(*(LnkLI247))((V328->c.c_car)));
	if(endp(V328=MMcdr(V328))){
	V326= base[0];
	goto T960;}
	V327=MMcdr(V327)=MMcons(Cnil,Cnil);
	goto T961;}
T960:;
	V325= make_cons(VV[136],V326);
	goto T956;
T958:;
	V331= structure_ref((V318),VV[132],0);
	V325= list(3,VV[134],(V319),(*(LnkLI247))(/* INLINE-ARGS */V331));
T956:;
	{object V332 = list(3,VV[29],/* INLINE-ARGS */V323,list(3,VV[108],/* INLINE-ARGS */V324,V325));
	VMR34(V332)}}
}
/*	local entry for function GET-INCLUDED	*/

static object LI35(V334)

object V334;
{	 VMB35 VMS35 VMV35
TTL:;
	{object V335;
	V335= get((V334),VV[132],Cnil);
	V336= structure_ref((V335),VV[132],0);
	V340= structure_ref((V335),VV[132],3);
	{object V338;
	object V339= /* INLINE-ARGS */V340;
	if(endp(V339)){
	V337= Cnil;
	goto T964;}
	base[0]=V338=MMcons(Cnil,Cnil);
T965:;
	(V338->c.c_cdr)= (*(LnkLI246))((V339->c.c_car));
	while(!endp(MMcdr(V338)))V338=MMcdr(V338);
	if(endp(V339=MMcdr(V339))){
	base[0]=base[0]->c.c_cdr;
	V337= base[0];
	goto T964;}
	goto T965;}
T964:;
	{object V341 = make_cons(/* INLINE-ARGS */V336,V337);
	VMR35(V341)}}
}
/*	local entry for function CO1SCHAR	*/

static object LI36(V344,V345)

object V344;register object V345;
{	 VMB36 VMS36 VMV36
TTL:;
	{object V346= car((V345));
	if(type_of(V346)==t_cons||(V346)==Cnil){
	goto T968;}}
	{object V347 = Cnil;
	VMR36(V347)}
T968:;
	if((symbol_value(VV[25]))==Cnil){
	goto T970;}
	{object V348 = Cnil;
	VMR36(V348)}
T970:;
	if((cdr((V345)))!=Cnil){
	goto T972;}
	{object V349 = Cnil;
	VMR36(V349)}
T972:;
	if((caar((V345)))==(VV[99])){
	goto T974;}
	{object V350 = Cnil;
	VMR36(V350)}
T974:;
	V351= list(3,VV[138],list(3,VV[86],VV[15],cadr(car((V345)))),cadr((V345)));
	{object V352 = (*(LnkLI235))(/* INLINE-ARGS */V351);
	VMR36(V352)}
}
/*	local entry for function CONS-TO-LISTA	*/

static object LI37(V354)

object V354;
{	 VMB37 VMS37 VMV37
TTL:;
	{register object V355;
	base[0]= (V354);
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V355= vs_base[0];
	{object V356;
	if(type_of((V355))==t_cons){
	goto T979;}
	V356= Cnil;
	goto T978;
T979:;
	if(type_of(car((V355)))==t_cons){
	goto T981;}
	V356= Cnil;
	goto T978;
T981:;
	if((caar((V355)))==(VV[139])){
	goto T983;}
	V356= Cnil;
	goto T978;
T983:;
	if((length(cdar((V355))))==(2)){
	goto T985;}
	V356= Cnil;
	goto T978;
T985:;
	base[0]= (V354);
	vs_top=(vs_base=base+0)+1;
	Lbutlast();
	vs_top=sup;
	V357= vs_base[0];
	V358= append(V357,cdar((V355)));
	V356= (*(LnkLI248))(/* INLINE-ARGS */V358);
T978:;
	if(((V356))==Cnil){
	goto T990;}
	{object V359 = (V356);
	VMR37(V359)}
T990:;
	{object V360 = (V354);
	VMR37(V360)}}}
}
/*	local entry for function CO1CONS	*/

static object LI38(V363,V364)

object V363;object V364;
{	 VMB38 VMS38 VMV38
TTL:;
	{register object V365;
	if((length((V364)))==(2)){
	goto T994;}
	V365= Cnil;
	goto T993;
T994:;
	V365= (*(LnkLI248))((V364));
T993:;
	if(((((V365))==((V364))?Ct:Cnil))==Cnil){
	goto T996;}
	{object V366 = Cnil;
	VMR38(V366)}
T996:;
	base[0]= (V365);
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V368= vs_base[0];
	if(!(equal(VV[140],V368))){
	goto T1000;}
	base[0]= (V365);
	vs_top=(vs_base=base+0)+1;
	Lbutlast();
	vs_top=sup;
	V369= vs_base[0];
	V367= make_cons(VV[141],V369);
	goto T998;
T1000:;
	V367= make_cons(VV[28],(V365));
T998:;
	{object V370 = (*(LnkLI235))(V367);
	VMR38(V370)}}
}
/*	local entry for function C1NTH-CONDITION	*/

static object LI39(V372)

register object V372;
{	 VMB39 VMS39 VMV39
TTL:;
	if(((endp((V372))?Ct:Cnil))==Cnil){
	goto T1006;}
	{object V373 = Cnil;
	VMR39(V373)}
T1006:;
	if(((endp(cdr((V372)))?Ct:Cnil))==Cnil){
	goto T1008;}
	{object V374 = Cnil;
	VMR39(V374)}
T1008:;
	if(endp(cddr((V372)))){
	goto T1010;}
	{object V375 = Cnil;
	VMR39(V375)}
T1010:;
	{object V376= car((V372));
	if(type_of(V376)==t_fixnum||
type_of(V376)==t_bignum||
type_of(V376)==t_ratio||
type_of(V376)==t_shortfloat||
type_of(V376)==t_longfloat||
type_of(V376)==t_complex){
	goto T1012;}}
	{object V377 = Cnil;
	VMR39(V377)}
T1012:;
	base[0]= small_fixnum(0);
	base[1]= car((V372));
	base[2]= small_fixnum(7);
	vs_top=(vs_base=base+0)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	{object V378 = vs_base[0];
	VMR39(V378)}
}
/*	local entry for function C1NTH	*/

static object LI40(V380)

register object V380;
{	 VMB40 VMS40 VMV40
TTL:;
	{object V382= car((V380));
	if(!eql(V382,VV[142]))goto T1018;
	V381= make_cons(VV[61],cdr((V380)));
	goto T1017;
T1018:;
	if(!eql(V382,VV[80]))goto T1019;
	V381= make_cons(VV[105],cdr((V380)));
	goto T1017;
T1019:;
	if(!eql(V382,VV[68]))goto T1020;
	V381= make_cons(VV[143],cdr((V380)));
	goto T1017;
T1020:;
	if(!eql(V382,VV[144]))goto T1021;
	V381= make_cons(VV[145],cdr((V380)));
	goto T1017;
T1021:;
	if(!eql(V382,VV[66]))goto T1022;
	V381= list(2,VV[61],make_cons(VV[146],cdr((V380))));
	goto T1017;
T1022:;
	if(!eql(V382,VV[147]))goto T1023;
	V381= list(2,VV[105],make_cons(VV[146],cdr((V380))));
	goto T1017;
T1023:;
	if(!eql(V382,VV[82]))goto T1024;
	V381= list(2,VV[143],make_cons(VV[146],cdr((V380))));
	goto T1017;
T1024:;
	if(!eql(V382,VV[84]))goto T1025;
	V381= list(2,VV[145],make_cons(VV[146],cdr((V380))));
	goto T1017;
T1025:;
	V381= Cnil;}
T1017:;
	{object V383 = (*(LnkLI235))(V381);
	VMR40(V383)}
}
/*	local entry for function C1NTHCDR-CONDITION	*/

static object LI41(V385)

register object V385;
{	 VMB41 VMS41 VMV41
TTL:;
	if(((endp((V385))?Ct:Cnil))==Cnil){
	goto T1026;}
	{object V386 = Cnil;
	VMR41(V386)}
T1026:;
	if(((endp(cdr((V385)))?Ct:Cnil))==Cnil){
	goto T1028;}
	{object V387 = Cnil;
	VMR41(V387)}
T1028:;
	if(endp(cddr((V385)))){
	goto T1030;}
	{object V388 = Cnil;
	VMR41(V388)}
T1030:;
	{object V389= car((V385));
	if(type_of(V389)==t_fixnum||
type_of(V389)==t_bignum||
type_of(V389)==t_ratio||
type_of(V389)==t_shortfloat||
type_of(V389)==t_longfloat||
type_of(V389)==t_complex){
	goto T1032;}}
	{object V390 = Cnil;
	VMR41(V390)}
T1032:;
	base[0]= small_fixnum(0);
	base[1]= car((V385));
	base[2]= small_fixnum(7);
	vs_top=(vs_base=base+0)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	{object V391 = vs_base[0];
	VMR41(V391)}
}
/*	local entry for function C1NTHCDR	*/

static object LI42(V393)

register object V393;
{	 VMB42 VMS42 VMV42
TTL:;
	{object V395= car((V393));
	if(!eql(V395,VV[142]))goto T1038;
	V394= cadr((V393));
	goto T1037;
T1038:;
	if(!eql(V395,VV[80]))goto T1039;
	V394= make_cons(VV[148],cdr((V393)));
	goto T1037;
T1039:;
	if(!eql(V395,VV[68]))goto T1040;
	V394= make_cons(VV[149],cdr((V393)));
	goto T1037;
T1040:;
	if(!eql(V395,VV[144]))goto T1041;
	V394= make_cons(VV[150],cdr((V393)));
	goto T1037;
T1041:;
	if(!eql(V395,VV[66]))goto T1042;
	V394= make_cons(VV[146],cdr((V393)));
	goto T1037;
T1042:;
	if(!eql(V395,VV[147]))goto T1043;
	V394= list(2,VV[148],make_cons(VV[146],cdr((V393))));
	goto T1037;
T1043:;
	if(!eql(V395,VV[82]))goto T1044;
	V394= list(2,VV[149],make_cons(VV[146],cdr((V393))));
	goto T1037;
T1044:;
	if(!eql(V395,VV[84]))goto T1045;
	V394= list(2,VV[150],make_cons(VV[146],cdr((V393))));
	goto T1037;
T1045:;
	V394= Cnil;}
T1037:;
	{object V396 = (*(LnkLI235))(V394);
	VMR42(V396)}
}
/*	local entry for function C1RPLACA-NTHCDR	*/

static object LI43(V398)

register object V398;
{	 VMB43 VMS43 VMV43
TTL:;
	{object V399;
	V399= (VFUN_NARGS=0,(*(LnkLI208))());
	if(endp((V398))){
	goto T1048;}
	if(endp(cdr((V398)))){
	goto T1048;}
	if(!(endp(cddr((V398))))){
	goto T1047;}
T1048:;
	V400 = make_fixnum(length((V398)));
	(void)((*(LnkLI209))(VV[151],small_fixnum(3),V400));
T1047:;
	if(endp(cdddr((V398)))){
	goto T1054;}
	V401 = make_fixnum(length((V398)));
	(void)((*(LnkLI209))(VV[151],small_fixnum(3),V401));
T1054:;
	{object V402= cadr((V398));
	if(!(type_of(V402)==t_fixnum||
type_of(V402)==t_bignum||
type_of(V402)==t_ratio||
type_of(V402)==t_shortfloat||
type_of(V402)==t_longfloat||
type_of(V402)==t_complex)){
	goto T1058;}}
	base[1]= small_fixnum(0);
	base[2]= cadr((V398));
	base[3]= small_fixnum(10);
	vs_top=(vs_base=base+1)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1058;}
	{register object V403;
	object V404;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V403= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V404= vs_base[0];
	V405= list(2,(V403),car((V398)));
	V406= list(2,/* INLINE-ARGS */V405,list(2,(V404),caddr((V398))));
	V407= list(3,VV[152],(V403),list(3,VV[153],cadr((V398)),(V403)));
	V408= list(5,VV[29],/* INLINE-ARGS */V406,/* INLINE-ARGS */V407,list(3,VV[152],list(2,VV[61],(V403)),(V404)),(V404));
	{object V409 = (*(LnkLI235))(/* INLINE-ARGS */V408);
	VMR43(V409)}}
T1058:;
	{object V410 = list(4,VV[4],(V399),VV[151],(*(LnkLI219))((V398),(V399)));
	VMR43(V410)}}
}
/*	local entry for function FAST-READ	*/

static object LI44(V413,V414)

register object V413;object V414;
{	 VMB44 VMS44 VMV44
TTL:;
	if((symbol_value(VV[25]))!=Cnil){
	goto T1068;}
	if(!(number_compare(symbol_value(VV[154]),small_fixnum(2))<0)){
	goto T1068;}
	if((cadr((V413)))!=Cnil){
	goto T1068;}
	base[0]= VV[155];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1068;}
	if(!(type_of(car((V413)))!=t_cons)){
	goto T1078;}{object V415;
	V415= car((V413));
	if(V415==Cnil)goto T1081;
	goto T1080;
T1081:;}
	V413= make_cons(VV[156],cdr((V413)));
T1080:;
	{register object V416;
	object V417;
	V416= car((V413));
	V417= caddr((V413));
	V418= list(2,VV[160],(V416));
	V419= list(3,VV[161],VV[162],list(2,VV[163],(V416)));
	V420= list(3,VV[50],VV[162],small_fixnum(-1));
	V421= list(2,list(3,VV[108],/* INLINE-ARGS */V420,list(2,VV[164],(V416))),(V417));
	if(!(((V414))==(VV[165]))){
	goto T1088;}
	V422= VV[166];
	goto T1086;
T1088:;
	V422= VV[162];
T1086:;
	V423= list(3,/* INLINE-ARGS */V418,/* INLINE-ARGS */V419,list(3,VV[159],/* INLINE-ARGS */V421,list(2,Ct,V422)));
	{object V424 = list(4,VV[29],VV[157],VV[158],list(3,VV[159],/* INLINE-ARGS */V423,list(2,Ct,list(3,(V414),(V416),(V417)))));
	VMR44(V424)}}
T1078:;
	V425= list(2,VV[167],car((V413)));
	V426= make_cons(/* INLINE-ARGS */V425,Cnil);
	V427= (*(LnkLI239))(car((V413)));
	V428= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V427,VV[167]));
	V429= make_cons(VV[167],cdr((V413)));
	{object V430 = list(4,VV[29],/* INLINE-ARGS */V426,/* INLINE-ARGS */V428,(*(LnkLI249))(/* INLINE-ARGS */V429,(V414)));
	VMR44(V430)}
T1068:;
	{object V431 = Cnil;
	VMR44(V431)}
}
/*	local entry for function CO1READ-BYTE	*/

static object LI45(V434,V435)

object V434;object V435;
{	 VMB45 VMS45 VMV45
	bds_check;
TTL:;
	{object V436;
	V436= Cnil;
	V436= (*(LnkLI249))((V435),VV[168]);
	if(((V436))==Cnil){
	goto T1093;}
	bds_bind(VV[154],small_fixnum(10));
	{object V437 = (*(LnkLI235))((V436));
	bds_unwind1;
	VMR45(V437)}
T1093:;
	{object V438 = Cnil;
	VMR45(V438)}}
}
/*	local entry for function CO1READ-CHAR	*/

static object LI46(V441,V442)

object V441;object V442;
{	 VMB46 VMS46 VMV46
	bds_check;
TTL:;
	{object V443;
	V443= Cnil;
	V443= (*(LnkLI249))((V442),VV[165]);
	if(((V443))==Cnil){
	goto T1099;}
	bds_bind(VV[154],small_fixnum(10));
	{object V444 = (*(LnkLI235))((V443));
	bds_unwind1;
	VMR46(V444)}
T1099:;
	{object V445 = Cnil;
	VMR46(V445)}}
}
/*	local entry for function CFAST-WRITE	*/

static object LI47(V448,V449)

object V448;object V449;
{	 VMB47 VMS47 VMV47
TTL:;
	if((symbol_value(VV[25]))!=Cnil){
	goto T1103;}
	if(!(number_compare(symbol_value(VV[154]),small_fixnum(2))<0)){
	goto T1103;}
	base[0]= VV[155];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1103;}
	{register object V450;
	V450= cadr((V448));
	if((V450)!=Cnil){
	goto T1111;}
	V450= VV[169];
T1111:;
	if(!(type_of((V450))!=t_cons)){
	goto T1114;}
	V451= list(2,VV[160],(V450));
	V452= list(2,/* INLINE-ARGS */V451,list(3,VV[86],VV[96],list(3,VV[170],VV[171],(V450))));
	{object V453 = list(3,VV[159],/* INLINE-ARGS */V452,list(2,Ct,list(3,(V449),VV[171],(V450))));
	VMR47(V453)}
T1114:;
	V454= list(2,VV[172],(V450));
	V455= make_cons(/* INLINE-ARGS */V454,Cnil);
	V456= (*(LnkLI239))((V450));
	V457= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V456,VV[172]));
	V458= list(2,VV[171],VV[172]);
	{object V459 = list(4,VV[29],/* INLINE-ARGS */V455,/* INLINE-ARGS */V457,(*(LnkLI250))(/* INLINE-ARGS */V458,(V449)));
	VMR47(V459)}}
T1103:;
	{object V460 = Cnil;
	VMR47(V460)}
}
/*	local entry for function CO1WRITE-BYTE	*/

static object LI48(V463,V464)

object V463;register object V464;
{	 VMB48 VMS48 VMV48
	bds_check;
TTL:;
	{object V465;
	V465= (*(LnkLI250))((V464),VV[173]);
	if(((V465))==Cnil){
	goto T1119;}
	bds_bind(VV[154],small_fixnum(10));
	V466= list(2,VV[171],car((V464)));
	V467= make_cons(/* INLINE-ARGS */V466,Cnil);
	if(!(type_of(car((V464)))!=t_cons)){
	goto T1123;}
	V468= car((V464));
	goto T1121;
T1123:;
	V468= VV[171];
T1121:;
	V469= list(5,VV[29],/* INLINE-ARGS */V467,VV[174],(V465),V468);
	{object V470 = (*(LnkLI235))(/* INLINE-ARGS */V469);
	bds_unwind1;
	VMR48(V470)}
T1119:;
	{object V471 = Cnil;
	VMR48(V471)}}
}
/*	local entry for function CO1WRITE-CHAR	*/

static object LI49(V474,V475)

object V474;register object V475;
{	 VMB49 VMS49 VMV49
	bds_check;
TTL:;
	{object V476;
	V476= (*(LnkLI250))((V475),VV[175]);
	if(((V476))==Cnil){
	goto T1128;}
	bds_bind(VV[154],small_fixnum(10));
	V477= list(2,VV[171],car((V475)));
	V478= make_cons(/* INLINE-ARGS */V477,Cnil);
	if(!(type_of(car((V475)))!=t_cons)){
	goto T1132;}
	V479= car((V475));
	goto T1130;
T1132:;
	V479= VV[171];
T1130:;
	V480= list(5,VV[29],/* INLINE-ARGS */V478,VV[176],(V476),V479);
	{object V481 = (*(LnkLI235))(/* INLINE-ARGS */V480);
	bds_unwind1;
	VMR49(V481)}
T1128:;
	{object V482 = Cnil;
	VMR49(V482)}}
}
/*	local entry for function AET-C-TYPE	*/

static object LI50(V484)

object V484;
{	 VMB50 VMS50 VMV50
TTL:;
	{object V485= (V484);
	if((V485!= Ct))goto T1134;
	{object V486 = VV[177];
	VMR50(V486)}
T1134:;
	if((V485!= VV[118])
	&& (V485!= VV[251]))goto T1135;
	{object V487 = VV[178];
	VMR50(V487)}
T1135:;
	if((V485!= VV[96]))goto T1136;
	{object V488 = VV[179];
	VMR50(V488)}
T1136:;
	if((V485!= VV[252]))goto T1137;
	{object V489 = VV[180];
	VMR50(V489)}
T1137:;
	if((V485!= VV[253]))goto T1138;
	{object V490 = VV[181];
	VMR50(V490)}
T1138:;
	if((V485!= VV[254]))goto T1139;
	{object V491 = VV[182];
	VMR50(V491)}
T1139:;
	if((V485!= VV[253]))goto T1140;
	{object V492 = VV[183];
	VMR50(V492)}
T1140:;
	if((V485!= VV[255]))goto T1141;
	{object V493 = VV[184];
	VMR50(V493)}
T1141:;
	if((V485!= VV[256]))goto T1142;
	{object V494 = VV[185];
	VMR50(V494)}
T1142:;
	FEerror("The ECASE key value ~s is illegal.",1,V485);}
}
/*	local entry for function CO1VECTOR-PUSH	*/

static object LI51(V497,V498)

object V497;register object V498;
{	 VMB51 VMS51 VMV51
	bds_check;
TTL:;
	if((symbol_value(VV[25]))!=Cnil){
	goto T1145;}
	if(number_compare(symbol_value(VV[154]),small_fixnum(3))>0){
	goto T1145;}
	if((cdr((V498)))==Cnil){
	goto T1145;}
	bds_bind(VV[154],small_fixnum(10));
	V499= list(2,VV[187],car((V498)));
	V500= listA(3,/* INLINE-ARGS */V499,list(2,VV[188],cadr((V498))),VV[189]);
	V501= (*(LnkLI239))(cadr((V498)));
	V502= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V501,VV[188]));
	V503= (*(LnkLI239))(car((V498)));
	V504= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V503,VV[187]));
	if(!(((V497))==(VV[192]))){
	goto T1153;}
	V505= listA(4,VV[192],VV[187],VV[188],cddr((V498)));
	goto T1151;
T1153:;
	V505= Cnil;
T1151:;
	V506= list(6,VV[186],/* INLINE-ARGS */V500,VV[190],/* INLINE-ARGS */V502,/* INLINE-ARGS */V504,list(3,VV[159],VV[191],list(2,Ct,V505)));
	{object V507 = (*(LnkLI235))(/* INLINE-ARGS */V506);
	bds_unwind1;
	VMR51(V507)}
T1145:;
	{object V508 = Cnil;
	VMR51(V508)}
}
/*	local entry for function CONSTANT-FOLD-P	*/

static object LI52(V510)

register object V510;
{	 VMB52 VMS52 VMV52
TTL:;
	base[0]= (V510);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1156;}
	{object V511 = Ct;
	VMR52(V511)}
T1156:;
	if(!(type_of((V510))!=t_cons)){
	goto T1160;}
	{object V512 = Cnil;
	VMR52(V512)}
T1160:;
	if(!((car((V510)))==(VV[86]))){
	goto T1163;}
	V510= caddr((V510));
	goto TTL;
T1163:;
	if(!(type_of(car((V510)))==t_symbol)){
	goto T1168;}
	V513= get(car((V510)),VV[193],Cnil);
	if(!((V513)==(VV[194]))){
	goto T1168;}
	{register object V514;
	register object V515;
	V514= cdr((V510));
	V515= car((V514));
T1177:;
	if(!(endp((V514)))){
	goto T1178;}
	goto T1173;
T1178:;{object V516;
	V516= (*(LnkLI257))((V515));
	if(V516==Cnil)goto T1183;
	goto T1182;
T1183:;}
	{object V517 = Cnil;
	VMR52(V517)}
T1182:;
	V514= cdr((V514));
	V515= car((V514));
	goto T1177;}
T1173:;
	{object V518 = Ct;
	VMR52(V518)}
T1168:;
	{object V519 = Cnil;
	VMR52(V519)}
}
/*	local entry for function CO1CONSTANT-FOLD	*/

static object LI53(V522,V523)

object V522;object V523;
{	 VMB53 VMS53 VMV53
TTL:;
	base[0]= (V522);
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1191;}
	{register object V524;
	register object V525;
	V524= (V523);
	V525= car((V524));
T1199:;
	if(!(endp((V524)))){
	goto T1200;}
	goto T1195;
T1200:;{object V526;
	V526= (*(LnkLI257))((V525));
	if(V526==Cnil)goto T1205;
	goto T1204;
T1205:;}
	{object V527 = Cnil;
	VMR53(V527)}
T1204:;
	V524= cdr((V524));
	V525= car((V524));
	goto T1199;}
T1195:;
	base[0]= make_cons((V522),(V523));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk258)();
	vs_top=sup;
	V528= vs_base[0];
	{object V529 = (*(LnkLI235))(V528);
	VMR53(V529)}
T1191:;
	{object V530 = Cnil;
	VMR53(V530)}
}
/*	local entry for function CO1SPECIAL-FIX-DECL	*/

static object LI54(V533,V534)

object V533;register object V534;
{	 VMB54 VMS54 VMV54
TTL:;
	{object V536= (V533);
	if((V536!= VV[260])
	&& (V536!= VV[261]))goto T1215;
	V537= car((V534));
	V538= cadr((V534));
	base[0]= cddr((V534));
	vs_top=(vs_base=base+0)+1;
	L55(base);
	vs_top=sup;
	V539= vs_base[0];
	V535= listA(4,(V533),/* INLINE-ARGS */V537,/* INLINE-ARGS */V538,V539);
	goto T1214;
T1215:;
	if((V536!= VV[262])
	&& (V536!= VV[263]))goto T1218;
	V540= car((V534));
	base[0]= cdr((V534));
	vs_top=(vs_base=base+0)+1;
	L55(base);
	vs_top=sup;
	V541= vs_base[0];
	V535= listA(3,(V533),/* INLINE-ARGS */V540,V541);
	goto T1214;
T1218:;
	V535= Cnil;}
T1214:;
	V542= (*(LnkLI259))(V535);
	{object V543 = (*(LnkLI235))(/* INLINE-ARGS */V542);
	VMR54(V543)}
}
/*	local entry for function CO1SUBLIS	*/

static object LI56(V546,V547)

object V546;register object V547;
{	 VMB55 VMS55 VMV55
TTL:;
	{register object V548;
	V548= Cnil;switch(length((V547))){
	case 2:
T1226:;
	V548= VV[50];
	if((VV[50])!=Cnil){
	goto T1223;}
	goto T1224;
	case 4:
T1227:;
	if((caddr((V547)))==(VV[51])){
	goto T1230;}
	goto T1224;
T1230:;
	{register object x= cadddr((V547)),V549= VV[195];
	while(!endp(V549))
	if(eql(x,V549->c.c_car)){
	goto T1234;
	}else V549=V549->c.c_cdr;
	goto T1233;}
T1234:;
	V548= VV[196];
	if((VV[196])!=Cnil){
	goto T1223;}
	goto T1224;
T1233:;
	{register object x= cadddr((V547)),V550= VV[197];
	while(!endp(V550))
	if(eql(x,V550->c.c_car)){
	goto T1238;
	}else V550=V550->c.c_cdr;
	goto T1237;}
T1238:;
	V548= VV[50];
	if((VV[50])!=Cnil){
	goto T1223;}
	goto T1224;
T1237:;
	{register object x= cadddr((V547)),V551= VV[198];
	while(!endp(V551))
	if(eql(x,V551->c.c_car)){
	goto T1242;
	}else V551=V551->c.c_cdr;
	goto T1241;}
T1242:;
	V548= VV[48];
	if((VV[48])!=Cnil){
	goto T1223;}
	goto T1224;
T1241:;
	goto T1224;
	default:
T1228:;
	goto T1224;}
T1224:;
	{object V552 = Cnil;
	VMR55(V552)}
T1223:;
	{object V553;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V553= vs_base[0];
	V554= list(2,(V553),car((V547)));
	V555= make_cons(/* INLINE-ARGS */V554,Cnil);
	V556= cadr((V547));
	V557= list(3,VV[29],/* INLINE-ARGS */V555,list(4,VV[199],(V553),/* INLINE-ARGS */V556,list(2,VV[113],(V548))));
	{object V558 = (*(LnkLI235))(/* INLINE-ARGS */V557);
	VMR55(V558)}}}
}
/*	local entry for function SUBLIS1-INLINE	*/

static object LI57(V562,V563,V564)

object V562;object V563;object V564;
{	 VMB56 VMS56 VMV56
TTL:;
	{object V565;
	V566= (VFUN_NARGS=4,(*(LnkLI264))(cadr((V564)),symbol_value(VV[200]),VV[201],VV[105]));
	V565= car(/* INLINE-ARGS */V566);{object V567;
	{register object x= (V565),V568= VV[202];
	while(!endp(V568))
	if(eql(x,V568->c.c_car)){
	V567= V568;
	goto T1248;
	}else V568=V568->c.c_cdr;
	V567= Cnil;}
T1248:;
	if(V567==Cnil)goto T1247;
	goto T1246;
T1247:;}
	base[0]= VV[203];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T1246:;
	princ_str("(check_alist(",VV[7]);
	(void)((*(LnkLI213))((V562)));
	princ_str("),sublis1(",VV[7]);
	(void)((*(LnkLI213))((V562)));
	princ_char(44,VV[7]);
	(void)((*(LnkLI213))((V563)));
	princ_char(44,VV[7]);
	base[0]= Cnil;
	base[1]= VV[204];
	base[2]= (V565);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V569= vs_base[0];
	(void)((*(LnkLI213))(V569));
	{object V570 = Cnil;
	VMR56(V570)}}
}
/*	local entry for function C1LIST-NTH	*/

static object LI58(V572)

register object V572;
{	 VMB57 VMS57 VMV57
TTL:;
	{register object V573;
	V573= (VFUN_NARGS=0,(*(LnkLI208))());
	if(endp((V572))){
	goto T1264;}
	if(!(endp(cdr((V572))))){
	goto T1263;}
T1264:;
	V574 = make_fixnum(length((V572)));
	(void)((*(LnkLI209))(VV[151],small_fixnum(2),V574));
T1263:;
	if(endp(cddr((V572)))){
	goto T1268;}
	V575 = make_fixnum(length((V572)));
	(void)((*(LnkLI209))(VV[151],small_fixnum(2),V575));
T1268:;
	{object V576= car((V572));
	if(!(type_of(V576)==t_fixnum||
type_of(V576)==t_bignum||
type_of(V576)==t_ratio||
type_of(V576)==t_shortfloat||
type_of(V576)==t_longfloat||
type_of(V576)==t_complex)){
	goto T1272;}}
	base[1]= small_fixnum(0);
	base[2]= car((V572));
	base[3]= small_fixnum(10);
	vs_top=(vs_base=base+1)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1272;}
	V577= car((V572));
	V578= make_cons(cadr((V572)),Cnil);
	{object V579 = list(4,VV[205],(V573),/* INLINE-ARGS */V577,(*(LnkLI219))(/* INLINE-ARGS */V578,(V573)));
	VMR57(V579)}
T1272:;
	{object V580 = list(4,VV[4],(V573),VV[206],(*(LnkLI219))((V572),(V573)));
	VMR57(V580)}}
}
/*	local entry for function C2LIST-NTH-IMMEDIATE	*/

static object LI59(V583,V584)

object V583;object V584;
{	 VMB58 VMS58 VMV58
	bds_check;
TTL:;
	{object V585;
	setq(VV[22],number_plus(symbol_value(VV[22]),small_fixnum(1)));
	V585= symbol_value(VV[22]);
	bds_bind(VV[20],symbol_value(VV[20]));
	bds_bind(VV[42],small_fixnum(0));
	V584= (VFUN_NARGS=2,(*(LnkLI232))((V584),VV[207]));
	princ_str("\n	{object V",VV[7]);
	(void)((*(LnkLI213))((V585)));
	princ_str("= ",VV[7]);
	if((symbol_value(VV[25]))==Cnil){
	goto T1289;}
	{register int V586;
	register int V587;
	V586= fix((V583));
	V587= 0;
T1295:;
	if(!((V587)>=(V586))){
	goto T1296;}
	goto T1291;
T1296:;
	princ_str("cdr(",VV[7]);
	V587= (V587)+1;
	goto T1295;}
T1291:;
	(void)((*(LnkLI213))(car((V584))));
	{register int V588;
	register int V589;
	V588= fix((V583));
	V589= 0;
T1311:;
	if(!((V589)>=(V588))){
	goto T1312;}
	goto T1307;
T1312:;
	princ_char(41,VV[7]);
	V589= (V589)+1;
	goto T1311;}
T1307:;
	princ_char(59,VV[7]);
	princ_str("\n	if((type_of(V",VV[7]);
	(void)((*(LnkLI213))((V585)));
	princ_str(")!=t_cons) && (",VV[7]);
	(void)((*(LnkLI213))(car((V584))));
	princ_str("!= Cnil))",VV[7]);
	princ_str("\n	 FEwrong_type_argument(Scons,V",VV[7]);
	(void)((*(LnkLI213))((V585)));
	princ_str(");",VV[7]);
	goto T1287;
T1289:;
	princ_str("\n	",VV[7]);
	(void)((*(LnkLI213))(car((V584))));
	{register int V590;
	register int V591;
	V590= fix((V583));
	V591= 0;
T1339:;
	if(!((V591)>=(V590))){
	goto T1340;}
	goto T1335;
T1340:;
	princ_str("\n	->c.c_cdr",VV[7]);
	V591= (V591)+1;
	goto T1339;}
T1335:;
	princ_char(59,VV[7]);
T1287:;
	V592= list(2,VV[61],(V585));
	(void)((VFUN_NARGS=1,(*(LnkLI214))(/* INLINE-ARGS */V592)));
	princ_char(125,VV[7]);
	{object V593 = (*(LnkLI233))();
	bds_unwind1;
	bds_unwind1;
	VMR58(V593)}}
}
/*	local function FIXUP	*/

static L55(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_reserve(VM59);
	{register object V594;
	check_arg(1);
	V594=(base[0]);
	vs_top=sup;
TTL:;
	{register object V595;
	V595= Cnil;
T1355:;
	if(!(type_of((V594))==t_cons)){
	goto T1358;}
	goto T1357;
T1358:;
	goto T1356;
T1357:;
	{register object V596;
	V596= car((V594));
	if(!(type_of((V596))==t_cons)){
	goto T1363;}
	V596= (*(LnkLI259))((V596));
	if(((V596))==Cnil){
	goto T1363;}
	if(!((car((V596)))==(VV[106]))){
	goto T1363;}
	V595= make_cons((V596),(V595));
	{register object V597;
	V597= car((V594));
	V594= cdr((V594));
	goto T1360;}
T1363:;
	goto T1356;}
T1360:;
	goto T1355;
T1356:;
	V598= nreverse((V595));
	base[1]= nconc(/* INLINE-ARGS */V598,(V594));
	vs_top=(vs_base=base+1)+1;
	return;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
static object  LnkTLI264(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[264],&LnkLI264,ap);} /* FIND */
static object  LnkTLI259(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[259],&LnkLI259,1,ap);} /* CMP-MACROEXPAND */
static LnkT258(){ call_or_link(VV[258],&Lnk258);} /* CMP-EVAL */
static object  LnkTLI257(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[257],&LnkLI257,1,ap);} /* CONSTANT-FOLD-P */
static object  LnkTLI250(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[250],&LnkLI250,2,ap);} /* CFAST-WRITE */
static object  LnkTLI249(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[249],&LnkLI249,2,ap);} /* FAST-READ */
static object  LnkTLI248(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[248],&LnkLI248,1,ap);} /* CONS-TO-LISTA */
static object  LnkTLI247(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[247],&LnkLI247,1,ap);} /* NAME-SD1 */
static object  LnkTLI246(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[246],&LnkLI246,1,ap);} /* GET-INCLUDED */
static object  LnkTLI245(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[245],&LnkLI245,2,ap);} /* STRUCT-TYPE-OPT */
static object  LnkTLI244(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[244],&LnkLI244,1,ap);} /* NORMALIZE-TYPE */
static object  LnkTLI243(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[243],&LnkLI243,ap);} /* POSITION */
static object  LnkTLI242(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[242],&LnkLI242,1,ap);} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI241(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[241],&LnkLI241,1,ap);} /* TYPE-FILTER */
static object  LnkTLI240(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[240],&LnkLI240,1,ap);} /* REPLACE-CONSTANT */
static object  LnkTLI239(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[239],&LnkLI239,1,ap);} /* RESULT-TYPE */
static LnkT238(){ call_or_link(VV[238],&Lnk238);} /* FIXNUMP */
static LnkT237(){ call_or_link(VV[237],&Lnk237);} /* SUBTYPEP */
static LnkT236(){ call_or_link(VV[236],&Lnk236);} /* WT-INLINE-LOC */
static object  LnkTLI235(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[235],&LnkLI235,1,ap);} /* C1EXPR */
static object  LnkTLI234(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[234],&LnkLI234,1,ap);} /* INLINE-BOOLE3-STRING */
static object  LnkTLI233(){return call_proc0(VV[233],&LnkLI233);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI232(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[232],&LnkLI232,ap);} /* INLINE-ARGS */
static object  LnkTLI231(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[231],&LnkLI231,2,ap);} /* ADD-INFO */
static LnkT230(){ call_or_link(VV[230],&Lnk230);} /* C2EXPR */
static object  LnkTLI229(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[229],&LnkLI229,1,ap);} /* C2BIND */
static object  LnkTLI228(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[228],&LnkLI228,1,ap);} /* WT-VS */
static object  LnkTLI227(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[227],&LnkLI227,2,ap);} /* WT-VAR */
static object  LnkTLI226(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[226],&LnkLI226,ap);} /* MAKE-VAR */
static object  LnkTLI225(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[225],&LnkLI225,ap);} /* CMPERR */
static object  LnkTLI224(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[224],&LnkLI224,ap);} /* C2FUNCALL */
static object  LnkTLI223(){return call_proc0(VV[223],&LnkLI223);} /* VS-PUSH */
static object  LnkTLI222(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[222],&LnkLI222,1,ap);} /* C2EXPR* */
static object  LnkTLI221(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[221],&LnkLI221,1,ap);} /* SAVE-FUNOB */
static object  LnkTLI220(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[220],&LnkLI220,5,ap);} /* C1APPLY-OPTIMIZE */
static object  LnkTLI219(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[219],&LnkLI219,2,ap);} /* C1ARGS */
static LnkT218(){ call_or_link(VV[218],&Lnk218);} /* COPY-INFO */
static object  LnkTLI217(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[217],&LnkLI217,1,ap);} /* C1FUNOB */
static object  LnkTLI216(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[216],&LnkLI216,1,ap);} /* ADD-OBJECT */
static object  LnkTLI215(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[215],&LnkLI215,4,ap);} /* C2CALL-GLOBAL */
static object  LnkTLI214(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[214],&LnkLI214,ap);} /* UNWIND-EXIT */
static object  LnkTLI213(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[213],&LnkLI213,1,ap);} /* WT1 */
static object  LnkTLI212(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[212],&LnkLI212,2,ap);} /* C1EXPR* */
static object  LnkTLI211(){return call_proc0(VV[211],&LnkLI211);} /* C1NIL */
static object  LnkTLI210(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[210],&LnkLI210,3,ap);} /* TOO-MANY-ARGS */
static object  LnkTLI209(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[209],&LnkLI209,3,ap);} /* TOO-FEW-ARGS */
static object  LnkTLI208(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[208],&LnkLI208,ap);} /* MAKE-INFO */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

