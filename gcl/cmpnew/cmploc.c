
#include "cmpinclude.h"
#include "cmploc.h"
void init_cmploc(){do_init(VV);}
/*	local entry for function WT-NEXT-VAR-ARG	*/

static object LI1()

{	 VMB1 VMS1 VMV1
goto TTL;
TTL:;
	princ_str("va_arg(ap,object)",VV[0]);
	{object V1 = Cnil;
	VMR1(V1)}
	return Cnil;
}
/*	function definition for SET-LOC	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	{register object V2;
	check_arg(1);
	V2=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V3;
	V3= Cnil;
	if(!((symbol_value(VV[1]))==(VV[2]))){
	goto T4;}
	base[1]= (*(LnkLI34))((V2));
	vs_top=(vs_base=base+1)+1;
	return;
goto T4;
T4:;
	if(!((symbol_value(VV[1]))==(VV[3]))){
	goto T7;}
	if(!(type_of((V2))==t_cons)){
	goto T10;}
	{register object x= car((V2)),V4= VV[4];
	while(!endp(V4))
	if(eql(x,V4->c.c_car)){
	goto T14;
	}else V4=V4->c.c_cdr;
	goto T10;}
goto T14;
T14:;
	if((cadr((V2)))==Cnil){
	goto T10;}
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
goto T10;
T10:;
	if(!(type_of((V2))==t_cons)){
	goto T24;}
	if(!((car((V2)))==(VV[5]))){
	goto T24;}
	princ_str("\n	(void)",VV[0]);
	(void)((*(LnkLI36))((V2)));
	princ_char(59,VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T24;
T24:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T7;
T7:;
	if(!((symbol_value(VV[1]))==(VV[6]))){
	goto T32;}
	if(((V2))==(VV[7])){
	goto T35;}
	base[1]= (*(LnkLI37))((V2));
	vs_top=(vs_base=base+1)+1;
	return;
goto T35;
T35:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T32;
T32:;
	if(!((symbol_value(VV[1]))==(VV[8]))){
	goto T38;}
	base[1]= (V2);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk38)();
	return;
goto T38;
T38:;
	if(!((symbol_value(VV[1]))==(VV[9]))){
	goto T42;}
	base[1]= (V2);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk39)();
	return;
goto T42;
T42:;
	if(!((symbol_value(VV[1]))==(VV[10]))){
	goto T46;}
	base[1]= (V2);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk40)();
	return;
goto T46;
T46:;
	if(!((symbol_value(VV[1]))==(VV[11]))){
	goto T50;}
	base[1]= (V2);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk41)();
	return;
goto T50;
T50:;
	if(!(type_of(symbol_value(VV[1]))==t_cons)){
	goto T53;}
	if(type_of(car(symbol_value(VV[1])))==t_symbol){
	goto T54;}
goto T53;
T53:;
	base[1]= (*(LnkLI42))();
	vs_top=(vs_base=base+1)+1;
	return;
goto T54;
T54:;
	V3= get(car(symbol_value(VV[1])),VV[12],Cnil);
	if(((V3))==Cnil){
	goto T59;}
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
goto T59;
T59:;
	V3= get(car(symbol_value(VV[1])),VV[13],Cnil);
	if(((V3))==Cnil){
	goto T66;}
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
goto T66;
T66:;
	base[1]= (*(LnkLI42))();
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for WT-LOC	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	{register object V7;
	check_arg(1);
	V7=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	if(!(((V7))==(Cnil))){
	goto T77;}
	princ_str("Cnil",VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T77;
T77:;
	if(!(((V7))==(Ct))){
	goto T81;}
	princ_str("Ct",VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T81;
T81:;
	if(!(((V7))==(VV[7]))){
	goto T85;}
	princ_str("vs_base[0]",VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T85;
T85:;
	if(!(type_of((V7))==t_cons)){
	goto T88;}
	if(type_of(car((V7)))==t_symbol){
	goto T89;}
goto T88;
T88:;
	base[1]= (*(LnkLI42))();
	vs_top=(vs_base=base+1)+1;
	return;
goto T89;
T89:;
	{object V8;
	V8= get(car((V7)),VV[13],Cnil);
	if(((V8))!=Cnil){
	goto T94;}
	(void)((*(LnkLI42))());
goto T94;
T94:;
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

static object LI4(V11)

register object V11;
{	 VMB4 VMS4 VMV4
goto TTL;
TTL:;
	{object V12;
	V12= (((V11))==(VV[7])?Ct:Cnil);
	if(((V12))==Cnil){
	goto T101;}
	{object V13 = (V12);
	VMR4(V13)}
goto T101;
T101:;
	if(!(type_of((V11))==t_cons)){
	goto T104;}
	if(!((car((V11)))==(VV[14]))){
	goto T104;}
	if(!(number_compare(caadr((V11)),symbol_value(VV[15]))==0)){
	goto T104;}
	princ_str("\n	vs_top=(vs_base=base+",VV[0]);
	(void)((*(LnkLI36))(cdadr((V11))));
	princ_str(")+1;",VV[0]);
	setq(VV[16],Ct);
	{object V14 = Ct;
	VMR4(V14)}
goto T104;
T104:;
	if(!(type_of((V11))==t_cons)){
	goto T116;}
	if(!((car((V11)))==(VV[17]))){
	goto T116;}
	V15= structure_ref(cadr((V11)),VV[17],1);
	if(!((/* INLINE-ARGS */V15)==(VV[18]))){
	goto T116;}
	if((structure_ref(cadr((V11)),VV[17],3))!=Cnil){
	goto T116;}
	V16= structure_ref(cadr((V11)),VV[17],2);
	if(!(eql(car(/* INLINE-ARGS */V16),symbol_value(VV[15])))){
	goto T116;}
	princ_str("\n	vs_top=(vs_base=base+",VV[0]);
	V17= structure_ref(cadr((V11)),VV[17],2);
	(void)((*(LnkLI36))(cdr(/* INLINE-ARGS */V17)));
	princ_str(")+1;",VV[0]);
	setq(VV[16],Ct);
	{object V18 = Ct;
	VMR4(V18)}
goto T116;
T116:;
	{object V19 = (*(LnkLI37))((V11));
	VMR4(V19)}}
	return Cnil;
}
/*	local entry for function SET-TOP	*/

static object LI5(V21)

object V21;
{	 VMB5 VMS5 VMV5
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
	VMR5(V24)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-VS-BASE	*/

static object LI6(V26)

object V26;
{	 VMB6 VMS6 VMV6
goto TTL;
TTL:;
	princ_str("vs_base[",VV[0]);
	(void)((*(LnkLI36))((V26)));
	princ_char(93,VV[0]);
	{object V27 = Cnil;
	VMR6(V27)}
	return Cnil;
}
/*	local entry for function WT-CAR	*/

static object LI7(V29)

object V29;
{	 VMB7 VMS7 VMV7
goto TTL;
TTL:;
	princ_str("(V",VV[0]);
	(void)((*(LnkLI36))((V29)));
	princ_str("->c.c_car)",VV[0]);
	{object V30 = Cnil;
	VMR7(V30)}
	return Cnil;
}
/*	local entry for function WT-CDR	*/

static object LI8(V32)

object V32;
{	 VMB8 VMS8 VMV8
goto TTL;
TTL:;
	princ_str("(V",VV[0]);
	(void)((*(LnkLI36))((V32)));
	princ_str("->c.c_cdr)",VV[0]);
	{object V33 = Cnil;
	VMR8(V33)}
	return Cnil;
}
/*	local entry for function WT-CADR	*/

static object LI9(V35)

object V35;
{	 VMB9 VMS9 VMV9
goto TTL;
TTL:;
	princ_str("(V",VV[0]);
	(void)((*(LnkLI36))((V35)));
	princ_str("->c.c_cdr->c.c_car)",VV[0]);
	{object V36 = Cnil;
	VMR9(V36)}
	return Cnil;
}
/*	local entry for function WT-CVAR	*/

static object LI10(V37,va_alist)
	object V37;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V38;
	object V39;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V38= V37;
	narg = narg - 1;
	if (narg <= 0) goto T154;
	else {
	V39= va_arg(ap,object);}
	--narg; goto T155;
goto T154;
T154:;
	V39= Cnil;
goto T155;
T155:;
	if(((V39))==Cnil){
	goto T157;}
	princ_str("/* ",VV[0]);
	V40= symbol_name((V39));
	(void)((*(LnkLI36))(/* INLINE-ARGS */V40));
	princ_str(" */",VV[0]);
goto T157;
T157:;
	princ_char(86,VV[0]);
	(void)((*(LnkLI36))((V38)));
	{object V41 = Cnil;
	VMR10(V41)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function WT-VV	*/

static object LI11(V43)

object V43;
{	 VMB11 VMS11 VMV11
goto TTL;
TTL:;
	princ_str("VV[",VV[0]);
	(void)((*(LnkLI36))((V43)));
	princ_char(93,VV[0]);
	{object V44 = Cnil;
	VMR11(V44)}
	return Cnil;
}
/*	function definition for WT-FIXNUM-LOC	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	{register object V45;
	check_arg(1);
	V45=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	if(!(type_of((V45))==t_cons)){
	goto T169;}
	if(!((car((V45)))==(VV[17]))){
	goto T169;}
	V46= structure_ref(cadr((V45)),VV[17],1);
	if(!((/* INLINE-ARGS */V46)==(VV[20]))){
	goto T169;}
	princ_char(86,VV[0]);
	V47= structure_ref(cadr((V45)),VV[17],4);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V47));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T169;
T169:;
	if(!(type_of((V45))==t_cons)){
	goto T178;}
	if(!((car((V45)))==(VV[21]))){
	goto T178;}
	princ_str("(long)",VV[0]);
	base[1]= caddr((V45));
	base[2]= cadddr((V45));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	return;
goto T178;
T178:;
	if(!(type_of((V45))==t_cons)){
	goto T187;}
	if(!((car((V45)))==(VV[22]))){
	goto T187;}
	(void)((*(LnkLI36))(caddr((V45))));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T187;
T187:;
	if(!(type_of((V45))==t_cons)){
	goto T193;}
	{register object x= car((V45)),V48= VV[23];
	while(!endp(V48))
	if(eql(x,V48->c.c_car)){
	goto T196;
	}else V48=V48->c.c_cdr;
	goto T193;}
goto T196;
T196:;
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
goto T193;
T193:;
	princ_str("fix(",VV[0]);
	(void)((*(LnkLI36))((V45)));
	princ_char(41,VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for WT-INTEGER-LOC	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	{register object V49;
	object V50;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V49=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T206;}
	V50=(base[1]);
	vs_top=sup;
	goto T207;
goto T206;
T206:;
	V50= Cnil;
goto T207;
T207:;
	{object V51;
	object V52;
	V51= Ct;
	if(type_of((V49))==t_cons){
	goto T211;}
	V52= Cnil;
	goto T210;
goto T211;
T211:;
	V52= car((V49));
goto T210;
T210:;
	{object V53= (V52);
	if((V53!= VV[21]))goto T214;
	princ_str("stoi(",VV[0]);
	base[3]= caddr((V49));
	base[4]= cadddr((V49));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	princ_char(41,VV[0]);
	goto T213;
goto T214;
T214:;
	if((V53!= VV[46]))goto T221;
	V51= Cnil;
	base[3]= caddr((V49));
	base[4]= cadddr((V49));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	goto T213;
goto T221;
T221:;
	if((V53!= VV[22]))goto T226;
	princ_str("stoi(",VV[0]);
	(void)((*(LnkLI36))(caddr((V49))));
	princ_char(41,VV[0]);
	goto T213;
goto T226;
T226:;
	if((V53!= VV[17]))goto T230;
	V55= structure_ref(cadr((V49)),VV[17],1);
	{object V54= /* INLINE-ARGS */V55;
	if((V54!= VV[47]))goto T231;
	V51= Cnil;
	princ_char(86,VV[0]);
	V56= structure_ref(cadr((V49)),VV[17],4);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V56));
	goto T213;
goto T231;
T231:;
	if((V54!= VV[20]))goto T236;
	princ_str("stoi(V",VV[0]);
	V57= structure_ref(cadr((V49)),VV[17],4);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V57));
	princ_char(41,VV[0]);
	goto T213;
goto T236;
T236:;
	princ_str("otoi(",VV[0]);
	(void)((*(LnkLI36))((V49)));
	princ_char(41,VV[0]);
	goto T213;}
goto T230;
T230:;
	princ_str("otoi(",VV[0]);
	(void)((*(LnkLI36))((V49)));
	princ_char(41,VV[0]);}
goto T213;
T213:;
	if((V51)==Cnil){
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	if((symbol_value(VV[24]))==Cnil){
	goto T246;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
goto T246;
T246:;
	base[3]= (*(LnkLI48))();
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local entry for function FIXNUM-LOC-P	*/

static object LI14(V59)

register object V59;
{	 VMB14 VMS14 VMV14
goto TTL;
TTL:;
	if(type_of((V59))==t_cons){
	goto T248;}
	{object V60 = Cnil;
	VMR14(V60)}
goto T248;
T248:;{object V61;
	if((car((V59)))==(VV[17])){
	goto T252;}
	V61= Cnil;
	goto T251;
goto T252;
T252:;
	V62= structure_ref(cadr((V59)),VV[17],1);
	V61= ((/* INLINE-ARGS */V62)==(VV[20])?Ct:Cnil);
goto T251;
T251:;
	if(V61==Cnil)goto T250;
	{object V63 = V61;
	VMR14(V63)}
goto T250;
T250:;}
	if(!((car((V59)))==(VV[21]))){
	goto T254;}
	{object V64 = Ct;
	VMR14(V64)}
goto T254;
T254:;
	{object V65 = ((car((V59)))==(VV[22])?Ct:Cnil);
	VMR14(V65)}
	return Cnil;
}
/*	local entry for function WT-FIXNUM-VALUE	*/

static object LI15(V68,V69)

object V68;object V69;
{	 VMB15 VMS15 VMV15
goto TTL;
TTL:;
	if(((V68))==Cnil){
	goto T257;}
	princ_str("VV[",VV[0]);
	(void)((*(LnkLI36))((V68)));
	princ_char(93,VV[0]);
	{object V70 = Cnil;
	VMR15(V70)}
goto T257;
T257:;
	princ_str("small_fixnum(",VV[0]);
	(void)((*(LnkLI36))((V69)));
	princ_char(41,VV[0]);
	{object V71 = Cnil;
	VMR15(V71)}
	return Cnil;
}
/*	function definition for WT-CHARACTER-LOC	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{register object V72;
	check_arg(1);
	V72=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	if(!(type_of((V72))==t_cons)){
	goto T266;}
	if(!((car((V72)))==(VV[17]))){
	goto T266;}
	V73= structure_ref(cadr((V72)),VV[17],1);
	if(!((/* INLINE-ARGS */V73)==(VV[25]))){
	goto T266;}
	princ_char(86,VV[0]);
	V74= structure_ref(cadr((V72)),VV[17],4);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V74));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T266;
T266:;
	if(!(type_of((V72))==t_cons)){
	goto T275;}
	if(!((car((V72)))==(VV[26]))){
	goto T275;}
	base[1]= caddr((V72));
	base[2]= cadddr((V72));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	return;
goto T275;
T275:;
	if(!(type_of((V72))==t_cons)){
	goto T282;}
	if(!((car((V72)))==(VV[27]))){
	goto T282;}
	(void)((*(LnkLI36))(caddr((V72))));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T282;
T282:;
	princ_str("char_code(",VV[0]);
	(void)((*(LnkLI36))((V72)));
	princ_char(41,VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function CHARACTER-LOC-P	*/

static object LI17(V76)

register object V76;
{	 VMB17 VMS17 VMV17
goto TTL;
TTL:;
	if(type_of((V76))==t_cons){
	goto T290;}
	{object V77 = Cnil;
	VMR17(V77)}
goto T290;
T290:;{object V78;
	if((car((V76)))==(VV[17])){
	goto T294;}
	V78= Cnil;
	goto T293;
goto T294;
T294:;
	V79= structure_ref(cadr((V76)),VV[17],1);
	V78= ((/* INLINE-ARGS */V79)==(VV[25])?Ct:Cnil);
goto T293;
T293:;
	if(V78==Cnil)goto T292;
	{object V80 = V78;
	VMR17(V80)}
goto T292;
T292:;}
	if(!((car((V76)))==(VV[26]))){
	goto T296;}
	{object V81 = Ct;
	VMR17(V81)}
goto T296;
T296:;
	{object V82 = ((car((V76)))==(VV[27])?Ct:Cnil);
	VMR17(V82)}
	return Cnil;
}
/*	local entry for function WT-CHARACTER-VALUE	*/

static object LI18(V85,V86)

object V85;object V86;
{	 VMB18 VMS18 VMV18
goto TTL;
TTL:;
	princ_str("VV[",VV[0]);
	(void)((*(LnkLI36))((V85)));
	princ_char(93,VV[0]);
	{object V87 = Cnil;
	VMR18(V87)}
	return Cnil;
}
/*	function definition for WT-LONG-FLOAT-LOC	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{register object V88;
	check_arg(1);
	V88=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	if(!(type_of((V88))==t_cons)){
	goto T302;}
	if(!((car((V88)))==(VV[17]))){
	goto T302;}
	V89= structure_ref(cadr((V88)),VV[17],1);
	if(!((/* INLINE-ARGS */V89)==(VV[28]))){
	goto T302;}
	princ_char(86,VV[0]);
	V90= structure_ref(cadr((V88)),VV[17],4);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V90));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T302;
T302:;
	if(!(type_of((V88))==t_cons)){
	goto T311;}
	if(!((car((V88)))==(VV[29]))){
	goto T311;}
	base[1]= caddr((V88));
	base[2]= cadddr((V88));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	return;
goto T311;
T311:;
	if(!(type_of((V88))==t_cons)){
	goto T318;}
	if(!((car((V88)))==(VV[30]))){
	goto T318;}
	(void)((*(LnkLI36))(caddr((V88))));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T318;
T318:;
	princ_str("lf(",VV[0]);
	(void)((*(LnkLI36))((V88)));
	princ_char(41,VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function LONG-FLOAT-LOC-P	*/

static object LI20(V92)

register object V92;
{	 VMB20 VMS20 VMV20
goto TTL;
TTL:;
	if(type_of((V92))==t_cons){
	goto T326;}
	{object V93 = Cnil;
	VMR20(V93)}
goto T326;
T326:;{object V94;
	if((car((V92)))==(VV[17])){
	goto T330;}
	V94= Cnil;
	goto T329;
goto T330;
T330:;
	V95= structure_ref(cadr((V92)),VV[17],1);
	V94= ((/* INLINE-ARGS */V95)==(VV[28])?Ct:Cnil);
goto T329;
T329:;
	if(V94==Cnil)goto T328;
	{object V96 = V94;
	VMR20(V96)}
goto T328;
T328:;}
	if(!((car((V92)))==(VV[29]))){
	goto T332;}
	{object V97 = Ct;
	VMR20(V97)}
goto T332;
T332:;
	{object V98 = ((car((V92)))==(VV[30])?Ct:Cnil);
	VMR20(V98)}
	return Cnil;
}
/*	local entry for function WT-LONG-FLOAT-VALUE	*/

static object LI21(V101,V102)

object V101;object V102;
{	 VMB21 VMS21 VMV21
goto TTL;
TTL:;
	princ_str("VV[",VV[0]);
	(void)((*(LnkLI36))((V101)));
	princ_char(93,VV[0]);
	{object V103 = Cnil;
	VMR21(V103)}
	return Cnil;
}
/*	function definition for WT-SHORT-FLOAT-LOC	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	{register object V104;
	check_arg(1);
	V104=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	if(!(type_of((V104))==t_cons)){
	goto T338;}
	if(!((car((V104)))==(VV[17]))){
	goto T338;}
	V105= structure_ref(cadr((V104)),VV[17],1);
	if(!((/* INLINE-ARGS */V105)==(VV[31]))){
	goto T338;}
	princ_char(86,VV[0]);
	V106= structure_ref(cadr((V104)),VV[17],4);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V106));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T338;
T338:;
	if(!(type_of((V104))==t_cons)){
	goto T347;}
	if(!((car((V104)))==(VV[32]))){
	goto T347;}
	base[1]= caddr((V104));
	base[2]= cadddr((V104));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	return;
goto T347;
T347:;
	if(!(type_of((V104))==t_cons)){
	goto T354;}
	if(!((car((V104)))==(VV[33]))){
	goto T354;}
	(void)((*(LnkLI36))(caddr((V104))));
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
goto T354;
T354:;
	princ_str("sf(",VV[0]);
	(void)((*(LnkLI36))((V104)));
	princ_char(41,VV[0]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local entry for function SHORT-FLOAT-LOC-P	*/

static object LI23(V108)

register object V108;
{	 VMB23 VMS23 VMV23
goto TTL;
TTL:;
	if(type_of((V108))==t_cons){
	goto T362;}
	{object V109 = Cnil;
	VMR23(V109)}
goto T362;
T362:;{object V110;
	if((car((V108)))==(VV[17])){
	goto T366;}
	V110= Cnil;
	goto T365;
goto T366;
T366:;
	V111= structure_ref(cadr((V108)),VV[17],1);
	V110= ((/* INLINE-ARGS */V111)==(VV[31])?Ct:Cnil);
goto T365;
T365:;
	if(V110==Cnil)goto T364;
	{object V112 = V110;
	VMR23(V112)}
goto T364;
T364:;}
	if(!((car((V108)))==(VV[32]))){
	goto T368;}
	{object V113 = Ct;
	VMR23(V113)}
goto T368;
T368:;
	{object V114 = ((car((V108)))==(VV[33])?Ct:Cnil);
	VMR23(V114)}
	return Cnil;
}
/*	local entry for function WT-SHORT-FLOAT-VALUE	*/

static object LI24(V117,V118)

object V117;object V118;
{	 VMB24 VMS24 VMV24
goto TTL;
TTL:;
	princ_str("VV[",VV[0]);
	(void)((*(LnkLI36))((V117)));
	princ_char(93,VV[0]);
	{object V119 = Cnil;
	VMR24(V119)}
	return Cnil;
}
static object  LnkTLI48(){return call_proc0(VV[48],(void **)&LnkLI48);} /* WFS-ERROR */
static void LnkT45(){ call_or_link(VV[45],(void **)&Lnk45);} /* WT-INLINE-LOC */
static object  LnkTLI44(){return call_proc0(VV[44],(void **)&LnkLI44);} /* VS-PUSH */
static object  LnkTLI43(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[43],(void **)&LnkLI43,1,ap);va_end(ap);return V1;} /* WT-VS */
static object  LnkTLI42(){return call_proc0(VV[42],(void **)&LnkLI42);} /* BABOON */
static void LnkT41(){ call_or_link(VV[41],(void **)&Lnk41);} /* SET-RETURN-SHORT-FLOAT */
static void LnkT40(){ call_or_link(VV[40],(void **)&Lnk40);} /* SET-RETURN-LONG-FLOAT */
static void LnkT39(){ call_or_link(VV[39],(void **)&Lnk39);} /* SET-RETURN-CHARACTER */
static void LnkT38(){ call_or_link(VV[38],(void **)&Lnk38);} /* SET-RETURN-FIXNUM */
static object  LnkTLI37(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[37],(void **)&LnkLI37,1,ap);va_end(ap);return V1;} /* SET-TOP */
static object  LnkTLI36(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[36],(void **)&LnkLI36,1,ap);va_end(ap);return V1;} /* WT1 */
static void LnkT35(){ call_or_link(VV[35],(void **)&Lnk35);} /* WT-INLINE */
static object  LnkTLI34(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[34],(void **)&LnkLI34,1,ap);va_end(ap);return V1;} /* SET-RETURN */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

