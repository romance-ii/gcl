
#include "cmpinclude.h"
#include "cmptop.h"
void init_cmptop(){do_init(VV);}
/*	function definition for T1EXPR	*/

static void L1()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM1; VC1
	vs_reserve(VM1);
	bds_check;
	{VOL object V1;
	check_arg(1);
	V1=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	bds_bind(VV[0],(V1));
	bds_bind(VV[1],Ct);
	frs_push(FRS_CATCH,VV[2]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;}
	else{
	if(!(type_of((V1))==t_cons)){
	goto T3;}
	{register object V2;
	object V3;
	register object V4;
	V2= car((V1));
	V3= cdr((V1));
	V4= Cnil;
	if(!(type_of((V2))==t_symbol)){
	goto T8;}
	if(!(((V2))==(VV[3]))){
	goto T11;}
	V5= (VFUN_NARGS=1,(*(LnkLI258))(VV[4]));
	frs_pop();
	base[3]= V5;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
goto T11;
T11:;
	if((get((V2),VV[5],Cnil))==Cnil){
	goto T14;}
	if((symbol_value(VV[6]))==Cnil){
	goto T16;}
	(void)((VFUN_NARGS=2,(*(LnkLI259))(VV[7],(V1))));
goto T16;
T16:;
	(void)((*(LnkLI260))(Ct,(V1)));
	V6= (*(LnkLI261))((V1));
	frs_pop();
	base[3]= V6;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
goto T14;
T14:;
	V4= get((V2),VV[8],Cnil);
	if(((V4))==Cnil){
	goto T21;}
	if((symbol_value(VV[9]))==Cnil){
	goto T24;}
	(void)((*(LnkLI262))());
goto T24;
T24:;
	base[3]= (V3);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event((V4));
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;
goto T21;
T21:;
	if((get((V2),VV[10],Cnil))==Cnil){
	goto T29;}
	if((symbol_value(VV[9]))==Cnil){
	goto T31;}
	(void)((*(LnkLI262))());
goto T31;
T31:;
	base[3]= (*(LnkLI263))((V1));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk264)();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;
goto T29;
T29:;
	if((get((V2),VV[11],Cnil))==Cnil){
	goto T36;}
	V7= (*(LnkLI265))((V1));
	frs_pop();
	base[3]= V7;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
goto T36;
T36:;
	base[3]= (V2);
	vs_top=(vs_base=base+3)+1;
	Lmacro_function();
	vs_top=sup;
	V4= vs_base[0];
	if(((V4))==Cnil){
	goto T39;}
	{object V8;
	base[3]= cdr((V1));
	vs_top=(vs_base=base+3)+1;
	Lcopy_list();
	vs_top=sup;
	V9= vs_base[0];
	V8= (*(LnkLI266))((V4),(V2),V9);
	base[3]= (V8);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk264)();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;}
goto T39;
T39:;
	V10= (*(LnkLI265))((V1));
	frs_pop();
	base[3]= V10;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
goto T8;
T8:;
	if(!(type_of((V2))==t_cons)){
	goto T48;}
	V11= (*(LnkLI265))((V1));
	frs_pop();
	base[3]= V11;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
goto T48;
T48:;
	V12= (VFUN_NARGS=2,(*(LnkLI258))(VV[12],(V2)));
	frs_pop();
	base[3]= V12;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;}
goto T3;
T3:;
	frs_pop();
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;}
	}
}
/*	local entry for function CTOP-WRITE	*/

static object LI2(V14)

object V14;
{	 VMB2 VMS2 VMV2
	bds_check;
goto TTL;
TTL:;
	{object V15;
	V15= Cnil;
	bds_bind(VV[13],Cnil);
	bds_bind(VV[14],Cnil);
	bds_bind(VV[16],VV[15]);
	bds_bind(VV[17],Cnil);
	bds_bind(VV[18],small_fixnum(0));
	bds_bind(VV[19],Cnil);
	bds_bind(VV[0],Cnil);
	setq(VV[20],reverse(symbol_value(VV[20])));
	princ_str("\nvoid init_",VV[21]);
	(void)((*(LnkLI267))((V14)));
	princ_str("(){",VV[21]);
	princ_str("do_init(VV);",VV[21]);
	princ_char(125,VV[21]);
	{object V16;
	V16= symbol_value(VV[20]);
	bds_bind(VV[0],car((V16)));
goto T63;
T63:;
	if(!(endp((V16)))){
	goto T64;}
	bds_unwind1;
	goto T59;
goto T64;
T64:;
	setq(VV[1],Ct);
	V15= get(car((VV[0]->s.s_dbind)),VV[22],Cnil);
	if(((V15))==Cnil){
	goto T70;}
	base[8]= (V15);
	{object V17;
	V17= cdr((VV[0]->s.s_dbind));
	 vs_top=base+9;
	 while(!endp(V17))
	 {vs_push(car(V17));V17=cdr(V17);}
	vs_base=base+9;}
	super_funcall_no_event(base[8]);
	vs_top=sup;
goto T70;
T70:;
	V16= cdr((V16));
	(VV[0]->s.s_dbind)= car((V16));
	goto T63;}
goto T59;
T59:;
	{object V18;
	V18= symbol_value(VV[20]);
	bds_bind(VV[0],car((V18)));
goto T85;
T85:;
	if(!(endp((V18)))){
	goto T86;}
	bds_unwind1;
	goto T81;
goto T86;
T86:;
	setq(VV[1],Ct);
	V15= get(car((VV[0]->s.s_dbind)),VV[23],Cnil);
	if(((V15))==Cnil){
	goto T92;}
	base[8]= (V15);
	{object V19;
	V19= cdr((VV[0]->s.s_dbind));
	 vs_top=base+9;
	 while(!endp(V19))
	 {vs_push(car(V19));V19=cdr(V19);}
	vs_base=base+9;}
	super_funcall_no_event(base[8]);
	vs_top=sup;
goto T92;
T92:;
	V18= cdr((V18));
	(VV[0]->s.s_dbind)= car((V18));
	goto T85;}
goto T81;
T81:;
	{object V20;
	V20= Cnil;
goto T105;
T105:;
	if(!(endp(symbol_value(VV[24])))){
	goto T107;}
	goto T103;
goto T107;
T107:;
	V20= car(symbol_value(VV[24]));
	{object V21;
	V21= car(symbol_value(VV[24]));
	setq(VV[24],cdr(symbol_value(VV[24])));}
	{object V22;
	V22= (V20);
	 vs_top=base+7;
	 while(!endp(V22))
	 {vs_push(car(V22));V22=cdr(V22);}
	vs_base=base+7;}
	(void) (*Lnk250)();
	vs_top=sup;
	goto T105;}
goto T103;
T103:;
	{object V23;
	object V24;
	V23= symbol_value(VV[25]);
	V24= car((V23));
goto T122;
T122:;
	if(!(endp((V23)))){
	goto T123;}
	goto T118;
goto T123;
T123:;
	{object V25;
	V25= (V24);
	 vs_top=base+8;
	 while(!endp(V25))
	 {vs_push(car(V25));V25=cdr(V25);}
	vs_base=base+8;}
	(void) (*Lnk268)();
	vs_top=sup;
	V23= cdr((V23));
	V24= car((V23));
	goto T122;}
goto T118;
T118:;
	{object V26;
	object V27;
	V26= (VV[13]->s.s_dbind);
	V27= car((V26));
goto T138;
T138:;
	if(!(endp((V26)))){
	goto T139;}
	goto T134;
goto T139;
T139:;
	(void)((*(LnkLI269))((V27)));
	V26= cdr((V26));
	V27= car((V26));
	goto T138;}
goto T134;
T134:;
	{object V28;
	object V29;
	V28= symbol_value(VV[26]);
	V29= car((V28));
goto T153;
T153:;
	if(!(endp((V28)))){
	goto T154;}
	goto T149;
goto T154;
T154:;
	princ_str("\nstatic void LC",VV[27]);
	V30= structure_ref((V29),VV[28],3);
	(void)((*(LnkLI270))(/* INLINE-ARGS */V30));
	princ_str("();",VV[27]);
	V28= cdr((V28));
	V29= car((V28));
	goto T153;}
goto T149;
T149:;
	{object V31;
	object V32;
	V31= symbol_value(VV[29]);
	V32= car((V31));
goto T171;
T171:;
	if(!(endp((V31)))){
	goto T172;}
	goto T167;
goto T172;
T172:;
	princ_str("\n#define VM",VV[27]);
	(void)((*(LnkLI270))(car((V32))));
	princ_char(32,VV[27]);
	(void)((*(LnkLI270))(cdr((V32))));
	V31= cdr((V31));
	V32= car((V31));
	goto T171;}
goto T167;
T167:;
	(void)((*(LnkLI271))(Cnil));
	{object V33;
	object V34;
	base[8]= (VV[18]->s.s_dbind);
	base[9]= symbol_value(VV[30]);
	base[10]= small_fixnum(1);
	vs_top=(vs_base=base+8)+3;
	Lminus();
	vs_top=sup;
	V33= vs_base[0];
	V34= small_fixnum(0);
goto T194;
T194:;
	if(!(number_compare((V34),(V33))>=0)){
	goto T195;}
	goto T187;
goto T195;
T195:;
	(void)((*(LnkLI271))(Cnil));
	V34= one_plus((V34));
	goto T194;}
goto T187;
T187:;
	princ_str("\nstatic char * VVi[",VV[27]);
	V35= number_plus(small_fixnum(1),symbol_value(VV[30]));
	(void)((*(LnkLI270))(/* INLINE-ARGS */V35));
	princ_str("]={",VV[27]);
	princ_str("\n#define Cdata VV[",VV[27]);
	(void)((*(LnkLI270))(symbol_value(VV[30])));
	princ_char(93,VV[27]);
	if((VV[17]->s.s_dbind)!=Cnil){
	goto T211;}
	princ_char(10,VV[27]);
	(void)((*(LnkLI270))(small_fixnum(0)));
goto T211;
T211:;
	{register object V36;
	V36= nreverse((VV[17]->s.s_dbind));
goto T217;
T217:;
	if(((V36))!=Cnil){
	goto T218;}
	princ_str("\n};",VV[27]);
	goto T214;
goto T218;
T218:;
	princ_str("\n(char *)(",VV[27]);
	(void)((*(LnkLI270))(caar((V36))));
	(void)((*(LnkLI270))(cadar((V36))));
	if((cdr((V36)))==Cnil){
	goto T230;}
	V37= VV[31];
	goto T228;
goto T230;
T230:;
	V37= VV[32];
goto T228;
T228:;
	(void)((*(LnkLI270))(V37));
	V36= cdr((V36));
	goto T217;}
goto T214;
T214:;
	princ_str("\n#define VV ((object *)VVi)",VV[27]);
	vs_base=vs_top;
	(void) (*Lnk272)();
	vs_top=sup;
	{object V38;
	object V39;
	V38= (VV[13]->s.s_dbind);
	V39= car((V38));
goto T241;
T241:;
	if(!(endp((V38)))){
	goto T242;}
	{object V40 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR2(V40)}
goto T242;
T242:;
	{register object V41;
	register object V42;
	V41= cadr((V39));
	V42= caddr((V39));
	if(!(((V42))==(VV[33]))){
	goto T251;}
	princ_str("\nstatic object *Lclptr",VV[27]);
	(void)((*(LnkLI270))((V41)));
	princ_char(59,VV[27]);
	V42= VV[34];
	goto T249;
goto T251;
T251:;
	if(((V42))==Cnil){
	goto T260;}
	V42= (*(LnkLI273))((V42));
	goto T258;
goto T260;
T260:;
	V42= VV[35];
goto T258;
T258:;
goto T249;
T249:;
	princ_str("\nstatic ",VV[27]);
	if(!(equal((V42),VV[36]))){
	goto T267;}
	V43= VV[37];
	goto T265;
goto T267;
T267:;
	V43= (V42);
goto T265;
T265:;
	(void)((*(LnkLI270))(V43));
	princ_str(" LnkT",VV[27]);
	(void)((*(LnkLI270))((V41)));
	princ_str("() ;",VV[27]);
	princ_str("\nstatic ",VV[27]);
	if(!(equal((V42),VV[38]))){
	goto T276;}
	V44= VV[39];
	goto T274;
goto T276;
T276:;
	V44= (V42);
goto T274;
T274:;
	(void)((*(LnkLI270))(V44));
	princ_str(" (*Lnk",VV[27]);
	(void)((*(LnkLI270))((V41)));
	princ_str(")() = LnkT",VV[27]);
	(void)((*(LnkLI270))((V41)));
	princ_char(59,VV[27]);}
	V38= cdr((V38));
	V39= car((V38));
	goto T241;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAYBE-EVAL	*/

static object LI3(V47,V48)

object V47;register object V48;
{	 VMB3 VMS3 VMV3
goto TTL;
TTL:;
	if((V47)!=Cnil){
	goto T288;}
	if(type_of(car((V48)))==t_symbol){
	goto T289;}
	goto T288;
goto T289;
T289:;
	V47= get(car((V48)),VV[40],Cnil);
goto T288;
T288:;
	if(((V47))==Cnil){
	goto T294;}
	if((VV[41])==(symbol_value(VV[42]))){
	goto T292;}
goto T294;
T294:;
	if(!(type_of(symbol_value(VV[42]))==t_cons)){
	goto T293;}
	{register object x= VV[43],V49= symbol_value(VV[42]);
	while(!endp(V49))
	if(eql(x,V49->c.c_car)){
	goto T300;
	}else V49=V49->c.c_cdr;
	goto T293;}
goto T300;
T300:;
goto T292;
T292:;
	if(((V48))==Cnil){
	goto T301;}
	base[0]= (V48);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk274)();
	vs_top=sup;
goto T301;
T301:;
	{object V50 = Ct;
	VMR3(V50)}
goto T293;
T293:;
	{object V51 = Cnil;
	VMR3(V51)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for T1EVAL-WHEN	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	bds_check;
	{register object V52;
	check_arg(1);
	V52=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V53;
	register object V54;
	V53= Cnil;
	V54= Cnil;
	if(!(endp((V52)))){
	goto T307;}
	(void)((*(LnkLI275))(VV[44],small_fixnum(1),small_fixnum(0)));
goto T307;
T307:;
	{register object V55;
	register object V56;
	V55= car((V52));
	V56= car((V55));
goto T314;
T314:;
	if(!(endp((V55)))){
	goto T315;}
	goto T310;
goto T315;
T315:;
	{object V57= (V56);
	if((V57!= VV[276]))goto T320;
	V53= Ct;
	goto T319;
goto T320;
T320:;
	if((V57!= VV[43]))goto T322;
	V54= Ct;
	goto T319;
goto T322;
T322:;
	if((V57!= VV[277]))goto T324;
	goto T319;
goto T324;
T324:;
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[45],(V56))));}
goto T319;
T319:;
	V55= cdr((V55));
	V56= car((V55));
	goto T314;}
goto T310;
T310:;
	base[1]= car((V52));
	bds_bind(VV[42],base[1]);
	if(((V53))==Cnil){
	goto T332;}
	base[2]= (*(LnkLI278))(cdr((V52)));
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
goto T332;
T332:;
	if(((V54))==Cnil){
	goto T335;}
	base[2]= make_cons(VV[46],cdr((V52)));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk274)();
	bds_unwind1;
	return;
goto T335;
T335:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;}
	}
}
/*	local entry for function T1PROGN	*/

static object LI5(V59)

object V59;
{	 VMB5 VMS5 VMV5
	bds_check;
goto TTL;
TTL:;
	if(!(equal(car((V59)),VV[47]))){
	goto T339;}
	bds_bind(VV[48],Ct);
	{object V60 = (*(LnkLI278))(cdr((V59)));
	bds_unwind1;
	VMR5(V60)}
goto T339;
T339:;
	{register object V61;
	register object V62;
	V61= (V59);
	V62= car((V61));
goto T344;
T344:;
	if(!(endp((V61)))){
	goto T345;}
	{object V63 = Cnil;
	VMR5(V63)}
goto T345;
T345:;
	base[1]= (V62);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk264)();
	vs_top=sup;
	V61= cdr((V61));
	V62= car((V61));
	goto T344;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CMPFIX-ARGS	*/

static object LI6(V66,V67)

object V66;object V67;
{	 VMB6 VMS6 VMV6
goto TTL;
TTL:;
	{register object V68;
	register object V69;
	V68= Cnil;
	base[1]= cadr((V66));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V69= vs_base[0];
	{register object V70;
	register object V71;
	V70= (V67);
	V71= car((V70));
goto T363;
T363:;
	if(!(endp((V70)))){
	goto T364;}
	goto T359;
goto T364;
T364:;
	{register object x= car((V71)),V72= (V69);
	while(!endp(V72))
	if(eql(x,V72->c.c_car)){
	V68= V72;
	goto T369;
	}else V72=V72->c.c_cdr;
	V68= Cnil;}
goto T369;
T369:;
	if((V68)==Cnil){
	goto T370;}
	{register object V73;
	register object V74;
	V73= (V68);
	V74= cadr((V71));
	if(type_of((V73))!=t_cons)FEwrong_type_argument(Scons,(V73));
	((V73))->c.c_car = (V74);}
goto T370;
T370:;
	V70= cdr((V70));
	V71= car((V70));
	goto T363;}
goto T359;
T359:;
	{register object x= VV[49],V75= (V69);
	while(!endp(V75))
	if(eql(x,V75->c.c_car)){
	V68= V75;
	goto T383;
	}else V75=V75->c.c_cdr;
	V68= Cnil;}
goto T383;
T383:;
	if(((V68))==Cnil){
	goto T381;}
	{object V77;
	V77= append((V67),cdr((V68)));
	if(type_of(V68)!=t_cons)FEwrong_type_argument(Scons,V68);
	(V68)->c.c_cdr = (V77);
	goto T379;}
goto T381;
T381:;
	V78= make_cons(VV[49],(V67));
	V69= append((V69),/* INLINE-ARGS */V78);
goto T379;
T379:;
	{object V79 = listA(3,car((V66)),(V69),cddr((V66)));
	VMR6(V79)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFUN	*/

static object LI7(V81)

object V81;
{	 VMB7 VMS7 VMV7
	bds_check;
goto TTL;
TTL:;
	{object V82;
	V82= symbol_value(VV[50]);
	bds_bind(VV[52],Cnil);
	if(endp((V81))){
	goto T389;}
	if(!(endp(cdr((V81))))){
	goto T388;}
goto T389;
T389:;
	V84 = make_fixnum(length((V81)));
	(void)((*(LnkLI275))(VV[51],small_fixnum(2),V84));
goto T388;
T388:;
	if(type_of(car((V81)))==t_symbol){
	goto T393;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[53],car((V81)))));
goto T393;
T393:;
	V85= make_cons(VV[51],(V81));
	(void)((*(LnkLI260))(Cnil,/* INLINE-ARGS */V85));
goto T398;
T398:;
	setq(VV[6],Ct);
	setq(VV[54],Cnil);
	{register object V86;
	object V87;
	object V88;
	register object V89;{object V90;
	V90= get(car((V81)),VV[60],Cnil);
	if(V90==Cnil)goto T405;
	V87= V90;
	goto T404;
goto T405;
T405:;}
	setq(VV[61],number_plus(symbol_value(VV[61]),small_fixnum(1)));
	V87= symbol_value(VV[61]);
goto T404;
T404:;
	V89= car((V81));
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	V86= Cnil;
	bds_bind(VV[59],Cnil);
	V88= Cnil;
	V86= (VFUN_NARGS=2,(*(LnkLI279))(cdr((V81)),(V89)));
	if(!(eql((V82),symbol_value(VV[50])))){
	goto T412;}
	goto T411;
goto T412;
T412:;
	(void)(structure_set(cadr((V86)),VV[62],4,Ct));
goto T411;
T411:;
	V91= structure_ref(cadr((V86)),VV[62],1);
	(void)((*(LnkLI280))(/* INLINE-ARGS */V91));
	if((get((V89),VV[63],Cnil))==Cnil){
	goto T415;}
	{object V92;
	V92= make_fixnum(length(car(caddr((V86)))));
	(void)(sputprop((V89),VV[63],(V92)));
	base[6]= (V92);
	base[7]= VV[65];
	base[8]= Ct;
	vs_top=(vs_base=base+6)+3;
	Lmake_list();
	vs_top=sup;
	V93= vs_base[0];
	V94= list(4,VV[64],(V89),V93,Ct);
	(void)((*(LnkLI281))(/* INLINE-ARGS */V94));}
goto T415;
T415:;
	if((get((V89),VV[66],Cnil))==Cnil){
	goto T426;}
	{object V95;
	register object V96;
	V95= caddr((V86));
	V96= Cnil;
	if((cadr((V95)))==Cnil){
	goto T431;}
	goto T426;
goto T431;
T431:;
	if((caddr((V95)))==Cnil){
	goto T433;}
	goto T426;
goto T433;
T433:;
	if((cadddr((V95)))==Cnil){
	goto T435;}
	goto T426;
goto T435;
T435:;
	if((length(car((V95))))<(64)){
	goto T437;}
	goto T426;
goto T437;
T437:;
	{register object V97;
	register object V98;
	object V99;
	V97= car((V95));
	V98= get((V89),VV[67],Cnil);
	V99= Cnil;
goto T444;
T444:;
	if(!(endp((V97)))){
	goto T445;}
	if(endp((V98))){
	goto T448;}
	goto T440;
goto T448;
T448:;
	if(((V96))==Cnil){
	goto T451;}
	V81= (*(LnkLI282))((V81),(V96));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T398;
goto T451;
T451:;
	if(((V99))==Cnil){
	goto T439;}
	goto T440;
goto T445;
T445:;
	{register object V100;
	V100= car((V97));
	if(!(equal(car((V98)),VV[68]))){
	goto T458;}
	goto T440;
goto T458;
T458:;
	V101= structure_ref((V100),VV[69],1);
	if((/* INLINE-ARGS */V101)==(VV[70])){
	goto T464;}
	V102= structure_ref((V100),VV[69],1);
	if(!((/* INLINE-ARGS */V102)==(VV[71]))){
	goto T463;}
	if(!((car((V98)))==(Ct))){
	goto T463;}
goto T464;
T464:;
	if((structure_ref((V100),VV[69],3))!=Cnil){
	goto T463;}
	V103= structure_ref((V100),VV[69],4);
	if(!((/* INLINE-ARGS */V103)==(VV[72]))){
	goto T462;}
goto T463;
T463:;
	V104= structure_ref((V100),VV[69],0);
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V105= vs_base[0];
	V106= list(2,/* INLINE-ARGS */V104,V105);
	V96= make_cons(/* INLINE-ARGS */V106,(V96));
goto T462;
T462:;
	V107= car((V98));
	V108= structure_ref((V100),VV[69],5);
	if(((*(LnkLI283))(/* INLINE-ARGS */V107,/* INLINE-ARGS */V108))==Cnil){
	goto T461;}
	{register object x= car((V98)),V109= VV[73];
	while(!endp(V109))
	if(eql(x,V109->c.c_car)){
	goto T456;
	}else V109=V109->c.c_cdr;}
	V110= structure_ref((V100),VV[69],4);
	if((/* INLINE-ARGS */V110)==(VV[74])){
	goto T456;}
	if((symbol_value(VV[75]))!=Cnil){
	goto T456;}
	V112= structure_ref(cadr((V86)),VV[62],0);
	{register object x= (V100),V111= /* INLINE-ARGS */V112;
	while(!endp(V111))
	if(eql(x,V111->c.c_car)){
	goto T485;
	}else V111=V111->c.c_cdr;
	goto T456;}
goto T485;
T485:;
goto T461;
T461:;
	if(((V96))!=Cnil){
	goto T486;}
	V113= structure_ref((V100),VV[69],0);
	(void)((VFUN_NARGS=3,(*(LnkLI259))(VV[76],(V89),/* INLINE-ARGS */V113)));
goto T486;
T486:;
	V99= Ct;}
goto T456;
T456:;
	V97= cdr((V97));
	V98= cdr((V98));
	goto T444;}
goto T440;
T440:;
	goto T426;
goto T439;
T439:;
	if(!(type_of((V87))==t_fixnum||
type_of((V87))==t_bignum||
type_of((V87))==t_ratio||
type_of((V87))==t_shortfloat||
type_of((V87))==t_longfloat||
type_of((V87))==t_complex)){
	goto T426;}}
	V114= get((V89),VV[67],Cnil);
	V115= get((V89),VV[78],Cnil);
	V116= get((V89),VV[67],Cnil);
	V117= list(5,(V89),V114,V115,small_fixnum(3),(*(LnkLI284))((V87),V116));
	setq(VV[77],make_cons(/* INLINE-ARGS */V117,symbol_value(VV[77])));
	goto T424;
goto T426;
T426:;
	{object V118;
	V119= get((V89),VV[78],Cnil);
	V118= ((V119)==(Ct)?Ct:Cnil);
	if(((V118))==Cnil){
	goto T424;}}
goto T424;
T424:;
	if((cadddr((V86)))==Cnil){
	goto T502;}
	V88= cadddr((V86));
goto T502;
T502:;
	(void)((*(LnkLI285))());
	V120= list(6,VV[51],(V89),(V87),(V86),(V88),(VV[59]->s.s_dbind));
	setq(VV[20],make_cons(/* INLINE-ARGS */V120,symbol_value(VV[20])));
	V121= make_cons((V89),(V87));
	setq(VV[79],make_cons(/* INLINE-ARGS */V121,symbol_value(VV[79])));
	V122= symbol_value(VV[79]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}
	{object V123 = Cnil;
	bds_unwind1;
	VMR7(V123)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-INLINE-STRING	*/

static object LI8(V126,V127)

object V126;object V127;
{	 VMB8 VMS8 VMV8
goto TTL;
TTL:;
	if(((V127))!=Cnil){
	goto T511;}
	base[0]= Cnil;
	base[1]= VV[80];
	base[2]= (V126);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V128 = vs_base[0];
	VMR8(V128)}
goto T511;
T511:;
	{register object V129;
	V129= (VFUN_NARGS=7,(*(LnkLI286))(small_fixnum(100),VV[81],VV[82],VV[83],small_fixnum(0),VV[84],Ct));
	base[0]= (V129);
	base[1]= VV[85];
	base[2]= (V126);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{register object V130;
	register long V131;
	V131= 0;
	V130= (V127);
goto T524;
T524:;
	if(!(endp(cdr((V130))))){
	goto T525;}
	base[0]= (V129);
	base[1]= VV[86];
	base[2]= make_fixnum(V131);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T521;
goto T525;
T525:;
	base[0]= (V129);
	base[1]= VV[87];
	base[2]= make_fixnum(V131);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V130= cdr((V130));
	V131= (V131)+1;
	goto T524;}
goto T521;
T521:;
	{object V132 = (V129);
	VMR8(V132)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CS-PUSH	*/

static object LI9(va_alist)
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V133;
	Vcs[0]=Vcs[0];
	va_start(ap);
	narg = narg - 0;
	if (narg <= 0) goto T540;
	else {
	V133= va_arg(ap,object);}
	--narg; goto T541;
goto T540;
T540:;
	V133= Cnil;
goto T541;
T541:;
	{object V134;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V134= symbol_value(VV[88]);
	if(((V133))==Cnil){
	goto T549;}
	V135= make_cons((V133),(V134));
	goto T547;
goto T549;
T549:;
	V135= (V134);
goto T547;
T547:;
	setq(VV[14],make_cons(V135,symbol_value(VV[14])));
	{object V136 = (V134);
	VMR9(V136)}}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function F-TYPE	*/

static long LI10(V138)

register object V138;
{	 VMB10 VMS10 VMV10
goto TTL;
TTL:;
	base[0]= (V138);
	base[1]= VV[69];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk287)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T551;}
	V138= structure_ref((V138),VV[69],5);
goto T551;
T551:;
	if(((V138))==Cnil){
	goto T558;}
	base[0]= (V138);
	base[1]= VV[89];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk288)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T558;}
	{long V139 = 1;
	VMR10(V139)}
goto T558;
T558:;
	{long V140 = 0;
	VMR10(V140)}
	base[0]=base[0];
}
/*	local entry for function PROCLAIMED-ARGD	*/

static long LI11(V143,V144)

register object V143;object V144;
{	 VMB11 VMS11 VMV11
goto TTL;
TTL:;
	{register long V145;
	register long V146;
	register object V147;
	register object V148;
	V145= length((V143));
	V146= 8;
	V147= make_fixnum((*(LnkLI289))((V144)));
	V148= Ct;
goto T568;
T568:;
	if(eql(small_fixnum(0),(V147))){
	goto T570;}
	V145= (V145)+(((fix((V147))) << (V146)));
goto T570;
T570:;
	if(((V148))==Cnil){
	goto T574;}
	V146= 10;
	V148= Cnil;
goto T574;
T574:;
	if(((V143))!=Cnil){
	goto T580;}
	{long V149 = V145;
	VMR11(V149)}
goto T580;
T580:;
	V146= (V146)+(2);
	{register object V151;
	V151= car((V143));
	V143= cdr((V143));
	V150= (V151);}
	V147= make_fixnum((*(LnkLI289))(V150));
	goto T568;}
}
/*	local entry for function WT-IF-PROCLAIMED	*/

static object LI12(V155,V156,V157)

register object V155;object V156;object V157;
{	 VMB12 VMS12 VMV12
goto TTL;
TTL:;
	if(((VFUN_NARGS=1,(*(LnkLI291))((V155))))==Cnil){
	goto T592;}
	{register object x= (V155),V158= symbol_value(VV[77]);
	while(!endp(V158))
	if(type_of(V158->c.c_car)==t_cons &&eql(x,V158->c.c_car->c.c_car)){
	goto T596;
	}else V158=V158->c.c_cdr;
	goto T595;}
goto T596;
T596:;
	V159= list(2,VV[91],(V155));
	V160= (*(LnkLI293))(VV[92],(V156));
	V161= get((V155),VV[67],Cnil);
	V162= get((V155),VV[78],Cnil);
	V163 = make_fixnum((*(LnkLI294))(V161,V162));
	V164= list(4,VV[90],/* INLINE-ARGS */V159,/* INLINE-ARGS */V160,V163);
	(void)((VFUN_NARGS=1,(*(LnkLI292))(/* INLINE-ARGS */V164)));
	{object V165 = Ct;
	VMR12(V165)}
goto T595;
T595:;
	{register object V166;
	register object V167;
	object V168;
	V166= make_fixnum(length(car(caddr((V157)))));
	V169= get((V155),VV[67],Cnil);
	V167= make_fixnum(length(V169));
	V171= get((V155),VV[67],Cnil);
	{register object x= VV[68],V170= V171;
	while(!endp(V170))
	if(eql(x,V170->c.c_car)){
	V168= V170;
	goto T604;
	}else V170=V170->c.c_cdr;
	V168= Cnil;}
goto T604;
T604:;
	if(((V168))==Cnil){
	goto T607;}
	base[0]= (V166);
	vs_top=(vs_base=base+0)+1;
	Lmonotonically_nonincreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T609;}
	goto T600;
goto T609;
T609:;{object V172;
	V173 = make_fixnum(length((V168)));
	V172= number_minus((V167),V173);
	if(V172==Cnil)goto T612;
	goto T600;
goto T612;
T612:;}
	V174 = make_fixnum(length((V168)));
	V175= number_minus((V167),V174);
	(void)((VFUN_NARGS=4,(*(LnkLI259))(VV[93],(V155),/* INLINE-ARGS */V175,(V166))));
	goto T600;
goto T607;
T607:;
	if(eql((V166),(V167))){
	goto T615;}
	(void)((VFUN_NARGS=4,(*(LnkLI259))(VV[94],(V155),(V167),(V166))));
	goto T600;
goto T615;
T615:;
	(void)((VFUN_NARGS=2,(*(LnkLI259))(VV[95],(V155))));}
goto T600;
T600:;
	{object V176 = Cnil;
	VMR12(V176)}
goto T592;
T592:;
	{object V177 = Cnil;
	VMR12(V177)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VOLATILE	*/

static object LI13(V179)

object V179;
{	 VMB13 VMS13 VMV13
goto TTL;
TTL:;
	if((structure_ref((V179),VV[62],4))==Cnil){
	goto T618;}
	{object V180 = VV[96];
	VMR13(V180)}
goto T618;
T618:;
	{object V181 = VV[97];
	VMR13(V181)}
	return Cnil;
}
/*	local entry for function REGISTER	*/

static object LI14(V183)

object V183;
{	 VMB14 VMS14 VMV14
goto TTL;
TTL:;
	if(!(equal(symbol_value(VV[16]),VV[98]))){
	goto T621;}
	{long V184= fix(structure_ref((V183),VV[69],6));
	if(!((/* INLINE-ARGS */V184)>=(fix(symbol_value(VV[99]))))){
	goto T621;}}
	{object V185 = VV[100];
	VMR14(V185)}
goto T621;
T621:;
	{object V186 = VV[101];
	VMR14(V186)}
	return Cnil;
}
/*	local entry for function VARARG-P	*/

static object LI15(V188)

object V188;
{	 VMB15 VMS15 VMV15
goto TTL;
TTL:;
	V189= get((V188),VV[78],Cnil);
	if(equal(V189,Ct)){
	goto T625;}
	{object V190 = Cnil;
	VMR15(V190)}
goto T625;
T625:;
	{register object V191;
	V191= get((V188),VV[67],Cnil);
goto T630;
T630:;
	if(((V191))!=Cnil){
	goto T631;}
	{object V192 = Ct;
	VMR15(V192)}
goto T631;
T631:;
	if(!(type_of((V191))==t_cons)){
	goto T636;}
	goto T635;
goto T636;
T636:;
	{object V193 = Cnil;
	VMR15(V193)}
goto T635;
T635:;
	if(!((car((V191)))==(Ct))){
	goto T639;}
	goto T638;
goto T639;
T639:;
	if(!((car((V191)))==(VV[68]))){
	goto T641;}
	goto T638;
goto T641;
T641:;
	{object V194 = Cnil;
	VMR15(V194)}
goto T638;
T638:;
	V191= cdr((V191));
	goto T630;}
	return Cnil;
}
/*	local entry for function MAXARGS	*/

static object LI16(V196)

register object V196;
{	 VMB16 VMS16 VMV16
goto TTL;
TTL:;
	if((cadr(cddddr((V196))))!=Cnil){
	goto T646;}
	if((caddr((V196)))==Cnil){
	goto T647;}
goto T646;
T646:;
	{object V197 = small_fixnum(64);
	VMR16(V197)}
goto T647;
T647:;
	base[0]= make_fixnum(length(car((V196))));
	base[1]= make_fixnum(length(cadr((V196))));
	V198 = make_fixnum(length(car(cddddr((V196)))));
	base[2]= number_times(small_fixnum(2),V198);
	vs_top=(vs_base=base+0)+3;
	Lplus();
	vs_top=sup;
	{object V199 = vs_base[0];
	VMR16(V199)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-ADDRESS	*/

static object LI17(V202,V203)

object V202;object V203;
{	 VMB17 VMS17 VMV17
goto TTL;
TTL:;
	V204= list(2,(V202),(V203));
	setq(VV[17],make_cons(/* INLINE-ARGS */V204,symbol_value(VV[17])));
	{object V205;
	V205= symbol_value(VV[18]);
	setq(VV[18],number_plus(symbol_value(VV[18]),small_fixnum(1)));
	{object V206 = (V205);
	VMR17(V206)}}
	return Cnil;
}
/*	local entry for function T2DEFUN	*/

static object LI18(V212,V213,V214,V215,V216)

register object V212;register object V213;register object V214;object V215;object V216;
{	 VMB18 VMS18 VMV18
goto TTL;
TTL:;
	if((get((V212),VV[102],Cnil))==Cnil){
	goto T658;}
	{object V217 = Cnil;
	VMR18(V217)}
goto T658;
T658:;
	if(((V215))==Cnil){
	goto T661;}
	V218= list(4,VV[103],list(2,VV[91],(V212)),(V215),VV[104]);
	(void)((VFUN_NARGS=1,(*(LnkLI292))(/* INLINE-ARGS */V218)));
goto T661;
T661:;
	{object V219;
	V219= (*(LnkLI295))((V212),(V213),(V214));
	if(((V219))==Cnil){
	goto T667;}
	goto T664;
goto T667;
T667:;
	if(((*(LnkLI296))((V212)))==Cnil){
	goto T670;}
	{object V220;
	V220= cadddr(caddr((V214)));
	princ_str("\nstatic object LI",VV[27]);
	(void)((*(LnkLI270))((V213)));
	princ_str("();",VV[27]);
	if(((V220))==Cnil){
	goto T678;}
	V221= list(2,VV[91],(V212));
	V222= (*(LnkLI293))(VV[106],(V213));
	V223 = make_fixnum(length(car(caddr((V214)))));
	V224= (*(LnkLI297))(caddr((V214)));
	V225= (*(LnkLI290))(/* INLINE-ARGS */V224,small_fixnum(8));
	V226= number_plus(V223,/* INLINE-ARGS */V225);
	base[0]= Cnil;
	base[1]= VV[107];
	base[2]= (V213);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V227= vs_base[0];
	V228= list(5,VV[105],/* INLINE-ARGS */V221,/* INLINE-ARGS */V222,/* INLINE-ARGS */V226,(*(LnkLI293))(V227,VV[108]));
	(void)((VFUN_NARGS=1,(*(LnkLI292))(/* INLINE-ARGS */V228)));
	goto T664;
goto T678;
T678:;
	V229= list(2,VV[91],(V212));
	V230= (*(LnkLI293))(VV[110],(V213));
	V231 = make_fixnum(length(car(caddr((V214)))));
	V232= (*(LnkLI297))(caddr((V214)));
	V233= (*(LnkLI290))(/* INLINE-ARGS */V232,small_fixnum(8));
	V234= list(4,VV[109],/* INLINE-ARGS */V229,/* INLINE-ARGS */V230,number_plus(V231,/* INLINE-ARGS */V233));
	(void)((VFUN_NARGS=1,(*(LnkLI292))(/* INLINE-ARGS */V234)));
	goto T664;}
goto T670;
T670:;
	if(!(type_of((V213))==t_fixnum||
type_of((V213))==t_bignum||
type_of((V213))==t_ratio||
type_of((V213))==t_shortfloat||
type_of((V213))==t_longfloat||
type_of((V213))==t_complex)){
	goto T685;}
	princ_str("\nstatic void L",VV[27]);
	(void)((*(LnkLI270))((V213)));
	princ_str("();",VV[27]);
	V235= list(2,VV[91],(V212));
	V236= list(3,VV[111],/* INLINE-ARGS */V235,(*(LnkLI293))(VV[112],(V213)));
	(void)((VFUN_NARGS=1,(*(LnkLI292))(/* INLINE-ARGS */V236)));
	goto T664;
goto T685;
T685:;
	princ_char(10,VV[27]);
	(void)((*(LnkLI270))((V213)));
	princ_str("();",VV[27]);
	V237= list(2,VV[91],(V212));
	V238= list(3,VV[111],/* INLINE-ARGS */V237,(*(LnkLI293))(VV[113],(V213)));
	(void)((VFUN_NARGS=1,(*(LnkLI292))(/* INLINE-ARGS */V238)));}
goto T664;
T664:;
	if(!(number_compare(symbol_value(VV[114]),small_fixnum(2))<0)){
	goto T696;}
	{object V239 = sputprop((V212),VV[115],Ct);
	VMR18(V239)}
goto T696;
T696:;
	{object V240 = Cnil;
	VMR18(V240)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-DEBUG	*/

static object LI19(V243,V244)

object V243;object V244;
{	 VMB19 VMS19 VMV19
goto TTL;
TTL:;
	{object V245 = putprop((V243),(V244),VV[116]);
	VMR19(V245)}
	return Cnil;
}
/*	local entry for function T3DEFUN	*/

static object LI20(V251,V252,V253,V254,V255)

register object V251;register object V252;register object V253;object V254;object V255;
{	 VMB20 VMS20 VMV20
	bds_check;
goto TTL;
TTL:;
	{register object V256;
	V256= Cnil;
	bds_bind(VV[0],list(2,VV[51],(V251)));
	bds_bind(VV[16],(*(LnkLI298))(cadr((V253))));
	bds_bind(VV[117],Cnil);
	{register object V257;
	register object V258;
	V257= symbol_value(VV[77]);
	V258= car((V257));
goto T708;
T708:;
	if(!(endp((V257)))){
	goto T709;}
	goto T703;
goto T709;
T709:;{object V259;
	base[4]= cadddr((V258));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk299)();
	vs_top=sup;
	V259= vs_base[0];
	if(V259==Cnil)goto T714;
	goto T713;
goto T714;
T714:;}
	base[4]= VV[118];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
goto T713;
T713:;
	if((car((V258)))==((V251))){
	goto T719;}
	goto T718;
goto T719;
T719:;
	if((cadr(cddddr((V258))))==Cnil){
	goto T721;}
	goto T718;
goto T721;
T721:;
	V256= (V258);
	if(((V256))==Cnil){
	goto T703;}
	goto T704;
goto T718;
T718:;
	V257= cdr((V257));
	V258= car((V257));
	goto T708;}
goto T704;
T704:;
	if(((VFUN_NARGS=1,(*(LnkLI291))((V251))))!=Cnil){
	goto T729;}
	V260= list(4,(V251),(V252),cadr((V256)),caddr((V256)));
	setq(VV[25],make_cons(/* INLINE-ARGS */V260,symbol_value(VV[25])));
goto T729;
T729:;
	V261= structure_ref(cadr((V253)),VV[62],1);
	(void)((*(LnkLI300))(/* INLINE-ARGS */V261,small_fixnum(0)));
	base[3]= VV[119];
	{object V262= caddr((V256));
	if((V262!= VV[89]))goto T736;
	base[4]= VV[120];
	goto T735;
goto T736;
T736:;
	if((V262!= VV[142]))goto T737;
	base[4]= VV[121];
	goto T735;
goto T737;
T737:;
	if((V262!= VV[143]))goto T738;
	base[4]= VV[122];
	goto T735;
goto T738;
T738:;
	if((V262!= VV[144]))goto T739;
	base[4]= VV[123];
	goto T735;
goto T739;
T739:;
	base[4]= VV[124];}
goto T735;
T735:;
	base[5]= (V251);
	base[6]= (V252);
	base[7]= (V253);
	base[8]= (V255);
	base[9]= (V256);
	vs_top=(vs_base=base+3)+7;
	(void) (*Lnk301)();
	vs_top=sup;
	goto T701;
goto T703;
T703:;
	if(((*(LnkLI296))((V251)))==Cnil){
	goto T746;}
	V263= structure_ref(cadr((V253)),VV[62],1);
	(void)((*(LnkLI300))(/* INLINE-ARGS */V263,small_fixnum(0)));
	base[3]= VV[125];
	base[4]= VV[124];
	base[5]= (V251);
	base[6]= (V252);
	base[7]= (V253);
	base[8]= (V255);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk301)();
	vs_top=sup;
	goto T701;
goto T746;
T746:;
	V264= structure_ref(cadr((V253)),VV[62],1);
	(void)((*(LnkLI300))(/* INLINE-ARGS */V264,small_fixnum(2)));
	base[3]= VV[126];
	base[4]= VV[127];
	base[5]= (V251);
	base[6]= (V252);
	base[7]= (V253);
	base[8]= (V255);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk301)();
	vs_top=sup;
goto T701;
T701:;
	(void)((*(LnkLI302))((V252)));
	{object V265 = (*(LnkLI303))((V251),(V253));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR20(V265)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for T3DEFUN-AUX	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	bds_check;
	{object V266;
	object V267;
	if(vs_top-vs_base<2) too_few_arguments();
	V266=(base[0]);
	bds_bind(VV[128],base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V267=(base[2]);
	vs_top=sup;
	bds_bind(VV[14],Cnil);
	bds_bind(VV[129],small_fixnum(0));
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],small_fixnum(0));
	bds_bind(VV[132],small_fixnum(0));
	bds_bind(VV[133],Cnil);
	bds_bind(VV[134],make_cons((VV[128]->s.s_dbind),Cnil));
	bds_bind(VV[135],(VV[128]->s.s_dbind));
	setq(VV[137],number_plus(symbol_value(VV[137]),small_fixnum(1)));
	bds_bind(VV[136],symbol_value(VV[137]));
	bds_bind(VV[138],Cnil);
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],small_fixnum(0));
	base[16]= (V266);
	{object V268;
	V268= (V267);
	 vs_top=base+17;
	 while(!endp(V268))
	 {vs_push(car(V268));V268=cdr(V268);}
	vs_base=base+17;}
	super_funcall_no_event(base[16]);
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
	return;
	}
}
/*	local entry for function T3DEFUN-LOCAL-ENTRY	*/

static object LI22(V274,V275,V276,V277,V278)

object V274;object V275;object V276;object V277;object V278;
{	 VMB22 VMS22 VMV22
	bds_check;
goto TTL;
TTL:;
	{object V279;
	object V280;
	V279= Cnil;
	V280= caaddr((V276));
	{register object V281;
	object V282;
	V282= cadr((V278));
	V281= (V280);
goto T773;
T773:;
	if(!(endp((V281)))){
	goto T774;}
	goto T770;
goto T774;
T774:;
	V283= structure_ref(car((V281)),VV[69],1);
	if(!((/* INLINE-ARGS */V283)==(VV[71]))){
	goto T780;}
	V284= car((V281));
	V285= structure_ref(car((V281)),VV[69],4);
	V286= make_cons(/* INLINE-ARGS */V284,/* INLINE-ARGS */V285);
	V279= make_cons(/* INLINE-ARGS */V286,(V279));
	goto T778;
goto T780;
T780:;
	V287= car((V281));
	{object V289= car((V282));
	if((V289!= VV[89]))goto T784;
	V288= VV[89];
	goto T783;
goto T784;
T784:;
	if((V289!= VV[142]))goto T785;
	V288= VV[142];
	goto T783;
goto T785;
T785:;
	if((V289!= VV[143]))goto T786;
	V288= VV[143];
	goto T783;
goto T786;
T786:;
	if((V289!= VV[144]))goto T787;
	V288= VV[144];
	goto T783;
goto T787;
T787:;
	V288= VV[74];}
goto T783;
T783:;
	(void)(structure_set(/* INLINE-ARGS */V287,VV[69],1,V288));
goto T778;
T778:;
	V290= car((V281));
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	(void)(structure_set(/* INLINE-ARGS */V290,VV[69],4,symbol_value(VV[88])));
	V281= cdr((V281));
	V282= cdr((V282));
	goto T773;}
goto T770;
T770:;
	(void)((VFUN_NARGS=2,(*(LnkLI304))(VV[145],(V274))));
	princ_str("\nstatic ",VV[27]);
	V291= (*(LnkLI273))(caddr((V278)));
	(void)((*(LnkLI270))(/* INLINE-ARGS */V291));
	princ_str("LI",VV[27]);
	(void)((*(LnkLI270))((V275)));
	princ_str("();",VV[27]);
	princ_str("\nstatic ",VV[21]);
	V292= (*(LnkLI273))(caddr((V278)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V292));
	princ_str("LI",VV[21]);
	(void)((*(LnkLI267))((V275)));
	princ_char(40,VV[21]);
	(void)((*(LnkLI305))((V280),cadr((V278))));
	{object V293;
	V293= symbol_value(VV[136]);
	if((symbol_value(VV[147]))==Cnil){
	goto T811;}
	base[1]= make_cons((V274),(V280));
	goto T809;
goto T811;
T811:;
	base[1]= Cnil;
goto T809;
T809:;
	bds_bind(VV[146],base[1]);
	bds_bind(VV[134],symbol_value(VV[134]));
	princ_str("\n{	",VV[21]);
	V294= structure_ref(cadr((V276)),VV[62],1);
	(void)((*(LnkLI306))(/* INLINE-ARGS */V294,(V275),VV[148]));
	princ_str(" VMB",VV[21]);
	(void)((*(LnkLI267))((V293)));
	princ_str(" VMS",VV[21]);
	(void)((*(LnkLI267))((V293)));
	princ_str(" VMV",VV[21]);
	(void)((*(LnkLI267))((V293)));
	if(((V277))==Cnil){
	goto T823;}
	princ_str("\n	bds_check;",VV[21]);
goto T823;
T823:;
	if((symbol_value(VV[149]))==Cnil){
	goto T827;}
	princ_str("\n	ihs_check;",VV[21]);
goto T827;
T827:;
	if(((VV[146]->s.s_dbind))==Cnil){
	goto T831;}
	(VV[134]->s.s_dbind)= make_cons(VV[150],(VV[134]->s.s_dbind));
	princ_str("\ngoto TTL;",VV[21]);
	princ_str("\nTTL:;",VV[21]);
goto T831;
T831:;
	{register object V295;
	register object V296;
	V295= (V279);
	V296= car((V295));
goto T843;
T843:;
	if(!(endp((V295)))){
	goto T844;}
	goto T839;
goto T844;
T844:;
	princ_str("\n	bds_bind(VV[",VV[21]);
	(void)((*(LnkLI267))(cdr((V296))));
	princ_str("],V",VV[21]);
	V297= structure_ref(car((V296)),VV[69],4);
	(void)((*(LnkLI267))(/* INLINE-ARGS */V297));
	princ_str(");",VV[21]);
	(VV[134]->s.s_dbind)= make_cons(VV[151],(VV[134]->s.s_dbind));
	(void)(structure_set(car((V296)),VV[69],1,VV[71]));
	(void)(structure_set(car((V296)),VV[69],4,cdr((V296))));
	V295= cdr((V295));
	V296= car((V295));
	goto T843;}
goto T839;
T839:;
	base[3]= caddr(cddr((V276)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk307)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T867;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T867;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T867;}
	goto T865;
goto T867;
T867:;
	princ_str("\n	base[0]=base[0];",VV[21]);
goto T865;
T865:;
	V298= (*(LnkLI273))(caddr((V278)));
	if(!(equal(VV[152],/* INLINE-ARGS */V298))){
	goto T874;}
	princ_str("\n	return Cnil;",VV[21]);
goto T874;
T874:;
	princ_str("\n}",VV[21]);
	{object V299 = (*(LnkLI308))((V293),caddr((V278)));
	bds_unwind1;
	bds_unwind1;
	VMR22(V299)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-UP-VAR-CVS	*/

static object LI23(V301)

object V301;
{	 VMB23 VMS23 VMV23
goto TTL;
TTL:;
	if((symbol_value(VV[153]))==Cnil){
	goto T881;}
	V302= (*(LnkLI309))();
	{object V303 = structure_set((V301),VV[69],2,/* INLINE-ARGS */V302);
	VMR23(V303)}
goto T881;
T881:;
	V304= (*(LnkLI310))();
	{object V305 = structure_set((V301),VV[69],2,/* INLINE-ARGS */V304);
	VMR23(V305)}
	return Cnil;
}
/*	local entry for function T3DEFUN-VARARG	*/

static object LI24(V310,V311,V312,V313)

object V310;object V311;object V312;object V313;
{	 VMB24 VMS24 VMV24
	bds_check;
goto TTL;
TTL:;
	{object V314;
	register object V315;
	object V316;
	object V317;
	object V318;
	object V319;
	object V320;
	object V321;
	V314= Cnil;
	bds_bind(VV[153],Cnil);
	base[1]= Cnil;
	V315= Cnil;
	V316= Ct;
	V317= Cnil;
	bds_bind(VV[154],small_fixnum(0));
	V318= Cnil;
	V319= caddr((V312));
	V320= Cnil;{object V322;
	V322= caddr((V319));
	if(V322==Cnil)goto T891;
	V321= V322;
	goto T890;
goto T891;
T891:;}{object V323;
	V323= cadr((V319));
	if(V323==Cnil)goto T893;
	V321= V323;
	goto T890;
goto T893;
T893:;}
	V321= cadddr((V319));
goto T890;
T890:;
	{object V324;
	register object V325;
	V324= car((V319));
	V325= car((V324));
goto T899;
T899:;
	if(!(endp((V324)))){
	goto T900;}
	goto T895;
goto T900;
T900:;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V326= list(2,VV[155],symbol_value(VV[88]));
	V314= make_cons(/* INLINE-ARGS */V326,(V314));
	V324= cdr((V324));
	V325= car((V324));
	goto T899;}
goto T895;
T895:;
	(void)((VFUN_NARGS=2,(*(LnkLI304))(VV[156],(V310))));
	princ_str("\nstatic object LI",VV[27]);
	(void)((*(LnkLI270))((V311)));
	princ_str("();",VV[27]);
	princ_str("\nstatic object LI",VV[21]);
	(void)((*(LnkLI267))((V311)));
	princ_char(40,VV[21]);
	(void)((*(LnkLI311))((V314)));
	if(((V321))==Cnil){
	goto T922;}
	if(((V314))==Cnil){
	goto T925;}
	princ_char(44,VV[21]);
goto T925;
T925:;
	princ_str("va_alist",VV[21]);
goto T922;
T922:;
	princ_char(41,VV[21]);
	if(((V314))==Cnil){
	goto T932;}
	princ_str("\n	object ",VV[21]);
	(void)((*(LnkLI311))((V314)));
	princ_char(59,VV[21]);
goto T932;
T932:;
	if(((V321))==Cnil){
	goto T939;}
	princ_str("\n	va_dcl ",VV[21]);
goto T939;
T939:;
	{object V327;
	V327= symbol_value(VV[136]);
	if(symbol_value(VV[147])==Cnil){
	base[5]= Cnil;
	goto T944;}
	if((caddr((V319)))==Cnil){
	goto T945;}
	base[5]= Cnil;
	goto T944;
goto T945;
T945:;
	{object V328;
	object V329;
	V328= car((V319));
	V329= car((V328));
goto T952;
T952:;
	if(!(endp((V328)))){
	goto T953;}
	goto T947;
goto T953;
T953:;
	if((structure_ref((V329),VV[69],3))==Cnil){
	goto T957;}
	goto T948;
goto T957;
T957:;
	V328= cdr((V328));
	V329= car((V328));
	goto T952;}
goto T948;
T948:;
	base[5]= Cnil;
	goto T944;
goto T947;
T947:;
	if((cadr((V319)))==Cnil){
	goto T965;}
	base[5]= Cnil;
	goto T944;
goto T965;
T965:;
	if((car(cddddr((V319))))==Cnil){
	goto T967;}
	base[5]= Cnil;
	goto T944;
goto T967;
T967:;
	base[5]= make_cons((V310),car((V319)));
goto T944;
T944:;
	bds_bind(VV[146],base[5]);
	bds_bind(VV[134],symbol_value(VV[134]));
	princ_str("\n{	",VV[21]);
	if(((V321))==Cnil){
	goto T971;}
	princ_str("\n	va_list ap;",VV[21]);
goto T971;
T971:;
	princ_str("\n	int narg = VFUN_NARGS;",VV[21]);
	V330= structure_ref(cadr((V312)),VV[62],1);
	(void)((*(LnkLI306))(/* INLINE-ARGS */V330,(V311),VV[148]));
	princ_str(" VMB",VV[21]);
	(void)((*(LnkLI267))((V327)));
	princ_str(" VMS",VV[21]);
	(void)((*(LnkLI267))((V327)));
	princ_str(" VMV",VV[21]);
	(void)((*(LnkLI267))((V327)));
	if(((V313))==Cnil){
	goto T985;}
	princ_str("\n	bds_check;",VV[21]);
goto T985;
T985:;
	if((symbol_value(VV[149]))==Cnil){
	goto T989;}
	princ_str("\n	ihs_check;",VV[21]);
goto T989;
T989:;
	if((V321)!=Cnil){
	goto T993;}
	princ_str("\n	if ( narg!= ",VV[21]);
	V331 = make_fixnum(length((V314)));
	(void)((*(LnkLI267))(V331));
	princ_str(") vfun_wrong_number_of_args(small_fixnum(",VV[21]);
	V332 = make_fixnum(length((V314)));
	(void)((*(LnkLI267))(V332));
	princ_str("));",VV[21]);
goto T993;
T993:;
	{object V333;
	object V334;
	V333= car((V319));
	V334= car((V333));
goto T1004;
T1004:;
	if(!(endp((V333)))){
	goto T1005;}
	goto T1000;
goto T1005;
T1005:;
	base[9]= (V334);
	vs_top=(vs_base=base+9)+1;
	L25(base);
	vs_top=sup;
	V333= cdr((V333));
	V334= car((V333));
	goto T1004;}
goto T1000;
T1000:;
	{object V335;
	object V336;
	V335= cadr((V319));
	V336= car((V335));
goto T1020;
T1020:;
	if(!(endp((V335)))){
	goto T1021;}
	goto T1016;
goto T1021;
T1021:;
	base[9]= car((V336));
	vs_top=(vs_base=base+9)+1;
	L25(base);
	vs_top=sup;
	if((caddr((V336)))==Cnil){
	goto T1027;}
	base[9]= caddr((V336));
	vs_top=(vs_base=base+9)+1;
	L25(base);
	vs_top=sup;
goto T1027;
T1027:;
	V335= cdr((V335));
	V336= car((V335));
	goto T1020;}
goto T1016;
T1016:;
	if((caddr((V319)))==Cnil){
	goto T1036;}
	base[7]= caddr((V319));
	vs_top=(vs_base=base+7)+1;
	L25(base);
	vs_top=sup;
goto T1036;
T1036:;
	{object V337;
	object V338;
	V337= car(cddddr((V319)));
	V338= car((V337));
goto T1043;
T1043:;
	if(!(endp((V337)))){
	goto T1044;}
	goto T999;
goto T1044;
T1044:;
	base[9]= cadr((V338));
	vs_top=(vs_base=base+9)+1;
	L25(base);
	vs_top=sup;
	if((cadddr((V338)))==Cnil){
	goto T1050;}
	base[9]= cadddr((V338));
	vs_top=(vs_base=base+9)+1;
	L25(base);
	vs_top=sup;
goto T1050;
T1050:;
	V337= cdr((V337));
	V338= car((V337));
	goto T1043;}
goto T999;
T999:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1061;}
	goto T1059;
goto T1061;
T1061:;
	princ_str("\n	Vcs[0]=Vcs[0];",VV[21]);
goto T1059;
T1059:;
	if((cadr((V319)))!=Cnil){
	goto T1065;}
	if((caddr((V319)))!=Cnil){
	goto T1065;}
	if((cadddr((V319)))==Cnil){
	goto T1064;}
goto T1065;
T1065:;
	if(((V320))!=Cnil){
	goto T1064;}
	V320= Ct;
	princ_str("\n	va_start(ap);",VV[21]);
goto T1064;
T1064:;
	if((symbol_value(VV[157]))!=Cnil){
	goto T1078;}
	if((symbol_value(VV[158]))==Cnil){
	goto T1076;}
goto T1078;
T1078:;
	if((car((V319)))==Cnil){
	goto T1076;}
	princ_str("\n	if(narg <",VV[21]);
	V339 = make_fixnum(length(car((V319))));
	(void)((*(LnkLI267))(V339));
	princ_str(") too_few_arguments();",VV[21]);
goto T1076;
T1076:;
	{object V340;
	object V341;
	V340= car((V319));
	V341= car((V340));
goto T1090;
T1090:;
	if(!(endp((V340)))){
	goto T1091;}
	goto T1086;
goto T1091;
T1091:;
	(void)((*(LnkLI312))((V341)));
	V340= cdr((V340));
	V341= car((V340));
	goto T1090;}
goto T1086;
T1086:;
	{object V342;
	object V343;
	V342= cadr((V319));
	V343= car((V342));
goto T1105;
T1105:;
	if(!(endp((V342)))){
	goto T1106;}
	goto T1101;
goto T1106;
T1106:;
	(void)((*(LnkLI312))(car((V343))));
	V342= cdr((V342));
	V343= car((V342));
	goto T1105;}
goto T1101;
T1101:;
	if((caddr((V319)))==Cnil){
	goto T1116;}
	(void)((*(LnkLI312))(caddr((V319))));
goto T1116;
T1116:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1122;}
	V317= symbol_value(VV[129]);
	goto T1120;
goto T1122;
T1122:;
	V317= symbol_value(VV[141]);
goto T1120;
T1120:;
	{object V344;
	object V345;
	V344= car(cddddr((V319)));
	V345= car((V344));
goto T1128;
T1128:;
	if(!(endp((V344)))){
	goto T1129;}
	goto T1124;
goto T1129;
T1129:;
	(void)((*(LnkLI312))(cadr((V345))));
	V344= cdr((V344));
	V345= car((V344));
	goto T1128;}
goto T1124;
T1124:;
	{object V346;
	object V347;
	V346= car(cddddr((V319)));
	V347= car((V346));
goto T1143;
T1143:;
	if(!(endp((V346)))){
	goto T1144;}
	goto T1139;
goto T1144;
T1144:;
	(void)((*(LnkLI312))(cadddr((V347))));
	V346= cdr((V346));
	V347= car((V346));
	goto T1143;}
goto T1139;
T1139:;
	{object V348;
	object V349;
	V349= car((V319));
	V348= (V314);
goto T1157;
T1157:;
	if(((V348))!=Cnil){
	goto T1158;}
	goto T1154;
goto T1158;
T1158:;
	(void)((*(LnkLI313))(car((V349)),car((V348))));
	V348= cdr((V348));
	V349= cdr((V349));
	goto T1157;}
goto T1154;
T1154:;
	if((cadr((V319)))==Cnil){
	goto T1167;}
	bds_bind(VV[133],symbol_value(VV[133]));
	bds_bind(VV[134],(VV[134]->s.s_dbind));
	bds_bind(VV[132],symbol_value(VV[132]));
	princ_str("\n	narg = narg - ",VV[21]);
	V350 = make_fixnum(length((V314)));
	(void)((*(LnkLI267))(V350));
	princ_char(59,VV[21]);
	{object V351;
	object V352;
	V351= cadr((V319));
	V352= car((V351));
goto T1178;
T1178:;
	if(!(endp((V351)))){
	goto T1179;}
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1170;
goto T1179;
T1179:;
	setq(VV[159],number_plus(symbol_value(VV[159]),small_fixnum(1)));
	V353= make_cons(symbol_value(VV[159]),Cnil);
	V315= make_cons(/* INLINE-ARGS */V353,(V315));
	princ_str("\n	if (",VV[21]);
	if((cdr((V315)))==Cnil){
	goto T1191;}
	V354= VV[160];
	goto T1189;
goto T1191;
T1191:;
	V354= VV[161];
goto T1189;
T1189:;
	(void)((*(LnkLI267))(V354));
	princ_str("narg <= 0) ",VV[21]);
	if(type_of(car((V315)))!=t_cons)FEwrong_type_argument(Scons,car((V315)));
	(car((V315)))->c.c_cdr = Ct;
	(void)(car((V315)));
	princ_str("goto T",VV[21]);
	(void)((*(LnkLI267))(car(car((V315)))));
	princ_char(59,VV[21]);
	princ_str("\n	else {",VV[21]);
	if(((V320))!=Cnil){
	goto T1201;}
	V320= Ct;
	princ_str("\n	va_start(ap);",VV[21]);
goto T1201;
T1201:;
	V355= car((V352));
	V356= make_cons(VV[162],Cnil);
	(void)((*(LnkLI313))(/* INLINE-ARGS */V355,/* INLINE-ARGS */V356));
	princ_char(125,VV[21]);
	if((caddr((V352)))==Cnil){
	goto T1210;}
	(void)((*(LnkLI313))(caddr((V352)),Ct));
goto T1210;
T1210:;
	V351= cdr((V351));
	V352= car((V351));
	goto T1178;}
goto T1170;
T1170:;
	V315= nreverse((V315));
	{object V357;
	setq(VV[159],number_plus(symbol_value(VV[159]),small_fixnum(1)));
	V357= make_cons(symbol_value(VV[159]),Cnil);
	princ_str("\n	--narg; ",VV[21]);
	if(type_of((V357))!=t_cons)FEwrong_type_argument(Scons,(V357));
	((V357))->c.c_cdr = Ct;
	princ_str("goto T",VV[21]);
	(void)((*(LnkLI267))(car((V357))));
	princ_char(59,VV[21]);
	{object V358;
	object V359;
	V358= cadr((V319));
	V359= car((V358));
goto T1233;
T1233:;
	if(!(endp((V358)))){
	goto T1234;}
	goto T1229;
goto T1234;
T1234:;
	if((cdr(car((V315))))==Cnil){
	goto T1238;}
	princ_str("\ngoto T",VV[21]);
	(void)((*(LnkLI267))(car(car((V315)))));
	princ_char(59,VV[21]);
	princ_str("\nT",VV[21]);
	(void)((*(LnkLI267))(car(car((V315)))));
	princ_str(":;",VV[21]);
goto T1238;
T1238:;
	{object V360;
	V360= car((V315));
	V315= cdr((V315));}
	(void)((*(LnkLI314))(car((V359)),cadr((V359))));
	if((caddr((V359)))==Cnil){
	goto T1253;}
	(void)((*(LnkLI313))(caddr((V359)),Cnil));
goto T1253;
T1253:;
	V358= cdr((V358));
	V359= car((V358));
	goto T1233;}
goto T1229;
T1229:;
	if((cdr((V357)))==Cnil){
	goto T1167;}
	princ_str("\ngoto T",VV[21]);
	(void)((*(LnkLI267))(car((V357))));
	princ_char(59,VV[21]);
	princ_str("\nT",VV[21]);
	(void)((*(LnkLI267))(car((V357))));
	princ_str(":;",VV[21]);}
goto T1167;
T1167:;
	if((caddr((V319)))==Cnil){
	goto T1270;}
	V318= (VFUN_NARGS=0,(*(LnkLI315))());
	{object V361;
	V361= cadr((V319));
	if(((V361))==Cnil){
	goto T1278;}
	goto T1275;
goto T1278;
T1278:;
	princ_str("\n	narg= narg - ",VV[21]);
	V362 = make_fixnum(length(car((V319))));
	(void)((*(LnkLI267))(V362));
	princ_char(59,VV[21]);}
goto T1275;
T1275:;
	if(((V320))!=Cnil){
	goto T1283;}
	V320= Ct;
	princ_str("\n	va_start(ap);",VV[21]);
goto T1283;
T1283:;
	princ_str("\n	V",VV[21]);
	(void)((*(LnkLI267))((V318)));
	princ_str(" = ",VV[21]);
	V363= structure_ref(caddr((V319)),VV[69],5);
	if(!((/* INLINE-ARGS */V363)==(VV[164]))){
	goto T1294;}
	base[7]= Ct;
	goto T1293;
goto T1294;
T1294:;
	base[7]= symbol_value(VV[163]);
goto T1293;
T1293:;
	bds_bind(VV[163],base[7]);
	if((cadddr((V319)))==Cnil){
	goto T1298;}
	if(((VV[163]->s.s_dbind))==Cnil){
	goto T1301;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_MAKE_LIST(narg));",VV[21]);
	goto T1296;
goto T1301;
T1301:;
	princ_str("make_list(narg);",VV[21]);
	goto T1296;
goto T1298;
T1298:;
	if(((VV[163]->s.s_dbind))==Cnil){
	goto T1306;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR(narg,ap));",VV[21]);
	goto T1296;
goto T1306;
T1306:;
	princ_str("list_vector(narg,ap);",VV[21]);
goto T1296;
T1296:;
	V364= caddr((V319));
	V365= list(2,VV[155],(V318));
	V366= (*(LnkLI313))(/* INLINE-ARGS */V364,/* INLINE-ARGS */V365);
	bds_unwind1;
goto T1270;
T1270:;
	if((cadddr((V319)))==Cnil){
	goto T1310;}
	{object V367;
	V367= caddr((V319));
	if(((V367))==Cnil){
	goto T1316;}
	goto T1313;
goto T1316;
T1316:;
	{object V368;
	V368= cadr((V319));
	if(((V368))==Cnil){
	goto T1320;}
	goto T1313;
goto T1320;
T1320:;
	princ_str("\n	narg= narg - ",VV[21]);
	V369 = make_fixnum(length(car((V319))));
	(void)((*(LnkLI267))(V369));
	princ_char(59,VV[21]);}}
goto T1313;
T1313:;
	if(((V320))!=Cnil){
	goto T1325;}
	V320= Ct;
	princ_str("\n	va_start(ap);",VV[21]);
goto T1325;
T1325:;
	{object V370;
	object V371= car(cddddr((V319)));
	if(endp(V371)){
	V316= Cnil;
	goto T1332;}
	base[7]=V370=MMcons(Cnil,Cnil);
goto T1333;
T1333:;
	(V370->c.c_car)= caddr((V371->c.c_car));
	if(endp(V371=MMcdr(V371))){
	V316= base[7];
	goto T1332;}
	V370=MMcdr(V370)=MMcons(Cnil,Cnil);
	goto T1333;}
goto T1332;
T1332:;
	{object V372;
	object V373;
	V373= make_fixnum(length(car(cddddr((V319)))));
	V372= Cnil;
	{register object V374;
	object V375;
	object V376;
	V374= (V316);
	V375= car(cddddr((V319)));
	V376= car((V375));
goto T1341;
T1341:;
	if(((V374))!=Cnil){
	goto T1342;}
	goto T1336;
goto T1342;
T1342:;
	if(!((caar((V374)))==(VV[165]))){
	goto T1347;}
	if((caddr(car((V374))))==(Cnil)){
	goto T1346;}
goto T1347;
T1347:;
	V372= Ct;
goto T1346;
T1346:;
	if(!((caar((V374)))==(VV[165]))){
	goto T1353;}
	{object V377;
	V377= caddr(car((V374)));
	if(!(((V377))==(Cnil))){
	goto T1359;}
	goto T1357;
goto T1359;
T1359:;
	if(type_of((V377))==t_cons){
	goto T1361;}
	goto T1353;
goto T1361;
T1361:;
	{register object x= car((V377)),V378= VV[166];
	while(!endp(V378))
	if(eql(x,V378->c.c_car)){
	goto T1357;
	}else V378=V378->c.c_cdr;
	goto T1353;}}
goto T1357;
T1357:;
	V379= structure_ref(cadddr((V376)),VV[69],1);
	if((/* INLINE-ARGS */V379)==(VV[167])){
	goto T1352;}
goto T1353;
T1353:;
	V372= Ct;
	if(type_of(V374)!=t_cons)FEwrong_type_argument(Scons,V374);
	(V374)->c.c_car = small_fixnum(0);
goto T1352;
T1352:;
	V374= cdr((V374));
	V375= cdr((V375));
	V376= car((V375));
	goto T1341;}
goto T1336;
T1336:;
	if(!((length((V316)))>(15))){
	goto T1374;}
	V372= Ct;
goto T1374;
T1374:;
	princ_str("\n	{",VV[21]);
	vs_base=vs_top;
	(void) (*Lnk316)();
	vs_top=sup;
	bds_bind(VV[21],symbol_value(VV[27]));
	if(((V372))==Cnil){
	goto T1382;}
	princ_char(10,VV[27]);
	princ_str("static object VK",VV[21]);
	(void)((*(LnkLI267))((V311)));
	princ_str("defaults[",VV[21]);
	V382 = make_fixnum(length((V316)));
	(void)((*(LnkLI267))(V382));
	princ_str("]={",VV[21]);
	{object V383;
	register object V384;
	V383= (V316);
	V384= Cnil;
goto T1394;
T1394:;
	if(((V383))!=Cnil){
	goto T1395;}
	goto T1392;
goto T1395;
T1395:;
	princ_str("(void *)",VV[21]);
	if(!(eql(car((V383)),small_fixnum(0)))){
	goto T1403;}
	princ_str("-1",VV[21]);
	goto T1401;
goto T1403;
T1403:;
	V384= caddr(car((V383)));
	if(!(((V384))==(Cnil))){
	goto T1407;}
	princ_str("-2",VV[21]);
	goto T1401;
goto T1407;
T1407:;
	if(!(type_of((V384))==t_cons)){
	goto T1412;}
	if(!((car((V384)))==(VV[168]))){
	goto T1412;}
	(void)((*(LnkLI267))(cadr((V384))));
	goto T1401;
goto T1412;
T1412:;
	if(!(type_of((V384))==t_cons)){
	goto T1418;}
	if(!((car((V384)))==(VV[169]))){
	goto T1418;}
	V385= (*(LnkLI317))(caddr((V384)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V385));
	goto T1401;
goto T1418;
T1418:;
	(void)((*(LnkLI318))());
goto T1401;
T1401:;
	if((cdr((V383)))==Cnil){
	goto T1423;}
	princ_char(44,VV[21]);
goto T1423;
T1423:;
	V383= cdr((V383));
	goto T1394;}
goto T1392;
T1392:;
	princ_str("};",VV[21]);
goto T1382;
T1382:;
	princ_char(10,VV[27]);
	princ_str("static struct { short n,allow_other_keys;",VV[21]);
	princ_str("object *defaults;",VV[21]);
	princ_str("\n	 KEYTYPE keys[",VV[21]);
	(void)((*(LnkLI267))((number_compare((V373),small_fixnum(1))>=0?((V373)):small_fixnum(1))));
	princ_str("];",VV[21]);
	princ_str("} LI",VV[21]);
	(void)((*(LnkLI267))((V311)));
	princ_str("key=",VV[21]);
	princ_char(123,VV[21]);
	V386 = make_fixnum(length(car(cddddr((V319)))));
	(void)((*(LnkLI267))(V386));
	princ_char(44,VV[21]);
	if((cadr(cddddr((V319))))==Cnil){
	goto T1450;}
	V387= small_fixnum(1);
	goto T1448;
goto T1450;
T1450:;
	V387= small_fixnum(0);
goto T1448;
T1448:;
	(void)((*(LnkLI267))(V387));
	princ_char(44,VV[21]);
	if(((V372))==Cnil){
	goto T1455;}
	princ_str("VK",VV[21]);
	(void)((*(LnkLI267))((V311)));
	princ_str("defaults",VV[21]);
	goto T1453;
goto T1455;
T1455:;
	princ_str("Cstd_key_defaults",VV[21]);
goto T1453;
T1453:;
	if((car(cddddr((V319))))==Cnil){
	goto T1461;}
	princ_str(",{",VV[21]);
	{object V388;
	V388= reverse(car(cddddr((V319))));
goto T1469;
T1469:;
	if(((V388))!=Cnil){
	goto T1470;}
	goto T1466;
goto T1470;
T1470:;
	princ_str("(void *)",VV[21]);
	V389= (*(LnkLI319))(caar((V388)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V389));
	if((cdr((V388)))==Cnil){
	goto T1478;}
	princ_char(44,VV[21]);
goto T1478;
T1478:;
	V388= cdr((V388));
	goto T1469;}
goto T1466;
T1466:;
	princ_char(125,VV[21]);
goto T1461;
T1461:;
	princ_str("};",VV[21]);
	bds_unwind1;
	if((caddr((V319)))==Cnil){
	goto T1489;}
	princ_str("\n	parse_key_rest(",VV[21]);
	V390= list(2,VV[155],(V318));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V390));
	princ_char(44,VV[21]);
	goto T1487;
goto T1489;
T1489:;
	princ_str("\n	parse_key_new(",VV[21]);
goto T1487;
T1487:;
	if(!(eql(small_fixnum(0),symbol_value(VV[141])))){
	goto T1495;}
	setq(VV[141],small_fixnum(1));
goto T1495;
T1495:;
	princ_str("narg,",VV[21]);
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1503;}
	V391= VV[170];
	goto T1501;
goto T1503;
T1503:;
	V391= VV[171];
goto T1501;
T1501:;
	(void)((*(LnkLI267))(V391));
	princ_char(43,VV[21]);
	(void)((*(LnkLI267))((V317)));
	princ_str(",(struct key *)&LI",VV[21]);
	(void)((*(LnkLI267))((V311)));
	princ_str("key,ap);",VV[21]);}
goto T1310;
T1310:;
	{object V392;
	register object V393;
	V392= car(cddddr((V319)));
	V393= car((V392));
goto T1514;
T1514:;
	if(!(endp((V392)))){
	goto T1515;}
	goto T1510;
goto T1515;
T1515:;
	{object V395;
	V395= car((V316));
	V316= cdr((V316));
	V394= (V395);}
	if(eql(small_fixnum(0),V394)){
	goto T1521;}
	(void)((*(LnkLI320))(cadr((V393))));
	goto T1519;
goto T1521;
T1521:;
	princ_str("\n	if(",VV[21]);
	V396= structure_ref(cadr((V393)),VV[69],2);
	(void)((*(LnkLI321))(/* INLINE-ARGS */V396));
	princ_str("==0){",VV[21]);
	bds_bind(VV[133],symbol_value(VV[133]));
	bds_bind(VV[134],(VV[134]->s.s_dbind));
	bds_bind(VV[132],symbol_value(VV[132]));
	V397= (*(LnkLI314))(cadr((V393)),caddr((V393)));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V398= structure_ref(cadddr((V393)),VV[69],1);
	if((/* INLINE-ARGS */V398)==(VV[167])){
	goto T1533;}
	(void)((*(LnkLI313))(cadddr((V393)),Cnil));
goto T1533;
T1533:;
	princ_str("\n	}else{",VV[21]);
	(void)((*(LnkLI320))(cadr((V393))));
	V399= structure_ref(cadddr((V393)),VV[69],1);
	if((/* INLINE-ARGS */V399)==(VV[167])){
	goto T1539;}
	(void)((*(LnkLI313))(cadddr((V393)),Ct));
goto T1539;
T1539:;
	princ_char(125,VV[21]);
goto T1519;
T1519:;
	V392= cdr((V392));
	V393= car((V392));
	goto T1514;}
goto T1510;
T1510:;
	if(((VV[146]->s.s_dbind))==Cnil){
	goto T1548;}
	(VV[134]->s.s_dbind)= make_cons(VV[150],(VV[134]->s.s_dbind));
	princ_str("\ngoto TTL;",VV[21]);
	princ_str("\nTTL:;",VV[21]);
goto T1548;
T1548:;
	base[7]= caddr(cddr((V312)));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk307)();
	vs_top=sup;
	if(((V320))==Cnil){
	goto T1558;}
	V320= Cnil;
	princ_str("\n	va_end(ap);",VV[21]);
goto T1558;
T1558:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1566;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T1566;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T1566;}
	goto T1564;
goto T1566;
T1566:;
	princ_str("\n	base[0]=base[0];",VV[21]);
goto T1564;
T1564:;
	princ_str("\n	return Cnil;",VV[21]);
	princ_char(125,VV[21]);
	if((base[1])==Cnil){
	goto T1577;}
	princ_str("\n	}",VV[21]);
goto T1577;
T1577:;
	(void)((*(LnkLI322))());
	V400= get((V310),VV[78],Cnil);
	{object V401 = (*(LnkLI308))((V327),V400);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR24(V401)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3DEFUN-NORMAL	*/

static object LI26(V406,V407,V408,V409)

object V406;register object V407;object V408;object V409;
{	 VMB25 VMS25 VMV25
goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI304))(VV[172],(V406))));
	if(!(type_of((V407))==t_fixnum||
type_of((V407))==t_bignum||
type_of((V407))==t_ratio||
type_of((V407))==t_shortfloat||
type_of((V407))==t_longfloat||
type_of((V407))==t_complex)){
	goto T1586;}
	princ_str("\nstatic void L",VV[21]);
	(void)((*(LnkLI267))((V407)));
	princ_str("()",VV[21]);
	goto T1584;
goto T1586;
T1586:;
	princ_char(10,VV[21]);
	(void)((*(LnkLI267))((V407)));
	princ_str("()",VV[21]);
goto T1584;
T1584:;
	princ_str("\n{",VV[21]);
	princ_str("register object *",VV[21]);
	(void)((*(LnkLI267))(symbol_value(VV[16])));
	princ_str("base=vs_base;",VV[21]);
	V410= structure_ref(cadr((V408)),VV[62],1);
	(void)((*(LnkLI306))(/* INLINE-ARGS */V410,(V407),VV[148]));
	princ_str("\n	register object *",VV[21]);
	(void)((*(LnkLI267))(symbol_value(VV[16])));
	princ_str("sup=base+VM",VV[21]);
	(void)((*(LnkLI267))(symbol_value(VV[136])));
	princ_char(59,VV[21]);
	princ_str(" VC",VV[21]);
	(void)((*(LnkLI267))(symbol_value(VV[136])));
	if((symbol_value(VV[157]))==Cnil){
	goto T1611;}
	princ_str("\n	vs_reserve(VM",VV[21]);
	(void)((*(LnkLI267))(symbol_value(VV[136])));
	princ_str(");",VV[21]);
	goto T1609;
goto T1611;
T1611:;
	princ_str("\n	vs_check;",VV[21]);
goto T1609;
T1609:;
	if(((V409))==Cnil){
	goto T1617;}
	princ_str("\n	bds_check;",VV[21]);
goto T1617;
T1617:;
	if((symbol_value(VV[149]))==Cnil){
	goto T1621;}
	princ_str("\n	ihs_check;",VV[21]);
goto T1621;
T1621:;
	(void)((VFUN_NARGS=3,(*(LnkLI323))(caddr((V408)),caddr(cddr((V408))),(V406))));
	princ_str("\n}",VV[21]);
	V411= make_cons(symbol_value(VV[136]),symbol_value(VV[130]));
	setq(VV[29],make_cons(/* INLINE-ARGS */V411,symbol_value(VV[29])));
	princ_str("\n#define VC",VV[27]);
	(void)((*(LnkLI270))(symbol_value(VV[136])));
	{object V412 = (*(LnkLI324))();
	VMR25(V412)}
	return Cnil;
}
/*	local entry for function WT-V*-MACROS	*/

static object LI27(V415,V416)

register object V415;object V416;
{	 VMB26 VMS26 VMV26
goto TTL;
TTL:;
	V417= make_cons((V415),symbol_value(VV[130]));
	setq(VV[29],make_cons(/* INLINE-ARGS */V417,symbol_value(VV[29])));
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1637;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T1637;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T1637;}
	princ_str("\n#define VMB",VV[27]);
	(void)((*(LnkLI270))((V415)));
	goto T1635;
goto T1637;
T1637:;
	princ_str("\n#define VMB",VV[27]);
	(void)((*(LnkLI270))((V415)));
	princ_char(32,VV[27]);
	princ_str("register object *",VV[27]);
	(void)((*(LnkLI270))(symbol_value(VV[16])));
	princ_str("base=vs_top;",VV[27]);
goto T1635;
T1635:;
	(void)((*(LnkLI324))());
	if((symbol_value(VV[138]))==Cnil){
	goto T1654;}
	princ_str("\n#define VMS",VV[27]);
	(void)((*(LnkLI270))((V415)));
	princ_char(32,VV[27]);
	princ_str(" register object *",VV[27]);
	(void)((*(LnkLI270))(symbol_value(VV[16])));
	princ_str("sup=vs_top+",VV[27]);
	(void)((*(LnkLI270))(symbol_value(VV[130])));
	princ_str(";vs_top=sup;",VV[27]);
	goto T1652;
goto T1654;
T1654:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1665;}
	princ_str("\n#define VMS",VV[27]);
	(void)((*(LnkLI270))((V415)));
	goto T1652;
goto T1665;
T1665:;
	princ_str("\n#define VMS",VV[27]);
	(void)((*(LnkLI270))((V415)));
	princ_str(" vs_top += ",VV[27]);
	(void)((*(LnkLI270))(symbol_value(VV[130])));
	princ_char(59,VV[27]);
goto T1652;
T1652:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1676;}
	princ_str("\n#define VMV",VV[27]);
	(void)((*(LnkLI270))((V415)));
	goto T1674;
goto T1676;
T1676:;
	if((symbol_value(VV[157]))==Cnil){
	goto T1681;}
	princ_str("\n#define VMV",VV[27]);
	(void)((*(LnkLI270))((V415)));
	princ_str(" vs_reserve(",VV[27]);
	(void)((*(LnkLI270))(symbol_value(VV[130])));
	princ_str(");",VV[27]);
	goto T1674;
goto T1681;
T1681:;
	princ_str("\n#define VMV",VV[27]);
	(void)((*(LnkLI270))((V415)));
	princ_str(" vs_check;",VV[27]);
goto T1674;
T1674:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1692;}
	princ_str("\n#define VMR",VV[27]);
	(void)((*(LnkLI270))((V415)));
	princ_str("(VMT",VV[27]);
	(void)((*(LnkLI270))((V415)));
	princ_str(") return(VMT",VV[27]);
	(void)((*(LnkLI270))((V415)));
	princ_str(");",VV[27]);
	{object V418 = Cnil;
	VMR26(V418)}
goto T1692;
T1692:;
	princ_str("\n#define VMR",VV[27]);
	(void)((*(LnkLI270))((V415)));
	princ_str("(VMT",VV[27]);
	(void)((*(LnkLI270))((V415)));
	princ_str(") vs_top=base ; return(VMT",VV[27]);
	(void)((*(LnkLI270))((V415)));
	princ_str(");",VV[27]);
	{object V419 = Cnil;
	VMR26(V419)}
	return Cnil;
}
/*	local entry for function WT-REQUIREDS	*/

static object LI28(V422,V423)

object V422;object V423;
{	 VMB27 VMS27 VMV27
goto TTL;
TTL:;
	{register object V424;
	V424= (V422);
goto T1710;
T1710:;
	if(!(endp((V424)))){
	goto T1711;}
	goto T1708;
goto T1711;
T1711:;
	{register object V425;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V425= symbol_value(VV[88]);
	(void)(structure_set(car((V424)),VV[69],4,(V425)));
	princ_char(86,VV[21]);
	(void)((*(LnkLI267))((V425)));}
	if(endp(cdr((V424)))){
	goto T1721;}
	princ_char(44,VV[21]);
goto T1721;
T1721:;
	V424= cdr((V424));
	goto T1710;}
goto T1708;
T1708:;
	princ_str(")\n",VV[21]);
	if(((V422))==Cnil){
	goto T1731;}
	princ_char(10,VV[21]);
	{register object V426;
	register object V427;
	register object V428;
	V426= (V422);
	V427= (V423);
	V428= Cnil;
goto T1735;
T1735:;
	if(!(endp((V426)))){
	goto T1736;}
	princ_char(59,VV[21]);
	{object V429 = Cnil;
	VMR27(V429)}
goto T1736;
T1736:;
	if(((V428))==Cnil){
	goto T1741;}
	princ_char(59,VV[21]);
goto T1741;
T1741:;
	(void)((*(LnkLI267))(symbol_value(VV[16])));
	V430= (*(LnkLI325))(car((V426)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V430));
	V431= (*(LnkLI273))(car((V427)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V431));
	V428= car((V427));
	princ_char(86,VV[21]);
	V432= structure_ref(car((V426)),VV[69],4);
	(void)((*(LnkLI267))(/* INLINE-ARGS */V432));
	V426= cdr((V426));
	V427= cdr((V427));
	goto T1735;}
goto T1731;
T1731:;
	{object V433 = Cnil;
	VMR27(V433)}
	return Cnil;
}
/*	local entry for function ADD-DEBUG-INFO	*/

static object LI29(V436,V437)

object V436;object V437;
{	 VMB28 VMS28 VMV28
goto TTL;
TTL:;
	{object V438;
	V438= Cnil;
	{object V439;
	V439= (number_compare(symbol_value(VV[114]),small_fixnum(2))>=0?Ct:Cnil);
	if(((V439))==Cnil){
	goto T1761;}
	{object V440 = (V439);
	VMR28(V440)}
goto T1761;
T1761:;
	if((get((V436),VV[115],Cnil))!=Cnil){
	goto T1764;}
	{object V441 = (VFUN_NARGS=2,(*(LnkLI326))(VV[173],(V436)));
	VMR28(V441)}
goto T1764;
T1764:;
	(void)(remprop((V436),VV[115]));
	{register object V442;
	V442= small_fixnum(0);
	{register object V443;
	register object V444;
	V443= structure_ref(cadr((V437)),VV[62],1);
	V444= car((V443));
goto T1771;
T1771:;
	if(!(endp((V443)))){
	goto T1772;}
	goto T1767;
goto T1772;
T1772:;
	V445= structure_ref((V444),VV[69],2);
	if(!(type_of(/* INLINE-ARGS */V445)==t_cons)){
	goto T1776;}
	V446= structure_ref((V444),VV[69],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V446))==t_fixnum)){
	goto T1776;}
	V447= structure_ref((V444),VV[69],2);
	{object V448= cdr(/* INLINE-ARGS */V447);
	V442= (number_compare((V442),V448)>=0?((V442)):V448);}
goto T1776;
T1776:;
	V443= cdr((V443));
	V444= car((V443));
	goto T1771;}
goto T1767;
T1767:;
	base[0]= one_plus((V442));
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	V438= vs_base[0];
	{register object V449;
	register object V450;
	V449= structure_ref(cadr((V437)),VV[62],1);
	V450= car((V449));
goto T1794;
T1794:;
	if(!(endp((V449)))){
	goto T1795;}
	goto T1790;
goto T1795;
T1795:;
	V451= structure_ref((V450),VV[69],2);
	if(!(type_of(/* INLINE-ARGS */V451)==t_cons)){
	goto T1799;}
	V452= structure_ref((V450),VV[69],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V452))==t_fixnum)){
	goto T1799;}
	{object V453;
	register object V455;
	V456= structure_ref((V450),VV[69],2);
	V453= cdr(/* INLINE-ARGS */V456);
	V455= structure_ref((V450),VV[69],0);
	if(type_of(nthcdr(fixint((V453)),V438))!=t_cons)FEwrong_type_argument(Scons,nthcdr(fixint((V453)),V438));
	(nthcdr(fixint((V453)),V438))->c.c_car = (V455);
	(void)(nthcdr(fixint((V453)),V438));}
goto T1799;
T1799:;
	V449= cdr((V449));
	V450= car((V449));
	goto T1794;}
goto T1790;
T1790:;
	(void)(sputprop((V436),VV[116],(V438)));
	{object V457;
	V457= get((V436),VV[116],Cnil);
	if(((V457))==Cnil){
	goto T1815;}
	if((cdr((V457)))!=Cnil){
	goto T1814;}
	if((car((V457)))==Cnil){
	goto T1815;}
goto T1814;
T1814:;
	V458= list(2,VV[91],(V436));
	V459= list(3,VV[116],/* INLINE-ARGS */V458,list(2,VV[91],(V457)));
	{object V460 = (VFUN_NARGS=1,(*(LnkLI292))(/* INLINE-ARGS */V459));
	VMR28(V460)}
goto T1815;
T1815:;
	{object V461 = Cnil;
	VMR28(V461)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ANALYZE-REGS	*/

static long LI30(V464,V465)

object V464;object V465;
{	 VMB29 VMS29 VMV29
goto TTL;
TTL:;
	{object V466;
	V466= number_minus(symbol_value(VV[174]),(V465));
	if(!(number_compare(small_fixnum(0),symbol_value(VV[175]))==0)){
	goto T1823;}
	V467= (VFUN_NARGS=1,(*(LnkLI328))((V464)));
	{long V468 = (*(LnkLI327))(/* INLINE-ARGS */V467,(V466));
	VMR29(V468)}
goto T1823;
T1823:;
	{register object V469;
	register object V470;
	V469= Cnil;
	V470= Cnil;
	{register object V471;
	register object V472;
	V471= (V464);
	V472= car((V471));
goto T1829;
T1829:;
	if(!(endp((V471)))){
	goto T1830;}
	goto T1825;
goto T1830;
T1830:;
	V474= structure_ref((V472),VV[69],5);
	{register object x= /* INLINE-ARGS */V474,V473= VV[176];
	while(!endp(V473))
	if(x==(V473->c.c_car)){
	goto T1837;
	}else V473=V473->c.c_cdr;
	goto T1836;}
goto T1837;
T1837:;{object V475;
	{register object x= (V472),V476= (V470);
	while(!endp(V476))
	if(eql(x,V476->c.c_car)){
	V475= V476;
	goto T1839;
	}else V476=V476->c.c_cdr;
	V475= Cnil;}
goto T1839;
T1839:;
	if(V475==Cnil)goto T1838;
	goto T1834;
goto T1838;
T1838:;}
	V470= make_cons((V472),(V470));
	goto T1834;
goto T1836;
T1836:;{object V477;
	{register object x= (V472),V478= (V469);
	while(!endp(V478))
	if(x==(V478->c.c_car)){
	V477= V478;
	goto T1842;
	}else V478=V478->c.c_cdr;
	V477= Cnil;}
goto T1842;
T1842:;
	if(V477==Cnil)goto T1841;
	goto T1834;
goto T1841;
T1841:;}
	V470= make_cons((V472),(V470));
goto T1834;
T1834:;
	V471= cdr((V471));
	V472= car((V471));
	goto T1829;}
goto T1825;
T1825:;
	(void)((*(LnkLI327))((V469),(V466)));
	{long V479 = (*(LnkLI327))((V470),symbol_value(VV[175]));
	VMR29(V479)}}}
	base[0]=base[0];
}
/*	local entry for function ANALYZE-REGS1	*/

static long LI31(V482,V483)

object V482;object V483;
{	 VMB30 VMS30 VMV30
goto TTL;
TTL:;
	{register long V484;
	register long V485;
	long V486;
	long V487;
	register long V488;
	V484= 0;
	V485= 3;
	V486= 100000;
	V487= fix((V483));
	V488= 0;
	V482= (VFUN_NARGS=1,(*(LnkLI328))((V482)));
goto T1858;
T1858:;
	{register object V489;
	object V490;
	V489= (V482);
	V490= car((V489));
goto T1864;
T1864:;
	if(!(endp((V489)))){
	goto T1865;}
	goto T1860;
goto T1865;
T1865:;
	V484= fix(structure_ref((V490),VV[69],6));
	if(!((V484)>=(V485))){
	goto T1871;}
	V488= (V488)+(1);
	if(!((V484)<(V486))){
	goto T1876;}
	V486= V484;
goto T1876;
T1876:;
	if(!((V488)>(V487))){
	goto T1871;}
	goto T1859;
goto T1871;
T1871:;
	V489= cdr((V489));
	V490= car((V489));
	goto T1864;}
goto T1860;
T1860:;
	if(!((V488)<(V487))){
	goto T1887;}
	V485= (V485)-(1);
goto T1887;
T1887:;
	{register object V491;
	register object V492;
	V491= (V482);
	V492= car((V491));
goto T1895;
T1895:;
	if(!(endp((V491)))){
	goto T1896;}
	goto T1891;
goto T1896;
T1896:;
	{long V493= fix(structure_ref((V492),VV[69],6));
	if(!((/* INLINE-ARGS */V493)<(V485))){
	goto T1900;}}
	(void)(structure_set((V492),VV[69],6,small_fixnum(0)));
goto T1900;
T1900:;
	V491= cdr((V491));
	V492= car((V491));
	goto T1895;}
goto T1891;
T1891:;
	{long V494 = V485;
	VMR30(V494)}
goto T1859;
T1859:;
	V488= 0;
	V485= (V486)+(1);
	V486= 1000000;
	goto T1858;}
	base[0]=base[0];
}
/*	local entry for function WT-GLOBAL-ENTRY	*/

static object LI32(V499,V500,V501,V502)

object V499;object V500;object V501;object V502;
{	 VMB31 VMS31 VMV31
goto TTL;
TTL:;
	if((get((V499),VV[102],Cnil))==Cnil){
	goto T1915;}
	{object V503 = Cnil;
	VMR31(V503)}
goto T1915;
T1915:;
	(void)((VFUN_NARGS=2,(*(LnkLI304))(VV[179],(V499))));
	princ_str("\nstatic void L",VV[21]);
	(void)((*(LnkLI267))((V500)));
	princ_str("()",VV[21]);
	princ_str("\n{	register object *base=vs_base;",VV[21]);
	if((symbol_value(VV[157]))!=Cnil){
	goto T1926;}
	if((symbol_value(VV[158]))==Cnil){
	goto T1925;}
goto T1926;
T1926:;
	princ_str("\n	check_arg(",VV[21]);
	V504 = make_fixnum(length((V501)));
	(void)((*(LnkLI267))(V504));
	princ_str(");",VV[21]);
goto T1925;
T1925:;
	princ_str("\n	base[0]=",VV[21]);
	{object V506= (V502);
	if((V506!= VV[89]))goto T1937;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T1939;}
	V505= VV[180];
	goto T1936;
goto T1939;
T1939:;
	V505= VV[181];
	goto T1936;
goto T1937;
T1937:;
	if((V506!= VV[142]))goto T1941;
	V505= VV[182];
	goto T1936;
goto T1941;
T1941:;
	if((V506!= VV[143]))goto T1942;
	V505= VV[183];
	goto T1936;
goto T1942;
T1942:;
	if((V506!= VV[144]))goto T1943;
	V505= VV[184];
	goto T1936;
goto T1943;
T1943:;
	V505= VV[185];}
goto T1936;
T1936:;
	(void)((*(LnkLI267))(V505));
	princ_str("(LI",VV[21]);
	(void)((*(LnkLI267))((V500)));
	princ_char(40,VV[21]);
	{register object V507;
	register long V508;
	V508= 0;
	V507= (V501);
goto T1950;
T1950:;
	if(!(endp((V507)))){
	goto T1951;}
	goto T1947;
goto T1951;
T1951:;
	{object V510= car((V507));
	if((V510!= VV[89]))goto T1958;
	V509= VV[186];
	goto T1957;
goto T1958;
T1958:;
	if((V510!= VV[142]))goto T1959;
	V509= VV[187];
	goto T1957;
goto T1959;
T1959:;
	if((V510!= VV[143]))goto T1960;
	V509= VV[188];
	goto T1957;
goto T1960;
T1960:;
	if((V510!= VV[144]))goto T1961;
	V509= VV[189];
	goto T1957;
goto T1961;
T1961:;
	V509= VV[190];}
goto T1957;
T1957:;
	(void)((*(LnkLI267))(V509));
	princ_str("(base[",VV[21]);
	V511 = make_fixnum(V508);
	(void)((*(LnkLI267))(V511));
	princ_str("])",VV[21]);
	if(endp(cdr((V507)))){
	goto T1965;}
	princ_char(44,VV[21]);
goto T1965;
T1965:;
	V507= cdr((V507));
	V508= (V508)+1;
	goto T1950;}
goto T1947;
T1947:;
	princ_str("));",VV[21]);
	princ_str("\n	vs_top=(vs_base=base)+1;",VV[21]);
	princ_str("\n}",VV[21]);
	{object V512 = Cnil;
	VMR31(V512)}
	return Cnil;
}
/*	local entry for function REP-TYPE	*/

static object LI33(V514)

object V514;
{	 VMB32 VMS32 VMV32
goto TTL;
TTL:;
	{object V515= (V514);
	if((V515!= VV[89]))goto T1978;
	{object V516 = VV[191];
	VMR32(V516)}
goto T1978;
T1978:;
	if((V515!= VV[254]))goto T1979;
	{object V517 = VV[192];
	VMR32(V517)}
goto T1979;
T1979:;
	if((V515!= VV[142]))goto T1980;
	{object V518 = VV[193];
	VMR32(V518)}
goto T1980;
T1980:;
	if((V515!= VV[144]))goto T1981;
	{object V519 = VV[194];
	VMR32(V519)}
goto T1981;
T1981:;
	if((V515!= VV[143]))goto T1982;
	{object V520 = VV[195];
	VMR32(V520)}
goto T1982;
T1982:;
	{object V521 = VV[196];
	VMR32(V521)}}
	return Cnil;
}
/*	local entry for function T1DEFMACRO	*/

static object LI34(V523)

register object V523;
{	 VMB33 VMS33 VMV33
	bds_check;
goto TTL;
TTL:;
	if(endp((V523))){
	goto T1984;}
	if(!(endp(cdr((V523))))){
	goto T1983;}
goto T1984;
T1984:;
	V524 = make_fixnum(length((V523)));
	(void)((*(LnkLI275))(VV[197],small_fixnum(2),V524));
goto T1983;
T1983:;
	if(type_of(car((V523)))==t_symbol){
	goto T1988;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[198],car((V523)))));
goto T1988;
T1988:;
	V525= make_cons(VV[197],(V523));
	(void)((*(LnkLI260))(Ct,/* INLINE-ARGS */V525));
	setq(VV[6],Ct);
	{register object V526;
	object V527;
	setq(VV[61],number_plus(symbol_value(VV[61]),small_fixnum(1)));
	V527= symbol_value(VV[61]);
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[52],Cnil);
	bds_bind(VV[59],Cnil);
	V526= Cnil;
	V526= (*(LnkLI329))(car((V523)),cadr((V523)),cddr((V523)));
	(void)((*(LnkLI285))());
	V528= list(7,VV[197],car((V523)),(V527),cddr((V526)),car((V526)),cadr((V526)),(VV[59]->s.s_dbind));
	setq(VV[20],make_cons(/* INLINE-ARGS */V528,symbol_value(VV[20])));
	{object V529 = symbol_value(VV[20]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR33(V529)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFMACRO	*/

static object LI35(V536,V537,V538,V539,V540,V541)

object V536;object V537;object V538;object V539;object V540;object V541;
{	 VMB34 VMS34 VMV34
goto TTL;
TTL:;
	if(((V539))==Cnil){
	goto T2000;}
	V542= list(4,VV[103],list(2,VV[91],(V536)),(V539),VV[199]);
	(void)((VFUN_NARGS=1,(*(LnkLI292))(/* INLINE-ARGS */V542)));
goto T2000;
T2000:;
	if(((V540))==Cnil){
	goto T2003;}
	V543= list(2,VV[91],(V536));
	V544= list(4,VV[103],/* INLINE-ARGS */V543,list(2,VV[91],(V540)),VV[200]);
	(void)((VFUN_NARGS=1,(*(LnkLI292))(/* INLINE-ARGS */V544)));
goto T2003;
T2003:;
	princ_str("\nstatic void L",VV[27]);
	(void)((*(LnkLI270))((V537)));
	princ_str("();",VV[27]);
	V545= list(2,VV[91],(V536));
	V546= list(3,VV[201],/* INLINE-ARGS */V545,(*(LnkLI293))(VV[202],(V537)));
	{object V547 = (VFUN_NARGS=1,(*(LnkLI292))(/* INLINE-ARGS */V546));
	VMR34(V547)}
	return Cnil;
}
/*	local entry for function T3DEFMACRO	*/

static object LI36(V554,V555,V556,V557,V558,V559)

object V554;object V555;register object V556;object V557;object V558;object V559;
{	 VMB35 VMS35 VMV35
	bds_check;
goto TTL;
TTL:;
	if((get((V554),VV[203],Cnil))==Cnil){
	goto T2012;}
	bds_bind(VV[16],VV[204]);
	goto T2010;
goto T2012;
T2012:;
	bds_bind(VV[16],VV[205]);
goto T2010;
T2010:;
	bds_bind(VV[128],VV[127]);
	bds_bind(VV[14],Cnil);
	bds_bind(VV[129],small_fixnum(0));
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],small_fixnum(0));
	bds_bind(VV[132],small_fixnum(0));
	bds_bind(VV[133],Cnil);
	bds_bind(VV[134],make_cons((VV[128]->s.s_dbind),Cnil));
	bds_bind(VV[135],(VV[128]->s.s_dbind));
	setq(VV[137],number_plus(symbol_value(VV[137]),small_fixnum(1)));
	bds_bind(VV[136],symbol_value(VV[137]));
	bds_bind(VV[138],Cnil);
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],small_fixnum(0));
	(void)((VFUN_NARGS=2,(*(LnkLI304))(VV[206],(V554))));
	princ_str("\nstatic void L",VV[21]);
	(void)((*(LnkLI267))((V555)));
	princ_str("()",VV[21]);
	princ_str("\n{register object *",VV[21]);
	(void)((*(LnkLI267))((VV[16]->s.s_dbind)));
	princ_str("base=vs_base;",VV[21]);
	V560= structure_ref(car(cddddr((V556))),VV[62],1);
	(void)((*(LnkLI306))(/* INLINE-ARGS */V560,(V555),VV[148]));
	princ_str("\n	register object *",VV[21]);
	(void)((*(LnkLI267))((VV[16]->s.s_dbind)));
	princ_str("sup=base+VM",VV[21]);
	(void)((*(LnkLI267))((VV[136]->s.s_dbind)));
	princ_char(59,VV[21]);
	princ_str(" VC",VV[21]);
	(void)((*(LnkLI267))((VV[136]->s.s_dbind)));
	if((symbol_value(VV[157]))==Cnil){
	goto T2038;}
	princ_str("\n	vs_reserve(VM",VV[21]);
	(void)((*(LnkLI267))((VV[136]->s.s_dbind)));
	princ_str(");",VV[21]);
	goto T2036;
goto T2038;
T2038:;
	princ_str("\n	vs_check;",VV[21]);
goto T2036;
T2036:;
	if(((V559))==Cnil){
	goto T2044;}
	princ_str("\n	bds_check;",VV[21]);
goto T2044;
T2044:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2048;}
	princ_str("\n	ihs_check;",VV[21]);
goto T2048;
T2048:;
	base[15]= car((V556));
	base[16]= cadr((V556));
	base[17]= caddr((V556));
	base[18]= cadddr((V556));
	vs_top=(vs_base=base+15)+4;
	(void) (*Lnk330)();
	vs_top=sup;
	princ_str("\n}",VV[21]);
	V561= make_cons((VV[136]->s.s_dbind),(VV[130]->s.s_dbind));
	setq(VV[29],make_cons(/* INLINE-ARGS */V561,symbol_value(VV[29])));
	princ_str("\n#define VC",VV[27]);
	(void)((*(LnkLI270))((VV[136]->s.s_dbind)));
	{object V562 = (*(LnkLI324))();
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
	VMR35(V562)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1ORDINARY	*/

static object LI37(V564)

register object V564;
{	 VMB36 VMS36 VMV36
	bds_check;
goto TTL;
TTL:;
	{register object V565;
	V565= Cnil;
	setq(VV[6],Ct);
	if((symbol_value(VV[48]))==Cnil){
	goto T2068;}
	(void)((*(LnkLI260))(Cnil,(V564)));
	{object V566;
	base[0]= VV[207];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V566= vs_base[0];
	V567= listA(3,VV[64],(V566),VV[208]);
	(void)((*(LnkLI281))(/* INLINE-ARGS */V567));
	base[0]= list(5,VV[51],(V566),Cnil,(V564),Cnil);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk264)();
	vs_top=sup;
	V568= list(2,VV[209],make_cons((V566),Cnil));
	setq(VV[20],make_cons(/* INLINE-ARGS */V568,symbol_value(VV[20])));
	{object V569 = symbol_value(VV[20]);
	VMR36(V569)}}
goto T2068;
T2068:;
	{object V570;
	if(type_of((V564))==t_cons){
	goto T2078;}
	V570= Cnil;
	goto T2077;
goto T2078;
T2078:;
	if(type_of(car((V564)))==t_symbol){
	goto T2080;}
	V570= Cnil;
	goto T2077;
goto T2080;
T2080:;
	if(!((car((V564)))==(VV[210]))){
	goto T2084;}
	goto T2082;
goto T2084;
T2084:;
	base[0]= car((V564));
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	V571= vs_base[0];
	if((V571)==Cnil){
	goto T2082;}
	V570= Cnil;
	goto T2077;
goto T2082;
T2082:;
	{register object V572;
	register long V573;
	V572= cdr((V564));
	V573= 1;
goto T2091;
T2091:;
	if((V573)>=(1000)){
	goto T2093;}
	if(type_of((V572))==t_cons){
	goto T2092;}
goto T2093;
T2093:;
	V570= Cnil;
	goto T2077;
goto T2092;
T2092:;
	if(!(type_of(car((V572)))==t_cons)){
	goto T2098;}
	if(!((caar((V572)))==(VV[64]))){
	goto T2098;}
	V565= cadr(car((V572)));
	if(!(type_of((V565))==t_cons)){
	goto T2098;}
	if(!((car((V565)))==(VV[211]))){
	goto T2098;}
	{register object V574;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V574= vs_base[0];
	base[0]= listA(3,VV[51],(V574),cdr((V565)));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk264)();
	vs_top=sup;
	base[1]= (V564);
	base[2]= small_fixnum(0);
	base[3]= make_fixnum(V573);
	vs_top=(vs_base=base+1)+3;
	Lsubseq();
	vs_top=sup;
	base[0]= vs_base[0];
	V575= list(2,VV[212],list(2,VV[91],(V574)));
	base[1]= make_cons(/* INLINE-ARGS */V575,Cnil);
	V576 = make_fixnum(V573);
	V577= number_plus(small_fixnum(1),V576);
	base[2]= nthcdr(fixint(/* INLINE-ARGS */V577),(V564));
	vs_top=(vs_base=base+0)+3;
	Lappend();
	vs_top=sup;
	V564= vs_base[0];
	goto TTL;}
goto T2098;
T2098:;
	if(type_of((V572))==t_cons){
	goto T2121;}
	V572= Cnil;
	goto T2120;
goto T2121;
T2121:;
	V572= cdr((V572));
goto T2120;
T2120:;
	V573= (1)+(V573);
	goto T2091;}
goto T2077;
T2077:;
	if(((V570))==Cnil){
	goto T2126;}
	{object V578 = (V570);
	VMR36(V578)}
goto T2126;
T2126:;
	(void)((*(LnkLI260))(Cnil,(V564)));
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[52],Cnil);
	V579= list(2,VV[209],(V564));
	setq(VV[20],make_cons(/* INLINE-ARGS */V579,symbol_value(VV[20])));
	{object V580 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR36(V580)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2ORDINARY	*/

static object LI38(V582)

object V582;
{	 VMB37 VMS37 VMV37
goto TTL;
TTL:;
	{object V583;
	V583= (type_of((V582))!=t_cons?Ct:Cnil);
	if(((V583))==Cnil){
	goto T2133;}
	{object V584 = (V583);
	VMR37(V584)}
goto T2133;
T2133:;
	{object V585;
	base[0]= (V582);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	V585= vs_base[0];
	if(((V585))==Cnil){
	goto T2138;}
	{object V586 = (V585);
	VMR37(V586)}
goto T2138;
T2138:;
	{object V587 = (VFUN_NARGS=1,(*(LnkLI292))((V582)));
	VMR37(V587)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-LOAD-TIME-SHARP-COMMA	*/

static object LI39()

{	 VMB38 VMS38 VMV38
goto TTL;
TTL:;
	{register object V588;
	register object V589;
	V588= reverse(symbol_value(VV[52]));
	V589= car((V588));
goto T2143;
T2143:;
	if(!(endp((V588)))){
	goto T2144;}
	{object V590 = Cnil;
	VMR38(V590)}
goto T2144;
T2144:;
	if(!(type_of((V589))!=t_cons)){
	goto T2148;}
	(void)((*(LnkLI331))());
goto T2148;
T2148:;
	V591= make_cons(VV[213],(V589));
	setq(VV[20],make_cons(/* INLINE-ARGS */V591,symbol_value(VV[20])));
	V588= cdr((V588));
	V589= car((V588));
	goto T2143;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2SHARP-COMMA	*/

static object LI40(V594,V595)

object V594;object V595;
{	 VMB39 VMS39 VMV39
goto TTL;
TTL:;
	V596= list(3,VV[214],(V594),(V595));
	{object V597 = (VFUN_NARGS=1,(*(LnkLI292))(/* INLINE-ARGS */V596));
	VMR39(V597)}
	return Cnil;
}
/*	local entry for function T2DECLARE	*/

static object LI41(V599)

object V599;
{	 VMB40 VMS40 VMV40
goto TTL;
TTL:;
	{object V600 = (*(LnkLI331))();
	VMR40(V600)}
	return Cnil;
}
/*	local entry for function T1DEFINE-STRUCTURE	*/

static object LI42(V602)

object V602;
{	 VMB41 VMS41 VMV41
goto TTL;
TTL:;
	V603= (*(LnkLI260))(Cnil,Cnil);
	V604= make_cons(((/* INLINE-ARGS */V603)==Cnil?Ct:Cnil),Cnil);
	V605= append((V602),/* INLINE-ARGS */V604);
	V606= make_cons(VV[215],/* INLINE-ARGS */V605);
	(void)((*(LnkLI260))(Ct,/* INLINE-ARGS */V606));
	V607= make_cons(VV[215],(V602));
	{object V608 = (*(LnkLI265))(/* INLINE-ARGS */V607);
	VMR41(V608)}
	return Cnil;
}
/*	local entry for function SET-DBIND	*/

static object LI43(V611,V612)

object V611;object V612;
{	 VMB42 VMS42 VMV42
goto TTL;
TTL:;
	princ_str("\n	VV[",VV[21]);
	(void)((*(LnkLI267))((V612)));
	princ_str("]->s.s_dbind = ",VV[21]);
	(void)((*(LnkLI267))((V611)));
	princ_char(59,VV[21]);
	{object V613 = Cnil;
	VMR42(V613)}
	return Cnil;
}
/*	local entry for function T1CLINES	*/

static object LI44(V615)

object V615;
{	 VMB43 VMS43 VMV43
goto TTL;
TTL:;
	{register object V616;
	register object V617;
	V616= (V615);
	V617= car((V616));
goto T2169;
T2169:;
	if(!(endp((V616)))){
	goto T2170;}
	goto T2165;
goto T2170;
T2170:;
	if(type_of((V617))==t_string){
	goto T2174;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[216],(V617))));
goto T2174;
T2174:;
	V616= cdr((V616));
	V617= car((V616));
	goto T2169;}
goto T2165;
T2165:;
	V618= list(2,VV[217],(V615));
	setq(VV[20],make_cons(/* INLINE-ARGS */V618,symbol_value(VV[20])));
	{object V619 = symbol_value(VV[20]);
	VMR43(V619)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3CLINES	*/

static object LI45(V621)

object V621;
{	 VMB44 VMS44 VMV44
goto TTL;
TTL:;
	{register object V622;
	register object V623;
	V622= (V621);
	V623= car((V622));
goto T2186;
T2186:;
	if(!(endp((V622)))){
	goto T2187;}
	{object V624 = Cnil;
	VMR44(V624)}
goto T2187;
T2187:;
	princ_char(10,VV[21]);
	(void)((*(LnkLI267))((V623)));
	V622= cdr((V622));
	V623= car((V622));
	goto T2186;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFCFUN	*/

static object LI46(V626)

register object V626;
{	 VMB45 VMS45 VMV45
goto TTL;
TTL:;
	{register object V627;
	V627= Cnil;
	if(endp((V626))){
	goto T2201;}
	if(!(endp(cdr((V626))))){
	goto T2200;}
goto T2201;
T2201:;
	V628 = make_fixnum(length((V626)));
	(void)((*(LnkLI275))(VV[218],small_fixnum(2),V628));
goto T2200;
T2200:;
	if(type_of(car((V626)))==t_string){
	goto T2205;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[219],car((V626)))));
goto T2205;
T2205:;
	{object V629= cadr((V626));
	if(type_of(V629)==t_fixnum||
type_of(V629)==t_bignum||
type_of(V629)==t_ratio||
type_of(V629)==t_shortfloat||
type_of(V629)==t_longfloat||
type_of(V629)==t_complex){
	goto T2208;}}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[220],cadr((V626)))));
goto T2208;
T2208:;
	{register object V630;
	register object V631;
	V630= cddr((V626));
	V631= car((V630));
goto T2215;
T2215:;
	if(!(endp((V630)))){
	goto T2216;}
	goto T2211;
goto T2216;
T2216:;
	if(!(type_of((V631))==t_string)){
	goto T2222;}
	V627= make_cons((V631),(V627));
	goto T2220;
goto T2222;
T2222:;
	if(!(type_of((V631))==t_cons)){
	goto T2226;}
	if(!(type_of(car((V631)))==t_symbol)){
	goto T2229;}
	base[2]= car((V631));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2231;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[221],car((V631)))));
goto T2231;
T2231:;
	V632= car((V631));
	V633= (*(LnkLI332))(cdr((V631)));
	V634= make_cons(/* INLINE-ARGS */V632,/* INLINE-ARGS */V633);
	V635= make_cons(/* INLINE-ARGS */V634,Cnil);
	V627= make_cons(/* INLINE-ARGS */V635,(V627));
	goto T2220;
goto T2229;
T2229:;
	if(!(type_of(car((V631)))==t_cons)){
	goto T2237;}
	if(!(type_of(caar((V631)))==t_symbol)){
	goto T2237;}
	if(!((caar((V631)))==(VV[91]))){
	goto T2244;}
	if(!(endp(cdar((V631))))){
	goto T2246;}
	goto T2237;
goto T2246;
T2246:;
	if(!(((endp(cddar((V631)))?Ct:Cnil))==Cnil)){
	goto T2248;}
	goto T2237;
goto T2248;
T2248:;
	if(!(endp(cdr((V631))))){
	goto T2250;}
	goto T2237;
goto T2250;
T2250:;
	if(((endp(cddr((V631)))?Ct:Cnil))==Cnil){
	goto T2237;}
	goto T2242;
goto T2244;
T2244:;
	base[2]= caar((V631));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2237;}
goto T2242;
T2242:;
	V636= caar((V631));
	if(!((caar((V631)))==(VV[91]))){
	goto T2256;}
	V638= (*(LnkLI317))(cadar((V631)));
	V637= make_cons(/* INLINE-ARGS */V638,Cnil);
	goto T2254;
goto T2256;
T2256:;
	V637= (*(LnkLI332))(cdar((V631)));
goto T2254;
T2254:;
	V639= make_cons(/* INLINE-ARGS */V636,V637);
	V640= (*(LnkLI332))(cdr((V631)));
	V641= make_cons(/* INLINE-ARGS */V639,/* INLINE-ARGS */V640);
	V627= make_cons(/* INLINE-ARGS */V641,(V627));
	goto T2220;
goto T2237;
T2237:;
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[222],(V631))));
	goto T2220;
goto T2226;
T2226:;
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[223],(V631))));
goto T2220;
T2220:;
	V630= cdr((V630));
	V631= car((V630));
	goto T2215;}
goto T2211;
T2211:;
	V642= car((V626));
	V643= cadr((V626));
	V644= list(4,VV[218],/* INLINE-ARGS */V642,/* INLINE-ARGS */V643,reverse((V627)));
	setq(VV[20],make_cons(/* INLINE-ARGS */V644,symbol_value(VV[20])));
	{object V645 = symbol_value(VV[20]);
	VMR45(V645)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3DEFCFUN	*/

static object LI47(V649,V650,V651)

object V649;object V650;object V651;
{	 VMB46 VMS46 VMV46
goto TTL;
TTL:;
	{object V652;
	V652= Cnil;
	(void)((VFUN_NARGS=2,(*(LnkLI304))(VV[224],VV[218])));
	princ_char(10,VV[21]);
	(void)((*(LnkLI267))((V649)));
	princ_str("\n{",VV[21]);
	princ_str("\nobject *vs=vs_top;",VV[21]);
	princ_str("\nobject *old_top=vs_top+",VV[21]);
	(void)((*(LnkLI267))((V650)));
	princ_char(59,VV[21]);
	if(!(number_compare((V650),small_fixnum(0))>0)){
	goto T2277;}
	princ_str("\n	vs_top=old_top;",VV[21]);
goto T2277;
T2277:;
	princ_str("\n{",VV[21]);
	{object V653;
	register object V654;
	V653= (V651);
	V654= car((V653));
goto T2287;
T2287:;
	if(!(endp((V653)))){
	goto T2288;}
	goto T2283;
goto T2288;
T2288:;
	if(!(type_of((V654))==t_string)){
	goto T2294;}
	princ_char(10,VV[21]);
	(void)((*(LnkLI267))((V654)));
	goto T2292;
goto T2294;
T2294:;
	if(!((caar((V654)))==(VV[91]))){
	goto T2299;}
	princ_char(10,VV[21]);
	(void)((*(LnkLI267))(cadadr((V654))));
	{object V655= caadr((V654));
	if((V655!= VV[74]))goto T2304;
	princ_str("=VV[",VV[21]);
	(void)((*(LnkLI267))(cadar((V654))));
	princ_str("];",VV[21]);
	goto T2292;
goto T2304;
T2304:;
	princ_str("=object_to_",VV[21]);
	base[1]= symbol_name(caadr((V654)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V656= vs_base[0];
	(void)((*(LnkLI267))(V656));
	princ_str("(VV[",VV[21]);
	(void)((*(LnkLI267))(cadar((V654))));
	princ_str("]);",VV[21]);
	goto T2292;}
goto T2299;
T2299:;
	princ_str("\n{vs_base=vs_top=old_top;",VV[21]);
	{register object V657;
	register object V658;
	V657= cdar((V654));
	V658= car((V657));
goto T2321;
T2321:;
	if(!(endp((V657)))){
	goto T2322;}
	goto T2317;
goto T2322;
T2322:;
	princ_str("\nvs_push(",VV[21]);
	{object V659= car((V658));
	if((V659!= VV[74]))goto T2329;
	(void)((*(LnkLI267))(cadr((V658))));
	goto T2328;
goto T2329;
T2329:;
	if((V659!= VV[333]))goto T2331;
	princ_str("code_char((int)",VV[21]);
	(void)((*(LnkLI267))(cadr((V658))));
	princ_char(41,VV[21]);
	goto T2328;
goto T2331;
T2331:;
	if((V659!= VV[334]))goto T2335;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T2336;}
	princ_str("CMP",VV[21]);
goto T2336;
T2336:;
	princ_str("make_fixnum((int)",VV[21]);
	(void)((*(LnkLI267))(cadr((V658))));
	princ_char(41,VV[21]);
	goto T2328;
goto T2335;
T2335:;
	if((V659!= VV[335]))goto T2343;
	princ_str("make_shortfloat((double)",VV[21]);
	(void)((*(LnkLI267))(cadr((V658))));
	princ_char(41,VV[21]);
	goto T2328;
goto T2343;
T2343:;
	if((V659!= VV[336]))goto T2347;
	princ_str("make_longfloat((double)",VV[21]);
	(void)((*(LnkLI267))(cadr((V658))));
	princ_char(41,VV[21]);
	goto T2328;
goto T2347;
T2347:;}
goto T2328;
T2328:;
	princ_str(");",VV[21]);
	V657= cdr((V657));
	V658= car((V657));
	goto T2321;}
goto T2317;
T2317:;
	{register object x= caar((V654)),V660= symbol_value(VV[79]);
	while(!endp(V660))
	if(type_of(V660->c.c_car)==t_cons &&eql(x,V660->c.c_car->c.c_car)){
	V652= (V660->c.c_car);
	goto T2362;
	}else V660=V660->c.c_cdr;
	V652= Cnil;}
goto T2362;
T2362:;
	if(((V652))==Cnil){
	goto T2360;}
	if((symbol_value(VV[149]))==Cnil){
	goto T2364;}
	princ_str("\nihs_push(VV[",VV[21]);
	V661= (*(LnkLI319))(caar((V654)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V661));
	princ_str("]);",VV[21]);
	princ_str("\nL",VV[21]);
	(void)((*(LnkLI267))(cdr((V652))));
	princ_str("();",VV[21]);
	princ_str("\nihs_pop();",VV[21]);
	goto T2358;
goto T2364;
T2364:;
	princ_str("\nL",VV[21]);
	(void)((*(LnkLI267))(cdr((V652))));
	princ_str("();",VV[21]);
	goto T2358;
goto T2360;
T2360:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2379;}
	princ_str("\nsuper_funcall(VV[",VV[21]);
	V662= (*(LnkLI319))(caar((V654)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V662));
	princ_str("]);",VV[21]);
	goto T2358;
goto T2379;
T2379:;
	if((symbol_value(VV[157]))==Cnil){
	goto T2385;}
	princ_str("\nsuper_funcall_no_event(VV[",VV[21]);
	V663= (*(LnkLI319))(caar((V654)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V663));
	princ_str("]);",VV[21]);
	goto T2358;
goto T2385;
T2385:;
	princ_str("\nCMPfuncall(VV[",VV[21]);
	V664= (*(LnkLI319))(caar((V654)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V664));
	princ_str("]->s.s_gfdef);",VV[21]);
goto T2358;
T2358:;
	if(endp(cdr((V654)))){
	goto T2393;}
	princ_char(10,VV[21]);
	(void)((*(LnkLI267))(cadadr((V654))));
	{object V665= caadr((V654));
	if((V665!= VV[74]))goto T2400;
	princ_str("=vs_base[0];",VV[21]);
	goto T2399;
goto T2400;
T2400:;
	princ_str("=object_to_",VV[21]);
	base[1]= symbol_name(caadr((V654)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V666= vs_base[0];
	(void)((*(LnkLI267))(V666));
	princ_str("(vs_base[0]);",VV[21]);}
goto T2399;
T2399:;
	{register object V667;
	register object V668;
	V667= cddr((V654));
	V668= car((V667));
goto T2410;
T2410:;
	if(!(endp((V667)))){
	goto T2411;}
	goto T2393;
goto T2411;
T2411:;
	princ_str("\nvs_base++;",VV[21]);
	princ_char(10,VV[21]);
	(void)((*(LnkLI267))(cadr((V668))));
	{object V669= car((V668));
	if((V669!= VV[74]))goto T2421;
	princ_str("=(vs_base<vs_top?vs_base[0]:Cnil);",VV[21]);
	goto T2420;
goto T2421;
T2421:;
	princ_str("=object_to_",VV[21]);
	base[3]= symbol_name(car((V668)));
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V670= vs_base[0];
	(void)((*(LnkLI267))(V670));
	princ_str("((vs_base<vs_top?vs_base[0]:Cnil));",VV[21]);}
goto T2420;
T2420:;
	V667= cdr((V667));
	V668= car((V667));
	goto T2410;}
goto T2393;
T2393:;
	princ_str("\n}",VV[21]);
goto T2292;
T2292:;
	V653= cdr((V653));
	V654= car((V653));
	goto T2287;}
goto T2283;
T2283:;
	princ_str("\n}",VV[21]);
	princ_str("\nvs_top=vs;",VV[21]);
	princ_str("\n}",VV[21]);
	{object V671 = Cnil;
	VMR46(V671)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFENTRY	*/

static object LI48(V673)

register object V673;
{	 VMB47 VMS47 VMV47
goto TTL;
TTL:;
	{register object V674;
	register object V675;
	object V676;
	register object V677;
	V674= Cnil;
	V675= Cnil;
	setq(VV[61],number_plus(symbol_value(VV[61]),small_fixnum(1)));
	V676= symbol_value(VV[61]);
	V677= Cnil;
	if(endp((V673))){
	goto T2450;}
	if(endp(cdr((V673)))){
	goto T2450;}
	if(!(endp(cddr((V673))))){
	goto T2449;}
goto T2450;
T2450:;
	V678 = make_fixnum(length((V673)));
	(void)((*(LnkLI275))(VV[225],small_fixnum(3),V678));
goto T2449;
T2449:;
	if(type_of(car((V673)))==t_symbol){
	goto T2456;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[226],car((V673)))));
goto T2456;
T2456:;
	{register object V679;
	register object V680;
	V679= cadr((V673));
	V680= car((V679));
goto T2463;
T2463:;
	if(!(endp((V679)))){
	goto T2464;}
	goto T2459;
goto T2464;
T2464:;
	{register object x= (V680),V681= VV[227];
	while(!endp(V681))
	if(eql(x,V681->c.c_car)){
	goto T2468;
	}else V681=V681->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[228],(V680))));
goto T2468;
T2468:;
	V679= cdr((V679));
	V680= car((V679));
	goto T2463;}
goto T2459;
T2459:;
	V677= caddr((V673));
	if(!(type_of((V677))==t_symbol)){
	goto T2480;}
	V674= VV[74];
	base[1]= symbol_name((V677));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V675= vs_base[0];
	goto T2478;
goto T2480;
T2480:;
	if(!(type_of((V677))==t_string)){
	goto T2487;}
	V674= VV[74];
	V675= (V677);
	goto T2478;
goto T2487;
T2487:;
	if(!(type_of((V677))==t_cons)){
	goto T2493;}
	{register object x= car((V677)),V682= VV[229];
	while(!endp(V682))
	if(eql(x,V682->c.c_car)){
	goto T2497;
	}else V682=V682->c.c_cdr;
	goto T2493;}
goto T2497;
T2497:;
	if(!(type_of(cdr((V677)))==t_cons)){
	goto T2493;}
	if(type_of(cadr((V677)))==t_symbol){
	goto T2500;}
	if(!(type_of(cadr((V677)))==t_string)){
	goto T2493;}
goto T2500;
T2500:;
	if(!(endp(cddr((V677))))){
	goto T2493;}
	if(!(type_of(cadr((V677)))==t_symbol)){
	goto T2508;}
	base[1]= symbol_name(cadr((V677)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V675= vs_base[0];
	goto T2506;
goto T2508;
T2508:;
	V675= cadr((V677));
goto T2506;
T2506:;
	V674= car((V677));
	goto T2478;
goto T2493;
T2493:;
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[230],(V677))));
goto T2478;
T2478:;
	V683= list(6,VV[225],car((V673)),(V676),cadr((V673)),(V674),(V675));
	setq(VV[20],make_cons(/* INLINE-ARGS */V683,symbol_value(VV[20])));
	V684= make_cons(car((V673)),(V676));
	setq(VV[79],make_cons(/* INLINE-ARGS */V684,symbol_value(VV[79])));
	{object V685 = symbol_value(VV[79]);
	VMR47(V685)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFENTRY	*/

static object LI49(V691,V692,V693,V694,V695)

object V691;object V692;object V693;object V694;object V695;
{	 VMB48 VMS48 VMV48
goto TTL;
TTL:;
	princ_str("\nstatic void L",VV[27]);
	(void)((*(LnkLI270))((V692)));
	princ_str("();",VV[27]);
	V696= list(2,VV[91],(V691));
	V697= list(3,VV[111],/* INLINE-ARGS */V696,(*(LnkLI293))(VV[231],(V692)));
	{object V698 = (VFUN_NARGS=1,(*(LnkLI292))(/* INLINE-ARGS */V697));
	VMR48(V698)}
	return Cnil;
}
/*	local entry for function T3DEFENTRY	*/

static object LI50(V704,V705,V706,V707,V708)

object V704;object V705;object V706;register object V707;object V708;
{	 VMB49 VMS49 VMV49
goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI304))(VV[232],(V704))));
	princ_str("\nstatic void L",VV[21]);
	(void)((*(LnkLI267))((V705)));
	princ_str("()",VV[21]);
	princ_str("\n{	object *old_base=vs_base;",VV[21]);
	{object V709= (V707);
	if((V709!= VV[233]))goto T2527;
	goto T2526;
goto T2527;
T2527:;
	if((V709!= VV[337]))goto T2528;
	princ_str("\n	char *x;",VV[21]);
	goto T2526;
goto T2528;
T2528:;
	princ_str("\n	",VV[21]);
	base[0]= symbol_name((V707));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V710= vs_base[0];
	(void)((*(LnkLI267))(V710));
	princ_str(" x;",VV[21]);}
goto T2526;
T2526:;
	if((symbol_value(VV[157]))==Cnil){
	goto T2535;}
	princ_str("\n	check_arg(",VV[21]);
	V711 = make_fixnum(length((V706)));
	(void)((*(LnkLI267))(V711));
	princ_str(");",VV[21]);
goto T2535;
T2535:;
	if(((V707))==(VV[233])){
	goto T2541;}
	princ_str("\n	x=",VV[21]);
goto T2541;
T2541:;
	princ_str("\n	",VV[21]);
	(void)((*(LnkLI267))((V708)));
	princ_char(40,VV[21]);
	if(endp((V706))){
	goto T2549;}
	{register object V712;
	register long V713;
	V713= 0;
	V712= (V706);
goto T2554;
T2554:;
	{object V714= car((V712));
	if((V714!= VV[74]))goto T2558;
	princ_str("\n	vs_base[",VV[21]);
	V715 = make_fixnum(V713);
	(void)((*(LnkLI267))(V715));
	princ_char(93,VV[21]);
	goto T2557;
goto T2558;
T2558:;
	princ_str("\n	object_to_",VV[21]);
	base[0]= symbol_name(car((V712)));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V716= vs_base[0];
	(void)((*(LnkLI267))(V716));
	princ_str("(vs_base[",VV[21]);
	V717 = make_fixnum(V713);
	(void)((*(LnkLI267))(V717));
	princ_str("])",VV[21]);}
goto T2557;
T2557:;
	if(!(endp(cdr((V712))))){
	goto T2569;}
	goto T2549;
goto T2569;
T2569:;
	princ_char(44,VV[21]);
	V712= cdr((V712));
	V713= (V713)+1;
	goto T2554;}
goto T2549;
T2549:;
	princ_str(");",VV[21]);
	princ_str("\n	vs_top=(vs_base=old_base)+1;",VV[21]);
	princ_str("\n	vs_base[0]=",VV[21]);
	{object V718= (V707);
	if((V718!= VV[233]))goto T2585;
	princ_str("Cnil",VV[21]);
	goto T2584;
goto T2585;
T2585:;
	if((V718!= VV[74]))goto T2587;
	princ_char(120,VV[21]);
	goto T2584;
goto T2587;
T2587:;
	if((V718!= VV[333]))goto T2589;
	princ_str("code_char(x)",VV[21]);
	goto T2584;
goto T2589;
T2589:;
	if((V718!= VV[334]))goto T2591;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T2592;}
	princ_str("CMP",VV[21]);
goto T2592;
T2592:;
	princ_str("make_fixnum(x)",VV[21]);
	goto T2584;
goto T2591;
T2591:;
	if((V718!= VV[337]))goto T2597;
	princ_str("make_simple_string(x)",VV[21]);
	goto T2584;
goto T2597;
T2597:;
	if((V718!= VV[335]))goto T2599;
	princ_str("make_shortfloat(x)",VV[21]);
	goto T2584;
goto T2599;
T2599:;
	if((V718!= VV[336]))goto T2601;
	princ_str("make_longfloat(x)",VV[21]);
	goto T2584;
goto T2601;
T2601:;}
goto T2584;
T2584:;
	princ_char(59,VV[21]);
	princ_str("\n}",VV[21]);
	{object V719 = Cnil;
	VMR49(V719)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFLA	*/

static object LI51(V721)

object V721;
{	 VMB50 VMS50 VMV50
goto TTL;
TTL:;
	{object V722 = Cnil;
	VMR50(V722)}
	return Cnil;
}
/*	local entry for function PARSE-CVSPECS	*/

static object LI52(V724)

object V724;
{	 VMB51 VMS51 VMV51
goto TTL;
TTL:;
	{register object V725;
	V725= Cnil;
	{register object V726;
	register object V727;
	V726= (V724);
	V727= car((V726));
goto T2610;
T2610:;
	if(!(endp((V726)))){
	goto T2611;}
	{object V728 = reverse((V725));
	VMR51(V728)}
goto T2611;
T2611:;
	if(!(type_of((V727))==t_symbol)){
	goto T2617;}
	base[1]= symbol_name((V727));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V729= vs_base[0];
	V730= list(2,VV[74],V729);
	V725= make_cons(/* INLINE-ARGS */V730,(V725));
	goto T2615;
goto T2617;
T2617:;
	if(!(type_of((V727))==t_string)){
	goto T2623;}
	V731= list(2,VV[74],(V727));
	V725= make_cons(/* INLINE-ARGS */V731,(V725));
	goto T2615;
goto T2623;
T2623:;
	if(!(type_of((V727))==t_cons)){
	goto T2627;}
	{register object x= car((V727)),V732= VV[234];
	while(!endp(V732))
	if(eql(x,V732->c.c_car)){
	goto T2630;
	}else V732=V732->c.c_cdr;
	goto T2627;}
goto T2630;
T2630:;
	{register object V733;
	register object V734;
	V733= cdr((V727));
	V734= car((V733));
goto T2634;
T2634:;
	if(!(endp((V733)))){
	goto T2635;}
	goto T2615;
goto T2635;
T2635:;
	V735= car((V727));
	if(!(type_of((V734))==t_symbol)){
	goto T2643;}
	base[3]= symbol_name((V734));
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V736= vs_base[0];
	goto T2641;
goto T2643;
T2643:;
	if(!(type_of((V734))==t_string)){
	goto T2647;}
	V736= (V734);
	goto T2641;
goto T2647;
T2647:;
	V736= (VFUN_NARGS=2,(*(LnkLI258))(VV[235],(V734)));
goto T2641;
T2641:;
	V737= list(2,/* INLINE-ARGS */V735,V736);
	V725= make_cons(/* INLINE-ARGS */V737,(V725));
	V733= cdr((V733));
	V734= car((V733));
	goto T2634;}
goto T2627;
T2627:;
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[236],(V727))));
goto T2615;
T2615:;
	V726= cdr((V726));
	V727= car((V726));
	goto T2610;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3LOCAL-DCFUN	*/

static object LI53(V743,V744,V745,V746,V747)

object V743;object V744;object V745;register object V746;register object V747;
{	 VMB52 VMS52 VMV52
	bds_check;
goto TTL;
TTL:;
	{object V748;
	register object V749;
	object V750;
	if(((V743))==Cnil){
	goto T2661;}
	V748= small_fixnum(0);
	goto T2659;
goto T2661;
T2661:;
	V748= structure_ref((V746),VV[28],4);
goto T2659;
T2659:;
	V749= Cnil;
	bds_bind(VV[16],(*(LnkLI298))(cadr((V747))));
	bds_bind(VV[117],Cnil);
	V750= caaddr((V747));
	if((structure_ref((V746),VV[28],0))==Cnil){
	goto T2669;}
	V751= structure_ref((V746),VV[28],0);
	goto T2667;
goto T2669;
T2669:;
	V751= Cnil;
goto T2667;
T2667:;
	(void)((VFUN_NARGS=2,(*(LnkLI304))(VV[237],V751)));
	princ_str("\nstatic void ",VV[21]);
	if(((V743))==Cnil){
	goto T2676;}
	V752= VV[238];
	goto T2674;
goto T2676;
T2676:;
	V752= VV[239];
goto T2674;
T2674:;
	(void)((*(LnkLI267))(V752));
	V753= structure_ref((V746),VV[28],3);
	(void)((*(LnkLI267))(/* INLINE-ARGS */V753));
	princ_char(40,VV[21]);
	princ_str("base0",VV[21]);
	if(((V750))==Cnil){
	goto T2685;}
	V754= VV[240];
	goto T2683;
goto T2685;
T2685:;
	V754= VV[241];
goto T2683;
T2683:;
	(void)((*(LnkLI267))(V754));
	V755= structure_ref(cadr((V747)),VV[62],1);
	(void)((*(LnkLI300))(/* INLINE-ARGS */V755,small_fixnum(2)));
	(void)((*(LnkLI305))(caaddr((V747)),Cnil));
	princ_str("register object *",VV[21]);
	(void)((*(LnkLI267))((VV[16]->s.s_dbind)));
	princ_str("base0;",VV[21]);
	bds_bind(VV[242],(V745));
	bds_bind(VV[128],VV[124]);
	bds_bind(VV[14],Cnil);
	bds_bind(VV[129],small_fixnum(0));
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],one_plus((V748)));
	bds_bind(VV[132],(V745));
	bds_bind(VV[133],(V744));
	bds_bind(VV[134],make_cons((VV[128]->s.s_dbind),Cnil));
	bds_bind(VV[135],(VV[128]->s.s_dbind));
	setq(VV[137],number_plus(symbol_value(VV[137]),small_fixnum(1)));
	bds_bind(VV[136],symbol_value(VV[137]));
	bds_bind(VV[138],Cnil);
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],small_fixnum(0));
	V749= (VV[136]->s.s_dbind);
	princ_str("\n{",VV[21]);
	V756= structure_ref(cadr((V747)),VV[62],1);
	V757= structure_ref((V746),VV[28],3);
	(void)((*(LnkLI306))(/* INLINE-ARGS */V756,/* INLINE-ARGS */V757,VV[243]));
	princ_str("\n	VMB",VV[21]);
	(void)((*(LnkLI267))((V749)));
	princ_str(" VMS",VV[21]);
	(void)((*(LnkLI267))((V749)));
	princ_str(" VMV",VV[21]);
	(void)((*(LnkLI267))((V749)));
	if((symbol_value(VV[149]))==Cnil){
	goto T2709;}
	princ_str("\n	ihs_check;",VV[21]);
goto T2709;
T2709:;
	base[19]= caddr(cddr((V747)));
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk307)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),(VV[130]->s.s_dbind))==0)){
	goto T2717;}
	if(((VV[138]->s.s_dbind))!=Cnil){
	goto T2717;}
	if(((VV[140]->s.s_dbind))!=Cnil){
	goto T2717;}
	goto T2715;
goto T2717;
T2717:;
	princ_str("\n	base[0]=base[0];",VV[21]);
goto T2715;
T2715:;
	princ_str("\n}",VV[21]);
	(void)((*(LnkLI308))((V749),Ct));
	V758= structure_ref((V746),VV[28],3);
	{object V759 = (*(LnkLI302))(/* INLINE-ARGS */V758);
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
	VMR52(V759)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3LOCAL-FUN	*/

static object LI54(V765,V766,V767,V768,V769)

object V765;object V766;object V767;object V768;object V769;
{	 VMB53 VMS53 VMV53
	bds_check;
goto TTL;
TTL:;
	{long V770;
	if(((V765))==Cnil){
	goto T2729;}
	V770= 0;
	goto T2727;
goto T2729;
T2729:;
	V770= fix(structure_ref((V768),VV[28],4));
goto T2727;
T2727:;
	bds_bind(VV[16],(*(LnkLI298))(cadr((V769))));
	bds_bind(VV[117],Cnil);
	if(!(((V765))==(VV[244]))){
	goto T2732;}
	{object V771 = (*(LnkLI243))((V765),(V766),(V767),(V768),(V769));
	bds_unwind1;
	bds_unwind1;
	VMR53(V771)}
goto T2732;
T2732:;
	if((structure_ref((V768),VV[28],0))==Cnil){
	goto T2738;}
	V772= structure_ref((V768),VV[28],0);
	goto T2736;
goto T2738;
T2738:;
	V772= Cnil;
goto T2736;
T2736:;
	(void)((VFUN_NARGS=2,(*(LnkLI304))(VV[245],V772)));
	princ_str("\nstatic void ",VV[27]);
	if(((V765))==Cnil){
	goto T2745;}
	V773= VV[246];
	goto T2743;
goto T2745;
T2745:;
	V773= VV[247];
goto T2743;
T2743:;
	(void)((*(LnkLI270))(V773));
	V774= structure_ref((V768),VV[28],3);
	(void)((*(LnkLI270))(/* INLINE-ARGS */V774));
	princ_str("();",VV[27]);
	princ_str("\nstatic void ",VV[21]);
	if(((V765))==Cnil){
	goto T2754;}
	V775= VV[248];
	goto T2752;
goto T2754;
T2754:;
	V775= VV[249];
goto T2752;
T2752:;
	(void)((*(LnkLI267))(V775));
	V776= structure_ref((V768),VV[28],3);
	(void)((*(LnkLI267))(/* INLINE-ARGS */V776));
	princ_char(40,VV[21]);
	{register object V777;
	register long V778;
	V777= make_fixnum(V770);
	V778= 0;
goto T2762;
T2762:;
	V779 = make_fixnum(V778);
	if(!(number_compare(V779,(V777))>=0)){
	goto T2763;}
	princ_str("base",VV[21]);
	V780 = make_fixnum(V778);
	(void)((*(LnkLI267))(V780));
	princ_char(41,VV[21]);
	goto T2758;
goto T2763;
T2763:;
	princ_str("base",VV[21]);
	V781 = make_fixnum(V778);
	(void)((*(LnkLI267))(V781));
	princ_char(44,VV[21]);
	V778= (V778)+1;
	goto T2762;}
goto T2758;
T2758:;
	princ_str("\nregister object ",VV[21]);
	{register object V782;
	register long V783;
	V782= make_fixnum(V770);
	V783= 0;
goto T2783;
T2783:;
	V784 = make_fixnum(V783);
	if(!(number_compare(V784,(V782))>=0)){
	goto T2784;}
	princ_char(42,VV[21]);
	(void)((*(LnkLI267))((VV[16]->s.s_dbind)));
	princ_str("base",VV[21]);
	V785 = make_fixnum(V783);
	(void)((*(LnkLI267))(V785));
	princ_char(59,VV[21]);
	goto T2779;
goto T2784;
T2784:;
	princ_char(42,VV[21]);
	(void)((*(LnkLI267))((VV[16]->s.s_dbind)));
	princ_str("base",VV[21]);
	V786 = make_fixnum(V783);
	(void)((*(LnkLI267))(V786));
	princ_char(44,VV[21]);
	V783= (V783)+1;
	goto T2783;}
goto T2779;
T2779:;
	V787= structure_ref(cadr((V769)),VV[62],1);
	(void)((*(LnkLI300))(/* INLINE-ARGS */V787,small_fixnum(2)));
	bds_bind(VV[128],VV[127]);
	bds_bind(VV[242],(V767));
	bds_bind(VV[14],Cnil);
	bds_bind(VV[129],small_fixnum(0));
	bds_bind(VV[130],small_fixnum(0));
	V788 = make_fixnum(V770);
	bds_bind(VV[131],one_plus(V788));
	bds_bind(VV[132],(V767));
	bds_bind(VV[133],(V766));
	bds_bind(VV[134],make_cons((VV[128]->s.s_dbind),Cnil));
	bds_bind(VV[135],(VV[128]->s.s_dbind));
	setq(VV[137],number_plus(symbol_value(VV[137]),small_fixnum(1)));
	bds_bind(VV[136],symbol_value(VV[137]));
	bds_bind(VV[138],Cnil);
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],small_fixnum(0));
	princ_str("\n{	register object *",VV[21]);
	(void)((*(LnkLI267))((VV[16]->s.s_dbind)));
	princ_str("base=vs_base;",VV[21]);
	princ_str("\n	register object *",VV[21]);
	(void)((*(LnkLI267))((VV[16]->s.s_dbind)));
	princ_str("sup=base+VM",VV[21]);
	(void)((*(LnkLI267))((VV[136]->s.s_dbind)));
	princ_char(59,VV[21]);
	V789= structure_ref(cadr((V769)),VV[62],1);
	V790= structure_ref((V768),VV[28],3);
	(void)((*(LnkLI306))(/* INLINE-ARGS */V789,/* INLINE-ARGS */V790,VV[250]));
	princ_str(" VC",VV[21]);
	(void)((*(LnkLI267))((VV[136]->s.s_dbind)));
	if((symbol_value(VV[157]))==Cnil){
	goto T2824;}
	princ_str("\n	vs_reserve(VM",VV[21]);
	(void)((*(LnkLI267))((VV[136]->s.s_dbind)));
	princ_str(");",VV[21]);
	goto T2822;
goto T2824;
T2824:;
	princ_str("\n	vs_check;",VV[21]);
goto T2822;
T2822:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2830;}
	princ_str("\n	ihs_check;",VV[21]);
goto T2830;
T2830:;
	if(((V765))==Cnil){
	goto T2836;}
	(void)((VFUN_NARGS=2,(*(LnkLI323))(caddr((V769)),caddr(cddr((V769))))));
	goto T2834;
goto T2836;
T2836:;
	(void)((VFUN_NARGS=3,(*(LnkLI323))(caddr((V769)),caddr(cddr((V769))),(V768))));
goto T2834;
T2834:;
	princ_str("\n}",VV[21]);
	V791= make_cons((VV[136]->s.s_dbind),(VV[130]->s.s_dbind));
	setq(VV[29],make_cons(/* INLINE-ARGS */V791,symbol_value(VV[29])));
	princ_str("\n#define VC",VV[27]);
	(void)((*(LnkLI270))((VV[136]->s.s_dbind)));
	V792= (*(LnkLI324))();
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
	V793= structure_ref((V768),VV[28],3);
	{object V794 = (*(LnkLI302))(/* INLINE-ARGS */V793);
	bds_unwind1;
	bds_unwind1;
	VMR53(V794)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-CVARS	*/

static object LI55()

{	 VMB54 VMS54 VMV54
goto TTL;
TTL:;
	{register object V795;
	V795= Cnil;
	{register object V796;
	register object V797;
	V796= symbol_value(VV[14]);
	V797= car((V796));
goto T2850;
T2850:;
	if(!(endp((V796)))){
	goto T2851;}
	goto T2846;
goto T2851;
T2851:;
	{register object V798;
	if(!(type_of((V797))==t_cons)){
	goto T2858;}
	{register object V799;
	V799= car((V797));
	V797= cdr((V797));
	V798= (V799);
	goto T2856;}
goto T2858;
T2858:;
	V798= Ct;
goto T2856;
T2856:;
	if(!(((V795))==((V798)))){
	goto T2865;}
	base[1]= symbol_value(VV[27]);
	base[2]= VV[251];
	base[3]= (V797);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T2863;
goto T2865;
T2865:;
	if(!(((V795))==Cnil)){
	goto T2871;}
	goto T2870;
goto T2871;
T2871:;
	base[1]= symbol_value(VV[27]);
	base[2]= VV[252];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
goto T2870;
T2870:;
	V795= (V798);
	base[1]= symbol_value(VV[27]);
	base[2]= VV[253];
	base[3]= (*(LnkLI273))((V795));
	base[4]= (V797);
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
goto T2863;
T2863:;
	if(!(((V795))==(VV[254]))){
	goto T2855;}
	base[1]= symbol_value(VV[27]);
	base[2]= VV[255];
	base[3]= (V797);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;}
goto T2855;
T2855:;
	V796= cdr((V796));
	V797= car((V796));
	goto T2850;}
goto T2846;
T2846:;
	if(symbol_value(VV[14])==Cnil){
	goto T2891;}
	base[0]= symbol_value(VV[27]);
	base[1]= VV[256];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
goto T2891;
T2891:;
	if(eql(symbol_value(VV[141]),small_fixnum(0))){
	goto T2895;}
	base[0]= symbol_value(VV[27]);
	base[1]= VV[257];
	base[2]= symbol_value(VV[141]);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V800 = vs_base[0];
	VMR54(V800)}
goto T2895;
T2895:;
	{object V801 = Cnil;
	VMR54(V801)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function DO-DECL	*/

static void L25(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_reserve(VM55);
	{object V802;
	check_arg(1);
	V802=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	V803= structure_ref((V802),VV[69],4);
	if(eql(/* INLINE-ARGS */V803,VV[72])){
	goto T2901;}
	goto T2900;
goto T2901;
T2901:;
	(VV[153]->s.s_dbind)= Ct;
goto T2900;
T2900:;
	{object V804;
	V804= (*(LnkLI338))((V802));
	if(((V804))==Cnil){
	goto T2906;}
	{object V805;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V805= symbol_value(VV[88]);
	(void)(structure_set((V802),VV[69],1,(V804)));
	(void)(structure_set((V802),VV[69],4,(V805)));
	princ_str("\n	",VV[21]);
	if((base0[1])!=Cnil){
	goto T2913;}
	princ_char(123,VV[21]);
	base0[1]= Ct;
goto T2913;
T2913:;
	base[1]= (V802);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk339)();
	return;}
goto T2906;
T2906:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
static void LnkT339(){ call_or_link(VV[339],(void **)&Lnk339);} /* WT-VAR-DECL */
static object  LnkTLI338(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[338],(void **)&LnkLI338,1,ap);} /* C2VAR-KIND */
static object  LnkTLI243(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[243],(void **)&LnkLI243,5,ap);} /* T3LOCAL-DCFUN */
static object  LnkTLI332(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[332],(void **)&LnkLI332,1,ap);} /* PARSE-CVSPECS */
static object  LnkTLI331(){return call_proc0(VV[331],(void **)&LnkLI331);} /* WFS-ERROR */
static void LnkT330(){ call_or_link(VV[330],(void **)&Lnk330);} /* C2DM */
static object  LnkTLI329(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[329],(void **)&LnkLI329,3,ap);} /* C1DM */
static object  LnkTLI328(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[328],(void **)&LnkLI328,ap);} /* REMOVE-DUPLICATES */
static long  LnkTLI327(va_alist)va_dcl{va_list ap;va_start(ap);return(long )call_proc(VV[327],(void **)&LnkLI327,258,ap);} /* ANALYZE-REGS1 */
static object  LnkTLI326(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[326],(void **)&LnkLI326,ap);} /* WARN */
static object  LnkTLI325(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[325],(void **)&LnkLI325,1,ap);} /* REGISTER */
static object  LnkTLI324(){return call_proc0(VV[324],(void **)&LnkLI324);} /* WT-CVARS */
static object  LnkTLI323(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[323],(void **)&LnkLI323,ap);} /* C2LAMBDA-EXPR */
static object  LnkTLI322(){return call_proc0(VV[322],(void **)&LnkLI322);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI321(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[321],(void **)&LnkLI321,1,ap);} /* WT-VS */
static object  LnkTLI320(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[320],(void **)&LnkLI320,1,ap);} /* C2BIND */
static object  LnkTLI319(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[319],(void **)&LnkLI319,1,ap);} /* ADD-SYMBOL */
static object  LnkTLI318(){return call_proc0(VV[318],(void **)&LnkLI318);} /* BABOON */
static object  LnkTLI317(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[317],(void **)&LnkLI317,1,ap);} /* ADD-OBJECT */
static void LnkT316(){ call_or_link(VV[316],(void **)&Lnk316);} /* INC-INLINE-BLOCKS */
static object  LnkTLI315(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[315],(void **)&LnkLI315,ap);} /* CS-PUSH */
static object  LnkTLI314(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[314],(void **)&LnkLI314,2,ap);} /* C2BIND-INIT */
static object  LnkTLI313(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[313],(void **)&LnkLI313,2,ap);} /* C2BIND-LOC */
static object  LnkTLI312(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[312],(void **)&LnkLI312,1,ap);} /* SET-UP-VAR-CVS */
static object  LnkTLI311(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[311],(void **)&LnkLI311,1,ap);} /* WT-LIST */
static object  LnkTLI310(){return call_proc0(VV[310],(void **)&LnkLI310);} /* CVS-PUSH */
static object  LnkTLI309(){return call_proc0(VV[309],(void **)&LnkLI309);} /* VS-PUSH */
static object  LnkTLI308(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[308],(void **)&LnkLI308,2,ap);} /* WT-V*-MACROS */
static void LnkT307(){ call_or_link(VV[307],(void **)&Lnk307);} /* C2EXPR */
static object  LnkTLI306(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[306],(void **)&LnkLI306,3,ap);} /* ASSIGN-DOWN-VARS */
static object  LnkTLI305(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[305],(void **)&LnkLI305,2,ap);} /* WT-REQUIREDS */
static object  LnkTLI304(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[304],(void **)&LnkLI304,ap);} /* WT-COMMENT */
static object  LnkTLI303(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[303],(void **)&LnkLI303,2,ap);} /* ADD-DEBUG-INFO */
static object  LnkTLI302(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[302],(void **)&LnkLI302,1,ap);} /* WT-DOWNWARD-CLOSURE-MACRO */
static void LnkT301(){ call_or_link(VV[301],(void **)&Lnk301);} /* T3DEFUN-AUX */
static long  LnkTLI300(va_alist)va_dcl{va_list ap;va_start(ap);return(long )call_proc(VV[300],(void **)&LnkLI300,258,ap);} /* ANALYZE-REGS */
static void LnkT299(){ call_or_link(VV[299],(void **)&Lnk299);} /* FIXNUMP */
static object  LnkTLI298(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[298],(void **)&LnkLI298,1,ap);} /* VOLATILE */
static object  LnkTLI297(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[297],(void **)&LnkLI297,1,ap);} /* MAXARGS */
static object  LnkTLI296(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[296],(void **)&LnkLI296,1,ap);} /* VARARG-P */
static object  LnkTLI295(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[295],(void **)&LnkLI295,3,ap);} /* WT-IF-PROCLAIMED */
static long  LnkTLI294(va_alist)va_dcl{va_list ap;va_start(ap);return(long )call_proc(VV[294],(void **)&LnkLI294,258,ap);} /* PROCLAIMED-ARGD */
static object  LnkTLI293(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[293],(void **)&LnkLI293,2,ap);} /* ADD-ADDRESS */
static object  LnkTLI292(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[292],(void **)&LnkLI292,ap);} /* ADD-INIT */
static object  LnkTLI291(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[291],(void **)&LnkLI291,ap);} /* FAST-LINK-PROCLAIMED-TYPE-P */
static object  LnkTLI290(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[290],(void **)&LnkLI290,2,ap);} /* SHIFT<< */
static long  LnkTLI289(va_alist)va_dcl{va_list ap;va_start(ap);return(long )call_proc(VV[289],(void **)&LnkLI289,257,ap);} /* F-TYPE */
static void LnkT288(){ call_or_link(VV[288],(void **)&Lnk288);} /* SUBTYPEP */
static void LnkT287(){ call_or_link(VV[287],(void **)&Lnk287);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI286(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[286],(void **)&LnkLI286,ap);} /* MAKE-ARRAY */
static object  LnkTLI285(){return call_proc0(VV[285],(void **)&LnkLI285);} /* ADD-LOAD-TIME-SHARP-COMMA */
static object  LnkTLI284(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[284],(void **)&LnkLI284,2,ap);} /* MAKE-INLINE-STRING */
static object  LnkTLI283(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[283],(void **)&LnkLI283,2,ap);} /* TYPE-AND */
static object  LnkTLI282(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[282],(void **)&LnkLI282,2,ap);} /* CMPFIX-ARGS */
static object  LnkTLI281(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[281],(void **)&LnkLI281,1,ap);} /* PROCLAIM */
static object  LnkTLI280(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[280],(void **)&LnkLI280,1,ap);} /* CHECK-DOWNWARD */
static object  LnkTLI279(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[279],(void **)&LnkLI279,ap);} /* C1LAMBDA-EXPR */
static object  LnkTLI278(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[278],(void **)&LnkLI278,1,ap);} /* T1PROGN */
static object  LnkTLI275(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[275],(void **)&LnkLI275,3,ap);} /* TOO-FEW-ARGS */
static void LnkT274(){ call_or_link(VV[274],(void **)&Lnk274);} /* CMP-EVAL */
static object  LnkTLI273(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[273],(void **)&LnkLI273,1,ap);} /* REP-TYPE */
static void LnkT272(){ call_or_link(VV[272],(void **)&Lnk272);} /* WT-DATA-FILE */
static object  LnkTLI271(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[271],(void **)&LnkLI271,1,ap);} /* PUSH-DATA-INCF */
static object  LnkTLI270(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[270],(void **)&LnkLI270,1,ap);} /* WT-H1 */
static object  LnkTLI269(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[269],(void **)&LnkLI269,1,ap);} /* WT-FUNCTION-LINK */
static void LnkT268(){ call_or_link(VV[268],(void **)&Lnk268);} /* WT-GLOBAL-ENTRY */
static void LnkT250(){ call_or_link(VV[250],(void **)&Lnk250);} /* T3LOCAL-FUN */
static object  LnkTLI267(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[267],(void **)&LnkLI267,1,ap);} /* WT1 */
static object  LnkTLI266(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[266],(void **)&LnkLI266,3,ap);} /* CMP-EXPAND-MACRO */
static object  LnkTLI265(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[265],(void **)&LnkLI265,1,ap);} /* T1ORDINARY */
static void LnkT264(){ call_or_link(VV[264],(void **)&Lnk264);} /* T1EXPR */
static object  LnkTLI263(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[263],(void **)&LnkLI263,1,ap);} /* CMP-MACROEXPAND-1 */
static object  LnkTLI262(){return call_proc0(VV[262],(void **)&LnkLI262);} /* PRINT-CURRENT-FORM */
static object  LnkTLI261(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[261],(void **)&LnkLI261,1,ap);} /* WT-DATA-PACKAGE-OPERATION */
static object  LnkTLI260(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[260],(void **)&LnkLI260,2,ap);} /* MAYBE-EVAL */
static object  LnkTLI259(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[259],(void **)&LnkLI259,ap);} /* CMPWARN */
static object  LnkTLI258(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[258],(void **)&LnkLI258,ap);} /* CMPERR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

