
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
	{register object x= V74,V73= (V67);
	while(V73!=Cnil)
	if(x==(V73->c.c_car)){
	goto T108;
	}else V73=V73->c.c_cdr;}
	base[6]= (V72);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk34)(Lclptr34);
	vs_top=sup;
	V75= vs_base[0];
	if(!((V75)==(VV[9]))){
	goto T108;}
	{register object V76;
	base[7]= (V72);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk33)(Lclptr33);
	vs_top=sup;
	V76= vs_base[0];
	V65= make_cons((V76),(V65));}
	goto T108;
T108:;
	V71= CMPcdr((V71));
	V72= CMPcar((V71));
	goto T103;}
	goto T99;
T99:;
	V77= (*(LnkLI31))((V61));
	V78= listA(4,VV[10],(V60),(V61),V62);
	V79= list(2,/* INLINE-ARGS */V78,listA(4,VV[11],(V61),(V65),V62));
	(void)((VFUN_NARGS=3,(*(LnkLI35))(/* INLINE-ARGS */V77,V62,/* INLINE-ARGS */V79)));
	base[5]=VV[11]->s.s_gfdef;
	base[6]= (V61);
	base[7]= (V65);
	{object V80;
	V80= V62;
	 vs_top=base+8;
	 while(V80!=Cnil)
	 {vs_push((V80)->c.c_car);V80=(V80)->c.c_cdr;}
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
	{object V81;
	object V82;
	register object V83;
	object V84;
	object V85;
	object V86;
	object V87;
	check_arg(7);
	V81=(base[0]);
	V82=(base[1]);
	V83=(base[2]);
	V84=(base[3]);
	V85=(base[4]);
	V86=(base[5]);
	V87=(base[6]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V89;
	V89= V87;
	V90= (*(LnkLI31))((V83));
	V91= listA(6,VV[12],(V83),(V84),(V85),(V86),(V89));
	V92= list(2,/* INLINE-ARGS */V91,listA(4,VV[11],(V83),(V84),(V89)));
	(void)((VFUN_NARGS=3,(*(LnkLI35))(/* INLINE-ARGS */V90,(V89),/* INLINE-ARGS */V92)));
	base[7]=VV[11]->s.s_gfdef;
	base[8]= (V83);
	base[9]= (V84);
	{object V93;
	V93= (V89);
	 vs_top=base+10;
	 while(V93!=Cnil)
	 {vs_push((V93)->c.c_car);V93=(V93)->c.c_cdr;}
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
	{object V94;
	object V95;
	register object V96;
	register object V97;
	object V98;
	check_arg(5);
	V94=(base[0]);
	V95=(base[1]);
	V96=(base[2]);
	V97=(base[3]);
	V98=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(((V97))==(Ct))){
	goto T140;}
	{object V101;
	{object V102;
	V103= (*(LnkLI31))((V96));
	V104= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V103,V98));
	V102= STREF(object,/* INLINE-ARGS */V104,32);
	if(!(((V102))==(VV[1]))){
	goto T146;}
	V105= (*(LnkLI31))((V96));
	V106= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V105,V98));
	(void)((*(LnkLI26))(/* INLINE-ARGS */V106,VV[13]));
	V107= (*(LnkLI31))((V96));
	V108= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V107,V98));
	V101= STREF(object,/* INLINE-ARGS */V108,32);
	goto T143;
	goto T146;
T146:;
	V101= (V102);}
	goto T143;
T143:;
	if(!(type_of((V101))==t_cons)){
	goto T150;}
	if(!((CMPcar((V101)))==(VV[6]))){
	goto T150;}
	base[5]= (*(LnkLI30))(CMPcadr((V101)),CMPcaddr((V101)),(V96),V98);
	vs_top=(vs_base=base+5)+1;
	return;
	goto T150;
T150:;
	base[5]= (V96);
	base[6]= V98;
	vs_top=(vs_base=base+5)+2;
	{object _funobj = (V101);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T140;
T140:;
	if(!(((V97))==(Cnil))){
	goto T156;}
	{object V109;
	{object V110;
	V111= (*(LnkLI31))((V96));
	V112= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V111,V98));
	V110= STREF(object,/* INLINE-ARGS */V112,36);
	if(!(((V110))==(VV[1]))){
	goto T162;}
	V113= (*(LnkLI31))((V96));
	V114= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V113,V98));
	(void)((*(LnkLI26))(/* INLINE-ARGS */V114,VV[14]));
	V115= (*(LnkLI31))((V96));
	V116= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V115,V98));
	V109= STREF(object,/* INLINE-ARGS */V116,36);
	goto T159;
	goto T162;
T162:;
	V109= (V110);}
	goto T159;
T159:;
	if(!(type_of((V109))==t_cons)){
	goto T166;}
	if(!((CMPcar((V109)))==(VV[6]))){
	goto T166;}
	base[5]= (*(LnkLI30))(CMPcadr((V109)),CMPcaddr((V109)),(V96),V98);
	vs_top=(vs_base=base+5)+1;
	return;
	goto T166;
T166:;
	base[5]= (V96);
	base[6]= V98;
	vs_top=(vs_base=base+5)+2;
	{object _funobj = (V109);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	goto T156;
T156:;
	{object V117;
	object V118;
	object V119;
	V117= (*(LnkLI31))((V96));
	base[8]= (V117);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk32)(Lclptr32);
	vs_top=sup;
	V118= vs_base[0];{object V120;
	if(type_of(V96)==t_structure){
	goto T178;}
	V120= Cnil;
	goto T177;
	goto T178;
T178:;
	V120= (((V96)->str.str_def)==(VV[15])?Ct:Cnil);
	goto T177;
T177:;
	if(V120==Cnil)goto T176;
	V119= V120;
	goto T175;
	goto T176;
T176:;}{object V122;
	V122= (VV[16]->s.s_dbind);
	base[8]= small_fixnum(14);
	base[9]= (V96);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk36)();
	vs_top=sup;
	V123= vs_base[0];
	V119= ((V122)==(CMPcar(V123))?Ct:Cnil);}
	goto T175;
T175:;
	{object V124;
	register object V125;
	V124= (V118);
	V125= CMPcar((V124));
	goto T187;
T187:;
	if(!(((V124))==Cnil)){
	goto T188;}
	goto T183;
	goto T188;
T188:;
	{object V126;
	object V127;
	base[9]= (V125);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk33)(Lclptr33);
	vs_top=sup;
	V126= vs_base[0];
	base[9]= (V125);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk37)(Lclptr37);
	vs_top=sup;
	V127= vs_base[0];
	{register object V128;
	register object V129;
	register object V130;
	V128= V98;
	V129= Cnil;
	V130= Cnil;
	goto T200;
T200:;
	if(((V128))!=Cnil){
	goto T202;}
	goto T198;
	goto T202;
T202:;
	{object V131;
	V131= CMPcar((V128));
	V128= CMPcdr((V128));
	V129= (V131);}
	if(((V128))!=Cnil){
	goto T210;}
	base[9]= VV[17];
	vs_top=(vs_base=base+9)+1;
	Lerror();
	vs_top=sup;
	goto T210;
T210:;
	{object V132;
	V132= CMPcar((V128));
	V128= CMPcdr((V128));
	V130= (V132);}
	{register object x= (V129),V133= (V127);
	while(V133!=Cnil)
	if(x==(V133->c.c_car)){
	goto T220;
	}else V133=V133->c.c_cdr;
	goto T201;}
	goto T220;
T220:;
	base[9]= (V130);
	base[10]= V117;
	base[11]= V96;
	base[12]= V125;
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk38)(Lclptr38);
	vs_top=sup;
	goto T192;
	goto T201;
T201:;
	goto T200;}
	goto T198;
T198:;
	if(((V97))==Cnil){
	goto T192;}
	if(((V97))==(Ct)){
	goto T230;}
	{register object x= (V126),V137= (V97);
	while(V137!=Cnil)
	if(x==(V137->c.c_car)){
	goto T233;
	}else V137=V137->c.c_cdr;
	goto T192;}
	goto T233;
T233:;
	goto T230;
T230:;
	if(((V119))!=Cnil){
	goto T234;}
	if(((V97))==(Ct)){
	goto T227;}
	goto T234;
T234:;
	base[9]= (V117);
	base[10]= (V96);
	base[11]= (V125);
	vs_top=(vs_base=base+9)+3;
	(void) (*Lnk39)(Lclptr39);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T192;}
	goto T227;
T227:;
	{object V138;
	base[9]= (V125);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk40)(Lclptr40);
	vs_top=sup;
	V138= vs_base[0];
	if(((V138))==Cnil){
	goto T192;}
	vs_base=vs_top;
	{object _funobj = (V138);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[9]= vs_base[0];
	base[10]= V117;
	base[11]= V96;
	base[12]= V125;
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk38)(Lclptr38);
	vs_top=sup;}}
	goto T192;
T192:;
	V124= CMPcdr((V124));
	V125= CMPcar((V124));
	goto T187;}
	goto T183;
T183:;
	base[8]= (V96);
	vs_top=(vs_base=base+8)+1;
	return;}
	}
}
/*	local entry for function CHECK-INITARGS-1	*/

static object LI9(object V144,object V143,object V142,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V145;
	object V146;
	object V147;
	object V148;
	object V149;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V145= V144;
	V146= V143;
	V147= V142;
	narg = narg - 3;
	if (narg <= 0) goto T255;
	else {
	V148= first;}
	if (--narg <= 0) goto T256;
	else {
	V149= va_arg(ap,object);}
	--narg; goto T257;
	goto T255;
T255:;
	V148= Ct;
	goto T256;
T256:;
	V149= Ct;
	goto T257;
T257:;
	{object V150;
	object V151;
	base[0]= (V145);
	base[1]= (V147);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk41)();
	if(vs_base>=vs_top){vs_top=sup;goto T263;}
	V150= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T264;}
	V151= vs_base[0];
	vs_top=sup;
	goto T265;
	goto T263;
T263:;
	V150= Cnil;
	goto T264;
T264:;
	V151= Cnil;
	goto T265;
T265:;
	if(((V151))!=Cnil){
	goto T267;}
	if(((V148))==Cnil){
	goto T270;}
	{object V152 = (VFUN_NARGS=4,(*(LnkLI42))((V146),(V145),(V150),(V149)));
	VMR9(V152)}
	goto T270;
T270:;
	{object V153 = (VFUN_NARGS=4,(*(LnkLI43))((V146),(V145),(V150),(V149)));
	VMR9(V153)}
	goto T267;
T267:;
	{object V154 = Cnil;
	VMR9(V154)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for CHECK-INITARGS-VALUES	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V155;
	object V156;
	check_arg(2);
	V155=(base[0]);
	V156=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V157;
	register object V158;
	{object V159;
	object V160= (V156);
	if(V160==Cnil){
	V157= Cnil;
	goto T272;}
	base[2]=V159=MMcons(Cnil,Cnil);
	goto T273;
T273:;
	{register object V161;
	V161= (V160->c.c_car);
	if(!(type_of((V161))==t_cons)){
	goto T276;}
	base[4]= (*(LnkLI44))(CMPcar((V161)));
	base[5]= CMPcdr((V161));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk45)(Lclptr45);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lcopy_list();
	vs_top=sup;
	(V159->c.c_cdr)= vs_base[0];
	goto T274;
	goto T276;
T276:;
	(V159->c.c_cdr)= make_cons((V161),Cnil);}
	goto T274;
T274:;
	while(MMcdr(V159)!=Cnil)V159=MMcdr(V159);
	if((V160=MMcdr(V160))==Cnil){
	base[2]=base[2]->c.c_cdr;
	V157= base[2];
	goto T272;}
	goto T273;}
	goto T272;
T272:;
	{object V162;
	base[3]=VV[37]->s.s_gfdef;
	base[4]= (V155);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk32)(Lclptr32);
	vs_top=sup;
	V165= vs_base[0];
	{object V163;
	object V164= V165;
	if(V164==Cnil){
	V162= Cnil;
	goto T282;}
	base[2]=V163=MMcons(Cnil,Cnil);
	goto T283;
T283:;
	base[4]= (V164->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk37)(Lclptr37);
	vs_top=sup;
	(V163->c.c_car)= vs_base[0];
	if((V164=MMcdr(V164))==Cnil){
	V162= base[2];
	goto T282;}
	V163=MMcdr(V163)=MMcons(Cnil,Cnil);
	goto T283;}
	goto T282;
T282:;
	 vs_top=base+2;
	 while(V162!=Cnil)
	 {vs_push((V162)->c.c_car);V162=(V162)->c.c_cdr;}
	vs_base=base+2;}
	Lappend();
	vs_top=sup;
	V158= vs_base[0];
	{register object V166;
	register object V167;
	V166= (V157);
	V167= CMPcar((V166));
	goto T292;
T292:;
	if(!(((V166))==Cnil)){
	goto T293;}
	goto T288;
	goto T293;
T293:;
	{register object V168;
	register object V169;
	register object V170;
	register object V171;
	register object V172;
	register object V173;
	if(!(type_of((V167))==t_cons)){
	goto T301;}
	base[3]= (*(LnkLI46))((V167));
	goto T299;
	goto T301;
T301:;
	base[4]= (V167);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk47)(Lclptr47);
	vs_top=sup;
	base[3]= vs_base[0];
	goto T299;
T299:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk48)();
	if(vs_base>=vs_top){vs_top=sup;goto T304;}
	V168= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T305;}
	V169= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T306;}
	V170= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T307;}
	V171= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T308;}
	V172= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T309;}
	V173= vs_base[0];
	vs_top=sup;
	goto T310;
	goto T304;
T304:;
	V168= Cnil;
	goto T305;
T305:;
	V169= Cnil;
	goto T306;
T306:;
	V170= Cnil;
	goto T307;
T307:;
	V171= Cnil;
	goto T308;
T308:;
	V172= Cnil;
	goto T309;
T309:;
	V173= Cnil;
	goto T310;
T310:;
	if(((V172))==Cnil){
	goto T311;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T311;
T311:;
	V158= append((V173),(V158));}
	V166= CMPcdr((V166));
	V167= CMPcar((V166));
	goto T292;}
	goto T288;
T288:;
	base[2]= (V158);
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	local entry for function CHECK-INITARGS-2-PLIST	*/

static object LI11(object V176,object V175,object V174,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V177;
	register object V178;
	register object V179;
	register object V180;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V177= V176;
	V178= V175;
	V179= V174;
	narg = narg - 3;
	if (narg <= 0) goto T324;
	else {
	V180= first;}
	--narg; goto T325;
	goto T324;
T324:;
	V180= Ct;
	goto T325;
T325:;
	base[0]= (V177);
	base[1]= VV[18];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T327;}
	{register object V181;
	register object V182;
	register object V183;
	V181= (V177);
	V182= Cnil;
	V183= Cnil;
	goto T333;
T333:;
	if(((V181))!=Cnil){
	goto T335;}
	goto T327;
	goto T335;
T335:;
	{register object V184;
	V184= CMPcar((V181));
	V181= CMPcdr((V181));
	V182= (V184);}
	if(((V181))!=Cnil){
	goto T343;}
	base[0]= VV[17];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T343;
T343:;
	{register object V185;
	V185= CMPcar((V181));
	V181= CMPcdr((V181));
	V183= (V185);}
	{register object x= (V182),V186= (V179);
	while(V186!=Cnil)
	if(x==(V186->c.c_car)){
	goto T334;
	}else V186=V186->c.c_cdr;}
	if(((V180))==Cnil){
	goto T355;}
	base[0]= VV[19];
	base[1]= (V182);
	base[3]= (V178);
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
	{object V187 = Cnil;
	VMR11(V187)}
	goto T334;
T334:;
	goto T333;}
	goto T327;
T327:;
	{object V188 = Ct;
	VMR11(V188)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function CHECK-INITARGS-2-LIST	*/

static object LI12(object V191,object V190,object V189,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V192;
	register object V193;
	register object V194;
	register object V195;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V192= V191;
	V193= V190;
	V194= V189;
	narg = narg - 3;
	if (narg <= 0) goto T362;
	else {
	V195= first;}
	--narg; goto T363;
	goto T362;
T362:;
	V195= Ct;
	goto T363;
T363:;
	{register object x= VV[18],V196= (V192);
	while(V196!=Cnil)
	if(x==(V196->c.c_car)){
	goto T365;
	}else V196=V196->c.c_cdr;}
	{register object V197;
	register object V198;
	V197= (V192);
	V198= CMPcar((V197));
	goto T371;
T371:;
	if(!(((V197))==Cnil)){
	goto T372;}
	goto T365;
	goto T372;
T372:;
	{register object x= (V198),V199= (V194);
	while(V199!=Cnil)
	if(x==(V199->c.c_car)){
	goto T376;
	}else V199=V199->c.c_cdr;}
	if(((V195))==Cnil){
	goto T380;}
	base[1]= VV[20];
	base[2]= (V198);
	base[4]= (V193);
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
	{object V200 = Cnil;
	VMR12(V200)}
	goto T376;
T376:;
	V197= CMPcdr((V197));
	V198= CMPcar((V197));
	goto T371;}
	goto T365;
T365:;
	{object V201 = Ct;
	VMR12(V201)}
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

