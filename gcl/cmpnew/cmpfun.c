
#include "cmpinclude.h"
#include "cmpfun.h"
void init_cmpfun(){do_init(VV);}
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
	if(!(endp_prop((V2)))){
	goto T3;}
	(void)((*(LnkLI209))(VV[0],small_fixnum(1),small_fixnum(0)));
	goto T3;
T3:;
	if(endp_prop(cdr((V2)))){
	goto T6;}
	if(endp_prop(cddr((V2)))){
	goto T6;}
	V5 = make_fixnum((long)length((V2)));
	(void)((*(LnkLI210))(VV[0],small_fixnum(2),V5));
	goto T6;
T6:;
	if(!(endp_prop(cdr((V2))))){
	goto T14;}
	V3= (*(LnkLI211))();
	goto T12;
	goto T14;
T14:;
	V3= (*(LnkLI212))(cadr((V2)),(V4));
	goto T12;
T12:;
	if(!(type_of(car((V2)))==t_string)){
	goto T19;}
	V6 = make_fixnum((long)length(car((V2))));
	if(number_compare(V6,symbol_value(VV[1]))<=0){
	goto T18;}
	goto T19;
T19:;
	if(!(type_of(car((V2)))==t_character)){
	goto T17;}
	goto T18;
T18:;
	if(endp_prop(cdr((V2)))){
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
	goto T28;
T28:;
	goto T16;
T16:;
	V9= car((V2));
	if(!(endp_prop(cdr((V2))))){
	goto T31;}
	V10= Cnil;
	goto T29;
	goto T31;
T31:;
	V10= structure_ref(caaddr((V3)),VV[2],4);
	goto T29;
T29:;
	{object V11 = list(5,VV[0],(V4),/* INLINE-ARGS */V9,V10,(V3));
	VMR1(V11)}
	goto T17;
T17:;
	V12= (*(LnkLI212))(car((V2)),(V4));
	{object V13 = list(4,VV[4],(V4),VV[0],list(2,/* INLINE-ARGS */V12,(V3)));
	VMR1(V13)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2PRINC	*/

static object LI2(V17,V18,V19)

register object V17;register object V18;object V19;
{	 VMB2 VMS2 VMV2
	goto TTL;
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
	goto T47;
T47:;
	princ_str(",VV[",VV[7]);
	(void)((*(LnkLI213))((V18)));
	princ_char(93,VV[7]);
	goto T45;
T45:;
	princ_str(");",VV[7]);
	goto T36;
	goto T38;
T38:;
	if(!(((long)length((V17)))==(1))){
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
	goto T64;
T64:;
	princ_str(",VV[",VV[7]);
	(void)((*(LnkLI213))((V18)));
	princ_char(93,VV[7]);
	goto T62;
T62:;
	princ_str(");",VV[7]);
	goto T36;
	goto T55;
T55:;
	princ_str("\n	princ_str(\"",VV[7]);
	{register long V22;
	register long V23;
	V22= (long)length((V17));
	V23= 0;
	goto T77;
T77:;
	if(!((V23)>=(V22))){
	goto T78;}
	goto T73;
	goto T78;
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
	goto T85;
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
	goto T91;
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
	goto T97;
T97:;
	(void)((*(LnkLI213))((V24)));}
	goto T82;
T82:;
	V23= (long)(V23)+1;
	goto T77;}
	goto T73;
T73:;
	princ_str("\",",VV[7]);
	if(((V18))!=Cnil){
	goto T110;}
	princ_str("Cnil",VV[7]);
	goto T108;
	goto T110;
T110:;
	princ_str("VV[",VV[7]);
	(void)((*(LnkLI213))((V18)));
	princ_char(93,VV[7]);
	goto T108;
T108:;
	princ_str(");",VV[7]);
	goto T36;
T36:;
	{object V25 = (VFUN_NARGS=1,(*(LnkLI214))(Cnil));
	VMR2(V25)}
	goto T34;
T34:;
	if(!(eql((V17),VV[10]))){
	goto T118;}
	V26= make_cons((V19),Cnil);
	{object V27 = (*(LnkLI215))(VV[11],/* INLINE-ARGS */V26,Cnil,Ct);
	VMR2(V27)}
	goto T118;
T118:;
	if(!(type_of((V17))==t_character)){
	goto T122;}
	V28= VV[14];
	goto T120;
	goto T122;
T122:;
	V28= VV[15];
	goto T120;
T120:;
	V29= (VFUN_NARGS=2,(*(LnkLI208))(VV[13],V28));
	V30= list(2,list(3,VV[12],/* INLINE-ARGS */V29,list(2,VV[16],(*(LnkLI216))((V17)))),(V19));
	{object V31 = (*(LnkLI215))(VV[0],/* INLINE-ARGS */V30,Cnil,Ct);
	VMR2(V31)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1TERPRI	*/

static object LI3(V33)

register object V33;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{register object V34;
	object V35;
	V34= Cnil;
	V35= (VFUN_NARGS=0,(*(LnkLI208))());
	if(endp_prop((V33))){
	goto T126;}
	if(endp_prop(cdr((V33)))){
	goto T126;}
	V36 = make_fixnum((long)length((V33)));
	(void)((*(LnkLI210))(VV[11],small_fixnum(1),V36));
	goto T126;
T126:;
	if(!(endp_prop((V33)))){
	goto T134;}
	V34= (*(LnkLI211))();
	goto T132;
	goto T134;
T134:;
	V34= (*(LnkLI212))(car((V33)),(V35));
	goto T132;
T132:;
	if(endp_prop((V33))){
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
	goto T142;
T142:;
	goto T136;
T136:;
	if(!(endp_prop((V33)))){
	goto T145;}
	V39= Cnil;
	goto T143;
	goto T145;
T145:;
	V39= structure_ref(caaddr((V34)),VV[2],4);
	goto T143;
T143:;
	{object V40 = list(5,VV[0],(V35),VV[10],V39,(V34));
	VMR3(V40)}
	goto T137;
T137:;
	{object V41 = list(4,VV[4],(V35),VV[11],make_cons((V34),Cnil));
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
	if(endp_prop((V43))){
	goto T149;}
	if(!(endp_prop(cdr((V43))))){
	goto T148;}
	goto T149;
T149:;
	V45 = make_fixnum((long)length((V43)));
	(void)((*(LnkLI209))(VV[18],small_fixnum(2),V45));
	goto T148;
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
	goto T165;
T165:;
	{object V50 = list(4,VV[18],(V44),(V46),(V43));
	VMR4(V50)}}
	goto T160;
T160:;
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
	goto T179;
T179:;
	if(!(endp_prop(cdr((V59))))){
	goto T180;}
	princ_str("\n	{object ",VV[7]);
	(void)((*(LnkLI213))((V58)));
	princ_char(59,VV[7]);
	bds_bind(VV[5],(V58));
	V60= (*(LnkLI222))(car((V59)));
	bds_unwind1;
	goto T177;
	goto T180;
T180:;
	base[2]= list(2,VV[23],(*(LnkLI223))());
	bds_bind(VV[5],base[2]);
	V61= (*(LnkLI222))(car((V59)));
	bds_unwind1;
	V59= cdr((V59));
	goto T179;}
	goto T177;
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
	goto T201;
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
	goto T199;
T199:;
	princ_str("\n	vs_base=base+",VV[7]);
	(void)((*(LnkLI213))((V57)));
	princ_str(";}",VV[7]);
	setq(VV[24],Ct);
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
	goto T236;
T236:;
	if(endp_prop(cdr((V72)))){
	goto T238;}
	if(!(endp_prop((V69)))){
	goto T237;}
	goto T238;
T238:;
	goto T234;
	goto T237;
T237:;
	{register object V75;
	{register object V76;
	V76= car((V69));
	V69= cdr((V69));
	V75= (V76);}
	V73= make_cons((V75),(V73));}
	{register object V77;
	{register object V78;
	V78= car((V72));
	V72= cdr((V72));
	V77= (V78);}
	V74= make_cons((V77),(V74));}
	goto T236;
	goto T234;
T234:;
	if((cdr((V72)))==Cnil){
	goto T258;}
	if(((V70))!=Cnil){
	goto T260;}
	(void)((VFUN_NARGS=1,(*(LnkLI225))(VV[27])));
	goto T260;
T260:;
	V73= make_cons(V70,(V73));
	{object V80;
	V80= list(4,VV[4],(V68),VV[28],(V72));
	V74= make_cons((V80),(V74));}
	V81= reverse((V73));
	{object V82 = list(5,VV[29],(V68),/* INLINE-ARGS */V81,reverse((V74)),(V71));
	VMR6(V82)}
	goto T258;
T258:;
	if(((V69))==Cnil){
	goto T269;}
	{object V83;
	V83= (VFUN_NARGS=4,(*(LnkLI226))(VV[30],VV[31],VV[32],Ct));
	V73= make_cons(V83,(V73));
	{object V85;
	V85= car((V72));
	V74= make_cons((V85),(V74));}
	V86= reverse((V73));
	V87= reverse((V74));
	{object V88 = list(5,VV[29],(V68),/* INLINE-ARGS */V86,/* INLINE-ARGS */V87,list(6,VV[33],cadr((V71)),(V83),(V69),(V70),(V71)));
	VMR6(V88)}}
	goto T269;
T269:;
	if(((V70))==Cnil){
	goto T278;}
	V73= make_cons(V70,(V73));
	{object V90;
	V90= car((V72));
	V74= make_cons((V90),(V74));}
	V91= reverse((V73));
	{object V92 = list(5,VV[29],(V68),/* INLINE-ARGS */V91,reverse((V74)),(V71));
	VMR6(V92)}
	goto T278;
T278:;
	{object V93;
	V93= (VFUN_NARGS=4,(*(LnkLI226))(VV[30],VV[31],VV[32],Ct));
	V73= make_cons(V93,(V73));
	{object V95;
	V95= car((V72));
	V74= make_cons((V95),(V74));}
	V96= reverse((V73));
	V97= reverse((V74));
	{object V98 = list(5,VV[29],(V68),/* INLINE-ARGS */V96,/* INLINE-ARGS */V97,list(6,VV[33],cadr((V71)),(V93),(V69),(V70),(V71)));
	VMR6(V98)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C2APPLY-OPTIMIZE	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	bds_check;
	{object V99;
	object V100;
	object V101;
	object V102;
	check_arg(4);
	V99=(base[0]);
	V100=(base[1]);
	V101=(base[2]);
	V102=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[34],symbol_value(VV[34]));
	bds_bind(VV[20],symbol_value(VV[20]));
	bds_bind(VV[35],symbol_value(VV[35]));
	bds_bind(VV[36],symbol_value(VV[36]));
	if((symbol_value(VV[25]))!=Cnil){
	goto T292;}
	if((symbol_value(VV[37]))==Cnil){
	goto T291;}
	goto T292;
T292:;
	princ_str("\n	",VV[7]);
	if(((V101))==Cnil){
	goto T301;}
	V103= VV[38];
	goto T299;
	goto T301;
T301:;
	V103= VV[39];
	goto T299;
T299:;
	(void)((*(LnkLI213))(V103));
	princ_char(40,VV[7]);
	V104 = make_fixnum((long)length((V100)));
	(void)((*(LnkLI213))(V104));
	princ_char(44,VV[7]);
	(void)((*(LnkLI227))((V99),Cnil));
	princ_str(");",VV[7]);
	goto T291;
T291:;
	{object V105;
	object V106;
	V105= (V100);
	V106= car((V105));
	goto T312;
T312:;
	if(!(endp_prop((V105)))){
	goto T313;}
	goto T308;
	goto T313;
T313:;
	V107= (*(LnkLI223))();
	(void)(structure_set((V106),VV[2],2,/* INLINE-ARGS */V107));
	V105= cdr((V105));
	V106= car((V105));
	goto T312;}
	goto T308;
T308:;
	if(((V101))==Cnil){
	goto T323;}
	V108= (*(LnkLI223))();
	(void)(structure_set((V101),VV[2],2,/* INLINE-ARGS */V108));
	goto T323;
T323:;
	{register long V109;
	object V110;
	V109= 0;
	V110= (V100);
	goto T329;
T329:;
	if(!(endp_prop((V110)))){
	goto T330;}
	if(((V101))==Cnil){
	goto T326;}
	princ_str("\n	",VV[7]);
	V111= structure_ref((V101),VV[2],2);
	(void)((*(LnkLI228))(/* INLINE-ARGS */V111));
	princ_str("= ",VV[7]);
	{long V112;
	register long V113;
	V112= V109;
	V113= 0;
	goto T343;
T343:;
	if(!((V113)>=(V112))){
	goto T344;}
	goto T339;
	goto T344;
T344:;
	princ_char(40,VV[7]);
	V113= (long)(V113)+1;
	goto T343;}
	goto T339;
T339:;
	(void)((*(LnkLI227))((V99),Cnil));
	{long V114;
	register long V115;
	V114= V109;
	V115= 0;
	goto T358;
T358:;
	if(!((V115)>=(V114))){
	goto T359;}
	goto T354;
	goto T359;
T359:;
	princ_str("\n	)->c.c_cdr",VV[7]);
	V115= (long)(V115)+1;
	goto T358;}
	goto T354;
T354:;
	princ_char(59,VV[7]);
	goto T326;
	goto T330;
T330:;
	princ_str("\n	",VV[7]);
	V116= structure_ref(car((V110)),VV[2],2);
	(void)((*(LnkLI228))(/* INLINE-ARGS */V116));
	princ_str("=(",VV[7]);
	{long V117;
	register long V118;
	V117= V109;
	V118= 0;
	goto T378;
T378:;
	if(!((V118)>=(V117))){
	goto T379;}
	goto T374;
	goto T379;
T379:;
	princ_char(40,VV[7]);
	V118= (long)(V118)+1;
	goto T378;}
	goto T374;
T374:;
	(void)((*(LnkLI227))((V99),Cnil));
	{long V119;
	register long V120;
	V119= V109;
	V120= 0;
	goto T393;
T393:;
	if(!((V120)>=(V119))){
	goto T394;}
	goto T389;
	goto T394;
T394:;
	princ_str("\n	)->c.c_cdr",VV[7]);
	V120= (long)(V120)+1;
	goto T393;}
	goto T389;
T389:;
	princ_str(")->c.c_car;",VV[7]);
	V109= (long)(V109)+1;
	V110= cdr((V110));
	goto T329;}
	goto T326;
T326:;
	{object V121;
	object V122;
	V121= (V100);
	V122= car((V121));
	goto T413;
T413:;
	if(!(endp_prop((V121)))){
	goto T414;}
	goto T409;
	goto T414;
T414:;
	(void)((*(LnkLI229))((V122)));
	V121= cdr((V121));
	V122= car((V121));
	goto T413;}
	goto T409;
T409:;
	if(((V101))==Cnil){
	goto T424;}
	(void)((*(LnkLI229))((V101)));
	goto T424;
T424:;
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
	if(!(endp_prop((V124)))){
	goto T430;}
	(void)((*(LnkLI209))(VV[40],small_fixnum(1),small_fixnum(0)));
	goto T430;
T430:;
	V125= (*(LnkLI217))(car((V124)));
	(void)((*(LnkLI231))((V126),cadr((V125))));
	{object V127 = list(4,VV[40],(V126),(V125),(*(LnkLI219))(cdr((V124)),(V126)));
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
	if(endp_prop((V129))){
	goto T438;}
	if(!(endp_prop(cdr((V129))))){
	goto T437;}
	goto T438;
T438:;
	V131 = make_fixnum((long)length((V129)));
	(void)((*(LnkLI209))(VV[41],small_fixnum(2),V131));
	goto T437;
T437:;
	if(endp_prop(cddr((V129)))){
	goto T442;}
	V132 = make_fixnum((long)length((V129)));
	(void)((*(LnkLI210))(VV[41],small_fixnum(2),V132));
	goto T442;
T442:;
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
	bds_bind(VV[20],symbol_value(VV[20]));
	bds_bind(VV[42],small_fixnum(0));
	V135= (VFUN_NARGS=2,(*(LnkLI232))((V135),VV[43]));
	if((symbol_value(VV[25]))==Cnil){
	goto T449;}
	princ_str("\n	if(type_of(",VV[7]);
	(void)((*(LnkLI213))(car((V135))));
	princ_str(")!=t_cons)",VV[7]);
	princ_str("FEwrong_type_argument(Scons,",VV[7]);
	(void)((*(LnkLI213))(car((V135))));
	princ_str(");",VV[7]);
	goto T449;
T449:;
	princ_str("\n	(",VV[7]);
	(void)((*(LnkLI213))(car((V135))));
	princ_str(")->c.c_car = ",VV[7]);
	(void)((*(LnkLI213))(cadr((V135))));
	princ_char(59,VV[7]);
	(void)((VFUN_NARGS=1,(*(LnkLI214))(car((V135)))));
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
	if(endp_prop((V138))){
	goto T467;}
	if(!(endp_prop(cdr((V138))))){
	goto T466;}
	goto T467;
T467:;
	V140 = make_fixnum((long)length((V138)));
	(void)((*(LnkLI209))(VV[44],small_fixnum(2),V140));
	goto T466;
T466:;
	if(endp_prop(cddr((V138)))){
	goto T471;}
	V141 = make_fixnum((long)length((V138)));
	(void)((*(LnkLI210))(VV[44],small_fixnum(2),V141));
	goto T471;
T471:;
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
	bds_bind(VV[20],symbol_value(VV[20]));
	bds_bind(VV[42],small_fixnum(0));
	V144= (VFUN_NARGS=2,(*(LnkLI232))((V144),VV[45]));
	if((symbol_value(VV[25]))==Cnil){
	goto T478;}
	princ_str("\n	if(type_of(",VV[7]);
	(void)((*(LnkLI213))(car((V144))));
	princ_str(")!=t_cons)",VV[7]);
	princ_str("FEwrong_type_argument(Scons,",VV[7]);
	(void)((*(LnkLI213))(car((V144))));
	princ_str(");",VV[7]);
	goto T478;
T478:;
	princ_str("\n	(",VV[7]);
	(void)((*(LnkLI213))(car((V144))));
	princ_str(")->c.c_cdr = ",VV[7]);
	(void)((*(LnkLI213))(cadr((V144))));
	princ_char(59,VV[7]);
	(void)((VFUN_NARGS=1,(*(LnkLI214))(car((V144)))));
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
	if(endp_prop((V147))){
	goto T496;}
	if(!(endp_prop(cdr((V147))))){
	goto T495;}
	goto T496;
T496:;
	V149 = make_fixnum((long)length((V147)));
	(void)((*(LnkLI209))(VV[46],small_fixnum(2),V149));
	goto T495;
T495:;
	if(endp_prop(cddr((V147)))){
	goto T500;}
	V150 = make_fixnum((long)length((V147)));
	(void)((*(LnkLI210))(VV[46],small_fixnum(2),V150));
	goto T500;
T500:;
	V151= list(2,car((V147)),cadr((V147)));
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
	if(endp_prop((V154))){
	goto T505;}
	if(!(endp_prop(cdr((V154))))){
	goto T504;}
	goto T505;
T505:;
	V156 = make_fixnum((long)length((V154)));
	(void)((*(LnkLI209))(VV[49],small_fixnum(2),V156));
	goto T504;
T504:;
	if(!(endp_prop(cddr((V154))))){
	goto T510;}
	{object V157 = list(4,VV[47],(V155),VV[50],(*(LnkLI219))((V154),(V155)));
	VMR14(V157)}
	goto T510;
T510:;
	if(!((caddr((V154)))==(VV[51]))){
	goto T513;}
	if(!(((long)length((V154)))==(4))){
	goto T513;}
	{register object x= cadddr((V154)),V158= VV[52];
	while(!endp(V158))
	if(equal(x,V158->c.c_car)){
	goto T518;
	}else V158=V158->c.c_cdr;
	goto T513;}
	goto T518;
T518:;
	V159= cadr(cadddr((V154)));
	V160= list(2,car((V154)),cadr((V154)));
	{object V161 = list(4,VV[47],(V155),/* INLINE-ARGS */V159,(*(LnkLI219))(/* INLINE-ARGS */V160,(V155)));
	VMR14(V161)}
	goto T513;
T513:;
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
	bds_bind(VV[20],symbol_value(VV[20]));
	bds_bind(VV[42],small_fixnum(0));
	setq(VV[22],number_plus(symbol_value(VV[22]),small_fixnum(1)));
	V167= symbol_value(VV[22]);
	V166= (VFUN_NARGS=2,(*(LnkLI232))((V166),VV[53]));
	princ_str("\n	{register object x= ",VV[7]);
	(void)((*(LnkLI213))(car((V166))));
	princ_str(",V",VV[7]);
	(void)((*(LnkLI213))((V167)));
	princ_str("= ",VV[7]);
	(void)((*(LnkLI213))(cadr((V166))));
	princ_char(59,VV[7]);
	if((symbol_value(VV[25]))==Cnil){
	goto T533;}
	princ_str("\n	while(!endp(V",VV[7]);
	(void)((*(LnkLI213))((V167)));
	princ_str("))",VV[7]);
	goto T531;
	goto T533;
T533:;
	princ_str("\n	while(V",VV[7]);
	(void)((*(LnkLI213))((V167)));
	princ_str("!=Cnil)",VV[7]);
	goto T531;
T531:;
	if(!(((V165))==(VV[48]))){
	goto T543;}
	princ_str("\n	if(x==(V",VV[7]);
	(void)((*(LnkLI213))((V167)));
	princ_str("->c.c_car)){",VV[7]);
	goto T541;
	goto T543;
T543:;
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
	goto T541;
T541:;
	if(!(type_of(symbol_value(VV[5]))==t_cons)){
	goto T557;}
	if((car(symbol_value(VV[5])))==(VV[54])){
	goto T556;}
	if(!((car(symbol_value(VV[5])))==(VV[55]))){
	goto T557;}
	goto T556;
T556:;
	(void)((VFUN_NARGS=2,(*(LnkLI214))(Ct,VV[56])));
	goto T555;
	goto T557;
T557:;
	V169= list(2,VV[21],(V167));
	(void)((VFUN_NARGS=2,(*(LnkLI214))(/* INLINE-ARGS */V169,VV[56])));
	goto T555;
T555:;
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
	if(endp_prop((V172))){
	goto T574;}
	if(!(endp_prop(cdr((V172))))){
	goto T573;}
	goto T574;
T574:;
	V174 = make_fixnum((long)length((V172)));
	(void)((*(LnkLI209))(VV[57],small_fixnum(2),V174));
	goto T573;
T573:;
	if(!(endp_prop(cddr((V172))))){
	goto T579;}
	{object V175 = list(4,VV[58],(V173),VV[50],(*(LnkLI219))((V172),(V173)));
	VMR16(V175)}
	goto T579;
T579:;
	if(!((caddr((V172)))==(VV[51]))){
	goto T582;}
	if(!(((long)length((V172)))==(4))){
	goto T582;}
	{register object x= cadddr((V172)),V176= VV[59];
	while(!endp(V176))
	if(equal(x,V176->c.c_car)){
	goto T587;
	}else V176=V176->c.c_cdr;
	goto T582;}
	goto T587;
T587:;
	V177= cadr(cadddr((V172)));
	V178= list(2,car((V172)),cadr((V172)));
	{object V179 = list(4,VV[58],(V173),/* INLINE-ARGS */V177,(*(LnkLI219))(/* INLINE-ARGS */V178,(V173)));
	VMR16(V179)}
	goto T582;
T582:;
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
	bds_bind(VV[20],symbol_value(VV[20]));
	bds_bind(VV[42],small_fixnum(0));
	setq(VV[22],number_plus(symbol_value(VV[22]),small_fixnum(1)));
	V185= symbol_value(VV[22]);
	V186= Cnil;
	V184= (VFUN_NARGS=2,(*(LnkLI232))((V184),VV[60]));
	V186= symbol_name((V183));
	if(!(((V183))==(VV[48]))){
	goto T596;}
	goto T595;
	goto T596;
T596:;
	base[3]= (V186);
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V186= vs_base[0];
	goto T595;
T595:;
	princ_str("\n	{register object x= ",VV[7]);
	(void)((*(LnkLI213))(car((V184))));
	princ_str(",V",VV[7]);
	(void)((*(LnkLI213))((V185)));
	princ_str("= ",VV[7]);
	(void)((*(LnkLI213))(cadr((V184))));
	princ_char(59,VV[7]);
	if((symbol_value(VV[25]))==Cnil){
	goto T610;}
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
	goto T608;
	goto T610;
T610:;
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
	goto T608;
T608:;
	if(!(type_of(symbol_value(VV[5]))==t_cons)){
	goto T637;}
	if((car(symbol_value(VV[5])))==(VV[54])){
	goto T636;}
	if(!((car(symbol_value(VV[5])))==(VV[55]))){
	goto T637;}
	goto T636;
T636:;
	(void)((VFUN_NARGS=2,(*(LnkLI214))(Ct,VV[56])));
	goto T635;
	goto T637;
T637:;
	V187= list(2,VV[61],(V185));
	(void)((VFUN_NARGS=2,(*(LnkLI214))(/* INLINE-ARGS */V187,VV[56])));
	goto T635;
T635:;
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
/*	function definition for BOOLE3	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{object V189;
	object V190;
	object V191;
	check_arg(3);
	V189=(base[0]);
	V190=(base[1]);
	V191=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (V189);
	base[4]= (V190);
	base[5]= (V191);
	vs_top=(vs_base=base+3)+3;
	Lboole();
	return;
	}
}
/*	local entry for function C1BOOLE-CONDITION	*/

static object LI19(V193)

object V193;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	if(((endp_prop(cddr((V193)))?Ct:Cnil))==Cnil){
	goto T655;}
	{object V194 = Cnil;
	VMR19(V194)}
	goto T655;
T655:;
	if(endp_prop(cdddr((V193)))){
	goto T657;}
	{object V195 = Cnil;
	VMR19(V195)}
	goto T657;
T657:;
	{object V196 = (*(LnkLI234))(car((V193)));
	VMR19(V196)}
	return Cnil;
}
/*	local entry for function C1BOOLE3	*/

static object LI20(V198)

object V198;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	V199= make_cons(VV[62],(V198));
	{object V200 = (*(LnkLI235))(/* INLINE-ARGS */V199);
	VMR20(V200)}
	return Cnil;
}
/*	function definition for INLINE-BOOLE3	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{object V201;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V201=(base[0]);
	vs_top=sup;
	{object V202;
	V202= cadr(car((V201)));
	if(!((car((V202)))==(VV[63]))){
	goto T661;}
	goto T660;
	goto T661;
T661:;
	base[1]= VV[64];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T660;
T660:;
	{object V203;
	V203= (*(LnkLI234))(caddr((V202)));
	if((V203)!=Cnil){
	goto T665;}
	base[1]= VV[65];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T665;
T665:;
	base[1]= (V203);
	base[2]= cdr((V201));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk236)();
	return;}}
	}
}
/*	local entry for function INLINE-BOOLE3-STRING	*/

static object LI22(V205)

register object V205;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	base[0]= (V205);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T670;}
	goto T669;
	goto T670;
T670:;
	base[0]= (V205);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V205= vs_base[0];
	goto T669;
T669:;
	{object V206= (V205);
	if(!eql(V206,VV[66]))goto T675;
	{object V207 = VV[67];
	VMR22(V207)}
	goto T675;
T675:;
	if(!eql(V206,VV[68]))goto T676;
	{object V208 = VV[69];
	VMR22(V208)}
	goto T676;
T676:;
	if(!eql(V206,VV[70]))goto T677;
	{object V209 = VV[71];
	VMR22(V209)}
	goto T677;
T677:;
	if(!eql(V206,VV[72]))goto T678;
	{object V210 = VV[73];
	VMR22(V210)}
	goto T678;
T678:;
	if(!eql(V206,VV[74]))goto T679;
	{object V211 = VV[75];
	VMR22(V211)}
	goto T679;
T679:;
	if(!eql(V206,VV[76]))goto T680;
	{object V212 = VV[77];
	VMR22(V212)}
	goto T680;
T680:;
	if(!eql(V206,VV[78]))goto T681;
	{object V213 = VV[79];
	VMR22(V213)}
	goto T681;
T681:;
	if(!eql(V206,VV[80]))goto T682;
	{object V214 = VV[81];
	VMR22(V214)}
	goto T682;
T682:;
	if(!eql(V206,VV[82]))goto T683;
	{object V215 = VV[83];
	VMR22(V215)}
	goto T683;
T683:;
	if(!eql(V206,VV[84]))goto T684;
	{object V216 = VV[85];
	VMR22(V216)}
	goto T684;
T684:;
	{object V217 = Cnil;
	VMR22(V217)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1ASH-CONDITION	*/

static object LI23(V219)

object V219;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	{register object V220;
	V220= cadr((V219));{object V221;
	{register object V222;
	V222= (V220);
	if(type_of((V222))==t_fixnum){
	goto T688;}
	V221= Cnil;
	goto T687;
	goto T688;
T688:;
	if((fix((V222)))>=(-31)){
	goto T690;}
	V221= Cnil;
	goto T687;
	goto T690;
T690:;
	V221= ((fix((V222)))<=(31)?Ct:Cnil);}
	goto T687;
T687:;
	if(V221==Cnil)goto T686;
	{object V223 = V221;
	VMR23(V223)}
	goto T686;
T686:;}
	if(type_of((V220))==t_cons){
	goto T692;}
	{object V224 = Cnil;
	VMR23(V224)}
	goto T692;
T692:;
	if((car((V220)))==(VV[86])){
	goto T694;}
	{object V225 = Cnil;
	VMR23(V225)}
	goto T694;
T694:;
	{object V226;
	V226= cadr((V220));
	base[0]= (V226);
	base[1]= VV[87];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	{object V227 = vs_base[0];
	VMR23(V227)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1ASH	*/

static object LI24(V229)

object V229;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{register object V230;
	register object V231;
	V230= cadr((V229));
	V231= Cnil;
	base[0]= (V230);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T702;}
	base[0]= (V230);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V230= vs_base[0];{object V232;
	base[0]= (V230);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk238)();
	vs_top=sup;
	V232= vs_base[0];
	if(V232==Cnil)goto T709;
	goto T708;
	goto T709;
T709:;}
	base[0]= VV[88];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T708;
T708:;
	if(!(number_compare((V230),small_fixnum(0))<0)){
	goto T714;}
	V231= VV[89];
	goto T700;
	goto T714;
T714:;
	if(!(number_compare((V230),small_fixnum(0))>=0)){
	goto T700;}
	V231= VV[90];
	goto T700;
	goto T702;
T702:;
	{object V233;
	V233= cadr((V230));
	base[0]= (V233);
	base[1]= VV[91];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T722;}
	V231= VV[90];
	goto T700;
	goto T722;
T722:;
	base[0]= (V233);
	base[1]= VV[92];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T728;}
	V231= VV[89];
	goto T700;
	goto T728;
T728:;
	base[0]= VV[93];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;}
	goto T700;
T700:;
	V234= make_cons((V231),(V229));
	{object V235 = (*(LnkLI235))(/* INLINE-ARGS */V234);
	VMR24(V235)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SHIFT>>	*/

static object LI25(V238,V239)

object V238;object V239;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	base[0]= (V238);
	base[1]= (V239);
	vs_top=(vs_base=base+0)+2;
	Lash();
	vs_top=sup;
	{object V240 = vs_base[0];
	VMR25(V240)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SHIFT<<	*/

static object LI26(V243,V244)

object V243;object V244;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	base[0]= (V243);
	base[1]= (V244);
	vs_top=(vs_base=base+0)+2;
	Lash();
	vs_top=sup;
	{object V245 = vs_base[0];
	VMR26(V245)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for CO1LDB	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	{object V246;
	object V247;
	check_arg(2);
	V246=(base[0]);
	V247=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V248;
	object V249;
	V248= Cnil;
	base[3]= VV[94];
	vs_top=(vs_base=base+3)+1;
	Linteger_length();
	vs_top=sup;
	V249= vs_base[0];
	{register object V250;
	{object V251;
	V248= car((V247));
	if(type_of((V248))==t_cons){
	goto T744;}
	V251= Cnil;
	goto T743;
	goto T744;
T744:;
	if((VV[95])==(car((V248)))){
	goto T747;}
	V251= Cnil;
	goto T743;
	goto T747;
T747:;
	V251= make_cons(cadr((V248)),caddr((V248)));
	goto T743;
T743:;
	if(((V251))==Cnil){
	goto T750;}
	V250= (V251);
	goto T742;
	goto T750;
T750:;
	V250= Cnil;}
	goto T742;
T742:;
	{object V252= cdr((V250));
	if(!(type_of(V252)==t_fixnum||type_of(V252)==t_bignum)){
	goto T753;}}
	{object V253= car((V250));
	if(!(type_of(V253)==t_fixnum||type_of(V253)==t_bignum)){
	goto T753;}}
	V254= number_plus(car((V250)),cdr((V250)));
	if(!(number_compare(/* INLINE-ARGS */V254,(V249))<0)){
	goto T753;}
	base[3]= (*(LnkLI239))(cadr((V247)));
	base[4]= VV[96];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T753;}
	V255= list(3,VV[86],VV[96],list(4,VV[97],car((V250)),cdr((V250)),cadr((V247))));
	base[3]= (*(LnkLI235))(/* INLINE-ARGS */V255);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T753;
T753:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}}
	}
}
/*	local entry for function C1LENGTH	*/

static object LI28(V257)

register object V257;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{register object V258;
	V258= (VFUN_NARGS=0,(*(LnkLI208))());
	(void)(structure_set((V258),VV[98],2,VV[96]));
	{object V259;
	if(type_of(car((V257)))==t_cons){
	goto T766;}
	V259= Cnil;
	goto T765;
	goto T766;
T766:;
	if((caar((V257)))==(VV[99])){
	goto T768;}
	V259= Cnil;
	goto T765;
	goto T768;
T768:;
	{object V260;
	V260= cdr(car((V257)));
	if((V260)==Cnil){
	V259= Cnil;
	goto T765;}
	if((cddr((V260)))==Cnil){
	goto T771;}
	V259= Cnil;
	goto T765;
	goto T771;
T771:;
	V259= list(4,VV[4],(V258),VV[100],(*(LnkLI219))((V260),(V258)));}
	goto T765;
T765:;
	if(((V259))==Cnil){
	goto T774;}
	{object V261 = (V259);
	VMR28(V261)}
	goto T774;
T774:;
	V257= (*(LnkLI219))((V257),(V258));
	{object V262 = list(4,VV[4],(V258),VV[101],(V257));
	VMR28(V262)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1GET	*/

static object LI29(V264)

register object V264;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{object V265;
	V265= (VFUN_NARGS=0,(*(LnkLI208))());
	if(endp_prop((V264))){
	goto T780;}
	if(!(endp_prop(cdr((V264))))){
	goto T779;}
	goto T780;
T780:;
	V266 = make_fixnum((long)length((V264)));
	(void)((*(LnkLI209))(VV[102],small_fixnum(2),V266));
	goto T779;
T779:;
	if(endp_prop(cddr((V264)))){
	goto T784;}
	if(endp_prop(cdddr((V264)))){
	goto T784;}
	V267 = make_fixnum((long)length((V264)));
	(void)((*(LnkLI210))(VV[102],small_fixnum(3),V267));
	goto T784;
T784:;
	{object V268 = list(3,VV[102],(V265),(*(LnkLI219))((V264),(V265)));
	VMR29(V268)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2GET	*/

static object LI30(V270)

register object V270;
{	 VMB30 VMS30 VMV30
	bds_check;
	goto TTL;
TTL:;
	if((symbol_value(VV[25]))==Cnil){
	goto T790;}
	{object V271 = (*(LnkLI215))(VV[102],(V270),Cnil,Ct);
	VMR30(V271)}
	goto T790;
T790:;
	{register object V272;
	base[0]= symbol_value(VV[20]);
	setq(VV[22],number_plus(symbol_value(VV[22]),small_fixnum(1)));
	V272= symbol_value(VV[22]);
	bds_bind(VV[20],base[0]);
	bds_bind(VV[42],small_fixnum(0));
	if((cddr((V270)))==Cnil){
	goto T799;}
	V273= VV[103];
	goto T797;
	goto T799;
T799:;
	V273= VV[104];
	goto T797;
T797:;
	V270= (VFUN_NARGS=2,(*(LnkLI232))((V270),V273));
	princ_str("\n	{object V",VV[7]);
	(void)((*(LnkLI213))((V272)));
	princ_str(" =(",VV[7]);
	(void)((*(LnkLI213))(car((V270))));
	princ_str(")->s.s_plist;",VV[7]);
	princ_str("\n	 object ind= ",VV[7]);
	(void)((*(LnkLI213))(cadr((V270))));
	princ_char(59,VV[7]);
	princ_str("\n	while(V",VV[7]);
	(void)((*(LnkLI213))((V272)));
	princ_str("!=Cnil){",VV[7]);
	princ_str("\n	if(V",VV[7]);
	(void)((*(LnkLI213))((V272)));
	princ_str("->c.c_car==ind){",VV[7]);
	V274= list(2,VV[105],(V272));
	(void)((VFUN_NARGS=2,(*(LnkLI214))(/* INLINE-ARGS */V274,VV[56])));
	princ_str("\n	}else V",VV[7]);
	(void)((*(LnkLI213))((V272)));
	princ_str("=V",VV[7]);
	(void)((*(LnkLI213))((V272)));
	princ_str("->c.c_cdr->c.c_cdr;}",VV[7]);
	if((cddr((V270)))==Cnil){
	goto T829;}
	V275= caddr((V270));
	goto T827;
	goto T829;
T829:;
	V275= Cnil;
	goto T827;
T827:;
	(void)((VFUN_NARGS=1,(*(LnkLI214))(V275)));
	princ_char(125,VV[7]);
	{object V276 = (*(LnkLI233))();
	bds_unwind1;
	bds_unwind1;
	VMR30(V276)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1EQL	*/

static object LI31(V279,V280)

object V279;register object V280;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;{object V281;
	if((cdr((V280)))!=Cnil){
	goto T837;}
	V281= Cnil;
	goto T836;
	goto T837;
T837:;
	V281= ((symbol_value(VV[25]))==Cnil?Ct:Cnil);
	goto T836;
T836:;
	if(V281==Cnil)goto T835;
	goto T834;
	goto T835;
T835:;}
	{object V282 = Cnil;
	VMR31(V282)}
	goto T834;
T834:;
	if(((*(LnkLI240))((V280)))==Cnil){
	goto T840;}
	if(!(type_of(cadr((V280)))==t_character)){
	goto T842;}
	V280= reverse((V280));
	goto T842;
T842:;
	if(!(type_of(car((V280)))==t_character)){
	goto T847;}
	{register object V283;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V283= vs_base[0];
	V284= list(2,(V283),cadr((V280)));
	V285= make_cons(/* INLINE-ARGS */V284,Cnil);
	V286= (*(LnkLI239))(cadr((V280)));
	V287= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V286,(V283)));
	V288= list(3,VV[109],(V283),VV[110]);
	V289= list(2,VV[112],car((V280)));
	V290= list(4,VV[29],/* INLINE-ARGS */V285,/* INLINE-ARGS */V287,list(3,VV[108],/* INLINE-ARGS */V288,list(3,VV[111],/* INLINE-ARGS */V289,list(3,VV[86],VV[96],list(2,VV[112],list(3,VV[86],VV[14],(V283)))))));
	{object V291 = (*(LnkLI235))(/* INLINE-ARGS */V290);
	VMR31(V291)}}
	goto T847;
T847:;
	{object V292 = Cnil;
	VMR31(V292)}
	goto T840;
T840:;
	{object V293 = Cnil;
	VMR31(V293)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RESULT-TYPE	*/

static object LI32(V295)

register object V295;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	if(!(type_of((V295))==t_symbol)){
	goto T851;}
	{object V296;
	V296= (*(LnkLI235))((V295));
	{object V297 = structure_ref(cadr((V296)),VV[98],2);
	VMR32(V297)}}
	goto T851;
T851:;
	base[0]= (V295);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T855;}
	base[0]= (V295);
	vs_top=(vs_base=base+0)+1;
	Ltype_of();
	vs_top=sup;
	V298= vs_base[0];
	{object V299 = (*(LnkLI241))(V298);
	VMR32(V299)}
	goto T855;
T855:;
	if(!(type_of((V295))==t_cons)){
	goto T861;}
	if(!((car((V295)))==(VV[86]))){
	goto T861;}
	{object V300 = (*(LnkLI241))(cadr((V295)));
	VMR32(V300)}
	goto T861;
T861:;
	{object V301 = Ct;
	VMR32(V301)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1TYPEP	*/

static object LI33(V304,V305)

object V304;register object V305;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{register object V306;
	V306= Cnil;
	{register object V307;
	register object V308;
	register object V309;
	V307= car((V305));
	V308= Cnil;
	if(type_of(cadr((V305)))==t_cons){
	goto T870;}
	V309= Cnil;
	goto T869;
	goto T870;
T870:;
	if((car(cadr((V305))))==(VV[113])){
	goto T872;}
	V309= Cnil;
	goto T869;
	goto T872;
T872:;
	V309= cadr(cadr((V305)));
	goto T869;
T869:;
	base[2]= (*(LnkLI239))(car((V305)));
	base[3]= (V309);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T874;}
	V308= Ct;
	{object V310 = (*(LnkLI235))((V308));
	VMR33(V310)}
	goto T874;
T874:;
	if(((V309))!=Cnil){
	goto T884;}
	V308= Cnil;
	goto T882;
	goto T884;
T884:;
	{register object x= (V309),V311= symbol_value(VV[114]);
	while(!endp(V311))
	if(type_of(V311->c.c_car)==t_cons &&equal(x,V311->c.c_car->c.c_car)){
	V304= (V311->c.c_car);
	goto T889;
	}else V311=V311->c.c_cdr;
	V304= Cnil;}
	goto T889;
T889:;
	if(((V304))==Cnil){
	goto T887;}
	V308= list(2,cdr((V304)),(V307));
	goto T882;
	goto T887;
T887:;
	if(!(type_of((V309))==t_cons)){
	goto T891;}
	if(!((car((V309)))==(VV[115]))){
	goto T894;}
	if((cddr((V309)))==Cnil){
	goto T890;}
	goto T894;
T894:;
	{register object x= car((V309)),V312= VV[116];
	while(!endp(V312))
	if(eql(x,V312->c.c_car)){
	goto T899;
	}else V312=V312->c.c_cdr;
	goto T891;}
	goto T899;
T899:;
	if(!(equal(caddr((V309)),VV[117]))){
	goto T891;}
	goto T890;
T890:;
	V306= (*(LnkLI242))(cadr((V309)));
	if(!(((V306))==(VV[118]))){
	goto T904;}
	V308= list(2,VV[119],(V307));
	goto T882;
	goto T904;
T904:;
	if(!(((V306))==(VV[120]))){
	goto T907;}
	V308= list(2,VV[121],(V307));
	goto T882;
	goto T907;
T907:;
	V306= (VFUN_NARGS=2,(*(LnkLI243))((V306),symbol_value(VV[122])));
	if(((V306))==Cnil){
	goto T910;}
	V308= list(3,VV[86],VV[123],list(3,VV[124],(V307),(V306)));
	goto T882;
	goto T910;
T910:;
	V308= Cnil;
	goto T882;
	goto T891;
T891:;
	{object V313;
	if(type_of((V309))==t_cons){
	goto T914;}
	V313= Cnil;
	goto T913;
	goto T914;
T914:;
	if((car((V309)))==(VV[125])){
	goto T916;}
	V313= Cnil;
	goto T913;
	goto T916;
T916:;
	if(type_of(cdr((V309)))==t_cons){
	goto T918;}
	V313= Cnil;
	goto T913;
	goto T918;
T918:;
	if((cadr((V309)))!=Cnil){
	goto T920;}
	V313= Cnil;
	goto T913;
	goto T920;
T920:;
	if(type_of(cadr((V309)))==t_symbol){
	goto T922;}
	V313= Cnil;
	goto T913;
	goto T922;
T922:;
	base[2]= cadr((V309));
	vs_top=(vs_base=base+2)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T924;}
	V313= Cnil;
	goto T913;
	goto T924;
T924:;
	if((cddr((V309)))==Cnil){
	goto T927;}
	V313= Cnil;
	goto T913;
	goto T927;
T927:;
	V313= list(2,cadr((V309)),(V307));
	goto T913;
T913:;
	if(((V313))==Cnil){
	goto T930;}
	V308= (V313);
	goto T882;
	goto T930;
T930:;
	base[2]= (V309);
	base[3]= VV[96];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk237)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T933;}
	V306= (*(LnkLI244))((V309));
	if(type_of((V306))==t_cons){
	goto T939;}
	V308= Cnil;
	goto T882;
	goto T939;
T939:;
	base[2]= cadr((V306));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk238)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T941;}
	V308= Cnil;
	goto T882;
	goto T941;
T941:;
	base[2]= caddr((V306));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk238)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T944;}
	V308= Cnil;
	goto T882;
	goto T944;
T944:;
	V314= list(2,VV[126],(V307));
	V315= make_cons(/* INLINE-ARGS */V314,Cnil);
	V316= (*(LnkLI239))((V307));
	V317= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V316,VV[126]));
	V318= list(3,VV[128],VV[129],cadr((V306)));
	V308= list(4,VV[29],/* INLINE-ARGS */V315,/* INLINE-ARGS */V317,list(4,VV[108],VV[127],/* INLINE-ARGS */V318,list(3,VV[130],VV[131],caddr((V306)))));
	goto T882;
	goto T933;
T933:;
	if(!(type_of((V309))==t_symbol)){
	goto T948;}
	V306= get((V309),VV[132],Cnil);
	if(((V306))==Cnil){
	goto T948;}
	if((structure_ref((V306),VV[132],11))!=Cnil){
	goto T953;}
	if((symbol_value(VV[133]))==Cnil){
	goto T954;}
	goto T953;
T953:;
	V308= (*(LnkLI245))((V307),(V306));
	goto T882;
	goto T954;
T954:;
	V308= list(3,VV[134],(V307),list(2,VV[113],(V309)));
	goto T882;
	goto T948;
T948:;
	V308= Cnil;}
	goto T882;
T882:;
	if((V308)==Cnil){
	{object V319 = Cnil;
	VMR33(V319)}}
	V320= list(3,VV[86],VV[123],(V308));
	{object V321 = (*(LnkLI235))(/* INLINE-ARGS */V320);
	VMR33(V321)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function STRUCT-TYPE-OPT	*/

static object LI34(V324,V325)

object V324;object V325;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	{register object V326;
	object V327;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V326= vs_base[0];
	V328= structure_ref((V325),VV[132],0);
	V327= (*(LnkLI246))(/* INLINE-ARGS */V328);
	V329= list(2,(V326),(V324));
	V330= make_cons(/* INLINE-ARGS */V329,Cnil);
	V331= list(2,VV[135],(V326));
	if(!(((long)length((V327)))<(3))){
	goto T962;}
	{object V334;
	object V335= (V327);
	if(endp(V335)){
	V333= Cnil;
	goto T964;}
	base[0]=V334=MMcons(Cnil,Cnil);
	goto T965;
T965:;
	V337= list(2,VV[137],(V326));
	(V334->c.c_car)= list(3,VV[48],/* INLINE-ARGS */V337,(*(LnkLI247))((V335->c.c_car)));
	V335=MMcdr(V335);
	if(endp(V335)){
	V333= base[0];
	goto T964;}
	V334=MMcdr(V334)=MMcons(Cnil,Cnil);
	goto T965;}
	goto T964;
T964:;
	V332= make_cons(VV[136],V333);
	goto T960;
	goto T962;
T962:;
	V338= structure_ref((V325),VV[132],0);
	V332= list(3,VV[134],(V326),(*(LnkLI247))(/* INLINE-ARGS */V338));
	goto T960;
T960:;
	{object V339 = list(3,VV[29],/* INLINE-ARGS */V330,list(3,VV[108],/* INLINE-ARGS */V331,V332));
	VMR34(V339)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-INCLUDED	*/

static object LI35(V341)

object V341;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	{object V342;
	V342= get((V341),VV[132],Cnil);
	V343= structure_ref((V342),VV[132],0);
	V347= structure_ref((V342),VV[132],3);
	{object V345;
	object V346= /* INLINE-ARGS */V347;
	if(endp(V346)){
	V344= Cnil;
	goto T968;}
	base[0]=V345=MMcons(Cnil,Cnil);
	goto T969;
T969:;
	(V345->c.c_cdr)= (*(LnkLI246))((V346->c.c_car));
	{object cdr_V345=MMcdr(V345);while(!endp(cdr_V345)) {cdr_V345=MMcdr(cdr_V345);V345=MMcdr(V345);}}
	V346=MMcdr(V346);
	if(endp(V346)){
	base[0]=base[0]->c.c_cdr;
	V344= base[0];
	goto T968;}
	goto T969;}
	goto T968;
T968:;
	{object V348 = make_cons(/* INLINE-ARGS */V343,V344);
	VMR35(V348)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1SCHAR	*/

static object LI36(V351,V352)

object V351;register object V352;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	{object V353= car((V352));
	if(type_of(V353)==t_cons||(V353)==Cnil){
	goto T972;}}
	{object V354 = Cnil;
	VMR36(V354)}
	goto T972;
T972:;
	if((symbol_value(VV[25]))==Cnil){
	goto T974;}
	{object V355 = Cnil;
	VMR36(V355)}
	goto T974;
T974:;
	if((cdr((V352)))!=Cnil){
	goto T976;}
	{object V356 = Cnil;
	VMR36(V356)}
	goto T976;
T976:;
	if((caar((V352)))==(VV[99])){
	goto T978;}
	{object V357 = Cnil;
	VMR36(V357)}
	goto T978;
T978:;
	V358= list(3,VV[138],list(3,VV[86],VV[15],cadr(car((V352)))),cadr((V352)));
	{object V359 = (*(LnkLI235))(/* INLINE-ARGS */V358);
	VMR36(V359)}
	return Cnil;
}
/*	local entry for function CONS-TO-LISTA	*/

static object LI37(V361)

object V361;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	{register object V362;
	base[0]= (V361);
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V362= vs_base[0];
	{object V363;
	if(type_of((V362))==t_cons){
	goto T983;}
	V363= Cnil;
	goto T982;
	goto T983;
T983:;
	if(type_of(car((V362)))==t_cons){
	goto T985;}
	V363= Cnil;
	goto T982;
	goto T985;
T985:;
	if((caar((V362)))==(VV[139])){
	goto T987;}
	V363= Cnil;
	goto T982;
	goto T987;
T987:;
	if(((long)length(cdar((V362))))==(2)){
	goto T989;}
	V363= Cnil;
	goto T982;
	goto T989;
T989:;
	base[0]= (V361);
	vs_top=(vs_base=base+0)+1;
	Lbutlast();
	vs_top=sup;
	V364= vs_base[0];
	V365= append(V364,cdar((V362)));
	V363= (*(LnkLI248))(/* INLINE-ARGS */V365);
	goto T982;
T982:;
	if(((V363))==Cnil){
	goto T994;}
	{object V366 = (V363);
	VMR37(V366)}
	goto T994;
T994:;
	{object V367 = (V361);
	VMR37(V367)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1CONS	*/

static object LI38(V370,V371)

object V370;object V371;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	{register object V372;
	if(((long)length((V371)))==(2)){
	goto T998;}
	V372= Cnil;
	goto T997;
	goto T998;
T998:;
	V372= (*(LnkLI248))((V371));
	goto T997;
T997:;
	if(((((V372))==((V371))?Ct:Cnil))==Cnil){
	goto T1000;}
	{object V373 = Cnil;
	VMR38(V373)}
	goto T1000;
T1000:;
	base[0]= (V372);
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V375= vs_base[0];
	if(!(equal(VV[140],V375))){
	goto T1004;}
	base[0]= (V372);
	vs_top=(vs_base=base+0)+1;
	Lbutlast();
	vs_top=sup;
	V376= vs_base[0];
	V374= make_cons(VV[141],V376);
	goto T1002;
	goto T1004;
T1004:;
	V374= make_cons(VV[28],(V372));
	goto T1002;
T1002:;
	{object V377 = (*(LnkLI235))(V374);
	VMR38(V377)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1NTH-CONDITION	*/

static object LI39(V379)

register object V379;
{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	if(((endp_prop((V379))?Ct:Cnil))==Cnil){
	goto T1010;}
	{object V380 = Cnil;
	VMR39(V380)}
	goto T1010;
T1010:;
	if(((endp_prop(cdr((V379)))?Ct:Cnil))==Cnil){
	goto T1012;}
	{object V381 = Cnil;
	VMR39(V381)}
	goto T1012;
T1012:;
	if(endp_prop(cddr((V379)))){
	goto T1014;}
	{object V382 = Cnil;
	VMR39(V382)}
	goto T1014;
T1014:;
	{object V383= car((V379));
	if(type_of(V383)==t_fixnum||
type_of(V383)==t_bignum||
type_of(V383)==t_ratio||
type_of(V383)==t_shortfloat||
type_of(V383)==t_longfloat||
type_of(V383)==t_complex){
	goto T1016;}}
	{object V384 = Cnil;
	VMR39(V384)}
	goto T1016;
T1016:;
	base[0]= small_fixnum(0);
	base[1]= car((V379));
	base[2]= small_fixnum(7);
	vs_top=(vs_base=base+0)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	{object V385 = vs_base[0];
	VMR39(V385)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1NTH	*/

static object LI40(V387)

register object V387;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	{object V389= car((V387));
	if(!eql(V389,VV[142]))goto T1022;
	V388= make_cons(VV[61],cdr((V387)));
	goto T1021;
	goto T1022;
T1022:;
	if(!eql(V389,VV[80]))goto T1023;
	V388= make_cons(VV[105],cdr((V387)));
	goto T1021;
	goto T1023;
T1023:;
	if(!eql(V389,VV[68]))goto T1024;
	V388= make_cons(VV[143],cdr((V387)));
	goto T1021;
	goto T1024;
T1024:;
	if(!eql(V389,VV[144]))goto T1025;
	V388= make_cons(VV[145],cdr((V387)));
	goto T1021;
	goto T1025;
T1025:;
	if(!eql(V389,VV[66]))goto T1026;
	V388= list(2,VV[61],make_cons(VV[146],cdr((V387))));
	goto T1021;
	goto T1026;
T1026:;
	if(!eql(V389,VV[147]))goto T1027;
	V388= list(2,VV[105],make_cons(VV[146],cdr((V387))));
	goto T1021;
	goto T1027;
T1027:;
	if(!eql(V389,VV[82]))goto T1028;
	V388= list(2,VV[143],make_cons(VV[146],cdr((V387))));
	goto T1021;
	goto T1028;
T1028:;
	if(!eql(V389,VV[84]))goto T1029;
	V388= list(2,VV[145],make_cons(VV[146],cdr((V387))));
	goto T1021;
	goto T1029;
T1029:;
	V388= Cnil;}
	goto T1021;
T1021:;
	{object V390 = (*(LnkLI235))(V388);
	VMR40(V390)}
	return Cnil;
}
/*	local entry for function C1NTHCDR-CONDITION	*/

static object LI41(V392)

register object V392;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	if(((endp_prop((V392))?Ct:Cnil))==Cnil){
	goto T1030;}
	{object V393 = Cnil;
	VMR41(V393)}
	goto T1030;
T1030:;
	if(((endp_prop(cdr((V392)))?Ct:Cnil))==Cnil){
	goto T1032;}
	{object V394 = Cnil;
	VMR41(V394)}
	goto T1032;
T1032:;
	if(endp_prop(cddr((V392)))){
	goto T1034;}
	{object V395 = Cnil;
	VMR41(V395)}
	goto T1034;
T1034:;
	{object V396= car((V392));
	if(type_of(V396)==t_fixnum||
type_of(V396)==t_bignum||
type_of(V396)==t_ratio||
type_of(V396)==t_shortfloat||
type_of(V396)==t_longfloat||
type_of(V396)==t_complex){
	goto T1036;}}
	{object V397 = Cnil;
	VMR41(V397)}
	goto T1036;
T1036:;
	base[0]= small_fixnum(0);
	base[1]= car((V392));
	base[2]= small_fixnum(7);
	vs_top=(vs_base=base+0)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	{object V398 = vs_base[0];
	VMR41(V398)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1NTHCDR	*/

static object LI42(V400)

register object V400;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	{object V402= car((V400));
	if(!eql(V402,VV[142]))goto T1042;
	V401= cadr((V400));
	goto T1041;
	goto T1042;
T1042:;
	if(!eql(V402,VV[80]))goto T1043;
	V401= make_cons(VV[148],cdr((V400)));
	goto T1041;
	goto T1043;
T1043:;
	if(!eql(V402,VV[68]))goto T1044;
	V401= make_cons(VV[149],cdr((V400)));
	goto T1041;
	goto T1044;
T1044:;
	if(!eql(V402,VV[144]))goto T1045;
	V401= make_cons(VV[150],cdr((V400)));
	goto T1041;
	goto T1045;
T1045:;
	if(!eql(V402,VV[66]))goto T1046;
	V401= make_cons(VV[146],cdr((V400)));
	goto T1041;
	goto T1046;
T1046:;
	if(!eql(V402,VV[147]))goto T1047;
	V401= list(2,VV[148],make_cons(VV[146],cdr((V400))));
	goto T1041;
	goto T1047;
T1047:;
	if(!eql(V402,VV[82]))goto T1048;
	V401= list(2,VV[149],make_cons(VV[146],cdr((V400))));
	goto T1041;
	goto T1048;
T1048:;
	if(!eql(V402,VV[84]))goto T1049;
	V401= list(2,VV[150],make_cons(VV[146],cdr((V400))));
	goto T1041;
	goto T1049;
T1049:;
	V401= Cnil;}
	goto T1041;
T1041:;
	{object V403 = (*(LnkLI235))(V401);
	VMR42(V403)}
	return Cnil;
}
/*	local entry for function C1RPLACA-NTHCDR	*/

static object LI43(V405)

register object V405;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	{object V406;
	V406= (VFUN_NARGS=0,(*(LnkLI208))());
	if(endp_prop((V405))){
	goto T1052;}
	if(endp_prop(cdr((V405)))){
	goto T1052;}
	if(!(endp_prop(cddr((V405))))){
	goto T1051;}
	goto T1052;
T1052:;
	V407 = make_fixnum((long)length((V405)));
	(void)((*(LnkLI209))(VV[151],small_fixnum(3),V407));
	goto T1051;
T1051:;
	if(endp_prop(cdddr((V405)))){
	goto T1058;}
	V408 = make_fixnum((long)length((V405)));
	(void)((*(LnkLI209))(VV[151],small_fixnum(3),V408));
	goto T1058;
T1058:;
	{object V409= cadr((V405));
	if(!(type_of(V409)==t_fixnum||
type_of(V409)==t_bignum||
type_of(V409)==t_ratio||
type_of(V409)==t_shortfloat||
type_of(V409)==t_longfloat||
type_of(V409)==t_complex)){
	goto T1062;}}
	base[1]= small_fixnum(0);
	base[2]= cadr((V405));
	base[3]= small_fixnum(10);
	vs_top=(vs_base=base+1)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1062;}
	{register object V410;
	object V411;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V410= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V411= vs_base[0];
	V412= list(2,(V410),car((V405)));
	V413= list(2,/* INLINE-ARGS */V412,list(2,(V411),caddr((V405))));
	V414= list(3,VV[152],(V410),list(3,VV[153],cadr((V405)),(V410)));
	V415= list(5,VV[29],/* INLINE-ARGS */V413,/* INLINE-ARGS */V414,list(3,VV[152],list(2,VV[61],(V410)),(V411)),(V411));
	{object V416 = (*(LnkLI235))(/* INLINE-ARGS */V415);
	VMR43(V416)}}
	goto T1062;
T1062:;
	{object V417 = list(4,VV[4],(V406),VV[151],(*(LnkLI219))((V405),(V406)));
	VMR43(V417)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FAST-READ	*/

static object LI44(V420,V421)

register object V420;object V421;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	if((symbol_value(VV[25]))!=Cnil){
	goto T1072;}
	if(!(number_compare(symbol_value(VV[154]),small_fixnum(2))<0)){
	goto T1072;}
	if((cadr((V420)))!=Cnil){
	goto T1072;}
	base[0]= VV[155];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1072;}
	if(!(type_of(car((V420)))!=t_cons)){
	goto T1082;}{object V422;
	V422= car((V420));
	if(V422==Cnil)goto T1085;
	goto T1084;
	goto T1085;
T1085:;}
	V420= make_cons(VV[156],cdr((V420)));
	goto T1084;
T1084:;
	{register object V423;
	object V424;
	V423= car((V420));
	V424= caddr((V420));
	V425= list(2,VV[160],(V423));
	V426= list(3,VV[161],VV[162],list(2,VV[163],(V423)));
	V427= list(3,VV[50],VV[162],small_fixnum(-1));
	V428= list(2,list(3,VV[108],/* INLINE-ARGS */V427,list(2,VV[164],(V423))),(V424));
	if(!(((V421))==(VV[165]))){
	goto T1092;}
	V429= VV[166];
	goto T1090;
	goto T1092;
T1092:;
	V429= VV[162];
	goto T1090;
T1090:;
	V430= list(3,/* INLINE-ARGS */V425,/* INLINE-ARGS */V426,list(3,VV[159],/* INLINE-ARGS */V428,list(2,Ct,V429)));
	{object V431 = list(4,VV[29],VV[157],VV[158],list(3,VV[159],/* INLINE-ARGS */V430,list(2,Ct,list(3,(V421),(V423),(V424)))));
	VMR44(V431)}}
	goto T1082;
T1082:;
	V432= list(2,VV[167],car((V420)));
	V433= make_cons(/* INLINE-ARGS */V432,Cnil);
	V434= (*(LnkLI239))(car((V420)));
	V435= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V434,VV[167]));
	V436= make_cons(VV[167],cdr((V420)));
	{object V437 = list(4,VV[29],/* INLINE-ARGS */V433,/* INLINE-ARGS */V435,(*(LnkLI249))(/* INLINE-ARGS */V436,(V421)));
	VMR44(V437)}
	goto T1072;
T1072:;
	{object V438 = Cnil;
	VMR44(V438)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1READ-BYTE	*/

static object LI45(V441,V442)

object V441;object V442;
{	 VMB45 VMS45 VMV45
	bds_check;
	goto TTL;
TTL:;
	{object V443;
	V443= Cnil;
	V443= (*(LnkLI249))((V442),VV[168]);
	if(((V443))==Cnil){
	goto T1097;}
	bds_bind(VV[154],small_fixnum(10));
	{object V444 = (*(LnkLI235))((V443));
	bds_unwind1;
	VMR45(V444)}
	goto T1097;
T1097:;
	{object V445 = Cnil;
	VMR45(V445)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1READ-CHAR	*/

static object LI46(V448,V449)

object V448;object V449;
{	 VMB46 VMS46 VMV46
	bds_check;
	goto TTL;
TTL:;
	{object V450;
	V450= Cnil;
	V450= (*(LnkLI249))((V449),VV[165]);
	if(((V450))==Cnil){
	goto T1103;}
	bds_bind(VV[154],small_fixnum(10));
	{object V451 = (*(LnkLI235))((V450));
	bds_unwind1;
	VMR46(V451)}
	goto T1103;
T1103:;
	{object V452 = Cnil;
	VMR46(V452)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CFAST-WRITE	*/

static object LI47(V455,V456)

object V455;object V456;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	if((symbol_value(VV[25]))!=Cnil){
	goto T1107;}
	if(!(number_compare(symbol_value(VV[154]),small_fixnum(2))<0)){
	goto T1107;}
	base[0]= VV[155];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1107;}
	{register object V457;
	V457= cadr((V455));
	if((V457)!=Cnil){
	goto T1115;}
	V457= VV[169];
	goto T1115;
T1115:;
	if(!(type_of((V457))!=t_cons)){
	goto T1118;}
	V458= list(2,VV[160],(V457));
	V459= list(2,/* INLINE-ARGS */V458,list(3,VV[86],VV[96],list(3,VV[170],VV[171],(V457))));
	{object V460 = list(3,VV[159],/* INLINE-ARGS */V459,list(2,Ct,list(3,(V456),VV[171],(V457))));
	VMR47(V460)}
	goto T1118;
T1118:;
	V461= list(2,VV[172],(V457));
	V462= make_cons(/* INLINE-ARGS */V461,Cnil);
	V463= (*(LnkLI239))((V457));
	V464= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V463,VV[172]));
	V465= list(2,VV[171],VV[172]);
	{object V466 = list(4,VV[29],/* INLINE-ARGS */V462,/* INLINE-ARGS */V464,(*(LnkLI250))(/* INLINE-ARGS */V465,(V456)));
	VMR47(V466)}}
	goto T1107;
T1107:;
	{object V467 = Cnil;
	VMR47(V467)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1WRITE-BYTE	*/

static object LI48(V470,V471)

object V470;register object V471;
{	 VMB48 VMS48 VMV48
	bds_check;
	goto TTL;
TTL:;
	{object V472;
	V472= (*(LnkLI250))((V471),VV[173]);
	if(((V472))==Cnil){
	goto T1123;}
	bds_bind(VV[154],small_fixnum(10));
	V473= list(2,VV[171],car((V471)));
	V474= make_cons(/* INLINE-ARGS */V473,Cnil);
	if(!(type_of(car((V471)))!=t_cons)){
	goto T1127;}
	V475= car((V471));
	goto T1125;
	goto T1127;
T1127:;
	V475= VV[171];
	goto T1125;
T1125:;
	V476= list(5,VV[29],/* INLINE-ARGS */V474,VV[174],(V472),V475);
	{object V477 = (*(LnkLI235))(/* INLINE-ARGS */V476);
	bds_unwind1;
	VMR48(V477)}
	goto T1123;
T1123:;
	{object V478 = Cnil;
	VMR48(V478)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1WRITE-CHAR	*/

static object LI49(V481,V482)

object V481;register object V482;
{	 VMB49 VMS49 VMV49
	bds_check;
	goto TTL;
TTL:;
	{object V483;
	V483= (*(LnkLI250))((V482),VV[175]);
	if(((V483))==Cnil){
	goto T1132;}
	bds_bind(VV[154],small_fixnum(10));
	V484= list(2,VV[171],car((V482)));
	V485= make_cons(/* INLINE-ARGS */V484,Cnil);
	if(!(type_of(car((V482)))!=t_cons)){
	goto T1136;}
	V486= car((V482));
	goto T1134;
	goto T1136;
T1136:;
	V486= VV[171];
	goto T1134;
T1134:;
	V487= list(5,VV[29],/* INLINE-ARGS */V485,VV[176],(V483),V486);
	{object V488 = (*(LnkLI235))(/* INLINE-ARGS */V487);
	bds_unwind1;
	VMR49(V488)}
	goto T1132;
T1132:;
	{object V489 = Cnil;
	VMR49(V489)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function AET-C-TYPE	*/

static object LI50(V491)

object V491;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V492= (V491);
	if((V492!= Ct))goto T1138;
	{object V493 = VV[177];
	VMR50(V493)}
	goto T1138;
T1138:;
	if((V492!= VV[118])
	&& (V492!= VV[251]))goto T1139;
	{object V494 = VV[178];
	VMR50(V494)}
	goto T1139;
T1139:;
	if((V492!= VV[96]))goto T1140;
	{object V495 = VV[179];
	VMR50(V495)}
	goto T1140;
T1140:;
	if((V492!= VV[252]))goto T1141;
	{object V496 = VV[180];
	VMR50(V496)}
	goto T1141;
T1141:;
	if((V492!= VV[253]))goto T1142;
	{object V497 = VV[181];
	VMR50(V497)}
	goto T1142;
T1142:;
	if((V492!= VV[254]))goto T1143;
	{object V498 = VV[182];
	VMR50(V498)}
	goto T1143;
T1143:;
	if((V492!= VV[253]))goto T1144;
	{object V499 = VV[183];
	VMR50(V499)}
	goto T1144;
T1144:;
	if((V492!= VV[255]))goto T1145;
	{object V500 = VV[184];
	VMR50(V500)}
	goto T1145;
T1145:;
	if((V492!= VV[256]))goto T1146;
	{object V501 = VV[185];
	VMR50(V501)}
	goto T1146;
T1146:;
	FEerror("The ECASE key value ~s is illegal.",1,V492);
	{object V502 = Cnil;
	VMR50(V502)}}
	return Cnil;
}
/*	local entry for function CO1VECTOR-PUSH	*/

static object LI51(V505,V506)

object V505;register object V506;
{	 VMB51 VMS51 VMV51
	bds_check;
	goto TTL;
TTL:;
	if((symbol_value(VV[25]))!=Cnil){
	goto T1149;}
	if(number_compare(symbol_value(VV[154]),small_fixnum(3))>0){
	goto T1149;}
	if((cdr((V506)))==Cnil){
	goto T1149;}
	bds_bind(VV[154],small_fixnum(10));
	V507= list(2,VV[187],car((V506)));
	V508= listA(3,/* INLINE-ARGS */V507,list(2,VV[188],cadr((V506))),VV[189]);
	V509= (*(LnkLI239))(cadr((V506)));
	V510= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V509,VV[188]));
	V511= (*(LnkLI239))(car((V506)));
	V512= list(2,VV[106],list(3,VV[107],/* INLINE-ARGS */V511,VV[187]));
	if(!(((V505))==(VV[192]))){
	goto T1157;}
	V513= listA(4,VV[192],VV[187],VV[188],cddr((V506)));
	goto T1155;
	goto T1157;
T1157:;
	V513= Cnil;
	goto T1155;
T1155:;
	V514= list(6,VV[186],/* INLINE-ARGS */V508,VV[190],/* INLINE-ARGS */V510,/* INLINE-ARGS */V512,list(3,VV[159],VV[191],list(2,Ct,V513)));
	{object V515 = (*(LnkLI235))(/* INLINE-ARGS */V514);
	bds_unwind1;
	VMR51(V515)}
	goto T1149;
T1149:;
	{object V516 = Cnil;
	VMR51(V516)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CONSTANT-FOLD-P	*/

static object LI52(V518)

register object V518;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	base[0]= (V518);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1160;}
	{object V519 = Ct;
	VMR52(V519)}
	goto T1160;
T1160:;
	if(!(type_of((V518))!=t_cons)){
	goto T1164;}
	{object V520 = Cnil;
	VMR52(V520)}
	goto T1164;
T1164:;
	if(!((car((V518)))==(VV[86]))){
	goto T1167;}
	V518= caddr((V518));
	goto TTL;
	goto T1167;
T1167:;
	if(!(type_of(car((V518)))==t_symbol)){
	goto T1172;}
	V521= get(car((V518)),VV[193],Cnil);
	if(!((V521)==(VV[194]))){
	goto T1172;}
	{register object V522;
	register object V523;
	V522= cdr((V518));
	V523= car((V522));
	goto T1181;
T1181:;
	if(!(endp_prop((V522)))){
	goto T1182;}
	goto T1177;
	goto T1182;
T1182:;{object V524;
	V524= (*(LnkLI257))((V523));
	if(V524==Cnil)goto T1187;
	goto T1186;
	goto T1187;
T1187:;}
	{object V525 = Cnil;
	VMR52(V525)}
	goto T1186;
T1186:;
	V522= cdr((V522));
	V523= car((V522));
	goto T1181;}
	goto T1177;
T1177:;
	{object V526 = Ct;
	VMR52(V526)}
	goto T1172;
T1172:;
	{object V527 = Cnil;
	VMR52(V527)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1CONSTANT-FOLD	*/

static object LI53(V530,V531)

object V530;object V531;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	base[0]= (V530);
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1195;}
	{register object V532;
	register object V533;
	V532= (V531);
	V533= car((V532));
	goto T1203;
T1203:;
	if(!(endp_prop((V532)))){
	goto T1204;}
	goto T1199;
	goto T1204;
T1204:;{object V534;
	V534= (*(LnkLI257))((V533));
	if(V534==Cnil)goto T1209;
	goto T1208;
	goto T1209;
T1209:;}
	{object V535 = Cnil;
	VMR53(V535)}
	goto T1208;
T1208:;
	V532= cdr((V532));
	V533= car((V532));
	goto T1203;}
	goto T1199;
T1199:;
	base[0]= make_cons((V530),(V531));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk258)();
	vs_top=sup;
	V536= vs_base[0];
	{object V537 = (*(LnkLI235))(V536);
	VMR53(V537)}
	goto T1195;
T1195:;
	{object V538 = Cnil;
	VMR53(V538)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1SPECIAL-FIX-DECL	*/

static object LI54(V541,V542)

object V541;register object V542;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	{object V544= (V541);
	if((V544!= VV[260])
	&& (V544!= VV[261]))goto T1219;
	V545= car((V542));
	V546= cadr((V542));
	base[0]= cddr((V542));
	vs_top=(vs_base=base+0)+1;
	L55(base);
	vs_top=sup;
	V547= vs_base[0];
	V543= listA(4,(V541),/* INLINE-ARGS */V545,/* INLINE-ARGS */V546,V547);
	goto T1218;
	goto T1219;
T1219:;
	if((V544!= VV[262])
	&& (V544!= VV[263]))goto T1222;
	V548= car((V542));
	base[0]= cdr((V542));
	vs_top=(vs_base=base+0)+1;
	L55(base);
	vs_top=sup;
	V549= vs_base[0];
	V543= listA(3,(V541),/* INLINE-ARGS */V548,V549);
	goto T1218;
	goto T1222;
T1222:;
	V543= Cnil;}
	goto T1218;
T1218:;
	V550= (*(LnkLI259))(V543);
	{object V551 = (*(LnkLI235))(/* INLINE-ARGS */V550);
	VMR54(V551)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CO1SUBLIS	*/

static object LI56(V554,V555)

object V554;register object V555;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{register object V556;
	V556= Cnil;switch((long)length((V555))){
	case 2:
	goto T1230;
T1230:;
	V556= VV[50];
	if((VV[50])!=Cnil){
	goto T1227;}
	goto T1228;
	case 4:
	goto T1231;
T1231:;
	if((caddr((V555)))==(VV[51])){
	goto T1234;}
	goto T1228;
	goto T1234;
T1234:;
	{register object x= cadddr((V555)),V557= VV[195];
	while(!endp(V557))
	if(eql(x,V557->c.c_car)){
	goto T1238;
	}else V557=V557->c.c_cdr;
	goto T1237;}
	goto T1238;
T1238:;
	V556= VV[196];
	if((VV[196])!=Cnil){
	goto T1227;}
	goto T1228;
	goto T1237;
T1237:;
	{register object x= cadddr((V555)),V558= VV[197];
	while(!endp(V558))
	if(eql(x,V558->c.c_car)){
	goto T1242;
	}else V558=V558->c.c_cdr;
	goto T1241;}
	goto T1242;
T1242:;
	V556= VV[50];
	if((VV[50])!=Cnil){
	goto T1227;}
	goto T1228;
	goto T1241;
T1241:;
	{register object x= cadddr((V555)),V559= VV[198];
	while(!endp(V559))
	if(eql(x,V559->c.c_car)){
	goto T1246;
	}else V559=V559->c.c_cdr;
	goto T1245;}
	goto T1246;
T1246:;
	V556= VV[48];
	if((VV[48])!=Cnil){
	goto T1227;}
	goto T1228;
	goto T1245;
T1245:;
	goto T1228;
	default:
	goto T1232;
T1232:;
	goto T1228;}
	goto T1228;
T1228:;
	{object V560 = Cnil;
	VMR55(V560)}
	goto T1227;
T1227:;
	{object V561;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V561= vs_base[0];
	V562= list(2,(V561),car((V555)));
	V563= make_cons(/* INLINE-ARGS */V562,Cnil);
	V564= cadr((V555));
	V565= list(3,VV[29],/* INLINE-ARGS */V563,list(4,VV[199],(V561),/* INLINE-ARGS */V564,list(2,VV[113],(V556))));
	{object V566 = (*(LnkLI235))(/* INLINE-ARGS */V565);
	VMR55(V566)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SUBLIS1-INLINE	*/

static object LI57(V570,V571,V572)

object V570;object V571;object V572;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V573;
	V574= (VFUN_NARGS=4,(*(LnkLI264))(cadr((V572)),symbol_value(VV[200]),VV[201],VV[105]));
	V573= car(/* INLINE-ARGS */V574);{object V575;
	{register object x= (V573),V576= VV[202];
	while(!endp(V576))
	if(eql(x,V576->c.c_car)){
	V575= V576;
	goto T1252;
	}else V576=V576->c.c_cdr;
	V575= Cnil;}
	goto T1252;
T1252:;
	if(V575==Cnil)goto T1251;
	goto T1250;
	goto T1251;
T1251:;}
	base[0]= VV[203];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T1250;
T1250:;
	princ_str("(check_alist(",VV[7]);
	(void)((*(LnkLI213))((V570)));
	princ_str("),sublis1(",VV[7]);
	(void)((*(LnkLI213))((V570)));
	princ_char(44,VV[7]);
	(void)((*(LnkLI213))((V571)));
	princ_char(44,VV[7]);
	base[0]= Cnil;
	base[1]= VV[204];
	base[2]= (V573);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V577= vs_base[0];
	(void)((*(LnkLI213))(V577));
	{object V578 = Cnil;
	VMR56(V578)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1LIST-NTH	*/

static object LI58(V580)

register object V580;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;
	{register object V581;
	V581= (VFUN_NARGS=0,(*(LnkLI208))());
	if(endp_prop((V580))){
	goto T1268;}
	if(!(endp_prop(cdr((V580))))){
	goto T1267;}
	goto T1268;
T1268:;
	V582 = make_fixnum((long)length((V580)));
	(void)((*(LnkLI209))(VV[151],small_fixnum(2),V582));
	goto T1267;
T1267:;
	if(endp_prop(cddr((V580)))){
	goto T1272;}
	V583 = make_fixnum((long)length((V580)));
	(void)((*(LnkLI209))(VV[151],small_fixnum(2),V583));
	goto T1272;
T1272:;
	{object V584= car((V580));
	if(!(type_of(V584)==t_fixnum||
type_of(V584)==t_bignum||
type_of(V584)==t_ratio||
type_of(V584)==t_shortfloat||
type_of(V584)==t_longfloat||
type_of(V584)==t_complex)){
	goto T1276;}}
	base[1]= small_fixnum(0);
	base[2]= car((V580));
	base[3]= small_fixnum(10);
	vs_top=(vs_base=base+1)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1276;}
	V585= car((V580));
	V586= make_cons(cadr((V580)),Cnil);
	{object V587 = list(4,VV[205],(V581),/* INLINE-ARGS */V585,(*(LnkLI219))(/* INLINE-ARGS */V586,(V581)));
	VMR57(V587)}
	goto T1276;
T1276:;
	{object V588 = list(4,VV[4],(V581),VV[206],(*(LnkLI219))((V580),(V581)));
	VMR57(V588)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2LIST-NTH-IMMEDIATE	*/

static object LI59(V591,V592)

object V591;object V592;
{	 VMB58 VMS58 VMV58
	bds_check;
	goto TTL;
TTL:;
	{object V593;
	setq(VV[22],number_plus(symbol_value(VV[22]),small_fixnum(1)));
	V593= symbol_value(VV[22]);
	bds_bind(VV[20],symbol_value(VV[20]));
	bds_bind(VV[42],small_fixnum(0));
	V592= (VFUN_NARGS=2,(*(LnkLI232))((V592),VV[207]));
	princ_str("\n	{object V",VV[7]);
	(void)((*(LnkLI213))((V593)));
	princ_str("= ",VV[7]);
	if((symbol_value(VV[25]))==Cnil){
	goto T1293;}
	{register long V594;
	register long V595;
	V594= fix((V591));
	V595= 0;
	goto T1299;
T1299:;
	if(!((V595)>=(V594))){
	goto T1300;}
	goto T1295;
	goto T1300;
T1300:;
	princ_str("cdr(",VV[7]);
	V595= (long)(V595)+1;
	goto T1299;}
	goto T1295;
T1295:;
	(void)((*(LnkLI213))(car((V592))));
	{register long V596;
	register long V597;
	V596= fix((V591));
	V597= 0;
	goto T1315;
T1315:;
	if(!((V597)>=(V596))){
	goto T1316;}
	goto T1311;
	goto T1316;
T1316:;
	princ_char(41,VV[7]);
	V597= (long)(V597)+1;
	goto T1315;}
	goto T1311;
T1311:;
	princ_char(59,VV[7]);
	princ_str("\n	if((type_of(V",VV[7]);
	(void)((*(LnkLI213))((V593)));
	princ_str(")!=t_cons) && (",VV[7]);
	(void)((*(LnkLI213))(car((V592))));
	princ_str("!= Cnil))",VV[7]);
	princ_str("\n	 FEwrong_type_argument(Scons,V",VV[7]);
	(void)((*(LnkLI213))((V593)));
	princ_str(");",VV[7]);
	goto T1291;
	goto T1293;
T1293:;
	princ_str("\n	",VV[7]);
	(void)((*(LnkLI213))(car((V592))));
	{register long V598;
	register long V599;
	V598= fix((V591));
	V599= 0;
	goto T1343;
T1343:;
	if(!((V599)>=(V598))){
	goto T1344;}
	goto T1339;
	goto T1344;
T1344:;
	princ_str("\n	->c.c_cdr",VV[7]);
	V599= (long)(V599)+1;
	goto T1343;}
	goto T1339;
T1339:;
	princ_char(59,VV[7]);
	goto T1291;
T1291:;
	V600= list(2,VV[61],(V593));
	(void)((VFUN_NARGS=1,(*(LnkLI214))(/* INLINE-ARGS */V600)));
	princ_char(125,VV[7]);
	{object V601 = (*(LnkLI233))();
	bds_unwind1;
	bds_unwind1;
	VMR58(V601)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function FIXUP	*/

static void L55(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_reserve(VM59);
	{register object V602;
	check_arg(1);
	V602=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V603;
	V603= Cnil;
	goto T1359;
T1359:;
	if(!(type_of((V602))==t_cons)){
	goto T1362;}
	goto T1361;
	goto T1362;
T1362:;
	goto T1360;
	goto T1361;
T1361:;
	{register object V604;
	V604= car((V602));
	if(!(type_of((V604))==t_cons)){
	goto T1367;}
	V604= (*(LnkLI259))((V604));
	if(((V604))==Cnil){
	goto T1367;}
	if(!((car((V604)))==(VV[106]))){
	goto T1367;}
	{register object V605;
	V605= (V604);
	V603= make_cons((V605),(V603));}
	{register object V606;
	V606= car((V602));
	V602= cdr((V602));
	goto T1364;}
	goto T1367;
T1367:;
	goto T1360;}
	goto T1364;
T1364:;
	goto T1359;
	goto T1360;
T1360:;
	V607= nreverse((V603));
	base[1]= nconc(/* INLINE-ARGS */V607,(V602));
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

