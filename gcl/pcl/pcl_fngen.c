
#include "cmpinclude.h"
#include "pcl_fngen.h"
void init_pcl_fngen(){do_init(VV);}
/*	function definition for GET-FUNCTION	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	{object V1;
	object V2;
	object V3;
	object V4;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V1=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1;}
	V2=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2;}
	V3=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T3;}
	V4=(base[3]);
	vs_top=sup;
	goto T4;
	goto T1;
T1:;
	V2= (VV[14]->s.s_gfdef);
	goto T2;
T2:;
	V3= (VV[15]->s.s_gfdef);
	goto T3;
T3:;
	V4= (VV[16]->s.s_gfdef);
	goto T4;
T4:;
	base[4]= (*(LnkLI17))((V1),(V2),(V3));
	{object V5;
	V5= (*(LnkLI18))((V1),(V4));
	 vs_top=base+5;
	 while(V5!=Cnil)
	 {vs_push((V5)->c.c_car);V5=(V5)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	function definition for GET-FUNCTION1	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{object V6;
	object V7;
	object V8;
	object V9;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V6=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T10;}
	V7=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T11;}
	V8=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T12;}
	V9=(base[3]);
	vs_top=sup;
	goto T13;
	goto T10;
T10:;
	V7= (VV[14]->s.s_gfdef);
	goto T11;
T11:;
	V8= (VV[15]->s.s_gfdef);
	goto T12;
T12:;
	V9= (VV[16]->s.s_gfdef);
	goto T13;
T13:;
	base[4]= (*(LnkLI17))((V6),(V7),(V8));
	base[5]= (*(LnkLI18))((V6),(V9));
	vs_top=(vs_base=base+4)+2;
	return;
	}
}
/*	local entry for function DEFAULT-CONSTANTP	*/

static object LI3(V11)

object V11;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	base[0]= (V11);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T19;}
	{object V12 = Cnil;
	VMR3(V12)}
	goto T19;
T19:;
	base[1]= (V11);
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk19)();
	vs_top=sup;
	V13= vs_base[0];
	{object V14 = ((V13)==Cnil?Ct:Cnil);
	VMR3(V14)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEFAULT-TEST-CONVERTER	*/

static object LI4(V16)

object V16;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if(((*(LnkLI20))((V16)))==Cnil){
	goto T27;}
	{object V17 = VV[1];
	VMR4(V17)}
	goto T27;
T27:;
	{object V18 = (V16);
	VMR4(V18)}
	return Cnil;
}
/*	function definition for DEFAULT-CODE-CONVERTER	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{object V19;
	check_arg(1);
	V19=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((*(LnkLI20))((V19)))==Cnil){
	goto T30;}
	{object V20;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V20= vs_base[0];
	base[1]= (V20);
	base[2]= make_cons((V20),Cnil);
	vs_top=(vs_base=base+1)+2;
	return;}
	goto T30;
T30:;
	base[1]= (V19);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function DEFAULT-CONSTANT-CONVERTER	*/

static object LI6(V22)

object V22;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	if(((*(LnkLI20))((V22)))==Cnil){
	goto T36;}
	base[0]= (V22);
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V23= vs_base[0];
	{object V24 = make_cons(V23,Cnil);
	VMR6(V24)}
	goto T36;
T36:;
	{object V25 = Cnil;
	VMR6(V25)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function STORE-FGEN	*/

static object LI7(V27)

register object V27;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V28;
	V29= (*(LnkLI22))((V27));
	V28= (*(LnkLI21))(/* INLINE-ARGS */V29);
	if(((V28))==Cnil){
	goto T42;}
	V30= (*(LnkLI23))((V27));
	(void)(((V28))->v.v_self[2]= (/* INLINE-ARGS */V30));{object V32;
	V32= ((V28))->v.v_self[4];
	if(V32==Cnil)goto T46;
	V31= V32;
	goto T45;
	goto T46;
T46:;}
	V31= (*(LnkLI24))((V27));
	goto T45;
T45:;
	{object V33 = ((V28))->v.v_self[4]= (V31);
	VMR7(V33)}
	goto T42;
T42:;{object V34;
	V34= (VV[2]->s.s_dbind);
	V35= make_cons((V27),Cnil);
	(VV[2]->s.s_dbind)= nconc(V34,/* INLINE-ARGS */V35);}
	{object V36 = (VV[2]->s.s_dbind);
	VMR7(V36)}}
	return Cnil;
}
/*	local entry for function LOOKUP-FGEN	*/

static object LI8(V38)

object V38;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	base[0]= (V38);
	base[1]= (VV[2]->s.s_dbind);
	base[2]= VV[3];
	base[3]= (VV[22]->s.s_gfdef);
	base[4]= VV[4];
	base[5]= (VV[25]->s.s_gfdef);
	vs_top=(vs_base=base+0)+6;
	(void) (*Lnk26)();
	vs_top=sup;
	{object V39 = vs_base[0];
	VMR8(V39)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-FGEN	*/

static object LI9(V45,V46,V47,V48,V49)

object V45;object V46;object V47;object V48;object V49;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{register object V50;
	base[0]= small_fixnum(6);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk27)();
	vs_top=sup;
	V50= vs_base[0];
	(void)(((V50))->v.v_self[0]= ((V45)));
	(void)(((V50))->v.v_self[1]= ((V46)));
	(void)(((V50))->v.v_self[2]= ((V47)));
	(void)(((V50))->v.v_self[3]= ((V48)));
	(void)(((V50))->v.v_self[4]= ((V49)));
	{object V51 = (V50);
	VMR9(V51)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FGEN-TEST	*/

static object LI10(V53)

object V53;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V54 = ((V53))->v.v_self[0];
	VMR10(V54)}
	return Cnil;
}
/*	local entry for function FGEN-GENSYMS	*/

static object LI11(V56)

object V56;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V57 = ((V56))->v.v_self[1];
	VMR11(V57)}
	return Cnil;
}
/*	local entry for function FGEN-GENERATOR	*/

static object LI12(V59)

object V59;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V60 = ((V59))->v.v_self[2];
	VMR12(V60)}
	return Cnil;
}
/*	local entry for function FGEN-GENERATOR-LAMBDA	*/

static object LI13(V62)

object V62;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V63 = ((V62))->v.v_self[3];
	VMR13(V63)}
	return Cnil;
}
/*	local entry for function FGEN-SYSTEM	*/

static object LI14(V65)

object V65;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{object V66 = ((V65))->v.v_self[4];
	VMR14(V66)}
	return Cnil;
}
/*	local entry for function GET-FUNCTION-GENERATOR	*/

static object LI15(V70,V71,V72)

object V70;object V71;object V72;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V73;
	object V74;
	base[2]= (V70);
	base[3]= (V71);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk28)();
	vs_top=sup;
	V73= vs_base[0];
	V74= (*(LnkLI21))((V73));
	if(((V74))==Cnil){
	goto T67;}
	{object V75 = (*(LnkLI23))((V74));
	VMR15(V75)}
	goto T67;
T67:;
	{object V76 = (*(LnkLI29))((V70),(V73),(V72));
	VMR15(V76)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-NEW-FUNCTION-GENERATOR	*/

static object LI16(V80,V81,V82)

object V80;object V81;object V82;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{object V83;
	object V84;
	base[0]= (V80);
	base[1]= (V82);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk30)();
	if(vs_base>=vs_top){vs_top=sup;goto T72;}
	V83= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T73;}
	V84= vs_base[0];
	vs_top=sup;
	goto T74;
	goto T72;
T72:;
	V83= Cnil;
	goto T73;
T73:;
	V84= Cnil;
	goto T74;
T74:;
	{object V85;
	object V86;
	base[2]= (V84);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk31)();
	vs_top=sup;
	V85= vs_base[0];
	V86= (*(LnkLI32))((V81),(V83),(V85),(V84),Cnil);
	(void)((*(LnkLI33))((V86)));
	{object V87 = (V85);
	VMR16(V87)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-NEW-FUNCTION-GENERATOR-INTERNAL	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{object V88;
	object V89;
	check_arg(2);
	V88=(base[0]);
	V89=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V90;
	object V91;
	base[2]= (V88);
	base[3]= (V89);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk34)();
	if(vs_base>=vs_top){vs_top=sup;goto T82;}
	V90= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T83;}
	V91= vs_base[0];
	vs_top=sup;
	goto T84;
	goto T82;
T82:;
	V90= Cnil;
	goto T83;
T83:;
	V91= Cnil;
	goto T84;
T84:;
	base[2]= (V91);
	base[3]= list(3,VV[5],(V91),list(2,VV[6],(V90)));
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	function definition for COMPUTE-TEST	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	bds_check;
	{object V92;
	check_arg(2);
	V92=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	vs_top=sup;
	bds_bind(VV[7],Ct);
	base[3]= (V92);
	base[4]= Cnil;
	base[5]= 
	make_cclosure_new(LC24,Cnil,base[1],Cdata);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk35)();
	bds_unwind1;
	return;
	}
}
/*	function definition for COMPUTE-CODE	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	bds_check;
	{object V93;
	check_arg(2);
	V93=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	vs_top=sup;
	bds_bind(VV[7],Ct);
	base[3]=MMcons(Cnil,base[1]);
	base[5]= (V93);
	base[6]= Cnil;
	base[7]= 
	make_cclosure_new(LC25,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk35)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (base[3]->c.c_car);
	vs_top=(vs_base=base+4)+2;
	bds_unwind1;
	return;
	}
}
/*	local entry for function COMPUTE-CONSTANTS	*/

static object LI21(V96,V97)

object V96;object V97;
{	 VMB20 VMS20 VMV20
	bds_check;
	goto TTL;
TTL:;
	base[0]=MMcons((V97),Cnil);
	bds_bind(VV[7],Ct);
	base[2]=MMcons(Cnil,base[0]);
	base[3]= (V96);
	base[4]= Cnil;
	base[5]= 
	make_cclosure_new(LC26,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk35)();
	vs_top=sup;
	{object V98 = (base[2]->c.c_car);
	bds_unwind1;
	VMR20(V98)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for PRECOMPILE-FUNCTION-GENERATORS	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V99=base[0]->c.c_cdr;
	if(endp(V99)){
	base[2]= Cnil;
	} else {
	base[2]= (V99->c.c_car);
	V99=V99->c.c_cdr;}
	if(!endp(V99))invalid_macro_call();}
	{register object V100;
	V100= small_fixnum(-1);
	{register object V102;
	register object V103;
	V102= Cnil;
	V103= Cnil;
	{register object V104;
	register object V105;
	V104= (VV[2]->s.s_dbind);
	V105= CMPcar((V104));
	goto T107;
T107:;
	if(!(((V104))==Cnil)){
	goto T108;}
	goto T103;
	goto T108;
T108:;
	if(((*(LnkLI24))((V105)))==Cnil){
	goto T113;}
	V106= (*(LnkLI24))((V105));
	if(!((/* INLINE-ARGS */V106)==(base[2]))){
	goto T112;}
	goto T113;
T113:;
	if((base[2])==Cnil){
	goto T117;}
	(void)(((V105))->v.v_self[4]= (base[2]));
	goto T117;
T117:;
	{register object V107;
	V100= number_plus((V100),small_fixnum(1));
	V108= list(3,VV[10],base[2],(V100));
	V109= list(2,VV[13],(*(LnkLI22))((V105)));
	V110= list(2,VV[13],(*(LnkLI37))((V105)));
	V111= list(2,VV[6],(*(LnkLI38))((V105)));
	V112= list(2,VV[13],(*(LnkLI38))((V105)));
	V113= list(6,VV[12],/* INLINE-ARGS */V109,/* INLINE-ARGS */V110,/* INLINE-ARGS */V111,/* INLINE-ARGS */V112,list(2,VV[13],base[2]));
	V107= (*(LnkLI36))(/* INLINE-ARGS */V108,VV[11],/* INLINE-ARGS */V113);
	if(((V102))!=Cnil){
	goto T123;}
	V103= make_cons((V107),Cnil);
	V102= (V103);
	goto T112;
	goto T123;
T123:;
	V115= make_cons((V107),Cnil);
	((V103))->c.c_cdr = /* INLINE-ARGS */V115;
	V114= (V103);
	V103= CMPcdr(V114);}
	goto T112;
T112:;
	V104= CMPcdr((V104));
	V105= CMPcar((V104));
	goto T107;}
	goto T103;
T103:;
	V101= (V102);}
	base[3]= make_cons(VV[9],V101);
	vs_top=(vs_base=base+3)+1;
	return;}
}
/*	local entry for function LOAD-FUNCTION-GENERATOR	*/

static object LI23(V121,V122,V123,V124,V125)

object V121;object V122;object V123;object V124;object V125;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	V126= (*(LnkLI32))((V121),(V122),(V123),(V124),(V125));
	{object V127 = (*(LnkLI33))(/* INLINE-ARGS */V126);
	VMR22(V127)}
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{register object V128;
	object V129;
	object V130;
	check_arg(3);
	V128=(base[0]);
	V129=(base[1]);
	V130=(base[2]);
	vs_top=sup;
	if(!(((((V129))==(VV[8])?Ct:Cnil))==Cnil)){
	goto T135;}
	base[3]= (V128);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T135;
T135:;
	{object V131;
	V131= (
	(type_of((base0[1]->c.c_car)) == t_sfun ?(*(((base0[1]->c.c_car))->sfn.sfn_self)):
	(fcall.argd=1,type_of((base0[1]->c.c_car))==t_vfun) ?
	(*(((base0[1]->c.c_car))->sfn.sfn_self)):
	(fcall.fun=((base0[1]->c.c_car)),fcalln))((V128)));
	if(((V131))==Cnil){
	goto T139;}
	(base0[0]->c.c_car)= append((base0[0]->c.c_car),V131);
	base[3]= (V128);
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T139;
T139:;
	base[3]= (V128);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC25(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V133;
	object V134;
	object V135;
	check_arg(3);
	V133=(base[0]);
	V134=(base[1]);
	V135=(base[2]);
	vs_top=sup;
	if(!(((((V134))==(VV[8])?Ct:Cnil))==Cnil)){
	goto T146;}
	base[3]= (V133);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T146;
T146:;
	{object V136;
	object V137;
	base[3]= (V133);
	vs_top=(vs_base=base+3)+1;
	{object _funobj = (base0[1]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	if(vs_base>=vs_top){vs_top=sup;goto T150;}
	V136= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T151;}
	V137= vs_base[0];
	vs_top=sup;
	goto T152;
	goto T150;
T150:;
	V136= Cnil;
	goto T151;
T151:;
	V137= Cnil;
	goto T152;
T152:;
	if(((V137))==Cnil){
	goto T153;}
	(base0[0]->c.c_car)= append((base0[0]->c.c_car),(V137));
	goto T153;
T153:;
	base[3]= (V136);
	base[4]= (((((V136))==((V133))?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+3)+2;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC24(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	{object V138;
	object V139;
	object V140;
	check_arg(3);
	V138=(base[0]);
	V139=(base[1]);
	V140=(base[2]);
	vs_top=sup;
	if(!(((((V139))==(VV[8])?Ct:Cnil))==Cnil)){
	goto T160;}
	base[3]= (V138);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T160;
T160:;
	{object V141;
	V141= (
	(type_of((base0[0]->c.c_car)) == t_sfun ?(*(((base0[0]->c.c_car))->sfn.sfn_self)):
	(fcall.argd=1,type_of((base0[0]->c.c_car))==t_vfun) ?
	(*(((base0[0]->c.c_car))->sfn.sfn_self)):
	(fcall.fun=((base0[0]->c.c_car)),fcalln))((V138)));
	base[3]= (V141);
	base[4]= (((((V141))==((V138))?Ct:Cnil))==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+3)+2;
	return;}
	}
}
static object  LnkTLI38(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[38],(void **)(void *)&LnkLI38,1,first,ap);va_end(ap);return V1;} /* FGEN-GENERATOR-LAMBDA */
static object  LnkTLI37(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[37],(void **)(void *)&LnkLI37,1,first,ap);va_end(ap);return V1;} /* FGEN-GENSYMS */
static object  LnkTLI36(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[36],(void **)(void *)&LnkLI36,3,first,ap);va_end(ap);return V1;} /* MAKE-TOP-LEVEL-FORM */
static void LnkT35(){ call_or_link(VV[35],(void **)(void *)&Lnk35);} /* WALK-FORM */
static void LnkT34(){ call_or_link(VV[34],(void **)(void *)&Lnk34);} /* COMPUTE-CODE */
static object  LnkTLI33(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[33],(void **)(void *)&LnkLI33,1,first,ap);va_end(ap);return V1;} /* STORE-FGEN */
static object  LnkTLI32(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[32],(void **)(void *)&LnkLI32,5,first,ap);va_end(ap);return V1;} /* MAKE-FGEN */
static void LnkT31(){ call_or_link(VV[31],(void **)(void *)&Lnk31);} /* COMPILE-LAMBDA */
static void LnkT30(){ call_or_link(VV[30],(void **)(void *)&Lnk30);} /* GET-NEW-FUNCTION-GENERATOR-INTERNAL */
static object  LnkTLI29(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[29],(void **)(void *)&LnkLI29,3,first,ap);va_end(ap);return V1;} /* GET-NEW-FUNCTION-GENERATOR */
static void LnkT28(){ call_or_link(VV[28],(void **)(void *)&Lnk28);} /* COMPUTE-TEST */
static void LnkT27(){ call_or_link(VV[27],(void **)(void *)&Lnk27);} /* MAKE-ARRAY */
static void LnkT26(){ call_or_link(VV[26],(void **)(void *)&Lnk26);} /* FIND */
static object  LnkTLI24(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[24],(void **)(void *)&LnkLI24,1,first,ap);va_end(ap);return V1;} /* FGEN-SYSTEM */
static object  LnkTLI23(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[23],(void **)(void *)&LnkLI23,1,first,ap);va_end(ap);return V1;} /* FGEN-GENERATOR */
static object  LnkTLI22(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[22],(void **)(void *)&LnkLI22,1,first,ap);va_end(ap);return V1;} /* FGEN-TEST */
static object  LnkTLI21(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[21],(void **)(void *)&LnkLI21,1,first,ap);va_end(ap);return V1;} /* LOOKUP-FGEN */
static object  LnkTLI20(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[20],(void **)(void *)&LnkLI20,1,first,ap);va_end(ap);return V1;} /* DEFAULT-CONSTANTP */
static void LnkT19(){ call_or_link(VV[19],(void **)(void *)&Lnk19);} /* TYPEP */
static object  LnkTLI18(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[18],(void **)(void *)&LnkLI18,2,first,ap);va_end(ap);return V1;} /* COMPUTE-CONSTANTS */
static object  LnkTLI17(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[17],(void **)(void *)&LnkLI17,3,first,ap);va_end(ap);return V1;} /* GET-FUNCTION-GENERATOR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

