
#include "cmpinclude.h"
#include "pcl_cpl.h"
void init_pcl_cpl(){do_init(VV);}
/*	local entry for function (FAST-METHOD COMPUTE-CLASS-PRECEDENCE-LIST (SLOT-CLASS))	*/

static object LI1(V4,V5,V6)

object V4;object V5;object V6;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	V8 = (V6);
	base[0]= (V6);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk22)(Lclptr22);
	vs_top=sup;
	V9= vs_base[0];
	{object V10 = (*(LnkLI21))(V8,V9);
	VMR1(V10)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-CLASS-PRECEDENCE-DESCRIPTION	*/

static object LI2(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB2 VMS2 VMV2
	{object V11;
	object V12;
	object V13;
	object V14;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI2key,first,ap);
	V11=(Vcs[0]);
	V12=(Vcs[1]);
	V13=(Vcs[2]);
	V14=(Vcs[3]);
	base[0]= VV[0];
	base[1]= (V11);
	base[2]= (V12);
	base[3]= (V13);
	base[4]= (V14);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V15 = vs_base[0];
	VMR2(V15)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MAKE-CPD	*/

static object LI3()

{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	base[0]= VV[0];
	base[1]= Cnil;
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= small_fixnum(0);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V20 = vs_base[0];
	VMR3(V20)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-STD-CPL	*/

static object LI4(V23,V24)

register object V23;register object V24;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if(((V24))!=Cnil){
	goto T17;}
	{object V25 = make_cons((V23),Cnil);
	VMR4(V25)}
	goto T17;
T17:;
	if((CMPcdr((V24)))!=Cnil){
	goto T20;}
	V26 = (V23);
	V27= CMPcar((V24));
	base[0]= CMPcar((V24));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk22)(Lclptr22);
	vs_top=sup;
	V28= vs_base[0];
	V29= (*(LnkLI21))(/* INLINE-ARGS */V27,V28);
	{object V30 = make_cons(V26,/* INLINE-ARGS */V29);
	VMR4(V30)}
	goto T20;
T20:;
	{object V31;
	object V32;
	base[0]= (V23);
	base[1]= (V24);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk28)();
	if(vs_base>=vs_top){vs_top=sup;goto T27;}
	V31= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T28;}
	V32= vs_base[0];
	vs_top=sup;
	goto T29;
	goto T27;
T27:;
	V31= Cnil;
	goto T28;
T28:;
	V32= Cnil;
	goto T29;
T29:;
	(void)((*(LnkLI29))((V31)));
	{object V33 = (*(LnkLI30))((V23),(V31),fix((V32)));
	VMR4(V33)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for COMPUTE-STD-CPL-PHASE-1	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{object V34;
	check_arg(2);
	V34=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[5]= VV[1];
	base[6]= (VV[2]->s.s_dbind);
	base[7]= VV[3];
	base[8]= (VV[31]->s.s_gfdef);
	vs_top=(vs_base=base+5)+4;
	Lmake_hash_table();
	vs_top=sup;
	base[4]= vs_base[0];
	base[2]= small_fixnum(0);
	base[3]= Cnil;
	base[5]= base[0];
	base[6]= (V34);
	vs_top=(vs_base=base+5)+2;
	L7(base);
	vs_top=sup;
	base[5]= base[3];
	base[6]= base[2];
	vs_top=(vs_base=base+5)+2;
	return;
	}
}
/*	local entry for function COMPUTE-STD-CPL-PHASE-2	*/

static object LI8(V36)

object V36;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{register object V37;
	object V38;
	V37= (V36);
	V38= CMPcar((V37));
	goto T44;
T44:;
	if(!(((V37))==Cnil)){
	goto T45;}
	{object V39 = Cnil;
	VMR6(V39)}
	goto T45;
T45:;
	{register object V40;
	V40= STREF(object,(V38),4);
	if(((V40))==Cnil){
	goto T49;}
	V41 = (V38);
	V42= nconc(STREF(object,(V38),8),(V40));
	V43= Ct;
	STSET(object,V41,8, /* INLINE-ARGS */V42);
	(void)(/* INLINE-ARGS */V42);
	{object V44;
	object V45;
	V44= CMPcar((V40));
	V45= number_plus(CMPmake_fixnum((long)STREF(fixnum,(V44),12)),small_fixnum(1));
	V46 = (V44);
	V47 = fix((V45));
	V48= Ct;
	STSET(fixnum,V46,12, V47);
	(void)(V47);}
	{register object V49;
	register object V50;
	V49= (V40);
	V50= CMPcdr((V49));
	goto T60;
T60:;
	if(((V50))!=Cnil){
	goto T61;}
	goto T49;
	goto T61;
T61:;
	{register object V51;
	object V52;
	V51= CMPcar((V50));
	V52= number_plus(CMPmake_fixnum((long)STREF(fixnum,(V51),12)),small_fixnum(2));
	V53 = (V51);
	V54 = fix((V52));
	V55= Ct;
	STSET(fixnum,V53,12, V54);
	(void)(V54);}
	{object V56;
	register object V57;
	object V58;
	V56= CMPcar((V50));
	V57= CMPcar((V49));
	V58= make_cons((V56),STREF(object,(V57),8));
	V59 = (V57);
	V60 = (V58);
	V61= Ct;
	STSET(object,V59,8, V60);
	(void)(V60);}
	V49= (V50);
	V50= CMPcdr((V49));
	goto T60;}}
	goto T49;
T49:;
	V37= CMPcdr((V37));
	V38= CMPcar((V37));
	goto T44;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-STD-CPL-PHASE-3	*/

static object LI9(V65,V66,V67)

object V65;object V66;long V67;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V68;
	object V69;
	object V70;
	V68= Cnil;
	V69= Cnil;
	V70= Cnil;
	{object V71;
	object V72;
	V71= (V66);
	V72= CMPcar((V71));
	goto T86;
T86:;
	if(!(((V71))==Cnil)){
	goto T87;}
	goto T82;
	goto T87;
T87:;
	if(!(((long)STREF(fixnum,(V72),12))==0)){
	goto T91;}
	V68= make_cons(V72,(V68));
	goto T91;
T91:;
	V71= CMPcdr((V71));
	V72= CMPcar((V71));
	goto T86;}
	goto T82;
T82:;
	goto T101;
T101:;
	if(((V68))!=Cnil){
	goto T103;}
	if(!((V67)==0)){
	goto T107;}
	{object V74 = reverse((V70));
	VMR7(V74)}
	goto T107;
T107:;
	(void)((*(LnkLI32))((V65),(V66)));
	goto T103;
T103:;
	if((CMPcdr((V68)))!=Cnil){
	goto T112;}
	{object V75;
	V75= CMPcar((V68));
	V68= Cnil;
	V69= (V75);
	goto T110;}
	goto T112;
T112:;
	{register object V76;
	object V77;
	V76= (V70);
	V77= CMPcar((V76));
	goto T120;
T120:;
	if(!(((V76))==Cnil)){
	goto T121;}
	V69= Cnil;
	goto T110;
	goto T121;
T121:;
	{object V78;
	base[1]= (V77);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk22)(Lclptr22);
	vs_top=sup;
	V78= vs_base[0];
	{register object x= STREF(object,CMPcar((V68)),0),V79= (V78);
	while(V79!=Cnil)
	if(x==(V79->c.c_car)){
	goto T130;
	}else V79=V79->c.c_cdr;
	goto T129;}
	goto T130;
T130:;
	{object V80;
	V80= CMPcar((V68));
	V68= CMPcdr((V68));
	V69= (V80);
	goto T110;}
	goto T129;
T129:;
	{register object V81;
	V81= (V68);
	goto T135;
T135:;
	if((CMPcdr((V81)))!=Cnil){
	goto T136;}
	goto T125;
	goto T136;
T136:;
	{register object V82;
	V82= CMPcadr((V81));
	{register object x= STREF(object,(V82),0),V83= (V78);
	while(V83!=Cnil)
	if(x==(V83->c.c_car)){
	goto T143;
	}else V83=V83->c.c_cdr;
	goto T140;}
	goto T143;
T143:;
	{register object V85;
	V85= CMPcddr((V81));
	(V81)->c.c_cdr = (V85);}
	V69= (V82);
	goto T110;}
	goto T140;
T140:;
	V81= CMPcdr((V81));
	goto T135;}}
	goto T125;
T125:;
	V76= CMPcdr((V76));
	V77= CMPcar((V76));
	goto T120;}
	goto T110;
T110:;
	V67= (long)(V67)-(1);
	{object V86;
	V86= STREF(object,(V69),0);
	V70= make_cons((V86),(V70));}
	{register object V87;
	object V88;
	V87= STREF(object,(V69),8);
	V88= CMPcar((V87));
	goto T163;
T163:;
	if(!(((V87))==Cnil)){
	goto T164;}
	goto T102;
	goto T164;
T164:;
	{object V91;
	V91= number_minus(CMPmake_fixnum((long)STREF(fixnum,V88,12)),small_fixnum(1));
	V92 = V88;
	V93 = fix((V91));
	V94= Ct;
	STSET(fixnum,V92,12, V93);
	V89= CMPmake_fixnum((long)V93);}
	if(!(number_compare(small_fixnum(0),V89)==0)){
	goto T168;}
	V68= make_cons(V88,(V68));
	goto T168;
T168:;
	V87= CMPcdr((V87));
	V88= CMPcar((V87));
	goto T163;}
	goto T102;
T102:;
	goto T101;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CPL-ERROR	*/

static object LI10(object V97,object V96,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB8 VMS8 VMV8
	{object V98;
	object V99;
	object V100;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V98= V97;
	V99= V96;
	narg= narg - 2;
	V101 = list_vector_new(narg,first,ap);
	V100= V101;
	base[0]= VV[4];
	base[2]= (V98);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk33)(Lclptr33);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T183;}
	base[2]= Cnil;
	base[3]= VV[5];
	base[5]= (V98);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk33)(Lclptr33);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[1]= vs_base[0];
	goto T181;
	goto T183;
T183:;
	base[1]= (V98);
	goto T181;
T181:;
	base[3]= Cnil;
	base[4]= (V99);
	{object V102;
	V102= (V100);
	 vs_top=base+5;
	 while(V102!=Cnil)
	 {vs_push((V102)->c.c_car);V102=(V102)->c.c_cdr;}
	vs_base=base+3;}
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V103 = vs_base[0];
	VMR8(V103)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function CPL-FORWARD-REFERENCED-CLASS-ERROR	*/

static object LI11(V106,V107)

register object V106;object V107;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{object V108;
	base[1]= (V106);
	base[2]= (V107);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk34)();
	vs_top=sup;
	V111= vs_base[0];
	{object V109;
	object V110= CMPcdr(V111);
	if(V110==Cnil){
	V108= Cnil;
	goto T194;}
	base[0]=V109=MMcons(Cnil,Cnil);
	goto T195;
T195:;
	base[1]= (V110->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L12(base);
	vs_top=sup;
	(V109->c.c_car)= vs_base[0];
	if((V110=MMcdr(V110))==Cnil){
	V108= base[0];
	goto T194;}
	V109=MMcdr(V109)=MMcons(Cnil,Cnil);
	goto T195;}
	goto T194;
T194:;
	V112 = (V106);
	base[0]= (V107);
	vs_top=(vs_base=base+0)+1;
	L12(base);
	vs_top=sup;
	V113= vs_base[0];
	base[0]= (V107);
	vs_top=(vs_base=base+0)+1;
	L12(base);
	vs_top=sup;
	V114= vs_base[0];
	if((CMPcdr((V108)))!=Cnil){
	goto T207;}
	base[0]= Cnil;
	base[1]= VV[7];
	base[3]= (V106);
	vs_top=(vs_base=base+3)+1;
	L12(base);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V115= vs_base[0];
	goto T205;
	goto T207;
T207:;
	base[0]= Cnil;
	base[1]= VV[8];
	base[3]= (V106);
	vs_top=(vs_base=base+3)+1;
	L12(base);
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= Cnil;
	base[5]= VV[9];
	base[7]= (V108);
	vs_top=(vs_base=base+7)+1;
	Lbutlast();
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	base[5]= (V108);
	vs_top=(vs_base=base+5)+1;
	Llast();
	vs_top=sup;
	V116= vs_base[0];
	base[4]= CMPcar(V116);
	vs_top=(vs_base=base+0)+5;
	Lformat();
	vs_top=sup;
	V115= vs_base[0];
	goto T205;
T205:;
	{object V117 = (VFUN_NARGS=5,(*(LnkLI35))(V112,VV[6],V113,V114,V115));
	VMR9(V117)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for FIND-SUPERCLASS-CHAIN	*/

static void L13()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM10; VC10
	vs_check;
	{VOL object V118;
	check_arg(2);
	V118=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]=alloc_frame_id();
	frs_push(FRS_CATCH,base[2]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	base[3]= (V118);
	base[4]= make_cons((V118),Cnil);
	vs_top=(vs_base=base+3)+2;
	L14(base);
	frs_pop();
	return;
	}
	}
}
/*	local entry for function CPL-INCONSISTENT-ERROR	*/

static object LI15(V121,V122)

object V121;object V122;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V123;
	V123= (*(LnkLI36))((V122));
	V124 = (V121);
	if((CMPcdr((V123)))==Cnil){
	goto T230;}
	V125= VV[12];
	goto T228;
	goto T230;
T230:;
	V125= VV[13];
	goto T228;
T228:;
	if((CMPcdr((V123)))==Cnil){
	goto T234;}
	V126= VV[14];
	goto T232;
	goto T234;
T234:;
	V126= VV[15];
	goto T232;
T232:;
	{object V128;
	V128= (V123);
	 vs_top=base+0;
	 while(V128!=Cnil)
	 {vs_push((V128)->c.c_car);V128=(V128)->c.c_cdr;}
	vs_base=base+0;}
	Lappend();
	vs_top=sup;
	V127= vs_base[0];
	V129= (*(LnkLI37))(V127);
	{object V130 = (VFUN_NARGS=5,(*(LnkLI35))(V124,VV[11],V125,V126,/* INLINE-ARGS */V129));
	VMR11(V130)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FORMAT-CYCLE-REASONS	*/

static object LI16(V132)

object V132;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V133;
	object V134= (V132);
	if(V134==Cnil){
	{object V135 = Cnil;
	VMR12(V135)}}
	base[0]=V133=MMcons(Cnil,Cnil);
	goto T238;
T238:;
	{register object V136;
	V136= (V134->c.c_car);
	{object V137= CMPcaddr((V136));
	if((V137!= VV[19]))goto T240;
	base[1]= Cnil;
	base[2]= VV[16];
	base[4]= CMPcadr((V136));
	vs_top=(vs_base=base+4)+1;
	L17(base);
	vs_top=sup;
	base[3]= vs_base[0];
	base[5]= CMPcar((V136));
	vs_top=(vs_base=base+5)+1;
	L17(base);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
	(V133->c.c_car)= vs_base[0];
	goto T239;
	goto T240;
T240:;
	if((V137!= VV[20]))goto T247;
	base[1]= Cnil;
	base[2]= VV[17];
	base[4]= CMPcadr((V136));
	vs_top=(vs_base=base+4)+1;
	L17(base);
	vs_top=sup;
	base[3]= vs_base[0];
	base[5]= CMPcar((V136));
	vs_top=(vs_base=base+5)+1;
	L17(base);
	vs_top=sup;
	base[4]= vs_base[0];
	base[6]= CMPcadddr((V136));
	vs_top=(vs_base=base+6)+1;
	L17(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+1)+5;
	Lformat();
	vs_top=sup;
	(V133->c.c_car)= vs_base[0];
	goto T239;
	goto T247;
T247:;
	FEerror("The ECASE key value ~s is illegal.",1,V137);
	(V133->c.c_car)= Cnil;
	goto T239;}}
	goto T239;
T239:;
	if((V134=MMcdr(V134))==Cnil){
	{object V138 = base[0];
	VMR12(V138)}}
	V133=MMcdr(V133)=MMcons(Cnil,Cnil);
	goto T238;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIND-CYCLE-REASONS	*/

static object LI21(V140)

object V140;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	base[0]= (V140);
	base[1]= Cnil;
	base[2]= Cnil;
	{register object V141;
	object V142;
	V141= base[0];
	V142= CMPcar((V141));
	goto T260;
T260:;
	if(!(((V141))==Cnil)){
	goto T261;}
	goto T256;
	goto T261;
T261:;
	if(((long)STREF(fixnum,(V142),12))==0){
	goto T265;}
	base[4]= make_cons((V142),Cnil);
	vs_top=(vs_base=base+4)+1;
	L22(base);
	vs_top=sup;
	goto T265;
T265:;
	V141= CMPcdr((V141));
	V142= CMPcar((V141));
	goto T260;}
	goto T256;
T256:;
	{object V143 = base[2];
	VMR13(V143)}
	base[0]=base[0];
	return Cnil;
}
/*	local function RECORD-CYCLE	*/

static void L23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V144;
	check_arg(1);
	V144=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V145;
	V145= Cnil;
	{object V146;
	object V147;
	V146= (V144);
	V147= CMPcdr((V146));
	goto T278;
T278:;
	if(((V147))!=Cnil){
	goto T279;}
	goto T274;
	goto T279;
T279:;
	{register object V148;
	register object V149;
	V148= CMPcar((V146));
	V149= CMPcar((V147));
	{register object x= (V149),V150= STREF(object,(V148),4);
	while(V150!=Cnil)
	if(x==(V150->c.c_car)){
	goto T288;
	}else V150=V150->c.c_cdr;
	goto T287;}
	goto T288;
T288:;
	{object V151;
	V151= list(3,(V148),(V149),VV[19]);
	V145= make_cons((V151),(V145));
	goto T283;}
	goto T287;
T287:;
	{register object V152;
	register object V153;
	V152= base0[0];
	V153= CMPcar((V152));
	goto T294;
T294:;
	if(!(((V152))==Cnil)){
	goto T295;}
	goto T283;
	goto T295;
T295:;
	V155 = (V149);
	{register object x= (V148),V157= STREF(object,(V153),4);
	while(V157!=Cnil)
	if(x==(V157->c.c_car)){
	V156= V157;
	goto T302;
	}else V157=V157->c.c_cdr;
	V156= Cnil;}
	goto T302;
T302:;
	{register object x= V155,V154= V156;
	while(V154!=Cnil)
	if(x==(V154->c.c_car)){
	goto T301;
	}else V154=V154->c.c_cdr;
	goto T299;}
	goto T301;
T301:;
	{object V158;
	V158= list(4,(V148),(V149),VV[20],(V153));
	V145= make_cons((V158),(V145));
	goto T283;}
	goto T299;
T299:;
	V152= CMPcdr((V152));
	V153= CMPcar((V152));
	goto T294;}}
	goto T283;
T283:;
	V146= (V147);
	V147= CMPcdr((V146));
	goto T278;}
	goto T274;
T274:;
	{object V159;
	V159= nreverse((V145));
	base0[2]= make_cons((V159),base0[2]);
	base[2]= base0[2];
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	local function CHASE	*/

static void L22(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	{object V160;
	check_arg(1);
	V160=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object x= CMPcar((V160)),V161= CMPcdr((V160));
	while(V161!=Cnil)
	if(x==(V161->c.c_car)){
	goto T319;
	}else V161=V161->c.c_cdr;
	goto T318;}
	goto T319;
T319:;
	V163= CMPcar((V160));
	V164= nreverse((V160));
	{register object x= /* INLINE-ARGS */V163,V162= /* INLINE-ARGS */V164;
	while(V162!=Cnil)
	if(x==(V162->c.c_car)){
	base[1]= V162;
	goto T320;
	}else V162=V162->c.c_cdr;
	base[1]= Cnil;}
	goto T320;
T320:;
	vs_top=(vs_base=base+1)+1;
	L23(base0);
	return;
	goto T318;
T318:;
	{register object x= CMPcar((V160)),V165= base0[1];
	while(V165!=Cnil)
	if(x==(V165->c.c_car)){
	goto T322;
	}else V165=V165->c.c_cdr;}
	{object V166;
	V166= CMPcar((V160));
	base0[1]= make_cons((V166),base0[1]);}
	{register object V167;
	object V168;
	V167= STREF(object,CMPcar((V160)),8);
	V168= CMPcar((V167));
	goto T330;
T330:;
	if(!(((V167))==Cnil)){
	goto T331;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T331;
T331:;
	base[3]= make_cons((V168),(V160));
	vs_top=(vs_base=base+3)+1;
	L22(base0);
	vs_top=sup;
	V167= CMPcdr((V167));
	V168= CMPcar((V167));
	goto T330;}
	goto T322;
T322:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLASS-OR-NAME	*/

static void L17(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V169;
	check_arg(1);
	V169=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V170;
	V170= STREF(object,(V169),0);
	base[1]= (V170);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk33)(Lclptr33);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T344;}
	base[1]= Cnil;
	base[2]= VV[18];
	base[4]= (V170);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk33)(Lclptr33);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	goto T344;
T344:;
	base[1]= (V170);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function WALK	*/

static void L14(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{object V171;
	register object V172;
	check_arg(2);
	V171=(base[0]);
	V172=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(((V171))==(base0[1]))){
	goto T352;}
	base[2]= nreverse((V172));
	vs_top=(vs_base=base+2)+1;
	unwind(frs_sch(base0[2]),Cnil);
	goto T352;
T352:;
	{register object V173;
	register object V174;
	base[4]= (V171);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk22)(Lclptr22);
	vs_top=sup;
	V173= vs_base[0];
	V174= CMPcar((V173));
	goto T359;
T359:;
	if(!(((V173))==Cnil)){
	goto T360;}
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T360;
T360:;
	base[4]= (V174);
	base[5]= make_cons((V174),(V172));
	vs_top=(vs_base=base+4)+2;
	L14(base0);
	vs_top=sup;
	V173= CMPcdr((V173));
	V174= CMPcar((V173));
	goto T359;}
	}
}
/*	local function CLASS-OR-NAME	*/

static void L12(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{object V175;
	check_arg(1);
	V175=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V175);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk33)(Lclptr33);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T373;}
	base[1]= Cnil;
	base[2]= VV[10];
	base[4]= (V175);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk33)(Lclptr33);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	goto T373;
T373:;
	base[1]= (V175);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function GET-CPD	*/

static void L6(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V176;
	check_arg(1);
	V176=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V177;
	base[1]= (V176);
	base[2]= base0[4];
	vs_top=(vs_base=base+1)+2;
	Lgethash();
	vs_top=sup;
	V177= vs_base[0];
	if(V177==Cnil)goto T380;
	base[1]= V177;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T380;
T380:;}
	{object V180;
	V180= (*(LnkLI38))();
	base[2]= V176;
	base[3]= base0[4];
	base[4]= (V180);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	return;}
	}
}
/*	local function WALK	*/

static void L7(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{register object V181;
	object V182;
	check_arg(2);
	V181=(base[0]);
	V182=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V181);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk39)(Lclptr39);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T389;}
	base[2]= (*(LnkLI40))(base0[0],(V181));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T389;
T389:;
	{register object V183;
	base[2]= (V181);
	vs_top=(vs_base=base+2)+1;
	L6(base0);
	vs_top=sup;
	V183= vs_base[0];
	if((STREF(object,(V183),0))!=Cnil){
	goto T395;}
	V184 = (V183);
	V185 = (V181);
	V186= Ct;
	STSET(object,V184,0, V185);
	(void)(V185);
	base0[2]= CMPmake_fixnum((long)(fix(base0[2]))+(1));
	base0[3]= make_cons(V183,base0[3]);
	V188 = (V183);
	{object V190;
	object V191= (V182);
	if(V191==Cnil){
	V189= Cnil;
	goto T403;}
	base[2]=V190=MMcons(Cnil,Cnil);
	goto T404;
T404:;
	base[3]= (V191->c.c_car);
	vs_top=(vs_base=base+3)+1;
	L6(base0);
	vs_top=sup;
	(V190->c.c_car)= vs_base[0];
	if((V191=MMcdr(V191))==Cnil){
	V189= base[2];
	goto T403;}
	V190=MMcdr(V190)=MMcons(Cnil,Cnil);
	goto T404;}
	goto T403;
T403:;
	V192= Ct;
	STSET(object,V188,4, V189);
	(void)(V189);
	{register object V193;
	register object V194;
	V193= (V182);
	V194= CMPcar((V193));
	goto T410;
T410:;
	if(!(((V193))==Cnil)){
	goto T411;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T411;
T411:;
	base[3]= (V194);
	base[5]= (V194);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk22)(Lclptr22);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	L7(base0);
	vs_top=sup;
	V193= CMPcdr((V193));
	V194= CMPcar((V193));
	goto T410;}
	goto T395;
T395:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
static object  LnkTLI40(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[40],(void **)(void *)&LnkLI40,2,first,ap);va_end(ap);return V1;} /* CPL-FORWARD-REFERENCED-CLASS-ERROR */
static void LnkT39(ptr) object *ptr;{ call_or_link_closure(VV[39],(void **)(void *)&Lnk39,(void **)(void *)&Lclptr39);} /* FORWARD-REFERENCED-CLASS-P */
static object  LnkTLI38(){return call_proc0(VV[38],(void **)(void *)&LnkLI38);} /* MAKE-CPD */
static object  LnkTLI37(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[37],(void **)(void *)&LnkLI37,1,first,ap);va_end(ap);return V1;} /* FORMAT-CYCLE-REASONS */
static object  LnkTLI36(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[36],(void **)(void *)&LnkLI36,1,first,ap);va_end(ap);return V1;} /* FIND-CYCLE-REASONS */
static object  LnkTLI35(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[35],(void **)(void *)&LnkLI35,first,ap);va_end(ap);return V1;} /* CPL-ERROR */
static void LnkT34(){ call_or_link(VV[34],(void **)(void *)&Lnk34);} /* FIND-SUPERCLASS-CHAIN */
static void LnkT33(ptr) object *ptr;{ call_or_link_closure(VV[33],(void **)(void *)&Lnk33,(void **)(void *)&Lclptr33);} /* CLASS-NAME */
static object  LnkTLI32(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[32],(void **)(void *)&LnkLI32,2,first,ap);va_end(ap);return V1;} /* CPL-INCONSISTENT-ERROR */
static object  LnkTLI30(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[30],(void **)(void *)&LnkLI30,65539,first,ap);va_end(ap);return V1;} /* COMPUTE-STD-CPL-PHASE-3 */
static object  LnkTLI29(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[29],(void **)(void *)&LnkLI29,1,first,ap);va_end(ap);return V1;} /* COMPUTE-STD-CPL-PHASE-2 */
static void LnkT28(){ call_or_link(VV[28],(void **)(void *)&Lnk28);} /* COMPUTE-STD-CPL-PHASE-1 */
static void LnkT22(ptr) object *ptr;{ call_or_link_closure(VV[22],(void **)(void *)&Lnk22,(void **)(void *)&Lclptr22);} /* CLASS-DIRECT-SUPERCLASSES */
static object  LnkTLI21(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[21],(void **)(void *)&LnkLI21,2,first,ap);va_end(ap);return V1;} /* COMPUTE-STD-CPL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

