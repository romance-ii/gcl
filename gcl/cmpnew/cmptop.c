
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
	(void)((*(LnkLI267))((V15)));
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
	(void) (*Lnk250)();
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
	(void) (*Lnk268)();
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
	(void)((*(LnkLI269))((V28)));
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
	(void)((*(LnkLI270))(/* INLINE-ARGS */V31));
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
	(void)((*(LnkLI270))(car((V33))));
	princ_char(32,VV[31]);
	(void)((*(LnkLI270))(cdr((V33))));
	V32= cdr((V32));
	V33= car((V32));
	goto T177;}
goto T173;
T173:;
	(void)((*(LnkLI271))(Cnil));
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
	(void)((*(LnkLI271))(Cnil));
	V35= one_plus((V35));
	goto T200;}
goto T193;
T193:;
	princ_str("\nstatic char * VVi[",VV[31]);
	V36= number_plus(small_fixnum(1),symbol_value(VV[34]));
	(void)((*(LnkLI270))(/* INLINE-ARGS */V36));
	princ_str("]={",VV[31]);
	princ_str("\n#define Cdata VV[",VV[31]);
	(void)((*(LnkLI270))(symbol_value(VV[34])));
	princ_char(93,VV[31]);
	if((VV[21]->s.s_dbind)!=Cnil){
	goto T217;}
	princ_char(10,VV[31]);
	(void)((*(LnkLI270))(small_fixnum(0)));
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
	(void)((*(LnkLI270))(caar((V37))));
	(void)((*(LnkLI270))(cadar((V37))));
	if((cdr((V37)))==Cnil){
	goto T236;}
	V38= VV[35];
	goto T234;
goto T236;
T236:;
	V38= VV[36];
goto T234;
T234:;
	(void)((*(LnkLI270))(V38));
	V37= cdr((V37));
	goto T223;}
goto T220;
T220:;
	princ_str("\n#define VV ((object *)VVi)",VV[31]);
	vs_base=vs_top;
	(void) (*Lnk272)();
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
	V42= cadr((V40));
	V43= caddr((V40));
	if(!(((V43))==(VV[37]))){
	goto T257;}
	princ_str("\nstatic object *Lclptr",VV[31]);
	(void)((*(LnkLI270))((V42)));
	princ_char(59,VV[31]);
	V43= VV[38];
	goto T255;
goto T257;
T257:;
	if(((V43))==Cnil){
	goto T266;}
	V43= (*(LnkLI273))((V43));
	goto T264;
goto T266;
T266:;
	V43= VV[39];
goto T264;
T264:;
goto T255;
T255:;
	princ_str("\nstatic ",VV[31]);
	base[8]= (V43);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk274)();
	vs_top=sup;
	V44= vs_base[0];
	(void)((*(LnkLI270))(V44));
	princ_str(" LnkT",VV[31]);
	(void)((*(LnkLI270))((V42)));
	princ_str("() ;",VV[31]);
	princ_str("\nstatic ",VV[31]);
	base[8]= (V43);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk274)();
	vs_top=sup;
	V45= vs_base[0];
	(void)((*(LnkLI270))(V45));
	princ_str(" (*Lnk",VV[31]);
	(void)((*(LnkLI270))((V42)));
	princ_str(")() = LnkT",VV[31]);
	(void)((*(LnkLI270))((V42)));
	princ_char(59,VV[31]);}
	V39= cdr((V39));
	V40= car((V39));
	goto T247;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAYBE-EVAL	*/

static object LI4(V48,V49)

object V48;register object V49;
{	 VMB4 VMS4 VMV4
goto TTL;
TTL:;
	if((V48)!=Cnil){
	goto T290;}
	if(type_of(car((V49)))==t_symbol){
	goto T291;}
	goto T290;
goto T291;
T291:;
	V48= get(car((V49)),VV[40],Cnil);
goto T290;
T290:;
	if(((V48))==Cnil){
	goto T296;}
	if((VV[41])==(symbol_value(VV[42]))){
	goto T294;}
goto T296;
T296:;
	if(!(type_of(symbol_value(VV[42]))==t_cons)){
	goto T295;}
	{register object x= VV[43],V50= symbol_value(VV[42]);
	while(!endp(V50))
	if(eql(x,V50->c.c_car)){
	goto T302;
	}else V50=V50->c.c_cdr;
	goto T295;}
goto T302;
T302:;
goto T294;
T294:;
	if(((V49))==Cnil){
	goto T303;}
	base[0]= (V49);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk275)();
	vs_top=sup;
goto T303;
T303:;
	{object V51 = Ct;
	VMR4(V51)}
goto T295;
T295:;
	{object V52 = Cnil;
	VMR4(V52)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for T1EVAL-WHEN	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	bds_check;
	{register object V53;
	check_arg(1);
	V53=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V54;
	register object V55;
	V54= Cnil;
	V55= Cnil;
	if(!(endp_prop((V53)))){
	goto T309;}
	(void)((*(LnkLI276))(VV[44],small_fixnum(1),small_fixnum(0)));
goto T309;
T309:;
	{register object V56;
	register object V57;
	V56= car((V53));
	V57= car((V56));
goto T316;
T316:;
	if(!(endp_prop((V56)))){
	goto T317;}
	goto T312;
goto T317;
T317:;
	{object V58= (V57);
	if((V58!= VV[277]))goto T322;
	V54= Ct;
	goto T321;
goto T322;
T322:;
	if((V58!= VV[43]))goto T324;
	V55= Ct;
	goto T321;
goto T324;
T324:;
	if((V58!= VV[278]))goto T326;
	goto T321;
goto T326;
T326:;
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[45],(V57))));}
goto T321;
T321:;
	V56= cdr((V56));
	V57= car((V56));
	goto T316;}
goto T312;
T312:;
	base[1]= car((V53));
	bds_bind(VV[42],base[1]);
	if(((V54))==Cnil){
	goto T334;}
	base[2]= (*(LnkLI279))(cdr((V53)));
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
goto T334;
T334:;
	if(((V55))==Cnil){
	goto T337;}
	base[2]= make_cons(VV[46],cdr((V53)));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk275)();
	bds_unwind1;
	return;
goto T337;
T337:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;}
	}
}
/*	local entry for function T1PROGN	*/

static object LI6(V60)

object V60;
{	 VMB6 VMS6 VMV6
	bds_check;
goto TTL;
TTL:;
	if(!(equal(car((V60)),VV[47]))){
	goto T341;}
	bds_bind(VV[48],Ct);
	{object V61 = (*(LnkLI279))(cdr((V60)));
	bds_unwind1;
	VMR6(V61)}
goto T341;
T341:;
	{register object V62;
	register object V63;
	V62= (V60);
	V63= car((V62));
goto T346;
T346:;
	if(!(endp_prop((V62)))){
	goto T347;}
	{object V64 = Cnil;
	VMR6(V64)}
goto T347;
T347:;
	base[1]= (V63);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk264)();
	vs_top=sup;
	V62= cdr((V62));
	V63= car((V62));
	goto T346;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CMPFIX-ARGS	*/

static object LI7(V67,V68)

object V67;object V68;
{	 VMB7 VMS7 VMV7
goto TTL;
TTL:;
	{register object V69;
	register object V70;
	V69= Cnil;
	base[1]= cadr((V67));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V70= vs_base[0];
	{register object V71;
	register object V72;
	V71= (V68);
	V72= car((V71));
goto T365;
T365:;
	if(!(endp_prop((V71)))){
	goto T366;}
	goto T361;
goto T366;
T366:;
	{register object x= car((V72)),V73= (V70);
	while(!endp(V73))
	if(eql(x,V73->c.c_car)){
	V69= V73;
	goto T371;
	}else V73=V73->c.c_cdr;
	V69= Cnil;}
goto T371;
T371:;
	if((V69)==Cnil){
	goto T372;}
	{register object V74;
	register object V75;
	V74= (V69);
	V75= cadr((V72));
	if(type_of((V74))!=t_cons)FEwrong_type_argument(Scons,(V74));
	((V74))->c.c_car = (V75);}
goto T372;
T372:;
	V71= cdr((V71));
	V72= car((V71));
	goto T365;}
goto T361;
T361:;
	{register object x= VV[49],V76= (V70);
	while(!endp(V76))
	if(eql(x,V76->c.c_car)){
	V69= V76;
	goto T385;
	}else V76=V76->c.c_cdr;
	V69= Cnil;}
goto T385;
T385:;
	if(((V69))==Cnil){
	goto T383;}
	{object V78;
	V78= append((V68),cdr((V69)));
	if(type_of(V69)!=t_cons)FEwrong_type_argument(Scons,V69);
	(V69)->c.c_cdr = (V78);
	goto T381;}
goto T383;
T383:;
	V79= make_cons(VV[49],(V68));
	V70= append((V70),/* INLINE-ARGS */V79);
goto T381;
T381:;
	{object V80 = listA(3,car((V67)),(V70),cddr((V67)));
	VMR7(V80)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFUN	*/

static object LI8(V82)

object V82;
{	 VMB8 VMS8 VMV8
	bds_check;
goto TTL;
TTL:;
	{object V83;
	V83= symbol_value(VV[50]);
	bds_bind(VV[52],Cnil);
	if(endp_prop((V82))){
	goto T391;}
	if(!(endp_prop(cdr((V82))))){
	goto T390;}
goto T391;
T391:;
	V85 = make_fixnum((long)length((V82)));
	(void)((*(LnkLI276))(VV[51],small_fixnum(2),V85));
goto T390;
T390:;
	if(type_of(car((V82)))==t_symbol){
	goto T395;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[53],car((V82)))));
goto T395;
T395:;
	V86= make_cons(VV[51],(V82));
	(void)((*(LnkLI260))(Cnil,/* INLINE-ARGS */V86));
goto T400;
T400:;
	setq(VV[6],Ct);
	setq(VV[54],Cnil);
	{register object V87;
	object V88;
	object V89;
	register object V90;{object V91;
	V91= get(car((V82)),VV[60],Cnil);
	if(V91==Cnil)goto T407;
	V88= V91;
	goto T406;
goto T407;
T407:;}
	setq(VV[61],number_plus(symbol_value(VV[61]),small_fixnum(1)));
	V88= symbol_value(VV[61]);
goto T406;
T406:;
	V90= car((V82));
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	V87= Cnil;
	bds_bind(VV[59],Cnil);
	V89= Cnil;
	V87= (VFUN_NARGS=2,(*(LnkLI280))(cdr((V82)),(V90)));
	if(!(eql((V83),symbol_value(VV[50])))){
	goto T414;}
	goto T413;
goto T414;
T414:;
	(void)(structure_set(cadr((V87)),VV[62],4,Ct));
goto T413;
T413:;
	V92= structure_ref(cadr((V87)),VV[62],1);
	(void)((*(LnkLI281))(/* INLINE-ARGS */V92));
	if((get((V90),VV[63],Cnil))==Cnil){
	goto T417;}
	{object V93;
	V93= make_fixnum((long)length(car(caddr((V87)))));
	(void)(sputprop((V90),VV[63],(V93)));
	base[6]= (V93);
	base[7]= VV[65];
	base[8]= Ct;
	vs_top=(vs_base=base+6)+3;
	Lmake_list();
	vs_top=sup;
	V94= vs_base[0];
	V95= list(4,VV[64],(V90),V94,Ct);
	(void)((*(LnkLI282))(/* INLINE-ARGS */V95));}
goto T417;
T417:;
	if((get((V90),VV[66],Cnil))==Cnil){
	goto T428;}
	{object V96;
	register object V97;
	V96= caddr((V87));
	V97= Cnil;
	if((cadr((V96)))==Cnil){
	goto T433;}
	goto T428;
goto T433;
T433:;
	if((caddr((V96)))==Cnil){
	goto T435;}
	goto T428;
goto T435;
T435:;
	if((cadddr((V96)))==Cnil){
	goto T437;}
	goto T428;
goto T437;
T437:;
	if(((long)length(car((V96))))<(64)){
	goto T439;}
	goto T428;
goto T439;
T439:;
	{register object V98;
	register object V99;
	object V100;
	V98= car((V96));
	V99= get((V90),VV[67],Cnil);
	V100= Cnil;
goto T446;
T446:;
	if(!(endp_prop((V98)))){
	goto T447;}
	if(endp_prop((V99))){
	goto T450;}
	goto T442;
goto T450;
T450:;
	if(((V97))==Cnil){
	goto T453;}
	V82= (*(LnkLI283))((V82),(V97));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T400;
goto T453;
T453:;
	if(((V100))==Cnil){
	goto T441;}
	goto T442;
goto T447;
T447:;
	{register object V101;
	V101= car((V98));
	if(!(equal(car((V99)),VV[68]))){
	goto T460;}
	goto T442;
goto T460;
T460:;
	V102= structure_ref((V101),VV[69],1);
	if((/* INLINE-ARGS */V102)==(VV[70])){
	goto T466;}
	V103= structure_ref((V101),VV[69],1);
	if(!((/* INLINE-ARGS */V103)==(VV[71]))){
	goto T465;}
	if(!((car((V99)))==(Ct))){
	goto T465;}
goto T466;
T466:;
	if((structure_ref((V101),VV[69],3))!=Cnil){
	goto T465;}
	V104= structure_ref((V101),VV[69],4);
	if(!((/* INLINE-ARGS */V104)==(VV[72]))){
	goto T464;}
goto T465;
T465:;
	{object V105;
	V106= structure_ref((V101),VV[69],0);
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V107= vs_base[0];
	V105= list(2,/* INLINE-ARGS */V106,V107);
	V97= make_cons((V105),(V97));}
goto T464;
T464:;
	V108= car((V99));
	V109= structure_ref((V101),VV[69],5);
	if(((*(LnkLI284))(/* INLINE-ARGS */V108,/* INLINE-ARGS */V109))==Cnil){
	goto T463;}
	{register object x= car((V99)),V110= VV[73];
	while(!endp(V110))
	if(eql(x,V110->c.c_car)){
	goto T458;
	}else V110=V110->c.c_cdr;}
	V111= structure_ref((V101),VV[69],4);
	if((/* INLINE-ARGS */V111)==(VV[74])){
	goto T458;}
	if((symbol_value(VV[75]))!=Cnil){
	goto T458;}
	V113= structure_ref(cadr((V87)),VV[62],0);
	{register object x= (V101),V112= /* INLINE-ARGS */V113;
	while(!endp(V112))
	if(eql(x,V112->c.c_car)){
	goto T488;
	}else V112=V112->c.c_cdr;
	goto T458;}
goto T488;
T488:;
goto T463;
T463:;
	if(((V97))!=Cnil){
	goto T489;}
	V114= structure_ref((V101),VV[69],0);
	(void)((VFUN_NARGS=3,(*(LnkLI259))(VV[76],(V90),/* INLINE-ARGS */V114)));
goto T489;
T489:;
	V100= Ct;}
goto T458;
T458:;
	V98= cdr((V98));
	V99= cdr((V99));
	goto T446;}
goto T442;
T442:;
	goto T428;
goto T441;
T441:;
	if(!(type_of((V88))==t_fixnum||
type_of((V88))==t_bignum||
type_of((V88))==t_ratio||
type_of((V88))==t_shortfloat||
type_of((V88))==t_longfloat||
type_of((V88))==t_complex)){
	goto T428;}}
	{object V115;
	V116= get((V90),VV[67],Cnil);
	V117= get((V90),VV[77],Cnil);
	V118= get((V90),VV[67],Cnil);
	V115= list(5,(V90),V116,V117,small_fixnum(3),(*(LnkLI285))((V88),V118));
	setq(VV[78],make_cons((V115),symbol_value(VV[78])));
	goto T426;}
goto T428;
T428:;
	{object V119;
	V120= get((V90),VV[77],Cnil);
	V119= ((V120)==(Ct)?Ct:Cnil);
	if(((V119))==Cnil){
	goto T426;}}
goto T426;
T426:;
	if((cadddr((V87)))==Cnil){
	goto T506;}
	V89= cadddr((V87));
goto T506;
T506:;
	(void)((*(LnkLI286))());
	{object V121;
	V121= list(6,VV[51],(V90),(V88),(V87),(V89),(VV[59]->s.s_dbind));
	setq(VV[24],make_cons((V121),symbol_value(VV[24])));}
	{object V122;
	V122= make_cons((V90),(V88));
	setq(VV[79],make_cons((V122),symbol_value(VV[79])));
	V123= symbol_value(VV[79]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}}
	{object V124 = Cnil;
	bds_unwind1;
	VMR8(V124)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-INLINE-STRING	*/

static object LI9(V127,V128)

object V127;object V128;
{	 VMB9 VMS9 VMV9
goto TTL;
TTL:;
	if(((V128))!=Cnil){
	goto T517;}
	base[0]= Cnil;
	base[1]= VV[80];
	base[2]= (V127);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V129 = vs_base[0];
	VMR9(V129)}
goto T517;
T517:;
	{register object V130;
	V130= (VFUN_NARGS=7,(*(LnkLI287))(small_fixnum(100),VV[81],VV[82],VV[83],small_fixnum(0),VV[84],Ct));
	base[0]= (V130);
	base[1]= VV[85];
	base[2]= (V127);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{register object V131;
	register long V132;
	V132= 0;
	V131= (V128);
goto T530;
T530:;
	if(!(endp_prop(cdr((V131))))){
	goto T531;}
	base[0]= (V130);
	base[1]= VV[86];
	base[2]= make_fixnum(V132);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T527;
goto T531;
T531:;
	base[0]= (V130);
	base[1]= VV[87];
	base[2]= make_fixnum(V132);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V131= cdr((V131));
	V132= (long)(V132)+1;
	goto T530;}
goto T527;
T527:;
	{object V133 = (V130);
	VMR9(V133)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CS-PUSH	*/

static object LI10(va_alist)
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V134;
	Vcs[0]=Vcs[0];
	va_start(ap);
	narg = narg - 0;
	if (narg <= 0) goto T546;
	else {
	V134= va_arg(ap,object);}
	--narg; goto T547;
goto T546;
T546:;
	V134= Cnil;
goto T547;
T547:;
	{object V135;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V135= symbol_value(VV[88]);
	{object V136;
	if(((V134))==Cnil){
	goto T554;}
	V136= make_cons((V134),(V135));
	goto T552;
goto T554;
T554:;
	V136= (V135);
goto T552;
T552:;
	setq(VV[18],make_cons((V136),symbol_value(VV[18])));}
	{object V137 = (V135);
	VMR10(V137)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function F-TYPE	*/

static object LI11(V139)

register object V139;
{	 VMB11 VMS11 VMV11
goto TTL;
TTL:;
	base[0]= (V139);
	base[1]= VV[69];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk288)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T557;}
	V139= structure_ref((V139),VV[69],5);
goto T557;
T557:;
	if(((V139))==Cnil){
	goto T564;}
	base[0]= (V139);
	base[1]= VV[89];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk289)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T564;}
	{long V140 = 1;
	VMR11((object)V140)}
goto T564;
T564:;
	{long V141 = 0;
	VMR11((object)V141)}
	base[0]=base[0];
}
/*	local entry for function PROCLAIMED-ARGD	*/

static object LI12(V144,V145)

register object V144;object V145;
{	 VMB12 VMS12 VMV12
goto TTL;
TTL:;
	{register long V146;
	register long V147;
	register object V148;
	register object V149;
	V146= (long)length((V144));
	V147= 8;
	V148= make_fixnum((long)(*(LnkLI290))((V145)));
	V149= Ct;
goto T574;
T574:;
	if(eql(small_fixnum(0),(V148))){
	goto T576;}
	V146= (long)(V146)+((long)((fix((V148))) << (V147)));
goto T576;
T576:;
	if(((V149))==Cnil){
	goto T580;}
	V147= 10;
	V149= Cnil;
goto T580;
T580:;
	if(((V144))!=Cnil){
	goto T586;}
	{long V150 = V146;
	VMR12((object)V150)}
goto T586;
T586:;
	V147= (long)(V147)+(2);
	{register object V152;
	V152= car((V144));
	V144= cdr((V144));
	V151= (V152);}
	V148= make_fixnum((long)(*(LnkLI290))(V151));
	goto T574;}
}
/*	local entry for function WT-IF-PROCLAIMED	*/

static object LI13(V156,V157,V158)

register object V156;object V157;object V158;
{	 VMB13 VMS13 VMV13
goto TTL;
TTL:;
	if(((VFUN_NARGS=1,(*(LnkLI292))((V156))))==Cnil){
	goto T598;}
	{register object x= (V156),V159= symbol_value(VV[78]);
	while(!endp(V159))
	if(type_of(V159->c.c_car)==t_cons &&eql(x,V159->c.c_car->c.c_car)){
	goto T602;
	}else V159=V159->c.c_cdr;
	goto T601;}
goto T602;
T602:;
	V160= list(2,VV[91],(V156));
	V161= (*(LnkLI294))(VV[92],(V157));
	V162= get((V156),VV[67],Cnil);
	V163= get((V156),VV[77],Cnil);
	V164 = make_fixnum((long)(*(LnkLI295))(V162,V163));
	V165= list(4,VV[90],/* INLINE-ARGS */V160,/* INLINE-ARGS */V161,V164);
	(void)((VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V165)));
	{object V166 = Ct;
	VMR13(V166)}
goto T601;
T601:;
	{register object V167;
	register object V168;
	object V169;
	V167= make_fixnum((long)length(car(caddr((V158)))));
	V170= get((V156),VV[67],Cnil);
	V168= make_fixnum((long)length(V170));
	V172= get((V156),VV[67],Cnil);
	{register object x= VV[68],V171= V172;
	while(!endp(V171))
	if(eql(x,V171->c.c_car)){
	V169= V171;
	goto T610;
	}else V171=V171->c.c_cdr;
	V169= Cnil;}
goto T610;
T610:;
	if(((V169))==Cnil){
	goto T613;}
	base[0]= (V167);
	vs_top=(vs_base=base+0)+1;
	Lmonotonically_nonincreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T615;}
	goto T606;
goto T615;
T615:;{object V173;
	V174 = make_fixnum((long)length((V169)));
	V173= number_minus((V168),V174);
	if(V173==Cnil)goto T618;
	goto T606;
goto T618;
T618:;}
	V175 = make_fixnum((long)length((V169)));
	V176= number_minus((V168),V175);
	(void)((VFUN_NARGS=4,(*(LnkLI259))(VV[93],(V156),/* INLINE-ARGS */V176,(V167))));
	goto T606;
goto T613;
T613:;
	if(eql((V167),(V168))){
	goto T621;}
	(void)((VFUN_NARGS=4,(*(LnkLI259))(VV[94],(V156),(V168),(V167))));
	goto T606;
goto T621;
T621:;
	(void)((VFUN_NARGS=2,(*(LnkLI259))(VV[95],(V156))));}
goto T606;
T606:;
	{object V177 = Cnil;
	VMR13(V177)}
goto T598;
T598:;
	{object V178 = Cnil;
	VMR13(V178)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VOLATILE	*/

static object LI14(V180)

object V180;
{	 VMB14 VMS14 VMV14
goto TTL;
TTL:;
	if((structure_ref((V180),VV[62],4))==Cnil){
	goto T624;}
	{object V181 = VV[96];
	VMR14(V181)}
goto T624;
T624:;
	{object V182 = VV[97];
	VMR14(V182)}
	return Cnil;
}
/*	local entry for function REGISTER	*/

static object LI15(V184)

object V184;
{	 VMB15 VMS15 VMV15
goto TTL;
TTL:;
	if(!(equal(symbol_value(VV[20]),VV[98]))){
	goto T627;}
	{long V185= fix(structure_ref((V184),VV[69],6));
	if(!((/* INLINE-ARGS */V185)>=(fix(symbol_value(VV[99]))))){
	goto T627;}}
	{object V186 = VV[100];
	VMR15(V186)}
goto T627;
T627:;
	{object V187 = VV[101];
	VMR15(V187)}
	return Cnil;
}
/*	local entry for function VARARG-P	*/

static object LI16(V189)

object V189;
{	 VMB16 VMS16 VMV16
goto TTL;
TTL:;
	V190= get((V189),VV[77],Cnil);
	if(equal(V190,Ct)){
	goto T631;}
	{object V191 = Cnil;
	VMR16(V191)}
goto T631;
T631:;
	{register object V192;
	V192= get((V189),VV[67],Cnil);
goto T636;
T636:;
	if(((V192))!=Cnil){
	goto T637;}
	{object V193 = Ct;
	VMR16(V193)}
goto T637;
T637:;
	if(!(type_of((V192))==t_cons)){
	goto T642;}
	goto T641;
goto T642;
T642:;
	{object V194 = Cnil;
	VMR16(V194)}
goto T641;
T641:;
	if(!((car((V192)))==(Ct))){
	goto T645;}
	goto T644;
goto T645;
T645:;
	if(!((car((V192)))==(VV[68]))){
	goto T647;}
	goto T644;
goto T647;
T647:;
	{object V195 = Cnil;
	VMR16(V195)}
goto T644;
T644:;
	V192= cdr((V192));
	goto T636;}
	return Cnil;
}
/*	local entry for function MAXARGS	*/

static object LI17(V197)

register object V197;
{	 VMB17 VMS17 VMV17
goto TTL;
TTL:;
	if((cadddr((V197)))!=Cnil){
	goto T652;}
	if((caddr((V197)))==Cnil){
	goto T653;}
goto T652;
T652:;
	{object V198 = small_fixnum(64);
	VMR17(V198)}
goto T653;
T653:;
	base[0]= make_fixnum((long)length(car((V197))));
	base[1]= make_fixnum((long)length(cadr((V197))));
	V199 = make_fixnum((long)length(car(cddddr((V197)))));
	base[2]= number_times(small_fixnum(2),V199);
	vs_top=(vs_base=base+0)+3;
	Lplus();
	vs_top=sup;
	{object V200 = vs_base[0];
	VMR17(V200)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-ADDRESS	*/

static object LI18(V203,V204)

object V203;object V204;
{	 VMB18 VMS18 VMV18
goto TTL;
TTL:;
	{object V205;
	V205= list(2,(V203),(V204));
	setq(VV[21],make_cons((V205),symbol_value(VV[21])));}
	{object V206;
	V206= symbol_value(VV[22]);
	setq(VV[22],number_plus(symbol_value(VV[22]),small_fixnum(1)));
	{object V207 = (V206);
	VMR18(V207)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFUN	*/

static object LI19(V213,V214,V215,V216,V217)

register object V213;register object V214;register object V215;object V216;object V217;
{	 VMB19 VMS19 VMV19
goto TTL;
TTL:;
	if((get((V213),VV[102],Cnil))==Cnil){
	goto T665;}
	{object V218 = Cnil;
	VMR19(V218)}
goto T665;
T665:;
	if(((V216))==Cnil){
	goto T668;}
	V219= list(4,VV[103],list(2,VV[91],(V213)),(V216),VV[104]);
	(void)((VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V219)));
goto T668;
T668:;
	{object V220;
	V220= (*(LnkLI296))((V213),(V214),(V215));
	if(((V220))==Cnil){
	goto T674;}
	goto T671;
goto T674;
T674:;
	if(((*(LnkLI297))((V213)))==Cnil){
	goto T677;}
	{object V221;
	V221= cadddr(caddr((V215)));
	princ_str("\nstatic object LI",VV[31]);
	(void)((*(LnkLI270))((V214)));
	princ_str("();",VV[31]);
	if(((V221))==Cnil){
	goto T685;}
	V222= list(2,VV[91],(V213));
	V223= (*(LnkLI294))(VV[106],(V214));
	V224 = make_fixnum((long)length(car(caddr((V215)))));
	V225= (*(LnkLI298))(caddr((V215)));
	V226= (*(LnkLI291))(/* INLINE-ARGS */V225,small_fixnum(8));
	V227= number_plus(V224,/* INLINE-ARGS */V226);
	base[0]= Cnil;
	base[1]= VV[107];
	base[2]= (V214);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V228= vs_base[0];
	V229= list(5,VV[105],/* INLINE-ARGS */V222,/* INLINE-ARGS */V223,/* INLINE-ARGS */V227,(*(LnkLI294))(V228,VV[108]));
	(void)((VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V229)));
	goto T671;
goto T685;
T685:;
	V230= list(2,VV[91],(V213));
	V231= (*(LnkLI294))(VV[110],(V214));
	V232 = make_fixnum((long)length(car(caddr((V215)))));
	V233= (*(LnkLI298))(caddr((V215)));
	V234= (*(LnkLI291))(/* INLINE-ARGS */V233,small_fixnum(8));
	V235= list(4,VV[109],/* INLINE-ARGS */V230,/* INLINE-ARGS */V231,number_plus(V232,/* INLINE-ARGS */V234));
	(void)((VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V235)));
	goto T671;}
goto T677;
T677:;
	if(!(type_of((V214))==t_fixnum||
type_of((V214))==t_bignum||
type_of((V214))==t_ratio||
type_of((V214))==t_shortfloat||
type_of((V214))==t_longfloat||
type_of((V214))==t_complex)){
	goto T692;}
	princ_str("\nstatic void L",VV[31]);
	(void)((*(LnkLI270))((V214)));
	princ_str("();",VV[31]);
	V236= list(2,VV[91],(V213));
	V237= list(3,VV[111],/* INLINE-ARGS */V236,(*(LnkLI294))(VV[112],(V214)));
	(void)((VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V237)));
	goto T671;
goto T692;
T692:;
	princ_char(10,VV[31]);
	(void)((*(LnkLI270))((V214)));
	princ_str("();",VV[31]);
	V238= list(2,VV[91],(V213));
	V239= list(3,VV[111],/* INLINE-ARGS */V238,(*(LnkLI294))(VV[113],(V214)));
	(void)((VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V239)));}
goto T671;
T671:;
	if(!(number_compare(symbol_value(VV[114]),small_fixnum(2))<0)){
	goto T703;}
	{object V240 = sputprop((V213),VV[115],Ct);
	VMR19(V240)}
goto T703;
T703:;
	{object V241 = Cnil;
	VMR19(V241)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-DEBUG	*/

static object LI20(V244,V245)

object V244;object V245;
{	 VMB20 VMS20 VMV20
goto TTL;
TTL:;
	{object V246 = putprop((V244),(V245),VV[116]);
	VMR20(V246)}
	return Cnil;
}
/*	local entry for function T3DEFUN	*/

static object LI21(V252,V253,V254,V255,V256)

register object V252;register object V253;register object V254;object V255;object V256;
{	 VMB21 VMS21 VMV21
	bds_check;
goto TTL;
TTL:;
	{register object V257;
	V257= Cnil;
	bds_bind(VV[0],list(2,VV[51],(V252)));
	bds_bind(VV[20],(*(LnkLI299))(cadr((V254))));
	bds_bind(VV[117],Cnil);
	{register object V258;
	register object V259;
	V258= symbol_value(VV[78]);
	V259= car((V258));
goto T715;
T715:;
	if(!(endp_prop((V258)))){
	goto T716;}
	goto T710;
goto T716;
T716:;{object V260;
	base[4]= cadddr((V259));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk300)();
	vs_top=sup;
	V260= vs_base[0];
	if(V260==Cnil)goto T721;
	goto T720;
goto T721;
T721:;}
	base[4]= VV[118];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
goto T720;
T720:;
	if((car((V259)))==((V252))){
	goto T726;}
	goto T725;
goto T726;
T726:;
	if((cadr(cddddr((V259))))==Cnil){
	goto T728;}
	goto T725;
goto T728;
T728:;
	V257= (V259);
	if(((V257))==Cnil){
	goto T710;}
	goto T711;
goto T725;
T725:;
	V258= cdr((V258));
	V259= car((V258));
	goto T715;}
goto T711;
T711:;
	if(((VFUN_NARGS=1,(*(LnkLI292))((V252))))!=Cnil){
	goto T736;}
	{object V261;
	V261= list(4,(V252),(V253),cadr((V257)),caddr((V257)));
	setq(VV[29],make_cons((V261),symbol_value(VV[29])));}
goto T736;
T736:;
	V262= structure_ref(cadr((V254)),VV[62],1);
	(void)((*(LnkLI301))(/* INLINE-ARGS */V262,small_fixnum(0)));
	base[3]= VV[119];
	{object V263= caddr((V257));
	if((V263!= VV[89]))goto T744;
	base[4]= VV[120];
	goto T743;
goto T744;
T744:;
	if((V263!= VV[142]))goto T745;
	base[4]= VV[121];
	goto T743;
goto T745;
T745:;
	if((V263!= VV[143]))goto T746;
	base[4]= VV[122];
	goto T743;
goto T746;
T746:;
	if((V263!= VV[144]))goto T747;
	base[4]= VV[123];
	goto T743;
goto T747;
T747:;
	base[4]= VV[124];}
goto T743;
T743:;
	base[5]= (V252);
	base[6]= (V253);
	base[7]= (V254);
	base[8]= (V256);
	base[9]= (V257);
	vs_top=(vs_base=base+3)+7;
	(void) (*Lnk302)();
	vs_top=sup;
	goto T708;
goto T710;
T710:;
	if(((*(LnkLI297))((V252)))==Cnil){
	goto T754;}
	V264= structure_ref(cadr((V254)),VV[62],1);
	(void)((*(LnkLI301))(/* INLINE-ARGS */V264,small_fixnum(0)));
	base[3]= VV[125];
	base[4]= VV[124];
	base[5]= (V252);
	base[6]= (V253);
	base[7]= (V254);
	base[8]= (V256);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk302)();
	vs_top=sup;
	goto T708;
goto T754;
T754:;
	V265= structure_ref(cadr((V254)),VV[62],1);
	(void)((*(LnkLI301))(/* INLINE-ARGS */V265,small_fixnum(2)));
	base[3]= VV[126];
	base[4]= VV[127];
	base[5]= (V252);
	base[6]= (V253);
	base[7]= (V254);
	base[8]= (V256);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk302)();
	vs_top=sup;
goto T708;
T708:;
	(void)((*(LnkLI303))((V253)));
	{object V266 = (*(LnkLI304))((V252),(V254));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR21(V266)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for T3DEFUN-AUX	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	bds_check;
	{object V267;
	object V268;
	if(vs_top-vs_base<2) too_few_arguments();
	V267=(base[0]);
	bds_bind(VV[128],base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V268=(base[2]);
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
	base[16]= (V267);
	{object V269;
	V269= (V268);
	 vs_top=base+17;
	 while(!endp(V269))
	 {vs_push(car(V269));V269=cdr(V269);}
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

static object LI23(V275,V276,V277,V278,V279)

object V275;object V276;object V277;object V278;object V279;
{	 VMB23 VMS23 VMV23
	bds_check;
goto TTL;
TTL:;
	{object V280;
	object V281;
	V280= Cnil;
	V281= caaddr((V277));
	{register object V282;
	object V283;
	V283= cadr((V279));
	V282= (V281);
goto T781;
T781:;
	if(!(endp_prop((V282)))){
	goto T782;}
	goto T778;
goto T782;
T782:;
	V284= structure_ref(car((V282)),VV[69],1);
	if(!((/* INLINE-ARGS */V284)==(VV[71]))){
	goto T788;}
	{object V285;
	V286= car((V282));
	V287= structure_ref(car((V282)),VV[69],4);
	V285= make_cons(/* INLINE-ARGS */V286,/* INLINE-ARGS */V287);
	V280= make_cons((V285),(V280));
	goto T786;}
goto T788;
T788:;
	V288= car((V282));
	{object V290= car((V283));
	if((V290!= VV[89]))goto T793;
	V289= VV[89];
	goto T792;
goto T793;
T793:;
	if((V290!= VV[142]))goto T794;
	V289= VV[142];
	goto T792;
goto T794;
T794:;
	if((V290!= VV[143]))goto T795;
	V289= VV[143];
	goto T792;
goto T795;
T795:;
	if((V290!= VV[144]))goto T796;
	V289= VV[144];
	goto T792;
goto T796;
T796:;
	V289= VV[74];}
goto T792;
T792:;
	(void)(structure_set(/* INLINE-ARGS */V288,VV[69],1,V289));
goto T786;
T786:;
	V291= car((V282));
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	(void)(structure_set(/* INLINE-ARGS */V291,VV[69],4,symbol_value(VV[88])));
	V282= cdr((V282));
	V283= cdr((V283));
	goto T781;}
goto T778;
T778:;
	(void)((VFUN_NARGS=2,(*(LnkLI305))(VV[145],(V275))));
	princ_str("\nstatic ",VV[31]);
	base[1]= (*(LnkLI273))(caddr((V279)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk274)();
	vs_top=sup;
	V292= vs_base[0];
	(void)((*(LnkLI270))(V292));
	princ_str("LI",VV[31]);
	(void)((*(LnkLI270))((V276)));
	princ_str("();",VV[31]);
	princ_str("\nstatic ",VV[25]);
	base[1]= (*(LnkLI273))(caddr((V279)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk274)();
	vs_top=sup;
	V293= vs_base[0];
	(void)((*(LnkLI267))(V293));
	princ_str("LI",VV[25]);
	(void)((*(LnkLI267))((V276)));
	princ_char(40,VV[25]);
	(void)((*(LnkLI306))((V281),cadr((V279))));
	{object V294;
	V294= symbol_value(VV[136]);
	if((symbol_value(VV[147]))==Cnil){
	goto T824;}
	base[1]= make_cons((V275),(V281));
	goto T822;
goto T824;
T824:;
	base[1]= Cnil;
goto T822;
T822:;
	bds_bind(VV[146],base[1]);
	bds_bind(VV[134],symbol_value(VV[134]));
	princ_str("\n{	",VV[25]);
	V295= structure_ref(cadr((V277)),VV[62],1);
	(void)((*(LnkLI307))(/* INLINE-ARGS */V295,(V276),VV[148]));
	princ_str(" VMB",VV[25]);
	(void)((*(LnkLI267))((V294)));
	princ_str(" VMS",VV[25]);
	(void)((*(LnkLI267))((V294)));
	princ_str(" VMV",VV[25]);
	(void)((*(LnkLI267))((V294)));
	if(((V278))==Cnil){
	goto T836;}
	princ_str("\n	bds_check;",VV[25]);
goto T836;
T836:;
	if((symbol_value(VV[149]))==Cnil){
	goto T840;}
	princ_str("\n	ihs_check;",VV[25]);
goto T840;
T840:;
	if(((VV[146]->s.s_dbind))==Cnil){
	goto T844;}
	(VV[134]->s.s_dbind)= make_cons(VV[150],(VV[134]->s.s_dbind));
	princ_str("\ngoto TTL;",VV[25]);
	princ_str("\nTTL:;",VV[25]);
goto T844;
T844:;
	{register object V297;
	register object V298;
	V297= (V280);
	V298= car((V297));
goto T856;
T856:;
	if(!(endp_prop((V297)))){
	goto T857;}
	goto T852;
goto T857;
T857:;
	princ_str("\n	bds_bind(VV[",VV[25]);
	(void)((*(LnkLI267))(cdr((V298))));
	princ_str("],V",VV[25]);
	V299= structure_ref(car((V298)),VV[69],4);
	(void)((*(LnkLI267))(/* INLINE-ARGS */V299));
	princ_str(");",VV[25]);
	(VV[134]->s.s_dbind)= make_cons(VV[151],(VV[134]->s.s_dbind));
	(void)(structure_set(car((V298)),VV[69],1,VV[71]));
	(void)(structure_set(car((V298)),VV[69],4,cdr((V298))));
	V297= cdr((V297));
	V298= car((V297));
	goto T856;}
goto T852;
T852:;
	base[3]= caddr(cddr((V277)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk308)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T880;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T880;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T880;}
	goto T878;
goto T880;
T880:;
	princ_str("\n	base[0]=base[0];",VV[25]);
goto T878;
T878:;
	V301= (*(LnkLI273))(caddr((V279)));
	if(!(equal(VV[152],/* INLINE-ARGS */V301))){
	goto T887;}
	princ_str("\n	return Cnil;",VV[25]);
goto T887;
T887:;
	princ_str("\n}",VV[25]);
	{object V302 = (*(LnkLI309))((V294),caddr((V279)));
	bds_unwind1;
	bds_unwind1;
	VMR23(V302)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-UP-VAR-CVS	*/

static object LI24(V304)

object V304;
{	 VMB24 VMS24 VMV24
goto TTL;
TTL:;
	if((symbol_value(VV[153]))==Cnil){
	goto T894;}
	V305= (*(LnkLI310))();
	{object V306 = structure_set((V304),VV[69],2,/* INLINE-ARGS */V305);
	VMR24(V306)}
goto T894;
T894:;
	V307= (*(LnkLI311))();
	{object V308 = structure_set((V304),VV[69],2,/* INLINE-ARGS */V307);
	VMR24(V308)}
	return Cnil;
}
/*	local entry for function T3DEFUN-VARARG	*/

static object LI25(V313,V314,V315,V316)

object V313;object V314;object V315;object V316;
{	 VMB25 VMS25 VMV25
	bds_check;
goto TTL;
TTL:;
	{object V317;
	register object V318;
	object V319;
	object V320;
	object V321;
	object V322;
	object V323;
	object V324;
	V317= Cnil;
	bds_bind(VV[153],Cnil);
	base[1]= Cnil;
	V318= Cnil;
	V319= Ct;
	V320= Cnil;
	bds_bind(VV[154],small_fixnum(0));
	V321= Cnil;
	V322= caddr((V315));
	V323= Cnil;{object V325;
	V325= caddr((V322));
	if(V325==Cnil)goto T904;
	V324= V325;
	goto T903;
goto T904;
T904:;}{object V326;
	V326= cadr((V322));
	if(V326==Cnil)goto T906;
	V324= V326;
	goto T903;
goto T906;
T906:;}
	V324= cadddr((V322));
goto T903;
T903:;
	{object V327;
	register object V328;
	V327= car((V322));
	V328= car((V327));
goto T912;
T912:;
	if(!(endp_prop((V327)))){
	goto T913;}
	goto T908;
goto T913;
T913:;
	{object V329;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V329= list(2,VV[155],symbol_value(VV[88]));
	V317= make_cons((V329),(V317));}
	V327= cdr((V327));
	V328= car((V327));
	goto T912;}
goto T908;
T908:;
	(void)((VFUN_NARGS=2,(*(LnkLI305))(VV[156],(V313))));
	princ_str("\nstatic object LI",VV[31]);
	(void)((*(LnkLI270))((V314)));
	princ_str("();",VV[31]);
	princ_str("\nstatic object LI",VV[25]);
	(void)((*(LnkLI267))((V314)));
	princ_char(40,VV[25]);
	(void)((*(LnkLI312))((V317)));
	if(((V324))==Cnil){
	goto T936;}
	if(((V317))==Cnil){
	goto T939;}
	princ_char(44,VV[25]);
goto T939;
T939:;
	princ_str("va_alist",VV[25]);
goto T936;
T936:;
	princ_char(41,VV[25]);
	if(((V317))==Cnil){
	goto T946;}
	princ_str("\n	object ",VV[25]);
	(void)((*(LnkLI312))((V317)));
	princ_char(59,VV[25]);
goto T946;
T946:;
	if(((V324))==Cnil){
	goto T953;}
	princ_str("\n	va_dcl ",VV[25]);
goto T953;
T953:;
	{object V330;
	V330= symbol_value(VV[136]);
	if(symbol_value(VV[147])==Cnil){
	base[5]= Cnil;
	goto T958;}
	if((caddr((V322)))==Cnil){
	goto T959;}
	base[5]= Cnil;
	goto T958;
goto T959;
T959:;
	{object V331;
	object V332;
	V331= car((V322));
	V332= car((V331));
goto T966;
T966:;
	if(!(endp_prop((V331)))){
	goto T967;}
	goto T961;
goto T967;
T967:;
	if((structure_ref((V332),VV[69],3))==Cnil){
	goto T971;}
	goto T962;
goto T971;
T971:;
	V331= cdr((V331));
	V332= car((V331));
	goto T966;}
goto T962;
T962:;
	base[5]= Cnil;
	goto T958;
goto T961;
T961:;
	if((cadr((V322)))==Cnil){
	goto T979;}
	base[5]= Cnil;
	goto T958;
goto T979;
T979:;
	if((car(cddddr((V322))))==Cnil){
	goto T981;}
	base[5]= Cnil;
	goto T958;
goto T981;
T981:;
	base[5]= make_cons((V313),car((V322)));
goto T958;
T958:;
	bds_bind(VV[146],base[5]);
	bds_bind(VV[134],symbol_value(VV[134]));
	princ_str("\n{	",VV[25]);
	if(((V324))==Cnil){
	goto T985;}
	princ_str("\n	va_list ap;",VV[25]);
goto T985;
T985:;
	princ_str("\n	int narg = VFUN_NARGS;",VV[25]);
	V333= structure_ref(cadr((V315)),VV[62],1);
	(void)((*(LnkLI307))(/* INLINE-ARGS */V333,(V314),VV[148]));
	princ_str(" VMB",VV[25]);
	(void)((*(LnkLI267))((V330)));
	princ_str(" VMS",VV[25]);
	(void)((*(LnkLI267))((V330)));
	princ_str(" VMV",VV[25]);
	(void)((*(LnkLI267))((V330)));
	if(((V316))==Cnil){
	goto T999;}
	princ_str("\n	bds_check;",VV[25]);
goto T999;
T999:;
	if((symbol_value(VV[149]))==Cnil){
	goto T1003;}
	princ_str("\n	ihs_check;",VV[25]);
goto T1003;
T1003:;
	if((V324)!=Cnil){
	goto T1007;}
	princ_str("\n	if ( narg!= ",VV[25]);
	V334 = make_fixnum((long)length((V317)));
	(void)((*(LnkLI267))(V334));
	princ_str(") vfun_wrong_number_of_args(small_fixnum(",VV[25]);
	V335 = make_fixnum((long)length((V317)));
	(void)((*(LnkLI267))(V335));
	princ_str("));",VV[25]);
goto T1007;
T1007:;
	{object V336;
	object V337;
	V336= car((V322));
	V337= car((V336));
goto T1018;
T1018:;
	if(!(endp_prop((V336)))){
	goto T1019;}
	goto T1014;
goto T1019;
T1019:;
	base[9]= (V337);
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	V336= cdr((V336));
	V337= car((V336));
	goto T1018;}
goto T1014;
T1014:;
	{object V338;
	object V339;
	V338= cadr((V322));
	V339= car((V338));
goto T1034;
T1034:;
	if(!(endp_prop((V338)))){
	goto T1035;}
	goto T1030;
goto T1035;
T1035:;
	base[9]= car((V339));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((caddr((V339)))==Cnil){
	goto T1041;}
	base[9]= caddr((V339));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
goto T1041;
T1041:;
	V338= cdr((V338));
	V339= car((V338));
	goto T1034;}
goto T1030;
T1030:;
	if((caddr((V322)))==Cnil){
	goto T1050;}
	base[7]= caddr((V322));
	vs_top=(vs_base=base+7)+1;
	L26(base);
	vs_top=sup;
goto T1050;
T1050:;
	{object V340;
	object V341;
	V340= car(cddddr((V322)));
	V341= car((V340));
goto T1057;
T1057:;
	if(!(endp_prop((V340)))){
	goto T1058;}
	goto T1013;
goto T1058;
T1058:;
	base[9]= cadr((V341));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((cadddr((V341)))==Cnil){
	goto T1064;}
	base[9]= cadddr((V341));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
goto T1064;
T1064:;
	V340= cdr((V340));
	V341= car((V340));
	goto T1057;}
goto T1013;
T1013:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1075;}
	goto T1073;
goto T1075;
T1075:;
	princ_str("\n	Vcs[0]=Vcs[0];",VV[25]);
goto T1073;
T1073:;
	if((cadr((V322)))!=Cnil){
	goto T1079;}
	if((caddr((V322)))!=Cnil){
	goto T1079;}
	if((cadddr((V322)))==Cnil){
	goto T1078;}
goto T1079;
T1079:;
	if(((V323))!=Cnil){
	goto T1078;}
	V323= Ct;
	princ_str("\n	va_start(ap);",VV[25]);
goto T1078;
T1078:;
	if((symbol_value(VV[157]))!=Cnil){
	goto T1092;}
	if((symbol_value(VV[158]))==Cnil){
	goto T1090;}
goto T1092;
T1092:;
	if((car((V322)))==Cnil){
	goto T1090;}
	princ_str("\n	if(narg <",VV[25]);
	V342 = make_fixnum((long)length(car((V322))));
	(void)((*(LnkLI267))(V342));
	princ_str(") too_few_arguments();",VV[25]);
goto T1090;
T1090:;
	{object V343;
	object V344;
	V343= car((V322));
	V344= car((V343));
goto T1104;
T1104:;
	if(!(endp_prop((V343)))){
	goto T1105;}
	goto T1100;
goto T1105;
T1105:;
	(void)((*(LnkLI313))((V344)));
	V343= cdr((V343));
	V344= car((V343));
	goto T1104;}
goto T1100;
T1100:;
	{object V345;
	object V346;
	V345= cadr((V322));
	V346= car((V345));
goto T1119;
T1119:;
	if(!(endp_prop((V345)))){
	goto T1120;}
	goto T1115;
goto T1120;
T1120:;
	(void)((*(LnkLI313))(car((V346))));
	V345= cdr((V345));
	V346= car((V345));
	goto T1119;}
goto T1115;
T1115:;
	if((caddr((V322)))==Cnil){
	goto T1130;}
	(void)((*(LnkLI313))(caddr((V322))));
goto T1130;
T1130:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1136;}
	V320= symbol_value(VV[129]);
	goto T1134;
goto T1136;
T1136:;
	V320= symbol_value(VV[141]);
goto T1134;
T1134:;
	{object V347;
	object V348;
	V347= car(cddddr((V322)));
	V348= car((V347));
goto T1142;
T1142:;
	if(!(endp_prop((V347)))){
	goto T1143;}
	goto T1138;
goto T1143;
T1143:;
	(void)((*(LnkLI313))(cadr((V348))));
	V347= cdr((V347));
	V348= car((V347));
	goto T1142;}
goto T1138;
T1138:;
	{object V349;
	object V350;
	V349= car(cddddr((V322)));
	V350= car((V349));
goto T1157;
T1157:;
	if(!(endp_prop((V349)))){
	goto T1158;}
	goto T1153;
goto T1158;
T1158:;
	(void)((*(LnkLI313))(cadddr((V350))));
	V349= cdr((V349));
	V350= car((V349));
	goto T1157;}
goto T1153;
T1153:;
	{object V351;
	object V352;
	V352= car((V322));
	V351= (V317);
goto T1171;
T1171:;
	if(((V351))!=Cnil){
	goto T1172;}
	goto T1168;
goto T1172;
T1172:;
	(void)((*(LnkLI314))(car((V352)),car((V351))));
	V351= cdr((V351));
	V352= cdr((V352));
	goto T1171;}
goto T1168;
T1168:;
	if((cadr((V322)))==Cnil){
	goto T1181;}
	bds_bind(VV[133],symbol_value(VV[133]));
	bds_bind(VV[134],(VV[134]->s.s_dbind));
	bds_bind(VV[132],symbol_value(VV[132]));
	princ_str("\n	narg = narg - ",VV[25]);
	V353 = make_fixnum((long)length((V317)));
	(void)((*(LnkLI267))(V353));
	princ_char(59,VV[25]);
	{object V354;
	object V355;
	V354= cadr((V322));
	V355= car((V354));
goto T1192;
T1192:;
	if(!(endp_prop((V354)))){
	goto T1193;}
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1184;
goto T1193;
T1193:;
	{object V356;
	setq(VV[159],number_plus(symbol_value(VV[159]),small_fixnum(1)));
	V356= make_cons(symbol_value(VV[159]),Cnil);
	V318= make_cons((V356),(V318));}
	princ_str("\n	if (",VV[25]);
	if((cdr((V318)))==Cnil){
	goto T1206;}
	V357= VV[160];
	goto T1204;
goto T1206;
T1206:;
	V357= VV[161];
goto T1204;
T1204:;
	(void)((*(LnkLI267))(V357));
	princ_str("narg <= 0) ",VV[25]);
	if(type_of(car((V318)))!=t_cons)FEwrong_type_argument(Scons,car((V318)));
	(car((V318)))->c.c_cdr = Ct;
	(void)(car((V318)));
	princ_str("goto T",VV[25]);
	(void)((*(LnkLI267))(car(car((V318)))));
	princ_char(59,VV[25]);
	princ_str("\n	else {",VV[25]);
	if(((V323))!=Cnil){
	goto T1216;}
	V323= Ct;
	princ_str("\n	va_start(ap);",VV[25]);
goto T1216;
T1216:;
	V358= car((V355));
	V359= make_cons(VV[162],Cnil);
	(void)((*(LnkLI314))(/* INLINE-ARGS */V358,/* INLINE-ARGS */V359));
	princ_char(125,VV[25]);
	if((caddr((V355)))==Cnil){
	goto T1225;}
	(void)((*(LnkLI314))(caddr((V355)),Ct));
goto T1225;
T1225:;
	V354= cdr((V354));
	V355= car((V354));
	goto T1192;}
goto T1184;
T1184:;
	V318= nreverse((V318));
	{object V360;
	setq(VV[159],number_plus(symbol_value(VV[159]),small_fixnum(1)));
	V360= make_cons(symbol_value(VV[159]),Cnil);
	princ_str("\n	--narg; ",VV[25]);
	if(type_of((V360))!=t_cons)FEwrong_type_argument(Scons,(V360));
	((V360))->c.c_cdr = Ct;
	princ_str("goto T",VV[25]);
	(void)((*(LnkLI267))(car((V360))));
	princ_char(59,VV[25]);
	{object V361;
	object V362;
	V361= cadr((V322));
	V362= car((V361));
goto T1248;
T1248:;
	if(!(endp_prop((V361)))){
	goto T1249;}
	goto T1244;
goto T1249;
T1249:;
	if((cdr(car((V318))))==Cnil){
	goto T1253;}
	princ_str("\ngoto T",VV[25]);
	(void)((*(LnkLI267))(car(car((V318)))));
	princ_char(59,VV[25]);
	princ_str("\nT",VV[25]);
	(void)((*(LnkLI267))(car(car((V318)))));
	princ_str(":;",VV[25]);
goto T1253;
T1253:;
	{object V363;
	V363= car((V318));
	V318= cdr((V318));}
	(void)((*(LnkLI315))(car((V362)),cadr((V362))));
	if((caddr((V362)))==Cnil){
	goto T1268;}
	(void)((*(LnkLI314))(caddr((V362)),Cnil));
goto T1268;
T1268:;
	V361= cdr((V361));
	V362= car((V361));
	goto T1248;}
goto T1244;
T1244:;
	if((cdr((V360)))==Cnil){
	goto T1181;}
	princ_str("\ngoto T",VV[25]);
	(void)((*(LnkLI267))(car((V360))));
	princ_char(59,VV[25]);
	princ_str("\nT",VV[25]);
	(void)((*(LnkLI267))(car((V360))));
	princ_str(":;",VV[25]);}
goto T1181;
T1181:;
	if((caddr((V322)))==Cnil){
	goto T1285;}
	V321= (VFUN_NARGS=0,(*(LnkLI316))());
	{object V364;
	V364= cadr((V322));
	if(((V364))==Cnil){
	goto T1293;}
	goto T1290;
goto T1293;
T1293:;
	princ_str("\n	narg= narg - ",VV[25]);
	V365 = make_fixnum((long)length(car((V322))));
	(void)((*(LnkLI267))(V365));
	princ_char(59,VV[25]);}
goto T1290;
T1290:;
	if(((V323))!=Cnil){
	goto T1298;}
	V323= Ct;
	princ_str("\n	va_start(ap);",VV[25]);
goto T1298;
T1298:;
	princ_str("\n	V",VV[25]);
	(void)((*(LnkLI267))((V321)));
	princ_str(" = ",VV[25]);
	V366= structure_ref(caddr((V322)),VV[69],5);
	if(!((/* INLINE-ARGS */V366)==(VV[164]))){
	goto T1309;}
	base[7]= Ct;
	goto T1308;
goto T1309;
T1309:;
	base[7]= symbol_value(VV[163]);
goto T1308;
T1308:;
	bds_bind(VV[163],base[7]);
	if((cadddr((V322)))==Cnil){
	goto T1313;}
	if(((VV[163]->s.s_dbind))==Cnil){
	goto T1316;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_MAKE_LIST(narg));",VV[25]);
	goto T1311;
goto T1316;
T1316:;
	princ_str("make_list(narg);",VV[25]);
	goto T1311;
goto T1313;
T1313:;
	if(((VV[163]->s.s_dbind))==Cnil){
	goto T1321;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR(narg,ap));",VV[25]);
	goto T1311;
goto T1321;
T1321:;
	princ_str("list_vector(narg,ap);",VV[25]);
goto T1311;
T1311:;
	V367= caddr((V322));
	V368= list(2,VV[155],(V321));
	V369= (*(LnkLI314))(/* INLINE-ARGS */V367,/* INLINE-ARGS */V368);
	bds_unwind1;
goto T1285;
T1285:;
	if((cadddr((V322)))==Cnil){
	goto T1325;}
	{object V370;
	V370= caddr((V322));
	if(((V370))==Cnil){
	goto T1331;}
	goto T1328;
goto T1331;
T1331:;
	{object V371;
	V371= cadr((V322));
	if(((V371))==Cnil){
	goto T1335;}
	goto T1328;
goto T1335;
T1335:;
	princ_str("\n	narg= narg - ",VV[25]);
	V372 = make_fixnum((long)length(car((V322))));
	(void)((*(LnkLI267))(V372));
	princ_char(59,VV[25]);}}
goto T1328;
T1328:;
	if(((V323))!=Cnil){
	goto T1340;}
	V323= Ct;
	princ_str("\n	va_start(ap);",VV[25]);
goto T1340;
T1340:;
	{object V373;
	object V374= car(cddddr((V322)));
	if(endp(V374)){
	V319= Cnil;
	goto T1347;}
	base[7]=V373=MMcons(Cnil,Cnil);
goto T1348;
T1348:;
	(V373->c.c_car)= caddr((V374->c.c_car));
	V374=MMcdr(V374);
	if(endp(V374)){
	V319= base[7];
	goto T1347;}
	V373=MMcdr(V373)=MMcons(Cnil,Cnil);
	goto T1348;}
goto T1347;
T1347:;
	{object V375;
	object V376;
	V376= make_fixnum((long)length(car(cddddr((V322)))));
	V375= Cnil;
	{register object V377;
	object V378;
	object V379;
	V377= (V319);
	V378= car(cddddr((V322)));
	V379= car((V378));
goto T1356;
T1356:;
	if(((V377))!=Cnil){
	goto T1357;}
	goto T1351;
goto T1357;
T1357:;
	if(!((caar((V377)))==(VV[165]))){
	goto T1362;}
	if((caddr(car((V377))))==(Cnil)){
	goto T1361;}
goto T1362;
T1362:;
	V375= Ct;
goto T1361;
T1361:;
	if(!((caar((V377)))==(VV[165]))){
	goto T1368;}
	{object V380;
	V380= caddr(car((V377)));
	if(!(((V380))==(Cnil))){
	goto T1374;}
	goto T1372;
goto T1374;
T1374:;
	if(type_of((V380))==t_cons){
	goto T1376;}
	goto T1368;
goto T1376;
T1376:;
	{register object x= car((V380)),V381= VV[166];
	while(!endp(V381))
	if(eql(x,V381->c.c_car)){
	goto T1372;
	}else V381=V381->c.c_cdr;
	goto T1368;}}
goto T1372;
T1372:;
	V382= structure_ref(cadddr((V379)),VV[69],1);
	if((/* INLINE-ARGS */V382)==(VV[167])){
	goto T1367;}
goto T1368;
T1368:;
	V375= Ct;
	if(type_of(V377)!=t_cons)FEwrong_type_argument(Scons,V377);
	(V377)->c.c_car = small_fixnum(0);
goto T1367;
T1367:;
	V377= cdr((V377));
	V378= cdr((V378));
	V379= car((V378));
	goto T1356;}
goto T1351;
T1351:;
	if(!(((long)length((V319)))>(15))){
	goto T1389;}
	V375= Ct;
goto T1389;
T1389:;
	princ_str("\n	{",VV[25]);
	vs_base=vs_top;
	(void) (*Lnk317)();
	vs_top=sup;
	bds_bind(VV[25],symbol_value(VV[31]));
	if(((V375))==Cnil){
	goto T1397;}
	princ_char(10,VV[31]);
	princ_str("static object VK",VV[25]);
	(void)((*(LnkLI267))((V314)));
	princ_str("defaults[",VV[25]);
	V385 = make_fixnum((long)length((V319)));
	(void)((*(LnkLI267))(V385));
	princ_str("]={",VV[25]);
	{object V386;
	register object V387;
	V386= (V319);
	V387= Cnil;
goto T1409;
T1409:;
	if(((V386))!=Cnil){
	goto T1410;}
	goto T1407;
goto T1410;
T1410:;
	princ_str("(void *)",VV[25]);
	if(!(eql(car((V386)),small_fixnum(0)))){
	goto T1418;}
	princ_str("-1",VV[25]);
	goto T1416;
goto T1418;
T1418:;
	V387= caddr(car((V386)));
	if(!(((V387))==(Cnil))){
	goto T1422;}
	princ_str("-2",VV[25]);
	goto T1416;
goto T1422;
T1422:;
	if(!(type_of((V387))==t_cons)){
	goto T1427;}
	if(!((car((V387)))==(VV[168]))){
	goto T1427;}
	(void)((*(LnkLI267))(cadr((V387))));
	goto T1416;
goto T1427;
T1427:;
	if(!(type_of((V387))==t_cons)){
	goto T1433;}
	if(!((car((V387)))==(VV[169]))){
	goto T1433;}
	V388= (*(LnkLI318))(caddr((V387)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V388));
	goto T1416;
goto T1433;
T1433:;
	(void)((*(LnkLI319))());
goto T1416;
T1416:;
	if((cdr((V386)))==Cnil){
	goto T1438;}
	princ_char(44,VV[25]);
goto T1438;
T1438:;
	V386= cdr((V386));
	goto T1409;}
goto T1407;
T1407:;
	princ_str("};",VV[25]);
goto T1397;
T1397:;
	princ_char(10,VV[31]);
	princ_str("static struct { short n,allow_other_keys;",VV[25]);
	princ_str("object *defaults;",VV[25]);
	princ_str("\n	 KEYTYPE keys[",VV[25]);
	(void)((*(LnkLI267))((number_compare((V376),small_fixnum(1))>=0?((V376)):small_fixnum(1))));
	princ_str("];",VV[25]);
	princ_str("} LI",VV[25]);
	(void)((*(LnkLI267))((V314)));
	princ_str("key=",VV[25]);
	princ_char(123,VV[25]);
	V389 = make_fixnum((long)length(car(cddddr((V322)))));
	(void)((*(LnkLI267))(V389));
	princ_char(44,VV[25]);
	if((cadr(cddddr((V322))))==Cnil){
	goto T1465;}
	V390= small_fixnum(1);
	goto T1463;
goto T1465;
T1465:;
	V390= small_fixnum(0);
goto T1463;
T1463:;
	(void)((*(LnkLI267))(V390));
	princ_char(44,VV[25]);
	if(((V375))==Cnil){
	goto T1470;}
	princ_str("VK",VV[25]);
	(void)((*(LnkLI267))((V314)));
	princ_str("defaults",VV[25]);
	goto T1468;
goto T1470;
T1470:;
	princ_str("Cstd_key_defaults",VV[25]);
goto T1468;
T1468:;
	if((car(cddddr((V322))))==Cnil){
	goto T1476;}
	princ_str(",{",VV[25]);
	{object V391;
	V391= reverse(car(cddddr((V322))));
goto T1484;
T1484:;
	if(((V391))!=Cnil){
	goto T1485;}
	goto T1481;
goto T1485;
T1485:;
	princ_str("(void *)",VV[25]);
	V392= (*(LnkLI320))(caar((V391)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V392));
	if((cdr((V391)))==Cnil){
	goto T1493;}
	princ_char(44,VV[25]);
goto T1493;
T1493:;
	V391= cdr((V391));
	goto T1484;}
goto T1481;
T1481:;
	princ_char(125,VV[25]);
goto T1476;
T1476:;
	princ_str("};",VV[25]);
	bds_unwind1;
	if((caddr((V322)))==Cnil){
	goto T1504;}
	princ_str("\n	parse_key_rest(",VV[25]);
	V393= list(2,VV[155],(V321));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V393));
	princ_char(44,VV[25]);
	goto T1502;
goto T1504;
T1504:;
	princ_str("\n	parse_key_new(",VV[25]);
goto T1502;
T1502:;
	if(!(eql(small_fixnum(0),symbol_value(VV[141])))){
	goto T1510;}
	setq(VV[141],small_fixnum(1));
goto T1510;
T1510:;
	princ_str("narg,",VV[25]);
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1518;}
	V394= VV[170];
	goto T1516;
goto T1518;
T1518:;
	V394= VV[171];
goto T1516;
T1516:;
	(void)((*(LnkLI267))(V394));
	princ_char(43,VV[25]);
	(void)((*(LnkLI267))((V320)));
	princ_str(",(struct key *)&LI",VV[25]);
	(void)((*(LnkLI267))((V314)));
	princ_str("key,ap);",VV[25]);}
goto T1325;
T1325:;
	{object V395;
	register object V396;
	V395= car(cddddr((V322)));
	V396= car((V395));
goto T1529;
T1529:;
	if(!(endp_prop((V395)))){
	goto T1530;}
	goto T1525;
goto T1530;
T1530:;
	{object V398;
	V398= car((V319));
	V319= cdr((V319));
	V397= (V398);}
	if(eql(small_fixnum(0),V397)){
	goto T1536;}
	(void)((*(LnkLI321))(cadr((V396))));
	goto T1534;
goto T1536;
T1536:;
	princ_str("\n	if(",VV[25]);
	V399= structure_ref(cadr((V396)),VV[69],2);
	(void)((*(LnkLI322))(/* INLINE-ARGS */V399));
	princ_str("==0){",VV[25]);
	bds_bind(VV[133],symbol_value(VV[133]));
	bds_bind(VV[134],(VV[134]->s.s_dbind));
	bds_bind(VV[132],symbol_value(VV[132]));
	V400= (*(LnkLI315))(cadr((V396)),caddr((V396)));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V401= structure_ref(cadddr((V396)),VV[69],1);
	if((/* INLINE-ARGS */V401)==(VV[167])){
	goto T1548;}
	(void)((*(LnkLI314))(cadddr((V396)),Cnil));
goto T1548;
T1548:;
	princ_str("\n	}else{",VV[25]);
	(void)((*(LnkLI321))(cadr((V396))));
	V402= structure_ref(cadddr((V396)),VV[69],1);
	if((/* INLINE-ARGS */V402)==(VV[167])){
	goto T1554;}
	(void)((*(LnkLI314))(cadddr((V396)),Ct));
goto T1554;
T1554:;
	princ_char(125,VV[25]);
goto T1534;
T1534:;
	V395= cdr((V395));
	V396= car((V395));
	goto T1529;}
goto T1525;
T1525:;
	if(((VV[146]->s.s_dbind))==Cnil){
	goto T1563;}
	(VV[134]->s.s_dbind)= make_cons(VV[150],(VV[134]->s.s_dbind));
	princ_str("\ngoto TTL;",VV[25]);
	princ_str("\nTTL:;",VV[25]);
goto T1563;
T1563:;
	base[7]= caddr(cddr((V315)));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk308)();
	vs_top=sup;
	if(((V323))==Cnil){
	goto T1573;}
	V323= Cnil;
	princ_str("\n	va_end(ap);",VV[25]);
goto T1573;
T1573:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1581;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T1581;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T1581;}
	goto T1579;
goto T1581;
T1581:;
	princ_str("\n	base[0]=base[0];",VV[25]);
goto T1579;
T1579:;
	princ_str("\n	return Cnil;",VV[25]);
	princ_char(125,VV[25]);
	if((base[1])==Cnil){
	goto T1592;}
	princ_str("\n	}",VV[25]);
goto T1592;
T1592:;
	(void)((*(LnkLI323))());
	V404= get((V313),VV[77],Cnil);
	{object V405 = (*(LnkLI309))((V330),V404);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR25(V405)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3DEFUN-NORMAL	*/

static object LI27(V410,V411,V412,V413)

object V410;register object V411;object V412;object V413;
{	 VMB26 VMS26 VMV26
goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI305))(VV[172],(V410))));
	if(!(type_of((V411))==t_fixnum||
type_of((V411))==t_bignum||
type_of((V411))==t_ratio||
type_of((V411))==t_shortfloat||
type_of((V411))==t_longfloat||
type_of((V411))==t_complex)){
	goto T1601;}
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI267))((V411)));
	princ_str("()",VV[25]);
	goto T1599;
goto T1601;
T1601:;
	princ_char(10,VV[25]);
	(void)((*(LnkLI267))((V411)));
	princ_str("()",VV[25]);
goto T1599;
T1599:;
	princ_str("\n{",VV[25]);
	princ_str("register object *",VV[25]);
	(void)((*(LnkLI267))(symbol_value(VV[20])));
	princ_str("base=vs_base;",VV[25]);
	V414= structure_ref(cadr((V412)),VV[62],1);
	(void)((*(LnkLI307))(/* INLINE-ARGS */V414,(V411),VV[148]));
	princ_str("\n	register object *",VV[25]);
	(void)((*(LnkLI267))(symbol_value(VV[20])));
	princ_str("sup=base+VM",VV[25]);
	(void)((*(LnkLI267))(symbol_value(VV[136])));
	princ_char(59,VV[25]);
	princ_str(" VC",VV[25]);
	(void)((*(LnkLI267))(symbol_value(VV[136])));
	if((symbol_value(VV[157]))==Cnil){
	goto T1626;}
	princ_str("\n	vs_reserve(VM",VV[25]);
	(void)((*(LnkLI267))(symbol_value(VV[136])));
	princ_str(");",VV[25]);
	goto T1624;
goto T1626;
T1626:;
	princ_str("\n	vs_check;",VV[25]);
goto T1624;
T1624:;
	if(((V413))==Cnil){
	goto T1632;}
	princ_str("\n	bds_check;",VV[25]);
goto T1632;
T1632:;
	if((symbol_value(VV[149]))==Cnil){
	goto T1636;}
	princ_str("\n	ihs_check;",VV[25]);
goto T1636;
T1636:;
	(void)((VFUN_NARGS=3,(*(LnkLI324))(caddr((V412)),caddr(cddr((V412))),(V410))));
	princ_str("\n}",VV[25]);
	{object V415;
	V415= make_cons(symbol_value(VV[136]),symbol_value(VV[130]));
	setq(VV[33],make_cons((V415),symbol_value(VV[33])));}
	princ_str("\n#define VC",VV[31]);
	(void)((*(LnkLI270))(symbol_value(VV[136])));
	{object V416 = (*(LnkLI325))();
	VMR26(V416)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-V*-MACROS	*/

static object LI28(V419,V420)

register object V419;object V420;
{	 VMB27 VMS27 VMV27
goto TTL;
TTL:;
	{object V421;
	V421= make_cons((V419),symbol_value(VV[130]));
	setq(VV[33],make_cons((V421),symbol_value(VV[33])));}
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1654;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T1654;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T1654;}
	princ_str("\n#define VMB",VV[31]);
	(void)((*(LnkLI270))((V419)));
	goto T1652;
goto T1654;
T1654:;
	princ_str("\n#define VMB",VV[31]);
	(void)((*(LnkLI270))((V419)));
	princ_char(32,VV[31]);
	princ_str("register object *",VV[31]);
	(void)((*(LnkLI270))(symbol_value(VV[20])));
	princ_str("base=vs_top;",VV[31]);
goto T1652;
T1652:;
	(void)((*(LnkLI325))());
	if((symbol_value(VV[138]))==Cnil){
	goto T1671;}
	princ_str("\n#define VMS",VV[31]);
	(void)((*(LnkLI270))((V419)));
	princ_char(32,VV[31]);
	princ_str(" register object *",VV[31]);
	(void)((*(LnkLI270))(symbol_value(VV[20])));
	princ_str("sup=vs_top+",VV[31]);
	(void)((*(LnkLI270))(symbol_value(VV[130])));
	princ_str(";vs_top=sup;",VV[31]);
	goto T1669;
goto T1671;
T1671:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1682;}
	princ_str("\n#define VMS",VV[31]);
	(void)((*(LnkLI270))((V419)));
	goto T1669;
goto T1682;
T1682:;
	princ_str("\n#define VMS",VV[31]);
	(void)((*(LnkLI270))((V419)));
	princ_str(" vs_top += ",VV[31]);
	(void)((*(LnkLI270))(symbol_value(VV[130])));
	princ_char(59,VV[31]);
goto T1669;
T1669:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1693;}
	princ_str("\n#define VMV",VV[31]);
	(void)((*(LnkLI270))((V419)));
	goto T1691;
goto T1693;
T1693:;
	if((symbol_value(VV[157]))==Cnil){
	goto T1698;}
	princ_str("\n#define VMV",VV[31]);
	(void)((*(LnkLI270))((V419)));
	princ_str(" vs_reserve(",VV[31]);
	(void)((*(LnkLI270))(symbol_value(VV[130])));
	princ_str(");",VV[31]);
	goto T1691;
goto T1698;
T1698:;
	princ_str("\n#define VMV",VV[31]);
	(void)((*(LnkLI270))((V419)));
	princ_str(" vs_check;",VV[31]);
goto T1691;
T1691:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1709;}
	princ_str("\n#define VMR",VV[31]);
	(void)((*(LnkLI270))((V419)));
	princ_str("(VMT",VV[31]);
	(void)((*(LnkLI270))((V419)));
	princ_str(") return(VMT",VV[31]);
	(void)((*(LnkLI270))((V419)));
	princ_str(");",VV[31]);
	{object V422 = Cnil;
	VMR27(V422)}
goto T1709;
T1709:;
	princ_str("\n#define VMR",VV[31]);
	(void)((*(LnkLI270))((V419)));
	princ_str("(VMT",VV[31]);
	(void)((*(LnkLI270))((V419)));
	princ_str(") vs_top=base ; return(VMT",VV[31]);
	(void)((*(LnkLI270))((V419)));
	princ_str(");",VV[31]);
	{object V423 = Cnil;
	VMR27(V423)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-REQUIREDS	*/

static object LI29(V426,V427)

object V426;object V427;
{	 VMB28 VMS28 VMV28
goto TTL;
TTL:;
	{register object V428;
	V428= (V426);
goto T1727;
T1727:;
	if(!(endp_prop((V428)))){
	goto T1728;}
	goto T1725;
goto T1728;
T1728:;
	{register object V429;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V429= symbol_value(VV[88]);
	(void)(structure_set(car((V428)),VV[69],4,(V429)));
	princ_char(86,VV[25]);
	(void)((*(LnkLI267))((V429)));}
	if(endp_prop(cdr((V428)))){
	goto T1738;}
	princ_char(44,VV[25]);
goto T1738;
T1738:;
	V428= cdr((V428));
	goto T1727;}
goto T1725;
T1725:;
	princ_str(")\n",VV[25]);
	if(((V426))==Cnil){
	goto T1748;}
	princ_char(10,VV[25]);
	{register object V430;
	register object V431;
	register object V432;
	V430= (V426);
	V431= (V427);
	V432= Cnil;
goto T1752;
T1752:;
	if(!(endp_prop((V430)))){
	goto T1753;}
	princ_char(59,VV[25]);
	{object V433 = Cnil;
	VMR28(V433)}
goto T1753;
T1753:;
	if(((V432))==Cnil){
	goto T1758;}
	princ_char(59,VV[25]);
goto T1758;
T1758:;
	(void)((*(LnkLI267))(symbol_value(VV[20])));
	V434= (*(LnkLI326))(car((V430)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V434));
	V435= (*(LnkLI273))(car((V431)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V435));
	V432= car((V431));
	princ_char(86,VV[25]);
	V436= structure_ref(car((V430)),VV[69],4);
	(void)((*(LnkLI267))(/* INLINE-ARGS */V436));
	V430= cdr((V430));
	V431= cdr((V431));
	goto T1752;}
goto T1748;
T1748:;
	{object V437 = Cnil;
	VMR28(V437)}
	return Cnil;
}
/*	local entry for function ADD-DEBUG-INFO	*/

static object LI30(V440,V441)

object V440;object V441;
{	 VMB29 VMS29 VMV29
goto TTL;
TTL:;
	{object V442;
	V442= Cnil;
	{object V443;
	V443= (number_compare(symbol_value(VV[114]),small_fixnum(2))>=0?Ct:Cnil);
	if(((V443))==Cnil){
	goto T1778;}
	{object V444 = (V443);
	VMR29(V444)}
goto T1778;
T1778:;
	if((get((V440),VV[115],Cnil))!=Cnil){
	goto T1781;}
	{object V445 = (VFUN_NARGS=2,(*(LnkLI327))(VV[173],(V440)));
	VMR29(V445)}
goto T1781;
T1781:;
	(void)(remprop((V440),VV[115]));
	{register object V446;
	V446= small_fixnum(0);
	{register object V447;
	register object V448;
	V447= structure_ref(cadr((V441)),VV[62],1);
	V448= car((V447));
goto T1788;
T1788:;
	if(!(endp_prop((V447)))){
	goto T1789;}
	goto T1784;
goto T1789;
T1789:;
	V449= structure_ref((V448),VV[69],2);
	if(!(type_of(/* INLINE-ARGS */V449)==t_cons)){
	goto T1793;}
	V450= structure_ref((V448),VV[69],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V450))==t_fixnum)){
	goto T1793;}
	V451= structure_ref((V448),VV[69],2);
	{object V452= cdr(/* INLINE-ARGS */V451);
	V446= (number_compare((V446),V452)>=0?((V446)):V452);}
goto T1793;
T1793:;
	V447= cdr((V447));
	V448= car((V447));
	goto T1788;}
goto T1784;
T1784:;
	base[0]= one_plus((V446));
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	V442= vs_base[0];
	{register object V453;
	register object V454;
	V453= structure_ref(cadr((V441)),VV[62],1);
	V454= car((V453));
goto T1811;
T1811:;
	if(!(endp_prop((V453)))){
	goto T1812;}
	goto T1807;
goto T1812;
T1812:;
	V455= structure_ref((V454),VV[69],2);
	if(!(type_of(/* INLINE-ARGS */V455)==t_cons)){
	goto T1816;}
	V456= structure_ref((V454),VV[69],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V456))==t_fixnum)){
	goto T1816;}
	{object V457;
	register object V459;
	V460= structure_ref((V454),VV[69],2);
	V457= cdr(/* INLINE-ARGS */V460);
	V459= structure_ref((V454),VV[69],0);
	if(type_of(nthcdr(fixint((V457)),V442))!=t_cons)FEwrong_type_argument(Scons,nthcdr(fixint((V457)),V442));
	(nthcdr(fixint((V457)),V442))->c.c_car = (V459);
	(void)(nthcdr(fixint((V457)),V442));}
goto T1816;
T1816:;
	V453= cdr((V453));
	V454= car((V453));
	goto T1811;}
goto T1807;
T1807:;
	(void)(sputprop((V440),VV[116],(V442)));
	{object V461;
	V461= get((V440),VV[116],Cnil);
	if(((V461))==Cnil){
	goto T1832;}
	if((cdr((V461)))!=Cnil){
	goto T1831;}
	if((car((V461)))==Cnil){
	goto T1832;}
goto T1831;
T1831:;
	V462= list(2,VV[91],(V440));
	V463= list(3,VV[116],/* INLINE-ARGS */V462,list(2,VV[91],(V461)));
	{object V464 = (VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V463));
	VMR29(V464)}
goto T1832;
T1832:;
	{object V465 = Cnil;
	VMR29(V465)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ANALYZE-REGS	*/

static object LI31(V468,V469)

object V468;object V469;
{	 VMB30 VMS30 VMV30
goto TTL;
TTL:;
	{object V470;
	V470= number_minus(symbol_value(VV[174]),(V469));
	if(!(number_compare(small_fixnum(0),symbol_value(VV[175]))==0)){
	goto T1840;}
	V471= (VFUN_NARGS=1,(*(LnkLI329))((V468)));
	{long V472 = (long)(*(LnkLI328))(/* INLINE-ARGS */V471,(V470));
	VMR30((object)V472)}
goto T1840;
T1840:;
	{register object V473;
	register object V474;
	V473= Cnil;
	V474= Cnil;
	{register object V475;
	register object V476;
	V475= (V468);
	V476= car((V475));
goto T1846;
T1846:;
	if(!(endp_prop((V475)))){
	goto T1847;}
	goto T1842;
goto T1847;
T1847:;
	V478= structure_ref((V476),VV[69],5);
	{register object x= /* INLINE-ARGS */V478,V477= VV[176];
	while(!endp(V477))
	if(x==(V477->c.c_car)){
	goto T1854;
	}else V477=V477->c.c_cdr;
	goto T1853;}
goto T1854;
T1854:;{object V479;
	{register object x= (V476),V480= (V474);
	while(!endp(V480))
	if(eql(x,V480->c.c_car)){
	V479= V480;
	goto T1856;
	}else V480=V480->c.c_cdr;
	V479= Cnil;}
goto T1856;
T1856:;
	if(V479==Cnil)goto T1855;
	goto T1851;
goto T1855;
T1855:;}
	{register object V481;
	V481= (V476);
	V474= make_cons((V481),(V474));
	goto T1851;}
goto T1853;
T1853:;{object V482;
	{register object x= (V476),V483= (V473);
	while(!endp(V483))
	if(x==(V483->c.c_car)){
	V482= V483;
	goto T1860;
	}else V483=V483->c.c_cdr;
	V482= Cnil;}
goto T1860;
T1860:;
	if(V482==Cnil)goto T1859;
	goto T1851;
goto T1859;
T1859:;}
	{register object V484;
	V484= (V476);
	V474= make_cons((V484),(V474));}
goto T1851;
T1851:;
	V475= cdr((V475));
	V476= car((V475));
	goto T1846;}
goto T1842;
T1842:;
	(void)((*(LnkLI328))((V473),(V470)));
	{long V485 = (long)(*(LnkLI328))((V474),symbol_value(VV[175]));
	VMR30((object)V485)}}}
	base[0]=base[0];
}
/*	local entry for function ANALYZE-REGS1	*/

static object LI32(V488,V489)

object V488;object V489;
{	 VMB31 VMS31 VMV31
goto TTL;
TTL:;
	{register long V490;
	register long V491;
	long V492;
	long V493;
	register long V494;
	V490= 0;
	V491= 3;
	V492= 100000;
	V493= fix((V489));
	V494= 0;
	V488= (VFUN_NARGS=1,(*(LnkLI329))((V488)));
goto T1877;
T1877:;
	{register object V495;
	object V496;
	V495= (V488);
	V496= car((V495));
goto T1883;
T1883:;
	if(!(endp_prop((V495)))){
	goto T1884;}
	goto T1879;
goto T1884;
T1884:;
	V490= fix(structure_ref((V496),VV[69],6));
	if(!((V490)>=(V491))){
	goto T1890;}
	V494= (long)(V494)+(1);
	if(!((V490)<(V492))){
	goto T1895;}
	V492= V490;
goto T1895;
T1895:;
	if(!((V494)>(V493))){
	goto T1890;}
	goto T1878;
goto T1890;
T1890:;
	V495= cdr((V495));
	V496= car((V495));
	goto T1883;}
goto T1879;
T1879:;
	if(!((V494)<(V493))){
	goto T1906;}
	V491= (long)(V491)-(1);
goto T1906;
T1906:;
	{register object V497;
	register object V498;
	V497= (V488);
	V498= car((V497));
goto T1914;
T1914:;
	if(!(endp_prop((V497)))){
	goto T1915;}
	goto T1910;
goto T1915;
T1915:;
	{long V499= fix(structure_ref((V498),VV[69],6));
	if(!((/* INLINE-ARGS */V499)<(V491))){
	goto T1919;}}
	(void)(structure_set((V498),VV[69],6,small_fixnum(0)));
goto T1919;
T1919:;
	V497= cdr((V497));
	V498= car((V497));
	goto T1914;}
goto T1910;
T1910:;
	{long V500 = V491;
	VMR31((object)V500)}
goto T1878;
T1878:;
	V494= 0;
	V491= (long)(V492)+(1);
	V492= 1000000;
	goto T1877;}
	base[0]=base[0];
}
/*	local entry for function WT-GLOBAL-ENTRY	*/

static object LI33(V505,V506,V507,V508)

object V505;object V506;object V507;object V508;
{	 VMB32 VMS32 VMV32
goto TTL;
TTL:;
	if((get((V505),VV[102],Cnil))==Cnil){
	goto T1934;}
	{object V509 = Cnil;
	VMR32(V509)}
goto T1934;
T1934:;
	(void)((VFUN_NARGS=2,(*(LnkLI305))(VV[179],(V505))));
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI267))((V506)));
	princ_str("()",VV[25]);
	princ_str("\n{	register object *base=vs_base;",VV[25]);
	if((symbol_value(VV[157]))!=Cnil){
	goto T1945;}
	if((symbol_value(VV[158]))==Cnil){
	goto T1944;}
goto T1945;
T1945:;
	princ_str("\n	check_arg(",VV[25]);
	V510 = make_fixnum((long)length((V507)));
	(void)((*(LnkLI267))(V510));
	princ_str(");",VV[25]);
goto T1944;
T1944:;
	princ_str("\n	base[0]=",VV[25]);
	{object V512= (V508);
	if((V512!= VV[89]))goto T1956;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T1958;}
	V511= VV[180];
	goto T1955;
goto T1958;
T1958:;
	V511= VV[181];
	goto T1955;
goto T1956;
T1956:;
	if((V512!= VV[142]))goto T1960;
	V511= VV[182];
	goto T1955;
goto T1960;
T1960:;
	if((V512!= VV[143]))goto T1961;
	V511= VV[183];
	goto T1955;
goto T1961;
T1961:;
	if((V512!= VV[144]))goto T1962;
	V511= VV[184];
	goto T1955;
goto T1962;
T1962:;
	V511= VV[185];}
goto T1955;
T1955:;
	(void)((*(LnkLI267))(V511));
	princ_str("(LI",VV[25]);
	(void)((*(LnkLI267))((V506)));
	princ_char(40,VV[25]);
	{register object V513;
	register long V514;
	V514= 0;
	V513= (V507);
goto T1969;
T1969:;
	if(!(endp_prop((V513)))){
	goto T1970;}
	goto T1966;
goto T1970;
T1970:;
	{object V516= car((V513));
	if((V516!= VV[89]))goto T1977;
	V515= VV[186];
	goto T1976;
goto T1977;
T1977:;
	if((V516!= VV[142]))goto T1978;
	V515= VV[187];
	goto T1976;
goto T1978;
T1978:;
	if((V516!= VV[143]))goto T1979;
	V515= VV[188];
	goto T1976;
goto T1979;
T1979:;
	if((V516!= VV[144]))goto T1980;
	V515= VV[189];
	goto T1976;
goto T1980;
T1980:;
	V515= VV[190];}
goto T1976;
T1976:;
	(void)((*(LnkLI267))(V515));
	princ_str("(base[",VV[25]);
	V517 = make_fixnum(V514);
	(void)((*(LnkLI267))(V517));
	princ_str("])",VV[25]);
	if(endp_prop(cdr((V513)))){
	goto T1984;}
	princ_char(44,VV[25]);
goto T1984;
T1984:;
	V513= cdr((V513));
	V514= (long)(V514)+1;
	goto T1969;}
goto T1966;
T1966:;
	princ_str("));",VV[25]);
	princ_str("\n	vs_top=(vs_base=base)+1;",VV[25]);
	princ_str("\n}",VV[25]);
	{object V518 = Cnil;
	VMR32(V518)}
	return Cnil;
}
/*	local entry for function REP-TYPE	*/

static object LI34(V520)

object V520;
{	 VMB33 VMS33 VMV33
goto TTL;
TTL:;
	{object V521= (V520);
	if((V521!= VV[89]))goto T1997;
	{object V522 = VV[191];
	VMR33(V522)}
goto T1997;
T1997:;
	if((V521!= VV[254]))goto T1998;
	{object V523 = VV[192];
	VMR33(V523)}
goto T1998;
T1998:;
	if((V521!= VV[142]))goto T1999;
	{object V524 = VV[193];
	VMR33(V524)}
goto T1999;
T1999:;
	if((V521!= VV[144]))goto T2000;
	{object V525 = VV[194];
	VMR33(V525)}
goto T2000;
T2000:;
	if((V521!= VV[143]))goto T2001;
	{object V526 = VV[195];
	VMR33(V526)}
goto T2001;
T2001:;
	{object V527 = VV[196];
	VMR33(V527)}}
	return Cnil;
}
/*	local entry for function T1DEFMACRO	*/

static object LI35(V529)

register object V529;
{	 VMB34 VMS34 VMV34
	bds_check;
goto TTL;
TTL:;
	if(endp_prop((V529))){
	goto T2003;}
	if(!(endp_prop(cdr((V529))))){
	goto T2002;}
goto T2003;
T2003:;
	V530 = make_fixnum((long)length((V529)));
	(void)((*(LnkLI276))(VV[197],small_fixnum(2),V530));
goto T2002;
T2002:;
	if(type_of(car((V529)))==t_symbol){
	goto T2007;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[198],car((V529)))));
goto T2007;
T2007:;
	V531= make_cons(VV[197],(V529));
	(void)((*(LnkLI260))(Ct,/* INLINE-ARGS */V531));
	setq(VV[6],Ct);
	{register object V532;
	object V533;
	setq(VV[61],number_plus(symbol_value(VV[61]),small_fixnum(1)));
	V533= symbol_value(VV[61]);
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[52],Cnil);
	bds_bind(VV[59],Cnil);
	V532= Cnil;
	V532= (*(LnkLI330))(car((V529)),cadr((V529)),cddr((V529)));
	(void)((*(LnkLI286))());
	{object V534;
	V534= list(7,VV[197],car((V529)),(V533),cddr((V532)),car((V532)),cadr((V532)),(VV[59]->s.s_dbind));
	setq(VV[24],make_cons((V534),symbol_value(VV[24])));
	{object V535 = symbol_value(VV[24]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR34(V535)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFMACRO	*/

static object LI36(V542,V543,V544,V545,V546,V547)

object V542;object V543;object V544;object V545;object V546;object V547;
{	 VMB35 VMS35 VMV35
goto TTL;
TTL:;
	if(((V545))==Cnil){
	goto T2020;}
	V548= list(4,VV[103],list(2,VV[91],(V542)),(V545),VV[199]);
	(void)((VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V548)));
goto T2020;
T2020:;
	if(((V546))==Cnil){
	goto T2023;}
	V549= list(2,VV[91],(V542));
	V550= list(4,VV[103],/* INLINE-ARGS */V549,list(2,VV[91],(V546)),VV[200]);
	(void)((VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V550)));
goto T2023;
T2023:;
	princ_str("\nstatic void L",VV[31]);
	(void)((*(LnkLI270))((V543)));
	princ_str("();",VV[31]);
	V551= list(2,VV[91],(V542));
	V552= list(3,VV[201],/* INLINE-ARGS */V551,(*(LnkLI294))(VV[202],(V543)));
	{object V553 = (VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V552));
	VMR35(V553)}
	return Cnil;
}
/*	local entry for function T3DEFMACRO	*/

static object LI37(V560,V561,V562,V563,V564,V565)

object V560;object V561;register object V562;object V563;object V564;object V565;
{	 VMB36 VMS36 VMV36
	bds_check;
goto TTL;
TTL:;
	if((get((V560),VV[203],Cnil))==Cnil){
	goto T2032;}
	bds_bind(VV[20],VV[204]);
	goto T2030;
goto T2032;
T2032:;
	bds_bind(VV[20],VV[205]);
goto T2030;
T2030:;
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
	(void)((VFUN_NARGS=2,(*(LnkLI305))(VV[206],(V560))));
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI267))((V561)));
	princ_str("()",VV[25]);
	princ_str("\n{register object *",VV[25]);
	(void)((*(LnkLI267))((VV[20]->s.s_dbind)));
	princ_str("base=vs_base;",VV[25]);
	V566= structure_ref(car(cddddr((V562))),VV[62],1);
	(void)((*(LnkLI307))(/* INLINE-ARGS */V566,(V561),VV[148]));
	princ_str("\n	register object *",VV[25]);
	(void)((*(LnkLI267))((VV[20]->s.s_dbind)));
	princ_str("sup=base+VM",VV[25]);
	(void)((*(LnkLI267))((VV[136]->s.s_dbind)));
	princ_char(59,VV[25]);
	princ_str(" VC",VV[25]);
	(void)((*(LnkLI267))((VV[136]->s.s_dbind)));
	if((symbol_value(VV[157]))==Cnil){
	goto T2058;}
	princ_str("\n	vs_reserve(VM",VV[25]);
	(void)((*(LnkLI267))((VV[136]->s.s_dbind)));
	princ_str(");",VV[25]);
	goto T2056;
goto T2058;
T2058:;
	princ_str("\n	vs_check;",VV[25]);
goto T2056;
T2056:;
	if(((V565))==Cnil){
	goto T2064;}
	princ_str("\n	bds_check;",VV[25]);
goto T2064;
T2064:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2068;}
	princ_str("\n	ihs_check;",VV[25]);
goto T2068;
T2068:;
	base[15]= car((V562));
	base[16]= cadr((V562));
	base[17]= caddr((V562));
	base[18]= cadddr((V562));
	vs_top=(vs_base=base+15)+4;
	(void) (*Lnk331)();
	vs_top=sup;
	princ_str("\n}",VV[25]);
	{object V567;
	V567= make_cons((VV[136]->s.s_dbind),(VV[130]->s.s_dbind));
	setq(VV[33],make_cons((V567),symbol_value(VV[33])));}
	princ_str("\n#define VC",VV[31]);
	(void)((*(LnkLI270))((VV[136]->s.s_dbind)));
	{object V568 = (*(LnkLI325))();
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
	VMR36(V568)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1ORDINARY	*/

static object LI38(V570)

register object V570;
{	 VMB37 VMS37 VMV37
	bds_check;
goto TTL;
TTL:;
	{register object V571;
	V571= Cnil;
	setq(VV[6],Ct);
	if((symbol_value(VV[48]))==Cnil){
	goto T2089;}
	(void)((*(LnkLI260))(Cnil,(V570)));
	{object V572;
	base[0]= VV[207];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V572= vs_base[0];
	V573= listA(3,VV[64],(V572),VV[208]);
	(void)((*(LnkLI282))(/* INLINE-ARGS */V573));
	base[0]= list(5,VV[51],(V572),Cnil,(V570),Cnil);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk264)();
	vs_top=sup;
	{object V574;
	V574= list(2,VV[209],make_cons((V572),Cnil));
	setq(VV[24],make_cons((V574),symbol_value(VV[24])));
	{object V575 = symbol_value(VV[24]);
	VMR37(V575)}}}
goto T2089;
T2089:;
	{object V576;
	if(type_of((V570))==t_cons){
	goto T2100;}
	V576= Cnil;
	goto T2099;
goto T2100;
T2100:;
	if(type_of(car((V570)))==t_symbol){
	goto T2102;}
	V576= Cnil;
	goto T2099;
goto T2102;
T2102:;
	if(!((car((V570)))==(VV[210]))){
	goto T2106;}
	goto T2104;
goto T2106;
T2106:;
	base[0]= car((V570));
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	V577= vs_base[0];
	if((V577)==Cnil){
	goto T2104;}
	V576= Cnil;
	goto T2099;
goto T2104;
T2104:;
	{register object V578;
	register long V579;
	V578= cdr((V570));
	V579= 1;
goto T2113;
T2113:;
	if((V579)>=(1000)){
	goto T2115;}
	if(type_of((V578))==t_cons){
	goto T2114;}
goto T2115;
T2115:;
	V576= Cnil;
	goto T2099;
goto T2114;
T2114:;
	if(!(type_of(car((V578)))==t_cons)){
	goto T2120;}
	if(!((caar((V578)))==(VV[64]))){
	goto T2120;}
	V571= cadr(car((V578)));
	if(!(type_of((V571))==t_cons)){
	goto T2120;}
	if(!((car((V571)))==(VV[211]))){
	goto T2120;}
	{register object V580;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V580= vs_base[0];
	base[0]= listA(3,VV[51],(V580),cdr((V571)));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk264)();
	vs_top=sup;
	base[1]= (V570);
	base[2]= small_fixnum(0);
	base[3]= make_fixnum(V579);
	vs_top=(vs_base=base+1)+3;
	Lsubseq();
	vs_top=sup;
	base[0]= vs_base[0];
	V581= list(2,VV[212],list(2,VV[91],(V580)));
	base[1]= make_cons(/* INLINE-ARGS */V581,Cnil);
	V582 = make_fixnum(V579);
	V583= number_plus(small_fixnum(1),V582);
	base[2]= nthcdr(fixint(/* INLINE-ARGS */V583),(V570));
	vs_top=(vs_base=base+0)+3;
	Lappend();
	vs_top=sup;
	V570= vs_base[0];
	goto TTL;}
goto T2120;
T2120:;
	if(type_of((V578))==t_cons){
	goto T2143;}
	V578= Cnil;
	goto T2142;
goto T2143;
T2143:;
	V578= cdr((V578));
goto T2142;
T2142:;
	V579= (long)(1)+(V579);
	goto T2113;}
goto T2099;
T2099:;
	if(((V576))==Cnil){
	goto T2148;}
	{object V584 = (V576);
	VMR37(V584)}
goto T2148;
T2148:;
	(void)((*(LnkLI260))(Cnil,(V570)));
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[52],Cnil);
	{object V585;
	V585= list(2,VV[209],(V570));
	setq(VV[24],make_cons((V585),symbol_value(VV[24])));}
	{object V586 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR37(V586)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2ORDINARY	*/

static object LI39(V588)

object V588;
{	 VMB38 VMS38 VMV38
goto TTL;
TTL:;
	{object V589;
	V589= (type_of((V588))!=t_cons?Ct:Cnil);
	if(((V589))==Cnil){
	goto T2156;}
	{object V590 = (V589);
	VMR38(V590)}
goto T2156;
T2156:;
	{object V591;
	base[0]= (V588);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	V591= vs_base[0];
	if(((V591))==Cnil){
	goto T2161;}
	{object V592 = (V591);
	VMR38(V592)}
goto T2161;
T2161:;
	{object V593 = (VFUN_NARGS=1,(*(LnkLI293))((V588)));
	VMR38(V593)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-LOAD-TIME-SHARP-COMMA	*/

static object LI40()

{	 VMB39 VMS39 VMV39
goto TTL;
TTL:;
	{register object V594;
	register object V595;
	V594= reverse(symbol_value(VV[52]));
	V595= car((V594));
goto T2166;
T2166:;
	if(!(endp_prop((V594)))){
	goto T2167;}
	{object V596 = Cnil;
	VMR39(V596)}
goto T2167;
T2167:;
	if(!(type_of((V595))!=t_cons)){
	goto T2171;}
	(void)((*(LnkLI332))());
goto T2171;
T2171:;
	{register object V597;
	V597= make_cons(VV[213],(V595));
	setq(VV[24],make_cons((V597),symbol_value(VV[24])));}
	V594= cdr((V594));
	V595= car((V594));
	goto T2166;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2SHARP-COMMA	*/

static object LI41(V600,V601)

object V600;object V601;
{	 VMB40 VMS40 VMV40
goto TTL;
TTL:;
	V602= list(3,VV[214],(V600),(V601));
	{object V603 = (VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V602));
	VMR40(V603)}
	return Cnil;
}
/*	local entry for function T2DECLARE	*/

static object LI42(V605)

object V605;
{	 VMB41 VMS41 VMV41
goto TTL;
TTL:;
	{object V606 = (*(LnkLI332))();
	VMR41(V606)}
	return Cnil;
}
/*	local entry for function T1DEFINE-STRUCTURE	*/

static object LI43(V608)

object V608;
{	 VMB42 VMS42 VMV42
goto TTL;
TTL:;
	V609= (*(LnkLI260))(Cnil,Cnil);
	V610= make_cons(((/* INLINE-ARGS */V609)==Cnil?Ct:Cnil),Cnil);
	V611= append((V608),/* INLINE-ARGS */V610);
	V612= make_cons(VV[215],/* INLINE-ARGS */V611);
	(void)((*(LnkLI260))(Ct,/* INLINE-ARGS */V612));
	V613= make_cons(VV[215],(V608));
	{object V614 = (*(LnkLI265))(/* INLINE-ARGS */V613);
	VMR42(V614)}
	return Cnil;
}
/*	local entry for function SET-DBIND	*/

static object LI44(V617,V618)

object V617;object V618;
{	 VMB43 VMS43 VMV43
goto TTL;
TTL:;
	princ_str("\n	VV[",VV[25]);
	(void)((*(LnkLI267))((V618)));
	princ_str("]->s.s_dbind = ",VV[25]);
	(void)((*(LnkLI267))((V617)));
	princ_char(59,VV[25]);
	{object V619 = Cnil;
	VMR43(V619)}
	return Cnil;
}
/*	local entry for function T1CLINES	*/

static object LI45(V621)

object V621;
{	 VMB44 VMS44 VMV44
goto TTL;
TTL:;
	{register object V622;
	register object V623;
	V622= (V621);
	V623= car((V622));
goto T2193;
T2193:;
	if(!(endp_prop((V622)))){
	goto T2194;}
	goto T2189;
goto T2194;
T2194:;
	if(type_of((V623))==t_string){
	goto T2198;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[216],(V623))));
goto T2198;
T2198:;
	V622= cdr((V622));
	V623= car((V622));
	goto T2193;}
goto T2189;
T2189:;
	{object V624;
	V624= list(2,VV[217],(V621));
	setq(VV[24],make_cons((V624),symbol_value(VV[24])));
	{object V625 = symbol_value(VV[24]);
	VMR44(V625)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3CLINES	*/

static object LI46(V627)

object V627;
{	 VMB45 VMS45 VMV45
goto TTL;
TTL:;
	{register object V628;
	register object V629;
	V628= (V627);
	V629= car((V628));
goto T2211;
T2211:;
	if(!(endp_prop((V628)))){
	goto T2212;}
	{object V630 = Cnil;
	VMR45(V630)}
goto T2212;
T2212:;
	princ_char(10,VV[25]);
	(void)((*(LnkLI267))((V629)));
	V628= cdr((V628));
	V629= car((V628));
	goto T2211;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFCFUN	*/

static object LI47(V632)

object V632;
{	 VMB46 VMS46 VMV46
goto TTL;
TTL:;
	{register object V633;
	V633= Cnil;
	if(endp_prop((V632))){
	goto T2226;}
	if(!(endp_prop(cdr((V632))))){
	goto T2225;}
goto T2226;
T2226:;
	V634 = make_fixnum((long)length((V632)));
	(void)((*(LnkLI276))(VV[218],small_fixnum(2),V634));
goto T2225;
T2225:;
	if(type_of(car((V632)))==t_string){
	goto T2230;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[219],car((V632)))));
goto T2230;
T2230:;
	{object V635= cadr((V632));
	if(type_of(V635)==t_fixnum||
type_of(V635)==t_bignum||
type_of(V635)==t_ratio||
type_of(V635)==t_shortfloat||
type_of(V635)==t_longfloat||
type_of(V635)==t_complex){
	goto T2233;}}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[220],cadr((V632)))));
goto T2233;
T2233:;
	{register object V636;
	register object V637;
	V636= cddr((V632));
	V637= car((V636));
goto T2240;
T2240:;
	if(!(endp_prop((V636)))){
	goto T2241;}
	goto T2236;
goto T2241;
T2241:;
	if(!(type_of((V637))==t_string)){
	goto T2247;}
	{register object V638;
	V638= (V637);
	V633= make_cons((V638),(V633));
	goto T2245;}
goto T2247;
T2247:;
	if(!(type_of((V637))==t_cons)){
	goto T2252;}
	if(!(type_of(car((V637)))==t_symbol)){
	goto T2255;}
	base[2]= car((V637));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2257;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[221],car((V637)))));
goto T2257;
T2257:;
	{register object V639;
	V640= car((V637));
	V641= (*(LnkLI333))(cdr((V637)));
	V642= make_cons(/* INLINE-ARGS */V640,/* INLINE-ARGS */V641);
	V639= make_cons(/* INLINE-ARGS */V642,Cnil);
	V633= make_cons((V639),(V633));
	goto T2245;}
goto T2255;
T2255:;
	if(!(type_of(car((V637)))==t_cons)){
	goto T2264;}
	if(!(type_of(caar((V637)))==t_symbol)){
	goto T2264;}
	if(!((caar((V637)))==(VV[91]))){
	goto T2271;}
	if(!(endp_prop(cdar((V637))))){
	goto T2273;}
	goto T2264;
goto T2273;
T2273:;
	if(!(((endp_prop(cddar((V637)))?Ct:Cnil))==Cnil)){
	goto T2275;}
	goto T2264;
goto T2275;
T2275:;
	if(!(endp_prop(cdr((V637))))){
	goto T2277;}
	goto T2264;
goto T2277;
T2277:;
	if(((endp_prop(cddr((V637)))?Ct:Cnil))==Cnil){
	goto T2264;}
	goto T2269;
goto T2271;
T2271:;
	base[2]= caar((V637));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2264;}
goto T2269;
T2269:;
	{register object V643;
	V644= caar((V637));
	if(!((caar((V637)))==(VV[91]))){
	goto T2283;}
	V646= (*(LnkLI318))(cadar((V637)));
	V645= make_cons(/* INLINE-ARGS */V646,Cnil);
	goto T2281;
goto T2283;
T2283:;
	V645= (*(LnkLI333))(cdar((V637)));
goto T2281;
T2281:;
	V647= make_cons(/* INLINE-ARGS */V644,V645);
	V648= (*(LnkLI333))(cdr((V637)));
	V643= make_cons(/* INLINE-ARGS */V647,/* INLINE-ARGS */V648);
	V633= make_cons((V643),(V633));
	goto T2245;}
goto T2264;
T2264:;
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[222],(V637))));
	goto T2245;
goto T2252;
T2252:;
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[223],(V637))));
goto T2245;
T2245:;
	V636= cdr((V636));
	V637= car((V636));
	goto T2240;}
goto T2236;
T2236:;
	{object V649;
	V650= car((V632));
	V651= cadr((V632));
	V649= list(4,VV[218],/* INLINE-ARGS */V650,/* INLINE-ARGS */V651,reverse((V633)));
	setq(VV[24],make_cons((V649),symbol_value(VV[24])));
	{object V652 = symbol_value(VV[24]);
	VMR46(V652)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3DEFCFUN	*/

static object LI48(V656,V657,V658)

object V656;object V657;object V658;
{	 VMB47 VMS47 VMV47
goto TTL;
TTL:;
	{object V659;
	V659= Cnil;
	(void)((VFUN_NARGS=2,(*(LnkLI305))(VV[224],VV[218])));
	princ_char(10,VV[25]);
	(void)((*(LnkLI267))((V656)));
	princ_str("\n{",VV[25]);
	princ_str("\nobject *vs=vs_top;",VV[25]);
	princ_str("\nobject *old_top=vs_top+",VV[25]);
	(void)((*(LnkLI267))((V657)));
	princ_char(59,VV[25]);
	if(!(number_compare((V657),small_fixnum(0))>0)){
	goto T2306;}
	princ_str("\n	vs_top=old_top;",VV[25]);
goto T2306;
T2306:;
	princ_str("\n{",VV[25]);
	{object V660;
	register object V661;
	V660= (V658);
	V661= car((V660));
goto T2316;
T2316:;
	if(!(endp_prop((V660)))){
	goto T2317;}
	goto T2312;
goto T2317;
T2317:;
	if(!(type_of((V661))==t_string)){
	goto T2323;}
	princ_char(10,VV[25]);
	(void)((*(LnkLI267))((V661)));
	goto T2321;
goto T2323;
T2323:;
	if(!((caar((V661)))==(VV[91]))){
	goto T2328;}
	princ_char(10,VV[25]);
	(void)((*(LnkLI267))(cadadr((V661))));
	{object V662= caadr((V661));
	if((V662!= VV[74]))goto T2333;
	princ_str("=VV[",VV[25]);
	(void)((*(LnkLI267))(cadar((V661))));
	princ_str("];",VV[25]);
	goto T2321;
goto T2333;
T2333:;
	princ_str("=object_to_",VV[25]);
	base[1]= symbol_name(caadr((V661)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V663= vs_base[0];
	(void)((*(LnkLI267))(V663));
	princ_str("(VV[",VV[25]);
	(void)((*(LnkLI267))(cadar((V661))));
	princ_str("]);",VV[25]);
	goto T2321;}
goto T2328;
T2328:;
	princ_str("\n{vs_base=vs_top=old_top;",VV[25]);
	{register object V664;
	register object V665;
	V664= cdar((V661));
	V665= car((V664));
goto T2350;
T2350:;
	if(!(endp_prop((V664)))){
	goto T2351;}
	goto T2346;
goto T2351;
T2351:;
	princ_str("\nvs_push(",VV[25]);
	{object V666= car((V665));
	if((V666!= VV[74]))goto T2358;
	(void)((*(LnkLI267))(cadr((V665))));
	goto T2357;
goto T2358;
T2358:;
	if((V666!= VV[334]))goto T2360;
	princ_str("code_char((long)",VV[25]);
	(void)((*(LnkLI267))(cadr((V665))));
	princ_char(41,VV[25]);
	goto T2357;
goto T2360;
T2360:;
	if((V666!= VV[335]))goto T2364;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T2365;}
	princ_str("CMP",VV[25]);
goto T2365;
T2365:;
	princ_str("make_fixnum((long)",VV[25]);
	(void)((*(LnkLI267))(cadr((V665))));
	princ_char(41,VV[25]);
	goto T2357;
goto T2364;
T2364:;
	if((V666!= VV[336]))goto T2372;
	princ_str("make_shortfloat((double)",VV[25]);
	(void)((*(LnkLI267))(cadr((V665))));
	princ_char(41,VV[25]);
	goto T2357;
goto T2372;
T2372:;
	if((V666!= VV[337]))goto T2376;
	princ_str("make_longfloat((double)",VV[25]);
	(void)((*(LnkLI267))(cadr((V665))));
	princ_char(41,VV[25]);
	goto T2357;
goto T2376;
T2376:;}
goto T2357;
T2357:;
	princ_str(");",VV[25]);
	V664= cdr((V664));
	V665= car((V664));
	goto T2350;}
goto T2346;
T2346:;
	{register object x= caar((V661)),V667= symbol_value(VV[79]);
	while(!endp(V667))
	if(type_of(V667->c.c_car)==t_cons &&eql(x,V667->c.c_car->c.c_car)){
	V659= (V667->c.c_car);
	goto T2391;
	}else V667=V667->c.c_cdr;
	V659= Cnil;}
goto T2391;
T2391:;
	if(((V659))==Cnil){
	goto T2389;}
	if((symbol_value(VV[149]))==Cnil){
	goto T2393;}
	princ_str("\nihs_push(VV[",VV[25]);
	V668= (*(LnkLI320))(caar((V661)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V668));
	princ_str("]);",VV[25]);
	princ_str("\nL",VV[25]);
	(void)((*(LnkLI267))(cdr((V659))));
	princ_str("();",VV[25]);
	princ_str("\nihs_pop();",VV[25]);
	goto T2387;
goto T2393;
T2393:;
	princ_str("\nL",VV[25]);
	(void)((*(LnkLI267))(cdr((V659))));
	princ_str("();",VV[25]);
	goto T2387;
goto T2389;
T2389:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2408;}
	princ_str("\nsuper_funcall(VV[",VV[25]);
	V669= (*(LnkLI320))(caar((V661)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V669));
	princ_str("]);",VV[25]);
	goto T2387;
goto T2408;
T2408:;
	if((symbol_value(VV[157]))==Cnil){
	goto T2414;}
	princ_str("\nsuper_funcall_no_event(VV[",VV[25]);
	V670= (*(LnkLI320))(caar((V661)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V670));
	princ_str("]);",VV[25]);
	goto T2387;
goto T2414;
T2414:;
	princ_str("\nCMPfuncall(VV[",VV[25]);
	V671= (*(LnkLI320))(caar((V661)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V671));
	princ_str("]->s.s_gfdef);",VV[25]);
goto T2387;
T2387:;
	if(endp_prop(cdr((V661)))){
	goto T2422;}
	princ_char(10,VV[25]);
	(void)((*(LnkLI267))(cadadr((V661))));
	{object V672= caadr((V661));
	if((V672!= VV[74]))goto T2429;
	princ_str("=vs_base[0];",VV[25]);
	goto T2428;
goto T2429;
T2429:;
	princ_str("=object_to_",VV[25]);
	base[1]= symbol_name(caadr((V661)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V673= vs_base[0];
	(void)((*(LnkLI267))(V673));
	princ_str("(vs_base[0]);",VV[25]);}
goto T2428;
T2428:;
	{register object V674;
	register object V675;
	V674= cddr((V661));
	V675= car((V674));
goto T2439;
T2439:;
	if(!(endp_prop((V674)))){
	goto T2440;}
	goto T2422;
goto T2440;
T2440:;
	princ_str("\nvs_base++;",VV[25]);
	princ_char(10,VV[25]);
	(void)((*(LnkLI267))(cadr((V675))));
	{object V676= car((V675));
	if((V676!= VV[74]))goto T2450;
	princ_str("=(vs_base<vs_top?vs_base[0]:Cnil);",VV[25]);
	goto T2449;
goto T2450;
T2450:;
	princ_str("=object_to_",VV[25]);
	base[3]= symbol_name(car((V675)));
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V677= vs_base[0];
	(void)((*(LnkLI267))(V677));
	princ_str("((vs_base<vs_top?vs_base[0]:Cnil));",VV[25]);}
goto T2449;
T2449:;
	V674= cdr((V674));
	V675= car((V674));
	goto T2439;}
goto T2422;
T2422:;
	princ_str("\n}",VV[25]);
goto T2321;
T2321:;
	V660= cdr((V660));
	V661= car((V660));
	goto T2316;}
goto T2312;
T2312:;
	princ_str("\n}",VV[25]);
	princ_str("\nvs_top=vs;",VV[25]);
	princ_str("\n}",VV[25]);
	{object V678 = Cnil;
	VMR47(V678)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFENTRY	*/

static object LI49(V680)

register object V680;
{	 VMB48 VMS48 VMV48
goto TTL;
TTL:;
	{register object V681;
	register object V682;
	object V683;
	register object V684;
	V681= Cnil;
	V682= Cnil;
	setq(VV[61],number_plus(symbol_value(VV[61]),small_fixnum(1)));
	V683= symbol_value(VV[61]);
	V684= Cnil;
	if(endp_prop((V680))){
	goto T2479;}
	if(endp_prop(cdr((V680)))){
	goto T2479;}
	if(!(endp_prop(cddr((V680))))){
	goto T2478;}
goto T2479;
T2479:;
	V685 = make_fixnum((long)length((V680)));
	(void)((*(LnkLI276))(VV[225],small_fixnum(3),V685));
goto T2478;
T2478:;
	if(type_of(car((V680)))==t_symbol){
	goto T2485;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[226],car((V680)))));
goto T2485;
T2485:;
	{register object V686;
	register object V687;
	V686= cadr((V680));
	V687= car((V686));
goto T2492;
T2492:;
	if(!(endp_prop((V686)))){
	goto T2493;}
	goto T2488;
goto T2493;
T2493:;
	{register object x= (V687),V688= VV[227];
	while(!endp(V688))
	if(eql(x,V688->c.c_car)){
	goto T2497;
	}else V688=V688->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[228],(V687))));
goto T2497;
T2497:;
	V686= cdr((V686));
	V687= car((V686));
	goto T2492;}
goto T2488;
T2488:;
	V684= caddr((V680));
	if(!(type_of((V684))==t_symbol)){
	goto T2509;}
	V681= VV[74];
	base[1]= symbol_name((V684));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V682= vs_base[0];
	goto T2507;
goto T2509;
T2509:;
	if(!(type_of((V684))==t_string)){
	goto T2516;}
	V681= VV[74];
	V682= (V684);
	goto T2507;
goto T2516;
T2516:;
	if(!(type_of((V684))==t_cons)){
	goto T2522;}
	{register object x= car((V684)),V689= VV[229];
	while(!endp(V689))
	if(eql(x,V689->c.c_car)){
	goto T2526;
	}else V689=V689->c.c_cdr;
	goto T2522;}
goto T2526;
T2526:;
	if(!(type_of(cdr((V684)))==t_cons)){
	goto T2522;}
	if(type_of(cadr((V684)))==t_symbol){
	goto T2529;}
	if(!(type_of(cadr((V684)))==t_string)){
	goto T2522;}
goto T2529;
T2529:;
	if(!(endp_prop(cddr((V684))))){
	goto T2522;}
	if(!(type_of(cadr((V684)))==t_symbol)){
	goto T2537;}
	base[1]= symbol_name(cadr((V684)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V682= vs_base[0];
	goto T2535;
goto T2537;
T2537:;
	V682= cadr((V684));
goto T2535;
T2535:;
	V681= car((V684));
	goto T2507;
goto T2522;
T2522:;
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[230],(V684))));
goto T2507;
T2507:;
	{object V690;
	V690= list(6,VV[225],car((V680)),(V683),cadr((V680)),(V681),(V682));
	setq(VV[24],make_cons((V690),symbol_value(VV[24])));}
	{object V691;
	V691= make_cons(car((V680)),(V683));
	setq(VV[79],make_cons((V691),symbol_value(VV[79])));
	{object V692 = symbol_value(VV[79]);
	VMR48(V692)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFENTRY	*/

static object LI50(V698,V699,V700,V701,V702)

object V698;object V699;object V700;object V701;object V702;
{	 VMB49 VMS49 VMV49
goto TTL;
TTL:;
	princ_str("\nstatic void L",VV[31]);
	(void)((*(LnkLI270))((V699)));
	princ_str("();",VV[31]);
	V703= list(2,VV[91],(V698));
	V704= list(3,VV[111],/* INLINE-ARGS */V703,(*(LnkLI294))(VV[231],(V699)));
	{object V705 = (VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V704));
	VMR49(V705)}
	return Cnil;
}
/*	local entry for function T3DEFENTRY	*/

static object LI51(V711,V712,V713,V714,V715)

object V711;object V712;object V713;register object V714;object V715;
{	 VMB50 VMS50 VMV50
goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI305))(VV[232],(V711))));
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI267))((V712)));
	princ_str("()",VV[25]);
	princ_str("\n{	object *old_base=vs_base;",VV[25]);
	{object V716= (V714);
	if((V716!= VV[233]))goto T2558;
	goto T2557;
goto T2558;
T2558:;
	if((V716!= VV[338]))goto T2559;
	princ_str("\n	char *x;",VV[25]);
	goto T2557;
goto T2559;
T2559:;
	princ_str("\n	",VV[25]);
	base[0]= symbol_name((V714));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V717= vs_base[0];
	(void)((*(LnkLI267))(V717));
	princ_str(" x;",VV[25]);}
goto T2557;
T2557:;
	if((symbol_value(VV[157]))==Cnil){
	goto T2566;}
	princ_str("\n	check_arg(",VV[25]);
	V718 = make_fixnum((long)length((V713)));
	(void)((*(LnkLI267))(V718));
	princ_str(");",VV[25]);
goto T2566;
T2566:;
	if(((V714))==(VV[233])){
	goto T2572;}
	princ_str("\n	x=",VV[25]);
goto T2572;
T2572:;
	princ_str("\n	",VV[25]);
	(void)((*(LnkLI267))((V715)));
	princ_char(40,VV[25]);
	if(endp_prop((V713))){
	goto T2580;}
	{register object V719;
	register long V720;
	V720= 0;
	V719= (V713);
goto T2585;
T2585:;
	{object V721= car((V719));
	if((V721!= VV[74]))goto T2589;
	princ_str("\n	vs_base[",VV[25]);
	V722 = make_fixnum(V720);
	(void)((*(LnkLI267))(V722));
	princ_char(93,VV[25]);
	goto T2588;
goto T2589;
T2589:;
	princ_str("\n	object_to_",VV[25]);
	base[0]= symbol_name(car((V719)));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V723= vs_base[0];
	(void)((*(LnkLI267))(V723));
	princ_str("(vs_base[",VV[25]);
	V724 = make_fixnum(V720);
	(void)((*(LnkLI267))(V724));
	princ_str("])",VV[25]);}
goto T2588;
T2588:;
	if(!(endp_prop(cdr((V719))))){
	goto T2600;}
	goto T2580;
goto T2600;
T2600:;
	princ_char(44,VV[25]);
	V719= cdr((V719));
	V720= (long)(V720)+1;
	goto T2585;}
goto T2580;
T2580:;
	princ_str(");",VV[25]);
	princ_str("\n	vs_top=(vs_base=old_base)+1;",VV[25]);
	princ_str("\n	vs_base[0]=",VV[25]);
	{object V725= (V714);
	if((V725!= VV[233]))goto T2616;
	princ_str("Cnil",VV[25]);
	goto T2615;
goto T2616;
T2616:;
	if((V725!= VV[74]))goto T2618;
	princ_char(120,VV[25]);
	goto T2615;
goto T2618;
T2618:;
	if((V725!= VV[334]))goto T2620;
	princ_str("code_char(x)",VV[25]);
	goto T2615;
goto T2620;
T2620:;
	if((V725!= VV[335]))goto T2622;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T2623;}
	princ_str("CMP",VV[25]);
goto T2623;
T2623:;
	princ_str("make_fixnum(x)",VV[25]);
	goto T2615;
goto T2622;
T2622:;
	if((V725!= VV[338]))goto T2628;
	princ_str("make_simple_string(x)",VV[25]);
	goto T2615;
goto T2628;
T2628:;
	if((V725!= VV[336]))goto T2630;
	princ_str("make_shortfloat(x)",VV[25]);
	goto T2615;
goto T2630;
T2630:;
	if((V725!= VV[337]))goto T2632;
	princ_str("make_longfloat(x)",VV[25]);
	goto T2615;
goto T2632;
T2632:;}
goto T2615;
T2615:;
	princ_char(59,VV[25]);
	princ_str("\n}",VV[25]);
	{object V726 = Cnil;
	VMR50(V726)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFLA	*/

static object LI52(V728)

object V728;
{	 VMB51 VMS51 VMV51
goto TTL;
TTL:;
	{object V729 = Cnil;
	VMR51(V729)}
	return Cnil;
}
/*	local entry for function PARSE-CVSPECS	*/

static object LI53(V731)

object V731;
{	 VMB52 VMS52 VMV52
goto TTL;
TTL:;
	{register object V732;
	V732= Cnil;
	{register object V733;
	register object V734;
	V733= (V731);
	V734= car((V733));
goto T2641;
T2641:;
	if(!(endp_prop((V733)))){
	goto T2642;}
	{object V735 = reverse((V732));
	VMR52(V735)}
goto T2642;
T2642:;
	if(!(type_of((V734))==t_symbol)){
	goto T2648;}
	{object V736;
	base[2]= symbol_name((V734));
	vs_top=(vs_base=base+2)+1;
	Lstring_downcase();
	vs_top=sup;
	V737= vs_base[0];
	V736= list(2,VV[74],V737);
	V732= make_cons((V736),(V732));
	goto T2646;}
goto T2648;
T2648:;
	if(!(type_of((V734))==t_string)){
	goto T2655;}
	{object V738;
	V738= list(2,VV[74],(V734));
	V732= make_cons((V738),(V732));
	goto T2646;}
goto T2655;
T2655:;
	if(!(type_of((V734))==t_cons)){
	goto T2660;}
	{register object x= car((V734)),V739= VV[234];
	while(!endp(V739))
	if(eql(x,V739->c.c_car)){
	goto T2663;
	}else V739=V739->c.c_cdr;
	goto T2660;}
goto T2663;
T2663:;
	{register object V740;
	register object V741;
	V740= cdr((V734));
	V741= car((V740));
goto T2667;
T2667:;
	if(!(endp_prop((V740)))){
	goto T2668;}
	goto T2646;
goto T2668;
T2668:;
	{register object V742;
	V743= car((V734));
	if(!(type_of((V741))==t_symbol)){
	goto T2676;}
	base[4]= symbol_name((V741));
	vs_top=(vs_base=base+4)+1;
	Lstring_downcase();
	vs_top=sup;
	V744= vs_base[0];
	goto T2674;
goto T2676;
T2676:;
	if(!(type_of((V741))==t_string)){
	goto T2680;}
	V744= (V741);
	goto T2674;
goto T2680;
T2680:;
	V744= (VFUN_NARGS=2,(*(LnkLI258))(VV[235],(V741)));
goto T2674;
T2674:;
	V742= list(2,/* INLINE-ARGS */V743,V744);
	V732= make_cons((V742),(V732));}
	V740= cdr((V740));
	V741= car((V740));
	goto T2667;}
goto T2660;
T2660:;
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[236],(V734))));
goto T2646;
T2646:;
	V733= cdr((V733));
	V734= car((V733));
	goto T2641;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3LOCAL-DCFUN	*/

static object LI54(V750,V751,V752,V753,V754)

object V750;object V751;object V752;register object V753;register object V754;
{	 VMB53 VMS53 VMV53
	bds_check;
goto TTL;
TTL:;
	{object V755;
	register object V756;
	object V757;
	if(((V750))==Cnil){
	goto T2695;}
	V755= small_fixnum(0);
	goto T2693;
goto T2695;
T2695:;
	V755= structure_ref((V753),VV[32],4);
goto T2693;
T2693:;
	V756= Cnil;
	bds_bind(VV[20],(*(LnkLI299))(cadr((V754))));
	bds_bind(VV[117],Cnil);
	V757= caaddr((V754));
	if((structure_ref((V753),VV[32],0))==Cnil){
	goto T2703;}
	V758= structure_ref((V753),VV[32],0);
	goto T2701;
goto T2703;
T2703:;
	V758= Cnil;
goto T2701;
T2701:;
	(void)((VFUN_NARGS=2,(*(LnkLI305))(VV[237],V758)));
	princ_str("\nstatic void ",VV[25]);
	if(((V750))==Cnil){
	goto T2710;}
	V759= VV[238];
	goto T2708;
goto T2710;
T2710:;
	V759= VV[239];
goto T2708;
T2708:;
	(void)((*(LnkLI267))(V759));
	V760= structure_ref((V753),VV[32],3);
	(void)((*(LnkLI267))(/* INLINE-ARGS */V760));
	princ_char(40,VV[25]);
	princ_str("base0",VV[25]);
	if(((V757))==Cnil){
	goto T2719;}
	V761= VV[240];
	goto T2717;
goto T2719;
T2719:;
	V761= VV[241];
goto T2717;
T2717:;
	(void)((*(LnkLI267))(V761));
	V762= structure_ref(cadr((V754)),VV[62],1);
	(void)((*(LnkLI301))(/* INLINE-ARGS */V762,small_fixnum(2)));
	(void)((*(LnkLI306))(caaddr((V754)),Cnil));
	princ_str("register object *",VV[25]);
	(void)((*(LnkLI267))((VV[20]->s.s_dbind)));
	princ_str("base0;",VV[25]);
	bds_bind(VV[242],(V752));
	bds_bind(VV[128],VV[124]);
	bds_bind(VV[18],Cnil);
	bds_bind(VV[129],small_fixnum(0));
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],one_plus((V755)));
	bds_bind(VV[132],(V752));
	bds_bind(VV[133],(V751));
	bds_bind(VV[134],make_cons((VV[128]->s.s_dbind),Cnil));
	bds_bind(VV[135],(VV[128]->s.s_dbind));
	setq(VV[137],number_plus(symbol_value(VV[137]),small_fixnum(1)));
	bds_bind(VV[136],symbol_value(VV[137]));
	bds_bind(VV[138],Cnil);
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],small_fixnum(0));
	V756= (VV[136]->s.s_dbind);
	princ_str("\n{",VV[25]);
	V763= structure_ref(cadr((V754)),VV[62],1);
	V764= structure_ref((V753),VV[32],3);
	(void)((*(LnkLI307))(/* INLINE-ARGS */V763,/* INLINE-ARGS */V764,VV[243]));
	princ_str("\n	VMB",VV[25]);
	(void)((*(LnkLI267))((V756)));
	princ_str(" VMS",VV[25]);
	(void)((*(LnkLI267))((V756)));
	princ_str(" VMV",VV[25]);
	(void)((*(LnkLI267))((V756)));
	if((symbol_value(VV[149]))==Cnil){
	goto T2743;}
	princ_str("\n	ihs_check;",VV[25]);
goto T2743;
T2743:;
	base[19]= caddr(cddr((V754)));
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk308)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),(VV[130]->s.s_dbind))==0)){
	goto T2751;}
	if(((VV[138]->s.s_dbind))!=Cnil){
	goto T2751;}
	if(((VV[140]->s.s_dbind))!=Cnil){
	goto T2751;}
	goto T2749;
goto T2751;
T2751:;
	princ_str("\n	base[0]=base[0];",VV[25]);
goto T2749;
T2749:;
	princ_str("\n}",VV[25]);
	(void)((*(LnkLI309))((V756),Ct));
	V765= structure_ref((V753),VV[32],3);
	{object V766 = (*(LnkLI303))(/* INLINE-ARGS */V765);
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
	VMR53(V766)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3LOCAL-FUN	*/

static object LI55(V772,V773,V774,V775,V776)

object V772;object V773;object V774;object V775;object V776;
{	 VMB54 VMS54 VMV54
	bds_check;
goto TTL;
TTL:;
	{long V777;
	if(((V772))==Cnil){
	goto T2763;}
	V777= 0;
	goto T2761;
goto T2763;
T2763:;
	V777= fix(structure_ref((V775),VV[32],4));
goto T2761;
T2761:;
	bds_bind(VV[20],(*(LnkLI299))(cadr((V776))));
	bds_bind(VV[117],Cnil);
	if(!(((V772))==(VV[244]))){
	goto T2766;}
	{object V778 = (*(LnkLI243))((V772),(V773),(V774),(V775),(V776));
	bds_unwind1;
	bds_unwind1;
	VMR54(V778)}
goto T2766;
T2766:;
	if((structure_ref((V775),VV[32],0))==Cnil){
	goto T2772;}
	V779= structure_ref((V775),VV[32],0);
	goto T2770;
goto T2772;
T2772:;
	V779= Cnil;
goto T2770;
T2770:;
	(void)((VFUN_NARGS=2,(*(LnkLI305))(VV[245],V779)));
	princ_str("\nstatic void ",VV[31]);
	if(((V772))==Cnil){
	goto T2779;}
	V780= VV[246];
	goto T2777;
goto T2779;
T2779:;
	V780= VV[247];
goto T2777;
T2777:;
	(void)((*(LnkLI270))(V780));
	V781= structure_ref((V775),VV[32],3);
	(void)((*(LnkLI270))(/* INLINE-ARGS */V781));
	princ_str("();",VV[31]);
	princ_str("\nstatic void ",VV[25]);
	if(((V772))==Cnil){
	goto T2788;}
	V782= VV[248];
	goto T2786;
goto T2788;
T2788:;
	V782= VV[249];
goto T2786;
T2786:;
	(void)((*(LnkLI267))(V782));
	V783= structure_ref((V775),VV[32],3);
	(void)((*(LnkLI267))(/* INLINE-ARGS */V783));
	princ_char(40,VV[25]);
	{register object V784;
	register long V785;
	V784= make_fixnum(V777);
	V785= 0;
goto T2796;
T2796:;
	V786 = make_fixnum(V785);
	if(!(number_compare(V786,(V784))>=0)){
	goto T2797;}
	princ_str("base",VV[25]);
	V787 = make_fixnum(V785);
	(void)((*(LnkLI267))(V787));
	princ_char(41,VV[25]);
	goto T2792;
goto T2797;
T2797:;
	princ_str("base",VV[25]);
	V788 = make_fixnum(V785);
	(void)((*(LnkLI267))(V788));
	princ_char(44,VV[25]);
	V785= (long)(V785)+1;
	goto T2796;}
goto T2792;
T2792:;
	princ_str("\nregister object ",VV[25]);
	{register object V789;
	register long V790;
	V789= make_fixnum(V777);
	V790= 0;
goto T2817;
T2817:;
	V791 = make_fixnum(V790);
	if(!(number_compare(V791,(V789))>=0)){
	goto T2818;}
	princ_char(42,VV[25]);
	(void)((*(LnkLI267))((VV[20]->s.s_dbind)));
	princ_str("base",VV[25]);
	V792 = make_fixnum(V790);
	(void)((*(LnkLI267))(V792));
	princ_char(59,VV[25]);
	goto T2813;
goto T2818;
T2818:;
	princ_char(42,VV[25]);
	(void)((*(LnkLI267))((VV[20]->s.s_dbind)));
	princ_str("base",VV[25]);
	V793 = make_fixnum(V790);
	(void)((*(LnkLI267))(V793));
	princ_char(44,VV[25]);
	V790= (long)(V790)+1;
	goto T2817;}
goto T2813;
T2813:;
	V794= structure_ref(cadr((V776)),VV[62],1);
	(void)((*(LnkLI301))(/* INLINE-ARGS */V794,small_fixnum(2)));
	bds_bind(VV[128],VV[127]);
	bds_bind(VV[242],(V774));
	bds_bind(VV[18],Cnil);
	bds_bind(VV[129],small_fixnum(0));
	bds_bind(VV[130],small_fixnum(0));
	V795 = make_fixnum(V777);
	bds_bind(VV[131],one_plus(V795));
	bds_bind(VV[132],(V774));
	bds_bind(VV[133],(V773));
	bds_bind(VV[134],make_cons((VV[128]->s.s_dbind),Cnil));
	bds_bind(VV[135],(VV[128]->s.s_dbind));
	setq(VV[137],number_plus(symbol_value(VV[137]),small_fixnum(1)));
	bds_bind(VV[136],symbol_value(VV[137]));
	bds_bind(VV[138],Cnil);
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],small_fixnum(0));
	princ_str("\n{	register object *",VV[25]);
	(void)((*(LnkLI267))((VV[20]->s.s_dbind)));
	princ_str("base=vs_base;",VV[25]);
	princ_str("\n	register object *",VV[25]);
	(void)((*(LnkLI267))((VV[20]->s.s_dbind)));
	princ_str("sup=base+VM",VV[25]);
	(void)((*(LnkLI267))((VV[136]->s.s_dbind)));
	princ_char(59,VV[25]);
	V796= structure_ref(cadr((V776)),VV[62],1);
	V797= structure_ref((V775),VV[32],3);
	(void)((*(LnkLI307))(/* INLINE-ARGS */V796,/* INLINE-ARGS */V797,VV[250]));
	princ_str(" VC",VV[25]);
	(void)((*(LnkLI267))((VV[136]->s.s_dbind)));
	if((symbol_value(VV[157]))==Cnil){
	goto T2858;}
	princ_str("\n	vs_reserve(VM",VV[25]);
	(void)((*(LnkLI267))((VV[136]->s.s_dbind)));
	princ_str(");",VV[25]);
	goto T2856;
goto T2858;
T2858:;
	princ_str("\n	vs_check;",VV[25]);
goto T2856;
T2856:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2864;}
	princ_str("\n	ihs_check;",VV[25]);
goto T2864;
T2864:;
	if(((V772))==Cnil){
	goto T2870;}
	(void)((VFUN_NARGS=2,(*(LnkLI324))(caddr((V776)),caddr(cddr((V776))))));
	goto T2868;
goto T2870;
T2870:;
	(void)((VFUN_NARGS=3,(*(LnkLI324))(caddr((V776)),caddr(cddr((V776))),(V775))));
goto T2868;
T2868:;
	princ_str("\n}",VV[25]);
	{object V798;
	V798= make_cons((VV[136]->s.s_dbind),(VV[130]->s.s_dbind));
	setq(VV[33],make_cons((V798),symbol_value(VV[33])));}
	princ_str("\n#define VC",VV[31]);
	(void)((*(LnkLI270))((VV[136]->s.s_dbind)));
	V799= (*(LnkLI325))();
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
	V800= structure_ref((V775),VV[32],3);
	{object V801 = (*(LnkLI303))(/* INLINE-ARGS */V800);
	bds_unwind1;
	bds_unwind1;
	VMR54(V801)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-CVARS	*/

static object LI56()

{	 VMB55 VMS55 VMV55
goto TTL;
TTL:;
	{register object V802;
	V802= Cnil;
	{register object V803;
	register object V804;
	V803= symbol_value(VV[18]);
	V804= car((V803));
goto T2885;
T2885:;
	if(!(endp_prop((V803)))){
	goto T2886;}
	goto T2881;
goto T2886;
T2886:;
	{register object V805;
	if(!(type_of((V804))==t_cons)){
	goto T2893;}
	{register object V806;
	V806= car((V804));
	V804= cdr((V804));
	V805= (V806);
	goto T2891;}
goto T2893;
T2893:;
	V805= Ct;
goto T2891;
T2891:;
	if(!(((V802))==((V805)))){
	goto T2900;}
	base[1]= symbol_value(VV[31]);
	base[2]= VV[251];
	base[3]= (V804);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T2898;
goto T2900;
T2900:;
	if(!(((V802))==Cnil)){
	goto T2906;}
	goto T2905;
goto T2906;
T2906:;
	base[1]= symbol_value(VV[31]);
	base[2]= VV[252];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
goto T2905;
T2905:;
	V802= (V805);
	base[1]= symbol_value(VV[31]);
	base[2]= VV[253];
	base[3]= (*(LnkLI273))((V802));
	base[4]= (V804);
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
goto T2898;
T2898:;
	if(!(((V802))==(VV[254]))){
	goto T2890;}
	base[1]= symbol_value(VV[31]);
	base[2]= VV[255];
	base[3]= (V804);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;}
goto T2890;
T2890:;
	V803= cdr((V803));
	V804= car((V803));
	goto T2885;}
goto T2881;
T2881:;
	if(symbol_value(VV[18])==Cnil){
	goto T2926;}
	base[0]= symbol_value(VV[31]);
	base[1]= VV[256];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
goto T2926;
T2926:;
	if(eql(symbol_value(VV[141]),small_fixnum(0))){
	goto T2930;}
	base[0]= symbol_value(VV[31]);
	base[1]= VV[257];
	base[2]= symbol_value(VV[141]);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V807 = vs_base[0];
	VMR55(V807)}
goto T2930;
T2930:;
	{object V808 = Cnil;
	VMR55(V808)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function DO-DECL	*/

static void L26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_reserve(VM56);
	{object V809;
	check_arg(1);
	V809=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	V810= structure_ref((V809),VV[69],4);
	if(eql(/* INLINE-ARGS */V810,VV[72])){
	goto T2936;}
	goto T2935;
goto T2936;
T2936:;
	(VV[153]->s.s_dbind)= Ct;
goto T2935;
T2935:;
	{object V811;
	V811= (*(LnkLI339))((V809));
	if(((V811))==Cnil){
	goto T2941;}
	{object V812;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V812= symbol_value(VV[88]);
	(void)(structure_set((V809),VV[69],1,(V811)));
	(void)(structure_set((V809),VV[69],4,(V812)));
	princ_str("\n	",VV[25]);
	if((base0[1])!=Cnil){
	goto T2948;}
	princ_char(123,VV[25]);
	base0[1]= Ct;
goto T2948;
T2948:;
	base[1]= (V809);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk340)();
	return;}
goto T2941;
T2941:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
static void LnkT340(){ call_or_link(VV[340],(void **)&Lnk340);} /* WT-VAR-DECL */
static object  LnkTLI339(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[339],(void **)&LnkLI339,1,ap);va_end(ap);return V1;} /* C2VAR-KIND */
static object  LnkTLI243(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[243],(void **)&LnkLI243,5,ap);va_end(ap);return V1;} /* T3LOCAL-DCFUN */
static object  LnkTLI333(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[333],(void **)&LnkLI333,1,ap);va_end(ap);return V1;} /* PARSE-CVSPECS */
static object  LnkTLI332(){return call_proc0(VV[332],(void **)&LnkLI332);} /* WFS-ERROR */
static void LnkT331(){ call_or_link(VV[331],(void **)&Lnk331);} /* C2DM */
static object  LnkTLI330(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[330],(void **)&LnkLI330,3,ap);va_end(ap);return V1;} /* C1DM */
static object  LnkTLI329(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[329],(void **)&LnkLI329,ap);va_end(ap);return V1;} /* REMOVE-DUPLICATES */
static object  LnkTLI328(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[328],(void **)&LnkLI328,258,ap);va_end(ap);return V1;} /* ANALYZE-REGS1 */
static object  LnkTLI327(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[327],(void **)&LnkLI327,ap);va_end(ap);return V1;} /* WARN */
static object  LnkTLI326(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[326],(void **)&LnkLI326,1,ap);va_end(ap);return V1;} /* REGISTER */
static object  LnkTLI325(){return call_proc0(VV[325],(void **)&LnkLI325);} /* WT-CVARS */
static object  LnkTLI324(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[324],(void **)&LnkLI324,ap);va_end(ap);return V1;} /* C2LAMBDA-EXPR */
static object  LnkTLI323(){return call_proc0(VV[323],(void **)&LnkLI323);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI322(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[322],(void **)&LnkLI322,1,ap);va_end(ap);return V1;} /* WT-VS */
static object  LnkTLI321(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[321],(void **)&LnkLI321,1,ap);va_end(ap);return V1;} /* C2BIND */
static object  LnkTLI320(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[320],(void **)&LnkLI320,1,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI319(){return call_proc0(VV[319],(void **)&LnkLI319);} /* BABOON */
static object  LnkTLI318(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[318],(void **)&LnkLI318,1,ap);va_end(ap);return V1;} /* ADD-OBJECT */
static void LnkT317(){ call_or_link(VV[317],(void **)&Lnk317);} /* INC-INLINE-BLOCKS */
static object  LnkTLI316(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[316],(void **)&LnkLI316,ap);va_end(ap);return V1;} /* CS-PUSH */
static object  LnkTLI315(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[315],(void **)&LnkLI315,2,ap);va_end(ap);return V1;} /* C2BIND-INIT */
static object  LnkTLI314(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[314],(void **)&LnkLI314,2,ap);va_end(ap);return V1;} /* C2BIND-LOC */
static object  LnkTLI313(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[313],(void **)&LnkLI313,1,ap);va_end(ap);return V1;} /* SET-UP-VAR-CVS */
static object  LnkTLI312(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[312],(void **)&LnkLI312,1,ap);va_end(ap);return V1;} /* WT-LIST */
static object  LnkTLI311(){return call_proc0(VV[311],(void **)&LnkLI311);} /* CVS-PUSH */
static object  LnkTLI310(){return call_proc0(VV[310],(void **)&LnkLI310);} /* VS-PUSH */
static object  LnkTLI309(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[309],(void **)&LnkLI309,2,ap);va_end(ap);return V1;} /* WT-V*-MACROS */
static void LnkT308(){ call_or_link(VV[308],(void **)&Lnk308);} /* C2EXPR */
static object  LnkTLI307(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[307],(void **)&LnkLI307,3,ap);va_end(ap);return V1;} /* ASSIGN-DOWN-VARS */
static object  LnkTLI306(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[306],(void **)&LnkLI306,2,ap);va_end(ap);return V1;} /* WT-REQUIREDS */
static object  LnkTLI305(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[305],(void **)&LnkLI305,ap);va_end(ap);return V1;} /* WT-COMMENT */
static object  LnkTLI304(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[304],(void **)&LnkLI304,2,ap);va_end(ap);return V1;} /* ADD-DEBUG-INFO */
static object  LnkTLI303(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[303],(void **)&LnkLI303,1,ap);va_end(ap);return V1;} /* WT-DOWNWARD-CLOSURE-MACRO */
static void LnkT302(){ call_or_link(VV[302],(void **)&Lnk302);} /* T3DEFUN-AUX */
static object  LnkTLI301(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[301],(void **)&LnkLI301,258,ap);va_end(ap);return V1;} /* ANALYZE-REGS */
static void LnkT300(){ call_or_link(VV[300],(void **)&Lnk300);} /* FIXNUMP */
static object  LnkTLI299(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[299],(void **)&LnkLI299,1,ap);va_end(ap);return V1;} /* VOLATILE */
static object  LnkTLI298(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[298],(void **)&LnkLI298,1,ap);va_end(ap);return V1;} /* MAXARGS */
static object  LnkTLI297(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[297],(void **)&LnkLI297,1,ap);va_end(ap);return V1;} /* VARARG-P */
static object  LnkTLI296(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[296],(void **)&LnkLI296,3,ap);va_end(ap);return V1;} /* WT-IF-PROCLAIMED */
static object  LnkTLI295(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[295],(void **)&LnkLI295,258,ap);va_end(ap);return V1;} /* PROCLAIMED-ARGD */
static object  LnkTLI294(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[294],(void **)&LnkLI294,2,ap);va_end(ap);return V1;} /* ADD-ADDRESS */
static object  LnkTLI293(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[293],(void **)&LnkLI293,ap);va_end(ap);return V1;} /* ADD-INIT */
static object  LnkTLI292(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[292],(void **)&LnkLI292,ap);va_end(ap);return V1;} /* FAST-LINK-PROCLAIMED-TYPE-P */
static object  LnkTLI291(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[291],(void **)&LnkLI291,2,ap);va_end(ap);return V1;} /* SHIFT<< */
static object  LnkTLI290(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[290],(void **)&LnkLI290,257,ap);va_end(ap);return V1;} /* F-TYPE */
static void LnkT289(){ call_or_link(VV[289],(void **)&Lnk289);} /* SUBTYPEP */
static void LnkT288(){ call_or_link(VV[288],(void **)&Lnk288);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI287(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[287],(void **)&LnkLI287,ap);va_end(ap);return V1;} /* MAKE-ARRAY */
static object  LnkTLI286(){return call_proc0(VV[286],(void **)&LnkLI286);} /* ADD-LOAD-TIME-SHARP-COMMA */
static object  LnkTLI285(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[285],(void **)&LnkLI285,2,ap);va_end(ap);return V1;} /* MAKE-INLINE-STRING */
static object  LnkTLI284(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[284],(void **)&LnkLI284,2,ap);va_end(ap);return V1;} /* TYPE-AND */
static object  LnkTLI283(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[283],(void **)&LnkLI283,2,ap);va_end(ap);return V1;} /* CMPFIX-ARGS */
static object  LnkTLI282(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[282],(void **)&LnkLI282,1,ap);va_end(ap);return V1;} /* PROCLAIM */
static object  LnkTLI281(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[281],(void **)&LnkLI281,1,ap);va_end(ap);return V1;} /* CHECK-DOWNWARD */
static object  LnkTLI280(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[280],(void **)&LnkLI280,ap);va_end(ap);return V1;} /* C1LAMBDA-EXPR */
static object  LnkTLI279(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[279],(void **)&LnkLI279,1,ap);va_end(ap);return V1;} /* T1PROGN */
static object  LnkTLI276(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[276],(void **)&LnkLI276,3,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */
static void LnkT275(){ call_or_link(VV[275],(void **)&Lnk275);} /* CMP-EVAL */
static void LnkT274(){ call_or_link(VV[274],(void **)&Lnk274);} /* DECLARATION-TYPE */
static object  LnkTLI273(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[273],(void **)&LnkLI273,1,ap);va_end(ap);return V1;} /* REP-TYPE */
static void LnkT272(){ call_or_link(VV[272],(void **)&Lnk272);} /* WT-DATA-FILE */
static object  LnkTLI271(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[271],(void **)&LnkLI271,1,ap);va_end(ap);return V1;} /* PUSH-DATA-INCF */
static object  LnkTLI270(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[270],(void **)&LnkLI270,1,ap);va_end(ap);return V1;} /* WT-H1 */
static object  LnkTLI269(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[269],(void **)&LnkLI269,1,ap);va_end(ap);return V1;} /* WT-FUNCTION-LINK */
static void LnkT268(){ call_or_link(VV[268],(void **)&Lnk268);} /* WT-GLOBAL-ENTRY */
static void LnkT250(){ call_or_link(VV[250],(void **)&Lnk250);} /* T3LOCAL-FUN */
static object  LnkTLI267(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[267],(void **)&LnkLI267,1,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI266(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[266],(void **)&LnkLI266,3,ap);va_end(ap);return V1;} /* CMP-EXPAND-MACRO */
static object  LnkTLI265(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[265],(void **)&LnkLI265,1,ap);va_end(ap);return V1;} /* T1ORDINARY */
static void LnkT264(){ call_or_link(VV[264],(void **)&Lnk264);} /* T1EXPR */
static object  LnkTLI263(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[263],(void **)&LnkLI263,1,ap);va_end(ap);return V1;} /* CMP-MACROEXPAND-1 */
static object  LnkTLI262(){return call_proc0(VV[262],(void **)&LnkLI262);} /* PRINT-CURRENT-FORM */
static object  LnkTLI261(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[261],(void **)&LnkLI261,1,ap);va_end(ap);return V1;} /* WT-DATA-PACKAGE-OPERATION */
static object  LnkTLI260(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[260],(void **)&LnkLI260,2,ap);va_end(ap);return V1;} /* MAYBE-EVAL */
static object  LnkTLI259(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[259],(void **)&LnkLI259,ap);va_end(ap);return V1;} /* CMPWARN */
static object  LnkTLI258(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[258],(void **)&LnkLI258,ap);va_end(ap);return V1;} /* CMPERR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

