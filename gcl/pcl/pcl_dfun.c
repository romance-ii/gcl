
#include "cmpinclude.h"
#include "pcl_dfun.h"
void init_pcl_dfun(){do_init(VV);}
/*	local entry for function SHOW-DFUN-CONSTRUCTORS	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= Ct;
	base[1]= VV[0];
	if(((VV[1]->s.s_dbind))==Cnil){
	goto T6;}
	base[2]= VV[2];
	goto T4;
	goto T6;
T6:;
	base[2]= VV[3];
	goto T4;
T4:;
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{register object V1;
	register object V2;
	V1= (VV[4]->s.s_dbind);
	V2= CMPcar((V1));
	goto T11;
T11:;
	if(!(((V1))==Cnil)){
	goto T12;}
	{object V3 = Cnil;
	VMR1(V3)}
	goto T12;
T12:;
	{register object V4;
	register object V5;
	V4= CMPcdr((V2));
	V5= CMPcar((V4));
	goto T20;
T20:;
	if(!(((V4))==Cnil)){
	goto T21;}
	goto T16;
	goto T21;
T21:;
	base[3]= Ct;
	base[4]= VV[5];
	base[5]= make_cons(CMPcar((V2)),CMPcar((V5)));
	base[6]= CMPcaddr((V5));
	if((CMPcadddr((V5)))==Cnil){
	goto T32;}
	base[7]= VV[6];
	goto T30;
	goto T32;
T32:;
	base[7]= VV[7];
	goto T30;
T30:;
	vs_top=(vs_base=base+3)+5;
	Lformat();
	vs_top=sup;
	V4= CMPcdr((V4));
	V5= CMPcar((V4));
	goto T20;}
	goto T16;
T16:;
	V1= CMPcdr((V1));
	V2= CMPcar((V1));
	goto T11;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-DFUN-CONSTRUCTOR	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{register object V6;
	register object V7;
	if(vs_top-vs_base<1) too_few_arguments();
	V6=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V7=(base[1]);
	vs_top=sup;
	if(((VV[8]->s.s_dbind))==Cnil){
	goto T44;}
	{register object x= (V6),V8= VV[9];
	while(V8!=Cnil)
	if(eql(x,V8->c.c_car)){
	goto T48;
	}else V8=V8->c.c_cdr;
	goto T44;}
	goto T48;
T48:;
	{object V10;
	object V11= CMPcar((V7));
	if(V11==Cnil){
	V9= Cnil;
	goto T50;}
	base[2]=V10=MMcons(Cnil,Cnil);
	goto T51;
T51:;
	if(!(((V11->c.c_car))==(Ct))){
	goto T54;}
	(V10->c.c_car)= (V11->c.c_car);
	goto T52;
	goto T54;
T54:;
	(V10->c.c_car)= VV[10];
	goto T52;
T52:;
	if((V11=MMcdr(V11))==Cnil){
	V9= base[2];
	goto T50;}
	V10=MMcdr(V10)=MMcons(Cnil,Cnil);
	goto T51;}
	goto T50;
T50:;
	V7= make_cons(V9,CMPcdr((V7)));
	goto T44;
T44:;
	{object V13;
	object V14;
	{register object x= (V6),V15= (VV[4]->s.s_dbind);
	while(V15!=Cnil)
	if(EQ(x,V15->c.c_car->c.c_car) &&V15->c.c_car != Cnil){
	V13= (V15->c.c_car);
	goto T56;
	}else V15=V15->c.c_cdr;
	V13= Cnil;}
	goto T56;
T56:;
	{register object x= (V7),V16= CMPcdr((V13));
	while(V16!=Cnil)
	if(equal(x,V16->c.c_car->c.c_car) &&V16->c.c_car != Cnil){
	V14= (V16->c.c_car);
	goto T57;
	}else V16=V16->c.c_cdr;
	V14= Cnil;}
	goto T57;
T57:;
	if(((VV[1]->s.s_dbind))!=Cnil){
	goto T59;}
	base[5]= (V6);
	vs_top=(vs_base=base+5)+1;
	Lsymbol_function();
	vs_top=sup;
	base[4]= vs_base[0];
	{object V17;
	V17= (V7);
	 vs_top=base+5;
	 while(V17!=Cnil)
	 {vs_push((V17)->c.c_car);V17=(V17)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T59;
T59:;{object V18;
	V18= CMPcadr((V14));
	if(V18==Cnil)goto T64;
	base[4]= V18;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T64;
T64:;}
	{object V19;
	object V20;
	base[5]= (V6);
	vs_top=(vs_base=base+5)+1;
	Lsymbol_function();
	vs_top=sup;
	base[4]= vs_base[0];
	{object V21;
	V21= (V7);
	 vs_top=base+5;
	 while(V21!=Cnil)
	 {vs_push((V21)->c.c_car);V21=(V21)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	if(vs_base>=vs_top){vs_top=sup;goto T70;}
	V19= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T71;}
	V20= vs_base[0];
	vs_top=sup;
	goto T72;
	goto T70;
T70:;
	V19= Cnil;
	goto T71;
T71:;
	V20= Cnil;
	goto T72;
T72:;
	{object V22;
	base[4]= (V7);
	vs_top=(vs_base=base+4)+1;
	Lcopy_list();
	vs_top=sup;
	V23= vs_base[0];
	if(((V20))!=Cnil){
	goto T79;}
	V24= VV[11];
	goto T77;
	goto T79;
T79:;
	V24= Cnil;
	goto T77;
T77:;
	V22= list(4,V23,(V19),V24,(V20));
	if(((V13))==Cnil){
	goto T82;}
	{object V27;
	V27= make_cons(V22,CMPcdr(V13));
	(V13)->c.c_cdr = (V27);
	goto T73;}
	goto T82;
T82:;
	{object V28;
	V28= list(2,(V6),(V22));
	(VV[4]->s.s_dbind)= make_cons((V28),(VV[4]->s.s_dbind));}}
	goto T73;
T73:;
	base[4]= (V19);
	base[5]= (V20);
	vs_top=(vs_base=base+4)+2;
	return;}}
	}
}
/*	local entry for function LOAD-PRECOMPILED-DFUN-CONSTRUCTOR	*/

static object LI3(V33,V34,V35,V36)

object V33;object V34;object V35;object V36;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V37;
	register object V38;
	{register object x= (V33),V39= (VV[4]->s.s_dbind);
	while(V39!=Cnil)
	if(EQ(x,V39->c.c_car->c.c_car) &&V39->c.c_car != Cnil){
	V37= (V39->c.c_car);
	goto T90;
	}else V39=V39->c.c_cdr;
	V37= Cnil;}
	goto T90;
T90:;
	{register object x= (V34),V40= CMPcdr((V37));
	while(V40!=Cnil)
	if(equal(x,V40->c.c_car->c.c_car) &&V40->c.c_car != Cnil){
	V38= (V40->c.c_car);
	goto T91;
	}else V40=V40->c.c_cdr;
	V38= Cnil;}
	goto T91;
T91:;
	if(((V38))==Cnil){
	goto T93;}
	if((CMPcadddr((V38)))==Cnil){
	goto T96;}
	{object V41;
	register object V42;
	object V43;
	{object V44= (V33);
	if((V44!= VV[61]))goto T99;
	V41= VV[12];
	goto T98;
	goto T99;
T99:;
	if((V44!= VV[68]))goto T100;
	V41= VV[13];
	goto T98;
	goto T100;
T100:;
	if((V44!= VV[69]))goto T101;
	V41= VV[14];
	goto T98;
	goto T101;
T101:;
	if((V44!= VV[60]))goto T102;
	V41= VV[15];
	goto T98;
	goto T102;
T102:;
	V41= Cnil;}
	goto T98;
T98:;
	V42= CMPcar((V34));
	if(((V41))==Cnil){
	goto T106;}
	V43= (*(LnkLI160))((V41));
	goto T104;
	goto T106;
T106:;
	V43= Cnil;
	goto T104;
T104:;
	{register object V45;
	register object V46;
	V45= (V43);
	V46= CMPcar((V45));
	goto T112;
T112:;
	if(!(((V45))==Cnil)){
	goto T113;}
	goto T108;
	goto T113;
T113:;
	base[6]= (V46);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk161)(Lclptr161);
	vs_top=sup;
	V47= vs_base[0];
	if(!(equal((V42),STREF(object,V47,8)))){
	goto T117;}
	{register object V48;
	base[6]= (V46);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk162)(Lclptr162);
	vs_top=sup;
	V48= vs_base[0];
	if(((((V48))==(VV[17])?Ct:Cnil))==Cnil){
	goto T126;}
	goto T117;
	goto T126;
T126:;
	if(((equal((V48),VV[18])?Ct:Cnil))==Cnil){
	goto T128;}
	goto T117;
	goto T128;
T128:;
	if(!(((((V48))==(VV[19])?Ct:Cnil))==Cnil)){
	goto T117;}}
	(void)((VFUN_NARGS=1,(*(LnkLI49))((V46))));
	goto T117;
T117:;
	V45= CMPcdr((V45));
	V46= CMPcar((V45));
	goto T112;}
	goto T108;
T108:;
	(CMPcdr(V38))->c.c_car = V36;
	(void)(CMPcdr(V38));
	(CMPcddr(V38))->c.c_car = V35;
	(void)(CMPcddr(V38));
	(CMPcdddr(V38))->c.c_car = Cnil;
	(void)(CMPcdddr(V38));
	{object V55 = Cnil;
	VMR3(V55)}}
	goto T96;
T96:;
	{object V56 = Cnil;
	VMR3(V56)}
	goto T93;
T93:;
	{object V57;
	V57= list(4,(V34),(V36),(V35),Cnil);
	if(((V37))==Cnil){
	goto T142;}
	{object V60;
	V60= make_cons(V57,CMPcdr(V37));
	(V37)->c.c_cdr = (V60);
	{object V61 = (V60);
	VMR3(V61)}}
	goto T142;
T142:;
	{object V62;
	V62= list(2,(V33),(V57));
	(VV[4]->s.s_dbind)= make_cons((V62),(VV[4]->s.s_dbind));
	{object V63 = (VV[4]->s.s_dbind);
	VMR3(V63)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for PRECOMPILE-DFUN-CONSTRUCTORS	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	bds_check;
	check_arg(2);
	vs_top=sup;
	{object V64=base[0]->c.c_cdr;
	if(endp(V64)){
	base[2]= Cnil;
	} else {
	base[2]= (V64->c.c_car);
	V64=V64->c.c_cdr;}
	if(!endp(V64))invalid_macro_call();}
	bds_bind(VV[20],Ct);
	{register object V66;
	register object V67;
	V66= Cnil;
	V67= Cnil;
	{register object V68;
	register object V69;
	V68= (VV[4]->s.s_dbind);
	V69= CMPcar((V68));
	goto T156;
T156:;
	if(!(((V68))==Cnil)){
	goto T157;}
	goto T152;
	goto T157;
T157:;
	{register object V70;
	register object V71;
	V70= CMPcdr((V69));
	V71= CMPcar((V70));
	goto T165;
T165:;
	if(!(((V70))==Cnil)){
	goto T166;}
	goto T161;
	goto T166;
T166:;
	if((CMPcaddr((V71)))==Cnil){
	goto T171;}
	if(!((CMPcaddr((V71)))==(base[2]))){
	goto T170;}
	goto T171;
T171:;
	if((base[2])==Cnil){
	goto T175;}
	{register object V72;
	register object V73;
	V72= (V71);
	V73= base[2];
	(CMPcddr((V72)))->c.c_car = (V73);
	(void)(CMPcddr((V72)));}
	goto T175;
T175:;
	{register object V74;
	V75= list(2,VV[22],CMPcar((V69)));
	V76= list(2,VV[25],CMPcar((V69)));
	V77= list(2,VV[25],CMPcar((V71)));
	V78= list(2,VV[25],base[2]);
	base[8]= CMPcar((V69));
	vs_top=(vs_base=base+8)+1;
	Lsymbol_function();
	vs_top=sup;
	base[7]= vs_base[0];
	{object V80;
	V80= CMPcar((V71));
	 vs_top=base+8;
	 while(V80!=Cnil)
	 {vs_push((V80)->c.c_car);V80=(V80)->c.c_cdr;}
	vs_base=base+8;}
	{object _funobj = base[7];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V79= vs_base[0];
	V81= list(5,VV[24],/* INLINE-ARGS */V76,/* INLINE-ARGS */V77,/* INLINE-ARGS */V78,V79);
	V74= (*(LnkLI163))(/* INLINE-ARGS */V75,VV[23],/* INLINE-ARGS */V81);
	if(((V66))!=Cnil){
	goto T187;}
	V67= make_cons((V74),Cnil);
	V66= (V67);
	goto T170;
	goto T187;
T187:;
	V83= make_cons((V74),Cnil);
	((V67))->c.c_cdr = /* INLINE-ARGS */V83;
	V82= (V67);
	V67= CMPcdr(V82);}
	goto T170;
T170:;
	V70= CMPcdr((V70));
	V71= CMPcar((V70));
	goto T165;}
	goto T161;
T161:;
	V68= CMPcdr((V68));
	V69= CMPcar((V68));
	goto T156;}
	goto T152;
T152:;
	V65= (V66);}
	base[4]= make_cons(VV[21],V65);
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	return;
}
/*	local entry for function __si::MAKE-DFUN-INFO	*/

static object LI5(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	{object V84;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI5key,first,ap);
	V84=(Vcs[0]);
	base[0]= VV[26];
	base[1]= (V84);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V85 = vs_base[0];
	VMR5(V85)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function PRINT-DFUN-INFO	*/

static object LI6(V89,V90,V91)

object V89;register object V90;object V91;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	base[0]= (V90);
	base[1]= VV[27];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	base[0]= (V90);
	base[1]= VV[28];
	base[3]= (V89);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	base[0]= (V90);
	base[1]= VV[29];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI165))((V89),(V90)));
	base[0]= (V90);
	base[1]= VV[30];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{object V92 = vs_base[0];
	VMR6(V92)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-NO-METHODS	*/

static object LI7(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{object V93;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI7key,first,ap);
	V93=(Vcs[0]);
	base[0]= VV[31];
	base[1]= (V93);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V94 = vs_base[0];
	VMR7(V94)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function NO-METHODS-DFUN-INFO	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	base[0]= VV[31];
	base[1]= Cnil;
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V96 = vs_base[0];
	VMR8(V96)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-INITIAL	*/

static object LI9(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V97;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI9key,first,ap);
	V97=(Vcs[0]);
	base[0]= VV[32];
	base[1]= (V97);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V98 = vs_base[0];
	VMR9(V98)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function INITIAL-DFUN-INFO	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= Cnil;
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V100 = vs_base[0];
	VMR10(V100)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-INITIAL-DISPATCH	*/

static object LI11(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V101;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI11key,first,ap);
	V101=(Vcs[0]);
	base[0]= VV[33];
	base[1]= (V101);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V102 = vs_base[0];
	VMR11(V102)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function INITIAL-DISPATCH-DFUN-INFO	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	base[0]= VV[33];
	base[1]= Cnil;
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V104 = vs_base[0];
	VMR12(V104)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-DISPATCH	*/

static object LI13(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB13 VMS13 VMV13
	{object V105;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI13key,first,ap);
	V105=(Vcs[0]);
	base[0]= VV[34];
	base[1]= (V105);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V106 = vs_base[0];
	VMR13(V106)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function DISPATCH-DFUN-INFO	*/

static object LI14()

{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	base[0]= VV[34];
	base[1]= Cnil;
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V108 = vs_base[0];
	VMR14(V108)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-DEFAULT-METHOD-ONLY	*/

static object LI15(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB15 VMS15 VMV15
	{object V109;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI15key,first,ap);
	V109=(Vcs[0]);
	base[0]= VV[15];
	base[1]= (V109);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V110 = vs_base[0];
	VMR15(V110)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function DEFAULT-METHOD-ONLY-DFUN-INFO	*/

static object LI16()

{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	base[0]= VV[15];
	base[1]= Cnil;
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V112 = vs_base[0];
	VMR16(V112)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-ACCESSOR-DFUN-INFO	*/

static object LI17(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB17 VMS17 VMV17
	{object V113;
	object V114;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI17key,first,ap);
	V113=(Vcs[0]);
	V114=(Vcs[1]);
	base[0]= VV[35];
	base[1]= (V113);
	base[2]= (V114);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V115 = vs_base[0];
	VMR17(V115)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	macro definition for DFUN-INFO-ACCESSOR-TYPE	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V116=base[0]->c.c_cdr;
	if(endp(V116))invalid_macro_call();
	base[2]= (V116->c.c_car);
	V116=V116->c.c_cdr;
	if(!endp(V116))invalid_macro_call();}
	base[3]= list(2,VV[36],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-ONE-INDEX-DFUN-INFO	*/

static object LI19(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB19 VMS19 VMV19
	{object V117;
	object V118;
	object V119;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI19key,first,ap);
	V117=(Vcs[0]);
	V118=(Vcs[1]);
	V119=(Vcs[2]);
	base[0]= VV[37];
	base[1]= (V117);
	base[2]= (V118);
	base[3]= (V119);
	vs_top=(vs_base=base+0)+4;
	siLmake_structure();
	vs_top=sup;
	{object V120 = vs_base[0];
	VMR19(V120)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	macro definition for DFUN-INFO-INDEX	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V121=base[0]->c.c_cdr;
	if(endp(V121))invalid_macro_call();
	base[2]= (V121->c.c_car);
	V121=V121->c.c_cdr;
	if(!endp(V121))invalid_macro_call();}
	base[3]= list(2,VV[38],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-N-N	*/

static object LI21(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB21 VMS21 VMV21
	{object V122;
	object V123;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI21key,first,ap);
	V122=(Vcs[0]);
	V123=(Vcs[1]);
	base[0]= VV[39];
	base[1]= (V122);
	base[2]= (V123);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V124 = vs_base[0];
	VMR21(V124)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function N-N-DFUN-INFO	*/

static object LI22(V127,V128)

object V127;object V128;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	base[0]= VV[39];
	base[1]= (V128);
	base[2]= (V127);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V129 = vs_base[0];
	VMR22(V129)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-ONE-CLASS	*/

static object LI23(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{object V130;
	object V131;
	object V132;
	object V133;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI23key,first,ap);
	V130=(Vcs[0]);
	V131=(Vcs[1]);
	V132=(Vcs[2]);
	V133=(Vcs[3]);
	base[0]= VV[40];
	base[1]= (V130);
	base[2]= (V131);
	base[3]= (V132);
	base[4]= (V133);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V134 = vs_base[0];
	VMR23(V134)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function ONE-CLASS-DFUN-INFO	*/

static object LI24(V138,V139,V140)

object V138;object V139;object V140;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	base[0]= VV[40];
	base[1]= Cnil;
	base[2]= (V138);
	base[3]= (V139);
	base[4]= (V140);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V142 = vs_base[0];
	VMR24(V142)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for DFUN-INFO-WRAPPER0	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V143=base[0]->c.c_cdr;
	if(endp(V143))invalid_macro_call();
	base[2]= (V143->c.c_car);
	V143=V143->c.c_cdr;
	if(!endp(V143))invalid_macro_call();}
	base[3]= list(2,VV[41],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-TWO-CLASS	*/

static object LI26(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{object V144;
	object V145;
	object V146;
	object V147;
	object V148;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI26key,first,ap);
	V144=(Vcs[0]);
	V145=(Vcs[1]);
	V146=(Vcs[2]);
	V147=(Vcs[3]);
	V148=(Vcs[4]);
	base[0]= VV[42];
	base[1]= (V144);
	base[2]= (V145);
	base[3]= (V146);
	base[4]= (V147);
	base[5]= (V148);
	vs_top=(vs_base=base+0)+6;
	siLmake_structure();
	vs_top=sup;
	{object V149 = vs_base[0];
	VMR26(V149)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function TWO-CLASS-DFUN-INFO	*/

static object LI27(V154,V155,V156,V157)

object V154;object V155;object V156;object V157;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	base[0]= VV[42];
	base[1]= Cnil;
	base[2]= (V154);
	base[3]= (V155);
	base[4]= (V156);
	base[5]= (V157);
	vs_top=(vs_base=base+0)+6;
	siLmake_structure();
	vs_top=sup;
	{object V159 = vs_base[0];
	VMR27(V159)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for DFUN-INFO-WRAPPER1	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V160=base[0]->c.c_cdr;
	if(endp(V160))invalid_macro_call();
	base[2]= (V160->c.c_car);
	V160=V160->c.c_cdr;
	if(!endp(V160))invalid_macro_call();}
	base[3]= list(2,VV[43],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-ONE-INDEX	*/

static object LI29(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB29 VMS29 VMV29
	{object V161;
	object V162;
	object V163;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI29key,first,ap);
	V161=(Vcs[0]);
	V162=(Vcs[1]);
	V163=(Vcs[2]);
	base[0]= VV[44];
	base[1]= (V161);
	base[2]= (V162);
	base[3]= (V163);
	vs_top=(vs_base=base+0)+4;
	siLmake_structure();
	vs_top=sup;
	{object V164 = vs_base[0];
	VMR29(V164)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function ONE-INDEX-DFUN-INFO	*/

static object LI30(V168,V169,V170)

object V168;object V169;object V170;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	base[0]= VV[44];
	base[1]= (V170);
	base[2]= (V168);
	base[3]= (V169);
	vs_top=(vs_base=base+0)+4;
	siLmake_structure();
	vs_top=sup;
	{object V171 = vs_base[0];
	VMR30(V171)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-CHECKING	*/

static object LI31(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB31 VMS31 VMV31
	{object V172;
	object V173;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI31key,first,ap);
	V172=(Vcs[0]);
	V173=(Vcs[1]);
	base[0]= VV[12];
	base[1]= (V172);
	base[2]= (V173);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V174 = vs_base[0];
	VMR31(V174)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function CHECKING-DFUN-INFO	*/

static object LI32(V177,V178)

object V177;object V178;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	base[0]= VV[12];
	base[1]= (V178);
	base[2]= (V177);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V179 = vs_base[0];
	VMR32(V179)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for DFUN-INFO-FUNCTION	*/

static void L33()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V180=base[0]->c.c_cdr;
	if(endp(V180))invalid_macro_call();
	base[2]= (V180->c.c_car);
	V180=V180->c.c_cdr;
	if(!endp(V180))invalid_macro_call();}
	base[3]= list(2,VV[45],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-CACHING	*/

static object LI34(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB34 VMS34 VMV34
	{object V181;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI34key,first,ap);
	V181=(Vcs[0]);
	base[0]= VV[13];
	base[1]= (V181);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V182 = vs_base[0];
	VMR34(V182)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function CACHING-DFUN-INFO	*/

static object LI35(V184)

object V184;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	base[0]= VV[13];
	base[1]= (V184);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V185 = vs_base[0];
	VMR35(V185)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-CONSTANT-VALUE	*/

static object LI36(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{object V186;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI36key,first,ap);
	V186=(Vcs[0]);
	base[0]= VV[14];
	base[1]= (V186);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V187 = vs_base[0];
	VMR36(V187)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function CONSTANT-VALUE-DFUN-INFO	*/

static object LI37(V189)

object V189;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	base[0]= VV[14];
	base[1]= (V189);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V190 = vs_base[0];
	VMR37(V190)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for DFUN-UPDATE	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V191=base[0]->c.c_cdr;
	if(endp(V191))invalid_macro_call();
	base[2]= (V191->c.c_car);
	V191=V191->c.c_cdr;
	if(endp(V191))invalid_macro_call();
	base[3]= (V191->c.c_car);
	V191=V191->c.c_cdr;
	base[4]= V191;}
	V192= listA(4,VV[48],base[3],base[2],base[4]);
	base[5]= list(4,VV[46],VV[47],/* INLINE-ARGS */V192,listA(3,VV[49],base[2],VV[50]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function ACCESSOR-MISS-FUNCTION	*/

static object LI40(V195,V196)

object V195;object V196;
{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	base[0]=MMcons((V196),Cnil);
	base[1]=MMcons((V195),base[0]);
	{object V197= STREF(object,(base[0]->c.c_car),4);
	if((V197!= VV[51]))goto T296;
	{object V198 = 
	make_cclosure_new(LC139,Cnil,base[1],Cdata);
	VMR39(V198)}
	goto T296;
T296:;
	if((V197!= VV[123]))goto T297;
	{object V199 = 
	make_cclosure_new(LC140,Cnil,base[1],Cdata);
	VMR39(V199)}
	goto T297;
T297:;
	FEerror("The ECASE key value ~s is illegal.",1,V197);
	{object V200 = Cnil;
	VMR39(V200)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-ONE-CLASS-ACCESSOR-DFUN	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	{object V201;
	object V202;
	object V203;
	object V204;
	check_arg(4);
	V201=(base[0]);
	V202=(base[1]);
	V203=(base[2]);
	V204=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V205;
	object V206;
	if(!(((V202))==(VV[51]))){
	goto T300;}
	V205= VV[52];
	goto T298;
	goto T300;
T300:;
	V205= VV[53];
	goto T298;
T298:;
	V206= (*(LnkLI171))((V202),(V204),(V203));
	base[6]= (V205);
	base[7]= (type_of((V204))==t_cons?Ct:Cnil);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk172)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V203);
	base[7]= (V204);
	base[8]= (*(LnkLI173))((V201),(V206));
	vs_top=(vs_base=base+6)+3;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= Cnil;
	base[6]= (V206);
	vs_top=(vs_base=base+4)+3;
	return;}
	}
}
/*	function definition for MAKE-TWO-CLASS-ACCESSOR-DFUN	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	{object V207;
	object V208;
	object V209;
	object V210;
	object V211;
	check_arg(5);
	V207=(base[0]);
	V208=(base[1]);
	V209=(base[2]);
	V210=(base[3]);
	V211=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V212;
	object V213;
	if(!(((V208))==(VV[51]))){
	goto T314;}
	V212= VV[54];
	goto T312;
	goto T314;
T314:;
	V212= VV[55];
	goto T312;
T312:;
	V213= (*(LnkLI174))((V208),(V211),(V209),(V210));
	base[7]= (V212);
	base[8]= (type_of((V211))==t_cons?Ct:Cnil);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk172)();
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= (V209);
	base[8]= (V210);
	base[9]= (V211);
	base[10]= (*(LnkLI173))((V207),(V213));
	vs_top=(vs_base=base+7)+4;
	{object _funobj = base[6];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= Cnil;
	base[7]= (V213);
	vs_top=(vs_base=base+5)+3;
	return;}
	}
}
/*	function definition for MAKE-ONE-INDEX-ACCESSOR-DFUN	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	{object V214;
	object V215;
	object V216;
	object V217;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V214=(base[0]);
	V215=(base[1]);
	V216=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T327;}
	V217=(base[3]);
	vs_top=sup;
	goto T328;
	goto T327;
T327:;
	V217= Cnil;
	goto T328;
T328:;
	{object V218;
	object V219;
	object V220;
	if(!(((V215))==(VV[51]))){
	goto T332;}
	V218= VV[56];
	goto T330;
	goto T332;
T332:;
	V218= VV[57];
	goto T330;
T330:;
	if((V217)!=Cnil){
	V219= (V217);
	goto T334;}
	V221= (VV[176]->s.s_gfdef);
	V219= (*(LnkLI175))(small_fixnum(1),Cnil,V221,4);
	goto T334;
T334:;
	V220= (*(LnkLI37))((V215),(V216),(V219));
	base[9]= (V218);
	base[10]= (type_of((V216))==t_cons?Ct:Cnil);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk172)();
	vs_top=sup;
	base[8]= vs_base[0];
	base[9]= (V219);
	base[10]= (V216);
	base[11]= (*(LnkLI173))((V214),(V220));
	vs_top=(vs_base=base+9)+3;
	{object _funobj = base[8];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= (V219);
	base[9]= (V220);
	vs_top=(vs_base=base+7)+3;
	return;}
	}
}
/*	function definition for MAKE-FINAL-ONE-INDEX-ACCESSOR-DFUN	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{object V222;
	object V223;
	object V224;
	object V225;
	check_arg(4);
	V222=(base[0]);
	V223=(base[1]);
	V224=(base[2]);
	V225=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V226;
	V227= (VV[176]->s.s_gfdef);
	V226= (VFUN_NARGS=4,(*(LnkLI177))((V225),Cnil,small_fixnum(1),V227));
	base[4]= (V222);
	base[5]= (V223);
	base[6]= (V224);
	base[7]= (V226);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk178)();
	return;}
	}
}
/*	local entry for function ONE-INDEX-LIMIT-FN	*/

static object LI45(V229)

object V229;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{long V230 = (long)(*(LnkLI179))((V229));
	VMR44((object)V230)}
}
/*	function definition for MAKE-N-N-ACCESSOR-DFUN	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	{object V231;
	object V232;
	object V233;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V231=(base[0]);
	V232=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T352;}
	V233=(base[2]);
	vs_top=sup;
	goto T353;
	goto T352;
T352:;
	V233= Cnil;
	goto T353;
T353:;
	{object V234;
	object V235;
	object V236;
	if(!(((V232))==(VV[51]))){
	goto T357;}
	V234= VV[58];
	goto T355;
	goto T357;
T357:;
	V234= VV[59];
	goto T355;
T355:;
	if((V233)!=Cnil){
	V235= (V233);
	goto T359;}
	V237= (VV[180]->s.s_gfdef);
	V235= (*(LnkLI175))(small_fixnum(1),Ct,V237,2);
	goto T359;
T359:;
	V236= (*(LnkLI181))((V232),(V235));
	base[8]= (V234);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk172)();
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= (V235);
	base[9]= (*(LnkLI173))((V231),(V236));
	vs_top=(vs_base=base+8)+2;
	{object _funobj = base[7];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= (V235);
	base[8]= (V236);
	vs_top=(vs_base=base+6)+3;
	return;}
	}
}
/*	function definition for MAKE-FINAL-N-N-ACCESSOR-DFUN	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{object V238;
	object V239;
	object V240;
	check_arg(3);
	V238=(base[0]);
	V239=(base[1]);
	V240=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V241;
	V242= (VV[180]->s.s_gfdef);
	V241= (VFUN_NARGS=4,(*(LnkLI177))((V240),Ct,small_fixnum(1),V242));
	base[3]= (V238);
	base[4]= (V239);
	base[5]= (V241);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk182)();
	return;}
	}
}
/*	local entry for function N-N-ACCESSORS-LIMIT-FN	*/

static object LI48(V244)

object V244;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{long V245 = (long)(*(LnkLI179))((V244));
	VMR47((object)V245)}
}
/*	function definition for MAKE-CHECKING-DFUN	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_check;
	{object V246;
	object V247;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	base[0]=MMcons(base[0],Cnil);
	V246=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T374;}
	V247=(base[2]);
	vs_top=sup;
	goto T375;
	goto T374;
T374:;
	V247= Cnil;
	goto T375;
T375:;
	if(((V247))!=Cnil){
	goto T377;}
	if(((*(LnkLI183))((base[0]->c.c_car)))==Cnil){
	goto T380;}
	base[3]= (base[0]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk184)();
	return;
	goto T380;
T380:;
	if(((VFUN_NARGS=1,(*(LnkLI185))((base[0]->c.c_car))))==Cnil){
	goto T377;}
	base[3]= (base[0]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk186)();
	return;
	goto T377;
T377:;
	{object V248;
	object V249;
	object V250;
	object V251;
	base[3]= (base[0]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk187)();
	if(vs_base>=vs_top){vs_top=sup;goto T389;}
	V248= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T390;}
	V249= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T391;}
	V250= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T392;}
	V251= vs_base[0];
	vs_top=sup;
	goto T393;
	goto T389;
T389:;
	V248= Cnil;
	goto T390;
T390:;
	V249= Cnil;
	goto T391;
T391:;
	V250= Cnil;
	goto T392;
T392:;
	V251= Cnil;
	goto T393;
T393:;
	base[3]= 
	make_cclosure_new(LC141,Cnil,base[0],Cdata);
	base[4]= (V250);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk188)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T395;}
	{object V252;
	V252= (*(LnkLI189))();
	base[5]= VV[60];
	base[6]= (V250);
	base[7]= (V249);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk172)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V246);
	vs_top=(vs_base=base+5)+1;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= Cnil;
	base[5]= (V252);
	vs_top=(vs_base=base+3)+3;
	return;}
	goto T395;
T395:;
	{object V253;
	if((V247)!=Cnil){
	V253= (V247);
	goto T408;}
	V254= (VV[190]->s.s_gfdef);
	V253= (*(LnkLI175))((V251),Cnil,V254,2);
	goto T408;
T408:;
	base[4]= (*(LnkLI191))((V246),(V253));
	base[4]=MMcons(base[4],base[0]);
	base[7]= VV[61];
	base[8]= (V250);
	base[9]= (V249);
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk172)();
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= (V253);
	base[8]= (V246);
	base[9]= 
	make_cclosure_new(LC142,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+7)+3;
	{object _funobj = base[6];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V253);
	base[7]= (base[4]->c.c_car);
	vs_top=(vs_base=base+5)+3;
	return;}}
	}
}
/*	function definition for MAKE-FINAL-CHECKING-DFUN	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	{object V255;
	object V256;
	object V257;
	check_arg(4);
	V255=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	V256=(base[2]);
	V257=(base[3]);
	vs_top=sup;
	{object V258;
	base[4]= (V255);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk161)(Lclptr161);
	vs_top=sup;
	V259= vs_base[0];
	V258= STREF(object,V259,8);
	base[4]= 
	make_cclosure_new(LC143,Cnil,base[1],Cdata);
	base[5]= (V258);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk188)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T425;}
	base[4]= 
	make_cclosure_new(LC144,Cnil,base[1],Cdata);
	base[5]= Cnil;
	base[6]= (*(LnkLI189))();
	vs_top=(vs_base=base+4)+3;
	return;
	goto T425;
T425:;
	{object V260;
	V261= (VV[190]->s.s_gfdef);
	V260= (*(LnkLI192))((V255),Cnil,V261,(V256),(V257));
	base[4]= (V255);
	base[5]= (base[1]->c.c_car);
	base[6]= (V260);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk193)();
	return;}}
	}
}
/*	local entry for function USE-DEFAULT-METHOD-ONLY-DFUN-P	*/

static object LI51(V263)

object V263;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V264;
	object V265;
	object V266;
	object V267;
	base[0]= (V263);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk187)();
	if(vs_base>=vs_top){vs_top=sup;goto T439;}
	V264= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T440;}
	V265= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T441;}
	V266= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T442;}
	V267= vs_base[0];
	vs_top=sup;
	goto T443;
	goto T439;
T439:;
	V264= Cnil;
	goto T440;
T440:;
	V265= Cnil;
	goto T441;
T441:;
	V266= Cnil;
	goto T442;
T442:;
	V267= Cnil;
	goto T443;
T443:;
	base[0]= VV[194];
	base[1]= (V266);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk188)();
	vs_top=sup;
	{object V268 = vs_base[0];
	VMR50(V268)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function USE-CACHING-DFUN-P	*/

static object LI52(V270)

register object V270;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	base[0]= VV[195];
	if(((*(LnkLI196))((V270)))==Cnil){
	goto T449;}
	if(type_of(V270)==t_structure){
	goto T455;}
	goto T453;
	goto T455;
T455:;
	if(!(((V270)->str.str_def)==(VV[63]))){
	goto T453;}
	V271= STREF(object,(V270),4);
	goto T451;
	goto T453;
T453:;{object V273;
	V273= (VV[65]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V270);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V274= vs_base[0];
	if(!((V273)==(CMPcar(V274)))){
	goto T458;}}
	V271= CMPcar(((V270))->cc.cc_turbo[12]);
	goto T451;
	goto T458;
T458:;
	base[2]= VV[66];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V271= vs_base[0];
	goto T451;
T451:;
	base[1]= (V271)->v.v_self[fix((VV[67]->s.s_dbind))];
	goto T447;
	goto T449;
T449:;
	base[2]= (V270);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	base[1]= vs_base[0];
	goto T447;
T447:;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk200)();
	vs_top=sup;
	{object V275 = vs_base[0];
	VMR51(V275)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CHECKING-LIMIT-FN	*/

static object LI53(V277)

object V277;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{long V278 = (long)(*(LnkLI179))((V277));
	VMR52((object)V278)}
}
/*	function definition for MAKE-CACHING-DFUN	*/

static void L54()
{register object *base=vs_base;
	register object *sup=base+VM53; VC53
	vs_check;
	{object V279;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T465;}
	V279=(base[1]);
	vs_top=sup;
	goto T466;
	goto T465;
T465:;
	V279= Cnil;
	goto T466;
T466:;
	if(((V279))!=Cnil){
	goto T468;}
	if(((VFUN_NARGS=1,(*(LnkLI201))((base[0]->c.c_car))))==Cnil){
	goto T471;}
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk202)();
	return;
	goto T471;
T471:;
	if(((VFUN_NARGS=1,(*(LnkLI185))((base[0]->c.c_car))))==Cnil){
	goto T468;}
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk186)();
	return;
	goto T468;
T468:;
	{object V280;
	object V281;
	object V282;
	object V283;
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk187)();
	if(vs_base>=vs_top){vs_top=sup;goto T480;}
	V280= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T481;}
	V281= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T482;}
	V282= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T483;}
	V283= vs_base[0];
	vs_top=sup;
	goto T484;
	goto T480;
T480:;
	V280= Cnil;
	goto T481;
T481:;
	V281= Cnil;
	goto T482;
T482:;
	V282= Cnil;
	goto T483;
T483:;
	V283= Cnil;
	goto T484;
T484:;
	{object V284;
	if((V279)!=Cnil){
	V284= (V279);
	goto T485;}
	V285= (VV[203]->s.s_gfdef);
	V284= (*(LnkLI175))((V283),Ct,V285,2);
	goto T485;
T485:;
	base[3]= (*(LnkLI204))((V284));
	base[3]=MMcons(base[3],base[0]);
	base[6]= VV[68];
	base[7]= (V282);
	base[8]= (V281);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk172)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V284);
	base[7]= 
	make_cclosure_new(LC147,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V284);
	base[6]= (base[3]->c.c_car);
	vs_top=(vs_base=base+4)+3;
	return;}}
	}
}
/*	function definition for MAKE-FINAL-CACHING-DFUN	*/

static void L55()
{register object *base=vs_base;
	register object *sup=base+VM54; VC54
	vs_check;
	{object V286;
	object V287;
	object V288;
	check_arg(3);
	V286=(base[0]);
	V287=(base[1]);
	V288=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V289;
	V290= (VV[203]->s.s_gfdef);
	V289= (*(LnkLI192))((V286),Ct,V290,(V287),(V288));
	base[3]= (V286);
	base[4]= (V289);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk184)();
	return;}
	}
}
/*	local entry for function CACHING-LIMIT-FN	*/

static object LI56(V292)

object V292;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{long V293 = (long)(*(LnkLI179))((V292));
	VMR55((object)V293)}
}
/*	function definition for INSURE-DFUN	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_check;
	{object V294;
	object V295;
	check_arg(2);
	V294=(base[0]);
	V295=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V296;
	object V297;
	register object V298;
	object V299;
	base[2]= (V294);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk187)();
	if(vs_base>=vs_top){vs_top=sup;goto T503;}
	V296= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T504;}
	V297= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T505;}
	V298= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T506;}
	V299= vs_base[0];
	vs_top=sup;
	goto T507;
	goto T503;
T503:;
	V296= Cnil;
	goto T504;
T504:;
	V297= Cnil;
	goto T505;
T505:;
	V298= Cnil;
	goto T506;
T506:;
	V299= Cnil;
	goto T507;
T507:;
	if(((V298))==Cnil){
	goto T508;}
	if((CMPcar((V298)))==Cnil){
	goto T509;}
	goto T508;
T508:;
	if(((VFUN_NARGS=1,(*(LnkLI201))((V294))))==Cnil){
	goto T514;}
	base[2]= VV[69];
	base[3]= (V298);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk172)();
	return;
	goto T514;
T514:;
	if(((V295))==Cnil){
	goto T519;}
	base[2]= VV[68];
	base[3]= (V298);
	base[4]= (V297);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk172)();
	return;
	goto T519;
T519:;
	{register object V300;
	register object V301;
	V300= (V298);
	V301= CMPcar((V300));
	goto T530;
T530:;
	if(!(((V300))==Cnil)){
	goto T531;}
	goto T526;
	goto T531;
T531:;
	if(((V301))==(Ct)){
	goto T535;}
	goto T525;
	goto T535;
T535:;
	V300= CMPcdr((V300));
	V301= CMPcar((V300));
	goto T530;}
	goto T526;
T526:;
	base[2]= VV[60];
	base[3]= (V298);
	base[4]= (V297);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk172)();
	return;
	goto T525;
T525:;
	base[2]= VV[61];
	base[3]= (V298);
	base[4]= (V297);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk172)();
	return;
	goto T509;
T509:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	local entry for function USE-CONSTANT-VALUE-DFUN-P	*/

static object LI58(object V302,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB57 VMS57 VMV57
	{register object V303;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V303= V302;
	narg = narg - 1;
	if (narg <= 0) goto T549;
	else {
	Vcs[1]=MMcons(first,Cnil);}
	--narg; goto T550;
	goto T549;
T549:;
	Vcs[1]= Cnil;
	Vcs[1]=MMcons(Vcs[1],Cnil);
	goto T550;
T550:;
	{object V304;
	object V305;
	object V306;
	object V307;
	base[0]= (V303);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk187)();
	if(vs_base>=vs_top){vs_top=sup;goto T554;}
	V304= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T555;}
	V305= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T556;}
	V306= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T557;}
	V307= vs_base[0];
	vs_top=sup;
	goto T558;
	goto T554;
T554:;
	V304= Cnil;
	goto T555;
T555:;
	V305= Cnil;
	goto T556;
T556:;
	V306= Cnil;
	goto T557;
T557:;
	V307= Cnil;
	goto T558;
T558:;
	{object V308;
	base[0]= (*(LnkLI196))((V303));
	base[0]=MMcons(base[0],Vcs[1]);
	if(((base[0]->c.c_car))==Cnil){
	goto T562;}
	if(type_of(V303)==t_structure){
	goto T568;}
	goto T566;
	goto T568;
T568:;
	if(!(((V303)->str.str_def)==(VV[70]))){
	goto T566;}
	V309= STREF(object,(V303),4);
	goto T564;
	goto T566;
T566:;{object V311;
	V311= (VV[65]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V303);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V312= vs_base[0];
	if(!((V311)==(CMPcar(V312)))){
	goto T571;}}
	V309= CMPcar(((V303))->cc.cc_turbo[12]);
	goto T564;
	goto T571;
T571:;
	base[3]= VV[66];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V309= vs_base[0];
	goto T564;
T564:;
	V308= (V309)->v.v_self[fix((VV[67]->s.s_dbind))];
	goto T560;
	goto T562;
T562:;
	base[3]= (V303);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V308= vs_base[0];
	goto T560;
T560:;
	base[2]=MMcons(VV[71],base[0]);
	if(((V305))==Cnil){
	goto T578;}
	{object V313 = Cnil;
	VMR57(V313)}
	goto T578;
T578:;
	if(!(((((VV[72]->s.s_dbind))==(VV[73])?Ct:Cnil))==Cnil)){
	goto T582;}
	goto T580;
	goto T582;
T582:;
	if(((*(LnkLI205))((V303)))!=Cnil){
	goto T580;}
	{object V314 = Cnil;
	VMR57(V314)}
	goto T580;
T580:;
	base[3]= 
	make_cclosure_new(LC148,Cnil,base[2],Cdata);
	base[4]= (V308);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk206)();
	vs_top=sup;
	{object V315 = vs_base[0];
	VMR57(V315)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for MAKE-CONSTANT-VALUE-DFUN	*/

static void L59()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	{object V316;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T586;}
	V316=(base[1]);
	vs_top=sup;
	goto T587;
	goto T586;
T586:;
	V316= Cnil;
	goto T587;
T587:;
	{object V317;
	object V318;
	object V319;
	object V320;
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk187)();
	if(vs_base>=vs_top){vs_top=sup;goto T591;}
	V317= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T592;}
	V318= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T593;}
	V319= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T594;}
	V320= vs_base[0];
	vs_top=sup;
	goto T595;
	goto T591;
T591:;
	V317= Cnil;
	goto T592;
T592:;
	V318= Cnil;
	goto T593;
T593:;
	V319= Cnil;
	goto T594;
T594:;
	V320= Cnil;
	goto T595;
T595:;
	{object V321;
	if((V316)!=Cnil){
	V321= (V316);
	goto T596;}
	V322= (VV[203]->s.s_gfdef);
	V321= (*(LnkLI175))((V320),Ct,V322,2);
	goto T596;
T596:;
	base[3]= (*(LnkLI207))((V321));
	base[3]=MMcons(base[3],base[0]);
	base[6]= VV[69];
	base[7]= (V319);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk172)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V321);
	base[7]= 
	make_cclosure_new(LC149,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V321);
	base[6]= (base[3]->c.c_car);
	vs_top=(vs_base=base+4)+3;
	return;}}
	}
}
/*	function definition for MAKE-FINAL-CONSTANT-VALUE-DFUN	*/

static void L60()
{register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_check;
	{object V323;
	object V324;
	object V325;
	check_arg(3);
	V323=(base[0]);
	V324=(base[1]);
	V325=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V326;
	V327= (VV[203]->s.s_gfdef);
	V326= (*(LnkLI192))((V323),VV[74],V327,(V324),(V325));
	base[3]= (V323);
	base[4]= (V326);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk202)();
	return;}
	}
}
/*	local entry for function USE-DISPATCH-DFUN-P	*/

static object LI61(object V328,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB60 VMS60 VMV60
	{object V329;
	object V330;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V329= V328;
	narg = narg - 1;
	if (narg <= 0) goto T611;
	else {
	V330= first;}
	--narg; goto T612;
	goto T611;
T611:;
	V330= (*(LnkLI183))((V329));
	goto T612;
T612:;
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T615;}
	if(((V330))!=Cnil){
	goto T618;}
	{object V331;
	V331= (*(LnkLI208))((V329));
	base[0]= (V329);
	base[1]= (V331);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk209)();
	vs_top=sup;
	V332= vs_base[0];
	{object V333 = (number_compare(V332,(V331))<0?Ct:Cnil);
	VMR60(V333)}}
	goto T618;
T618:;
	{object V334 = Cnil;
	VMR60(V334)}
	goto T615;
T615:;
	{object V335 = Cnil;
	VMR60(V335)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SHOW-DFUN-COSTS	*/

static object LI62(V337)

register object V337;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	if(type_of((V337))==t_symbol){
	goto T625;}
	if(!(type_of((V337))==t_cons)){
	goto T624;}
	goto T625;
T625:;
	V337= (*(LnkLI210))((V337));
	goto T624;
T624:;
	base[0]= Ct;
	base[1]= VV[75];
	base[3]= (V337);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk162)(Lclptr162);
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (*(LnkLI208))((V337));
	base[5]= (V337);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk209)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+0)+5;
	Lformat();
	vs_top=sup;
	{object V338 = vs_base[0];
	VMR61(V338)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for DISPATCH-DFUN-COST	*/

static void L63()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM62; VC62
	vs_check;
	{VOL object V339;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V339=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T637;}
	base[1]=MMcons(base[1],Cnil);
	vs_top=sup;
	goto T638;
	goto T637;
T637:;
	base[1]= Cnil;
	base[1]=MMcons(base[1],Cnil);
	goto T638;
T638:;
	base[2]=alloc_frame_id();
	base[2]=MMcons(base[2],base[1]);
	frs_push(FRS_CATCH,(base[2]->c.c_car));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	base[3]= (V339);
	base[5]= (V339);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= Cnil;
	base[6]= 
	make_cclosure_new(LC150,Cnil,base[2],Cdata);
	base[7]= 
	make_cclosure_new(LC151,Cnil,base[2],Cdata);
	base[8]= (VV[211]->s.s_gfdef);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk212)();
	frs_pop();
	return;
	}
	}
}
/*	local entry for function CACHING-DFUN-COST	*/

static object LI64(V341)

object V341;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	{object V342;
	object V343;
	base[2]= (V341);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk161)(Lclptr161);
	vs_top=sup;
	V342= vs_base[0];
	V343= CMPmake_fixnum((long)length(STREF(object,(V342),8)));
	base[2]= (VV[81]->s.s_dbind);
	base[3]= number_times((VV[82]->s.s_dbind),(V343));
	base[5]= (V341);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V344= vs_base[0];
	if(((*(LnkLI213))(V344))==Cnil){
	goto T654;}
	base[4]= (VV[83]->s.s_dbind);
	goto T652;
	goto T654;
T654:;
	base[4]= small_fixnum(0);
	goto T652;
T652:;
	vs_top=(vs_base=base+2)+3;
	Lplus();
	vs_top=sup;
	{object V345 = vs_base[0];
	VMR63(V345)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-DISPATCH-DFUN	*/

static void L65()
{register object *base=vs_base;
	register object *sup=base+VM64; VC64
	vs_check;
	{object V346;
	check_arg(1);
	V346=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V346);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk214)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	base[3]= (*(LnkLI215))();
	vs_top=(vs_base=base+1)+3;
	return;
	}
}
/*	function definition for GET-DISPATCH-FUNCTION	*/

static void L66()
{register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_check;
	{object V347;
	check_arg(1);
	V347=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V348;
	base[1]= (V347);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V348= vs_base[0];
	base[1]= (VFUN_NARGS=8,(*(LnkLI216))((V347),(V348),Cnil,Cnil,Cnil,Cnil,Cnil,Ct));
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	function definition for MAKE-FINAL-DISPATCH-DFUN	*/

static void L67()
{register object *base=vs_base;
	register object *sup=base+VM66; VC66
	vs_check;
	{object V349;
	check_arg(1);
	V349=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V349);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk186)();
	return;
	}
}
/*	local entry for function UPDATE-DISPATCH-DFUNS	*/

static object LI68()

{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	{register object V350;
	register object V351;
	V350= (*(LnkLI160))(VV[84]);
	V351= CMPcar((V350));
	goto T671;
T671:;
	if(!(((V350))==Cnil)){
	goto T672;}
	{object V352 = Cnil;
	VMR67(V352)}
	goto T672;
T672:;
	{register object V353;
	register object V354;
	register object V355;
	base[2]= (V351);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk186)();
	if(vs_base>=vs_top){vs_top=sup;goto T679;}
	V353= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T680;}
	V354= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T681;}
	V355= vs_base[0];
	vs_top=sup;
	goto T682;
	goto T679;
T679:;
	V353= Cnil;
	goto T680;
T680:;
	V354= Cnil;
	goto T681;
T681:;
	V355= Cnil;
	goto T682;
T682:;
	(void)((VFUN_NARGS=4,(*(LnkLI49))((V351),(V353),(V354),(V355))));}
	V350= CMPcdr((V350));
	V351= CMPcar((V350));
	goto T671;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FILL-DFUN-CACHE	*/

static object LI69(object V359,object V358,object V357,object V356,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB68 VMS68 VMV68
	{object V360;
	object V361;
	object V362;
	object V363;
	object V364;
	va_start(ap,first);
	if(narg <4) too_few_arguments();
	V360= V359;
	V361= V358;
	V362= V357;
	V363= V356;
	narg = narg - 4;
	if (narg <= 0) goto T688;
	else {
	V364= first;}
	--narg; goto T689;
	goto T688;
T688:;
	V364= Cnil;
	goto T689;
T689:;
	if((V364)!=Cnil){
	base[0]= (V364);
	goto T691;}
	base[1]= (V360);
	vs_top=(vs_base=base+1)+1;
	Lhash_table_count();
	vs_top=sup;
	V365= vs_base[0];
	{long V366= fix(number_plus(V365,small_fixnum(3)));
	base[0]= (*(LnkLI175))((V362),(V361),(V363),/* INLINE-ARGS */V366);}
	goto T691;
T691:;
	base[0]=MMcons(base[0],Cnil);
	base[1]= 
	make_cclosure_new(LC152,Cnil,base[0],Cdata);
	base[2]= (V360);
	vs_top=(vs_base=base+1)+2;
	Lmaphash();
	vs_top=sup;
	{object V367 = (base[0]->c.c_car);
	VMR68(V367)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-FINAL-ORDINARY-DFUN-INTERNAL	*/

static object LI70(V373,V374,V375,V376,V377)

register object V373;register object V374;object V375;object V376;object V377;
{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	{object V378;
	object V379;
	object V380;
	object V381;
	base[4]= (V373);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk161)(Lclptr161);
	vs_top=sup;
	V378= vs_base[0];
	V379= (*(LnkLI217))((V378));
	if((V377)==Cnil){
	V380= Cnil;
	goto T700;}
	base[4]= (*(LnkLI218))((V373));
	vs_top=(vs_base=base+4)+1;
	Ltype_of();
	vs_top=sup;
	V382= vs_base[0];
	if(!(((V374))==(Ct))){
	goto T707;}
	V383= VV[13];
	goto T705;
	goto T707;
T707:;
	if(!(((V374))==(VV[74]))){
	goto T710;}
	V383= VV[14];
	goto T705;
	goto T710;
T710:;
	if(((V374))!=Cnil){
	goto T713;}
	V383= VV[12];
	goto T705;
	goto T713;
T713:;
	V383= Cnil;
	goto T705;
T705:;
	if(equal(V382,V383)){
	goto T701;}
	V380= Cnil;
	goto T700;
	goto T701;
T701:;
	V380= (V377);
	goto T700;
T700:;
	if(((V380))==Cnil){
	goto T717;}
	V384= (*(LnkLI220))((V373));
	V381= (*(LnkLI219))(/* INLINE-ARGS */V384);
	goto T715;
	goto T717;
T717:;
	V381= (*(LnkLI175))((V379),(((((V374))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil),(V375),4);
	goto T715;
T715:;
	{object V385 = (*(LnkLI221))((V373),(V374),(V381),(V376),(V380));
	VMR69(V385)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for DFUN-MISS	*/

static void L71()
{register object *base=vs_base;
	register object *sup=base+VM70; VC70
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V386=base[0]->c.c_cdr;
	if(endp(V386))invalid_macro_call();
	{object V387= (V386->c.c_car);
	if(endp(V387))invalid_macro_call();
	base[2]= (V387->c.c_car);
	V387=V387->c.c_cdr;
	if(endp(V387))invalid_macro_call();
	base[3]= (V387->c.c_car);
	V387=V387->c.c_cdr;
	if(endp(V387))invalid_macro_call();
	base[4]= (V387->c.c_car);
	V387=V387->c.c_cdr;
	if(endp(V387))invalid_macro_call();
	base[5]= (V387->c.c_car);
	V387=V387->c.c_cdr;
	if(endp(V387))invalid_macro_call();
	base[6]= (V387->c.c_car);
	V387=V387->c.c_cdr;
	if(endp(V387)){
	base[7]= Cnil;
	} else {
	base[7]= (V387->c.c_car);
	V387=V387->c.c_cdr;}
	if(endp(V387)){
	base[8]= Cnil;
	} else {
	base[8]= (V387->c.c_car);
	V387=V387->c.c_cdr;}
	if(endp(V387)){
	base[9]= Cnil;
	} else {
	base[9]= (V387->c.c_car);
	V387=V387->c.c_cdr;}
	if(endp(V387)){
	base[10]= Cnil;
	} else {
	base[10]= (V387->c.c_car);
	V387=V387->c.c_cdr;}
	if(!endp(V387))invalid_macro_call();}
	V386=V386->c.c_cdr;
	base[11]= V386;}
	if((base[10])!=Cnil){
	goto T723;}
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[10]= vs_base[0];
	goto T723;
T723:;
	if((base[7])==Cnil){
	goto T729;}
	V388= list(2,base[7],base[8]);
	goto T727;
	goto T729;
T729:;
	V388= Cnil;
	goto T727;
T727:;
	V389= listA(5,base[6],base[10],base[4],base[5],V388);
	if((base[9])==Cnil){
	goto T733;}
	V390= VV[13];
	goto T731;
	goto T733;
T733:;
	if((base[7])==Cnil){
	goto T736;}
	V390= VV[86];
	goto T731;
	goto T736;
T736:;
	V390= VV[12];
	goto T731;
T731:;
	V391= list(4,VV[85],base[2],base[3],list(2,VV[25],V390));
	V392= list(3,VV[88],base[10],list(2,VV[89],list(3,VV[90],base[2],VV[91])));
	V393= list(2,VV[91],list(3,VV[93],base[2],VV[91]));
	V394= list(3,VV[87],/* INLINE-ARGS */V392,listA(3,VV[92],make_cons(/* INLINE-ARGS */V393,Cnil),base[11]));
	base[12]= list(5,VV[46],/* INLINE-ARGS */V389,/* INLINE-ARGS */V391,/* INLINE-ARGS */V394,list(3,VV[94],base[6],base[3]));
	vs_top=(vs_base=base+12)+1;
	return;
}
/*	local entry for function MAKE-INITIAL-DFUN	*/

static object LI73(V396)

object V396;
{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	base[0]=MMcons((V396),Cnil);
	{object V397;
	V397= 
	make_cclosure_new(LC153,Cnil,base[0],Cdata);
	{object V398;
	object V399;
	object V400;
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T741;}
	if(((*(LnkLI205))((base[0]->c.c_car)))==Cnil){
	goto T741;}
	{object V401;
	object V402;
	V401= (*(LnkLI183))((base[0]->c.c_car));
	V402= (VFUN_NARGS=3,(*(LnkLI222))((base[0]->c.c_car),(V401),(((VV[95]->s.s_dbind))==Cnil?Ct:Cnil)));
	if(((VV[95]->s.s_dbind))==Cnil){
	goto T748;}
	if(((VFUN_NARGS=2,(*(LnkLI185))((base[0]->c.c_car),(V401))))==Cnil){
	goto T751;}
	base[3]= (V397);
	base[4]= Cnil;
	base[5]= (*(LnkLI223))();
	vs_top=(vs_base=base+3)+3;
	goto T739;
	goto T751;
T751:;
	base[3]= (base[0]->c.c_car);
	base[4]= (V401);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk224)();
	vs_top=sup;
	base[3]= (V397);
	base[4]= Cnil;
	base[5]= (*(LnkLI225))();
	vs_top=(vs_base=base+3)+3;
	goto T739;
	goto T748;
T748:;
	base[3]= (base[0]->c.c_car);
	base[4]= (V402);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk226)();
	goto T739;}
	goto T741;
T741:;
	{object V403;
	object V404;
	if(((*(LnkLI196))((base[0]->c.c_car)))==Cnil){
	goto T766;}
	{object V406;
	V406= (base[0]->c.c_car);
	if(type_of((V406))==t_structure){
	goto T772;}
	goto T770;
	goto T772;
T772:;
	if(!((((V406))->str.str_def)==(VV[99]))){
	goto T770;}}
	V405= STREF(object,(base[0]->c.c_car),4);
	goto T768;
	goto T770;
T770:;{object V407;
	V407= (VV[65]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V408= vs_base[0];
	if(!((V407)==(CMPcar(V408)))){
	goto T775;}}
	V405= CMPcar(((base[0]->c.c_car))->cc.cc_turbo[12]);
	goto T768;
	goto T775;
T775:;
	base[1]= VV[66];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	V405= vs_base[0];
	goto T768;
T768:;
	V403= (V405)->v.v_self[fix((VV[97]->s.s_dbind))];
	goto T764;
	goto T766;
T766:;
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk161)(Lclptr161);
	vs_top=sup;
	V403= vs_base[0];
	goto T764;
T764:;
	V404= Cnil;
	if((STREF(object,(V403),28))==Cnil){
	goto T783;}
	V404= (*(LnkLI227))((base[0]->c.c_car));
	if(((V404))==Cnil){
	goto T783;}
	if(((VV[98]->s.s_dbind))==Cnil){
	goto T789;}
	base[1]= (*(LnkLI228))((base[0]->c.c_car),(V404));
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+1)+3;
	goto T739;
	goto T789;
T789:;
	base[1]= (base[0]->c.c_car);
	base[2]= (V404);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk229)();
	goto T739;
	goto T783;
T783:;
	base[1]= (V397);
	base[2]= Cnil;
	base[3]= (*(LnkLI225))();
	vs_top=(vs_base=base+1)+3;}
	goto T739;
T739:;
	if(vs_base>=vs_top){vs_top=sup;goto T799;}
	V398= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T800;}
	V399= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T801;}
	V400= vs_base[0];
	vs_top=sup;
	goto T802;
	goto T799;
T799:;
	V398= Cnil;
	goto T800;
T800:;
	V399= Cnil;
	goto T801;
T801:;
	V400= Cnil;
	goto T802;
T802:;
	{object V409 = (VFUN_NARGS=4,(*(LnkLI230))((base[0]->c.c_car),(V398),(V399),(V400)));
	VMR71(V409)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-EARLY-ACCESSOR	*/

static object LI74(V412,V413)

register object V412;object V413;
{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V414;
	if(type_of(V412)==t_structure){
	goto T808;}
	goto T806;
	goto T808;
T808:;
	if(!(((V412)->str.str_def)==(VV[100]))){
	goto T806;}
	V415= STREF(object,(V412),4);
	goto T804;
	goto T806;
T806:;{object V417;
	V417= (VV[65]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V412);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V418= vs_base[0];
	if(!((V417)==(CMPcar(V418)))){
	goto T811;}}
	V415= CMPcar(((V412))->cc.cc_turbo[12]);
	goto T804;
	goto T811;
T811:;
	base[2]= VV[66];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V415= vs_base[0];
	goto T804;
T804:;
	V414= (V415)->v.v_self[fix((VV[67]->s.s_dbind))];
	base[2]= CMPcar((V414));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk231)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[1]=MMcons(base[1],Cnil);
	{object V419= (V413);
	if((V419!= VV[51]))goto T819;
	{object V420 = 
	make_cclosure_new(LC154,Cnil,base[1],Cdata);
	VMR72(V420)}
	goto T819;
T819:;
	if((V419!= VV[123]))goto T820;
	{object V421 = 
	make_cclosure_new(LC155,Cnil,base[1],Cdata);
	VMR72(V421)}
	goto T820;
T820:;
	FEerror("The ECASE key value ~s is illegal.",1,V419);
	{object V422 = Cnil;
	VMR72(V422)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for INITIAL-DFUN	*/

static void L75()
{register object *base=vs_base;
	register object *sup=base+VM73; VC73
	vs_check;
	bds_check;
	{register object V423;
	object V424;
	check_arg(2);
	V423=(base[0]);
	V424=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V425;
	object V426;
	object V427;
	object V428;
	object V429;
	object V430;
	base[2]= (V423);
	base[3]= (V424);
	base[4]= VV[86];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk85)();
	if(vs_base>=vs_top){vs_top=sup;goto T825;}
	V425= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T826;}
	V426= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T827;}
	V427= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T828;}
	V428= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T829;}
	V429= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T830;}
	V430= vs_base[0];
	vs_top=sup;
	goto T831;
	goto T825;
T825:;
	V425= Cnil;
	goto T826;
T826:;
	V426= Cnil;
	goto T827;
T827:;
	V427= Cnil;
	goto T828;
T828:;
	V428= Cnil;
	goto T829;
T829:;
	V429= Cnil;
	goto T830;
T830:;
	V430= Cnil;
	goto T831;
T831:;
	if(((V426))==Cnil){
	goto T832;}
	{register object x= (V423),V431= (VV[91]->s.s_dbind);
	while(V431!=Cnil)
	if(x==(V431->c.c_car)){
	goto T832;
	}else V431=V431->c.c_cdr;}
	base[2]= make_cons((V423),(VV[91]->s.s_dbind));
	bds_bind(VV[91],base[2]);
	if((V428)==Cnil){
	goto T839;}
	bds_unwind1;
	goto T832;
	goto T839;
T839:;
	if(((V429))==Cnil){
	goto T842;}
	if(((V430))==Cnil){
	goto T842;}
	{object V433;
	object V434;
	object V435;
	base[3]= (V423);
	base[4]= (V429);
	base[5]= (V427);
	base[6]= (V430);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk232)();
	if(vs_base>=vs_top){vs_top=sup;goto T851;}
	V433= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T852;}
	V434= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T853;}
	V435= vs_base[0];
	vs_top=sup;
	goto T854;
	goto T851;
T851:;
	V433= Cnil;
	goto T852;
T852:;
	V434= Cnil;
	goto T853;
T853:;
	V435= Cnil;
	goto T854;
T854:;
	V436= (VFUN_NARGS=4,(*(LnkLI49))((V423),(V433),(V434),(V435)));
	bds_unwind1;
	goto T832;}
	goto T842;
T842:;
	if(((*(LnkLI183))((V423)))==Cnil){
	goto T856;}
	{object V437;
	object V438;
	object V439;
	base[3]= (V423);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk184)();
	if(vs_base>=vs_top){vs_top=sup;goto T860;}
	V437= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T861;}
	V438= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T862;}
	V439= vs_base[0];
	vs_top=sup;
	goto T863;
	goto T860;
T860:;
	V437= Cnil;
	goto T861;
T861:;
	V438= Cnil;
	goto T862;
T862:;
	V439= Cnil;
	goto T863;
T863:;
	V440= (VFUN_NARGS=4,(*(LnkLI49))((V423),(V437),(V438),(V439)));
	bds_unwind1;
	goto T832;}
	goto T856;
T856:;
	{object V441;
	object V442;
	object V443;
	base[3]= (V423);
	base[5]= (V423);
	base[6]= (V424);
	base[7]= VV[12];
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk85)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk193)();
	if(vs_base>=vs_top){vs_top=sup;goto T870;}
	V441= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T871;}
	V442= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T872;}
	V443= vs_base[0];
	vs_top=sup;
	goto T873;
	goto T870;
T870:;
	V441= Cnil;
	goto T871;
T871:;
	V442= Cnil;
	goto T872;
T872:;
	V443= Cnil;
	goto T873;
T873:;
	V444= (VFUN_NARGS=4,(*(LnkLI49))((V423),(V441),(V442),(V443)));
	bds_unwind1;}
	goto T832;
T832:;
	base[2]= (V425);
	base[3]= (V424);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk94)();
	return;}
	}
}
/*	local entry for function MAKE-FINAL-DFUN	*/

static object LI76(object V445,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB74 VMS74 VMV74
	{object V446;
	object V447;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V446= V445;
	narg = narg - 1;
	if (narg <= 0) goto T876;
	else {
	V447= first;}
	--narg; goto T877;
	goto T876;
T876:;
	V447= Cnil;
	goto T877;
T877:;
	{object V448;
	object V449;
	object V450;
	base[0]= (V446);
	base[1]= (V447);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk226)();
	if(vs_base>=vs_top){vs_top=sup;goto T882;}
	V448= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T883;}
	V449= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T884;}
	V450= vs_base[0];
	vs_top=sup;
	goto T885;
	goto T882;
T882:;
	V448= Cnil;
	goto T883;
T883:;
	V449= Cnil;
	goto T884;
T884:;
	V450= Cnil;
	goto T885;
T885:;
	{object V451 = (VFUN_NARGS=4,(*(LnkLI230))((V446),(V448),(V449),(V450)));
	VMR74(V451)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for WITH-HASH-TABLE	*/

static void L77()
{register object *base=vs_base;
	register object *sup=base+VM75; VC75
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V452=base[0]->c.c_cdr;
	if(endp(V452))invalid_macro_call();
	{object V453= (V452->c.c_car);
	if(endp(V453))invalid_macro_call();
	base[2]= (V453->c.c_car);
	V453=V453->c.c_cdr;
	if(endp(V453))invalid_macro_call();
	base[3]= (V453->c.c_car);
	V453=V453->c.c_cdr;
	if(!endp(V453))invalid_macro_call();}
	V452=V452->c.c_cdr;
	base[4]= V452;}
	V454= list(2,VV[106],list(3,VV[107],list(2,VV[25],base[3]),VV[108]));
	V455= list(2,/* INLINE-ARGS */V454,list(2,base[2],list(4,VV[109],VV[110],VV[111],list(3,VV[112],VV[113],list(2,VV[25],base[3])))));
	V456= make_cons(VV[21],base[4]);
	V457= list(2,VV[115],base[2]);
	base[5]= list(3,VV[105],/* INLINE-ARGS */V455,list(4,VV[114],/* INLINE-ARGS */V456,/* INLINE-ARGS */V457,list(3,VV[116],base[2],VV[117])));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for WITH-EQ-HASH-TABLE	*/

static void L78()
{register object *base=vs_base;
	register object *sup=base+VM76; VC76
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V458=base[0]->c.c_cdr;
	if(endp(V458))invalid_macro_call();
	{object V459= (V458->c.c_car);
	if(endp(V459))invalid_macro_call();
	base[2]= (V459->c.c_car);
	V459=V459->c.c_cdr;
	if(!endp(V459))invalid_macro_call();}
	V458=V458->c.c_cdr;
	base[3]= V458;}
	base[4]= listA(3,VV[118],list(2,base[2],VV[119]),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function FINAL-ACCESSOR-DFUN-TYPE	*/

static object LI79(V461)

register object V461;
{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V462;
	if(((*(LnkLI196))((V461)))==Cnil){
	goto T888;}
	if(type_of(V461)==t_structure){
	goto T894;}
	goto T892;
	goto T894;
T894:;
	if(!(((V461)->str.str_def)==(VV[120]))){
	goto T892;}
	V463= STREF(object,(V461),4);
	goto T890;
	goto T892;
T892:;{object V465;
	V465= (VV[65]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V461);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V466= vs_base[0];
	if(!((V465)==(CMPcar(V466)))){
	goto T897;}}
	V463= CMPcar(((V461))->cc.cc_turbo[12]);
	goto T890;
	goto T897;
T897:;
	base[0]= VV[66];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V463= vs_base[0];
	goto T890;
T890:;
	V462= (V463)->v.v_self[fix((VV[67]->s.s_dbind))];
	goto T886;
	goto T888;
T888:;
	base[0]= (V461);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V462= vs_base[0];
	goto T886;
T886:;
	base[0]= VV[233];
	base[1]= (V462);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk188)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T905;}
	{object V467 = VV[51];
	VMR77(V467)}
	goto T905;
T905:;
	base[0]= VV[234];
	base[1]= (V462);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk188)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T910;}
	{object V468 = VV[123];
	VMR77(V468)}
	goto T910;
T910:;
	{object V469 = Cnil;
	VMR77(V469)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-FINAL-ACCESSOR-DFUN	*/

static void L80()
{register object *base=vs_base;
	register object *sup=base+VM78; VC78
	vs_check;
	{register object V470;
	register object V471;
	object V472;
	object V473;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V470=(base[0]);
	V471=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T914;}
	V472=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T915;}
	V473=(base[3]);
	vs_top=sup;
	goto T916;
	goto T914;
T914:;
	V472= Cnil;
	goto T915;
T915:;
	V473= Cnil;
	goto T916;
T916:;
	{object V474;
	object V475;
	{register object x= VV[119],V476= (VV[108]->s.s_dbind);
	while(V476!=Cnil)
	if(eql(x,V476->c.c_car->c.c_car) &&V476->c.c_car != Cnil){
	V474= (V476->c.c_car);
	goto T919;
	}else V476=V476->c.c_cdr;
	V474= Cnil;}
	goto T919;
T919:;
	if((CMPcdr((V474)))==Cnil){
	goto T922;}
	{object V478;
	V478= CMPcdr(CMPcdr(V474));
	{object V479;
	V479= CMPcar(CMPcdr(V474));
	(V474)->c.c_cdr = (V478);
	V475= (V479);
	goto T920;}}
	goto T922;
T922:;
	base[6]= VV[113];
	base[7]= VV[119];
	vs_top=(vs_base=base+6)+2;
	Lmake_hash_table();
	vs_top=sup;
	V475= vs_base[0];
	goto T920;
T920:;
	{object V482;
	register object V483;
	object V484;
	object V485;
	object V486;
	object V487;
	base[6]= (V470);
	base[7]= (V471);
	base[8]= (V475);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk235)();
	if(vs_base>=vs_top){vs_top=sup;goto T935;}
	V482= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T936;}
	V483= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T937;}
	V484= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T938;}
	V485= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T939;}
	V486= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T940;}
	V487= vs_base[0];
	vs_top=sup;
	goto T941;
	goto T935;
T935:;
	V482= Cnil;
	goto T936;
T936:;
	V483= Cnil;
	goto T937;
T937:;
	V484= Cnil;
	goto T938;
T938:;
	V485= Cnil;
	goto T939;
T939:;
	V486= Cnil;
	goto T940;
T940:;
	V487= Cnil;
	goto T941;
T941:;
	if(((V482))==Cnil){
	goto T943;}
	if(!(number_compare((V486),small_fixnum(1))==0)){
	goto T946;}
	{object V488;
	base[6]= (V484);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V488= vs_base[0];
	base[6]= (V470);
	base[7]= (V471);
	base[8]= (V488);
	base[9]= (V483);
	vs_top=(vs_base=base+6)+4;
	(void) (*Lnk232)();
	goto T930;}
	goto T946;
T946:;
	if(!(number_compare((V486),small_fixnum(2))==0)){
	goto T955;}
	if(type_of((V483))==t_fixnum||type_of((V483))==t_bignum){
	goto T954;}
	if(!(type_of((V483))==t_cons)){
	goto T955;}
	goto T954;
T954:;
	{object V489;
	object V490;
	base[6]= (V484);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V489= vs_base[0];
	base[6]= (V485);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V490= vs_base[0];
	base[6]= (V470);
	base[7]= (V471);
	base[8]= (V489);
	base[9]= (V490);
	base[10]= (V483);
	vs_top=(vs_base=base+6)+5;
	(void) (*Lnk237)();
	goto T930;}
	goto T955;
T955:;
	if(type_of((V483))==t_fixnum||type_of((V483))==t_bignum){
	goto T970;}
	if(!(type_of((V483))==t_cons)){
	goto T971;}
	goto T970;
T970:;
	base[6]= (V470);
	base[7]= (V471);
	base[8]= (V483);
	base[9]= (V482);
	vs_top=(vs_base=base+6)+4;
	(void) (*Lnk238)();
	goto T930;
	goto T971;
T971:;
	if(((V487))==Cnil){
	goto T980;}
	base[6]= (V470);
	base[7]= (V471);
	base[8]= (V482);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk239)();
	goto T930;
	goto T980;
T980:;
	base[6]= (V470);
	base[7]= (V472);
	base[8]= (V473);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk240)();
	goto T930;
	goto T943;
T943:;
	base[6]= (V470);
	base[7]= (V472);
	base[8]= (V473);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk240)();}
	goto T930;
T930:;
	{object *V481=vs_top;object *V480=vs_base; vs_base=V481;
	{register object *base0=base;
	{register object *base=V481;
	register object *sup=vs_base+VM79;
	base0[0]=base0[0];
	base[0]=base[0];
	vs_check;
	vs_top=sup;
	base[0]= (V475);
	vs_top=(vs_base=base+0)+1;
	Lclrhash();
	vs_top=sup;
	}}
	{register object *base0=base;
	{register object *base=V481;
	register object *sup=vs_base+VM80;
	base0[0]=base0[0];
	base[0]=base[0];
	vs_check;
	vs_top=sup;
	{object V493;
	V493= make_cons(V475,CMPcdr(V474));
	(V474)->c.c_cdr = (V493);}
	}}
	vs_base=V480;vs_top=V481;}
	return;}
	}
}
/*	function definition for MAKE-FINAL-DFUN-INTERNAL	*/

static void L81()
{register object *base=vs_base;
	register object *sup=base+VM81; VC81
	vs_check;
	bds_check;
	{register object V494;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T996;}
	V494=(base[1]);
	vs_top=sup;
	goto T997;
	goto T996;
T996:;
	V494= Cnil;
	goto T997;
T997:;
	{register object V495;
	object V496;
	register object V497;
	object V498;
	base[4]= (base[0]->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V495= vs_base[0];
	V496= Cnil;
	V497= (VV[124]->s.s_dbind);
	bds_bind(VV[124],Cnil);
	base[3]=MMcons(Cnil,base[0]);
	V498= Cnil;
	if(((V495))!=Cnil){
	goto T1002;}
	base[4]= 
	make_cclosure_new(LC158,Cnil,base[3],Cdata);
	base[5]= Cnil;
	base[6]= (*(LnkLI241))();
	vs_top=(vs_base=base+4)+3;
	bds_unwind1;
	return;
	goto T1002;
T1002:;
	V496= (*(LnkLI227))((base[0]->c.c_car));
	if(((V496))==Cnil){
	goto T1008;}
	base[4]= (base[0]->c.c_car);
	base[5]= (V496);
	base[6]= (V494);
	base[7]= (V497);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk229)();
	bds_unwind1;
	return;
	goto T1008;
T1008:;
	base[4]= 
	make_cclosure_new(LC159,Cnil,base[3],Cdata);
	base[6]= CMPcar((V495));
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	(base[3]->c.c_car)= vs_base[0];
	base[5]= (base[3]->c.c_car);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk188)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1017;}
	base[4]= 
	make_cclosure_new(LC160,Cnil,base[3],Cdata);
	base[5]= (V495);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk188)();
	vs_top=sup;
	V498= vs_base[0];
	if(((V498))!=Cnil){
	goto T1016;}
	goto T1017;
T1017:;
	if(((VFUN_NARGS=1,(*(LnkLI201))((base[0]->c.c_car))))==Cnil){
	goto T1016;}
	base[4]= (base[0]->c.c_car);
	base[5]= (V494);
	base[6]= (V497);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk243)();
	bds_unwind1;
	return;
	goto T1016;
T1016:;
	if(((VFUN_NARGS=1,(*(LnkLI185))((base[0]->c.c_car))))==Cnil){
	goto T1033;}
	base[4]= (base[0]->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk244)();
	bds_unwind1;
	return;
	goto T1033;
T1033:;
	if(((V498))==Cnil){
	goto T1037;}
	if(((*(LnkLI183))((base[0]->c.c_car)))!=Cnil){
	goto T1037;}
	{object V499;
	base[4]= (base[0]->c.c_car);
	base[5]= (V495);
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk245)();
	vs_top=sup;
	V499= vs_base[0];
	base[4]= (base[0]->c.c_car);
	base[5]= (V499);
	base[6]= (V494);
	base[7]= (V497);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk246)();
	bds_unwind1;
	return;}
	goto T1037;
T1037:;
	base[4]= (base[0]->c.c_car);
	base[5]= (V494);
	base[6]= (V497);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk240)();
	bds_unwind1;
	return;}
	}
}
/*	function definition for ACCESSOR-MISS	*/

static void L82()
{register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	bds_check;
	{object V500;
	register object V501;
	register object V502;
	check_arg(4);
	base[0]=MMcons(base[0],Cnil);
	V500=(base[1]);
	V501=(base[2]);
	V502=(base[3]);
	vs_top=sup;
	{object V503;
	object V504;
	register object V505;
	register object V506;
	object V507;
	object V508;
	base[8]= (V502);
	vs_top=(vs_base=base+8)+1;
	Ltype_of();
	vs_top=sup;
	V503= vs_base[0];
	V504= STREF(object,(V502),4);
	V505= Cnil;
	V506= Cnil;
	V507= Cnil;
	base[6]= Cnil;
	{object V509= (V504);
	if((V509!= VV[51]))goto T1059;
	V508= make_cons((V501),Cnil);
	goto T1058;
	goto T1059;
T1059:;
	if((V509!= VV[123]))goto T1060;
	V508= list(2,(V500),(V501));
	goto T1058;
	goto T1060;
T1060:;
	FEerror("The ECASE key value ~s is illegal.",1,V509);
	V508= Cnil;
	goto T1058;}
	goto T1058;
T1058:;
	{object V510;
	object V511;
	base[12]= (base[0]->c.c_car);
	base[13]= (V508);
	base[14]= VV[86];
	vs_top=(vs_base=base+12)+3;
	(void) (*Lnk85)();
	if(vs_base>=vs_top){vs_top=sup;goto T1065;}
	base[8]=MMcons(vs_base[0],base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1066;}
	V510= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1067;}
	base[9]= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1068;}
	V511= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1069;}
	base[10]=MMcons(vs_base[0],base[8]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1070;}
	base[11]=MMcons(vs_base[0],base[10]);
	vs_top=sup;
	goto T1071;
	goto T1065;
T1065:;
	base[8]=MMcons(Cnil,base[0]);
	goto T1066;
T1066:;
	V510= Cnil;
	goto T1067;
T1067:;
	base[9]= Cnil;
	goto T1068;
T1068:;
	V511= Cnil;
	goto T1069;
T1069:;
	base[10]=MMcons(Cnil,base[8]);
	goto T1070;
T1070:;
	base[11]=MMcons(Cnil,base[10]);
	goto T1071;
T1071:;
	if(((V510))==Cnil){
	goto T1072;}
	{register object x= (base[0]->c.c_car),V512= (VV[91]->s.s_dbind);
	while(V512!=Cnil)
	if(x==(V512->c.c_car)){
	goto T1072;
	}else V512=V512->c.c_cdr;}
	base[12]= make_cons((base[0]->c.c_car),(VV[91]->s.s_dbind));
	bds_bind(VV[91],base[12]);
	base[13]=make_cclosure_new(LC84,Cnil,base[11],Cdata);
	base[13]=MMcons(base[13],base[11]);
	base[14]=make_cclosure_new(LC85,Cnil,base[13],Cdata);
	base[14]=MMcons(base[14],base[13]);
	if(((base[10]->c.c_car))!=Cnil){
	goto T1079;}
	vs_base=vs_top;
	L86(base);
	vs_top=sup;
	bds_unwind1;
	goto T1072;
	goto T1079;
T1079:;
	{object V513;
	if((V511)!=Cnil){
	V513= (V511);
	goto T1081;}
	V513= (((base[11]->c.c_car))==Cnil?Ct:Cnil);
	goto T1081;
T1081:;
	if(((V513))==Cnil){
	goto T1083;}
	bds_unwind1;
	goto T1072;
	goto T1083;
T1083:;
	if(type_of(V501)==t_structure){
	goto T1089;}
	goto T1088;
	goto T1089;
T1089:;
	if(((V501)->str.str_def)==(VV[126])){
	goto T1086;}
	goto T1088;
T1088:;{object V515;
	V515= (VV[65]->s.s_dbind);
	base[15]= small_fixnum(14);
	base[16]= (V501);
	vs_top=(vs_base=base+15)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V516= vs_base[0];
	if((V515)==(CMPcar(V516))){
	goto T1086;}}
	vs_base=vs_top;
	L86(base);
	vs_top=sup;
	bds_unwind1;
	goto T1072;
	goto T1086;
T1086:;
	if(((((base[10]->c.c_car))==((V504))?Ct:Cnil))==Cnil){
	goto T1095;}
	if(!(type_of(base[9])==t_cons||(base[9])==Cnil)){
	goto T1096;}
	goto T1095;
T1095:;
	vs_base=vs_top;
	L86(base);
	vs_top=sup;
	bds_unwind1;
	goto T1072;
	goto T1096;
T1096:;
	{object V517= (V503);
	if((V517!= VV[40]))goto T1100;
	V505= STREF(object,(V502),8);
	V506= STREF(object,(V502),12);
	if(((V506))==(base[9])){
	bds_unwind1;
	goto T1072;}
	if(!(eql((base[11]->c.c_car),(V505)))){
	goto T1108;}
	base[15]= (base[11]->c.c_car);
	base[16]= (V506);
	base[17]= base[9];
	vs_top=(vs_base=base+15)+3;
	L83(base);
	vs_top=sup;
	bds_unwind1;
	goto T1072;
	goto T1108;
T1108:;
	vs_base=vs_top;
	L85(base);
	vs_top=sup;
	bds_unwind1;
	goto T1072;
	goto T1100;
T1100:;
	if((V517!= VV[42]))goto T1113;
	V505= STREF(object,(V502),8);
	V506= STREF(object,(V502),12);
	V507= STREF(object,(V502),16);
	if(((V506))==(base[9])){
	bds_unwind1;
	goto T1072;}
	if(((V507))==(base[9])){
	bds_unwind1;
	goto T1072;}
	if(!(eql((base[11]->c.c_car),(V505)))){
	goto T1125;}
	base[15]= (base[11]->c.c_car);
	vs_top=(vs_base=base+15)+1;
	L84(base);
	vs_top=sup;
	bds_unwind1;
	goto T1072;
	goto T1125;
T1125:;
	vs_base=vs_top;
	L85(base);
	vs_top=sup;
	bds_unwind1;
	goto T1072;
	goto T1113;
T1113:;
	if((V517!= VV[44]))goto T1128;
	V505= STREF(object,(V502),8);
	base[6]= STREF(object,(V502),0);
	if(!(eql((base[11]->c.c_car),(V505)))){
	goto T1134;}
	base[15]= 
	make_cclosure_new(LC161,Cnil,base[14],Cdata);
	vs_top=(vs_base=base+15)+1;
	L87(base);
	vs_top=sup;
	bds_unwind1;
	goto T1072;
	goto T1134;
T1134:;
	vs_base=vs_top;
	L85(base);
	vs_top=sup;
	bds_unwind1;
	goto T1072;
	goto T1128;
T1128:;
	if((V517!= VV[39]))goto T1137;
	base[6]= STREF(object,(V502),0);
	if(!(type_of((base[11]->c.c_car))==t_cons)){
	goto T1141;}
	vs_base=vs_top;
	L86(base);
	vs_top=sup;
	bds_unwind1;
	goto T1072;
	goto T1141;
T1141:;
	base[15]= (base[14]->c.c_car);
	vs_top=(vs_base=base+15)+1;
	L87(base);
	vs_top=sup;
	bds_unwind1;
	goto T1072;
	goto T1137;
T1137:;
	FEerror("The ECASE key value ~s is illegal.",1,V517);
	bds_unwind1;
	goto T1072;}}
	goto T1072;
T1072:;
	base[12]= (base[8]->c.c_car);
	base[13]= (V508);
	vs_top=(vs_base=base+12)+2;
	(void) (*Lnk94)();
	return;}}
	}
}
/*	function definition for CHECKING-MISS	*/

static void L88()
{register object *base=vs_base;
	register object *sup=base+VM83; VC83
	vs_check;
	bds_check;
	{register object V518;
	object V519;
	object V520;
	check_arg(3);
	V518=(base[0]);
	V519=(base[1]);
	V520=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V521;
	object V522;
	V521= STREF(object,(V520),4);
	V522= STREF(object,(V520),0);
	{object V523;
	object V524;
	object V525;
	object V526;
	base[3]= (V518);
	base[4]= (V519);
	base[5]= VV[12];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk85)();
	if(vs_base>=vs_top){vs_top=sup;goto T1152;}
	V523= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1153;}
	V524= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1154;}
	V525= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1155;}
	V526= vs_base[0];
	vs_top=sup;
	goto T1156;
	goto T1152;
T1152:;
	V523= Cnil;
	goto T1153;
T1153:;
	V524= Cnil;
	goto T1154;
T1154:;
	V525= Cnil;
	goto T1155;
T1155:;
	V526= Cnil;
	goto T1156;
T1156:;
	if(((V524))==Cnil){
	goto T1157;}
	{register object x= (V518),V527= (VV[91]->s.s_dbind);
	while(V527!=Cnil)
	if(x==(V527->c.c_car)){
	goto T1157;
	}else V527=V527->c.c_cdr;}
	base[3]= make_cons((V518),(VV[91]->s.s_dbind));
	bds_bind(VV[91],base[3]);
	if((V526)==Cnil){
	goto T1164;}
	bds_unwind1;
	goto T1157;
	goto T1164;
T1164:;
	if(!(((V521))==((V523)))){
	goto T1167;}
	{object V529;
	V529= (VFUN_NARGS=3,(*(LnkLI247))((V522),(V525),Cnil));
	if(((V529))==((V522))){
	bds_unwind1;
	goto T1157;}
	{object V530;
	object V531;
	object V532;
	base[4]= (V518);
	base[5]= (V523);
	base[6]= (V529);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk193)();
	if(vs_base>=vs_top){vs_top=sup;goto T1176;}
	V530= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1177;}
	V531= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1178;}
	V532= vs_base[0];
	vs_top=sup;
	goto T1179;
	goto T1176;
T1176:;
	V530= Cnil;
	goto T1177;
T1177:;
	V531= Cnil;
	goto T1178;
T1178:;
	V532= Cnil;
	goto T1179;
T1179:;
	V533= (VFUN_NARGS=4,(*(LnkLI49))((V518),(V530),(V531),(V532)));
	bds_unwind1;
	goto T1157;}}
	goto T1167;
T1167:;
	{object V534;
	object V535;
	object V536;
	base[4]= (V518);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk184)();
	if(vs_base>=vs_top){vs_top=sup;goto T1182;}
	V534= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1183;}
	V535= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1184;}
	V536= vs_base[0];
	vs_top=sup;
	goto T1185;
	goto T1182;
T1182:;
	V534= Cnil;
	goto T1183;
T1183:;
	V535= Cnil;
	goto T1184;
T1184:;
	V536= Cnil;
	goto T1185;
T1185:;
	V537= (VFUN_NARGS=4,(*(LnkLI49))((V518),(V534),(V535),(V536)));
	bds_unwind1;}
	goto T1157;
T1157:;
	base[3]= (V523);
	base[4]= (V519);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk94)();
	return;}}
	}
}
/*	function definition for CACHING-MISS	*/

static void L89()
{register object *base=vs_base;
	register object *sup=base+VM84; VC84
	vs_check;
	bds_check;
	{register object V538;
	object V539;
	object V540;
	check_arg(3);
	V538=(base[0]);
	V539=(base[1]);
	V540=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V541;
	V541= STREF(object,(V540),0);
	{object V542;
	object V543;
	object V544;
	object V545;
	base[3]= (V538);
	base[4]= (V539);
	base[5]= VV[13];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk85)();
	if(vs_base>=vs_top){vs_top=sup;goto T1193;}
	V542= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1194;}
	V543= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1195;}
	V544= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1196;}
	V545= vs_base[0];
	vs_top=sup;
	goto T1197;
	goto T1193;
T1193:;
	V542= Cnil;
	goto T1194;
T1194:;
	V543= Cnil;
	goto T1195;
T1195:;
	V544= Cnil;
	goto T1196;
T1196:;
	V545= Cnil;
	goto T1197;
T1197:;
	if(((V543))==Cnil){
	goto T1198;}
	{register object x= (V538),V546= (VV[91]->s.s_dbind);
	while(V546!=Cnil)
	if(x==(V546->c.c_car)){
	goto T1198;
	}else V546=V546->c.c_cdr;}
	base[3]= make_cons((V538),(VV[91]->s.s_dbind));
	bds_bind(VV[91],base[3]);
	if((V545)==Cnil){
	goto T1205;}
	bds_unwind1;
	goto T1198;
	goto T1205;
T1205:;
	{object V548;
	V548= (VFUN_NARGS=3,(*(LnkLI247))((V541),(V544),(V542)));
	if(((V548))==((V541))){
	bds_unwind1;
	goto T1198;}
	{object V549;
	object V550;
	object V551;
	base[4]= (V538);
	base[5]= (V548);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk184)();
	if(vs_base>=vs_top){vs_top=sup;goto T1213;}
	V549= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1214;}
	V550= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1215;}
	V551= vs_base[0];
	vs_top=sup;
	goto T1216;
	goto T1213;
T1213:;
	V549= Cnil;
	goto T1214;
T1214:;
	V550= Cnil;
	goto T1215;
T1215:;
	V551= Cnil;
	goto T1216;
T1216:;
	V552= (VFUN_NARGS=4,(*(LnkLI49))((V538),(V549),(V550),(V551)));
	bds_unwind1;}}
	goto T1198;
T1198:;
	base[3]= (V542);
	base[4]= (V539);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk94)();
	return;}}
	}
}
/*	function definition for CONSTANT-VALUE-MISS	*/

static void L90()
{register object *base=vs_base;
	register object *sup=base+VM85; VC85
	vs_check;
	bds_check;
	{register object V553;
	object V554;
	object V555;
	check_arg(3);
	V553=(base[0]);
	V554=(base[1]);
	V555=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V556;
	V556= STREF(object,(V555),0);
	{register object V557;
	object V558;
	object V559;
	object V560;
	base[3]= (V553);
	base[4]= (V554);
	base[5]= VV[13];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk85)();
	if(vs_base>=vs_top){vs_top=sup;goto T1224;}
	V557= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1225;}
	V558= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1226;}
	V559= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1227;}
	V560= vs_base[0];
	vs_top=sup;
	goto T1228;
	goto T1224;
T1224:;
	V557= Cnil;
	goto T1225;
T1225:;
	V558= Cnil;
	goto T1226;
T1226:;
	V559= Cnil;
	goto T1227;
T1227:;
	V560= Cnil;
	goto T1228;
T1228:;
	if(((V558))==Cnil){
	goto T1229;}
	{register object x= (V553),V561= (VV[91]->s.s_dbind);
	while(V561!=Cnil)
	if(x==(V561->c.c_car)){
	goto T1229;
	}else V561=V561->c.c_cdr;}
	base[3]= make_cons((V553),(VV[91]->s.s_dbind));
	bds_bind(VV[91],base[3]);
	if((V560)==Cnil){
	goto T1236;}
	bds_unwind1;
	goto T1229;
	goto T1236;
T1236:;
	{object V563;
	object V564;
	object V565;
	{register object V566;
	V566= (V557);
	base[7]= (V566);
	base[8]= VV[127];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk248)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1240;}
	V563= STREF(object,(V557),0);
	goto T1238;
	goto T1240;
T1240:;
	base[7]= (V566);
	base[8]= VV[128];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk248)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1245;}
	V563= STREF(object,(V557),0);
	goto T1238;
	goto T1245;
T1245:;
	V563= Cnil;}
	goto T1238;
T1238:;
	V564= (VFUN_NARGS=2,(*(LnkLI249))((V563),VV[74]));
	V565= (VFUN_NARGS=3,(*(LnkLI247))((V556),(V559),(V564)));
	if(((V565))==((V556))){
	bds_unwind1;
	goto T1229;}
	{object V567;
	object V568;
	object V569;
	base[7]= (V553);
	base[8]= (V565);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk202)();
	if(vs_base>=vs_top){vs_top=sup;goto T1256;}
	V567= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1257;}
	V568= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1258;}
	V569= vs_base[0];
	vs_top=sup;
	goto T1259;
	goto T1256;
T1256:;
	V567= Cnil;
	goto T1257;
T1257:;
	V568= Cnil;
	goto T1258;
T1258:;
	V569= Cnil;
	goto T1259;
T1259:;
	V570= (VFUN_NARGS=4,(*(LnkLI49))((V553),(V567),(V568),(V569)));
	bds_unwind1;}}
	goto T1229;
T1229:;
	base[3]= (V557);
	base[4]= (V554);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk94)();
	return;}}
	}
}
/*	function definition for CACHE-MISS-VALUES	*/

static void L91()
{register object *base=vs_base;
	register object *sup=base+VM86; VC86
	vs_check;
	{object V571;
	object V572;
	object V573;
	check_arg(3);
	V571=(base[0]);
	V572=(base[1]);
	V573=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((*(LnkLI196))((V571)))==Cnil){
	goto T1266;}
	if(type_of(V571)==t_structure){
	goto T1272;}
	goto T1270;
	goto T1272;
T1272:;
	if(!(((V571)->str.str_def)==(VV[129]))){
	goto T1270;}
	V574= STREF(object,(V571),4);
	goto T1268;
	goto T1270;
T1270:;{object V576;
	V576= (VV[65]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V571);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V577= vs_base[0];
	if(!((V576)==(CMPcar(V577)))){
	goto T1275;}}
	V574= CMPcar(((V571))->cc.cc_turbo[12]);
	goto T1268;
	goto T1275;
T1275:;
	base[3]= VV[66];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V574= vs_base[0];
	goto T1268;
T1268:;
	if(((V574)->v.v_self[fix((VV[67]->s.s_dbind))])!=Cnil){
	goto T1263;}
	goto T1264;
	goto T1266;
T1266:;
	base[3]= (V571);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1263;}
	goto T1264;
T1264:;
	base[3]=VV[250]->s.s_gfdef;
	base[4]= (V571);
	{object V578;
	V578= (V572);
	 vs_top=base+5;
	 while(V578!=Cnil)
	 {vs_push((V578)->c.c_car);V578=(V578)->c.c_cdr;}
	vs_base=base+4;}
	(void) (*Lnk250)(Lclptr250);
	return;
	goto T1263;
T1263:;
	{object V579;
	object V580;
	object V581;
	object V582;
	object V583;
	base[3]= (V571);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk187)();
	if(vs_base>=vs_top){vs_top=sup;goto T1286;}
	V579= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1287;}
	V580= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1288;}
	V581= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1289;}
	V582= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1290;}
	V583= vs_base[0];
	vs_top=sup;
	goto T1291;
	goto T1286;
T1286:;
	V579= Cnil;
	goto T1287;
T1287:;
	V580= Cnil;
	goto T1288;
T1288:;
	V581= Cnil;
	goto T1289;
T1289:;
	V582= Cnil;
	goto T1290;
T1290:;
	V583= Cnil;
	goto T1291;
T1291:;
	{register object V584;
	object V585;
	object V586;
	register object V587;
	register object V588;
	object V589;
	object V590;
	object V591;
	V584= (V572);
	V585= Cnil;
	V586= Cnil;
	V587= Cnil;
	V588= Cnil;
	V589= Cnil;
	V590= Cnil;
	V591= Cnil;
	{register object V592;
	object V593;
	V592= (V581);
	V593= CMPcar((V592));
	goto T1304;
T1304:;
	if(!(((V592))==Cnil)){
	goto T1305;}
	goto T1300;
	goto T1305;
T1305:;
	if(((V584))!=Cnil){
	goto T1309;}
	V586= Ct;
	goto T1300;
	goto T1309;
T1309:;
	{object V594;
	register object V595;
	register object V596;
	object V597;
	{object V598;
	V598= CMPcar((V584));
	V584= CMPcdr((V584));
	V594= (V598);}
	V595= Cnil;
	V596= (VV[125]->s.s_dbind);
	V597= Ct;
	if(((V593))==(Ct)){
	goto T1322;}
	V595= (*(LnkLI251))((V594));
	if(!((((((V595))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1327;}
	V585= Ct;
	V595= (*(LnkLI252))((V594));
	goto T1327;
T1327:;
	if(((V587))!=Cnil){
	goto T1335;}
	V587= (V595);
	goto T1333;
	goto T1335;
T1335:;
	if(type_of((V587))==t_cons){
	goto T1339;}
	V588= make_cons((V595),Cnil);
	V587= make_cons((V587),(V588));
	goto T1333;
	goto T1339;
T1339:;
	{object V599;
	V599= make_cons((V595),Cnil);
	(V588)->c.c_cdr = V599;
	V588= (V599);}
	goto T1333;
T1333:;
	V596= ((V595))->v.v_self[11];
	V597= list(2,VV[130],(V596));
	goto T1322;
T1322:;
	V589= make_cons(V595,(V589));
	V591= make_cons(V596,(V591));
	V590= make_cons(V597,(V590));}
	V592= CMPcdr((V592));
	V593= CMPcar((V592));
	goto T1304;}
	goto T1300;
T1300:;
	if(((V586))==Cnil){
	goto T1362;}
	base[3]= VV[131];
	base[4]= (V571);
	base[5]= CMPmake_fixnum((long)length((V581)));
	vs_top=(vs_base=base+3)+3;
	Lerror();
	return;
	goto T1362;
T1362:;
	{object V605;
	object V606;
	object V607;
	V605= nreverse((V589));
	V606= nreverse((V591));
	{object V608;
	object V609= (V606);
	if(V609==Cnil){
	V607= Cnil;
	goto T1369;}
	base[6]=V608=MMcons(Cnil,Cnil);
	goto T1370;
T1370:;
	(V608->c.c_car)= list(2,VV[130],(V609->c.c_car));
	if((V609=MMcdr(V609))==Cnil){
	V607= base[6];
	goto T1369;}
	V608=MMcdr(V608)=MMcons(Cnil,Cnil);
	goto T1370;}
	goto T1369;
T1369:;
	{object V611;
	object V612;
	object V613;
	object V614;
	base[6]= (V571);
	base[7]= (V583);
	base[8]= (V605);
	base[9]= (V606);
	base[10]= (V607);
	base[11]= (V573);
	vs_top=(vs_base=base+6)+6;
	(void) (*Lnk253)();
	if(vs_base>=vs_top){vs_top=sup;goto T1379;}
	V611= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1380;}
	V612= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1381;}
	V613= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1382;}
	V614= vs_base[0];
	vs_top=sup;
	goto T1383;
	goto T1379;
T1379:;
	V611= Cnil;
	goto T1380;
T1380:;
	V612= Cnil;
	goto T1381;
T1381:;
	V613= Cnil;
	goto T1382;
T1382:;
	V614= Cnil;
	goto T1383;
T1383:;
	base[6]= (V611);
	base[7]= (V612);
	base[8]= (V587);
	base[9]= (V585);
	base[10]= (V613);
	base[11]= (V614);
	vs_top=(vs_base=base+6)+6;
	return;}}}}
	}
}
/*	function definition for CACHE-MISS-VALUES-INTERNAL	*/

static void L92()
{register object *base=vs_base;
	register object *sup=base+VM87; VC87
	vs_check;
	{register object V615;
	object V616;
	object V617;
	object V618;
	object V619;
	object V620;
	check_arg(6);
	V615=(base[0]);
	V616=(base[1]);
	V617=(base[2]);
	V618=(base[3]);
	V619=(base[4]);
	V620=(base[5]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V621;
	object V622;
	object V623;
	V621= (((V620))==(VV[86])?Ct:Cnil);
	if(!(((V620))==(VV[13]))){
	goto T1392;}
	V622= Ct;
	goto T1391;
	goto T1392;
T1392:;
	V622= (((V620))==(VV[86])?Ct:Cnil);
	goto T1391;
T1391:;
	if(!(((V616))==Cnil)){
	goto T1395;}
	V623= Ct;
	goto T1394;
	goto T1395;
T1395:;
	V623= STREF(object,(V616),36);
	goto T1394;
T1394:;
	{register object V624;
	object V625;
	if(((V623))==Cnil){
	goto T1399;}
	base[9]= (V615);
	base[10]= (V619);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk254)();
	goto T1397;
	goto T1399;
T1399:;
	base[9]= (V615);
	base[10]= (V618);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk255)(Lclptr255);
	goto T1397;
T1397:;
	if(vs_base>=vs_top){vs_top=sup;goto T1405;}
	V624= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1406;}
	V625= vs_base[0];
	vs_top=sup;
	goto T1407;
	goto T1405;
T1405:;
	V624= Cnil;
	goto T1406;
T1406:;
	V625= Cnil;
	goto T1407;
T1407:;
	{object V626;
	if(((V623))!=Cnil){
	goto T1409;}
	if(((V625))==Cnil){
	goto T1410;}
	goto T1409;
T1409:;
	if((V622)==Cnil){
	V627= Cnil;
	goto T1414;}
	V627= (V617);
	goto T1414;
T1414:;
	V628= (VFUN_NARGS=6,(*(LnkLI216))((V615),(V624),(V619),Cnil,V627,(V625)));
	if((V622)==Cnil){
	V629= Cnil;
	goto T1415;}
	V629= (V617);
	goto T1415;
T1415:;
	V626= (
	V630 = /* INLINE-ARGS */V628,
	(type_of(V630) == t_sfun ?(*((V630)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V630)==t_vfun) ?
	(*((V630)->sfn.sfn_self)):
	(fcall.fun=(V630),fcalln))(Cnil,V629));
	goto T1408;
	goto T1410;
T1410:;
	V626= (*(LnkLI256))((V615));
	goto T1408;
T1408:;
	{object V631;
	object V632;
	if((V621)==Cnil){
	base[9]= Cnil;
	vs_top=(vs_base=base+9)+1;
	goto T1416;}
	if((V625)==Cnil){
	base[9]= Cnil;
	vs_top=(vs_base=base+9)+1;
	goto T1416;}
	if((V624)==Cnil){
	base[9]= Cnil;
	vs_top=(vs_base=base+9)+1;
	goto T1416;}
	base[9]= (V615);
	base[10]= (V616);
	base[11]= (V618);
	base[12]= (V624);
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk257)();
	goto T1416;
T1416:;
	if(vs_base>=vs_top){vs_top=sup;goto T1421;}
	V631= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1422;}
	V632= vs_base[0];
	vs_top=sup;
	goto T1423;
	goto T1421;
T1421:;
	V631= Cnil;
	goto T1422;
T1422:;
	V632= Cnil;
	goto T1423;
T1423:;
	if(!(type_of((V631))==t_fixnum||type_of((V631))==t_bignum)){
	goto T1426;}
	base[9]= (V631);
	goto T1424;
	goto T1426;
T1426:;
	base[9]= (V626);
	goto T1424;
T1424:;
	base[10]= (V624);
	base[11]= (V632);
	base[12]= (V631);
	vs_top=(vs_base=base+9)+4;
	return;}}}}
	}
}
/*	function definition for ACCESSOR-VALUES	*/

static void L93()
{register object *base=vs_base;
	register object *sup=base+VM88; VC88
	vs_check;
	{object V633;
	object V634;
	object V635;
	object V636;
	check_arg(4);
	V633=(base[0]);
	V634=(base[1]);
	V635=(base[2]);
	V636=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V637;
	object V638;
	V637= STREF(object,(V634),24);
	{object V639= (V637);
	if((V639!= VV[51]))goto T1433;
	V638= CMPcar((V635));
	goto T1432;
	goto T1433;
T1433:;
	if((V639!= VV[123]))goto T1434;
	V638= CMPcadr((V635));
	goto T1432;
	goto T1434;
T1434:;
	if((V639!= VV[258]))goto T1435;
	V638= CMPcar((V635));
	goto T1432;
	goto T1435;
T1435:;
	V638= Cnil;}
	goto T1432;
T1432:;
	base[6]= (V637);
	base[7]= (V638);
	base[8]= (V636);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk259)();
	return;}
	}
}
/*	function definition for ACCESSOR-VALUES1	*/

static void L94()
{register object *base=vs_base;
	register object *sup=base+VM89; VC89
	vs_check;
	{object V640;
	object V641;
	object V642;
	check_arg(3);
	V640=(base[0]);
	V641=(base[1]);
	V642=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V643;
	object V644;
	object V645;
	V643= list(2,VV[130],(V642));
	if(!(((V641))==(VV[123]))){
	goto T1442;}
	V644= list(2,Ct,(V643));
	goto T1440;
	goto T1442;
T1442:;
	V644= make_cons((V643),Cnil);
	goto T1440;
T1440:;
	base[6]= (V640);
	base[7]= (V644);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk254)();
	vs_top=sup;
	V645= vs_base[0];
	base[6]= (V641);
	base[7]= (V642);
	base[8]= (V645);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk259)();
	return;}
	}
}
/*	function definition for ACCESSOR-VALUES-INTERNAL	*/

static void L95()
{register object *base=vs_base;
	register object *sup=base+VM90; VC90
	vs_check;
	{object V646;
	object V647;
	object V648;
	check_arg(3);
	V646=(base[0]);
	V647=(base[1]);
	V648=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V649;
	register object V650;
	V649= (V648);
	V650= CMPcar((V649));
	goto T1454;
T1454:;
	if(!(((V649))==Cnil)){
	goto T1455;}
	goto T1450;
	goto T1455;
T1455:;
	if(!(type_of((V650))==t_cons)){
	goto T1463;}
	if(((*(LnkLI260))((V650)))==Cnil){
	goto T1459;}
	goto T1461;
	goto T1463;
T1463:;
	base[4]= (V650);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk261)(Lclptr261);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1459;}
	goto T1461;
T1461:;
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+4)+2;
	return;
	goto T1459;
T1459:;
	V649= CMPcdr((V649));
	V650= CMPcar((V649));
	goto T1454;}
	goto T1450;
T1450:;
	{object V651;
	object V652;
	register object V653;
	object V654;
	V651= CMPcar((V648));
	V652= (((((VV[72]->s.s_dbind))==(VV[73])?Ct:Cnil))==Cnil?Ct:Cnil);
	if(((V647))==Cnil){
	goto T1477;}
	if(!(type_of((V651))==t_cons)){
	goto T1480;}
	if(((*(LnkLI262))((V651)))!=Cnil){
	goto T1482;}
	V653= Cnil;
	goto T1475;
	goto T1482;
T1482:;
	base[7]= (V651);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk231)();
	vs_top=sup;
	V653= vs_base[0];
	goto T1475;
	goto T1480;
T1480:;{object V656;
	V656= (VV[132]->s.s_dbind);
	if(((V652))==Cnil){
	goto T1489;}
	V657= (*(LnkLI263))((V647));
	goto T1487;
	goto T1489;
T1489:;
	base[7]= (V647);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V657= vs_base[0];
	goto T1487;
T1487:;
	{register object x= V656,V655= V657;
	while(V655!=Cnil)
	if(eql(x,V655->c.c_car)){
	goto T1485;
	}else V655=V655->c.c_cdr;}}
	V653= Cnil;
	goto T1475;
	goto T1485;
T1485:;
	if(((V652))==Cnil){
	goto T1495;}{object V658;
	V658= (VV[133]->s.s_dbind);
	V659= (*(LnkLI265))((V651));
	if((((V658)==(/* INLINE-ARGS */V659)?Ct:Cnil))==Cnil){
	goto T1492;}
	goto T1493;}
	goto T1495;
T1495:;
	base[7]= (V651);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk266)(Lclptr266);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1492;}
	goto T1493;
T1493:;
	V653= Cnil;
	goto T1475;
	goto T1492;
T1492:;
	if(((V652))==Cnil){
	goto T1499;}
	V653= (*(LnkLI267))((V651));
	goto T1475;
	goto T1499;
T1499:;
	base[7]= (V651);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk268)(Lclptr268);
	vs_top=sup;
	V653= vs_base[0];
	goto T1475;
	goto T1477;
T1477:;
	V653= Cnil;
	goto T1475;
T1475:;
	if((V647)==Cnil){
	V654= Cnil;
	goto T1502;}
	if(((V652))==Cnil){
	goto T1504;}
	{register object V660;
	register object V661;
	V660= (*(LnkLI269))((V647));
	V661= CMPcar((V660));
	goto T1509;
T1509:;
	if(!(((V660))==Cnil)){
	goto T1510;}
	V654= Cnil;
	goto T1502;
	goto T1510;
T1510:;
	V662= (*(LnkLI270))((V661));
	if(!(eql((V653),/* INLINE-ARGS */V662))){
	goto T1514;}
	V654= (V661);
	goto T1502;
	goto T1514;
T1514:;
	V660= CMPcdr((V660));
	V661= CMPcar((V660));
	goto T1509;}
	goto T1504;
T1504:;
	V654= (*(LnkLI271))((V647),(V653));
	goto T1502;
T1502:;
	if(((V654))==Cnil){
	goto T1523;}
	if(((V652))!=Cnil){
	goto T1522;}
	base[7]= (V654);
	base[8]= (V646);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk272)(Lclptr272);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1523;}
	goto T1522;
T1522:;
	if(((V652))==Cnil){
	goto T1533;}
	base[7]= (*(LnkLI273))((V654));
	goto T1531;
	goto T1533;
T1533:;
	base[8]= (V654);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk274)(Lclptr274);
	vs_top=sup;
	base[7]= vs_base[0];
	goto T1531;
T1531:;
	base[8]= (V646);
	vs_top=(vs_base=base+7)+2;
	return;
	goto T1523;
T1523:;
	base[7]= Cnil;
	vs_top=(vs_base=base+7)+1;
	return;}
	}
}
/*	function definition for MAKE-ACCESSOR-TABLE	*/

static void L96()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM91; VC91
	vs_check;
	{VOL object V663;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V663=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T1537;}
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	goto T1538;
	goto T1537;
T1537:;
	base[2]= Cnil;
	base[2]=MMcons(base[2],base[1]);
	goto T1538;
T1538:;
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	if(((base[2]->c.c_car))!=Cnil){
	goto T1540;}
	base[4]= VV[113];
	base[5]= VV[119];
	vs_top=(vs_base=base+4)+2;
	Lmake_hash_table();
	vs_top=sup;
	(base[2]->c.c_car)= vs_base[0];
	goto T1540;
T1540:;
	{object V664;
	if(((*(LnkLI196))((V663)))==Cnil){
	goto T1548;}
	if(type_of(V663)==t_structure){
	goto T1554;}
	goto T1552;
	goto T1554;
T1554:;
	if(!(((V663)->str.str_def)==(VV[134]))){
	goto T1552;}
	V665= STREF(object,(V663),4);
	goto T1550;
	goto T1552;
T1552:;{object V667;
	V667= (VV[65]->s.s_dbind);
	base[10]= small_fixnum(14);
	base[11]= (V663);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V668= vs_base[0];
	if(!((V667)==(CMPcar(V668)))){
	goto T1557;}}
	V665= CMPcar(((V663))->cc.cc_turbo[12]);
	goto T1550;
	goto T1557;
T1557:;
	base[10]= VV[66];
	vs_top=(vs_base=base+10)+1;
	Lerror();
	vs_top=sup;
	V665= vs_base[0];
	goto T1550;
T1550:;
	V664= (V665)->v.v_self[fix((VV[67]->s.s_dbind))];
	goto T1546;
	goto T1548;
T1548:;
	base[10]= (V663);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V664= vs_base[0];
	goto T1546;
T1546:;
	base[6]= (((((VV[72]->s.s_dbind))==(VV[73])?Ct:Cnil))==Cnil?Ct:Cnil);
	base[4]=MMcons(Cnil,base[3]);
	base[5]=MMcons(Ct,base[4]);
	base[6]=MMcons(base[6],base[5]);
	base[7]=MMcons(Cnil,base[6]);
	base[8]=MMcons(Cnil,base[7]);
	base[9]=MMcons(small_fixnum(0),base[8]);
	{register object V669;
	register object V670;
	V669= (V664);
	V670= CMPcar((V669));
	goto T1569;
T1569:;
	if(!(((V669))==Cnil)){
	goto T1570;}
	goto T1565;
	goto T1570;
T1570:;
	{object V671;
	register object V672;
	object V673;
	if(!(type_of((V670))==t_cons)){
	goto T1577;}
	V671= (VFUN_NARGS=2,(*(LnkLI275))((V670),Ct));
	goto T1575;
	goto T1577;
T1577:;
	base[16]= (V670);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	V671= vs_base[0];
	goto T1575;
T1575:;
	if(!(((base[1]->c.c_car))==(VV[51]))){
	goto T1582;}
	base[12]= CMPcar((V671));
	goto T1580;
	goto T1582;
T1582:;
	base[12]= CMPcadr((V671));
	goto T1580;
T1580:;
	base[12]=MMcons(base[12],base[9]);
	if(((base[6]->c.c_car))==Cnil){
	goto T1586;}
	V672= (*(LnkLI263))((base[12]->c.c_car));
	goto T1584;
	goto T1586;
T1586:;
	base[16]= (base[12]->c.c_car);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk276)(Lclptr276);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1588;}
	V672= Cnil;
	goto T1584;
	goto T1588;
T1588:;
	base[16]= (base[12]->c.c_car);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V672= vs_base[0];
	goto T1584;
T1584:;
	{register object x= (VV[132]->s.s_dbind),V674= (V672);
	while(V674!=Cnil)
	if(eql(x,V674->c.c_car)){
	base[14]= V674;
	goto T1592;
	}else V674=V674->c.c_cdr;
	base[14]= Cnil;}
	goto T1592;
T1592:;
	base[14]=MMcons(base[14],base[12]);
	if(!(type_of((V670))==t_cons)){
	goto T1595;}
	if(((*(LnkLI262))((V670)))!=Cnil){
	goto T1597;}
	V673= Cnil;
	goto T1593;
	goto T1597;
T1597:;
	base[16]= (V670);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk231)();
	vs_top=sup;
	V673= vs_base[0];
	goto T1593;
	goto T1595;
T1595:;
	base[16]= (V670);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk268)(Lclptr268);
	vs_top=sup;
	V673= vs_base[0];
	goto T1593;
T1593:;
	if(((V672))==Cnil){
	goto T1602;}
	{register object x= (VV[135]->s.s_dbind),V675= (V672);
	while(V675!=Cnil)
	if(eql(x,V675->c.c_car)){
	goto T1605;
	}else V675=V675->c.c_cdr;
	goto T1601;}
	goto T1605;
T1605:;
	goto T1602;
T1602:;
	frs_pop();
	base[16]= Cnil;
	vs_top=(vs_base=base+16)+1;
	return;
	goto T1601;
T1601:;
	base[16]= 
	make_cclosure_new(LC162,Cnil,base[14],Cdata);
	base[18]= (V673);
	base[19]= (VV[136]->s.s_dbind);
	vs_top=(vs_base=base+18)+2;
	Lgethash();
	vs_top=sup;
	base[17]= vs_base[0];
	vs_top=(vs_base=base+16)+2;
	Lmaphash();
	vs_top=sup;}
	V669= CMPcdr((V669));
	V670= CMPcar((V669));
	goto T1569;}
	goto T1565;
T1565:;
	base[10]= 
	make_cclosure_new(LC163,Cnil,base[9],Cdata);
	base[11]= (base[2]->c.c_car);
	vs_top=(vs_base=base+10)+2;
	Lmaphash();
	vs_top=sup;
	base[10]= (base[2]->c.c_car);
	base[11]= (base[4]->c.c_car);
	base[12]= (base[7]->c.c_car);
	base[13]= (base[8]->c.c_car);
	base[14]= (base[9]->c.c_car);
	base[15]= (base[5]->c.c_car);
	vs_top=(vs_base=base+10)+6;
	frs_pop();
	return;}
	}
	}
}
/*	function definition for COMPUTE-APPLICABLE-METHODS-USING-TYPES	*/

static void L97()
{register object *base=vs_base;
	register object *sup=base+VM92; VC92
	vs_check;
	{object V676;
	object V677;
	check_arg(2);
	V676=(base[0]);
	V677=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V678;
	object V679;
	V678= Ct;
	V679= Cnil;
	{register object V680;
	register object V681;
	if(((*(LnkLI196))((V676)))==Cnil){
	goto T1627;}
	if(type_of(V676)==t_structure){
	goto T1633;}
	goto T1631;
	goto T1633;
T1633:;
	if(!(((V676)->str.str_def)==(VV[138]))){
	goto T1631;}
	V682= STREF(object,(V676),4);
	goto T1629;
	goto T1631;
T1631:;{object V684;
	V684= (VV[65]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V676);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V685= vs_base[0];
	if(!((V684)==(CMPcar(V685)))){
	goto T1636;}}
	V682= CMPcar(((V676))->cc.cc_turbo[12]);
	goto T1629;
	goto T1636;
T1636:;
	base[4]= VV[66];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V682= vs_base[0];
	goto T1629;
T1629:;
	V680= (V682)->v.v_self[fix((VV[67]->s.s_dbind))];
	goto T1625;
	goto T1627;
T1627:;
	base[4]= (V676);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V680= vs_base[0];
	goto T1625;
T1625:;
	V681= CMPcar((V680));
	goto T1645;
T1645:;
	if(!(((V680))==Cnil)){
	goto T1646;}
	goto T1624;
	goto T1646;
T1646:;
	{object V686;
	register object V687;
	register object V688;
	register object V689;
	if(!(type_of((V681))==t_cons)){
	goto T1653;}
	V686= (VFUN_NARGS=2,(*(LnkLI275))((V681),Ct));
	goto T1651;
	goto T1653;
T1653:;
	base[4]= (V681);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	V686= vs_base[0];
	goto T1651;
T1651:;
	V687= (V677);
	V688= Ct;
	V689= Ct;
	{register object V690;
	register object V691;
	V690= (V686);
	V691= CMPcar((V690));
	goto T1660;
T1660:;
	if(!(((V690))==Cnil)){
	goto T1661;}
	goto T1656;
	goto T1661;
T1661:;
	{object V692;
	object V693;
	base[5]= (V691);
	{object V694;
	V694= CMPcar((V687));
	V687= CMPcdr((V687));
	base[6]= (V694);}
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk146)();
	if(vs_base>=vs_top){vs_top=sup;goto T1672;}
	V692= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1673;}
	V693= vs_base[0];
	vs_top=sup;
	goto T1674;
	goto T1672;
T1672:;
	V692= Cnil;
	goto T1673;
T1673:;
	V693= Cnil;
	goto T1674;
T1674:;
	if(((V692))!=Cnil){
	goto T1675;}
	V689= Cnil;
	goto T1675;
T1675:;
	if(((V693))!=Cnil){
	goto T1665;}
	V688= Cnil;
	goto T1656;}
	goto T1665;
T1665:;
	V690= CMPcdr((V690));
	V691= CMPcar((V690));
	goto T1660;}
	goto T1656;
T1656:;
	if(((V688))==Cnil){
	goto T1650;}
	if(((V689))!=Cnil){
	goto T1690;}
	V678= Cnil;
	goto T1690;
T1690:;
	V679= make_cons(V681,(V679));}
	goto T1650;
T1650:;
	V680= CMPcdr((V680));
	V681= CMPcar((V680));
	goto T1645;}
	goto T1624;
T1624:;
	{object V696;
	if(((*(LnkLI196))((V676)))==Cnil){
	goto T1703;}
	if(type_of(V676)==t_structure){
	goto T1709;}
	goto T1707;
	goto T1709;
T1709:;
	if(!(((V676)->str.str_def)==(VV[139]))){
	goto T1707;}
	V698= STREF(object,(V676),4);
	goto T1705;
	goto T1707;
T1707:;{object V700;
	V700= (VV[65]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V676);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V701= vs_base[0];
	if(!((V700)==(CMPcar(V701)))){
	goto T1712;}}
	V698= CMPcar(((V676))->cc.cc_turbo[12]);
	goto T1705;
	goto T1712;
T1712:;
	base[2]= VV[66];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V698= vs_base[0];
	goto T1705;
T1705:;
	V697= (V698)->v.v_self[fix((VV[97]->s.s_dbind))];
	goto T1701;
	goto T1703;
T1703:;
	base[2]= (V676);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk161)(Lclptr161);
	vs_top=sup;
	V697= vs_base[0];
	goto T1701;
T1701:;
	V696= STREF(object,V697,4);
	V702= nreverse((V679));
	base[2]= (*(LnkLI277))((V696),/* INLINE-ARGS */V702,(V677));
	base[3]= (V678);
	vs_top=(vs_base=base+2)+2;
	return;}}
	}
}
/*	local entry for function SORT-APPLICABLE-METHODS	*/

static object LI99(V706,V707,V708)

object V706;object V707;object V708;
{	 VMB93 VMS93 VMV93
	goto TTL;
TTL:;
	base[0]=MMcons((V708),Cnil);
	V709= 
	make_cclosure_new(LC164,Cnil,base[0],Cdata);
	{object V710 = (*(LnkLI278))((V707),(V706),V709);
	VMR93(V710)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SORT-METHODS	*/

static object LI102(V714,V715,V716)

object V714;object V715;object V716;
{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;
	base[0]=MMcons((V716),Cnil);
	base[1]=MMcons((V715),base[0]);
	base[2]=make_cclosure_new(LC103,Cnil,base[1],Cdata);
	base[2]=MMcons(base[2],base[1]);
	base[3]= (V714);
	base[4]= (base[2]->c.c_car);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk279)();
	vs_top=sup;
	{object V717 = vs_base[0];
	VMR94(V717)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for ORDER-SPECIALIZERS	*/

static void L104()
{register object *base=vs_base;
	register object *sup=base+VM95; VC95
	vs_check;
	{register object V718;
	register object V719;
	object V720;
	object V721;
	check_arg(4);
	V718=(base[0]);
	V719=(base[1]);
	V720=(base[2]);
	V721=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V722;
	register object V723;
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T1726;}
	base[4]= (V718);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V722= vs_base[0];
	goto T1724;
	goto T1726;
T1726:;
	if(type_of(V718)==t_structure){
	goto T1733;}
	goto T1731;
	goto T1733;
T1733:;
	if(!(((V718)->str.str_def)==(VV[140]))){
	goto T1731;}
	V724= STREF(object,(V718),4);
	goto T1729;
	goto T1731;
T1731:;{object V726;
	V726= (VV[65]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V718);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V727= vs_base[0];
	if(!((V726)==(CMPcar(V727)))){
	goto T1736;}}
	V724= CMPcar(((V718))->cc.cc_turbo[12]);
	goto T1729;
	goto T1736;
T1736:;
	base[4]= VV[66];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V724= vs_base[0];
	goto T1729;
T1729:;
	V728= (*(LnkLI281))(VV[141],VV[142]);
	V722= (V724)->v.v_self[fix(/* INLINE-ARGS */V728)];
	goto T1724;
T1724:;
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T1744;}
	base[4]= (V719);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V723= vs_base[0];
	goto T1742;
	goto T1744;
T1744:;
	if(type_of(V719)==t_structure){
	goto T1751;}
	goto T1749;
	goto T1751;
T1751:;
	if(!(((V719)->str.str_def)==(VV[143]))){
	goto T1749;}
	V729= STREF(object,(V719),4);
	goto T1747;
	goto T1749;
T1749:;{object V731;
	V731= (VV[65]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V719);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V732= vs_base[0];
	if(!((V731)==(CMPcar(V732)))){
	goto T1754;}}
	V729= CMPcar(((V719))->cc.cc_turbo[12]);
	goto T1747;
	goto T1754;
T1754:;
	base[4]= VV[66];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V729= vs_base[0];
	goto T1747;
T1747:;
	V733= (*(LnkLI281))(VV[141],VV[142]);
	V723= (V729)->v.v_self[fix(/* INLINE-ARGS */V733)];
	goto T1742;
T1742:;
	if(!(((V718))==((V719)))){
	goto T1761;}
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1761;
T1761:;
	if(!(type_of((V722))!=t_cons)){
	goto T1764;}
	base[4]= (V719);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1764;
T1764:;
	if(!(type_of((V723))!=t_cons)){
	goto T1767;}
	base[4]= (V718);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1767;
T1767:;
	{object V734= CMPcar((V722));
	if((V734!= VV[10]))goto T1769;
	{object V735= CMPcar((V723));
	if((V735!= VV[10]))goto T1770;
	base[4]= (V718);
	base[5]= (V719);
	base[6]= (V720);
	vs_top=(vs_base=base+4)+3;
	{object _funobj = (V721);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1770;
T1770:;
	base[4]= (V719);
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1769;
T1769:;
	if((V734!= VV[282]))goto T1774;
	{object V736= CMPcar((V723));
	if((V736!= VV[10]))goto T1775;
	base[4]= (V718);
	base[5]= (V719);
	base[6]= (V720);
	vs_top=(vs_base=base+4)+3;
	{object _funobj = (V721);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1775;
T1775:;
	base[4]= (V719);
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1774;
T1774:;
	if((V734!= VV[130]))goto T1779;
	{object V737= CMPcar((V723));
	if((V737!= VV[147]))goto T1780;
	base[4]= (V719);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1780;
T1780:;
	if((V737!= VV[130]))goto T1781;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1781;
T1781:;
	if((V737!= VV[10]))goto T1782;
	base[4]= (V722);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1782;
T1782:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1779;
T1779:;
	if((V734!= VV[147]))goto T1783;
	{object V738= CMPcar((V723));
	if((V738!= VV[147]))goto T1784;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1784;
T1784:;
	base[4]= (V718);
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1783;
T1783:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}}
	}
}
/*	local entry for function MAP-ALL-ORDERS	*/

static object LI105(V742,V743,V744)

object V742;object V743;object V744;
{	 VMB96 VMS96 VMV96
	goto TTL;
TTL:;
	base[0]=MMcons(Cnil,Cnil);
	base[1]=make_cclosure_new(LC106,Cnil,base[0],Cdata);
	base[1]=MMcons(base[1],base[0]);
	goto T1786;
T1786:;
	V745= (base[1]->c.c_car);
	V746= (*(LnkLI278))((V742),(V743),V745);
	(void)((
	(type_of((V744)) == t_sfun ?(*(((V744))->sfn.sfn_self)):
	(fcall.argd=1,type_of((V744))==t_vfun) ?
	(*(((V744))->sfn.sfn_self)):
	(fcall.fun=((V744)),fcalln))(/* INLINE-ARGS */V746)));
	{register object V747;
	register object V748;
	V747= (base[0]->c.c_car);
	V748= CMPcar((V747));
	goto T1795;
T1795:;
	if(!(((V747))==Cnil)){
	goto T1796;}
	goto T1791;
	goto T1796;
T1796:;
	if((CMPcaddr((V748)))!=Cnil){
	goto T1800;}
	{register object V749;
	register object V750;
	register object V751;
	register object V752;
	V749= (V748);
	V750= (V748);
	V751= CMPcadr((V750));
	V752= CMPcar((V749));
	((V749))->c.c_car = (V751);
	(CMPcdr((V750)))->c.c_car = (V752);
	(void)(CMPcdr((V750)));}
	{register object V754;
	V754= Ct;
	(CMPcddr(V748))->c.c_car = (V754);
	(void)(CMPcddr(V748));
	if(((V754))!=Cnil){
	goto T1787;}
	goto T1791;}
	goto T1800;
T1800:;
	V747= CMPcdr((V747));
	V748= CMPcar((V747));
	goto T1795;}
	goto T1791;
T1791:;
	{object V755 = Cnil;
	VMR96(V755)}
	goto T1787;
T1787:;
	goto T1786;
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLASS-MIGHT-PRECEDE-P	*/

static object LI107(V758,V759)

object V758;object V759;
{	 VMB97 VMS97 VMV97
	goto TTL;
TTL:;
	if(((VV[144]->s.s_dbind))!=Cnil){
	goto T1821;}
	base[0]= (V759);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V762= vs_base[0];
	{register object x= (V758),V761= CMPcdr(V762);
	while(V761!=Cnil)
	if(eql(x,V761->c.c_car)){
	V760= V761;
	goto T1823;
	}else V761=V761->c.c_cdr;
	V760= Cnil;}
	goto T1823;
T1823:;
	{object V763 = ((V760)==Cnil?Ct:Cnil);
	VMR97(V763)}
	goto T1821;
T1821:;
	{object V764 = (*(LnkLI283))((V758),(V759));
	VMR97(V764)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-PRECEDENCE	*/

static object LI108(V768,V769,V770)

object V768;register object V769;object V770;
{	 VMB98 VMS98 VMV98
	goto TTL;
TTL:;
	if(((V770))!=Cnil){
	goto T1827;}
	{register object V771;
	V771= Cnil;
	{register long V772;
	register long V773;
	V772= fix((V769));
	V773= 0;
	goto T1832;
T1832:;
	if(!((V773)>=(V772))){
	goto T1833;}
	{object V774 = (V771);
	VMR98(V774)}
	goto T1833;
T1833:;
	{register object V775;
	V776= one_minus((V769));
	V777 = CMPmake_fixnum(V773);
	V775= number_minus(/* INLINE-ARGS */V776,V777);
	V771= make_cons((V775),(V771));}
	V773= (long)(V773)+1;
	goto T1832;}}
	goto T1827;
T1827:;
	{object V778;
	object V779= (V770);
	if(V779==Cnil){
	{object V780 = Cnil;
	VMR98(V780)}}
	base[0]=V778=MMcons(Cnil,Cnil);
	goto T1842;
T1842:;
	base[1]= (V779->c.c_car);
	base[2]= (V768);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk284)();
	vs_top=sup;
	(V778->c.c_car)= vs_base[0];
	if((V779=MMcdr(V779))==Cnil){
	{object V782 = base[0];
	VMR98(V782)}}
	V778=MMcdr(V778)=MMcons(Cnil,Cnil);
	goto T1842;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SAUT-AND	*/

static void L109()
{register object *base=vs_base;
	register object *sup=base+VM99; VC99
	vs_check;
	{object V783;
	object V784;
	check_arg(2);
	V783=(base[0]);
	V784=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V785;
	register object V786;
	V785= Cnil;
	V786= Ct;
	{register object V787;
	register object V788;
	V787= CMPcdr((V784));
	V788= CMPcar((V787));
	goto T1850;
T1850:;
	if(!(((V787))==Cnil)){
	goto T1851;}
	goto T1846;
	goto T1851;
T1851:;
	{register object V789;
	register object V790;
	base[4]= (V783);
	base[5]= (V788);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk146)();
	if(vs_base>=vs_top){vs_top=sup;goto T1859;}
	V789= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1860;}
	V790= vs_base[0];
	vs_top=sup;
	goto T1861;
	goto T1859;
T1859:;
	V789= Cnil;
	goto T1860;
T1860:;
	V790= Cnil;
	goto T1861;
T1861:;
	if(((V789))==Cnil){
	goto T1862;}
	V785= Ct;
	goto T1846;
	goto T1862;
T1862:;
	if(((V790))!=Cnil){
	goto T1855;}
	V786= Cnil;
	goto T1846;}
	goto T1855;
T1855:;
	V787= CMPcdr((V787));
	V788= CMPcar((V787));
	goto T1850;}
	goto T1846;
T1846:;
	base[2]= (V785);
	base[3]= (V786);
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	function definition for SAUT-NOT	*/

static void L110()
{register object *base=vs_base;
	register object *sup=base+VM100; VC100
	vs_check;
	{register object V791;
	object V792;
	check_arg(2);
	V791=(base[0]);
	V792=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V793;
	V793= CMPcadr((V792));
	base[2]= Cnil;
	{object V794= CMPcar((V793));
	if((V794!= VV[10]))goto T1879;
	base[3]= (*(LnkLI285))((V791),(V793));
	goto T1878;
	goto T1879;
T1879:;
	if((V794!= VV[130]))goto T1880;
	base[3]= (*(LnkLI286))((V791),(V793));
	goto T1878;
	goto T1880;
T1880:;
	if((V794!= VV[282]))goto T1881;
	base[3]= (*(LnkLI287))((V791),(V793));
	goto T1878;
	goto T1881;
T1881:;
	if((V794!= VV[147]))goto T1882;
	base[3]= (*(LnkLI288))((V791),(V793));
	goto T1878;
	goto T1882;
T1882:;
	base[4]= VV[145];
	base[5]= VV[146];
	base[6]= (V792);
	vs_top=(vs_base=base+4)+3;
	Lerror();
	vs_top=sup;
	base[3]= vs_base[0];}
	goto T1878;
T1878:;
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	local entry for function SAUT-NOT-CLASS	*/

static object LI111(V797,V798)

object V797;object V798;
{	 VMB101 VMS101 VMV101
	goto TTL;
TTL:;
	{object V799;
	object V800;
	V799= (*(LnkLI289))((V797));
	base[2]= (V799);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V800= vs_base[0];
	{register object x= CMPcadr((V798)),V802= (V800);
	while(V802!=Cnil)
	if(x==(V802->c.c_car)){
	V801= V802;
	goto T1889;
	}else V802=V802->c.c_cdr;
	V801= Cnil;}
	goto T1889;
T1889:;
	{object V803 = ((V801)==Cnil?Ct:Cnil);
	VMR101(V803)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SAUT-NOT-PROTOTYPE	*/

static object LI112(V806,V807)

register object V806;object V807;
{	 VMB102 VMS102 VMV102
	goto TTL;
TTL:;
	{object V808;
	object V809;
	{object V810= CMPcar((V806));
	if((V810!= VV[147]))goto T1891;
	V808= (*(LnkLI290))(CMPcadr((V806)));
	goto T1890;
	goto T1891;
T1891:;
	if((V810!= VV[130]))goto T1892;
	V808= CMPcadr((V806));
	goto T1890;
	goto T1892;
T1892:;
	if((V810!= VV[282]))goto T1893;
	V808= CMPcadr((V806));
	goto T1890;
	goto T1893;
T1893:;
	if((V810!= VV[10]))goto T1894;
	V808= CMPcadr((V806));
	goto T1890;
	goto T1894;
T1894:;
	V808= Cnil;}
	goto T1890;
T1890:;
	base[2]= (V808);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V809= vs_base[0];
	{register object x= CMPcadr((V807)),V812= (V809);
	while(V812!=Cnil)
	if(x==(V812->c.c_car)){
	V811= V812;
	goto T1897;
	}else V812=V812->c.c_cdr;
	V811= Cnil;}
	goto T1897;
T1897:;
	{object V813 = ((V811)==Cnil?Ct:Cnil);
	VMR102(V813)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SAUT-NOT-CLASS-EQ	*/

static object LI113(V816,V817)

object V816;object V817;
{	 VMB103 VMS103 VMV103
	goto TTL;
TTL:;
	{object V818;
	{object V819= CMPcar((V816));
	if((V819!= VV[147]))goto T1899;
	V818= (*(LnkLI290))(CMPcadr((V816)));
	goto T1898;
	goto T1899;
T1899:;
	if((V819!= VV[130]))goto T1900;
	V818= CMPcadr((V816));
	goto T1898;
	goto T1900;
T1900:;
	V818= Cnil;}
	goto T1898;
T1898:;
	{object V820 = (((((V818))==(CMPcadr((V817)))?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR103(V820)}}
	return Cnil;
}
/*	local entry for function SAUT-NOT-EQL	*/

static object LI114(V823,V824)

object V823;object V824;
{	 VMB104 VMS104 VMV104
	goto TTL;
TTL:;
	{object V825= CMPcar((V823));
	if((V825!= VV[147]))goto T1901;
	{object V826 = (((eql(CMPcadr((V823)),CMPcadr((V824)))?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR104(V826)}
	goto T1901;
T1901:;
	{object V827 = Ct;
	VMR104(V827)}}
	return Cnil;
}
/*	function definition for CLASS-APPLICABLE-USING-CLASS-P	*/

static void L115()
{register object *base=vs_base;
	register object *sup=base+VM105; VC105
	vs_check;
	{object V828;
	register object V829;
	check_arg(2);
	V828=(base[0]);
	V829=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V830;
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T1905;}
	base[2]= (V829);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V832= vs_base[0];
	goto T1903;
	goto T1905;
T1905:;
	V832= (*(LnkLI263))((V829));
	goto T1903;
T1903:;
	{register object x= (V828),V831= V832;
	while(V831!=Cnil)
	if(x==(V831->c.c_car)){
	V830= V831;
	goto T1902;
	}else V831=V831->c.c_cdr;
	V830= Cnil;}
	goto T1902;
T1902:;
	base[2]= (V830);
	if((V830)!=Cnil){
	base[3]= (V830);
	goto T1909;}
	if(((VV[144]->s.s_dbind))!=Cnil){
	goto T1911;}
	base[3]= (*(LnkLI291))((V828),(V829));
	goto T1909;
	goto T1911;
T1911:;
	base[3]= (*(LnkLI292))((V828),(V829));
	goto T1909;
T1909:;
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	local entry for function CLASSES-HAVE-COMMON-SUBCLASS-P	*/

static object LI116(V835,V836)

object V835;register object V836;
{	 VMB106 VMS106 VMV106
	goto TTL;
TTL:;
	if(!(((V835))==((V836)))){
	goto T1913;}
	{object V837 = Ct;
	VMR106(V837)}
	goto T1913;
T1913:;
	{object V838;
	base[0]= (V835);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	V838= vs_base[0];{object V839;
	{register object x= (V836),V840= (V838);
	while(V840!=Cnil)
	if(x==(V840->c.c_car)){
	V839= V840;
	goto T1918;
	}else V840=V840->c.c_cdr;
	V839= Cnil;}
	goto T1918;
T1918:;
	if(V839==Cnil)goto T1917;
	{object V841 = V839;
	VMR106(V841)}
	goto T1917;
T1917:;}
	{register object V842;
	register object V843;
	V842= (V838);
	V843= CMPcar((V842));
	goto T1922;
T1922:;
	if(!(((V842))==Cnil)){
	goto T1923;}
	{object V844 = Cnil;
	VMR106(V844)}
	goto T1923;
T1923:;
	if(((*(LnkLI292))((V843),(V836)))==Cnil){
	goto T1927;}
	{object V845 = Ct;
	VMR106(V845)}
	goto T1927;
T1927:;
	V842= CMPcdr((V842));
	V843= CMPcar((V842));
	goto T1922;}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SAUT-CLASS	*/

static void L117()
{register object *base=vs_base;
	register object *sup=base+VM107; VC107
	vs_check;
	{object V846;
	object V847;
	check_arg(2);
	V846=(base[0]);
	V847=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V848= CMPcar((V846));
	if((V848!= VV[10]))goto T1935;
	base[2]= CMPcadr((V846));
	base[3]= CMPcadr((V847));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk294)();
	return;
	goto T1935;
T1935:;
	base[2]= Cnil;
	{object V849;
	V849= (*(LnkLI289))((V846));
	V851= CMPcadr((V847));
	base[4]= (V849);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V852= vs_base[0];
	{register object x= /* INLINE-ARGS */V851,V850= V852;
	while(V850!=Cnil)
	if(x==(V850->c.c_car)){
	base[3]= V850;
	goto T1939;
	}else V850=V850->c.c_cdr;
	base[3]= Cnil;}}
	goto T1939;
T1939:;
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	function definition for SAUT-CLASS-EQ	*/

static void L118()
{register object *base=vs_base;
	register object *sup=base+VM108; VC108
	vs_check;
	{register object V853;
	register object V854;
	check_arg(2);
	V853=(base[0]);
	V854=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((CMPcar((V853)))==(VV[147]))){
	goto T1944;}
	base[2]= Cnil;
	V855= (*(LnkLI290))(CMPcadr((V853)));
	base[3]= ((/* INLINE-ARGS */V855)==(CMPcadr((V854)))?Ct:Cnil);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1944;
T1944:;
	{object V856;
	{object V857= CMPcar((V853));
	if((V857!= VV[130]))goto T1949;
	V856= ((CMPcadr((V853)))==(CMPcadr((V854)))?Ct:Cnil);
	goto T1948;
	goto T1949;
T1949:;
	if((V857!= VV[10]))goto T1950;
	if(!((CMPcadr((V853)))==(CMPcadr((V854))))){
	goto T1951;}
	V856= Ct;
	goto T1948;
	goto T1951;
T1951:;
	V859= CMPcadr((V853));
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T1955;}
	base[2]= CMPcadr((V854));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V860= vs_base[0];
	goto T1953;
	goto T1955;
T1955:;
	V860= (*(LnkLI263))(CMPcadr((V854)));
	goto T1953;
T1953:;
	{register object x= /* INLINE-ARGS */V859,V858= V860;
	while(V858!=Cnil)
	if(x==(V858->c.c_car)){
	V856= V858;
	goto T1948;
	}else V858=V858->c.c_cdr;
	V856= Cnil;
	goto T1948;}
	goto T1950;
T1950:;
	V856= Cnil;}
	goto T1948;
T1948:;
	base[2]= (V856);
	base[3]= (V856);
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	function definition for SAUT-PROTOTYPE	*/

static void L119()
{register object *base=vs_base;
	register object *sup=base+VM109; VC109
	vs_check;
	{object V861;
	object V862;
	check_arg(2);
	V861=(base[0]);
	V862=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	return;
	}
}
/*	function definition for SAUT-EQL	*/

static void L120()
{register object *base=vs_base;
	register object *sup=base+VM110; VC110
	vs_check;
	{register object V863;
	object V864;
	check_arg(2);
	V863=(base[0]);
	V864=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V865;
	{object V866= CMPcar((V863));
	if((V866!= VV[147]))goto T1963;
	V865= (eql(CMPcadr((V863)),CMPcadr((V864)))?Ct:Cnil);
	goto T1962;
	goto T1963;
T1963:;
	if((V866!= VV[130]))goto T1964;
	V867= CMPcadr((V863));
	V868= (*(LnkLI290))(CMPcadr((V864)));
	V865= ((/* INLINE-ARGS */V867)==(/* INLINE-ARGS */V868)?Ct:Cnil);
	goto T1962;
	goto T1964;
T1964:;
	if((V866!= VV[10]))goto T1965;
	V870= CMPcadr((V863));
	{object V872;
	V872= (*(LnkLI290))(CMPcadr((V864)));
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T1969;}
	base[2]= (V872);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V871= vs_base[0];
	goto T1966;
	goto T1969;
T1969:;
	V871= (*(LnkLI263))((V872));}
	goto T1966;
T1966:;
	{register object x= /* INLINE-ARGS */V870,V869= V871;
	while(V869!=Cnil)
	if(x==(V869->c.c_car)){
	V865= V869;
	goto T1962;
	}else V869=V869->c.c_cdr;
	V865= Cnil;
	goto T1962;}
	goto T1965;
T1965:;
	V865= Cnil;}
	goto T1962;
T1962:;
	base[2]= (V865);
	base[3]= (V865);
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	function definition for SPECIALIZER-APPLICABLE-USING-TYPE-P	*/

static void L121()
{register object *base=vs_base;
	register object *sup=base+VM111; VC111
	vs_check;
	{register object V873;
	register object V874;
	check_arg(2);
	V873=(base[0]);
	V874=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V873);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk295)();
	vs_top=sup;
	V873= vs_base[0];
	if(!(((V873))==(Ct))){
	goto T1977;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1977;
T1977:;
	if(type_of((V874))!=t_cons){
	goto T1982;}
	if(!((CMPcar((V874)))==(Ct))){
	goto T1983;}
	goto T1982;
T1982:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1983;
T1983:;
	{object V875= CMPcar((V874));
	if((V875!= VV[88]))goto T1989;
	base[2]= (V873);
	base[3]= (V874);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk296)();
	return;
	goto T1989;
T1989:;
	if((V875!= VV[89]))goto T1992;
	base[2]= (V873);
	base[3]= (V874);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk297)();
	return;
	goto T1992;
T1992:;
	if((V875!= VV[10]))goto T1995;
	base[2]= (V873);
	base[3]= (V874);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk298)();
	return;
	goto T1995;
T1995:;
	if((V875!= VV[282]))goto T1998;
	base[2]= (V873);
	base[3]= (V874);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk299)();
	return;
	goto T1998;
T1998:;
	if((V875!= VV[130]))goto T2001;
	base[2]= (V873);
	base[3]= (V874);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk300)();
	return;
	goto T2001;
T2001:;
	if((V875!= VV[147]))goto T2004;
	base[2]= (V873);
	base[3]= (V874);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk301)();
	return;
	goto T2004;
T2004:;
	base[2]= VV[148];
	base[3]= VV[146];
	base[4]= (V874);
	vs_top=(vs_base=base+2)+3;
	Lerror();
	return;}
	}
}
/*	function definition for MAP-ALL-CLASSES	*/

static void L122()
{register object *base=vs_base;
	register object *sup=base+VM112; VC112
	vs_check;
	{object V876;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2010;}
	V876=(base[1]);
	vs_top=sup;
	goto T2011;
	goto T2010;
T2010:;
	V876= Ct;
	goto T2011;
T2011:;
	if(!(((VV[72]->s.s_dbind))==(VV[149]))){
	goto T2014;}
	base[2]= Ct;
	goto T2013;
	goto T2014;
T2014:;
	base[2]= (((VV[72]->s.s_dbind))==(VV[73])?Ct:Cnil);
	goto T2013;
T2013:;
	if(!(type_of((V876))==t_symbol)){
	goto T2018;}
	base[3]= (VFUN_NARGS=1,(*(LnkLI302))((V876)));
	goto T2016;
	goto T2018;
T2018:;
	base[3]= (V876);
	goto T2016;
T2016:;
	vs_top=(vs_base=base+3)+1;
	L123(base);
	return;
	}
}
/*	function definition for GET-SECONDARY-DISPATCH-FUNCTION	*/

static void L124()
{register object *base=vs_base;
	register object *sup=base+VM113; VC113
	vs_check;
	{object V877;
	object V878;
	object V879;
	object V880;
	object V881;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>5) too_many_arguments();
	V877=(base[0]);
	V878=(base[1]);
	V879=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T2020;}
	V880=(base[3]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2021;}
	V881=(base[4]);
	vs_top=sup;
	goto T2022;
	goto T2020;
T2020:;
	V880= Cnil;
	goto T2021;
T2021:;
	V881= Cnil;
	goto T2022;
T2022:;
	V882= (((((V880))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	V883= (((((V881))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	V884= (*(LnkLI213))((V878));
	base[5]= (VFUN_NARGS=6,(*(LnkLI216))((V877),(V878),(V879),/* INLINE-ARGS */V882,/* INLINE-ARGS */V883,((/* INLINE-ARGS */V884)==Cnil?Ct:Cnil)));
	base[6]= (V880);
	base[7]= (V881);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local entry for function GET-SECONDARY-DISPATCH-FUNCTION1	*/

static object LI125(object V889,object V888,object V887,object V886,object V885,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB114 VMS114 VMV114
	{register object V890;
	object V891;
	register object V892;
	register object V893;
	register object V894;
	object V895;
	register object V896;
	va_start(ap,first);
	if(narg <5) too_few_arguments();
	Vcs[0]=MMcons(V889,Cnil);
	V890= V888;
	V891= V887;
	V892= V886;
	V893= V885;
	narg = narg - 5;
	if (narg <= 0) goto T2028;
	else {
	V894= first;}
	if (--narg <= 0) goto T2029;
	else {
	V895= va_arg(ap,object);}
	if (--narg <= 0) goto T2030;
	else {
	V896= va_arg(ap,object);}
	--narg; goto T2031;
	goto T2028;
T2028:;
	V894= Cnil;
	goto T2029;
T2029:;
	V895= Ct;
	goto T2030;
T2030:;
	V896= Cnil;
	goto T2031;
T2031:;
	if(((V890))!=Cnil){
	goto T2036;}
	if(((V896))==Cnil){
	goto T2039;}
	{object V897 = 
	make_cclosure_new(LC165,Cnil,Vcs[0],Cdata);
	VMR114(V897)}
	goto T2039;
T2039:;
	{object V898 = 
	make_cclosure_new(LC166,Cnil,Vcs[0],Cdata);
	VMR114(V898)}
	goto T2036;
T2036:;
	{object V899;
	register object V900;
	V899= CMPcar((V890));{object V901;
	base[2]= (V899);
	base[3]= (VV[150]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V901= vs_base[0];
	if(V901==Cnil)goto T2043;
	V900= V901;
	goto T2042;
	goto T2043;
T2043:;}
	{object V903;
	object V904;
	V903= (VV[150]->s.s_dbind);
	V904= make_cons(Cnil,Cnil);
	base[3]= V899;
	base[4]= (V903);
	base[5]= (V904);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;
	V900= vs_base[0];}
	goto T2042;
T2042:;
	if((CMPcdr((V890)))!=Cnil){
	goto T2053;}
	if(((V894))==Cnil){
	goto T2053;}
	if(((V892))!=Cnil){
	goto T2053;}
	if(((V893))==Cnil){
	goto T2053;}
	if(((V896))!=Cnil){
	goto T2053;}{object V905;
	V905= CMPcar((V900));
	if(V905==Cnil)goto T2063;
	{object V906 = V905;
	VMR114(V906)}
	goto T2063;
T2063:;}
	{object V908;
	V908= (*(LnkLI303))((Vcs[0]->c.c_car),(V890),(V891),(V892),(V893),(V894),(V895),(V896));
	(V900)->c.c_car = (V908);
	{object V909 = (V908);
	VMR114(V909)}}
	goto T2053;
T2053:;
	{object V910;
	if(((V894))==Cnil){
	goto T2070;}
	V911= VV[151];
	goto T2068;
	goto T2070;
T2070:;
	V911= (V891);
	goto T2068;
T2068:;
	V910= list(5,(V890),V911,(V892),(V893),(V896));{object V912;
	{register object x= (V910),V914= CMPcdr((V900));
	while(V914!=Cnil)
	if(equal(x,V914->c.c_car->c.c_car) &&V914->c.c_car != Cnil){
	V913= (V914->c.c_car);
	goto T2074;
	}else V914=V914->c.c_cdr;
	V913= Cnil;}
	goto T2074;
T2074:;
	V912= CMPcdr(V913);
	if(V912==Cnil)goto T2072;
	{object V915 = V912;
	VMR114(V915)}
	goto T2072;
T2072:;}
	{object V916;
	V916= (*(LnkLI303))((Vcs[0]->c.c_car),(V890),(V891),(V892),(V893),(V894),(V895),(V896));
	{object V917;
	object V919;
	V917= make_cons((V910),(V916));
	V919= make_cons((V917),CMPcdr(V900));
	(V900)->c.c_cdr = (V919);}
	{object V920 = (V916);
	VMR114(V920)}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function GET-SECONDARY-DISPATCH-FUNCTION2	*/

static object LI126(V929,V930,V931,V932,V933,V934,V935,V936)

register object V929;object V930;object V931;object V932;object V933;object V934;object V935;object V936;
{	 VMB115 VMS115 VMV115
	goto TTL;
TTL:;
	if(((V934))==Cnil){
	goto T2081;}
	if(((V935))==Cnil){
	goto T2081;}
	if(((V936))!=Cnil){
	goto T2081;}
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T2088;}
	{object V937;
	object V938;
	base[2]= (V929);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk304)(Lclptr304);
	vs_top=sup;
	V937= vs_base[0];
	V938= (*(LnkLI305))((V929),(V937),(V930));
	{object V939 = (*(LnkLI306))((V929),(V938),(V932),(V933));
	VMR115(V939)}}
	goto T2088;
T2088:;
	{object V940;
	V940= (*(LnkLI307))((V929),Cnil,(V930));
	{object V941 = (*(LnkLI306))((V929),(V940),(V932),(V933));
	VMR115(V941)}}
	goto T2081;
T2081:;
	{object V942;
	base[0]= (V929);
	base[1]= (V930);
	base[2]= (V931);
	base[3]= (V935);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk308)();
	vs_top=sup;
	V942= vs_base[0];
	{object V943 = (VFUN_NARGS=3,(*(LnkLI309))((V929),(V942),(V936)));
	VMR115(V943)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-EFFECTIVE-METHOD-FUNCTION	*/

static void L127()
{register object *base=vs_base;
	register object *sup=base+VM116; VC116
	vs_check;
	{object V944;
	object V945;
	object V946;
	object V947;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V944=(base[0]);
	V945=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2099;}
	V946=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2100;}
	V947=(base[3]);
	vs_top=sup;
	goto T2101;
	goto T2099;
T2099:;
	V946= Cnil;
	goto T2100;
T2100:;
	V947= Cnil;
	goto T2101;
T2101:;
	base[4]= (VFUN_NARGS=6,(*(LnkLI216))((V944),(V945),Cnil,(((((V946))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil),(((((V947))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil),Ct));
	base[5]= (V946);
	base[6]= (V947);
	vs_top=(vs_base=base+5)+2;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local entry for function GET-EFFECTIVE-METHOD-FUNCTION1	*/

static object LI128(object V949,object V948,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB117 VMS117 VMV117
	{object V950;
	object V951;
	object V952;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V950= V949;
	V951= V948;
	narg = narg - 2;
	if (narg <= 0) goto T2107;
	else {
	V952= first;}
	--narg; goto T2108;
	goto T2107;
T2107:;
	V952= Ct;
	goto T2108;
T2108:;
	{object V953 = (VFUN_NARGS=7,(*(LnkLI216))((V950),(V951),Cnil,Cnil,Cnil,Ct,(V952)));
	VMR117(V953)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function METHODS-CONTAIN-EQL-SPECIALIZER-P	*/

static object LI129(V955)

object V955;
{	 VMB118 VMS118 VMV118
	goto TTL;
TTL:;
	if(((VV[72]->s.s_dbind))==(VV[73])){
	goto T2110;}
	{object V956 = Cnil;
	VMR118(V956)}
	goto T2110;
T2110:;
	{register object V957;
	register object V958;
	V957= (V955);
	V958= CMPcar((V957));
	goto T2115;
T2115:;
	if(!(((V957))==Cnil)){
	goto T2116;}
	{object V959 = Cnil;
	VMR118(V959)}
	goto T2116;
T2116:;
	{register object V960;
	register object V961;
	base[3]= (V958);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	V960= vs_base[0];
	V961= CMPcar((V960));
	goto T2127;
T2127:;
	if(!(((V960))==Cnil)){
	goto T2128;}
	goto T2120;
	goto T2128;
T2128:;
	base[3]= (V961);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2132;}
	goto T2122;
	goto T2132;
T2132:;
	V960= CMPcdr((V960));
	V961= CMPcar((V960));
	goto T2127;}
	goto T2122;
T2122:;
	{object V962 = Ct;
	VMR118(V962)}
	goto T2120;
T2120:;
	V957= CMPcdr((V957));
	V958= CMPcar((V957));
	goto T2115;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-DFUN	*/

static object LI130(object V963,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB119 VMS119 VMV119
	{register object V964;
	object V965;
	object V966;
	object V967;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V964= V963;
	narg = narg - 1;
	if (narg <= 0) goto T2146;
	else {
	V965= first;}
	if (--narg <= 0) goto T2147;
	else {
	V966= va_arg(ap,object);}
	if (--narg <= 0) goto T2148;
	else {
	V967= va_arg(ap,object);}
	--narg; goto T2149;
	goto T2146;
T2146:;
	V965= Cnil;
	goto T2147;
T2147:;
	V966= Cnil;
	goto T2148;
T2148:;
	V967= Cnil;
	goto T2149;
T2149:;
	{object V968;
	object V969;
	object V970;
	V968= (*(LnkLI196))((V964));
	if(((V968))==Cnil){
	goto T2156;}
	V969= (*(LnkLI311))((V964));
	goto T2154;
	goto T2156;
T2156:;
	base[3]= (V964);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk162)(Lclptr162);
	vs_top=sup;
	V969= vs_base[0];
	goto T2154;
T2154:;
	V970= (*(LnkLI220))((V964));
	(void)((VFUN_NARGS=4,(*(LnkLI230))((V964),(V965),(V966),(V967))));
	{register object V971;
	object V972;
	if(((V968))==Cnil){
	goto T2163;}
	if((V965)!=Cnil){
	V971= (V965);
	goto T2161;}
	V971= (*(LnkLI312))((V964));
	goto T2161;
	goto T2163;
T2163:;
	base[5]= (V964);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk313)(Lclptr313);
	vs_top=sup;
	V971= vs_base[0];
	goto T2161;
T2161:;
	V972= (*(LnkLI218))((V964));
	base[5]= (V972);
	vs_top=(vs_base=base+5)+1;
	Ltype_of();
	vs_top=sup;
	V973= vs_base[0];
	if((VV[15])==(V973)){
	goto T2167;}
	base[5]= (V971);
	base[6]= (V969);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk315)();
	vs_top=sup;
	V974= vs_base[0];
	V971= (*(LnkLI314))((V964),V974);
	goto T2167;
T2167:;
	(void)((*(LnkLI316))((V964),(V971)));
	if(((V970))==Cnil){
	goto T2177;}
	if(((V970))==((V966))){
	goto T2177;}
	(void)((*(LnkLI317))((V970)));
	goto T2177;
T2177:;
	{object V975 = (V971);
	VMR119(V975)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LIST-DFUN	*/

static object LI131(V977)

object V977;
{	 VMB120 VMS120 VMV120
	goto TTL;
TTL:;
	{object V978;
	object V979;
	base[2]= (*(LnkLI218))((V977));
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V978= vs_base[0];
	{register object x= (V978),V980= (VV[152]->s.s_dbind);
	while(V980!=Cnil)
	if(EQ(x,V980->c.c_car->c.c_car) &&V980->c.c_car != Cnil){
	V979= (V980->c.c_car);
	goto T2184;
	}else V980=V980->c.c_cdr;
	V979= Cnil;}
	goto T2184;
T2184:;
	if(((V979))!=Cnil){
	goto T2185;}
	{object V981;
	V979= make_cons((V978),Cnil);
	V981= (V979);
	(VV[152]->s.s_dbind)= make_cons((V981),(VV[152]->s.s_dbind));}
	goto T2185;
T2185:;
	{object V982;
	object V984;
	base[4]= (V977);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk162)(Lclptr162);
	vs_top=sup;
	V982= vs_base[0];
	V984= make_cons((V982),CMPcdr(V979));
	(V979)->c.c_cdr = (V984);
	{object V985 = (V984);
	VMR120(V985)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LIST-ALL-DFUNS	*/

static object LI132()

{	 VMB121 VMS121 VMV121
	goto TTL;
TTL:;
	(VV[152]->s.s_dbind)= Cnil;
	V986= (VV[319]->s.s_gfdef);
	(void)((*(LnkLI318))(V986));
	{object V987 = (VV[152]->s.s_dbind);
	VMR121(V987)}
	return Cnil;
}
/*	local entry for function LIST-LARGE-CACHE	*/

static object LI133(V989)

object V989;
{	 VMB122 VMS122 VMV122
	goto TTL;
TTL:;
	{object V990;
	object V991;
	base[2]= (*(LnkLI218))((V989));
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V990= vs_base[0];
	V991= (*(LnkLI220))((V989));
	if(((V991))==Cnil){
	goto T2203;}
	{object V992;
	V992= CMPmake_fixnum((long)STREF(fixnum,(V991),28));
	if(!(number_compare((V992),(VV[154]->s.s_dbind))>=0)){
	goto T2207;}
	{object V993;
	{register object x= (V992),V994= (VV[152]->s.s_dbind);
	while(V994!=Cnil)
	if(eql(x,V994->c.c_car->c.c_car) &&V994->c.c_car != Cnil){
	V993= (V994->c.c_car);
	goto T2209;
	}else V994=V994->c.c_cdr;
	V993= Cnil;}
	goto T2209;
T2209:;
	if(((V993))!=Cnil){
	goto T2210;}
	{object V995;
	V993= make_cons((V992),Cnil);
	V995= (V993);
	(VV[152]->s.s_dbind)= make_cons((V995),(VV[152]->s.s_dbind));}
	goto T2210;
T2210:;
	{object V996;
	object V998;
	{object V999;
	base[4]= (V989);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk162)(Lclptr162);
	vs_top=sup;
	V999= vs_base[0];
	if(!(((V990))==(VV[13]))){
	goto T2220;}
	V996= (V999);
	goto T2216;
	goto T2220;
T2220:;
	V996= list(2,(V999),(V990));}
	goto T2216;
T2216:;
	V998= make_cons((V996),CMPcdr(V993));
	(V993)->c.c_cdr = (V998);
	{object V1000 = (V998);
	VMR122(V1000)}}}
	goto T2207;
T2207:;
	{object V1001 = Cnil;
	VMR122(V1001)}}
	goto T2203;
T2203:;
	{object V1002 = Cnil;
	VMR122(V1002)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LIST-LARGE-CACHES	*/

static void L134()
{register object *base=vs_base;
	register object *sup=base+VM123; VC123
	vs_check;
	bds_check;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T2224;}
	bds_bind(VV[154],base[0]);
	vs_top=sup;
	goto T2225;
	goto T2224;
T2224:;
	bds_bind(VV[154],small_fixnum(130));
	goto T2225;
T2225:;
	(VV[152]->s.s_dbind)= Cnil;
	V1003= (VV[320]->s.s_gfdef);
	(void)((*(LnkLI318))(V1003));
	base[1]= (VV[152]->s.s_dbind);
	base[2]= (VV[321]->s.s_gfdef);
	base[3]= VV[155];
	base[4]= (VV[322]->s.s_gfdef);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk323)();
	vs_top=sup;
	(VV[152]->s.s_dbind)= vs_base[0];
	base[1]= (VV[152]->s.s_dbind);
	{
	object V1004= base[1];
	if(V1004==Cnil){
	goto T2237;}
	goto T2238;
T2238:;
	(void)(print((V1004->c.c_car),Cnil));
	if((V1004=MMcdr(V1004))==Cnil){
	goto T2237;}
	goto T2238;}
	goto T2237;
T2237:;
	vs_base=vs_top=base+1;
	vs_base[0]=Cnil;
	bds_unwind1;
	return;
}
/*	local entry for function COUNT-DFUN	*/

static object LI135(V1006)

object V1006;
{	 VMB124 VMS124 VMV124
	goto TTL;
TTL:;
	{object V1007;
	object V1008;
	register object V1009;
	base[3]= (*(LnkLI218))((V1006));
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V1007= vs_base[0];
	V1008= (*(LnkLI220))((V1006));
	{register object x= (V1007),V1010= (VV[156]->s.s_dbind);
	while(V1010!=Cnil)
	if(EQ(x,V1010->c.c_car->c.c_car) &&V1010->c.c_car != Cnil){
	V1009= (V1010->c.c_car);
	goto T2243;
	}else V1010=V1010->c.c_cdr;
	V1009= Cnil;}
	goto T2243;
T2243:;
	if(((V1009))!=Cnil){
	goto T2244;}
	{object V1011;
	V1009= list(3,(V1007),small_fixnum(0),Cnil);
	V1011= (V1009);
	(VV[156]->s.s_dbind)= make_cons((V1011),(VV[156]->s.s_dbind));}
	goto T2244;
T2244:;
	{object V1013;
	V1013= number_plus(CMPcadr(V1009),small_fixnum(1));
	(CMPcdr(V1009))->c.c_car = (V1013);
	(void)(CMPcdr(V1009));}
	if(((V1008))==Cnil){
	goto T2254;}
	{object V1014;
	object V1015;
	V1014= CMPmake_fixnum((long)STREF(fixnum,(V1008),28));
	{register object x= (V1014),V1016= CMPcaddr((V1009));
	while(V1016!=Cnil)
	if(eql(x,V1016->c.c_car->c.c_car) &&V1016->c.c_car != Cnil){
	V1015= (V1016->c.c_car);
	goto T2257;
	}else V1016=V1016->c.c_cdr;
	V1015= Cnil;}
	goto T2257;
T2257:;
	if(((V1015))!=Cnil){
	goto T2258;}
	{object V1017;
	object V1019;
	V1015= make_cons((V1014),small_fixnum(0));
	V1017= (V1015);
	V1019= make_cons((V1017),CMPcaddr(V1009));
	(CMPcddr(V1009))->c.c_car = (V1019);
	(void)(CMPcddr(V1009));}
	goto T2258;
T2258:;
	{object V1021;
	V1021= number_plus(CMPcdr(V1015),small_fixnum(1));
	(V1015)->c.c_cdr = (V1021);
	{object V1022 = (V1021);
	VMR124(V1022)}}}
	goto T2254;
T2254:;
	{object V1023 = Cnil;
	VMR124(V1023)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for COUNT-ALL-DFUNS	*/

static void L136()
{register object *base=vs_base;
	register object *sup=base+VM125; VC125
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1024;
	object V1025= VV[157];
	if(V1025==Cnil){
	(VV[156]->s.s_dbind)= Cnil;
	goto T2268;}
	base[0]=V1024=MMcons(Cnil,Cnil);
	goto T2269;
T2269:;
	(V1024->c.c_car)= list(3,(V1025->c.c_car),small_fixnum(0),Cnil);
	if((V1025=MMcdr(V1025))==Cnil){
	(VV[156]->s.s_dbind)= base[0];
	goto T2268;}
	V1024=MMcdr(V1024)=MMcons(Cnil,Cnil);
	goto T2269;}
	goto T2268;
T2268:;
	V1027= (VV[324]->s.s_gfdef);
	(void)((*(LnkLI318))(V1027));
	base[0]= (VV[156]->s.s_dbind);
	{
	object V1028= base[0];
	if(V1028==Cnil){
	goto T2273;}
	goto T2274;
T2274:;
	{object V1031;
	base[2]= CMPcaddr((V1028->c.c_car));
	base[3]= (VV[321]->s.s_gfdef);
	base[4]= VV[155];
	base[5]= (VV[322]->s.s_gfdef);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk323)();
	vs_top=sup;
	V1031= vs_base[0];
	(CMPcddr((V1028->c.c_car)))->c.c_car = (V1031);
	(void)(CMPcddr((V1028->c.c_car)));}
	if((V1028=MMcdr(V1028))==Cnil){
	goto T2273;}
	goto T2274;}
	goto T2273;
T2273:;
	base[0]= (VV[156]->s.s_dbind);
	{
	object V1032= base[0];
	if(V1032==Cnil){
	goto T2282;}
	goto T2283;
T2283:;
	base[1]= Ct;
	base[2]= VV[158];
	base[3]= CMPcadr((V1032->c.c_car));
	base[4]= CMPcar((V1032->c.c_car));
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
	base[1]= Ct;
	base[2]= VV[159];
	base[3]= CMPcaddr((V1032->c.c_car));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	if((V1032=MMcdr(V1032))==Cnil){
	goto T2282;}
	goto T2283;}
	goto T2282;
T2282:;
	vs_base=vs_top=base+0;
	vs_base[0]=Cnil;
	return;
}
/*	local entry for function GFS-OF-TYPE	*/

static object LI138(V1035)

object V1035;
{	 VMB126 VMS126 VMV126
	goto TTL;
TTL:;
	base[0]=MMcons((V1035),Cnil);
	if(type_of((base[0]->c.c_car))==t_cons){
	goto T2293;}
	(base[0]->c.c_car)= make_cons((base[0]->c.c_car),Cnil);
	goto T2293;
T2293:;
	base[1]=MMcons(Cnil,base[0]);
	V1036= 
	make_cclosure_new(LC167,Cnil,base[1],Cdata);
	(void)((*(LnkLI318))(V1036));
	{object V1037 = (base[1]->c.c_car);
	VMR126(V1037)}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC167(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM127; VC127
	vs_check;
	{object V1038;
	check_arg(1);
	V1038=(base[0]);
	vs_top=sup;
	base[1]= (*(LnkLI218))((V1038));
	vs_top=(vs_base=base+1)+1;
	Ltype_of();
	vs_top=sup;
	V1040= vs_base[0];
	{register object x= V1040,V1039= (base0[1]->c.c_car);
	while(V1039!=Cnil)
	if(x==(V1039->c.c_car)){
	goto T2301;
	}else V1039=V1039->c.c_cdr;
	goto T2300;}
	goto T2301;
T2301:;
	(base0[0]->c.c_car)= make_cons(V1038,(base0[0]->c.c_car));
	base[1]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2300;
T2300:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC166(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM128; VC128
	vs_check;
	{object V1042;
	object V1043;
	check_arg(2);
	V1042=(base[0]);
	V1043=(base[1]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC168,Cnil,base0[0],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC168(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM129; VC129
	vs_check;
	{object V1044;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1044=(base[0]);
	vs_top=sup;
	base[1]=VV[250]->s.s_gfdef;
	base[2]= (base0[0]->c.c_car);
	{object V1045;
	V1045= (V1044);
	 vs_top=base+3;
	 while(V1045!=Cnil)
	 {vs_push((V1045)->c.c_car);V1045=(V1045)->c.c_cdr;}
	vs_base=base+2;}
	(void) (*Lnk250)(Lclptr250);
	return;
	}
}
/*	local function CLOSURE	*/

static void LC165(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM130; VC130
	vs_check;
	{object V1046;
	object V1047;
	check_arg(2);
	V1046=(base[0]);
	V1047=(base[1]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC169,Cnil,base0[0],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC169(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM131; VC131
	vs_check;
	{object V1048;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1048=(base[0]);
	vs_top=sup;
	base[1]=VV[250]->s.s_gfdef;
	base[2]= (base0[0]->c.c_car);
	{object V1049;
	V1049= (V1048);
	 vs_top=base+3;
	 while(V1049!=Cnil)
	 {vs_push((V1049)->c.c_car);V1049=(V1049)->c.c_cdr;}
	vs_base=base+2;}
	(void) (*Lnk250)(Lclptr250);
	return;
	}
}
/*	local function DO-CLASS	*/

static void L123(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM132; VC132
	vs_check;
	{object V1050;
	check_arg(1);
	V1050=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((base0[2])==Cnil){
	goto T2313;}
	base[1]= (V1050);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	V1052= vs_base[0];
	goto T2311;
	goto T2313;
T2313:;
	V1052= (*(LnkLI325))((V1050));
	goto T2311;
T2311:;
	{
	object V1051= V1052;
	if(V1051==Cnil){
	goto T2309;}
	goto T2310;
T2310:;
	base[1]= (V1051->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L123(base0);
	vs_top=sup;
	if((V1051=MMcdr(V1051))==Cnil){
	goto T2309;}
	goto T2310;}
	goto T2309;
T2309:;
	base[1]= (V1050);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = base0[0];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local function COMPARE-CLASSES-FUNCTION	*/

static void LC106(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM133; VC133
	vs_check;
	{object V1053;
	object V1054;
	object V1055;
	check_arg(3);
	V1053=(base[0]);
	V1054=(base[1]);
	V1055=(base[2]);
	vs_top=sup;
	{object V1056;
	V1056= Cnil;
	{object V1057;
	register object V1058;
	V1057= (base0[0]->c.c_car);
	V1058= CMPcar((V1057));
	goto T2323;
T2323:;
	if(!(((V1057))==Cnil)){
	goto T2324;}
	goto T2319;
	goto T2324;
T2324:;
	if(!((CMPcar((V1058)))==((V1053)))){
	goto T2330;}
	if((CMPcadr((V1058)))==((V1054))){
	goto T2329;}
	goto T2330;
T2330:;
	if(!((CMPcar((V1058)))==((V1054)))){
	goto T2328;}
	if(!((CMPcadr((V1058)))==((V1053)))){
	goto T2328;}
	goto T2329;
T2329:;
	V1056= (V1058);
	goto T2319;
	goto T2328;
T2328:;
	V1057= CMPcdr((V1057));
	V1058= CMPcar((V1057));
	goto T2323;}
	goto T2319;
T2319:;
	if(((V1056))!=Cnil){
	goto T2343;}
	if(((*(LnkLI326))((V1053),(V1054)))==Cnil){
	goto T2349;}
	if(((*(LnkLI326))((V1054),(V1053)))==Cnil){
	goto T2352;}
	V1056= list(4,(V1053),(V1054),Cnil,Ct);
	goto T2347;
	goto T2352;
T2352:;
	V1056= list(3,(V1053),(V1054),Ct);
	goto T2347;
	goto T2349;
T2349:;
	if(((*(LnkLI326))((V1054),(V1053)))==Cnil){
	goto T2355;}
	V1056= list(3,(V1054),(V1053),Ct);
	goto T2347;
	goto T2355;
T2355:;
	{object V1059;
	object V1060;
	base[3]= (V1053);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk327)(Lclptr327);
	vs_top=sup;
	V1059= vs_base[0];
	base[3]= (V1054);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk327)(Lclptr327);
	vs_top=sup;
	V1060= vs_base[0];
	if(((V1059))==Cnil){
	goto T2362;}
	if(((V1060))==Cnil){
	goto T2362;}
	if(!(type_of((V1059))==t_symbol)){
	goto T2362;}
	if(!(type_of((V1060))==t_symbol)){
	goto T2362;}
	base[3]= symbol_name((V1059));
	base[4]= symbol_name((V1060));
	vs_top=(vs_base=base+3)+2;
	Lstring_l();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2362;}
	V1056= list(3,(V1053),(V1054),Ct);
	goto T2347;
	goto T2362;
T2362:;
	V1056= list(3,(V1054),(V1053),Ct);}
	goto T2347;
T2347:;
	(base0[0]->c.c_car)= make_cons(V1056,(base0[0]->c.c_car));
	goto T2343;
T2343:;
	base[3]= CMPcar((V1056));
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function SORTER	*/

static void LC103(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM134; VC134
	vs_check;
	{register object V1062;
	register object V1063;
	check_arg(2);
	V1062=(base[0]);
	V1063=(base[1]);
	vs_top=sup;
	{register object V1064;
	register object V1065;
	V1064= (base0[0]->c.c_car);
	V1065= CMPcar((V1064));
	goto T2378;
T2378:;
	if(!(((V1064))==Cnil)){
	goto T2379;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2379;
T2379:;
	{register object V1066;
	object V1067;
	register object V1068;
	if(!(type_of((V1062))==t_cons||((V1062))==Cnil)){
	goto T2387;}
	V1069= (VFUN_NARGS=2,(*(LnkLI275))((V1062),Ct));
	goto T2385;
	goto T2387;
T2387:;
	base[6]= (V1062);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	V1069= vs_base[0];
	goto T2385;
T2385:;
	V1066= nth(fix((V1065)),V1069);
	if(!(type_of((V1063))==t_cons||((V1063))==Cnil)){
	goto T2393;}
	V1070= (VFUN_NARGS=2,(*(LnkLI275))((V1063),Ct));
	goto T2391;
	goto T2393;
T2393:;
	base[6]= (V1063);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	V1070= vs_base[0];
	goto T2391;
T2391:;
	V1067= nth(fix((V1065)),V1070);
	base[6]= (V1066);
	base[7]= (V1067);
	base[8]= (V1065);
	base[9]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+6)+4;
	(void) (*Lnk328)();
	vs_top=sup;
	V1068= vs_base[0];
	if(((V1068))==Cnil){
	goto T2383;}
	base[6]= (((V1068))==((V1066))?Ct:Cnil);
	vs_top=(vs_base=base+6)+1;
	return;}
	goto T2383;
T2383:;
	V1064= CMPcdr((V1064));
	V1065= CMPcar((V1064));
	goto T2378;}
	}
}
/*	local function CLOSURE	*/

static void LC164(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM135; VC135
	vs_check;
	{object V1071;
	object V1072;
	object V1073;
	check_arg(3);
	V1071=(base[0]);
	V1072=(base[1]);
	V1073=(base[2]);
	vs_top=sup;
	{object V1074;
	object V1075;
	V1074= (*(LnkLI289))(nth(fix((V1073)),(base0[0]->c.c_car)));
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T2411;}
	base[5]= (V1074);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V1075= vs_base[0];
	goto T2409;
	goto T2411;
T2411:;
	V1075= (*(LnkLI263))((V1074));
	goto T2409;
T2409:;
	{register object x= (V1071),V1078= (V1075);
	while(V1078!=Cnil)
	if(x==(V1078->c.c_car)){
	V1077= V1078;
	goto T2417;
	}else V1078=V1078->c.c_cdr;
	V1077= Cnil;}
	goto T2417;
T2417:;
	{register object x= (V1072),V1076= V1077;
	while(V1076!=Cnil)
	if(x==(V1076->c.c_car)){
	goto T2416;
	}else V1076=V1076->c.c_cdr;
	goto T2415;}
	goto T2416;
T2416:;
	base[5]= (V1071);
	vs_top=(vs_base=base+5)+1;
	return;
	goto T2415;
T2415:;
	base[5]= (V1072);
	vs_top=(vs_base=base+5)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC163(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM136; VC136
	vs_check;
	{object V1079;
	object V1080;
	check_arg(2);
	V1079=(base[0]);
	V1080=(base[1]);
	vs_top=sup;
	{register object V1081;
	object V1082;
	if(((base0[3]->c.c_car))==Cnil){
	goto T2420;}
	V1081= (*(LnkLI263))((V1079));
	goto T2418;
	goto T2420;
T2420:;
	base[4]= (V1079);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V1081= vs_base[0];
	goto T2418;
T2418:;
	V1082= CMPcar((V1081));
	goto T2425;
T2425:;
	if(!(((V1081))==Cnil)){
	goto T2426;}
	base[4]= VV[137];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	return;
	goto T2426;
T2426:;
	{object V1083;
	{register object x= (V1082),V1084= (V1080);
	while(V1084!=Cnil)
	if(EQ(x,V1084->c.c_car->c.c_car) &&V1084->c.c_car != Cnil){
	V1083= (V1084->c.c_car);
	goto T2432;
	}else V1084=V1084->c.c_cdr;
	V1083= Cnil;}
	goto T2432;
T2432:;
	if(((V1083))==Cnil){
	goto T2431;}
	{object V1085;
	register object V1086;
	V1085= CMPcdr((V1083));
	if(((base0[3]->c.c_car))==Cnil){
	goto T2438;}
	V1086= (*(LnkLI273))((V1085));
	goto T2436;
	goto T2438;
T2438:;
	base[6]= (V1085);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk274)(Lclptr274);
	vs_top=sup;
	V1086= vs_base[0];
	goto T2436;
T2436:;
	if(((V1086))!=Cnil){
	goto T2441;}
	{frame_ptr fr;
	fr=frs_sch((base0[6]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[235]);
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	unwind(fr,Cnil);}
	goto T2441;
T2441:;
	{object V1088;
	V1088= (base0[7]->c.c_car);
	base[6]= V1079;
	base[7]= (V1088);
	base[8]= V1086;
	vs_top=(vs_base=base+6)+3;
	siLhash_set();
	vs_top=sup;}
	if(!(type_of((V1086))==t_cons)){
	goto T2450;}
	(base0[4]->c.c_car)= Cnil;
	goto T2450;
T2450:;
	if(((base0[5]->c.c_car))==Cnil){
	goto T2456;}
	if(!(eql((base0[5]->c.c_car),(V1086)))){
	goto T2457;}
	goto T2456;
T2456:;
	(base0[5]->c.c_car)= (V1086);
	goto T2455;
	goto T2457;
T2457:;
	(base0[5]->c.c_car)= Ct;
	goto T2455;
T2455:;
	(base0[0]->c.c_car)= CMPmake_fixnum((long)(fix((base0[0]->c.c_car)))+(1));
	if(!((fix((base0[0]->c.c_car)))==(1))){
	goto T2465;}
	(base0[2]->c.c_car)= (V1079);
	goto T2463;
	goto T2465;
T2465:;
	if(!((fix((base0[0]->c.c_car)))==(2))){
	goto T2463;}
	(base0[1]->c.c_car)= (V1079);
	goto T2463;
T2463:;
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	return;}}
	goto T2431;
T2431:;
	V1081= CMPcdr((V1081));
	V1082= CMPcar((V1081));
	goto T2425;}
	}
}
/*	local function CLOSURE	*/

static void LC162(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM137; VC137
	vs_check;
	{register object V1090;
	object V1091;
	check_arg(2);
	V1090=(base[0]);
	V1091=(base[1]);
	vs_top=sup;
	{object V1092;
	if(((base0[5]->c.c_car))==Cnil){
	goto T2478;}
	V1092= (*(LnkLI263))((V1090));
	goto T2476;
	goto T2478;
T2478:;
	base[2]= (V1090);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V1092= vs_base[0];
	goto T2476;
T2476:;
	{register object x= (base0[1]->c.c_car),V1093= (V1092);
	while(V1093!=Cnil)
	if(x==(V1093->c.c_car)){
	goto T2483;
	}else V1093=V1093->c.c_cdr;
	goto T2482;}
	goto T2483;
T2483:;
	if(((base0[0]->c.c_car))!=Cnil){
	goto T2486;}
	{register object x= (VV[132]->s.s_dbind),V1094= (V1092);
	while(V1094!=Cnil)
	if(eql(x,V1094->c.c_car)){
	goto T2489;
	}else V1094=V1094->c.c_cdr;
	goto T2485;}
	goto T2489;
T2489:;
	goto T2486;
T2486:;
	if(((base0[5]->c.c_car))!=Cnil){
	goto T2484;}
	base[2]= (V1091);
	base[3]= (base0[10]->c.c_car);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk272)(Lclptr272);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2484;}
	goto T2485;
T2485:;
	{frame_ptr fr;
	fr=frs_sch((base0[8]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[235]);
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	unwind(fr,Cnil);}
	goto T2484;
T2484:;
	{object V1095;
	object V1097;
	object V1098;
	V1095= make_cons((base0[1]->c.c_car),(V1091));
	V1097= (base0[9]->c.c_car);
	base[4]= V1090;
	base[5]= (V1097);
	vs_top=(vs_base=base+4)+2;
	Lgethash();
	vs_top=sup;
	V1099= vs_base[0];
	V1098= make_cons((V1095),V1099);
	base[4]= V1090;
	base[5]= (V1097);
	base[6]= (V1098);
	vs_top=(vs_base=base+4)+3;
	siLhash_set();
	return;}
	goto T2482;
T2482:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC161(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM138; VC138
	vs_check;
	{object V1100;
	check_arg(1);
	V1100=(base[0]);
	vs_top=sup;
	base[1]= (base0[2]->c.c_car);
	base[2]= (V1100);
	vs_top=(vs_base=base+1)+2;
	cclosure_call((base0[1]->c.c_car));
	return;
	}
}
/*	local function N-N	*/

static void LC85(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM139; VC139
	vs_check;
	{object V1101;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T2507;}
	V1101=(base[0]);
	vs_top=sup;
	goto T2508;
	goto T2507;
T2507:;
	V1101= Cnil;
	goto T2508;
T2508:;
	if(!(type_of((base0[1]->c.c_car))==t_cons)){
	goto T2511;}
	{object V1102;
	object V1103;
	object V1104;
	base[1]= (base0[4]->c.c_car);
	base[2]= (base0[3]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk193)();
	if(vs_base>=vs_top){vs_top=sup;goto T2516;}
	V1102= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2517;}
	V1103= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2518;}
	V1104= vs_base[0];
	vs_top=sup;
	goto T2519;
	goto T2516;
T2516:;
	V1102= Cnil;
	goto T2517;
T2517:;
	V1103= Cnil;
	goto T2518;
T2518:;
	V1104= Cnil;
	goto T2519;
T2519:;
	base[1]= (VFUN_NARGS=4,(*(LnkLI49))((base0[4]->c.c_car),(V1102),(V1103),(V1104)));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2511;
T2511:;
	{object V1105;
	object V1106;
	object V1107;
	base[1]= (base0[4]->c.c_car);
	base[2]= (base0[2]->c.c_car);
	base[3]= (V1101);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk182)();
	if(vs_base>=vs_top){vs_top=sup;goto T2524;}
	V1105= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2525;}
	V1106= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2526;}
	V1107= vs_base[0];
	vs_top=sup;
	goto T2527;
	goto T2524;
T2524:;
	V1105= Cnil;
	goto T2525;
T2525:;
	V1106= Cnil;
	goto T2526;
T2526:;
	V1107= Cnil;
	goto T2527;
T2527:;
	base[1]= (VFUN_NARGS=4,(*(LnkLI49))((base0[4]->c.c_car),(V1105),(V1106),(V1107)));
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function ONE-INDEX	*/

static void LC84(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM140; VC140
	vs_check;
	{object V1108;
	object V1109;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1108=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2528;}
	V1109=(base[1]);
	vs_top=sup;
	goto T2529;
	goto T2528;
T2528:;
	V1109= Cnil;
	goto T2529;
T2529:;
	{object V1110;
	object V1111;
	object V1112;
	base[2]= (base0[3]->c.c_car);
	base[3]= (base0[1]->c.c_car);
	base[4]= (V1108);
	base[5]= (V1109);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk178)();
	if(vs_base>=vs_top){vs_top=sup;goto T2536;}
	V1110= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2537;}
	V1111= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2538;}
	V1112= vs_base[0];
	vs_top=sup;
	goto T2539;
	goto T2536;
T2536:;
	V1110= Cnil;
	goto T2537;
T2537:;
	V1111= Cnil;
	goto T2538;
T2538:;
	V1112= Cnil;
	goto T2539;
T2539:;
	base[2]= (VFUN_NARGS=4,(*(LnkLI49))((base0[3]->c.c_car),(V1110),(V1111),(V1112)));
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	local function DO-FILL	*/

static void L87(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM141; VC141
	vs_check;
	{object V1113;
	check_arg(1);
	V1113=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1114;
	V1114= (VFUN_NARGS=3,(*(LnkLI247))(base0[6],base0[9],(base0[11]->c.c_car)));
	if(((V1114))==(base0[6])){
	goto T2542;}
	base[1]= (V1114);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (V1113);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2542;
T2542:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CACHING	*/

static void L86(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM142; VC142
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1115;
	object V1116;
	object V1117;
	base[0]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk184)();
	if(vs_base>=vs_top){vs_top=sup;goto T2547;}
	V1115= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2548;}
	V1116= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2549;}
	V1117= vs_base[0];
	vs_top=sup;
	goto T2550;
	goto T2547;
T2547:;
	V1115= Cnil;
	goto T2548;
T2548:;
	V1116= Cnil;
	goto T2549;
T2549:;
	V1117= Cnil;
	goto T2550;
T2550:;
	base[0]= (VFUN_NARGS=4,(*(LnkLI49))((base0[0]->c.c_car),(V1115),(V1116),(V1117)));
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	local function N-N	*/

static void L85(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM143; VC143
	vs_check;
	{object V1118;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T2551;}
	V1118=(base[0]);
	vs_top=sup;
	goto T2552;
	goto T2551;
T2551:;
	V1118= Cnil;
	goto T2552;
T2552:;
	if(!(type_of((base0[11]->c.c_car))==t_cons)){
	goto T2555;}
	{object V1119;
	object V1120;
	object V1121;
	base[1]= (base0[0]->c.c_car);
	base[2]= (base0[8]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk193)();
	if(vs_base>=vs_top){vs_top=sup;goto T2560;}
	V1119= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2561;}
	V1120= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2562;}
	V1121= vs_base[0];
	vs_top=sup;
	goto T2563;
	goto T2560;
T2560:;
	V1119= Cnil;
	goto T2561;
T2561:;
	V1120= Cnil;
	goto T2562;
T2562:;
	V1121= Cnil;
	goto T2563;
T2563:;
	base[1]= (VFUN_NARGS=4,(*(LnkLI49))((base0[0]->c.c_car),(V1119),(V1120),(V1121)));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2555;
T2555:;
	{object V1122;
	object V1123;
	object V1124;
	base[1]= (base0[0]->c.c_car);
	base[2]= (base0[10]->c.c_car);
	base[3]= (V1118);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk182)();
	if(vs_base>=vs_top){vs_top=sup;goto T2568;}
	V1122= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2569;}
	V1123= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2570;}
	V1124= vs_base[0];
	vs_top=sup;
	goto T2571;
	goto T2568;
T2568:;
	V1122= Cnil;
	goto T2569;
T2569:;
	V1123= Cnil;
	goto T2570;
T2570:;
	V1124= Cnil;
	goto T2571;
T2571:;
	base[1]= (VFUN_NARGS=4,(*(LnkLI49))((base0[0]->c.c_car),(V1122),(V1123),(V1124)));
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function ONE-INDEX	*/

static void L84(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM144; VC144
	vs_check;
	{object V1125;
	object V1126;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1125=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2572;}
	V1126=(base[1]);
	vs_top=sup;
	goto T2573;
	goto T2572;
T2572:;
	V1126= Cnil;
	goto T2573;
T2573:;
	{object V1127;
	object V1128;
	object V1129;
	base[2]= (base0[0]->c.c_car);
	base[3]= (base0[10]->c.c_car);
	base[4]= (V1125);
	base[5]= (V1126);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk178)();
	if(vs_base>=vs_top){vs_top=sup;goto T2580;}
	V1127= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2581;}
	V1128= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2582;}
	V1129= vs_base[0];
	vs_top=sup;
	goto T2583;
	goto T2580;
T2580:;
	V1127= Cnil;
	goto T2581;
T2581:;
	V1128= Cnil;
	goto T2582;
T2582:;
	V1129= Cnil;
	goto T2583;
T2583:;
	base[2]= (VFUN_NARGS=4,(*(LnkLI49))((base0[0]->c.c_car),(V1127),(V1128),(V1129)));
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	local function TWO-CLASS	*/

static void L83(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM145; VC145
	vs_check;
	{object V1130;
	object V1131;
	object V1132;
	check_arg(3);
	V1130=(base[0]);
	V1131=(base[1]);
	V1132=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= small_fixnum(2);
	vs_top=(vs_base=base+3)+1;
	Lrandom();
	vs_top=sup;
	V1133= vs_base[0];
	if(!(number_compare(small_fixnum(0),V1133)==0)){
	goto T2584;}
	{object V1134;
	object V1135;
	V1134= (V1132);
	V1135= (V1131);
	V1131= (V1134);
	V1132= (V1135);}
	goto T2584;
T2584:;
	{object V1136;
	object V1137;
	object V1138;
	base[3]= (base0[0]->c.c_car);
	base[4]= (base0[10]->c.c_car);
	base[5]= (V1131);
	base[6]= (V1132);
	base[7]= (V1130);
	vs_top=(vs_base=base+3)+5;
	(void) (*Lnk237)();
	if(vs_base>=vs_top){vs_top=sup;goto T2601;}
	V1136= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2602;}
	V1137= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2603;}
	V1138= vs_base[0];
	vs_top=sup;
	goto T2604;
	goto T2601;
T2601:;
	V1136= Cnil;
	goto T2602;
T2602:;
	V1137= Cnil;
	goto T2603;
T2603:;
	V1138= Cnil;
	goto T2604;
T2604:;
	base[3]= (VFUN_NARGS=4,(*(LnkLI49))((base0[0]->c.c_car),(V1136),(V1137),(V1138)));
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC160(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM146; VC146
	vs_check;
	{object V1139;
	check_arg(1);
	V1139=(base[0]);
	vs_top=sup;
	base[1]= (V1139);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	V1140= vs_base[0];
	base[1]= (equal((base0[0]->c.c_car),V1140)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC159(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM147; VC147
	vs_check;
	{object V1141;
	check_arg(1);
	V1141=(base[0]);
	vs_top=sup;
	base[1]= (((V1141))==((VV[125]->s.s_dbind))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC158(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM148; VC148
	vs_check;
	{object V1142;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1142=(base[0]);
	vs_top=sup;
	base[1]=VV[250]->s.s_gfdef;
	base[2]= (base0[1]->c.c_car);
	{object V1143;
	V1143= (V1142);
	 vs_top=base+3;
	 while(V1143!=Cnil)
	 {vs_push((V1143)->c.c_car);V1143=(V1143)->c.c_cdr;}
	vs_base=base+2;}
	(void) (*Lnk250)(Lclptr250);
	return;
	}
}
/*	local function CLOSURE	*/

static void LC157(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM149; VC149
	vs_check;
	{object V1144;
	check_arg(1);
	V1144=(base[0]);
	vs_top=sup;
	if(!(type_of((V1144))==t_cons)){
	goto T2610;}{object V1145;
	V1145= (VV[122]->s.s_dbind);
	V1146= (*(LnkLI265))((V1144));
	base[1]= ((V1145)==(/* INLINE-ARGS */V1146)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2610;
T2610:;
	base[1]= (V1144);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk329)(Lclptr329);
	return;
	}
}
/*	local function CLOSURE	*/

static void LC156(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM150; VC150
	vs_check;
	{object V1147;
	check_arg(1);
	V1147=(base[0]);
	vs_top=sup;
	if(!(type_of((V1147))==t_cons)){
	goto T2614;}{object V1148;
	V1148= (VV[121]->s.s_dbind);
	V1149= (*(LnkLI265))((V1147));
	base[1]= ((V1148)==(/* INLINE-ARGS */V1149)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2614;
T2614:;
	base[1]= (V1147);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk330)(Lclptr330);
	return;
	}
}
/*	local function CLOSURE	*/

static void LC155(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM151; VC151
	vs_check;
	{object V1150;
	object V1151;
	check_arg(2);
	V1150=(base[0]);
	V1151=(base[1]);
	vs_top=sup;
	{register object V1152;
	object V1153;
	V1152= (*(LnkLI290))((V1151));
	if(type_of(V1152)==t_structure){
	goto T2623;}
	goto T2621;
	goto T2623;
T2623:;
	if(!(((V1152)->str.str_def)==(VV[104]))){
	goto T2621;}
	V1154= STREF(object,(V1152),4);
	goto T2619;
	goto T2621;
T2621:;{object V1156;
	V1156= (VV[65]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V1152);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V1157= vs_base[0];
	if(!((V1156)==(CMPcar(V1157)))){
	goto T2626;}}
	V1154= CMPcar(((V1152))->cc.cc_turbo[12]);
	goto T2619;
	goto T2626;
T2626:;
	base[4]= VV[66];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V1154= vs_base[0];
	goto T2619;
T2619:;
	V1158= (*(LnkLI281))(VV[10],VV[102]);
	V1153= (V1154)->v.v_self[fix(/* INLINE-ARGS */V1158)];
	base[4]= (*(LnkLI331))((V1153),(V1151),(base0[0]->c.c_car),(V1150));
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC154(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM152; VC152
	vs_check;
	{register object V1159;
	check_arg(1);
	V1159=(base[0]);
	vs_top=sup;
	{register object V1160;
	object V1161;
	V1160= (*(LnkLI290))((V1159));
	if(type_of(V1160)==t_structure){
	goto T2638;}
	goto T2636;
	goto T2638;
T2638:;
	if(!(((V1160)->str.str_def)==(VV[101]))){
	goto T2636;}
	V1162= STREF(object,(V1160),4);
	goto T2634;
	goto T2636;
T2636:;{object V1164;
	V1164= (VV[65]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V1160);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V1165= vs_base[0];
	if(!((V1164)==(CMPcar(V1165)))){
	goto T2641;}}
	V1162= CMPcar(((V1160))->cc.cc_turbo[12]);
	goto T2634;
	goto T2641;
T2641:;
	base[3]= VV[66];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V1162= vs_base[0];
	goto T2634;
T2634:;
	V1166= (*(LnkLI281))(VV[10],VV[102]);
	V1161= (V1162)->v.v_self[fix(/* INLINE-ARGS */V1166)];
	if(type_of(V1159)==t_structure){
	goto T2651;}
	goto T2649;
	goto T2651;
T2651:;
	if(!(((V1159)->str.str_def)==(VV[103]))){
	goto T2649;}
	V1167= STREF(object,(V1159),4);
	goto T2647;
	goto T2649;
T2649:;{object V1169;
	V1169= (VV[65]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V1159);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V1170= vs_base[0];
	if(!((V1169)==(CMPcar(V1170)))){
	goto T2654;}}
	V1167= CMPcar(((V1159))->cc.cc_turbo[12]);
	goto T2647;
	goto T2654;
T2654:;
	base[3]= VV[66];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V1167= vs_base[0];
	goto T2647;
T2647:;
	V1171= (*(LnkLI281))((V1161),(base0[0]->c.c_car));
	base[3]= (V1167)->v.v_self[fix(/* INLINE-ARGS */V1171)];
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC153(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM153; VC153
	vs_check;
	{object V1172;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1172=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V1172);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk332)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC152(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM154; VC154
	vs_check;
	{object V1173;
	object V1174;
	check_arg(2);
	V1173=(base[0]);
	V1174=(base[1]);
	vs_top=sup;
	base[2]= (V1173);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V1175= vs_base[0];
	(base0[0]->c.c_car)= (VFUN_NARGS=4,(*(LnkLI247))((base0[0]->c.c_car),V1175,(V1174),Ct));
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC151(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM155; VC155
	vs_check;
	{object V1176;
	object V1177;
	object V1178;
	object V1179;
	check_arg(4);
	V1176=(base[0]);
	V1177=(base[1]);
	V1178=(base[2]);
	V1179=(base[3]);
	vs_top=sup;
	{object V1180;
	object V1181;
	if(!((VV[10])==(CMPcar((V1177))))){
	goto T2667;}
	{object V1182;
	object V1183;
	V1182= (*(LnkLI290))(CMPcadr((V1177)));
	base[8]= (V1182);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V1183= vs_base[0];
	{register object x= (VV[76]->s.s_dbind),V1184= (V1183);
	while(V1184!=Cnil)
	if(x==(V1184->c.c_car)){
	goto T2674;
	}else V1184=V1184->c.c_cdr;
	goto T2673;}
	goto T2674;
T2674:;
	V1180= (VV[77]->s.s_dbind);
	goto T2665;
	goto T2673;
T2673:;
	{register object x= (VV[78]->s.s_dbind),V1185= (V1183);
	while(V1185!=Cnil)
	if(x==(V1185->c.c_car)){
	goto T2677;
	}else V1185=V1185->c.c_cdr;
	goto T2676;}
	goto T2677;
T2677:;
	V1180= (VV[79]->s.s_dbind);
	goto T2665;
	goto T2676;
T2676:;
	V1180= (VV[80]->s.s_dbind);
	goto T2665;}
	goto T2667;
T2667:;
	V1180= small_fixnum(0);
	goto T2665;
T2665:;
	V1181= number_plus((number_compare((V1178),(V1179))>=0?((V1178)):(V1179)),(V1180));
	if(((base0[1]->c.c_car))==Cnil){
	goto T2679;}
	if(!(number_compare((base0[1]->c.c_car),(V1181))<=0)){
	goto T2679;}
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[209]);
	base[6]= (V1181);
	vs_top=(vs_base=base+6)+1;
	unwind(fr,Cnil);}
	goto T2679;
T2679:;
	base[6]= (V1181);
	vs_top=(vs_base=base+6)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC150(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM156; VC156
	vs_check;
	{object V1186;
	object V1187;
	check_arg(2);
	V1186=(base[0]);
	V1187=(base[1]);
	vs_top=sup;
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC149(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM157; VC157
	vs_check;
	{object V1188;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1188=(base[0]);
	vs_top=sup;
	base[1]= (base0[1]->c.c_car);
	base[2]= (V1188);
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk333)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC148(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM158; VC158
	vs_check;
	{register object V1189;
	check_arg(1);
	V1189=(base[0]);
	vs_top=sup;{object V1190;
	if(((VV[72]->s.s_dbind))==(VV[73])){
	goto T2690;}
	V1190= Cnil;
	goto T2689;
	goto T2690;
T2690:;
	base[1]= (VV[310]->s.s_gfdef);
	base[3]= (V1189);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk200)();
	vs_top=sup;
	V1190= vs_base[0];
	goto T2689;
T2689:;
	if(V1190==Cnil)goto T2688;
	base[1]= V1190;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2688;
T2688:;}
	{object V1191;
	if(((base0[1]->c.c_car))==Cnil){
	goto T2698;}{object V1193;
	V1193= CMPcaddr((V1189));
	if(V1193==Cnil)goto T2700;
	V1192= V1193;
	goto T2696;
	goto T2700;
T2700:;}
	V1192= CMPcadr((V1189));
	goto T2696;
	goto T2698;
T2698:;{object V1194;
	base[1]= (V1189);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk334)(Lclptr334);
	vs_top=sup;
	V1194= vs_base[0];
	if(V1194==Cnil)goto T2702;
	V1192= V1194;
	goto T2696;
	goto T2702;
T2702:;}
	base[1]= (V1189);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk335)(Lclptr335);
	vs_top=sup;
	V1192= vs_base[0];
	goto T2696;
T2696:;
	V1191= (VFUN_NARGS=3,(*(LnkLI249))(V1192,VV[74],(base0[0]->c.c_car)));
	if(((base0[2]->c.c_car))==Cnil){
	goto T2707;}
	if(!(((V1191))==(Ct))){
	goto T2710;}
	V1195= Ct;
	goto T2709;
	goto T2710;
T2710:;
	V1195= (((V1191))==(Cnil)?Ct:Cnil);
	goto T2709;
T2709:;
	base[1]= ((V1195)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2707;
T2707:;
	base[1]= (((V1191))==((base0[0]->c.c_car))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC147(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM159; VC159
	vs_check;
	{object V1196;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1196=(base[0]);
	vs_top=sup;
	base[1]= (base0[1]->c.c_car);
	base[2]= (V1196);
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk336)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC146(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM160; VC160
	vs_check;
	{object V1197;
	check_arg(1);
	V1197=(base[0]);
	vs_top=sup;
	{object V1198;
	if(!(type_of((V1197))==t_cons||((V1197))==Cnil)){
	goto T2717;}
	V1198= CMPcaddr((V1197));
	goto T2715;
	goto T2717;
T2717:;
	base[1]= (V1197);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk334)(Lclptr334);
	vs_top=sup;
	V1198= vs_base[0];
	goto T2715;
T2715:;
	base[1]= (VFUN_NARGS=2,(*(LnkLI249))((V1198),VV[62]));
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC145(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM161; VC161
	vs_check;
	{object V1199;
	check_arg(1);
	V1199=(base[0]);
	vs_top=sup;
	base[1]= (((V1199))==(Ct)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC144(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM162; VC162
	vs_check;
	{object V1200;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1200=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V1200);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk94)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC143(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM163; VC163
	vs_check;
	{object V1201;
	check_arg(1);
	V1201=(base[0]);
	vs_top=sup;
	base[1]= (((V1201))==(Ct)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC142(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM164; VC164
	vs_check;
	{object V1202;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1202=(base[0]);
	vs_top=sup;
	base[1]= (base0[1]->c.c_car);
	base[2]= (V1202);
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk337)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC141(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM165; VC165
	vs_check;
	{object V1203;
	check_arg(1);
	V1203=(base[0]);
	vs_top=sup;
	base[1]= (((V1203))==(Ct)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC140(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM166; VC166
	vs_check;
	{object V1204;
	object V1205;
	check_arg(2);
	V1204=(base[0]);
	V1205=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	base[3]= (V1204);
	base[4]= (V1205);
	base[5]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk338)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC139(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM167; VC167
	vs_check;
	{object V1206;
	check_arg(1);
	V1206=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= Cnil;
	base[3]= (V1206);
	base[4]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk338)();
	return;
	}
}
static void LnkT338(){ call_or_link(VV[338],(void **)(void *)&Lnk338);} /* ACCESSOR-MISS */
static void LnkT337(){ call_or_link(VV[337],(void **)(void *)&Lnk337);} /* CHECKING-MISS */
static void LnkT336(){ call_or_link(VV[336],(void **)(void *)&Lnk336);} /* CACHING-MISS */
static void LnkT335(ptr) object *ptr;{ call_or_link_closure(VV[335],(void **)(void *)&Lnk335,(void **)(void *)&Lclptr335);} /* METHOD-FUNCTION */
static void LnkT334(ptr) object *ptr;{ call_or_link_closure(VV[334],(void **)(void *)&Lnk334,(void **)(void *)&Lclptr334);} /* METHOD-FAST-FUNCTION */
static void LnkT333(){ call_or_link(VV[333],(void **)(void *)&Lnk333);} /* CONSTANT-VALUE-MISS */
static void LnkT332(){ call_or_link(VV[332],(void **)(void *)&Lnk332);} /* INITIAL-DFUN */
static object  LnkTLI331(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[331],(void **)(void *)&LnkLI331,4,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-SET-SLOT */
static void LnkT330(ptr) object *ptr;{ call_or_link_closure(VV[330],(void **)(void *)&Lnk330,(void **)(void *)&Lclptr330);} /* STANDARD-READER-METHOD-P */
static void LnkT329(ptr) object *ptr;{ call_or_link_closure(VV[329],(void **)(void *)&Lnk329,(void **)(void *)&Lclptr329);} /* STANDARD-WRITER-METHOD-P */
static void LnkT328(){ call_or_link(VV[328],(void **)(void *)&Lnk328);} /* ORDER-SPECIALIZERS */
static void LnkT327(ptr) object *ptr;{ call_or_link_closure(VV[327],(void **)(void *)&Lnk327,(void **)(void *)&Lclptr327);} /* CLASS-NAME */
static object  LnkTLI326(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[326],(void **)(void *)&LnkLI326,2,first,ap);va_end(ap);return V1;} /* CLASS-MIGHT-PRECEDE-P */
static object  LnkTLI325(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[325],(void **)(void *)&LnkLI325,1,first,ap);va_end(ap);return V1;} /* EARLY-CLASS-DIRECT-SUBCLASSES */
static void LnkT323(){ call_or_link(VV[323],(void **)(void *)&Lnk323);} /* SORT */
static object  LnkTLI318(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[318],(void **)(void *)&LnkLI318,1,first,ap);va_end(ap);return V1;} /* MAP-ALL-GENERIC-FUNCTIONS */
static object  LnkTLI317(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[317],(void **)(void *)&LnkLI317,1,first,ap);va_end(ap);return V1;} /* FREE-CACHE */
static object  LnkTLI316(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[316],(void **)(void *)&LnkLI316,2,first,ap);va_end(ap);return V1;} /* SET-FUNCALLABLE-INSTANCE-FUNCTION */
static void LnkT315(){ call_or_link(VV[315],(void **)(void *)&Lnk315);} /* SET-FUNCTION-NAME */
static object  LnkTLI314(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[314],(void **)(void *)&LnkLI314,2,first,ap);va_end(ap);return V1;} /* DOCTOR-DFUN-FOR-THE-DEBUGGER */
static void LnkT313(ptr) object *ptr;{ call_or_link_closure(VV[313],(void **)(void *)&Lnk313,(void **)(void *)&Lclptr313);} /* COMPUTE-DISCRIMINATING-FUNCTION */
static object  LnkTLI312(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[312],(void **)(void *)&LnkLI312,1,first,ap);va_end(ap);return V1;} /* MAKE-INITIAL-DFUN */
static object  LnkTLI311(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[311],(void **)(void *)&LnkLI311,1,first,ap);va_end(ap);return V1;} /* EARLY-GF-NAME */
static void LnkT310(ptr) object *ptr;{ call_or_link_closure(VV[310],(void **)(void *)&Lnk310,(void **)(void *)&Lclptr310);} /* EQL-SPECIALIZER-P */
static object  LnkTLI309(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[309],(void **)(void *)&LnkLI309,first,ap);va_end(ap);return V1;} /* COMPUTE-SECONDARY-DISPATCH-FUNCTION1 */
static void LnkT308(){ call_or_link(VV[308],(void **)(void *)&Lnk308);} /* GENERATE-DISCRIMINATION-NET */
static object  LnkTLI307(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[307],(void **)(void *)&LnkLI307,3,first,ap);va_end(ap);return V1;} /* STANDARD-COMPUTE-EFFECTIVE-METHOD */
static object  LnkTLI306(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[306],(void **)(void *)&LnkLI306,4,first,ap);va_end(ap);return V1;} /* MAKE-EFFECTIVE-METHOD-FUNCTION1 */
static object  LnkTLI305(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[305],(void **)(void *)&LnkLI305,3,first,ap);va_end(ap);return V1;} /* COMPUTE-EFFECTIVE-METHOD */
static void LnkT304(ptr) object *ptr;{ call_or_link_closure(VV[304],(void **)(void *)&Lnk304,(void **)(void *)&Lclptr304);} /* GENERIC-FUNCTION-METHOD-COMBINATION */
static object  LnkTLI303(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[303],(void **)(void *)&LnkLI303,8,first,ap);va_end(ap);return V1;} /* GET-SECONDARY-DISPATCH-FUNCTION2 */
static object  LnkTLI302(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[302],(void **)(void *)&LnkLI302,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT301(){ call_or_link(VV[301],(void **)(void *)&Lnk301);} /* SAUT-EQL */
static void LnkT300(){ call_or_link(VV[300],(void **)(void *)&Lnk300);} /* SAUT-CLASS-EQ */
static void LnkT299(){ call_or_link(VV[299],(void **)(void *)&Lnk299);} /* SAUT-PROTOTYPE */
static void LnkT298(){ call_or_link(VV[298],(void **)(void *)&Lnk298);} /* SAUT-CLASS */
static void LnkT297(){ call_or_link(VV[297],(void **)(void *)&Lnk297);} /* SAUT-NOT */
static void LnkT296(){ call_or_link(VV[296],(void **)(void *)&Lnk296);} /* SAUT-AND */
static void LnkT295(){ call_or_link(VV[295],(void **)(void *)&Lnk295);} /* TYPE-FROM-SPECIALIZER */
static void LnkT294(){ call_or_link(VV[294],(void **)(void *)&Lnk294);} /* CLASS-APPLICABLE-USING-CLASS-P */
static void LnkT293(ptr) object *ptr;{ call_or_link_closure(VV[293],(void **)(void *)&Lnk293,(void **)(void *)&Lclptr293);} /* CLASS-DIRECT-SUBCLASSES */
static object  LnkTLI292(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[292],(void **)(void *)&LnkLI292,2,first,ap);va_end(ap);return V1;} /* CLASSES-HAVE-COMMON-SUBCLASS-P */
static object  LnkTLI291(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[291],(void **)(void *)&LnkLI291,2,first,ap);va_end(ap);return V1;} /* SUPERCLASSES-COMPATIBLE-P */
static object  LnkTLI290(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[290],(void **)(void *)&LnkLI290,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI289(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[289],(void **)(void *)&LnkLI289,1,first,ap);va_end(ap);return V1;} /* TYPE-CLASS */
static object  LnkTLI288(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[288],(void **)(void *)&LnkLI288,2,first,ap);va_end(ap);return V1;} /* SAUT-NOT-EQL */
static object  LnkTLI287(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[287],(void **)(void *)&LnkLI287,2,first,ap);va_end(ap);return V1;} /* SAUT-NOT-PROTOTYPE */
static object  LnkTLI286(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[286],(void **)(void *)&LnkLI286,2,first,ap);va_end(ap);return V1;} /* SAUT-NOT-CLASS-EQ */
static object  LnkTLI285(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[285],(void **)(void *)&LnkLI285,2,first,ap);va_end(ap);return V1;} /* SAUT-NOT-CLASS */
static void LnkT284(){ call_or_link(VV[284],(void **)(void *)&Lnk284);} /* POSITION */
static object  LnkTLI283(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[283],(void **)(void *)&LnkLI283,2,first,ap);va_end(ap);return V1;} /* CLASS-CAN-PRECEDE-P */
static object  LnkTLI281(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[281],(void **)(void *)&LnkLI281,2,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-SLOT-INDEX */
static void LnkT280(ptr) object *ptr;{ call_or_link_closure(VV[280],(void **)(void *)&Lnk280,(void **)(void *)&Lclptr280);} /* SPECIALIZER-TYPE */
static void LnkT279(){ call_or_link(VV[279],(void **)(void *)&Lnk279);} /* STABLE-SORT */
static object  LnkTLI278(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[278],(void **)(void *)&LnkLI278,3,first,ap);va_end(ap);return V1;} /* SORT-METHODS */
static object  LnkTLI277(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[277],(void **)(void *)&LnkLI277,3,first,ap);va_end(ap);return V1;} /* SORT-APPLICABLE-METHODS */
static void LnkT146(){ call_or_link(VV[146],(void **)(void *)&Lnk146);} /* SPECIALIZER-APPLICABLE-USING-TYPE-P */
static void LnkT276(ptr) object *ptr;{ call_or_link_closure(VV[276],(void **)(void *)&Lnk276,(void **)(void *)&Lclptr276);} /* CLASS-FINALIZED-P */
static object  LnkTLI275(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[275],(void **)(void *)&LnkLI275,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-SPECIALIZERS */
static void LnkT274(ptr) object *ptr;{ call_or_link_closure(VV[274],(void **)(void *)&Lnk274,(void **)(void *)&Lclptr274);} /* SLOT-DEFINITION-LOCATION */
static object  LnkTLI273(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[273],(void **)(void *)&LnkLI273,1,first,ap);va_end(ap);return V1;} /* EARLY-SLOT-DEFINITION-LOCATION */
static void LnkT272(ptr) object *ptr;{ call_or_link_closure(VV[272],(void **)(void *)&Lnk272,(void **)(void *)&Lclptr272);} /* SLOT-ACCESSOR-STD-P */
static object  LnkTLI271(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[271],(void **)(void *)&LnkLI271,2,first,ap);va_end(ap);return V1;} /* FIND-SLOT-DEFINITION */
static object  LnkTLI270(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[270],(void **)(void *)&LnkLI270,1,first,ap);va_end(ap);return V1;} /* EARLY-SLOT-DEFINITION-NAME */
static object  LnkTLI269(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[269],(void **)(void *)&LnkLI269,1,first,ap);va_end(ap);return V1;} /* EARLY-CLASS-SLOTDS */
static void LnkT268(ptr) object *ptr;{ call_or_link_closure(VV[268],(void **)(void *)&Lnk268,(void **)(void *)&Lclptr268);} /* ACCESSOR-METHOD-SLOT-NAME */
static object  LnkTLI267(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[267],(void **)(void *)&LnkLI267,1,first,ap);va_end(ap);return V1;} /* EARLY-ACCESSOR-METHOD-SLOT-NAME */
static void LnkT266(ptr) object *ptr;{ call_or_link_closure(VV[266],(void **)(void *)&Lnk266,(void **)(void *)&Lclptr266);} /* STANDARD-ACCESSOR-METHOD-P */
static object  LnkTLI265(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[265],(void **)(void *)&LnkLI265,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-CLASS */
static void LnkT264(ptr) object *ptr;{ call_or_link_closure(VV[264],(void **)(void *)&Lnk264,(void **)(void *)&Lclptr264);} /* CLASS-PRECEDENCE-LIST */
static object  LnkTLI263(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[263],(void **)(void *)&LnkLI263,1,first,ap);va_end(ap);return V1;} /* EARLY-CLASS-PRECEDENCE-LIST */
static object  LnkTLI262(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[262],(void **)(void *)&LnkLI262,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-STANDARD-ACCESSOR-P */
static void LnkT261(ptr) object *ptr;{ call_or_link_closure(VV[261],(void **)(void *)&Lnk261,(void **)(void *)&Lclptr261);} /* METHOD-QUALIFIERS */
static object  LnkTLI260(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[260],(void **)(void *)&LnkLI260,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-QUALIFIERS */
static void LnkT259(){ call_or_link(VV[259],(void **)(void *)&Lnk259);} /* ACCESSOR-VALUES-INTERNAL */
static void LnkT257(){ call_or_link(VV[257],(void **)(void *)&Lnk257);} /* ACCESSOR-VALUES */
static object  LnkTLI256(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[256],(void **)(void *)&LnkLI256,1,first,ap);va_end(ap);return V1;} /* DEFAULT-SECONDARY-DISPATCH-FUNCTION */
static void LnkT255(ptr) object *ptr;{ call_or_link_closure(VV[255],(void **)(void *)&Lnk255,(void **)(void *)&Lclptr255);} /* COMPUTE-APPLICABLE-METHODS-USING-CLASSES */
static void LnkT254(){ call_or_link(VV[254],(void **)(void *)&Lnk254);} /* COMPUTE-APPLICABLE-METHODS-USING-TYPES */
static void LnkT253(){ call_or_link(VV[253],(void **)(void *)&Lnk253);} /* CACHE-MISS-VALUES-INTERNAL */
static object  LnkTLI252(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[252],(void **)(void *)&LnkLI252,1,first,ap);va_end(ap);return V1;} /* CHECK-WRAPPER-VALIDITY */
static object  LnkTLI251(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[251],(void **)(void *)&LnkLI251,1,first,ap);va_end(ap);return V1;} /* WRAPPER-OF */
static void LnkT250(ptr) object *ptr;{ call_or_link_closure(VV[250],(void **)(void *)&Lnk250,(void **)(void *)&Lclptr250);} /* NO-APPLICABLE-METHOD */
static object  LnkTLI249(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[249],(void **)(void *)&LnkLI249,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-GET */
static void LnkT248(){ call_or_link(VV[248],(void **)(void *)&Lnk248);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI247(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[247],(void **)(void *)&LnkLI247,first,ap);va_end(ap);return V1;} /* FILL-CACHE */
static void LnkT246(){ call_or_link(VV[246],(void **)(void *)&Lnk246);} /* MAKE-FINAL-CHECKING-DFUN */
static void LnkT245(){ call_or_link(VV[245],(void **)(void *)&Lnk245);} /* GET-SECONDARY-DISPATCH-FUNCTION */
static void LnkT244(){ call_or_link(VV[244],(void **)(void *)&Lnk244);} /* MAKE-FINAL-DISPATCH-DFUN */
static void LnkT243(){ call_or_link(VV[243],(void **)(void *)&Lnk243);} /* MAKE-FINAL-CONSTANT-VALUE-DFUN */
static void LnkT242(ptr) object *ptr;{ call_or_link_closure(VV[242],(void **)(void *)&Lnk242,(void **)(void *)&Lclptr242);} /* METHOD-SPECIALIZERS */
static object  LnkTLI241(){return call_proc0(VV[241],(void **)(void *)&LnkLI241);} /* NO-METHODS-DFUN-INFO */
static void LnkT240(){ call_or_link(VV[240],(void **)(void *)&Lnk240);} /* MAKE-FINAL-CACHING-DFUN */
static void LnkT239(){ call_or_link(VV[239],(void **)(void *)&Lnk239);} /* MAKE-FINAL-N-N-ACCESSOR-DFUN */
static void LnkT238(){ call_or_link(VV[238],(void **)(void *)&Lnk238);} /* MAKE-FINAL-ONE-INDEX-ACCESSOR-DFUN */
static void LnkT237(){ call_or_link(VV[237],(void **)(void *)&Lnk237);} /* MAKE-TWO-CLASS-ACCESSOR-DFUN */
static void LnkT236(ptr) object *ptr;{ call_or_link_closure(VV[236],(void **)(void *)&Lnk236,(void **)(void *)&Lclptr236);} /* CLASS-WRAPPER */
static void LnkT235(){ call_or_link(VV[235],(void **)(void *)&Lnk235);} /* MAKE-ACCESSOR-TABLE */
static void LnkT94(){ call_or_link(VV[94],(void **)(void *)&Lnk94);} /* INVOKE-EMF */
static void LnkT232(){ call_or_link(VV[232],(void **)(void *)&Lnk232);} /* MAKE-ONE-CLASS-ACCESSOR-DFUN */
static void LnkT85(){ call_or_link(VV[85],(void **)(void *)&Lnk85);} /* CACHE-MISS-VALUES */
static void LnkT231(){ call_or_link(VV[231],(void **)(void *)&Lnk231);} /* EARLY-METHOD-STANDARD-ACCESSOR-SLOT-NAME */
static object  LnkTLI230(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[230],(void **)(void *)&LnkLI230,first,ap);va_end(ap);return V1;} /* SET-DFUN */
static void LnkT229(){ call_or_link(VV[229],(void **)(void *)&Lnk229);} /* MAKE-FINAL-ACCESSOR-DFUN */
static object  LnkTLI228(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[228],(void **)(void *)&LnkLI228,2,first,ap);va_end(ap);return V1;} /* MAKE-EARLY-ACCESSOR */
static object  LnkTLI227(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[227],(void **)(void *)&LnkLI227,1,first,ap);va_end(ap);return V1;} /* FINAL-ACCESSOR-DFUN-TYPE */
static void LnkT226(){ call_or_link(VV[226],(void **)(void *)&Lnk226);} /* MAKE-FINAL-DFUN-INTERNAL */
static object  LnkTLI225(){return call_proc0(VV[225],(void **)(void *)&LnkLI225);} /* INITIAL-DFUN-INFO */
static void LnkT224(){ call_or_link(VV[224],(void **)(void *)&Lnk224);} /* INSURE-DFUN */
static object  LnkTLI223(){return call_proc0(VV[223],(void **)(void *)&LnkLI223);} /* INITIAL-DISPATCH-DFUN-INFO */
static object  LnkTLI222(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[222],(void **)(void *)&LnkLI222,first,ap);va_end(ap);return V1;} /* PRECOMPUTE-EFFECTIVE-METHODS */
static object  LnkTLI221(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[221],(void **)(void *)&LnkLI221,5,first,ap);va_end(ap);return V1;} /* MAKE-EMF-CACHE */
static object  LnkTLI220(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[220],(void **)(void *)&LnkLI220,1,first,ap);va_end(ap);return V1;} /* GF-DFUN-CACHE */
static object  LnkTLI219(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[219],(void **)(void *)&LnkLI219,1,first,ap);va_end(ap);return V1;} /* COPY-CACHE */
static object  LnkTLI218(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[218],(void **)(void *)&LnkLI218,1,first,ap);va_end(ap);return V1;} /* GF-DFUN-INFO */
static object  LnkTLI217(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[217],(void **)(void *)&LnkLI217,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-NKEYS */
static object  LnkTLI216(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[216],(void **)(void *)&LnkLI216,first,ap);va_end(ap);return V1;} /* GET-SECONDARY-DISPATCH-FUNCTION1 */
static object  LnkTLI215(){return call_proc0(VV[215],(void **)(void *)&LnkLI215);} /* DISPATCH-DFUN-INFO */
static void LnkT214(){ call_or_link(VV[214],(void **)(void *)&Lnk214);} /* GET-DISPATCH-FUNCTION */
static object  LnkTLI213(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[213],(void **)(void *)&LnkLI213,1,first,ap);va_end(ap);return V1;} /* METHODS-CONTAIN-EQL-SPECIALIZER-P */
static void LnkT212(){ call_or_link(VV[212],(void **)(void *)&Lnk212);} /* GENERATE-DISCRIMINATION-NET-INTERNAL */
static object  LnkTLI210(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[210],(void **)(void *)&LnkLI210,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static void LnkT209(){ call_or_link(VV[209],(void **)(void *)&Lnk209);} /* DISPATCH-DFUN-COST */
static object  LnkTLI208(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[208],(void **)(void *)&LnkLI208,1,first,ap);va_end(ap);return V1;} /* CACHING-DFUN-COST */
static object  LnkTLI207(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[207],(void **)(void *)&LnkLI207,1,first,ap);va_end(ap);return V1;} /* CONSTANT-VALUE-DFUN-INFO */
static void LnkT206(){ call_or_link(VV[206],(void **)(void *)&Lnk206);} /* NOTANY */
static object  LnkTLI205(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[205],(void **)(void *)&LnkLI205,1,first,ap);va_end(ap);return V1;} /* COMPUTE-APPLICABLE-METHODS-EMF-STD-P */
static object  LnkTLI204(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[204],(void **)(void *)&LnkLI204,1,first,ap);va_end(ap);return V1;} /* CACHING-DFUN-INFO */
static void LnkT202(){ call_or_link(VV[202],(void **)(void *)&Lnk202);} /* MAKE-CONSTANT-VALUE-DFUN */
static object  LnkTLI201(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[201],(void **)(void *)&LnkLI201,first,ap);va_end(ap);return V1;} /* USE-CONSTANT-VALUE-DFUN-P */
static void LnkT200(){ call_or_link(VV[200],(void **)(void *)&Lnk200);} /* SOME */
static void LnkT199(ptr) object *ptr;{ call_or_link_closure(VV[199],(void **)(void *)&Lnk199,(void **)(void *)&Lclptr199);} /* GENERIC-FUNCTION-METHODS */
static object  LnkTLI198(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[198],(void **)(void *)&LnkLI198,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT197(){ call_or_link(VV[197],(void **)(void *)&Lnk197);} /* CCLOSURE-ENV-NTHCDR */
static object  LnkTLI196(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[196],(void **)(void *)&LnkLI196,1,first,ap);va_end(ap);return V1;} /* EARLY-GF-P */
static void LnkT193(){ call_or_link(VV[193],(void **)(void *)&Lnk193);} /* MAKE-CHECKING-DFUN */
static object  LnkTLI192(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[192],(void **)(void *)&LnkLI192,5,first,ap);va_end(ap);return V1;} /* MAKE-FINAL-ORDINARY-DFUN-INTERNAL */
static object  LnkTLI191(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[191],(void **)(void *)&LnkLI191,2,first,ap);va_end(ap);return V1;} /* CHECKING-DFUN-INFO */
static object  LnkTLI189(){return call_proc0(VV[189],(void **)(void *)&LnkLI189);} /* DEFAULT-METHOD-ONLY-DFUN-INFO */
static void LnkT188(){ call_or_link(VV[188],(void **)(void *)&Lnk188);} /* EVERY */
static void LnkT187(){ call_or_link(VV[187],(void **)(void *)&Lnk187);} /* GET-GENERIC-FUNCTION-INFO */
static void LnkT186(){ call_or_link(VV[186],(void **)(void *)&Lnk186);} /* MAKE-DISPATCH-DFUN */
static object  LnkTLI185(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[185],(void **)(void *)&LnkLI185,first,ap);va_end(ap);return V1;} /* USE-DISPATCH-DFUN-P */
static void LnkT184(){ call_or_link(VV[184],(void **)(void *)&Lnk184);} /* MAKE-CACHING-DFUN */
static object  LnkTLI183(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[183],(void **)(void *)&LnkLI183,1,first,ap);va_end(ap);return V1;} /* USE-CACHING-DFUN-P */
static void LnkT182(){ call_or_link(VV[182],(void **)(void *)&Lnk182);} /* MAKE-N-N-ACCESSOR-DFUN */
static object  LnkTLI181(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[181],(void **)(void *)&LnkLI181,2,first,ap);va_end(ap);return V1;} /* N-N-DFUN-INFO */
static object  LnkTLI179(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[179],(void **)(void *)&LnkLI179,257,first,ap);va_end(ap);return V1;} /* DEFAULT-LIMIT-FN */
static void LnkT178(){ call_or_link(VV[178],(void **)(void *)&Lnk178);} /* MAKE-ONE-INDEX-ACCESSOR-DFUN */
static object  LnkTLI177(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[177],(void **)(void *)&LnkLI177,first,ap);va_end(ap);return V1;} /* FILL-DFUN-CACHE */
static object  LnkTLI37(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[37],(void **)(void *)&LnkLI37,3,first,ap);va_end(ap);return V1;} /* ONE-INDEX-DFUN-INFO */
static object  LnkTLI175(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[175],(void **)(void *)&LnkLI175,262148,first,ap);va_end(ap);return V1;} /* GET-CACHE */
static object  LnkTLI174(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[174],(void **)(void *)&LnkLI174,4,first,ap);va_end(ap);return V1;} /* TWO-CLASS-DFUN-INFO */
static object  LnkTLI173(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[173],(void **)(void *)&LnkLI173,2,first,ap);va_end(ap);return V1;} /* ACCESSOR-MISS-FUNCTION */
static void LnkT172(){ call_or_link(VV[172],(void **)(void *)&Lnk172);} /* GET-DFUN-CONSTRUCTOR */
static object  LnkTLI171(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[171],(void **)(void *)&LnkLI171,3,first,ap);va_end(ap);return V1;} /* ONE-CLASS-DFUN-INFO */
static object  LnkTLI165(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[165],(void **)(void *)&LnkLI165,2,first,ap);va_end(ap);return V1;} /* PRINTING-RANDOM-THING-INTERNAL */
static object  LnkTLI163(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[163],(void **)(void *)&LnkLI163,3,first,ap);va_end(ap);return V1;} /* MAKE-TOP-LEVEL-FORM */
static object  LnkTLI49(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[49],(void **)(void *)&LnkLI49,first,ap);va_end(ap);return V1;} /* UPDATE-DFUN */
static void LnkT162(ptr) object *ptr;{ call_or_link_closure(VV[162],(void **)(void *)&Lnk162,(void **)(void *)&Lclptr162);} /* GENERIC-FUNCTION-NAME */
static void LnkT161(ptr) object *ptr;{ call_or_link_closure(VV[161],(void **)(void *)&Lnk161,(void **)(void *)&Lclptr161);} /* GF-ARG-INFO */
static object  LnkTLI160(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[160],(void **)(void *)&LnkLI160,1,first,ap);va_end(ap);return V1;} /* GFS-OF-TYPE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

