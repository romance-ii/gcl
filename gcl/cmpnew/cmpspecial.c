
#include "cmpinclude.h"
#include "cmpspecial.h"
void init_cmpspecial(){do_init(VV);}
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

register object V28;
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
	V29= make_cons(car((V32)),(V29));
	if(!(endp_prop(cdr((V32))))){
	goto T78;}
	V33= Cnil;
	goto T76;
goto T78;
T78:;
	base[2]= cadr((V32));
	vs_top=(vs_base=base+2)+1;
	Leval();
	vs_top=sup;
	V33= vs_base[0];
goto T76;
T76:;
	V30= make_cons(V33,(V30));
	goto T62;
goto T64;
T64:;
	if(!(type_of((V32))==t_symbol)){
	goto T82;}
	V29= make_cons((V32),(V29));
	V30= make_cons(Cnil,(V30));
	goto T62;
goto T82;
T82:;
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
	bds_ptr V34=bds_top;
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
	V35= (*(LnkLI50))(cdr((V28)));
	bds_unwind(V34);
	V28= V35;}
	{object V36 = list(5,VV[8],cadr((V28)),(V29),(V30),(V28));
	VMR5(V36)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C2COMPILER-LET	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	{object V37;
	object V38;
	object V39;
	check_arg(3);
	V37=(base[0]);
	V38=(base[1]);
	V39=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	{object symbols,values;
	bds_ptr V40=bds_top;
	base[3]= (V37);
	symbols= base[3];
	base[4]= (V38);
	values= base[4];
	while(!endp(symbols)){
	if(type_of(MMcar(symbols))!=t_symbol)
	FEinvalid_variable("~s is not a symbol.",MMcar(symbols));
	if(endp(values))bds_bind(MMcar(symbols),OBJNULL);
	else{bds_bind(MMcar(symbols),MMcar(values));
	values=MMcdr(values);}
	symbols=MMcdr(symbols);}
	base[3]= (V39);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk59)();
	bds_unwind(V40);
	return;}
	}
}
/*	local entry for function C1FUNCTION	*/

static object LI7(V42)

register object V42;
{	 VMB7 VMS7 VMV7
	bds_check;
goto TTL;
TTL:;
	{object V43;
	V43= Cnil;
	if(!(endp_prop((V42)))){
	goto T104;}
	(void)((*(LnkLI45))(VV[11],small_fixnum(1),small_fixnum(0)));
goto T104;
T104:;
	if(endp_prop(cdr((V42)))){
	goto T107;}
	V44 = make_fixnum((long)length((V42)));
	(void)((*(LnkLI46))(VV[11],small_fixnum(1),V44));
goto T107;
T107:;
	{register object V45;
	V45= car((V42));
	if(!(type_of((V45))==t_symbol)){
	goto T112;}
	V43= (*(LnkLI60))((V45));
	if(((V43))==Cnil){
	goto T115;}
	if(!((car((V43)))==(VV[12]))){
	goto T115;}
	{object V46 = list(3,VV[11],symbol_value(VV[13]),(V43));
	VMR7(V46)}
goto T115;
T115:;
	{object V47;
	V48= get((V45),VV[15],Cnil);
	V47= (VFUN_NARGS=2,(*(LnkLI61))(VV[14],((V48)==Cnil?Ct:Cnil)));
	{object V49 = list(3,VV[11],(V47),list(3,VV[16],(V47),(V45)));
	VMR7(V49)}}
goto T112;
T112:;
	if(!(type_of((V45))==t_cons)){
	goto T123;}
	if(!((car((V45)))==(VV[17]))){
	goto T123;}
	if(!(endp_prop(cdr((V45))))){
	goto T127;}
	(void)((VFUN_NARGS=2,(*(LnkLI53))(VV[18],(V45))));
goto T127;
T127:;
	base[0]= make_cons(VV[20],symbol_value(VV[19]));
	base[1]= make_cons(VV[20],symbol_value(VV[21]));
	base[2]= make_cons(VV[20],symbol_value(VV[22]));
	base[3]= make_cons(VV[20],symbol_value(VV[23]));
	bds_bind(VV[19],base[0]);
	bds_bind(VV[21],base[1]);
	bds_bind(VV[22],base[2]);
	bds_bind(VV[23],base[3]);
	V45= (VFUN_NARGS=1,(*(LnkLI62))(cdr((V45))));
	{object V50 = list(3,VV[11],cadr((V45)),(V45));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR7(V50)}
goto T123;
T123:;
	{object V51 = (VFUN_NARGS=2,(*(LnkLI53))(VV[24],(V45)));
	VMR7(V51)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2FUNCTION	*/

static object LI8(V53)

register object V53;
{	 VMB8 VMS8 VMV8
goto TTL;
TTL:;
	{object V54= car((V53));
	if((V54!= VV[16]))goto T136;
	V55= list(2,VV[25],(*(LnkLI64))(caddr((V53))));
	{object V56 = (VFUN_NARGS=1,(*(LnkLI63))(/* INLINE-ARGS */V55));
	VMR8(V56)}
goto T136;
T136:;
	if((V54!= VV[12]))goto T137;
	if((cadddr((V53)))==Cnil){
	goto T139;}
	V57= list(2,VV[26],structure_ref(caddr((V53)),VV[27],2));
	{object V58 = (VFUN_NARGS=1,(*(LnkLI63))(/* INLINE-ARGS */V57));
	VMR8(V58)}
goto T139;
T139:;
	V59= list(2,VV[28],structure_ref(caddr((V53)),VV[27],1));
	{object V60 = (VFUN_NARGS=1,(*(LnkLI63))(/* INLINE-ARGS */V59));
	VMR8(V60)}
goto T137;
T137:;
	{register object V61;
	setq(VV[32],number_plus(symbol_value(VV[32]),small_fixnum(1)));
	V61= (VFUN_NARGS=4,(*(LnkLI65))(VV[29],VV[30],VV[31],symbol_value(VV[32])));
	if((symbol_value(VV[34]))!=Cnil){
	goto T147;}
	V62= Cnil;
	goto T145;
goto T147;
T147:;
	V62= make_cons(small_fixnum(0),small_fixnum(0));
goto T145;
T145:;
	V63= list(5,VV[30],V62,symbol_value(VV[35]),(V61),(V53));
	setq(VV[33],make_cons(/* INLINE-ARGS */V63,symbol_value(VV[33])));
	setq(VV[36],make_cons((V61),symbol_value(VV[36])));
	if((symbol_value(VV[34]))==Cnil){
	goto T152;}
	V64= list(3,VV[37],structure_ref((V61),VV[27],3),symbol_value(VV[34]));
	{object V65 = (VFUN_NARGS=1,(*(LnkLI63))(/* INLINE-ARGS */V64));
	VMR8(V65)}
goto T152;
T152:;
	(void)((*(LnkLI66))(Cnil));{object V66;
	V66= symbol_value(VV[39]);
	V67= structure_ref((V61),VV[27],3);
	V68= list(3,VV[38],V66,list(3,VV[40],Cnil,(*(LnkLI68))(VV[41],/* INLINE-ARGS */V67)));
	(void)((VFUN_NARGS=2,(*(LnkLI67))(/* INLINE-ARGS */V68,Ct)));}
	V69= list(2,VV[42],symbol_value(VV[39]));
	{object V70 = (VFUN_NARGS=1,(*(LnkLI63))(/* INLINE-ARGS */V69));
	VMR8(V70)}}}
	return Cnil;
}
/*	local entry for function WT-SYMBOL-FUNCTION	*/

static object LI9(V72)

object V72;
{	 VMB9 VMS9 VMV9
goto TTL;
TTL:;
	if((symbol_value(VV[43]))==Cnil){
	goto T157;}
	princ_str("symbol_function(VV[",VV[44]);
	(void)((*(LnkLI69))((V72)));
	princ_str("])",VV[44]);
	{object V73 = Cnil;
	VMR9(V73)}
goto T157;
T157:;
	princ_str("(VV[",VV[44]);
	(void)((*(LnkLI69))((V72)));
	princ_str("]->s.s_gfdef)",VV[44]);
	{object V74 = Cnil;
	VMR9(V74)}
	return Cnil;
}
/*	local entry for function WT-MAKE-CCLOSURE	*/

static object LI10(V77,V78)

object V77;object V78;
{	 VMB10 VMS10 VMV10
goto TTL;
TTL:;
	princ_str("\n	make_cclosure_new(LC",VV[44]);
	(void)((*(LnkLI69))((V77)));
	princ_str(",Cnil,",VV[44]);
	(void)((VFUN_NARGS=1,(*(LnkLI70))((V78))));
	princ_str(",Cdata)",VV[44]);
	{object V79 = Cnil;
	VMR10(V79)}
	return Cnil;
}
static object  LnkTLI70(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[70],(void **)&LnkLI70,ap);va_end(ap);return V1;} /* WT-CLINK */
static object  LnkTLI69(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[69],(void **)&LnkLI69,1,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI68(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[68],(void **)&LnkLI68,2,ap);va_end(ap);return V1;} /* ADD-ADDRESS */
static object  LnkTLI67(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[67],(void **)&LnkLI67,ap);va_end(ap);return V1;} /* ADD-INIT */
static object  LnkTLI66(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[66],(void **)&LnkLI66,1,ap);va_end(ap);return V1;} /* PUSH-DATA-INCF */
static object  LnkTLI65(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[65],(void **)&LnkLI65,ap);va_end(ap);return V1;} /* MAKE-FUN */
static object  LnkTLI64(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[64],(void **)&LnkLI64,1,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI63(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[63],(void **)&LnkLI63,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI62(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[62],(void **)&LnkLI62,ap);va_end(ap);return V1;} /* C1LAMBDA-EXPR */
static object  LnkTLI61(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[61],(void **)&LnkLI61,ap);va_end(ap);return V1;} /* MAKE-INFO */
static object  LnkTLI60(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[60],(void **)&LnkLI60,1,ap);va_end(ap);return V1;} /* C1LOCAL-CLOSURE */
static void LnkT59(){ call_or_link(VV[59],(void **)&Lnk59);} /* C2EXPR */
static object  LnkTLI58(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[58],(void **)&LnkLI58,ap);va_end(ap);return V1;} /* CMPWARN */
static object  LnkTLI57(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[57],(void **)&LnkLI57,1,ap);va_end(ap);return V1;} /* TYPE-FILTER */
static object  LnkTLI56(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[56],(void **)&LnkLI56,2,ap);va_end(ap);return V1;} /* TYPE-AND */
static void LnkT55(){ call_or_link(VV[55],(void **)&Lnk55);} /* COPY-INFO */
static object  LnkTLI54(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[54],(void **)&LnkLI54,1,ap);va_end(ap);return V1;} /* C1EXPR */
static object  LnkTLI53(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[53],(void **)&LnkLI53,ap);va_end(ap);return V1;} /* CMPERR */
static object  LnkTLI50(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[50],(void **)&LnkLI50,1,ap);va_end(ap);return V1;} /* C1PROGN */
static object  LnkTLI48(){return call_proc0(VV[48],(void **)&LnkLI48);} /* C1NIL */
static object  LnkTLI47(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[47],(void **)&LnkLI47,2,ap);va_end(ap);return V1;} /* C1CONSTANT-VALUE */
static object  LnkTLI46(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[46],(void **)&LnkLI46,3,ap);va_end(ap);return V1;} /* TOO-MANY-ARGS */
static object  LnkTLI45(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[45],(void **)&LnkLI45,3,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

