
#include "cmpinclude.h"
#include "gcl_cmpflet.h"
void init_gcl_cmpflet(){do_init(VV);}
/*	local entry for function MAKE-FUN	*/

static object LI1(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{object V1;
	object V2;
	object V3;
	object V4;
	object V5;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI1key,first,ap);
	V1=(Vcs[0]);
	V2=(Vcs[1]);
	V3=(Vcs[2]);
	V4=(Vcs[3]);
	V5=(Vcs[4]);
	base[0]= VV[0];
	base[1]= (V1);
	base[2]= (V2);
	base[3]= (V3);
	base[4]= (V4);
	base[5]= (V5);
	vs_top=(vs_base=base+0)+6;
	siLmake_structure();
	vs_top=sup;
	{object V6 = vs_base[0];
	VMR1(V6)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function C1FLET	*/

static object LI2(V8)

object V8;
{	 VMB2 VMS2 VMV2
	bds_check;
	goto TTL;
TTL:;
	{object V9;
	object V10;
	object V11;
	object V12;
	object V13;
	object V14;
	object V15;
	object V16;
	object V17;
	V9= Cnil;
	V10= Cnil;
	V11= Cnil;
	V12= Cnil;
	V13= Cnil;
	V14= Cnil;
	V15= Cnil;
	V16= Cnil;
	V17= Cnil;
	if(!(endp_prop((V8)))){
	goto T16;}
	(void)((*(LnkLI42))(VV[1],small_fixnum(1),small_fixnum(0)));
	goto T16;
T16:;
	bds_bind(VV[2],symbol_value(VV[2]));
	{register object V18;
	register object V19;
	V18= car((V8));
	V19= car((V18));
	goto T24;
T24:;
	if(!(endp_prop((V18)))){
	goto T25;}
	goto T20;
	goto T25;
T25:;
	if(endp_prop((V19))){
	goto T30;}
	if(!(type_of(car((V19)))==t_symbol)){
	goto T30;}
	if(!(endp_prop(cdr((V19))))){
	goto T29;}
	goto T30;
T30:;
	(void)((VFUN_NARGS=2,(*(LnkLI43))(VV[3],(V19))));
	goto T29;
T29:;
	{object V20;
	V20= (VFUN_NARGS=6,(*(LnkLI44))(VV[4],car((V19)),VV[5],Cnil,VV[6],Cnil));
	(VV[2]->s.s_dbind)= make_cons(V20,(VV[2]->s.s_dbind));
	{object V22;
	V22= list(2,(V20),cdr((V19)));
	V15= make_cons((V22),(V15));}}
	V18= cdr((V18));
	V19= car((V18));
	goto T24;}
	goto T20;
T20:;
	base[1]= cdr((V8));
	base[2]= Ct;
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	if(vs_base<vs_top){
	V9= vs_base[0];
	vs_base++;
	}else{
	V9= Cnil;}
	if(vs_base<vs_top){
	V10= vs_base[0];
	vs_base++;
	}else{
	V10= Cnil;}
	if(vs_base<vs_top){
	V11= vs_base[0];
	vs_base++;
	}else{
	V11= Cnil;}
	if(vs_base<vs_top){
	V12= vs_base[0];
	vs_base++;
	}else{
	V12= Cnil;}
	if(vs_base<vs_top){
	V13= vs_base[0];
	}else{
	V13= Cnil;}
	vs_top=sup;
	bds_bind(VV[7],symbol_value(VV[7]));
	(void)((*(LnkLI46))((V10)));
	(void)((*(LnkLI47))(Cnil,(V11),(V12)));
	V9= (*(LnkLI48))((V13),(V9));
	bds_unwind1;
	base[1]= cadr((V9));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk49)();
	vs_top=sup;
	V14= vs_base[0];
	bds_unwind1;
	{register object V23;
	register object V24;
	V23= reverse((V15));
	V24= car((V23));
	goto T61;
T61:;
	if(!(endp_prop((V23)))){
	goto T62;}
	goto T57;
	goto T62;
T62:;
	if((structure_ref(car((V24)),VV[0],2))==Cnil){
	goto T66;}
	base[2]= make_cons(VV[8],symbol_value(VV[7]));
	base[3]= make_cons(VV[8],symbol_value(VV[2]));
	base[4]= make_cons(VV[8],symbol_value(VV[9]));
	base[5]= make_cons(VV[8],symbol_value(VV[10]));
	bds_bind(VV[7],base[2]);
	bds_bind(VV[2],base[3]);
	bds_bind(VV[9],base[4]);
	bds_bind(VV[10],base[5]);
	{object V25;
	V26= cadr((V24));
	V27= structure_ref(car((V24)),VV[0],0);
	V25= (VFUN_NARGS=2,(*(LnkLI50))(/* INLINE-ARGS */V26,/* INLINE-ARGS */V27));
	(void)((*(LnkLI51))((V14),cadr((V25))));
	{object V28;
	V28= list(2,car((V24)),(V25));
	V17= make_cons((V28),(V17));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}}
	goto T66;
T66:;
	if((structure_ref(car((V24)),VV[0],1))==Cnil){
	goto T77;}
	base[2]= make_cons(VV[11],symbol_value(VV[9]));
	base[3]= make_cons(VV[11],symbol_value(VV[10]));
	base[4]= make_cons(VV[11],symbol_value(VV[7]));
	bds_bind(VV[9],base[2]);
	bds_bind(VV[10],base[3]);
	bds_bind(VV[7],base[4]);
	{object V29;
	V30= cadr((V24));
	V31= structure_ref(car((V24)),VV[0],0);
	V29= (VFUN_NARGS=2,(*(LnkLI50))(/* INLINE-ARGS */V30,/* INLINE-ARGS */V31));
	(void)((*(LnkLI51))((V14),cadr((V29))));
	{object V32;
	V32= list(2,car((V24)),(V29));
	V16= make_cons((V32),(V16));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}}
	goto T77;
T77:;
	if((structure_ref(car((V24)),VV[0],1))!=Cnil){
	goto T88;}
	if((structure_ref(car((V24)),VV[0],2))==Cnil){
	goto T87;}
	goto T88;
T88:;
	V33= car((V24));
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	(void)(structure_set(/* INLINE-ARGS */V33,VV[0],3,symbol_value(VV[12])));
	goto T87;
T87:;
	V23= cdr((V23));
	V24= car((V23));
	goto T61;}
	goto T57;
T57:;
	if(((V16))!=Cnil){
	goto T98;}
	if(((V17))==Cnil){
	goto T99;}
	goto T98;
T98:;
	V34= reverse((V16));
	{object V35 = list(5,VV[1],(V14),/* INLINE-ARGS */V34,reverse((V17)),(V9));
	VMR2(V35)}
	goto T99;
T99:;
	{object V36 = (V9);
	VMR2(V36)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C2FLET	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	bds_check;
	{object V37;
	object V38;
	object V39;
	check_arg(3);
	V37=(base[0]);
	V38=(base[1]);
	V39=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[13],symbol_value(VV[13]));
	bds_bind(VV[14],symbol_value(VV[14]));
	bds_bind(VV[15],symbol_value(VV[15]));
	{register object V40;
	object V41;
	V40= (V37);
	V41= car((V40));
	goto T107;
T107:;
	if(!(endp_prop((V40)))){
	goto T108;}
	goto T103;
	goto T108;
T108:;
	(void)(structure_set(car((V41)),VV[0],4,symbol_value(VV[16])));
	{object V42;{object V43;
	V43= (VV[14]->s.s_dbind);{object V44;
	V44= (VV[15]->s.s_dbind);
	V42= list(5,Cnil,V43,V44,car((V41)),cadr((V41)));}}
	setq(VV[17],make_cons((V42),symbol_value(VV[17])));}
	V40= cdr((V40));
	V41= car((V40));
	goto T107;}
	goto T103;
T103:;
	{register object V45;
	register object V46;
	V45= (V38);
	V46= car((V45));
	goto T125;
T125:;
	if(!(endp_prop((V45)))){
	goto T126;}
	goto T121;
	goto T126;
T126:;
	{object V47;
	if(((VV[14]->s.s_dbind))!=Cnil){
	goto T134;}
	V48= Cnil;
	goto T132;
	goto T134;
T134:;
	V48= make_cons(small_fixnum(0),small_fixnum(0));
	goto T132;
T132:;{object V49;
	V49= (VV[15]->s.s_dbind);
	V47= list(5,VV[18],V48,V49,car((V46)),cadr((V46)));}
	setq(VV[17],make_cons((V47),symbol_value(VV[17])));}
	{object V50;
	V50= car((V46));
	setq(VV[19],make_cons((V50),symbol_value(VV[19])));}
	{register object V51;
	V51= car((V46));
	V52= (*(LnkLI52))();
	(void)(structure_set((V51),VV[0],1,/* INLINE-ARGS */V52));
	princ_str("\n	",VV[20]);
	V53= structure_ref((V51),VV[0],1);
	(void)((*(LnkLI53))(/* INLINE-ARGS */V53));
	princ_str("=make_cclosure_new(LC",VV[20]);
	V54= structure_ref((V51),VV[0],3);
	(void)((*(LnkLI54))(/* INLINE-ARGS */V54));
	princ_str(",Cnil,",VV[20]);
	(void)((VFUN_NARGS=0,(*(LnkLI55))()));
	princ_str(",Cdata);",VV[20]);
	princ_str("\n	",VV[20]);
	V55= structure_ref((V51),VV[0],1);
	(void)((*(LnkLI53))(/* INLINE-ARGS */V55));
	princ_str("=MMcons(",VV[20]);
	V56= structure_ref((V51),VV[0],1);
	(void)((*(LnkLI53))(/* INLINE-ARGS */V56));
	princ_char(44,VV[20]);
	(void)((VFUN_NARGS=0,(*(LnkLI55))()));
	princ_str(");",VV[20]);
	V57= structure_ref((V51),VV[0],1);
	(void)((*(LnkLI56))(/* INLINE-ARGS */V57));
	V58= (*(LnkLI57))();
	(void)(structure_set((V51),VV[0],2,/* INLINE-ARGS */V58));}
	V45= cdr((V45));
	V46= car((V45));
	goto T125;}
	goto T121;
T121:;
	base[6]= (V39);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk58)();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function C1LABELS	*/

static object LI4(V60)

object V60;
{	 VMB4 VMS4 VMV4
	bds_check;
	goto TTL;
TTL:;
	{object V61;
	object V62;
	object V63;
	object V64;
	object V65;
	object V66;
	object V67;
	object V68;
	object V69;
	object V70;
	register object V71;
	V61= Cnil;
	V62= Cnil;
	V63= Cnil;
	V64= Cnil;
	V65= Cnil;
	V66= Cnil;
	V67= Cnil;
	V68= Cnil;
	V69= Cnil;
	V70= Cnil;
	V71= Cnil;
	bds_bind(VV[2],symbol_value(VV[2]));
	if(!(endp_prop((V60)))){
	goto T180;}
	(void)((*(LnkLI42))(VV[21],small_fixnum(1),small_fixnum(0)));
	goto T180;
T180:;
	{object V72;
	register object V73;
	V72= car((V60));
	V73= car((V72));
	goto T187;
T187:;
	if(!(endp_prop((V72)))){
	goto T188;}
	goto T183;
	goto T188;
T188:;
	if(endp_prop((V73))){
	goto T193;}
	if(!(type_of(car((V73)))==t_symbol)){
	goto T193;}
	if(!(endp_prop(cdr((V73))))){
	goto T192;}
	goto T193;
T193:;
	(void)((VFUN_NARGS=2,(*(LnkLI43))(VV[22],(V73))));
	goto T192;
T192:;
	{register object x= car((V73)),V74= (V70);
	while(!endp(V74))
	if(eql(x,V74->c.c_car)){
	goto T201;
	}else V74=V74->c.c_cdr;
	goto T199;}
	goto T201;
T201:;
	(void)((VFUN_NARGS=2,(*(LnkLI43))(VV[23],car((V73)))));
	goto T199;
T199:;
	{object V75;
	V75= car((V73));
	V70= make_cons((V75),(V70));}
	{object V76;
	V76= (VFUN_NARGS=6,(*(LnkLI44))(VV[4],car((V73)),VV[5],Cnil,VV[6],Cnil));
	(VV[2]->s.s_dbind)= make_cons(V76,(VV[2]->s.s_dbind));
	{object V78;
	V78= list(4,(V76),Cnil,Cnil,cdr((V73)));
	V67= make_cons((V78),(V67));}}
	V72= cdr((V72));
	V73= car((V72));
	goto T187;}
	goto T183;
T183:;
	V67= reverse((V67));
	base[1]= cdr((V60));
	base[2]= Ct;
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	if(vs_base<vs_top){
	V61= vs_base[0];
	vs_base++;
	}else{
	V61= Cnil;}
	if(vs_base<vs_top){
	V62= vs_base[0];
	vs_base++;
	}else{
	V62= Cnil;}
	if(vs_base<vs_top){
	V63= vs_base[0];
	vs_base++;
	}else{
	V63= Cnil;}
	if(vs_base<vs_top){
	V64= vs_base[0];
	vs_base++;
	}else{
	V64= Cnil;}
	if(vs_base<vs_top){
	V65= vs_base[0];
	}else{
	V65= Cnil;}
	vs_top=sup;
	bds_bind(VV[7],symbol_value(VV[7]));
	(void)((*(LnkLI46))((V62)));
	(void)((*(LnkLI47))(Cnil,(V63),(V64)));
	V61= (*(LnkLI48))((V65),(V61));
	bds_unwind1;
	base[1]= cadr((V61));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk49)();
	vs_top=sup;
	V66= vs_base[0];
	goto T231;
T231:;
	V71= Cnil;
	{register object V79;
	register object V80;
	V79= (V67);
	V80= car((V79));
	goto T239;
T239:;
	if(!(endp_prop((V79)))){
	goto T240;}
	goto T235;
	goto T240;
T240:;
	if((structure_ref(car((V80)),VV[0],1))==Cnil){
	goto T244;}
	if((cadr((V80)))!=Cnil){
	goto T244;}
	V71= Ct;
	if(type_of(cdr(V80))!=t_cons)FEwrong_type_argument(Scons,cdr(V80));
	(cdr(V80))->c.c_car = Ct;
	(void)(cdr(V80));
	base[2]= make_cons(VV[11],symbol_value(VV[9]));
	base[3]= make_cons(VV[11],symbol_value(VV[10]));
	base[4]= make_cons(VV[11],symbol_value(VV[7]));
	bds_bind(VV[9],base[2]);
	bds_bind(VV[10],base[3]);
	bds_bind(VV[7],base[4]);
	{object V83;
	V84= cadddr((V80));
	V85= structure_ref(car((V80)),VV[0],0);
	V83= (VFUN_NARGS=2,(*(LnkLI50))(/* INLINE-ARGS */V84,/* INLINE-ARGS */V85));
	(void)((*(LnkLI51))((V66),cadr((V83))));
	{object V86;
	V86= list(2,car((V80)),(V83));
	V68= make_cons((V86),(V68));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}}
	goto T244;
T244:;
	V79= cdr((V79));
	V80= car((V79));
	goto T239;}
	goto T235;
T235:;
	if(((V71))!=Cnil){
	goto T232;}
	goto T229;
	goto T232;
T232:;
	goto T231;
	goto T229;
T229:;
	goto T270;
T270:;
	V71= Cnil;
	{register object V87;
	register object V88;
	V87= (V67);
	V88= car((V87));
	goto T278;
T278:;
	if(!(endp_prop((V87)))){
	goto T279;}
	goto T274;
	goto T279;
T279:;
	if((structure_ref(car((V88)),VV[0],2))==Cnil){
	goto T283;}
	if((caddr((V88)))!=Cnil){
	goto T283;}
	V71= Ct;
	if(type_of(cddr(V88))!=t_cons)FEwrong_type_argument(Scons,cddr(V88));
	(cddr(V88))->c.c_car = Ct;
	(void)(cddr(V88));
	base[2]= make_cons(VV[8],symbol_value(VV[7]));
	base[3]= make_cons(VV[8],(VV[2]->s.s_dbind));
	base[4]= make_cons(VV[8],symbol_value(VV[9]));
	base[5]= make_cons(VV[8],symbol_value(VV[10]));
	bds_bind(VV[7],base[2]);
	bds_bind(VV[2],base[3]);
	bds_bind(VV[9],base[4]);
	bds_bind(VV[10],base[5]);
	{object V91;
	V92= cadddr((V88));
	V93= structure_ref(car((V88)),VV[0],0);
	V91= (VFUN_NARGS=2,(*(LnkLI50))(/* INLINE-ARGS */V92,/* INLINE-ARGS */V93));
	(void)((*(LnkLI51))((V66),cadr((V91))));
	{object V94;
	V94= list(2,car((V88)),(V91));
	V69= make_cons((V94),(V69));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}}
	goto T283;
T283:;
	V87= cdr((V87));
	V88= car((V87));
	goto T278;}
	goto T274;
T274:;
	if(((V71))!=Cnil){
	goto T271;}
	goto T268;
	goto T271;
T271:;
	goto T270;
	goto T268;
T268:;
	{object V95;
	object V96;
	V95= (V67);
	V96= car((V95));
	goto T312;
T312:;
	if(!(endp_prop((V95)))){
	goto T313;}
	goto T308;
	goto T313;
T313:;
	if((structure_ref(car((V96)),VV[0],1))!=Cnil){
	goto T318;}
	if((structure_ref(car((V96)),VV[0],2))==Cnil){
	goto T317;}
	goto T318;
T318:;
	V97= car((V96));
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	(void)(structure_set(/* INLINE-ARGS */V97,VV[0],3,symbol_value(VV[12])));
	goto T317;
T317:;
	V95= cdr((V95));
	V96= car((V95));
	goto T312;}
	goto T308;
T308:;
	if(((V68))!=Cnil){
	goto T328;}
	if(((V69))==Cnil){
	goto T329;}
	goto T328;
T328:;
	V98= reverse((V68));
	{object V99 = list(5,VV[21],(V66),/* INLINE-ARGS */V98,reverse((V69)),(V61));
	bds_unwind1;
	VMR4(V99)}
	goto T329;
T329:;
	{object V100 = (V61);
	bds_unwind1;
	VMR4(V100)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C2LABELS	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	bds_check;
	{object V101;
	object V102;
	object V103;
	check_arg(3);
	V101=(base[0]);
	V102=(base[1]);
	V103=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[13],symbol_value(VV[13]));
	bds_bind(VV[14],symbol_value(VV[14]));
	{register object V104;
	object V105;
	V104= (V102);
	V105= car((V104));
	goto T337;
T337:;
	if(!(endp_prop((V104)))){
	goto T338;}
	goto T333;
	goto T338;
T338:;
	{register object V106;
	V106= car((V105));
	V107= (*(LnkLI52))();
	(void)(structure_set((V106),VV[0],1,/* INLINE-ARGS */V107));
	princ_str("\n	",VV[20]);
	V108= structure_ref((V106),VV[0],1);
	(void)((*(LnkLI53))(/* INLINE-ARGS */V108));
	princ_str("=MMcons(Cnil,",VV[20]);
	(void)((VFUN_NARGS=0,(*(LnkLI55))()));
	princ_str(");",VV[20]);
	V109= structure_ref((V106),VV[0],1);
	(void)((*(LnkLI56))(/* INLINE-ARGS */V109));
	V110= (*(LnkLI57))();
	(void)(structure_set((V106),VV[0],2,/* INLINE-ARGS */V110));}
	V104= cdr((V104));
	V105= car((V104));
	goto T337;}
	goto T333;
T333:;
	{register object V111;
	object V112;
	V111= (V101);
	V112= car((V111));
	goto T362;
T362:;
	if(!(endp_prop((V111)))){
	goto T363;}
	goto T358;
	goto T363;
T363:;
	(void)(structure_set(car((V112)),VV[0],4,symbol_value(VV[16])));
	{object V113;{object V114;
	V114= (VV[14]->s.s_dbind);{object V115;
	V115= symbol_value(VV[15]);
	V113= list(5,Cnil,V114,V115,car((V112)),cadr((V112)));}}
	setq(VV[17],make_cons((V113),symbol_value(VV[17])));}
	V111= cdr((V111));
	V112= car((V111));
	goto T362;}
	goto T358;
T358:;
	{register object V116;
	register object V117;
	V116= (V102);
	V117= car((V116));
	goto T380;
T380:;
	if(!(endp_prop((V116)))){
	goto T381;}
	goto T376;
	goto T381;
T381:;
	{object V118;
	if(((VV[14]->s.s_dbind))!=Cnil){
	goto T389;}
	V119= Cnil;
	goto T387;
	goto T389;
T389:;
	V119= make_cons(small_fixnum(0),small_fixnum(0));
	goto T387;
T387:;{object V120;
	V120= symbol_value(VV[15]);
	V118= list(5,VV[18],V119,V120,car((V117)),cadr((V117)));}
	setq(VV[17],make_cons((V118),symbol_value(VV[17])));}
	{object V121;
	V121= car((V117));
	setq(VV[19],make_cons((V121),symbol_value(VV[19])));}
	princ_str("\n	",VV[20]);
	V122= structure_ref(car((V117)),VV[0],1);
	(void)((*(LnkLI59))(/* INLINE-ARGS */V122));
	princ_str("=make_cclosure_new(LC",VV[20]);
	V123= structure_ref(car((V117)),VV[0],3);
	(void)((*(LnkLI54))(/* INLINE-ARGS */V123));
	princ_str(",Cnil,",VV[20]);
	(void)((VFUN_NARGS=0,(*(LnkLI55))()));
	princ_str(",Cdata);",VV[20]);
	V116= cdr((V116));
	V117= car((V116));
	goto T380;}
	goto T376;
T376:;
	base[5]= (V103);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk58)();
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function C1MACROLET	*/

static object LI6(V125)

object V125;
{	 VMB6 VMS6 VMV6
	bds_check;
	goto TTL;
TTL:;
	{object V126;
	object V127;
	object V128;
	object V129;
	object V130;
	V126= Cnil;
	V127= Cnil;
	V128= Cnil;
	V129= Cnil;
	V130= Cnil;
	bds_bind(VV[2],symbol_value(VV[2]));
	bds_bind(VV[7],symbol_value(VV[7]));
	if(!(endp_prop((V125)))){
	goto T415;}
	(void)((*(LnkLI42))(VV[24],small_fixnum(1),small_fixnum(0)));
	goto T415;
T415:;
	{register object V131;
	register object V132;
	V131= car((V125));
	V132= car((V131));
	goto T422;
T422:;
	if(!(endp_prop((V131)))){
	goto T423;}
	goto T418;
	goto T423;
T423:;
	if(endp_prop((V132))){
	goto T428;}
	if(!(type_of(car((V132)))==t_symbol)){
	goto T428;}
	if(!(endp_prop(cdr((V132))))){
	goto T427;}
	goto T428;
T428:;
	(void)((VFUN_NARGS=2,(*(LnkLI43))(VV[25],(V132))));
	goto T427;
T427:;
	{register object V133;
	V134= car((V132));
	V135= (*(LnkLI60))(car((V132)),cadr((V132)),cddr((V132)));
	V133= list(2,/* INLINE-ARGS */V134,caddr(/* INLINE-ARGS */V135));
	(VV[2]->s.s_dbind)= make_cons((V133),(VV[2]->s.s_dbind));}
	V131= cdr((V131));
	V132= car((V131));
	goto T422;}
	goto T418;
T418:;
	base[2]= cdr((V125));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk45)();
	if(vs_base<vs_top){
	V126= vs_base[0];
	vs_base++;
	}else{
	V126= Cnil;}
	if(vs_base<vs_top){
	V127= vs_base[0];
	vs_base++;
	}else{
	V127= Cnil;}
	if(vs_base<vs_top){
	V128= vs_base[0];
	vs_base++;
	}else{
	V128= Cnil;}
	if(vs_base<vs_top){
	V129= vs_base[0];
	vs_base++;
	}else{
	V129= Cnil;}
	if(vs_base<vs_top){
	V130= vs_base[0];
	}else{
	V130= Cnil;}
	vs_top=sup;
	(void)((*(LnkLI46))((V127)));
	(void)((*(LnkLI47))(Cnil,(V128),(V129)));
	{object V136 = (*(LnkLI48))((V130),(V126));
	bds_unwind1;
	bds_unwind1;
	VMR6(V136)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1LOCAL-FUN	*/

static object LI7(V138)

register object V138;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V139;
	V139= Cnil;
	{register object V140;
	register object V141;
	V140= symbol_value(VV[2]);
	V141= car((V140));
	goto T452;
T452:;
	if(!(endp_prop((V140)))){
	goto T453;}
	{object V142 = Cnil;
	VMR7(V142)}
	goto T453;
T453:;
	if(!(((V141))==(VV[8]))){
	goto T459;}
	V139= Ct;
	goto T457;
	goto T459;
T459:;
	if(!(type_of((V141))==t_cons)){
	goto T463;}
	if(!((car((V141)))==((V138)))){
	goto T457;}
	{object V143 = cadr((V141));
	VMR7(V143)}
	goto T463;
T463:;
	V144= structure_ref((V141),VV[0],0);
	if(!((/* INLINE-ARGS */V144)==((V138)))){
	goto T457;}
	if(((V139))==Cnil){
	goto T471;}
	(void)(structure_set((V141),VV[0],2,Ct));
	goto T469;
	goto T471;
T471:;
	(void)(structure_set((V141),VV[0],1,Ct));
	goto T469;
T469:;
	{object V145 = list(4,VV[26],symbol_value(VV[27]),(V141),(V139));
	VMR7(V145)}
	goto T457;
T457:;
	V140= cdr((V140));
	V141= car((V140));
	goto T452;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SCH-LOCAL-FUN	*/

static object LI8(V147)

register object V147;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{register object V148;
	register object V149;
	V148= symbol_value(VV[2]);
	V149= car((V148));
	goto T481;
T481:;
	if(!(endp_prop((V148)))){
	goto T482;}
	{object V150 = (V147);
	VMR8(V150)}
	goto T482;
T482:;
	if(((V149))==(VV[8])){
	goto T486;}
	if(type_of((V149))==t_cons){
	goto T486;}
	V151= structure_ref((V149),VV[0],0);
	if(!((/* INLINE-ARGS */V151)==((V147)))){
	goto T486;}
	{object V152 = (V149);
	VMR8(V152)}
	goto T486;
T486:;
	V148= cdr((V148));
	V149= car((V148));
	goto T481;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1LOCAL-CLOSURE	*/

static object LI9(V154)

register object V154;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{register object V155;
	V155= Cnil;
	{register object V156;
	register object V157;
	V156= symbol_value(VV[2]);
	V157= car((V156));
	goto T502;
T502:;
	if(!(endp_prop((V156)))){
	goto T503;}
	{object V158 = Cnil;
	VMR9(V158)}
	goto T503;
T503:;
	if(!(((V157))==(VV[8]))){
	goto T509;}
	V155= Ct;
	goto T507;
	goto T509;
T509:;
	if(!(type_of((V157))==t_cons)){
	goto T513;}
	if(!((car((V157)))==((V154)))){
	goto T507;}
	{object V159 = cadr((V157));
	VMR9(V159)}
	goto T513;
T513:;
	V160= structure_ref((V157),VV[0],0);
	if(!((/* INLINE-ARGS */V160)==((V154)))){
	goto T507;}
	(void)(structure_set((V157),VV[0],2,Ct));
	{object V161 = list(4,VV[26],symbol_value(VV[27]),(V157),(V155));
	VMR9(V161)}
	goto T507;
T507:;
	V156= cdr((V156));
	V157= car((V156));
	goto T502;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2CALL-LOCAL	*/

static object LI10(V164,V165)

register object V164;register object V165;
{	 VMB10 VMS10 VMV10
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[13],symbol_value(VV[13]));
	if((cadr((V164)))==Cnil){
	goto T527;}
	(void)((*(LnkLI61))((V165)));
	princ_str("\n	cclosure_call(",VV[20]);
	V166= structure_ref(car((V164)),VV[0],2);
	(void)((*(LnkLI62))(/* INLINE-ARGS */V166));
	princ_str(");",VV[20]);
	goto T525;
	goto T527;
T527:;
	if(!(type_of((V165))==t_cons||((V165))==Cnil)){
	goto T535;}
	if((symbol_value(VV[28]))==Cnil){
	goto T535;}
	if((symbol_value(VV[29]))==Cnil){
	goto T535;}
	if(!((car(symbol_value(VV[29])))==(car((V164))))){
	goto T535;}
	if(!((symbol_value(VV[30]))==(VV[31]))){
	goto T535;}
	if(((*(LnkLI63))())==Cnil){
	goto T535;}
	if(!(((long)length((V165)))==((long)length(cdr(symbol_value(VV[29])))))){
	goto T535;}
	bds_bind(VV[32],VV[33]);
	setq(VV[34],number_plus(symbol_value(VV[34]),small_fixnum(1)));
	bds_bind(VV[30],make_cons(symbol_value(VV[34]),Cnil));
	bds_bind(VV[35],make_cons((VV[30]->s.s_dbind),symbol_value(VV[35])));
	{object V168;
	object V169= cdr(symbol_value(VV[29]));
	if(endp(V169)){
	V167= Cnil;
	goto T554;}
	base[4]=V168=MMcons(Cnil,Cnil);
	goto T555;
T555:;
	(V168->c.c_car)= list(2,(V169->c.c_car),Cnil);
	V169=MMcdr(V169);
	if(endp(V169)){
	V167= base[4];
	goto T554;}
	V168=MMcdr(V168)=MMcons(Cnil,Cnil);
	goto T555;}
	goto T554;
T554:;
	(void)((*(LnkLI64))(V167,(V165)));
	if((cdr((VV[30]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T549;}
	princ_str("\n	goto T",VV[20]);
	(void)((*(LnkLI54))(car((VV[30]->s.s_dbind))));
	princ_char(59,VV[20]);
	princ_str("\nT",VV[20]);
	(void)((*(LnkLI54))(car((VV[30]->s.s_dbind))));
	princ_str(":;",VV[20]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T549;
T549:;
	(void)((*(LnkLI65))(VV[36]));
	princ_str("\n	goto TTL;",VV[20]);
	V171= structure_ref(car((V164)),VV[0],0);
	(void)((VFUN_NARGS=2,(*(LnkLI66))(VV[37],/* INLINE-ARGS */V171)));
	goto T525;
	goto T535;
T535:;
	(void)((*(LnkLI61))((V165)));
	princ_str("\n	L",VV[20]);
	V172= structure_ref(car((V164)),VV[0],3);
	(void)((*(LnkLI54))(/* INLINE-ARGS */V172));
	princ_char(40,VV[20]);
	{register long V173;
	register long V174;
	V173= fix(structure_ref(car((V164)),VV[0],4));
	V174= 0;
	goto T578;
T578:;
	if(!((V174)>=(V173))){
	goto T579;}
	goto T574;
	goto T579;
T579:;
	princ_str("base",VV[20]);
	V175 = make_fixnum(V174);
	(void)((*(LnkLI54))(V175));
	princ_char(44,VV[20]);
	V174= (long)(V174)+1;
	goto T578;}
	goto T574;
T574:;
	princ_str("base",VV[20]);
	V176= structure_ref(car((V164)),VV[0],4);
	if(number_compare(/* INLINE-ARGS */V176,symbol_value(VV[16]))==0){
	goto T592;}
	V177= structure_ref(car((V164)),VV[0],4);
	(void)((*(LnkLI54))(/* INLINE-ARGS */V177));
	goto T592;
T592:;
	princ_str(");",VV[20]);
	setq(VV[38],Ct);
	goto T525;
T525:;
	{object V178 = (VFUN_NARGS=1,(*(LnkLI67))(VV[39]));
	bds_unwind1;
	VMR10(V178)}
	base[0]=base[0];
	return Cnil;
}
static object  LnkTLI67(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[67],(void **)(void *)&LnkLI67,first,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI66(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[66],(void **)(void *)&LnkLI66,first,ap);va_end(ap);return V1;} /* CMPNOTE */
static object  LnkTLI65(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[65],(void **)(void *)&LnkLI65,1,first,ap);va_end(ap);return V1;} /* UNWIND-NO-EXIT */
static object  LnkTLI64(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[64],(void **)(void *)&LnkLI64,2,first,ap);va_end(ap);return V1;} /* C2PSETQ */
static object  LnkTLI63(){return call_proc0(VV[63],(void **)(void *)&LnkLI63);} /* TAIL-RECURSION-POSSIBLE */
static object  LnkTLI62(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[62],(void **)(void *)&LnkLI62,1,first,ap);va_end(ap);return V1;} /* WT-CCB-VS */
static object  LnkTLI61(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[61],(void **)(void *)&LnkLI61,1,first,ap);va_end(ap);return V1;} /* PUSH-ARGS */
static object  LnkTLI60(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[60],(void **)(void *)&LnkLI60,3,first,ap);va_end(ap);return V1;} /* DEFMACRO* */
static object  LnkTLI59(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[59],(void **)(void *)&LnkLI59,1,first,ap);va_end(ap);return V1;} /* WT-VS* */
static void LnkT58(){ call_or_link(VV[58],(void **)(void *)&Lnk58);} /* C2EXPR */
static object  LnkTLI57(){return call_proc0(VV[57],(void **)(void *)&LnkLI57);} /* CCB-VS-PUSH */
static object  LnkTLI56(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[56],(void **)(void *)&LnkLI56,1,first,ap);va_end(ap);return V1;} /* CLINK */
static object  LnkTLI55(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[55],(void **)(void *)&LnkLI55,first,ap);va_end(ap);return V1;} /* WT-CLINK */
static object  LnkTLI54(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[54],(void **)(void *)&LnkLI54,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI53(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[53],(void **)(void *)&LnkLI53,1,first,ap);va_end(ap);return V1;} /* WT-VS */
static object  LnkTLI52(){return call_proc0(VV[52],(void **)(void *)&LnkLI52);} /* VS-PUSH */
static object  LnkTLI51(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[51],(void **)(void *)&LnkLI51,2,first,ap);va_end(ap);return V1;} /* ADD-INFO */
static object  LnkTLI50(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[50],(void **)(void *)&LnkLI50,first,ap);va_end(ap);return V1;} /* C1LAMBDA-EXPR */
static void LnkT49(){ call_or_link(VV[49],(void **)(void *)&Lnk49);} /* COPY-INFO */
static object  LnkTLI48(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[48],(void **)(void *)&LnkLI48,2,first,ap);va_end(ap);return V1;} /* C1DECL-BODY */
static object  LnkTLI47(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[47],(void **)(void *)&LnkLI47,3,first,ap);va_end(ap);return V1;} /* CHECK-VDECL */
static object  LnkTLI46(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[46],(void **)(void *)&LnkLI46,1,first,ap);va_end(ap);return V1;} /* C1ADD-GLOBALS */
static void LnkT45(){ call_or_link(VV[45],(void **)(void *)&Lnk45);} /* C1BODY */
static object  LnkTLI44(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[44],(void **)(void *)&LnkLI44,first,ap);va_end(ap);return V1;} /* MAKE-FUN */
static object  LnkTLI43(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[43],(void **)(void *)&LnkLI43,first,ap);va_end(ap);return V1;} /* CMPERR */
static object  LnkTLI42(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[42],(void **)(void *)&LnkLI42,3,first,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

