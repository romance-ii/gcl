
#include "cmpinclude.h"
#include "cmploc.h"
void init_cmploc(){do_init(VV);}
/*	function definition for WT-FIRST-VAR-ARG	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	princ_str("first",VV[0]);
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local entry for function WT-NEXT-VAR-ARG	*/

static object LI2()

{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	princ_str("va_arg(ap,object)",VV[0]);
	{object V1 = Cnil;
	VMR2(V1)}
	return Cnil;
}
/*	function definition for SET-LOC	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	{register object V2;
	check_arg(1);
	V2=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V3;
	V3= Cnil;
	if(!((symbol_value(VV[1]))==(VV[2]))){
	goto T5;}
	base[1]= (*(LnkLI34))((V2));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T5;
T5:;
	if(!((symbol_value(VV[1]))==(VV[3]))){
	goto T8;}
	if(!(type_of((V2))==t_cons)){
	goto T11;}
	{register object x= car((V2)),V4= VV[4];
	while(!endp(V4))
	if(eql(x,V4->c.c_car)){
	goto T15;
	}else V4=V4->c.c_cdr;
	goto T11;}
	goto T15;
T15:;
	if((cadr((V2)))==Cnil){
	goto T11;}
	princ_str("\n	(void)(",VV[0]);
	base[1]= Ct;
	base[2]= caddr((V2));
	base[3]= cadddr((V2));
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk35)();
	vs_top=sup;
	princ_str(");",VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T11;
T11:;
	if(!(type_of((V2))==t_cons)){
	goto T25;}
	if(!((car((V2)))==(VV[5]))){
	goto T25;}
	princ_str("\n	(void)",VV[0]);
	(void)((*(LnkLI36))((V2)));
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
	if(!((symbol_value(VV[1]))==(VV[6]))){
	goto T33;}
	if(((V2))==(VV[7])){
	goto T36;}
	base[1]= (*(LnkLI37))((V2));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T36;
T36:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T33;
T33:;
	if(!((symbol_value(VV[1]))==(VV[8]))){
	goto T39;}
	base[1]= (V2);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk38)();
	return;
	goto T39;
T39:;
	if(!((symbol_value(VV[1]))==(VV[9]))){
	goto T43;}
	base[1]= (V2);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk39)();
	return;
	goto T43;
T43:;
	if(!((symbol_value(VV[1]))==(VV[10]))){
	goto T47;}
	base[1]= (V2);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk40)();
	return;
	goto T47;
T47:;
	if(!((symbol_value(VV[1]))==(VV[11]))){
	goto T51;}
	base[1]= (V2);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk41)();
	return;
	goto T51;
T51:;
	if(!(type_of(symbol_value(VV[1]))==t_cons)){
	goto T54;}
	if(type_of(car(symbol_value(VV[1])))==t_symbol){
	goto T55;}
	goto T54;
T54:;
	base[1]= (*(LnkLI42))();
	vs_top=(vs_base=base+1)+1;
	return;
	goto T55;
T55:;
	V3= get(car(symbol_value(VV[1])),VV[12],Cnil);
	if(((V3))==Cnil){
	goto T60;}
	base[1]= (V3);
	base[2]= (V2);
	{object V5;
	V5= cdr(symbol_value(VV[1]));
	 vs_top=base+3;
	 while(!endp(V5))
	 {vs_push(car(V5));V5=cdr(V5);}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	return;
	goto T60;
T60:;
	V3= get(car(symbol_value(VV[1])),VV[13],Cnil);
	if(((V3))==Cnil){
	goto T67;}
	princ_str("\n	",VV[0]);
	base[1]= (V3);
	{object V6;
	V6= cdr(symbol_value(VV[1]));
	 vs_top=base+2;
	 while(!endp(V6))
	 {vs_push(car(V6));V6=cdr(V6);}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	vs_top=sup;
	princ_str("= ",VV[0]);
	(void)((*(LnkLI36))((V2)));
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
	vs_reserve(VM4);
	{register object V7;
	check_arg(1);
	V7=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(((V7))==(Cnil))){
	goto T78;}
	princ_str("Cnil",VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T78;
T78:;
	if(!(((V7))==(Ct))){
	goto T82;}
	princ_str("Ct",VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T82;
T82:;
	if(!(((V7))==(VV[7]))){
	goto T86;}
	princ_str("vs_base[0]",VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T86;
T86:;
	if(!(type_of((V7))==t_cons)){
	goto T89;}
	if(type_of(car((V7)))==t_symbol){
	goto T90;}
	goto T89;
T89:;
	base[1]= (*(LnkLI42))();
	vs_top=(vs_base=base+1)+1;
	return;
	goto T90;
T90:;
	{object V8;
	V8= get(car((V7)),VV[13],Cnil);
	if(((V8))!=Cnil){
	goto T95;}
	(void)((*(LnkLI42))());
	goto T95;
T95:;
	base[1]= (V8);
	{object V9;
	V9= cdr((V7));
	 vs_top=base+2;
	 while(!endp(V9))
	 {vs_push(car(V9));V9=cdr(V9);}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	return;}
	}
}
/*	local entry for function SET-RETURN	*/

static object LI5(V11)

register object V11;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V12;
	V12= (((V11))==(VV[7])?Ct:Cnil);
	if(((V12))==Cnil){
	goto T102;}
	{object V13 = (V12);
	VMR5(V13)}
	goto T102;
T102:;
	if(!(type_of((V11))==t_cons)){
	goto T105;}
	if(!((car((V11)))==(VV[14]))){
	goto T105;}
	if(!(number_compare(caadr((V11)),symbol_value(VV[15]))==0)){
	goto T105;}
	princ_str("\n	vs_top=(vs_base=base+",VV[0]);
	(void)((*(LnkLI36))(cdadr((V11))));
	princ_str(")+1;",VV[0]);
	setq(VV[16],Ct);
	{object V14 = Ct;
	VMR5(V14)}
	goto T105;
T105:;
	if(!(type_of((V11))==t_cons)){
	goto T117;}
	if(!((car((V11)))==(VV[17]))){
	goto T117;}
	V15= structure_ref(cadr((V11)),VV[17],1);
	if(!((/* INLINE-ARGS */V15)==(VV[18]))){
	goto T117;}
	if((structure_ref(cadr((V11)),VV[17],3))!=Cnil){
	goto T117;}
	V16= structure_ref(cadr((V11)),VV[17],2);
	if(!(eql(car(/* INLINE-ARGS */V16),symbol_value(VV[15])))){
	goto T117;}
	princ_str("\n	vs_top=(vs_base=base+",VV[0]);
	V17= structure_ref(cadr((V11)),VV[17],2);
	(void)((*(LnkLI36))(cdr(/* INLINE-ARGS */V17)));
	princ_str(")+1;",VV[0]);
	setq(VV[16],Ct);
	{object V18 = Ct;
	VMR5(V18)}
	goto T117;
T117:;
	{object V19 = (*(LnkLI37))((V11));
	VMR5(V19)}}
	return Cnil;
}
/*	local entry for function SET-TOP	*/

static object LI6(V21)

object V21;
{	 VMB6 VMS6 VMV6
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[19],symbol_value(VV[19]));
	princ_str("\n	",VV[0]);
	V22= (*(LnkLI44))();
	(void)((*(LnkLI43))(/* INLINE-ARGS */V22));
	princ_str("= ",VV[0]);
	(void)((*(LnkLI36))((V21)));
	princ_char(59,VV[0]);
	princ_str("\n	vs_top=(vs_base=base+",VV[0]);
	V23= one_minus((VV[19]->s.s_dbind));
	(void)((*(LnkLI36))(/* INLINE-ARGS */V23));
	princ_str(")+1;",VV[0]);
	setq(VV[16],Ct);
	{object V24 = Ct;
	bds_unwind1;
	VMR6(V24)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-VS-BASE	*/

static object LI7(V26)

object V26;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	princ_str("vs_base[",VV[0]);
	(void)((*(LnkLI36))((V26)));
	princ_char(93,VV[0]);
	{object V27 = Cnil;
	VMR7(V27)}
	return Cnil;
}
/*	local entry for function WT-CAR	*/

static object LI8(V29)

object V29;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	princ_str("(V",VV[0]);
	(void)((*(LnkLI36))((V29)));
	princ_str("->c.c_car)",VV[0]);
	{object V30 = Cnil;
	VMR8(V30)}
	return Cnil;
}
/*	local entry for function WT-CDR	*/

static object LI9(V32)

object V32;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	princ_str("(V",VV[0]);
	(void)((*(LnkLI36))((V32)));
	princ_str("->c.c_cdr)",VV[0]);
	{object V33 = Cnil;
	VMR9(V33)}
	return Cnil;
}
/*	local entry for function WT-CADR	*/

static object LI10(V35)

object V35;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	princ_str("(V",VV[0]);
	(void)((*(LnkLI36))((V35)));
	princ_str("->c.c_cdr->c.c_car)",VV[0]);
	{object V36 = Cnil;
	VMR10(V36)}
	return Cnil;
}
/*	local entry for function WT-CVAR	*/

static object LI11(object V37,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V38;
	object V39;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V38= V37;
	narg = narg - 1;
	if (narg <= 0) goto T155;
	else {
	V39= first;}
	--narg; goto T156;
	goto T155;
T155:;
	V39= Cnil;
	goto T156;
T156:;
	if(((V39))==Cnil){
	goto T158;}
	princ_str("/* ",VV[0]);
	V40= symbol_name((V39));
	(void)((*(LnkLI36))(/* INLINE-ARGS */V40));
	princ_str(" */",VV[0]);
	goto T158;
T158:;
	princ_char(86,VV[0]);
	(void)((*(LnkLI36))((V38)));
	{object V41 = Cnil;
	VMR11(V41)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function WT-VV	*/

static object LI12(V43)

object V43;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	princ_str("VV[",VV[0]);
	(void)((*(LnkLI36))((V43)));
	princ_char(93,VV[0]);
	{object V44 = Cnil;
	VMR12(V44)}
	return Cnil;
}
/*	function definition for WT-FIXNUM-LOC	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	{register object V45;
	check_arg(1);
	V45=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V45))==t_cons)){
	goto T170;}
	if(!((car((V45)))==(VV[17]))){
	goto T170;}
	V46= structure_ref(cadr((V45)),VV[17],1);
	if(!((/* INLINE-ARGS */V46)==(VV[20]))){
	goto T170;}
	princ_char(86,VV[0]);
	V47= structure_ref(cadr((V45)),VV[17],4);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V47));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T170;
T170:;
	if(!(type_of((V45))==t_cons)){
	goto T179;}
	if(!((car((V45)))==(VV[21]))){
	goto T179;}
	princ_str("(long)",VV[0]);
	base[1]= caddr((V45));
	base[2]= cadddr((V45));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	return;
	goto T179;
T179:;
	if(!(type_of((V45))==t_cons)){
	goto T188;}
	if(!((car((V45)))==(VV[22]))){
	goto T188;}
	(void)((*(LnkLI36))(caddr((V45))));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T188;
T188:;
	if(!(type_of((V45))==t_cons)){
	goto T194;}
	{register object x= car((V45)),V48= VV[23];
	while(!endp(V48))
	if(eql(x,V48->c.c_car)){
	goto T197;
	}else V48=V48->c.c_cdr;
	goto T194;}
	goto T197;
T197:;
	princ_str("((long)(",VV[0]);
	base[1]= caddr((V45));
	base[2]= cadddr((V45));
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
	(void)((*(LnkLI36))((V45)));
	princ_char(41,VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for WT-INTEGER-LOC	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	{register object V49;
	object V50;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V49=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T207;}
	V50=(base[1]);
	vs_top=sup;
	goto T208;
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
	V52= car((V49));
	goto T211;
T211:;
	{object V53= (V52);
	if((V53!= VV[21]))goto T215;
	princ_str("stoi(",VV[0]);
	base[3]= caddr((V49));
	base[4]= cadddr((V49));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	princ_char(41,VV[0]);
	goto T214;
	goto T215;
T215:;
	if((V53!= VV[46]))goto T222;
	V51= Cnil;
	base[3]= caddr((V49));
	base[4]= cadddr((V49));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	goto T214;
	goto T222;
T222:;
	if((V53!= VV[22]))goto T227;
	princ_str("stoi(",VV[0]);
	(void)((*(LnkLI36))(caddr((V49))));
	princ_char(41,VV[0]);
	goto T214;
	goto T227;
T227:;
	if((V53!= VV[17]))goto T231;
	V55= structure_ref(cadr((V49)),VV[17],1);
	{object V54= /* INLINE-ARGS */V55;
	if((V54!= VV[47]))goto T232;
	V51= Cnil;
	princ_char(86,VV[0]);
	V56= structure_ref(cadr((V49)),VV[17],4);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V56));
	goto T214;
	goto T232;
T232:;
	if((V54!= VV[20]))goto T237;
	princ_str("stoi(V",VV[0]);
	V57= structure_ref(cadr((V49)),VV[17],4);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V57));
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
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	if((symbol_value(VV[24]))==Cnil){
	goto T247;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T247;
T247:;
	base[3]= (*(LnkLI48))();
	vs_top=(vs_base=base+3)+1;
	return;}
	}
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
	if((car((V59)))==(VV[17])){
	goto T253;}
	V61= Cnil;
	goto T252;
	goto T253;
T253:;
	V62= structure_ref(cadr((V59)),VV[17],1);
	V61= ((/* INLINE-ARGS */V62)==(VV[20])?Ct:Cnil);
	goto T252;
T252:;
	if(V61==Cnil)goto T251;
	{object V63 = V61;
	VMR15(V63)}
	goto T251;
T251:;}
	if(!((car((V59)))==(VV[21]))){
	goto T255;}
	{object V64 = Ct;
	VMR15(V64)}
	goto T255;
T255:;
	{object V65 = ((car((V59)))==(VV[22])?Ct:Cnil);
	VMR15(V65)}
	return Cnil;
}
/*	local entry for function WT-FIXNUM-VALUE	*/

static object LI16(V68,V69)

object V68;object V69;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	if(((V68))==Cnil){
	goto T258;}
	princ_str("VV[",VV[0]);
	(void)((*(LnkLI36))((V68)));
	princ_char(93,VV[0]);
	{object V70 = Cnil;
	VMR16(V70)}
	goto T258;
T258:;
	princ_str("small_fixnum(",VV[0]);
	(void)((*(LnkLI36))((V69)));
	princ_char(41,VV[0]);
	{object V71 = Cnil;
	VMR16(V71)}
	return Cnil;
}
/*	function definition for WT-CHARACTER-LOC	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{register object V72;
	check_arg(1);
	V72=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V72))==t_cons)){
	goto T267;}
	if(!((car((V72)))==(VV[17]))){
	goto T267;}
	V73= structure_ref(cadr((V72)),VV[17],1);
	if(!((/* INLINE-ARGS */V73)==(VV[25]))){
	goto T267;}
	princ_char(86,VV[0]);
	V74= structure_ref(cadr((V72)),VV[17],4);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V74));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T267;
T267:;
	if(!(type_of((V72))==t_cons)){
	goto T276;}
	if(!((car((V72)))==(VV[26]))){
	goto T276;}
	base[1]= caddr((V72));
	base[2]= cadddr((V72));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	return;
	goto T276;
T276:;
	if(!(type_of((V72))==t_cons)){
	goto T283;}
	if(!((car((V72)))==(VV[27]))){
	goto T283;}
	(void)((*(LnkLI36))(caddr((V72))));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T283;
T283:;
	princ_str("char_code(",VV[0]);
	(void)((*(LnkLI36))((V72)));
	princ_char(41,VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function CHARACTER-LOC-P	*/

static object LI18(V76)

register object V76;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	if(type_of((V76))==t_cons){
	goto T291;}
	{object V77 = Cnil;
	VMR18(V77)}
	goto T291;
T291:;{object V78;
	if((car((V76)))==(VV[17])){
	goto T295;}
	V78= Cnil;
	goto T294;
	goto T295;
T295:;
	V79= structure_ref(cadr((V76)),VV[17],1);
	V78= ((/* INLINE-ARGS */V79)==(VV[25])?Ct:Cnil);
	goto T294;
T294:;
	if(V78==Cnil)goto T293;
	{object V80 = V78;
	VMR18(V80)}
	goto T293;
T293:;}
	if(!((car((V76)))==(VV[26]))){
	goto T297;}
	{object V81 = Ct;
	VMR18(V81)}
	goto T297;
T297:;
	{object V82 = ((car((V76)))==(VV[27])?Ct:Cnil);
	VMR18(V82)}
	return Cnil;
}
/*	local entry for function WT-CHARACTER-VALUE	*/

static object LI19(V85,V86)

object V85;object V86;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	princ_str("VV[",VV[0]);
	(void)((*(LnkLI36))((V85)));
	princ_char(93,VV[0]);
	{object V87 = Cnil;
	VMR19(V87)}
	return Cnil;
}
/*	function definition for WT-LONG-FLOAT-LOC	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{register object V88;
	check_arg(1);
	V88=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V88))==t_cons)){
	goto T303;}
	if(!((car((V88)))==(VV[17]))){
	goto T303;}
	V89= structure_ref(cadr((V88)),VV[17],1);
	if(!((/* INLINE-ARGS */V89)==(VV[28]))){
	goto T303;}
	princ_char(86,VV[0]);
	V90= structure_ref(cadr((V88)),VV[17],4);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V90));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T303;
T303:;
	if(!(type_of((V88))==t_cons)){
	goto T312;}
	if(!((car((V88)))==(VV[29]))){
	goto T312;}
	base[1]= caddr((V88));
	base[2]= cadddr((V88));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	return;
	goto T312;
T312:;
	if(!(type_of((V88))==t_cons)){
	goto T319;}
	if(!((car((V88)))==(VV[30]))){
	goto T319;}
	(void)((*(LnkLI36))(caddr((V88))));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T319;
T319:;
	princ_str("lf(",VV[0]);
	(void)((*(LnkLI36))((V88)));
	princ_char(41,VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function LONG-FLOAT-LOC-P	*/

static object LI21(V92)

register object V92;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	if(type_of((V92))==t_cons){
	goto T327;}
	{object V93 = Cnil;
	VMR21(V93)}
	goto T327;
T327:;{object V94;
	if((car((V92)))==(VV[17])){
	goto T331;}
	V94= Cnil;
	goto T330;
	goto T331;
T331:;
	V95= structure_ref(cadr((V92)),VV[17],1);
	V94= ((/* INLINE-ARGS */V95)==(VV[28])?Ct:Cnil);
	goto T330;
T330:;
	if(V94==Cnil)goto T329;
	{object V96 = V94;
	VMR21(V96)}
	goto T329;
T329:;}
	if(!((car((V92)))==(VV[29]))){
	goto T333;}
	{object V97 = Ct;
	VMR21(V97)}
	goto T333;
T333:;
	{object V98 = ((car((V92)))==(VV[30])?Ct:Cnil);
	VMR21(V98)}
	return Cnil;
}
/*	local entry for function WT-LONG-FLOAT-VALUE	*/

static object LI22(V101,V102)

object V101;object V102;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	princ_str("VV[",VV[0]);
	(void)((*(LnkLI36))((V101)));
	princ_char(93,VV[0]);
	{object V103 = Cnil;
	VMR22(V103)}
	return Cnil;
}
/*	function definition for WT-SHORT-FLOAT-LOC	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	{register object V104;
	check_arg(1);
	V104=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V104))==t_cons)){
	goto T339;}
	if(!((car((V104)))==(VV[17]))){
	goto T339;}
	V105= structure_ref(cadr((V104)),VV[17],1);
	if(!((/* INLINE-ARGS */V105)==(VV[31]))){
	goto T339;}
	princ_char(86,VV[0]);
	V106= structure_ref(cadr((V104)),VV[17],4);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V106));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T339;
T339:;
	if(!(type_of((V104))==t_cons)){
	goto T348;}
	if(!((car((V104)))==(VV[32]))){
	goto T348;}
	base[1]= caddr((V104));
	base[2]= cadddr((V104));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	return;
	goto T348;
T348:;
	if(!(type_of((V104))==t_cons)){
	goto T355;}
	if(!((car((V104)))==(VV[33]))){
	goto T355;}
	(void)((*(LnkLI36))(caddr((V104))));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T355;
T355:;
	princ_str("sf(",VV[0]);
	(void)((*(LnkLI36))((V104)));
	princ_char(41,VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function SHORT-FLOAT-LOC-P	*/

static object LI24(V108)

register object V108;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	if(type_of((V108))==t_cons){
	goto T363;}
	{object V109 = Cnil;
	VMR24(V109)}
	goto T363;
T363:;{object V110;
	if((car((V108)))==(VV[17])){
	goto T367;}
	V110= Cnil;
	goto T366;
	goto T367;
T367:;
	V111= structure_ref(cadr((V108)),VV[17],1);
	V110= ((/* INLINE-ARGS */V111)==(VV[31])?Ct:Cnil);
	goto T366;
T366:;
	if(V110==Cnil)goto T365;
	{object V112 = V110;
	VMR24(V112)}
	goto T365;
T365:;}
	if(!((car((V108)))==(VV[32]))){
	goto T369;}
	{object V113 = Ct;
	VMR24(V113)}
	goto T369;
T369:;
	{object V114 = ((car((V108)))==(VV[33])?Ct:Cnil);
	VMR24(V114)}
	return Cnil;
}
/*	local entry for function WT-SHORT-FLOAT-VALUE	*/

static object LI25(V117,V118)

object V117;object V118;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	princ_str("VV[",VV[0]);
	(void)((*(LnkLI36))((V117)));
	princ_char(93,VV[0]);
	{object V119 = Cnil;
	VMR25(V119)}
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

