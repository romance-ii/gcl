
#include "cmpinclude.h"
#include "cmputil.h"
void init_cmputil(){do_init(VV);}
/*	macro definition for SAFE-COMPILE	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	base[2]= V1;}
	base[3]= listA(3,VV[0],VV[1],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function CMPERR	*/

static object LI2(object V2,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB2 VMS2 VMV2
	bds_check;
	{object V3;
	object V4;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V3= V2;
	narg= narg - 1;
	V5 = list_vector_new(narg,first,ap);
	V4= V5;
	bds_bind(VV[3],VV[2]);
	(void)((*(LnkLI58))());
	base[1]= Ct;
	base[2]= VV[4];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	base[1]= Ct;
	base[2]= (V3);
	{object V6;
	V6= (V4);
	 vs_top=base+3;
	 while(!endp(V6))
	 {vs_push(car(V6));V6=cdr(V6);}
	vs_base=base+1;}
	Lformat();
	vs_top=sup;
	setq(VV[5],number_plus(symbol_value(VV[5]),small_fixnum(1)));
	{frame_ptr fr;
	fr=frs_sch_catch(VV[6]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[6]);
	base[1]= VV[7];
	vs_top=(vs_base=base+1)+1;
	unwind(fr,VV[6]);}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for CMPCK	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(2);
	vs_top=sup;
	{object V7=base[0]->c.c_cdr;
	if(endp(V7))invalid_macro_call();
	base[2]= (V7->c.c_car);
	V7=V7->c.c_cdr;
	if(endp(V7))invalid_macro_call();
	base[3]= (V7->c.c_car);
	V7=V7->c.c_cdr;
	base[4]= V7;}
	base[5]= list(3,VV[8],base[2],listA(3,VV[9],base[3],base[4]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function TOO-MANY-ARGS	*/

static object LI4(V11,V12,V13)

object V11;object V12;object V13;
{	 VMB4 VMS4 VMV4
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[3],VV[2]);
	(void)((*(LnkLI58))());
	base[1]= Ct;
	base[2]= VV[10];
	base[3]= (V11);
	base[4]= (V12);
	base[5]= (V13);
	vs_top=(vs_base=base+1)+5;
	Lformat();
	vs_top=sup;
	setq(VV[5],number_plus(symbol_value(VV[5]),small_fixnum(1)));
	{frame_ptr fr;
	fr=frs_sch_catch(VV[6]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[6]);
	base[1]= VV[7];
	vs_top=(vs_base=base+1)+1;
	unwind(fr,VV[6]);}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TOO-FEW-ARGS	*/

static object LI5(V17,V18,V19)

object V17;object V18;object V19;
{	 VMB5 VMS5 VMV5
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[3],VV[2]);
	(void)((*(LnkLI58))());
	base[1]= Ct;
	base[2]= VV[11];
	base[3]= (V17);
	base[4]= (V18);
	base[5]= (V19);
	vs_top=(vs_base=base+1)+5;
	Lformat();
	vs_top=sup;
	setq(VV[5],number_plus(symbol_value(VV[5]),small_fixnum(1)));
	{frame_ptr fr;
	fr=frs_sch_catch(VV[6]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[6]);
	base[1]= VV[7];
	vs_top=(vs_base=base+1)+1;
	unwind(fr,VV[6]);}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CMPWARN	*/

static object LI6(object V20,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	bds_check;
	{object V21;
	object V22;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V21= V20;
	narg= narg - 1;
	V23 = list_vector_new(narg,first,ap);
	V22= V23;
	bds_bind(VV[3],VV[2]);
	if((symbol_value(VV[12]))!=Cnil){
	goto T32;}
	(void)((*(LnkLI58))());
	base[1]= Ct;
	base[2]= VV[13];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	base[1]= Ct;
	base[2]= (V21);
	{object V24;
	V24= (V22);
	 vs_top=base+3;
	 while(!endp(V24))
	 {vs_push(car(V24));V24=cdr(V24);}
	vs_base=base+1;}
	Lformat();
	vs_top=sup;
	princ_char(10,Cnil);
	goto T32;
T32:;
	{object V25 = Cnil;
	bds_unwind1;
	VMR6(V25)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function CMPNOTE	*/

static object LI7(object V26,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	bds_check;
	{object V27;
	object V28;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V27= V26;
	narg= narg - 1;
	V29 = list_vector_new(narg,first,ap);
	V28= V29;
	bds_bind(VV[3],VV[2]);
	if((symbol_value(VV[14]))!=Cnil){
	goto T43;}
	princ_char(10,Cnil);
	base[1]= Ct;
	base[2]= VV[15];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	base[1]= Ct;
	base[2]= (V27);
	{object V30;
	V30= (V28);
	 vs_top=base+3;
	 while(!endp(V30))
	 {vs_push(car(V30));V30=cdr(V30);}
	vs_base=base+1;}
	Lformat();
	vs_top=sup;
	goto T43;
T43:;
	{object V31 = Cnil;
	bds_unwind1;
	VMR7(V31)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function PRINT-CURRENT-FORM	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	if((symbol_value(VV[16]))==Cnil){
	goto T53;}
	setq(VV[16],Cnil);
	vs_base=vs_top;
	Lfresh_line();
	vs_top=sup;
	if(!(type_of(symbol_value(VV[17]))==t_cons)){
	goto T60;}
	if(!((car(symbol_value(VV[17])))==(VV[18]))){
	goto T60;}
	base[0]= Ct;
	base[1]= VV[19];
	base[2]= cdr(symbol_value(VV[17]));
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T53;
	goto T60;
T60:;
	bds_bind(VV[20],small_fixnum(2));
	bds_bind(VV[21],small_fixnum(2));
	base[2]= Ct;
	base[3]= VV[22];
	base[4]= symbol_value(VV[17]);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	bds_unwind1;
	bds_unwind1;
	goto T53;
T53:;
	{object V32 = Cnil;
	VMR8(V32)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function UNDEFINED-VARIABLE	*/

static object LI9(V34)

object V34;
{	 VMB9 VMS9 VMV9
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[3],VV[2]);
	(void)((*(LnkLI58))());
	base[1]= Ct;
	base[2]= VV[23];
	base[3]= (V34);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	{object V35 = Cnil;
	bds_unwind1;
	VMR9(V35)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BABOON	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[3],VV[2]);
	(void)((*(LnkLI58))());
	base[1]= Ct;
	base[2]= VV[24];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	setq(VV[5],number_plus(symbol_value(VV[5]),small_fixnum(1)));
	{object V36 = (VFUN_NARGS=0,(*(LnkLI59))());
	bds_unwind1;
	VMR10(V36)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for DOLIST*	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	check_arg(2);
	vs_top=sup;
	{object V37=base[0]->c.c_cdr;
	if(endp(V37))invalid_macro_call();
	{object V38= (V37->c.c_car);
	if(endp(V38))invalid_macro_call();
	base[2]= (V38->c.c_car);
	V38=V38->c.c_cdr;
	if(endp(V38))invalid_macro_call();
	base[3]= (V38->c.c_car);
	V38=V38->c.c_cdr;
	if(endp(V38)){
	base[4]= Cnil;
	} else {
	base[4]= (V38->c.c_car);
	V38=V38->c.c_cdr;}
	if(!endp(V38))invalid_macro_call();}
	V37=V37->c.c_cdr;
	base[5]= V37;}
	{register object V39;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V39= vs_base[0];
	V40= list(3,(V39),base[3],list(2,VV[26],(V39)));
	V41= list(2,VV[27],(V39));
	V42= list(2,/* INLINE-ARGS */V40,list(3,base[2],/* INLINE-ARGS */V41,list(2,VV[27],(V39))));
	V43= list(2,list(2,VV[28],(V39)),base[4]);
	base[6]= listA(5,VV[25],/* INLINE-ARGS */V42,/* INLINE-ARGS */V43,list(2,VV[29],list(2,VV[30],base[2])),base[5]);
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	macro definition for DOLIST**	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	check_arg(2);
	vs_top=sup;
	{object V44=base[0]->c.c_cdr;
	if(endp(V44))invalid_macro_call();
	{object V45= (V44->c.c_car);
	if(endp(V45))invalid_macro_call();
	base[2]= (V45->c.c_car);
	V45=V45->c.c_cdr;
	if(endp(V45))invalid_macro_call();
	base[3]= (V45->c.c_car);
	V45=V45->c.c_cdr;
	if(endp(V45)){
	base[4]= Cnil;
	} else {
	base[4]= (V45->c.c_car);
	V45=V45->c.c_cdr;}
	if(!endp(V45))invalid_macro_call();}
	V44=V44->c.c_cdr;
	base[5]= V44;}
	{register object V46;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V46= vs_base[0];
	V47= list(3,(V46),base[3],list(2,VV[26],(V46)));
	V48= list(2,VV[27],(V46));
	V49= list(2,/* INLINE-ARGS */V47,list(3,base[2],/* INLINE-ARGS */V48,list(2,VV[27],(V46))));
	V50= list(2,list(2,VV[28],(V46)),base[4]);
	base[6]= listA(5,VV[25],/* INLINE-ARGS */V49,/* INLINE-ARGS */V50,list(2,VV[29],list(3,VV[30],(V46),base[2])),base[5]);
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	macro definition for DOTIMES*	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	check_arg(2);
	vs_top=sup;
	{object V51=base[0]->c.c_cdr;
	if(endp(V51))invalid_macro_call();
	{object V52= (V51->c.c_car);
	if(endp(V52))invalid_macro_call();
	base[2]= (V52->c.c_car);
	V52=V52->c.c_cdr;
	if(endp(V52))invalid_macro_call();
	base[3]= (V52->c.c_car);
	V52=V52->c.c_cdr;
	if(endp(V52)){
	base[4]= Cnil;
	} else {
	base[4]= (V52->c.c_car);
	V52=V52->c.c_cdr;}
	if(!endp(V52))invalid_macro_call();}
	V51=V51->c.c_cdr;
	base[5]= V51;}
	{object V53;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V53= vs_base[0];
	V54= list(2,(V53),base[3]);
	V55= list(2,/* INLINE-ARGS */V54,list(3,base[2],small_fixnum(0),list(2,VV[31],base[2])));
	V56= list(2,list(3,VV[32],base[2],(V53)),base[4]);
	base[6]= listA(5,VV[25],/* INLINE-ARGS */V55,/* INLINE-ARGS */V56,list(2,VV[29],list(2,VV[33],base[2])),base[5]);
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	macro definition for DOTIMES**	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	check_arg(2);
	vs_top=sup;
	{object V57=base[0]->c.c_cdr;
	if(endp(V57))invalid_macro_call();
	{object V58= (V57->c.c_car);
	if(endp(V58))invalid_macro_call();
	base[2]= (V58->c.c_car);
	V58=V58->c.c_cdr;
	if(endp(V58))invalid_macro_call();
	base[3]= (V58->c.c_car);
	V58=V58->c.c_cdr;
	if(endp(V58)){
	base[4]= Cnil;
	} else {
	base[4]= (V58->c.c_car);
	V58=V58->c.c_cdr;}
	if(!endp(V58))invalid_macro_call();}
	V57=V57->c.c_cdr;
	base[5]= V57;}
	{object V59;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V59= vs_base[0];
	V60= list(2,(V59),base[3]);
	V61= list(2,/* INLINE-ARGS */V60,list(3,base[2],small_fixnum(0),list(2,VV[31],base[2])));
	V62= list(2,list(3,VV[32],base[2],(V59)),base[4]);
	base[6]= listA(5,VV[25],/* INLINE-ARGS */V61,/* INLINE-ARGS */V62,list(2,VV[29],list(3,VV[33],(V59),base[2])),base[5]);
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	function definition for CMP-EVAL	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	bds_check;
	{object V63;
	check_arg(1);
	V63=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V64;
	base[1]= list(2,VV[34],list(2,VV[35],(V63)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk60)();
	Llist();
	vs_top=sup;
	V64= vs_base[0];
	if((car((V64)))==Cnil){
	goto T93;}
	bds_bind(VV[3],VV[2]);
	setq(VV[5],number_plus(symbol_value(VV[5]),small_fixnum(1)));
	(void)((*(LnkLI58))());
	base[2]= Ct;
	base[3]= VV[36];
	base[4]= (V63);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T93;
T93:;
	base[1]= cdr((V64));
	vs_top=(vs_base=base+1)+1;
	Lvalues_list();
	return;}
	}
}
/*	local entry for function CMP-MACROEXPAND	*/

static object LI16(V66)

object V66;
{	 VMB16 VMS16 VMV16
	bds_check;
	goto TTL;
TTL:;
	{register object V67;
	V67= Cnil;
	{register object V68;
	register object V69;
	V68= symbol_value(VV[37]);
	V69= car((V68));
	goto T108;
T108:;
	if(!(endp_prop((V68)))){
	goto T109;}
	goto T104;
	goto T109;
T109:;
	if(!(type_of((V69))==t_cons)){
	goto T113;}
	{register object V70;
	V70= list(3,car((V69)),VV[38],cadr((V69)));
	V67= make_cons((V70),(V67));}
	goto T113;
T113:;
	V68= cdr((V68));
	V69= car((V68));
	goto T108;}
	goto T104;
T104:;
	if(((V67))==Cnil){
	goto T123;}
	V71= nreverse((V67));
	V67= list(3,Cnil,/* INLINE-ARGS */V71,Cnil);
	goto T123;
T123:;
	{object V72;
	V73= list(2,VV[35],(V66));
	base[0]= list(3,VV[39],/* INLINE-ARGS */V73,list(2,VV[35],(V67)));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk60)();
	Llist();
	vs_top=sup;
	V72= vs_base[0];
	if((car((V72)))==Cnil){
	goto T131;}
	bds_bind(VV[3],VV[2]);
	setq(VV[5],number_plus(symbol_value(VV[5]),small_fixnum(1)));
	(void)((*(LnkLI58))());
	base[1]= Ct;
	base[2]= VV[40];
	base[3]= (V66);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	{object V74 = list(3,VV[41],VV[42],list(2,VV[35],(V66)));
	bds_unwind1;
	VMR16(V74)}
	goto T131;
T131:;
	{object V75 = cadr((V72));
	VMR16(V75)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CMP-MACROEXPAND-1	*/

static object LI17(V77)

object V77;
{	 VMB17 VMS17 VMV17
	bds_check;
	goto TTL;
TTL:;
	{register object V78;
	V78= Cnil;
	{register object V79;
	register object V80;
	V79= symbol_value(VV[37]);
	V80= car((V79));
	goto T145;
T145:;
	if(!(endp_prop((V79)))){
	goto T146;}
	goto T141;
	goto T146;
T146:;
	if(!(type_of((V80))==t_cons)){
	goto T150;}
	{register object V81;
	V81= list(3,car((V80)),VV[38],cadr((V80)));
	V78= make_cons((V81),(V78));}
	goto T150;
T150:;
	V79= cdr((V79));
	V80= car((V79));
	goto T145;}
	goto T141;
T141:;
	{object V82;
	V83= list(2,VV[35],(V77));
	base[0]= list(3,VV[43],/* INLINE-ARGS */V83,list(2,VV[35],(V78)));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk60)();
	Llist();
	vs_top=sup;
	V82= vs_base[0];
	if((car((V82)))==Cnil){
	goto T164;}
	bds_bind(VV[3],VV[2]);
	setq(VV[5],number_plus(symbol_value(VV[5]),small_fixnum(1)));
	(void)((*(LnkLI58))());
	base[1]= Ct;
	base[2]= VV[44];
	base[3]= (V77);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	{object V84 = list(3,VV[41],VV[45],list(2,VV[35],(V77)));
	bds_unwind1;
	VMR17(V84)}
	goto T164;
T164:;
	{object V85 = cadr((V82));
	VMR17(V85)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CMP-EXPAND-MACRO	*/

static object LI18(V89,V90,V91)

object V89;register object V90;object V91;
{	 VMB18 VMS18 VMV18
	bds_check;
	goto TTL;
TTL:;
	{register object V92;
	V92= Cnil;
	{register object V93;
	register object V94;
	V93= symbol_value(VV[37]);
	V94= car((V93));
	goto T178;
T178:;
	if(!(endp_prop((V93)))){
	goto T179;}
	goto T174;
	goto T179;
T179:;
	if(!(type_of((V94))==t_cons)){
	goto T183;}
	{register object V95;
	V95= list(3,car((V94)),VV[38],cadr((V94)));
	V92= make_cons((V95),(V92));}
	goto T183;
T183:;
	V93= cdr((V93));
	V94= car((V93));
	goto T178;}
	goto T174;
T174:;
	if(symbol_value(VV[46])==Cnil){
	goto T193;}
	(void)((*(LnkLI61))((V90)));
	goto T193;
T193:;
	if(((V92))==Cnil){
	goto T194;}
	V96= nreverse((V92));
	V92= list(3,Cnil,/* INLINE-ARGS */V96,Cnil);
	goto T194;
T194:;
	{object V97;
	V98= list(2,VV[35],(V89));
	V99= list(2,VV[35],make_cons((V90),(V91)));
	base[0]= list(5,VV[47],VV[48],/* INLINE-ARGS */V98,/* INLINE-ARGS */V99,list(2,VV[35],(V92)));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk60)();
	Llist();
	vs_top=sup;
	V97= vs_base[0];
	if((car((V97)))==Cnil){
	goto T202;}
	bds_bind(VV[3],VV[2]);
	setq(VV[5],number_plus(symbol_value(VV[5]),small_fixnum(1)));
	(void)((*(LnkLI58))());
	base[1]= Ct;
	base[2]= VV[49];
	base[3]= (V90);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	{object V100 = list(3,VV[41],VV[50],list(2,VV[35],make_cons((V90),(V91))));
	bds_unwind1;
	VMR18(V100)}
	goto T202;
T202:;
	{object V101 = cadr((V97));
	VMR18(V101)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for CMP-TOPLEVEL-EVAL	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	bds_check;
	{object V102;
	check_arg(1);
	V102=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[51],symbol_value(VV[52]));
	vs_base=vs_top;
	(void) (*Lnk62)();
	vs_top=sup;
	V103= vs_base[0];
	bds_bind(VV[52],one_minus(V103));
	bds_bind(VV[53],symbol_value(VV[54]));
	base[5]= VV[56];
	vs_top=(vs_base=base+5)+1;
	Lfind_package();
	vs_top=sup;
	V104= vs_base[0];
	bds_bind(VV[55],make_cons(V104,symbol_value(VV[55])));
	base[5]= (V102);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk63)();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function COMPILER-DEF-HOOK	*/

static object LI20(V107,V108)

object V107;object V108;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V109 = Cnil;
	VMR20(V109)}
	return Cnil;
}
/*	local entry for function COMPILER-CLEAR-COMPILER-PROPERTIES	*/

static object LI21(V112,V113)

register object V112;object V113;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{register object V114;
	register object V115;
	base[0]= (V112);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_plist();
	vs_top=sup;
	V114= vs_base[0];
	V115= Cnil;
	goto T224;
T224:;
	V115= car((V114));
	if(!(type_of((V115))==t_symbol)){
	goto T229;}
	if((get((V115),VV[57],Cnil))==Cnil){
	goto T229;}
	V114= cddr((V114));
	(void)(remprop((V112),(V115)));
	goto T227;
	goto T229;
T229:;
	V114= cddr((V114));
	goto T227;
T227:;
	if(!(((V114))==Cnil)){
	goto T237;}
	goto T236;
	goto T237;
T237:;
	goto T224;
	goto T236;
T236:;
	goto T222;
	goto T222;
T222:;
	{object V116 = (*(LnkLI64))((V112),(V113));
	VMR21(V116)}}
	base[0]=base[0];
	return Cnil;
}
static object  LnkTLI64(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[64],(void **)(void *)&LnkLI64,2,first,ap);va_end(ap);return V1;} /* COMPILER-DEF-HOOK */
static void LnkT63(){ call_or_link(VV[63],(void **)(void *)&Lnk63);} /* ERROR-SET */
static void LnkT62(){ call_or_link(VV[62],(void **)(void *)&Lnk62);} /* IHS-TOP */
static object  LnkTLI61(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[61],(void **)(void *)&LnkLI61,1,first,ap);va_end(ap);return V1;} /* ADD-MACRO-CALLEE */
static void LnkT60(){ call_or_link(VV[60],(void **)(void *)&Lnk60);} /* CMP-TOPLEVEL-EVAL */
static object  LnkTLI59(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[59],(void **)(void *)&LnkLI59,first,ap);va_end(ap);return V1;} /* BREAK */
static object  LnkTLI58(){return call_proc0(VV[58],(void **)(void *)&LnkLI58);} /* PRINT-CURRENT-FORM */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

