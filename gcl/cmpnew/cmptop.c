
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
	(void)((*(LnkLI267))(Ct,(V1)));
	V6= (*(LnkLI268))((V1));
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
	(void)((*(LnkLI269))());
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
	(void)((*(LnkLI269))());
	goto T31;
T31:;
	base[3]= (*(LnkLI270))((V1));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk271)();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;
	goto T29;
T29:;
	if((get((V2),VV[11],Cnil))==Cnil){
	goto T36;}
	V7= (*(LnkLI272))((V1));
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
	V8= (*(LnkLI273))((V4),(V2),V9);
	base[3]= (V8);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk271)();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;}
	goto T39;
T39:;
	V10= (*(LnkLI272))((V1));
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
	V11= (*(LnkLI272))((V1));
	frs_pop();
	base[3]= V11;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T48;
T48:;
	V12= (VFUN_NARGS=2,(*(LnkLI265))(VV[12],(V2)));
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
/*	function definition for DECLARATION-TYPE	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	{object V13;
	check_arg(1);
	V13=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(equal((V13),VV[13]))){
	goto T51;}
	base[1]= VV[14];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T51;
T51:;
	if(!(equal((V13),VV[15]))){
	goto T54;}
	base[1]= VV[16];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T54;
T54:;
	base[1]= (V13);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function CTOP-WRITE	*/

static object LI3(V15)

object V15;
{	 VMB3 VMS3 VMV3
	bds_check;
	goto TTL;
TTL:;
	{object V16;
	V16= Cnil;
	bds_bind(VV[17],Cnil);
	bds_bind(VV[18],Cnil);
	bds_bind(VV[20],VV[19]);
	bds_bind(VV[21],Cnil);
	bds_bind(VV[22],small_fixnum(0));
	bds_bind(VV[23],Cnil);
	bds_bind(VV[0],Cnil);
	setq(VV[24],reverse(symbol_value(VV[24])));
	princ_str("\nvoid init_",VV[25]);
	(void)((*(LnkLI274))((V15)));
	princ_str("(){",VV[25]);
	princ_str("do_init(VV);",VV[25]);
	princ_char(125,VV[25]);
	{object V17;
	V17= symbol_value(VV[24]);
	bds_bind(VV[0],car((V17)));
	goto T69;
T69:;
	if(!(endp_prop((V17)))){
	goto T70;}
	bds_unwind1;
	goto T65;
	goto T70;
T70:;
	setq(VV[1],Ct);
	V16= get(car((VV[0]->s.s_dbind)),VV[26],Cnil);
	if(((V16))==Cnil){
	goto T76;}
	base[8]= (V16);
	{object V18;
	V18= cdr((VV[0]->s.s_dbind));
	 vs_top=base+9;
	 while(!endp(V18))
	 {vs_push(car(V18));V18=cdr(V18);}
	vs_base=base+9;}
	super_funcall_no_event(base[8]);
	vs_top=sup;
	goto T76;
T76:;
	V17= cdr((V17));
	(VV[0]->s.s_dbind)= car((V17));
	goto T69;}
	goto T65;
T65:;
	{object V19;
	V19= symbol_value(VV[24]);
	bds_bind(VV[0],car((V19)));
	goto T91;
T91:;
	if(!(endp_prop((V19)))){
	goto T92;}
	bds_unwind1;
	goto T87;
	goto T92;
T92:;
	setq(VV[1],Ct);
	V16= get(car((VV[0]->s.s_dbind)),VV[27],Cnil);
	if(((V16))==Cnil){
	goto T98;}
	base[8]= (V16);
	{object V20;
	V20= cdr((VV[0]->s.s_dbind));
	 vs_top=base+9;
	 while(!endp(V20))
	 {vs_push(car(V20));V20=cdr(V20);}
	vs_base=base+9;}
	super_funcall_no_event(base[8]);
	vs_top=sup;
	goto T98;
T98:;
	V19= cdr((V19));
	(VV[0]->s.s_dbind)= car((V19));
	goto T91;}
	goto T87;
T87:;
	{object V21;
	V21= Cnil;
	goto T111;
T111:;
	if(!(endp_prop(symbol_value(VV[28])))){
	goto T113;}
	goto T109;
	goto T113;
T113:;
	V21= car(symbol_value(VV[28]));
	{object V22;
	V22= car(symbol_value(VV[28]));
	setq(VV[28],cdr(symbol_value(VV[28])));}
	{object V23;
	V23= (V21);
	 vs_top=base+7;
	 while(!endp(V23))
	 {vs_push(car(V23));V23=cdr(V23);}
	vs_base=base+7;}
	(void) (*Lnk257)();
	vs_top=sup;
	goto T111;}
	goto T109;
T109:;
	{object V24;
	object V25;
	V24= symbol_value(VV[29]);
	V25= car((V24));
	goto T128;
T128:;
	if(!(endp_prop((V24)))){
	goto T129;}
	goto T124;
	goto T129;
T129:;
	{object V26;
	V26= (V25);
	 vs_top=base+8;
	 while(!endp(V26))
	 {vs_push(car(V26));V26=cdr(V26);}
	vs_base=base+8;}
	(void) (*Lnk275)();
	vs_top=sup;
	V24= cdr((V24));
	V25= car((V24));
	goto T128;}
	goto T124;
T124:;
	{object V27;
	object V28;
	V27= (VV[17]->s.s_dbind);
	V28= car((V27));
	goto T144;
T144:;
	if(!(endp_prop((V27)))){
	goto T145;}
	goto T140;
	goto T145;
T145:;
	(void)((*(LnkLI276))((V28)));
	V27= cdr((V27));
	V28= car((V27));
	goto T144;}
	goto T140;
T140:;
	{object V29;
	object V30;
	V29= symbol_value(VV[30]);
	V30= car((V29));
	goto T159;
T159:;
	if(!(endp_prop((V29)))){
	goto T160;}
	goto T155;
	goto T160;
T160:;
	princ_str("\nstatic void LC",VV[31]);
	V31= structure_ref((V30),VV[32],3);
	(void)((*(LnkLI277))(/* INLINE-ARGS */V31));
	princ_str("();",VV[31]);
	V29= cdr((V29));
	V30= car((V29));
	goto T159;}
	goto T155;
T155:;
	{object V32;
	object V33;
	V32= symbol_value(VV[33]);
	V33= car((V32));
	goto T177;
T177:;
	if(!(endp_prop((V32)))){
	goto T178;}
	goto T173;
	goto T178;
T178:;
	princ_str("\n#define VM",VV[31]);
	(void)((*(LnkLI277))(car((V33))));
	princ_char(32,VV[31]);
	(void)((*(LnkLI277))(cdr((V33))));
	V32= cdr((V32));
	V33= car((V32));
	goto T177;}
	goto T173;
T173:;
	(void)((*(LnkLI278))(Cnil));
	{object V34;
	object V35;
	base[8]= (VV[22]->s.s_dbind);
	base[9]= symbol_value(VV[34]);
	base[10]= small_fixnum(1);
	vs_top=(vs_base=base+8)+3;
	Lminus();
	vs_top=sup;
	V34= vs_base[0];
	V35= small_fixnum(0);
	goto T200;
T200:;
	if(!(number_compare((V35),(V34))>=0)){
	goto T201;}
	goto T193;
	goto T201;
T201:;
	(void)((*(LnkLI278))(Cnil));
	V35= one_plus((V35));
	goto T200;}
	goto T193;
T193:;
	princ_str("\nstatic char * VVi[",VV[31]);
	V36= number_plus(small_fixnum(1),symbol_value(VV[34]));
	(void)((*(LnkLI277))(/* INLINE-ARGS */V36));
	princ_str("]={",VV[31]);
	princ_str("\n#define Cdata VV[",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[34])));
	princ_char(93,VV[31]);
	if((VV[21]->s.s_dbind)!=Cnil){
	goto T217;}
	princ_char(10,VV[31]);
	(void)((*(LnkLI277))(small_fixnum(0)));
	goto T217;
T217:;
	{register object V37;
	V37= nreverse((VV[21]->s.s_dbind));
	goto T223;
T223:;
	if(((V37))!=Cnil){
	goto T224;}
	princ_str("\n};",VV[31]);
	goto T220;
	goto T224;
T224:;
	princ_str("\n(char *)(",VV[31]);
	(void)((*(LnkLI277))(caar((V37))));
	(void)((*(LnkLI277))(cadar((V37))));
	if((cdr((V37)))==Cnil){
	goto T236;}
	V38= VV[35];
	goto T234;
	goto T236;
T236:;
	V38= VV[36];
	goto T234;
T234:;
	(void)((*(LnkLI277))(V38));
	V37= cdr((V37));
	goto T223;}
	goto T220;
T220:;
	princ_str("\n#define VV ((object *)VVi)",VV[31]);
	vs_base=vs_top;
	(void) (*Lnk279)();
	vs_top=sup;
	{object V39;
	object V40;
	V39= (VV[17]->s.s_dbind);
	V40= car((V39));
	goto T247;
T247:;
	if(!(endp_prop((V39)))){
	goto T248;}
	{object V41 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR3(V41)}
	goto T248;
T248:;
	{register object V42;
	register object V43;
	object V44;
	register object V45;
	V42= cadr((V40));
	V43= caddr((V40));
	V44= cadddr((V40));
	V45= Cnil;
	if(!(((V43))==(VV[37]))){
	goto T258;}
	princ_str("\nstatic object *Lclptr",VV[31]);
	(void)((*(LnkLI277))((V42)));
	princ_char(59,VV[31]);
	V45= VV[38];
	goto T256;
	goto T258;
T258:;
	if(((V43))==Cnil){
	goto T267;}
	V45= (*(LnkLI280))((V43));
	goto T265;
	goto T267;
T267:;
	V45= VV[39];
	goto T265;
T265:;
	goto T256;
T256:;
	if(((V43))==Cnil){
	goto T270;}
	if(((V43))==(VV[37])){
	goto T270;}
	if(((V44))!=Cnil){
	goto T269;}
	if((Ct)==((V43))){
	goto T270;}
	goto T269;
T269:;
	princ_str("\nstatic ",VV[31]);
	base[8]= (V45);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V46= vs_base[0];
	(void)((*(LnkLI277))(V46));
	princ_str(" LnkT",VV[31]);
	(void)((*(LnkLI277))((V42)));
	princ_str("(object,...);",VV[31]);
	princ_str("\nstatic ",VV[31]);
	base[8]= (V45);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V47= vs_base[0];
	(void)((*(LnkLI277))(V47));
	princ_str(" (*Lnk",VV[31]);
	(void)((*(LnkLI277))((V42)));
	princ_str(")() = (",VV[31]);
	base[8]= (V45);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V48= vs_base[0];
	(void)((*(LnkLI277))(V48));
	princ_str("(*)()) LnkT",VV[31]);
	(void)((*(LnkLI277))((V42)));
	princ_char(59,VV[31]);
	goto T252;
	goto T270;
T270:;
	princ_str("\nstatic ",VV[31]);
	base[8]= (V45);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V49= vs_base[0];
	(void)((*(LnkLI277))(V49));
	princ_str(" LnkT",VV[31]);
	(void)((*(LnkLI277))((V42)));
	princ_str("();",VV[31]);
	princ_str("\nstatic ",VV[31]);
	base[8]= (V45);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V50= vs_base[0];
	(void)((*(LnkLI277))(V50));
	princ_str(" (*Lnk",VV[31]);
	(void)((*(LnkLI277))((V42)));
	princ_str(")() = LnkT",VV[31]);
	(void)((*(LnkLI277))((V42)));
	princ_char(59,VV[31]);}
	goto T252;
T252:;
	V39= cdr((V39));
	V40= car((V39));
	goto T247;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAYBE-EVAL	*/

static object LI4(V53,V54)

object V53;register object V54;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if((V53)!=Cnil){
	goto T321;}
	if(type_of(car((V54)))==t_symbol){
	goto T322;}
	goto T321;
	goto T322;
T322:;
	V53= get(car((V54)),VV[40],Cnil);
	goto T321;
T321:;
	if(((V53))==Cnil){
	goto T327;}
	if((VV[41])==(symbol_value(VV[42]))){
	goto T325;}
	goto T327;
T327:;
	if(!(type_of(symbol_value(VV[42]))==t_cons)){
	goto T326;}
	{register object x= VV[43],V55= symbol_value(VV[42]);
	while(!endp(V55))
	if(eql(x,V55->c.c_car)){
	goto T333;
	}else V55=V55->c.c_cdr;
	goto T326;}
	goto T333;
T333:;
	goto T325;
T325:;
	if(((V54))==Cnil){
	goto T334;}
	base[0]= (V54);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk282)();
	vs_top=sup;
	goto T334;
T334:;
	{object V56 = Ct;
	VMR4(V56)}
	goto T326;
T326:;
	{object V57 = Cnil;
	VMR4(V57)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for T1EVAL-WHEN	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	bds_check;
	{register object V58;
	check_arg(1);
	V58=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V59;
	register object V60;
	V59= Cnil;
	V60= Cnil;
	if(!(endp_prop((V58)))){
	goto T340;}
	(void)((*(LnkLI283))(VV[44],small_fixnum(1),small_fixnum(0)));
	goto T340;
T340:;
	{register object V61;
	register object V62;
	V61= car((V58));
	V62= car((V61));
	goto T347;
T347:;
	if(!(endp_prop((V61)))){
	goto T348;}
	goto T343;
	goto T348;
T348:;
	{object V63= (V62);
	if((V63!= VV[284]))goto T353;
	V59= Ct;
	goto T352;
	goto T353;
T353:;
	if((V63!= VV[43]))goto T355;
	V60= Ct;
	goto T352;
	goto T355;
T355:;
	if((V63!= VV[285]))goto T357;
	goto T352;
	goto T357;
T357:;
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[45],(V62))));}
	goto T352;
T352:;
	V61= cdr((V61));
	V62= car((V61));
	goto T347;}
	goto T343;
T343:;
	base[1]= car((V58));
	bds_bind(VV[42],base[1]);
	if(((V59))==Cnil){
	goto T365;}
	base[2]= (*(LnkLI286))(cdr((V58)));
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T365;
T365:;
	if(((V60))==Cnil){
	goto T368;}
	base[2]= make_cons(VV[46],cdr((V58)));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk282)();
	bds_unwind1;
	return;
	goto T368;
T368:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;}
	}
}
/*	local entry for function T1PROGN	*/

static object LI6(V65)

object V65;
{	 VMB6 VMS6 VMV6
	bds_check;
	goto TTL;
TTL:;
	if(!(equal(car((V65)),VV[47]))){
	goto T372;}
	bds_bind(VV[48],Ct);
	{object V66 = (*(LnkLI286))(cdr((V65)));
	bds_unwind1;
	VMR6(V66)}
	goto T372;
T372:;
	{register object V67;
	register object V68;
	V67= (V65);
	V68= car((V67));
	goto T377;
T377:;
	if(!(endp_prop((V67)))){
	goto T378;}
	{object V69 = Cnil;
	VMR6(V69)}
	goto T378;
T378:;
	base[1]= (V68);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	V67= cdr((V67));
	V68= car((V67));
	goto T377;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CMPFIX-ARGS	*/

static object LI7(V72,V73)

object V72;object V73;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V74;
	register object V75;
	V74= Cnil;
	base[1]= cadr((V72));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V75= vs_base[0];
	{register object V76;
	register object V77;
	V76= (V73);
	V77= car((V76));
	goto T396;
T396:;
	if(!(endp_prop((V76)))){
	goto T397;}
	goto T392;
	goto T397;
T397:;
	{register object x= car((V77)),V78= (V75);
	while(!endp(V78))
	if(eql(x,V78->c.c_car)){
	V74= V78;
	goto T402;
	}else V78=V78->c.c_cdr;
	V74= Cnil;}
	goto T402;
T402:;
	if((V74)==Cnil){
	goto T403;}
	{register object V79;
	register object V80;
	V79= (V74);
	V80= cadr((V77));
	if(type_of((V79))!=t_cons)FEwrong_type_argument(Scons,(V79));
	((V79))->c.c_car = (V80);}
	goto T403;
T403:;
	V76= cdr((V76));
	V77= car((V76));
	goto T396;}
	goto T392;
T392:;
	{register object x= VV[49],V81= (V75);
	while(!endp(V81))
	if(eql(x,V81->c.c_car)){
	V74= V81;
	goto T416;
	}else V81=V81->c.c_cdr;
	V74= Cnil;}
	goto T416;
T416:;
	if(((V74))==Cnil){
	goto T414;}
	{object V83;
	V83= append((V73),cdr((V74)));
	if(type_of(V74)!=t_cons)FEwrong_type_argument(Scons,V74);
	(V74)->c.c_cdr = (V83);
	goto T412;}
	goto T414;
T414:;
	V84= make_cons(VV[49],(V73));
	V75= append((V75),/* INLINE-ARGS */V84);
	goto T412;
T412:;
	{object V85 = listA(3,car((V72)),(V75),cddr((V72)));
	VMR7(V85)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFUN	*/

static object LI8(V87)

object V87;
{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	{object V88;
	V88= symbol_value(VV[50]);
	bds_bind(VV[52],Cnil);
	if(endp_prop((V87))){
	goto T422;}
	if(!(endp_prop(cdr((V87))))){
	goto T421;}
	goto T422;
T422:;
	V90 = make_fixnum((long)length((V87)));
	(void)((*(LnkLI283))(VV[51],small_fixnum(2),V90));
	goto T421;
T421:;
	if(type_of(car((V87)))==t_symbol){
	goto T426;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[53],car((V87)))));
	goto T426;
T426:;
	V91= make_cons(VV[51],(V87));
	(void)((*(LnkLI267))(Cnil,/* INLINE-ARGS */V91));
	goto T431;
T431:;
	setq(VV[6],Ct);
	setq(VV[54],Cnil);
	{register object V92;
	object V93;
	object V94;
	register object V95;{object V96;
	V96= get(car((V87)),VV[60],Cnil);
	if(V96==Cnil)goto T438;
	V93= V96;
	goto T437;
	goto T438;
T438:;}
	setq(VV[61],number_plus(symbol_value(VV[61]),small_fixnum(1)));
	V93= symbol_value(VV[61]);
	goto T437;
T437:;
	V95= car((V87));
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	V92= Cnil;
	bds_bind(VV[59],Cnil);
	V94= Cnil;
	V92= (VFUN_NARGS=2,(*(LnkLI287))(cdr((V87)),(V95)));
	if(!(eql((V88),symbol_value(VV[50])))){
	goto T445;}
	goto T444;
	goto T445;
T445:;
	(void)(structure_set(cadr((V92)),VV[62],4,Ct));
	goto T444;
T444:;
	V97= structure_ref(cadr((V92)),VV[62],1);
	(void)((*(LnkLI288))(/* INLINE-ARGS */V97));
	if((get((V95),VV[63],Cnil))==Cnil){
	goto T448;}
	{object V98;
	V98= make_fixnum((long)length(car(caddr((V92)))));
	(void)(sputprop((V95),VV[63],(V98)));
	base[6]= (V98);
	base[7]= VV[65];
	base[8]= Ct;
	vs_top=(vs_base=base+6)+3;
	Lmake_list();
	vs_top=sup;
	V99= vs_base[0];
	V100= list(4,VV[64],(V95),V99,Ct);
	(void)((*(LnkLI289))(/* INLINE-ARGS */V100));}
	goto T448;
T448:;
	if((get((V95),VV[66],Cnil))==Cnil){
	goto T459;}
	{object V101;
	register object V102;
	V101= caddr((V92));
	V102= Cnil;
	if((cadr((V101)))==Cnil){
	goto T464;}
	goto T459;
	goto T464;
T464:;
	if((caddr((V101)))==Cnil){
	goto T466;}
	goto T459;
	goto T466;
T466:;
	if((cadddr((V101)))==Cnil){
	goto T468;}
	goto T459;
	goto T468;
T468:;
	if(((long)length(car((V101))))<(64)){
	goto T470;}
	goto T459;
	goto T470;
T470:;
	{register object V103;
	register object V104;
	object V105;
	V103= car((V101));
	V104= get((V95),VV[67],Cnil);
	V105= Cnil;
	goto T477;
T477:;
	if(!(endp_prop((V103)))){
	goto T478;}
	if(endp_prop((V104))){
	goto T481;}
	goto T473;
	goto T481;
T481:;
	if(((V102))==Cnil){
	goto T484;}
	V87= (*(LnkLI290))((V87),(V102));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T431;
	goto T484;
T484:;
	if(((V105))==Cnil){
	goto T472;}
	goto T473;
	goto T478;
T478:;
	{register object V106;
	V106= car((V103));
	if(!(equal(car((V104)),VV[68]))){
	goto T491;}
	goto T473;
	goto T491;
T491:;
	V107= structure_ref((V106),VV[69],1);
	if((/* INLINE-ARGS */V107)==(VV[70])){
	goto T497;}
	V108= structure_ref((V106),VV[69],1);
	if(!((/* INLINE-ARGS */V108)==(VV[71]))){
	goto T496;}
	if(!((car((V104)))==(Ct))){
	goto T496;}
	goto T497;
T497:;
	if((structure_ref((V106),VV[69],3))!=Cnil){
	goto T496;}
	V109= structure_ref((V106),VV[69],4);
	if(!((/* INLINE-ARGS */V109)==(VV[72]))){
	goto T495;}
	goto T496;
T496:;
	{object V110;
	V111= structure_ref((V106),VV[69],0);
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V112= vs_base[0];
	V110= list(2,/* INLINE-ARGS */V111,V112);
	V102= make_cons((V110),(V102));}
	goto T495;
T495:;
	V113= car((V104));
	V114= structure_ref((V106),VV[69],5);
	if(((*(LnkLI291))(/* INLINE-ARGS */V113,/* INLINE-ARGS */V114))==Cnil){
	goto T494;}
	{register object x= car((V104)),V115= VV[73];
	while(!endp(V115))
	if(eql(x,V115->c.c_car)){
	goto T489;
	}else V115=V115->c.c_cdr;}
	V116= structure_ref((V106),VV[69],4);
	if((/* INLINE-ARGS */V116)==(VV[74])){
	goto T489;}
	if((symbol_value(VV[75]))!=Cnil){
	goto T489;}
	V118= structure_ref(cadr((V92)),VV[62],0);
	{register object x= (V106),V117= /* INLINE-ARGS */V118;
	while(!endp(V117))
	if(eql(x,V117->c.c_car)){
	goto T519;
	}else V117=V117->c.c_cdr;
	goto T489;}
	goto T519;
T519:;
	goto T494;
T494:;
	if(((V102))!=Cnil){
	goto T520;}
	V119= structure_ref((V106),VV[69],0);
	(void)((VFUN_NARGS=3,(*(LnkLI266))(VV[76],(V95),/* INLINE-ARGS */V119)));
	goto T520;
T520:;
	V105= Ct;}
	goto T489;
T489:;
	V103= cdr((V103));
	V104= cdr((V104));
	goto T477;}
	goto T473;
T473:;
	goto T459;
	goto T472;
T472:;
	if(!(type_of((V93))==t_fixnum||
type_of((V93))==t_bignum||
type_of((V93))==t_ratio||
type_of((V93))==t_shortfloat||
type_of((V93))==t_longfloat||
type_of((V93))==t_complex)){
	goto T459;}}
	{object V120;
	V121= get((V95),VV[67],Cnil);
	V122= get((V95),VV[77],Cnil);
	V123= get((V95),VV[67],Cnil);
	V120= list(5,(V95),V121,V122,small_fixnum(3),(*(LnkLI292))((V93),V123));
	setq(VV[78],make_cons((V120),symbol_value(VV[78])));
	goto T457;}
	goto T459;
T459:;
	{object V124;
	V125= get((V95),VV[77],Cnil);
	V124= ((V125)==(Ct)?Ct:Cnil);
	if(((V124))==Cnil){
	goto T457;}}
	goto T457;
T457:;
	if((cadddr((V92)))==Cnil){
	goto T537;}
	V94= cadddr((V92));
	goto T537;
T537:;
	(void)((*(LnkLI293))());
	{object V126;
	V126= list(6,VV[51],(V95),(V93),(V92),(V94),(VV[59]->s.s_dbind));
	setq(VV[24],make_cons((V126),symbol_value(VV[24])));}
	{object V127;
	V127= make_cons((V95),(V93));
	setq(VV[79],make_cons((V127),symbol_value(VV[79])));
	V128= symbol_value(VV[79]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}}
	{object V129 = Cnil;
	bds_unwind1;
	VMR8(V129)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-INLINE-STRING	*/

static object LI9(V132,V133)

object V132;object V133;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	if(((V133))!=Cnil){
	goto T548;}
	base[0]= Cnil;
	base[1]= VV[80];
	base[2]= (V132);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V134 = vs_base[0];
	VMR9(V134)}
	goto T548;
T548:;
	{register object V135;
	V135= (VFUN_NARGS=7,(*(LnkLI294))(small_fixnum(100),VV[81],VV[82],VV[83],small_fixnum(0),VV[84],Ct));
	base[0]= (V135);
	base[1]= VV[85];
	base[2]= (V132);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{register object V136;
	register long V137;
	V137= 0;
	V136= (V133);
	goto T561;
T561:;
	if(!(endp_prop(cdr((V136))))){
	goto T562;}
	base[0]= (V135);
	base[1]= VV[86];
	base[2]= make_fixnum(V137);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T558;
	goto T562;
T562:;
	base[0]= (V135);
	base[1]= VV[87];
	base[2]= make_fixnum(V137);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V136= cdr((V136));
	V137= (long)(V137)+1;
	goto T561;}
	goto T558;
T558:;
	{object V138 = (V135);
	VMR9(V138)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CS-PUSH	*/

static object LI10(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V139;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T577;
	else {
	V139= first;}
	--narg; goto T578;
	goto T577;
T577:;
	V139= Cnil;
	goto T578;
T578:;
	{object V140;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V140= symbol_value(VV[88]);
	{object V141;
	if(((V139))==Cnil){
	goto T585;}
	V141= make_cons((V139),(V140));
	goto T583;
	goto T585;
T585:;
	V141= (V140);
	goto T583;
T583:;
	setq(VV[18],make_cons((V141),symbol_value(VV[18])));}
	{object V142 = (V140);
	VMR10(V142)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function F-TYPE	*/

static object LI11(V144)

register object V144;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	base[0]= (V144);
	base[1]= VV[69];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T588;}
	V144= structure_ref((V144),VV[69],5);
	goto T588;
T588:;
	if(((V144))==Cnil){
	goto T595;}
	base[0]= (V144);
	base[1]= VV[89];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk296)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T595;}
	{long V145 = 1;
	VMR11((object)V145)}
	goto T595;
T595:;
	{long V146 = 0;
	VMR11((object)V146)}
	base[0]=base[0];
}
/*	local entry for function PROCLAIMED-ARGD	*/

static object LI12(V149,V150)

register object V149;object V150;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{register long V151;
	register long V152;
	register object V153;
	register object V154;
	V151= (long)length((V149));
	V152= 8;
	V153= make_fixnum((long)(*(LnkLI297))((V150)));
	V154= Ct;
	goto T605;
T605:;
	if(eql(small_fixnum(0),(V153))){
	goto T607;}
	V151= (long)(V151)+((long)((fix((V153))) << (V152)));
	goto T607;
T607:;
	if(((V154))==Cnil){
	goto T611;}
	V152= 10;
	V154= Cnil;
	goto T611;
T611:;
	if(((V149))!=Cnil){
	goto T617;}
	{long V155 = V151;
	VMR12((object)V155)}
	goto T617;
T617:;
	V152= (long)(V152)+(2);
	{register object V157;
	V157= car((V149));
	V149= cdr((V149));
	V156= (V157);}
	V153= make_fixnum((long)(*(LnkLI297))(V156));
	goto T605;}
}
/*	local entry for function WT-IF-PROCLAIMED	*/

static object LI13(V161,V162,V163)

register object V161;object V162;object V163;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	if(((VFUN_NARGS=1,(*(LnkLI299))((V161))))==Cnil){
	goto T629;}
	{register object x= (V161),V164= symbol_value(VV[78]);
	while(!endp(V164))
	if(type_of(V164->c.c_car)==t_cons &&eql(x,V164->c.c_car->c.c_car)){
	goto T633;
	}else V164=V164->c.c_cdr;
	goto T632;}
	goto T633;
T633:;
	V165= list(2,VV[91],(V161));
	V166= (*(LnkLI301))(VV[92],(V162));
	V167= get((V161),VV[67],Cnil);
	V168= get((V161),VV[77],Cnil);
	V169 = make_fixnum((long)(*(LnkLI302))(V167,V168));
	V170= list(4,VV[90],/* INLINE-ARGS */V165,/* INLINE-ARGS */V166,V169);
	(void)((VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V170)));
	{object V171 = Ct;
	VMR13(V171)}
	goto T632;
T632:;
	{register object V172;
	register object V173;
	object V174;
	V172= make_fixnum((long)length(car(caddr((V163)))));
	V175= get((V161),VV[67],Cnil);
	V173= make_fixnum((long)length(V175));
	V177= get((V161),VV[67],Cnil);
	{register object x= VV[68],V176= V177;
	while(!endp(V176))
	if(eql(x,V176->c.c_car)){
	V174= V176;
	goto T641;
	}else V176=V176->c.c_cdr;
	V174= Cnil;}
	goto T641;
T641:;
	if(((V174))==Cnil){
	goto T644;}
	base[0]= (V172);
	vs_top=(vs_base=base+0)+1;
	Lmonotonically_nonincreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T646;}
	goto T637;
	goto T646;
T646:;{object V178;
	V179 = make_fixnum((long)length((V174)));
	V178= number_minus((V173),V179);
	if(V178==Cnil)goto T649;
	goto T637;
	goto T649;
T649:;}
	V180 = make_fixnum((long)length((V174)));
	V181= number_minus((V173),V180);
	(void)((VFUN_NARGS=4,(*(LnkLI266))(VV[93],(V161),/* INLINE-ARGS */V181,(V172))));
	goto T637;
	goto T644;
T644:;
	if(eql((V172),(V173))){
	goto T652;}
	(void)((VFUN_NARGS=4,(*(LnkLI266))(VV[94],(V161),(V173),(V172))));
	goto T637;
	goto T652;
T652:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[95],(V161))));}
	goto T637;
T637:;
	{object V182 = Cnil;
	VMR13(V182)}
	goto T629;
T629:;
	{object V183 = Cnil;
	VMR13(V183)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VOLATILE	*/

static object LI14(V185)

object V185;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if((structure_ref((V185),VV[62],4))==Cnil){
	goto T655;}
	{object V186 = VV[96];
	VMR14(V186)}
	goto T655;
T655:;
	{object V187 = VV[97];
	VMR14(V187)}
	return Cnil;
}
/*	local entry for function REGISTER	*/

static object LI15(V189)

object V189;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(!(equal(symbol_value(VV[20]),VV[98]))){
	goto T658;}
	{long V190= fix(structure_ref((V189),VV[69],6));
	if(!((/* INLINE-ARGS */V190)>=(fix(symbol_value(VV[99]))))){
	goto T658;}}
	{object V191 = VV[100];
	VMR15(V191)}
	goto T658;
T658:;
	{object V192 = VV[101];
	VMR15(V192)}
	return Cnil;
}
/*	local entry for function VARARG-P	*/

static object LI16(V194)

object V194;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	V195= get((V194),VV[77],Cnil);
	if(equal(V195,Ct)){
	goto T662;}
	{object V196 = Cnil;
	VMR16(V196)}
	goto T662;
T662:;
	{register object V197;
	V197= get((V194),VV[67],Cnil);
	goto T667;
T667:;
	if(((V197))!=Cnil){
	goto T668;}
	{object V198 = Ct;
	VMR16(V198)}
	goto T668;
T668:;
	if(!(type_of((V197))==t_cons)){
	goto T673;}
	goto T672;
	goto T673;
T673:;
	{object V199 = Cnil;
	VMR16(V199)}
	goto T672;
T672:;
	if(!((car((V197)))==(Ct))){
	goto T676;}
	goto T675;
	goto T676;
T676:;
	if(!((car((V197)))==(VV[68]))){
	goto T678;}
	goto T675;
	goto T678;
T678:;
	{object V200 = Cnil;
	VMR16(V200)}
	goto T675;
T675:;
	V197= cdr((V197));
	goto T667;}
	return Cnil;
}
/*	local entry for function MAXARGS	*/

static object LI17(V202)

register object V202;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if((cadddr((V202)))!=Cnil){
	goto T683;}
	if((caddr((V202)))==Cnil){
	goto T684;}
	goto T683;
T683:;
	{object V203 = small_fixnum(64);
	VMR17(V203)}
	goto T684;
T684:;
	base[0]= make_fixnum((long)length(car((V202))));
	base[1]= make_fixnum((long)length(cadr((V202))));
	V204 = make_fixnum((long)length(car(cddddr((V202)))));
	base[2]= number_times(small_fixnum(2),V204);
	vs_top=(vs_base=base+0)+3;
	Lplus();
	vs_top=sup;
	{object V205 = vs_base[0];
	VMR17(V205)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-ADDRESS	*/

static object LI18(V208,V209)

object V208;object V209;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V210;
	V210= list(2,(V208),(V209));
	setq(VV[21],make_cons((V210),symbol_value(VV[21])));}
	{object V211;
	V211= symbol_value(VV[22]);
	setq(VV[22],number_plus(symbol_value(VV[22]),small_fixnum(1)));
	{object V212 = (V211);
	VMR18(V212)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFUN	*/

static object LI19(V218,V219,V220,V221,V222)

register object V218;register object V219;register object V220;object V221;object V222;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	if((get((V218),VV[102],Cnil))==Cnil){
	goto T696;}
	{object V223 = Cnil;
	VMR19(V223)}
	goto T696;
T696:;
	if(((V221))==Cnil){
	goto T699;}
	V224= list(4,VV[103],list(2,VV[91],(V218)),(V221),VV[104]);
	(void)((VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V224)));
	goto T699;
T699:;
	{object V225;
	V225= (*(LnkLI303))((V218),(V219),(V220));
	if(((V225))==Cnil){
	goto T705;}
	goto T702;
	goto T705;
T705:;
	if(((*(LnkLI304))((V218)))==Cnil){
	goto T708;}
	{object V226;
	V226= cadddr(caddr((V220)));
	if(((V226))==Cnil){
	goto T712;}
	V227= list(2,VV[91],(V218));
	V228= (*(LnkLI301))(VV[106],(V219));
	V229 = make_fixnum((long)length(car(caddr((V220)))));
	V230= (*(LnkLI305))(caddr((V220)));
	V231= (*(LnkLI298))(/* INLINE-ARGS */V230,small_fixnum(8));
	V232= number_plus(V229,/* INLINE-ARGS */V231);
	base[0]= Cnil;
	base[1]= VV[107];
	base[2]= (V219);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V233= vs_base[0];
	V234= list(5,VV[105],/* INLINE-ARGS */V227,/* INLINE-ARGS */V228,/* INLINE-ARGS */V232,(*(LnkLI301))(V233,VV[108]));
	(void)((VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V234)));
	goto T702;
	goto T712;
T712:;
	V235= list(2,VV[91],(V218));
	V236= (*(LnkLI301))(VV[110],(V219));
	V237 = make_fixnum((long)length(car(caddr((V220)))));
	V238= (*(LnkLI305))(caddr((V220)));
	V239= (*(LnkLI298))(/* INLINE-ARGS */V238,small_fixnum(8));
	V240= list(4,VV[109],/* INLINE-ARGS */V235,/* INLINE-ARGS */V236,number_plus(V237,/* INLINE-ARGS */V239));
	(void)((VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V240)));
	goto T702;}
	goto T708;
T708:;
	if(!(type_of((V219))==t_fixnum||
type_of((V219))==t_bignum||
type_of((V219))==t_ratio||
type_of((V219))==t_shortfloat||
type_of((V219))==t_longfloat||
type_of((V219))==t_complex)){
	goto T719;}
	princ_str("\nstatic void L",VV[31]);
	(void)((*(LnkLI277))((V219)));
	princ_str("();",VV[31]);
	V241= list(2,VV[91],(V218));
	V242= list(3,VV[111],/* INLINE-ARGS */V241,(*(LnkLI301))(VV[112],(V219)));
	(void)((VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V242)));
	goto T702;
	goto T719;
T719:;
	princ_char(10,VV[31]);
	(void)((*(LnkLI277))((V219)));
	princ_str("();",VV[31]);
	V243= list(2,VV[91],(V218));
	V244= list(3,VV[111],/* INLINE-ARGS */V243,(*(LnkLI301))(VV[113],(V219)));
	(void)((VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V244)));}
	goto T702;
T702:;
	if(!(number_compare(symbol_value(VV[114]),small_fixnum(2))<0)){
	goto T730;}
	{object V245 = sputprop((V218),VV[115],Ct);
	VMR19(V245)}
	goto T730;
T730:;
	{object V246 = Cnil;
	VMR19(V246)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-DEBUG	*/

static object LI20(V249,V250)

object V249;object V250;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V251 = putprop((V249),(V250),VV[116]);
	VMR20(V251)}
	return Cnil;
}
/*	local entry for function T3DEFUN	*/

static object LI21(V257,V258,V259,V260,V261)

register object V257;register object V258;register object V259;object V260;object V261;
{	 VMB21 VMS21 VMV21
	bds_check;
	goto TTL;
TTL:;
	{register object V262;
	V262= Cnil;
	bds_bind(VV[0],list(2,VV[51],(V257)));
	bds_bind(VV[20],(*(LnkLI306))(cadr((V259))));
	bds_bind(VV[117],Cnil);
	{register object V263;
	register object V264;
	V263= symbol_value(VV[78]);
	V264= car((V263));
	goto T742;
T742:;
	if(!(endp_prop((V263)))){
	goto T743;}
	goto T737;
	goto T743;
T743:;{object V265;
	base[4]= cadddr((V264));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk307)();
	vs_top=sup;
	V265= vs_base[0];
	if(V265==Cnil)goto T748;
	goto T747;
	goto T748;
T748:;}
	base[4]= VV[118];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T747;
T747:;
	if((car((V264)))==((V257))){
	goto T753;}
	goto T752;
	goto T753;
T753:;
	if((cadr(cddddr((V264))))==Cnil){
	goto T755;}
	goto T752;
	goto T755;
T755:;
	V262= (V264);
	if(((V262))==Cnil){
	goto T737;}
	goto T738;
	goto T752;
T752:;
	V263= cdr((V263));
	V264= car((V263));
	goto T742;}
	goto T738;
T738:;
	if(((VFUN_NARGS=1,(*(LnkLI299))((V257))))!=Cnil){
	goto T763;}
	{object V266;
	V266= list(4,(V257),(V258),cadr((V262)),caddr((V262)));
	setq(VV[29],make_cons((V266),symbol_value(VV[29])));}
	goto T763;
T763:;
	V267= structure_ref(cadr((V259)),VV[62],1);
	(void)((*(LnkLI308))(/* INLINE-ARGS */V267,small_fixnum(0)));
	base[3]= VV[119];
	{object V268= caddr((V262));
	if((V268!= VV[89]))goto T771;
	base[4]= VV[120];
	goto T770;
	goto T771;
T771:;
	if((V268!= VV[142]))goto T772;
	base[4]= VV[121];
	goto T770;
	goto T772;
T772:;
	if((V268!= VV[143]))goto T773;
	base[4]= VV[122];
	goto T770;
	goto T773;
T773:;
	if((V268!= VV[144]))goto T774;
	base[4]= VV[123];
	goto T770;
	goto T774;
T774:;
	base[4]= VV[124];}
	goto T770;
T770:;
	base[5]= (V257);
	base[6]= (V258);
	base[7]= (V259);
	base[8]= (V261);
	base[9]= (V262);
	vs_top=(vs_base=base+3)+7;
	(void) (*Lnk309)();
	vs_top=sup;
	goto T735;
	goto T737;
T737:;
	if(((*(LnkLI304))((V257)))==Cnil){
	goto T781;}
	V269= structure_ref(cadr((V259)),VV[62],1);
	(void)((*(LnkLI308))(/* INLINE-ARGS */V269,small_fixnum(0)));
	base[3]= VV[125];
	base[4]= VV[124];
	base[5]= (V257);
	base[6]= (V258);
	base[7]= (V259);
	base[8]= (V261);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk309)();
	vs_top=sup;
	goto T735;
	goto T781;
T781:;
	V270= structure_ref(cadr((V259)),VV[62],1);
	(void)((*(LnkLI308))(/* INLINE-ARGS */V270,small_fixnum(2)));
	base[3]= VV[126];
	base[4]= VV[127];
	base[5]= (V257);
	base[6]= (V258);
	base[7]= (V259);
	base[8]= (V261);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk309)();
	vs_top=sup;
	goto T735;
T735:;
	(void)((*(LnkLI310))((V258)));
	{object V271 = (*(LnkLI311))((V257),(V259));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR21(V271)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for T3DEFUN-AUX	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	bds_check;
	{object V272;
	object V273;
	if(vs_top-vs_base<2) too_few_arguments();
	V272=(base[0]);
	bds_bind(VV[128],base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V273=(base[2]);
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
	base[16]= (V272);
	{object V274;
	V274= (V273);
	 vs_top=base+17;
	 while(!endp(V274))
	 {vs_push(car(V274));V274=cdr(V274);}
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

static object LI23(V280,V281,V282,V283,V284)

object V280;object V281;object V282;object V283;object V284;
{	 VMB23 VMS23 VMV23
	bds_check;
	goto TTL;
TTL:;
	{object V285;
	object V286;
	V285= Cnil;
	V286= caaddr((V282));
	{register object V287;
	object V288;
	V288= cadr((V284));
	V287= (V286);
	goto T808;
T808:;
	if(!(endp_prop((V287)))){
	goto T809;}
	goto T805;
	goto T809;
T809:;
	V289= structure_ref(car((V287)),VV[69],1);
	if(!((/* INLINE-ARGS */V289)==(VV[71]))){
	goto T815;}
	{object V290;
	V291= car((V287));
	V292= structure_ref(car((V287)),VV[69],4);
	V290= make_cons(/* INLINE-ARGS */V291,/* INLINE-ARGS */V292);
	V285= make_cons((V290),(V285));
	goto T813;}
	goto T815;
T815:;
	V293= car((V287));
	{object V295= car((V288));
	if((V295!= VV[89]))goto T820;
	V294= VV[89];
	goto T819;
	goto T820;
T820:;
	if((V295!= VV[142]))goto T821;
	V294= VV[142];
	goto T819;
	goto T821;
T821:;
	if((V295!= VV[143]))goto T822;
	V294= VV[143];
	goto T819;
	goto T822;
T822:;
	if((V295!= VV[144]))goto T823;
	V294= VV[144];
	goto T819;
	goto T823;
T823:;
	V294= VV[74];}
	goto T819;
T819:;
	(void)(structure_set(/* INLINE-ARGS */V293,VV[69],1,V294));
	goto T813;
T813:;
	V296= car((V287));
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	(void)(structure_set(/* INLINE-ARGS */V296,VV[69],4,symbol_value(VV[88])));
	V287= cdr((V287));
	V288= cdr((V288));
	goto T808;}
	goto T805;
T805:;
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[145],(V280))));
	princ_str("\nstatic ",VV[31]);
	base[1]= (*(LnkLI280))(caddr((V284)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V297= vs_base[0];
	(void)((*(LnkLI277))(V297));
	princ_str("LI",VV[31]);
	(void)((*(LnkLI277))((V281)));
	princ_str("();",VV[31]);
	princ_str("\nstatic ",VV[25]);
	base[1]= (*(LnkLI280))(caddr((V284)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk281)();
	vs_top=sup;
	V298= vs_base[0];
	(void)((*(LnkLI274))(V298));
	princ_str("LI",VV[25]);
	(void)((*(LnkLI274))((V281)));
	princ_char(40,VV[25]);
	(void)((*(LnkLI313))((V286),cadr((V284))));
	{object V299;
	V299= symbol_value(VV[136]);
	if((symbol_value(VV[147]))==Cnil){
	goto T851;}
	base[1]= make_cons((V280),(V286));
	goto T849;
	goto T851;
T851:;
	base[1]= Cnil;
	goto T849;
T849:;
	bds_bind(VV[146],base[1]);
	bds_bind(VV[134],symbol_value(VV[134]));
	princ_str("\n{	",VV[25]);
	V300= structure_ref(cadr((V282)),VV[62],1);
	(void)((*(LnkLI314))(/* INLINE-ARGS */V300,(V281),VV[148]));
	princ_str(" VMB",VV[25]);
	(void)((*(LnkLI274))((V299)));
	princ_str(" VMS",VV[25]);
	(void)((*(LnkLI274))((V299)));
	princ_str(" VMV",VV[25]);
	(void)((*(LnkLI274))((V299)));
	if(((V283))==Cnil){
	goto T863;}
	princ_str("\n	bds_check;",VV[25]);
	goto T863;
T863:;
	if((symbol_value(VV[149]))==Cnil){
	goto T867;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T867;
T867:;
	if(((VV[146]->s.s_dbind))==Cnil){
	goto T871;}
	(VV[134]->s.s_dbind)= make_cons(VV[150],(VV[134]->s.s_dbind));
	princ_str("\n	goto TTL;",VV[25]);
	princ_str("\nTTL:;",VV[25]);
	goto T871;
T871:;
	{register object V302;
	register object V303;
	V302= (V285);
	V303= car((V302));
	goto T883;
T883:;
	if(!(endp_prop((V302)))){
	goto T884;}
	goto T879;
	goto T884;
T884:;
	princ_str("\n	bds_bind(VV[",VV[25]);
	(void)((*(LnkLI274))(cdr((V303))));
	princ_str("],V",VV[25]);
	V304= structure_ref(car((V303)),VV[69],4);
	(void)((*(LnkLI274))(/* INLINE-ARGS */V304));
	princ_str(");",VV[25]);
	(VV[134]->s.s_dbind)= make_cons(VV[151],(VV[134]->s.s_dbind));
	(void)(structure_set(car((V303)),VV[69],1,VV[71]));
	(void)(structure_set(car((V303)),VV[69],4,cdr((V303))));
	V302= cdr((V302));
	V303= car((V302));
	goto T883;}
	goto T879;
T879:;
	base[3]= caddr(cddr((V282)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk315)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T907;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T907;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T907;}
	goto T905;
	goto T907;
T907:;
	princ_str("\n	base[0]=base[0];",VV[25]);
	goto T905;
T905:;
	V306= (*(LnkLI280))(caddr((V284)));
	if(!(equal(VV[152],/* INLINE-ARGS */V306))){
	goto T914;}
	princ_str("\n	return Cnil;",VV[25]);
	goto T914;
T914:;
	princ_str("\n}",VV[25]);
	{object V307 = (*(LnkLI316))((V299),caddr((V284)));
	bds_unwind1;
	bds_unwind1;
	VMR23(V307)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-UP-VAR-CVS	*/

static object LI24(V309)

object V309;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	if((symbol_value(VV[153]))==Cnil){
	goto T921;}
	V310= (*(LnkLI317))();
	{object V311 = structure_set((V309),VV[69],2,/* INLINE-ARGS */V310);
	VMR24(V311)}
	goto T921;
T921:;
	V312= (*(LnkLI318))();
	{object V313 = structure_set((V309),VV[69],2,/* INLINE-ARGS */V312);
	VMR24(V313)}
	return Cnil;
}
/*	local entry for function T3DEFUN-VARARG	*/

static object LI25(V318,V319,V320,V321)

object V318;object V319;object V320;object V321;
{	 VMB25 VMS25 VMV25
	bds_check;
	goto TTL;
TTL:;
	{object V322;
	register object V323;
	object V324;
	object V325;
	object V326;
	object V327;
	object V328;
	object V329;
	V322= Cnil;
	bds_bind(VV[153],Cnil);
	base[1]= Cnil;
	V323= Cnil;
	V324= Ct;
	V325= Cnil;
	bds_bind(VV[154],small_fixnum(0));
	V326= Cnil;
	V327= caddr((V320));
	V328= Cnil;{object V330;
	V330= caddr((V327));
	if(V330==Cnil)goto T931;
	V329= V330;
	goto T930;
	goto T931;
T931:;}{object V331;
	V331= cadr((V327));
	if(V331==Cnil)goto T933;
	V329= V331;
	goto T930;
	goto T933;
T933:;}
	V329= cadddr((V327));
	goto T930;
T930:;
	{object V332;
	register object V333;
	V332= car((V327));
	V333= car((V332));
	goto T939;
T939:;
	if(!(endp_prop((V332)))){
	goto T940;}
	goto T935;
	goto T940;
T940:;
	{object V334;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V334= list(2,VV[155],symbol_value(VV[88]));
	V322= make_cons((V334),(V322));}
	V332= cdr((V332));
	V333= car((V332));
	goto T939;}
	goto T935;
T935:;
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[156],(V318))));
	{object V335;
	V335= VV[157];
	princ_str("\nstatic object LI",VV[25]);
	(void)((*(LnkLI274))((V319)));
	princ_char(40,VV[25]);
	if(((V322))==Cnil){
	goto T959;}
	{object V336;
	V336= (V322);
	goto T963;
T963:;
	if(((V336))!=Cnil){
	goto T964;}
	goto T959;
	goto T964;
T964:;
	princ_str("object ",VV[25]);
	(void)((*(LnkLI274))(car((V336))));
	V335= (VFUN_NARGS=3,(*(LnkLI319))(VV[158],(V335),VV[159]));
	if(!((cdr((V336)))==Cnil)){
	goto T974;}
	goto T973;
	goto T974;
T974:;
	princ_char(44,VV[25]);
	V335= (VFUN_NARGS=3,(*(LnkLI319))(VV[158],(V335),VV[160]));
	goto T973;
T973:;
	V336= cdr((V336));
	goto T963;}
	goto T959;
T959:;
	if(((V329))==Cnil){
	goto T982;}
	if(((V322))==Cnil){
	goto T985;}
	princ_char(44,VV[25]);
	V335= (VFUN_NARGS=3,(*(LnkLI319))(VV[158],(V335),VV[161]));
	goto T985;
T985:;
	princ_str("object first,...",VV[25]);
	V335= (VFUN_NARGS=3,(*(LnkLI319))(VV[158],(V335),VV[162]));
	goto T982;
T982:;
	princ_char(41,VV[25]);
	princ_str("\nstatic object LI",VV[31]);
	(void)((*(LnkLI277))((V319)));
	princ_char(40,VV[31]);
	(void)((*(LnkLI277))((V335)));
	princ_str(");",VV[31]);}
	{object V337;
	V337= symbol_value(VV[136]);
	if(symbol_value(VV[147])==Cnil){
	base[5]= Cnil;
	goto T1002;}
	if((caddr((V327)))==Cnil){
	goto T1003;}
	base[5]= Cnil;
	goto T1002;
	goto T1003;
T1003:;
	{object V338;
	object V339;
	V338= car((V327));
	V339= car((V338));
	goto T1010;
T1010:;
	if(!(endp_prop((V338)))){
	goto T1011;}
	goto T1005;
	goto T1011;
T1011:;
	if((structure_ref((V339),VV[69],3))==Cnil){
	goto T1015;}
	goto T1006;
	goto T1015;
T1015:;
	V338= cdr((V338));
	V339= car((V338));
	goto T1010;}
	goto T1006;
T1006:;
	base[5]= Cnil;
	goto T1002;
	goto T1005;
T1005:;
	if((cadr((V327)))==Cnil){
	goto T1023;}
	base[5]= Cnil;
	goto T1002;
	goto T1023;
T1023:;
	if((car(cddddr((V327))))==Cnil){
	goto T1025;}
	base[5]= Cnil;
	goto T1002;
	goto T1025;
T1025:;
	base[5]= make_cons((V318),car((V327)));
	goto T1002;
T1002:;
	bds_bind(VV[146],base[5]);
	bds_bind(VV[134],symbol_value(VV[134]));
	princ_str("\n{	",VV[25]);
	if(((V329))==Cnil){
	goto T1029;}
	princ_str("\n	va_list ap;",VV[25]);
	goto T1029;
T1029:;
	princ_str("\n	int narg = VFUN_NARGS;",VV[25]);
	V340= structure_ref(cadr((V320)),VV[62],1);
	(void)((*(LnkLI314))(/* INLINE-ARGS */V340,(V319),VV[148]));
	princ_str(" VMB",VV[25]);
	(void)((*(LnkLI274))((V337)));
	princ_str(" VMS",VV[25]);
	(void)((*(LnkLI274))((V337)));
	princ_str(" VMV",VV[25]);
	(void)((*(LnkLI274))((V337)));
	if(((V321))==Cnil){
	goto T1043;}
	princ_str("\n	bds_check;",VV[25]);
	goto T1043;
T1043:;
	if((symbol_value(VV[149]))==Cnil){
	goto T1047;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T1047;
T1047:;
	if((V329)!=Cnil){
	goto T1051;}
	princ_str("\n	if ( narg!= ",VV[25]);
	V341 = make_fixnum((long)length((V322)));
	(void)((*(LnkLI274))(V341));
	princ_str(") vfun_wrong_number_of_args(small_fixnum(",VV[25]);
	V342 = make_fixnum((long)length((V322)));
	(void)((*(LnkLI274))(V342));
	princ_str("));",VV[25]);
	goto T1051;
T1051:;
	{object V343;
	object V344;
	V343= car((V327));
	V344= car((V343));
	goto T1062;
T1062:;
	if(!(endp_prop((V343)))){
	goto T1063;}
	goto T1058;
	goto T1063;
T1063:;
	base[9]= (V344);
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	V343= cdr((V343));
	V344= car((V343));
	goto T1062;}
	goto T1058;
T1058:;
	{object V345;
	object V346;
	V345= cadr((V327));
	V346= car((V345));
	goto T1078;
T1078:;
	if(!(endp_prop((V345)))){
	goto T1079;}
	goto T1074;
	goto T1079;
T1079:;
	base[9]= car((V346));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((caddr((V346)))==Cnil){
	goto T1085;}
	base[9]= caddr((V346));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	goto T1085;
T1085:;
	V345= cdr((V345));
	V346= car((V345));
	goto T1078;}
	goto T1074;
T1074:;
	if((caddr((V327)))==Cnil){
	goto T1094;}
	base[7]= caddr((V327));
	vs_top=(vs_base=base+7)+1;
	L26(base);
	vs_top=sup;
	goto T1094;
T1094:;
	{object V347;
	object V348;
	V347= car(cddddr((V327)));
	V348= car((V347));
	goto T1101;
T1101:;
	if(!(endp_prop((V347)))){
	goto T1102;}
	goto T1057;
	goto T1102;
T1102:;
	base[9]= cadr((V348));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((cadddr((V348)))==Cnil){
	goto T1108;}
	base[9]= cadddr((V348));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	goto T1108;
T1108:;
	V347= cdr((V347));
	V348= car((V347));
	goto T1101;}
	goto T1057;
T1057:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1119;}
	goto T1117;
	goto T1119;
T1119:;
	princ_str("\n	Vcs[0]=Vcs[0];",VV[25]);
	goto T1117;
T1117:;
	if((cadr((V327)))!=Cnil){
	goto T1123;}
	if((caddr((V327)))!=Cnil){
	goto T1123;}
	if((cadddr((V327)))==Cnil){
	goto T1122;}
	goto T1123;
T1123:;
	if(((V328))!=Cnil){
	goto T1122;}
	V328= Ct;
	princ_str("\n	va_start(ap,first);",VV[25]);
	goto T1122;
T1122:;
	if((symbol_value(VV[163]))!=Cnil){
	goto T1136;}
	if((symbol_value(VV[164]))==Cnil){
	goto T1134;}
	goto T1136;
T1136:;
	if((car((V327)))==Cnil){
	goto T1134;}
	princ_str("\n	if(narg <",VV[25]);
	V349 = make_fixnum((long)length(car((V327))));
	(void)((*(LnkLI274))(V349));
	princ_str(") too_few_arguments();",VV[25]);
	goto T1134;
T1134:;
	{object V350;
	object V351;
	V350= car((V327));
	V351= car((V350));
	goto T1148;
T1148:;
	if(!(endp_prop((V350)))){
	goto T1149;}
	goto T1144;
	goto T1149;
T1149:;
	(void)((*(LnkLI320))((V351)));
	V350= cdr((V350));
	V351= car((V350));
	goto T1148;}
	goto T1144;
T1144:;
	{object V352;
	object V353;
	V352= cadr((V327));
	V353= car((V352));
	goto T1163;
T1163:;
	if(!(endp_prop((V352)))){
	goto T1164;}
	goto T1159;
	goto T1164;
T1164:;
	(void)((*(LnkLI320))(car((V353))));
	V352= cdr((V352));
	V353= car((V352));
	goto T1163;}
	goto T1159;
T1159:;
	if((caddr((V327)))==Cnil){
	goto T1174;}
	(void)((*(LnkLI320))(caddr((V327))));
	goto T1174;
T1174:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1180;}
	V325= symbol_value(VV[129]);
	goto T1178;
	goto T1180;
T1180:;
	V325= symbol_value(VV[141]);
	goto T1178;
T1178:;
	{object V354;
	object V355;
	V354= car(cddddr((V327)));
	V355= car((V354));
	goto T1186;
T1186:;
	if(!(endp_prop((V354)))){
	goto T1187;}
	goto T1182;
	goto T1187;
T1187:;
	(void)((*(LnkLI320))(cadr((V355))));
	V354= cdr((V354));
	V355= car((V354));
	goto T1186;}
	goto T1182;
T1182:;
	{object V356;
	object V357;
	V356= car(cddddr((V327)));
	V357= car((V356));
	goto T1201;
T1201:;
	if(!(endp_prop((V356)))){
	goto T1202;}
	goto T1197;
	goto T1202;
T1202:;
	(void)((*(LnkLI320))(cadddr((V357))));
	V356= cdr((V356));
	V357= car((V356));
	goto T1201;}
	goto T1197;
T1197:;
	{object V358;
	object V359;
	V359= car((V327));
	V358= (V322);
	goto T1215;
T1215:;
	if(((V358))!=Cnil){
	goto T1216;}
	goto T1212;
	goto T1216;
T1216:;
	(void)((*(LnkLI321))(car((V359)),car((V358))));
	V358= cdr((V358));
	V359= cdr((V359));
	goto T1215;}
	goto T1212;
T1212:;
	if((cadr((V327)))==Cnil){
	goto T1225;}
	bds_bind(VV[133],symbol_value(VV[133]));
	bds_bind(VV[134],(VV[134]->s.s_dbind));
	bds_bind(VV[132],symbol_value(VV[132]));
	princ_str("\n	narg = narg - ",VV[25]);
	V360 = make_fixnum((long)length((V322)));
	(void)((*(LnkLI274))(V360));
	princ_char(59,VV[25]);
	{object V361;
	V361= Ct;
	{object V362;
	object V363;
	V362= cadr((V327));
	V363= car((V362));
	goto T1236;
T1236:;
	if(!(endp_prop((V362)))){
	goto T1237;}
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1228;
	goto T1237;
T1237:;
	{object V364;
	setq(VV[165],number_plus(symbol_value(VV[165]),small_fixnum(1)));
	V364= make_cons(symbol_value(VV[165]),Cnil);
	V323= make_cons((V364),(V323));}
	princ_str("\n	if (",VV[25]);
	if((cdr((V323)))==Cnil){
	goto T1250;}
	V365= VV[166];
	goto T1248;
	goto T1250;
T1250:;
	V365= VV[167];
	goto T1248;
T1248:;
	(void)((*(LnkLI274))(V365));
	princ_str("narg <= 0) ",VV[25]);
	if(type_of(car((V323)))!=t_cons)FEwrong_type_argument(Scons,car((V323)));
	(car((V323)))->c.c_cdr = Ct;
	(void)(car((V323)));
	princ_str("goto T",VV[25]);
	(void)((*(LnkLI274))(car(car((V323)))));
	princ_char(59,VV[25]);
	princ_str("\n	else {",VV[25]);
	if(((V328))!=Cnil){
	goto T1260;}
	V328= Ct;
	princ_str("\n	va_start(ap,first);",VV[25]);
	goto T1260;
T1260:;
	V366= car((V363));
	if(((V361))==Cnil){
	goto T1269;}
	V367= make_cons(VV[168],Cnil);
	goto T1267;
	goto T1269;
T1269:;
	V367= make_cons(VV[169],Cnil);
	goto T1267;
T1267:;
	(void)((*(LnkLI321))(/* INLINE-ARGS */V366,V367));
	V361= Cnil;
	princ_char(125,VV[25]);
	if((caddr((V363)))==Cnil){
	goto T1275;}
	(void)((*(LnkLI321))(caddr((V363)),Ct));
	goto T1275;
T1275:;
	V362= cdr((V362));
	V363= car((V362));
	goto T1236;}}
	goto T1228;
T1228:;
	V323= nreverse((V323));
	{object V368;
	setq(VV[165],number_plus(symbol_value(VV[165]),small_fixnum(1)));
	V368= make_cons(symbol_value(VV[165]),Cnil);
	princ_str("\n	--narg; ",VV[25]);
	if(type_of((V368))!=t_cons)FEwrong_type_argument(Scons,(V368));
	((V368))->c.c_cdr = Ct;
	princ_str("goto T",VV[25]);
	(void)((*(LnkLI274))(car((V368))));
	princ_char(59,VV[25]);
	{object V369;
	object V370;
	V369= cadr((V327));
	V370= car((V369));
	goto T1298;
T1298:;
	if(!(endp_prop((V369)))){
	goto T1299;}
	goto T1294;
	goto T1299;
T1299:;
	if((cdr(car((V323))))==Cnil){
	goto T1303;}
	princ_str("\n	goto T",VV[25]);
	(void)((*(LnkLI274))(car(car((V323)))));
	princ_char(59,VV[25]);
	princ_str("\nT",VV[25]);
	(void)((*(LnkLI274))(car(car((V323)))));
	princ_str(":;",VV[25]);
	goto T1303;
T1303:;
	{object V371;
	V371= car((V323));
	V323= cdr((V323));}
	(void)((*(LnkLI322))(car((V370)),cadr((V370))));
	if((caddr((V370)))==Cnil){
	goto T1318;}
	(void)((*(LnkLI321))(caddr((V370)),Cnil));
	goto T1318;
T1318:;
	V369= cdr((V369));
	V370= car((V369));
	goto T1298;}
	goto T1294;
T1294:;
	if((cdr((V368)))==Cnil){
	goto T1225;}
	princ_str("\n	goto T",VV[25]);
	(void)((*(LnkLI274))(car((V368))));
	princ_char(59,VV[25]);
	princ_str("\nT",VV[25]);
	(void)((*(LnkLI274))(car((V368))));
	princ_str(":;",VV[25]);}
	goto T1225;
T1225:;
	if((caddr((V327)))==Cnil){
	goto T1335;}
	V326= (VFUN_NARGS=0,(*(LnkLI323))());
	{object V372;
	V372= cadr((V327));
	if(((V372))==Cnil){
	goto T1343;}
	goto T1340;
	goto T1343;
T1343:;
	princ_str("\n	narg= narg - ",VV[25]);
	V373 = make_fixnum((long)length(car((V327))));
	(void)((*(LnkLI274))(V373));
	princ_char(59,VV[25]);}
	goto T1340;
T1340:;
	if(((V328))!=Cnil){
	goto T1348;}
	V328= Ct;
	princ_str("\n	va_start(ap,first);",VV[25]);
	goto T1348;
T1348:;
	princ_str("\n	V",VV[25]);
	(void)((*(LnkLI274))((V326)));
	princ_str(" = ",VV[25]);
	V374= structure_ref(caddr((V327)),VV[69],5);
	if(!((/* INLINE-ARGS */V374)==(VV[171]))){
	goto T1359;}
	base[7]= Ct;
	goto T1358;
	goto T1359;
T1359:;
	base[7]= symbol_value(VV[170]);
	goto T1358;
T1358:;
	bds_bind(VV[170],base[7]);
	if((cadddr((V327)))==Cnil){
	goto T1363;}
	if(((VV[170]->s.s_dbind))==Cnil){
	goto T1366;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_MAKE_LIST(narg));",VV[25]);
	goto T1361;
	goto T1366;
T1366:;
	princ_str("make_list(narg);",VV[25]);
	goto T1361;
	goto T1363;
T1363:;
	if(((VV[170]->s.s_dbind))==Cnil){
	goto T1371;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));",VV[25]);
	goto T1361;
	goto T1371;
T1371:;
	princ_str("list_vector_new(narg,first,ap);",VV[25]);
	goto T1361;
T1361:;
	V375= caddr((V327));
	V376= list(2,VV[155],(V326));
	V377= (*(LnkLI321))(/* INLINE-ARGS */V375,/* INLINE-ARGS */V376);
	bds_unwind1;
	goto T1335;
T1335:;
	if((cadddr((V327)))==Cnil){
	goto T1375;}
	{object V378;
	V378= caddr((V327));
	if(((V378))==Cnil){
	goto T1381;}
	goto T1378;
	goto T1381;
T1381:;
	{object V379;
	V379= cadr((V327));
	if(((V379))==Cnil){
	goto T1385;}
	goto T1378;
	goto T1385;
T1385:;
	princ_str("\n	narg= narg - ",VV[25]);
	V380 = make_fixnum((long)length(car((V327))));
	(void)((*(LnkLI274))(V380));
	princ_char(59,VV[25]);}}
	goto T1378;
T1378:;
	if(((V328))!=Cnil){
	goto T1390;}
	V328= Ct;
	princ_str("\n	va_start(ap,first);",VV[25]);
	goto T1390;
T1390:;
	{object V381;
	object V382= car(cddddr((V327)));
	if(endp(V382)){
	V324= Cnil;
	goto T1397;}
	base[7]=V381=MMcons(Cnil,Cnil);
	goto T1398;
T1398:;
	(V381->c.c_car)= caddr((V382->c.c_car));
	V382=MMcdr(V382);
	if(endp(V382)){
	V324= base[7];
	goto T1397;}
	V381=MMcdr(V381)=MMcons(Cnil,Cnil);
	goto T1398;}
	goto T1397;
T1397:;
	{object V383;
	object V384;
	V384= make_fixnum((long)length(car(cddddr((V327)))));
	V383= Cnil;
	{register object V385;
	object V386;
	object V387;
	V385= (V324);
	V386= car(cddddr((V327)));
	V387= car((V386));
	goto T1406;
T1406:;
	if(((V385))!=Cnil){
	goto T1407;}
	goto T1401;
	goto T1407;
T1407:;
	if(!((caar((V385)))==(VV[172]))){
	goto T1412;}
	if((caddr(car((V385))))==(Cnil)){
	goto T1411;}
	goto T1412;
T1412:;
	V383= Ct;
	goto T1411;
T1411:;
	if(!((caar((V385)))==(VV[172]))){
	goto T1418;}
	{object V388;
	V388= caddr(car((V385)));
	if(!(((V388))==(Cnil))){
	goto T1424;}
	goto T1422;
	goto T1424;
T1424:;
	if(type_of((V388))==t_cons){
	goto T1426;}
	goto T1418;
	goto T1426;
T1426:;
	{register object x= car((V388)),V389= VV[173];
	while(!endp(V389))
	if(eql(x,V389->c.c_car)){
	goto T1422;
	}else V389=V389->c.c_cdr;
	goto T1418;}}
	goto T1422;
T1422:;
	V390= structure_ref(cadddr((V387)),VV[69],1);
	if((/* INLINE-ARGS */V390)==(VV[174])){
	goto T1417;}
	goto T1418;
T1418:;
	V383= Ct;
	if(type_of(V385)!=t_cons)FEwrong_type_argument(Scons,V385);
	(V385)->c.c_car = small_fixnum(0);
	goto T1417;
T1417:;
	V385= cdr((V385));
	V386= cdr((V386));
	V387= car((V386));
	goto T1406;}
	goto T1401;
T1401:;
	if(!(((long)length((V324)))>(15))){
	goto T1439;}
	V383= Ct;
	goto T1439;
T1439:;
	princ_str("\n	{",VV[25]);
	vs_base=vs_top;
	(void) (*Lnk324)();
	vs_top=sup;
	bds_bind(VV[25],symbol_value(VV[31]));
	if(((V383))==Cnil){
	goto T1447;}
	princ_char(10,VV[31]);
	princ_str("static object VK",VV[25]);
	(void)((*(LnkLI274))((V319)));
	princ_str("defaults[",VV[25]);
	V393 = make_fixnum((long)length((V324)));
	(void)((*(LnkLI274))(V393));
	princ_str("]={",VV[25]);
	{object V394;
	register object V395;
	V394= (V324);
	V395= Cnil;
	goto T1459;
T1459:;
	if(((V394))!=Cnil){
	goto T1460;}
	goto T1457;
	goto T1460;
T1460:;
	princ_str("(void *)",VV[25]);
	if(!(eql(car((V394)),small_fixnum(0)))){
	goto T1468;}
	princ_str("-1",VV[25]);
	goto T1466;
	goto T1468;
T1468:;
	V395= caddr(car((V394)));
	if(!(((V395))==(Cnil))){
	goto T1472;}
	princ_str("-2",VV[25]);
	goto T1466;
	goto T1472;
T1472:;
	if(!(type_of((V395))==t_cons)){
	goto T1477;}
	if(!((car((V395)))==(VV[175]))){
	goto T1477;}
	(void)((*(LnkLI274))(cadr((V395))));
	goto T1466;
	goto T1477;
T1477:;
	if(!(type_of((V395))==t_cons)){
	goto T1483;}
	if(!((car((V395)))==(VV[176]))){
	goto T1483;}
	V396= (*(LnkLI325))(caddr((V395)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V396));
	goto T1466;
	goto T1483;
T1483:;
	(void)((*(LnkLI326))());
	goto T1466;
T1466:;
	if((cdr((V394)))==Cnil){
	goto T1488;}
	princ_char(44,VV[25]);
	goto T1488;
T1488:;
	V394= cdr((V394));
	goto T1459;}
	goto T1457;
T1457:;
	princ_str("};",VV[25]);
	goto T1447;
T1447:;
	princ_char(10,VV[31]);
	princ_str("static struct { short n,allow_other_keys;",VV[25]);
	princ_str("object *defaults;",VV[25]);
	princ_str("\n	 KEYTYPE keys[",VV[25]);
	(void)((*(LnkLI274))((number_compare((V384),small_fixnum(1))>=0?((V384)):small_fixnum(1))));
	princ_str("];",VV[25]);
	princ_str("} LI",VV[25]);
	(void)((*(LnkLI274))((V319)));
	princ_str("key=",VV[25]);
	princ_char(123,VV[25]);
	V397 = make_fixnum((long)length(car(cddddr((V327)))));
	(void)((*(LnkLI274))(V397));
	princ_char(44,VV[25]);
	if((cadr(cddddr((V327))))==Cnil){
	goto T1515;}
	V398= small_fixnum(1);
	goto T1513;
	goto T1515;
T1515:;
	V398= small_fixnum(0);
	goto T1513;
T1513:;
	(void)((*(LnkLI274))(V398));
	princ_char(44,VV[25]);
	if(((V383))==Cnil){
	goto T1520;}
	princ_str("VK",VV[25]);
	(void)((*(LnkLI274))((V319)));
	princ_str("defaults",VV[25]);
	goto T1518;
	goto T1520;
T1520:;
	princ_str("Cstd_key_defaults",VV[25]);
	goto T1518;
T1518:;
	if((car(cddddr((V327))))==Cnil){
	goto T1526;}
	princ_str(",{",VV[25]);
	{object V399;
	V399= reverse(car(cddddr((V327))));
	goto T1534;
T1534:;
	if(((V399))!=Cnil){
	goto T1535;}
	goto T1531;
	goto T1535;
T1535:;
	princ_str("(void *)",VV[25]);
	V400= (*(LnkLI327))(caar((V399)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V400));
	if((cdr((V399)))==Cnil){
	goto T1543;}
	princ_char(44,VV[25]);
	goto T1543;
T1543:;
	V399= cdr((V399));
	goto T1534;}
	goto T1531;
T1531:;
	princ_char(125,VV[25]);
	goto T1526;
T1526:;
	princ_str("};",VV[25]);
	bds_unwind1;
	if((caddr((V327)))==Cnil){
	goto T1554;}
	princ_str("\n	parse_key_rest_new(",VV[25]);
	V401= list(2,VV[155],(V326));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V401));
	princ_char(44,VV[25]);
	goto T1552;
	goto T1554;
T1554:;
	princ_str("\n	parse_key_new_new(",VV[25]);
	goto T1552;
T1552:;
	if(!(eql(small_fixnum(0),symbol_value(VV[141])))){
	goto T1560;}
	setq(VV[141],small_fixnum(1));
	goto T1560;
T1560:;
	princ_str("narg,",VV[25]);
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1568;}
	V402= VV[177];
	goto T1566;
	goto T1568;
T1568:;
	V402= VV[178];
	goto T1566;
T1566:;
	(void)((*(LnkLI274))(V402));
	princ_char(43,VV[25]);
	(void)((*(LnkLI274))((V325)));
	princ_str(",(struct key *)&LI",VV[25]);
	(void)((*(LnkLI274))((V319)));
	princ_str("key,first,ap);",VV[25]);}
	goto T1375;
T1375:;
	{object V403;
	register object V404;
	V403= car(cddddr((V327)));
	V404= car((V403));
	goto T1579;
T1579:;
	if(!(endp_prop((V403)))){
	goto T1580;}
	goto T1575;
	goto T1580;
T1580:;
	{object V406;
	V406= car((V324));
	V324= cdr((V324));
	V405= (V406);}
	if(eql(small_fixnum(0),V405)){
	goto T1586;}
	(void)((*(LnkLI328))(cadr((V404))));
	goto T1584;
	goto T1586;
T1586:;
	princ_str("\n	if(",VV[25]);
	V407= structure_ref(cadr((V404)),VV[69],2);
	(void)((*(LnkLI329))(/* INLINE-ARGS */V407));
	princ_str("==0){",VV[25]);
	bds_bind(VV[133],symbol_value(VV[133]));
	bds_bind(VV[134],(VV[134]->s.s_dbind));
	bds_bind(VV[132],symbol_value(VV[132]));
	V408= (*(LnkLI322))(cadr((V404)),caddr((V404)));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V409= structure_ref(cadddr((V404)),VV[69],1);
	if((/* INLINE-ARGS */V409)==(VV[174])){
	goto T1598;}
	(void)((*(LnkLI321))(cadddr((V404)),Cnil));
	goto T1598;
T1598:;
	princ_str("\n	}else{",VV[25]);
	(void)((*(LnkLI328))(cadr((V404))));
	V410= structure_ref(cadddr((V404)),VV[69],1);
	if((/* INLINE-ARGS */V410)==(VV[174])){
	goto T1604;}
	(void)((*(LnkLI321))(cadddr((V404)),Ct));
	goto T1604;
T1604:;
	princ_char(125,VV[25]);
	goto T1584;
T1584:;
	V403= cdr((V403));
	V404= car((V403));
	goto T1579;}
	goto T1575;
T1575:;
	if(((VV[146]->s.s_dbind))==Cnil){
	goto T1613;}
	(VV[134]->s.s_dbind)= make_cons(VV[150],(VV[134]->s.s_dbind));
	princ_str("\n	goto TTL;",VV[25]);
	princ_str("\nTTL:;",VV[25]);
	goto T1613;
T1613:;
	base[7]= caddr(cddr((V320)));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk315)();
	vs_top=sup;
	if(((V328))==Cnil){
	goto T1623;}
	V328= Cnil;
	princ_str("\n	va_end(ap);",VV[25]);
	goto T1623;
T1623:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1631;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T1631;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T1631;}
	goto T1629;
	goto T1631;
T1631:;
	princ_str("\n	base[0]=base[0];",VV[25]);
	goto T1629;
T1629:;
	princ_str("\n	return Cnil;",VV[25]);
	princ_char(125,VV[25]);
	if((base[1])==Cnil){
	goto T1642;}
	princ_str("\n	}",VV[25]);
	goto T1642;
T1642:;
	(void)((*(LnkLI330))());
	V412= get((V318),VV[77],Cnil);
	{object V413 = (*(LnkLI316))((V337),V412);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR25(V413)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3DEFUN-NORMAL	*/

static object LI27(V418,V419,V420,V421)

object V418;register object V419;object V420;object V421;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[179],(V418))));
	if(!(type_of((V419))==t_fixnum||
type_of((V419))==t_bignum||
type_of((V419))==t_ratio||
type_of((V419))==t_shortfloat||
type_of((V419))==t_longfloat||
type_of((V419))==t_complex)){
	goto T1651;}
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI274))((V419)));
	princ_str("()",VV[25]);
	goto T1649;
	goto T1651;
T1651:;
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))((V419)));
	princ_str("()",VV[25]);
	goto T1649;
T1649:;
	princ_str("\n{",VV[25]);
	princ_str("register object *",VV[25]);
	(void)((*(LnkLI274))(symbol_value(VV[20])));
	princ_str("base=vs_base;",VV[25]);
	V422= structure_ref(cadr((V420)),VV[62],1);
	(void)((*(LnkLI314))(/* INLINE-ARGS */V422,(V419),VV[148]));
	princ_str("\n	register object *",VV[25]);
	(void)((*(LnkLI274))(symbol_value(VV[20])));
	princ_str("sup=base+VM",VV[25]);
	(void)((*(LnkLI274))(symbol_value(VV[136])));
	princ_char(59,VV[25]);
	princ_str(" VC",VV[25]);
	(void)((*(LnkLI274))(symbol_value(VV[136])));
	if((symbol_value(VV[163]))==Cnil){
	goto T1676;}
	princ_str("\n	vs_reserve(VM",VV[25]);
	(void)((*(LnkLI274))(symbol_value(VV[136])));
	princ_str(");",VV[25]);
	goto T1674;
	goto T1676;
T1676:;
	princ_str("\n	vs_check;",VV[25]);
	goto T1674;
T1674:;
	if(((V421))==Cnil){
	goto T1682;}
	princ_str("\n	bds_check;",VV[25]);
	goto T1682;
T1682:;
	if((symbol_value(VV[149]))==Cnil){
	goto T1686;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T1686;
T1686:;
	(void)((VFUN_NARGS=3,(*(LnkLI331))(caddr((V420)),caddr(cddr((V420))),(V418))));
	princ_str("\n}",VV[25]);
	{object V423;
	V423= make_cons(symbol_value(VV[136]),symbol_value(VV[130]));
	setq(VV[33],make_cons((V423),symbol_value(VV[33])));}
	princ_str("\n#define VC",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[136])));
	{object V424 = (*(LnkLI332))();
	VMR26(V424)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-V*-MACROS	*/

static object LI28(V427,V428)

register object V427;object V428;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V429;
	V429= make_cons((V427),symbol_value(VV[130]));
	setq(VV[33],make_cons((V429),symbol_value(VV[33])));}
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1704;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T1704;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T1704;}
	princ_str("\n#define VMB",VV[31]);
	(void)((*(LnkLI277))((V427)));
	goto T1702;
	goto T1704;
T1704:;
	princ_str("\n#define VMB",VV[31]);
	(void)((*(LnkLI277))((V427)));
	princ_char(32,VV[31]);
	princ_str("register object *",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[20])));
	princ_str("base=vs_top;",VV[31]);
	goto T1702;
T1702:;
	(void)((*(LnkLI332))());
	if((symbol_value(VV[138]))==Cnil){
	goto T1721;}
	princ_str("\n#define VMS",VV[31]);
	(void)((*(LnkLI277))((V427)));
	princ_char(32,VV[31]);
	princ_str(" register object *",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[20])));
	princ_str("sup=vs_top+",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[130])));
	princ_str(";vs_top=sup;",VV[31]);
	goto T1719;
	goto T1721;
T1721:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1732;}
	princ_str("\n#define VMS",VV[31]);
	(void)((*(LnkLI277))((V427)));
	goto T1719;
	goto T1732;
T1732:;
	princ_str("\n#define VMS",VV[31]);
	(void)((*(LnkLI277))((V427)));
	princ_str(" vs_top += ",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[130])));
	princ_char(59,VV[31]);
	goto T1719;
T1719:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1743;}
	princ_str("\n#define VMV",VV[31]);
	(void)((*(LnkLI277))((V427)));
	goto T1741;
	goto T1743;
T1743:;
	if((symbol_value(VV[163]))==Cnil){
	goto T1748;}
	princ_str("\n#define VMV",VV[31]);
	(void)((*(LnkLI277))((V427)));
	princ_str(" vs_reserve(",VV[31]);
	(void)((*(LnkLI277))(symbol_value(VV[130])));
	princ_str(");",VV[31]);
	goto T1741;
	goto T1748;
T1748:;
	princ_str("\n#define VMV",VV[31]);
	(void)((*(LnkLI277))((V427)));
	princ_str(" vs_check;",VV[31]);
	goto T1741;
T1741:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1759;}
	princ_str("\n#define VMR",VV[31]);
	(void)((*(LnkLI277))((V427)));
	princ_str("(VMT",VV[31]);
	(void)((*(LnkLI277))((V427)));
	princ_str(") return(VMT",VV[31]);
	(void)((*(LnkLI277))((V427)));
	princ_str(");",VV[31]);
	{object V430 = Cnil;
	VMR27(V430)}
	goto T1759;
T1759:;
	princ_str("\n#define VMR",VV[31]);
	(void)((*(LnkLI277))((V427)));
	princ_str("(VMT",VV[31]);
	(void)((*(LnkLI277))((V427)));
	princ_str(") vs_top=base ; return(VMT",VV[31]);
	(void)((*(LnkLI277))((V427)));
	princ_str(");",VV[31]);
	{object V431 = Cnil;
	VMR27(V431)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-REQUIREDS	*/

static object LI29(V434,V435)

object V434;object V435;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{register object V436;
	V436= (V434);
	goto T1777;
T1777:;
	if(!(endp_prop((V436)))){
	goto T1778;}
	goto T1775;
	goto T1778;
T1778:;
	{register object V437;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V437= symbol_value(VV[88]);
	(void)(structure_set(car((V436)),VV[69],4,(V437)));
	princ_char(86,VV[25]);
	(void)((*(LnkLI274))((V437)));}
	if(endp_prop(cdr((V436)))){
	goto T1788;}
	princ_char(44,VV[25]);
	goto T1788;
T1788:;
	V436= cdr((V436));
	goto T1777;}
	goto T1775;
T1775:;
	princ_str(")\n",VV[25]);
	if(((V434))==Cnil){
	goto T1798;}
	princ_char(10,VV[25]);
	{register object V438;
	register object V439;
	register object V440;
	V438= (V434);
	V439= (V435);
	V440= Cnil;
	goto T1802;
T1802:;
	if(!(endp_prop((V438)))){
	goto T1803;}
	princ_char(59,VV[25]);
	{object V441 = Cnil;
	VMR28(V441)}
	goto T1803;
T1803:;
	if(((V440))==Cnil){
	goto T1808;}
	princ_char(59,VV[25]);
	goto T1808;
T1808:;
	(void)((*(LnkLI274))(symbol_value(VV[20])));
	V442= (*(LnkLI333))(car((V438)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V442));
	V443= (*(LnkLI280))(car((V439)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V443));
	V440= car((V439));
	princ_char(86,VV[25]);
	V444= structure_ref(car((V438)),VV[69],4);
	(void)((*(LnkLI274))(/* INLINE-ARGS */V444));
	V438= cdr((V438));
	V439= cdr((V439));
	goto T1802;}
	goto T1798;
T1798:;
	{object V445 = Cnil;
	VMR28(V445)}
	return Cnil;
}
/*	local entry for function ADD-DEBUG-INFO	*/

static object LI30(V448,V449)

object V448;object V449;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{object V450;
	V450= Cnil;
	{object V451;
	V451= (number_compare(symbol_value(VV[114]),small_fixnum(2))>=0?Ct:Cnil);
	if(((V451))==Cnil){
	goto T1828;}
	{object V452 = (V451);
	VMR29(V452)}
	goto T1828;
T1828:;
	if((get((V448),VV[115],Cnil))!=Cnil){
	goto T1831;}
	{object V453 = (VFUN_NARGS=2,(*(LnkLI334))(VV[180],(V448)));
	VMR29(V453)}
	goto T1831;
T1831:;
	(void)(remprop((V448),VV[115]));
	{register object V454;
	V454= small_fixnum(0);
	{register object V455;
	register object V456;
	V455= structure_ref(cadr((V449)),VV[62],1);
	V456= car((V455));
	goto T1838;
T1838:;
	if(!(endp_prop((V455)))){
	goto T1839;}
	goto T1834;
	goto T1839;
T1839:;
	V457= structure_ref((V456),VV[69],2);
	if(!(type_of(/* INLINE-ARGS */V457)==t_cons)){
	goto T1843;}
	V458= structure_ref((V456),VV[69],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V458))==t_fixnum)){
	goto T1843;}
	V459= structure_ref((V456),VV[69],2);
	{object V460= cdr(/* INLINE-ARGS */V459);
	V454= (number_compare((V454),V460)>=0?((V454)):V460);}
	goto T1843;
T1843:;
	V455= cdr((V455));
	V456= car((V455));
	goto T1838;}
	goto T1834;
T1834:;
	base[0]= one_plus((V454));
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	V450= vs_base[0];
	{register object V461;
	register object V462;
	V461= structure_ref(cadr((V449)),VV[62],1);
	V462= car((V461));
	goto T1861;
T1861:;
	if(!(endp_prop((V461)))){
	goto T1862;}
	goto T1857;
	goto T1862;
T1862:;
	V463= structure_ref((V462),VV[69],2);
	if(!(type_of(/* INLINE-ARGS */V463)==t_cons)){
	goto T1866;}
	V464= structure_ref((V462),VV[69],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V464))==t_fixnum)){
	goto T1866;}
	{object V465;
	register object V467;
	V468= structure_ref((V462),VV[69],2);
	V465= cdr(/* INLINE-ARGS */V468);
	V467= structure_ref((V462),VV[69],0);
	if(type_of(nthcdr(fixint((V465)),V450))!=t_cons)FEwrong_type_argument(Scons,nthcdr(fixint((V465)),V450));
	(nthcdr(fixint((V465)),V450))->c.c_car = (V467);
	(void)(nthcdr(fixint((V465)),V450));}
	goto T1866;
T1866:;
	V461= cdr((V461));
	V462= car((V461));
	goto T1861;}
	goto T1857;
T1857:;
	(void)(sputprop((V448),VV[116],(V450)));
	{object V469;
	V469= get((V448),VV[116],Cnil);
	if(((V469))==Cnil){
	goto T1882;}
	if((cdr((V469)))!=Cnil){
	goto T1881;}
	if((car((V469)))==Cnil){
	goto T1882;}
	goto T1881;
T1881:;
	V470= list(2,VV[91],(V448));
	V471= list(3,VV[116],/* INLINE-ARGS */V470,list(2,VV[91],(V469)));
	{object V472 = (VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V471));
	VMR29(V472)}
	goto T1882;
T1882:;
	{object V473 = Cnil;
	VMR29(V473)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ANALYZE-REGS	*/

static object LI31(V476,V477)

object V476;object V477;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{object V478;
	V478= number_minus(symbol_value(VV[181]),(V477));
	if(!(number_compare(small_fixnum(0),symbol_value(VV[182]))==0)){
	goto T1890;}
	V479= (VFUN_NARGS=1,(*(LnkLI336))((V476)));
	{long V480 = (long)(*(LnkLI335))(/* INLINE-ARGS */V479,(V478));
	VMR30((object)V480)}
	goto T1890;
T1890:;
	{register object V481;
	register object V482;
	V481= Cnil;
	V482= Cnil;
	{register object V483;
	register object V484;
	V483= (V476);
	V484= car((V483));
	goto T1896;
T1896:;
	if(!(endp_prop((V483)))){
	goto T1897;}
	goto T1892;
	goto T1897;
T1897:;
	V486= structure_ref((V484),VV[69],5);
	{register object x= /* INLINE-ARGS */V486,V485= VV[183];
	while(!endp(V485))
	if(x==(V485->c.c_car)){
	goto T1904;
	}else V485=V485->c.c_cdr;
	goto T1903;}
	goto T1904;
T1904:;{object V487;
	{register object x= (V484),V488= (V482);
	while(!endp(V488))
	if(eql(x,V488->c.c_car)){
	V487= V488;
	goto T1906;
	}else V488=V488->c.c_cdr;
	V487= Cnil;}
	goto T1906;
T1906:;
	if(V487==Cnil)goto T1905;
	goto T1901;
	goto T1905;
T1905:;}
	{register object V489;
	V489= (V484);
	V482= make_cons((V489),(V482));
	goto T1901;}
	goto T1903;
T1903:;{object V490;
	{register object x= (V484),V491= (V481);
	while(!endp(V491))
	if(x==(V491->c.c_car)){
	V490= V491;
	goto T1910;
	}else V491=V491->c.c_cdr;
	V490= Cnil;}
	goto T1910;
T1910:;
	if(V490==Cnil)goto T1909;
	goto T1901;
	goto T1909;
T1909:;}
	{register object V492;
	V492= (V484);
	V482= make_cons((V492),(V482));}
	goto T1901;
T1901:;
	V483= cdr((V483));
	V484= car((V483));
	goto T1896;}
	goto T1892;
T1892:;
	(void)((*(LnkLI335))((V481),(V478)));
	{long V493 = (long)(*(LnkLI335))((V482),symbol_value(VV[182]));
	VMR30((object)V493)}}}
	base[0]=base[0];
}
/*	local entry for function ANALYZE-REGS1	*/

static object LI32(V496,V497)

object V496;object V497;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{register long V498;
	register long V499;
	long V500;
	long V501;
	register long V502;
	V498= 0;
	V499= 3;
	V500= 100000;
	V501= fix((V497));
	V502= 0;
	V496= (VFUN_NARGS=1,(*(LnkLI336))((V496)));
	goto T1927;
T1927:;
	{register object V503;
	object V504;
	V503= (V496);
	V504= car((V503));
	goto T1933;
T1933:;
	if(!(endp_prop((V503)))){
	goto T1934;}
	goto T1929;
	goto T1934;
T1934:;
	V498= fix(structure_ref((V504),VV[69],6));
	if(!((V498)>=(V499))){
	goto T1940;}
	V502= (long)(V502)+(1);
	if(!((V498)<(V500))){
	goto T1945;}
	V500= V498;
	goto T1945;
T1945:;
	if(!((V502)>(V501))){
	goto T1940;}
	goto T1928;
	goto T1940;
T1940:;
	V503= cdr((V503));
	V504= car((V503));
	goto T1933;}
	goto T1929;
T1929:;
	if(!((V502)<(V501))){
	goto T1956;}
	V499= (long)(V499)-(1);
	goto T1956;
T1956:;
	{register object V505;
	register object V506;
	V505= (V496);
	V506= car((V505));
	goto T1964;
T1964:;
	if(!(endp_prop((V505)))){
	goto T1965;}
	goto T1960;
	goto T1965;
T1965:;
	{long V507= fix(structure_ref((V506),VV[69],6));
	if(!((/* INLINE-ARGS */V507)<(V499))){
	goto T1969;}}
	(void)(structure_set((V506),VV[69],6,small_fixnum(0)));
	goto T1969;
T1969:;
	V505= cdr((V505));
	V506= car((V505));
	goto T1964;}
	goto T1960;
T1960:;
	{long V508 = V499;
	VMR31((object)V508)}
	goto T1928;
T1928:;
	V502= 0;
	V499= (long)(V500)+(1);
	V500= 1000000;
	goto T1927;}
	base[0]=base[0];
}
/*	local entry for function WT-GLOBAL-ENTRY	*/

static object LI33(V513,V514,V515,V516)

object V513;object V514;object V515;object V516;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	if((get((V513),VV[102],Cnil))==Cnil){
	goto T1984;}
	{object V517 = Cnil;
	VMR32(V517)}
	goto T1984;
T1984:;
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[186],(V513))));
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI274))((V514)));
	princ_str("()",VV[25]);
	princ_str("\n{	register object *base=vs_base;",VV[25]);
	if((symbol_value(VV[163]))!=Cnil){
	goto T1995;}
	if((symbol_value(VV[164]))==Cnil){
	goto T1994;}
	goto T1995;
T1995:;
	princ_str("\n	check_arg(",VV[25]);
	V518 = make_fixnum((long)length((V515)));
	(void)((*(LnkLI274))(V518));
	princ_str(");",VV[25]);
	goto T1994;
T1994:;
	princ_str("\n	base[0]=",VV[25]);
	{object V520= (V516);
	if((V520!= VV[89]))goto T2006;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T2008;}
	V519= VV[187];
	goto T2005;
	goto T2008;
T2008:;
	V519= VV[188];
	goto T2005;
	goto T2006;
T2006:;
	if((V520!= VV[142]))goto T2010;
	V519= VV[189];
	goto T2005;
	goto T2010;
T2010:;
	if((V520!= VV[143]))goto T2011;
	V519= VV[190];
	goto T2005;
	goto T2011;
T2011:;
	if((V520!= VV[144]))goto T2012;
	V519= VV[191];
	goto T2005;
	goto T2012;
T2012:;
	V519= VV[192];}
	goto T2005;
T2005:;
	(void)((*(LnkLI274))(V519));
	princ_str("(LI",VV[25]);
	(void)((*(LnkLI274))((V514)));
	princ_char(40,VV[25]);
	{register object V521;
	register long V522;
	V522= 0;
	V521= (V515);
	goto T2019;
T2019:;
	if(!(endp_prop((V521)))){
	goto T2020;}
	goto T2016;
	goto T2020;
T2020:;
	{object V524= car((V521));
	if((V524!= VV[89]))goto T2027;
	V523= VV[193];
	goto T2026;
	goto T2027;
T2027:;
	if((V524!= VV[142]))goto T2028;
	V523= VV[194];
	goto T2026;
	goto T2028;
T2028:;
	if((V524!= VV[143]))goto T2029;
	V523= VV[195];
	goto T2026;
	goto T2029;
T2029:;
	if((V524!= VV[144]))goto T2030;
	V523= VV[196];
	goto T2026;
	goto T2030;
T2030:;
	V523= VV[197];}
	goto T2026;
T2026:;
	(void)((*(LnkLI274))(V523));
	princ_str("(base[",VV[25]);
	V525 = make_fixnum(V522);
	(void)((*(LnkLI274))(V525));
	princ_str("])",VV[25]);
	if(endp_prop(cdr((V521)))){
	goto T2034;}
	princ_char(44,VV[25]);
	goto T2034;
T2034:;
	V521= cdr((V521));
	V522= (long)(V522)+1;
	goto T2019;}
	goto T2016;
T2016:;
	princ_str("));",VV[25]);
	princ_str("\n	vs_top=(vs_base=base)+1;",VV[25]);
	princ_str("\n}",VV[25]);
	{object V526 = Cnil;
	VMR32(V526)}
	return Cnil;
}
/*	local entry for function REP-TYPE	*/

static object LI34(V528)

object V528;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{object V529= (V528);
	if((V529!= VV[89]))goto T2047;
	{object V530 = VV[198];
	VMR33(V530)}
	goto T2047;
T2047:;
	if((V529!= VV[261]))goto T2048;
	{object V531 = VV[199];
	VMR33(V531)}
	goto T2048;
T2048:;
	if((V529!= VV[142]))goto T2049;
	{object V532 = VV[200];
	VMR33(V532)}
	goto T2049;
T2049:;
	if((V529!= VV[144]))goto T2050;
	{object V533 = VV[201];
	VMR33(V533)}
	goto T2050;
T2050:;
	if((V529!= VV[143]))goto T2051;
	{object V534 = VV[202];
	VMR33(V534)}
	goto T2051;
T2051:;
	{object V535 = VV[203];
	VMR33(V535)}}
	return Cnil;
}
/*	local entry for function T1DEFMACRO	*/

static object LI35(V537)

register object V537;
{	 VMB34 VMS34 VMV34
	bds_check;
	goto TTL;
TTL:;
	if(endp_prop((V537))){
	goto T2053;}
	if(!(endp_prop(cdr((V537))))){
	goto T2052;}
	goto T2053;
T2053:;
	V538 = make_fixnum((long)length((V537)));
	(void)((*(LnkLI283))(VV[204],small_fixnum(2),V538));
	goto T2052;
T2052:;
	if(type_of(car((V537)))==t_symbol){
	goto T2057;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[205],car((V537)))));
	goto T2057;
T2057:;
	V539= make_cons(VV[204],(V537));
	(void)((*(LnkLI267))(Ct,/* INLINE-ARGS */V539));
	setq(VV[6],Ct);
	{register object V540;
	object V541;
	setq(VV[61],number_plus(symbol_value(VV[61]),small_fixnum(1)));
	V541= symbol_value(VV[61]);
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[52],Cnil);
	bds_bind(VV[59],Cnil);
	V540= Cnil;
	V540= (*(LnkLI337))(car((V537)),cadr((V537)),cddr((V537)));
	(void)((*(LnkLI293))());
	{object V542;
	V542= list(7,VV[204],car((V537)),(V541),cddr((V540)),car((V540)),cadr((V540)),(VV[59]->s.s_dbind));
	setq(VV[24],make_cons((V542),symbol_value(VV[24])));
	{object V543 = symbol_value(VV[24]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR34(V543)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFMACRO	*/

static object LI36(V550,V551,V552,V553,V554,V555)

object V550;object V551;object V552;object V553;object V554;object V555;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	if(((V553))==Cnil){
	goto T2070;}
	V556= list(4,VV[103],list(2,VV[91],(V550)),(V553),VV[206]);
	(void)((VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V556)));
	goto T2070;
T2070:;
	if(((V554))==Cnil){
	goto T2073;}
	V557= list(2,VV[91],(V550));
	V558= list(4,VV[103],/* INLINE-ARGS */V557,list(2,VV[91],(V554)),VV[207]);
	(void)((VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V558)));
	goto T2073;
T2073:;
	princ_str("\nstatic void L",VV[31]);
	(void)((*(LnkLI277))((V551)));
	princ_str("();",VV[31]);
	V559= list(2,VV[91],(V550));
	V560= list(3,VV[208],/* INLINE-ARGS */V559,(*(LnkLI301))(VV[209],(V551)));
	{object V561 = (VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V560));
	VMR35(V561)}
	return Cnil;
}
/*	local entry for function T3DEFMACRO	*/

static object LI37(V568,V569,V570,V571,V572,V573)

object V568;object V569;register object V570;object V571;object V572;object V573;
{	 VMB36 VMS36 VMV36
	bds_check;
	goto TTL;
TTL:;
	if((get((V568),VV[210],Cnil))==Cnil){
	goto T2082;}
	bds_bind(VV[20],VV[211]);
	goto T2080;
	goto T2082;
T2082:;
	bds_bind(VV[20],VV[212]);
	goto T2080;
T2080:;
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
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[213],(V568))));
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI274))((V569)));
	princ_str("()",VV[25]);
	princ_str("\n{register object *",VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("base=vs_base;",VV[25]);
	V574= structure_ref(car(cddddr((V570))),VV[62],1);
	(void)((*(LnkLI314))(/* INLINE-ARGS */V574,(V569),VV[148]));
	princ_str("\n	register object *",VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("sup=base+VM",VV[25]);
	(void)((*(LnkLI274))((VV[136]->s.s_dbind)));
	princ_char(59,VV[25]);
	princ_str(" VC",VV[25]);
	(void)((*(LnkLI274))((VV[136]->s.s_dbind)));
	if((symbol_value(VV[163]))==Cnil){
	goto T2108;}
	princ_str("\n	vs_reserve(VM",VV[25]);
	(void)((*(LnkLI274))((VV[136]->s.s_dbind)));
	princ_str(");",VV[25]);
	goto T2106;
	goto T2108;
T2108:;
	princ_str("\n	vs_check;",VV[25]);
	goto T2106;
T2106:;
	if(((V573))==Cnil){
	goto T2114;}
	princ_str("\n	bds_check;",VV[25]);
	goto T2114;
T2114:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2118;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T2118;
T2118:;
	base[15]= car((V570));
	base[16]= cadr((V570));
	base[17]= caddr((V570));
	base[18]= cadddr((V570));
	vs_top=(vs_base=base+15)+4;
	(void) (*Lnk338)();
	vs_top=sup;
	princ_str("\n}",VV[25]);
	{object V575;
	V575= make_cons((VV[136]->s.s_dbind),(VV[130]->s.s_dbind));
	setq(VV[33],make_cons((V575),symbol_value(VV[33])));}
	princ_str("\n#define VC",VV[31]);
	(void)((*(LnkLI277))((VV[136]->s.s_dbind)));
	{object V576 = (*(LnkLI332))();
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
	VMR36(V576)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1ORDINARY	*/

static object LI38(V578)

register object V578;
{	 VMB37 VMS37 VMV37
	bds_check;
	goto TTL;
TTL:;
	{register object V579;
	V579= Cnil;
	setq(VV[6],Ct);
	if((symbol_value(VV[48]))==Cnil){
	goto T2139;}
	(void)((*(LnkLI267))(Cnil,(V578)));
	{object V580;
	base[0]= VV[214];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V580= vs_base[0];
	V581= listA(3,VV[64],(V580),VV[215]);
	(void)((*(LnkLI289))(/* INLINE-ARGS */V581));
	base[0]= list(5,VV[51],(V580),Cnil,(V578),Cnil);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	{object V582;
	V582= list(2,VV[216],make_cons((V580),Cnil));
	setq(VV[24],make_cons((V582),symbol_value(VV[24])));
	{object V583 = symbol_value(VV[24]);
	VMR37(V583)}}}
	goto T2139;
T2139:;
	{object V584;
	if(type_of((V578))==t_cons){
	goto T2150;}
	V584= Cnil;
	goto T2149;
	goto T2150;
T2150:;
	if(type_of(car((V578)))==t_symbol){
	goto T2152;}
	V584= Cnil;
	goto T2149;
	goto T2152;
T2152:;
	if(!((car((V578)))==(VV[217]))){
	goto T2156;}
	goto T2154;
	goto T2156;
T2156:;
	base[0]= car((V578));
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	V585= vs_base[0];
	if((V585)==Cnil){
	goto T2154;}
	V584= Cnil;
	goto T2149;
	goto T2154;
T2154:;
	{register object V586;
	register long V587;
	V586= cdr((V578));
	V587= 1;
	goto T2163;
T2163:;
	if((V587)>=(1000)){
	goto T2165;}
	if(type_of((V586))==t_cons){
	goto T2164;}
	goto T2165;
T2165:;
	V584= Cnil;
	goto T2149;
	goto T2164;
T2164:;
	if(!(type_of(car((V586)))==t_cons)){
	goto T2170;}
	if(!((caar((V586)))==(VV[64]))){
	goto T2170;}
	V579= cadr(car((V586)));
	if(!(type_of((V579))==t_cons)){
	goto T2170;}
	if(!((car((V579)))==(VV[218]))){
	goto T2170;}
	{register object V588;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V588= vs_base[0];
	base[0]= listA(3,VV[51],(V588),cdr((V579)));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk271)();
	vs_top=sup;
	base[1]= (V578);
	base[2]= small_fixnum(0);
	base[3]= make_fixnum(V587);
	vs_top=(vs_base=base+1)+3;
	Lsubseq();
	vs_top=sup;
	base[0]= vs_base[0];
	V589= list(2,VV[219],list(2,VV[91],(V588)));
	base[1]= make_cons(/* INLINE-ARGS */V589,Cnil);
	V590 = make_fixnum(V587);
	V591= number_plus(small_fixnum(1),V590);
	base[2]= nthcdr(fixint(/* INLINE-ARGS */V591),(V578));
	vs_top=(vs_base=base+0)+3;
	Lappend();
	vs_top=sup;
	V578= vs_base[0];
	goto TTL;}
	goto T2170;
T2170:;
	if(type_of((V586))==t_cons){
	goto T2193;}
	V586= Cnil;
	goto T2192;
	goto T2193;
T2193:;
	V586= cdr((V586));
	goto T2192;
T2192:;
	V587= (long)(1)+(V587);
	goto T2163;}
	goto T2149;
T2149:;
	if(((V584))==Cnil){
	goto T2198;}
	{object V592 = (V584);
	VMR37(V592)}
	goto T2198;
T2198:;
	(void)((*(LnkLI267))(Cnil,(V578)));
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[52],Cnil);
	{object V593;
	V593= list(2,VV[216],(V578));
	setq(VV[24],make_cons((V593),symbol_value(VV[24])));}
	{object V594 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR37(V594)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2ORDINARY	*/

static object LI39(V596)

object V596;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	{object V597;
	V597= (type_of((V596))!=t_cons?Ct:Cnil);
	if(((V597))==Cnil){
	goto T2206;}
	{object V598 = (V597);
	VMR38(V598)}
	goto T2206;
T2206:;
	{object V599;
	base[0]= (V596);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	V599= vs_base[0];
	if(((V599))==Cnil){
	goto T2211;}
	{object V600 = (V599);
	VMR38(V600)}
	goto T2211;
T2211:;
	{object V601 = (VFUN_NARGS=1,(*(LnkLI300))((V596)));
	VMR38(V601)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-LOAD-TIME-SHARP-COMMA	*/

static object LI40()

{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	{register object V602;
	register object V603;
	V602= reverse(symbol_value(VV[52]));
	V603= car((V602));
	goto T2216;
T2216:;
	if(!(endp_prop((V602)))){
	goto T2217;}
	{object V604 = Cnil;
	VMR39(V604)}
	goto T2217;
T2217:;
	if(!(type_of((V603))!=t_cons)){
	goto T2221;}
	(void)((*(LnkLI339))());
	goto T2221;
T2221:;
	{register object V605;
	V605= make_cons(VV[220],(V603));
	setq(VV[24],make_cons((V605),symbol_value(VV[24])));}
	V602= cdr((V602));
	V603= car((V602));
	goto T2216;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2SHARP-COMMA	*/

static object LI41(V608,V609)

object V608;object V609;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	V610= list(3,VV[221],(V608),(V609));
	{object V611 = (VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V610));
	VMR40(V611)}
	return Cnil;
}
/*	local entry for function T2DECLARE	*/

static object LI42(V613)

object V613;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V614 = (*(LnkLI339))();
	VMR41(V614)}
	return Cnil;
}
/*	local entry for function T1DEFINE-STRUCTURE	*/

static object LI43(V616)

object V616;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	V617= (*(LnkLI267))(Cnil,Cnil);
	V618= make_cons(((/* INLINE-ARGS */V617)==Cnil?Ct:Cnil),Cnil);
	V619= append((V616),/* INLINE-ARGS */V618);
	V620= make_cons(VV[222],/* INLINE-ARGS */V619);
	(void)((*(LnkLI267))(Ct,/* INLINE-ARGS */V620));
	V621= make_cons(VV[222],(V616));
	{object V622 = (*(LnkLI272))(/* INLINE-ARGS */V621);
	VMR42(V622)}
	return Cnil;
}
/*	local entry for function SET-DBIND	*/

static object LI44(V625,V626)

object V625;object V626;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	princ_str("\n	VV[",VV[25]);
	(void)((*(LnkLI274))((V626)));
	princ_str("]->s.s_dbind = ",VV[25]);
	(void)((*(LnkLI274))((V625)));
	princ_char(59,VV[25]);
	{object V627 = Cnil;
	VMR43(V627)}
	return Cnil;
}
/*	local entry for function T1CLINES	*/

static object LI45(V629)

object V629;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{register object V630;
	register object V631;
	V630= (V629);
	V631= car((V630));
	goto T2243;
T2243:;
	if(!(endp_prop((V630)))){
	goto T2244;}
	goto T2239;
	goto T2244;
T2244:;
	if(type_of((V631))==t_string){
	goto T2248;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[223],(V631))));
	goto T2248;
T2248:;
	V630= cdr((V630));
	V631= car((V630));
	goto T2243;}
	goto T2239;
T2239:;
	{object V632;
	V632= list(2,VV[224],(V629));
	setq(VV[24],make_cons((V632),symbol_value(VV[24])));
	{object V633 = symbol_value(VV[24]);
	VMR44(V633)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3CLINES	*/

static object LI46(V635)

object V635;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	{register object V636;
	register object V637;
	V636= (V635);
	V637= car((V636));
	goto T2261;
T2261:;
	if(!(endp_prop((V636)))){
	goto T2262;}
	{object V638 = Cnil;
	VMR45(V638)}
	goto T2262;
T2262:;
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))((V637)));
	V636= cdr((V636));
	V637= car((V636));
	goto T2261;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFCFUN	*/

static object LI47(V640)

object V640;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{register object V641;
	V641= Cnil;
	if(endp_prop((V640))){
	goto T2276;}
	if(!(endp_prop(cdr((V640))))){
	goto T2275;}
	goto T2276;
T2276:;
	V642 = make_fixnum((long)length((V640)));
	(void)((*(LnkLI283))(VV[225],small_fixnum(2),V642));
	goto T2275;
T2275:;
	if(type_of(car((V640)))==t_string){
	goto T2280;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[226],car((V640)))));
	goto T2280;
T2280:;
	{object V643= cadr((V640));
	if(type_of(V643)==t_fixnum||
type_of(V643)==t_bignum||
type_of(V643)==t_ratio||
type_of(V643)==t_shortfloat||
type_of(V643)==t_longfloat||
type_of(V643)==t_complex){
	goto T2283;}}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[227],cadr((V640)))));
	goto T2283;
T2283:;
	{register object V644;
	register object V645;
	V644= cddr((V640));
	V645= car((V644));
	goto T2290;
T2290:;
	if(!(endp_prop((V644)))){
	goto T2291;}
	goto T2286;
	goto T2291;
T2291:;
	if(!(type_of((V645))==t_string)){
	goto T2297;}
	{register object V646;
	V646= (V645);
	V641= make_cons((V646),(V641));
	goto T2295;}
	goto T2297;
T2297:;
	if(!(type_of((V645))==t_cons)){
	goto T2302;}
	if(!(type_of(car((V645)))==t_symbol)){
	goto T2305;}
	base[2]= car((V645));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2307;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[228],car((V645)))));
	goto T2307;
T2307:;
	{register object V647;
	V648= car((V645));
	V649= (*(LnkLI340))(cdr((V645)));
	V650= make_cons(/* INLINE-ARGS */V648,/* INLINE-ARGS */V649);
	V647= make_cons(/* INLINE-ARGS */V650,Cnil);
	V641= make_cons((V647),(V641));
	goto T2295;}
	goto T2305;
T2305:;
	if(!(type_of(car((V645)))==t_cons)){
	goto T2314;}
	if(!(type_of(caar((V645)))==t_symbol)){
	goto T2314;}
	if(!((caar((V645)))==(VV[91]))){
	goto T2321;}
	if(!(endp_prop(cdar((V645))))){
	goto T2323;}
	goto T2314;
	goto T2323;
T2323:;
	if(!(((endp_prop(cddar((V645)))?Ct:Cnil))==Cnil)){
	goto T2325;}
	goto T2314;
	goto T2325;
T2325:;
	if(!(endp_prop(cdr((V645))))){
	goto T2327;}
	goto T2314;
	goto T2327;
T2327:;
	if(((endp_prop(cddr((V645)))?Ct:Cnil))==Cnil){
	goto T2314;}
	goto T2319;
	goto T2321;
T2321:;
	base[2]= caar((V645));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2314;}
	goto T2319;
T2319:;
	{register object V651;
	V652= caar((V645));
	if(!((caar((V645)))==(VV[91]))){
	goto T2333;}
	V654= (*(LnkLI325))(cadar((V645)));
	V653= make_cons(/* INLINE-ARGS */V654,Cnil);
	goto T2331;
	goto T2333;
T2333:;
	V653= (*(LnkLI340))(cdar((V645)));
	goto T2331;
T2331:;
	V655= make_cons(/* INLINE-ARGS */V652,V653);
	V656= (*(LnkLI340))(cdr((V645)));
	V651= make_cons(/* INLINE-ARGS */V655,/* INLINE-ARGS */V656);
	V641= make_cons((V651),(V641));
	goto T2295;}
	goto T2314;
T2314:;
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[229],(V645))));
	goto T2295;
	goto T2302;
T2302:;
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[230],(V645))));
	goto T2295;
T2295:;
	V644= cdr((V644));
	V645= car((V644));
	goto T2290;}
	goto T2286;
T2286:;
	{object V657;
	V658= car((V640));
	V659= cadr((V640));
	V657= list(4,VV[225],/* INLINE-ARGS */V658,/* INLINE-ARGS */V659,reverse((V641)));
	setq(VV[24],make_cons((V657),symbol_value(VV[24])));
	{object V660 = symbol_value(VV[24]);
	VMR46(V660)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3DEFCFUN	*/

static object LI48(V664,V665,V666)

object V664;object V665;object V666;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{object V667;
	V667= Cnil;
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[231],VV[225])));
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))((V664)));
	princ_str("\n{",VV[25]);
	princ_str("\nobject *vs=vs_top;",VV[25]);
	princ_str("\nobject *old_top=vs_top+",VV[25]);
	(void)((*(LnkLI274))((V665)));
	princ_char(59,VV[25]);
	if(!(number_compare((V665),small_fixnum(0))>0)){
	goto T2356;}
	princ_str("\n	vs_top=old_top;",VV[25]);
	goto T2356;
T2356:;
	princ_str("\n{",VV[25]);
	{object V668;
	register object V669;
	V668= (V666);
	V669= car((V668));
	goto T2366;
T2366:;
	if(!(endp_prop((V668)))){
	goto T2367;}
	goto T2362;
	goto T2367;
T2367:;
	if(!(type_of((V669))==t_string)){
	goto T2373;}
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))((V669)));
	goto T2371;
	goto T2373;
T2373:;
	if(!((caar((V669)))==(VV[91]))){
	goto T2378;}
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))(cadadr((V669))));
	{object V670= caadr((V669));
	if((V670!= VV[74]))goto T2383;
	princ_str("=VV[",VV[25]);
	(void)((*(LnkLI274))(cadar((V669))));
	princ_str("];",VV[25]);
	goto T2371;
	goto T2383;
T2383:;
	princ_str("=object_to_",VV[25]);
	base[1]= symbol_name(caadr((V669)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V671= vs_base[0];
	(void)((*(LnkLI274))(V671));
	princ_str("(VV[",VV[25]);
	(void)((*(LnkLI274))(cadar((V669))));
	princ_str("]);",VV[25]);
	goto T2371;}
	goto T2378;
T2378:;
	princ_str("\n{vs_base=vs_top=old_top;",VV[25]);
	{register object V672;
	register object V673;
	V672= cdar((V669));
	V673= car((V672));
	goto T2400;
T2400:;
	if(!(endp_prop((V672)))){
	goto T2401;}
	goto T2396;
	goto T2401;
T2401:;
	princ_str("\nvs_push(",VV[25]);
	{object V674= car((V673));
	if((V674!= VV[74]))goto T2408;
	(void)((*(LnkLI274))(cadr((V673))));
	goto T2407;
	goto T2408;
T2408:;
	if((V674!= VV[341]))goto T2410;
	princ_str("code_char((long)",VV[25]);
	(void)((*(LnkLI274))(cadr((V673))));
	princ_char(41,VV[25]);
	goto T2407;
	goto T2410;
T2410:;
	if((V674!= VV[342]))goto T2414;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T2415;}
	princ_str("CMP",VV[25]);
	goto T2415;
T2415:;
	princ_str("make_fixnum((long)",VV[25]);
	(void)((*(LnkLI274))(cadr((V673))));
	princ_char(41,VV[25]);
	goto T2407;
	goto T2414;
T2414:;
	if((V674!= VV[343]))goto T2422;
	princ_str("make_shortfloat((double)",VV[25]);
	(void)((*(LnkLI274))(cadr((V673))));
	princ_char(41,VV[25]);
	goto T2407;
	goto T2422;
T2422:;
	if((V674!= VV[344]))goto T2426;
	princ_str("make_longfloat((double)",VV[25]);
	(void)((*(LnkLI274))(cadr((V673))));
	princ_char(41,VV[25]);
	goto T2407;
	goto T2426;
T2426:;}
	goto T2407;
T2407:;
	princ_str(");",VV[25]);
	V672= cdr((V672));
	V673= car((V672));
	goto T2400;}
	goto T2396;
T2396:;
	{register object x= caar((V669)),V675= symbol_value(VV[79]);
	while(!endp(V675))
	if(type_of(V675->c.c_car)==t_cons &&eql(x,V675->c.c_car->c.c_car)){
	V667= (V675->c.c_car);
	goto T2441;
	}else V675=V675->c.c_cdr;
	V667= Cnil;}
	goto T2441;
T2441:;
	if(((V667))==Cnil){
	goto T2439;}
	if((symbol_value(VV[149]))==Cnil){
	goto T2443;}
	princ_str("\nihs_push(VV[",VV[25]);
	V676= (*(LnkLI327))(caar((V669)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V676));
	princ_str("]);",VV[25]);
	princ_str("\nL",VV[25]);
	(void)((*(LnkLI274))(cdr((V667))));
	princ_str("();",VV[25]);
	princ_str("\nihs_pop();",VV[25]);
	goto T2437;
	goto T2443;
T2443:;
	princ_str("\nL",VV[25]);
	(void)((*(LnkLI274))(cdr((V667))));
	princ_str("();",VV[25]);
	goto T2437;
	goto T2439;
T2439:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2458;}
	princ_str("\nsuper_funcall(VV[",VV[25]);
	V677= (*(LnkLI327))(caar((V669)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V677));
	princ_str("]);",VV[25]);
	goto T2437;
	goto T2458;
T2458:;
	if((symbol_value(VV[163]))==Cnil){
	goto T2464;}
	princ_str("\nsuper_funcall_no_event(VV[",VV[25]);
	V678= (*(LnkLI327))(caar((V669)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V678));
	princ_str("]);",VV[25]);
	goto T2437;
	goto T2464;
T2464:;
	princ_str("\nCMPfuncall(VV[",VV[25]);
	V679= (*(LnkLI327))(caar((V669)));
	(void)((*(LnkLI274))(/* INLINE-ARGS */V679));
	princ_str("]->s.s_gfdef);",VV[25]);
	goto T2437;
T2437:;
	if(endp_prop(cdr((V669)))){
	goto T2472;}
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))(cadadr((V669))));
	{object V680= caadr((V669));
	if((V680!= VV[74]))goto T2479;
	princ_str("=vs_base[0];",VV[25]);
	goto T2478;
	goto T2479;
T2479:;
	princ_str("=object_to_",VV[25]);
	base[1]= symbol_name(caadr((V669)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V681= vs_base[0];
	(void)((*(LnkLI274))(V681));
	princ_str("(vs_base[0]);",VV[25]);}
	goto T2478;
T2478:;
	{register object V682;
	register object V683;
	V682= cddr((V669));
	V683= car((V682));
	goto T2489;
T2489:;
	if(!(endp_prop((V682)))){
	goto T2490;}
	goto T2472;
	goto T2490;
T2490:;
	princ_str("\nvs_base++;",VV[25]);
	princ_char(10,VV[25]);
	(void)((*(LnkLI274))(cadr((V683))));
	{object V684= car((V683));
	if((V684!= VV[74]))goto T2500;
	princ_str("=(vs_base<vs_top?vs_base[0]:Cnil);",VV[25]);
	goto T2499;
	goto T2500;
T2500:;
	princ_str("=object_to_",VV[25]);
	base[3]= symbol_name(car((V683)));
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V685= vs_base[0];
	(void)((*(LnkLI274))(V685));
	princ_str("((vs_base<vs_top?vs_base[0]:Cnil));",VV[25]);}
	goto T2499;
T2499:;
	V682= cdr((V682));
	V683= car((V682));
	goto T2489;}
	goto T2472;
T2472:;
	princ_str("\n}",VV[25]);
	goto T2371;
T2371:;
	V668= cdr((V668));
	V669= car((V668));
	goto T2366;}
	goto T2362;
T2362:;
	princ_str("\n}",VV[25]);
	princ_str("\nvs_top=vs;",VV[25]);
	princ_str("\n}",VV[25]);
	{object V686 = Cnil;
	VMR47(V686)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFENTRY	*/

static object LI49(V688)

register object V688;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{register object V689;
	register object V690;
	object V691;
	register object V692;
	V689= Cnil;
	V690= Cnil;
	setq(VV[61],number_plus(symbol_value(VV[61]),small_fixnum(1)));
	V691= symbol_value(VV[61]);
	V692= Cnil;
	if(endp_prop((V688))){
	goto T2529;}
	if(endp_prop(cdr((V688)))){
	goto T2529;}
	if(!(endp_prop(cddr((V688))))){
	goto T2528;}
	goto T2529;
T2529:;
	V693 = make_fixnum((long)length((V688)));
	(void)((*(LnkLI283))(VV[232],small_fixnum(3),V693));
	goto T2528;
T2528:;
	if(type_of(car((V688)))==t_symbol){
	goto T2535;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[233],car((V688)))));
	goto T2535;
T2535:;
	{register object V694;
	register object V695;
	V694= cadr((V688));
	V695= car((V694));
	goto T2542;
T2542:;
	if(!(endp_prop((V694)))){
	goto T2543;}
	goto T2538;
	goto T2543;
T2543:;
	{register object x= (V695),V696= VV[234];
	while(!endp(V696))
	if(eql(x,V696->c.c_car)){
	goto T2547;
	}else V696=V696->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[235],(V695))));
	goto T2547;
T2547:;
	V694= cdr((V694));
	V695= car((V694));
	goto T2542;}
	goto T2538;
T2538:;
	V692= caddr((V688));
	if(!(type_of((V692))==t_symbol)){
	goto T2559;}
	V689= VV[74];
	base[1]= symbol_name((V692));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V690= vs_base[0];
	goto T2557;
	goto T2559;
T2559:;
	if(!(type_of((V692))==t_string)){
	goto T2566;}
	V689= VV[74];
	V690= (V692);
	goto T2557;
	goto T2566;
T2566:;
	if(!(type_of((V692))==t_cons)){
	goto T2572;}
	{register object x= car((V692)),V697= VV[236];
	while(!endp(V697))
	if(eql(x,V697->c.c_car)){
	goto T2576;
	}else V697=V697->c.c_cdr;
	goto T2572;}
	goto T2576;
T2576:;
	if(!(type_of(cdr((V692)))==t_cons)){
	goto T2572;}
	if(type_of(cadr((V692)))==t_symbol){
	goto T2579;}
	if(!(type_of(cadr((V692)))==t_string)){
	goto T2572;}
	goto T2579;
T2579:;
	if(!(endp_prop(cddr((V692))))){
	goto T2572;}
	if(!(type_of(cadr((V692)))==t_symbol)){
	goto T2587;}
	base[1]= symbol_name(cadr((V692)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V690= vs_base[0];
	goto T2585;
	goto T2587;
T2587:;
	V690= cadr((V692));
	goto T2585;
T2585:;
	V689= car((V692));
	goto T2557;
	goto T2572;
T2572:;
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[237],(V692))));
	goto T2557;
T2557:;
	{object V698;
	V698= list(6,VV[232],car((V688)),(V691),cadr((V688)),(V689),(V690));
	setq(VV[24],make_cons((V698),symbol_value(VV[24])));}
	{object V699;
	V699= make_cons(car((V688)),(V691));
	setq(VV[79],make_cons((V699),symbol_value(VV[79])));
	{object V700 = symbol_value(VV[79]);
	VMR48(V700)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFENTRY	*/

static object LI50(V706,V707,V708,V709,V710)

object V706;object V707;object V708;object V709;object V710;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	princ_str("\nstatic void L",VV[31]);
	(void)((*(LnkLI277))((V707)));
	princ_str("();",VV[31]);
	V711= list(2,VV[91],(V706));
	V712= list(3,VV[111],/* INLINE-ARGS */V711,(*(LnkLI301))(VV[238],(V707)));
	{object V713 = (VFUN_NARGS=1,(*(LnkLI300))(/* INLINE-ARGS */V712));
	VMR49(V713)}
	return Cnil;
}
/*	local entry for function T3DEFENTRY	*/

static object LI51(V719,V720,V721,V722,V723)

object V719;object V720;object V721;register object V722;object V723;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[239],(V719))));
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI274))((V720)));
	princ_str("()",VV[25]);
	princ_str("\n{	object *old_base=vs_base;",VV[25]);
	{object V724= (V722);
	if((V724!= VV[240]))goto T2608;
	goto T2607;
	goto T2608;
T2608:;
	if((V724!= VV[158]))goto T2609;
	princ_str("\n	char *x;",VV[25]);
	goto T2607;
	goto T2609;
T2609:;
	princ_str("\n	",VV[25]);
	base[0]= symbol_name((V722));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V725= vs_base[0];
	(void)((*(LnkLI274))(V725));
	princ_str(" x;",VV[25]);}
	goto T2607;
T2607:;
	if((symbol_value(VV[163]))==Cnil){
	goto T2616;}
	princ_str("\n	check_arg(",VV[25]);
	V726 = make_fixnum((long)length((V721)));
	(void)((*(LnkLI274))(V726));
	princ_str(");",VV[25]);
	goto T2616;
T2616:;
	if(((V722))==(VV[240])){
	goto T2622;}
	princ_str("\n	x=",VV[25]);
	goto T2622;
T2622:;
	princ_str("\n	",VV[25]);
	(void)((*(LnkLI274))((V723)));
	princ_char(40,VV[25]);
	if(endp_prop((V721))){
	goto T2630;}
	{register object V727;
	register long V728;
	V728= 0;
	V727= (V721);
	goto T2635;
T2635:;
	{object V729= car((V727));
	if((V729!= VV[74]))goto T2639;
	princ_str("\n	vs_base[",VV[25]);
	V730 = make_fixnum(V728);
	(void)((*(LnkLI274))(V730));
	princ_char(93,VV[25]);
	goto T2638;
	goto T2639;
T2639:;
	princ_str("\n	object_to_",VV[25]);
	base[0]= symbol_name(car((V727)));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V731= vs_base[0];
	(void)((*(LnkLI274))(V731));
	princ_str("(vs_base[",VV[25]);
	V732 = make_fixnum(V728);
	(void)((*(LnkLI274))(V732));
	princ_str("])",VV[25]);}
	goto T2638;
T2638:;
	if(!(endp_prop(cdr((V727))))){
	goto T2650;}
	goto T2630;
	goto T2650;
T2650:;
	princ_char(44,VV[25]);
	V727= cdr((V727));
	V728= (long)(V728)+1;
	goto T2635;}
	goto T2630;
T2630:;
	princ_str(");",VV[25]);
	princ_str("\n	vs_top=(vs_base=old_base)+1;",VV[25]);
	princ_str("\n	vs_base[0]=",VV[25]);
	{object V733= (V722);
	if((V733!= VV[240]))goto T2666;
	princ_str("Cnil",VV[25]);
	goto T2665;
	goto T2666;
T2666:;
	if((V733!= VV[74]))goto T2668;
	princ_char(120,VV[25]);
	goto T2665;
	goto T2668;
T2668:;
	if((V733!= VV[341]))goto T2670;
	princ_str("code_char(x)",VV[25]);
	goto T2665;
	goto T2670;
T2670:;
	if((V733!= VV[342]))goto T2672;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T2673;}
	princ_str("CMP",VV[25]);
	goto T2673;
T2673:;
	princ_str("make_fixnum(x)",VV[25]);
	goto T2665;
	goto T2672;
T2672:;
	if((V733!= VV[158]))goto T2678;
	princ_str("make_simple_string(x)",VV[25]);
	goto T2665;
	goto T2678;
T2678:;
	if((V733!= VV[343]))goto T2680;
	princ_str("make_shortfloat(x)",VV[25]);
	goto T2665;
	goto T2680;
T2680:;
	if((V733!= VV[344]))goto T2682;
	princ_str("make_longfloat(x)",VV[25]);
	goto T2665;
	goto T2682;
T2682:;}
	goto T2665;
T2665:;
	princ_char(59,VV[25]);
	princ_str("\n}",VV[25]);
	{object V734 = Cnil;
	VMR50(V734)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFLA	*/

static object LI52(V736)

object V736;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V737 = Cnil;
	VMR51(V737)}
	return Cnil;
}
/*	local entry for function PARSE-CVSPECS	*/

static object LI53(V739)

object V739;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{register object V740;
	V740= Cnil;
	{register object V741;
	register object V742;
	V741= (V739);
	V742= car((V741));
	goto T2691;
T2691:;
	if(!(endp_prop((V741)))){
	goto T2692;}
	{object V743 = reverse((V740));
	VMR52(V743)}
	goto T2692;
T2692:;
	if(!(type_of((V742))==t_symbol)){
	goto T2698;}
	{object V744;
	base[2]= symbol_name((V742));
	vs_top=(vs_base=base+2)+1;
	Lstring_downcase();
	vs_top=sup;
	V745= vs_base[0];
	V744= list(2,VV[74],V745);
	V740= make_cons((V744),(V740));
	goto T2696;}
	goto T2698;
T2698:;
	if(!(type_of((V742))==t_string)){
	goto T2705;}
	{object V746;
	V746= list(2,VV[74],(V742));
	V740= make_cons((V746),(V740));
	goto T2696;}
	goto T2705;
T2705:;
	if(!(type_of((V742))==t_cons)){
	goto T2710;}
	{register object x= car((V742)),V747= VV[241];
	while(!endp(V747))
	if(eql(x,V747->c.c_car)){
	goto T2713;
	}else V747=V747->c.c_cdr;
	goto T2710;}
	goto T2713;
T2713:;
	{register object V748;
	register object V749;
	V748= cdr((V742));
	V749= car((V748));
	goto T2717;
T2717:;
	if(!(endp_prop((V748)))){
	goto T2718;}
	goto T2696;
	goto T2718;
T2718:;
	{register object V750;
	V751= car((V742));
	if(!(type_of((V749))==t_symbol)){
	goto T2726;}
	base[4]= symbol_name((V749));
	vs_top=(vs_base=base+4)+1;
	Lstring_downcase();
	vs_top=sup;
	V752= vs_base[0];
	goto T2724;
	goto T2726;
T2726:;
	if(!(type_of((V749))==t_string)){
	goto T2730;}
	V752= (V749);
	goto T2724;
	goto T2730;
T2730:;
	V752= (VFUN_NARGS=2,(*(LnkLI265))(VV[242],(V749)));
	goto T2724;
T2724:;
	V750= list(2,/* INLINE-ARGS */V751,V752);
	V740= make_cons((V750),(V740));}
	V748= cdr((V748));
	V749= car((V748));
	goto T2717;}
	goto T2710;
T2710:;
	(void)((VFUN_NARGS=2,(*(LnkLI265))(VV[243],(V742))));
	goto T2696;
T2696:;
	V741= cdr((V741));
	V742= car((V741));
	goto T2691;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3LOCAL-DCFUN	*/

static object LI54(V758,V759,V760,V761,V762)

object V758;object V759;object V760;register object V761;register object V762;
{	 VMB53 VMS53 VMV53
	bds_check;
	goto TTL;
TTL:;
	{object V763;
	register object V764;
	object V765;
	if(((V758))==Cnil){
	goto T2745;}
	V763= small_fixnum(0);
	goto T2743;
	goto T2745;
T2745:;
	V763= structure_ref((V761),VV[32],4);
	goto T2743;
T2743:;
	V764= Cnil;
	bds_bind(VV[20],(*(LnkLI306))(cadr((V762))));
	bds_bind(VV[117],Cnil);
	V765= caaddr((V762));
	if((structure_ref((V761),VV[32],0))==Cnil){
	goto T2753;}
	V766= structure_ref((V761),VV[32],0);
	goto T2751;
	goto T2753;
T2753:;
	V766= Cnil;
	goto T2751;
T2751:;
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[244],V766)));
	princ_str("\nstatic void ",VV[25]);
	if(((V758))==Cnil){
	goto T2760;}
	V767= VV[245];
	goto T2758;
	goto T2760;
T2760:;
	V767= VV[246];
	goto T2758;
T2758:;
	(void)((*(LnkLI274))(V767));
	V768= structure_ref((V761),VV[32],3);
	(void)((*(LnkLI274))(/* INLINE-ARGS */V768));
	princ_char(40,VV[25]);
	princ_str("base0",VV[25]);
	if(((V765))==Cnil){
	goto T2769;}
	V769= VV[247];
	goto T2767;
	goto T2769;
T2769:;
	V769= VV[248];
	goto T2767;
T2767:;
	(void)((*(LnkLI274))(V769));
	V770= structure_ref(cadr((V762)),VV[62],1);
	(void)((*(LnkLI308))(/* INLINE-ARGS */V770,small_fixnum(2)));
	(void)((*(LnkLI313))(caaddr((V762)),Cnil));
	princ_str("register object *",VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("base0;",VV[25]);
	bds_bind(VV[249],(V760));
	bds_bind(VV[128],VV[124]);
	bds_bind(VV[18],Cnil);
	bds_bind(VV[129],small_fixnum(0));
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],one_plus((V763)));
	bds_bind(VV[132],(V760));
	bds_bind(VV[133],(V759));
	bds_bind(VV[134],make_cons((VV[128]->s.s_dbind),Cnil));
	bds_bind(VV[135],(VV[128]->s.s_dbind));
	setq(VV[137],number_plus(symbol_value(VV[137]),small_fixnum(1)));
	bds_bind(VV[136],symbol_value(VV[137]));
	bds_bind(VV[138],Cnil);
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],small_fixnum(0));
	V764= (VV[136]->s.s_dbind);
	princ_str("\n{",VV[25]);
	V771= structure_ref(cadr((V762)),VV[62],1);
	V772= structure_ref((V761),VV[32],3);
	(void)((*(LnkLI314))(/* INLINE-ARGS */V771,/* INLINE-ARGS */V772,VV[250]));
	princ_str("\n	VMB",VV[25]);
	(void)((*(LnkLI274))((V764)));
	princ_str(" VMS",VV[25]);
	(void)((*(LnkLI274))((V764)));
	princ_str(" VMV",VV[25]);
	(void)((*(LnkLI274))((V764)));
	if((symbol_value(VV[149]))==Cnil){
	goto T2793;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T2793;
T2793:;
	base[19]= caddr(cddr((V762)));
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk315)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),(VV[130]->s.s_dbind))==0)){
	goto T2801;}
	if(((VV[138]->s.s_dbind))!=Cnil){
	goto T2801;}
	if(((VV[140]->s.s_dbind))!=Cnil){
	goto T2801;}
	goto T2799;
	goto T2801;
T2801:;
	princ_str("\n	base[0]=base[0];",VV[25]);
	goto T2799;
T2799:;
	princ_str("\n}",VV[25]);
	(void)((*(LnkLI316))((V764),Ct));
	V773= structure_ref((V761),VV[32],3);
	{object V774 = (*(LnkLI310))(/* INLINE-ARGS */V773);
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
	VMR53(V774)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3LOCAL-FUN	*/

static object LI55(V780,V781,V782,V783,V784)

object V780;object V781;object V782;object V783;object V784;
{	 VMB54 VMS54 VMV54
	bds_check;
	goto TTL;
TTL:;
	{long V785;
	if(((V780))==Cnil){
	goto T2813;}
	V785= 0;
	goto T2811;
	goto T2813;
T2813:;
	V785= fix(structure_ref((V783),VV[32],4));
	goto T2811;
T2811:;
	bds_bind(VV[20],(*(LnkLI306))(cadr((V784))));
	bds_bind(VV[117],Cnil);
	if(!(((V780))==(VV[251]))){
	goto T2816;}
	{object V786 = (*(LnkLI250))((V780),(V781),(V782),(V783),(V784));
	bds_unwind1;
	bds_unwind1;
	VMR54(V786)}
	goto T2816;
T2816:;
	if((structure_ref((V783),VV[32],0))==Cnil){
	goto T2822;}
	V787= structure_ref((V783),VV[32],0);
	goto T2820;
	goto T2822;
T2822:;
	V787= Cnil;
	goto T2820;
T2820:;
	(void)((VFUN_NARGS=2,(*(LnkLI312))(VV[252],V787)));
	princ_str("\nstatic void ",VV[31]);
	if(((V780))==Cnil){
	goto T2829;}
	V788= VV[253];
	goto T2827;
	goto T2829;
T2829:;
	V788= VV[254];
	goto T2827;
T2827:;
	(void)((*(LnkLI277))(V788));
	V789= structure_ref((V783),VV[32],3);
	(void)((*(LnkLI277))(/* INLINE-ARGS */V789));
	princ_str("();",VV[31]);
	princ_str("\nstatic void ",VV[25]);
	if(((V780))==Cnil){
	goto T2838;}
	V790= VV[255];
	goto T2836;
	goto T2838;
T2838:;
	V790= VV[256];
	goto T2836;
T2836:;
	(void)((*(LnkLI274))(V790));
	V791= structure_ref((V783),VV[32],3);
	(void)((*(LnkLI274))(/* INLINE-ARGS */V791));
	princ_char(40,VV[25]);
	{register object V792;
	register long V793;
	V792= make_fixnum(V785);
	V793= 0;
	goto T2846;
T2846:;
	V794 = make_fixnum(V793);
	if(!(number_compare(V794,(V792))>=0)){
	goto T2847;}
	princ_str("base",VV[25]);
	V795 = make_fixnum(V793);
	(void)((*(LnkLI274))(V795));
	princ_char(41,VV[25]);
	goto T2842;
	goto T2847;
T2847:;
	princ_str("base",VV[25]);
	V796 = make_fixnum(V793);
	(void)((*(LnkLI274))(V796));
	princ_char(44,VV[25]);
	V793= (long)(V793)+1;
	goto T2846;}
	goto T2842;
T2842:;
	princ_str("\nregister object ",VV[25]);
	{register object V797;
	register long V798;
	V797= make_fixnum(V785);
	V798= 0;
	goto T2867;
T2867:;
	V799 = make_fixnum(V798);
	if(!(number_compare(V799,(V797))>=0)){
	goto T2868;}
	princ_char(42,VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("base",VV[25]);
	V800 = make_fixnum(V798);
	(void)((*(LnkLI274))(V800));
	princ_char(59,VV[25]);
	goto T2863;
	goto T2868;
T2868:;
	princ_char(42,VV[25]);
	(void)((*(LnkLI274))((VV[20]->s.s_dbind)));
	princ_str("base",VV[25]);
	V801 = make_fixnum(V798);
	(void)((*(LnkLI274))(V801));
	princ_char(44,VV[25]);
	V798= (long)(V798)+1;
	goto T2867;}
	goto T2863;
T2863:;
	V802= structure_ref(cadr((V784)),VV[62],1);
	(void)((*(LnkLI308))(/* INLINE-ARGS */V802,small_fixnum(2)));
	bds_bind(VV[128],VV[127]);
	bds_bind(VV[249],(V782));
	bds_bind(VV[18],Cnil);
	bds_bind(VV[129],small_fixnum(0));
	bds_bind(VV[130],small_fixnum(0));
	V803 = make_fixnum(V785);
	bds_bind(VV[131],one_plus(V803));
	bds_bind(VV[132],(V782));
	bds_bind(VV[133],(V781));
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
	V804= structure_ref(cadr((V784)),VV[62],1);
	V805= structure_ref((V783),VV[32],3);
	(void)((*(LnkLI314))(/* INLINE-ARGS */V804,/* INLINE-ARGS */V805,VV[257]));
	princ_str(" VC",VV[25]);
	(void)((*(LnkLI274))((VV[136]->s.s_dbind)));
	if((symbol_value(VV[163]))==Cnil){
	goto T2908;}
	princ_str("\n	vs_reserve(VM",VV[25]);
	(void)((*(LnkLI274))((VV[136]->s.s_dbind)));
	princ_str(");",VV[25]);
	goto T2906;
	goto T2908;
T2908:;
	princ_str("\n	vs_check;",VV[25]);
	goto T2906;
T2906:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2914;}
	princ_str("\n	ihs_check;",VV[25]);
	goto T2914;
T2914:;
	if(((V780))==Cnil){
	goto T2920;}
	(void)((VFUN_NARGS=2,(*(LnkLI331))(caddr((V784)),caddr(cddr((V784))))));
	goto T2918;
	goto T2920;
T2920:;
	(void)((VFUN_NARGS=3,(*(LnkLI331))(caddr((V784)),caddr(cddr((V784))),(V783))));
	goto T2918;
T2918:;
	princ_str("\n}",VV[25]);
	{object V806;
	V806= make_cons((VV[136]->s.s_dbind),(VV[130]->s.s_dbind));
	setq(VV[33],make_cons((V806),symbol_value(VV[33])));}
	princ_str("\n#define VC",VV[31]);
	(void)((*(LnkLI277))((VV[136]->s.s_dbind)));
	V807= (*(LnkLI332))();
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
	V808= structure_ref((V783),VV[32],3);
	{object V809 = (*(LnkLI310))(/* INLINE-ARGS */V808);
	bds_unwind1;
	bds_unwind1;
	VMR54(V809)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-CVARS	*/

static object LI56()

{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{register object V810;
	V810= Cnil;
	{register object V811;
	register object V812;
	V811= symbol_value(VV[18]);
	V812= car((V811));
	goto T2935;
T2935:;
	if(!(endp_prop((V811)))){
	goto T2936;}
	goto T2931;
	goto T2936;
T2936:;
	{register object V813;
	if(!(type_of((V812))==t_cons)){
	goto T2943;}
	{register object V814;
	V814= car((V812));
	V812= cdr((V812));
	V813= (V814);
	goto T2941;}
	goto T2943;
T2943:;
	V813= Ct;
	goto T2941;
T2941:;
	if(!(((V810))==((V813)))){
	goto T2950;}
	base[1]= symbol_value(VV[31]);
	base[2]= VV[258];
	base[3]= (V812);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T2948;
	goto T2950;
T2950:;
	if(!(((V810))==Cnil)){
	goto T2956;}
	goto T2955;
	goto T2956;
T2956:;
	base[1]= symbol_value(VV[31]);
	base[2]= VV[259];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	goto T2955;
T2955:;
	V810= (V813);
	base[1]= symbol_value(VV[31]);
	base[2]= VV[260];
	base[3]= (*(LnkLI280))((V810));
	base[4]= (V812);
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
	goto T2948;
T2948:;
	if(!(((V810))==(VV[261]))){
	goto T2940;}
	base[1]= symbol_value(VV[31]);
	base[2]= VV[262];
	base[3]= (V812);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;}
	goto T2940;
T2940:;
	V811= cdr((V811));
	V812= car((V811));
	goto T2935;}
	goto T2931;
T2931:;
	if(symbol_value(VV[18])==Cnil){
	goto T2976;}
	base[0]= symbol_value(VV[31]);
	base[1]= VV[263];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	goto T2976;
T2976:;
	if(eql(symbol_value(VV[141]),small_fixnum(0))){
	goto T2980;}
	base[0]= symbol_value(VV[31]);
	base[1]= VV[264];
	base[2]= symbol_value(VV[141]);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V815 = vs_base[0];
	VMR55(V815)}
	goto T2980;
T2980:;
	{object V816 = Cnil;
	VMR55(V816)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function DO-DECL	*/

static void L26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_reserve(VM56);
	{object V817;
	check_arg(1);
	V817=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	V818= structure_ref((V817),VV[69],4);
	if(eql(/* INLINE-ARGS */V818,VV[72])){
	goto T2986;}
	goto T2985;
	goto T2986;
T2986:;
	(VV[153]->s.s_dbind)= Ct;
	goto T2985;
T2985:;
	{object V819;
	V819= (*(LnkLI345))((V817));
	if(((V819))==Cnil){
	goto T2991;}
	{object V820;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V820= symbol_value(VV[88]);
	(void)(structure_set((V817),VV[69],1,(V819)));
	(void)(structure_set((V817),VV[69],4,(V820)));
	princ_str("\n	",VV[25]);
	if((base0[1])!=Cnil){
	goto T2998;}
	princ_char(123,VV[25]);
	base0[1]= Ct;
	goto T2998;
T2998:;
	base[1]= (V817);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk346)();
	return;}
	goto T2991;
T2991:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
static void LnkT346(){ call_or_link(VV[346],(void **)&Lnk346);} /* WT-VAR-DECL */
static object  LnkTLI345(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[345],(void **)&LnkLI345,1,first,ap);va_end(ap);return V1;} /* C2VAR-KIND */
static object  LnkTLI250(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[250],(void **)&LnkLI250,5,first,ap);va_end(ap);return V1;} /* T3LOCAL-DCFUN */
static object  LnkTLI340(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[340],(void **)&LnkLI340,1,first,ap);va_end(ap);return V1;} /* PARSE-CVSPECS */
static object  LnkTLI339(){return call_proc0(VV[339],(void **)&LnkLI339);} /* WFS-ERROR */
static void LnkT338(){ call_or_link(VV[338],(void **)&Lnk338);} /* C2DM */
static object  LnkTLI337(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[337],(void **)&LnkLI337,3,first,ap);va_end(ap);return V1;} /* C1DM */
static object  LnkTLI336(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[336],(void **)&LnkLI336,first,ap);va_end(ap);return V1;} /* REMOVE-DUPLICATES */
static object  LnkTLI335(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[335],(void **)&LnkLI335,258,first,ap);va_end(ap);return V1;} /* ANALYZE-REGS1 */
static object  LnkTLI334(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[334],(void **)&LnkLI334,first,ap);va_end(ap);return V1;} /* WARN */
static object  LnkTLI333(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[333],(void **)&LnkLI333,1,first,ap);va_end(ap);return V1;} /* REGISTER */
static object  LnkTLI332(){return call_proc0(VV[332],(void **)&LnkLI332);} /* WT-CVARS */
static object  LnkTLI331(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[331],(void **)&LnkLI331,first,ap);va_end(ap);return V1;} /* C2LAMBDA-EXPR */
static object  LnkTLI330(){return call_proc0(VV[330],(void **)&LnkLI330);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI329(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[329],(void **)&LnkLI329,1,first,ap);va_end(ap);return V1;} /* WT-VS */
static object  LnkTLI328(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[328],(void **)&LnkLI328,1,first,ap);va_end(ap);return V1;} /* C2BIND */
static object  LnkTLI327(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[327],(void **)&LnkLI327,1,first,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI326(){return call_proc0(VV[326],(void **)&LnkLI326);} /* BABOON */
static object  LnkTLI325(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[325],(void **)&LnkLI325,1,first,ap);va_end(ap);return V1;} /* ADD-OBJECT */
static void LnkT324(){ call_or_link(VV[324],(void **)&Lnk324);} /* INC-INLINE-BLOCKS */
static object  LnkTLI323(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[323],(void **)&LnkLI323,first,ap);va_end(ap);return V1;} /* CS-PUSH */
static object  LnkTLI322(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[322],(void **)&LnkLI322,2,first,ap);va_end(ap);return V1;} /* C2BIND-INIT */
static object  LnkTLI321(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[321],(void **)&LnkLI321,2,first,ap);va_end(ap);return V1;} /* C2BIND-LOC */
static object  LnkTLI320(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[320],(void **)&LnkLI320,1,first,ap);va_end(ap);return V1;} /* SET-UP-VAR-CVS */
static object  LnkTLI319(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[319],(void **)&LnkLI319,first,ap);va_end(ap);return V1;} /* CONCATENATE */
static object  LnkTLI318(){return call_proc0(VV[318],(void **)&LnkLI318);} /* CVS-PUSH */
static object  LnkTLI317(){return call_proc0(VV[317],(void **)&LnkLI317);} /* VS-PUSH */
static object  LnkTLI316(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[316],(void **)&LnkLI316,2,first,ap);va_end(ap);return V1;} /* WT-V*-MACROS */
static void LnkT315(){ call_or_link(VV[315],(void **)&Lnk315);} /* C2EXPR */
static object  LnkTLI314(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[314],(void **)&LnkLI314,3,first,ap);va_end(ap);return V1;} /* ASSIGN-DOWN-VARS */
static object  LnkTLI313(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[313],(void **)&LnkLI313,2,first,ap);va_end(ap);return V1;} /* WT-REQUIREDS */
static object  LnkTLI312(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[312],(void **)&LnkLI312,first,ap);va_end(ap);return V1;} /* WT-COMMENT */
static object  LnkTLI311(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[311],(void **)&LnkLI311,2,first,ap);va_end(ap);return V1;} /* ADD-DEBUG-INFO */
static object  LnkTLI310(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[310],(void **)&LnkLI310,1,first,ap);va_end(ap);return V1;} /* WT-DOWNWARD-CLOSURE-MACRO */
static void LnkT309(){ call_or_link(VV[309],(void **)&Lnk309);} /* T3DEFUN-AUX */
static object  LnkTLI308(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[308],(void **)&LnkLI308,258,first,ap);va_end(ap);return V1;} /* ANALYZE-REGS */
static void LnkT307(){ call_or_link(VV[307],(void **)&Lnk307);} /* FIXNUMP */
static object  LnkTLI306(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[306],(void **)&LnkLI306,1,first,ap);va_end(ap);return V1;} /* VOLATILE */
static object  LnkTLI305(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[305],(void **)&LnkLI305,1,first,ap);va_end(ap);return V1;} /* MAXARGS */
static object  LnkTLI304(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[304],(void **)&LnkLI304,1,first,ap);va_end(ap);return V1;} /* VARARG-P */
static object  LnkTLI303(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[303],(void **)&LnkLI303,3,first,ap);va_end(ap);return V1;} /* WT-IF-PROCLAIMED */
static object  LnkTLI302(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[302],(void **)&LnkLI302,258,first,ap);va_end(ap);return V1;} /* PROCLAIMED-ARGD */
static object  LnkTLI301(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[301],(void **)&LnkLI301,2,first,ap);va_end(ap);return V1;} /* ADD-ADDRESS */
static object  LnkTLI300(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[300],(void **)&LnkLI300,first,ap);va_end(ap);return V1;} /* ADD-INIT */
static object  LnkTLI299(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[299],(void **)&LnkLI299,first,ap);va_end(ap);return V1;} /* FAST-LINK-PROCLAIMED-TYPE-P */
static object  LnkTLI298(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[298],(void **)&LnkLI298,2,first,ap);va_end(ap);return V1;} /* SHIFT<< */
static object  LnkTLI297(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[297],(void **)&LnkLI297,257,first,ap);va_end(ap);return V1;} /* F-TYPE */
static void LnkT296(){ call_or_link(VV[296],(void **)&Lnk296);} /* SUBTYPEP */
static void LnkT295(){ call_or_link(VV[295],(void **)&Lnk295);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI294(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[294],(void **)&LnkLI294,first,ap);va_end(ap);return V1;} /* MAKE-ARRAY */
static object  LnkTLI293(){return call_proc0(VV[293],(void **)&LnkLI293);} /* ADD-LOAD-TIME-SHARP-COMMA */
static object  LnkTLI292(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[292],(void **)&LnkLI292,2,first,ap);va_end(ap);return V1;} /* MAKE-INLINE-STRING */
static object  LnkTLI291(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[291],(void **)&LnkLI291,2,first,ap);va_end(ap);return V1;} /* TYPE-AND */
static object  LnkTLI290(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[290],(void **)&LnkLI290,2,first,ap);va_end(ap);return V1;} /* CMPFIX-ARGS */
static object  LnkTLI289(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[289],(void **)&LnkLI289,1,first,ap);va_end(ap);return V1;} /* PROCLAIM */
static object  LnkTLI288(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[288],(void **)&LnkLI288,1,first,ap);va_end(ap);return V1;} /* CHECK-DOWNWARD */
static object  LnkTLI287(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[287],(void **)&LnkLI287,first,ap);va_end(ap);return V1;} /* C1LAMBDA-EXPR */
static object  LnkTLI286(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[286],(void **)&LnkLI286,1,first,ap);va_end(ap);return V1;} /* T1PROGN */
static object  LnkTLI283(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[283],(void **)&LnkLI283,3,first,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */
static void LnkT282(){ call_or_link(VV[282],(void **)&Lnk282);} /* CMP-EVAL */
static void LnkT281(){ call_or_link(VV[281],(void **)&Lnk281);} /* DECLARATION-TYPE */
static object  LnkTLI280(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[280],(void **)&LnkLI280,1,first,ap);va_end(ap);return V1;} /* REP-TYPE */
static void LnkT279(){ call_or_link(VV[279],(void **)&Lnk279);} /* WT-DATA-FILE */
static object  LnkTLI278(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[278],(void **)&LnkLI278,1,first,ap);va_end(ap);return V1;} /* PUSH-DATA-INCF */
static object  LnkTLI277(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[277],(void **)&LnkLI277,1,first,ap);va_end(ap);return V1;} /* WT-H1 */
static object  LnkTLI276(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[276],(void **)&LnkLI276,1,first,ap);va_end(ap);return V1;} /* WT-FUNCTION-LINK */
static void LnkT275(){ call_or_link(VV[275],(void **)&Lnk275);} /* WT-GLOBAL-ENTRY */
static void LnkT257(){ call_or_link(VV[257],(void **)&Lnk257);} /* T3LOCAL-FUN */
static object  LnkTLI274(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[274],(void **)&LnkLI274,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI273(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[273],(void **)&LnkLI273,3,first,ap);va_end(ap);return V1;} /* CMP-EXPAND-MACRO */
static object  LnkTLI272(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[272],(void **)&LnkLI272,1,first,ap);va_end(ap);return V1;} /* T1ORDINARY */
static void LnkT271(){ call_or_link(VV[271],(void **)&Lnk271);} /* T1EXPR */
static object  LnkTLI270(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[270],(void **)&LnkLI270,1,first,ap);va_end(ap);return V1;} /* CMP-MACROEXPAND-1 */
static object  LnkTLI269(){return call_proc0(VV[269],(void **)&LnkLI269);} /* PRINT-CURRENT-FORM */
static object  LnkTLI268(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[268],(void **)&LnkLI268,1,first,ap);va_end(ap);return V1;} /* WT-DATA-PACKAGE-OPERATION */
static object  LnkTLI267(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[267],(void **)&LnkLI267,2,first,ap);va_end(ap);return V1;} /* MAYBE-EVAL */
static object  LnkTLI266(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[266],(void **)&LnkLI266,first,ap);va_end(ap);return V1;} /* CMPWARN */
static object  LnkTLI265(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[265],(void **)&LnkLI265,first,ap);va_end(ap);return V1;} /* CMPERR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

