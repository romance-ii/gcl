
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
	{object V243;
	V243= make_cons(Cnil,Cnil);
	V244= ({object _tmp=get(VV[245],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[245])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[245])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V245 = (V243);
	V246 = V234;
	V240= (
	V247 = V244,
	(type_of(V247) == t_sfun ?(*((V247)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V247)==t_vfun) ?
	(*((V247)->sfn.sfn_self)):
	(fcall.fun=(V247),fcalln))(V245,V246));}
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
	{register object V248;
	register object V249;
	{object V250;
	V250= CMPcar((V239));
	V239= CMPcdr((V239));
	V248= (V250);}
	V249= (V240);
	if(((V236))==Cnil){
	goto T338;}
	if(!(((V248))==(VV[2]))){
	goto T342;}
	{object V251;
	V251= CMPcar((V239));
	V239= CMPcdr((V239));
	V237= (V251);}
	goto T338;
	goto T342;
T342:;
	{object V252;
	V252= CMPcar((V239));
	V239= CMPcdr((V239));}
	goto T338;
T338:;
	goto T352;
T352:;
	{register object V253;
	V253= CMPcdr((V249));
	if(((V253))!=Cnil){
	goto T355;}
	V240= make_cons(Cnil,Cnil);
	{object V255;
	V256= make_cons((V248),(V240));
	V255= make_cons(/* INLINE-ARGS */V256,Cnil);
	(V249)->c.c_cdr = (V255);}
	goto T330;
	goto T355;
T355:;
	if(!(eql((V248),CMPcaar((V253))))){
	goto T363;}
	V240= CMPcdar((V253));
	goto T330;
	goto T363;
T363:;
	V249= (V253);}
	goto T352;}
	goto T330;
T330:;
	goto T329;
	goto T327;
T327:;{object V257;
	V257= CMPcar((V240));
	if(V257==Cnil)goto T372;
	V238= V257;
	goto T371;
	goto T372;
T372:;}
	{object V259;
	V259= (VFUN_NARGS=0,(*(LnkLI247))());
	(V240)->c.c_car = (V259);
	V238= (V259);}
	goto T371;
T371:;}
	goto T314;
T314:;
	{object V260;
	V260= STREF(object,(V238),4);
	V261 = (V260);
	base[0]= (V234);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	V262= vs_base[0];
	if((V261)==(V262)){
	goto T376;}
	if(((V260))!=Cnil){
	goto T382;}
	{register object V263;
	object V264;
	object V265;
	V263= (V235);
	V264= make_cons(Cnil,Cnil);
	V265= (V264);
	goto T390;
T390:;
	if(((V263))!=Cnil){
	goto T392;}
	goto T388;
	goto T392;
T392:;
	{object V266;
	{object V267;
	V267= CMPcar((V263));
	V263= CMPcdr((V263));
	V266= (V267);}
	{object V269;
	V269= make_cons((V266),Cnil);
	(V265)->c.c_cdr = (V269);}}
	V265= CMPcdr((V265));
	if(((V236))==Cnil){
	goto T391;}
	{object V270;
	V270= CMPcar((V263));
	V263= CMPcdr((V263));}
	goto T391;
T391:;
	goto T390;
	goto T388;
T388:;
	V271 = (V238);
	V272= list(3,(V234),CMPcdr((V264)),(V237));
	V273= Ct;
	STSET(object,V271,0, /* INLINE-ARGS */V272);
	(void)(/* INLINE-ARGS */V272);}
	goto T382;
T382:;
	(void)((*(LnkLI246))((V238)));}
	goto T376;
T376:;
	(VV[93]->s.s_dbind)= (V234);
	(VV[94]->s.s_dbind)= (V235);
	(VV[95]->s.s_dbind)= (V238);
	{object V274 = (V238);
	VMR30(V274)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function UPDATE-INITIALIZE-INFO-INTERNAL	*/

static object LI31(V277,V278)

register object V277;object V278;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{register object V279;
	V279= STREF(object,(V277),0);
	base[1]= CMPcar((V279));
	base[2]= CMPcadr((V279));
	base[3]= CMPcaddr((V279));
	{object V280= (V278);
	if((V280!= VV[67])
	&& (V280!= VV[69]))goto T421;
	{object V281;
	object V282;
	base[4]= base[1];
	base[5]= base[2];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk248)();
	if(vs_base>=vs_top){vs_top=sup;goto T425;}
	V281= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T426;}
	V282= vs_base[0];
	vs_top=sup;
	goto T427;
	goto T425;
T425:;
	V281= Cnil;
	goto T426;
T426:;
	V282= Cnil;
	goto T427;
T427:;
	V283 = (V277);
	V284 = (V281);
	V285= Ct;
	STSET(object,V283,16, V284);
	(void)(V284);
	V286 = (V277);
	V287 = (V282);
	V288= Ct;
	STSET(object,V286,24, V287);
	(void)(V287);
	goto T416;}
	goto T421;
T421:;
	if((V280!= VV[68]))goto T429;
	{object V289;
	object V290;
	base[4]= base[1];
	base[5]= base[2];
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk248)();
	if(vs_base>=vs_top){vs_top=sup;goto T434;}
	V289= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T435;}
	V290= vs_base[0];
	vs_top=sup;
	goto T436;
	goto T434;
T434:;
	V289= Cnil;
	goto T435;
T435:;
	V290= Cnil;
	goto T436;
T436:;
	V291 = (V277);
	V292 = (V289);
	V293= Ct;
	STSET(object,V291,20, V292);
	(void)(V292);
	V294 = (V277);
	V295 = (V290);
	V296= Ct;
	STSET(object,V294,24, V295);
	(void)(V295);
	goto T416;}
	goto T429;
T429:;
	if((V280!= VV[70]))goto T438;
	{object V297;
	{object V298;
	V298= STREF(object,(V277),16);
	if(!(((V298))==(VV[43]))){
	goto T442;}
	(void)((*(LnkLI61))((V277),VV[67]));
	V297= STREF(object,(V277),16);
	goto T439;
	goto T442;
T442:;
	V297= (V298);}
	goto T439;
T439:;
	V299 = (V277);
	base[4]= VV[70];
	base[5]= (V277);
	base[6]= base[1];
	base[7]= (V297);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk249)();
	vs_top=sup;
	V300= vs_base[0];
	V301= Ct;
	STSET(object,V299,28, V300);
	(void)(V300);
	goto T416;}
	goto T438;
T438:;
	if((V280!= VV[65])
	&& (V280!= VV[66]))goto T450;
	{object V302;
	base[4]= base[1];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk250)(Lclptr250);
	vs_top=sup;
	V302= vs_base[0];
	V303 = (V277);
	V305= listA(3,VV[96],base[1],Cnil);
	V306= listA(3,VV[97],(V302),Cnil);
	base[4]= list(3,/* INLINE-ARGS */V305,/* INLINE-ARGS */V306,listA(4,VV[98],(V302),Ct,Cnil));
	vs_top=(vs_base=base+4)+1;
	L32(base);
	vs_top=sup;
	V304= vs_base[0];
	V307= Ct;
	STSET(object,V303,8, V304);
	(void)(V304);
	V308 = (V277);
	V310= listA(3,VV[99],(V302),Cnil);
	base[4]= list(2,/* INLINE-ARGS */V310,listA(4,VV[98],(V302),Cnil,Cnil));
	vs_top=(vs_base=base+4)+1;
	L32(base);
	vs_top=sup;
	V309= vs_base[0];
	V311= Ct;
	STSET(object,V308,12, V309);
	(void)(V309);
	goto T416;}
	goto T450;
T450:;
	if((V280!= VV[71]))goto T458;
	{object V312;
	object V313;
	base[4]= base[1];
	base[5]= base[2];
	base[6]= Ct;
	base[7]= Cnil;
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk251)();
	if(vs_base>=vs_top){vs_top=sup;goto T464;}
	V312= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T465;}
	V313= vs_base[0];
	vs_top=sup;
	goto T466;
	goto T464;
T464:;
	V312= Cnil;
	goto T465;
T465:;
	V313= Cnil;
	goto T466;
T466:;
	V314 = (V277);
	base[4]= VV[71];
	base[5]= (V277);
	base[6]= base[1];
	base[7]= (V312);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk249)();
	vs_top=sup;
	V315= vs_base[0];
	V316= Ct;
	STSET(object,V314,32, V315);
	(void)(V315);
	goto T416;}
	goto T458;
T458:;
	if((V280!= VV[72]))goto T472;
	{object V317;
	object V318;
	base[4]= base[1];
	base[5]= base[2];
	base[6]= Cnil;
	base[7]= Cnil;
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk251)();
	if(vs_base>=vs_top){vs_top=sup;goto T478;}
	V317= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T479;}
	V318= vs_base[0];
	vs_top=sup;
	goto T480;
	goto T478;
T478:;
	V317= Cnil;
	goto T479;
T479:;
	V318= Cnil;
	goto T480;
T480:;
	V319 = (V277);
	base[4]= VV[72];
	base[5]= (V277);
	base[6]= base[1];
	base[7]= (V317);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk249)();
	vs_top=sup;
	V320= vs_base[0];
	V321= Ct;
	STSET(object,V319,36, V320);
	(void)(V320);
	goto T416;}
	goto T472;
T472:;
	if((V280!= VV[73])
	&& (V280!= VV[74]))goto T486;
	{object V322;
	object V323;
	{object V324;
	V324= STREF(object,(V277),20);
	if(!(((V324))==(VV[43]))){
	goto T490;}
	(void)((*(LnkLI61))((V277),VV[68]));
	V322= STREF(object,(V277),20);
	goto T487;
	goto T490;
T490:;
	V322= (V324);}
	goto T487;
T487:;
	{object V325;
	V325= STREF(object,(V277),24);
	if(!(((V325))==(VV[43]))){
	goto T496;}
	(void)((*(LnkLI61))((V277),VV[69]));
	V323= STREF(object,(V277),24);
	goto T493;
	goto T496;
T496:;
	V323= (V325);}
	goto T493;
T493:;
	{object V326;
	object V327;
	base[4]= base[1];
	base[5]= (V323);
	base[6]= Ct;
	base[7]= Ct;
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk251)();
	if(vs_base>=vs_top){vs_top=sup;goto T504;}
	V326= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T505;}
	V327= vs_base[0];
	vs_top=sup;
	goto T506;
	goto T504;
T504:;
	V326= Cnil;
	goto T505;
T505:;
	V327= Cnil;
	goto T506;
T506:;
	V328 = (V277);
	V329 = (V327);
	V330= Ct;
	STSET(object,V328,40, V329);
	(void)(V329);
	V331 = (V277);
	base[4]= VV[74];
	base[5]= (V277);
	base[6]= base[1];
	base[7]= append((V322),(V326));
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk249)();
	vs_top=sup;
	V332= vs_base[0];
	V333= Ct;
	STSET(object,V331,44, V332);
	(void)(V332);
	goto T416;}}
	goto T486;
T486:;
	if((V280!= VV[75]))goto T513;
	V334 = (V277);
	V335= (*(LnkLI75))((V279));
	V336= Ct;
	STSET(object,V334,52, /* INLINE-ARGS */V335);
	(void)(/* INLINE-ARGS */V335);
	goto T416;
	goto T513;
T513:;
	if((V280!= VV[13]))goto T514;
	{object V337;
	object V338;
	V337= (*(LnkLI252))((V279));
	{object V339;
	V339= STREF(object,(V277),52);
	if(!(((V339))==(VV[43]))){
	goto T519;}
	(void)((*(LnkLI61))((V277),VV[75]));
	V338= STREF(object,(V277),52);
	goto T516;
	goto T519;
T519:;
	V338= (V339);}
	goto T516;
T516:;
	V340 = (V277);
	V341 = (V337);
	V342= Ct;
	STSET(object,V340,48, V341);
	(void)(V341);
	if(((V338))==Cnil){
	goto T416;}
	{object V344;
	if((V337)!=Cnil){
	V344= (V337);
	goto T525;}
	V344= (VV[253]->s.s_gfdef);
	goto T525;
T525:;
	V345= ({object _tmp=get(VV[254],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[254])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[254])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V346 = (V344);
	V347 = V338;
	(void)((
	V348 = V345,
	(type_of(V348) == t_sfun ?(*((V348)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V348)==t_vfun) ?
	(*((V348)->sfn.sfn_self)):
	(fcall.fun=(V348),fcalln))(V346,V347)));
	goto T416;}}
	goto T514;
T514:;
	FEerror("The ECASE key value ~s is illegal.",1,V280);
	goto T416;}}
	goto T416;
T416:;
	{object V349 = (V277);
	VMR31(V349)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-MAKE-INSTANCE-FUNCTION	*/

static object LI33(V351)

object V351;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	{register object V352;
	object V353;
	V352= CMPcar((V351));
	V353= CMPcadr((V351));
	if(((VV[101]->s.s_dbind))==(VV[102])){
	goto T529;}
	{object V354 = Cnil;
	VMR32(V354)}
	goto T529;
T529:;
	if(!(type_of((V352))==t_symbol)){
	goto T532;}
	V352= (VFUN_NARGS=1,(*(LnkLI217))((V352)));
	goto T532;
T532:;
	base[2]= (V352);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T536;}
	base[2]= (V352);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk255)(Lclptr255);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T536;}
	base[2]= (V352);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk256)(Lclptr256);
	vs_top=sup;
	goto T536;
T536:;
	{register object V355;
	object V356;
	register object V357;
	object V358;
	object V359;
	object V360;
	object V361;
	register object V362;
	object V363;
	object V364;
	{object V365;
	object V366= (V353);
	if(V366==Cnil){
	V355= Cnil;
	goto T544;}
	base[13]=V365=MMcons(Cnil,Cnil);
	goto T545;
T545:;
	(V365->c.c_cdr)= list(2,(V366->c.c_car),Cnil);
	while(MMcdr(V365)!=Cnil)V365=MMcdr(V365);
	if((V366=MMcdr(V366))==Cnil){
	base[13]=base[13]->c.c_cdr;
	V355= base[13];
	goto T544;}
	goto T545;}
	goto T544;
T544:;
	V356= make_cons((V352),(V355));
	base[4]= (*(LnkLI254))(VV[9]);
	base[4]=MMcons(base[4],Cnil);
	base[13]= (base[4]->c.c_car);
	base[14]= (V356);
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	V357= vs_base[0];
	V358= (*(LnkLI258))((V357),VV[103]);
	V359= list(2,(V352),(V355));
	V360= (*(LnkLI254))(VV[104]);
	base[13]= (V360);
	base[14]= (V359);
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	V361= vs_base[0];
	base[13]= (V352);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T559;}
	V362= Cnil;
	goto T558;
	goto T559;
T559:;
	base[13]= (V352);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk250)(Lclptr250);
	vs_top=sup;
	V362= vs_base[0];
	goto T558;
T558:;
	if(((V362))==Cnil){
	goto T565;}
	base[13]= (*(LnkLI254))(VV[97]);
	base[14]= make_cons((V362),(V355));
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	V363= vs_base[0];
	goto T563;
	goto T565;
T565:;
	V363= Cnil;
	goto T563;
T563:;
	if(((V362))==Cnil){
	goto T571;}
	base[13]= (*(LnkLI254))(VV[98]);
	base[14]= listA(3,(V362),Ct,(V355));
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	V364= vs_base[0];
	goto T569;
	goto T571;
T571:;
	V364= Cnil;
	goto T569;
T569:;
	if(((V357))!=Cnil){
	goto T575;}
	{object V368 = 
	make_cclosure_new(LC66,Cnil,base[4],Cdata);
	VMR32(V368)}
	goto T575;
T575:;
	if((CMPcdr((V357)))!=Cnil){
	goto T579;}
	if(!((CMPcar((V357)))==((V358)))){
	goto T579;}
	if((CMPcdr((V361)))!=Cnil){
	goto T579;}
	base[13]= CMPcar((V361));
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V369= vs_base[0];
	if(!((CMPcar(V369))==((VV[105]->s.s_dbind)))){
	goto T579;}
	base[13]=make_cclosure_new(LC34,Cnil,base[4],Cdata);
	base[13]=MMcons(base[13],base[4]);
	base[14]= (base[13]->c.c_car);
	base[15]= (V363);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk260)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T591;}
	goto T590;
	goto T591;
T591:;
	base[14]= (base[13]->c.c_car);
	base[15]= (V364);
	vs_top=(vs_base=base+14)+2;
	(void) (*Lnk260)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T578;}
	goto T590;
T590:;
	goto T579;
T579:;
	{object V370 = Cnil;
	VMR32(V370)}
	goto T578;
T578:;
	V371 = (V352);
	V372 = (V351);
	base[13]= (V352);
	base[14]= (V355);
	vs_top=(vs_base=base+13)+2;
	(void) (*Lnk104)(Lclptr104);
	vs_top=sup;
	V373= vs_base[0];
	V374 = (V363);
	V375 = (V364);
	{object V376 = (*(LnkLI261))(V371,V372,V373,V374,V375);
	VMR32(V376)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-MAKE-INSTANCE-FUNCTION-INTERNAL	*/

static object LI35(V382,V383,V384,V385,V386)

register object V382;register object V383;object V384;register object V385;register object V386;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{object V387;
	object V388;
	object V389;
	V387= CMPcadr((V383));
	V388= CMPcaddr((V383));
	base[3]= (*(LnkLI254))(VV[96]);
	base[4]= make_cons((V382),(V384));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk257)(Lclptr257);
	vs_top=sup;
	V389= vs_base[0];
	if(((V388))!=Cnil){
	goto T605;}
	V390 = (V382);
	V391 = (V384);
	base[3]= (V389);
	base[4]= (V385);
	base[5]= (V386);
	vs_top=(vs_base=base+3)+3;
	Lappend();
	vs_top=sup;
	V392= vs_base[0];
	if(((VFUN_NARGS=5,(*(LnkLI262))(V390,V391,V392,Ct,Cnil)))!=Cnil){
	goto T605;}
	{object V393 = Cnil;
	VMR33(V393)}
	goto T605;
T605:;
	if((CMPcdr((V389)))!=Cnil){
	goto T614;}
	base[3]= (VV[263]->s.s_gfdef);
	base[4]= (V385);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk264)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T614;}
	base[3]= (VV[263]->s.s_gfdef);
	base[4]= (V386);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk264)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T615;}
	goto T614;
T614:;
	{object V394 = (*(LnkLI265))((V383),(V382),(V387),(V385),(V386));
	VMR33(V394)}
	goto T615;
T615:;
	{object V395 = (*(LnkLI266))((V383),(V382),(V387),(V385),(V386));
	VMR33(V395)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPLICATED-INSTANCE-CREATION-METHOD	*/

static object LI36(V397)

object V397;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	{object V398;
	base[0]= (V397);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk267)(Lclptr267);
	vs_top=sup;
	V398= vs_base[0];
	if(((V398))==Cnil){
	goto T628;}
	if((CMPcdr((V398)))==Cnil){
	goto T631;}
	V399= Cnil;
	goto T630;
	goto T631;
T631:;
	V399= ((CMPcar((V398)))==(VV[107])?Ct:Cnil);
	goto T630;
T630:;
	{object V400 = ((V399)==Cnil?Ct:Cnil);
	VMR34(V400)}
	goto T628;
T628:;
	{object V401;
	base[0]= (V397);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V402= vs_base[0];
	V401= CMPcar(V402);
	base[0]= (V401);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V403= vs_base[0];
	if(!((V403)==Cnil)){
	goto T636;}
	{object V404 = Ct;
	VMR34(V404)}
	goto T636;
T636:;
	base[0]= (V401);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V405= vs_base[0];
	{object V406 = ((((VV[108])==(V405)?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR34(V406)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIND-STANDARD-II-METHOD	*/

static object LI37(V409,V410)

object V409;register object V410;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	{register object V411;
	register object V412;
	V411= (V409);
	V412= CMPcar((V411));
	goto T645;
T645:;
	if(!(((V411))==Cnil)){
	goto T646;}
	{object V413 = Cnil;
	VMR35(V413)}
	goto T646;
T646:;
	base[1]= (V412);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk267)(Lclptr267);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T650;}
	{register object V414;
	base[1]= (V412);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V415= vs_base[0];
	V414= CMPcar(V415);
	base[1]= (V414);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T650;}
	if(!(type_of((V410))==t_cons||((V410))==Cnil)){
	goto T663;}
	base[1]= (V414);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V417= vs_base[0];
	V418 = (V410);
	{register object x= V417,V416= V418;
	while(V416!=Cnil)
	if(eql(x,V416->c.c_car)){
	goto T661;
	}else V416=V416->c.c_cdr;
	goto T650;}
	goto T663;
T663:;
	base[1]= (V414);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V419= vs_base[0];
	V420 = (V410);
	if(!((V419)==(V420))){
	goto T650;}
	goto T661;
T661:;
	{object V421 = (V412);
	VMR35(V421)}}
	goto T650;
T650:;
	V411= CMPcdr((V411));
	V412= CMPcar((V411));
	goto T645;}
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
	{object V422=base[0]->c.c_cdr;
	if(endp(V422))invalid_macro_call();
	base[2]= (V422->c.c_car);
	V422=V422->c.c_cdr;
	if(endp(V422))invalid_macro_call();
	base[3]= (V422->c.c_car);
	V422=V422->c.c_cdr;
	if(endp(V422))invalid_macro_call();
	base[4]= (V422->c.c_car);
	V422=V422->c.c_cdr;
	if(!endp(V422))invalid_macro_call();}
	V423= list(2,VV[109],base[2]);
	V424= make_cons(/* INLINE-ARGS */V423,Cnil);
	V425= list(5,VV[111],VV[112],VV[113],base[3],base[4]);
	base[5]= list(3,VV[52],/* INLINE-ARGS */V424,list(4,VV[78],VV[110],/* INLINE-ARGS */V425,list(4,VV[114],VV[115],base[3],base[4])));
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
	{object V426=base[0]->c.c_cdr;
	if(endp(V426))invalid_macro_call();
	base[2]= (V426->c.c_car);
	V426=V426->c.c_cdr;
	if(!endp(V426))invalid_macro_call();}
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
	{object V427=base[0]->c.c_cdr;
	if(endp(V427))invalid_macro_call();
	base[2]= (V427->c.c_car);
	V427=V427->c.c_cdr;
	if(endp(V427))invalid_macro_call();
	base[3]= (V427->c.c_car);
	V427=V427->c.c_cdr;
	if(!endp(V427))invalid_macro_call();}
	V428= list(3,VV[62],VV[118],base[2]);
	base[4]= list(5,VV[52],VV[117],/* INLINE-ARGS */V428,list(3,VV[62],VV[119],list(2,VV[120],base[3])),VV[121]);
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
	{object V429=base[0]->c.c_cdr;
	if(endp(V429))invalid_macro_call();
	base[2]= (V429->c.c_car);
	V429=V429->c.c_cdr;
	base[3]= V429;}
	V430= list(3,VV[124],VV[125],base[2]);
	base[4]= list(3,VV[52],VV[122],list(4,VV[78],VV[123],/* INLINE-ARGS */V430,make_cons(VV[6],base[3])));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for MAKE-INSTANCE-FUNCTION-TRAP	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	{object V431;
	object V432;
	check_arg(2);
	V431=(base[0]);
	V432=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V433;
	object V434;
	V433= (VFUN_NARGS=2,(*(LnkLI39))((V431),(V432)));
	{object V435;
	V435= STREF(object,(V433),48);
	if(!(((V435))==(VV[43]))){
	goto T678;}
	(void)((*(LnkLI61))((V433),VV[13]));
	V434= STREF(object,(V433),48);
	goto T675;
	goto T678;
T678:;
	V434= (V435);}
	goto T675;
T675:;
	base[4]= (V431);
	base[5]= (V432);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V434);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	local entry for function MAKE-INSTANCE-FUNCTION-SIMPLE	*/

static object LI43(V441,V442,V443,V444,V445)

object V441;object V442;object V443;object V444;object V445;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V446;
	object V447;
	object V448;
	object V449;
	base[0]= CMPcar((V441));
	base[0]=MMcons(base[0],Cnil);
	if(!(type_of((base[0]->c.c_car))==t_symbol)){
	goto T686;}
	base[1]= (VFUN_NARGS=2,(*(LnkLI224))((base[0]->c.c_car),Cnil));
	goto T684;
	goto T686;
T686:;
	base[1]= Cnil;
	goto T684;
T684:;
	base[1]=MMcons(base[1],base[0]);
	base[10]= (V442);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	base[2]= vs_base[0];
	base[2]=MMcons(base[2],base[1]);
	V446= make_cons((base[2]->c.c_car),Cnil);
	base[10]= (V442);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk268)(Lclptr268);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T693;}
	base[4]= (VV[269]->s.s_gfdef);
	goto T691;
	goto T693;
T693:;
	base[10]= (V442);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk270)(Lclptr270);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T697;}
	base[4]= (VV[271]->s.s_gfdef);
	goto T691;
	goto T697;
T697:;
	base[10]= (V442);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk272)(Lclptr272);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T701;}
	base[4]= (VV[273]->s.s_gfdef);
	goto T691;
	goto T701;
T701:;
	base[10]= VV[126];
	vs_top=(vs_base=base+10)+1;
	Lerror();
	vs_top=sup;
	base[4]= vs_base[0];
	goto T691;
T691:;
	base[4]=MMcons(base[4],base[2]);
	base[10]= (V442);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk270)(Lclptr270);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T707;}
	V447= VV[127];
	goto T705;
	goto T707;
T707:;
	V447= Cnil;
	goto T705;
T705:;
	V448= (*(LnkLI258))((V445),VV[108]);
	base[11]= (V448);
	base[12]= (V445);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V453= vs_base[0];
	{object V451;
	object V452= V453;
	if(V452==Cnil){
	V450= Cnil;
	goto T712;}
	base[10]=V451=MMcons(Cnil,Cnil);
	goto T713;
T713:;
	base[11]= (VV[98]->s.s_gfdef);
	base[12]= list(3,VV[128],(V452->c.c_car),Cnil);
	base[13]= Cnil;
	base[14]= (V446);
	vs_top=(vs_base=base+11)+4;
	(void) (*Lnk275)();
	vs_top=sup;
	(V451->c.c_car)= vs_base[0];
	if((V452=MMcdr(V452))==Cnil){
	V450= base[10];
	goto T712;}
	V451=MMcdr(V451)=MMcons(Cnil,Cnil);
	goto T713;}
	goto T712;
T712:;
	base[7]= nreverse(V450);
	base[7]=MMcons(base[7],base[4]);
	V449= (*(LnkLI258))((V444),VV[108]);
	base[11]= (V449);
	base[12]= (V444);
	vs_top=(vs_base=base+11)+2;
	(void) (*Lnk274)();
	vs_top=sup;
	V458= vs_base[0];
	{object V456;
	object V457= V458;
	if(V457==Cnil){
	V455= Cnil;
	goto T724;}
	base[10]=V456=MMcons(Cnil,Cnil);
	goto T725;
T725:;
	base[11]= (VV[97]->s.s_gfdef);
	base[12]= list(3,VV[128],(V457->c.c_car),Cnil);
	base[13]= Cnil;
	base[14]= (V446);
	vs_top=(vs_base=base+11)+4;
	(void) (*Lnk275)();
	vs_top=sup;
	(V456->c.c_car)= vs_base[0];
	if((V457=MMcdr(V457))==Cnil){
	V455= base[10];
	goto T724;}
	V456=MMcdr(V456)=MMcons(Cnil,Cnil);
	goto T725;}
	goto T724;
T724:;
	base[9]= nreverse(V455);
	base[9]=MMcons(base[9],base[7]);
	base[12]= (V442);
	base[13]= (V443);
	base[14]= CMPcaddr((V441));
	vs_top=(vs_base=base+12)+3;
	(void) (*Lnk276)();
	if(vs_base>=vs_top){vs_top=sup;goto T738;}
	base[10]=MMcons(vs_base[0],base[9]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T739;}
	base[11]=MMcons(vs_base[0],base[10]);
	vs_top=sup;
	goto T740;
	goto T738;
T738:;
	base[10]=MMcons(Cnil,base[9]);
	goto T739;
T739:;
	base[11]=MMcons(Cnil,base[10]);
	goto T740;
T740:;
	if(!(((V447))==(VV[127]))){
	goto T742;}
	{object V460 = 
	make_cclosure_new(LC67,Cnil,base[11],Cdata);
	VMR41(V460)}
	goto T742;
T742:;
	{object V461 = 
	make_cclosure_new(LC68,Cnil,base[11],Cdata);
	VMR41(V461)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-INSTANCE-FUNCTION-COMPLEX	*/

static object LI45(V467,V468,V469,V470,V471)

object V467;object V468;object V469;object V470;object V471;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	base[0]=MMcons((V468),Cnil);
	base[3]= (base[0]->c.c_car);
	base[4]= (V469);
	base[5]= CMPcaddr((V467));
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk277)();
	if(vs_base>=vs_top){vs_top=sup;goto T748;}
	base[1]=MMcons(vs_base[0],base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T749;}
	base[2]=MMcons(vs_base[0],base[1]);
	vs_top=sup;
	goto T750;
	goto T748;
T748:;
	base[1]=MMcons(Cnil,base[0]);
	goto T749;
T749:;
	base[2]=MMcons(Cnil,base[1]);
	goto T750;
T750:;
	base[3]= CMPcar((V467));
	base[3]=MMcons(base[3],base[2]);
	if(!(type_of((base[3]->c.c_car))==t_symbol)){
	goto T754;}
	base[4]= (VFUN_NARGS=2,(*(LnkLI224))((base[3]->c.c_car),Cnil));
	goto T752;
	goto T754;
T754:;
	base[4]= Cnil;
	goto T752;
T752:;
	base[4]=MMcons(base[4],base[3]);
	base[8]= (base[0]->c.c_car);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	base[5]= vs_base[0];
	base[5]=MMcons(base[5],base[4]);
	base[8]= (VV[98]->s.s_gfdef);
	base[9]= (V471);
	V472= list(2,VV[138],(base[0]->c.c_car));
	base[10]= make_cons(/* INLINE-ARGS */V472,VV[139]);
	V473= (*(LnkLI258))((V471),VV[108]);
	V474= 
	make_cclosure_new(LC69,Cnil,base[5],Cdata);
	V475= list(2,/* INLINE-ARGS */V473,V474);
	base[11]= make_cons(/* INLINE-ARGS */V475,Cnil);
	base[12]= list(3,(base[5]->c.c_car),(VV[140]->s.s_dbind),(VV[140]->s.s_dbind));
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk278)();
	vs_top=sup;
	base[6]= vs_base[0];
	base[6]=MMcons(base[6],base[5]);
	base[8]= (VV[97]->s.s_gfdef);
	base[9]= (V470);
	base[10]= list(2,list(2,VV[138],(base[0]->c.c_car)),Ct);
	V476= (*(LnkLI258))((V470),VV[108]);
	V477= 
	make_cclosure_new(LC70,Cnil,base[6],Cdata);
	V478= list(2,/* INLINE-ARGS */V476,V477);
	base[11]= make_cons(/* INLINE-ARGS */V478,Cnil);
	base[12]= list(2,(base[5]->c.c_car),(VV[140]->s.s_dbind));
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk278)();
	vs_top=sup;
	base[7]= vs_base[0];
	base[7]=MMcons(base[7],base[6]);
	{object V479 = 
	make_cclosure_new(LC71,Cnil,base[7],Cdata);
	VMR42(V479)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-SIMPLE-INITIALIZATION-FUNCTION	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{object V480;
	object V481;
	object V482;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V480=(base[0]);
	V481=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T772;}
	V482=(base[2]);
	vs_top=sup;
	goto T773;
	goto T772;
T772:;
	V482= Cnil;
	goto T773;
T773:;
	{register object V483;
	V483= (VFUN_NARGS=4,(*(LnkLI39))((V480),(V481),Cnil,(V482)));
	{object V484;
	V484= STREF(object,(V483),44);
	if(!(((V484))==(VV[43]))){
	goto T779;}
	(void)((*(LnkLI61))((V483),VV[74]));
	base[3]= STREF(object,(V483),44);
	goto T776;
	goto T779;
T779:;
	base[3]= (V484);}
	goto T776;
T776:;
	{object V485;
	V485= STREF(object,(V483),40);
	if(!(((V485))==(VV[43]))){
	goto T785;}
	(void)((*(LnkLI61))((V483),VV[73]));
	base[4]= STREF(object,(V483),40);
	goto T782;
	goto T785;
T785:;
	base[4]= (V485);}
	goto T782;
T782:;
	vs_top=(vs_base=base+3)+2;
	return;}
	}
}
/*	function definition for GET-COMPLEX-INITIALIZATION-FUNCTIONS	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_check;
	{register object V486;
	object V487;
	register object V488;
	object V489;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V486=(base[0]);
	V487=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T788;}
	V488=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T789;}
	V489=(base[3]);
	vs_top=sup;
	goto T790;
	goto T788;
T788:;
	V488= Cnil;
	goto T789;
T789:;
	V489= Cnil;
	goto T790;
T790:;
	{register object V490;
	object V491;
	V490= (VFUN_NARGS=4,(*(LnkLI39))((V486),(V487),Cnil,(V488)));
	{object V492;
	V492= STREF(object,(V490),28);
	if(!(((V492))==(VV[43]))){
	goto T797;}
	(void)((*(LnkLI61))((V490),VV[70]));
	V491= STREF(object,(V490),28);
	goto T794;
	goto T797;
T797:;
	V491= (V492);}
	goto T794;
T794:;
	if(((V489))==Cnil){
	goto T801;}
	base[6]= (V491);
	{object V493;
	V493= STREF(object,(V490),32);
	if(!(((V493))==(VV[43]))){
	goto T807;}
	(void)((*(LnkLI61))((V490),VV[71]));
	base[7]= STREF(object,(V490),32);
	goto T804;
	goto T807;
T807:;
	base[7]= (V493);}
	goto T804;
T804:;
	vs_top=(vs_base=base+6)+2;
	return;
	goto T801;
T801:;
	base[6]= (V491);
	{object V494;
	V495 = (V486);
	{object V497;
	V497= STREF(object,(V490),24);
	if(!(((V497))==(VV[43]))){
	goto T816;}
	(void)((*(LnkLI61))((V490),VV[69]));
	V496= STREF(object,(V490),24);
	goto T813;
	goto T816;
T816:;
	V496= (V497);}
	goto T813;
T813:;
	V498 = (V488);
	V499= (VFUN_NARGS=4,(*(LnkLI39))(V495,V496,Cnil,V498));
	V494= STREF(object,/* INLINE-ARGS */V499,32);
	if(!(((V494))==(VV[43]))){
	goto T820;}
	V500 = (V486);
	{object V502;
	V502= STREF(object,(V490),24);
	if(!(((V502))==(VV[43]))){
	goto T826;}
	(void)((*(LnkLI61))((V490),VV[69]));
	V501= STREF(object,(V490),24);
	goto T823;
	goto T826;
T826:;
	V501= (V502);}
	goto T823;
T823:;
	V503 = (V488);
	V504= (VFUN_NARGS=4,(*(LnkLI39))(V500,V501,Cnil,V503));
	(void)((*(LnkLI61))(/* INLINE-ARGS */V504,VV[71]));
	V505 = (V486);
	{object V507;
	V507= STREF(object,(V490),24);
	if(!(((V507))==(VV[43]))){
	goto T832;}
	(void)((*(LnkLI61))((V490),VV[69]));
	V506= STREF(object,(V490),24);
	goto T829;
	goto T832;
T832:;
	V506= (V507);}
	goto T829;
T829:;
	V508 = (V488);
	V509= (VFUN_NARGS=4,(*(LnkLI39))(V505,V506,Cnil,V508));
	base[7]= STREF(object,/* INLINE-ARGS */V509,32);
	goto T811;
	goto T820;
T820:;
	base[7]= (V494);}
	goto T811;
T811:;
	vs_top=(vs_base=base+6)+2;
	return;}
	}
}
/*	local entry for function ADD-FORMS	*/

static object LI48(V512,V513)

register object V512;register object V513;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	if(((V512))==Cnil){
	goto T835;}
	base[0]= (V512);
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V512= vs_base[0];
	if((CMPcar((V513)))!=Cnil){
	goto T843;}
	(V513)->c.c_car = V512;
	goto T841;
	goto T843;
T843:;
	(CMPcdr(V513))->c.c_cdr = V512;
	(void)(CMPcdr(V513));
	goto T841;
T841:;
	{object V519;
	base[1]= (V512);
	vs_top=(vs_base=base+1)+1;
	Llast();
	vs_top=sup;
	V519= vs_base[0];
	(V513)->c.c_cdr = (V519);}
	goto T835;
T835:;
	{object V520 = CMPcar((V513));
	VMR45(V520)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-DEFAULT-INITARGS-FORM-LIST	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{object V521;
	object V522;
	object V523;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V521=(base[0]);
	V522=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T850;}
	V523=(base[2]);
	vs_top=sup;
	goto T851;
	goto T850;
T850:;
	V523= Ct;
	goto T851;
T851:;
	{object V524;
	object V525;
	object V526;
	object V527;
	register object V528;
	V524= make_cons(Cnil,Cnil);
	base[3]= (V521);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk279)(Lclptr279);
	vs_top=sup;
	V525= vs_base[0];
	base[4]= (V521);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V531= vs_base[0];
	{object V529;
	object V530= V531;
	if(V530==Cnil){
	V527= Cnil;
	goto T856;}
	base[3]=V529=MMcons(Cnil,Cnil);
	goto T857;
T857:;
	base[5]= (V530->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk281)(Lclptr281);
	vs_top=sup;
	V535= vs_base[0];
	{object V533;
	object V534= V535;
	if(V534==Cnil){
	(V529->c.c_cdr)= Cnil;
	goto T860;}
	base[4]=V533=MMcons(Cnil,Cnil);
	goto T861;
T861:;
	(V533->c.c_car)= make_cons((V534->c.c_car),(V530->c.c_car));
	if((V534=MMcdr(V534))==Cnil){
	(V529->c.c_cdr)= base[4];
	goto T860;}
	V533=MMcdr(V533)=MMcons(Cnil,Cnil);
	goto T861;}
	goto T860;
T860:;
	while(MMcdr(V529)!=Cnil)V529=MMcdr(V529);
	if((V530=MMcdr(V530))==Cnil){
	base[3]=base[3]->c.c_cdr;
	V527= base[3];
	goto T856;}
	goto T857;}
	goto T856;
T856:;
	V526= (V522);
	V528= Cnil;
	{register object V537;
	object V538;
	V537= (V526);
	V538= CMPcar((V537));
	goto T869;
T869:;
	if(!(((V537))==Cnil)){
	goto T870;}
	goto T865;
	goto T870;
T870:;
	{object V539;
	{register object x= (V538),V541= (V527);
	while(V541!=Cnil)
	if(eql(x,V541->c.c_car->c.c_car) &&V541->c.c_car != Cnil){
	V540= (V541->c.c_car);
	goto T876;
	}else V541=V541->c.c_cdr;
	V540= Cnil;}
	goto T876;
T876:;
	V539= CMPcdr(V540);
	base[5]= (V539);
	base[6]= (V528);
	vs_top=(vs_base=base+5)+2;
	Ladjoin();
	vs_top=sup;
	V528= vs_base[0];}
	V537= CMPcdr((V537));
	V538= CMPcar((V537));
	goto T869;}
	goto T865;
T865:;
	{register object V542;
	register object V543;
	V542= (V525);
	V543= CMPcar((V542));
	goto T889;
T889:;
	if(!(((V542))==Cnil)){
	goto T890;}
	goto T885;
	goto T890;
T890:;
	{register object V544;
	register object V545;
	object V546;
	V544= CMPcar((V543));
	{register object x= (V544),V548= (V527);
	while(V548!=Cnil)
	if(eql(x,V548->c.c_car->c.c_car) &&V548->c.c_car != Cnil){
	V547= (V548->c.c_car);
	goto T897;
	}else V548=V548->c.c_cdr;
	V547= Cnil;}
	goto T897;
T897:;
	V545= CMPcdr(V547);
	V546= CMPcadr((V543));
	{register object x= (V545),V549= (V528);
	while(V549!=Cnil)
	if(eql(x,V549->c.c_car)){
	goto T894;
	}else V549=V549->c.c_cdr;}
	V550= list(2,VV[114],(V546));
	V551= list(2,/* INLINE-ARGS */V550,list(2,VV[145],(V544)));
	(void)((*(LnkLI282))(/* INLINE-ARGS */V551,(V524)));
	V526= make_cons(V544,(V526));
	V528= make_cons(V545,(V528));}
	goto T894;
T894:;
	V542= CMPcdr((V542));
	V543= CMPcar((V542));
	goto T889;}
	goto T885;
T885:;
	if(((V523))==Cnil){
	goto T910;}
	V554 = (V521);
	V555= list(3,VV[146],V554,(VFUN_NARGS=3,(*(LnkLI39))((V521),(V526),Cnil)));
	V556= make_cons(/* INLINE-ARGS */V555,Cnil);
	(void)((*(LnkLI282))(/* INLINE-ARGS */V556,(V524)));
	goto T910;
T910:;
	(void)((*(LnkLI282))(VV[147],(V524)));
	base[3]= CMPcar((V524));
	base[4]= (V526);
	vs_top=(vs_base=base+3)+2;
	return;}
	}
}
/*	function definition for MAKE-SHARED-INITIALIZE-FORM-LIST	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	{object V557;
	object V558;
	object V559;
	object V560;
	check_arg(4);
	V557=(base[0]);
	V558=(base[1]);
	V559=(base[2]);
	V560=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V561;
	object V562;
	object V563;
	object V564;
	object V565;
	object V566;
	object V567;
	object V568;
	V561= make_cons(Cnil,Cnil);
	base[12]= (V557);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk268)(Lclptr268);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T919;}
	V562= VV[148];
	goto T917;
	goto T919;
T919:;
	base[12]= (V557);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk270)(Lclptr270);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T923;}
	V562= VV[149];
	goto T917;
	goto T923;
T923:;
	base[12]= (V557);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk272)(Lclptr272);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T927;}
	V562= VV[150];
	goto T917;
	goto T927;
T927:;
	base[12]= VV[151];
	vs_top=(vs_base=base+12)+1;
	Lerror();
	vs_top=sup;
	V562= vs_base[0];
	goto T917;
T917:;
	base[12]= (V557);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	V563= vs_base[0];
	if(((V560))==Cnil){
	goto T935;}
	base[12]= ((V563))->v.v_self[12];
	base[13]= VV[152];
	base[14]= (VV[153]->s.s_dbind);
	vs_top=(vs_base=base+12)+3;
	(void) (*Lnk283)();
	vs_top=sup;
	V564= vs_base[0];
	goto T933;
	goto T935;
T935:;
	V564= Cnil;
	goto T933;
T933:;
	base[12]= (V557);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V565= vs_base[0];
	base[13]=VV[284]->s.s_gfdef;
	{object V569;
	object V570= (V565);
	if(V570==Cnil){
	V566= Cnil;
	goto T942;}
	base[12]=V569=MMcons(Cnil,Cnil);
	goto T943;
T943:;
	base[14]= (V570->c.c_car);
	vs_top=(vs_base=base+14)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	(V569->c.c_car)= vs_base[0];
	if((V570=MMcdr(V570))==Cnil){
	V566= base[12];
	goto T942;}
	V569=MMcdr(V569)=MMcons(Cnil,Cnil);
	goto T943;}
	goto T942;
T942:;
	{object V571;
	object V572= (V565);
	if(V572==Cnil){
	V567= Cnil;
	goto T946;}
	base[12]=V571=MMcons(Cnil,Cnil);
	goto T947;
T947:;
	{object V574;
	V574= VV[154];
	{register object V575;
	object V576;
	base[15]= (V572->c.c_car);
	vs_top=(vs_base=base+15)+1;
	(void) (*Lnk281)(Lclptr281);
	vs_top=sup;
	V575= vs_base[0];
	V576= CMPcar((V575));
	goto T954;
T954:;
	if(!(((V575))==Cnil)){
	goto T955;}
	goto T949;
	goto T955;
T955:;
	{object V577;
	base[15]= (V576);
	base[16]= (V558);
	vs_top=(vs_base=base+15)+2;
	(void) (*Lnk285)();
	vs_top=sup;
	V577= vs_base[0];
	if(((V577))==Cnil){
	goto T959;}
	V574= (number_compare((V574),(V577))<=0?((V574)):(V577));}
	goto T959;
T959:;
	V575= CMPcdr((V575));
	V576= CMPcar((V575));
	goto T954;}
	goto T949;
T949:;
	(V571->c.c_car)= make_cons((V572->c.c_car),(V574));}
	if((V572=MMcdr(V572))==Cnil){
	V567= base[12];
	goto T946;}
	V571=MMcdr(V571)=MMcons(Cnil,Cnil);
	goto T947;}
	goto T946;
T946:;
	base[12]= (V567);
	base[13]= (VV[286]->s.s_gfdef);
	base[14]= VV[155];
	base[15]= (VV[189]->s.s_gfdef);
	vs_top=(vs_base=base+12)+4;
	(void) (*Lnk287)();
	vs_top=sup;
	V568= vs_base[0];
	{long V578;
	V578= 0;
	{register object V579;
	register object V580;
	V579= (V568);
	V580= CMPcar((V579));
	goto T981;
T981:;
	if(!(((V579))==Cnil)){
	goto T982;}
	goto T976;
	goto T982;
T982:;
	{object V581;
	object V582;
	register long V583;
	V581= CMPcar((V580));
	base[15]= (V581);
	vs_top=(vs_base=base+15)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V582= vs_base[0];
	V584= CMPcdr((V580));
	V585 = CMPmake_fixnum(V578);
	V586= number_minus(/* INLINE-ARGS */V584,V585);
	V583= fix(one_plus(/* INLINE-ARGS */V586));
	if(eql(CMPcdr((V580)),VV[154])){
	goto T986;}
	{object V587;
	base[16]= (V582);
	base[17]= (V566);
	vs_top=(vs_base=base+16)+2;
	(void) (*Lnk285)();
	vs_top=sup;
	V588= vs_base[0];
	V587= one_plus(V588);
	if(!((V583)>0)){
	goto T1000;}
	V590 = CMPmake_fixnum((long)(2)*(V583));
	V591= list(2,VV[156],V590);
	V589= make_cons(/* INLINE-ARGS */V591,Cnil);
	goto T998;
	goto T1000;
T1000:;
	V589= Cnil;
	goto T998;
T998:;
	V592= list(3,VV[157],(V587),(V581));
	V593= make_cons(/* INLINE-ARGS */V592,Cnil);
	V594= append(V589,/* INLINE-ARGS */V593);
	(void)((*(LnkLI282))(/* INLINE-ARGS */V594,(V561)));}
	V578= (long)(V578)+(V583);}
	goto T986;
T986:;
	V579= CMPcdr((V579));
	V580= CMPcar((V579));
	goto T981;}}
	goto T976;
T976:;
	{register object V595;
	object V596;
	V595= (V568);
	V596= CMPcar((V595));
	goto T1012;
T1012:;
	if(!(((V595))==Cnil)){
	goto T1013;}
	goto T1008;
	goto T1013;
T1013:;
	{register object V597;
	object V598;
	V597= CMPcar((V596));
	base[15]= (V597);
	vs_top=(vs_base=base+15)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V598= vs_base[0];
	if(!(eql(CMPcdr((V596)),VV[154]))){
	goto T1017;}
	if(((V559))==(Ct)){
	goto T1021;}
	{register object x= (V598),V599= (V559);
	while(V599!=Cnil)
	if(eql(x,V599->c.c_car)){
	goto T1026;
	}else V599=V599->c.c_cdr;
	goto T1017;}
	goto T1026;
T1026:;
	goto T1021;
T1021:;
	{object V600;
	object V601;
	object V602;
	register object V603;
	register object V604;
	base[20]= (V597);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk288)(Lclptr288);
	vs_top=sup;
	V600= vs_base[0];
	base[20]= (V597);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk289)(Lclptr289);
	vs_top=sup;
	V601= vs_base[0];
	if(((V562))==(VV[148])){
	goto T1033;}
	base[20]= (V597);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk290)(Lclptr290);
	vs_top=sup;
	V602= vs_base[0];
	goto T1031;
	goto T1033;
T1033:;
	V602= Cnil;
	goto T1031;
T1031:;
	base[20]= (V598);
	base[21]= (V566);
	vs_top=(vs_base=base+20)+2;
	(void) (*Lnk285)();
	vs_top=sup;
	V605= vs_base[0];
	V603= one_plus(V605);
	if(((V601))!=Cnil){
	goto T1042;}
	V604= Cnil;
	goto T1040;
	goto T1042;
T1042:;
	base[20]= (V600);
	vs_top=(vs_base=base+20)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1045;}
	{object V606;
	V606= (
	(type_of((V601)) == t_sfun ?(*(((V601))->sfn.sfn_self)):
	(fcall.argd=0,type_of((V601))==t_vfun) ?
	(*(((V601))->sfn.sfn_self)):
	(fcall.fun=((V601)),fcalln))());
	if(((V560))==Cnil){
	goto T1050;}
	if(!(type_of((V602))==t_fixnum||type_of((V602))==t_bignum)){
	goto T1050;}
	(void)((((V564))->v.v_self[fix((V602))]=((V606))));
	V604= Cnil;
	goto T1040;
	goto T1050;
T1050:;
	V607= list(2,VV[158],(V606));
	V604= list(2,/* INLINE-ARGS */V607,list(3,VV[157],(V603),(V597)));
	goto T1040;}
	goto T1045;
T1045:;
	base[20]= (V597);
	vs_top=(vs_base=base+20)+1;
	(void) (*Lnk289)(Lclptr289);
	vs_top=sup;
	V608= vs_base[0];
	V609= list(2,VV[114],V608);
	V604= list(2,/* INLINE-ARGS */V609,list(3,VV[157],(V603),(V597)));
	goto T1040;
T1040:;
	if(((V560))!=Cnil){
	goto T1059;}
	if(((V604))==Cnil){
	goto T1059;}
	V611 = CMPmake_fixnum((long)length((V604)));
	V612= list(4,VV[159],(V603),(V597),V611);
	V610= make_cons(/* INLINE-ARGS */V612,Cnil);
	goto T1057;
	goto T1059;
T1059:;
	V610= Cnil;
	goto T1057;
T1057:;
	V613 = (V604);
	V614= append(V610,V613);
	(void)((*(LnkLI282))(/* INLINE-ARGS */V614,(V561)));}}
	goto T1017;
T1017:;
	V595= CMPcdr((V595));
	V596= CMPcar((V595));
	goto T1012;}
	goto T1008;
T1008:;
	base[12]= CMPcar((V561));
	base[13]= (V564);
	vs_top=(vs_base=base+12)+2;
	return;}
	}
}
/*	local entry for function GET-PV-CELL-FOR-CLASS	*/

static object LI51(V616)

register object V616;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V617;
	object V618;
	register object V619;
	base[4]=VV[284]->s.s_gfdef;
	base[5]= (V616);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V622= vs_base[0];
	{object V620;
	object V621= V622;
	if(V621==Cnil){
	V617= Cnil;
	goto T1070;}
	base[3]=V620=MMcons(Cnil,Cnil);
	goto T1071;
T1071:;
	base[5]= (V621->c.c_car);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	(V620->c.c_car)= vs_base[0];
	if((V621=MMcdr(V621))==Cnil){
	V617= base[3];
	goto T1070;}
	V620=MMcdr(V620)=MMcons(Cnil,Cnil);
	goto T1071;}
	goto T1070;
T1070:;
	V623= make_cons(Cnil,(V617));
	V618= make_cons(/* INLINE-ARGS */V623,Cnil);
	base[3]= (V616);
	base[4]= (VV[160]->s.s_dbind);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V619= vs_base[0];
	if(((V619))==Cnil){
	goto T1081;}
	if(equal((V618),STREF(object,(V619),8))){
	goto T1080;}
	goto T1081;
T1081:;
	V619= (VFUN_NARGS=2,(*(LnkLI291))(VV[162],(V618)));
	{object V625;
	V625= (VV[160]->s.s_dbind);
	base[3]= V616;
	base[4]= (V625);
	base[5]= V619;
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;}
	goto T1080;
T1080:;
	V627 = (V619);
	base[3]= (V616);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk243)(Lclptr243);
	vs_top=sup;
	V628= vs_base[0];
	{object V629 = (*(LnkLI292))(V627,V628);
	VMR48(V629)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for INITIALIZE-INSTANCE-SIMPLE-FUNCTION	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	{object V630;
	object V631;
	object V632;
	object V633;
	check_arg(4);
	V630=(base[0]);
	V631=(base[1]);
	V632=(base[2]);
	V633=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V634;
	object V635;
	register object V636;
	V634= (*(LnkLI293))((V632));
	V635= STREF(object,(V631),0);
	V637 = (V630);
	base[7]= CMPcar((V635));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk229)(Lclptr229);
	vs_top=sup;
	V638= vs_base[0];
	V636= listA(3,V637,V638,CMPcdr((V635)));
	if(((VV[163]->s.s_dbind))!=Cnil){
	goto T1098;}
	base[7]= (V636);
	base[8]= (VV[164]->s.s_dbind);
	vs_top=(vs_base=base+7)+2;
	Lgethash();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1099;}
	goto T1098;
T1098:;
	{object V639;
	object V640;
	base[7]= (V634);
	base[8]= (V633);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk294)();
	if(vs_base>=vs_top){vs_top=sup;goto T1108;}
	V639= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1109;}
	V640= vs_base[0];
	vs_top=sup;
	goto T1110;
	goto T1108;
T1108:;
	V639= Cnil;
	goto T1109;
T1109:;
	V640= Cnil;
	goto T1110;
T1110:;
	{register object V641;
	{register object x= (V639),V642= (VV[165]->s.s_dbind);
	while(V642!=Cnil)
	if(equal(x,V642->c.c_car->c.c_car) &&V642->c.c_car != Cnil){
	V641= (V642->c.c_car);
	goto T1111;
	}else V642=V642->c.c_cdr;
	V641= Cnil;}
	goto T1111;
T1111:;
	{object V644;
	V644= (VV[164]->s.s_dbind);
	base[7]= V636;
	base[8]= (V644);
	base[9]= Ct;
	vs_top=(vs_base=base+7)+3;
	siLhash_set();
	vs_top=sup;}
	if(((V641))==Cnil){
	goto T1119;}
	{object V647;
	base[8]= make_cons((V636),Cnil);
	base[9]= CMPcdddr((V641));
	base[10]= VV[12];
	base[11]= (VV[225]->s.s_gfdef);
	vs_top=(vs_base=base+8)+4;
	(void) (*Lnk295)();
	vs_top=sup;
	V647= vs_base[0];
	(CMPcddr(V641))->c.c_cdr = (V647);
	(void)(CMPcddr(V641));
	goto T1117;}
	goto T1119;
T1119:;
	V641= listA(4,(V639),Cnil,Cnil,make_cons((V636),Cnil));{object V648;
	V648= (VV[165]->s.s_dbind);
	V649= make_cons((V641),Cnil);
	(VV[165]->s.s_dbind)= nconc(V648,/* INLINE-ARGS */V649);}
	goto T1117;
T1117:;
	if(((VV[166]->s.s_dbind))!=Cnil){
	goto T1130;}
	if((CMPcadr((V641)))!=Cnil){
	goto T1130;}
	{object V651;
	base[8]= CMPcar((V641));
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk296)();
	vs_top=sup;
	V651= vs_base[0];
	(CMPcdr(V641))->c.c_car = (V651);
	(void)(CMPcdr(V641));}
	goto T1130;
T1130:;
	if((CMPcadr((V641)))==Cnil){
	goto T1139;}
	base[7]= CMPcadr((V641));
	{object V652;
	V652= (V640);
	 vs_top=base+8;
	 while(V652!=Cnil)
	 {vs_push((V652)->c.c_car);V652=(V652)->c.c_cdr;}
	vs_base=base+8;}
	{object _funobj = base[7];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1139;
T1139:;
	base[7]= list(3,VV[130],(V634),(V633));
	vs_top=(vs_base=base+7)+1;
	return;}}
	goto T1099;
T1099:;
	base[7]= list(3,VV[130],(V634),(V633));
	vs_top=(vs_base=base+7)+1;
	return;}
	}
}
/*	local entry for function LOAD-PRECOMPILED-IIS-ENTRY	*/

static object LI53(V657,V658,V659,V660)

object V657;object V658;object V659;object V660;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V661;
	{register object x= (V657),V662= (VV[165]->s.s_dbind);
	while(V662!=Cnil)
	if(equal(x,V662->c.c_car->c.c_car) &&V662->c.c_car != Cnil){
	V661= (V662->c.c_car);
	goto T1143;
	}else V662=V662->c.c_cdr;
	V661= Cnil;}
	goto T1143;
T1143:;
	if(((V661))!=Cnil){
	goto T1144;}
	V661= listA(4,(V657),Cnil,Cnil,Cnil);{object V663;
	V663= (VV[165]->s.s_dbind);
	V664= make_cons((V661),Cnil);
	(VV[165]->s.s_dbind)= nconc(V663,/* INLINE-ARGS */V664);}
	goto T1144;
T1144:;
	(CMPcdr(V661))->c.c_car = V658;
	(void)(CMPcdr(V661));
	(CMPcddr(V661))->c.c_car = V659;
	(void)(CMPcddr(V661));
	{register object V669;
	register object V670;
	V669= (V660);
	V670= CMPcar((V669));
	goto T1158;
T1158:;
	if(!(((V669))==Cnil)){
	goto T1159;}
	goto T1154;
	goto T1159;
T1159:;
	{register object V671;
	register object V672;
	register object V673;
	V671= (V670);
	V672= (VV[164]->s.s_dbind);
	V673= Ct;
	base[1]= (V671);
	base[2]= (V672);
	base[3]= (V673);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;}
	V669= CMPcdr((V669));
	V670= CMPcar((V669));
	goto T1158;}
	goto T1154;
T1154:;
	{object V675;
	base[1]= (V660);
	base[2]= CMPcdddr((V661));
	base[3]= VV[12];
	base[4]= (VV[225]->s.s_gfdef);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk295)();
	vs_top=sup;
	V675= vs_base[0];
	(CMPcddr(V661))->c.c_cdr = (V675);
	(void)(CMPcddr(V661));
	{object V676 = (V675);
	VMR50(V676)}}}
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
	{object V677=base[0]->c.c_cdr;
	if(endp(V677)){
	base[2]= Cnil;
	} else {
	base[2]= (V677->c.c_car);
	V677=V677->c.c_cdr;}
	if(!endp(V677))invalid_macro_call();}
	{register object V678;
	V678= small_fixnum(-1);
	{register object V680;
	register object V681;
	V680= Cnil;
	V681= Cnil;
	{register object V682;
	register object V683;
	V682= (VV[165]->s.s_dbind);
	V683= CMPcar((V682));
	goto T1189;
T1189:;
	if(!(((V682))==Cnil)){
	goto T1190;}
	goto T1185;
	goto T1190;
T1190:;
	if((CMPcaddr((V683)))==Cnil){
	goto T1195;}
	if(!((CMPcaddr((V683)))==(base[2]))){
	goto T1194;}
	goto T1195;
T1195:;
	if((base[2])==Cnil){
	goto T1199;}
	{register object V684;
	register object V685;
	V684= (V683);
	V685= base[2];
	(CMPcddr((V684)))->c.c_car = (V685);
	(void)(CMPcddr((V684)));}
	goto T1199;
T1199:;
	{register object V686;
	V687 = base[2];
	V678= number_plus((V678),small_fixnum(1));
	V688 = (V678);
	V689= list(3,VV[167],V687,V688);
	V690= list(2,VV[4],CMPcar((V683)));
	V691= list(2,VV[170],CMPcar((V683)));
	V692= list(2,VV[4],base[2]);
	V693= list(5,VV[169],/* INLINE-ARGS */V690,/* INLINE-ARGS */V691,/* INLINE-ARGS */V692,list(2,VV[4],CMPcdddr((V683))));
	V686= (*(LnkLI297))(/* INLINE-ARGS */V689,VV[168],/* INLINE-ARGS */V693);
	if(((V680))!=Cnil){
	goto T1208;}
	V681= make_cons((V686),Cnil);
	V680= (V681);
	goto T1194;
	goto T1208;
T1208:;
	V695= make_cons((V686),Cnil);
	((V681))->c.c_cdr = /* INLINE-ARGS */V695;
	V694= (V681);
	V681= CMPcdr(V694);}
	goto T1194;
T1194:;
	V682= CMPcdr((V682));
	V683= CMPcar((V682));
	goto T1189;}
	goto T1185;
T1185:;
	V679= (V680);}
	base[3]= make_cons(VV[6],V679);
	vs_top=(vs_base=base+3)+1;
	return;}
}
/*	function definition for COMPILE-IIS-FUNCTIONS	*/

static void L55()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_check;
	bds_check;
	{object V696;
	check_arg(1);
	V696=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (((V696))==Cnil?Ct:Cnil);
	bds_bind(VV[163],Ct);
	bds_bind(VV[91],Ct);
	bds_bind(VV[166],base[3]);
	if(!(((VV[101]->s.s_dbind))==(VV[102]))){
	goto T1221;}
	vs_base=vs_top;
	(void) (*Lnk298)();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	goto T1221;
T1221:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function INITIALIZE-INSTANCE-SIMPLE	*/

static object LI56(V701,V702,V703,V704)

object V701;register object V702;object V703;register object V704;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	{object V705;
	register object V706;
	object V707;
	object V708;
	register object V709;
	V705= CMPcar((V701));
	if(type_of(V703)==t_structure){
	goto T1228;}
	goto T1226;
	goto T1228;
T1228:;
	if(!(((V703)->str.str_def)==(VV[171]))){
	goto T1226;}
	V707= STREF(object,(V703),4);
	goto T1224;
	goto T1226;
T1226:;{object V711;
	V711= (VV[172]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V703);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk299)();
	vs_top=sup;
	V712= vs_base[0];
	if(!((V711)==(CMPcar(V712)))){
	goto T1231;}}
	V707= CMPcar(((V703))->cc.cc_turbo[12]);
	goto T1224;
	goto T1231;
T1231:;
	V707= Cnil;
	goto T1224;
T1224:;
	V708= (*(LnkLI301))((V703));
	V706= (V704);
	V709= Cnil;
	goto T1239;
T1239:;
	if(((V702))!=Cnil){
	goto T1241;}
	goto T1237;
	goto T1241;
T1241:;
	{register object V713;
	{object V714;
	V714= CMPcar((V702));
	V702= CMPcdr((V702));
	V713= (V714);}
	{object V715= CMPcar((V713));
	if((V715!= VV[145]))goto T1248;
	V704= make_cons(V709,(V704));
	{object V717;
	V717= CMPcadr((V713));
	V704= make_cons((V717),(V704));
	goto T1240;}
	goto T1248;
T1248:;
	if((V715!= VV[158]))goto T1253;
	V709= CMPcadr((V713));
	goto T1240;
	goto T1253;
T1253:;
	if((V715!= VV[114]))goto T1255;
	V709= (
	V718 = CMPcadr((V713)),
	(type_of(V718) == t_sfun ?(*((V718)->sfn.sfn_self)):
	(fcall.argd=0,type_of(V718)==t_vfun) ?
	(*((V718)->sfn.sfn_self)):
	(fcall.fun=(V718),fcalln))());
	goto T1240;
	goto T1255;
T1255:;
	if((V715!= VV[156]))goto T1257;
	V719= one_minus(CMPcadr((V713)));
	V706= nthcdr(fix(/* INLINE-ARGS */V719),(V706));
	{object V720;
	V720= CMPcar((V706));
	V706= CMPcdr((V706));
	V709= (V720);}
	goto T1240;
	goto T1257;
T1257:;
	if((V715!= VV[157]))goto T1264;
	{object V721;
	V721= ((V705))->v.v_self[fix(CMPcadr((V713)))];
	if(!(type_of(V721)==t_fixnum)){
	goto T1267;}
	(void)(((V707))->v.v_self[fix((V721))]= ((V709)));
	goto T1240;
	goto T1267;
T1267:;
	if(!(type_of(V721)==t_cons)){
	goto T1270;}
	(V721)->c.c_cdr = V709;
	goto T1240;
	goto T1270;
T1270:;
	{object V727;
	V727= CMPcaddr((V713));
	V729= ({object _tmp=get(VV[186],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[186])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[186])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V730 = V709;
	V731 = V708;
	V732 = V703;
	V733 = (V727);
	(void)((
	V734 = V729,
	(type_of(V734) == t_sfun ?(*((V734)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V734)==t_vfun) ?
	(*((V734)->sfn.sfn_self)):
	(fcall.fun=(V734),fcalln))(V730,V731,V732,V733)));
	goto T1240;}}
	goto T1264;
T1264:;
	if((V715!= VV[159]))goto T1275;
	{object V735;
	V735= ((V705))->v.v_self[fix(CMPcadr((V713)))];
	if(!(type_of(V735)==t_fixnum)){
	goto T1280;}
	if(!((((((V707))->v.v_self[fix((V735))])==(VV[173])?Ct:Cnil))==Cnil)){
	goto T1240;}
	goto T1277;
	goto T1280;
T1280:;
	if(!(type_of(V735)==t_cons)){
	goto T1283;}
	if(!((((CMPcdr((V735)))==(VV[173])?Ct:Cnil))==Cnil)){
	goto T1240;}
	goto T1277;
	goto T1283;
T1283:;
	base[0]= (V708);
	base[1]= (V703);
	base[2]= CMPcaddr((V713));
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk195)(Lclptr195);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1240;}}
	goto T1277;
T1277:;
	{long V737;
	register long V738;
	V737= fix(CMPcadddr((V713)));
	V738= 0;
	goto T1291;
T1291:;
	if(!((V738)>=(V737))){
	goto T1292;}
	goto T1240;
	goto T1292;
T1292:;
	{object V739;
	V739= CMPcar((V702));
	V702= CMPcdr((V702));}
	V738= (long)(V738)+1;
	goto T1291;}
	goto T1275;
T1275:;
	if((V715!= VV[146]))goto T1302;
	if(!(type_of((V704))==t_cons)){
	goto T1303;}
	V704= make_cons(CMPcar((V704)),CMPcdr((V704)));
	goto T1303;
T1303:;
	(VV[93]->s.s_dbind)= CMPcadr((V713));
	(VV[94]->s.s_dbind)= (V704);
	(VV[95]->s.s_dbind)= CMPcaddr((V713));
	goto T1240;
	goto T1302;
T1302:;
	if((V715!= VV[302]))goto T1312;
	V706= (V704);
	goto T1240;
	goto T1312;
T1312:;
	FEerror("The ECASE key value ~s is illegal.",1,V715);
	goto T1240;}}
	goto T1240;
T1240:;
	goto T1239;
	goto T1237;
T1237:;
	{object V740 = (V704);
	VMR53(V740)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-TO-CVECTOR	*/

static object LI57(V743,V744)

register object V743;object V744;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;{object V745;
	base[0]= (V744);
	base[1]= (V743);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk285)();
	vs_top=sup;
	V745= vs_base[0];
	if(V745==Cnil)goto T1315;
	{object V746 = V745;
	VMR54(V746)}
	goto T1315;
T1315:;}
	{object V747;
	V747= CMPmake_fixnum((long)(((V743))->st.st_fillp));
	{register object V749;
	register long V750;
	long V751;
	V749= (V743);
	V750= (long)(((V749))->st.st_fillp);
	V751= (long)(((V749))->st.st_dim);
	if(!((V750)<(V751))){
	goto T1325;}
	(void)((((V749))->st.st_fillp)=((long)(1)+(V750)));
	V752 = CMPmake_fixnum(V750);
	(void)(aset1((V749),fix(V752),V744));
	goto T1320;
	goto T1325;
T1325:;
	base[0]= V744;
	base[1]= (V749);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk303)();
	vs_top=sup;}
	goto T1320;
T1320:;
	{object V753 = (V747);
	VMR54(V753)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIRST-FORM-TO-LISP	*/

static object LI60(V757,V758,V759)

register object V757;object V758;register object V759;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	base[0]= (V758);
	{object V760;
	{object V762;
	V762= CMPcdr(CMPcar(V757));
	{object V763;
	V763= CMPcar(CMPcar(V757));
	(V757)->c.c_car = (V762);
	V760= (V763);}}
	{object V764= CMPcar((V760));
	if((V764!= VV[145]))goto T1336;
	base[1]= CMPcadr((V760));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V765= vs_base[0];
	{object V766 = list(2,VV[174],list(3,VV[57],V765,VV[175]));
	VMR55(V766)}
	goto T1336;
T1336:;
	if((V764!= VV[158]))goto T1339;
	base[1]= CMPcadr((V760));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V767= vs_base[0];
	V768= list(3,VV[176],VV[76],V767);
	{object V769 = make_cons(/* INLINE-ARGS */V768,Cnil);
	VMR55(V769)}
	goto T1339;
T1339:;
	if((V764!= VV[114]))goto T1342;
	base[1]= CMPcadr((V760));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V770= vs_base[0];
	V771= list(3,VV[176],VV[76],list(2,VV[114],list(3,VV[177],VV[170],V770)));
	{object V772 = make_cons(/* INLINE-ARGS */V771,Cnil);
	VMR55(V772)}
	goto T1342;
T1342:;
	if((V764!= VV[156]))goto T1345;
	{object V774;
	V774= one_minus(CMPcadr((V760)));
	{object V775= (V774);
	if(!eql(V775,VV[179]))goto T1348;
	V773= VV[180];
	goto T1346;
	goto T1348;
T1348:;
	if(!eql(V775,VV[181]))goto T1349;
	V773= VV[182];
	goto T1346;
	goto T1349;
T1349:;
	V773= list(2,VV[183],(V774));}}
	goto T1346;
T1346:;
	{object V776 = list(2,list(3,VV[176],VV[178],append(V773,VV[184])),VV[185]);
	VMR55(V776)}
	goto T1345;
T1345:;
	if((V764!= VV[157]))goto T1350;
	{object V777;
	object V778;
	object V779;
	V777= CMPcadr((V760));
	V778= ((V759))->v.v_self[fix((V777))];
	base[4]= CMPcaddr((V760));
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V780= vs_base[0];
	V779= list(3,VV[62],list(4,VV[186],VV[103],VV[121],V780),VV[76]);
	if(((VV[187]->s.s_dbind))==Cnil){
	goto T1357;}
	if(!(type_of(V778)==t_fixnum)){
	goto T1360;}
	base[4]= (V778);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V782= vs_base[0];
	V783= list(3,VV[62],list(3,VV[188],VV[58],V782),VV[76]);
	{object V784 = make_cons(/* INLINE-ARGS */V783,Cnil);
	VMR55(V784)}
	goto T1360;
T1360:;
	if(!(type_of(V778)==t_cons)){
	goto T1365;}
	base[4]= (V778);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V785= vs_base[0];
	V786= list(3,VV[62],list(2,VV[189],V785),VV[76]);
	{object V787 = make_cons(/* INLINE-ARGS */V786,Cnil);
	VMR55(V787)}
	goto T1365;
T1365:;
	{object V788 = make_cons((V779),Cnil);
	VMR55(V788)}
	goto T1357;
T1357:;
	base[4]= (V777);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V789= vs_base[0];
	V790 = (V779);
	if(!(type_of(V778)==t_fixnum)){
	goto T1373;}
	V791= VV[192];
	goto T1371;
	goto T1373;
T1373:;
	if(!(type_of(V778)==t_cons)){
	goto T1376;}
	V791= VV[193];
	goto T1371;
	goto T1376;
T1376:;
	V791= VV[194];
	goto T1371;
T1371:;
	V793= list(7,VV[190],VV[191],VV[58],V789,VV[76],V790,V791);
	{object V794 = make_cons(/* INLINE-ARGS */V793,Cnil);
	VMR55(V794)}}
	goto T1350;
T1350:;
	if((V764!= VV[159]))goto T1378;
	{object V795;
	object V796;
	object V797;
	V795= CMPcadr((V760));
	V796= ((V759))->v.v_self[fix((V795))];
	base[4]= CMPcaddr((V760));
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V798= vs_base[0];
	V797= list(4,VV[195],VV[103],VV[121],V798);
	if(((VV[187]->s.s_dbind))==Cnil){
	goto T1386;}
	if(!(type_of(V796)==t_fixnum)){
	goto T1389;}
	base[4]= (V796);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V801= vs_base[0];
	V802= list(3,VV[188],VV[58],V801);
	V799= list(2,VV[196],list(3,VV[55],/* INLINE-ARGS */V802,list(2,VV[4],(VV[153]->s.s_dbind))));
	goto T1384;
	goto T1389;
T1389:;
	if(!(type_of(V796)==t_cons)){
	goto T1394;}
	base[4]= (V796);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V803= vs_base[0];
	V804= list(2,VV[189],V803);
	V799= list(2,VV[196],list(3,VV[55],/* INLINE-ARGS */V804,list(2,VV[4],(VV[153]->s.s_dbind))));
	goto T1384;
	goto T1394;
T1394:;
	V799= (V797);
	goto T1384;
	goto T1386;
T1386:;
	base[4]= (V795);
	vs_top=(vs_base=base+4)+1;
	L61(base);
	vs_top=sup;
	V805= vs_base[0];
	V806 = (V797);
	{object V808;
	V808= ((V759))->v.v_self[fix((V795))];
	if(!(type_of((V808))==t_fixnum)){
	goto T1403;}
	V807= VV[192];
	goto T1400;
	goto T1403;
T1403:;
	if(!(type_of((V808))==t_cons)){
	goto T1406;}
	V807= VV[193];
	goto T1400;
	goto T1406;
T1406:;
	V807= VV[194];}
	goto T1400;
T1400:;
	V799= list(6,VV[197],VV[191],VV[58],V805,V806,V807);
	goto T1384;
T1384:;
	{register object V810;
	V810= make_cons(Cnil,Cnil);
	{register long V811;
	register long V812;
	V811= fix(CMPcadddr((V760)));
	V812= 0;
	goto T1413;
T1413:;
	if(!((V812)>=(V811))){
	goto T1414;}
	V809= CMPcar((V810));
	goto T1408;
	goto T1414;
T1414:;
	V813= (*(LnkLI304))((V757),base[0],(V759));
	V814 = (V810);
	(void)((*(LnkLI282))(/* INLINE-ARGS */V813,V814));
	V812= (long)(V812)+1;
	goto T1413;}}
	goto T1408;
T1408:;
	V815= listA(3,VV[54],V799,V809);
	{object V816 = make_cons(/* INLINE-ARGS */V815,Cnil);
	VMR55(V816)}}
	goto T1378;
T1378:;
	if((V764!= VV[146]))goto T1421;
	base[1]= CMPcadr((V760));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V817= vs_base[0];
	V818= list(3,VV[176],VV[93],V817);
	base[1]= CMPcaddr((V760));
	vs_top=(vs_base=base+1)+1;
	L61(base);
	vs_top=sup;
	V819= vs_base[0];
	{object V820 = list(4,VV[198],/* INLINE-ARGS */V818,VV[199],list(3,VV[176],VV[95],V819));
	VMR55(V820)}
	goto T1421;
T1421:;
	if((V764!= VV[302]))goto T1426;
	{object V821 = VV[200];
	VMR55(V821)}
	goto T1426;
T1426:;
	FEerror("The ECASE key value ~s is illegal.",1,V764);
	{object V822 = Cnil;
	VMR55(V822)}}}
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
	{object V823=base[0]->c.c_cdr;
	base[2]= V823;}
	V825= listA(3,VV[205],VV[206],base[2]);
	base[3]= listA(3,VV[52],VV[204],append(VV[203],/* INLINE-ARGS */V825));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for FORM-LIST-TO-LISP	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	{object V826;
	object V827;
	check_arg(2);
	V826=(base[0]);
	V827=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V828;
	register object V829;
	register object V830;
	object V831;
	object V832;
	V828= make_cons((V827),Cnil);
	base[8]= CMPmake_fixnum((long)length((V827)));
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
	(void) (*Lnk283)();
	vs_top=sup;
	V829= vs_base[0];
	V830= CMPcar((V826));
	{register object V833;
	V833= make_cons(Cnil,Cnil);
	goto T1440;
T1440:;
	if((CMPcar((V828)))!=Cnil){
	goto T1442;}
	V831= CMPcar((V833));
	goto T1437;
	goto T1442;
T1442:;
	V834= (*(LnkLI304))((V828),(V829),(V830));
	V835 = (V833);
	(void)((*(LnkLI282))(/* INLINE-ARGS */V834,V835));
	goto T1440;}
	goto T1437;
T1437:;
	V836 = CMPmake_fixnum((long)length((V829)));
	V832= list(2,VV[209],V836);
	V837= list(2,VV[212],list(3,VV[213],(V832),VV[202]));
	base[7]= list(4,VV[210],VV[211],/* INLINE-ARGS */V837,list(2,VV[170],list(5,VV[210],VV[214],VV[215],make_cons(VV[216],(V831)),VV[175])));
	V838 = (V826);
	base[9]= (V829);
	base[10]= (V832);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk305)();
	vs_top=sup;
	V839= vs_base[0];
	base[8]= list(2,V838,V839);
	vs_top=(vs_base=base+7)+2;
	return;}
	}
}
/*	local entry for function GET-MAKE-INSTANCE-FUNCTION-SYMBOL	*/

static object LI64(V841)

object V841;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	V842= make_cons((V841),Cnil);
	(void)((*(LnkLI7))(/* INLINE-ARGS */V842));
	{object V843 = (*(LnkLI75))((V841));
	VMR58(V843)}
	return Cnil;
}
/*	local function CONST	*/

static void L61(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_check;
	{object V844;
	check_arg(1);
	V844=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(type_of((V844))==t_fixnum||
type_of((V844))==t_bignum||
type_of((V844))==t_ratio||
type_of((V844))==t_shortfloat||
type_of((V844))==t_longfloat||
type_of((V844))==t_complex){
	goto T1453;}
	if(!(type_of((V844))==t_character)){
	goto T1454;}
	goto T1453;
T1453:;
	base[1]= (V844);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1454;
T1454:;
	if(!(type_of((V844))==t_symbol)){
	goto T1459;}
	base[1]= (V844);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_package();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1459;}
	base[1]= list(2,VV[4],(V844));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1459;
T1459:;
	base[1]= list(3,VV[201],VV[202],(*(LnkLI306))(base0[0],(V844)));
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
	{object V845;
	object V846;
	if(vs_top-vs_base<1) too_few_arguments();
	V845=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V846=(base[1]);
	vs_top=sup;
	{object V847;
	if(((base0[3]->c.c_car))==Cnil){
	goto T1466;}
	V847= (VFUN_NARGS=2,(*(LnkLI307))((base0[4]->c.c_car),(base0[3]->c.c_car)));
	goto T1464;
	goto T1466;
T1466:;
	V847= (V845);
	goto T1464;
T1464:;
	if(!(((V847))==((V845)))){
	goto T1468;}
	if(!((((((base0[2]->c.c_car))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1469;}
	goto T1468;
T1468:;
	base[2]= (V847);
	base[3]= (V846);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk124)();
	return;
	goto T1469;
T1469:;
	{register object V848;
	register object V849;
	{register object V850;
	V850= (base0[6]->c.c_car);
	if(!(type_of((V850))==t_cons)){
	goto T1477;}
	if(!((CMPcar((V850)))==(VV[130]))){
	goto T1477;}
	V848= (*(LnkLI111))(CMPcadr((V850)),CMPcaddr((V850)),Cnil,(V846));
	goto T1475;
	goto T1477;
T1477:;
	V848= (
	(type_of((V850)) == t_sfun ?(*(((V850))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V850))==t_vfun) ?
	(*(((V850))->sfn.sfn_self)):
	(fcall.fun=((V850)),fcalln))(Cnil,(V846)));}
	goto T1475;
T1475:;
	base[4]=VV[96]->s.s_gfdef;
	base[5]= (base0[7]->c.c_car);
	{object V851;
	V851= (V848);
	 vs_top=base+6;
	 while(V851!=Cnil)
	 {vs_push((V851)->c.c_car);V851=(V851)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk96)(Lclptr96);
	vs_top=sup;
	V849= vs_base[0];
	base[4]= (base0[0]->c.c_car);
	base[5]= VV[131];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk308)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1487;}
	(void)((
	V852 = STREF(object,(base0[0]->c.c_car),0),
	(type_of(V852) == t_sfun ?(*((V852)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V852)==t_vfun) ?
	(*((V852)->sfn.sfn_self)):
	(fcall.fun=(V852),fcalln))(STREF(object,(base0[0]->c.c_car),4),STREF(object,(base0[0]->c.c_car),8),(V849),(V848))));
	goto T1484;
	goto T1487;
T1487:;
	{register object V853;
	V853= (base0[0]->c.c_car);
	base[4]= (V853);
	base[5]= VV[132];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk308)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1492;}
	{object V854;
	object V855;
	register object V856;
	V854= STREF(object,(base0[0]->c.c_car),0);
	V855= make_cons((V849),(V848));
	V856= STREF(object,(base0[0]->c.c_car),4);
	if(((V856))==Cnil){
	goto T1500;}
	if((CMPcdr((V856)))!=Cnil){
	goto T1500;}
	(void)((
	(type_of((V854)) == t_sfun ?(*(((V854))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V854))==t_vfun) ?
	(*(((V854))->sfn.sfn_self)):
	(fcall.fun=((V854)),fcalln))((V855),CMPcar((V856)))));
	goto T1484;
	goto T1500;
T1500:;
	base[4]= (V854);
	base[5]= (V855);
	{object V857;
	V857= (V856);
	 vs_top=base+6;
	 while(V857!=Cnil)
	 {vs_push((V857)->c.c_car);V857=(V857)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1484;}
	goto T1492;
T1492:;
	base[4]= (V853);
	vs_top=(vs_base=base+4)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1508;}
	base[4]= (base0[0]->c.c_car);
	base[5]= (V849);
	{object V858;
	V858= (V848);
	 vs_top=base+6;
	 while(V858!=Cnil)
	 {vs_push((V858)->c.c_car);V858=(V858)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1484;
	goto T1508;
T1508:;
	base[5]= VV[97];
	base[6]= (V853);
	base[7]= VV[144];
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk309)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;}
	goto T1484;
T1484:;
	base[4]= (V849);
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
	{object V859;
	object V860;
	if(vs_top-vs_base<1) too_few_arguments();
	V859=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V860=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	base[3]= VV[131];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk308)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1520;}
	base[2]= STREF(object,(base0[0]->c.c_car),0);
	base[3]= STREF(object,(base0[0]->c.c_car),4);
	base[4]= STREF(object,(base0[0]->c.c_car),8);
	base[5]= (V859);
	base[6]= Ct;
	base[7]= (V860);
	vs_top=(vs_base=base+3)+5;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1520;
T1520:;
	{register object V861;
	V861= (base0[0]->c.c_car);
	base[2]= (V861);
	base[3]= VV[132];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk308)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1531;}
	{object V862;
	object V863;
	register object V864;
	V862= STREF(object,(base0[0]->c.c_car),0);
	V863= listA(3,(V859),Ct,(V860));
	V864= STREF(object,(base0[0]->c.c_car),4);
	if(((V864))==Cnil){
	goto T1539;}
	if((CMPcdr((V864)))!=Cnil){
	goto T1539;}
	base[2]= (V863);
	base[3]= CMPcar((V864));
	vs_top=(vs_base=base+2)+2;
	{object _funobj = (V862);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1539;
T1539:;
	base[2]= (V862);
	base[3]= (V863);
	{object V865;
	V865= (V864);
	 vs_top=base+4;
	 while(V865!=Cnil)
	 {vs_push((V865)->c.c_car);V865=(V865)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T1531;
T1531:;
	base[2]= (V861);
	vs_top=(vs_base=base+2)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1549;}
	base[2]= (base0[0]->c.c_car);
	base[3]= (V859);
	base[4]= Ct;
	{object V866;
	V866= (V860);
	 vs_top=base+5;
	 while(V866!=Cnil)
	 {vs_push((V866)->c.c_car);V866=(V866)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1549;
T1549:;
	base[3]= VV[98];
	base[4]= (V861);
	base[5]= VV[143];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk309)();
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
	{object V867;
	object V868;
	object V869;
	if(vs_top-vs_base<2) too_few_arguments();
	V867=(base[0]);
	V868=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V869=(base[2]);
	vs_top=sup;
	{register object V870;
	V870= (base0[3]->c.c_car);
	if(!(type_of((V870))==t_cons)){
	goto T1562;}
	if(!((CMPcar((V870)))==(VV[130]))){
	goto T1562;}
	(void)((*(LnkLI111))(CMPcadr((V870)),CMPcaddr((V870)),(V867),(V869)));
	goto T1560;
	goto T1562;
T1562:;
	(void)((
	(type_of((V870)) == t_sfun ?(*(((V870))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V870))==t_vfun) ?
	(*(((V870))->sfn.sfn_self)):
	(fcall.fun=((V870)),fcalln))((V867),(V869))));}
	goto T1560;
T1560:;
	base[3]= (V867);
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
	{object V871;
	object V872;
	if(vs_top-vs_base<1) too_few_arguments();
	V871=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V872=(base[1]);
	vs_top=sup;
	{object V873;
	if(((base0[6]->c.c_car))==Cnil){
	goto T1568;}
	V873= (VFUN_NARGS=2,(*(LnkLI307))((base0[7]->c.c_car),(base0[6]->c.c_car)));
	goto T1566;
	goto T1568;
T1568:;
	V873= (V871);
	goto T1566;
T1566:;
	if(!(((V873))==((V871)))){
	goto T1570;}
	if(!((((((base0[5]->c.c_car))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1571;}
	goto T1570;
T1570:;
	base[2]= (V873);
	base[3]= (V872);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk124)();
	return;
	goto T1571;
T1571:;
	{register object V874;
	object V875;
	V874= (
	(type_of((base0[4]->c.c_car)) == t_sfun ?(*(((base0[4]->c.c_car))->sfn.sfn_self)):
	(fcall.argd=2,type_of((base0[4]->c.c_car))==t_vfun) ?
	(*(((base0[4]->c.c_car))->sfn.sfn_self)):
	(fcall.fun=((base0[4]->c.c_car)),fcalln))((base0[5]->c.c_car),(base0[0]->c.c_car)));
	{object V876;
	V876= (base0[1]->c.c_car);
	if(!(type_of((V876))==t_cons)){
	goto T1580;}
	if(!((CMPcar((V876)))==(VV[130]))){
	goto T1580;}
	V875= (*(LnkLI111))(CMPcadr((V876)),CMPcaddr((V876)),(V874),(V872));
	goto T1578;
	goto T1580;
T1580:;
	V875= (
	(type_of((V876)) == t_sfun ?(*(((V876))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V876))==t_vfun) ?
	(*(((V876))->sfn.sfn_self)):
	(fcall.fun=((V876)),fcalln))((V874),(V872)));}
	goto T1578;
T1578:;
	{object V877;
	register object V878;
	V877= (base0[3]->c.c_car);
	V878= CMPcar((V877));
	goto T1588;
T1588:;
	if(!(((V877))==Cnil)){
	goto T1589;}
	goto T1584;
	goto T1589;
T1589:;
	base[5]= (V878);
	base[6]= VV[131];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk308)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1596;}
	(void)((
	V879 = STREF(object,(V878),0),
	(type_of(V879) == t_sfun ?(*((V879)->sfn.sfn_self)):
	(fcall.argd=5,type_of(V879)==t_vfun) ?
	(*((V879)->sfn.sfn_self)):
	(fcall.fun=(V879),fcalln))(STREF(object,(V878),4),STREF(object,(V878),8),(V874),Ct,(V875))));
	goto T1593;
	goto T1596;
T1596:;
	base[5]= V878;
	base[6]= VV[132];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk308)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1601;}
	{object V881;
	object V882;
	object V883;
	V881= STREF(object,(V878),0);
	V882= listA(3,(V874),Ct,(V875));
	V883= STREF(object,(V878),4);
	if(((V883))==Cnil){
	goto T1609;}
	if((CMPcdr((V883)))!=Cnil){
	goto T1609;}
	(void)((
	(type_of((V881)) == t_sfun ?(*(((V881))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V881))==t_vfun) ?
	(*(((V881))->sfn.sfn_self)):
	(fcall.fun=((V881)),fcalln))((V882),CMPcar((V883)))));
	goto T1593;
	goto T1609;
T1609:;
	base[5]= (V881);
	base[6]= (V882);
	{object V884;
	V884= (V883);
	 vs_top=base+7;
	 while(V884!=Cnil)
	 {vs_push((V884)->c.c_car);V884=(V884)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1593;}
	goto T1601;
T1601:;
	base[5]= V878;
	vs_top=(vs_base=base+5)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1617;}
	base[5]= (V878);
	base[6]= (V874);
	base[7]= Ct;
	{object V885;
	V885= (V875);
	 vs_top=base+8;
	 while(V885!=Cnil)
	 {vs_push((V885)->c.c_car);V885=(V885)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1593;
	goto T1617;
T1617:;
	base[6]= VV[133];
	base[7]= V878;
	base[8]= VV[136];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk309)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	goto T1593;
T1593:;
	V877= CMPcdr((V877));
	V878= CMPcar((V877));
	goto T1588;}
	goto T1584;
T1584:;
	{object V886;
	register object V887;
	V886= (base0[2]->c.c_car);
	V887= CMPcar((V886));
	goto T1637;
T1637:;
	if(!(((V886))==Cnil)){
	goto T1638;}
	goto T1633;
	goto T1638;
T1638:;
	base[5]= (V887);
	base[6]= VV[131];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk308)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1645;}
	(void)((
	V888 = STREF(object,(V887),0),
	(type_of(V888) == t_sfun ?(*((V888)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V888)==t_vfun) ?
	(*((V888)->sfn.sfn_self)):
	(fcall.fun=(V888),fcalln))(STREF(object,(V887),4),STREF(object,(V887),8),(V874),(V875))));
	goto T1642;
	goto T1645;
T1645:;
	base[5]= V887;
	base[6]= VV[132];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk308)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1650;}
	{object V890;
	object V891;
	object V892;
	V890= STREF(object,(V887),0);
	V891= make_cons((V874),(V875));
	V892= STREF(object,(V887),4);
	if(((V892))==Cnil){
	goto T1658;}
	if((CMPcdr((V892)))!=Cnil){
	goto T1658;}
	(void)((
	(type_of((V890)) == t_sfun ?(*(((V890))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V890))==t_vfun) ?
	(*(((V890))->sfn.sfn_self)):
	(fcall.fun=((V890)),fcalln))((V891),CMPcar((V892)))));
	goto T1642;
	goto T1658;
T1658:;
	base[5]= (V890);
	base[6]= (V891);
	{object V893;
	V893= (V892);
	 vs_top=base+7;
	 while(V893!=Cnil)
	 {vs_push((V893)->c.c_car);V893=(V893)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1642;}
	goto T1650;
T1650:;
	base[5]= V887;
	vs_top=(vs_base=base+5)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1666;}
	base[5]= (V887);
	base[6]= (V874);
	{object V894;
	V894= (V875);
	 vs_top=base+7;
	 while(V894!=Cnil)
	 {vs_push((V894)->c.c_car);V894=(V894)->c.c_cdr;}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1642;
	goto T1666;
T1666:;
	base[6]= VV[133];
	base[7]= V887;
	base[8]= VV[137];
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk309)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	goto T1642;
T1642:;
	V886= CMPcdr((V886));
	V887= CMPcar((V886));
	goto T1637;}
	goto T1633;
T1633:;
	base[4]= (V874);
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
	{object V895;
	register object V896;
	if(vs_top-vs_base<1) too_few_arguments();
	V895=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V896=(base[1]);
	vs_top=sup;
	{object V897;
	if(((base0[6]->c.c_car))==Cnil){
	goto T1683;}
	V897= (VFUN_NARGS=2,(*(LnkLI307))((base0[7]->c.c_car),(base0[6]->c.c_car)));
	goto T1681;
	goto T1683;
T1683:;
	V897= (V895);
	goto T1681;
T1681:;
	if(!(((V897))==((V895)))){
	goto T1685;}
	if(!((((((base0[5]->c.c_car))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1686;}
	goto T1685;
T1685:;
	base[2]= (V897);
	base[3]= (V896);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk124)();
	return;
	goto T1686;
T1686:;
	{register object V898;
	{object V899;
	V899= (*(LnkLI310))();
	V900 = (V899);
	V901 = (base0[5]->c.c_car);
	V902= Ct;
	STSET(object,V900,0, V901);
	(void)(V901);
	V903 = (V899);
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	Lcopy_seq();
	vs_top=sup;
	V904= vs_base[0];
	V905= Ct;
	STSET(object,V903,4, V904);
	(void)(V904);
	V898= (V899);}
	{object V906;
	V906= (base0[1]->c.c_car);
	if(!(type_of((V906))==t_cons)){
	goto T1700;}
	if(!((CMPcar((V906)))==(VV[130]))){
	goto T1700;}
	(void)((*(LnkLI111))(CMPcadr((V906)),CMPcaddr((V906)),(V898),(V896)));
	goto T1698;
	goto T1700;
T1700:;
	(void)((
	(type_of((V906)) == t_sfun ?(*(((V906))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V906))==t_vfun) ?
	(*(((V906))->sfn.sfn_self)):
	(fcall.fun=((V906)),fcalln))((V898),(V896))));}
	goto T1698;
T1698:;
	{object V907;
	register object V908;
	V907= (base0[3]->c.c_car);
	V908= CMPcar((V907));
	goto T1708;
T1708:;
	if(!(((V907))==Cnil)){
	goto T1709;}
	goto T1704;
	goto T1709;
T1709:;
	base[3]= (V908);
	base[4]= VV[131];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk308)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1716;}
	(void)((
	V909 = STREF(object,(V908),0),
	(type_of(V909) == t_sfun ?(*((V909)->sfn.sfn_self)):
	(fcall.argd=5,type_of(V909)==t_vfun) ?
	(*((V909)->sfn.sfn_self)):
	(fcall.fun=(V909),fcalln))(STREF(object,(V908),4),STREF(object,(V908),8),(V898),Ct,(V896))));
	goto T1713;
	goto T1716;
T1716:;
	base[3]= V908;
	base[4]= VV[132];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk308)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1721;}
	{object V911;
	object V912;
	object V913;
	V911= STREF(object,(V908),0);
	V912= listA(3,(V898),Ct,(V896));
	V913= STREF(object,(V908),4);
	if(((V913))==Cnil){
	goto T1729;}
	if((CMPcdr((V913)))!=Cnil){
	goto T1729;}
	(void)((
	(type_of((V911)) == t_sfun ?(*(((V911))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V911))==t_vfun) ?
	(*(((V911))->sfn.sfn_self)):
	(fcall.fun=((V911)),fcalln))((V912),CMPcar((V913)))));
	goto T1713;
	goto T1729;
T1729:;
	base[3]= (V911);
	base[4]= (V912);
	{object V914;
	V914= (V913);
	 vs_top=base+5;
	 while(V914!=Cnil)
	 {vs_push((V914)->c.c_car);V914=(V914)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1713;}
	goto T1721;
T1721:;
	base[3]= V908;
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1737;}
	base[3]= (V908);
	base[4]= (V898);
	base[5]= Ct;
	{object V915;
	V915= (V896);
	 vs_top=base+6;
	 while(V915!=Cnil)
	 {vs_push((V915)->c.c_car);V915=(V915)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1713;
	goto T1737;
T1737:;
	base[4]= VV[133];
	base[5]= V908;
	base[6]= VV[134];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk309)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T1713;
T1713:;
	V907= CMPcdr((V907));
	V908= CMPcar((V907));
	goto T1708;}
	goto T1704;
T1704:;
	{object V916;
	register object V917;
	V916= (base0[2]->c.c_car);
	V917= CMPcar((V916));
	goto T1757;
T1757:;
	if(!(((V916))==Cnil)){
	goto T1758;}
	goto T1753;
	goto T1758;
T1758:;
	base[3]= (V917);
	base[4]= VV[131];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk308)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1765;}
	(void)((
	V918 = STREF(object,(V917),0),
	(type_of(V918) == t_sfun ?(*((V918)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V918)==t_vfun) ?
	(*((V918)->sfn.sfn_self)):
	(fcall.fun=(V918),fcalln))(STREF(object,(V917),4),STREF(object,(V917),8),(V898),(V896))));
	goto T1762;
	goto T1765;
T1765:;
	base[3]= V917;
	base[4]= VV[132];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk308)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1770;}
	{object V920;
	object V921;
	object V922;
	V920= STREF(object,(V917),0);
	V921= make_cons((V898),(V896));
	V922= STREF(object,(V917),4);
	if(((V922))==Cnil){
	goto T1778;}
	if((CMPcdr((V922)))!=Cnil){
	goto T1778;}
	(void)((
	(type_of((V920)) == t_sfun ?(*(((V920))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V920))==t_vfun) ?
	(*(((V920))->sfn.sfn_self)):
	(fcall.fun=((V920)),fcalln))((V921),CMPcar((V922)))));
	goto T1762;
	goto T1778;
T1778:;
	base[3]= (V920);
	base[4]= (V921);
	{object V923;
	V923= (V922);
	 vs_top=base+5;
	 while(V923!=Cnil)
	 {vs_push((V923)->c.c_car);V923=(V923)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1762;}
	goto T1770;
T1770:;
	base[3]= V917;
	vs_top=(vs_base=base+3)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1786;}
	base[3]= (V917);
	base[4]= (V898);
	{object V924;
	V924= (V896);
	 vs_top=base+5;
	 while(V924!=Cnil)
	 {vs_push((V924)->c.c_car);V924=(V924)->c.c_cdr;}
	vs_base=base+4;}
	{object _funobj = base[3];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	goto T1762;
	goto T1786;
T1786:;
	base[4]= VV[133];
	base[5]= V917;
	base[6]= VV[135];
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk309)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T1762;
T1762:;
	V916= CMPcdr((V916));
	V917= CMPcar((V916));
	goto T1757;}
	goto T1753;
T1753:;
	base[2]= (V898);
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
	{object V925;
	check_arg(1);
	V925=(base[0]);
	vs_top=sup;
	{register object V926;
	base[1]= (V925);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk267)(Lclptr267);
	vs_top=sup;
	V926= vs_base[0];
	if(((V926))!=Cnil){
	goto T1804;}
	base[1]= (V925);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V927= vs_base[0];
	base[1]= ((CMPcar(V927))==((VV[1]->s.s_dbind))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1804;
T1804:;
	if((CMPcdr((V926)))==Cnil){
	goto T1808;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1808;
T1808:;
	if(!((CMPcar((V926)))==(VV[106]))){
	goto T1810;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1810;
T1810:;
	base[1]= ((CMPcar((V926)))==(VV[107])?Ct:Cnil);
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
	{object V928;
	object V929;
	if(vs_top-vs_base<1) too_few_arguments();
	V928=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V929=(base[1]);
	vs_top=sup;
	base[2]=VV[311]->s.s_gfdef;
	base[3]= (base0[0]->c.c_car);
	base[4]= (V928);
	{object V930;
	V930= (V929);
	 vs_top=base+5;
	 while(V930!=Cnil)
	 {vs_push((V930)->c.c_car);V930=(V930)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk311)(Lclptr311);
	return;
	}
}
/*	local function COMPUTE-VALID-P	*/

static void L32(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_check;
	{object V931;
	check_arg(1);
	V931=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((((base0[3])==Cnil?Ct:Cnil))==Cnil)){
	goto T1815;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1815;
T1815:;
	{register object V932;
	object V933;
	base[1]= base0[1];
	base[2]= (V931);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk312)();
	if(vs_base>=vs_top){vs_top=sup;goto T1820;}
	V932= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1821;}
	V933= vs_base[0];
	vs_top=sup;
	goto T1822;
	goto T1820;
T1820:;
	V932= Cnil;
	goto T1821;
T1821:;
	V933= Cnil;
	goto T1822;
T1822:;
	if(!(((((V933))==Cnil?Ct:Cnil))==Cnil)){
	goto T1823;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1823;
T1823:;
	{register object V934;
	register object V935;
	V934= base0[2];
	V935= CMPcar((V934));
	goto T1828;
T1828:;
	if(!(((V934))==Cnil)){
	goto T1829;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1829;
T1829:;
	{register object x= (V935),V936= (V932);
	while(V936!=Cnil)
	if(eql(x,V936->c.c_car)){
	goto T1833;
	}else V936=V936->c.c_cdr;}
	base[2]= make_cons(VV[100],(V935));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T1833;
T1833:;
	V934= CMPcdr((V934));
	V935= CMPcar((V934));
	goto T1828;}}
	}
}
/*	local function CLOSURE	*/

static void LC65(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_check;
	{register object V937;
	object V938;
	object V939;
	check_arg(3);
	V937=(base[0]);
	V938=(base[1]);
	V939=(base[2]);
	vs_top=sup;{object V940;
	if(((V938))==(VV[8])){
	goto T1843;}
	V940= Cnil;
	goto T1842;
	goto T1843;
T1843:;
	if(type_of((V937))==t_cons){
	goto T1845;}
	V940= Cnil;
	goto T1842;
	goto T1845;
T1845:;
	if((CMPcar((V937)))==(VV[9])){
	goto T1847;}
	V940= Cnil;
	goto T1842;
	goto T1847;
T1847:;
	V940= (*(LnkLI313))((V937));
	goto T1842;
T1842:;
	if(V940==Cnil)goto T1841;
	base[3]= V940;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T1841;
T1841:;}
	base[3]= (V937);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
static object  LnkTLI313(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[313],(void **)(void *)&LnkLI313,1,first,ap);va_end(ap);return V1;} /* EXPAND-MAKE-INSTANCE-FORM */
static void LnkT312(){ call_or_link(VV[312],(void **)(void *)&Lnk312);} /* CHECK-INITARGS-VALUES */
static void LnkT311(ptr) object *ptr;{ call_or_link_closure(VV[311],(void **)(void *)&Lnk311,(void **)(void *)&Lclptr311);} /* NO-APPLICABLE-METHOD */
static object  LnkTLI310(){return call_proc0(VV[310],(void **)(void *)&LnkLI310);} /* %%ALLOCATE-INSTANCE--CLASS */
static void LnkT309(){ call_or_link(VV[309],(void **)(void *)&Lnk309);} /* TYPECASE-ERROR-STRING */
static void LnkT308(){ call_or_link(VV[308],(void **)(void *)&Lnk308);} /* STRUCTURE-SUBTYPE-P */
static void LnkT96(ptr) object *ptr;{ call_or_link_closure(VV[96],(void **)(void *)&Lnk96,(void **)(void *)&Lclptr96);} /* ALLOCATE-INSTANCE */
static object  LnkTLI111(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[111],(void **)(void *)&LnkLI111,4,first,ap);va_end(ap);return V1;} /* INITIALIZE-INSTANCE-SIMPLE */
static void LnkT124(){ call_or_link(VV[124],(void **)(void *)&Lnk124);} /* MAKE-INSTANCE-FUNCTION-TRAP */
static object  LnkTLI307(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[307],(void **)(void *)&LnkLI307,first,ap);va_end(ap);return V1;} /* FIND-CLASS-FROM-CELL */
static object  LnkTLI306(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[306],(void **)(void *)&LnkLI306,2,first,ap);va_end(ap);return V1;} /* ADD-TO-CVECTOR */
static object  LnkTLI7(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[7],(void **)(void *)&LnkLI7,1,first,ap);va_end(ap);return V1;} /* GET-MAKE-INSTANCE-FUNCTIONS */
static void LnkT305(){ call_or_link(VV[305],(void **)(void *)&Lnk305);} /* COERCE */
static object  LnkTLI304(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[304],(void **)(void *)&LnkLI304,3,first,ap);va_end(ap);return V1;} /* FIRST-FORM-TO-LISP */
static void LnkT303(){ call_or_link(VV[303],(void **)(void *)&Lnk303);} /* VECTOR-PUSH-EXTEND */
static void LnkT195(ptr) object *ptr;{ call_or_link_closure(VV[195],(void **)(void *)&Lnk195,(void **)(void *)&Lclptr195);} /* SLOT-BOUNDP-USING-CLASS */
static object  LnkTLI301(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[301],(void **)(void *)&LnkLI301,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI300(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[300],(void **)(void *)&LnkLI300,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT299(){ call_or_link(VV[299],(void **)(void *)&Lnk299);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT298(){ call_or_link(VV[298],(void **)(void *)&Lnk298);} /* UPDATE-MAKE-INSTANCE-FUNCTION-TABLE */
static object  LnkTLI297(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[297],(void **)(void *)&LnkLI297,3,first,ap);va_end(ap);return V1;} /* MAKE-TOP-LEVEL-FORM */
static void LnkT296(){ call_or_link(VV[296],(void **)(void *)&Lnk296);} /* COMPILE-LAMBDA */
static void LnkT295(){ call_or_link(VV[295],(void **)(void *)&Lnk295);} /* UNION */
static void LnkT294(){ call_or_link(VV[294],(void **)(void *)&Lnk294);} /* FORM-LIST-TO-LISP */
static object  LnkTLI293(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[293],(void **)(void *)&LnkLI293,1,first,ap);va_end(ap);return V1;} /* GET-PV-CELL-FOR-CLASS */
static object  LnkTLI292(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[292],(void **)(void *)&LnkLI292,2,first,ap);va_end(ap);return V1;} /* PV-TABLE-LOOKUP */
static object  LnkTLI291(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[291],(void **)(void *)&LnkLI291,first,ap);va_end(ap);return V1;} /* INTERN-PV-TABLE */
static void LnkT290(ptr) object *ptr;{ call_or_link_closure(VV[290],(void **)(void *)&Lnk290,(void **)(void *)&Lclptr290);} /* SLOT-DEFINITION-LOCATION */
static void LnkT289(ptr) object *ptr;{ call_or_link_closure(VV[289],(void **)(void *)&Lnk289,(void **)(void *)&Lclptr289);} /* SLOT-DEFINITION-INITFUNCTION */
static void LnkT288(ptr) object *ptr;{ call_or_link_closure(VV[288],(void **)(void *)&Lnk288,(void **)(void *)&Lclptr288);} /* SLOT-DEFINITION-INITFORM */
static void LnkT287(){ call_or_link(VV[287],(void **)(void *)&Lnk287);} /* STABLE-SORT */
static void LnkT285(){ call_or_link(VV[285],(void **)(void *)&Lnk285);} /* POSITION */
static void LnkT284(ptr) object *ptr;{ call_or_link_closure(VV[284],(void **)(void *)&Lnk284,(void **)(void *)&Lclptr284);} /* SLOT-DEFINITION-NAME */
static void LnkT283(){ call_or_link(VV[283],(void **)(void *)&Lnk283);} /* MAKE-ARRAY */
static object  LnkTLI282(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[282],(void **)(void *)&LnkLI282,2,first,ap);va_end(ap);return V1;} /* ADD-FORMS */
static void LnkT281(ptr) object *ptr;{ call_or_link_closure(VV[281],(void **)(void *)&Lnk281,(void **)(void *)&Lclptr281);} /* SLOT-DEFINITION-INITARGS */
static void LnkT280(ptr) object *ptr;{ call_or_link_closure(VV[280],(void **)(void *)&Lnk280,(void **)(void *)&Lclptr280);} /* CLASS-SLOTS */
static void LnkT279(ptr) object *ptr;{ call_or_link_closure(VV[279],(void **)(void *)&Lnk279,(void **)(void *)&Lclptr279);} /* CLASS-DEFAULT-INITARGS */
static void LnkT278(){ call_or_link(VV[278],(void **)(void *)&Lnk278);} /* GET-SECONDARY-DISPATCH-FUNCTION */
static void LnkT277(){ call_or_link(VV[277],(void **)(void *)&Lnk277);} /* GET-COMPLEX-INITIALIZATION-FUNCTIONS */
static void LnkT276(){ call_or_link(VV[276],(void **)(void *)&Lnk276);} /* GET-SIMPLE-INITIALIZATION-FUNCTION */
static void LnkT275(){ call_or_link(VV[275],(void **)(void *)&Lnk275);} /* MAKE-EFFECTIVE-METHOD-FUNCTION */
static void LnkT274(){ call_or_link(VV[274],(void **)(void *)&Lnk274);} /* REMOVE */
static void LnkT272(ptr) object *ptr;{ call_or_link_closure(VV[272],(void **)(void *)&Lnk272,(void **)(void *)&Lclptr272);} /* FUNCALLABLE-STANDARD-CLASS-P */
static void LnkT270(ptr) object *ptr;{ call_or_link_closure(VV[270],(void **)(void *)&Lnk270,(void **)(void *)&Lclptr270);} /* STANDARD-CLASS-P */
static void LnkT268(ptr) object *ptr;{ call_or_link_closure(VV[268],(void **)(void *)&Lnk268,(void **)(void *)&Lclptr268);} /* STRUCTURE-CLASS-P */
static void LnkT267(ptr) object *ptr;{ call_or_link_closure(VV[267],(void **)(void *)&Lnk267,(void **)(void *)&Lclptr267);} /* METHOD-QUALIFIERS */
static object  LnkTLI266(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[266],(void **)(void *)&LnkLI266,5,first,ap);va_end(ap);return V1;} /* MAKE-INSTANCE-FUNCTION-SIMPLE */
static object  LnkTLI265(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[265],(void **)(void *)&LnkLI265,5,first,ap);va_end(ap);return V1;} /* MAKE-INSTANCE-FUNCTION-COMPLEX */
static void LnkT264(){ call_or_link(VV[264],(void **)(void *)&Lnk264);} /* SOME */
static object  LnkTLI262(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[262],(void **)(void *)&LnkLI262,first,ap);va_end(ap);return V1;} /* CHECK-INITARGS-1 */
static void LnkT104(ptr) object *ptr;{ call_or_link_closure(VV[104],(void **)(void *)&Lnk104,(void **)(void *)&Lclptr104);} /* DEFAULT-INITARGS */
static object  LnkTLI261(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[261],(void **)(void *)&LnkLI261,5,first,ap);va_end(ap);return V1;} /* GET-MAKE-INSTANCE-FUNCTION-INTERNAL */
static void LnkT260(){ call_or_link(VV[260],(void **)(void *)&Lnk260);} /* EVERY */
static void LnkT259(ptr) object *ptr;{ call_or_link_closure(VV[259],(void **)(void *)&Lnk259,(void **)(void *)&Lclptr259);} /* METHOD-SPECIALIZERS */
static object  LnkTLI258(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[258],(void **)(void *)&LnkLI258,2,first,ap);va_end(ap);return V1;} /* FIND-STANDARD-II-METHOD */
static void LnkT257(ptr) object *ptr;{ call_or_link_closure(VV[257],(void **)(void *)&Lnk257,(void **)(void *)&Lclptr257);} /* COMPUTE-APPLICABLE-METHODS */
static object  LnkTLI254(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[254],(void **)(void *)&LnkLI254,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static void LnkT256(ptr) object *ptr;{ call_or_link_closure(VV[256],(void **)(void *)&Lnk256,(void **)(void *)&Lclptr256);} /* FINALIZE-INHERITANCE */
static void LnkT255(ptr) object *ptr;{ call_or_link_closure(VV[255],(void **)(void *)&Lnk255,(void **)(void *)&Lclptr255);} /* CLASS-FINALIZED-P */
static object  LnkTLI252(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[252],(void **)(void *)&LnkLI252,1,first,ap);va_end(ap);return V1;} /* GET-MAKE-INSTANCE-FUNCTION */
static void LnkT251(){ call_or_link(VV[251],(void **)(void *)&Lnk251);} /* MAKE-SHARED-INITIALIZE-FORM-LIST */
static void LnkT250(ptr) object *ptr;{ call_or_link_closure(VV[250],(void **)(void *)&Lnk250,(void **)(void *)&Lclptr250);} /* CLASS-PROTOTYPE */
static void LnkT249(){ call_or_link(VV[249],(void **)(void *)&Lnk249);} /* INITIALIZE-INSTANCE-SIMPLE-FUNCTION */
static void LnkT248(){ call_or_link(VV[248],(void **)(void *)&Lnk248);} /* MAKE-DEFAULT-INITARGS-FORM-LIST */
static object  LnkTLI247(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[247],(void **)(void *)&LnkLI247,first,ap);va_end(ap);return V1;} /* MAKE-INITIALIZE-INFO */
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

