
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
	(void) (*Lnk51)();
	goto T15;
	goto T17;
T17:;
	base[3]= Cnil;
	base[5]= (V1);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk52)(Lclptr52);
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
	V9= (*(LnkLI53))((V8));
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
	V10= (*(LnkLI54))((V9),(V3));
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
	V11= (*(LnkLI55))((V9),(V10));
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
	V13= (*(LnkLI56))((V8));
	(CMPcdr(V1))->c.c_car = (V13);
	(void)(CMPcdr(V1));
	base[4]= (V13);
	goto T48;}
	goto T50;
T50:;
	base[5]= (V1);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk57)(Lclptr57);
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
	base[4]= (*(LnkLI58))((V14),(V15),(((((V16))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil),(((((V17))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil));
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
	{object V26 = (VFUN_NARGS=2,(*(LnkLI59))((V22),(V23)));
	VMR3(V26)}
	goto T67;
T67:;
	{object V27 = (*(LnkLI60))((V22),(V23),(V24),(V25));
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
	(void) (*Lnk61)(Lclptr61);
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
	(void) (*Lnk51)();
	goto T91;
	goto T93;
T93:;
	base[2]= Cnil;
	base[4]= (V37);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk52)(Lclptr52);
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
	V41= (*(LnkLI53))((V40));
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
	(void) (*Lnk62)(Lclptr62);
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
	(void) (*Lnk63)();
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
	(void) (*Lnk64)();
	vs_top=sup;
	V66= vs_base[0];
	V67= (VFUN_NARGS=2,(*(LnkLI65))((V63),VV[7]));
	{object V68 = (VFUN_NARGS=8,(*(LnkLI66))(VV[8],(V63),VV[9],(V64),VV[10],(V66),VV[7],(V67)));
	VMR6(V68)}}
	goto T154;
T154:;
	if(((V62))==Cnil){
	goto T166;}
	{object V69 = (VFUN_NARGS=4,(*(LnkLI67))(VV[8],(V61),VV[11],(V56)));
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
	(void) (*Lnk61)(Lclptr61);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T177;}
	goto T178;
T178:;
	base[6]= (VFUN_NARGS=6,(*(LnkLI68))((V72),(V73),(V71),(V74),(V75),(V76)));
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
	(void) (*Lnk69)();
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
	register object V87;
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
	(void) (*Lnk70)();
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
	V94= (*(LnkLI71))((V91),(V90));
	if(!((CMPcar((V87)))==(VV[16]))){
	goto T218;}
	{object V95 = list(4,VV[17],VV[18],VV[19],list(3,VV[20],VV[21],(V87)));
	VMR9(V95)}
	goto T218;
T218:;
	if(!(((VV[5]->s.s_dbind))==(VV[6]))){
	goto T221;}
	{object V96;
	base[0]= (V86);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk72)(Lclptr72);
	vs_top=sup;
	V96= vs_base[0];
	base[0]= (V96);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk73)(Lclptr73);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T227;}
	goto T221;
	goto T227;
T227:;
	base[0]= (V96);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk74)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T221;}}
	{object V97;
	object V98;
	base[2]= (V91);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk75)();
	vs_top=sup;
	V97= vs_base[0];
	if(((V90))==Cnil){
	goto T235;}
	V99= append((V97),VV[23]);
	V98= make_cons(VV[22],/* INLINE-ARGS */V99);
	goto T233;
	goto T235;
T235:;
	V98= make_cons(VV[24],(V97));
	goto T233;
T233:;
	V100= list(2,VV[27],(V98));
	{object V101 = list(4,VV[17],(V94),VV[25],list(4,VV[26],make_cons(/* INLINE-ARGS */V100,Cnil),VV[28],(V87)));
	VMR9(V101)}}
	goto T221;
T221:;
	{object V102 = list(4,VV[17],(V94),VV[29],(V87));
	VMR9(V102)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function EXPAND-EMF-CALL-METHOD	*/

static object LI10(V108,V109,V110,V111,V112)

object V108;object V109;object V110;object V111;object V112;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V113 = list(2,VV[0],CMPcdr((V109)));
	VMR10(V113)}
	return Cnil;
}
/*	macro definition for CALL-METHOD	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V114=base[0]->c.c_cdr;
	base[2]= V114;}
	base[3]= VV[30];
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function MEMF-TEST-CONVERTER	*/

static object LI13(V119,V120,V121,V122)

register object V119;object V120;object V121;object V122;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	base[0]=MMcons((V122),Cnil);
	base[1]=MMcons((V121),base[0]);
	base[2]=MMcons((V120),base[1]);
	if(!(type_of((V119))==t_cons)){
	goto T238;}
	if(!((CMPcar((V119)))==(VV[0]))){
	goto T238;}
	V124= (*(LnkLI76))((base[2]->c.c_car),(V119),(base[1]->c.c_car),(base[0]->c.c_car));
	{object V123= /* INLINE-ARGS */V124;
	if((V123!= VV[2]))goto T242;
	{object V125 = VV[31];
	VMR12(V125)}
	goto T242;
T242:;
	{object V126 = VV[32];
	VMR12(V126)}}
	goto T238;
T238:;
	if(!(type_of((V119))==t_cons)){
	goto T244;}
	if(!((CMPcar((V119)))==(VV[33]))){
	goto T244;}
	base[3]= 
	make_cclosure_new(LC25,Cnil,base[2],Cdata);
	base[4]= CMPcdr((V119));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T250;}
	V128= VV[2];
	goto T248;
	goto T250;
T250:;
	V128= Ct;
	goto T248;
T248:;
	{object V127= V128;
	if((V127!= VV[2]))goto T254;
	{object V129 = VV[34];
	VMR12(V129)}
	goto T254;
T254:;
	{object V130 = VV[35];
	VMR12(V130)}}
	goto T244;
T244:;
	{object V131 = (*(LnkLI78))((V119));
	VMR12(V131)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MEMF-CODE-CONVERTER	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{register object V132;
	object V133;
	object V134;
	check_arg(6);
	V132=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	V133=(base[2]);
	V134=(base[3]);
	base[4]=MMcons(base[4],base[1]);
	base[5]=MMcons(base[5],base[4]);
	vs_top=sup;
	if(!(type_of((V132))==t_cons)){
	goto T256;}
	if(!((CMPcar((V132)))==(VV[0]))){
	goto T256;}
	{object V135;
	V135= (*(LnkLI79))();
	V136= (*(LnkLI76))((base[1]->c.c_car),(V132),(base[4]->c.c_car),(base[5]->c.c_car));
	base[6]= (VFUN_NARGS=4,(*(LnkLI80))((V133),(V134),(V135),/* INLINE-ARGS */V136));
	base[7]= make_cons((V135),Cnil);
	vs_top=(vs_base=base+6)+2;
	return;}
	goto T256;
T256:;
	if(!(type_of((V132))==t_cons)){
	goto T264;}
	if(!((CMPcar((V132)))==(VV[33]))){
	goto T264;}
	{object V137;
	object V138;
	V137= (*(LnkLI79))();
	base[6]= 
	make_cclosure_new(LC26,Cnil,base[5],Cdata);
	base[7]= CMPcdr((V132));
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T271;}
	V138= VV[2];
	goto T269;
	goto T271;
T271:;
	V138= Ct;
	goto T269;
T269:;
	V139= list(3,VV[37],(V137),Cnil);
	base[6]= list(3,VV[36],/* INLINE-ARGS */V139,(VFUN_NARGS=4,(*(LnkLI80))((V133),(V134),VV[37],(V138))));
	base[7]= make_cons((V137),Cnil);
	vs_top=(vs_base=base+6)+2;
	return;}
	goto T264;
T264:;
	base[6]= (V132);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk81)();
	return;
	}
}
/*	local entry for function MEMF-CONSTANT-CONVERTER	*/

static object LI15(V142,V143)

register object V142;object V143;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if(!(type_of((V142))==t_cons)){
	goto T279;}
	if(!((CMPcar((V142)))==(VV[0]))){
	goto T279;}
	V144= (VFUN_NARGS=2,(*(LnkLI59))((V143),(V142)));
	V145= make_cons(VV[38],/* INLINE-ARGS */V144);
	{object V146 = make_cons(/* INLINE-ARGS */V145,Cnil);
	VMR14(V146)}
	goto T279;
T279:;
	if(!(type_of((V142))==t_cons)){
	goto T284;}
	if(!((CMPcar((V142)))==(VV[33]))){
	goto T284;}
	{object V148;
	object V149= CMPcdr((V142));
	if(V149==Cnil){
	V147= Cnil;
	goto T288;}
	base[0]=V148=MMcons(Cnil,Cnil);
	goto T289;
T289:;
	(V148->c.c_car)= (VFUN_NARGS=2,(*(LnkLI59))((V143),(V149->c.c_car)));
	if((V149=MMcdr(V149))==Cnil){
	V147= base[0];
	goto T288;}
	V148=MMcdr(V148)=MMcons(Cnil,Cnil);
	goto T289;}
	goto T288;
T288:;
	V151= make_cons(VV[39],V147);
	{object V152 = make_cons(/* INLINE-ARGS */V151,Cnil);
	VMR14(V152)}
	goto T284;
T284:;
	{object V153 = (*(LnkLI82))((V142));
	VMR14(V153)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-EFFECTIVE-METHOD-FUNCTION-INTERNAL	*/

static object LI17(V158,V159,V160,V161)

object V158;object V159;object V160;object V161;
{	 VMB15 VMS15 VMV15
	bds_check;
	goto TTL;
TTL:;
	base[0]=MMcons((V161),Cnil);
	base[1]=MMcons((V160),base[0]);
	base[2]=MMcons((V158),base[1]);
	{object V162;
	object V163;
	object V164;
	base[5]= (base[2]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk70)();
	if(vs_base>=vs_top){vs_top=sup;goto T293;}
	V162= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T294;}
	base[3]=MMcons(vs_base[0],base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T295;}
	base[4]=MMcons(vs_base[0],base[3]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T296;}
	V163= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T297;}
	V164= vs_base[0];
	vs_top=sup;
	goto T298;
	goto T293;
T293:;
	V162= Cnil;
	goto T294;
T294:;
	base[3]=MMcons(Cnil,base[2]);
	goto T295;
T295:;
	base[4]=MMcons(Cnil,base[3]);
	goto T296;
T296:;
	V163= Cnil;
	goto T297;
T297:;
	V164= Cnil;
	goto T298;
T298:;
	{object V165;
	bds_bind(VV[12],(VV[14]->s.s_dbind));
	if(((*(LnkLI83))((base[2]->c.c_car)))==Cnil){
	goto T301;}
	base[6]= (*(LnkLI84))((base[2]->c.c_car));
	goto T299;
	goto T301;
T301:;
	base[9]= (base[2]->c.c_car);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk85)(Lclptr85);
	vs_top=sup;
	base[6]= vs_base[0];
	goto T299;
T299:;
	base[6]=MMcons(base[6],base[4]);
	base[7]= make_cons((V162),(base[3]->c.c_car));
	base[7]=MMcons(base[7],base[6]);
	V165= (VFUN_NARGS=2,(*(LnkLI86))((base[2]->c.c_car),(V159)));
	base[11]= (V165);
	base[12]= 
	make_cclosure_new(LC27,Cnil,base[7],Cdata);
	base[13]= 
	make_cclosure_new(LC28,Cnil,base[7],Cdata);
	base[14]= 
	make_cclosure_new(LC29,Cnil,base[7],Cdata);
	vs_top=(vs_base=base+11)+4;
	(void) (*Lnk87)();
	if(vs_base>=vs_top){vs_top=sup;goto T311;}
	base[9]=MMcons(vs_base[0],base[7]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T312;}
	base[10]=MMcons(vs_base[0],base[9]);
	vs_top=sup;
	goto T313;
	goto T311;
T311:;
	base[9]=MMcons(Cnil,base[7]);
	goto T312;
T312:;
	base[10]=MMcons(Cnil,base[9]);
	goto T313;
T313:;
	{object V166 = 
	make_cclosure_new(LC30,Cnil,base[10],Cdata);
	bds_unwind1;
	VMR15(V166)}}}
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
	{object V167=base[0]->c.c_cdr;
	base[2]= V167;}
	base[3]= make_cons(VV[41],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function MAKE-CALL-METHODS	*/

static object LI19(V169)

object V169;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V171;
	object V172= (V169);
	if(V172==Cnil){
	V170= Cnil;
	goto T314;}
	base[0]=V171=MMcons(Cnil,Cnil);
	goto T315;
T315:;
	(V171->c.c_car)= list(3,VV[0],(V172->c.c_car),Cnil);
	if((V172=MMcdr(V172))==Cnil){
	V170= base[0];
	goto T314;}
	V171=MMcdr(V171)=MMcons(Cnil,Cnil);
	goto T315;}
	goto T314;
T314:;
	{object V174 = make_cons(VV[33],V170);
	VMR17(V174)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function STANDARD-COMPUTE-EFFECTIVE-METHOD	*/

static object LI20(V178,V179,V180)

object V178;object V179;object V180;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{register object V181;
	register object V182;
	register object V183;
	register object V184;
	V181= Cnil;
	V182= Cnil;
	V183= Cnil;
	V184= Cnil;
	{register object V185;
	register object V186;
	V185= (V180);
	V186= CMPcar((V185));
	goto T321;
T321:;
	if(!(((V185))==Cnil)){
	goto T322;}
	goto T317;
	goto T322;
T322:;
	{register object V187;
	if(!(type_of((V186))==t_cons||((V186))==Cnil)){
	goto T329;}
	V187= (*(LnkLI88))((V186));
	goto T327;
	goto T329;
T329:;
	base[1]= (V186);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk89)(Lclptr89);
	vs_top=sup;
	V187= vs_base[0];
	goto T327;
T327:;
	{register object x= VV[42],V188= (V187);
	while(V188!=Cnil)
	if(eql(x,V188->c.c_car)){
	goto T334;
	}else V188=V188->c.c_cdr;
	goto T333;}
	goto T334;
T334:;
	V181= make_cons(V186,(V181));
	goto T326;
	goto T333;
T333:;
	{register object x= VV[43],V190= (V187);
	while(V190!=Cnil)
	if(eql(x,V190->c.c_car)){
	goto T338;
	}else V190=V190->c.c_cdr;
	goto T337;}
	goto T338;
T338:;
	V183= make_cons(V186,(V183));
	goto T326;
	goto T337;
T337:;
	{register object x= VV[44],V192= (V187);
	while(V192!=Cnil)
	if(eql(x,V192->c.c_car)){
	goto T342;
	}else V192=V192->c.c_cdr;
	goto T341;}
	goto T342;
T342:;
	V184= make_cons(V186,(V184));
	goto T326;
	goto T341;
T341:;
	V182= make_cons(V186,(V182));}
	goto T326;
T326:;
	V185= CMPcdr((V185));
	V186= CMPcar((V185));
	goto T321;}
	goto T317;
T317:;
	V181= reverse((V181));
	V183= reverse((V183));
	V182= reverse((V182));
	V184= reverse((V184));
	if(((V182))!=Cnil){
	goto T359;}
	{object V195 = list(3,VV[45],VV[46],list(2,VV[47],(V178)));
	VMR18(V195)}
	goto T359;
T359:;
	if(((V181))!=Cnil){
	goto T362;}
	if(((V183))!=Cnil){
	goto T362;}
	if(((V184))!=Cnil){
	goto T362;}
	{object V196 = list(3,VV[0],CMPcar((V182)),CMPcdr((V182)));
	VMR18(V196)}
	goto T362;
T362:;
	{object V197;
	if(((V181))!=Cnil){
	goto T369;}
	if(((V183))==Cnil){
	goto T370;}
	goto T369;
T369:;
	V198= (*(LnkLI90))((V181));
	V199= list(3,VV[41],/* INLINE-ARGS */V198,list(3,VV[0],CMPcar((V182)),CMPcdr((V182))));
	V200= reverse((V183));
	V197= list(3,VV[48],/* INLINE-ARGS */V199,(*(LnkLI90))(/* INLINE-ARGS */V200));
	goto T368;
	goto T370;
T370:;
	V197= list(3,VV[0],CMPcar((V182)),CMPcdr((V182)));
	goto T368;
T368:;
	if(((V184))==Cnil){
	goto T375;}
	V201= CMPcar((V184));
	V202= CMPcdr((V184));
	V203= list(2,VV[4],(V197));
	V204= make_cons(/* INLINE-ARGS */V203,Cnil);
	{object V205 = list(3,VV[0],/* INLINE-ARGS */V201,append(/* INLINE-ARGS */V202,/* INLINE-ARGS */V204));
	VMR18(V205)}
	goto T375;
T375:;
	{object V206 = (V197);
	VMR18(V206)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-EFFECTIVE-METHOD	*/

static object LI21(V210,V211,V212)

object V210;object V211;object V212;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V213 = (*(LnkLI91))((V210),(V211),(V212));
	VMR19(V213)}
	return Cnil;
}
/*	function definition for INVALID-METHOD-ERROR	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{object V214;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V214=(base[0]);
	vs_top=sup;
	base[1]= (VV[49]->s.s_dbind);
	{object V215;
	V215= (V214);
	 vs_top=base+2;
	 while(V215!=Cnil)
	 {vs_push((V215)->c.c_car);V215=(V215)->c.c_cdr;}
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
	{object V216;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V216=(base[0]);
	vs_top=sup;
	base[1]= (VV[50]->s.s_dbind);
	{object V217;
	V217= (V216);
	 vs_top=base+2;
	 while(V217!=Cnil)
	 {vs_push((V217)->c.c_car);V217=(V217)->c.c_cdr;}
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
	{object V218;
	object V219;
	check_arg(2);
	V218=(base[0]);
	V219=(base[1]);
	vs_top=sup;
	{object V220;
	object V221;
	{object V222;
	object V223= (base0[0]->c.c_car);
	if(V223==Cnil){
	V220= Cnil;
	goto T381;}
	base[4]=V222=MMcons(Cnil,Cnil);
	goto T382;
T382:;
	{register object V224;
	V224= (V223->c.c_car);
	if(!(type_of((V224))==t_cons)){
	goto T385;}
	{object V225= CMPcar((V224));
	if((V225!= VV[38]))goto T387;
	base[5]= CMPcdr((V224));
	base[6]= (V218);
	base[7]= (V219);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	(V222->c.c_car)= vs_base[0];
	goto T383;
	goto T387;
T387:;
	if((V225!= VV[39]))goto T391;
	{object V226;
	object V227= CMPcdr((V224));
	if(V227==Cnil){
	(V222->c.c_car)= Cnil;
	goto T383;}
	base[5]=V226=MMcons(Cnil,Cnil);
	goto T392;
T392:;
	base[6]= (V218);
	base[7]= (V219);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = (V227->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	(V226->c.c_car)= vs_base[0];
	if((V227=MMcdr(V227))==Cnil){
	(V222->c.c_car)= base[5];
	goto T383;}
	V226=MMcdr(V226)=MMcons(Cnil,Cnil);
	goto T392;}
	goto T391;
T391:;
	(V222->c.c_car)= (V224);
	goto T383;}
	goto T385;
T385:;
	(V222->c.c_car)= (V224);}
	goto T383;
T383:;
	if((V223=MMcdr(V223))==Cnil){
	V220= base[4];
	goto T381;}
	V222=MMcdr(V222)=MMcons(Cnil,Cnil);
	goto T382;}
	goto T381;
T381:;
	base[5]= (base0[1]->c.c_car);
	{object V229;
	V229= (V220);
	 vs_top=base+6;
	 while(V229!=Cnil)
	 {vs_push((V229)->c.c_car);V229=(V229)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= list(2,VV[40],(base0[3]->c.c_car));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk92)();
	vs_top=sup;
	V221= vs_base[0];
	base[4]= (VFUN_NARGS=4,(*(LnkLI66))(VV[8],(V221),VV[7],(base0[2]->c.c_car)));
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
	{object V230;
	check_arg(1);
	V230=(base[0]);
	vs_top=sup;
	base[1]= (*(LnkLI93))((V230),(base0[4]->c.c_car));
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
	{object V231;
	check_arg(1);
	V231=(base[0]);
	vs_top=sup;
	base[1]= (V231);
	base[2]= (base0[4]->c.c_car);
	base[3]= (base0[2]->c.c_car);
	base[4]= (base0[3]->c.c_car);
	base[5]= (base0[5]->c.c_car);
	base[6]= (base0[6]->c.c_car);
	vs_top=(vs_base=base+1)+6;
	(void) (*Lnk94)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC27(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	{object V232;
	check_arg(1);
	V232=(base[0]);
	vs_top=sup;
	base[1]= (*(LnkLI95))((V232),(base0[4]->c.c_car),(base0[5]->c.c_car),(base0[6]->c.c_car));
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
	{object V233;
	check_arg(1);
	V233=(base[0]);
	vs_top=sup;
	V234= (*(LnkLI76))((base0[2]->c.c_car),(V233),(base0[1]->c.c_car),(base0[0]->c.c_car));
	base[1]= ((VV[2])==(/* INLINE-ARGS */V234)?Ct:Cnil);
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
	{object V235;
	check_arg(1);
	V235=(base[0]);
	vs_top=sup;
	V236= (*(LnkLI76))((base0[0]->c.c_car),(V235),(base0[1]->c.c_car),(base0[2]->c.c_car));
	base[1]= ((VV[2])==(/* INLINE-ARGS */V236)?Ct:Cnil);
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
	{object V237;
	object V238;
	check_arg(2);
	V237=(base[0]);
	V238=(base[1]);
	vs_top=sup;
	base[2]= (base0[3]->c.c_car);
	base[3]= (base0[1]->c.c_car);
	base[4]= (base0[0]->c.c_car);
	base[5]= (base0[2]->c.c_car);
	base[6]= (V237);
	base[7]= (V238);
	vs_top=(vs_base=base+2)+6;
	(void) (*Lnk64)();
	return;
	}
}
static object  LnkTLI95(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[95],(void **)(void *)&LnkLI95,4,first,ap);va_end(ap);return V1;} /* MEMF-TEST-CONVERTER */
static void LnkT94(){ call_or_link(VV[94],(void **)(void *)&Lnk94);} /* MEMF-CODE-CONVERTER */
static object  LnkTLI93(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[93],(void **)(void *)&LnkLI93,2,first,ap);va_end(ap);return V1;} /* MEMF-CONSTANT-CONVERTER */
static void LnkT92(){ call_or_link(VV[92],(void **)(void *)&Lnk92);} /* SET-FUNCTION-NAME */
static object  LnkTLI91(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[91],(void **)(void *)&LnkLI91,3,first,ap);va_end(ap);return V1;} /* STANDARD-COMPUTE-EFFECTIVE-METHOD */
static object  LnkTLI90(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[90],(void **)(void *)&LnkLI90,1,first,ap);va_end(ap);return V1;} /* MAKE-CALL-METHODS */
static void LnkT89(ptr) object *ptr;{ call_or_link_closure(VV[89],(void **)(void *)&Lnk89,(void **)(void *)&Lclptr89);} /* METHOD-QUALIFIERS */
static object  LnkTLI88(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[88],(void **)(void *)&LnkLI88,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-QUALIFIERS */
static void LnkT87(){ call_or_link(VV[87],(void **)(void *)&Lnk87);} /* GET-FUNCTION1 */
static object  LnkTLI86(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[86],(void **)(void *)&LnkLI86,first,ap);va_end(ap);return V1;} /* EXPAND-EFFECTIVE-METHOD-FUNCTION */
static void LnkT85(ptr) object *ptr;{ call_or_link_closure(VV[85],(void **)(void *)&Lnk85,(void **)(void *)&Lclptr85);} /* GENERIC-FUNCTION-NAME */
static object  LnkTLI84(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[84],(void **)(void *)&LnkLI84,1,first,ap);va_end(ap);return V1;} /* EARLY-GF-NAME */
static object  LnkTLI83(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[83],(void **)(void *)&LnkLI83,1,first,ap);va_end(ap);return V1;} /* EARLY-GF-P */
static object  LnkTLI82(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[82],(void **)(void *)&LnkLI82,1,first,ap);va_end(ap);return V1;} /* DEFAULT-CONSTANT-CONVERTER */
static void LnkT81(){ call_or_link(VV[81],(void **)(void *)&Lnk81);} /* DEFAULT-CODE-CONVERTER */
static object  LnkTLI80(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[80],(void **)(void *)&LnkLI80,first,ap);va_end(ap);return V1;} /* MAKE-EMF-CALL */
static object  LnkTLI79(){return call_proc0(VV[79],(void **)(void *)&LnkLI79);} /* GET-EFFECTIVE-METHOD-GENSYM */
static object  LnkTLI78(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[78],(void **)(void *)&LnkLI78,1,first,ap);va_end(ap);return V1;} /* DEFAULT-TEST-CONVERTER */
static void LnkT77(){ call_or_link(VV[77],(void **)(void *)&Lnk77);} /* EVERY */
static object  LnkTLI76(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[76],(void **)(void *)&LnkLI76,4,first,ap);va_end(ap);return V1;} /* MAKE-EFFECTIVE-METHOD-FUNCTION-TYPE */
static void LnkT75(){ call_or_link(VV[75],(void **)(void *)&Lnk75);} /* DFUN-ARG-SYMBOL-LIST */
static void LnkT74(){ call_or_link(VV[74],(void **)(void *)&Lnk74);} /* LONG-METHOD-COMBINATION-ARGUMENTS-LAMBDA-LIST */
static void LnkT73(ptr) object *ptr;{ call_or_link_closure(VV[73],(void **)(void *)&Lnk73,(void **)(void *)&Lclptr73);} /* LONG-METHOD-COMBINATION-P */
static void LnkT72(ptr) object *ptr;{ call_or_link_closure(VV[72],(void **)(void *)&Lnk72,(void **)(void *)&Lclptr72);} /* GENERIC-FUNCTION-METHOD-COMBINATION */
static object  LnkTLI71(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[71],(void **)(void *)&LnkLI71,2,first,ap);va_end(ap);return V1;} /* MAKE-FAST-METHOD-CALL-LAMBDA-LIST */
static void LnkT70(){ call_or_link(VV[70],(void **)(void *)&Lnk70);} /* GET-GENERIC-FUNCTION-INFO */
static void LnkT69(){ call_or_link(VV[69],(void **)(void *)&Lnk69);} /* MAKE-EFFECTIVE-METHOD-FUNCTION */
static object  LnkTLI68(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[68],(void **)(void *)&LnkLI68,first,ap);va_end(ap);return V1;} /* MAKE-EMF-FROM-METHOD */
static object  LnkTLI67(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[67],(void **)(void *)&LnkLI67,first,ap);va_end(ap);return V1;} /* MAKE-METHOD-CALL */
static object  LnkTLI66(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[66],(void **)(void *)&LnkLI66,first,ap);va_end(ap);return V1;} /* MAKE-FAST-METHOD-CALL */
static object  LnkTLI65(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[65],(void **)(void *)&LnkLI65,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-GET */
static void LnkT64(){ call_or_link(VV[64],(void **)(void *)&Lnk64);} /* MAKE-EFFECTIVE-METHOD-FUNCTION-SIMPLE1 */
static void LnkT63(){ call_or_link(VV[63],(void **)(void *)&Lnk63);} /* GET-METHOD-FUNCTION */
static void LnkT62(ptr) object *ptr;{ call_or_link_closure(VV[62],(void **)(void *)&Lnk62,(void **)(void *)&Lclptr62);} /* GF-FAST-METHOD-FUNCTION-P */
static void LnkT61(ptr) object *ptr;{ call_or_link_closure(VV[61],(void **)(void *)&Lnk61,(void **)(void *)&Lclptr61);} /* METHOD-P */
static object  LnkTLI60(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[60],(void **)(void *)&LnkLI60,4,first,ap);va_end(ap);return V1;} /* MAKE-EFFECTIVE-METHOD-FUNCTION-INTERNAL */
static object  LnkTLI59(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[59],(void **)(void *)&LnkLI59,first,ap);va_end(ap);return V1;} /* MAKE-EFFECTIVE-METHOD-FUNCTION-SIMPLE */
static object  LnkTLI58(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[58],(void **)(void *)&LnkLI58,4,first,ap);va_end(ap);return V1;} /* MAKE-EFFECTIVE-METHOD-FUNCTION1 */
static void LnkT57(ptr) object *ptr;{ call_or_link_closure(VV[57],(void **)(void *)&Lnk57,(void **)(void *)&Lclptr57);} /* METHOD-FUNCTION */
static object  LnkTLI56(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[56],(void **)(void *)&LnkLI56,1,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-FROM-FAST-FUNCTION */
static object  LnkTLI55(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[55],(void **)(void *)&LnkLI55,2,first,ap);va_end(ap);return V1;} /* PV-TABLE-LOOKUP */
static object  LnkTLI54(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[54],(void **)(void *)&LnkLI54,2,first,ap);va_end(ap);return V1;} /* PV-WRAPPERS-FROM-ALL-WRAPPERS */
static object  LnkTLI53(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[53],(void **)(void *)&LnkLI53,1,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-PV-TABLE */
static void LnkT52(ptr) object *ptr;{ call_or_link_closure(VV[52],(void **)(void *)&Lnk52,(void **)(void *)&Lclptr52);} /* METHOD-FAST-FUNCTION */
static void LnkT51(){ call_or_link(VV[51],(void **)(void *)&Lnk51);} /* EARLY-METHOD-FUNCTION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

