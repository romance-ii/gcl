
#include "cmpinclude.h"
#include "gcl_cmploc.h"
void init_gcl_cmploc(){do_init(VV);}
/*	local entry for function WT-FIRST-VAR-ARG	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	princ_str("first",VV[0]);
	{object V1 = Cnil;
	VMR1(V1)}
	return Cnil;
}
/*	local entry for function WT-NEXT-VAR-ARG	*/

static object LI2()

{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	princ_str("va_arg(ap,object)",VV[0]);
	{object V2 = Cnil;
	VMR2(V2)}
	return Cnil;
}
/*	function definition for SET-LOC	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{register object V3;
	V3=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V4;
	V4= Cnil;
	if(!(((VV[1]->s.s_dbind))==(VV[2]))){
	goto T5;}
	base[1]= (*(LnkLI34))((V3));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T5;
T5:;
	if(!(((VV[1]->s.s_dbind))==(VV[3]))){
	goto T8;}
	if(!(type_of((V3))==t_cons)){
	goto T11;}
	{register object x= CMPcar((V3)),V5= VV[4];
	while(V5!=Cnil)
	if(eql(x,V5->c.c_car)){
	goto T15;
	}else V5=V5->c.c_cdr;
	goto T11;}
	goto T15;
T15:;
	if((CMPcadr((V3)))==Cnil){
	goto T11;}
	princ_str("\n	(void)(",VV[0]);
	base[1]= Ct;
	base[2]= CMPcaddr((V3));
	base[3]= CMPcadddr((V3));
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk35)();
	vs_top=sup;
	princ_str(");",VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T11;
T11:;
	if(!(type_of((V3))==t_cons)){
	goto T25;}
	if(!((CMPcar((V3)))==(VV[5]))){
	goto T25;}
	princ_str("\n	(void)",VV[0]);
	(void)((*(LnkLI36))((V3)));
	princ_char(59,VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T25;
T25:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T8;
T8:;
	if(!(((VV[1]->s.s_dbind))==(VV[6]))){
	goto T33;}
	if(((V3))==(VV[7])){
	goto T36;}
	base[1]= (*(LnkLI37))((V3));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T36;
T36:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T33;
T33:;
	if(!(((VV[1]->s.s_dbind))==(VV[8]))){
	goto T39;}
	base[1]= (V3);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk38)();
	return;
	goto T39;
T39:;
	if(!(((VV[1]->s.s_dbind))==(VV[9]))){
	goto T43;}
	base[1]= (V3);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk39)();
	return;
	goto T43;
T43:;
	if(!(((VV[1]->s.s_dbind))==(VV[10]))){
	goto T47;}
	base[1]= (V3);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk40)();
	return;
	goto T47;
T47:;
	if(!(((VV[1]->s.s_dbind))==(VV[11]))){
	goto T51;}
	base[1]= (V3);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk41)();
	return;
	goto T51;
T51:;
	if(!(type_of((VV[1]->s.s_dbind))==t_cons)){
	goto T54;}
	if(type_of(CMPcar((VV[1]->s.s_dbind)))==t_symbol){
	goto T55;}
	goto T54;
T54:;
	base[1]= (*(LnkLI42))();
	vs_top=(vs_base=base+1)+1;
	return;
	goto T55;
T55:;
	{object V6 =(CMPcar((VV[1]->s.s_dbind)))->s.s_plist;
	 object ind= VV[12];
	while(V6!=Cnil){
	if(V6->c.c_car==ind){
	V4= (V6->c.c_cdr->c.c_car);
	goto T62;
	}else V6=V6->c.c_cdr->c.c_cdr;}
	V4= Cnil;}
	goto T62;
T62:;
	if(((V4))==Cnil){
	goto T60;}
	base[1]= (V4);
	base[2]= (V3);
	{object V7;
	V7= CMPcdr((VV[1]->s.s_dbind));
	 vs_top=base+3;
	 while(V7!=Cnil)
	 {vs_push((V7)->c.c_car);V7=(V7)->c.c_cdr;}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	return;
	goto T60;
T60:;
	{object V8 =(CMPcar((VV[1]->s.s_dbind)))->s.s_plist;
	 object ind= VV[13];
	while(V8!=Cnil){
	if(V8->c.c_car==ind){
	V4= (V8->c.c_cdr->c.c_car);
	goto T69;
	}else V8=V8->c.c_cdr->c.c_cdr;}
	V4= Cnil;}
	goto T69;
T69:;
	if(((V4))==Cnil){
	goto T67;}
	princ_str("\n	",VV[0]);
	base[1]= (V4);
	{object V9;
	V9= CMPcdr((VV[1]->s.s_dbind));
	 vs_top=base+2;
	 while(V9!=Cnil)
	 {vs_push((V9)->c.c_car);V9=(V9)->c.c_cdr;}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	vs_top=sup;
	princ_str("= ",VV[0]);
	(void)((*(LnkLI36))((V3)));
	princ_char(59,VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T67;
T67:;
	base[1]= (*(LnkLI42))();
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for WT-LOC	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{register object V10;
	V10=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(((V10))==(Cnil))){
	goto T78;}
	princ_str("Cnil",VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T78;
T78:;
	if(!(((V10))==(Ct))){
	goto T82;}
	princ_str("Ct",VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T82;
T82:;
	if(!(((V10))==(VV[7]))){
	goto T86;}
	princ_str("vs_base[0]",VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T86;
T86:;
	if(!(type_of((V10))==t_cons)){
	goto T89;}
	if(type_of(CMPcar((V10)))==t_symbol){
	goto T90;}
	goto T89;
T89:;
	base[1]= (*(LnkLI42))();
	vs_top=(vs_base=base+1)+1;
	return;
	goto T90;
T90:;
	{object V11;
	{object V12 =(CMPcar((V10)))->s.s_plist;
	 object ind= VV[13];
	while(V12!=Cnil){
	if(V12->c.c_car==ind){
	V11= (V12->c.c_cdr->c.c_car);
	goto T94;
	}else V12=V12->c.c_cdr->c.c_cdr;}
	V11= Cnil;}
	goto T94;
T94:;
	if(((V11))!=Cnil){
	goto T95;}
	(void)((*(LnkLI42))());
	goto T95;
T95:;
	base[1]= (V11);
	{object V13;
	V13= CMPcdr((V10));
	 vs_top=base+2;
	 while(V13!=Cnil)
	 {vs_push((V13)->c.c_car);V13=(V13)->c.c_cdr;}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	return;}
	}
}
/*	local entry for function SET-RETURN	*/

static object LI5(V15)

register object V15;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V16;
	V16= (((V15))==(VV[7])?Ct:Cnil);
	if(((V16))==Cnil){
	goto T102;}
	{object V17 = (V16);
	VMR5(V17)}
	goto T102;
T102:;
	if(!(type_of((V15))==t_cons)){
	goto T105;}
	if(!((CMPcar((V15)))==(VV[14]))){
	goto T105;}
	if(!(number_compare(CMPcaadr((V15)),(VV[15]->s.s_dbind))==0)){
	goto T105;}
	princ_str("\n	vs_top=(vs_base=base+",VV[0]);
	(void)((*(LnkLI36))(CMPcdadr((V15))));
	princ_str(")+1;",VV[0]);
	(VV[16]->s.s_dbind)= Ct;
	{object V18 = Ct;
	VMR5(V18)}
	goto T105;
T105:;
	if(!(type_of((V15))==t_cons)){
	goto T117;}
	if(!((CMPcar((V15)))==(VV[17]))){
	goto T117;}
	if(!((STREF(object,CMPcadr((V15)),4))==(VV[18]))){
	goto T117;}
	if((STREF(object,CMPcadr((V15)),12))!=Cnil){
	goto T117;}
	if(!(eql(CMPcar(STREF(object,CMPcadr((V15)),8)),(VV[15]->s.s_dbind)))){
	goto T117;}
	princ_str("\n	vs_top=(vs_base=base+",VV[0]);
	(void)((*(LnkLI36))(CMPcdr(STREF(object,CMPcadr((V15)),8))));
	princ_str(")+1;",VV[0]);
	(VV[16]->s.s_dbind)= Ct;
	{object V19 = Ct;
	VMR5(V19)}
	goto T117;
T117:;
	{object V20 = (*(LnkLI37))((V15));
	VMR5(V20)}}
	return Cnil;
}
/*	local entry for function SET-TOP	*/

static object LI6(V22)

object V22;
{	 VMB6 VMS6 VMV6
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[19],(VV[19]->s.s_dbind));
	princ_str("\n	",VV[0]);
	V23= (*(LnkLI44))();
	(void)((*(LnkLI43))(/* INLINE-ARGS */V23));
	princ_str("= ",VV[0]);
	(void)((*(LnkLI36))((V22)));
	princ_char(59,VV[0]);
	princ_str("\n	vs_top=(vs_base=base+",VV[0]);
	V24= one_minus((VV[19]->s.s_dbind));
	(void)((*(LnkLI36))(/* INLINE-ARGS */V24));
	princ_str(")+1;",VV[0]);
	(VV[16]->s.s_dbind)= Ct;
	{object V25 = Ct;
	bds_unwind1;
	VMR6(V25)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-VS-BASE	*/

static object LI7(V27)

object V27;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	princ_str("vs_base[",VV[0]);
	(void)((*(LnkLI36))((V27)));
	princ_char(93,VV[0]);
	{object V28 = Cnil;
	VMR7(V28)}
	return Cnil;
}
/*	local entry for function WT-CAR	*/

static object LI8(V30)

object V30;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	princ_str("(V",VV[0]);
	(void)((*(LnkLI36))((V30)));
	princ_str("->c.c_car)",VV[0]);
	{object V31 = Cnil;
	VMR8(V31)}
	return Cnil;
}
/*	local entry for function WT-CDR	*/

static object LI9(V33)

object V33;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	princ_str("(V",VV[0]);
	(void)((*(LnkLI36))((V33)));
	princ_str("->c.c_cdr)",VV[0]);
	{object V34 = Cnil;
	VMR9(V34)}
	return Cnil;
}
/*	local entry for function WT-CADR	*/

static object LI10(V36)

object V36;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	princ_str("(V",VV[0]);
	(void)((*(LnkLI36))((V36)));
	princ_str("->c.c_cdr->c.c_car)",VV[0]);
	{object V37 = Cnil;
	VMR10(V37)}
	return Cnil;
}
/*	local entry for function WT-CVAR	*/

static object LI11(object V38,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V39;
	object V40;
	va_start(ap,first);
	V39= V38;
	narg = narg - 1;
	if (narg <= 0) goto T155;
	else {
	V40= first;}
	--narg; goto T156;
	goto T155;
T155:;
	V40= Cnil;
	goto T156;
T156:;
	if(((V40))==Cnil){
	goto T158;}
	princ_str("/* ",VV[0]);
	V41= symbol_name((V40));
	(void)((*(LnkLI36))(/* INLINE-ARGS */V41));
	princ_str(" */",VV[0]);
	goto T158;
T158:;
	princ_char(86,VV[0]);
	(void)((*(LnkLI36))((V39)));
	{object V42 = Cnil;
	VMR11(V42)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function WT-VV	*/

static object LI12(V44)

object V44;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	princ_str("VV[",VV[0]);
	(void)((*(LnkLI36))((V44)));
	princ_char(93,VV[0]);
	{object V45 = Cnil;
	VMR12(V45)}
	return Cnil;
}
/*	function definition for WT-FIXNUM-LOC	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{register object V46;
	V46=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V46))==t_cons)){
	goto T170;}
	if(!((CMPcar((V46)))==(VV[17]))){
	goto T170;}
	if(!((STREF(object,CMPcadr((V46)),4))==(VV[20]))){
	goto T170;}
	princ_char(86,VV[0]);
	(void)((*(LnkLI36))(STREF(object,CMPcadr((V46)),16)));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T170;
T170:;
	if(!(type_of((V46))==t_cons)){
	goto T179;}
	if(!((CMPcar((V46)))==(VV[21]))){
	goto T179;}
	princ_str("(long)",VV[0]);
	base[1]= CMPcaddr((V46));
	base[2]= CMPcadddr((V46));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	return;
	goto T179;
T179:;
	if(!(type_of((V46))==t_cons)){
	goto T188;}
	if(!((CMPcar((V46)))==(VV[22]))){
	goto T188;}
	(void)((*(LnkLI36))(CMPcaddr((V46))));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T188;
T188:;
	if(!(type_of((V46))==t_cons)){
	goto T194;}
	{register object x= CMPcar((V46)),V47= VV[23];
	while(V47!=Cnil)
	if(eql(x,V47->c.c_car)){
	goto T197;
	}else V47=V47->c.c_cdr;
	goto T194;}
	goto T197;
T197:;
	princ_str("((long)(",VV[0]);
	base[1]= CMPcaddr((V46));
	base[2]= CMPcadddr((V46));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	princ_str("))",VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T194;
T194:;
	princ_str("fix(",VV[0]);
	(void)((*(LnkLI36))((V46)));
	princ_char(41,VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function WT-INTEGER-LOC	*/

static object LI14(object V48,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB14 VMS14 VMV14
	{register object V49;
	object V50;
	va_start(ap,first);
	V49= V48;
	narg = narg - 1;
	if (narg <= 0) goto T207;
	else {
	V50= first;}
	--narg; goto T208;
	goto T207;
T207:;
	V50= Cnil;
	goto T208;
T208:;
	{object V51;
	object V52;
	V51= Ct;
	if(type_of((V49))==t_cons){
	goto T212;}
	V52= Cnil;
	goto T211;
	goto T212;
T212:;
	V52= CMPcar((V49));
	goto T211;
T211:;
	{object V53= (V52);
	if((V53!= VV[21]))goto T215;
	princ_str("stoi(",VV[0]);
	base[1]= CMPcaddr((V49));
	base[2]= CMPcadddr((V49));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	princ_char(41,VV[0]);
	goto T214;
	goto T215;
T215:;
	if((V53!= VV[46]))goto T222;
	V51= Cnil;
	base[1]= CMPcaddr((V49));
	base[2]= CMPcadddr((V49));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	goto T214;
	goto T222;
T222:;
	if((V53!= VV[22]))goto T227;
	princ_str("stoi(",VV[0]);
	(void)((*(LnkLI36))(CMPcaddr((V49))));
	princ_char(41,VV[0]);
	goto T214;
	goto T227;
T227:;
	if((V53!= VV[17]))goto T231;
	{object V54= STREF(object,CMPcadr((V49)),4);
	if((V54!= VV[47]))goto T232;
	V51= Cnil;
	princ_char(86,VV[0]);
	(void)((*(LnkLI36))(STREF(object,CMPcadr((V49)),16)));
	goto T214;
	goto T232;
T232:;
	if((V54!= VV[20]))goto T237;
	princ_str("stoi(V",VV[0]);
	(void)((*(LnkLI36))(STREF(object,CMPcadr((V49)),16)));
	princ_char(41,VV[0]);
	goto T214;
	goto T237;
T237:;
	princ_str("otoi(",VV[0]);
	(void)((*(LnkLI36))((V49)));
	princ_char(41,VV[0]);
	goto T214;}
	goto T231;
T231:;
	princ_str("otoi(",VV[0]);
	(void)((*(LnkLI36))((V49)));
	princ_char(41,VV[0]);}
	goto T214;
T214:;
	if((V51)==Cnil){
	{object V55 = Cnil;
	VMR14(V55)}}
	if(((VV[24]->s.s_dbind))==Cnil){
	goto T247;}
	{object V56 = Cnil;
	VMR14(V56)}
	goto T247;
T247:;
	{object V57 = (*(LnkLI48))();
	VMR14(V57)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function FIXNUM-LOC-P	*/

static object LI15(V59)

register object V59;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(type_of((V59))==t_cons){
	goto T249;}
	{object V60 = Cnil;
	VMR15(V60)}
	goto T249;
T249:;{object V61;
	if((CMPcar((V59)))==(VV[17])){
	goto T253;}
	V61= Cnil;
	goto T252;
	goto T253;
T253:;
	V61= ((STREF(object,CMPcadr((V59)),4))==(VV[20])?Ct:Cnil);
	goto T252;
T252:;
	if(V61==Cnil)goto T251;
	{object V62 = V61;
	VMR15(V62)}
	goto T251;
T251:;}
	if(!((CMPcar((V59)))==(VV[21]))){
	goto T255;}
	{object V63 = Ct;
	VMR15(V63)}
	goto T255;
T255:;
	{object V64 = ((CMPcar((V59)))==(VV[22])?Ct:Cnil);
	VMR15(V64)}
	return Cnil;
}
/*	local entry for function WT-FIXNUM-VALUE	*/

static object LI16(V67,V68)

object V67;object V68;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	if(((V67))==Cnil){
	goto T258;}
	princ_str("VV[",VV[0]);
	(void)((*(LnkLI36))((V67)));
	princ_char(93,VV[0]);
	{object V69 = Cnil;
	VMR16(V69)}
	goto T258;
T258:;
	princ_str("small_fixnum(",VV[0]);
	(void)((*(LnkLI36))((V68)));
	princ_char(41,VV[0]);
	{object V70 = Cnil;
	VMR16(V70)}
	return Cnil;
}
/*	function definition for WT-CHARACTER-LOC	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{register object V71;
	V71=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V71))==t_cons)){
	goto T267;}
	if(!((CMPcar((V71)))==(VV[17]))){
	goto T267;}
	if(!((STREF(object,CMPcadr((V71)),4))==(VV[25]))){
	goto T267;}
	princ_char(86,VV[0]);
	(void)((*(LnkLI36))(STREF(object,CMPcadr((V71)),16)));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T267;
T267:;
	if(!(type_of((V71))==t_cons)){
	goto T276;}
	if(!((CMPcar((V71)))==(VV[26]))){
	goto T276;}
	base[1]= CMPcaddr((V71));
	base[2]= CMPcadddr((V71));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	return;
	goto T276;
T276:;
	if(!(type_of((V71))==t_cons)){
	goto T283;}
	if(!((CMPcar((V71)))==(VV[27]))){
	goto T283;}
	(void)((*(LnkLI36))(CMPcaddr((V71))));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T283;
T283:;
	princ_str("char_code(",VV[0]);
	(void)((*(LnkLI36))((V71)));
	princ_char(41,VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function CHARACTER-LOC-P	*/

static object LI18(V73)

register object V73;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	if(type_of((V73))==t_cons){
	goto T291;}
	{object V74 = Cnil;
	VMR18(V74)}
	goto T291;
T291:;{object V75;
	if((CMPcar((V73)))==(VV[17])){
	goto T295;}
	V75= Cnil;
	goto T294;
	goto T295;
T295:;
	V75= ((STREF(object,CMPcadr((V73)),4))==(VV[25])?Ct:Cnil);
	goto T294;
T294:;
	if(V75==Cnil)goto T293;
	{object V76 = V75;
	VMR18(V76)}
	goto T293;
T293:;}
	if(!((CMPcar((V73)))==(VV[26]))){
	goto T297;}
	{object V77 = Ct;
	VMR18(V77)}
	goto T297;
T297:;
	{object V78 = ((CMPcar((V73)))==(VV[27])?Ct:Cnil);
	VMR18(V78)}
	return Cnil;
}
/*	local entry for function WT-CHARACTER-VALUE	*/

static object LI19(V81,V82)

object V81;object V82;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	princ_str("VV[",VV[0]);
	(void)((*(LnkLI36))((V81)));
	princ_char(93,VV[0]);
	{object V83 = Cnil;
	VMR19(V83)}
	return Cnil;
}
/*	function definition for WT-LONG-FLOAT-LOC	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{register object V84;
	V84=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V84))==t_cons)){
	goto T303;}
	if(!((CMPcar((V84)))==(VV[17]))){
	goto T303;}
	if(!((STREF(object,CMPcadr((V84)),4))==(VV[28]))){
	goto T303;}
	princ_char(86,VV[0]);
	(void)((*(LnkLI36))(STREF(object,CMPcadr((V84)),16)));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T303;
T303:;
	if(!(type_of((V84))==t_cons)){
	goto T312;}
	if(!((CMPcar((V84)))==(VV[29]))){
	goto T312;}
	base[1]= CMPcaddr((V84));
	base[2]= CMPcadddr((V84));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	return;
	goto T312;
T312:;
	if(!(type_of((V84))==t_cons)){
	goto T319;}
	if(!((CMPcar((V84)))==(VV[30]))){
	goto T319;}
	(void)((*(LnkLI36))(CMPcaddr((V84))));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T319;
T319:;
	princ_str("lf(",VV[0]);
	(void)((*(LnkLI36))((V84)));
	princ_char(41,VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function LONG-FLOAT-LOC-P	*/

static object LI21(V86)

register object V86;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	if(type_of((V86))==t_cons){
	goto T327;}
	{object V87 = Cnil;
	VMR21(V87)}
	goto T327;
T327:;{object V88;
	if((CMPcar((V86)))==(VV[17])){
	goto T331;}
	V88= Cnil;
	goto T330;
	goto T331;
T331:;
	V88= ((STREF(object,CMPcadr((V86)),4))==(VV[28])?Ct:Cnil);
	goto T330;
T330:;
	if(V88==Cnil)goto T329;
	{object V89 = V88;
	VMR21(V89)}
	goto T329;
T329:;}
	if(!((CMPcar((V86)))==(VV[29]))){
	goto T333;}
	{object V90 = Ct;
	VMR21(V90)}
	goto T333;
T333:;
	{object V91 = ((CMPcar((V86)))==(VV[30])?Ct:Cnil);
	VMR21(V91)}
	return Cnil;
}
/*	local entry for function WT-LONG-FLOAT-VALUE	*/

static object LI22(V94,V95)

object V94;object V95;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	princ_str("VV[",VV[0]);
	(void)((*(LnkLI36))((V94)));
	princ_char(93,VV[0]);
	{object V96 = Cnil;
	VMR22(V96)}
	return Cnil;
}
/*	function definition for WT-SHORT-FLOAT-LOC	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{register object V97;
	V97=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V97))==t_cons)){
	goto T339;}
	if(!((CMPcar((V97)))==(VV[17]))){
	goto T339;}
	if(!((STREF(object,CMPcadr((V97)),4))==(VV[31]))){
	goto T339;}
	princ_char(86,VV[0]);
	(void)((*(LnkLI36))(STREF(object,CMPcadr((V97)),16)));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T339;
T339:;
	if(!(type_of((V97))==t_cons)){
	goto T348;}
	if(!((CMPcar((V97)))==(VV[32]))){
	goto T348;}
	base[1]= CMPcaddr((V97));
	base[2]= CMPcadddr((V97));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	return;
	goto T348;
T348:;
	if(!(type_of((V97))==t_cons)){
	goto T355;}
	if(!((CMPcar((V97)))==(VV[33]))){
	goto T355;}
	(void)((*(LnkLI36))(CMPcaddr((V97))));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T355;
T355:;
	princ_str("sf(",VV[0]);
	(void)((*(LnkLI36))((V97)));
	princ_char(41,VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function SHORT-FLOAT-LOC-P	*/

static object LI24(V99)

register object V99;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	if(type_of((V99))==t_cons){
	goto T363;}
	{object V100 = Cnil;
	VMR24(V100)}
	goto T363;
T363:;{object V101;
	if((CMPcar((V99)))==(VV[17])){
	goto T367;}
	V101= Cnil;
	goto T366;
	goto T367;
T367:;
	V101= ((STREF(object,CMPcadr((V99)),4))==(VV[31])?Ct:Cnil);
	goto T366;
T366:;
	if(V101==Cnil)goto T365;
	{object V102 = V101;
	VMR24(V102)}
	goto T365;
T365:;}
	if(!((CMPcar((V99)))==(VV[32]))){
	goto T369;}
	{object V103 = Ct;
	VMR24(V103)}
	goto T369;
T369:;
	{object V104 = ((CMPcar((V99)))==(VV[33])?Ct:Cnil);
	VMR24(V104)}
	return Cnil;
}
/*	local entry for function WT-SHORT-FLOAT-VALUE	*/

static object LI25(V107,V108)

object V107;object V108;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	princ_str("VV[",VV[0]);
	(void)((*(LnkLI36))((V107)));
	princ_char(93,VV[0]);
	{object V109 = Cnil;
	VMR25(V109)}
	return Cnil;
}
static object  LnkTLI48(){return call_proc0(VV[48],(void **)(void *)&LnkLI48);} /* WFS-ERROR */
static void LnkT45(){ call_or_link(VV[45],(void **)(void *)&Lnk45);} /* WT-INLINE-LOC */
static object  LnkTLI44(){return call_proc0(VV[44],(void **)(void *)&LnkLI44);} /* VS-PUSH */
static object  LnkTLI43(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[43],(void **)(void *)&LnkLI43,1,first,ap);va_end(ap);return V1;} /* WT-VS */
static object  LnkTLI42(){return call_proc0(VV[42],(void **)(void *)&LnkLI42);} /* BABOON */
static void LnkT41(){ call_or_link(VV[41],(void **)(void *)&Lnk41);} /* SET-RETURN-SHORT-FLOAT */
static void LnkT40(){ call_or_link(VV[40],(void **)(void *)&Lnk40);} /* SET-RETURN-LONG-FLOAT */
static void LnkT39(){ call_or_link(VV[39],(void **)(void *)&Lnk39);} /* SET-RETURN-CHARACTER */
static void LnkT38(){ call_or_link(VV[38],(void **)(void *)&Lnk38);} /* SET-RETURN-FIXNUM */
static object  LnkTLI37(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[37],(void **)(void *)&LnkLI37,1,first,ap);va_end(ap);return V1;} /* SET-TOP */
static object  LnkTLI36(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[36],(void **)(void *)&LnkLI36,1,first,ap);va_end(ap);return V1;} /* WT1 */
static void LnkT35(){ call_or_link(VV[35],(void **)(void *)&Lnk35);} /* WT-INLINE */
static object  LnkTLI34(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[34],(void **)(void *)&LnkLI34,1,first,ap);va_end(ap);return V1;} /* SET-RETURN */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

