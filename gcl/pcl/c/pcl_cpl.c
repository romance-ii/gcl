
#include "cmpinclude.h"
#include "pcl_cpl.h"
void init_pcl_cpl(){do_init(VV);}
/*	local entry for function (FAST-METHOD COMPUTE-CLASS-PRECEDENCE-LIST (SLOT-CLASS))	*/

static object LI1(V4,V5,V6)

object V4;object V5;register object V6;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= (V6);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk32)(Lclptr32);
	vs_top=sup;
	V8= vs_base[0];
	{object V9 = (*(LnkLI31))((V6),V8);
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
	goto T16;}
	{object V24 = make_cons((V22),Cnil);
	VMR4(V24)}
	goto T16;
T16:;
	if((CMPcdr((V23)))!=Cnil){
	goto T19;}
	V25= CMPcar((V23));
	base[0]= CMPcar((V23));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk32)(Lclptr32);
	vs_top=sup;
	V26= vs_base[0];
	V27= (*(LnkLI31))(/* INLINE-ARGS */V25,V26);
	{object V28 = make_cons((V22),/* INLINE-ARGS */V27);
	VMR4(V28)}
	goto T19;
T19:;
	{object V29;
	object V30;
	base[0]= (V22);
	base[1]= (V23);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk38)();
	if(vs_base>=vs_top){vs_top=sup;goto T26;}
	V29= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T27;}
	V30= vs_base[0];
	vs_top=sup;
	goto T28;
	goto T26;
T26:;
	V29= Cnil;
	goto T27;
T27:;
	V30= Cnil;
	goto T28;
T28:;
	(void)((*(LnkLI39))((V29)));
	{object V31 = (*(LnkLI40))((V22),(V29),fix((V30)));
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
	base[8]= (VV[41]->s.s_gfdef);
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
	goto T43;
T43:;
	if(!(((V35))==Cnil)){
	goto T44;}
	{object V37 = Cnil;
	VMR6(V37)}
	goto T44;
T44:;
	{register object V38;
	V38= STREF(object,(V36),4);
	if(((V38))==Cnil){
	goto T48;}
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
	goto T59;
T59:;
	if(((V45))!=Cnil){
	goto T60;}
	goto T48;
	goto T60;
T60:;
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
	goto T59;}}
	goto T48;
T48:;
	V35= CMPcdr((V35));
	V36= CMPcar((V35));
	goto T43;}
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
	goto T85;
T85:;
	if(!(((V62))==Cnil)){
	goto T86;}
	goto T81;
	goto T86;
T86:;
	if(!(((long)STREF(fixnum,(V63),12))==0)){
	goto T90;}
	V59= make_cons(V63,(V59));
	goto T90;
T90:;
	V62= CMPcdr((V62));
	V63= CMPcar((V62));
	goto T85;}
	goto T81;
T81:;
	goto T100;
T100:;
	if(((V59))!=Cnil){
	goto T102;}
	if(!((V58)==0)){
	goto T106;}
	{object V65 = reverse((V61));
	VMR7(V65)}
	goto T106;
T106:;
	(void)((*(LnkLI42))((V56),(V57)));
	goto T102;
T102:;
	if((CMPcdr((V59)))!=Cnil){
	goto T111;}
	{object V66;
	V66= CMPcar((V59));
	V59= Cnil;
	V60= (V66);
	goto T109;}
	goto T111;
T111:;
	{register object V67;
	object V68;
	V67= (V61);
	V68= CMPcar((V67));
	goto T119;
T119:;
	if(!(((V67))==Cnil)){
	goto T120;}
	V60= Cnil;
	goto T109;
	goto T120;
T120:;
	{object V69;
	base[1]= (V68);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk32)(Lclptr32);
	vs_top=sup;
	V69= vs_base[0];
	{register object x= STREF(object,CMPcar((V59)),0),V70= (V69);
	while(V70!=Cnil)
	if(x==(V70->c.c_car)){
	goto T129;
	}else V70=V70->c.c_cdr;
	goto T128;}
	goto T129;
T129:;
	{object V71;
	V71= CMPcar((V59));
	V59= CMPcdr((V59));
	V60= (V71);
	goto T109;}
	goto T128;
T128:;
	{register object V72;
	V72= (V59);
	goto T134;
T134:;
	if((CMPcdr((V72)))!=Cnil){
	goto T135;}
	goto T124;
	goto T135;
T135:;
	{register object V73;
	V73= CMPcadr((V72));
	{register object x= STREF(object,(V73),0),V74= (V69);
	while(V74!=Cnil)
	if(x==(V74->c.c_car)){
	goto T142;
	}else V74=V74->c.c_cdr;
	goto T139;}
	goto T142;
T142:;
	{register object V76;
	V76= CMPcddr((V72));
	(V72)->c.c_cdr = (V76);}
	V60= (V73);
	goto T109;}
	goto T139;
T139:;
	V72= CMPcdr((V72));
	goto T134;}}
	goto T124;
T124:;
	V67= CMPcdr((V67));
	V68= CMPcar((V67));
	goto T119;}
	goto T109;
T109:;
	V58= (long)(V58)-(1);
	{object V77;
	V77= STREF(object,(V60),0);
	V61= make_cons((V77),(V61));}
	{register object V78;
	object V79;
	V78= STREF(object,(V60),8);
	V79= CMPcar((V78));
	goto T162;
T162:;
	if(!(((V78))==Cnil)){
	goto T163;}
	goto T101;
	goto T163;
T163:;
	{object V82;
	V82= number_minus(CMPmake_fixnum((long)STREF(fixnum,V79,12)),small_fixnum(1));
	V83= Ct;
	STSET(fixnum,V79,12, fix((V82)));
	V80= CMPmake_fixnum((long)fix((V82)));}
	if(!(number_compare(small_fixnum(0),V80)==0)){
	goto T167;}
	V59= make_cons(V79,(V59));
	goto T167;
T167:;
	V78= CMPcdr((V78));
	V79= CMPcar((V78));
	goto T162;}
	goto T101;
T101:;
	goto T100;}
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
	(void) (*Lnk43)(Lclptr43);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T182;}
	base[2]= Cnil;
	base[3]= VV[5];
	base[5]= (V87);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk43)(Lclptr43);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[1]= vs_base[0];
	goto T180;
	goto T182;
T182:;
	base[1]= (V87);
	goto T180;
T180:;
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

register object V95;register object V96;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{object V97;
	base[1]= (V95);
	base[2]= (V96);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk44)();
	vs_top=sup;
	V100= vs_base[0];
	{object V98;
	object V99= CMPcdr(V100);
	if(V99==Cnil){
	V97= Cnil;
	goto T193;}
	base[0]=V98=MMcons(Cnil,Cnil);
	goto T194;
T194:;
	base[1]= (V99->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L12(base);
	vs_top=sup;
	(V98->c.c_car)= vs_base[0];
	if((V99=MMcdr(V99))==Cnil){
	V97= base[0];
	goto T193;}
	V98=MMcdr(V98)=MMcons(Cnil,Cnil);
	goto T194;}
	goto T193;
T193:;
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
	goto T206;}
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
	goto T204;
	goto T206;
T206:;
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
	goto T204;
T204:;
	{object V105 = (VFUN_NARGS=5,(*(LnkLI45))((V95),VV[6],V101,V102,V103));
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
	V111= (*(LnkLI46))((V110));
	if((CMPcdr((V111)))==Cnil){
	goto T229;}
	V112= VV[12];
	goto T227;
	goto T229;
T229:;
	V112= VV[13];
	goto T227;
T227:;
	if((CMPcdr((V111)))==Cnil){
	goto T233;}
	V113= VV[14];
	goto T231;
	goto T233;
T233:;
	V113= VV[15];
	goto T231;
T231:;
	{object V115;
	V115= (V111);
	 vs_top=base+0;
	 while(V115!=Cnil)
	 {vs_push((V115)->c.c_car);V115=(V115)->c.c_cdr;}
	vs_base=base+0;}
	Lappend();
	vs_top=sup;
	V114= vs_base[0];
	V116= (*(LnkLI47))(V114);
	{object V117 = (VFUN_NARGS=5,(*(LnkLI45))((V109),VV[11],V112,V113,/* INLINE-ARGS */V116));
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
	goto T237;
T237:;
	{register object V123;
	V123= (V121->c.c_car);
	{object V124;
	V124= CMPcaddr((V123));
	{object V125= (V124);
	if((V125!= VV[29]))goto T240;
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
	goto T238;
	goto T240;
T240:;
	if((V125!= VV[30]))goto T247;
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
	goto T238;
	goto T247;
T247:;
	base[1]= VV[18];
	base[2]= VV[19];
	base[3]= VV[20];
	base[4]= VV[21];
	base[5]= (V124);
	base[6]= VV[22];
	base[7]= VV[27];
	base[8]= VV[24];
	base[9]= VV[28];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk48)();
	vs_top=sup;
	(V120->c.c_car)= vs_base[0];}}}
	goto T238;
T238:;
	if((V121=MMcdr(V121))==Cnil){
	{object V126 = base[0];
	VMR12(V126)}}
	V120=MMcdr(V120)=MMcons(Cnil,Cnil);
	goto T237;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIND-CYCLE-REASONS	*/

static object LI21(V128)

object V128;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	base[0]= (V128);
	base[1]= Cnil;
	base[2]= Cnil;
	{register object V129;
	object V130;
	V129= base[0];
	V130= CMPcar((V129));
	goto T269;
T269:;
	if(!(((V129))==Cnil)){
	goto T270;}
	goto T265;
	goto T270;
T270:;
	if(((long)STREF(fixnum,(V130),12))==0){
	goto T274;}
	base[4]= make_cons((V130),Cnil);
	vs_top=(vs_base=base+4)+1;
	L22(base);
	vs_top=sup;
	goto T274;
T274:;
	V129= CMPcdr((V129));
	V130= CMPcar((V129));
	goto T269;}
	goto T265;
T265:;
	{object V131 = base[2];
	VMR13(V131)}
	base[0]=base[0];
	return Cnil;
}
/*	local function RECORD-CYCLE	*/

static void L23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V132;
	check_arg(1);
	V132=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V133;
	V133= Cnil;
	{object V134;
	object V135;
	V134= (V132);
	V135= CMPcdr((V134));
	goto T287;
T287:;
	if(((V135))!=Cnil){
	goto T288;}
	goto T283;
	goto T288;
T288:;
	{register object V136;
	register object V137;
	V136= CMPcar((V134));
	V137= CMPcar((V135));
	{register object x= (V137),V138= STREF(object,(V136),4);
	while(V138!=Cnil)
	if(x==(V138->c.c_car)){
	goto T297;
	}else V138=V138->c.c_cdr;
	goto T296;}
	goto T297;
T297:;
	{object V139;
	V139= list(3,(V136),(V137),VV[29]);
	V133= make_cons((V139),(V133));
	goto T292;}
	goto T296;
T296:;
	{register object V140;
	register object V141;
	V140= base0[0];
	V141= CMPcar((V140));
	goto T303;
T303:;
	if(!(((V140))==Cnil)){
	goto T304;}
	goto T292;
	goto T304;
T304:;
	{register object x= (V136),V144= STREF(object,(V141),4);
	while(V144!=Cnil)
	if(x==(V144->c.c_car)){
	V143= V144;
	goto T311;
	}else V144=V144->c.c_cdr;
	V143= Cnil;}
	goto T311;
T311:;
	{register object x= (V137),V142= V143;
	while(V142!=Cnil)
	if(x==(V142->c.c_car)){
	goto T310;
	}else V142=V142->c.c_cdr;
	goto T308;}
	goto T310;
T310:;
	{object V145;
	V145= list(4,(V136),(V137),VV[30],(V141));
	V133= make_cons((V145),(V133));
	goto T292;}
	goto T308;
T308:;
	V140= CMPcdr((V140));
	V141= CMPcar((V140));
	goto T303;}}
	goto T292;
T292:;
	V134= (V135);
	V135= CMPcdr((V134));
	goto T287;}
	goto T283;
T283:;
	{object V146;
	V146= nreverse((V133));
	base0[2]= make_cons((V146),base0[2]);
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
	{object V147;
	check_arg(1);
	V147=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object x= CMPcar((V147)),V148= CMPcdr((V147));
	while(V148!=Cnil)
	if(x==(V148->c.c_car)){
	goto T328;
	}else V148=V148->c.c_cdr;
	goto T327;}
	goto T328;
T328:;
	V150= CMPcar((V147));
	V151= nreverse((V147));
	{register object x= /* INLINE-ARGS */V150,V149= /* INLINE-ARGS */V151;
	while(V149!=Cnil)
	if(x==(V149->c.c_car)){
	base[1]= V149;
	goto T329;
	}else V149=V149->c.c_cdr;
	base[1]= Cnil;}
	goto T329;
T329:;
	vs_top=(vs_base=base+1)+1;
	L23(base0);
	return;
	goto T327;
T327:;
	{register object x= CMPcar((V147)),V152= base0[1];
	while(V152!=Cnil)
	if(x==(V152->c.c_car)){
	goto T331;
	}else V152=V152->c.c_cdr;}
	{object V153;
	V153= CMPcar((V147));
	base0[1]= make_cons((V153),base0[1]);}
	{register object V154;
	object V155;
	V154= STREF(object,CMPcar((V147)),8);
	V155= CMPcar((V154));
	goto T339;
T339:;
	if(!(((V154))==Cnil)){
	goto T340;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T340;
T340:;
	base[3]= make_cons((V155),(V147));
	vs_top=(vs_base=base+3)+1;
	L22(base0);
	vs_top=sup;
	V154= CMPcdr((V154));
	V155= CMPcar((V154));
	goto T339;}
	goto T331;
T331:;
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
	{object V156;
	check_arg(1);
	V156=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V157;
	V157= STREF(object,(V156),0);
	base[1]= (V157);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk43)(Lclptr43);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T353;}
	base[1]= Cnil;
	base[2]= VV[26];
	base[4]= (V157);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk43)(Lclptr43);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	goto T353;
T353:;
	base[1]= (V157);
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
	{object V158;
	register object V159;
	check_arg(2);
	V158=(base[0]);
	V159=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(((V158))==(base0[1]))){
	goto T361;}
	base[2]= nreverse((V159));
	vs_top=(vs_base=base+2)+1;
	unwind(frs_sch(base0[2]),Cnil);
	goto T361;
T361:;
	{register object V160;
	register object V161;
	base[4]= (V158);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk32)(Lclptr32);
	vs_top=sup;
	V160= vs_base[0];
	V161= CMPcar((V160));
	goto T368;
T368:;
	if(!(((V160))==Cnil)){
	goto T369;}
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T369;
T369:;
	base[4]= (V161);
	base[5]= make_cons((V161),(V159));
	vs_top=(vs_base=base+4)+2;
	L14(base0);
	vs_top=sup;
	V160= CMPcdr((V160));
	V161= CMPcar((V160));
	goto T368;}
	}
}
/*	local function CLASS-OR-NAME	*/

static void L12(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{object V162;
	check_arg(1);
	V162=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V162);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk43)(Lclptr43);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T382;}
	base[1]= Cnil;
	base[2]= VV[10];
	base[4]= (V162);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk43)(Lclptr43);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	goto T382;
T382:;
	base[1]= (V162);
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
	{object V163;
	check_arg(1);
	V163=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V164;
	base[1]= (V163);
	base[2]= base0[4];
	vs_top=(vs_base=base+1)+2;
	Lgethash();
	vs_top=sup;
	V164= vs_base[0];
	if(V164==Cnil)goto T389;
	base[1]= V164;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T389;
T389:;}
	{object V167;
	V167= (*(LnkLI49))();
	base[2]= V163;
	base[3]= base0[4];
	base[4]= (V167);
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
	{register object V168;
	object V169;
	check_arg(2);
	V168=(base[0]);
	V169=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V168);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk50)(Lclptr50);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T398;}
	base[2]= (*(LnkLI51))(base0[0],(V168));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T398;
T398:;
	{register object V170;
	base[2]= (V168);
	vs_top=(vs_base=base+2)+1;
	L6(base0);
	vs_top=sup;
	V170= vs_base[0];
	if((STREF(object,(V170),0))!=Cnil){
	goto T404;}
	V171= Ct;
	STSET(object,(V170),0, (V168));
	(void)((V168));
	base0[2]= CMPmake_fixnum((long)(fix(base0[2]))+(1));
	base0[3]= make_cons(V170,base0[3]);
	{object V174;
	object V175= (V169);
	if(V175==Cnil){
	V173= Cnil;
	goto T412;}
	base[2]=V174=MMcons(Cnil,Cnil);
	goto T413;
T413:;
	base[3]= (V175->c.c_car);
	vs_top=(vs_base=base+3)+1;
	L6(base0);
	vs_top=sup;
	(V174->c.c_car)= vs_base[0];
	if((V175=MMcdr(V175))==Cnil){
	V173= base[2];
	goto T412;}
	V174=MMcdr(V174)=MMcons(Cnil,Cnil);
	goto T413;}
	goto T412;
T412:;
	V176= Ct;
	STSET(object,(V170),4, V173);
	(void)(V173);
	{register object V177;
	register object V178;
	V177= (V169);
	V178= CMPcar((V177));
	goto T419;
T419:;
	if(!(((V177))==Cnil)){
	goto T420;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T420;
T420:;
	base[3]= (V178);
	base[5]= (V178);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk32)(Lclptr32);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	L7(base0);
	vs_top=sup;
	V177= CMPcdr((V177));
	V178= CMPcar((V177));
	goto T419;}
	goto T404;
T404:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
static object  LnkTLI51(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[51],(void **)(void *)&LnkLI51,2,first,ap);va_end(ap);return V1;} /* CPL-FORWARD-REFERENCED-CLASS-ERROR */
static void LnkT50(ptr) object *ptr;{ call_or_link_closure(VV[50],(void **)(void *)&Lnk50,(void **)(void *)&Lclptr50);} /* FORWARD-REFERENCED-CLASS-P */
static object  LnkTLI49(){return call_proc0(VV[49],(void **)(void *)&LnkLI49);} /* MAKE-CPD */
static void LnkT48(){ call_or_link(VV[48],(void **)(void *)&Lnk48);} /* ERROR */
static object  LnkTLI47(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[47],(void **)(void *)&LnkLI47,1,first,ap);va_end(ap);return V1;} /* FORMAT-CYCLE-REASONS */
static object  LnkTLI46(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[46],(void **)(void *)&LnkLI46,1,first,ap);va_end(ap);return V1;} /* FIND-CYCLE-REASONS */
static object  LnkTLI45(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[45],(void **)(void *)&LnkLI45,first,ap);va_end(ap);return V1;} /* CPL-ERROR */
static void LnkT44(){ call_or_link(VV[44],(void **)(void *)&Lnk44);} /* FIND-SUPERCLASS-CHAIN */
static void LnkT43(ptr) object *ptr;{ call_or_link_closure(VV[43],(void **)(void *)&Lnk43,(void **)(void *)&Lclptr43);} /* CLASS-NAME */
static object  LnkTLI42(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[42],(void **)(void *)&LnkLI42,2,first,ap);va_end(ap);return V1;} /* CPL-INCONSISTENT-ERROR */
static object  LnkTLI40(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[40],(void **)(void *)&LnkLI40,65539,first,ap);va_end(ap);return V1;} /* COMPUTE-STD-CPL-PHASE-3 */
static object  LnkTLI39(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[39],(void **)(void *)&LnkLI39,1,first,ap);va_end(ap);return V1;} /* COMPUTE-STD-CPL-PHASE-2 */
static void LnkT38(){ call_or_link(VV[38],(void **)(void *)&Lnk38);} /* COMPUTE-STD-CPL-PHASE-1 */
static void LnkT32(ptr) object *ptr;{ call_or_link_closure(VV[32],(void **)(void *)&Lnk32,(void **)(void *)&Lclptr32);} /* CLASS-DIRECT-SUPERCLASSES */
static object  LnkTLI31(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[31],(void **)(void *)&LnkLI31,2,first,ap);va_end(ap);return V1;} /* COMPUTE-STD-CPL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

