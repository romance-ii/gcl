
#include "cmpinclude.h"
#include "cmptop.h"
init_cmptop(){do_init(VV);}
/*	function definition for T1EXPR	*/

static L1()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM1; VC1
	vs_reserve(VM1);
	bds_check;
	{VOL object V1;
	check_arg(1);
	V1=(base[0]);
	vs_top=sup;
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
	V5= (VFUN_NARGS=1,(*(LnkLI253))(VV[4]));
	frs_pop();
	base[3]= V5;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
T11:;
	if((get((V2),VV[5],Cnil))==Cnil){
	goto T14;}
	if((symbol_value(VV[6]))==Cnil){
	goto T16;}
	(void)((VFUN_NARGS=2,(*(LnkLI254))(VV[7],(V1))));
T16:;
	(void)((*(LnkLI255))(Ct,(V1)));
	V6= (*(LnkLI256))((V1));
	frs_pop();
	base[3]= V6;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
T14:;
	V4= get((V2),VV[8],Cnil);
	if(((V4))==Cnil){
	goto T21;}
	if((symbol_value(VV[9]))==Cnil){
	goto T24;}
	(void)((*(LnkLI257))());
T24:;
	base[3]= (V3);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event((V4));
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;
T21:;
	if((get((V2),VV[10],Cnil))==Cnil){
	goto T29;}
	if((symbol_value(VV[9]))==Cnil){
	goto T31;}
	(void)((*(LnkLI257))());
T31:;
	base[3]= (*(LnkLI258))((V1));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk259)();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;
T29:;
	if((get((V2),VV[11],Cnil))==Cnil){
	goto T36;}
	V7= (*(LnkLI260))((V1));
	frs_pop();
	base[3]= V7;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
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
	V8= (*(LnkLI261))((V4),(V2),V9);
	base[3]= (V8);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk259)();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;}
T39:;
	V10= (*(LnkLI260))((V1));
	frs_pop();
	base[3]= V10;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
T8:;
	if(!(type_of((V2))==t_cons)){
	goto T48;}
	V11= (*(LnkLI260))((V1));
	frs_pop();
	base[3]= V11;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
T48:;
	V12= (VFUN_NARGS=2,(*(LnkLI253))(VV[12],(V2)));
	frs_pop();
	base[3]= V12;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;}
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
	princ_str("\ninit_",VV[21]);
	(void)((*(LnkLI262))((V14)));
	princ_str("(){",VV[21]);
	princ_str("do_init(VV);",VV[21]);
	princ_char(125,VV[21]);
	{object V16;
	V16= symbol_value(VV[20]);
	bds_bind(VV[0],car((V16)));
T63:;
	if(!(endp((V16)))){
	goto T64;}
	bds_unwind1;
	goto T59;
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
T70:;
	V16= cdr((V16));
	(VV[0]->s.s_dbind)= car((V16));
	goto T63;}
T59:;
	{object V18;
	V18= symbol_value(VV[20]);
	bds_bind(VV[0],car((V18)));
T85:;
	if(!(endp((V18)))){
	goto T86;}
	bds_unwind1;
	goto T81;
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
T92:;
	V18= cdr((V18));
	(VV[0]->s.s_dbind)= car((V18));
	goto T85;}
T81:;
	{object V20;
	V20= Cnil;
T105:;
	if(!(endp(symbol_value(VV[24])))){
	goto T107;}
	goto T103;
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
	(void) (*Lnk245)();
	vs_top=sup;
	goto T105;}
T103:;
	{object V23;
	object V24;
	V23= symbol_value(VV[25]);
	V24= car((V23));
T122:;
	if(!(endp((V23)))){
	goto T123;}
	goto T118;
T123:;
	{object V25;
	V25= (V24);
	 vs_top=base+8;
	 while(!endp(V25))
	 {vs_push(car(V25));V25=cdr(V25);}
	vs_base=base+8;}
	(void) (*Lnk263)();
	vs_top=sup;
	V23= cdr((V23));
	V24= car((V23));
	goto T122;}
T118:;
	{object V26;
	object V27;
	V26= (VV[13]->s.s_dbind);
	V27= car((V26));
T138:;
	if(!(endp((V26)))){
	goto T139;}
	goto T134;
T139:;
	(void)((*(LnkLI264))((V27)));
	V26= cdr((V26));
	V27= car((V26));
	goto T138;}
T134:;
	{object V28;
	object V29;
	V28= symbol_value(VV[26]);
	V29= car((V28));
T153:;
	if(!(endp((V28)))){
	goto T154;}
	goto T149;
T154:;
	princ_str("\nstatic LC",VV[27]);
	V30= structure_ref((V29),VV[28],3);
	(void)((*(LnkLI265))(/* INLINE-ARGS */V30));
	princ_str("();",VV[27]);
	V28= cdr((V28));
	V29= car((V28));
	goto T153;}
T149:;
	{object V31;
	object V32;
	V31= symbol_value(VV[29]);
	V32= car((V31));
T171:;
	if(!(endp((V31)))){
	goto T172;}
	goto T167;
T172:;
	princ_str("\n#define VM",VV[27]);
	(void)((*(LnkLI265))(car((V32))));
	princ_char(32,VV[27]);
	(void)((*(LnkLI265))(cdr((V32))));
	V31= cdr((V31));
	V32= car((V31));
	goto T171;}
T167:;
	(void)((*(LnkLI266))(Cnil));
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
T194:;
	if(!(number_compare((V34),(V33))>=0)){
	goto T195;}
	goto T187;
T195:;
	(void)((*(LnkLI266))(Cnil));
	V34= one_plus((V34));
	goto T194;}
T187:;
	princ_str("\nstatic char * VVi[",VV[27]);
	V35= number_plus(small_fixnum(1),symbol_value(VV[30]));
	(void)((*(LnkLI265))(/* INLINE-ARGS */V35));
	princ_str("]={",VV[27]);
	princ_str("\n#define Cdata VV[",VV[27]);
	(void)((*(LnkLI265))(symbol_value(VV[30])));
	princ_char(93,VV[27]);
	if((VV[17]->s.s_dbind)!=Cnil){
	goto T211;}
	princ_char(10,VV[27]);
	(void)((*(LnkLI265))(small_fixnum(0)));
T211:;
	{register object V36;
	V36= nreverse((VV[17]->s.s_dbind));
T217:;
	if(((V36))!=Cnil){
	goto T218;}
	princ_str("\n};",VV[27]);
	goto T214;
T218:;
	princ_str("\n(char *)(",VV[27]);
	(void)((*(LnkLI265))(caar((V36))));
	(void)((*(LnkLI265))(cadar((V36))));
	if((cdr((V36)))==Cnil){
	goto T230;}
	V37= VV[31];
	goto T228;
T230:;
	V37= VV[32];
T228:;
	(void)((*(LnkLI265))(V37));
	V36= cdr((V36));
	goto T217;}
T214:;
	princ_str("\n#define VV ((object *)VVi)",VV[27]);
	vs_base=vs_top;
	(void) (*Lnk267)();
	vs_top=sup;
	{object V38;
	object V39;
	V38= (VV[13]->s.s_dbind);
	V39= car((V38));
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
T242:;
	{register object V41;
	register object V42;
	V41= cadr((V39));
	V42= caddr((V39));
	if(!(((V42))==(VV[33]))){
	goto T251;}
	princ_str("\nstatic object *Lclptr",VV[27]);
	(void)((*(LnkLI265))((V41)));
	princ_char(59,VV[27]);
	V42= VV[34];
	goto T249;
T251:;
	if(((V42))==Cnil){
	goto T260;}
	V42= (*(LnkLI268))((V42));
	goto T258;
T260:;
	V42= VV[35];
T258:;
T249:;
	princ_str("\nstatic ",VV[27]);
	(void)((*(LnkLI265))((V42)));
	princ_str(" LnkT",VV[27]);
	(void)((*(LnkLI265))((V41)));
	princ_str("() ;",VV[27]);
	princ_str("\nstatic ",VV[27]);
	(void)((*(LnkLI265))((V42)));
	princ_str(" (*Lnk",VV[27]);
	(void)((*(LnkLI265))((V41)));
	princ_str(")() = LnkT",VV[27]);
	(void)((*(LnkLI265))((V41)));
	princ_char(59,VV[27]);}
	V38= cdr((V38));
	V39= car((V38));
	goto T241;}}
}
/*	local entry for function MAYBE-EVAL	*/

static object LI3(V45,V46)

object V45;register object V46;
{	 VMB3 VMS3 VMV3
TTL:;
	if((V45)!=Cnil){
	goto T280;}
	if(type_of(car((V46)))==t_symbol){
	goto T281;}
	goto T280;
T281:;
	V45= get(car((V46)),VV[36],Cnil);
T280:;
	if(((V45))==Cnil){
	goto T286;}
	if((VV[37])==(symbol_value(VV[38]))){
	goto T284;}
T286:;
	if(!(type_of(symbol_value(VV[38]))==t_cons)){
	goto T285;}
	{register object x= VV[39],V47= symbol_value(VV[38]);
	while(!endp(V47))
	if(eql(x,V47->c.c_car)){
	goto T292;
	}else V47=V47->c.c_cdr;
	goto T285;}
T292:;
T284:;
	if(((V46))==Cnil){
	goto T293;}
	base[0]= (V46);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk269)();
	vs_top=sup;
T293:;
	{object V48 = Ct;
	VMR3(V48)}
T285:;
	{object V49 = Cnil;
	VMR3(V49)}
}
/*	function definition for T1EVAL-WHEN	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	bds_check;
	{register object V50;
	check_arg(1);
	V50=(base[0]);
	vs_top=sup;
TTL:;
	{register object V51;
	register object V52;
	V51= Cnil;
	V52= Cnil;
	if(!(endp((V50)))){
	goto T299;}
	(void)((*(LnkLI270))(VV[40],small_fixnum(1),small_fixnum(0)));
T299:;
	{register object V53;
	register object V54;
	V53= car((V50));
	V54= car((V53));
T306:;
	if(!(endp((V53)))){
	goto T307;}
	goto T302;
T307:;
	{object V55= (V54);
	if((V55!= VV[271]))goto T312;
	V51= Ct;
	goto T311;
T312:;
	if((V55!= VV[39]))goto T314;
	V52= Ct;
	goto T311;
T314:;
	if((V55!= VV[272]))goto T316;
	goto T311;
T316:;
	(void)((VFUN_NARGS=2,(*(LnkLI253))(VV[41],(V54))));}
T311:;
	V53= cdr((V53));
	V54= car((V53));
	goto T306;}
T302:;
	base[1]= car((V50));
	bds_bind(VV[38],base[1]);
	if(((V51))==Cnil){
	goto T324;}
	base[2]= (*(LnkLI273))(cdr((V50)));
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
T324:;
	if(((V52))==Cnil){
	goto T327;}
	base[2]= make_cons(VV[42],cdr((V50)));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk269)();
	bds_unwind1;
	return;
T327:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;}
	}
}
/*	local entry for function T1PROGN	*/

static object LI5(V57)

object V57;
{	 VMB5 VMS5 VMV5
	bds_check;
TTL:;
	if(!(equal(car((V57)),VV[43]))){
	goto T331;}
	bds_bind(VV[44],Ct);
	{object V58 = (*(LnkLI273))(cdr((V57)));
	bds_unwind1;
	VMR5(V58)}
T331:;
	{register object V59;
	register object V60;
	V59= (V57);
	V60= car((V59));
T336:;
	if(!(endp((V59)))){
	goto T337;}
	{object V61 = Cnil;
	VMR5(V61)}
T337:;
	base[1]= (V60);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk259)();
	vs_top=sup;
	V59= cdr((V59));
	V60= car((V59));
	goto T336;}
}
/*	local entry for function CMPFIX-ARGS	*/

static object LI6(V64,V65)

object V64;object V65;
{	 VMB6 VMS6 VMV6
TTL:;
	{register object V66;
	register object V67;
	V66= Cnil;
	base[1]= cadr((V64));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V67= vs_base[0];
	{register object V68;
	register object V69;
	V68= (V65);
	V69= car((V68));
T355:;
	if(!(endp((V68)))){
	goto T356;}
	goto T351;
T356:;
	{register object x= car((V69)),V70= (V67);
	while(!endp(V70))
	if(eql(x,V70->c.c_car)){
	V66= V70;
	goto T361;
	}else V70=V70->c.c_cdr;
	V66= Cnil;}
T361:;
	if((V66)==Cnil){
	goto T362;}
	{register object V71;
	register object V72;
	V71= (V66);
	V72= cadr((V69));
	if(type_of((V71))!=t_cons)FEwrong_type_argument(Scons,(V71));
	((V71))->c.c_car = (V72);}
T362:;
	V68= cdr((V68));
	V69= car((V68));
	goto T355;}
T351:;
	{register object x= VV[45],V73= (V67);
	while(!endp(V73))
	if(eql(x,V73->c.c_car)){
	V66= V73;
	goto T375;
	}else V73=V73->c.c_cdr;
	V66= Cnil;}
T375:;
	if(((V66))==Cnil){
	goto T373;}
	{object V75;
	V75= append((V65),cdr((V66)));
	if(type_of(V66)!=t_cons)FEwrong_type_argument(Scons,V66);
	(V66)->c.c_cdr = (V75);
	goto T371;}
T373:;
	V76= make_cons(VV[45],(V65));
	V67= append((V67),/* INLINE-ARGS */V76);
T371:;
	{object V77 = listA(3,car((V64)),(V67),cddr((V64)));
	VMR6(V77)}}
}
/*	local entry for function T1DEFUN	*/

static object LI7(V79)

object V79;
{	 VMB7 VMS7 VMV7
	bds_check;
TTL:;
	{object V80;
	V80= symbol_value(VV[46]);
	bds_bind(VV[48],Cnil);
	if(endp((V79))){
	goto T381;}
	if(!(endp(cdr((V79))))){
	goto T380;}
T381:;
	V82 = make_fixnum(length((V79)));
	(void)((*(LnkLI270))(VV[47],small_fixnum(2),V82));
T380:;
	if(type_of(car((V79)))==t_symbol){
	goto T385;}
	(void)((VFUN_NARGS=2,(*(LnkLI253))(VV[49],car((V79)))));
T385:;
	V83= make_cons(VV[47],(V79));
	(void)((*(LnkLI255))(Cnil,/* INLINE-ARGS */V83));
T390:;
	setq(VV[6],Ct);
	setq(VV[50],Cnil);
	{register object V84;
	object V85;
	object V86;
	register object V87;{object V88;
	V88= get(car((V79)),VV[56],Cnil);
	if(V88==Cnil)goto T397;
	V85= V88;
	goto T396;
T397:;}
	setq(VV[57],number_plus(symbol_value(VV[57]),small_fixnum(1)));
	V85= symbol_value(VV[57]);
T396:;
	V87= car((V79));
	bds_bind(VV[51],Cnil);
	bds_bind(VV[52],Cnil);
	bds_bind(VV[53],Cnil);
	bds_bind(VV[54],Cnil);
	V84= Cnil;
	bds_bind(VV[55],Cnil);
	V86= Cnil;
	V84= (VFUN_NARGS=2,(*(LnkLI274))(cdr((V79)),(V87)));
	if(!(eql((V80),symbol_value(VV[46])))){
	goto T404;}
	goto T403;
T404:;
	(void)(structure_set(cadr((V84)),VV[58],4,Ct));
T403:;
	V89= structure_ref(cadr((V84)),VV[58],1);
	(void)((*(LnkLI275))(/* INLINE-ARGS */V89));
	if((get((V87),VV[59],Cnil))==Cnil){
	goto T407;}
	{object V90;
	V90= make_fixnum(length(car(caddr((V84)))));
	(void)(sputprop((V87),VV[59],(V90)));
	base[6]= (V90);
	base[7]= VV[61];
	base[8]= Ct;
	vs_top=(vs_base=base+6)+3;
	Lmake_list();
	vs_top=sup;
	V91= vs_base[0];
	V92= list(4,VV[60],(V87),V91,Ct);
	(void)((*(LnkLI276))(/* INLINE-ARGS */V92));}
T407:;
	if((get((V87),VV[62],Cnil))==Cnil){
	goto T418;}
	{object V93;
	register object V94;
	V93= caddr((V84));
	V94= Cnil;
	if((cadr((V93)))==Cnil){
	goto T423;}
	goto T418;
T423:;
	if((caddr((V93)))==Cnil){
	goto T425;}
	goto T418;
T425:;
	if((cadddr((V93)))==Cnil){
	goto T427;}
	goto T418;
T427:;
	if((length(car((V93))))<(64)){
	goto T429;}
	goto T418;
T429:;
	{register object V95;
	register object V96;
	object V97;
	V95= car((V93));
	V96= get((V87),VV[63],Cnil);
	V97= Cnil;
T436:;
	if(!(endp((V95)))){
	goto T437;}
	if(endp((V96))){
	goto T440;}
	goto T432;
T440:;
	if(((V94))==Cnil){
	goto T443;}
	V79= (*(LnkLI277))((V79),(V94));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T390;
T443:;
	if(((V97))==Cnil){
	goto T431;}
	goto T432;
T437:;
	{register object V98;
	V98= car((V95));
	if(!(equal(car((V96)),VV[64]))){
	goto T450;}
	goto T432;
T450:;
	V99= structure_ref((V98),VV[65],1);
	if((/* INLINE-ARGS */V99)==(VV[66])){
	goto T456;}
	V100= structure_ref((V98),VV[65],1);
	if(!((/* INLINE-ARGS */V100)==(VV[67]))){
	goto T455;}
	if(!((car((V96)))==(Ct))){
	goto T455;}
T456:;
	if((structure_ref((V98),VV[65],3))!=Cnil){
	goto T455;}
	V101= structure_ref((V98),VV[65],4);
	if(!((/* INLINE-ARGS */V101)==(VV[68]))){
	goto T454;}
T455:;
	V102= structure_ref((V98),VV[65],0);
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V103= vs_base[0];
	V104= list(2,/* INLINE-ARGS */V102,V103);
	V94= make_cons(/* INLINE-ARGS */V104,(V94));
T454:;
	V105= car((V96));
	V106= structure_ref((V98),VV[65],5);
	if(((*(LnkLI278))(/* INLINE-ARGS */V105,/* INLINE-ARGS */V106))==Cnil){
	goto T453;}
	{register object x= car((V96)),V107= VV[69];
	while(!endp(V107))
	if(eql(x,V107->c.c_car)){
	goto T448;
	}else V107=V107->c.c_cdr;}
	V108= structure_ref((V98),VV[65],4);
	if((/* INLINE-ARGS */V108)==(VV[70])){
	goto T448;}
	if((symbol_value(VV[71]))!=Cnil){
	goto T448;}
	V110= structure_ref(cadr((V84)),VV[58],0);
	{register object x= (V98),V109= /* INLINE-ARGS */V110;
	while(!endp(V109))
	if(eql(x,V109->c.c_car)){
	goto T477;
	}else V109=V109->c.c_cdr;
	goto T448;}
T477:;
T453:;
	if(((V94))!=Cnil){
	goto T478;}
	V111= structure_ref((V98),VV[65],0);
	(void)((VFUN_NARGS=3,(*(LnkLI254))(VV[72],(V87),/* INLINE-ARGS */V111)));
T478:;
	V97= Ct;}
T448:;
	V95= cdr((V95));
	V96= cdr((V96));
	goto T436;}
T432:;
	goto T418;
T431:;
	if(!(type_of((V85))==t_fixnum||
type_of((V85))==t_bignum||
type_of((V85))==t_ratio||
type_of((V85))==t_shortfloat||
type_of((V85))==t_longfloat||
type_of((V85))==t_complex)){
	goto T418;}}
	V112= get((V87),VV[63],Cnil);
	V113= get((V87),VV[74],Cnil);
	V114= get((V87),VV[63],Cnil);
	V115= list(5,(V87),V112,V113,small_fixnum(3),(*(LnkLI279))((V85),V114));
	setq(VV[73],make_cons(/* INLINE-ARGS */V115,symbol_value(VV[73])));
	goto T416;
T418:;
	{object V116;
	V117= get((V87),VV[74],Cnil);
	V116= ((V117)==(Ct)?Ct:Cnil);
	if(((V116))==Cnil){
	goto T416;}}
T416:;
	if((cadddr((V84)))==Cnil){
	goto T494;}
	V86= cadddr((V84));
T494:;
	(void)((*(LnkLI280))());
	V118= list(6,VV[47],(V87),(V85),(V84),(V86),(VV[55]->s.s_dbind));
	setq(VV[20],make_cons(/* INLINE-ARGS */V118,symbol_value(VV[20])));
	V119= make_cons((V87),(V85));
	setq(VV[75],make_cons(/* INLINE-ARGS */V119,symbol_value(VV[75])));
	V120= symbol_value(VV[75]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}
	{object V121 = Cnil;
	bds_unwind1;
	VMR7(V121)}}
}
/*	local entry for function MAKE-INLINE-STRING	*/

static object LI8(V124,V125)

object V124;object V125;
{	 VMB8 VMS8 VMV8
TTL:;
	if(((V125))!=Cnil){
	goto T503;}
	base[0]= Cnil;
	base[1]= VV[76];
	base[2]= (V124);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V126 = vs_base[0];
	VMR8(V126)}
T503:;
	{register object V127;
	V127= (VFUN_NARGS=7,(*(LnkLI281))(small_fixnum(100),VV[77],VV[78],VV[79],small_fixnum(0),VV[80],Ct));
	base[0]= (V127);
	base[1]= VV[81];
	base[2]= (V124);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{register object V128;
	register int V129;
	V129= 0;
	V128= (V125);
T516:;
	if(!(endp(cdr((V128))))){
	goto T517;}
	base[0]= (V127);
	base[1]= VV[82];
	base[2]= make_fixnum(V129);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T513;
T517:;
	base[0]= (V127);
	base[1]= VV[83];
	base[2]= make_fixnum(V129);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V128= cdr((V128));
	V129= (V129)+1;
	goto T516;}
T513:;
	{object V130 = (V127);
	VMR8(V130)}}
}
/*	local entry for function CS-PUSH	*/

static object LI9(va_alist)
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V131;
	narg = narg - 0;
	if (narg <= 0) goto T532;
	else {
	va_start(ap);
	V131= va_arg(ap,object);}
	--narg; goto T533;
T532:;
	V131= Cnil;
T533:;
	{object V132;
	setq(VV[84],number_plus(symbol_value(VV[84]),small_fixnum(1)));
	V132= symbol_value(VV[84]);
	if(((V131))==Cnil){
	goto T541;}
	V133= make_cons((V131),(V132));
	goto T539;
T541:;
	V133= (V132);
T539:;
	setq(VV[14],make_cons(V133,symbol_value(VV[14])));
	{object V134 = (V132);
	VMR9(V134)}}}
	}
/*	local entry for function F-TYPE	*/

static int LI10(V136)

register object V136;
{	 VMB10 VMS10 VMV10
TTL:;
	base[0]= (V136);
	base[1]= VV[65];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk282)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T543;}
	V136= structure_ref((V136),VV[65],5);
T543:;
	if(((V136))==Cnil){
	goto T550;}
	base[0]= (V136);
	base[1]= VV[85];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk283)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T550;}
	{int V137 = 1;
	VMR10(V137)}
T550:;
	{int V138 = 0;
	VMR10(V138)}
}
/*	local entry for function PROCLAIMED-ARGD	*/

static int LI11(V141,V142)

register object V141;object V142;
{	 VMB11 VMS11 VMV11
TTL:;
	{register int V143;
	register int V144;
	register object V145;
	register object V146;
	V143= length((V141));
	V144= 8;
	V145= make_fixnum((*(LnkLI284))((V142)));
	V146= Ct;
T560:;
	if(eql(small_fixnum(0),(V145))){
	goto T562;}
	V143= (V143)+(((fix((V145))) << (V144)));
T562:;
	if(((V146))==Cnil){
	goto T566;}
	V144= 10;
	V146= Cnil;
T566:;
	if(((V141))!=Cnil){
	goto T572;}
	{int V147 = V143;
	VMR11(V147)}
T572:;
	V144= (V144)+(2);
	{register object V149;
	V149= car((V141));
	V141= cdr((V141));
	V148= (V149);}
	V145= make_fixnum((*(LnkLI284))(V148));
	goto T560;}
}
/*	local entry for function WT-IF-PROCLAIMED	*/

static object LI12(V153,V154,V155)

register object V153;object V154;object V155;
{	 VMB12 VMS12 VMV12
TTL:;
	if(((VFUN_NARGS=1,(*(LnkLI286))((V153))))==Cnil){
	goto T584;}
	{register object x= (V153),V156= symbol_value(VV[73]);
	while(!endp(V156))
	if(type_of(V156->c.c_car)==t_cons &&eql(x,V156->c.c_car->c.c_car)){
	goto T588;
	}else V156=V156->c.c_cdr;
	goto T587;}
T588:;
	V157= list(2,VV[87],(V153));
	V158= (*(LnkLI288))(VV[88],(V154));
	V159= get((V153),VV[63],Cnil);
	V160= get((V153),VV[74],Cnil);
	V161 = make_fixnum((*(LnkLI289))(V159,V160));
	V162= list(4,VV[86],/* INLINE-ARGS */V157,/* INLINE-ARGS */V158,V161);
	(void)((VFUN_NARGS=1,(*(LnkLI287))(/* INLINE-ARGS */V162)));
	{object V163 = Ct;
	VMR12(V163)}
T587:;
	{register object V164;
	register object V165;
	object V166;
	V164= make_fixnum(length(car(caddr((V155)))));
	V167= get((V153),VV[63],Cnil);
	V165= make_fixnum(length(V167));
	V169= get((V153),VV[63],Cnil);
	{register object x= VV[64],V168= V169;
	while(!endp(V168))
	if(eql(x,V168->c.c_car)){
	V166= V168;
	goto T596;
	}else V168=V168->c.c_cdr;
	V166= Cnil;}
T596:;
	if(((V166))==Cnil){
	goto T599;}
	base[0]= (V164);
	vs_top=(vs_base=base+0)+1;
	Lmonotonically_nonincreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T601;}
	goto T592;
T601:;{object V170;
	V171 = make_fixnum(length((V166)));
	V170= number_minus((V165),V171);
	if(V170==Cnil)goto T604;
	goto T592;
T604:;}
	V172 = make_fixnum(length((V166)));
	V173= number_minus((V165),V172);
	(void)((VFUN_NARGS=4,(*(LnkLI254))(VV[89],(V153),/* INLINE-ARGS */V173,(V164))));
	goto T592;
T599:;
	if(eql((V164),(V165))){
	goto T607;}
	(void)((VFUN_NARGS=4,(*(LnkLI254))(VV[90],(V153),(V165),(V164))));
	goto T592;
T607:;
	(void)((VFUN_NARGS=2,(*(LnkLI254))(VV[91],(V153))));}
T592:;
	{object V174 = Cnil;
	VMR12(V174)}
T584:;
	{object V175 = Cnil;
	VMR12(V175)}
}
/*	local entry for function VOLATILE	*/

static object LI13(V177)

object V177;
{	 VMB13 VMS13 VMV13
TTL:;
	if((structure_ref((V177),VV[58],4))==Cnil){
	goto T610;}
	{object V178 = VV[92];
	VMR13(V178)}
T610:;
	{object V179 = VV[93];
	VMR13(V179)}
}
/*	local entry for function REGISTER	*/

static object LI14(V181)

object V181;
{	 VMB14 VMS14 VMV14
TTL:;
	if(!(equal(symbol_value(VV[16]),VV[94]))){
	goto T613;}
	{int V182= fix(structure_ref((V181),VV[65],6));
	if(!((/* INLINE-ARGS */V182)>=(fix(symbol_value(VV[95]))))){
	goto T613;}}
	{object V183 = VV[96];
	VMR14(V183)}
T613:;
	{object V184 = VV[97];
	VMR14(V184)}
}
/*	local entry for function VARARG-P	*/

static object LI15(V186)

object V186;
{	 VMB15 VMS15 VMV15
TTL:;
	V187= get((V186),VV[74],Cnil);
	if(equal(V187,Ct)){
	goto T617;}
	{object V188 = Cnil;
	VMR15(V188)}
T617:;
	{register object V189;
	V189= get((V186),VV[63],Cnil);
T622:;
	if(((V189))!=Cnil){
	goto T623;}
	{object V190 = Ct;
	VMR15(V190)}
T623:;
	if(!(type_of((V189))==t_cons)){
	goto T628;}
	goto T627;
T628:;
	{object V191 = Cnil;
	VMR15(V191)}
T627:;
	if(!((car((V189)))==(Ct))){
	goto T631;}
	goto T630;
T631:;
	if(!((car((V189)))==(VV[64]))){
	goto T633;}
	goto T630;
T633:;
	{object V192 = Cnil;
	VMR15(V192)}
T630:;
	V189= cdr((V189));
	goto T622;}
}
/*	local entry for function MAXARGS	*/

static object LI16(V194)

register object V194;
{	 VMB16 VMS16 VMV16
TTL:;
	if((cadr(cddddr((V194))))!=Cnil){
	goto T638;}
	if((caddr((V194)))==Cnil){
	goto T639;}
T638:;
	{object V195 = small_fixnum(64);
	VMR16(V195)}
T639:;
	base[0]= make_fixnum(length(car((V194))));
	base[1]= make_fixnum(length(cadr((V194))));
	V196 = make_fixnum(length(car(cddddr((V194)))));
	base[2]= number_times(small_fixnum(2),V196);
	vs_top=(vs_base=base+0)+3;
	Lplus();
	vs_top=sup;
	{object V197 = vs_base[0];
	VMR16(V197)}
}
/*	local entry for function ADD-ADDRESS	*/

static object LI17(V200,V201)

object V200;object V201;
{	 VMB17 VMS17 VMV17
TTL:;
	V202= list(2,(V200),(V201));
	setq(VV[17],make_cons(/* INLINE-ARGS */V202,symbol_value(VV[17])));
	{object V203;
	V203= symbol_value(VV[18]);
	setq(VV[18],number_plus(symbol_value(VV[18]),small_fixnum(1)));
	{object V204 = (V203);
	VMR17(V204)}}
}
/*	local entry for function T2DEFUN	*/

static object LI18(V210,V211,V212,V213,V214)

register object V210;register object V211;register object V212;object V213;object V214;
{	 VMB18 VMS18 VMV18
TTL:;
	if((get((V210),VV[98],Cnil))==Cnil){
	goto T650;}
	{object V215 = Cnil;
	VMR18(V215)}
T650:;
	if(((V213))==Cnil){
	goto T653;}
	V216= list(4,VV[99],list(2,VV[87],(V210)),(V213),VV[100]);
	(void)((VFUN_NARGS=1,(*(LnkLI287))(/* INLINE-ARGS */V216)));
T653:;
	{object V217;
	V217= (*(LnkLI290))((V210),(V211),(V212));
	if(((V217))==Cnil){
	goto T659;}
	goto T656;
T659:;
	if(((*(LnkLI291))((V210)))==Cnil){
	goto T662;}
	{object V218;
	V218= cadddr(caddr((V212)));
	princ_str("\nstatic object LI",VV[27]);
	(void)((*(LnkLI265))((V211)));
	princ_str("();",VV[27]);
	if(((V218))==Cnil){
	goto T670;}
	V219= list(2,VV[87],(V210));
	V220= (*(LnkLI288))(VV[102],(V211));
	V221 = make_fixnum(length(car(caddr((V212)))));
	V222= (*(LnkLI292))(caddr((V212)));
	V223= (*(LnkLI285))(/* INLINE-ARGS */V222,small_fixnum(8));
	V224= number_plus(V221,/* INLINE-ARGS */V223);
	base[0]= Cnil;
	base[1]= VV[103];
	base[2]= (V211);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V225= vs_base[0];
	V226= list(5,VV[101],/* INLINE-ARGS */V219,/* INLINE-ARGS */V220,/* INLINE-ARGS */V224,(*(LnkLI288))(V225,VV[104]));
	(void)((VFUN_NARGS=1,(*(LnkLI287))(/* INLINE-ARGS */V226)));
	goto T656;
T670:;
	V227= list(2,VV[87],(V210));
	V228= (*(LnkLI288))(VV[106],(V211));
	V229 = make_fixnum(length(car(caddr((V212)))));
	V230= (*(LnkLI292))(caddr((V212)));
	V231= (*(LnkLI285))(/* INLINE-ARGS */V230,small_fixnum(8));
	V232= list(4,VV[105],/* INLINE-ARGS */V227,/* INLINE-ARGS */V228,number_plus(V229,/* INLINE-ARGS */V231));
	(void)((VFUN_NARGS=1,(*(LnkLI287))(/* INLINE-ARGS */V232)));
	goto T656;}
T662:;
	if(!(type_of((V211))==t_fixnum||
type_of((V211))==t_bignum||
type_of((V211))==t_ratio||
type_of((V211))==t_shortfloat||
type_of((V211))==t_longfloat||
type_of((V211))==t_complex)){
	goto T677;}
	princ_str("\nstatic L",VV[27]);
	(void)((*(LnkLI265))((V211)));
	princ_str("();",VV[27]);
	V233= list(2,VV[87],(V210));
	V234= list(3,VV[107],/* INLINE-ARGS */V233,(*(LnkLI288))(VV[108],(V211)));
	(void)((VFUN_NARGS=1,(*(LnkLI287))(/* INLINE-ARGS */V234)));
	goto T656;
T677:;
	princ_char(10,VV[27]);
	(void)((*(LnkLI265))((V211)));
	princ_str("();",VV[27]);
	V235= list(2,VV[87],(V210));
	V236= list(3,VV[107],/* INLINE-ARGS */V235,(*(LnkLI288))(VV[109],(V211)));
	(void)((VFUN_NARGS=1,(*(LnkLI287))(/* INLINE-ARGS */V236)));}
T656:;
	if(!(number_compare(symbol_value(VV[110]),small_fixnum(2))<0)){
	goto T688;}
	{object V237 = sputprop((V210),VV[111],Ct);
	VMR18(V237)}
T688:;
	{object V238 = Cnil;
	VMR18(V238)}
}
/*	local entry for function ADD-DEBUG	*/

static object LI19(V241,V242)

object V241;object V242;
{	 VMB19 VMS19 VMV19
TTL:;
	{object V243 = putprop((V241),(V242),VV[112]);
	VMR19(V243)}
}
/*	local entry for function T3DEFUN	*/

static object LI20(V249,V250,V251,V252,V253)

register object V249;register object V250;register object V251;object V252;object V253;
{	 VMB20 VMS20 VMV20
	bds_check;
TTL:;
	{register object V254;
	V254= Cnil;
	bds_bind(VV[0],list(2,VV[47],(V249)));
	bds_bind(VV[16],(*(LnkLI293))(cadr((V251))));
	bds_bind(VV[113],Cnil);
	{register object V255;
	register object V256;
	V255= symbol_value(VV[73]);
	V256= car((V255));
T700:;
	if(!(endp((V255)))){
	goto T701;}
	goto T695;
T701:;{object V257;
	base[4]= cadddr((V256));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk294)();
	vs_top=sup;
	V257= vs_base[0];
	if(V257==Cnil)goto T706;
	goto T705;
T706:;}
	base[4]= VV[114];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
T705:;
	if((car((V256)))==((V249))){
	goto T711;}
	goto T710;
T711:;
	if((cadr(cddddr((V256))))==Cnil){
	goto T713;}
	goto T710;
T713:;
	V254= (V256);
	if(((V254))==Cnil){
	goto T695;}
	goto T696;
T710:;
	V255= cdr((V255));
	V256= car((V255));
	goto T700;}
T696:;
	if(((VFUN_NARGS=1,(*(LnkLI286))((V249))))!=Cnil){
	goto T721;}
	V258= list(4,(V249),(V250),cadr((V254)),caddr((V254)));
	setq(VV[25],make_cons(/* INLINE-ARGS */V258,symbol_value(VV[25])));
T721:;
	V259= structure_ref(cadr((V251)),VV[58],1);
	(void)((*(LnkLI295))(/* INLINE-ARGS */V259,small_fixnum(0)));
	base[3]= VV[115];
	{object V260= caddr((V254));
	if((V260!= VV[85]))goto T728;
	base[4]= VV[116];
	goto T727;
T728:;
	if((V260!= VV[138]))goto T729;
	base[4]= VV[117];
	goto T727;
T729:;
	if((V260!= VV[139]))goto T730;
	base[4]= VV[118];
	goto T727;
T730:;
	if((V260!= VV[140]))goto T731;
	base[4]= VV[119];
	goto T727;
T731:;
	base[4]= VV[120];}
T727:;
	base[5]= (V249);
	base[6]= (V250);
	base[7]= (V251);
	base[8]= (V253);
	base[9]= (V254);
	vs_top=(vs_base=base+3)+7;
	(void) (*Lnk296)();
	vs_top=sup;
	goto T693;
T695:;
	if(((*(LnkLI291))((V249)))==Cnil){
	goto T738;}
	V261= structure_ref(cadr((V251)),VV[58],1);
	(void)((*(LnkLI295))(/* INLINE-ARGS */V261,small_fixnum(0)));
	base[3]= VV[121];
	base[4]= VV[120];
	base[5]= (V249);
	base[6]= (V250);
	base[7]= (V251);
	base[8]= (V253);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk296)();
	vs_top=sup;
	goto T693;
T738:;
	V262= structure_ref(cadr((V251)),VV[58],1);
	(void)((*(LnkLI295))(/* INLINE-ARGS */V262,small_fixnum(2)));
	base[3]= VV[122];
	base[4]= VV[123];
	base[5]= (V249);
	base[6]= (V250);
	base[7]= (V251);
	base[8]= (V253);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk296)();
	vs_top=sup;
T693:;
	(void)((*(LnkLI297))((V250)));
	{object V263 = (*(LnkLI298))((V249),(V251));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR20(V263)}}
}
/*	function definition for T3DEFUN-AUX	*/

static L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	bds_check;
	{object V264;
	object V265;
	if(vs_top-vs_base<2) too_few_arguments();
	V264=(base[0]);
	bds_bind(VV[124],base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V265=(base[2]);
	vs_top=sup;
	bds_bind(VV[14],Cnil);
	bds_bind(VV[125],small_fixnum(0));
	bds_bind(VV[126],small_fixnum(0));
	bds_bind(VV[127],small_fixnum(0));
	bds_bind(VV[128],small_fixnum(0));
	bds_bind(VV[129],Cnil);
	bds_bind(VV[130],make_cons((VV[124]->s.s_dbind),Cnil));
	bds_bind(VV[131],(VV[124]->s.s_dbind));
	setq(VV[133],number_plus(symbol_value(VV[133]),small_fixnum(1)));
	bds_bind(VV[132],symbol_value(VV[133]));
	bds_bind(VV[134],Cnil);
	bds_bind(VV[135],Cnil);
	bds_bind(VV[136],Cnil);
	bds_bind(VV[137],small_fixnum(0));
	base[16]= (V264);
	{object V266;
	V266= (V265);
	 vs_top=base+17;
	 while(!endp(V266))
	 {vs_push(car(V266));V266=cdr(V266);}
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

static object LI22(V272,V273,V274,V275,V276)

object V272;object V273;object V274;object V275;object V276;
{	 VMB22 VMS22 VMV22
	bds_check;
TTL:;
	{object V277;
	object V278;
	V277= Cnil;
	V278= caaddr((V274));
	{register object V279;
	object V280;
	V280= cadr((V276));
	V279= (V278);
T765:;
	if(!(endp((V279)))){
	goto T766;}
	goto T762;
T766:;
	V281= structure_ref(car((V279)),VV[65],1);
	if(!((/* INLINE-ARGS */V281)==(VV[67]))){
	goto T772;}
	V282= car((V279));
	V283= structure_ref(car((V279)),VV[65],4);
	V284= make_cons(/* INLINE-ARGS */V282,/* INLINE-ARGS */V283);
	V277= make_cons(/* INLINE-ARGS */V284,(V277));
	goto T770;
T772:;
	V285= car((V279));
	{object V287= car((V280));
	if((V287!= VV[85]))goto T776;
	V286= VV[85];
	goto T775;
T776:;
	if((V287!= VV[138]))goto T777;
	V286= VV[138];
	goto T775;
T777:;
	if((V287!= VV[139]))goto T778;
	V286= VV[139];
	goto T775;
T778:;
	if((V287!= VV[140]))goto T779;
	V286= VV[140];
	goto T775;
T779:;
	V286= VV[70];}
T775:;
	(void)(structure_set(/* INLINE-ARGS */V285,VV[65],1,V286));
T770:;
	V288= car((V279));
	setq(VV[84],number_plus(symbol_value(VV[84]),small_fixnum(1)));
	(void)(structure_set(/* INLINE-ARGS */V288,VV[65],4,symbol_value(VV[84])));
	V279= cdr((V279));
	V280= cdr((V280));
	goto T765;}
T762:;
	(void)((VFUN_NARGS=2,(*(LnkLI299))(VV[141],(V272))));
	princ_str("\nstatic ",VV[27]);
	V289= (*(LnkLI268))(caddr((V276)));
	(void)((*(LnkLI265))(/* INLINE-ARGS */V289));
	princ_str("LI",VV[27]);
	(void)((*(LnkLI265))((V273)));
	princ_str("();",VV[27]);
	princ_str("\nstatic ",VV[21]);
	V290= (*(LnkLI268))(caddr((V276)));
	(void)((*(LnkLI262))(/* INLINE-ARGS */V290));
	princ_str("LI",VV[21]);
	(void)((*(LnkLI262))((V273)));
	princ_char(40,VV[21]);
	(void)((*(LnkLI300))((V278),cadr((V276))));
	{object V291;
	V291= symbol_value(VV[132]);
	if((symbol_value(VV[143]))==Cnil){
	goto T803;}
	base[1]= make_cons((V272),(V278));
	goto T801;
T803:;
	base[1]= Cnil;
T801:;
	bds_bind(VV[142],base[1]);
	bds_bind(VV[130],symbol_value(VV[130]));
	princ_str("\n{	",VV[21]);
	V292= structure_ref(cadr((V274)),VV[58],1);
	(void)((*(LnkLI301))(/* INLINE-ARGS */V292,(V273),VV[144]));
	princ_str(" VMB",VV[21]);
	(void)((*(LnkLI262))((V291)));
	princ_str(" VMS",VV[21]);
	(void)((*(LnkLI262))((V291)));
	princ_str(" VMV",VV[21]);
	(void)((*(LnkLI262))((V291)));
	if(((V275))==Cnil){
	goto T815;}
	princ_str("\n	bds_check;",VV[21]);
T815:;
	if((symbol_value(VV[145]))==Cnil){
	goto T819;}
	princ_str("\n	ihs_check;",VV[21]);
T819:;
	if(((VV[142]->s.s_dbind))==Cnil){
	goto T823;}
	(VV[130]->s.s_dbind)= make_cons(VV[146],(VV[130]->s.s_dbind));
	princ_str("\nTTL:;",VV[21]);
T823:;
	{register object V293;
	register object V294;
	V293= (V277);
	V294= car((V293));
T833:;
	if(!(endp((V293)))){
	goto T834;}
	goto T829;
T834:;
	princ_str("\n	bds_bind(VV[",VV[21]);
	(void)((*(LnkLI262))(cdr((V294))));
	princ_str("],V",VV[21]);
	V295= structure_ref(car((V294)),VV[65],4);
	(void)((*(LnkLI262))(/* INLINE-ARGS */V295));
	princ_str(");",VV[21]);
	(VV[130]->s.s_dbind)= make_cons(VV[147],(VV[130]->s.s_dbind));
	(void)(structure_set(car((V294)),VV[65],1,VV[67]));
	(void)(structure_set(car((V294)),VV[65],4,cdr((V294))));
	V293= cdr((V293));
	V294= car((V293));
	goto T833;}
T829:;
	base[3]= caddr(cddr((V274)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk302)();
	vs_top=sup;
	princ_str("\n}",VV[21]);
	{object V296 = (*(LnkLI303))((V291),caddr((V276)));
	bds_unwind1;
	bds_unwind1;
	VMR22(V296)}}}
}
/*	local entry for function SET-UP-VAR-CVS	*/

static object LI23(V298)

object V298;
{	 VMB23 VMS23 VMV23
TTL:;
	if((symbol_value(VV[148]))==Cnil){
	goto T858;}
	V299= (*(LnkLI304))();
	{object V300 = structure_set((V298),VV[65],2,/* INLINE-ARGS */V299);
	VMR23(V300)}
T858:;
	V301= (*(LnkLI305))();
	{object V302 = structure_set((V298),VV[65],2,/* INLINE-ARGS */V301);
	VMR23(V302)}
}
/*	local entry for function T3DEFUN-VARARG	*/

static object LI24(V307,V308,V309,V310)

object V307;object V308;object V309;object V310;
{	 VMB24 VMS24 VMV24
	bds_check;
TTL:;
	{object V311;
	register object V312;
	object V313;
	object V314;
	object V315;
	object V316;
	object V317;
	object V318;
	V311= Cnil;
	bds_bind(VV[148],Cnil);
	base[1]= Cnil;
	V312= Cnil;
	V313= Ct;
	V314= Cnil;
	bds_bind(VV[149],small_fixnum(0));
	V315= Cnil;
	V316= caddr((V309));
	V317= Cnil;{object V319;
	V319= caddr((V316));
	if(V319==Cnil)goto T868;
	V318= V319;
	goto T867;
T868:;}{object V320;
	V320= cadr((V316));
	if(V320==Cnil)goto T870;
	V318= V320;
	goto T867;
T870:;}
	V318= cadddr((V316));
T867:;
	{object V321;
	register object V322;
	V321= car((V316));
	V322= car((V321));
T876:;
	if(!(endp((V321)))){
	goto T877;}
	goto T872;
T877:;
	setq(VV[84],number_plus(symbol_value(VV[84]),small_fixnum(1)));
	V323= list(2,VV[150],symbol_value(VV[84]));
	V311= make_cons(/* INLINE-ARGS */V323,(V311));
	V321= cdr((V321));
	V322= car((V321));
	goto T876;}
T872:;
	(void)((VFUN_NARGS=2,(*(LnkLI299))(VV[151],(V307))));
	princ_str("\nstatic object LI",VV[27]);
	(void)((*(LnkLI265))((V308)));
	princ_str("();",VV[27]);
	princ_str("\nstatic object LI",VV[21]);
	(void)((*(LnkLI262))((V308)));
	princ_char(40,VV[21]);
	(void)((*(LnkLI306))((V311)));
	if(((V318))==Cnil){
	goto T899;}
	if(((V311))==Cnil){
	goto T902;}
	princ_char(44,VV[21]);
T902:;
	princ_str("va_alist",VV[21]);
T899:;
	princ_char(41,VV[21]);
	if(((V311))==Cnil){
	goto T909;}
	princ_str("\n	object ",VV[21]);
	(void)((*(LnkLI306))((V311)));
	princ_char(59,VV[21]);
T909:;
	if(((V318))==Cnil){
	goto T916;}
	princ_str("\n	va_dcl ",VV[21]);
T916:;
	{object V324;
	V324= symbol_value(VV[132]);
	if(symbol_value(VV[143])==Cnil){
	base[5]= Cnil;
	goto T921;}
	if((caddr((V316)))==Cnil){
	goto T922;}
	base[5]= Cnil;
	goto T921;
T922:;
	{object V325;
	object V326;
	V325= car((V316));
	V326= car((V325));
T929:;
	if(!(endp((V325)))){
	goto T930;}
	goto T924;
T930:;
	if((structure_ref((V326),VV[65],3))==Cnil){
	goto T934;}
	goto T925;
T934:;
	V325= cdr((V325));
	V326= car((V325));
	goto T929;}
T925:;
	base[5]= Cnil;
	goto T921;
T924:;
	if((cadr((V316)))==Cnil){
	goto T942;}
	base[5]= Cnil;
	goto T921;
T942:;
	if((car(cddddr((V316))))==Cnil){
	goto T944;}
	base[5]= Cnil;
	goto T921;
T944:;
	base[5]= make_cons((V307),car((V316)));
T921:;
	bds_bind(VV[142],base[5]);
	bds_bind(VV[130],symbol_value(VV[130]));
	princ_str("\n{	",VV[21]);
	if(((V318))==Cnil){
	goto T948;}
	princ_str("\n	va_list ap;",VV[21]);
T948:;
	princ_str("\n	int narg = VFUN_NARGS;",VV[21]);
	V327= structure_ref(cadr((V309)),VV[58],1);
	(void)((*(LnkLI301))(/* INLINE-ARGS */V327,(V308),VV[144]));
	princ_str(" VMB",VV[21]);
	(void)((*(LnkLI262))((V324)));
	princ_str(" VMS",VV[21]);
	(void)((*(LnkLI262))((V324)));
	princ_str(" VMV",VV[21]);
	(void)((*(LnkLI262))((V324)));
	if(((V310))==Cnil){
	goto T962;}
	princ_str("\n	bds_check;",VV[21]);
T962:;
	if((symbol_value(VV[145]))==Cnil){
	goto T966;}
	princ_str("\n	ihs_check;",VV[21]);
T966:;
	if((V318)!=Cnil){
	goto T970;}
	princ_str("\n	if ( narg!= ",VV[21]);
	V328 = make_fixnum(length((V311)));
	(void)((*(LnkLI262))(V328));
	princ_str(") vfun_wrong_number_of_args(small_fixnum(",VV[21]);
	V329 = make_fixnum(length((V311)));
	(void)((*(LnkLI262))(V329));
	princ_str("));",VV[21]);
T970:;
	{object V330;
	object V331;
	V330= car((V316));
	V331= car((V330));
T981:;
	if(!(endp((V330)))){
	goto T982;}
	goto T977;
T982:;
	base[9]= (V331);
	vs_top=(vs_base=base+9)+1;
	L25(base);
	vs_top=sup;
	V330= cdr((V330));
	V331= car((V330));
	goto T981;}
T977:;
	{object V332;
	object V333;
	V332= cadr((V316));
	V333= car((V332));
T997:;
	if(!(endp((V332)))){
	goto T998;}
	goto T993;
T998:;
	base[9]= car((V333));
	vs_top=(vs_base=base+9)+1;
	L25(base);
	vs_top=sup;
	if((caddr((V333)))==Cnil){
	goto T1004;}
	base[9]= caddr((V333));
	vs_top=(vs_base=base+9)+1;
	L25(base);
	vs_top=sup;
T1004:;
	V332= cdr((V332));
	V333= car((V332));
	goto T997;}
T993:;
	if((caddr((V316)))==Cnil){
	goto T1013;}
	base[7]= caddr((V316));
	vs_top=(vs_base=base+7)+1;
	L25(base);
	vs_top=sup;
T1013:;
	{object V334;
	object V335;
	V334= car(cddddr((V316)));
	V335= car((V334));
T1020:;
	if(!(endp((V334)))){
	goto T1021;}
	goto T976;
T1021:;
	base[9]= cadr((V335));
	vs_top=(vs_base=base+9)+1;
	L25(base);
	vs_top=sup;
	if((cadddr((V335)))==Cnil){
	goto T1027;}
	base[9]= cadddr((V335));
	vs_top=(vs_base=base+9)+1;
	L25(base);
	vs_top=sup;
T1027:;
	V334= cdr((V334));
	V335= car((V334));
	goto T1020;}
T976:;
	if((symbol_value(VV[152]))!=Cnil){
	goto T1038;}
	if((symbol_value(VV[153]))==Cnil){
	goto T1036;}
T1038:;
	if((car((V316)))==Cnil){
	goto T1036;}
	princ_str("\n	if(narg <",VV[21]);
	V336 = make_fixnum(length(car((V316))));
	(void)((*(LnkLI262))(V336));
	princ_str(") too_few_arguments();",VV[21]);
T1036:;
	{object V337;
	object V338;
	V337= car((V316));
	V338= car((V337));
T1050:;
	if(!(endp((V337)))){
	goto T1051;}
	goto T1046;
T1051:;
	(void)((*(LnkLI307))((V338)));
	V337= cdr((V337));
	V338= car((V337));
	goto T1050;}
T1046:;
	{object V339;
	object V340;
	V339= cadr((V316));
	V340= car((V339));
T1065:;
	if(!(endp((V339)))){
	goto T1066;}
	goto T1061;
T1066:;
	(void)((*(LnkLI307))(car((V340))));
	V339= cdr((V339));
	V340= car((V339));
	goto T1065;}
T1061:;
	if((caddr((V316)))==Cnil){
	goto T1076;}
	(void)((*(LnkLI307))(caddr((V316))));
T1076:;
	if(((VV[148]->s.s_dbind))==Cnil){
	goto T1082;}
	V314= symbol_value(VV[125]);
	goto T1080;
T1082:;
	V314= symbol_value(VV[137]);
T1080:;
	{object V341;
	object V342;
	V341= car(cddddr((V316)));
	V342= car((V341));
T1088:;
	if(!(endp((V341)))){
	goto T1089;}
	goto T1084;
T1089:;
	(void)((*(LnkLI307))(cadr((V342))));
	V341= cdr((V341));
	V342= car((V341));
	goto T1088;}
T1084:;
	{object V343;
	object V344;
	V343= car(cddddr((V316)));
	V344= car((V343));
T1103:;
	if(!(endp((V343)))){
	goto T1104;}
	goto T1099;
T1104:;
	(void)((*(LnkLI307))(cadddr((V344))));
	V343= cdr((V343));
	V344= car((V343));
	goto T1103;}
T1099:;
	{object V345;
	object V346;
	V346= car((V316));
	V345= (V311);
T1117:;
	if(((V345))!=Cnil){
	goto T1118;}
	goto T1114;
T1118:;
	(void)((*(LnkLI308))(car((V346)),car((V345))));
	V345= cdr((V345));
	V346= cdr((V346));
	goto T1117;}
T1114:;
	if((cadr((V316)))==Cnil){
	goto T1127;}
	bds_bind(VV[129],symbol_value(VV[129]));
	bds_bind(VV[130],(VV[130]->s.s_dbind));
	bds_bind(VV[128],symbol_value(VV[128]));
	princ_str("\n	narg = narg - ",VV[21]);
	V347 = make_fixnum(length((V311)));
	(void)((*(LnkLI262))(V347));
	princ_char(59,VV[21]);
	{object V348;
	object V349;
	V348= cadr((V316));
	V349= car((V348));
T1138:;
	if(!(endp((V348)))){
	goto T1139;}
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1130;
T1139:;
	setq(VV[154],number_plus(symbol_value(VV[154]),small_fixnum(1)));
	V350= make_cons(symbol_value(VV[154]),Cnil);
	V312= make_cons(/* INLINE-ARGS */V350,(V312));
	princ_str("\n	if (",VV[21]);
	if((cdr((V312)))==Cnil){
	goto T1151;}
	V351= VV[155];
	goto T1149;
T1151:;
	V351= VV[156];
T1149:;
	(void)((*(LnkLI262))(V351));
	princ_str("narg <= 0) ",VV[21]);
	if(type_of(car((V312)))!=t_cons)FEwrong_type_argument(Scons,car((V312)));
	(car((V312)))->c.c_cdr = Ct;
	(void)(car((V312)));
	princ_str("goto T",VV[21]);
	(void)((*(LnkLI262))(car(car((V312)))));
	princ_char(59,VV[21]);
	princ_str("\n	else {",VV[21]);
	if(((V317))!=Cnil){
	goto T1161;}
	V317= Ct;
	princ_str("\n	va_start(ap);",VV[21]);
T1161:;
	V352= car((V349));
	V353= make_cons(VV[157],Cnil);
	(void)((*(LnkLI308))(/* INLINE-ARGS */V352,/* INLINE-ARGS */V353));
	princ_char(125,VV[21]);
	if((caddr((V349)))==Cnil){
	goto T1170;}
	(void)((*(LnkLI308))(caddr((V349)),Ct));
T1170:;
	V348= cdr((V348));
	V349= car((V348));
	goto T1138;}
T1130:;
	V312= nreverse((V312));
	{object V354;
	setq(VV[154],number_plus(symbol_value(VV[154]),small_fixnum(1)));
	V354= make_cons(symbol_value(VV[154]),Cnil);
	princ_str("\n	--narg; ",VV[21]);
	if(type_of((V354))!=t_cons)FEwrong_type_argument(Scons,(V354));
	((V354))->c.c_cdr = Ct;
	princ_str("goto T",VV[21]);
	(void)((*(LnkLI262))(car((V354))));
	princ_char(59,VV[21]);
	{object V355;
	object V356;
	V355= cadr((V316));
	V356= car((V355));
T1193:;
	if(!(endp((V355)))){
	goto T1194;}
	goto T1189;
T1194:;
	if((cdr(car((V312))))==Cnil){
	goto T1198;}
	princ_str("\nT",VV[21]);
	(void)((*(LnkLI262))(car(car((V312)))));
	princ_str(":;",VV[21]);
T1198:;
	{object V357;
	V357= car((V312));
	V312= cdr((V312));}
	(void)((*(LnkLI309))(car((V356)),cadr((V356))));
	if((caddr((V356)))==Cnil){
	goto T1209;}
	(void)((*(LnkLI308))(caddr((V356)),Cnil));
T1209:;
	V355= cdr((V355));
	V356= car((V355));
	goto T1193;}
T1189:;
	if((cdr((V354)))==Cnil){
	goto T1127;}
	princ_str("\nT",VV[21]);
	(void)((*(LnkLI262))(car((V354))));
	princ_str(":;",VV[21]);}
T1127:;
	if((caddr((V316)))==Cnil){
	goto T1222;}
	V315= (VFUN_NARGS=0,(*(LnkLI310))());
	{object V358;
	V358= cadr((V316));
	if(((V358))==Cnil){
	goto T1230;}
	goto T1227;
T1230:;
	princ_str("\n	narg= narg - ",VV[21]);
	V359 = make_fixnum(length(car((V316))));
	(void)((*(LnkLI262))(V359));
	princ_char(59,VV[21]);}
T1227:;
	if(((V317))!=Cnil){
	goto T1235;}
	V317= Ct;
	princ_str("\n	va_start(ap);",VV[21]);
T1235:;
	princ_str("\n	V",VV[21]);
	(void)((*(LnkLI262))((V315)));
	princ_str(" = ",VV[21]);
	V360= structure_ref(caddr((V316)),VV[65],5);
	if(!((/* INLINE-ARGS */V360)==(VV[159]))){
	goto T1246;}
	base[7]= Ct;
	goto T1245;
T1246:;
	base[7]= symbol_value(VV[158]);
T1245:;
	bds_bind(VV[158],base[7]);
	if((cadddr((V316)))==Cnil){
	goto T1250;}
	if(((VV[158]->s.s_dbind))==Cnil){
	goto T1253;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_MAKE_LIST(narg));",VV[21]);
	goto T1248;
T1253:;
	princ_str("make_list(narg);",VV[21]);
	goto T1248;
T1250:;
	if(((VV[158]->s.s_dbind))==Cnil){
	goto T1258;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR(narg,ap));",VV[21]);
	goto T1248;
T1258:;
	princ_str("list_vector(narg,ap);",VV[21]);
T1248:;
	V361= caddr((V316));
	V362= list(2,VV[150],(V315));
	V363= (*(LnkLI308))(/* INLINE-ARGS */V361,/* INLINE-ARGS */V362);
	bds_unwind1;
T1222:;
	if((cadddr((V316)))==Cnil){
	goto T1262;}
	{object V364;
	V364= caddr((V316));
	if(((V364))==Cnil){
	goto T1268;}
	goto T1265;
T1268:;
	{object V365;
	V365= cadr((V316));
	if(((V365))==Cnil){
	goto T1272;}
	goto T1265;
T1272:;
	princ_str("\n	narg= narg - ",VV[21]);
	V366 = make_fixnum(length(car((V316))));
	(void)((*(LnkLI262))(V366));
	princ_char(59,VV[21]);}}
T1265:;
	if(((V317))!=Cnil){
	goto T1277;}
	V317= Ct;
	princ_str("\n	va_start(ap);",VV[21]);
T1277:;
	{object V367;
	object V368= car(cddddr((V316)));
	if(endp(V368)){
	V313= Cnil;
	goto T1284;}
	base[7]=V367=MMcons(Cnil,Cnil);
T1285:;
	(V367->c.c_car)= caddr((V368->c.c_car));
	if(endp(V368=MMcdr(V368))){
	V313= base[7];
	goto T1284;}
	V367=MMcdr(V367)=MMcons(Cnil,Cnil);
	goto T1285;}
T1284:;
	{object V369;
	object V370;
	V370= make_fixnum(length(car(cddddr((V316)))));
	V369= Cnil;
	{register object V371;
	object V372;
	object V373;
	V371= (V313);
	V372= car(cddddr((V316)));
	V373= car((V372));
T1293:;
	if(((V371))!=Cnil){
	goto T1294;}
	goto T1288;
T1294:;
	if(!((caar((V371)))==(VV[160]))){
	goto T1299;}
	if((caddr(car((V371))))==(Cnil)){
	goto T1298;}
T1299:;
	V369= Ct;
T1298:;
	if(!((caar((V371)))==(VV[160]))){
	goto T1305;}
	{object V374;
	V374= caddr(car((V371)));
	if(!(((V374))==(Cnil))){
	goto T1311;}
	goto T1309;
T1311:;
	if(type_of((V374))==t_cons){
	goto T1313;}
	goto T1305;
T1313:;
	{register object x= car((V374)),V375= VV[161];
	while(!endp(V375))
	if(eql(x,V375->c.c_car)){
	goto T1309;
	}else V375=V375->c.c_cdr;
	goto T1305;}}
T1309:;
	V376= structure_ref(cadddr((V373)),VV[65],1);
	if((/* INLINE-ARGS */V376)==(VV[162])){
	goto T1304;}
T1305:;
	V369= Ct;
	if(type_of(V371)!=t_cons)FEwrong_type_argument(Scons,V371);
	(V371)->c.c_car = small_fixnum(0);
T1304:;
	V371= cdr((V371));
	V372= cdr((V372));
	V373= car((V372));
	goto T1293;}
T1288:;
	if(!((length((V313)))>(15))){
	goto T1326;}
	V369= Ct;
T1326:;
	princ_str("\n	{",VV[21]);
	vs_base=vs_top;
	(void) (*Lnk311)();
	vs_top=sup;
	bds_bind(VV[21],symbol_value(VV[27]));
	if(((V369))==Cnil){
	goto T1334;}
	princ_char(10,VV[27]);
	princ_str("static object VK",VV[21]);
	(void)((*(LnkLI262))((V308)));
	princ_str("defaults[",VV[21]);
	V379 = make_fixnum(length((V313)));
	(void)((*(LnkLI262))(V379));
	princ_str("]={",VV[21]);
	{object V380;
	register object V381;
	V380= (V313);
	V381= Cnil;
T1346:;
	if(((V380))!=Cnil){
	goto T1347;}
	goto T1344;
T1347:;
	princ_str("(void *)",VV[21]);
	if(!(eql(car((V380)),small_fixnum(0)))){
	goto T1355;}
	princ_str("-1",VV[21]);
	goto T1353;
T1355:;
	V381= caddr(car((V380)));
	if(!(((V381))==(Cnil))){
	goto T1359;}
	princ_str("-2",VV[21]);
	goto T1353;
T1359:;
	if(!(type_of((V381))==t_cons)){
	goto T1364;}
	if(!((car((V381)))==(VV[163]))){
	goto T1364;}
	(void)((*(LnkLI262))(cadr((V381))));
	goto T1353;
T1364:;
	if(!(type_of((V381))==t_cons)){
	goto T1370;}
	if(!((car((V381)))==(VV[164]))){
	goto T1370;}
	V382= (*(LnkLI312))(caddr((V381)));
	(void)((*(LnkLI262))(/* INLINE-ARGS */V382));
	goto T1353;
T1370:;
	(void)((*(LnkLI313))());
T1353:;
	if((cdr((V380)))==Cnil){
	goto T1375;}
	princ_char(44,VV[21]);
T1375:;
	V380= cdr((V380));
	goto T1346;}
T1344:;
	princ_str("};",VV[21]);
T1334:;
	princ_char(10,VV[27]);
	princ_str("static struct { short n,allow_other_keys;",VV[21]);
	princ_str("object *defaults;",VV[21]);
	princ_str("\n	 KEYTYPE keys[",VV[21]);
	(void)((*(LnkLI262))((number_compare((V370),small_fixnum(1))>=0?((V370)):small_fixnum(1))));
	princ_str("];",VV[21]);
	princ_str("} LI",VV[21]);
	(void)((*(LnkLI262))((V308)));
	princ_str("key=",VV[21]);
	princ_char(123,VV[21]);
	V383 = make_fixnum(length(car(cddddr((V316)))));
	(void)((*(LnkLI262))(V383));
	princ_char(44,VV[21]);
	if((cadr(cddddr((V316))))==Cnil){
	goto T1402;}
	V384= small_fixnum(1);
	goto T1400;
T1402:;
	V384= small_fixnum(0);
T1400:;
	(void)((*(LnkLI262))(V384));
	princ_char(44,VV[21]);
	if(((V369))==Cnil){
	goto T1407;}
	princ_str("VK",VV[21]);
	(void)((*(LnkLI262))((V308)));
	princ_str("defaults",VV[21]);
	goto T1405;
T1407:;
	princ_str("Cstd_key_defaults",VV[21]);
T1405:;
	if((car(cddddr((V316))))==Cnil){
	goto T1413;}
	princ_str(",{",VV[21]);
	{object V385;
	V385= reverse(car(cddddr((V316))));
T1421:;
	if(((V385))!=Cnil){
	goto T1422;}
	goto T1418;
T1422:;
	princ_str("(void *)",VV[21]);
	V386= (*(LnkLI314))(caar((V385)));
	(void)((*(LnkLI262))(/* INLINE-ARGS */V386));
	if((cdr((V385)))==Cnil){
	goto T1430;}
	princ_char(44,VV[21]);
T1430:;
	V385= cdr((V385));
	goto T1421;}
T1418:;
	princ_char(125,VV[21]);
T1413:;
	princ_str("};",VV[21]);
	bds_unwind1;
	if((caddr((V316)))==Cnil){
	goto T1441;}
	princ_str("\n	parse_key_rest(",VV[21]);
	V387= list(2,VV[150],(V315));
	(void)((*(LnkLI262))(/* INLINE-ARGS */V387));
	princ_char(44,VV[21]);
	goto T1439;
T1441:;
	princ_str("\n	parse_key_new(",VV[21]);
T1439:;
	if(!(eql(small_fixnum(0),symbol_value(VV[137])))){
	goto T1447;}
	setq(VV[137],small_fixnum(1));
T1447:;
	princ_str("narg,",VV[21]);
	if(((VV[148]->s.s_dbind))==Cnil){
	goto T1455;}
	V388= VV[165];
	goto T1453;
T1455:;
	V388= VV[166];
T1453:;
	(void)((*(LnkLI262))(V388));
	princ_char(43,VV[21]);
	(void)((*(LnkLI262))((V314)));
	princ_str(",&LI",VV[21]);
	(void)((*(LnkLI262))((V308)));
	princ_str("key,ap);",VV[21]);}
T1262:;
	{object V389;
	register object V390;
	V389= car(cddddr((V316)));
	V390= car((V389));
T1466:;
	if(!(endp((V389)))){
	goto T1467;}
	goto T1462;
T1467:;
	{object V392;
	V392= car((V313));
	V313= cdr((V313));
	V391= (V392);}
	if(eql(small_fixnum(0),V391)){
	goto T1473;}
	(void)((*(LnkLI315))(cadr((V390))));
	goto T1471;
T1473:;
	princ_str("\n	if(",VV[21]);
	V393= structure_ref(cadr((V390)),VV[65],2);
	(void)((*(LnkLI316))(/* INLINE-ARGS */V393));
	princ_str("==0){",VV[21]);
	bds_bind(VV[129],symbol_value(VV[129]));
	bds_bind(VV[130],(VV[130]->s.s_dbind));
	bds_bind(VV[128],symbol_value(VV[128]));
	V394= (*(LnkLI309))(cadr((V390)),caddr((V390)));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V395= structure_ref(cadddr((V390)),VV[65],1);
	if((/* INLINE-ARGS */V395)==(VV[162])){
	goto T1485;}
	(void)((*(LnkLI308))(cadddr((V390)),Cnil));
T1485:;
	princ_str("\n	}else{",VV[21]);
	(void)((*(LnkLI315))(cadr((V390))));
	V396= structure_ref(cadddr((V390)),VV[65],1);
	if((/* INLINE-ARGS */V396)==(VV[162])){
	goto T1491;}
	(void)((*(LnkLI308))(cadddr((V390)),Ct));
T1491:;
	princ_char(125,VV[21]);
T1471:;
	V389= cdr((V389));
	V390= car((V389));
	goto T1466;}
T1462:;
	if(((VV[142]->s.s_dbind))==Cnil){
	goto T1500;}
	(VV[130]->s.s_dbind)= make_cons(VV[146],(VV[130]->s.s_dbind));
	princ_str("\nTTL:;",VV[21]);
T1500:;
	base[7]= caddr(cddr((V309)));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk302)();
	vs_top=sup;
	princ_char(125,VV[21]);
	if((base[1])==Cnil){
	goto T1510;}
	princ_str("\n	}",VV[21]);
T1510:;
	(void)((*(LnkLI317))());
	V397= get((V307),VV[74],Cnil);
	{object V398 = (*(LnkLI303))((V324),V397);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR24(V398)}}}
}
/*	local entry for function T3DEFUN-NORMAL	*/

static object LI26(V403,V404,V405,V406)

object V403;register object V404;object V405;object V406;
{	 VMB25 VMS25 VMV25
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI299))(VV[167],(V403))));
	if(!(type_of((V404))==t_fixnum||
type_of((V404))==t_bignum||
type_of((V404))==t_ratio||
type_of((V404))==t_shortfloat||
type_of((V404))==t_longfloat||
type_of((V404))==t_complex)){
	goto T1519;}
	princ_str("\nstatic L",VV[21]);
	(void)((*(LnkLI262))((V404)));
	princ_str("()",VV[21]);
	goto T1517;
T1519:;
	princ_char(10,VV[21]);
	(void)((*(LnkLI262))((V404)));
	princ_str("()",VV[21]);
T1517:;
	princ_str("\n{",VV[21]);
	princ_str("register object *",VV[21]);
	(void)((*(LnkLI262))(symbol_value(VV[16])));
	princ_str("base=vs_base;",VV[21]);
	V407= structure_ref(cadr((V405)),VV[58],1);
	(void)((*(LnkLI301))(/* INLINE-ARGS */V407,(V404),VV[144]));
	princ_str("\n	register object *",VV[21]);
	(void)((*(LnkLI262))(symbol_value(VV[16])));
	princ_str("sup=base+VM",VV[21]);
	(void)((*(LnkLI262))(symbol_value(VV[132])));
	princ_char(59,VV[21]);
	princ_str(" VC",VV[21]);
	(void)((*(LnkLI262))(symbol_value(VV[132])));
	if((symbol_value(VV[152]))==Cnil){
	goto T1544;}
	princ_str("\n	vs_reserve(VM",VV[21]);
	(void)((*(LnkLI262))(symbol_value(VV[132])));
	princ_str(");",VV[21]);
	goto T1542;
T1544:;
	princ_str("\n	vs_check;",VV[21]);
T1542:;
	if(((V406))==Cnil){
	goto T1550;}
	princ_str("\n	bds_check;",VV[21]);
T1550:;
	if((symbol_value(VV[145]))==Cnil){
	goto T1554;}
	princ_str("\n	ihs_check;",VV[21]);
T1554:;
	(void)((VFUN_NARGS=3,(*(LnkLI318))(caddr((V405)),caddr(cddr((V405))),(V403))));
	princ_str("\n}",VV[21]);
	V408= make_cons(symbol_value(VV[132]),symbol_value(VV[126]));
	setq(VV[29],make_cons(/* INLINE-ARGS */V408,symbol_value(VV[29])));
	princ_str("\n#define VC",VV[27]);
	(void)((*(LnkLI265))(symbol_value(VV[132])));
	{object V409 = (*(LnkLI319))();
	VMR25(V409)}
}
/*	local entry for function WT-V*-MACROS	*/

static object LI27(V412,V413)

register object V412;object V413;
{	 VMB26 VMS26 VMV26
TTL:;
	V414= make_cons((V412),symbol_value(VV[126]));
	setq(VV[29],make_cons(/* INLINE-ARGS */V414,symbol_value(VV[29])));
	if(!(number_compare(small_fixnum(0),symbol_value(VV[126]))==0)){
	goto T1570;}
	if((symbol_value(VV[134]))!=Cnil){
	goto T1570;}
	if((symbol_value(VV[136]))!=Cnil){
	goto T1570;}
	princ_str("\n#define VMB",VV[27]);
	(void)((*(LnkLI265))((V412)));
	goto T1568;
T1570:;
	princ_str("\n#define VMB",VV[27]);
	(void)((*(LnkLI265))((V412)));
	princ_char(32,VV[27]);
	princ_str("register object *",VV[27]);
	(void)((*(LnkLI265))(symbol_value(VV[16])));
	princ_str("base=vs_top;",VV[27]);
T1568:;
	(void)((*(LnkLI319))());
	if((symbol_value(VV[134]))==Cnil){
	goto T1587;}
	princ_str("\n#define VMS",VV[27]);
	(void)((*(LnkLI265))((V412)));
	princ_char(32,VV[27]);
	princ_str(" register object *",VV[27]);
	(void)((*(LnkLI265))(symbol_value(VV[16])));
	princ_str("sup=vs_top+",VV[27]);
	(void)((*(LnkLI265))(symbol_value(VV[126])));
	princ_str(";vs_top=sup;",VV[27]);
	goto T1585;
T1587:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[126]))==0)){
	goto T1598;}
	princ_str("\n#define VMS",VV[27]);
	(void)((*(LnkLI265))((V412)));
	goto T1585;
T1598:;
	princ_str("\n#define VMS",VV[27]);
	(void)((*(LnkLI265))((V412)));
	princ_str(" vs_top += ",VV[27]);
	(void)((*(LnkLI265))(symbol_value(VV[126])));
	princ_char(59,VV[27]);
T1585:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[126]))==0)){
	goto T1609;}
	princ_str("\n#define VMV",VV[27]);
	(void)((*(LnkLI265))((V412)));
	goto T1607;
T1609:;
	if((symbol_value(VV[152]))==Cnil){
	goto T1614;}
	princ_str("\n#define VMV",VV[27]);
	(void)((*(LnkLI265))((V412)));
	princ_str(" vs_reserve(",VV[27]);
	(void)((*(LnkLI265))(symbol_value(VV[126])));
	princ_str(");",VV[27]);
	goto T1607;
T1614:;
	princ_str("\n#define VMV",VV[27]);
	(void)((*(LnkLI265))((V412)));
	princ_str(" vs_check;",VV[27]);
T1607:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[126]))==0)){
	goto T1625;}
	princ_str("\n#define VMR",VV[27]);
	(void)((*(LnkLI265))((V412)));
	princ_str("(VMT",VV[27]);
	(void)((*(LnkLI265))((V412)));
	princ_str(") return(VMT",VV[27]);
	(void)((*(LnkLI265))((V412)));
	princ_str(");",VV[27]);
	{object V415 = Cnil;
	VMR26(V415)}
T1625:;
	princ_str("\n#define VMR",VV[27]);
	(void)((*(LnkLI265))((V412)));
	princ_str("(VMT",VV[27]);
	(void)((*(LnkLI265))((V412)));
	princ_str(") vs_top=base ; return(VMT",VV[27]);
	(void)((*(LnkLI265))((V412)));
	princ_str(");",VV[27]);
	{object V416 = Cnil;
	VMR26(V416)}
}
/*	local entry for function WT-REQUIREDS	*/

static object LI28(V419,V420)

object V419;object V420;
{	 VMB27 VMS27 VMV27
TTL:;
	{register object V421;
	V421= (V419);
T1643:;
	if(!(endp((V421)))){
	goto T1644;}
	goto T1641;
T1644:;
	{register object V422;
	setq(VV[84],number_plus(symbol_value(VV[84]),small_fixnum(1)));
	V422= symbol_value(VV[84]);
	(void)(structure_set(car((V421)),VV[65],4,(V422)));
	princ_char(86,VV[21]);
	(void)((*(LnkLI262))((V422)));}
	if(endp(cdr((V421)))){
	goto T1654;}
	princ_char(44,VV[21]);
T1654:;
	V421= cdr((V421));
	goto T1643;}
T1641:;
	princ_str(")\n",VV[21]);
	if(((V419))==Cnil){
	goto T1664;}
	princ_char(10,VV[21]);
	{register object V423;
	register object V424;
	register object V425;
	V423= (V419);
	V424= (V420);
	V425= Cnil;
T1668:;
	if(!(endp((V423)))){
	goto T1669;}
	princ_char(59,VV[21]);
	{object V426 = Cnil;
	VMR27(V426)}
T1669:;
	if(((V425))==Cnil){
	goto T1674;}
	princ_char(59,VV[21]);
T1674:;
	(void)((*(LnkLI262))(symbol_value(VV[16])));
	V427= (*(LnkLI320))(car((V423)));
	(void)((*(LnkLI262))(/* INLINE-ARGS */V427));
	V428= (*(LnkLI268))(car((V424)));
	(void)((*(LnkLI262))(/* INLINE-ARGS */V428));
	V425= car((V424));
	princ_char(86,VV[21]);
	V429= structure_ref(car((V423)),VV[65],4);
	(void)((*(LnkLI262))(/* INLINE-ARGS */V429));
	V423= cdr((V423));
	V424= cdr((V424));
	goto T1668;}
T1664:;
	{object V430 = Cnil;
	VMR27(V430)}
}
/*	local entry for function ADD-DEBUG-INFO	*/

static object LI29(V433,V434)

object V433;object V434;
{	 VMB28 VMS28 VMV28
TTL:;
	{object V435;
	V435= Cnil;
	{object V436;
	V436= (number_compare(symbol_value(VV[110]),small_fixnum(2))>=0?Ct:Cnil);
	if(((V436))==Cnil){
	goto T1694;}
	{object V437 = (V436);
	VMR28(V437)}
T1694:;
	if((get((V433),VV[111],Cnil))!=Cnil){
	goto T1697;}
	{object V438 = (VFUN_NARGS=2,(*(LnkLI321))(VV[168],(V433)));
	VMR28(V438)}
T1697:;
	(void)(remprop((V433),VV[111]));
	{register object V439;
	V439= small_fixnum(0);
	{register object V440;
	register object V441;
	V440= structure_ref(cadr((V434)),VV[58],1);
	V441= car((V440));
T1704:;
	if(!(endp((V440)))){
	goto T1705;}
	goto T1700;
T1705:;
	V442= structure_ref((V441),VV[65],2);
	if(!(type_of(/* INLINE-ARGS */V442)==t_cons)){
	goto T1709;}
	V443= structure_ref((V441),VV[65],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V443))==t_fixnum)){
	goto T1709;}
	V444= structure_ref((V441),VV[65],2);
	{object V445= cdr(/* INLINE-ARGS */V444);
	V439= (number_compare((V439),V445)>=0?((V439)):V445);}
T1709:;
	V440= cdr((V440));
	V441= car((V440));
	goto T1704;}
T1700:;
	base[0]= one_plus((V439));
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	V435= vs_base[0];
	{register object V446;
	register object V447;
	V446= structure_ref(cadr((V434)),VV[58],1);
	V447= car((V446));
T1727:;
	if(!(endp((V446)))){
	goto T1728;}
	goto T1723;
T1728:;
	V448= structure_ref((V447),VV[65],2);
	if(!(type_of(/* INLINE-ARGS */V448)==t_cons)){
	goto T1732;}
	V449= structure_ref((V447),VV[65],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V449))==t_fixnum)){
	goto T1732;}
	{object V450;
	register object V452;
	V453= structure_ref((V447),VV[65],2);
	V450= cdr(/* INLINE-ARGS */V453);
	V452= structure_ref((V447),VV[65],0);
	if(type_of(nthcdr(fixint((V450)),V435))!=t_cons)FEwrong_type_argument(Scons,nthcdr(fixint((V450)),V435));
	(nthcdr(fixint((V450)),V435))->c.c_car = (V452);
	(void)(nthcdr(fixint((V450)),V435));}
T1732:;
	V446= cdr((V446));
	V447= car((V446));
	goto T1727;}
T1723:;
	(void)(sputprop((V433),VV[112],(V435)));
	{object V454;
	V454= get((V433),VV[112],Cnil);
	if(((V454))==Cnil){
	goto T1748;}
	if((cdr((V454)))!=Cnil){
	goto T1747;}
	if((car((V454)))==Cnil){
	goto T1748;}
T1747:;
	V455= list(2,VV[87],(V433));
	V456= list(3,VV[112],/* INLINE-ARGS */V455,list(2,VV[87],(V454)));
	{object V457 = (VFUN_NARGS=1,(*(LnkLI287))(/* INLINE-ARGS */V456));
	VMR28(V457)}
T1748:;
	{object V458 = Cnil;
	VMR28(V458)}}}}}
}
/*	local entry for function ANALYZE-REGS	*/

static int LI30(V461,V462)

object V461;object V462;
{	 VMB29 VMS29 VMV29
TTL:;
	{object V463;
	V463= number_minus(symbol_value(VV[169]),(V462));
	if(!(number_compare(small_fixnum(0),symbol_value(VV[170]))==0)){
	goto T1756;}
	V464= (VFUN_NARGS=1,(*(LnkLI323))((V461)));
	{int V465 = (*(LnkLI322))(/* INLINE-ARGS */V464,(V463));
	VMR29(V465)}
T1756:;
	{register object V466;
	register object V467;
	V466= Cnil;
	V467= Cnil;
	{register object V468;
	register object V469;
	V468= (V461);
	V469= car((V468));
T1762:;
	if(!(endp((V468)))){
	goto T1763;}
	goto T1758;
T1763:;
	V471= structure_ref((V469),VV[65],5);
	{register object x= /* INLINE-ARGS */V471,V470= VV[171];
	while(!endp(V470))
	if(x==(V470->c.c_car)){
	goto T1770;
	}else V470=V470->c.c_cdr;
	goto T1769;}
T1770:;{object V472;
	{register object x= (V469),V473= (V467);
	while(!endp(V473))
	if(eql(x,V473->c.c_car)){
	V472= V473;
	goto T1772;
	}else V473=V473->c.c_cdr;
	V472= Cnil;}
T1772:;
	if(V472==Cnil)goto T1771;
	goto T1767;
T1771:;}
	V467= make_cons((V469),(V467));
	goto T1767;
T1769:;{object V474;
	{register object x= (V469),V475= (V466);
	while(!endp(V475))
	if(x==(V475->c.c_car)){
	V474= V475;
	goto T1775;
	}else V475=V475->c.c_cdr;
	V474= Cnil;}
T1775:;
	if(V474==Cnil)goto T1774;
	goto T1767;
T1774:;}
	V467= make_cons((V469),(V467));
T1767:;
	V468= cdr((V468));
	V469= car((V468));
	goto T1762;}
T1758:;
	(void)((*(LnkLI322))((V466),(V463)));
	{int V476 = (*(LnkLI322))((V467),symbol_value(VV[170]));
	VMR29(V476)}}}
}
/*	local entry for function ANALYZE-REGS1	*/

static int LI31(V479,V480)

object V479;object V480;
{	 VMB30 VMS30 VMV30
TTL:;
	{register int V481;
	register int V482;
	int V483;
	int V484;
	register int V485;
	V481= 0;
	V482= 3;
	V483= 100000;
	V484= fix((V480));
	V485= 0;
	V479= (VFUN_NARGS=1,(*(LnkLI323))((V479)));
T1791:;
	{register object V486;
	object V487;
	V486= (V479);
	V487= car((V486));
T1797:;
	if(!(endp((V486)))){
	goto T1798;}
	goto T1793;
T1798:;
	V481= fix(structure_ref((V487),VV[65],6));
	if(!((V481)>=(V482))){
	goto T1804;}
	V485= (V485)+(1);
	if(!((V481)<(V483))){
	goto T1809;}
	V483= V481;
T1809:;
	if(!((V485)>(V484))){
	goto T1804;}
	goto T1792;
T1804:;
	V486= cdr((V486));
	V487= car((V486));
	goto T1797;}
T1793:;
	if(!((V485)<(V484))){
	goto T1820;}
	V482= (V482)-(1);
T1820:;
	{register object V488;
	register object V489;
	V488= (V479);
	V489= car((V488));
T1828:;
	if(!(endp((V488)))){
	goto T1829;}
	goto T1824;
T1829:;
	{int V490= fix(structure_ref((V489),VV[65],6));
	if(!((/* INLINE-ARGS */V490)<(V482))){
	goto T1833;}}
	(void)(structure_set((V489),VV[65],6,small_fixnum(0)));
T1833:;
	V488= cdr((V488));
	V489= car((V488));
	goto T1828;}
T1824:;
	{int V491 = V482;
	VMR30(V491)}
T1792:;
	V485= 0;
	V482= (V483)+(1);
	V483= 1000000;
	goto T1791;}
}
/*	local entry for function WT-GLOBAL-ENTRY	*/

static object LI32(V496,V497,V498,V499)

object V496;object V497;object V498;object V499;
{	 VMB31 VMS31 VMV31
TTL:;
	if((get((V496),VV[98],Cnil))==Cnil){
	goto T1848;}
	{object V500 = Cnil;
	VMR31(V500)}
T1848:;
	(void)((VFUN_NARGS=2,(*(LnkLI299))(VV[174],(V496))));
	princ_str("\nstatic L",VV[21]);
	(void)((*(LnkLI262))((V497)));
	princ_str("()",VV[21]);
	princ_str("\n{	register object *base=vs_base;",VV[21]);
	if((symbol_value(VV[152]))!=Cnil){
	goto T1859;}
	if((symbol_value(VV[153]))==Cnil){
	goto T1858;}
T1859:;
	princ_str("\n	check_arg(",VV[21]);
	V501 = make_fixnum(length((V498)));
	(void)((*(LnkLI262))(V501));
	princ_str(");",VV[21]);
T1858:;
	princ_str("\n	base[0]=",VV[21]);
	{object V503= (V499);
	if((V503!= VV[85]))goto T1870;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[110]))==0)){
	goto T1872;}
	V502= VV[175];
	goto T1869;
T1872:;
	V502= VV[176];
	goto T1869;
T1870:;
	if((V503!= VV[138]))goto T1874;
	V502= VV[177];
	goto T1869;
T1874:;
	if((V503!= VV[139]))goto T1875;
	V502= VV[178];
	goto T1869;
T1875:;
	if((V503!= VV[140]))goto T1876;
	V502= VV[179];
	goto T1869;
T1876:;
	V502= VV[180];}
T1869:;
	(void)((*(LnkLI262))(V502));
	princ_str("(LI",VV[21]);
	(void)((*(LnkLI262))((V497)));
	princ_char(40,VV[21]);
	{register object V504;
	register int V505;
	V505= 0;
	V504= (V498);
T1883:;
	if(!(endp((V504)))){
	goto T1884;}
	goto T1880;
T1884:;
	{object V507= car((V504));
	if((V507!= VV[85]))goto T1891;
	V506= VV[181];
	goto T1890;
T1891:;
	if((V507!= VV[138]))goto T1892;
	V506= VV[182];
	goto T1890;
T1892:;
	if((V507!= VV[139]))goto T1893;
	V506= VV[183];
	goto T1890;
T1893:;
	if((V507!= VV[140]))goto T1894;
	V506= VV[184];
	goto T1890;
T1894:;
	V506= VV[185];}
T1890:;
	(void)((*(LnkLI262))(V506));
	princ_str("(base[",VV[21]);
	V508 = make_fixnum(V505);
	(void)((*(LnkLI262))(V508));
	princ_str("])",VV[21]);
	if(endp(cdr((V504)))){
	goto T1898;}
	princ_char(44,VV[21]);
T1898:;
	V504= cdr((V504));
	V505= (V505)+1;
	goto T1883;}
T1880:;
	princ_str("));",VV[21]);
	princ_str("\n	vs_top=(vs_base=base)+1;",VV[21]);
	princ_str("\n}",VV[21]);
	{object V509 = Cnil;
	VMR31(V509)}
}
/*	local entry for function REP-TYPE	*/

static object LI33(V511)

object V511;
{	 VMB32 VMS32 VMV32
TTL:;
	{object V512= (V511);
	if((V512!= VV[85]))goto T1911;
	{object V513 = VV[186];
	VMR32(V513)}
T1911:;
	if((V512!= VV[249]))goto T1912;
	{object V514 = VV[187];
	VMR32(V514)}
T1912:;
	if((V512!= VV[138]))goto T1913;
	{object V515 = VV[188];
	VMR32(V515)}
T1913:;
	if((V512!= VV[140]))goto T1914;
	{object V516 = VV[189];
	VMR32(V516)}
T1914:;
	if((V512!= VV[139]))goto T1915;
	{object V517 = VV[190];
	VMR32(V517)}
T1915:;
	{object V518 = VV[191];
	VMR32(V518)}}
}
/*	local entry for function T1DEFMACRO	*/

static object LI34(V520)

register object V520;
{	 VMB33 VMS33 VMV33
	bds_check;
TTL:;
	if(endp((V520))){
	goto T1917;}
	if(!(endp(cdr((V520))))){
	goto T1916;}
T1917:;
	V521 = make_fixnum(length((V520)));
	(void)((*(LnkLI270))(VV[192],small_fixnum(2),V521));
T1916:;
	if(type_of(car((V520)))==t_symbol){
	goto T1921;}
	(void)((VFUN_NARGS=2,(*(LnkLI253))(VV[193],car((V520)))));
T1921:;
	V522= make_cons(VV[192],(V520));
	(void)((*(LnkLI255))(Ct,/* INLINE-ARGS */V522));
	setq(VV[6],Ct);
	{register object V523;
	object V524;
	setq(VV[57],number_plus(symbol_value(VV[57]),small_fixnum(1)));
	V524= symbol_value(VV[57]);
	bds_bind(VV[51],Cnil);
	bds_bind(VV[52],Cnil);
	bds_bind(VV[53],Cnil);
	bds_bind(VV[54],Cnil);
	bds_bind(VV[48],Cnil);
	bds_bind(VV[55],Cnil);
	V523= Cnil;
	V523= (*(LnkLI324))(car((V520)),cadr((V520)),cddr((V520)));
	(void)((*(LnkLI280))());
	V525= list(7,VV[192],car((V520)),(V524),cddr((V523)),car((V523)),cadr((V523)),(VV[55]->s.s_dbind));
	setq(VV[20],make_cons(/* INLINE-ARGS */V525,symbol_value(VV[20])));
	{object V526 = symbol_value(VV[20]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR33(V526)}}
}
/*	local entry for function T2DEFMACRO	*/

static object LI35(V533,V534,V535,V536,V537,V538)

object V533;object V534;object V535;object V536;object V537;object V538;
{	 VMB34 VMS34 VMV34
TTL:;
	if(((V536))==Cnil){
	goto T1933;}
	V539= list(4,VV[99],list(2,VV[87],(V533)),(V536),VV[194]);
	(void)((VFUN_NARGS=1,(*(LnkLI287))(/* INLINE-ARGS */V539)));
T1933:;
	if(((V537))==Cnil){
	goto T1936;}
	V540= list(2,VV[87],(V533));
	V541= list(4,VV[99],/* INLINE-ARGS */V540,list(2,VV[87],(V537)),VV[195]);
	(void)((VFUN_NARGS=1,(*(LnkLI287))(/* INLINE-ARGS */V541)));
T1936:;
	princ_str("\nstatic L",VV[27]);
	(void)((*(LnkLI265))((V534)));
	princ_str("();",VV[27]);
	V542= list(2,VV[87],(V533));
	V543= list(3,VV[196],/* INLINE-ARGS */V542,(*(LnkLI288))(VV[197],(V534)));
	{object V544 = (VFUN_NARGS=1,(*(LnkLI287))(/* INLINE-ARGS */V543));
	VMR34(V544)}
}
/*	local entry for function T3DEFMACRO	*/

static object LI36(V551,V552,V553,V554,V555,V556)

object V551;object V552;register object V553;object V554;object V555;object V556;
{	 VMB35 VMS35 VMV35
	bds_check;
TTL:;
	if((get((V551),VV[198],Cnil))==Cnil){
	goto T1945;}
	bds_bind(VV[16],VV[199]);
	goto T1943;
T1945:;
	bds_bind(VV[16],VV[200]);
T1943:;
	bds_bind(VV[124],VV[123]);
	bds_bind(VV[14],Cnil);
	bds_bind(VV[125],small_fixnum(0));
	bds_bind(VV[126],small_fixnum(0));
	bds_bind(VV[127],small_fixnum(0));
	bds_bind(VV[128],small_fixnum(0));
	bds_bind(VV[129],Cnil);
	bds_bind(VV[130],make_cons((VV[124]->s.s_dbind),Cnil));
	bds_bind(VV[131],(VV[124]->s.s_dbind));
	setq(VV[133],number_plus(symbol_value(VV[133]),small_fixnum(1)));
	bds_bind(VV[132],symbol_value(VV[133]));
	bds_bind(VV[134],Cnil);
	bds_bind(VV[135],Cnil);
	bds_bind(VV[136],Cnil);
	bds_bind(VV[137],small_fixnum(0));
	(void)((VFUN_NARGS=2,(*(LnkLI299))(VV[201],(V551))));
	princ_str("\nstatic L",VV[21]);
	(void)((*(LnkLI262))((V552)));
	princ_str("()",VV[21]);
	princ_str("\n{register object *",VV[21]);
	(void)((*(LnkLI262))((VV[16]->s.s_dbind)));
	princ_str("base=vs_base;",VV[21]);
	V557= structure_ref(car(cddddr((V553))),VV[58],1);
	(void)((*(LnkLI301))(/* INLINE-ARGS */V557,(V552),VV[144]));
	princ_str("\n	register object *",VV[21]);
	(void)((*(LnkLI262))((VV[16]->s.s_dbind)));
	princ_str("sup=base+VM",VV[21]);
	(void)((*(LnkLI262))((VV[132]->s.s_dbind)));
	princ_char(59,VV[21]);
	princ_str(" VC",VV[21]);
	(void)((*(LnkLI262))((VV[132]->s.s_dbind)));
	if((symbol_value(VV[152]))==Cnil){
	goto T1971;}
	princ_str("\n	vs_reserve(VM",VV[21]);
	(void)((*(LnkLI262))((VV[132]->s.s_dbind)));
	princ_str(");",VV[21]);
	goto T1969;
T1971:;
	princ_str("\n	vs_check;",VV[21]);
T1969:;
	if(((V556))==Cnil){
	goto T1977;}
	princ_str("\n	bds_check;",VV[21]);
T1977:;
	if((symbol_value(VV[145]))==Cnil){
	goto T1981;}
	princ_str("\n	ihs_check;",VV[21]);
T1981:;
	base[15]= car((V553));
	base[16]= cadr((V553));
	base[17]= caddr((V553));
	base[18]= cadddr((V553));
	vs_top=(vs_base=base+15)+4;
	(void) (*Lnk325)();
	vs_top=sup;
	princ_str("\n}",VV[21]);
	V558= make_cons((VV[132]->s.s_dbind),(VV[126]->s.s_dbind));
	setq(VV[29],make_cons(/* INLINE-ARGS */V558,symbol_value(VV[29])));
	princ_str("\n#define VC",VV[27]);
	(void)((*(LnkLI265))((VV[132]->s.s_dbind)));
	{object V559 = (*(LnkLI319))();
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
	VMR35(V559)}
}
/*	local entry for function T1ORDINARY	*/

static object LI37(V561)

register object V561;
{	 VMB36 VMS36 VMV36
	bds_check;
TTL:;
	{register object V562;
	V562= Cnil;
	setq(VV[6],Ct);
	if((symbol_value(VV[44]))==Cnil){
	goto T2001;}
	(void)((*(LnkLI255))(Cnil,(V561)));
	{object V563;
	base[0]= VV[202];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V563= vs_base[0];
	V564= listA(3,VV[60],(V563),VV[203]);
	(void)((*(LnkLI276))(/* INLINE-ARGS */V564));
	base[0]= list(5,VV[47],(V563),Cnil,(V561),Cnil);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk259)();
	vs_top=sup;
	V565= list(2,VV[204],make_cons((V563),Cnil));
	setq(VV[20],make_cons(/* INLINE-ARGS */V565,symbol_value(VV[20])));
	{object V566 = symbol_value(VV[20]);
	VMR36(V566)}}
T2001:;
	{object V567;
	if(type_of((V561))==t_cons){
	goto T2011;}
	V567= Cnil;
	goto T2010;
T2011:;
	if(type_of(car((V561)))==t_symbol){
	goto T2013;}
	V567= Cnil;
	goto T2010;
T2013:;
	if(!((car((V561)))==(VV[205]))){
	goto T2017;}
	goto T2015;
T2017:;
	base[0]= car((V561));
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	V568= vs_base[0];
	if((V568)==Cnil){
	goto T2015;}
	V567= Cnil;
	goto T2010;
T2015:;
	{register object V569;
	register int V570;
	V569= cdr((V561));
	V570= 1;
T2024:;
	if((V570)>=(1000)){
	goto T2026;}
	if(type_of((V569))==t_cons){
	goto T2025;}
T2026:;
	V567= Cnil;
	goto T2010;
T2025:;
	if(!(type_of(car((V569)))==t_cons)){
	goto T2031;}
	if(!((caar((V569)))==(VV[60]))){
	goto T2031;}
	V562= cadr(car((V569)));
	if(!(type_of((V562))==t_cons)){
	goto T2031;}
	if(!((car((V562)))==(VV[206]))){
	goto T2031;}
	{register object V571;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V571= vs_base[0];
	base[0]= listA(3,VV[47],(V571),cdr((V562)));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk259)();
	vs_top=sup;
	base[1]= (V561);
	base[2]= small_fixnum(0);
	base[3]= make_fixnum(V570);
	vs_top=(vs_base=base+1)+3;
	Lsubseq();
	vs_top=sup;
	base[0]= vs_base[0];
	V572= list(2,VV[207],list(2,VV[87],(V571)));
	base[1]= make_cons(/* INLINE-ARGS */V572,Cnil);
	V573 = make_fixnum(V570);
	V574= number_plus(small_fixnum(1),V573);
	base[2]= nthcdr(fixint(/* INLINE-ARGS */V574),(V561));
	vs_top=(vs_base=base+0)+3;
	Lappend();
	vs_top=sup;
	V561= vs_base[0];
	goto TTL;}
T2031:;
	if(type_of((V569))==t_cons){
	goto T2054;}
	V569= Cnil;
	goto T2053;
T2054:;
	V569= cdr((V569));
T2053:;
	V570= (1)+(V570);
	goto T2024;}
T2010:;
	if(((V567))==Cnil){
	goto T2059;}
	{object V575 = (V567);
	VMR36(V575)}
T2059:;
	(void)((*(LnkLI255))(Cnil,(V561)));
	bds_bind(VV[51],Cnil);
	bds_bind(VV[52],Cnil);
	bds_bind(VV[53],Cnil);
	bds_bind(VV[54],Cnil);
	bds_bind(VV[48],Cnil);
	V576= list(2,VV[204],(V561));
	setq(VV[20],make_cons(/* INLINE-ARGS */V576,symbol_value(VV[20])));
	{object V577 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR36(V577)}}}
}
/*	local entry for function T2ORDINARY	*/

static object LI38(V579)

object V579;
{	 VMB37 VMS37 VMV37
TTL:;
	{object V580;
	V580= (type_of((V579))!=t_cons?Ct:Cnil);
	if(((V580))==Cnil){
	goto T2066;}
	{object V581 = (V580);
	VMR37(V581)}
T2066:;
	{object V582;
	base[0]= (V579);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	V582= vs_base[0];
	if(((V582))==Cnil){
	goto T2071;}
	{object V583 = (V582);
	VMR37(V583)}
T2071:;
	{object V584 = (VFUN_NARGS=1,(*(LnkLI287))((V579)));
	VMR37(V584)}}}
}
/*	local entry for function ADD-LOAD-TIME-SHARP-COMMA	*/

static object LI39()

{	 VMB38 VMS38 VMV38
TTL:;
	{register object V585;
	register object V586;
	V585= reverse(symbol_value(VV[48]));
	V586= car((V585));
T2076:;
	if(!(endp((V585)))){
	goto T2077;}
	{object V587 = Cnil;
	VMR38(V587)}
T2077:;
	if(!(type_of((V586))!=t_cons)){
	goto T2081;}
	(void)((*(LnkLI326))());
T2081:;
	V588= make_cons(VV[208],(V586));
	setq(VV[20],make_cons(/* INLINE-ARGS */V588,symbol_value(VV[20])));
	V585= cdr((V585));
	V586= car((V585));
	goto T2076;}
}
/*	local entry for function T2SHARP-COMMA	*/

static object LI40(V591,V592)

object V591;object V592;
{	 VMB39 VMS39 VMV39
TTL:;
	V593= list(3,VV[209],(V591),(V592));
	{object V594 = (VFUN_NARGS=1,(*(LnkLI287))(/* INLINE-ARGS */V593));
	VMR39(V594)}
}
/*	local entry for function T2DECLARE	*/

static object LI41(V596)

object V596;
{	 VMB40 VMS40 VMV40
TTL:;
	{object V597 = (*(LnkLI326))();
	VMR40(V597)}
}
/*	local entry for function T1DEFINE-STRUCTURE	*/

static object LI42(V599)

object V599;
{	 VMB41 VMS41 VMV41
TTL:;
	V600= (*(LnkLI255))(Cnil,Cnil);
	V601= make_cons(((/* INLINE-ARGS */V600)==Cnil?Ct:Cnil),Cnil);
	V602= append((V599),/* INLINE-ARGS */V601);
	V603= make_cons(VV[210],/* INLINE-ARGS */V602);
	(void)((*(LnkLI255))(Ct,/* INLINE-ARGS */V603));
	V604= make_cons(VV[210],(V599));
	{object V605 = (*(LnkLI260))(/* INLINE-ARGS */V604);
	VMR41(V605)}
}
/*	local entry for function SET-DBIND	*/

static object LI43(V608,V609)

object V608;object V609;
{	 VMB42 VMS42 VMV42
TTL:;
	princ_str("\n	VV[",VV[21]);
	(void)((*(LnkLI262))((V609)));
	princ_str("]->s.s_dbind = ",VV[21]);
	(void)((*(LnkLI262))((V608)));
	princ_char(59,VV[21]);
	{object V610 = Cnil;
	VMR42(V610)}
}
/*	local entry for function T1CLINES	*/

static object LI44(V612)

object V612;
{	 VMB43 VMS43 VMV43
TTL:;
	{register object V613;
	register object V614;
	V613= (V612);
	V614= car((V613));
T2102:;
	if(!(endp((V613)))){
	goto T2103;}
	goto T2098;
T2103:;
	if(type_of((V614))==t_string){
	goto T2107;}
	(void)((VFUN_NARGS=2,(*(LnkLI253))(VV[211],(V614))));
T2107:;
	V613= cdr((V613));
	V614= car((V613));
	goto T2102;}
T2098:;
	V615= list(2,VV[212],(V612));
	setq(VV[20],make_cons(/* INLINE-ARGS */V615,symbol_value(VV[20])));
	{object V616 = symbol_value(VV[20]);
	VMR43(V616)}
}
/*	local entry for function T3CLINES	*/

static object LI45(V618)

object V618;
{	 VMB44 VMS44 VMV44
TTL:;
	{register object V619;
	register object V620;
	V619= (V618);
	V620= car((V619));
T2119:;
	if(!(endp((V619)))){
	goto T2120;}
	{object V621 = Cnil;
	VMR44(V621)}
T2120:;
	princ_char(10,VV[21]);
	(void)((*(LnkLI262))((V620)));
	V619= cdr((V619));
	V620= car((V619));
	goto T2119;}
}
/*	local entry for function T1DEFCFUN	*/

static object LI46(V623)

register object V623;
{	 VMB45 VMS45 VMV45
TTL:;
	{register object V624;
	V624= Cnil;
	if(endp((V623))){
	goto T2134;}
	if(!(endp(cdr((V623))))){
	goto T2133;}
T2134:;
	V625 = make_fixnum(length((V623)));
	(void)((*(LnkLI270))(VV[213],small_fixnum(2),V625));
T2133:;
	if(type_of(car((V623)))==t_string){
	goto T2138;}
	(void)((VFUN_NARGS=2,(*(LnkLI253))(VV[214],car((V623)))));
T2138:;
	{object V626= cadr((V623));
	if(type_of(V626)==t_fixnum||
type_of(V626)==t_bignum||
type_of(V626)==t_ratio||
type_of(V626)==t_shortfloat||
type_of(V626)==t_longfloat||
type_of(V626)==t_complex){
	goto T2141;}}
	(void)((VFUN_NARGS=2,(*(LnkLI253))(VV[215],cadr((V623)))));
T2141:;
	{register object V627;
	register object V628;
	V627= cddr((V623));
	V628= car((V627));
T2148:;
	if(!(endp((V627)))){
	goto T2149;}
	goto T2144;
T2149:;
	if(!(type_of((V628))==t_string)){
	goto T2155;}
	V624= make_cons((V628),(V624));
	goto T2153;
T2155:;
	if(!(type_of((V628))==t_cons)){
	goto T2159;}
	if(!(type_of(car((V628)))==t_symbol)){
	goto T2162;}
	base[2]= car((V628));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2164;}
	(void)((VFUN_NARGS=2,(*(LnkLI253))(VV[216],car((V628)))));
T2164:;
	V629= car((V628));
	V630= (*(LnkLI327))(cdr((V628)));
	V631= make_cons(/* INLINE-ARGS */V629,/* INLINE-ARGS */V630);
	V632= make_cons(/* INLINE-ARGS */V631,Cnil);
	V624= make_cons(/* INLINE-ARGS */V632,(V624));
	goto T2153;
T2162:;
	if(!(type_of(car((V628)))==t_cons)){
	goto T2170;}
	if(!(type_of(caar((V628)))==t_symbol)){
	goto T2170;}
	if(!((caar((V628)))==(VV[87]))){
	goto T2177;}
	if(!(endp(cdar((V628))))){
	goto T2179;}
	goto T2170;
T2179:;
	if(!(((endp(cddar((V628)))?Ct:Cnil))==Cnil)){
	goto T2181;}
	goto T2170;
T2181:;
	if(!(endp(cdr((V628))))){
	goto T2183;}
	goto T2170;
T2183:;
	if(((endp(cddr((V628)))?Ct:Cnil))==Cnil){
	goto T2170;}
	goto T2175;
T2177:;
	base[2]= caar((V628));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2170;}
T2175:;
	V633= caar((V628));
	if(!((caar((V628)))==(VV[87]))){
	goto T2189;}
	V635= (*(LnkLI312))(cadar((V628)));
	V634= make_cons(/* INLINE-ARGS */V635,Cnil);
	goto T2187;
T2189:;
	V634= (*(LnkLI327))(cdar((V628)));
T2187:;
	V636= make_cons(/* INLINE-ARGS */V633,V634);
	V637= (*(LnkLI327))(cdr((V628)));
	V638= make_cons(/* INLINE-ARGS */V636,/* INLINE-ARGS */V637);
	V624= make_cons(/* INLINE-ARGS */V638,(V624));
	goto T2153;
T2170:;
	(void)((VFUN_NARGS=2,(*(LnkLI253))(VV[217],(V628))));
	goto T2153;
T2159:;
	(void)((VFUN_NARGS=2,(*(LnkLI253))(VV[218],(V628))));
T2153:;
	V627= cdr((V627));
	V628= car((V627));
	goto T2148;}
T2144:;
	V639= car((V623));
	V640= cadr((V623));
	V641= list(4,VV[213],/* INLINE-ARGS */V639,/* INLINE-ARGS */V640,reverse((V624)));
	setq(VV[20],make_cons(/* INLINE-ARGS */V641,symbol_value(VV[20])));
	{object V642 = symbol_value(VV[20]);
	VMR45(V642)}}
}
/*	local entry for function T3DEFCFUN	*/

static object LI47(V646,V647,V648)

object V646;object V647;object V648;
{	 VMB46 VMS46 VMV46
TTL:;
	{object V649;
	V649= Cnil;
	(void)((VFUN_NARGS=2,(*(LnkLI299))(VV[219],VV[213])));
	princ_char(10,VV[21]);
	(void)((*(LnkLI262))((V646)));
	princ_str("\n{",VV[21]);
	princ_str("\nobject *vs=vs_top;",VV[21]);
	princ_str("\nobject *old_top=vs_top+",VV[21]);
	(void)((*(LnkLI262))((V647)));
	princ_char(59,VV[21]);
	if(!(number_compare((V647),small_fixnum(0))>0)){
	goto T2210;}
	princ_str("\n	vs_top=old_top;",VV[21]);
T2210:;
	princ_str("\n{",VV[21]);
	{object V650;
	register object V651;
	V650= (V648);
	V651= car((V650));
T2220:;
	if(!(endp((V650)))){
	goto T2221;}
	goto T2216;
T2221:;
	if(!(type_of((V651))==t_string)){
	goto T2227;}
	princ_char(10,VV[21]);
	(void)((*(LnkLI262))((V651)));
	goto T2225;
T2227:;
	if(!((caar((V651)))==(VV[87]))){
	goto T2232;}
	princ_char(10,VV[21]);
	(void)((*(LnkLI262))(cadadr((V651))));
	{object V652= caadr((V651));
	if((V652!= VV[70]))goto T2237;
	princ_str("=VV[",VV[21]);
	(void)((*(LnkLI262))(cadar((V651))));
	princ_str("];",VV[21]);
	goto T2225;
T2237:;
	princ_str("=object_to_",VV[21]);
	base[1]= symbol_name(caadr((V651)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V653= vs_base[0];
	(void)((*(LnkLI262))(V653));
	princ_str("(VV[",VV[21]);
	(void)((*(LnkLI262))(cadar((V651))));
	princ_str("]);",VV[21]);
	goto T2225;}
T2232:;
	princ_str("\n{vs_base=vs_top=old_top;",VV[21]);
	{register object V654;
	register object V655;
	V654= cdar((V651));
	V655= car((V654));
T2254:;
	if(!(endp((V654)))){
	goto T2255;}
	goto T2250;
T2255:;
	princ_str("\nvs_push(",VV[21]);
	{object V656= car((V655));
	if((V656!= VV[70]))goto T2262;
	(void)((*(LnkLI262))(cadr((V655))));
	goto T2261;
T2262:;
	if((V656!= VV[328]))goto T2264;
	princ_str("code_char((int)",VV[21]);
	(void)((*(LnkLI262))(cadr((V655))));
	princ_char(41,VV[21]);
	goto T2261;
T2264:;
	if((V656!= VV[329]))goto T2268;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[110]))==0)){
	goto T2269;}
	princ_str("CMP",VV[21]);
T2269:;
	princ_str("make_fixnum((int)",VV[21]);
	(void)((*(LnkLI262))(cadr((V655))));
	princ_char(41,VV[21]);
	goto T2261;
T2268:;
	if((V656!= VV[330]))goto T2276;
	princ_str("make_shortfloat((double)",VV[21]);
	(void)((*(LnkLI262))(cadr((V655))));
	princ_char(41,VV[21]);
	goto T2261;
T2276:;
	if((V656!= VV[331]))goto T2280;
	princ_str("make_longfloat((double)",VV[21]);
	(void)((*(LnkLI262))(cadr((V655))));
	princ_char(41,VV[21]);
	goto T2261;
T2280:;}
T2261:;
	princ_str(");",VV[21]);
	V654= cdr((V654));
	V655= car((V654));
	goto T2254;}
T2250:;
	{register object x= caar((V651)),V657= symbol_value(VV[75]);
	while(!endp(V657))
	if(type_of(V657->c.c_car)==t_cons &&eql(x,V657->c.c_car->c.c_car)){
	V649= (V657->c.c_car);
	goto T2295;
	}else V657=V657->c.c_cdr;
	V649= Cnil;}
T2295:;
	if(((V649))==Cnil){
	goto T2293;}
	if((symbol_value(VV[145]))==Cnil){
	goto T2297;}
	princ_str("\nihs_push(VV[",VV[21]);
	V658= (*(LnkLI314))(caar((V651)));
	(void)((*(LnkLI262))(/* INLINE-ARGS */V658));
	princ_str("]);",VV[21]);
	princ_str("\nL",VV[21]);
	(void)((*(LnkLI262))(cdr((V649))));
	princ_str("();",VV[21]);
	princ_str("\nihs_pop();",VV[21]);
	goto T2291;
T2297:;
	princ_str("\nL",VV[21]);
	(void)((*(LnkLI262))(cdr((V649))));
	princ_str("();",VV[21]);
	goto T2291;
T2293:;
	if((symbol_value(VV[145]))==Cnil){
	goto T2312;}
	princ_str("\nsuper_funcall(VV[",VV[21]);
	V659= (*(LnkLI314))(caar((V651)));
	(void)((*(LnkLI262))(/* INLINE-ARGS */V659));
	princ_str("]);",VV[21]);
	goto T2291;
T2312:;
	if((symbol_value(VV[152]))==Cnil){
	goto T2318;}
	princ_str("\nsuper_funcall_no_event(VV[",VV[21]);
	V660= (*(LnkLI314))(caar((V651)));
	(void)((*(LnkLI262))(/* INLINE-ARGS */V660));
	princ_str("]);",VV[21]);
	goto T2291;
T2318:;
	princ_str("\nCMPfuncall(VV[",VV[21]);
	V661= (*(LnkLI314))(caar((V651)));
	(void)((*(LnkLI262))(/* INLINE-ARGS */V661));
	princ_str("]->s.s_gfdef);",VV[21]);
T2291:;
	if(endp(cdr((V651)))){
	goto T2326;}
	princ_char(10,VV[21]);
	(void)((*(LnkLI262))(cadadr((V651))));
	{object V662= caadr((V651));
	if((V662!= VV[70]))goto T2333;
	princ_str("=vs_base[0];",VV[21]);
	goto T2332;
T2333:;
	princ_str("=object_to_",VV[21]);
	base[1]= symbol_name(caadr((V651)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V663= vs_base[0];
	(void)((*(LnkLI262))(V663));
	princ_str("(vs_base[0]);",VV[21]);}
T2332:;
	{register object V664;
	register object V665;
	V664= cddr((V651));
	V665= car((V664));
T2343:;
	if(!(endp((V664)))){
	goto T2344;}
	goto T2326;
T2344:;
	princ_str("\nvs_base++;",VV[21]);
	princ_char(10,VV[21]);
	(void)((*(LnkLI262))(cadr((V665))));
	{object V666= car((V665));
	if((V666!= VV[70]))goto T2354;
	princ_str("=(vs_base<vs_top?vs_base[0]:Cnil);",VV[21]);
	goto T2353;
T2354:;
	princ_str("=object_to_",VV[21]);
	base[3]= symbol_name(car((V665)));
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V667= vs_base[0];
	(void)((*(LnkLI262))(V667));
	princ_str("((vs_base<vs_top?vs_base[0]:Cnil));",VV[21]);}
T2353:;
	V664= cdr((V664));
	V665= car((V664));
	goto T2343;}
T2326:;
	princ_str("\n}",VV[21]);
T2225:;
	V650= cdr((V650));
	V651= car((V650));
	goto T2220;}
T2216:;
	princ_str("\n}",VV[21]);
	princ_str("\nvs_top=vs;",VV[21]);
	princ_str("\n}",VV[21]);
	{object V668 = Cnil;
	VMR46(V668)}}
}
/*	local entry for function T1DEFENTRY	*/

static object LI48(V670)

register object V670;
{	 VMB47 VMS47 VMV47
TTL:;
	{register object V671;
	register object V672;
	object V673;
	register object V674;
	V671= Cnil;
	V672= Cnil;
	setq(VV[57],number_plus(symbol_value(VV[57]),small_fixnum(1)));
	V673= symbol_value(VV[57]);
	V674= Cnil;
	if(endp((V670))){
	goto T2383;}
	if(endp(cdr((V670)))){
	goto T2383;}
	if(!(endp(cddr((V670))))){
	goto T2382;}
T2383:;
	V675 = make_fixnum(length((V670)));
	(void)((*(LnkLI270))(VV[220],small_fixnum(3),V675));
T2382:;
	if(type_of(car((V670)))==t_symbol){
	goto T2389;}
	(void)((VFUN_NARGS=2,(*(LnkLI253))(VV[221],car((V670)))));
T2389:;
	{register object V676;
	register object V677;
	V676= cadr((V670));
	V677= car((V676));
T2396:;
	if(!(endp((V676)))){
	goto T2397;}
	goto T2392;
T2397:;
	{register object x= (V677),V678= VV[222];
	while(!endp(V678))
	if(eql(x,V678->c.c_car)){
	goto T2401;
	}else V678=V678->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI253))(VV[223],(V677))));
T2401:;
	V676= cdr((V676));
	V677= car((V676));
	goto T2396;}
T2392:;
	V674= caddr((V670));
	if(!(type_of((V674))==t_symbol)){
	goto T2413;}
	V671= VV[70];
	base[1]= symbol_name((V674));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V672= vs_base[0];
	goto T2411;
T2413:;
	if(!(type_of((V674))==t_string)){
	goto T2420;}
	V671= VV[70];
	V672= (V674);
	goto T2411;
T2420:;
	if(!(type_of((V674))==t_cons)){
	goto T2426;}
	{register object x= car((V674)),V679= VV[224];
	while(!endp(V679))
	if(eql(x,V679->c.c_car)){
	goto T2430;
	}else V679=V679->c.c_cdr;
	goto T2426;}
T2430:;
	if(!(type_of(cdr((V674)))==t_cons)){
	goto T2426;}
	if(type_of(cadr((V674)))==t_symbol){
	goto T2433;}
	if(!(type_of(cadr((V674)))==t_string)){
	goto T2426;}
T2433:;
	if(!(endp(cddr((V674))))){
	goto T2426;}
	if(!(type_of(cadr((V674)))==t_symbol)){
	goto T2441;}
	base[1]= symbol_name(cadr((V674)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V672= vs_base[0];
	goto T2439;
T2441:;
	V672= cadr((V674));
T2439:;
	V671= car((V674));
	goto T2411;
T2426:;
	(void)((VFUN_NARGS=2,(*(LnkLI253))(VV[225],(V674))));
T2411:;
	V680= list(6,VV[220],car((V670)),(V673),cadr((V670)),(V671),(V672));
	setq(VV[20],make_cons(/* INLINE-ARGS */V680,symbol_value(VV[20])));
	V681= make_cons(car((V670)),(V673));
	setq(VV[75],make_cons(/* INLINE-ARGS */V681,symbol_value(VV[75])));
	{object V682 = symbol_value(VV[75]);
	VMR47(V682)}}
}
/*	local entry for function T2DEFENTRY	*/

static object LI49(V688,V689,V690,V691,V692)

object V688;object V689;object V690;object V691;object V692;
{	 VMB48 VMS48 VMV48
TTL:;
	princ_str("\nstatic L",VV[27]);
	(void)((*(LnkLI265))((V689)));
	princ_str("();",VV[27]);
	V693= list(2,VV[87],(V688));
	V694= list(3,VV[107],/* INLINE-ARGS */V693,(*(LnkLI288))(VV[226],(V689)));
	{object V695 = (VFUN_NARGS=1,(*(LnkLI287))(/* INLINE-ARGS */V694));
	VMR48(V695)}
}
/*	local entry for function T3DEFENTRY	*/

static object LI50(V701,V702,V703,V704,V705)

object V701;object V702;object V703;register object V704;object V705;
{	 VMB49 VMS49 VMV49
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI299))(VV[227],(V701))));
	princ_str("\nstatic L",VV[21]);
	(void)((*(LnkLI262))((V702)));
	princ_str("()",VV[21]);
	princ_str("\n{	object *old_base=vs_base;",VV[21]);
	{object V706= (V704);
	if((V706!= VV[228]))goto T2460;
	goto T2459;
T2460:;
	if((V706!= VV[332]))goto T2461;
	princ_str("\n	char *x;",VV[21]);
	goto T2459;
T2461:;
	princ_str("\n	",VV[21]);
	base[0]= symbol_name((V704));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V707= vs_base[0];
	(void)((*(LnkLI262))(V707));
	princ_str(" x;",VV[21]);}
T2459:;
	if((symbol_value(VV[152]))==Cnil){
	goto T2468;}
	princ_str("\n	check_arg(",VV[21]);
	V708 = make_fixnum(length((V703)));
	(void)((*(LnkLI262))(V708));
	princ_str(");",VV[21]);
T2468:;
	if(((V704))==(VV[228])){
	goto T2474;}
	princ_str("\n	x=",VV[21]);
T2474:;
	princ_str("\n	",VV[21]);
	(void)((*(LnkLI262))((V705)));
	princ_char(40,VV[21]);
	if(endp((V703))){
	goto T2482;}
	{register object V709;
	register int V710;
	V710= 0;
	V709= (V703);
T2487:;
	{object V711= car((V709));
	if((V711!= VV[70]))goto T2491;
	princ_str("\n	vs_base[",VV[21]);
	V712 = make_fixnum(V710);
	(void)((*(LnkLI262))(V712));
	princ_char(93,VV[21]);
	goto T2490;
T2491:;
	princ_str("\n	object_to_",VV[21]);
	base[0]= symbol_name(car((V709)));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V713= vs_base[0];
	(void)((*(LnkLI262))(V713));
	princ_str("(vs_base[",VV[21]);
	V714 = make_fixnum(V710);
	(void)((*(LnkLI262))(V714));
	princ_str("])",VV[21]);}
T2490:;
	if(!(endp(cdr((V709))))){
	goto T2502;}
	goto T2482;
T2502:;
	princ_char(44,VV[21]);
	V709= cdr((V709));
	V710= (V710)+1;
	goto T2487;}
T2482:;
	princ_str(");",VV[21]);
	princ_str("\n	vs_top=(vs_base=old_base)+1;",VV[21]);
	princ_str("\n	vs_base[0]=",VV[21]);
	{object V715= (V704);
	if((V715!= VV[228]))goto T2518;
	princ_str("Cnil",VV[21]);
	goto T2517;
T2518:;
	if((V715!= VV[70]))goto T2520;
	princ_char(120,VV[21]);
	goto T2517;
T2520:;
	if((V715!= VV[328]))goto T2522;
	princ_str("code_char(x)",VV[21]);
	goto T2517;
T2522:;
	if((V715!= VV[329]))goto T2524;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[110]))==0)){
	goto T2525;}
	princ_str("CMP",VV[21]);
T2525:;
	princ_str("make_fixnum(x)",VV[21]);
	goto T2517;
T2524:;
	if((V715!= VV[332]))goto T2530;
	princ_str("make_simple_string(x)",VV[21]);
	goto T2517;
T2530:;
	if((V715!= VV[330]))goto T2532;
	princ_str("make_shortfloat(x)",VV[21]);
	goto T2517;
T2532:;
	if((V715!= VV[331]))goto T2534;
	princ_str("make_longfloat(x)",VV[21]);
	goto T2517;
T2534:;}
T2517:;
	princ_char(59,VV[21]);
	princ_str("\n}",VV[21]);
	{object V716 = Cnil;
	VMR49(V716)}
}
/*	local entry for function T1DEFLA	*/

static object LI51(V718)

object V718;
{	 VMB50 VMS50 VMV50
TTL:;
	{object V719 = Cnil;
	VMR50(V719)}
}
/*	local entry for function PARSE-CVSPECS	*/

static object LI52(V721)

object V721;
{	 VMB51 VMS51 VMV51
TTL:;
	{register object V722;
	V722= Cnil;
	{register object V723;
	register object V724;
	V723= (V721);
	V724= car((V723));
T2543:;
	if(!(endp((V723)))){
	goto T2544;}
	{object V725 = reverse((V722));
	VMR51(V725)}
T2544:;
	if(!(type_of((V724))==t_symbol)){
	goto T2550;}
	base[1]= symbol_name((V724));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V726= vs_base[0];
	V727= list(2,VV[70],V726);
	V722= make_cons(/* INLINE-ARGS */V727,(V722));
	goto T2548;
T2550:;
	if(!(type_of((V724))==t_string)){
	goto T2556;}
	V728= list(2,VV[70],(V724));
	V722= make_cons(/* INLINE-ARGS */V728,(V722));
	goto T2548;
T2556:;
	if(!(type_of((V724))==t_cons)){
	goto T2560;}
	{register object x= car((V724)),V729= VV[229];
	while(!endp(V729))
	if(eql(x,V729->c.c_car)){
	goto T2563;
	}else V729=V729->c.c_cdr;
	goto T2560;}
T2563:;
	{register object V730;
	register object V731;
	V730= cdr((V724));
	V731= car((V730));
T2567:;
	if(!(endp((V730)))){
	goto T2568;}
	goto T2548;
T2568:;
	V732= car((V724));
	if(!(type_of((V731))==t_symbol)){
	goto T2576;}
	base[3]= symbol_name((V731));
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V733= vs_base[0];
	goto T2574;
T2576:;
	if(!(type_of((V731))==t_string)){
	goto T2580;}
	V733= (V731);
	goto T2574;
T2580:;
	V733= (VFUN_NARGS=2,(*(LnkLI253))(VV[230],(V731)));
T2574:;
	V734= list(2,/* INLINE-ARGS */V732,V733);
	V722= make_cons(/* INLINE-ARGS */V734,(V722));
	V730= cdr((V730));
	V731= car((V730));
	goto T2567;}
T2560:;
	(void)((VFUN_NARGS=2,(*(LnkLI253))(VV[231],(V724))));
T2548:;
	V723= cdr((V723));
	V724= car((V723));
	goto T2543;}}
}
/*	local entry for function T3LOCAL-DCFUN	*/

static object LI53(V740,V741,V742,V743,V744)

object V740;object V741;object V742;register object V743;register object V744;
{	 VMB52 VMS52 VMV52
	bds_check;
TTL:;
	{object V745;
	register object V746;
	object V747;
	if(((V740))==Cnil){
	goto T2594;}
	V745= small_fixnum(0);
	goto T2592;
T2594:;
	V745= structure_ref((V743),VV[28],4);
T2592:;
	V746= Cnil;
	bds_bind(VV[16],(*(LnkLI293))(cadr((V744))));
	bds_bind(VV[113],Cnil);
	V747= caaddr((V744));
	if((structure_ref((V743),VV[28],0))==Cnil){
	goto T2602;}
	V748= structure_ref((V743),VV[28],0);
	goto T2600;
T2602:;
	V748= Cnil;
T2600:;
	(void)((VFUN_NARGS=2,(*(LnkLI299))(VV[232],V748)));
	princ_str("\nstatic ",VV[21]);
	if(((V740))==Cnil){
	goto T2609;}
	V749= VV[233];
	goto T2607;
T2609:;
	V749= VV[234];
T2607:;
	(void)((*(LnkLI262))(V749));
	V750= structure_ref((V743),VV[28],3);
	(void)((*(LnkLI262))(/* INLINE-ARGS */V750));
	princ_char(40,VV[21]);
	princ_str("base0",VV[21]);
	if(((V747))==Cnil){
	goto T2618;}
	V751= VV[235];
	goto T2616;
T2618:;
	V751= VV[236];
T2616:;
	(void)((*(LnkLI262))(V751));
	V752= structure_ref(cadr((V744)),VV[58],1);
	(void)((*(LnkLI295))(/* INLINE-ARGS */V752,small_fixnum(2)));
	(void)((*(LnkLI300))(caaddr((V744)),Cnil));
	princ_str("register object *",VV[21]);
	(void)((*(LnkLI262))((VV[16]->s.s_dbind)));
	princ_str("base0;",VV[21]);
	bds_bind(VV[237],(V742));
	bds_bind(VV[124],VV[120]);
	bds_bind(VV[14],Cnil);
	bds_bind(VV[125],small_fixnum(0));
	bds_bind(VV[126],small_fixnum(0));
	bds_bind(VV[127],one_plus((V745)));
	bds_bind(VV[128],(V742));
	bds_bind(VV[129],(V741));
	bds_bind(VV[130],make_cons((VV[124]->s.s_dbind),Cnil));
	bds_bind(VV[131],(VV[124]->s.s_dbind));
	setq(VV[133],number_plus(symbol_value(VV[133]),small_fixnum(1)));
	bds_bind(VV[132],symbol_value(VV[133]));
	bds_bind(VV[134],Cnil);
	bds_bind(VV[135],Cnil);
	bds_bind(VV[136],Cnil);
	bds_bind(VV[137],small_fixnum(0));
	V746= (VV[132]->s.s_dbind);
	princ_str("\n{",VV[21]);
	V753= structure_ref(cadr((V744)),VV[58],1);
	V754= structure_ref((V743),VV[28],3);
	(void)((*(LnkLI301))(/* INLINE-ARGS */V753,/* INLINE-ARGS */V754,VV[238]));
	princ_str("\n	VMB",VV[21]);
	(void)((*(LnkLI262))((V746)));
	princ_str(" VMS",VV[21]);
	(void)((*(LnkLI262))((V746)));
	princ_str(" VMV",VV[21]);
	(void)((*(LnkLI262))((V746)));
	if((symbol_value(VV[145]))==Cnil){
	goto T2642;}
	princ_str("\n	ihs_check;",VV[21]);
T2642:;
	base[19]= caddr(cddr((V744)));
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk302)();
	vs_top=sup;
	princ_str("\n}",VV[21]);
	(void)((*(LnkLI303))((V746),Ct));
	V755= structure_ref((V743),VV[28],3);
	{object V756 = (*(LnkLI297))(/* INLINE-ARGS */V755);
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
	VMR52(V756)}}
}
/*	local entry for function T3LOCAL-FUN	*/

static object LI54(V762,V763,V764,V765,V766)

object V762;object V763;object V764;object V765;object V766;
{	 VMB53 VMS53 VMV53
	bds_check;
TTL:;
	{int V767;
	if(((V762))==Cnil){
	goto T2653;}
	V767= 0;
	goto T2651;
T2653:;
	V767= fix(structure_ref((V765),VV[28],4));
T2651:;
	bds_bind(VV[16],(*(LnkLI293))(cadr((V766))));
	bds_bind(VV[113],Cnil);
	if(!(((V762))==(VV[239]))){
	goto T2656;}
	{object V768 = (*(LnkLI238))((V762),(V763),(V764),(V765),(V766));
	bds_unwind1;
	bds_unwind1;
	VMR53(V768)}
T2656:;
	if((structure_ref((V765),VV[28],0))==Cnil){
	goto T2662;}
	V769= structure_ref((V765),VV[28],0);
	goto T2660;
T2662:;
	V769= Cnil;
T2660:;
	(void)((VFUN_NARGS=2,(*(LnkLI299))(VV[240],V769)));
	princ_str("\nstatic ",VV[27]);
	if(((V762))==Cnil){
	goto T2669;}
	V770= VV[241];
	goto T2667;
T2669:;
	V770= VV[242];
T2667:;
	(void)((*(LnkLI265))(V770));
	V771= structure_ref((V765),VV[28],3);
	(void)((*(LnkLI265))(/* INLINE-ARGS */V771));
	princ_str("();",VV[27]);
	princ_str("\nstatic ",VV[21]);
	if(((V762))==Cnil){
	goto T2678;}
	V772= VV[243];
	goto T2676;
T2678:;
	V772= VV[244];
T2676:;
	(void)((*(LnkLI262))(V772));
	V773= structure_ref((V765),VV[28],3);
	(void)((*(LnkLI262))(/* INLINE-ARGS */V773));
	princ_char(40,VV[21]);
	{register object V774;
	register int V775;
	V774= make_fixnum(V767);
	V775= 0;
T2686:;
	V776 = make_fixnum(V775);
	if(!(number_compare(V776,(V774))>=0)){
	goto T2687;}
	princ_str("base",VV[21]);
	V777 = make_fixnum(V775);
	(void)((*(LnkLI262))(V777));
	princ_char(41,VV[21]);
	goto T2682;
T2687:;
	princ_str("base",VV[21]);
	V778 = make_fixnum(V775);
	(void)((*(LnkLI262))(V778));
	princ_char(44,VV[21]);
	V775= (V775)+1;
	goto T2686;}
T2682:;
	princ_str("\nregister object ",VV[21]);
	{register object V779;
	register int V780;
	V779= make_fixnum(V767);
	V780= 0;
T2707:;
	V781 = make_fixnum(V780);
	if(!(number_compare(V781,(V779))>=0)){
	goto T2708;}
	princ_char(42,VV[21]);
	(void)((*(LnkLI262))((VV[16]->s.s_dbind)));
	princ_str("base",VV[21]);
	V782 = make_fixnum(V780);
	(void)((*(LnkLI262))(V782));
	princ_char(59,VV[21]);
	goto T2703;
T2708:;
	princ_char(42,VV[21]);
	(void)((*(LnkLI262))((VV[16]->s.s_dbind)));
	princ_str("base",VV[21]);
	V783 = make_fixnum(V780);
	(void)((*(LnkLI262))(V783));
	princ_char(44,VV[21]);
	V780= (V780)+1;
	goto T2707;}
T2703:;
	V784= structure_ref(cadr((V766)),VV[58],1);
	(void)((*(LnkLI295))(/* INLINE-ARGS */V784,small_fixnum(2)));
	bds_bind(VV[124],VV[123]);
	bds_bind(VV[237],(V764));
	bds_bind(VV[14],Cnil);
	bds_bind(VV[125],small_fixnum(0));
	bds_bind(VV[126],small_fixnum(0));
	V785 = make_fixnum(V767);
	bds_bind(VV[127],one_plus(V785));
	bds_bind(VV[128],(V764));
	bds_bind(VV[129],(V763));
	bds_bind(VV[130],make_cons((VV[124]->s.s_dbind),Cnil));
	bds_bind(VV[131],(VV[124]->s.s_dbind));
	setq(VV[133],number_plus(symbol_value(VV[133]),small_fixnum(1)));
	bds_bind(VV[132],symbol_value(VV[133]));
	bds_bind(VV[134],Cnil);
	bds_bind(VV[135],Cnil);
	bds_bind(VV[136],Cnil);
	bds_bind(VV[137],small_fixnum(0));
	princ_str("\n{	register object *",VV[21]);
	(void)((*(LnkLI262))((VV[16]->s.s_dbind)));
	princ_str("base=vs_base;",VV[21]);
	princ_str("\n	register object *",VV[21]);
	(void)((*(LnkLI262))((VV[16]->s.s_dbind)));
	princ_str("sup=base+VM",VV[21]);
	(void)((*(LnkLI262))((VV[132]->s.s_dbind)));
	princ_char(59,VV[21]);
	V786= structure_ref(cadr((V766)),VV[58],1);
	V787= structure_ref((V765),VV[28],3);
	(void)((*(LnkLI301))(/* INLINE-ARGS */V786,/* INLINE-ARGS */V787,VV[245]));
	princ_str(" VC",VV[21]);
	(void)((*(LnkLI262))((VV[132]->s.s_dbind)));
	if((symbol_value(VV[152]))==Cnil){
	goto T2748;}
	princ_str("\n	vs_reserve(VM",VV[21]);
	(void)((*(LnkLI262))((VV[132]->s.s_dbind)));
	princ_str(");",VV[21]);
	goto T2746;
T2748:;
	princ_str("\n	vs_check;",VV[21]);
T2746:;
	if((symbol_value(VV[145]))==Cnil){
	goto T2754;}
	princ_str("\n	ihs_check;",VV[21]);
T2754:;
	if(((V762))==Cnil){
	goto T2760;}
	(void)((VFUN_NARGS=2,(*(LnkLI318))(caddr((V766)),caddr(cddr((V766))))));
	goto T2758;
T2760:;
	(void)((VFUN_NARGS=3,(*(LnkLI318))(caddr((V766)),caddr(cddr((V766))),(V765))));
T2758:;
	princ_str("\n}",VV[21]);
	V788= make_cons((VV[132]->s.s_dbind),(VV[126]->s.s_dbind));
	setq(VV[29],make_cons(/* INLINE-ARGS */V788,symbol_value(VV[29])));
	princ_str("\n#define VC",VV[27]);
	(void)((*(LnkLI265))((VV[132]->s.s_dbind)));
	V789= (*(LnkLI319))();
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
	V790= structure_ref((V765),VV[28],3);
	{object V791 = (*(LnkLI297))(/* INLINE-ARGS */V790);
	bds_unwind1;
	bds_unwind1;
	VMR53(V791)}}
}
/*	local entry for function WT-CVARS	*/

static object LI55()

{	 VMB54 VMS54 VMV54
TTL:;
	{register object V792;
	V792= Cnil;
	{register object V793;
	register object V794;
	V793= symbol_value(VV[14]);
	V794= car((V793));
T2774:;
	if(!(endp((V793)))){
	goto T2775;}
	goto T2770;
T2775:;
	{register object V795;
	if(!(type_of((V794))==t_cons)){
	goto T2782;}
	{register object V796;
	V796= car((V794));
	V794= cdr((V794));
	V795= (V796);
	goto T2780;}
T2782:;
	V795= Ct;
T2780:;
	if(!(((V792))==((V795)))){
	goto T2789;}
	base[1]= symbol_value(VV[27]);
	base[2]= VV[246];
	base[3]= (V794);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T2787;
T2789:;
	if(!(((V792))==Cnil)){
	goto T2795;}
	goto T2794;
T2795:;
	base[1]= symbol_value(VV[27]);
	base[2]= VV[247];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
T2794:;
	V792= (V795);
	base[1]= symbol_value(VV[27]);
	base[2]= VV[248];
	base[3]= (*(LnkLI268))((V792));
	base[4]= (V794);
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
T2787:;
	if(!(((V792))==(VV[249]))){
	goto T2779;}
	base[1]= symbol_value(VV[27]);
	base[2]= VV[250];
	base[3]= (V794);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;}
T2779:;
	V793= cdr((V793));
	V794= car((V793));
	goto T2774;}
T2770:;
	if(symbol_value(VV[14])==Cnil){
	goto T2815;}
	base[0]= symbol_value(VV[27]);
	base[1]= VV[251];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
T2815:;
	if(eql(symbol_value(VV[137]),small_fixnum(0))){
	goto T2819;}
	base[0]= symbol_value(VV[27]);
	base[1]= VV[252];
	base[2]= symbol_value(VV[137]);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V797 = vs_base[0];
	VMR54(V797)}
T2819:;
	{object V798 = Cnil;
	VMR54(V798)}}
}
/*	local function DO-DECL	*/

static L25(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_reserve(VM55);
	{object V799;
	check_arg(1);
	V799=(base[0]);
	vs_top=sup;
TTL:;
	V800= structure_ref((V799),VV[65],4);
	if(eql(/* INLINE-ARGS */V800,VV[68])){
	goto T2825;}
	goto T2824;
T2825:;
	(VV[148]->s.s_dbind)= Ct;
T2824:;
	{object V801;
	V801= (*(LnkLI333))((V799));
	if(((V801))==Cnil){
	goto T2830;}
	{object V802;
	setq(VV[84],number_plus(symbol_value(VV[84]),small_fixnum(1)));
	V802= symbol_value(VV[84]);
	(void)(structure_set((V799),VV[65],1,(V801)));
	(void)(structure_set((V799),VV[65],4,(V802)));
	princ_str("\n	",VV[21]);
	if((base0[1])!=Cnil){
	goto T2837;}
	princ_char(123,VV[21]);
	base0[1]= Ct;
T2837:;
	base[1]= (V799);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk334)();
	return;}
T2830:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
static LnkT334(){ call_or_link(VV[334],&Lnk334);} /* WT-VAR-DECL */
static object  LnkTLI333(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[333],&LnkLI333,1,ap);} /* C2VAR-KIND */
static object  LnkTLI238(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[238],&LnkLI238,5,ap);} /* T3LOCAL-DCFUN */
static object  LnkTLI327(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[327],&LnkLI327,1,ap);} /* PARSE-CVSPECS */
static object  LnkTLI326(){return call_proc0(VV[326],&LnkLI326);} /* WFS-ERROR */
static LnkT325(){ call_or_link(VV[325],&Lnk325);} /* C2DM */
static object  LnkTLI324(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[324],&LnkLI324,3,ap);} /* C1DM */
static object  LnkTLI323(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[323],&LnkLI323,ap);} /* REMOVE-DUPLICATES */
static int  LnkTLI322(va_alist)va_dcl{va_list ap;va_start(ap);return(int )call_proc(VV[322],&LnkLI322,258,ap);} /* ANALYZE-REGS1 */
static object  LnkTLI321(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[321],&LnkLI321,ap);} /* WARN */
static object  LnkTLI320(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[320],&LnkLI320,1,ap);} /* REGISTER */
static object  LnkTLI319(){return call_proc0(VV[319],&LnkLI319);} /* WT-CVARS */
static object  LnkTLI318(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[318],&LnkLI318,ap);} /* C2LAMBDA-EXPR */
static object  LnkTLI317(){return call_proc0(VV[317],&LnkLI317);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI316(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[316],&LnkLI316,1,ap);} /* WT-VS */
static object  LnkTLI315(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[315],&LnkLI315,1,ap);} /* C2BIND */
static object  LnkTLI314(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[314],&LnkLI314,1,ap);} /* ADD-SYMBOL */
static object  LnkTLI313(){return call_proc0(VV[313],&LnkLI313);} /* BABOON */
static object  LnkTLI312(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[312],&LnkLI312,1,ap);} /* ADD-OBJECT */
static LnkT311(){ call_or_link(VV[311],&Lnk311);} /* INC-INLINE-BLOCKS */
static object  LnkTLI310(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[310],&LnkLI310,ap);} /* CS-PUSH */
static object  LnkTLI309(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[309],&LnkLI309,2,ap);} /* C2BIND-INIT */
static object  LnkTLI308(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[308],&LnkLI308,2,ap);} /* C2BIND-LOC */
static object  LnkTLI307(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[307],&LnkLI307,1,ap);} /* SET-UP-VAR-CVS */
static object  LnkTLI306(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[306],&LnkLI306,1,ap);} /* WT-LIST */
static object  LnkTLI305(){return call_proc0(VV[305],&LnkLI305);} /* CVS-PUSH */
static object  LnkTLI304(){return call_proc0(VV[304],&LnkLI304);} /* VS-PUSH */
static object  LnkTLI303(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[303],&LnkLI303,2,ap);} /* WT-V*-MACROS */
static LnkT302(){ call_or_link(VV[302],&Lnk302);} /* C2EXPR */
static object  LnkTLI301(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[301],&LnkLI301,3,ap);} /* ASSIGN-DOWN-VARS */
static object  LnkTLI300(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[300],&LnkLI300,2,ap);} /* WT-REQUIREDS */
static object  LnkTLI299(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[299],&LnkLI299,ap);} /* WT-COMMENT */
static object  LnkTLI298(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[298],&LnkLI298,2,ap);} /* ADD-DEBUG-INFO */
static object  LnkTLI297(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[297],&LnkLI297,1,ap);} /* WT-DOWNWARD-CLOSURE-MACRO */
static LnkT296(){ call_or_link(VV[296],&Lnk296);} /* T3DEFUN-AUX */
static int  LnkTLI295(va_alist)va_dcl{va_list ap;va_start(ap);return(int )call_proc(VV[295],&LnkLI295,258,ap);} /* ANALYZE-REGS */
static LnkT294(){ call_or_link(VV[294],&Lnk294);} /* FIXNUMP */
static object  LnkTLI293(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[293],&LnkLI293,1,ap);} /* VOLATILE */
static object  LnkTLI292(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[292],&LnkLI292,1,ap);} /* MAXARGS */
static object  LnkTLI291(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[291],&LnkLI291,1,ap);} /* VARARG-P */
static object  LnkTLI290(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[290],&LnkLI290,3,ap);} /* WT-IF-PROCLAIMED */
static int  LnkTLI289(va_alist)va_dcl{va_list ap;va_start(ap);return(int )call_proc(VV[289],&LnkLI289,258,ap);} /* PROCLAIMED-ARGD */
static object  LnkTLI288(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[288],&LnkLI288,2,ap);} /* ADD-ADDRESS */
static object  LnkTLI287(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[287],&LnkLI287,ap);} /* ADD-INIT */
static object  LnkTLI286(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[286],&LnkLI286,ap);} /* FAST-LINK-PROCLAIMED-TYPE-P */
static object  LnkTLI285(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[285],&LnkLI285,2,ap);} /* SHIFT<< */
static int  LnkTLI284(va_alist)va_dcl{va_list ap;va_start(ap);return(int )call_proc(VV[284],&LnkLI284,257,ap);} /* F-TYPE */
static LnkT283(){ call_or_link(VV[283],&Lnk283);} /* SUBTYPEP */
static LnkT282(){ call_or_link(VV[282],&Lnk282);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI281(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[281],&LnkLI281,ap);} /* MAKE-ARRAY */
static object  LnkTLI280(){return call_proc0(VV[280],&LnkLI280);} /* ADD-LOAD-TIME-SHARP-COMMA */
static object  LnkTLI279(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[279],&LnkLI279,2,ap);} /* MAKE-INLINE-STRING */
static object  LnkTLI278(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[278],&LnkLI278,2,ap);} /* TYPE-AND */
static object  LnkTLI277(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[277],&LnkLI277,2,ap);} /* CMPFIX-ARGS */
static object  LnkTLI276(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[276],&LnkLI276,1,ap);} /* PROCLAIM */
static object  LnkTLI275(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[275],&LnkLI275,1,ap);} /* CHECK-DOWNWARD */
static object  LnkTLI274(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[274],&LnkLI274,ap);} /* C1LAMBDA-EXPR */
static object  LnkTLI273(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[273],&LnkLI273,1,ap);} /* T1PROGN */
static object  LnkTLI270(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[270],&LnkLI270,3,ap);} /* TOO-FEW-ARGS */
static LnkT269(){ call_or_link(VV[269],&Lnk269);} /* CMP-EVAL */
static object  LnkTLI268(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[268],&LnkLI268,1,ap);} /* REP-TYPE */
static LnkT267(){ call_or_link(VV[267],&Lnk267);} /* WT-DATA-FILE */
static object  LnkTLI266(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[266],&LnkLI266,1,ap);} /* PUSH-DATA-INCF */
static object  LnkTLI265(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[265],&LnkLI265,1,ap);} /* WT-H1 */
static object  LnkTLI264(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[264],&LnkLI264,1,ap);} /* WT-FUNCTION-LINK */
static LnkT263(){ call_or_link(VV[263],&Lnk263);} /* WT-GLOBAL-ENTRY */
static LnkT245(){ call_or_link(VV[245],&Lnk245);} /* T3LOCAL-FUN */
static object  LnkTLI262(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[262],&LnkLI262,1,ap);} /* WT1 */
static object  LnkTLI261(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[261],&LnkLI261,3,ap);} /* CMP-EXPAND-MACRO */
static object  LnkTLI260(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[260],&LnkLI260,1,ap);} /* T1ORDINARY */
static LnkT259(){ call_or_link(VV[259],&Lnk259);} /* T1EXPR */
static object  LnkTLI258(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[258],&LnkLI258,1,ap);} /* CMP-MACROEXPAND-1 */
static object  LnkTLI257(){return call_proc0(VV[257],&LnkLI257);} /* PRINT-CURRENT-FORM */
static object  LnkTLI256(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[256],&LnkLI256,1,ap);} /* WT-DATA-PACKAGE-OPERATION */
static object  LnkTLI255(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[255],&LnkLI255,2,ap);} /* MAYBE-EVAL */
static object  LnkTLI254(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[254],&LnkLI254,ap);} /* CMPWARN */
static object  LnkTLI253(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[253],&LnkLI253,ap);} /* CMPERR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

