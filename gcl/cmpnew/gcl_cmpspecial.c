
#include "cmpinclude.h"
#include "gcl_cmpspecial.h"
void init_gcl_cmpspecial(){do_init(VV);}
/*	local entry for function C1QUOTE	*/

static object LI1(V2)

register object V2;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	if(!(endp_prop((V2)))){
	goto T1;}
	(void)((*(LnkLI45))(VV[0],small_fixnum(1),small_fixnum(0)));
	goto T1;
T1:;
	if(endp_prop(cdr((V2)))){
	goto T4;}
	V3 = make_fixnum((long)length((V2)));
	(void)((*(LnkLI46))(VV[0],small_fixnum(1),V3));
	goto T4;
T4:;
	{object V4 = (*(LnkLI47))(car((V2)),Ct);
	VMR1(V4)}
	return Cnil;
}
/*	local entry for function C1EVAL-WHEN	*/

static object LI2(V6)

register object V6;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(!(endp_prop((V6)))){
	goto T7;}
	(void)((*(LnkLI45))(VV[1],small_fixnum(1),small_fixnum(0)));
	goto T7;
T7:;
	{register object V7;
	register object V8;
	V7= car((V6));
	V8= car((V7));
	goto T13;
T13:;
	if(!(endp_prop((V7)))){
	goto T14;}
	{object V9 = (*(LnkLI48))();
	VMR2(V9)}
	goto T14;
T14:;
	{object V10= (V8);
	if((V10!= VV[49]))goto T19;
	{object V11 = (*(LnkLI50))(cdr((V6)));
	VMR2(V11)}
	goto T19;
T19:;
	if((V10!= VV[51])
	&& (V10!= VV[52]))goto T20;
	goto T18;
	goto T20;
T20:;
	(void)((VFUN_NARGS=2,(*(LnkLI53))(VV[2],(V8))));}
	goto T18;
T18:;
	V7= cdr((V7));
	V8= car((V7));
	goto T13;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1DECLARE	*/

static object LI3(V13)

object V13;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	V14= make_cons(VV[4],(V13));
	{object V15 = (VFUN_NARGS=2,(*(LnkLI53))(VV[3],/* INLINE-ARGS */V14));
	VMR3(V15)}
	return Cnil;
}
/*	local entry for function C1THE	*/

static object LI4(V17)

register object V17;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{register object V18;
	register object V19;
	object V20;
	V18= Cnil;
	V19= Cnil;
	V20= Cnil;
	if(endp_prop((V17))){
	goto T30;}
	if(!(endp_prop(cdr((V17))))){
	goto T29;}
	goto T30;
T30:;
	V21 = make_fixnum((long)length((V17)));
	(void)((*(LnkLI45))(VV[5],small_fixnum(2),V21));
	goto T29;
T29:;
	if(endp_prop(cddr((V17)))){
	goto T34;}
	V22 = make_fixnum((long)length((V17)));
	(void)((*(LnkLI46))(VV[5],small_fixnum(2),V22));
	goto T34;
T34:;
	V19= (*(LnkLI54))(cadr((V17)));
	base[0]= cadr((V19));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk55)();
	vs_top=sup;
	V18= vs_base[0];
	V23= (*(LnkLI57))(car((V17)));
	V24= structure_ref((V18),VV[6],2);
	V20= (*(LnkLI56))(/* INLINE-ARGS */V23,/* INLINE-ARGS */V24);
	if(((V20))!=Cnil){
	goto T44;}
	V25= make_cons(VV[5],(V17));
	(void)((VFUN_NARGS=2,(*(LnkLI58))(VV[7],/* INLINE-ARGS */V25)));
	goto T44;
T44:;
	(void)(structure_set((V18),VV[6],2,(V20)));
	{object V26 = listA(3,car((V19)),(V18),cddr((V19)));
	VMR4(V26)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1COMPILER-LET	*/

static object LI5(V28)

object V28;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{register object V29;
	register object V30;
	V29= Cnil;
	V30= Cnil;
	if(!(endp_prop((V28)))){
	goto T50;}
	(void)((*(LnkLI45))(VV[8],small_fixnum(1),small_fixnum(0)));
	goto T50;
T50:;
	{register object V31;
	register object V32;
	V31= car((V28));
	V32= car((V31));
	goto T57;
T57:;
	if(!(endp_prop((V31)))){
	goto T58;}
	goto T53;
	goto T58;
T58:;
	if(!(type_of((V32))==t_cons)){
	goto T64;}
	if(!(type_of(car((V32)))==t_symbol)){
	goto T67;}
	if(endp_prop(cdr((V32)))){
	goto T66;}
	if(endp_prop(cddr((V32)))){
	goto T66;}
	goto T67;
T67:;
	(void)((VFUN_NARGS=2,(*(LnkLI53))(VV[9],(V32))));
	goto T66;
T66:;
	{register object V33;
	V33= car((V32));
	V29= make_cons((V33),(V29));}
	{register object V34;
	if(!(endp_prop(cdr((V32))))){
	goto T78;}
	V34= Cnil;
	goto T76;
	goto T78;
T78:;
	base[3]= cadr((V32));
	vs_top=(vs_base=base+3)+1;
	Leval();
	vs_top=sup;
	V34= vs_base[0];
	goto T76;
T76:;
	V30= make_cons((V34),(V30));
	goto T62;}
	goto T64;
T64:;
	if(!(type_of((V32))==t_symbol)){
	goto T83;}
	{register object V35;
	V35= (V32);
	V29= make_cons((V35),(V29));}
	{register object V36;
	V36= Cnil;
	V30= make_cons((V36),(V30));
	goto T62;}
	goto T83;
T83:;
	(void)((VFUN_NARGS=2,(*(LnkLI53))(VV[10],(V32))));
	goto T62;
T62:;
	V31= cdr((V31));
	V32= car((V31));
	goto T57;}
	goto T53;
T53:;
	V29= reverse((V29));
	V30= reverse((V30));
	{object symbols,values;
	bds_ptr V37=bds_top;
	base[0]= (V29);
	symbols= base[0];
	base[1]= (V30);
	values= base[1];
	while(!endp(symbols)){
	if(type_of(MMcar(symbols))!=t_symbol)
	FEinvalid_variable("~s is not a symbol.",MMcar(symbols));
	if(endp(values))bds_bind(MMcar(symbols),OBJNULL);
	else{bds_bind(MMcar(symbols),MMcar(values));
	values=MMcdr(values);}
	symbols=MMcdr(symbols);}
	V38= (*(LnkLI50))(cdr((V28)));
	bds_unwind(V37);
	V28= V38;}
	{object V39 = list(5,VV[8],cadr((V28)),(V29),(V30),(V28));
	VMR5(V39)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C2COMPILER-LET	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	{object V40;
	object V41;
	object V42;
	check_arg(3);
	V40=(base[0]);
	V41=(base[1]);
	V42=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object symbols,values;
	bds_ptr V43=bds_top;
	base[3]= (V40);
	symbols= base[3];
	base[4]= (V41);
	values= base[4];
	while(!endp(symbols)){
	if(type_of(MMcar(symbols))!=t_symbol)
	FEinvalid_variable("~s is not a symbol.",MMcar(symbols));
	if(endp(values))bds_bind(MMcar(symbols),OBJNULL);
	else{bds_bind(MMcar(symbols),MMcar(values));
	values=MMcdr(values);}
	symbols=MMcdr(symbols);}
	base[3]= (V42);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk59)();
	bds_unwind(V43);
	return;}
	}
}
/*	local entry for function C1FUNCTION	*/

static object LI7(V45)

register object V45;
{	 VMB7 VMS7 VMV7
	bds_check;
	goto TTL;
TTL:;
	{object V46;
	V46= Cnil;
	if(!(endp_prop((V45)))){
	goto T107;}
	(void)((*(LnkLI45))(VV[11],small_fixnum(1),small_fixnum(0)));
	goto T107;
T107:;
	if(endp_prop(cdr((V45)))){
	goto T110;}
	V47 = make_fixnum((long)length((V45)));
	(void)((*(LnkLI46))(VV[11],small_fixnum(1),V47));
	goto T110;
T110:;
	{register object V48;
	V48= car((V45));
	if(!(type_of((V48))==t_symbol)){
	goto T115;}
	V46= (*(LnkLI60))((V48));
	if(((V46))==Cnil){
	goto T118;}
	if(!((car((V46)))==(VV[12]))){
	goto T118;}
	{object V49 = list(3,VV[11],symbol_value(VV[13]),(V46));
	VMR7(V49)}
	goto T118;
T118:;
	{object V50;
	V51= get((V48),VV[15],Cnil);
	V50= (VFUN_NARGS=2,(*(LnkLI61))(VV[14],((V51)==Cnil?Ct:Cnil)));
	{object V52 = list(3,VV[11],(V50),list(3,VV[16],(V50),(V48)));
	VMR7(V52)}}
	goto T115;
T115:;
	if(!(type_of((V48))==t_cons)){
	goto T126;}
	if(!((car((V48)))==(VV[17]))){
	goto T126;}
	if(!(endp_prop(cdr((V48))))){
	goto T130;}
	(void)((VFUN_NARGS=2,(*(LnkLI53))(VV[18],(V48))));
	goto T130;
T130:;
	base[0]= make_cons(VV[20],symbol_value(VV[19]));
	base[1]= make_cons(VV[20],symbol_value(VV[21]));
	base[2]= make_cons(VV[20],symbol_value(VV[22]));
	base[3]= make_cons(VV[20],symbol_value(VV[23]));
	bds_bind(VV[19],base[0]);
	bds_bind(VV[21],base[1]);
	bds_bind(VV[22],base[2]);
	bds_bind(VV[23],base[3]);
	V48= (VFUN_NARGS=1,(*(LnkLI62))(cdr((V48))));
	{object V53 = list(3,VV[11],cadr((V48)),(V48));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR7(V53)}
	goto T126;
T126:;
	{object V54 = (VFUN_NARGS=2,(*(LnkLI53))(VV[24],(V48)));
	VMR7(V54)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2FUNCTION	*/

static object LI8(V56)

register object V56;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V57= car((V56));
	if((V57!= VV[16]))goto T139;
	V58= list(2,VV[25],(*(LnkLI64))(caddr((V56))));
	{object V59 = (VFUN_NARGS=1,(*(LnkLI63))(/* INLINE-ARGS */V58));
	VMR8(V59)}
	goto T139;
T139:;
	if((V57!= VV[12]))goto T140;
	if((cadddr((V56)))==Cnil){
	goto T142;}
	V60= list(2,VV[26],structure_ref(caddr((V56)),VV[27],2));
	{object V61 = (VFUN_NARGS=1,(*(LnkLI63))(/* INLINE-ARGS */V60));
	VMR8(V61)}
	goto T142;
T142:;
	V62= list(2,VV[28],structure_ref(caddr((V56)),VV[27],1));
	{object V63 = (VFUN_NARGS=1,(*(LnkLI63))(/* INLINE-ARGS */V62));
	VMR8(V63)}
	goto T140;
T140:;
	{register object V64;
	setq(VV[32],number_plus(symbol_value(VV[32]),small_fixnum(1)));
	V64= (VFUN_NARGS=4,(*(LnkLI65))(VV[29],VV[30],VV[31],symbol_value(VV[32])));
	{object V65;
	if((symbol_value(VV[33]))!=Cnil){
	goto T150;}
	V66= Cnil;
	goto T148;
	goto T150;
T150:;
	V66= make_cons(small_fixnum(0),small_fixnum(0));
	goto T148;
T148:;
	V65= list(5,VV[30],V66,symbol_value(VV[34]),(V64),(V56));
	setq(VV[35],make_cons((V65),symbol_value(VV[35])));}
	setq(VV[36],make_cons(V64,symbol_value(VV[36])));
	if((symbol_value(VV[33]))==Cnil){
	goto T156;}
	V68= list(3,VV[37],structure_ref((V64),VV[27],3),symbol_value(VV[33]));
	{object V69 = (VFUN_NARGS=1,(*(LnkLI63))(/* INLINE-ARGS */V68));
	VMR8(V69)}
	goto T156;
T156:;
	(void)((*(LnkLI66))(Cnil));{object V70;
	V70= symbol_value(VV[39]);
	V71= structure_ref((V64),VV[27],3);
	V72= list(3,VV[38],V70,list(3,VV[40],Cnil,(*(LnkLI68))(VV[41],/* INLINE-ARGS */V71)));
	(void)((VFUN_NARGS=2,(*(LnkLI67))(/* INLINE-ARGS */V72,Ct)));}
	V73= list(2,VV[42],symbol_value(VV[39]));
	{object V74 = (VFUN_NARGS=1,(*(LnkLI63))(/* INLINE-ARGS */V73));
	VMR8(V74)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-SYMBOL-FUNCTION	*/

static object LI9(V76)

object V76;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	if((symbol_value(VV[43]))==Cnil){
	goto T161;}
	princ_str("symbol_function(VV[",VV[44]);
	(void)((*(LnkLI69))((V76)));
	princ_str("])",VV[44]);
	{object V77 = Cnil;
	VMR9(V77)}
	goto T161;
T161:;
	princ_str("(VV[",VV[44]);
	(void)((*(LnkLI69))((V76)));
	princ_str("]->s.s_gfdef)",VV[44]);
	{object V78 = Cnil;
	VMR9(V78)}
	return Cnil;
}
/*	local entry for function WT-MAKE-CCLOSURE	*/

static object LI10(V81,V82)

object V81;object V82;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	princ_str("\n	make_cclosure_new(LC",VV[44]);
	(void)((*(LnkLI69))((V81)));
	princ_str(",Cnil,",VV[44]);
	(void)((VFUN_NARGS=1,(*(LnkLI70))((V82))));
	princ_str(",Cdata)",VV[44]);
	{object V83 = Cnil;
	VMR10(V83)}
	return Cnil;
}
static object  LnkTLI70(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[70],(void **)(void *)&LnkLI70,first,ap);va_end(ap);return V1;} /* WT-CLINK */
static object  LnkTLI69(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[69],(void **)(void *)&LnkLI69,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI68(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[68],(void **)(void *)&LnkLI68,2,first,ap);va_end(ap);return V1;} /* ADD-ADDRESS */
static object  LnkTLI67(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[67],(void **)(void *)&LnkLI67,first,ap);va_end(ap);return V1;} /* ADD-INIT */
static object  LnkTLI66(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[66],(void **)(void *)&LnkLI66,1,first,ap);va_end(ap);return V1;} /* PUSH-DATA-INCF */
static object  LnkTLI65(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[65],(void **)(void *)&LnkLI65,first,ap);va_end(ap);return V1;} /* MAKE-FUN */
static object  LnkTLI64(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[64],(void **)(void *)&LnkLI64,1,first,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI63(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[63],(void **)(void *)&LnkLI63,first,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI62(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[62],(void **)(void *)&LnkLI62,first,ap);va_end(ap);return V1;} /* C1LAMBDA-EXPR */
static object  LnkTLI61(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[61],(void **)(void *)&LnkLI61,first,ap);va_end(ap);return V1;} /* MAKE-INFO */
static object  LnkTLI60(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[60],(void **)(void *)&LnkLI60,1,first,ap);va_end(ap);return V1;} /* C1LOCAL-CLOSURE */
static void LnkT59(){ call_or_link(VV[59],(void **)(void *)&Lnk59);} /* C2EXPR */
static object  LnkTLI58(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[58],(void **)(void *)&LnkLI58,first,ap);va_end(ap);return V1;} /* CMPWARN */
static object  LnkTLI57(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[57],(void **)(void *)&LnkLI57,1,first,ap);va_end(ap);return V1;} /* TYPE-FILTER */
static object  LnkTLI56(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[56],(void **)(void *)&LnkLI56,2,first,ap);va_end(ap);return V1;} /* TYPE-AND */
static void LnkT55(){ call_or_link(VV[55],(void **)(void *)&Lnk55);} /* COPY-INFO */
static object  LnkTLI54(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[54],(void **)(void *)&LnkLI54,1,first,ap);va_end(ap);return V1;} /* C1EXPR */
static object  LnkTLI53(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[53],(void **)(void *)&LnkLI53,first,ap);va_end(ap);return V1;} /* CMPERR */
static object  LnkTLI50(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[50],(void **)(void *)&LnkLI50,1,first,ap);va_end(ap);return V1;} /* C1PROGN */
static object  LnkTLI48(){return call_proc0(VV[48],(void **)(void *)&LnkLI48);} /* C1NIL */
static object  LnkTLI47(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[47],(void **)(void *)&LnkLI47,2,first,ap);va_end(ap);return V1;} /* C1CONSTANT-VALUE */
static object  LnkTLI46(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[46],(void **)(void *)&LnkLI46,3,first,ap);va_end(ap);return V1;} /* TOO-MANY-ARGS */
static object  LnkTLI45(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[45],(void **)(void *)&LnkLI45,3,first,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

