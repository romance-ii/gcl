
#include "cmpinclude.h"
#include "pcl_cpl.h"
void init_pcl_cpl(){do_init(VV);}
/*	local entry for function (FAST-METHOD COMPUTE-CLASS-PRECEDENCE-LIST (SLOT-CLASS))	*/

static object LI1(V4,V5,V6)

object V4;object V5;object V6;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= (V6);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk22)(Lclptr22);
	vs_top=sup;
	V8= vs_base[0];
	{object V9 = (*(LnkLI21))((V6),V8);
	VMR1(V9)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-CLASS-PRECEDENCE-DESCRIPTION	*/

static object LI2(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB2 VMS2 VMV2
	{object V10;
	object V11;
	object V12;
	object V13;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI2key,first,ap);
	V10=(Vcs[0]);
	V11=(Vcs[1]);
	V12=(Vcs[2]);
	V13=(Vcs[3]);
	base[0]= VV[0];
	base[1]= (V10);
	base[2]= (V11);
	base[3]= (V12);
	base[4]= (V13);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V14 = vs_base[0];
	VMR2(V14)}
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
	{object V19 = vs_base[0];
	VMR3(V19)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-STD-CPL	*/

static object LI4(V22,V23)

register object V22;register object V23;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if(((V23))!=Cnil){
	goto T17;}
	{object V24 = make_cons((V22),Cnil);
	VMR4(V24)}
	goto T17;
T17:;
	if((CMPcdr((V23)))!=Cnil){
	goto T20;}
	V25= CMPcar((V23));
	base[0]= CMPcar((V23));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk22)(Lclptr22);
	vs_top=sup;
	V26= vs_base[0];
	V27= (*(LnkLI21))(/* INLINE-ARGS */V25,V26);
	{object V28 = make_cons((V22),/* INLINE-ARGS */V27);
	VMR4(V28)}
	goto T20;
T20:;
	{object V29;
	object V30;
	base[0]= (V22);
	base[1]= (V23);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk28)();
	if(vs_base>=vs_top){vs_top=sup;goto T27;}
	V29= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T28;}
	V30= vs_base[0];
	vs_top=sup;
	goto T29;
	goto T27;
T27:;
	V29= Cnil;
	goto T28;
T28:;
	V30= Cnil;
	goto T29;
T29:;
	(void)((*(LnkLI29))((V29)));
	{object V31 = (*(LnkLI30))((V22),(V29),fix((V30)));
	VMR4(V31)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for COMPUTE-STD-CPL-PHASE-1	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{object V32;
	check_arg(2);
	V32=(base[1]);
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
	base[6]= (V32);
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

static object LI8(V34)

object V34;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{register object V35;
	object V36;
	V35= (V34);
	V36= CMPcar((V35));
	goto T44;
T44:;
	if(!(((V35))==Cnil)){
	goto T45;}
	{object V37 = Cnil;
	VMR6(V37)}
	goto T45;
T45:;
	{register object V38;
	V38= STREF(object,(V36),4);
	if(((V38))==Cnil){
	goto T49;}
	V39= nconc(STREF(object,(V36),8),(V38));
	V40= Ct;
	STSET(object,(V36),8, /* INLINE-ARGS */V39);
	(void)(/* INLINE-ARGS */V39);
	{object V41;
	object V42;
	V41= CMPcar((V38));
	V42= number_plus(CMPmake_fixnum((long)STREF(fixnum,(V41),12)),small_fixnum(1));
	V43= Ct;
	STSET(fixnum,(V41),12, fix((V42)));
	(void)(fix((V42)));}
	{register object V44;
	register object V45;
	V44= (V38);
	V45= CMPcdr((V44));
	goto T60;
T60:;
	if(((V45))!=Cnil){
	goto T61;}
	goto T49;
	goto T61;
T61:;
	{register object V46;
	object V47;
	V46= CMPcar((V45));
	V47= number_plus(CMPmake_fixnum((long)STREF(fixnum,(V46),12)),small_fixnum(2));
	V48= Ct;
	STSET(fixnum,(V46),12, fix((V47)));
	(void)(fix((V47)));}
	{object V49;
	register object V50;
	object V51;
	V49= CMPcar((V45));
	V50= CMPcar((V44));
	V51= make_cons((V49),STREF(object,(V50),8));
	V52= Ct;
	STSET(object,(V50),8, (V51));
	(void)((V51));}
	V44= (V45);
	V45= CMPcdr((V44));
	goto T60;}}
	goto T49;
T49:;
	V35= CMPcdr((V35));
	V36= CMPcar((V35));
	goto T44;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-STD-CPL-PHASE-3	*/

static object LI9(V56,V57,V58)

object V56;object V57;long V58;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V59;
	object V60;
	object V61;
	V59= Cnil;
	V60= Cnil;
	V61= Cnil;
	{object V62;
	object V63;
	V62= (V57);
	V63= CMPcar((V62));
	goto T86;
T86:;
	if(!(((V62))==Cnil)){
	goto T87;}
	goto T82;
	goto T87;
T87:;
	if(!(((long)STREF(fixnum,(V63),12))==0)){
	goto T91;}
	V59= make_cons(V63,(V59));
	goto T91;
T91:;
	V62= CMPcdr((V62));
	V63= CMPcar((V62));
	goto T86;}
	goto T82;
T82:;
	goto T101;
T101:;
	if(((V59))!=Cnil){
	goto T103;}
	if(!((V58)==0)){
	goto T107;}
	{object V65 = reverse((V61));
	VMR7(V65)}
	goto T107;
T107:;
	(void)((*(LnkLI32))((V56),(V57)));
	goto T103;
T103:;
	if((CMPcdr((V59)))!=Cnil){
	goto T112;}
	{object V66;
	V66= CMPcar((V59));
	V59= Cnil;
	V60= (V66);
	goto T110;}
	goto T112;
T112:;
	{register object V67;
	object V68;
	V67= (V61);
	V68= CMPcar((V67));
	goto T120;
T120:;
	if(!(((V67))==Cnil)){
	goto T121;}
	V60= Cnil;
	goto T110;
	goto T121;
T121:;
	{object V69;
	base[1]= (V68);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk22)(Lclptr22);
	vs_top=sup;
	V69= vs_base[0];
	{register object x= STREF(object,CMPcar((V59)),0),V70= (V69);
	while(V70!=Cnil)
	if(x==(V70->c.c_car)){
	goto T130;
	}else V70=V70->c.c_cdr;
	goto T129;}
	goto T130;
T130:;
	{object V71;
	V71= CMPcar((V59));
	V59= CMPcdr((V59));
	V60= (V71);
	goto T110;}
	goto T129;
T129:;
	{register object V72;
	V72= (V59);
	goto T135;
T135:;
	if((CMPcdr((V72)))!=Cnil){
	goto T136;}
	goto T125;
	goto T136;
T136:;
	{register object V73;
	V73= CMPcadr((V72));
	{register object x= STREF(object,(V73),0),V74= (V69);
	while(V74!=Cnil)
	if(x==(V74->c.c_car)){
	goto T143;
	}else V74=V74->c.c_cdr;
	goto T140;}
	goto T143;
T143:;
	{register object V76;
	V76= CMPcddr((V72));
	(V72)->c.c_cdr = (V76);}
	V60= (V73);
	goto T110;}
	goto T140;
T140:;
	V72= CMPcdr((V72));
	goto T135;}}
	goto T125;
T125:;
	V67= CMPcdr((V67));
	V68= CMPcar((V67));
	goto T120;}
	goto T110;
T110:;
	V58= (long)(V58)-(1);
	{object V77;
	V77= STREF(object,(V60),0);
	V61= make_cons((V77),(V61));}
	{register object V78;
	object V79;
	V78= STREF(object,(V60),8);
	V79= CMPcar((V78));
	goto T163;
T163:;
	if(!(((V78))==Cnil)){
	goto T164;}
	goto T102;
	goto T164;
T164:;
	{object V82;
	V82= number_minus(CMPmake_fixnum((long)STREF(fixnum,V79,12)),small_fixnum(1));
	V83= Ct;
	STSET(fixnum,V79,12, fix((V82)));
	V80= CMPmake_fixnum((long)fix((V82)));}
	if(!(number_compare(small_fixnum(0),V80)==0)){
	goto T168;}
	V59= make_cons(V79,(V59));
	goto T168;
T168:;
	V78= CMPcdr((V78));
	V79= CMPcar((V78));
	goto T163;}
	goto T102;
T102:;
	goto T101;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CPL-ERROR	*/

static object LI10(object V86,object V85,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB8 VMS8 VMV8
	{object V87;
	object V88;
	object V89;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V87= V86;
	V88= V85;
	narg= narg - 2;
	V90 = list_vector_new(narg,first,ap);
	V89= V90;
	base[0]= VV[4];
	base[2]= (V87);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk33)(Lclptr33);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T183;}
	base[2]= Cnil;
	base[3]= VV[5];
	base[5]= (V87);
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
	base[1]= (V87);
	goto T181;
T181:;
	base[3]= Cnil;
	base[4]= (V88);
	{object V91;
	V91= (V89);
	 vs_top=base+5;
	 while(V91!=Cnil)
	 {vs_push((V91)->c.c_car);V91=(V91)->c.c_cdr;}
	vs_base=base+3;}
	Lformat();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	{object V92 = vs_base[0];
	VMR8(V92)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function CPL-FORWARD-REFERENCED-CLASS-ERROR	*/

static object LI11(V95,V96)

register object V95;object V96;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{object V97;
	base[1]= (V95);
	base[2]= (V96);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk34)();
	vs_top=sup;
	V100= vs_base[0];
	{object V98;
	object V99= CMPcdr(V100);
	if(V99==Cnil){
	V97= Cnil;
	goto T194;}
	base[0]=V98=MMcons(Cnil,Cnil);
	goto T195;
T195:;
	base[1]= (V99->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L12(base);
	vs_top=sup;
	(V98->c.c_car)= vs_base[0];
	if((V99=MMcdr(V99))==Cnil){
	V97= base[0];
	goto T194;}
	V98=MMcdr(V98)=MMcons(Cnil,Cnil);
	goto T195;}
	goto T194;
T194:;
	base[0]= (V96);
	vs_top=(vs_base=base+0)+1;
	L12(base);
	vs_top=sup;
	V101= vs_base[0];
	base[0]= (V96);
	vs_top=(vs_base=base+0)+1;
	L12(base);
	vs_top=sup;
	V102= vs_base[0];
	if((CMPcdr((V97)))!=Cnil){
	goto T207;}
	base[0]= Cnil;
	base[1]= VV[7];
	base[3]= (V95);
	vs_top=(vs_base=base+3)+1;
	L12(base);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V103= vs_base[0];
	goto T205;
	goto T207;
T207:;
	base[0]= Cnil;
	base[1]= VV[8];
	base[3]= (V95);
	vs_top=(vs_base=base+3)+1;
	L12(base);
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= Cnil;
	base[5]= VV[9];
	base[7]= (V97);
	vs_top=(vs_base=base+7)+1;
	Lbutlast();
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	base[5]= (V97);
	vs_top=(vs_base=base+5)+1;
	Llast();
	vs_top=sup;
	V104= vs_base[0];
	base[4]= CMPcar(V104);
	vs_top=(vs_base=base+0)+5;
	Lformat();
	vs_top=sup;
	V103= vs_base[0];
	goto T205;
T205:;
	{object V105 = (VFUN_NARGS=5,(*(LnkLI35))((V95),VV[6],V101,V102,V103));
	VMR9(V105)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for FIND-SUPERCLASS-CHAIN	*/

static void L13()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM10; VC10
	vs_check;
	{VOL object V106;
	check_arg(2);
	V106=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]=alloc_frame_id();
	frs_push(FRS_CATCH,base[2]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	base[3]= (V106);
	base[4]= make_cons((V106),Cnil);
	vs_top=(vs_base=base+3)+2;
	L14(base);
	frs_pop();
	return;
	}
	}
}
/*	local entry for function CPL-INCONSISTENT-ERROR	*/

static object LI15(V109,V110)

object V109;object V110;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V111;
	V111= (*(LnkLI36))((V110));
	if((CMPcdr((V111)))==Cnil){
	goto T230;}
	V112= VV[12];
	goto T228;
	goto T230;
T230:;
	V112= VV[13];
	goto T228;
T228:;
	if((CMPcdr((V111)))==Cnil){
	goto T234;}
	V113= VV[14];
	goto T232;
	goto T234;
T234:;
	V113= VV[15];
	goto T232;
T232:;
	{object V115;
	V115= (V111);
	 vs_top=base+0;
	 while(V115!=Cnil)
	 {vs_push((V115)->c.c_car);V115=(V115)->c.c_cdr;}
	vs_base=base+0;}
	Lappend();
	vs_top=sup;
	V114= vs_base[0];
	V116= (*(LnkLI37))(V114);
	{object V117 = (VFUN_NARGS=5,(*(LnkLI35))((V109),VV[11],V112,V113,/* INLINE-ARGS */V116));
	VMR11(V117)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FORMAT-CYCLE-REASONS	*/

static object LI16(V119)

object V119;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V120;
	object V121= (V119);
	if(V121==Cnil){
	{object V122 = Cnil;
	VMR12(V122)}}
	base[0]=V120=MMcons(Cnil,Cnil);
	goto T238;
T238:;
	{register object V123;
	V123= (V121->c.c_car);
	{object V124= CMPcaddr((V123));
	if((V124!= VV[19]))goto T240;
	base[1]= Cnil;
	base[2]= VV[16];
	base[4]= CMPcadr((V123));
	vs_top=(vs_base=base+4)+1;
	L17(base);
	vs_top=sup;
	base[3]= vs_base[0];
	base[5]= CMPcar((V123));
	vs_top=(vs_base=base+5)+1;
	L17(base);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
	(V120->c.c_car)= vs_base[0];
	goto T239;
	goto T240;
T240:;
	if((V124!= VV[20]))goto T247;
	base[1]= Cnil;
	base[2]= VV[17];
	base[4]= CMPcadr((V123));
	vs_top=(vs_base=base+4)+1;
	L17(base);
	vs_top=sup;
	base[3]= vs_base[0];
	base[5]= CMPcar((V123));
	vs_top=(vs_base=base+5)+1;
	L17(base);
	vs_top=sup;
	base[4]= vs_base[0];
	base[6]= CMPcadddr((V123));
	vs_top=(vs_base=base+6)+1;
	L17(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+1)+5;
	Lformat();
	vs_top=sup;
	(V120->c.c_car)= vs_base[0];
	goto T239;
	goto T247;
T247:;
	FEerror("The ECASE key value ~s is illegal.",1,V124);
	(V120->c.c_car)= Cnil;
	goto T239;}}
	goto T239;
T239:;
	if((V121=MMcdr(V121))==Cnil){
	{object V125 = base[0];
	VMR12(V125)}}
	V120=MMcdr(V120)=MMcons(Cnil,Cnil);
	goto T238;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIND-CYCLE-REASONS	*/

static object LI21(V127)

object V127;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	base[0]= (V127);
	base[1]= Cnil;
	base[2]= Cnil;
	{register object V128;
	object V129;
	V128= base[0];
	V129= CMPcar((V128));
	goto T260;
T260:;
	if(!(((V128))==Cnil)){
	goto T261;}
	goto T256;
	goto T261;
T261:;
	if(((long)STREF(fixnum,(V129),12))==0){
	goto T265;}
	base[4]= make_cons((V129),Cnil);
	vs_top=(vs_base=base+4)+1;
	L22(base);
	vs_top=sup;
	goto T265;
T265:;
	V128= CMPcdr((V128));
	V129= CMPcar((V128));
	goto T260;}
	goto T256;
T256:;
	{object V130 = base[2];
	VMR13(V130)}
	base[0]=base[0];
	return Cnil;
}
/*	local function RECORD-CYCLE	*/

static void L23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V131;
	check_arg(1);
	V131=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V132;
	V132= Cnil;
	{object V133;
	object V134;
	V133= (V131);
	V134= CMPcdr((V133));
	goto T278;
T278:;
	if(((V134))!=Cnil){
	goto T279;}
	goto T274;
	goto T279;
T279:;
	{register object V135;
	register object V136;
	V135= CMPcar((V133));
	V136= CMPcar((V134));
	{register object x= (V136),V137= STREF(object,(V135),4);
	while(V137!=Cnil)
	if(x==(V137->c.c_car)){
	goto T288;
	}else V137=V137->c.c_cdr;
	goto T287;}
	goto T288;
T288:;
	{object V138;
	V138= list(3,(V135),(V136),VV[19]);
	V132= make_cons((V138),(V132));
	goto T283;}
	goto T287;
T287:;
	{register object V139;
	register object V140;
	V139= base0[0];
	V140= CMPcar((V139));
	goto T294;
T294:;
	if(!(((V139))==Cnil)){
	goto T295;}
	goto T283;
	goto T295;
T295:;
	{register object x= (V135),V143= STREF(object,(V140),4);
	while(V143!=Cnil)
	if(x==(V143->c.c_car)){
	V142= V143;
	goto T302;
	}else V143=V143->c.c_cdr;
	V142= Cnil;}
	goto T302;
T302:;
	{register object x= (V136),V141= V142;
	while(V141!=Cnil)
	if(x==(V141->c.c_car)){
	goto T301;
	}else V141=V141->c.c_cdr;
	goto T299;}
	goto T301;
T301:;
	{object V144;
	V144= list(4,(V135),(V136),VV[20],(V140));
	V132= make_cons((V144),(V132));
	goto T283;}
	goto T299;
T299:;
	V139= CMPcdr((V139));
	V140= CMPcar((V139));
	goto T294;}}
	goto T283;
T283:;
	V133= (V134);
	V134= CMPcdr((V133));
	goto T278;}
	goto T274;
T274:;
	{object V145;
	V145= nreverse((V132));
	base0[2]= make_cons((V145),base0[2]);
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
	{object V146;
	check_arg(1);
	V146=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object x= CMPcar((V146)),V147= CMPcdr((V146));
	while(V147!=Cnil)
	if(x==(V147->c.c_car)){
	goto T319;
	}else V147=V147->c.c_cdr;
	goto T318;}
	goto T319;
T319:;
	V149= CMPcar((V146));
	V150= nreverse((V146));
	{register object x= /* INLINE-ARGS */V149,V148= /* INLINE-ARGS */V150;
	while(V148!=Cnil)
	if(x==(V148->c.c_car)){
	base[1]= V148;
	goto T320;
	}else V148=V148->c.c_cdr;
	base[1]= Cnil;}
	goto T320;
T320:;
	vs_top=(vs_base=base+1)+1;
	L23(base0);
	return;
	goto T318;
T318:;
	{register object x= CMPcar((V146)),V151= base0[1];
	while(V151!=Cnil)
	if(x==(V151->c.c_car)){
	goto T322;
	}else V151=V151->c.c_cdr;}
	{object V152;
	V152= CMPcar((V146));
	base0[1]= make_cons((V152),base0[1]);}
	{register object V153;
	object V154;
	V153= STREF(object,CMPcar((V146)),8);
	V154= CMPcar((V153));
	goto T330;
T330:;
	if(!(((V153))==Cnil)){
	goto T331;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T331;
T331:;
	base[3]= make_cons((V154),(V146));
	vs_top=(vs_base=base+3)+1;
	L22(base0);
	vs_top=sup;
	V153= CMPcdr((V153));
	V154= CMPcar((V153));
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
	{object V155;
	check_arg(1);
	V155=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V156;
	V156= STREF(object,(V155),0);
	base[1]= (V156);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk33)(Lclptr33);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T344;}
	base[1]= Cnil;
	base[2]= VV[18];
	base[4]= (V156);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk33)(Lclptr33);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	goto T344;
T344:;
	base[1]= (V156);
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
	{object V157;
	register object V158;
	check_arg(2);
	V157=(base[0]);
	V158=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(((V157))==(base0[1]))){
	goto T352;}
	base[2]= nreverse((V158));
	vs_top=(vs_base=base+2)+1;
	unwind(frs_sch(base0[2]),Cnil);
	goto T352;
T352:;
	{register object V159;
	register object V160;
	base[4]= (V157);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk22)(Lclptr22);
	vs_top=sup;
	V159= vs_base[0];
	V160= CMPcar((V159));
	goto T359;
T359:;
	if(!(((V159))==Cnil)){
	goto T360;}
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T360;
T360:;
	base[4]= (V160);
	base[5]= make_cons((V160),(V158));
	vs_top=(vs_base=base+4)+2;
	L14(base0);
	vs_top=sup;
	V159= CMPcdr((V159));
	V160= CMPcar((V159));
	goto T359;}
	}
}
/*	local function CLASS-OR-NAME	*/

static void L12(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{object V161;
	check_arg(1);
	V161=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V161);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk33)(Lclptr33);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T373;}
	base[1]= Cnil;
	base[2]= VV[10];
	base[4]= (V161);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk33)(Lclptr33);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	goto T373;
T373:;
	base[1]= (V161);
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
	{object V162;
	check_arg(1);
	V162=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V163;
	base[1]= (V162);
	base[2]= base0[4];
	vs_top=(vs_base=base+1)+2;
	Lgethash();
	vs_top=sup;
	V163= vs_base[0];
	if(V163==Cnil)goto T380;
	base[1]= V163;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T380;
T380:;}
	{object V166;
	V166= (*(LnkLI38))();
	base[2]= V162;
	base[3]= base0[4];
	base[4]= (V166);
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
	{register object V167;
	object V168;
	check_arg(2);
	V167=(base[0]);
	V168=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V167);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk39)(Lclptr39);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T389;}
	base[2]= (*(LnkLI40))(base0[0],(V167));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T389;
T389:;
	{register object V169;
	base[2]= (V167);
	vs_top=(vs_base=base+2)+1;
	L6(base0);
	vs_top=sup;
	V169= vs_base[0];
	if((STREF(object,(V169),0))!=Cnil){
	goto T395;}
	V170= Ct;
	STSET(object,(V169),0, (V167));
	(void)((V167));
	base0[2]= CMPmake_fixnum((long)(fix(base0[2]))+(1));
	base0[3]= make_cons(V169,base0[3]);
	{object V173;
	object V174= (V168);
	if(V174==Cnil){
	V172= Cnil;
	goto T403;}
	base[2]=V173=MMcons(Cnil,Cnil);
	goto T404;
T404:;
	base[3]= (V174->c.c_car);
	vs_top=(vs_base=base+3)+1;
	L6(base0);
	vs_top=sup;
	(V173->c.c_car)= vs_base[0];
	if((V174=MMcdr(V174))==Cnil){
	V172= base[2];
	goto T403;}
	V173=MMcdr(V173)=MMcons(Cnil,Cnil);
	goto T404;}
	goto T403;
T403:;
	V175= Ct;
	STSET(object,(V169),4, V172);
	(void)(V172);
	{register object V176;
	register object V177;
	V176= (V168);
	V177= CMPcar((V176));
	goto T410;
T410:;
	if(!(((V176))==Cnil)){
	goto T411;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T411;
T411:;
	base[3]= (V177);
	base[5]= (V177);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk22)(Lclptr22);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	L7(base0);
	vs_top=sup;
	V176= CMPcdr((V176));
	V177= CMPcar((V176));
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

