
#include "cmpinclude.h"
#include "cmplabel.h"
init_cmplabel(){do_init(VV);}
/*	macro definition for NEXT-LABEL	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(!endp(V1))invalid_macro_call();}
	base[2]= VV[0];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	macro definition for NEXT-LABEL*	*/

static L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	check_arg(2);
	vs_top=sup;
	{object V2=base[0]->c.c_cdr;
	if(!endp(V2))invalid_macro_call();}
	base[2]= VV[1];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	macro definition for WT-LABEL	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(2);
	vs_top=sup;
	{object V3=base[0]->c.c_cdr;
	if(endp(V3))invalid_macro_call();
	base[2]= (V3->c.c_car);
	V3=V3->c.c_cdr;
	if(!endp(V3))invalid_macro_call();}
	V4= list(2,VV[3],base[2]);
	base[3]= list(3,VV[2],/* INLINE-ARGS */V4,list(4,VV[4],VV[5],list(2,VV[6],base[2]),VV[7]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for WT-GO	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	check_arg(2);
	vs_top=sup;
	{object V5=base[0]->c.c_cdr;
	if(endp(V5))invalid_macro_call();
	base[2]= (V5->c.c_car);
	V5=V5->c.c_cdr;
	if(!endp(V5))invalid_macro_call();}
	V6= list(3,VV[9],base[2],Ct);
	base[3]= list(3,VV[8],/* INLINE-ARGS */V6,list(4,VV[10],VV[11],list(2,VV[6],base[2]),VV[12]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function UNWIND-BDS	*/

static object LI5(V9,V10)

object V9;object V10;
{	 VMB5 VMS5 VMV5
TTL:;
	if(!(type_of(symbol_value(VV[13]))==t_cons)){
	goto T1;}
	princ_str("\n	restore_avma; ",VV[14]);
T1:;
	if(((V9))==Cnil){
	goto T5;}
	princ_str("\n	bds_unwind(V",VV[14]);
	(void)((*(LnkLI40))((V9)));
	princ_str(");",VV[14]);
T5:;
	{register object V11;
	register int V12;
	V11= (V10);
	V12= 0;
T14:;
	V13 = make_fixnum(V12);
	if(!(number_compare(V13,(V11))>=0)){
	goto T15;}
	{object V14 = Cnil;
	VMR5(V14)}
T15:;
	princ_str("\n	bds_unwind1;",VV[14]);
	V12= (V12)+1;
	goto T14;}
}
/*	local entry for function UNWIND-EXIT	*/

static object LI6(V15,va_alist)
	object V15;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	bds_check;
	{register object V16;
	object V17;
	object V18;
	if(narg <1) too_few_arguments();
	V16= V15;
	narg = narg - 1;
	if (narg <= 0) goto T24;
	else {
	va_start(ap);
	V17= va_arg(ap,object);}
	if (--narg <= 0) goto T25;
	else {
	V18= va_arg(ap,object);}
	--narg; goto T26;
T24:;
	V17= Cnil;
T25:;
	V18= Cnil;
T26:;
	{register object V19;
	register int V20;
	object V21;
	bds_bind(VV[15],symbol_value(VV[15]));
	V19= Cnil;
	V20= 0;
	V21= Cnil;
	if(symbol_value(VV[16])==Cnil){
	goto T32;}
	(void)((*(LnkLI41))((V16),(V18)));
T32:;
	if(!(((V16))==(VV[17]))){
	goto T33;}
	if((symbol_value(VV[18]))==(VV[19])){
	goto T33;}
	if((symbol_value(VV[18]))==(VV[20])){
	goto T33;}
	princ_str("\n	",VV[14]);
	(void)((*(LnkLI42))());
T33:;
	if(!(type_of(symbol_value(VV[18]))==t_cons)){
	goto T43;}
	if(!((car(symbol_value(VV[18])))==(VV[21]))){
	goto T43;}
	(void)((*(LnkLI43))((V16),cadr(symbol_value(VV[18]))));
	if(!(((V16))==(Ct))){
	goto T41;}
	{object V22 = Cnil;
	bds_unwind1;
	VMR6(V22)}
T43:;
	if(!(type_of(symbol_value(VV[18]))==t_cons)){
	goto T41;}
	if(!((car(symbol_value(VV[18])))==(VV[22]))){
	goto T41;}
	(void)((*(LnkLI44))((V16),cadr(symbol_value(VV[18]))));
	if(((V16))!=Cnil){
	goto T41;}
	{object V23 = Cnil;
	bds_unwind1;
	VMR6(V23)}
T41:;
	{object V24;
	register object V25;
	V24= symbol_value(VV[23]);
	V25= car((V24));
T60:;
	if(!(endp((V24)))){
	goto T61;}
	{object V26 = (*(LnkLI45))();
	bds_unwind1;
	VMR6(V26)}
T61:;
	if(!(type_of((V25))==t_cons)){
	goto T67;}
	if(!(((V25))==(symbol_value(VV[24])))){
	goto T70;}
	if(!(type_of(symbol_value(VV[18]))==t_cons)){
	goto T74;}
	if((car(symbol_value(VV[18])))==(VV[21])){
	goto T73;}
	if(!((car(symbol_value(VV[18])))==(VV[22]))){
	goto T74;}
T73:;
	V27 = make_fixnum(V20);
	(void)((*(LnkLI46))((V19),V27));
	goto T72;
T74:;
	if(((V19))!=Cnil){
	goto T80;}
	if(!((V20)>0)){
	goto T81;}
T80:;
	if(!(type_of((V16))==t_cons)){
	goto T86;}
	if(!((car((V16)))==(VV[25]))){
	goto T89;}
	V29= structure_ref(cadr((V16)),VV[25],1);
	{register object x= /* INLINE-ARGS */V29,V28= VV[26];
	while(!endp(V28))
	if(eql(x,V28->c.c_car)){
	goto T85;
	}else V28=V28->c.c_cdr;}
T89:;
	{register object x= car((V16)),V30= VV[27];
	while(!endp(V30))
	if(eql(x,V30->c.c_car)){
	goto T93;
	}else V30=V30->c.c_cdr;
	goto T86;}
T93:;
T85:;
	if(!(type_of(symbol_value(VV[18]))==t_cons)){
	goto T95;}
	if(!((car(symbol_value(VV[18])))==(VV[28]))){
	goto T95;}
	base[2]= (V16);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk47)();
	vs_top=sup;
	V31 = make_fixnum(V20);
	(void)((*(LnkLI46))((V19),V31));
	goto T72;
T95:;
	{object V32;
	V32= list(2,VV[29],(VFUN_NARGS=0,(*(LnkLI48))()));
	bds_bind(VV[18],(V32));
	base[3]= (V16);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk47)();
	vs_top=sup;
	bds_unwind1;
	V33 = make_fixnum(V20);
	(void)((*(LnkLI46))((V19),V33));
	base[2]= (V32);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk47)();
	vs_top=sup;
	goto T72;}
T86:;
	V34 = make_fixnum(V20);
	(void)((*(LnkLI46))((V19),V34));
	base[2]= (V16);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk47)();
	vs_top=sup;
	goto T72;
T81:;
	base[2]= (V16);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk47)();
	vs_top=sup;
T72:;
	if(((V17))==Cnil){
	goto T109;}
	if(!(type_of(symbol_value(VV[13]))==t_cons)){
	goto T112;}
	princ_str("\n	restore_avma; ",VV[14]);
T112:;
	princ_str("\n	",VV[14]);
	if(type_of(symbol_value(VV[24]))!=t_cons)FEwrong_type_argument(Scons,symbol_value(VV[24]));
	(symbol_value(VV[24]))->c.c_cdr = Ct;
	princ_str("goto T",VV[14]);
	(void)((*(LnkLI40))(car(symbol_value(VV[24]))));
	princ_char(59,VV[14]);
T109:;
	{object V35 = Cnil;
	bds_unwind1;
	VMR6(V35)}
T70:;
	V17= Ct;
	goto T65;
T67:;
	if(!(type_of((V25))==t_fixnum||
type_of((V25))==t_bignum||
type_of((V25))==t_ratio||
type_of((V25))==t_shortfloat||
type_of((V25))==t_longfloat||
type_of((V25))==t_complex)){
	goto T123;}
	V19= (V25);
	V20= 0;
	goto T65;
T123:;
	if(!(((V25))==(VV[30]))){
	goto T129;}
	V20= (V20)+(1);
	goto T65;
T129:;
	if(!(((V25))==(VV[19]))){
	goto T133;}
	if(!((symbol_value(VV[24]))==(VV[19]))){
	goto T65;}
	base[2]= (V16);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk47)();
	vs_top=sup;
	V36 = make_fixnum(V20);
	(void)((*(LnkLI46))((V19),V36));
	princ_str("\n	return;",VV[14]);
	{object V37 = Cnil;
	bds_unwind1;
	VMR6(V37)}
T133:;
	if(!(((V25))==(VV[31]))){
	goto T143;}
	if(!(type_of((V16))==t_cons)){
	goto T145;}
	{register object x= car((V16)),V38= VV[32];
	while(!endp(V38))
	if(eql(x,V38->c.c_car)){
	goto T149;
	}else V38=V38->c.c_cdr;
	goto T145;}
T149:;
	if(!(type_of(symbol_value(VV[18]))==t_cons)){
	goto T151;}
	if(!((car(symbol_value(VV[18])))==(VV[28]))){
	goto T151;}
	base[2]= (V16);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk47)();
	vs_top=sup;
	V16= symbol_value(VV[18]);
	goto T145;
T151:;
	if((symbol_value(VV[33]))==Cnil){
	goto T160;}
	base[2]= list(2,VV[29],(VFUN_NARGS=0,(*(LnkLI48))()));
	goto T158;
T160:;
	base[2]= list(2,VV[28],(*(LnkLI49))());
T158:;
	bds_bind(VV[18],base[2]);
	base[3]= (V16);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk47)();
	vs_top=sup;
	V16= (VV[18]->s.s_dbind);
	bds_unwind1;
T145:;
	princ_str("\n	frs_pop();",VV[14]);
	goto T65;
T143:;
	{object V39;
	V39= (((V25))==(VV[34])?Ct:Cnil);
	if(((V39))==Cnil){
	goto T168;}
	goto T65;
T168:;
	if(!(((V25))==(VV[35]))){
	goto T171;}
	V17= Ct;
	goto T65;
T171:;
	{register object x= (V25),V40= VV[36];
	while(!endp(V40))
	if(type_of(V40->c.c_car)==t_cons &&eql(x,V40->c.c_car->c.c_car)){
	V21= (V40->c.c_car);
	goto T177;
	}else V40=V40->c.c_cdr;
	V21= Cnil;}
T177:;
	if(((V21))==Cnil){
	goto T175;}
	{object V41;
	setq(VV[37],number_plus(symbol_value(VV[37]),small_fixnum(1)));
	V41= symbol_value(VV[37]);{object V42;
	V42= symbol_value(VV[24]);
	if(!((V42)==(car((V21))))){
	goto T181;}}
	goto T180;
T181:;
	(void)((*(LnkLI50))());
T180:;
	V21= cdr((V21));
	princ_str("\n	{",VV[14]);
	V43= (*(LnkLI51))(car((V21)));
	(void)((*(LnkLI40))(/* INLINE-ARGS */V43));
	princ_char(86,VV[14]);
	(void)((*(LnkLI40))((V41)));
	princ_str(" = ",VV[14]);
	(void)((
	V44 = cdr((V21)),
	(type_of(V44) == t_sfun ?(*(object (*)())((V44)->sfn.sfn_self)):
	(fcall.fun=(V44),fcall.argd=1,fcalln))((V16))));
	princ_char(59,VV[14]);
	V45 = make_fixnum(V20);
	(void)((*(LnkLI46))((V19),V45));
	princ_str("\n	VMR",VV[14]);
	(void)((*(LnkLI40))(symbol_value(VV[38])));
	princ_str("(V",VV[14]);
	(void)((*(LnkLI40))((V41)));
	princ_str(")}",VV[14]);
	{object V46 = Cnil;
	bds_unwind1;
	VMR6(V46)}}
T175:;
	(void)((*(LnkLI45))());}
T65:;
	V24= cdr((V24));
	V25= car((V24));
	goto T60;}}}
	}
/*	local entry for function UNWIND-NO-EXIT	*/

static object LI7(V48)

register object V48;
{	 VMB7 VMS7 VMV7
TTL:;
	{register object V49;
	register int V50;
	V49= Cnil;
	V50= 0;
	{register object V51;
	register object V52;
	V51= symbol_value(VV[23]);
	V52= car((V51));
T211:;
	if(!(endp((V51)))){
	goto T212;}
	{object V53 = (*(LnkLI45))();
	VMR7(V53)}
T212:;
	if(!(type_of((V52))==t_cons)){
	goto T218;}
	if(!(((V52))==((V48)))){
	goto T216;}
	V54 = make_fixnum(V50);
	(void)((*(LnkLI46))((V49),V54));
	{object V55 = Cnil;
	VMR7(V55)}
T218:;
	if(!(type_of((V52))==t_fixnum||
type_of((V52))==t_bignum||
type_of((V52))==t_ratio||
type_of((V52))==t_shortfloat||
type_of((V52))==t_longfloat||
type_of((V52))==t_complex)){
	goto T224;}
	V49= (V52);
	V50= 0;
	goto T216;
T224:;
	if(!(((V52))==(VV[30]))){
	goto T230;}
	V50= (V50)+(1);
	goto T216;
T230:;
	{register object x= (V52),V56= VV[39];
	while(!endp(V56))
	if(eql(x,V56->c.c_car)){
	goto T235;
	}else V56=V56->c.c_cdr;
	goto T234;}
T235:;
	if(!(((V48))==((V52)))){
	goto T237;}
	V57 = make_fixnum(V50);
	(void)((*(LnkLI46))((V49),V57));
	{object V58 = Cnil;
	VMR7(V58)}
T237:;
	(void)((*(LnkLI45))());
	goto T216;
T234:;
	if(!(((V52))==(VV[31]))){
	goto T241;}
	princ_str("\n	frs_pop();",VV[14]);
	goto T216;
T241:;
	if(!(((V52))==(VV[34]))){
	goto T245;}
	if(!(((V48))==(VV[34]))){
	goto T248;}
	V59 = make_fixnum(V50);
	(void)((*(LnkLI46))((V49),V59));
	{object V60 = Cnil;
	VMR7(V60)}
T248:;
	(void)((*(LnkLI45))());
	goto T216;
T245:;
	{object V61;
	V61= (((V52))==(VV[35])?Ct:Cnil);
	if(((V61))==Cnil){
	goto T253;}
	goto T216;
T253:;
	(void)((*(LnkLI45))());}
T216:;
	V51= cdr((V51));
	V52= car((V51));
	goto T211;}}
}
/*	local entry for function TAIL-RECURSION-POSSIBLE	*/

static object LI8()

{	 VMB8 VMS8 VMV8
TTL:;
	{register object V62;
	register object V63;
	V62= symbol_value(VV[23]);
	V63= car((V62));
T263:;
	if(!(endp((V62)))){
	goto T264;}
	{object V64 = (*(LnkLI45))();
	VMR8(V64)}
T264:;
	if(!(((V63))==(VV[34]))){
	goto T270;}
	{object V65 = Ct;
	VMR8(V65)}
T270:;
	if(type_of((V63))==t_fixnum||
type_of((V63))==t_bignum||
type_of((V63))==t_ratio||
type_of((V63))==t_shortfloat||
type_of((V63))==t_longfloat||
type_of((V63))==t_complex){
	goto T272;}
	if(((V63))==(VV[30])){
	goto T272;}
	if(!(((V63))==(VV[31]))){
	goto T273;}
T272:;
	{object V66 = Cnil;
	VMR8(V66)}
T273:;
	{register object V67;
	if(!(type_of((V63))==t_cons)){
	goto T280;}
	V67= Ct;
	goto T279;
T280:;
	V67= (((V63))==(VV[35])?Ct:Cnil);
T279:;
	if(((V67))==Cnil){
	goto T283;}
	goto T268;
T283:;
	(void)((*(LnkLI45))());}
T268:;
	V62= cdr((V62));
	V63= car((V62));
	goto T263;}
}
static object  LnkTLI51(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[51],&LnkLI51,1,ap);} /* REP-TYPE */
static object  LnkTLI50(){return call_proc0(VV[50],&LnkLI50);} /* WFS-ERROR */
static object  LnkTLI49(){return call_proc0(VV[49],&LnkLI49);} /* VS-PUSH */
static object  LnkTLI48(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[48],&LnkLI48,ap);} /* CS-PUSH */
static LnkT47(){ call_or_link(VV[47],&Lnk47);} /* SET-LOC */
static object  LnkTLI46(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[46],&LnkLI46,2,ap);} /* UNWIND-BDS */
static object  LnkTLI45(){return call_proc0(VV[45],&LnkLI45);} /* BABOON */
static object  LnkTLI44(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[44],&LnkLI44,2,ap);} /* SET-JUMP-FALSE */
static object  LnkTLI43(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[43],&LnkLI43,2,ap);} /* SET-JUMP-TRUE */
static object  LnkTLI42(){return call_proc0(VV[42],&LnkLI42);} /* RESET-TOP */
static object  LnkTLI41(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[41],&LnkLI41,2,ap);} /* RECORD-CALL-INFO */
static object  LnkTLI40(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[40],&LnkLI40,1,ap);} /* WT1 */
