
#include "cmpinclude.h"
#include "pcl_combin.h"
void init_pcl_combin(){do_init(VV);}
/*	function definition for GET-METHOD-FUNCTION	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	{register object V1;
	object V2;
	object V3;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V1=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1;}
	V2=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2;}
	V3=(base[2]);
	vs_top=sup;
	goto T3;
	goto T1;
T1:;
	V2= Cnil;
	goto T2;
T2:;
	V3= Cnil;
	goto T3;
T3:;
	{object V4;
	{register object x= (V1),V6= (V2);
	while(V6!=Cnil)
	if(eql(x,V6->c.c_car->c.c_car) &&V6->c.c_car != Cnil){
	V5= (V6->c.c_car);
	goto T7;
	}else V6=V6->c.c_cdr;
	V5= Cnil;}
	goto T7;
T7:;
	V4= CMPcadr(V5);
	if(((V4))==Cnil){
	goto T9;}
	base[3]= (V4);
	base[4]= Cnil;
	base[5]= Cnil;
	base[6]= Cnil;
	vs_top=(vs_base=base+3)+4;
	return;
	goto T9;
T9:;
	{object V7;
	register object V8;
	if(!(type_of((V1))==t_cons||((V1))==Cnil)){
	goto T17;}
	base[3]= (V1);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk39)();
	goto T15;
	goto T17;
T17:;
	base[3]= Cnil;
	base[5]= (V1);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk40)(Lclptr40);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	goto T15;
T15:;
	if(vs_base>=vs_top){vs_top=sup;goto T23;}
	V7= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T24;}
	V8= vs_base[0];
	vs_top=sup;
	goto T25;
	goto T23;
T23:;
	V7= Cnil;
	goto T24;
T24:;
	V8= Cnil;
	goto T25;
T25:;
	{register object V9;
	if((V8)==Cnil){
	V9= Cnil;
	goto T26;}
	V9= (*(LnkLI41))((V8));
	goto T26;
T26:;
	if(((V8))==Cnil){
	goto T28;}
	if(((V9))==Cnil){
	goto T27;}
	if(((V3))==Cnil){
	goto T28;}
	goto T27;
T27:;
	{object V10;
	object V11;
	if(((V9))==Cnil){
	goto T36;}
	V10= (*(LnkLI42))((V9),(V3));
	goto T34;
	goto T36;
T36:;
	V10= Cnil;
	goto T34;
T34:;
	if(((V9))==Cnil){
	goto T40;}
	if(((V10))==Cnil){
	goto T40;}
	V11= (*(LnkLI43))((V9),(V10));
	goto T38;
	goto T40;
T40:;
	V11= Cnil;
	goto T38;
T38:;
	base[6]= (V7);
	base[7]= Ct;
	base[8]= (V8);
	base[9]= (V11);
	vs_top=(vs_base=base+6)+4;
	return;}
	goto T28;
T28:;
	if((V7)!=Cnil){
	base[4]= (V7);
	goto T48;}
	if(!(type_of((V1))==t_cons||((V1))==Cnil)){
	goto T50;}
	{object V13;
	V13= (*(LnkLI44))((V8));
	(CMPcdr(V1))->c.c_car = (V13);
	(void)(CMPcdr(V1));
	base[4]= (V13);
	goto T48;}
	goto T50;
T50:;
	base[5]= (V1);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk45)(Lclptr45);
	vs_top=sup;
	base[4]= vs_base[0];
	goto T48;
T48:;
	base[5]= Ct;
	base[6]= Cnil;
	base[7]= Cnil;
	vs_top=(vs_base=base+4)+4;
	return;}}}
	}
}
/*	function definition for MAKE-EFFECTIVE-METHOD-FUNCTION	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{object V14;
	object V15;
	object V16;
	object V17;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V14=(base[0]);
	V15=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T58;}
	V16=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T59;}
	V17=(base[3]);
	vs_top=sup;
	goto T60;
	goto T58;
T58:;
	V16= Cnil;
	goto T59;
T59:;
	V17= Cnil;
	goto T60;
T60:;
	base[4]= (*(LnkLI46))((V14),(V15),(((((V16))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil),(((((V17))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil));
	base[5]= (V16);
	base[6]= (V17);
	vs_top=(vs_base=base+5)+2;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local entry for function MAKE-EFFECTIVE-METHOD-FUNCTION1	*/

static object LI3(V22,V23,V24,V25)

object V22;register object V23;object V24;object V25;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	if(!(type_of((V23))==t_cons||((V23))==Cnil)){
	goto T67;}
	if(!((CMPcar((V23)))==(VV[0]))){
	goto T67;}
	{object V26 = (VFUN_NARGS=2,(*(LnkLI47))((V22),(V23)));
	VMR3(V26)}
	goto T67;
T67:;
	{object V27 = (*(LnkLI48))((V22),(V23),(V24),(V25));
	VMR3(V27)}
	return Cnil;
}
/*	local entry for function MAKE-EFFECTIVE-METHOD-FUNCTION-TYPE	*/

static object LI4(V32,V33,V34,V35)

object V32;object V33;object V34;object V35;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if(!(type_of((V33))==t_cons||((V33))==Cnil)){
	goto T72;}
	if(!((CMPcar((V33)))==(VV[0]))){
	goto T72;}
	{object V36;
	register object V37;
	V36= CMPcdr((V33));
	V37= CMPcar((V36));
	if(((V37))==Cnil){
	goto T79;}
	if(!(type_of((V37))==t_cons||((V37))==Cnil)){
	goto T85;}
	if(!((CMPcar((V37)))==(VV[1]))){
	goto T82;}
	goto T83;
	goto T85;
T85:;
	base[2]= (V37);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk49)(Lclptr49);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T82;}
	goto T83;
T83:;
	if(((V34))==Cnil){
	goto T89;}
	{object V38 = Ct;
	VMR4(V38)}
	goto T89;
T89:;
	{object V39;
	object V40;
	if(!(type_of((V37))==t_cons||((V37))==Cnil)){
	goto T93;}
	base[2]= (V37);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk39)();
	goto T91;
	goto T93;
T93:;
	base[2]= Cnil;
	base[4]= (V37);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk40)(Lclptr40);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	goto T91;
T91:;
	if(vs_base>=vs_top){vs_top=sup;goto T99;}
	V39= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T100;}
	V40= vs_base[0];
	vs_top=sup;
	goto T101;
	goto T99;
T99:;
	V39= Cnil;
	goto T100;
T100:;
	V40= Cnil;
	goto T101;
T101:;
	{object V41;
	if((V40)==Cnil){
	V41= Cnil;
	goto T102;}
	V41= (*(LnkLI41))((V40));
	goto T102;
T102:;
	if(((V40))==Cnil){
	goto T104;}
	if(((V41))==Cnil){
	goto T103;}
	if(((V35))==Cnil){
	goto T104;}
	goto T103;
T103:;
	{object V42 = VV[2];
	VMR4(V42)}
	goto T104;
T104:;
	{object V43 = VV[3];
	VMR4(V43)}}}
	goto T82;
T82:;
	if(!(type_of((V37))==t_cons)){
	goto T111;}
	if(!((CMPcar((V37)))==(VV[4]))){
	goto T111;}
	V33= CMPcadr((V37));
	goto TTL;
	goto T111;
T111:;
	base[2]= (V37);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	{object V44 = vs_base[0];
	VMR4(V44)}
	goto T79;
T79:;
	{object V45 = Cnil;
	VMR4(V45)}}
	goto T72;
T72:;
	{object V46 = VV[2];
	VMR4(V46)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-EFFECTIVE-METHOD-FUNCTION-SIMPLE	*/

static object LI5(object V48,object V47,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	{object V49;
	object V50;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	Vcs[0]=MMcons(V48,Cnil);
	V49= V47;
	narg = narg - 2;
	if (narg <= 0) goto T121;
	else {
	V50= first;}
	--narg; goto T122;
	goto T121;
T121:;
	V50= Cnil;
	goto T122;
T122:;
	{object V51;
	V51= CMPcdr((V49));
	if(((V50))==Cnil){
	goto T126;}
	base[1]= Cnil;
	goto T125;
	goto T126;
T126:;
	if(!(((((VV[5]->s.s_dbind))==(VV[6])?Ct:Cnil))==Cnil)){
	goto T130;}
	goto T128;
	goto T130;
T130:;
	base[4]= (Vcs[0]->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk50)(Lclptr50);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T128;}
	base[1]= Cnil;
	goto T125;
	goto T128;
T128:;
	base[1]= ((CMPcddr((V51)))==Cnil?Ct:Cnil);
	goto T125;
T125:;
	base[1]=MMcons(base[1],Vcs[0]);
	base[2]= CMPcar((V51));
	base[2]=MMcons(base[2],base[1]);
	base[3]= CMPcdr((V51));
	base[3]=MMcons(base[3],base[2]);
	{object V52 = 
	make_cclosure_new(LC24,Cnil,base[3],Cdata);
	VMR5(V52)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-EMF-FROM-METHOD	*/

static object LI6(object V54,object V53,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	{object V55;
	object V56;
	object V57;
	object V58;
	object V59;
	object V60;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V55= V54;
	V56= V53;
	narg = narg - 2;
	if (narg <= 0) goto T135;
	else {
	V57= first;}
	if (--narg <= 0) goto T136;
	else {
	V58= va_arg(ap,object);}
	if (--narg <= 0) goto T137;
	else {
	V59= va_arg(ap,object);}
	if (--narg <= 0) goto T138;
	else {
	V60= va_arg(ap,object);}
	--narg; goto T139;
	goto T135;
T135:;
	V57= Cnil;
	goto T136;
T136:;
	V58= Cnil;
	goto T137;
T137:;
	V59= Cnil;
	goto T138;
T138:;
	V60= Cnil;
	goto T139;
T139:;
	{object V61;
	object V62;
	object V63;
	object V64;
	base[0]= (V55);
	base[1]= (V59);
	base[2]= (V60);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk51)();
	if(vs_base>=vs_top){vs_top=sup;goto T148;}
	V61= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T149;}
	V62= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T150;}
	V63= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T151;}
	V64= vs_base[0];
	vs_top=sup;
	goto T152;
	goto T148;
T148:;
	V61= Cnil;
	goto T149;
T149:;
	V62= Cnil;
	goto T150;
T150:;
	V63= Cnil;
	goto T151;
T151:;
	V64= Cnil;
	goto T152;
T152:;
	if(((V63))==Cnil){
	goto T154;}
	{object V65;
	object V66;
	object V67;
	V65= CMPcar((V56));
	base[3]= (V57);
	base[4]= CMPcar((V65));
	base[5]= make_cons(CMPcdr((V65)),CMPcdr((V56)));
	base[6]= (V58);
	base[7]= (V59);
	base[8]= (V60);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk52)();
	vs_top=sup;
	V66= vs_base[0];
	V67= (VFUN_NARGS=2,(*(LnkLI53))((V63),VV[7]));
	{object V68 = (VFUN_NARGS=8,(*(LnkLI54))(VV[8],(V63),VV[9],(V64),VV[10],(V66),VV[7],(V67)));
	VMR6(V68)}}
	goto T154;
T154:;
	if(((V62))==Cnil){
	goto T166;}
	{object V69 = (VFUN_NARGS=4,(*(LnkLI55))(VV[8],(V61),VV[11],(V56)));
	VMR6(V69)}
	goto T166;
T166:;
	{object V70 = (V61);
	VMR6(V70)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for MAKE-EFFECTIVE-METHOD-FUNCTION-SIMPLE1	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{object V71;
	register object V72;
	object V73;
	object V74;
	object V75;
	object V76;
	if(vs_top-vs_base<4) too_few_arguments();
	if(vs_top-vs_base>6) too_many_arguments();
	V71=(base[0]);
	V72=(base[1]);
	V73=(base[2]);
	V74=(base[3]);
	vs_base=vs_base+4;
	if(vs_base>=vs_top){vs_top=sup;goto T168;}
	V75=(base[4]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T169;}
	V76=(base[5]);
	vs_top=sup;
	goto T170;
	goto T168;
T168:;
	V75= Cnil;
	goto T169;
T169:;
	V76= Cnil;
	goto T170;
T170:;
	if(((V72))==Cnil){
	goto T174;}
	if(!(type_of((V72))==t_cons||((V72))==Cnil)){
	goto T180;}
	if(!((CMPcar((V72)))==(VV[1]))){
	goto T177;}
	goto T178;
	goto T180;
T180:;
	base[6]= (V72);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk49)(Lclptr49);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T177;}
	goto T178;
T178:;
	base[6]= (VFUN_NARGS=6,(*(LnkLI56))((V72),(V73),(V71),(V74),(V75),(V76)));
	vs_top=(vs_base=base+6)+1;
	return;
	goto T177;
T177:;
	if(!(type_of((V72))==t_cons)){
	goto T184;}
	if(!((CMPcar((V72)))==(VV[4]))){
	goto T184;}
	base[6]= (V71);
	base[7]= CMPcadr((V72));
	base[8]= (V75);
	base[9]= (V76);
	vs_top=(vs_base=base+6)+4;
	(void) (*Lnk57)();
	return;
	goto T184;
T184:;
	base[6]= (V72);
	vs_top=(vs_base=base+6)+1;
	return;
	goto T174;
T174:;
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	return;
	}
}
/*	local entry for function GET-EFFECTIVE-METHOD-GENSYM	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;{object V77;
	{object V78;
	V78= CMPcar((VV[12]->s.s_dbind));
	(VV[12]->s.s_dbind)= CMPcdr((VV[12]->s.s_dbind));
	V77= (V78);}
	if(V77==Cnil)goto T192;
	{object V79 = V77;
	VMR8(V79)}
	goto T192;
T192:;}
	{object V80;
	base[1]= Cnil;
	base[2]= VV[13];
	base[3]= CMPmake_fixnum((long)length((VV[14]->s.s_dbind)));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= VV[15];
	vs_top=(vs_base=base+0)+2;
	Lintern();
	vs_top=sup;
	V80= vs_base[0];{object V81;
	V81= (VV[14]->s.s_dbind);
	V82= make_cons((V80),Cnil);
	(VV[14]->s.s_dbind)= append(V81,/* INLINE-ARGS */V82);}
	{object V83 = (V80);
	VMR8(V83)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXPAND-EFFECTIVE-METHOD-FUNCTION	*/

static object LI9(object V85,object V84,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V86;
	object V87;
	object V88;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V86= V85;
	V87= V84;
	narg = narg - 2;
	if (narg <= 0) goto T205;
	else {
	V88= first;}
	--narg; goto T206;
	goto T205;
T205:;
	V88= Cnil;
	goto T206;
T206:;
	{object V89;
	object V90;
	object V91;
	object V92;
	object V93;
	base[0]= (V86);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk58)();
	if(vs_base>=vs_top){vs_top=sup;goto T210;}
	V89= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T211;}
	V90= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T212;}
	V91= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T213;}
	V92= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T214;}
	V93= vs_base[0];
	vs_top=sup;
	goto T215;
	goto T210;
T210:;
	V89= Cnil;
	goto T211;
T211:;
	V90= Cnil;
	goto T212;
T212:;
	V91= Cnil;
	goto T213;
T213:;
	V92= Cnil;
	goto T214;
T214:;
	V93= Cnil;
	goto T215;
T215:;
	{object V94;
	V94= (*(LnkLI59))((V91),(V90));
	{object V95 = list(4,VV[16],(V94),VV[17],(V87));
	VMR9(V95)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function EXPAND-EMF-CALL-METHOD	*/

static object LI10(V101,V102,V103,V104,V105)

object V101;object V102;object V103;object V104;object V105;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V106 = list(2,VV[0],CMPcdr((V102)));
	VMR10(V106)}
	return Cnil;
}
/*	macro definition for CALL-METHOD	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V107=base[0]->c.c_cdr;
	base[2]= V107;}
	base[3]= VV[18];
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function MEMF-TEST-CONVERTER	*/

static object LI13(V112,V113,V114,V115)

register object V112;object V113;object V114;object V115;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	base[0]=MMcons((V115),Cnil);
	base[1]=MMcons((V114),base[0]);
	base[2]=MMcons((V113),base[1]);
	if(!(type_of((V112))==t_cons)){
	goto T218;}
	if(!((CMPcar((V112)))==(VV[0]))){
	goto T218;}
	V117= (*(LnkLI60))((base[2]->c.c_car),(V112),(base[1]->c.c_car),(base[0]->c.c_car));
	{object V116= /* INLINE-ARGS */V117;
	if((V116!= VV[2]))goto T222;
	{object V118 = VV[19];
	VMR12(V118)}
	goto T222;
T222:;
	{object V119 = VV[20];
	VMR12(V119)}}
	goto T218;
T218:;
	if(!(type_of((V112))==t_cons)){
	goto T224;}
	if(!((CMPcar((V112)))==(VV[21]))){
	goto T224;}
	base[3]= 
	make_cclosure_new(LC25,Cnil,base[2],Cdata);
	base[4]= CMPcdr((V112));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk61)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T230;}
	V121= VV[2];
	goto T228;
	goto T230;
T230:;
	V121= Ct;
	goto T228;
T228:;
	{object V120= V121;
	if((V120!= VV[2]))goto T234;
	{object V122 = VV[22];
	VMR12(V122)}
	goto T234;
T234:;
	{object V123 = VV[23];
	VMR12(V123)}}
	goto T224;
T224:;
	{object V124 = (*(LnkLI62))((V112));
	VMR12(V124)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MEMF-CODE-CONVERTER	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{register object V125;
	object V126;
	object V127;
	check_arg(6);
	V125=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	V126=(base[2]);
	V127=(base[3]);
	base[4]=MMcons(base[4],base[1]);
	base[5]=MMcons(base[5],base[4]);
	vs_top=sup;
	if(!(type_of((V125))==t_cons)){
	goto T236;}
	if(!((CMPcar((V125)))==(VV[0]))){
	goto T236;}
	{object V128;
	V128= (*(LnkLI63))();
	V129= (*(LnkLI60))((base[1]->c.c_car),(V125),(base[4]->c.c_car),(base[5]->c.c_car));
	base[6]= (VFUN_NARGS=4,(*(LnkLI64))((V126),(V127),(V128),/* INLINE-ARGS */V129));
	base[7]= make_cons((V128),Cnil);
	vs_top=(vs_base=base+6)+2;
	return;}
	goto T236;
T236:;
	if(!(type_of((V125))==t_cons)){
	goto T244;}
	if(!((CMPcar((V125)))==(VV[21]))){
	goto T244;}
	{object V130;
	object V131;
	V130= (*(LnkLI63))();
	base[6]= 
	make_cclosure_new(LC26,Cnil,base[5],Cdata);
	base[7]= CMPcdr((V125));
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk61)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T251;}
	V131= VV[2];
	goto T249;
	goto T251;
T251:;
	V131= Ct;
	goto T249;
T249:;
	V132= list(3,VV[25],(V130),Cnil);
	base[6]= list(3,VV[24],/* INLINE-ARGS */V132,(VFUN_NARGS=4,(*(LnkLI64))((V126),(V127),VV[25],(V131))));
	base[7]= make_cons((V130),Cnil);
	vs_top=(vs_base=base+6)+2;
	return;}
	goto T244;
T244:;
	base[6]= (V125);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk65)();
	return;
	}
}
/*	local entry for function MEMF-CONSTANT-CONVERTER	*/

static object LI15(V135,V136)

register object V135;object V136;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if(!(type_of((V135))==t_cons)){
	goto T259;}
	if(!((CMPcar((V135)))==(VV[0]))){
	goto T259;}
	V137= (VFUN_NARGS=2,(*(LnkLI47))((V136),(V135)));
	V138= make_cons(VV[26],/* INLINE-ARGS */V137);
	{object V139 = make_cons(/* INLINE-ARGS */V138,Cnil);
	VMR14(V139)}
	goto T259;
T259:;
	if(!(type_of((V135))==t_cons)){
	goto T264;}
	if(!((CMPcar((V135)))==(VV[21]))){
	goto T264;}
	{object V141;
	object V142= CMPcdr((V135));
	if(V142==Cnil){
	V140= Cnil;
	goto T268;}
	base[0]=V141=MMcons(Cnil,Cnil);
	goto T269;
T269:;
	(V141->c.c_car)= (VFUN_NARGS=2,(*(LnkLI47))((V136),(V142->c.c_car)));
	if((V142=MMcdr(V142))==Cnil){
	V140= base[0];
	goto T268;}
	V141=MMcdr(V141)=MMcons(Cnil,Cnil);
	goto T269;}
	goto T268;
T268:;
	V144= make_cons(VV[27],V140);
	{object V145 = make_cons(/* INLINE-ARGS */V144,Cnil);
	VMR14(V145)}
	goto T264;
T264:;
	{object V146 = (*(LnkLI66))((V135));
	VMR14(V146)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-EFFECTIVE-METHOD-FUNCTION-INTERNAL	*/

static object LI17(V151,V152,V153,V154)

object V151;object V152;object V153;object V154;
{	 VMB15 VMS15 VMV15
	bds_check;
	goto TTL;
TTL:;
	base[0]=MMcons((V154),Cnil);
	base[1]=MMcons((V153),base[0]);
	base[2]=MMcons((V151),base[1]);
	{object V155;
	object V156;
	object V157;
	base[5]= (base[2]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk58)();
	if(vs_base>=vs_top){vs_top=sup;goto T273;}
	V155= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T274;}
	base[3]=MMcons(vs_base[0],base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T275;}
	base[4]=MMcons(vs_base[0],base[3]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T276;}
	V156= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T277;}
	V157= vs_base[0];
	vs_top=sup;
	goto T278;
	goto T273;
T273:;
	V155= Cnil;
	goto T274;
T274:;
	base[3]=MMcons(Cnil,base[2]);
	goto T275;
T275:;
	base[4]=MMcons(Cnil,base[3]);
	goto T276;
T276:;
	V156= Cnil;
	goto T277;
T277:;
	V157= Cnil;
	goto T278;
T278:;
	{object V158;
	bds_bind(VV[12],(VV[14]->s.s_dbind));
	if(((*(LnkLI67))((base[2]->c.c_car)))==Cnil){
	goto T281;}
	base[6]= (*(LnkLI68))((base[2]->c.c_car));
	goto T279;
	goto T281;
T281:;
	base[9]= (base[2]->c.c_car);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk69)(Lclptr69);
	vs_top=sup;
	base[6]= vs_base[0];
	goto T279;
T279:;
	base[6]=MMcons(base[6],base[4]);
	base[7]= make_cons((V155),(base[3]->c.c_car));
	base[7]=MMcons(base[7],base[6]);
	V158= (VFUN_NARGS=2,(*(LnkLI70))((base[2]->c.c_car),(V152)));
	base[11]= (V158);
	base[12]= 
	make_cclosure_new(LC27,Cnil,base[7],Cdata);
	base[13]= 
	make_cclosure_new(LC28,Cnil,base[7],Cdata);
	base[14]= 
	make_cclosure_new(LC29,Cnil,base[7],Cdata);
	vs_top=(vs_base=base+11)+4;
	(void) (*Lnk71)();
	if(vs_base>=vs_top){vs_top=sup;goto T291;}
	base[9]=MMcons(vs_base[0],base[7]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T292;}
	base[10]=MMcons(vs_base[0],base[9]);
	vs_top=sup;
	goto T293;
	goto T291;
T291:;
	base[9]=MMcons(Cnil,base[7]);
	goto T292;
T292:;
	base[10]=MMcons(Cnil,base[9]);
	goto T293;
T293:;
	{object V159 = 
	make_cclosure_new(LC30,Cnil,base[10],Cdata);
	bds_unwind1;
	VMR15(V159)}}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for CALL-METHOD-LIST	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V160=base[0]->c.c_cdr;
	base[2]= V160;}
	base[3]= make_cons(VV[29],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function MAKE-CALL-METHODS	*/

static object LI19(V162)

object V162;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V164;
	object V165= (V162);
	if(V165==Cnil){
	V163= Cnil;
	goto T294;}
	base[0]=V164=MMcons(Cnil,Cnil);
	goto T295;
T295:;
	(V164->c.c_car)= list(3,VV[0],(V165->c.c_car),Cnil);
	if((V165=MMcdr(V165))==Cnil){
	V163= base[0];
	goto T294;}
	V164=MMcdr(V164)=MMcons(Cnil,Cnil);
	goto T295;}
	goto T294;
T294:;
	{object V167 = make_cons(VV[21],V163);
	VMR17(V167)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function STANDARD-COMPUTE-EFFECTIVE-METHOD	*/

static object LI20(V171,V172,V173)

object V171;object V172;object V173;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{register object V174;
	register object V175;
	register object V176;
	register object V177;
	V174= Cnil;
	V175= Cnil;
	V176= Cnil;
	V177= Cnil;
	{register object V178;
	register object V179;
	V178= (V173);
	V179= CMPcar((V178));
	goto T301;
T301:;
	if(!(((V178))==Cnil)){
	goto T302;}
	goto T297;
	goto T302;
T302:;
	{register object V180;
	if(!(type_of((V179))==t_cons||((V179))==Cnil)){
	goto T309;}
	V180= (*(LnkLI72))((V179));
	goto T307;
	goto T309;
T309:;
	base[1]= (V179);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk73)(Lclptr73);
	vs_top=sup;
	V180= vs_base[0];
	goto T307;
T307:;
	{register object x= VV[30],V181= (V180);
	while(V181!=Cnil)
	if(eql(x,V181->c.c_car)){
	goto T314;
	}else V181=V181->c.c_cdr;
	goto T313;}
	goto T314;
T314:;
	V174= make_cons(V179,(V174));
	goto T306;
	goto T313;
T313:;
	{register object x= VV[31],V183= (V180);
	while(V183!=Cnil)
	if(eql(x,V183->c.c_car)){
	goto T318;
	}else V183=V183->c.c_cdr;
	goto T317;}
	goto T318;
T318:;
	V176= make_cons(V179,(V176));
	goto T306;
	goto T317;
T317:;
	{register object x= VV[32],V185= (V180);
	while(V185!=Cnil)
	if(eql(x,V185->c.c_car)){
	goto T322;
	}else V185=V185->c.c_cdr;
	goto T321;}
	goto T322;
T322:;
	V177= make_cons(V179,(V177));
	goto T306;
	goto T321;
T321:;
	V175= make_cons(V179,(V175));}
	goto T306;
T306:;
	V178= CMPcdr((V178));
	V179= CMPcar((V178));
	goto T301;}
	goto T297;
T297:;
	V174= reverse((V174));
	V176= reverse((V176));
	V175= reverse((V175));
	V177= reverse((V177));
	if(((V175))!=Cnil){
	goto T339;}
	{object V188 = list(3,VV[33],VV[34],list(2,VV[35],(V171)));
	VMR18(V188)}
	goto T339;
T339:;
	if(((V174))!=Cnil){
	goto T342;}
	if(((V176))!=Cnil){
	goto T342;}
	if(((V177))!=Cnil){
	goto T342;}
	{object V189 = list(3,VV[0],CMPcar((V175)),CMPcdr((V175)));
	VMR18(V189)}
	goto T342;
T342:;
	{object V190;
	if(((V174))!=Cnil){
	goto T349;}
	if(((V176))==Cnil){
	goto T350;}
	goto T349;
T349:;
	V191= (*(LnkLI74))((V174));
	V192= list(3,VV[29],/* INLINE-ARGS */V191,list(3,VV[0],CMPcar((V175)),CMPcdr((V175))));
	V193= reverse((V176));
	V190= list(3,VV[36],/* INLINE-ARGS */V192,(*(LnkLI74))(/* INLINE-ARGS */V193));
	goto T348;
	goto T350;
T350:;
	V190= list(3,VV[0],CMPcar((V175)),CMPcdr((V175)));
	goto T348;
T348:;
	if(((V177))==Cnil){
	goto T355;}
	V194= CMPcar((V177));
	V195= CMPcdr((V177));
	V196= list(2,VV[4],(V190));
	V197= make_cons(/* INLINE-ARGS */V196,Cnil);
	{object V198 = list(3,VV[0],/* INLINE-ARGS */V194,append(/* INLINE-ARGS */V195,/* INLINE-ARGS */V197));
	VMR18(V198)}
	goto T355;
T355:;
	{object V199 = (V190);
	VMR18(V199)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-EFFECTIVE-METHOD	*/

static object LI21(V203,V204,V205)

object V203;object V204;object V205;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V206 = (*(LnkLI75))((V203),(V204),(V205));
	VMR19(V206)}
	return Cnil;
}
/*	function definition for INVALID-METHOD-ERROR	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{object V207;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V207=(base[0]);
	vs_top=sup;
	base[1]= (VV[37]->s.s_dbind);
	{object V208;
	V208= (V207);
	 vs_top=base+2;
	 while(V208!=Cnil)
	 {vs_push((V208)->c.c_car);V208=(V208)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	function definition for METHOD-COMBINATION-ERROR	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{object V209;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V209=(base[0]);
	vs_top=sup;
	base[1]= (VV[38]->s.s_dbind);
	{object V210;
	V210= (V209);
	 vs_top=base+2;
	 while(V210!=Cnil)
	 {vs_push((V210)->c.c_car);V210=(V210)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local function CLOSURE	*/

static void LC30(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	{object V211;
	object V212;
	check_arg(2);
	V211=(base[0]);
	V212=(base[1]);
	vs_top=sup;
	{object V213;
	object V214;
	{object V215;
	object V216= (base0[0]->c.c_car);
	if(V216==Cnil){
	V213= Cnil;
	goto T361;}
	base[4]=V215=MMcons(Cnil,Cnil);
	goto T362;
T362:;
	{register object V217;
	V217= (V216->c.c_car);
	if(!(type_of((V217))==t_cons)){
	goto T365;}
	{object V218= CMPcar((V217));
	if((V218!= VV[26]))goto T367;
	base[5]= CMPcdr((V217));
	base[6]= (V211);
	base[7]= (V212);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	(V215->c.c_car)= vs_base[0];
	goto T363;
	goto T367;
T367:;
	if((V218!= VV[27]))goto T371;
	{object V219;
	object V220= CMPcdr((V217));
	if(V220==Cnil){
	(V215->c.c_car)= Cnil;
	goto T363;}
	base[5]=V219=MMcons(Cnil,Cnil);
	goto T372;
T372:;
	base[6]= (V211);
	base[7]= (V212);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = (V220->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	(V219->c.c_car)= vs_base[0];
	if((V220=MMcdr(V220))==Cnil){
	(V215->c.c_car)= base[5];
	goto T363;}
	V219=MMcdr(V219)=MMcons(Cnil,Cnil);
	goto T372;}
	goto T371;
T371:;
	(V215->c.c_car)= (V217);
	goto T363;}
	goto T365;
T365:;
	(V215->c.c_car)= (V217);}
	goto T363;
T363:;
	if((V216=MMcdr(V216))==Cnil){
	V213= base[4];
	goto T361;}
	V215=MMcdr(V215)=MMcons(Cnil,Cnil);
	goto T362;}
	goto T361;
T361:;
	base[5]= (base0[1]->c.c_car);
	{object V222;
	V222= (V213);
	 vs_top=base+6;
	 while(V222!=Cnil)
	 {vs_push((V222)->c.c_car);V222=(V222)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= list(2,VV[28],(base0[3]->c.c_car));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk76)();
	vs_top=sup;
	V214= vs_base[0];
	base[4]= (VFUN_NARGS=4,(*(LnkLI54))(VV[8],(V214),VV[7],(base0[2]->c.c_car)));
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC29(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V223;
	check_arg(1);
	V223=(base[0]);
	vs_top=sup;
	base[1]= (*(LnkLI77))((V223),(base0[4]->c.c_car));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC28(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V224;
	check_arg(1);
	V224=(base[0]);
	vs_top=sup;
	base[1]= (V224);
	base[2]= (base0[4]->c.c_car);
	base[3]= (base0[2]->c.c_car);
	base[4]= (base0[3]->c.c_car);
	base[5]= (base0[5]->c.c_car);
	base[6]= (base0[6]->c.c_car);
	vs_top=(vs_base=base+1)+6;
	(void) (*Lnk78)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC27(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	{object V225;
	check_arg(1);
	V225=(base[0]);
	vs_top=sup;
	base[1]= (*(LnkLI79))((V225),(base0[4]->c.c_car),(base0[5]->c.c_car),(base0[6]->c.c_car));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	{object V226;
	check_arg(1);
	V226=(base[0]);
	vs_top=sup;
	V227= (*(LnkLI60))((base0[2]->c.c_car),(V226),(base0[1]->c.c_car),(base0[0]->c.c_car));
	base[1]= ((VV[2])==(/* INLINE-ARGS */V227)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC25(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	{object V228;
	check_arg(1);
	V228=(base[0]);
	vs_top=sup;
	V229= (*(LnkLI60))((base0[0]->c.c_car),(V228),(base0[1]->c.c_car),(base0[2]->c.c_car));
	base[1]= ((VV[2])==(/* INLINE-ARGS */V229)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC24(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	{object V230;
	object V231;
	check_arg(2);
	V230=(base[0]);
	V231=(base[1]);
	vs_top=sup;
	base[2]= (base0[3]->c.c_car);
	base[3]= (base0[1]->c.c_car);
	base[4]= (base0[0]->c.c_car);
	base[5]= (base0[2]->c.c_car);
	base[6]= (V230);
	base[7]= (V231);
	vs_top=(vs_base=base+2)+6;
	(void) (*Lnk52)();
	return;
	}
}
static object  LnkTLI79(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[79],(void **)(void *)&LnkLI79,4,first,ap);va_end(ap);return V1;} /* MEMF-TEST-CONVERTER */
static void LnkT78(){ call_or_link(VV[78],(void **)(void *)&Lnk78);} /* MEMF-CODE-CONVERTER */
static object  LnkTLI77(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[77],(void **)(void *)&LnkLI77,2,first,ap);va_end(ap);return V1;} /* MEMF-CONSTANT-CONVERTER */
static void LnkT76(){ call_or_link(VV[76],(void **)(void *)&Lnk76);} /* SET-FUNCTION-NAME */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[75],(void **)(void *)&LnkLI75,3,first,ap);va_end(ap);return V1;} /* STANDARD-COMPUTE-EFFECTIVE-METHOD */
static object  LnkTLI74(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[74],(void **)(void *)&LnkLI74,1,first,ap);va_end(ap);return V1;} /* MAKE-CALL-METHODS */
static void LnkT73(ptr) object *ptr;{ call_or_link_closure(VV[73],(void **)(void *)&Lnk73,(void **)(void *)&Lclptr73);} /* METHOD-QUALIFIERS */
static object  LnkTLI72(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[72],(void **)(void *)&LnkLI72,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-QUALIFIERS */
static void LnkT71(){ call_or_link(VV[71],(void **)(void *)&Lnk71);} /* GET-FUNCTION1 */
static object  LnkTLI70(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[70],(void **)(void *)&LnkLI70,first,ap);va_end(ap);return V1;} /* EXPAND-EFFECTIVE-METHOD-FUNCTION */
static void LnkT69(ptr) object *ptr;{ call_or_link_closure(VV[69],(void **)(void *)&Lnk69,(void **)(void *)&Lclptr69);} /* GENERIC-FUNCTION-NAME */
static object  LnkTLI68(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[68],(void **)(void *)&LnkLI68,1,first,ap);va_end(ap);return V1;} /* EARLY-GF-NAME */
static object  LnkTLI67(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[67],(void **)(void *)&LnkLI67,1,first,ap);va_end(ap);return V1;} /* EARLY-GF-P */
static object  LnkTLI66(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[66],(void **)(void *)&LnkLI66,1,first,ap);va_end(ap);return V1;} /* DEFAULT-CONSTANT-CONVERTER */
static void LnkT65(){ call_or_link(VV[65],(void **)(void *)&Lnk65);} /* DEFAULT-CODE-CONVERTER */
static object  LnkTLI64(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[64],(void **)(void *)&LnkLI64,first,ap);va_end(ap);return V1;} /* MAKE-EMF-CALL */
static object  LnkTLI63(){return call_proc0(VV[63],(void **)(void *)&LnkLI63);} /* GET-EFFECTIVE-METHOD-GENSYM */
static object  LnkTLI62(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[62],(void **)(void *)&LnkLI62,1,first,ap);va_end(ap);return V1;} /* DEFAULT-TEST-CONVERTER */
static void LnkT61(){ call_or_link(VV[61],(void **)(void *)&Lnk61);} /* EVERY */
static object  LnkTLI60(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[60],(void **)(void *)&LnkLI60,4,first,ap);va_end(ap);return V1;} /* MAKE-EFFECTIVE-METHOD-FUNCTION-TYPE */
static object  LnkTLI59(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[59],(void **)(void *)&LnkLI59,2,first,ap);va_end(ap);return V1;} /* MAKE-FAST-METHOD-CALL-LAMBDA-LIST */
static void LnkT58(){ call_or_link(VV[58],(void **)(void *)&Lnk58);} /* GET-GENERIC-FUNCTION-INFO */
static void LnkT57(){ call_or_link(VV[57],(void **)(void *)&Lnk57);} /* MAKE-EFFECTIVE-METHOD-FUNCTION */
static object  LnkTLI56(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[56],(void **)(void *)&LnkLI56,first,ap);va_end(ap);return V1;} /* MAKE-EMF-FROM-METHOD */
static object  LnkTLI55(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[55],(void **)(void *)&LnkLI55,first,ap);va_end(ap);return V1;} /* MAKE-METHOD-CALL */
static object  LnkTLI54(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[54],(void **)(void *)&LnkLI54,first,ap);va_end(ap);return V1;} /* MAKE-FAST-METHOD-CALL */
static object  LnkTLI53(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[53],(void **)(void *)&LnkLI53,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-GET */
static void LnkT52(){ call_or_link(VV[52],(void **)(void *)&Lnk52);} /* MAKE-EFFECTIVE-METHOD-FUNCTION-SIMPLE1 */
static void LnkT51(){ call_or_link(VV[51],(void **)(void *)&Lnk51);} /* GET-METHOD-FUNCTION */
static void LnkT50(ptr) object *ptr;{ call_or_link_closure(VV[50],(void **)(void *)&Lnk50,(void **)(void *)&Lclptr50);} /* GF-FAST-METHOD-FUNCTION-P */
static void LnkT49(ptr) object *ptr;{ call_or_link_closure(VV[49],(void **)(void *)&Lnk49,(void **)(void *)&Lclptr49);} /* METHOD-P */
static object  LnkTLI48(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[48],(void **)(void *)&LnkLI48,4,first,ap);va_end(ap);return V1;} /* MAKE-EFFECTIVE-METHOD-FUNCTION-INTERNAL */
static object  LnkTLI47(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[47],(void **)(void *)&LnkLI47,first,ap);va_end(ap);return V1;} /* MAKE-EFFECTIVE-METHOD-FUNCTION-SIMPLE */
static object  LnkTLI46(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[46],(void **)(void *)&LnkLI46,4,first,ap);va_end(ap);return V1;} /* MAKE-EFFECTIVE-METHOD-FUNCTION1 */
static void LnkT45(ptr) object *ptr;{ call_or_link_closure(VV[45],(void **)(void *)&Lnk45,(void **)(void *)&Lclptr45);} /* METHOD-FUNCTION */
static object  LnkTLI44(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[44],(void **)(void *)&LnkLI44,1,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-FROM-FAST-FUNCTION */
static object  LnkTLI43(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[43],(void **)(void *)&LnkLI43,2,first,ap);va_end(ap);return V1;} /* PV-TABLE-LOOKUP */
static object  LnkTLI42(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[42],(void **)(void *)&LnkLI42,2,first,ap);va_end(ap);return V1;} /* PV-WRAPPERS-FROM-ALL-WRAPPERS */
static object  LnkTLI41(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[41],(void **)(void *)&LnkLI41,1,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-PV-TABLE */
static void LnkT40(ptr) object *ptr;{ call_or_link_closure(VV[40],(void **)(void *)&Lnk40,(void **)(void *)&Lclptr40);} /* METHOD-FAST-FUNCTION */
static void LnkT39(){ call_or_link(VV[39],(void **)(void *)&Lnk39);} /* EARLY-METHOD-FUNCTION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

