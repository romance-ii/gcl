
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
	V5= (VFUN_NARGS=1,(*(LnkLI266))(VV[4]));
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
	(void)((VFUN_NARGS=2,(*(LnkLI267))(VV[7],(V1))));
	goto T16;
T16:;
	{object V6;
	base[3]= (V2);
	vs_top=(vs_base=base+3)+1;
	Lmacro_function();
	vs_top=sup;
	V4= vs_base[0];
	if(((V4))==Cnil){
	goto T21;}
	base[3]= cdr((V1));
	vs_top=(vs_base=base+3)+1;
	Lcopy_list();
	vs_top=sup;
	V7= vs_base[0];
	V6= (*(LnkLI268))((V4),(V2),V7);
	goto T19;
	goto T21;
T21:;
	V6= (V1);
	goto T19;
T19:;
	(void)((*(LnkLI269))(Ct,(V6)));
	V8= (*(LnkLI270))((V6));
	frs_pop();
	base[3]= V8;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;}
	goto T14;
T14:;
	V4= get((V2),VV[8],Cnil);
	if(((V4))==Cnil){
	goto T29;}
	if((symbol_value(VV[9]))==Cnil){
	goto T32;}
	(void)((*(LnkLI271))());
	goto T32;
T32:;
	base[3]= (V3);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event((V4));
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;
	goto T29;
T29:;
	if((get((V2),VV[10],Cnil))==Cnil){
	goto T37;}
	if((symbol_value(VV[9]))==Cnil){
	goto T39;}
	(void)((*(LnkLI271))());
	goto T39;
T39:;
	base[3]= (*(LnkLI272))((V1));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk273)();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;
	goto T37;
T37:;
	if((get((V2),VV[11],Cnil))==Cnil){
	goto T44;}
	V9= (*(LnkLI274))((V1));
	frs_pop();
	base[3]= V9;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T44;
T44:;
	base[3]= (V2);
	vs_top=(vs_base=base+3)+1;
	Lmacro_function();
	vs_top=sup;
	V4= vs_base[0];
	if(((V4))==Cnil){
	goto T47;}
	{object V10;
	base[3]= cdr((V1));
	vs_top=(vs_base=base+3)+1;
	Lcopy_list();
	vs_top=sup;
	V11= vs_base[0];
	V10= (*(LnkLI268))((V4),(V2),V11);
	base[3]= (V10);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk273)();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;}
	goto T47;
T47:;
	V12= (*(LnkLI274))((V1));
	frs_pop();
	base[3]= V12;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T8;
T8:;
	if(!(type_of((V2))==t_cons)){
	goto T56;}
	V13= (*(LnkLI274))((V1));
	frs_pop();
	base[3]= V13;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T56;
T56:;
	V14= (VFUN_NARGS=2,(*(LnkLI266))(VV[12],(V2)));
	frs_pop();
	base[3]= V14;
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
/*	function definition for DECLARATION-TYPE	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	{object V15;
	check_arg(1);
	V15=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(equal((V15),VV[13]))){
	goto T59;}
	base[1]= VV[14];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T59;
T59:;
	if(!(equal((V15),VV[15]))){
	goto T62;}
	base[1]= VV[16];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T62;
T62:;
	base[1]= (V15);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function CTOP-WRITE	*/

static object LI3(V17)

object V17;
{	 VMB3 VMS3 VMV3
	bds_check;
	goto TTL;
TTL:;
	{object V18;
	V18= Cnil;
	bds_bind(VV[18],Cnil);
	bds_bind(VV[19],Cnil);
	bds_bind(VV[21],VV[20]);
	bds_bind(VV[22],Cnil);
	bds_bind(VV[23],small_fixnum(0));
	bds_bind(VV[24],Cnil);
	bds_bind(VV[0],Cnil);
	bds_bind(VV[17],Cnil);
	setq(VV[25],reverse(symbol_value(VV[25])));
	princ_str("\nvoid init_",VV[26]);
	(void)((*(LnkLI275))((V17)));
	princ_str("(){",VV[26]);
	princ_str("do_init(VV);",VV[26]);
	princ_char(125,VV[26]);
	{object V19;
	V19= symbol_value(VV[25]);
	bds_bind(VV[0],car((V19)));
	goto T77;
T77:;
	if(!(endp_prop((V19)))){
	goto T78;}
	bds_unwind1;
	goto T73;
	goto T78;
T78:;
	setq(VV[1],Ct);
	(VV[17]->s.s_dbind)= Cnil;
	V18= get(car((VV[0]->s.s_dbind)),VV[27],Cnil);
	if(((V18))==Cnil){
	goto T86;}
	base[9]= (V18);
	{object V20;
	V20= cdr((VV[0]->s.s_dbind));
	 vs_top=base+10;
	 while(!endp(V20))
	 {vs_push(car(V20));V20=cdr(V20);}
	vs_base=base+10;}
	super_funcall_no_event(base[9]);
	vs_top=sup;
	goto T86;
T86:;
	V19= cdr((V19));
	(VV[0]->s.s_dbind)= car((V19));
	goto T77;}
	goto T73;
T73:;
	{object V21;
	V21= symbol_value(VV[25]);
	bds_bind(VV[0],car((V21)));
	goto T101;
T101:;
	if(!(endp_prop((V21)))){
	goto T102;}
	bds_unwind1;
	goto T97;
	goto T102;
T102:;
	setq(VV[1],Ct);
	(VV[17]->s.s_dbind)= Cnil;
	V18= get(car((VV[0]->s.s_dbind)),VV[28],Cnil);
	if(((V18))==Cnil){
	goto T110;}
	base[9]= (V18);
	{object V22;
	V22= cdr((VV[0]->s.s_dbind));
	 vs_top=base+10;
	 while(!endp(V22))
	 {vs_push(car(V22));V22=cdr(V22);}
	vs_base=base+10;}
	super_funcall_no_event(base[9]);
	vs_top=sup;
	goto T110;
T110:;
	V21= cdr((V21));
	(VV[0]->s.s_dbind)= car((V21));
	goto T101;}
	goto T97;
T97:;
	{object V23;
	V23= Cnil;
	goto T123;
T123:;
	if(!(endp_prop(symbol_value(VV[29])))){
	goto T125;}
	goto T121;
	goto T125;
T125:;
	V23= car(symbol_value(VV[29]));
	{object V24;
	V24= car(symbol_value(VV[29]));
	setq(VV[29],cdr(symbol_value(VV[29])));}
	(VV[17]->s.s_dbind)= Cnil;
	{object V25;
	V25= (V23);
	 vs_top=base+8;
	 while(!endp(V25))
	 {vs_push(car(V25));V25=cdr(V25);}
	vs_base=base+8;}
	(void) (*Lnk258)();
	vs_top=sup;
	goto T123;}
	goto T121;
T121:;
	{object V26;
	object V27;
	V26= symbol_value(VV[30]);
	V27= car((V26));
	goto T142;
T142:;
	if(!(endp_prop((V26)))){
	goto T143;}
	goto T138;
	goto T143;
T143:;
	(VV[17]->s.s_dbind)= Cnil;
	{object V28;
	V28= (V27);
	 vs_top=base+9;
	 while(!endp(V28))
	 {vs_push(car(V28));V28=cdr(V28);}
	vs_base=base+9;}
	(void) (*Lnk276)();
	vs_top=sup;
	V26= cdr((V26));
	V27= car((V26));
	goto T142;}
	goto T138;
T138:;
	{object V29;
	object V30;
	V29= (VV[18]->s.s_dbind);
	V30= car((V29));
	goto T160;
T160:;
	if(!(endp_prop((V29)))){
	goto T161;}
	goto T156;
	goto T161;
T161:;
	(VV[17]->s.s_dbind)= Cnil;
	(void)((*(LnkLI277))((V30)));
	V29= cdr((V29));
	V30= car((V29));
	goto T160;}
	goto T156;
T156:;
	{object V31;
	object V32;
	V31= symbol_value(VV[31]);
	V32= car((V31));
	goto T177;
T177:;
	if(!(endp_prop((V31)))){
	goto T178;}
	goto T173;
	goto T178;
T178:;
	princ_str("\nstatic void LC",VV[32]);
	V33= structure_ref((V32),VV[33],3);
	(void)((*(LnkLI278))(/* INLINE-ARGS */V33));
	princ_str("();",VV[32]);
	V31= cdr((V31));
	V32= car((V31));
	goto T177;}
	goto T173;
T173:;
	{object V34;
	object V35;
	V34= symbol_value(VV[34]);
	V35= car((V34));
	goto T195;
T195:;
	if(!(endp_prop((V34)))){
	goto T196;}
	goto T191;
	goto T196;
T196:;
	princ_str("\n#define VM",VV[32]);
	(void)((*(LnkLI278))(car((V35))));
	princ_char(32,VV[32]);
	(void)((*(LnkLI278))(cdr((V35))));
	V34= cdr((V34));
	V35= car((V34));
	goto T195;}
	goto T191;
T191:;
	(void)((*(LnkLI279))(Cnil));
	{object V36;
	object V37;
	base[9]= (VV[23]->s.s_dbind);
	base[10]= symbol_value(VV[35]);
	base[11]= small_fixnum(1);
	vs_top=(vs_base=base+9)+3;
	Lminus();
	vs_top=sup;
	V36= vs_base[0];
	V37= small_fixnum(0);
	goto T218;
T218:;
	if(!(number_compare((V37),(V36))>=0)){
	goto T219;}
	goto T211;
	goto T219;
T219:;
	(void)((*(LnkLI279))(Cnil));
	V37= one_plus((V37));
	goto T218;}
	goto T211;
T211:;
	princ_str("\nstatic char * VVi[",VV[32]);
	V38= number_plus(small_fixnum(1),symbol_value(VV[35]));
	(void)((*(LnkLI278))(/* INLINE-ARGS */V38));
	princ_str("]={",VV[32]);
	princ_str("\n#define Cdata VV[",VV[32]);
	(void)((*(LnkLI278))(symbol_value(VV[35])));
	princ_char(93,VV[32]);
	if((VV[22]->s.s_dbind)!=Cnil){
	goto T235;}
	princ_char(10,VV[32]);
	(void)((*(LnkLI278))(small_fixnum(0)));
	goto T235;
T235:;
	{register object V39;
	V39= nreverse((VV[22]->s.s_dbind));
	goto T241;
T241:;
	if(((V39))!=Cnil){
	goto T242;}
	princ_str("\n};",VV[32]);
	goto T238;
	goto T242;
T242:;
	princ_str("\n(char *)(",VV[32]);
	(void)((*(LnkLI278))(caar((V39))));
	(void)((*(LnkLI278))(cadar((V39))));
	if((cdr((V39)))==Cnil){
	goto T254;}
	V40= VV[36];
	goto T252;
	goto T254;
T254:;
	V40= VV[37];
	goto T252;
T252:;
	(void)((*(LnkLI278))(V40));
	V39= cdr((V39));
	goto T241;}
	goto T238;
T238:;
	princ_str("\n#define VV ((object *)VVi)",VV[32]);
	vs_base=vs_top;
	(void) (*Lnk280)();
	vs_top=sup;
	{object V41;
	object V42;
	V41= (VV[18]->s.s_dbind);
	V42= car((V41));
	goto T265;
T265:;
	if(!(endp_prop((V41)))){
	goto T266;}
	{object V43 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR3(V43)}
	goto T266;
T266:;
	{register object V44;
	register object V45;
	object V46;
	register object V47;
	V44= cadr((V42));
	V45= caddr((V42));
	V46= cadddr((V42));
	V47= Cnil;
	if(!(((V45))==(VV[38]))){
	goto T276;}
	princ_str("\nstatic object *Lclptr",VV[32]);
	(void)((*(LnkLI278))((V44)));
	princ_char(59,VV[32]);
	V47= VV[39];
	goto T274;
	goto T276;
T276:;
	if(((V45))==Cnil){
	goto T285;}
	V47= (*(LnkLI281))((V45));
	goto T283;
	goto T285;
T285:;
	V47= VV[40];
	goto T283;
T283:;
	goto T274;
T274:;
	if(((V45))==Cnil){
	goto T288;}
	if(((V45))==(VV[38])){
	goto T288;}
	if(((V46))!=Cnil){
	goto T287;}
	if((Ct)==((V45))){
	goto T288;}
	goto T287;
T287:;
	princ_str("\nstatic ",VV[32]);
	base[9]= (V47);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk282)();
	vs_top=sup;
	V48= vs_base[0];
	(void)((*(LnkLI278))(V48));
	princ_str(" LnkT",VV[32]);
	(void)((*(LnkLI278))((V44)));
	princ_str("(object,...);",VV[32]);
	princ_str("\nstatic ",VV[32]);
	base[9]= (V47);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk282)();
	vs_top=sup;
	V49= vs_base[0];
	(void)((*(LnkLI278))(V49));
	princ_str(" (*Lnk",VV[32]);
	(void)((*(LnkLI278))((V44)));
	princ_str(")() = (",VV[32]);
	base[9]= (V47);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk282)();
	vs_top=sup;
	V50= vs_base[0];
	(void)((*(LnkLI278))(V50));
	princ_str("(*)()) LnkT",VV[32]);
	(void)((*(LnkLI278))((V44)));
	princ_char(59,VV[32]);
	goto T270;
	goto T288;
T288:;
	princ_str("\nstatic ",VV[32]);
	base[9]= (V47);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk282)();
	vs_top=sup;
	V51= vs_base[0];
	(void)((*(LnkLI278))(V51));
	princ_str(" LnkT",VV[32]);
	(void)((*(LnkLI278))((V44)));
	princ_str("();",VV[32]);
	princ_str("\nstatic ",VV[32]);
	base[9]= (V47);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk282)();
	vs_top=sup;
	V52= vs_base[0];
	(void)((*(LnkLI278))(V52));
	princ_str(" (*Lnk",VV[32]);
	(void)((*(LnkLI278))((V44)));
	princ_str(")() = LnkT",VV[32]);
	(void)((*(LnkLI278))((V44)));
	princ_char(59,VV[32]);}
	goto T270;
T270:;
	V41= cdr((V41));
	V42= car((V41));
	goto T265;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAYBE-EVAL	*/

static object LI4(V55,V56)

object V55;register object V56;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if((V55)!=Cnil){
	goto T339;}
	if(type_of(car((V56)))==t_symbol){
	goto T340;}
	goto T339;
	goto T340;
T340:;
	V55= get(car((V56)),VV[41],Cnil);
	goto T339;
T339:;
	if(((V55))==Cnil){
	goto T345;}
	if((VV[42])==(symbol_value(VV[43]))){
	goto T343;}
	goto T345;
T345:;
	if(!(type_of(symbol_value(VV[43]))==t_cons)){
	goto T344;}
	{register object x= VV[44],V57= symbol_value(VV[43]);
	while(!endp(V57))
	if(eql(x,V57->c.c_car)){
	goto T351;
	}else V57=V57->c.c_cdr;
	goto T344;}
	goto T351;
T351:;
	goto T343;
T343:;
	if(((V56))==Cnil){
	goto T352;}
	base[0]= (V56);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk283)();
	vs_top=sup;
	goto T352;
T352:;
	{object V58 = Ct;
	VMR4(V58)}
	goto T344;
T344:;
	{object V59 = Cnil;
	VMR4(V59)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for T1EVAL-WHEN	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	bds_check;
	{register object V60;
	check_arg(1);
	V60=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V61;
	register object V62;
	V61= Cnil;
	V62= Cnil;
	if(!(endp_prop((V60)))){
	goto T358;}
	(void)((*(LnkLI284))(VV[45],small_fixnum(1),small_fixnum(0)));
	goto T358;
T358:;
	{register object V63;
	register object V64;
	V63= car((V60));
	V64= car((V63));
	goto T365;
T365:;
	if(!(endp_prop((V63)))){
	goto T366;}
	goto T361;
	goto T366;
T366:;
	{object V65= (V64);
	if((V65!= VV[285]))goto T371;
	V61= Ct;
	goto T370;
	goto T371;
T371:;
	if((V65!= VV[286]))goto T373;
	V61= Ct;
	goto T370;
	goto T373;
T373:;
	if((V65!= VV[44]))goto T375;
	V62= Ct;
	goto T370;
	goto T375;
T375:;
	if((V65!= VV[287]))goto T377;
	V62= Ct;
	goto T370;
	goto T377;
T377:;
	if((V65!= VV[288]))goto T379;
	goto T370;
	goto T379;
T379:;
	if((V65!= VV[289]))goto T380;
	goto T370;
	goto T380;
T380:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[46],(V64))));}
	goto T370;
T370:;
	V63= cdr((V63));
	V64= car((V63));
	goto T365;}
	goto T361;
T361:;
	base[1]= car((V60));
	bds_bind(VV[43],base[1]);
	if(((V61))==Cnil){
	goto T388;}
	base[2]= (*(LnkLI290))(cdr((V60)));
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T388;
T388:;
	if(((V62))==Cnil){
	goto T391;}
	base[2]= make_cons(VV[47],cdr((V60)));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk283)();
	bds_unwind1;
	return;
	goto T391;
T391:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;}
	}
}
/*	local entry for function T1PROGN	*/

static object LI6(V67)

object V67;
{	 VMB6 VMS6 VMV6
	bds_check;
	goto TTL;
TTL:;
	if(!(equal(car((V67)),VV[48]))){
	goto T395;}
	bds_bind(VV[49],Ct);
	{object V68 = (*(LnkLI290))(cdr((V67)));
	bds_unwind1;
	VMR6(V68)}
	goto T395;
T395:;
	{register object V69;
	register object V70;
	V69= (V67);
	V70= car((V69));
	goto T400;
T400:;
	if(!(endp_prop((V69)))){
	goto T401;}
	{object V71 = Cnil;
	VMR6(V71)}
	goto T401;
T401:;
	base[1]= (V70);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk273)();
	vs_top=sup;
	V69= cdr((V69));
	V70= car((V69));
	goto T400;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CMPFIX-ARGS	*/

static object LI7(V74,V75)

object V74;object V75;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V76;
	register object V77;
	V76= Cnil;
	base[1]= cadr((V74));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V77= vs_base[0];
	{register object V78;
	register object V79;
	V78= (V75);
	V79= car((V78));
	goto T419;
T419:;
	if(!(endp_prop((V78)))){
	goto T420;}
	goto T415;
	goto T420;
T420:;
	{register object x= car((V79)),V80= (V77);
	while(!endp(V80))
	if(eql(x,V80->c.c_car)){
	V76= V80;
	goto T425;
	}else V80=V80->c.c_cdr;
	V76= Cnil;}
	goto T425;
T425:;
	if((V76)==Cnil){
	goto T426;}
	{register object V81;
	register object V82;
	V81= (V76);
	V82= cadr((V79));
	if(type_of((V81))!=t_cons)FEwrong_type_argument(Scons,(V81));
	((V81))->c.c_car = (V82);}
	goto T426;
T426:;
	V78= cdr((V78));
	V79= car((V78));
	goto T419;}
	goto T415;
T415:;
	{register object x= VV[50],V83= (V77);
	while(!endp(V83))
	if(eql(x,V83->c.c_car)){
	V76= V83;
	goto T439;
	}else V83=V83->c.c_cdr;
	V76= Cnil;}
	goto T439;
T439:;
	if(((V76))==Cnil){
	goto T437;}
	{object V85;
	V85= append((V75),cdr((V76)));
	if(type_of(V76)!=t_cons)FEwrong_type_argument(Scons,V76);
	(V76)->c.c_cdr = (V85);
	goto T435;}
	goto T437;
T437:;
	V86= make_cons(VV[50],(V75));
	V77= append((V77),/* INLINE-ARGS */V86);
	goto T435;
T435:;
	{object V87 = listA(3,car((V74)),(V77),cddr((V74)));
	VMR7(V87)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFUN	*/

static object LI8(V89)

object V89;
{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	{object V90;
	V90= symbol_value(VV[51]);
	bds_bind(VV[53],Cnil);
	if(endp_prop((V89))){
	goto T445;}
	if(!(endp_prop(cdr((V89))))){
	goto T444;}
	goto T445;
T445:;
	V92 = make_fixnum((long)length((V89)));
	(void)((*(LnkLI284))(VV[52],small_fixnum(2),V92));
	goto T444;
T444:;
	if(type_of(car((V89)))==t_symbol){
	goto T449;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[54],car((V89)))));
	goto T449;
T449:;
	V93= make_cons(VV[52],(V89));
	(void)((*(LnkLI269))(Cnil,/* INLINE-ARGS */V93));
	goto T454;
T454:;
	setq(VV[6],Ct);
	setq(VV[55],Cnil);
	{register object V94;
	object V95;
	object V96;
	register object V97;{object V98;
	V98= get(car((V89)),VV[61],Cnil);
	if(V98==Cnil)goto T461;
	V95= V98;
	goto T460;
	goto T461;
T461:;}
	setq(VV[62],number_plus(symbol_value(VV[62]),small_fixnum(1)));
	V95= symbol_value(VV[62]);
	goto T460;
T460:;
	V97= car((V89));
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[59],Cnil);
	V94= Cnil;
	bds_bind(VV[60],Cnil);
	V96= Cnil;
	V94= (VFUN_NARGS=2,(*(LnkLI291))(cdr((V89)),(V97)));
	if(!(eql((V90),symbol_value(VV[51])))){
	goto T468;}
	goto T467;
	goto T468;
T468:;
	(void)(structure_set(cadr((V94)),VV[63],4,Ct));
	goto T467;
T467:;
	V99= structure_ref(cadr((V94)),VV[63],1);
	(void)((*(LnkLI292))(/* INLINE-ARGS */V99));
	if((get((V97),VV[64],Cnil))==Cnil){
	goto T471;}
	{object V100;
	V100= make_fixnum((long)length(car(caddr((V94)))));
	(void)(sputprop((V97),VV[64],(V100)));
	base[6]= (V100);
	base[7]= VV[66];
	base[8]= Ct;
	vs_top=(vs_base=base+6)+3;
	Lmake_list();
	vs_top=sup;
	V101= vs_base[0];
	V102= list(4,VV[65],(V97),V101,Ct);
	(void)((*(LnkLI293))(/* INLINE-ARGS */V102));}
	goto T471;
T471:;
	if((get((V97),VV[67],Cnil))==Cnil){
	goto T482;}
	{object V103;
	register object V104;
	V103= caddr((V94));
	V104= Cnil;
	if((cadr((V103)))==Cnil){
	goto T487;}
	goto T482;
	goto T487;
T487:;
	if((caddr((V103)))==Cnil){
	goto T489;}
	goto T482;
	goto T489;
T489:;
	if((cadddr((V103)))==Cnil){
	goto T491;}
	goto T482;
	goto T491;
T491:;
	if(((long)length(car((V103))))<(64)){
	goto T493;}
	goto T482;
	goto T493;
T493:;
	{register object V105;
	register object V106;
	object V107;
	V105= car((V103));
	V106= get((V97),VV[68],Cnil);
	V107= Cnil;
	goto T500;
T500:;
	if(!(endp_prop((V105)))){
	goto T501;}
	if(endp_prop((V106))){
	goto T504;}
	goto T496;
	goto T504;
T504:;
	if(((V104))==Cnil){
	goto T507;}
	V89= (*(LnkLI294))((V89),(V104));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T454;
	goto T507;
T507:;
	if(((V107))==Cnil){
	goto T495;}
	goto T496;
	goto T501;
T501:;
	{register object V108;
	V108= car((V105));
	if(!(equal(car((V106)),VV[69]))){
	goto T514;}
	goto T496;
	goto T514;
T514:;
	V109= structure_ref((V108),VV[70],1);
	if((/* INLINE-ARGS */V109)==(VV[71])){
	goto T520;}
	V110= structure_ref((V108),VV[70],1);
	if(!((/* INLINE-ARGS */V110)==(VV[72]))){
	goto T519;}
	if(!((car((V106)))==(Ct))){
	goto T519;}
	goto T520;
T520:;
	if((structure_ref((V108),VV[70],3))!=Cnil){
	goto T519;}
	V111= structure_ref((V108),VV[70],4);
	if(!((/* INLINE-ARGS */V111)==(VV[73]))){
	goto T518;}
	goto T519;
T519:;
	{object V112;
	V113= structure_ref((V108),VV[70],0);
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V114= vs_base[0];
	V112= list(2,/* INLINE-ARGS */V113,V114);
	V104= make_cons((V112),(V104));}
	goto T518;
T518:;
	V115= car((V106));
	V116= structure_ref((V108),VV[70],5);
	if(((*(LnkLI295))(/* INLINE-ARGS */V115,/* INLINE-ARGS */V116))==Cnil){
	goto T517;}
	{register object x= car((V106)),V117= VV[74];
	while(!endp(V117))
	if(eql(x,V117->c.c_car)){
	goto T512;
	}else V117=V117->c.c_cdr;}
	V118= structure_ref((V108),VV[70],4);
	if((/* INLINE-ARGS */V118)==(VV[75])){
	goto T512;}
	if((symbol_value(VV[76]))!=Cnil){
	goto T512;}
	V120= structure_ref(cadr((V94)),VV[63],0);
	{register object x= (V108),V119= /* INLINE-ARGS */V120;
	while(!endp(V119))
	if(eql(x,V119->c.c_car)){
	goto T542;
	}else V119=V119->c.c_cdr;
	goto T512;}
	goto T542;
T542:;
	goto T517;
T517:;
	if(((V104))!=Cnil){
	goto T543;}
	V121= structure_ref((V108),VV[70],0);
	(void)((VFUN_NARGS=3,(*(LnkLI267))(VV[77],(V97),/* INLINE-ARGS */V121)));
	goto T543;
T543:;
	V107= Ct;}
	goto T512;
T512:;
	V105= cdr((V105));
	V106= cdr((V106));
	goto T500;}
	goto T496;
T496:;
	goto T482;
	goto T495;
T495:;
	if(!(type_of((V95))==t_fixnum||
type_of((V95))==t_bignum||
type_of((V95))==t_ratio||
type_of((V95))==t_shortfloat||
type_of((V95))==t_longfloat||
type_of((V95))==t_complex)){
	goto T482;}}
	{object V122;
	V123= get((V97),VV[68],Cnil);
	V124= get((V97),VV[78],Cnil);
	V125= get((V97),VV[68],Cnil);
	V122= list(5,(V97),V123,V124,small_fixnum(3),(*(LnkLI296))((V95),V125));
	setq(VV[79],make_cons((V122),symbol_value(VV[79])));
	goto T480;}
	goto T482;
T482:;
	{object V126;
	V127= get((V97),VV[78],Cnil);
	V126= ((V127)==(Ct)?Ct:Cnil);
	if(((V126))==Cnil){
	goto T480;}}
	goto T480;
T480:;
	if((cadddr((V94)))==Cnil){
	goto T560;}
	V96= cadddr((V94));
	goto T560;
T560:;
	(void)((*(LnkLI297))());
	{object V128;
	V128= list(6,VV[52],(V97),(V95),(V94),(V96),(VV[60]->s.s_dbind));
	setq(VV[25],make_cons((V128),symbol_value(VV[25])));}
	{object V129;
	V129= make_cons((V97),(V95));
	setq(VV[80],make_cons((V129),symbol_value(VV[80])));
	V130= symbol_value(VV[80]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}}
	{object V131 = Cnil;
	bds_unwind1;
	VMR8(V131)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-INLINE-STRING	*/

static object LI9(V134,V135)

object V134;object V135;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	if(((V135))!=Cnil){
	goto T571;}
	base[0]= Cnil;
	base[1]= VV[81];
	base[2]= (V134);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V136 = vs_base[0];
	VMR9(V136)}
	goto T571;
T571:;
	{register object V137;
	V137= (VFUN_NARGS=7,(*(LnkLI298))(small_fixnum(100),VV[82],VV[83],VV[84],small_fixnum(0),VV[85],Ct));
	base[0]= (V137);
	base[1]= VV[86];
	base[2]= (V134);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{register object V138;
	register long V139;
	V139= 0;
	V138= (V135);
	goto T584;
T584:;
	if(!(endp_prop(cdr((V138))))){
	goto T585;}
	base[0]= (V137);
	base[1]= VV[87];
	base[2]= make_fixnum(V139);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T581;
	goto T585;
T585:;
	base[0]= (V137);
	base[1]= VV[88];
	base[2]= make_fixnum(V139);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V138= cdr((V138));
	V139= (long)(V139)+1;
	goto T584;}
	goto T581;
T581:;
	{object V140 = (V137);
	VMR9(V140)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CS-PUSH	*/

static object LI10(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V141;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T600;
	else {
	V141= first;}
	--narg; goto T601;
	goto T600;
T600:;
	V141= Cnil;
	goto T601;
T601:;
	{object V142;
	setq(VV[89],number_plus(symbol_value(VV[89]),small_fixnum(1)));
	V142= symbol_value(VV[89]);
	{object V143;
	if(((V141))==Cnil){
	goto T608;}
	V143= make_cons((V141),(V142));
	goto T606;
	goto T608;
T608:;
	V143= (V142);
	goto T606;
T606:;
	setq(VV[19],make_cons((V143),symbol_value(VV[19])));}
	{object V144 = (V142);
	VMR10(V144)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function F-TYPE	*/

static object LI11(V146)

register object V146;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	base[0]= (V146);
	base[1]= VV[70];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk299)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T611;}
	V146= structure_ref((V146),VV[70],5);
	goto T611;
T611:;
	if(((V146))==Cnil){
	goto T618;}
	base[0]= (V146);
	base[1]= VV[90];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk300)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T618;}
	{long V147 = 1;
	VMR11((object)V147)}
	goto T618;
T618:;
	{long V148 = 0;
	VMR11((object)V148)}
	base[0]=base[0];
}
/*	local entry for function PROCLAIMED-ARGD	*/

static object LI12(V151,V152)

register object V151;object V152;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{register long V153;
	register long V154;
	register object V155;
	register object V156;
	V153= (long)length((V151));
	V154= 8;
	V155= make_fixnum((long)(*(LnkLI301))((V152)));
	V156= Ct;
	goto T628;
T628:;
	if(eql(small_fixnum(0),(V155))){
	goto T630;}
	V153= (long)(V153)+((long)((fix((V155))) << (V154)));
	goto T630;
T630:;
	if(((V156))==Cnil){
	goto T634;}
	V154= 10;
	V156= Cnil;
	goto T634;
T634:;
	if(((V151))!=Cnil){
	goto T640;}
	{long V157 = V153;
	VMR12((object)V157)}
	goto T640;
T640:;
	V154= (long)(V154)+(2);
	{register object V159;
	V159= car((V151));
	V151= cdr((V151));
	V158= (V159);}
	V155= make_fixnum((long)(*(LnkLI301))(V158));
	goto T628;}
}
/*	local entry for function WT-IF-PROCLAIMED	*/

static object LI13(V163,V164,V165)

register object V163;object V164;object V165;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	if(((VFUN_NARGS=1,(*(LnkLI303))((V163))))==Cnil){
	goto T652;}
	{register object x= (V163),V166= symbol_value(VV[79]);
	while(!endp(V166))
	if(type_of(V166->c.c_car)==t_cons &&eql(x,V166->c.c_car->c.c_car)){
	goto T656;
	}else V166=V166->c.c_cdr;
	goto T655;}
	goto T656;
T656:;
	V167= list(2,VV[92],(V163));
	V168= (*(LnkLI305))(VV[93],(V164));
	V169= get((V163),VV[68],Cnil);
	V170= get((V163),VV[78],Cnil);
	V171 = make_fixnum((long)(*(LnkLI306))(V169,V170));
	V172= list(4,VV[91],/* INLINE-ARGS */V167,/* INLINE-ARGS */V168,V171);
	(void)((VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V172)));
	{object V173 = Ct;
	VMR13(V173)}
	goto T655;
T655:;
	{register object V174;
	register object V175;
	object V176;
	V174= make_fixnum((long)length(car(caddr((V165)))));
	V177= get((V163),VV[68],Cnil);
	V175= make_fixnum((long)length(V177));
	V179= get((V163),VV[68],Cnil);
	{register object x= VV[69],V178= V179;
	while(!endp(V178))
	if(eql(x,V178->c.c_car)){
	V176= V178;
	goto T664;
	}else V178=V178->c.c_cdr;
	V176= Cnil;}
	goto T664;
T664:;
	if(((V176))==Cnil){
	goto T667;}
	base[0]= (V174);
	vs_top=(vs_base=base+0)+1;
	Lmonotonically_nonincreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T669;}
	goto T660;
	goto T669;
T669:;{object V180;
	V181 = make_fixnum((long)length((V176)));
	V180= number_minus((V175),V181);
	if(V180==Cnil)goto T672;
	goto T660;
	goto T672;
T672:;}
	V182 = make_fixnum((long)length((V176)));
	V183= number_minus((V175),V182);
	(void)((VFUN_NARGS=4,(*(LnkLI267))(VV[94],(V163),/* INLINE-ARGS */V183,(V174))));
	goto T660;
	goto T667;
T667:;
	if(eql((V174),(V175))){
	goto T675;}
	(void)((VFUN_NARGS=4,(*(LnkLI267))(VV[95],(V163),(V175),(V174))));
	goto T660;
	goto T675;
T675:;
	(void)((VFUN_NARGS=2,(*(LnkLI267))(VV[96],(V163))));}
	goto T660;
T660:;
	{object V184 = Cnil;
	VMR13(V184)}
	goto T652;
T652:;
	{object V185 = Cnil;
	VMR13(V185)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VOLATILE	*/

static object LI14(V187)

object V187;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if((structure_ref((V187),VV[63],4))==Cnil){
	goto T678;}
	{object V188 = VV[97];
	VMR14(V188)}
	goto T678;
T678:;
	{object V189 = VV[98];
	VMR14(V189)}
	return Cnil;
}
/*	local entry for function REGISTER	*/

static object LI15(V191)

object V191;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(!(equal(symbol_value(VV[21]),VV[99]))){
	goto T681;}
	{long V192= fix(structure_ref((V191),VV[70],6));
	if(!((/* INLINE-ARGS */V192)>=(fix(symbol_value(VV[100]))))){
	goto T681;}}
	{object V193 = VV[101];
	VMR15(V193)}
	goto T681;
T681:;
	{object V194 = VV[102];
	VMR15(V194)}
	return Cnil;
}
/*	local entry for function VARARG-P	*/

static object LI16(V196)

object V196;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	V197= get((V196),VV[78],Cnil);
	if(equal(V197,Ct)){
	goto T685;}
	{object V198 = Cnil;
	VMR16(V198)}
	goto T685;
T685:;
	{register object V199;
	V199= get((V196),VV[68],Cnil);
	goto T690;
T690:;
	if(((V199))!=Cnil){
	goto T691;}
	{object V200 = Ct;
	VMR16(V200)}
	goto T691;
T691:;
	if(!(type_of((V199))==t_cons)){
	goto T696;}
	goto T695;
	goto T696;
T696:;
	{object V201 = Cnil;
	VMR16(V201)}
	goto T695;
T695:;
	if(!((car((V199)))==(Ct))){
	goto T699;}
	goto T698;
	goto T699;
T699:;
	if(!((car((V199)))==(VV[69]))){
	goto T701;}
	goto T698;
	goto T701;
T701:;
	{object V202 = Cnil;
	VMR16(V202)}
	goto T698;
T698:;
	V199= cdr((V199));
	goto T690;}
	return Cnil;
}
/*	local entry for function MAXARGS	*/

static object LI17(V204)

register object V204;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if((cadddr((V204)))!=Cnil){
	goto T706;}
	if((caddr((V204)))==Cnil){
	goto T707;}
	goto T706;
T706:;
	{object V205 = small_fixnum(64);
	VMR17(V205)}
	goto T707;
T707:;
	base[0]= make_fixnum((long)length(car((V204))));
	base[1]= make_fixnum((long)length(cadr((V204))));
	V206 = make_fixnum((long)length(car(cddddr((V204)))));
	base[2]= number_times(small_fixnum(2),V206);
	vs_top=(vs_base=base+0)+3;
	Lplus();
	vs_top=sup;
	{object V207 = vs_base[0];
	VMR17(V207)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-ADDRESS	*/

static object LI18(V210,V211)

object V210;object V211;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V212;
	V212= list(2,(V210),(V211));
	setq(VV[22],make_cons((V212),symbol_value(VV[22])));}
	{object V213;
	V213= symbol_value(VV[23]);
	setq(VV[23],number_plus(symbol_value(VV[23]),small_fixnum(1)));
	{object V214 = (V213);
	VMR18(V214)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFUN	*/

static object LI19(V220,V221,V222,V223,V224)

register object V220;register object V221;register object V222;object V223;object V224;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	if((get((V220),VV[103],Cnil))==Cnil){
	goto T719;}
	{object V225 = Cnil;
	VMR19(V225)}
	goto T719;
T719:;
	if(((V223))==Cnil){
	goto T722;}
	V226= list(4,VV[104],list(2,VV[92],(V220)),(V223),VV[105]);
	(void)((VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V226)));
	goto T722;
T722:;
	{object V227;
	V227= (*(LnkLI307))((V220),(V221),(V222));
	if(((V227))==Cnil){
	goto T728;}
	goto T725;
	goto T728;
T728:;
	if(((*(LnkLI308))((V220)))==Cnil){
	goto T731;}
	{object V228;
	V228= cadddr(caddr((V222)));
	if(((V228))==Cnil){
	goto T735;}
	V229= list(2,VV[92],(V220));
	V230= (*(LnkLI305))(VV[107],(V221));
	V231 = make_fixnum((long)length(car(caddr((V222)))));
	V232= (*(LnkLI309))(caddr((V222)));
	V233= (*(LnkLI302))(/* INLINE-ARGS */V232,small_fixnum(8));
	V234= number_plus(V231,/* INLINE-ARGS */V233);
	base[0]= Cnil;
	base[1]= VV[108];
	base[2]= (V221);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V235= vs_base[0];
	V236= list(5,VV[106],/* INLINE-ARGS */V229,/* INLINE-ARGS */V230,/* INLINE-ARGS */V234,(*(LnkLI305))(V235,VV[109]));
	(void)((VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V236)));
	goto T725;
	goto T735;
T735:;
	V237= list(2,VV[92],(V220));
	V238= (*(LnkLI305))(VV[111],(V221));
	V239 = make_fixnum((long)length(car(caddr((V222)))));
	V240= (*(LnkLI309))(caddr((V222)));
	V241= (*(LnkLI302))(/* INLINE-ARGS */V240,small_fixnum(8));
	V242= list(4,VV[110],/* INLINE-ARGS */V237,/* INLINE-ARGS */V238,number_plus(V239,/* INLINE-ARGS */V241));
	(void)((VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V242)));
	goto T725;}
	goto T731;
T731:;
	if(!(type_of((V221))==t_fixnum||
type_of((V221))==t_bignum||
type_of((V221))==t_ratio||
type_of((V221))==t_shortfloat||
type_of((V221))==t_longfloat||
type_of((V221))==t_complex)){
	goto T742;}
	princ_str("\nstatic void L",VV[32]);
	(void)((*(LnkLI278))((V221)));
	princ_str("();",VV[32]);
	V243= list(2,VV[92],(V220));
	V244= list(3,VV[112],/* INLINE-ARGS */V243,(*(LnkLI305))(VV[113],(V221)));
	(void)((VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V244)));
	goto T725;
	goto T742;
T742:;
	princ_char(10,VV[32]);
	(void)((*(LnkLI278))((V221)));
	princ_str("();",VV[32]);
	V245= list(2,VV[92],(V220));
	V246= list(3,VV[112],/* INLINE-ARGS */V245,(*(LnkLI305))(VV[114],(V221)));
	(void)((VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V246)));}
	goto T725;
T725:;
	if(!(number_compare(symbol_value(VV[115]),small_fixnum(2))<0)){
	goto T753;}
	{object V247 = sputprop((V220),VV[116],Ct);
	VMR19(V247)}
	goto T753;
T753:;
	{object V248 = Cnil;
	VMR19(V248)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-DEBUG	*/

static object LI20(V251,V252)

object V251;object V252;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V253 = putprop((V251),(V252),VV[117]);
	VMR20(V253)}
	return Cnil;
}
/*	local entry for function T3DEFUN	*/

static object LI21(V259,V260,V261,V262,V263)

register object V259;register object V260;register object V261;object V262;object V263;
{	 VMB21 VMS21 VMV21
	bds_check;
	goto TTL;
TTL:;
	{register object V264;
	V264= Cnil;
	bds_bind(VV[0],list(2,VV[52],(V259)));
	bds_bind(VV[21],(*(LnkLI310))(cadr((V261))));
	bds_bind(VV[118],Cnil);
	{register object V265;
	register object V266;
	V265= symbol_value(VV[79]);
	V266= car((V265));
	goto T765;
T765:;
	if(!(endp_prop((V265)))){
	goto T766;}
	goto T760;
	goto T766;
T766:;{object V267;
	base[4]= cadddr((V266));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk311)();
	vs_top=sup;
	V267= vs_base[0];
	if(V267==Cnil)goto T771;
	goto T770;
	goto T771;
T771:;}
	base[4]= VV[119];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T770;
T770:;
	if((car((V266)))==((V259))){
	goto T776;}
	goto T775;
	goto T776;
T776:;
	if((cadr(cddddr((V266))))==Cnil){
	goto T778;}
	goto T775;
	goto T778;
T778:;
	V264= (V266);
	if(((V264))==Cnil){
	goto T760;}
	goto T761;
	goto T775;
T775:;
	V265= cdr((V265));
	V266= car((V265));
	goto T765;}
	goto T761;
T761:;
	if(((VFUN_NARGS=1,(*(LnkLI303))((V259))))!=Cnil){
	goto T786;}
	{object V268;
	V268= list(4,(V259),(V260),cadr((V264)),caddr((V264)));
	setq(VV[30],make_cons((V268),symbol_value(VV[30])));}
	goto T786;
T786:;
	V269= structure_ref(cadr((V261)),VV[63],1);
	(void)((*(LnkLI312))(/* INLINE-ARGS */V269,small_fixnum(0)));
	base[3]= VV[120];
	{object V270= caddr((V264));
	if((V270!= VV[90]))goto T794;
	base[4]= VV[121];
	goto T793;
	goto T794;
T794:;
	if((V270!= VV[143]))goto T795;
	base[4]= VV[122];
	goto T793;
	goto T795;
T795:;
	if((V270!= VV[144]))goto T796;
	base[4]= VV[123];
	goto T793;
	goto T796;
T796:;
	if((V270!= VV[145]))goto T797;
	base[4]= VV[124];
	goto T793;
	goto T797;
T797:;
	base[4]= VV[125];}
	goto T793;
T793:;
	base[5]= (V259);
	base[6]= (V260);
	base[7]= (V261);
	base[8]= (V263);
	base[9]= (V264);
	vs_top=(vs_base=base+3)+7;
	(void) (*Lnk313)();
	vs_top=sup;
	goto T758;
	goto T760;
T760:;
	if(((*(LnkLI308))((V259)))==Cnil){
	goto T804;}
	V271= structure_ref(cadr((V261)),VV[63],1);
	(void)((*(LnkLI312))(/* INLINE-ARGS */V271,small_fixnum(0)));
	base[3]= VV[126];
	base[4]= VV[125];
	base[5]= (V259);
	base[6]= (V260);
	base[7]= (V261);
	base[8]= (V263);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk313)();
	vs_top=sup;
	goto T758;
	goto T804;
T804:;
	V272= structure_ref(cadr((V261)),VV[63],1);
	(void)((*(LnkLI312))(/* INLINE-ARGS */V272,small_fixnum(2)));
	base[3]= VV[127];
	base[4]= VV[128];
	base[5]= (V259);
	base[6]= (V260);
	base[7]= (V261);
	base[8]= (V263);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk313)();
	vs_top=sup;
	goto T758;
T758:;
	(void)((*(LnkLI314))((V260)));
	{object V273 = (*(LnkLI315))((V259),(V261));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR21(V273)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for T3DEFUN-AUX	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	bds_check;
	{object V274;
	object V275;
	if(vs_top-vs_base<2) too_few_arguments();
	V274=(base[0]);
	bds_bind(VV[129],base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V275=(base[2]);
	vs_top=sup;
	bds_bind(VV[19],Cnil);
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],small_fixnum(0));
	bds_bind(VV[132],small_fixnum(0));
	bds_bind(VV[133],small_fixnum(0));
	bds_bind(VV[134],Cnil);
	bds_bind(VV[135],make_cons((VV[129]->s.s_dbind),Cnil));
	bds_bind(VV[136],(VV[129]->s.s_dbind));
	setq(VV[138],number_plus(symbol_value(VV[138]),small_fixnum(1)));
	bds_bind(VV[137],symbol_value(VV[138]));
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],Cnil);
	bds_bind(VV[142],small_fixnum(0));
	base[16]= (V274);
	{object V276;
	V276= (V275);
	 vs_top=base+17;
	 while(!endp(V276))
	 {vs_push(car(V276));V276=cdr(V276);}
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

static object LI23(V282,V283,V284,V285,V286)

object V282;object V283;object V284;object V285;object V286;
{	 VMB23 VMS23 VMV23
	bds_check;
	goto TTL;
TTL:;
	{object V287;
	object V288;
	V287= Cnil;
	V288= caaddr((V284));
	{register object V289;
	object V290;
	V290= cadr((V286));
	V289= (V288);
	goto T831;
T831:;
	if(!(endp_prop((V289)))){
	goto T832;}
	goto T828;
	goto T832;
T832:;
	V291= structure_ref(car((V289)),VV[70],1);
	if(!((/* INLINE-ARGS */V291)==(VV[72]))){
	goto T838;}
	{object V292;
	V293= car((V289));
	V294= structure_ref(car((V289)),VV[70],4);
	V292= make_cons(/* INLINE-ARGS */V293,/* INLINE-ARGS */V294);
	V287= make_cons((V292),(V287));
	goto T836;}
	goto T838;
T838:;
	V295= car((V289));
	{object V297= car((V290));
	if((V297!= VV[90]))goto T843;
	V296= VV[90];
	goto T842;
	goto T843;
T843:;
	if((V297!= VV[143]))goto T844;
	V296= VV[143];
	goto T842;
	goto T844;
T844:;
	if((V297!= VV[144]))goto T845;
	V296= VV[144];
	goto T842;
	goto T845;
T845:;
	if((V297!= VV[145]))goto T846;
	V296= VV[145];
	goto T842;
	goto T846;
T846:;
	V296= VV[75];}
	goto T842;
T842:;
	(void)(structure_set(/* INLINE-ARGS */V295,VV[70],1,V296));
	goto T836;
T836:;
	V298= car((V289));
	setq(VV[89],number_plus(symbol_value(VV[89]),small_fixnum(1)));
	(void)(structure_set(/* INLINE-ARGS */V298,VV[70],4,symbol_value(VV[89])));
	V289= cdr((V289));
	V290= cdr((V290));
	goto T831;}
	goto T828;
T828:;
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[146],(V282))));
	princ_str("\nstatic ",VV[32]);
	base[1]= (*(LnkLI281))(caddr((V286)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk282)();
	vs_top=sup;
	V299= vs_base[0];
	(void)((*(LnkLI278))(V299));
	princ_str("LI",VV[32]);
	(void)((*(LnkLI278))((V283)));
	princ_str("();",VV[32]);
	princ_str("\nstatic ",VV[26]);
	base[1]= (*(LnkLI281))(caddr((V286)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk282)();
	vs_top=sup;
	V300= vs_base[0];
	(void)((*(LnkLI275))(V300));
	princ_str("LI",VV[26]);
	(void)((*(LnkLI275))((V283)));
	princ_char(40,VV[26]);
	(void)((*(LnkLI317))((V288),cadr((V286))));
	{object V301;
	V301= symbol_value(VV[137]);
	if((symbol_value(VV[148]))==Cnil){
	goto T874;}
	base[1]= make_cons((V282),(V288));
	goto T872;
	goto T874;
T874:;
	base[1]= Cnil;
	goto T872;
T872:;
	bds_bind(VV[147],base[1]);
	bds_bind(VV[135],symbol_value(VV[135]));
	princ_str("\n{	",VV[26]);
	V302= structure_ref(cadr((V284)),VV[63],1);
	(void)((*(LnkLI318))(/* INLINE-ARGS */V302,(V283),VV[149]));
	princ_str(" VMB",VV[26]);
	(void)((*(LnkLI275))((V301)));
	princ_str(" VMS",VV[26]);
	(void)((*(LnkLI275))((V301)));
	princ_str(" VMV",VV[26]);
	(void)((*(LnkLI275))((V301)));
	if(((V285))==Cnil){
	goto T886;}
	princ_str("\n	bds_check;",VV[26]);
	goto T886;
T886:;
	if((symbol_value(VV[150]))==Cnil){
	goto T890;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T890;
T890:;
	if(((VV[147]->s.s_dbind))==Cnil){
	goto T894;}
	(VV[135]->s.s_dbind)= make_cons(VV[151],(VV[135]->s.s_dbind));
	princ_str("\n	goto TTL;",VV[26]);
	princ_str("\nTTL:;",VV[26]);
	goto T894;
T894:;
	{register object V304;
	register object V305;
	V304= (V287);
	V305= car((V304));
	goto T906;
T906:;
	if(!(endp_prop((V304)))){
	goto T907;}
	goto T902;
	goto T907;
T907:;
	princ_str("\n	bds_bind(VV[",VV[26]);
	(void)((*(LnkLI275))(cdr((V305))));
	princ_str("],V",VV[26]);
	V306= structure_ref(car((V305)),VV[70],4);
	(void)((*(LnkLI275))(/* INLINE-ARGS */V306));
	princ_str(");",VV[26]);
	(VV[135]->s.s_dbind)= make_cons(VV[152],(VV[135]->s.s_dbind));
	(void)(structure_set(car((V305)),VV[70],1,VV[72]));
	(void)(structure_set(car((V305)),VV[70],4,cdr((V305))));
	V304= cdr((V304));
	V305= car((V304));
	goto T906;}
	goto T902;
T902:;
	base[3]= caddr(cddr((V284)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk319)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[131]))==0)){
	goto T930;}
	if((symbol_value(VV[139]))!=Cnil){
	goto T930;}
	if((symbol_value(VV[141]))!=Cnil){
	goto T930;}
	goto T928;
	goto T930;
T930:;
	princ_str("\n	base[0]=base[0];",VV[26]);
	goto T928;
T928:;
	V308= (*(LnkLI281))(caddr((V286)));
	if(!(equal(VV[153],/* INLINE-ARGS */V308))){
	goto T937;}
	princ_str("\n	return Cnil;",VV[26]);
	goto T937;
T937:;
	princ_str("\n}",VV[26]);
	{object V309 = (*(LnkLI320))((V301),caddr((V286)));
	bds_unwind1;
	bds_unwind1;
	VMR23(V309)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-UP-VAR-CVS	*/

static object LI24(V311)

object V311;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	if((symbol_value(VV[154]))==Cnil){
	goto T944;}
	V312= (*(LnkLI321))();
	{object V313 = structure_set((V311),VV[70],2,/* INLINE-ARGS */V312);
	VMR24(V313)}
	goto T944;
T944:;
	V314= (*(LnkLI322))();
	{object V315 = structure_set((V311),VV[70],2,/* INLINE-ARGS */V314);
	VMR24(V315)}
	return Cnil;
}
/*	local entry for function T3DEFUN-VARARG	*/

static object LI25(V320,V321,V322,V323)

object V320;object V321;object V322;object V323;
{	 VMB25 VMS25 VMV25
	bds_check;
	goto TTL;
TTL:;
	{object V324;
	register object V325;
	object V326;
	object V327;
	object V328;
	object V329;
	object V330;
	object V331;
	V324= Cnil;
	bds_bind(VV[154],Cnil);
	base[1]= Cnil;
	V325= Cnil;
	V326= Ct;
	V327= Cnil;
	bds_bind(VV[155],small_fixnum(0));
	V328= Cnil;
	V329= caddr((V322));
	V330= Cnil;{object V332;
	V332= caddr((V329));
	if(V332==Cnil)goto T954;
	V331= V332;
	goto T953;
	goto T954;
T954:;}{object V333;
	V333= cadr((V329));
	if(V333==Cnil)goto T956;
	V331= V333;
	goto T953;
	goto T956;
T956:;}
	V331= cadddr((V329));
	goto T953;
T953:;
	{object V334;
	register object V335;
	V334= car((V329));
	V335= car((V334));
	goto T962;
T962:;
	if(!(endp_prop((V334)))){
	goto T963;}
	goto T958;
	goto T963;
T963:;
	{object V336;
	setq(VV[89],number_plus(symbol_value(VV[89]),small_fixnum(1)));
	V336= list(2,VV[156],symbol_value(VV[89]));
	V324= make_cons((V336),(V324));}
	V334= cdr((V334));
	V335= car((V334));
	goto T962;}
	goto T958;
T958:;
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[157],(V320))));
	{object V337;
	V337= VV[158];
	princ_str("\nstatic object LI",VV[26]);
	(void)((*(LnkLI275))((V321)));
	princ_char(40,VV[26]);
	if(((V324))==Cnil){
	goto T982;}
	{object V338;
	V338= (V324);
	goto T986;
T986:;
	if(((V338))!=Cnil){
	goto T987;}
	goto T982;
	goto T987;
T987:;
	princ_str("object ",VV[26]);
	(void)((*(LnkLI275))(car((V338))));
	V337= (VFUN_NARGS=3,(*(LnkLI323))(VV[159],(V337),VV[160]));
	if(!((cdr((V338)))==Cnil)){
	goto T997;}
	goto T996;
	goto T997;
T997:;
	princ_char(44,VV[26]);
	V337= (VFUN_NARGS=3,(*(LnkLI323))(VV[159],(V337),VV[161]));
	goto T996;
T996:;
	V338= cdr((V338));
	goto T986;}
	goto T982;
T982:;
	if(((V331))==Cnil){
	goto T1005;}
	if(((V324))==Cnil){
	goto T1008;}
	princ_char(44,VV[26]);
	V337= (VFUN_NARGS=3,(*(LnkLI323))(VV[159],(V337),VV[162]));
	goto T1008;
T1008:;
	princ_str("object first,...",VV[26]);
	V337= (VFUN_NARGS=3,(*(LnkLI323))(VV[159],(V337),VV[163]));
	goto T1005;
T1005:;
	princ_char(41,VV[26]);
	princ_str("\nstatic object LI",VV[32]);
	(void)((*(LnkLI278))((V321)));
	princ_char(40,VV[32]);
	(void)((*(LnkLI278))((V337)));
	princ_str(");",VV[32]);}
	{object V339;
	V339= symbol_value(VV[137]);
	if(symbol_value(VV[148])==Cnil){
	base[5]= Cnil;
	goto T1025;}
	if((caddr((V329)))==Cnil){
	goto T1026;}
	base[5]= Cnil;
	goto T1025;
	goto T1026;
T1026:;
	{object V340;
	object V341;
	V340= car((V329));
	V341= car((V340));
	goto T1033;
T1033:;
	if(!(endp_prop((V340)))){
	goto T1034;}
	goto T1028;
	goto T1034;
T1034:;
	if((structure_ref((V341),VV[70],3))==Cnil){
	goto T1038;}
	goto T1029;
	goto T1038;
T1038:;
	V340= cdr((V340));
	V341= car((V340));
	goto T1033;}
	goto T1029;
T1029:;
	base[5]= Cnil;
	goto T1025;
	goto T1028;
T1028:;
	if((cadr((V329)))==Cnil){
	goto T1046;}
	base[5]= Cnil;
	goto T1025;
	goto T1046;
T1046:;
	if((car(cddddr((V329))))==Cnil){
	goto T1048;}
	base[5]= Cnil;
	goto T1025;
	goto T1048;
T1048:;
	base[5]= make_cons((V320),car((V329)));
	goto T1025;
T1025:;
	bds_bind(VV[147],base[5]);
	bds_bind(VV[135],symbol_value(VV[135]));
	princ_str("\n{	",VV[26]);
	if(((V331))==Cnil){
	goto T1052;}
	princ_str("\n	va_list ap;",VV[26]);
	goto T1052;
T1052:;
	princ_str("\n	int narg = VFUN_NARGS;",VV[26]);
	V342= structure_ref(cadr((V322)),VV[63],1);
	(void)((*(LnkLI318))(/* INLINE-ARGS */V342,(V321),VV[149]));
	princ_str(" VMB",VV[26]);
	(void)((*(LnkLI275))((V339)));
	princ_str(" VMS",VV[26]);
	(void)((*(LnkLI275))((V339)));
	princ_str(" VMV",VV[26]);
	(void)((*(LnkLI275))((V339)));
	if(((V323))==Cnil){
	goto T1066;}
	princ_str("\n	bds_check;",VV[26]);
	goto T1066;
T1066:;
	if((symbol_value(VV[150]))==Cnil){
	goto T1070;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T1070;
T1070:;
	if((V331)!=Cnil){
	goto T1074;}
	princ_str("\n	if ( narg!= ",VV[26]);
	V343 = make_fixnum((long)length((V324)));
	(void)((*(LnkLI275))(V343));
	princ_str(") vfun_wrong_number_of_args(small_fixnum(",VV[26]);
	V344 = make_fixnum((long)length((V324)));
	(void)((*(LnkLI275))(V344));
	princ_str("));",VV[26]);
	goto T1074;
T1074:;
	{object V345;
	object V346;
	V345= car((V329));
	V346= car((V345));
	goto T1085;
T1085:;
	if(!(endp_prop((V345)))){
	goto T1086;}
	goto T1081;
	goto T1086;
T1086:;
	base[9]= (V346);
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	V345= cdr((V345));
	V346= car((V345));
	goto T1085;}
	goto T1081;
T1081:;
	{object V347;
	object V348;
	V347= cadr((V329));
	V348= car((V347));
	goto T1101;
T1101:;
	if(!(endp_prop((V347)))){
	goto T1102;}
	goto T1097;
	goto T1102;
T1102:;
	base[9]= car((V348));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((caddr((V348)))==Cnil){
	goto T1108;}
	base[9]= caddr((V348));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	goto T1108;
T1108:;
	V347= cdr((V347));
	V348= car((V347));
	goto T1101;}
	goto T1097;
T1097:;
	if((caddr((V329)))==Cnil){
	goto T1117;}
	base[7]= caddr((V329));
	vs_top=(vs_base=base+7)+1;
	L26(base);
	vs_top=sup;
	goto T1117;
T1117:;
	{object V349;
	object V350;
	V349= car(cddddr((V329)));
	V350= car((V349));
	goto T1124;
T1124:;
	if(!(endp_prop((V349)))){
	goto T1125;}
	goto T1080;
	goto T1125;
T1125:;
	base[9]= cadr((V350));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((cadddr((V350)))==Cnil){
	goto T1131;}
	base[9]= cadddr((V350));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	goto T1131;
T1131:;
	V349= cdr((V349));
	V350= car((V349));
	goto T1124;}
	goto T1080;
T1080:;
	if((cadr((V329)))!=Cnil){
	goto T1141;}
	if((caddr((V329)))!=Cnil){
	goto T1141;}
	if((cadddr((V329)))==Cnil){
	goto T1140;}
	goto T1141;
T1141:;
	if(((V330))!=Cnil){
	goto T1140;}
	V330= Ct;
	princ_str("\n	va_start(ap,first);",VV[26]);
	goto T1140;
T1140:;
	if((symbol_value(VV[164]))!=Cnil){
	goto T1154;}
	if((symbol_value(VV[165]))==Cnil){
	goto T1152;}
	goto T1154;
T1154:;
	if((car((V329)))==Cnil){
	goto T1152;}
	princ_str("\n	if(narg <",VV[26]);
	V351 = make_fixnum((long)length(car((V329))));
	(void)((*(LnkLI275))(V351));
	princ_str(") too_few_arguments();",VV[26]);
	goto T1152;
T1152:;
	{object V352;
	object V353;
	V352= car((V329));
	V353= car((V352));
	goto T1166;
T1166:;
	if(!(endp_prop((V352)))){
	goto T1167;}
	goto T1162;
	goto T1167;
T1167:;
	(void)((*(LnkLI324))((V353)));
	V352= cdr((V352));
	V353= car((V352));
	goto T1166;}
	goto T1162;
T1162:;
	{object V354;
	object V355;
	V354= cadr((V329));
	V355= car((V354));
	goto T1181;
T1181:;
	if(!(endp_prop((V354)))){
	goto T1182;}
	goto T1177;
	goto T1182;
T1182:;
	(void)((*(LnkLI324))(car((V355))));
	V354= cdr((V354));
	V355= car((V354));
	goto T1181;}
	goto T1177;
T1177:;
	if((caddr((V329)))==Cnil){
	goto T1192;}
	(void)((*(LnkLI324))(caddr((V329))));
	goto T1192;
T1192:;
	if(((VV[154]->s.s_dbind))==Cnil){
	goto T1198;}
	V327= symbol_value(VV[130]);
	goto T1196;
	goto T1198;
T1198:;
	V327= symbol_value(VV[142]);
	goto T1196;
T1196:;
	{object V356;
	object V357;
	V356= car(cddddr((V329)));
	V357= car((V356));
	goto T1204;
T1204:;
	if(!(endp_prop((V356)))){
	goto T1205;}
	goto T1200;
	goto T1205;
T1205:;
	(void)((*(LnkLI324))(cadr((V357))));
	V356= cdr((V356));
	V357= car((V356));
	goto T1204;}
	goto T1200;
T1200:;
	{object V358;
	object V359;
	V358= car(cddddr((V329)));
	V359= car((V358));
	goto T1219;
T1219:;
	if(!(endp_prop((V358)))){
	goto T1220;}
	goto T1215;
	goto T1220;
T1220:;
	(void)((*(LnkLI324))(cadddr((V359))));
	V358= cdr((V358));
	V359= car((V358));
	goto T1219;}
	goto T1215;
T1215:;
	{object V360;
	object V361;
	V361= car((V329));
	V360= (V324);
	goto T1233;
T1233:;
	if(((V360))!=Cnil){
	goto T1234;}
	goto T1230;
	goto T1234;
T1234:;
	(void)((*(LnkLI325))(car((V361)),car((V360))));
	V360= cdr((V360));
	V361= cdr((V361));
	goto T1233;}
	goto T1230;
T1230:;
	if((cadr((V329)))==Cnil){
	goto T1243;}
	bds_bind(VV[134],symbol_value(VV[134]));
	bds_bind(VV[135],(VV[135]->s.s_dbind));
	bds_bind(VV[133],symbol_value(VV[133]));
	princ_str("\n	narg = narg - ",VV[26]);
	V362 = make_fixnum((long)length((V324)));
	(void)((*(LnkLI275))(V362));
	princ_char(59,VV[26]);
	{object V363;
	V363= Ct;
	{object V364;
	object V365;
	V364= cadr((V329));
	V365= car((V364));
	goto T1254;
T1254:;
	if(!(endp_prop((V364)))){
	goto T1255;}
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1246;
	goto T1255;
T1255:;
	{object V366;
	setq(VV[166],number_plus(symbol_value(VV[166]),small_fixnum(1)));
	V366= make_cons(symbol_value(VV[166]),Cnil);
	V325= make_cons((V366),(V325));}
	princ_str("\n	if (",VV[26]);
	if((cdr((V325)))==Cnil){
	goto T1268;}
	V367= VV[167];
	goto T1266;
	goto T1268;
T1268:;
	V367= VV[168];
	goto T1266;
T1266:;
	(void)((*(LnkLI275))(V367));
	princ_str("narg <= 0) ",VV[26]);
	if(type_of(car((V325)))!=t_cons)FEwrong_type_argument(Scons,car((V325)));
	(car((V325)))->c.c_cdr = Ct;
	(void)(car((V325)));
	princ_str("goto T",VV[26]);
	(void)((*(LnkLI275))(car(car((V325)))));
	princ_char(59,VV[26]);
	princ_str("\n	else {",VV[26]);
	if(((V330))!=Cnil){
	goto T1278;}
	V330= Ct;
	princ_str("\n	va_start(ap,first);",VV[26]);
	goto T1278;
T1278:;
	V368= car((V365));
	if(((V363))==Cnil){
	goto T1287;}
	V369= make_cons(VV[169],Cnil);
	goto T1285;
	goto T1287;
T1287:;
	V369= make_cons(VV[170],Cnil);
	goto T1285;
T1285:;
	(void)((*(LnkLI325))(/* INLINE-ARGS */V368,V369));
	V363= Cnil;
	princ_char(125,VV[26]);
	if((caddr((V365)))==Cnil){
	goto T1293;}
	(void)((*(LnkLI325))(caddr((V365)),Ct));
	goto T1293;
T1293:;
	V364= cdr((V364));
	V365= car((V364));
	goto T1254;}}
	goto T1246;
T1246:;
	V325= nreverse((V325));
	{object V370;
	setq(VV[166],number_plus(symbol_value(VV[166]),small_fixnum(1)));
	V370= make_cons(symbol_value(VV[166]),Cnil);
	princ_str("\n	--narg; ",VV[26]);
	if(type_of((V370))!=t_cons)FEwrong_type_argument(Scons,(V370));
	((V370))->c.c_cdr = Ct;
	princ_str("goto T",VV[26]);
	(void)((*(LnkLI275))(car((V370))));
	princ_char(59,VV[26]);
	{object V371;
	object V372;
	V371= cadr((V329));
	V372= car((V371));
	goto T1316;
T1316:;
	if(!(endp_prop((V371)))){
	goto T1317;}
	goto T1312;
	goto T1317;
T1317:;
	if((cdr(car((V325))))==Cnil){
	goto T1321;}
	princ_str("\n	goto T",VV[26]);
	(void)((*(LnkLI275))(car(car((V325)))));
	princ_char(59,VV[26]);
	princ_str("\nT",VV[26]);
	(void)((*(LnkLI275))(car(car((V325)))));
	princ_str(":;",VV[26]);
	goto T1321;
T1321:;
	{object V373;
	V373= car((V325));
	V325= cdr((V325));}
	(void)((*(LnkLI326))(car((V372)),cadr((V372))));
	if((caddr((V372)))==Cnil){
	goto T1336;}
	(void)((*(LnkLI325))(caddr((V372)),Cnil));
	goto T1336;
T1336:;
	V371= cdr((V371));
	V372= car((V371));
	goto T1316;}
	goto T1312;
T1312:;
	if((cdr((V370)))==Cnil){
	goto T1243;}
	princ_str("\n	goto T",VV[26]);
	(void)((*(LnkLI275))(car((V370))));
	princ_char(59,VV[26]);
	princ_str("\nT",VV[26]);
	(void)((*(LnkLI275))(car((V370))));
	princ_str(":;",VV[26]);}
	goto T1243;
T1243:;
	if((caddr((V329)))==Cnil){
	goto T1353;}
	V328= (VFUN_NARGS=0,(*(LnkLI327))());
	{object V374;
	V374= cadr((V329));
	if(((V374))==Cnil){
	goto T1361;}
	goto T1358;
	goto T1361;
T1361:;
	princ_str("\n	narg= narg - ",VV[26]);
	V375 = make_fixnum((long)length(car((V329))));
	(void)((*(LnkLI275))(V375));
	princ_char(59,VV[26]);}
	goto T1358;
T1358:;
	if(((V330))!=Cnil){
	goto T1366;}
	V330= Ct;
	princ_str("\n	va_start(ap,first);",VV[26]);
	goto T1366;
T1366:;
	princ_str("\n	V",VV[26]);
	(void)((*(LnkLI275))((V328)));
	princ_str(" = ",VV[26]);
	V376= structure_ref(caddr((V329)),VV[70],5);
	if(!((/* INLINE-ARGS */V376)==(VV[172]))){
	goto T1377;}
	base[7]= Ct;
	goto T1376;
	goto T1377;
T1377:;
	base[7]= symbol_value(VV[171]);
	goto T1376;
T1376:;
	bds_bind(VV[171],base[7]);
	if((cadddr((V329)))==Cnil){
	goto T1381;}
	if(((VV[171]->s.s_dbind))==Cnil){
	goto T1384;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_MAKE_LIST(narg));",VV[26]);
	goto T1379;
	goto T1384;
T1384:;
	princ_str("make_list(narg);",VV[26]);
	goto T1379;
	goto T1381;
T1381:;
	if(((VV[171]->s.s_dbind))==Cnil){
	goto T1389;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));",VV[26]);
	goto T1379;
	goto T1389;
T1389:;
	princ_str("list_vector_new(narg,first,ap);",VV[26]);
	goto T1379;
T1379:;
	V377= caddr((V329));
	V378= list(2,VV[156],(V328));
	V379= (*(LnkLI325))(/* INLINE-ARGS */V377,/* INLINE-ARGS */V378);
	bds_unwind1;
	goto T1353;
T1353:;
	if((cadddr((V329)))==Cnil){
	goto T1393;}
	{object V380;
	V380= caddr((V329));
	if(((V380))==Cnil){
	goto T1399;}
	goto T1396;
	goto T1399;
T1399:;
	{object V381;
	V381= cadr((V329));
	if(((V381))==Cnil){
	goto T1403;}
	goto T1396;
	goto T1403;
T1403:;
	princ_str("\n	narg= narg - ",VV[26]);
	V382 = make_fixnum((long)length(car((V329))));
	(void)((*(LnkLI275))(V382));
	princ_char(59,VV[26]);}}
	goto T1396;
T1396:;
	if(((V330))!=Cnil){
	goto T1408;}
	V330= Ct;
	princ_str("\n	va_start(ap,first);",VV[26]);
	goto T1408;
T1408:;
	{object V383;
	object V384= car(cddddr((V329)));
	if(endp(V384)){
	V326= Cnil;
	goto T1415;}
	base[7]=V383=MMcons(Cnil,Cnil);
	goto T1416;
T1416:;
	(V383->c.c_car)= caddr((V384->c.c_car));
	V384=MMcdr(V384);
	if(endp(V384)){
	V326= base[7];
	goto T1415;}
	V383=MMcdr(V383)=MMcons(Cnil,Cnil);
	goto T1416;}
	goto T1415;
T1415:;
	{object V385;
	object V386;
	V386= make_fixnum((long)length(car(cddddr((V329)))));
	V385= Cnil;
	{register object V387;
	object V388;
	object V389;
	V387= (V326);
	V388= car(cddddr((V329)));
	V389= car((V388));
	goto T1424;
T1424:;
	if(((V387))!=Cnil){
	goto T1425;}
	goto T1419;
	goto T1425;
T1425:;
	if(!((caar((V387)))==(VV[173]))){
	goto T1430;}
	if((caddr(car((V387))))==(Cnil)){
	goto T1429;}
	goto T1430;
T1430:;
	V385= Ct;
	goto T1429;
T1429:;
	if(!((caar((V387)))==(VV[173]))){
	goto T1436;}
	{object V390;
	V390= caddr(car((V387)));
	if(!(((V390))==(Cnil))){
	goto T1442;}
	goto T1440;
	goto T1442;
T1442:;
	if(type_of((V390))==t_cons){
	goto T1444;}
	goto T1436;
	goto T1444;
T1444:;
	{register object x= car((V390)),V391= VV[174];
	while(!endp(V391))
	if(eql(x,V391->c.c_car)){
	goto T1440;
	}else V391=V391->c.c_cdr;
	goto T1436;}}
	goto T1440;
T1440:;
	V392= structure_ref(cadddr((V389)),VV[70],1);
	if((/* INLINE-ARGS */V392)==(VV[175])){
	goto T1435;}
	goto T1436;
T1436:;
	V385= Ct;
	if(type_of(V387)!=t_cons)FEwrong_type_argument(Scons,V387);
	(V387)->c.c_car = small_fixnum(0);
	goto T1435;
T1435:;
	V387= cdr((V387));
	V388= cdr((V388));
	V389= car((V388));
	goto T1424;}
	goto T1419;
T1419:;
	if(!(((long)length((V326)))>(15))){
	goto T1457;}
	V385= Ct;
	goto T1457;
T1457:;
	princ_str("\n	{",VV[26]);
	vs_base=vs_top;
	(void) (*Lnk328)();
	vs_top=sup;
	bds_bind(VV[26],symbol_value(VV[32]));
	if(((V385))==Cnil){
	goto T1465;}
	princ_char(10,VV[32]);
	princ_str("static object VK",VV[26]);
	(void)((*(LnkLI275))((V321)));
	princ_str("defaults[",VV[26]);
	V395 = make_fixnum((long)length((V326)));
	(void)((*(LnkLI275))(V395));
	princ_str("]={",VV[26]);
	{object V396;
	register object V397;
	V396= (V326);
	V397= Cnil;
	goto T1477;
T1477:;
	if(((V396))!=Cnil){
	goto T1478;}
	goto T1475;
	goto T1478;
T1478:;
	princ_str("(void *)",VV[26]);
	if(!(eql(car((V396)),small_fixnum(0)))){
	goto T1486;}
	princ_str("-1",VV[26]);
	goto T1484;
	goto T1486;
T1486:;
	V397= caddr(car((V396)));
	if(!(((V397))==(Cnil))){
	goto T1490;}
	princ_str("-2",VV[26]);
	goto T1484;
	goto T1490;
T1490:;
	if(!(type_of((V397))==t_cons)){
	goto T1495;}
	if(!((car((V397)))==(VV[176]))){
	goto T1495;}
	(void)((*(LnkLI275))(cadr((V397))));
	goto T1484;
	goto T1495;
T1495:;
	if(!(type_of((V397))==t_cons)){
	goto T1501;}
	if(!((car((V397)))==(VV[177]))){
	goto T1501;}
	V398= (*(LnkLI329))(caddr((V397)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V398));
	goto T1484;
	goto T1501;
T1501:;
	(void)((*(LnkLI330))());
	goto T1484;
T1484:;
	if((cdr((V396)))==Cnil){
	goto T1506;}
	princ_char(44,VV[26]);
	goto T1506;
T1506:;
	V396= cdr((V396));
	goto T1477;}
	goto T1475;
T1475:;
	princ_str("};",VV[26]);
	goto T1465;
T1465:;
	princ_char(10,VV[32]);
	princ_str("static struct { short n,allow_other_keys;",VV[26]);
	princ_str("object *defaults;",VV[26]);
	princ_str("\n	 KEYTYPE keys[",VV[26]);
	(void)((*(LnkLI275))((number_compare((V386),small_fixnum(1))>=0?((V386)):small_fixnum(1))));
	princ_str("];",VV[26]);
	princ_str("} LI",VV[26]);
	(void)((*(LnkLI275))((V321)));
	princ_str("key=",VV[26]);
	princ_char(123,VV[26]);
	V399 = make_fixnum((long)length(car(cddddr((V329)))));
	(void)((*(LnkLI275))(V399));
	princ_char(44,VV[26]);
	if((cadr(cddddr((V329))))==Cnil){
	goto T1533;}
	V400= small_fixnum(1);
	goto T1531;
	goto T1533;
T1533:;
	V400= small_fixnum(0);
	goto T1531;
T1531:;
	(void)((*(LnkLI275))(V400));
	princ_char(44,VV[26]);
	if(((V385))==Cnil){
	goto T1538;}
	princ_str("VK",VV[26]);
	(void)((*(LnkLI275))((V321)));
	princ_str("defaults",VV[26]);
	goto T1536;
	goto T1538;
T1538:;
	princ_str("Cstd_key_defaults",VV[26]);
	goto T1536;
T1536:;
	if((car(cddddr((V329))))==Cnil){
	goto T1544;}
	princ_str(",{",VV[26]);
	{object V401;
	V401= reverse(car(cddddr((V329))));
	goto T1552;
T1552:;
	if(((V401))!=Cnil){
	goto T1553;}
	goto T1549;
	goto T1553;
T1553:;
	princ_str("(void *)",VV[26]);
	V402= (*(LnkLI331))(caar((V401)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V402));
	if((cdr((V401)))==Cnil){
	goto T1561;}
	princ_char(44,VV[26]);
	goto T1561;
T1561:;
	V401= cdr((V401));
	goto T1552;}
	goto T1549;
T1549:;
	princ_char(125,VV[26]);
	goto T1544;
T1544:;
	princ_str("};",VV[26]);
	bds_unwind1;
	if((caddr((V329)))==Cnil){
	goto T1572;}
	princ_str("\n	parse_key_rest_new(",VV[26]);
	V403= list(2,VV[156],(V328));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V403));
	princ_char(44,VV[26]);
	goto T1570;
	goto T1572;
T1572:;
	princ_str("\n	parse_key_new_new(",VV[26]);
	goto T1570;
T1570:;
	if(!(eql(small_fixnum(0),symbol_value(VV[142])))){
	goto T1578;}
	setq(VV[142],small_fixnum(1));
	goto T1578;
T1578:;
	princ_str("narg,",VV[26]);
	if(((VV[154]->s.s_dbind))==Cnil){
	goto T1586;}
	V404= VV[178];
	goto T1584;
	goto T1586;
T1586:;
	setq(VV[17],Ct);
	V404= VV[179];
	goto T1584;
T1584:;
	(void)((*(LnkLI275))(V404));
	princ_char(43,VV[26]);
	(void)((*(LnkLI275))((V327)));
	princ_str(",(struct key *)(void *)&LI",VV[26]);
	(void)((*(LnkLI275))((V321)));
	princ_str("key,first,ap);",VV[26]);}
	goto T1393;
T1393:;
	{object V405;
	register object V406;
	V405= car(cddddr((V329)));
	V406= car((V405));
	goto T1599;
T1599:;
	if(!(endp_prop((V405)))){
	goto T1600;}
	goto T1595;
	goto T1600;
T1600:;
	{object V408;
	V408= car((V326));
	V326= cdr((V326));
	V407= (V408);}
	if(eql(small_fixnum(0),V407)){
	goto T1606;}
	(void)((*(LnkLI332))(cadr((V406))));
	goto T1604;
	goto T1606;
T1606:;
	princ_str("\n	if(",VV[26]);
	V409= structure_ref(cadr((V406)),VV[70],2);
	(void)((*(LnkLI333))(/* INLINE-ARGS */V409));
	princ_str("==0){",VV[26]);
	bds_bind(VV[134],symbol_value(VV[134]));
	bds_bind(VV[135],(VV[135]->s.s_dbind));
	bds_bind(VV[133],symbol_value(VV[133]));
	V410= (*(LnkLI326))(cadr((V406)),caddr((V406)));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V411= structure_ref(cadddr((V406)),VV[70],1);
	if((/* INLINE-ARGS */V411)==(VV[175])){
	goto T1618;}
	(void)((*(LnkLI325))(cadddr((V406)),Cnil));
	goto T1618;
T1618:;
	princ_str("\n	}else{",VV[26]);
	(void)((*(LnkLI332))(cadr((V406))));
	V412= structure_ref(cadddr((V406)),VV[70],1);
	if((/* INLINE-ARGS */V412)==(VV[175])){
	goto T1624;}
	(void)((*(LnkLI325))(cadddr((V406)),Ct));
	goto T1624;
T1624:;
	princ_char(125,VV[26]);
	goto T1604;
T1604:;
	V405= cdr((V405));
	V406= car((V405));
	goto T1599;}
	goto T1595;
T1595:;
	if(((VV[147]->s.s_dbind))==Cnil){
	goto T1633;}
	(VV[135]->s.s_dbind)= make_cons(VV[151],(VV[135]->s.s_dbind));
	princ_str("\n	goto TTL;",VV[26]);
	princ_str("\nTTL:;",VV[26]);
	goto T1633;
T1633:;
	base[7]= caddr(cddr((V322)));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk319)();
	vs_top=sup;
	if(((V330))==Cnil){
	goto T1643;}
	V330= Cnil;
	princ_str("\n	va_end(ap);",VV[26]);
	goto T1643;
T1643:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[131]))==0)){
	goto T1651;}
	if((symbol_value(VV[139]))!=Cnil){
	goto T1651;}
	if((symbol_value(VV[141]))!=Cnil){
	goto T1651;}
	goto T1649;
	goto T1651;
T1651:;
	princ_str("\n	base[0]=base[0];",VV[26]);
	goto T1649;
T1649:;
	princ_str("\n	return Cnil;",VV[26]);
	princ_char(125,VV[26]);
	if((base[1])==Cnil){
	goto T1662;}
	princ_str("\n	}",VV[26]);
	goto T1662;
T1662:;
	(void)((*(LnkLI334))());
	V414= get((V320),VV[78],Cnil);
	{object V415 = (*(LnkLI320))((V339),V414);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR25(V415)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3DEFUN-NORMAL	*/

static object LI27(V420,V421,V422,V423)

object V420;register object V421;object V422;object V423;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[180],(V420))));
	if(!(type_of((V421))==t_fixnum||
type_of((V421))==t_bignum||
type_of((V421))==t_ratio||
type_of((V421))==t_shortfloat||
type_of((V421))==t_longfloat||
type_of((V421))==t_complex)){
	goto T1671;}
	princ_str("\nstatic void L",VV[26]);
	(void)((*(LnkLI275))((V421)));
	princ_str("()",VV[26]);
	goto T1669;
	goto T1671;
T1671:;
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))((V421)));
	princ_str("()",VV[26]);
	goto T1669;
T1669:;
	princ_str("\n{",VV[26]);
	princ_str("register object *",VV[26]);
	(void)((*(LnkLI275))(symbol_value(VV[21])));
	princ_str("base=vs_base;",VV[26]);
	V424= structure_ref(cadr((V422)),VV[63],1);
	(void)((*(LnkLI318))(/* INLINE-ARGS */V424,(V421),VV[149]));
	princ_str("\n	register object *",VV[26]);
	(void)((*(LnkLI275))(symbol_value(VV[21])));
	princ_str("sup=base+VM",VV[26]);
	(void)((*(LnkLI275))(symbol_value(VV[137])));
	princ_char(59,VV[26]);
	princ_str(" VC",VV[26]);
	(void)((*(LnkLI275))(symbol_value(VV[137])));
	if((symbol_value(VV[164]))==Cnil){
	goto T1696;}
	princ_str("\n	vs_reserve(VM",VV[26]);
	(void)((*(LnkLI275))(symbol_value(VV[137])));
	princ_str(");",VV[26]);
	goto T1694;
	goto T1696;
T1696:;
	princ_str("\n	vs_check;",VV[26]);
	goto T1694;
T1694:;
	if(((V423))==Cnil){
	goto T1702;}
	princ_str("\n	bds_check;",VV[26]);
	goto T1702;
T1702:;
	if((symbol_value(VV[150]))==Cnil){
	goto T1706;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T1706;
T1706:;
	(void)((VFUN_NARGS=3,(*(LnkLI335))(caddr((V422)),caddr(cddr((V422))),(V420))));
	princ_str("\n}",VV[26]);
	{object V425;
	V425= make_cons(symbol_value(VV[137]),symbol_value(VV[131]));
	setq(VV[34],make_cons((V425),symbol_value(VV[34])));}
	princ_str("\n#define VC",VV[32]);
	(void)((*(LnkLI278))(symbol_value(VV[137])));
	{object V426 = (*(LnkLI336))();
	VMR26(V426)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-V*-MACROS	*/

static object LI28(V429,V430)

register object V429;object V430;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V431;
	V431= make_cons((V429),symbol_value(VV[131]));
	setq(VV[34],make_cons((V431),symbol_value(VV[34])));}
	if(!(number_compare(small_fixnum(0),symbol_value(VV[131]))==0)){
	goto T1724;}
	if((symbol_value(VV[139]))!=Cnil){
	goto T1724;}
	if((symbol_value(VV[141]))!=Cnil){
	goto T1724;}
	princ_str("\n#define VMB",VV[32]);
	(void)((*(LnkLI278))((V429)));
	goto T1722;
	goto T1724;
T1724:;
	princ_str("\n#define VMB",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_char(32,VV[32]);
	princ_str("register object *",VV[32]);
	(void)((*(LnkLI278))(symbol_value(VV[21])));
	princ_str("base=vs_top;",VV[32]);
	goto T1722;
T1722:;
	(void)((*(LnkLI336))());
	if((symbol_value(VV[139]))==Cnil){
	goto T1741;}
	princ_str("\n#define VMS",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_char(32,VV[32]);
	princ_str(" register object *",VV[32]);
	(void)((*(LnkLI278))(symbol_value(VV[21])));
	princ_str("sup=vs_top+",VV[32]);
	(void)((*(LnkLI278))(symbol_value(VV[131])));
	princ_str(";vs_top=sup;",VV[32]);
	goto T1739;
	goto T1741;
T1741:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[131]))==0)){
	goto T1752;}
	princ_str("\n#define VMS",VV[32]);
	(void)((*(LnkLI278))((V429)));
	goto T1739;
	goto T1752;
T1752:;
	princ_str("\n#define VMS",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_str(" vs_top += ",VV[32]);
	(void)((*(LnkLI278))(symbol_value(VV[131])));
	princ_char(59,VV[32]);
	goto T1739;
T1739:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[131]))==0)){
	goto T1763;}
	princ_str("\n#define VMV",VV[32]);
	(void)((*(LnkLI278))((V429)));
	goto T1761;
	goto T1763;
T1763:;
	if((symbol_value(VV[164]))==Cnil){
	goto T1768;}
	princ_str("\n#define VMV",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_str(" vs_reserve(",VV[32]);
	(void)((*(LnkLI278))(symbol_value(VV[131])));
	princ_str(");",VV[32]);
	goto T1761;
	goto T1768;
T1768:;
	princ_str("\n#define VMV",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_str(" vs_check;",VV[32]);
	goto T1761;
T1761:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[131]))==0)){
	goto T1779;}
	princ_str("\n#define VMR",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_str("(VMT",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_str(") return(VMT",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_str(");",VV[32]);
	{object V432 = Cnil;
	VMR27(V432)}
	goto T1779;
T1779:;
	princ_str("\n#define VMR",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_str("(VMT",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_str(") vs_top=base ; return(VMT",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_str(");",VV[32]);
	{object V433 = Cnil;
	VMR27(V433)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-REQUIREDS	*/

static object LI29(V436,V437)

object V436;object V437;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{register object V438;
	V438= (V436);
	goto T1797;
T1797:;
	if(!(endp_prop((V438)))){
	goto T1798;}
	goto T1795;
	goto T1798;
T1798:;
	{register object V439;
	setq(VV[89],number_plus(symbol_value(VV[89]),small_fixnum(1)));
	V439= symbol_value(VV[89]);
	(void)(structure_set(car((V438)),VV[70],4,(V439)));
	princ_char(86,VV[26]);
	(void)((*(LnkLI275))((V439)));}
	if(endp_prop(cdr((V438)))){
	goto T1808;}
	princ_char(44,VV[26]);
	goto T1808;
T1808:;
	V438= cdr((V438));
	goto T1797;}
	goto T1795;
T1795:;
	princ_str(")\n",VV[26]);
	if(((V436))==Cnil){
	goto T1818;}
	princ_char(10,VV[26]);
	{register object V440;
	register object V441;
	register object V442;
	V440= (V436);
	V441= (V437);
	V442= Cnil;
	goto T1822;
T1822:;
	if(!(endp_prop((V440)))){
	goto T1823;}
	princ_char(59,VV[26]);
	{object V443 = Cnil;
	VMR28(V443)}
	goto T1823;
T1823:;
	if(((V442))==Cnil){
	goto T1828;}
	princ_char(59,VV[26]);
	goto T1828;
T1828:;
	(void)((*(LnkLI275))(symbol_value(VV[21])));
	V444= (*(LnkLI337))(car((V440)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V444));
	V445= (*(LnkLI281))(car((V441)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V445));
	V442= car((V441));
	princ_char(86,VV[26]);
	V446= structure_ref(car((V440)),VV[70],4);
	(void)((*(LnkLI275))(/* INLINE-ARGS */V446));
	V440= cdr((V440));
	V441= cdr((V441));
	goto T1822;}
	goto T1818;
T1818:;
	{object V447 = Cnil;
	VMR28(V447)}
	return Cnil;
}
/*	local entry for function ADD-DEBUG-INFO	*/

static object LI30(V450,V451)

object V450;object V451;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{object V452;
	V452= Cnil;
	{object V453;
	V453= (number_compare(symbol_value(VV[115]),small_fixnum(2))>=0?Ct:Cnil);
	if(((V453))==Cnil){
	goto T1848;}
	{object V454 = (V453);
	VMR29(V454)}
	goto T1848;
T1848:;
	if((get((V450),VV[116],Cnil))!=Cnil){
	goto T1851;}
	{object V455 = (VFUN_NARGS=2,(*(LnkLI338))(VV[181],(V450)));
	VMR29(V455)}
	goto T1851;
T1851:;
	(void)(remprop((V450),VV[116]));
	{register object V456;
	V456= small_fixnum(0);
	{register object V457;
	register object V458;
	V457= structure_ref(cadr((V451)),VV[63],1);
	V458= car((V457));
	goto T1858;
T1858:;
	if(!(endp_prop((V457)))){
	goto T1859;}
	goto T1854;
	goto T1859;
T1859:;
	V459= structure_ref((V458),VV[70],2);
	if(!(type_of(/* INLINE-ARGS */V459)==t_cons)){
	goto T1863;}
	V460= structure_ref((V458),VV[70],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V460))==t_fixnum)){
	goto T1863;}
	V461= structure_ref((V458),VV[70],2);
	{object V462= cdr(/* INLINE-ARGS */V461);
	V456= (number_compare((V456),V462)>=0?((V456)):V462);}
	goto T1863;
T1863:;
	V457= cdr((V457));
	V458= car((V457));
	goto T1858;}
	goto T1854;
T1854:;
	base[0]= one_plus((V456));
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	V452= vs_base[0];
	{register object V463;
	register object V464;
	V463= structure_ref(cadr((V451)),VV[63],1);
	V464= car((V463));
	goto T1881;
T1881:;
	if(!(endp_prop((V463)))){
	goto T1882;}
	goto T1877;
	goto T1882;
T1882:;
	V465= structure_ref((V464),VV[70],2);
	if(!(type_of(/* INLINE-ARGS */V465)==t_cons)){
	goto T1886;}
	V466= structure_ref((V464),VV[70],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V466))==t_fixnum)){
	goto T1886;}
	{object V467;
	register object V469;
	V470= structure_ref((V464),VV[70],2);
	V467= cdr(/* INLINE-ARGS */V470);
	V469= structure_ref((V464),VV[70],0);
	if(type_of(nthcdr(fixint((V467)),V452))!=t_cons)FEwrong_type_argument(Scons,nthcdr(fixint((V467)),V452));
	(nthcdr(fixint((V467)),V452))->c.c_car = (V469);
	(void)(nthcdr(fixint((V467)),V452));}
	goto T1886;
T1886:;
	V463= cdr((V463));
	V464= car((V463));
	goto T1881;}
	goto T1877;
T1877:;
	(void)(sputprop((V450),VV[117],(V452)));
	{object V471;
	V471= get((V450),VV[117],Cnil);
	if(((V471))==Cnil){
	goto T1902;}
	if((cdr((V471)))!=Cnil){
	goto T1901;}
	if((car((V471)))==Cnil){
	goto T1902;}
	goto T1901;
T1901:;
	V472= list(2,VV[92],(V450));
	V473= list(3,VV[117],/* INLINE-ARGS */V472,list(2,VV[92],(V471)));
	{object V474 = (VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V473));
	VMR29(V474)}
	goto T1902;
T1902:;
	{object V475 = Cnil;
	VMR29(V475)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ANALYZE-REGS	*/

static object LI31(V478,V479)

object V478;object V479;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{object V480;
	V480= number_minus(symbol_value(VV[182]),(V479));
	if(!(number_compare(small_fixnum(0),symbol_value(VV[183]))==0)){
	goto T1910;}
	V481= (VFUN_NARGS=1,(*(LnkLI340))((V478)));
	{long V482 = (long)(*(LnkLI339))(/* INLINE-ARGS */V481,(V480));
	VMR30((object)V482)}
	goto T1910;
T1910:;
	{register object V483;
	register object V484;
	V483= Cnil;
	V484= Cnil;
	{register object V485;
	register object V486;
	V485= (V478);
	V486= car((V485));
	goto T1916;
T1916:;
	if(!(endp_prop((V485)))){
	goto T1917;}
	goto T1912;
	goto T1917;
T1917:;
	V488= structure_ref((V486),VV[70],5);
	{register object x= /* INLINE-ARGS */V488,V487= VV[184];
	while(!endp(V487))
	if(x==(V487->c.c_car)){
	goto T1924;
	}else V487=V487->c.c_cdr;
	goto T1923;}
	goto T1924;
T1924:;{object V489;
	{register object x= (V486),V490= (V484);
	while(!endp(V490))
	if(eql(x,V490->c.c_car)){
	V489= V490;
	goto T1926;
	}else V490=V490->c.c_cdr;
	V489= Cnil;}
	goto T1926;
T1926:;
	if(V489==Cnil)goto T1925;
	goto T1921;
	goto T1925;
T1925:;}
	{register object V491;
	V491= (V486);
	V484= make_cons((V491),(V484));
	goto T1921;}
	goto T1923;
T1923:;{object V492;
	{register object x= (V486),V493= (V483);
	while(!endp(V493))
	if(x==(V493->c.c_car)){
	V492= V493;
	goto T1930;
	}else V493=V493->c.c_cdr;
	V492= Cnil;}
	goto T1930;
T1930:;
	if(V492==Cnil)goto T1929;
	goto T1921;
	goto T1929;
T1929:;}
	{register object V494;
	V494= (V486);
	V484= make_cons((V494),(V484));}
	goto T1921;
T1921:;
	V485= cdr((V485));
	V486= car((V485));
	goto T1916;}
	goto T1912;
T1912:;
	(void)((*(LnkLI339))((V483),(V480)));
	{long V495 = (long)(*(LnkLI339))((V484),symbol_value(VV[183]));
	VMR30((object)V495)}}}
	base[0]=base[0];
}
/*	local entry for function ANALYZE-REGS1	*/

static object LI32(V498,V499)

object V498;object V499;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{register long V500;
	register long V501;
	long V502;
	long V503;
	register long V504;
	V500= 0;
	V501= 3;
	V502= 100000;
	V503= fix((V499));
	V504= 0;
	V498= (VFUN_NARGS=1,(*(LnkLI340))((V498)));
	goto T1947;
T1947:;
	{register object V505;
	object V506;
	V505= (V498);
	V506= car((V505));
	goto T1953;
T1953:;
	if(!(endp_prop((V505)))){
	goto T1954;}
	goto T1949;
	goto T1954;
T1954:;
	V500= fix(structure_ref((V506),VV[70],6));
	if(!((V500)>=(V501))){
	goto T1960;}
	V504= (long)(V504)+(1);
	if(!((V500)<(V502))){
	goto T1965;}
	V502= V500;
	goto T1965;
T1965:;
	if(!((V504)>(V503))){
	goto T1960;}
	goto T1948;
	goto T1960;
T1960:;
	V505= cdr((V505));
	V506= car((V505));
	goto T1953;}
	goto T1949;
T1949:;
	if(!((V504)<(V503))){
	goto T1976;}
	V501= (long)(V501)-(1);
	goto T1976;
T1976:;
	{register object V507;
	register object V508;
	V507= (V498);
	V508= car((V507));
	goto T1984;
T1984:;
	if(!(endp_prop((V507)))){
	goto T1985;}
	goto T1980;
	goto T1985;
T1985:;
	{long V509= fix(structure_ref((V508),VV[70],6));
	if(!((/* INLINE-ARGS */V509)<(V501))){
	goto T1989;}}
	(void)(structure_set((V508),VV[70],6,small_fixnum(0)));
	goto T1989;
T1989:;
	V507= cdr((V507));
	V508= car((V507));
	goto T1984;}
	goto T1980;
T1980:;
	{long V510 = V501;
	VMR31((object)V510)}
	goto T1948;
T1948:;
	V504= 0;
	V501= (long)(V502)+(1);
	V502= 1000000;
	goto T1947;}
	base[0]=base[0];
}
/*	local entry for function WT-GLOBAL-ENTRY	*/

static object LI33(V515,V516,V517,V518)

object V515;object V516;object V517;object V518;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	if((get((V515),VV[103],Cnil))==Cnil){
	goto T2004;}
	{object V519 = Cnil;
	VMR32(V519)}
	goto T2004;
T2004:;
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[187],(V515))));
	princ_str("\nstatic void L",VV[26]);
	(void)((*(LnkLI275))((V516)));
	princ_str("()",VV[26]);
	princ_str("\n{	register object *base=vs_base;",VV[26]);
	if((symbol_value(VV[164]))!=Cnil){
	goto T2015;}
	if((symbol_value(VV[165]))==Cnil){
	goto T2014;}
	goto T2015;
T2015:;
	princ_str("\n	check_arg(",VV[26]);
	V520 = make_fixnum((long)length((V517)));
	(void)((*(LnkLI275))(V520));
	princ_str(");",VV[26]);
	goto T2014;
T2014:;
	princ_str("\n	base[0]=",VV[26]);
	{object V522= (V518);
	if((V522!= VV[90]))goto T2026;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[115]))==0)){
	goto T2028;}
	V521= VV[188];
	goto T2025;
	goto T2028;
T2028:;
	V521= VV[189];
	goto T2025;
	goto T2026;
T2026:;
	if((V522!= VV[143]))goto T2030;
	V521= VV[190];
	goto T2025;
	goto T2030;
T2030:;
	if((V522!= VV[144]))goto T2031;
	V521= VV[191];
	goto T2025;
	goto T2031;
T2031:;
	if((V522!= VV[145]))goto T2032;
	V521= VV[192];
	goto T2025;
	goto T2032;
T2032:;
	V521= VV[193];}
	goto T2025;
T2025:;
	(void)((*(LnkLI275))(V521));
	princ_str("(LI",VV[26]);
	(void)((*(LnkLI275))((V516)));
	princ_char(40,VV[26]);
	{register object V523;
	register long V524;
	V524= 0;
	V523= (V517);
	goto T2039;
T2039:;
	if(!(endp_prop((V523)))){
	goto T2040;}
	goto T2036;
	goto T2040;
T2040:;
	{object V526= car((V523));
	if((V526!= VV[90]))goto T2047;
	V525= VV[194];
	goto T2046;
	goto T2047;
T2047:;
	if((V526!= VV[143]))goto T2048;
	V525= VV[195];
	goto T2046;
	goto T2048;
T2048:;
	if((V526!= VV[144]))goto T2049;
	V525= VV[196];
	goto T2046;
	goto T2049;
T2049:;
	if((V526!= VV[145]))goto T2050;
	V525= VV[197];
	goto T2046;
	goto T2050;
T2050:;
	V525= VV[198];}
	goto T2046;
T2046:;
	(void)((*(LnkLI275))(V525));
	princ_str("(base[",VV[26]);
	V527 = make_fixnum(V524);
	(void)((*(LnkLI275))(V527));
	princ_str("])",VV[26]);
	if(endp_prop(cdr((V523)))){
	goto T2054;}
	princ_char(44,VV[26]);
	goto T2054;
T2054:;
	V523= cdr((V523));
	V524= (long)(V524)+1;
	goto T2039;}
	goto T2036;
T2036:;
	princ_str("));",VV[26]);
	princ_str("\n	vs_top=(vs_base=base)+1;",VV[26]);
	princ_str("\n}",VV[26]);
	{object V528 = Cnil;
	VMR32(V528)}
	return Cnil;
}
/*	local entry for function REP-TYPE	*/

static object LI34(V530)

object V530;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{object V531= (V530);
	if((V531!= VV[90]))goto T2067;
	{object V532 = VV[199];
	VMR33(V532)}
	goto T2067;
T2067:;
	if((V531!= VV[262]))goto T2068;
	{object V533 = VV[200];
	VMR33(V533)}
	goto T2068;
T2068:;
	if((V531!= VV[143]))goto T2069;
	{object V534 = VV[201];
	VMR33(V534)}
	goto T2069;
T2069:;
	if((V531!= VV[145]))goto T2070;
	{object V535 = VV[202];
	VMR33(V535)}
	goto T2070;
T2070:;
	if((V531!= VV[144]))goto T2071;
	{object V536 = VV[203];
	VMR33(V536)}
	goto T2071;
T2071:;
	{object V537 = VV[204];
	VMR33(V537)}}
	return Cnil;
}
/*	local entry for function T1DEFMACRO	*/

static object LI35(V539)

register object V539;
{	 VMB34 VMS34 VMV34
	bds_check;
	goto TTL;
TTL:;
	if(endp_prop((V539))){
	goto T2073;}
	if(!(endp_prop(cdr((V539))))){
	goto T2072;}
	goto T2073;
T2073:;
	V540 = make_fixnum((long)length((V539)));
	(void)((*(LnkLI284))(VV[205],small_fixnum(2),V540));
	goto T2072;
T2072:;
	if(type_of(car((V539)))==t_symbol){
	goto T2077;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[206],car((V539)))));
	goto T2077;
T2077:;
	V541= make_cons(VV[205],(V539));
	(void)((*(LnkLI269))(Ct,/* INLINE-ARGS */V541));
	setq(VV[6],Ct);
	{register object V542;
	object V543;
	setq(VV[62],number_plus(symbol_value(VV[62]),small_fixnum(1)));
	V543= symbol_value(VV[62]);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[59],Cnil);
	bds_bind(VV[53],Cnil);
	bds_bind(VV[60],Cnil);
	V542= Cnil;
	V542= (*(LnkLI341))(car((V539)),cadr((V539)),cddr((V539)));
	(void)((*(LnkLI297))());
	{object V544;
	V544= list(7,VV[205],car((V539)),(V543),cddr((V542)),car((V542)),cadr((V542)),(VV[60]->s.s_dbind));
	setq(VV[25],make_cons((V544),symbol_value(VV[25])));
	{object V545 = symbol_value(VV[25]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR34(V545)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFMACRO	*/

static object LI36(V552,V553,V554,V555,V556,V557)

object V552;object V553;object V554;object V555;object V556;object V557;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	if(((V555))==Cnil){
	goto T2090;}
	V558= list(4,VV[104],list(2,VV[92],(V552)),(V555),VV[207]);
	(void)((VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V558)));
	goto T2090;
T2090:;
	if(((V556))==Cnil){
	goto T2093;}
	V559= list(2,VV[92],(V552));
	V560= list(4,VV[104],/* INLINE-ARGS */V559,list(2,VV[92],(V556)),VV[208]);
	(void)((VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V560)));
	goto T2093;
T2093:;
	princ_str("\nstatic void L",VV[32]);
	(void)((*(LnkLI278))((V553)));
	princ_str("();",VV[32]);
	V561= list(2,VV[92],(V552));
	V562= list(3,VV[209],/* INLINE-ARGS */V561,(*(LnkLI305))(VV[210],(V553)));
	{object V563 = (VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V562));
	VMR35(V563)}
	return Cnil;
}
/*	local entry for function T3DEFMACRO	*/

static object LI37(V570,V571,V572,V573,V574,V575)

object V570;object V571;register object V572;object V573;object V574;object V575;
{	 VMB36 VMS36 VMV36
	bds_check;
	goto TTL;
TTL:;
	if((get((V570),VV[211],Cnil))==Cnil){
	goto T2102;}
	bds_bind(VV[21],VV[212]);
	goto T2100;
	goto T2102;
T2102:;
	bds_bind(VV[21],VV[213]);
	goto T2100;
T2100:;
	bds_bind(VV[129],VV[128]);
	bds_bind(VV[19],Cnil);
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],small_fixnum(0));
	bds_bind(VV[132],small_fixnum(0));
	bds_bind(VV[133],small_fixnum(0));
	bds_bind(VV[134],Cnil);
	bds_bind(VV[135],make_cons((VV[129]->s.s_dbind),Cnil));
	bds_bind(VV[136],(VV[129]->s.s_dbind));
	setq(VV[138],number_plus(symbol_value(VV[138]),small_fixnum(1)));
	bds_bind(VV[137],symbol_value(VV[138]));
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],Cnil);
	bds_bind(VV[142],small_fixnum(0));
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[214],(V570))));
	princ_str("\nstatic void L",VV[26]);
	(void)((*(LnkLI275))((V571)));
	princ_str("()",VV[26]);
	princ_str("\n{register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base=vs_base;",VV[26]);
	V576= structure_ref(car(cddddr((V572))),VV[63],1);
	(void)((*(LnkLI318))(/* INLINE-ARGS */V576,(V571),VV[149]));
	princ_str("\n	register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("sup=base+VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_char(59,VV[26]);
	princ_str(" VC",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	if((symbol_value(VV[164]))==Cnil){
	goto T2128;}
	princ_str("\n	vs_reserve(VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_str(");",VV[26]);
	goto T2126;
	goto T2128;
T2128:;
	princ_str("\n	vs_check;",VV[26]);
	goto T2126;
T2126:;
	if(((V575))==Cnil){
	goto T2134;}
	princ_str("\n	bds_check;",VV[26]);
	goto T2134;
T2134:;
	if((symbol_value(VV[150]))==Cnil){
	goto T2138;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T2138;
T2138:;
	base[15]= car((V572));
	base[16]= cadr((V572));
	base[17]= caddr((V572));
	base[18]= cadddr((V572));
	vs_top=(vs_base=base+15)+4;
	(void) (*Lnk342)();
	vs_top=sup;
	princ_str("\n}",VV[26]);
	{object V577;
	V577= make_cons((VV[137]->s.s_dbind),(VV[131]->s.s_dbind));
	setq(VV[34],make_cons((V577),symbol_value(VV[34])));}
	princ_str("\n#define VC",VV[32]);
	(void)((*(LnkLI278))((VV[137]->s.s_dbind)));
	{object V578 = (*(LnkLI336))();
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
	VMR36(V578)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1ORDINARY	*/

static object LI38(V580)

register object V580;
{	 VMB37 VMS37 VMV37
	bds_check;
	goto TTL;
TTL:;
	{register object V581;
	V581= Cnil;
	setq(VV[6],Ct);
	if((symbol_value(VV[49]))==Cnil){
	goto T2159;}
	(void)((*(LnkLI269))(Cnil,(V580)));
	{object V582;
	base[0]= VV[215];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V582= vs_base[0];
	V583= listA(3,VV[65],(V582),VV[216]);
	(void)((*(LnkLI293))(/* INLINE-ARGS */V583));
	base[0]= list(5,VV[52],(V582),Cnil,(V580),Cnil);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk273)();
	vs_top=sup;
	{object V584;
	V584= list(2,VV[217],make_cons((V582),Cnil));
	setq(VV[25],make_cons((V584),symbol_value(VV[25])));
	{object V585 = symbol_value(VV[25]);
	VMR37(V585)}}}
	goto T2159;
T2159:;
	{object V586;
	if(type_of((V580))==t_cons){
	goto T2170;}
	V586= Cnil;
	goto T2169;
	goto T2170;
T2170:;
	if(type_of(car((V580)))==t_symbol){
	goto T2172;}
	V586= Cnil;
	goto T2169;
	goto T2172;
T2172:;
	if(!((car((V580)))==(VV[218]))){
	goto T2176;}
	goto T2174;
	goto T2176;
T2176:;
	base[0]= car((V580));
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	V587= vs_base[0];
	if((V587)==Cnil){
	goto T2174;}
	V586= Cnil;
	goto T2169;
	goto T2174;
T2174:;
	{register object V588;
	register long V589;
	V588= cdr((V580));
	V589= 1;
	goto T2183;
T2183:;
	if((V589)>=(1000)){
	goto T2185;}
	if(type_of((V588))==t_cons){
	goto T2184;}
	goto T2185;
T2185:;
	V586= Cnil;
	goto T2169;
	goto T2184;
T2184:;
	if(!(type_of(car((V588)))==t_cons)){
	goto T2190;}
	if(!((caar((V588)))==(VV[65]))){
	goto T2190;}
	V581= cadr(car((V588)));
	if(!(type_of((V581))==t_cons)){
	goto T2190;}
	if(!((car((V581)))==(VV[219]))){
	goto T2190;}
	{register object V590;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V590= vs_base[0];
	base[0]= listA(3,VV[52],(V590),cdr((V581)));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk273)();
	vs_top=sup;
	base[1]= (V580);
	base[2]= small_fixnum(0);
	base[3]= make_fixnum(V589);
	vs_top=(vs_base=base+1)+3;
	Lsubseq();
	vs_top=sup;
	base[0]= vs_base[0];
	V591= list(2,VV[220],list(2,VV[92],(V590)));
	base[1]= make_cons(/* INLINE-ARGS */V591,Cnil);
	V592 = make_fixnum(V589);
	V593= number_plus(small_fixnum(1),V592);
	base[2]= nthcdr(fixint(/* INLINE-ARGS */V593),(V580));
	vs_top=(vs_base=base+0)+3;
	Lappend();
	vs_top=sup;
	V580= vs_base[0];
	goto TTL;}
	goto T2190;
T2190:;
	if(type_of((V588))==t_cons){
	goto T2213;}
	V588= Cnil;
	goto T2212;
	goto T2213;
T2213:;
	V588= cdr((V588));
	goto T2212;
T2212:;
	V589= (long)(1)+(V589);
	goto T2183;}
	goto T2169;
T2169:;
	if(((V586))==Cnil){
	goto T2218;}
	{object V594 = (V586);
	VMR37(V594)}
	goto T2218;
T2218:;
	(void)((*(LnkLI269))(Cnil,(V580)));
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[59],Cnil);
	bds_bind(VV[53],Cnil);
	{object V595;
	V595= list(2,VV[217],(V580));
	setq(VV[25],make_cons((V595),symbol_value(VV[25])));}
	{object V596 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR37(V596)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2ORDINARY	*/

static object LI39(V598)

object V598;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	{object V599;
	V599= (type_of((V598))!=t_cons?Ct:Cnil);
	if(((V599))==Cnil){
	goto T2226;}
	{object V600 = (V599);
	VMR38(V600)}
	goto T2226;
T2226:;
	{object V601;
	base[0]= (V598);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	V601= vs_base[0];
	if(((V601))==Cnil){
	goto T2231;}
	{object V602 = (V601);
	VMR38(V602)}
	goto T2231;
T2231:;
	{object V603 = (VFUN_NARGS=1,(*(LnkLI304))((V598)));
	VMR38(V603)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-LOAD-TIME-SHARP-COMMA	*/

static object LI40()

{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	{register object V604;
	register object V605;
	V604= reverse(symbol_value(VV[53]));
	V605= car((V604));
	goto T2236;
T2236:;
	if(!(endp_prop((V604)))){
	goto T2237;}
	{object V606 = Cnil;
	VMR39(V606)}
	goto T2237;
T2237:;
	if(!(type_of((V605))!=t_cons)){
	goto T2241;}
	(void)((*(LnkLI343))());
	goto T2241;
T2241:;
	{register object V607;
	V607= make_cons(VV[221],(V605));
	setq(VV[25],make_cons((V607),symbol_value(VV[25])));}
	V604= cdr((V604));
	V605= car((V604));
	goto T2236;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2SHARP-COMMA	*/

static object LI41(V610,V611)

object V610;object V611;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	V612= list(3,VV[222],(V610),(V611));
	{object V613 = (VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V612));
	VMR40(V613)}
	return Cnil;
}
/*	local entry for function T2DECLARE	*/

static object LI42(V615)

object V615;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V616 = (*(LnkLI343))();
	VMR41(V616)}
	return Cnil;
}
/*	local entry for function T1DEFINE-STRUCTURE	*/

static object LI43(V618)

object V618;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	V619= (*(LnkLI269))(Cnil,Cnil);
	V620= make_cons(((/* INLINE-ARGS */V619)==Cnil?Ct:Cnil),Cnil);
	V621= append((V618),/* INLINE-ARGS */V620);
	V622= make_cons(VV[223],/* INLINE-ARGS */V621);
	(void)((*(LnkLI269))(Ct,/* INLINE-ARGS */V622));
	V623= make_cons(VV[223],(V618));
	{object V624 = (*(LnkLI274))(/* INLINE-ARGS */V623);
	VMR42(V624)}
	return Cnil;
}
/*	local entry for function SET-DBIND	*/

static object LI44(V627,V628)

object V627;object V628;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	princ_str("\n	VV[",VV[26]);
	(void)((*(LnkLI275))((V628)));
	princ_str("]->s.s_dbind = ",VV[26]);
	(void)((*(LnkLI275))((V627)));
	princ_char(59,VV[26]);
	{object V629 = Cnil;
	VMR43(V629)}
	return Cnil;
}
/*	local entry for function T1CLINES	*/

static object LI45(V631)

object V631;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{register object V632;
	register object V633;
	V632= (V631);
	V633= car((V632));
	goto T2263;
T2263:;
	if(!(endp_prop((V632)))){
	goto T2264;}
	goto T2259;
	goto T2264;
T2264:;
	if(type_of((V633))==t_string){
	goto T2268;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[224],(V633))));
	goto T2268;
T2268:;
	V632= cdr((V632));
	V633= car((V632));
	goto T2263;}
	goto T2259;
T2259:;
	{object V634;
	V634= list(2,VV[225],(V631));
	setq(VV[25],make_cons((V634),symbol_value(VV[25])));
	{object V635 = symbol_value(VV[25]);
	VMR44(V635)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3CLINES	*/

static object LI46(V637)

object V637;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	{register object V638;
	register object V639;
	V638= (V637);
	V639= car((V638));
	goto T2281;
T2281:;
	if(!(endp_prop((V638)))){
	goto T2282;}
	{object V640 = Cnil;
	VMR45(V640)}
	goto T2282;
T2282:;
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))((V639)));
	V638= cdr((V638));
	V639= car((V638));
	goto T2281;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFCFUN	*/

static object LI47(V642)

object V642;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{register object V643;
	V643= Cnil;
	if(endp_prop((V642))){
	goto T2296;}
	if(!(endp_prop(cdr((V642))))){
	goto T2295;}
	goto T2296;
T2296:;
	V644 = make_fixnum((long)length((V642)));
	(void)((*(LnkLI284))(VV[226],small_fixnum(2),V644));
	goto T2295;
T2295:;
	if(type_of(car((V642)))==t_string){
	goto T2300;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[227],car((V642)))));
	goto T2300;
T2300:;
	{object V645= cadr((V642));
	if(type_of(V645)==t_fixnum||
type_of(V645)==t_bignum||
type_of(V645)==t_ratio||
type_of(V645)==t_shortfloat||
type_of(V645)==t_longfloat||
type_of(V645)==t_complex){
	goto T2303;}}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[228],cadr((V642)))));
	goto T2303;
T2303:;
	{register object V646;
	register object V647;
	V646= cddr((V642));
	V647= car((V646));
	goto T2310;
T2310:;
	if(!(endp_prop((V646)))){
	goto T2311;}
	goto T2306;
	goto T2311;
T2311:;
	if(!(type_of((V647))==t_string)){
	goto T2317;}
	{register object V648;
	V648= (V647);
	V643= make_cons((V648),(V643));
	goto T2315;}
	goto T2317;
T2317:;
	if(!(type_of((V647))==t_cons)){
	goto T2322;}
	if(!(type_of(car((V647)))==t_symbol)){
	goto T2325;}
	base[2]= car((V647));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2327;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[229],car((V647)))));
	goto T2327;
T2327:;
	{register object V649;
	V650= car((V647));
	V651= (*(LnkLI344))(cdr((V647)));
	V652= make_cons(/* INLINE-ARGS */V650,/* INLINE-ARGS */V651);
	V649= make_cons(/* INLINE-ARGS */V652,Cnil);
	V643= make_cons((V649),(V643));
	goto T2315;}
	goto T2325;
T2325:;
	if(!(type_of(car((V647)))==t_cons)){
	goto T2334;}
	if(!(type_of(caar((V647)))==t_symbol)){
	goto T2334;}
	if(!((caar((V647)))==(VV[92]))){
	goto T2341;}
	if(!(endp_prop(cdar((V647))))){
	goto T2343;}
	goto T2334;
	goto T2343;
T2343:;
	if(!(((endp_prop(cddar((V647)))?Ct:Cnil))==Cnil)){
	goto T2345;}
	goto T2334;
	goto T2345;
T2345:;
	if(!(endp_prop(cdr((V647))))){
	goto T2347;}
	goto T2334;
	goto T2347;
T2347:;
	if(((endp_prop(cddr((V647)))?Ct:Cnil))==Cnil){
	goto T2334;}
	goto T2339;
	goto T2341;
T2341:;
	base[2]= caar((V647));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2334;}
	goto T2339;
T2339:;
	{register object V653;
	V654= caar((V647));
	if(!((caar((V647)))==(VV[92]))){
	goto T2353;}
	V656= (*(LnkLI329))(cadar((V647)));
	V655= make_cons(/* INLINE-ARGS */V656,Cnil);
	goto T2351;
	goto T2353;
T2353:;
	V655= (*(LnkLI344))(cdar((V647)));
	goto T2351;
T2351:;
	V657= make_cons(/* INLINE-ARGS */V654,V655);
	V658= (*(LnkLI344))(cdr((V647)));
	V653= make_cons(/* INLINE-ARGS */V657,/* INLINE-ARGS */V658);
	V643= make_cons((V653),(V643));
	goto T2315;}
	goto T2334;
T2334:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[230],(V647))));
	goto T2315;
	goto T2322;
T2322:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[231],(V647))));
	goto T2315;
T2315:;
	V646= cdr((V646));
	V647= car((V646));
	goto T2310;}
	goto T2306;
T2306:;
	{object V659;
	V660= car((V642));
	V661= cadr((V642));
	V659= list(4,VV[226],/* INLINE-ARGS */V660,/* INLINE-ARGS */V661,reverse((V643)));
	setq(VV[25],make_cons((V659),symbol_value(VV[25])));
	{object V662 = symbol_value(VV[25]);
	VMR46(V662)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3DEFCFUN	*/

static object LI48(V666,V667,V668)

object V666;object V667;object V668;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{object V669;
	V669= Cnil;
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[232],VV[226])));
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))((V666)));
	princ_str("\n{",VV[26]);
	princ_str("\nobject *vs=vs_top;",VV[26]);
	princ_str("\nobject *old_top=vs_top+",VV[26]);
	(void)((*(LnkLI275))((V667)));
	princ_char(59,VV[26]);
	if(!(number_compare((V667),small_fixnum(0))>0)){
	goto T2376;}
	princ_str("\n	vs_top=old_top;",VV[26]);
	goto T2376;
T2376:;
	princ_str("\n{",VV[26]);
	{object V670;
	register object V671;
	V670= (V668);
	V671= car((V670));
	goto T2386;
T2386:;
	if(!(endp_prop((V670)))){
	goto T2387;}
	goto T2382;
	goto T2387;
T2387:;
	if(!(type_of((V671))==t_string)){
	goto T2393;}
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))((V671)));
	goto T2391;
	goto T2393;
T2393:;
	if(!((caar((V671)))==(VV[92]))){
	goto T2398;}
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))(cadadr((V671))));
	{object V672= caadr((V671));
	if((V672!= VV[75]))goto T2403;
	princ_str("=VV[",VV[26]);
	(void)((*(LnkLI275))(cadar((V671))));
	princ_str("];",VV[26]);
	goto T2391;
	goto T2403;
T2403:;
	princ_str("=object_to_",VV[26]);
	base[1]= symbol_name(caadr((V671)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V673= vs_base[0];
	(void)((*(LnkLI275))(V673));
	princ_str("(VV[",VV[26]);
	(void)((*(LnkLI275))(cadar((V671))));
	princ_str("]);",VV[26]);
	goto T2391;}
	goto T2398;
T2398:;
	princ_str("\n{vs_base=vs_top=old_top;",VV[26]);
	{register object V674;
	register object V675;
	V674= cdar((V671));
	V675= car((V674));
	goto T2420;
T2420:;
	if(!(endp_prop((V674)))){
	goto T2421;}
	goto T2416;
	goto T2421;
T2421:;
	princ_str("\nvs_push(",VV[26]);
	{object V676= car((V675));
	if((V676!= VV[75]))goto T2428;
	(void)((*(LnkLI275))(cadr((V675))));
	goto T2427;
	goto T2428;
T2428:;
	if((V676!= VV[345]))goto T2430;
	princ_str("code_char((long)",VV[26]);
	(void)((*(LnkLI275))(cadr((V675))));
	princ_char(41,VV[26]);
	goto T2427;
	goto T2430;
T2430:;
	if((V676!= VV[346]))goto T2434;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[115]))==0)){
	goto T2435;}
	princ_str("CMP",VV[26]);
	goto T2435;
T2435:;
	princ_str("make_fixnum((long)",VV[26]);
	(void)((*(LnkLI275))(cadr((V675))));
	princ_char(41,VV[26]);
	goto T2427;
	goto T2434;
T2434:;
	if((V676!= VV[347]))goto T2442;
	princ_str("make_shortfloat((double)",VV[26]);
	(void)((*(LnkLI275))(cadr((V675))));
	princ_char(41,VV[26]);
	goto T2427;
	goto T2442;
T2442:;
	if((V676!= VV[348]))goto T2446;
	princ_str("make_longfloat((double)",VV[26]);
	(void)((*(LnkLI275))(cadr((V675))));
	princ_char(41,VV[26]);
	goto T2427;
	goto T2446;
T2446:;}
	goto T2427;
T2427:;
	princ_str(");",VV[26]);
	V674= cdr((V674));
	V675= car((V674));
	goto T2420;}
	goto T2416;
T2416:;
	{register object x= caar((V671)),V677= symbol_value(VV[80]);
	while(!endp(V677))
	if(type_of(V677->c.c_car)==t_cons &&eql(x,V677->c.c_car->c.c_car)){
	V669= (V677->c.c_car);
	goto T2461;
	}else V677=V677->c.c_cdr;
	V669= Cnil;}
	goto T2461;
T2461:;
	if(((V669))==Cnil){
	goto T2459;}
	if((symbol_value(VV[150]))==Cnil){
	goto T2463;}
	princ_str("\nihs_push(VV[",VV[26]);
	V678= (*(LnkLI331))(caar((V671)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V678));
	princ_str("]);",VV[26]);
	princ_str("\nL",VV[26]);
	(void)((*(LnkLI275))(cdr((V669))));
	princ_str("();",VV[26]);
	princ_str("\nihs_pop();",VV[26]);
	goto T2457;
	goto T2463;
T2463:;
	princ_str("\nL",VV[26]);
	(void)((*(LnkLI275))(cdr((V669))));
	princ_str("();",VV[26]);
	goto T2457;
	goto T2459;
T2459:;
	if((symbol_value(VV[150]))==Cnil){
	goto T2478;}
	princ_str("\nsuper_funcall(VV[",VV[26]);
	V679= (*(LnkLI331))(caar((V671)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V679));
	princ_str("]);",VV[26]);
	goto T2457;
	goto T2478;
T2478:;
	if((symbol_value(VV[164]))==Cnil){
	goto T2484;}
	princ_str("\nsuper_funcall_no_event(VV[",VV[26]);
	V680= (*(LnkLI331))(caar((V671)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V680));
	princ_str("]);",VV[26]);
	goto T2457;
	goto T2484;
T2484:;
	princ_str("\nCMPfuncall(VV[",VV[26]);
	V681= (*(LnkLI331))(caar((V671)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V681));
	princ_str("]->s.s_gfdef);",VV[26]);
	goto T2457;
T2457:;
	if(endp_prop(cdr((V671)))){
	goto T2492;}
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))(cadadr((V671))));
	{object V682= caadr((V671));
	if((V682!= VV[75]))goto T2499;
	princ_str("=vs_base[0];",VV[26]);
	goto T2498;
	goto T2499;
T2499:;
	princ_str("=object_to_",VV[26]);
	base[1]= symbol_name(caadr((V671)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V683= vs_base[0];
	(void)((*(LnkLI275))(V683));
	princ_str("(vs_base[0]);",VV[26]);}
	goto T2498;
T2498:;
	{register object V684;
	register object V685;
	V684= cddr((V671));
	V685= car((V684));
	goto T2509;
T2509:;
	if(!(endp_prop((V684)))){
	goto T2510;}
	goto T2492;
	goto T2510;
T2510:;
	princ_str("\nvs_base++;",VV[26]);
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))(cadr((V685))));
	{object V686= car((V685));
	if((V686!= VV[75]))goto T2520;
	princ_str("=(vs_base<vs_top?vs_base[0]:Cnil);",VV[26]);
	goto T2519;
	goto T2520;
T2520:;
	princ_str("=object_to_",VV[26]);
	base[3]= symbol_name(car((V685)));
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V687= vs_base[0];
	(void)((*(LnkLI275))(V687));
	princ_str("((vs_base<vs_top?vs_base[0]:Cnil));",VV[26]);}
	goto T2519;
T2519:;
	V684= cdr((V684));
	V685= car((V684));
	goto T2509;}
	goto T2492;
T2492:;
	princ_str("\n}",VV[26]);
	goto T2391;
T2391:;
	V670= cdr((V670));
	V671= car((V670));
	goto T2386;}
	goto T2382;
T2382:;
	princ_str("\n}",VV[26]);
	princ_str("\nvs_top=vs;",VV[26]);
	princ_str("\n}",VV[26]);
	{object V688 = Cnil;
	VMR47(V688)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFENTRY	*/

static object LI49(V690)

register object V690;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{register object V691;
	register object V692;
	object V693;
	register object V694;
	V691= Cnil;
	V692= Cnil;
	setq(VV[62],number_plus(symbol_value(VV[62]),small_fixnum(1)));
	V693= symbol_value(VV[62]);
	V694= Cnil;
	if(endp_prop((V690))){
	goto T2549;}
	if(endp_prop(cdr((V690)))){
	goto T2549;}
	if(!(endp_prop(cddr((V690))))){
	goto T2548;}
	goto T2549;
T2549:;
	V695 = make_fixnum((long)length((V690)));
	(void)((*(LnkLI284))(VV[233],small_fixnum(3),V695));
	goto T2548;
T2548:;
	if(type_of(car((V690)))==t_symbol){
	goto T2555;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[234],car((V690)))));
	goto T2555;
T2555:;
	{register object V696;
	register object V697;
	V696= cadr((V690));
	V697= car((V696));
	goto T2562;
T2562:;
	if(!(endp_prop((V696)))){
	goto T2563;}
	goto T2558;
	goto T2563;
T2563:;
	{register object x= (V697),V698= VV[235];
	while(!endp(V698))
	if(eql(x,V698->c.c_car)){
	goto T2567;
	}else V698=V698->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[236],(V697))));
	goto T2567;
T2567:;
	V696= cdr((V696));
	V697= car((V696));
	goto T2562;}
	goto T2558;
T2558:;
	V694= caddr((V690));
	if(!(type_of((V694))==t_symbol)){
	goto T2579;}
	V691= VV[75];
	base[1]= symbol_name((V694));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V692= vs_base[0];
	goto T2577;
	goto T2579;
T2579:;
	if(!(type_of((V694))==t_string)){
	goto T2586;}
	V691= VV[75];
	V692= (V694);
	goto T2577;
	goto T2586;
T2586:;
	if(!(type_of((V694))==t_cons)){
	goto T2592;}
	{register object x= car((V694)),V699= VV[237];
	while(!endp(V699))
	if(eql(x,V699->c.c_car)){
	goto T2596;
	}else V699=V699->c.c_cdr;
	goto T2592;}
	goto T2596;
T2596:;
	if(!(type_of(cdr((V694)))==t_cons)){
	goto T2592;}
	if(type_of(cadr((V694)))==t_symbol){
	goto T2599;}
	if(!(type_of(cadr((V694)))==t_string)){
	goto T2592;}
	goto T2599;
T2599:;
	if(!(endp_prop(cddr((V694))))){
	goto T2592;}
	if(!(type_of(cadr((V694)))==t_symbol)){
	goto T2607;}
	base[1]= symbol_name(cadr((V694)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V692= vs_base[0];
	goto T2605;
	goto T2607;
T2607:;
	V692= cadr((V694));
	goto T2605;
T2605:;
	V691= car((V694));
	goto T2577;
	goto T2592;
T2592:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[238],(V694))));
	goto T2577;
T2577:;
	{object V700;
	V700= list(6,VV[233],car((V690)),(V693),cadr((V690)),(V691),(V692));
	setq(VV[25],make_cons((V700),symbol_value(VV[25])));}
	{object V701;
	V701= make_cons(car((V690)),(V693));
	setq(VV[80],make_cons((V701),symbol_value(VV[80])));
	{object V702 = symbol_value(VV[80]);
	VMR48(V702)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFENTRY	*/

static object LI50(V708,V709,V710,V711,V712)

object V708;object V709;object V710;object V711;object V712;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	princ_str("\nstatic void L",VV[32]);
	(void)((*(LnkLI278))((V709)));
	princ_str("();",VV[32]);
	V713= list(2,VV[92],(V708));
	V714= list(3,VV[112],/* INLINE-ARGS */V713,(*(LnkLI305))(VV[239],(V709)));
	{object V715 = (VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V714));
	VMR49(V715)}
	return Cnil;
}
/*	local entry for function T3DEFENTRY	*/

static object LI51(V721,V722,V723,V724,V725)

object V721;object V722;object V723;register object V724;object V725;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[240],(V721))));
	princ_str("\nstatic void L",VV[26]);
	(void)((*(LnkLI275))((V722)));
	princ_str("()",VV[26]);
	princ_str("\n{	object *old_base=vs_base;",VV[26]);
	{object V726= (V724);
	if((V726!= VV[241]))goto T2628;
	goto T2627;
	goto T2628;
T2628:;
	if((V726!= VV[159]))goto T2629;
	princ_str("\n	char *x;",VV[26]);
	goto T2627;
	goto T2629;
T2629:;
	princ_str("\n	",VV[26]);
	base[0]= symbol_name((V724));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V727= vs_base[0];
	(void)((*(LnkLI275))(V727));
	princ_str(" x;",VV[26]);}
	goto T2627;
T2627:;
	if((symbol_value(VV[164]))==Cnil){
	goto T2636;}
	princ_str("\n	check_arg(",VV[26]);
	V728 = make_fixnum((long)length((V723)));
	(void)((*(LnkLI275))(V728));
	princ_str(");",VV[26]);
	goto T2636;
T2636:;
	if(((V724))==(VV[241])){
	goto T2642;}
	princ_str("\n	x=",VV[26]);
	goto T2642;
T2642:;
	princ_str("\n	",VV[26]);
	(void)((*(LnkLI275))((V725)));
	princ_char(40,VV[26]);
	if(endp_prop((V723))){
	goto T2650;}
	{register object V729;
	register long V730;
	V730= 0;
	V729= (V723);
	goto T2655;
T2655:;
	{object V731= car((V729));
	if((V731!= VV[75]))goto T2659;
	princ_str("\n	vs_base[",VV[26]);
	V732 = make_fixnum(V730);
	(void)((*(LnkLI275))(V732));
	princ_char(93,VV[26]);
	goto T2658;
	goto T2659;
T2659:;
	princ_str("\n	object_to_",VV[26]);
	base[0]= symbol_name(car((V729)));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V733= vs_base[0];
	(void)((*(LnkLI275))(V733));
	princ_str("(vs_base[",VV[26]);
	V734 = make_fixnum(V730);
	(void)((*(LnkLI275))(V734));
	princ_str("])",VV[26]);}
	goto T2658;
T2658:;
	if(!(endp_prop(cdr((V729))))){
	goto T2670;}
	goto T2650;
	goto T2670;
T2670:;
	princ_char(44,VV[26]);
	V729= cdr((V729));
	V730= (long)(V730)+1;
	goto T2655;}
	goto T2650;
T2650:;
	princ_str(");",VV[26]);
	princ_str("\n	vs_top=(vs_base=old_base)+1;",VV[26]);
	princ_str("\n	vs_base[0]=",VV[26]);
	{object V735= (V724);
	if((V735!= VV[241]))goto T2686;
	princ_str("Cnil",VV[26]);
	goto T2685;
	goto T2686;
T2686:;
	if((V735!= VV[75]))goto T2688;
	princ_char(120,VV[26]);
	goto T2685;
	goto T2688;
T2688:;
	if((V735!= VV[345]))goto T2690;
	princ_str("code_char(x)",VV[26]);
	goto T2685;
	goto T2690;
T2690:;
	if((V735!= VV[346]))goto T2692;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[115]))==0)){
	goto T2693;}
	princ_str("CMP",VV[26]);
	goto T2693;
T2693:;
	princ_str("make_fixnum(x)",VV[26]);
	goto T2685;
	goto T2692;
T2692:;
	if((V735!= VV[159]))goto T2698;
	princ_str("make_simple_string(x)",VV[26]);
	goto T2685;
	goto T2698;
T2698:;
	if((V735!= VV[347]))goto T2700;
	princ_str("make_shortfloat(x)",VV[26]);
	goto T2685;
	goto T2700;
T2700:;
	if((V735!= VV[348]))goto T2702;
	princ_str("make_longfloat(x)",VV[26]);
	goto T2685;
	goto T2702;
T2702:;}
	goto T2685;
T2685:;
	princ_char(59,VV[26]);
	princ_str("\n}",VV[26]);
	{object V736 = Cnil;
	VMR50(V736)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFLA	*/

static object LI52(V738)

object V738;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V739 = Cnil;
	VMR51(V739)}
	return Cnil;
}
/*	local entry for function PARSE-CVSPECS	*/

static object LI53(V741)

object V741;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{register object V742;
	V742= Cnil;
	{register object V743;
	register object V744;
	V743= (V741);
	V744= car((V743));
	goto T2711;
T2711:;
	if(!(endp_prop((V743)))){
	goto T2712;}
	{object V745 = reverse((V742));
	VMR52(V745)}
	goto T2712;
T2712:;
	if(!(type_of((V744))==t_symbol)){
	goto T2718;}
	{object V746;
	base[2]= symbol_name((V744));
	vs_top=(vs_base=base+2)+1;
	Lstring_downcase();
	vs_top=sup;
	V747= vs_base[0];
	V746= list(2,VV[75],V747);
	V742= make_cons((V746),(V742));
	goto T2716;}
	goto T2718;
T2718:;
	if(!(type_of((V744))==t_string)){
	goto T2725;}
	{object V748;
	V748= list(2,VV[75],(V744));
	V742= make_cons((V748),(V742));
	goto T2716;}
	goto T2725;
T2725:;
	if(!(type_of((V744))==t_cons)){
	goto T2730;}
	{register object x= car((V744)),V749= VV[242];
	while(!endp(V749))
	if(eql(x,V749->c.c_car)){
	goto T2733;
	}else V749=V749->c.c_cdr;
	goto T2730;}
	goto T2733;
T2733:;
	{register object V750;
	register object V751;
	V750= cdr((V744));
	V751= car((V750));
	goto T2737;
T2737:;
	if(!(endp_prop((V750)))){
	goto T2738;}
	goto T2716;
	goto T2738;
T2738:;
	{register object V752;
	V753= car((V744));
	if(!(type_of((V751))==t_symbol)){
	goto T2746;}
	base[4]= symbol_name((V751));
	vs_top=(vs_base=base+4)+1;
	Lstring_downcase();
	vs_top=sup;
	V754= vs_base[0];
	goto T2744;
	goto T2746;
T2746:;
	if(!(type_of((V751))==t_string)){
	goto T2750;}
	V754= (V751);
	goto T2744;
	goto T2750;
T2750:;
	V754= (VFUN_NARGS=2,(*(LnkLI266))(VV[243],(V751)));
	goto T2744;
T2744:;
	V752= list(2,/* INLINE-ARGS */V753,V754);
	V742= make_cons((V752),(V742));}
	V750= cdr((V750));
	V751= car((V750));
	goto T2737;}
	goto T2730;
T2730:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[244],(V744))));
	goto T2716;
T2716:;
	V743= cdr((V743));
	V744= car((V743));
	goto T2711;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3LOCAL-DCFUN	*/

static object LI54(V760,V761,V762,V763,V764)

object V760;object V761;object V762;register object V763;register object V764;
{	 VMB53 VMS53 VMV53
	bds_check;
	goto TTL;
TTL:;
	{object V765;
	register object V766;
	object V767;
	if(((V760))==Cnil){
	goto T2765;}
	V765= small_fixnum(0);
	goto T2763;
	goto T2765;
T2765:;
	V765= structure_ref((V763),VV[33],4);
	goto T2763;
T2763:;
	V766= Cnil;
	bds_bind(VV[21],(*(LnkLI310))(cadr((V764))));
	bds_bind(VV[118],Cnil);
	V767= caaddr((V764));
	if((structure_ref((V763),VV[33],0))==Cnil){
	goto T2773;}
	V768= structure_ref((V763),VV[33],0);
	goto T2771;
	goto T2773;
T2773:;
	V768= Cnil;
	goto T2771;
T2771:;
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[245],V768)));
	princ_str("\nstatic void ",VV[26]);
	if(((V760))==Cnil){
	goto T2780;}
	V769= VV[246];
	goto T2778;
	goto T2780;
T2780:;
	V769= VV[247];
	goto T2778;
T2778:;
	(void)((*(LnkLI275))(V769));
	V770= structure_ref((V763),VV[33],3);
	(void)((*(LnkLI275))(/* INLINE-ARGS */V770));
	princ_char(40,VV[26]);
	princ_str("base0",VV[26]);
	if(((V767))==Cnil){
	goto T2789;}
	V771= VV[248];
	goto T2787;
	goto T2789;
T2789:;
	V771= VV[249];
	goto T2787;
T2787:;
	(void)((*(LnkLI275))(V771));
	V772= structure_ref(cadr((V764)),VV[63],1);
	(void)((*(LnkLI312))(/* INLINE-ARGS */V772,small_fixnum(2)));
	(void)((*(LnkLI317))(caaddr((V764)),Cnil));
	princ_str("register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base0;",VV[26]);
	bds_bind(VV[250],(V762));
	bds_bind(VV[129],VV[125]);
	bds_bind(VV[19],Cnil);
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],small_fixnum(0));
	bds_bind(VV[132],one_plus((V765)));
	bds_bind(VV[133],(V762));
	bds_bind(VV[134],(V761));
	bds_bind(VV[135],make_cons((VV[129]->s.s_dbind),Cnil));
	bds_bind(VV[136],(VV[129]->s.s_dbind));
	setq(VV[138],number_plus(symbol_value(VV[138]),small_fixnum(1)));
	bds_bind(VV[137],symbol_value(VV[138]));
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],Cnil);
	bds_bind(VV[142],small_fixnum(0));
	V766= (VV[137]->s.s_dbind);
	princ_str("\n{",VV[26]);
	V773= structure_ref(cadr((V764)),VV[63],1);
	V774= structure_ref((V763),VV[33],3);
	(void)((*(LnkLI318))(/* INLINE-ARGS */V773,/* INLINE-ARGS */V774,VV[251]));
	princ_str("\n	VMB",VV[26]);
	(void)((*(LnkLI275))((V766)));
	princ_str(" VMS",VV[26]);
	(void)((*(LnkLI275))((V766)));
	princ_str(" VMV",VV[26]);
	(void)((*(LnkLI275))((V766)));
	if((symbol_value(VV[150]))==Cnil){
	goto T2813;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T2813;
T2813:;
	base[19]= caddr(cddr((V764)));
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk319)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),(VV[131]->s.s_dbind))==0)){
	goto T2821;}
	if(((VV[139]->s.s_dbind))!=Cnil){
	goto T2821;}
	if(((VV[141]->s.s_dbind))!=Cnil){
	goto T2821;}
	goto T2819;
	goto T2821;
T2821:;
	princ_str("\n	base[0]=base[0];",VV[26]);
	goto T2819;
T2819:;
	princ_str("\n}",VV[26]);
	(void)((*(LnkLI320))((V766),Ct));
	V775= structure_ref((V763),VV[33],3);
	{object V776 = (*(LnkLI314))(/* INLINE-ARGS */V775);
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
	VMR53(V776)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3LOCAL-FUN	*/

static object LI55(V782,V783,V784,V785,V786)

object V782;object V783;object V784;object V785;object V786;
{	 VMB54 VMS54 VMV54
	bds_check;
	goto TTL;
TTL:;
	{long V787;
	if(((V782))==Cnil){
	goto T2833;}
	V787= 0;
	goto T2831;
	goto T2833;
T2833:;
	V787= fix(structure_ref((V785),VV[33],4));
	goto T2831;
T2831:;
	bds_bind(VV[21],(*(LnkLI310))(cadr((V786))));
	bds_bind(VV[118],Cnil);
	if(!(((V782))==(VV[252]))){
	goto T2836;}
	{object V788 = (*(LnkLI251))((V782),(V783),(V784),(V785),(V786));
	bds_unwind1;
	bds_unwind1;
	VMR54(V788)}
	goto T2836;
T2836:;
	if((structure_ref((V785),VV[33],0))==Cnil){
	goto T2842;}
	V789= structure_ref((V785),VV[33],0);
	goto T2840;
	goto T2842;
T2842:;
	V789= Cnil;
	goto T2840;
T2840:;
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[253],V789)));
	princ_str("\nstatic void ",VV[32]);
	if(((V782))==Cnil){
	goto T2849;}
	V790= VV[254];
	goto T2847;
	goto T2849;
T2849:;
	V790= VV[255];
	goto T2847;
T2847:;
	(void)((*(LnkLI278))(V790));
	V791= structure_ref((V785),VV[33],3);
	(void)((*(LnkLI278))(/* INLINE-ARGS */V791));
	princ_str("();",VV[32]);
	princ_str("\nstatic void ",VV[26]);
	if(((V782))==Cnil){
	goto T2858;}
	V792= VV[256];
	goto T2856;
	goto T2858;
T2858:;
	V792= VV[257];
	goto T2856;
T2856:;
	(void)((*(LnkLI275))(V792));
	V793= structure_ref((V785),VV[33],3);
	(void)((*(LnkLI275))(/* INLINE-ARGS */V793));
	princ_char(40,VV[26]);
	{register object V794;
	register long V795;
	V794= make_fixnum(V787);
	V795= 0;
	goto T2866;
T2866:;
	V796 = make_fixnum(V795);
	if(!(number_compare(V796,(V794))>=0)){
	goto T2867;}
	princ_str("base",VV[26]);
	V797 = make_fixnum(V795);
	(void)((*(LnkLI275))(V797));
	princ_char(41,VV[26]);
	goto T2862;
	goto T2867;
T2867:;
	princ_str("base",VV[26]);
	V798 = make_fixnum(V795);
	(void)((*(LnkLI275))(V798));
	princ_char(44,VV[26]);
	V795= (long)(V795)+1;
	goto T2866;}
	goto T2862;
T2862:;
	princ_str("\nregister object ",VV[26]);
	{register object V799;
	register long V800;
	V799= make_fixnum(V787);
	V800= 0;
	goto T2887;
T2887:;
	V801 = make_fixnum(V800);
	if(!(number_compare(V801,(V799))>=0)){
	goto T2888;}
	princ_char(42,VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base",VV[26]);
	V802 = make_fixnum(V800);
	(void)((*(LnkLI275))(V802));
	princ_char(59,VV[26]);
	goto T2883;
	goto T2888;
T2888:;
	princ_char(42,VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base",VV[26]);
	V803 = make_fixnum(V800);
	(void)((*(LnkLI275))(V803));
	princ_char(44,VV[26]);
	V800= (long)(V800)+1;
	goto T2887;}
	goto T2883;
T2883:;
	V804= structure_ref(cadr((V786)),VV[63],1);
	(void)((*(LnkLI312))(/* INLINE-ARGS */V804,small_fixnum(2)));
	bds_bind(VV[129],VV[128]);
	bds_bind(VV[250],(V784));
	bds_bind(VV[19],Cnil);
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],small_fixnum(0));
	V805 = make_fixnum(V787);
	bds_bind(VV[132],one_plus(V805));
	bds_bind(VV[133],(V784));
	bds_bind(VV[134],(V783));
	bds_bind(VV[135],make_cons((VV[129]->s.s_dbind),Cnil));
	bds_bind(VV[136],(VV[129]->s.s_dbind));
	setq(VV[138],number_plus(symbol_value(VV[138]),small_fixnum(1)));
	bds_bind(VV[137],symbol_value(VV[138]));
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],Cnil);
	bds_bind(VV[142],small_fixnum(0));
	princ_str("\n{	register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base=vs_base;",VV[26]);
	princ_str("\n	register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("sup=base+VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_char(59,VV[26]);
	V806= structure_ref(cadr((V786)),VV[63],1);
	V807= structure_ref((V785),VV[33],3);
	(void)((*(LnkLI318))(/* INLINE-ARGS */V806,/* INLINE-ARGS */V807,VV[258]));
	princ_str(" VC",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	if((symbol_value(VV[164]))==Cnil){
	goto T2928;}
	princ_str("\n	vs_reserve(VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_str(");",VV[26]);
	goto T2926;
	goto T2928;
T2928:;
	princ_str("\n	vs_check;",VV[26]);
	goto T2926;
T2926:;
	if((symbol_value(VV[150]))==Cnil){
	goto T2934;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T2934;
T2934:;
	if(((V782))==Cnil){
	goto T2940;}
	(void)((VFUN_NARGS=2,(*(LnkLI335))(caddr((V786)),caddr(cddr((V786))))));
	goto T2938;
	goto T2940;
T2940:;
	(void)((VFUN_NARGS=3,(*(LnkLI335))(caddr((V786)),caddr(cddr((V786))),(V785))));
	goto T2938;
T2938:;
	princ_str("\n}",VV[26]);
	{object V808;
	V808= make_cons((VV[137]->s.s_dbind),(VV[131]->s.s_dbind));
	setq(VV[34],make_cons((V808),symbol_value(VV[34])));}
	princ_str("\n#define VC",VV[32]);
	(void)((*(LnkLI278))((VV[137]->s.s_dbind)));
	V809= (*(LnkLI336))();
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
	V810= structure_ref((V785),VV[33],3);
	{object V811 = (*(LnkLI314))(/* INLINE-ARGS */V810);
	bds_unwind1;
	bds_unwind1;
	VMR54(V811)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-CVARS	*/

static object LI56()

{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{register object V812;
	V812= Cnil;
	{register object V813;
	register object V814;
	V813= symbol_value(VV[19]);
	V814= car((V813));
	goto T2955;
T2955:;
	if(!(endp_prop((V813)))){
	goto T2956;}
	goto T2951;
	goto T2956;
T2956:;
	{register object V815;
	if(!(type_of((V814))==t_cons)){
	goto T2963;}
	{register object V816;
	V816= car((V814));
	V814= cdr((V814));
	V815= (V816);
	goto T2961;}
	goto T2963;
T2963:;
	V815= Ct;
	goto T2961;
T2961:;
	if(!(((V812))==((V815)))){
	goto T2970;}
	base[1]= symbol_value(VV[32]);
	base[2]= VV[259];
	base[3]= (V814);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T2968;
	goto T2970;
T2970:;
	if(!(((V812))==Cnil)){
	goto T2976;}
	goto T2975;
	goto T2976;
T2976:;
	base[1]= symbol_value(VV[32]);
	base[2]= VV[260];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	goto T2975;
T2975:;
	V812= (V815);
	base[1]= symbol_value(VV[32]);
	base[2]= VV[261];
	base[3]= (*(LnkLI281))((V812));
	base[4]= (V814);
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
	goto T2968;
T2968:;
	if(!(((V812))==(VV[262]))){
	goto T2960;}
	base[1]= symbol_value(VV[32]);
	base[2]= VV[263];
	base[3]= (V814);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;}
	goto T2960;
T2960:;
	V813= cdr((V813));
	V814= car((V813));
	goto T2955;}
	goto T2951;
T2951:;
	if(symbol_value(VV[19])==Cnil){
	goto T2996;}
	base[0]= symbol_value(VV[32]);
	base[1]= VV[264];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	goto T2996;
T2996:;
	if((symbol_value(VV[17]))==Cnil){
	goto T3000;}
	if(eql(symbol_value(VV[142]),small_fixnum(0))){
	goto T3000;}
	base[0]= symbol_value(VV[32]);
	base[1]= VV[265];
	base[2]= symbol_value(VV[142]);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V817 = vs_base[0];
	VMR55(V817)}
	goto T3000;
T3000:;
	{object V818 = Cnil;
	VMR55(V818)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function DO-DECL	*/

static void L26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_reserve(VM56);
	{object V819;
	check_arg(1);
	V819=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	V820= structure_ref((V819),VV[70],4);
	if(eql(/* INLINE-ARGS */V820,VV[73])){
	goto T3008;}
	goto T3007;
	goto T3008;
T3008:;
	(VV[154]->s.s_dbind)= Ct;
	goto T3007;
T3007:;
	{object V821;
	V821= (*(LnkLI349))((V819));
	if(((V821))==Cnil){
	goto T3013;}
	{object V822;
	setq(VV[89],number_plus(symbol_value(VV[89]),small_fixnum(1)));
	V822= symbol_value(VV[89]);
	(void)(structure_set((V819),VV[70],1,(V821)));
	(void)(structure_set((V819),VV[70],4,(V822)));
	princ_str("\n	",VV[26]);
	if((base0[1])!=Cnil){
	goto T3020;}
	princ_char(123,VV[26]);
	base0[1]= Ct;
	goto T3020;
T3020:;
	base[1]= (V819);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk350)();
	return;}
	goto T3013;
T3013:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
static void LnkT350(){ call_or_link(VV[350],(void **)(void *)&Lnk350);} /* WT-VAR-DECL */
static object  LnkTLI349(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[349],(void **)(void *)&LnkLI349,1,first,ap);va_end(ap);return V1;} /* C2VAR-KIND */
static object  LnkTLI251(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[251],(void **)(void *)&LnkLI251,5,first,ap);va_end(ap);return V1;} /* T3LOCAL-DCFUN */
static object  LnkTLI344(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[344],(void **)(void *)&LnkLI344,1,first,ap);va_end(ap);return V1;} /* PARSE-CVSPECS */
static object  LnkTLI343(){return call_proc0(VV[343],(void **)(void *)&LnkLI343);} /* WFS-ERROR */
static void LnkT342(){ call_or_link(VV[342],(void **)(void *)&Lnk342);} /* C2DM */
static object  LnkTLI341(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[341],(void **)(void *)&LnkLI341,3,first,ap);va_end(ap);return V1;} /* C1DM */
static object  LnkTLI340(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[340],(void **)(void *)&LnkLI340,first,ap);va_end(ap);return V1;} /* REMOVE-DUPLICATES */
static object  LnkTLI339(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[339],(void **)(void *)&LnkLI339,258,first,ap);va_end(ap);return V1;} /* ANALYZE-REGS1 */
static object  LnkTLI338(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[338],(void **)(void *)&LnkLI338,first,ap);va_end(ap);return V1;} /* WARN */
static object  LnkTLI337(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[337],(void **)(void *)&LnkLI337,1,first,ap);va_end(ap);return V1;} /* REGISTER */
static object  LnkTLI336(){return call_proc0(VV[336],(void **)(void *)&LnkLI336);} /* WT-CVARS */
static object  LnkTLI335(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[335],(void **)(void *)&LnkLI335,first,ap);va_end(ap);return V1;} /* C2LAMBDA-EXPR */
static object  LnkTLI334(){return call_proc0(VV[334],(void **)(void *)&LnkLI334);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI333(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[333],(void **)(void *)&LnkLI333,1,first,ap);va_end(ap);return V1;} /* WT-VS */
static object  LnkTLI332(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[332],(void **)(void *)&LnkLI332,1,first,ap);va_end(ap);return V1;} /* C2BIND */
static object  LnkTLI331(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[331],(void **)(void *)&LnkLI331,1,first,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI330(){return call_proc0(VV[330],(void **)(void *)&LnkLI330);} /* BABOON */
static object  LnkTLI329(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[329],(void **)(void *)&LnkLI329,1,first,ap);va_end(ap);return V1;} /* ADD-OBJECT */
static void LnkT328(){ call_or_link(VV[328],(void **)(void *)&Lnk328);} /* INC-INLINE-BLOCKS */
static object  LnkTLI327(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[327],(void **)(void *)&LnkLI327,first,ap);va_end(ap);return V1;} /* CS-PUSH */
static object  LnkTLI326(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[326],(void **)(void *)&LnkLI326,2,first,ap);va_end(ap);return V1;} /* C2BIND-INIT */
static object  LnkTLI325(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[325],(void **)(void *)&LnkLI325,2,first,ap);va_end(ap);return V1;} /* C2BIND-LOC */
static object  LnkTLI324(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[324],(void **)(void *)&LnkLI324,1,first,ap);va_end(ap);return V1;} /* SET-UP-VAR-CVS */
static object  LnkTLI323(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[323],(void **)(void *)&LnkLI323,first,ap);va_end(ap);return V1;} /* CONCATENATE */
static object  LnkTLI322(){return call_proc0(VV[322],(void **)(void *)&LnkLI322);} /* CVS-PUSH */
static object  LnkTLI321(){return call_proc0(VV[321],(void **)(void *)&LnkLI321);} /* VS-PUSH */
static object  LnkTLI320(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[320],(void **)(void *)&LnkLI320,2,first,ap);va_end(ap);return V1;} /* WT-V*-MACROS */
static void LnkT319(){ call_or_link(VV[319],(void **)(void *)&Lnk319);} /* C2EXPR */
static object  LnkTLI318(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[318],(void **)(void *)&LnkLI318,3,first,ap);va_end(ap);return V1;} /* ASSIGN-DOWN-VARS */
static object  LnkTLI317(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[317],(void **)(void *)&LnkLI317,2,first,ap);va_end(ap);return V1;} /* WT-REQUIREDS */
static object  LnkTLI316(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[316],(void **)(void *)&LnkLI316,first,ap);va_end(ap);return V1;} /* WT-COMMENT */
static object  LnkTLI315(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[315],(void **)(void *)&LnkLI315,2,first,ap);va_end(ap);return V1;} /* ADD-DEBUG-INFO */
static object  LnkTLI314(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[314],(void **)(void *)&LnkLI314,1,first,ap);va_end(ap);return V1;} /* WT-DOWNWARD-CLOSURE-MACRO */
static void LnkT313(){ call_or_link(VV[313],(void **)(void *)&Lnk313);} /* T3DEFUN-AUX */
static object  LnkTLI312(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[312],(void **)(void *)&LnkLI312,258,first,ap);va_end(ap);return V1;} /* ANALYZE-REGS */
static void LnkT311(){ call_or_link(VV[311],(void **)(void *)&Lnk311);} /* FIXNUMP */
static object  LnkTLI310(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[310],(void **)(void *)&LnkLI310,1,first,ap);va_end(ap);return V1;} /* VOLATILE */
static object  LnkTLI309(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[309],(void **)(void *)&LnkLI309,1,first,ap);va_end(ap);return V1;} /* MAXARGS */
static object  LnkTLI308(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[308],(void **)(void *)&LnkLI308,1,first,ap);va_end(ap);return V1;} /* VARARG-P */
static object  LnkTLI307(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[307],(void **)(void *)&LnkLI307,3,first,ap);va_end(ap);return V1;} /* WT-IF-PROCLAIMED */
static object  LnkTLI306(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[306],(void **)(void *)&LnkLI306,258,first,ap);va_end(ap);return V1;} /* PROCLAIMED-ARGD */
static object  LnkTLI305(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[305],(void **)(void *)&LnkLI305,2,first,ap);va_end(ap);return V1;} /* ADD-ADDRESS */
static object  LnkTLI304(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[304],(void **)(void *)&LnkLI304,first,ap);va_end(ap);return V1;} /* ADD-INIT */
static object  LnkTLI303(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[303],(void **)(void *)&LnkLI303,first,ap);va_end(ap);return V1;} /* FAST-LINK-PROCLAIMED-TYPE-P */
static object  LnkTLI302(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[302],(void **)(void *)&LnkLI302,2,first,ap);va_end(ap);return V1;} /* SHIFT<< */
static object  LnkTLI301(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[301],(void **)(void *)&LnkLI301,257,first,ap);va_end(ap);return V1;} /* F-TYPE */
static void LnkT300(){ call_or_link(VV[300],(void **)(void *)&Lnk300);} /* SUBTYPEP */
static void LnkT299(){ call_or_link(VV[299],(void **)(void *)&Lnk299);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI298(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[298],(void **)(void *)&LnkLI298,first,ap);va_end(ap);return V1;} /* MAKE-ARRAY */
static object  LnkTLI297(){return call_proc0(VV[297],(void **)(void *)&LnkLI297);} /* ADD-LOAD-TIME-SHARP-COMMA */
static object  LnkTLI296(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[296],(void **)(void *)&LnkLI296,2,first,ap);va_end(ap);return V1;} /* MAKE-INLINE-STRING */
static object  LnkTLI295(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[295],(void **)(void *)&LnkLI295,2,first,ap);va_end(ap);return V1;} /* TYPE-AND */
static object  LnkTLI294(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[294],(void **)(void *)&LnkLI294,2,first,ap);va_end(ap);return V1;} /* CMPFIX-ARGS */
static object  LnkTLI293(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[293],(void **)(void *)&LnkLI293,1,first,ap);va_end(ap);return V1;} /* PROCLAIM */
static object  LnkTLI292(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[292],(void **)(void *)&LnkLI292,1,first,ap);va_end(ap);return V1;} /* CHECK-DOWNWARD */
static object  LnkTLI291(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[291],(void **)(void *)&LnkLI291,first,ap);va_end(ap);return V1;} /* C1LAMBDA-EXPR */
static object  LnkTLI290(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[290],(void **)(void *)&LnkLI290,1,first,ap);va_end(ap);return V1;} /* T1PROGN */
static object  LnkTLI284(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[284],(void **)(void *)&LnkLI284,3,first,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */
static void LnkT283(){ call_or_link(VV[283],(void **)(void *)&Lnk283);} /* CMP-EVAL */
static void LnkT282(){ call_or_link(VV[282],(void **)(void *)&Lnk282);} /* DECLARATION-TYPE */
static object  LnkTLI281(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[281],(void **)(void *)&LnkLI281,1,first,ap);va_end(ap);return V1;} /* REP-TYPE */
static void LnkT280(){ call_or_link(VV[280],(void **)(void *)&Lnk280);} /* WT-DATA-FILE */
static object  LnkTLI279(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[279],(void **)(void *)&LnkLI279,1,first,ap);va_end(ap);return V1;} /* PUSH-DATA-INCF */
static object  LnkTLI278(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[278],(void **)(void *)&LnkLI278,1,first,ap);va_end(ap);return V1;} /* WT-H1 */
static object  LnkTLI277(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[277],(void **)(void *)&LnkLI277,1,first,ap);va_end(ap);return V1;} /* WT-FUNCTION-LINK */
static void LnkT276(){ call_or_link(VV[276],(void **)(void *)&Lnk276);} /* WT-GLOBAL-ENTRY */
static void LnkT258(){ call_or_link(VV[258],(void **)(void *)&Lnk258);} /* T3LOCAL-FUN */
static object  LnkTLI275(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[275],(void **)(void *)&LnkLI275,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI274(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[274],(void **)(void *)&LnkLI274,1,first,ap);va_end(ap);return V1;} /* T1ORDINARY */
static void LnkT273(){ call_or_link(VV[273],(void **)(void *)&Lnk273);} /* T1EXPR */
static object  LnkTLI272(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[272],(void **)(void *)&LnkLI272,1,first,ap);va_end(ap);return V1;} /* CMP-MACROEXPAND-1 */
static object  LnkTLI271(){return call_proc0(VV[271],(void **)(void *)&LnkLI271);} /* PRINT-CURRENT-FORM */
static object  LnkTLI270(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[270],(void **)(void *)&LnkLI270,1,first,ap);va_end(ap);return V1;} /* WT-DATA-PACKAGE-OPERATION */
static object  LnkTLI269(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[269],(void **)(void *)&LnkLI269,2,first,ap);va_end(ap);return V1;} /* MAYBE-EVAL */
static object  LnkTLI268(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[268],(void **)(void *)&LnkLI268,3,first,ap);va_end(ap);return V1;} /* CMP-EXPAND-MACRO */
static object  LnkTLI267(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[267],(void **)(void *)&LnkLI267,first,ap);va_end(ap);return V1;} /* CMPWARN */
static object  LnkTLI266(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[266],(void **)(void *)&LnkLI266,first,ap);va_end(ap);return V1;} /* CMPERR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

