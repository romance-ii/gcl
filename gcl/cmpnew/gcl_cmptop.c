
#include "cmpinclude.h"
#include "gcl_cmptop.h"
void init_gcl_cmptop(){do_init(VV);}
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
	if((V65!= VV[44]))goto T373;
	V62= Ct;
	goto T370;
	goto T373;
T373:;
	if((V65!= VV[286]))goto T375;
	goto T370;
	goto T375;
T375:;
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
	goto T383;}
	base[2]= (*(LnkLI287))(cdr((V60)));
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T383;
T383:;
	if(((V62))==Cnil){
	goto T386;}
	base[2]= make_cons(VV[47],cdr((V60)));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk283)();
	bds_unwind1;
	return;
	goto T386;
T386:;
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
	goto T390;}
	bds_bind(VV[49],Ct);
	{object V68 = (*(LnkLI287))(cdr((V67)));
	bds_unwind1;
	VMR6(V68)}
	goto T390;
T390:;
	{register object V69;
	register object V70;
	V69= (V67);
	V70= car((V69));
	goto T395;
T395:;
	if(!(endp_prop((V69)))){
	goto T396;}
	{object V71 = Cnil;
	VMR6(V71)}
	goto T396;
T396:;
	base[1]= (V70);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk273)();
	vs_top=sup;
	V69= cdr((V69));
	V70= car((V69));
	goto T395;}
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
	goto T414;
T414:;
	if(!(endp_prop((V78)))){
	goto T415;}
	goto T410;
	goto T415;
T415:;
	{register object x= car((V79)),V80= (V77);
	while(!endp(V80))
	if(eql(x,V80->c.c_car)){
	V76= V80;
	goto T420;
	}else V80=V80->c.c_cdr;
	V76= Cnil;}
	goto T420;
T420:;
	if((V76)==Cnil){
	goto T421;}
	{register object V81;
	register object V82;
	V81= (V76);
	V82= cadr((V79));
	if(type_of((V81))!=t_cons)FEwrong_type_argument(Scons,(V81));
	((V81))->c.c_car = (V82);}
	goto T421;
T421:;
	V78= cdr((V78));
	V79= car((V78));
	goto T414;}
	goto T410;
T410:;
	{register object x= VV[50],V83= (V77);
	while(!endp(V83))
	if(eql(x,V83->c.c_car)){
	V76= V83;
	goto T434;
	}else V83=V83->c.c_cdr;
	V76= Cnil;}
	goto T434;
T434:;
	if(((V76))==Cnil){
	goto T432;}
	{object V85;
	V85= append((V75),cdr((V76)));
	if(type_of(V76)!=t_cons)FEwrong_type_argument(Scons,V76);
	(V76)->c.c_cdr = (V85);
	goto T430;}
	goto T432;
T432:;
	V86= make_cons(VV[50],(V75));
	V77= append((V77),/* INLINE-ARGS */V86);
	goto T430;
T430:;
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
	goto T440;}
	if(!(endp_prop(cdr((V89))))){
	goto T439;}
	goto T440;
T440:;
	V92 = make_fixnum((long)length((V89)));
	(void)((*(LnkLI284))(VV[52],small_fixnum(2),V92));
	goto T439;
T439:;
	if(type_of(car((V89)))==t_symbol){
	goto T444;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[54],car((V89)))));
	goto T444;
T444:;
	V93= make_cons(VV[52],(V89));
	(void)((*(LnkLI269))(Cnil,/* INLINE-ARGS */V93));
	goto T449;
T449:;
	setq(VV[6],Ct);
	setq(VV[55],Cnil);
	{register object V94;
	object V95;
	object V96;
	register object V97;{object V98;
	V98= get(car((V89)),VV[61],Cnil);
	if(V98==Cnil)goto T456;
	V95= V98;
	goto T455;
	goto T456;
T456:;}
	setq(VV[62],number_plus(symbol_value(VV[62]),small_fixnum(1)));
	V95= symbol_value(VV[62]);
	goto T455;
T455:;
	V97= car((V89));
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[59],Cnil);
	V94= Cnil;
	bds_bind(VV[60],Cnil);
	V96= Cnil;
	V94= (VFUN_NARGS=2,(*(LnkLI288))(cdr((V89)),(V97)));
	if(!(eql((V90),symbol_value(VV[51])))){
	goto T463;}
	goto T462;
	goto T463;
T463:;
	(void)(structure_set(cadr((V94)),VV[63],4,Ct));
	goto T462;
T462:;
	V99= structure_ref(cadr((V94)),VV[63],1);
	(void)((*(LnkLI289))(/* INLINE-ARGS */V99));
	if((get((V97),VV[64],Cnil))==Cnil){
	goto T466;}
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
	(void)((*(LnkLI290))(/* INLINE-ARGS */V102));}
	goto T466;
T466:;
	if((get((V97),VV[67],Cnil))==Cnil){
	goto T477;}
	{object V103;
	register object V104;
	V103= caddr((V94));
	V104= Cnil;
	if((cadr((V103)))==Cnil){
	goto T482;}
	goto T477;
	goto T482;
T482:;
	if((caddr((V103)))==Cnil){
	goto T484;}
	goto T477;
	goto T484;
T484:;
	if((cadddr((V103)))==Cnil){
	goto T486;}
	goto T477;
	goto T486;
T486:;
	if(((long)length(car((V103))))<(64)){
	goto T488;}
	goto T477;
	goto T488;
T488:;
	{register object V105;
	register object V106;
	object V107;
	V105= car((V103));
	V106= get((V97),VV[68],Cnil);
	V107= Cnil;
	goto T495;
T495:;
	if(!(endp_prop((V105)))){
	goto T496;}
	if(endp_prop((V106))){
	goto T499;}
	goto T491;
	goto T499;
T499:;
	if(((V104))==Cnil){
	goto T502;}
	V89= (*(LnkLI291))((V89),(V104));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T449;
	goto T502;
T502:;
	if(((V107))==Cnil){
	goto T490;}
	goto T491;
	goto T496;
T496:;
	{register object V108;
	V108= car((V105));
	if(!(equal(car((V106)),VV[69]))){
	goto T509;}
	goto T491;
	goto T509;
T509:;
	V109= structure_ref((V108),VV[70],1);
	if((/* INLINE-ARGS */V109)==(VV[71])){
	goto T515;}
	V110= structure_ref((V108),VV[70],1);
	if(!((/* INLINE-ARGS */V110)==(VV[72]))){
	goto T514;}
	if(!((car((V106)))==(Ct))){
	goto T514;}
	goto T515;
T515:;
	if((structure_ref((V108),VV[70],3))!=Cnil){
	goto T514;}
	V111= structure_ref((V108),VV[70],4);
	if(!((/* INLINE-ARGS */V111)==(VV[73]))){
	goto T513;}
	goto T514;
T514:;
	{object V112;
	V113= structure_ref((V108),VV[70],0);
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V114= vs_base[0];
	V112= list(2,/* INLINE-ARGS */V113,V114);
	V104= make_cons((V112),(V104));}
	goto T513;
T513:;
	V115= car((V106));
	V116= structure_ref((V108),VV[70],5);
	if(((*(LnkLI292))(/* INLINE-ARGS */V115,/* INLINE-ARGS */V116))==Cnil){
	goto T512;}
	{register object x= car((V106)),V117= VV[74];
	while(!endp(V117))
	if(eql(x,V117->c.c_car)){
	goto T507;
	}else V117=V117->c.c_cdr;}
	V118= structure_ref((V108),VV[70],4);
	if((/* INLINE-ARGS */V118)==(VV[75])){
	goto T507;}
	if((symbol_value(VV[76]))!=Cnil){
	goto T507;}
	V120= structure_ref(cadr((V94)),VV[63],0);
	{register object x= (V108),V119= /* INLINE-ARGS */V120;
	while(!endp(V119))
	if(eql(x,V119->c.c_car)){
	goto T537;
	}else V119=V119->c.c_cdr;
	goto T507;}
	goto T537;
T537:;
	goto T512;
T512:;
	if(((V104))!=Cnil){
	goto T538;}
	V121= structure_ref((V108),VV[70],0);
	(void)((VFUN_NARGS=3,(*(LnkLI267))(VV[77],(V97),/* INLINE-ARGS */V121)));
	goto T538;
T538:;
	V107= Ct;}
	goto T507;
T507:;
	V105= cdr((V105));
	V106= cdr((V106));
	goto T495;}
	goto T491;
T491:;
	goto T477;
	goto T490;
T490:;
	if(!(type_of((V95))==t_fixnum||
type_of((V95))==t_bignum||
type_of((V95))==t_ratio||
type_of((V95))==t_shortfloat||
type_of((V95))==t_longfloat||
type_of((V95))==t_complex)){
	goto T477;}}
	{object V122;
	V123= get((V97),VV[68],Cnil);
	V124= get((V97),VV[78],Cnil);
	V125= get((V97),VV[68],Cnil);
	V122= list(5,(V97),V123,V124,small_fixnum(3),(*(LnkLI293))((V95),V125));
	setq(VV[79],make_cons((V122),symbol_value(VV[79])));
	goto T475;}
	goto T477;
T477:;
	{object V126;
	V127= get((V97),VV[78],Cnil);
	V126= ((V127)==(Ct)?Ct:Cnil);
	if(((V126))==Cnil){
	goto T475;}}
	goto T475;
T475:;
	if((cadddr((V94)))==Cnil){
	goto T555;}
	V96= cadddr((V94));
	goto T555;
T555:;
	(void)((*(LnkLI294))());
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
	goto T566;}
	base[0]= Cnil;
	base[1]= VV[81];
	base[2]= (V134);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V136 = vs_base[0];
	VMR9(V136)}
	goto T566;
T566:;
	{register object V137;
	V137= (VFUN_NARGS=7,(*(LnkLI295))(small_fixnum(100),VV[82],VV[83],VV[84],small_fixnum(0),VV[85],Ct));
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
	goto T579;
T579:;
	if(!(endp_prop(cdr((V138))))){
	goto T580;}
	base[0]= (V137);
	base[1]= VV[87];
	base[2]= make_fixnum(V139);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T576;
	goto T580;
T580:;
	base[0]= (V137);
	base[1]= VV[88];
	base[2]= make_fixnum(V139);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V138= cdr((V138));
	V139= (long)(V139)+1;
	goto T579;}
	goto T576;
T576:;
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
	if (narg <= 0) goto T595;
	else {
	V141= first;}
	--narg; goto T596;
	goto T595;
T595:;
	V141= Cnil;
	goto T596;
T596:;
	{object V142;
	setq(VV[89],number_plus(symbol_value(VV[89]),small_fixnum(1)));
	V142= symbol_value(VV[89]);
	{object V143;
	if(((V141))==Cnil){
	goto T603;}
	V143= make_cons((V141),(V142));
	goto T601;
	goto T603;
T603:;
	V143= (V142);
	goto T601;
T601:;
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
	(void) (*Lnk296)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T606;}
	V146= structure_ref((V146),VV[70],5);
	goto T606;
T606:;
	if(((V146))==Cnil){
	goto T613;}
	base[0]= (V146);
	base[1]= VV[90];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk297)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T613;}
	{long V147 = 1;
	VMR11((object)V147)}
	goto T613;
T613:;
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
	V155= make_fixnum((long)(*(LnkLI298))((V152)));
	V156= Ct;
	goto T623;
T623:;
	if(eql(small_fixnum(0),(V155))){
	goto T625;}
	V153= (long)(V153)+((long)((fix((V155))) << (V154)));
	goto T625;
T625:;
	if(((V156))==Cnil){
	goto T629;}
	V154= 10;
	V156= Cnil;
	goto T629;
T629:;
	if(((V151))!=Cnil){
	goto T635;}
	{long V157 = V153;
	VMR12((object)V157)}
	goto T635;
T635:;
	V154= (long)(V154)+(2);
	{register object V159;
	V159= car((V151));
	V151= cdr((V151));
	V158= (V159);}
	V155= make_fixnum((long)(*(LnkLI298))(V158));
	goto T623;}
}
/*	local entry for function WT-IF-PROCLAIMED	*/

static object LI13(V163,V164,V165)

register object V163;object V164;object V165;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	if(((VFUN_NARGS=1,(*(LnkLI300))((V163))))==Cnil){
	goto T647;}
	{register object x= (V163),V166= symbol_value(VV[79]);
	while(!endp(V166))
	if(type_of(V166->c.c_car)==t_cons &&eql(x,V166->c.c_car->c.c_car)){
	goto T651;
	}else V166=V166->c.c_cdr;
	goto T650;}
	goto T651;
T651:;
	V167= list(2,VV[92],(V163));
	V168= (*(LnkLI302))(VV[93],(V164));
	V169= get((V163),VV[68],Cnil);
	V170= get((V163),VV[78],Cnil);
	V171 = make_fixnum((long)(*(LnkLI303))(V169,V170));
	V172= list(4,VV[91],/* INLINE-ARGS */V167,/* INLINE-ARGS */V168,V171);
	(void)((VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V172)));
	{object V173 = Ct;
	VMR13(V173)}
	goto T650;
T650:;
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
	goto T659;
	}else V178=V178->c.c_cdr;
	V176= Cnil;}
	goto T659;
T659:;
	if(((V176))==Cnil){
	goto T662;}
	base[0]= (V174);
	vs_top=(vs_base=base+0)+1;
	Lmonotonically_nonincreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T664;}
	goto T655;
	goto T664;
T664:;{object V180;
	V181 = make_fixnum((long)length((V176)));
	V180= number_minus((V175),V181);
	if(V180==Cnil)goto T667;
	goto T655;
	goto T667;
T667:;}
	V182 = make_fixnum((long)length((V176)));
	V183= number_minus((V175),V182);
	(void)((VFUN_NARGS=4,(*(LnkLI267))(VV[94],(V163),/* INLINE-ARGS */V183,(V174))));
	goto T655;
	goto T662;
T662:;
	if(eql((V174),(V175))){
	goto T670;}
	(void)((VFUN_NARGS=4,(*(LnkLI267))(VV[95],(V163),(V175),(V174))));
	goto T655;
	goto T670;
T670:;
	(void)((VFUN_NARGS=2,(*(LnkLI267))(VV[96],(V163))));}
	goto T655;
T655:;
	{object V184 = Cnil;
	VMR13(V184)}
	goto T647;
T647:;
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
	goto T673;}
	{object V188 = VV[97];
	VMR14(V188)}
	goto T673;
T673:;
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
	goto T676;}
	{long V192= fix(structure_ref((V191),VV[70],6));
	if(!((/* INLINE-ARGS */V192)>=(fix(symbol_value(VV[100]))))){
	goto T676;}}
	{object V193 = VV[101];
	VMR15(V193)}
	goto T676;
T676:;
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
	goto T680;}
	{object V198 = Cnil;
	VMR16(V198)}
	goto T680;
T680:;
	{register object V199;
	V199= get((V196),VV[68],Cnil);
	goto T685;
T685:;
	if(((V199))!=Cnil){
	goto T686;}
	{object V200 = Ct;
	VMR16(V200)}
	goto T686;
T686:;
	if(!(type_of((V199))==t_cons)){
	goto T691;}
	goto T690;
	goto T691;
T691:;
	{object V201 = Cnil;
	VMR16(V201)}
	goto T690;
T690:;
	if(!((car((V199)))==(Ct))){
	goto T694;}
	goto T693;
	goto T694;
T694:;
	if(!((car((V199)))==(VV[69]))){
	goto T696;}
	goto T693;
	goto T696;
T696:;
	{object V202 = Cnil;
	VMR16(V202)}
	goto T693;
T693:;
	V199= cdr((V199));
	goto T685;}
	return Cnil;
}
/*	local entry for function MAXARGS	*/

static object LI17(V204)

register object V204;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if((cadddr((V204)))!=Cnil){
	goto T701;}
	if((caddr((V204)))==Cnil){
	goto T702;}
	goto T701;
T701:;
	{object V205 = small_fixnum(64);
	VMR17(V205)}
	goto T702;
T702:;
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
	goto T714;}
	{object V225 = Cnil;
	VMR19(V225)}
	goto T714;
T714:;
	if(((V223))==Cnil){
	goto T717;}
	V226= list(4,VV[104],list(2,VV[92],(V220)),(V223),VV[105]);
	(void)((VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V226)));
	goto T717;
T717:;
	{object V227;
	V227= (*(LnkLI304))((V220),(V221),(V222));
	if(((V227))==Cnil){
	goto T723;}
	goto T720;
	goto T723;
T723:;
	if(((*(LnkLI305))((V220)))==Cnil){
	goto T726;}
	{object V228;
	V228= cadddr(caddr((V222)));
	if(((V228))==Cnil){
	goto T730;}
	V229= list(2,VV[92],(V220));
	V230= (*(LnkLI302))(VV[107],(V221));
	V231 = make_fixnum((long)length(car(caddr((V222)))));
	V232= (*(LnkLI306))(caddr((V222)));
	V233= (*(LnkLI299))(/* INLINE-ARGS */V232,small_fixnum(8));
	V234= number_plus(V231,/* INLINE-ARGS */V233);
	base[0]= Cnil;
	base[1]= VV[108];
	base[2]= (V221);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V235= vs_base[0];
	V236= list(5,VV[106],/* INLINE-ARGS */V229,/* INLINE-ARGS */V230,/* INLINE-ARGS */V234,(*(LnkLI302))(V235,VV[109]));
	(void)((VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V236)));
	goto T720;
	goto T730;
T730:;
	V237= list(2,VV[92],(V220));
	V238= (*(LnkLI302))(VV[111],(V221));
	V239 = make_fixnum((long)length(car(caddr((V222)))));
	V240= (*(LnkLI306))(caddr((V222)));
	V241= (*(LnkLI299))(/* INLINE-ARGS */V240,small_fixnum(8));
	V242= list(4,VV[110],/* INLINE-ARGS */V237,/* INLINE-ARGS */V238,number_plus(V239,/* INLINE-ARGS */V241));
	(void)((VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V242)));
	goto T720;}
	goto T726;
T726:;
	if(!(type_of((V221))==t_fixnum||
type_of((V221))==t_bignum||
type_of((V221))==t_ratio||
type_of((V221))==t_shortfloat||
type_of((V221))==t_longfloat||
type_of((V221))==t_complex)){
	goto T737;}
	princ_str("\nstatic void L",VV[32]);
	(void)((*(LnkLI278))((V221)));
	princ_str("();",VV[32]);
	V243= list(2,VV[92],(V220));
	V244= list(3,VV[112],/* INLINE-ARGS */V243,(*(LnkLI302))(VV[113],(V221)));
	(void)((VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V244)));
	goto T720;
	goto T737;
T737:;
	princ_char(10,VV[32]);
	(void)((*(LnkLI278))((V221)));
	princ_str("();",VV[32]);
	V245= list(2,VV[92],(V220));
	V246= list(3,VV[112],/* INLINE-ARGS */V245,(*(LnkLI302))(VV[114],(V221)));
	(void)((VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V246)));}
	goto T720;
T720:;
	if(!(number_compare(symbol_value(VV[115]),small_fixnum(2))<0)){
	goto T748;}
	{object V247 = sputprop((V220),VV[116],Ct);
	VMR19(V247)}
	goto T748;
T748:;
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
	bds_bind(VV[21],(*(LnkLI307))(cadr((V261))));
	bds_bind(VV[118],Cnil);
	{register object V265;
	register object V266;
	V265= symbol_value(VV[79]);
	V266= car((V265));
	goto T760;
T760:;
	if(!(endp_prop((V265)))){
	goto T761;}
	goto T755;
	goto T761;
T761:;{object V267;
	base[4]= cadddr((V266));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk308)();
	vs_top=sup;
	V267= vs_base[0];
	if(V267==Cnil)goto T766;
	goto T765;
	goto T766;
T766:;}
	base[4]= VV[119];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T765;
T765:;
	if((car((V266)))==((V259))){
	goto T771;}
	goto T770;
	goto T771;
T771:;
	if((cadr(cddddr((V266))))==Cnil){
	goto T773;}
	goto T770;
	goto T773;
T773:;
	V264= (V266);
	if(((V264))==Cnil){
	goto T755;}
	goto T756;
	goto T770;
T770:;
	V265= cdr((V265));
	V266= car((V265));
	goto T760;}
	goto T756;
T756:;
	if(((VFUN_NARGS=1,(*(LnkLI300))((V259))))!=Cnil){
	goto T781;}
	{object V268;
	V268= list(4,(V259),(V260),cadr((V264)),caddr((V264)));
	setq(VV[30],make_cons((V268),symbol_value(VV[30])));}
	goto T781;
T781:;
	V269= structure_ref(cadr((V261)),VV[63],1);
	(void)((*(LnkLI309))(/* INLINE-ARGS */V269,small_fixnum(0)));
	base[3]= VV[120];
	{object V270= caddr((V264));
	if((V270!= VV[90]))goto T789;
	base[4]= VV[121];
	goto T788;
	goto T789;
T789:;
	if((V270!= VV[143]))goto T790;
	base[4]= VV[122];
	goto T788;
	goto T790;
T790:;
	if((V270!= VV[144]))goto T791;
	base[4]= VV[123];
	goto T788;
	goto T791;
T791:;
	if((V270!= VV[145]))goto T792;
	base[4]= VV[124];
	goto T788;
	goto T792;
T792:;
	base[4]= VV[125];}
	goto T788;
T788:;
	base[5]= (V259);
	base[6]= (V260);
	base[7]= (V261);
	base[8]= (V263);
	base[9]= (V264);
	vs_top=(vs_base=base+3)+7;
	(void) (*Lnk310)();
	vs_top=sup;
	goto T753;
	goto T755;
T755:;
	if(((*(LnkLI305))((V259)))==Cnil){
	goto T799;}
	V271= structure_ref(cadr((V261)),VV[63],1);
	(void)((*(LnkLI309))(/* INLINE-ARGS */V271,small_fixnum(0)));
	base[3]= VV[126];
	base[4]= VV[125];
	base[5]= (V259);
	base[6]= (V260);
	base[7]= (V261);
	base[8]= (V263);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk310)();
	vs_top=sup;
	goto T753;
	goto T799;
T799:;
	V272= structure_ref(cadr((V261)),VV[63],1);
	(void)((*(LnkLI309))(/* INLINE-ARGS */V272,small_fixnum(2)));
	base[3]= VV[127];
	base[4]= VV[128];
	base[5]= (V259);
	base[6]= (V260);
	base[7]= (V261);
	base[8]= (V263);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk310)();
	vs_top=sup;
	goto T753;
T753:;
	(void)((*(LnkLI311))((V260)));
	{object V273 = (*(LnkLI312))((V259),(V261));
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
	goto T826;
T826:;
	if(!(endp_prop((V289)))){
	goto T827;}
	goto T823;
	goto T827;
T827:;
	V291= structure_ref(car((V289)),VV[70],1);
	if(!((/* INLINE-ARGS */V291)==(VV[72]))){
	goto T833;}
	{object V292;
	V293= car((V289));
	V294= structure_ref(car((V289)),VV[70],4);
	V292= make_cons(/* INLINE-ARGS */V293,/* INLINE-ARGS */V294);
	V287= make_cons((V292),(V287));
	goto T831;}
	goto T833;
T833:;
	V295= car((V289));
	{object V297= car((V290));
	if((V297!= VV[90]))goto T838;
	V296= VV[90];
	goto T837;
	goto T838;
T838:;
	if((V297!= VV[143]))goto T839;
	V296= VV[143];
	goto T837;
	goto T839;
T839:;
	if((V297!= VV[144]))goto T840;
	V296= VV[144];
	goto T837;
	goto T840;
T840:;
	if((V297!= VV[145]))goto T841;
	V296= VV[145];
	goto T837;
	goto T841;
T841:;
	V296= VV[75];}
	goto T837;
T837:;
	(void)(structure_set(/* INLINE-ARGS */V295,VV[70],1,V296));
	goto T831;
T831:;
	V298= car((V289));
	setq(VV[89],number_plus(symbol_value(VV[89]),small_fixnum(1)));
	(void)(structure_set(/* INLINE-ARGS */V298,VV[70],4,symbol_value(VV[89])));
	V289= cdr((V289));
	V290= cdr((V290));
	goto T826;}
	goto T823;
T823:;
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[146],(V282))));
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
	(void)((*(LnkLI314))((V288),cadr((V286))));
	{object V301;
	V301= symbol_value(VV[137]);
	if((symbol_value(VV[148]))==Cnil){
	goto T869;}
	base[1]= make_cons((V282),(V288));
	goto T867;
	goto T869;
T869:;
	base[1]= Cnil;
	goto T867;
T867:;
	bds_bind(VV[147],base[1]);
	bds_bind(VV[135],symbol_value(VV[135]));
	princ_str("\n{	",VV[26]);
	V302= structure_ref(cadr((V284)),VV[63],1);
	(void)((*(LnkLI315))(/* INLINE-ARGS */V302,(V283),VV[149]));
	princ_str(" VMB",VV[26]);
	(void)((*(LnkLI275))((V301)));
	princ_str(" VMS",VV[26]);
	(void)((*(LnkLI275))((V301)));
	princ_str(" VMV",VV[26]);
	(void)((*(LnkLI275))((V301)));
	if(((V285))==Cnil){
	goto T881;}
	princ_str("\n	bds_check;",VV[26]);
	goto T881;
T881:;
	if((symbol_value(VV[150]))==Cnil){
	goto T885;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T885;
T885:;
	if(((VV[147]->s.s_dbind))==Cnil){
	goto T889;}
	(VV[135]->s.s_dbind)= make_cons(VV[151],(VV[135]->s.s_dbind));
	princ_str("\n	goto TTL;",VV[26]);
	princ_str("\nTTL:;",VV[26]);
	goto T889;
T889:;
	{register object V304;
	register object V305;
	V304= (V287);
	V305= car((V304));
	goto T901;
T901:;
	if(!(endp_prop((V304)))){
	goto T902;}
	goto T897;
	goto T902;
T902:;
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
	goto T901;}
	goto T897;
T897:;
	base[3]= caddr(cddr((V284)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk316)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[131]))==0)){
	goto T925;}
	if((symbol_value(VV[139]))!=Cnil){
	goto T925;}
	if((symbol_value(VV[141]))!=Cnil){
	goto T925;}
	goto T923;
	goto T925;
T925:;
	princ_str("\n	base[0]=base[0];",VV[26]);
	goto T923;
T923:;
	V308= (*(LnkLI281))(caddr((V286)));
	if(!(equal(VV[153],/* INLINE-ARGS */V308))){
	goto T932;}
	princ_str("\n	return Cnil;",VV[26]);
	goto T932;
T932:;
	princ_str("\n}",VV[26]);
	{object V309 = (*(LnkLI317))((V301),caddr((V286)));
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
	goto T939;}
	V312= (*(LnkLI318))();
	{object V313 = structure_set((V311),VV[70],2,/* INLINE-ARGS */V312);
	VMR24(V313)}
	goto T939;
T939:;
	V314= (*(LnkLI319))();
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
	if(V332==Cnil)goto T949;
	V331= V332;
	goto T948;
	goto T949;
T949:;}{object V333;
	V333= cadr((V329));
	if(V333==Cnil)goto T951;
	V331= V333;
	goto T948;
	goto T951;
T951:;}
	V331= cadddr((V329));
	goto T948;
T948:;
	{object V334;
	register object V335;
	V334= car((V329));
	V335= car((V334));
	goto T957;
T957:;
	if(!(endp_prop((V334)))){
	goto T958;}
	goto T953;
	goto T958;
T958:;
	{object V336;
	setq(VV[89],number_plus(symbol_value(VV[89]),small_fixnum(1)));
	V336= list(2,VV[156],symbol_value(VV[89]));
	V324= make_cons((V336),(V324));}
	V334= cdr((V334));
	V335= car((V334));
	goto T957;}
	goto T953;
T953:;
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[157],(V320))));
	{object V337;
	V337= VV[158];
	princ_str("\nstatic object LI",VV[26]);
	(void)((*(LnkLI275))((V321)));
	princ_char(40,VV[26]);
	if(((V324))==Cnil){
	goto T977;}
	{object V338;
	V338= (V324);
	goto T981;
T981:;
	if(((V338))!=Cnil){
	goto T982;}
	goto T977;
	goto T982;
T982:;
	princ_str("object ",VV[26]);
	(void)((*(LnkLI275))(car((V338))));
	V337= (VFUN_NARGS=3,(*(LnkLI320))(VV[159],(V337),VV[160]));
	if(!((cdr((V338)))==Cnil)){
	goto T992;}
	goto T991;
	goto T992;
T992:;
	princ_char(44,VV[26]);
	V337= (VFUN_NARGS=3,(*(LnkLI320))(VV[159],(V337),VV[161]));
	goto T991;
T991:;
	V338= cdr((V338));
	goto T981;}
	goto T977;
T977:;
	if(((V331))==Cnil){
	goto T1000;}
	if(((V324))==Cnil){
	goto T1003;}
	princ_char(44,VV[26]);
	V337= (VFUN_NARGS=3,(*(LnkLI320))(VV[159],(V337),VV[162]));
	goto T1003;
T1003:;
	princ_str("object first,...",VV[26]);
	V337= (VFUN_NARGS=3,(*(LnkLI320))(VV[159],(V337),VV[163]));
	goto T1000;
T1000:;
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
	goto T1020;}
	if((caddr((V329)))==Cnil){
	goto T1021;}
	base[5]= Cnil;
	goto T1020;
	goto T1021;
T1021:;
	{object V340;
	object V341;
	V340= car((V329));
	V341= car((V340));
	goto T1028;
T1028:;
	if(!(endp_prop((V340)))){
	goto T1029;}
	goto T1023;
	goto T1029;
T1029:;
	if((structure_ref((V341),VV[70],3))==Cnil){
	goto T1033;}
	goto T1024;
	goto T1033;
T1033:;
	V340= cdr((V340));
	V341= car((V340));
	goto T1028;}
	goto T1024;
T1024:;
	base[5]= Cnil;
	goto T1020;
	goto T1023;
T1023:;
	if((cadr((V329)))==Cnil){
	goto T1041;}
	base[5]= Cnil;
	goto T1020;
	goto T1041;
T1041:;
	if((car(cddddr((V329))))==Cnil){
	goto T1043;}
	base[5]= Cnil;
	goto T1020;
	goto T1043;
T1043:;
	base[5]= make_cons((V320),car((V329)));
	goto T1020;
T1020:;
	bds_bind(VV[147],base[5]);
	bds_bind(VV[135],symbol_value(VV[135]));
	princ_str("\n{	",VV[26]);
	if(((V331))==Cnil){
	goto T1047;}
	princ_str("\n	va_list ap;",VV[26]);
	goto T1047;
T1047:;
	princ_str("\n	int narg = VFUN_NARGS;",VV[26]);
	V342= structure_ref(cadr((V322)),VV[63],1);
	(void)((*(LnkLI315))(/* INLINE-ARGS */V342,(V321),VV[149]));
	princ_str(" VMB",VV[26]);
	(void)((*(LnkLI275))((V339)));
	princ_str(" VMS",VV[26]);
	(void)((*(LnkLI275))((V339)));
	princ_str(" VMV",VV[26]);
	(void)((*(LnkLI275))((V339)));
	if(((V323))==Cnil){
	goto T1061;}
	princ_str("\n	bds_check;",VV[26]);
	goto T1061;
T1061:;
	if((symbol_value(VV[150]))==Cnil){
	goto T1065;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T1065;
T1065:;
	if((V331)!=Cnil){
	goto T1069;}
	princ_str("\n	if ( narg!= ",VV[26]);
	V343 = make_fixnum((long)length((V324)));
	(void)((*(LnkLI275))(V343));
	princ_str(") vfun_wrong_number_of_args(small_fixnum(",VV[26]);
	V344 = make_fixnum((long)length((V324)));
	(void)((*(LnkLI275))(V344));
	princ_str("));",VV[26]);
	goto T1069;
T1069:;
	{object V345;
	object V346;
	V345= car((V329));
	V346= car((V345));
	goto T1080;
T1080:;
	if(!(endp_prop((V345)))){
	goto T1081;}
	goto T1076;
	goto T1081;
T1081:;
	base[9]= (V346);
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	V345= cdr((V345));
	V346= car((V345));
	goto T1080;}
	goto T1076;
T1076:;
	{object V347;
	object V348;
	V347= cadr((V329));
	V348= car((V347));
	goto T1096;
T1096:;
	if(!(endp_prop((V347)))){
	goto T1097;}
	goto T1092;
	goto T1097;
T1097:;
	base[9]= car((V348));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((caddr((V348)))==Cnil){
	goto T1103;}
	base[9]= caddr((V348));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	goto T1103;
T1103:;
	V347= cdr((V347));
	V348= car((V347));
	goto T1096;}
	goto T1092;
T1092:;
	if((caddr((V329)))==Cnil){
	goto T1112;}
	base[7]= caddr((V329));
	vs_top=(vs_base=base+7)+1;
	L26(base);
	vs_top=sup;
	goto T1112;
T1112:;
	{object V349;
	object V350;
	V349= car(cddddr((V329)));
	V350= car((V349));
	goto T1119;
T1119:;
	if(!(endp_prop((V349)))){
	goto T1120;}
	goto T1075;
	goto T1120;
T1120:;
	base[9]= cadr((V350));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((cadddr((V350)))==Cnil){
	goto T1126;}
	base[9]= cadddr((V350));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	goto T1126;
T1126:;
	V349= cdr((V349));
	V350= car((V349));
	goto T1119;}
	goto T1075;
T1075:;
	if((cadr((V329)))!=Cnil){
	goto T1136;}
	if((caddr((V329)))!=Cnil){
	goto T1136;}
	if((cadddr((V329)))==Cnil){
	goto T1135;}
	goto T1136;
T1136:;
	if(((V330))!=Cnil){
	goto T1135;}
	V330= Ct;
	princ_str("\n	va_start(ap,first);",VV[26]);
	goto T1135;
T1135:;
	if((symbol_value(VV[164]))!=Cnil){
	goto T1149;}
	if((symbol_value(VV[165]))==Cnil){
	goto T1147;}
	goto T1149;
T1149:;
	if((car((V329)))==Cnil){
	goto T1147;}
	princ_str("\n	if(narg <",VV[26]);
	V351 = make_fixnum((long)length(car((V329))));
	(void)((*(LnkLI275))(V351));
	princ_str(") too_few_arguments();",VV[26]);
	goto T1147;
T1147:;
	{object V352;
	object V353;
	V352= car((V329));
	V353= car((V352));
	goto T1161;
T1161:;
	if(!(endp_prop((V352)))){
	goto T1162;}
	goto T1157;
	goto T1162;
T1162:;
	(void)((*(LnkLI321))((V353)));
	V352= cdr((V352));
	V353= car((V352));
	goto T1161;}
	goto T1157;
T1157:;
	{object V354;
	object V355;
	V354= cadr((V329));
	V355= car((V354));
	goto T1176;
T1176:;
	if(!(endp_prop((V354)))){
	goto T1177;}
	goto T1172;
	goto T1177;
T1177:;
	(void)((*(LnkLI321))(car((V355))));
	V354= cdr((V354));
	V355= car((V354));
	goto T1176;}
	goto T1172;
T1172:;
	if((caddr((V329)))==Cnil){
	goto T1187;}
	(void)((*(LnkLI321))(caddr((V329))));
	goto T1187;
T1187:;
	if(((VV[154]->s.s_dbind))==Cnil){
	goto T1193;}
	V327= symbol_value(VV[130]);
	goto T1191;
	goto T1193;
T1193:;
	V327= symbol_value(VV[142]);
	goto T1191;
T1191:;
	{object V356;
	object V357;
	V356= car(cddddr((V329)));
	V357= car((V356));
	goto T1199;
T1199:;
	if(!(endp_prop((V356)))){
	goto T1200;}
	goto T1195;
	goto T1200;
T1200:;
	(void)((*(LnkLI321))(cadr((V357))));
	V356= cdr((V356));
	V357= car((V356));
	goto T1199;}
	goto T1195;
T1195:;
	{object V358;
	object V359;
	V358= car(cddddr((V329)));
	V359= car((V358));
	goto T1214;
T1214:;
	if(!(endp_prop((V358)))){
	goto T1215;}
	goto T1210;
	goto T1215;
T1215:;
	(void)((*(LnkLI321))(cadddr((V359))));
	V358= cdr((V358));
	V359= car((V358));
	goto T1214;}
	goto T1210;
T1210:;
	{object V360;
	object V361;
	V361= car((V329));
	V360= (V324);
	goto T1228;
T1228:;
	if(((V360))!=Cnil){
	goto T1229;}
	goto T1225;
	goto T1229;
T1229:;
	(void)((*(LnkLI322))(car((V361)),car((V360))));
	V360= cdr((V360));
	V361= cdr((V361));
	goto T1228;}
	goto T1225;
T1225:;
	if((cadr((V329)))==Cnil){
	goto T1238;}
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
	goto T1249;
T1249:;
	if(!(endp_prop((V364)))){
	goto T1250;}
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1241;
	goto T1250;
T1250:;
	{object V366;
	setq(VV[166],number_plus(symbol_value(VV[166]),small_fixnum(1)));
	V366= make_cons(symbol_value(VV[166]),Cnil);
	V325= make_cons((V366),(V325));}
	princ_str("\n	if (",VV[26]);
	if((cdr((V325)))==Cnil){
	goto T1263;}
	V367= VV[167];
	goto T1261;
	goto T1263;
T1263:;
	V367= VV[168];
	goto T1261;
T1261:;
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
	goto T1273;}
	V330= Ct;
	princ_str("\n	va_start(ap,first);",VV[26]);
	goto T1273;
T1273:;
	V368= car((V365));
	if(((V363))==Cnil){
	goto T1282;}
	V369= make_cons(VV[169],Cnil);
	goto T1280;
	goto T1282;
T1282:;
	V369= make_cons(VV[170],Cnil);
	goto T1280;
T1280:;
	(void)((*(LnkLI322))(/* INLINE-ARGS */V368,V369));
	V363= Cnil;
	princ_char(125,VV[26]);
	if((caddr((V365)))==Cnil){
	goto T1288;}
	(void)((*(LnkLI322))(caddr((V365)),Ct));
	goto T1288;
T1288:;
	V364= cdr((V364));
	V365= car((V364));
	goto T1249;}}
	goto T1241;
T1241:;
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
	goto T1311;
T1311:;
	if(!(endp_prop((V371)))){
	goto T1312;}
	goto T1307;
	goto T1312;
T1312:;
	if((cdr(car((V325))))==Cnil){
	goto T1316;}
	princ_str("\n	goto T",VV[26]);
	(void)((*(LnkLI275))(car(car((V325)))));
	princ_char(59,VV[26]);
	princ_str("\nT",VV[26]);
	(void)((*(LnkLI275))(car(car((V325)))));
	princ_str(":;",VV[26]);
	goto T1316;
T1316:;
	{object V373;
	V373= car((V325));
	V325= cdr((V325));}
	(void)((*(LnkLI323))(car((V372)),cadr((V372))));
	if((caddr((V372)))==Cnil){
	goto T1331;}
	(void)((*(LnkLI322))(caddr((V372)),Cnil));
	goto T1331;
T1331:;
	V371= cdr((V371));
	V372= car((V371));
	goto T1311;}
	goto T1307;
T1307:;
	if((cdr((V370)))==Cnil){
	goto T1238;}
	princ_str("\n	goto T",VV[26]);
	(void)((*(LnkLI275))(car((V370))));
	princ_char(59,VV[26]);
	princ_str("\nT",VV[26]);
	(void)((*(LnkLI275))(car((V370))));
	princ_str(":;",VV[26]);}
	goto T1238;
T1238:;
	if((caddr((V329)))==Cnil){
	goto T1348;}
	V328= (VFUN_NARGS=0,(*(LnkLI324))());
	{object V374;
	V374= cadr((V329));
	if(((V374))==Cnil){
	goto T1356;}
	goto T1353;
	goto T1356;
T1356:;
	princ_str("\n	narg= narg - ",VV[26]);
	V375 = make_fixnum((long)length(car((V329))));
	(void)((*(LnkLI275))(V375));
	princ_char(59,VV[26]);}
	goto T1353;
T1353:;
	if(((V330))!=Cnil){
	goto T1361;}
	V330= Ct;
	princ_str("\n	va_start(ap,first);",VV[26]);
	goto T1361;
T1361:;
	princ_str("\n	V",VV[26]);
	(void)((*(LnkLI275))((V328)));
	princ_str(" = ",VV[26]);
	V376= structure_ref(caddr((V329)),VV[70],5);
	if(!((/* INLINE-ARGS */V376)==(VV[172]))){
	goto T1372;}
	base[7]= Ct;
	goto T1371;
	goto T1372;
T1372:;
	base[7]= symbol_value(VV[171]);
	goto T1371;
T1371:;
	bds_bind(VV[171],base[7]);
	if((cadddr((V329)))==Cnil){
	goto T1376;}
	if(((VV[171]->s.s_dbind))==Cnil){
	goto T1379;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_MAKE_LIST(narg));",VV[26]);
	goto T1374;
	goto T1379;
T1379:;
	princ_str("make_list(narg);",VV[26]);
	goto T1374;
	goto T1376;
T1376:;
	if(((VV[171]->s.s_dbind))==Cnil){
	goto T1384;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));",VV[26]);
	goto T1374;
	goto T1384;
T1384:;
	princ_str("list_vector_new(narg,first,ap);",VV[26]);
	goto T1374;
T1374:;
	V377= caddr((V329));
	V378= list(2,VV[156],(V328));
	V379= (*(LnkLI322))(/* INLINE-ARGS */V377,/* INLINE-ARGS */V378);
	bds_unwind1;
	goto T1348;
T1348:;
	if((cadddr((V329)))==Cnil){
	goto T1388;}
	{object V380;
	V380= caddr((V329));
	if(((V380))==Cnil){
	goto T1394;}
	goto T1391;
	goto T1394;
T1394:;
	{object V381;
	V381= cadr((V329));
	if(((V381))==Cnil){
	goto T1398;}
	goto T1391;
	goto T1398;
T1398:;
	princ_str("\n	narg= narg - ",VV[26]);
	V382 = make_fixnum((long)length(car((V329))));
	(void)((*(LnkLI275))(V382));
	princ_char(59,VV[26]);}}
	goto T1391;
T1391:;
	if(((V330))!=Cnil){
	goto T1403;}
	V330= Ct;
	princ_str("\n	va_start(ap,first);",VV[26]);
	goto T1403;
T1403:;
	{object V383;
	object V384= car(cddddr((V329)));
	if(endp(V384)){
	V326= Cnil;
	goto T1410;}
	base[7]=V383=MMcons(Cnil,Cnil);
	goto T1411;
T1411:;
	(V383->c.c_car)= caddr((V384->c.c_car));
	V384=MMcdr(V384);
	if(endp(V384)){
	V326= base[7];
	goto T1410;}
	V383=MMcdr(V383)=MMcons(Cnil,Cnil);
	goto T1411;}
	goto T1410;
T1410:;
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
	goto T1419;
T1419:;
	if(((V387))!=Cnil){
	goto T1420;}
	goto T1414;
	goto T1420;
T1420:;
	if(!((caar((V387)))==(VV[173]))){
	goto T1425;}
	if((caddr(car((V387))))==(Cnil)){
	goto T1424;}
	goto T1425;
T1425:;
	V385= Ct;
	goto T1424;
T1424:;
	if(!((caar((V387)))==(VV[173]))){
	goto T1431;}
	{object V390;
	V390= caddr(car((V387)));
	if(!(((V390))==(Cnil))){
	goto T1437;}
	goto T1435;
	goto T1437;
T1437:;
	if(type_of((V390))==t_cons){
	goto T1439;}
	goto T1431;
	goto T1439;
T1439:;
	{register object x= car((V390)),V391= VV[174];
	while(!endp(V391))
	if(eql(x,V391->c.c_car)){
	goto T1435;
	}else V391=V391->c.c_cdr;
	goto T1431;}}
	goto T1435;
T1435:;
	V392= structure_ref(cadddr((V389)),VV[70],1);
	if((/* INLINE-ARGS */V392)==(VV[175])){
	goto T1430;}
	goto T1431;
T1431:;
	V385= Ct;
	if(type_of(V387)!=t_cons)FEwrong_type_argument(Scons,V387);
	(V387)->c.c_car = small_fixnum(0);
	goto T1430;
T1430:;
	V387= cdr((V387));
	V388= cdr((V388));
	V389= car((V388));
	goto T1419;}
	goto T1414;
T1414:;
	if(!(((long)length((V326)))>(15))){
	goto T1452;}
	V385= Ct;
	goto T1452;
T1452:;
	princ_str("\n	{",VV[26]);
	vs_base=vs_top;
	(void) (*Lnk325)();
	vs_top=sup;
	bds_bind(VV[26],symbol_value(VV[32]));
	if(((V385))==Cnil){
	goto T1460;}
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
	goto T1472;
T1472:;
	if(((V396))!=Cnil){
	goto T1473;}
	goto T1470;
	goto T1473;
T1473:;
	princ_str("(void *)",VV[26]);
	if(!(eql(car((V396)),small_fixnum(0)))){
	goto T1481;}
	princ_str("-1",VV[26]);
	goto T1479;
	goto T1481;
T1481:;
	V397= caddr(car((V396)));
	if(!(((V397))==(Cnil))){
	goto T1485;}
	princ_str("-2",VV[26]);
	goto T1479;
	goto T1485;
T1485:;
	if(!(type_of((V397))==t_cons)){
	goto T1490;}
	if(!((car((V397)))==(VV[176]))){
	goto T1490;}
	(void)((*(LnkLI275))(cadr((V397))));
	goto T1479;
	goto T1490;
T1490:;
	if(!(type_of((V397))==t_cons)){
	goto T1496;}
	if(!((car((V397)))==(VV[177]))){
	goto T1496;}
	V398= (*(LnkLI326))(caddr((V397)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V398));
	goto T1479;
	goto T1496;
T1496:;
	(void)((*(LnkLI327))());
	goto T1479;
T1479:;
	if((cdr((V396)))==Cnil){
	goto T1501;}
	princ_char(44,VV[26]);
	goto T1501;
T1501:;
	V396= cdr((V396));
	goto T1472;}
	goto T1470;
T1470:;
	princ_str("};",VV[26]);
	goto T1460;
T1460:;
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
	goto T1528;}
	V400= small_fixnum(1);
	goto T1526;
	goto T1528;
T1528:;
	V400= small_fixnum(0);
	goto T1526;
T1526:;
	(void)((*(LnkLI275))(V400));
	princ_char(44,VV[26]);
	if(((V385))==Cnil){
	goto T1533;}
	princ_str("VK",VV[26]);
	(void)((*(LnkLI275))((V321)));
	princ_str("defaults",VV[26]);
	goto T1531;
	goto T1533;
T1533:;
	princ_str("Cstd_key_defaults",VV[26]);
	goto T1531;
T1531:;
	if((car(cddddr((V329))))==Cnil){
	goto T1539;}
	princ_str(",{",VV[26]);
	{object V401;
	V401= reverse(car(cddddr((V329))));
	goto T1547;
T1547:;
	if(((V401))!=Cnil){
	goto T1548;}
	goto T1544;
	goto T1548;
T1548:;
	princ_str("(void *)",VV[26]);
	V402= (*(LnkLI328))(caar((V401)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V402));
	if((cdr((V401)))==Cnil){
	goto T1556;}
	princ_char(44,VV[26]);
	goto T1556;
T1556:;
	V401= cdr((V401));
	goto T1547;}
	goto T1544;
T1544:;
	princ_char(125,VV[26]);
	goto T1539;
T1539:;
	princ_str("};",VV[26]);
	bds_unwind1;
	if((caddr((V329)))==Cnil){
	goto T1567;}
	princ_str("\n	parse_key_rest_new(",VV[26]);
	V403= list(2,VV[156],(V328));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V403));
	princ_char(44,VV[26]);
	goto T1565;
	goto T1567;
T1567:;
	princ_str("\n	parse_key_new_new(",VV[26]);
	goto T1565;
T1565:;
	if(!(eql(small_fixnum(0),symbol_value(VV[142])))){
	goto T1573;}
	setq(VV[142],small_fixnum(1));
	goto T1573;
T1573:;
	princ_str("narg,",VV[26]);
	if(((VV[154]->s.s_dbind))==Cnil){
	goto T1581;}
	V404= VV[178];
	goto T1579;
	goto T1581;
T1581:;
	setq(VV[17],Ct);
	V404= VV[179];
	goto T1579;
T1579:;
	(void)((*(LnkLI275))(V404));
	princ_char(43,VV[26]);
	(void)((*(LnkLI275))((V327)));
	princ_str(",(struct key *)(void *)&LI",VV[26]);
	(void)((*(LnkLI275))((V321)));
	princ_str("key,first,ap);",VV[26]);}
	goto T1388;
T1388:;
	{object V405;
	register object V406;
	V405= car(cddddr((V329)));
	V406= car((V405));
	goto T1594;
T1594:;
	if(!(endp_prop((V405)))){
	goto T1595;}
	goto T1590;
	goto T1595;
T1595:;
	{object V408;
	V408= car((V326));
	V326= cdr((V326));
	V407= (V408);}
	if(eql(small_fixnum(0),V407)){
	goto T1601;}
	(void)((*(LnkLI329))(cadr((V406))));
	goto T1599;
	goto T1601;
T1601:;
	princ_str("\n	if(",VV[26]);
	V409= structure_ref(cadr((V406)),VV[70],2);
	(void)((*(LnkLI330))(/* INLINE-ARGS */V409));
	princ_str("==0){",VV[26]);
	bds_bind(VV[134],symbol_value(VV[134]));
	bds_bind(VV[135],(VV[135]->s.s_dbind));
	bds_bind(VV[133],symbol_value(VV[133]));
	V410= (*(LnkLI323))(cadr((V406)),caddr((V406)));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V411= structure_ref(cadddr((V406)),VV[70],1);
	if((/* INLINE-ARGS */V411)==(VV[175])){
	goto T1613;}
	(void)((*(LnkLI322))(cadddr((V406)),Cnil));
	goto T1613;
T1613:;
	princ_str("\n	}else{",VV[26]);
	(void)((*(LnkLI329))(cadr((V406))));
	V412= structure_ref(cadddr((V406)),VV[70],1);
	if((/* INLINE-ARGS */V412)==(VV[175])){
	goto T1619;}
	(void)((*(LnkLI322))(cadddr((V406)),Ct));
	goto T1619;
T1619:;
	princ_char(125,VV[26]);
	goto T1599;
T1599:;
	V405= cdr((V405));
	V406= car((V405));
	goto T1594;}
	goto T1590;
T1590:;
	if(((VV[147]->s.s_dbind))==Cnil){
	goto T1628;}
	(VV[135]->s.s_dbind)= make_cons(VV[151],(VV[135]->s.s_dbind));
	princ_str("\n	goto TTL;",VV[26]);
	princ_str("\nTTL:;",VV[26]);
	goto T1628;
T1628:;
	base[7]= caddr(cddr((V322)));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk316)();
	vs_top=sup;
	if(((V330))==Cnil){
	goto T1638;}
	V330= Cnil;
	princ_str("\n	va_end(ap);",VV[26]);
	goto T1638;
T1638:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[131]))==0)){
	goto T1646;}
	if((symbol_value(VV[139]))!=Cnil){
	goto T1646;}
	if((symbol_value(VV[141]))!=Cnil){
	goto T1646;}
	goto T1644;
	goto T1646;
T1646:;
	princ_str("\n	base[0]=base[0];",VV[26]);
	goto T1644;
T1644:;
	princ_str("\n	return Cnil;",VV[26]);
	princ_char(125,VV[26]);
	if((base[1])==Cnil){
	goto T1657;}
	princ_str("\n	}",VV[26]);
	goto T1657;
T1657:;
	(void)((*(LnkLI331))());
	V414= get((V320),VV[78],Cnil);
	{object V415 = (*(LnkLI317))((V339),V414);
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
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[180],(V420))));
	if(!(type_of((V421))==t_fixnum||
type_of((V421))==t_bignum||
type_of((V421))==t_ratio||
type_of((V421))==t_shortfloat||
type_of((V421))==t_longfloat||
type_of((V421))==t_complex)){
	goto T1666;}
	princ_str("\nstatic void L",VV[26]);
	(void)((*(LnkLI275))((V421)));
	princ_str("()",VV[26]);
	goto T1664;
	goto T1666;
T1666:;
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))((V421)));
	princ_str("()",VV[26]);
	goto T1664;
T1664:;
	princ_str("\n{",VV[26]);
	princ_str("register object *",VV[26]);
	(void)((*(LnkLI275))(symbol_value(VV[21])));
	princ_str("base=vs_base;",VV[26]);
	V424= structure_ref(cadr((V422)),VV[63],1);
	(void)((*(LnkLI315))(/* INLINE-ARGS */V424,(V421),VV[149]));
	princ_str("\n	register object *",VV[26]);
	(void)((*(LnkLI275))(symbol_value(VV[21])));
	princ_str("sup=base+VM",VV[26]);
	(void)((*(LnkLI275))(symbol_value(VV[137])));
	princ_char(59,VV[26]);
	princ_str(" VC",VV[26]);
	(void)((*(LnkLI275))(symbol_value(VV[137])));
	if((symbol_value(VV[164]))==Cnil){
	goto T1691;}
	princ_str("\n	vs_reserve(VM",VV[26]);
	(void)((*(LnkLI275))(symbol_value(VV[137])));
	princ_str(");",VV[26]);
	goto T1689;
	goto T1691;
T1691:;
	princ_str("\n	vs_check;",VV[26]);
	goto T1689;
T1689:;
	if(((V423))==Cnil){
	goto T1697;}
	princ_str("\n	bds_check;",VV[26]);
	goto T1697;
T1697:;
	if((symbol_value(VV[150]))==Cnil){
	goto T1701;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T1701;
T1701:;
	(void)((VFUN_NARGS=3,(*(LnkLI332))(caddr((V422)),caddr(cddr((V422))),(V420))));
	princ_str("\n}",VV[26]);
	{object V425;
	V425= make_cons(symbol_value(VV[137]),symbol_value(VV[131]));
	setq(VV[34],make_cons((V425),symbol_value(VV[34])));}
	princ_str("\n#define VC",VV[32]);
	(void)((*(LnkLI278))(symbol_value(VV[137])));
	{object V426 = (*(LnkLI333))();
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
	goto T1719;}
	if((symbol_value(VV[139]))!=Cnil){
	goto T1719;}
	if((symbol_value(VV[141]))!=Cnil){
	goto T1719;}
	princ_str("\n#define VMB",VV[32]);
	(void)((*(LnkLI278))((V429)));
	goto T1717;
	goto T1719;
T1719:;
	princ_str("\n#define VMB",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_char(32,VV[32]);
	princ_str("register object *",VV[32]);
	(void)((*(LnkLI278))(symbol_value(VV[21])));
	princ_str("base=vs_top;",VV[32]);
	goto T1717;
T1717:;
	(void)((*(LnkLI333))());
	if((symbol_value(VV[139]))==Cnil){
	goto T1736;}
	princ_str("\n#define VMS",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_char(32,VV[32]);
	princ_str(" register object *",VV[32]);
	(void)((*(LnkLI278))(symbol_value(VV[21])));
	princ_str("sup=vs_top+",VV[32]);
	(void)((*(LnkLI278))(symbol_value(VV[131])));
	princ_str(";vs_top=sup;",VV[32]);
	goto T1734;
	goto T1736;
T1736:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[131]))==0)){
	goto T1747;}
	princ_str("\n#define VMS",VV[32]);
	(void)((*(LnkLI278))((V429)));
	goto T1734;
	goto T1747;
T1747:;
	princ_str("\n#define VMS",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_str(" vs_top += ",VV[32]);
	(void)((*(LnkLI278))(symbol_value(VV[131])));
	princ_char(59,VV[32]);
	goto T1734;
T1734:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[131]))==0)){
	goto T1758;}
	princ_str("\n#define VMV",VV[32]);
	(void)((*(LnkLI278))((V429)));
	goto T1756;
	goto T1758;
T1758:;
	if((symbol_value(VV[164]))==Cnil){
	goto T1763;}
	princ_str("\n#define VMV",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_str(" vs_reserve(",VV[32]);
	(void)((*(LnkLI278))(symbol_value(VV[131])));
	princ_str(");",VV[32]);
	goto T1756;
	goto T1763;
T1763:;
	princ_str("\n#define VMV",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_str(" vs_check;",VV[32]);
	goto T1756;
T1756:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[131]))==0)){
	goto T1774;}
	princ_str("\n#define VMR",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_str("(VMT",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_str(") return(VMT",VV[32]);
	(void)((*(LnkLI278))((V429)));
	princ_str(");",VV[32]);
	{object V432 = Cnil;
	VMR27(V432)}
	goto T1774;
T1774:;
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
	goto T1792;
T1792:;
	if(!(endp_prop((V438)))){
	goto T1793;}
	goto T1790;
	goto T1793;
T1793:;
	{register object V439;
	setq(VV[89],number_plus(symbol_value(VV[89]),small_fixnum(1)));
	V439= symbol_value(VV[89]);
	(void)(structure_set(car((V438)),VV[70],4,(V439)));
	princ_char(86,VV[26]);
	(void)((*(LnkLI275))((V439)));}
	if(endp_prop(cdr((V438)))){
	goto T1803;}
	princ_char(44,VV[26]);
	goto T1803;
T1803:;
	V438= cdr((V438));
	goto T1792;}
	goto T1790;
T1790:;
	princ_str(")\n",VV[26]);
	if(((V436))==Cnil){
	goto T1813;}
	princ_char(10,VV[26]);
	{register object V440;
	register object V441;
	register object V442;
	V440= (V436);
	V441= (V437);
	V442= Cnil;
	goto T1817;
T1817:;
	if(!(endp_prop((V440)))){
	goto T1818;}
	princ_char(59,VV[26]);
	{object V443 = Cnil;
	VMR28(V443)}
	goto T1818;
T1818:;
	if(((V442))==Cnil){
	goto T1823;}
	princ_char(59,VV[26]);
	goto T1823;
T1823:;
	(void)((*(LnkLI275))(symbol_value(VV[21])));
	V444= (*(LnkLI334))(car((V440)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V444));
	V445= (*(LnkLI281))(car((V441)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V445));
	V442= car((V441));
	princ_char(86,VV[26]);
	V446= structure_ref(car((V440)),VV[70],4);
	(void)((*(LnkLI275))(/* INLINE-ARGS */V446));
	V440= cdr((V440));
	V441= cdr((V441));
	goto T1817;}
	goto T1813;
T1813:;
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
	goto T1843;}
	{object V454 = (V453);
	VMR29(V454)}
	goto T1843;
T1843:;
	if((get((V450),VV[116],Cnil))!=Cnil){
	goto T1846;}
	{object V455 = (VFUN_NARGS=2,(*(LnkLI335))(VV[181],(V450)));
	VMR29(V455)}
	goto T1846;
T1846:;
	(void)(remprop((V450),VV[116]));
	{register object V456;
	V456= small_fixnum(0);
	{register object V457;
	register object V458;
	V457= structure_ref(cadr((V451)),VV[63],1);
	V458= car((V457));
	goto T1853;
T1853:;
	if(!(endp_prop((V457)))){
	goto T1854;}
	goto T1849;
	goto T1854;
T1854:;
	V459= structure_ref((V458),VV[70],2);
	if(!(type_of(/* INLINE-ARGS */V459)==t_cons)){
	goto T1858;}
	V460= structure_ref((V458),VV[70],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V460))==t_fixnum)){
	goto T1858;}
	V461= structure_ref((V458),VV[70],2);
	{object V462= cdr(/* INLINE-ARGS */V461);
	V456= (number_compare((V456),V462)>=0?((V456)):V462);}
	goto T1858;
T1858:;
	V457= cdr((V457));
	V458= car((V457));
	goto T1853;}
	goto T1849;
T1849:;
	base[0]= one_plus((V456));
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	V452= vs_base[0];
	{register object V463;
	register object V464;
	V463= structure_ref(cadr((V451)),VV[63],1);
	V464= car((V463));
	goto T1876;
T1876:;
	if(!(endp_prop((V463)))){
	goto T1877;}
	goto T1872;
	goto T1877;
T1877:;
	V465= structure_ref((V464),VV[70],2);
	if(!(type_of(/* INLINE-ARGS */V465)==t_cons)){
	goto T1881;}
	V466= structure_ref((V464),VV[70],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V466))==t_fixnum)){
	goto T1881;}
	{object V467;
	register object V469;
	V470= structure_ref((V464),VV[70],2);
	V467= cdr(/* INLINE-ARGS */V470);
	V469= structure_ref((V464),VV[70],0);
	if(type_of(nthcdr(fixint((V467)),V452))!=t_cons)FEwrong_type_argument(Scons,nthcdr(fixint((V467)),V452));
	(nthcdr(fixint((V467)),V452))->c.c_car = (V469);
	(void)(nthcdr(fixint((V467)),V452));}
	goto T1881;
T1881:;
	V463= cdr((V463));
	V464= car((V463));
	goto T1876;}
	goto T1872;
T1872:;
	(void)(sputprop((V450),VV[117],(V452)));
	{object V471;
	V471= get((V450),VV[117],Cnil);
	if(((V471))==Cnil){
	goto T1897;}
	if((cdr((V471)))!=Cnil){
	goto T1896;}
	if((car((V471)))==Cnil){
	goto T1897;}
	goto T1896;
T1896:;
	V472= list(2,VV[92],(V450));
	V473= list(3,VV[117],/* INLINE-ARGS */V472,list(2,VV[92],(V471)));
	{object V474 = (VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V473));
	VMR29(V474)}
	goto T1897;
T1897:;
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
	goto T1905;}
	V481= (VFUN_NARGS=1,(*(LnkLI337))((V478)));
	{long V482 = (long)(*(LnkLI336))(/* INLINE-ARGS */V481,(V480));
	VMR30((object)V482)}
	goto T1905;
T1905:;
	{register object V483;
	register object V484;
	V483= Cnil;
	V484= Cnil;
	{register object V485;
	register object V486;
	V485= (V478);
	V486= car((V485));
	goto T1911;
T1911:;
	if(!(endp_prop((V485)))){
	goto T1912;}
	goto T1907;
	goto T1912;
T1912:;
	V488= structure_ref((V486),VV[70],5);
	{register object x= /* INLINE-ARGS */V488,V487= VV[184];
	while(!endp(V487))
	if(x==(V487->c.c_car)){
	goto T1919;
	}else V487=V487->c.c_cdr;
	goto T1918;}
	goto T1919;
T1919:;{object V489;
	{register object x= (V486),V490= (V484);
	while(!endp(V490))
	if(eql(x,V490->c.c_car)){
	V489= V490;
	goto T1921;
	}else V490=V490->c.c_cdr;
	V489= Cnil;}
	goto T1921;
T1921:;
	if(V489==Cnil)goto T1920;
	goto T1916;
	goto T1920;
T1920:;}
	{register object V491;
	V491= (V486);
	V484= make_cons((V491),(V484));
	goto T1916;}
	goto T1918;
T1918:;{object V492;
	{register object x= (V486),V493= (V483);
	while(!endp(V493))
	if(x==(V493->c.c_car)){
	V492= V493;
	goto T1925;
	}else V493=V493->c.c_cdr;
	V492= Cnil;}
	goto T1925;
T1925:;
	if(V492==Cnil)goto T1924;
	goto T1916;
	goto T1924;
T1924:;}
	{register object V494;
	V494= (V486);
	V484= make_cons((V494),(V484));}
	goto T1916;
T1916:;
	V485= cdr((V485));
	V486= car((V485));
	goto T1911;}
	goto T1907;
T1907:;
	(void)((*(LnkLI336))((V483),(V480)));
	{long V495 = (long)(*(LnkLI336))((V484),symbol_value(VV[183]));
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
	V498= (VFUN_NARGS=1,(*(LnkLI337))((V498)));
	goto T1942;
T1942:;
	{register object V505;
	object V506;
	V505= (V498);
	V506= car((V505));
	goto T1948;
T1948:;
	if(!(endp_prop((V505)))){
	goto T1949;}
	goto T1944;
	goto T1949;
T1949:;
	V500= fix(structure_ref((V506),VV[70],6));
	if(!((V500)>=(V501))){
	goto T1955;}
	V504= (long)(V504)+(1);
	if(!((V500)<(V502))){
	goto T1960;}
	V502= V500;
	goto T1960;
T1960:;
	if(!((V504)>(V503))){
	goto T1955;}
	goto T1943;
	goto T1955;
T1955:;
	V505= cdr((V505));
	V506= car((V505));
	goto T1948;}
	goto T1944;
T1944:;
	if(!((V504)<(V503))){
	goto T1971;}
	V501= (long)(V501)-(1);
	goto T1971;
T1971:;
	{register object V507;
	register object V508;
	V507= (V498);
	V508= car((V507));
	goto T1979;
T1979:;
	if(!(endp_prop((V507)))){
	goto T1980;}
	goto T1975;
	goto T1980;
T1980:;
	{long V509= fix(structure_ref((V508),VV[70],6));
	if(!((/* INLINE-ARGS */V509)<(V501))){
	goto T1984;}}
	(void)(structure_set((V508),VV[70],6,small_fixnum(0)));
	goto T1984;
T1984:;
	V507= cdr((V507));
	V508= car((V507));
	goto T1979;}
	goto T1975;
T1975:;
	{long V510 = V501;
	VMR31((object)V510)}
	goto T1943;
T1943:;
	V504= 0;
	V501= (long)(V502)+(1);
	V502= 1000000;
	goto T1942;}
	base[0]=base[0];
}
/*	local entry for function WT-GLOBAL-ENTRY	*/

static object LI33(V515,V516,V517,V518)

object V515;object V516;object V517;object V518;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	if((get((V515),VV[103],Cnil))==Cnil){
	goto T1999;}
	{object V519 = Cnil;
	VMR32(V519)}
	goto T1999;
T1999:;
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[187],(V515))));
	princ_str("\nstatic void L",VV[26]);
	(void)((*(LnkLI275))((V516)));
	princ_str("()",VV[26]);
	princ_str("\n{	register object *base=vs_base;",VV[26]);
	if((symbol_value(VV[164]))!=Cnil){
	goto T2010;}
	if((symbol_value(VV[165]))==Cnil){
	goto T2009;}
	goto T2010;
T2010:;
	princ_str("\n	check_arg(",VV[26]);
	V520 = make_fixnum((long)length((V517)));
	(void)((*(LnkLI275))(V520));
	princ_str(");",VV[26]);
	goto T2009;
T2009:;
	princ_str("\n	base[0]=",VV[26]);
	{object V522= (V518);
	if((V522!= VV[90]))goto T2021;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[115]))==0)){
	goto T2023;}
	V521= VV[188];
	goto T2020;
	goto T2023;
T2023:;
	V521= VV[189];
	goto T2020;
	goto T2021;
T2021:;
	if((V522!= VV[143]))goto T2025;
	V521= VV[190];
	goto T2020;
	goto T2025;
T2025:;
	if((V522!= VV[144]))goto T2026;
	V521= VV[191];
	goto T2020;
	goto T2026;
T2026:;
	if((V522!= VV[145]))goto T2027;
	V521= VV[192];
	goto T2020;
	goto T2027;
T2027:;
	V521= VV[193];}
	goto T2020;
T2020:;
	(void)((*(LnkLI275))(V521));
	princ_str("(LI",VV[26]);
	(void)((*(LnkLI275))((V516)));
	princ_char(40,VV[26]);
	{register object V523;
	register long V524;
	V524= 0;
	V523= (V517);
	goto T2034;
T2034:;
	if(!(endp_prop((V523)))){
	goto T2035;}
	goto T2031;
	goto T2035;
T2035:;
	{object V526= car((V523));
	if((V526!= VV[90]))goto T2042;
	V525= VV[194];
	goto T2041;
	goto T2042;
T2042:;
	if((V526!= VV[143]))goto T2043;
	V525= VV[195];
	goto T2041;
	goto T2043;
T2043:;
	if((V526!= VV[144]))goto T2044;
	V525= VV[196];
	goto T2041;
	goto T2044;
T2044:;
	if((V526!= VV[145]))goto T2045;
	V525= VV[197];
	goto T2041;
	goto T2045;
T2045:;
	V525= VV[198];}
	goto T2041;
T2041:;
	(void)((*(LnkLI275))(V525));
	princ_str("(base[",VV[26]);
	V527 = make_fixnum(V524);
	(void)((*(LnkLI275))(V527));
	princ_str("])",VV[26]);
	if(endp_prop(cdr((V523)))){
	goto T2049;}
	princ_char(44,VV[26]);
	goto T2049;
T2049:;
	V523= cdr((V523));
	V524= (long)(V524)+1;
	goto T2034;}
	goto T2031;
T2031:;
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
	if((V531!= VV[90]))goto T2062;
	{object V532 = VV[199];
	VMR33(V532)}
	goto T2062;
T2062:;
	if((V531!= VV[262]))goto T2063;
	{object V533 = VV[200];
	VMR33(V533)}
	goto T2063;
T2063:;
	if((V531!= VV[143]))goto T2064;
	{object V534 = VV[201];
	VMR33(V534)}
	goto T2064;
T2064:;
	if((V531!= VV[145]))goto T2065;
	{object V535 = VV[202];
	VMR33(V535)}
	goto T2065;
T2065:;
	if((V531!= VV[144]))goto T2066;
	{object V536 = VV[203];
	VMR33(V536)}
	goto T2066;
T2066:;
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
	goto T2068;}
	if(!(endp_prop(cdr((V539))))){
	goto T2067;}
	goto T2068;
T2068:;
	V540 = make_fixnum((long)length((V539)));
	(void)((*(LnkLI284))(VV[205],small_fixnum(2),V540));
	goto T2067;
T2067:;
	if(type_of(car((V539)))==t_symbol){
	goto T2072;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[206],car((V539)))));
	goto T2072;
T2072:;
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
	V542= (*(LnkLI338))(car((V539)),cadr((V539)),cddr((V539)));
	(void)((*(LnkLI294))());
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
	goto T2085;}
	V558= list(4,VV[104],list(2,VV[92],(V552)),(V555),VV[207]);
	(void)((VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V558)));
	goto T2085;
T2085:;
	if(((V556))==Cnil){
	goto T2088;}
	V559= list(2,VV[92],(V552));
	V560= list(4,VV[104],/* INLINE-ARGS */V559,list(2,VV[92],(V556)),VV[208]);
	(void)((VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V560)));
	goto T2088;
T2088:;
	princ_str("\nstatic void L",VV[32]);
	(void)((*(LnkLI278))((V553)));
	princ_str("();",VV[32]);
	V561= list(2,VV[92],(V552));
	V562= list(3,VV[209],/* INLINE-ARGS */V561,(*(LnkLI302))(VV[210],(V553)));
	{object V563 = (VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V562));
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
	goto T2097;}
	bds_bind(VV[21],VV[212]);
	goto T2095;
	goto T2097;
T2097:;
	bds_bind(VV[21],VV[213]);
	goto T2095;
T2095:;
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
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[214],(V570))));
	princ_str("\nstatic void L",VV[26]);
	(void)((*(LnkLI275))((V571)));
	princ_str("()",VV[26]);
	princ_str("\n{register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base=vs_base;",VV[26]);
	V576= structure_ref(car(cddddr((V572))),VV[63],1);
	(void)((*(LnkLI315))(/* INLINE-ARGS */V576,(V571),VV[149]));
	princ_str("\n	register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("sup=base+VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_char(59,VV[26]);
	princ_str(" VC",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	if((symbol_value(VV[164]))==Cnil){
	goto T2123;}
	princ_str("\n	vs_reserve(VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_str(");",VV[26]);
	goto T2121;
	goto T2123;
T2123:;
	princ_str("\n	vs_check;",VV[26]);
	goto T2121;
T2121:;
	if(((V575))==Cnil){
	goto T2129;}
	princ_str("\n	bds_check;",VV[26]);
	goto T2129;
T2129:;
	if((symbol_value(VV[150]))==Cnil){
	goto T2133;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T2133;
T2133:;
	base[15]= car((V572));
	base[16]= cadr((V572));
	base[17]= caddr((V572));
	base[18]= cadddr((V572));
	vs_top=(vs_base=base+15)+4;
	(void) (*Lnk339)();
	vs_top=sup;
	princ_str("\n}",VV[26]);
	{object V577;
	V577= make_cons((VV[137]->s.s_dbind),(VV[131]->s.s_dbind));
	setq(VV[34],make_cons((V577),symbol_value(VV[34])));}
	princ_str("\n#define VC",VV[32]);
	(void)((*(LnkLI278))((VV[137]->s.s_dbind)));
	{object V578 = (*(LnkLI333))();
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
	goto T2154;}
	(void)((*(LnkLI269))(Cnil,(V580)));
	{object V582;
	base[0]= VV[215];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V582= vs_base[0];
	V583= listA(3,VV[65],(V582),VV[216]);
	(void)((*(LnkLI290))(/* INLINE-ARGS */V583));
	base[0]= list(5,VV[52],(V582),Cnil,(V580),Cnil);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk273)();
	vs_top=sup;
	{object V584;
	V584= list(2,VV[217],make_cons((V582),Cnil));
	setq(VV[25],make_cons((V584),symbol_value(VV[25])));
	{object V585 = symbol_value(VV[25]);
	VMR37(V585)}}}
	goto T2154;
T2154:;
	{object V586;
	if(type_of((V580))==t_cons){
	goto T2165;}
	V586= Cnil;
	goto T2164;
	goto T2165;
T2165:;
	if(type_of(car((V580)))==t_symbol){
	goto T2167;}
	V586= Cnil;
	goto T2164;
	goto T2167;
T2167:;
	if(!((car((V580)))==(VV[218]))){
	goto T2171;}
	goto T2169;
	goto T2171;
T2171:;
	base[0]= car((V580));
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	V587= vs_base[0];
	if((V587)==Cnil){
	goto T2169;}
	V586= Cnil;
	goto T2164;
	goto T2169;
T2169:;
	{register object V588;
	register long V589;
	V588= cdr((V580));
	V589= 1;
	goto T2178;
T2178:;
	if((V589)>=(1000)){
	goto T2180;}
	if(type_of((V588))==t_cons){
	goto T2179;}
	goto T2180;
T2180:;
	V586= Cnil;
	goto T2164;
	goto T2179;
T2179:;
	if(!(type_of(car((V588)))==t_cons)){
	goto T2185;}
	if(!((caar((V588)))==(VV[65]))){
	goto T2185;}
	V581= cadr(car((V588)));
	if(!(type_of((V581))==t_cons)){
	goto T2185;}
	if(!((car((V581)))==(VV[219]))){
	goto T2185;}
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
	goto T2185;
T2185:;
	if(type_of((V588))==t_cons){
	goto T2208;}
	V588= Cnil;
	goto T2207;
	goto T2208;
T2208:;
	V588= cdr((V588));
	goto T2207;
T2207:;
	V589= (long)(1)+(V589);
	goto T2178;}
	goto T2164;
T2164:;
	if(((V586))==Cnil){
	goto T2213;}
	{object V594 = (V586);
	VMR37(V594)}
	goto T2213;
T2213:;
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
	goto T2221;}
	{object V600 = (V599);
	VMR38(V600)}
	goto T2221;
T2221:;
	{object V601;
	base[0]= (V598);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	V601= vs_base[0];
	if(((V601))==Cnil){
	goto T2226;}
	{object V602 = (V601);
	VMR38(V602)}
	goto T2226;
T2226:;
	{object V603 = (VFUN_NARGS=1,(*(LnkLI301))((V598)));
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
	goto T2231;
T2231:;
	if(!(endp_prop((V604)))){
	goto T2232;}
	{object V606 = Cnil;
	VMR39(V606)}
	goto T2232;
T2232:;
	if(!(type_of((V605))!=t_cons)){
	goto T2236;}
	(void)((*(LnkLI340))());
	goto T2236;
T2236:;
	{register object V607;
	V607= make_cons(VV[221],(V605));
	setq(VV[25],make_cons((V607),symbol_value(VV[25])));}
	V604= cdr((V604));
	V605= car((V604));
	goto T2231;}
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
	{object V613 = (VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V612));
	VMR40(V613)}
	return Cnil;
}
/*	local entry for function T2DECLARE	*/

static object LI42(V615)

object V615;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V616 = (*(LnkLI340))();
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
	goto T2258;
T2258:;
	if(!(endp_prop((V632)))){
	goto T2259;}
	goto T2254;
	goto T2259;
T2259:;
	if(type_of((V633))==t_string){
	goto T2263;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[224],(V633))));
	goto T2263;
T2263:;
	V632= cdr((V632));
	V633= car((V632));
	goto T2258;}
	goto T2254;
T2254:;
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
	goto T2276;
T2276:;
	if(!(endp_prop((V638)))){
	goto T2277;}
	{object V640 = Cnil;
	VMR45(V640)}
	goto T2277;
T2277:;
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))((V639)));
	V638= cdr((V638));
	V639= car((V638));
	goto T2276;}
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
	goto T2291;}
	if(!(endp_prop(cdr((V642))))){
	goto T2290;}
	goto T2291;
T2291:;
	V644 = make_fixnum((long)length((V642)));
	(void)((*(LnkLI284))(VV[226],small_fixnum(2),V644));
	goto T2290;
T2290:;
	if(type_of(car((V642)))==t_string){
	goto T2295;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[227],car((V642)))));
	goto T2295;
T2295:;
	{object V645= cadr((V642));
	if(type_of(V645)==t_fixnum||
type_of(V645)==t_bignum||
type_of(V645)==t_ratio||
type_of(V645)==t_shortfloat||
type_of(V645)==t_longfloat||
type_of(V645)==t_complex){
	goto T2298;}}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[228],cadr((V642)))));
	goto T2298;
T2298:;
	{register object V646;
	register object V647;
	V646= cddr((V642));
	V647= car((V646));
	goto T2305;
T2305:;
	if(!(endp_prop((V646)))){
	goto T2306;}
	goto T2301;
	goto T2306;
T2306:;
	if(!(type_of((V647))==t_string)){
	goto T2312;}
	{register object V648;
	V648= (V647);
	V643= make_cons((V648),(V643));
	goto T2310;}
	goto T2312;
T2312:;
	if(!(type_of((V647))==t_cons)){
	goto T2317;}
	if(!(type_of(car((V647)))==t_symbol)){
	goto T2320;}
	base[2]= car((V647));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2322;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[229],car((V647)))));
	goto T2322;
T2322:;
	{register object V649;
	V650= car((V647));
	V651= (*(LnkLI341))(cdr((V647)));
	V652= make_cons(/* INLINE-ARGS */V650,/* INLINE-ARGS */V651);
	V649= make_cons(/* INLINE-ARGS */V652,Cnil);
	V643= make_cons((V649),(V643));
	goto T2310;}
	goto T2320;
T2320:;
	if(!(type_of(car((V647)))==t_cons)){
	goto T2329;}
	if(!(type_of(caar((V647)))==t_symbol)){
	goto T2329;}
	if(!((caar((V647)))==(VV[92]))){
	goto T2336;}
	if(!(endp_prop(cdar((V647))))){
	goto T2338;}
	goto T2329;
	goto T2338;
T2338:;
	if(!(((endp_prop(cddar((V647)))?Ct:Cnil))==Cnil)){
	goto T2340;}
	goto T2329;
	goto T2340;
T2340:;
	if(!(endp_prop(cdr((V647))))){
	goto T2342;}
	goto T2329;
	goto T2342;
T2342:;
	if(((endp_prop(cddr((V647)))?Ct:Cnil))==Cnil){
	goto T2329;}
	goto T2334;
	goto T2336;
T2336:;
	base[2]= caar((V647));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2329;}
	goto T2334;
T2334:;
	{register object V653;
	V654= caar((V647));
	if(!((caar((V647)))==(VV[92]))){
	goto T2348;}
	V656= (*(LnkLI326))(cadar((V647)));
	V655= make_cons(/* INLINE-ARGS */V656,Cnil);
	goto T2346;
	goto T2348;
T2348:;
	V655= (*(LnkLI341))(cdar((V647)));
	goto T2346;
T2346:;
	V657= make_cons(/* INLINE-ARGS */V654,V655);
	V658= (*(LnkLI341))(cdr((V647)));
	V653= make_cons(/* INLINE-ARGS */V657,/* INLINE-ARGS */V658);
	V643= make_cons((V653),(V643));
	goto T2310;}
	goto T2329;
T2329:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[230],(V647))));
	goto T2310;
	goto T2317;
T2317:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[231],(V647))));
	goto T2310;
T2310:;
	V646= cdr((V646));
	V647= car((V646));
	goto T2305;}
	goto T2301;
T2301:;
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
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[232],VV[226])));
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))((V666)));
	princ_str("\n{",VV[26]);
	princ_str("\nobject *vs=vs_top;",VV[26]);
	princ_str("\nobject *old_top=vs_top+",VV[26]);
	(void)((*(LnkLI275))((V667)));
	princ_char(59,VV[26]);
	if(!(number_compare((V667),small_fixnum(0))>0)){
	goto T2371;}
	princ_str("\n	vs_top=old_top;",VV[26]);
	goto T2371;
T2371:;
	princ_str("\n{",VV[26]);
	{object V670;
	register object V671;
	V670= (V668);
	V671= car((V670));
	goto T2381;
T2381:;
	if(!(endp_prop((V670)))){
	goto T2382;}
	goto T2377;
	goto T2382;
T2382:;
	if(!(type_of((V671))==t_string)){
	goto T2388;}
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))((V671)));
	goto T2386;
	goto T2388;
T2388:;
	if(!((caar((V671)))==(VV[92]))){
	goto T2393;}
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))(cadadr((V671))));
	{object V672= caadr((V671));
	if((V672!= VV[75]))goto T2398;
	princ_str("=VV[",VV[26]);
	(void)((*(LnkLI275))(cadar((V671))));
	princ_str("];",VV[26]);
	goto T2386;
	goto T2398;
T2398:;
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
	goto T2386;}
	goto T2393;
T2393:;
	princ_str("\n{vs_base=vs_top=old_top;",VV[26]);
	{register object V674;
	register object V675;
	V674= cdar((V671));
	V675= car((V674));
	goto T2415;
T2415:;
	if(!(endp_prop((V674)))){
	goto T2416;}
	goto T2411;
	goto T2416;
T2416:;
	princ_str("\nvs_push(",VV[26]);
	{object V676= car((V675));
	if((V676!= VV[75]))goto T2423;
	(void)((*(LnkLI275))(cadr((V675))));
	goto T2422;
	goto T2423;
T2423:;
	if((V676!= VV[342]))goto T2425;
	princ_str("code_char((long)",VV[26]);
	(void)((*(LnkLI275))(cadr((V675))));
	princ_char(41,VV[26]);
	goto T2422;
	goto T2425;
T2425:;
	if((V676!= VV[343]))goto T2429;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[115]))==0)){
	goto T2430;}
	princ_str("CMP",VV[26]);
	goto T2430;
T2430:;
	princ_str("make_fixnum((long)",VV[26]);
	(void)((*(LnkLI275))(cadr((V675))));
	princ_char(41,VV[26]);
	goto T2422;
	goto T2429;
T2429:;
	if((V676!= VV[344]))goto T2437;
	princ_str("make_shortfloat((double)",VV[26]);
	(void)((*(LnkLI275))(cadr((V675))));
	princ_char(41,VV[26]);
	goto T2422;
	goto T2437;
T2437:;
	if((V676!= VV[345]))goto T2441;
	princ_str("make_longfloat((double)",VV[26]);
	(void)((*(LnkLI275))(cadr((V675))));
	princ_char(41,VV[26]);
	goto T2422;
	goto T2441;
T2441:;}
	goto T2422;
T2422:;
	princ_str(");",VV[26]);
	V674= cdr((V674));
	V675= car((V674));
	goto T2415;}
	goto T2411;
T2411:;
	{register object x= caar((V671)),V677= symbol_value(VV[80]);
	while(!endp(V677))
	if(type_of(V677->c.c_car)==t_cons &&eql(x,V677->c.c_car->c.c_car)){
	V669= (V677->c.c_car);
	goto T2456;
	}else V677=V677->c.c_cdr;
	V669= Cnil;}
	goto T2456;
T2456:;
	if(((V669))==Cnil){
	goto T2454;}
	if((symbol_value(VV[150]))==Cnil){
	goto T2458;}
	princ_str("\nihs_push(VV[",VV[26]);
	V678= (*(LnkLI328))(caar((V671)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V678));
	princ_str("]);",VV[26]);
	princ_str("\nL",VV[26]);
	(void)((*(LnkLI275))(cdr((V669))));
	princ_str("();",VV[26]);
	princ_str("\nihs_pop();",VV[26]);
	goto T2452;
	goto T2458;
T2458:;
	princ_str("\nL",VV[26]);
	(void)((*(LnkLI275))(cdr((V669))));
	princ_str("();",VV[26]);
	goto T2452;
	goto T2454;
T2454:;
	if((symbol_value(VV[150]))==Cnil){
	goto T2473;}
	princ_str("\nsuper_funcall(VV[",VV[26]);
	V679= (*(LnkLI328))(caar((V671)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V679));
	princ_str("]);",VV[26]);
	goto T2452;
	goto T2473;
T2473:;
	if((symbol_value(VV[164]))==Cnil){
	goto T2479;}
	princ_str("\nsuper_funcall_no_event(VV[",VV[26]);
	V680= (*(LnkLI328))(caar((V671)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V680));
	princ_str("]);",VV[26]);
	goto T2452;
	goto T2479;
T2479:;
	princ_str("\nCMPfuncall(VV[",VV[26]);
	V681= (*(LnkLI328))(caar((V671)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V681));
	princ_str("]->s.s_gfdef);",VV[26]);
	goto T2452;
T2452:;
	if(endp_prop(cdr((V671)))){
	goto T2487;}
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))(cadadr((V671))));
	{object V682= caadr((V671));
	if((V682!= VV[75]))goto T2494;
	princ_str("=vs_base[0];",VV[26]);
	goto T2493;
	goto T2494;
T2494:;
	princ_str("=object_to_",VV[26]);
	base[1]= symbol_name(caadr((V671)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V683= vs_base[0];
	(void)((*(LnkLI275))(V683));
	princ_str("(vs_base[0]);",VV[26]);}
	goto T2493;
T2493:;
	{register object V684;
	register object V685;
	V684= cddr((V671));
	V685= car((V684));
	goto T2504;
T2504:;
	if(!(endp_prop((V684)))){
	goto T2505;}
	goto T2487;
	goto T2505;
T2505:;
	princ_str("\nvs_base++;",VV[26]);
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))(cadr((V685))));
	{object V686= car((V685));
	if((V686!= VV[75]))goto T2515;
	princ_str("=(vs_base<vs_top?vs_base[0]:Cnil);",VV[26]);
	goto T2514;
	goto T2515;
T2515:;
	princ_str("=object_to_",VV[26]);
	base[3]= symbol_name(car((V685)));
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V687= vs_base[0];
	(void)((*(LnkLI275))(V687));
	princ_str("((vs_base<vs_top?vs_base[0]:Cnil));",VV[26]);}
	goto T2514;
T2514:;
	V684= cdr((V684));
	V685= car((V684));
	goto T2504;}
	goto T2487;
T2487:;
	princ_str("\n}",VV[26]);
	goto T2386;
T2386:;
	V670= cdr((V670));
	V671= car((V670));
	goto T2381;}
	goto T2377;
T2377:;
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
	goto T2544;}
	if(endp_prop(cdr((V690)))){
	goto T2544;}
	if(!(endp_prop(cddr((V690))))){
	goto T2543;}
	goto T2544;
T2544:;
	V695 = make_fixnum((long)length((V690)));
	(void)((*(LnkLI284))(VV[233],small_fixnum(3),V695));
	goto T2543;
T2543:;
	if(type_of(car((V690)))==t_symbol){
	goto T2550;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[234],car((V690)))));
	goto T2550;
T2550:;
	{register object V696;
	register object V697;
	V696= cadr((V690));
	V697= car((V696));
	goto T2557;
T2557:;
	if(!(endp_prop((V696)))){
	goto T2558;}
	goto T2553;
	goto T2558;
T2558:;
	{register object x= (V697),V698= VV[235];
	while(!endp(V698))
	if(eql(x,V698->c.c_car)){
	goto T2562;
	}else V698=V698->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[236],(V697))));
	goto T2562;
T2562:;
	V696= cdr((V696));
	V697= car((V696));
	goto T2557;}
	goto T2553;
T2553:;
	V694= caddr((V690));
	if(!(type_of((V694))==t_symbol)){
	goto T2574;}
	V691= VV[75];
	base[1]= symbol_name((V694));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V692= vs_base[0];
	goto T2572;
	goto T2574;
T2574:;
	if(!(type_of((V694))==t_string)){
	goto T2581;}
	V691= VV[75];
	V692= (V694);
	goto T2572;
	goto T2581;
T2581:;
	if(!(type_of((V694))==t_cons)){
	goto T2587;}
	{register object x= car((V694)),V699= VV[237];
	while(!endp(V699))
	if(eql(x,V699->c.c_car)){
	goto T2591;
	}else V699=V699->c.c_cdr;
	goto T2587;}
	goto T2591;
T2591:;
	if(!(type_of(cdr((V694)))==t_cons)){
	goto T2587;}
	if(type_of(cadr((V694)))==t_symbol){
	goto T2594;}
	if(!(type_of(cadr((V694)))==t_string)){
	goto T2587;}
	goto T2594;
T2594:;
	if(!(endp_prop(cddr((V694))))){
	goto T2587;}
	if(!(type_of(cadr((V694)))==t_symbol)){
	goto T2602;}
	base[1]= symbol_name(cadr((V694)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V692= vs_base[0];
	goto T2600;
	goto T2602;
T2602:;
	V692= cadr((V694));
	goto T2600;
T2600:;
	V691= car((V694));
	goto T2572;
	goto T2587;
T2587:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[238],(V694))));
	goto T2572;
T2572:;
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
	V714= list(3,VV[112],/* INLINE-ARGS */V713,(*(LnkLI302))(VV[239],(V709)));
	{object V715 = (VFUN_NARGS=1,(*(LnkLI301))(/* INLINE-ARGS */V714));
	VMR49(V715)}
	return Cnil;
}
/*	local entry for function T3DEFENTRY	*/

static object LI51(V721,V722,V723,V724,V725)

object V721;object V722;object V723;register object V724;object V725;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[240],(V721))));
	princ_str("\nstatic void L",VV[26]);
	(void)((*(LnkLI275))((V722)));
	princ_str("()",VV[26]);
	princ_str("\n{	object *old_base=vs_base;",VV[26]);
	{object V726= (V724);
	if((V726!= VV[241]))goto T2623;
	goto T2622;
	goto T2623;
T2623:;
	if((V726!= VV[159]))goto T2624;
	princ_str("\n	char *x;",VV[26]);
	goto T2622;
	goto T2624;
T2624:;
	princ_str("\n	",VV[26]);
	base[0]= symbol_name((V724));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V727= vs_base[0];
	(void)((*(LnkLI275))(V727));
	princ_str(" x;",VV[26]);}
	goto T2622;
T2622:;
	if((symbol_value(VV[164]))==Cnil){
	goto T2631;}
	princ_str("\n	check_arg(",VV[26]);
	V728 = make_fixnum((long)length((V723)));
	(void)((*(LnkLI275))(V728));
	princ_str(");",VV[26]);
	goto T2631;
T2631:;
	if(((V724))==(VV[241])){
	goto T2637;}
	princ_str("\n	x=",VV[26]);
	goto T2637;
T2637:;
	princ_str("\n	",VV[26]);
	(void)((*(LnkLI275))((V725)));
	princ_char(40,VV[26]);
	if(endp_prop((V723))){
	goto T2645;}
	{register object V729;
	register long V730;
	V730= 0;
	V729= (V723);
	goto T2650;
T2650:;
	{object V731= car((V729));
	if((V731!= VV[75]))goto T2654;
	princ_str("\n	vs_base[",VV[26]);
	V732 = make_fixnum(V730);
	(void)((*(LnkLI275))(V732));
	princ_char(93,VV[26]);
	goto T2653;
	goto T2654;
T2654:;
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
	goto T2653;
T2653:;
	if(!(endp_prop(cdr((V729))))){
	goto T2665;}
	goto T2645;
	goto T2665;
T2665:;
	princ_char(44,VV[26]);
	V729= cdr((V729));
	V730= (long)(V730)+1;
	goto T2650;}
	goto T2645;
T2645:;
	princ_str(");",VV[26]);
	princ_str("\n	vs_top=(vs_base=old_base)+1;",VV[26]);
	princ_str("\n	vs_base[0]=",VV[26]);
	{object V735= (V724);
	if((V735!= VV[241]))goto T2681;
	princ_str("Cnil",VV[26]);
	goto T2680;
	goto T2681;
T2681:;
	if((V735!= VV[75]))goto T2683;
	princ_char(120,VV[26]);
	goto T2680;
	goto T2683;
T2683:;
	if((V735!= VV[342]))goto T2685;
	princ_str("code_char(x)",VV[26]);
	goto T2680;
	goto T2685;
T2685:;
	if((V735!= VV[343]))goto T2687;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[115]))==0)){
	goto T2688;}
	princ_str("CMP",VV[26]);
	goto T2688;
T2688:;
	princ_str("make_fixnum(x)",VV[26]);
	goto T2680;
	goto T2687;
T2687:;
	if((V735!= VV[159]))goto T2693;
	princ_str("make_simple_string(x)",VV[26]);
	goto T2680;
	goto T2693;
T2693:;
	if((V735!= VV[344]))goto T2695;
	princ_str("make_shortfloat(x)",VV[26]);
	goto T2680;
	goto T2695;
T2695:;
	if((V735!= VV[345]))goto T2697;
	princ_str("make_longfloat(x)",VV[26]);
	goto T2680;
	goto T2697;
T2697:;}
	goto T2680;
T2680:;
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
	goto T2706;
T2706:;
	if(!(endp_prop((V743)))){
	goto T2707;}
	{object V745 = reverse((V742));
	VMR52(V745)}
	goto T2707;
T2707:;
	if(!(type_of((V744))==t_symbol)){
	goto T2713;}
	{object V746;
	base[2]= symbol_name((V744));
	vs_top=(vs_base=base+2)+1;
	Lstring_downcase();
	vs_top=sup;
	V747= vs_base[0];
	V746= list(2,VV[75],V747);
	V742= make_cons((V746),(V742));
	goto T2711;}
	goto T2713;
T2713:;
	if(!(type_of((V744))==t_string)){
	goto T2720;}
	{object V748;
	V748= list(2,VV[75],(V744));
	V742= make_cons((V748),(V742));
	goto T2711;}
	goto T2720;
T2720:;
	if(!(type_of((V744))==t_cons)){
	goto T2725;}
	{register object x= car((V744)),V749= VV[242];
	while(!endp(V749))
	if(eql(x,V749->c.c_car)){
	goto T2728;
	}else V749=V749->c.c_cdr;
	goto T2725;}
	goto T2728;
T2728:;
	{register object V750;
	register object V751;
	V750= cdr((V744));
	V751= car((V750));
	goto T2732;
T2732:;
	if(!(endp_prop((V750)))){
	goto T2733;}
	goto T2711;
	goto T2733;
T2733:;
	{register object V752;
	V753= car((V744));
	if(!(type_of((V751))==t_symbol)){
	goto T2741;}
	base[4]= symbol_name((V751));
	vs_top=(vs_base=base+4)+1;
	Lstring_downcase();
	vs_top=sup;
	V754= vs_base[0];
	goto T2739;
	goto T2741;
T2741:;
	if(!(type_of((V751))==t_string)){
	goto T2745;}
	V754= (V751);
	goto T2739;
	goto T2745;
T2745:;
	V754= (VFUN_NARGS=2,(*(LnkLI266))(VV[243],(V751)));
	goto T2739;
T2739:;
	V752= list(2,/* INLINE-ARGS */V753,V754);
	V742= make_cons((V752),(V742));}
	V750= cdr((V750));
	V751= car((V750));
	goto T2732;}
	goto T2725;
T2725:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[244],(V744))));
	goto T2711;
T2711:;
	V743= cdr((V743));
	V744= car((V743));
	goto T2706;}}
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
	goto T2760;}
	V765= small_fixnum(0);
	goto T2758;
	goto T2760;
T2760:;
	V765= structure_ref((V763),VV[33],4);
	goto T2758;
T2758:;
	V766= Cnil;
	bds_bind(VV[21],(*(LnkLI307))(cadr((V764))));
	bds_bind(VV[118],Cnil);
	V767= caaddr((V764));
	if((structure_ref((V763),VV[33],0))==Cnil){
	goto T2768;}
	V768= structure_ref((V763),VV[33],0);
	goto T2766;
	goto T2768;
T2768:;
	V768= Cnil;
	goto T2766;
T2766:;
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[245],V768)));
	princ_str("\nstatic void ",VV[26]);
	if(((V760))==Cnil){
	goto T2775;}
	V769= VV[246];
	goto T2773;
	goto T2775;
T2775:;
	V769= VV[247];
	goto T2773;
T2773:;
	(void)((*(LnkLI275))(V769));
	V770= structure_ref((V763),VV[33],3);
	(void)((*(LnkLI275))(/* INLINE-ARGS */V770));
	princ_char(40,VV[26]);
	princ_str("base0",VV[26]);
	if(((V767))==Cnil){
	goto T2784;}
	V771= VV[248];
	goto T2782;
	goto T2784;
T2784:;
	V771= VV[249];
	goto T2782;
T2782:;
	(void)((*(LnkLI275))(V771));
	V772= structure_ref(cadr((V764)),VV[63],1);
	(void)((*(LnkLI309))(/* INLINE-ARGS */V772,small_fixnum(2)));
	(void)((*(LnkLI314))(caaddr((V764)),Cnil));
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
	(void)((*(LnkLI315))(/* INLINE-ARGS */V773,/* INLINE-ARGS */V774,VV[251]));
	princ_str("\n	VMB",VV[26]);
	(void)((*(LnkLI275))((V766)));
	princ_str(" VMS",VV[26]);
	(void)((*(LnkLI275))((V766)));
	princ_str(" VMV",VV[26]);
	(void)((*(LnkLI275))((V766)));
	if((symbol_value(VV[150]))==Cnil){
	goto T2808;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T2808;
T2808:;
	base[19]= caddr(cddr((V764)));
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk316)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),(VV[131]->s.s_dbind))==0)){
	goto T2816;}
	if(((VV[139]->s.s_dbind))!=Cnil){
	goto T2816;}
	if(((VV[141]->s.s_dbind))!=Cnil){
	goto T2816;}
	goto T2814;
	goto T2816;
T2816:;
	princ_str("\n	base[0]=base[0];",VV[26]);
	goto T2814;
T2814:;
	princ_str("\n}",VV[26]);
	(void)((*(LnkLI317))((V766),Ct));
	V775= structure_ref((V763),VV[33],3);
	{object V776 = (*(LnkLI311))(/* INLINE-ARGS */V775);
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
	goto T2828;}
	V787= 0;
	goto T2826;
	goto T2828;
T2828:;
	V787= fix(structure_ref((V785),VV[33],4));
	goto T2826;
T2826:;
	bds_bind(VV[21],(*(LnkLI307))(cadr((V786))));
	bds_bind(VV[118],Cnil);
	if(!(((V782))==(VV[252]))){
	goto T2831;}
	{object V788 = (*(LnkLI251))((V782),(V783),(V784),(V785),(V786));
	bds_unwind1;
	bds_unwind1;
	VMR54(V788)}
	goto T2831;
T2831:;
	if((structure_ref((V785),VV[33],0))==Cnil){
	goto T2837;}
	V789= structure_ref((V785),VV[33],0);
	goto T2835;
	goto T2837;
T2837:;
	V789= Cnil;
	goto T2835;
T2835:;
	(void)((VFUN_NARGS=2,(*(LnkLI313))(VV[253],V789)));
	princ_str("\nstatic void ",VV[32]);
	if(((V782))==Cnil){
	goto T2844;}
	V790= VV[254];
	goto T2842;
	goto T2844;
T2844:;
	V790= VV[255];
	goto T2842;
T2842:;
	(void)((*(LnkLI278))(V790));
	V791= structure_ref((V785),VV[33],3);
	(void)((*(LnkLI278))(/* INLINE-ARGS */V791));
	princ_str("();",VV[32]);
	princ_str("\nstatic void ",VV[26]);
	if(((V782))==Cnil){
	goto T2853;}
	V792= VV[256];
	goto T2851;
	goto T2853;
T2853:;
	V792= VV[257];
	goto T2851;
T2851:;
	(void)((*(LnkLI275))(V792));
	V793= structure_ref((V785),VV[33],3);
	(void)((*(LnkLI275))(/* INLINE-ARGS */V793));
	princ_char(40,VV[26]);
	{register object V794;
	register long V795;
	V794= make_fixnum(V787);
	V795= 0;
	goto T2861;
T2861:;
	V796 = make_fixnum(V795);
	if(!(number_compare(V796,(V794))>=0)){
	goto T2862;}
	princ_str("base",VV[26]);
	V797 = make_fixnum(V795);
	(void)((*(LnkLI275))(V797));
	princ_char(41,VV[26]);
	goto T2857;
	goto T2862;
T2862:;
	princ_str("base",VV[26]);
	V798 = make_fixnum(V795);
	(void)((*(LnkLI275))(V798));
	princ_char(44,VV[26]);
	V795= (long)(V795)+1;
	goto T2861;}
	goto T2857;
T2857:;
	princ_str("\nregister object ",VV[26]);
	{register object V799;
	register long V800;
	V799= make_fixnum(V787);
	V800= 0;
	goto T2882;
T2882:;
	V801 = make_fixnum(V800);
	if(!(number_compare(V801,(V799))>=0)){
	goto T2883;}
	princ_char(42,VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base",VV[26]);
	V802 = make_fixnum(V800);
	(void)((*(LnkLI275))(V802));
	princ_char(59,VV[26]);
	goto T2878;
	goto T2883;
T2883:;
	princ_char(42,VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base",VV[26]);
	V803 = make_fixnum(V800);
	(void)((*(LnkLI275))(V803));
	princ_char(44,VV[26]);
	V800= (long)(V800)+1;
	goto T2882;}
	goto T2878;
T2878:;
	V804= structure_ref(cadr((V786)),VV[63],1);
	(void)((*(LnkLI309))(/* INLINE-ARGS */V804,small_fixnum(2)));
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
	(void)((*(LnkLI315))(/* INLINE-ARGS */V806,/* INLINE-ARGS */V807,VV[258]));
	princ_str(" VC",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	if((symbol_value(VV[164]))==Cnil){
	goto T2923;}
	princ_str("\n	vs_reserve(VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_str(");",VV[26]);
	goto T2921;
	goto T2923;
T2923:;
	princ_str("\n	vs_check;",VV[26]);
	goto T2921;
T2921:;
	if((symbol_value(VV[150]))==Cnil){
	goto T2929;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T2929;
T2929:;
	if(((V782))==Cnil){
	goto T2935;}
	(void)((VFUN_NARGS=2,(*(LnkLI332))(caddr((V786)),caddr(cddr((V786))))));
	goto T2933;
	goto T2935;
T2935:;
	(void)((VFUN_NARGS=3,(*(LnkLI332))(caddr((V786)),caddr(cddr((V786))),(V785))));
	goto T2933;
T2933:;
	princ_str("\n}",VV[26]);
	{object V808;
	V808= make_cons((VV[137]->s.s_dbind),(VV[131]->s.s_dbind));
	setq(VV[34],make_cons((V808),symbol_value(VV[34])));}
	princ_str("\n#define VC",VV[32]);
	(void)((*(LnkLI278))((VV[137]->s.s_dbind)));
	V809= (*(LnkLI333))();
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
	{object V811 = (*(LnkLI311))(/* INLINE-ARGS */V810);
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
	goto T2950;
T2950:;
	if(!(endp_prop((V813)))){
	goto T2951;}
	goto T2946;
	goto T2951;
T2951:;
	{register object V815;
	if(!(type_of((V814))==t_cons)){
	goto T2958;}
	{register object V816;
	V816= car((V814));
	V814= cdr((V814));
	V815= (V816);
	goto T2956;}
	goto T2958;
T2958:;
	V815= Ct;
	goto T2956;
T2956:;
	if(!(((V812))==((V815)))){
	goto T2965;}
	base[1]= symbol_value(VV[32]);
	base[2]= VV[259];
	base[3]= (V814);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T2963;
	goto T2965;
T2965:;
	if(!(((V812))==Cnil)){
	goto T2971;}
	goto T2970;
	goto T2971;
T2971:;
	base[1]= symbol_value(VV[32]);
	base[2]= VV[260];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	goto T2970;
T2970:;
	V812= (V815);
	base[1]= symbol_value(VV[32]);
	base[2]= VV[261];
	base[3]= (*(LnkLI281))((V812));
	base[4]= (V814);
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
	goto T2963;
T2963:;
	if(!(((V812))==(VV[262]))){
	goto T2955;}
	base[1]= symbol_value(VV[32]);
	base[2]= VV[263];
	base[3]= (V814);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;}
	goto T2955;
T2955:;
	V813= cdr((V813));
	V814= car((V813));
	goto T2950;}
	goto T2946;
T2946:;
	if(symbol_value(VV[19])==Cnil){
	goto T2991;}
	base[0]= symbol_value(VV[32]);
	base[1]= VV[264];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	goto T2991;
T2991:;
	if((symbol_value(VV[17]))==Cnil){
	goto T2995;}
	if(eql(symbol_value(VV[142]),small_fixnum(0))){
	goto T2995;}
	base[0]= symbol_value(VV[32]);
	base[1]= VV[265];
	base[2]= symbol_value(VV[142]);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V817 = vs_base[0];
	VMR55(V817)}
	goto T2995;
T2995:;
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
	goto T3003;}
	goto T3002;
	goto T3003;
T3003:;
	(VV[154]->s.s_dbind)= Ct;
	goto T3002;
T3002:;
	{object V821;
	V821= (*(LnkLI346))((V819));
	if(((V821))==Cnil){
	goto T3008;}
	{object V822;
	setq(VV[89],number_plus(symbol_value(VV[89]),small_fixnum(1)));
	V822= symbol_value(VV[89]);
	(void)(structure_set((V819),VV[70],1,(V821)));
	(void)(structure_set((V819),VV[70],4,(V822)));
	princ_str("\n	",VV[26]);
	if((base0[1])!=Cnil){
	goto T3015;}
	princ_char(123,VV[26]);
	base0[1]= Ct;
	goto T3015;
T3015:;
	base[1]= (V819);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk347)();
	return;}
	goto T3008;
T3008:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
static void LnkT347(){ call_or_link(VV[347],(void **)(void *)&Lnk347);} /* WT-VAR-DECL */
static object  LnkTLI346(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[346],(void **)(void *)&LnkLI346,1,first,ap);va_end(ap);return V1;} /* C2VAR-KIND */
static object  LnkTLI251(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[251],(void **)(void *)&LnkLI251,5,first,ap);va_end(ap);return V1;} /* T3LOCAL-DCFUN */
static object  LnkTLI341(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[341],(void **)(void *)&LnkLI341,1,first,ap);va_end(ap);return V1;} /* PARSE-CVSPECS */
static object  LnkTLI340(){return call_proc0(VV[340],(void **)(void *)&LnkLI340);} /* WFS-ERROR */
static void LnkT339(){ call_or_link(VV[339],(void **)(void *)&Lnk339);} /* C2DM */
static object  LnkTLI338(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[338],(void **)(void *)&LnkLI338,3,first,ap);va_end(ap);return V1;} /* C1DM */
static object  LnkTLI337(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[337],(void **)(void *)&LnkLI337,first,ap);va_end(ap);return V1;} /* REMOVE-DUPLICATES */
static object  LnkTLI336(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[336],(void **)(void *)&LnkLI336,258,first,ap);va_end(ap);return V1;} /* ANALYZE-REGS1 */
static object  LnkTLI335(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[335],(void **)(void *)&LnkLI335,first,ap);va_end(ap);return V1;} /* WARN */
static object  LnkTLI334(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[334],(void **)(void *)&LnkLI334,1,first,ap);va_end(ap);return V1;} /* REGISTER */
static object  LnkTLI333(){return call_proc0(VV[333],(void **)(void *)&LnkLI333);} /* WT-CVARS */
static object  LnkTLI332(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[332],(void **)(void *)&LnkLI332,first,ap);va_end(ap);return V1;} /* C2LAMBDA-EXPR */
static object  LnkTLI331(){return call_proc0(VV[331],(void **)(void *)&LnkLI331);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI330(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[330],(void **)(void *)&LnkLI330,1,first,ap);va_end(ap);return V1;} /* WT-VS */
static object  LnkTLI329(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[329],(void **)(void *)&LnkLI329,1,first,ap);va_end(ap);return V1;} /* C2BIND */
static object  LnkTLI328(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[328],(void **)(void *)&LnkLI328,1,first,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI327(){return call_proc0(VV[327],(void **)(void *)&LnkLI327);} /* BABOON */
static object  LnkTLI326(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[326],(void **)(void *)&LnkLI326,1,first,ap);va_end(ap);return V1;} /* ADD-OBJECT */
static void LnkT325(){ call_or_link(VV[325],(void **)(void *)&Lnk325);} /* INC-INLINE-BLOCKS */
static object  LnkTLI324(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[324],(void **)(void *)&LnkLI324,first,ap);va_end(ap);return V1;} /* CS-PUSH */
static object  LnkTLI323(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[323],(void **)(void *)&LnkLI323,2,first,ap);va_end(ap);return V1;} /* C2BIND-INIT */
static object  LnkTLI322(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[322],(void **)(void *)&LnkLI322,2,first,ap);va_end(ap);return V1;} /* C2BIND-LOC */
static object  LnkTLI321(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[321],(void **)(void *)&LnkLI321,1,first,ap);va_end(ap);return V1;} /* SET-UP-VAR-CVS */
static object  LnkTLI320(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[320],(void **)(void *)&LnkLI320,first,ap);va_end(ap);return V1;} /* CONCATENATE */
static object  LnkTLI319(){return call_proc0(VV[319],(void **)(void *)&LnkLI319);} /* CVS-PUSH */
static object  LnkTLI318(){return call_proc0(VV[318],(void **)(void *)&LnkLI318);} /* VS-PUSH */
static object  LnkTLI317(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[317],(void **)(void *)&LnkLI317,2,first,ap);va_end(ap);return V1;} /* WT-V*-MACROS */
static void LnkT316(){ call_or_link(VV[316],(void **)(void *)&Lnk316);} /* C2EXPR */
static object  LnkTLI315(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[315],(void **)(void *)&LnkLI315,3,first,ap);va_end(ap);return V1;} /* ASSIGN-DOWN-VARS */
static object  LnkTLI314(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[314],(void **)(void *)&LnkLI314,2,first,ap);va_end(ap);return V1;} /* WT-REQUIREDS */
static object  LnkTLI313(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[313],(void **)(void *)&LnkLI313,first,ap);va_end(ap);return V1;} /* WT-COMMENT */
static object  LnkTLI312(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[312],(void **)(void *)&LnkLI312,2,first,ap);va_end(ap);return V1;} /* ADD-DEBUG-INFO */
static object  LnkTLI311(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[311],(void **)(void *)&LnkLI311,1,first,ap);va_end(ap);return V1;} /* WT-DOWNWARD-CLOSURE-MACRO */
static void LnkT310(){ call_or_link(VV[310],(void **)(void *)&Lnk310);} /* T3DEFUN-AUX */
static object  LnkTLI309(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[309],(void **)(void *)&LnkLI309,258,first,ap);va_end(ap);return V1;} /* ANALYZE-REGS */
static void LnkT308(){ call_or_link(VV[308],(void **)(void *)&Lnk308);} /* FIXNUMP */
static object  LnkTLI307(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[307],(void **)(void *)&LnkLI307,1,first,ap);va_end(ap);return V1;} /* VOLATILE */
static object  LnkTLI306(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[306],(void **)(void *)&LnkLI306,1,first,ap);va_end(ap);return V1;} /* MAXARGS */
static object  LnkTLI305(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[305],(void **)(void *)&LnkLI305,1,first,ap);va_end(ap);return V1;} /* VARARG-P */
static object  LnkTLI304(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[304],(void **)(void *)&LnkLI304,3,first,ap);va_end(ap);return V1;} /* WT-IF-PROCLAIMED */
static object  LnkTLI303(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[303],(void **)(void *)&LnkLI303,258,first,ap);va_end(ap);return V1;} /* PROCLAIMED-ARGD */
static object  LnkTLI302(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[302],(void **)(void *)&LnkLI302,2,first,ap);va_end(ap);return V1;} /* ADD-ADDRESS */
static object  LnkTLI301(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[301],(void **)(void *)&LnkLI301,first,ap);va_end(ap);return V1;} /* ADD-INIT */
static object  LnkTLI300(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[300],(void **)(void *)&LnkLI300,first,ap);va_end(ap);return V1;} /* FAST-LINK-PROCLAIMED-TYPE-P */
static object  LnkTLI299(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[299],(void **)(void *)&LnkLI299,2,first,ap);va_end(ap);return V1;} /* SHIFT<< */
static object  LnkTLI298(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[298],(void **)(void *)&LnkLI298,257,first,ap);va_end(ap);return V1;} /* F-TYPE */
static void LnkT297(){ call_or_link(VV[297],(void **)(void *)&Lnk297);} /* SUBTYPEP */
static void LnkT296(){ call_or_link(VV[296],(void **)(void *)&Lnk296);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI295(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[295],(void **)(void *)&LnkLI295,first,ap);va_end(ap);return V1;} /* MAKE-ARRAY */
static object  LnkTLI294(){return call_proc0(VV[294],(void **)(void *)&LnkLI294);} /* ADD-LOAD-TIME-SHARP-COMMA */
static object  LnkTLI293(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[293],(void **)(void *)&LnkLI293,2,first,ap);va_end(ap);return V1;} /* MAKE-INLINE-STRING */
static object  LnkTLI292(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[292],(void **)(void *)&LnkLI292,2,first,ap);va_end(ap);return V1;} /* TYPE-AND */
static object  LnkTLI291(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[291],(void **)(void *)&LnkLI291,2,first,ap);va_end(ap);return V1;} /* CMPFIX-ARGS */
static object  LnkTLI290(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[290],(void **)(void *)&LnkLI290,1,first,ap);va_end(ap);return V1;} /* PROCLAIM */
static object  LnkTLI289(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[289],(void **)(void *)&LnkLI289,1,first,ap);va_end(ap);return V1;} /* CHECK-DOWNWARD */
static object  LnkTLI288(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[288],(void **)(void *)&LnkLI288,first,ap);va_end(ap);return V1;} /* C1LAMBDA-EXPR */
static object  LnkTLI287(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[287],(void **)(void *)&LnkLI287,1,first,ap);va_end(ap);return V1;} /* T1PROGN */
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

