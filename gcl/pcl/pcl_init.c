
#include "cmpinclude.h"
#include "pcl_init.h"
void init_pcl_init(){do_init(VV);}
/*	function definition for (FAST-METHOD MAKE-INSTANCE (SYMBOL))	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	{object V1;
	object V2;
	object V3;
	object V4;
	check_arg(4);
	V1=(base[0]);
	V2=(base[1]);
	V3=(base[2]);
	V4=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]=VV[21]->s.s_gfdef;
	base[5]= (VFUN_NARGS=1,(*(LnkLI22))((V3)));
	{object V7;
	V7= V4;
	 vs_top=base+6;
	 while(V7!=Cnil)
	 {vs_push((V7)->c.c_car);V7=(V7)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk21)(Lclptr21);
	return;
	}
}
/*	local entry for function (FAST-METHOD MAKE-INSTANCE (CLASS))	*/

static object LI2(V12,V13,V14,V15)

object V12;object V13;register object V14;object V15;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{register object V17;
	V17= V15;
	base[0]= (V14);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk23)(Lclptr23);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T10;}
	base[0]= (V14);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk24)(Lclptr24);
	vs_top=sup;
	goto T10;
T10:;
	base[0]= (V14);
	base[1]= (V17);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk25)(Lclptr25);
	vs_top=sup;
	V17= vs_base[0];
	{object V18;
	object V19;
	V18= (VFUN_NARGS=2,(*(LnkLI0))((V14),(V17)));
	{object V20;
	V20= STREF(object,(V18),8);
	if(!(((V20))==(VV[1]))){
	goto T24;}
	(void)((*(LnkLI26))((V18),VV[2]));
	V19= STREF(object,(V18),8);
	goto T21;
	goto T24;
T24:;
	V19= (V20);}
	goto T21;
T21:;
	if(!(type_of((V19))==t_cons)){
	goto T19;}
	if(!((CMPcar((V19)))==(VV[3]))){
	goto T19;}
	base[2]= VV[4];
	base[3]= CMPcdr((V19));
	base[5]= (V14);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk27)(Lclptr27);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	Lerror();
	vs_top=sup;}
	goto T19;
T19:;
	{object V21;
	base[0]=VV[28]->s.s_gfdef;
	base[1]= (V14);
	{object V22;
	V22= (V17);
	 vs_top=base+2;
	 while(V22!=Cnil)
	 {vs_push((V22)->c.c_car);V22=(V22)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk28)(Lclptr28);
	vs_top=sup;
	V21= vs_base[0];
	base[0]=VV[29]->s.s_gfdef;
	base[1]= (V21);
	{object V23;
	V23= (V17);
	 vs_top=base+2;
	 while(V23!=Cnil)
	 {vs_push((V23)->c.c_car);V23=(V23)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk29)(Lclptr29);
	vs_top=sup;
	{object V24 = (V21);
	VMR2(V24)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD DEFAULT-INITARGS (SLOT-CLASS T))	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{object V25;
	object V26;
	register object V27;
	register object V28;
	check_arg(4);
	V25=(base[0]);
	V26=(base[1]);
	V27=(base[2]);
	V28=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V30;
	{object V31;
	V32= (VFUN_NARGS=2,(*(LnkLI0))((V27),(V28)));
	V31= STREF(object,/* INLINE-ARGS */V32,28);
	if(!(((V31))==(VV[1]))){
	goto T47;}
	V33= (VFUN_NARGS=2,(*(LnkLI0))((V27),(V28)));
	(void)((*(LnkLI26))(/* INLINE-ARGS */V33,VV[5]));
	V34= (VFUN_NARGS=2,(*(LnkLI0))((V27),(V28)));
	V30= STREF(object,/* INLINE-ARGS */V34,28);
	goto T44;
	goto T47;
T47:;
	V30= (V31);}
	goto T44;
T44:;
	if(!(type_of((V30))==t_cons)){
	goto T51;}
	if(!((CMPcar((V30)))==(VV[6]))){
	goto T51;}
	base[4]= (*(LnkLI30))(CMPcadr((V30)),CMPcaddr((V30)),Cnil,(V28));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T51;
T51:;
	base[4]= Cnil;
	base[5]= (V28);
	vs_top=(vs_base=base+4)+2;
	{object _funobj = (V30);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	function definition for (FAST-METHOD INITIALIZE-INSTANCE (SLOT-OBJECT))	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{object V35;
	object V36;
	object V37;
	object V38;
	check_arg(4);
	V35=(base[0]);
	V36=(base[1]);
	V37=(base[2]);
	V38=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]=VV[11]->s.s_gfdef;
	base[5]= (V37);
	base[6]= Ct;
	{object V41;
	V41= V38;
	 vs_top=base+7;
	 while(V41!=Cnil)
	 {vs_push((V41)->c.c_car);V41=(V41)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk11)(Lclptr11);
	return;
	}
}
/*	local entry for function (FAST-METHOD REINITIALIZE-INSTANCE (SLOT-OBJECT))	*/

static object LI5(V46,V47,V48,V49)

object V46;object V47;register object V48;object V49;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V52;
	object V53;
	object V54;
	V52= (*(LnkLI31))((V48));
	V53= (VFUN_NARGS=2,(*(LnkLI0))((V52),V49));
	{object V55;
	V55= STREF(object,(V53),12);
	if(!(((V55))==(VV[1]))){
	goto T72;}
	(void)((*(LnkLI26))((V53),VV[7]));
	V54= STREF(object,(V53),12);
	goto T69;
	goto T72;
T72:;
	V54= (V55);}
	goto T69;
T69:;
	if(!(type_of((V54))==t_cons)){
	goto T66;}
	if(!((CMPcar((V54)))==(VV[3]))){
	goto T66;}
	base[3]= VV[8];
	base[4]= CMPcdr((V54));
	base[6]= (V52);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk27)(Lclptr27);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+3)+3;
	Lerror();
	vs_top=sup;}
	goto T66;
T66:;
	base[0]=VV[11]->s.s_gfdef;
	base[1]= (V48);
	base[2]= Cnil;
	{object V56;
	V56= V49;
	 vs_top=base+3;
	 while(V56!=Cnil)
	 {vs_push((V56)->c.c_car);V56=(V56)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk11)(Lclptr11);
	vs_top=sup;
	{object V57 = (V48);
	VMR5(V57)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for (FAST-METHOD UPDATE-INSTANCE-FOR-DIFFERENT-CLASS (STANDARD-OBJECT STANDARD-OBJECT))	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V58;
	object V59;
	object V60;
	register object V61;
	object V62;
	check_arg(5);
	V58=(base[0]);
	V59=(base[1]);
	V60=(base[2]);
	V61=(base[3]);
	V62=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V65;
	object V66;
	register object V67;
	base[5]= (*(LnkLI31))((V61));
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk32)(Lclptr32);
	vs_top=sup;
	V66= vs_base[0];
	base[6]=VV[33]->s.s_gfdef;
	base[7]= (*(LnkLI31))((V60));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk32)(Lclptr32);
	vs_top=sup;
	V70= vs_base[0];
	{object V68;
	object V69= V70;
	if(V69==Cnil){
	V67= Cnil;
	goto T93;}
	base[5]=V68=MMcons(Cnil,Cnil);
	goto T94;
T94:;
	base[7]= (V69->c.c_car);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk33)(Lclptr33);
	vs_top=sup;
	(V68->c.c_car)= vs_base[0];
	if((V69=MMcdr(V69))==Cnil){
	V67= base[5];
	goto T93;}
	V68=MMcdr(V68)=MMcons(Cnil,Cnil);
	goto T94;}
	goto T93;
T93:;
	V65= Cnil;
	{register object V71;
	register object V72;
	V71= (V66);
	V72= CMPcar((V71));
	goto T103;
T103:;
	if(!(((V71))==Cnil)){
	goto T104;}
	goto T99;
	goto T104;
T104:;
	base[6]= (V72);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk33)(Lclptr33);
	vs_top=sup;
	V74= vs_base[0];
	V75 = (V67);
	{register object x= V74,V73= V75;
	while(V73!=Cnil)
	if(x==(V73->c.c_car)){
	goto T108;
	}else V73=V73->c.c_cdr;}
	base[6]= (V72);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk34)(Lclptr34);
	vs_top=sup;
	V76= vs_base[0];
	if(!((V76)==(VV[9]))){
	goto T108;}
	{register object V77;
	base[7]= (V72);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk33)(Lclptr33);
	vs_top=sup;
	V77= vs_base[0];
	V65= make_cons((V77),(V65));}
	goto T108;
T108:;
	V71= CMPcdr((V71));
	V72= CMPcar((V71));
	goto T103;}
	goto T99;
T99:;
	V78= (*(LnkLI31))((V61));
	V79 = V62;
	V80= listA(4,VV[10],(V60),(V61),V62);
	V81= list(2,/* INLINE-ARGS */V80,listA(4,VV[11],(V61),(V65),V62));
	(void)((VFUN_NARGS=3,(*(LnkLI35))(/* INLINE-ARGS */V78,V79,/* INLINE-ARGS */V81)));
	base[5]=VV[11]->s.s_gfdef;
	base[6]= (V61);
	base[7]= (V65);
	{object V82;
	V82= V62;
	 vs_top=base+8;
	 while(V82!=Cnil)
	 {vs_push((V82)->c.c_car);V82=(V82)->c.c_cdr;}
	vs_base=base+6;}
	(void) (*Lnk11)(Lclptr11);
	return;}
	}
}
/*	function definition for (FAST-METHOD UPDATE-INSTANCE-FOR-REDEFINED-CLASS (STANDARD-OBJECT T T T))	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{object V83;
	object V84;
	register object V85;
	object V86;
	object V87;
	object V88;
	object V89;
	check_arg(7);
	V83=(base[0]);
	V84=(base[1]);
	V85=(base[2]);
	V86=(base[3]);
	V87=(base[4]);
	V88=(base[5]);
	V89=(base[6]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V91;
	V91= V89;
	V92= (*(LnkLI31))((V85));
	V93 = (V91);
	V94= listA(6,VV[12],(V85),(V86),(V87),(V88),(V91));
	V95= list(2,/* INLINE-ARGS */V94,listA(4,VV[11],(V85),(V86),(V91)));
	(void)((VFUN_NARGS=3,(*(LnkLI35))(/* INLINE-ARGS */V92,V93,/* INLINE-ARGS */V95)));
	base[7]=VV[11]->s.s_gfdef;
	base[8]= (V85);
	base[9]= (V86);
	{object V96;
	V96= (V91);
	 vs_top=base+10;
	 while(V96!=Cnil)
	 {vs_push((V96)->c.c_car);V96=(V96)->c.c_cdr;}
	vs_base=base+8;}
	(void) (*Lnk11)(Lclptr11);
	return;}
	}
}
/*	function definition for (FAST-METHOD SHARED-INITIALIZE (SLOT-OBJECT T))	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	{object V97;
	object V98;
	register object V99;
	register object V100;
	object V101;
	check_arg(5);
	V97=(base[0]);
	V98=(base[1]);
	V99=(base[2]);
	V100=(base[3]);
	V101=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(((V100))==(Ct))){
	goto T140;}
	{object V104;
	{object V105;
	V106= (*(LnkLI31))((V99));
	V107 = V101;
	V108= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V106,V107));
	V105= STREF(object,/* INLINE-ARGS */V108,32);
	if(!(((V105))==(VV[1]))){
	goto T146;}
	V109= (*(LnkLI31))((V99));
	V110 = V101;
	V111= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V109,V110));
	(void)((*(LnkLI26))(/* INLINE-ARGS */V111,VV[13]));
	V112= (*(LnkLI31))((V99));
	V113 = V101;
	V114= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V112,V113));
	V104= STREF(object,/* INLINE-ARGS */V114,32);
	goto T143;
	goto T146;
T146:;
	V104= (V105);}
	goto T143;
T143:;
	if(!(type_of((V104))==t_cons)){
	goto T150;}
	if(!((CMPcar((V104)))==(VV[6]))){
	goto T150;}
	base[5]= (*(LnkLI30))(CMPcadr((V104)),CMPcaddr((V104)),(V99),V101);
	vs_top=(vs_base=base+5)+1;
	return;
	goto T150;
T150:;
	base[5]= (V99);
	base[6]= V101;
	vs_top=(vs_base=base+5)+2;
	{object _funobj = (V104);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T140;
T140:;
	if(!(((V100))==(Cnil))){
	goto T156;}
	{object V115;
	{object V116;
	V117= (*(LnkLI31))((V99));
	V118 = V101;
	V119= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V117,V118));
	V116= STREF(object,/* INLINE-ARGS */V119,36);
	if(!(((V116))==(VV[1]))){
	goto T162;}
	V120= (*(LnkLI31))((V99));
	V121 = V101;
	V122= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V120,V121));
	(void)((*(LnkLI26))(/* INLINE-ARGS */V122,VV[14]));
	V123= (*(LnkLI31))((V99));
	V124 = V101;
	V125= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V123,V124));
	V115= STREF(object,/* INLINE-ARGS */V125,36);
	goto T159;
	goto T162;
T162:;
	V115= (V116);}
	goto T159;
T159:;
	if(!(type_of((V115))==t_cons)){
	goto T166;}
	if(!((CMPcar((V115)))==(VV[6]))){
	goto T166;}
	base[5]= (*(LnkLI30))(CMPcadr((V115)),CMPcaddr((V115)),(V99),V101);
	vs_top=(vs_base=base+5)+1;
	return;
	goto T166;
T166:;
	base[5]= (V99);
	base[6]= V101;
	vs_top=(vs_base=base+5)+2;
	{object _funobj = (V115);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T156;
T156:;
	{object V126;
	object V127;
	object V128;
	V126= (*(LnkLI31))((V99));
	base[8]= (V126);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk32)(Lclptr32);
	vs_top=sup;
	V127= vs_base[0];{object V129;
	if(type_of(V99)==t_structure){
	goto T178;}
	V129= Cnil;
	goto T177;
	goto T178;
T178:;
	V129= (((V99)->str.str_def)==(VV[15])?Ct:Cnil);
	goto T177;
T177:;
	if(V129==Cnil)goto T176;
	V128= V129;
	goto T175;
	goto T176;
T176:;}{object V131;
	V131= (VV[16]->s.s_dbind);
	base[8]= small_fixnum(14);
	base[9]= (V99);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk36)();
	vs_top=sup;
	V132= vs_base[0];
	V128= ((V131)==(CMPcar(V132))?Ct:Cnil);}
	goto T175;
T175:;
	{object V133;
	register object V134;
	V133= (V127);
	V134= CMPcar((V133));
	goto T187;
T187:;
	if(!(((V133))==Cnil)){
	goto T188;}
	goto T183;
	goto T188;
T188:;
	{object V135;
	object V136;
	base[9]= (V134);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk33)(Lclptr33);
	vs_top=sup;
	V135= vs_base[0];
	base[9]= (V134);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk37)(Lclptr37);
	vs_top=sup;
	V136= vs_base[0];
	{register object V137;
	register object V138;
	register object V139;
	V137= V101;
	V138= Cnil;
	V139= Cnil;
	goto T200;
T200:;
	if(((V137))!=Cnil){
	goto T202;}
	goto T198;
	goto T202;
T202:;
	{object V140;
	V140= CMPcar((V137));
	V137= CMPcdr((V137));
	V138= (V140);}
	if(((V137))!=Cnil){
	goto T210;}
	base[9]= VV[17];
	vs_top=(vs_base=base+9)+1;
	Lerror();
	vs_top=sup;
	goto T210;
T210:;
	{object V141;
	V141= CMPcar((V137));
	V137= CMPcdr((V137));
	V139= (V141);}
	{register object x= (V138),V142= (V136);
	while(V142!=Cnil)
	if(x==(V142->c.c_car)){
	goto T220;
	}else V142=V142->c.c_cdr;
	goto T201;}
	goto T220;
T220:;
	V147= ({object _tmp=get(VV[38],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[38])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[38])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V148 = V139;
	V149 = V126;
	V150 = V99;
	V151 = V134;
	(void)((
	V152 = V147,
	(type_of(V152) == t_sfun ?(*((V152)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V152)==t_vfun) ?
	(*((V152)->sfn.sfn_self)):
	(fcall.fun=(V152),fcalln))(V148,V149,V150,V151)));
	goto T192;
	goto T201;
T201:;
	goto T200;}
	goto T198;
T198:;
	if(((V100))==Cnil){
	goto T192;}
	if(((V100))==(Ct)){
	goto T227;}
	{register object x= (V135),V153= (V100);
	while(V153!=Cnil)
	if(x==(V153->c.c_car)){
	goto T230;
	}else V153=V153->c.c_cdr;
	goto T192;}
	goto T230;
T230:;
	goto T227;
T227:;
	if(((V128))!=Cnil){
	goto T231;}
	if(((V100))==(Ct)){
	goto T224;}
	goto T231;
T231:;
	base[9]= (V126);
	base[10]= (V99);
	base[11]= (V134);
	vs_top=(vs_base=base+9)+3;
	(void) (*Lnk39)(Lclptr39);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T192;}
	goto T224;
T224:;
	{object V154;
	base[9]= (V134);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk40)(Lclptr40);
	vs_top=sup;
	V154= vs_base[0];
	if(((V154))==Cnil){
	goto T192;}
	{object V158;
	V158= (
	(type_of((V154)) == t_sfun ?(*(((V154))->sfn.sfn_self)):
	(fcall.argd=0,type_of((V154))==t_vfun) ?
	(*(((V154))->sfn.sfn_self)):
	(fcall.fun=((V154)),fcalln))());
	V159= ({object _tmp=get(VV[38],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[38])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[38])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V160 = (V158);
	V161 = V126;
	V162 = V99;
	V163 = V134;
	(void)((
	V164 = V159,
	(type_of(V164) == t_sfun ?(*((V164)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V164)==t_vfun) ?
	(*((V164)->sfn.sfn_self)):
	(fcall.fun=(V164),fcalln))(V160,V161,V162,V163)));}}}
	goto T192;
T192:;
	V133= CMPcdr((V133));
	V134= CMPcar((V133));
	goto T187;}
	goto T183;
T183:;
	base[8]= (V99);
	vs_top=(vs_base=base+8)+1;
	return;}
	}
}
/*	local entry for function CHECK-INITARGS-1	*/

static object LI9(object V167,object V166,object V165,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V168;
	object V169;
	object V170;
	object V171;
	object V172;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V168= V167;
	V169= V166;
	V170= V165;
	narg = narg - 3;
	if (narg <= 0) goto T250;
	else {
	V171= first;}
	if (--narg <= 0) goto T251;
	else {
	V172= va_arg(ap,object);}
	--narg; goto T252;
	goto T250;
T250:;
	V171= Ct;
	goto T251;
T251:;
	V172= Ct;
	goto T252;
T252:;
	{object V173;
	object V174;
	base[0]= (V168);
	base[1]= (V170);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk41)();
	if(vs_base>=vs_top){vs_top=sup;goto T258;}
	V173= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T259;}
	V174= vs_base[0];
	vs_top=sup;
	goto T260;
	goto T258;
T258:;
	V173= Cnil;
	goto T259;
T259:;
	V174= Cnil;
	goto T260;
T260:;
	if(((V174))!=Cnil){
	goto T262;}
	if(((V171))==Cnil){
	goto T265;}
	{object V175 = (VFUN_NARGS=4,(*(LnkLI42))((V169),(V168),(V173),(V172)));
	VMR9(V175)}
	goto T265;
T265:;
	{object V176 = (VFUN_NARGS=4,(*(LnkLI43))((V169),(V168),(V173),(V172)));
	VMR9(V176)}
	goto T262;
T262:;
	{object V177 = Cnil;
	VMR9(V177)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for CHECK-INITARGS-VALUES	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V178;
	object V179;
	check_arg(2);
	V178=(base[0]);
	V179=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V180;
	register object V181;
	{object V182;
	object V183= (V179);
	if(V183==Cnil){
	V180= Cnil;
	goto T267;}
	base[2]=V182=MMcons(Cnil,Cnil);
	goto T268;
T268:;
	{register object V184;
	V184= (V183->c.c_car);
	if(!(type_of((V184))==t_cons)){
	goto T271;}
	base[4]= (*(LnkLI44))(CMPcar((V184)));
	base[5]= CMPcdr((V184));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk45)(Lclptr45);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lcopy_list();
	vs_top=sup;
	(V182->c.c_cdr)= vs_base[0];
	goto T269;
	goto T271;
T271:;
	(V182->c.c_cdr)= make_cons((V184),Cnil);}
	goto T269;
T269:;
	while(MMcdr(V182)!=Cnil)V182=MMcdr(V182);
	if((V183=MMcdr(V183))==Cnil){
	base[2]=base[2]->c.c_cdr;
	V180= base[2];
	goto T267;}
	goto T268;}
	goto T267;
T267:;
	{object V185;
	base[3]=VV[37]->s.s_gfdef;
	base[4]= (V178);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk32)(Lclptr32);
	vs_top=sup;
	V188= vs_base[0];
	{object V186;
	object V187= V188;
	if(V187==Cnil){
	V185= Cnil;
	goto T277;}
	base[2]=V186=MMcons(Cnil,Cnil);
	goto T278;
T278:;
	base[4]= (V187->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk37)(Lclptr37);
	vs_top=sup;
	(V186->c.c_car)= vs_base[0];
	if((V187=MMcdr(V187))==Cnil){
	V185= base[2];
	goto T277;}
	V186=MMcdr(V186)=MMcons(Cnil,Cnil);
	goto T278;}
	goto T277;
T277:;
	 vs_top=base+2;
	 while(V185!=Cnil)
	 {vs_push((V185)->c.c_car);V185=(V185)->c.c_cdr;}
	vs_base=base+2;}
	Lappend();
	vs_top=sup;
	V181= vs_base[0];
	{register object V189;
	register object V190;
	V189= (V180);
	V190= CMPcar((V189));
	goto T287;
T287:;
	if(!(((V189))==Cnil)){
	goto T288;}
	goto T283;
	goto T288;
T288:;
	{register object V191;
	register object V192;
	register object V193;
	register object V194;
	register object V195;
	register object V196;
	if(!(type_of((V190))==t_cons)){
	goto T296;}
	base[3]= (*(LnkLI46))((V190));
	goto T294;
	goto T296;
T296:;
	base[4]= (V190);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk47)(Lclptr47);
	vs_top=sup;
	base[3]= vs_base[0];
	goto T294;
T294:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk48)();
	if(vs_base>=vs_top){vs_top=sup;goto T299;}
	V191= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T300;}
	V192= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T301;}
	V193= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T302;}
	V194= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T303;}
	V195= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T304;}
	V196= vs_base[0];
	vs_top=sup;
	goto T305;
	goto T299;
T299:;
	V191= Cnil;
	goto T300;
T300:;
	V192= Cnil;
	goto T301;
T301:;
	V193= Cnil;
	goto T302;
T302:;
	V194= Cnil;
	goto T303;
T303:;
	V195= Cnil;
	goto T304;
T304:;
	V196= Cnil;
	goto T305;
T305:;
	if(((V195))==Cnil){
	goto T306;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T306;
T306:;
	V181= append((V196),(V181));}
	V189= CMPcdr((V189));
	V190= CMPcar((V189));
	goto T287;}
	goto T283;
T283:;
	base[2]= (V181);
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	local entry for function CHECK-INITARGS-2-PLIST	*/

static object LI11(object V199,object V198,object V197,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V200;
	register object V201;
	register object V202;
	register object V203;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V200= V199;
	V201= V198;
	V202= V197;
	narg = narg - 3;
	if (narg <= 0) goto T319;
	else {
	V203= first;}
	--narg; goto T320;
	goto T319;
T319:;
	V203= Ct;
	goto T320;
T320:;
	base[0]= (V200);
	base[1]= VV[18];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T322;}
	{register object V204;
	register object V205;
	register object V206;
	V204= (V200);
	V205= Cnil;
	V206= Cnil;
	goto T328;
T328:;
	if(((V204))!=Cnil){
	goto T330;}
	goto T322;
	goto T330;
T330:;
	{register object V207;
	V207= CMPcar((V204));
	V204= CMPcdr((V204));
	V205= (V207);}
	if(((V204))!=Cnil){
	goto T338;}
	base[0]= VV[17];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T338;
T338:;
	{register object V208;
	V208= CMPcar((V204));
	V204= CMPcdr((V204));
	V206= (V208);}
	{register object x= (V205),V209= (V202);
	while(V209!=Cnil)
	if(x==(V209->c.c_car)){
	goto T329;
	}else V209=V209->c.c_cdr;}
	if(((V203))==Cnil){
	goto T350;}
	base[0]= VV[19];
	base[1]= (V205);
	base[3]= (V201);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk27)(Lclptr27);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	goto T329;
	goto T350;
T350:;
	{object V210 = Cnil;
	VMR11(V210)}
	goto T329;
T329:;
	goto T328;}
	goto T322;
T322:;
	{object V211 = Ct;
	VMR11(V211)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function CHECK-INITARGS-2-LIST	*/

static object LI12(object V214,object V213,object V212,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V215;
	register object V216;
	register object V217;
	register object V218;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V215= V214;
	V216= V213;
	V217= V212;
	narg = narg - 3;
	if (narg <= 0) goto T357;
	else {
	V218= first;}
	--narg; goto T358;
	goto T357;
T357:;
	V218= Ct;
	goto T358;
T358:;
	{register object x= VV[18],V219= (V215);
	while(V219!=Cnil)
	if(x==(V219->c.c_car)){
	goto T360;
	}else V219=V219->c.c_cdr;}
	{register object V220;
	register object V221;
	V220= (V215);
	V221= CMPcar((V220));
	goto T366;
T366:;
	if(!(((V220))==Cnil)){
	goto T367;}
	goto T360;
	goto T367;
T367:;
	{register object x= (V221),V222= (V217);
	while(V222!=Cnil)
	if(x==(V222->c.c_car)){
	goto T371;
	}else V222=V222->c.c_cdr;}
	if(((V218))==Cnil){
	goto T375;}
	base[1]= VV[20];
	base[2]= (V221);
	base[4]= (V216);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk27)(Lclptr27);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+1)+3;
	Lerror();
	vs_top=sup;
	goto T371;
	goto T375;
T375:;
	{object V223 = Cnil;
	VMR12(V223)}
	goto T371;
T371:;
	V220= CMPcdr((V220));
	V221= CMPcar((V220));
	goto T366;}
	goto T360;
T360:;
	{object V224 = Ct;
	VMR12(V224)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
static void LnkT48(){ call_or_link(VV[48],(void **)(void *)&Lnk48);} /* ANALYZE-LAMBDA-LIST */
static void LnkT47(ptr) object *ptr;{ call_or_link_closure(VV[47],(void **)(void *)&Lnk47,(void **)(void *)&Lclptr47);} /* METHOD-LAMBDA-LIST */
static object  LnkTLI46(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[46],(void **)(void *)&LnkLI46,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-LAMBDA-LIST */
static void LnkT45(ptr) object *ptr;{ call_or_link_closure(VV[45],(void **)(void *)&Lnk45,(void **)(void *)&Lclptr45);} /* COMPUTE-APPLICABLE-METHODS */
static object  LnkTLI44(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[44],(void **)(void *)&LnkLI44,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static object  LnkTLI43(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[43],(void **)(void *)&LnkLI43,first,ap);va_end(ap);return V1;} /* CHECK-INITARGS-2-LIST */
static object  LnkTLI42(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[42],(void **)(void *)&LnkLI42,first,ap);va_end(ap);return V1;} /* CHECK-INITARGS-2-PLIST */
static void LnkT41(){ call_or_link(VV[41],(void **)(void *)&Lnk41);} /* CHECK-INITARGS-VALUES */
static void LnkT40(ptr) object *ptr;{ call_or_link_closure(VV[40],(void **)(void *)&Lnk40,(void **)(void *)&Lclptr40);} /* SLOT-DEFINITION-INITFUNCTION */
static void LnkT39(ptr) object *ptr;{ call_or_link_closure(VV[39],(void **)(void *)&Lnk39,(void **)(void *)&Lclptr39);} /* SLOT-BOUNDP-USING-CLASS */
static void LnkT37(ptr) object *ptr;{ call_or_link_closure(VV[37],(void **)(void *)&Lnk37,(void **)(void *)&Lclptr37);} /* SLOT-DEFINITION-INITARGS */
static void LnkT36(){ call_or_link(VV[36],(void **)(void *)&Lnk36);} /* CCLOSURE-ENV-NTHCDR */
static object  LnkTLI35(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[35],(void **)(void *)&LnkLI35,first,ap);va_end(ap);return V1;} /* CHECK-INITARGS-1 */
static void LnkT34(ptr) object *ptr;{ call_or_link_closure(VV[34],(void **)(void *)&Lnk34,(void **)(void *)&Lclptr34);} /* SLOT-DEFINITION-ALLOCATION */
static void LnkT33(ptr) object *ptr;{ call_or_link_closure(VV[33],(void **)(void *)&Lnk33,(void **)(void *)&Lclptr33);} /* SLOT-DEFINITION-NAME */
static void LnkT32(ptr) object *ptr;{ call_or_link_closure(VV[32],(void **)(void *)&Lnk32,(void **)(void *)&Lclptr32);} /* CLASS-SLOTS */
static object  LnkTLI31(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[31],(void **)(void *)&LnkLI31,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static void LnkT11(ptr) object *ptr;{ call_or_link_closure(VV[11],(void **)(void *)&Lnk11,(void **)(void *)&Lclptr11);} /* SHARED-INITIALIZE */
static object  LnkTLI30(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[30],(void **)(void *)&LnkLI30,4,first,ap);va_end(ap);return V1;} /* INITIALIZE-INSTANCE-SIMPLE */
static void LnkT29(ptr) object *ptr;{ call_or_link_closure(VV[29],(void **)(void *)&Lnk29,(void **)(void *)&Lclptr29);} /* INITIALIZE-INSTANCE */
static void LnkT28(ptr) object *ptr;{ call_or_link_closure(VV[28],(void **)(void *)&Lnk28,(void **)(void *)&Lclptr28);} /* ALLOCATE-INSTANCE */
static void LnkT27(ptr) object *ptr;{ call_or_link_closure(VV[27],(void **)(void *)&Lnk27,(void **)(void *)&Lclptr27);} /* CLASS-NAME */
static object  LnkTLI26(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[26],(void **)(void *)&LnkLI26,2,first,ap);va_end(ap);return V1;} /* UPDATE-INITIALIZE-INFO-INTERNAL */
static object  LnkTLI0(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[0],(void **)(void *)&LnkLI0,first,ap);va_end(ap);return V1;} /* INITIALIZE-INFO */
static void LnkT25(ptr) object *ptr;{ call_or_link_closure(VV[25],(void **)(void *)&Lnk25,(void **)(void *)&Lclptr25);} /* DEFAULT-INITARGS */
static void LnkT24(ptr) object *ptr;{ call_or_link_closure(VV[24],(void **)(void *)&Lnk24,(void **)(void *)&Lclptr24);} /* FINALIZE-INHERITANCE */
static void LnkT23(ptr) object *ptr;{ call_or_link_closure(VV[23],(void **)(void *)&Lnk23,(void **)(void *)&Lclptr23);} /* CLASS-FINALIZED-P */
static void LnkT21(ptr) object *ptr;{ call_or_link_closure(VV[21],(void **)(void *)&Lnk21,(void **)(void *)&Lclptr21);} /* MAKE-INSTANCE */
static object  LnkTLI22(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[22],(void **)(void *)&LnkLI22,first,ap);va_end(ap);return V1;} /* FIND-CLASS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

