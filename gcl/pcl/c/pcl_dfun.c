
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
	base[5]= make_cons(CMPcar((V2)),CMPcaar((V5)));
	base[6]= CMPcaddr((V5));
	vs_top=(vs_base=base+3)+4;
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
	if(((VV[6]->s.s_dbind))==Cnil){
	goto T40;}
	{register object x= (V6),V8= VV[7];
	while(V8!=Cnil)
	if(eql(x,V8->c.c_car)){
	goto T44;
	}else V8=V8->c.c_cdr;
	goto T40;}
	goto T44;
T44:;
	{object V10;
	object V11= CMPcar((V7));
	if(V11==Cnil){
	V9= Cnil;
	goto T46;}
	base[2]=V10=MMcons(Cnil,Cnil);
	goto T47;
T47:;
	if(!(((V11->c.c_car))==(Ct))){
	goto T50;}
	(V10->c.c_car)= (V11->c.c_car);
	goto T48;
	goto T50;
T50:;
	(V10->c.c_car)= VV[8];
	goto T48;
T48:;
	if((V11=MMcdr(V11))==Cnil){
	V9= base[2];
	goto T46;}
	V10=MMcdr(V10)=MMcons(Cnil,Cnil);
	goto T47;}
	goto T46;
T46:;
	V7= make_cons(V9,CMPcdr((V7)));
	goto T40;
T40:;
	{object V13;
	object V14;
	{register object x= (V6),V15= (VV[4]->s.s_dbind);
	while(V15!=Cnil)
	if(EQ(x,V15->c.c_car->c.c_car) &&V15->c.c_car != Cnil){
	V13= (V15->c.c_car);
	goto T52;
	}else V15=V15->c.c_cdr;
	V13= Cnil;}
	goto T52;
T52:;
	{register object x= (V7),V16= CMPcdr((V13));
	while(V16!=Cnil)
	if(equal(x,V16->c.c_car->c.c_car) &&V16->c.c_car != Cnil){
	V14= (V16->c.c_car);
	goto T53;
	}else V16=V16->c.c_cdr;
	V14= Cnil;}
	goto T53;
T53:;
	if(((VV[1]->s.s_dbind))!=Cnil){
	goto T55;}
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
	goto T55;
T55:;{object V18;
	V18= CMPcadr((V14));
	if(V18==Cnil)goto T60;
	base[4]= V18;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T60;
T60:;}
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
	if(vs_base>=vs_top){vs_top=sup;goto T66;}
	V19= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T67;}
	V20= vs_base[0];
	vs_top=sup;
	goto T68;
	goto T66;
T66:;
	V19= Cnil;
	goto T67;
T67:;
	V20= Cnil;
	goto T68;
T68:;
	{object V22;
	base[4]= (V7);
	vs_top=(vs_base=base+4)+1;
	Lcopy_list();
	vs_top=sup;
	V23= vs_base[0];
	if(((V20))!=Cnil){
	goto T75;}
	V24= VV[9];
	goto T73;
	goto T75;
T75:;
	V24= Cnil;
	goto T73;
T73:;
	V22= list(4,V23,(V19),V24,(V20));
	if(((V13))==Cnil){
	goto T78;}
	{object V27;
	V27= make_cons(V22,CMPcdr(V13));
	(V13)->c.c_cdr = (V27);
	goto T69;}
	goto T78;
T78:;
	{object V28;
	V28= list(2,(V6),(V22));
	(VV[4]->s.s_dbind)= make_cons((V28),(VV[4]->s.s_dbind));}}
	goto T69;
T69:;
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
	goto T86;
	}else V39=V39->c.c_cdr;
	V37= Cnil;}
	goto T86;
T86:;
	{register object x= (V34),V40= CMPcdr((V37));
	while(V40!=Cnil)
	if(equal(x,V40->c.c_car->c.c_car) &&V40->c.c_car != Cnil){
	V38= (V40->c.c_car);
	goto T87;
	}else V40=V40->c.c_cdr;
	V38= Cnil;}
	goto T87;
T87:;
	if(((V38))==Cnil){
	goto T89;}
	if((CMPcadddr((V38)))==Cnil){
	goto T92;}
	{object V41;
	register object V42;
	object V43;
	{object V44= (V33);
	if((V44!= VV[69]))goto T95;
	V41= VV[10];
	goto T94;
	goto T95;
T95:;
	if((V44!= VV[76]))goto T96;
	V41= VV[11];
	goto T94;
	goto T96;
T96:;
	if((V44!= VV[82]))goto T97;
	V41= VV[12];
	goto T94;
	goto T97;
T97:;
	if((V44!= VV[68]))goto T98;
	V41= VV[13];
	goto T94;
	goto T98;
T98:;
	V41= Cnil;}
	goto T94;
T94:;
	V42= CMPcar((V34));
	if(((V41))==Cnil){
	goto T102;}
	V43= (*(LnkLI176))((V41));
	goto T100;
	goto T102;
T102:;
	V43= Cnil;
	goto T100;
T100:;
	{register object V45;
	register object V46;
	V45= (V43);
	V46= CMPcar((V45));
	goto T108;
T108:;
	if(!(((V45))==Cnil)){
	goto T109;}
	goto T104;
	goto T109;
T109:;
	base[6]= (V46);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk177)(Lclptr177);
	vs_top=sup;
	V47= vs_base[0];
	if(!(equal((V42),STREF(object,V47,8)))){
	goto T113;}
	{register object V48;
	base[6]= (V46);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk178)(Lclptr178);
	vs_top=sup;
	V48= vs_base[0];
	if(((((V48))==(VV[15])?Ct:Cnil))==Cnil){
	goto T122;}
	goto T113;
	goto T122;
T122:;
	if(((equal((V48),VV[16])?Ct:Cnil))==Cnil){
	goto T124;}
	goto T113;
	goto T124;
T124:;
	if(!(((((V48))==(VV[17])?Ct:Cnil))==Cnil)){
	goto T113;}}
	(void)((VFUN_NARGS=1,(*(LnkLI47))((V46))));
	goto T113;
T113:;
	V45= CMPcdr((V45));
	V46= CMPcar((V45));
	goto T108;}
	goto T104;
T104:;
	(CMPcdr(V38))->c.c_car = V36;
	(void)(CMPcdr(V38));
	(CMPcddr(V38))->c.c_car = V35;
	(void)(CMPcddr(V38));
	(CMPcdddr(V38))->c.c_car = Cnil;
	(void)(CMPcdddr(V38));
	{object V55 = Cnil;
	VMR3(V55)}}
	goto T92;
T92:;
	{object V56 = Cnil;
	VMR3(V56)}
	goto T89;
T89:;
	{object V57;
	V57= list(4,(V34),(V36),(V35),Cnil);
	if(((V37))==Cnil){
	goto T138;}
	{object V60;
	V60= make_cons(V57,CMPcdr(V37));
	(V37)->c.c_cdr = (V60);
	{object V61 = (V60);
	VMR3(V61)}}
	goto T138;
T138:;
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
	bds_bind(VV[18],Ct);
	{register object V66;
	V66= Cnil;
	{register object V67;
	register object V68;
	V67= (VV[4]->s.s_dbind);
	V68= CMPcar((V67));
	goto T149;
T149:;
	if(!(((V67))==Cnil)){
	goto T150;}
	V65= nreverse((V66));
	goto T145;
	goto T150;
T150:;
	{register object V69;
	register object V70;
	V69= CMPcdr((V68));
	V70= CMPcar((V69));
	goto T158;
T158:;
	if(!(((V69))==Cnil)){
	goto T159;}
	goto T154;
	goto T159;
T159:;
	if((CMPcaddr((V70)))==Cnil){
	goto T164;}
	if(!((CMPcaddr((V70)))==(base[2]))){
	goto T163;}
	goto T164;
T164:;
	if((base[2])==Cnil){
	goto T168;}
	{register object V71;
	register object V72;
	V71= (V70);
	V72= base[2];
	(CMPcddr((V71)))->c.c_car = (V72);
	(void)(CMPcddr((V71)));}
	goto T168;
T168:;
	{register object V73;
	V74= list(2,VV[20],CMPcar((V68)));
	V75= list(2,VV[23],CMPcar((V68)));
	V76= list(2,VV[23],CMPcar((V70)));
	V77= list(2,VV[23],base[2]);
	base[9]= CMPcar((V68));
	vs_top=(vs_base=base+9)+1;
	Lsymbol_function();
	vs_top=sup;
	base[8]= vs_base[0];
	{object V79;
	V79= CMPcar((V70));
	 vs_top=base+9;
	 while(V79!=Cnil)
	 {vs_push((V79)->c.c_car);V79=(V79)->c.c_cdr;}
	vs_base=base+9;}
	{object _funobj = base[8];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V78= vs_base[0];
	V80= list(5,VV[22],/* INLINE-ARGS */V75,/* INLINE-ARGS */V76,/* INLINE-ARGS */V77,V78);
	V73= (*(LnkLI179))(/* INLINE-ARGS */V74,VV[21],/* INLINE-ARGS */V80);
	V66= make_cons((V73),(V66));}
	goto T163;
T163:;
	V69= CMPcdr((V69));
	V70= CMPcar((V69));
	goto T158;}
	goto T154;
T154:;
	V67= CMPcdr((V67));
	V68= CMPcar((V67));
	goto T149;}}
	goto T145;
T145:;
	base[4]= make_cons(VV[19],V65);
	vs_top=(vs_base=base+4)+1;
	bds_unwind1;
	return;
}
/*	local entry for function __si::MAKE-DFUN-INFO	*/

static object LI5(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	{object V81;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI5key,first,ap);
	V81=(Vcs[0]);
	base[0]= VV[24];
	base[1]= (V81);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V82 = vs_base[0];
	VMR5(V82)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function PRINT-DFUN-INFO	*/

static object LI6(V86,V87,V88)

object V86;register object V87;object V88;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	base[0]= (V87);
	base[1]= VV[25];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	base[0]= (V87);
	base[1]= VV[26];
	base[3]= (V86);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	base[0]= (V87);
	base[1]= VV[27];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI181))((V86),(V87)));
	base[0]= (V87);
	base[1]= VV[28];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{object V89 = vs_base[0];
	VMR6(V89)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-NO-METHODS	*/

static object LI7(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{object V90;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI7key,first,ap);
	V90=(Vcs[0]);
	base[0]= VV[29];
	base[1]= (V90);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V91 = vs_base[0];
	VMR7(V91)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function NO-METHODS-DFUN-INFO	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	base[0]= VV[29];
	base[1]= Cnil;
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V93 = vs_base[0];
	VMR8(V93)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-INITIAL	*/

static object LI9(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V94;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI9key,first,ap);
	V94=(Vcs[0]);
	base[0]= VV[30];
	base[1]= (V94);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V95 = vs_base[0];
	VMR9(V95)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function INITIAL-DFUN-INFO	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	base[0]= VV[30];
	base[1]= Cnil;
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V97 = vs_base[0];
	VMR10(V97)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-INITIAL-DISPATCH	*/

static object LI11(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V98;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI11key,first,ap);
	V98=(Vcs[0]);
	base[0]= VV[31];
	base[1]= (V98);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V99 = vs_base[0];
	VMR11(V99)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function INITIAL-DISPATCH-DFUN-INFO	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	base[0]= VV[31];
	base[1]= Cnil;
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V101 = vs_base[0];
	VMR12(V101)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-DISPATCH	*/

static object LI13(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB13 VMS13 VMV13
	{object V102;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI13key,first,ap);
	V102=(Vcs[0]);
	base[0]= VV[32];
	base[1]= (V102);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V103 = vs_base[0];
	VMR13(V103)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function DISPATCH-DFUN-INFO	*/

static object LI14()

{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	base[0]= VV[32];
	base[1]= Cnil;
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V105 = vs_base[0];
	VMR14(V105)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-DEFAULT-METHOD-ONLY	*/

static object LI15(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB15 VMS15 VMV15
	{object V106;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI15key,first,ap);
	V106=(Vcs[0]);
	base[0]= VV[13];
	base[1]= (V106);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V107 = vs_base[0];
	VMR15(V107)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function DEFAULT-METHOD-ONLY-DFUN-INFO	*/

static object LI16()

{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	base[0]= VV[13];
	base[1]= Cnil;
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V109 = vs_base[0];
	VMR16(V109)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-ACCESSOR-DFUN-INFO	*/

static object LI17(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB17 VMS17 VMV17
	{object V110;
	object V111;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI17key,first,ap);
	V110=(Vcs[0]);
	V111=(Vcs[1]);
	base[0]= VV[33];
	base[1]= (V110);
	base[2]= (V111);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V112 = vs_base[0];
	VMR17(V112)}
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
	{object V113=base[0]->c.c_cdr;
	if(endp(V113))invalid_macro_call();
	base[2]= (V113->c.c_car);
	V113=V113->c.c_cdr;
	if(!endp(V113))invalid_macro_call();}
	base[3]= list(2,VV[34],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-ONE-INDEX-DFUN-INFO	*/

static object LI19(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB19 VMS19 VMV19
	{object V114;
	object V115;
	object V116;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI19key,first,ap);
	V114=(Vcs[0]);
	V115=(Vcs[1]);
	V116=(Vcs[2]);
	base[0]= VV[35];
	base[1]= (V114);
	base[2]= (V115);
	base[3]= (V116);
	vs_top=(vs_base=base+0)+4;
	siLmake_structure();
	vs_top=sup;
	{object V117 = vs_base[0];
	VMR19(V117)}
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
	{object V118=base[0]->c.c_cdr;
	if(endp(V118))invalid_macro_call();
	base[2]= (V118->c.c_car);
	V118=V118->c.c_cdr;
	if(!endp(V118))invalid_macro_call();}
	base[3]= list(2,VV[36],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-N-N	*/

static object LI21(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB21 VMS21 VMV21
	{object V119;
	object V120;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI21key,first,ap);
	V119=(Vcs[0]);
	V120=(Vcs[1]);
	base[0]= VV[37];
	base[1]= (V119);
	base[2]= (V120);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V121 = vs_base[0];
	VMR21(V121)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function N-N-DFUN-INFO	*/

static object LI22(V124,V125)

object V124;object V125;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	base[0]= VV[37];
	base[1]= (V125);
	base[2]= (V124);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V126 = vs_base[0];
	VMR22(V126)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-ONE-CLASS	*/

static object LI23(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{object V127;
	object V128;
	object V129;
	object V130;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI23key,first,ap);
	V127=(Vcs[0]);
	V128=(Vcs[1]);
	V129=(Vcs[2]);
	V130=(Vcs[3]);
	base[0]= VV[38];
	base[1]= (V127);
	base[2]= (V128);
	base[3]= (V129);
	base[4]= (V130);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V131 = vs_base[0];
	VMR23(V131)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function ONE-CLASS-DFUN-INFO	*/

static object LI24(V135,V136,V137)

object V135;object V136;object V137;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	base[0]= VV[38];
	base[1]= Cnil;
	base[2]= (V135);
	base[3]= (V136);
	base[4]= (V137);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V139 = vs_base[0];
	VMR24(V139)}
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
	{object V140=base[0]->c.c_cdr;
	if(endp(V140))invalid_macro_call();
	base[2]= (V140->c.c_car);
	V140=V140->c.c_cdr;
	if(!endp(V140))invalid_macro_call();}
	base[3]= list(2,VV[39],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-TWO-CLASS	*/

static object LI26(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{object V141;
	object V142;
	object V143;
	object V144;
	object V145;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI26key,first,ap);
	V141=(Vcs[0]);
	V142=(Vcs[1]);
	V143=(Vcs[2]);
	V144=(Vcs[3]);
	V145=(Vcs[4]);
	base[0]= VV[40];
	base[1]= (V141);
	base[2]= (V142);
	base[3]= (V143);
	base[4]= (V144);
	base[5]= (V145);
	vs_top=(vs_base=base+0)+6;
	siLmake_structure();
	vs_top=sup;
	{object V146 = vs_base[0];
	VMR26(V146)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function TWO-CLASS-DFUN-INFO	*/

static object LI27(V151,V152,V153,V154)

object V151;object V152;object V153;object V154;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	base[0]= VV[40];
	base[1]= Cnil;
	base[2]= (V151);
	base[3]= (V152);
	base[4]= (V153);
	base[5]= (V154);
	vs_top=(vs_base=base+0)+6;
	siLmake_structure();
	vs_top=sup;
	{object V156 = vs_base[0];
	VMR27(V156)}
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
	{object V157=base[0]->c.c_cdr;
	if(endp(V157))invalid_macro_call();
	base[2]= (V157->c.c_car);
	V157=V157->c.c_cdr;
	if(!endp(V157))invalid_macro_call();}
	base[3]= list(2,VV[41],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-ONE-INDEX	*/

static object LI29(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB29 VMS29 VMV29
	{object V158;
	object V159;
	object V160;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI29key,first,ap);
	V158=(Vcs[0]);
	V159=(Vcs[1]);
	V160=(Vcs[2]);
	base[0]= VV[42];
	base[1]= (V158);
	base[2]= (V159);
	base[3]= (V160);
	vs_top=(vs_base=base+0)+4;
	siLmake_structure();
	vs_top=sup;
	{object V161 = vs_base[0];
	VMR29(V161)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function ONE-INDEX-DFUN-INFO	*/

static object LI30(V165,V166,V167)

object V165;object V166;object V167;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	base[0]= VV[42];
	base[1]= (V167);
	base[2]= (V165);
	base[3]= (V166);
	vs_top=(vs_base=base+0)+4;
	siLmake_structure();
	vs_top=sup;
	{object V168 = vs_base[0];
	VMR30(V168)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-CHECKING	*/

static object LI31(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB31 VMS31 VMV31
	{object V169;
	object V170;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI31key,first,ap);
	V169=(Vcs[0]);
	V170=(Vcs[1]);
	base[0]= VV[10];
	base[1]= (V169);
	base[2]= (V170);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V171 = vs_base[0];
	VMR31(V171)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function CHECKING-DFUN-INFO	*/

static object LI32(V174,V175)

object V174;object V175;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	base[0]= VV[10];
	base[1]= (V175);
	base[2]= (V174);
	vs_top=(vs_base=base+0)+3;
	siLmake_structure();
	vs_top=sup;
	{object V176 = vs_base[0];
	VMR32(V176)}
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
	{object V177=base[0]->c.c_cdr;
	if(endp(V177))invalid_macro_call();
	base[2]= (V177->c.c_car);
	V177=V177->c.c_cdr;
	if(!endp(V177))invalid_macro_call();}
	base[3]= list(2,VV[43],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function __si::MAKE-CACHING	*/

static object LI34(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB34 VMS34 VMV34
	{object V178;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI34key,first,ap);
	V178=(Vcs[0]);
	base[0]= VV[11];
	base[1]= (V178);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V179 = vs_base[0];
	VMR34(V179)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function CACHING-DFUN-INFO	*/

static object LI35(V181)

object V181;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	base[0]= VV[11];
	base[1]= (V181);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V182 = vs_base[0];
	VMR35(V182)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function __si::MAKE-CONSTANT-VALUE	*/

static object LI36(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{object V183;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI36key,first,ap);
	V183=(Vcs[0]);
	base[0]= VV[12];
	base[1]= (V183);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V184 = vs_base[0];
	VMR36(V184)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function CONSTANT-VALUE-DFUN-INFO	*/

static object LI37(V186)

object V186;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	base[0]= VV[12];
	base[1]= (V186);
	vs_top=(vs_base=base+0)+2;
	siLmake_structure();
	vs_top=sup;
	{object V187 = vs_base[0];
	VMR37(V187)}
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
	{object V188=base[0]->c.c_cdr;
	if(endp(V188))invalid_macro_call();
	base[2]= (V188->c.c_car);
	V188=V188->c.c_cdr;
	if(endp(V188))invalid_macro_call();
	base[3]= (V188->c.c_car);
	V188=V188->c.c_cdr;
	base[4]= V188;}
	V189= listA(4,VV[46],base[3],base[2],base[4]);
	base[5]= list(4,VV[44],VV[45],/* INLINE-ARGS */V189,listA(3,VV[47],base[2],VV[48]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function ACCESSOR-MISS-FUNCTION	*/

static object LI40(V192,V193)

object V192;object V193;
{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	base[0]=MMcons((V193),Cnil);
	base[1]=MMcons((V192),base[0]);
	{object V194;
	V194= STREF(object,(base[0]->c.c_car),4);
	{object V195= (V194);
	if((V195!= VV[59]))goto T284;
	{object V196 = 
	make_cclosure_new(LC139,Cnil,base[1],Cdata);
	VMR39(V196)}
	goto T284;
T284:;
	if((V195!= VV[133]))goto T285;
	{object V197 = 
	make_cclosure_new(LC140,Cnil,base[1],Cdata);
	VMR39(V197)}
	goto T285;
T285:;
	base[2]= VV[49];
	base[3]= VV[50];
	base[4]= VV[51];
	base[5]= VV[52];
	base[6]= (V194);
	base[7]= VV[53];
	base[8]= VV[57];
	base[9]= VV[55];
	base[10]= VV[58];
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk187)();
	vs_top=sup;
	{object V198 = vs_base[0];
	VMR39(V198)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-ONE-CLASS-ACCESSOR-DFUN	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	{object V199;
	object V200;
	object V201;
	object V202;
	check_arg(4);
	V199=(base[0]);
	V200=(base[1]);
	V201=(base[2]);
	V202=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V203;
	object V204;
	if(!(((V200))==(VV[59]))){
	goto T297;}
	V203= VV[60];
	goto T295;
	goto T297;
T297:;
	V203= VV[61];
	goto T295;
T295:;
	V204= (*(LnkLI188))((V200),(V202),(V201));
	base[6]= (V203);
	base[7]= (type_of((V202))==t_cons?Ct:Cnil);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk189)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V201);
	base[7]= (V202);
	base[8]= (*(LnkLI190))((V199),(V204));
	vs_top=(vs_base=base+6)+3;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= Cnil;
	base[6]= (V204);
	vs_top=(vs_base=base+4)+3;
	return;}
	}
}
/*	function definition for MAKE-TWO-CLASS-ACCESSOR-DFUN	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	{object V205;
	object V206;
	object V207;
	object V208;
	object V209;
	check_arg(5);
	V205=(base[0]);
	V206=(base[1]);
	V207=(base[2]);
	V208=(base[3]);
	V209=(base[4]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V210;
	object V211;
	if(!(((V206))==(VV[59]))){
	goto T311;}
	V210= VV[62];
	goto T309;
	goto T311;
T311:;
	V210= VV[63];
	goto T309;
T309:;
	V211= (*(LnkLI191))((V206),(V209),(V207),(V208));
	base[7]= (V210);
	base[8]= (type_of((V209))==t_cons?Ct:Cnil);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk189)();
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= (V207);
	base[8]= (V208);
	base[9]= (V209);
	base[10]= (*(LnkLI190))((V205),(V211));
	vs_top=(vs_base=base+7)+4;
	{object _funobj = base[6];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= Cnil;
	base[7]= (V211);
	vs_top=(vs_base=base+5)+3;
	return;}
	}
}
/*	function definition for MAKE-ONE-INDEX-ACCESSOR-DFUN	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	{object V212;
	object V213;
	object V214;
	object V215;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V212=(base[0]);
	V213=(base[1]);
	V214=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T324;}
	V215=(base[3]);
	vs_top=sup;
	goto T325;
	goto T324;
T324:;
	V215= Cnil;
	goto T325;
T325:;
	{object V216;
	object V217;
	object V218;
	if(!(((V213))==(VV[59]))){
	goto T329;}
	V216= VV[64];
	goto T327;
	goto T329;
T329:;
	V216= VV[65];
	goto T327;
T327:;
	if((V215)!=Cnil){
	V217= (V215);
	goto T331;}
	V219= (VV[193]->s.s_gfdef);
	V217= (*(LnkLI192))(small_fixnum(1),Cnil,V219,4);
	goto T331;
T331:;
	V218= (*(LnkLI35))((V213),(V214),(V217));
	base[9]= (V216);
	base[10]= (type_of((V214))==t_cons?Ct:Cnil);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk189)();
	vs_top=sup;
	base[8]= vs_base[0];
	base[9]= (V217);
	base[10]= (V214);
	base[11]= (*(LnkLI190))((V212),(V218));
	vs_top=(vs_base=base+9)+3;
	{object _funobj = base[8];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= (V217);
	base[9]= (V218);
	vs_top=(vs_base=base+7)+3;
	return;}
	}
}
/*	function definition for MAKE-FINAL-ONE-INDEX-ACCESSOR-DFUN	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{object V220;
	object V221;
	object V222;
	object V223;
	check_arg(4);
	V220=(base[0]);
	V221=(base[1]);
	V222=(base[2]);
	V223=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V224;
	V225= (VV[193]->s.s_gfdef);
	V224= (VFUN_NARGS=4,(*(LnkLI194))((V223),Cnil,small_fixnum(1),V225));
	base[4]= (V220);
	base[5]= (V221);
	base[6]= (V222);
	base[7]= (V224);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk195)();
	return;}
	}
}
/*	local entry for function ONE-INDEX-LIMIT-FN	*/

static object LI45(V227)

object V227;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{long V228 = (long)(*(LnkLI196))((V227));
	VMR44((object)V228)}
}
/*	function definition for MAKE-N-N-ACCESSOR-DFUN	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	{object V229;
	object V230;
	object V231;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V229=(base[0]);
	V230=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T349;}
	V231=(base[2]);
	vs_top=sup;
	goto T350;
	goto T349;
T349:;
	V231= Cnil;
	goto T350;
T350:;
	{object V232;
	object V233;
	object V234;
	if(!(((V230))==(VV[59]))){
	goto T354;}
	V232= VV[66];
	goto T352;
	goto T354;
T354:;
	V232= VV[67];
	goto T352;
T352:;
	if((V231)!=Cnil){
	V233= (V231);
	goto T356;}
	V235= (VV[197]->s.s_gfdef);
	V233= (*(LnkLI192))(small_fixnum(1),Ct,V235,2);
	goto T356;
T356:;
	V234= (*(LnkLI198))((V230),(V233));
	base[8]= (V232);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk189)();
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= (V233);
	base[9]= (*(LnkLI190))((V229),(V234));
	vs_top=(vs_base=base+8)+2;
	{object _funobj = base[7];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= (V233);
	base[8]= (V234);
	vs_top=(vs_base=base+6)+3;
	return;}
	}
}
/*	function definition for MAKE-FINAL-N-N-ACCESSOR-DFUN	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{object V236;
	object V237;
	object V238;
	check_arg(3);
	V236=(base[0]);
	V237=(base[1]);
	V238=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V239;
	V240= (VV[197]->s.s_gfdef);
	V239= (VFUN_NARGS=4,(*(LnkLI194))((V238),Ct,small_fixnum(1),V240));
	base[3]= (V236);
	base[4]= (V237);
	base[5]= (V239);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk199)();
	return;}
	}
}
/*	local entry for function N-N-ACCESSORS-LIMIT-FN	*/

static object LI48(V242)

object V242;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{long V243 = (long)(*(LnkLI196))((V242));
	VMR47((object)V243)}
}
/*	function definition for MAKE-CHECKING-DFUN	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_check;
	{object V244;
	object V245;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	base[0]=MMcons(base[0],Cnil);
	V244=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T371;}
	V245=(base[2]);
	vs_top=sup;
	goto T372;
	goto T371;
T371:;
	V245= Cnil;
	goto T372;
T372:;
	if(((V245))!=Cnil){
	goto T374;}
	if(((*(LnkLI200))((base[0]->c.c_car)))==Cnil){
	goto T377;}
	base[3]= (base[0]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk201)();
	return;
	goto T377;
T377:;
	if(((VFUN_NARGS=1,(*(LnkLI202))((base[0]->c.c_car))))==Cnil){
	goto T374;}
	base[3]= (base[0]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk203)();
	return;
	goto T374;
T374:;
	{object V246;
	object V247;
	object V248;
	object V249;
	base[3]= (base[0]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk204)();
	if(vs_base>=vs_top){vs_top=sup;goto T386;}
	V246= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T387;}
	V247= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T388;}
	V248= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T389;}
	V249= vs_base[0];
	vs_top=sup;
	goto T390;
	goto T386;
T386:;
	V246= Cnil;
	goto T387;
T387:;
	V247= Cnil;
	goto T388;
T388:;
	V248= Cnil;
	goto T389;
T389:;
	V249= Cnil;
	goto T390;
T390:;
	base[3]= 
	make_cclosure_new(LC141,Cnil,base[0],Cdata);
	base[4]= (V248);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk205)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T392;}
	{object V250;
	V250= (*(LnkLI206))();
	base[5]= VV[68];
	base[6]= (V248);
	base[7]= (V247);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk189)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V244);
	vs_top=(vs_base=base+5)+1;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= Cnil;
	base[5]= (V250);
	vs_top=(vs_base=base+3)+3;
	return;}
	goto T392;
T392:;
	{object V251;
	if((V245)!=Cnil){
	V251= (V245);
	goto T405;}
	V252= (VV[207]->s.s_gfdef);
	V251= (*(LnkLI192))((V249),Cnil,V252,2);
	goto T405;
T405:;
	base[4]= (*(LnkLI208))((V244),(V251));
	base[4]=MMcons(base[4],base[0]);
	base[7]= VV[69];
	base[8]= (V248);
	base[9]= (V247);
	vs_top=(vs_base=base+7)+3;
	(void) (*Lnk189)();
	vs_top=sup;
	base[6]= vs_base[0];
	base[7]= (V251);
	base[8]= (V244);
	base[9]= 
	make_cclosure_new(LC142,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+7)+3;
	{object _funobj = base[6];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V251);
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
	{object V253;
	object V254;
	object V255;
	check_arg(4);
	V253=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	V254=(base[2]);
	V255=(base[3]);
	vs_top=sup;
	{object V256;
	base[4]= (V253);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk177)(Lclptr177);
	vs_top=sup;
	V257= vs_base[0];
	V256= STREF(object,V257,8);
	base[4]= 
	make_cclosure_new(LC143,Cnil,base[1],Cdata);
	base[5]= (V256);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk205)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T422;}
	base[4]= 
	make_cclosure_new(LC144,Cnil,base[1],Cdata);
	base[5]= Cnil;
	base[6]= (*(LnkLI206))();
	vs_top=(vs_base=base+4)+3;
	return;
	goto T422;
T422:;
	{object V258;
	V259= (VV[207]->s.s_gfdef);
	V258= (*(LnkLI209))((V253),Cnil,V259,(V254),(V255));
	base[4]= (V253);
	base[5]= (base[1]->c.c_car);
	base[6]= (V258);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk210)();
	return;}}
	}
}
/*	local entry for function USE-DEFAULT-METHOD-ONLY-DFUN-P	*/

static object LI51(V261)

object V261;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{object V262;
	object V263;
	object V264;
	object V265;
	base[0]= (V261);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk204)();
	if(vs_base>=vs_top){vs_top=sup;goto T436;}
	V262= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T437;}
	V263= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T438;}
	V264= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T439;}
	V265= vs_base[0];
	vs_top=sup;
	goto T440;
	goto T436;
T436:;
	V262= Cnil;
	goto T437;
T437:;
	V263= Cnil;
	goto T438;
T438:;
	V264= Cnil;
	goto T439;
T439:;
	V265= Cnil;
	goto T440;
T440:;
	base[0]= VV[211];
	base[1]= (V264);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk205)();
	vs_top=sup;
	{object V266 = vs_base[0];
	VMR50(V266)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function USE-CACHING-DFUN-P	*/

static object LI52(V268)

register object V268;
{	 VMB51 VMS51 VMV51
	goto TTL;
TTL:;
	base[0]= VV[212];
	if(((*(LnkLI213))((V268)))==Cnil){
	goto T446;}
	if(type_of(V268)==t_structure){
	goto T452;}
	goto T450;
	goto T452;
T452:;
	if(!(((V268)->str.str_def)==(VV[71]))){
	goto T450;}
	V269= STREF(object,(V268),4);
	goto T448;
	goto T450;
T450:;{object V271;
	V271= (VV[73]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V268);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	V272= vs_base[0];
	if(!((V271)==(CMPcar(V272)))){
	goto T455;}}
	V269= CMPcar(((V268))->cc.cc_turbo[12]);
	goto T448;
	goto T455;
T455:;
	base[2]= VV[74];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V269= vs_base[0];
	goto T448;
T448:;
	base[1]= (V269)->v.v_self[fix((VV[75]->s.s_dbind))];
	goto T444;
	goto T446;
T446:;
	base[2]= (V268);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk216)(Lclptr216);
	vs_top=sup;
	base[1]= vs_base[0];
	goto T444;
T444:;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk217)();
	vs_top=sup;
	{object V273 = vs_base[0];
	VMR51(V273)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CHECKING-LIMIT-FN	*/

static object LI53(V275)

object V275;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	{long V276 = (long)(*(LnkLI196))((V275));
	VMR52((object)V276)}
}
/*	function definition for MAKE-CACHING-DFUN	*/

static void L54()
{register object *base=vs_base;
	register object *sup=base+VM53; VC53
	vs_check;
	{object V277;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T462;}
	V277=(base[1]);
	vs_top=sup;
	goto T463;
	goto T462;
T462:;
	V277= Cnil;
	goto T463;
T463:;
	if(((V277))!=Cnil){
	goto T465;}
	if(((VFUN_NARGS=1,(*(LnkLI218))((base[0]->c.c_car))))==Cnil){
	goto T468;}
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk219)();
	return;
	goto T468;
T468:;
	if(((VFUN_NARGS=1,(*(LnkLI202))((base[0]->c.c_car))))==Cnil){
	goto T465;}
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk203)();
	return;
	goto T465;
T465:;
	{object V278;
	object V279;
	object V280;
	object V281;
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk204)();
	if(vs_base>=vs_top){vs_top=sup;goto T477;}
	V278= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T478;}
	V279= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T479;}
	V280= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T480;}
	V281= vs_base[0];
	vs_top=sup;
	goto T481;
	goto T477;
T477:;
	V278= Cnil;
	goto T478;
T478:;
	V279= Cnil;
	goto T479;
T479:;
	V280= Cnil;
	goto T480;
T480:;
	V281= Cnil;
	goto T481;
T481:;
	{object V282;
	if((V277)!=Cnil){
	V282= (V277);
	goto T482;}
	V283= (VV[220]->s.s_gfdef);
	V282= (*(LnkLI192))((V281),Ct,V283,2);
	goto T482;
T482:;
	base[3]= (*(LnkLI221))((V282));
	base[3]=MMcons(base[3],base[0]);
	base[6]= VV[76];
	base[7]= (V280);
	base[8]= (V279);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk189)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V282);
	base[7]= 
	make_cclosure_new(LC147,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V282);
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
	{object V284;
	object V285;
	object V286;
	check_arg(3);
	V284=(base[0]);
	V285=(base[1]);
	V286=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V287;
	V288= (VV[220]->s.s_gfdef);
	V287= (*(LnkLI209))((V284),Ct,V288,(V285),(V286));
	base[3]= (V284);
	base[4]= (V287);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk201)();
	return;}
	}
}
/*	local entry for function CACHING-LIMIT-FN	*/

static object LI56(V290)

object V290;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	{long V291 = (long)(*(LnkLI196))((V290));
	VMR55((object)V291)}
}
/*	function definition for INSURE-CACHING-DFUN	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_check;
	{object V292;
	check_arg(1);
	V292=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V293;
	object V294;
	register object V295;
	object V296;
	base[1]= (V292);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk204)();
	if(vs_base>=vs_top){vs_top=sup;goto T500;}
	V293= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T501;}
	V294= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T502;}
	V295= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T503;}
	V296= vs_base[0];
	vs_top=sup;
	goto T504;
	goto T500;
T500:;
	V293= Cnil;
	goto T501;
T501:;
	V294= Cnil;
	goto T502;
T502:;
	V295= Cnil;
	goto T503;
T503:;
	V296= Cnil;
	goto T504;
T504:;
	if(((V295))==Cnil){
	goto T506;}
	if((CMPcar((V295)))==Cnil){
	goto T506;}
	{register object V297;
	register object V298;
	V297= (V295);
	V298= CMPcar((V297));
	goto T515;
T515:;
	if(!(((V297))==Cnil)){
	goto T516;}
	goto T506;
	goto T516;
T516:;
	if(((V298))==(Ct)){
	goto T520;}
	goto T511;
	goto T520;
T520:;
	V297= CMPcdr((V297));
	V298= CMPcar((V297));
	goto T515;}
	goto T511;
T511:;
	base[1]= VV[76];
	base[2]= (V295);
	base[3]= (V294);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk189)();
	return;
	goto T506;
T506:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local entry for function USE-CONSTANT-VALUE-DFUN-P	*/

static object LI58(object V299,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB57 VMS57 VMV57
	{register object V300;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V300= V299;
	narg = narg - 1;
	if (narg <= 0) goto T531;
	else {
	Vcs[1]=MMcons(first,Cnil);}
	--narg; goto T532;
	goto T531;
T531:;
	Vcs[1]= Cnil;
	Vcs[1]=MMcons(Vcs[1],Cnil);
	goto T532;
T532:;
	{object V301;
	object V302;
	object V303;
	object V304;
	base[0]= (V300);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk204)();
	if(vs_base>=vs_top){vs_top=sup;goto T536;}
	V301= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T537;}
	V302= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T538;}
	V303= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T539;}
	V304= vs_base[0];
	vs_top=sup;
	goto T540;
	goto T536;
T536:;
	V301= Cnil;
	goto T537;
T537:;
	V302= Cnil;
	goto T538;
T538:;
	V303= Cnil;
	goto T539;
T539:;
	V304= Cnil;
	goto T540;
T540:;
	{object V305;
	base[0]= (*(LnkLI213))((V300));
	base[0]=MMcons(base[0],Vcs[1]);
	if(((base[0]->c.c_car))==Cnil){
	goto T544;}
	if(type_of(V300)==t_structure){
	goto T550;}
	goto T548;
	goto T550;
T550:;
	if(!(((V300)->str.str_def)==(VV[77]))){
	goto T548;}
	V306= STREF(object,(V300),4);
	goto T546;
	goto T548;
T548:;{object V308;
	V308= (VV[73]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V300);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	V309= vs_base[0];
	if(!((V308)==(CMPcar(V309)))){
	goto T553;}}
	V306= CMPcar(((V300))->cc.cc_turbo[12]);
	goto T546;
	goto T553;
T553:;
	base[3]= VV[74];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V306= vs_base[0];
	goto T546;
T546:;
	V305= (V306)->v.v_self[fix((VV[75]->s.s_dbind))];
	goto T542;
	goto T544;
T544:;
	base[3]= (V300);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk216)(Lclptr216);
	vs_top=sup;
	V305= vs_base[0];
	goto T542;
T542:;
	base[2]=MMcons(VV[78],base[0]);
	if(((V302))==Cnil){
	goto T560;}
	{object V310 = Cnil;
	VMR57(V310)}
	goto T560;
T560:;
	if(!(((((VV[79]->s.s_dbind))==(VV[80])?Ct:Cnil))==Cnil)){
	goto T564;}
	goto T562;
	goto T564;
T564:;
	if(((*(LnkLI222))((V300)))!=Cnil){
	goto T562;}
	{object V311 = Cnil;
	VMR57(V311)}
	goto T562;
T562:;
	base[3]= 
	make_cclosure_new(LC148,Cnil,base[2],Cdata);
	base[4]= (V305);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk223)();
	vs_top=sup;
	{object V312 = vs_base[0];
	VMR57(V312)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for MAKE-CONSTANT-VALUE-DFUN	*/

static void L59()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	{object V313;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T568;}
	V313=(base[1]);
	vs_top=sup;
	goto T569;
	goto T568;
T568:;
	V313= Cnil;
	goto T569;
T569:;
	{object V314;
	object V315;
	object V316;
	object V317;
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk204)();
	if(vs_base>=vs_top){vs_top=sup;goto T573;}
	V314= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T574;}
	V315= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T575;}
	V316= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T576;}
	V317= vs_base[0];
	vs_top=sup;
	goto T577;
	goto T573;
T573:;
	V314= Cnil;
	goto T574;
T574:;
	V315= Cnil;
	goto T575;
T575:;
	V316= Cnil;
	goto T576;
T576:;
	V317= Cnil;
	goto T577;
T577:;
	{object V318;
	if((V313)!=Cnil){
	V318= (V313);
	goto T578;}
	V319= (VV[220]->s.s_gfdef);
	V318= (*(LnkLI192))((V317),Ct,V319,2);
	goto T578;
T578:;
	base[3]= (*(LnkLI224))((V318));
	base[3]=MMcons(base[3],base[0]);
	base[6]= VV[82];
	base[7]= (V316);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk189)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V318);
	base[7]= 
	make_cclosure_new(LC149,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V318);
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
	{object V320;
	object V321;
	object V322;
	check_arg(3);
	V320=(base[0]);
	V321=(base[1]);
	V322=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V323;
	V324= (VV[220]->s.s_gfdef);
	V323= (*(LnkLI209))((V320),VV[81],V324,(V321),(V322));
	base[3]= (V320);
	base[4]= (V323);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk219)();
	return;}
	}
}
/*	local entry for function USE-DISPATCH-DFUN-P	*/

static object LI61(object V325,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB60 VMS60 VMV60
	{object V326;
	object V327;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V326= V325;
	narg = narg - 1;
	if (narg <= 0) goto T593;
	else {
	V327= first;}
	--narg; goto T594;
	goto T593;
T593:;
	V327= (*(LnkLI200))((V326));
	goto T594;
T594:;
	if(!(((VV[79]->s.s_dbind))==(VV[80]))){
	goto T597;}
	if(((V327))!=Cnil){
	goto T600;}
	{object V328;
	V328= (*(LnkLI225))((V326));
	base[0]= (V326);
	base[1]= (V328);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk226)();
	vs_top=sup;
	V329= vs_base[0];
	{object V330 = (number_compare((V328),V329)>0?Ct:Cnil);
	VMR60(V330)}}
	goto T600;
T600:;
	{object V331 = Cnil;
	VMR60(V331)}
	goto T597;
T597:;
	{object V332 = Cnil;
	VMR60(V332)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SHOW-DFUN-COSTS	*/

static object LI62(V334)

register object V334;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	if(type_of((V334))==t_symbol){
	goto T607;}
	if(!(type_of((V334))==t_cons)){
	goto T606;}
	goto T607;
T607:;
	V334= (*(LnkLI227))((V334));
	goto T606;
T606:;
	base[0]= Ct;
	base[1]= VV[83];
	base[3]= (V334);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk178)(Lclptr178);
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (*(LnkLI225))((V334));
	base[5]= (V334);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk226)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+0)+5;
	Lformat();
	vs_top=sup;
	{object V335 = vs_base[0];
	VMR61(V335)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for DISPATCH-DFUN-COST	*/

static void L63()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM62; VC62
	vs_check;
	{VOL object V336;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V336=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T619;}
	base[1]=MMcons(base[1],Cnil);
	vs_top=sup;
	goto T620;
	goto T619;
T619:;
	base[1]= Cnil;
	base[1]=MMcons(base[1],Cnil);
	goto T620;
T620:;
	base[2]=alloc_frame_id();
	base[2]=MMcons(base[2],base[1]);
	frs_push(FRS_CATCH,(base[2]->c.c_car));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	base[3]= (V336);
	base[5]= (V336);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk216)(Lclptr216);
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= Cnil;
	base[6]= 
	make_cclosure_new(LC150,Cnil,base[2],Cdata);
	base[7]= 
	make_cclosure_new(LC151,Cnil,base[2],Cdata);
	base[8]= (VV[228]->s.s_gfdef);
	vs_top=(vs_base=base+3)+6;
	(void) (*Lnk229)();
	frs_pop();
	return;
	}
	}
}
/*	local entry for function CACHING-DFUN-COST	*/

static object LI64(V338)

object V338;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	{object V339;
	object V340;
	base[2]= (V338);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk177)(Lclptr177);
	vs_top=sup;
	V339= vs_base[0];
	V340= CMPmake_fixnum((long)length(STREF(object,(V339),8)));
	base[2]= (VV[89]->s.s_dbind);
	base[3]= number_times((VV[90]->s.s_dbind),(V340));
	base[5]= (V338);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk216)(Lclptr216);
	vs_top=sup;
	V341= vs_base[0];
	if(((*(LnkLI230))(V341))==Cnil){
	goto T636;}
	base[4]= (VV[91]->s.s_dbind);
	goto T634;
	goto T636;
T636:;
	base[4]= small_fixnum(0);
	goto T634;
T634:;
	vs_top=(vs_base=base+2)+3;
	Lplus();
	vs_top=sup;
	{object V342 = vs_base[0];
	VMR63(V342)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-DISPATCH-DFUN	*/

static void L65()
{register object *base=vs_base;
	register object *sup=base+VM64; VC64
	vs_check;
	{object V343;
	check_arg(1);
	V343=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V343);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk231)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	base[3]= (*(LnkLI232))();
	vs_top=(vs_base=base+1)+3;
	return;
	}
}
/*	function definition for GET-DISPATCH-FUNCTION	*/

static void L66()
{register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_check;
	{object V344;
	check_arg(1);
	V344=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V345;
	base[1]= (V344);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk216)(Lclptr216);
	vs_top=sup;
	V345= vs_base[0];
	base[1]= (VFUN_NARGS=8,(*(LnkLI233))((V344),(V345),Cnil,Cnil,Cnil,Cnil,Cnil,Ct));
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
	{object V346;
	check_arg(1);
	V346=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V346);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk203)();
	return;
	}
}
/*	local entry for function UPDATE-DISPATCH-DFUNS	*/

static object LI68()

{	 VMB67 VMS67 VMV67
	goto TTL;
TTL:;
	{register object V347;
	register object V348;
	V347= (*(LnkLI176))(VV[92]);
	V348= CMPcar((V347));
	goto T653;
T653:;
	if(!(((V347))==Cnil)){
	goto T654;}
	{object V349 = Cnil;
	VMR67(V349)}
	goto T654;
T654:;
	{register object V350;
	register object V351;
	register object V352;
	base[2]= (V348);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk203)();
	if(vs_base>=vs_top){vs_top=sup;goto T661;}
	V350= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T662;}
	V351= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T663;}
	V352= vs_base[0];
	vs_top=sup;
	goto T664;
	goto T661;
T661:;
	V350= Cnil;
	goto T662;
T662:;
	V351= Cnil;
	goto T663;
T663:;
	V352= Cnil;
	goto T664;
T664:;
	(void)((VFUN_NARGS=4,(*(LnkLI47))((V348),(V350),(V351),(V352))));}
	V347= CMPcdr((V347));
	V348= CMPcar((V347));
	goto T653;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FILL-DFUN-CACHE	*/

static object LI69(object V356,object V355,object V354,object V353,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB68 VMS68 VMV68
	{object V357;
	object V358;
	object V359;
	object V360;
	object V361;
	va_start(ap,first);
	if(narg <4) too_few_arguments();
	V357= V356;
	V358= V355;
	V359= V354;
	V360= V353;
	narg = narg - 4;
	if (narg <= 0) goto T670;
	else {
	V361= first;}
	--narg; goto T671;
	goto T670;
T670:;
	V361= Cnil;
	goto T671;
T671:;
	if((V361)!=Cnil){
	base[0]= (V361);
	goto T673;}
	base[1]= (V357);
	vs_top=(vs_base=base+1)+1;
	Lhash_table_count();
	vs_top=sup;
	V362= vs_base[0];
	{long V363= fix(number_plus(V362,small_fixnum(3)));
	base[0]= (*(LnkLI192))((V359),(V358),(V360),/* INLINE-ARGS */V363);}
	goto T673;
T673:;
	base[0]=MMcons(base[0],Cnil);
	base[1]= 
	make_cclosure_new(LC152,Cnil,base[0],Cdata);
	base[2]= (V357);
	vs_top=(vs_base=base+1)+2;
	Lmaphash();
	vs_top=sup;
	{object V364 = (base[0]->c.c_car);
	VMR68(V364)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-FINAL-ORDINARY-DFUN-INTERNAL	*/

static object LI70(V370,V371,V372,V373,V374)

register object V370;register object V371;object V372;object V373;object V374;
{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	{object V375;
	object V376;
	object V377;
	object V378;
	base[4]= (V370);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk177)(Lclptr177);
	vs_top=sup;
	V375= vs_base[0];
	V376= (*(LnkLI234))((V375));
	if((V374)==Cnil){
	V377= Cnil;
	goto T682;}
	base[4]= (*(LnkLI235))((V370));
	vs_top=(vs_base=base+4)+1;
	Ltype_of();
	vs_top=sup;
	V379= vs_base[0];
	if(!(((V371))==(Ct))){
	goto T689;}
	V380= VV[11];
	goto T687;
	goto T689;
T689:;
	if(!(((V371))==(VV[81]))){
	goto T692;}
	V380= VV[12];
	goto T687;
	goto T692;
T692:;
	if(((V371))!=Cnil){
	goto T695;}
	V380= VV[10];
	goto T687;
	goto T695;
T695:;
	V380= Cnil;
	goto T687;
T687:;
	if(equal(V379,V380)){
	goto T683;}
	V377= Cnil;
	goto T682;
	goto T683;
T683:;
	V377= (V374);
	goto T682;
T682:;
	if(((V377))==Cnil){
	goto T699;}
	V381= (*(LnkLI237))((V370));
	V378= (*(LnkLI236))(/* INLINE-ARGS */V381);
	goto T697;
	goto T699;
T699:;
	V378= (*(LnkLI192))((V376),(((((V371))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil),(V372),4);
	goto T697;
T697:;
	{object V382 = (*(LnkLI238))((V370),(V371),(V378),(V373),(V377));
	VMR69(V382)}}
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
	{object V383=base[0]->c.c_cdr;
	if(endp(V383))invalid_macro_call();
	{object V384= (V383->c.c_car);
	if(endp(V384))invalid_macro_call();
	base[2]= (V384->c.c_car);
	V384=V384->c.c_cdr;
	if(endp(V384))invalid_macro_call();
	base[3]= (V384->c.c_car);
	V384=V384->c.c_cdr;
	if(endp(V384))invalid_macro_call();
	base[4]= (V384->c.c_car);
	V384=V384->c.c_cdr;
	if(endp(V384))invalid_macro_call();
	base[5]= (V384->c.c_car);
	V384=V384->c.c_cdr;
	if(endp(V384))invalid_macro_call();
	base[6]= (V384->c.c_car);
	V384=V384->c.c_cdr;
	if(endp(V384)){
	base[7]= Cnil;
	} else {
	base[7]= (V384->c.c_car);
	V384=V384->c.c_cdr;}
	if(endp(V384)){
	base[8]= Cnil;
	} else {
	base[8]= (V384->c.c_car);
	V384=V384->c.c_cdr;}
	if(endp(V384)){
	base[9]= Cnil;
	} else {
	base[9]= (V384->c.c_car);
	V384=V384->c.c_cdr;}
	if(endp(V384)){
	base[10]= Cnil;
	} else {
	base[10]= (V384->c.c_car);
	V384=V384->c.c_cdr;}
	if(!endp(V384))invalid_macro_call();}
	V383=V383->c.c_cdr;
	base[11]= V383;}
	if((base[10])!=Cnil){
	goto T705;}
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	base[10]= vs_base[0];
	goto T705;
T705:;
	if((base[7])==Cnil){
	goto T711;}
	V385= list(2,base[7],base[8]);
	goto T709;
	goto T711;
T711:;
	V385= Cnil;
	goto T709;
T709:;
	V386= listA(5,base[6],base[10],base[4],base[5],V385);
	if((base[9])==Cnil){
	goto T715;}
	V387= VV[11];
	goto T713;
	goto T715;
T715:;
	if((base[7])==Cnil){
	goto T718;}
	V387= VV[94];
	goto T713;
	goto T718;
T718:;
	V387= VV[10];
	goto T713;
T713:;
	V388= list(4,VV[93],base[2],base[3],list(2,VV[23],V387));
	V389= list(3,VV[96],base[10],list(2,VV[97],list(3,VV[98],base[2],VV[99])));
	V390= list(2,VV[99],list(3,VV[101],base[2],VV[99]));
	V391= list(3,VV[95],/* INLINE-ARGS */V389,listA(3,VV[100],make_cons(/* INLINE-ARGS */V390,Cnil),base[11]));
	base[12]= list(5,VV[44],/* INLINE-ARGS */V386,/* INLINE-ARGS */V388,/* INLINE-ARGS */V391,list(3,VV[102],base[6],base[3]));
	vs_top=(vs_base=base+12)+1;
	return;
}
/*	local entry for function MAKE-INITIAL-DFUN	*/

static object LI73(V393)

object V393;
{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	base[0]=MMcons((V393),Cnil);
	{object V394;
	V394= 
	make_cclosure_new(LC153,Cnil,base[0],Cdata);
	{object V395;
	object V396;
	object V397;
	if(!(((VV[79]->s.s_dbind))==(VV[80]))){
	goto T723;}
	if(((*(LnkLI222))((base[0]->c.c_car)))==Cnil){
	goto T723;}
	{object V398;
	object V399;
	V398= (*(LnkLI200))((base[0]->c.c_car));
	V399= (VFUN_NARGS=3,(*(LnkLI239))((base[0]->c.c_car),(V398),(((VV[103]->s.s_dbind))==Cnil?Ct:Cnil)));
	if(((VV[103]->s.s_dbind))==Cnil){
	goto T730;}
	if(((VFUN_NARGS=2,(*(LnkLI202))((base[0]->c.c_car),(V398))))==Cnil){
	goto T733;}
	base[3]= (V394);
	base[4]= Cnil;
	base[5]= (*(LnkLI240))();
	vs_top=(vs_base=base+3)+3;
	goto T721;
	goto T733;
T733:;
	if(((V398))==Cnil){
	goto T738;}
	base[3]= (base[0]->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk241)();
	vs_top=sup;
	goto T738;
T738:;
	base[3]= (V394);
	base[4]= Cnil;
	base[5]= (*(LnkLI242))();
	vs_top=(vs_base=base+3)+3;
	goto T721;
	goto T730;
T730:;
	base[3]= (base[0]->c.c_car);
	base[4]= (V399);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk243)();
	goto T721;}
	goto T723;
T723:;
	{object V400;
	object V401;
	if(((*(LnkLI213))((base[0]->c.c_car)))==Cnil){
	goto T749;}
	{object V403;
	V403= (base[0]->c.c_car);
	if(type_of((V403))==t_structure){
	goto T755;}
	goto T753;
	goto T755;
T755:;
	if(!((((V403))->str.str_def)==(VV[107]))){
	goto T753;}}
	V402= STREF(object,(base[0]->c.c_car),4);
	goto T751;
	goto T753;
T753:;{object V404;
	V404= (VV[73]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	V405= vs_base[0];
	if(!((V404)==(CMPcar(V405)))){
	goto T758;}}
	V402= CMPcar(((base[0]->c.c_car))->cc.cc_turbo[12]);
	goto T751;
	goto T758;
T758:;
	base[1]= VV[74];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	V402= vs_base[0];
	goto T751;
T751:;
	V400= (V402)->v.v_self[fix((VV[105]->s.s_dbind))];
	goto T747;
	goto T749;
T749:;
	base[1]= (base[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk177)(Lclptr177);
	vs_top=sup;
	V400= vs_base[0];
	goto T747;
T747:;
	V401= Cnil;
	if((STREF(object,(V400),28))==Cnil){
	goto T766;}
	V401= (*(LnkLI244))((base[0]->c.c_car));
	if(((V401))==Cnil){
	goto T766;}
	if(((VV[106]->s.s_dbind))==Cnil){
	goto T772;}
	base[1]= (*(LnkLI245))((base[0]->c.c_car),(V401));
	base[2]= Cnil;
	base[3]= Cnil;
	vs_top=(vs_base=base+1)+3;
	goto T721;
	goto T772;
T772:;
	base[1]= (base[0]->c.c_car);
	base[2]= (V401);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk246)();
	goto T721;
	goto T766;
T766:;
	base[1]= (V394);
	base[2]= Cnil;
	base[3]= (*(LnkLI242))();
	vs_top=(vs_base=base+1)+3;}
	goto T721;
T721:;
	if(vs_base>=vs_top){vs_top=sup;goto T782;}
	V395= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T783;}
	V396= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T784;}
	V397= vs_base[0];
	vs_top=sup;
	goto T785;
	goto T782;
T782:;
	V395= Cnil;
	goto T783;
T783:;
	V396= Cnil;
	goto T784;
T784:;
	V397= Cnil;
	goto T785;
T785:;
	{object V406 = (VFUN_NARGS=4,(*(LnkLI247))((base[0]->c.c_car),(V395),(V396),(V397)));
	VMR71(V406)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-EARLY-ACCESSOR	*/

static object LI74(V409,V410)

register object V409;object V410;
{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V411;
	if(type_of(V409)==t_structure){
	goto T791;}
	goto T789;
	goto T791;
T791:;
	if(!(((V409)->str.str_def)==(VV[108]))){
	goto T789;}
	V412= STREF(object,(V409),4);
	goto T787;
	goto T789;
T789:;{object V414;
	V414= (VV[73]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V409);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	V415= vs_base[0];
	if(!((V414)==(CMPcar(V415)))){
	goto T794;}}
	V412= CMPcar(((V409))->cc.cc_turbo[12]);
	goto T787;
	goto T794;
T794:;
	base[2]= VV[74];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V412= vs_base[0];
	goto T787;
T787:;
	V411= (V412)->v.v_self[fix((VV[75]->s.s_dbind))];
	base[2]= CMPcar((V411));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk248)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[1]=MMcons(base[1],Cnil);
	{object V417= V410;
	if((V417!= VV[59]))goto T802;
	{object V418 = 
	make_cclosure_new(LC154,Cnil,base[1],Cdata);
	VMR72(V418)}
	goto T802;
T802:;
	if((V417!= VV[133]))goto T803;
	{object V419 = 
	make_cclosure_new(LC155,Cnil,base[1],Cdata);
	VMR72(V419)}
	goto T803;
T803:;
	base[2]= VV[49];
	base[3]= VV[50];
	base[4]= VV[51];
	base[5]= VV[52];
	base[6]= V410;
	base[7]= VV[53];
	base[8]= VV[113];
	base[9]= VV[55];
	base[10]= VV[114];
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk187)();
	vs_top=sup;
	{object V420 = vs_base[0];
	VMR72(V420)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for INITIAL-DFUN	*/

static void L75()
{register object *base=vs_base;
	register object *sup=base+VM73; VC73
	vs_check;
	bds_check;
	{register object V421;
	object V422;
	check_arg(2);
	V421=(base[0]);
	V422=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V423;
	object V424;
	object V425;
	object V426;
	object V427;
	object V428;
	base[2]= (V421);
	base[3]= (V422);
	base[4]= VV[94];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk93)();
	if(vs_base>=vs_top){vs_top=sup;goto T817;}
	V423= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T818;}
	V424= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T819;}
	V425= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T820;}
	V426= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T821;}
	V427= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T822;}
	V428= vs_base[0];
	vs_top=sup;
	goto T823;
	goto T817;
T817:;
	V423= Cnil;
	goto T818;
T818:;
	V424= Cnil;
	goto T819;
T819:;
	V425= Cnil;
	goto T820;
T820:;
	V426= Cnil;
	goto T821;
T821:;
	V427= Cnil;
	goto T822;
T822:;
	V428= Cnil;
	goto T823;
T823:;
	if(((V424))==Cnil){
	goto T824;}
	{register object x= (V421),V429= (VV[99]->s.s_dbind);
	while(V429!=Cnil)
	if(x==(V429->c.c_car)){
	goto T824;
	}else V429=V429->c.c_cdr;}
	base[2]= make_cons((V421),(VV[99]->s.s_dbind));
	bds_bind(VV[99],base[2]);
	if((V426)==Cnil){
	goto T831;}
	bds_unwind1;
	goto T824;
	goto T831;
T831:;
	if(((V427))==Cnil){
	goto T834;}
	if(((V428))==Cnil){
	goto T834;}
	{object V431;
	object V432;
	object V433;
	base[3]= (V421);
	base[4]= (V427);
	base[5]= (V425);
	base[6]= (V428);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk249)();
	if(vs_base>=vs_top){vs_top=sup;goto T843;}
	V431= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T844;}
	V432= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T845;}
	V433= vs_base[0];
	vs_top=sup;
	goto T846;
	goto T843;
T843:;
	V431= Cnil;
	goto T844;
T844:;
	V432= Cnil;
	goto T845;
T845:;
	V433= Cnil;
	goto T846;
T846:;
	V434= (VFUN_NARGS=4,(*(LnkLI47))((V421),(V431),(V432),(V433)));
	bds_unwind1;
	goto T824;}
	goto T834;
T834:;
	if(((*(LnkLI200))((V421)))==Cnil){
	goto T848;}
	{object V435;
	object V436;
	object V437;
	base[3]= (V421);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk201)();
	if(vs_base>=vs_top){vs_top=sup;goto T852;}
	V435= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T853;}
	V436= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T854;}
	V437= vs_base[0];
	vs_top=sup;
	goto T855;
	goto T852;
T852:;
	V435= Cnil;
	goto T853;
T853:;
	V436= Cnil;
	goto T854;
T854:;
	V437= Cnil;
	goto T855;
T855:;
	V438= (VFUN_NARGS=4,(*(LnkLI47))((V421),(V435),(V436),(V437)));
	bds_unwind1;
	goto T824;}
	goto T848;
T848:;
	{object V439;
	object V440;
	object V441;
	base[3]= (V421);
	base[5]= (V421);
	base[6]= (V422);
	base[7]= VV[10];
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk93)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk210)();
	if(vs_base>=vs_top){vs_top=sup;goto T862;}
	V439= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T863;}
	V440= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T864;}
	V441= vs_base[0];
	vs_top=sup;
	goto T865;
	goto T862;
T862:;
	V439= Cnil;
	goto T863;
T863:;
	V440= Cnil;
	goto T864;
T864:;
	V441= Cnil;
	goto T865;
T865:;
	V442= (VFUN_NARGS=4,(*(LnkLI47))((V421),(V439),(V440),(V441)));
	bds_unwind1;}
	goto T824;
T824:;
	base[2]= (V423);
	base[3]= (V422);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk102)();
	return;}
	}
}
/*	local entry for function MAKE-FINAL-DFUN	*/

static object LI76(object V443,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB74 VMS74 VMV74
	{object V444;
	object V445;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V444= V443;
	narg = narg - 1;
	if (narg <= 0) goto T868;
	else {
	V445= first;}
	--narg; goto T869;
	goto T868;
T868:;
	V445= Cnil;
	goto T869;
T869:;
	{object V446;
	object V447;
	object V448;
	base[0]= (V444);
	base[1]= (V445);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk243)();
	if(vs_base>=vs_top){vs_top=sup;goto T874;}
	V446= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T875;}
	V447= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T876;}
	V448= vs_base[0];
	vs_top=sup;
	goto T877;
	goto T874;
T874:;
	V446= Cnil;
	goto T875;
T875:;
	V447= Cnil;
	goto T876;
T876:;
	V448= Cnil;
	goto T877;
T877:;
	{object V449 = (VFUN_NARGS=4,(*(LnkLI247))((V444),(V446),(V447),(V448)));
	VMR74(V449)}}
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
	{object V450=base[0]->c.c_cdr;
	if(endp(V450))invalid_macro_call();
	{object V451= (V450->c.c_car);
	if(endp(V451))invalid_macro_call();
	base[2]= (V451->c.c_car);
	V451=V451->c.c_cdr;
	if(endp(V451))invalid_macro_call();
	base[3]= (V451->c.c_car);
	V451=V451->c.c_cdr;
	if(!endp(V451))invalid_macro_call();}
	V450=V450->c.c_cdr;
	base[4]= V450;}
	V452= list(2,VV[116],list(3,VV[117],list(2,VV[23],base[3]),VV[118]));
	V453= list(2,/* INLINE-ARGS */V452,list(2,base[2],list(4,VV[119],VV[120],VV[121],list(3,VV[122],VV[123],list(2,VV[23],base[3])))));
	V454= make_cons(VV[19],base[4]);
	V455= list(2,VV[125],base[2]);
	base[5]= list(3,VV[115],/* INLINE-ARGS */V453,list(4,VV[124],/* INLINE-ARGS */V454,/* INLINE-ARGS */V455,list(3,VV[126],base[2],VV[127])));
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
	{object V456=base[0]->c.c_cdr;
	if(endp(V456))invalid_macro_call();
	{object V457= (V456->c.c_car);
	if(endp(V457))invalid_macro_call();
	base[2]= (V457->c.c_car);
	V457=V457->c.c_cdr;
	if(!endp(V457))invalid_macro_call();}
	V456=V456->c.c_cdr;
	base[3]= V456;}
	base[4]= listA(3,VV[128],list(2,base[2],VV[129]),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function FINAL-ACCESSOR-DFUN-TYPE	*/

static object LI79(V459)

register object V459;
{	 VMB77 VMS77 VMV77
	goto TTL;
TTL:;
	{object V460;
	if(((*(LnkLI213))((V459)))==Cnil){
	goto T880;}
	if(type_of(V459)==t_structure){
	goto T886;}
	goto T884;
	goto T886;
T886:;
	if(!(((V459)->str.str_def)==(VV[130]))){
	goto T884;}
	V461= STREF(object,(V459),4);
	goto T882;
	goto T884;
T884:;{object V463;
	V463= (VV[73]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V459);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	V464= vs_base[0];
	if(!((V463)==(CMPcar(V464)))){
	goto T889;}}
	V461= CMPcar(((V459))->cc.cc_turbo[12]);
	goto T882;
	goto T889;
T889:;
	base[0]= VV[74];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V461= vs_base[0];
	goto T882;
T882:;
	V460= (V461)->v.v_self[fix((VV[75]->s.s_dbind))];
	goto T878;
	goto T880;
T880:;
	base[0]= (V459);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk216)(Lclptr216);
	vs_top=sup;
	V460= vs_base[0];
	goto T878;
T878:;
	base[0]= VV[250];
	base[1]= (V460);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk205)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T897;}
	{object V465 = VV[59];
	VMR77(V465)}
	goto T897;
T897:;
	base[0]= VV[251];
	base[1]= (V460);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk205)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T902;}
	{object V466 = VV[133];
	VMR77(V466)}
	goto T902;
T902:;
	{object V467 = Cnil;
	VMR77(V467)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for MAKE-FINAL-ACCESSOR-DFUN	*/

static void L80()
{register object *base=vs_base;
	register object *sup=base+VM78; VC78
	vs_check;
	{register object V468;
	register object V469;
	object V470;
	object V471;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V468=(base[0]);
	V469=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T906;}
	V470=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T907;}
	V471=(base[3]);
	vs_top=sup;
	goto T908;
	goto T906;
T906:;
	V470= Cnil;
	goto T907;
T907:;
	V471= Cnil;
	goto T908;
T908:;
	{object V472;
	object V473;
	{register object x= VV[129],V474= (VV[118]->s.s_dbind);
	while(V474!=Cnil)
	if(eql(x,V474->c.c_car->c.c_car) &&V474->c.c_car != Cnil){
	V472= (V474->c.c_car);
	goto T911;
	}else V474=V474->c.c_cdr;
	V472= Cnil;}
	goto T911;
T911:;
	if((CMPcdr((V472)))==Cnil){
	goto T914;}
	{object V476;
	V476= CMPcdr(CMPcdr(V472));
	{object V477;
	V477= CMPcar(CMPcdr(V472));
	(V472)->c.c_cdr = (V476);
	V473= (V477);
	goto T912;}}
	goto T914;
T914:;
	base[6]= VV[123];
	base[7]= VV[129];
	vs_top=(vs_base=base+6)+2;
	Lmake_hash_table();
	vs_top=sup;
	V473= vs_base[0];
	goto T912;
T912:;
	{object V480;
	register object V481;
	object V482;
	object V483;
	object V484;
	object V485;
	base[6]= (V468);
	base[7]= (V469);
	base[8]= (V473);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk252)();
	if(vs_base>=vs_top){vs_top=sup;goto T927;}
	V480= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T928;}
	V481= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T929;}
	V482= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T930;}
	V483= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T931;}
	V484= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T932;}
	V485= vs_base[0];
	vs_top=sup;
	goto T933;
	goto T927;
T927:;
	V480= Cnil;
	goto T928;
T928:;
	V481= Cnil;
	goto T929;
T929:;
	V482= Cnil;
	goto T930;
T930:;
	V483= Cnil;
	goto T931;
T931:;
	V484= Cnil;
	goto T932;
T932:;
	V485= Cnil;
	goto T933;
T933:;
	if(((V480))==Cnil){
	goto T935;}
	if(!(number_compare((V484),small_fixnum(1))==0)){
	goto T938;}
	{object V486;
	base[6]= (V482);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk253)(Lclptr253);
	vs_top=sup;
	V486= vs_base[0];
	base[6]= (V468);
	base[7]= (V469);
	base[8]= (V486);
	base[9]= (V481);
	vs_top=(vs_base=base+6)+4;
	(void) (*Lnk249)();
	goto T922;}
	goto T938;
T938:;
	if(!(number_compare((V484),small_fixnum(2))==0)){
	goto T947;}
	if(type_of((V481))==t_fixnum||type_of((V481))==t_bignum){
	goto T946;}
	if(!(type_of((V481))==t_cons)){
	goto T947;}
	goto T946;
T946:;
	{object V487;
	object V488;
	base[6]= (V482);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk253)(Lclptr253);
	vs_top=sup;
	V487= vs_base[0];
	base[6]= (V483);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk253)(Lclptr253);
	vs_top=sup;
	V488= vs_base[0];
	base[6]= (V468);
	base[7]= (V469);
	base[8]= (V487);
	base[9]= (V488);
	base[10]= (V481);
	vs_top=(vs_base=base+6)+5;
	(void) (*Lnk254)();
	goto T922;}
	goto T947;
T947:;
	if(type_of((V481))==t_fixnum||type_of((V481))==t_bignum){
	goto T962;}
	if(!(type_of((V481))==t_cons)){
	goto T963;}
	goto T962;
T962:;
	base[6]= (V468);
	base[7]= (V469);
	base[8]= (V481);
	base[9]= (V480);
	vs_top=(vs_base=base+6)+4;
	(void) (*Lnk255)();
	goto T922;
	goto T963;
T963:;
	if(((V485))==Cnil){
	goto T972;}
	base[6]= (V468);
	base[7]= (V469);
	base[8]= (V480);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk256)();
	goto T922;
	goto T972;
T972:;
	base[6]= (V468);
	base[7]= (V470);
	base[8]= (V471);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk257)();
	goto T922;
	goto T935;
T935:;
	base[6]= (V468);
	base[7]= (V470);
	base[8]= (V471);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk257)();}
	goto T922;
T922:;
	{object *V479=vs_top;object *V478=vs_base; vs_base=V479;
	{register object *base0=base;
	{register object *base=V479;
	register object *sup=vs_base+VM79;
	base0[0]=base0[0];
	base[0]=base[0];
	vs_check;
	vs_top=sup;
	base[0]= (V473);
	vs_top=(vs_base=base+0)+1;
	Lclrhash();
	vs_top=sup;
	}}
	{register object *base0=base;
	{register object *base=V479;
	register object *sup=vs_base+VM80;
	base0[0]=base0[0];
	base[0]=base[0];
	vs_check;
	vs_top=sup;
	{object V491;
	V491= make_cons(V473,CMPcdr(V472));
	(V472)->c.c_cdr = (V491);}
	}}
	vs_base=V478;vs_top=V479;}
	return;}
	}
}
/*	function definition for MAKE-FINAL-DFUN-INTERNAL	*/

static void L81()
{register object *base=vs_base;
	register object *sup=base+VM81; VC81
	vs_check;
	bds_check;
	{register object V492;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T988;}
	V492=(base[1]);
	vs_top=sup;
	goto T989;
	goto T988;
T988:;
	V492= Cnil;
	goto T989;
T989:;
	{register object V493;
	object V494;
	register object V495;
	object V496;
	base[4]= (base[0]->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk216)(Lclptr216);
	vs_top=sup;
	V493= vs_base[0];
	V494= Cnil;
	V495= (VV[134]->s.s_dbind);
	bds_bind(VV[134],Cnil);
	base[3]=MMcons(Cnil,base[0]);
	V496= Cnil;
	if(((V493))!=Cnil){
	goto T994;}
	base[4]= 
	make_cclosure_new(LC158,Cnil,base[3],Cdata);
	base[5]= Cnil;
	base[6]= (*(LnkLI258))();
	vs_top=(vs_base=base+4)+3;
	bds_unwind1;
	return;
	goto T994;
T994:;
	V494= (*(LnkLI244))((base[0]->c.c_car));
	if(((V494))==Cnil){
	goto T1000;}
	base[4]= (base[0]->c.c_car);
	base[5]= (V494);
	base[6]= (V492);
	base[7]= (V495);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk246)();
	bds_unwind1;
	return;
	goto T1000;
T1000:;
	base[4]= 
	make_cclosure_new(LC159,Cnil,base[3],Cdata);
	base[6]= CMPcar((V493));
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	(base[3]->c.c_car)= vs_base[0];
	base[5]= (base[3]->c.c_car);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk205)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1009;}
	base[4]= 
	make_cclosure_new(LC160,Cnil,base[3],Cdata);
	base[5]= (V493);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk205)();
	vs_top=sup;
	V496= vs_base[0];
	if(((V496))!=Cnil){
	goto T1008;}
	goto T1009;
T1009:;
	if(((VFUN_NARGS=1,(*(LnkLI218))((base[0]->c.c_car))))==Cnil){
	goto T1008;}
	base[4]= (base[0]->c.c_car);
	base[5]= (V492);
	base[6]= (V495);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk260)();
	bds_unwind1;
	return;
	goto T1008;
T1008:;
	if(((VFUN_NARGS=1,(*(LnkLI202))((base[0]->c.c_car))))==Cnil){
	goto T1025;}
	base[4]= (base[0]->c.c_car);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk261)();
	bds_unwind1;
	return;
	goto T1025;
T1025:;
	if(((V496))==Cnil){
	goto T1029;}
	if(((*(LnkLI200))((base[0]->c.c_car)))!=Cnil){
	goto T1029;}
	{object V497;
	base[4]= (base[0]->c.c_car);
	base[5]= (V493);
	base[6]= Cnil;
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk262)();
	vs_top=sup;
	V497= vs_base[0];
	base[4]= (base[0]->c.c_car);
	base[5]= (V497);
	base[6]= (V492);
	base[7]= (V495);
	vs_top=(vs_base=base+4)+4;
	(void) (*Lnk263)();
	bds_unwind1;
	return;}
	goto T1029;
T1029:;
	base[4]= (base[0]->c.c_car);
	base[5]= (V492);
	base[6]= (V495);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk257)();
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
	{object V498;
	register object V499;
	register object V500;
	check_arg(4);
	base[0]=MMcons(base[0],Cnil);
	V498=(base[1]);
	V499=(base[2]);
	V500=(base[3]);
	vs_top=sup;
	{object V501;
	object V502;
	register object V503;
	register object V504;
	object V505;
	object V506;
	base[8]= (V500);
	vs_top=(vs_base=base+8)+1;
	Ltype_of();
	vs_top=sup;
	V501= vs_base[0];
	V502= STREF(object,(V500),4);
	V503= Cnil;
	V504= Cnil;
	V505= Cnil;
	base[6]= Cnil;
	{object V508= V502;
	if((V508!= VV[59]))goto T1051;
	V506= make_cons((V499),Cnil);
	goto T1050;
	goto T1051;
T1051:;
	if((V508!= VV[133]))goto T1052;
	V506= list(2,(V498),(V499));
	goto T1050;
	goto T1052;
T1052:;
	base[8]= VV[49];
	base[9]= VV[50];
	base[10]= VV[51];
	base[11]= VV[52];
	base[12]= V502;
	base[13]= VV[53];
	base[14]= VV[136];
	base[15]= VV[55];
	base[16]= VV[137];
	vs_top=(vs_base=base+8)+9;
	(void) (*Lnk187)();
	vs_top=sup;
	V506= vs_base[0];}
	goto T1050;
T1050:;
	{object V509;
	object V510;
	base[12]= (base[0]->c.c_car);
	base[13]= (V506);
	base[14]= VV[94];
	vs_top=(vs_base=base+12)+3;
	(void) (*Lnk93)();
	if(vs_base>=vs_top){vs_top=sup;goto T1066;}
	base[8]=MMcons(vs_base[0],base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1067;}
	V509= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1068;}
	base[9]= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1069;}
	V510= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1070;}
	base[10]=MMcons(vs_base[0],base[8]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1071;}
	base[11]=MMcons(vs_base[0],base[10]);
	vs_top=sup;
	goto T1072;
	goto T1066;
T1066:;
	base[8]=MMcons(Cnil,base[0]);
	goto T1067;
T1067:;
	V509= Cnil;
	goto T1068;
T1068:;
	base[9]= Cnil;
	goto T1069;
T1069:;
	V510= Cnil;
	goto T1070;
T1070:;
	base[10]=MMcons(Cnil,base[8]);
	goto T1071;
T1071:;
	base[11]=MMcons(Cnil,base[10]);
	goto T1072;
T1072:;
	if(((V509))==Cnil){
	goto T1073;}
	{register object x= (base[0]->c.c_car),V511= (VV[99]->s.s_dbind);
	while(V511!=Cnil)
	if(x==(V511->c.c_car)){
	goto T1073;
	}else V511=V511->c.c_cdr;}
	base[12]= make_cons((base[0]->c.c_car),(VV[99]->s.s_dbind));
	bds_bind(VV[99],base[12]);
	base[13]=make_cclosure_new(LC84,Cnil,base[11],Cdata);
	base[13]=MMcons(base[13],base[11]);
	base[14]=make_cclosure_new(LC85,Cnil,base[13],Cdata);
	base[14]=MMcons(base[14],base[13]);
	if(((base[10]->c.c_car))!=Cnil){
	goto T1080;}
	vs_base=vs_top;
	L86(base);
	vs_top=sup;
	bds_unwind1;
	goto T1073;
	goto T1080;
T1080:;
	{object V512;
	if((V510)!=Cnil){
	V512= (V510);
	goto T1082;}
	V512= (((base[11]->c.c_car))==Cnil?Ct:Cnil);
	goto T1082;
T1082:;
	if(((V512))==Cnil){
	goto T1084;}
	bds_unwind1;
	goto T1073;
	goto T1084;
T1084:;
	if(type_of(V499)==t_structure){
	goto T1090;}
	goto T1089;
	goto T1090;
T1090:;
	if(((V499)->str.str_def)==(VV[141])){
	goto T1087;}
	goto T1089;
T1089:;{object V514;
	V514= (VV[73]->s.s_dbind);
	base[15]= small_fixnum(14);
	base[16]= (V499);
	vs_top=(vs_base=base+15)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	V515= vs_base[0];
	if((V514)==(CMPcar(V515))){
	goto T1087;}}
	vs_base=vs_top;
	L86(base);
	vs_top=sup;
	bds_unwind1;
	goto T1073;
	goto T1087;
T1087:;
	if(((((base[10]->c.c_car))==((V502))?Ct:Cnil))==Cnil){
	goto T1096;}
	if(!(type_of(base[9])==t_cons||(base[9])==Cnil)){
	goto T1097;}
	goto T1096;
T1096:;
	vs_base=vs_top;
	L86(base);
	vs_top=sup;
	bds_unwind1;
	goto T1073;
	goto T1097;
T1097:;
	{object V517= V501;
	if((V517!= VV[38]))goto T1101;
	V503= STREF(object,(V500),8);
	V504= STREF(object,(V500),12);
	if(((V504))==(base[9])){
	bds_unwind1;
	goto T1073;}
	if(!(eql((base[11]->c.c_car),(V503)))){
	goto T1109;}
	base[15]= (base[11]->c.c_car);
	base[16]= (V504);
	base[17]= base[9];
	vs_top=(vs_base=base+15)+3;
	L83(base);
	vs_top=sup;
	bds_unwind1;
	goto T1073;
	goto T1109;
T1109:;
	vs_base=vs_top;
	L85(base);
	vs_top=sup;
	bds_unwind1;
	goto T1073;
	goto T1101;
T1101:;
	if((V517!= VV[40]))goto T1114;
	V503= STREF(object,(V500),8);
	V504= STREF(object,(V500),12);
	V505= STREF(object,(V500),16);
	if(((V504))==(base[9])){
	bds_unwind1;
	goto T1073;}
	if(((V505))==(base[9])){
	bds_unwind1;
	goto T1073;}
	if(!(eql((base[11]->c.c_car),(V503)))){
	goto T1126;}
	base[15]= (base[11]->c.c_car);
	vs_top=(vs_base=base+15)+1;
	L84(base);
	vs_top=sup;
	bds_unwind1;
	goto T1073;
	goto T1126;
T1126:;
	vs_base=vs_top;
	L85(base);
	vs_top=sup;
	bds_unwind1;
	goto T1073;
	goto T1114;
T1114:;
	if((V517!= VV[42]))goto T1129;
	V503= STREF(object,(V500),8);
	base[6]= STREF(object,(V500),0);
	if(!(eql((base[11]->c.c_car),(V503)))){
	goto T1135;}
	base[15]= 
	make_cclosure_new(LC161,Cnil,base[14],Cdata);
	vs_top=(vs_base=base+15)+1;
	L87(base);
	vs_top=sup;
	bds_unwind1;
	goto T1073;
	goto T1135;
T1135:;
	vs_base=vs_top;
	L85(base);
	vs_top=sup;
	bds_unwind1;
	goto T1073;
	goto T1129;
T1129:;
	if((V517!= VV[37]))goto T1138;
	base[6]= STREF(object,(V500),0);
	if(!(type_of((base[11]->c.c_car))==t_cons)){
	goto T1142;}
	vs_base=vs_top;
	L86(base);
	vs_top=sup;
	bds_unwind1;
	goto T1073;
	goto T1142;
T1142:;
	base[15]= (base[14]->c.c_car);
	vs_top=(vs_base=base+15)+1;
	L87(base);
	vs_top=sup;
	bds_unwind1;
	goto T1073;
	goto T1138;
T1138:;
	base[15]= VV[49];
	base[16]= VV[50];
	base[17]= VV[51];
	base[18]= VV[52];
	base[19]= V501;
	base[20]= VV[53];
	base[21]= VV[142];
	base[22]= VV[55];
	base[23]= VV[143];
	vs_top=(vs_base=base+15)+9;
	(void) (*Lnk187)();
	vs_top=sup;
	bds_unwind1;}}
	goto T1073;
T1073:;
	base[12]= (base[8]->c.c_car);
	base[13]= (V506);
	vs_top=(vs_base=base+12)+2;
	(void) (*Lnk102)();
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
	base[5]= VV[10];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk93)();
	if(vs_base>=vs_top){vs_top=sup;goto T1162;}
	V523= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1163;}
	V524= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1164;}
	V525= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1165;}
	V526= vs_base[0];
	vs_top=sup;
	goto T1166;
	goto T1162;
T1162:;
	V523= Cnil;
	goto T1163;
T1163:;
	V524= Cnil;
	goto T1164;
T1164:;
	V525= Cnil;
	goto T1165;
T1165:;
	V526= Cnil;
	goto T1166;
T1166:;
	if(((V524))==Cnil){
	goto T1167;}
	{register object x= (V518),V527= (VV[99]->s.s_dbind);
	while(V527!=Cnil)
	if(x==(V527->c.c_car)){
	goto T1167;
	}else V527=V527->c.c_cdr;}
	base[3]= make_cons((V518),(VV[99]->s.s_dbind));
	bds_bind(VV[99],base[3]);
	if((V526)==Cnil){
	goto T1174;}
	bds_unwind1;
	goto T1167;
	goto T1174;
T1174:;
	if(!(((V521))==((V523)))){
	goto T1177;}
	{object V529;
	V529= (VFUN_NARGS=3,(*(LnkLI264))((V522),(V525),Cnil));
	if(((V529))==((V522))){
	bds_unwind1;
	goto T1167;}
	{object V530;
	object V531;
	object V532;
	base[4]= (V518);
	base[5]= (V523);
	base[6]= (V529);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk210)();
	if(vs_base>=vs_top){vs_top=sup;goto T1186;}
	V530= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1187;}
	V531= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1188;}
	V532= vs_base[0];
	vs_top=sup;
	goto T1189;
	goto T1186;
T1186:;
	V530= Cnil;
	goto T1187;
T1187:;
	V531= Cnil;
	goto T1188;
T1188:;
	V532= Cnil;
	goto T1189;
T1189:;
	V533= (VFUN_NARGS=4,(*(LnkLI47))((V518),(V530),(V531),(V532)));
	bds_unwind1;
	goto T1167;}}
	goto T1177;
T1177:;
	{object V534;
	object V535;
	object V536;
	base[4]= (V518);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk201)();
	if(vs_base>=vs_top){vs_top=sup;goto T1192;}
	V534= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1193;}
	V535= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1194;}
	V536= vs_base[0];
	vs_top=sup;
	goto T1195;
	goto T1192;
T1192:;
	V534= Cnil;
	goto T1193;
T1193:;
	V535= Cnil;
	goto T1194;
T1194:;
	V536= Cnil;
	goto T1195;
T1195:;
	V537= (VFUN_NARGS=4,(*(LnkLI47))((V518),(V534),(V535),(V536)));
	bds_unwind1;}
	goto T1167;
T1167:;
	base[3]= (V523);
	base[4]= (V519);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk102)();
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
	base[5]= VV[11];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk93)();
	if(vs_base>=vs_top){vs_top=sup;goto T1203;}
	V542= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1204;}
	V543= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1205;}
	V544= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1206;}
	V545= vs_base[0];
	vs_top=sup;
	goto T1207;
	goto T1203;
T1203:;
	V542= Cnil;
	goto T1204;
T1204:;
	V543= Cnil;
	goto T1205;
T1205:;
	V544= Cnil;
	goto T1206;
T1206:;
	V545= Cnil;
	goto T1207;
T1207:;
	if(((V543))==Cnil){
	goto T1208;}
	{register object x= (V538),V546= (VV[99]->s.s_dbind);
	while(V546!=Cnil)
	if(x==(V546->c.c_car)){
	goto T1208;
	}else V546=V546->c.c_cdr;}
	base[3]= make_cons((V538),(VV[99]->s.s_dbind));
	bds_bind(VV[99],base[3]);
	if((V545)==Cnil){
	goto T1215;}
	bds_unwind1;
	goto T1208;
	goto T1215;
T1215:;
	{object V548;
	V548= (VFUN_NARGS=3,(*(LnkLI264))((V541),(V544),(V542)));
	if(((V548))==((V541))){
	bds_unwind1;
	goto T1208;}
	{object V549;
	object V550;
	object V551;
	base[4]= (V538);
	base[5]= (V548);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk201)();
	if(vs_base>=vs_top){vs_top=sup;goto T1223;}
	V549= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1224;}
	V550= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1225;}
	V551= vs_base[0];
	vs_top=sup;
	goto T1226;
	goto T1223;
T1223:;
	V549= Cnil;
	goto T1224;
T1224:;
	V550= Cnil;
	goto T1225;
T1225:;
	V551= Cnil;
	goto T1226;
T1226:;
	V552= (VFUN_NARGS=4,(*(LnkLI47))((V538),(V549),(V550),(V551)));
	bds_unwind1;}}
	goto T1208;
T1208:;
	base[3]= (V542);
	base[4]= (V539);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk102)();
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
	base[5]= VV[11];
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk93)();
	if(vs_base>=vs_top){vs_top=sup;goto T1234;}
	V557= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1235;}
	V558= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1236;}
	V559= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1237;}
	V560= vs_base[0];
	vs_top=sup;
	goto T1238;
	goto T1234;
T1234:;
	V557= Cnil;
	goto T1235;
T1235:;
	V558= Cnil;
	goto T1236;
T1236:;
	V559= Cnil;
	goto T1237;
T1237:;
	V560= Cnil;
	goto T1238;
T1238:;
	if(((V558))==Cnil){
	goto T1239;}
	{register object x= (V553),V561= (VV[99]->s.s_dbind);
	while(V561!=Cnil)
	if(x==(V561->c.c_car)){
	goto T1239;
	}else V561=V561->c.c_cdr;}
	base[3]= make_cons((V553),(VV[99]->s.s_dbind));
	bds_bind(VV[99],base[3]);
	if((V560)==Cnil){
	goto T1246;}
	bds_unwind1;
	goto T1239;
	goto T1246;
T1246:;
	{object V563;
	object V564;
	object V565;
	{register object V566;
	V566= (V557);
	base[7]= (V566);
	base[8]= VV[144];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk265)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1250;}
	V563= STREF(object,(V557),0);
	goto T1248;
	goto T1250;
T1250:;
	base[7]= (V566);
	base[8]= VV[145];
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk265)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1255;}
	V563= STREF(object,(V557),0);
	goto T1248;
	goto T1255;
T1255:;
	V563= Cnil;}
	goto T1248;
T1248:;
	V564= (VFUN_NARGS=2,(*(LnkLI266))((V563),VV[81]));
	V565= (VFUN_NARGS=3,(*(LnkLI264))((V556),(V559),(V564)));
	if(((V565))==((V556))){
	bds_unwind1;
	goto T1239;}
	{object V567;
	object V568;
	object V569;
	base[7]= (V553);
	base[8]= (V565);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk219)();
	if(vs_base>=vs_top){vs_top=sup;goto T1266;}
	V567= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1267;}
	V568= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1268;}
	V569= vs_base[0];
	vs_top=sup;
	goto T1269;
	goto T1266;
T1266:;
	V567= Cnil;
	goto T1267;
T1267:;
	V568= Cnil;
	goto T1268;
T1268:;
	V569= Cnil;
	goto T1269;
T1269:;
	V570= (VFUN_NARGS=4,(*(LnkLI47))((V553),(V567),(V568),(V569)));
	bds_unwind1;}}
	goto T1239;
T1239:;
	base[3]= (V557);
	base[4]= (V554);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk102)();
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
	{object V574;
	object V575;
	object V576;
	object V577;
	object V578;
	base[3]= (V571);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk204)();
	if(vs_base>=vs_top){vs_top=sup;goto T1274;}
	V574= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1275;}
	V575= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1276;}
	V576= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1277;}
	V577= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1278;}
	V578= vs_base[0];
	vs_top=sup;
	goto T1279;
	goto T1274;
T1274:;
	V574= Cnil;
	goto T1275;
T1275:;
	V575= Cnil;
	goto T1276;
T1276:;
	V576= Cnil;
	goto T1277;
T1277:;
	V577= Cnil;
	goto T1278;
T1278:;
	V578= Cnil;
	goto T1279;
T1279:;
	{register object V579;
	object V580;
	object V581;
	register object V582;
	register object V583;
	object V584;
	object V585;
	object V586;
	V579= (V572);
	V580= Cnil;
	V581= Cnil;
	V582= Cnil;
	V583= Cnil;
	V584= Cnil;
	V585= Cnil;
	V586= Cnil;
	{register object V587;
	object V588;
	V587= (V576);
	V588= CMPcar((V587));
	goto T1292;
T1292:;
	if(!(((V587))==Cnil)){
	goto T1293;}
	goto T1288;
	goto T1293;
T1293:;
	if(((V579))!=Cnil){
	goto T1297;}
	V581= Ct;
	goto T1288;
	goto T1297;
T1297:;
	{object V589;
	register object V590;
	register object V591;
	object V592;
	{object V593;
	V593= CMPcar((V579));
	V579= CMPcdr((V579));
	V589= (V593);}
	V590= Cnil;
	V591= (VV[135]->s.s_dbind);
	V592= Ct;
	if(((V588))==(Ct)){
	goto T1310;}
	V590= (*(LnkLI267))((V589));
	if(!((((((V590))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T1315;}
	V580= Ct;
	V590= (*(LnkLI268))((V589));
	goto T1315;
T1315:;
	if(((V582))!=Cnil){
	goto T1323;}
	V582= (V590);
	goto T1321;
	goto T1323;
T1323:;
	if(type_of((V582))==t_cons){
	goto T1327;}
	V583= make_cons((V590),Cnil);
	V582= make_cons((V582),(V583));
	goto T1321;
	goto T1327;
T1327:;
	{object V594;
	V594= make_cons((V590),Cnil);
	(V583)->c.c_cdr = V594;
	V583= (V594);}
	goto T1321;
T1321:;
	V591= ((V590))->v.v_self[11];
	V592= list(2,VV[146],(V591));
	goto T1310;
T1310:;
	V584= make_cons(V590,(V584));
	V586= make_cons(V591,(V586));
	V585= make_cons(V592,(V585));}
	V587= CMPcdr((V587));
	V588= CMPcar((V587));
	goto T1292;}
	goto T1288;
T1288:;
	if(((V581))==Cnil){
	goto T1350;}
	base[3]= VV[147];
	base[4]= (V571);
	base[5]= CMPmake_fixnum((long)length((V576)));
	vs_top=(vs_base=base+3)+3;
	Lerror();
	return;
	goto T1350;
T1350:;
	{object V600;
	object V601;
	object V602;
	V600= nreverse((V584));
	V601= nreverse((V586));
	{object V603;
	object V604= (V601);
	if(V604==Cnil){
	V602= Cnil;
	goto T1357;}
	base[6]=V603=MMcons(Cnil,Cnil);
	goto T1358;
T1358:;
	(V603->c.c_car)= list(2,VV[146],(V604->c.c_car));
	if((V604=MMcdr(V604))==Cnil){
	V602= base[6];
	goto T1357;}
	V603=MMcdr(V603)=MMcons(Cnil,Cnil);
	goto T1358;}
	goto T1357;
T1357:;
	{object V606;
	object V607;
	object V608;
	object V609;
	base[6]= (V571);
	base[7]= (V578);
	base[8]= (V600);
	base[9]= (V601);
	base[10]= (V602);
	base[11]= (V573);
	vs_top=(vs_base=base+6)+6;
	(void) (*Lnk269)();
	if(vs_base>=vs_top){vs_top=sup;goto T1367;}
	V606= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1368;}
	V607= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1369;}
	V608= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1370;}
	V609= vs_base[0];
	vs_top=sup;
	goto T1371;
	goto T1367;
T1367:;
	V606= Cnil;
	goto T1368;
T1368:;
	V607= Cnil;
	goto T1369;
T1369:;
	V608= Cnil;
	goto T1370;
T1370:;
	V609= Cnil;
	goto T1371;
T1371:;
	base[6]= (V606);
	base[7]= (V607);
	base[8]= (V582);
	base[9]= (V580);
	base[10]= (V608);
	base[11]= (V609);
	vs_top=(vs_base=base+6)+6;
	return;}}}}
	}
}
/*	function definition for CACHE-MISS-VALUES-INTERNAL	*/

static void L92()
{register object *base=vs_base;
	register object *sup=base+VM87; VC87
	vs_check;
	{register object V610;
	object V611;
	object V612;
	object V613;
	object V614;
	object V615;
	check_arg(6);
	V610=(base[0]);
	V611=(base[1]);
	V612=(base[2]);
	V613=(base[3]);
	V614=(base[4]);
	V615=(base[5]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V616;
	object V617;
	object V618;
	V616= (((V615))==(VV[94])?Ct:Cnil);
	if(!(((V615))==(VV[11]))){
	goto T1380;}
	V617= Ct;
	goto T1379;
	goto T1380;
T1380:;
	V617= (((V615))==(VV[94])?Ct:Cnil);
	goto T1379;
T1379:;
	if(!(((V611))==Cnil)){
	goto T1383;}
	V618= Ct;
	goto T1382;
	goto T1383;
T1383:;
	V618= STREF(object,(V611),36);
	goto T1382;
T1382:;
	{register object V619;
	object V620;
	if(((V618))==Cnil){
	goto T1387;}
	base[9]= (V610);
	base[10]= (V614);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk270)();
	goto T1385;
	goto T1387;
T1387:;
	base[9]= (V610);
	base[10]= (V613);
	vs_top=(vs_base=base+9)+2;
	(void) (*Lnk271)(Lclptr271);
	goto T1385;
T1385:;
	if(vs_base>=vs_top){vs_top=sup;goto T1393;}
	V619= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1394;}
	V620= vs_base[0];
	vs_top=sup;
	goto T1395;
	goto T1393;
T1393:;
	V619= Cnil;
	goto T1394;
T1394:;
	V620= Cnil;
	goto T1395;
T1395:;
	{object V621;
	if(((V618))!=Cnil){
	goto T1397;}
	if(((V620))==Cnil){
	goto T1398;}
	goto T1397;
T1397:;
	if((V617)==Cnil){
	V622= Cnil;
	goto T1402;}
	V622= (V612);
	goto T1402;
T1402:;
	V623= (VFUN_NARGS=6,(*(LnkLI233))((V610),(V619),(V614),Cnil,V622,(V620)));
	if((V617)==Cnil){
	V624= Cnil;
	goto T1403;}
	V624= (V612);
	goto T1403;
T1403:;
	V621= (
	V625 = /* INLINE-ARGS */V623,
	(type_of(V625) == t_sfun ?(*((V625)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V625)==t_vfun) ?
	(*((V625)->sfn.sfn_self)):
	(fcall.fun=(V625),fcalln))(Cnil,V624));
	goto T1396;
	goto T1398;
T1398:;
	V621= (*(LnkLI272))((V610));
	goto T1396;
T1396:;
	{object V626;
	object V627;
	if((V616)==Cnil){
	base[9]= Cnil;
	vs_top=(vs_base=base+9)+1;
	goto T1404;}
	if((V620)==Cnil){
	base[9]= Cnil;
	vs_top=(vs_base=base+9)+1;
	goto T1404;}
	if((V619)==Cnil){
	base[9]= Cnil;
	vs_top=(vs_base=base+9)+1;
	goto T1404;}
	base[9]= (V610);
	base[10]= (V611);
	base[11]= (V613);
	base[12]= (V619);
	vs_top=(vs_base=base+9)+4;
	(void) (*Lnk273)();
	goto T1404;
T1404:;
	if(vs_base>=vs_top){vs_top=sup;goto T1409;}
	V626= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1410;}
	V627= vs_base[0];
	vs_top=sup;
	goto T1411;
	goto T1409;
T1409:;
	V626= Cnil;
	goto T1410;
T1410:;
	V627= Cnil;
	goto T1411;
T1411:;
	if(!(type_of((V626))==t_fixnum||type_of((V626))==t_bignum)){
	goto T1414;}
	base[9]= (V626);
	goto T1412;
	goto T1414;
T1414:;
	base[9]= (V621);
	goto T1412;
T1412:;
	base[10]= (V619);
	base[11]= (V627);
	base[12]= (V626);
	vs_top=(vs_base=base+9)+4;
	return;}}}}
	}
}
/*	function definition for ACCESSOR-VALUES	*/

static void L93()
{register object *base=vs_base;
	register object *sup=base+VM88; VC88
	vs_check;
	{object V628;
	object V629;
	object V630;
	object V631;
	check_arg(4);
	V628=(base[0]);
	V629=(base[1]);
	V630=(base[2]);
	V631=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V632;
	object V633;
	V632= STREF(object,(V629),24);
	{object V634= (V632);
	if((V634!= VV[59]))goto T1421;
	V633= CMPcar((V630));
	goto T1420;
	goto T1421;
T1421:;
	if((V634!= VV[133]))goto T1422;
	V633= CMPcadr((V630));
	goto T1420;
	goto T1422;
T1422:;
	if((V634!= VV[274]))goto T1423;
	V633= CMPcar((V630));
	goto T1420;
	goto T1423;
T1423:;
	V633= Cnil;}
	goto T1420;
T1420:;
	base[6]= (V632);
	base[7]= (V633);
	base[8]= (V631);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk275)();
	return;}
	}
}
/*	function definition for ACCESSOR-VALUES1	*/

static void L94()
{register object *base=vs_base;
	register object *sup=base+VM89; VC89
	vs_check;
	{object V635;
	object V636;
	object V637;
	check_arg(3);
	V635=(base[0]);
	V636=(base[1]);
	V637=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V638;
	object V639;
	object V640;
	V638= list(2,VV[146],(V637));
	if(!(((V636))==(VV[133]))){
	goto T1430;}
	V639= list(2,Ct,(V638));
	goto T1428;
	goto T1430;
T1430:;
	V639= make_cons((V638),Cnil);
	goto T1428;
T1428:;
	base[6]= (V635);
	base[7]= (V639);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk270)();
	vs_top=sup;
	V640= vs_base[0];
	base[6]= (V636);
	base[7]= (V637);
	base[8]= (V640);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk275)();
	return;}
	}
}
/*	function definition for ACCESSOR-VALUES-INTERNAL	*/

static void L95()
{register object *base=vs_base;
	register object *sup=base+VM90; VC90
	vs_check;
	{object V641;
	object V642;
	object V643;
	check_arg(3);
	V641=(base[0]);
	V642=(base[1]);
	V643=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V644;
	register object V645;
	V644= (V643);
	V645= CMPcar((V644));
	goto T1442;
T1442:;
	if(!(((V644))==Cnil)){
	goto T1443;}
	goto T1438;
	goto T1443;
T1443:;
	if(!(type_of((V645))==t_cons)){
	goto T1451;}
	if(((*(LnkLI276))((V645)))==Cnil){
	goto T1447;}
	goto T1449;
	goto T1451;
T1451:;
	base[4]= (V645);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk277)(Lclptr277);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1447;}
	goto T1449;
T1449:;
	base[4]= Cnil;
	base[5]= Cnil;
	vs_top=(vs_base=base+4)+2;
	return;
	goto T1447;
T1447:;
	V644= CMPcdr((V644));
	V645= CMPcar((V644));
	goto T1442;}
	goto T1438;
T1438:;
	{object V646;
	object V647;
	register object V648;
	object V649;
	V646= CMPcar((V643));
	V647= (((((VV[79]->s.s_dbind))==(VV[80])?Ct:Cnil))==Cnil?Ct:Cnil);
	if(((V642))==Cnil){
	goto T1465;}
	if(!(type_of((V646))==t_cons)){
	goto T1468;}
	if(((*(LnkLI278))((V646)))!=Cnil){
	goto T1470;}
	V648= Cnil;
	goto T1463;
	goto T1470;
T1470:;
	base[7]= (V646);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk248)();
	vs_top=sup;
	V648= vs_base[0];
	goto T1463;
	goto T1468;
T1468:;{object V651;
	V651= (VV[148]->s.s_dbind);
	if(((V647))==Cnil){
	goto T1477;}
	V652= (*(LnkLI279))((V642));
	goto T1475;
	goto T1477;
T1477:;
	base[7]= (V642);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V652= vs_base[0];
	goto T1475;
T1475:;
	{register object x= V651,V650= V652;
	while(V650!=Cnil)
	if(eql(x,V650->c.c_car)){
	goto T1473;
	}else V650=V650->c.c_cdr;}}
	V648= Cnil;
	goto T1463;
	goto T1473;
T1473:;
	if(((V647))==Cnil){
	goto T1483;}{object V653;
	V653= (VV[149]->s.s_dbind);
	V654= (*(LnkLI281))((V646));
	if((((V653)==(/* INLINE-ARGS */V654)?Ct:Cnil))==Cnil){
	goto T1480;}
	goto T1481;}
	goto T1483;
T1483:;
	base[7]= (V646);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk282)(Lclptr282);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1480;}
	goto T1481;
T1481:;
	V648= Cnil;
	goto T1463;
	goto T1480;
T1480:;
	if(((V647))==Cnil){
	goto T1487;}
	V648= (*(LnkLI283))((V646));
	goto T1463;
	goto T1487;
T1487:;
	base[7]= (V646);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V648= vs_base[0];
	goto T1463;
	goto T1465;
T1465:;
	V648= Cnil;
	goto T1463;
T1463:;
	if((V642)==Cnil){
	V649= Cnil;
	goto T1490;}
	if(((V647))==Cnil){
	goto T1492;}
	{register object V655;
	register object V656;
	V655= (*(LnkLI285))((V642));
	V656= CMPcar((V655));
	goto T1497;
T1497:;
	if(!(((V655))==Cnil)){
	goto T1498;}
	V649= Cnil;
	goto T1490;
	goto T1498;
T1498:;
	V657= (*(LnkLI286))((V656));
	if(!(eql((V648),/* INLINE-ARGS */V657))){
	goto T1502;}
	V649= (V656);
	goto T1490;
	goto T1502;
T1502:;
	V655= CMPcdr((V655));
	V656= CMPcar((V655));
	goto T1497;}
	goto T1492;
T1492:;
	V649= (*(LnkLI287))((V642),(V648));
	goto T1490;
T1490:;
	if(((V649))==Cnil){
	goto T1511;}
	if(((V647))!=Cnil){
	goto T1510;}
	base[7]= (V649);
	base[8]= (V641);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk288)(Lclptr288);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1511;}
	goto T1510;
T1510:;
	if(((V647))==Cnil){
	goto T1521;}
	base[7]= (*(LnkLI289))((V649));
	goto T1519;
	goto T1521;
T1521:;
	base[8]= (V649);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk290)(Lclptr290);
	vs_top=sup;
	base[7]= vs_base[0];
	goto T1519;
T1519:;
	base[8]= (V641);
	vs_top=(vs_base=base+7)+2;
	return;
	goto T1511;
T1511:;
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
	{VOL object V658;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V658=(base[0]);
	base[1]=MMcons(base[1],Cnil);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T1525;}
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	goto T1526;
	goto T1525;
T1525:;
	base[2]= Cnil;
	base[2]=MMcons(base[2],base[1]);
	goto T1526;
T1526:;
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	if(((base[2]->c.c_car))!=Cnil){
	goto T1528;}
	base[4]= VV[123];
	base[5]= VV[129];
	vs_top=(vs_base=base+4)+2;
	Lmake_hash_table();
	vs_top=sup;
	(base[2]->c.c_car)= vs_base[0];
	goto T1528;
T1528:;
	{object V659;
	if(((*(LnkLI213))((V658)))==Cnil){
	goto T1536;}
	if(type_of(V658)==t_structure){
	goto T1542;}
	goto T1540;
	goto T1542;
T1542:;
	if(!(((V658)->str.str_def)==(VV[150]))){
	goto T1540;}
	V660= STREF(object,(V658),4);
	goto T1538;
	goto T1540;
T1540:;{object V662;
	V662= (VV[73]->s.s_dbind);
	base[10]= small_fixnum(14);
	base[11]= (V658);
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	V663= vs_base[0];
	if(!((V662)==(CMPcar(V663)))){
	goto T1545;}}
	V660= CMPcar(((V658))->cc.cc_turbo[12]);
	goto T1538;
	goto T1545;
T1545:;
	base[10]= VV[74];
	vs_top=(vs_base=base+10)+1;
	Lerror();
	vs_top=sup;
	V660= vs_base[0];
	goto T1538;
T1538:;
	V659= (V660)->v.v_self[fix((VV[75]->s.s_dbind))];
	goto T1534;
	goto T1536;
T1536:;
	base[10]= (V658);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk216)(Lclptr216);
	vs_top=sup;
	V659= vs_base[0];
	goto T1534;
T1534:;
	base[6]= (((((VV[79]->s.s_dbind))==(VV[80])?Ct:Cnil))==Cnil?Ct:Cnil);
	base[4]=MMcons(Cnil,base[3]);
	base[5]=MMcons(Ct,base[4]);
	base[6]=MMcons(base[6],base[5]);
	base[7]=MMcons(Cnil,base[6]);
	base[8]=MMcons(Cnil,base[7]);
	base[9]=MMcons(small_fixnum(0),base[8]);
	{register object V664;
	register object V665;
	V664= (V659);
	V665= CMPcar((V664));
	goto T1557;
T1557:;
	if(!(((V664))==Cnil)){
	goto T1558;}
	goto T1553;
	goto T1558;
T1558:;
	{object V666;
	register object V667;
	object V668;
	if(!(type_of((V665))==t_cons)){
	goto T1565;}
	V666= (VFUN_NARGS=2,(*(LnkLI291))((V665),Ct));
	goto T1563;
	goto T1565;
T1565:;
	base[16]= (V665);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V666= vs_base[0];
	goto T1563;
T1563:;
	if(!(((base[1]->c.c_car))==(VV[59]))){
	goto T1570;}
	base[12]= CMPcar((V666));
	goto T1568;
	goto T1570;
T1570:;
	base[12]= CMPcadr((V666));
	goto T1568;
T1568:;
	base[12]=MMcons(base[12],base[9]);
	if(((base[6]->c.c_car))==Cnil){
	goto T1574;}
	V667= (*(LnkLI279))((base[12]->c.c_car));
	goto T1572;
	goto T1574;
T1574:;
	base[16]= (base[12]->c.c_car);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk292)(Lclptr292);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1576;}
	V667= Cnil;
	goto T1572;
	goto T1576;
T1576:;
	base[16]= (base[12]->c.c_car);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V667= vs_base[0];
	goto T1572;
T1572:;
	{register object x= (VV[148]->s.s_dbind),V669= (V667);
	while(V669!=Cnil)
	if(eql(x,V669->c.c_car)){
	base[14]= V669;
	goto T1580;
	}else V669=V669->c.c_cdr;
	base[14]= Cnil;}
	goto T1580;
T1580:;
	base[14]=MMcons(base[14],base[12]);
	if(!(type_of((V665))==t_cons)){
	goto T1583;}
	if(((*(LnkLI278))((V665)))!=Cnil){
	goto T1585;}
	V668= Cnil;
	goto T1581;
	goto T1585;
T1585:;
	base[16]= (V665);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk248)();
	vs_top=sup;
	V668= vs_base[0];
	goto T1581;
	goto T1583;
T1583:;
	base[16]= (V665);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk284)(Lclptr284);
	vs_top=sup;
	V668= vs_base[0];
	goto T1581;
T1581:;
	if(((V667))==Cnil){
	goto T1590;}
	{register object x= (VV[151]->s.s_dbind),V670= (V667);
	while(V670!=Cnil)
	if(eql(x,V670->c.c_car)){
	goto T1593;
	}else V670=V670->c.c_cdr;
	goto T1589;}
	goto T1593;
T1593:;
	goto T1590;
T1590:;
	frs_pop();
	base[16]= Cnil;
	vs_top=(vs_base=base+16)+1;
	return;
	goto T1589;
T1589:;
	base[16]= 
	make_cclosure_new(LC162,Cnil,base[14],Cdata);
	base[18]= (V668);
	base[19]= (VV[152]->s.s_dbind);
	vs_top=(vs_base=base+18)+2;
	Lgethash();
	vs_top=sup;
	base[17]= vs_base[0];
	vs_top=(vs_base=base+16)+2;
	Lmaphash();
	vs_top=sup;}
	V664= CMPcdr((V664));
	V665= CMPcar((V664));
	goto T1557;}
	goto T1553;
T1553:;
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
	{object V671;
	object V672;
	check_arg(2);
	V671=(base[0]);
	V672=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V673;
	object V674;
	V673= Ct;
	V674= Cnil;
	{register object V675;
	register object V676;
	if(((*(LnkLI213))((V671)))==Cnil){
	goto T1615;}
	if(type_of(V671)==t_structure){
	goto T1621;}
	goto T1619;
	goto T1621;
T1621:;
	if(!(((V671)->str.str_def)==(VV[154]))){
	goto T1619;}
	V677= STREF(object,(V671),4);
	goto T1617;
	goto T1619;
T1619:;{object V679;
	V679= (VV[73]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V671);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	V680= vs_base[0];
	if(!((V679)==(CMPcar(V680)))){
	goto T1624;}}
	V677= CMPcar(((V671))->cc.cc_turbo[12]);
	goto T1617;
	goto T1624;
T1624:;
	base[4]= VV[74];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V677= vs_base[0];
	goto T1617;
T1617:;
	V675= (V677)->v.v_self[fix((VV[75]->s.s_dbind))];
	goto T1613;
	goto T1615;
T1615:;
	base[4]= (V671);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk216)(Lclptr216);
	vs_top=sup;
	V675= vs_base[0];
	goto T1613;
T1613:;
	V676= CMPcar((V675));
	goto T1633;
T1633:;
	if(!(((V675))==Cnil)){
	goto T1634;}
	goto T1612;
	goto T1634;
T1634:;
	{object V681;
	register object V682;
	register object V683;
	register object V684;
	if(!(type_of((V676))==t_cons)){
	goto T1641;}
	V681= (VFUN_NARGS=2,(*(LnkLI291))((V676),Ct));
	goto T1639;
	goto T1641;
T1641:;
	base[4]= (V676);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V681= vs_base[0];
	goto T1639;
T1639:;
	V682= (V672);
	V683= Ct;
	V684= Ct;
	{register object V685;
	register object V686;
	V685= (V681);
	V686= CMPcar((V685));
	goto T1648;
T1648:;
	if(!(((V685))==Cnil)){
	goto T1649;}
	goto T1644;
	goto T1649;
T1649:;
	{object V687;
	object V688;
	base[5]= (V686);
	{object V689;
	V689= CMPcar((V682));
	V682= CMPcdr((V682));
	base[6]= (V689);}
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk162)();
	if(vs_base>=vs_top){vs_top=sup;goto T1660;}
	V687= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1661;}
	V688= vs_base[0];
	vs_top=sup;
	goto T1662;
	goto T1660;
T1660:;
	V687= Cnil;
	goto T1661;
T1661:;
	V688= Cnil;
	goto T1662;
T1662:;
	if(((V687))!=Cnil){
	goto T1663;}
	V684= Cnil;
	goto T1663;
T1663:;
	if(((V688))!=Cnil){
	goto T1653;}
	V683= Cnil;
	goto T1644;}
	goto T1653;
T1653:;
	V685= CMPcdr((V685));
	V686= CMPcar((V685));
	goto T1648;}
	goto T1644;
T1644:;
	if(((V683))==Cnil){
	goto T1638;}
	if(((V684))!=Cnil){
	goto T1678;}
	V673= Cnil;
	goto T1678;
T1678:;
	V674= make_cons(V676,(V674));}
	goto T1638;
T1638:;
	V675= CMPcdr((V675));
	V676= CMPcar((V675));
	goto T1633;}
	goto T1612;
T1612:;
	{object V691;
	if(((*(LnkLI213))((V671)))==Cnil){
	goto T1691;}
	if(type_of(V671)==t_structure){
	goto T1697;}
	goto T1695;
	goto T1697;
T1697:;
	if(!(((V671)->str.str_def)==(VV[155]))){
	goto T1695;}
	V693= STREF(object,(V671),4);
	goto T1693;
	goto T1695;
T1695:;{object V695;
	V695= (VV[73]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V671);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	V696= vs_base[0];
	if(!((V695)==(CMPcar(V696)))){
	goto T1700;}}
	V693= CMPcar(((V671))->cc.cc_turbo[12]);
	goto T1693;
	goto T1700;
T1700:;
	base[2]= VV[74];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V693= vs_base[0];
	goto T1693;
T1693:;
	V692= (V693)->v.v_self[fix((VV[105]->s.s_dbind))];
	goto T1689;
	goto T1691;
T1691:;
	base[2]= (V671);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk177)(Lclptr177);
	vs_top=sup;
	V692= vs_base[0];
	goto T1689;
T1689:;
	V691= STREF(object,V692,4);
	V697= nreverse((V674));
	base[2]= (*(LnkLI293))((V691),/* INLINE-ARGS */V697,(V672));
	base[3]= (V673);
	vs_top=(vs_base=base+2)+2;
	return;}}
	}
}
/*	local entry for function SORT-APPLICABLE-METHODS	*/

static object LI99(V701,V702,V703)

object V701;object V702;object V703;
{	 VMB93 VMS93 VMV93
	goto TTL;
TTL:;
	base[0]=MMcons((V703),Cnil);
	V704= 
	make_cclosure_new(LC164,Cnil,base[0],Cdata);
	{object V705 = (*(LnkLI294))((V702),(V701),V704);
	VMR93(V705)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SORT-METHODS	*/

static object LI102(V709,V710,V711)

object V709;object V710;object V711;
{	 VMB94 VMS94 VMV94
	goto TTL;
TTL:;
	base[0]=MMcons((V711),Cnil);
	base[1]=MMcons((V710),base[0]);
	base[2]=make_cclosure_new(LC103,Cnil,base[1],Cdata);
	base[2]=MMcons(base[2],base[1]);
	base[3]= (V709);
	base[4]= (base[2]->c.c_car);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk295)();
	vs_top=sup;
	{object V712 = vs_base[0];
	VMR94(V712)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for ORDER-SPECIALIZERS	*/

static void L104()
{register object *base=vs_base;
	register object *sup=base+VM95; VC95
	vs_check;
	{register object V713;
	register object V714;
	object V715;
	object V716;
	check_arg(4);
	V713=(base[0]);
	V714=(base[1]);
	V715=(base[2]);
	V716=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V717;
	register object V718;
	if(!(((VV[79]->s.s_dbind))==(VV[80]))){
	goto T1714;}
	base[4]= (V713);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk296)(Lclptr296);
	vs_top=sup;
	V717= vs_base[0];
	goto T1712;
	goto T1714;
T1714:;
	if(type_of(V713)==t_structure){
	goto T1721;}
	goto T1719;
	goto T1721;
T1721:;
	if(!(((V713)->str.str_def)==(VV[156]))){
	goto T1719;}
	V719= STREF(object,(V713),4);
	goto T1717;
	goto T1719;
T1719:;{object V721;
	V721= (VV[73]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V713);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	V722= vs_base[0];
	if(!((V721)==(CMPcar(V722)))){
	goto T1724;}}
	V719= CMPcar(((V713))->cc.cc_turbo[12]);
	goto T1717;
	goto T1724;
T1724:;
	base[4]= VV[74];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V719= vs_base[0];
	goto T1717;
T1717:;
	V723= (*(LnkLI297))(VV[157],VV[158]);
	V717= (V719)->v.v_self[fix(/* INLINE-ARGS */V723)];
	goto T1712;
T1712:;
	if(!(((VV[79]->s.s_dbind))==(VV[80]))){
	goto T1732;}
	base[4]= (V714);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk296)(Lclptr296);
	vs_top=sup;
	V718= vs_base[0];
	goto T1730;
	goto T1732;
T1732:;
	if(type_of(V714)==t_structure){
	goto T1739;}
	goto T1737;
	goto T1739;
T1739:;
	if(!(((V714)->str.str_def)==(VV[159]))){
	goto T1737;}
	V724= STREF(object,(V714),4);
	goto T1735;
	goto T1737;
T1737:;{object V726;
	V726= (VV[73]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V714);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	V727= vs_base[0];
	if(!((V726)==(CMPcar(V727)))){
	goto T1742;}}
	V724= CMPcar(((V714))->cc.cc_turbo[12]);
	goto T1735;
	goto T1742;
T1742:;
	base[4]= VV[74];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V724= vs_base[0];
	goto T1735;
T1735:;
	V728= (*(LnkLI297))(VV[157],VV[158]);
	V718= (V724)->v.v_self[fix(/* INLINE-ARGS */V728)];
	goto T1730;
T1730:;
	if(!(((V713))==((V714)))){
	goto T1749;}
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1749;
T1749:;
	if(!(type_of((V717))!=t_cons)){
	goto T1752;}
	base[4]= (V714);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1752;
T1752:;
	if(!(type_of((V718))!=t_cons)){
	goto T1755;}
	base[4]= (V713);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1755;
T1755:;
	{object V729= CMPcar((V717));
	if((V729!= VV[8]))goto T1757;
	{object V730= CMPcar((V718));
	if((V730!= VV[8]))goto T1758;
	base[4]= (V713);
	base[5]= (V714);
	base[6]= (V715);
	vs_top=(vs_base=base+4)+3;
	{object _funobj = (V716);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1758;
T1758:;
	base[4]= (V714);
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1757;
T1757:;
	if((V729!= VV[298]))goto T1762;
	{object V731= CMPcar((V718));
	if((V731!= VV[8]))goto T1763;
	base[4]= (V713);
	base[5]= (V714);
	base[6]= (V715);
	vs_top=(vs_base=base+4)+3;
	{object _funobj = (V716);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1763;
T1763:;
	base[4]= (V714);
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1762;
T1762:;
	if((V729!= VV[146]))goto T1767;
	{object V732= CMPcar((V718));
	if((V732!= VV[163]))goto T1768;
	base[4]= (V714);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1768;
T1768:;
	if((V732!= VV[146]))goto T1769;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1769;
T1769:;
	if((V732!= VV[8]))goto T1770;
	base[4]= (V717);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1770;
T1770:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1767;
T1767:;
	if((V729!= VV[163]))goto T1771;
	{object V733= CMPcar((V718));
	if((V733!= VV[163]))goto T1772;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T1772;
T1772:;
	base[4]= (V713);
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T1771;
T1771:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}}
	}
}
/*	local entry for function MAP-ALL-ORDERS	*/

static object LI105(V737,V738,V739)

object V737;object V738;object V739;
{	 VMB96 VMS96 VMV96
	goto TTL;
TTL:;
	base[0]=MMcons(Cnil,Cnil);
	base[1]=make_cclosure_new(LC106,Cnil,base[0],Cdata);
	base[1]=MMcons(base[1],base[0]);
	goto T1774;
T1774:;
	V740= (base[1]->c.c_car);
	V741= (*(LnkLI294))((V737),(V738),V740);
	(void)((
	(type_of((V739)) == t_sfun ?(*(((V739))->sfn.sfn_self)):
	(fcall.argd=1,type_of((V739))==t_vfun) ?
	(*(((V739))->sfn.sfn_self)):
	(fcall.fun=((V739)),fcalln))(/* INLINE-ARGS */V741)));
	{register object V742;
	register object V743;
	V742= (base[0]->c.c_car);
	V743= CMPcar((V742));
	goto T1783;
T1783:;
	if(!(((V742))==Cnil)){
	goto T1784;}
	goto T1779;
	goto T1784;
T1784:;
	if((CMPcaddr((V743)))!=Cnil){
	goto T1788;}
	{register object V744;
	register object V745;
	register object V746;
	register object V747;
	V744= (V743);
	V745= (V743);
	V746= CMPcadr((V745));
	V747= CMPcar((V744));
	((V744))->c.c_car = (V746);
	(CMPcdr((V745)))->c.c_car = (V747);
	(void)(CMPcdr((V745)));}
	{register object V749;
	V749= Ct;
	(CMPcddr(V743))->c.c_car = (V749);
	(void)(CMPcddr(V743));
	if(((V749))!=Cnil){
	goto T1775;}
	goto T1779;}
	goto T1788;
T1788:;
	V742= CMPcdr((V742));
	V743= CMPcar((V742));
	goto T1783;}
	goto T1779;
T1779:;
	{object V750 = Cnil;
	VMR96(V750)}
	goto T1775;
T1775:;
	goto T1774;
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLASS-MIGHT-PRECEDE-P	*/

static object LI107(V753,V754)

object V753;object V754;
{	 VMB97 VMS97 VMV97
	goto TTL;
TTL:;
	if(((VV[160]->s.s_dbind))!=Cnil){
	goto T1809;}
	base[0]= (V754);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V757= vs_base[0];
	{register object x= (V753),V756= CMPcdr(V757);
	while(V756!=Cnil)
	if(eql(x,V756->c.c_car)){
	V755= V756;
	goto T1811;
	}else V756=V756->c.c_cdr;
	V755= Cnil;}
	goto T1811;
T1811:;
	{object V758 = ((V755)==Cnil?Ct:Cnil);
	VMR97(V758)}
	goto T1809;
T1809:;
	{object V759 = (*(LnkLI299))((V753),(V754));
	VMR97(V759)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COMPUTE-PRECEDENCE	*/

static object LI108(V763,V764,V765)

object V763;register object V764;object V765;
{	 VMB98 VMS98 VMV98
	goto TTL;
TTL:;
	if(((V765))!=Cnil){
	goto T1815;}
	{register object V766;
	V766= Cnil;
	{register long V767;
	register long V768;
	V767= fix((V764));
	V768= 0;
	goto T1820;
T1820:;
	if(!((V768)>=(V767))){
	goto T1821;}
	{object V769 = (V766);
	VMR98(V769)}
	goto T1821;
T1821:;
	{register object V770;
	V771= one_minus((V764));
	V772 = CMPmake_fixnum(V768);
	V770= number_minus(/* INLINE-ARGS */V771,V772);
	V766= make_cons((V770),(V766));}
	V768= (long)(V768)+1;
	goto T1820;}}
	goto T1815;
T1815:;
	{object V773;
	object V774= (V765);
	if(V774==Cnil){
	{object V775 = Cnil;
	VMR98(V775)}}
	base[0]=V773=MMcons(Cnil,Cnil);
	goto T1830;
T1830:;
	base[1]= (V774->c.c_car);
	base[2]= (V763);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk300)();
	vs_top=sup;
	(V773->c.c_car)= vs_base[0];
	if((V774=MMcdr(V774))==Cnil){
	{object V777 = base[0];
	VMR98(V777)}}
	V773=MMcdr(V773)=MMcons(Cnil,Cnil);
	goto T1830;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SAUT-AND	*/

static void L109()
{register object *base=vs_base;
	register object *sup=base+VM99; VC99
	vs_check;
	{object V778;
	object V779;
	check_arg(2);
	V778=(base[0]);
	V779=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V780;
	register object V781;
	V780= Cnil;
	V781= Ct;
	{register object V782;
	register object V783;
	V782= CMPcdr((V779));
	V783= CMPcar((V782));
	goto T1838;
T1838:;
	if(!(((V782))==Cnil)){
	goto T1839;}
	goto T1834;
	goto T1839;
T1839:;
	{register object V784;
	register object V785;
	base[4]= (V778);
	base[5]= (V783);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk162)();
	if(vs_base>=vs_top){vs_top=sup;goto T1847;}
	V784= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1848;}
	V785= vs_base[0];
	vs_top=sup;
	goto T1849;
	goto T1847;
T1847:;
	V784= Cnil;
	goto T1848;
T1848:;
	V785= Cnil;
	goto T1849;
T1849:;
	if(((V784))==Cnil){
	goto T1850;}
	V780= Ct;
	goto T1834;
	goto T1850;
T1850:;
	if(((V785))!=Cnil){
	goto T1843;}
	V781= Cnil;
	goto T1834;}
	goto T1843;
T1843:;
	V782= CMPcdr((V782));
	V783= CMPcar((V782));
	goto T1838;}
	goto T1834;
T1834:;
	base[2]= (V780);
	base[3]= (V781);
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	function definition for SAUT-NOT	*/

static void L110()
{register object *base=vs_base;
	register object *sup=base+VM100; VC100
	vs_check;
	{register object V786;
	object V787;
	check_arg(2);
	V786=(base[0]);
	V787=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V788;
	V788= CMPcadr((V787));
	base[2]= Cnil;
	{object V789= CMPcar((V788));
	if((V789!= VV[8]))goto T1867;
	base[3]= (*(LnkLI301))((V786),(V788));
	goto T1866;
	goto T1867;
T1867:;
	if((V789!= VV[146]))goto T1868;
	base[3]= (*(LnkLI302))((V786),(V788));
	goto T1866;
	goto T1868;
T1868:;
	if((V789!= VV[298]))goto T1869;
	base[3]= (*(LnkLI303))((V786),(V788));
	goto T1866;
	goto T1869;
T1869:;
	if((V789!= VV[163]))goto T1870;
	base[3]= (*(LnkLI304))((V786),(V788));
	goto T1866;
	goto T1870;
T1870:;
	base[4]= VV[161];
	base[5]= VV[162];
	base[6]= (V787);
	vs_top=(vs_base=base+4)+3;
	Lerror();
	vs_top=sup;
	base[3]= vs_base[0];}
	goto T1866;
T1866:;
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	local entry for function SAUT-NOT-CLASS	*/

static object LI111(V792,V793)

object V792;object V793;
{	 VMB101 VMS101 VMV101
	goto TTL;
TTL:;
	{object V794;
	object V795;
	V794= (*(LnkLI305))((V792));
	base[2]= (V794);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V795= vs_base[0];
	{register object x= CMPcadr((V793)),V797= (V795);
	while(V797!=Cnil)
	if(x==(V797->c.c_car)){
	V796= V797;
	goto T1877;
	}else V797=V797->c.c_cdr;
	V796= Cnil;}
	goto T1877;
T1877:;
	{object V798 = ((V796)==Cnil?Ct:Cnil);
	VMR101(V798)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SAUT-NOT-PROTOTYPE	*/

static object LI112(V801,V802)

register object V801;object V802;
{	 VMB102 VMS102 VMV102
	goto TTL;
TTL:;
	{object V803;
	object V804;
	{object V805= CMPcar((V801));
	if((V805!= VV[163]))goto T1879;
	V803= (*(LnkLI306))(CMPcadr((V801)));
	goto T1878;
	goto T1879;
T1879:;
	if((V805!= VV[146]))goto T1880;
	V803= CMPcadr((V801));
	goto T1878;
	goto T1880;
T1880:;
	if((V805!= VV[298]))goto T1881;
	V803= CMPcadr((V801));
	goto T1878;
	goto T1881;
T1881:;
	if((V805!= VV[8]))goto T1882;
	V803= CMPcadr((V801));
	goto T1878;
	goto T1882;
T1882:;
	V803= Cnil;}
	goto T1878;
T1878:;
	base[2]= (V803);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V804= vs_base[0];
	{register object x= CMPcadr((V802)),V807= (V804);
	while(V807!=Cnil)
	if(x==(V807->c.c_car)){
	V806= V807;
	goto T1885;
	}else V807=V807->c.c_cdr;
	V806= Cnil;}
	goto T1885;
T1885:;
	{object V808 = ((V806)==Cnil?Ct:Cnil);
	VMR102(V808)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SAUT-NOT-CLASS-EQ	*/

static object LI113(V811,V812)

object V811;object V812;
{	 VMB103 VMS103 VMV103
	goto TTL;
TTL:;
	{object V813;
	{object V814= CMPcar((V811));
	if((V814!= VV[163]))goto T1887;
	V813= (*(LnkLI306))(CMPcadr((V811)));
	goto T1886;
	goto T1887;
T1887:;
	if((V814!= VV[146]))goto T1888;
	V813= CMPcadr((V811));
	goto T1886;
	goto T1888;
T1888:;
	V813= Cnil;}
	goto T1886;
T1886:;
	{object V815 = (((((V813))==(CMPcadr((V812)))?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR103(V815)}}
	return Cnil;
}
/*	local entry for function SAUT-NOT-EQL	*/

static object LI114(V818,V819)

object V818;object V819;
{	 VMB104 VMS104 VMV104
	goto TTL;
TTL:;
	{object V820= CMPcar((V818));
	if((V820!= VV[163]))goto T1889;
	{object V821 = (((eql(CMPcadr((V818)),CMPcadr((V819)))?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR104(V821)}
	goto T1889;
T1889:;
	{object V822 = Ct;
	VMR104(V822)}}
	return Cnil;
}
/*	function definition for CLASS-APPLICABLE-USING-CLASS-P	*/

static void L115()
{register object *base=vs_base;
	register object *sup=base+VM105; VC105
	vs_check;
	{object V823;
	register object V824;
	check_arg(2);
	V823=(base[0]);
	V824=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V825;
	if(!(((VV[79]->s.s_dbind))==(VV[80]))){
	goto T1893;}
	base[2]= (V824);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V827= vs_base[0];
	goto T1891;
	goto T1893;
T1893:;
	V827= (*(LnkLI279))((V824));
	goto T1891;
T1891:;
	{register object x= (V823),V826= V827;
	while(V826!=Cnil)
	if(x==(V826->c.c_car)){
	V825= V826;
	goto T1890;
	}else V826=V826->c.c_cdr;
	V825= Cnil;}
	goto T1890;
T1890:;
	base[2]= (V825);
	if((V825)!=Cnil){
	base[3]= (V825);
	goto T1897;}
	if(((VV[160]->s.s_dbind))!=Cnil){
	goto T1899;}
	base[3]= (*(LnkLI307))((V823),(V824));
	goto T1897;
	goto T1899;
T1899:;
	base[3]= (*(LnkLI308))((V823),(V824));
	goto T1897;
T1897:;
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	local entry for function CLASSES-HAVE-COMMON-SUBCLASS-P	*/

static object LI116(V830,V831)

object V830;register object V831;
{	 VMB106 VMS106 VMV106
	goto TTL;
TTL:;
	if(!(((V830))==((V831)))){
	goto T1901;}
	{object V832 = Ct;
	VMR106(V832)}
	goto T1901;
T1901:;
	{object V833;
	base[0]= (V830);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk309)(Lclptr309);
	vs_top=sup;
	V833= vs_base[0];{object V834;
	{register object x= (V831),V835= (V833);
	while(V835!=Cnil)
	if(x==(V835->c.c_car)){
	V834= V835;
	goto T1906;
	}else V835=V835->c.c_cdr;
	V834= Cnil;}
	goto T1906;
T1906:;
	if(V834==Cnil)goto T1905;
	{object V836 = V834;
	VMR106(V836)}
	goto T1905;
T1905:;}
	{register object V837;
	register object V838;
	V837= (V833);
	V838= CMPcar((V837));
	goto T1910;
T1910:;
	if(!(((V837))==Cnil)){
	goto T1911;}
	{object V839 = Cnil;
	VMR106(V839)}
	goto T1911;
T1911:;
	if(((*(LnkLI308))((V838),(V831)))==Cnil){
	goto T1915;}
	{object V840 = Ct;
	VMR106(V840)}
	goto T1915;
T1915:;
	V837= CMPcdr((V837));
	V838= CMPcar((V837));
	goto T1910;}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for SAUT-CLASS	*/

static void L117()
{register object *base=vs_base;
	register object *sup=base+VM107; VC107
	vs_check;
	{object V841;
	object V842;
	check_arg(2);
	V841=(base[0]);
	V842=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V843= CMPcar((V841));
	if((V843!= VV[8]))goto T1923;
	base[2]= CMPcadr((V841));
	base[3]= CMPcadr((V842));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk310)();
	return;
	goto T1923;
T1923:;
	base[2]= Cnil;
	{object V844;
	V844= (*(LnkLI305))((V841));
	V846= CMPcadr((V842));
	base[4]= (V844);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V847= vs_base[0];
	{register object x= /* INLINE-ARGS */V846,V845= V847;
	while(V845!=Cnil)
	if(x==(V845->c.c_car)){
	base[3]= V845;
	goto T1927;
	}else V845=V845->c.c_cdr;
	base[3]= Cnil;}}
	goto T1927;
T1927:;
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	function definition for SAUT-CLASS-EQ	*/

static void L118()
{register object *base=vs_base;
	register object *sup=base+VM108; VC108
	vs_check;
	{register object V848;
	register object V849;
	check_arg(2);
	V848=(base[0]);
	V849=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((CMPcar((V848)))==(VV[163]))){
	goto T1932;}
	base[2]= Cnil;
	V850= (*(LnkLI306))(CMPcadr((V848)));
	base[3]= ((/* INLINE-ARGS */V850)==(CMPcadr((V849)))?Ct:Cnil);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1932;
T1932:;
	{object V851;
	{object V852= CMPcar((V848));
	if((V852!= VV[146]))goto T1937;
	V851= ((CMPcadr((V848)))==(CMPcadr((V849)))?Ct:Cnil);
	goto T1936;
	goto T1937;
T1937:;
	if((V852!= VV[8]))goto T1938;
	if(!((CMPcadr((V848)))==(CMPcadr((V849))))){
	goto T1939;}
	V851= Ct;
	goto T1936;
	goto T1939;
T1939:;
	V854= CMPcadr((V848));
	if(!(((VV[79]->s.s_dbind))==(VV[80]))){
	goto T1943;}
	base[2]= CMPcadr((V849));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V855= vs_base[0];
	goto T1941;
	goto T1943;
T1943:;
	V855= (*(LnkLI279))(CMPcadr((V849)));
	goto T1941;
T1941:;
	{register object x= /* INLINE-ARGS */V854,V853= V855;
	while(V853!=Cnil)
	if(x==(V853->c.c_car)){
	V851= V853;
	goto T1936;
	}else V853=V853->c.c_cdr;
	V851= Cnil;
	goto T1936;}
	goto T1938;
T1938:;
	V851= Cnil;}
	goto T1936;
T1936:;
	base[2]= (V851);
	base[3]= (V851);
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	function definition for SAUT-PROTOTYPE	*/

static void L119()
{register object *base=vs_base;
	register object *sup=base+VM109; VC109
	vs_check;
	{object V856;
	object V857;
	check_arg(2);
	V856=(base[0]);
	V857=(base[1]);
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
	{register object V858;
	object V859;
	check_arg(2);
	V858=(base[0]);
	V859=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V860;
	{object V861= CMPcar((V858));
	if((V861!= VV[163]))goto T1951;
	V860= (eql(CMPcadr((V858)),CMPcadr((V859)))?Ct:Cnil);
	goto T1950;
	goto T1951;
T1951:;
	if((V861!= VV[146]))goto T1952;
	V862= CMPcadr((V858));
	V863= (*(LnkLI306))(CMPcadr((V859)));
	V860= ((/* INLINE-ARGS */V862)==(/* INLINE-ARGS */V863)?Ct:Cnil);
	goto T1950;
	goto T1952;
T1952:;
	if((V861!= VV[8]))goto T1953;
	V865= CMPcadr((V858));
	{object V867;
	V867= (*(LnkLI306))(CMPcadr((V859)));
	if(!(((VV[79]->s.s_dbind))==(VV[80]))){
	goto T1957;}
	base[2]= (V867);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V866= vs_base[0];
	goto T1954;
	goto T1957;
T1957:;
	V866= (*(LnkLI279))((V867));}
	goto T1954;
T1954:;
	{register object x= /* INLINE-ARGS */V865,V864= V866;
	while(V864!=Cnil)
	if(x==(V864->c.c_car)){
	V860= V864;
	goto T1950;
	}else V864=V864->c.c_cdr;
	V860= Cnil;
	goto T1950;}
	goto T1953;
T1953:;
	V860= Cnil;}
	goto T1950;
T1950:;
	base[2]= (V860);
	base[3]= (V860);
	vs_top=(vs_base=base+2)+2;
	return;}
	}
}
/*	function definition for SPECIALIZER-APPLICABLE-USING-TYPE-P	*/

static void L121()
{register object *base=vs_base;
	register object *sup=base+VM111; VC111
	vs_check;
	{register object V868;
	register object V869;
	check_arg(2);
	V868=(base[0]);
	V869=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V868);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk311)();
	vs_top=sup;
	V868= vs_base[0];
	if(!(((V868))==(Ct))){
	goto T1965;}
	base[2]= Ct;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1965;
T1965:;
	if(type_of((V869))!=t_cons){
	goto T1970;}
	if(!((CMPcar((V869)))==(Ct))){
	goto T1971;}
	goto T1970;
T1970:;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	goto T1971;
T1971:;
	{object V870= CMPcar((V869));
	if((V870!= VV[96]))goto T1977;
	base[2]= (V868);
	base[3]= (V869);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk312)();
	return;
	goto T1977;
T1977:;
	if((V870!= VV[97]))goto T1980;
	base[2]= (V868);
	base[3]= (V869);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk313)();
	return;
	goto T1980;
T1980:;
	if((V870!= VV[8]))goto T1983;
	base[2]= (V868);
	base[3]= (V869);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk314)();
	return;
	goto T1983;
T1983:;
	if((V870!= VV[298]))goto T1986;
	base[2]= (V868);
	base[3]= (V869);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk315)();
	return;
	goto T1986;
T1986:;
	if((V870!= VV[146]))goto T1989;
	base[2]= (V868);
	base[3]= (V869);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk316)();
	return;
	goto T1989;
T1989:;
	if((V870!= VV[163]))goto T1992;
	base[2]= (V868);
	base[3]= (V869);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk317)();
	return;
	goto T1992;
T1992:;
	base[2]= VV[164];
	base[3]= VV[162];
	base[4]= (V869);
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
	{register object V871;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T1998;}
	V871=(base[1]);
	vs_top=sup;
	goto T1999;
	goto T1998;
T1998:;
	V871= Ct;
	goto T1999;
T1999:;
	if(!(((VV[79]->s.s_dbind))==(VV[165]))){
	goto T2002;}
	base[2]= Ct;
	goto T2001;
	goto T2002;
T2002:;
	base[2]= (((VV[79]->s.s_dbind))==(VV[80])?Ct:Cnil);
	goto T2001;
T2001:;
	if(!(type_of((V871))==t_symbol)){
	goto T2006;}
	base[3]= (VFUN_NARGS=1,(*(LnkLI318))((V871)));
	goto T2004;
	goto T2006;
T2006:;
	base[3]= (V871);
	goto T2004;
T2004:;
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
	{object V872;
	object V873;
	object V874;
	object V875;
	object V876;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>5) too_many_arguments();
	V872=(base[0]);
	V873=(base[1]);
	V874=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T2008;}
	V875=(base[3]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2009;}
	V876=(base[4]);
	vs_top=sup;
	goto T2010;
	goto T2008;
T2008:;
	V875= Cnil;
	goto T2009;
T2009:;
	V876= Cnil;
	goto T2010;
T2010:;
	V877= (((((V875))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	V878= (((((V876))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	V879= (*(LnkLI230))((V873));
	base[5]= (VFUN_NARGS=6,(*(LnkLI233))((V872),(V873),(V874),/* INLINE-ARGS */V877,/* INLINE-ARGS */V878,((/* INLINE-ARGS */V879)==Cnil?Ct:Cnil)));
	base[6]= (V875);
	base[7]= (V876);
	vs_top=(vs_base=base+6)+2;
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local entry for function GET-SECONDARY-DISPATCH-FUNCTION1	*/

static object LI125(object V884,object V883,object V882,object V881,object V880,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB114 VMS114 VMV114
	{register object V885;
	object V886;
	register object V887;
	register object V888;
	register object V889;
	object V890;
	register object V891;
	va_start(ap,first);
	if(narg <5) too_few_arguments();
	Vcs[0]=MMcons(V884,Cnil);
	V885= V883;
	V886= V882;
	V887= V881;
	V888= V880;
	narg = narg - 5;
	if (narg <= 0) goto T2016;
	else {
	V889= first;}
	if (--narg <= 0) goto T2017;
	else {
	V890= va_arg(ap,object);}
	if (--narg <= 0) goto T2018;
	else {
	V891= va_arg(ap,object);}
	--narg; goto T2019;
	goto T2016;
T2016:;
	V889= Cnil;
	goto T2017;
T2017:;
	V890= Ct;
	goto T2018;
T2018:;
	V891= Cnil;
	goto T2019;
T2019:;
	if(((V885))!=Cnil){
	goto T2024;}
	if(((V891))==Cnil){
	goto T2027;}
	{object V892 = 
	make_cclosure_new(LC165,Cnil,Vcs[0],Cdata);
	VMR114(V892)}
	goto T2027;
T2027:;
	{object V893 = 
	make_cclosure_new(LC166,Cnil,Vcs[0],Cdata);
	VMR114(V893)}
	goto T2024;
T2024:;
	{object V894;
	register object V895;
	V894= CMPcar((V885));{object V896;
	base[2]= (V894);
	base[3]= (VV[166]->s.s_dbind);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V896= vs_base[0];
	if(V896==Cnil)goto T2031;
	V895= V896;
	goto T2030;
	goto T2031;
T2031:;}
	{object V898;
	object V899;
	V898= (VV[166]->s.s_dbind);
	V899= make_cons(Cnil,Cnil);
	base[3]= V894;
	base[4]= (V898);
	base[5]= (V899);
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;
	V895= vs_base[0];}
	goto T2030;
T2030:;
	if((CMPcdr((V885)))!=Cnil){
	goto T2041;}
	if(((V889))==Cnil){
	goto T2041;}
	if(((V887))!=Cnil){
	goto T2041;}
	if(((V888))==Cnil){
	goto T2041;}
	if(((V891))!=Cnil){
	goto T2041;}{object V900;
	V900= CMPcar((V895));
	if(V900==Cnil)goto T2051;
	{object V901 = V900;
	VMR114(V901)}
	goto T2051;
T2051:;}
	{object V903;
	V903= (*(LnkLI319))((Vcs[0]->c.c_car),(V885),(V886),(V887),(V888),(V889),(V890),(V891));
	(V895)->c.c_car = (V903);
	{object V904 = (V903);
	VMR114(V904)}}
	goto T2041;
T2041:;
	{object V905;
	if(((V889))==Cnil){
	goto T2058;}
	V906= VV[167];
	goto T2056;
	goto T2058;
T2058:;
	V906= (V886);
	goto T2056;
T2056:;
	V905= list(5,(V885),V906,(V887),(V888),(V891));{object V907;
	{register object x= (V905),V909= CMPcdr((V895));
	while(V909!=Cnil)
	if(equal(x,V909->c.c_car->c.c_car) &&V909->c.c_car != Cnil){
	V908= (V909->c.c_car);
	goto T2062;
	}else V909=V909->c.c_cdr;
	V908= Cnil;}
	goto T2062;
T2062:;
	V907= CMPcdr(V908);
	if(V907==Cnil)goto T2060;
	{object V910 = V907;
	VMR114(V910)}
	goto T2060;
T2060:;}
	{object V911;
	V911= (*(LnkLI319))((Vcs[0]->c.c_car),(V885),(V886),(V887),(V888),(V889),(V890),(V891));
	{object V912;
	object V914;
	V912= make_cons((V905),(V911));
	V914= make_cons((V912),CMPcdr(V895));
	(V895)->c.c_cdr = (V914);}
	{object V915 = (V911);
	VMR114(V915)}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function GET-SECONDARY-DISPATCH-FUNCTION2	*/

static object LI126(V924,V925,V926,V927,V928,V929,V930,V931)

register object V924;object V925;object V926;object V927;object V928;object V929;object V930;object V931;
{	 VMB115 VMS115 VMV115
	goto TTL;
TTL:;
	if(((V929))==Cnil){
	goto T2069;}
	if(((V930))==Cnil){
	goto T2069;}
	if(((V931))!=Cnil){
	goto T2069;}
	if(!(((VV[79]->s.s_dbind))==(VV[80]))){
	goto T2076;}
	{object V932;
	object V933;
	base[2]= (V924);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk320)(Lclptr320);
	vs_top=sup;
	V932= vs_base[0];
	V933= (*(LnkLI321))((V924),(V932),(V925));
	{object V934 = (*(LnkLI322))((V924),(V933),(V927),(V928));
	VMR115(V934)}}
	goto T2076;
T2076:;
	{object V935;
	V935= (*(LnkLI323))((V924),Cnil,(V925));
	{object V936 = (*(LnkLI322))((V924),(V935),(V927),(V928));
	VMR115(V936)}}
	goto T2069;
T2069:;
	{object V937;
	base[0]= (V924);
	base[1]= (V925);
	base[2]= (V926);
	base[3]= (V930);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk324)();
	vs_top=sup;
	V937= vs_base[0];
	{object V938 = (VFUN_NARGS=3,(*(LnkLI325))((V924),(V937),(V931)));
	VMR115(V938)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for GET-EFFECTIVE-METHOD-FUNCTION	*/

static void L127()
{register object *base=vs_base;
	register object *sup=base+VM116; VC116
	vs_check;
	{object V939;
	object V940;
	object V941;
	object V942;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V939=(base[0]);
	V940=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2087;}
	V941=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2088;}
	V942=(base[3]);
	vs_top=sup;
	goto T2089;
	goto T2087;
T2087:;
	V941= Cnil;
	goto T2088;
T2088:;
	V942= Cnil;
	goto T2089;
T2089:;
	base[4]= (VFUN_NARGS=6,(*(LnkLI233))((V939),(V940),Cnil,(((((V941))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil),(((((V942))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil),Ct));
	base[5]= (V941);
	base[6]= (V942);
	vs_top=(vs_base=base+5)+2;
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local entry for function GET-EFFECTIVE-METHOD-FUNCTION1	*/

static object LI128(object V944,object V943,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB117 VMS117 VMV117
	{object V945;
	object V946;
	object V947;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V945= V944;
	V946= V943;
	narg = narg - 2;
	if (narg <= 0) goto T2095;
	else {
	V947= first;}
	--narg; goto T2096;
	goto T2095;
T2095:;
	V947= Ct;
	goto T2096;
T2096:;
	{object V948 = (VFUN_NARGS=7,(*(LnkLI233))((V945),(V946),Cnil,Cnil,Cnil,Ct,(V947)));
	VMR117(V948)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function METHODS-CONTAIN-EQL-SPECIALIZER-P	*/

static object LI129(V950)

object V950;
{	 VMB118 VMS118 VMV118
	goto TTL;
TTL:;
	if(((VV[79]->s.s_dbind))==(VV[80])){
	goto T2098;}
	{object V951 = Cnil;
	VMR118(V951)}
	goto T2098;
T2098:;
	{register object V952;
	register object V953;
	V952= (V950);
	V953= CMPcar((V952));
	goto T2103;
T2103:;
	if(!(((V952))==Cnil)){
	goto T2104;}
	{object V954 = Cnil;
	VMR118(V954)}
	goto T2104;
T2104:;
	{register object V955;
	register object V956;
	base[3]= (V953);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V955= vs_base[0];
	V956= CMPcar((V955));
	goto T2115;
T2115:;
	if(!(((V955))==Cnil)){
	goto T2116;}
	goto T2108;
	goto T2116;
T2116:;
	base[3]= (V956);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk326)(Lclptr326);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2120;}
	goto T2110;
	goto T2120;
T2120:;
	V955= CMPcdr((V955));
	V956= CMPcar((V955));
	goto T2115;}
	goto T2110;
T2110:;
	{object V957 = Ct;
	VMR118(V957)}
	goto T2108;
T2108:;
	V952= CMPcdr((V952));
	V953= CMPcar((V952));
	goto T2103;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UPDATE-DFUN	*/

static object LI130(object V958,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB119 VMS119 VMV119
	{register object V959;
	object V960;
	object V961;
	object V962;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V959= V958;
	narg = narg - 1;
	if (narg <= 0) goto T2134;
	else {
	V960= first;}
	if (--narg <= 0) goto T2135;
	else {
	V961= va_arg(ap,object);}
	if (--narg <= 0) goto T2136;
	else {
	V962= va_arg(ap,object);}
	--narg; goto T2137;
	goto T2134;
T2134:;
	V960= Cnil;
	goto T2135;
T2135:;
	V961= Cnil;
	goto T2136;
T2136:;
	V962= Cnil;
	goto T2137;
T2137:;
	{object V963;
	object V964;
	object V965;
	V963= (*(LnkLI213))((V959));
	if(((V963))==Cnil){
	goto T2144;}
	V964= (*(LnkLI327))((V959));
	goto T2142;
	goto T2144;
T2144:;
	base[3]= (V959);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk178)(Lclptr178);
	vs_top=sup;
	V964= vs_base[0];
	goto T2142;
T2142:;
	V965= (*(LnkLI237))((V959));
	(void)((VFUN_NARGS=4,(*(LnkLI247))((V959),(V960),(V961),(V962))));
	{object V966;
	if(((V963))==Cnil){
	goto T2151;}
	if((V960)!=Cnil){
	V966= (V960);
	goto T2149;}
	V966= (*(LnkLI328))((V959));
	goto T2149;
	goto T2151;
T2151:;
	base[3]= (V959);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk329)(Lclptr329);
	vs_top=sup;
	V966= vs_base[0];
	goto T2149;
T2149:;
	(void)((*(LnkLI330))((V959),(V966)));
	if(((V965))==Cnil){
	goto T2155;}
	if(((V965))==((V961))){
	goto T2155;}
	(void)((*(LnkLI331))((V965)));
	goto T2155;
T2155:;
	{object V967 = (V966);
	VMR119(V967)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LIST-DFUN	*/

static object LI131(V969)

object V969;
{	 VMB120 VMS120 VMV120
	goto TTL;
TTL:;
	{object V970;
	object V971;
	base[2]= (*(LnkLI235))((V969));
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V970= vs_base[0];
	{register object x= (V970),V972= (VV[168]->s.s_dbind);
	while(V972!=Cnil)
	if(EQ(x,V972->c.c_car->c.c_car) &&V972->c.c_car != Cnil){
	V971= (V972->c.c_car);
	goto T2162;
	}else V972=V972->c.c_cdr;
	V971= Cnil;}
	goto T2162;
T2162:;
	if(((V971))!=Cnil){
	goto T2163;}
	{object V973;
	V971= make_cons((V970),Cnil);
	V973= (V971);
	(VV[168]->s.s_dbind)= make_cons((V973),(VV[168]->s.s_dbind));}
	goto T2163;
T2163:;
	{object V974;
	object V976;
	base[4]= (V969);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk178)(Lclptr178);
	vs_top=sup;
	V974= vs_base[0];
	V976= make_cons((V974),CMPcdr(V971));
	(V971)->c.c_cdr = (V976);
	{object V977 = (V976);
	VMR120(V977)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LIST-ALL-DFUNS	*/

static object LI132()

{	 VMB121 VMS121 VMV121
	goto TTL;
TTL:;
	(VV[168]->s.s_dbind)= Cnil;
	V978= (VV[333]->s.s_gfdef);
	(void)((*(LnkLI332))(V978));
	{object V979 = (VV[168]->s.s_dbind);
	VMR121(V979)}
	return Cnil;
}
/*	local entry for function LIST-LARGE-CACHE	*/

static object LI133(V981)

object V981;
{	 VMB122 VMS122 VMV122
	goto TTL;
TTL:;
	{object V982;
	object V983;
	base[2]= (*(LnkLI235))((V981));
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V982= vs_base[0];
	V983= (*(LnkLI237))((V981));
	if(((V983))==Cnil){
	goto T2181;}
	{object V984;
	V984= CMPmake_fixnum((long)STREF(fixnum,(V983),28));
	if(!(number_compare((V984),(VV[170]->s.s_dbind))>=0)){
	goto T2185;}
	{object V985;
	{register object x= (V984),V986= (VV[168]->s.s_dbind);
	while(V986!=Cnil)
	if(eql(x,V986->c.c_car->c.c_car) &&V986->c.c_car != Cnil){
	V985= (V986->c.c_car);
	goto T2187;
	}else V986=V986->c.c_cdr;
	V985= Cnil;}
	goto T2187;
T2187:;
	if(((V985))!=Cnil){
	goto T2188;}
	{object V987;
	V985= make_cons((V984),Cnil);
	V987= (V985);
	(VV[168]->s.s_dbind)= make_cons((V987),(VV[168]->s.s_dbind));}
	goto T2188;
T2188:;
	{object V988;
	object V990;
	{object V991;
	base[4]= (V981);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk178)(Lclptr178);
	vs_top=sup;
	V991= vs_base[0];
	if(!(((V982))==(VV[11]))){
	goto T2198;}
	V988= (V991);
	goto T2194;
	goto T2198;
T2198:;
	V988= list(2,(V991),(V982));}
	goto T2194;
T2194:;
	V990= make_cons((V988),CMPcdr(V985));
	(V985)->c.c_cdr = (V990);
	{object V992 = (V990);
	VMR122(V992)}}}
	goto T2185;
T2185:;
	{object V993 = Cnil;
	VMR122(V993)}}
	goto T2181;
T2181:;
	{object V994 = Cnil;
	VMR122(V994)}}
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
	if(vs_base>=vs_top){vs_top=sup;goto T2202;}
	bds_bind(VV[170],base[0]);
	vs_top=sup;
	goto T2203;
	goto T2202;
T2202:;
	bds_bind(VV[170],small_fixnum(130));
	goto T2203;
T2203:;
	(VV[168]->s.s_dbind)= Cnil;
	V995= (VV[334]->s.s_gfdef);
	(void)((*(LnkLI332))(V995));
	base[1]= (VV[168]->s.s_dbind);
	base[2]= (VV[335]->s.s_gfdef);
	base[3]= VV[171];
	base[4]= (VV[336]->s.s_gfdef);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk337)();
	vs_top=sup;
	(VV[168]->s.s_dbind)= vs_base[0];
	base[1]= (VV[168]->s.s_dbind);
	{
	object V996= base[1];
	if(V996==Cnil){
	goto T2215;}
	goto T2216;
T2216:;
	(void)(print((V996->c.c_car),Cnil));
	if((V996=MMcdr(V996))==Cnil){
	goto T2215;}
	goto T2216;}
	goto T2215;
T2215:;
	vs_base=vs_top=base+1;
	vs_base[0]=Cnil;
	bds_unwind1;
	return;
}
/*	local entry for function COUNT-DFUN	*/

static object LI135(V998)

object V998;
{	 VMB124 VMS124 VMV124
	goto TTL;
TTL:;
	{object V999;
	object V1000;
	register object V1001;
	base[3]= (*(LnkLI235))((V998));
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V999= vs_base[0];
	V1000= (*(LnkLI237))((V998));
	{register object x= (V999),V1002= (VV[172]->s.s_dbind);
	while(V1002!=Cnil)
	if(EQ(x,V1002->c.c_car->c.c_car) &&V1002->c.c_car != Cnil){
	V1001= (V1002->c.c_car);
	goto T2221;
	}else V1002=V1002->c.c_cdr;
	V1001= Cnil;}
	goto T2221;
T2221:;
	if(((V1001))!=Cnil){
	goto T2222;}
	{object V1003;
	V1001= list(3,(V999),small_fixnum(0),Cnil);
	V1003= (V1001);
	(VV[172]->s.s_dbind)= make_cons((V1003),(VV[172]->s.s_dbind));}
	goto T2222;
T2222:;
	{object V1005;
	V1005= number_plus(CMPcadr(V1001),small_fixnum(1));
	(CMPcdr(V1001))->c.c_car = (V1005);
	(void)(CMPcdr(V1001));}
	if(((V1000))==Cnil){
	goto T2232;}
	{object V1006;
	object V1007;
	V1006= CMPmake_fixnum((long)STREF(fixnum,(V1000),28));
	{register object x= (V1006),V1008= CMPcaddr((V1001));
	while(V1008!=Cnil)
	if(eql(x,V1008->c.c_car->c.c_car) &&V1008->c.c_car != Cnil){
	V1007= (V1008->c.c_car);
	goto T2235;
	}else V1008=V1008->c.c_cdr;
	V1007= Cnil;}
	goto T2235;
T2235:;
	if(((V1007))!=Cnil){
	goto T2236;}
	{object V1009;
	object V1011;
	V1007= make_cons((V1006),small_fixnum(0));
	V1009= (V1007);
	V1011= make_cons((V1009),CMPcaddr(V1001));
	(CMPcddr(V1001))->c.c_car = (V1011);
	(void)(CMPcddr(V1001));}
	goto T2236;
T2236:;
	{object V1013;
	V1013= number_plus(CMPcdr(V1007),small_fixnum(1));
	(V1007)->c.c_cdr = (V1013);
	{object V1014 = (V1013);
	VMR124(V1014)}}}
	goto T2232;
T2232:;
	{object V1015 = Cnil;
	VMR124(V1015)}}
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
	{object V1016;
	object V1017= VV[173];
	if(V1017==Cnil){
	(VV[172]->s.s_dbind)= Cnil;
	goto T2246;}
	base[0]=V1016=MMcons(Cnil,Cnil);
	goto T2247;
T2247:;
	(V1016->c.c_car)= list(3,(V1017->c.c_car),small_fixnum(0),Cnil);
	if((V1017=MMcdr(V1017))==Cnil){
	(VV[172]->s.s_dbind)= base[0];
	goto T2246;}
	V1016=MMcdr(V1016)=MMcons(Cnil,Cnil);
	goto T2247;}
	goto T2246;
T2246:;
	V1019= (VV[338]->s.s_gfdef);
	(void)((*(LnkLI332))(V1019));
	base[0]= (VV[172]->s.s_dbind);
	{
	object V1020= base[0];
	if(V1020==Cnil){
	goto T2251;}
	goto T2252;
T2252:;
	{object V1023;
	base[2]= CMPcaddr((V1020->c.c_car));
	base[3]= (VV[335]->s.s_gfdef);
	base[4]= VV[171];
	base[5]= (VV[336]->s.s_gfdef);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk337)();
	vs_top=sup;
	V1023= vs_base[0];
	(CMPcddr((V1020->c.c_car)))->c.c_car = (V1023);
	(void)(CMPcddr((V1020->c.c_car)));}
	if((V1020=MMcdr(V1020))==Cnil){
	goto T2251;}
	goto T2252;}
	goto T2251;
T2251:;
	base[0]= (VV[172]->s.s_dbind);
	{
	object V1024= base[0];
	if(V1024==Cnil){
	goto T2260;}
	goto T2261;
T2261:;
	base[1]= Ct;
	base[2]= VV[174];
	base[3]= CMPcadr((V1024->c.c_car));
	base[4]= CMPcar((V1024->c.c_car));
	vs_top=(vs_base=base+1)+4;
	Lformat();
	vs_top=sup;
	base[1]= Ct;
	base[2]= VV[175];
	base[3]= CMPcaddr((V1024->c.c_car));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	if((V1024=MMcdr(V1024))==Cnil){
	goto T2260;}
	goto T2261;}
	goto T2260;
T2260:;
	vs_base=vs_top=base+0;
	vs_base[0]=Cnil;
	return;
}
/*	local entry for function GFS-OF-TYPE	*/

static object LI138(V1027)

object V1027;
{	 VMB126 VMS126 VMV126
	goto TTL;
TTL:;
	base[0]=MMcons((V1027),Cnil);
	if(type_of((base[0]->c.c_car))==t_cons){
	goto T2271;}
	(base[0]->c.c_car)= make_cons((base[0]->c.c_car),Cnil);
	goto T2271;
T2271:;
	base[1]=MMcons(Cnil,base[0]);
	V1028= 
	make_cclosure_new(LC167,Cnil,base[1],Cdata);
	(void)((*(LnkLI332))(V1028));
	{object V1029 = (base[1]->c.c_car);
	VMR126(V1029)}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC167(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM127; VC127
	vs_check;
	{object V1030;
	check_arg(1);
	V1030=(base[0]);
	vs_top=sup;
	base[1]= (*(LnkLI235))((V1030));
	vs_top=(vs_base=base+1)+1;
	Ltype_of();
	vs_top=sup;
	V1032= vs_base[0];
	{register object x= V1032,V1031= (base0[1]->c.c_car);
	while(V1031!=Cnil)
	if(x==(V1031->c.c_car)){
	goto T2279;
	}else V1031=V1031->c.c_cdr;
	goto T2278;}
	goto T2279;
T2279:;
	(base0[0]->c.c_car)= make_cons(V1030,(base0[0]->c.c_car));
	base[1]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2278;
T2278:;
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
	{object V1034;
	object V1035;
	check_arg(2);
	V1034=(base[0]);
	V1035=(base[1]);
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
	{object V1036;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1036=(base[0]);
	vs_top=sup;
	base[1]=VV[339]->s.s_gfdef;
	base[2]= (base0[0]->c.c_car);
	{object V1037;
	V1037= (V1036);
	 vs_top=base+3;
	 while(V1037!=Cnil)
	 {vs_push((V1037)->c.c_car);V1037=(V1037)->c.c_cdr;}
	vs_base=base+2;}
	(void) (*Lnk339)(Lclptr339);
	return;
	}
}
/*	local function CLOSURE	*/

static void LC165(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM130; VC130
	vs_check;
	{object V1038;
	object V1039;
	check_arg(2);
	V1038=(base[0]);
	V1039=(base[1]);
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
	{object V1040;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1040=(base[0]);
	vs_top=sup;
	base[1]=VV[339]->s.s_gfdef;
	base[2]= (base0[0]->c.c_car);
	{object V1041;
	V1041= (V1040);
	 vs_top=base+3;
	 while(V1041!=Cnil)
	 {vs_push((V1041)->c.c_car);V1041=(V1041)->c.c_cdr;}
	vs_base=base+2;}
	(void) (*Lnk339)(Lclptr339);
	return;
	}
}
/*	local function DO-CLASS	*/

static void L123(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM132; VC132
	vs_check;
	{object V1042;
	check_arg(1);
	V1042=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((base0[2])==Cnil){
	goto T2291;}
	base[1]= (V1042);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk309)(Lclptr309);
	vs_top=sup;
	V1044= vs_base[0];
	goto T2289;
	goto T2291;
T2291:;
	V1044= (*(LnkLI340))((V1042));
	goto T2289;
T2289:;
	{
	object V1043= V1044;
	if(V1043==Cnil){
	goto T2287;}
	goto T2288;
T2288:;
	base[1]= (V1043->c.c_car);
	vs_top=(vs_base=base+1)+1;
	L123(base0);
	vs_top=sup;
	if((V1043=MMcdr(V1043))==Cnil){
	goto T2287;}
	goto T2288;}
	goto T2287;
T2287:;
	base[1]= (V1042);
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
	{object V1045;
	object V1046;
	object V1047;
	check_arg(3);
	V1045=(base[0]);
	V1046=(base[1]);
	V1047=(base[2]);
	vs_top=sup;
	{object V1048;
	V1048= Cnil;
	{object V1049;
	register object V1050;
	V1049= (base0[0]->c.c_car);
	V1050= CMPcar((V1049));
	goto T2301;
T2301:;
	if(!(((V1049))==Cnil)){
	goto T2302;}
	goto T2297;
	goto T2302;
T2302:;
	if(!((CMPcar((V1050)))==((V1045)))){
	goto T2308;}
	if((CMPcadr((V1050)))==((V1046))){
	goto T2307;}
	goto T2308;
T2308:;
	if(!((CMPcar((V1050)))==((V1046)))){
	goto T2306;}
	if(!((CMPcadr((V1050)))==((V1045)))){
	goto T2306;}
	goto T2307;
T2307:;
	V1048= (V1050);
	goto T2297;
	goto T2306;
T2306:;
	V1049= CMPcdr((V1049));
	V1050= CMPcar((V1049));
	goto T2301;}
	goto T2297;
T2297:;
	if(((V1048))!=Cnil){
	goto T2321;}
	if(((*(LnkLI341))((V1045),(V1046)))==Cnil){
	goto T2327;}
	if(((*(LnkLI341))((V1046),(V1045)))==Cnil){
	goto T2330;}
	V1048= list(4,(V1045),(V1046),Cnil,Ct);
	goto T2325;
	goto T2330;
T2330:;
	V1048= list(3,(V1045),(V1046),Ct);
	goto T2325;
	goto T2327;
T2327:;
	if(((*(LnkLI341))((V1046),(V1045)))==Cnil){
	goto T2333;}
	V1048= list(3,(V1046),(V1045),Ct);
	goto T2325;
	goto T2333;
T2333:;
	{object V1051;
	object V1052;
	base[3]= (V1045);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk342)(Lclptr342);
	vs_top=sup;
	V1051= vs_base[0];
	base[3]= (V1046);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk342)(Lclptr342);
	vs_top=sup;
	V1052= vs_base[0];
	if(((V1051))==Cnil){
	goto T2340;}
	if(((V1052))==Cnil){
	goto T2340;}
	if(!(type_of((V1051))==t_symbol)){
	goto T2340;}
	if(!(type_of((V1052))==t_symbol)){
	goto T2340;}
	base[3]= symbol_name((V1051));
	base[4]= symbol_name((V1052));
	vs_top=(vs_base=base+3)+2;
	Lstring_l();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2340;}
	V1048= list(3,(V1045),(V1046),Ct);
	goto T2325;
	goto T2340;
T2340:;
	V1048= list(3,(V1046),(V1045),Ct);}
	goto T2325;
T2325:;
	(base0[0]->c.c_car)= make_cons(V1048,(base0[0]->c.c_car));
	goto T2321;
T2321:;
	base[3]= CMPcar((V1048));
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
	{register object V1054;
	register object V1055;
	check_arg(2);
	V1054=(base[0]);
	V1055=(base[1]);
	vs_top=sup;
	{register object V1056;
	register object V1057;
	V1056= (base0[0]->c.c_car);
	V1057= CMPcar((V1056));
	goto T2356;
T2356:;
	if(!(((V1056))==Cnil)){
	goto T2357;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2357;
T2357:;
	{register object V1058;
	object V1059;
	register object V1060;
	if(!(type_of((V1054))==t_cons||((V1054))==Cnil)){
	goto T2365;}
	V1061= (VFUN_NARGS=2,(*(LnkLI291))((V1054),Ct));
	goto T2363;
	goto T2365;
T2365:;
	base[6]= (V1054);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V1061= vs_base[0];
	goto T2363;
T2363:;
	V1058= nth(fix((V1057)),V1061);
	if(!(type_of((V1055))==t_cons||((V1055))==Cnil)){
	goto T2371;}
	V1062= (VFUN_NARGS=2,(*(LnkLI291))((V1055),Ct));
	goto T2369;
	goto T2371;
T2371:;
	base[6]= (V1055);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V1062= vs_base[0];
	goto T2369;
T2369:;
	V1059= nth(fix((V1057)),V1062);
	base[6]= (V1058);
	base[7]= (V1059);
	base[8]= (V1057);
	base[9]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+6)+4;
	(void) (*Lnk343)();
	vs_top=sup;
	V1060= vs_base[0];
	if(((V1060))==Cnil){
	goto T2361;}
	base[6]= (((V1060))==((V1058))?Ct:Cnil);
	vs_top=(vs_base=base+6)+1;
	return;}
	goto T2361;
T2361:;
	V1056= CMPcdr((V1056));
	V1057= CMPcar((V1056));
	goto T2356;}
	}
}
/*	local function CLOSURE	*/

static void LC164(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM135; VC135
	vs_check;
	{object V1063;
	object V1064;
	object V1065;
	check_arg(3);
	V1063=(base[0]);
	V1064=(base[1]);
	V1065=(base[2]);
	vs_top=sup;
	{object V1066;
	object V1067;
	V1066= (*(LnkLI305))(nth(fix((V1065)),(base0[0]->c.c_car)));
	if(!(((VV[79]->s.s_dbind))==(VV[80]))){
	goto T2389;}
	base[5]= (V1066);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V1067= vs_base[0];
	goto T2387;
	goto T2389;
T2389:;
	V1067= (*(LnkLI279))((V1066));
	goto T2387;
T2387:;
	{register object x= (V1063),V1070= (V1067);
	while(V1070!=Cnil)
	if(x==(V1070->c.c_car)){
	V1069= V1070;
	goto T2395;
	}else V1070=V1070->c.c_cdr;
	V1069= Cnil;}
	goto T2395;
T2395:;
	{register object x= (V1064),V1068= V1069;
	while(V1068!=Cnil)
	if(x==(V1068->c.c_car)){
	goto T2394;
	}else V1068=V1068->c.c_cdr;
	goto T2393;}
	goto T2394;
T2394:;
	base[5]= (V1063);
	vs_top=(vs_base=base+5)+1;
	return;
	goto T2393;
T2393:;
	base[5]= (V1064);
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
	{object V1071;
	object V1072;
	check_arg(2);
	V1071=(base[0]);
	V1072=(base[1]);
	vs_top=sup;
	{register object V1073;
	object V1074;
	if(((base0[3]->c.c_car))==Cnil){
	goto T2398;}
	V1073= (*(LnkLI279))((V1071));
	goto T2396;
	goto T2398;
T2398:;
	base[4]= (V1071);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V1073= vs_base[0];
	goto T2396;
T2396:;
	V1074= CMPcar((V1073));
	goto T2403;
T2403:;
	if(!(((V1073))==Cnil)){
	goto T2404;}
	base[4]= VV[153];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	return;
	goto T2404;
T2404:;
	{object V1075;
	{register object x= (V1074),V1076= (V1072);
	while(V1076!=Cnil)
	if(EQ(x,V1076->c.c_car->c.c_car) &&V1076->c.c_car != Cnil){
	V1075= (V1076->c.c_car);
	goto T2410;
	}else V1076=V1076->c.c_cdr;
	V1075= Cnil;}
	goto T2410;
T2410:;
	if(((V1075))==Cnil){
	goto T2409;}
	{object V1077;
	register object V1078;
	V1077= CMPcdr((V1075));
	if(((base0[3]->c.c_car))==Cnil){
	goto T2416;}
	V1078= (*(LnkLI289))((V1077));
	goto T2414;
	goto T2416;
T2416:;
	base[6]= (V1077);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk290)(Lclptr290);
	vs_top=sup;
	V1078= vs_base[0];
	goto T2414;
T2414:;
	if(((V1078))!=Cnil){
	goto T2419;}
	{frame_ptr fr;
	fr=frs_sch((base0[6]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[252]);
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	unwind(fr,Cnil);}
	goto T2419;
T2419:;
	{object V1080;
	V1080= (base0[7]->c.c_car);
	base[6]= V1071;
	base[7]= (V1080);
	base[8]= V1078;
	vs_top=(vs_base=base+6)+3;
	siLhash_set();
	vs_top=sup;}
	if(!(type_of((V1078))==t_cons)){
	goto T2428;}
	(base0[4]->c.c_car)= Cnil;
	goto T2428;
T2428:;
	if(((base0[5]->c.c_car))==Cnil){
	goto T2434;}
	if(!(eql((base0[5]->c.c_car),(V1078)))){
	goto T2435;}
	goto T2434;
T2434:;
	(base0[5]->c.c_car)= (V1078);
	goto T2433;
	goto T2435;
T2435:;
	(base0[5]->c.c_car)= Ct;
	goto T2433;
T2433:;
	(base0[0]->c.c_car)= CMPmake_fixnum((long)(fix((base0[0]->c.c_car)))+(1));
	if(!((fix((base0[0]->c.c_car)))==(1))){
	goto T2443;}
	(base0[2]->c.c_car)= (V1071);
	goto T2441;
	goto T2443;
T2443:;
	if(!((fix((base0[0]->c.c_car)))==(2))){
	goto T2441;}
	(base0[1]->c.c_car)= (V1071);
	goto T2441;
T2441:;
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	return;}}
	goto T2409;
T2409:;
	V1073= CMPcdr((V1073));
	V1074= CMPcar((V1073));
	goto T2403;}
	}
}
/*	local function CLOSURE	*/

static void LC162(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM137; VC137
	vs_check;
	{register object V1082;
	object V1083;
	check_arg(2);
	V1082=(base[0]);
	V1083=(base[1]);
	vs_top=sup;
	{object V1084;
	if(((base0[5]->c.c_car))==Cnil){
	goto T2456;}
	V1084= (*(LnkLI279))((V1082));
	goto T2454;
	goto T2456;
T2456:;
	base[2]= (V1082);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V1084= vs_base[0];
	goto T2454;
T2454:;
	{register object x= (base0[1]->c.c_car),V1085= (V1084);
	while(V1085!=Cnil)
	if(x==(V1085->c.c_car)){
	goto T2461;
	}else V1085=V1085->c.c_cdr;
	goto T2460;}
	goto T2461;
T2461:;
	if(((base0[0]->c.c_car))!=Cnil){
	goto T2464;}
	{register object x= (VV[148]->s.s_dbind),V1086= (V1084);
	while(V1086!=Cnil)
	if(eql(x,V1086->c.c_car)){
	goto T2467;
	}else V1086=V1086->c.c_cdr;
	goto T2463;}
	goto T2467;
T2467:;
	goto T2464;
T2464:;
	if(((base0[5]->c.c_car))!=Cnil){
	goto T2462;}
	base[2]= (V1083);
	base[3]= (base0[10]->c.c_car);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk288)(Lclptr288);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T2462;}
	goto T2463;
T2463:;
	{frame_ptr fr;
	fr=frs_sch((base0[8]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[252]);
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	unwind(fr,Cnil);}
	goto T2462;
T2462:;
	{object V1087;
	object V1089;
	object V1090;
	V1087= make_cons((base0[1]->c.c_car),(V1083));
	V1089= (base0[9]->c.c_car);
	base[4]= V1082;
	base[5]= (V1089);
	vs_top=(vs_base=base+4)+2;
	Lgethash();
	vs_top=sup;
	V1091= vs_base[0];
	V1090= make_cons((V1087),V1091);
	base[4]= V1082;
	base[5]= (V1089);
	base[6]= (V1090);
	vs_top=(vs_base=base+4)+3;
	siLhash_set();
	return;}
	goto T2460;
T2460:;
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
	{object V1092;
	check_arg(1);
	V1092=(base[0]);
	vs_top=sup;
	base[1]= (base0[2]->c.c_car);
	base[2]= (V1092);
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
	{object V1093;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T2485;}
	V1093=(base[0]);
	vs_top=sup;
	goto T2486;
	goto T2485;
T2485:;
	V1093= Cnil;
	goto T2486;
T2486:;
	if(!(type_of((base0[1]->c.c_car))==t_cons)){
	goto T2489;}
	{object V1094;
	object V1095;
	object V1096;
	base[1]= (base0[4]->c.c_car);
	base[2]= (base0[3]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk210)();
	if(vs_base>=vs_top){vs_top=sup;goto T2494;}
	V1094= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2495;}
	V1095= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2496;}
	V1096= vs_base[0];
	vs_top=sup;
	goto T2497;
	goto T2494;
T2494:;
	V1094= Cnil;
	goto T2495;
T2495:;
	V1095= Cnil;
	goto T2496;
T2496:;
	V1096= Cnil;
	goto T2497;
T2497:;
	base[1]= (VFUN_NARGS=4,(*(LnkLI47))((base0[4]->c.c_car),(V1094),(V1095),(V1096)));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2489;
T2489:;
	{object V1097;
	object V1098;
	object V1099;
	base[1]= (base0[4]->c.c_car);
	base[2]= (base0[2]->c.c_car);
	base[3]= (V1093);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk199)();
	if(vs_base>=vs_top){vs_top=sup;goto T2502;}
	V1097= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2503;}
	V1098= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2504;}
	V1099= vs_base[0];
	vs_top=sup;
	goto T2505;
	goto T2502;
T2502:;
	V1097= Cnil;
	goto T2503;
T2503:;
	V1098= Cnil;
	goto T2504;
T2504:;
	V1099= Cnil;
	goto T2505;
T2505:;
	base[1]= (VFUN_NARGS=4,(*(LnkLI47))((base0[4]->c.c_car),(V1097),(V1098),(V1099)));
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
	{object V1100;
	object V1101;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1100=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2506;}
	V1101=(base[1]);
	vs_top=sup;
	goto T2507;
	goto T2506;
T2506:;
	V1101= Cnil;
	goto T2507;
T2507:;
	{object V1102;
	object V1103;
	object V1104;
	base[2]= (base0[3]->c.c_car);
	base[3]= (base0[1]->c.c_car);
	base[4]= (V1100);
	base[5]= (V1101);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk195)();
	if(vs_base>=vs_top){vs_top=sup;goto T2514;}
	V1102= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2515;}
	V1103= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2516;}
	V1104= vs_base[0];
	vs_top=sup;
	goto T2517;
	goto T2514;
T2514:;
	V1102= Cnil;
	goto T2515;
T2515:;
	V1103= Cnil;
	goto T2516;
T2516:;
	V1104= Cnil;
	goto T2517;
T2517:;
	base[2]= (VFUN_NARGS=4,(*(LnkLI47))((base0[3]->c.c_car),(V1102),(V1103),(V1104)));
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
	{object V1105;
	check_arg(1);
	V1105=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V1106;
	V1106= (VFUN_NARGS=3,(*(LnkLI264))(base0[6],base0[9],(base0[11]->c.c_car)));
	if(((V1106))==(base0[6])){
	goto T2520;}
	base[1]= (V1106);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (V1105);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T2520;
T2520:;
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
	{object V1107;
	object V1108;
	object V1109;
	base[0]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk201)();
	if(vs_base>=vs_top){vs_top=sup;goto T2525;}
	V1107= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2526;}
	V1108= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2527;}
	V1109= vs_base[0];
	vs_top=sup;
	goto T2528;
	goto T2525;
T2525:;
	V1107= Cnil;
	goto T2526;
T2526:;
	V1108= Cnil;
	goto T2527;
T2527:;
	V1109= Cnil;
	goto T2528;
T2528:;
	base[0]= (VFUN_NARGS=4,(*(LnkLI47))((base0[0]->c.c_car),(V1107),(V1108),(V1109)));
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	local function N-N	*/

static void L85(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM143; VC143
	vs_check;
	{object V1110;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T2529;}
	V1110=(base[0]);
	vs_top=sup;
	goto T2530;
	goto T2529;
T2529:;
	V1110= Cnil;
	goto T2530;
T2530:;
	if(!(type_of((base0[11]->c.c_car))==t_cons)){
	goto T2533;}
	{object V1111;
	object V1112;
	object V1113;
	base[1]= (base0[0]->c.c_car);
	base[2]= (base0[8]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk210)();
	if(vs_base>=vs_top){vs_top=sup;goto T2538;}
	V1111= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2539;}
	V1112= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2540;}
	V1113= vs_base[0];
	vs_top=sup;
	goto T2541;
	goto T2538;
T2538:;
	V1111= Cnil;
	goto T2539;
T2539:;
	V1112= Cnil;
	goto T2540;
T2540:;
	V1113= Cnil;
	goto T2541;
T2541:;
	base[1]= (VFUN_NARGS=4,(*(LnkLI47))((base0[0]->c.c_car),(V1111),(V1112),(V1113)));
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2533;
T2533:;
	{object V1114;
	object V1115;
	object V1116;
	base[1]= (base0[0]->c.c_car);
	base[2]= (base0[10]->c.c_car);
	base[3]= (V1110);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk199)();
	if(vs_base>=vs_top){vs_top=sup;goto T2546;}
	V1114= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2547;}
	V1115= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2548;}
	V1116= vs_base[0];
	vs_top=sup;
	goto T2549;
	goto T2546;
T2546:;
	V1114= Cnil;
	goto T2547;
T2547:;
	V1115= Cnil;
	goto T2548;
T2548:;
	V1116= Cnil;
	goto T2549;
T2549:;
	base[1]= (VFUN_NARGS=4,(*(LnkLI47))((base0[0]->c.c_car),(V1114),(V1115),(V1116)));
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
	{object V1117;
	object V1118;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V1117=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T2550;}
	V1118=(base[1]);
	vs_top=sup;
	goto T2551;
	goto T2550;
T2550:;
	V1118= Cnil;
	goto T2551;
T2551:;
	{object V1119;
	object V1120;
	object V1121;
	base[2]= (base0[0]->c.c_car);
	base[3]= (base0[10]->c.c_car);
	base[4]= (V1117);
	base[5]= (V1118);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk195)();
	if(vs_base>=vs_top){vs_top=sup;goto T2558;}
	V1119= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2559;}
	V1120= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2560;}
	V1121= vs_base[0];
	vs_top=sup;
	goto T2561;
	goto T2558;
T2558:;
	V1119= Cnil;
	goto T2559;
T2559:;
	V1120= Cnil;
	goto T2560;
T2560:;
	V1121= Cnil;
	goto T2561;
T2561:;
	base[2]= (VFUN_NARGS=4,(*(LnkLI47))((base0[0]->c.c_car),(V1119),(V1120),(V1121)));
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
	{object V1122;
	object V1123;
	object V1124;
	check_arg(3);
	V1122=(base[0]);
	V1123=(base[1]);
	V1124=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= small_fixnum(2);
	vs_top=(vs_base=base+3)+1;
	Lrandom();
	vs_top=sup;
	V1125= vs_base[0];
	if(!(number_compare(small_fixnum(0),V1125)==0)){
	goto T2562;}
	{object V1126;
	object V1127;
	V1126= (V1124);
	V1127= (V1123);
	V1123= (V1126);
	V1124= (V1127);}
	goto T2562;
T2562:;
	{object V1128;
	object V1129;
	object V1130;
	base[3]= (base0[0]->c.c_car);
	base[4]= (base0[10]->c.c_car);
	base[5]= (V1123);
	base[6]= (V1124);
	base[7]= (V1122);
	vs_top=(vs_base=base+3)+5;
	(void) (*Lnk254)();
	if(vs_base>=vs_top){vs_top=sup;goto T2579;}
	V1128= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2580;}
	V1129= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2581;}
	V1130= vs_base[0];
	vs_top=sup;
	goto T2582;
	goto T2579;
T2579:;
	V1128= Cnil;
	goto T2580;
T2580:;
	V1129= Cnil;
	goto T2581;
T2581:;
	V1130= Cnil;
	goto T2582;
T2582:;
	base[3]= (VFUN_NARGS=4,(*(LnkLI47))((base0[0]->c.c_car),(V1128),(V1129),(V1130)));
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
	{object V1131;
	check_arg(1);
	V1131=(base[0]);
	vs_top=sup;
	base[1]= (V1131);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	V1132= vs_base[0];
	base[1]= (equal((base0[0]->c.c_car),V1132)?Ct:Cnil);
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
	{object V1133;
	check_arg(1);
	V1133=(base[0]);
	vs_top=sup;
	base[1]= (((V1133))==((VV[135]->s.s_dbind))?Ct:Cnil);
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
	{object V1134;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1134=(base[0]);
	vs_top=sup;
	base[1]=VV[339]->s.s_gfdef;
	base[2]= (base0[1]->c.c_car);
	{object V1135;
	V1135= (V1134);
	 vs_top=base+3;
	 while(V1135!=Cnil)
	 {vs_push((V1135)->c.c_car);V1135=(V1135)->c.c_cdr;}
	vs_base=base+2;}
	(void) (*Lnk339)(Lclptr339);
	return;
	}
}
/*	local function CLOSURE	*/

static void LC157(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM149; VC149
	vs_check;
	{object V1136;
	check_arg(1);
	V1136=(base[0]);
	vs_top=sup;
	if(!(type_of((V1136))==t_cons)){
	goto T2588;}{object V1137;
	V1137= (VV[132]->s.s_dbind);
	V1138= (*(LnkLI281))((V1136));
	base[1]= ((V1137)==(/* INLINE-ARGS */V1138)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2588;
T2588:;
	base[1]= (V1136);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk344)(Lclptr344);
	return;
	}
}
/*	local function CLOSURE	*/

static void LC156(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM150; VC150
	vs_check;
	{object V1139;
	check_arg(1);
	V1139=(base[0]);
	vs_top=sup;
	if(!(type_of((V1139))==t_cons)){
	goto T2592;}{object V1140;
	V1140= (VV[131]->s.s_dbind);
	V1141= (*(LnkLI281))((V1139));
	base[1]= ((V1140)==(/* INLINE-ARGS */V1141)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T2592;
T2592:;
	base[1]= (V1139);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk345)(Lclptr345);
	return;
	}
}
/*	local function CLOSURE	*/

static void LC155(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM151; VC151
	vs_check;
	{object V1142;
	object V1143;
	check_arg(2);
	V1142=(base[0]);
	V1143=(base[1]);
	vs_top=sup;
	{register object V1144;
	object V1145;
	V1144= (*(LnkLI306))((V1143));
	if(type_of(V1144)==t_structure){
	goto T2601;}
	goto T2599;
	goto T2601;
T2601:;
	if(!(((V1144)->str.str_def)==(VV[112]))){
	goto T2599;}
	V1146= STREF(object,(V1144),4);
	goto T2597;
	goto T2599;
T2599:;{object V1148;
	V1148= (VV[73]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V1144);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	V1149= vs_base[0];
	if(!((V1148)==(CMPcar(V1149)))){
	goto T2604;}}
	V1146= CMPcar(((V1144))->cc.cc_turbo[12]);
	goto T2597;
	goto T2604;
T2604:;
	base[4]= VV[74];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V1146= vs_base[0];
	goto T2597;
T2597:;
	V1150= (*(LnkLI297))(VV[8],VV[110]);
	V1145= (V1146)->v.v_self[fix(/* INLINE-ARGS */V1150)];
	base[4]= (*(LnkLI346))((V1145),(V1143),(base0[0]->c.c_car),(V1142));
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
	{register object V1151;
	check_arg(1);
	V1151=(base[0]);
	vs_top=sup;
	{register object V1152;
	object V1153;
	V1152= (*(LnkLI306))((V1151));
	if(type_of(V1152)==t_structure){
	goto T2616;}
	goto T2614;
	goto T2616;
T2616:;
	if(!(((V1152)->str.str_def)==(VV[109]))){
	goto T2614;}
	V1154= STREF(object,(V1152),4);
	goto T2612;
	goto T2614;
T2614:;{object V1156;
	V1156= (VV[73]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V1152);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	V1157= vs_base[0];
	if(!((V1156)==(CMPcar(V1157)))){
	goto T2619;}}
	V1154= CMPcar(((V1152))->cc.cc_turbo[12]);
	goto T2612;
	goto T2619;
T2619:;
	base[3]= VV[74];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V1154= vs_base[0];
	goto T2612;
T2612:;
	V1158= (*(LnkLI297))(VV[8],VV[110]);
	V1153= (V1154)->v.v_self[fix(/* INLINE-ARGS */V1158)];
	if(type_of(V1151)==t_structure){
	goto T2629;}
	goto T2627;
	goto T2629;
T2629:;
	if(!(((V1151)->str.str_def)==(VV[111]))){
	goto T2627;}
	V1159= STREF(object,(V1151),4);
	goto T2625;
	goto T2627;
T2627:;{object V1161;
	V1161= (VV[73]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V1151);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk214)();
	vs_top=sup;
	V1162= vs_base[0];
	if(!((V1161)==(CMPcar(V1162)))){
	goto T2632;}}
	V1159= CMPcar(((V1151))->cc.cc_turbo[12]);
	goto T2625;
	goto T2632;
T2632:;
	base[3]= VV[74];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	V1159= vs_base[0];
	goto T2625;
T2625:;
	V1163= (*(LnkLI297))((V1153),(base0[0]->c.c_car));
	base[3]= (V1159)->v.v_self[fix(/* INLINE-ARGS */V1163)];
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
	{object V1164;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1164=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V1164);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk347)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC152(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM154; VC154
	vs_check;
	{object V1165;
	object V1166;
	check_arg(2);
	V1165=(base[0]);
	V1166=(base[1]);
	vs_top=sup;
	base[2]= (V1165);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk253)(Lclptr253);
	vs_top=sup;
	V1167= vs_base[0];
	(base0[0]->c.c_car)= (VFUN_NARGS=4,(*(LnkLI264))((base0[0]->c.c_car),V1167,(V1166),Ct));
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
	{object V1168;
	object V1169;
	object V1170;
	object V1171;
	check_arg(4);
	V1168=(base[0]);
	V1169=(base[1]);
	V1170=(base[2]);
	V1171=(base[3]);
	vs_top=sup;
	{object V1172;
	object V1173;
	if(!((VV[8])==(CMPcar((V1169))))){
	goto T2645;}
	{object V1174;
	object V1175;
	V1174= (*(LnkLI306))(CMPcadr((V1169)));
	base[8]= (V1174);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk280)(Lclptr280);
	vs_top=sup;
	V1175= vs_base[0];
	{register object x= (VV[84]->s.s_dbind),V1176= (V1175);
	while(V1176!=Cnil)
	if(x==(V1176->c.c_car)){
	goto T2652;
	}else V1176=V1176->c.c_cdr;
	goto T2651;}
	goto T2652;
T2652:;
	V1172= (VV[85]->s.s_dbind);
	goto T2643;
	goto T2651;
T2651:;
	{register object x= (VV[86]->s.s_dbind),V1177= (V1175);
	while(V1177!=Cnil)
	if(x==(V1177->c.c_car)){
	goto T2655;
	}else V1177=V1177->c.c_cdr;
	goto T2654;}
	goto T2655;
T2655:;
	V1172= (VV[87]->s.s_dbind);
	goto T2643;
	goto T2654;
T2654:;
	V1172= (VV[88]->s.s_dbind);
	goto T2643;}
	goto T2645;
T2645:;
	V1172= small_fixnum(0);
	goto T2643;
T2643:;
	V1173= number_plus((number_compare((V1170),(V1171))>=0?((V1170)):(V1171)),(V1172));
	if(((base0[1]->c.c_car))==Cnil){
	goto T2657;}
	if(!(number_compare((base0[1]->c.c_car),(V1173))<=0)){
	goto T2657;}
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[226]);
	base[6]= (V1173);
	vs_top=(vs_base=base+6)+1;
	unwind(fr,Cnil);}
	goto T2657;
T2657:;
	base[6]= (V1173);
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
	{object V1178;
	object V1179;
	check_arg(2);
	V1178=(base[0]);
	V1179=(base[1]);
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
	{object V1180;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1180=(base[0]);
	vs_top=sup;
	base[1]= (base0[1]->c.c_car);
	base[2]= (V1180);
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk348)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC148(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM158; VC158
	vs_check;
	{register object V1181;
	check_arg(1);
	V1181=(base[0]);
	vs_top=sup;{object V1182;
	if(((VV[79]->s.s_dbind))==(VV[80])){
	goto T2668;}
	V1182= Cnil;
	goto T2667;
	goto T2668;
T2668:;
	base[1]= (VV[326]->s.s_gfdef);
	base[3]= (V1181);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk259)(Lclptr259);
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk217)();
	vs_top=sup;
	V1182= vs_base[0];
	goto T2667;
T2667:;
	if(V1182==Cnil)goto T2666;
	base[1]= V1182;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2666;
T2666:;}
	{object V1183;
	if(((base0[1]->c.c_car))==Cnil){
	goto T2676;}{object V1185;
	V1185= CMPcaddr((V1181));
	if(V1185==Cnil)goto T2678;
	V1184= V1185;
	goto T2674;
	goto T2678;
T2678:;}
	V1184= CMPcadr((V1181));
	goto T2674;
	goto T2676;
T2676:;{object V1186;
	base[1]= (V1181);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk349)(Lclptr349);
	vs_top=sup;
	V1186= vs_base[0];
	if(V1186==Cnil)goto T2680;
	V1184= V1186;
	goto T2674;
	goto T2680;
T2680:;}
	base[1]= (V1181);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk350)(Lclptr350);
	vs_top=sup;
	V1184= vs_base[0];
	goto T2674;
T2674:;
	V1183= (VFUN_NARGS=3,(*(LnkLI266))(V1184,VV[81],(base0[0]->c.c_car)));
	if(((base0[2]->c.c_car))==Cnil){
	goto T2685;}
	if(!(((V1183))==(Ct))){
	goto T2688;}
	V1187= Ct;
	goto T2687;
	goto T2688;
T2688:;
	V1187= (((V1183))==(Cnil)?Ct:Cnil);
	goto T2687;
T2687:;
	base[1]= ((V1187)==Cnil?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2685;
T2685:;
	base[1]= (((V1183))==((base0[0]->c.c_car))?Ct:Cnil);
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
	(void) (*Lnk351)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC146(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM160; VC160
	vs_check;
	{object V1189;
	check_arg(1);
	V1189=(base[0]);
	vs_top=sup;
	{object V1190;
	if(!(type_of((V1189))==t_cons||((V1189))==Cnil)){
	goto T2695;}
	V1190= CMPcaddr((V1189));
	goto T2693;
	goto T2695;
T2695:;
	base[1]= (V1189);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk349)(Lclptr349);
	vs_top=sup;
	V1190= vs_base[0];
	goto T2693;
T2693:;
	base[1]= (VFUN_NARGS=2,(*(LnkLI266))((V1190),VV[70]));
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
	{object V1191;
	check_arg(1);
	V1191=(base[0]);
	vs_top=sup;
	base[1]= (((V1191))==(Ct)?Ct:Cnil);
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
	{object V1192;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1192=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V1192);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk102)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC143(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM163; VC163
	vs_check;
	{object V1193;
	check_arg(1);
	V1193=(base[0]);
	vs_top=sup;
	base[1]= (((V1193))==(Ct)?Ct:Cnil);
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
	{object V1194;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V1194=(base[0]);
	vs_top=sup;
	base[1]= (base0[1]->c.c_car);
	base[2]= (V1194);
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk352)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC141(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM165; VC165
	vs_check;
	{object V1195;
	check_arg(1);
	V1195=(base[0]);
	vs_top=sup;
	base[1]= (((V1195))==(Ct)?Ct:Cnil);
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
	{object V1196;
	object V1197;
	check_arg(2);
	V1196=(base[0]);
	V1197=(base[1]);
	vs_top=sup;
	base[2]= (base0[0]->c.c_car);
	base[3]= (V1196);
	base[4]= (V1197);
	base[5]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk353)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC139(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM167; VC167
	vs_check;
	{object V1198;
	check_arg(1);
	V1198=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= Cnil;
	base[3]= (V1198);
	base[4]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk353)();
	return;
	}
}
static void LnkT353(){ call_or_link(VV[353],(void **)(void *)&Lnk353);} /* ACCESSOR-MISS */
static void LnkT352(){ call_or_link(VV[352],(void **)(void *)&Lnk352);} /* CHECKING-MISS */
static void LnkT351(){ call_or_link(VV[351],(void **)(void *)&Lnk351);} /* CACHING-MISS */
static void LnkT350(ptr) object *ptr;{ call_or_link_closure(VV[350],(void **)(void *)&Lnk350,(void **)(void *)&Lclptr350);} /* METHOD-FUNCTION */
static void LnkT349(ptr) object *ptr;{ call_or_link_closure(VV[349],(void **)(void *)&Lnk349,(void **)(void *)&Lclptr349);} /* METHOD-FAST-FUNCTION */
static void LnkT348(){ call_or_link(VV[348],(void **)(void *)&Lnk348);} /* CONSTANT-VALUE-MISS */
static void LnkT347(){ call_or_link(VV[347],(void **)(void *)&Lnk347);} /* INITIAL-DFUN */
static object  LnkTLI346(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[346],(void **)(void *)&LnkLI346,4,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-SET-SLOT */
static void LnkT345(ptr) object *ptr;{ call_or_link_closure(VV[345],(void **)(void *)&Lnk345,(void **)(void *)&Lclptr345);} /* STANDARD-READER-METHOD-P */
static void LnkT344(ptr) object *ptr;{ call_or_link_closure(VV[344],(void **)(void *)&Lnk344,(void **)(void *)&Lclptr344);} /* STANDARD-WRITER-METHOD-P */
static void LnkT343(){ call_or_link(VV[343],(void **)(void *)&Lnk343);} /* ORDER-SPECIALIZERS */
static void LnkT342(ptr) object *ptr;{ call_or_link_closure(VV[342],(void **)(void *)&Lnk342,(void **)(void *)&Lclptr342);} /* CLASS-NAME */
static object  LnkTLI341(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[341],(void **)(void *)&LnkLI341,2,first,ap);va_end(ap);return V1;} /* CLASS-MIGHT-PRECEDE-P */
static object  LnkTLI340(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[340],(void **)(void *)&LnkLI340,1,first,ap);va_end(ap);return V1;} /* EARLY-CLASS-DIRECT-SUBCLASSES */
static void LnkT339(ptr) object *ptr;{ call_or_link_closure(VV[339],(void **)(void *)&Lnk339,(void **)(void *)&Lclptr339);} /* NO-APPLICABLE-METHOD */
static void LnkT337(){ call_or_link(VV[337],(void **)(void *)&Lnk337);} /* SORT */
static object  LnkTLI332(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[332],(void **)(void *)&LnkLI332,1,first,ap);va_end(ap);return V1;} /* MAP-ALL-GENERIC-FUNCTIONS */
static object  LnkTLI331(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[331],(void **)(void *)&LnkLI331,1,first,ap);va_end(ap);return V1;} /* FREE-CACHE */
static object  LnkTLI330(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[330],(void **)(void *)&LnkLI330,2,first,ap);va_end(ap);return V1;} /* SET-FUNCALLABLE-INSTANCE-FUNCTION */
static void LnkT329(ptr) object *ptr;{ call_or_link_closure(VV[329],(void **)(void *)&Lnk329,(void **)(void *)&Lclptr329);} /* COMPUTE-DISCRIMINATING-FUNCTION */
static object  LnkTLI328(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[328],(void **)(void *)&LnkLI328,1,first,ap);va_end(ap);return V1;} /* MAKE-INITIAL-DFUN */
static object  LnkTLI327(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[327],(void **)(void *)&LnkLI327,1,first,ap);va_end(ap);return V1;} /* EARLY-GF-NAME */
static void LnkT326(ptr) object *ptr;{ call_or_link_closure(VV[326],(void **)(void *)&Lnk326,(void **)(void *)&Lclptr326);} /* EQL-SPECIALIZER-P */
static object  LnkTLI325(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[325],(void **)(void *)&LnkLI325,first,ap);va_end(ap);return V1;} /* COMPUTE-SECONDARY-DISPATCH-FUNCTION1 */
static void LnkT324(){ call_or_link(VV[324],(void **)(void *)&Lnk324);} /* GENERATE-DISCRIMINATION-NET */
static object  LnkTLI323(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[323],(void **)(void *)&LnkLI323,3,first,ap);va_end(ap);return V1;} /* STANDARD-COMPUTE-EFFECTIVE-METHOD */
static object  LnkTLI322(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[322],(void **)(void *)&LnkLI322,4,first,ap);va_end(ap);return V1;} /* MAKE-EFFECTIVE-METHOD-FUNCTION1 */
static object  LnkTLI321(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[321],(void **)(void *)&LnkLI321,3,first,ap);va_end(ap);return V1;} /* COMPUTE-EFFECTIVE-METHOD */
static void LnkT320(ptr) object *ptr;{ call_or_link_closure(VV[320],(void **)(void *)&Lnk320,(void **)(void *)&Lclptr320);} /* GENERIC-FUNCTION-METHOD-COMBINATION */
static object  LnkTLI319(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[319],(void **)(void *)&LnkLI319,8,first,ap);va_end(ap);return V1;} /* GET-SECONDARY-DISPATCH-FUNCTION2 */
static object  LnkTLI318(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[318],(void **)(void *)&LnkLI318,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT317(){ call_or_link(VV[317],(void **)(void *)&Lnk317);} /* SAUT-EQL */
static void LnkT316(){ call_or_link(VV[316],(void **)(void *)&Lnk316);} /* SAUT-CLASS-EQ */
static void LnkT315(){ call_or_link(VV[315],(void **)(void *)&Lnk315);} /* SAUT-PROTOTYPE */
static void LnkT314(){ call_or_link(VV[314],(void **)(void *)&Lnk314);} /* SAUT-CLASS */
static void LnkT313(){ call_or_link(VV[313],(void **)(void *)&Lnk313);} /* SAUT-NOT */
static void LnkT312(){ call_or_link(VV[312],(void **)(void *)&Lnk312);} /* SAUT-AND */
static void LnkT311(){ call_or_link(VV[311],(void **)(void *)&Lnk311);} /* TYPE-FROM-SPECIALIZER */
static void LnkT310(){ call_or_link(VV[310],(void **)(void *)&Lnk310);} /* CLASS-APPLICABLE-USING-CLASS-P */
static void LnkT309(ptr) object *ptr;{ call_or_link_closure(VV[309],(void **)(void *)&Lnk309,(void **)(void *)&Lclptr309);} /* CLASS-DIRECT-SUBCLASSES */
static object  LnkTLI308(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[308],(void **)(void *)&LnkLI308,2,first,ap);va_end(ap);return V1;} /* CLASSES-HAVE-COMMON-SUBCLASS-P */
static object  LnkTLI307(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[307],(void **)(void *)&LnkLI307,2,first,ap);va_end(ap);return V1;} /* SUPERCLASSES-COMPATIBLE-P */
static object  LnkTLI306(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[306],(void **)(void *)&LnkLI306,1,first,ap);va_end(ap);return V1;} /* CLASS-OF */
static object  LnkTLI305(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[305],(void **)(void *)&LnkLI305,1,first,ap);va_end(ap);return V1;} /* TYPE-CLASS */
static object  LnkTLI304(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[304],(void **)(void *)&LnkLI304,2,first,ap);va_end(ap);return V1;} /* SAUT-NOT-EQL */
static object  LnkTLI303(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[303],(void **)(void *)&LnkLI303,2,first,ap);va_end(ap);return V1;} /* SAUT-NOT-PROTOTYPE */
static object  LnkTLI302(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[302],(void **)(void *)&LnkLI302,2,first,ap);va_end(ap);return V1;} /* SAUT-NOT-CLASS-EQ */
static object  LnkTLI301(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[301],(void **)(void *)&LnkLI301,2,first,ap);va_end(ap);return V1;} /* SAUT-NOT-CLASS */
static void LnkT300(){ call_or_link(VV[300],(void **)(void *)&Lnk300);} /* POSITION */
static object  LnkTLI299(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[299],(void **)(void *)&LnkLI299,2,first,ap);va_end(ap);return V1;} /* CLASS-CAN-PRECEDE-P */
static object  LnkTLI297(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[297],(void **)(void *)&LnkLI297,2,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-SLOT-INDEX */
static void LnkT296(ptr) object *ptr;{ call_or_link_closure(VV[296],(void **)(void *)&Lnk296,(void **)(void *)&Lclptr296);} /* SPECIALIZER-TYPE */
static void LnkT295(){ call_or_link(VV[295],(void **)(void *)&Lnk295);} /* STABLE-SORT */
static object  LnkTLI294(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[294],(void **)(void *)&LnkLI294,3,first,ap);va_end(ap);return V1;} /* SORT-METHODS */
static object  LnkTLI293(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[293],(void **)(void *)&LnkLI293,3,first,ap);va_end(ap);return V1;} /* SORT-APPLICABLE-METHODS */
static void LnkT162(){ call_or_link(VV[162],(void **)(void *)&Lnk162);} /* SPECIALIZER-APPLICABLE-USING-TYPE-P */
static void LnkT292(ptr) object *ptr;{ call_or_link_closure(VV[292],(void **)(void *)&Lnk292,(void **)(void *)&Lclptr292);} /* CLASS-FINALIZED-P */
static object  LnkTLI291(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[291],(void **)(void *)&LnkLI291,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-SPECIALIZERS */
static void LnkT290(ptr) object *ptr;{ call_or_link_closure(VV[290],(void **)(void *)&Lnk290,(void **)(void *)&Lclptr290);} /* SLOT-DEFINITION-LOCATION */
static object  LnkTLI289(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[289],(void **)(void *)&LnkLI289,1,first,ap);va_end(ap);return V1;} /* EARLY-SLOT-DEFINITION-LOCATION */
static void LnkT288(ptr) object *ptr;{ call_or_link_closure(VV[288],(void **)(void *)&Lnk288,(void **)(void *)&Lclptr288);} /* SLOT-ACCESSOR-STD-P */
static object  LnkTLI287(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[287],(void **)(void *)&LnkLI287,2,first,ap);va_end(ap);return V1;} /* FIND-SLOT-DEFINITION */
static object  LnkTLI286(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[286],(void **)(void *)&LnkLI286,1,first,ap);va_end(ap);return V1;} /* EARLY-SLOT-DEFINITION-NAME */
static object  LnkTLI285(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[285],(void **)(void *)&LnkLI285,1,first,ap);va_end(ap);return V1;} /* EARLY-CLASS-SLOTDS */
static void LnkT284(ptr) object *ptr;{ call_or_link_closure(VV[284],(void **)(void *)&Lnk284,(void **)(void *)&Lclptr284);} /* ACCESSOR-METHOD-SLOT-NAME */
static object  LnkTLI283(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[283],(void **)(void *)&LnkLI283,1,first,ap);va_end(ap);return V1;} /* EARLY-ACCESSOR-METHOD-SLOT-NAME */
static void LnkT282(ptr) object *ptr;{ call_or_link_closure(VV[282],(void **)(void *)&Lnk282,(void **)(void *)&Lclptr282);} /* STANDARD-ACCESSOR-METHOD-P */
static object  LnkTLI281(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[281],(void **)(void *)&LnkLI281,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-CLASS */
static void LnkT280(ptr) object *ptr;{ call_or_link_closure(VV[280],(void **)(void *)&Lnk280,(void **)(void *)&Lclptr280);} /* CLASS-PRECEDENCE-LIST */
static object  LnkTLI279(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[279],(void **)(void *)&LnkLI279,1,first,ap);va_end(ap);return V1;} /* EARLY-CLASS-PRECEDENCE-LIST */
static object  LnkTLI278(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[278],(void **)(void *)&LnkLI278,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-STANDARD-ACCESSOR-P */
static void LnkT277(ptr) object *ptr;{ call_or_link_closure(VV[277],(void **)(void *)&Lnk277,(void **)(void *)&Lclptr277);} /* METHOD-QUALIFIERS */
static object  LnkTLI276(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[276],(void **)(void *)&LnkLI276,1,first,ap);va_end(ap);return V1;} /* EARLY-METHOD-QUALIFIERS */
static void LnkT275(){ call_or_link(VV[275],(void **)(void *)&Lnk275);} /* ACCESSOR-VALUES-INTERNAL */
static void LnkT273(){ call_or_link(VV[273],(void **)(void *)&Lnk273);} /* ACCESSOR-VALUES */
static object  LnkTLI272(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[272],(void **)(void *)&LnkLI272,1,first,ap);va_end(ap);return V1;} /* DEFAULT-SECONDARY-DISPATCH-FUNCTION */
static void LnkT271(ptr) object *ptr;{ call_or_link_closure(VV[271],(void **)(void *)&Lnk271,(void **)(void *)&Lclptr271);} /* COMPUTE-APPLICABLE-METHODS-USING-CLASSES */
static void LnkT270(){ call_or_link(VV[270],(void **)(void *)&Lnk270);} /* COMPUTE-APPLICABLE-METHODS-USING-TYPES */
static void LnkT269(){ call_or_link(VV[269],(void **)(void *)&Lnk269);} /* CACHE-MISS-VALUES-INTERNAL */
static object  LnkTLI268(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[268],(void **)(void *)&LnkLI268,1,first,ap);va_end(ap);return V1;} /* CHECK-WRAPPER-VALIDITY */
static object  LnkTLI267(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[267],(void **)(void *)&LnkLI267,1,first,ap);va_end(ap);return V1;} /* WRAPPER-OF */
static object  LnkTLI266(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[266],(void **)(void *)&LnkLI266,first,ap);va_end(ap);return V1;} /* METHOD-FUNCTION-GET */
static void LnkT265(){ call_or_link(VV[265],(void **)(void *)&Lnk265);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI264(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[264],(void **)(void *)&LnkLI264,first,ap);va_end(ap);return V1;} /* FILL-CACHE */
static void LnkT263(){ call_or_link(VV[263],(void **)(void *)&Lnk263);} /* MAKE-FINAL-CHECKING-DFUN */
static void LnkT262(){ call_or_link(VV[262],(void **)(void *)&Lnk262);} /* GET-SECONDARY-DISPATCH-FUNCTION */
static void LnkT261(){ call_or_link(VV[261],(void **)(void *)&Lnk261);} /* MAKE-FINAL-DISPATCH-DFUN */
static void LnkT260(){ call_or_link(VV[260],(void **)(void *)&Lnk260);} /* MAKE-FINAL-CONSTANT-VALUE-DFUN */
static void LnkT259(ptr) object *ptr;{ call_or_link_closure(VV[259],(void **)(void *)&Lnk259,(void **)(void *)&Lclptr259);} /* METHOD-SPECIALIZERS */
static object  LnkTLI258(){return call_proc0(VV[258],(void **)(void *)&LnkLI258);} /* NO-METHODS-DFUN-INFO */
static void LnkT257(){ call_or_link(VV[257],(void **)(void *)&Lnk257);} /* MAKE-FINAL-CACHING-DFUN */
static void LnkT256(){ call_or_link(VV[256],(void **)(void *)&Lnk256);} /* MAKE-FINAL-N-N-ACCESSOR-DFUN */
static void LnkT255(){ call_or_link(VV[255],(void **)(void *)&Lnk255);} /* MAKE-FINAL-ONE-INDEX-ACCESSOR-DFUN */
static void LnkT254(){ call_or_link(VV[254],(void **)(void *)&Lnk254);} /* MAKE-TWO-CLASS-ACCESSOR-DFUN */
static void LnkT253(ptr) object *ptr;{ call_or_link_closure(VV[253],(void **)(void *)&Lnk253,(void **)(void *)&Lclptr253);} /* CLASS-WRAPPER */
static void LnkT252(){ call_or_link(VV[252],(void **)(void *)&Lnk252);} /* MAKE-ACCESSOR-TABLE */
static void LnkT102(){ call_or_link(VV[102],(void **)(void *)&Lnk102);} /* INVOKE-EMF */
static void LnkT249(){ call_or_link(VV[249],(void **)(void *)&Lnk249);} /* MAKE-ONE-CLASS-ACCESSOR-DFUN */
static void LnkT93(){ call_or_link(VV[93],(void **)(void *)&Lnk93);} /* CACHE-MISS-VALUES */
static void LnkT248(){ call_or_link(VV[248],(void **)(void *)&Lnk248);} /* EARLY-METHOD-STANDARD-ACCESSOR-SLOT-NAME */
static object  LnkTLI247(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[247],(void **)(void *)&LnkLI247,first,ap);va_end(ap);return V1;} /* SET-DFUN */
static void LnkT246(){ call_or_link(VV[246],(void **)(void *)&Lnk246);} /* MAKE-FINAL-ACCESSOR-DFUN */
static object  LnkTLI245(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[245],(void **)(void *)&LnkLI245,2,first,ap);va_end(ap);return V1;} /* MAKE-EARLY-ACCESSOR */
static object  LnkTLI244(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[244],(void **)(void *)&LnkLI244,1,first,ap);va_end(ap);return V1;} /* FINAL-ACCESSOR-DFUN-TYPE */
static void LnkT243(){ call_or_link(VV[243],(void **)(void *)&Lnk243);} /* MAKE-FINAL-DFUN-INTERNAL */
static object  LnkTLI242(){return call_proc0(VV[242],(void **)(void *)&LnkLI242);} /* INITIAL-DFUN-INFO */
static void LnkT241(){ call_or_link(VV[241],(void **)(void *)&Lnk241);} /* INSURE-CACHING-DFUN */
static object  LnkTLI240(){return call_proc0(VV[240],(void **)(void *)&LnkLI240);} /* INITIAL-DISPATCH-DFUN-INFO */
static object  LnkTLI239(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[239],(void **)(void *)&LnkLI239,first,ap);va_end(ap);return V1;} /* PRECOMPUTE-EFFECTIVE-METHODS */
static object  LnkTLI238(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[238],(void **)(void *)&LnkLI238,5,first,ap);va_end(ap);return V1;} /* MAKE-EMF-CACHE */
static object  LnkTLI237(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[237],(void **)(void *)&LnkLI237,1,first,ap);va_end(ap);return V1;} /* GF-DFUN-CACHE */
static object  LnkTLI236(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[236],(void **)(void *)&LnkLI236,1,first,ap);va_end(ap);return V1;} /* COPY-CACHE */
static object  LnkTLI235(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[235],(void **)(void *)&LnkLI235,1,first,ap);va_end(ap);return V1;} /* GF-DFUN-INFO */
static object  LnkTLI234(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[234],(void **)(void *)&LnkLI234,1,first,ap);va_end(ap);return V1;} /* ARG-INFO-NKEYS */
static object  LnkTLI233(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[233],(void **)(void *)&LnkLI233,first,ap);va_end(ap);return V1;} /* GET-SECONDARY-DISPATCH-FUNCTION1 */
static object  LnkTLI232(){return call_proc0(VV[232],(void **)(void *)&LnkLI232);} /* DISPATCH-DFUN-INFO */
static void LnkT231(){ call_or_link(VV[231],(void **)(void *)&Lnk231);} /* GET-DISPATCH-FUNCTION */
static object  LnkTLI230(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[230],(void **)(void *)&LnkLI230,1,first,ap);va_end(ap);return V1;} /* METHODS-CONTAIN-EQL-SPECIALIZER-P */
static void LnkT229(){ call_or_link(VV[229],(void **)(void *)&Lnk229);} /* GENERATE-DISCRIMINATION-NET-INTERNAL */
static object  LnkTLI227(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[227],(void **)(void *)&LnkLI227,1,first,ap);va_end(ap);return V1;} /* GDEFINITION */
static void LnkT226(){ call_or_link(VV[226],(void **)(void *)&Lnk226);} /* DISPATCH-DFUN-COST */
static object  LnkTLI225(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[225],(void **)(void *)&LnkLI225,1,first,ap);va_end(ap);return V1;} /* CACHING-DFUN-COST */
static object  LnkTLI224(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[224],(void **)(void *)&LnkLI224,1,first,ap);va_end(ap);return V1;} /* CONSTANT-VALUE-DFUN-INFO */
static void LnkT223(){ call_or_link(VV[223],(void **)(void *)&Lnk223);} /* NOTANY */
static object  LnkTLI222(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[222],(void **)(void *)&LnkLI222,1,first,ap);va_end(ap);return V1;} /* COMPUTE-APPLICABLE-METHODS-EMF-STD-P */
static object  LnkTLI221(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[221],(void **)(void *)&LnkLI221,1,first,ap);va_end(ap);return V1;} /* CACHING-DFUN-INFO */
static void LnkT219(){ call_or_link(VV[219],(void **)(void *)&Lnk219);} /* MAKE-CONSTANT-VALUE-DFUN */
static object  LnkTLI218(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[218],(void **)(void *)&LnkLI218,first,ap);va_end(ap);return V1;} /* USE-CONSTANT-VALUE-DFUN-P */
static void LnkT217(){ call_or_link(VV[217],(void **)(void *)&Lnk217);} /* SOME */
static void LnkT216(ptr) object *ptr;{ call_or_link_closure(VV[216],(void **)(void *)&Lnk216,(void **)(void *)&Lclptr216);} /* GENERIC-FUNCTION-METHODS */
static object  LnkTLI215(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[215],(void **)(void *)&LnkLI215,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT214(){ call_or_link(VV[214],(void **)(void *)&Lnk214);} /* CCLOSURE-ENV-NTHCDR */
static object  LnkTLI213(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[213],(void **)(void *)&LnkLI213,1,first,ap);va_end(ap);return V1;} /* EARLY-GF-P */
static void LnkT210(){ call_or_link(VV[210],(void **)(void *)&Lnk210);} /* MAKE-CHECKING-DFUN */
static object  LnkTLI209(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[209],(void **)(void *)&LnkLI209,5,first,ap);va_end(ap);return V1;} /* MAKE-FINAL-ORDINARY-DFUN-INTERNAL */
static object  LnkTLI208(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[208],(void **)(void *)&LnkLI208,2,first,ap);va_end(ap);return V1;} /* CHECKING-DFUN-INFO */
static object  LnkTLI206(){return call_proc0(VV[206],(void **)(void *)&LnkLI206);} /* DEFAULT-METHOD-ONLY-DFUN-INFO */
static void LnkT205(){ call_or_link(VV[205],(void **)(void *)&Lnk205);} /* EVERY */
static void LnkT204(){ call_or_link(VV[204],(void **)(void *)&Lnk204);} /* GET-GENERIC-FUNCTION-INFO */
static void LnkT203(){ call_or_link(VV[203],(void **)(void *)&Lnk203);} /* MAKE-DISPATCH-DFUN */
static object  LnkTLI202(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[202],(void **)(void *)&LnkLI202,first,ap);va_end(ap);return V1;} /* USE-DISPATCH-DFUN-P */
static void LnkT201(){ call_or_link(VV[201],(void **)(void *)&Lnk201);} /* MAKE-CACHING-DFUN */
static object  LnkTLI200(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[200],(void **)(void *)&LnkLI200,1,first,ap);va_end(ap);return V1;} /* USE-CACHING-DFUN-P */
static void LnkT199(){ call_or_link(VV[199],(void **)(void *)&Lnk199);} /* MAKE-N-N-ACCESSOR-DFUN */
static object  LnkTLI198(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[198],(void **)(void *)&LnkLI198,2,first,ap);va_end(ap);return V1;} /* N-N-DFUN-INFO */
static object  LnkTLI196(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[196],(void **)(void *)&LnkLI196,257,first,ap);va_end(ap);return V1;} /* DEFAULT-LIMIT-FN */
static void LnkT195(){ call_or_link(VV[195],(void **)(void *)&Lnk195);} /* MAKE-ONE-INDEX-ACCESSOR-DFUN */
static object  LnkTLI194(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[194],(void **)(void *)&LnkLI194,first,ap);va_end(ap);return V1;} /* FILL-DFUN-CACHE */
static object  LnkTLI35(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[35],(void **)(void *)&LnkLI35,3,first,ap);va_end(ap);return V1;} /* ONE-INDEX-DFUN-INFO */
static object  LnkTLI192(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[192],(void **)(void *)&LnkLI192,262148,first,ap);va_end(ap);return V1;} /* GET-CACHE */
static object  LnkTLI191(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[191],(void **)(void *)&LnkLI191,4,first,ap);va_end(ap);return V1;} /* TWO-CLASS-DFUN-INFO */
static object  LnkTLI190(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[190],(void **)(void *)&LnkLI190,2,first,ap);va_end(ap);return V1;} /* ACCESSOR-MISS-FUNCTION */
static void LnkT189(){ call_or_link(VV[189],(void **)(void *)&Lnk189);} /* GET-DFUN-CONSTRUCTOR */
static object  LnkTLI188(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[188],(void **)(void *)&LnkLI188,3,first,ap);va_end(ap);return V1;} /* ONE-CLASS-DFUN-INFO */
static void LnkT187(){ call_or_link(VV[187],(void **)(void *)&Lnk187);} /* ERROR */
static object  LnkTLI181(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[181],(void **)(void *)&LnkLI181,2,first,ap);va_end(ap);return V1;} /* PRINTING-RANDOM-THING-INTERNAL */
static object  LnkTLI179(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[179],(void **)(void *)&LnkLI179,3,first,ap);va_end(ap);return V1;} /* MAKE-TOP-LEVEL-FORM */
static object  LnkTLI47(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[47],(void **)(void *)&LnkLI47,first,ap);va_end(ap);return V1;} /* UPDATE-DFUN */
static void LnkT178(ptr) object *ptr;{ call_or_link_closure(VV[178],(void **)(void *)&Lnk178,(void **)(void *)&Lclptr178);} /* GENERIC-FUNCTION-NAME */
static void LnkT177(ptr) object *ptr;{ call_or_link_closure(VV[177],(void **)(void *)&Lnk177,(void **)(void *)&Lclptr177);} /* GF-ARG-INFO */
static object  LnkTLI176(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[176],(void **)(void *)&LnkLI176,1,first,ap);va_end(ap);return V1;} /* GFS-OF-TYPE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

