
#include "cmpinclude.h"
#include "gcl_cmptop.h"
void init_gcl_cmptop(){do_init(VV);}
/*	function definition for T1EXPR	*/

static void L1()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM1; VC1
	vs_check;
	bds_check;
	{VOL object V1;
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
	V2= CMPcar((V1));
	V3= CMPcdr((V1));
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
	{object V6 =((V2))->s.s_plist;
	 object ind= VV[5];
	while(V6!=Cnil){
	if(V6->c.c_car==ind){
	if(((V6->c.c_cdr->c.c_car))==Cnil){
	goto T14;}
	goto T15;
	}else V6=V6->c.c_cdr->c.c_cdr;}
	goto T14;}
	goto T15;
T15:;
	if(((VV[6]->s.s_dbind))==Cnil){
	goto T16;}
	(void)((VFUN_NARGS=2,(*(LnkLI267))(VV[7],(V1))));
	goto T16;
T16:;
	{object V7;
	base[3]= (V2);
	vs_top=(vs_base=base+3)+1;
	Lmacro_function();
	vs_top=sup;
	V4= vs_base[0];
	if(((V4))==Cnil){
	goto T21;}
	base[3]= CMPcdr((V1));
	vs_top=(vs_base=base+3)+1;
	Lcopy_list();
	vs_top=sup;
	V8= vs_base[0];
	V7= (*(LnkLI268))((V4),(V2),V8);
	goto T19;
	goto T21;
T21:;
	V7= (V1);
	goto T19;
T19:;
	(void)((*(LnkLI269))(Ct,(V7)));
	V9= (*(LnkLI270))((V7));
	frs_pop();
	base[3]= V9;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;}
	goto T14;
T14:;
	{object V10 =((V2))->s.s_plist;
	 object ind= VV[8];
	while(V10!=Cnil){
	if(V10->c.c_car==ind){
	V4= (V10->c.c_cdr->c.c_car);
	goto T31;
	}else V10=V10->c.c_cdr->c.c_cdr;}
	V4= Cnil;}
	goto T31;
T31:;
	if(((V4))==Cnil){
	goto T29;}
	if(((VV[9]->s.s_dbind))==Cnil){
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
	{object V11 =((V2))->s.s_plist;
	 object ind= VV[10];
	while(V11!=Cnil){
	if(V11->c.c_car==ind){
	if(((V11->c.c_cdr->c.c_car))==Cnil){
	goto T37;}
	goto T38;
	}else V11=V11->c.c_cdr->c.c_cdr;}
	goto T37;}
	goto T38;
T38:;
	if(((VV[9]->s.s_dbind))==Cnil){
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
	{object V12 =((V2))->s.s_plist;
	 object ind= VV[11];
	while(V12!=Cnil){
	if(V12->c.c_car==ind){
	if(((V12->c.c_cdr->c.c_car))==Cnil){
	goto T44;}
	goto T45;
	}else V12=V12->c.c_cdr->c.c_cdr;}
	goto T44;}
	goto T45;
T45:;
	V13= (*(LnkLI274))((V1));
	frs_pop();
	base[3]= V13;
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
	{object V14;
	base[3]= CMPcdr((V1));
	vs_top=(vs_base=base+3)+1;
	Lcopy_list();
	vs_top=sup;
	V15= vs_base[0];
	V14= (*(LnkLI268))((V4),(V2),V15);
	base[3]= (V14);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk273)();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;}
	goto T47;
T47:;
	V16= (*(LnkLI274))((V1));
	frs_pop();
	base[3]= V16;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T8;
T8:;
	if(!(type_of((V2))==t_cons)){
	goto T56;}
	V17= (*(LnkLI274))((V1));
	frs_pop();
	base[3]= V17;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T56;
T56:;
	V18= (VFUN_NARGS=2,(*(LnkLI266))(VV[12],(V2)));
	frs_pop();
	base[3]= V18;
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
/*	local entry for function DECLARATION-TYPE	*/

static object LI2(V20)

object V20;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(!(equal((V20),VV[13]))){
	goto T59;}
	{object V21 = VV[14];
	VMR2(V21)}
	goto T59;
T59:;
	if(!(equal((V20),VV[15]))){
	goto T62;}
	{object V22 = VV[16];
	VMR2(V22)}
	goto T62;
T62:;
	{object V23 = (V20);
	VMR2(V23)}
	return Cnil;
}
/*	local entry for function CTOP-WRITE	*/

static object LI3(V25)

object V25;
{	 VMB3 VMS3 VMV3
	bds_check;
	goto TTL;
TTL:;
	{object V26;
	V26= Cnil;
	bds_bind(VV[18],Cnil);
	bds_bind(VV[19],Cnil);
	bds_bind(VV[21],VV[20]);
	bds_bind(VV[22],Cnil);
	bds_bind(VV[23],small_fixnum(0));
	bds_bind(VV[24],Cnil);
	bds_bind(VV[0],Cnil);
	bds_bind(VV[17],Cnil);
	(VV[25]->s.s_dbind)= reverse((VV[25]->s.s_dbind));
	princ_str("\nvoid init_",VV[26]);
	(void)((*(LnkLI275))((V25)));
	princ_str("(){",VV[26]);
	princ_str("do_init(VV);",VV[26]);
	princ_char(125,VV[26]);
	{object V27;
	V27= (VV[25]->s.s_dbind);
	bds_bind(VV[0],CMPcar((V27)));
	goto T77;
T77:;
	if(!(((V27))==Cnil)){
	goto T78;}
	bds_unwind1;
	goto T73;
	goto T78;
T78:;
	(VV[1]->s.s_dbind)= Ct;
	(VV[17]->s.s_dbind)= Cnil;
	{object V28 =(CMPcar((VV[0]->s.s_dbind)))->s.s_plist;
	 object ind= VV[27];
	while(V28!=Cnil){
	if(V28->c.c_car==ind){
	V26= (V28->c.c_cdr->c.c_car);
	goto T89;
	}else V28=V28->c.c_cdr->c.c_cdr;}
	V26= Cnil;}
	goto T89;
T89:;
	if(((V26))==Cnil){
	goto T86;}
	base[9]= (V26);
	{object V29;
	V29= CMPcdr((VV[0]->s.s_dbind));
	 vs_top=base+10;
	 while(V29!=Cnil)
	 {vs_push((V29)->c.c_car);V29=(V29)->c.c_cdr;}
	vs_base=base+10;}
	super_funcall_no_event(base[9]);
	vs_top=sup;
	goto T86;
T86:;
	V27= CMPcdr((V27));
	(VV[0]->s.s_dbind)= CMPcar((V27));
	goto T77;}
	goto T73;
T73:;
	{object V30;
	V30= (VV[25]->s.s_dbind);
	bds_bind(VV[0],CMPcar((V30)));
	goto T101;
T101:;
	if(!(((V30))==Cnil)){
	goto T102;}
	bds_unwind1;
	goto T97;
	goto T102;
T102:;
	(VV[1]->s.s_dbind)= Ct;
	(VV[17]->s.s_dbind)= Cnil;
	{object V31 =(CMPcar((VV[0]->s.s_dbind)))->s.s_plist;
	 object ind= VV[28];
	while(V31!=Cnil){
	if(V31->c.c_car==ind){
	V26= (V31->c.c_cdr->c.c_car);
	goto T113;
	}else V31=V31->c.c_cdr->c.c_cdr;}
	V26= Cnil;}
	goto T113;
T113:;
	if(((V26))==Cnil){
	goto T110;}
	base[9]= (V26);
	{object V32;
	V32= CMPcdr((VV[0]->s.s_dbind));
	 vs_top=base+10;
	 while(V32!=Cnil)
	 {vs_push((V32)->c.c_car);V32=(V32)->c.c_cdr;}
	vs_base=base+10;}
	super_funcall_no_event(base[9]);
	vs_top=sup;
	goto T110;
T110:;
	V30= CMPcdr((V30));
	(VV[0]->s.s_dbind)= CMPcar((V30));
	goto T101;}
	goto T97;
T97:;
	{object V33;
	V33= Cnil;
	goto T123;
T123:;
	if(!(((VV[29]->s.s_dbind))==Cnil)){
	goto T125;}
	goto T121;
	goto T125;
T125:;
	V33= CMPcar((VV[29]->s.s_dbind));
	{object V34;
	V34= CMPcar((VV[29]->s.s_dbind));
	(VV[29]->s.s_dbind)= CMPcdr((VV[29]->s.s_dbind));}
	(VV[17]->s.s_dbind)= Cnil;
	{object V35;
	V35= (V33);
	 vs_top=base+8;
	 while(V35!=Cnil)
	 {vs_push((V35)->c.c_car);V35=(V35)->c.c_cdr;}
	vs_base=base+8;}
	(void) (*Lnk258)();
	vs_top=sup;
	goto T123;}
	goto T121;
T121:;
	{object V36;
	object V37;
	V36= (VV[30]->s.s_dbind);
	V37= CMPcar((V36));
	goto T142;
T142:;
	if(!(((V36))==Cnil)){
	goto T143;}
	goto T138;
	goto T143;
T143:;
	(VV[17]->s.s_dbind)= Cnil;
	{object V38;
	V38= (V37);
	 vs_top=base+9;
	 while(V38!=Cnil)
	 {vs_push((V38)->c.c_car);V38=(V38)->c.c_cdr;}
	vs_base=base+9;}
	(void) (*Lnk276)();
	vs_top=sup;
	V36= CMPcdr((V36));
	V37= CMPcar((V36));
	goto T142;}
	goto T138;
T138:;
	{object V39;
	object V40;
	V39= (VV[18]->s.s_dbind);
	V40= CMPcar((V39));
	goto T160;
T160:;
	if(!(((V39))==Cnil)){
	goto T161;}
	goto T156;
	goto T161;
T161:;
	(VV[17]->s.s_dbind)= Cnil;
	(void)((*(LnkLI277))((V40)));
	V39= CMPcdr((V39));
	V40= CMPcar((V39));
	goto T160;}
	goto T156;
T156:;
	{object V41;
	object V42;
	V41= (VV[31]->s.s_dbind);
	V42= CMPcar((V41));
	goto T177;
T177:;
	if(!(((V41))==Cnil)){
	goto T178;}
	goto T173;
	goto T178;
T178:;
	princ_str("\nstatic void LC",VV[32]);
	(void)((*(LnkLI278))(STREF(object,(V42),12)));
	princ_str("();",VV[32]);
	V41= CMPcdr((V41));
	V42= CMPcar((V41));
	goto T177;}
	goto T173;
T173:;
	{object V43;
	object V44;
	V43= (VV[34]->s.s_dbind);
	V44= CMPcar((V43));
	goto T195;
T195:;
	if(!(((V43))==Cnil)){
	goto T196;}
	goto T191;
	goto T196;
T196:;
	princ_str("\n#define VM",VV[32]);
	(void)((*(LnkLI278))(CMPcar((V44))));
	princ_char(32,VV[32]);
	(void)((*(LnkLI278))(CMPcdr((V44))));
	V43= CMPcdr((V43));
	V44= CMPcar((V43));
	goto T195;}
	goto T191;
T191:;
	(void)((*(LnkLI279))(Cnil));
	{object V45;
	object V46;
	base[9]= (VV[23]->s.s_dbind);
	base[10]= (VV[35]->s.s_dbind);
	base[11]= small_fixnum(1);
	vs_top=(vs_base=base+9)+3;
	Lminus();
	vs_top=sup;
	V45= vs_base[0];
	V46= small_fixnum(0);
	goto T218;
T218:;
	if(!(number_compare((V46),(V45))>=0)){
	goto T219;}
	goto T211;
	goto T219;
T219:;
	(void)((*(LnkLI279))(Cnil));
	V46= one_plus((V46));
	goto T218;}
	goto T211;
T211:;
	princ_str("\nstatic char * VVi[",VV[32]);
	V47= number_plus(small_fixnum(1),(VV[35]->s.s_dbind));
	(void)((*(LnkLI278))(/* INLINE-ARGS */V47));
	princ_str("]={",VV[32]);
	princ_str("\n#define Cdata VV[",VV[32]);
	(void)((*(LnkLI278))((VV[35]->s.s_dbind)));
	princ_char(93,VV[32]);
	if((VV[22]->s.s_dbind)!=Cnil){
	goto T235;}
	princ_char(10,VV[32]);
	(void)((*(LnkLI278))(small_fixnum(0)));
	goto T235;
T235:;
	{register object V48;
	V48= nreverse((VV[22]->s.s_dbind));
	goto T241;
T241:;
	if(((V48))!=Cnil){
	goto T242;}
	princ_str("\n};",VV[32]);
	goto T238;
	goto T242;
T242:;
	princ_str("\n(char *)(",VV[32]);
	(void)((*(LnkLI278))(CMPcaar((V48))));
	(void)((*(LnkLI278))(CMPcadar((V48))));
	if((CMPcdr((V48)))==Cnil){
	goto T254;}
	V49= VV[36];
	goto T252;
	goto T254;
T254:;
	V49= VV[37];
	goto T252;
T252:;
	(void)((*(LnkLI278))(V49));
	V48= CMPcdr((V48));
	goto T241;}
	goto T238;
T238:;
	princ_str("\n#define VV ((object *)VVi)",VV[32]);
	vs_base=vs_top;
	(void) (*Lnk280)();
	vs_top=sup;
	{object V50;
	object V51;
	V50= (VV[18]->s.s_dbind);
	V51= CMPcar((V50));
	goto T265;
T265:;
	if(!(((V50))==Cnil)){
	goto T266;}
	{object V52 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR3(V52)}
	goto T266;
T266:;
	{register object V53;
	register object V54;
	object V55;
	register object V56;
	V53= CMPcadr((V51));
	V54= CMPcaddr((V51));
	V55= CMPcadddr((V51));
	V56= Cnil;
	if(!(((V54))==(VV[38]))){
	goto T276;}
	princ_str("\nstatic object *Lclptr",VV[32]);
	(void)((*(LnkLI278))((V53)));
	princ_char(59,VV[32]);
	V56= VV[39];
	goto T274;
	goto T276;
T276:;
	if(((V54))==Cnil){
	goto T285;}
	V56= (*(LnkLI281))((V54));
	goto T283;
	goto T285;
T285:;
	V56= VV[40];
	goto T283;
T283:;
	goto T274;
T274:;
	if(((V54))==Cnil){
	goto T288;}
	if(((V54))==(VV[38])){
	goto T288;}
	if(((V55))!=Cnil){
	goto T287;}
	if((Ct)==((V54))){
	goto T288;}
	goto T287;
T287:;
	princ_str("\nstatic ",VV[32]);
	V57= (*(LnkLI282))((V56));
	(void)((*(LnkLI278))(/* INLINE-ARGS */V57));
	princ_str(" LnkT",VV[32]);
	(void)((*(LnkLI278))((V53)));
	princ_str("(object,...);",VV[32]);
	princ_str("\nstatic ",VV[32]);
	V58= (*(LnkLI282))((V56));
	(void)((*(LnkLI278))(/* INLINE-ARGS */V58));
	princ_str(" (*Lnk",VV[32]);
	(void)((*(LnkLI278))((V53)));
	princ_str(")() = (",VV[32]);
	V59= (*(LnkLI282))((V56));
	(void)((*(LnkLI278))(/* INLINE-ARGS */V59));
	princ_str("(*)()) LnkT",VV[32]);
	(void)((*(LnkLI278))((V53)));
	princ_char(59,VV[32]);
	goto T270;
	goto T288;
T288:;
	princ_str("\nstatic ",VV[32]);
	V60= (*(LnkLI282))((V56));
	(void)((*(LnkLI278))(/* INLINE-ARGS */V60));
	princ_str(" LnkT",VV[32]);
	(void)((*(LnkLI278))((V53)));
	princ_str("();",VV[32]);
	princ_str("\nstatic ",VV[32]);
	V61= (*(LnkLI282))((V56));
	(void)((*(LnkLI278))(/* INLINE-ARGS */V61));
	princ_str(" (*Lnk",VV[32]);
	(void)((*(LnkLI278))((V53)));
	princ_str(")() = LnkT",VV[32]);
	(void)((*(LnkLI278))((V53)));
	princ_char(59,VV[32]);}
	goto T270;
T270:;
	V50= CMPcdr((V50));
	V51= CMPcar((V50));
	goto T265;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAYBE-EVAL	*/

static object LI4(V64,V65)

object V64;register object V65;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if((V64)!=Cnil){
	goto T329;}
	if(type_of(CMPcar((V65)))==t_symbol){
	goto T330;}
	goto T329;
	goto T330;
T330:;
	{object V66 =(CMPcar((V65)))->s.s_plist;
	 object ind= VV[41];
	while(V66!=Cnil){
	if(V66->c.c_car==ind){
	V64= (V66->c.c_cdr->c.c_car);
	goto T332;
	}else V66=V66->c.c_cdr->c.c_cdr;}
	V64= Cnil;}
	goto T332;
T332:;
	goto T329;
T329:;
	if(((V64))==Cnil){
	goto T335;}
	if((VV[42])==((VV[43]->s.s_dbind))){
	goto T333;}
	goto T335;
T335:;
	if(!(type_of((VV[43]->s.s_dbind))==t_cons)){
	goto T334;}
	{register object x= VV[44],V67= (VV[43]->s.s_dbind);
	while(V67!=Cnil)
	if(eql(x,V67->c.c_car)){
	goto T341;
	}else V67=V67->c.c_cdr;
	goto T334;}
	goto T341;
T341:;
	goto T333;
T333:;
	if(((V65))==Cnil){
	goto T342;}
	base[0]= (V65);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk283)();
	vs_top=sup;
	goto T342;
T342:;
	{object V68 = Ct;
	VMR4(V68)}
	goto T334;
T334:;
	{object V69 = Cnil;
	VMR4(V69)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for T1EVAL-WHEN	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	bds_check;
	{register object V70;
	V70=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V71;
	register object V72;
	V71= Cnil;
	V72= Cnil;
	if(!(((V70))==Cnil)){
	goto T348;}
	(void)((*(LnkLI284))(VV[45],small_fixnum(1),small_fixnum(0)));
	goto T348;
T348:;
	{register object V73;
	register object V74;
	V73= CMPcar((V70));
	V74= CMPcar((V73));
	goto T355;
T355:;
	if(!(((V73))==Cnil)){
	goto T356;}
	goto T351;
	goto T356;
T356:;
	{object V75= (V74);
	if((V75!= VV[285]))goto T361;
	V71= Ct;
	goto T360;
	goto T361;
T361:;
	if((V75!= VV[286]))goto T363;
	V71= Ct;
	goto T360;
	goto T363;
T363:;
	if((V75!= VV[44]))goto T365;
	V72= Ct;
	goto T360;
	goto T365;
T365:;
	if((V75!= VV[287]))goto T367;
	V72= Ct;
	goto T360;
	goto T367;
T367:;
	if((V75!= VV[288]))goto T369;
	goto T360;
	goto T369;
T369:;
	if((V75!= VV[289]))goto T370;
	goto T360;
	goto T370;
T370:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[46],(V74))));}
	goto T360;
T360:;
	V73= CMPcdr((V73));
	V74= CMPcar((V73));
	goto T355;}
	goto T351;
T351:;
	base[1]= CMPcar((V70));
	bds_bind(VV[43],base[1]);
	if(((V71))==Cnil){
	goto T378;}
	base[2]= (*(LnkLI290))(CMPcdr((V70)));
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T378;
T378:;
	if(((V72))==Cnil){
	goto T381;}
	base[2]= make_cons(VV[47],CMPcdr((V70)));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk283)();
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

static object LI6(V77)

object V77;
{	 VMB6 VMS6 VMV6
	bds_check;
	goto TTL;
TTL:;
	if(!(equal(CMPcar((V77)),VV[48]))){
	goto T385;}
	bds_bind(VV[49],Ct);
	{object V78 = (*(LnkLI290))(CMPcdr((V77)));
	bds_unwind1;
	VMR6(V78)}
	goto T385;
T385:;
	{register object V79;
	register object V80;
	V79= (V77);
	V80= CMPcar((V79));
	goto T390;
T390:;
	if(!(((V79))==Cnil)){
	goto T391;}
	{object V81 = Cnil;
	VMR6(V81)}
	goto T391;
T391:;
	base[1]= (V80);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk273)();
	vs_top=sup;
	V79= CMPcdr((V79));
	V80= CMPcar((V79));
	goto T390;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CMPFIX-ARGS	*/

static object LI7(V84,V85)

object V84;object V85;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V86;
	register object V87;
	V86= Cnil;
	base[1]= CMPcadr((V84));
	vs_top=(vs_base=base+1)+1;
	Lcopy_list();
	vs_top=sup;
	V87= vs_base[0];
	{register object V88;
	register object V89;
	V88= (V85);
	V89= CMPcar((V88));
	goto T409;
T409:;
	if(!(((V88))==Cnil)){
	goto T410;}
	goto T405;
	goto T410;
T410:;
	{register object x= CMPcar((V89)),V90= (V87);
	while(V90!=Cnil)
	if(eql(x,V90->c.c_car)){
	V86= V90;
	goto T415;
	}else V90=V90->c.c_cdr;
	V86= Cnil;}
	goto T415;
T415:;
	if((V86)==Cnil){
	goto T416;}
	{register object V91;
	register object V92;
	V91= (V86);
	V92= CMPcadr((V89));
	((V91))->c.c_car = (V92);}
	goto T416;
T416:;
	V88= CMPcdr((V88));
	V89= CMPcar((V88));
	goto T409;}
	goto T405;
T405:;
	{register object x= VV[50],V93= (V87);
	while(V93!=Cnil)
	if(eql(x,V93->c.c_car)){
	V86= V93;
	goto T429;
	}else V93=V93->c.c_cdr;
	V86= Cnil;}
	goto T429;
T429:;
	if(((V86))==Cnil){
	goto T427;}
	{object V95;
	V95= append((V85),CMPcdr((V86)));
	(V86)->c.c_cdr = (V95);
	goto T425;}
	goto T427;
T427:;
	V96= make_cons(VV[50],(V85));
	V87= append((V87),/* INLINE-ARGS */V96);
	goto T425;
T425:;
	{object V97 = listA(3,CMPcar((V84)),(V87),CMPcddr((V84)));
	VMR7(V97)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFUN	*/

static object LI8(V99)

object V99;
{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	{object V100;
	V100= (VV[51]->s.s_dbind);
	bds_bind(VV[53],Cnil);
	if(((V99))==Cnil){
	goto T435;}
	if(!((CMPcdr((V99)))==Cnil)){
	goto T434;}
	goto T435;
T435:;
	V102 = CMPmake_fixnum((long)length((V99)));
	(void)((*(LnkLI284))(VV[52],small_fixnum(2),V102));
	goto T434;
T434:;
	if(type_of(CMPcar((V99)))==t_symbol){
	goto T439;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[54],CMPcar((V99)))));
	goto T439;
T439:;
	V103= make_cons(VV[52],(V99));
	(void)((*(LnkLI269))(Cnil,/* INLINE-ARGS */V103));
	goto T444;
T444:;
	(VV[6]->s.s_dbind)= Ct;
	(VV[55]->s.s_dbind)= Cnil;
	{register object V104;
	object V105;
	object V106;
	register object V107;{object V108;
	{object V109 =(CMPcar((V99)))->s.s_plist;
	 object ind= VV[61];
	while(V109!=Cnil){
	if(V109->c.c_car==ind){
	V108= (V109->c.c_cdr->c.c_car);
	goto T452;
	}else V109=V109->c.c_cdr->c.c_cdr;}
	V108= Cnil;}
	goto T452;
T452:;
	if(V108==Cnil)goto T451;
	V105= V108;
	goto T450;
	goto T451;
T451:;}
	(VV[62]->s.s_dbind)= number_plus((VV[62]->s.s_dbind),small_fixnum(1));
	V105= (VV[62]->s.s_dbind);
	goto T450;
T450:;
	V107= CMPcar((V99));
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[59],Cnil);
	V104= Cnil;
	bds_bind(VV[60],Cnil);
	V106= Cnil;
	V104= (VFUN_NARGS=2,(*(LnkLI291))(CMPcdr((V99)),(V107)));
	if(!(eql((V100),(VV[51]->s.s_dbind)))){
	goto T458;}
	goto T457;
	goto T458;
T458:;
	V110= CMPcadr((V104));
	V111= Ct;
	STSET(object,/* INLINE-ARGS */V110,16, Ct);
	(void)(Ct);
	goto T457;
T457:;
	(void)((*(LnkLI292))(STREF(object,CMPcadr((V104)),4)));
	{object V112 =((V107))->s.s_plist;
	 object ind= VV[64];
	while(V112!=Cnil){
	if(V112->c.c_car==ind){
	if(((V112->c.c_cdr->c.c_car))==Cnil){
	goto T461;}
	goto T463;
	}else V112=V112->c.c_cdr->c.c_cdr;}
	goto T461;}
	goto T463;
T463:;
	{object V113;
	V113= CMPmake_fixnum((long)length(CMPcar(CMPcaddr((V104)))));
	(void)(sputprop((V107),VV[64],(V113)));
	base[6]= (V113);
	base[7]= VV[66];
	base[8]= Ct;
	vs_top=(vs_base=base+6)+3;
	Lmake_list();
	vs_top=sup;
	V114= vs_base[0];
	V115= list(4,VV[65],(V107),V114,Ct);
	(void)((*(LnkLI293))(/* INLINE-ARGS */V115));}
	goto T461;
T461:;
	{object V116 =((V107))->s.s_plist;
	 object ind= VV[67];
	while(V116!=Cnil){
	if(V116->c.c_car==ind){
	if(((V116->c.c_cdr->c.c_car))==Cnil){
	goto T472;}
	goto T474;
	}else V116=V116->c.c_cdr->c.c_cdr;}
	goto T472;}
	goto T474;
T474:;
	{object V117;
	register object V118;
	V117= CMPcaddr((V104));
	V118= Cnil;
	if((CMPcadr((V117)))==Cnil){
	goto T477;}
	goto T472;
	goto T477;
T477:;
	if((CMPcaddr((V117)))==Cnil){
	goto T479;}
	goto T472;
	goto T479;
T479:;
	if((CMPcadddr((V117)))==Cnil){
	goto T481;}
	goto T472;
	goto T481;
T481:;
	if(((long)length(CMPcar((V117))))<(64)){
	goto T483;}
	goto T472;
	goto T483;
T483:;
	{register object V119;
	register object V120;
	object V121;
	V119= CMPcar((V117));
	{object V122 =((V107))->s.s_plist;
	 object ind= VV[68];
	while(V122!=Cnil){
	if(V122->c.c_car==ind){
	V120= (V122->c.c_cdr->c.c_car);
	goto T488;
	}else V122=V122->c.c_cdr->c.c_cdr;}
	V120= Cnil;}
	goto T488;
T488:;
	V121= Cnil;
	goto T490;
T490:;
	if(!(((V119))==Cnil)){
	goto T491;}
	if(((V120))==Cnil){
	goto T494;}
	goto T486;
	goto T494;
T494:;
	if(((V118))==Cnil){
	goto T497;}
	V99= (*(LnkLI294))((V99),(V118));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T444;
	goto T497;
T497:;
	if(((V121))==Cnil){
	goto T485;}
	goto T486;
	goto T491;
T491:;
	{register object V123;
	V123= CMPcar((V119));
	if(!(equal(CMPcar((V120)),VV[69]))){
	goto T504;}
	goto T486;
	goto T504;
T504:;
	if((STREF(object,(V123),4))==(VV[71])){
	goto T510;}
	if(!((STREF(object,(V123),4))==(VV[72]))){
	goto T509;}
	if(!((CMPcar((V120)))==(Ct))){
	goto T509;}
	goto T510;
T510:;
	if((STREF(object,(V123),12))!=Cnil){
	goto T509;}
	if(!((STREF(object,(V123),16))==(VV[73]))){
	goto T508;}
	goto T509;
T509:;
	{object V124;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V125= vs_base[0];
	V124= list(2,STREF(object,(V123),0),V125);
	V118= make_cons((V124),(V118));}
	goto T508;
T508:;
	if(((*(LnkLI295))(CMPcar((V120)),STREF(object,(V123),20)))==Cnil){
	goto T507;}
	{register object x= CMPcar((V120)),V126= VV[74];
	while(V126!=Cnil)
	if(eql(x,V126->c.c_car)){
	goto T502;
	}else V126=V126->c.c_cdr;}
	if((STREF(object,(V123),16))==(VV[75])){
	goto T502;}
	if(((VV[76]->s.s_dbind))!=Cnil){
	goto T502;}
	{register object x= (V123),V127= STREF(object,CMPcadr((V104)),0);
	while(V127!=Cnil)
	if(eql(x,V127->c.c_car)){
	goto T532;
	}else V127=V127->c.c_cdr;
	goto T502;}
	goto T532;
T532:;
	goto T507;
T507:;
	if(((V118))!=Cnil){
	goto T533;}
	(void)((VFUN_NARGS=3,(*(LnkLI267))(VV[77],(V107),STREF(object,(V123),0))));
	goto T533;
T533:;
	V121= Ct;}
	goto T502;
T502:;
	V119= CMPcdr((V119));
	V120= CMPcdr((V120));
	goto T490;}
	goto T486;
T486:;
	goto T472;
	goto T485;
T485:;
	if(!(type_of((V105))==t_fixnum||
type_of((V105))==t_bignum||
type_of((V105))==t_ratio||
type_of((V105))==t_shortfloat||
type_of((V105))==t_longfloat||
type_of((V105))==t_complex)){
	goto T472;}}
	{object V128;
	{object V130 =((V107))->s.s_plist;
	 object ind= VV[68];
	while(V130!=Cnil){
	if(V130->c.c_car==ind){
	V129= (V130->c.c_cdr->c.c_car);
	goto T542;
	}else V130=V130->c.c_cdr->c.c_cdr;}
	V129= Cnil;}
	goto T542;
T542:;
	{object V132 =((V107))->s.s_plist;
	 object ind= VV[78];
	while(V132!=Cnil){
	if(V132->c.c_car==ind){
	V131= (V132->c.c_cdr->c.c_car);
	goto T543;
	}else V132=V132->c.c_cdr->c.c_cdr;}
	V131= Cnil;}
	goto T543;
T543:;
	{object V134 =((V107))->s.s_plist;
	 object ind= VV[68];
	while(V134!=Cnil){
	if(V134->c.c_car==ind){
	V133= (V134->c.c_cdr->c.c_car);
	goto T544;
	}else V134=V134->c.c_cdr->c.c_cdr;}
	V133= Cnil;}
	goto T544;
T544:;
	V128= list(5,(V107),V129,V131,small_fixnum(3),(*(LnkLI296))((V105),V133));
	(VV[79]->s.s_dbind)= make_cons((V128),(VV[79]->s.s_dbind));
	goto T470;}
	goto T472;
T472:;
	{object V135;
	{object V137 =((V107))->s.s_plist;
	 object ind= VV[78];
	while(V137!=Cnil){
	if(V137->c.c_car==ind){
	V136= (V137->c.c_cdr->c.c_car);
	goto T547;
	}else V137=V137->c.c_cdr->c.c_cdr;}
	V136= Cnil;}
	goto T547;
T547:;
	V135= ((V136)==(Ct)?Ct:Cnil);
	if(((V135))==Cnil){
	goto T470;}}
	goto T470;
T470:;
	if((CMPcadddr((V104)))==Cnil){
	goto T550;}
	V106= CMPcadddr((V104));
	goto T550;
T550:;
	(void)((*(LnkLI297))());
	{object V138;
	V138= list(6,VV[52],(V107),(V105),(V104),(V106),(VV[60]->s.s_dbind));
	(VV[25]->s.s_dbind)= make_cons((V138),(VV[25]->s.s_dbind));}
	{object V139;
	V139= make_cons((V107),(V105));
	(VV[80]->s.s_dbind)= make_cons((V139),(VV[80]->s.s_dbind));
	V140= (VV[80]->s.s_dbind);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}}
	{object V141 = Cnil;
	bds_unwind1;
	VMR8(V141)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-INLINE-STRING	*/

static object LI9(V144,V145)

object V144;object V145;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	if(((V145))!=Cnil){
	goto T561;}
	base[0]= Cnil;
	base[1]= VV[81];
	base[2]= (V144);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V146 = vs_base[0];
	VMR9(V146)}
	goto T561;
T561:;
	{register object V147;
	V147= (VFUN_NARGS=7,(*(LnkLI298))(small_fixnum(100),VV[82],VV[83],VV[84],small_fixnum(0),VV[85],Ct));
	base[0]= (V147);
	base[1]= VV[86];
	base[2]= (V144);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{register object V148;
	register long V149;
	V149= 0;
	V148= (V145);
	goto T574;
T574:;
	if(!((CMPcdr((V148)))==Cnil)){
	goto T575;}
	base[0]= (V147);
	base[1]= VV[87];
	base[2]= CMPmake_fixnum(V149);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T571;
	goto T575;
T575:;
	base[0]= (V147);
	base[1]= VV[88];
	base[2]= CMPmake_fixnum(V149);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V148= CMPcdr((V148));
	V149= (long)(V149)+1;
	goto T574;}
	goto T571;
T571:;
	{object V150 = (V147);
	VMR9(V150)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CS-PUSH	*/

static object LI10(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V151;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T590;
	else {
	V151= first;}
	--narg; goto T591;
	goto T590;
T590:;
	V151= Cnil;
	goto T591;
T591:;
	{object V152;
	(VV[89]->s.s_dbind)= number_plus((VV[89]->s.s_dbind),small_fixnum(1));
	V152= (VV[89]->s.s_dbind);
	{object V153;
	if(((V151))==Cnil){
	goto T598;}
	V153= make_cons((V151),(V152));
	goto T596;
	goto T598;
T598:;
	V153= (V152);
	goto T596;
T596:;
	(VV[19]->s.s_dbind)= make_cons((V153),(VV[19]->s.s_dbind));}
	{object V154 = (V152);
	VMR10(V154)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function F-TYPE	*/

static object LI11(V156)

register object V156;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	base[0]= (V156);
	base[1]= VV[70];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk299)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T601;}
	V156= STREF(object,(V156),20);
	goto T601;
T601:;
	if(((V156))==Cnil){
	goto T608;}
	base[0]= (V156);
	base[1]= VV[90];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk300)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T608;}
	{long V157 = 1;
	VMR11((object)V157)}
	goto T608;
T608:;
	{long V158 = 0;
	VMR11((object)V158)}
	base[0]=base[0];
}
/*	local entry for function PROCLAIMED-ARGD	*/

static object LI12(V161,V162)

register object V161;object V162;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{register long V163;
	register long V164;
	register object V165;
	register object V166;
	V163= (long)length((V161));
	V164= 8;
	V165= CMPmake_fixnum((long)(*(LnkLI301))((V162)));
	V166= Ct;
	goto T618;
T618:;
	if(eql(small_fixnum(0),(V165))){
	goto T620;}
	V163= (long)(V163)+((long)((fix((V165))) << (V164)));
	goto T620;
T620:;
	if(((V166))==Cnil){
	goto T624;}
	V164= 10;
	V166= Cnil;
	goto T624;
T624:;
	if(((V161))!=Cnil){
	goto T630;}
	{long V167 = V163;
	VMR12((object)V167)}
	goto T630;
T630:;
	V164= (long)(V164)+(2);
	{register object V169;
	V169= CMPcar((V161));
	V161= CMPcdr((V161));
	V168= (V169);}
	V165= CMPmake_fixnum((long)(*(LnkLI301))(V168));
	goto T618;}
}
/*	local entry for function WT-IF-PROCLAIMED	*/

static object LI13(V173,V174,V175)

register object V173;object V174;object V175;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	if(((VFUN_NARGS=1,(*(LnkLI303))((V173))))==Cnil){
	goto T642;}
	{register object x= (V173),V176= (VV[79]->s.s_dbind);
	while(V176!=Cnil)
	if(eql(x,V176->c.c_car->c.c_car) &&V176->c.c_car != Cnil){
	goto T646;
	}else V176=V176->c.c_cdr;
	goto T645;}
	goto T646;
T646:;
	V177= list(2,VV[92],(V173));
	V178= (*(LnkLI305))(VV[93],(V174));
	{object V180 =((V173))->s.s_plist;
	 object ind= VV[68];
	while(V180!=Cnil){
	if(V180->c.c_car==ind){
	V179= (V180->c.c_cdr->c.c_car);
	goto T648;
	}else V180=V180->c.c_cdr->c.c_cdr;}
	V179= Cnil;}
	goto T648;
T648:;
	{object V182 =((V173))->s.s_plist;
	 object ind= VV[78];
	while(V182!=Cnil){
	if(V182->c.c_car==ind){
	V181= (V182->c.c_cdr->c.c_car);
	goto T649;
	}else V182=V182->c.c_cdr->c.c_cdr;}
	V181= Cnil;}
	goto T649;
T649:;
	V183 = CMPmake_fixnum((long)(*(LnkLI306))(V179,V181));
	V184= list(4,VV[91],/* INLINE-ARGS */V177,/* INLINE-ARGS */V178,V183);
	(void)((VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V184)));
	{object V185 = Ct;
	VMR13(V185)}
	goto T645;
T645:;
	{register object V186;
	register object V187;
	object V188;
	V186= CMPmake_fixnum((long)length(CMPcar(CMPcaddr((V175)))));
	{object V190 =((V173))->s.s_plist;
	 object ind= VV[68];
	while(V190!=Cnil){
	if(V190->c.c_car==ind){
	V189= (V190->c.c_cdr->c.c_car);
	goto T653;
	}else V190=V190->c.c_cdr->c.c_cdr;}
	V189= Cnil;}
	goto T653;
T653:;
	V187= CMPmake_fixnum((long)length(V189));
	{object V193 =((V173))->s.s_plist;
	 object ind= VV[68];
	while(V193!=Cnil){
	if(V193->c.c_car==ind){
	V192= (V193->c.c_cdr->c.c_car);
	goto T655;
	}else V193=V193->c.c_cdr->c.c_cdr;}
	V192= Cnil;}
	goto T655;
T655:;
	{register object x= VV[69],V191= V192;
	while(V191!=Cnil)
	if(eql(x,V191->c.c_car)){
	V188= V191;
	goto T654;
	}else V191=V191->c.c_cdr;
	V188= Cnil;}
	goto T654;
T654:;
	if(((V188))==Cnil){
	goto T657;}
	base[0]= (V186);
	vs_top=(vs_base=base+0)+1;
	Lmonotonically_nonincreasing();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T659;}
	goto T650;
	goto T659;
T659:;{object V194;
	V195 = CMPmake_fixnum((long)length((V188)));
	V194= number_minus((V187),V195);
	if(V194==Cnil)goto T662;
	goto T650;
	goto T662;
T662:;}
	V196 = CMPmake_fixnum((long)length((V188)));
	V197= number_minus((V187),V196);
	(void)((VFUN_NARGS=4,(*(LnkLI267))(VV[94],(V173),/* INLINE-ARGS */V197,(V186))));
	goto T650;
	goto T657;
T657:;
	if(eql((V186),(V187))){
	goto T665;}
	(void)((VFUN_NARGS=4,(*(LnkLI267))(VV[95],(V173),(V187),(V186))));
	goto T650;
	goto T665;
T665:;
	(void)((VFUN_NARGS=2,(*(LnkLI267))(VV[96],(V173))));}
	goto T650;
T650:;
	{object V198 = Cnil;
	VMR13(V198)}
	goto T642;
T642:;
	{object V199 = Cnil;
	VMR13(V199)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VOLATILE	*/

static object LI14(V201)

object V201;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if((STREF(object,(V201),16))==Cnil){
	goto T668;}
	{object V202 = VV[97];
	VMR14(V202)}
	goto T668;
T668:;
	{object V203 = VV[98];
	VMR14(V203)}
	return Cnil;
}
/*	local entry for function REGISTER	*/

static object LI15(V205)

object V205;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(!(equal((VV[21]->s.s_dbind),VV[99]))){
	goto T671;}
	if(!((fix(STREF(object,(V205),24)))>=(fix((VV[100]->s.s_dbind))))){
	goto T671;}
	{object V206 = VV[101];
	VMR15(V206)}
	goto T671;
T671:;
	{object V207 = VV[102];
	VMR15(V207)}
	return Cnil;
}
/*	local entry for function VARARG-P	*/

static object LI16(V209)

object V209;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{object V211 =((V209))->s.s_plist;
	 object ind= VV[78];
	while(V211!=Cnil){
	if(V211->c.c_car==ind){
	V210= (V211->c.c_cdr->c.c_car);
	goto T677;
	}else V211=V211->c.c_cdr->c.c_cdr;}
	V210= Cnil;}
	goto T677;
T677:;
	if(equal(V210,Ct)){
	goto T675;}
	{object V212 = Cnil;
	VMR16(V212)}
	goto T675;
T675:;
	{register object V213;
	{object V214 =((V209))->s.s_plist;
	 object ind= VV[68];
	while(V214!=Cnil){
	if(V214->c.c_car==ind){
	V213= (V214->c.c_cdr->c.c_car);
	goto T678;
	}else V214=V214->c.c_cdr->c.c_cdr;}
	V213= Cnil;}
	goto T678;
T678:;
	goto T680;
T680:;
	if(((V213))!=Cnil){
	goto T681;}
	{object V215 = Ct;
	VMR16(V215)}
	goto T681;
T681:;
	if(!(type_of((V213))==t_cons)){
	goto T686;}
	goto T685;
	goto T686;
T686:;
	{object V216 = Cnil;
	VMR16(V216)}
	goto T685;
T685:;
	if(!((CMPcar((V213)))==(Ct))){
	goto T689;}
	goto T688;
	goto T689;
T689:;
	if(!((CMPcar((V213)))==(VV[69]))){
	goto T691;}
	goto T688;
	goto T691;
T691:;
	{object V217 = Cnil;
	VMR16(V217)}
	goto T688;
T688:;
	V213= CMPcdr((V213));
	goto T680;}
	return Cnil;
}
/*	local entry for function MAXARGS	*/

static object LI17(V219)

register object V219;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if((CMPcadddr((V219)))!=Cnil){
	goto T696;}
	if((CMPcaddr((V219)))==Cnil){
	goto T697;}
	goto T696;
T696:;
	{object V220 = small_fixnum(64);
	VMR17(V220)}
	goto T697;
T697:;
	base[0]= CMPmake_fixnum((long)length(CMPcar((V219))));
	base[1]= CMPmake_fixnum((long)length(CMPcadr((V219))));
	V221 = CMPmake_fixnum((long)length(CMPcar(CMPcddddr((V219)))));
	base[2]= number_times(small_fixnum(2),V221);
	vs_top=(vs_base=base+0)+3;
	Lplus();
	vs_top=sup;
	{object V222 = vs_base[0];
	VMR17(V222)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-ADDRESS	*/

static object LI18(V225,V226)

object V225;object V226;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V227;
	V227= list(2,(V225),(V226));
	(VV[22]->s.s_dbind)= make_cons((V227),(VV[22]->s.s_dbind));}
	{object V228;
	V228= (VV[23]->s.s_dbind);
	(VV[23]->s.s_dbind)= number_plus((VV[23]->s.s_dbind),small_fixnum(1));
	{object V229 = (V228);
	VMR18(V229)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFUN	*/

static object LI19(V235,V236,V237,V238,V239)

register object V235;register object V236;register object V237;object V238;object V239;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V240 =((V235))->s.s_plist;
	 object ind= VV[103];
	while(V240!=Cnil){
	if(V240->c.c_car==ind){
	if(((V240->c.c_cdr->c.c_car))==Cnil){
	goto T709;}
	goto T711;
	}else V240=V240->c.c_cdr->c.c_cdr;}
	goto T709;}
	goto T711;
T711:;
	{object V241 = Cnil;
	VMR19(V241)}
	goto T709;
T709:;
	if(((V238))==Cnil){
	goto T712;}
	V242= list(4,VV[104],list(2,VV[92],(V235)),(V238),VV[105]);
	(void)((VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V242)));
	goto T712;
T712:;
	{object V243;
	V243= (*(LnkLI307))((V235),(V236),(V237));
	if(((V243))==Cnil){
	goto T718;}
	goto T715;
	goto T718;
T718:;
	if(((*(LnkLI308))((V235)))==Cnil){
	goto T721;}
	{object V244;
	V244= CMPcadddr(CMPcaddr((V237)));
	if(((V244))==Cnil){
	goto T725;}
	V245= list(2,VV[92],(V235));
	V246= (*(LnkLI305))(VV[107],(V236));
	V247 = CMPmake_fixnum((long)length(CMPcar(CMPcaddr((V237)))));
	V248= (*(LnkLI309))(CMPcaddr((V237)));
	V249= (*(LnkLI302))(/* INLINE-ARGS */V248,small_fixnum(8));
	V250= number_plus(V247,/* INLINE-ARGS */V249);
	base[0]= Cnil;
	base[1]= VV[108];
	base[2]= (V236);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V251= vs_base[0];
	V252= list(5,VV[106],/* INLINE-ARGS */V245,/* INLINE-ARGS */V246,/* INLINE-ARGS */V250,(*(LnkLI305))(V251,VV[109]));
	(void)((VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V252)));
	goto T715;
	goto T725;
T725:;
	V253= list(2,VV[92],(V235));
	V254= (*(LnkLI305))(VV[111],(V236));
	V255 = CMPmake_fixnum((long)length(CMPcar(CMPcaddr((V237)))));
	V256= (*(LnkLI309))(CMPcaddr((V237)));
	V257= (*(LnkLI302))(/* INLINE-ARGS */V256,small_fixnum(8));
	V258= list(4,VV[110],/* INLINE-ARGS */V253,/* INLINE-ARGS */V254,number_plus(V255,/* INLINE-ARGS */V257));
	(void)((VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V258)));
	goto T715;}
	goto T721;
T721:;
	if(!(type_of((V236))==t_fixnum||
type_of((V236))==t_bignum||
type_of((V236))==t_ratio||
type_of((V236))==t_shortfloat||
type_of((V236))==t_longfloat||
type_of((V236))==t_complex)){
	goto T732;}
	princ_str("\nstatic void L",VV[32]);
	(void)((*(LnkLI278))((V236)));
	princ_str("();",VV[32]);
	V259= list(2,VV[92],(V235));
	V260= list(3,VV[112],/* INLINE-ARGS */V259,(*(LnkLI305))(VV[113],(V236)));
	(void)((VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V260)));
	goto T715;
	goto T732;
T732:;
	princ_char(10,VV[32]);
	(void)((*(LnkLI278))((V236)));
	princ_str("();",VV[32]);
	V261= list(2,VV[92],(V235));
	V262= list(3,VV[112],/* INLINE-ARGS */V261,(*(LnkLI305))(VV[114],(V236)));
	(void)((VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V262)));}
	goto T715;
T715:;
	if(!(number_compare((VV[115]->s.s_dbind),small_fixnum(2))<0)){
	goto T743;}
	{object V263 = sputprop((V235),VV[116],Ct);
	VMR19(V263)}
	goto T743;
T743:;
	{object V264 = Cnil;
	VMR19(V264)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-DEBUG	*/

static object LI20(V267,V268)

object V267;object V268;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V269 = putprop((V267),(V268),VV[117]);
	VMR20(V269)}
	return Cnil;
}
/*	local entry for function T3DEFUN	*/

static object LI21(V275,V276,V277,V278,V279)

register object V275;register object V276;register object V277;object V278;object V279;
{	 VMB21 VMS21 VMV21
	bds_check;
	goto TTL;
TTL:;
	{register object V280;
	V280= Cnil;
	bds_bind(VV[0],list(2,VV[52],(V275)));
	bds_bind(VV[21],(*(LnkLI310))(CMPcadr((V277))));
	bds_bind(VV[118],Cnil);
	{register object V281;
	register object V282;
	V281= (VV[79]->s.s_dbind);
	V282= CMPcar((V281));
	goto T755;
T755:;
	if(!(((V281))==Cnil)){
	goto T756;}
	goto T750;
	goto T756;
T756:;{object V283;
	base[4]= CMPcadddr((V282));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk311)();
	vs_top=sup;
	V283= vs_base[0];
	if(V283==Cnil)goto T761;
	goto T760;
	goto T761;
T761:;}
	base[4]= VV[119];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T760;
T760:;
	if((CMPcar((V282)))==((V275))){
	goto T766;}
	goto T765;
	goto T766;
T766:;
	if((CMPcadr(CMPcddddr((V282))))==Cnil){
	goto T768;}
	goto T765;
	goto T768;
T768:;
	V280= (V282);
	if(((V280))==Cnil){
	goto T750;}
	goto T751;
	goto T765;
T765:;
	V281= CMPcdr((V281));
	V282= CMPcar((V281));
	goto T755;}
	goto T751;
T751:;
	if(((VFUN_NARGS=1,(*(LnkLI303))((V275))))!=Cnil){
	goto T776;}
	{object V284;
	V284= list(4,(V275),(V276),CMPcadr((V280)),CMPcaddr((V280)));
	(VV[30]->s.s_dbind)= make_cons((V284),(VV[30]->s.s_dbind));}
	goto T776;
T776:;
	(void)((*(LnkLI312))(STREF(object,CMPcadr((V277)),4),small_fixnum(0)));
	base[3]= VV[120];
	{object V285= CMPcaddr((V280));
	if((V285!= VV[90]))goto T784;
	base[4]= VV[121];
	goto T783;
	goto T784;
T784:;
	if((V285!= VV[143]))goto T785;
	base[4]= VV[122];
	goto T783;
	goto T785;
T785:;
	if((V285!= VV[144]))goto T786;
	base[4]= VV[123];
	goto T783;
	goto T786;
T786:;
	if((V285!= VV[145]))goto T787;
	base[4]= VV[124];
	goto T783;
	goto T787;
T787:;
	base[4]= VV[125];}
	goto T783;
T783:;
	base[5]= (V275);
	base[6]= (V276);
	base[7]= (V277);
	base[8]= (V279);
	base[9]= (V280);
	vs_top=(vs_base=base+3)+7;
	(void) (*Lnk313)();
	vs_top=sup;
	goto T748;
	goto T750;
T750:;
	if(((*(LnkLI308))((V275)))==Cnil){
	goto T794;}
	(void)((*(LnkLI312))(STREF(object,CMPcadr((V277)),4),small_fixnum(0)));
	base[3]= VV[126];
	base[4]= VV[125];
	base[5]= (V275);
	base[6]= (V276);
	base[7]= (V277);
	base[8]= (V279);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk313)();
	vs_top=sup;
	goto T748;
	goto T794;
T794:;
	(void)((*(LnkLI312))(STREF(object,CMPcadr((V277)),4),small_fixnum(2)));
	base[3]= VV[127];
	base[4]= VV[128];
	base[5]= (V275);
	base[6]= (V276);
	base[7]= (V277);
	base[8]= (V279);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk313)();
	vs_top=sup;
	goto T748;
T748:;
	(void)((*(LnkLI314))((V276)));
	{object V286 = (*(LnkLI315))((V275),(V277));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR21(V286)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for T3DEFUN-AUX	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	bds_check;
	{object V287;
	object V288;
	V287=(base[0]);
	bds_bind(VV[129],base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V288=(base[2]);
	vs_top=sup;
	bds_bind(VV[19],Cnil);
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],small_fixnum(0));
	bds_bind(VV[132],small_fixnum(0));
	bds_bind(VV[133],small_fixnum(0));
	bds_bind(VV[134],Cnil);
	bds_bind(VV[135],make_cons((VV[129]->s.s_dbind),Cnil));
	bds_bind(VV[136],(VV[129]->s.s_dbind));
	(VV[138]->s.s_dbind)= number_plus((VV[138]->s.s_dbind),small_fixnum(1));
	bds_bind(VV[137],(VV[138]->s.s_dbind));
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],Cnil);
	bds_bind(VV[142],small_fixnum(0));
	base[16]= (V287);
	{object V289;
	V289= (V288);
	 vs_top=base+17;
	 while(V289!=Cnil)
	 {vs_push((V289)->c.c_car);V289=(V289)->c.c_cdr;}
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

static object LI23(V295,V296,V297,V298,V299)

object V295;object V296;object V297;object V298;object V299;
{	 VMB23 VMS23 VMV23
	bds_check;
	goto TTL;
TTL:;
	{object V300;
	object V301;
	V300= Cnil;
	V301= CMPcaaddr((V297));
	{register object V302;
	object V303;
	V303= CMPcadr((V299));
	V302= (V301);
	goto T821;
T821:;
	if(!(((V302))==Cnil)){
	goto T822;}
	goto T818;
	goto T822;
T822:;
	if(!((STREF(object,CMPcar((V302)),4))==(VV[72]))){
	goto T828;}
	{object V304;
	V304= make_cons(CMPcar((V302)),STREF(object,CMPcar((V302)),16));
	V300= make_cons((V304),(V300));
	goto T826;}
	goto T828;
T828:;
	V305= CMPcar((V302));
	{object V307= CMPcar((V303));
	if((V307!= VV[90]))goto T833;
	V306= VV[90];
	goto T832;
	goto T833;
T833:;
	if((V307!= VV[143]))goto T834;
	V306= VV[143];
	goto T832;
	goto T834;
T834:;
	if((V307!= VV[144]))goto T835;
	V306= VV[144];
	goto T832;
	goto T835;
T835:;
	if((V307!= VV[145]))goto T836;
	V306= VV[145];
	goto T832;
	goto T836;
T836:;
	V306= VV[75];}
	goto T832;
T832:;
	V308= Ct;
	STSET(object,/* INLINE-ARGS */V305,4, V306);
	(void)(V306);
	goto T826;
T826:;
	V309= CMPcar((V302));
	(VV[89]->s.s_dbind)= number_plus((VV[89]->s.s_dbind),small_fixnum(1));
	V310= Ct;
	STSET(object,/* INLINE-ARGS */V309,16, (VV[89]->s.s_dbind));
	(void)((VV[89]->s.s_dbind));
	V302= CMPcdr((V302));
	V303= CMPcdr((V303));
	goto T821;}
	goto T818;
T818:;
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[146],(V295))));
	princ_str("\nstatic ",VV[32]);
	V311= (*(LnkLI281))(CMPcaddr((V299)));
	V312= (*(LnkLI282))(/* INLINE-ARGS */V311);
	(void)((*(LnkLI278))(/* INLINE-ARGS */V312));
	princ_str("LI",VV[32]);
	(void)((*(LnkLI278))((V296)));
	princ_str("();",VV[32]);
	princ_str("\nstatic ",VV[26]);
	V313= (*(LnkLI281))(CMPcaddr((V299)));
	V314= (*(LnkLI282))(/* INLINE-ARGS */V313);
	(void)((*(LnkLI275))(/* INLINE-ARGS */V314));
	princ_str("LI",VV[26]);
	(void)((*(LnkLI275))((V296)));
	princ_char(40,VV[26]);
	(void)((*(LnkLI317))((V301),CMPcadr((V299))));
	{object V315;
	V315= (VV[137]->s.s_dbind);
	if(((VV[148]->s.s_dbind))==Cnil){
	goto T860;}
	base[1]= make_cons((V295),(V301));
	goto T858;
	goto T860;
T860:;
	base[1]= Cnil;
	goto T858;
T858:;
	bds_bind(VV[147],base[1]);
	bds_bind(VV[135],(VV[135]->s.s_dbind));
	princ_str("\n{	",VV[26]);
	(void)((*(LnkLI318))(STREF(object,CMPcadr((V297)),4),(V296),VV[149]));
	princ_str(" VMB",VV[26]);
	(void)((*(LnkLI275))((V315)));
	princ_str(" VMS",VV[26]);
	(void)((*(LnkLI275))((V315)));
	princ_str(" VMV",VV[26]);
	(void)((*(LnkLI275))((V315)));
	if(((V298))==Cnil){
	goto T872;}
	princ_str("\n	bds_check;",VV[26]);
	goto T872;
T872:;
	if(((VV[150]->s.s_dbind))==Cnil){
	goto T876;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T876;
T876:;
	if(((VV[147]->s.s_dbind))==Cnil){
	goto T880;}
	(VV[135]->s.s_dbind)= make_cons(VV[151],(VV[135]->s.s_dbind));
	princ_str("\n	goto TTL;",VV[26]);
	princ_str("\nTTL:;",VV[26]);
	goto T880;
T880:;
	{register object V317;
	register object V318;
	V317= (V300);
	V318= CMPcar((V317));
	goto T892;
T892:;
	if(!(((V317))==Cnil)){
	goto T893;}
	goto T888;
	goto T893;
T893:;
	princ_str("\n	bds_bind(VV[",VV[26]);
	(void)((*(LnkLI275))(CMPcdr((V318))));
	princ_str("],V",VV[26]);
	(void)((*(LnkLI275))(STREF(object,CMPcar((V318)),16)));
	princ_str(");",VV[26]);
	(VV[135]->s.s_dbind)= make_cons(VV[152],(VV[135]->s.s_dbind));
	V320= CMPcar((V318));
	V321= Ct;
	STSET(object,/* INLINE-ARGS */V320,4, VV[72]);
	(void)(VV[72]);
	V322= CMPcar((V318));
	V323= CMPcdr((V318));
	V324= Ct;
	STSET(object,/* INLINE-ARGS */V322,16, /* INLINE-ARGS */V323);
	(void)(/* INLINE-ARGS */V323);
	V317= CMPcdr((V317));
	V318= CMPcar((V317));
	goto T892;}
	goto T888;
T888:;
	base[3]= CMPcaddr(CMPcddr((V297)));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk319)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),(VV[131]->s.s_dbind))==0)){
	goto T916;}
	if(((VV[139]->s.s_dbind))!=Cnil){
	goto T916;}
	if(((VV[141]->s.s_dbind))!=Cnil){
	goto T916;}
	goto T914;
	goto T916;
T916:;
	princ_str("\n	base[0]=base[0];",VV[26]);
	goto T914;
T914:;
	V325= (*(LnkLI281))(CMPcaddr((V299)));
	if(!(equal(VV[153],/* INLINE-ARGS */V325))){
	goto T923;}
	princ_str("\n	return Cnil;",VV[26]);
	goto T923;
T923:;
	princ_str("\n}",VV[26]);
	{object V326 = (*(LnkLI320))((V315),CMPcaddr((V299)));
	bds_unwind1;
	bds_unwind1;
	VMR23(V326)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-UP-VAR-CVS	*/

static object LI24(V328)

object V328;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	if(((VV[154]->s.s_dbind))==Cnil){
	goto T930;}
	V329= (*(LnkLI321))();
	V330= Ct;
	STSET(object,(V328),8, /* INLINE-ARGS */V329);
	{object V331 = /* INLINE-ARGS */V329;
	VMR24(V331)}
	goto T930;
T930:;
	V332= (*(LnkLI322))();
	V333= Ct;
	STSET(object,(V328),8, /* INLINE-ARGS */V332);
	{object V334 = /* INLINE-ARGS */V332;
	VMR24(V334)}
	return Cnil;
}
/*	local entry for function T3DEFUN-VARARG	*/

static object LI25(V339,V340,V341,V342)

object V339;object V340;object V341;object V342;
{	 VMB25 VMS25 VMV25
	bds_check;
	goto TTL;
TTL:;
	{object V343;
	register object V344;
	object V345;
	object V346;
	object V347;
	object V348;
	object V349;
	object V350;
	V343= Cnil;
	bds_bind(VV[154],Cnil);
	base[1]= Cnil;
	V344= Cnil;
	V345= Ct;
	V346= Cnil;
	bds_bind(VV[155],small_fixnum(0));
	V347= Cnil;
	V348= CMPcaddr((V341));
	V349= Cnil;{object V351;
	V351= CMPcaddr((V348));
	if(V351==Cnil)goto T940;
	V350= V351;
	goto T939;
	goto T940;
T940:;}{object V352;
	V352= CMPcadr((V348));
	if(V352==Cnil)goto T942;
	V350= V352;
	goto T939;
	goto T942;
T942:;}
	V350= CMPcadddr((V348));
	goto T939;
T939:;
	{object V353;
	register object V354;
	V353= CMPcar((V348));
	V354= CMPcar((V353));
	goto T948;
T948:;
	if(!(((V353))==Cnil)){
	goto T949;}
	goto T944;
	goto T949;
T949:;
	{object V355;
	(VV[89]->s.s_dbind)= number_plus((VV[89]->s.s_dbind),small_fixnum(1));
	V355= list(2,VV[156],(VV[89]->s.s_dbind));
	V343= make_cons((V355),(V343));}
	V353= CMPcdr((V353));
	V354= CMPcar((V353));
	goto T948;}
	goto T944;
T944:;
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[157],(V339))));
	{object V356;
	V356= VV[158];
	princ_str("\nstatic object LI",VV[26]);
	(void)((*(LnkLI275))((V340)));
	princ_char(40,VV[26]);
	if(((V343))==Cnil){
	goto T968;}
	{object V357;
	V357= (V343);
	goto T972;
T972:;
	if(((V357))!=Cnil){
	goto T973;}
	goto T968;
	goto T973;
T973:;
	princ_str("object ",VV[26]);
	(void)((*(LnkLI275))(CMPcar((V357))));
	V356= (VFUN_NARGS=3,(*(LnkLI323))(VV[159],(V356),VV[160]));
	if(!((CMPcdr((V357)))==Cnil)){
	goto T983;}
	goto T982;
	goto T983;
T983:;
	princ_char(44,VV[26]);
	V356= (VFUN_NARGS=3,(*(LnkLI323))(VV[159],(V356),VV[161]));
	goto T982;
T982:;
	V357= CMPcdr((V357));
	goto T972;}
	goto T968;
T968:;
	if(((V350))==Cnil){
	goto T991;}
	if(((V343))==Cnil){
	goto T994;}
	princ_char(44,VV[26]);
	V356= (VFUN_NARGS=3,(*(LnkLI323))(VV[159],(V356),VV[162]));
	goto T994;
T994:;
	princ_str("object first,...",VV[26]);
	V356= (VFUN_NARGS=3,(*(LnkLI323))(VV[159],(V356),VV[163]));
	goto T991;
T991:;
	princ_char(41,VV[26]);
	princ_str("\nstatic object LI",VV[32]);
	(void)((*(LnkLI278))((V340)));
	princ_char(40,VV[32]);
	(void)((*(LnkLI278))((V356)));
	princ_str(");",VV[32]);}
	{object V358;
	V358= (VV[137]->s.s_dbind);
	if((VV[148]->s.s_dbind)==Cnil){
	base[5]= Cnil;
	goto T1011;}
	if((CMPcaddr((V348)))==Cnil){
	goto T1012;}
	base[5]= Cnil;
	goto T1011;
	goto T1012;
T1012:;
	{object V359;
	object V360;
	V359= CMPcar((V348));
	V360= CMPcar((V359));
	goto T1019;
T1019:;
	if(!(((V359))==Cnil)){
	goto T1020;}
	goto T1014;
	goto T1020;
T1020:;
	if((STREF(object,(V360),12))==Cnil){
	goto T1024;}
	goto T1015;
	goto T1024;
T1024:;
	V359= CMPcdr((V359));
	V360= CMPcar((V359));
	goto T1019;}
	goto T1015;
T1015:;
	base[5]= Cnil;
	goto T1011;
	goto T1014;
T1014:;
	if((CMPcadr((V348)))==Cnil){
	goto T1032;}
	base[5]= Cnil;
	goto T1011;
	goto T1032;
T1032:;
	if((CMPcar(CMPcddddr((V348))))==Cnil){
	goto T1034;}
	base[5]= Cnil;
	goto T1011;
	goto T1034;
T1034:;
	base[5]= make_cons((V339),CMPcar((V348)));
	goto T1011;
T1011:;
	bds_bind(VV[147],base[5]);
	bds_bind(VV[135],(VV[135]->s.s_dbind));
	princ_str("\n{	",VV[26]);
	if(((V350))==Cnil){
	goto T1038;}
	princ_str("\n	va_list ap;",VV[26]);
	goto T1038;
T1038:;
	princ_str("\n	int narg = VFUN_NARGS;",VV[26]);
	(void)((*(LnkLI318))(STREF(object,CMPcadr((V341)),4),(V340),VV[149]));
	princ_str(" VMB",VV[26]);
	(void)((*(LnkLI275))((V358)));
	princ_str(" VMS",VV[26]);
	(void)((*(LnkLI275))((V358)));
	princ_str(" VMV",VV[26]);
	(void)((*(LnkLI275))((V358)));
	if(((V342))==Cnil){
	goto T1052;}
	princ_str("\n	bds_check;",VV[26]);
	goto T1052;
T1052:;
	if(((VV[150]->s.s_dbind))==Cnil){
	goto T1056;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T1056;
T1056:;
	if((V350)!=Cnil){
	goto T1060;}
	princ_str("\n	if ( narg!= ",VV[26]);
	V361 = CMPmake_fixnum((long)length((V343)));
	(void)((*(LnkLI275))(V361));
	princ_str(") vfun_wrong_number_of_args(small_fixnum(",VV[26]);
	V362 = CMPmake_fixnum((long)length((V343)));
	(void)((*(LnkLI275))(V362));
	princ_str("));",VV[26]);
	goto T1060;
T1060:;
	{object V363;
	object V364;
	V363= CMPcar((V348));
	V364= CMPcar((V363));
	goto T1071;
T1071:;
	if(!(((V363))==Cnil)){
	goto T1072;}
	goto T1067;
	goto T1072;
T1072:;
	base[9]= (V364);
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	V363= CMPcdr((V363));
	V364= CMPcar((V363));
	goto T1071;}
	goto T1067;
T1067:;
	{object V365;
	object V366;
	V365= CMPcadr((V348));
	V366= CMPcar((V365));
	goto T1087;
T1087:;
	if(!(((V365))==Cnil)){
	goto T1088;}
	goto T1083;
	goto T1088;
T1088:;
	base[9]= CMPcar((V366));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((CMPcaddr((V366)))==Cnil){
	goto T1094;}
	base[9]= CMPcaddr((V366));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	goto T1094;
T1094:;
	V365= CMPcdr((V365));
	V366= CMPcar((V365));
	goto T1087;}
	goto T1083;
T1083:;
	if((CMPcaddr((V348)))==Cnil){
	goto T1103;}
	base[7]= CMPcaddr((V348));
	vs_top=(vs_base=base+7)+1;
	L26(base);
	vs_top=sup;
	goto T1103;
T1103:;
	{object V367;
	object V368;
	V367= CMPcar(CMPcddddr((V348)));
	V368= CMPcar((V367));
	goto T1110;
T1110:;
	if(!(((V367))==Cnil)){
	goto T1111;}
	goto T1066;
	goto T1111;
T1111:;
	base[9]= CMPcadr((V368));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	if((CMPcadddr((V368)))==Cnil){
	goto T1117;}
	base[9]= CMPcadddr((V368));
	vs_top=(vs_base=base+9)+1;
	L26(base);
	vs_top=sup;
	goto T1117;
T1117:;
	V367= CMPcdr((V367));
	V368= CMPcar((V367));
	goto T1110;}
	goto T1066;
T1066:;
	if((CMPcadr((V348)))!=Cnil){
	goto T1127;}
	if((CMPcaddr((V348)))!=Cnil){
	goto T1127;}
	if((CMPcadddr((V348)))==Cnil){
	goto T1126;}
	goto T1127;
T1127:;
	if(((V349))!=Cnil){
	goto T1126;}
	V349= Ct;
	princ_str("\n	va_start(ap,first);",VV[26]);
	goto T1126;
T1126:;
	if(((VV[164]->s.s_dbind))!=Cnil){
	goto T1140;}
	if(((VV[165]->s.s_dbind))==Cnil){
	goto T1138;}
	goto T1140;
T1140:;
	if((CMPcar((V348)))==Cnil){
	goto T1138;}
	princ_str("\n	if(narg <",VV[26]);
	V369 = CMPmake_fixnum((long)length(CMPcar((V348))));
	(void)((*(LnkLI275))(V369));
	princ_str(") too_few_arguments();",VV[26]);
	goto T1138;
T1138:;
	{object V370;
	object V371;
	V370= CMPcar((V348));
	V371= CMPcar((V370));
	goto T1152;
T1152:;
	if(!(((V370))==Cnil)){
	goto T1153;}
	goto T1148;
	goto T1153;
T1153:;
	(void)((*(LnkLI324))((V371)));
	V370= CMPcdr((V370));
	V371= CMPcar((V370));
	goto T1152;}
	goto T1148;
T1148:;
	{object V372;
	object V373;
	V372= CMPcadr((V348));
	V373= CMPcar((V372));
	goto T1167;
T1167:;
	if(!(((V372))==Cnil)){
	goto T1168;}
	goto T1163;
	goto T1168;
T1168:;
	(void)((*(LnkLI324))(CMPcar((V373))));
	V372= CMPcdr((V372));
	V373= CMPcar((V372));
	goto T1167;}
	goto T1163;
T1163:;
	if((CMPcaddr((V348)))==Cnil){
	goto T1178;}
	(void)((*(LnkLI324))(CMPcaddr((V348))));
	goto T1178;
T1178:;
	if(((VV[154]->s.s_dbind))==Cnil){
	goto T1184;}
	V346= (VV[130]->s.s_dbind);
	goto T1182;
	goto T1184;
T1184:;
	V346= (VV[142]->s.s_dbind);
	goto T1182;
T1182:;
	{object V374;
	object V375;
	V374= CMPcar(CMPcddddr((V348)));
	V375= CMPcar((V374));
	goto T1190;
T1190:;
	if(!(((V374))==Cnil)){
	goto T1191;}
	goto T1186;
	goto T1191;
T1191:;
	(void)((*(LnkLI324))(CMPcadr((V375))));
	V374= CMPcdr((V374));
	V375= CMPcar((V374));
	goto T1190;}
	goto T1186;
T1186:;
	{object V376;
	object V377;
	V376= CMPcar(CMPcddddr((V348)));
	V377= CMPcar((V376));
	goto T1205;
T1205:;
	if(!(((V376))==Cnil)){
	goto T1206;}
	goto T1201;
	goto T1206;
T1206:;
	(void)((*(LnkLI324))(CMPcadddr((V377))));
	V376= CMPcdr((V376));
	V377= CMPcar((V376));
	goto T1205;}
	goto T1201;
T1201:;
	{object V378;
	object V379;
	V379= CMPcar((V348));
	V378= (V343);
	goto T1219;
T1219:;
	if(((V378))!=Cnil){
	goto T1220;}
	goto T1216;
	goto T1220;
T1220:;
	(void)((*(LnkLI325))(CMPcar((V379)),CMPcar((V378))));
	V378= CMPcdr((V378));
	V379= CMPcdr((V379));
	goto T1219;}
	goto T1216;
T1216:;
	if((CMPcadr((V348)))==Cnil){
	goto T1229;}
	bds_bind(VV[134],(VV[134]->s.s_dbind));
	bds_bind(VV[135],(VV[135]->s.s_dbind));
	bds_bind(VV[133],(VV[133]->s.s_dbind));
	princ_str("\n	narg = narg - ",VV[26]);
	V380 = CMPmake_fixnum((long)length((V343)));
	(void)((*(LnkLI275))(V380));
	princ_char(59,VV[26]);
	{object V381;
	V381= Ct;
	{object V382;
	object V383;
	V382= CMPcadr((V348));
	V383= CMPcar((V382));
	goto T1240;
T1240:;
	if(!(((V382))==Cnil)){
	goto T1241;}
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T1232;
	goto T1241;
T1241:;
	{object V384;
	(VV[166]->s.s_dbind)= number_plus((VV[166]->s.s_dbind),small_fixnum(1));
	V384= make_cons((VV[166]->s.s_dbind),Cnil);
	V344= make_cons((V384),(V344));}
	princ_str("\n	if (",VV[26]);
	if((CMPcdr((V344)))==Cnil){
	goto T1254;}
	V385= VV[167];
	goto T1252;
	goto T1254;
T1254:;
	V385= VV[168];
	goto T1252;
T1252:;
	(void)((*(LnkLI275))(V385));
	princ_str("narg <= 0) ",VV[26]);
	(CMPcar((V344)))->c.c_cdr = Ct;
	(void)(CMPcar((V344)));
	princ_str("goto T",VV[26]);
	(void)((*(LnkLI275))(CMPcar(CMPcar((V344)))));
	princ_char(59,VV[26]);
	princ_str("\n	else {",VV[26]);
	if(((V349))!=Cnil){
	goto T1264;}
	V349= Ct;
	princ_str("\n	va_start(ap,first);",VV[26]);
	goto T1264;
T1264:;
	V386= CMPcar((V383));
	if(((V381))==Cnil){
	goto T1273;}
	V387= make_cons(VV[169],Cnil);
	goto T1271;
	goto T1273;
T1273:;
	V387= make_cons(VV[170],Cnil);
	goto T1271;
T1271:;
	(void)((*(LnkLI325))(/* INLINE-ARGS */V386,V387));
	V381= Cnil;
	princ_char(125,VV[26]);
	if((CMPcaddr((V383)))==Cnil){
	goto T1279;}
	(void)((*(LnkLI325))(CMPcaddr((V383)),Ct));
	goto T1279;
T1279:;
	V382= CMPcdr((V382));
	V383= CMPcar((V382));
	goto T1240;}}
	goto T1232;
T1232:;
	V344= nreverse((V344));
	{object V388;
	(VV[166]->s.s_dbind)= number_plus((VV[166]->s.s_dbind),small_fixnum(1));
	V388= make_cons((VV[166]->s.s_dbind),Cnil);
	princ_str("\n	--narg; ",VV[26]);
	((V388))->c.c_cdr = Ct;
	princ_str("goto T",VV[26]);
	(void)((*(LnkLI275))(CMPcar((V388))));
	princ_char(59,VV[26]);
	{object V389;
	object V390;
	V389= CMPcadr((V348));
	V390= CMPcar((V389));
	goto T1302;
T1302:;
	if(!(((V389))==Cnil)){
	goto T1303;}
	goto T1298;
	goto T1303;
T1303:;
	if((CMPcdr(CMPcar((V344))))==Cnil){
	goto T1307;}
	princ_str("\n	goto T",VV[26]);
	(void)((*(LnkLI275))(CMPcar(CMPcar((V344)))));
	princ_char(59,VV[26]);
	princ_str("\nT",VV[26]);
	(void)((*(LnkLI275))(CMPcar(CMPcar((V344)))));
	princ_str(":;",VV[26]);
	goto T1307;
T1307:;
	{object V391;
	V391= CMPcar((V344));
	V344= CMPcdr((V344));}
	(void)((*(LnkLI326))(CMPcar((V390)),CMPcadr((V390))));
	if((CMPcaddr((V390)))==Cnil){
	goto T1322;}
	(void)((*(LnkLI325))(CMPcaddr((V390)),Cnil));
	goto T1322;
T1322:;
	V389= CMPcdr((V389));
	V390= CMPcar((V389));
	goto T1302;}
	goto T1298;
T1298:;
	if((CMPcdr((V388)))==Cnil){
	goto T1229;}
	princ_str("\n	goto T",VV[26]);
	(void)((*(LnkLI275))(CMPcar((V388))));
	princ_char(59,VV[26]);
	princ_str("\nT",VV[26]);
	(void)((*(LnkLI275))(CMPcar((V388))));
	princ_str(":;",VV[26]);}
	goto T1229;
T1229:;
	if((CMPcaddr((V348)))==Cnil){
	goto T1339;}
	V347= (VFUN_NARGS=0,(*(LnkLI327))());
	{object V392;
	V392= CMPcadr((V348));
	if(((V392))==Cnil){
	goto T1347;}
	goto T1344;
	goto T1347;
T1347:;
	princ_str("\n	narg= narg - ",VV[26]);
	V393 = CMPmake_fixnum((long)length(CMPcar((V348))));
	(void)((*(LnkLI275))(V393));
	princ_char(59,VV[26]);}
	goto T1344;
T1344:;
	if(((V349))!=Cnil){
	goto T1352;}
	V349= Ct;
	princ_str("\n	va_start(ap,first);",VV[26]);
	goto T1352;
T1352:;
	princ_str("\n	V",VV[26]);
	(void)((*(LnkLI275))((V347)));
	princ_str(" = ",VV[26]);
	if(!((STREF(object,CMPcaddr((V348)),20))==(VV[172]))){
	goto T1363;}
	base[7]= Ct;
	goto T1362;
	goto T1363;
T1363:;
	base[7]= (VV[171]->s.s_dbind);
	goto T1362;
T1362:;
	bds_bind(VV[171],base[7]);
	if((CMPcadddr((V348)))==Cnil){
	goto T1367;}
	if(((VV[171]->s.s_dbind))==Cnil){
	goto T1370;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_MAKE_LIST(narg));",VV[26]);
	goto T1365;
	goto T1370;
T1370:;
	princ_str("make_list(narg);",VV[26]);
	goto T1365;
	goto T1367;
T1367:;
	if(((VV[171]->s.s_dbind))==Cnil){
	goto T1375;}
	princ_str("(ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));",VV[26]);
	goto T1365;
	goto T1375;
T1375:;
	princ_str("list_vector_new(narg,first,ap);",VV[26]);
	goto T1365;
T1365:;
	V394= CMPcaddr((V348));
	V395= list(2,VV[156],(V347));
	V396= (*(LnkLI325))(/* INLINE-ARGS */V394,/* INLINE-ARGS */V395);
	bds_unwind1;
	goto T1339;
T1339:;
	if((CMPcadddr((V348)))==Cnil){
	goto T1379;}
	{object V397;
	V397= CMPcaddr((V348));
	if(((V397))==Cnil){
	goto T1385;}
	goto T1382;
	goto T1385;
T1385:;
	{object V398;
	V398= CMPcadr((V348));
	if(((V398))==Cnil){
	goto T1389;}
	goto T1382;
	goto T1389;
T1389:;
	princ_str("\n	narg= narg - ",VV[26]);
	V399 = CMPmake_fixnum((long)length(CMPcar((V348))));
	(void)((*(LnkLI275))(V399));
	princ_char(59,VV[26]);}}
	goto T1382;
T1382:;
	if(((V349))!=Cnil){
	goto T1394;}
	V349= Ct;
	princ_str("\n	va_start(ap,first);",VV[26]);
	goto T1394;
T1394:;
	{object V400;
	object V401= CMPcar(CMPcddddr((V348)));
	if(V401==Cnil){
	V345= Cnil;
	goto T1401;}
	base[7]=V400=MMcons(Cnil,Cnil);
	goto T1402;
T1402:;
	(V400->c.c_car)= CMPcaddr((V401->c.c_car));
	if((V401=MMcdr(V401))==Cnil){
	V345= base[7];
	goto T1401;}
	V400=MMcdr(V400)=MMcons(Cnil,Cnil);
	goto T1402;}
	goto T1401;
T1401:;
	{object V402;
	object V403;
	V403= CMPmake_fixnum((long)length(CMPcar(CMPcddddr((V348)))));
	V402= Cnil;
	{register object V404;
	object V405;
	object V406;
	V404= (V345);
	V405= CMPcar(CMPcddddr((V348)));
	V406= CMPcar((V405));
	goto T1410;
T1410:;
	if(((V404))!=Cnil){
	goto T1411;}
	goto T1405;
	goto T1411;
T1411:;
	if(!((CMPcaar((V404)))==(VV[173]))){
	goto T1416;}
	if((CMPcaddr(CMPcar((V404))))==(Cnil)){
	goto T1415;}
	goto T1416;
T1416:;
	V402= Ct;
	goto T1415;
T1415:;
	if(!((CMPcaar((V404)))==(VV[173]))){
	goto T1422;}
	{object V407;
	V407= CMPcaddr(CMPcar((V404)));
	if(!(((V407))==(Cnil))){
	goto T1428;}
	goto T1426;
	goto T1428;
T1428:;
	if(type_of((V407))==t_cons){
	goto T1430;}
	goto T1422;
	goto T1430;
T1430:;
	{register object x= CMPcar((V407)),V408= VV[174];
	while(V408!=Cnil)
	if(eql(x,V408->c.c_car)){
	goto T1426;
	}else V408=V408->c.c_cdr;
	goto T1422;}}
	goto T1426;
T1426:;
	if((STREF(object,CMPcadddr((V406)),4))==(VV[175])){
	goto T1421;}
	goto T1422;
T1422:;
	V402= Ct;
	(V404)->c.c_car = small_fixnum(0);
	goto T1421;
T1421:;
	V404= CMPcdr((V404));
	V405= CMPcdr((V405));
	V406= CMPcar((V405));
	goto T1410;}
	goto T1405;
T1405:;
	if(!(((long)length((V345)))>(15))){
	goto T1443;}
	V402= Ct;
	goto T1443;
T1443:;
	princ_str("\n	{",VV[26]);
	(void)((*(LnkLI328))());
	bds_bind(VV[26],(VV[32]->s.s_dbind));
	if(((V402))==Cnil){
	goto T1451;}
	princ_char(10,VV[32]);
	princ_str("static object VK",VV[26]);
	(void)((*(LnkLI275))((V340)));
	princ_str("defaults[",VV[26]);
	V411 = CMPmake_fixnum((long)length((V345)));
	(void)((*(LnkLI275))(V411));
	princ_str("]={",VV[26]);
	{object V412;
	register object V413;
	V412= (V345);
	V413= Cnil;
	goto T1463;
T1463:;
	if(((V412))!=Cnil){
	goto T1464;}
	goto T1461;
	goto T1464;
T1464:;
	princ_str("(void *)",VV[26]);
	if(!(eql(CMPcar((V412)),small_fixnum(0)))){
	goto T1472;}
	princ_str("-1",VV[26]);
	goto T1470;
	goto T1472;
T1472:;
	V413= CMPcaddr(CMPcar((V412)));
	if(!(((V413))==(Cnil))){
	goto T1476;}
	princ_str("-2",VV[26]);
	goto T1470;
	goto T1476;
T1476:;
	if(!(type_of((V413))==t_cons)){
	goto T1481;}
	if(!((CMPcar((V413)))==(VV[176]))){
	goto T1481;}
	(void)((*(LnkLI275))(CMPcadr((V413))));
	goto T1470;
	goto T1481;
T1481:;
	if(!(type_of((V413))==t_cons)){
	goto T1487;}
	if(!((CMPcar((V413)))==(VV[177]))){
	goto T1487;}
	V414= (*(LnkLI329))(CMPcaddr((V413)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V414));
	goto T1470;
	goto T1487;
T1487:;
	(void)((*(LnkLI330))());
	goto T1470;
T1470:;
	if((CMPcdr((V412)))==Cnil){
	goto T1492;}
	princ_char(44,VV[26]);
	goto T1492;
T1492:;
	V412= CMPcdr((V412));
	goto T1463;}
	goto T1461;
T1461:;
	princ_str("};",VV[26]);
	goto T1451;
T1451:;
	princ_char(10,VV[32]);
	princ_str("static struct { short n,allow_other_keys;",VV[26]);
	princ_str("object *defaults;",VV[26]);
	princ_str("\n	 KEYTYPE keys[",VV[26]);
	(void)((*(LnkLI275))((number_compare((V403),small_fixnum(1))>=0?((V403)):small_fixnum(1))));
	princ_str("];",VV[26]);
	princ_str("} LI",VV[26]);
	(void)((*(LnkLI275))((V340)));
	princ_str("key=",VV[26]);
	princ_char(123,VV[26]);
	V415 = CMPmake_fixnum((long)length(CMPcar(CMPcddddr((V348)))));
	(void)((*(LnkLI275))(V415));
	princ_char(44,VV[26]);
	if((CMPcadr(CMPcddddr((V348))))==Cnil){
	goto T1519;}
	V416= small_fixnum(1);
	goto T1517;
	goto T1519;
T1519:;
	V416= small_fixnum(0);
	goto T1517;
T1517:;
	(void)((*(LnkLI275))(V416));
	princ_char(44,VV[26]);
	if(((V402))==Cnil){
	goto T1524;}
	princ_str("VK",VV[26]);
	(void)((*(LnkLI275))((V340)));
	princ_str("defaults",VV[26]);
	goto T1522;
	goto T1524;
T1524:;
	princ_str("Cstd_key_defaults",VV[26]);
	goto T1522;
T1522:;
	if((CMPcar(CMPcddddr((V348))))==Cnil){
	goto T1530;}
	princ_str(",{",VV[26]);
	{object V417;
	V417= reverse(CMPcar(CMPcddddr((V348))));
	goto T1538;
T1538:;
	if(((V417))!=Cnil){
	goto T1539;}
	goto T1535;
	goto T1539;
T1539:;
	princ_str("(void *)",VV[26]);
	V418= (*(LnkLI331))(CMPcaar((V417)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V418));
	if((CMPcdr((V417)))==Cnil){
	goto T1547;}
	princ_char(44,VV[26]);
	goto T1547;
T1547:;
	V417= CMPcdr((V417));
	goto T1538;}
	goto T1535;
T1535:;
	princ_char(125,VV[26]);
	goto T1530;
T1530:;
	princ_str("};",VV[26]);
	bds_unwind1;
	if((CMPcaddr((V348)))==Cnil){
	goto T1558;}
	princ_str("\n	parse_key_rest_new(",VV[26]);
	V419= list(2,VV[156],(V347));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V419));
	princ_char(44,VV[26]);
	goto T1556;
	goto T1558;
T1558:;
	princ_str("\n	parse_key_new_new(",VV[26]);
	goto T1556;
T1556:;
	if(!(eql(small_fixnum(0),(VV[142]->s.s_dbind)))){
	goto T1564;}
	(VV[142]->s.s_dbind)= small_fixnum(1);
	goto T1564;
T1564:;
	princ_str("narg,",VV[26]);
	if(((VV[154]->s.s_dbind))==Cnil){
	goto T1572;}
	V420= VV[178];
	goto T1570;
	goto T1572;
T1572:;
	(VV[17]->s.s_dbind)= Ct;
	V420= VV[179];
	goto T1570;
T1570:;
	(void)((*(LnkLI275))(V420));
	princ_char(43,VV[26]);
	(void)((*(LnkLI275))((V346)));
	princ_str(",(struct key *)(void *)&LI",VV[26]);
	(void)((*(LnkLI275))((V340)));
	princ_str("key,first,ap);",VV[26]);}
	goto T1379;
T1379:;
	{object V421;
	register object V422;
	V421= CMPcar(CMPcddddr((V348)));
	V422= CMPcar((V421));
	goto T1585;
T1585:;
	if(!(((V421))==Cnil)){
	goto T1586;}
	goto T1581;
	goto T1586;
T1586:;
	{object V424;
	V424= CMPcar((V345));
	V345= CMPcdr((V345));
	V423= (V424);}
	if(eql(small_fixnum(0),V423)){
	goto T1592;}
	(void)((*(LnkLI332))(CMPcadr((V422))));
	goto T1590;
	goto T1592;
T1592:;
	princ_str("\n	if(",VV[26]);
	(void)((*(LnkLI333))(STREF(object,CMPcadr((V422)),8)));
	princ_str("==0){",VV[26]);
	bds_bind(VV[134],(VV[134]->s.s_dbind));
	bds_bind(VV[135],(VV[135]->s.s_dbind));
	bds_bind(VV[133],(VV[133]->s.s_dbind));
	V425= (*(LnkLI326))(CMPcadr((V422)),CMPcaddr((V422)));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	if((STREF(object,CMPcadddr((V422)),4))==(VV[175])){
	goto T1604;}
	(void)((*(LnkLI325))(CMPcadddr((V422)),Cnil));
	goto T1604;
T1604:;
	princ_str("\n	}else{",VV[26]);
	(void)((*(LnkLI332))(CMPcadr((V422))));
	if((STREF(object,CMPcadddr((V422)),4))==(VV[175])){
	goto T1610;}
	(void)((*(LnkLI325))(CMPcadddr((V422)),Ct));
	goto T1610;
T1610:;
	princ_char(125,VV[26]);
	goto T1590;
T1590:;
	V421= CMPcdr((V421));
	V422= CMPcar((V421));
	goto T1585;}
	goto T1581;
T1581:;
	if(((VV[147]->s.s_dbind))==Cnil){
	goto T1619;}
	(VV[135]->s.s_dbind)= make_cons(VV[151],(VV[135]->s.s_dbind));
	princ_str("\n	goto TTL;",VV[26]);
	princ_str("\nTTL:;",VV[26]);
	goto T1619;
T1619:;
	base[7]= CMPcaddr(CMPcddr((V341)));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk319)();
	vs_top=sup;
	if(((V349))==Cnil){
	goto T1629;}
	V349= Cnil;
	princ_str("\n	va_end(ap);",VV[26]);
	goto T1629;
T1629:;
	if(!(number_compare(small_fixnum(0),(VV[131]->s.s_dbind))==0)){
	goto T1637;}
	if(((VV[139]->s.s_dbind))!=Cnil){
	goto T1637;}
	if(((VV[141]->s.s_dbind))!=Cnil){
	goto T1637;}
	goto T1635;
	goto T1637;
T1637:;
	princ_str("\n	base[0]=base[0];",VV[26]);
	goto T1635;
T1635:;
	princ_str("\n	return Cnil;",VV[26]);
	princ_char(125,VV[26]);
	if((base[1])==Cnil){
	goto T1648;}
	princ_str("\n	}",VV[26]);
	goto T1648;
T1648:;
	(void)((*(LnkLI334))());
	{object V428 =((V339))->s.s_plist;
	 object ind= VV[78];
	while(V428!=Cnil){
	if(V428->c.c_car==ind){
	V427= (V428->c.c_cdr->c.c_car);
	goto T1653;
	}else V428=V428->c.c_cdr->c.c_cdr;}
	V427= Cnil;}
	goto T1653;
T1653:;
	{object V429 = (*(LnkLI320))((V358),V427);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR25(V429)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3DEFUN-NORMAL	*/

static object LI27(V434,V435,V436,V437)

object V434;register object V435;object V436;object V437;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[180],(V434))));
	if(!(type_of((V435))==t_fixnum||
type_of((V435))==t_bignum||
type_of((V435))==t_ratio||
type_of((V435))==t_shortfloat||
type_of((V435))==t_longfloat||
type_of((V435))==t_complex)){
	goto T1657;}
	princ_str("\nstatic void L",VV[26]);
	(void)((*(LnkLI275))((V435)));
	princ_str("()",VV[26]);
	goto T1655;
	goto T1657;
T1657:;
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))((V435)));
	princ_str("()",VV[26]);
	goto T1655;
T1655:;
	princ_str("\n{",VV[26]);
	princ_str("register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base=vs_base;",VV[26]);
	(void)((*(LnkLI318))(STREF(object,CMPcadr((V436)),4),(V435),VV[149]));
	princ_str("\n	register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("sup=base+VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_char(59,VV[26]);
	princ_str(" VC",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	if(((VV[164]->s.s_dbind))==Cnil){
	goto T1682;}
	princ_str("\n	vs_reserve(VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_str(");",VV[26]);
	goto T1680;
	goto T1682;
T1682:;
	princ_str("\n	vs_check;",VV[26]);
	goto T1680;
T1680:;
	if(((V437))==Cnil){
	goto T1688;}
	princ_str("\n	bds_check;",VV[26]);
	goto T1688;
T1688:;
	if(((VV[150]->s.s_dbind))==Cnil){
	goto T1692;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T1692;
T1692:;
	(void)((VFUN_NARGS=3,(*(LnkLI335))(CMPcaddr((V436)),CMPcaddr(CMPcddr((V436))),(V434))));
	princ_str("\n}",VV[26]);
	{object V438;
	V438= make_cons((VV[137]->s.s_dbind),(VV[131]->s.s_dbind));
	(VV[34]->s.s_dbind)= make_cons((V438),(VV[34]->s.s_dbind));}
	princ_str("\n#define VC",VV[32]);
	(void)((*(LnkLI278))((VV[137]->s.s_dbind)));
	{object V439 = (*(LnkLI336))();
	VMR26(V439)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-V*-MACROS	*/

static object LI28(V442,V443)

register object V442;object V443;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V444;
	V444= make_cons((V442),(VV[131]->s.s_dbind));
	(VV[34]->s.s_dbind)= make_cons((V444),(VV[34]->s.s_dbind));}
	if(!(number_compare(small_fixnum(0),(VV[131]->s.s_dbind))==0)){
	goto T1710;}
	if(((VV[139]->s.s_dbind))!=Cnil){
	goto T1710;}
	if(((VV[141]->s.s_dbind))!=Cnil){
	goto T1710;}
	princ_str("\n#define VMB",VV[32]);
	(void)((*(LnkLI278))((V442)));
	goto T1708;
	goto T1710;
T1710:;
	princ_str("\n#define VMB",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_char(32,VV[32]);
	princ_str("register object *",VV[32]);
	(void)((*(LnkLI278))((VV[21]->s.s_dbind)));
	princ_str("base=vs_top;",VV[32]);
	goto T1708;
T1708:;
	(void)((*(LnkLI336))());
	if(((VV[139]->s.s_dbind))==Cnil){
	goto T1727;}
	princ_str("\n#define VMS",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_char(32,VV[32]);
	princ_str(" register object *",VV[32]);
	(void)((*(LnkLI278))((VV[21]->s.s_dbind)));
	princ_str("sup=vs_top+",VV[32]);
	(void)((*(LnkLI278))((VV[131]->s.s_dbind)));
	princ_str(";vs_top=sup;",VV[32]);
	goto T1725;
	goto T1727;
T1727:;
	if(!(number_compare(small_fixnum(0),(VV[131]->s.s_dbind))==0)){
	goto T1738;}
	princ_str("\n#define VMS",VV[32]);
	(void)((*(LnkLI278))((V442)));
	goto T1725;
	goto T1738;
T1738:;
	princ_str("\n#define VMS",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str(" vs_top += ",VV[32]);
	(void)((*(LnkLI278))((VV[131]->s.s_dbind)));
	princ_char(59,VV[32]);
	goto T1725;
T1725:;
	if(!(number_compare(small_fixnum(0),(VV[131]->s.s_dbind))==0)){
	goto T1749;}
	princ_str("\n#define VMV",VV[32]);
	(void)((*(LnkLI278))((V442)));
	goto T1747;
	goto T1749;
T1749:;
	if(((VV[164]->s.s_dbind))==Cnil){
	goto T1754;}
	princ_str("\n#define VMV",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str(" vs_reserve(",VV[32]);
	(void)((*(LnkLI278))((VV[131]->s.s_dbind)));
	princ_str(");",VV[32]);
	goto T1747;
	goto T1754;
T1754:;
	princ_str("\n#define VMV",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str(" vs_check;",VV[32]);
	goto T1747;
T1747:;
	if(!(number_compare(small_fixnum(0),(VV[131]->s.s_dbind))==0)){
	goto T1765;}
	princ_str("\n#define VMR",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str("(VMT",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str(") return(VMT",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str(");",VV[32]);
	{object V445 = Cnil;
	VMR27(V445)}
	goto T1765;
T1765:;
	princ_str("\n#define VMR",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str("(VMT",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str(") vs_top=base ; return(VMT",VV[32]);
	(void)((*(LnkLI278))((V442)));
	princ_str(");",VV[32]);
	{object V446 = Cnil;
	VMR27(V446)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-REQUIREDS	*/

static object LI29(V449,V450)

object V449;object V450;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{register object V451;
	V451= (V449);
	goto T1783;
T1783:;
	if(!(((V451))==Cnil)){
	goto T1784;}
	goto T1781;
	goto T1784;
T1784:;
	{register object V452;
	(VV[89]->s.s_dbind)= number_plus((VV[89]->s.s_dbind),small_fixnum(1));
	V452= (VV[89]->s.s_dbind);
	V453= CMPcar((V451));
	V454= Ct;
	STSET(object,/* INLINE-ARGS */V453,16, (V452));
	(void)((V452));
	princ_char(86,VV[26]);
	(void)((*(LnkLI275))((V452)));}
	if((CMPcdr((V451)))==Cnil){
	goto T1794;}
	princ_char(44,VV[26]);
	goto T1794;
T1794:;
	V451= CMPcdr((V451));
	goto T1783;}
	goto T1781;
T1781:;
	princ_str(")\n",VV[26]);
	if(((V449))==Cnil){
	goto T1804;}
	princ_char(10,VV[26]);
	{register object V455;
	register object V456;
	register object V457;
	V455= (V449);
	V456= (V450);
	V457= Cnil;
	goto T1808;
T1808:;
	if(!(((V455))==Cnil)){
	goto T1809;}
	princ_char(59,VV[26]);
	{object V458 = Cnil;
	VMR28(V458)}
	goto T1809;
T1809:;
	if(((V457))==Cnil){
	goto T1814;}
	princ_char(59,VV[26]);
	goto T1814;
T1814:;
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	V459= (*(LnkLI337))(CMPcar((V455)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V459));
	V460= (*(LnkLI281))(CMPcar((V456)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V460));
	V457= CMPcar((V456));
	princ_char(86,VV[26]);
	(void)((*(LnkLI275))(STREF(object,CMPcar((V455)),16)));
	V455= CMPcdr((V455));
	V456= CMPcdr((V456));
	goto T1808;}
	goto T1804;
T1804:;
	{object V461 = Cnil;
	VMR28(V461)}
	return Cnil;
}
/*	local entry for function ADD-DEBUG-INFO	*/

static object LI30(V464,V465)

object V464;object V465;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{object V466;
	V466= Cnil;
	{object V467;
	V467= (number_compare((VV[115]->s.s_dbind),small_fixnum(2))>=0?Ct:Cnil);
	if(((V467))==Cnil){
	goto T1834;}
	{object V468 = (V467);
	VMR29(V468)}
	goto T1834;
T1834:;
	{object V469 =((V464))->s.s_plist;
	 object ind= VV[116];
	while(V469!=Cnil){
	if(V469->c.c_car==ind){
	if(((V469->c.c_cdr->c.c_car))!=Cnil){
	goto T1837;}
	goto T1838;
	}else V469=V469->c.c_cdr->c.c_cdr;}}
	goto T1838;
T1838:;
	{object V470 = (VFUN_NARGS=2,(*(LnkLI338))(VV[181],(V464)));
	VMR29(V470)}
	goto T1837;
T1837:;
	(void)(remprop((V464),VV[116]));
	{register object V471;
	V471= small_fixnum(0);
	{register object V472;
	register object V473;
	V472= STREF(object,CMPcadr((V465)),4);
	V473= CMPcar((V472));
	goto T1844;
T1844:;
	if(!(((V472))==Cnil)){
	goto T1845;}
	goto T1840;
	goto T1845;
T1845:;
	if(!(type_of(STREF(object,(V473),8))==t_cons)){
	goto T1849;}
	if(!(type_of(CMPcdr(STREF(object,(V473),8)))==t_fixnum)){
	goto T1849;}
	{object V474= CMPcdr(STREF(object,(V473),8));
	V471= (number_compare((V471),V474)>=0?((V471)):V474);}
	goto T1849;
T1849:;
	V472= CMPcdr((V472));
	V473= CMPcar((V472));
	goto T1844;}
	goto T1840;
T1840:;
	base[0]= one_plus((V471));
	vs_top=(vs_base=base+0)+1;
	Lmake_list();
	vs_top=sup;
	V466= vs_base[0];
	{register object V475;
	register object V476;
	V475= STREF(object,CMPcadr((V465)),4);
	V476= CMPcar((V475));
	goto T1867;
T1867:;
	if(!(((V475))==Cnil)){
	goto T1868;}
	goto T1863;
	goto T1868;
T1868:;
	if(!(type_of(STREF(object,(V476),8))==t_cons)){
	goto T1872;}
	if(!(type_of(CMPcdr(STREF(object,(V476),8)))==t_fixnum)){
	goto T1872;}
	{object V477;
	register object V479;
	V477= CMPcdr(STREF(object,(V476),8));
	V479= STREF(object,(V476),0);
	(nthcdr(fix((V477)),V466))->c.c_car = (V479);
	(void)(nthcdr(fix((V477)),V466));}
	goto T1872;
T1872:;
	V475= CMPcdr((V475));
	V476= CMPcar((V475));
	goto T1867;}
	goto T1863;
T1863:;
	(void)(sputprop((V464),VV[117],(V466)));
	{object V480;
	{object V481 =((V464))->s.s_plist;
	 object ind= VV[117];
	while(V481!=Cnil){
	if(V481->c.c_car==ind){
	V480= (V481->c.c_cdr->c.c_car);
	goto T1886;
	}else V481=V481->c.c_cdr->c.c_cdr;}
	V480= Cnil;}
	goto T1886;
T1886:;
	if(((V480))==Cnil){
	goto T1888;}
	if((CMPcdr((V480)))!=Cnil){
	goto T1887;}
	if((CMPcar((V480)))==Cnil){
	goto T1888;}
	goto T1887;
T1887:;
	V482= list(2,VV[92],(V464));
	V483= list(3,VV[117],/* INLINE-ARGS */V482,list(2,VV[92],(V480)));
	{object V484 = (VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V483));
	VMR29(V484)}
	goto T1888;
T1888:;
	{object V485 = Cnil;
	VMR29(V485)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ANALYZE-REGS	*/

static object LI31(V488,V489)

object V488;object V489;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{object V490;
	V490= number_minus((VV[182]->s.s_dbind),(V489));
	if(!(number_compare(small_fixnum(0),(VV[183]->s.s_dbind))==0)){
	goto T1896;}
	V491= (VFUN_NARGS=1,(*(LnkLI340))((V488)));
	{long V492 = (long)(*(LnkLI339))(/* INLINE-ARGS */V491,(V490));
	VMR30((object)V492)}
	goto T1896;
T1896:;
	{register object V493;
	register object V494;
	V493= Cnil;
	V494= Cnil;
	{register object V495;
	register object V496;
	V495= (V488);
	V496= CMPcar((V495));
	goto T1902;
T1902:;
	if(!(((V495))==Cnil)){
	goto T1903;}
	goto T1898;
	goto T1903;
T1903:;
	{register object x= STREF(object,(V496),20),V497= VV[184];
	while(V497!=Cnil)
	if(x==(V497->c.c_car)){
	goto T1910;
	}else V497=V497->c.c_cdr;
	goto T1909;}
	goto T1910;
T1910:;{object V498;
	{register object x= (V496),V499= (V494);
	while(V499!=Cnil)
	if(eql(x,V499->c.c_car)){
	V498= V499;
	goto T1912;
	}else V499=V499->c.c_cdr;
	V498= Cnil;}
	goto T1912;
T1912:;
	if(V498==Cnil)goto T1911;
	goto T1907;
	goto T1911;
T1911:;}
	{register object V500;
	V500= (V496);
	V494= make_cons((V500),(V494));
	goto T1907;}
	goto T1909;
T1909:;{object V501;
	{register object x= (V496),V502= (V493);
	while(V502!=Cnil)
	if(x==(V502->c.c_car)){
	V501= V502;
	goto T1916;
	}else V502=V502->c.c_cdr;
	V501= Cnil;}
	goto T1916;
T1916:;
	if(V501==Cnil)goto T1915;
	goto T1907;
	goto T1915;
T1915:;}
	{register object V503;
	V503= (V496);
	V494= make_cons((V503),(V494));}
	goto T1907;
T1907:;
	V495= CMPcdr((V495));
	V496= CMPcar((V495));
	goto T1902;}
	goto T1898;
T1898:;
	(void)((*(LnkLI339))((V493),(V490)));
	{long V504 = (long)(*(LnkLI339))((V494),(VV[183]->s.s_dbind));
	VMR30((object)V504)}}}
	base[0]=base[0];
}
/*	local entry for function ANALYZE-REGS1	*/

static object LI32(V507,V508)

object V507;object V508;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{register long V509;
	register long V510;
	long V511;
	long V512;
	register long V513;
	V509= 0;
	V510= 3;
	V511= 100000;
	V512= fix((V508));
	V513= 0;
	V507= (VFUN_NARGS=1,(*(LnkLI340))((V507)));
	goto T1933;
T1933:;
	{register object V514;
	object V515;
	V514= (V507);
	V515= CMPcar((V514));
	goto T1939;
T1939:;
	if(!(((V514))==Cnil)){
	goto T1940;}
	goto T1935;
	goto T1940;
T1940:;
	V509= fix(STREF(object,(V515),24));
	if(!((V509)>=(V510))){
	goto T1946;}
	V513= (long)(V513)+(1);
	if(!((V509)<(V511))){
	goto T1951;}
	V511= V509;
	goto T1951;
T1951:;
	if(!((V513)>(V512))){
	goto T1946;}
	goto T1934;
	goto T1946;
T1946:;
	V514= CMPcdr((V514));
	V515= CMPcar((V514));
	goto T1939;}
	goto T1935;
T1935:;
	if(!((V513)<(V512))){
	goto T1962;}
	V510= (long)(V510)-(1);
	goto T1962;
T1962:;
	{register object V516;
	register object V517;
	V516= (V507);
	V517= CMPcar((V516));
	goto T1970;
T1970:;
	if(!(((V516))==Cnil)){
	goto T1971;}
	goto T1966;
	goto T1971;
T1971:;
	if(!((fix(STREF(object,(V517),24)))<(V510))){
	goto T1975;}
	V518= Ct;
	STSET(object,(V517),24, small_fixnum(0));
	(void)(small_fixnum(0));
	goto T1975;
T1975:;
	V516= CMPcdr((V516));
	V517= CMPcar((V516));
	goto T1970;}
	goto T1966;
T1966:;
	{long V519 = V510;
	VMR31((object)V519)}
	goto T1934;
T1934:;
	V513= 0;
	V510= (long)(V511)+(1);
	V511= 1000000;
	goto T1933;}
	base[0]=base[0];
}
/*	local entry for function WT-GLOBAL-ENTRY	*/

static object LI33(V524,V525,V526,V527)

object V524;object V525;object V526;object V527;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	{object V528 =((V524))->s.s_plist;
	 object ind= VV[103];
	while(V528!=Cnil){
	if(V528->c.c_car==ind){
	if(((V528->c.c_cdr->c.c_car))==Cnil){
	goto T1990;}
	goto T1992;
	}else V528=V528->c.c_cdr->c.c_cdr;}
	goto T1990;}
	goto T1992;
T1992:;
	{object V529 = Cnil;
	VMR32(V529)}
	goto T1990;
T1990:;
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[187],(V524))));
	princ_str("\nstatic void L",VV[26]);
	(void)((*(LnkLI275))((V525)));
	princ_str("()",VV[26]);
	princ_str("\n{	register object *base=vs_base;",VV[26]);
	if(((VV[164]->s.s_dbind))!=Cnil){
	goto T2001;}
	if(((VV[165]->s.s_dbind))==Cnil){
	goto T2000;}
	goto T2001;
T2001:;
	princ_str("\n	check_arg(",VV[26]);
	V530 = CMPmake_fixnum((long)length((V526)));
	(void)((*(LnkLI275))(V530));
	princ_str(");",VV[26]);
	goto T2000;
T2000:;
	princ_str("\n	base[0]=",VV[26]);
	{object V532= (V527);
	if((V532!= VV[90]))goto T2012;
	if(!(number_compare(small_fixnum(0),(VV[115]->s.s_dbind))==0)){
	goto T2014;}
	V531= VV[188];
	goto T2011;
	goto T2014;
T2014:;
	V531= VV[189];
	goto T2011;
	goto T2012;
T2012:;
	if((V532!= VV[143]))goto T2016;
	V531= VV[190];
	goto T2011;
	goto T2016;
T2016:;
	if((V532!= VV[144]))goto T2017;
	V531= VV[191];
	goto T2011;
	goto T2017;
T2017:;
	if((V532!= VV[145]))goto T2018;
	V531= VV[192];
	goto T2011;
	goto T2018;
T2018:;
	V531= VV[193];}
	goto T2011;
T2011:;
	(void)((*(LnkLI275))(V531));
	princ_str("(LI",VV[26]);
	(void)((*(LnkLI275))((V525)));
	princ_char(40,VV[26]);
	{register object V533;
	register long V534;
	V534= 0;
	V533= (V526);
	goto T2025;
T2025:;
	if(!(((V533))==Cnil)){
	goto T2026;}
	goto T2022;
	goto T2026;
T2026:;
	{object V536= CMPcar((V533));
	if((V536!= VV[90]))goto T2033;
	V535= VV[194];
	goto T2032;
	goto T2033;
T2033:;
	if((V536!= VV[143]))goto T2034;
	V535= VV[195];
	goto T2032;
	goto T2034;
T2034:;
	if((V536!= VV[144]))goto T2035;
	V535= VV[196];
	goto T2032;
	goto T2035;
T2035:;
	if((V536!= VV[145]))goto T2036;
	V535= VV[197];
	goto T2032;
	goto T2036;
T2036:;
	V535= VV[198];}
	goto T2032;
T2032:;
	(void)((*(LnkLI275))(V535));
	princ_str("(base[",VV[26]);
	V537 = CMPmake_fixnum(V534);
	(void)((*(LnkLI275))(V537));
	princ_str("])",VV[26]);
	if((CMPcdr((V533)))==Cnil){
	goto T2040;}
	princ_char(44,VV[26]);
	goto T2040;
T2040:;
	V533= CMPcdr((V533));
	V534= (long)(V534)+1;
	goto T2025;}
	goto T2022;
T2022:;
	princ_str("));",VV[26]);
	princ_str("\n	vs_top=(vs_base=base)+1;",VV[26]);
	princ_str("\n}",VV[26]);
	{object V538 = Cnil;
	VMR32(V538)}
	return Cnil;
}
/*	local entry for function REP-TYPE	*/

static object LI34(V540)

object V540;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{object V541= (V540);
	if((V541!= VV[90]))goto T2053;
	{object V542 = VV[199];
	VMR33(V542)}
	goto T2053;
T2053:;
	if((V541!= VV[262]))goto T2054;
	{object V543 = VV[200];
	VMR33(V543)}
	goto T2054;
T2054:;
	if((V541!= VV[143]))goto T2055;
	{object V544 = VV[201];
	VMR33(V544)}
	goto T2055;
T2055:;
	if((V541!= VV[145]))goto T2056;
	{object V545 = VV[202];
	VMR33(V545)}
	goto T2056;
T2056:;
	if((V541!= VV[144]))goto T2057;
	{object V546 = VV[203];
	VMR33(V546)}
	goto T2057;
T2057:;
	{object V547 = VV[204];
	VMR33(V547)}}
	return Cnil;
}
/*	local entry for function T1DEFMACRO	*/

static object LI35(V549)

register object V549;
{	 VMB34 VMS34 VMV34
	bds_check;
	goto TTL;
TTL:;
	if(((V549))==Cnil){
	goto T2059;}
	if(!((CMPcdr((V549)))==Cnil)){
	goto T2058;}
	goto T2059;
T2059:;
	V550 = CMPmake_fixnum((long)length((V549)));
	(void)((*(LnkLI284))(VV[205],small_fixnum(2),V550));
	goto T2058;
T2058:;
	if(type_of(CMPcar((V549)))==t_symbol){
	goto T2063;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[206],CMPcar((V549)))));
	goto T2063;
T2063:;
	V551= make_cons(VV[205],(V549));
	(void)((*(LnkLI269))(Ct,/* INLINE-ARGS */V551));
	(VV[6]->s.s_dbind)= Ct;
	{register object V552;
	object V553;
	(VV[62]->s.s_dbind)= number_plus((VV[62]->s.s_dbind),small_fixnum(1));
	V553= (VV[62]->s.s_dbind);
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[59],Cnil);
	bds_bind(VV[53],Cnil);
	bds_bind(VV[60],Cnil);
	V552= Cnil;
	V552= (*(LnkLI341))(CMPcar((V549)),CMPcadr((V549)),CMPcddr((V549)));
	(void)((*(LnkLI297))());
	{object V554;
	V554= list(7,VV[205],CMPcar((V549)),(V553),CMPcddr((V552)),CMPcar((V552)),CMPcadr((V552)),(VV[60]->s.s_dbind));
	(VV[25]->s.s_dbind)= make_cons((V554),(VV[25]->s.s_dbind));
	{object V555 = (VV[25]->s.s_dbind);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR34(V555)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFMACRO	*/

static object LI36(V562,V563,V564,V565,V566,V567)

object V562;object V563;object V564;object V565;object V566;object V567;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	if(((V565))==Cnil){
	goto T2076;}
	V568= list(4,VV[104],list(2,VV[92],(V562)),(V565),VV[207]);
	(void)((VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V568)));
	goto T2076;
T2076:;
	if(((V566))==Cnil){
	goto T2079;}
	V569= list(2,VV[92],(V562));
	V570= list(4,VV[104],/* INLINE-ARGS */V569,list(2,VV[92],(V566)),VV[208]);
	(void)((VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V570)));
	goto T2079;
T2079:;
	princ_str("\nstatic void L",VV[32]);
	(void)((*(LnkLI278))((V563)));
	princ_str("();",VV[32]);
	V571= list(2,VV[92],(V562));
	V572= list(3,VV[209],/* INLINE-ARGS */V571,(*(LnkLI305))(VV[210],(V563)));
	{object V573 = (VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V572));
	VMR35(V573)}
	return Cnil;
}
/*	local entry for function T3DEFMACRO	*/

static object LI37(V580,V581,V582,V583,V584,V585)

object V580;object V581;register object V582;object V583;object V584;object V585;
{	 VMB36 VMS36 VMV36
	bds_check;
	goto TTL;
TTL:;
	{object V586 =((V580))->s.s_plist;
	 object ind= VV[211];
	while(V586!=Cnil){
	if(V586->c.c_car==ind){
	if(((V586->c.c_cdr->c.c_car))==Cnil){
	goto T2088;}
	goto T2089;
	}else V586=V586->c.c_cdr->c.c_cdr;}
	goto T2088;}
	goto T2089;
T2089:;
	bds_bind(VV[21],VV[212]);
	goto T2086;
	goto T2088;
T2088:;
	bds_bind(VV[21],VV[213]);
	goto T2086;
T2086:;
	bds_bind(VV[129],VV[128]);
	bds_bind(VV[19],Cnil);
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],small_fixnum(0));
	bds_bind(VV[132],small_fixnum(0));
	bds_bind(VV[133],small_fixnum(0));
	bds_bind(VV[134],Cnil);
	bds_bind(VV[135],make_cons((VV[129]->s.s_dbind),Cnil));
	bds_bind(VV[136],(VV[129]->s.s_dbind));
	(VV[138]->s.s_dbind)= number_plus((VV[138]->s.s_dbind),small_fixnum(1));
	bds_bind(VV[137],(VV[138]->s.s_dbind));
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],Cnil);
	bds_bind(VV[142],small_fixnum(0));
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[214],(V580))));
	princ_str("\nstatic void L",VV[26]);
	(void)((*(LnkLI275))((V581)));
	princ_str("()",VV[26]);
	princ_str("\n{register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base=vs_base;",VV[26]);
	(void)((*(LnkLI318))(STREF(object,CMPcar(CMPcddddr((V582))),4),(V581),VV[149]));
	princ_str("\n	register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("sup=base+VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_char(59,VV[26]);
	princ_str(" VC",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	if(((VV[164]->s.s_dbind))==Cnil){
	goto T2114;}
	princ_str("\n	vs_reserve(VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_str(");",VV[26]);
	goto T2112;
	goto T2114;
T2114:;
	princ_str("\n	vs_check;",VV[26]);
	goto T2112;
T2112:;
	if(((V585))==Cnil){
	goto T2120;}
	princ_str("\n	bds_check;",VV[26]);
	goto T2120;
T2120:;
	if(((VV[150]->s.s_dbind))==Cnil){
	goto T2124;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T2124;
T2124:;
	base[15]= CMPcar((V582));
	base[16]= CMPcadr((V582));
	base[17]= CMPcaddr((V582));
	base[18]= CMPcadddr((V582));
	vs_top=(vs_base=base+15)+4;
	(void) (*Lnk342)();
	vs_top=sup;
	princ_str("\n}",VV[26]);
	{object V587;
	V587= make_cons((VV[137]->s.s_dbind),(VV[131]->s.s_dbind));
	(VV[34]->s.s_dbind)= make_cons((V587),(VV[34]->s.s_dbind));}
	princ_str("\n#define VC",VV[32]);
	(void)((*(LnkLI278))((VV[137]->s.s_dbind)));
	{object V588 = (*(LnkLI336))();
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
	VMR36(V588)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1ORDINARY	*/

static object LI38(V590)

register object V590;
{	 VMB37 VMS37 VMV37
	bds_check;
	goto TTL;
TTL:;
	{register object V591;
	V591= Cnil;
	(VV[6]->s.s_dbind)= Ct;
	if(((VV[49]->s.s_dbind))==Cnil){
	goto T2145;}
	(void)((*(LnkLI269))(Cnil,(V590)));
	{object V592;
	base[0]= VV[215];
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	V592= vs_base[0];
	V593= listA(3,VV[65],(V592),VV[216]);
	(void)((*(LnkLI293))(/* INLINE-ARGS */V593));
	base[0]= list(5,VV[52],(V592),Cnil,(V590),Cnil);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk273)();
	vs_top=sup;
	{object V594;
	V594= list(2,VV[217],make_cons((V592),Cnil));
	(VV[25]->s.s_dbind)= make_cons((V594),(VV[25]->s.s_dbind));
	{object V595 = (VV[25]->s.s_dbind);
	VMR37(V595)}}}
	goto T2145;
T2145:;
	{object V596;
	if(type_of((V590))==t_cons){
	goto T2156;}
	V596= Cnil;
	goto T2155;
	goto T2156;
T2156:;
	if(type_of(CMPcar((V590)))==t_symbol){
	goto T2158;}
	V596= Cnil;
	goto T2155;
	goto T2158;
T2158:;
	if(!((CMPcar((V590)))==(VV[218]))){
	goto T2162;}
	goto T2160;
	goto T2162;
T2162:;
	base[0]= CMPcar((V590));
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	V597= vs_base[0];
	if((V597)==Cnil){
	goto T2160;}
	V596= Cnil;
	goto T2155;
	goto T2160;
T2160:;
	{register object V598;
	register long V599;
	V598= CMPcdr((V590));
	V599= 1;
	goto T2169;
T2169:;
	if((V599)>=(1000)){
	goto T2171;}
	if(type_of((V598))==t_cons){
	goto T2170;}
	goto T2171;
T2171:;
	V596= Cnil;
	goto T2155;
	goto T2170;
T2170:;
	if(!(type_of(CMPcar((V598)))==t_cons)){
	goto T2176;}
	if(!((CMPcaar((V598)))==(VV[65]))){
	goto T2176;}
	V591= CMPcadr(CMPcar((V598)));
	if(!(type_of((V591))==t_cons)){
	goto T2176;}
	if(!((CMPcar((V591)))==(VV[219]))){
	goto T2176;}
	{register object V600;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V600= vs_base[0];
	base[0]= listA(3,VV[52],(V600),CMPcdr((V591)));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk273)();
	vs_top=sup;
	base[1]= (V590);
	base[2]= small_fixnum(0);
	base[3]= CMPmake_fixnum(V599);
	vs_top=(vs_base=base+1)+3;
	Lsubseq();
	vs_top=sup;
	base[0]= vs_base[0];
	V601= list(2,VV[220],list(2,VV[92],(V600)));
	base[1]= make_cons(/* INLINE-ARGS */V601,Cnil);
	V602 = CMPmake_fixnum(V599);
	V603= number_plus(small_fixnum(1),V602);
	base[2]= nthcdr(fix(/* INLINE-ARGS */V603),(V590));
	vs_top=(vs_base=base+0)+3;
	Lappend();
	vs_top=sup;
	V590= vs_base[0];
	goto TTL;}
	goto T2176;
T2176:;
	if(type_of((V598))==t_cons){
	goto T2199;}
	V598= Cnil;
	goto T2198;
	goto T2199;
T2199:;
	V598= CMPcdr((V598));
	goto T2198;
T2198:;
	V599= (long)(1)+(V599);
	goto T2169;}
	goto T2155;
T2155:;
	if(((V596))==Cnil){
	goto T2204;}
	{object V604 = (V596);
	VMR37(V604)}
	goto T2204;
T2204:;
	(void)((*(LnkLI269))(Cnil,(V590)));
	bds_bind(VV[56],Cnil);
	bds_bind(VV[57],Cnil);
	bds_bind(VV[58],Cnil);
	bds_bind(VV[59],Cnil);
	bds_bind(VV[53],Cnil);
	{object V605;
	V605= list(2,VV[217],(V590));
	(VV[25]->s.s_dbind)= make_cons((V605),(VV[25]->s.s_dbind));}
	{object V606 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR37(V606)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2ORDINARY	*/

static object LI39(V608)

object V608;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	{object V609;
	V609= (type_of((V608))!=t_cons?Ct:Cnil);
	if(((V609))==Cnil){
	goto T2212;}
	{object V610 = (V609);
	VMR38(V610)}
	goto T2212;
T2212:;
	{object V611;
	base[0]= (V608);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	V611= vs_base[0];
	if(((V611))==Cnil){
	goto T2217;}
	{object V612 = (V611);
	VMR38(V612)}
	goto T2217;
T2217:;
	{object V613 = (VFUN_NARGS=1,(*(LnkLI304))((V608)));
	VMR38(V613)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-LOAD-TIME-SHARP-COMMA	*/

static object LI40()

{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	{register object V614;
	register object V615;
	V614= reverse((VV[53]->s.s_dbind));
	V615= CMPcar((V614));
	goto T2222;
T2222:;
	if(!(((V614))==Cnil)){
	goto T2223;}
	{object V616 = Cnil;
	VMR39(V616)}
	goto T2223;
T2223:;
	if(!(type_of((V615))!=t_cons)){
	goto T2227;}
	(void)((*(LnkLI343))());
	goto T2227;
T2227:;
	{register object V617;
	V617= make_cons(VV[221],(V615));
	(VV[25]->s.s_dbind)= make_cons((V617),(VV[25]->s.s_dbind));}
	V614= CMPcdr((V614));
	V615= CMPcar((V614));
	goto T2222;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2SHARP-COMMA	*/

static object LI41(V620,V621)

object V620;object V621;
{	 VMB40 VMS40 VMV40
	goto TTL;
TTL:;
	V622= list(3,VV[222],(V620),(V621));
	{object V623 = (VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V622));
	VMR40(V623)}
	return Cnil;
}
/*	local entry for function T2DECLARE	*/

static object LI42(V625)

object V625;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V626 = (*(LnkLI343))();
	VMR41(V626)}
	return Cnil;
}
/*	local entry for function T1DEFINE-STRUCTURE	*/

static object LI43(V628)

object V628;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	V629= (*(LnkLI269))(Cnil,Cnil);
	V630= make_cons(((/* INLINE-ARGS */V629)==Cnil?Ct:Cnil),Cnil);
	V631= append((V628),/* INLINE-ARGS */V630);
	V632= make_cons(VV[223],/* INLINE-ARGS */V631);
	(void)((*(LnkLI269))(Ct,/* INLINE-ARGS */V632));
	V633= make_cons(VV[223],(V628));
	{object V634 = (*(LnkLI274))(/* INLINE-ARGS */V633);
	VMR42(V634)}
	return Cnil;
}
/*	local entry for function SET-DBIND	*/

static object LI44(V637,V638)

object V637;object V638;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	princ_str("\n	VV[",VV[26]);
	(void)((*(LnkLI275))((V638)));
	princ_str("]->s.s_dbind = ",VV[26]);
	(void)((*(LnkLI275))((V637)));
	princ_char(59,VV[26]);
	{object V639 = Cnil;
	VMR43(V639)}
	return Cnil;
}
/*	local entry for function T1CLINES	*/

static object LI45(V641)

object V641;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{register object V642;
	register object V643;
	V642= (V641);
	V643= CMPcar((V642));
	goto T2249;
T2249:;
	if(!(((V642))==Cnil)){
	goto T2250;}
	goto T2245;
	goto T2250;
T2250:;
	if(type_of((V643))==t_string){
	goto T2254;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[224],(V643))));
	goto T2254;
T2254:;
	V642= CMPcdr((V642));
	V643= CMPcar((V642));
	goto T2249;}
	goto T2245;
T2245:;
	{object V644;
	V644= list(2,VV[225],(V641));
	(VV[25]->s.s_dbind)= make_cons((V644),(VV[25]->s.s_dbind));
	{object V645 = (VV[25]->s.s_dbind);
	VMR44(V645)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3CLINES	*/

static object LI46(V647)

object V647;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	{register object V648;
	register object V649;
	V648= (V647);
	V649= CMPcar((V648));
	goto T2267;
T2267:;
	if(!(((V648))==Cnil)){
	goto T2268;}
	{object V650 = Cnil;
	VMR45(V650)}
	goto T2268;
T2268:;
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))((V649)));
	V648= CMPcdr((V648));
	V649= CMPcar((V648));
	goto T2267;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFCFUN	*/

static object LI47(V652)

object V652;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{register object V653;
	V653= Cnil;
	if(((V652))==Cnil){
	goto T2282;}
	if(!((CMPcdr((V652)))==Cnil)){
	goto T2281;}
	goto T2282;
T2282:;
	V654 = CMPmake_fixnum((long)length((V652)));
	(void)((*(LnkLI284))(VV[226],small_fixnum(2),V654));
	goto T2281;
T2281:;
	if(type_of(CMPcar((V652)))==t_string){
	goto T2286;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[227],CMPcar((V652)))));
	goto T2286;
T2286:;
	{object V655= CMPcadr((V652));
	if(type_of(V655)==t_fixnum||
type_of(V655)==t_bignum||
type_of(V655)==t_ratio||
type_of(V655)==t_shortfloat||
type_of(V655)==t_longfloat||
type_of(V655)==t_complex){
	goto T2289;}}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[228],CMPcadr((V652)))));
	goto T2289;
T2289:;
	{register object V656;
	register object V657;
	V656= CMPcddr((V652));
	V657= CMPcar((V656));
	goto T2296;
T2296:;
	if(!(((V656))==Cnil)){
	goto T2297;}
	goto T2292;
	goto T2297;
T2297:;
	if(!(type_of((V657))==t_string)){
	goto T2303;}
	{register object V658;
	V658= (V657);
	V653= make_cons((V658),(V653));
	goto T2301;}
	goto T2303;
T2303:;
	if(!(type_of((V657))==t_cons)){
	goto T2308;}
	if(!(type_of(CMPcar((V657)))==t_symbol)){
	goto T2311;}
	base[2]= CMPcar((V657));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2313;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[229],CMPcar((V657)))));
	goto T2313;
T2313:;
	{register object V659;
	V660= CMPcar((V657));
	V661= (*(LnkLI344))(CMPcdr((V657)));
	V662= make_cons(/* INLINE-ARGS */V660,/* INLINE-ARGS */V661);
	V659= make_cons(/* INLINE-ARGS */V662,Cnil);
	V653= make_cons((V659),(V653));
	goto T2301;}
	goto T2311;
T2311:;
	if(!(type_of(CMPcar((V657)))==t_cons)){
	goto T2320;}
	if(!(type_of(CMPcaar((V657)))==t_symbol)){
	goto T2320;}
	if(!((CMPcaar((V657)))==(VV[92]))){
	goto T2327;}
	if(!((CMPcdar((V657)))==Cnil)){
	goto T2329;}
	goto T2320;
	goto T2329;
T2329:;
	if(!((((CMPcddar((V657)))==Cnil?Ct:Cnil))==Cnil)){
	goto T2331;}
	goto T2320;
	goto T2331;
T2331:;
	if(!((CMPcdr((V657)))==Cnil)){
	goto T2333;}
	goto T2320;
	goto T2333;
T2333:;
	if((((CMPcddr((V657)))==Cnil?Ct:Cnil))==Cnil){
	goto T2320;}
	goto T2325;
	goto T2327;
T2327:;
	base[2]= CMPcaar((V657));
	vs_top=(vs_base=base+2)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2320;}
	goto T2325;
T2325:;
	{register object V663;
	V664= CMPcaar((V657));
	if(!((CMPcaar((V657)))==(VV[92]))){
	goto T2339;}
	V666= (*(LnkLI329))(CMPcadar((V657)));
	V665= make_cons(/* INLINE-ARGS */V666,Cnil);
	goto T2337;
	goto T2339;
T2339:;
	V665= (*(LnkLI344))(CMPcdar((V657)));
	goto T2337;
T2337:;
	V667= make_cons(/* INLINE-ARGS */V664,V665);
	V668= (*(LnkLI344))(CMPcdr((V657)));
	V663= make_cons(/* INLINE-ARGS */V667,/* INLINE-ARGS */V668);
	V653= make_cons((V663),(V653));
	goto T2301;}
	goto T2320;
T2320:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[230],(V657))));
	goto T2301;
	goto T2308;
T2308:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[231],(V657))));
	goto T2301;
T2301:;
	V656= CMPcdr((V656));
	V657= CMPcar((V656));
	goto T2296;}
	goto T2292;
T2292:;
	{object V669;
	V670= CMPcar((V652));
	V671= CMPcadr((V652));
	V669= list(4,VV[226],/* INLINE-ARGS */V670,/* INLINE-ARGS */V671,reverse((V653)));
	(VV[25]->s.s_dbind)= make_cons((V669),(VV[25]->s.s_dbind));
	{object V672 = (VV[25]->s.s_dbind);
	VMR46(V672)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3DEFCFUN	*/

static object LI48(V676,V677,V678)

object V676;object V677;object V678;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{object V679;
	V679= Cnil;
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[232],VV[226])));
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))((V676)));
	princ_str("\n{",VV[26]);
	princ_str("\nobject *vs=vs_top;",VV[26]);
	princ_str("\nobject *old_top=vs_top+",VV[26]);
	(void)((*(LnkLI275))((V677)));
	princ_char(59,VV[26]);
	if(!(number_compare((V677),small_fixnum(0))>0)){
	goto T2362;}
	princ_str("\n	vs_top=old_top;",VV[26]);
	goto T2362;
T2362:;
	princ_str("\n{",VV[26]);
	{object V680;
	register object V681;
	V680= (V678);
	V681= CMPcar((V680));
	goto T2372;
T2372:;
	if(!(((V680))==Cnil)){
	goto T2373;}
	goto T2368;
	goto T2373;
T2373:;
	if(!(type_of((V681))==t_string)){
	goto T2379;}
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))((V681)));
	goto T2377;
	goto T2379;
T2379:;
	if(!((CMPcaar((V681)))==(VV[92]))){
	goto T2384;}
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))(CMPcadadr((V681))));
	{object V682= CMPcaadr((V681));
	if((V682!= VV[75]))goto T2389;
	princ_str("=VV[",VV[26]);
	(void)((*(LnkLI275))(CMPcadar((V681))));
	princ_str("];",VV[26]);
	goto T2377;
	goto T2389;
T2389:;
	princ_str("=object_to_",VV[26]);
	base[1]= symbol_name(CMPcaadr((V681)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V683= vs_base[0];
	(void)((*(LnkLI275))(V683));
	princ_str("(VV[",VV[26]);
	(void)((*(LnkLI275))(CMPcadar((V681))));
	princ_str("]);",VV[26]);
	goto T2377;}
	goto T2384;
T2384:;
	princ_str("\n{vs_base=vs_top=old_top;",VV[26]);
	{register object V684;
	register object V685;
	V684= CMPcdar((V681));
	V685= CMPcar((V684));
	goto T2406;
T2406:;
	if(!(((V684))==Cnil)){
	goto T2407;}
	goto T2402;
	goto T2407;
T2407:;
	princ_str("\nvs_push(",VV[26]);
	{object V686= CMPcar((V685));
	if((V686!= VV[75]))goto T2414;
	(void)((*(LnkLI275))(CMPcadr((V685))));
	goto T2413;
	goto T2414;
T2414:;
	if((V686!= VV[345]))goto T2416;
	princ_str("code_char((long)",VV[26]);
	(void)((*(LnkLI275))(CMPcadr((V685))));
	princ_char(41,VV[26]);
	goto T2413;
	goto T2416;
T2416:;
	if((V686!= VV[346]))goto T2420;
	if(!(number_compare(small_fixnum(0),(VV[115]->s.s_dbind))==0)){
	goto T2421;}
	princ_str("CMP",VV[26]);
	goto T2421;
T2421:;
	princ_str("make_fixnum((long)",VV[26]);
	(void)((*(LnkLI275))(CMPcadr((V685))));
	princ_char(41,VV[26]);
	goto T2413;
	goto T2420;
T2420:;
	if((V686!= VV[347]))goto T2428;
	princ_str("make_shortfloat((double)",VV[26]);
	(void)((*(LnkLI275))(CMPcadr((V685))));
	princ_char(41,VV[26]);
	goto T2413;
	goto T2428;
T2428:;
	if((V686!= VV[348]))goto T2432;
	princ_str("make_longfloat((double)",VV[26]);
	(void)((*(LnkLI275))(CMPcadr((V685))));
	princ_char(41,VV[26]);
	goto T2413;
	goto T2432;
T2432:;}
	goto T2413;
T2413:;
	princ_str(");",VV[26]);
	V684= CMPcdr((V684));
	V685= CMPcar((V684));
	goto T2406;}
	goto T2402;
T2402:;
	{register object x= CMPcaar((V681)),V687= (VV[80]->s.s_dbind);
	while(V687!=Cnil)
	if(eql(x,V687->c.c_car->c.c_car) &&V687->c.c_car != Cnil){
	V679= (V687->c.c_car);
	goto T2447;
	}else V687=V687->c.c_cdr;
	V679= Cnil;}
	goto T2447;
T2447:;
	if(((V679))==Cnil){
	goto T2445;}
	if(((VV[150]->s.s_dbind))==Cnil){
	goto T2449;}
	princ_str("\nihs_push(VV[",VV[26]);
	V688= (*(LnkLI331))(CMPcaar((V681)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V688));
	princ_str("]);",VV[26]);
	princ_str("\nL",VV[26]);
	(void)((*(LnkLI275))(CMPcdr((V679))));
	princ_str("();",VV[26]);
	princ_str("\nihs_pop();",VV[26]);
	goto T2443;
	goto T2449;
T2449:;
	princ_str("\nL",VV[26]);
	(void)((*(LnkLI275))(CMPcdr((V679))));
	princ_str("();",VV[26]);
	goto T2443;
	goto T2445;
T2445:;
	if(((VV[150]->s.s_dbind))==Cnil){
	goto T2464;}
	princ_str("\nsuper_funcall(VV[",VV[26]);
	V689= (*(LnkLI331))(CMPcaar((V681)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V689));
	princ_str("]);",VV[26]);
	goto T2443;
	goto T2464;
T2464:;
	if(((VV[164]->s.s_dbind))==Cnil){
	goto T2470;}
	princ_str("\nsuper_funcall_no_event(VV[",VV[26]);
	V690= (*(LnkLI331))(CMPcaar((V681)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V690));
	princ_str("]);",VV[26]);
	goto T2443;
	goto T2470;
T2470:;
	princ_str("\nCMPfuncall(VV[",VV[26]);
	V691= (*(LnkLI331))(CMPcaar((V681)));
	(void)((*(LnkLI275))(/* INLINE-ARGS */V691));
	princ_str("]->s.s_gfdef);",VV[26]);
	goto T2443;
T2443:;
	if((CMPcdr((V681)))==Cnil){
	goto T2478;}
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))(CMPcadadr((V681))));
	{object V692= CMPcaadr((V681));
	if((V692!= VV[75]))goto T2485;
	princ_str("=vs_base[0];",VV[26]);
	goto T2484;
	goto T2485;
T2485:;
	princ_str("=object_to_",VV[26]);
	base[1]= symbol_name(CMPcaadr((V681)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V693= vs_base[0];
	(void)((*(LnkLI275))(V693));
	princ_str("(vs_base[0]);",VV[26]);}
	goto T2484;
T2484:;
	{register object V694;
	register object V695;
	V694= CMPcddr((V681));
	V695= CMPcar((V694));
	goto T2495;
T2495:;
	if(!(((V694))==Cnil)){
	goto T2496;}
	goto T2478;
	goto T2496;
T2496:;
	princ_str("\nvs_base++;",VV[26]);
	princ_char(10,VV[26]);
	(void)((*(LnkLI275))(CMPcadr((V695))));
	{object V696= CMPcar((V695));
	if((V696!= VV[75]))goto T2506;
	princ_str("=(vs_base<vs_top?vs_base[0]:Cnil);",VV[26]);
	goto T2505;
	goto T2506;
T2506:;
	princ_str("=object_to_",VV[26]);
	base[3]= symbol_name(CMPcar((V695)));
	vs_top=(vs_base=base+3)+1;
	Lstring_downcase();
	vs_top=sup;
	V697= vs_base[0];
	(void)((*(LnkLI275))(V697));
	princ_str("((vs_base<vs_top?vs_base[0]:Cnil));",VV[26]);}
	goto T2505;
T2505:;
	V694= CMPcdr((V694));
	V695= CMPcar((V694));
	goto T2495;}
	goto T2478;
T2478:;
	princ_str("\n}",VV[26]);
	goto T2377;
T2377:;
	V680= CMPcdr((V680));
	V681= CMPcar((V680));
	goto T2372;}
	goto T2368;
T2368:;
	princ_str("\n}",VV[26]);
	princ_str("\nvs_top=vs;",VV[26]);
	princ_str("\n}",VV[26]);
	{object V698 = Cnil;
	VMR47(V698)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFENTRY	*/

static object LI49(V700)

register object V700;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{register object V701;
	register object V702;
	object V703;
	register object V704;
	V701= Cnil;
	V702= Cnil;
	(VV[62]->s.s_dbind)= number_plus((VV[62]->s.s_dbind),small_fixnum(1));
	V703= (VV[62]->s.s_dbind);
	V704= Cnil;
	if(((V700))==Cnil){
	goto T2535;}
	if((CMPcdr((V700)))==Cnil){
	goto T2535;}
	if(!((CMPcddr((V700)))==Cnil)){
	goto T2534;}
	goto T2535;
T2535:;
	V705 = CMPmake_fixnum((long)length((V700)));
	(void)((*(LnkLI284))(VV[233],small_fixnum(3),V705));
	goto T2534;
T2534:;
	if(type_of(CMPcar((V700)))==t_symbol){
	goto T2541;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[234],CMPcar((V700)))));
	goto T2541;
T2541:;
	{register object V706;
	register object V707;
	V706= CMPcadr((V700));
	V707= CMPcar((V706));
	goto T2548;
T2548:;
	if(!(((V706))==Cnil)){
	goto T2549;}
	goto T2544;
	goto T2549;
T2549:;
	{register object x= (V707),V708= VV[235];
	while(V708!=Cnil)
	if(eql(x,V708->c.c_car)){
	goto T2553;
	}else V708=V708->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[236],(V707))));
	goto T2553;
T2553:;
	V706= CMPcdr((V706));
	V707= CMPcar((V706));
	goto T2548;}
	goto T2544;
T2544:;
	V704= CMPcaddr((V700));
	if(!(type_of((V704))==t_symbol)){
	goto T2565;}
	V701= VV[75];
	base[1]= symbol_name((V704));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V702= vs_base[0];
	goto T2563;
	goto T2565;
T2565:;
	if(!(type_of((V704))==t_string)){
	goto T2572;}
	V701= VV[75];
	V702= (V704);
	goto T2563;
	goto T2572;
T2572:;
	if(!(type_of((V704))==t_cons)){
	goto T2578;}
	{register object x= CMPcar((V704)),V709= VV[237];
	while(V709!=Cnil)
	if(eql(x,V709->c.c_car)){
	goto T2582;
	}else V709=V709->c.c_cdr;
	goto T2578;}
	goto T2582;
T2582:;
	if(!(type_of(CMPcdr((V704)))==t_cons)){
	goto T2578;}
	if(type_of(CMPcadr((V704)))==t_symbol){
	goto T2585;}
	if(!(type_of(CMPcadr((V704)))==t_string)){
	goto T2578;}
	goto T2585;
T2585:;
	if(!((CMPcddr((V704)))==Cnil)){
	goto T2578;}
	if(!(type_of(CMPcadr((V704)))==t_symbol)){
	goto T2593;}
	base[1]= symbol_name(CMPcadr((V704)));
	vs_top=(vs_base=base+1)+1;
	Lstring_downcase();
	vs_top=sup;
	V702= vs_base[0];
	goto T2591;
	goto T2593;
T2593:;
	V702= CMPcadr((V704));
	goto T2591;
T2591:;
	V701= CMPcar((V704));
	goto T2563;
	goto T2578;
T2578:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[238],(V704))));
	goto T2563;
T2563:;
	{object V710;
	V710= list(6,VV[233],CMPcar((V700)),(V703),CMPcadr((V700)),(V701),(V702));
	(VV[25]->s.s_dbind)= make_cons((V710),(VV[25]->s.s_dbind));}
	{object V711;
	V711= make_cons(CMPcar((V700)),(V703));
	(VV[80]->s.s_dbind)= make_cons((V711),(VV[80]->s.s_dbind));
	{object V712 = (VV[80]->s.s_dbind);
	VMR48(V712)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T2DEFENTRY	*/

static object LI50(V718,V719,V720,V721,V722)

object V718;object V719;object V720;object V721;object V722;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	princ_str("\nstatic void L",VV[32]);
	(void)((*(LnkLI278))((V719)));
	princ_str("();",VV[32]);
	V723= list(2,VV[92],(V718));
	V724= list(3,VV[112],/* INLINE-ARGS */V723,(*(LnkLI305))(VV[239],(V719)));
	{object V725 = (VFUN_NARGS=1,(*(LnkLI304))(/* INLINE-ARGS */V724));
	VMR49(V725)}
	return Cnil;
}
/*	local entry for function T3DEFENTRY	*/

static object LI51(V731,V732,V733,V734,V735)

object V731;object V732;object V733;register object V734;object V735;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[240],(V731))));
	princ_str("\nstatic void L",VV[26]);
	(void)((*(LnkLI275))((V732)));
	princ_str("()",VV[26]);
	princ_str("\n{	object *old_base=vs_base;",VV[26]);
	{object V736= (V734);
	if((V736!= VV[241]))goto T2614;
	goto T2613;
	goto T2614;
T2614:;
	if((V736!= VV[159]))goto T2615;
	princ_str("\n	char *x;",VV[26]);
	goto T2613;
	goto T2615;
T2615:;
	princ_str("\n	",VV[26]);
	base[0]= symbol_name((V734));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V737= vs_base[0];
	(void)((*(LnkLI275))(V737));
	princ_str(" x;",VV[26]);}
	goto T2613;
T2613:;
	if(((VV[164]->s.s_dbind))==Cnil){
	goto T2622;}
	princ_str("\n	check_arg(",VV[26]);
	V738 = CMPmake_fixnum((long)length((V733)));
	(void)((*(LnkLI275))(V738));
	princ_str(");",VV[26]);
	goto T2622;
T2622:;
	if(((V734))==(VV[241])){
	goto T2628;}
	princ_str("\n	x=",VV[26]);
	goto T2628;
T2628:;
	princ_str("\n	",VV[26]);
	(void)((*(LnkLI275))((V735)));
	princ_char(40,VV[26]);
	if(((V733))==Cnil){
	goto T2636;}
	{register object V739;
	register long V740;
	V740= 0;
	V739= (V733);
	goto T2641;
T2641:;
	{object V741= CMPcar((V739));
	if((V741!= VV[75]))goto T2645;
	princ_str("\n	vs_base[",VV[26]);
	V742 = CMPmake_fixnum(V740);
	(void)((*(LnkLI275))(V742));
	princ_char(93,VV[26]);
	goto T2644;
	goto T2645;
T2645:;
	princ_str("\n	object_to_",VV[26]);
	base[0]= symbol_name(CMPcar((V739)));
	vs_top=(vs_base=base+0)+1;
	Lstring_downcase();
	vs_top=sup;
	V743= vs_base[0];
	(void)((*(LnkLI275))(V743));
	princ_str("(vs_base[",VV[26]);
	V744 = CMPmake_fixnum(V740);
	(void)((*(LnkLI275))(V744));
	princ_str("])",VV[26]);}
	goto T2644;
T2644:;
	if(!((CMPcdr((V739)))==Cnil)){
	goto T2656;}
	goto T2636;
	goto T2656;
T2656:;
	princ_char(44,VV[26]);
	V739= CMPcdr((V739));
	V740= (long)(V740)+1;
	goto T2641;}
	goto T2636;
T2636:;
	princ_str(");",VV[26]);
	princ_str("\n	vs_top=(vs_base=old_base)+1;",VV[26]);
	princ_str("\n	vs_base[0]=",VV[26]);
	{object V745= (V734);
	if((V745!= VV[241]))goto T2672;
	princ_str("Cnil",VV[26]);
	goto T2671;
	goto T2672;
T2672:;
	if((V745!= VV[75]))goto T2674;
	princ_char(120,VV[26]);
	goto T2671;
	goto T2674;
T2674:;
	if((V745!= VV[345]))goto T2676;
	princ_str("code_char(x)",VV[26]);
	goto T2671;
	goto T2676;
T2676:;
	if((V745!= VV[346]))goto T2678;
	if(!(number_compare(small_fixnum(0),(VV[115]->s.s_dbind))==0)){
	goto T2679;}
	princ_str("CMP",VV[26]);
	goto T2679;
T2679:;
	princ_str("make_fixnum(x)",VV[26]);
	goto T2671;
	goto T2678;
T2678:;
	if((V745!= VV[159]))goto T2684;
	princ_str("make_simple_string(x)",VV[26]);
	goto T2671;
	goto T2684;
T2684:;
	if((V745!= VV[347]))goto T2686;
	princ_str("make_shortfloat(x)",VV[26]);
	goto T2671;
	goto T2686;
T2686:;
	if((V745!= VV[348]))goto T2688;
	princ_str("make_longfloat(x)",VV[26]);
	goto T2671;
	goto T2688;
T2688:;}
	goto T2671;
T2671:;
	princ_char(59,VV[26]);
	princ_str("\n}",VV[26]);
	{object V746 = Cnil;
	VMR50(V746)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T1DEFLA	*/

static object LI52(V748)

object V748;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	{object V749 = Cnil;
	VMR51(V749)}
	return Cnil;
}
/*	local entry for function PARSE-CVSPECS	*/

static object LI53(V751)

object V751;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{register object V752;
	V752= Cnil;
	{register object V753;
	register object V754;
	V753= (V751);
	V754= CMPcar((V753));
	goto T2697;
T2697:;
	if(!(((V753))==Cnil)){
	goto T2698;}
	{object V755 = reverse((V752));
	VMR52(V755)}
	goto T2698;
T2698:;
	if(!(type_of((V754))==t_symbol)){
	goto T2704;}
	{object V756;
	base[2]= symbol_name((V754));
	vs_top=(vs_base=base+2)+1;
	Lstring_downcase();
	vs_top=sup;
	V757= vs_base[0];
	V756= list(2,VV[75],V757);
	V752= make_cons((V756),(V752));
	goto T2702;}
	goto T2704;
T2704:;
	if(!(type_of((V754))==t_string)){
	goto T2711;}
	{object V758;
	V758= list(2,VV[75],(V754));
	V752= make_cons((V758),(V752));
	goto T2702;}
	goto T2711;
T2711:;
	if(!(type_of((V754))==t_cons)){
	goto T2716;}
	{register object x= CMPcar((V754)),V759= VV[242];
	while(V759!=Cnil)
	if(eql(x,V759->c.c_car)){
	goto T2719;
	}else V759=V759->c.c_cdr;
	goto T2716;}
	goto T2719;
T2719:;
	{register object V760;
	register object V761;
	V760= CMPcdr((V754));
	V761= CMPcar((V760));
	goto T2723;
T2723:;
	if(!(((V760))==Cnil)){
	goto T2724;}
	goto T2702;
	goto T2724;
T2724:;
	{register object V762;
	V763= CMPcar((V754));
	if(!(type_of((V761))==t_symbol)){
	goto T2732;}
	base[4]= symbol_name((V761));
	vs_top=(vs_base=base+4)+1;
	Lstring_downcase();
	vs_top=sup;
	V764= vs_base[0];
	goto T2730;
	goto T2732;
T2732:;
	if(!(type_of((V761))==t_string)){
	goto T2736;}
	V764= (V761);
	goto T2730;
	goto T2736;
T2736:;
	V764= (VFUN_NARGS=2,(*(LnkLI266))(VV[243],(V761)));
	goto T2730;
T2730:;
	V762= list(2,/* INLINE-ARGS */V763,V764);
	V752= make_cons((V762),(V752));}
	V760= CMPcdr((V760));
	V761= CMPcar((V760));
	goto T2723;}
	goto T2716;
T2716:;
	(void)((VFUN_NARGS=2,(*(LnkLI266))(VV[244],(V754))));
	goto T2702;
T2702:;
	V753= CMPcdr((V753));
	V754= CMPcar((V753));
	goto T2697;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3LOCAL-DCFUN	*/

static object LI54(V770,V771,V772,V773,V774)

object V770;object V771;object V772;register object V773;register object V774;
{	 VMB53 VMS53 VMV53
	bds_check;
	goto TTL;
TTL:;
	{object V775;
	register object V776;
	object V777;
	if(((V770))==Cnil){
	goto T2751;}
	V775= small_fixnum(0);
	goto T2749;
	goto T2751;
T2751:;
	V775= STREF(object,(V773),16);
	goto T2749;
T2749:;
	V776= Cnil;
	bds_bind(VV[21],(*(LnkLI310))(CMPcadr((V774))));
	bds_bind(VV[118],Cnil);
	V777= CMPcaaddr((V774));
	if((STREF(object,(V773),0))==Cnil){
	goto T2759;}
	V778= STREF(object,(V773),0);
	goto T2757;
	goto T2759;
T2759:;
	V778= Cnil;
	goto T2757;
T2757:;
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[245],V778)));
	princ_str("\nstatic void ",VV[26]);
	if(((V770))==Cnil){
	goto T2766;}
	V779= VV[246];
	goto T2764;
	goto T2766;
T2766:;
	V779= VV[247];
	goto T2764;
T2764:;
	(void)((*(LnkLI275))(V779));
	(void)((*(LnkLI275))(STREF(object,(V773),12)));
	princ_char(40,VV[26]);
	princ_str("base0",VV[26]);
	if(((V777))==Cnil){
	goto T2775;}
	V780= VV[248];
	goto T2773;
	goto T2775;
T2775:;
	V780= VV[249];
	goto T2773;
T2773:;
	(void)((*(LnkLI275))(V780));
	(void)((*(LnkLI312))(STREF(object,CMPcadr((V774)),4),small_fixnum(2)));
	(void)((*(LnkLI317))(CMPcaaddr((V774)),Cnil));
	princ_str("register object *",VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base0;",VV[26]);
	bds_bind(VV[250],(V772));
	bds_bind(VV[129],VV[125]);
	bds_bind(VV[19],Cnil);
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],small_fixnum(0));
	bds_bind(VV[132],one_plus((V775)));
	bds_bind(VV[133],(V772));
	bds_bind(VV[134],(V771));
	bds_bind(VV[135],make_cons((VV[129]->s.s_dbind),Cnil));
	bds_bind(VV[136],(VV[129]->s.s_dbind));
	(VV[138]->s.s_dbind)= number_plus((VV[138]->s.s_dbind),small_fixnum(1));
	bds_bind(VV[137],(VV[138]->s.s_dbind));
	bds_bind(VV[139],Cnil);
	bds_bind(VV[140],Cnil);
	bds_bind(VV[141],Cnil);
	bds_bind(VV[142],small_fixnum(0));
	V776= (VV[137]->s.s_dbind);
	princ_str("\n{",VV[26]);
	(void)((*(LnkLI318))(STREF(object,CMPcadr((V774)),4),STREF(object,(V773),12),VV[251]));
	princ_str("\n	VMB",VV[26]);
	(void)((*(LnkLI275))((V776)));
	princ_str(" VMS",VV[26]);
	(void)((*(LnkLI275))((V776)));
	princ_str(" VMV",VV[26]);
	(void)((*(LnkLI275))((V776)));
	if(((VV[150]->s.s_dbind))==Cnil){
	goto T2799;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T2799;
T2799:;
	base[19]= CMPcaddr(CMPcddr((V774)));
	vs_top=(vs_base=base+19)+1;
	(void) (*Lnk319)();
	vs_top=sup;
	if(!(number_compare(small_fixnum(0),(VV[131]->s.s_dbind))==0)){
	goto T2807;}
	if(((VV[139]->s.s_dbind))!=Cnil){
	goto T2807;}
	if(((VV[141]->s.s_dbind))!=Cnil){
	goto T2807;}
	goto T2805;
	goto T2807;
T2807:;
	princ_str("\n	base[0]=base[0];",VV[26]);
	goto T2805;
T2805:;
	princ_str("\n}",VV[26]);
	(void)((*(LnkLI320))((V776),Ct));
	{object V781 = (*(LnkLI314))(STREF(object,(V773),12));
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
	VMR53(V781)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function T3LOCAL-FUN	*/

static object LI55(V787,V788,V789,V790,V791)

object V787;object V788;object V789;object V790;object V791;
{	 VMB54 VMS54 VMV54
	bds_check;
	goto TTL;
TTL:;
	{long V792;
	if(((V787))==Cnil){
	goto T2819;}
	V792= 0;
	goto T2817;
	goto T2819;
T2819:;
	V792= fix(STREF(object,(V790),16));
	goto T2817;
T2817:;
	bds_bind(VV[21],(*(LnkLI310))(CMPcadr((V791))));
	bds_bind(VV[118],Cnil);
	if(!(((V787))==(VV[252]))){
	goto T2822;}
	{object V793 = (*(LnkLI251))((V787),(V788),(V789),(V790),(V791));
	bds_unwind1;
	bds_unwind1;
	VMR54(V793)}
	goto T2822;
T2822:;
	if((STREF(object,(V790),0))==Cnil){
	goto T2828;}
	V794= STREF(object,(V790),0);
	goto T2826;
	goto T2828;
T2828:;
	V794= Cnil;
	goto T2826;
T2826:;
	(void)((VFUN_NARGS=2,(*(LnkLI316))(VV[253],V794)));
	princ_str("\nstatic void ",VV[32]);
	if(((V787))==Cnil){
	goto T2835;}
	V795= VV[254];
	goto T2833;
	goto T2835;
T2835:;
	V795= VV[255];
	goto T2833;
T2833:;
	(void)((*(LnkLI278))(V795));
	(void)((*(LnkLI278))(STREF(object,(V790),12)));
	princ_str("();",VV[32]);
	princ_str("\nstatic void ",VV[26]);
	if(((V787))==Cnil){
	goto T2844;}
	V796= VV[256];
	goto T2842;
	goto T2844;
T2844:;
	V796= VV[257];
	goto T2842;
T2842:;
	(void)((*(LnkLI275))(V796));
	(void)((*(LnkLI275))(STREF(object,(V790),12)));
	princ_char(40,VV[26]);
	{register object V797;
	register long V798;
	V797= CMPmake_fixnum(V792);
	V798= 0;
	goto T2852;
T2852:;
	V799 = CMPmake_fixnum(V798);
	if(!(number_compare(V799,(V797))>=0)){
	goto T2853;}
	princ_str("base",VV[26]);
	V800 = CMPmake_fixnum(V798);
	(void)((*(LnkLI275))(V800));
	princ_char(41,VV[26]);
	goto T2848;
	goto T2853;
T2853:;
	princ_str("base",VV[26]);
	V801 = CMPmake_fixnum(V798);
	(void)((*(LnkLI275))(V801));
	princ_char(44,VV[26]);
	V798= (long)(V798)+1;
	goto T2852;}
	goto T2848;
T2848:;
	princ_str("\nregister object ",VV[26]);
	{register object V802;
	register long V803;
	V802= CMPmake_fixnum(V792);
	V803= 0;
	goto T2873;
T2873:;
	V804 = CMPmake_fixnum(V803);
	if(!(number_compare(V804,(V802))>=0)){
	goto T2874;}
	princ_char(42,VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base",VV[26]);
	V805 = CMPmake_fixnum(V803);
	(void)((*(LnkLI275))(V805));
	princ_char(59,VV[26]);
	goto T2869;
	goto T2874;
T2874:;
	princ_char(42,VV[26]);
	(void)((*(LnkLI275))((VV[21]->s.s_dbind)));
	princ_str("base",VV[26]);
	V806 = CMPmake_fixnum(V803);
	(void)((*(LnkLI275))(V806));
	princ_char(44,VV[26]);
	V803= (long)(V803)+1;
	goto T2873;}
	goto T2869;
T2869:;
	(void)((*(LnkLI312))(STREF(object,CMPcadr((V791)),4),small_fixnum(2)));
	bds_bind(VV[129],VV[128]);
	bds_bind(VV[250],(V789));
	bds_bind(VV[19],Cnil);
	bds_bind(VV[130],small_fixnum(0));
	bds_bind(VV[131],small_fixnum(0));
	V807 = CMPmake_fixnum(V792);
	bds_bind(VV[132],one_plus(V807));
	bds_bind(VV[133],(V789));
	bds_bind(VV[134],(V788));
	bds_bind(VV[135],make_cons((VV[129]->s.s_dbind),Cnil));
	bds_bind(VV[136],(VV[129]->s.s_dbind));
	(VV[138]->s.s_dbind)= number_plus((VV[138]->s.s_dbind),small_fixnum(1));
	bds_bind(VV[137],(VV[138]->s.s_dbind));
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
	(void)((*(LnkLI318))(STREF(object,CMPcadr((V791)),4),STREF(object,(V790),12),VV[258]));
	princ_str(" VC",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	if(((VV[164]->s.s_dbind))==Cnil){
	goto T2914;}
	princ_str("\n	vs_reserve(VM",VV[26]);
	(void)((*(LnkLI275))((VV[137]->s.s_dbind)));
	princ_str(");",VV[26]);
	goto T2912;
	goto T2914;
T2914:;
	princ_str("\n	vs_check;",VV[26]);
	goto T2912;
T2912:;
	if(((VV[150]->s.s_dbind))==Cnil){
	goto T2920;}
	princ_str("\n	ihs_check;",VV[26]);
	goto T2920;
T2920:;
	if(((V787))==Cnil){
	goto T2926;}
	(void)((VFUN_NARGS=2,(*(LnkLI335))(CMPcaddr((V791)),CMPcaddr(CMPcddr((V791))))));
	goto T2924;
	goto T2926;
T2926:;
	(void)((VFUN_NARGS=3,(*(LnkLI335))(CMPcaddr((V791)),CMPcaddr(CMPcddr((V791))),(V790))));
	goto T2924;
T2924:;
	princ_str("\n}",VV[26]);
	{object V808;
	V808= make_cons((VV[137]->s.s_dbind),(VV[131]->s.s_dbind));
	(VV[34]->s.s_dbind)= make_cons((V808),(VV[34]->s.s_dbind));}
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
	{object V810 = (*(LnkLI314))(STREF(object,(V790),12));
	bds_unwind1;
	bds_unwind1;
	VMR54(V810)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-CVARS	*/

static object LI56()

{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{register object V811;
	V811= Cnil;
	{register object V812;
	register object V813;
	V812= (VV[19]->s.s_dbind);
	V813= CMPcar((V812));
	goto T2941;
T2941:;
	if(!(((V812))==Cnil)){
	goto T2942;}
	goto T2937;
	goto T2942;
T2942:;
	{register object V814;
	if(!(type_of((V813))==t_cons)){
	goto T2949;}
	{register object V815;
	V815= CMPcar((V813));
	V813= CMPcdr((V813));
	V814= (V815);
	goto T2947;}
	goto T2949;
T2949:;
	V814= Ct;
	goto T2947;
T2947:;
	if(!(((V811))==((V814)))){
	goto T2956;}
	base[1]= (VV[32]->s.s_dbind);
	base[2]= VV[259];
	base[3]= (V813);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	goto T2954;
	goto T2956;
T2956:;
	if(!(((V811))==Cnil)){
	goto T2962;}
	goto T2961;
	goto T2962;
T2962:;
	base[1]= (VV[32]->s.s_dbind);
	base[2]= VV[260];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	goto T2961;
T2961:;
	V811= (V814);
	base[1]= (VV[32]->s.s_dbind);
	base[2]= VV[261];
	base[3]= (*(LnkLI281))((V811));
	base[4]= (V813);
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
	goto T2954;
T2954:;
	if(!(((V811))==(VV[262]))){
	goto T2946;}
	base[1]= (VV[32]->s.s_dbind);
	base[2]= VV[263];
	base[3]= (V813);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;}
	goto T2946;
T2946:;
	V812= CMPcdr((V812));
	V813= CMPcar((V812));
	goto T2941;}
	goto T2937;
T2937:;
	if((VV[19]->s.s_dbind)==Cnil){
	goto T2982;}
	base[0]= (VV[32]->s.s_dbind);
	base[1]= VV[264];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	goto T2982;
T2982:;
	if(((VV[17]->s.s_dbind))==Cnil){
	goto T2986;}
	if(eql((VV[142]->s.s_dbind),small_fixnum(0))){
	goto T2986;}
	base[0]= (VV[32]->s.s_dbind);
	base[1]= VV[265];
	base[2]= (VV[142]->s.s_dbind);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V816 = vs_base[0];
	VMR55(V816)}
	goto T2986;
T2986:;
	{object V817 = Cnil;
	VMR55(V817)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function DO-DECL	*/

static void L26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_check;
	{object V818;
	V818=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(eql(STREF(object,(V818),16),VV[73])){
	goto T2994;}
	goto T2993;
	goto T2994;
T2994:;
	(VV[154]->s.s_dbind)= Ct;
	goto T2993;
T2993:;
	{object V819;
	V819= (*(LnkLI349))((V818));
	if(((V819))==Cnil){
	goto T2999;}
	{object V820;
	(VV[89]->s.s_dbind)= number_plus((VV[89]->s.s_dbind),small_fixnum(1));
	V820= (VV[89]->s.s_dbind);
	V821= Ct;
	STSET(object,(V818),4, (V819));
	(void)((V819));
	V822= Ct;
	STSET(object,(V818),16, (V820));
	(void)((V820));
	princ_str("\n	",VV[26]);
	if((base0[1])!=Cnil){
	goto T3006;}
	princ_char(123,VV[26]);
	base0[1]= Ct;
	goto T3006;
T3006:;
	base[1]= (*(LnkLI350))((V818));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2999;
T2999:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
static object  LnkTLI350(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[350],(void **)(void *)&LnkLI350,1,first,ap);va_end(ap);return V1;} /* WT-VAR-DECL */
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
static object  LnkTLI328(){return call_proc0(VV[328],(void **)(void *)&LnkLI328);} /* INC-INLINE-BLOCKS */
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
static object  LnkTLI282(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[282],(void **)(void *)&LnkLI282,1,first,ap);va_end(ap);return V1;} /* DECLARATION-TYPE */
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

