
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
	if(!(((V8))==Cnil)){
	goto T16;}
	(void)((*(LnkLI42))(VV[1],small_fixnum(1),small_fixnum(0)));
	goto T16;
T16:;
	bds_bind(VV[2],(VV[2]->s.s_dbind));
	{register object V18;
	register object V19;
	V18= CMPcar((V8));
	V19= CMPcar((V18));
	goto T24;
T24:;
	if(!(((V18))==Cnil)){
	goto T25;}
	goto T20;
	goto T25;
T25:;
	if(((V19))==Cnil){
	goto T30;}
	if(!(type_of(CMPcar((V19)))==t_symbol)){
	goto T30;}
	if(!((CMPcdr((V19)))==Cnil)){
	goto T29;}
	goto T30;
T30:;
	(void)((VFUN_NARGS=2,(*(LnkLI43))(VV[3],(V19))));
	goto T29;
T29:;
	{object V20;
	V20= (VFUN_NARGS=6,(*(LnkLI44))(VV[4],CMPcar((V19)),VV[5],Cnil,VV[6],Cnil));
	(VV[2]->s.s_dbind)= make_cons(V20,(VV[2]->s.s_dbind));
	{object V22;
	V22= list(2,(V20),CMPcdr((V19)));
	V15= make_cons((V22),(V15));}}
	V18= CMPcdr((V18));
	V19= CMPcar((V18));
	goto T24;}
	goto T20;
T20:;
	base[1]= CMPcdr((V8));
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
	bds_bind(VV[7],(VV[7]->s.s_dbind));
	(void)((*(LnkLI46))((V10)));
	(void)((*(LnkLI47))(Cnil,(V11),(V12)));
	V9= (*(LnkLI48))((V13),(V9));
	bds_unwind1;
	base[1]= CMPcadr((V9));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk49)();
	vs_top=sup;
	V14= vs_base[0];
	bds_unwind1;
	{register object V23;
	register object V24;
	V23= reverse((V15));
	V24= CMPcar((V23));
	goto T61;
T61:;
	if(!(((V23))==Cnil)){
	goto T62;}
	goto T57;
	goto T62;
T62:;
	if((STREF(object,CMPcar((V24)),8))==Cnil){
	goto T66;}
	base[2]= make_cons(VV[8],(VV[7]->s.s_dbind));
	base[3]= make_cons(VV[8],(VV[2]->s.s_dbind));
	base[4]= make_cons(VV[8],(VV[9]->s.s_dbind));
	base[5]= make_cons(VV[8],(VV[10]->s.s_dbind));
	bds_bind(VV[7],base[2]);
	bds_bind(VV[2],base[3]);
	bds_bind(VV[9],base[4]);
	bds_bind(VV[10],base[5]);
	{object V25;
	V25= (VFUN_NARGS=2,(*(LnkLI50))(CMPcadr((V24)),STREF(object,CMPcar((V24)),0)));
	(void)((*(LnkLI51))((V14),CMPcadr((V25))));
	{object V26;
	V26= list(2,CMPcar((V24)),(V25));
	V17= make_cons((V26),(V17));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}}
	goto T66;
T66:;
	if((STREF(object,CMPcar((V24)),4))==Cnil){
	goto T77;}
	base[2]= make_cons(VV[11],(VV[9]->s.s_dbind));
	base[3]= make_cons(VV[11],(VV[10]->s.s_dbind));
	base[4]= make_cons(VV[11],(VV[7]->s.s_dbind));
	bds_bind(VV[9],base[2]);
	bds_bind(VV[10],base[3]);
	bds_bind(VV[7],base[4]);
	{object V27;
	V27= (VFUN_NARGS=2,(*(LnkLI50))(CMPcadr((V24)),STREF(object,CMPcar((V24)),0)));
	(void)((*(LnkLI51))((V14),CMPcadr((V27))));
	{object V28;
	V28= list(2,CMPcar((V24)),(V27));
	V16= make_cons((V28),(V16));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}}
	goto T77;
T77:;
	if((STREF(object,CMPcar((V24)),4))!=Cnil){
	goto T88;}
	if((STREF(object,CMPcar((V24)),8))==Cnil){
	goto T87;}
	goto T88;
T88:;
	V29= CMPcar((V24));
	(VV[12]->s.s_dbind)= number_plus((VV[12]->s.s_dbind),small_fixnum(1));
	V30= Ct;
	STSET(object,/* INLINE-ARGS */V29,12, (VV[12]->s.s_dbind));
	(void)((VV[12]->s.s_dbind));
	goto T87;
T87:;
	V23= CMPcdr((V23));
	V24= CMPcar((V23));
	goto T61;}
	goto T57;
T57:;
	if(((V16))!=Cnil){
	goto T98;}
	if(((V17))==Cnil){
	goto T99;}
	goto T98;
T98:;
	V31= reverse((V16));
	{object V32 = list(5,VV[1],(V14),/* INLINE-ARGS */V31,reverse((V17)),(V9));
	VMR2(V32)}
	goto T99;
T99:;
	{object V33 = (V9);
	VMR2(V33)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C2FLET	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	bds_check;
	{object V34;
	object V35;
	object V36;
	V34=(base[0]);
	V35=(base[1]);
	V36=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[13],(VV[13]->s.s_dbind));
	bds_bind(VV[14],(VV[14]->s.s_dbind));
	bds_bind(VV[15],(VV[15]->s.s_dbind));
	{register object V37;
	object V38;
	V37= (V34);
	V38= CMPcar((V37));
	goto T107;
T107:;
	if(!(((V37))==Cnil)){
	goto T108;}
	goto T103;
	goto T108;
T108:;
	V39= CMPcar((V38));
	V40= Ct;
	STSET(object,/* INLINE-ARGS */V39,16, (VV[16]->s.s_dbind));
	(void)((VV[16]->s.s_dbind));
	{object V41;{object V42;
	V42= (VV[14]->s.s_dbind);{object V43;
	V43= (VV[15]->s.s_dbind);
	V41= list(5,Cnil,V42,V43,CMPcar((V38)),CMPcadr((V38)));}}
	(VV[17]->s.s_dbind)= make_cons((V41),(VV[17]->s.s_dbind));}
	V37= CMPcdr((V37));
	V38= CMPcar((V37));
	goto T107;}
	goto T103;
T103:;
	{register object V44;
	register object V45;
	V44= (V35);
	V45= CMPcar((V44));
	goto T125;
T125:;
	if(!(((V44))==Cnil)){
	goto T126;}
	goto T121;
	goto T126;
T126:;
	{object V46;
	if(((VV[14]->s.s_dbind))!=Cnil){
	goto T134;}
	V47= Cnil;
	goto T132;
	goto T134;
T134:;
	V47= make_cons(small_fixnum(0),small_fixnum(0));
	goto T132;
T132:;{object V48;
	V48= (VV[15]->s.s_dbind);
	V46= list(5,VV[18],V47,V48,CMPcar((V45)),CMPcadr((V45)));}
	(VV[17]->s.s_dbind)= make_cons((V46),(VV[17]->s.s_dbind));}
	{object V49;
	V49= CMPcar((V45));
	(VV[19]->s.s_dbind)= make_cons((V49),(VV[19]->s.s_dbind));}
	{register object V50;
	V50= CMPcar((V45));
	V51= (*(LnkLI52))();
	V52= Ct;
	STSET(object,(V50),4, /* INLINE-ARGS */V51);
	(void)(/* INLINE-ARGS */V51);
	princ_str("\n	",VV[20]);
	(void)((*(LnkLI53))(STREF(object,(V50),4)));
	princ_str("=make_cclosure_new(LC",VV[20]);
	(void)((*(LnkLI54))(STREF(object,(V50),12)));
	princ_str(",Cnil,",VV[20]);
	(void)((VFUN_NARGS=0,(*(LnkLI55))()));
	princ_str(",Cdata);",VV[20]);
	princ_str("\n	",VV[20]);
	(void)((*(LnkLI53))(STREF(object,(V50),4)));
	princ_str("=MMcons(",VV[20]);
	(void)((*(LnkLI53))(STREF(object,(V50),4)));
	princ_char(44,VV[20]);
	(void)((VFUN_NARGS=0,(*(LnkLI55))()));
	princ_str(");",VV[20]);
	(void)((*(LnkLI56))(STREF(object,(V50),4)));
	V53= (*(LnkLI57))();
	V54= Ct;
	STSET(object,(V50),8, /* INLINE-ARGS */V53);
	(void)(/* INLINE-ARGS */V53);}
	V44= CMPcdr((V44));
	V45= CMPcar((V44));
	goto T125;}
	goto T121;
T121:;
	base[6]= (V36);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk58)();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function C1LABELS	*/

static object LI4(V56)

object V56;
{	 VMB4 VMS4 VMV4
	bds_check;
	goto TTL;
TTL:;
	{object V57;
	object V58;
	object V59;
	object V60;
	object V61;
	object V62;
	object V63;
	object V64;
	object V65;
	object V66;
	register object V67;
	V57= Cnil;
	V58= Cnil;
	V59= Cnil;
	V60= Cnil;
	V61= Cnil;
	V62= Cnil;
	V63= Cnil;
	V64= Cnil;
	V65= Cnil;
	V66= Cnil;
	V67= Cnil;
	bds_bind(VV[2],(VV[2]->s.s_dbind));
	if(!(((V56))==Cnil)){
	goto T180;}
	(void)((*(LnkLI42))(VV[21],small_fixnum(1),small_fixnum(0)));
	goto T180;
T180:;
	{object V68;
	register object V69;
	V68= CMPcar((V56));
	V69= CMPcar((V68));
	goto T187;
T187:;
	if(!(((V68))==Cnil)){
	goto T188;}
	goto T183;
	goto T188;
T188:;
	if(((V69))==Cnil){
	goto T193;}
	if(!(type_of(CMPcar((V69)))==t_symbol)){
	goto T193;}
	if(!((CMPcdr((V69)))==Cnil)){
	goto T192;}
	goto T193;
T193:;
	(void)((VFUN_NARGS=2,(*(LnkLI43))(VV[22],(V69))));
	goto T192;
T192:;
	{register object x= CMPcar((V69)),V70= (V66);
	while(V70!=Cnil)
	if(eql(x,V70->c.c_car)){
	goto T201;
	}else V70=V70->c.c_cdr;
	goto T199;}
	goto T201;
T201:;
	(void)((VFUN_NARGS=2,(*(LnkLI43))(VV[23],CMPcar((V69)))));
	goto T199;
T199:;
	{object V71;
	V71= CMPcar((V69));
	V66= make_cons((V71),(V66));}
	{object V72;
	V72= (VFUN_NARGS=6,(*(LnkLI44))(VV[4],CMPcar((V69)),VV[5],Cnil,VV[6],Cnil));
	(VV[2]->s.s_dbind)= make_cons(V72,(VV[2]->s.s_dbind));
	{object V74;
	V74= list(4,(V72),Cnil,Cnil,CMPcdr((V69)));
	V63= make_cons((V74),(V63));}}
	V68= CMPcdr((V68));
	V69= CMPcar((V68));
	goto T187;}
	goto T183;
T183:;
	V63= reverse((V63));
	base[1]= CMPcdr((V56));
	base[2]= Ct;
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	if(vs_base<vs_top){
	V57= vs_base[0];
	vs_base++;
	}else{
	V57= Cnil;}
	if(vs_base<vs_top){
	V58= vs_base[0];
	vs_base++;
	}else{
	V58= Cnil;}
	if(vs_base<vs_top){
	V59= vs_base[0];
	vs_base++;
	}else{
	V59= Cnil;}
	if(vs_base<vs_top){
	V60= vs_base[0];
	vs_base++;
	}else{
	V60= Cnil;}
	if(vs_base<vs_top){
	V61= vs_base[0];
	}else{
	V61= Cnil;}
	vs_top=sup;
	bds_bind(VV[7],(VV[7]->s.s_dbind));
	(void)((*(LnkLI46))((V58)));
	(void)((*(LnkLI47))(Cnil,(V59),(V60)));
	V57= (*(LnkLI48))((V61),(V57));
	bds_unwind1;
	base[1]= CMPcadr((V57));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk49)();
	vs_top=sup;
	V62= vs_base[0];
	goto T231;
T231:;
	V67= Cnil;
	{register object V75;
	register object V76;
	V75= (V63);
	V76= CMPcar((V75));
	goto T239;
T239:;
	if(!(((V75))==Cnil)){
	goto T240;}
	goto T235;
	goto T240;
T240:;
	if((STREF(object,CMPcar((V76)),4))==Cnil){
	goto T244;}
	if((CMPcadr((V76)))!=Cnil){
	goto T244;}
	V67= Ct;
	(CMPcdr(V76))->c.c_car = Ct;
	(void)(CMPcdr(V76));
	base[2]= make_cons(VV[11],(VV[9]->s.s_dbind));
	base[3]= make_cons(VV[11],(VV[10]->s.s_dbind));
	base[4]= make_cons(VV[11],(VV[7]->s.s_dbind));
	bds_bind(VV[9],base[2]);
	bds_bind(VV[10],base[3]);
	bds_bind(VV[7],base[4]);
	{object V79;
	V79= (VFUN_NARGS=2,(*(LnkLI50))(CMPcadddr((V76)),STREF(object,CMPcar((V76)),0)));
	(void)((*(LnkLI51))((V62),CMPcadr((V79))));
	{object V80;
	V80= list(2,CMPcar((V76)),(V79));
	V64= make_cons((V80),(V64));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}}
	goto T244;
T244:;
	V75= CMPcdr((V75));
	V76= CMPcar((V75));
	goto T239;}
	goto T235;
T235:;
	if(((V67))!=Cnil){
	goto T232;}
	goto T229;
	goto T232;
T232:;
	goto T231;
	goto T229;
T229:;
	goto T270;
T270:;
	V67= Cnil;
	{register object V81;
	register object V82;
	V81= (V63);
	V82= CMPcar((V81));
	goto T278;
T278:;
	if(!(((V81))==Cnil)){
	goto T279;}
	goto T274;
	goto T279;
T279:;
	if((STREF(object,CMPcar((V82)),8))==Cnil){
	goto T283;}
	if((CMPcaddr((V82)))!=Cnil){
	goto T283;}
	V67= Ct;
	(CMPcddr(V82))->c.c_car = Ct;
	(void)(CMPcddr(V82));
	base[2]= make_cons(VV[8],(VV[7]->s.s_dbind));
	base[3]= make_cons(VV[8],(VV[2]->s.s_dbind));
	base[4]= make_cons(VV[8],(VV[9]->s.s_dbind));
	base[5]= make_cons(VV[8],(VV[10]->s.s_dbind));
	bds_bind(VV[7],base[2]);
	bds_bind(VV[2],base[3]);
	bds_bind(VV[9],base[4]);
	bds_bind(VV[10],base[5]);
	{object V85;
	V85= (VFUN_NARGS=2,(*(LnkLI50))(CMPcadddr((V82)),STREF(object,CMPcar((V82)),0)));
	(void)((*(LnkLI51))((V62),CMPcadr((V85))));
	{object V86;
	V86= list(2,CMPcar((V82)),(V85));
	V65= make_cons((V86),(V65));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}}
	goto T283;
T283:;
	V81= CMPcdr((V81));
	V82= CMPcar((V81));
	goto T278;}
	goto T274;
T274:;
	if(((V67))!=Cnil){
	goto T271;}
	goto T268;
	goto T271;
T271:;
	goto T270;
	goto T268;
T268:;
	{object V87;
	object V88;
	V87= (V63);
	V88= CMPcar((V87));
	goto T312;
T312:;
	if(!(((V87))==Cnil)){
	goto T313;}
	goto T308;
	goto T313;
T313:;
	if((STREF(object,CMPcar((V88)),4))!=Cnil){
	goto T318;}
	if((STREF(object,CMPcar((V88)),8))==Cnil){
	goto T317;}
	goto T318;
T318:;
	V89= CMPcar((V88));
	(VV[12]->s.s_dbind)= number_plus((VV[12]->s.s_dbind),small_fixnum(1));
	V90= Ct;
	STSET(object,/* INLINE-ARGS */V89,12, (VV[12]->s.s_dbind));
	(void)((VV[12]->s.s_dbind));
	goto T317;
T317:;
	V87= CMPcdr((V87));
	V88= CMPcar((V87));
	goto T312;}
	goto T308;
T308:;
	if(((V64))!=Cnil){
	goto T328;}
	if(((V65))==Cnil){
	goto T329;}
	goto T328;
T328:;
	V91= reverse((V64));
	{object V92 = list(5,VV[21],(V62),/* INLINE-ARGS */V91,reverse((V65)),(V57));
	bds_unwind1;
	VMR4(V92)}
	goto T329;
T329:;
	{object V93 = (V57);
	bds_unwind1;
	VMR4(V93)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C2LABELS	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	bds_check;
	{object V94;
	object V95;
	object V96;
	V94=(base[0]);
	V95=(base[1]);
	V96=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[13],(VV[13]->s.s_dbind));
	bds_bind(VV[14],(VV[14]->s.s_dbind));
	{register object V97;
	object V98;
	V97= (V95);
	V98= CMPcar((V97));
	goto T337;
T337:;
	if(!(((V97))==Cnil)){
	goto T338;}
	goto T333;
	goto T338;
T338:;
	{register object V99;
	V99= CMPcar((V98));
	V100= (*(LnkLI52))();
	V101= Ct;
	STSET(object,(V99),4, /* INLINE-ARGS */V100);
	(void)(/* INLINE-ARGS */V100);
	princ_str("\n	",VV[20]);
	(void)((*(LnkLI53))(STREF(object,(V99),4)));
	princ_str("=MMcons(Cnil,",VV[20]);
	(void)((VFUN_NARGS=0,(*(LnkLI55))()));
	princ_str(");",VV[20]);
	(void)((*(LnkLI56))(STREF(object,(V99),4)));
	V102= (*(LnkLI57))();
	V103= Ct;
	STSET(object,(V99),8, /* INLINE-ARGS */V102);
	(void)(/* INLINE-ARGS */V102);}
	V97= CMPcdr((V97));
	V98= CMPcar((V97));
	goto T337;}
	goto T333;
T333:;
	{register object V104;
	object V105;
	V104= (V94);
	V105= CMPcar((V104));
	goto T362;
T362:;
	if(!(((V104))==Cnil)){
	goto T363;}
	goto T358;
	goto T363;
T363:;
	V106= CMPcar((V105));
	V107= Ct;
	STSET(object,/* INLINE-ARGS */V106,16, (VV[16]->s.s_dbind));
	(void)((VV[16]->s.s_dbind));
	{object V108;{object V109;
	V109= (VV[14]->s.s_dbind);{object V110;
	V110= (VV[15]->s.s_dbind);
	V108= list(5,Cnil,V109,V110,CMPcar((V105)),CMPcadr((V105)));}}
	(VV[17]->s.s_dbind)= make_cons((V108),(VV[17]->s.s_dbind));}
	V104= CMPcdr((V104));
	V105= CMPcar((V104));
	goto T362;}
	goto T358;
T358:;
	{register object V111;
	register object V112;
	V111= (V95);
	V112= CMPcar((V111));
	goto T380;
T380:;
	if(!(((V111))==Cnil)){
	goto T381;}
	goto T376;
	goto T381;
T381:;
	{object V113;
	if(((VV[14]->s.s_dbind))!=Cnil){
	goto T389;}
	V114= Cnil;
	goto T387;
	goto T389;
T389:;
	V114= make_cons(small_fixnum(0),small_fixnum(0));
	goto T387;
T387:;{object V115;
	V115= (VV[15]->s.s_dbind);
	V113= list(5,VV[18],V114,V115,CMPcar((V112)),CMPcadr((V112)));}
	(VV[17]->s.s_dbind)= make_cons((V113),(VV[17]->s.s_dbind));}
	{object V116;
	V116= CMPcar((V112));
	(VV[19]->s.s_dbind)= make_cons((V116),(VV[19]->s.s_dbind));}
	princ_str("\n	",VV[20]);
	(void)((*(LnkLI59))(STREF(object,CMPcar((V112)),4)));
	princ_str("=make_cclosure_new(LC",VV[20]);
	(void)((*(LnkLI54))(STREF(object,CMPcar((V112)),12)));
	princ_str(",Cnil,",VV[20]);
	(void)((VFUN_NARGS=0,(*(LnkLI55))()));
	princ_str(",Cdata);",VV[20]);
	V111= CMPcdr((V111));
	V112= CMPcar((V111));
	goto T380;}
	goto T376;
T376:;
	base[5]= (V96);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk58)();
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function C1MACROLET	*/

static object LI6(V118)

object V118;
{	 VMB6 VMS6 VMV6
	bds_check;
	goto TTL;
TTL:;
	{object V119;
	object V120;
	object V121;
	object V122;
	object V123;
	V119= Cnil;
	V120= Cnil;
	V121= Cnil;
	V122= Cnil;
	V123= Cnil;
	bds_bind(VV[2],(VV[2]->s.s_dbind));
	bds_bind(VV[7],(VV[7]->s.s_dbind));
	if(!(((V118))==Cnil)){
	goto T415;}
	(void)((*(LnkLI42))(VV[24],small_fixnum(1),small_fixnum(0)));
	goto T415;
T415:;
	{register object V124;
	register object V125;
	V124= CMPcar((V118));
	V125= CMPcar((V124));
	goto T422;
T422:;
	if(!(((V124))==Cnil)){
	goto T423;}
	goto T418;
	goto T423;
T423:;
	if(((V125))==Cnil){
	goto T428;}
	if(!(type_of(CMPcar((V125)))==t_symbol)){
	goto T428;}
	if(!((CMPcdr((V125)))==Cnil)){
	goto T427;}
	goto T428;
T428:;
	(void)((VFUN_NARGS=2,(*(LnkLI43))(VV[25],(V125))));
	goto T427;
T427:;
	{register object V126;
	V127= CMPcar((V125));
	V128= (*(LnkLI60))(CMPcar((V125)),CMPcadr((V125)),CMPcddr((V125)));
	V126= list(2,/* INLINE-ARGS */V127,CMPcaddr(/* INLINE-ARGS */V128));
	(VV[2]->s.s_dbind)= make_cons((V126),(VV[2]->s.s_dbind));}
	V124= CMPcdr((V124));
	V125= CMPcar((V124));
	goto T422;}
	goto T418;
T418:;
	base[2]= CMPcdr((V118));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk45)();
	if(vs_base<vs_top){
	V119= vs_base[0];
	vs_base++;
	}else{
	V119= Cnil;}
	if(vs_base<vs_top){
	V120= vs_base[0];
	vs_base++;
	}else{
	V120= Cnil;}
	if(vs_base<vs_top){
	V121= vs_base[0];
	vs_base++;
	}else{
	V121= Cnil;}
	if(vs_base<vs_top){
	V122= vs_base[0];
	vs_base++;
	}else{
	V122= Cnil;}
	if(vs_base<vs_top){
	V123= vs_base[0];
	}else{
	V123= Cnil;}
	vs_top=sup;
	(void)((*(LnkLI46))((V120)));
	(void)((*(LnkLI47))(Cnil,(V121),(V122)));
	{object V129 = (*(LnkLI48))((V123),(V119));
	bds_unwind1;
	bds_unwind1;
	VMR6(V129)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1LOCAL-FUN	*/

static object LI7(V131)

register object V131;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V132;
	V132= Cnil;
	{register object V133;
	register object V134;
	V133= (VV[2]->s.s_dbind);
	V134= CMPcar((V133));
	goto T452;
T452:;
	if(!(((V133))==Cnil)){
	goto T453;}
	{object V135 = Cnil;
	VMR7(V135)}
	goto T453;
T453:;
	if(!(((V134))==(VV[8]))){
	goto T459;}
	V132= Ct;
	goto T457;
	goto T459;
T459:;
	if(!(type_of((V134))==t_cons)){
	goto T463;}
	if(!((CMPcar((V134)))==((V131)))){
	goto T457;}
	{object V136 = CMPcadr((V134));
	VMR7(V136)}
	goto T463;
T463:;
	if(!((STREF(object,(V134),0))==((V131)))){
	goto T457;}
	if(((V132))==Cnil){
	goto T471;}
	V137= Ct;
	STSET(object,(V134),8, Ct);
	(void)(Ct);
	goto T469;
	goto T471;
T471:;
	V138= Ct;
	STSET(object,(V134),4, Ct);
	(void)(Ct);
	goto T469;
T469:;
	{object V139 = list(4,VV[26],(VV[27]->s.s_dbind),(V134),(V132));
	VMR7(V139)}
	goto T457;
T457:;
	V133= CMPcdr((V133));
	V134= CMPcar((V133));
	goto T452;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SCH-LOCAL-FUN	*/

static object LI8(V141)

register object V141;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{register object V142;
	register object V143;
	V142= (VV[2]->s.s_dbind);
	V143= CMPcar((V142));
	goto T481;
T481:;
	if(!(((V142))==Cnil)){
	goto T482;}
	{object V144 = (V141);
	VMR8(V144)}
	goto T482;
T482:;
	if(((V143))==(VV[8])){
	goto T486;}
	if(type_of((V143))==t_cons){
	goto T486;}
	if(!((STREF(object,(V143),0))==((V141)))){
	goto T486;}
	{object V145 = (V143);
	VMR8(V145)}
	goto T486;
T486:;
	V142= CMPcdr((V142));
	V143= CMPcar((V142));
	goto T481;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1LOCAL-CLOSURE	*/

static object LI9(V147)

register object V147;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{register object V148;
	V148= Cnil;
	{register object V149;
	register object V150;
	V149= (VV[2]->s.s_dbind);
	V150= CMPcar((V149));
	goto T502;
T502:;
	if(!(((V149))==Cnil)){
	goto T503;}
	{object V151 = Cnil;
	VMR9(V151)}
	goto T503;
T503:;
	if(!(((V150))==(VV[8]))){
	goto T509;}
	V148= Ct;
	goto T507;
	goto T509;
T509:;
	if(!(type_of((V150))==t_cons)){
	goto T513;}
	if(!((CMPcar((V150)))==((V147)))){
	goto T507;}
	{object V152 = CMPcadr((V150));
	VMR9(V152)}
	goto T513;
T513:;
	if(!((STREF(object,(V150),0))==((V147)))){
	goto T507;}
	V153= Ct;
	STSET(object,(V150),8, Ct);
	(void)(Ct);
	{object V154 = list(4,VV[26],(VV[27]->s.s_dbind),(V150),(V148));
	VMR9(V154)}
	goto T507;
T507:;
	V149= CMPcdr((V149));
	V150= CMPcar((V149));
	goto T502;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2CALL-LOCAL	*/

static object LI10(V157,V158)

register object V157;register object V158;
{	 VMB10 VMS10 VMV10
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[13],(VV[13]->s.s_dbind));
	if((CMPcadr((V157)))==Cnil){
	goto T527;}
	(void)((*(LnkLI61))((V158)));
	princ_str("\n	cclosure_call(",VV[20]);
	(void)((*(LnkLI62))(STREF(object,CMPcar((V157)),8)));
	princ_str(");",VV[20]);
	goto T525;
	goto T527;
T527:;
	if(!(type_of((V158))==t_cons||((V158))==Cnil)){
	goto T535;}
	if(((VV[28]->s.s_dbind))==Cnil){
	goto T535;}
	if(((VV[29]->s.s_dbind))==Cnil){
	goto T535;}
	if(!((CMPcar((VV[29]->s.s_dbind)))==(CMPcar((V157))))){
	goto T535;}
	if(!(((VV[30]->s.s_dbind))==(VV[31]))){
	goto T535;}
	if(((*(LnkLI63))())==Cnil){
	goto T535;}
	if(!(((long)length((V158)))==((long)length(CMPcdr((VV[29]->s.s_dbind)))))){
	goto T535;}
	bds_bind(VV[32],VV[33]);
	(VV[34]->s.s_dbind)= number_plus((VV[34]->s.s_dbind),small_fixnum(1));
	bds_bind(VV[30],make_cons((VV[34]->s.s_dbind),Cnil));
	bds_bind(VV[35],make_cons((VV[30]->s.s_dbind),(VV[35]->s.s_dbind)));
	{object V160;
	object V161= CMPcdr((VV[29]->s.s_dbind));
	if(V161==Cnil){
	V159= Cnil;
	goto T554;}
	base[4]=V160=MMcons(Cnil,Cnil);
	goto T555;
T555:;
	(V160->c.c_car)= list(2,(V161->c.c_car),Cnil);
	if((V161=MMcdr(V161))==Cnil){
	V159= base[4];
	goto T554;}
	V160=MMcdr(V160)=MMcons(Cnil,Cnil);
	goto T555;}
	goto T554;
T554:;
	(void)((*(LnkLI64))(V159,(V158)));
	if((CMPcdr((VV[30]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T549;}
	princ_str("\n	goto T",VV[20]);
	(void)((*(LnkLI54))(CMPcar((VV[30]->s.s_dbind))));
	princ_char(59,VV[20]);
	princ_str("\nT",VV[20]);
	(void)((*(LnkLI54))(CMPcar((VV[30]->s.s_dbind))));
	princ_str(":;",VV[20]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T549;
T549:;
	(void)((*(LnkLI65))(VV[36]));
	princ_str("\n	goto TTL;",VV[20]);
	(void)((VFUN_NARGS=2,(*(LnkLI66))(VV[37],STREF(object,CMPcar((V157)),0))));
	goto T525;
	goto T535;
T535:;
	(void)((*(LnkLI61))((V158)));
	princ_str("\n	L",VV[20]);
	(void)((*(LnkLI54))(STREF(object,CMPcar((V157)),12)));
	princ_char(40,VV[20]);
	{register long V163;
	register long V164;
	V163= fix(STREF(object,CMPcar((V157)),16));
	V164= 0;
	goto T578;
T578:;
	if(!((V164)>=(V163))){
	goto T579;}
	goto T574;
	goto T579;
T579:;
	princ_str("base",VV[20]);
	V165 = CMPmake_fixnum(V164);
	(void)((*(LnkLI54))(V165));
	princ_char(44,VV[20]);
	V164= (long)(V164)+1;
	goto T578;}
	goto T574;
T574:;
	princ_str("base",VV[20]);
	if(number_compare(STREF(object,CMPcar((V157)),16),(VV[16]->s.s_dbind))==0){
	goto T592;}
	(void)((*(LnkLI54))(STREF(object,CMPcar((V157)),16)));
	goto T592;
T592:;
	princ_str(");",VV[20]);
	(VV[38]->s.s_dbind)= Ct;
	goto T525;
T525:;
	{object V166 = (VFUN_NARGS=1,(*(LnkLI67))(VV[39]));
	bds_unwind1;
	VMR10(V166)}
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

