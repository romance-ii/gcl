
#include "cmpinclude.h"
#include "pcl_gcl_low.h"
void init_pcl_gcl_low(){do_init(VV);}
/*	macro definition for MEMQ	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[3]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(!endp(V1))invalid_macro_call();}
	base[4]= listA(4,VV[0],base[2],base[3],VV[1]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for ASSQ	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V2=base[0]->c.c_cdr;
	if(endp(V2))invalid_macro_call();
	base[2]= (V2->c.c_car);
	V2=V2->c.c_cdr;
	if(endp(V2))invalid_macro_call();
	base[3]= (V2->c.c_car);
	V2=V2->c.c_cdr;
	if(!endp(V2))invalid_macro_call();}
	base[4]= listA(4,VV[2],base[2],base[3],VV[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for POSQ	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V3=base[0]->c.c_cdr;
	if(endp(V3))invalid_macro_call();
	base[2]= (V3->c.c_car);
	V3=V3->c.c_cdr;
	if(endp(V3))invalid_macro_call();
	base[3]= (V3->c.c_car);
	V3=V3->c.c_cdr;
	if(!endp(V3))invalid_macro_call();}
	base[4]= listA(4,VV[4],base[2],base[3],VV[5]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for DOTIMES	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V4=base[0]->c.c_cdr;
	if(endp(V4))invalid_macro_call();
	{object V5= (V4->c.c_car);
	if(endp(V5))invalid_macro_call();
	base[2]= (V5->c.c_car);
	V5=V5->c.c_cdr;
	if(endp(V5))invalid_macro_call();
	base[3]= (V5->c.c_car);
	V5=V5->c.c_cdr;
	if(endp(V5)){
	base[4]= Cnil;
	} else {
	base[4]= (V5->c.c_car);
	V5=V5->c.c_cdr;}
	if(!endp(V5))invalid_macro_call();}
	V4=V4->c.c_cdr;
	base[5]= V4;}
	{object V6;
	object V7;
	object V8;
	base[6]= base[5];
	base[7]= base[1];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk59)();
	if(vs_base>=vs_top){vs_top=sup;goto T5;}
	V6= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T6;}
	V7= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T7;}
	V8= vs_base[0];
	vs_top=sup;
	goto T8;
	goto T5;
T5:;
	V6= Cnil;
	goto T6;
T6:;
	V7= Cnil;
	goto T7;
T7:;
	V8= Cnil;
	goto T8;
T8:;
	{object V9;
	object V10;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V9= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V10= vs_base[0];
	V11= list(2,(V9),base[3]);
	V12= list(2,/* INLINE-ARGS */V11,list(2,base[2],small_fixnum(0)));
	V13= list(2,VV[7],list(3,VV[8],(V9),base[2]));
	V14= list(3,VV[12],base[2],(V9));
	V15= list(3,VV[11],/* INLINE-ARGS */V14,list(3,VV[13],Cnil,base[4]));
	V16= list(3,VV[14],base[2],list(3,VV[15],VV[8],list(2,VV[16],base[2])));
	V17= list(2,/* INLINE-ARGS */V16,list(2,VV[17],(V10)));
	V18= list(3,VV[9],Cnil,listA(4,VV[10],(V10),/* INLINE-ARGS */V15,append((V8),/* INLINE-ARGS */V17)));
	V19= make_cons(/* INLINE-ARGS */V18,Cnil);
	base[6]= listA(4,VV[6],/* INLINE-ARGS */V12,/* INLINE-ARGS */V13,append((V7),/* INLINE-ARGS */V19));
	vs_top=(vs_base=base+6)+1;
	return;}}
}
/*	local entry for function PRINTING-RANDOM-THING-INTERNAL	*/

static object LI5(V22,V23)

object V22;object V23;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	base[0]= (V23);
	base[1]= VV[18];
	base[3]= (V22);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk60)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V24 = vs_base[0];
	VMR5(V24)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for %SVREF	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V25=base[0]->c.c_cdr;
	if(endp(V25))invalid_macro_call();
	base[2]= (V25->c.c_car);
	V25=V25->c.c_cdr;
	if(endp(V25))invalid_macro_call();
	base[3]= (V25->c.c_car);
	V25=V25->c.c_cdr;
	if(!endp(V25))invalid_macro_call();}
	V26= list(3,VV[15],VV[20],base[2]);
	base[4]= list(3,VV[19],/* INLINE-ARGS */V26,list(3,VV[15],VV[8],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for FMC-FUNCALL	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V27=base[0]->c.c_cdr;
	if(endp(V27))invalid_macro_call();
	base[2]= (V27->c.c_car);
	V27=V27->c.c_cdr;
	if(endp(V27))invalid_macro_call();
	base[3]= (V27->c.c_car);
	V27=V27->c.c_cdr;
	if(endp(V27))invalid_macro_call();
	base[4]= (V27->c.c_car);
	V27=V27->c.c_cdr;
	base[5]= V27;}
	base[6]= listA(5,VV[21],base[2],base[3],base[4],base[5]);
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	local entry for function PROCLAIM-DEFMETHOD	*/

static object LI8(V30,V31)

object V30;object V31;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	if(type_of((V30))==t_symbol){
	goto T16;}
	{object V32 = Cnil;
	VMR8(V32)}
	goto T16;
T16:;
	{object V33 = sputprop((V30),VV[22],Ct);
	VMR8(V33)}
	return Cnil;
}

static
object cclosure_env_nthcdr (n,cc)
int n; object cc;
{  object env,*turbo;
   if(n<0)return Cnil;
   if(type_of(cc)!=t_cclosure)return Cnil;
   if((turbo=cc->cc.cc_turbo)==NULL)
     {env=cc->cc.cc_env;
      while(n-->0)
        {if(type_of(env)!=t_cons)return Cnil;
         env=env->c.c_cdr;}
      return env;}
   else
     {if(n>=fix(*(turbo-1)))return Cnil;
      return turbo[n];}
}
/*	function definition for CCLOSURE-ENV-NTHCDR	*/

static void L9()
{	object *old_base=vs_base;
	object x;
	x=
	cclosure_env_nthcdr(
	object_to_int(vs_base[0]),
	vs_base[1]);
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=x;
}
/*	function definition for %CCLOSURE-ENV-NTHCDR	*/

static void L10()
{	object *old_base=vs_base;
	object x;
	x=
	cclosure_env_nthcdr(
	object_to_int(vs_base[0]),
	vs_base[1]);
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=x;
}
/*	local entry for function MAKE-FUNCTION-INLINE	*/

static object LI11(V35)

register object V35;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	V36= CMPcar((V35));
	base[0]= VV[24];
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T20;}
	{register object V38;
	V38= CMPcdr((V35));
	V39= CMPcar((V38));
	V40= CMPcadr((V38));
	if((CMPcadddr((V38)))==Cnil){
	goto T27;}
	base[0]= small_fixnum(1);
	goto T25;
	goto T27;
T27:;
	base[0]= small_fixnum(0);
	goto T25;
T25:;
	if((CMPcaddr((V38)))==Cnil){
	goto T31;}
	base[1]= small_fixnum(2);
	goto T29;
	goto T31;
T31:;
	base[1]= small_fixnum(0);
	goto T29;
T29:;
	base[2]= small_fixnum(0);
	if(!((CMPcar((V35)))==(VV[25]))){
	goto T36;}
	base[3]= small_fixnum(8);
	goto T34;
	goto T36;
T36:;
	base[3]= small_fixnum(0);
	goto T34;
T34:;
	vs_top=(vs_base=base+0)+4;
	Llogior();
	vs_top=sup;
	V41= vs_base[0];
	base[0]= (V38);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk61)();
	vs_top=sup;
	V42= vs_base[0];
	V37= list(4,/* INLINE-ARGS */V39,/* INLINE-ARGS */V40,V41,V42);
	goto T18;}
	goto T20;
T20:;
	V37= CMPcdr((V35));
	goto T18;
T18:;
	V43= make_cons(V37,Cnil);
	{object V44 = sputprop(/* INLINE-ARGS */V36,VV[23],/* INLINE-ARGS */V43);
	VMR9(V44)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for DEFINE-INLINES	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V45=base[0]->c.c_cdr;
	if(!endp(V45))invalid_macro_call();}
	base[3]= (VV[35]->s.s_dbind);
	{object V47;
	object V48= base[3];
	if(V48==Cnil){
	V46= Cnil;
	goto T40;}
	base[2]=V47=MMcons(Cnil,Cnil);
	goto T41;
T41:;
	{register object V49;
	V49= (V48->c.c_car);
	{object V50;
	object V51;
	base[5]= Cnil;
	base[6]= VV[27];
	base[7]= CMPcar((V49));
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V50= vs_base[0];
	{object V52;
	object V53= CMPcadr((V49));
	if(V53==Cnil){
	V51= Cnil;
	goto T48;}
	base[4]=V52=MMcons(Cnil,Cnil);
	goto T49;
T49:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	(V52->c.c_car)= vs_base[0];
	if((V53=MMcdr(V53))==Cnil){
	V51= base[4];
	goto T48;}
	V52=MMcdr(V52)=MMcons(Cnil,Cnil);
	goto T49;}
	goto T48;
T48:;
	V55= list(3,VV[28],VV[29],list(2,VV[30],list(2,VV[31],make_cons((V50),CMPcdr((V49))))));
	base[4]= VV[62];
	base[5]= CMPcadr((V49));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk63)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T52;}
	{object V57= symbol_name(CMPcar((V49)));
	if(!((37)==((/* INLINE-ARGS */V57)->ust.ust_self[0]))){
	goto T53;}}
	goto T52;
T52:;
	V58= CMPcar((V49));
	{object V60;
	object V61= (V51);
	object V62= CMPcadr((V49));
	if(V61==Cnil||V62==Cnil){
	V59= Cnil;
	goto T59;}
	base[4]=V60=MMcons(Cnil,Cnil);
	goto T60;
T60:;
	if(((V62->c.c_car))==(Ct)){
	goto T63;}
	V65= list(2,VV[7],list(3,VV[34],(V62->c.c_car),(V61->c.c_car)));
	(V60->c.c_cdr)= make_cons(/* INLINE-ARGS */V65,Cnil);
	goto T61;
	goto T63;
T63:;
	(V60->c.c_cdr)= Cnil;
	goto T61;
T61:;
	while(MMcdr(V60)!=Cnil)V60=MMcdr(V60);
	if((V61=MMcdr(V61))==Cnil||(V62=MMcdr(V62))==Cnil){
	base[4]=base[4]->c.c_cdr;
	V59= base[4];
	goto T59;}
	goto T60;}
	goto T59;
T59:;
	V66= CMPcaddr((V49));
	V67= list(3,VV[15],/* INLINE-ARGS */V66,make_cons((V50),(V51)));
	V68= make_cons(/* INLINE-ARGS */V67,Cnil);
	V69= listA(4,VV[33],/* INLINE-ARGS */V58,(V51),append(V59,/* INLINE-ARGS */V68));
	V56= list(2,/* INLINE-ARGS */V69,list(2,VV[30],list(2,VV[31],(V49))));
	goto T51;
	goto T53;
T53:;
	V56= Cnil;
	goto T51;
T51:;
	(V47->c.c_cdr)= make_cons(/* INLINE-ARGS */V55,V56);}}
	while(MMcdr(V47)!=Cnil)V47=MMcdr(V47);
	if((V48=MMcdr(V48))==Cnil){
	base[2]=base[2]->c.c_cdr;
	V46= base[2];
	goto T40;}
	goto T41;}
	goto T40;
T40:;
	base[2]= make_cons(VV[26],V46);
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function %FBOUNDP	*/

static object LI13(V71)

object V71;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V72 = (((V71))->s.s_gfdef!=OBJNULL?Ct:Cnil);
	VMR11(V72)}
	return Cnil;
}
/*	local entry for function %SYMBOL-FUNCTION	*/

static object LI14(V74)

object V74;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V75 = ((V74))->s.s_gfdef;
	VMR12(V75)}
	return Cnil;
}
/*	local entry for function %STRUCTURE-NAME	*/

static object LI15(V77)

object V77;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{object V78 = ((V77))->str.str_def->str.str_self[0];
	VMR13(V78)}
	return Cnil;
}
/*	local entry for function %COMPILED-FUNCTION-NAME	*/

static object LI16(V80)

object V80;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{object V81 = ((V80))->cf.cf_name;
	VMR14(V81)}
	return Cnil;
}
/*	local entry for function %SET-COMPILED-FUNCTION-NAME	*/

static object LI17(V84,V85)

object V84;object V85;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V86 = (((V84))->cf.cf_name)=((V85));
	VMR15(V86)}
	return Cnil;
}
/*	local entry for function CCLOSUREP	*/

static object LI18(V88)

object V88;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{object V89 = (type_of((V88))==t_cclosure?Ct:Cnil);
	VMR16(V89)}
	return Cnil;
}
/*	local entry for function SFUN-P	*/

static object LI19(V91)

object V91;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V92 = (type_of((V91))==t_sfun?Ct:Cnil);
	VMR17(V92)}
	return Cnil;
}
/*	local entry for function %CCLOSURE-ENV	*/

static object LI20(V94)

object V94;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V95 = ((V94))->cc.cc_env;
	VMR18(V95)}
	return Cnil;
}
/*	local entry for function %SET-CCLOSURE-ENV	*/

static object LI21(V98,V99)

object V98;object V99;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{object V100 = (((V98))->cc.cc_env)=((V99));
	VMR19(V100)}
	return Cnil;
}
/*	local entry for function %CCLOSURE-ENV-NTHCDR	*/

static object LI22(V103,V104)

long V103;object V104;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V105 = ((V104))->cc.cc_turbo[V103];
	VMR20(V105)}
	return Cnil;
}
/*	local entry for function SET-FUNCTION-NAME-1	*/

static object LI23(V109,V110,V111)

register object V109;register object V110;object V111;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	base[0]= (V109);
	vs_top=(vs_base=base+0)+1;
	Lcompiled_function_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T67;}
	base[0]= (V109);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk64)();
	vs_top=sup;
	if(!(type_of((V110))==t_symbol)){
	goto T72;}
	(void)((*(LnkLI65))((V110),Cnil));
	goto T72;
T72:;
	(void)((*(LnkLI66))((V109),(V110)));
	goto T65;
	goto T67;
T67:;
	if(!(type_of((V109))==t_cons||((V109))==Cnil)){
	goto T76;}
	if(!((CMPcar((V109)))==(VV[36]))){
	goto T76;}
	(CMPcdr(V109))->c.c_car = V110;
	(void)(CMPcdr(V109));
	goto T65;
	goto T76;
T76:;
	if(!(type_of((V109))==t_cons||((V109))==Cnil)){
	goto T65;}
	if(!((CMPcar((V109)))==(VV[37]))){
	goto T65;}
	(V109)->c.c_car = VV[36];
	{object V117;
	V117= make_cons((V110),CMPcdr((V109)));
	(V109)->c.c_cdr = (V117);}
	goto T65;
T65:;
	{object V118 = (V109);
	VMR21(V118)}
	base[0]=base[0];
	return Cnil;
}




object fSuse_fast_links();
static
object set_cclosure (result_cc,value_cc,available_size)
  object result_cc,value_cc; int available_size;
{
  object result_env_tail,value_env_tail; int i;

  /* If we are currently using fast linking,     */
  /* make sure to remove the link for result_cc. */
  (VFUN_NARGS=2,fSuse_fast_links(sLnil,result_cc));

/*  use_fast_links(3,Cnil,result_cc); */

  result_env_tail=result_cc->cc.cc_env;
  value_env_tail=value_cc->cc.cc_env;
  for(i=available_size;
      result_env_tail!=Cnil && i>0;
      result_env_tail=CMPcdr(result_env_tail), value_env_tail=CMPcdr(value_env_tail))
    CMPcar(result_env_tail)=CMPcar(value_env_tail), i--;
  result_cc->cc.cc_self=value_cc->cc.cc_self;
  result_cc->cc.cc_data=value_cc->cc.cc_data;


  return result_cc;
}
/*	function definition for %SET-CCLOSURE	*/

static void L24()
{	object *old_base=vs_base;
	object x;
	x=
	set_cclosure(
	vs_base[0],
	vs_base[1],
	object_to_int(vs_base[2]));
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=x;
}
/*	local entry for function STRUCTURE-FUNCTIONS-EXIST-P	*/

static object LI25()

{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	{object V119 = Ct;
	VMR22(V119)}
	return Cnil;
}
/*	local entry for function STRUCTURE-TYPE	*/

static object LI26(V121)

object V121;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	if(type_of((V121))==t_structure){
	goto T89;}
	{object V122 = Cnil;
	VMR23(V122)}
	goto T89;
T89:;
	{object V123 = (*(LnkLI67))((V121));
	VMR23(V123)}
	return Cnil;
}
/*	local entry for function STRUCTURE-TYPE-P	*/

static object LI27(V125)

object V125;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	base[0]= (V125);
	base[1]= (VV[38]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V126= vs_base[0];
	if(!((((V126)==Cnil?Ct:Cnil))==Cnil)){
	goto T91;}
	{object V127 = Ct;
	VMR24(V127)}
	goto T91;
T91:;
	{object V128;
	V128= Cnil;
	if(type_of((V125))==t_symbol){
	goto T96;}
	{object V129 = Cnil;
	VMR24(V129)}
	goto T96;
T96:;
	{object V130 =((V125))->s.s_plist;
	 object ind= VV[39];
	while(V130!=Cnil){
	if(V130->c.c_car==ind){
	V128= (V130->c.c_cdr->c.c_car);
	goto T100;
	}else V130=V130->c.c_cdr->c.c_cdr;}
	V128= Cnil;}
	goto T100;
T100:;
	if(((V128))!=Cnil){
	goto T98;}
	{object V131 = Cnil;
	VMR24(V131)}
	goto T98;
T98:;
	{object V132 = ((STREF(object,(V128),64))==Cnil?Ct:Cnil);
	VMR24(V132)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function STRUCTURE-TYPE-INCLUDED-TYPE-NAME	*/

static object LI28(V134)

object V134;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;{object V135;
	base[0]= (V134);
	base[1]= (VV[38]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V136= vs_base[0];
	V135= CMPcar(V136);
	if(V135==Cnil)goto T101;
	{object V137 = V135;
	VMR25(V137)}
	goto T101;
T101:;}
	{object V138;
	{object V140 =((V134))->s.s_plist;
	 object ind= VV[39];
	while(V140!=Cnil){
	if(V140->c.c_car==ind){
	V139= (V140->c.c_cdr->c.c_car);
	goto T107;
	}else V140=V140->c.c_cdr->c.c_cdr;}
	V139= Cnil;}
	goto T107;
T107:;
	V138= STREF(object,V139,16);
	if(((V138))==Cnil){
	goto T109;}
	{object V141 = STREF(object,(V138),0);
	VMR25(V141)}
	goto T109;
T109:;
	{object V142 = Cnil;
	VMR25(V142)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function STRUCTURE-TYPE-INTERNAL-SLOTDS	*/

static object LI29(V144)

object V144;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V146 =((V144))->s.s_plist;
	 object ind= VV[39];
	while(V146!=Cnil){
	if(V146->c.c_car==ind){
	V145= (V146->c.c_cdr->c.c_car);
	goto T111;
	}else V146=V146->c.c_cdr->c.c_cdr;}
	V145= Cnil;}
	goto T111;
T111:;
	{object V147 = STREF(object,V145,28);
	VMR26(V147)}
	return Cnil;
}
/*	local entry for function STRUCTURE-TYPE-SLOT-DESCRIPTION-LIST	*/

static object LI31(V149)

object V149;
{	 VMB27 VMS27 VMV27
	bds_check;
	goto TTL;
TTL:;
	base[0]=MMcons((V149),Cnil);{object V150;
	base[1]= (base[0]->c.c_car);
	base[2]= (VV[38]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lgethash();
	vs_top=sup;
	V151= vs_base[0];
	V150= CMPcdr(V151);
	if(V150==Cnil)goto T112;
	{object V152 = V150;
	VMR27(V152)}
	goto T112;
T112:;}
	{object V156;
	object V157;
	V156= (*(LnkLI68))((base[0]->c.c_car));
	V157= (*(LnkLI69))((base[0]->c.c_car));
	if(((V157))==Cnil){
	goto T122;}
	V158= (*(LnkLI68))((V157));
	V159 = CMPmake_fixnum((long)length(/* INLINE-ARGS */V158));
	V155= nthcdr(fix(V159),(V156));
	goto T118;
	goto T122;
T122:;
	V155= (V156);}
	goto T118;
T118:;
	{object V153;
	object V154= V155;
	if(V154==Cnil){
	{object V160 = Cnil;
	VMR27(V160)}}
	base[1]=V153=MMcons(Cnil,Cnil);
	goto T117;
T117:;
	{register object V161;
	V161= (V154->c.c_car);
	if(((V161))==Cnil){
	goto T126;}
	if((CMPcar((V161)))==Cnil){
	goto T126;}
	base[3]= (V161);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk61)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[2]=MMcons(base[2],base[0]);
	{object V162;
	object V163;
	V162= 
	make_cclosure_new(LC38,Cnil,base[2],Cdata);
	V163= 
	make_cclosure_new(LC39,Cnil,base[2],Cdata);
	base[3]= (V162);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk64)();
	vs_top=sup;
	base[3]= (V163);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk64)();
	vs_top=sup;
	{register object V164;
	object V165;
	object V166;
	object V167;
	bds_bind(VV[40],(VV[41]->s.s_dbind));
	base[9]= Cnil;
	base[10]= VV[42];
	base[11]= (base[0]->c.c_car);
	base[12]= (base[2]->c.c_car);
	vs_top=(vs_base=base+9)+4;
	Lformat();
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+8)+1;
	Lintern();
	vs_top=sup;
	bds_unwind1;
	V164= vs_base[0];
	V165= (*(LnkLI70))((V164));
	V166= CMPcar((V161));
	V167= CMPcadddr((V161));
	base[7]= (V164);
	base[8]= (V162);
	vs_top=(vs_base=base+7)+2;
	siLfset();
	vs_top=sup;
	base[7]= (V165);
	base[8]= (V163);
	vs_top=(vs_base=base+7)+2;
	siLfset();
	vs_top=sup;
	(void)((*(LnkLI71))((V164)));
	if(((V167))==Cnil){
	goto T155;}
	V168= Cnil;
	goto T154;
	goto T155;
T155:;
	V168= (V163);
	goto T154;
T154:;
	V169= list(3,(V166),(V164),V168);
	(V153->c.c_cdr)= make_cons(/* INLINE-ARGS */V169,Cnil);
	goto T124;}}
	goto T126;
T126:;
	(V153->c.c_cdr)= Cnil;}
	goto T124;
T124:;
	while(MMcdr(V153)!=Cnil)V153=MMcdr(V153);
	if((V154=MMcdr(V154))==Cnil){
	base[1]=base[1]->c.c_cdr;
	{object V170 = base[1];
	VMR27(V170)}}
	goto T117;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function STRUCTURE-SLOTD-NAME	*/

static object LI32(V172)

object V172;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{object V173 = CMPcar((V172));
	VMR28(V173)}
	return Cnil;
}
/*	local entry for function STRUCTURE-SLOTD-ACCESSOR-SYMBOL	*/

static object LI33(V175)

object V175;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{object V176 = CMPcadr((V175));
	VMR29(V176)}
	return Cnil;
}
/*	function definition for STRUCTURE-SLOTD-READER-FUNCTION	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	{object V177;
	check_arg(1);
	V177=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= CMPcaddr((V177));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function STRUCTURE-SLOTD-WRITER-FUNCTION	*/

static object LI35(V179)

object V179;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{object V180 = CMPcadddr((V179));
	VMR31(V180)}
	return Cnil;
}
/*	local entry for function RENEW-SYS-FILES	*/

static object LI36()

{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	base[0]= VV[43];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk72)();
	vs_top=sup;
	base[1]= VV[44];
	base[2]= VV[45];
	base[3]= VV[46];
	base[4]= VV[47];
	base[5]= VV[48];
	vs_top=(vs_base=base+1)+5;
	(void) (*Lnk73)();
	vs_top=sup;
	base[0]= vs_base[0];
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[2]= base[0];
	base[3]= VV[49];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	active=FALSE;}
	base[1]=Cnil;
	while(vs_base<vs_top)
	{base[1]=MMcons(vs_top[-1],base[1]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[0])==Cnil){
	goto T169;}
	base[2]= base[0];
	vs_top=(vs_base=base+2)+1;
	Lclose();
	vs_top=sup;
	goto T169;
T169:;
	vs_base=vs_top=base+2;
	for(p= base[1];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;}}
	base[0]= VV[50];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk74)();
	vs_top=sup;
	base[1]= VV[51];
	base[2]= VV[45];
	base[3]= VV[46];
	base[4]= VV[47];
	base[5]= VV[48];
	vs_top=(vs_base=base+1)+5;
	(void) (*Lnk73)();
	vs_top=sup;
	base[0]= vs_base[0];
	frs_push(FRS_PROTECT,Cnil);
	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;
	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}
	else{
	base[2]= base[0];
	base[3]= VV[52];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	{object V182;
	register object V183;
	V182= Cnil;
	V183= Cnil;
	{object V184;
	register object V185;
	register object V186;
	{object V187;
	base[2]= VV[55];
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V187= vs_base[0];
	base[2]= (V187);
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T192;}
	V184= (V187);
	goto T188;
	goto T192;
T192:;
	base[2]= coerce_to_string((V187));
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V184= vs_base[0];}
	goto T188;
T188:;
	V185= Cnil;
	V186= Cnil;
	{object V188;
	register object V189;
	base[4]= (V184);
	vs_top=(vs_base=base+4)+1;
	Lpackage_use_list();
	vs_top=sup;
	V190= vs_base[0];
	V188= make_cons((V184),V190);
	V189= CMPcar((V188));
	goto T201;
T201:;
	if(!(((V188))==Cnil)){
	goto T202;}
	V185= Cnil;
	goto T187;
	goto T202;
T202:;
	{long V191;
	long V192;
	base[4]= (V189);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk75)();
	if(vs_base>=vs_top){vs_top=sup;goto T211;}
	V191= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T212;}
	V192= fix(vs_base[0]);
	vs_top=sup;
	goto T213;
	goto T211;
T211:;
	V191= fix(Cnil);
	goto T212;
T212:;
	V192= fix(Cnil);
	goto T213;
T213:;
	if(((V184))==((V189))){
	goto T214;}
	V192= 0;
	goto T214;
T214:;
	{object V193;
	register object V194;
	V195 = CMPmake_fixnum(V192);
	V196 = CMPmake_fixnum(V191);
	V193= number_plus(V195,V196);
	V194= small_fixnum(0);
	goto T221;
T221:;
	if(!(number_compare((V194),(V193))>=0)){
	goto T222;}
	goto T208;
	goto T222;
T222:;
	V197 = CMPmake_fixnum(V192);
	if(!(number_compare((V194),V197)<0)){
	goto T231;}
	base[5]= (V189);
	base[6]= (V194);
	vs_top=(vs_base=base+5)+2;
	siLpackage_internal();
	vs_top=sup;
	V186= vs_base[0];
	goto T229;
	goto T231;
T231:;
	base[5]= (V189);
	V198 = CMPmake_fixnum(V192);
	base[6]= number_minus((V194),V198);
	vs_top=(vs_base=base+5)+2;
	siLpackage_external();
	vs_top=sup;
	V186= vs_base[0];
	goto T229;
T229:;
	goto T227;
T227:;
	if(((V186))!=Cnil){
	goto T237;}
	goto T228;
	goto T237;
T237:;
	V185= CMPcar((V186));
	if(((V189))==((V184))){
	goto T243;}
	base[6]= symbol_name((V185));
	base[7]= (V184);
	vs_top=(vs_base=base+6)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Llast();
	vs_top=sup;
	V199= vs_base[0];
	if(!((VV[56])==(CMPcar(V199)))){
	goto T242;}
	goto T243;
T243:;
	{object V200 =((V185))->s.s_plist;
	 object ind= VV[22];
	while(V200!=Cnil){
	if(V200->c.c_car==ind){
	if(((V200->c.c_cdr->c.c_car))==Cnil){
	goto T252;}
	goto T254;
	}else V200=V200->c.c_cdr->c.c_cdr;}
	goto T252;}
	goto T254;
T254:;
	if(((V183))==Cnil){
	goto T256;}
	{object V201;
	register object V202;
	V201= (V183);
	V183= make_cons((V185),Cnil);
	V202= (V183);
	((V201))->c.c_cdr = (V202);
	goto T252;}
	goto T256;
T256:;
	V183= make_cons((V185),Cnil);
	V182= (V183);
	goto T252;
T252:;
	goto T242;
T242:;
	V186= CMPcdr((V186));
	goto T227;
	goto T228;
T228:;
	goto T225;
	goto T225;
T225:;
	V194= one_plus((V194));
	goto T221;}}
	goto T208;
T208:;
	V188= CMPcdr((V188));
	V189= CMPcar((V188));
	goto T201;}}
	goto T187;
T187:;
	V181= (V182);
	goto T186;
	V181= Cnil;
	goto T186;
	V181= Cnil;}
	goto T186;
T186:;
	V203= list(3,VV[53],list(2,VV[54],list(2,VV[31],V181)),VV[57]);
	(void)(print(/* INLINE-ARGS */V203,base[0]));
	base[2]= base[0];
	base[3]= VV[58];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	active=FALSE;}
	base[1]=Cnil;
	while(vs_base<vs_top)
	{base[1]=MMcons(vs_top[-1],base[1]);vs_top--;}
	vs_top=sup;
	nlj_active=FALSE;frs_pop();
	if((base[0])==Cnil){
	goto T278;}
	base[2]= base[0];
	vs_top=(vs_base=base+2)+1;
	Lclose();
	vs_top=sup;
	goto T278;
T278:;
	vs_base=vs_top=base+2;
	for(p= base[1];!endp(p);p=MMcdr(p))vs_push(MMcar(p));
	if(active)unwind(fr,tag);else{
	vs_top=sup;
	{object V204 = vs_base[0];
	VMR32(V204)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC39(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	{object V205;
	object V206;
	check_arg(2);
	V205=(base[0]);
	V206=(base[1]);
	vs_top=sup;
	base[2]= (V206);
	base[3]= (base0[1]->c.c_car);
	base[4]= (base0[0]->c.c_car);
	base[5]= (V205);
	vs_top=(vs_base=base+2)+4;
	siLstructure_set();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC38(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{object V207;
	check_arg(1);
	V207=(base[0]);
	vs_top=sup;
	base[1]= (V207);
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk76)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC37(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	{object V208;
	check_arg(1);
	V208=(base[0]);
	vs_top=sup;
	base[1]= (((V208))==(Ct)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT76(){ call_or_link(VV[76],(void **)(void *)&Lnk76);} /* STRUCTURE-REF1 */
static void LnkT75(){ call_or_link(VV[75],(void **)(void *)&Lnk75);} /* PACKAGE-SIZE */
static void LnkT74(){ call_or_link(VV[74],(void **)(void *)&Lnk74);} /* MAKE-ALL-PROCLAIMS */
static void LnkT73(){ call_or_link(VV[73],(void **)(void *)&Lnk73);} /* OPEN */
static void LnkT72(){ call_or_link(VV[72],(void **)(void *)&Lnk72);} /* GET-PACKAGES */
static object  LnkTLI71(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[71],(void **)(void *)&LnkLI71,1,first,ap);va_end(ap);return V1;} /* DO-STANDARD-DEFSETF-1 */
static object  LnkTLI70(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[70],(void **)(void *)&LnkLI70,1,first,ap);va_end(ap);return V1;} /* GET-SETF-FUNCTION-NAME */
static object  LnkTLI69(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[69],(void **)(void *)&LnkLI69,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-TYPE-INCLUDED-TYPE-NAME */
static object  LnkTLI68(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[68],(void **)(void *)&LnkLI68,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-TYPE-INTERNAL-SLOTDS */
static object  LnkTLI67(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[67],(void **)(void *)&LnkLI67,1,first,ap);va_end(ap);return V1;} /* %STRUCTURE-NAME */
static object  LnkTLI66(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[66],(void **)(void *)&LnkLI66,2,first,ap);va_end(ap);return V1;} /* %SET-COMPILED-FUNCTION-NAME */
static object  LnkTLI65(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[65],(void **)(void *)&LnkLI65,2,first,ap);va_end(ap);return V1;} /* PROCLAIM-DEFMETHOD */
static void LnkT64(){ call_or_link(VV[64],(void **)(void *)&Lnk64);} /* TURBO-CLOSURE */
static void LnkT63(){ call_or_link(VV[63],(void **)(void *)&Lnk63);} /* EVERY */
static void LnkT61(){ call_or_link(VV[61],(void **)(void *)&Lnk61);} /* FIFTH */
static void LnkT60(){ call_or_link(VV[60],(void **)(void *)&Lnk60);} /* ADDRESS */
static void LnkT59(){ call_or_link(VV[59],(void **)(void *)&Lnk59);} /* EXTRACT-DECLARATIONS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

