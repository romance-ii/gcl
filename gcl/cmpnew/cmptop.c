
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
	if(!(endp((V17)))){
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
	if(!(endp((V19)))){
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
	if(!(endp(symbol_value(VV[28])))){
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
	if(!(endp((V24)))){
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
	if(!(endp((V27)))){
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
	if(!(endp((V29)))){
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
	if(!(endp((V32)))){
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
	if(!(endp((V39)))){
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
	if(!(endp((V53)))){
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
	if(!(endp((V56)))){
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
	if(!(endp((V62)))){
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
	if(!(endp((V71)))){
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
	if(endp((V82))){
	goto T391;}
	if(!(endp(cdr((V82))))){
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
	if(!(endp((V98)))){
	goto T447;}
	if(endp((V99))){
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
	V105= structure_ref((V101),VV[69],0);
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V106= vs_base[0];
	V107= list(2,/* INLINE-ARGS */V105,V106);
	V97= make_cons(/* INLINE-ARGS */V107,(V97));
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
	goto T487;
	}else V112=V112->c.c_cdr;
	goto T458;}
goto T487;
T487:;
goto T463;
T463:;
	if(((V97))!=Cnil){
	goto T488;}
	V114= structure_ref((V101),VV[69],0);
	(void)((VFUN_NARGS=3,(*(LnkLI259))(VV[76],(V90),/* INLINE-ARGS */V114)));
goto T488;
T488:;
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
	V115= get((V90),VV[67],Cnil);
	V116= get((V90),VV[78],Cnil);
	V117= get((V90),VV[67],Cnil);
	V118= list(5,(V90),V115,V116,small_fixnum(3),(*(LnkLI285))((V88),V117));
	setq(VV[77],make_cons(/* INLINE-ARGS */V118,symbol_value(VV[77])));
	goto T426;
goto T428;
T428:;
	{object V119;
	V120= get((V90),VV[78],Cnil);
	V119= ((V120)==(Ct)?Ct:Cnil);
	if(((V119))==Cnil){
	goto T426;}}
goto T426;
T426:;
	if((cadddr((V87)))==Cnil){
	goto T504;}
	V89= cadddr((V87));
goto T504;
T504:;
	(void)((*(LnkLI286))());
	V121= list(6,VV[51],(V90),(V88),(V87),(V89),(VV[59]->s.s_dbind));
	setq(VV[24],make_cons(/* INLINE-ARGS */V121,symbol_value(VV[24])));
	V122= make_cons((V90),(V88));
	setq(VV[79],make_cons(/* INLINE-ARGS */V122,symbol_value(VV[79])));
	V123= symbol_value(VV[79]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}
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
	goto T513;}
	base[0]= Cnil;
	base[1]= VV[80];
	base[2]= (V127);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V129 = vs_base[0];
	VMR9(V129)}
goto T513;
T513:;
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
goto T526;
T526:;
	if(!(endp(cdr((V131))))){
	goto T527;}
	base[0]= (V130);
	base[1]= VV[86];
	base[2]= make_fixnum(V132);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T523;
goto T527;
T527:;
	base[0]= (V130);
	base[1]= VV[87];
	base[2]= make_fixnum(V132);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V131= cdr((V131));
	V132= (long)(V132)+1;
	goto T526;}
goto T523;
T523:;
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
	if (narg <= 0) goto T542;
	else {
	V134= va_arg(ap,object);}
	--narg; goto T543;
goto T542;
T542:;
	V134= Cnil;
goto T543;
T543:;
	{object V135;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V135= symbol_value(VV[88]);
	if(((V134))==Cnil){
	goto T551;}
	V136= make_cons((V134),(V135));
	goto T549;
goto T551;
T551:;
	V136= (V135);
goto T549;
T549:;
	setq(VV[18],make_cons(V136,symbol_value(VV[18])));
	{object V137 = (V135);
	VMR10(V137)}}
	va_end(ap);
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
	goto T553;}
	V139= structure_ref((V139),VV[69],5);
goto T553;
T553:;
	if(((V139))==Cnil){
	goto T560;}
	base[0]= (V139);
	base[1]= VV[89];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk289)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T560;}
	{long V140 = 1;
	VMR11((object)V140)}
goto T560;
T560:;
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
goto T570;
T570:;
	if(eql(small_fixnum(0),(V148))){
	goto T572;}
	V146= (long)(V146)+((long)((fix((V148))) << (V147)));
goto T572;
T572:;
	if(((V149))==Cnil){
	goto T576;}
	V147= 10;
	V149= Cnil;
goto T576;
T576:;
	if(((V144))!=Cnil){
	goto T582;}
	{long V150 = V146;
	VMR12((object)V150)}
goto T582;
T582:;
	V147= (long)(V147)+(2);
	{register object V152;
	V152= car((V144));
	V144= cdr((V144));
	V151= (V152);}
	V148= make_fixnum((long)(*(LnkLI290))(V151));
	goto T570;}
}
/*	local entry for function WT-IF-PROCLAIMED	*/

static object LI13(V156,V157,V158)

register object V156;object V157;object V158;
{	 VMB13 VMS13 VMV13
goto TTL;
TTL:;
	if(((VFUN_NARGS=1,(*(LnkLI292))((V156))))==Cnil){
	goto T594;}
	{register object x= (V156),V159= symbol_value(VV[77]);
	while(!endp(V159))
	if(type_of(V159->c.c_car)==t_cons &&eql(x,V159->c.c_car->c.c_car)){
	goto T598;
	}else V159=V159->c.c_cdr;
	goto T597;}
goto T598;
T598:;
	V160= list(2,VV[91],(V156));
	V161= (*(LnkLI294))(VV[92],(V157));
	V162= get((V156),VV[67],Cnil);
	V163= get((V156),VV[78],Cnil);
	V164 = make_fixnum((long)(*(LnkLI295))(V162,V163));
	V165= list(4,VV[90],/* INLINE-ARGS */V160,/* INLINE-ARGS */V161,V164);
	(void)((VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V165)));
	{object V166 = Ct;
	VMR13(V166)}
goto T597;
T597:;
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
	goto T606;
	}else V171=V171->c.c_cdr;
	V169= Cnil;}
goto T606;
T606:;
	if(((V169))==Cnil){
	goto T609;}
	base[0]= (V167);
	vs_top=(vs_base=base+0)+1;
	Lmonotonically_nonincreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T611;}
	goto T602;
goto T611;
T611:;{object V173;
	V174 = make_fixnum((long)length((V169)));
	V173= number_minus((V168),V174);
	if(V173==Cnil)goto T614;
	goto T602;
goto T614;
T614:;}
	V175 = make_fixnum((long)length((V169)));
	V176= number_minus((V168),V175);
	(void)((VFUN_NARGS=4,(*(LnkLI259))(VV[93],(V156),/* INLINE-ARGS */V176,(V167))));
	goto T602;
goto T609;
T609:;
	if(eql((V167),(V168))){
	goto T617;}
	(void)((VFUN_NARGS=4,(*(LnkLI259))(VV[94],(V156),(V168),(V167))));
	goto T602;
goto T617;
T617:;
	(void)((VFUN_NARGS=2,(*(LnkLI259))(VV[95],(V156))));}
goto T602;
T602:;
	{object V177 = Cnil;
	VMR13(V177)}
goto T594;
T594:;
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
	goto T620;}
	{object V181 = VV[96];
	VMR14(V181)}
goto T620;
T620:;
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
	goto T623;}
	{long V185= fix(structure_ref((V184),VV[69],6));
	if(!((/* INLINE-ARGS */V185)>=(fix(symbol_value(VV[99]))))){
	goto T623;}}
	{object V186 = VV[100];
	VMR15(V186)}
goto T623;
T623:;
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
	V190= get((V189),VV[78],Cnil);
	if(equal(V190,Ct)){
	goto T627;}
	{object V191 = Cnil;
	VMR16(V191)}
goto T627;
T627:;
	{register object V192;
	V192= get((V189),VV[67],Cnil);
goto T632;
T632:;
	if(((V192))!=Cnil){
	goto T633;}
	{object V193 = Ct;
	VMR16(V193)}
goto T633;
T633:;
	if(!(type_of((V192))==t_cons)){
	goto T638;}
	goto T637;
goto T638;
T638:;
	{object V194 = Cnil;
	VMR16(V194)}
goto T637;
T637:;
	if(!((car((V192)))==(Ct))){
	goto T641;}
	goto T640;
goto T641;
T641:;
	if(!((car((V192)))==(VV[68]))){
	goto T643;}
	goto T640;
goto T643;
T643:;
	{object V195 = Cnil;
	VMR16(V195)}
goto T640;
T640:;
	V192= cdr((V192));
	goto T632;}
	return Cnil;
}
/*	local entry for function MAXARGS	*/

static object LI17(V197)

register object V197;
{	 VMB17 VMS17 VMV17
goto TTL;
TTL:;
	if((cadr(cddddr((V197))))!=Cnil){
	goto T648;}
	if((caddr((V197)))==Cnil){
	goto T649;}
goto T648;
T648:;
	{object V198 = small_fixnum(64);
	VMR17(V198)}
goto T649;
T649:;
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
	V205= list(2,(V203),(V204));
	setq(VV[21],make_cons(/* INLINE-ARGS */V205,symbol_value(VV[21])));
	{object V206;
	V206= symbol_value(VV[22]);
	setq(VV[22],number_plus(symbol_value(VV[22]),small_fixnum(1)));
	{object V207 = (V206);
	VMR18(V207)}}
	return Cnil;
}
/*	local entry for function T2DEFUN	*/

static object LI19(V213,V214,V215,V216,V217)

register object V213;register object V214;register object V215;object V216;object V217;
{	 VMB19 VMS19 VMV19
goto TTL;
TTL:;
	if((get((V213),VV[102],Cnil))==Cnil){
	goto T660;}
	{object V218 = Cnil;
	VMR19(V218)}
goto T660;
T660:;
	if(((V216))==Cnil){
	goto T663;}
	V219= list(4,VV[103],list(2,VV[91],(V213)),(V216),VV[104]);
	(void)((VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V219)));
goto T663;
T663:;
	{object V220;
	V220= (*(LnkLI296))((V213),(V214),(V215));
	if(((V220))==Cnil){
	goto T669;}
	goto T666;
goto T669;
T669:;
	if(((*(LnkLI297))((V213)))==Cnil){
	goto T672;}
	{object V221;
	V221= cadddr(caddr((V215)));
	princ_str("\nstatic object LI",VV[31]);
	(void)((*(LnkLI270))((V214)));
	princ_str("();",VV[31]);
	if(((V221))==Cnil){
	goto T680;}
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
	goto T666;
goto T680;
T680:;
	V230= list(2,VV[91],(V213));
	V231= (*(LnkLI294))(VV[110],(V214));
	V232 = make_fixnum((long)length(car(caddr((V215)))));
	V233= (*(LnkLI298))(caddr((V215)));
	V234= (*(LnkLI291))(/* INLINE-ARGS */V233,small_fixnum(8));
	V235= list(4,VV[109],/* INLINE-ARGS */V230,/* INLINE-ARGS */V231,number_plus(V232,/* INLINE-ARGS */V234));
	(void)((VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V235)));
	goto T666;}
goto T672;
T672:;
	if(!(type_of((V214))==t_fixnum||
type_of((V214))==t_bignum||
type_of((V214))==t_ratio||
type_of((V214))==t_shortfloat||
type_of((V214))==t_longfloat||
type_of((V214))==t_complex)){
	goto T687;}
	princ_str("\nstatic void L",VV[31]);
	(void)((*(LnkLI270))((V214)));
	princ_str("();",VV[31]);
	V236= list(2,VV[91],(V213));
	V237= list(3,VV[111],/* INLINE-ARGS */V236,(*(LnkLI294))(VV[112],(V214)));
	(void)((VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V237)));
	goto T666;
goto T687;
T687:;
	princ_char(10,VV[31]);
	(void)((*(LnkLI270))((V214)));
	princ_str("();",VV[31]);
	V238= list(2,VV[91],(V213));
	V239= list(3,VV[111],/* INLINE-ARGS */V238,(*(LnkLI294))(VV[113],(V214)));
	(void)((VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V239)));}
goto T666;
T666:;
	if(!(number_compare(symbol_value(VV[114]),small_fixnum(2))<0)){
	goto T698;}
	{object V240 = sputprop((V213),VV[115],Ct);
	VMR19(V240)}
goto T698;
T698:;
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
	V258= symbol_value(VV[77]);
	V259= car((V258));
goto T710;
T710:;
	if(!(endp((V258)))){
	goto T711;}
	goto T705;
goto T711;
T711:;{object V260;
	base[4]= cadddr((V259));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk300)();
	vs_top=sup;
	V260= vs_base[0];
	if(V260==Cnil)goto T716;
	goto T715;
goto T716;
T716:;}
	base[4]= VV[118];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
goto T715;
T715:;
	if((car((V259)))==((V252))){
	goto T721;}
	goto T720;
goto T721;
T721:;
	if((cadr(cddddr((V259))))==Cnil){
	goto T723;}
	goto T720;
goto T723;
T723:;
	V257= (V259);
	if(((V257))==Cnil){
	goto T705;}
	goto T706;
goto T720;
T720:;
	V258= cdr((V258));
	V259= car((V258));
	goto T710;}
goto T706;
T706:;
	if(((VFUN_NARGS=1,(*(LnkLI292))((V252))))!=Cnil){
	goto T731;}
	V261= list(4,(V252),(V253),cadr((V257)),caddr((V257)));
	setq(VV[29],make_cons(/* INLINE-ARGS */V261,symbol_value(VV[29])));
goto T731;
T731:;
	V262= structure_ref(cadr((V254)),VV[62],1);
	(void)((*(LnkLI301))(/* INLINE-ARGS */V262,small_fixnum(0)));
	base[3]= VV[119];
	{object V263= caddr((V257));
	if((V263!= VV[89]))goto T738;
	base[4]= VV[120];
	goto T737;
goto T738;
T738:;
	if((V263!= VV[142]))goto T739;
	base[4]= VV[121];
	goto T737;
goto T739;
T739:;
	if((V263!= VV[143]))goto T740;
	base[4]= VV[122];
	goto T737;
goto T740;
T740:;
	if((V263!= VV[144]))goto T741;
	base[4]= VV[123];
	goto T737;
goto T741;
T741:;
	base[4]= VV[124];}
goto T737;
T737:;
	base[5]= (V252);
	base[6]= (V253);
	base[7]= (V254);
	base[8]= (V256);
	base[9]= (V257);
	vs_top=(vs_base=base+3)+7;
	(void) (*Lnk302)();
	vs_top=sup;
	goto T703;
goto T705;
T705:;
	if(((*(LnkLI297))((V252)))==Cnil){
	goto T748;}
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
	goto T703;
goto T748;
T748:;
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
goto T703;
T703:;
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
goto T775;
T775:;
	if(!(endp((V282)))){
	goto T776;}
	goto T772;
goto T776;
T776:;
	V284= structure_ref(car((V282)),VV[69],1);
	if(!((/* INLINE-ARGS */V284)==(VV[71]))){
	goto T782;}
	V285= car((V282));
	V286= structure_ref(car((V282)),VV[69],4);
	V287= make_cons(/* INLINE-ARGS */V285,/* INLINE-ARGS */V286);
	V280= make_cons(/* INLINE-ARGS */V287,(V280));
	goto T780;
goto T782;
T782:;
	V288= car((V282));
	{object V290= car((V283));
	if((V290!= VV[89]))goto T786;
	V289= VV[89];
	goto T785;
goto T786;
T786:;
	if((V290!= VV[142]))goto T787;
	V289= VV[142];
	goto T785;
goto T787;
T787:;
	if((V290!= VV[143]))goto T788;
	V289= VV[143];
	goto T785;
goto T788;
T788:;
	if((V290!= VV[144]))goto T789;
	V289= VV[144];
	goto T785;
goto T789;
T789:;
	V289= VV[74];}
goto T785;
T785:;
	(void)(structure_set(/* INLINE-ARGS */V288,VV[69],1,V289));
goto T780;
T780:;
	V291= car((V282));
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	(void)(structure_set(/* INLINE-ARGS */V291,VV[69],4,symbol_value(VV[88])));
	V282= cdr((V282));
	V283= cdr((V283));
	goto T775;}
goto T772;
T772:;
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
	goto T817;}
	base[1]= make_cons((V275),(V281));
	goto T815;
goto T817;
T817:;
	base[1]= Cnil;
goto T815;
T815:;
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
	goto T829;}
	princ_str("\n	bds_check;",VV[25]);
goto T829;
T829:;
	if((symbol_value(VV[149]))==Cnil){
	goto T833;}
	princ_str("\n	ihs_check;",VV[25]);
goto T833;
T833:;
	if(((VV[146]->s.s_dbind))==Cnil){
	goto T837;}
	(VV[134]->s.s_dbind)= make_cons(VV[150],(VV[134]->s.s_dbind));
	princ_str("\ngoto TTL;",VV[25]);
	princ_str("\nTTL:;",VV[25]);
goto T837;
T837:;
	{register object V296;
	register object V297;
	V296= (V280);
	V297= car((V296));
goto T849;
T849:;
	if(!(endp((V296)))){
	goto T850;}
	goto T845;
goto T850;
T850:;
	princ_str("\n	bds_bind(VV[",VV[25]);
	(void)((*(LnkLI267))(cdr((V297))));
	princ_str("],V",VV[25]);
	V298= structure_ref(car((V297)),VV[69],4);
	(void)((*(LnkLI267))(/* INLINE-ARGS */V298));
	princ_str(");",VV[25]);
	(VV[134]->s.s_dbind)= make_cons(VV[151],(VV[134]->s.s_dbind));
	(void)(structure_set(car((V297)),VV[69],1,VV[71]));
	(void)(structure_set(car((V297)),VV[69],4,cdr((V297))));
	V296= cdr((V296));
	V297= car((V296));
	goto T849;}
goto T845;
T845:;
	base[3]= caddr(cddr((V277)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk308)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T873;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T873;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T873;}
	goto T871;
goto T873;
T873:;
	princ_str("\n	base[0]=base[0];",VV[25]);
goto T871;
T871:;
	V299= (*(LnkLI273))(caddr((V279)));
	if(!(equal(VV[152],/* INLINE-ARGS */V299))){
	goto T880;}
	princ_str("\n	return Cnil;",VV[25]);
goto T880;
T880:;
	princ_str("\n}",VV[25]);
	{object V300 = (*(LnkLI309))((V294),caddr((V279)));
	bds_unwind1;
	bds_unwind1;
	VMR23(V300)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-UP-VAR-CVS	*/

static object LI24(V302)

object V302;
{	 VMB24 VMS24 VMV24
goto TTL;
TTL:;
	if((symbol_value(VV[153]))==Cnil){
	goto T887;}
	V303= (*(LnkLI310))();
	{object V304 = structure_set((V302),VV[69],2,/* INLINE-ARGS */V303);
	VMR24(V304)}
goto T887;
T887:;
	V305= (*(LnkLI311))();
	{object V306 = structure_set((V302),VV[69],2,/* INLINE-ARGS */V305);
	VMR24(V306)}
	return Cnil;
}
/*	local entry for function T3DEFUN-VARARG	*/

static object LI25(V311,V312,V313,V314)

object V311;object V312;object V313;object V314;
{	 VMB25 VMS25 VMV25
	bds_check;
goto TTL;
TTL:;
	{object V315;
	register object V316;
	object V317;
	object V318;
	object V319;
	object V320;
	object V321;
	object V322;
	V315= Cnil;
	bds_bind(VV[153],Cnil);
	base[1]= Cnil;
	V316= Cnil;
	V317= Ct;
	V318= Cnil;
	bds_bind(VV[154],small_fixnum(0));
	V319= Cnil;
	V320= caddr((V313));
	V321= Cnil;{object V323;
	V323= caddr((V320));
	if(V323==Cnil)goto T897;
	V322= V323;
	goto T896;
goto T897;
T897:;}{object V324;
	V324= cadr((V320));
	if(V324==Cnil)goto T899;
	V322= V324;
	goto T896;
goto T899;
T899:;}
	V322= cadddr((V320));
goto T896;
T896:;
	{object V325;
	register object V326;
	V325= car((V320));
	V326= car((V325));
goto T905;
T905:;
	if(!(endp((V325)))){
	goto T906;}
	goto T901;
goto T906;
T906:;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V327= list(2,VV[155],symbol_value(VV[88]));
	V315= make_cons(/* INLINE-ARGS */V327,(V315));
	V325= cdr((V325));
	V326= car((V325));
	goto T905;}
goto T901;
T901:;
	(void)((VFUN_NARGS=2,(*(LnkLI305))(VV[156],(V311))));
	princ_str("\nstatic object LI",VV[31]);
	(void)((*(LnkLI270))((V312)));
	princ_str("();",VV[31]);
	princ_str("\nstatic object LI",VV[25]);
	(void)((*(LnkLI267))((V312)));
	princ_char(40,VV[25]);
	(void)((*(LnkLI312))((V315)));
	if(((V322))==Cnil){
	goto T928;}
	if(((V315))==Cnil){
	goto T931;}
	princ_char(44,VV[25]);
goto T931;
T931:;
	princ_str("va_alist",VV[25]);
goto T928;
T928:;
	princ_char(41,VV[25]);
	if(((V315))==Cnil){
	goto T938;}
	princ_str("\n	object ",VV[25]);
	(void)((*(LnkLI312))((V315)));
	princ_char(59,VV[25]);
goto T938;
T938:;
	if(((V322))==Cnil){
	goto T945;}
	princ_str("\n	va_dcl ",VV[25]);
goto T945;
T945:;
	{object V328;
	V328= symbol_value(VV[136]);
	if(symbol_value(VV[147])==Cnil){
	base[5]= Cnil;
	goto T950;}
	if((caddr((V320)))==Cnil){
	goto T951;}
	base[5]= Cnil;
	goto T950;
goto T951;
T951:;
	{object V329;
	object V330;
	V329= car((V320));
	V330= car((V329));
goto T958;
T958:;
	if(!(endp((V329)))){
	goto T959;}
	goto T953;
goto T959;
T959:;
	if((structure_ref((V330),VV[69],3))==Cnil){
	goto T963;}
	goto T954;
goto T963;
T963:;
	V329= cdr((V329));
	V330= car((V329));
	goto T958;}
goto T954;
T954:;
	base[5]= Cnil;
	goto T950;
goto T953;
T953:;
	if((cadr((V320)))==Cnil){
	goto T971;}
	base[5]= Cnil;
	goto T950;
goto T971;
T971:;
	if((car(cddddr((V320))))==Cnil){
	goto T973;}
	base[5]= Cnil;
	goto T950;
goto T973;
T973:;
	base[5]= make_cons((V311),car((V320)));
goto T950;
T950:;
	bds_bind(VV[146],base[5]);
	bds_bind(VV[134],symbol_value(VV[134]));
	princ_str("\n{	",VV[25]);
	if(((V322))==Cnil){
	goto T977;}
	princ_str("\n	va_list ap;",VV[25]);
goto T977;
T977:;
	princ_str("\n	int narg = VFUN_NARGS;",VV[25]);
	V331= structure_ref(cadr((V313)),VV[62],1);
	(void)((*(LnkLI307))(/* INLINE-ARGS */V331,(V312),VV[148]));
	princ_str(" VMB",VV[25]);
	(void)((*(LnkLI267))((V328)));
	princ_str(" VMS",VV[25]);
	(void)((*(LnkLI267))((V328)));
	princ_str(" VMV",VV[25]);
	(void)((*(LnkLI267))((V328)));
	if(((V314))==Cnil){
	goto T991;}
	princ_str("\n	bds_check;",VV[25]);
goto T991;
T991:;
	if((symbol_value(VV[149]))==Cnil){
	goto T995;}
	princ_str("\n	ihs_check;",VV[25]);
goto T995;
T995:;
	if((V322)!=Cnil){
	goto T999;}
	princ_str("\n	if ( narg!= ",VV[25]);
	V332 = make_fixnum((long)length((V315)));
	(void)((*(LnkLI267))(V332));
	princ_str(") vfun_wrong_number_of_args(small_fixnum(",VV[25]);
	V333 = make_fixnum((long)length((V315)));
	(void)((*(LnkLI267))(V333));
	princ_str("));",VV[25]);
goto T999;
T999:;
	{object V334;
	object V335;
	V334= car((V320));
	V335= car((V334));
goto T1010;
T1010:;
	if(!(endp((V334)))){
	goto T1011;}
	goto T1006;
goto T1011;
T1011:;
	base[9]= (V335);
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	V334= cdr((V334));
	V335= car((V334));
	goto T1010;}
goto T1006;
T1006:;
	{object V336;
	object V337;
	V336= cadr((V320));
	V337= car((V336));
goto T1026;
T1026:;
	if(!(endp((V336)))){
	goto T1027;}
	goto T1022;
goto T1027;
T1027:;
	base[9]= car((V337));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((caddr((V337)))==Cnil){
	goto T1033;}
	base[9]= caddr((V337));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
goto T1033;
T1033:;
	V336= cdr((V336));
	V337= car((V336));
	goto T1026;}
goto T1022;
T1022:;
	if((caddr((V320)))==Cnil){
	goto T1042;}
	base[7]= caddr((V320));
	vs_top=(vs_base=base+7)+1;
	L26(base);
	vs_top=sup;
goto T1042;
T1042:;
	{object V338;
	object V339;
	V338= car(cddddr((V320)));
	V339= car((V338));
goto T1049;
T1049:;
	if(!(endp((V338)))){
	goto T1050;}
	goto T1005;
goto T1050;
T1050:;
	base[9]= cadr((V339));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((cadddr((V339)))==Cnil){
	goto T1056;}
	base[9]= cadddr((V339));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
goto T1056;
T1056:;
	V338= cdr((V338));
	V339= car((V338));
	goto T1049;}
goto T1005;
T1005:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1067;}
	goto T1065;
goto T1067;
T1067:;
	princ_str("\n	Vcs[0]=Vcs[0];",VV[25]);
goto T1065;
T1065:;
	if((cadr((V320)))!=Cnil){
	goto T1071;}
	if((caddr((V320)))!=Cnil){
	goto T1071;}
	if((cadddr((V320)))==Cnil){
	goto T1070;}
goto T1071;
T1071:;
	if(((V321))!=Cnil){
	goto T1070;}
	V321= Ct;
	princ_str("\n	va_start(ap);",VV[25]);
goto T1070;
T1070:;
	if((symbol_value(VV[157]))!=Cnil){
	goto T1084;}
	if((symbol_value(VV[158]))==Cnil){
	goto T1082;}
goto T1084;
T1084:;
	if((car((V320)))==Cnil){
	goto T1082;}
	princ_str("\n	if(narg <",VV[25]);
	V340 = make_fixnum((long)length(car((V320))));
	(void)((*(LnkLI267))(V340));
	princ_str(") too_few_arguments();",VV[25]);
goto T1082;
T1082:;
	{object V341;
	object V342;
	V341= car((V320));
	V342= car((V341));
goto T1096;
T1096:;
	if(!(endp((V341)))){
	goto T1097;}
	goto T1092;
goto T1097;
T1097:;
	(void)((*(LnkLI313))((V342)));
	V341= cdr((V341));
	V342= car((V341));
	goto T1096;}
goto T1092;
T1092:;
	{object V343;
	object V344;
	V343= cadr((V320));
	V344= car((V343));
goto T1111;
T1111:;
	if(!(endp((V343)))){
	goto T1112;}
	goto T1107;
goto T1112;
T1112:;
	(void)((*(LnkLI313))(car((V344))));
	V343= cdr((V343));
	V344= car((V343));
	goto T1111;}
goto T1107;
T1107:;
	if((caddr((V320)))==Cnil){
	goto T1122;}
	(void)((*(LnkLI313))(caddr((V320))));
goto T1122;
T1122:;
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1128;}
	V318= symbol_value(VV[129]);
	goto T1126;
goto T1128;
T1128:;
	V318= symbol_value(VV[141]);
goto T1126;
T1126:;
	{object V345;
	object V346;
	V345= car(cddddr((V320)));
	V346= car((V345));
goto T1134;
T1134:;
	if(!(endp((V345)))){
	goto T1135;}
	goto T1130;
goto T1135;
T1135:;
	(void)((*(LnkLI313))(cadr((V346))));
	V345= cdr((V345));
	V346= car((V345));
	goto T1134;}
goto T1130;
T1130:;
	{object V347;
	object V348;
	V347= car(cddddr((V320)));
	V348= car((V347));
goto T1149;
T1149:;
	if(!(endp((V347)))){
	goto T1150;}
	goto T1145;
goto T1150;
T1150:;
	(void)((*(LnkLI313))(cadddr((V348))));
	V347= cdr((V347));
	V348= car((V347));
	goto T1149;}
goto T1145;
T1145:;
	{object V349;
	object V350;
	V350= car((V320));
	V349= (V315);
goto T1163;
T1163:;
	if(((V349))!=Cnil){
	goto T1164;}
	goto T1160;
goto T1164;
T1164:;
	(void)((*(LnkLI314))(car((V350)),car((V349))));
	V349= cdr((V349));
	V350= cdr((V350));
	goto T1163;}
goto T1160;
T1160:;
	if((cadr((V320)))==Cnil){
	goto T1173;}
	bds_bind(VV[133],symbol_value(VV[133]));
	bds_bind(VV[134],(VV[134]->s.s_dbind));
	bds_bind(VV[132],symbol_value(VV[132]));
	princ_str("\n	narg = narg - ",VV[25]);
	V351 = make_fixnum((long)length((V315)));
	(void)((*(LnkLI267))(V351));
	princ_char(59,VV[25]);
	{object V352;
	object V353;
	V352= cadr((V320));
	V353= car((V352));
goto T1184;
T1184:;
	if(!(endp((V352)))){
	goto T1185;}
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1176;
goto T1185;
T1185:;
	setq(VV[159],number_plus(symbol_value(VV[159]),small_fixnum(1)));
	V354= make_cons(symbol_value(VV[159]),Cnil);
	V316= make_cons(/* INLINE-ARGS */V354,(V316));
	princ_str("\n	if (",VV[25]);
	if((cdr((V316)))==Cnil){
	goto T1197;}
	V355= VV[160];
	goto T1195;
goto T1197;
T1197:;
	V355= VV[161];
goto T1195;
T1195:;
	(void)((*(LnkLI267))(V355));
	princ_str("narg <= 0) ",VV[25]);
	if(type_of(car((V316)))!=t_cons)FEwrong_type_argument(Scons,car((V316)));
	(car((V316)))->c.c_cdr = Ct;
	(void)(car((V316)));
	princ_str("goto T",VV[25]);
	(void)((*(LnkLI267))(car(car((V316)))));
	princ_char(59,VV[25]);
	princ_str("\n	else {",VV[25]);
	if(((V321))!=Cnil){
	goto T1207;}
	V321= Ct;
	princ_str("\n	va_start(ap);",VV[25]);
goto T1207;
T1207:;
	V356= car((V353));
	V357= make_cons(VV[162],Cnil);
	(void)((*(LnkLI314))(/* INLINE-ARGS */V356,/* INLINE-ARGS */V357));
	princ_char(125,VV[25]);
	if((caddr((V353)))==Cnil){
	goto T1216;}
	(void)((*(LnkLI314))(caddr((V353)),Ct));
goto T1216;
T1216:;
	V352= cdr((V352));
	V353= car((V352));
	goto T1184;}
goto T1176;
T1176:;
	V316= nreverse((V316));
	{object V358;
	setq(VV[159],number_plus(symbol_value(VV[159]),small_fixnum(1)));
	V358= make_cons(symbol_value(VV[159]),Cnil);
	princ_str("\n	--narg; ",VV[25]);
	if(type_of((V358))!=t_cons)FEwrong_type_argument(Scons,(V358));
	((V358))->c.c_cdr = Ct;
	princ_str("goto T",VV[25]);
	(void)((*(LnkLI267))(car((V358))));
	princ_char(59,VV[25]);
	{object V359;
	object V360;
	V359= cadr((V320));
	V360= car((V359));
goto T1239;
T1239:;
	if(!(endp((V359)))){
	goto T1240;}
	goto T1235;
goto T1240;
T1240:;
	if((cdr(car((V316))))==Cnil){
	goto T1244;}
	princ_str("\ngoto T",VV[25]);
	(void)((*(LnkLI267))(car(car((V316)))));
	princ_char(59,VV[25]);
	princ_str("\nT",VV[25]);
	(void)((*(LnkLI267))(car(car((V316)))));
	princ_str(":;",VV[25]);
goto T1244;
T1244:;
	{object V361;
	V361= car((V316));
	V316= cdr((V316));}
	(void)((*(LnkLI315))(car((V360)),cadr((V360))));
	if((caddr((V360)))==Cnil){
	goto T1259;}
	(void)((*(LnkLI314))(caddr((V360)),Cnil));
goto T1259;
T1259:;
	V359= cdr((V359));
	V360= car((V359));
	goto T1239;}
goto T1235;
T1235:;
	if((cdr((V358)))==Cnil){
	goto T1173;}
	princ_str("\ngoto T",VV[25]);
	(void)((*(LnkLI267))(car((V358))));
	princ_char(59,VV[25]);
	princ_str("\nT",VV[25]);
	(void)((*(LnkLI267))(car((V358))));
	princ_str(":;",VV[25]);}
goto T1173;
T1173:;
	if((caddr((V320)))==Cnil){
	goto T1276;}
	V319= (VFUN_NARGS=0,(*(LnkLI316))());
	{object V362;
	V362= cadr((V320));
	if(((V362))==Cnil){
	goto T1284;}
	goto T1281;
goto T1284;
T1284:;
	princ_str("\n	narg= narg - ",VV[25]);
	V363 = make_fixnum((long)length(car((V320))));
	(void)((*(LnkLI267))(V363));
	princ_char(59,VV[25]);}
goto T1281;
T1281:;
	if(((V321))!=Cnil){
	goto T1289;}
	V321= Ct;
	princ_str("\n	va_start(ap);",VV[25]);
goto T1289;
T1289:;
	princ_str("\n	V",VV[25]);
	(void)((*(LnkLI267))((V319)));
	princ_str(" = ",VV[25]);
	V364= structure_ref(caddr((V320)),VV[69],5);
	if(!((/* INLINE-ARGS */V364)==(VV[164]))){
	goto T1300;}
	base[7]= Ct;
	goto T1299;
goto T1300;
T1300:;
	base[7]= symbol_value(VV[163]);
goto T1299;
T1299:;
	bds_bind(VV[163],base[7]);
	if((cadddr((V320)))==Cnil){
	goto T1304;}
	if(((VV[163]->s.s_dbind))==Cnil){
	goto T1307;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_MAKE_LIST(narg));",VV[25]);
	goto T1302;
goto T1307;
T1307:;
	princ_str("make_list(narg);",VV[25]);
	goto T1302;
goto T1304;
T1304:;
	if(((VV[163]->s.s_dbind))==Cnil){
	goto T1312;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR(narg,ap));",VV[25]);
	goto T1302;
goto T1312;
T1312:;
	princ_str("list_vector(narg,ap);",VV[25]);
goto T1302;
T1302:;
	V365= caddr((V320));
	V366= list(2,VV[155],(V319));
	V367= (*(LnkLI314))(/* INLINE-ARGS */V365,/* INLINE-ARGS */V366);
	bds_unwind1;
goto T1276;
T1276:;
	if((cadddr((V320)))==Cnil){
	goto T1316;}
	{object V368;
	V368= caddr((V320));
	if(((V368))==Cnil){
	goto T1322;}
	goto T1319;
goto T1322;
T1322:;
	{object V369;
	V369= cadr((V320));
	if(((V369))==Cnil){
	goto T1326;}
	goto T1319;
goto T1326;
T1326:;
	princ_str("\n	narg= narg - ",VV[25]);
	V370 = make_fixnum((long)length(car((V320))));
	(void)((*(LnkLI267))(V370));
	princ_char(59,VV[25]);}}
goto T1319;
T1319:;
	if(((V321))!=Cnil){
	goto T1331;}
	V321= Ct;
	princ_str("\n	va_start(ap);",VV[25]);
goto T1331;
T1331:;
	{object V371;
	object V372= car(cddddr((V320)));
	if(endp(V372)){
	V317= Cnil;
	goto T1338;}
	base[7]=V371=MMcons(Cnil,Cnil);
goto T1339;
T1339:;
	(V371->c.c_car)= caddr((V372->c.c_car));
	if(endp(V372=MMcdr(V372))){
	V317= base[7];
	goto T1338;}
	V371=MMcdr(V371)=MMcons(Cnil,Cnil);
	goto T1339;}
goto T1338;
T1338:;
	{object V373;
	object V374;
	V374= make_fixnum((long)length(car(cddddr((V320)))));
	V373= Cnil;
	{register object V375;
	object V376;
	object V377;
	V375= (V317);
	V376= car(cddddr((V320)));
	V377= car((V376));
goto T1347;
T1347:;
	if(((V375))!=Cnil){
	goto T1348;}
	goto T1342;
goto T1348;
T1348:;
	if(!((caar((V375)))==(VV[165]))){
	goto T1353;}
	if((caddr(car((V375))))==(Cnil)){
	goto T1352;}
goto T1353;
T1353:;
	V373= Ct;
goto T1352;
T1352:;
	if(!((caar((V375)))==(VV[165]))){
	goto T1359;}
	{object V378;
	V378= caddr(car((V375)));
	if(!(((V378))==(Cnil))){
	goto T1365;}
	goto T1363;
goto T1365;
T1365:;
	if(type_of((V378))==t_cons){
	goto T1367;}
	goto T1359;
goto T1367;
T1367:;
	{register object x= car((V378)),V379= VV[166];
	while(!endp(V379))
	if(eql(x,V379->c.c_car)){
	goto T1363;
	}else V379=V379->c.c_cdr;
	goto T1359;}}
goto T1363;
T1363:;
	V380= structure_ref(cadddr((V377)),VV[69],1);
	if((/* INLINE-ARGS */V380)==(VV[167])){
	goto T1358;}
goto T1359;
T1359:;
	V373= Ct;
	if(type_of(V375)!=t_cons)FEwrong_type_argument(Scons,V375);
	(V375)->c.c_car = small_fixnum(0);
goto T1358;
T1358:;
	V375= cdr((V375));
	V376= cdr((V376));
	V377= car((V376));
	goto T1347;}
goto T1342;
T1342:;
	if(!(((long)length((V317)))>(15))){
	goto T1380;}
	V373= Ct;
goto T1380;
T1380:;
	princ_str("\n	{",VV[25]);
	vs_base=vs_top;
	(void) (*Lnk317)();
	vs_top=sup;
	bds_bind(VV[25],symbol_value(VV[31]));
	if(((V373))==Cnil){
	goto T1388;}
	princ_char(10,VV[31]);
	princ_str("static object VK",VV[25]);
	(void)((*(LnkLI267))((V312)));
	princ_str("defaults[",VV[25]);
	V383 = make_fixnum((long)length((V317)));
	(void)((*(LnkLI267))(V383));
	princ_str("]={",VV[25]);
	{object V384;
	register object V385;
	V384= (V317);
	V385= Cnil;
goto T1400;
T1400:;
	if(((V384))!=Cnil){
	goto T1401;}
	goto T1398;
goto T1401;
T1401:;
	princ_str("(void *)",VV[25]);
	if(!(eql(car((V384)),small_fixnum(0)))){
	goto T1409;}
	princ_str("-1",VV[25]);
	goto T1407;
goto T1409;
T1409:;
	V385= caddr(car((V384)));
	if(!(((V385))==(Cnil))){
	goto T1413;}
	princ_str("-2",VV[25]);
	goto T1407;
goto T1413;
T1413:;
	if(!(type_of((V385))==t_cons)){
	goto T1418;}
	if(!((car((V385)))==(VV[168]))){
	goto T1418;}
	(void)((*(LnkLI267))(cadr((V385))));
	goto T1407;
goto T1418;
T1418:;
	if(!(type_of((V385))==t_cons)){
	goto T1424;}
	if(!((car((V385)))==(VV[169]))){
	goto T1424;}
	V386= (*(LnkLI318))(caddr((V385)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V386));
	goto T1407;
goto T1424;
T1424:;
	(void)((*(LnkLI319))());
goto T1407;
T1407:;
	if((cdr((V384)))==Cnil){
	goto T1429;}
	princ_char(44,VV[25]);
goto T1429;
T1429:;
	V384= cdr((V384));
	goto T1400;}
goto T1398;
T1398:;
	princ_str("};",VV[25]);
goto T1388;
T1388:;
	princ_char(10,VV[31]);
	princ_str("static struct { short n,allow_other_keys;",VV[25]);
	princ_str("object *defaults;",VV[25]);
	princ_str("\n	 KEYTYPE keys[",VV[25]);
	(void)((*(LnkLI267))((number_compare((V374),small_fixnum(1))>=0?((V374)):small_fixnum(1))));
	princ_str("];",VV[25]);
	princ_str("} LI",VV[25]);
	(void)((*(LnkLI267))((V312)));
	princ_str("key=",VV[25]);
	princ_char(123,VV[25]);
	V387 = make_fixnum((long)length(car(cddddr((V320)))));
	(void)((*(LnkLI267))(V387));
	princ_char(44,VV[25]);
	if((cadr(cddddr((V320))))==Cnil){
	goto T1456;}
	V388= small_fixnum(1);
	goto T1454;
goto T1456;
T1456:;
	V388= small_fixnum(0);
goto T1454;
T1454:;
	(void)((*(LnkLI267))(V388));
	princ_char(44,VV[25]);
	if(((V373))==Cnil){
	goto T1461;}
	princ_str("VK",VV[25]);
	(void)((*(LnkLI267))((V312)));
	princ_str("defaults",VV[25]);
	goto T1459;
goto T1461;
T1461:;
	princ_str("Cstd_key_defaults",VV[25]);
goto T1459;
T1459:;
	if((car(cddddr((V320))))==Cnil){
	goto T1467;}
	princ_str(",{",VV[25]);
	{object V389;
	V389= reverse(car(cddddr((V320))));
goto T1475;
T1475:;
	if(((V389))!=Cnil){
	goto T1476;}
	goto T1472;
goto T1476;
T1476:;
	princ_str("(void *)",VV[25]);
	V390= (*(LnkLI320))(caar((V389)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V390));
	if((cdr((V389)))==Cnil){
	goto T1484;}
	princ_char(44,VV[25]);
goto T1484;
T1484:;
	V389= cdr((V389));
	goto T1475;}
goto T1472;
T1472:;
	princ_char(125,VV[25]);
goto T1467;
T1467:;
	princ_str("};",VV[25]);
	bds_unwind1;
	if((caddr((V320)))==Cnil){
	goto T1495;}
	princ_str("\n	parse_key_rest(",VV[25]);
	V391= list(2,VV[155],(V319));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V391));
	princ_char(44,VV[25]);
	goto T1493;
goto T1495;
T1495:;
	princ_str("\n	parse_key_new(",VV[25]);
goto T1493;
T1493:;
	if(!(eql(small_fixnum(0),symbol_value(VV[141])))){
	goto T1501;}
	setq(VV[141],small_fixnum(1));
goto T1501;
T1501:;
	princ_str("narg,",VV[25]);
	if(((VV[153]->s.s_dbind))==Cnil){
	goto T1509;}
	V392= VV[170];
	goto T1507;
goto T1509;
T1509:;
	V392= VV[171];
goto T1507;
T1507:;
	(void)((*(LnkLI267))(V392));
	princ_char(43,VV[25]);
	(void)((*(LnkLI267))((V318)));
	princ_str(",(struct key *)&LI",VV[25]);
	(void)((*(LnkLI267))((V312)));
	princ_str("key,ap);",VV[25]);}
goto T1316;
T1316:;
	{object V393;
	register object V394;
	V393= car(cddddr((V320)));
	V394= car((V393));
goto T1520;
T1520:;
	if(!(endp((V393)))){
	goto T1521;}
	goto T1516;
goto T1521;
T1521:;
	{object V396;
	V396= car((V317));
	V317= cdr((V317));
	V395= (V396);}
	if(eql(small_fixnum(0),V395)){
	goto T1527;}
	(void)((*(LnkLI321))(cadr((V394))));
	goto T1525;
goto T1527;
T1527:;
	princ_str("\n	if(",VV[25]);
	V397= structure_ref(cadr((V394)),VV[69],2);
	(void)((*(LnkLI322))(/* INLINE-ARGS */V397));
	princ_str("==0){",VV[25]);
	bds_bind(VV[133],symbol_value(VV[133]));
	bds_bind(VV[134],(VV[134]->s.s_dbind));
	bds_bind(VV[132],symbol_value(VV[132]));
	V398= (*(LnkLI315))(cadr((V394)),caddr((V394)));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V399= structure_ref(cadddr((V394)),VV[69],1);
	if((/* INLINE-ARGS */V399)==(VV[167])){
	goto T1539;}
	(void)((*(LnkLI314))(cadddr((V394)),Cnil));
goto T1539;
T1539:;
	princ_str("\n	}else{",VV[25]);
	(void)((*(LnkLI321))(cadr((V394))));
	V400= structure_ref(cadddr((V394)),VV[69],1);
	if((/* INLINE-ARGS */V400)==(VV[167])){
	goto T1545;}
	(void)((*(LnkLI314))(cadddr((V394)),Ct));
goto T1545;
T1545:;
	princ_char(125,VV[25]);
goto T1525;
T1525:;
	V393= cdr((V393));
	V394= car((V393));
	goto T1520;}
goto T1516;
T1516:;
	if(((VV[146]->s.s_dbind))==Cnil){
	goto T1554;}
	(VV[134]->s.s_dbind)= make_cons(VV[150],(VV[134]->s.s_dbind));
	princ_str("\ngoto TTL;",VV[25]);
	princ_str("\nTTL:;",VV[25]);
goto T1554;
T1554:;
	base[7]= caddr(cddr((V313)));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk308)();
	vs_top=sup;
	if(((V321))==Cnil){
	goto T1564;}
	V321= Cnil;
	princ_str("\n	va_end(ap);",VV[25]);
goto T1564;
T1564:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1572;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T1572;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T1572;}
	goto T1570;
goto T1572;
T1572:;
	princ_str("\n	base[0]=base[0];",VV[25]);
goto T1570;
T1570:;
	princ_str("\n	return Cnil;",VV[25]);
	princ_char(125,VV[25]);
	if((base[1])==Cnil){
	goto T1583;}
	princ_str("\n	}",VV[25]);
goto T1583;
T1583:;
	(void)((*(LnkLI323))());
	V401= get((V311),VV[78],Cnil);
	{object V402 = (*(LnkLI309))((V328),V401);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR25(V402)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3DEFUN-NORMAL	*/

static object LI27(V407,V408,V409,V410)

object V407;register object V408;object V409;object V410;
{	 VMB26 VMS26 VMV26
goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI305))(VV[172],(V407))));
	if(!(type_of((V408))==t_fixnum||
type_of((V408))==t_bignum||
type_of((V408))==t_ratio||
type_of((V408))==t_shortfloat||
type_of((V408))==t_longfloat||
type_of((V408))==t_complex)){
	goto T1592;}
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI267))((V408)));
	princ_str("()",VV[25]);
	goto T1590;
goto T1592;
T1592:;
	princ_char(10,VV[25]);
	(void)((*(LnkLI267))((V408)));
	princ_str("()",VV[25]);
goto T1590;
T1590:;
	princ_str("\n{",VV[25]);
	princ_str("register object *",VV[25]);
	(void)((*(LnkLI267))(symbol_value(VV[20])));
	princ_str("base=vs_base;",VV[25]);
	V411= structure_ref(cadr((V409)),VV[62],1);
	(void)((*(LnkLI307))(/* INLINE-ARGS */V411,(V408),VV[148]));
	princ_str("\n	register object *",VV[25]);
	(void)((*(LnkLI267))(symbol_value(VV[20])));
	princ_str("sup=base+VM",VV[25]);
	(void)((*(LnkLI267))(symbol_value(VV[136])));
	princ_char(59,VV[25]);
	princ_str(" VC",VV[25]);
	(void)((*(LnkLI267))(symbol_value(VV[136])));
	if((symbol_value(VV[157]))==Cnil){
	goto T1617;}
	princ_str("\n	vs_reserve(VM",VV[25]);
	(void)((*(LnkLI267))(symbol_value(VV[136])));
	princ_str(");",VV[25]);
	goto T1615;
goto T1617;
T1617:;
	princ_str("\n	vs_check;",VV[25]);
goto T1615;
T1615:;
	if(((V410))==Cnil){
	goto T1623;}
	princ_str("\n	bds_check;",VV[25]);
goto T1623;
T1623:;
	if((symbol_value(VV[149]))==Cnil){
	goto T1627;}
	princ_str("\n	ihs_check;",VV[25]);
goto T1627;
T1627:;
	(void)((VFUN_NARGS=3,(*(LnkLI324))(caddr((V409)),caddr(cddr((V409))),(V407))));
	princ_str("\n}",VV[25]);
	V412= make_cons(symbol_value(VV[136]),symbol_value(VV[130]));
	setq(VV[33],make_cons(/* INLINE-ARGS */V412,symbol_value(VV[33])));
	princ_str("\n#define VC",VV[31]);
	(void)((*(LnkLI270))(symbol_value(VV[136])));
	{object V413 = (*(LnkLI325))();
	VMR26(V413)}
	return Cnil;
}
/*	local entry for function WT-V*-MACROS	*/

static object LI28(V416,V417)

register object V416;object V417;
{	 VMB27 VMS27 VMV27
goto TTL;
TTL:;
	V418= make_cons((V416),symbol_value(VV[130]));
	setq(VV[33],make_cons(/* INLINE-ARGS */V418,symbol_value(VV[33])));
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1643;}
	if((symbol_value(VV[138]))!=Cnil){
	goto T1643;}
	if((symbol_value(VV[140]))!=Cnil){
	goto T1643;}
	princ_str("\n#define VMB",VV[31]);
	(void)((*(LnkLI270))((V416)));
	goto T1641;
goto T1643;
T1643:;
	princ_str("\n#define VMB",VV[31]);
	(void)((*(LnkLI270))((V416)));
	princ_char(32,VV[31]);
	princ_str("register object *",VV[31]);
	(void)((*(LnkLI270))(symbol_value(VV[20])));
	princ_str("base=vs_top;",VV[31]);
goto T1641;
T1641:;
	(void)((*(LnkLI325))());
	if((symbol_value(VV[138]))==Cnil){
	goto T1660;}
	princ_str("\n#define VMS",VV[31]);
	(void)((*(LnkLI270))((V416)));
	princ_char(32,VV[31]);
	princ_str(" register object *",VV[31]);
	(void)((*(LnkLI270))(symbol_value(VV[20])));
	princ_str("sup=vs_top+",VV[31]);
	(void)((*(LnkLI270))(symbol_value(VV[130])));
	princ_str(";vs_top=sup;",VV[31]);
	goto T1658;
goto T1660;
T1660:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1671;}
	princ_str("\n#define VMS",VV[31]);
	(void)((*(LnkLI270))((V416)));
	goto T1658;
goto T1671;
T1671:;
	princ_str("\n#define VMS",VV[31]);
	(void)((*(LnkLI270))((V416)));
	princ_str(" vs_top += ",VV[31]);
	(void)((*(LnkLI270))(symbol_value(VV[130])));
	princ_char(59,VV[31]);
goto T1658;
T1658:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1682;}
	princ_str("\n#define VMV",VV[31]);
	(void)((*(LnkLI270))((V416)));
	goto T1680;
goto T1682;
T1682:;
	if((symbol_value(VV[157]))==Cnil){
	goto T1687;}
	princ_str("\n#define VMV",VV[31]);
	(void)((*(LnkLI270))((V416)));
	princ_str(" vs_reserve(",VV[31]);
	(void)((*(LnkLI270))(symbol_value(VV[130])));
	princ_str(");",VV[31]);
	goto T1680;
goto T1687;
T1687:;
	princ_str("\n#define VMV",VV[31]);
	(void)((*(LnkLI270))((V416)));
	princ_str(" vs_check;",VV[31]);
goto T1680;
T1680:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[130]))==0)){
	goto T1698;}
	princ_str("\n#define VMR",VV[31]);
	(void)((*(LnkLI270))((V416)));
	princ_str("(VMT",VV[31]);
	(void)((*(LnkLI270))((V416)));
	princ_str(") return(VMT",VV[31]);
	(void)((*(LnkLI270))((V416)));
	princ_str(");",VV[31]);
	{object V419 = Cnil;
	VMR27(V419)}
goto T1698;
T1698:;
	princ_str("\n#define VMR",VV[31]);
	(void)((*(LnkLI270))((V416)));
	princ_str("(VMT",VV[31]);
	(void)((*(LnkLI270))((V416)));
	princ_str(") vs_top=base ; return(VMT",VV[31]);
	(void)((*(LnkLI270))((V416)));
	princ_str(");",VV[31]);
	{object V420 = Cnil;
	VMR27(V420)}
	return Cnil;
}
/*	local entry for function WT-REQUIREDS	*/

static object LI29(V423,V424)

object V423;object V424;
{	 VMB28 VMS28 VMV28
goto TTL;
TTL:;
	{register object V425;
	V425= (V423);
goto T1716;
T1716:;
	if(!(endp((V425)))){
	goto T1717;}
	goto T1714;
goto T1717;
T1717:;
	{register object V426;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V426= symbol_value(VV[88]);
	(void)(structure_set(car((V425)),VV[69],4,(V426)));
	princ_char(86,VV[25]);
	(void)((*(LnkLI267))((V426)));}
	if(endp(cdr((V425)))){
	goto T1727;}
	princ_char(44,VV[25]);
goto T1727;
T1727:;
	V425= cdr((V425));
	goto T1716;}
goto T1714;
T1714:;
	princ_str(")\n",VV[25]);
	if(((V423))==Cnil){
	goto T1737;}
	princ_char(10,VV[25]);
	{register object V427;
	register object V428;
	register object V429;
	V427= (V423);
	V428= (V424);
	V429= Cnil;
goto T1741;
T1741:;
	if(!(endp((V427)))){
	goto T1742;}
	princ_char(59,VV[25]);
	{object V430 = Cnil;
	VMR28(V430)}
goto T1742;
T1742:;
	if(((V429))==Cnil){
	goto T1747;}
	princ_char(59,VV[25]);
goto T1747;
T1747:;
	(void)((*(LnkLI267))(symbol_value(VV[20])));
	V431= (*(LnkLI326))(car((V427)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V431));
	V432= (*(LnkLI273))(car((V428)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V432));
	V429= car((V428));
	princ_char(86,VV[25]);
	V433= structure_ref(car((V427)),VV[69],4);
	(void)((*(LnkLI267))(/* INLINE-ARGS */V433));
	V427= cdr((V427));
	V428= cdr((V428));
	goto T1741;}
goto T1737;
T1737:;
	{object V434 = Cnil;
	VMR28(V434)}
	return Cnil;
}
/*	local entry for function ADD-DEBUG-INFO	*/

static object LI30(V437,V438)

object V437;object V438;
{	 VMB29 VMS29 VMV29
goto TTL;
TTL:;
	{object V439;
	V439= Cnil;
	{object V440;
	V440= (number_compare(symbol_value(VV[114]),small_fixnum(2))>=0?Ct:Cnil);
	if(((V440))==Cnil){
	goto T1767;}
	{object V441 = (V440);
	VMR29(V441)}
goto T1767;
T1767:;
	if((get((V437),VV[115],Cnil))!=Cnil){
	goto T1770;}
	{object V442 = (VFUN_NARGS=2,(*(LnkLI327))(VV[173],(V437)));
	VMR29(V442)}
goto T1770;
T1770:;
	(void)(remprop((V437),VV[115]));
	{register object V443;
	V443= small_fixnum(0);
	{register object V444;
	register object V445;
	V444= structure_ref(cadr((V438)),VV[62],1);
	V445= car((V444));
goto T1777;
T1777:;
	if(!(endp((V444)))){
	goto T1778;}
	goto T1773;
goto T1778;
T1778:;
	V446= structure_ref((V445),VV[69],2);
	if(!(type_of(/* INLINE-ARGS */V446)==t_cons)){
	goto T1782;}
	V447= structure_ref((V445),VV[69],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V447))==t_fixnum)){
	goto T1782;}
	V448= structure_ref((V445),VV[69],2);
	{object V449= cdr(/* INLINE-ARGS */V448);
	V443= (number_compare((V443),V449)>=0?((V443)):V449);}
goto T1782;
T1782:;
	V444= cdr((V444));
	V445= car((V444));
	goto T1777;}
goto T1773;
T1773:;
	base[0]= one_plus((V443));
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	V439= vs_base[0];
	{register object V450;
	register object V451;
	V450= structure_ref(cadr((V438)),VV[62],1);
	V451= car((V450));
goto T1800;
T1800:;
	if(!(endp((V450)))){
	goto T1801;}
	goto T1796;
goto T1801;
T1801:;
	V452= structure_ref((V451),VV[69],2);
	if(!(type_of(/* INLINE-ARGS */V452)==t_cons)){
	goto T1805;}
	V453= structure_ref((V451),VV[69],2);
	if(!(type_of(cdr(/* INLINE-ARGS */V453))==t_fixnum)){
	goto T1805;}
	{object V454;
	register object V456;
	V457= structure_ref((V451),VV[69],2);
	V454= cdr(/* INLINE-ARGS */V457);
	V456= structure_ref((V451),VV[69],0);
	if(type_of(nthcdr(fixint((V454)),V439))!=t_cons)FEwrong_type_argument(Scons,nthcdr(fixint((V454)),V439));
	(nthcdr(fixint((V454)),V439))->c.c_car = (V456);
	(void)(nthcdr(fixint((V454)),V439));}
goto T1805;
T1805:;
	V450= cdr((V450));
	V451= car((V450));
	goto T1800;}
goto T1796;
T1796:;
	(void)(sputprop((V437),VV[116],(V439)));
	{object V458;
	V458= get((V437),VV[116],Cnil);
	if(((V458))==Cnil){
	goto T1821;}
	if((cdr((V458)))!=Cnil){
	goto T1820;}
	if((car((V458)))==Cnil){
	goto T1821;}
goto T1820;
T1820:;
	V459= list(2,VV[91],(V437));
	V460= list(3,VV[116],/* INLINE-ARGS */V459,list(2,VV[91],(V458)));
	{object V461 = (VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V460));
	VMR29(V461)}
goto T1821;
T1821:;
	{object V462 = Cnil;
	VMR29(V462)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ANALYZE-REGS	*/

static object LI31(V465,V466)

object V465;object V466;
{	 VMB30 VMS30 VMV30
goto TTL;
TTL:;
	{object V467;
	V467= number_minus(symbol_value(VV[174]),(V466));
	if(!(number_compare(small_fixnum(0),symbol_value(VV[175]))==0)){
	goto T1829;}
	V468= (VFUN_NARGS=1,(*(LnkLI329))((V465)));
	{long V469 = (long)(*(LnkLI328))(/* INLINE-ARGS */V468,(V467));
	VMR30((object)V469)}
goto T1829;
T1829:;
	{register object V470;
	register object V471;
	V470= Cnil;
	V471= Cnil;
	{register object V472;
	register object V473;
	V472= (V465);
	V473= car((V472));
goto T1835;
T1835:;
	if(!(endp((V472)))){
	goto T1836;}
	goto T1831;
goto T1836;
T1836:;
	V475= structure_ref((V473),VV[69],5);
	{register object x= /* INLINE-ARGS */V475,V474= VV[176];
	while(!endp(V474))
	if(x==(V474->c.c_car)){
	goto T1843;
	}else V474=V474->c.c_cdr;
	goto T1842;}
goto T1843;
T1843:;{object V476;
	{register object x= (V473),V477= (V471);
	while(!endp(V477))
	if(eql(x,V477->c.c_car)){
	V476= V477;
	goto T1845;
	}else V477=V477->c.c_cdr;
	V476= Cnil;}
goto T1845;
T1845:;
	if(V476==Cnil)goto T1844;
	goto T1840;
goto T1844;
T1844:;}
	V471= make_cons((V473),(V471));
	goto T1840;
goto T1842;
T1842:;{object V478;
	{register object x= (V473),V479= (V470);
	while(!endp(V479))
	if(x==(V479->c.c_car)){
	V478= V479;
	goto T1848;
	}else V479=V479->c.c_cdr;
	V478= Cnil;}
goto T1848;
T1848:;
	if(V478==Cnil)goto T1847;
	goto T1840;
goto T1847;
T1847:;}
	V471= make_cons((V473),(V471));
goto T1840;
T1840:;
	V472= cdr((V472));
	V473= car((V472));
	goto T1835;}
goto T1831;
T1831:;
	(void)((*(LnkLI328))((V470),(V467)));
	{long V480 = (long)(*(LnkLI328))((V471),symbol_value(VV[175]));
	VMR30((object)V480)}}}
	base[0]=base[0];
}
/*	local entry for function ANALYZE-REGS1	*/

static object LI32(V483,V484)

object V483;object V484;
{	 VMB31 VMS31 VMV31
goto TTL;
TTL:;
	{register long V485;
	register long V486;
	long V487;
	long V488;
	register long V489;
	V485= 0;
	V486= 3;
	V487= 100000;
	V488= fix((V484));
	V489= 0;
	V483= (VFUN_NARGS=1,(*(LnkLI329))((V483)));
goto T1864;
T1864:;
	{register object V490;
	object V491;
	V490= (V483);
	V491= car((V490));
goto T1870;
T1870:;
	if(!(endp((V490)))){
	goto T1871;}
	goto T1866;
goto T1871;
T1871:;
	V485= fix(structure_ref((V491),VV[69],6));
	if(!((V485)>=(V486))){
	goto T1877;}
	V489= (long)(V489)+(1);
	if(!((V485)<(V487))){
	goto T1882;}
	V487= V485;
goto T1882;
T1882:;
	if(!((V489)>(V488))){
	goto T1877;}
	goto T1865;
goto T1877;
T1877:;
	V490= cdr((V490));
	V491= car((V490));
	goto T1870;}
goto T1866;
T1866:;
	if(!((V489)<(V488))){
	goto T1893;}
	V486= (long)(V486)-(1);
goto T1893;
T1893:;
	{register object V492;
	register object V493;
	V492= (V483);
	V493= car((V492));
goto T1901;
T1901:;
	if(!(endp((V492)))){
	goto T1902;}
	goto T1897;
goto T1902;
T1902:;
	{long V494= fix(structure_ref((V493),VV[69],6));
	if(!((/* INLINE-ARGS */V494)<(V486))){
	goto T1906;}}
	(void)(structure_set((V493),VV[69],6,small_fixnum(0)));
goto T1906;
T1906:;
	V492= cdr((V492));
	V493= car((V492));
	goto T1901;}
goto T1897;
T1897:;
	{long V495 = V486;
	VMR31((object)V495)}
goto T1865;
T1865:;
	V489= 0;
	V486= (long)(V487)+(1);
	V487= 1000000;
	goto T1864;}
	base[0]=base[0];
}
/*	local entry for function WT-GLOBAL-ENTRY	*/

static object LI33(V500,V501,V502,V503)

object V500;object V501;object V502;object V503;
{	 VMB32 VMS32 VMV32
goto TTL;
TTL:;
	if((get((V500),VV[102],Cnil))==Cnil){
	goto T1921;}
	{object V504 = Cnil;
	VMR32(V504)}
goto T1921;
T1921:;
	(void)((VFUN_NARGS=2,(*(LnkLI305))(VV[179],(V500))));
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI267))((V501)));
	princ_str("()",VV[25]);
	princ_str("\n{	register object *base=vs_base;",VV[25]);
	if((symbol_value(VV[157]))!=Cnil){
	goto T1932;}
	if((symbol_value(VV[158]))==Cnil){
	goto T1931;}
goto T1932;
T1932:;
	princ_str("\n	check_arg(",VV[25]);
	V505 = make_fixnum((long)length((V502)));
	(void)((*(LnkLI267))(V505));
	princ_str(");",VV[25]);
goto T1931;
T1931:;
	princ_str("\n	base[0]=",VV[25]);
	{object V507= (V503);
	if((V507!= VV[89]))goto T1943;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T1945;}
	V506= VV[180];
	goto T1942;
goto T1945;
T1945:;
	V506= VV[181];
	goto T1942;
goto T1943;
T1943:;
	if((V507!= VV[142]))goto T1947;
	V506= VV[182];
	goto T1942;
goto T1947;
T1947:;
	if((V507!= VV[143]))goto T1948;
	V506= VV[183];
	goto T1942;
goto T1948;
T1948:;
	if((V507!= VV[144]))goto T1949;
	V506= VV[184];
	goto T1942;
goto T1949;
T1949:;
	V506= VV[185];}
goto T1942;
T1942:;
	(void)((*(LnkLI267))(V506));
	princ_str("(LI",VV[25]);
	(void)((*(LnkLI267))((V501)));
	princ_char(40,VV[25]);
	{register object V508;
	register long V509;
	V509= 0;
	V508= (V502);
goto T1956;
T1956:;
	if(!(endp((V508)))){
	goto T1957;}
	goto T1953;
goto T1957;
T1957:;
	{object V511= car((V508));
	if((V511!= VV[89]))goto T1964;
	V510= VV[186];
	goto T1963;
goto T1964;
T1964:;
	if((V511!= VV[142]))goto T1965;
	V510= VV[187];
	goto T1963;
goto T1965;
T1965:;
	if((V511!= VV[143]))goto T1966;
	V510= VV[188];
	goto T1963;
goto T1966;
T1966:;
	if((V511!= VV[144]))goto T1967;
	V510= VV[189];
	goto T1963;
goto T1967;
T1967:;
	V510= VV[190];}
goto T1963;
T1963:;
	(void)((*(LnkLI267))(V510));
	princ_str("(base[",VV[25]);
	V512 = make_fixnum(V509);
	(void)((*(LnkLI267))(V512));
	princ_str("])",VV[25]);
	if(endp(cdr((V508)))){
	goto T1971;}
	princ_char(44,VV[25]);
goto T1971;
T1971:;
	V508= cdr((V508));
	V509= (long)(V509)+1;
	goto T1956;}
goto T1953;
T1953:;
	princ_str("));",VV[25]);
	princ_str("\n	vs_top=(vs_base=base)+1;",VV[25]);
	princ_str("\n}",VV[25]);
	{object V513 = Cnil;
	VMR32(V513)}
	return Cnil;
}
/*	local entry for function REP-TYPE	*/

static object LI34(V515)

object V515;
{	 VMB33 VMS33 VMV33
goto TTL;
TTL:;
	{object V516= (V515);
	if((V516!= VV[89]))goto T1984;
	{object V517 = VV[191];
	VMR33(V517)}
goto T1984;
T1984:;
	if((V516!= VV[254]))goto T1985;
	{object V518 = VV[192];
	VMR33(V518)}
goto T1985;
T1985:;
	if((V516!= VV[142]))goto T1986;
	{object V519 = VV[193];
	VMR33(V519)}
goto T1986;
T1986:;
	if((V516!= VV[144]))goto T1987;
	{object V520 = VV[194];
	VMR33(V520)}
goto T1987;
T1987:;
	if((V516!= VV[143]))goto T1988;
	{object V521 = VV[195];
	VMR33(V521)}
goto T1988;
T1988:;
	{object V522 = VV[196];
	VMR33(V522)}}
	return Cnil;
}
/*	local entry for function T1DEFMACRO	*/

static object LI35(V524)

register object V524;
{	 VMB34 VMS34 VMV34
	bds_check;
goto TTL;
TTL:;
	if(endp((V524))){
	goto T1990;}
	if(!(endp(cdr((V524))))){
	goto T1989;}
goto T1990;
T1990:;
	V525 = make_fixnum((long)length((V524)));
	(void)((*(LnkLI276))(VV[197],small_fixnum(2),V525));
goto T1989;
T1989:;
	if(type_of(car((V524)))==t_symbol){
	goto T1994;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[198],car((V524)))));
goto T1994;
T1994:;
	V526= make_cons(VV[197],(V524));
	(void)((*(LnkLI260))(Ct,/* INLINE-ARGS */V526));
	setq(VV[6],Ct);
	{register object V527;
	object V528;
	setq(VV[61],number_plus(symbol_value(VV[61]),small_fixnum(1)));
	V528= symbol_value(VV[61]);
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[52],Cnil);
	bds_bind(VV[59],Cnil);
	V527= Cnil;
	V527= (*(LnkLI330))(car((V524)),cadr((V524)),cddr((V524)));
	(void)((*(LnkLI286))());
	V529= list(7,VV[197],car((V524)),(V528),cddr((V527)),car((V527)),cadr((V527)),(VV[59]->s.s_dbind));
	setq(VV[24],make_cons(/* INLINE-ARGS */V529,symbol_value(VV[24])));
	{object V530 = symbol_value(VV[24]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR34(V530)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFMACRO	*/

static object LI36(V537,V538,V539,V540,V541,V542)

object V537;object V538;object V539;object V540;object V541;object V542;
{	 VMB35 VMS35 VMV35
goto TTL;
TTL:;
	if(((V540))==Cnil){
	goto T2006;}
	V543= list(4,VV[103],list(2,VV[91],(V537)),(V540),VV[199]);
	(void)((VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V543)));
goto T2006;
T2006:;
	if(((V541))==Cnil){
	goto T2009;}
	V544= list(2,VV[91],(V537));
	V545= list(4,VV[103],/* INLINE-ARGS */V544,list(2,VV[91],(V541)),VV[200]);
	(void)((VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V545)));
goto T2009;
T2009:;
	princ_str("\nstatic void L",VV[31]);
	(void)((*(LnkLI270))((V538)));
	princ_str("();",VV[31]);
	V546= list(2,VV[91],(V537));
	V547= list(3,VV[201],/* INLINE-ARGS */V546,(*(LnkLI294))(VV[202],(V538)));
	{object V548 = (VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V547));
	VMR35(V548)}
	return Cnil;
}
/*	local entry for function T3DEFMACRO	*/

static object LI37(V555,V556,V557,V558,V559,V560)

object V555;object V556;register object V557;object V558;object V559;object V560;
{	 VMB36 VMS36 VMV36
	bds_check;
goto TTL;
TTL:;
	if((get((V555),VV[203],Cnil))==Cnil){
	goto T2018;}
	bds_bind(VV[20],VV[204]);
	goto T2016;
goto T2018;
T2018:;
	bds_bind(VV[20],VV[205]);
goto T2016;
T2016:;
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
	(void)((VFUN_NARGS=2,(*(LnkLI305))(VV[206],(V555))));
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI267))((V556)));
	princ_str("()",VV[25]);
	princ_str("\n{register object *",VV[25]);
	(void)((*(LnkLI267))((VV[20]->s.s_dbind)));
	princ_str("base=vs_base;",VV[25]);
	V561= structure_ref(car(cddddr((V557))),VV[62],1);
	(void)((*(LnkLI307))(/* INLINE-ARGS */V561,(V556),VV[148]));
	princ_str("\n	register object *",VV[25]);
	(void)((*(LnkLI267))((VV[20]->s.s_dbind)));
	princ_str("sup=base+VM",VV[25]);
	(void)((*(LnkLI267))((VV[136]->s.s_dbind)));
	princ_char(59,VV[25]);
	princ_str(" VC",VV[25]);
	(void)((*(LnkLI267))((VV[136]->s.s_dbind)));
	if((symbol_value(VV[157]))==Cnil){
	goto T2044;}
	princ_str("\n	vs_reserve(VM",VV[25]);
	(void)((*(LnkLI267))((VV[136]->s.s_dbind)));
	princ_str(");",VV[25]);
	goto T2042;
goto T2044;
T2044:;
	princ_str("\n	vs_check;",VV[25]);
goto T2042;
T2042:;
	if(((V560))==Cnil){
	goto T2050;}
	princ_str("\n	bds_check;",VV[25]);
goto T2050;
T2050:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2054;}
	princ_str("\n	ihs_check;",VV[25]);
goto T2054;
T2054:;
	base[15]= car((V557));
	base[16]= cadr((V557));
	base[17]= caddr((V557));
	base[18]= cadddr((V557));
	vs_top=(vs_base=base+15)+4;
	(void) (*Lnk331)();
	vs_top=sup;
	princ_str("\n}",VV[25]);
	V562= make_cons((VV[136]->s.s_dbind),(VV[130]->s.s_dbind));
	setq(VV[33],make_cons(/* INLINE-ARGS */V562,symbol_value(VV[33])));
	princ_str("\n#define VC",VV[31]);
	(void)((*(LnkLI270))((VV[136]->s.s_dbind)));
	{object V563 = (*(LnkLI325))();
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
	VMR36(V563)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1ORDINARY	*/

static object LI38(V565)

register object V565;
{	 VMB37 VMS37 VMV37
	bds_check;
goto TTL;
TTL:;
	{register object V566;
	V566= Cnil;
	setq(VV[6],Ct);
	if((symbol_value(VV[48]))==Cnil){
	goto T2074;}
	(void)((*(LnkLI260))(Cnil,(V565)));
	{object V567;
	base[0]= VV[207];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V567= vs_base[0];
	V568= listA(3,VV[64],(V567),VV[208]);
	(void)((*(LnkLI282))(/* INLINE-ARGS */V568));
	base[0]= list(5,VV[51],(V567),Cnil,(V565),Cnil);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk264)();
	vs_top=sup;
	V569= list(2,VV[209],make_cons((V567),Cnil));
	setq(VV[24],make_cons(/* INLINE-ARGS */V569,symbol_value(VV[24])));
	{object V570 = symbol_value(VV[24]);
	VMR37(V570)}}
goto T2074;
T2074:;
	{object V571;
	if(type_of((V565))==t_cons){
	goto T2084;}
	V571= Cnil;
	goto T2083;
goto T2084;
T2084:;
	if(type_of(car((V565)))==t_symbol){
	goto T2086;}
	V571= Cnil;
	goto T2083;
goto T2086;
T2086:;
	if(!((car((V565)))==(VV[210]))){
	goto T2090;}
	goto T2088;
goto T2090;
T2090:;
	base[0]= car((V565));
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	V572= vs_base[0];
	if((V572)==Cnil){
	goto T2088;}
	V571= Cnil;
	goto T2083;
goto T2088;
T2088:;
	{register object V573;
	register long V574;
	V573= cdr((V565));
	V574= 1;
goto T2097;
T2097:;
	if((V574)>=(1000)){
	goto T2099;}
	if(type_of((V573))==t_cons){
	goto T2098;}
goto T2099;
T2099:;
	V571= Cnil;
	goto T2083;
goto T2098;
T2098:;
	if(!(type_of(car((V573)))==t_cons)){
	goto T2104;}
	if(!((caar((V573)))==(VV[64]))){
	goto T2104;}
	V566= cadr(car((V573)));
	if(!(type_of((V566))==t_cons)){
	goto T2104;}
	if(!((car((V566)))==(VV[211]))){
	goto T2104;}
	{register object V575;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V575= vs_base[0];
	base[0]= listA(3,VV[51],(V575),cdr((V566)));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk264)();
	vs_top=sup;
	base[1]= (V565);
	base[2]= small_fixnum(0);
	base[3]= make_fixnum(V574);
	vs_top=(vs_base=base+1)+3;
	Lsubseq();
	vs_top=sup;
	base[0]= vs_base[0];
	V576= list(2,VV[212],list(2,VV[91],(V575)));
	base[1]= make_cons(/* INLINE-ARGS */V576,Cnil);
	V577 = make_fixnum(V574);
	V578= number_plus(small_fixnum(1),V577);
	base[2]= nthcdr(fixint(/* INLINE-ARGS */V578),(V565));
	vs_top=(vs_base=base+0)+3;
	Lappend();
	vs_top=sup;
	V565= vs_base[0];
	goto TTL;}
goto T2104;
T2104:;
	if(type_of((V573))==t_cons){
	goto T2127;}
	V573= Cnil;
	goto T2126;
goto T2127;
T2127:;
	V573= cdr((V573));
goto T2126;
T2126:;
	V574= (long)(1)+(V574);
	goto T2097;}
goto T2083;
T2083:;
	if(((V571))==Cnil){
	goto T2132;}
	{object V579 = (V571);
	VMR37(V579)}
goto T2132;
T2132:;
	(void)((*(LnkLI260))(Cnil,(V565)));
	bds_bind(VV[55],Cnil);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[52],Cnil);
	V580= list(2,VV[209],(V565));
	setq(VV[24],make_cons(/* INLINE-ARGS */V580,symbol_value(VV[24])));
	{object V581 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR37(V581)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2ORDINARY	*/

static object LI39(V583)

object V583;
{	 VMB38 VMS38 VMV38
goto TTL;
TTL:;
	{object V584;
	V584= (type_of((V583))!=t_cons?Ct:Cnil);
	if(((V584))==Cnil){
	goto T2139;}
	{object V585 = (V584);
	VMR38(V585)}
goto T2139;
T2139:;
	{object V586;
	base[0]= (V583);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	V586= vs_base[0];
	if(((V586))==Cnil){
	goto T2144;}
	{object V587 = (V586);
	VMR38(V587)}
goto T2144;
T2144:;
	{object V588 = (VFUN_NARGS=1,(*(LnkLI293))((V583)));
	VMR38(V588)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-LOAD-TIME-SHARP-COMMA	*/

static object LI40()

{	 VMB39 VMS39 VMV39
goto TTL;
TTL:;
	{register object V589;
	register object V590;
	V589= reverse(symbol_value(VV[52]));
	V590= car((V589));
goto T2149;
T2149:;
	if(!(endp((V589)))){
	goto T2150;}
	{object V591 = Cnil;
	VMR39(V591)}
goto T2150;
T2150:;
	if(!(type_of((V590))!=t_cons)){
	goto T2154;}
	(void)((*(LnkLI332))());
goto T2154;
T2154:;
	V592= make_cons(VV[213],(V590));
	setq(VV[24],make_cons(/* INLINE-ARGS */V592,symbol_value(VV[24])));
	V589= cdr((V589));
	V590= car((V589));
	goto T2149;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2SHARP-COMMA	*/

static object LI41(V595,V596)

object V595;object V596;
{	 VMB40 VMS40 VMV40
goto TTL;
TTL:;
	V597= list(3,VV[214],(V595),(V596));
	{object V598 = (VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V597));
	VMR40(V598)}
	return Cnil;
}
/*	local entry for function T2DECLARE	*/

static object LI42(V600)

object V600;
{	 VMB41 VMS41 VMV41
goto TTL;
TTL:;
	{object V601 = (*(LnkLI332))();
	VMR41(V601)}
	return Cnil;
}
/*	local entry for function T1DEFINE-STRUCTURE	*/

static object LI43(V603)

object V603;
{	 VMB42 VMS42 VMV42
goto TTL;
TTL:;
	V604= (*(LnkLI260))(Cnil,Cnil);
	V605= make_cons(((/* INLINE-ARGS */V604)==Cnil?Ct:Cnil),Cnil);
	V606= append((V603),/* INLINE-ARGS */V605);
	V607= make_cons(VV[215],/* INLINE-ARGS */V606);
	(void)((*(LnkLI260))(Ct,/* INLINE-ARGS */V607));
	V608= make_cons(VV[215],(V603));
	{object V609 = (*(LnkLI265))(/* INLINE-ARGS */V608);
	VMR42(V609)}
	return Cnil;
}
/*	local entry for function SET-DBIND	*/

static object LI44(V612,V613)

object V612;object V613;
{	 VMB43 VMS43 VMV43
goto TTL;
TTL:;
	princ_str("\n	VV[",VV[25]);
	(void)((*(LnkLI267))((V613)));
	princ_str("]->s.s_dbind = ",VV[25]);
	(void)((*(LnkLI267))((V612)));
	princ_char(59,VV[25]);
	{object V614 = Cnil;
	VMR43(V614)}
	return Cnil;
}
/*	local entry for function T1CLINES	*/

static object LI45(V616)

object V616;
{	 VMB44 VMS44 VMV44
goto TTL;
TTL:;
	{register object V617;
	register object V618;
	V617= (V616);
	V618= car((V617));
goto T2175;
T2175:;
	if(!(endp((V617)))){
	goto T2176;}
	goto T2171;
goto T2176;
T2176:;
	if(type_of((V618))==t_string){
	goto T2180;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[216],(V618))));
goto T2180;
T2180:;
	V617= cdr((V617));
	V618= car((V617));
	goto T2175;}
goto T2171;
T2171:;
	V619= list(2,VV[217],(V616));
	setq(VV[24],make_cons(/* INLINE-ARGS */V619,symbol_value(VV[24])));
	{object V620 = symbol_value(VV[24]);
	VMR44(V620)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3CLINES	*/

static object LI46(V622)

object V622;
{	 VMB45 VMS45 VMV45
goto TTL;
TTL:;
	{register object V623;
	register object V624;
	V623= (V622);
	V624= car((V623));
goto T2192;
T2192:;
	if(!(endp((V623)))){
	goto T2193;}
	{object V625 = Cnil;
	VMR45(V625)}
goto T2193;
T2193:;
	princ_char(10,VV[25]);
	(void)((*(LnkLI267))((V624)));
	V623= cdr((V623));
	V624= car((V623));
	goto T2192;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFCFUN	*/

static object LI47(V627)

register object V627;
{	 VMB46 VMS46 VMV46
goto TTL;
TTL:;
	{register object V628;
	V628= Cnil;
	if(endp((V627))){
	goto T2207;}
	if(!(endp(cdr((V627))))){
	goto T2206;}
goto T2207;
T2207:;
	V629 = make_fixnum((long)length((V627)));
	(void)((*(LnkLI276))(VV[218],small_fixnum(2),V629));
goto T2206;
T2206:;
	if(type_of(car((V627)))==t_string){
	goto T2211;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[219],car((V627)))));
goto T2211;
T2211:;
	{object V630= cadr((V627));
	if(type_of(V630)==t_fixnum||
type_of(V630)==t_bignum||
type_of(V630)==t_ratio||
type_of(V630)==t_shortfloat||
type_of(V630)==t_longfloat||
type_of(V630)==t_complex){
	goto T2214;}}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[220],cadr((V627)))));
goto T2214;
T2214:;
	{register object V631;
	register object V632;
	V631= cddr((V627));
	V632= car((V631));
goto T2221;
T2221:;
	if(!(endp((V631)))){
	goto T2222;}
	goto T2217;
goto T2222;
T2222:;
	if(!(type_of((V632))==t_string)){
	goto T2228;}
	V628= make_cons((V632),(V628));
	goto T2226;
goto T2228;
T2228:;
	if(!(type_of((V632))==t_cons)){
	goto T2232;}
	if(!(type_of(car((V632)))==t_symbol)){
	goto T2235;}
	base[2]= car((V632));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2237;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[221],car((V632)))));
goto T2237;
T2237:;
	V633= car((V632));
	V634= (*(LnkLI333))(cdr((V632)));
	V635= make_cons(/* INLINE-ARGS */V633,/* INLINE-ARGS */V634);
	V636= make_cons(/* INLINE-ARGS */V635,Cnil);
	V628= make_cons(/* INLINE-ARGS */V636,(V628));
	goto T2226;
goto T2235;
T2235:;
	if(!(type_of(car((V632)))==t_cons)){
	goto T2243;}
	if(!(type_of(caar((V632)))==t_symbol)){
	goto T2243;}
	if(!((caar((V632)))==(VV[91]))){
	goto T2250;}
	if(!(endp(cdar((V632))))){
	goto T2252;}
	goto T2243;
goto T2252;
T2252:;
	if(!(((endp(cddar((V632)))?Ct:Cnil))==Cnil)){
	goto T2254;}
	goto T2243;
goto T2254;
T2254:;
	if(!(endp(cdr((V632))))){
	goto T2256;}
	goto T2243;
goto T2256;
T2256:;
	if(((endp(cddr((V632)))?Ct:Cnil))==Cnil){
	goto T2243;}
	goto T2248;
goto T2250;
T2250:;
	base[2]= caar((V632));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2243;}
goto T2248;
T2248:;
	V637= caar((V632));
	if(!((caar((V632)))==(VV[91]))){
	goto T2262;}
	V639= (*(LnkLI318))(cadar((V632)));
	V638= make_cons(/* INLINE-ARGS */V639,Cnil);
	goto T2260;
goto T2262;
T2262:;
	V638= (*(LnkLI333))(cdar((V632)));
goto T2260;
T2260:;
	V640= make_cons(/* INLINE-ARGS */V637,V638);
	V641= (*(LnkLI333))(cdr((V632)));
	V642= make_cons(/* INLINE-ARGS */V640,/* INLINE-ARGS */V641);
	V628= make_cons(/* INLINE-ARGS */V642,(V628));
	goto T2226;
goto T2243;
T2243:;
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[222],(V632))));
	goto T2226;
goto T2232;
T2232:;
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[223],(V632))));
goto T2226;
T2226:;
	V631= cdr((V631));
	V632= car((V631));
	goto T2221;}
goto T2217;
T2217:;
	V643= car((V627));
	V644= cadr((V627));
	V645= list(4,VV[218],/* INLINE-ARGS */V643,/* INLINE-ARGS */V644,reverse((V628)));
	setq(VV[24],make_cons(/* INLINE-ARGS */V645,symbol_value(VV[24])));
	{object V646 = symbol_value(VV[24]);
	VMR46(V646)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3DEFCFUN	*/

static object LI48(V650,V651,V652)

object V650;object V651;object V652;
{	 VMB47 VMS47 VMV47
goto TTL;
TTL:;
	{object V653;
	V653= Cnil;
	(void)((VFUN_NARGS=2,(*(LnkLI305))(VV[224],VV[218])));
	princ_char(10,VV[25]);
	(void)((*(LnkLI267))((V650)));
	princ_str("\n{",VV[25]);
	princ_str("\nobject *vs=vs_top;",VV[25]);
	princ_str("\nobject *old_top=vs_top+",VV[25]);
	(void)((*(LnkLI267))((V651)));
	princ_char(59,VV[25]);
	if(!(number_compare((V651),small_fixnum(0))>0)){
	goto T2283;}
	princ_str("\n	vs_top=old_top;",VV[25]);
goto T2283;
T2283:;
	princ_str("\n{",VV[25]);
	{object V654;
	register object V655;
	V654= (V652);
	V655= car((V654));
goto T2293;
T2293:;
	if(!(endp((V654)))){
	goto T2294;}
	goto T2289;
goto T2294;
T2294:;
	if(!(type_of((V655))==t_string)){
	goto T2300;}
	princ_char(10,VV[25]);
	(void)((*(LnkLI267))((V655)));
	goto T2298;
goto T2300;
T2300:;
	if(!((caar((V655)))==(VV[91]))){
	goto T2305;}
	princ_char(10,VV[25]);
	(void)((*(LnkLI267))(cadadr((V655))));
	{object V656= caadr((V655));
	if((V656!= VV[74]))goto T2310;
	princ_str("=VV[",VV[25]);
	(void)((*(LnkLI267))(cadar((V655))));
	princ_str("];",VV[25]);
	goto T2298;
goto T2310;
T2310:;
	princ_str("=object_to_",VV[25]);
	base[1]= symbol_name(caadr((V655)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V657= vs_base[0];
	(void)((*(LnkLI267))(V657));
	princ_str("(VV[",VV[25]);
	(void)((*(LnkLI267))(cadar((V655))));
	princ_str("]);",VV[25]);
	goto T2298;}
goto T2305;
T2305:;
	princ_str("\n{vs_base=vs_top=old_top;",VV[25]);
	{register object V658;
	register object V659;
	V658= cdar((V655));
	V659= car((V658));
goto T2327;
T2327:;
	if(!(endp((V658)))){
	goto T2328;}
	goto T2323;
goto T2328;
T2328:;
	princ_str("\nvs_push(",VV[25]);
	{object V660= car((V659));
	if((V660!= VV[74]))goto T2335;
	(void)((*(LnkLI267))(cadr((V659))));
	goto T2334;
goto T2335;
T2335:;
	if((V660!= VV[334]))goto T2337;
	princ_str("code_char((long)",VV[25]);
	(void)((*(LnkLI267))(cadr((V659))));
	princ_char(41,VV[25]);
	goto T2334;
goto T2337;
T2337:;
	if((V660!= VV[335]))goto T2341;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T2342;}
	princ_str("CMP",VV[25]);
goto T2342;
T2342:;
	princ_str("make_fixnum((long)",VV[25]);
	(void)((*(LnkLI267))(cadr((V659))));
	princ_char(41,VV[25]);
	goto T2334;
goto T2341;
T2341:;
	if((V660!= VV[336]))goto T2349;
	princ_str("make_shortfloat((double)",VV[25]);
	(void)((*(LnkLI267))(cadr((V659))));
	princ_char(41,VV[25]);
	goto T2334;
goto T2349;
T2349:;
	if((V660!= VV[337]))goto T2353;
	princ_str("make_longfloat((double)",VV[25]);
	(void)((*(LnkLI267))(cadr((V659))));
	princ_char(41,VV[25]);
	goto T2334;
goto T2353;
T2353:;}
goto T2334;
T2334:;
	princ_str(");",VV[25]);
	V658= cdr((V658));
	V659= car((V658));
	goto T2327;}
goto T2323;
T2323:;
	{register object x= caar((V655)),V661= symbol_value(VV[79]);
	while(!endp(V661))
	if(type_of(V661->c.c_car)==t_cons &&eql(x,V661->c.c_car->c.c_car)){
	V653= (V661->c.c_car);
	goto T2368;
	}else V661=V661->c.c_cdr;
	V653= Cnil;}
goto T2368;
T2368:;
	if(((V653))==Cnil){
	goto T2366;}
	if((symbol_value(VV[149]))==Cnil){
	goto T2370;}
	princ_str("\nihs_push(VV[",VV[25]);
	V662= (*(LnkLI320))(caar((V655)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V662));
	princ_str("]);",VV[25]);
	princ_str("\nL",VV[25]);
	(void)((*(LnkLI267))(cdr((V653))));
	princ_str("();",VV[25]);
	princ_str("\nihs_pop();",VV[25]);
	goto T2364;
goto T2370;
T2370:;
	princ_str("\nL",VV[25]);
	(void)((*(LnkLI267))(cdr((V653))));
	princ_str("();",VV[25]);
	goto T2364;
goto T2366;
T2366:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2385;}
	princ_str("\nsuper_funcall(VV[",VV[25]);
	V663= (*(LnkLI320))(caar((V655)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V663));
	princ_str("]);",VV[25]);
	goto T2364;
goto T2385;
T2385:;
	if((symbol_value(VV[157]))==Cnil){
	goto T2391;}
	princ_str("\nsuper_funcall_no_event(VV[",VV[25]);
	V664= (*(LnkLI320))(caar((V655)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V664));
	princ_str("]);",VV[25]);
	goto T2364;
goto T2391;
T2391:;
	princ_str("\nCMPfuncall(VV[",VV[25]);
	V665= (*(LnkLI320))(caar((V655)));
	(void)((*(LnkLI267))(/* INLINE-ARGS */V665));
	princ_str("]->s.s_gfdef);",VV[25]);
goto T2364;
T2364:;
	if(endp(cdr((V655)))){
	goto T2399;}
	princ_char(10,VV[25]);
	(void)((*(LnkLI267))(cadadr((V655))));
	{object V666= caadr((V655));
	if((V666!= VV[74]))goto T2406;
	princ_str("=vs_base[0];",VV[25]);
	goto T2405;
goto T2406;
T2406:;
	princ_str("=object_to_",VV[25]);
	base[1]= symbol_name(caadr((V655)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V667= vs_base[0];
	(void)((*(LnkLI267))(V667));
	princ_str("(vs_base[0]);",VV[25]);}
goto T2405;
T2405:;
	{register object V668;
	register object V669;
	V668= cddr((V655));
	V669= car((V668));
goto T2416;
T2416:;
	if(!(endp((V668)))){
	goto T2417;}
	goto T2399;
goto T2417;
T2417:;
	princ_str("\nvs_base++;",VV[25]);
	princ_char(10,VV[25]);
	(void)((*(LnkLI267))(cadr((V669))));
	{object V670= car((V669));
	if((V670!= VV[74]))goto T2427;
	princ_str("=(vs_base<vs_top?vs_base[0]:Cnil);",VV[25]);
	goto T2426;
goto T2427;
T2427:;
	princ_str("=object_to_",VV[25]);
	base[3]= symbol_name(car((V669)));
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V671= vs_base[0];
	(void)((*(LnkLI267))(V671));
	princ_str("((vs_base<vs_top?vs_base[0]:Cnil));",VV[25]);}
goto T2426;
T2426:;
	V668= cdr((V668));
	V669= car((V668));
	goto T2416;}
goto T2399;
T2399:;
	princ_str("\n}",VV[25]);
goto T2298;
T2298:;
	V654= cdr((V654));
	V655= car((V654));
	goto T2293;}
goto T2289;
T2289:;
	princ_str("\n}",VV[25]);
	princ_str("\nvs_top=vs;",VV[25]);
	princ_str("\n}",VV[25]);
	{object V672 = Cnil;
	VMR47(V672)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFENTRY	*/

static object LI49(V674)

register object V674;
{	 VMB48 VMS48 VMV48
goto TTL;
TTL:;
	{register object V675;
	register object V676;
	object V677;
	register object V678;
	V675= Cnil;
	V676= Cnil;
	setq(VV[61],number_plus(symbol_value(VV[61]),small_fixnum(1)));
	V677= symbol_value(VV[61]);
	V678= Cnil;
	if(endp((V674))){
	goto T2456;}
	if(endp(cdr((V674)))){
	goto T2456;}
	if(!(endp(cddr((V674))))){
	goto T2455;}
goto T2456;
T2456:;
	V679 = make_fixnum((long)length((V674)));
	(void)((*(LnkLI276))(VV[225],small_fixnum(3),V679));
goto T2455;
T2455:;
	if(type_of(car((V674)))==t_symbol){
	goto T2462;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[226],car((V674)))));
goto T2462;
T2462:;
	{register object V680;
	register object V681;
	V680= cadr((V674));
	V681= car((V680));
goto T2469;
T2469:;
	if(!(endp((V680)))){
	goto T2470;}
	goto T2465;
goto T2470;
T2470:;
	{register object x= (V681),V682= VV[227];
	while(!endp(V682))
	if(eql(x,V682->c.c_car)){
	goto T2474;
	}else V682=V682->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[228],(V681))));
goto T2474;
T2474:;
	V680= cdr((V680));
	V681= car((V680));
	goto T2469;}
goto T2465;
T2465:;
	V678= caddr((V674));
	if(!(type_of((V678))==t_symbol)){
	goto T2486;}
	V675= VV[74];
	base[1]= symbol_name((V678));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V676= vs_base[0];
	goto T2484;
goto T2486;
T2486:;
	if(!(type_of((V678))==t_string)){
	goto T2493;}
	V675= VV[74];
	V676= (V678);
	goto T2484;
goto T2493;
T2493:;
	if(!(type_of((V678))==t_cons)){
	goto T2499;}
	{register object x= car((V678)),V683= VV[229];
	while(!endp(V683))
	if(eql(x,V683->c.c_car)){
	goto T2503;
	}else V683=V683->c.c_cdr;
	goto T2499;}
goto T2503;
T2503:;
	if(!(type_of(cdr((V678)))==t_cons)){
	goto T2499;}
	if(type_of(cadr((V678)))==t_symbol){
	goto T2506;}
	if(!(type_of(cadr((V678)))==t_string)){
	goto T2499;}
goto T2506;
T2506:;
	if(!(endp(cddr((V678))))){
	goto T2499;}
	if(!(type_of(cadr((V678)))==t_symbol)){
	goto T2514;}
	base[1]= symbol_name(cadr((V678)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V676= vs_base[0];
	goto T2512;
goto T2514;
T2514:;
	V676= cadr((V678));
goto T2512;
T2512:;
	V675= car((V678));
	goto T2484;
goto T2499;
T2499:;
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[230],(V678))));
goto T2484;
T2484:;
	V684= list(6,VV[225],car((V674)),(V677),cadr((V674)),(V675),(V676));
	setq(VV[24],make_cons(/* INLINE-ARGS */V684,symbol_value(VV[24])));
	V685= make_cons(car((V674)),(V677));
	setq(VV[79],make_cons(/* INLINE-ARGS */V685,symbol_value(VV[79])));
	{object V686 = symbol_value(VV[79]);
	VMR48(V686)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFENTRY	*/

static object LI50(V692,V693,V694,V695,V696)

object V692;object V693;object V694;object V695;object V696;
{	 VMB49 VMS49 VMV49
goto TTL;
TTL:;
	princ_str("\nstatic void L",VV[31]);
	(void)((*(LnkLI270))((V693)));
	princ_str("();",VV[31]);
	V697= list(2,VV[91],(V692));
	V698= list(3,VV[111],/* INLINE-ARGS */V697,(*(LnkLI294))(VV[231],(V693)));
	{object V699 = (VFUN_NARGS=1,(*(LnkLI293))(/* INLINE-ARGS */V698));
	VMR49(V699)}
	return Cnil;
}
/*	local entry for function T3DEFENTRY	*/

static object LI51(V705,V706,V707,V708,V709)

object V705;object V706;object V707;register object V708;object V709;
{	 VMB50 VMS50 VMV50
goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI305))(VV[232],(V705))));
	princ_str("\nstatic void L",VV[25]);
	(void)((*(LnkLI267))((V706)));
	princ_str("()",VV[25]);
	princ_str("\n{	object *old_base=vs_base;",VV[25]);
	{object V710= (V708);
	if((V710!= VV[233]))goto T2533;
	goto T2532;
goto T2533;
T2533:;
	if((V710!= VV[338]))goto T2534;
	princ_str("\n	char *x;",VV[25]);
	goto T2532;
goto T2534;
T2534:;
	princ_str("\n	",VV[25]);
	base[0]= symbol_name((V708));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V711= vs_base[0];
	(void)((*(LnkLI267))(V711));
	princ_str(" x;",VV[25]);}
goto T2532;
T2532:;
	if((symbol_value(VV[157]))==Cnil){
	goto T2541;}
	princ_str("\n	check_arg(",VV[25]);
	V712 = make_fixnum((long)length((V707)));
	(void)((*(LnkLI267))(V712));
	princ_str(");",VV[25]);
goto T2541;
T2541:;
	if(((V708))==(VV[233])){
	goto T2547;}
	princ_str("\n	x=",VV[25]);
goto T2547;
T2547:;
	princ_str("\n	",VV[25]);
	(void)((*(LnkLI267))((V709)));
	princ_char(40,VV[25]);
	if(endp((V707))){
	goto T2555;}
	{register object V713;
	register long V714;
	V714= 0;
	V713= (V707);
goto T2560;
T2560:;
	{object V715= car((V713));
	if((V715!= VV[74]))goto T2564;
	princ_str("\n	vs_base[",VV[25]);
	V716 = make_fixnum(V714);
	(void)((*(LnkLI267))(V716));
	princ_char(93,VV[25]);
	goto T2563;
goto T2564;
T2564:;
	princ_str("\n	object_to_",VV[25]);
	base[0]= symbol_name(car((V713)));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V717= vs_base[0];
	(void)((*(LnkLI267))(V717));
	princ_str("(vs_base[",VV[25]);
	V718 = make_fixnum(V714);
	(void)((*(LnkLI267))(V718));
	princ_str("])",VV[25]);}
goto T2563;
T2563:;
	if(!(endp(cdr((V713))))){
	goto T2575;}
	goto T2555;
goto T2575;
T2575:;
	princ_char(44,VV[25]);
	V713= cdr((V713));
	V714= (long)(V714)+1;
	goto T2560;}
goto T2555;
T2555:;
	princ_str(");",VV[25]);
	princ_str("\n	vs_top=(vs_base=old_base)+1;",VV[25]);
	princ_str("\n	vs_base[0]=",VV[25]);
	{object V719= (V708);
	if((V719!= VV[233]))goto T2591;
	princ_str("Cnil",VV[25]);
	goto T2590;
goto T2591;
T2591:;
	if((V719!= VV[74]))goto T2593;
	princ_char(120,VV[25]);
	goto T2590;
goto T2593;
T2593:;
	if((V719!= VV[334]))goto T2595;
	princ_str("code_char(x)",VV[25]);
	goto T2590;
goto T2595;
T2595:;
	if((V719!= VV[335]))goto T2597;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[114]))==0)){
	goto T2598;}
	princ_str("CMP",VV[25]);
goto T2598;
T2598:;
	princ_str("make_fixnum(x)",VV[25]);
	goto T2590;
goto T2597;
T2597:;
	if((V719!= VV[338]))goto T2603;
	princ_str("make_simple_string(x)",VV[25]);
	goto T2590;
goto T2603;
T2603:;
	if((V719!= VV[336]))goto T2605;
	princ_str("make_shortfloat(x)",VV[25]);
	goto T2590;
goto T2605;
T2605:;
	if((V719!= VV[337]))goto T2607;
	princ_str("make_longfloat(x)",VV[25]);
	goto T2590;
goto T2607;
T2607:;}
goto T2590;
T2590:;
	princ_char(59,VV[25]);
	princ_str("\n}",VV[25]);
	{object V720 = Cnil;
	VMR50(V720)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFLA	*/

static object LI52(V722)

object V722;
{	 VMB51 VMS51 VMV51
goto TTL;
TTL:;
	{object V723 = Cnil;
	VMR51(V723)}
	return Cnil;
}
/*	local entry for function PARSE-CVSPECS	*/

static object LI53(V725)

object V725;
{	 VMB52 VMS52 VMV52
goto TTL;
TTL:;
	{register object V726;
	V726= Cnil;
	{register object V727;
	register object V728;
	V727= (V725);
	V728= car((V727));
goto T2616;
T2616:;
	if(!(endp((V727)))){
	goto T2617;}
	{object V729 = reverse((V726));
	VMR52(V729)}
goto T2617;
T2617:;
	if(!(type_of((V728))==t_symbol)){
	goto T2623;}
	base[1]= symbol_name((V728));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V730= vs_base[0];
	V731= list(2,VV[74],V730);
	V726= make_cons(/* INLINE-ARGS */V731,(V726));
	goto T2621;
goto T2623;
T2623:;
	if(!(type_of((V728))==t_string)){
	goto T2629;}
	V732= list(2,VV[74],(V728));
	V726= make_cons(/* INLINE-ARGS */V732,(V726));
	goto T2621;
goto T2629;
T2629:;
	if(!(type_of((V728))==t_cons)){
	goto T2633;}
	{register object x= car((V728)),V733= VV[234];
	while(!endp(V733))
	if(eql(x,V733->c.c_car)){
	goto T2636;
	}else V733=V733->c.c_cdr;
	goto T2633;}
goto T2636;
T2636:;
	{register object V734;
	register object V735;
	V734= cdr((V728));
	V735= car((V734));
goto T2640;
T2640:;
	if(!(endp((V734)))){
	goto T2641;}
	goto T2621;
goto T2641;
T2641:;
	V736= car((V728));
	if(!(type_of((V735))==t_symbol)){
	goto T2649;}
	base[3]= symbol_name((V735));
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V737= vs_base[0];
	goto T2647;
goto T2649;
T2649:;
	if(!(type_of((V735))==t_string)){
	goto T2653;}
	V737= (V735);
	goto T2647;
goto T2653;
T2653:;
	V737= (VFUN_NARGS=2,(*(LnkLI258))(VV[235],(V735)));
goto T2647;
T2647:;
	V738= list(2,/* INLINE-ARGS */V736,V737);
	V726= make_cons(/* INLINE-ARGS */V738,(V726));
	V734= cdr((V734));
	V735= car((V734));
	goto T2640;}
goto T2633;
T2633:;
	(void)((VFUN_NARGS=2,(*(LnkLI258))(VV[236],(V728))));
goto T2621;
T2621:;
	V727= cdr((V727));
	V728= car((V727));
	goto T2616;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3LOCAL-DCFUN	*/

static object LI54(V744,V745,V746,V747,V748)

object V744;object V745;object V746;register object V747;register object V748;
{	 VMB53 VMS53 VMV53
	bds_check;
goto TTL;
TTL:;
	{object V749;
	register object V750;
	object V751;
	if(((V744))==Cnil){
	goto T2667;}
	V749= small_fixnum(0);
	goto T2665;
goto T2667;
T2667:;
	V749= structure_ref((V747),VV[32],4);
goto T2665;
T2665:;
	V750= Cnil;
	bds_bind(VV[20],(*(LnkLI299))(cadr((V748))));
	bds_bind(VV[117],Cnil);
	V751= caaddr((V748));
	if((structure_ref((V747),VV[32],0))==Cnil){
	goto T2675;}
	V752= structure_ref((V747),VV[32],0);
	goto T2673;
goto T2675;
T2675:;
	V752= Cnil;
goto T2673;
T2673:;
	(void)((VFUN_NARGS=2,(*(LnkLI305))(VV[237],V752)));
	princ_str("\nstatic void ",VV[25]);
	if(((V744))==Cnil){
	goto T2682;}
	V753= VV[238];
	goto T2680;
goto T2682;
T2682:;
	V753= VV[239];
goto T2680;
T2680:;
	(void)((*(LnkLI267))(V753));
	V754= structure_ref((V747),VV[32],3);
	(void)((*(LnkLI267))(/* INLINE-ARGS */V754));
	princ_char(40,VV[25]);
	princ_str("base0",VV[25]);
	if(((V751))==Cnil){
	goto T2691;}
	V755= VV[240];
	goto T2689;
goto T2691;
T2691:;
	V755= VV[241];
goto T2689;
T2689:;
	(void)((*(LnkLI267))(V755));
	V756= structure_ref(cadr((V748)),VV[62],1);
	(void)((*(LnkLI301))(/* INLINE-ARGS */V756,small_fixnum(2)));
	(void)((*(LnkLI306))(caaddr((V748)),Cnil));
	princ_str("register object *",VV[25]);
	(void)((*(LnkLI267))((VV[20]->s.s_dbind)));
	princ_str("base0;",VV[25]);
	bds_bind(VV[242],(V746));
	bds_bind(VV[128],VV[124]);
	bds_bind(VV[18],Cnil);
	bds_bind(VV[129],small_fixnum(0));
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],one_plus((V749)));
	bds_bind(VV[132],(V746));
	bds_bind(VV[133],(V745));
	bds_bind(VV[134],make_cons((VV[128]->s.s_dbind),Cnil));
	bds_bind(VV[135],(VV[128]->s.s_dbind));
	setq(VV[137],number_plus(symbol_value(VV[137]),small_fixnum(1)));
	bds_bind(VV[136],symbol_value(VV[137]));
	bds_bind(VV[138],Cnil);
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],small_fixnum(0));
	V750= (VV[136]->s.s_dbind);
	princ_str("\n{",VV[25]);
	V757= structure_ref(cadr((V748)),VV[62],1);
	V758= structure_ref((V747),VV[32],3);
	(void)((*(LnkLI307))(/* INLINE-ARGS */V757,/* INLINE-ARGS */V758,VV[243]));
	princ_str("\n	VMB",VV[25]);
	(void)((*(LnkLI267))((V750)));
	princ_str(" VMS",VV[25]);
	(void)((*(LnkLI267))((V750)));
	princ_str(" VMV",VV[25]);
	(void)((*(LnkLI267))((V750)));
	if((symbol_value(VV[149]))==Cnil){
	goto T2715;}
	princ_str("\n	ihs_check;",VV[25]);
goto T2715;
T2715:;
	base[19]= caddr(cddr((V748)));
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk308)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),(VV[130]->s.s_dbind))==0)){
	goto T2723;}
	if(((VV[138]->s.s_dbind))!=Cnil){
	goto T2723;}
	if(((VV[140]->s.s_dbind))!=Cnil){
	goto T2723;}
	goto T2721;
goto T2723;
T2723:;
	princ_str("\n	base[0]=base[0];",VV[25]);
goto T2721;
T2721:;
	princ_str("\n}",VV[25]);
	(void)((*(LnkLI309))((V750),Ct));
	V759= structure_ref((V747),VV[32],3);
	{object V760 = (*(LnkLI303))(/* INLINE-ARGS */V759);
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
	VMR53(V760)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3LOCAL-FUN	*/

static object LI55(V766,V767,V768,V769,V770)

object V766;object V767;object V768;object V769;object V770;
{	 VMB54 VMS54 VMV54
	bds_check;
goto TTL;
TTL:;
	{long V771;
	if(((V766))==Cnil){
	goto T2735;}
	V771= 0;
	goto T2733;
goto T2735;
T2735:;
	V771= fix(structure_ref((V769),VV[32],4));
goto T2733;
T2733:;
	bds_bind(VV[20],(*(LnkLI299))(cadr((V770))));
	bds_bind(VV[117],Cnil);
	if(!(((V766))==(VV[244]))){
	goto T2738;}
	{object V772 = (*(LnkLI243))((V766),(V767),(V768),(V769),(V770));
	bds_unwind1;
	bds_unwind1;
	VMR54(V772)}
goto T2738;
T2738:;
	if((structure_ref((V769),VV[32],0))==Cnil){
	goto T2744;}
	V773= structure_ref((V769),VV[32],0);
	goto T2742;
goto T2744;
T2744:;
	V773= Cnil;
goto T2742;
T2742:;
	(void)((VFUN_NARGS=2,(*(LnkLI305))(VV[245],V773)));
	princ_str("\nstatic void ",VV[31]);
	if(((V766))==Cnil){
	goto T2751;}
	V774= VV[246];
	goto T2749;
goto T2751;
T2751:;
	V774= VV[247];
goto T2749;
T2749:;
	(void)((*(LnkLI270))(V774));
	V775= structure_ref((V769),VV[32],3);
	(void)((*(LnkLI270))(/* INLINE-ARGS */V775));
	princ_str("();",VV[31]);
	princ_str("\nstatic void ",VV[25]);
	if(((V766))==Cnil){
	goto T2760;}
	V776= VV[248];
	goto T2758;
goto T2760;
T2760:;
	V776= VV[249];
goto T2758;
T2758:;
	(void)((*(LnkLI267))(V776));
	V777= structure_ref((V769),VV[32],3);
	(void)((*(LnkLI267))(/* INLINE-ARGS */V777));
	princ_char(40,VV[25]);
	{register object V778;
	register long V779;
	V778= make_fixnum(V771);
	V779= 0;
goto T2768;
T2768:;
	V780 = make_fixnum(V779);
	if(!(number_compare(V780,(V778))>=0)){
	goto T2769;}
	princ_str("base",VV[25]);
	V781 = make_fixnum(V779);
	(void)((*(LnkLI267))(V781));
	princ_char(41,VV[25]);
	goto T2764;
goto T2769;
T2769:;
	princ_str("base",VV[25]);
	V782 = make_fixnum(V779);
	(void)((*(LnkLI267))(V782));
	princ_char(44,VV[25]);
	V779= (long)(V779)+1;
	goto T2768;}
goto T2764;
T2764:;
	princ_str("\nregister object ",VV[25]);
	{register object V783;
	register long V784;
	V783= make_fixnum(V771);
	V784= 0;
goto T2789;
T2789:;
	V785 = make_fixnum(V784);
	if(!(number_compare(V785,(V783))>=0)){
	goto T2790;}
	princ_char(42,VV[25]);
	(void)((*(LnkLI267))((VV[20]->s.s_dbind)));
	princ_str("base",VV[25]);
	V786 = make_fixnum(V784);
	(void)((*(LnkLI267))(V786));
	princ_char(59,VV[25]);
	goto T2785;
goto T2790;
T2790:;
	princ_char(42,VV[25]);
	(void)((*(LnkLI267))((VV[20]->s.s_dbind)));
	princ_str("base",VV[25]);
	V787 = make_fixnum(V784);
	(void)((*(LnkLI267))(V787));
	princ_char(44,VV[25]);
	V784= (long)(V784)+1;
	goto T2789;}
goto T2785;
T2785:;
	V788= structure_ref(cadr((V770)),VV[62],1);
	(void)((*(LnkLI301))(/* INLINE-ARGS */V788,small_fixnum(2)));
	bds_bind(VV[128],VV[127]);
	bds_bind(VV[242],(V768));
	bds_bind(VV[18],Cnil);
	bds_bind(VV[129],small_fixnum(0));
	bds_bind(VV[130],small_fixnum(0));
	V789 = make_fixnum(V771);
	bds_bind(VV[131],one_plus(V789));
	bds_bind(VV[132],(V768));
	bds_bind(VV[133],(V767));
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
	V790= structure_ref(cadr((V770)),VV[62],1);
	V791= structure_ref((V769),VV[32],3);
	(void)((*(LnkLI307))(/* INLINE-ARGS */V790,/* INLINE-ARGS */V791,VV[250]));
	princ_str(" VC",VV[25]);
	(void)((*(LnkLI267))((VV[136]->s.s_dbind)));
	if((symbol_value(VV[157]))==Cnil){
	goto T2830;}
	princ_str("\n	vs_reserve(VM",VV[25]);
	(void)((*(LnkLI267))((VV[136]->s.s_dbind)));
	princ_str(");",VV[25]);
	goto T2828;
goto T2830;
T2830:;
	princ_str("\n	vs_check;",VV[25]);
goto T2828;
T2828:;
	if((symbol_value(VV[149]))==Cnil){
	goto T2836;}
	princ_str("\n	ihs_check;",VV[25]);
goto T2836;
T2836:;
	if(((V766))==Cnil){
	goto T2842;}
	(void)((VFUN_NARGS=2,(*(LnkLI324))(caddr((V770)),caddr(cddr((V770))))));
	goto T2840;
goto T2842;
T2842:;
	(void)((VFUN_NARGS=3,(*(LnkLI324))(caddr((V770)),caddr(cddr((V770))),(V769))));
goto T2840;
T2840:;
	princ_str("\n}",VV[25]);
	V792= make_cons((VV[136]->s.s_dbind),(VV[130]->s.s_dbind));
	setq(VV[33],make_cons(/* INLINE-ARGS */V792,symbol_value(VV[33])));
	princ_str("\n#define VC",VV[31]);
	(void)((*(LnkLI270))((VV[136]->s.s_dbind)));
	V793= (*(LnkLI325))();
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
	V794= structure_ref((V769),VV[32],3);
	{object V795 = (*(LnkLI303))(/* INLINE-ARGS */V794);
	bds_unwind1;
	bds_unwind1;
	VMR54(V795)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-CVARS	*/

static object LI56()

{	 VMB55 VMS55 VMV55
goto TTL;
TTL:;
	{register object V796;
	V796= Cnil;
	{register object V797;
	register object V798;
	V797= symbol_value(VV[18]);
	V798= car((V797));
goto T2856;
T2856:;
	if(!(endp((V797)))){
	goto T2857;}
	goto T2852;
goto T2857;
T2857:;
	{register object V799;
	if(!(type_of((V798))==t_cons)){
	goto T2864;}
	{register object V800;
	V800= car((V798));
	V798= cdr((V798));
	V799= (V800);
	goto T2862;}
goto T2864;
T2864:;
	V799= Ct;
goto T2862;
T2862:;
	if(!(((V796))==((V799)))){
	goto T2871;}
	base[1]= symbol_value(VV[31]);
	base[2]= VV[251];
	base[3]= (V798);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T2869;
goto T2871;
T2871:;
	if(!(((V796))==Cnil)){
	goto T2877;}
	goto T2876;
goto T2877;
T2877:;
	base[1]= symbol_value(VV[31]);
	base[2]= VV[252];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
goto T2876;
T2876:;
	V796= (V799);
	base[1]= symbol_value(VV[31]);
	base[2]= VV[253];
	base[3]= (*(LnkLI273))((V796));
	base[4]= (V798);
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
goto T2869;
T2869:;
	if(!(((V796))==(VV[254]))){
	goto T2861;}
	base[1]= symbol_value(VV[31]);
	base[2]= VV[255];
	base[3]= (V798);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;}
goto T2861;
T2861:;
	V797= cdr((V797));
	V798= car((V797));
	goto T2856;}
goto T2852;
T2852:;
	if(symbol_value(VV[18])==Cnil){
	goto T2897;}
	base[0]= symbol_value(VV[31]);
	base[1]= VV[256];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
goto T2897;
T2897:;
	if(eql(symbol_value(VV[141]),small_fixnum(0))){
	goto T2901;}
	base[0]= symbol_value(VV[31]);
	base[1]= VV[257];
	base[2]= symbol_value(VV[141]);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V801 = vs_base[0];
	VMR55(V801)}
goto T2901;
T2901:;
	{object V802 = Cnil;
	VMR55(V802)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function DO-DECL	*/

static void L26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_reserve(VM56);
	{object V803;
	check_arg(1);
	V803=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	V804= structure_ref((V803),VV[69],4);
	if(eql(/* INLINE-ARGS */V804,VV[72])){
	goto T2907;}
	goto T2906;
goto T2907;
T2907:;
	(VV[153]->s.s_dbind)= Ct;
goto T2906;
T2906:;
	{object V805;
	V805= (*(LnkLI339))((V803));
	if(((V805))==Cnil){
	goto T2912;}
	{object V806;
	setq(VV[88],number_plus(symbol_value(VV[88]),small_fixnum(1)));
	V806= symbol_value(VV[88]);
	(void)(structure_set((V803),VV[69],1,(V805)));
	(void)(structure_set((V803),VV[69],4,(V806)));
	princ_str("\n	",VV[25]);
	if((base0[1])!=Cnil){
	goto T2919;}
	princ_char(123,VV[25]);
	base0[1]= Ct;
goto T2919;
T2919:;
	base[1]= (V803);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk340)();
	return;}
goto T2912;
T2912:;
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

