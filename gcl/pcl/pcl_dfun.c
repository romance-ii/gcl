
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
	V24 = (V19);
	if(((V20))!=Cnil){
	goto T79;}
	V25= VV[11];
	goto T77;
	goto T79;
T79:;
	V25= Cnil;
	goto T77;
T77:;
	V26 = (V20);
	V22= list(4,V23,V24,V25,V26);
	if(((V13))==Cnil){
	goto T82;}
	{object V29;
	V29= make_cons(V22,CMPcdr(V13));
	(V13)->c.c_cdr = (V29);
	goto T73;}
	goto T82;
T82:;
	{object V30;
	V30= list(2,(V6),(V22));
	(VV[4]->s.s_dbind)= make_cons((V30),(VV[4]->s.s_dbind));}}
	goto T73;
T73:;
	base[4]= (V19);
	base[5]= (V20);
	vs_top=(vs_base=base+4)+2;
	return;}}
	}
}
/*	local entry for function LOAD-PRECOMPILED-DFUN-CONSTRUCTOR	*/

static object LI3(V35,V36,V37,V38)

object V35;object V36;object V37;object V38;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V39;
	register object V40;
	{register object x= (V35),V41= (VV[4]->s.s_dbind);
	while(V41!=Cnil)
	if(EQ(x,V41->c.c_car->c.c_car) &&V41->c.c_car != Cnil){
	V39= (V41->c.c_car);
	goto T90;
	}else V41=V41->c.c_cdr;
	V39= Cnil;}
	goto T90;
T90:;
	{register object x= (V36),V42= CMPcdr((V39));
	while(V42!=Cnil)
	if(equal(x,V42->c.c_car->c.c_car) &&V42->c.c_car != Cnil){
	V40= (V42->c.c_car);
	goto T91;
	}else V42=V42->c.c_cdr;
	V40= Cnil;}
	goto T91;
T91:;
	if(((V40))==Cnil){
	goto T93;}
	if((CMPcadddr((V40)))==Cnil){
	goto T96;}
	{object V43;
	register object V44;
	object V45;
	{object V46= (V35);
	if((V46!= VV[61]))goto T99;
	V43= VV[12];
	goto T98;
	goto T99;
T99:;
	if((V46!= VV[68]))goto T100;
	V43= VV[13];
	goto T98;
	goto T100;
T100:;
	if((V46!= VV[69]))goto T101;
	V43= VV[14];
	goto T98;
	goto T101;
T101:;
	if((V46!= VV[60]))goto T102;
	V43= VV[15];
	goto T98;
	goto T102;
T102:;
	V43= Cnil;}
	goto T98;
T98:;
	V44= CMPcar((V36));
	if(((V43))==Cnil){
	goto T106;}
	V45= (*(LnkLI160))((V43));
	goto T104;
	goto T106;
T106:;
	V45= Cnil;
	goto T104;
T104:;
	{register object V47;
	register object V48;
	V47= (V45);
	V48= CMPcar((V47));
	goto T112;
T112:;
	if(!(((V47))==Cnil)){
	goto T113;}
	goto T108;
	goto T113;
T113:;
	base[6]= (V48);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk161)(Lclptr161);
	vs_top=sup;
	V49= vs_base[0];
	if(!(equal((V44),STREF(object,V49,8)))){
	goto T117;}
	{register object V50;
	base[6]= (V48);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk162)(Lclptr162);
	vs_top=sup;
	V50= vs_base[0];
	if(((((V50))==(VV[17])?Ct:Cnil))==Cnil){
	goto T126;}
	goto T117;
	goto T126;
T126:;
	if(((equal((V50),VV[18])?Ct:Cnil))==Cnil){
	goto T128;}
	goto T117;
	goto T128;
T128:;
	if(!(((((V50))==(VV[19])?Ct:Cnil))==Cnil)){
	goto T117;}}
	(void)((VFUN_NARGS=1,(*(LnkLI49))((V48))));
	goto T117;
T117:;
	V47= CMPcdr((V47));
	V48= CMPcar((V47));
	goto T112;}
	goto T108;
T108:;
	(CMPcdr(V40))->c.c_car = V38;
	(void)(CMPcdr(V40));
	(CMPcddr(V40))->c.c_car = V37;
	(void)(CMPcddr(V40));
	(CMPcdddr(V40))->c.c_car = Cnil;
	(void)(CMPcdddr(V40));
	{object V57 = Cnil;
	VMR3(V57)}}
	goto T96;
T96:;
	{object V58 = Cnil;
	VMR3(V58)}
	goto T93;
T93:;
	{object V59;
	V59= list(4,(V36),(V38),(V37),Cnil);
	if(((V39))==Cnil){
	goto T142;}
	{object V62;
	V62= make_cons(V59,CMPcdr(V39));
	(V39)->c.c_cdr = (V62);
	{object V63 = (V62);
	VMR3(V63)}}
	goto T142;
T142:;
	{object V64;
	V64= list(2,(V35),(V59));
	(VV[4]->s.s_dbind)= make_cons((V64),(VV[4]->s.s_dbind));
	{object V65 = (VV[4]->s.s_dbind);
	VMR3(V65)}}}}
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
	{object V66=base[0]->c.c_cdr;
	if(endp(V66)){
	base[2]= Cnil;
	} else {
	base[2]= (V66->c.c_car);
	V66=V66->c.c_cdr;}
	if(!endp(V66))invalid_macro_call();}
	bds_bind(VV[20],Ct);
	{register object V68;
	register object V69;
	V68= Cnil;
	V69= Cnil;
	{register object V70;
	register object V71;
	V70= (VV[4]->s.s_dbind);
	V71= CMPcar((V70));
	goto T156;
T156:;
	if(!(((V70))==Cnil)){
	goto T157;}
	goto T152;
	goto T157;
T157:;
	{register object V72;
	register object V73;
	V72= CMPcdr((V71));
	V73= CMPcar((V72));
	goto T165;
T165:;
	if(!(((V72))==Cnil)){
	goto T166;}
	goto T161;
	goto T166;
T166:;
	if((CMPcaddr((V73)))==Cnil){
	goto T171;}
	if(!((CMPcaddr((V73)))==(base[2]))){
	goto T170;}
	goto T171;
T171:;
	if((base[2])==Cnil){
	goto T175;}
	{register object V74;
	register object V75;
	V74= (V73);
	V75= base[2];
	(CMPcddr((V74)))->c.c_car = (V75);
	(void)(CMPcddr((V74)));}
	goto T175;
T175:;
	{register object V76;
	V77= list(2,VV[22],CMPcar((V71)));
	V78= list(2,VV[25],CMPcar((V71)));
	V79= list(2,VV[25],CMPcar((V73)));
	V80= list(2,VV[25],base[2]);
	base[8]= CMPcar((V71));
	vs_top=(vs_base=base+8)+1;
	Lsymbol_function();
	vs_top=sup;
	base[7]= vs_base[0];
	{object V82;
	V82= CMPcar((V73));
	 vs_top=base+8;
	 while(V82!=Cnil)
	 {vs_push((V82)->c.c_car);V82=(V82)->c.c_cdr;}
	vs_base=base+8;}
	{object _funobj = base[7];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V81= vs_base[0];
	V83= list(5,VV[24],/* INLINE-ARGS */V78,/* INLINE-ARGS */V79,/* INLINE-ARGS */V80,V81);
	V76= (*(LnkLI163))(/* INLINE-ARGS */V77,VV[23],/* INLINE-ARGS */V83);
	if(((V68))!=Cnil){
	goto T187;}
	V69= make_cons((V76),Cnil);
	V68= (V69);
	goto T170;
	goto T187;
T187:;
	V85= make_cons((V76),Cnil);
	((V69))->c.c_cdr = /* INLINE-ARGS */V85;
	V84= (V69);
	V69= CMPcdr(V84);}
	goto T170;
T170:;
	V72= CMPcdr((V72));
	V73= CMPcar((V72));
	goto T165;}
	goto T161;
T161:;
	V70= CMPcdr((V70));
	V71= CMPcar((V70));
	goto T156;}
	goto T152;
T152:;
	V67= (V68);}
	base[4]= make_cons(VV[21],V67);
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	return;
}
/*	local entry for function __si::MAKE-DFUN-INFO	*/

static object LI5(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	{object V86;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI5key,first,ap);
	V86=(Vcs[0]);
	base[0]= VV[26];
	base[1]= (V86);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V87 = vs_base[0];
	VMR5(V87)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function PRINT-DFUN-INFO	*/

static object LI6(V91,V92,V93)

object V91;register object V92;object V93;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	base[0]= (V92);
	base[1]= VV[27];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	base[0]= (V92);
	base[1]= VV[28];
	base[3]= (V91);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	base[0]= (V92);
	base[1]= VV[29];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI165))((V91),(V92)));
	base[0]= (V92);
	base[1]= VV[30];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{object V94 = vs_base[0];
	VMR6(V94)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-NO-METHODS	*/

static object LI7(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{object V95;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI7key,first,ap);
	V95=(Vcs[0]);
	base[0]= VV[31];
	base[1]= (V95);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V96 = vs_base[0];
	VMR7(V96)}
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
	{object V98 = vs_base[0];
	VMR8(V98)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-INITIAL	*/

static object LI9(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V99;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI9key,first,ap);
	V99=(Vcs[0]);
	base[0]= VV[32];
	base[1]= (V99);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V100 = vs_base[0];
	VMR9(V100)}
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
	{object V102 = vs_base[0];
	VMR10(V102)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-INITIAL-DISPATCH	*/

static object LI11(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V103;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI11key,first,ap);
	V103=(Vcs[0]);
	base[0]= VV[33];
	base[1]= (V103);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V104 = vs_base[0];
	VMR11(V104)}
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
	{object V106 = vs_base[0];
	VMR12(V106)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-DISPATCH	*/

static object LI13(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB13 VMS13 VMV13
	{object V107;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI13key,first,ap);
	V107=(Vcs[0]);
	base[0]= VV[34];
	base[1]= (V107);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V108 = vs_base[0];
	VMR13(V108)}
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
	{object V110 = vs_base[0];
	VMR14(V110)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-DEFAULT-METHOD-ONLY	*/

static object LI15(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB15 VMS15 VMV15
	{object V111;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI15key,first,ap);
	V111=(Vcs[0]);
	base[0]= VV[15];
	base[1]= (V111);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V112 = vs_base[0];
	VMR15(V112)}
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
	{object V114 = vs_base[0];
	VMR16(V114)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-ACCESSOR-DFUN-INFO	*/

static object LI17(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB17 VMS17 VMV17
	{object V115;
	object V116;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI17key,first,ap);
	V115=(Vcs[0]);
	V116=(Vcs[1]);
	base[0]= VV[35];
	base[1]= (V115);
	base[2]= (V116);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V117 = vs_base[0];
	VMR17(V117)}
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
	{object V118=base[0]->c.c_cdr;
	if(endp(V118))invalid_macro_call();
	base[2]= (V118->c.c_car);
	V118=V118->c.c_cdr;
	if(!endp(V118))invalid_macro_call();}
	base[3]= list(2,VV[36],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-ONE-INDEX-DFUN-INFO	*/

static object LI19(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB19 VMS19 VMV19
	{object V119;
	object V120;
	object V121;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI19key,first,ap);
	V119=(Vcs[0]);
	V120=(Vcs[1]);
	V121=(Vcs[2]);
	base[0]= VV[37];
	base[1]= (V119);
	base[2]= (V120);
	base[3]= (V121);
	vs_top=(vs_base=base+0)+4;
	siLmake_structure();
	vs_top=sup;
	{object V122 = vs_base[0];
	VMR19(V122)}
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
	{object V123=base[0]->c.c_cdr;
	if(endp(V123))invalid_macro_call();
	base[2]= (V123->c.c_car);
	V123=V123->c.c_cdr;
	if(!endp(V123))invalid_macro_call();}
	base[3]= list(2,VV[38],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-N-N	*/

static object LI21(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB21 VMS21 VMV21
	{object V124;
	object V125;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI21key,first,ap);
	V124=(Vcs[0]);
	V125=(Vcs[1]);
	base[0]= VV[39];
	base[1]= (V124);
	base[2]= (V125);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V126 = vs_base[0];
	VMR21(V126)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function N-N-DFUN-INFO	*/

static object LI22(V129,V130)

object V129;object V130;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	base[0]= VV[39];
	base[1]= (V130);
	base[2]= (V129);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V131 = vs_base[0];
	VMR22(V131)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-ONE-CLASS	*/

static object LI23(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{object V132;
	object V133;
	object V134;
	object V135;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI23key,first,ap);
	V132=(Vcs[0]);
	V133=(Vcs[1]);
	V134=(Vcs[2]);
	V135=(Vcs[3]);
	base[0]= VV[40];
	base[1]= (V132);
	base[2]= (V133);
	base[3]= (V134);
	base[4]= (V135);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V136 = vs_base[0];
	VMR23(V136)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function ONE-CLASS-DFUN-INFO	*/

static object LI24(V140,V141,V142)

object V140;object V141;object V142;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	base[0]= VV[40];
	base[1]= Cnil;
	base[2]= (V140);
	base[3]= (V141);
	base[4]= (V142);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V144 = vs_base[0];
	VMR24(V144)}
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
	{object V145=base[0]->c.c_cdr;
	if(endp(V145))invalid_macro_call();
	base[2]= (V145->c.c_car);
	V145=V145->c.c_cdr;
	if(!endp(V145))invalid_macro_call();}
	base[3]= list(2,VV[41],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-TWO-CLASS	*/

static object LI26(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{object V146;
	object V147;
	object V148;
	object V149;
	object V150;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI26key,first,ap);
	V146=(Vcs[0]);
	V147=(Vcs[1]);
	V148=(Vcs[2]);
	V149=(Vcs[3]);
	V150=(Vcs[4]);
	base[0]= VV[42];
	base[1]= (V146);
	base[2]= (V147);
	base[3]= (V148);
	base[4]= (V149);
	base[5]= (V150);
	vs_top=(vs_base=base+0)+6;
	siLmake_structure();
	vs_top=sup;
	{object V151 = vs_base[0];
	VMR26(V151)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function TWO-CLASS-DFUN-INFO	*/

static object LI27(V156,V157,V158,V159)

object V156;object V157;object V158;object V159;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	base[0]= VV[42];
	base[1]= Cnil;
	base[2]= (V156);
	base[3]= (V157);
	base[4]= (V158);
	base[5]= (V159);
	vs_top=(vs_base=base+0)+6;
	siLmake_structure();
	vs_top=sup;
	{object V161 = vs_base[0];
	VMR27(V161)}
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
	{object V162=base[0]->c.c_cdr;
	if(endp(V162))invalid_macro_call();
	base[2]= (V162->c.c_car);
	V162=V162->c.c_cdr;
	if(!endp(V162))invalid_macro_call();}
	base[3]= list(2,VV[43],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-ONE-INDEX	*/

static object LI29(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB29 VMS29 VMV29
	{object V163;
	object V164;
	object V165;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI29key,first,ap);
	V163=(Vcs[0]);
	V164=(Vcs[1]);
	V165=(Vcs[2]);
	base[0]= VV[44];
	base[1]= (V163);
	base[2]= (V164);
	base[3]= (V165);
	vs_top=(vs_base=base+0)+4;
	siLmake_structure();
	vs_top=sup;
	{object V166 = vs_base[0];
	VMR29(V166)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function ONE-INDEX-DFUN-INFO	*/

static object LI30(V170,V171,V172)

object V170;object V171;object V172;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	base[0]= VV[44];
	base[1]= (V172);
	base[2]= (V170);
	base[3]= (V171);
	vs_top=(vs_base=base+0)+4;
	siLmake_structure();
	vs_top=sup;
	{object V173 = vs_base[0];
	VMR30(V173)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-CHECKING	*/

static object LI31(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB31 VMS31 VMV31
	{object V174;
	object V175;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI31key,first,ap);
	V174=(Vcs[0]);
	V175=(Vcs[1]);
	base[0]= VV[12];
	base[1]= (V174);
	base[2]= (V175);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V176 = vs_base[0];
	VMR31(V176)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function CHECKING-DFUN-INFO	*/

static object LI32(V179,V180)

object V179;object V180;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	base[0]= VV[12];
	base[1]= (V180);
	base[2]= (V179);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V181 = vs_base[0];
	VMR32(V181)}
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
	{object V182=base[0]->c.c_cdr;
	if(endp(V182))invalid_macro_call();
	base[2]= (V182->c.c_car);
	V182=V182->c.c_cdr;
	if(!endp(V182))invalid_macro_call();}
	base[3]= list(2,VV[45],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-CACHING	*/

static object LI34(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB34 VMS34 VMV34
	{object V183;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI34key,first,ap);
	V183=(Vcs[0]);
	base[0]= VV[13];
	base[1]= (V183);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V184 = vs_base[0];
	VMR34(V184)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function CACHING-DFUN-INFO	*/

static object LI35(V186)

object V186;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	base[0]= VV[13];
	base[1]= (V186);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V187 = vs_base[0];
	VMR35(V187)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-CONSTANT-VALUE	*/

static object LI36(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{object V188;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI36key,first,ap);
	V188=(Vcs[0]);
	base[0]= VV[14];
	base[1]= (V188);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V189 = vs_base[0];
	VMR36(V189)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function CONSTANT-VALUE-DFUN-INFO	*/

static object LI37(V191)

object V191;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	base[0]= VV[14];
	base[1]= (V191);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V192 = vs_base[0];
	VMR37(V192)}
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
	{object V193=base[0]->c.c_cdr;
	if(endp(V193))invalid_macro_call();
	base[2]= (V193->c.c_car);
	V193=V193->c.c_cdr;
	if(endp(V193))invalid_macro_call();
	base[3]= (V193->c.c_car);
	V193=V193->c.c_cdr;
	base[4]= V193;}
	V194= listA(4,VV[48],base[3],base[2],base[4]);
	base[5]= list(4,VV[46],VV[47],/* INLINE-ARGS */V194,listA(3,VV[49],base[2],VV[50]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function ACCESSOR-MISS-FUNCTION	*/

static object LI40(V197,V198)

object V197;object V198;
{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	base[0]=MMcons((V198),Cnil);
	base[1]=MMcons((V197),base[0]);
	{object V199= STREF(object,(base[0]->c.c_car),4);
	if((V199!= VV[51]))goto T296;
	{object V200 = 
	make_cclosure_new(LC139,Cnil,base[1],Cdata);
	VMR39(V200)}
	goto T296;
T296:;
	if((V199!= VV[123]))goto T297;
	{object V201 = 
	make_cclosure_new(LC140,Cnil,base[1],Cdata);
	VMR39(V201)}
	goto T297;
T297:;
	FEerror("The ECASE key value ~s is illegal.",1,V199);
	{object V202 = Cnil;
	VMR39(V202)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-ONE-CLASS-ACCESSOR-DFUN	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	{object V203;
	object V204;
	object V205;
	object V206;
	check_arg(4);
	V203=(base[0]);
	V204=(base[1]);
	V205=(base[2]);
	V206=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V207;
	object V208;
	if(!(((V204))==(VV[51]))){
	goto T300;}
	V207= VV[52];
	goto T298;
	goto T300;
T300:;
	V207= VV[53];
	goto T298;
T298:;
	V208= (*(LnkLI171))((V204),(V206),(V205));
	base[6]= (V207);
	base[7]= (type_of((V206))==t_cons?Ct:Cnil);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk172)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V205);
	base[7]= (V206);
	base[8]= (*(LnkLI173))((V203),(V208));
	vs_top=(vs_base=base+6)+3;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= Cnil;
	base[6]= (V208);
	vs_top=(vs_base=base+4)+3;
	return;}
	}
}
/*	function definition for MAKE-TWO-CLASS-ACCESSOR-DFUN	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	{object V209;
	object V210;
	object V211;
	object V212;
	object V213;
	check_arg(5);
	V209=(base[0]);
	V210=(base[1]);
	V211=(base[2]);
	V212=(base[3]);
	V213=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V214;
	object V215;
	if(!(((V210))==(VV[51]))){
	goto T314;}
	V214= VV[54];
	goto T312;
	goto T314;
T314:;
	V214= VV[55];
	goto T312;
T312:;
	V215= (*(LnkLI174))((V210),(V213),(V211),(V212));
	base[7]= (V214);
	base[8]= (type_of((V213))==t_cons?Ct:Cnil);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk172)();
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= (V211);
	base[8]= (V212);
	base[9]= (V213);
	base[10]= (*(LnkLI173))((V209),(V215));
	vs_top=(vs_base=base+7)+4;
	{object _funobj = base[6];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= Cnil;
	base[7]= (V215);
	vs_top=(vs_base=base+5)+3;
	return;}
	}
}
/*	function definition for MAKE-ONE-INDEX-ACCESSOR-DFUN	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	{object V216;
	object V217;
	object V218;
	object V219;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V216=(base[0]);
	V217=(base[1]);
	V218=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T327;}
	V219=(base[3]);
	vs_top=sup;
	goto T328;
	goto T327;
T327:;
	V219= Cnil;
	goto T328;
T328:;
	{object V220;
	object V221;
	object V222;
	if(!(((V217))==(VV[51]))){
	goto T332;}
	V220= VV[56];
	goto T330;
	goto T332;
T332:;
	V220= VV[57];
	goto T330;
T330:;
	if((V219)!=Cnil){
	V221= (V219);
	goto T334;}
	V223= (VV[176]->s.s_gfdef);
	V221= (*(LnkLI175))(small_fixnum(1),Cnil,V223,4);
	goto T334;
T334:;
	V222= (*(LnkLI37))((V217),(V218),(V221));
	base[9]= (V220);
	base[10]= (type_of((V218))==t_cons?Ct:Cnil);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk172)();
	vs_top=sup;
	base[8]= vs_base[0];
	base[9]= (V221);
	base[10]= (V218);
	base[11]= (*(LnkLI173))((V216),(V222));
	vs_top=(vs_base=base+9)+3;
	{object _funobj = base[8];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= (V221);
	base[9]= (V222);
	vs_top=(vs_base=base+7)+3;
	return;}
	}
}
/*	function definition for MAKE-FINAL-ONE-INDEX-ACCESSOR-DFUN	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{object V224;
	object V225;
	object V226;
	object V227;
	check_arg(4);
	V224=(base[0]);
	V225=(base[1]);
	V226=(base[2]);
	V227=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V228;
	V229 = (V227);
	V230= (VV[176]->s.s_gfdef);
	V228= (VFUN_NARGS=4,(*(LnkLI177))(V229,Cnil,small_fixnum(1),V230));
	base[4]= (V224);
	base[5]= (V225);
	base[6]= (V226);
	base[7]= (V228);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk178)();
	return;}
	}
}
/*	local entry for function ONE-INDEX-LIMIT-FN	*/

static object LI45(V232)

object V232;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{long V233 = (long)(*(LnkLI179))((V232));
	VMR44((object)V233)}
}
/*	function definition for MAKE-N-N-ACCESSOR-DFUN	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	{object V234;
	object V235;
	object V236;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V234=(base[0]);
	V235=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T352;}
	V236=(base[2]);
	vs_top=sup;
	goto T353;
	goto T352;
T352:;
	V236= Cnil;
	goto T353;
T353:;
	{object V237;
	object V238;
	object V239;
	if(!(((V235))==(VV[51]))){
	goto T357;}
	V237= VV[58];
	goto T355;
	goto T357;
T357:;
	V237= VV[59];
	goto T355;
T355:;
	if((V236)!=Cnil){
	V238= (V236);
	goto T359;}
	V240= (VV[180]->s.s_gfdef);
	V238= (*(LnkLI175))(small_fixnum(1),Ct,V240,2);
	goto T359;
T359:;
	V239= (*(LnkLI181))((V235),(V238));
	base[8]= (V237);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk172)();
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= (V238);
	base[9]= (*(LnkLI173))((V234),(V239));
	vs_top=(vs_base=base+8)+2;
	{object _funobj = base[7];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= (V238);
	base[8]= (V239);
	vs_top=(vs_base=base+6)+3;
	return;}
	}
}
/*	function definition for MAKE-FINAL-N-N-ACCESSOR-DFUN	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{object V241;
	object V242;
	object V243;
	check_arg(3);
	V241=(base[0]);
	V242=(base[1]);
	V243=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V244;
	V245 = (V243);
	V246= (VV[180]->s.s_gfdef);
	V244= (VFUN_NARGS=4,(*(LnkLI177))(V245,Ct,small_fixnum(1),V246));
	base[3]= (V241);
	base[4]= (V242);
	base[5]= (V244);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk182)();
	return;}
	}
}
/*	local entry for function N-N-ACCESSORS-LIMIT-FN	*/

static object LI48(V248)

object V248;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{long V249 = (long)(*(LnkLI179))((V248));
	VMR47((object)V249)}
}
/*	function definition for MAKE-CHECKING-DFUN	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_check;
	{object V250;
	object V251;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	base[0]=MMcons(base[0],Cnil);
	V250=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T374;}
	V251=(base[2]);
	vs_top=sup;
	goto T375;
	goto T374;
T374:;
	V251= Cnil;
	goto T375;
T375:;
	if(((V251))!=Cnil){
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
	{object V252;
	object V253;
	object V254;
	object V255;
	base[3]= (base[0]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk187)();
	if(vs_base>=vs_top){vs_top=sup;goto T389;}
	V252= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T390;}
	V253= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T391;}
	V254= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T392;}
	V255= vs_base[0];
	vs_top=sup;
	goto T393;
	goto T389;
T389:;
	V252= Cnil;
	goto T390;
T390:;
	V253= Cnil;
	goto T391;
T391:;
	V254= Cnil;
	goto T392;
T392:;
	V255= Cnil;
	goto T393;
T393:;
	base[3]= 
	make_cclosure_new(LC141,Cnil,base[0],Cdata);
	base[4]= (V254);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk188)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T395;}
	{object V256;
	V256= (*(LnkLI189))();
	base[5]= VV[60];
	base[6]= (V254);
	base[7]= (V253);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk172)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V250);
	vs_top=(vs_base=base+5)+1;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= Cnil;
	base[5]= (V256);
	vs_top=(vs_base=base+3)+3;
	return;}
	goto T395;
T395:;
	{object V257;
	if((V251)!=Cnil){
	V257= (V251);
	goto T408;}
	V258 = (V255);
	V259= (VV[190]->s.s_gfdef);
	V257= (*(LnkLI175))(V258,Cnil,V259,2);
	goto T408;
T408:;
	base[4]= (*(LnkLI191))((V250),(V257));
	base[4]=MMcons(base[4],base[0]);
	base[7]= VV[61];
	base[8]= (V254);
	base[9]= (V253);
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk172)();
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= (V257);
	base[8]= (V250);
	base[9]= 
	make_cclosure_new(LC142,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+7)+3;
	{object _funobj = base[6];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V257);
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
	{object V260;
	object V261;
	object V262;
	check_arg(4);
	V260=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	V261=(base[2]);
	V262=(base[3]);
	vs_top=sup;
	{object V263;
	base[4]= (V260);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk161)(Lclptr161);
	vs_top=sup;
	V264= vs_base[0];
	V263= STREF(object,V264,8);
	base[4]= 
	make_cclosure_new(LC143,Cnil,base[1],Cdata);
	base[5]= (V263);
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
	{object V265;
	V266 = (V260);
	V267= (VV[190]->s.s_gfdef);
	V268 = (V261);
	V269 = (V262);
	V265= (*(LnkLI192))(V266,Cnil,V267,V268,V269);
	base[4]= (V260);
	base[5]= (base[1]->c.c_car);
	base[6]= (V265);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk193)();
	return;}}
	}
}
/*	local entry for function USE-DEFAULT-METHOD-ONLY-DFUN-P	*/

static object LI51(V271)

object V271;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V272;
	object V273;
	object V274;
	object V275;
	base[0]= (V271);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk187)();
	if(vs_base>=vs_top){vs_top=sup;goto T439;}
	V272= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T440;}
	V273= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T441;}
	V274= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T442;}
	V275= vs_base[0];
	vs_top=sup;
	goto T443;
	goto T439;
T439:;
	V272= Cnil;
	goto T440;
T440:;
	V273= Cnil;
	goto T441;
T441:;
	V274= Cnil;
	goto T442;
T442:;
	V275= Cnil;
	goto T443;
T443:;
	base[0]= VV[194];
	base[1]= (V274);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk188)();
	vs_top=sup;
	{object V276 = vs_base[0];
	VMR50(V276)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function USE-CACHING-DFUN-P	*/

static object LI52(V278)

register object V278;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	base[0]= VV[195];
	if(((*(LnkLI196))((V278)))==Cnil){
	goto T449;}
	if(type_of(V278)==t_structure){
	goto T455;}
	goto T453;
	goto T455;
T455:;
	if(!(((V278)->str.str_def)==(VV[63]))){
	goto T453;}
	V279= STREF(object,(V278),4);
	goto T451;
	goto T453;
T453:;{object V281;
	V281= (VV[65]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V278);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V282= vs_base[0];
	if(!((V281)==(CMPcar(V282)))){
	goto T458;}}
	V279= CMPcar(((V278))->cc.cc_turbo[12]);
	goto T451;
	goto T458;
T458:;
	base[2]= VV[66];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V279= vs_base[0];
	goto T451;
T451:;
	V283 = (VV[67]->s.s_dbind);
	base[1]= (V279)->v.v_self[fix(V283)];
	goto T447;
	goto T449;
T449:;
	base[2]= (V278);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	base[1]= vs_base[0];
	goto T447;
T447:;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk200)();
	vs_top=sup;
	{object V284 = vs_base[0];
	VMR51(V284)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CHECKING-LIMIT-FN	*/

static object LI53(V286)

object V286;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{long V287 = (long)(*(LnkLI179))((V286));
	VMR52((object)V287)}
}
/*	function definition for MAKE-CACHING-DFUN	*/

static void L54()
{register object *base=vs_base;
	register object *sup=base+VM53; VC53
	vs_check;
	{object V288;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T465;}
	V288=(base[1]);
	vs_top=sup;
	goto T466;
	goto T465;
T465:;
	V288= Cnil;
	goto T466;
T466:;
	if(((V288))!=Cnil){
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
	{object V289;
	object V290;
	object V291;
	object V292;
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk187)();
	if(vs_base>=vs_top){vs_top=sup;goto T480;}
	V289= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T481;}
	V290= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T482;}
	V291= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T483;}
	V292= vs_base[0];
	vs_top=sup;
	goto T484;
	goto T480;
T480:;
	V289= Cnil;
	goto T481;
T481:;
	V290= Cnil;
	goto T482;
T482:;
	V291= Cnil;
	goto T483;
T483:;
	V292= Cnil;
	goto T484;
T484:;
	{object V293;
	if((V288)!=Cnil){
	V293= (V288);
	goto T485;}
	V294 = (V292);
	V295= (VV[203]->s.s_gfdef);
	V293= (*(LnkLI175))(V294,Ct,V295,2);
	goto T485;
T485:;
	base[3]= (*(LnkLI204))((V293));
	base[3]=MMcons(base[3],base[0]);
	base[6]= VV[68];
	base[7]= (V291);
	base[8]= (V290);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk172)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V293);
	base[7]= 
	make_cclosure_new(LC147,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V293);
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
	{object V296;
	object V297;
	object V298;
	check_arg(3);
	V296=(base[0]);
	V297=(base[1]);
	V298=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V299;
	V300 = (V296);
	V301= (VV[203]->s.s_gfdef);
	V302 = (V297);
	V303 = (V298);
	V299= (*(LnkLI192))(V300,Ct,V301,V302,V303);
	base[3]= (V296);
	base[4]= (V299);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk184)();
	return;}
	}
}
/*	local entry for function CACHING-LIMIT-FN	*/

static object LI56(V305)

object V305;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{long V306 = (long)(*(LnkLI179))((V305));
	VMR55((object)V306)}
}
/*	function definition for INSURE-DFUN	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_check;
	{object V307;
	object V308;
	check_arg(2);
	V307=(base[0]);
	V308=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V309;
	object V310;
	register object V311;
	object V312;
	base[2]= (V307);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk187)();
	if(vs_base>=vs_top){vs_top=sup;goto T503;}
	V309= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T504;}
	V310= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T505;}
	V311= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T506;}
	V312= vs_base[0];
	vs_top=sup;
	goto T507;
	goto T503;
T503:;
	V309= Cnil;
	goto T504;
T504:;
	V310= Cnil;
	goto T505;
T505:;
	V311= Cnil;
	goto T506;
T506:;
	V312= Cnil;
	goto T507;
T507:;
	if(((V311))==Cnil){
	goto T508;}
	if((CMPcar((V311)))==Cnil){
	goto T509;}
	goto T508;
T508:;
	if(((VFUN_NARGS=1,(*(LnkLI201))((V307))))==Cnil){
	goto T514;}
	base[2]= VV[69];
	base[3]= (V311);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk172)();
	return;
	goto T514;
T514:;
	if(((V308))==Cnil){
	goto T519;}
	base[2]= VV[68];
	base[3]= (V311);
	base[4]= (V310);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk172)();
	return;
	goto T519;
T519:;
	{register object V313;
	register object V314;
	V313= (V311);
	V314= CMPcar((V313));
	goto T530;
T530:;
	if(!(((V313))==Cnil)){
	goto T531;}
	goto T526;
	goto T531;
T531:;
	if(((V314))==(Ct)){
	goto T535;}
	goto T525;
	goto T535;
T535:;
	V313= CMPcdr((V313));
	V314= CMPcar((V313));
	goto T530;}
	goto T526;
T526:;
	base[2]= VV[60];
	base[3]= (V311);
	base[4]= (V310);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk172)();
	return;
	goto T525;
T525:;
	base[2]= VV[61];
	base[3]= (V311);
	base[4]= (V310);
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

static object LI58(object V315,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB57 VMS57 VMV57
	{register object V316;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V316= V315;
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
	{object V317;
	object V318;
	object V319;
	object V320;
	base[0]= (V316);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk187)();
	if(vs_base>=vs_top){vs_top=sup;goto T554;}
	V317= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T555;}
	V318= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T556;}
	V319= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T557;}
	V320= vs_base[0];
	vs_top=sup;
	goto T558;
	goto T554;
T554:;
	V317= Cnil;
	goto T555;
T555:;
	V318= Cnil;
	goto T556;
T556:;
	V319= Cnil;
	goto T557;
T557:;
	V320= Cnil;
	goto T558;
T558:;
	{object V321;
	base[0]= (*(LnkLI196))((V316));
	base[0]=MMcons(base[0],Vcs[1]);
	if(((base[0]->c.c_car))==Cnil){
	goto T562;}
	if(type_of(V316)==t_structure){
	goto T568;}
	goto T566;
	goto T568;
T568:;
	if(!(((V316)->str.str_def)==(VV[70]))){
	goto T566;}
	V322= STREF(object,(V316),4);
	goto T564;
	goto T566;
T566:;{object V324;
	V324= (VV[65]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V316);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V325= vs_base[0];
	if(!((V324)==(CMPcar(V325)))){
	goto T571;}}
	V322= CMPcar(((V316))->cc.cc_turbo[12]);
	goto T564;
	goto T571;
T571:;
	base[3]= VV[66];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V322= vs_base[0];
	goto T564;
T564:;
	V326 = (VV[67]->s.s_dbind);
	V321= (V322)->v.v_self[fix(V326)];
	goto T560;
	goto T562;
T562:;
	base[3]= (V316);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V321= vs_base[0];
	goto T560;
T560:;
	base[2]=MMcons(VV[71],base[0]);
	if(((V318))==Cnil){
	goto T578;}
	{object V327 = Cnil;
	VMR57(V327)}
	goto T578;
T578:;
	if(!(((((VV[72]->s.s_dbind))==(VV[73])?Ct:Cnil))==Cnil)){
	goto T582;}
	goto T580;
	goto T582;
T582:;
	if(((*(LnkLI205))((V316)))!=Cnil){
	goto T580;}
	{object V328 = Cnil;
	VMR57(V328)}
	goto T580;
T580:;
	base[3]= 
	make_cclosure_new(LC148,Cnil,base[2],Cdata);
	base[4]= (V321);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk206)();
	vs_top=sup;
	{object V329 = vs_base[0];
	VMR57(V329)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for MAKE-CONSTANT-VALUE-DFUN	*/

static void L59()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	{object V330;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T586;}
	V330=(base[1]);
	vs_top=sup;
	goto T587;
	goto T586;
T586:;
	V330= Cnil;
	goto T587;
T587:;
	{object V331;
	object V332;
	object V333;
	object V334;
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk187)();
	if(vs_base>=vs_top){vs_top=sup;goto T591;}
	V331= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T592;}
	V332= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T593;}
	V333= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T594;}
	V334= vs_base[0];
	vs_top=sup;
	goto T595;
	goto T591;
T591:;
	V331= Cnil;
	goto T592;
T592:;
	V332= Cnil;
	goto T593;
T593:;
	V333= Cnil;
	goto T594;
T594:;
	V334= Cnil;
	goto T595;
T595:;
	{object V335;
	if((V330)!=Cnil){
	V335= (V330);
	goto T596;}
	V336 = (V334);
	V337= (VV[203]->s.s_gfdef);
	V335= (*(LnkLI175))(V336,Ct,V337,2);
	goto T596;
T596:;
	base[3]= (*(LnkLI207))((V335));
	base[3]=MMcons(base[3],base[0]);
	base[6]= VV[69];
	base[7]= (V333);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk172)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V335);
	base[7]= 
	make_cclosure_new(LC149,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V335);
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
	{object V338;
	object V339;
	object V340;
	check_arg(3);
	V338=(base[0]);
	V339=(base[1]);
	V340=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V341;
	V342 = (V338);
	V343= (VV[203]->s.s_gfdef);
	V344 = (V339);
	V345 = (V340);
	V341= (*(LnkLI192))(V342,VV[74],V343,V344,V345);
	base[3]= (V338);
	base[4]= (V341);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk202)();
	return;}
	}
}
/*	local entry for function USE-DISPATCH-DFUN-P	*/

static object LI61(object V346,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB60 VMS60 VMV60
	{object V347;
	object V348;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V347= V346;
	narg = narg - 1;
	if (narg <= 0) goto T611;
	else {
	V348= first;}
	--narg; goto T612;
	goto T611;
T611:;
	V348= (*(LnkLI183))((V347));
	goto T612;
T612:;
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T615;}
	if(((V348))!=Cnil){
	goto T618;}
	{object V349;
	V349= (*(LnkLI208))((V347));
	base[0]= (V347);
	base[1]= (V349);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk209)();
	vs_top=sup;
	V350= vs_base[0];
	V351 = (V349);
	{object V352 = (number_compare(V350,V351)<0?Ct:Cnil);
	VMR60(V352)}}
	goto T618;
T618:;
	{object V353 = Cnil;
	VMR60(V353)}
	goto T615;
T615:;
	{object V354 = Cnil;
	VMR60(V354)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SHOW-DFUN-COSTS	*/

static object LI62(V356)

register object V356;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	if(type_of((V356))==t_symbol){
	goto T625;}
	if(!(type_of((V356))==t_cons)){
	goto T624;}
	goto T625;
T625:;
	V356= (*(LnkLI210))((V356));
	goto T624;
T624:;
	base[0]= Ct;
	base[1]= VV[75];
	base[3]= (V356);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk162)(Lclptr162);
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (*(LnkLI208))((V356));
	base[5]= (V356);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk209)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+0)+5;
	Lformat();
	vs_top=sup;
	{object V357 = vs_base[0];
	VMR61(V357)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for DISPATCH-DFUN-COST	*/

static void L63()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM62; VC62
	vs_check;
	{VOL object V358;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V358=(base[0]);
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
	base[3]= (V358);
	base[5]= (V358);
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

static object LI64(V360)

object V360;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	{object V361;
	object V362;
	base[2]= (V360);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk161)(Lclptr161);
	vs_top=sup;
	V361= vs_base[0];
	V362= CMPmake_fixnum((long)length(STREF(object,(V361),8)));
	base[2]= (VV[81]->s.s_dbind);
	base[3]= number_times((VV[82]->s.s_dbind),(V362));
	base[5]= (V360);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V363= vs_base[0];
	if(((*(LnkLI213))(V363))==Cnil){
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
	{object V364 = vs_base[0];
	VMR63(V364)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-DISPATCH-DFUN	*/

static void L65()
{register object *base=vs_base;
	register object *sup=base+VM64; VC64
	vs_check;
	{object V365;
	check_arg(1);
	V365=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V365);
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
	{object V366;
	check_arg(1);
	V366=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V367;
	base[1]= (V366);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V367= vs_base[0];
	base[1]= (VFUN_NARGS=8,(*(LnkLI216))((V366),(V367),Cnil,Cnil,Cnil,Cnil,Cnil,Ct));
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
	{object V368;
	check_arg(1);
	V368=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V368);
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
	{register object V369;
	register object V370;
	V369= (*(LnkLI160))(VV[84]);
	V370= CMPcar((V369));
	goto T671;
T671:;
	if(!(((V369))==Cnil)){
	goto T672;}
	{object V371 = Cnil;
	VMR67(V371)}
	goto T672;
T672:;
	{register object V372;
	register object V373;
	register object V374;
	base[2]= (V370);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk186)();
	if(vs_base>=vs_top){vs_top=sup;goto T679;}
	V372= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T680;}
	V373= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T681;}
	V374= vs_base[0];
	vs_top=sup;
	goto T682;
	goto T679;
T679:;
	V372= Cnil;
	goto T680;
T680:;
	V373= Cnil;
	goto T681;
T681:;
	V374= Cnil;
	goto T682;
T682:;
	(void)((VFUN_NARGS=4,(*(LnkLI49))((V370),(V372),(V373),(V374))));}
	V369= CMPcdr((V369));
	V370= CMPcar((V369));
	goto T671;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FILL-DFUN-CACHE	*/

static object LI69(object V378,object V377,object V376,object V375,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB68 VMS68 VMV68
	{object V379;
	object V380;
	object V381;
	object V382;
	object V383;
	va_start(ap,first);
	if(narg <4) too_few_arguments();
	V379= V378;
	V380= V377;
	V381= V376;
	V382= V375;
	narg = narg - 4;
	if (narg <= 0) goto T688;
	else {
	V383= first;}
	--narg; goto T689;
	goto T688;
T688:;
	V383= Cnil;
	goto T689;
T689:;
	if((V383)!=Cnil){
	base[0]= (V383);
	goto T691;}
	base[1]= (V379);
	vs_top=(vs_base=base+1)+1;
	Lhash_table_count();
	vs_top=sup;
	V384= vs_base[0];
	{long V385= fix(number_plus(V384,small_fixnum(3)));
	base[0]= (*(LnkLI175))((V381),(V380),(V382),/* INLINE-ARGS */V385);}
	goto T691;
T691:;
	base[0]=MMcons(base[0],Cnil);
	base[1]= 
	make_cclosure_new(LC152,Cnil,base[0],Cdata);
	base[2]= (V379);
	vs_top=(vs_base=base+1)+2;
	Lmaphash();
	vs_top=sup;
	{object V386 = (base[0]->c.c_car);
	VMR68(V386)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-FINAL-ORDINARY-DFUN-INTERNAL	*/

static object LI70(V392,V393,V394,V395,V396)

register object V392;register object V393;object V394;object V395;object V396;
{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	{object V397;
	object V398;
	object V399;
	object V400;
	base[4]= (V392);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk161)(Lclptr161);
	vs_top=sup;
	V397= vs_base[0];
	V398= (*(LnkLI217))((V397));
	if((V396)==Cnil){
	V399= Cnil;
	goto T700;}
	base[4]= (*(LnkLI218))((V392));
	vs_top=(vs_base=base+4)+1;
	Ltype_of();
	vs_top=sup;
	V401= vs_base[0];
	if(!(((V393))==(Ct))){
	goto T707;}
	V402= VV[13];
	goto T705;
	goto T707;
T707:;
	if(!(((V393))==(VV[74]))){
	goto T710;}
	V402= VV[14];
	goto T705;
	goto T710;
T710:;
	if(((V393))!=Cnil){
	goto T713;}
	V402= VV[12];
	goto T705;
	goto T713;
T713:;
	V402= Cnil;
	goto T705;
T705:;
	if(equal(V401,V402)){
	goto T701;}
	V399= Cnil;
	goto T700;
	goto T701;
T701:;
	V399= (V396);
	goto T700;
T700:;
	if(((V399))==Cnil){
	goto T717;}
	V403= (*(LnkLI220))((V392));
	V400= (*(LnkLI219))(/* INLINE-ARGS */V403);
	goto T715;
	goto T717;
T717:;
	V400= (*(LnkLI175))((V398),(((((V393))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil),(V394),4);
	goto T715;
T715:;
	{object V404 = (*(LnkLI221))((V392),(V393),(V400),(V395),(V399));
	VMR69(V404)}}
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
	{object V405=base[0]->c.c_cdr;
	if(endp(V405))invalid_macro_call();
	{object V406= (V405->c.c_car);
	if(endp(V406))invalid_macro_call();
	base[2]= (V406->c.c_car);
	V406=V406->c.c_cdr;
	if(endp(V406))invalid_macro_call();
	base[3]= (V406->c.c_car);
	V406=V406->c.c_cdr;
	if(endp(V406))invalid_macro_call();
	base[4]= (V406->c.c_car);
	V406=V406->c.c_cdr;
	if(endp(V406))invalid_macro_call();
	base[5]= (V406->c.c_car);
	V406=V406->c.c_cdr;
	if(endp(V406))invalid_macro_call();
	base[6]= (V406->c.c_car);
	V406=V406->c.c_cdr;
	if(endp(V406)){
	base[7]= Cnil;
	} else {
	base[7]= (V406->c.c_car);
	V406=V406->c.c_cdr;}
	if(endp(V406)){
	base[8]= Cnil;
	} else {
	base[8]= (V406->c.c_car);
	V406=V406->c.c_cdr;}
	if(endp(V406)){
	base[9]= Cnil;
	} else {
	base[9]= (V406->c.c_car);
	V406=V406->c.c_cdr;}
	if(endp(V406)){
	base[10]= Cnil;
	} else {
	base[10]= (V406->c.c_car);
	V406=V406->c.c_cdr;}
	if(!endp(V406))invalid_macro_call();}
	V405=V405->c.c_cdr;
	base[11]= V405;}
	if((base[10])!=Cnil){
	goto T723;}
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[10]= vs_base[0];
	goto T723;
T723:;
	V407 = base[6];
	V408 = base[10];
	V409 = base[4];
	V410 = base[5];
	if((base[7])==Cnil){
	goto T729;}
	V411= list(2,base[7],base[8]);
	goto T727;
	goto T729;
T729:;
	V411= Cnil;
	goto T727;
T727:;
	V412= listA(5,V407,V408,V409,V410,V411);
	if((base[9])==Cnil){
	goto T733;}
	V413= VV[13];
	goto T731;
	goto T733;
T733:;
	if((base[7])==Cnil){
	goto T736;}
	V413= VV[86];
	goto T731;
	goto T736;
T736:;
	V413= VV[12];
	goto T731;
T731:;
	V414= list(4,VV[85],base[2],base[3],list(2,VV[25],V413));
	V415= list(3,VV[88],base[10],list(2,VV[89],list(3,VV[90],base[2],VV[91])));
	V416= list(2,VV[91],list(3,VV[93],base[2],VV[91]));
	V417= list(3,VV[87],/* INLINE-ARGS */V415,listA(3,VV[92],make_cons(/* INLINE-ARGS */V416,Cnil),base[11]));
	base[12]= list(5,VV[46],/* INLINE-ARGS */V412,/* INLINE-ARGS */V414,/* INLINE-ARGS */V417,list(3,VV[94],base[6],base[3]));
	vs_top=(vs_base=base+12)+1;
	return;
}
/*	local entry for function MAKE-INITIAL-DFUN	*/

static object LI73(V419)

object V419;
{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	base[0]=MMcons((V419),Cnil);
	{object V420;
	V420= 
	make_cclosure_new(LC153,Cnil,base[0],Cdata);
	{object V421;
	object V422;
	object V423;
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T741;}
	if(((*(LnkLI205))((base[0]->c.c_car)))==Cnil){
	goto T741;}
	{object V424;
	object V425;
	V424= (*(LnkLI183))((base[0]->c.c_car));
	V425= (VFUN_NARGS=3,(*(LnkLI222))((base[0]->c.c_car),(V424),(((VV[95]->s.s_dbind))==Cnil?Ct:Cnil)));
	if(((VV[95]->s.s_dbind))==Cnil){
	goto T748;}
	if(((VFUN_NARGS=2,(*(LnkLI185))((base[0]->c.c_car),(V424))))==Cnil){
	goto T751;}
	base[3]= (V420);
	base[4]= Cnil;
	base[5]= (*(LnkLI223))();
	vs_top=(vs_base=base+3)+3;
	goto T739;
	goto T751;
T751:;
	base[3]= (base[0]->c.c_car);
	base[4]= (V424);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk224)();
	vs_top=sup;
	base[3]= (V420);
	base[4]= Cnil;
	base[5]= (*(LnkLI225))();
	vs_top=(vs_base=base+3)+3;
	goto T739;
	goto T748;
T748:;
	base[3]= (base[0]->c.c_car);
	base[4]= (V425);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk226)();
	goto T739;}
	goto T741;
T741:;
	{object V426;
	object V427;
	if(((*(LnkLI196))((base[0]->c.c_car)))==Cnil){
	goto T766;}
	{object V429;
	V429= (base[0]->c.c_car);
	if(type_of((V429))==t_structure){
	goto T772;}
	goto T770;
	goto T772;
T772:;
	if(!((((V429))->str.str_def)==(VV[99]))){
	goto T770;}}
	V428= STREF(object,(base[0]->c.c_car),4);
	goto T768;
	goto T770;
T770:;{object V430;
	V430= (VV[65]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V431= vs_base[0];
	if(!((V430)==(CMPcar(V431)))){
	goto T775;}}
	V428= CMPcar(((base[0]->c.c_car))->cc.cc_turbo[12]);
	goto T768;
	goto T775;
T775:;
	base[1]= VV[66];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	V428= vs_base[0];
	goto T768;
T768:;
	V432 = (VV[97]->s.s_dbind);
	V426= (V428)->v.v_self[fix(V432)];
	goto T764;
	goto T766;
T766:;
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk161)(Lclptr161);
	vs_top=sup;
	V426= vs_base[0];
	goto T764;
T764:;
	V427= Cnil;
	if((STREF(object,(V426),28))==Cnil){
	goto T783;}
	V427= (*(LnkLI227))((base[0]->c.c_car));
	if(((V427))==Cnil){
	goto T783;}
	if(((VV[98]->s.s_dbind))==Cnil){
	goto T789;}
	base[1]= (*(LnkLI228))((base[0]->c.c_car),(V427));
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+1)+3;
	goto T739;
	goto T789;
T789:;
	base[1]= (base[0]->c.c_car);
	base[2]= (V427);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk229)();
	goto T739;
	goto T783;
T783:;
	base[1]= (V420);
	base[2]= Cnil;
	base[3]= (*(LnkLI225))();
	vs_top=(vs_base=base+1)+3;}
	goto T739;
T739:;
	if(vs_base>=vs_top){vs_top=sup;goto T799;}
	V421= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T800;}
	V422= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T801;}
	V423= vs_base[0];
	vs_top=sup;
	goto T802;
	goto T799;
T799:;
	V421= Cnil;
	goto T800;
T800:;
	V422= Cnil;
	goto T801;
T801:;
	V423= Cnil;
	goto T802;
T802:;
	{object V433 = (VFUN_NARGS=4,(*(LnkLI230))((base[0]->c.c_car),(V421),(V422),(V423)));
	VMR71(V433)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-EARLY-ACCESSOR	*/

static object LI74(V436,V437)

register object V436;object V437;
{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V438;
	if(type_of(V436)==t_structure){
	goto T808;}
	goto T806;
	goto T808;
T808:;
	if(!(((V436)->str.str_def)==(VV[100]))){
	goto T806;}
	V439= STREF(object,(V436),4);
	goto T804;
	goto T806;
T806:;{object V441;
	V441= (VV[65]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V436);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V442= vs_base[0];
	if(!((V441)==(CMPcar(V442)))){
	goto T811;}}
	V439= CMPcar(((V436))->cc.cc_turbo[12]);
	goto T804;
	goto T811;
T811:;
	base[2]= VV[66];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V439= vs_base[0];
	goto T804;
T804:;
	V443 = (VV[67]->s.s_dbind);
	V438= (V439)->v.v_self[fix(V443)];
	base[2]= CMPcar((V438));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk231)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[1]=MMcons(base[1],Cnil);
	{object V444= (V437);
	if((V444!= VV[51]))goto T819;
	{object V445 = 
	make_cclosure_new(LC154,Cnil,base[1],Cdata);
	VMR72(V445)}
	goto T819;
T819:;
	if((V444!= VV[123]))goto T820;
	{object V446 = 
	make_cclosure_new(LC155,Cnil,base[1],Cdata);
	VMR72(V446)}
	goto T820;
T820:;
	FEerror("The ECASE key value ~s is illegal.",1,V444);
	{object V447 = Cnil;
	VMR72(V447)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for INITIAL-DFUN	*/

static void L75()
{register object *base=vs_base;
	register object *sup=base+VM73; VC73
	vs_check;
	bds_check;
	{register object V448;
	object V449;
	check_arg(2);
	V448=(base[0]);
	V449=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V450;
	object V451;
	object V452;
	object V453;
	object V454;
	object V455;
	base[2]= (V448);
	base[3]= (V449);
	base[4]= VV[86];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk85)();
	if(vs_base>=vs_top){vs_top=sup;goto T825;}
	V450= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T826;}
	V451= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T827;}
	V452= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T828;}
	V453= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T829;}
	V454= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T830;}
	V455= vs_base[0];
	vs_top=sup;
	goto T831;
	goto T825;
T825:;
	V450= Cnil;
	goto T826;
T826:;
	V451= Cnil;
	goto T827;
T827:;
	V452= Cnil;
	goto T828;
T828:;
	V453= Cnil;
	goto T829;
T829:;
	V454= Cnil;
	goto T830;
T830:;
	V455= Cnil;
	goto T831;
T831:;
	if(((V451))==Cnil){
	goto T832;}
	{register object x= (V448),V456= (VV[91]->s.s_dbind);
	while(V456!=Cnil)
	if(x==(V456->c.c_car)){
	goto T832;
	}else V456=V456->c.c_cdr;}
	base[2]= make_cons((V448),(VV[91]->s.s_dbind));
	bds_bind(VV[91],base[2]);
	if((V453)==Cnil){
	goto T839;}
	bds_unwind1;
	goto T832;
	goto T839;
T839:;
	if(((V454))==Cnil){
	goto T842;}
	if(((V455))==Cnil){
	goto T842;}
	{object V458;
	object V459;
	object V460;
	base[3]= (V448);
	base[4]= (V454);
	base[5]= (V452);
	base[6]= (V455);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk232)();
	if(vs_base>=vs_top){vs_top=sup;goto T851;}
	V458= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T852;}
	V459= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T853;}
	V460= vs_base[0];
	vs_top=sup;
	goto T854;
	goto T851;
T851:;
	V458= Cnil;
	goto T852;
T852:;
	V459= Cnil;
	goto T853;
T853:;
	V460= Cnil;
	goto T854;
T854:;
	V461= (VFUN_NARGS=4,(*(LnkLI49))((V448),(V458),(V459),(V460)));
	bds_unwind1;
	goto T832;}
	goto T842;
T842:;
	if(((*(LnkLI183))((V448)))==Cnil){
	goto T856;}
	{object V462;
	object V463;
	object V464;
	base[3]= (V448);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk184)();
	if(vs_base>=vs_top){vs_top=sup;goto T860;}
	V462= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T861;}
	V463= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T862;}
	V464= vs_base[0];
	vs_top=sup;
	goto T863;
	goto T860;
T860:;
	V462= Cnil;
	goto T861;
T861:;
	V463= Cnil;
	goto T862;
T862:;
	V464= Cnil;
	goto T863;
T863:;
	V465= (VFUN_NARGS=4,(*(LnkLI49))((V448),(V462),(V463),(V464)));
	bds_unwind1;
	goto T832;}
	goto T856;
T856:;
	{object V466;
	object V467;
	object V468;
	base[3]= (V448);
	base[5]= (V448);
	base[6]= (V449);
	base[7]= VV[12];
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk85)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk193)();
	if(vs_base>=vs_top){vs_top=sup;goto T870;}
	V466= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T871;}
	V467= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T872;}
	V468= vs_base[0];
	vs_top=sup;
	goto T873;
	goto T870;
T870:;
	V466= Cnil;
	goto T871;
T871:;
	V467= Cnil;
	goto T872;
T872:;
	V468= Cnil;
	goto T873;
T873:;
	V469= (VFUN_NARGS=4,(*(LnkLI49))((V448),(V466),(V467),(V468)));
	bds_unwind1;}
	goto T832;
T832:;
	base[2]= (V450);
	base[3]= (V449);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk94)();
	return;}
	}
}
/*	local entry for function MAKE-FINAL-DFUN	*/

static object LI76(object V470,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB74 VMS74 VMV74
	{object V471;
	object V472;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V471= V470;
	narg = narg - 1;
	if (narg <= 0) goto T876;
	else {
	V472= first;}
	--narg; goto T877;
	goto T876;
T876:;
	V472= Cnil;
	goto T877;
T877:;
	{object V473;
	object V474;
	object V475;
	base[0]= (V471);
	base[1]= (V472);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk226)();
	if(vs_base>=vs_top){vs_top=sup;goto T882;}
	V473= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T883;}
	V474= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T884;}
	V475= vs_base[0];
	vs_top=sup;
	goto T885;
	goto T882;
T882:;
	V473= Cnil;
	goto T883;
T883:;
	V474= Cnil;
	goto T884;
T884:;
	V475= Cnil;
	goto T885;
T885:;
	{object V476 = (VFUN_NARGS=4,(*(LnkLI230))((V471),(V473),(V474),(V475)));
	VMR74(V476)}}
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
	{object V477=base[0]->c.c_cdr;
	if(endp(V477))invalid_macro_call();
	{object V478= (V477->c.c_car);
	if(endp(V478))invalid_macro_call();
	base[2]= (V478->c.c_car);
	V478=V478->c.c_cdr;
	if(endp(V478))invalid_macro_call();
	base[3]= (V478->c.c_car);
	V478=V478->c.c_cdr;
	if(!endp(V478))invalid_macro_call();}
	V477=V477->c.c_cdr;
	base[4]= V477;}
	V479= list(2,VV[106],list(3,VV[107],list(2,VV[25],base[3]),VV[108]));
	V480= list(2,/* INLINE-ARGS */V479,list(2,base[2],list(4,VV[109],VV[110],VV[111],list(3,VV[112],VV[113],list(2,VV[25],base[3])))));
	V481= make_cons(VV[21],base[4]);
	V482= list(2,VV[115],base[2]);
	base[5]= list(3,VV[105],/* INLINE-ARGS */V480,list(4,VV[114],/* INLINE-ARGS */V481,/* INLINE-ARGS */V482,list(3,VV[116],base[2],VV[117])));
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
	{object V483=base[0]->c.c_cdr;
	if(endp(V483))invalid_macro_call();
	{object V484= (V483->c.c_car);
	if(endp(V484))invalid_macro_call();
	base[2]= (V484->c.c_car);
	V484=V484->c.c_cdr;
	if(!endp(V484))invalid_macro_call();}
	V483=V483->c.c_cdr;
	base[3]= V483;}
	base[4]= listA(3,VV[118],list(2,base[2],VV[119]),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function FINAL-ACCESSOR-DFUN-TYPE	*/

static object LI79(V486)

register object V486;
{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V487;
	if(((*(LnkLI196))((V486)))==Cnil){
	goto T888;}
	if(type_of(V486)==t_structure){
	goto T894;}
	goto T892;
	goto T894;
T894:;
	if(!(((V486)->str.str_def)==(VV[120]))){
	goto T892;}
	V488= STREF(object,(V486),4);
	goto T890;
	goto T892;
T892:;{object V490;
	V490= (VV[65]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V486);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V491= vs_base[0];
	if(!((V490)==(CMPcar(V491)))){
	goto T897;}}
	V488= CMPcar(((V486))->cc.cc_turbo[12]);
	goto T890;
	goto T897;
T897:;
	base[0]= VV[66];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V488= vs_base[0];
	goto T890;
T890:;
	V492 = (VV[67]->s.s_dbind);
	V487= (V488)->v.v_self[fix(V492)];
	goto T886;
	goto T888;
T888:;
	base[0]= (V486);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V487= vs_base[0];
	goto T886;
T886:;
	base[0]= VV[233];
	base[1]= (V487);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk188)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T905;}
	{object V493 = VV[51];
	VMR77(V493)}
	goto T905;
T905:;
	base[0]= VV[234];
	base[1]= (V487);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk188)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T910;}
	{object V494 = VV[123];
	VMR77(V494)}
	goto T910;
T910:;
	{object V495 = Cnil;
	VMR77(V495)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-FINAL-ACCESSOR-DFUN	*/

static void L80()
{register object *base=vs_base;
	register object *sup=base+VM78; VC78
	vs_check;
	{register object V496;
	register object V497;
	object V498;
	object V499;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V496=(base[0]);
	V497=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T914;}
	V498=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T915;}
	V499=(base[3]);
	vs_top=sup;
	goto T916;
	goto T914;
T914:;
	V498= Cnil;
	goto T915;
T915:;
	V499= Cnil;
	goto T916;
T916:;
	{object V500;
	object V501;
	{register object x= VV[119],V502= (VV[108]->s.s_dbind);
	while(V502!=Cnil)
	if(eql(x,V502->c.c_car->c.c_car) &&V502->c.c_car != Cnil){
	V500= (V502->c.c_car);
	goto T919;
	}else V502=V502->c.c_cdr;
	V500= Cnil;}
	goto T919;
T919:;
	if((CMPcdr((V500)))==Cnil){
	goto T922;}
	{object V504;
	V504= CMPcdr(CMPcdr(V500));
	{object V505;
	V505= CMPcar(CMPcdr(V500));
	(V500)->c.c_cdr = (V504);
	V501= (V505);
	goto T920;}}
	goto T922;
T922:;
	base[6]= VV[113];
	base[7]= VV[119];
	vs_top=(vs_base=base+6)+2;
	Lmake_hash_table();
	vs_top=sup;
	V501= vs_base[0];
	goto T920;
T920:;
	{object V508;
	register object V509;
	object V510;
	object V511;
	object V512;
	object V513;
	base[6]= (V496);
	base[7]= (V497);
	base[8]= (V501);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk235)();
	if(vs_base>=vs_top){vs_top=sup;goto T935;}
	V508= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T936;}
	V509= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T937;}
	V510= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T938;}
	V511= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T939;}
	V512= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T940;}
	V513= vs_base[0];
	vs_top=sup;
	goto T941;
	goto T935;
T935:;
	V508= Cnil;
	goto T936;
T936:;
	V509= Cnil;
	goto T937;
T937:;
	V510= Cnil;
	goto T938;
T938:;
	V511= Cnil;
	goto T939;
T939:;
	V512= Cnil;
	goto T940;
T940:;
	V513= Cnil;
	goto T941;
T941:;
	if(((V508))==Cnil){
	goto T943;}
	if(!(number_compare((V512),small_fixnum(1))==0)){
	goto T946;}
	{object V514;
	base[6]= (V510);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V514= vs_base[0];
	base[6]= (V496);
	base[7]= (V497);
	base[8]= (V514);
	base[9]= (V509);
	vs_top=(vs_base=base+6)+4;
	(void) (*Lnk232)();
	goto T930;}
	goto T946;
T946:;
	if(!(number_compare((V512),small_fixnum(2))==0)){
	goto T955;}
	if(type_of((V509))==t_fixnum||type_of((V509))==t_bignum){
	goto T954;}
	if(!(type_of((V509))==t_cons)){
	goto T955;}
	goto T954;
T954:;
	{object V515;
	object V516;
	base[6]= (V510);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V515= vs_base[0];
	base[6]= (V511);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V516= vs_base[0];
	base[6]= (V496);
	base[7]= (V497);
	base[8]= (V515);
	base[9]= (V516);
	base[10]= (V509);
	vs_top=(vs_base=base+6)+5;
	(void) (*Lnk237)();
	goto T930;}
	goto T955;
T955:;
	if(type_of((V509))==t_fixnum||type_of((V509))==t_bignum){
	goto T970;}
	if(!(type_of((V509))==t_cons)){
	goto T971;}
	goto T970;
T970:;
	base[6]= (V496);
	base[7]= (V497);
	base[8]= (V509);
	base[9]= (V508);
	vs_top=(vs_base=base+6)+4;
	(void) (*Lnk238)();
	goto T930;
	goto T971;
T971:;
	if(((V513))==Cnil){
	goto T980;}
	base[6]= (V496);
	base[7]= (V497);
	base[8]= (V508);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk239)();
	goto T930;
	goto T980;
T980:;
	base[6]= (V496);
	base[7]= (V498);
	base[8]= (V499);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk240)();
	goto T930;
	goto T943;
T943:;
	base[6]= (V496);
	base[7]= (V498);
	base[8]= (V499);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk240)();}
	goto T930;
T930:;
	{object *V507=vs_top;object *V506=vs_base; vs_base=V507;
	{register object *base0=base;
	{register object *base=V507;
	register object *sup=vs_base+VM79;
	base0[0]=base0[0];
	base[0]=base[0];
	vs_check;
	vs_top=sup;
	base[0]= (V501);
	vs_top=(vs_base=base+0)+1;
	Lclrhash();
	vs_top=sup;
	}}
	{register object *base0=base;
	{register object *base=V507;
	register object *sup=vs_base+VM80;
	base0[0]=base0[0];
	base[0]=base[0];
	vs_check;
	vs_top=sup;
	{object V519;
	V519= make_cons(V501,CMPcdr(V500));
	(V500)->c.c_cdr = (V519);}
	}}
	vs_base=V506;vs_top=V507;}
	return;}
	}
}
/*	function definition for MAKE-FINAL-DFUN-INTERNAL	*/

static void L81()
{register object *base=vs_base;
	register object *sup=base+VM81; VC81
	vs_check;
	bds_check;
	{register object V520;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T996;}
	V520=(base[1]);
	vs_top=sup;
	goto T997;
	goto T996;
T996:;
	V520= Cnil;
	goto T997;
T997:;
	{register object V521;
	object V522;
	register object V523;
	object V524;
	base[4]= (base[0]->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V521= vs_base[0];
	V522= Cnil;
	V523= (VV[124]->s.s_dbind);
	bds_bind(VV[124],Cnil);
	base[3]=MMcons(Cnil,base[0]);
	V524= Cnil;
	if(((V521))!=Cnil){
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
	V522= (*(LnkLI227))((base[0]->c.c_car));
	if(((V522))==Cnil){
	goto T1008;}
	base[4]= (base[0]->c.c_car);
	base[5]= (V522);
	base[6]= (V520);
	base[7]= (V523);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk229)();
	bds_unwind1;
	return;
	goto T1008;
T1008:;
	base[4]= 
	make_cclosure_new(LC159,Cnil,base[3],Cdata);
	base[6]= CMPcar((V521));
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
	base[5]= (V521);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk188)();
	vs_top=sup;
	V524= vs_base[0];
	if(((V524))!=Cnil){
	goto T1016;}
	goto T1017;
T1017:;
	if(((VFUN_NARGS=1,(*(LnkLI201))((base[0]->c.c_car))))==Cnil){
	goto T1016;}
	base[4]= (base[0]->c.c_car);
	base[5]= (V520);
	base[6]= (V523);
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
	if(((V524))==Cnil){
	goto T1037;}
	if(((*(LnkLI183))((base[0]->c.c_car)))!=Cnil){
	goto T1037;}
	{object V525;
	base[4]= (base[0]->c.c_car);
	base[5]= (V521);
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk245)();
	vs_top=sup;
	V525= vs_base[0];
	base[4]= (base[0]->c.c_car);
	base[5]= (V525);
	base[6]= (V520);
	base[7]= (V523);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk246)();
	bds_unwind1;
	return;}
	goto T1037;
T1037:;
	base[4]= (base[0]->c.c_car);
	base[5]= (V520);
	base[6]= (V523);
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
	{object V526;
	register object V527;
	register object V528;
	check_arg(4);
	base[0]=MMcons(base[0],Cnil);
	V526=(base[1]);
	V527=(base[2]);
	V528=(base[3]);
	vs_top=sup;
	{object V529;
	object V530;
	register object V531;
	register object V532;
	object V533;
	object V534;
	base[8]= (V528);
	vs_top=(vs_base=base+8)+1;
	Ltype_of();
	vs_top=sup;
	V529= vs_base[0];
	V530= STREF(object,(V528),4);
	V531= Cnil;
	V532= Cnil;
	V533= Cnil;
	base[6]= Cnil;
	{object V535= (V530);
	if((V535!= VV[51]))goto T1059;
	V534= make_cons((V527),Cnil);
	goto T1058;
	goto T1059;
T1059:;
	if((V535!= VV[123]))goto T1060;
	V534= list(2,(V526),(V527));
	goto T1058;
	goto T1060;
T1060:;
	FEerror("The ECASE key value ~s is illegal.",1,V535);
	V534= Cnil;
	goto T1058;}
	goto T1058;
T1058:;
	{object V536;
	object V537;
	base[12]= (base[0]->c.c_car);
	base[13]= (V534);
	base[14]= VV[86];
	vs_top=(vs_base=base+12)+3;
	(void) (*Lnk85)();
	if(vs_base>=vs_top){vs_top=sup;goto T1065;}
	base[8]=MMcons(vs_base[0],base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1066;}
	V536= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1067;}
	base[9]= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1068;}
	V537= vs_base[0];
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
	V536= Cnil;
	goto T1067;
T1067:;
	base[9]= Cnil;
	goto T1068;
T1068:;
	V537= Cnil;
	goto T1069;
T1069:;
	base[10]=MMcons(Cnil,base[8]);
	goto T1070;
T1070:;
	base[11]=MMcons(Cnil,base[10]);
	goto T1071;
T1071:;
	if(((V536))==Cnil){
	goto T1072;}
	{register object x= (base[0]->c.c_car),V538= (VV[91]->s.s_dbind);
	while(V538!=Cnil)
	if(x==(V538->c.c_car)){
	goto T1072;
	}else V538=V538->c.c_cdr;}
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
	{object V539;
	if((V537)!=Cnil){
	V539= (V537);
	goto T1081;}
	V539= (((base[11]->c.c_car))==Cnil?Ct:Cnil);
	goto T1081;
T1081:;
	if(((V539))==Cnil){
	goto T1083;}
	bds_unwind1;
	goto T1072;
	goto T1083;
T1083:;
	if(type_of(V527)==t_structure){
	goto T1089;}
	goto T1088;
	goto T1089;
T1089:;
	if(((V527)->str.str_def)==(VV[126])){
	goto T1086;}
	goto T1088;
T1088:;{object V541;
	V541= (VV[65]->s.s_dbind);
	base[15]= small_fixnum(14);
	base[16]= (V527);
	vs_top=(vs_base=base+15)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V542= vs_base[0];
	if((V541)==(CMPcar(V542))){
	goto T1086;}}
	vs_base=vs_top;
	L86(base);
	vs_top=sup;
	bds_unwind1;
	goto T1072;
	goto T1086;
T1086:;
	if(((((base[10]->c.c_car))==((V530))?Ct:Cnil))==Cnil){
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
	{object V543= (V529);
	if((V543!= VV[40]))goto T1100;
	V531= STREF(object,(V528),8);
	V532= STREF(object,(V528),12);
	if(((V532))==(base[9])){
	bds_unwind1;
	goto T1072;}
	if(!(eql((base[11]->c.c_car),(V531)))){
	goto T1108;}
	base[15]= (base[11]->c.c_car);
	base[16]= (V532);
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
	if((V543!= VV[42]))goto T1113;
	V531= STREF(object,(V528),8);
	V532= STREF(object,(V528),12);
	V533= STREF(object,(V528),16);
	if(((V532))==(base[9])){
	bds_unwind1;
	goto T1072;}
	if(((V533))==(base[9])){
	bds_unwind1;
	goto T1072;}
	if(!(eql((base[11]->c.c_car),(V531)))){
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
	if((V543!= VV[44]))goto T1128;
	V531= STREF(object,(V528),8);
	base[6]= STREF(object,(V528),0);
	if(!(eql((base[11]->c.c_car),(V531)))){
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
	if((V543!= VV[39]))goto T1137;
	base[6]= STREF(object,(V528),0);
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
	FEerror("The ECASE key value ~s is illegal.",1,V543);
	bds_unwind1;
	goto T1072;}}
	goto T1072;
T1072:;
	base[12]= (base[8]->c.c_car);
	base[13]= (V534);
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
	{register object V544;
	object V545;
	object V546;
	check_arg(3);
	V544=(base[0]);
	V545=(base[1]);
	V546=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V547;
	object V548;
	V547= STREF(object,(V546),4);
	V548= STREF(object,(V546),0);
	{object V549;
	object V550;
	object V551;
	object V552;
	base[3]= (V544);
	base[4]= (V545);
	base[5]= VV[12];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk85)();
	if(vs_base>=vs_top){vs_top=sup;goto T1152;}
	V549= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1153;}
	V550= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1154;}
	V551= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1155;}
	V552= vs_base[0];
	vs_top=sup;
	goto T1156;
	goto T1152;
T1152:;
	V549= Cnil;
	goto T1153;
T1153:;
	V550= Cnil;
	goto T1154;
T1154:;
	V551= Cnil;
	goto T1155;
T1155:;
	V552= Cnil;
	goto T1156;
T1156:;
	if(((V550))==Cnil){
	goto T1157;}
	{register object x= (V544),V553= (VV[91]->s.s_dbind);
	while(V553!=Cnil)
	if(x==(V553->c.c_car)){
	goto T1157;
	}else V553=V553->c.c_cdr;}
	base[3]= make_cons((V544),(VV[91]->s.s_dbind));
	bds_bind(VV[91],base[3]);
	if((V552)==Cnil){
	goto T1164;}
	bds_unwind1;
	goto T1157;
	goto T1164;
T1164:;
	if(!(((V547))==((V549)))){
	goto T1167;}
	{object V555;
	V555= (VFUN_NARGS=3,(*(LnkLI247))((V548),(V551),Cnil));
	if(((V555))==((V548))){
	bds_unwind1;
	goto T1157;}
	{object V556;
	object V557;
	object V558;
	base[4]= (V544);
	base[5]= (V549);
	base[6]= (V555);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk193)();
	if(vs_base>=vs_top){vs_top=sup;goto T1176;}
	V556= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1177;}
	V557= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1178;}
	V558= vs_base[0];
	vs_top=sup;
	goto T1179;
	goto T1176;
T1176:;
	V556= Cnil;
	goto T1177;
T1177:;
	V557= Cnil;
	goto T1178;
T1178:;
	V558= Cnil;
	goto T1179;
T1179:;
	V559= (VFUN_NARGS=4,(*(LnkLI49))((V544),(V556),(V557),(V558)));
	bds_unwind1;
	goto T1157;}}
	goto T1167;
T1167:;
	{object V560;
	object V561;
	object V562;
	base[4]= (V544);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk184)();
	if(vs_base>=vs_top){vs_top=sup;goto T1182;}
	V560= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1183;}
	V561= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1184;}
	V562= vs_base[0];
	vs_top=sup;
	goto T1185;
	goto T1182;
T1182:;
	V560= Cnil;
	goto T1183;
T1183:;
	V561= Cnil;
	goto T1184;
T1184:;
	V562= Cnil;
	goto T1185;
T1185:;
	V563= (VFUN_NARGS=4,(*(LnkLI49))((V544),(V560),(V561),(V562)));
	bds_unwind1;}
	goto T1157;
T1157:;
	base[3]= (V549);
	base[4]= (V545);
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
	{register object V564;
	object V565;
	object V566;
	check_arg(3);
	V564=(base[0]);
	V565=(base[1]);
	V566=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V567;
	V567= STREF(object,(V566),0);
	{object V568;
	object V569;
	object V570;
	object V571;
	base[3]= (V564);
	base[4]= (V565);
	base[5]= VV[13];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk85)();
	if(vs_base>=vs_top){vs_top=sup;goto T1193;}
	V568= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1194;}
	V569= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1195;}
	V570= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1196;}
	V571= vs_base[0];
	vs_top=sup;
	goto T1197;
	goto T1193;
T1193:;
	V568= Cnil;
	goto T1194;
T1194:;
	V569= Cnil;
	goto T1195;
T1195:;
	V570= Cnil;
	goto T1196;
T1196:;
	V571= Cnil;
	goto T1197;
T1197:;
	if(((V569))==Cnil){
	goto T1198;}
	{register object x= (V564),V572= (VV[91]->s.s_dbind);
	while(V572!=Cnil)
	if(x==(V572->c.c_car)){
	goto T1198;
	}else V572=V572->c.c_cdr;}
	base[3]= make_cons((V564),(VV[91]->s.s_dbind));
	bds_bind(VV[91],base[3]);
	if((V571)==Cnil){
	goto T1205;}
	bds_unwind1;
	goto T1198;
	goto T1205;
T1205:;
	{object V574;
	V574= (VFUN_NARGS=3,(*(LnkLI247))((V567),(V570),(V568)));
	if(((V574))==((V567))){
	bds_unwind1;
	goto T1198;}
	{object V575;
	object V576;
	object V577;
	base[4]= (V564);
	base[5]= (V574);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk184)();
	if(vs_base>=vs_top){vs_top=sup;goto T1213;}
	V575= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1214;}
	V576= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1215;}
	V577= vs_base[0];
	vs_top=sup;
	goto T1216;
	goto T1213;
T1213:;
	V575= Cnil;
	goto T1214;
T1214:;
	V576= Cnil;
	goto T1215;
T1215:;
	V577= Cnil;
	goto T1216;
T1216:;
	V578= (VFUN_NARGS=4,(*(LnkLI49))((V564),(V575),(V576),(V577)));
	bds_unwind1;}}
	goto T1198;
T1198:;
	base[3]= (V568);
	base[4]= (V565);
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
	{register object V579;
	object V580;
	object V581;
	check_arg(3);
	V579=(base[0]);
	V580=(base[1]);
	V581=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V582;
	V582= STREF(object,(V581),0);
	{register object V583;
	object V584;
	object V585;
	object V586;
	base[3]= (V579);
	base[4]= (V580);
	base[5]= VV[13];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk85)();
	if(vs_base>=vs_top){vs_top=sup;goto T1224;}
	V583= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1225;}
	V584= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1226;}
	V585= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1227;}
	V586= vs_base[0];
	vs_top=sup;
	goto T1228;
	goto T1224;
T1224:;
	V583= Cnil;
	goto T1225;
T1225:;
	V584= Cnil;
	goto T1226;
T1226:;
	V585= Cnil;
	goto T1227;
T1227:;
	V586= Cnil;
	goto T1228;
T1228:;
	if(((V584))==Cnil){
	goto T1229;}
	{register object x= (V579),V587= (VV[91]->s.s_dbind);
	while(V587!=Cnil)
	if(x==(V587->c.c_car)){
	goto T1229;
	}else V587=V587->c.c_cdr;}
	base[3]= make_cons((V579),(VV[91]->s.s_dbind));
	bds_bind(VV[91],base[3]);
	if((V586)==Cnil){
	goto T1236;}
	bds_unwind1;
	goto T1229;
	goto T1236;
T1236:;
	{object V589;
	object V590;
	object V591;
	{register object V592;
	V592= (V583);
	base[7]= (V592);
	base[8]= VV[127];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk248)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1240;}
	V589= STREF(object,(V583),0);
	goto T1238;
	goto T1240;
T1240:;
	base[7]= (V592);
	base[8]= VV[128];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk248)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1245;}
	V589= STREF(object,(V583),0);
	goto T1238;
	goto T1245;
T1245:;
	V589= Cnil;}
	goto T1238;
T1238:;
	V590= (VFUN_NARGS=2,(*(LnkLI249))((V589),VV[74]));
	V591= (VFUN_NARGS=3,(*(LnkLI247))((V582),(V585),(V590)));
	if(((V591))==((V582))){
	bds_unwind1;
	goto T1229;}
	{object V593;
	object V594;
	object V595;
	base[7]= (V579);
	base[8]= (V591);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk202)();
	if(vs_base>=vs_top){vs_top=sup;goto T1256;}
	V593= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1257;}
	V594= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1258;}
	V595= vs_base[0];
	vs_top=sup;
	goto T1259;
	goto T1256;
T1256:;
	V593= Cnil;
	goto T1257;
T1257:;
	V594= Cnil;
	goto T1258;
T1258:;
	V595= Cnil;
	goto T1259;
T1259:;
	V596= (VFUN_NARGS=4,(*(LnkLI49))((V579),(V593),(V594),(V595)));
	bds_unwind1;}}
	goto T1229;
T1229:;
	base[3]= (V583);
	base[4]= (V580);
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
	{object V597;
	object V598;
	object V599;
	check_arg(3);
	V597=(base[0]);
	V598=(base[1]);
	V599=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((*(LnkLI196))((V597)))==Cnil){
	goto T1266;}
	if(type_of(V597)==t_structure){
	goto T1272;}
	goto T1270;
	goto T1272;
T1272:;
	if(!(((V597)->str.str_def)==(VV[129]))){
	goto T1270;}
	V600= STREF(object,(V597),4);
	goto T1268;
	goto T1270;
T1270:;{object V602;
	V602= (VV[65]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V597);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V603= vs_base[0];
	if(!((V602)==(CMPcar(V603)))){
	goto T1275;}}
	V600= CMPcar(((V597))->cc.cc_turbo[12]);
	goto T1268;
	goto T1275;
T1275:;
	base[3]= VV[66];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V600= vs_base[0];
	goto T1268;
T1268:;
	V604 = (VV[67]->s.s_dbind);
	if(((V600)->v.v_self[fix(V604)])!=Cnil){
	goto T1263;}
	goto T1264;
	goto T1266;
T1266:;
	base[3]= (V597);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1263;}
	goto T1264;
T1264:;
	base[3]=VV[250]->s.s_gfdef;
	base[4]= (V597);
	{object V605;
	V605= (V598);
	 vs_top=base+5;
	 while(V605!=Cnil)
	 {vs_push((V605)->c.c_car);V605=(V605)->c.c_cdr;}
	vs_base=base+4;}
	(void) (*Lnk250)(Lclptr250);
	return;
	goto T1263;
T1263:;
	{object V606;
	object V607;
	object V608;
	object V609;
	object V610;
	base[3]= (V597);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk187)();
	if(vs_base>=vs_top){vs_top=sup;goto T1286;}
	V606= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1287;}
	V607= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1288;}
	V608= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1289;}
	V609= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1290;}
	V610= vs_base[0];
	vs_top=sup;
	goto T1291;
	goto T1286;
T1286:;
	V606= Cnil;
	goto T1287;
T1287:;
	V607= Cnil;
	goto T1288;
T1288:;
	V608= Cnil;
	goto T1289;
T1289:;
	V609= Cnil;
	goto T1290;
T1290:;
	V610= Cnil;
	goto T1291;
T1291:;
	{register object V611;
	object V612;
	object V613;
	register object V614;
	register object V615;
	object V616;
	object V617;
	object V618;
	V611= (V598);
	V612= Cnil;
	V613= Cnil;
	V614= Cnil;
	V615= Cnil;
	V616= Cnil;
	V617= Cnil;
	V618= Cnil;
	{register object V619;
	object V620;
	V619= (V608);
	V620= CMPcar((V619));
	goto T1304;
T1304:;
	if(!(((V619))==Cnil)){
	goto T1305;}
	goto T1300;
	goto T1305;
T1305:;
	if(((V611))!=Cnil){
	goto T1309;}
	V613= Ct;
	goto T1300;
	goto T1309;
T1309:;
	{object V621;
	register object V622;
	register object V623;
	object V624;
	{object V625;
	V625= CMPcar((V611));
	V611= CMPcdr((V611));
	V621= (V625);}
	V622= Cnil;
	V623= (VV[125]->s.s_dbind);
	V624= Ct;
	if(((V620))==(Ct)){
	goto T1322;}
	V622= (*(LnkLI251))((V621));
	if(!((((((V622))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1327;}
	V612= Ct;
	V622= (*(LnkLI252))((V621));
	goto T1327;
T1327:;
	if(((V614))!=Cnil){
	goto T1335;}
	V614= (V622);
	goto T1333;
	goto T1335;
T1335:;
	if(type_of((V614))==t_cons){
	goto T1339;}
	V615= make_cons((V622),Cnil);
	V614= make_cons((V614),(V615));
	goto T1333;
	goto T1339;
T1339:;
	{object V626;
	V626= make_cons((V622),Cnil);
	(V615)->c.c_cdr = V626;
	V615= (V626);}
	goto T1333;
T1333:;
	V623= ((V622))->v.v_self[11];
	V624= list(2,VV[130],(V623));
	goto T1322;
T1322:;
	V616= make_cons(V622,(V616));
	V618= make_cons(V623,(V618));
	V617= make_cons(V624,(V617));}
	V619= CMPcdr((V619));
	V620= CMPcar((V619));
	goto T1304;}
	goto T1300;
T1300:;
	if(((V613))==Cnil){
	goto T1362;}
	base[3]= VV[131];
	base[4]= (V597);
	base[5]= CMPmake_fixnum((long)length((V608)));
	vs_top=(vs_base=base+3)+3;
	Lerror();
	return;
	goto T1362;
T1362:;
	{object V632;
	object V633;
	object V634;
	V632= nreverse((V616));
	V633= nreverse((V618));
	{object V635;
	object V636= (V633);
	if(V636==Cnil){
	V634= Cnil;
	goto T1369;}
	base[6]=V635=MMcons(Cnil,Cnil);
	goto T1370;
T1370:;
	(V635->c.c_car)= list(2,VV[130],(V636->c.c_car));
	if((V636=MMcdr(V636))==Cnil){
	V634= base[6];
	goto T1369;}
	V635=MMcdr(V635)=MMcons(Cnil,Cnil);
	goto T1370;}
	goto T1369;
T1369:;
	{object V638;
	object V639;
	object V640;
	object V641;
	base[6]= (V597);
	base[7]= (V610);
	base[8]= (V632);
	base[9]= (V633);
	base[10]= (V634);
	base[11]= (V599);
	vs_top=(vs_base=base+6)+6;
	(void) (*Lnk253)();
	if(vs_base>=vs_top){vs_top=sup;goto T1379;}
	V638= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1380;}
	V639= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1381;}
	V640= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1382;}
	V641= vs_base[0];
	vs_top=sup;
	goto T1383;
	goto T1379;
T1379:;
	V638= Cnil;
	goto T1380;
T1380:;
	V639= Cnil;
	goto T1381;
T1381:;
	V640= Cnil;
	goto T1382;
T1382:;
	V641= Cnil;
	goto T1383;
T1383:;
	base[6]= (V638);
	base[7]= (V639);
	base[8]= (V614);
	base[9]= (V612);
	base[10]= (V640);
	base[11]= (V641);
	vs_top=(vs_base=base+6)+6;
	return;}}}}
	}
}
/*	function definition for CACHE-MISS-VALUES-INTERNAL	*/

static void L92()
{register object *base=vs_base;
	register object *sup=base+VM87; VC87
	vs_check;
	{register object V642;
	object V643;
	object V644;
	object V645;
	object V646;
	object V647;
	check_arg(6);
	V642=(base[0]);
	V643=(base[1]);
	V644=(base[2]);
	V645=(base[3]);
	V646=(base[4]);
	V647=(base[5]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V648;
	object V649;
	object V650;
	V648= (((V647))==(VV[86])?Ct:Cnil);
	if(!(((V647))==(VV[13]))){
	goto T1392;}
	V649= Ct;
	goto T1391;
	goto T1392;
T1392:;
	V649= (((V647))==(VV[86])?Ct:Cnil);
	goto T1391;
T1391:;
	if(!(((V643))==Cnil)){
	goto T1395;}
	V650= Ct;
	goto T1394;
	goto T1395;
T1395:;
	V650= STREF(object,(V643),36);
	goto T1394;
T1394:;
	{register object V651;
	object V652;
	if(((V650))==Cnil){
	goto T1399;}
	base[9]= (V642);
	base[10]= (V646);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk254)();
	goto T1397;
	goto T1399;
T1399:;
	base[9]= (V642);
	base[10]= (V645);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk255)(Lclptr255);
	goto T1397;
T1397:;
	if(vs_base>=vs_top){vs_top=sup;goto T1405;}
	V651= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1406;}
	V652= vs_base[0];
	vs_top=sup;
	goto T1407;
	goto T1405;
T1405:;
	V651= Cnil;
	goto T1406;
T1406:;
	V652= Cnil;
	goto T1407;
T1407:;
	{object V653;
	if(((V650))!=Cnil){
	goto T1409;}
	if(((V652))==Cnil){
	goto T1410;}
	goto T1409;
T1409:;
	V654 = (V642);
	V655 = (V651);
	V656 = (V646);
	if((V649)==Cnil){
	V657= Cnil;
	goto T1414;}
	V657= (V644);
	goto T1414;
T1414:;
	V658 = (V652);
	V659= (VFUN_NARGS=6,(*(LnkLI216))(V654,V655,V656,Cnil,V657,V658));
	if((V649)==Cnil){
	V660= Cnil;
	goto T1415;}
	V660= (V644);
	goto T1415;
T1415:;
	V653= (
	V661 = /* INLINE-ARGS */V659,
	(type_of(V661) == t_sfun ?(*((V661)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V661)==t_vfun) ?
	(*((V661)->sfn.sfn_self)):
	(fcall.fun=(V661),fcalln))(Cnil,V660));
	goto T1408;
	goto T1410;
T1410:;
	V653= (*(LnkLI256))((V642));
	goto T1408;
T1408:;
	{object V662;
	object V663;
	if((V648)==Cnil){
	base[9]= Cnil;
	vs_top=(vs_base=base+9)+1;
	goto T1416;}
	if((V652)==Cnil){
	base[9]= Cnil;
	vs_top=(vs_base=base+9)+1;
	goto T1416;}
	if((V651)==Cnil){
	base[9]= Cnil;
	vs_top=(vs_base=base+9)+1;
	goto T1416;}
	base[9]= (V642);
	base[10]= (V643);
	base[11]= (V645);
	base[12]= (V651);
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk257)();
	goto T1416;
T1416:;
	if(vs_base>=vs_top){vs_top=sup;goto T1421;}
	V662= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1422;}
	V663= vs_base[0];
	vs_top=sup;
	goto T1423;
	goto T1421;
T1421:;
	V662= Cnil;
	goto T1422;
T1422:;
	V663= Cnil;
	goto T1423;
T1423:;
	if(!(type_of((V662))==t_fixnum||type_of((V662))==t_bignum)){
	goto T1426;}
	base[9]= (V662);
	goto T1424;
	goto T1426;
T1426:;
	base[9]= (V653);
	goto T1424;
T1424:;
	base[10]= (V651);
	base[11]= (V663);
	base[12]= (V662);
	vs_top=(vs_base=base+9)+4;
	return;}}}}
	}
}
/*	function definition for ACCESSOR-VALUES	*/

static void L93()
{register object *base=vs_base;
	register object *sup=base+VM88; VC88
	vs_check;
	{object V664;
	object V665;
	object V666;
	object V667;
	check_arg(4);
	V664=(base[0]);
	V665=(base[1]);
	V666=(base[2]);
	V667=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V668;
	object V669;
	V668= STREF(object,(V665),24);
	{object V670= (V668);
	if((V670!= VV[51]))goto T1433;
	V669= CMPcar((V666));
	goto T1432;
	goto T1433;
T1433:;
	if((V670!= VV[123]))goto T1434;
	V669= CMPcadr((V666));
	goto T1432;
	goto T1434;
T1434:;
	if((V670!= VV[258]))goto T1435;
	V669= CMPcar((V666));
	goto T1432;
	goto T1435;
T1435:;
	V669= Cnil;}
	goto T1432;
T1432:;
	base[6]= (V668);
	base[7]= (V669);
	base[8]= (V667);
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
	{object V671;
	object V672;
	object V673;
	check_arg(3);
	V671=(base[0]);
	V672=(base[1]);
	V673=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V674;
	object V675;
	object V676;
	V674= list(2,VV[130],(V673));
	if(!(((V672))==(VV[123]))){
	goto T1442;}
	V675= list(2,Ct,(V674));
	goto T1440;
	goto T1442;
T1442:;
	V675= make_cons((V674),Cnil);
	goto T1440;
T1440:;
	base[6]= (V671);
	base[7]= (V675);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk254)();
	vs_top=sup;
	V676= vs_base[0];
	base[6]= (V672);
	base[7]= (V673);
	base[8]= (V676);
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
	{object V677;
	object V678;
	object V679;
	check_arg(3);
	V677=(base[0]);
	V678=(base[1]);
	V679=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V680;
	register object V681;
	V680= (V679);
	V681= CMPcar((V680));
	goto T1454;
T1454:;
	if(!(((V680))==Cnil)){
	goto T1455;}
	goto T1450;
	goto T1455;
T1455:;
	if(!(type_of((V681))==t_cons)){
	goto T1463;}
	if(((*(LnkLI260))((V681)))==Cnil){
	goto T1459;}
	goto T1461;
	goto T1463;
T1463:;
	base[4]= (V681);
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
	V680= CMPcdr((V680));
	V681= CMPcar((V680));
	goto T1454;}
	goto T1450;
T1450:;
	{object V682;
	object V683;
	register object V684;
	object V685;
	V682= CMPcar((V679));
	V683= (((((VV[72]->s.s_dbind))==(VV[73])?Ct:Cnil))==Cnil?Ct:Cnil);
	if(((V678))==Cnil){
	goto T1477;}
	if(!(type_of((V682))==t_cons)){
	goto T1480;}
	if(((*(LnkLI262))((V682)))!=Cnil){
	goto T1482;}
	V684= Cnil;
	goto T1475;
	goto T1482;
T1482:;
	base[7]= (V682);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk231)();
	vs_top=sup;
	V684= vs_base[0];
	goto T1475;
	goto T1480;
T1480:;{object V687;
	V687= (VV[132]->s.s_dbind);
	if(((V683))==Cnil){
	goto T1489;}
	V688= (*(LnkLI263))((V678));
	goto T1487;
	goto T1489;
T1489:;
	base[7]= (V678);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V688= vs_base[0];
	goto T1487;
T1487:;
	{register object x= V687,V686= V688;
	while(V686!=Cnil)
	if(eql(x,V686->c.c_car)){
	goto T1485;
	}else V686=V686->c.c_cdr;}}
	V684= Cnil;
	goto T1475;
	goto T1485;
T1485:;
	if(((V683))==Cnil){
	goto T1495;}{object V689;
	V689= (VV[133]->s.s_dbind);
	V690= (*(LnkLI265))((V682));
	if((((V689)==(/* INLINE-ARGS */V690)?Ct:Cnil))==Cnil){
	goto T1492;}
	goto T1493;}
	goto T1495;
T1495:;
	base[7]= (V682);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk266)(Lclptr266);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1492;}
	goto T1493;
T1493:;
	V684= Cnil;
	goto T1475;
	goto T1492;
T1492:;
	if(((V683))==Cnil){
	goto T1499;}
	V684= (*(LnkLI267))((V682));
	goto T1475;
	goto T1499;
T1499:;
	base[7]= (V682);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk268)(Lclptr268);
	vs_top=sup;
	V684= vs_base[0];
	goto T1475;
	goto T1477;
T1477:;
	V684= Cnil;
	goto T1475;
T1475:;
	if((V678)==Cnil){
	V685= Cnil;
	goto T1502;}
	if(((V683))==Cnil){
	goto T1504;}
	{register object V691;
	register object V692;
	V691= (*(LnkLI269))((V678));
	V692= CMPcar((V691));
	goto T1509;
T1509:;
	if(!(((V691))==Cnil)){
	goto T1510;}
	V685= Cnil;
	goto T1502;
	goto T1510;
T1510:;
	V693 = (V684);
	V694= (*(LnkLI270))((V692));
	if(!(eql(V693,/* INLINE-ARGS */V694))){
	goto T1514;}
	V685= (V692);
	goto T1502;
	goto T1514;
T1514:;
	V691= CMPcdr((V691));
	V692= CMPcar((V691));
	goto T1509;}
	goto T1504;
T1504:;
	V685= (*(LnkLI271))((V678),(V684));
	goto T1502;
T1502:;
	if(((V685))==Cnil){
	goto T1523;}
	if(((V683))!=Cnil){
	goto T1522;}
	base[7]= (V685);
	base[8]= (V677);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk272)(Lclptr272);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1523;}
	goto T1522;
T1522:;
	if(((V683))==Cnil){
	goto T1533;}
	base[7]= (*(LnkLI273))((V685));
	goto T1531;
	goto T1533;
T1533:;
	base[8]= (V685);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk274)(Lclptr274);
	vs_top=sup;
	base[7]= vs_base[0];
	goto T1531;
T1531:;
	base[8]= (V677);
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
	{VOL object V695;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V695=(base[0]);
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
	{object V696;
	if(((*(LnkLI196))((V695)))==Cnil){
	goto T1548;}
	if(type_of(V695)==t_structure){
	goto T1554;}
	goto T1552;
	goto T1554;
T1554:;
	if(!(((V695)->str.str_def)==(VV[134]))){
	goto T1552;}
	V697= STREF(object,(V695),4);
	goto T1550;
	goto T1552;
T1552:;{object V699;
	V699= (VV[65]->s.s_dbind);
	base[10]= small_fixnum(14);
	base[11]= (V695);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V700= vs_base[0];
	if(!((V699)==(CMPcar(V700)))){
	goto T1557;}}
	V697= CMPcar(((V695))->cc.cc_turbo[12]);
	goto T1550;
	goto T1557;
T1557:;
	base[10]= VV[66];
	vs_top=(vs_base=base+10)+1;
	Lerror();
	vs_top=sup;
	V697= vs_base[0];
	goto T1550;
T1550:;
	V701 = (VV[67]->s.s_dbind);
	V696= (V697)->v.v_self[fix(V701)];
	goto T1546;
	goto T1548;
T1548:;
	base[10]= (V695);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V696= vs_base[0];
	goto T1546;
T1546:;
	base[6]= (((((VV[72]->s.s_dbind))==(VV[73])?Ct:Cnil))==Cnil?Ct:Cnil);
	base[4]=MMcons(Cnil,base[3]);
	base[5]=MMcons(Ct,base[4]);
	base[6]=MMcons(base[6],base[5]);
	base[7]=MMcons(Cnil,base[6]);
	base[8]=MMcons(Cnil,base[7]);
	base[9]=MMcons(small_fixnum(0),base[8]);
	{register object V702;
	register object V703;
	V702= (V696);
	V703= CMPcar((V702));
	goto T1569;
T1569:;
	if(!(((V702))==Cnil)){
	goto T1570;}
	goto T1565;
	goto T1570;
T1570:;
	{object V704;
	register object V705;
	object V706;
	if(!(type_of((V703))==t_cons)){
	goto T1577;}
	V704= (VFUN_NARGS=2,(*(LnkLI275))((V703),Ct));
	goto T1575;
	goto T1577;
T1577:;
	base[16]= (V703);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	V704= vs_base[0];
	goto T1575;
T1575:;
	if(!(((base[1]->c.c_car))==(VV[51]))){
	goto T1582;}
	base[12]= CMPcar((V704));
	goto T1580;
	goto T1582;
T1582:;
	base[12]= CMPcadr((V704));
	goto T1580;
T1580:;
	base[12]=MMcons(base[12],base[9]);
	if(((base[6]->c.c_car))==Cnil){
	goto T1586;}
	V705= (*(LnkLI263))((base[12]->c.c_car));
	goto T1584;
	goto T1586;
T1586:;
	base[16]= (base[12]->c.c_car);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk276)(Lclptr276);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1588;}
	V705= Cnil;
	goto T1584;
	goto T1588;
T1588:;
	base[16]= (base[12]->c.c_car);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V705= vs_base[0];
	goto T1584;
T1584:;
	{register object x= (VV[132]->s.s_dbind),V707= (V705);
	while(V707!=Cnil)
	if(eql(x,V707->c.c_car)){
	base[14]= V707;
	goto T1592;
	}else V707=V707->c.c_cdr;
	base[14]= Cnil;}
	goto T1592;
T1592:;
	base[14]=MMcons(base[14],base[12]);
	if(!(type_of((V703))==t_cons)){
	goto T1595;}
	if(((*(LnkLI262))((V703)))!=Cnil){
	goto T1597;}
	V706= Cnil;
	goto T1593;
	goto T1597;
T1597:;
	base[16]= (V703);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk231)();
	vs_top=sup;
	V706= vs_base[0];
	goto T1593;
	goto T1595;
T1595:;
	base[16]= (V703);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk268)(Lclptr268);
	vs_top=sup;
	V706= vs_base[0];
	goto T1593;
T1593:;
	if(((V705))==Cnil){
	goto T1602;}
	{register object x= (VV[135]->s.s_dbind),V708= (V705);
	while(V708!=Cnil)
	if(eql(x,V708->c.c_car)){
	goto T1605;
	}else V708=V708->c.c_cdr;
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
	base[18]= (V706);
	base[19]= (VV[136]->s.s_dbind);
	vs_top=(vs_base=base+18)+2;
	Lgethash();
	vs_top=sup;
	base[17]= vs_base[0];
	vs_top=(vs_base=base+16)+2;
	Lmaphash();
	vs_top=sup;}
	V702= CMPcdr((V702));
	V703= CMPcar((V702));
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
	{object V709;
	object V710;
	check_arg(2);
	V709=(base[0]);
	V710=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V711;
	object V712;
	V711= Ct;
	V712= Cnil;
	{register object V713;
	register object V714;
	if(((*(LnkLI196))((V709)))==Cnil){
	goto T1627;}
	if(type_of(V709)==t_structure){
	goto T1633;}
	goto T1631;
	goto T1633;
T1633:;
	if(!(((V709)->str.str_def)==(VV[138]))){
	goto T1631;}
	V715= STREF(object,(V709),4);
	goto T1629;
	goto T1631;
T1631:;{object V717;
	V717= (VV[65]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V709);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V718= vs_base[0];
	if(!((V717)==(CMPcar(V718)))){
	goto T1636;}}
	V715= CMPcar(((V709))->cc.cc_turbo[12]);
	goto T1629;
	goto T1636;
T1636:;
	base[4]= VV[66];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V715= vs_base[0];
	goto T1629;
T1629:;
	V719 = (VV[67]->s.s_dbind);
	V713= (V715)->v.v_self[fix(V719)];
	goto T1625;
	goto T1627;
T1627:;
	base[4]= (V709);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk199)(Lclptr199);
	vs_top=sup;
	V713= vs_base[0];
	goto T1625;
T1625:;
	V714= CMPcar((V713));
	goto T1645;
T1645:;
	if(!(((V713))==Cnil)){
	goto T1646;}
	goto T1624;
	goto T1646;
T1646:;
	{object V720;
	register object V721;
	register object V722;
	register object V723;
	if(!(type_of((V714))==t_cons)){
	goto T1653;}
	V720= (VFUN_NARGS=2,(*(LnkLI275))((V714),Ct));
	goto T1651;
	goto T1653;
T1653:;
	base[4]= (V714);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	V720= vs_base[0];
	goto T1651;
T1651:;
	V721= (V710);
	V722= Ct;
	V723= Ct;
	{register object V724;
	register object V725;
	V724= (V720);
	V725= CMPcar((V724));
	goto T1660;
T1660:;
	if(!(((V724))==Cnil)){
	goto T1661;}
	goto T1656;
	goto T1661;
T1661:;
	{object V726;
	object V727;
	base[5]= (V725);
	{object V728;
	V728= CMPcar((V721));
	V721= CMPcdr((V721));
	base[6]= (V728);}
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk146)();
	if(vs_base>=vs_top){vs_top=sup;goto T1672;}
	V726= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1673;}
	V727= vs_base[0];
	vs_top=sup;
	goto T1674;
	goto T1672;
T1672:;
	V726= Cnil;
	goto T1673;
T1673:;
	V727= Cnil;
	goto T1674;
T1674:;
	if(((V726))!=Cnil){
	goto T1675;}
	V723= Cnil;
	goto T1675;
T1675:;
	if(((V727))!=Cnil){
	goto T1665;}
	V722= Cnil;
	goto T1656;}
	goto T1665;
T1665:;
	V724= CMPcdr((V724));
	V725= CMPcar((V724));
	goto T1660;}
	goto T1656;
T1656:;
	if(((V722))==Cnil){
	goto T1650;}
	if(((V723))!=Cnil){
	goto T1690;}
	V711= Cnil;
	goto T1690;
T1690:;
	V712= make_cons(V714,(V712));}
	goto T1650;
T1650:;
	V713= CMPcdr((V713));
	V714= CMPcar((V713));
	goto T1645;}
	goto T1624;
T1624:;
	{object V730;
	if(((*(LnkLI196))((V709)))==Cnil){
	goto T1703;}
	if(type_of(V709)==t_structure){
	goto T1709;}
	goto T1707;
	goto T1709;
T1709:;
	if(!(((V709)->str.str_def)==(VV[139]))){
	goto T1707;}
	V732= STREF(object,(V709),4);
	goto T1705;
	goto T1707;
T1707:;{object V734;
	V734= (VV[65]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V709);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V735= vs_base[0];
	if(!((V734)==(CMPcar(V735)))){
	goto T1712;}}
	V732= CMPcar(((V709))->cc.cc_turbo[12]);
	goto T1705;
	goto T1712;
T1712:;
	base[2]= VV[66];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V732= vs_base[0];
	goto T1705;
T1705:;
	V736 = (VV[97]->s.s_dbind);
	V731= (V732)->v.v_self[fix(V736)];
	goto T1701;
	goto T1703;
T1703:;
	base[2]= (V709);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk161)(Lclptr161);
	vs_top=sup;
	V731= vs_base[0];
	goto T1701;
T1701:;
	V730= STREF(object,V731,4);
	V737 = (V730);
	V738= nreverse((V712));
	V739 = (V710);
	base[2]= (*(LnkLI277))(V737,/* INLINE-ARGS */V738,V739);
	base[3]= (V711);
	vs_top=(vs_base=base+2)+2;
	return;}}
	}
}
/*	local entry for function SORT-APPLICABLE-METHODS	*/

static object LI99(V743,V744,V745)

object V743;object V744;object V745;
{	 VMB93 VMS93 VMV93
	goto TTL;
TTL:;
	base[0]=MMcons((V745),Cnil);
	V746 = (V744);
	V747 = (V743);
	V748= 
	make_cclosure_new(LC164,Cnil,base[0],Cdata);
	{object V749 = (*(LnkLI278))(V746,V747,V748);
	VMR93(V749)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SORT-METHODS	*/

static object LI102(V753,V754,V755)

object V753;object V754;object V755;
{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;
	base[0]=MMcons((V755),Cnil);
	base[1]=MMcons((V754),base[0]);
	base[2]=make_cclosure_new(LC103,Cnil,base[1],Cdata);
	base[2]=MMcons(base[2],base[1]);
	base[3]= (V753);
	base[4]= (base[2]->c.c_car);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk279)();
	vs_top=sup;
	{object V756 = vs_base[0];
	VMR94(V756)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for ORDER-SPECIALIZERS	*/

static void L104()
{register object *base=vs_base;
	register object *sup=base+VM95; VC95
	vs_check;
	{register object V757;
	register object V758;
	object V759;
	object V760;
	check_arg(4);
	V757=(base[0]);
	V758=(base[1]);
	V759=(base[2]);
	V760=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V761;
	register object V762;
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T1726;}
	base[4]= (V757);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V761= vs_base[0];
	goto T1724;
	goto T1726;
T1726:;
	if(type_of(V757)==t_structure){
	goto T1733;}
	goto T1731;
	goto T1733;
T1733:;
	if(!(((V757)->str.str_def)==(VV[140]))){
	goto T1731;}
	V763= STREF(object,(V757),4);
	goto T1729;
	goto T1731;
T1731:;{object V765;
	V765= (VV[65]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V757);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V766= vs_base[0];
	if(!((V765)==(CMPcar(V766)))){
	goto T1736;}}
	V763= CMPcar(((V757))->cc.cc_turbo[12]);
	goto T1729;
	goto T1736;
T1736:;
	base[4]= VV[66];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V763= vs_base[0];
	goto T1729;
T1729:;
	V767= (*(LnkLI281))(VV[141],VV[142]);
	V761= (V763)->v.v_self[fix(/* INLINE-ARGS */V767)];
	goto T1724;
T1724:;
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T1744;}
	base[4]= (V758);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V762= vs_base[0];
	goto T1742;
	goto T1744;
T1744:;
	if(type_of(V758)==t_structure){
	goto T1751;}
	goto T1749;
	goto T1751;
T1751:;
	if(!(((V758)->str.str_def)==(VV[143]))){
	goto T1749;}
	V768= STREF(object,(V758),4);
	goto T1747;
	goto T1749;
T1749:;{object V770;
	V770= (VV[65]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V758);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V771= vs_base[0];
	if(!((V770)==(CMPcar(V771)))){
	goto T1754;}}
	V768= CMPcar(((V758))->cc.cc_turbo[12]);
	goto T1747;
	goto T1754;
T1754:;
	base[4]= VV[66];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V768= vs_base[0];
	goto T1747;
T1747:;
	V772= (*(LnkLI281))(VV[141],VV[142]);
	V762= (V768)->v.v_self[fix(/* INLINE-ARGS */V772)];
	goto T1742;
T1742:;
	if(!(((V757))==((V758)))){
	goto T1761;}
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1761;
T1761:;
	if(!(type_of((V761))!=t_cons)){
	goto T1764;}
	base[4]= (V758);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1764;
T1764:;
	if(!(type_of((V762))!=t_cons)){
	goto T1767;}
	base[4]= (V757);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1767;
T1767:;
	{object V773= CMPcar((V761));
	if((V773!= VV[10]))goto T1769;
	{object V774= CMPcar((V762));
	if((V774!= VV[10]))goto T1770;
	base[4]= (V757);
	base[5]= (V758);
	base[6]= (V759);
	vs_top=(vs_base=base+4)+3;
	{object _funobj = (V760);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1770;
T1770:;
	base[4]= (V758);
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1769;
T1769:;
	if((V773!= VV[282]))goto T1774;
	{object V775= CMPcar((V762));
	if((V775!= VV[10]))goto T1775;
	base[4]= (V757);
	base[5]= (V758);
	base[6]= (V759);
	vs_top=(vs_base=base+4)+3;
	{object _funobj = (V760);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1775;
T1775:;
	base[4]= (V758);
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1774;
T1774:;
	if((V773!= VV[130]))goto T1779;
	{object V776= CMPcar((V762));
	if((V776!= VV[147]))goto T1780;
	base[4]= (V758);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1780;
T1780:;
	if((V776!= VV[130]))goto T1781;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1781;
T1781:;
	if((V776!= VV[10]))goto T1782;
	base[4]= (V761);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1782;
T1782:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1779;
T1779:;
	if((V773!= VV[147]))goto T1783;
	{object V777= CMPcar((V762));
	if((V777!= VV[147]))goto T1784;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1784;
T1784:;
	base[4]= (V757);
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

static object LI105(V781,V782,V783)

object V781;object V782;object V783;
{	 VMB96 VMS96 VMV96
	goto TTL;
TTL:;
	base[0]=MMcons(Cnil,Cnil);
	base[1]=make_cclosure_new(LC106,Cnil,base[0],Cdata);
	base[1]=MMcons(base[1],base[0]);
	goto T1786;
T1786:;
	V784 = (V783);
	V785 = (V781);
	V786 = (V782);
	V787= (base[1]->c.c_car);
	V788= (*(LnkLI278))(V785,V786,V787);
	(void)((
	V789 = V784,
	(type_of(V789) == t_sfun ?(*((V789)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V789)==t_vfun) ?
	(*((V789)->sfn.sfn_self)):
	(fcall.fun=(V789),fcalln))(/* INLINE-ARGS */V788)));
	{register object V790;
	register object V791;
	V790= (base[0]->c.c_car);
	V791= CMPcar((V790));
	goto T1795;
T1795:;
	if(!(((V790))==Cnil)){
	goto T1796;}
	goto T1791;
	goto T1796;
T1796:;
	if((CMPcaddr((V791)))!=Cnil){
	goto T1800;}
	{register object V792;
	register object V793;
	register object V794;
	register object V795;
	V792= (V791);
	V793= (V791);
	V794= CMPcadr((V793));
	V795= CMPcar((V792));
	((V792))->c.c_car = (V794);
	(CMPcdr((V793)))->c.c_car = (V795);
	(void)(CMPcdr((V793)));}
	{register object V797;
	V797= Ct;
	(CMPcddr(V791))->c.c_car = (V797);
	(void)(CMPcddr(V791));
	if(((V797))!=Cnil){
	goto T1787;}
	goto T1791;}
	goto T1800;
T1800:;
	V790= CMPcdr((V790));
	V791= CMPcar((V790));
	goto T1795;}
	goto T1791;
T1791:;
	{object V798 = Cnil;
	VMR96(V798)}
	goto T1787;
T1787:;
	goto T1786;
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLASS-MIGHT-PRECEDE-P	*/

static object LI107(V801,V802)

object V801;object V802;
{	 VMB97 VMS97 VMV97
	goto TTL;
TTL:;
	if(((VV[144]->s.s_dbind))!=Cnil){
	goto T1821;}
	base[0]= (V802);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V805= vs_base[0];
	{register object x= (V801),V804= CMPcdr(V805);
	while(V804!=Cnil)
	if(eql(x,V804->c.c_car)){
	V803= V804;
	goto T1823;
	}else V804=V804->c.c_cdr;
	V803= Cnil;}
	goto T1823;
T1823:;
	{object V806 = ((V803)==Cnil?Ct:Cnil);
	VMR97(V806)}
	goto T1821;
T1821:;
	{object V807 = (*(LnkLI283))((V801),(V802));
	VMR97(V807)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-PRECEDENCE	*/

static object LI108(V811,V812,V813)

object V811;register object V812;object V813;
{	 VMB98 VMS98 VMV98
	goto TTL;
TTL:;
	if(((V813))!=Cnil){
	goto T1827;}
	{register object V814;
	V814= Cnil;
	{register long V815;
	register long V816;
	V815= fix((V812));
	V816= 0;
	goto T1832;
T1832:;
	if(!((V816)>=(V815))){
	goto T1833;}
	{object V817 = (V814);
	VMR98(V817)}
	goto T1833;
T1833:;
	{register object V818;
	V819= one_minus((V812));
	V820 = CMPmake_fixnum(V816);
	V818= number_minus(/* INLINE-ARGS */V819,V820);
	V814= make_cons((V818),(V814));}
	V816= (long)(V816)+1;
	goto T1832;}}
	goto T1827;
T1827:;
	{object V821;
	object V822= (V813);
	if(V822==Cnil){
	{object V823 = Cnil;
	VMR98(V823)}}
	base[0]=V821=MMcons(Cnil,Cnil);
	goto T1842;
T1842:;
	base[1]= (V822->c.c_car);
	base[2]= (V811);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk284)();
	vs_top=sup;
	(V821->c.c_car)= vs_base[0];
	if((V822=MMcdr(V822))==Cnil){
	{object V825 = base[0];
	VMR98(V825)}}
	V821=MMcdr(V821)=MMcons(Cnil,Cnil);
	goto T1842;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SAUT-AND	*/

static void L109()
{register object *base=vs_base;
	register object *sup=base+VM99; VC99
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
	V828= Cnil;
	V829= Ct;
	{register object V830;
	register object V831;
	V830= CMPcdr((V827));
	V831= CMPcar((V830));
	goto T1850;
T1850:;
	if(!(((V830))==Cnil)){
	goto T1851;}
	goto T1846;
	goto T1851;
T1851:;
	{register object V832;
	register object V833;
	base[4]= (V826);
	base[5]= (V831);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk146)();
	if(vs_base>=vs_top){vs_top=sup;goto T1859;}
	V832= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1860;}
	V833= vs_base[0];
	vs_top=sup;
	goto T1861;
	goto T1859;
T1859:;
	V832= Cnil;
	goto T1860;
T1860:;
	V833= Cnil;
	goto T1861;
T1861:;
	if(((V832))==Cnil){
	goto T1862;}
	V828= Ct;
	goto T1846;
	goto T1862;
T1862:;
	if(((V833))!=Cnil){
	goto T1855;}
	V829= Cnil;
	goto T1846;}
	goto T1855;
T1855:;
	V830= CMPcdr((V830));
	V831= CMPcar((V830));
	goto T1850;}
	goto T1846;
T1846:;
	base[2]= (V828);
	base[3]= (V829);
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	function definition for SAUT-NOT	*/

static void L110()
{register object *base=vs_base;
	register object *sup=base+VM100; VC100
	vs_check;
	{register object V834;
	object V835;
	check_arg(2);
	V834=(base[0]);
	V835=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V836;
	V836= CMPcadr((V835));
	base[2]= Cnil;
	{object V837= CMPcar((V836));
	if((V837!= VV[10]))goto T1879;
	base[3]= (*(LnkLI285))((V834),(V836));
	goto T1878;
	goto T1879;
T1879:;
	if((V837!= VV[130]))goto T1880;
	base[3]= (*(LnkLI286))((V834),(V836));
	goto T1878;
	goto T1880;
T1880:;
	if((V837!= VV[282]))goto T1881;
	base[3]= (*(LnkLI287))((V834),(V836));
	goto T1878;
	goto T1881;
T1881:;
	if((V837!= VV[147]))goto T1882;
	base[3]= (*(LnkLI288))((V834),(V836));
	goto T1878;
	goto T1882;
T1882:;
	base[4]= VV[145];
	base[5]= VV[146];
	base[6]= (V835);
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

static object LI111(V840,V841)

object V840;object V841;
{	 VMB101 VMS101 VMV101
	goto TTL;
TTL:;
	{object V842;
	object V843;
	V842= (*(LnkLI289))((V840));
	base[2]= (V842);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V843= vs_base[0];
	{register object x= CMPcadr((V841)),V845= (V843);
	while(V845!=Cnil)
	if(x==(V845->c.c_car)){
	V844= V845;
	goto T1889;
	}else V845=V845->c.c_cdr;
	V844= Cnil;}
	goto T1889;
T1889:;
	{object V846 = ((V844)==Cnil?Ct:Cnil);
	VMR101(V846)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SAUT-NOT-PROTOTYPE	*/

static object LI112(V849,V850)

register object V849;object V850;
{	 VMB102 VMS102 VMV102
	goto TTL;
TTL:;
	{object V851;
	object V852;
	{object V853= CMPcar((V849));
	if((V853!= VV[147]))goto T1891;
	V851= (*(LnkLI290))(CMPcadr((V849)));
	goto T1890;
	goto T1891;
T1891:;
	if((V853!= VV[130]))goto T1892;
	V851= CMPcadr((V849));
	goto T1890;
	goto T1892;
T1892:;
	if((V853!= VV[282]))goto T1893;
	V851= CMPcadr((V849));
	goto T1890;
	goto T1893;
T1893:;
	if((V853!= VV[10]))goto T1894;
	V851= CMPcadr((V849));
	goto T1890;
	goto T1894;
T1894:;
	V851= Cnil;}
	goto T1890;
T1890:;
	base[2]= (V851);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V852= vs_base[0];
	{register object x= CMPcadr((V850)),V855= (V852);
	while(V855!=Cnil)
	if(x==(V855->c.c_car)){
	V854= V855;
	goto T1897;
	}else V855=V855->c.c_cdr;
	V854= Cnil;}
	goto T1897;
T1897:;
	{object V856 = ((V854)==Cnil?Ct:Cnil);
	VMR102(V856)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SAUT-NOT-CLASS-EQ	*/

static object LI113(V859,V860)

object V859;object V860;
{	 VMB103 VMS103 VMV103
	goto TTL;
TTL:;
	{object V861;
	{object V862= CMPcar((V859));
	if((V862!= VV[147]))goto T1899;
	V861= (*(LnkLI290))(CMPcadr((V859)));
	goto T1898;
	goto T1899;
T1899:;
	if((V862!= VV[130]))goto T1900;
	V861= CMPcadr((V859));
	goto T1898;
	goto T1900;
T1900:;
	V861= Cnil;}
	goto T1898;
T1898:;
	{object V863 = (((((V861))==(CMPcadr((V860)))?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR103(V863)}}
	return Cnil;
}
/*	local entry for function SAUT-NOT-EQL	*/

static object LI114(V866,V867)

object V866;object V867;
{	 VMB104 VMS104 VMV104
	goto TTL;
TTL:;
	{object V868= CMPcar((V866));
	if((V868!= VV[147]))goto T1901;
	{object V869 = (((eql(CMPcadr((V866)),CMPcadr((V867)))?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR104(V869)}
	goto T1901;
T1901:;
	{object V870 = Ct;
	VMR104(V870)}}
	return Cnil;
}
/*	function definition for CLASS-APPLICABLE-USING-CLASS-P	*/

static void L115()
{register object *base=vs_base;
	register object *sup=base+VM105; VC105
	vs_check;
	{object V871;
	register object V872;
	check_arg(2);
	V871=(base[0]);
	V872=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V873;
	V875 = (V871);
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T1905;}
	base[2]= (V872);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V876= vs_base[0];
	goto T1903;
	goto T1905;
T1905:;
	V876= (*(LnkLI263))((V872));
	goto T1903;
T1903:;
	{register object x= V875,V874= V876;
	while(V874!=Cnil)
	if(x==(V874->c.c_car)){
	V873= V874;
	goto T1902;
	}else V874=V874->c.c_cdr;
	V873= Cnil;}
	goto T1902;
T1902:;
	base[2]= (V873);
	if((V873)!=Cnil){
	base[3]= (V873);
	goto T1909;}
	if(((VV[144]->s.s_dbind))!=Cnil){
	goto T1911;}
	base[3]= (*(LnkLI291))((V871),(V872));
	goto T1909;
	goto T1911;
T1911:;
	base[3]= (*(LnkLI292))((V871),(V872));
	goto T1909;
T1909:;
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	local entry for function CLASSES-HAVE-COMMON-SUBCLASS-P	*/

static object LI116(V879,V880)

object V879;register object V880;
{	 VMB106 VMS106 VMV106
	goto TTL;
TTL:;
	if(!(((V879))==((V880)))){
	goto T1913;}
	{object V881 = Ct;
	VMR106(V881)}
	goto T1913;
T1913:;
	{object V882;
	base[0]= (V879);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	V882= vs_base[0];{object V883;
	{register object x= (V880),V884= (V882);
	while(V884!=Cnil)
	if(x==(V884->c.c_car)){
	V883= V884;
	goto T1918;
	}else V884=V884->c.c_cdr;
	V883= Cnil;}
	goto T1918;
T1918:;
	if(V883==Cnil)goto T1917;
	{object V885 = V883;
	VMR106(V885)}
	goto T1917;
T1917:;}
	{register object V886;
	register object V887;
	V886= (V882);
	V887= CMPcar((V886));
	goto T1922;
T1922:;
	if(!(((V886))==Cnil)){
	goto T1923;}
	{object V888 = Cnil;
	VMR106(V888)}
	goto T1923;
T1923:;
	if(((*(LnkLI292))((V887),(V880)))==Cnil){
	goto T1927;}
	{object V889 = Ct;
	VMR106(V889)}
	goto T1927;
T1927:;
	V886= CMPcdr((V886));
	V887= CMPcar((V886));
	goto T1922;}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SAUT-CLASS	*/

static void L117()
{register object *base=vs_base;
	register object *sup=base+VM107; VC107
	vs_check;
	{object V890;
	object V891;
	check_arg(2);
	V890=(base[0]);
	V891=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V892= CMPcar((V890));
	if((V892!= VV[10]))goto T1935;
	base[2]= CMPcadr((V890));
	base[3]= CMPcadr((V891));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk294)();
	return;
	goto T1935;
T1935:;
	base[2]= Cnil;
	{object V893;
	V893= (*(LnkLI289))((V890));
	V895= CMPcadr((V891));
	base[4]= (V893);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V896= vs_base[0];
	{register object x= /* INLINE-ARGS */V895,V894= V896;
	while(V894!=Cnil)
	if(x==(V894->c.c_car)){
	base[3]= V894;
	goto T1939;
	}else V894=V894->c.c_cdr;
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
	{register object V897;
	register object V898;
	check_arg(2);
	V897=(base[0]);
	V898=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((CMPcar((V897)))==(VV[147]))){
	goto T1944;}
	base[2]= Cnil;
	V899= (*(LnkLI290))(CMPcadr((V897)));
	base[3]= ((/* INLINE-ARGS */V899)==(CMPcadr((V898)))?Ct:Cnil);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1944;
T1944:;
	{object V900;
	{object V901= CMPcar((V897));
	if((V901!= VV[130]))goto T1949;
	V900= ((CMPcadr((V897)))==(CMPcadr((V898)))?Ct:Cnil);
	goto T1948;
	goto T1949;
T1949:;
	if((V901!= VV[10]))goto T1950;
	if(!((CMPcadr((V897)))==(CMPcadr((V898))))){
	goto T1951;}
	V900= Ct;
	goto T1948;
	goto T1951;
T1951:;
	V903= CMPcadr((V897));
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T1955;}
	base[2]= CMPcadr((V898));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V904= vs_base[0];
	goto T1953;
	goto T1955;
T1955:;
	V904= (*(LnkLI263))(CMPcadr((V898)));
	goto T1953;
T1953:;
	{register object x= /* INLINE-ARGS */V903,V902= V904;
	while(V902!=Cnil)
	if(x==(V902->c.c_car)){
	V900= V902;
	goto T1948;
	}else V902=V902->c.c_cdr;
	V900= Cnil;
	goto T1948;}
	goto T1950;
T1950:;
	V900= Cnil;}
	goto T1948;
T1948:;
	base[2]= (V900);
	base[3]= (V900);
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	function definition for SAUT-PROTOTYPE	*/

static void L119()
{register object *base=vs_base;
	register object *sup=base+VM109; VC109
	vs_check;
	{object V905;
	object V906;
	check_arg(2);
	V905=(base[0]);
	V906=(base[1]);
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
	{register object V907;
	object V908;
	check_arg(2);
	V907=(base[0]);
	V908=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V909;
	{object V910= CMPcar((V907));
	if((V910!= VV[147]))goto T1963;
	V909= (eql(CMPcadr((V907)),CMPcadr((V908)))?Ct:Cnil);
	goto T1962;
	goto T1963;
T1963:;
	if((V910!= VV[130]))goto T1964;
	V911= CMPcadr((V907));
	V912= (*(LnkLI290))(CMPcadr((V908)));
	V909= ((/* INLINE-ARGS */V911)==(/* INLINE-ARGS */V912)?Ct:Cnil);
	goto T1962;
	goto T1964;
T1964:;
	if((V910!= VV[10]))goto T1965;
	V914= CMPcadr((V907));
	{object V916;
	V916= (*(LnkLI290))(CMPcadr((V908)));
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T1969;}
	base[2]= (V916);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V915= vs_base[0];
	goto T1966;
	goto T1969;
T1969:;
	V915= (*(LnkLI263))((V916));}
	goto T1966;
T1966:;
	{register object x= /* INLINE-ARGS */V914,V913= V915;
	while(V913!=Cnil)
	if(x==(V913->c.c_car)){
	V909= V913;
	goto T1962;
	}else V913=V913->c.c_cdr;
	V909= Cnil;
	goto T1962;}
	goto T1965;
T1965:;
	V909= Cnil;}
	goto T1962;
T1962:;
	base[2]= (V909);
	base[3]= (V909);
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	function definition for SPECIALIZER-APPLICABLE-USING-TYPE-P	*/

static void L121()
{register object *base=vs_base;
	register object *sup=base+VM111; VC111
	vs_check;
	{register object V917;
	register object V918;
	check_arg(2);
	V917=(base[0]);
	V918=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V917);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk295)();
	vs_top=sup;
	V917= vs_base[0];
	if(!(((V917))==(Ct))){
	goto T1977;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1977;
T1977:;
	if(type_of((V918))!=t_cons){
	goto T1982;}
	if(!((CMPcar((V918)))==(Ct))){
	goto T1983;}
	goto T1982;
T1982:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1983;
T1983:;
	{object V919= CMPcar((V918));
	if((V919!= VV[88]))goto T1989;
	base[2]= (V917);
	base[3]= (V918);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk296)();
	return;
	goto T1989;
T1989:;
	if((V919!= VV[89]))goto T1992;
	base[2]= (V917);
	base[3]= (V918);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk297)();
	return;
	goto T1992;
T1992:;
	if((V919!= VV[10]))goto T1995;
	base[2]= (V917);
	base[3]= (V918);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk298)();
	return;
	goto T1995;
T1995:;
	if((V919!= VV[282]))goto T1998;
	base[2]= (V917);
	base[3]= (V918);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk299)();
	return;
	goto T1998;
T1998:;
	if((V919!= VV[130]))goto T2001;
	base[2]= (V917);
	base[3]= (V918);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk300)();
	return;
	goto T2001;
T2001:;
	if((V919!= VV[147]))goto T2004;
	base[2]= (V917);
	base[3]= (V918);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk301)();
	return;
	goto T2004;
T2004:;
	base[2]= VV[148];
	base[3]= VV[146];
	base[4]= (V918);
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
	{object V920;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2010;}
	V920=(base[1]);
	vs_top=sup;
	goto T2011;
	goto T2010;
T2010:;
	V920= Ct;
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
	if(!(type_of((V920))==t_symbol)){
	goto T2018;}
	base[3]= (VFUN_NARGS=1,(*(LnkLI302))((V920)));
	goto T2016;
	goto T2018;
T2018:;
	base[3]= (V920);
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
	{object V921;
	object V922;
	object V923;
	object V924;
	object V925;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>5) too_many_arguments();
	V921=(base[0]);
	V922=(base[1]);
	V923=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T2020;}
	V924=(base[3]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2021;}
	V925=(base[4]);
	vs_top=sup;
	goto T2022;
	goto T2020;
T2020:;
	V924= Cnil;
	goto T2021;
T2021:;
	V925= Cnil;
	goto T2022;
T2022:;
	V926= (((((V924))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	V927= (((((V925))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	V928= (*(LnkLI213))((V922));
	base[5]= (VFUN_NARGS=6,(*(LnkLI216))((V921),(V922),(V923),/* INLINE-ARGS */V926,/* INLINE-ARGS */V927,((/* INLINE-ARGS */V928)==Cnil?Ct:Cnil)));
	base[6]= (V924);
	base[7]= (V925);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local entry for function GET-SECONDARY-DISPATCH-FUNCTION1	*/

static object LI125(object V933,object V932,object V931,object V930,object V929,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB114 VMS114 VMV114
	{register object V934;
	object V935;
	register object V936;
	register object V937;
	register object V938;
	object V939;
	register object V940;
	va_start(ap,first);
	if(narg <5) too_few_arguments();
	Vcs[0]=MMcons(V933,Cnil);
	V934= V932;
	V935= V931;
	V936= V930;
	V937= V929;
	narg = narg - 5;
	if (narg <= 0) goto T2028;
	else {
	V938= first;}
	if (--narg <= 0) goto T2029;
	else {
	V939= va_arg(ap,object);}
	if (--narg <= 0) goto T2030;
	else {
	V940= va_arg(ap,object);}
	--narg; goto T2031;
	goto T2028;
T2028:;
	V938= Cnil;
	goto T2029;
T2029:;
	V939= Ct;
	goto T2030;
T2030:;
	V940= Cnil;
	goto T2031;
T2031:;
	if(((V934))!=Cnil){
	goto T2036;}
	if(((V940))==Cnil){
	goto T2039;}
	{object V941 = 
	make_cclosure_new(LC165,Cnil,Vcs[0],Cdata);
	VMR114(V941)}
	goto T2039;
T2039:;
	{object V942 = 
	make_cclosure_new(LC166,Cnil,Vcs[0],Cdata);
	VMR114(V942)}
	goto T2036;
T2036:;
	{object V943;
	register object V944;
	V943= CMPcar((V934));{object V945;
	base[2]= (V943);
	base[3]= (VV[150]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V945= vs_base[0];
	if(V945==Cnil)goto T2043;
	V944= V945;
	goto T2042;
	goto T2043;
T2043:;}
	{object V947;
	object V948;
	V947= (VV[150]->s.s_dbind);
	V948= make_cons(Cnil,Cnil);
	base[3]= V943;
	base[4]= (V947);
	base[5]= (V948);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;
	V944= vs_base[0];}
	goto T2042;
T2042:;
	if((CMPcdr((V934)))!=Cnil){
	goto T2053;}
	if(((V938))==Cnil){
	goto T2053;}
	if(((V936))!=Cnil){
	goto T2053;}
	if(((V937))==Cnil){
	goto T2053;}
	if(((V940))!=Cnil){
	goto T2053;}{object V949;
	V949= CMPcar((V944));
	if(V949==Cnil)goto T2063;
	{object V950 = V949;
	VMR114(V950)}
	goto T2063;
T2063:;}
	{object V952;
	V952= (*(LnkLI303))((Vcs[0]->c.c_car),(V934),(V935),(V936),(V937),(V938),(V939),(V940));
	(V944)->c.c_car = (V952);
	{object V953 = (V952);
	VMR114(V953)}}
	goto T2053;
T2053:;
	{object V954;
	V955 = (V934);
	if(((V938))==Cnil){
	goto T2070;}
	V956= VV[151];
	goto T2068;
	goto T2070;
T2070:;
	V956= (V935);
	goto T2068;
T2068:;
	V957 = (V936);
	V958 = (V937);
	V959 = (V940);
	V954= list(5,V955,V956,V957,V958,V959);{object V960;
	{register object x= (V954),V962= CMPcdr((V944));
	while(V962!=Cnil)
	if(equal(x,V962->c.c_car->c.c_car) &&V962->c.c_car != Cnil){
	V961= (V962->c.c_car);
	goto T2074;
	}else V962=V962->c.c_cdr;
	V961= Cnil;}
	goto T2074;
T2074:;
	V960= CMPcdr(V961);
	if(V960==Cnil)goto T2072;
	{object V963 = V960;
	VMR114(V963)}
	goto T2072;
T2072:;}
	{object V964;
	V964= (*(LnkLI303))((Vcs[0]->c.c_car),(V934),(V935),(V936),(V937),(V938),(V939),(V940));
	{object V965;
	object V967;
	V965= make_cons((V954),(V964));
	V967= make_cons((V965),CMPcdr(V944));
	(V944)->c.c_cdr = (V967);}
	{object V968 = (V964);
	VMR114(V968)}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function GET-SECONDARY-DISPATCH-FUNCTION2	*/

static object LI126(V977,V978,V979,V980,V981,V982,V983,V984)

register object V977;object V978;object V979;object V980;object V981;object V982;object V983;object V984;
{	 VMB115 VMS115 VMV115
	goto TTL;
TTL:;
	if(((V982))==Cnil){
	goto T2081;}
	if(((V983))==Cnil){
	goto T2081;}
	if(((V984))!=Cnil){
	goto T2081;}
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T2088;}
	{object V985;
	object V986;
	base[2]= (V977);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk304)(Lclptr304);
	vs_top=sup;
	V985= vs_base[0];
	V986= (*(LnkLI305))((V977),(V985),(V978));
	{object V987 = (*(LnkLI306))((V977),(V986),(V980),(V981));
	VMR115(V987)}}
	goto T2088;
T2088:;
	{object V988;
	V988= (*(LnkLI307))((V977),Cnil,(V978));
	{object V989 = (*(LnkLI306))((V977),(V988),(V980),(V981));
	VMR115(V989)}}
	goto T2081;
T2081:;
	{object V990;
	base[0]= (V977);
	base[1]= (V978);
	base[2]= (V979);
	base[3]= (V983);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk308)();
	vs_top=sup;
	V990= vs_base[0];
	{object V991 = (VFUN_NARGS=3,(*(LnkLI309))((V977),(V990),(V984)));
	VMR115(V991)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-EFFECTIVE-METHOD-FUNCTION	*/

static void L127()
{register object *base=vs_base;
	register object *sup=base+VM116; VC116
	vs_check;
	{object V992;
	object V993;
	object V994;
	object V995;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V992=(base[0]);
	V993=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2099;}
	V994=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2100;}
	V995=(base[3]);
	vs_top=sup;
	goto T2101;
	goto T2099;
T2099:;
	V994= Cnil;
	goto T2100;
T2100:;
	V995= Cnil;
	goto T2101;
T2101:;
	base[4]= (VFUN_NARGS=6,(*(LnkLI216))((V992),(V993),Cnil,(((((V994))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil),(((((V995))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil),Ct));
	base[5]= (V994);
	base[6]= (V995);
	vs_top=(vs_base=base+5)+2;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local entry for function GET-EFFECTIVE-METHOD-FUNCTION1	*/

static object LI128(object V997,object V996,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB117 VMS117 VMV117
	{object V998;
	object V999;
	object V1000;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V998= V997;
	V999= V996;
	narg = narg - 2;
	if (narg <= 0) goto T2107;
	else {
	V1000= first;}
	--narg; goto T2108;
	goto T2107;
T2107:;
	V1000= Ct;
	goto T2108;
T2108:;
	{object V1001 = (VFUN_NARGS=7,(*(LnkLI216))((V998),(V999),Cnil,Cnil,Cnil,Ct,(V1000)));
	VMR117(V1001)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function METHODS-CONTAIN-EQL-SPECIALIZER-P	*/

static object LI129(V1003)

object V1003;
{	 VMB118 VMS118 VMV118
	goto TTL;
TTL:;
	if(((VV[72]->s.s_dbind))==(VV[73])){
	goto T2110;}
	{object V1004 = Cnil;
	VMR118(V1004)}
	goto T2110;
T2110:;
	{register object V1005;
	register object V1006;
	V1005= (V1003);
	V1006= CMPcar((V1005));
	goto T2115;
T2115:;
	if(!(((V1005))==Cnil)){
	goto T2116;}
	{object V1007 = Cnil;
	VMR118(V1007)}
	goto T2116;
T2116:;
	{register object V1008;
	register object V1009;
	base[3]= (V1006);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	V1008= vs_base[0];
	V1009= CMPcar((V1008));
	goto T2127;
T2127:;
	if(!(((V1008))==Cnil)){
	goto T2128;}
	goto T2120;
	goto T2128;
T2128:;
	base[3]= (V1009);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk310)(Lclptr310);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2132;}
	goto T2122;
	goto T2132;
T2132:;
	V1008= CMPcdr((V1008));
	V1009= CMPcar((V1008));
	goto T2127;}
	goto T2122;
T2122:;
	{object V1010 = Ct;
	VMR118(V1010)}
	goto T2120;
T2120:;
	V1005= CMPcdr((V1005));
	V1006= CMPcar((V1005));
	goto T2115;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-DFUN	*/

static object LI130(object V1011,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB119 VMS119 VMV119
	{register object V1012;
	object V1013;
	object V1014;
	object V1015;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V1012= V1011;
	narg = narg - 1;
	if (narg <= 0) goto T2146;
	else {
	V1013= first;}
	if (--narg <= 0) goto T2147;
	else {
	V1014= va_arg(ap,object);}
	if (--narg <= 0) goto T2148;
	else {
	V1015= va_arg(ap,object);}
	--narg; goto T2149;
	goto T2146;
T2146:;
	V1013= Cnil;
	goto T2147;
T2147:;
	V1014= Cnil;
	goto T2148;
T2148:;
	V1015= Cnil;
	goto T2149;
T2149:;
	{object V1016;
	object V1017;
	object V1018;
	V1016= (*(LnkLI196))((V1012));
	if(((V1016))==Cnil){
	goto T2156;}
	V1017= (*(LnkLI311))((V1012));
	goto T2154;
	goto T2156;
T2156:;
	base[3]= (V1012);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk162)(Lclptr162);
	vs_top=sup;
	V1017= vs_base[0];
	goto T2154;
T2154:;
	V1018= (*(LnkLI220))((V1012));
	(void)((VFUN_NARGS=4,(*(LnkLI230))((V1012),(V1013),(V1014),(V1015))));
	{register object V1019;
	object V1020;
	if(((V1016))==Cnil){
	goto T2163;}
	if((V1013)!=Cnil){
	V1019= (V1013);
	goto T2161;}
	V1019= (*(LnkLI312))((V1012));
	goto T2161;
	goto T2163;
T2163:;
	base[5]= (V1012);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk313)(Lclptr313);
	vs_top=sup;
	V1019= vs_base[0];
	goto T2161;
T2161:;
	V1020= (*(LnkLI218))((V1012));
	base[5]= (V1020);
	vs_top=(vs_base=base+5)+1;
	Ltype_of();
	vs_top=sup;
	V1021= vs_base[0];
	if((VV[15])==(V1021)){
	goto T2167;}
	V1022 = (V1012);
	base[5]= (V1019);
	base[6]= (V1017);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk315)();
	vs_top=sup;
	V1023= vs_base[0];
	V1019= (*(LnkLI314))(V1022,V1023);
	goto T2167;
T2167:;
	(void)((*(LnkLI316))((V1012),(V1019)));
	if(((V1018))==Cnil){
	goto T2177;}
	if(((V1018))==((V1014))){
	goto T2177;}
	(void)((*(LnkLI317))((V1018)));
	goto T2177;
T2177:;
	{object V1024 = (V1019);
	VMR119(V1024)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LIST-DFUN	*/

static object LI131(V1026)

object V1026;
{	 VMB120 VMS120 VMV120
	goto TTL;
TTL:;
	{object V1027;
	object V1028;
	base[2]= (*(LnkLI218))((V1026));
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V1027= vs_base[0];
	{register object x= (V1027),V1029= (VV[152]->s.s_dbind);
	while(V1029!=Cnil)
	if(EQ(x,V1029->c.c_car->c.c_car) &&V1029->c.c_car != Cnil){
	V1028= (V1029->c.c_car);
	goto T2184;
	}else V1029=V1029->c.c_cdr;
	V1028= Cnil;}
	goto T2184;
T2184:;
	if(((V1028))!=Cnil){
	goto T2185;}
	{object V1030;
	V1028= make_cons((V1027),Cnil);
	V1030= (V1028);
	(VV[152]->s.s_dbind)= make_cons((V1030),(VV[152]->s.s_dbind));}
	goto T2185;
T2185:;
	{object V1031;
	object V1033;
	base[4]= (V1026);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk162)(Lclptr162);
	vs_top=sup;
	V1031= vs_base[0];
	V1033= make_cons((V1031),CMPcdr(V1028));
	(V1028)->c.c_cdr = (V1033);
	{object V1034 = (V1033);
	VMR120(V1034)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LIST-ALL-DFUNS	*/

static object LI132()

{	 VMB121 VMS121 VMV121
	goto TTL;
TTL:;
	(VV[152]->s.s_dbind)= Cnil;
	V1035= (VV[319]->s.s_gfdef);
	(void)((*(LnkLI318))(V1035));
	{object V1036 = (VV[152]->s.s_dbind);
	VMR121(V1036)}
	return Cnil;
}
/*	local entry for function LIST-LARGE-CACHE	*/

static object LI133(V1038)

object V1038;
{	 VMB122 VMS122 VMV122
	goto TTL;
TTL:;
	{object V1039;
	object V1040;
	base[2]= (*(LnkLI218))((V1038));
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V1039= vs_base[0];
	V1040= (*(LnkLI220))((V1038));
	if(((V1040))==Cnil){
	goto T2203;}
	{object V1041;
	V1041= CMPmake_fixnum((long)STREF(fixnum,(V1040),28));
	if(!(number_compare((V1041),(VV[154]->s.s_dbind))>=0)){
	goto T2207;}
	{object V1042;
	{register object x= (V1041),V1043= (VV[152]->s.s_dbind);
	while(V1043!=Cnil)
	if(eql(x,V1043->c.c_car->c.c_car) &&V1043->c.c_car != Cnil){
	V1042= (V1043->c.c_car);
	goto T2209;
	}else V1043=V1043->c.c_cdr;
	V1042= Cnil;}
	goto T2209;
T2209:;
	if(((V1042))!=Cnil){
	goto T2210;}
	{object V1044;
	V1042= make_cons((V1041),Cnil);
	V1044= (V1042);
	(VV[152]->s.s_dbind)= make_cons((V1044),(VV[152]->s.s_dbind));}
	goto T2210;
T2210:;
	{object V1045;
	object V1047;
	{object V1048;
	base[4]= (V1038);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk162)(Lclptr162);
	vs_top=sup;
	V1048= vs_base[0];
	if(!(((V1039))==(VV[13]))){
	goto T2220;}
	V1045= (V1048);
	goto T2216;
	goto T2220;
T2220:;
	V1045= list(2,(V1048),(V1039));}
	goto T2216;
T2216:;
	V1047= make_cons((V1045),CMPcdr(V1042));
	(V1042)->c.c_cdr = (V1047);
	{object V1049 = (V1047);
	VMR122(V1049)}}}
	goto T2207;
T2207:;
	{object V1050 = Cnil;
	VMR122(V1050)}}
	goto T2203;
T2203:;
	{object V1051 = Cnil;
	VMR122(V1051)}}
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
	V1052= (VV[320]->s.s_gfdef);
	(void)((*(LnkLI318))(V1052));
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
	object V1053= base[1];
	if(V1053==Cnil){
	goto T2237;}
	goto T2238;
T2238:;
	(void)(print((V1053->c.c_car),Cnil));
	if((V1053=MMcdr(V1053))==Cnil){
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

static object LI135(V1055)

object V1055;
{	 VMB124 VMS124 VMV124
	goto TTL;
TTL:;
	{object V1056;
	object V1057;
	register object V1058;
	base[3]= (*(LnkLI218))((V1055));
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V1056= vs_base[0];
	V1057= (*(LnkLI220))((V1055));
	{register object x= (V1056),V1059= (VV[156]->s.s_dbind);
	while(V1059!=Cnil)
	if(EQ(x,V1059->c.c_car->c.c_car) &&V1059->c.c_car != Cnil){
	V1058= (V1059->c.c_car);
	goto T2243;
	}else V1059=V1059->c.c_cdr;
	V1058= Cnil;}
	goto T2243;
T2243:;
	if(((V1058))!=Cnil){
	goto T2244;}
	{object V1060;
	V1058= list(3,(V1056),small_fixnum(0),Cnil);
	V1060= (V1058);
	(VV[156]->s.s_dbind)= make_cons((V1060),(VV[156]->s.s_dbind));}
	goto T2244;
T2244:;
	{object V1062;
	V1062= number_plus(CMPcadr(V1058),small_fixnum(1));
	(CMPcdr(V1058))->c.c_car = (V1062);
	(void)(CMPcdr(V1058));}
	if(((V1057))==Cnil){
	goto T2254;}
	{object V1063;
	object V1064;
	V1063= CMPmake_fixnum((long)STREF(fixnum,(V1057),28));
	{register object x= (V1063),V1065= CMPcaddr((V1058));
	while(V1065!=Cnil)
	if(eql(x,V1065->c.c_car->c.c_car) &&V1065->c.c_car != Cnil){
	V1064= (V1065->c.c_car);
	goto T2257;
	}else V1065=V1065->c.c_cdr;
	V1064= Cnil;}
	goto T2257;
T2257:;
	if(((V1064))!=Cnil){
	goto T2258;}
	{object V1066;
	object V1068;
	V1064= make_cons((V1063),small_fixnum(0));
	V1066= (V1064);
	V1068= make_cons((V1066),CMPcaddr(V1058));
	(CMPcddr(V1058))->c.c_car = (V1068);
	(void)(CMPcddr(V1058));}
	goto T2258;
T2258:;
	{object V1070;
	V1070= number_plus(CMPcdr(V1064),small_fixnum(1));
	(V1064)->c.c_cdr = (V1070);
	{object V1071 = (V1070);
	VMR124(V1071)}}}
	goto T2254;
T2254:;
	{object V1072 = Cnil;
	VMR124(V1072)}}
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
	{object V1073;
	object V1074= VV[157];
	if(V1074==Cnil){
	(VV[156]->s.s_dbind)= Cnil;
	goto T2268;}
	base[0]=V1073=MMcons(Cnil,Cnil);
	goto T2269;
T2269:;
	(V1073->c.c_car)= list(3,(V1074->c.c_car),small_fixnum(0),Cnil);
	if((V1074=MMcdr(V1074))==Cnil){
	(VV[156]->s.s_dbind)= base[0];
	goto T2268;}
	V1073=MMcdr(V1073)=MMcons(Cnil,Cnil);
	goto T2269;}
	goto T2268;
T2268:;
	V1076= (VV[324]->s.s_gfdef);
	(void)((*(LnkLI318))(V1076));
	base[0]= (VV[156]->s.s_dbind);
	{
	object V1077= base[0];
	if(V1077==Cnil){
	goto T2273;}
	goto T2274;
T2274:;
	{object V1080;
	base[2]= CMPcaddr((V1077->c.c_car));
	base[3]= (VV[321]->s.s_gfdef);
	base[4]= VV[155];
	base[5]= (VV[322]->s.s_gfdef);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk323)();
	vs_top=sup;
	V1080= vs_base[0];
	(CMPcddr((V1077->c.c_car)))->c.c_car = (V1080);
	(void)(CMPcddr((V1077->c.c_car)));}
	if((V1077=MMcdr(V1077))==Cnil){
	goto T2273;}
	goto T2274;}
	goto T2273;
T2273:;
	base[0]= (VV[156]->s.s_dbind);
	{
	object V1081= base[0];
	if(V1081==Cnil){
	goto T2282;}
	goto T2283;
T2283:;
	base[1]= Ct;
	base[2]= VV[158];
	base[3]= CMPcadr((V1081->c.c_car));
	base[4]= CMPcar((V1081->c.c_car));
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
	base[1]= Ct;
	base[2]= VV[159];
	base[3]= CMPcaddr((V1081->c.c_car));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	if((V1081=MMcdr(V1081))==Cnil){
	goto T2282;}
	goto T2283;}
	goto T2282;
T2282:;
	vs_base=vs_top=base+0;
	vs_base[0]=Cnil;
	return;
}
/*	local entry for function GFS-OF-TYPE	*/

static object LI138(V1084)

object V1084;
{	 VMB126 VMS126 VMV126
	goto TTL;
TTL:;
	base[0]=MMcons((V1084),Cnil);
	if(type_of((base[0]->c.c_car))==t_cons){
	goto T2293;}
	(base[0]->c.c_car)= make_cons((base[0]->c.c_car),Cnil);
	goto T2293;
T2293:;
	base[1]=MMcons(Cnil,base[0]);
	V1085= 
	make_cclosure_new(LC167,Cnil,base[1],Cdata);
	(void)((*(LnkLI318))(V1085));
	{object V1086 = (base[1]->c.c_car);
	VMR126(V1086)}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC167(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM127; VC127
	vs_check;
	{object V1087;
	check_arg(1);
	V1087=(base[0]);
	vs_top=sup;
	base[1]= (*(LnkLI218))((V1087));
	vs_top=(vs_base=base+1)+1;
	Ltype_of();
	vs_top=sup;
	V1089= vs_base[0];
	V1090 = (base0[1]->c.c_car);
	{register object x= V1089,V1088= V1090;
	while(V1088!=Cnil)
	if(x==(V1088->c.c_car)){
	goto T2301;
	}else V1088=V1088->c.c_cdr;
	goto T2300;}
	goto T2301;
T2301:;
	(base0[0]->c.c_car)= make_cons(V1087,(base0[0]->c.c_car));
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
	{object V1092;
	object V1093;
	check_arg(2);
	V1092=(base[0]);
	V1093=(base[1]);
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
	{object V1094;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1094=(base[0]);
	vs_top=sup;
	base[1]=VV[250]->s.s_gfdef;
	base[2]= (base0[0]->c.c_car);
	{object V1095;
	V1095= (V1094);
	 vs_top=base+3;
	 while(V1095!=Cnil)
	 {vs_push((V1095)->c.c_car);V1095=(V1095)->c.c_cdr;}
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
	{object V1096;
	object V1097;
	check_arg(2);
	V1096=(base[0]);
	V1097=(base[1]);
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
	{object V1098;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1098=(base[0]);
	vs_top=sup;
	base[1]=VV[250]->s.s_gfdef;
	base[2]= (base0[0]->c.c_car);
	{object V1099;
	V1099= (V1098);
	 vs_top=base+3;
	 while(V1099!=Cnil)
	 {vs_push((V1099)->c.c_car);V1099=(V1099)->c.c_cdr;}
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
	{object V1100;
	check_arg(1);
	V1100=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((base0[2])==Cnil){
	goto T2313;}
	base[1]= (V1100);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk293)(Lclptr293);
	vs_top=sup;
	V1102= vs_base[0];
	goto T2311;
	goto T2313;
T2313:;
	V1102= (*(LnkLI325))((V1100));
	goto T2311;
T2311:;
	{
	object V1101= V1102;
	if(V1101==Cnil){
	goto T2309;}
	goto T2310;
T2310:;
	base[1]= (V1101->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L123(base0);
	vs_top=sup;
	if((V1101=MMcdr(V1101))==Cnil){
	goto T2309;}
	goto T2310;}
	goto T2309;
T2309:;
	base[1]= (V1100);
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
	{object V1103;
	object V1104;
	object V1105;
	check_arg(3);
	V1103=(base[0]);
	V1104=(base[1]);
	V1105=(base[2]);
	vs_top=sup;
	{object V1106;
	V1106= Cnil;
	{object V1107;
	register object V1108;
	V1107= (base0[0]->c.c_car);
	V1108= CMPcar((V1107));
	goto T2323;
T2323:;
	if(!(((V1107))==Cnil)){
	goto T2324;}
	goto T2319;
	goto T2324;
T2324:;
	if(!((CMPcar((V1108)))==((V1103)))){
	goto T2330;}
	if((CMPcadr((V1108)))==((V1104))){
	goto T2329;}
	goto T2330;
T2330:;
	if(!((CMPcar((V1108)))==((V1104)))){
	goto T2328;}
	if(!((CMPcadr((V1108)))==((V1103)))){
	goto T2328;}
	goto T2329;
T2329:;
	V1106= (V1108);
	goto T2319;
	goto T2328;
T2328:;
	V1107= CMPcdr((V1107));
	V1108= CMPcar((V1107));
	goto T2323;}
	goto T2319;
T2319:;
	if(((V1106))!=Cnil){
	goto T2343;}
	if(((*(LnkLI326))((V1103),(V1104)))==Cnil){
	goto T2349;}
	if(((*(LnkLI326))((V1104),(V1103)))==Cnil){
	goto T2352;}
	V1106= list(4,(V1103),(V1104),Cnil,Ct);
	goto T2347;
	goto T2352;
T2352:;
	V1106= list(3,(V1103),(V1104),Ct);
	goto T2347;
	goto T2349;
T2349:;
	if(((*(LnkLI326))((V1104),(V1103)))==Cnil){
	goto T2355;}
	V1106= list(3,(V1104),(V1103),Ct);
	goto T2347;
	goto T2355;
T2355:;
	{object V1109;
	object V1110;
	base[3]= (V1103);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk327)(Lclptr327);
	vs_top=sup;
	V1109= vs_base[0];
	base[3]= (V1104);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk327)(Lclptr327);
	vs_top=sup;
	V1110= vs_base[0];
	if(((V1109))==Cnil){
	goto T2362;}
	if(((V1110))==Cnil){
	goto T2362;}
	if(!(type_of((V1109))==t_symbol)){
	goto T2362;}
	if(!(type_of((V1110))==t_symbol)){
	goto T2362;}
	base[3]= symbol_name((V1109));
	base[4]= symbol_name((V1110));
	vs_top=(vs_base=base+3)+2;
	Lstring_l();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2362;}
	V1106= list(3,(V1103),(V1104),Ct);
	goto T2347;
	goto T2362;
T2362:;
	V1106= list(3,(V1104),(V1103),Ct);}
	goto T2347;
T2347:;
	(base0[0]->c.c_car)= make_cons(V1106,(base0[0]->c.c_car));
	goto T2343;
T2343:;
	base[3]= CMPcar((V1106));
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
	{register object V1112;
	register object V1113;
	check_arg(2);
	V1112=(base[0]);
	V1113=(base[1]);
	vs_top=sup;
	{register object V1114;
	register object V1115;
	V1114= (base0[0]->c.c_car);
	V1115= CMPcar((V1114));
	goto T2378;
T2378:;
	if(!(((V1114))==Cnil)){
	goto T2379;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2379;
T2379:;
	{register object V1116;
	object V1117;
	register object V1118;
	V1119 = (V1115);
	if(!(type_of((V1112))==t_cons||((V1112))==Cnil)){
	goto T2387;}
	V1120= (VFUN_NARGS=2,(*(LnkLI275))((V1112),Ct));
	goto T2385;
	goto T2387;
T2387:;
	base[6]= (V1112);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	V1120= vs_base[0];
	goto T2385;
T2385:;
	V1116= nth(fix(V1119),V1120);
	V1121 = (V1115);
	if(!(type_of((V1113))==t_cons||((V1113))==Cnil)){
	goto T2393;}
	V1122= (VFUN_NARGS=2,(*(LnkLI275))((V1113),Ct));
	goto T2391;
	goto T2393;
T2393:;
	base[6]= (V1113);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	V1122= vs_base[0];
	goto T2391;
T2391:;
	V1117= nth(fix(V1121),V1122);
	base[6]= (V1116);
	base[7]= (V1117);
	base[8]= (V1115);
	base[9]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+6)+4;
	(void) (*Lnk328)();
	vs_top=sup;
	V1118= vs_base[0];
	if(((V1118))==Cnil){
	goto T2383;}
	base[6]= (((V1118))==((V1116))?Ct:Cnil);
	vs_top=(vs_base=base+6)+1;
	return;}
	goto T2383;
T2383:;
	V1114= CMPcdr((V1114));
	V1115= CMPcar((V1114));
	goto T2378;}
	}
}
/*	local function CLOSURE	*/

static void LC164(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM135; VC135
	vs_check;
	{object V1123;
	object V1124;
	object V1125;
	check_arg(3);
	V1123=(base[0]);
	V1124=(base[1]);
	V1125=(base[2]);
	vs_top=sup;
	{object V1126;
	object V1127;
	V1126= (*(LnkLI289))(nth(fix((V1125)),(base0[0]->c.c_car)));
	if(!(((VV[72]->s.s_dbind))==(VV[73]))){
	goto T2411;}
	base[5]= (V1126);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V1127= vs_base[0];
	goto T2409;
	goto T2411;
T2411:;
	V1127= (*(LnkLI263))((V1126));
	goto T2409;
T2409:;
	V1129 = (V1124);
	{register object x= (V1123),V1131= (V1127);
	while(V1131!=Cnil)
	if(x==(V1131->c.c_car)){
	V1130= V1131;
	goto T2417;
	}else V1131=V1131->c.c_cdr;
	V1130= Cnil;}
	goto T2417;
T2417:;
	{register object x= V1129,V1128= V1130;
	while(V1128!=Cnil)
	if(x==(V1128->c.c_car)){
	goto T2416;
	}else V1128=V1128->c.c_cdr;
	goto T2415;}
	goto T2416;
T2416:;
	base[5]= (V1123);
	vs_top=(vs_base=base+5)+1;
	return;
	goto T2415;
T2415:;
	base[5]= (V1124);
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
	{object V1132;
	object V1133;
	check_arg(2);
	V1132=(base[0]);
	V1133=(base[1]);
	vs_top=sup;
	{register object V1134;
	object V1135;
	if(((base0[3]->c.c_car))==Cnil){
	goto T2420;}
	V1134= (*(LnkLI263))((V1132));
	goto T2418;
	goto T2420;
T2420:;
	base[4]= (V1132);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V1134= vs_base[0];
	goto T2418;
T2418:;
	V1135= CMPcar((V1134));
	goto T2425;
T2425:;
	if(!(((V1134))==Cnil)){
	goto T2426;}
	base[4]= VV[137];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	return;
	goto T2426;
T2426:;
	{object V1136;
	{register object x= (V1135),V1137= (V1133);
	while(V1137!=Cnil)
	if(EQ(x,V1137->c.c_car->c.c_car) &&V1137->c.c_car != Cnil){
	V1136= (V1137->c.c_car);
	goto T2432;
	}else V1137=V1137->c.c_cdr;
	V1136= Cnil;}
	goto T2432;
T2432:;
	if(((V1136))==Cnil){
	goto T2431;}
	{object V1138;
	register object V1139;
	V1138= CMPcdr((V1136));
	if(((base0[3]->c.c_car))==Cnil){
	goto T2438;}
	V1139= (*(LnkLI273))((V1138));
	goto T2436;
	goto T2438;
T2438:;
	base[6]= (V1138);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk274)(Lclptr274);
	vs_top=sup;
	V1139= vs_base[0];
	goto T2436;
T2436:;
	if(((V1139))!=Cnil){
	goto T2441;}
	{frame_ptr fr;
	fr=frs_sch((base0[6]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[235]);
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	unwind(fr,Cnil);}
	goto T2441;
T2441:;
	{object V1141;
	V1141= (base0[7]->c.c_car);
	base[6]= V1132;
	base[7]= (V1141);
	base[8]= V1139;
	vs_top=(vs_base=base+6)+3;
	siLhash_set();
	vs_top=sup;}
	if(!(type_of((V1139))==t_cons)){
	goto T2450;}
	(base0[4]->c.c_car)= Cnil;
	goto T2450;
T2450:;
	if(((base0[5]->c.c_car))==Cnil){
	goto T2456;}
	if(!(eql((base0[5]->c.c_car),(V1139)))){
	goto T2457;}
	goto T2456;
T2456:;
	(base0[5]->c.c_car)= (V1139);
	goto T2455;
	goto T2457;
T2457:;
	(base0[5]->c.c_car)= Ct;
	goto T2455;
T2455:;
	(base0[0]->c.c_car)= CMPmake_fixnum((long)(fix((base0[0]->c.c_car)))+(1));
	if(!((fix((base0[0]->c.c_car)))==(1))){
	goto T2465;}
	(base0[2]->c.c_car)= (V1132);
	goto T2463;
	goto T2465;
T2465:;
	if(!((fix((base0[0]->c.c_car)))==(2))){
	goto T2463;}
	(base0[1]->c.c_car)= (V1132);
	goto T2463;
T2463:;
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	return;}}
	goto T2431;
T2431:;
	V1134= CMPcdr((V1134));
	V1135= CMPcar((V1134));
	goto T2425;}
	}
}
/*	local function CLOSURE	*/

static void LC162(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM137; VC137
	vs_check;
	{register object V1143;
	object V1144;
	check_arg(2);
	V1143=(base[0]);
	V1144=(base[1]);
	vs_top=sup;
	{object V1145;
	if(((base0[5]->c.c_car))==Cnil){
	goto T2478;}
	V1145= (*(LnkLI263))((V1143));
	goto T2476;
	goto T2478;
T2478:;
	base[2]= (V1143);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V1145= vs_base[0];
	goto T2476;
T2476:;
	{register object x= (base0[1]->c.c_car),V1146= (V1145);
	while(V1146!=Cnil)
	if(x==(V1146->c.c_car)){
	goto T2483;
	}else V1146=V1146->c.c_cdr;
	goto T2482;}
	goto T2483;
T2483:;
	if(((base0[0]->c.c_car))!=Cnil){
	goto T2486;}
	{register object x= (VV[132]->s.s_dbind),V1147= (V1145);
	while(V1147!=Cnil)
	if(eql(x,V1147->c.c_car)){
	goto T2489;
	}else V1147=V1147->c.c_cdr;
	goto T2485;}
	goto T2489;
T2489:;
	goto T2486;
T2486:;
	if(((base0[5]->c.c_car))!=Cnil){
	goto T2484;}
	base[2]= (V1144);
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
	{object V1148;
	object V1150;
	object V1151;
	V1148= make_cons((base0[1]->c.c_car),(V1144));
	V1150= (base0[9]->c.c_car);
	V1152 = (V1148);
	base[4]= V1143;
	base[5]= (V1150);
	vs_top=(vs_base=base+4)+2;
	Lgethash();
	vs_top=sup;
	V1153= vs_base[0];
	V1151= make_cons(V1152,V1153);
	base[4]= V1143;
	base[5]= (V1150);
	base[6]= (V1151);
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
	{object V1154;
	check_arg(1);
	V1154=(base[0]);
	vs_top=sup;
	base[1]= (base0[2]->c.c_car);
	base[2]= (V1154);
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
	{object V1155;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T2507;}
	V1155=(base[0]);
	vs_top=sup;
	goto T2508;
	goto T2507;
T2507:;
	V1155= Cnil;
	goto T2508;
T2508:;
	if(!(type_of((base0[1]->c.c_car))==t_cons)){
	goto T2511;}
	{object V1156;
	object V1157;
	object V1158;
	base[1]= (base0[4]->c.c_car);
	base[2]= (base0[3]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk193)();
	if(vs_base>=vs_top){vs_top=sup;goto T2516;}
	V1156= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2517;}
	V1157= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2518;}
	V1158= vs_base[0];
	vs_top=sup;
	goto T2519;
	goto T2516;
T2516:;
	V1156= Cnil;
	goto T2517;
T2517:;
	V1157= Cnil;
	goto T2518;
T2518:;
	V1158= Cnil;
	goto T2519;
T2519:;
	base[1]= (VFUN_NARGS=4,(*(LnkLI49))((base0[4]->c.c_car),(V1156),(V1157),(V1158)));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2511;
T2511:;
	{object V1159;
	object V1160;
	object V1161;
	base[1]= (base0[4]->c.c_car);
	base[2]= (base0[2]->c.c_car);
	base[3]= (V1155);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk182)();
	if(vs_base>=vs_top){vs_top=sup;goto T2524;}
	V1159= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2525;}
	V1160= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2526;}
	V1161= vs_base[0];
	vs_top=sup;
	goto T2527;
	goto T2524;
T2524:;
	V1159= Cnil;
	goto T2525;
T2525:;
	V1160= Cnil;
	goto T2526;
T2526:;
	V1161= Cnil;
	goto T2527;
T2527:;
	base[1]= (VFUN_NARGS=4,(*(LnkLI49))((base0[4]->c.c_car),(V1159),(V1160),(V1161)));
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
	{object V1162;
	object V1163;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1162=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2528;}
	V1163=(base[1]);
	vs_top=sup;
	goto T2529;
	goto T2528;
T2528:;
	V1163= Cnil;
	goto T2529;
T2529:;
	{object V1164;
	object V1165;
	object V1166;
	base[2]= (base0[3]->c.c_car);
	base[3]= (base0[1]->c.c_car);
	base[4]= (V1162);
	base[5]= (V1163);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk178)();
	if(vs_base>=vs_top){vs_top=sup;goto T2536;}
	V1164= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2537;}
	V1165= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2538;}
	V1166= vs_base[0];
	vs_top=sup;
	goto T2539;
	goto T2536;
T2536:;
	V1164= Cnil;
	goto T2537;
T2537:;
	V1165= Cnil;
	goto T2538;
T2538:;
	V1166= Cnil;
	goto T2539;
T2539:;
	base[2]= (VFUN_NARGS=4,(*(LnkLI49))((base0[3]->c.c_car),(V1164),(V1165),(V1166)));
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
	{object V1167;
	check_arg(1);
	V1167=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1168;
	V1168= (VFUN_NARGS=3,(*(LnkLI247))(base0[6],base0[9],(base0[11]->c.c_car)));
	if(((V1168))==(base0[6])){
	goto T2542;}
	base[1]= (V1168);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (V1167);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
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
	{object V1169;
	object V1170;
	object V1171;
	base[0]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk184)();
	if(vs_base>=vs_top){vs_top=sup;goto T2547;}
	V1169= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2548;}
	V1170= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2549;}
	V1171= vs_base[0];
	vs_top=sup;
	goto T2550;
	goto T2547;
T2547:;
	V1169= Cnil;
	goto T2548;
T2548:;
	V1170= Cnil;
	goto T2549;
T2549:;
	V1171= Cnil;
	goto T2550;
T2550:;
	base[0]= (VFUN_NARGS=4,(*(LnkLI49))((base0[0]->c.c_car),(V1169),(V1170),(V1171)));
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	local function N-N	*/

static void L85(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM143; VC143
	vs_check;
	{object V1172;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T2551;}
	V1172=(base[0]);
	vs_top=sup;
	goto T2552;
	goto T2551;
T2551:;
	V1172= Cnil;
	goto T2552;
T2552:;
	if(!(type_of((base0[11]->c.c_car))==t_cons)){
	goto T2555;}
	{object V1173;
	object V1174;
	object V1175;
	base[1]= (base0[0]->c.c_car);
	base[2]= (base0[8]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk193)();
	if(vs_base>=vs_top){vs_top=sup;goto T2560;}
	V1173= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2561;}
	V1174= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2562;}
	V1175= vs_base[0];
	vs_top=sup;
	goto T2563;
	goto T2560;
T2560:;
	V1173= Cnil;
	goto T2561;
T2561:;
	V1174= Cnil;
	goto T2562;
T2562:;
	V1175= Cnil;
	goto T2563;
T2563:;
	base[1]= (VFUN_NARGS=4,(*(LnkLI49))((base0[0]->c.c_car),(V1173),(V1174),(V1175)));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2555;
T2555:;
	{object V1176;
	object V1177;
	object V1178;
	base[1]= (base0[0]->c.c_car);
	base[2]= (base0[10]->c.c_car);
	base[3]= (V1172);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk182)();
	if(vs_base>=vs_top){vs_top=sup;goto T2568;}
	V1176= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2569;}
	V1177= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2570;}
	V1178= vs_base[0];
	vs_top=sup;
	goto T2571;
	goto T2568;
T2568:;
	V1176= Cnil;
	goto T2569;
T2569:;
	V1177= Cnil;
	goto T2570;
T2570:;
	V1178= Cnil;
	goto T2571;
T2571:;
	base[1]= (VFUN_NARGS=4,(*(LnkLI49))((base0[0]->c.c_car),(V1176),(V1177),(V1178)));
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
	{object V1179;
	object V1180;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1179=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2572;}
	V1180=(base[1]);
	vs_top=sup;
	goto T2573;
	goto T2572;
T2572:;
	V1180= Cnil;
	goto T2573;
T2573:;
	{object V1181;
	object V1182;
	object V1183;
	base[2]= (base0[0]->c.c_car);
	base[3]= (base0[10]->c.c_car);
	base[4]= (V1179);
	base[5]= (V1180);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk178)();
	if(vs_base>=vs_top){vs_top=sup;goto T2580;}
	V1181= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2581;}
	V1182= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2582;}
	V1183= vs_base[0];
	vs_top=sup;
	goto T2583;
	goto T2580;
T2580:;
	V1181= Cnil;
	goto T2581;
T2581:;
	V1182= Cnil;
	goto T2582;
T2582:;
	V1183= Cnil;
	goto T2583;
T2583:;
	base[2]= (VFUN_NARGS=4,(*(LnkLI49))((base0[0]->c.c_car),(V1181),(V1182),(V1183)));
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
	{object V1184;
	object V1185;
	object V1186;
	check_arg(3);
	V1184=(base[0]);
	V1185=(base[1]);
	V1186=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= small_fixnum(2);
	vs_top=(vs_base=base+3)+1;
	Lrandom();
	vs_top=sup;
	V1187= vs_base[0];
	if(!(number_compare(small_fixnum(0),V1187)==0)){
	goto T2584;}
	{object V1188;
	object V1189;
	V1188= (V1186);
	V1189= (V1185);
	V1185= (V1188);
	V1186= (V1189);}
	goto T2584;
T2584:;
	{object V1190;
	object V1191;
	object V1192;
	base[3]= (base0[0]->c.c_car);
	base[4]= (base0[10]->c.c_car);
	base[5]= (V1185);
	base[6]= (V1186);
	base[7]= (V1184);
	vs_top=(vs_base=base+3)+5;
	(void) (*Lnk237)();
	if(vs_base>=vs_top){vs_top=sup;goto T2601;}
	V1190= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2602;}
	V1191= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2603;}
	V1192= vs_base[0];
	vs_top=sup;
	goto T2604;
	goto T2601;
T2601:;
	V1190= Cnil;
	goto T2602;
T2602:;
	V1191= Cnil;
	goto T2603;
T2603:;
	V1192= Cnil;
	goto T2604;
T2604:;
	base[3]= (VFUN_NARGS=4,(*(LnkLI49))((base0[0]->c.c_car),(V1190),(V1191),(V1192)));
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
	{object V1193;
	check_arg(1);
	V1193=(base[0]);
	vs_top=sup;
	V1194 = (base0[0]->c.c_car);
	base[1]= (V1193);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	V1195= vs_base[0];
	base[1]= (equal(V1194,V1195)?Ct:Cnil);
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
	{object V1196;
	check_arg(1);
	V1196=(base[0]);
	vs_top=sup;
	base[1]= (((V1196))==((VV[125]->s.s_dbind))?Ct:Cnil);
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
	{object V1197;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1197=(base[0]);
	vs_top=sup;
	base[1]=VV[250]->s.s_gfdef;
	base[2]= (base0[1]->c.c_car);
	{object V1198;
	V1198= (V1197);
	 vs_top=base+3;
	 while(V1198!=Cnil)
	 {vs_push((V1198)->c.c_car);V1198=(V1198)->c.c_cdr;}
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
	{object V1199;
	check_arg(1);
	V1199=(base[0]);
	vs_top=sup;
	if(!(type_of((V1199))==t_cons)){
	goto T2610;}{object V1200;
	V1200= (VV[122]->s.s_dbind);
	V1201= (*(LnkLI265))((V1199));
	base[1]= ((V1200)==(/* INLINE-ARGS */V1201)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2610;
T2610:;
	base[1]= (V1199);
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
	{object V1202;
	check_arg(1);
	V1202=(base[0]);
	vs_top=sup;
	if(!(type_of((V1202))==t_cons)){
	goto T2614;}{object V1203;
	V1203= (VV[121]->s.s_dbind);
	V1204= (*(LnkLI265))((V1202));
	base[1]= ((V1203)==(/* INLINE-ARGS */V1204)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2614;
T2614:;
	base[1]= (V1202);
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
	{object V1205;
	object V1206;
	check_arg(2);
	V1205=(base[0]);
	V1206=(base[1]);
	vs_top=sup;
	{register object V1207;
	object V1208;
	V1207= (*(LnkLI290))((V1206));
	if(type_of(V1207)==t_structure){
	goto T2623;}
	goto T2621;
	goto T2623;
T2623:;
	if(!(((V1207)->str.str_def)==(VV[104]))){
	goto T2621;}
	V1209= STREF(object,(V1207),4);
	goto T2619;
	goto T2621;
T2621:;{object V1211;
	V1211= (VV[65]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V1207);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V1212= vs_base[0];
	if(!((V1211)==(CMPcar(V1212)))){
	goto T2626;}}
	V1209= CMPcar(((V1207))->cc.cc_turbo[12]);
	goto T2619;
	goto T2626;
T2626:;
	base[4]= VV[66];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V1209= vs_base[0];
	goto T2619;
T2619:;
	V1213= (*(LnkLI281))(VV[10],VV[102]);
	V1208= (V1209)->v.v_self[fix(/* INLINE-ARGS */V1213)];
	base[4]= (*(LnkLI331))((V1208),(V1206),(base0[0]->c.c_car),(V1205));
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
	{register object V1214;
	check_arg(1);
	V1214=(base[0]);
	vs_top=sup;
	{register object V1215;
	object V1216;
	V1215= (*(LnkLI290))((V1214));
	if(type_of(V1215)==t_structure){
	goto T2638;}
	goto T2636;
	goto T2638;
T2638:;
	if(!(((V1215)->str.str_def)==(VV[101]))){
	goto T2636;}
	V1217= STREF(object,(V1215),4);
	goto T2634;
	goto T2636;
T2636:;{object V1219;
	V1219= (VV[65]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V1215);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V1220= vs_base[0];
	if(!((V1219)==(CMPcar(V1220)))){
	goto T2641;}}
	V1217= CMPcar(((V1215))->cc.cc_turbo[12]);
	goto T2634;
	goto T2641;
T2641:;
	base[3]= VV[66];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V1217= vs_base[0];
	goto T2634;
T2634:;
	V1221= (*(LnkLI281))(VV[10],VV[102]);
	V1216= (V1217)->v.v_self[fix(/* INLINE-ARGS */V1221)];
	if(type_of(V1214)==t_structure){
	goto T2651;}
	goto T2649;
	goto T2651;
T2651:;
	if(!(((V1214)->str.str_def)==(VV[103]))){
	goto T2649;}
	V1222= STREF(object,(V1214),4);
	goto T2647;
	goto T2649;
T2649:;{object V1224;
	V1224= (VV[65]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V1214);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk197)();
	vs_top=sup;
	V1225= vs_base[0];
	if(!((V1224)==(CMPcar(V1225)))){
	goto T2654;}}
	V1222= CMPcar(((V1214))->cc.cc_turbo[12]);
	goto T2647;
	goto T2654;
T2654:;
	base[3]= VV[66];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V1222= vs_base[0];
	goto T2647;
T2647:;
	V1226= (*(LnkLI281))((V1216),(base0[0]->c.c_car));
	base[3]= (V1222)->v.v_self[fix(/* INLINE-ARGS */V1226)];
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
	{object V1227;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1227=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V1227);
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
	{object V1228;
	object V1229;
	check_arg(2);
	V1228=(base[0]);
	V1229=(base[1]);
	vs_top=sup;
	V1230 = (base0[0]->c.c_car);
	base[2]= (V1228);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk236)(Lclptr236);
	vs_top=sup;
	V1231= vs_base[0];
	V1232 = (V1229);
	(base0[0]->c.c_car)= (VFUN_NARGS=4,(*(LnkLI247))(V1230,V1231,V1232,Ct));
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
	{object V1233;
	object V1234;
	object V1235;
	object V1236;
	check_arg(4);
	V1233=(base[0]);
	V1234=(base[1]);
	V1235=(base[2]);
	V1236=(base[3]);
	vs_top=sup;
	{object V1237;
	object V1238;
	if(!((VV[10])==(CMPcar((V1234))))){
	goto T2667;}
	{object V1239;
	object V1240;
	V1239= (*(LnkLI290))(CMPcadr((V1234)));
	base[8]= (V1239);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk264)(Lclptr264);
	vs_top=sup;
	V1240= vs_base[0];
	{register object x= (VV[76]->s.s_dbind),V1241= (V1240);
	while(V1241!=Cnil)
	if(x==(V1241->c.c_car)){
	goto T2674;
	}else V1241=V1241->c.c_cdr;
	goto T2673;}
	goto T2674;
T2674:;
	V1237= (VV[77]->s.s_dbind);
	goto T2665;
	goto T2673;
T2673:;
	{register object x= (VV[78]->s.s_dbind),V1242= (V1240);
	while(V1242!=Cnil)
	if(x==(V1242->c.c_car)){
	goto T2677;
	}else V1242=V1242->c.c_cdr;
	goto T2676;}
	goto T2677;
T2677:;
	V1237= (VV[79]->s.s_dbind);
	goto T2665;
	goto T2676;
T2676:;
	V1237= (VV[80]->s.s_dbind);
	goto T2665;}
	goto T2667;
T2667:;
	V1237= small_fixnum(0);
	goto T2665;
T2665:;
	V1238= number_plus((number_compare((V1235),(V1236))>=0?((V1235)):(V1236)),(V1237));
	if(((base0[1]->c.c_car))==Cnil){
	goto T2679;}
	if(!(number_compare((base0[1]->c.c_car),(V1238))<=0)){
	goto T2679;}
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[209]);
	base[6]= (V1238);
	vs_top=(vs_base=base+6)+1;
	unwind(fr,Cnil);}
	goto T2679;
T2679:;
	base[6]= (V1238);
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
	{object V1243;
	object V1244;
	check_arg(2);
	V1243=(base[0]);
	V1244=(base[1]);
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
	{object V1245;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1245=(base[0]);
	vs_top=sup;
	base[1]= (base0[1]->c.c_car);
	base[2]= (V1245);
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
	{register object V1246;
	check_arg(1);
	V1246=(base[0]);
	vs_top=sup;{object V1247;
	if(((VV[72]->s.s_dbind))==(VV[73])){
	goto T2690;}
	V1247= Cnil;
	goto T2689;
	goto T2690;
T2690:;
	base[1]= (VV[310]->s.s_gfdef);
	base[3]= (V1246);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk200)();
	vs_top=sup;
	V1247= vs_base[0];
	goto T2689;
T2689:;
	if(V1247==Cnil)goto T2688;
	base[1]= V1247;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2688;
T2688:;}
	{object V1248;
	if(((base0[1]->c.c_car))==Cnil){
	goto T2698;}{object V1250;
	V1250= CMPcaddr((V1246));
	if(V1250==Cnil)goto T2700;
	V1249= V1250;
	goto T2696;
	goto T2700;
T2700:;}
	V1249= CMPcadr((V1246));
	goto T2696;
	goto T2698;
T2698:;{object V1251;
	base[1]= (V1246);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk334)(Lclptr334);
	vs_top=sup;
	V1251= vs_base[0];
	if(V1251==Cnil)goto T2702;
	V1249= V1251;
	goto T2696;
	goto T2702;
T2702:;}
	base[1]= (V1246);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk335)(Lclptr335);
	vs_top=sup;
	V1249= vs_base[0];
	goto T2696;
T2696:;
	V1252 = (base0[0]->c.c_car);
	V1248= (VFUN_NARGS=3,(*(LnkLI249))(V1249,VV[74],V1252));
	if(((base0[2]->c.c_car))==Cnil){
	goto T2707;}
	if(!(((V1248))==(Ct))){
	goto T2710;}
	V1253= Ct;
	goto T2709;
	goto T2710;
T2710:;
	V1253= (((V1248))==(Cnil)?Ct:Cnil);
	goto T2709;
T2709:;
	base[1]= ((V1253)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2707;
T2707:;
	base[1]= (((V1248))==((base0[0]->c.c_car))?Ct:Cnil);
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
	{object V1254;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1254=(base[0]);
	vs_top=sup;
	base[1]= (base0[1]->c.c_car);
	base[2]= (V1254);
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
	{object V1255;
	check_arg(1);
	V1255=(base[0]);
	vs_top=sup;
	{object V1256;
	if(!(type_of((V1255))==t_cons||((V1255))==Cnil)){
	goto T2717;}
	V1256= CMPcaddr((V1255));
	goto T2715;
	goto T2717;
T2717:;
	base[1]= (V1255);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk334)(Lclptr334);
	vs_top=sup;
	V1256= vs_base[0];
	goto T2715;
T2715:;
	base[1]= (VFUN_NARGS=2,(*(LnkLI249))((V1256),VV[62]));
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
	{object V1257;
	check_arg(1);
	V1257=(base[0]);
	vs_top=sup;
	base[1]= (((V1257))==(Ct)?Ct:Cnil);
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
	{object V1258;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1258=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V1258);
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
	{object V1259;
	check_arg(1);
	V1259=(base[0]);
	vs_top=sup;
	base[1]= (((V1259))==(Ct)?Ct:Cnil);
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
	{object V1260;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1260=(base[0]);
	vs_top=sup;
	base[1]= (base0[1]->c.c_car);
	base[2]= (V1260);
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
	{object V1261;
	check_arg(1);
	V1261=(base[0]);
	vs_top=sup;
	base[1]= (((V1261))==(Ct)?Ct:Cnil);
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
	{object V1262;
	object V1263;
	check_arg(2);
	V1262=(base[0]);
	V1263=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	base[3]= (V1262);
	base[4]= (V1263);
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
	{object V1264;
	check_arg(1);
	V1264=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= Cnil;
	base[3]= (V1264);
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

