
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
	base[4]=VV[24]->s.s_gfdef;
	base[5]= (VFUN_NARGS=1,(*(LnkLI25))((V3)));
	{object V7;
	V7= V4;
	 vs_top=base+6;
	 while(V7!=Cnil)
	 {vs_push((V7)->c.c_car);V7=(V7)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk24)(Lclptr24);
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
	(void) (*Lnk26)(Lclptr26);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T8;}
	base[0]= (V14);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk27)(Lclptr27);
	vs_top=sup;
	goto T8;
T8:;
	base[0]= (V14);
	base[1]= (V17);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk28)(Lclptr28);
	vs_top=sup;
	V17= vs_base[0];
	{object V18;
	object V19;
	V18= (VFUN_NARGS=2,(*(LnkLI0))((V14),(V17)));
	{object V20;
	V20= STREF(object,(V18),8);
	if(!(((V20))==(VV[1]))){
	goto T22;}
	(void)((*(LnkLI29))((V18),VV[2]));
	V19= STREF(object,(V18),8);
	goto T19;
	goto T22;
T22:;
	V19= (V20);}
	goto T19;
T19:;
	if(!(type_of((V19))==t_cons)){
	goto T17;}
	if(!((CMPcar((V19)))==(VV[3]))){
	goto T17;}
	base[2]= VV[4];
	base[3]= VV[5];
	base[4]= CMPcdr((V19));
	base[6]= (V14);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk30)(Lclptr30);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk31)();
	vs_top=sup;}
	goto T17;
T17:;
	{object V21;
	base[0]=VV[32]->s.s_gfdef;
	base[1]= (V14);
	{object V22;
	V22= (V17);
	 vs_top=base+2;
	 while(V22!=Cnil)
	 {vs_push((V22)->c.c_car);V22=(V22)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk32)(Lclptr32);
	vs_top=sup;
	V21= vs_base[0];
	base[0]=VV[33]->s.s_gfdef;
	base[1]= (V21);
	{object V23;
	V23= (V17);
	 vs_top=base+2;
	 while(V23!=Cnil)
	 {vs_push((V23)->c.c_car);V23=(V23)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk33)(Lclptr33);
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
	goto T45;}
	V33= (VFUN_NARGS=2,(*(LnkLI0))((V27),(V28)));
	(void)((*(LnkLI29))(/* INLINE-ARGS */V33,VV[6]));
	V34= (VFUN_NARGS=2,(*(LnkLI0))((V27),(V28)));
	V30= STREF(object,/* INLINE-ARGS */V34,28);
	goto T42;
	goto T45;
T45:;
	V30= (V31);}
	goto T42;
T42:;
	if(!(type_of((V30))==t_cons)){
	goto T49;}
	if(!((CMPcar((V30)))==(VV[7]))){
	goto T49;}
	base[4]= (*(LnkLI34))(CMPcadr((V30)),CMPcaddr((V30)),Cnil,(V28));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T49;
T49:;
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
	base[4]=VV[12]->s.s_gfdef;
	base[5]= (V37);
	base[6]= Ct;
	{object V41;
	V41= V38;
	 vs_top=base+7;
	 while(V41!=Cnil)
	 {vs_push((V41)->c.c_car);V41=(V41)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk12)(Lclptr12);
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
	V52= (*(LnkLI35))((V48));
	V53= (VFUN_NARGS=2,(*(LnkLI0))((V52),V49));
	{object V55;
	V55= STREF(object,(V53),12);
	if(!(((V55))==(VV[1]))){
	goto T68;}
	(void)((*(LnkLI29))((V53),VV[8]));
	V54= STREF(object,(V53),12);
	goto T65;
	goto T68;
T68:;
	V54= (V55);}
	goto T65;
T65:;
	if(!(type_of((V54))==t_cons)){
	goto T62;}
	if(!((CMPcar((V54)))==(VV[3]))){
	goto T62;}
	base[3]= VV[4];
	base[4]= VV[9];
	base[5]= CMPcdr((V54));
	base[7]= (V52);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk30)(Lclptr30);
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk31)();
	vs_top=sup;}
	goto T62;
T62:;
	base[0]=VV[12]->s.s_gfdef;
	base[1]= (V48);
	base[2]= Cnil;
	{object V56;
	V56= V49;
	 vs_top=base+3;
	 while(V56!=Cnil)
	 {vs_push((V56)->c.c_car);V56=(V56)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk12)(Lclptr12);
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
	base[5]= (*(LnkLI35))((V61));
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk36)(Lclptr36);
	vs_top=sup;
	V66= vs_base[0];
	base[6]=VV[37]->s.s_gfdef;
	base[7]= (*(LnkLI35))((V60));
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk36)(Lclptr36);
	vs_top=sup;
	V70= vs_base[0];
	{object V68;
	object V69= V70;
	if(V69==Cnil){
	V67= Cnil;
	goto T88;}
	base[5]=V68=MMcons(Cnil,Cnil);
	goto T89;
T89:;
	base[7]= (V69->c.c_car);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk37)(Lclptr37);
	vs_top=sup;
	(V68->c.c_car)= vs_base[0];
	if((V69=MMcdr(V69))==Cnil){
	V67= base[5];
	goto T88;}
	V68=MMcdr(V68)=MMcons(Cnil,Cnil);
	goto T89;}
	goto T88;
T88:;
	V65= Cnil;
	{register object V71;
	register object V72;
	V71= (V66);
	V72= CMPcar((V71));
	goto T98;
T98:;
	if(!(((V71))==Cnil)){
	goto T99;}
	goto T94;
	goto T99;
T99:;
	base[6]= (V72);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk37)(Lclptr37);
	vs_top=sup;
	V74= vs_base[0];
	{register object x= V74,V73= (V67);
	while(V73!=Cnil)
	if(x==(V73->c.c_car)){
	goto T103;
	}else V73=V73->c.c_cdr;}
	base[6]= (V72);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk38)(Lclptr38);
	vs_top=sup;
	V75= vs_base[0];
	if(!((V75)==(VV[10]))){
	goto T103;}
	{register object V76;
	base[7]= (V72);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk37)(Lclptr37);
	vs_top=sup;
	V76= vs_base[0];
	V65= make_cons((V76),(V65));}
	goto T103;
T103:;
	V71= CMPcdr((V71));
	V72= CMPcar((V71));
	goto T98;}
	goto T94;
T94:;
	V77= (*(LnkLI35))((V61));
	V78= listA(4,VV[11],(V60),(V61),V62);
	V79= list(2,/* INLINE-ARGS */V78,listA(4,VV[12],(V61),(V65),V62));
	(void)((VFUN_NARGS=3,(*(LnkLI39))(/* INLINE-ARGS */V77,V62,/* INLINE-ARGS */V79)));
	base[5]=VV[12]->s.s_gfdef;
	base[6]= (V61);
	base[7]= (V65);
	{object V80;
	V80= V62;
	 vs_top=base+8;
	 while(V80!=Cnil)
	 {vs_push((V80)->c.c_car);V80=(V80)->c.c_cdr;}
	vs_base=base+6;}
	(void) (*Lnk12)(Lclptr12);
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
	register object V84;
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
	V90= (*(LnkLI35))((V83));
	V91= listA(6,VV[13],(V83),(V84),(V85),(V86),(V89));
	V92= list(2,/* INLINE-ARGS */V91,listA(4,VV[12],(V83),(V84),(V89)));
	(void)((VFUN_NARGS=3,(*(LnkLI39))(/* INLINE-ARGS */V90,(V89),/* INLINE-ARGS */V92)));
	base[7]=VV[12]->s.s_gfdef;
	base[8]= (V83);
	base[9]= (V84);
	{object V93;
	V93= (V89);
	 vs_top=base+10;
	 while(V93!=Cnil)
	 {vs_push((V93)->c.c_car);V93=(V93)->c.c_cdr;}
	vs_base=base+8;}
	(void) (*Lnk12)(Lclptr12);
	return;}
	}
}
/*	local entry for function (FAST-METHOD SHARED-INITIALIZE (SLOT-OBJECT T))	*/

static object LI8(V99,V100,V101,V102,V103)

object V99;object V100;register object V101;register object V102;object V103;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	if(!(((V102))==(Ct))){
	goto T133;}
	{register object V106;
	object V107;
	register object V108;
	V106= V103;
	V107= Cnil;
	V108= Cnil;
	goto T138;
T138:;
	if(((V106))!=Cnil){
	goto T140;}
	goto T136;
	goto T140;
T140:;
	{object V109;
	V109= CMPcar((V106));
	V106= CMPcdr((V106));
	V107= (V109);}
	if(((V106))!=Cnil){
	goto T148;}
	base[0]= VV[4];
	base[1]= VV[14];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk31)();
	vs_top=sup;
	goto T148;
T148:;
	if(type_of((V107))==t_symbol){
	goto T153;}
	base[0]= VV[4];
	base[1]= VV[15];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk31)();
	vs_top=sup;
	goto T153;
T153:;
	{object V110;
	V110= CMPcar((V106));
	V106= CMPcdr((V106));
	V108= (V110);}
	goto T138;}
	goto T136;
T136:;
	{object V111;
	{object V112;
	V113= (*(LnkLI35))((V101));
	V114= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V113,V103));
	V112= STREF(object,/* INLINE-ARGS */V114,32);
	if(!(((V112))==(VV[1]))){
	goto T168;}
	V115= (*(LnkLI35))((V101));
	V116= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V115,V103));
	(void)((*(LnkLI29))(/* INLINE-ARGS */V116,VV[16]));
	V117= (*(LnkLI35))((V101));
	V118= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V117,V103));
	V111= STREF(object,/* INLINE-ARGS */V118,32);
	goto T165;
	goto T168;
T168:;
	V111= (V112);}
	goto T165;
T165:;
	if(!(type_of((V111))==t_cons)){
	goto T172;}
	if(!((CMPcar((V111)))==(VV[7]))){
	goto T172;}
	(void)((*(LnkLI34))(CMPcadr((V111)),CMPcaddr((V111)),(V101),V103));
	goto T164;
	goto T172;
T172:;
	(void)((
	(type_of((V111)) == t_sfun ?(*(((V111))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V111))==t_vfun) ?
	(*(((V111))->sfn.sfn_self)):
	(fcall.fun=((V111)),fcalln))((V101),V103)));}
	goto T164;
T164:;
	{object V119 = (V101);
	VMR8(V119)}
	goto T133;
T133:;
	if(!(((V102))==(Cnil))){
	goto T176;}
	{register object V120;
	object V121;
	register object V122;
	V120= V103;
	V121= Cnil;
	V122= Cnil;
	goto T181;
T181:;
	if(((V120))!=Cnil){
	goto T183;}
	goto T179;
	goto T183;
T183:;
	{object V123;
	V123= CMPcar((V120));
	V120= CMPcdr((V120));
	V121= (V123);}
	if(((V120))!=Cnil){
	goto T191;}
	base[0]= VV[4];
	base[1]= VV[14];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk31)();
	vs_top=sup;
	goto T191;
T191:;
	if(type_of((V121))==t_symbol){
	goto T196;}
	base[0]= VV[4];
	base[1]= VV[15];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk31)();
	vs_top=sup;
	goto T196;
T196:;
	{object V124;
	V124= CMPcar((V120));
	V120= CMPcdr((V120));
	V122= (V124);}
	goto T181;}
	goto T179;
T179:;
	{object V125;
	{object V126;
	V127= (*(LnkLI35))((V101));
	V128= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V127,V103));
	V126= STREF(object,/* INLINE-ARGS */V128,36);
	if(!(((V126))==(VV[1]))){
	goto T211;}
	V129= (*(LnkLI35))((V101));
	V130= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V129,V103));
	(void)((*(LnkLI29))(/* INLINE-ARGS */V130,VV[17]));
	V131= (*(LnkLI35))((V101));
	V132= (VFUN_NARGS=2,(*(LnkLI0))(/* INLINE-ARGS */V131,V103));
	V125= STREF(object,/* INLINE-ARGS */V132,36);
	goto T208;
	goto T211;
T211:;
	V125= (V126);}
	goto T208;
T208:;
	if(!(type_of((V125))==t_cons)){
	goto T215;}
	if(!((CMPcar((V125)))==(VV[7]))){
	goto T215;}
	(void)((*(LnkLI34))(CMPcadr((V125)),CMPcaddr((V125)),(V101),V103));
	goto T207;
	goto T215;
T215:;
	(void)((
	(type_of((V125)) == t_sfun ?(*(((V125))->sfn.sfn_self)):
	(fcall.argd=2,type_of((V125))==t_vfun) ?
	(*(((V125))->sfn.sfn_self)):
	(fcall.fun=((V125)),fcalln))((V101),V103)));}
	goto T207;
T207:;
	{object V133 = (V101);
	VMR8(V133)}
	goto T176;
T176:;
	{object V134;
	object V135;
	object V136;
	V134= (*(LnkLI35))((V101));
	base[3]= (V134);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk36)(Lclptr36);
	vs_top=sup;
	V135= vs_base[0];{object V137;
	if(type_of(V101)==t_structure){
	goto T225;}
	V137= Cnil;
	goto T224;
	goto T225;
T225:;
	V137= (((V101)->str.str_def)==(VV[20])?Ct:Cnil);
	goto T224;
T224:;
	if(V137==Cnil)goto T223;
	V136= V137;
	goto T222;
	goto T223;
T223:;}{object V139;
	V139= (VV[19]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V101);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk40)();
	vs_top=sup;
	V140= vs_base[0];
	V136= ((V139)==(CMPcar(V140))?Ct:Cnil);}
	goto T222;
T222:;
	{object V141;
	register object V142;
	V141= (V135);
	V142= CMPcar((V141));
	goto T234;
T234:;
	if(!(((V141))==Cnil)){
	goto T235;}
	goto T230;
	goto T235;
T235:;
	{object V143;
	object V144;
	base[4]= (V142);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk37)(Lclptr37);
	vs_top=sup;
	V143= vs_base[0];
	base[4]= (V142);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk41)(Lclptr41);
	vs_top=sup;
	V144= vs_base[0];
	{register object V145;
	object V146;
	object V147;
	V145= V103;
	V146= Cnil;
	V147= Cnil;
	goto T247;
T247:;
	if(((V145))!=Cnil){
	goto T249;}
	goto T245;
	goto T249;
T249:;
	{object V148;
	V148= CMPcar((V145));
	V145= CMPcdr((V145));
	V146= (V148);}
	if(((V145))!=Cnil){
	goto T257;}
	base[4]= VV[4];
	base[5]= VV[14];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk31)();
	vs_top=sup;
	goto T257;
T257:;
	if(type_of((V146))==t_symbol){
	goto T262;}
	base[4]= VV[4];
	base[5]= VV[15];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk31)();
	vs_top=sup;
	goto T262;
T262:;
	{object V149;
	V149= CMPcar((V145));
	V145= CMPcdr((V145));
	V147= (V149);}
	{register object x= (V146),V150= (V144);
	while(V150!=Cnil)
	if(x==(V150->c.c_car)){
	goto T273;
	}else V150=V150->c.c_cdr;
	goto T248;}
	goto T273;
T273:;
	V155= ({object _tmp=get(VV[42],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[42])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[42])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V156 = V155,
	(type_of(V156) == t_sfun ?(*((V156)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V156)==t_vfun) ?
	(*((V156)->sfn.sfn_self)):
	(fcall.fun=(V156),fcalln))(V147,V134,V101,V142)));
	goto T239;
	goto T248;
T248:;
	goto T247;}
	goto T245;
T245:;
	if(((V102))==Cnil){
	goto T239;}
	if(((V102))==(Ct)){
	goto T280;}
	{register object x= (V143),V157= (V102);
	while(V157!=Cnil)
	if(x==(V157->c.c_car)){
	goto T283;
	}else V157=V157->c.c_cdr;
	goto T239;}
	goto T283;
T283:;
	goto T280;
T280:;
	if(((V136))!=Cnil){
	goto T284;}
	if(((V102))==(Ct)){
	goto T277;}
	goto T284;
T284:;
	base[4]= (V134);
	base[5]= (V101);
	base[6]= (V142);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk43)(Lclptr43);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T239;}
	goto T277;
T277:;
	{object V158;
	base[4]= (V142);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk44)(Lclptr44);
	vs_top=sup;
	V158= vs_base[0];
	if(((V158))==Cnil){
	goto T239;}
	{object V162;
	V162= (
	(type_of((V158)) == t_sfun ?(*(((V158))->sfn.sfn_self)):
	(fcall.argd=0,type_of((V158))==t_vfun) ?
	(*(((V158))->sfn.sfn_self)):
	(fcall.fun=((V158)),fcalln))());
	V163= ({object _tmp=get(VV[42],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[42])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[42])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V164 = V163,
	(type_of(V164) == t_sfun ?(*((V164)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V164)==t_vfun) ?
	(*((V164)->sfn.sfn_self)):
	(fcall.fun=(V164),fcalln))((V162),V134,V101,V142)));}}}
	goto T239;
T239:;
	V141= CMPcdr((V141));
	V142= CMPcar((V141));
	goto T234;}
	goto T230;
T230:;
	{object V165 = (V101);
	VMR8(V165)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CHECK-INITARGS-1	*/

static object LI9(object V168,object V167,object V166,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V169;
	object V170;
	object V171;
	object V172;
	object V173;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V169= V168;
	V170= V167;
	V171= V166;
	narg = narg - 3;
	if (narg <= 0) goto T303;
	else {
	V172= first;}
	if (--narg <= 0) goto T304;
	else {
	V173= va_arg(ap,object);}
	--narg; goto T305;
	goto T303;
T303:;
	V172= Ct;
	goto T304;
T304:;
	V173= Ct;
	goto T305;
T305:;
	{object V174;
	object V175;
	base[0]= (V169);
	base[1]= (V171);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk45)();
	if(vs_base>=vs_top){vs_top=sup;goto T311;}
	V174= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T312;}
	V175= vs_base[0];
	vs_top=sup;
	goto T313;
	goto T311;
T311:;
	V174= Cnil;
	goto T312;
T312:;
	V175= Cnil;
	goto T313;
T313:;
	if(((V175))!=Cnil){
	goto T315;}
	if(((V172))==Cnil){
	goto T318;}
	{object V176 = (VFUN_NARGS=4,(*(LnkLI46))((V170),(V169),(V174),(V173)));
	VMR9(V176)}
	goto T318;
T318:;
	{object V177 = (VFUN_NARGS=4,(*(LnkLI47))((V170),(V169),(V174),(V173)));
	VMR9(V177)}
	goto T315;
T315:;
	{object V178 = Cnil;
	VMR9(V178)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for CHECK-INITARGS-VALUES	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V179;
	object V180;
	check_arg(2);
	V179=(base[0]);
	V180=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V181;
	register object V182;
	{object V183;
	object V184= (V180);
	if(V184==Cnil){
	V181= Cnil;
	goto T320;}
	base[2]=V183=MMcons(Cnil,Cnil);
	goto T321;
T321:;
	{register object V185;
	V185= (V184->c.c_car);
	if(!(type_of((V185))==t_cons)){
	goto T324;}
	base[4]= (*(LnkLI48))(CMPcar((V185)));
	base[5]= CMPcdr((V185));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk49)(Lclptr49);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lcopy_list();
	vs_top=sup;
	(V183->c.c_cdr)= vs_base[0];
	goto T322;
	goto T324;
T324:;
	(V183->c.c_cdr)= make_cons((V185),Cnil);}
	goto T322;
T322:;
	while(MMcdr(V183)!=Cnil)V183=MMcdr(V183);
	if((V184=MMcdr(V184))==Cnil){
	base[2]=base[2]->c.c_cdr;
	V181= base[2];
	goto T320;}
	goto T321;}
	goto T320;
T320:;
	{object V186;
	base[3]=VV[41]->s.s_gfdef;
	base[4]= (V179);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk36)(Lclptr36);
	vs_top=sup;
	V189= vs_base[0];
	{object V187;
	object V188= V189;
	if(V188==Cnil){
	V186= Cnil;
	goto T330;}
	base[2]=V187=MMcons(Cnil,Cnil);
	goto T331;
T331:;
	base[4]= (V188->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk41)(Lclptr41);
	vs_top=sup;
	(V187->c.c_car)= vs_base[0];
	if((V188=MMcdr(V188))==Cnil){
	V186= base[2];
	goto T330;}
	V187=MMcdr(V187)=MMcons(Cnil,Cnil);
	goto T331;}
	goto T330;
T330:;
	 vs_top=base+2;
	 while(V186!=Cnil)
	 {vs_push((V186)->c.c_car);V186=(V186)->c.c_cdr;}
	vs_base=base+2;}
	Lappend();
	vs_top=sup;
	V182= vs_base[0];
	{register object V190;
	register object V191;
	V190= (V181);
	V191= CMPcar((V190));
	goto T340;
T340:;
	if(!(((V190))==Cnil)){
	goto T341;}
	goto T336;
	goto T341;
T341:;
	{register object V192;
	register object V193;
	register object V194;
	register object V195;
	register object V196;
	register object V197;
	if(!(type_of((V191))==t_cons)){
	goto T349;}
	base[3]= (*(LnkLI50))((V191));
	goto T347;
	goto T349;
T349:;
	base[4]= (V191);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk51)(Lclptr51);
	vs_top=sup;
	base[3]= vs_base[0];
	goto T347;
T347:;
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk52)();
	if(vs_base>=vs_top){vs_top=sup;goto T352;}
	V192= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T353;}
	V193= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T354;}
	V194= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T355;}
	V195= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T356;}
	V196= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T357;}
	V197= vs_base[0];
	vs_top=sup;
	goto T358;
	goto T352;
T352:;
	V192= Cnil;
	goto T353;
T353:;
	V193= Cnil;
	goto T354;
T354:;
	V194= Cnil;
	goto T355;
T355:;
	V195= Cnil;
	goto T356;
T356:;
	V196= Cnil;
	goto T357;
T357:;
	V197= Cnil;
	goto T358;
T358:;
	if(((V196))==Cnil){
	goto T359;}
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	return;
	goto T359;
T359:;
	V182= append((V197),(V182));}
	V190= CMPcdr((V190));
	V191= CMPcar((V190));
	goto T340;}
	goto T336;
T336:;
	base[2]= (V182);
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	local entry for function CHECK-INITARGS-2-PLIST	*/

static object LI11(object V200,object V199,object V198,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
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
	if (narg <= 0) goto T372;
	else {
	V204= first;}
	--narg; goto T373;
	goto T372;
T372:;
	V204= Ct;
	goto T373;
T373:;
	base[0]= (V201);
	base[1]= VV[21];
	vs_top=(vs_base=base+0)+2;
	Lgetf();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T375;}
	{register object V205;
	register object V206;
	register object V207;
	V205= (V201);
	V206= Cnil;
	V207= Cnil;
	goto T381;
T381:;
	if(((V205))!=Cnil){
	goto T383;}
	goto T375;
	goto T383;
T383:;
	{register object V208;
	V208= CMPcar((V205));
	V205= CMPcdr((V205));
	V206= (V208);}
	if(((V205))!=Cnil){
	goto T391;}
	base[0]= VV[4];
	base[1]= VV[14];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk31)();
	vs_top=sup;
	goto T391;
T391:;
	if(type_of((V206))==t_symbol){
	goto T396;}
	base[0]= VV[4];
	base[1]= VV[15];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk31)();
	vs_top=sup;
	goto T396;
T396:;
	{register object V209;
	V209= CMPcar((V205));
	V205= CMPcdr((V205));
	V207= (V209);}
	{register object x= (V206),V210= (V203);
	while(V210!=Cnil)
	if(x==(V210->c.c_car)){
	goto T382;
	}else V210=V210->c.c_cdr;}
	if(((V204))==Cnil){
	goto T409;}
	base[0]= VV[4];
	base[1]= VV[22];
	base[2]= (V206);
	base[4]= (V202);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk30)(Lclptr30);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk31)();
	vs_top=sup;
	goto T382;
	goto T409;
T409:;
	{object V211 = Cnil;
	VMR11(V211)}
	goto T382;
T382:;
	goto T381;}
	goto T375;
T375:;
	{object V212 = Ct;
	VMR11(V212)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function CHECK-INITARGS-2-LIST	*/

static object LI12(object V215,object V214,object V213,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V216;
	register object V217;
	register object V218;
	register object V219;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V216= V215;
	V217= V214;
	V218= V213;
	narg = narg - 3;
	if (narg <= 0) goto T417;
	else {
	V219= first;}
	--narg; goto T418;
	goto T417;
T417:;
	V219= Ct;
	goto T418;
T418:;
	{register object x= VV[21],V220= (V216);
	while(V220!=Cnil)
	if(x==(V220->c.c_car)){
	goto T420;
	}else V220=V220->c.c_cdr;}
	{register object V221;
	register object V222;
	V221= (V216);
	V222= CMPcar((V221));
	goto T426;
T426:;
	if(!(((V221))==Cnil)){
	goto T427;}
	goto T420;
	goto T427;
T427:;
	{register object x= (V222),V223= (V218);
	while(V223!=Cnil)
	if(x==(V223->c.c_car)){
	goto T431;
	}else V223=V223->c.c_cdr;}
	if(((V219))==Cnil){
	goto T435;}
	base[1]= VV[4];
	base[2]= VV[23];
	base[3]= (V222);
	base[5]= (V217);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk30)(Lclptr30);
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk31)();
	vs_top=sup;
	goto T431;
	goto T435;
T435:;
	{object V224 = Cnil;
	VMR12(V224)}
	goto T431;
T431:;
	V221= CMPcdr((V221));
	V222= CMPcar((V221));
	goto T426;}
	goto T420;
T420:;
	{object V225 = Ct;
	VMR12(V225)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
static void LnkT52(){ call_or_link(VV[52],(void **)(void *)&Lnk52);} /* ANALYZE-LAMBDA-LIST */
static void LnkT51(ptr) object *ptr;{ call_or_link_closure(VV[51],(void **)(void *)&Lnk51,(void **)(void *)&Lclptr51);} /* METHOD-LAMBDA-LIST */
static object  LnkTLI50(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[50],(void **)(void *)&LnkLI50,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-LAMBDA-LIST */
static void LnkT49(ptr) object *ptr;{ call_or_link_closure(VV[49],(void **)(void *)&Lnk49,(void **)(void *)&Lclptr49);} /* COMPUTE-APPLICABLE-METHODS */
static object  LnkTLI48(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[48],(void **)(void *)&LnkLI48,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static object  LnkTLI47(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[47],(void **)(void *)&LnkLI47,first,ap);va_end(ap);return V1;} /* CHECK-INITARGS-2-LIST */
static object  LnkTLI46(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[46],(void **)(void *)&LnkLI46,first,ap);va_end(ap);return V1;} /* CHECK-INITARGS-2-PLIST */
static void LnkT45(){ call_or_link(VV[45],(void **)(void *)&Lnk45);} /* CHECK-INITARGS-VALUES */
static void LnkT44(ptr) object *ptr;{ call_or_link_closure(VV[44],(void **)(void *)&Lnk44,(void **)(void *)&Lclptr44);} /* SLOT-DEFINITION-INITFUNCTION */
static void LnkT43(ptr) object *ptr;{ call_or_link_closure(VV[43],(void **)(void *)&Lnk43,(void **)(void *)&Lclptr43);} /* SLOT-BOUNDP-USING-CLASS */
static void LnkT41(ptr) object *ptr;{ call_or_link_closure(VV[41],(void **)(void *)&Lnk41,(void **)(void *)&Lclptr41);} /* SLOT-DEFINITION-INITARGS */
static void LnkT40(){ call_or_link(VV[40],(void **)(void *)&Lnk40);} /* CCLOSURE-ENV-NTHCDR */
static object  LnkTLI39(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[39],(void **)(void *)&LnkLI39,first,ap);va_end(ap);return V1;} /* CHECK-INITARGS-1 */
static void LnkT38(ptr) object *ptr;{ call_or_link_closure(VV[38],(void **)(void *)&Lnk38,(void **)(void *)&Lclptr38);} /* SLOT-DEFINITION-ALLOCATION */
static void LnkT37(ptr) object *ptr;{ call_or_link_closure(VV[37],(void **)(void *)&Lnk37,(void **)(void *)&Lclptr37);} /* SLOT-DEFINITION-NAME */
static void LnkT36(ptr) object *ptr;{ call_or_link_closure(VV[36],(void **)(void *)&Lnk36,(void **)(void *)&Lclptr36);} /* CLASS-SLOTS */
static object  LnkTLI35(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[35],(void **)(void *)&LnkLI35,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static void LnkT12(ptr) object *ptr;{ call_or_link_closure(VV[12],(void **)(void *)&Lnk12,(void **)(void *)&Lclptr12);} /* SHARED-INITIALIZE */
static object  LnkTLI34(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[34],(void **)(void *)&LnkLI34,4,first,ap);va_end(ap);return V1;} /* INITIALIZE-INSTANCE-SIMPLE */
static void LnkT33(ptr) object *ptr;{ call_or_link_closure(VV[33],(void **)(void *)&Lnk33,(void **)(void *)&Lclptr33);} /* INITIALIZE-INSTANCE */
static void LnkT32(ptr) object *ptr;{ call_or_link_closure(VV[32],(void **)(void *)&Lnk32,(void **)(void *)&Lclptr32);} /* ALLOCATE-INSTANCE */
static void LnkT31(){ call_or_link(VV[31],(void **)(void *)&Lnk31);} /* SPECIFIC-ERROR */
static void LnkT30(ptr) object *ptr;{ call_or_link_closure(VV[30],(void **)(void *)&Lnk30,(void **)(void *)&Lclptr30);} /* CLASS-NAME */
static object  LnkTLI29(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[29],(void **)(void *)&LnkLI29,2,first,ap);va_end(ap);return V1;} /* UPDATE-INITIALIZE-INFO-INTERNAL */
static object  LnkTLI0(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[0],(void **)(void *)&LnkLI0,first,ap);va_end(ap);return V1;} /* INITIALIZE-INFO */
static void LnkT28(ptr) object *ptr;{ call_or_link_closure(VV[28],(void **)(void *)&Lnk28,(void **)(void *)&Lclptr28);} /* DEFAULT-INITARGS */
static void LnkT27(ptr) object *ptr;{ call_or_link_closure(VV[27],(void **)(void *)&Lnk27,(void **)(void *)&Lclptr27);} /* FINALIZE-INHERITANCE */
static void LnkT26(ptr) object *ptr;{ call_or_link_closure(VV[26],(void **)(void *)&Lnk26,(void **)(void *)&Lclptr26);} /* CLASS-FINALIZED-P */
static void LnkT24(ptr) object *ptr;{ call_or_link_closure(VV[24],(void **)(void *)&Lnk24,(void **)(void *)&Lclptr24);} /* MAKE-INSTANCE */
static object  LnkTLI25(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[25],(void **)(void *)&LnkLI25,first,ap);va_end(ap);return V1;} /* FIND-CLASS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

