
#include "cmpinclude.h"
#include "pcl_fast_init.h"
void init_pcl_fast_init(){do_init(VV);}
/*	function definition for UPDATE-MAKE-INSTANCE-FUNCTION-TABLE	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	{register object V1;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T1;}
	V1=(base[0]);
	vs_top=sup;
	goto T2;
	goto T1;
T1:;
	V1= (VV[0]->s.s_dbind);
	goto T2;
T2:;
	if(!(type_of((V1))==t_symbol)){
	goto T4;}
	V1= (VFUN_NARGS=1,(*(LnkLI217))((V1)));
	goto T4;
T4:;
	if(!(((V1))==((VV[0]->s.s_dbind)))){
	goto T8;}
	V1= (VV[1]->s.s_dbind);
	goto T8;
T8:;{object V3;
	V3= (VV[1]->s.s_dbind);
	base[1]= (V1);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk218)(Lclptr218);
	vs_top=sup;
	V4= vs_base[0];
	{register object x= V3,V2= V4;
	while(V2!=Cnil)
	if(x==(V2->c.c_car)){
	goto T14;
	}else V2=V2->c.c_cdr;
	goto T13;}}
	goto T14;
T14:;
	base[1]= (VV[219]->s.s_gfdef);
	base[2]= (V1);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk220)();
	return;
	goto T13;
T13:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function CONSTANT-SYMBOL-P	*/

static object LI2(V6)

object V6;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	base[0]= (V6);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T19;}
	{object V7 = Cnil;
	VMR2(V7)}
	goto T19;
T19:;
	{object V8;
	base[0]= (V6);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V8= vs_base[0];
	if(type_of((V8))==t_symbol){
	goto T24;}
	{object V9 = Cnil;
	VMR2(V9)}
	goto T24;
T24:;
	base[0]= (V8);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	{object V10 = vs_base[0];
	VMR2(V10)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function EXPAND-MAKE-INSTANCE-FORM	*/

static object LI3(V12)

object V12;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V13;
	object V14;
	register object V15;
	object V16;
	register object V17;
	register object V18;
	V13= CMPcadr((V12));
	V14= CMPcddr((V12));
	V15= Cnil;
	V16= Cnil;
	V17= Cnil;
	V18= Cnil;
	if(((*(LnkLI221))((V13)))==Cnil){
	goto T30;}
	{register object V19;
	V19= (V14);
	goto T35;
T35:;
	if(((V19))!=Cnil){
	goto T37;}
	goto T33;
	goto T37;
T37:;
	if(((*(LnkLI221))(CMPcar((V19))))!=Cnil){
	goto T40;}
	goto T30;
	goto T40;
T40:;
	{register object V20;
	V20= CMPcar((V19));
	V19= CMPcdr((V19));
	base[0]= (V20);}
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V17= vs_base[0];
	{register object V21;
	V21= CMPcar((V19));
	V19= CMPcdr((V19));
	V18= (V21);}
	if(!((VV[2])==((V17)))){
	goto T54;}
	V16= (V18);
	goto T54;
T54:;
	{register object V22;
	V22= (V17);
	V15= make_cons((V22),(V15));}
	goto T35;}
	goto T33;
T33:;
	{object V23;
	object V24;
	object V25;
	object V26;
	base[4]= (V13);
	vs_top=(vs_base=base+4)+1;
	Leval();
	vs_top=sup;
	V23= vs_base[0];
	V24= nreverse((V15));
	V25= list(3,(V23),(V24),(V16));
	V26= (*(LnkLI75))((V25));
	(VV[3]->s.s_dbind)= make_cons(V25,(VV[3]->s.s_dbind));
	if(((V26))==Cnil){
	goto T69;}
	{object V28 = listA(3,(V26),list(2,VV[4],(V23)),(V14));
	VMR3(V28)}
	goto T69;
T69:;
	{object V29 = Cnil;
	VMR3(V29)}}
	goto T30;
T30:;
	{object V30 = Cnil;
	VMR3(V30)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for EXPANDING-MAKE-INSTANCE-TOP-LEVEL	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	bds_check;
	check_arg(2);
	vs_top=sup;
	{object V31=base[0]->c.c_cdr;
	base[2]= V31;}
	{object V32;
	bds_bind(VV[3],Cnil);
	base[5]= make_cons(VV[5],base[2]);
	base[6]= base[1];
	vs_top=(vs_base=base+5)+2;
	Lmacroexpand();
	vs_top=sup;
	V32= vs_base[0];
	if(((VV[3]->s.s_dbind))==Cnil){
	goto T76;}
	V34= list(2,VV[7],list(2,VV[4],(VV[3]->s.s_dbind)));
	V33= make_cons(/* INLINE-ARGS */V34,Cnil);
	goto T74;
	goto T76;
T76:;
	V33= Cnil;
	goto T74;
T74:;
	V35= make_cons((V32),Cnil);
	V36= append(V33,/* INLINE-ARGS */V35);
	base[5]= make_cons(VV[6],/* INLINE-ARGS */V36);
	vs_top=(vs_base=base+5)+1;
	bds_unwind1;
	return;}
}
/*	macro definition for EXPANDING-MAKE-INSTANCE	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V37=base[0]->c.c_cdr;
	base[2]= V37;}
	{object V39;
	object V40= base[2];
	if(V40==Cnil){
	V38= Cnil;
	goto T78;}
	base[3]=V39=MMcons(Cnil,Cnil);
	goto T79;
T79:;
	base[4]= (V40->c.c_car);
	base[5]= base[1];
	base[6]= VV[222];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk223)();
	vs_top=sup;
	(V39->c.c_car)= vs_base[0];
	if((V40=MMcdr(V40))==Cnil){
	V38= base[3];
	goto T78;}
	V39=MMcdr(V39)=MMcons(Cnil,Cnil);
	goto T79;}
	goto T78;
T78:;
	base[3]= make_cons(VV[6],V38);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for DEFCONSTRUCTOR	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V42=base[0]->c.c_cdr;
	if(endp(V42))invalid_macro_call();
	base[2]= (V42->c.c_car);
	V42=V42->c.c_cdr;
	if(endp(V42))invalid_macro_call();
	base[3]= (V42->c.c_car);
	V42=V42->c.c_cdr;
	if(endp(V42))invalid_macro_call();
	base[4]= (V42->c.c_car);
	V42=V42->c.c_cdr;
	base[5]= V42;}
	base[6]= list(2,VV[10],list(4,VV[11],base[2],base[4],listA(3,VV[9],list(2,VV[4],base[3]),base[5])));
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	local entry for function GET-MAKE-INSTANCE-FUNCTIONS	*/

static object LI7(V44)

object V44;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V45;
	register object V46;
	V45= (V44);
	V46= CMPcar((V45));
	goto T87;
T87:;
	if(!(((V45))==Cnil)){
	goto T88;}
	{object V47 = Cnil;
	VMR7(V47)}
	goto T88;
T88:;
	{register object V48;
	object V49;
	register object V50;
	V48= (VFUN_NARGS=1,(*(LnkLI224))(CMPcar((V46))));
	V49= CMPcddr((V48));
	V50= make_cons(CMPcadr((V46)),CMPcaddr((V46)));
	base[4]= (V50);
	base[5]= (V49);
	base[6]= VV[12];
	base[7]= (VV[225]->s.s_gfdef);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk226)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T92;}
	{register object V52;
	register object V53;
	V52= (V48);
	V53= make_cons(V50,CMPcddr((V52)));
	(CMPcdr((V52)))->c.c_cdr = (V53);
	(void)(CMPcdr((V52)));}
	{register object V54;
	V54= CMPcar((V48));
	if(((V54))==Cnil){
	goto T92;}
	base[4]= (V54);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk227)(Lclptr227);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T92;}
	V55= (VFUN_NARGS=4,(*(LnkLI39))((V54),CMPcar((V50)),Cnil,CMPcdr((V50))));
	(void)((*(LnkLI61))(/* INLINE-ARGS */V55,VV[13]));}}
	goto T92;
T92:;
	V45= CMPcdr((V45));
	V46= CMPcar((V45));
	goto T87;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-INSTANCE-FUNCTION-SYMBOL	*/

static object LI8(V57)

object V57;
{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	{register object V58;
	object V59;
	V58= CMPcar((V57));
	V59= (type_of((V58))==t_symbol?Ct:Cnil);
	if(((V59))!=Cnil){
	goto T119;}
	base[2]= (V58);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T120;}
	goto T119;
T119:;
	{register object V60;
	object V61;
	object V62;
	if(!(type_of((V58))==t_symbol)){
	goto T127;}
	V60= (V58);
	goto T125;
	goto T127;
T127:;
	base[5]= (V58);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V60= vs_base[0];
	goto T125;
T125:;
	V61= CMPcadr((V57));
	V62= CMPcaddr((V57));
	if(((V59))!=Cnil){
	goto T134;}
	if(!(type_of((V60))==t_symbol)){
	goto T133;}
	V63 = (V58);
	V64= (VFUN_NARGS=2,(*(LnkLI217))((V60),Cnil));
	if(!((V63)==(/* INLINE-ARGS */V64))){
	goto T133;}
	goto T134;
T134:;
	base[5]= (V60);
	vs_top=(vs_base=base+5)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T133;}
	bds_bind(VV[14],(VV[15]->s.s_dbind));
	bds_bind(VV[16],Cnil);
	bds_bind(VV[17],Cnil);
	bds_bind(VV[18],Cnil);
	bds_bind(VV[19],VV[20]);
	bds_bind(VV[21],Cnil);
	base[12]= Cnil;
	base[13]= VV[22];
	base[14]= (V60);
	base[15]= (V61);
	base[16]= (V62);
	vs_top=(vs_base=base+12)+5;
	Lformat();
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+11)+1;
	Lintern();
	vs_top=sup;
	{object V65 = vs_base[0];
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR8(V65)}
	goto T133;
T133:;
	{object V66 = Cnil;
	VMR8(V66)}}
	goto T120;
T120:;
	{object V67 = Cnil;
	VMR8(V67)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-INSTANCE-1	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{object V68;
	object V69;
	if(vs_top-vs_base<1) too_few_arguments();
	V68=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V69=(base[1]);
	vs_top=sup;
	base[2]=VV[9]->s.s_gfdef;
	base[3]= (V68);
	{object V70;
	V70= (V69);
	 vs_top=base+4;
	 while(V70!=Cnil)
	 {vs_push((V70)->c.c_car);V70=(V70)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk9)(Lclptr9);
	return;
	}
}
/*	macro definition for DEFINE-CACHED-READER	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V71=base[0]->c.c_cdr;
	if(endp(V71))invalid_macro_call();
	base[2]= (V71->c.c_car);
	V71=V71->c.c_cdr;
	if(endp(V71))invalid_macro_call();
	base[3]= (V71->c.c_car);
	V71=V71->c.c_cdr;
	if(endp(V71))invalid_macro_call();
	base[4]= (V71->c.c_car);
	V71=V71->c.c_cdr;
	if(!endp(V71))invalid_macro_call();}
	{object V72;
	object V73;
	base[6]= Cnil;
	base[7]= VV[23];
	base[8]= base[2];
	base[9]= base[3];
	vs_top=(vs_base=base+6)+4;
	Lformat();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lintern();
	vs_top=sup;
	V72= vs_base[0];
	base[6]= Cnil;
	base[7]= VV[24];
	base[8]= base[2];
	base[9]= base[3];
	vs_top=(vs_base=base+6)+4;
	Lformat();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lintern();
	vs_top=sup;
	V73= vs_base[0];
	V74= list(2,VV[27],list(3,VV[27],VV[29],list(3,VV[27],list(2,VV[4],(V73)),VV[30])));
	V75= list(2,VV[4],base[4]);
	V76= list(4,VV[27],/* INLINE-ARGS */V75,VV[30],list(3,VV[27],VV[34],list(2,VV[4],base[3])));
	base[5]= list(4,VV[25],(V72),VV[26],list(4,VV[27],VV[28],/* INLINE-ARGS */V74,list(5,VV[27],VV[31],VV[32],list(4,VV[27],VV[33],/* INLINE-ARGS */V76,list(3,VV[27],list(2,VV[4],(V73)),VV[30])),VV[35])));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	macro definition for DEFINE-INITIALIZE-INFO	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V77=base[0]->c.c_cdr;
	if(!endp(V77))invalid_macro_call();}
	{object V78;
	object V79;
	base[3]= (VV[37]->s.s_dbind);
	{object V80;
	object V81= base[3];
	if(V81==Cnil){
	V78= Cnil;
	goto T162;}
	base[2]=V80=MMcons(Cnil,Cnil);
	goto T163;
T163:;
	base[5]= Cnil;
	base[6]= VV[36];
	base[7]= (V81->c.c_car);
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	(V80->c.c_car)= vs_base[0];
	if((V81=MMcdr(V81))==Cnil){
	V78= base[2];
	goto T162;}
	V80=MMcdr(V80)=MMcons(Cnil,Cnil);
	goto T163;}
	goto T162;
T162:;
	base[3]= (VV[37]->s.s_dbind);
	{object V83;
	object V84= base[3];
	if(V84==Cnil){
	V79= Cnil;
	goto T169;}
	base[2]=V83=MMcons(Cnil,Cnil);
	goto T170;
T170:;
	base[5]= Cnil;
	base[6]= VV[38];
	base[7]= VV[39];
	base[8]= (V84->c.c_car);
	vs_top=(vs_base=base+5)+4;
	Lformat();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	(V83->c.c_car)= vs_base[0];
	if((V84=MMcdr(V84))==Cnil){
	V79= base[2];
	goto T169;}
	V83=MMcdr(V83)=MMcons(Cnil,Cnil);
	goto T170;}
	goto T169;
T169:;
	{object V87;
	object V88= (V78);
	if(V88==Cnil){
	V86= Cnil;
	goto T177;}
	base[2]=V87=MMcons(Cnil,Cnil);
	goto T178;
T178:;
	(V87->c.c_car)= list(2,(V88->c.c_car),VV[43]);
	if((V88=MMcdr(V88))==Cnil){
	V86= base[2];
	goto T177;}
	V87=MMcdr(V87)=MMcons(Cnil,Cnil);
	goto T178;}
	goto T177;
T177:;
	V90= listA(5,VV[40],VV[39],VV[41],VV[42],V86);
	V91= list(4,VV[25],VV[44],VV[45],list(3,VV[46],VV[47],list(3,VV[48],VV[49],list(2,VV[4],(V79)))));
	base[3]= (VV[37]->s.s_dbind);
	{object V93;
	object V94= base[3];
	object V95= (V79);
	if(V94==Cnil||V95==Cnil){
	V92= Cnil;
	goto T180;}
	base[2]=V93=MMcons(Cnil,Cnil);
	goto T181;
T181:;
	V98= list(3,VV[55],VV[56],list(2,(V95->c.c_car),VV[30]));
	(V93->c.c_car)= list(3,VV[54],/* INLINE-ARGS */V98,list(3,VV[57],list(2,VV[4],(V94->c.c_car)),VV[58]));
	if((V94=MMcdr(V94))==Cnil||(V95=MMcdr(V95))==Cnil){
	V92= base[2];
	goto T180;}
	V93=MMcdr(V93)=MMcons(Cnil,Cnil);
	goto T181;}
	goto T180;
T180:;
	V99= list(4,VV[11],VV[50],VV[51],listA(3,VV[52],VV[53],append(V92,VV[59])));
	base[3]= (VV[37]->s.s_dbind);
	{object V101;
	object V102= base[3];
	if(V102==Cnil){
	V100= Cnil;
	goto T183;}
	base[2]=V101=MMcons(Cnil,Cnil);
	goto T184;
T184:;
	(V101->c.c_car)= list(4,VV[60],VV[39],(V102->c.c_car),VV[61]);
	if((V102=MMcdr(V102))==Cnil){
	V100= base[2];
	goto T183;}
	V101=MMcdr(V101)=MMcons(Cnil,Cnil);
	goto T184;}
	goto T183;
T183:;
	base[2]= listA(5,VV[6],/* INLINE-ARGS */V90,/* INLINE-ARGS */V91,/* INLINE-ARGS */V99,V100);
	vs_top=(vs_base=base+2)+1;
	return;}
}
/*	local entry for function MAKE-INITIALIZE-INFO	*/

static object LI12(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V104;
	object V105;
	object V106;
	object V107;
	object V108;
	object V109;
	object V110;
	object V111;
	object V112;
	object V113;
	object V114;
	object V115;
	object V116;
	object V117;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI12key,first,ap);
	V104=(Vcs[0]);
	V105=(Vcs[1]);
	V106=(Vcs[2]);
	V107=(Vcs[3]);
	V108=(Vcs[4]);
	V109=(Vcs[5]);
	V110=(Vcs[6]);
	V111=(Vcs[7]);
	V112=(Vcs[8]);
	V113=(Vcs[9]);
	V114=(Vcs[10]);
	V115=(Vcs[11]);
	V116=(Vcs[12]);
	V117=(Vcs[13]);
	base[0]= VV[39];
	base[1]= (V104);
	base[2]= (V105);
	base[3]= (V106);
	base[4]= (V107);
	base[5]= (V108);
	base[6]= (V109);
	base[7]= (V110);
	base[8]= (V111);
	base[9]= (V112);
	base[10]= (V113);
	base[11]= (V114);
	base[12]= (V115);
	base[13]= (V116);
	base[14]= (V117);
	vs_top=(vs_base=base+0)+15;
	siLmake_structure();
	vs_top=sup;
	{object V118 = vs_base[0];
	VMR12(V118)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	macro definition for RESET-INITIALIZE-INFO-INTERNAL	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V119=base[0]->c.c_cdr;
	if(endp(V119))invalid_macro_call();
	base[2]= (V119->c.c_car);
	V119=V119->c.c_cdr;
	if(!endp(V119))invalid_macro_call();}
	{object V121;
	object V122= VV[64];
	if(V122==Cnil){
	V120= Cnil;
	goto T201;}
	base[3]=V121=MMcons(Cnil,Cnil);
	goto T202;
T202:;
	(V121->c.c_car)= list(3,VV[62],list(2,(V122->c.c_car),base[2]),VV[63]);
	if((V122=MMcdr(V122))==Cnil){
	V120= base[3];
	goto T201;}
	V121=MMcdr(V121)=MMcons(Cnil,Cnil);
	goto T202;}
	goto T201;
T201:;
	base[3]= make_cons(VV[6],V120);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function INITIALIZE-INFO-BOUND-SLOTS	*/

static object LI14(V125)

register object V125;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{register object V126;
	V126= Cnil;
	if((VV[43])==(STREF(object,(V125),8))){
	goto T204;}
	V126= make_cons(VV[65],(V126));
	goto T204;
T204:;
	if((VV[43])==(STREF(object,(V125),12))){
	goto T208;}
	V126= make_cons(VV[66],(V126));
	goto T208;
T208:;
	if((VV[43])==(STREF(object,(V125),16))){
	goto T212;}
	V126= make_cons(VV[67],(V126));
	goto T212;
T212:;
	if((VV[43])==(STREF(object,(V125),20))){
	goto T216;}
	V126= make_cons(VV[68],(V126));
	goto T216;
T216:;
	if((VV[43])==(STREF(object,(V125),24))){
	goto T220;}
	V126= make_cons(VV[69],(V126));
	goto T220;
T220:;
	if((VV[43])==(STREF(object,(V125),28))){
	goto T224;}
	V126= make_cons(VV[70],(V126));
	goto T224;
T224:;
	if((VV[43])==(STREF(object,(V125),32))){
	goto T228;}
	V126= make_cons(VV[71],(V126));
	goto T228;
T228:;
	if((VV[43])==(STREF(object,(V125),36))){
	goto T232;}
	V126= make_cons(VV[72],(V126));
	goto T232;
T232:;
	if((VV[43])==(STREF(object,(V125),40))){
	goto T236;}
	V126= make_cons(VV[73],(V126));
	goto T236;
T236:;
	if((VV[43])==(STREF(object,(V125),44))){
	goto T240;}
	V126= make_cons(VV[74],(V126));
	goto T240;
T240:;
	if((VV[43])==(STREF(object,(V125),48))){
	goto T244;}
	V126= make_cons(VV[13],(V126));
	goto T244;
T244:;
	if((VV[43])==(STREF(object,(V125),52))){
	goto T248;}
	V126= make_cons(VV[75],(V126));
	goto T248;
T248:;
	{object V139 = (V126);
	VMR14(V139)}}
	return Cnil;
}
/*	macro definition for INITIALIZE-INFO-VALID-P	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V140=base[0]->c.c_cdr;
	if(endp(V140))invalid_macro_call();
	base[2]= (V140->c.c_car);
	V140=V140->c.c_cdr;
	if(!endp(V140))invalid_macro_call();}
	V141= list(2,VV[76],list(2,VV[77],base[2]));
	V142= make_cons(/* INLINE-ARGS */V141,Cnil);
	V143= list(3,VV[61],base[2],list(2,VV[4],VV[65]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V142,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V143,list(2,VV[77],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-RI-VALID-P	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V144=base[0]->c.c_cdr;
	if(endp(V144))invalid_macro_call();
	base[2]= (V144->c.c_car);
	V144=V144->c.c_cdr;
	if(!endp(V144))invalid_macro_call();}
	V145= list(2,VV[76],list(2,VV[80],base[2]));
	V146= make_cons(/* INLINE-ARGS */V145,Cnil);
	V147= list(3,VV[61],base[2],list(2,VV[4],VV[66]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V146,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V147,list(2,VV[80],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-INITARGS-FORM-LIST	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V148=base[0]->c.c_cdr;
	if(endp(V148))invalid_macro_call();
	base[2]= (V148->c.c_car);
	V148=V148->c.c_cdr;
	if(!endp(V148))invalid_macro_call();}
	V149= list(2,VV[76],list(2,VV[81],base[2]));
	V150= make_cons(/* INLINE-ARGS */V149,Cnil);
	V151= list(3,VV[61],base[2],list(2,VV[4],VV[67]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V150,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V151,list(2,VV[81],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-COMBINED-INITARGS-FORM-LIST	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V152=base[0]->c.c_cdr;
	if(endp(V152))invalid_macro_call();
	base[2]= (V152->c.c_car);
	V152=V152->c.c_cdr;
	if(!endp(V152))invalid_macro_call();}
	V153= list(2,VV[76],list(2,VV[82],base[2]));
	V154= make_cons(/* INLINE-ARGS */V153,Cnil);
	V155= list(3,VV[61],base[2],list(2,VV[4],VV[68]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V154,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V155,list(2,VV[82],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-NEW-KEYS	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V156=base[0]->c.c_cdr;
	if(endp(V156))invalid_macro_call();
	base[2]= (V156->c.c_car);
	V156=V156->c.c_cdr;
	if(!endp(V156))invalid_macro_call();}
	V157= list(2,VV[76],list(2,VV[83],base[2]));
	V158= make_cons(/* INLINE-ARGS */V157,Cnil);
	V159= list(3,VV[61],base[2],list(2,VV[4],VV[69]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V158,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V159,list(2,VV[83],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-DEFAULT-INITARGS-FUNCTION	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V160=base[0]->c.c_cdr;
	if(endp(V160))invalid_macro_call();
	base[2]= (V160->c.c_car);
	V160=V160->c.c_cdr;
	if(!endp(V160))invalid_macro_call();}
	V161= list(2,VV[76],list(2,VV[84],base[2]));
	V162= make_cons(/* INLINE-ARGS */V161,Cnil);
	V163= list(3,VV[61],base[2],list(2,VV[4],VV[70]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V162,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V163,list(2,VV[84],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-SHARED-INITIALIZE-T-FUNCTION	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V164=base[0]->c.c_cdr;
	if(endp(V164))invalid_macro_call();
	base[2]= (V164->c.c_car);
	V164=V164->c.c_cdr;
	if(!endp(V164))invalid_macro_call();}
	V165= list(2,VV[76],list(2,VV[85],base[2]));
	V166= make_cons(/* INLINE-ARGS */V165,Cnil);
	V167= list(3,VV[61],base[2],list(2,VV[4],VV[71]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V166,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V167,list(2,VV[85],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-SHARED-INITIALIZE-NIL-FUNCTION	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V168=base[0]->c.c_cdr;
	if(endp(V168))invalid_macro_call();
	base[2]= (V168->c.c_car);
	V168=V168->c.c_cdr;
	if(!endp(V168))invalid_macro_call();}
	V169= list(2,VV[76],list(2,VV[86],base[2]));
	V170= make_cons(/* INLINE-ARGS */V169,Cnil);
	V171= list(3,VV[61],base[2],list(2,VV[4],VV[72]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V170,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V171,list(2,VV[86],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-CONSTANTS	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V172=base[0]->c.c_cdr;
	if(endp(V172))invalid_macro_call();
	base[2]= (V172->c.c_car);
	V172=V172->c.c_cdr;
	if(!endp(V172))invalid_macro_call();}
	V173= list(2,VV[76],list(2,VV[87],base[2]));
	V174= make_cons(/* INLINE-ARGS */V173,Cnil);
	V175= list(3,VV[61],base[2],list(2,VV[4],VV[73]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V174,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V175,list(2,VV[87],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-COMBINED-INITIALIZE-FUNCTION	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V176=base[0]->c.c_cdr;
	if(endp(V176))invalid_macro_call();
	base[2]= (V176->c.c_car);
	V176=V176->c.c_cdr;
	if(!endp(V176))invalid_macro_call();}
	V177= list(2,VV[76],list(2,VV[88],base[2]));
	V178= make_cons(/* INLINE-ARGS */V177,Cnil);
	V179= list(3,VV[61],base[2],list(2,VV[4],VV[74]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V178,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V179,list(2,VV[88],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-MAKE-INSTANCE-FUNCTION	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V180=base[0]->c.c_cdr;
	if(endp(V180))invalid_macro_call();
	base[2]= (V180->c.c_car);
	V180=V180->c.c_cdr;
	if(!endp(V180))invalid_macro_call();}
	V181= list(2,VV[76],list(2,VV[89],base[2]));
	V182= make_cons(/* INLINE-ARGS */V181,Cnil);
	V183= list(3,VV[61],base[2],list(2,VV[4],VV[13]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V182,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V183,list(2,VV[89],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for INITIALIZE-INFO-MAKE-INSTANCE-FUNCTION-SYMBOL	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V184=base[0]->c.c_cdr;
	if(endp(V184))invalid_macro_call();
	base[2]= (V184->c.c_car);
	V184=V184->c.c_cdr;
	if(!endp(V184))invalid_macro_call();}
	V185= list(2,VV[76],list(2,VV[90],base[2]));
	V186= make_cons(/* INLINE-ARGS */V185,Cnil);
	V187= list(3,VV[61],base[2],list(2,VV[4],VV[75]));
	base[3]= list(3,VV[52],/* INLINE-ARGS */V186,list(4,VV[78],VV[79],list(3,VV[6],/* INLINE-ARGS */V187,list(2,VV[90],base[2])),VV[76]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function RESET-INITIALIZE-INFO	*/

static object LI27(V189)

register object V189;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	V190 = (V189);
	base[0]= CMPcar(STREF(object,(V189),0));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	V191= vs_base[0];
	V192= Ct;
	STSET(object,V190,4, V191);
	(void)(V191);
	{object V193;
	if(((VV[91]->s.s_dbind))==Cnil){
	goto T257;}
	V193= (*(LnkLI50))((V189));
	goto T255;
	goto T257;
T257:;
	V193= VV[92];
	goto T255;
T255:;
	V194 = (V189);
	V195= Ct;
	STSET(object,V194,8, VV[43]);
	(void)(VV[43]);
	V196 = (V189);
	V197= Ct;
	STSET(object,V196,12, VV[43]);
	(void)(VV[43]);
	V198 = (V189);
	V199= Ct;
	STSET(object,V198,16, VV[43]);
	(void)(VV[43]);
	V200 = (V189);
	V201= Ct;
	STSET(object,V200,20, VV[43]);
	(void)(VV[43]);
	V202 = (V189);
	V203= Ct;
	STSET(object,V202,24, VV[43]);
	(void)(VV[43]);
	V204 = (V189);
	V205= Ct;
	STSET(object,V204,28, VV[43]);
	(void)(VV[43]);
	V206 = (V189);
	V207= Ct;
	STSET(object,V206,32, VV[43]);
	(void)(VV[43]);
	V208 = (V189);
	V209= Ct;
	STSET(object,V208,36, VV[43]);
	(void)(VV[43]);
	V210 = (V189);
	V211= Ct;
	STSET(object,V210,40, VV[43]);
	(void)(VV[43]);
	V212 = (V189);
	V213= Ct;
	STSET(object,V212,44, VV[43]);
	(void)(VV[43]);
	V214 = (V189);
	V215= Ct;
	STSET(object,V214,48, VV[43]);
	(void)(VV[43]);
	V216 = (V189);
	V217= Ct;
	STSET(object,V216,52, VV[43]);
	(void)(VV[43]);
	{register object V218;
	register object V219;
	V218= (V193);
	V219= CMPcar((V218));
	goto T275;
T275:;
	if(!(((V218))==Cnil)){
	goto T276;}
	goto T271;
	goto T276;
T276:;
	(void)((*(LnkLI61))((V189),(V219)));
	V218= CMPcdr((V218));
	V219= CMPcar((V218));
	goto T275;}
	goto T271;
T271:;
	{object V220 = (V189);
	VMR27(V220)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RESET-CLASS-INITIALIZE-INFO	*/

static object LI28(V222)

object V222;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	base[0]= (V222);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk245)(Lclptr245);
	vs_top=sup;
	V223= vs_base[0];
	{object V224 = (*(LnkLI244))(V223);
	VMR28(V224)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RESET-CLASS-INITIALIZE-INFO-1	*/

static object LI29(V226)

register object V226;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	if(!(type_of((V226))==t_cons)){
	goto T289;}
	if((CMPcar((V226)))==Cnil){
	goto T291;}
	(void)((*(LnkLI246))(CMPcar((V226))));
	goto T291;
T291:;
	{object V227;
	V227= CMPcdr((V226));
	{register object V228;
	register object V229;
	V228= (V227);
	V229= CMPcar((V228));
	goto T298;
T298:;
	if(!(((V228))==Cnil)){
	goto T299;}
	{object V230 = Cnil;
	VMR29(V230)}
	goto T299;
T299:;
	(void)((*(LnkLI244))(CMPcdr((V229))));
	V228= CMPcdr((V228));
	V229= CMPcar((V228));
	goto T298;}}
	goto T289;
T289:;
	{object V231 = Cnil;
	VMR29(V231)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INITIALIZE-INFO	*/

static object LI30(object V233,object V232,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB30 VMS30 VMV30
	{object V234;
	object V235;
	object V236;
	object V237;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V234= V233;
	V235= V232;
	narg = narg - 2;
	if (narg <= 0) goto T309;
	else {
	V236= first;}
	if (--narg <= 0) goto T310;
	else {
	V237= va_arg(ap,object);}
	--narg; goto T311;
	goto T309;
T309:;
	V236= Ct;
	goto T310;
T310:;
	V237= Cnil;
	goto T311;
T311:;
	{object V238;
	V238= Cnil;
	if(!(((VV[93]->s.s_dbind))==((V234)))){
	goto T316;}
	if(!(((VV[94]->s.s_dbind))==((V235)))){
	goto T316;}
	V238= (VV[95]->s.s_dbind);
	goto T314;
	goto T316;
T316:;
	{register object V239;
	register object V240;{object V241;
	base[0]= (V234);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk245)(Lclptr245);
	vs_top=sup;
	V241= vs_base[0];
	if(V241==Cnil)goto T322;
	V240= V241;
	goto T321;
	goto T322;
T322:;}
	base[0]= make_cons(Cnil,Cnil);
	base[1]= V234;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk247)(Lclptr247);
	vs_top=sup;
	V240= vs_base[0];
	goto T321;
T321:;
	V239= (V235);
	goto T329;
T329:;
	if(((V239))!=Cnil){
	goto T331;}
	goto T327;
	goto T331;
T331:;
	{register object V243;
	register object V244;
	{object V245;
	V245= CMPcar((V239));
	V239= CMPcdr((V239));
	V243= (V245);}
	V244= (V240);
	if(((V236))==Cnil){
	goto T338;}
	if(!(((V243))==(VV[2]))){
	goto T342;}
	{object V246;
	V246= CMPcar((V239));
	V239= CMPcdr((V239));
	V237= (V246);}
	goto T338;
	goto T342;
T342:;
	{object V247;
	V247= CMPcar((V239));
	V239= CMPcdr((V239));}
	goto T338;
T338:;
	goto T352;
T352:;
	{register object V248;
	V248= CMPcdr((V244));
	if(((V248))!=Cnil){
	goto T355;}
	V240= make_cons(Cnil,Cnil);
	{object V250;
	V251= make_cons((V243),(V240));
	V250= make_cons(/* INLINE-ARGS */V251,Cnil);
	(V244)->c.c_cdr = (V250);}
	goto T330;
	goto T355;
T355:;
	if(!(eql((V243),CMPcaar((V248))))){
	goto T363;}
	V240= CMPcdar((V248));
	goto T330;
	goto T363;
T363:;
	V244= (V248);}
	goto T352;}
	goto T330;
T330:;
	goto T329;
	goto T327;
T327:;{object V252;
	V252= CMPcar((V240));
	if(V252==Cnil)goto T372;
	V238= V252;
	goto T371;
	goto T372;
T372:;}
	{object V254;
	V254= (VFUN_NARGS=0,(*(LnkLI248))());
	(V240)->c.c_car = (V254);
	V238= (V254);}
	goto T371;
T371:;}
	goto T314;
T314:;
	{object V255;
	V255= STREF(object,(V238),4);
	V256 = (V255);
	base[0]= (V234);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	V257= vs_base[0];
	if((V256)==(V257)){
	goto T376;}
	if(((V255))!=Cnil){
	goto T382;}
	{register object V258;
	object V259;
	object V260;
	V258= (V235);
	V259= make_cons(Cnil,Cnil);
	V260= (V259);
	goto T390;
T390:;
	if(((V258))!=Cnil){
	goto T392;}
	goto T388;
	goto T392;
T392:;
	{object V261;
	{object V262;
	V262= CMPcar((V258));
	V258= CMPcdr((V258));
	V261= (V262);}
	{object V264;
	V264= make_cons((V261),Cnil);
	(V260)->c.c_cdr = (V264);}}
	V260= CMPcdr((V260));
	if(((V236))==Cnil){
	goto T391;}
	{object V265;
	V265= CMPcar((V258));
	V258= CMPcdr((V258));}
	goto T391;
T391:;
	goto T390;
	goto T388;
T388:;
	V266 = (V238);
	V267= list(3,(V234),CMPcdr((V259)),(V237));
	V268= Ct;
	STSET(object,V266,0, /* INLINE-ARGS */V267);
	(void)(/* INLINE-ARGS */V267);}
	goto T382;
T382:;
	(void)((*(LnkLI246))((V238)));}
	goto T376;
T376:;
	(VV[93]->s.s_dbind)= (V234);
	(VV[94]->s.s_dbind)= (V235);
	(VV[95]->s.s_dbind)= (V238);
	{object V269 = (V238);
	VMR30(V269)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function UPDATE-INITIALIZE-INFO-INTERNAL	*/

static object LI31(V272,V273)

register object V272;object V273;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{register object V274;
	V274= STREF(object,(V272),0);
	base[1]= CMPcar((V274));
	base[2]= CMPcadr((V274));
	base[3]= CMPcaddr((V274));
	{object V275= (V273);
	if((V275!= VV[67])
	&& (V275!= VV[69]))goto T421;
	{object V276;
	object V277;
	base[4]= base[1];
	base[5]= base[2];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk249)();
	if(vs_base>=vs_top){vs_top=sup;goto T425;}
	V276= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T426;}
	V277= vs_base[0];
	vs_top=sup;
	goto T427;
	goto T425;
T425:;
	V276= Cnil;
	goto T426;
T426:;
	V277= Cnil;
	goto T427;
T427:;
	V278 = (V272);
	V279 = (V276);
	V280= Ct;
	STSET(object,V278,16, V279);
	(void)(V279);
	V281 = (V272);
	V282 = (V277);
	V283= Ct;
	STSET(object,V281,24, V282);
	(void)(V282);
	goto T416;}
	goto T421;
T421:;
	if((V275!= VV[68]))goto T429;
	{object V284;
	object V285;
	base[4]= base[1];
	base[5]= base[2];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk249)();
	if(vs_base>=vs_top){vs_top=sup;goto T434;}
	V284= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T435;}
	V285= vs_base[0];
	vs_top=sup;
	goto T436;
	goto T434;
T434:;
	V284= Cnil;
	goto T435;
T435:;
	V285= Cnil;
	goto T436;
T436:;
	V286 = (V272);
	V287 = (V284);
	V288= Ct;
	STSET(object,V286,20, V287);
	(void)(V287);
	V289 = (V272);
	V290 = (V285);
	V291= Ct;
	STSET(object,V289,24, V290);
	(void)(V290);
	goto T416;}
	goto T429;
T429:;
	if((V275!= VV[70]))goto T438;
	{object V292;
	{object V293;
	V293= STREF(object,(V272),16);
	if(!(((V293))==(VV[43]))){
	goto T442;}
	(void)((*(LnkLI61))((V272),VV[67]));
	V292= STREF(object,(V272),16);
	goto T439;
	goto T442;
T442:;
	V292= (V293);}
	goto T439;
T439:;
	V294 = (V272);
	base[4]= VV[70];
	base[5]= (V272);
	base[6]= base[1];
	base[7]= (V292);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk250)();
	vs_top=sup;
	V295= vs_base[0];
	V296= Ct;
	STSET(object,V294,28, V295);
	(void)(V295);
	goto T416;}
	goto T438;
T438:;
	if((V275!= VV[65])
	&& (V275!= VV[66]))goto T450;
	{object V297;
	base[4]= base[1];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk251)(Lclptr251);
	vs_top=sup;
	V297= vs_base[0];
	V298 = (V272);
	V300= listA(3,VV[96],base[1],Cnil);
	V301= listA(3,VV[97],(V297),Cnil);
	base[4]= list(3,/* INLINE-ARGS */V300,/* INLINE-ARGS */V301,listA(4,VV[98],(V297),Ct,Cnil));
	vs_top=(vs_base=base+4)+1;
	L32(base);
	vs_top=sup;
	V299= vs_base[0];
	V302= Ct;
	STSET(object,V298,8, V299);
	(void)(V299);
	V303 = (V272);
	V305= listA(3,VV[99],(V297),Cnil);
	base[4]= list(2,/* INLINE-ARGS */V305,listA(4,VV[98],(V297),Cnil,Cnil));
	vs_top=(vs_base=base+4)+1;
	L32(base);
	vs_top=sup;
	V304= vs_base[0];
	V306= Ct;
	STSET(object,V303,12, V304);
	(void)(V304);
	goto T416;}
	goto T450;
T450:;
	if((V275!= VV[71]))goto T458;
	{object V307;
	object V308;
	base[4]= base[1];
	base[5]= base[2];
	base[6]= Ct;
	base[7]= Cnil;
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk252)();
	if(vs_base>=vs_top){vs_top=sup;goto T464;}
	V307= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T465;}
	V308= vs_base[0];
	vs_top=sup;
	goto T466;
	goto T464;
T464:;
	V307= Cnil;
	goto T465;
T465:;
	V308= Cnil;
	goto T466;
T466:;
	V309 = (V272);
	base[4]= VV[71];
	base[5]= (V272);
	base[6]= base[1];
	base[7]= (V307);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk250)();
	vs_top=sup;
	V310= vs_base[0];
	V311= Ct;
	STSET(object,V309,32, V310);
	(void)(V310);
	goto T416;}
	goto T458;
T458:;
	if((V275!= VV[72]))goto T472;
	{object V312;
	object V313;
	base[4]= base[1];
	base[5]= base[2];
	base[6]= Cnil;
	base[7]= Cnil;
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk252)();
	if(vs_base>=vs_top){vs_top=sup;goto T478;}
	V312= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T479;}
	V313= vs_base[0];
	vs_top=sup;
	goto T480;
	goto T478;
T478:;
	V312= Cnil;
	goto T479;
T479:;
	V313= Cnil;
	goto T480;
T480:;
	V314 = (V272);
	base[4]= VV[72];
	base[5]= (V272);
	base[6]= base[1];
	base[7]= (V312);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk250)();
	vs_top=sup;
	V315= vs_base[0];
	V316= Ct;
	STSET(object,V314,36, V315);
	(void)(V315);
	goto T416;}
	goto T472;
T472:;
	if((V275!= VV[73])
	&& (V275!= VV[74]))goto T486;
	{object V317;
	object V318;
	{object V319;
	V319= STREF(object,(V272),20);
	if(!(((V319))==(VV[43]))){
	goto T490;}
	(void)((*(LnkLI61))((V272),VV[68]));
	V317= STREF(object,(V272),20);
	goto T487;
	goto T490;
T490:;
	V317= (V319);}
	goto T487;
T487:;
	{object V320;
	V320= STREF(object,(V272),24);
	if(!(((V320))==(VV[43]))){
	goto T496;}
	(void)((*(LnkLI61))((V272),VV[69]));
	V318= STREF(object,(V272),24);
	goto T493;
	goto T496;
T496:;
	V318= (V320);}
	goto T493;
T493:;
	{object V321;
	object V322;
	base[4]= base[1];
	base[5]= (V318);
	base[6]= Ct;
	base[7]= Ct;
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk252)();
	if(vs_base>=vs_top){vs_top=sup;goto T504;}
	V321= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T505;}
	V322= vs_base[0];
	vs_top=sup;
	goto T506;
	goto T504;
T504:;
	V321= Cnil;
	goto T505;
T505:;
	V322= Cnil;
	goto T506;
T506:;
	V323 = (V272);
	V324 = (V322);
	V325= Ct;
	STSET(object,V323,40, V324);
	(void)(V324);
	V326 = (V272);
	base[4]= VV[74];
	base[5]= (V272);
	base[6]= base[1];
	base[7]= append((V317),(V321));
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk250)();
	vs_top=sup;
	V327= vs_base[0];
	V328= Ct;
	STSET(object,V326,44, V327);
	(void)(V327);
	goto T416;}}
	goto T486;
T486:;
	if((V275!= VV[75]))goto T513;
	V329 = (V272);
	V330= (*(LnkLI75))((V274));
	V331= Ct;
	STSET(object,V329,52, /* INLINE-ARGS */V330);
	(void)(/* INLINE-ARGS */V330);
	goto T416;
	goto T513;
T513:;
	if((V275!= VV[13]))goto T514;
	{object V332;
	object V333;
	V332= (*(LnkLI253))((V274));
	{object V334;
	V334= STREF(object,(V272),52);
	if(!(((V334))==(VV[43]))){
	goto T519;}
	(void)((*(LnkLI61))((V272),VV[75]));
	V333= STREF(object,(V272),52);
	goto T516;
	goto T519;
T519:;
	V333= (V334);}
	goto T516;
T516:;
	V335 = (V272);
	V336 = (V332);
	V337= Ct;
	STSET(object,V335,48, V336);
	(void)(V336);
	if(((V333))==Cnil){
	goto T416;}
	if((V332)!=Cnil){
	V339= (V332);
	goto T525;}
	V339= (VV[255]->s.s_gfdef);
	goto T525;
T525:;
	V340 = V333;
	(void)((*(LnkLI254))(V339,V340));
	goto T416;}
	goto T514;
T514:;
	FEerror("The ECASE key value ~s is illegal.",1,V275);
	goto T416;}}
	goto T416;
T416:;
	{object V341 = (V272);
	VMR31(V341)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-MAKE-INSTANCE-FUNCTION	*/

static object LI33(V343)

object V343;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	{register object V344;
	object V345;
	V344= CMPcar((V343));
	V345= CMPcadr((V343));
	if(((VV[101]->s.s_dbind))==(VV[102])){
	goto T528;}
	{object V346 = Cnil;
	VMR32(V346)}
	goto T528;
T528:;
	if(!(type_of((V344))==t_symbol)){
	goto T531;}
	V344= (VFUN_NARGS=1,(*(LnkLI217))((V344)));
	goto T531;
T531:;
	base[2]= (V344);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T535;}
	base[2]= (V344);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk256)(Lclptr256);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T535;}
	base[2]= (V344);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	goto T535;
T535:;
	{register object V347;
	object V348;
	register object V349;
	object V350;
	object V351;
	object V352;
	object V353;
	register object V354;
	object V355;
	object V356;
	{object V357;
	object V358= (V345);
	if(V358==Cnil){
	V347= Cnil;
	goto T543;}
	base[13]=V357=MMcons(Cnil,Cnil);
	goto T544;
T544:;
	(V357->c.c_cdr)= list(2,(V358->c.c_car),Cnil);
	while(MMcdr(V357)!=Cnil)V357=MMcdr(V357);
	if((V358=MMcdr(V358))==Cnil){
	base[13]=base[13]->c.c_cdr;
	V347= base[13];
	goto T543;}
	goto T544;}
	goto T543;
T543:;
	V348= make_cons((V344),(V347));
	base[4]= (*(LnkLI258))(VV[9]);
	base[4]=MMcons(base[4],Cnil);
	base[13]= (base[4]->c.c_car);
	base[14]= (V348);
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V349= vs_base[0];
	V350= (*(LnkLI260))((V349),VV[103]);
	V351= list(2,(V344),(V347));
	V352= (*(LnkLI258))(VV[104]);
	base[13]= (V352);
	base[14]= (V351);
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V353= vs_base[0];
	base[13]= (V344);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T558;}
	V354= Cnil;
	goto T557;
	goto T558;
T558:;
	base[13]= (V344);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk251)(Lclptr251);
	vs_top=sup;
	V354= vs_base[0];
	goto T557;
T557:;
	if(((V354))==Cnil){
	goto T564;}
	base[13]= (*(LnkLI258))(VV[97]);
	base[14]= make_cons((V354),(V347));
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V355= vs_base[0];
	goto T562;
	goto T564;
T564:;
	V355= Cnil;
	goto T562;
T562:;
	if(((V354))==Cnil){
	goto T570;}
	base[13]= (*(LnkLI258))(VV[98]);
	base[14]= listA(3,(V354),Ct,(V347));
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V356= vs_base[0];
	goto T568;
	goto T570;
T570:;
	V356= Cnil;
	goto T568;
T568:;
	if(((V349))!=Cnil){
	goto T574;}
	{object V360 = 
	make_cclosure_new(LC66,Cnil,base[4],Cdata);
	VMR32(V360)}
	goto T574;
T574:;
	if((CMPcdr((V349)))!=Cnil){
	goto T578;}
	if(!((CMPcar((V349)))==((V350)))){
	goto T578;}
	if((CMPcdr((V353)))!=Cnil){
	goto T578;}
	base[13]= CMPcar((V353));
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk261)(Lclptr261);
	vs_top=sup;
	V361= vs_base[0];
	if(!((CMPcar(V361))==((VV[105]->s.s_dbind)))){
	goto T578;}
	base[13]=make_cclosure_new(LC34,Cnil,base[4],Cdata);
	base[13]=MMcons(base[13],base[4]);
	base[14]= (base[13]->c.c_car);
	base[15]= (V355);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk262)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T590;}
	goto T589;
	goto T590;
T590:;
	base[14]= (base[13]->c.c_car);
	base[15]= (V356);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk262)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T577;}
	goto T589;
T589:;
	goto T578;
T578:;
	{object V362 = Cnil;
	VMR32(V362)}
	goto T577;
T577:;
	V363 = (V344);
	V364 = (V343);
	base[13]= (V344);
	base[14]= (V347);
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;
	V365= vs_base[0];
	V366 = (V355);
	V367 = (V356);
	{object V368 = (*(LnkLI263))(V363,V364,V365,V366,V367);
	VMR32(V368)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-MAKE-INSTANCE-FUNCTION-INTERNAL	*/

static object LI35(V374,V375,V376,V377,V378)

register object V374;register object V375;object V376;register object V377;register object V378;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{object V379;
	object V380;
	object V381;
	V379= CMPcadr((V375));
	V380= CMPcaddr((V375));
	base[3]= (*(LnkLI258))(VV[96]);
	base[4]= make_cons((V374),(V376));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V381= vs_base[0];
	if(((V380))!=Cnil){
	goto T604;}
	V382 = (V374);
	V383 = (V376);
	base[3]= (V381);
	base[4]= (V377);
	base[5]= (V378);
	vs_top=(vs_base=base+3)+3;
	Lappend();
	vs_top=sup;
	V384= vs_base[0];
	if(((VFUN_NARGS=5,(*(LnkLI264))(V382,V383,V384,Ct,Cnil)))!=Cnil){
	goto T604;}
	{object V385 = Cnil;
	VMR33(V385)}
	goto T604;
T604:;
	if((CMPcdr((V381)))!=Cnil){
	goto T613;}
	base[3]= (VV[265]->s.s_gfdef);
	base[4]= (V377);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk266)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T613;}
	base[3]= (VV[265]->s.s_gfdef);
	base[4]= (V378);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk266)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T614;}
	goto T613;
T613:;
	{object V386 = (*(LnkLI267))((V375),(V374),(V379),(V377),(V378));
	VMR33(V386)}
	goto T614;
T614:;
	{object V387 = (*(LnkLI268))((V375),(V374),(V379),(V377),(V378));
	VMR33(V387)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPLICATED-INSTANCE-CREATION-METHOD	*/

static object LI36(V389)

object V389;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	{object V390;
	base[0]= (V389);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk269)(Lclptr269);
	vs_top=sup;
	V390= vs_base[0];
	if(((V390))==Cnil){
	goto T627;}
	if((CMPcdr((V390)))==Cnil){
	goto T630;}
	V391= Cnil;
	goto T629;
	goto T630;
T630:;
	V391= ((CMPcar((V390)))==(VV[107])?Ct:Cnil);
	goto T629;
T629:;
	{object V392 = ((V391)==Cnil?Ct:Cnil);
	VMR34(V392)}
	goto T627;
T627:;
	{object V393;
	base[0]= (V389);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk261)(Lclptr261);
	vs_top=sup;
	V394= vs_base[0];
	V393= CMPcar(V394);
	base[0]= (V393);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V395= vs_base[0];
	if(!((V395)==Cnil)){
	goto T635;}
	{object V396 = Ct;
	VMR34(V396)}
	goto T635;
T635:;
	base[0]= (V393);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V397= vs_base[0];
	{object V398 = ((((VV[108])==(V397)?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR34(V398)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIND-STANDARD-II-METHOD	*/

static object LI37(V401,V402)

object V401;register object V402;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	{register object V403;
	register object V404;
	V403= (V401);
	V404= CMPcar((V403));
	goto T644;
T644:;
	if(!(((V403))==Cnil)){
	goto T645;}
	{object V405 = Cnil;
	VMR35(V405)}
	goto T645;
T645:;
	base[1]= (V404);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk269)(Lclptr269);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T649;}
	{register object V406;
	base[1]= (V404);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk261)(Lclptr261);
	vs_top=sup;
	V407= vs_base[0];
	V406= CMPcar(V407);
	base[1]= (V406);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T649;}
	if(!(type_of((V402))==t_cons||((V402))==Cnil)){
	goto T662;}
	base[1]= (V406);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V409= vs_base[0];
	V410 = (V402);
	{register object x= V409,V408= V410;
	while(V408!=Cnil)
	if(eql(x,V408->c.c_car)){
	goto T660;
	}else V408=V408->c.c_cdr;
	goto T649;}
	goto T662;
T662:;
	base[1]= (V406);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V411= vs_base[0];
	V412 = (V402);
	if(!((V411)==(V412))){
	goto T649;}
	goto T660;
T660:;
	{object V413 = (V404);
	VMR35(V413)}}
	goto T649;
T649:;
	V403= CMPcdr((V403));
	V404= CMPcar((V403));
	goto T644;}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for CALL-INITIALIZE-FUNCTION	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V414=base[0]->c.c_cdr;
	if(endp(V414))invalid_macro_call();
	base[2]= (V414->c.c_car);
	V414=V414->c.c_cdr;
	if(endp(V414))invalid_macro_call();
	base[3]= (V414->c.c_car);
	V414=V414->c.c_cdr;
	if(endp(V414))invalid_macro_call();
	base[4]= (V414->c.c_car);
	V414=V414->c.c_cdr;
	if(!endp(V414))invalid_macro_call();}
	V415= list(2,VV[109],base[2]);
	V416= make_cons(/* INLINE-ARGS */V415,Cnil);
	V417= list(5,VV[111],VV[112],VV[113],base[3],base[4]);
	base[5]= list(3,VV[52],/* INLINE-ARGS */V416,list(4,VV[78],VV[110],/* INLINE-ARGS */V417,list(4,VV[114],VV[115],base[3],base[4])));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for COPY-SLOTS	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V418=base[0]->c.c_cdr;
	if(endp(V418))invalid_macro_call();
	base[2]= (V418->c.c_car);
	V418=V418->c.c_cdr;
	if(!endp(V418))invalid_macro_call();}
	base[3]= list(2,VV[116],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for ALLOCATE-STANDARD-INSTANCE--MACRO	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V419=base[0]->c.c_cdr;
	if(endp(V419))invalid_macro_call();
	base[2]= (V419->c.c_car);
	V419=V419->c.c_cdr;
	if(endp(V419))invalid_macro_call();
	base[3]= (V419->c.c_car);
	V419=V419->c.c_cdr;
	if(!endp(V419))invalid_macro_call();}
	V420= list(3,VV[62],VV[118],base[2]);
	base[4]= list(5,VV[52],VV[117],/* INLINE-ARGS */V420,list(3,VV[62],VV[119],list(2,VV[120],base[3])),VV[121]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for WITH-MAKE-INSTANCE-FUNCTION-VALID-P-CHECK	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V421=base[0]->c.c_cdr;
	if(endp(V421))invalid_macro_call();
	base[2]= (V421->c.c_car);
	V421=V421->c.c_cdr;
	base[3]= V421;}
	V422= list(3,VV[124],VV[125],base[2]);
	base[4]= list(3,VV[52],VV[122],list(4,VV[78],VV[123],/* INLINE-ARGS */V422,make_cons(VV[6],base[3])));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for MAKE-INSTANCE-FUNCTION-TRAP	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	{object V423;
	object V424;
	check_arg(2);
	V423=(base[0]);
	V424=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V425;
	object V426;
	V425= (VFUN_NARGS=2,(*(LnkLI39))((V423),(V424)));
	{object V427;
	V427= STREF(object,(V425),48);
	if(!(((V427))==(VV[43]))){
	goto T677;}
	(void)((*(LnkLI61))((V425),VV[13]));
	V426= STREF(object,(V425),48);
	goto T674;
	goto T677;
T677:;
	V426= (V427);}
	goto T674;
T674:;
	base[4]= (V423);
	base[5]= (V424);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V426);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	local entry for function MAKE-INSTANCE-FUNCTION-SIMPLE	*/

static object LI43(V433,V434,V435,V436,V437)

object V433;object V434;object V435;object V436;object V437;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V438;
	object V439;
	object V440;
	object V441;
	base[0]= CMPcar((V433));
	base[0]=MMcons(base[0],Cnil);
	if(!(type_of((base[0]->c.c_car))==t_symbol)){
	goto T685;}
	base[1]= (VFUN_NARGS=2,(*(LnkLI224))((base[0]->c.c_car),Cnil));
	goto T683;
	goto T685;
T685:;
	base[1]= Cnil;
	goto T683;
T683:;
	base[1]=MMcons(base[1],base[0]);
	base[10]= (V434);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	base[2]= vs_base[0];
	base[2]=MMcons(base[2],base[1]);
	V438= make_cons((base[2]->c.c_car),Cnil);
	base[10]= (V434);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk270)(Lclptr270);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T692;}
	base[4]= (VV[271]->s.s_gfdef);
	goto T690;
	goto T692;
T692:;
	base[10]= (V434);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk272)(Lclptr272);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T696;}
	base[4]= (VV[273]->s.s_gfdef);
	goto T690;
	goto T696;
T696:;
	base[10]= (V434);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk274)(Lclptr274);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T700;}
	base[4]= (VV[275]->s.s_gfdef);
	goto T690;
	goto T700;
T700:;
	base[10]= VV[126];
	vs_top=(vs_base=base+10)+1;
	Lerror();
	vs_top=sup;
	base[4]= vs_base[0];
	goto T690;
T690:;
	base[4]=MMcons(base[4],base[2]);
	base[10]= (V434);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk272)(Lclptr272);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T706;}
	V439= VV[127];
	goto T704;
	goto T706;
T706:;
	V439= Cnil;
	goto T704;
T704:;
	V440= (*(LnkLI260))((V437),VV[108]);
	base[11]= (V440);
	base[12]= (V437);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	V445= vs_base[0];
	{object V443;
	object V444= V445;
	if(V444==Cnil){
	V442= Cnil;
	goto T711;}
	base[10]=V443=MMcons(Cnil,Cnil);
	goto T712;
T712:;
	base[11]= (VV[98]->s.s_gfdef);
	base[12]= list(3,VV[128],(V444->c.c_car),Cnil);
	base[13]= Cnil;
	base[14]= (V438);
	vs_top=(vs_base=base+11)+4;
	(void) (*Lnk277)();
	vs_top=sup;
	(V443->c.c_car)= vs_base[0];
	if((V444=MMcdr(V444))==Cnil){
	V442= base[10];
	goto T711;}
	V443=MMcdr(V443)=MMcons(Cnil,Cnil);
	goto T712;}
	goto T711;
T711:;
	base[7]= nreverse(V442);
	base[7]=MMcons(base[7],base[4]);
	V441= (*(LnkLI260))((V436),VV[108]);
	base[11]= (V441);
	base[12]= (V436);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk276)();
	vs_top=sup;
	V450= vs_base[0];
	{object V448;
	object V449= V450;
	if(V449==Cnil){
	V447= Cnil;
	goto T723;}
	base[10]=V448=MMcons(Cnil,Cnil);
	goto T724;
T724:;
	base[11]= (VV[97]->s.s_gfdef);
	base[12]= list(3,VV[128],(V449->c.c_car),Cnil);
	base[13]= Cnil;
	base[14]= (V438);
	vs_top=(vs_base=base+11)+4;
	(void) (*Lnk277)();
	vs_top=sup;
	(V448->c.c_car)= vs_base[0];
	if((V449=MMcdr(V449))==Cnil){
	V447= base[10];
	goto T723;}
	V448=MMcdr(V448)=MMcons(Cnil,Cnil);
	goto T724;}
	goto T723;
T723:;
	base[9]= nreverse(V447);
	base[9]=MMcons(base[9],base[7]);
	base[12]= (V434);
	base[13]= (V435);
	base[14]= CMPcaddr((V433));
	vs_top=(vs_base=base+12)+3;
	(void) (*Lnk278)();
	if(vs_base>=vs_top){vs_top=sup;goto T737;}
	base[10]=MMcons(vs_base[0],base[9]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T738;}
	base[11]=MMcons(vs_base[0],base[10]);
	vs_top=sup;
	goto T739;
	goto T737;
T737:;
	base[10]=MMcons(Cnil,base[9]);
	goto T738;
T738:;
	base[11]=MMcons(Cnil,base[10]);
	goto T739;
T739:;
	if(!(((V439))==(VV[127]))){
	goto T741;}
	{object V452 = 
	make_cclosure_new(LC67,Cnil,base[11],Cdata);
	VMR41(V452)}
	goto T741;
T741:;
	{object V453 = 
	make_cclosure_new(LC68,Cnil,base[11],Cdata);
	VMR41(V453)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-INSTANCE-FUNCTION-COMPLEX	*/

static object LI45(V459,V460,V461,V462,V463)

object V459;object V460;object V461;object V462;object V463;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	base[0]=MMcons((V460),Cnil);
	base[3]= (base[0]->c.c_car);
	base[4]= (V461);
	base[5]= CMPcaddr((V459));
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk279)();
	if(vs_base>=vs_top){vs_top=sup;goto T747;}
	base[1]=MMcons(vs_base[0],base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T748;}
	base[2]=MMcons(vs_base[0],base[1]);
	vs_top=sup;
	goto T749;
	goto T747;
T747:;
	base[1]=MMcons(Cnil,base[0]);
	goto T748;
T748:;
	base[2]=MMcons(Cnil,base[1]);
	goto T749;
T749:;
	base[3]= CMPcar((V459));
	base[3]=MMcons(base[3],base[2]);
	if(!(type_of((base[3]->c.c_car))==t_symbol)){
	goto T753;}
	base[4]= (VFUN_NARGS=2,(*(LnkLI224))((base[3]->c.c_car),Cnil));
	goto T751;
	goto T753;
T753:;
	base[4]= Cnil;
	goto T751;
T751:;
	base[4]=MMcons(base[4],base[3]);
	base[8]= (base[0]->c.c_car);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	base[5]= vs_base[0];
	base[5]=MMcons(base[5],base[4]);
	base[8]= (VV[98]->s.s_gfdef);
	base[9]= (V463);
	V464= list(2,VV[138],(base[0]->c.c_car));
	base[10]= make_cons(/* INLINE-ARGS */V464,VV[139]);
	V465= (*(LnkLI260))((V463),VV[108]);
	V466= 
	make_cclosure_new(LC69,Cnil,base[5],Cdata);
	V467= list(2,/* INLINE-ARGS */V465,V466);
	base[11]= make_cons(/* INLINE-ARGS */V467,Cnil);
	base[12]= list(3,(base[5]->c.c_car),(VV[140]->s.s_dbind),(VV[140]->s.s_dbind));
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk280)();
	vs_top=sup;
	base[6]= vs_base[0];
	base[6]=MMcons(base[6],base[5]);
	base[8]= (VV[97]->s.s_gfdef);
	base[9]= (V462);
	base[10]= list(2,list(2,VV[138],(base[0]->c.c_car)),Ct);
	V468= (*(LnkLI260))((V462),VV[108]);
	V469= 
	make_cclosure_new(LC70,Cnil,base[6],Cdata);
	V470= list(2,/* INLINE-ARGS */V468,V469);
	base[11]= make_cons(/* INLINE-ARGS */V470,Cnil);
	base[12]= list(2,(base[5]->c.c_car),(VV[140]->s.s_dbind));
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk280)();
	vs_top=sup;
	base[7]= vs_base[0];
	base[7]=MMcons(base[7],base[6]);
	{object V471 = 
	make_cclosure_new(LC71,Cnil,base[7],Cdata);
	VMR42(V471)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-SIMPLE-INITIALIZATION-FUNCTION	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{object V472;
	object V473;
	object V474;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V472=(base[0]);
	V473=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T771;}
	V474=(base[2]);
	vs_top=sup;
	goto T772;
	goto T771;
T771:;
	V474= Cnil;
	goto T772;
T772:;
	{register object V475;
	V475= (VFUN_NARGS=4,(*(LnkLI39))((V472),(V473),Cnil,(V474)));
	{object V476;
	V476= STREF(object,(V475),44);
	if(!(((V476))==(VV[43]))){
	goto T778;}
	(void)((*(LnkLI61))((V475),VV[74]));
	base[3]= STREF(object,(V475),44);
	goto T775;
	goto T778;
T778:;
	base[3]= (V476);}
	goto T775;
T775:;
	{object V477;
	V477= STREF(object,(V475),40);
	if(!(((V477))==(VV[43]))){
	goto T784;}
	(void)((*(LnkLI61))((V475),VV[73]));
	base[4]= STREF(object,(V475),40);
	goto T781;
	goto T784;
T784:;
	base[4]= (V477);}
	goto T781;
T781:;
	vs_top=(vs_base=base+3)+2;
	return;}
	}
}
/*	function definition for GET-COMPLEX-INITIALIZATION-FUNCTIONS	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_check;
	{register object V478;
	object V479;
	register object V480;
	object V481;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V478=(base[0]);
	V479=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T787;}
	V480=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T788;}
	V481=(base[3]);
	vs_top=sup;
	goto T789;
	goto T787;
T787:;
	V480= Cnil;
	goto T788;
T788:;
	V481= Cnil;
	goto T789;
T789:;
	{register object V482;
	object V483;
	V482= (VFUN_NARGS=4,(*(LnkLI39))((V478),(V479),Cnil,(V480)));
	{object V484;
	V484= STREF(object,(V482),28);
	if(!(((V484))==(VV[43]))){
	goto T796;}
	(void)((*(LnkLI61))((V482),VV[70]));
	V483= STREF(object,(V482),28);
	goto T793;
	goto T796;
T796:;
	V483= (V484);}
	goto T793;
T793:;
	if(((V481))==Cnil){
	goto T800;}
	base[6]= (V483);
	{object V485;
	V485= STREF(object,(V482),32);
	if(!(((V485))==(VV[43]))){
	goto T806;}
	(void)((*(LnkLI61))((V482),VV[71]));
	base[7]= STREF(object,(V482),32);
	goto T803;
	goto T806;
T806:;
	base[7]= (V485);}
	goto T803;
T803:;
	vs_top=(vs_base=base+6)+2;
	return;
	goto T800;
T800:;
	base[6]= (V483);
	{object V486;
	V487 = (V478);
	{object V489;
	V489= STREF(object,(V482),24);
	if(!(((V489))==(VV[43]))){
	goto T815;}
	(void)((*(LnkLI61))((V482),VV[69]));
	V488= STREF(object,(V482),24);
	goto T812;
	goto T815;
T815:;
	V488= (V489);}
	goto T812;
T812:;
	V490 = (V480);
	V491= (VFUN_NARGS=4,(*(LnkLI39))(V487,V488,Cnil,V490));
	V486= STREF(object,/* INLINE-ARGS */V491,32);
	if(!(((V486))==(VV[43]))){
	goto T819;}
	V492 = (V478);
	{object V494;
	V494= STREF(object,(V482),24);
	if(!(((V494))==(VV[43]))){
	goto T825;}
	(void)((*(LnkLI61))((V482),VV[69]));
	V493= STREF(object,(V482),24);
	goto T822;
	goto T825;
T825:;
	V493= (V494);}
	goto T822;
T822:;
	V495 = (V480);
	V496= (VFUN_NARGS=4,(*(LnkLI39))(V492,V493,Cnil,V495));
	(void)((*(LnkLI61))(/* INLINE-ARGS */V496,VV[71]));
	V497 = (V478);
	{object V499;
	V499= STREF(object,(V482),24);
	if(!(((V499))==(VV[43]))){
	goto T831;}
	(void)((*(LnkLI61))((V482),VV[69]));
	V498= STREF(object,(V482),24);
	goto T828;
	goto T831;
T831:;
	V498= (V499);}
	goto T828;
T828:;
	V500 = (V480);
	V501= (VFUN_NARGS=4,(*(LnkLI39))(V497,V498,Cnil,V500));
	base[7]= STREF(object,/* INLINE-ARGS */V501,32);
	goto T810;
	goto T819;
T819:;
	base[7]= (V486);}
	goto T810;
T810:;
	vs_top=(vs_base=base+6)+2;
	return;}
	}
}
/*	local entry for function ADD-FORMS	*/

static object LI48(V504,V505)

register object V504;register object V505;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	if(((V504))==Cnil){
	goto T834;}
	base[0]= (V504);
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V504= vs_base[0];
	if((CMPcar((V505)))!=Cnil){
	goto T842;}
	(V505)->c.c_car = V504;
	goto T840;
	goto T842;
T842:;
	(CMPcdr(V505))->c.c_cdr = V504;
	(void)(CMPcdr(V505));
	goto T840;
T840:;
	{object V511;
	base[1]= (V504);
	vs_top=(vs_base=base+1)+1;
	Llast();
	vs_top=sup;
	V511= vs_base[0];
	(V505)->c.c_cdr = (V511);}
	goto T834;
T834:;
	{object V512 = CMPcar((V505));
	VMR45(V512)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-DEFAULT-INITARGS-FORM-LIST	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{object V513;
	object V514;
	object V515;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V513=(base[0]);
	V514=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T849;}
	V515=(base[2]);
	vs_top=sup;
	goto T850;
	goto T849;
T849:;
	V515= Ct;
	goto T850;
T850:;
	{object V516;
	object V517;
	object V518;
	object V519;
	register object V520;
	V516= make_cons(Cnil,Cnil);
	base[3]= (V513);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk281)(Lclptr281);
	vs_top=sup;
	V517= vs_base[0];
	base[4]= (V513);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	V523= vs_base[0];
	{object V521;
	object V522= V523;
	if(V522==Cnil){
	V519= Cnil;
	goto T855;}
	base[3]=V521=MMcons(Cnil,Cnil);
	goto T856;
T856:;
	base[5]= (V522->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	V527= vs_base[0];
	{object V525;
	object V526= V527;
	if(V526==Cnil){
	(V521->c.c_cdr)= Cnil;
	goto T859;}
	base[4]=V525=MMcons(Cnil,Cnil);
	goto T860;
T860:;
	(V525->c.c_car)= make_cons((V526->c.c_car),(V522->c.c_car));
	if((V526=MMcdr(V526))==Cnil){
	(V521->c.c_cdr)= base[4];
	goto T859;}
	V525=MMcdr(V525)=MMcons(Cnil,Cnil);
	goto T860;}
	goto T859;
T859:;
	while(MMcdr(V521)!=Cnil)V521=MMcdr(V521);
	if((V522=MMcdr(V522))==Cnil){
	base[3]=base[3]->c.c_cdr;
	V519= base[3];
	goto T855;}
	goto T856;}
	goto T855;
T855:;
	V518= (V514);
	V520= Cnil;
	{register object V529;
	object V530;
	V529= (V518);
	V530= CMPcar((V529));
	goto T868;
T868:;
	if(!(((V529))==Cnil)){
	goto T869;}
	goto T864;
	goto T869;
T869:;
	{object V531;
	{register object x= (V530),V533= (V519);
	while(V533!=Cnil)
	if(eql(x,V533->c.c_car->c.c_car) &&V533->c.c_car != Cnil){
	V532= (V533->c.c_car);
	goto T875;
	}else V533=V533->c.c_cdr;
	V532= Cnil;}
	goto T875;
T875:;
	V531= CMPcdr(V532);
	base[5]= (V531);
	base[6]= (V520);
	vs_top=(vs_base=base+5)+2;
	Ladjoin();
	vs_top=sup;
	V520= vs_base[0];}
	V529= CMPcdr((V529));
	V530= CMPcar((V529));
	goto T868;}
	goto T864;
T864:;
	{register object V534;
	register object V535;
	V534= (V517);
	V535= CMPcar((V534));
	goto T888;
T888:;
	if(!(((V534))==Cnil)){
	goto T889;}
	goto T884;
	goto T889;
T889:;
	{register object V536;
	register object V537;
	object V538;
	V536= CMPcar((V535));
	{register object x= (V536),V540= (V519);
	while(V540!=Cnil)
	if(eql(x,V540->c.c_car->c.c_car) &&V540->c.c_car != Cnil){
	V539= (V540->c.c_car);
	goto T896;
	}else V540=V540->c.c_cdr;
	V539= Cnil;}
	goto T896;
T896:;
	V537= CMPcdr(V539);
	V538= CMPcadr((V535));
	{register object x= (V537),V541= (V520);
	while(V541!=Cnil)
	if(eql(x,V541->c.c_car)){
	goto T893;
	}else V541=V541->c.c_cdr;}
	V542= list(2,VV[114],(V538));
	V543= list(2,/* INLINE-ARGS */V542,list(2,VV[145],(V536)));
	(void)((*(LnkLI284))(/* INLINE-ARGS */V543,(V516)));
	V518= make_cons(V536,(V518));
	V520= make_cons(V537,(V520));}
	goto T893;
T893:;
	V534= CMPcdr((V534));
	V535= CMPcar((V534));
	goto T888;}
	goto T884;
T884:;
	if(((V515))==Cnil){
	goto T909;}
	V546 = (V513);
	V547= list(3,VV[146],V546,(VFUN_NARGS=3,(*(LnkLI39))((V513),(V518),Cnil)));
	V548= make_cons(/* INLINE-ARGS */V547,Cnil);
	(void)((*(LnkLI284))(/* INLINE-ARGS */V548,(V516)));
	goto T909;
T909:;
	(void)((*(LnkLI284))(VV[147],(V516)));
	base[3]= CMPcar((V516));
	base[4]= (V518);
	vs_top=(vs_base=base+3)+2;
	return;}
	}
}
/*	function definition for MAKE-SHARED-INITIALIZE-FORM-LIST	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	{object V549;
	object V550;
	object V551;
	object V552;
	check_arg(4);
	V549=(base[0]);
	V550=(base[1]);
	V551=(base[2]);
	V552=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V553;
	object V554;
	object V555;
	object V556;
	object V557;
	object V558;
	object V559;
	object V560;
	V553= make_cons(Cnil,Cnil);
	base[12]= (V549);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk270)(Lclptr270);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T918;}
	V554= VV[148];
	goto T916;
	goto T918;
T918:;
	base[12]= (V549);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk272)(Lclptr272);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T922;}
	V554= VV[149];
	goto T916;
	goto T922;
T922:;
	base[12]= (V549);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk274)(Lclptr274);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T926;}
	V554= VV[150];
	goto T916;
	goto T926;
T926:;
	base[12]= VV[151];
	vs_top=(vs_base=base+12)+1;
	Lerror();
	vs_top=sup;
	V554= vs_base[0];
	goto T916;
T916:;
	base[12]= (V549);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	V555= vs_base[0];
	if(((V552))==Cnil){
	goto T934;}
	base[12]= ((V555))->v.v_self[12];
	base[13]= VV[152];
	base[14]= (VV[153]->s.s_dbind);
	vs_top=(vs_base=base+12)+3;
	(void) (*Lnk285)();
	vs_top=sup;
	V556= vs_base[0];
	goto T932;
	goto T934;
T934:;
	V556= Cnil;
	goto T932;
T932:;
	base[12]= (V549);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	V557= vs_base[0];
	base[13]=VV[286]->s.s_gfdef;
	{object V561;
	object V562= (V557);
	if(V562==Cnil){
	V558= Cnil;
	goto T941;}
	base[12]=V561=MMcons(Cnil,Cnil);
	goto T942;
T942:;
	base[14]= (V562->c.c_car);
	vs_top=(vs_base=base+14)+1;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	(V561->c.c_car)= vs_base[0];
	if((V562=MMcdr(V562))==Cnil){
	V558= base[12];
	goto T941;}
	V561=MMcdr(V561)=MMcons(Cnil,Cnil);
	goto T942;}
	goto T941;
T941:;
	{object V563;
	object V564= (V557);
	if(V564==Cnil){
	V559= Cnil;
	goto T945;}
	base[12]=V563=MMcons(Cnil,Cnil);
	goto T946;
T946:;
	{object V566;
	V566= VV[154];
	{register object V567;
	object V568;
	base[15]= (V564->c.c_car);
	vs_top=(vs_base=base+15)+1;
	(void) (*Lnk283)(Lclptr283);
	vs_top=sup;
	V567= vs_base[0];
	V568= CMPcar((V567));
	goto T953;
T953:;
	if(!(((V567))==Cnil)){
	goto T954;}
	goto T948;
	goto T954;
T954:;
	{object V569;
	base[15]= (V568);
	base[16]= (V550);
	vs_top=(vs_base=base+15)+2;
	(void) (*Lnk287)();
	vs_top=sup;
	V569= vs_base[0];
	if(((V569))==Cnil){
	goto T958;}
	V566= (number_compare((V566),(V569))<=0?((V566)):(V569));}
	goto T958;
T958:;
	V567= CMPcdr((V567));
	V568= CMPcar((V567));
	goto T953;}
	goto T948;
T948:;
	(V563->c.c_car)= make_cons((V564->c.c_car),(V566));}
	if((V564=MMcdr(V564))==Cnil){
	V559= base[12];
	goto T945;}
	V563=MMcdr(V563)=MMcons(Cnil,Cnil);
	goto T946;}
	goto T945;
T945:;
	base[12]= (V559);
	base[13]= (VV[288]->s.s_gfdef);
	base[14]= VV[155];
	base[15]= (VV[189]->s.s_gfdef);
	vs_top=(vs_base=base+12)+4;
	(void) (*Lnk289)();
	vs_top=sup;
	V560= vs_base[0];
	{long V570;
	V570= 0;
	{register object V571;
	register object V572;
	V571= (V560);
	V572= CMPcar((V571));
	goto T980;
T980:;
	if(!(((V571))==Cnil)){
	goto T981;}
	goto T975;
	goto T981;
T981:;
	{object V573;
	object V574;
	register long V575;
	V573= CMPcar((V572));
	base[15]= (V573);
	vs_top=(vs_base=base+15)+1;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	V574= vs_base[0];
	V576= CMPcdr((V572));
	V577 = CMPmake_fixnum(V570);
	V578= number_minus(/* INLINE-ARGS */V576,V577);
	V575= fix(one_plus(/* INLINE-ARGS */V578));
	if(eql(CMPcdr((V572)),VV[154])){
	goto T985;}
	{object V579;
	base[16]= (V574);
	base[17]= (V558);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk287)();
	vs_top=sup;
	V580= vs_base[0];
	V579= one_plus(V580);
	if(!((V575)>0)){
	goto T999;}
	V582 = CMPmake_fixnum((long)(2)*(V575));
	V583= list(2,VV[156],V582);
	V581= make_cons(/* INLINE-ARGS */V583,Cnil);
	goto T997;
	goto T999;
T999:;
	V581= Cnil;
	goto T997;
T997:;
	V584= list(3,VV[157],(V579),(V573));
	V585= make_cons(/* INLINE-ARGS */V584,Cnil);
	V586= append(V581,/* INLINE-ARGS */V585);
	(void)((*(LnkLI284))(/* INLINE-ARGS */V586,(V553)));}
	V570= (long)(V570)+(V575);}
	goto T985;
T985:;
	V571= CMPcdr((V571));
	V572= CMPcar((V571));
	goto T980;}}
	goto T975;
T975:;
	{register object V587;
	object V588;
	V587= (V560);
	V588= CMPcar((V587));
	goto T1011;
T1011:;
	if(!(((V587))==Cnil)){
	goto T1012;}
	goto T1007;
	goto T1012;
T1012:;
	{register object V589;
	object V590;
	V589= CMPcar((V588));
	base[15]= (V589);
	vs_top=(vs_base=base+15)+1;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	V590= vs_base[0];
	if(!(eql(CMPcdr((V588)),VV[154]))){
	goto T1016;}
	if(((V551))==(Ct)){
	goto T1020;}
	{register object x= (V590),V591= (V551);
	while(V591!=Cnil)
	if(eql(x,V591->c.c_car)){
	goto T1025;
	}else V591=V591->c.c_cdr;
	goto T1016;}
	goto T1025;
T1025:;
	goto T1020;
T1020:;
	{object V592;
	object V593;
	object V594;
	register object V595;
	register object V596;
	base[20]= (V589);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk290)(Lclptr290);
	vs_top=sup;
	V592= vs_base[0];
	base[20]= (V589);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	V593= vs_base[0];
	if(((V554))==(VV[148])){
	goto T1032;}
	base[20]= (V589);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk292)(Lclptr292);
	vs_top=sup;
	V594= vs_base[0];
	goto T1030;
	goto T1032;
T1032:;
	V594= Cnil;
	goto T1030;
T1030:;
	base[20]= (V590);
	base[21]= (V558);
	vs_top=(vs_base=base+20)+2;
	(void) (*Lnk287)();
	vs_top=sup;
	V597= vs_base[0];
	V595= one_plus(V597);
	if(((V593))!=Cnil){
	goto T1041;}
	V596= Cnil;
	goto T1039;
	goto T1041;
T1041:;
	base[20]= (V592);
	vs_top=(vs_base=base+20)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1044;}
	{object V598;
	V598= (
	(type_of((V593)) == t_sfun ?(*(((V593))->sfn.sfn_self)):
	(fcall.argd=0,type_of((V593))==t_vfun) ?
	(*(((V593))->sfn.sfn_self)):
	(fcall.fun=((V593)),fcalln))());
	if(((V552))==Cnil){
	goto T1049;}
	if(!(type_of((V594))==t_fixnum||type_of((V594))==t_bignum)){
	goto T1049;}
	(void)((((V556))->v.v_self[fix((V594))]=((V598))));
	V596= Cnil;
	goto T1039;
	goto T1049;
T1049:;
	V599= list(2,VV[158],(V598));
	V596= list(2,/* INLINE-ARGS */V599,list(3,VV[157],(V595),(V589)));
	goto T1039;}
	goto T1044;
T1044:;
	base[20]= (V589);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk291)(Lclptr291);
	vs_top=sup;
	V600= vs_base[0];
	V601= list(2,VV[114],V600);
	V596= list(2,/* INLINE-ARGS */V601,list(3,VV[157],(V595),(V589)));
	goto T1039;
T1039:;
	if(((V552))!=Cnil){
	goto T1058;}
	if(((V596))==Cnil){
	goto T1058;}
	V603 = CMPmake_fixnum((long)length((V596)));
	V604= list(4,VV[159],(V595),(V589),V603);
	V602= make_cons(/* INLINE-ARGS */V604,Cnil);
	goto T1056;
	goto T1058;
T1058:;
	V602= Cnil;
	goto T1056;
T1056:;
	V605 = (V596);
	V606= append(V602,V605);
	(void)((*(LnkLI284))(/* INLINE-ARGS */V606,(V553)));}}
	goto T1016;
T1016:;
	V587= CMPcdr((V587));
	V588= CMPcar((V587));
	goto T1011;}
	goto T1007;
T1007:;
	base[12]= CMPcar((V553));
	base[13]= (V556);
	vs_top=(vs_base=base+12)+2;
	return;}
	}
}
/*	local entry for function GET-PV-CELL-FOR-CLASS	*/

static object LI51(V608)

register object V608;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V609;
	object V610;
	register object V611;
	base[4]=VV[286]->s.s_gfdef;
	base[5]= (V608);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	V614= vs_base[0];
	{object V612;
	object V613= V614;
	if(V613==Cnil){
	V609= Cnil;
	goto T1069;}
	base[3]=V612=MMcons(Cnil,Cnil);
	goto T1070;
T1070:;
	base[5]= (V613->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk286)(Lclptr286);
	vs_top=sup;
	(V612->c.c_car)= vs_base[0];
	if((V613=MMcdr(V613))==Cnil){
	V609= base[3];
	goto T1069;}
	V612=MMcdr(V612)=MMcons(Cnil,Cnil);
	goto T1070;}
	goto T1069;
T1069:;
	V615= make_cons(Cnil,(V609));
	V610= make_cons(/* INLINE-ARGS */V615,Cnil);
	base[3]= (V608);
	base[4]= (VV[160]->s.s_dbind);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V611= vs_base[0];
	if(((V611))==Cnil){
	goto T1080;}
	if(equal((V610),STREF(object,(V611),8))){
	goto T1079;}
	goto T1080;
T1080:;
	V611= (VFUN_NARGS=2,(*(LnkLI293))(VV[162],(V610)));
	{object V617;
	V617= (VV[160]->s.s_dbind);
	base[3]= V608;
	base[4]= (V617);
	base[5]= V611;
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	goto T1079;
T1079:;
	V619 = (V611);
	base[3]= (V608);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	V620= vs_base[0];
	{object V621 = (*(LnkLI294))(V619,V620);
	VMR48(V621)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for INITIALIZE-INSTANCE-SIMPLE-FUNCTION	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	{object V622;
	object V623;
	object V624;
	object V625;
	check_arg(4);
	V622=(base[0]);
	V623=(base[1]);
	V624=(base[2]);
	V625=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V626;
	object V627;
	register object V628;
	V626= (*(LnkLI295))((V624));
	V627= STREF(object,(V623),0);
	V629 = (V622);
	base[7]= CMPcar((V627));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V630= vs_base[0];
	V628= listA(3,V629,V630,CMPcdr((V627)));
	if(((VV[163]->s.s_dbind))!=Cnil){
	goto T1097;}
	base[7]= (V628);
	base[8]= (VV[164]->s.s_dbind);
	vs_top=(vs_base=base+7)+2;
	Lgethash();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1098;}
	goto T1097;
T1097:;
	{object V631;
	object V632;
	base[7]= (V626);
	base[8]= (V625);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk296)();
	if(vs_base>=vs_top){vs_top=sup;goto T1107;}
	V631= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1108;}
	V632= vs_base[0];
	vs_top=sup;
	goto T1109;
	goto T1107;
T1107:;
	V631= Cnil;
	goto T1108;
T1108:;
	V632= Cnil;
	goto T1109;
T1109:;
	{register object V633;
	{register object x= (V631),V634= (VV[165]->s.s_dbind);
	while(V634!=Cnil)
	if(equal(x,V634->c.c_car->c.c_car) &&V634->c.c_car != Cnil){
	V633= (V634->c.c_car);
	goto T1110;
	}else V634=V634->c.c_cdr;
	V633= Cnil;}
	goto T1110;
T1110:;
	{object V636;
	V636= (VV[164]->s.s_dbind);
	base[7]= V628;
	base[8]= (V636);
	base[9]= Ct;
	vs_top=(vs_base=base+7)+3;
	siLhash_set();
	vs_top=sup;}
	if(((V633))==Cnil){
	goto T1118;}
	{object V639;
	base[8]= make_cons((V628),Cnil);
	base[9]= CMPcdddr((V633));
	base[10]= VV[12];
	base[11]= (VV[225]->s.s_gfdef);
	vs_top=(vs_base=base+8)+4;
	(void) (*Lnk297)();
	vs_top=sup;
	V639= vs_base[0];
	(CMPcddr(V633))->c.c_cdr = (V639);
	(void)(CMPcddr(V633));
	goto T1116;}
	goto T1118;
T1118:;
	V633= listA(4,(V631),Cnil,Cnil,make_cons((V628),Cnil));{object V640;
	V640= (VV[165]->s.s_dbind);
	V641= make_cons((V633),Cnil);
	(VV[165]->s.s_dbind)= nconc(V640,/* INLINE-ARGS */V641);}
	goto T1116;
T1116:;
	if(((VV[166]->s.s_dbind))!=Cnil){
	goto T1129;}
	if((CMPcadr((V633)))!=Cnil){
	goto T1129;}
	{object V643;
	base[8]= CMPcar((V633));
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk298)();
	vs_top=sup;
	V643= vs_base[0];
	(CMPcdr(V633))->c.c_car = (V643);
	(void)(CMPcdr(V633));}
	goto T1129;
T1129:;
	if((CMPcadr((V633)))==Cnil){
	goto T1138;}
	base[7]= CMPcadr((V633));
	{object V644;
	V644= (V632);
	 vs_top=base+8;
	 while(V644!=Cnil)
	 {vs_push((V644)->c.c_car);V644=(V644)->c.c_cdr;}
	vs_base=base+8;}
	{object _funobj = base[7];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1138;
T1138:;
	base[7]= list(3,VV[130],(V626),(V625));
	vs_top=(vs_base=base+7)+1;
	return;}}
	goto T1098;
T1098:;
	base[7]= list(3,VV[130],(V626),(V625));
	vs_top=(vs_base=base+7)+1;
	return;}
	}
}
/*	local entry for function LOAD-PRECOMPILED-IIS-ENTRY	*/

static object LI53(V649,V650,V651,V652)

object V649;object V650;object V651;object V652;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V653;
	{register object x= (V649),V654= (VV[165]->s.s_dbind);
	while(V654!=Cnil)
	if(equal(x,V654->c.c_car->c.c_car) &&V654->c.c_car != Cnil){
	V653= (V654->c.c_car);
	goto T1142;
	}else V654=V654->c.c_cdr;
	V653= Cnil;}
	goto T1142;
T1142:;
	if(((V653))!=Cnil){
	goto T1143;}
	V653= listA(4,(V649),Cnil,Cnil,Cnil);{object V655;
	V655= (VV[165]->s.s_dbind);
	V656= make_cons((V653),Cnil);
	(VV[165]->s.s_dbind)= nconc(V655,/* INLINE-ARGS */V656);}
	goto T1143;
T1143:;
	(CMPcdr(V653))->c.c_car = V650;
	(void)(CMPcdr(V653));
	(CMPcddr(V653))->c.c_car = V651;
	(void)(CMPcddr(V653));
	{register object V661;
	register object V662;
	V661= (V652);
	V662= CMPcar((V661));
	goto T1157;
T1157:;
	if(!(((V661))==Cnil)){
	goto T1158;}
	goto T1153;
	goto T1158;
T1158:;
	{register object V663;
	register object V664;
	register object V665;
	V663= (V662);
	V664= (VV[164]->s.s_dbind);
	V665= Ct;
	base[1]= (V663);
	base[2]= (V664);
	base[3]= (V665);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;}
	V661= CMPcdr((V661));
	V662= CMPcar((V661));
	goto T1157;}
	goto T1153;
T1153:;
	{object V667;
	base[1]= (V652);
	base[2]= CMPcdddr((V653));
	base[3]= VV[12];
	base[4]= (VV[225]->s.s_gfdef);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk297)();
	vs_top=sup;
	V667= vs_base[0];
	(CMPcddr(V653))->c.c_cdr = (V667);
	(void)(CMPcddr(V653));
	{object V668 = (V667);
	VMR50(V668)}}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for PRECOMPILE-IIS-FUNCTIONS	*/

static void L54()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V669=base[0]->c.c_cdr;
	if(endp(V669)){
	base[2]= Cnil;
	} else {
	base[2]= (V669->c.c_car);
	V669=V669->c.c_cdr;}
	if(!endp(V669))invalid_macro_call();}
	{register object V670;
	V670= small_fixnum(-1);
	{register object V672;
	register object V673;
	V672= Cnil;
	V673= Cnil;
	{register object V674;
	register object V675;
	V674= (VV[165]->s.s_dbind);
	V675= CMPcar((V674));
	goto T1188;
T1188:;
	if(!(((V674))==Cnil)){
	goto T1189;}
	goto T1184;
	goto T1189;
T1189:;
	if((CMPcaddr((V675)))==Cnil){
	goto T1194;}
	if(!((CMPcaddr((V675)))==(base[2]))){
	goto T1193;}
	goto T1194;
T1194:;
	if((base[2])==Cnil){
	goto T1198;}
	{register object V676;
	register object V677;
	V676= (V675);
	V677= base[2];
	(CMPcddr((V676)))->c.c_car = (V677);
	(void)(CMPcddr((V676)));}
	goto T1198;
T1198:;
	{register object V678;
	V679 = base[2];
	V670= number_plus((V670),small_fixnum(1));
	V680 = (V670);
	V681= list(3,VV[167],V679,V680);
	V682= list(2,VV[4],CMPcar((V675)));
	V683= list(2,VV[170],CMPcar((V675)));
	V684= list(2,VV[4],base[2]);
	V685= list(5,VV[169],/* INLINE-ARGS */V682,/* INLINE-ARGS */V683,/* INLINE-ARGS */V684,list(2,VV[4],CMPcdddr((V675))));
	V678= (*(LnkLI299))(/* INLINE-ARGS */V681,VV[168],/* INLINE-ARGS */V685);
	if(((V672))!=Cnil){
	goto T1207;}
	V673= make_cons((V678),Cnil);
	V672= (V673);
	goto T1193;
	goto T1207;
T1207:;
	V687= make_cons((V678),Cnil);
	((V673))->c.c_cdr = /* INLINE-ARGS */V687;
	V686= (V673);
	V673= CMPcdr(V686);}
	goto T1193;
T1193:;
	V674= CMPcdr((V674));
	V675= CMPcar((V674));
	goto T1188;}
	goto T1184;
T1184:;
	V671= (V672);}
	base[3]= make_cons(VV[6],V671);
	vs_top=(vs_base=base+3)+1;
	return;}
}
/*	function definition for COMPILE-IIS-FUNCTIONS	*/

static void L55()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_check;
	bds_check;
	{object V688;
	check_arg(1);
	V688=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (((V688))==Cnil?Ct:Cnil);
	bds_bind(VV[163],Ct);
	bds_bind(VV[91],Ct);
	bds_bind(VV[166],base[3]);
	if(!(((VV[101]->s.s_dbind))==(VV[102]))){
	goto T1220;}
	vs_base=vs_top;
	(void) (*Lnk300)();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T1220;
T1220:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function INITIALIZE-INSTANCE-SIMPLE	*/

static object LI56(V693,V694,V695,V696)

object V693;register object V694;object V695;register object V696;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	{object V697;
	register object V698;
	object V699;
	object V700;
	register object V701;
	V697= CMPcar((V693));
	if(type_of(V695)==t_structure){
	goto T1227;}
	goto T1225;
	goto T1227;
T1227:;
	if(!(((V695)->str.str_def)==(VV[171]))){
	goto T1225;}
	V699= STREF(object,(V695),4);
	goto T1223;
	goto T1225;
T1225:;{object V703;
	V703= (VV[172]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V695);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk301)();
	vs_top=sup;
	V704= vs_base[0];
	if(!((V703)==(CMPcar(V704)))){
	goto T1230;}}
	V699= CMPcar(((V695))->cc.cc_turbo[12]);
	goto T1223;
	goto T1230;
T1230:;
	V699= Cnil;
	goto T1223;
T1223:;
	V700= (*(LnkLI303))((V695));
	V698= (V696);
	V701= Cnil;
	goto T1238;
T1238:;
	if(((V694))!=Cnil){
	goto T1240;}
	goto T1236;
	goto T1240;
T1240:;
	{register object V705;
	{object V706;
	V706= CMPcar((V694));
	V694= CMPcdr((V694));
	V705= (V706);}
	{object V707= CMPcar((V705));
	if((V707!= VV[145]))goto T1247;
	V696= make_cons(V701,(V696));
	{object V709;
	V709= CMPcadr((V705));
	V696= make_cons((V709),(V696));
	goto T1239;}
	goto T1247;
T1247:;
	if((V707!= VV[158]))goto T1252;
	V701= CMPcadr((V705));
	goto T1239;
	goto T1252;
T1252:;
	if((V707!= VV[114]))goto T1254;
	V701= (
	V710 = CMPcadr((V705)),
	(type_of(V710) == t_sfun ?(*((V710)->sfn.sfn_self)):
	(fcall.argd=0,type_of(V710)==t_vfun) ?
	(*((V710)->sfn.sfn_self)):
	(fcall.fun=(V710),fcalln))());
	goto T1239;
	goto T1254;
T1254:;
	if((V707!= VV[156]))goto T1256;
	V711= one_minus(CMPcadr((V705)));
	V698= nthcdr(fix(/* INLINE-ARGS */V711),(V698));
	{object V712;
	V712= CMPcar((V698));
	V698= CMPcdr((V698));
	V701= (V712);}
	goto T1239;
	goto T1256;
T1256:;
	if((V707!= VV[157]))goto T1263;
	{object V713;
	V713= ((V697))->v.v_self[fix(CMPcadr((V705)))];
	if(!(type_of(V713)==t_fixnum)){
	goto T1266;}
	(void)(((V699))->v.v_self[fix((V713))]= ((V701)));
	goto T1239;
	goto T1266;
T1266:;
	if(!(type_of(V713)==t_cons)){
	goto T1269;}
	(V713)->c.c_cdr = V701;
	goto T1239;
	goto T1269;
T1269:;
	{object V719;
	V719= CMPcaddr((V705));
	base[0]= (V701);
	base[1]= V700;
	base[2]= V695;
	base[3]= (V719);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk304)(Lclptr304);
	vs_top=sup;
	goto T1239;}}
	goto T1263;
T1263:;
	if((V707!= VV[159]))goto T1277;
	{object V720;
	V720= ((V697))->v.v_self[fix(CMPcadr((V705)))];
	if(!(type_of(V720)==t_fixnum)){
	goto T1282;}
	if(!((((((V699))->v.v_self[fix((V720))])==(VV[173])?Ct:Cnil))==Cnil)){
	goto T1239;}
	goto T1279;
	goto T1282;
T1282:;
	if(!(type_of(V720)==t_cons)){
	goto T1285;}
	if(!((((CMPcdr((V720)))==(VV[173])?Ct:Cnil))==Cnil)){
	goto T1239;}
	goto T1279;
	goto T1285;
T1285:;
	base[0]= (V700);
	base[1]= (V695);
	base[2]= CMPcaddr((V705));
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk195)(Lclptr195);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1239;}}
	goto T1279;
T1279:;
	{long V722;
	register long V723;
	V722= fix(CMPcadddr((V705)));
	V723= 0;
	goto T1293;
T1293:;
	if(!((V723)>=(V722))){
	goto T1294;}
	goto T1239;
	goto T1294;
T1294:;
	{object V724;
	V724= CMPcar((V694));
	V694= CMPcdr((V694));}
	V723= (long)(V723)+1;
	goto T1293;}
	goto T1277;
T1277:;
	if((V707!= VV[146]))goto T1304;
	if(!(type_of((V696))==t_cons)){
	goto T1305;}
	V696= make_cons(CMPcar((V696)),CMPcdr((V696)));
	goto T1305;
T1305:;
	(VV[93]->s.s_dbind)= CMPcadr((V705));
	(VV[94]->s.s_dbind)= (V696);
	(VV[95]->s.s_dbind)= CMPcaddr((V705));
	goto T1239;
	goto T1304;
T1304:;
	if((V707!= VV[305]))goto T1314;
	V698= (V696);
	goto T1239;
	goto T1314;
T1314:;
	FEerror("The ECASE key value ~s is illegal.",1,V707);
	goto T1239;}}
	goto T1239;
T1239:;
	goto T1238;
	goto T1236;
T1236:;
	{object V725 = (V696);
	VMR53(V725)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-TO-CVECTOR	*/

static object LI57(V728,V729)

register object V728;object V729;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;{object V730;
	base[0]= (V729);
	base[1]= (V728);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk287)();
	vs_top=sup;
	V730= vs_base[0];
	if(V730==Cnil)goto T1317;
	{object V731 = V730;
	VMR54(V731)}
	goto T1317;
T1317:;}
	{object V732;
	V732= CMPmake_fixnum((long)(((V728))->st.st_fillp));
	{register object V734;
	register long V735;
	long V736;
	V734= (V728);
	V735= (long)(((V734))->st.st_fillp);
	V736= (long)(((V734))->st.st_dim);
	if(!((V735)<(V736))){
	goto T1327;}
	(void)((((V734))->st.st_fillp)=((long)(1)+(V735)));
	V737 = CMPmake_fixnum(V735);
	(void)(aset1((V734),fix(V737),V729));
	goto T1322;
	goto T1327;
T1327:;
	base[0]= V729;
	base[1]= (V734);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk306)();
	vs_top=sup;}
	goto T1322;
T1322:;
	{object V738 = (V732);
	VMR54(V738)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIRST-FORM-TO-LISP	*/

static object LI60(V742,V743,V744)

register object V742;object V743;register object V744;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	base[0]= (V743);
	{object V745;
	{object V747;
	V747= CMPcdr(CMPcar(V742));
	{object V748;
	V748= CMPcar(CMPcar(V742));
	(V742)->c.c_car = (V747);
	V745= (V748);}}
	{object V749= CMPcar((V745));
	if((V749!= VV[145]))goto T1338;
	base[1]= CMPcadr((V745));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V750= vs_base[0];
	{object V751 = list(2,VV[174],list(3,VV[57],V750,VV[175]));
	VMR55(V751)}
	goto T1338;
T1338:;
	if((V749!= VV[158]))goto T1341;
	base[1]= CMPcadr((V745));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V752= vs_base[0];
	V753= list(3,VV[176],VV[76],V752);
	{object V754 = make_cons(/* INLINE-ARGS */V753,Cnil);
	VMR55(V754)}
	goto T1341;
T1341:;
	if((V749!= VV[114]))goto T1344;
	base[1]= CMPcadr((V745));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V755= vs_base[0];
	V756= list(3,VV[176],VV[76],list(2,VV[114],list(3,VV[177],VV[170],V755)));
	{object V757 = make_cons(/* INLINE-ARGS */V756,Cnil);
	VMR55(V757)}
	goto T1344;
T1344:;
	if((V749!= VV[156]))goto T1347;
	{object V759;
	V759= one_minus(CMPcadr((V745)));
	{object V760= (V759);
	if(!eql(V760,VV[179]))goto T1350;
	V758= VV[180];
	goto T1348;
	goto T1350;
T1350:;
	if(!eql(V760,VV[181]))goto T1351;
	V758= VV[182];
	goto T1348;
	goto T1351;
T1351:;
	V758= list(2,VV[183],(V759));}}
	goto T1348;
T1348:;
	{object V761 = list(2,list(3,VV[176],VV[178],append(V758,VV[184])),VV[185]);
	VMR55(V761)}
	goto T1347;
T1347:;
	if((V749!= VV[157]))goto T1352;
	{object V762;
	object V763;
	object V764;
	V762= CMPcadr((V745));
	V763= ((V744))->v.v_self[fix((V762))];
	base[4]= CMPcaddr((V745));
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V765= vs_base[0];
	V764= list(3,VV[62],list(4,VV[186],VV[103],VV[121],V765),VV[76]);
	if(((VV[187]->s.s_dbind))==Cnil){
	goto T1359;}
	if(!(type_of(V763)==t_fixnum)){
	goto T1362;}
	base[4]= (V763);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V767= vs_base[0];
	V768= list(3,VV[62],list(3,VV[188],VV[58],V767),VV[76]);
	{object V769 = make_cons(/* INLINE-ARGS */V768,Cnil);
	VMR55(V769)}
	goto T1362;
T1362:;
	if(!(type_of(V763)==t_cons)){
	goto T1367;}
	base[4]= (V763);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V770= vs_base[0];
	V771= list(3,VV[62],list(2,VV[189],V770),VV[76]);
	{object V772 = make_cons(/* INLINE-ARGS */V771,Cnil);
	VMR55(V772)}
	goto T1367;
T1367:;
	{object V773 = make_cons((V764),Cnil);
	VMR55(V773)}
	goto T1359;
T1359:;
	base[4]= (V762);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V774= vs_base[0];
	V775 = (V764);
	if(!(type_of(V763)==t_fixnum)){
	goto T1375;}
	V776= VV[192];
	goto T1373;
	goto T1375;
T1375:;
	if(!(type_of(V763)==t_cons)){
	goto T1378;}
	V776= VV[193];
	goto T1373;
	goto T1378;
T1378:;
	V776= VV[194];
	goto T1373;
T1373:;
	V778= list(7,VV[190],VV[191],VV[58],V774,VV[76],V775,V776);
	{object V779 = make_cons(/* INLINE-ARGS */V778,Cnil);
	VMR55(V779)}}
	goto T1352;
T1352:;
	if((V749!= VV[159]))goto T1380;
	{object V780;
	object V781;
	object V782;
	V780= CMPcadr((V745));
	V781= ((V744))->v.v_self[fix((V780))];
	base[4]= CMPcaddr((V745));
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V783= vs_base[0];
	V782= list(4,VV[195],VV[103],VV[121],V783);
	if(((VV[187]->s.s_dbind))==Cnil){
	goto T1388;}
	if(!(type_of(V781)==t_fixnum)){
	goto T1391;}
	base[4]= (V781);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V786= vs_base[0];
	V787= list(3,VV[188],VV[58],V786);
	V784= list(2,VV[196],list(3,VV[55],/* INLINE-ARGS */V787,list(2,VV[4],(VV[153]->s.s_dbind))));
	goto T1386;
	goto T1391;
T1391:;
	if(!(type_of(V781)==t_cons)){
	goto T1396;}
	base[4]= (V781);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V788= vs_base[0];
	V789= list(2,VV[189],V788);
	V784= list(2,VV[196],list(3,VV[55],/* INLINE-ARGS */V789,list(2,VV[4],(VV[153]->s.s_dbind))));
	goto T1386;
	goto T1396;
T1396:;
	V784= (V782);
	goto T1386;
	goto T1388;
T1388:;
	base[4]= (V780);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V790= vs_base[0];
	V791 = (V782);
	{object V793;
	V793= ((V744))->v.v_self[fix((V780))];
	if(!(type_of((V793))==t_fixnum)){
	goto T1405;}
	V792= VV[192];
	goto T1402;
	goto T1405;
T1405:;
	if(!(type_of((V793))==t_cons)){
	goto T1408;}
	V792= VV[193];
	goto T1402;
	goto T1408;
T1408:;
	V792= VV[194];}
	goto T1402;
T1402:;
	V784= list(6,VV[197],VV[191],VV[58],V790,V791,V792);
	goto T1386;
T1386:;
	{register object V795;
	V795= make_cons(Cnil,Cnil);
	{register long V796;
	register long V797;
	V796= fix(CMPcadddr((V745)));
	V797= 0;
	goto T1415;
T1415:;
	if(!((V797)>=(V796))){
	goto T1416;}
	V794= CMPcar((V795));
	goto T1410;
	goto T1416;
T1416:;
	V798= (*(LnkLI307))((V742),base[0],(V744));
	V799 = (V795);
	(void)((*(LnkLI284))(/* INLINE-ARGS */V798,V799));
	V797= (long)(V797)+1;
	goto T1415;}}
	goto T1410;
T1410:;
	V800= listA(3,VV[54],V784,V794);
	{object V801 = make_cons(/* INLINE-ARGS */V800,Cnil);
	VMR55(V801)}}
	goto T1380;
T1380:;
	if((V749!= VV[146]))goto T1423;
	base[1]= CMPcadr((V745));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V802= vs_base[0];
	V803= list(3,VV[176],VV[93],V802);
	base[1]= CMPcaddr((V745));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V804= vs_base[0];
	{object V805 = list(4,VV[198],/* INLINE-ARGS */V803,VV[199],list(3,VV[176],VV[95],V804));
	VMR55(V805)}
	goto T1423;
T1423:;
	if((V749!= VV[305]))goto T1428;
	{object V806 = VV[200];
	VMR55(V806)}
	goto T1428;
T1428:;
	FEerror("The ECASE key value ~s is illegal.",1,V749);
	{object V807 = Cnil;
	VMR55(V807)}}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for IIS-BODY	*/

static void L62()
{register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V808=base[0]->c.c_cdr;
	base[2]= V808;}
	V810= listA(3,VV[205],VV[206],base[2]);
	base[3]= listA(3,VV[52],VV[204],append(VV[203],/* INLINE-ARGS */V810));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for FORM-LIST-TO-LISP	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	{object V811;
	object V812;
	check_arg(2);
	V811=(base[0]);
	V812=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V813;
	register object V814;
	register object V815;
	object V816;
	object V817;
	V813= make_cons((V812),Cnil);
	base[8]= CMPmake_fixnum((long)length((V812)));
	base[9]= small_fixnum(2);
	vs_top=(vs_base=base+8)+2;
	Lfloor();
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= VV[207];
	base[9]= small_fixnum(0);
	base[10]= VV[208];
	base[11]= Ct;
	vs_top=(vs_base=base+7)+5;
	(void) (*Lnk285)();
	vs_top=sup;
	V814= vs_base[0];
	V815= CMPcar((V811));
	{register object V818;
	V818= make_cons(Cnil,Cnil);
	goto T1442;
T1442:;
	if((CMPcar((V813)))!=Cnil){
	goto T1444;}
	V816= CMPcar((V818));
	goto T1439;
	goto T1444;
T1444:;
	V819= (*(LnkLI307))((V813),(V814),(V815));
	V820 = (V818);
	(void)((*(LnkLI284))(/* INLINE-ARGS */V819,V820));
	goto T1442;}
	goto T1439;
T1439:;
	V821 = CMPmake_fixnum((long)length((V814)));
	V817= list(2,VV[209],V821);
	V822= list(2,VV[212],list(3,VV[213],(V817),VV[202]));
	base[7]= list(4,VV[210],VV[211],/* INLINE-ARGS */V822,list(2,VV[170],list(5,VV[210],VV[214],VV[215],make_cons(VV[216],(V816)),VV[175])));
	V823 = (V811);
	base[9]= (V814);
	base[10]= (V817);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk308)();
	vs_top=sup;
	V824= vs_base[0];
	base[8]= list(2,V823,V824);
	vs_top=(vs_base=base+7)+2;
	return;}
	}
}
/*	local entry for function GET-MAKE-INSTANCE-FUNCTION-SYMBOL	*/

static object LI64(V826)

object V826;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	V827= make_cons((V826),Cnil);
	(void)((*(LnkLI7))(/* INLINE-ARGS */V827));
	{object V828 = (*(LnkLI75))((V826));
	VMR58(V828)}
	return Cnil;
}
/*	local function CONST	*/

static void L61(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_check;
	{object V829;
	check_arg(1);
	V829=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(type_of((V829))==t_fixnum||
type_of((V829))==t_bignum||
type_of((V829))==t_ratio||
type_of((V829))==t_shortfloat||
type_of((V829))==t_longfloat||
type_of((V829))==t_complex){
	goto T1455;}
	if(!(type_of((V829))==t_character)){
	goto T1456;}
	goto T1455;
T1455:;
	base[1]= (V829);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1456;
T1456:;
	if(!(type_of((V829))==t_symbol)){
	goto T1461;}
	base[1]= (V829);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1461;}
	base[1]= list(2,VV[4],(V829));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1461;
T1461:;
	base[1]= list(3,VV[201],VV[202],(*(LnkLI309))(base0[0],(V829)));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC71(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_check;
	{object V830;
	object V831;
	if(vs_top-vs_base<1) too_few_arguments();
	V830=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V831=(base[1]);
	vs_top=sup;
	{object V832;
	if(((base0[3]->c.c_car))==Cnil){
	goto T1468;}
	V832= (VFUN_NARGS=2,(*(LnkLI310))((base0[4]->c.c_car),(base0[3]->c.c_car)));
	goto T1466;
	goto T1468;
T1468:;
	V832= (V830);
	goto T1466;
T1466:;
	if(!(((V832))==((V830)))){
	goto T1470;}
	if(!((((((base0[2]->c.c_car))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1471;}
	goto T1470;
T1470:;
	base[2]= (V832);
	base[3]= (V831);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk124)();
	return;
	goto T1471;
T1471:;
	{register object V833;
	register object V834;
	{register object V835;
	V835= (base0[6]->c.c_car);
	if(!(type_of((V835))==t_cons)){
	goto T1479;}
	if(!((CMPcar((V835)))==(VV[130]))){
	goto T1479;}
	V833= (*(LnkLI111))(CMPcadr((V835)),CMPcaddr((V835)),Cnil,(V831));
	goto T1477;
	goto T1479;
T1479:;
	V833= (
	(type_of((V835)) == t_sfun ?(*(((V835))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V835))==t_vfun) ?
	(*(((V835))->sfn.sfn_self)):
	(fcall.fun=((V835)),fcalln))(Cnil,(V831)));}
	goto T1477;
T1477:;
	base[4]=VV[96]->s.s_gfdef;
	base[5]= (base0[7]->c.c_car);
	{object V836;
	V836= (V833);
	 vs_top=base+6;
	 while(V836!=Cnil)
	 {vs_push((V836)->c.c_car);V836=(V836)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk96)(Lclptr96);
	vs_top=sup;
	V834= vs_base[0];
	base[4]= (base0[0]->c.c_car);
	base[5]= VV[131];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1489;}
	(void)((
	V837 = STREF(object,(base0[0]->c.c_car),0),
	(type_of(V837) == t_sfun ?(*((V837)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V837)==t_vfun) ?
	(*((V837)->sfn.sfn_self)):
	(fcall.fun=(V837),fcalln))(STREF(object,(base0[0]->c.c_car),4),STREF(object,(base0[0]->c.c_car),8),(V834),(V833))));
	goto T1486;
	goto T1489;
T1489:;
	{register object V838;
	V838= (base0[0]->c.c_car);
	base[4]= (V838);
	base[5]= VV[132];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1494;}
	{object V839;
	object V840;
	register object V841;
	V839= STREF(object,(base0[0]->c.c_car),0);
	V840= make_cons((V834),(V833));
	V841= STREF(object,(base0[0]->c.c_car),4);
	if(((V841))==Cnil){
	goto T1502;}
	if((CMPcdr((V841)))!=Cnil){
	goto T1502;}
	(void)((
	(type_of((V839)) == t_sfun ?(*(((V839))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V839))==t_vfun) ?
	(*(((V839))->sfn.sfn_self)):
	(fcall.fun=((V839)),fcalln))((V840),CMPcar((V841)))));
	goto T1486;
	goto T1502;
T1502:;
	base[4]= (V839);
	base[5]= (V840);
	{object V842;
	V842= (V841);
	 vs_top=base+6;
	 while(V842!=Cnil)
	 {vs_push((V842)->c.c_car);V842=(V842)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1486;}
	goto T1494;
T1494:;
	base[4]= (V838);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1510;}
	base[4]= (base0[0]->c.c_car);
	base[5]= (V834);
	{object V843;
	V843= (V833);
	 vs_top=base+6;
	 while(V843!=Cnil)
	 {vs_push((V843)->c.c_car);V843=(V843)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1486;
	goto T1510;
T1510:;
	base[5]= VV[97];
	base[6]= (V838);
	base[7]= VV[144];
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk312)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;}
	goto T1486;
T1486:;
	base[4]= (V834);
	vs_top=(vs_base=base+4)+1;
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC70(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_check;
	{object V844;
	object V845;
	if(vs_top-vs_base<1) too_few_arguments();
	V844=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V845=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	base[3]= VV[131];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1522;}
	base[2]= STREF(object,(base0[0]->c.c_car),0);
	base[3]= STREF(object,(base0[0]->c.c_car),4);
	base[4]= STREF(object,(base0[0]->c.c_car),8);
	base[5]= (V844);
	base[6]= Ct;
	base[7]= (V845);
	vs_top=(vs_base=base+3)+5;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1522;
T1522:;
	{register object V846;
	V846= (base0[0]->c.c_car);
	base[2]= (V846);
	base[3]= VV[132];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1533;}
	{object V847;
	object V848;
	register object V849;
	V847= STREF(object,(base0[0]->c.c_car),0);
	V848= listA(3,(V844),Ct,(V845));
	V849= STREF(object,(base0[0]->c.c_car),4);
	if(((V849))==Cnil){
	goto T1541;}
	if((CMPcdr((V849)))!=Cnil){
	goto T1541;}
	base[2]= (V848);
	base[3]= CMPcar((V849));
	vs_top=(vs_base=base+2)+2;
	{object _funobj = (V847);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1541;
T1541:;
	base[2]= (V847);
	base[3]= (V848);
	{object V850;
	V850= (V849);
	 vs_top=base+4;
	 while(V850!=Cnil)
	 {vs_push((V850)->c.c_car);V850=(V850)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1533;
T1533:;
	base[2]= (V846);
	vs_top=(vs_base=base+2)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1551;}
	base[2]= (base0[0]->c.c_car);
	base[3]= (V844);
	base[4]= Ct;
	{object V851;
	V851= (V845);
	 vs_top=base+5;
	 while(V851!=Cnil)
	 {vs_push((V851)->c.c_car);V851=(V851)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1551;
T1551:;
	base[3]= VV[98];
	base[4]= (V846);
	base[5]= VV[143];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk312)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC69(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM62; VC62
	vs_check;
	{object V852;
	object V853;
	object V854;
	if(vs_top-vs_base<2) too_few_arguments();
	V852=(base[0]);
	V853=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V854=(base[2]);
	vs_top=sup;
	{register object V855;
	V855= (base0[3]->c.c_car);
	if(!(type_of((V855))==t_cons)){
	goto T1564;}
	if(!((CMPcar((V855)))==(VV[130]))){
	goto T1564;}
	(void)((*(LnkLI111))(CMPcadr((V855)),CMPcaddr((V855)),(V852),(V854)));
	goto T1562;
	goto T1564;
T1564:;
	(void)((
	(type_of((V855)) == t_sfun ?(*(((V855))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V855))==t_vfun) ?
	(*(((V855))->sfn.sfn_self)):
	(fcall.fun=((V855)),fcalln))((V852),(V854))));}
	goto T1562;
T1562:;
	base[3]= (V852);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC68(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_check;
	{object V856;
	object V857;
	if(vs_top-vs_base<1) too_few_arguments();
	V856=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V857=(base[1]);
	vs_top=sup;
	{object V858;
	if(((base0[6]->c.c_car))==Cnil){
	goto T1570;}
	V858= (VFUN_NARGS=2,(*(LnkLI310))((base0[7]->c.c_car),(base0[6]->c.c_car)));
	goto T1568;
	goto T1570;
T1570:;
	V858= (V856);
	goto T1568;
T1568:;
	if(!(((V858))==((V856)))){
	goto T1572;}
	if(!((((((base0[5]->c.c_car))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1573;}
	goto T1572;
T1572:;
	base[2]= (V858);
	base[3]= (V857);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk124)();
	return;
	goto T1573;
T1573:;
	{register object V859;
	object V860;
	V859= (
	(type_of((base0[4]->c.c_car)) == t_sfun ?(*(((base0[4]->c.c_car))->sfn.sfn_self)):
	(fcall.argd=2,type_of((base0[4]->c.c_car))==t_vfun) ?
	(*(((base0[4]->c.c_car))->sfn.sfn_self)):
	(fcall.fun=((base0[4]->c.c_car)),fcalln))((base0[5]->c.c_car),(base0[0]->c.c_car)));
	{object V861;
	V861= (base0[1]->c.c_car);
	if(!(type_of((V861))==t_cons)){
	goto T1582;}
	if(!((CMPcar((V861)))==(VV[130]))){
	goto T1582;}
	V860= (*(LnkLI111))(CMPcadr((V861)),CMPcaddr((V861)),(V859),(V857));
	goto T1580;
	goto T1582;
T1582:;
	V860= (
	(type_of((V861)) == t_sfun ?(*(((V861))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V861))==t_vfun) ?
	(*(((V861))->sfn.sfn_self)):
	(fcall.fun=((V861)),fcalln))((V859),(V857)));}
	goto T1580;
T1580:;
	{object V862;
	register object V863;
	V862= (base0[3]->c.c_car);
	V863= CMPcar((V862));
	goto T1590;
T1590:;
	if(!(((V862))==Cnil)){
	goto T1591;}
	goto T1586;
	goto T1591;
T1591:;
	base[5]= (V863);
	base[6]= VV[131];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1598;}
	(void)((
	V864 = STREF(object,(V863),0),
	(type_of(V864) == t_sfun ?(*((V864)->sfn.sfn_self)):
	(fcall.argd=5,type_of(V864)==t_vfun) ?
	(*((V864)->sfn.sfn_self)):
	(fcall.fun=(V864),fcalln))(STREF(object,(V863),4),STREF(object,(V863),8),(V859),Ct,(V860))));
	goto T1595;
	goto T1598;
T1598:;
	base[5]= V863;
	base[6]= VV[132];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1603;}
	{object V866;
	object V867;
	object V868;
	V866= STREF(object,(V863),0);
	V867= listA(3,(V859),Ct,(V860));
	V868= STREF(object,(V863),4);
	if(((V868))==Cnil){
	goto T1611;}
	if((CMPcdr((V868)))!=Cnil){
	goto T1611;}
	(void)((
	(type_of((V866)) == t_sfun ?(*(((V866))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V866))==t_vfun) ?
	(*(((V866))->sfn.sfn_self)):
	(fcall.fun=((V866)),fcalln))((V867),CMPcar((V868)))));
	goto T1595;
	goto T1611;
T1611:;
	base[5]= (V866);
	base[6]= (V867);
	{object V869;
	V869= (V868);
	 vs_top=base+7;
	 while(V869!=Cnil)
	 {vs_push((V869)->c.c_car);V869=(V869)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1595;}
	goto T1603;
T1603:;
	base[5]= V863;
	vs_top=(vs_base=base+5)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1619;}
	base[5]= (V863);
	base[6]= (V859);
	base[7]= Ct;
	{object V870;
	V870= (V860);
	 vs_top=base+8;
	 while(V870!=Cnil)
	 {vs_push((V870)->c.c_car);V870=(V870)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1595;
	goto T1619;
T1619:;
	base[6]= VV[133];
	base[7]= V863;
	base[8]= VV[136];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk312)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	goto T1595;
T1595:;
	V862= CMPcdr((V862));
	V863= CMPcar((V862));
	goto T1590;}
	goto T1586;
T1586:;
	{object V871;
	register object V872;
	V871= (base0[2]->c.c_car);
	V872= CMPcar((V871));
	goto T1639;
T1639:;
	if(!(((V871))==Cnil)){
	goto T1640;}
	goto T1635;
	goto T1640;
T1640:;
	base[5]= (V872);
	base[6]= VV[131];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1647;}
	(void)((
	V873 = STREF(object,(V872),0),
	(type_of(V873) == t_sfun ?(*((V873)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V873)==t_vfun) ?
	(*((V873)->sfn.sfn_self)):
	(fcall.fun=(V873),fcalln))(STREF(object,(V872),4),STREF(object,(V872),8),(V859),(V860))));
	goto T1644;
	goto T1647;
T1647:;
	base[5]= V872;
	base[6]= VV[132];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1652;}
	{object V875;
	object V876;
	object V877;
	V875= STREF(object,(V872),0);
	V876= make_cons((V859),(V860));
	V877= STREF(object,(V872),4);
	if(((V877))==Cnil){
	goto T1660;}
	if((CMPcdr((V877)))!=Cnil){
	goto T1660;}
	(void)((
	(type_of((V875)) == t_sfun ?(*(((V875))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V875))==t_vfun) ?
	(*(((V875))->sfn.sfn_self)):
	(fcall.fun=((V875)),fcalln))((V876),CMPcar((V877)))));
	goto T1644;
	goto T1660;
T1660:;
	base[5]= (V875);
	base[6]= (V876);
	{object V878;
	V878= (V877);
	 vs_top=base+7;
	 while(V878!=Cnil)
	 {vs_push((V878)->c.c_car);V878=(V878)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1644;}
	goto T1652;
T1652:;
	base[5]= V872;
	vs_top=(vs_base=base+5)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1668;}
	base[5]= (V872);
	base[6]= (V859);
	{object V879;
	V879= (V860);
	 vs_top=base+7;
	 while(V879!=Cnil)
	 {vs_push((V879)->c.c_car);V879=(V879)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1644;
	goto T1668;
T1668:;
	base[6]= VV[133];
	base[7]= V872;
	base[8]= VV[137];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk312)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	goto T1644;
T1644:;
	V871= CMPcdr((V871));
	V872= CMPcar((V871));
	goto T1639;}
	goto T1635;
T1635:;
	base[4]= (V859);
	vs_top=(vs_base=base+4)+1;
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC67(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM64; VC64
	vs_check;
	{object V880;
	register object V881;
	if(vs_top-vs_base<1) too_few_arguments();
	V880=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V881=(base[1]);
	vs_top=sup;
	{object V882;
	if(((base0[6]->c.c_car))==Cnil){
	goto T1685;}
	V882= (VFUN_NARGS=2,(*(LnkLI310))((base0[7]->c.c_car),(base0[6]->c.c_car)));
	goto T1683;
	goto T1685;
T1685:;
	V882= (V880);
	goto T1683;
T1683:;
	if(!(((V882))==((V880)))){
	goto T1687;}
	if(!((((((base0[5]->c.c_car))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1688;}
	goto T1687;
T1687:;
	base[2]= (V882);
	base[3]= (V881);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk124)();
	return;
	goto T1688;
T1688:;
	{register object V883;
	{object V884;
	V884= (*(LnkLI313))();
	V885 = (V884);
	V886 = (base0[5]->c.c_car);
	V887= Ct;
	STSET(object,V885,0, V886);
	(void)(V886);
	V888 = (V884);
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	Lcopy_seq();
	vs_top=sup;
	V889= vs_base[0];
	V890= Ct;
	STSET(object,V888,4, V889);
	(void)(V889);
	V883= (V884);}
	{object V891;
	V891= (base0[1]->c.c_car);
	if(!(type_of((V891))==t_cons)){
	goto T1702;}
	if(!((CMPcar((V891)))==(VV[130]))){
	goto T1702;}
	(void)((*(LnkLI111))(CMPcadr((V891)),CMPcaddr((V891)),(V883),(V881)));
	goto T1700;
	goto T1702;
T1702:;
	(void)((
	(type_of((V891)) == t_sfun ?(*(((V891))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V891))==t_vfun) ?
	(*(((V891))->sfn.sfn_self)):
	(fcall.fun=((V891)),fcalln))((V883),(V881))));}
	goto T1700;
T1700:;
	{object V892;
	register object V893;
	V892= (base0[3]->c.c_car);
	V893= CMPcar((V892));
	goto T1710;
T1710:;
	if(!(((V892))==Cnil)){
	goto T1711;}
	goto T1706;
	goto T1711;
T1711:;
	base[3]= (V893);
	base[4]= VV[131];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1718;}
	(void)((
	V894 = STREF(object,(V893),0),
	(type_of(V894) == t_sfun ?(*((V894)->sfn.sfn_self)):
	(fcall.argd=5,type_of(V894)==t_vfun) ?
	(*((V894)->sfn.sfn_self)):
	(fcall.fun=(V894),fcalln))(STREF(object,(V893),4),STREF(object,(V893),8),(V883),Ct,(V881))));
	goto T1715;
	goto T1718;
T1718:;
	base[3]= V893;
	base[4]= VV[132];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1723;}
	{object V896;
	object V897;
	object V898;
	V896= STREF(object,(V893),0);
	V897= listA(3,(V883),Ct,(V881));
	V898= STREF(object,(V893),4);
	if(((V898))==Cnil){
	goto T1731;}
	if((CMPcdr((V898)))!=Cnil){
	goto T1731;}
	(void)((
	(type_of((V896)) == t_sfun ?(*(((V896))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V896))==t_vfun) ?
	(*(((V896))->sfn.sfn_self)):
	(fcall.fun=((V896)),fcalln))((V897),CMPcar((V898)))));
	goto T1715;
	goto T1731;
T1731:;
	base[3]= (V896);
	base[4]= (V897);
	{object V899;
	V899= (V898);
	 vs_top=base+5;
	 while(V899!=Cnil)
	 {vs_push((V899)->c.c_car);V899=(V899)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1715;}
	goto T1723;
T1723:;
	base[3]= V893;
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1739;}
	base[3]= (V893);
	base[4]= (V883);
	base[5]= Ct;
	{object V900;
	V900= (V881);
	 vs_top=base+6;
	 while(V900!=Cnil)
	 {vs_push((V900)->c.c_car);V900=(V900)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1715;
	goto T1739;
T1739:;
	base[4]= VV[133];
	base[5]= V893;
	base[6]= VV[134];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk312)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T1715;
T1715:;
	V892= CMPcdr((V892));
	V893= CMPcar((V892));
	goto T1710;}
	goto T1706;
T1706:;
	{object V901;
	register object V902;
	V901= (base0[2]->c.c_car);
	V902= CMPcar((V901));
	goto T1759;
T1759:;
	if(!(((V901))==Cnil)){
	goto T1760;}
	goto T1755;
	goto T1760;
T1760:;
	base[3]= (V902);
	base[4]= VV[131];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1767;}
	(void)((
	V903 = STREF(object,(V902),0),
	(type_of(V903) == t_sfun ?(*((V903)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V903)==t_vfun) ?
	(*((V903)->sfn.sfn_self)):
	(fcall.fun=(V903),fcalln))(STREF(object,(V902),4),STREF(object,(V902),8),(V883),(V881))));
	goto T1764;
	goto T1767;
T1767:;
	base[3]= V902;
	base[4]= VV[132];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk311)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1772;}
	{object V905;
	object V906;
	object V907;
	V905= STREF(object,(V902),0);
	V906= make_cons((V883),(V881));
	V907= STREF(object,(V902),4);
	if(((V907))==Cnil){
	goto T1780;}
	if((CMPcdr((V907)))!=Cnil){
	goto T1780;}
	(void)((
	(type_of((V905)) == t_sfun ?(*(((V905))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V905))==t_vfun) ?
	(*(((V905))->sfn.sfn_self)):
	(fcall.fun=((V905)),fcalln))((V906),CMPcar((V907)))));
	goto T1764;
	goto T1780;
T1780:;
	base[3]= (V905);
	base[4]= (V906);
	{object V908;
	V908= (V907);
	 vs_top=base+5;
	 while(V908!=Cnil)
	 {vs_push((V908)->c.c_car);V908=(V908)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1764;}
	goto T1772;
T1772:;
	base[3]= V902;
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1788;}
	base[3]= (V902);
	base[4]= (V883);
	{object V909;
	V909= (V881);
	 vs_top=base+5;
	 while(V909!=Cnil)
	 {vs_push((V909)->c.c_car);V909=(V909)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1764;
	goto T1788;
T1788:;
	base[4]= VV[133];
	base[5]= V902;
	base[6]= VV[135];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk312)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T1764;
T1764:;
	V901= CMPcdr((V901));
	V902= CMPcar((V901));
	goto T1759;}
	goto T1755;
T1755:;
	base[2]= (V883);
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	local function CHECK-METH	*/

static void LC34(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_check;
	{object V910;
	check_arg(1);
	V910=(base[0]);
	vs_top=sup;
	{register object V911;
	base[1]= (V910);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk269)(Lclptr269);
	vs_top=sup;
	V911= vs_base[0];
	if(((V911))!=Cnil){
	goto T1806;}
	base[1]= (V910);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk261)(Lclptr261);
	vs_top=sup;
	V912= vs_base[0];
	base[1]= ((CMPcar(V912))==((VV[1]->s.s_dbind))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1806;
T1806:;
	if((CMPcdr((V911)))==Cnil){
	goto T1810;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1810;
T1810:;
	if(!((CMPcar((V911)))==(VV[106]))){
	goto T1812;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1812;
T1812:;
	base[1]= ((CMPcar((V911)))==(VV[107])?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC66(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM66; VC66
	vs_check;
	{object V913;
	object V914;
	if(vs_top-vs_base<1) too_few_arguments();
	V913=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V914=(base[1]);
	vs_top=sup;
	base[2]=VV[314]->s.s_gfdef;
	base[3]= (base0[0]->c.c_car);
	base[4]= (V913);
	{object V915;
	V915= (V914);
	 vs_top=base+5;
	 while(V915!=Cnil)
	 {vs_push((V915)->c.c_car);V915=(V915)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk314)(Lclptr314);
	return;
	}
}
/*	local function COMPUTE-VALID-P	*/

static void L32(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_check;
	{object V916;
	check_arg(1);
	V916=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((((base0[3])==Cnil?Ct:Cnil))==Cnil)){
	goto T1817;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1817;
T1817:;
	{register object V917;
	object V918;
	base[1]= base0[1];
	base[2]= (V916);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk315)();
	if(vs_base>=vs_top){vs_top=sup;goto T1822;}
	V917= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1823;}
	V918= vs_base[0];
	vs_top=sup;
	goto T1824;
	goto T1822;
T1822:;
	V917= Cnil;
	goto T1823;
T1823:;
	V918= Cnil;
	goto T1824;
T1824:;
	if(!(((((V918))==Cnil?Ct:Cnil))==Cnil)){
	goto T1825;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1825;
T1825:;
	{register object V919;
	register object V920;
	V919= base0[2];
	V920= CMPcar((V919));
	goto T1830;
T1830:;
	if(!(((V919))==Cnil)){
	goto T1831;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1831;
T1831:;
	{register object x= (V920),V921= (V917);
	while(V921!=Cnil)
	if(eql(x,V921->c.c_car)){
	goto T1835;
	}else V921=V921->c.c_cdr;}
	base[2]= make_cons(VV[100],(V920));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1835;
T1835:;
	V919= CMPcdr((V919));
	V920= CMPcar((V919));
	goto T1830;}}
	}
}
/*	local function CLOSURE	*/

static void LC65(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_check;
	{register object V922;
	object V923;
	object V924;
	check_arg(3);
	V922=(base[0]);
	V923=(base[1]);
	V924=(base[2]);
	vs_top=sup;{object V925;
	if(((V923))==(VV[8])){
	goto T1845;}
	V925= Cnil;
	goto T1844;
	goto T1845;
T1845:;
	if(type_of((V922))==t_cons){
	goto T1847;}
	V925= Cnil;
	goto T1844;
	goto T1847;
T1847:;
	if((CMPcar((V922)))==(VV[9])){
	goto T1849;}
	V925= Cnil;
	goto T1844;
	goto T1849;
T1849:;
	V925= (*(LnkLI316))((V922));
	goto T1844;
T1844:;
	if(V925==Cnil)goto T1843;
	base[3]= V925;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T1843;
T1843:;}
	base[3]= (V922);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
static object  LnkTLI316(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[316],(void **)(void *)&LnkLI316,1,first,ap);va_end(ap);return V1;} /* EXPAND-MAKE-INSTANCE-FORM */
static void LnkT315(){ call_or_link(VV[315],(void **)(void *)&Lnk315);} /* CHECK-INITARGS-VALUES */
static void LnkT314(ptr) object *ptr;{ call_or_link_closure(VV[314],(void **)(void *)&Lnk314,(void **)(void *)&Lclptr314);} /* NO-APPLICABLE-METHOD */
static object  LnkTLI313(){return call_proc0(VV[313],(void **)(void *)&LnkLI313);} /* %%ALLOCATE-INSTANCE--CLASS */
static void LnkT312(){ call_or_link(VV[312],(void **)(void *)&Lnk312);} /* TYPECASE-ERROR-STRING */
static void LnkT311(){ call_or_link(VV[311],(void **)(void *)&Lnk311);} /* STRUCTURE-SUBTYPE-P */
static void LnkT96(ptr) object *ptr;{ call_or_link_closure(VV[96],(void **)(void *)&Lnk96,(void **)(void *)&Lclptr96);} /* ALLOCATE-INSTANCE */
static object  LnkTLI111(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[111],(void **)(void *)&LnkLI111,4,first,ap);va_end(ap);return V1;} /* INITIALIZE-INSTANCE-SIMPLE */
static void LnkT124(){ call_or_link(VV[124],(void **)(void *)&Lnk124);} /* MAKE-INSTANCE-FUNCTION-TRAP */
static object  LnkTLI310(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[310],(void **)(void *)&LnkLI310,first,ap);va_end(ap);return V1;} /* FIND-CLASS-FROM-CELL */
static object  LnkTLI309(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[309],(void **)(void *)&LnkLI309,2,first,ap);va_end(ap);return V1;} /* ADD-TO-CVECTOR */
static object  LnkTLI7(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[7],(void **)(void *)&LnkLI7,1,first,ap);va_end(ap);return V1;} /* GET-MAKE-INSTANCE-FUNCTIONS */
static void LnkT308(){ call_or_link(VV[308],(void **)(void *)&Lnk308);} /* COERCE */
static object  LnkTLI307(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[307],(void **)(void *)&LnkLI307,3,first,ap);va_end(ap);return V1;} /* FIRST-FORM-TO-LISP */
static void LnkT306(){ call_or_link(VV[306],(void **)(void *)&Lnk306);} /* VECTOR-PUSH-EXTEND */
static void LnkT195(ptr) object *ptr;{ call_or_link_closure(VV[195],(void **)(void *)&Lnk195,(void **)(void *)&Lclptr195);} /* SLOT-BOUNDP-USING-CLASS */
static void LnkT304(ptr) object *ptr;{ call_or_link_closure(VV[304],(void **)(void *)&Lnk304,(void **)(void *)&Lclptr304);} /* SETF PCL SLOT-VALUE-USING-CLASS */
static object  LnkTLI303(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[303],(void **)(void *)&LnkLI303,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI302(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[302],(void **)(void *)&LnkLI302,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT301(){ call_or_link(VV[301],(void **)(void *)&Lnk301);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT300(){ call_or_link(VV[300],(void **)(void *)&Lnk300);} /* UPDATE-MAKE-INSTANCE-FUNCTION-TABLE */
static object  LnkTLI299(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[299],(void **)(void *)&LnkLI299,3,first,ap);va_end(ap);return V1;} /* MAKE-TOP-LEVEL-FORM */
static void LnkT298(){ call_or_link(VV[298],(void **)(void *)&Lnk298);} /* COMPILE-LAMBDA */
static void LnkT297(){ call_or_link(VV[297],(void **)(void *)&Lnk297);} /* UNION */
static void LnkT296(){ call_or_link(VV[296],(void **)(void *)&Lnk296);} /* FORM-LIST-TO-LISP */
static object  LnkTLI295(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[295],(void **)(void *)&LnkLI295,1,first,ap);va_end(ap);return V1;} /* GET-PV-CELL-FOR-CLASS */
static object  LnkTLI294(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[294],(void **)(void *)&LnkLI294,2,first,ap);va_end(ap);return V1;} /* PV-TABLE-LOOKUP */
static object  LnkTLI293(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[293],(void **)(void *)&LnkLI293,first,ap);va_end(ap);return V1;} /* INTERN-PV-TABLE */
static void LnkT292(ptr) object *ptr;{ call_or_link_closure(VV[292],(void **)(void *)&Lnk292,(void **)(void *)&Lclptr292);} /* SLOT-DEFINITION-LOCATION */
static void LnkT291(ptr) object *ptr;{ call_or_link_closure(VV[291],(void **)(void *)&Lnk291,(void **)(void *)&Lclptr291);} /* SLOT-DEFINITION-INITFUNCTION */
static void LnkT290(ptr) object *ptr;{ call_or_link_closure(VV[290],(void **)(void *)&Lnk290,(void **)(void *)&Lclptr290);} /* SLOT-DEFINITION-INITFORM */
static void LnkT289(){ call_or_link(VV[289],(void **)(void *)&Lnk289);} /* STABLE-SORT */
static void LnkT287(){ call_or_link(VV[287],(void **)(void *)&Lnk287);} /* POSITION */
static void LnkT286(ptr) object *ptr;{ call_or_link_closure(VV[286],(void **)(void *)&Lnk286,(void **)(void *)&Lclptr286);} /* SLOT-DEFINITION-NAME */
static void LnkT285(){ call_or_link(VV[285],(void **)(void *)&Lnk285);} /* MAKE-ARRAY */
static object  LnkTLI284(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[284],(void **)(void *)&LnkLI284,2,first,ap);va_end(ap);return V1;} /* ADD-FORMS */
static void LnkT283(ptr) object *ptr;{ call_or_link_closure(VV[283],(void **)(void *)&Lnk283,(void **)(void *)&Lclptr283);} /* SLOT-DEFINITION-INITARGS */
static void LnkT282(ptr) object *ptr;{ call_or_link_closure(VV[282],(void **)(void *)&Lnk282,(void **)(void *)&Lclptr282);} /* CLASS-SLOTS */
static void LnkT281(ptr) object *ptr;{ call_or_link_closure(VV[281],(void **)(void *)&Lnk281,(void **)(void *)&Lclptr281);} /* CLASS-DEFAULT-INITARGS */
static void LnkT280(){ call_or_link(VV[280],(void **)(void *)&Lnk280);} /* GET-SECONDARY-DISPATCH-FUNCTION */
static void LnkT279(){ call_or_link(VV[279],(void **)(void *)&Lnk279);} /* GET-COMPLEX-INITIALIZATION-FUNCTIONS */
static void LnkT278(){ call_or_link(VV[278],(void **)(void *)&Lnk278);} /* GET-SIMPLE-INITIALIZATION-FUNCTION */
static void LnkT277(){ call_or_link(VV[277],(void **)(void *)&Lnk277);} /* MAKE-EFFECTIVE-METHOD-FUNCTION */
static void LnkT276(){ call_or_link(VV[276],(void **)(void *)&Lnk276);} /* REMOVE */
static void LnkT274(ptr) object *ptr;{ call_or_link_closure(VV[274],(void **)(void *)&Lnk274,(void **)(void *)&Lclptr274);} /* FUNCALLABLE-STANDARD-CLASS-P */
static void LnkT272(ptr) object *ptr;{ call_or_link_closure(VV[272],(void **)(void *)&Lnk272,(void **)(void *)&Lclptr272);} /* STANDARD-CLASS-P */
static void LnkT270(ptr) object *ptr;{ call_or_link_closure(VV[270],(void **)(void *)&Lnk270,(void **)(void *)&Lclptr270);} /* STRUCTURE-CLASS-P */
static void LnkT269(ptr) object *ptr;{ call_or_link_closure(VV[269],(void **)(void *)&Lnk269,(void **)(void *)&Lclptr269);} /* METHOD-QUALIFIERS */
static object  LnkTLI268(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[268],(void **)(void *)&LnkLI268,5,first,ap);va_end(ap);return V1;} /* MAKE-INSTANCE-FUNCTION-SIMPLE */
static object  LnkTLI267(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[267],(void **)(void *)&LnkLI267,5,first,ap);va_end(ap);return V1;} /* MAKE-INSTANCE-FUNCTION-COMPLEX */
static void LnkT266(){ call_or_link(VV[266],(void **)(void *)&Lnk266);} /* SOME */
static object  LnkTLI264(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[264],(void **)(void *)&LnkLI264,first,ap);va_end(ap);return V1;} /* CHECK-INITARGS-1 */
static void LnkT104(ptr) object *ptr;{ call_or_link_closure(VV[104],(void **)(void *)&Lnk104,(void **)(void *)&Lclptr104);} /* DEFAULT-INITARGS */
static object  LnkTLI263(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[263],(void **)(void *)&LnkLI263,5,first,ap);va_end(ap);return V1;} /* GET-MAKE-INSTANCE-FUNCTION-INTERNAL */
static void LnkT262(){ call_or_link(VV[262],(void **)(void *)&Lnk262);} /* EVERY */
static void LnkT261(ptr) object *ptr;{ call_or_link_closure(VV[261],(void **)(void *)&Lnk261,(void **)(void *)&Lclptr261);} /* METHOD-SPECIALIZERS */
static object  LnkTLI260(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[260],(void **)(void *)&LnkLI260,2,first,ap);va_end(ap);return V1;} /* FIND-STANDARD-II-METHOD */
static void LnkT259(ptr) object *ptr;{ call_or_link_closure(VV[259],(void **)(void *)&Lnk259,(void **)(void *)&Lclptr259);} /* COMPUTE-APPLICABLE-METHODS */
static object  LnkTLI258(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[258],(void **)(void *)&LnkLI258,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static void LnkT257(ptr) object *ptr;{ call_or_link_closure(VV[257],(void **)(void *)&Lnk257,(void **)(void *)&Lclptr257);} /* FINALIZE-INHERITANCE */
static void LnkT256(ptr) object *ptr;{ call_or_link_closure(VV[256],(void **)(void *)&Lnk256,(void **)(void *)&Lclptr256);} /* CLASS-FINALIZED-P */
static object  LnkTLI254(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[254],(void **)(void *)&LnkLI254,2,first,ap);va_end(ap);return V1;} /* SETF PCL GDEFINITION */
static object  LnkTLI253(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[253],(void **)(void *)&LnkLI253,1,first,ap);va_end(ap);return V1;} /* GET-MAKE-INSTANCE-FUNCTION */
static void LnkT252(){ call_or_link(VV[252],(void **)(void *)&Lnk252);} /* MAKE-SHARED-INITIALIZE-FORM-LIST */
static void LnkT251(ptr) object *ptr;{ call_or_link_closure(VV[251],(void **)(void *)&Lnk251,(void **)(void *)&Lclptr251);} /* CLASS-PROTOTYPE */
static void LnkT250(){ call_or_link(VV[250],(void **)(void *)&Lnk250);} /* INITIALIZE-INSTANCE-SIMPLE-FUNCTION */
static void LnkT249(){ call_or_link(VV[249],(void **)(void *)&Lnk249);} /* MAKE-DEFAULT-INITARGS-FORM-LIST */
static object  LnkTLI248(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[248],(void **)(void *)&LnkLI248,first,ap);va_end(ap);return V1;} /* MAKE-INITIALIZE-INFO */
static void LnkT247(ptr) object *ptr;{ call_or_link_closure(VV[247],(void **)(void *)&Lnk247,(void **)(void *)&Lclptr247);} /* SETF PCL CLASS-INITIALIZE-INFO */
static object  LnkTLI246(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[246],(void **)(void *)&LnkLI246,1,first,ap);va_end(ap);return V1;} /* RESET-INITIALIZE-INFO */
static void LnkT245(ptr) object *ptr;{ call_or_link_closure(VV[245],(void **)(void *)&Lnk245,(void **)(void *)&Lclptr245);} /* CLASS-INITIALIZE-INFO */
static object  LnkTLI244(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[244],(void **)(void *)&LnkLI244,1,first,ap);va_end(ap);return V1;} /* RESET-CLASS-INITIALIZE-INFO-1 */
static object  LnkTLI50(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[50],(void **)(void *)&LnkLI50,1,first,ap);va_end(ap);return V1;} /* INITIALIZE-INFO-BOUND-SLOTS */
static void LnkT243(ptr) object *ptr;{ call_or_link_closure(VV[243],(void **)(void *)&Lnk243,(void **)(void *)&Lclptr243);} /* CLASS-WRAPPER */
static void LnkT9(ptr) object *ptr;{ call_or_link_closure(VV[9],(void **)(void *)&Lnk9,(void **)(void *)&Lclptr9);} /* MAKE-INSTANCE */
static void LnkT229(ptr) object *ptr;{ call_or_link_closure(VV[229],(void **)(void *)&Lnk229,(void **)(void *)&Lclptr229);} /* CLASS-NAME */
static void LnkT228(ptr) object *ptr;{ call_or_link_closure(VV[228],(void **)(void *)&Lnk228,(void **)(void *)&Lclptr228);} /* CLASSP */
static object  LnkTLI39(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[39],(void **)(void *)&LnkLI39,first,ap);va_end(ap);return V1;} /* INITIALIZE-INFO */
static object  LnkTLI61(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[61],(void **)(void *)&LnkLI61,2,first,ap);va_end(ap);return V1;} /* UPDATE-INITIALIZE-INFO-INTERNAL */
static void LnkT227(ptr) object *ptr;{ call_or_link_closure(VV[227],(void **)(void *)&Lnk227,(void **)(void *)&Lclptr227);} /* FORWARD-REFERENCED-CLASS-P */
static void LnkT226(){ call_or_link(VV[226],(void **)(void *)&Lnk226);} /* FIND */
static object  LnkTLI224(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[224],(void **)(void *)&LnkLI224,first,ap);va_end(ap);return V1;} /* FIND-CLASS-CELL */
static void LnkT223(){ call_or_link(VV[223],(void **)(void *)&Lnk223);} /* WALK-FORM */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[75],(void **)(void *)&LnkLI75,1,first,ap);va_end(ap);return V1;} /* MAKE-INSTANCE-FUNCTION-SYMBOL */
static object  LnkTLI221(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[221],(void **)(void *)&LnkLI221,1,first,ap);va_end(ap);return V1;} /* CONSTANT-SYMBOL-P */
static void LnkT220(){ call_or_link(VV[220],(void **)(void *)&Lnk220);} /* MAP-ALL-CLASSES */
static void LnkT218(ptr) object *ptr;{ call_or_link_closure(VV[218],(void **)(void *)&Lnk218,(void **)(void *)&Lclptr218);} /* CLASS-PRECEDENCE-LIST */
static object  LnkTLI217(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[217],(void **)(void *)&LnkLI217,first,ap);va_end(ap);return V1;} /* FIND-CLASS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

