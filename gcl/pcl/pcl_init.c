
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
	base[9]= (V139);
	base[10]= V126;
	base[11]= V99;
	base[12]= V134;
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk38)(Lclptr38);
	vs_top=sup;
	goto T192;
	goto T201;
T201:;
	goto T200;}
	goto T198;
T198:;
	if(((V100))==Cnil){
	goto T192;}
	if(((V100))==(Ct)){
	goto T230;}
	{register object x= (V135),V146= (V100);
	while(V146!=Cnil)
	if(x==(V146->c.c_car)){
	goto T233;
	}else V146=V146->c.c_cdr;
	goto T192;}
	goto T233;
T233:;
	goto T230;
T230:;
	if(((V128))!=Cnil){
	goto T234;}
	if(((V100))==(Ct)){
	goto T227;}
	goto T234;
T234:;
	base[9]= (V126);
	base[10]= (V99);
	base[11]= (V134);
	vs_top=(vs_base=base+9)+3;
	(void) (*Lnk39)(Lclptr39);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T192;}
	goto T227;
T227:;
	{object V147;
	base[9]= (V134);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk40)(Lclptr40);
	vs_top=sup;
	V147= vs_base[0];
	if(((V147))==Cnil){
	goto T192;}
	vs_base=vs_top;
	{object _funobj = (V147);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[9]= vs_base[0];
	base[10]= V126;
	base[11]= V99;
	base[12]= V134;
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk38)(Lclptr38);
	vs_top=sup;}}
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

static object LI9(object V153,object V152,object V151,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V154;
	object V155;
	object V156;
	object V157;
	object V158;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V154= V153;
	V155= V152;
	V156= V151;
	narg = narg - 3;
	if (narg <= 0) goto T255;
	else {
	V157= first;}
	if (--narg <= 0) goto T256;
	else {
	V158= va_arg(ap,object);}
	--narg; goto T257;
	goto T255;
T255:;
	V157= Ct;
	goto T256;
T256:;
	V158= Ct;
	goto T257;
T257:;
	{object V159;
	object V160;
	base[0]= (V154);
	base[1]= (V156);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk41)();
	if(vs_base>=vs_top){vs_top=sup;goto T263;}
	V159= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T264;}
	V160= vs_base[0];
	vs_top=sup;
	goto T265;
	goto T263;
T263:;
	V159= Cnil;
	goto T264;
T264:;
	V160= Cnil;
	goto T265;
T265:;
	if(((V160))!=Cnil){
	goto T267;}
	if(((V157))==Cnil){
	goto T270;}
	{object V161 = (VFUN_NARGS=4,(*(LnkLI42))((V155),(V154),(V159),(V158)));
	VMR9(V161)}
	goto T270;
T270:;
	{object V162 = (VFUN_NARGS=4,(*(LnkLI43))((V155),(V154),(V159),(V158)));
	VMR9(V162)}
	goto T267;
T267:;
	{object V163 = Cnil;
	VMR9(V163)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for CHECK-INITARGS-VALUES	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V164;
	object V165;
	check_arg(2);
	V164=(base[0]);
	V165=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V166;
	register object V167;
	{object V168;
	object V169= (V165);
	if(V169==Cnil){
	V166= Cnil;
	goto T272;}
	base[2]=V168=MMcons(Cnil,Cnil);
	goto T273;
T273:;
	{register object V170;
	V170= (V169->c.c_car);
	if(!(type_of((V170))==t_cons)){
	goto T276;}
	base[4]= (*(LnkLI44))(CMPcar((V170)));
	base[5]= CMPcdr((V170));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk45)(Lclptr45);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lcopy_list();
	vs_top=sup;
	(V168->c.c_cdr)= vs_base[0];
	goto T274;
	goto T276;
T276:;
	(V168->c.c_cdr)= make_cons((V170),Cnil);}
	goto T274;
T274:;
	while(MMcdr(V168)!=Cnil)V168=MMcdr(V168);
	if((V169=MMcdr(V169))==Cnil){
	base[2]=base[2]->c.c_cdr;
	V166= base[2];
	goto T272;}
	goto T273;}
	goto T272;
T272:;
	{object V171;
	base[3]=VV[37]->s.s_gfdef;
	base[4]= (V164);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk32)(Lclptr32);
	vs_top=sup;
	V174= vs_base[0];
	{object V172;
	object V173= V174;
	if(V173==Cnil){
	V171= Cnil;
	goto T282;}
	base[2]=V172=MMcons(Cnil,Cnil);
	goto T283;
T283:;
	base[4]= (V173->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk37)(Lclptr37);
	vs_top=sup;
	(V172->c.c_car)= vs_base[0];
	if((V173=MMcdr(V173))==Cnil){
	V171= base[2];
	goto T282;}
	V172=MMcdr(V172)=MMcons(Cnil,Cnil);
	goto T283;}
	goto T282;
T282:;
	 vs_top=base+2;
	 while(V171!=Cnil)
	 {vs_push((V171)->c.c_car);V171=(V171)->c.c_cdr;}
	vs_base=base+2;}
	Lappend();
	vs_top=sup;
	V167= vs_base[0];
	{register object V175;
	register object V176;
	V175= (V166);
	V176= CMPcar((V175));
	goto T292;
T292:;
	if(!(((V175))==Cnil)){
	goto T293;}
	goto T288;
	goto T293;
T293:;
	{register object V177;
	register object V178;
	register object V179;
	register object V180;
	register object V181;
	register object V182;
	if(!(type_of((V176))==t_cons)){
	goto T301;}
	base[3]= (*(LnkLI46))((V176));
	goto T299;
	goto T301;
T301:;
	base[4]= (V176);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk47)(Lclptr47);
	vs_top=sup;
	base[3]= vs_base[0];
	goto T299;
T299:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk48)();
	if(vs_base>=vs_top){vs_top=sup;goto T304;}
	V177= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T305;}
	V178= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T306;}
	V179= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T307;}
	V180= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T308;}
	V181= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T309;}
	V182= vs_base[0];
	vs_top=sup;
	goto T310;
	goto T304;
T304:;
	V177= Cnil;
	goto T305;
T305:;
	V178= Cnil;
	goto T306;
T306:;
	V179= Cnil;
	goto T307;
T307:;
	V180= Cnil;
	goto T308;
T308:;
	V181= Cnil;
	goto T309;
T309:;
	V182= Cnil;
	goto T310;
T310:;
	if(((V181))==Cnil){
	goto T311;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T311;
T311:;
	V167= append((V182),(V167));}
	V175= CMPcdr((V175));
	V176= CMPcar((V175));
	goto T292;}
	goto T288;
T288:;
	base[2]= (V167);
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	local entry for function CHECK-INITARGS-2-PLIST	*/

static object LI11(object V185,object V184,object V183,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V186;
	register object V187;
	register object V188;
	register object V189;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V186= V185;
	V187= V184;
	V188= V183;
	narg = narg - 3;
	if (narg <= 0) goto T324;
	else {
	V189= first;}
	--narg; goto T325;
	goto T324;
T324:;
	V189= Ct;
	goto T325;
T325:;
	base[0]= (V186);
	base[1]= VV[18];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T327;}
	{register object V190;
	register object V191;
	register object V192;
	V190= (V186);
	V191= Cnil;
	V192= Cnil;
	goto T333;
T333:;
	if(((V190))!=Cnil){
	goto T335;}
	goto T327;
	goto T335;
T335:;
	{register object V193;
	V193= CMPcar((V190));
	V190= CMPcdr((V190));
	V191= (V193);}
	if(((V190))!=Cnil){
	goto T343;}
	base[0]= VV[17];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T343;
T343:;
	{register object V194;
	V194= CMPcar((V190));
	V190= CMPcdr((V190));
	V192= (V194);}
	{register object x= (V191),V195= (V188);
	while(V195!=Cnil)
	if(x==(V195->c.c_car)){
	goto T334;
	}else V195=V195->c.c_cdr;}
	if(((V189))==Cnil){
	goto T355;}
	base[0]= VV[19];
	base[1]= (V191);
	base[3]= (V187);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk27)(Lclptr27);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lerror();
	vs_top=sup;
	goto T334;
	goto T355;
T355:;
	{object V196 = Cnil;
	VMR11(V196)}
	goto T334;
T334:;
	goto T333;}
	goto T327;
T327:;
	{object V197 = Ct;
	VMR11(V197)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function CHECK-INITARGS-2-LIST	*/

static object LI12(object V200,object V199,object V198,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V201;
	register object V202;
	register object V203;
	register object V204;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V201= V200;
	V202= V199;
	V203= V198;
	narg = narg - 3;
	if (narg <= 0) goto T362;
	else {
	V204= first;}
	--narg; goto T363;
	goto T362;
T362:;
	V204= Ct;
	goto T363;
T363:;
	{register object x= VV[18],V205= (V201);
	while(V205!=Cnil)
	if(x==(V205->c.c_car)){
	goto T365;
	}else V205=V205->c.c_cdr;}
	{register object V206;
	register object V207;
	V206= (V201);
	V207= CMPcar((V206));
	goto T371;
T371:;
	if(!(((V206))==Cnil)){
	goto T372;}
	goto T365;
	goto T372;
T372:;
	{register object x= (V207),V208= (V203);
	while(V208!=Cnil)
	if(x==(V208->c.c_car)){
	goto T376;
	}else V208=V208->c.c_cdr;}
	if(((V204))==Cnil){
	goto T380;}
	base[1]= VV[20];
	base[2]= (V207);
	base[4]= (V202);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk27)(Lclptr27);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+1)+3;
	Lerror();
	vs_top=sup;
	goto T376;
	goto T380;
T380:;
	{object V209 = Cnil;
	VMR12(V209)}
	goto T376;
T376:;
	V206= CMPcdr((V206));
	V207= CMPcar((V206));
	goto T371;}
	goto T365;
T365:;
	{object V210 = Ct;
	VMR12(V210)}
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
static void LnkT38(ptr) object *ptr;{ call_or_link_closure(VV[38],(void **)(void *)&Lnk38,(void **)(void *)&Lclptr38);} /* SETF PCL SLOT-VALUE-USING-CLASS */
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

