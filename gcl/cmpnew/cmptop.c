
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
	V5= (VFUN_NARGS=1,(*(LnkLI265))(VV[4]));
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
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[7],(V1))));
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
	V6= (*(LnkLI267))((V4),(V2),V7);
	goto T19;
	goto T21;
T21:;
	V6= (V1);
	goto T19;
T19:;
	(void)((*(LnkLI268))(Ct,(V6)));
	V8= (*(LnkLI269))((V6));
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
	(void)((*(LnkLI270))());
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
	(void)((*(LnkLI270))());
	goto T39;
T39:;
	base[3]= (*(LnkLI271))((V1));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk272)();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;
	goto T37;
T37:;
	if((get((V2),VV[11],Cnil))==Cnil){
	goto T44;}
	V9= (*(LnkLI273))((V1));
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
	V10= (*(LnkLI267))((V4),(V2),V11);
	base[3]= (V10);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk272)();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;}
	goto T47;
T47:;
	V12= (*(LnkLI273))((V1));
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
	V13= (*(LnkLI273))((V1));
	frs_pop();
	base[3]= V13;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T56;
T56:;
	V14= (VFUN_NARGS=2,(*(LnkLI265))(VV[12],(V2)));
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
	bds_bind(VV[17],Cnil);
	bds_bind(VV[18],Cnil);
	bds_bind(VV[20],VV[19]);
	bds_bind(VV[21],Cnil);
	bds_bind(VV[22],small_fixnum(0));
	bds_bind(VV[23],Cnil);
	bds_bind(VV[0],Cnil);
	setq(VV[24],reverse(symbol_value(VV[24])));
	princ_str("\nvoid init_",VV[25]);
	(void)((*(LnkLI274))((V17)));
	princ_str("(){",VV[25]);
	princ_str("do_init(VV);",VV[25]);
	princ_char(125,VV[25]);
	{object V19;
	V19= symbol_value(VV[24]);
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
	V18= get(car((VV[0]->s.s_dbind)),VV[26],Cnil);
	if(((V18))==Cnil){
	goto T84;}
	base[8]= (V18);
	{object V20;
	V20= cdr((VV[0]->s.s_dbind));
	 vs_top=base+9;
	 while(!endp(V20))
	 {vs_push(car(V20));V20=cdr(V20);}
	vs_base=base+9;}
	super_funcall_no_event(base[8]);
	vs_top=sup;
	goto T84;
T84:;
	V19= cdr((V19));
	(VV[0]->s.s_dbind)= car((V19));
	goto T77;}
	goto T73;
T73:;
	{object V21;
	V21= symbol_value(VV[24]);
	bds_bind(VV[0],car((V21)));
	goto T99;
T99:;
	if(!(endp_prop((V21)))){
	goto T100;}
	bds_unwind1;
	goto T95;
	goto T100;
T100:;
	setq(VV[1],Ct);
	V18= get(car((VV[0]->s.s_dbind)),VV[27],Cnil);
	if(((V18))==Cnil){
	goto T106;}
	base[8]= (V18);
	{object V22;
	V22= cdr((VV[0]->s.s_dbind));
	 vs_top=base+9;
	 while(!endp(V22))
	 {vs_push(car(V22));V22=cdr(V22);}
	vs_base=base+9;}
	super_funcall_no_event(base[8]);
	vs_top=sup;
	goto T106;
T106:;
	V21= cdr((V21));
	(VV[0]->s.s_dbind)= car((V21));
	goto T99;}
	goto T95;
T95:;
	{object V23;
	V23= Cnil;
	goto T119;
T119:;
	if(!(endp_prop(symbol_value(VV[28])))){
	goto T121;}
	goto T117;
	goto T121;
T121:;
	V23= car(symbol_value(VV[28]));
	{object V24;
	V24= car(symbol_value(VV[28]));
	setq(VV[28],cdr(symbol_value(VV[28])));}
	{object V25;
	V25= (V23);
	 vs_top=base+7;
	 while(!endp(V25))
	 {vs_push(car(V25));V25=cdr(V25);}
	vs_base=base+7;}
	(void) (*Lnk257)();
	vs_top=sup;
	goto T119;}
	goto T117;
T117:;
	{object V26;
	object V27;
	V26= symbol_value(VV[29]);
	V27= car((V26));
	goto T136;
T136:;
	if(!(endp_prop((V26)))){
	goto T137;}
	goto T132;
	goto T137;
T137:;
	{object V28;
	V28= (V27);
	 vs_top=base+8;
	 while(!endp(V28))
	 {vs_push(car(V28));V28=cdr(V28);}
	vs_base=base+8;}
	(void) (*Lnk275)();
	vs_top=sup;
	V26= cdr((V26));
	V27= car((V26));
	goto T136;}
	goto T132;
T132:;
	{object V29;
	object V30;
	V29= (VV[17]->s.s_dbind);
	V30= car((V29));
	goto T152;
T152:;
	if(!(endp_prop((V29)))){
	goto T153;}
	goto T148;
	goto T153;
T153:;
	(void)((*(LnkLI276))((V30)));
	V29= cdr((V29));
	V30= car((V29));
	goto T152;}
	goto T148;
T148:;
	{object V31;
	object V32;
	V31= symbol_value(VV[30]);
	V32= car((V31));
	goto T167;
T167:;
	if(!(endp_prop((V31)))){
	goto T168;}
	goto T163;
	goto T168;
T168:;
	princ_str("\nstatic void LC",VV[31]);
	V33= structure_ref((V32),VV[32],3);
	(void)((*(LnkLI277))(/* INLINE-ARGS */V33));
	princ_str("();",VV[31]);
	V31= cdr((V31));
	V32= car((V31));
	goto T167;}
	goto T163;
T163:;
	{object V34;
	object V35;
	V34= symbol_value(VV[33]);
	V35= car((V34));
	goto T185;
T185:;
	if(!(endp_prop((V34)))){
	goto T186;}
	goto T181;
	goto T186;
T186:;
	princ_str("\n#define VM",VV[31]);
	(void)((*(LnkLI277))(car((V35))));
	princ_char(32,VV[31]);
	(void)((*(LnkLI277))(cdr((V35))));
	V34= cdr((V34));
	V35= car((V34));
	goto T185;}
	goto T181;
T181:;
	(void)((*(LnkLI278))(Cnil));
	{object V36;
	object V37;
	base[8]= (VV[22]->s.s_dbind);
	base[9]= symbol_value(VV[34]);
	base[10]= small_fixnum(1);
	vs_top=(vs_base=base+8)+3;
	Lminus();
	vs_top=sup;
	V36= vs_base[0];
	V37= small_fixnum(0);
	goto T208;
T208:;
	if(!(number_compare((V37),(V36))>=0)){
	goto T209;}
	goto T201;
	goto T209;
T209:;
	(void)((*(LnkLI278))(Cnil));
	V37= one_plus((V37));
	goto T208;}
	goto T201;
T201:;
	princ_str("\nstatic char * VVi[",VV[31]);
	V38= number_plus(small_fixnum(1),symbol_value(VV[34]));
	(void)((*(LnkLI277))(/* INLINE-ARGS */V38));
	princ_str("]={",VV[31]);
	princ_str("\n#define Cdata VV[",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[34])));
	princ_char(93,VV[31]);
	if((VV[21]->s.s_dbind)!=Cnil){
	goto T225;}
	princ_char(10,VV[31]);
	(void)((*(LnkLI277))(small_fixnum(0)));
	goto T225;
T225:;
	{register object V39;
	V39= nreverse((VV[21]->s.s_dbind));
	goto T231;
T231:;
	if(((V39))!=Cnil){
	goto T232;}
	princ_str("\n};",VV[31]);
	goto T228;
	goto T232;
T232:;
	princ_str("\n(char *)(",VV[31]);
	(void)((*(LnkLI277))(caar((V39))));
	(void)((*(LnkLI277))(cadar((V39))));
	if((cdr((V39)))==Cnil){
	goto T244;}
	V40= VV[35];
	goto T242;
	goto T244;
T244:;
	V40= VV[36];
	goto T242;
T242:;
	(void)((*(LnkLI277))(V40));
	V39= cdr((V39));
	goto T231;}
	goto T228;
T228:;
	princ_str("\n#define VV ((object *)VVi)",VV[31]);
	vs_base=vs_top;
	(void) (*Lnk279)();
	vs_top=sup;
	{object V41;
	object V42;
	V41= (VV[17]->s.s_dbind);
	V42= car((V41));
	goto T255;
T255:;
	if(!(endp_prop((V41)))){
	goto T256;}
	{object V43 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR3(V43)}
	goto T256;
T256:;
	{register object V44;
	register object V45;
	object V46;
	register object V47;
	V44= cadr((V42));
	V45= caddr((V42));
	V46= cadddr((V42));
	V47= Cnil;
	if(!(((V45))==(VV[37]))){
	goto T266;}
	princ_str("\nstatic object *Lclptr",VV[31]);
	(void)((*(LnkLI277))((V44)));
	princ_char(59,VV[31]);
	V47= VV[38];
	goto T264;
	goto T266;
T266:;
	if(((V45))==Cnil){
	goto T275;}
	V47= (*(LnkLI280))((V45));
	goto T273;
	goto T275;
T275:;
	V47= VV[39];
	goto T273;
T273:;
	goto T264;
T264:;
	if(((V45))==Cnil){
	goto T278;}
	if(((V45))==(VV[37])){
	goto T278;}
	if(((V46))!=Cnil){
	goto T277;}
	if((Ct)==((V45))){
	goto T278;}
	goto T277;
T277:;
	princ_str("\nstatic ",VV[31]);
	base[8]= (V47);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V48= vs_base[0];
	(void)((*(LnkLI277))(V48));
	princ_str(" LnkT",VV[31]);
	(void)((*(LnkLI277))((V44)));
	princ_str("(object,...);",VV[31]);
	princ_str("\nstatic ",VV[31]);
	base[8]= (V47);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V49= vs_base[0];
	(void)((*(LnkLI277))(V49));
	princ_str(" (*Lnk",VV[31]);
	(void)((*(LnkLI277))((V44)));
	princ_str(")() = (",VV[31]);
	base[8]= (V47);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V50= vs_base[0];
	(void)((*(LnkLI277))(V50));
	princ_str("(*)()) LnkT",VV[31]);
	(void)((*(LnkLI277))((V44)));
	princ_char(59,VV[31]);
	goto T260;
	goto T278;
T278:;
	princ_str("\nstatic ",VV[31]);
	base[8]= (V47);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V51= vs_base[0];
	(void)((*(LnkLI277))(V51));
	princ_str(" LnkT",VV[31]);
	(void)((*(LnkLI277))((V44)));
	princ_str("();",VV[31]);
	princ_str("\nstatic ",VV[31]);
	base[8]= (V47);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V52= vs_base[0];
	(void)((*(LnkLI277))(V52));
	princ_str(" (*Lnk",VV[31]);
	(void)((*(LnkLI277))((V44)));
	princ_str(")() = LnkT",VV[31]);
	(void)((*(LnkLI277))((V44)));
	princ_char(59,VV[31]);}
	goto T260;
T260:;
	V41= cdr((V41));
	V42= car((V41));
	goto T255;}}
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
	goto T329;}
	if(type_of(car((V56)))==t_symbol){
	goto T330;}
	goto T329;
	goto T330;
T330:;
	V55= get(car((V56)),VV[40],Cnil);
	goto T329;
T329:;
	if(((V55))==Cnil){
	goto T335;}
	if((VV[41])==(symbol_value(VV[42]))){
	goto T333;}
	goto T335;
T335:;
	if(!(type_of(symbol_value(VV[42]))==t_cons)){
	goto T334;}
	{register object x= VV[43],V57= symbol_value(VV[42]);
	while(!endp(V57))
	if(eql(x,V57->c.c_car)){
	goto T341;
	}else V57=V57->c.c_cdr;
	goto T334;}
	goto T341;
T341:;
	goto T333;
T333:;
	if(((V56))==Cnil){
	goto T342;}
	base[0]= (V56);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk282)();
	vs_top=sup;
	goto T342;
T342:;
	{object V58 = Ct;
	VMR4(V58)}
	goto T334;
T334:;
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
	goto T348;}
	(void)((*(LnkLI283))(VV[44],small_fixnum(1),small_fixnum(0)));
	goto T348;
T348:;
	{register object V63;
	register object V64;
	V63= car((V60));
	V64= car((V63));
	goto T355;
T355:;
	if(!(endp_prop((V63)))){
	goto T356;}
	goto T351;
	goto T356;
T356:;
	{object V65= (V64);
	if((V65!= VV[284]))goto T361;
	V61= Ct;
	goto T360;
	goto T361;
T361:;
	if((V65!= VV[285]))goto T363;
	V61= Ct;
	goto T360;
	goto T363;
T363:;
	if((V65!= VV[43]))goto T365;
	V62= Ct;
	goto T360;
	goto T365;
T365:;
	if((V65!= VV[286]))goto T367;
	V62= Ct;
	goto T360;
	goto T367;
T367:;
	if((V65!= VV[287]))goto T369;
	goto T360;
	goto T369;
T369:;
	if((V65!= VV[288]))goto T370;
	goto T360;
	goto T370;
T370:;
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[45],(V64))));}
	goto T360;
T360:;
	V63= cdr((V63));
	V64= car((V63));
	goto T355;}
	goto T351;
T351:;
	base[1]= car((V60));
	bds_bind(VV[42],base[1]);
	if(((V61))==Cnil){
	goto T378;}
	base[2]= (*(LnkLI289))(cdr((V60)));
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T378;
T378:;
	if(((V62))==Cnil){
	goto T381;}
	base[2]= make_cons(VV[46],cdr((V60)));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk282)();
	bds_unwind1;
	return;
	goto T381;
T381:;
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
	if(!(equal(car((V67)),VV[47]))){
	goto T385;}
	bds_bind(VV[48],Ct);
	{object V68 = (*(LnkLI289))(cdr((V67)));
	bds_unwind1;
	VMR6(V68)}
	goto T385;
T385:;
	{register object V69;
	register object V70;
	V69= (V67);
	V70= car((V69));
	goto T390;
T390:;
	if(!(endp_prop((V69)))){
	goto T391;}
	{object V71 = Cnil;
	VMR6(V71)}
	goto T391;
T391:;
	base[1]= (V70);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk272)();
	vs_top=sup;
	V69= cdr((V69));
	V70= car((V69));
	goto T390;}
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
	goto T409;
T409:;
	if(!(endp_prop((V78)))){
	goto T410;}
	goto T405;
	goto T410;
T410:;
	{register object x= car((V79)),V80= (V77);
	while(!endp(V80))
	if(eql(x,V80->c.c_car)){
	V76= V80;
	goto T415;
	}else V80=V80->c.c_cdr;
	V76= Cnil;}
	goto T415;
T415:;
	if((V76)==Cnil){
	goto T416;}
	{register object V81;
	register object V82;
	V81= (V76);
	V82= cadr((V79));
	if(type_of((V81))!=t_cons)FEwrong_type_argument(Scons,(V81));
	((V81))->c.c_car = (V82);}
	goto T416;
T416:;
	V78= cdr((V78));
	V79= car((V78));
	goto T409;}
	goto T405;
T405:;
	{register object x= VV[49],V83= (V77);
	while(!endp(V83))
	if(eql(x,V83->c.c_car)){
	V76= V83;
	goto T429;
	}else V83=V83->c.c_cdr;
	V76= Cnil;}
	goto T429;
T429:;
	if(((V76))==Cnil){
	goto T427;}
	{object V85;
	V85= append((V75),cdr((V76)));
	if(type_of(V76)!=t_cons)FEwrong_type_argument(Scons,V76);
	(V76)->c.c_cdr = (V85);
	goto T425;}
	goto T427;
T427:;
	V86= make_cons(VV[49],(V75));
	V77= append((V77),/* INLINE-ARGS */V86);
	goto T425;
T425:;
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
	V90= symbol_value(VV[50]);
	bds_bind(VV[52],Cnil);
	if(endp_prop((V89))){
	goto T435;}
	if(!(endp_prop(cdr((V89))))){
	goto T434;}
	goto T435;
T435:;
	V92 = make_fixnum((long)length((V89)));
	(void)((*(LnkLI283))(VV[51],small_fixnum(2),V92));
	goto T434;
T434:;
	if(type_of(car((V89)))==t_symbol){
	goto T439;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[53],car((V89)))));
	goto T439;
T439:;
	V93= make_cons(VV[51],(V89));
	(void)((*(LnkLI268))(Cnil,/* INLINE-ARGS */V93));
	goto T444;
T444:;
	setq(VV[6],Ct);
	setq(VV[54],Cnil);
	{register object V94;
	object V95;
	object V96;
	register object V97;{object V98;
	V98= get(car((V89)),VV[60],Cnil);
	if(V98==Cnil)goto T451;
	V95= V98;
	goto T450;
	goto T451;
T451:;}
	setq(VV[61],number_plus(symbol_value(VV[61]),small_fixnum(1)));
	V95= symbol_value(VV[61]);
	goto T450;
T450:;
	V97= car((V89));
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	V94= Cnil;
	bds_bind(VV[59],Cnil);
	V96= Cnil;
	V94= (VFUN_NARGS=2,(*(LnkLI290))(cdr((V89)),(V97)));
	if(!(eql((V90),symbol_value(VV[50])))){
	goto T458;}
	goto T457;
	goto T458;
T458:;
	(void)(structure_set(cadr((V94)),VV[62],4,Ct));
	goto T457;
T457:;
	V99= structure_ref(cadr((V94)),VV[62],1);
	(void)((*(LnkLI291))(/* INLINE-ARGS */V99));
	if((get((V97),VV[63],Cnil))==Cnil){
	goto T461;}
	{object V100;
	V100= make_fixnum((long)length(car(caddr((V94)))));
	(void)(sputprop((V97),VV[63],(V100)));
	base[6]= (V100);
	base[7]= VV[65];
	base[8]= Ct;
	vs_top=(vs_base=base+6)+3;
	Lmake_list();
	vs_top=sup;
	V101= vs_base[0];
	V102= list(4,VV[64],(V97),V101,Ct);
	(void)((*(LnkLI292))(/* INLINE-ARGS */V102));}
	goto T461;
T461:;
	if((get((V97),VV[66],Cnil))==Cnil){
	goto T472;}
	{object V103;
	register object V104;
	V103= caddr((V94));
	V104= Cnil;
	if((cadr((V103)))==Cnil){
	goto T477;}
	goto T472;
	goto T477;
T477:;
	if((caddr((V103)))==Cnil){
	goto T479;}
	goto T472;
	goto T479;
T479:;
	if((cadddr((V103)))==Cnil){
	goto T481;}
	goto T472;
	goto T481;
T481:;
	if(((long)length(car((V103))))<(64)){
	goto T483;}
	goto T472;
	goto T483;
T483:;
	{register object V105;
	register object V106;
	object V107;
	V105= car((V103));
	V106= get((V97),VV[67],Cnil);
	V107= Cnil;
	goto T490;
T490:;
	if(!(endp_prop((V105)))){
	goto T491;}
	if(endp_prop((V106))){
	goto T494;}
	goto T486;
	goto T494;
T494:;
	if(((V104))==Cnil){
	goto T497;}
	V89= (*(LnkLI293))((V89),(V104));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T444;
	goto T497;
T497:;
	if(((V107))==Cnil){
	goto T485;}
	goto T486;
	goto T491;
T491:;
	{register object V108;
	V108= car((V105));
	if(!(equal(car((V106)),VV[68]))){
	goto T504;}
	goto T486;
	goto T504;
T504:;
	V109= structure_ref((V108),VV[69],1);
	if((/* INLINE-ARGS */V109)==(VV[70])){
	goto T510;}
	V110= structure_ref((V108),VV[69],1);
	if(!((/* INLINE-ARGS */V110)==(VV[71]))){
	goto T509;}
	if(!((car((V106)))==(Ct))){
	goto T509;}
	goto T510;
T510:;
	if((structure_ref((V108),VV[69],3))!=Cnil){
	goto T509;}
	V111= structure_ref((V108),VV[69],4);
	if(!((/* INLINE-ARGS */V111)==(VV[72]))){
	goto T508;}
	goto T509;
T509:;
	{object V112;
	V113= structure_ref((V108),VV[69],0);
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V114= vs_base[0];
	V112= list(2,/* INLINE-ARGS */V113,V114);
	V104= make_cons((V112),(V104));}
	goto T508;
T508:;
	V115= car((V106));
	V116= structure_ref((V108),VV[69],5);
	if(((*(LnkLI294))(/* INLINE-ARGS */V115,/* INLINE-ARGS */V116))==Cnil){
	goto T507;}
	{register object x= car((V106)),V117= VV[73];
	while(!endp(V117))
	if(eql(x,V117->c.c_car)){
	goto T502;
	}else V117=V117->c.c_cdr;}
	V118= structure_ref((V108),VV[69],4);
	if((/* INLINE-ARGS */V118)==(VV[74])){
	goto T502;}
	if((symbol_value(VV[75]))!=Cnil){
	goto T502;}
	V120= structure_ref(cadr((V94)),VV[62],0);
	{register object x= (V108),V119= /* INLINE-ARGS */V120;
	while(!endp(V119))
	if(eql(x,V119->c.c_car)){
	goto T532;
	}else V119=V119->c.c_cdr;
	goto T502;}
	goto T532;
T532:;
	goto T507;
T507:;
	if(((V104))!=Cnil){
	goto T533;}
	V121= structure_ref((V108),VV[69],0);
	(void)((VFUN_NARGS=3,(*(LnkLI266))(VV[76],(V97),/* INLINE-ARGS */V121)));
	goto T533;
T533:;
	V107= Ct;}
	goto T502;
T502:;
	V105= cdr((V105));
	V106= cdr((V106));
	goto T490;}
	goto T486;
T486:;
	goto T472;
	goto T485;
T485:;
	if(!(type_of((V95))==t_fixnum||
type_of((V95))==t_bignum||
type_of((V95))==t_ratio||
type_of((V95))==t_shortfloat||
type_of((V95))==t_longfloat||
type_of((V95))==t_complex)){
	goto T472;}}
	{object V122;
	V123= get((V97),VV[67],Cnil);
	V124= get((V97),VV[77],Cnil);
	V125= get((V97),VV[67],Cnil);
	V122= list(5,(V97),V123,V124,small_fixnum(3),(*(LnkLI295))((V95),V125));
	setq(VV[78],make_cons((V122),symbol_value(VV[78])));
	goto T470;}
	goto T472;
T472:;
	{object V126;
	V127= get((V97),VV[77],Cnil);
	V126= ((V127)==(Ct)?Ct:Cnil);
	if(((V126))==Cnil){
	goto T470;}}
	goto T470;
T470:;
	if((cadddr((V94)))==Cnil){
	goto T550;}
	V96= cadddr((V94));
	goto T550;
T550:;
	(void)((*(LnkLI296))());
	{object V128;
	V128= list(6,VV[51],(V97),(V95),(V94),(V96),(VV[59]->s.s_dbind));
	setq(VV[24],make_cons((V128),symbol_value(VV[24])));}
	{object V129;
	V129= make_cons((V97),(V95));
	setq(VV[79],make_cons((V129),symbol_value(VV[79])));
	V130= symbol_value(VV[79]);
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
	goto T561;}
	base[0]= Cnil;
	base[1]= VV[80];
	base[2]= (V134);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V136 = vs_base[0];
	VMR9(V136)}
	goto T561;
T561:;
	{register object V137;
	V137= (VFUN_NARGS=7,(*(LnkLI297))(small_fixnum(100),VV[81],VV[82],VV[83],small_fixnum(0),VV[84],Ct));
	base[0]= (V137);
	base[1]= VV[85];
	base[2]= (V134);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{register object V138;
	register long V139;
	V139= 0;
	V138= (V135);
	goto T574;
T574:;
	if(!(endp_prop(cdr((V138))))){
	goto T575;}
	base[0]= (V137);
	base[1]= VV[86];
	base[2]= make_fixnum(V139);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T571;
	goto T575;
T575:;
	base[0]= (V137);
	base[1]= VV[87];
	base[2]= make_fixnum(V139);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V138= cdr((V138));
	V139= (long)(V139)+1;
	goto T574;}
	goto T571;
T571:;
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
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T590;
	else {
	V141= first;}
	--narg; goto T591;
	goto T590;
T590:;
	V141= Cnil;
	goto T591;
T591:;
	{object V142;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V142= symbol_value(VV[88]);
	{object V143;
	if(((V141))==Cnil){
	goto T598;}
	V143= make_cons((V141),(V142));
	goto T596;
	goto T598;
T598:;
	V143= (V142);
	goto T596;
T596:;
	setq(VV[18],make_cons((V143),symbol_value(VV[18])));}
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
	base[1]= VV[69];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk298)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T601;}
	V146= structure_ref((V146),VV[69],5);
	goto T601;
T601:;
	if(((V146))==Cnil){
	goto T608;}
	base[0]= (V146);
	base[1]= VV[89];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk299)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T608;}
	{long V147 = 1;
	VMR11((object)V147)}
	goto T608;
T608:;
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
	V155= make_fixnum((long)(*(LnkLI300))((V152)));
	V156= Ct;
	goto T618;
T618:;
	if(eql(small_fixnum(0),(V155))){
	goto T620;}
	V153= (long)(V153)+((long)((fix((V155))) << (V154)));
	goto T620;
T620:;
	if(((V156))==Cnil){
	goto T624;}
	V154= 10;
	V156= Cnil;
	goto T624;
T624:;
	if(((V151))!=Cnil){
	goto T630;}
	{long V157 = V153;
	VMR12((object)V157)}
	goto T630;
T630:;
	V154= (long)(V154)+(2);
	{register object V159;
	V159= car((V151));
	V151= cdr((V151));
	V158= (V159);}
	V155= make_fixnum((long)(*(LnkLI300))(V158));
	goto T618;}
}
/*	local entry for function WT-IF-PROCLAIMED	*/

static object LI13(V163,V164,V165)

register object V163;object V164;object V165;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	if(((VFUN_NARGS=1,(*(LnkLI302))((V163))))==Cnil){
	goto T642;}
	{register object x= (V163),V166= symbol_value(VV[78]);
	while(!endp(V166))
	if(type_of(V166->c.c_car)==t_cons &&eql(x,V166->c.c_car->c.c_car)){
	goto T646;
	}else V166=V166->c.c_cdr;
	goto T645;}
	goto T646;
T646:;
	V167= list(2,VV[91],(V163));
	V168= (*(LnkLI304))(VV[92],(V164));
	V169= get((V163),VV[67],Cnil);
	V170= get((V163),VV[77],Cnil);
	V171 = make_fixnum((long)(*(LnkLI305))(V169,V170));
	V172= list(4,VV[90],/* INLINE-ARGS */V167,/* INLINE-ARGS */V168,V171);
	(void)((VFUN_NARGS=1,(*(LnkLI303))(/* INLINE-ARGS */V172)));
	{object V173 = Ct;
	VMR13(V173)}
	goto T645;
T645:;
	{register object V174;
	register object V175;
	object V176;
	V174= make_fixnum((long)length(car(caddr((V165)))));
	V177= get((V163),VV[67],Cnil);
	V175= make_fixnum((long)length(V177));
	V179= get((V163),VV[67],Cnil);
	{register object x= VV[68],V178= V179;
	while(!endp(V178))
	if(eql(x,V178->c.c_car)){
	V176= V178;
	goto T654;
	}else V178=V178->c.c_cdr;
	V176= Cnil;}
	goto T654;
T654:;
	if(((V176))==Cnil){
	goto T657;}
	base[0]= (V174);
	vs_top=(vs_base=base+0)+1;
	Lmonotonically_nonincreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T659;}
	goto T650;
	goto T659;
T659:;{object V180;
	V181 = make_fixnum((long)length((V176)));
	V180= number_minus((V175),V181);
	if(V180==Cnil)goto T662;
	goto T650;
	goto T662;
T662:;}
	V182 = make_fixnum((long)length((V176)));
	V183= number_minus((V175),V182);
	(void)((VFUN_NARGS=4,(*(LnkLI266))(VV[93],(V163),/* INLINE-ARGS */V183,(V174))));
	goto T650;
	goto T657;
T657:;
	if(eql((V174),(V175))){
	goto T665;}
	(void)((VFUN_NARGS=4,(*(LnkLI266))(VV[94],(V163),(V175),(V174))));
	goto T650;
	goto T665;
T665:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[95],(V163))));}
	goto T650;
T650:;
	{object V184 = Cnil;
	VMR13(V184)}
	goto T642;
T642:;
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
	if((structure_ref((V187),VV[62],4))==Cnil){
	goto T668;}
	{object V188 = VV[96];
	VMR14(V188)}
	goto T668;
T668:;
	{object V189 = VV[97];
	VMR14(V189)}
	return Cnil;
}
/*	local entry for function REGISTER	*/

static object LI15(V191)

object V191;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(!(equal(symbol_value(VV[20]),VV[98]))){
	goto T671;}
	{long V192= fix(structure_ref((V191),VV[69],6));
	if(!((/* INLINE-ARGS */V192)>=(fix(symbol_value(VV[99]))))){
	goto T671;}}
	{object V193 = VV[100];
	VMR15(V193)}
	goto T671;
T671:;
	{object V194 = VV[101];
	VMR15(V194)}
	return Cnil;
}
/*	local entry for function VARARG-P	*/

static object LI16(V196)

object V196;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	V197= get((V196),VV[77],Cnil);
	if(equal(V197,Ct)){
	goto T675;}
	{object V198 = Cnil;
	VMR16(V198)}
	goto T675;
T675:;
	{register object V199;
	V199= get((V196),VV[67],Cnil);
	goto T680;
T680:;
	if(((V199))!=Cnil){
	goto T681;}
	{object V200 = Ct;
	VMR16(V200)}
	goto T681;
T681:;
	if(!(type_of((V199))==t_cons)){
	goto T686;}
	goto T685;
	goto T686;
T686:;
	{object V201 = Cnil;
	VMR16(V201)}
	goto T685;
T685:;
	if(!((car((V199)))==(Ct))){
	goto T689;}
	goto T688;
	goto T689;
T689:;
	if(!((car((V199)))==(VV[68]))){
	goto T691;}
	goto T688;
	goto T691;
T691:;
	{object V202 = Cnil;
	VMR16(V202)}
	goto T688;
T688:;
	V199= cdr((V199));
	goto T680;}
	return Cnil;
}
/*	local entry for function MAXARGS	*/

static object LI17(V204)

register object V204;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if((cadddr((V204)))!=Cnil){
	goto T696;}
	if((caddr((V204)))==Cnil){
	goto T697;}
	goto T696;
T696:;
	{object V205 = small_fixnum(64);
	VMR17(V205)}
	goto T697;
T697:;
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
	setq(VV[21],make_cons((V212),symbol_value(VV[21])));}
	{object V213;
	V213= symbol_value(VV[22]);
	setq(VV[22],number_plus(symbol_value(VV[22]),small_fixnum(1)));
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
	if((get((V220),VV[102],Cnil))==Cnil){
	goto T709;}
	{object V225 = Cnil;
	VMR19(V225)}
	goto T709;
T709:;
	if(((V223))==Cnil){
	goto T712;}
	V226= list(4,VV[103],list(2,VV[91],(V220)),(V223),VV[104]);
	(void)((VFUN_NARGS=1,(*(LnkLI303))(/* INLINE-ARGS */V226)));
	goto T712;
T712:;
	{object V227;
	V227= (*(LnkLI306))((V220),(V221),(V222));
	if(((V227))==Cnil){
	goto T718;}
	goto T715;
	goto T718;
T718:;
	if(((*(LnkLI307))((V220)))==Cnil){
	goto T721;}
	{object V228;
	V228= cadddr(caddr((V222)));
	if(((V228))==Cnil){
	goto T725;}
	V229= list(2,VV[91],(V220));
	V230= (*(LnkLI304))(VV[106],(V221));
	V231 = make_fixnum((long)length(car(caddr((V222)))));
	V232= (*(LnkLI308))(caddr((V222)));
	V233= (*(LnkLI301))(/* INLINE-ARGS */V232,small_fixnum(8));
	V234= number_plus(V231,/* INLINE-ARGS */V233);
	base[0]= Cnil;
	base[1]= VV[107];
	base[2]= (V221);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V235= vs_base[0];
	V236= list(5,VV[105],/* INLINE-ARGS */V229,/* INLINE-ARGS */V230,/* INLINE-ARGS */V234,(*(LnkLI304))(V235,VV[108]));
	(void)((VFUN_NARGS=1,(*(LnkLI303))(/* INLINE-ARGS */V236)));
	goto T715;
	goto T725;
T725:;
	V237= list(2,VV[91],(V220));
	V238= (*(LnkLI304))(VV[110],(V221));
	V239 = make_fixnum((long)length(car(caddr((V222)))));
	V240= (*(LnkLI308))(caddr((V222)));
	V241= (*(LnkLI301))(/* INLINE-ARGS */V240,small_fixnum(8));
	V242= list(4,VV[109],/* INLINE-ARGS */V237,/* INLINE-ARGS */V238,number_plus(V239,/* INLINE-ARGS */V241));
	(void)((VFUN_NARGS=1,(*(LnkLI303))(/* INLINE-ARGS */V242)));
	goto T715;}
	goto T721;
T721:;
	if(!(type_of((V221))==t_fixnum||
type_of((V221))==t_bignum||
type_of((V221))==t_ratio||
type_of((V221))==t_shortfloat||
type_of((V221))==t_longfloat||
type_of((V221))==t_complex)){
	goto T732;}
	princ_str("\nstatic void L",VV[31]);
	(void)((*(LnkLI277))((V221)));
	princ_str("();",VV[31]);
	V243= list(2,VV[91],(V220));
	V244= list(3,VV[111],/* INLINE-ARGS */V243,(*(LnkLI304))(VV[112],(V221)));
	(void)((VFUN_NARGS=1,(*(LnkLI303))(/* INLINE-ARGS */V244)));
	goto T715;
	goto T732;
T732:;
	princ_char(10,VV[31]);
	(void)((*(LnkLI277))((V221)));
	princ_str("();",VV[31]);
	V245= list(2,VV[91],(V220));
	V246= list(3,VV[111],/* INLINE-ARGS */V245,(*(LnkLI304))(VV[113],(V221)));
	(void)((VFUN_NARGS=1,(*(LnkLI303))(/* INLINE-ARGS */V246)));}
	goto T715;
T715:;
	if(!(number_compare(symbol_value(VV[114]),small_fixnum(2))<0)){
	goto T743;}
	{object V247 = sputprop((V220),VV[115],Ct);
	VMR19(V247)}
	goto T743;
T743:;
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
	{object V253 = putprop((V251),(V252),VV[116]);
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
	bds_bind(VV[0],list(2,VV[51],(V259)));
	bds_bind(VV[20],(*(LnkLI309))(cadr((V261))));
	bds_bind(VV[117],Cnil);
	{register object V265;
	register object V266;
	V265= symbol_value(VV[78]);
	V266= car((V265));
	goto T755;
T755:;
	if(!(endp_prop((V265)))){
	goto T756;}
	goto T750;
	goto T756;
T756:;{object V267;
	base[4]= cadddr((V266));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk310)();
	vs_top=sup;
	V267= vs_base[0];
	if(V267==Cnil)goto T761;
	goto T760;
	goto T761;
T761:;}
	base[4]= VV[118];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T760;
T760:;
	if((car((V266)))==((V259))){
	goto T766;}
	goto T765;
	goto T766;
T766:;
	if((cadr(cddddr((V266))))==Cnil){
	goto T768;}
	goto T765;
	goto T768;
T768:;
	V264= (V266);
	if(((V264))==Cnil){
	goto T750;}
	goto T751;
	goto T765;
T765:;
	V265= cdr((V265));
	V266= car((V265));
	goto T755;}
	goto T751;
T751:;
	if(((VFUN_NARGS=1,(*(LnkLI302))((V259))))!=Cnil){
	goto T776;}
	{object V268;
	V268= list(4,(V259),(V260),cadr((V264)),caddr((V264)));
	setq(VV[29],make_cons((V268),symbol_value(VV[29])));}
	goto T776;
T776:;
	V269= structure_ref(cadr((V261)),VV[62],1);
	(void)((*(LnkLI311))(/* INLINE-ARGS */V269,small_fixnum(0)));
	base[3]= VV[119];
	{object V270= caddr((V264));
	if((V270!= VV[89]))goto T784;
	base[4]= VV[120];
	goto T783;
	goto T784;
T784:;
	if((V270!= VV[142]))goto T785;
	base[4]= VV[121];
	goto T783;
	goto T785;
T785:;
	if((V270!= VV[143]))goto T786;
	base[4]= VV[122];
	goto T783;
	goto T786;
T786:;
	if((V270!= VV[144]))goto T787;
	base[4]= VV[123];
	goto T783;
	goto T787;
T787:;
	base[4]= VV[124];}
	goto T783;
T783:;
	base[5]= (V259);
	base[6]= (V260);
	base[7]= (V261);
	base[8]= (V263);
	base[9]= (V264);
	vs_top=(vs_base=base+3)+7;
	(void) (*Lnk312)();
	vs_top=sup;
	goto T748;
	goto T750;
T750:;
	if(((*(LnkLI307))((V259)))==Cnil){
	goto T794;}
	V271= structure_ref(cadr((V261)),VV[62],1);
	(void)((*(LnkLI311))(/* INLINE-ARGS */V271,small_fixnum(0)));
	base[3]= VV[125];
	base[4]= VV[124];
	base[5]= (V259);
	base[6]= (V260);
	base[7]= (V261);
	base[8]= (V263);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk312)();
	vs_top=sup;
	goto T748;
	goto T794;
T794:;
	V272= structure_ref(cadr((V261)),VV[62],1);
	(void)((*(LnkLI311))(/* INLINE-ARGS */V272,small_fixnum(2)));
	base[3]= VV[126];
	base[4]= VV[127];
	base[5]= (V259);
	base[6]= (V260);
	base[7]= (V261);
	base[8]= (V263);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk312)();
	vs_top=sup;
	goto T748;
T748:;
	(void)((*(LnkLI313))((V260)));
	{object V273 = (*(LnkLI314))((V259),(V261));
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
	bds_bind(VV[128],base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V275=(base[2]);
	vs_top=sup;
	bds_bind(VV[18],Cnil);
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
	goto T821;
T821:;
	if(!(endp_prop((V289)))){
	goto T822;}
	goto T818;
	goto T822;
T822:;
	V291= structure_ref(car((V289)),VV[69],1);
	if(!((/* INLINE-ARGS */V291)==(VV[71]))){
	goto T828;}
	{object V292;
	V293= car((V289));
	V294= structure_ref(car((V289)),VV[69],4);
	V292= make_cons(/* INLINE-ARGS */V293,/* INLINE-ARGS */V294);
	V287= make_cons((V292),(V287));
	goto T826;}
	goto T828;
T828:;
	V295= car((V289));
	{object V297= car((V290));
	if((V297!= VV[89]))goto T833;
	V296= VV[89];
	goto T832;
	goto T833;
T833:;
	if((V297!= VV[142]))goto T834;
	V296= VV[142];
	goto T832;
	goto T834;
T834:;
	if((V297!= VV[143]))goto T835;
	V296= VV[143];
	goto T832;
	goto T835;
T835:;
	if((V297!= VV[144]))goto T836;
	V296= VV[144];
	goto T832;
	goto T836;
T836:;
	V296= VV[74];}
	goto T832;
T832:;
	(void)(structure_set(/* INLINE-ARGS */V295,VV[69],1,V296));
	goto T826;
T826:;
	V298= car((V289));
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	(void)(structure_set(/* INLINE-ARGS */V298,VV[69],4,symbol_value(VV[88])));
	V289= cdr((V289));
	V290= cdr((V290));
	goto T821;}
	goto T818;
T818:;
	(void)((VFUN_NARGS=2,(*(LnkLI315))(VV[145],(V282))));
	princ_str("\nstatic ",VV[31]);
	base[1]= (*(LnkLI280))(caddr((V286)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V299= vs_base[0];
	(void)((*(LnkLI277))(V299));
	princ_str("LI",VV[31]);
	(void)((*(LnkLI277))((V283)));
	princ_str("();",VV[31]);
	princ_str("\nstatic ",VV[25]);
	base[1]= (*(LnkLI280))(caddr((V286)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V300= vs_base[0];
	(void)((*(LnkLI274))(V300));
	princ_str("LI",VV[25]);
	(void)((*(LnkLI274))((V283)));
	princ_char(40,VV[25]);
	(void)((*(LnkLI316))((V288),cadr((V286))));
	{object V301;
	V301= symbol_value(VV[136]);
	if((symbol_value(VV[147]))==Cnil){
	goto T864;}
	base[1]= make_cons((V282),(V288));
	goto T862;
	goto T864;
T864:;
	base[1]= Cnil;
	goto T862;
T862:;
	bds_bind(VV[146],base[1]);
	bds_bind(VV[134],symbol_value(VV[134]));
	princ_str("\n{	",VV[25]);
	V302= structure_ref(cadr((V284)),VV[62],1);
	(void)((*(LnkLI317))(/* INLINE-ARGS */V302,(V283),VV[148]));
	princ_str(" VMB",VV[25]);
	(void)((*(LnkLI274))((V301)));
	princ_str(" VMS",VV[25]);
	(void)((*(LnkLI274))((V301)));
	princ_str(" VMV",VV[25]);
	(void)((*(LnkLI274))((V301)));
	if(((V285))==Cnil){
	goto T876;}
	princ_str("\n	bds_check;",VV[25]);
	goto T876;
T876:;
	if((symbol_value(VV[149]))==Cnil){
	goto T880;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T880;
T880:;
	if(((VV[146]->s.s_dbind))==Cnil){
	goto T884;}
	(VV[134]->s.s_dbind)= make_cons(VV[150],(VV[134]->s.s_dbind));
	princ_str("\n	goto TTL;",VV[25]);
	princ_str("\nTTL:;",VV[25]);
	goto T884;
T884:;
	{register object V304;
	register object V305;
	V304= (V287);
	V305= car((V304));
	goto T896;
T896:;
	if(!(endp_prop((V304)))){
	goto T897;}
	goto T892;
	goto T897;
T897:;
	princ_str("\n	bds_bind(VV[",VV[25]);
	(void)((*(LnkLI274))(cdr((V305))));
	princ_str("],V",VV[25]);
	V306= structure_ref(car((V305)),VV[69],4);
	(void)((*(LnkLI274))(/* INLINE-ARGS */V306));
	princ_str(");",VV[25]);
	(VV[134]->s.s_dbind)= make_cons(VV[151],(VV[134]->s.s_dbind));
	(void)(structure_set(car((V305)),VV[69],1,VV[71]));
	(void)(structure_set(car((V305)),VV[69],4,cdr((V305))));
	V304= cdr((V304));
	V305= car((V304));
	goto T896;}
	goto T892;
T892:;
	base[3]= caddr(cddr((V284)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk318)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T920;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T920;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T920;}
	goto T918;
	goto T920;
T920:;
	princ_str("\n	base[0]=base[0];",VV[25]);
	goto T918;
T918:;
	V308= (*(LnkLI280))(caddr((V286)));
	if(!(equal(VV[152],/* INLINE-ARGS */V308))){
	goto T927;}
	princ_str("\n	return Cnil;",VV[25]);
	goto T927;
T927:;
	princ_str("\n}",VV[25]);
	{object V309 = (*(LnkLI319))((V301),caddr((V286)));
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
	if((symbol_value(VV[153]))==Cnil){
	goto T934;}
	V312= (*(LnkLI320))();
	{object V313 = structure_set((V311),VV[69],2,/* INLINE-ARGS */V312);
	VMR24(V313)}
	goto T934;
T934:;
	V314= (*(LnkLI321))();
	{object V315 = structure_set((V311),VV[69],2,/* INLINE-ARGS */V314);
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
	bds_bind(VV[153],Cnil);
	base[1]= Cnil;
	V325= Cnil;
	V326= Ct;
	V327= Cnil;
	bds_bind(VV[154],small_fixnum(0));
	V328= Cnil;
	V329= caddr((V322));
	V330= Cnil;{object V332;
	V332= caddr((V329));
	if(V332==Cnil)goto T944;
	V331= V332;
	goto T943;
	goto T944;
T944:;}{object V333;
	V333= cadr((V329));
	if(V333==Cnil)goto T946;
	V331= V333;
	goto T943;
	goto T946;
T946:;}
	V331= cadddr((V329));
	goto T943;
T943:;
	{object V334;
	register object V335;
	V334= car((V329));
	V335= car((V334));
	goto T952;
T952:;
	if(!(endp_prop((V334)))){
	goto T953;}
	goto T948;
	goto T953;
T953:;
	{object V336;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V336= list(2,VV[155],symbol_value(VV[88]));
	V324= make_cons((V336),(V324));}
	V334= cdr((V334));
	V335= car((V334));
	goto T952;}
	goto T948;
T948:;
	(void)((VFUN_NARGS=2,(*(LnkLI315))(VV[156],(V320))));
	{object V337;
	V337= VV[157];
	princ_str("\nstatic object LI",VV[25]);
	(void)((*(LnkLI274))((V321)));
	princ_char(40,VV[25]);
	if(((V324))==Cnil){
	goto T972;}
	{object V338;
	V338= (V324);
	goto T976;
T976:;
	if(((V338))!=Cnil){
	goto T977;}
	goto T972;
	goto T977;
T977:;
	princ_str("object ",VV[25]);
	(void)((*(LnkLI274))(car((V338))));
	V337= (VFUN_NARGS=3,(*(LnkLI322))(VV[158],(V337),VV[159]));
	if(!((cdr((V338)))==Cnil)){
	goto T987;}
	goto T986;
	goto T987;
T987:;
	princ_char(44,VV[25]);
	V337= (VFUN_NARGS=3,(*(LnkLI322))(VV[158],(V337),VV[160]));
	goto T986;
T986:;
	V338= cdr((V338));
	goto T976;}
	goto T972;
T972:;
	if(((V331))==Cnil){
	goto T995;}
	if(((V324))==Cnil){
	goto T998;}
	princ_char(44,VV[25]);
	V337= (VFUN_NARGS=3,(*(LnkLI322))(VV[158],(V337),VV[161]));
	goto T998;
T998:;
	princ_str("object first,...",VV[25]);
	V337= (VFUN_NARGS=3,(*(LnkLI322))(VV[158],(V337),VV[162]));
	goto T995;
T995:;
	princ_char(41,VV[25]);
	princ_str("\nstatic object LI",VV[31]);
	(void)((*(LnkLI277))((V321)));
	princ_char(40,VV[31]);
	(void)((*(LnkLI277))((V337)));
	princ_str(");",VV[31]);}
	{object V339;
	V339= symbol_value(VV[136]);
	if(symbol_value(VV[147])==Cnil){
	base[5]= Cnil;
	goto T1015;}
	if((caddr((V329)))==Cnil){
	goto T1016;}
	base[5]= Cnil;
	goto T1015;
	goto T1016;
T1016:;
	{object V340;
	object V341;
	V340= car((V329));
	V341= car((V340));
	goto T1023;
T1023:;
	if(!(endp_prop((V340)))){
	goto T1024;}
	goto T1018;
	goto T1024;
T1024:;
	if((structure_ref((V341),VV[69],3))==Cnil){
	goto T1028;}
	goto T1019;
	goto T1028;
T1028:;
	V340= cdr((V340));
	V341= car((V340));
	goto T1023;}
	goto T1019;
T1019:;
	base[5]= Cnil;
	goto T1015;
	goto T1018;
T1018:;
	if((cadr((V329)))==Cnil){
	goto T1036;}
	base[5]= Cnil;
	goto T1015;
	goto T1036;
T1036:;
	if((car(cddddr((V329))))==Cnil){
	goto T1038;}
	base[5]= Cnil;
	goto T1015;
	goto T1038;
T1038:;
	base[5]= make_cons((V320),car((V329)));
	goto T1015;
T1015:;
	bds_bind(VV[146],base[5]);
	bds_bind(VV[134],symbol_value(VV[134]));
	princ_str("\n{	",VV[25]);
	if(((V331))==Cnil){
	goto T1042;}
	princ_str("\n	va_list ap;",VV[25]);
	goto T1042;
T1042:;
	princ_str("\n	int narg = VFUN_NARGS;",VV[25]);
	V342= structure_ref(cadr((V322)),VV[62],1);
	(void)((*(LnkLI317))(/* INLINE-ARGS */V342,(V321),VV[148]));
	princ_str(" VMB",VV[25]);
	(void)((*(LnkLI274))((V339)));
	princ_str(" VMS",VV[25]);
	(void)((*(LnkLI274))((V339)));
	princ_str(" VMV",VV[25]);
	(void)((*(LnkLI274))((V339)));
	if(((V323))==Cnil){
	goto T1056;}
	princ_str("\n	bds_check;",VV[25]);
	goto T1056;
T1056:;
	if((symbol_value(VV[149]))==Cnil){
	goto T1060;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T1060;
T1060:;
	if((V331)!=Cnil){
	goto T1064;}
	princ_str("\n	if ( narg!= ",VV[25]);
	V343 = make_fixnum((long)length((V324)));
	(void)((*(LnkLI274))(V343));
	princ_str(") vfun_wrong_number_of_args(small_fixnum(",VV[25]);
	V344 = make_fixnum((long)length((V324)));
	(void)((*(LnkLI274))(V344));
	princ_str("));",VV[25]);
	goto T1064;
T1064:;
	{object V345;
	object V346;
	V345= car((V329));
	V346= car((V345));
	goto T1075;
T1075:;
	if(!(endp_prop((V345)))){
	goto T1076;}
	goto T1071;
	goto T1076;
T1076:;
	base[9]= (V346);
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	V345= cdr((V345));
	V346= car((V345));
	goto T1075;}
	goto T1071;
T1071:;
	{object V347;
	object V348;
	V347= cadr((V329));
	V348= car((V347));
	goto T1091;
T1091:;
	if(!(endp_prop((V347)))){
	goto T1092;}
	goto T1087;
	goto T1092;
T1092:;
	base[9]= car((V348));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((caddr((V348)))==Cnil){
	goto T1098;}
	base[9]= caddr((V348));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	goto T1098;
T1098:;
	V347= cdr((V347));
	V348= car((V347));
	goto T1091;}
	goto T1087;
T1087:;
	if((caddr((V329)))==Cnil){
	goto T1107;}
	base[7]= caddr((V329));
	vs_top=(vs_base=base+7)+1;
	L26(base);
	vs_top=sup;
	goto T1107;
T1107:;
	{object V349;
	object V350;
	V349= car(cddddr((V329)));
	V350= car((V349));
	goto T1114;
T1114:;
	if(!(endp_prop((V349)))){
	goto T1115;}
	goto T1070;
	goto T1115;
T1115:;
	base[9]= cadr((V350));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((cadddr((V350)))==Cnil){
	goto T1121;}
	base[9]= cadddr((V350));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	goto T1121;
T1121:;
	V349= cdr((V349));
	V350= car((V349));
	goto T1114;}
	goto T1070;
T1070:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1132;}
	goto T1130;
	goto T1132;
T1132:;
	princ_str("\n	Vcs[0]=Vcs[0];",VV[25]);
	goto T1130;
T1130:;
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
	princ_str("\n	va_start(ap,first);",VV[25]);
	goto T1135;
T1135:;
	if((symbol_value(VV[163]))!=Cnil){
	goto T1149;}
	if((symbol_value(VV[164]))==Cnil){
	goto T1147;}
	goto T1149;
T1149:;
	if((car((V329)))==Cnil){
	goto T1147;}
	princ_str("\n	if(narg <",VV[25]);
	V351 = make_fixnum((long)length(car((V329))));
	(void)((*(LnkLI274))(V351));
	princ_str(") too_few_arguments();",VV[25]);
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
	(void)((*(LnkLI323))((V353)));
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
	(void)((*(LnkLI323))(car((V355))));
	V354= cdr((V354));
	V355= car((V354));
	goto T1176;}
	goto T1172;
T1172:;
	if((caddr((V329)))==Cnil){
	goto T1187;}
	(void)((*(LnkLI323))(caddr((V329))));
	goto T1187;
T1187:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1193;}
	V327= symbol_value(VV[129]);
	goto T1191;
	goto T1193;
T1193:;
	V327= symbol_value(VV[141]);
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
	(void)((*(LnkLI323))(cadr((V357))));
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
	(void)((*(LnkLI323))(cadddr((V359))));
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
	(void)((*(LnkLI324))(car((V361)),car((V360))));
	V360= cdr((V360));
	V361= cdr((V361));
	goto T1228;}
	goto T1225;
T1225:;
	if((cadr((V329)))==Cnil){
	goto T1238;}
	bds_bind(VV[133],symbol_value(VV[133]));
	bds_bind(VV[134],(VV[134]->s.s_dbind));
	bds_bind(VV[132],symbol_value(VV[132]));
	princ_str("\n	narg = narg - ",VV[25]);
	V362 = make_fixnum((long)length((V324)));
	(void)((*(LnkLI274))(V362));
	princ_char(59,VV[25]);
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
	setq(VV[165],number_plus(symbol_value(VV[165]),small_fixnum(1)));
	V366= make_cons(symbol_value(VV[165]),Cnil);
	V325= make_cons((V366),(V325));}
	princ_str("\n	if (",VV[25]);
	if((cdr((V325)))==Cnil){
	goto T1263;}
	V367= VV[166];
	goto T1261;
	goto T1263;
T1263:;
	V367= VV[167];
	goto T1261;
T1261:;
	(void)((*(LnkLI274))(V367));
	princ_str("narg <= 0) ",VV[25]);
	if(type_of(car((V325)))!=t_cons)FEwrong_type_argument(Scons,car((V325)));
	(car((V325)))->c.c_cdr = Ct;
	(void)(car((V325)));
	princ_str("goto T",VV[25]);
	(void)((*(LnkLI274))(car(car((V325)))));
	princ_char(59,VV[25]);
	princ_str("\n	else {",VV[25]);
	if(((V330))!=Cnil){
	goto T1273;}
	V330= Ct;
	princ_str("\n	va_start(ap,first);",VV[25]);
	goto T1273;
T1273:;
	V368= car((V365));
	if(((V363))==Cnil){
	goto T1282;}
	V369= make_cons(VV[168],Cnil);
	goto T1280;
	goto T1282;
T1282:;
	V369= make_cons(VV[169],Cnil);
	goto T1280;
T1280:;
	(void)((*(LnkLI324))(/* INLINE-ARGS */V368,V369));
	V363= Cnil;
	princ_char(125,VV[25]);
	if((caddr((V365)))==Cnil){
	goto T1288;}
	(void)((*(LnkLI324))(caddr((V365)),Ct));
	goto T1288;
T1288:;
	V364= cdr((V364));
	V365= car((V364));
	goto T1249;}}
	goto T1241;
T1241:;
	V325= nreverse((V325));
	{object V370;
	setq(VV[165],number_plus(symbol_value(VV[165]),small_fixnum(1)));
	V370= make_cons(symbol_value(VV[165]),Cnil);
	princ_str("\n	--narg; ",VV[25]);
	if(type_of((V370))!=t_cons)FEwrong_type_argument(Scons,(V370));
	((V370))->c.c_cdr = Ct;
	princ_str("goto T",VV[25]);
	(void)((*(LnkLI274))(car((V370))));
	princ_char(59,VV[25]);
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
	princ_str("\n	goto T",VV[25]);
	(void)((*(LnkLI274))(car(car((V325)))));
	princ_char(59,VV[25]);
	princ_str("\nT",VV[25]);
	(void)((*(LnkLI274))(car(car((V325)))));
	princ_str(":;",VV[25]);
	goto T1316;
T1316:;
	{object V373;
	V373= car((V325));
	V325= cdr((V325));}
	(void)((*(LnkLI325))(car((V372)),cadr((V372))));
	if((caddr((V372)))==Cnil){
	goto T1331;}
	(void)((*(LnkLI324))(caddr((V372)),Cnil));
	goto T1331;
T1331:;
	V371= cdr((V371));
	V372= car((V371));
	goto T1311;}
	goto T1307;
T1307:;
	if((cdr((V370)))==Cnil){
	goto T1238;}
	princ_str("\n	goto T",VV[25]);
	(void)((*(LnkLI274))(car((V370))));
	princ_char(59,VV[25]);
	princ_str("\nT",VV[25]);
	(void)((*(LnkLI274))(car((V370))));
	princ_str(":;",VV[25]);}
	goto T1238;
T1238:;
	if((caddr((V329)))==Cnil){
	goto T1348;}
	V328= (VFUN_NARGS=0,(*(LnkLI326))());
	{object V374;
	V374= cadr((V329));
	if(((V374))==Cnil){
	goto T1356;}
	goto T1353;
	goto T1356;
T1356:;
	princ_str("\n	narg= narg - ",VV[25]);
	V375 = make_fixnum((long)length(car((V329))));
	(void)((*(LnkLI274))(V375));
	princ_char(59,VV[25]);}
	goto T1353;
T1353:;
	if(((V330))!=Cnil){
	goto T1361;}
	V330= Ct;
	princ_str("\n	va_start(ap,first);",VV[25]);
	goto T1361;
T1361:;
	princ_str("\n	V",VV[25]);
	(void)((*(LnkLI274))((V328)));
	princ_str(" = ",VV[25]);
	V376= structure_ref(caddr((V329)),VV[69],5);
	if(!((/* INLINE-ARGS */V376)==(VV[171]))){
	goto T1372;}
	base[7]= Ct;
	goto T1371;
	goto T1372;
T1372:;
	base[7]= symbol_value(VV[170]);
	goto T1371;
T1371:;
	bds_bind(VV[170],base[7]);
	if((cadddr((V329)))==Cnil){
	goto T1376;}
	if(((VV[170]->s.s_dbind))==Cnil){
	goto T1379;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_MAKE_LIST(narg));",VV[25]);
	goto T1374;
	goto T1379;
T1379:;
	princ_str("make_list(narg);",VV[25]);
	goto T1374;
	goto T1376;
T1376:;
	if(((VV[170]->s.s_dbind))==Cnil){
	goto T1384;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));",VV[25]);
	goto T1374;
	goto T1384;
T1384:;
	princ_str("list_vector_new(narg,first,ap);",VV[25]);
	goto T1374;
T1374:;
	V377= caddr((V329));
	V378= list(2,VV[155],(V328));
	V379= (*(LnkLI324))(/* INLINE-ARGS */V377,/* INLINE-ARGS */V378);
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
	princ_str("\n	narg= narg - ",VV[25]);
	V382 = make_fixnum((long)length(car((V329))));
	(void)((*(LnkLI274))(V382));
	princ_char(59,VV[25]);}}
	goto T1391;
T1391:;
	if(((V330))!=Cnil){
	goto T1403;}
	V330= Ct;
	princ_str("\n	va_start(ap,first);",VV[25]);
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
	if(!((caar((V387)))==(VV[172]))){
	goto T1425;}
	if((caddr(car((V387))))==(Cnil)){
	goto T1424;}
	goto T1425;
T1425:;
	V385= Ct;
	goto T1424;
T1424:;
	if(!((caar((V387)))==(VV[172]))){
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
	{register object x= car((V390)),V391= VV[173];
	while(!endp(V391))
	if(eql(x,V391->c.c_car)){
	goto T1435;
	}else V391=V391->c.c_cdr;
	goto T1431;}}
	goto T1435;
T1435:;
	V392= structure_ref(cadddr((V389)),VV[69],1);
	if((/* INLINE-ARGS */V392)==(VV[174])){
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
	princ_str("\n	{",VV[25]);
	vs_base=vs_top;
	(void) (*Lnk327)();
	vs_top=sup;
	bds_bind(VV[25],symbol_value(VV[31]));
	if(((V385))==Cnil){
	goto T1460;}
	princ_char(10,VV[31]);
	princ_str("static object VK",VV[25]);
	(void)((*(LnkLI274))((V321)));
	princ_str("defaults[",VV[25]);
	V395 = make_fixnum((long)length((V326)));
	(void)((*(LnkLI274))(V395));
	princ_str("]={",VV[25]);
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
	princ_str("(void *)",VV[25]);
	if(!(eql(car((V396)),small_fixnum(0)))){
	goto T1481;}
	princ_str("-1",VV[25]);
	goto T1479;
	goto T1481;
T1481:;
	V397= caddr(car((V396)));
	if(!(((V397))==(Cnil))){
	goto T1485;}
	princ_str("-2",VV[25]);
	goto T1479;
	goto T1485;
T1485:;
	if(!(type_of((V397))==t_cons)){
	goto T1490;}
	if(!((car((V397)))==(VV[175]))){
	goto T1490;}
	(void)((*(LnkLI274))(cadr((V397))));
	goto T1479;
	goto T1490;
T1490:;
	if(!(type_of((V397))==t_cons)){
	goto T1496;}
	if(!((car((V397)))==(VV[176]))){
	goto T1496;}
	V398= (*(LnkLI328))(caddr((V397)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V398));
	goto T1479;
	goto T1496;
T1496:;
	(void)((*(LnkLI329))());
	goto T1479;
T1479:;
	if((cdr((V396)))==Cnil){
	goto T1501;}
	princ_char(44,VV[25]);
	goto T1501;
T1501:;
	V396= cdr((V396));
	goto T1472;}
	goto T1470;
T1470:;
	princ_str("};",VV[25]);
	goto T1460;
T1460:;
	princ_char(10,VV[31]);
	princ_str("static struct { short n,allow_other_keys;",VV[25]);
	princ_str("object *defaults;",VV[25]);
	princ_str("\n	 KEYTYPE keys[",VV[25]);
	(void)((*(LnkLI274))((number_compare((V386),small_fixnum(1))>=0?((V386)):small_fixnum(1))));
	princ_str("];",VV[25]);
	princ_str("} LI",VV[25]);
	(void)((*(LnkLI274))((V321)));
	princ_str("key=",VV[25]);
	princ_char(123,VV[25]);
	V399 = make_fixnum((long)length(car(cddddr((V329)))));
	(void)((*(LnkLI274))(V399));
	princ_char(44,VV[25]);
	if((cadr(cddddr((V329))))==Cnil){
	goto T1528;}
	V400= small_fixnum(1);
	goto T1526;
	goto T1528;
T1528:;
	V400= small_fixnum(0);
	goto T1526;
T1526:;
	(void)((*(LnkLI274))(V400));
	princ_char(44,VV[25]);
	if(((V385))==Cnil){
	goto T1533;}
	princ_str("VK",VV[25]);
	(void)((*(LnkLI274))((V321)));
	princ_str("defaults",VV[25]);
	goto T1531;
	goto T1533;
T1533:;
	princ_str("Cstd_key_defaults",VV[25]);
	goto T1531;
T1531:;
	if((car(cddddr((V329))))==Cnil){
	goto T1539;}
	princ_str(",{",VV[25]);
	{object V401;
	V401= reverse(car(cddddr((V329))));
	goto T1547;
T1547:;
	if(((V401))!=Cnil){
	goto T1548;}
	goto T1544;
	goto T1548;
T1548:;
	princ_str("(void *)",VV[25]);
	V402= (*(LnkLI330))(caar((V401)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V402));
	if((cdr((V401)))==Cnil){
	goto T1556;}
	princ_char(44,VV[25]);
	goto T1556;
T1556:;
	V401= cdr((V401));
	goto T1547;}
	goto T1544;
T1544:;
	princ_char(125,VV[25]);
	goto T1539;
T1539:;
	princ_str("};",VV[25]);
	bds_unwind1;
	if((caddr((V329)))==Cnil){
	goto T1567;}
	princ_str("\n	parse_key_rest_new(",VV[25]);
	V403= list(2,VV[155],(V328));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V403));
	princ_char(44,VV[25]);
	goto T1565;
	goto T1567;
T1567:;
	princ_str("\n	parse_key_new_new(",VV[25]);
	goto T1565;
T1565:;
	if(!(eql(small_fixnum(0),symbol_value(VV[141])))){
	goto T1573;}
	setq(VV[141],small_fixnum(1));
	goto T1573;
T1573:;
	princ_str("narg,",VV[25]);
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1581;}
	V404= VV[177];
	goto T1579;
	goto T1581;
T1581:;
	V404= VV[178];
	goto T1579;
T1579:;
	(void)((*(LnkLI274))(V404));
	princ_char(43,VV[25]);
	(void)((*(LnkLI274))((V327)));
	princ_str(",(struct key *)(void *)&LI",VV[25]);
	(void)((*(LnkLI274))((V321)));
	princ_str("key,first,ap);",VV[25]);}
	goto T1388;
T1388:;
	{object V405;
	register object V406;
	V405= car(cddddr((V329)));
	V406= car((V405));
	goto T1592;
T1592:;
	if(!(endp_prop((V405)))){
	goto T1593;}
	goto T1588;
	goto T1593;
T1593:;
	{object V408;
	V408= car((V326));
	V326= cdr((V326));
	V407= (V408);}
	if(eql(small_fixnum(0),V407)){
	goto T1599;}
	(void)((*(LnkLI331))(cadr((V406))));
	goto T1597;
	goto T1599;
T1599:;
	princ_str("\n	if(",VV[25]);
	V409= structure_ref(cadr((V406)),VV[69],2);
	(void)((*(LnkLI332))(/* INLINE-ARGS */V409));
	princ_str("==0){",VV[25]);
	bds_bind(VV[133],symbol_value(VV[133]));
	bds_bind(VV[134],(VV[134]->s.s_dbind));
	bds_bind(VV[132],symbol_value(VV[132]));
	V410= (*(LnkLI325))(cadr((V406)),caddr((V406)));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V411= structure_ref(cadddr((V406)),VV[69],1);
	if((/* INLINE-ARGS */V411)==(VV[174])){
	goto T1611;}
	(void)((*(LnkLI324))(cadddr((V406)),Cnil));
	goto T1611;
T1611:;
	princ_str("\n	}else{",VV[25]);
	(void)((*(LnkLI331))(cadr((V406))));
	V412= structure_ref(cadddr((V406)),VV[69],1);
	if((/* INLINE-ARGS */V412)==(VV[174])){
	goto T1617;}
	(void)((*(LnkLI324))(cadddr((V406)),Ct));
	goto T1617;
T1617:;
	princ_char(125,VV[25]);
	goto T1597;
T1597:;
	V405= cdr((V405));
	V406= car((V405));
	goto T1592;}
	goto T1588;
T1588:;
	if(((VV[146]->s.s_dbind))==Cnil){
	goto T1626;}
	(VV[134]->s.s_dbind)= make_cons(VV[150],(VV[134]->s.s_dbind));
	princ_str("\n	goto TTL;",VV[25]);
	princ_str("\nTTL:;",VV[25]);
	goto T1626;
T1626:;
	base[7]= caddr(cddr((V322)));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk318)();
	vs_top=sup;
	if(((V330))==Cnil){
	goto T1636;}
	V330= Cnil;
	princ_str("\n	va_end(ap);",VV[25]);
	goto T1636;
T1636:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1644;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T1644;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T1644;}
	goto T1642;
	goto T1644;
T1644:;
	princ_str("\n	base[0]=base[0];",VV[25]);
	goto T1642;
T1642:;
	princ_str("\n	return Cnil;",VV[25]);
	princ_char(125,VV[25]);
	if((base[1])==Cnil){
	goto T1655;}
	princ_str("\n	}",VV[25]);
	goto T1655;
T1655:;
	(void)((*(LnkLI333))());
	V414= get((V320),VV[77],Cnil);
	{object V415 = (*(LnkLI319))((V339),V414);
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
	(void)((VFUN_NARGS=2,(*(LnkLI315))(VV[179],(V420))));
	if(!(type_of((V421))==t_fixnum||
type_of((V421))==t_bignum||
type_of((V421))==t_ratio||
type_of((V421))==t_shortfloat||
type_of((V421))==t_longfloat||
type_of((V421))==t_complex)){
	goto T1664;}
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI274))((V421)));
	princ_str("()",VV[25]);
	goto T1662;
	goto T1664;
T1664:;
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))((V421)));
	princ_str("()",VV[25]);
	goto T1662;
T1662:;
	princ_str("\n{",VV[25]);
	princ_str("register object *",VV[25]);
	(void)((*(LnkLI274))(symbol_value(VV[20])));
	princ_str("base=vs_base;",VV[25]);
	V424= structure_ref(cadr((V422)),VV[62],1);
	(void)((*(LnkLI317))(/* INLINE-ARGS */V424,(V421),VV[148]));
	princ_str("\n	register object *",VV[25]);
	(void)((*(LnkLI274))(symbol_value(VV[20])));
	princ_str("sup=base+VM",VV[25]);
	(void)((*(LnkLI274))(symbol_value(VV[136])));
	princ_char(59,VV[25]);
	princ_str(" VC",VV[25]);
	(void)((*(LnkLI274))(symbol_value(VV[136])));
	if((symbol_value(VV[163]))==Cnil){
	goto T1689;}
	princ_str("\n	vs_reserve(VM",VV[25]);
	(void)((*(LnkLI274))(symbol_value(VV[136])));
	princ_str(");",VV[25]);
	goto T1687;
	goto T1689;
T1689:;
	princ_str("\n	vs_check;",VV[25]);
	goto T1687;
T1687:;
	if(((V423))==Cnil){
	goto T1695;}
	princ_str("\n	bds_check;",VV[25]);
	goto T1695;
T1695:;
	if((symbol_value(VV[149]))==Cnil){
	goto T1699;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T1699;
T1699:;
	(void)((VFUN_NARGS=3,(*(LnkLI334))(caddr((V422)),caddr(cddr((V422))),(V420))));
	princ_str("\n}",VV[25]);
	{object V425;
	V425= make_cons(symbol_value(VV[136]),symbol_value(VV[130]));
	setq(VV[33],make_cons((V425),symbol_value(VV[33])));}
	princ_str("\n#define VC",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[136])));
	{object V426 = (*(LnkLI335))();
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
	V431= make_cons((V429),symbol_value(VV[130]));
	setq(VV[33],make_cons((V431),symbol_value(VV[33])));}
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1717;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T1717;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T1717;}
	princ_str("\n#define VMB",VV[31]);
	(void)((*(LnkLI277))((V429)));
	goto T1715;
	goto T1717;
T1717:;
	princ_str("\n#define VMB",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_char(32,VV[31]);
	princ_str("register object *",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[20])));
	princ_str("base=vs_top;",VV[31]);
	goto T1715;
T1715:;
	(void)((*(LnkLI335))());
	if((symbol_value(VV[138]))==Cnil){
	goto T1734;}
	princ_str("\n#define VMS",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_char(32,VV[31]);
	princ_str(" register object *",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[20])));
	princ_str("sup=vs_top+",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[130])));
	princ_str(";vs_top=sup;",VV[31]);
	goto T1732;
	goto T1734;
T1734:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1745;}
	princ_str("\n#define VMS",VV[31]);
	(void)((*(LnkLI277))((V429)));
	goto T1732;
	goto T1745;
T1745:;
	princ_str("\n#define VMS",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str(" vs_top += ",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[130])));
	princ_char(59,VV[31]);
	goto T1732;
T1732:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1756;}
	princ_str("\n#define VMV",VV[31]);
	(void)((*(LnkLI277))((V429)));
	goto T1754;
	goto T1756;
T1756:;
	if((symbol_value(VV[163]))==Cnil){
	goto T1761;}
	princ_str("\n#define VMV",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str(" vs_reserve(",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[130])));
	princ_str(");",VV[31]);
	goto T1754;
	goto T1761;
T1761:;
	princ_str("\n#define VMV",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str(" vs_check;",VV[31]);
	goto T1754;
T1754:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1772;}
	princ_str("\n#define VMR",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str("(VMT",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str(") return(VMT",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str(");",VV[31]);
	{object V432 = Cnil;
	VMR27(V432)}
	goto T1772;
T1772:;
	princ_str("\n#define VMR",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str("(VMT",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str(") vs_top=base ; return(VMT",VV[31]);
	(void)((*(LnkLI277))((V429)));
	princ_str(");",VV[31]);
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
	goto T1790;
T1790:;
	if(!(endp_prop((V438)))){
	goto T1791;}
	goto T1788;
	goto T1791;
T1791:;
	{register object V439;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V439= symbol_value(VV[88]);
	(void)(structure_set(car((V438)),VV[69],4,(V439)));
	princ_char(86,VV[25]);
	(void)((*(LnkLI274))((V439)));}
	if(endp_prop(cdr((V438)))){
	goto T1801;}
	princ_char(44,VV[25]);
	goto T1801;
T1801:;
	V438= cdr((V438));
	goto T1790;}
	goto T1788;
T1788:;
	princ_str(")\n",VV[25]);
	if(((V436))==Cnil){
	goto T1811;}
	princ_char(10,VV[25]);
	{register object V440;
	register object V441;
	register object V442;
	V440= (V436);
	V441= (V437);
	V442= Cnil;
	goto T1815;
T1815:;
	if(!(endp_prop((V440)))){
	goto T1816;}
	princ_char(59,VV[25]);
	{object V443 = Cnil;
	VMR28(V443)}
	goto T1816;
T1816:;
	if(((V442))==Cnil){
	goto T1821;}
	princ_char(59,VV[25]);
	goto T1821;
T1821:;
	(void)((*(LnkLI274))(symbol_value(VV[20])));
	V444= (*(LnkLI336))(car((V440)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V444));
	V445= (*(LnkLI280))(car((V441)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V445));
	V442= car((V441));
	princ_char(86,VV[25]);
	V446= structure_ref(car((V440)),VV[69],4);
	(void)((*(LnkLI274))(/* INLINE-ARGS */V446));
	V440= cdr((V440));
	V441= cdr((V441));
	goto T1815;}
	goto T1811;
T1811:;
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
	V453= (number_compare(symbol_value(VV[114]),small_fixnum(2))>=0?Ct:Cnil);
	if(((V453))==Cnil){
	goto T1841;}
	{object V454 = (V453);
	VMR29(V454)}
	goto T1841;
T1841:;
	if((get((V450),VV[115],Cnil))!=Cnil){
	goto T1844;}
	{object V455 = (VFUN_NARGS=2,(*(LnkLI337))(VV[180],(V450)));
	VMR29(V455)}
	goto T1844;
T1844:;
	(void)(remprop((V450),VV[115]));
	{register object V456;
	V456= small_fixnum(0);
	{register object V457;
	register object V458;
	V457= structure_ref(cadr((V451)),VV[62],1);
	V458= car((V457));
	goto T1851;
T1851:;
	if(!(endp_prop((V457)))){
	goto T1852;}
	goto T1847;
	goto T1852;
T1852:;
	V459= structure_ref((V458),VV[69],2);
	if(!(type_of(/* INLINE-ARGS */V459)==t_cons)){
	goto T1856;}
	V460= structure_ref((V458),VV[69],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V460))==t_fixnum)){
	goto T1856;}
	V461= structure_ref((V458),VV[69],2);
	{object V462= cdr(/* INLINE-ARGS */V461);
	V456= (number_compare((V456),V462)>=0?((V456)):V462);}
	goto T1856;
T1856:;
	V457= cdr((V457));
	V458= car((V457));
	goto T1851;}
	goto T1847;
T1847:;
	base[0]= one_plus((V456));
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	V452= vs_base[0];
	{register object V463;
	register object V464;
	V463= structure_ref(cadr((V451)),VV[62],1);
	V464= car((V463));
	goto T1874;
T1874:;
	if(!(endp_prop((V463)))){
	goto T1875;}
	goto T1870;
	goto T1875;
T1875:;
	V465= structure_ref((V464),VV[69],2);
	if(!(type_of(/* INLINE-ARGS */V465)==t_cons)){
	goto T1879;}
	V466= structure_ref((V464),VV[69],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V466))==t_fixnum)){
	goto T1879;}
	{object V467;
	register object V469;
	V470= structure_ref((V464),VV[69],2);
	V467= cdr(/* INLINE-ARGS */V470);
	V469= structure_ref((V464),VV[69],0);
	if(type_of(nthcdr(fixint((V467)),V452))!=t_cons)FEwrong_type_argument(Scons,nthcdr(fixint((V467)),V452));
	(nthcdr(fixint((V467)),V452))->c.c_car = (V469);
	(void)(nthcdr(fixint((V467)),V452));}
	goto T1879;
T1879:;
	V463= cdr((V463));
	V464= car((V463));
	goto T1874;}
	goto T1870;
T1870:;
	(void)(sputprop((V450),VV[116],(V452)));
	{object V471;
	V471= get((V450),VV[116],Cnil);
	if(((V471))==Cnil){
	goto T1895;}
	if((cdr((V471)))!=Cnil){
	goto T1894;}
	if((car((V471)))==Cnil){
	goto T1895;}
	goto T1894;
T1894:;
	V472= list(2,VV[91],(V450));
	V473= list(3,VV[116],/* INLINE-ARGS */V472,list(2,VV[91],(V471)));
	{object V474 = (VFUN_NARGS=1,(*(LnkLI303))(/* INLINE-ARGS */V473));
	VMR29(V474)}
	goto T1895;
T1895:;
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
	V480= number_minus(symbol_value(VV[181]),(V479));
	if(!(number_compare(small_fixnum(0),symbol_value(VV[182]))==0)){
	goto T1903;}
	V481= (VFUN_NARGS=1,(*(LnkLI339))((V478)));
	{long V482 = (long)(*(LnkLI338))(/* INLINE-ARGS */V481,(V480));
	VMR30((object)V482)}
	goto T1903;
T1903:;
	{register object V483;
	register object V484;
	V483= Cnil;
	V484= Cnil;
	{register object V485;
	register object V486;
	V485= (V478);
	V486= car((V485));
	goto T1909;
T1909:;
	if(!(endp_prop((V485)))){
	goto T1910;}
	goto T1905;
	goto T1910;
T1910:;
	V488= structure_ref((V486),VV[69],5);
	{register object x= /* INLINE-ARGS */V488,V487= VV[183];
	while(!endp(V487))
	if(x==(V487->c.c_car)){
	goto T1917;
	}else V487=V487->c.c_cdr;
	goto T1916;}
	goto T1917;
T1917:;{object V489;
	{register object x= (V486),V490= (V484);
	while(!endp(V490))
	if(eql(x,V490->c.c_car)){
	V489= V490;
	goto T1919;
	}else V490=V490->c.c_cdr;
	V489= Cnil;}
	goto T1919;
T1919:;
	if(V489==Cnil)goto T1918;
	goto T1914;
	goto T1918;
T1918:;}
	{register object V491;
	V491= (V486);
	V484= make_cons((V491),(V484));
	goto T1914;}
	goto T1916;
T1916:;{object V492;
	{register object x= (V486),V493= (V483);
	while(!endp(V493))
	if(x==(V493->c.c_car)){
	V492= V493;
	goto T1923;
	}else V493=V493->c.c_cdr;
	V492= Cnil;}
	goto T1923;
T1923:;
	if(V492==Cnil)goto T1922;
	goto T1914;
	goto T1922;
T1922:;}
	{register object V494;
	V494= (V486);
	V484= make_cons((V494),(V484));}
	goto T1914;
T1914:;
	V485= cdr((V485));
	V486= car((V485));
	goto T1909;}
	goto T1905;
T1905:;
	(void)((*(LnkLI338))((V483),(V480)));
	{long V495 = (long)(*(LnkLI338))((V484),symbol_value(VV[182]));
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
	V498= (VFUN_NARGS=1,(*(LnkLI339))((V498)));
	goto T1940;
T1940:;
	{register object V505;
	object V506;
	V505= (V498);
	V506= car((V505));
	goto T1946;
T1946:;
	if(!(endp_prop((V505)))){
	goto T1947;}
	goto T1942;
	goto T1947;
T1947:;
	V500= fix(structure_ref((V506),VV[69],6));
	if(!((V500)>=(V501))){
	goto T1953;}
	V504= (long)(V504)+(1);
	if(!((V500)<(V502))){
	goto T1958;}
	V502= V500;
	goto T1958;
T1958:;
	if(!((V504)>(V503))){
	goto T1953;}
	goto T1941;
	goto T1953;
T1953:;
	V505= cdr((V505));
	V506= car((V505));
	goto T1946;}
	goto T1942;
T1942:;
	if(!((V504)<(V503))){
	goto T1969;}
	V501= (long)(V501)-(1);
	goto T1969;
T1969:;
	{register object V507;
	register object V508;
	V507= (V498);
	V508= car((V507));
	goto T1977;
T1977:;
	if(!(endp_prop((V507)))){
	goto T1978;}
	goto T1973;
	goto T1978;
T1978:;
	{long V509= fix(structure_ref((V508),VV[69],6));
	if(!((/* INLINE-ARGS */V509)<(V501))){
	goto T1982;}}
	(void)(structure_set((V508),VV[69],6,small_fixnum(0)));
	goto T1982;
T1982:;
	V507= cdr((V507));
	V508= car((V507));
	goto T1977;}
	goto T1973;
T1973:;
	{long V510 = V501;
	VMR31((object)V510)}
	goto T1941;
T1941:;
	V504= 0;
	V501= (long)(V502)+(1);
	V502= 1000000;
	goto T1940;}
	base[0]=base[0];
}
/*	local entry for function WT-GLOBAL-ENTRY	*/

static object LI33(V515,V516,V517,V518)

object V515;object V516;object V517;object V518;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	if((get((V515),VV[102],Cnil))==Cnil){
	goto T1997;}
	{object V519 = Cnil;
	VMR32(V519)}
	goto T1997;
T1997:;
	(void)((VFUN_NARGS=2,(*(LnkLI315))(VV[186],(V515))));
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI274))((V516)));
	princ_str("()",VV[25]);
	princ_str("\n{	register object *base=vs_base;",VV[25]);
	if((symbol_value(VV[163]))!=Cnil){
	goto T2008;}
	if((symbol_value(VV[164]))==Cnil){
	goto T2007;}
	goto T2008;
T2008:;
	princ_str("\n	check_arg(",VV[25]);
	V520 = make_fixnum((long)length((V517)));
	(void)((*(LnkLI274))(V520));
	princ_str(");",VV[25]);
	goto T2007;
T2007:;
	princ_str("\n	base[0]=",VV[25]);
	{object V522= (V518);
	if((V522!= VV[89]))goto T2019;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T2021;}
	V521= VV[187];
	goto T2018;
	goto T2021;
T2021:;
	V521= VV[188];
	goto T2018;
	goto T2019;
T2019:;
	if((V522!= VV[142]))goto T2023;
	V521= VV[189];
	goto T2018;
	goto T2023;
T2023:;
	if((V522!= VV[143]))goto T2024;
	V521= VV[190];
	goto T2018;
	goto T2024;
T2024:;
	if((V522!= VV[144]))goto T2025;
	V521= VV[191];
	goto T2018;
	goto T2025;
T2025:;
	V521= VV[192];}
	goto T2018;
T2018:;
	(void)((*(LnkLI274))(V521));
	princ_str("(LI",VV[25]);
	(void)((*(LnkLI274))((V516)));
	princ_char(40,VV[25]);
	{register object V523;
	register long V524;
	V524= 0;
	V523= (V517);
	goto T2032;
T2032:;
	if(!(endp_prop((V523)))){
	goto T2033;}
	goto T2029;
	goto T2033;
T2033:;
	{object V526= car((V523));
	if((V526!= VV[89]))goto T2040;
	V525= VV[193];
	goto T2039;
	goto T2040;
T2040:;
	if((V526!= VV[142]))goto T2041;
	V525= VV[194];
	goto T2039;
	goto T2041;
T2041:;
	if((V526!= VV[143]))goto T2042;
	V525= VV[195];
	goto T2039;
	goto T2042;
T2042:;
	if((V526!= VV[144]))goto T2043;
	V525= VV[196];
	goto T2039;
	goto T2043;
T2043:;
	V525= VV[197];}
	goto T2039;
T2039:;
	(void)((*(LnkLI274))(V525));
	princ_str("(base[",VV[25]);
	V527 = make_fixnum(V524);
	(void)((*(LnkLI274))(V527));
	princ_str("])",VV[25]);
	if(endp_prop(cdr((V523)))){
	goto T2047;}
	princ_char(44,VV[25]);
	goto T2047;
T2047:;
	V523= cdr((V523));
	V524= (long)(V524)+1;
	goto T2032;}
	goto T2029;
T2029:;
	princ_str("));",VV[25]);
	princ_str("\n	vs_top=(vs_base=base)+1;",VV[25]);
	princ_str("\n}",VV[25]);
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
	if((V531!= VV[89]))goto T2060;
	{object V532 = VV[198];
	VMR33(V532)}
	goto T2060;
T2060:;
	if((V531!= VV[261]))goto T2061;
	{object V533 = VV[199];
	VMR33(V533)}
	goto T2061;
T2061:;
	if((V531!= VV[142]))goto T2062;
	{object V534 = VV[200];
	VMR33(V534)}
	goto T2062;
T2062:;
	if((V531!= VV[144]))goto T2063;
	{object V535 = VV[201];
	VMR33(V535)}
	goto T2063;
T2063:;
	if((V531!= VV[143]))goto T2064;
	{object V536 = VV[202];
	VMR33(V536)}
	goto T2064;
T2064:;
	{object V537 = VV[203];
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
	goto T2066;}
	if(!(endp_prop(cdr((V539))))){
	goto T2065;}
	goto T2066;
T2066:;
	V540 = make_fixnum((long)length((V539)));
	(void)((*(LnkLI283))(VV[204],small_fixnum(2),V540));
	goto T2065;
T2065:;
	if(type_of(car((V539)))==t_symbol){
	goto T2070;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[205],car((V539)))));
	goto T2070;
T2070:;
	V541= make_cons(VV[204],(V539));
	(void)((*(LnkLI268))(Ct,/* INLINE-ARGS */V541));
	setq(VV[6],Ct);
	{register object V542;
	object V543;
	setq(VV[61],number_plus(symbol_value(VV[61]),small_fixnum(1)));
	V543= symbol_value(VV[61]);
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[52],Cnil);
	bds_bind(VV[59],Cnil);
	V542= Cnil;
	V542= (*(LnkLI340))(car((V539)),cadr((V539)),cddr((V539)));
	(void)((*(LnkLI296))());
	{object V544;
	V544= list(7,VV[204],car((V539)),(V543),cddr((V542)),car((V542)),cadr((V542)),(VV[59]->s.s_dbind));
	setq(VV[24],make_cons((V544),symbol_value(VV[24])));
	{object V545 = symbol_value(VV[24]);
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
	goto T2083;}
	V558= list(4,VV[103],list(2,VV[91],(V552)),(V555),VV[206]);
	(void)((VFUN_NARGS=1,(*(LnkLI303))(/* INLINE-ARGS */V558)));
	goto T2083;
T2083:;
	if(((V556))==Cnil){
	goto T2086;}
	V559= list(2,VV[91],(V552));
	V560= list(4,VV[103],/* INLINE-ARGS */V559,list(2,VV[91],(V556)),VV[207]);
	(void)((VFUN_NARGS=1,(*(LnkLI303))(/* INLINE-ARGS */V560)));
	goto T2086;
T2086:;
	princ_str("\nstatic void L",VV[31]);
	(void)((*(LnkLI277))((V553)));
	princ_str("();",VV[31]);
	V561= list(2,VV[91],(V552));
	V562= list(3,VV[208],/* INLINE-ARGS */V561,(*(LnkLI304))(VV[209],(V553)));
	{object V563 = (VFUN_NARGS=1,(*(LnkLI303))(/* INLINE-ARGS */V562));
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
	if((get((V570),VV[210],Cnil))==Cnil){
	goto T2095;}
	bds_bind(VV[20],VV[211]);
	goto T2093;
	goto T2095;
T2095:;
	bds_bind(VV[20],VV[212]);
	goto T2093;
T2093:;
	bds_bind(VV[128],VV[127]);
	bds_bind(VV[18],Cnil);
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
	(void)((VFUN_NARGS=2,(*(LnkLI315))(VV[213],(V570))));
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI274))((V571)));
	princ_str("()",VV[25]);
	princ_str("\n{register object *",VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("base=vs_base;",VV[25]);
	V576= structure_ref(car(cddddr((V572))),VV[62],1);
	(void)((*(LnkLI317))(/* INLINE-ARGS */V576,(V571),VV[148]));
	princ_str("\n	register object *",VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("sup=base+VM",VV[25]);
	(void)((*(LnkLI274))((VV[136]->s.s_dbind)));
	princ_char(59,VV[25]);
	princ_str(" VC",VV[25]);
	(void)((*(LnkLI274))((VV[136]->s.s_dbind)));
	if((symbol_value(VV[163]))==Cnil){
	goto T2121;}
	princ_str("\n	vs_reserve(VM",VV[25]);
	(void)((*(LnkLI274))((VV[136]->s.s_dbind)));
	princ_str(");",VV[25]);
	goto T2119;
	goto T2121;
T2121:;
	princ_str("\n	vs_check;",VV[25]);
	goto T2119;
T2119:;
	if(((V575))==Cnil){
	goto T2127;}
	princ_str("\n	bds_check;",VV[25]);
	goto T2127;
T2127:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2131;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T2131;
T2131:;
	base[15]= car((V572));
	base[16]= cadr((V572));
	base[17]= caddr((V572));
	base[18]= cadddr((V572));
	vs_top=(vs_base=base+15)+4;
	(void) (*Lnk341)();
	vs_top=sup;
	princ_str("\n}",VV[25]);
	{object V577;
	V577= make_cons((VV[136]->s.s_dbind),(VV[130]->s.s_dbind));
	setq(VV[33],make_cons((V577),symbol_value(VV[33])));}
	princ_str("\n#define VC",VV[31]);
	(void)((*(LnkLI277))((VV[136]->s.s_dbind)));
	{object V578 = (*(LnkLI335))();
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
	if((symbol_value(VV[48]))==Cnil){
	goto T2152;}
	(void)((*(LnkLI268))(Cnil,(V580)));
	{object V582;
	base[0]= VV[214];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V582= vs_base[0];
	V583= listA(3,VV[64],(V582),VV[215]);
	(void)((*(LnkLI292))(/* INLINE-ARGS */V583));
	base[0]= list(5,VV[51],(V582),Cnil,(V580),Cnil);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk272)();
	vs_top=sup;
	{object V584;
	V584= list(2,VV[216],make_cons((V582),Cnil));
	setq(VV[24],make_cons((V584),symbol_value(VV[24])));
	{object V585 = symbol_value(VV[24]);
	VMR37(V585)}}}
	goto T2152;
T2152:;
	{object V586;
	if(type_of((V580))==t_cons){
	goto T2163;}
	V586= Cnil;
	goto T2162;
	goto T2163;
T2163:;
	if(type_of(car((V580)))==t_symbol){
	goto T2165;}
	V586= Cnil;
	goto T2162;
	goto T2165;
T2165:;
	if(!((car((V580)))==(VV[217]))){
	goto T2169;}
	goto T2167;
	goto T2169;
T2169:;
	base[0]= car((V580));
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	V587= vs_base[0];
	if((V587)==Cnil){
	goto T2167;}
	V586= Cnil;
	goto T2162;
	goto T2167;
T2167:;
	{register object V588;
	register long V589;
	V588= cdr((V580));
	V589= 1;
	goto T2176;
T2176:;
	if((V589)>=(1000)){
	goto T2178;}
	if(type_of((V588))==t_cons){
	goto T2177;}
	goto T2178;
T2178:;
	V586= Cnil;
	goto T2162;
	goto T2177;
T2177:;
	if(!(type_of(car((V588)))==t_cons)){
	goto T2183;}
	if(!((caar((V588)))==(VV[64]))){
	goto T2183;}
	V581= cadr(car((V588)));
	if(!(type_of((V581))==t_cons)){
	goto T2183;}
	if(!((car((V581)))==(VV[218]))){
	goto T2183;}
	{register object V590;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V590= vs_base[0];
	base[0]= listA(3,VV[51],(V590),cdr((V581)));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk272)();
	vs_top=sup;
	base[1]= (V580);
	base[2]= small_fixnum(0);
	base[3]= make_fixnum(V589);
	vs_top=(vs_base=base+1)+3;
	Lsubseq();
	vs_top=sup;
	base[0]= vs_base[0];
	V591= list(2,VV[219],list(2,VV[91],(V590)));
	base[1]= make_cons(/* INLINE-ARGS */V591,Cnil);
	V592 = make_fixnum(V589);
	V593= number_plus(small_fixnum(1),V592);
	base[2]= nthcdr(fixint(/* INLINE-ARGS */V593),(V580));
	vs_top=(vs_base=base+0)+3;
	Lappend();
	vs_top=sup;
	V580= vs_base[0];
	goto TTL;}
	goto T2183;
T2183:;
	if(type_of((V588))==t_cons){
	goto T2206;}
	V588= Cnil;
	goto T2205;
	goto T2206;
T2206:;
	V588= cdr((V588));
	goto T2205;
T2205:;
	V589= (long)(1)+(V589);
	goto T2176;}
	goto T2162;
T2162:;
	if(((V586))==Cnil){
	goto T2211;}
	{object V594 = (V586);
	VMR37(V594)}
	goto T2211;
T2211:;
	(void)((*(LnkLI268))(Cnil,(V580)));
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[52],Cnil);
	{object V595;
	V595= list(2,VV[216],(V580));
	setq(VV[24],make_cons((V595),symbol_value(VV[24])));}
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
	goto T2219;}
	{object V600 = (V599);
	VMR38(V600)}
	goto T2219;
T2219:;
	{object V601;
	base[0]= (V598);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	V601= vs_base[0];
	if(((V601))==Cnil){
	goto T2224;}
	{object V602 = (V601);
	VMR38(V602)}
	goto T2224;
T2224:;
	{object V603 = (VFUN_NARGS=1,(*(LnkLI303))((V598)));
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
	V604= reverse(symbol_value(VV[52]));
	V605= car((V604));
	goto T2229;
T2229:;
	if(!(endp_prop((V604)))){
	goto T2230;}
	{object V606 = Cnil;
	VMR39(V606)}
	goto T2230;
T2230:;
	if(!(type_of((V605))!=t_cons)){
	goto T2234;}
	(void)((*(LnkLI342))());
	goto T2234;
T2234:;
	{register object V607;
	V607= make_cons(VV[220],(V605));
	setq(VV[24],make_cons((V607),symbol_value(VV[24])));}
	V604= cdr((V604));
	V605= car((V604));
	goto T2229;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2SHARP-COMMA	*/

static object LI41(V610,V611)

object V610;object V611;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	V612= list(3,VV[221],(V610),(V611));
	{object V613 = (VFUN_NARGS=1,(*(LnkLI303))(/* INLINE-ARGS */V612));
	VMR40(V613)}
	return Cnil;
}
/*	local entry for function T2DECLARE	*/

static object LI42(V615)

object V615;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V616 = (*(LnkLI342))();
	VMR41(V616)}
	return Cnil;
}
/*	local entry for function T1DEFINE-STRUCTURE	*/

static object LI43(V618)

object V618;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	V619= (*(LnkLI268))(Cnil,Cnil);
	V620= make_cons(((/* INLINE-ARGS */V619)==Cnil?Ct:Cnil),Cnil);
	V621= append((V618),/* INLINE-ARGS */V620);
	V622= make_cons(VV[222],/* INLINE-ARGS */V621);
	(void)((*(LnkLI268))(Ct,/* INLINE-ARGS */V622));
	V623= make_cons(VV[222],(V618));
	{object V624 = (*(LnkLI273))(/* INLINE-ARGS */V623);
	VMR42(V624)}
	return Cnil;
}
/*	local entry for function SET-DBIND	*/

static object LI44(V627,V628)

object V627;object V628;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	princ_str("\n	VV[",VV[25]);
	(void)((*(LnkLI274))((V628)));
	princ_str("]->s.s_dbind = ",VV[25]);
	(void)((*(LnkLI274))((V627)));
	princ_char(59,VV[25]);
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
	goto T2256;
T2256:;
	if(!(endp_prop((V632)))){
	goto T2257;}
	goto T2252;
	goto T2257;
T2257:;
	if(type_of((V633))==t_string){
	goto T2261;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[223],(V633))));
	goto T2261;
T2261:;
	V632= cdr((V632));
	V633= car((V632));
	goto T2256;}
	goto T2252;
T2252:;
	{object V634;
	V634= list(2,VV[224],(V631));
	setq(VV[24],make_cons((V634),symbol_value(VV[24])));
	{object V635 = symbol_value(VV[24]);
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
	goto T2274;
T2274:;
	if(!(endp_prop((V638)))){
	goto T2275;}
	{object V640 = Cnil;
	VMR45(V640)}
	goto T2275;
T2275:;
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))((V639)));
	V638= cdr((V638));
	V639= car((V638));
	goto T2274;}
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
	goto T2289;}
	if(!(endp_prop(cdr((V642))))){
	goto T2288;}
	goto T2289;
T2289:;
	V644 = make_fixnum((long)length((V642)));
	(void)((*(LnkLI283))(VV[225],small_fixnum(2),V644));
	goto T2288;
T2288:;
	if(type_of(car((V642)))==t_string){
	goto T2293;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[226],car((V642)))));
	goto T2293;
T2293:;
	{object V645= cadr((V642));
	if(type_of(V645)==t_fixnum||
type_of(V645)==t_bignum||
type_of(V645)==t_ratio||
type_of(V645)==t_shortfloat||
type_of(V645)==t_longfloat||
type_of(V645)==t_complex){
	goto T2296;}}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[227],cadr((V642)))));
	goto T2296;
T2296:;
	{register object V646;
	register object V647;
	V646= cddr((V642));
	V647= car((V646));
	goto T2303;
T2303:;
	if(!(endp_prop((V646)))){
	goto T2304;}
	goto T2299;
	goto T2304;
T2304:;
	if(!(type_of((V647))==t_string)){
	goto T2310;}
	{register object V648;
	V648= (V647);
	V643= make_cons((V648),(V643));
	goto T2308;}
	goto T2310;
T2310:;
	if(!(type_of((V647))==t_cons)){
	goto T2315;}
	if(!(type_of(car((V647)))==t_symbol)){
	goto T2318;}
	base[2]= car((V647));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2320;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[228],car((V647)))));
	goto T2320;
T2320:;
	{register object V649;
	V650= car((V647));
	V651= (*(LnkLI343))(cdr((V647)));
	V652= make_cons(/* INLINE-ARGS */V650,/* INLINE-ARGS */V651);
	V649= make_cons(/* INLINE-ARGS */V652,Cnil);
	V643= make_cons((V649),(V643));
	goto T2308;}
	goto T2318;
T2318:;
	if(!(type_of(car((V647)))==t_cons)){
	goto T2327;}
	if(!(type_of(caar((V647)))==t_symbol)){
	goto T2327;}
	if(!((caar((V647)))==(VV[91]))){
	goto T2334;}
	if(!(endp_prop(cdar((V647))))){
	goto T2336;}
	goto T2327;
	goto T2336;
T2336:;
	if(!(((endp_prop(cddar((V647)))?Ct:Cnil))==Cnil)){
	goto T2338;}
	goto T2327;
	goto T2338;
T2338:;
	if(!(endp_prop(cdr((V647))))){
	goto T2340;}
	goto T2327;
	goto T2340;
T2340:;
	if(((endp_prop(cddr((V647)))?Ct:Cnil))==Cnil){
	goto T2327;}
	goto T2332;
	goto T2334;
T2334:;
	base[2]= caar((V647));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2327;}
	goto T2332;
T2332:;
	{register object V653;
	V654= caar((V647));
	if(!((caar((V647)))==(VV[91]))){
	goto T2346;}
	V656= (*(LnkLI328))(cadar((V647)));
	V655= make_cons(/* INLINE-ARGS */V656,Cnil);
	goto T2344;
	goto T2346;
T2346:;
	V655= (*(LnkLI343))(cdar((V647)));
	goto T2344;
T2344:;
	V657= make_cons(/* INLINE-ARGS */V654,V655);
	V658= (*(LnkLI343))(cdr((V647)));
	V653= make_cons(/* INLINE-ARGS */V657,/* INLINE-ARGS */V658);
	V643= make_cons((V653),(V643));
	goto T2308;}
	goto T2327;
T2327:;
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[229],(V647))));
	goto T2308;
	goto T2315;
T2315:;
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[230],(V647))));
	goto T2308;
T2308:;
	V646= cdr((V646));
	V647= car((V646));
	goto T2303;}
	goto T2299;
T2299:;
	{object V659;
	V660= car((V642));
	V661= cadr((V642));
	V659= list(4,VV[225],/* INLINE-ARGS */V660,/* INLINE-ARGS */V661,reverse((V643)));
	setq(VV[24],make_cons((V659),symbol_value(VV[24])));
	{object V662 = symbol_value(VV[24]);
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
	(void)((VFUN_NARGS=2,(*(LnkLI315))(VV[231],VV[225])));
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))((V666)));
	princ_str("\n{",VV[25]);
	princ_str("\nobject *vs=vs_top;",VV[25]);
	princ_str("\nobject *old_top=vs_top+",VV[25]);
	(void)((*(LnkLI274))((V667)));
	princ_char(59,VV[25]);
	if(!(number_compare((V667),small_fixnum(0))>0)){
	goto T2369;}
	princ_str("\n	vs_top=old_top;",VV[25]);
	goto T2369;
T2369:;
	princ_str("\n{",VV[25]);
	{object V670;
	register object V671;
	V670= (V668);
	V671= car((V670));
	goto T2379;
T2379:;
	if(!(endp_prop((V670)))){
	goto T2380;}
	goto T2375;
	goto T2380;
T2380:;
	if(!(type_of((V671))==t_string)){
	goto T2386;}
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))((V671)));
	goto T2384;
	goto T2386;
T2386:;
	if(!((caar((V671)))==(VV[91]))){
	goto T2391;}
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))(cadadr((V671))));
	{object V672= caadr((V671));
	if((V672!= VV[74]))goto T2396;
	princ_str("=VV[",VV[25]);
	(void)((*(LnkLI274))(cadar((V671))));
	princ_str("];",VV[25]);
	goto T2384;
	goto T2396;
T2396:;
	princ_str("=object_to_",VV[25]);
	base[1]= symbol_name(caadr((V671)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V673= vs_base[0];
	(void)((*(LnkLI274))(V673));
	princ_str("(VV[",VV[25]);
	(void)((*(LnkLI274))(cadar((V671))));
	princ_str("]);",VV[25]);
	goto T2384;}
	goto T2391;
T2391:;
	princ_str("\n{vs_base=vs_top=old_top;",VV[25]);
	{register object V674;
	register object V675;
	V674= cdar((V671));
	V675= car((V674));
	goto T2413;
T2413:;
	if(!(endp_prop((V674)))){
	goto T2414;}
	goto T2409;
	goto T2414;
T2414:;
	princ_str("\nvs_push(",VV[25]);
	{object V676= car((V675));
	if((V676!= VV[74]))goto T2421;
	(void)((*(LnkLI274))(cadr((V675))));
	goto T2420;
	goto T2421;
T2421:;
	if((V676!= VV[344]))goto T2423;
	princ_str("code_char((long)",VV[25]);
	(void)((*(LnkLI274))(cadr((V675))));
	princ_char(41,VV[25]);
	goto T2420;
	goto T2423;
T2423:;
	if((V676!= VV[345]))goto T2427;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T2428;}
	princ_str("CMP",VV[25]);
	goto T2428;
T2428:;
	princ_str("make_fixnum((long)",VV[25]);
	(void)((*(LnkLI274))(cadr((V675))));
	princ_char(41,VV[25]);
	goto T2420;
	goto T2427;
T2427:;
	if((V676!= VV[346]))goto T2435;
	princ_str("make_shortfloat((double)",VV[25]);
	(void)((*(LnkLI274))(cadr((V675))));
	princ_char(41,VV[25]);
	goto T2420;
	goto T2435;
T2435:;
	if((V676!= VV[347]))goto T2439;
	princ_str("make_longfloat((double)",VV[25]);
	(void)((*(LnkLI274))(cadr((V675))));
	princ_char(41,VV[25]);
	goto T2420;
	goto T2439;
T2439:;}
	goto T2420;
T2420:;
	princ_str(");",VV[25]);
	V674= cdr((V674));
	V675= car((V674));
	goto T2413;}
	goto T2409;
T2409:;
	{register object x= caar((V671)),V677= symbol_value(VV[79]);
	while(!endp(V677))
	if(type_of(V677->c.c_car)==t_cons &&eql(x,V677->c.c_car->c.c_car)){
	V669= (V677->c.c_car);
	goto T2454;
	}else V677=V677->c.c_cdr;
	V669= Cnil;}
	goto T2454;
T2454:;
	if(((V669))==Cnil){
	goto T2452;}
	if((symbol_value(VV[149]))==Cnil){
	goto T2456;}
	princ_str("\nihs_push(VV[",VV[25]);
	V678= (*(LnkLI330))(caar((V671)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V678));
	princ_str("]);",VV[25]);
	princ_str("\nL",VV[25]);
	(void)((*(LnkLI274))(cdr((V669))));
	princ_str("();",VV[25]);
	princ_str("\nihs_pop();",VV[25]);
	goto T2450;
	goto T2456;
T2456:;
	princ_str("\nL",VV[25]);
	(void)((*(LnkLI274))(cdr((V669))));
	princ_str("();",VV[25]);
	goto T2450;
	goto T2452;
T2452:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2471;}
	princ_str("\nsuper_funcall(VV[",VV[25]);
	V679= (*(LnkLI330))(caar((V671)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V679));
	princ_str("]);",VV[25]);
	goto T2450;
	goto T2471;
T2471:;
	if((symbol_value(VV[163]))==Cnil){
	goto T2477;}
	princ_str("\nsuper_funcall_no_event(VV[",VV[25]);
	V680= (*(LnkLI330))(caar((V671)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V680));
	princ_str("]);",VV[25]);
	goto T2450;
	goto T2477;
T2477:;
	princ_str("\nCMPfuncall(VV[",VV[25]);
	V681= (*(LnkLI330))(caar((V671)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V681));
	princ_str("]->s.s_gfdef);",VV[25]);
	goto T2450;
T2450:;
	if(endp_prop(cdr((V671)))){
	goto T2485;}
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))(cadadr((V671))));
	{object V682= caadr((V671));
	if((V682!= VV[74]))goto T2492;
	princ_str("=vs_base[0];",VV[25]);
	goto T2491;
	goto T2492;
T2492:;
	princ_str("=object_to_",VV[25]);
	base[1]= symbol_name(caadr((V671)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V683= vs_base[0];
	(void)((*(LnkLI274))(V683));
	princ_str("(vs_base[0]);",VV[25]);}
	goto T2491;
T2491:;
	{register object V684;
	register object V685;
	V684= cddr((V671));
	V685= car((V684));
	goto T2502;
T2502:;
	if(!(endp_prop((V684)))){
	goto T2503;}
	goto T2485;
	goto T2503;
T2503:;
	princ_str("\nvs_base++;",VV[25]);
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))(cadr((V685))));
	{object V686= car((V685));
	if((V686!= VV[74]))goto T2513;
	princ_str("=(vs_base<vs_top?vs_base[0]:Cnil);",VV[25]);
	goto T2512;
	goto T2513;
T2513:;
	princ_str("=object_to_",VV[25]);
	base[3]= symbol_name(car((V685)));
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V687= vs_base[0];
	(void)((*(LnkLI274))(V687));
	princ_str("((vs_base<vs_top?vs_base[0]:Cnil));",VV[25]);}
	goto T2512;
T2512:;
	V684= cdr((V684));
	V685= car((V684));
	goto T2502;}
	goto T2485;
T2485:;
	princ_str("\n}",VV[25]);
	goto T2384;
T2384:;
	V670= cdr((V670));
	V671= car((V670));
	goto T2379;}
	goto T2375;
T2375:;
	princ_str("\n}",VV[25]);
	princ_str("\nvs_top=vs;",VV[25]);
	princ_str("\n}",VV[25]);
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
	setq(VV[61],number_plus(symbol_value(VV[61]),small_fixnum(1)));
	V693= symbol_value(VV[61]);
	V694= Cnil;
	if(endp_prop((V690))){
	goto T2542;}
	if(endp_prop(cdr((V690)))){
	goto T2542;}
	if(!(endp_prop(cddr((V690))))){
	goto T2541;}
	goto T2542;
T2542:;
	V695 = make_fixnum((long)length((V690)));
	(void)((*(LnkLI283))(VV[232],small_fixnum(3),V695));
	goto T2541;
T2541:;
	if(type_of(car((V690)))==t_symbol){
	goto T2548;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[233],car((V690)))));
	goto T2548;
T2548:;
	{register object V696;
	register object V697;
	V696= cadr((V690));
	V697= car((V696));
	goto T2555;
T2555:;
	if(!(endp_prop((V696)))){
	goto T2556;}
	goto T2551;
	goto T2556;
T2556:;
	{register object x= (V697),V698= VV[234];
	while(!endp(V698))
	if(eql(x,V698->c.c_car)){
	goto T2560;
	}else V698=V698->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[235],(V697))));
	goto T2560;
T2560:;
	V696= cdr((V696));
	V697= car((V696));
	goto T2555;}
	goto T2551;
T2551:;
	V694= caddr((V690));
	if(!(type_of((V694))==t_symbol)){
	goto T2572;}
	V691= VV[74];
	base[1]= symbol_name((V694));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V692= vs_base[0];
	goto T2570;
	goto T2572;
T2572:;
	if(!(type_of((V694))==t_string)){
	goto T2579;}
	V691= VV[74];
	V692= (V694);
	goto T2570;
	goto T2579;
T2579:;
	if(!(type_of((V694))==t_cons)){
	goto T2585;}
	{register object x= car((V694)),V699= VV[236];
	while(!endp(V699))
	if(eql(x,V699->c.c_car)){
	goto T2589;
	}else V699=V699->c.c_cdr;
	goto T2585;}
	goto T2589;
T2589:;
	if(!(type_of(cdr((V694)))==t_cons)){
	goto T2585;}
	if(type_of(cadr((V694)))==t_symbol){
	goto T2592;}
	if(!(type_of(cadr((V694)))==t_string)){
	goto T2585;}
	goto T2592;
T2592:;
	if(!(endp_prop(cddr((V694))))){
	goto T2585;}
	if(!(type_of(cadr((V694)))==t_symbol)){
	goto T2600;}
	base[1]= symbol_name(cadr((V694)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V692= vs_base[0];
	goto T2598;
	goto T2600;
T2600:;
	V692= cadr((V694));
	goto T2598;
T2598:;
	V691= car((V694));
	goto T2570;
	goto T2585;
T2585:;
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[237],(V694))));
	goto T2570;
T2570:;
	{object V700;
	V700= list(6,VV[232],car((V690)),(V693),cadr((V690)),(V691),(V692));
	setq(VV[24],make_cons((V700),symbol_value(VV[24])));}
	{object V701;
	V701= make_cons(car((V690)),(V693));
	setq(VV[79],make_cons((V701),symbol_value(VV[79])));
	{object V702 = symbol_value(VV[79]);
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
	princ_str("\nstatic void L",VV[31]);
	(void)((*(LnkLI277))((V709)));
	princ_str("();",VV[31]);
	V713= list(2,VV[91],(V708));
	V714= list(3,VV[111],/* INLINE-ARGS */V713,(*(LnkLI304))(VV[238],(V709)));
	{object V715 = (VFUN_NARGS=1,(*(LnkLI303))(/* INLINE-ARGS */V714));
	VMR49(V715)}
	return Cnil;
}
/*	local entry for function T3DEFENTRY	*/

static object LI51(V721,V722,V723,V724,V725)

object V721;object V722;object V723;register object V724;object V725;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI315))(VV[239],(V721))));
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI274))((V722)));
	princ_str("()",VV[25]);
	princ_str("\n{	object *old_base=vs_base;",VV[25]);
	{object V726= (V724);
	if((V726!= VV[240]))goto T2621;
	goto T2620;
	goto T2621;
T2621:;
	if((V726!= VV[158]))goto T2622;
	princ_str("\n	char *x;",VV[25]);
	goto T2620;
	goto T2622;
T2622:;
	princ_str("\n	",VV[25]);
	base[0]= symbol_name((V724));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V727= vs_base[0];
	(void)((*(LnkLI274))(V727));
	princ_str(" x;",VV[25]);}
	goto T2620;
T2620:;
	if((symbol_value(VV[163]))==Cnil){
	goto T2629;}
	princ_str("\n	check_arg(",VV[25]);
	V728 = make_fixnum((long)length((V723)));
	(void)((*(LnkLI274))(V728));
	princ_str(");",VV[25]);
	goto T2629;
T2629:;
	if(((V724))==(VV[240])){
	goto T2635;}
	princ_str("\n	x=",VV[25]);
	goto T2635;
T2635:;
	princ_str("\n	",VV[25]);
	(void)((*(LnkLI274))((V725)));
	princ_char(40,VV[25]);
	if(endp_prop((V723))){
	goto T2643;}
	{register object V729;
	register long V730;
	V730= 0;
	V729= (V723);
	goto T2648;
T2648:;
	{object V731= car((V729));
	if((V731!= VV[74]))goto T2652;
	princ_str("\n	vs_base[",VV[25]);
	V732 = make_fixnum(V730);
	(void)((*(LnkLI274))(V732));
	princ_char(93,VV[25]);
	goto T2651;
	goto T2652;
T2652:;
	princ_str("\n	object_to_",VV[25]);
	base[0]= symbol_name(car((V729)));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V733= vs_base[0];
	(void)((*(LnkLI274))(V733));
	princ_str("(vs_base[",VV[25]);
	V734 = make_fixnum(V730);
	(void)((*(LnkLI274))(V734));
	princ_str("])",VV[25]);}
	goto T2651;
T2651:;
	if(!(endp_prop(cdr((V729))))){
	goto T2663;}
	goto T2643;
	goto T2663;
T2663:;
	princ_char(44,VV[25]);
	V729= cdr((V729));
	V730= (long)(V730)+1;
	goto T2648;}
	goto T2643;
T2643:;
	princ_str(");",VV[25]);
	princ_str("\n	vs_top=(vs_base=old_base)+1;",VV[25]);
	princ_str("\n	vs_base[0]=",VV[25]);
	{object V735= (V724);
	if((V735!= VV[240]))goto T2679;
	princ_str("Cnil",VV[25]);
	goto T2678;
	goto T2679;
T2679:;
	if((V735!= VV[74]))goto T2681;
	princ_char(120,VV[25]);
	goto T2678;
	goto T2681;
T2681:;
	if((V735!= VV[344]))goto T2683;
	princ_str("code_char(x)",VV[25]);
	goto T2678;
	goto T2683;
T2683:;
	if((V735!= VV[345]))goto T2685;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T2686;}
	princ_str("CMP",VV[25]);
	goto T2686;
T2686:;
	princ_str("make_fixnum(x)",VV[25]);
	goto T2678;
	goto T2685;
T2685:;
	if((V735!= VV[158]))goto T2691;
	princ_str("make_simple_string(x)",VV[25]);
	goto T2678;
	goto T2691;
T2691:;
	if((V735!= VV[346]))goto T2693;
	princ_str("make_shortfloat(x)",VV[25]);
	goto T2678;
	goto T2693;
T2693:;
	if((V735!= VV[347]))goto T2695;
	princ_str("make_longfloat(x)",VV[25]);
	goto T2678;
	goto T2695;
T2695:;}
	goto T2678;
T2678:;
	princ_char(59,VV[25]);
	princ_str("\n}",VV[25]);
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
	goto T2704;
T2704:;
	if(!(endp_prop((V743)))){
	goto T2705;}
	{object V745 = reverse((V742));
	VMR52(V745)}
	goto T2705;
T2705:;
	if(!(type_of((V744))==t_symbol)){
	goto T2711;}
	{object V746;
	base[2]= symbol_name((V744));
	vs_top=(vs_base=base+2)+1;
	Lstring_downcase();
	vs_top=sup;
	V747= vs_base[0];
	V746= list(2,VV[74],V747);
	V742= make_cons((V746),(V742));
	goto T2709;}
	goto T2711;
T2711:;
	if(!(type_of((V744))==t_string)){
	goto T2718;}
	{object V748;
	V748= list(2,VV[74],(V744));
	V742= make_cons((V748),(V742));
	goto T2709;}
	goto T2718;
T2718:;
	if(!(type_of((V744))==t_cons)){
	goto T2723;}
	{register object x= car((V744)),V749= VV[241];
	while(!endp(V749))
	if(eql(x,V749->c.c_car)){
	goto T2726;
	}else V749=V749->c.c_cdr;
	goto T2723;}
	goto T2726;
T2726:;
	{register object V750;
	register object V751;
	V750= cdr((V744));
	V751= car((V750));
	goto T2730;
T2730:;
	if(!(endp_prop((V750)))){
	goto T2731;}
	goto T2709;
	goto T2731;
T2731:;
	{register object V752;
	V753= car((V744));
	if(!(type_of((V751))==t_symbol)){
	goto T2739;}
	base[4]= symbol_name((V751));
	vs_top=(vs_base=base+4)+1;
	Lstring_downcase();
	vs_top=sup;
	V754= vs_base[0];
	goto T2737;
	goto T2739;
T2739:;
	if(!(type_of((V751))==t_string)){
	goto T2743;}
	V754= (V751);
	goto T2737;
	goto T2743;
T2743:;
	V754= (VFUN_NARGS=2,(*(LnkLI265))(VV[242],(V751)));
	goto T2737;
T2737:;
	V752= list(2,/* INLINE-ARGS */V753,V754);
	V742= make_cons((V752),(V742));}
	V750= cdr((V750));
	V751= car((V750));
	goto T2730;}
	goto T2723;
T2723:;
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[243],(V744))));
	goto T2709;
T2709:;
	V743= cdr((V743));
	V744= car((V743));
	goto T2704;}}
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
	goto T2758;}
	V765= small_fixnum(0);
	goto T2756;
	goto T2758;
T2758:;
	V765= structure_ref((V763),VV[32],4);
	goto T2756;
T2756:;
	V766= Cnil;
	bds_bind(VV[20],(*(LnkLI309))(cadr((V764))));
	bds_bind(VV[117],Cnil);
	V767= caaddr((V764));
	if((structure_ref((V763),VV[32],0))==Cnil){
	goto T2766;}
	V768= structure_ref((V763),VV[32],0);
	goto T2764;
	goto T2766;
T2766:;
	V768= Cnil;
	goto T2764;
T2764:;
	(void)((VFUN_NARGS=2,(*(LnkLI315))(VV[244],V768)));
	princ_str("\nstatic void ",VV[25]);
	if(((V760))==Cnil){
	goto T2773;}
	V769= VV[245];
	goto T2771;
	goto T2773;
T2773:;
	V769= VV[246];
	goto T2771;
T2771:;
	(void)((*(LnkLI274))(V769));
	V770= structure_ref((V763),VV[32],3);
	(void)((*(LnkLI274))(/* INLINE-ARGS */V770));
	princ_char(40,VV[25]);
	princ_str("base0",VV[25]);
	if(((V767))==Cnil){
	goto T2782;}
	V771= VV[247];
	goto T2780;
	goto T2782;
T2782:;
	V771= VV[248];
	goto T2780;
T2780:;
	(void)((*(LnkLI274))(V771));
	V772= structure_ref(cadr((V764)),VV[62],1);
	(void)((*(LnkLI311))(/* INLINE-ARGS */V772,small_fixnum(2)));
	(void)((*(LnkLI316))(caaddr((V764)),Cnil));
	princ_str("register object *",VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("base0;",VV[25]);
	bds_bind(VV[249],(V762));
	bds_bind(VV[128],VV[124]);
	bds_bind(VV[18],Cnil);
	bds_bind(VV[129],small_fixnum(0));
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],one_plus((V765)));
	bds_bind(VV[132],(V762));
	bds_bind(VV[133],(V761));
	bds_bind(VV[134],make_cons((VV[128]->s.s_dbind),Cnil));
	bds_bind(VV[135],(VV[128]->s.s_dbind));
	setq(VV[137],number_plus(symbol_value(VV[137]),small_fixnum(1)));
	bds_bind(VV[136],symbol_value(VV[137]));
	bds_bind(VV[138],Cnil);
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],small_fixnum(0));
	V766= (VV[136]->s.s_dbind);
	princ_str("\n{",VV[25]);
	V773= structure_ref(cadr((V764)),VV[62],1);
	V774= structure_ref((V763),VV[32],3);
	(void)((*(LnkLI317))(/* INLINE-ARGS */V773,/* INLINE-ARGS */V774,VV[250]));
	princ_str("\n	VMB",VV[25]);
	(void)((*(LnkLI274))((V766)));
	princ_str(" VMS",VV[25]);
	(void)((*(LnkLI274))((V766)));
	princ_str(" VMV",VV[25]);
	(void)((*(LnkLI274))((V766)));
	if((symbol_value(VV[149]))==Cnil){
	goto T2806;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T2806;
T2806:;
	base[19]= caddr(cddr((V764)));
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk318)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),(VV[130]->s.s_dbind))==0)){
	goto T2814;}
	if(((VV[138]->s.s_dbind))!=Cnil){
	goto T2814;}
	if(((VV[140]->s.s_dbind))!=Cnil){
	goto T2814;}
	goto T2812;
	goto T2814;
T2814:;
	princ_str("\n	base[0]=base[0];",VV[25]);
	goto T2812;
T2812:;
	princ_str("\n}",VV[25]);
	(void)((*(LnkLI319))((V766),Ct));
	V775= structure_ref((V763),VV[32],3);
	{object V776 = (*(LnkLI313))(/* INLINE-ARGS */V775);
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
	goto T2826;}
	V787= 0;
	goto T2824;
	goto T2826;
T2826:;
	V787= fix(structure_ref((V785),VV[32],4));
	goto T2824;
T2824:;
	bds_bind(VV[20],(*(LnkLI309))(cadr((V786))));
	bds_bind(VV[117],Cnil);
	if(!(((V782))==(VV[251]))){
	goto T2829;}
	{object V788 = (*(LnkLI250))((V782),(V783),(V784),(V785),(V786));
	bds_unwind1;
	bds_unwind1;
	VMR54(V788)}
	goto T2829;
T2829:;
	if((structure_ref((V785),VV[32],0))==Cnil){
	goto T2835;}
	V789= structure_ref((V785),VV[32],0);
	goto T2833;
	goto T2835;
T2835:;
	V789= Cnil;
	goto T2833;
T2833:;
	(void)((VFUN_NARGS=2,(*(LnkLI315))(VV[252],V789)));
	princ_str("\nstatic void ",VV[31]);
	if(((V782))==Cnil){
	goto T2842;}
	V790= VV[253];
	goto T2840;
	goto T2842;
T2842:;
	V790= VV[254];
	goto T2840;
T2840:;
	(void)((*(LnkLI277))(V790));
	V791= structure_ref((V785),VV[32],3);
	(void)((*(LnkLI277))(/* INLINE-ARGS */V791));
	princ_str("();",VV[31]);
	princ_str("\nstatic void ",VV[25]);
	if(((V782))==Cnil){
	goto T2851;}
	V792= VV[255];
	goto T2849;
	goto T2851;
T2851:;
	V792= VV[256];
	goto T2849;
T2849:;
	(void)((*(LnkLI274))(V792));
	V793= structure_ref((V785),VV[32],3);
	(void)((*(LnkLI274))(/* INLINE-ARGS */V793));
	princ_char(40,VV[25]);
	{register object V794;
	register long V795;
	V794= make_fixnum(V787);
	V795= 0;
	goto T2859;
T2859:;
	V796 = make_fixnum(V795);
	if(!(number_compare(V796,(V794))>=0)){
	goto T2860;}
	princ_str("base",VV[25]);
	V797 = make_fixnum(V795);
	(void)((*(LnkLI274))(V797));
	princ_char(41,VV[25]);
	goto T2855;
	goto T2860;
T2860:;
	princ_str("base",VV[25]);
	V798 = make_fixnum(V795);
	(void)((*(LnkLI274))(V798));
	princ_char(44,VV[25]);
	V795= (long)(V795)+1;
	goto T2859;}
	goto T2855;
T2855:;
	princ_str("\nregister object ",VV[25]);
	{register object V799;
	register long V800;
	V799= make_fixnum(V787);
	V800= 0;
	goto T2880;
T2880:;
	V801 = make_fixnum(V800);
	if(!(number_compare(V801,(V799))>=0)){
	goto T2881;}
	princ_char(42,VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("base",VV[25]);
	V802 = make_fixnum(V800);
	(void)((*(LnkLI274))(V802));
	princ_char(59,VV[25]);
	goto T2876;
	goto T2881;
T2881:;
	princ_char(42,VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("base",VV[25]);
	V803 = make_fixnum(V800);
	(void)((*(LnkLI274))(V803));
	princ_char(44,VV[25]);
	V800= (long)(V800)+1;
	goto T2880;}
	goto T2876;
T2876:;
	V804= structure_ref(cadr((V786)),VV[62],1);
	(void)((*(LnkLI311))(/* INLINE-ARGS */V804,small_fixnum(2)));
	bds_bind(VV[128],VV[127]);
	bds_bind(VV[249],(V784));
	bds_bind(VV[18],Cnil);
	bds_bind(VV[129],small_fixnum(0));
	bds_bind(VV[130],small_fixnum(0));
	V805 = make_fixnum(V787);
	bds_bind(VV[131],one_plus(V805));
	bds_bind(VV[132],(V784));
	bds_bind(VV[133],(V783));
	bds_bind(VV[134],make_cons((VV[128]->s.s_dbind),Cnil));
	bds_bind(VV[135],(VV[128]->s.s_dbind));
	setq(VV[137],number_plus(symbol_value(VV[137]),small_fixnum(1)));
	bds_bind(VV[136],symbol_value(VV[137]));
	bds_bind(VV[138],Cnil);
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],small_fixnum(0));
	princ_str("\n{	register object *",VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("base=vs_base;",VV[25]);
	princ_str("\n	register object *",VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("sup=base+VM",VV[25]);
	(void)((*(LnkLI274))((VV[136]->s.s_dbind)));
	princ_char(59,VV[25]);
	V806= structure_ref(cadr((V786)),VV[62],1);
	V807= structure_ref((V785),VV[32],3);
	(void)((*(LnkLI317))(/* INLINE-ARGS */V806,/* INLINE-ARGS */V807,VV[257]));
	princ_str(" VC",VV[25]);
	(void)((*(LnkLI274))((VV[136]->s.s_dbind)));
	if((symbol_value(VV[163]))==Cnil){
	goto T2921;}
	princ_str("\n	vs_reserve(VM",VV[25]);
	(void)((*(LnkLI274))((VV[136]->s.s_dbind)));
	princ_str(");",VV[25]);
	goto T2919;
	goto T2921;
T2921:;
	princ_str("\n	vs_check;",VV[25]);
	goto T2919;
T2919:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2927;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T2927;
T2927:;
	if(((V782))==Cnil){
	goto T2933;}
	(void)((VFUN_NARGS=2,(*(LnkLI334))(caddr((V786)),caddr(cddr((V786))))));
	goto T2931;
	goto T2933;
T2933:;
	(void)((VFUN_NARGS=3,(*(LnkLI334))(caddr((V786)),caddr(cddr((V786))),(V785))));
	goto T2931;
T2931:;
	princ_str("\n}",VV[25]);
	{object V808;
	V808= make_cons((VV[136]->s.s_dbind),(VV[130]->s.s_dbind));
	setq(VV[33],make_cons((V808),symbol_value(VV[33])));}
	princ_str("\n#define VC",VV[31]);
	(void)((*(LnkLI277))((VV[136]->s.s_dbind)));
	V809= (*(LnkLI335))();
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
	V810= structure_ref((V785),VV[32],3);
	{object V811 = (*(LnkLI313))(/* INLINE-ARGS */V810);
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
	V813= symbol_value(VV[18]);
	V814= car((V813));
	goto T2948;
T2948:;
	if(!(endp_prop((V813)))){
	goto T2949;}
	goto T2944;
	goto T2949;
T2949:;
	{register object V815;
	if(!(type_of((V814))==t_cons)){
	goto T2956;}
	{register object V816;
	V816= car((V814));
	V814= cdr((V814));
	V815= (V816);
	goto T2954;}
	goto T2956;
T2956:;
	V815= Ct;
	goto T2954;
T2954:;
	if(!(((V812))==((V815)))){
	goto T2963;}
	base[1]= symbol_value(VV[31]);
	base[2]= VV[258];
	base[3]= (V814);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T2961;
	goto T2963;
T2963:;
	if(!(((V812))==Cnil)){
	goto T2969;}
	goto T2968;
	goto T2969;
T2969:;
	base[1]= symbol_value(VV[31]);
	base[2]= VV[259];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	goto T2968;
T2968:;
	V812= (V815);
	base[1]= symbol_value(VV[31]);
	base[2]= VV[260];
	base[3]= (*(LnkLI280))((V812));
	base[4]= (V814);
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
	goto T2961;
T2961:;
	if(!(((V812))==(VV[261]))){
	goto T2953;}
	base[1]= symbol_value(VV[31]);
	base[2]= VV[262];
	base[3]= (V814);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;}
	goto T2953;
T2953:;
	V813= cdr((V813));
	V814= car((V813));
	goto T2948;}
	goto T2944;
T2944:;
	if(symbol_value(VV[18])==Cnil){
	goto T2989;}
	base[0]= symbol_value(VV[31]);
	base[1]= VV[263];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	goto T2989;
T2989:;
	if(eql(symbol_value(VV[141]),small_fixnum(0))){
	goto T2993;}
	base[0]= symbol_value(VV[31]);
	base[1]= VV[264];
	base[2]= symbol_value(VV[141]);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V817 = vs_base[0];
	VMR55(V817)}
	goto T2993;
T2993:;
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
	V820= structure_ref((V819),VV[69],4);
	if(eql(/* INLINE-ARGS */V820,VV[72])){
	goto T2999;}
	goto T2998;
	goto T2999;
T2999:;
	(VV[153]->s.s_dbind)= Ct;
	goto T2998;
T2998:;
	{object V821;
	V821= (*(LnkLI348))((V819));
	if(((V821))==Cnil){
	goto T3004;}
	{object V822;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V822= symbol_value(VV[88]);
	(void)(structure_set((V819),VV[69],1,(V821)));
	(void)(structure_set((V819),VV[69],4,(V822)));
	princ_str("\n	",VV[25]);
	if((base0[1])!=Cnil){
	goto T3011;}
	princ_char(123,VV[25]);
	base0[1]= Ct;
	goto T3011;
T3011:;
	base[1]= (V819);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk349)();
	return;}
	goto T3004;
T3004:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
static void LnkT349(){ call_or_link(VV[349],(void **)(void *)&Lnk349);} /* WT-VAR-DECL */
static object  LnkTLI348(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[348],(void **)(void *)&LnkLI348,1,first,ap);va_end(ap);return V1;} /* C2VAR-KIND */
static object  LnkTLI250(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[250],(void **)(void *)&LnkLI250,5,first,ap);va_end(ap);return V1;} /* T3LOCAL-DCFUN */
static object  LnkTLI343(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[343],(void **)(void *)&LnkLI343,1,first,ap);va_end(ap);return V1;} /* PARSE-CVSPECS */
static object  LnkTLI342(){return call_proc0(VV[342],(void **)(void *)&LnkLI342);} /* WFS-ERROR */
static void LnkT341(){ call_or_link(VV[341],(void **)(void *)&Lnk341);} /* C2DM */
static object  LnkTLI340(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[340],(void **)(void *)&LnkLI340,3,first,ap);va_end(ap);return V1;} /* C1DM */
static object  LnkTLI339(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[339],(void **)(void *)&LnkLI339,first,ap);va_end(ap);return V1;} /* REMOVE-DUPLICATES */
static object  LnkTLI338(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[338],(void **)(void *)&LnkLI338,258,first,ap);va_end(ap);return V1;} /* ANALYZE-REGS1 */
static object  LnkTLI337(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[337],(void **)(void *)&LnkLI337,first,ap);va_end(ap);return V1;} /* WARN */
static object  LnkTLI336(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[336],(void **)(void *)&LnkLI336,1,first,ap);va_end(ap);return V1;} /* REGISTER */
static object  LnkTLI335(){return call_proc0(VV[335],(void **)(void *)&LnkLI335);} /* WT-CVARS */
static object  LnkTLI334(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[334],(void **)(void *)&LnkLI334,first,ap);va_end(ap);return V1;} /* C2LAMBDA-EXPR */
static object  LnkTLI333(){return call_proc0(VV[333],(void **)(void *)&LnkLI333);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI332(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[332],(void **)(void *)&LnkLI332,1,first,ap);va_end(ap);return V1;} /* WT-VS */
static object  LnkTLI331(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[331],(void **)(void *)&LnkLI331,1,first,ap);va_end(ap);return V1;} /* C2BIND */
static object  LnkTLI330(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[330],(void **)(void *)&LnkLI330,1,first,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI329(){return call_proc0(VV[329],(void **)(void *)&LnkLI329);} /* BABOON */
static object  LnkTLI328(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[328],(void **)(void *)&LnkLI328,1,first,ap);va_end(ap);return V1;} /* ADD-OBJECT */
static void LnkT327(){ call_or_link(VV[327],(void **)(void *)&Lnk327);} /* INC-INLINE-BLOCKS */
static object  LnkTLI326(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[326],(void **)(void *)&LnkLI326,first,ap);va_end(ap);return V1;} /* CS-PUSH */
static object  LnkTLI325(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[325],(void **)(void *)&LnkLI325,2,first,ap);va_end(ap);return V1;} /* C2BIND-INIT */
static object  LnkTLI324(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[324],(void **)(void *)&LnkLI324,2,first,ap);va_end(ap);return V1;} /* C2BIND-LOC */
static object  LnkTLI323(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[323],(void **)(void *)&LnkLI323,1,first,ap);va_end(ap);return V1;} /* SET-UP-VAR-CVS */
static object  LnkTLI322(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[322],(void **)(void *)&LnkLI322,first,ap);va_end(ap);return V1;} /* CONCATENATE */
static object  LnkTLI321(){return call_proc0(VV[321],(void **)(void *)&LnkLI321);} /* CVS-PUSH */
static object  LnkTLI320(){return call_proc0(VV[320],(void **)(void *)&LnkLI320);} /* VS-PUSH */
static object  LnkTLI319(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[319],(void **)(void *)&LnkLI319,2,first,ap);va_end(ap);return V1;} /* WT-V*-MACROS */
static void LnkT318(){ call_or_link(VV[318],(void **)(void *)&Lnk318);} /* C2EXPR */
static object  LnkTLI317(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[317],(void **)(void *)&LnkLI317,3,first,ap);va_end(ap);return V1;} /* ASSIGN-DOWN-VARS */
static object  LnkTLI316(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[316],(void **)(void *)&LnkLI316,2,first,ap);va_end(ap);return V1;} /* WT-REQUIREDS */
static object  LnkTLI315(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[315],(void **)(void *)&LnkLI315,first,ap);va_end(ap);return V1;} /* WT-COMMENT */
static object  LnkTLI314(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[314],(void **)(void *)&LnkLI314,2,first,ap);va_end(ap);return V1;} /* ADD-DEBUG-INFO */
static object  LnkTLI313(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[313],(void **)(void *)&LnkLI313,1,first,ap);va_end(ap);return V1;} /* WT-DOWNWARD-CLOSURE-MACRO */
static void LnkT312(){ call_or_link(VV[312],(void **)(void *)&Lnk312);} /* T3DEFUN-AUX */
static object  LnkTLI311(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[311],(void **)(void *)&LnkLI311,258,first,ap);va_end(ap);return V1;} /* ANALYZE-REGS */
static void LnkT310(){ call_or_link(VV[310],(void **)(void *)&Lnk310);} /* FIXNUMP */
static object  LnkTLI309(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[309],(void **)(void *)&LnkLI309,1,first,ap);va_end(ap);return V1;} /* VOLATILE */
static object  LnkTLI308(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[308],(void **)(void *)&LnkLI308,1,first,ap);va_end(ap);return V1;} /* MAXARGS */
static object  LnkTLI307(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[307],(void **)(void *)&LnkLI307,1,first,ap);va_end(ap);return V1;} /* VARARG-P */
static object  LnkTLI306(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[306],(void **)(void *)&LnkLI306,3,first,ap);va_end(ap);return V1;} /* WT-IF-PROCLAIMED */
static object  LnkTLI305(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[305],(void **)(void *)&LnkLI305,258,first,ap);va_end(ap);return V1;} /* PROCLAIMED-ARGD */
static object  LnkTLI304(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[304],(void **)(void *)&LnkLI304,2,first,ap);va_end(ap);return V1;} /* ADD-ADDRESS */
static object  LnkTLI303(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[303],(void **)(void *)&LnkLI303,first,ap);va_end(ap);return V1;} /* ADD-INIT */
static object  LnkTLI302(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[302],(void **)(void *)&LnkLI302,first,ap);va_end(ap);return V1;} /* FAST-LINK-PROCLAIMED-TYPE-P */
static object  LnkTLI301(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[301],(void **)(void *)&LnkLI301,2,first,ap);va_end(ap);return V1;} /* SHIFT<< */
static object  LnkTLI300(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[300],(void **)(void *)&LnkLI300,257,first,ap);va_end(ap);return V1;} /* F-TYPE */
static void LnkT299(){ call_or_link(VV[299],(void **)(void *)&Lnk299);} /* SUBTYPEP */
static void LnkT298(){ call_or_link(VV[298],(void **)(void *)&Lnk298);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI297(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[297],(void **)(void *)&LnkLI297,first,ap);va_end(ap);return V1;} /* MAKE-ARRAY */
static object  LnkTLI296(){return call_proc0(VV[296],(void **)(void *)&LnkLI296);} /* ADD-LOAD-TIME-SHARP-COMMA */
static object  LnkTLI295(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[295],(void **)(void *)&LnkLI295,2,first,ap);va_end(ap);return V1;} /* MAKE-INLINE-STRING */
static object  LnkTLI294(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[294],(void **)(void *)&LnkLI294,2,first,ap);va_end(ap);return V1;} /* TYPE-AND */
static object  LnkTLI293(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[293],(void **)(void *)&LnkLI293,2,first,ap);va_end(ap);return V1;} /* CMPFIX-ARGS */
static object  LnkTLI292(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[292],(void **)(void *)&LnkLI292,1,first,ap);va_end(ap);return V1;} /* PROCLAIM */
static object  LnkTLI291(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[291],(void **)(void *)&LnkLI291,1,first,ap);va_end(ap);return V1;} /* CHECK-DOWNWARD */
static object  LnkTLI290(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[290],(void **)(void *)&LnkLI290,first,ap);va_end(ap);return V1;} /* C1LAMBDA-EXPR */
static object  LnkTLI289(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[289],(void **)(void *)&LnkLI289,1,first,ap);va_end(ap);return V1;} /* T1PROGN */
static object  LnkTLI283(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[283],(void **)(void *)&LnkLI283,3,first,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */
static void LnkT282(){ call_or_link(VV[282],(void **)(void *)&Lnk282);} /* CMP-EVAL */
static void LnkT281(){ call_or_link(VV[281],(void **)(void *)&Lnk281);} /* DECLARATION-TYPE */
static object  LnkTLI280(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[280],(void **)(void *)&LnkLI280,1,first,ap);va_end(ap);return V1;} /* REP-TYPE */
static void LnkT279(){ call_or_link(VV[279],(void **)(void *)&Lnk279);} /* WT-DATA-FILE */
static object  LnkTLI278(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[278],(void **)(void *)&LnkLI278,1,first,ap);va_end(ap);return V1;} /* PUSH-DATA-INCF */
static object  LnkTLI277(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[277],(void **)(void *)&LnkLI277,1,first,ap);va_end(ap);return V1;} /* WT-H1 */
static object  LnkTLI276(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[276],(void **)(void *)&LnkLI276,1,first,ap);va_end(ap);return V1;} /* WT-FUNCTION-LINK */
static void LnkT275(){ call_or_link(VV[275],(void **)(void *)&Lnk275);} /* WT-GLOBAL-ENTRY */
static void LnkT257(){ call_or_link(VV[257],(void **)(void *)&Lnk257);} /* T3LOCAL-FUN */
static object  LnkTLI274(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[274],(void **)(void *)&LnkLI274,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI273(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[273],(void **)(void *)&LnkLI273,1,first,ap);va_end(ap);return V1;} /* T1ORDINARY */
static void LnkT272(){ call_or_link(VV[272],(void **)(void *)&Lnk272);} /* T1EXPR */
static object  LnkTLI271(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[271],(void **)(void *)&LnkLI271,1,first,ap);va_end(ap);return V1;} /* CMP-MACROEXPAND-1 */
static object  LnkTLI270(){return call_proc0(VV[270],(void **)(void *)&LnkLI270);} /* PRINT-CURRENT-FORM */
static object  LnkTLI269(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[269],(void **)(void *)&LnkLI269,1,first,ap);va_end(ap);return V1;} /* WT-DATA-PACKAGE-OPERATION */
static object  LnkTLI268(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[268],(void **)(void *)&LnkLI268,2,first,ap);va_end(ap);return V1;} /* MAYBE-EVAL */
static object  LnkTLI267(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[267],(void **)(void *)&LnkLI267,3,first,ap);va_end(ap);return V1;} /* CMP-EXPAND-MACRO */
static object  LnkTLI266(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[266],(void **)(void *)&LnkLI266,first,ap);va_end(ap);return V1;} /* CMPWARN */
static object  LnkTLI265(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[265],(void **)(void *)&LnkLI265,first,ap);va_end(ap);return V1;} /* CMPERR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

