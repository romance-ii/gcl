
#include "cmpinclude.h"
#include "cmplabel.h"
void init_cmplabel(){do_init(VV);}
/*	macro definition for NEXT-LABEL	*/

static void L1()
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

static void L2()
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

static void L3()
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
	V5= list(4,VV[4],VV[5],list(2,VV[6],base[2]),VV[7]);
	base[3]= list(4,VV[2],/* INLINE-ARGS */V4,/* INLINE-ARGS */V5,list(4,VV[8],VV[9],list(2,VV[6],base[2]),VV[10]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for WT-GO	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	check_arg(2);
	vs_top=sup;
	{object V6=base[0]->c.c_cdr;
	if(endp(V6))invalid_macro_call();
	base[2]= (V6->c.c_car);
	V6=V6->c.c_cdr;
	if(!endp(V6))invalid_macro_call();}
	V7= list(3,VV[12],base[2],Ct);
	base[3]= list(3,VV[11],/* INLINE-ARGS */V7,list(4,VV[13],VV[14],list(2,VV[6],base[2]),VV[15]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function UNWIND-BDS	*/

static object LI5(V10,V11)

object V10;object V11;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	if(!(type_of(symbol_value(VV[16]))==t_cons)){
	goto T1;}
	princ_str("\n	restore_avma; ",VV[17]);
	goto T1;
T1:;
	if(((V10))==Cnil){
	goto T5;}
	princ_str("\n	bds_unwind(V",VV[17]);
	(void)((*(LnkLI46))((V10)));
	princ_str(");",VV[17]);
	goto T5;
T5:;
	{register object V12;
	register long V13;
	V12= (V11);
	V13= 0;
	goto T14;
T14:;
	V14 = make_fixnum(V13);
	if(!(number_compare(V14,(V12))>=0)){
	goto T15;}
	{object V15 = Cnil;
	VMR5(V15)}
	goto T15;
T15:;
	princ_str("\n	bds_unwind1;",VV[17]);
	V13= (long)(V13)+1;
	goto T14;}
	return Cnil;
}
/*	local entry for function UNWIND-EXIT	*/

static object LI6(object V16,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	bds_check;
	{register object V17;
	object V18;
	object V19;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V17= V16;
	narg = narg - 1;
	if (narg <= 0) goto T24;
	else {
	V18= first;}
	if (--narg <= 0) goto T25;
	else {
	V19= va_arg(ap,object);}
	--narg; goto T26;
	goto T24;
T24:;
	V18= Cnil;
	goto T25;
T25:;
	V19= Cnil;
	goto T26;
T26:;
	{register object V20;
	register long V21;
	object V22;
	bds_bind(VV[18],symbol_value(VV[18]));
	V20= Cnil;
	V21= 0;
	V22= Cnil;
	if(symbol_value(VV[19])==Cnil){
	goto T32;}
	(void)((*(LnkLI47))((V17),(V19)));
	goto T32;
T32:;
	if(!(((V17))==(VV[20]))){
	goto T33;}
	if((symbol_value(VV[21]))==(VV[22])){
	goto T33;}
	if((symbol_value(VV[21]))==(VV[23])){
	goto T33;}
	princ_str("\n	",VV[17]);
	(void)((*(LnkLI48))());
	goto T33;
T33:;
	if(!(type_of(symbol_value(VV[21]))==t_cons)){
	goto T43;}
	if(!((car(symbol_value(VV[21])))==(VV[24]))){
	goto T43;}
	(void)((*(LnkLI49))((V17),cadr(symbol_value(VV[21]))));
	if(!(((V17))==(Ct))){
	goto T41;}
	{object V23 = Cnil;
	bds_unwind1;
	VMR6(V23)}
	goto T43;
T43:;
	if(!(type_of(symbol_value(VV[21]))==t_cons)){
	goto T41;}
	if(!((car(symbol_value(VV[21])))==(VV[25]))){
	goto T41;}
	(void)((*(LnkLI50))((V17),cadr(symbol_value(VV[21]))));
	if(((V17))!=Cnil){
	goto T41;}
	{object V24 = Cnil;
	bds_unwind1;
	VMR6(V24)}
	goto T41;
T41:;
	{object V25;
	register object V26;
	V25= symbol_value(VV[26]);
	V26= car((V25));
	goto T60;
T60:;
	if(!(endp_prop((V25)))){
	goto T61;}
	{object V27 = (*(LnkLI51))();
	bds_unwind1;
	VMR6(V27)}
	goto T61;
T61:;
	if(!(type_of((V26))==t_cons)){
	goto T67;}
	if(!(((V26))==(symbol_value(VV[27])))){
	goto T70;}
	if(!(type_of(symbol_value(VV[21]))==t_cons)){
	goto T74;}
	if((car(symbol_value(VV[21])))==(VV[24])){
	goto T73;}
	if(!((car(symbol_value(VV[21])))==(VV[25]))){
	goto T74;}
	goto T73;
T73:;
	V28 = make_fixnum(V21);
	(void)((*(LnkLI52))((V20),V28));
	goto T72;
	goto T74;
T74:;
	if(((V20))!=Cnil){
	goto T80;}
	if(!((V21)>0)){
	goto T81;}
	goto T80;
T80:;
	if(!(type_of((V17))==t_cons)){
	goto T86;}
	if(!((car((V17)))==(VV[28]))){
	goto T89;}
	V30= structure_ref(cadr((V17)),VV[28],1);
	{register object x= /* INLINE-ARGS */V30,V29= VV[29];
	while(!endp(V29))
	if(eql(x,V29->c.c_car)){
	goto T85;
	}else V29=V29->c.c_cdr;}
	goto T89;
T89:;
	{register object x= car((V17)),V31= VV[30];
	while(!endp(V31))
	if(eql(x,V31->c.c_car)){
	goto T93;
	}else V31=V31->c.c_cdr;
	goto T86;}
	goto T93;
T93:;
	goto T85;
T85:;
	if(!(type_of(symbol_value(VV[21]))==t_cons)){
	goto T95;}
	if(!((car(symbol_value(VV[21])))==(VV[31]))){
	goto T95;}
	base[2]= (V17);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	V32 = make_fixnum(V21);
	(void)((*(LnkLI52))((V20),V32));
	goto T72;
	goto T95;
T95:;
	{object V33;
	V33= list(2,VV[32],(VFUN_NARGS=0,(*(LnkLI54))()));
	bds_bind(VV[21],(V33));
	base[3]= (V17);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	bds_unwind1;
	V34 = make_fixnum(V21);
	(void)((*(LnkLI52))((V20),V34));
	base[2]= (V33);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	goto T72;}
	goto T86;
T86:;
	V35 = make_fixnum(V21);
	(void)((*(LnkLI52))((V20),V35));
	base[2]= (V17);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	goto T72;
	goto T81;
T81:;
	base[2]= (V17);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	goto T72;
T72:;
	if(((V18))==Cnil){
	goto T109;}
	if(!(type_of(symbol_value(VV[16]))==t_cons)){
	goto T112;}
	princ_str("\n	restore_avma; ",VV[17]);
	goto T112;
T112:;
	princ_str("\n	",VV[17]);
	if(type_of(symbol_value(VV[27]))!=t_cons)FEwrong_type_argument(Scons,symbol_value(VV[27]));
	(symbol_value(VV[27]))->c.c_cdr = Ct;
	princ_str("goto T",VV[17]);
	(void)((*(LnkLI46))(car(symbol_value(VV[27]))));
	princ_char(59,VV[17]);
	goto T109;
T109:;
	{object V36 = Cnil;
	bds_unwind1;
	VMR6(V36)}
	goto T70;
T70:;
	V18= Ct;
	goto T65;
	goto T67;
T67:;
	if(!(type_of((V26))==t_fixnum||
type_of((V26))==t_bignum||
type_of((V26))==t_ratio||
type_of((V26))==t_shortfloat||
type_of((V26))==t_longfloat||
type_of((V26))==t_complex)){
	goto T123;}
	V20= (V26);
	V21= 0;
	goto T65;
	goto T123;
T123:;
	if(!(((V26))==(VV[33]))){
	goto T129;}
	V21= (long)(V21)+(1);
	goto T65;
	goto T129;
T129:;
	if(!(((V26))==(VV[22]))){
	goto T133;}
	if(!((symbol_value(VV[27]))==(VV[22]))){
	goto T65;}
	base[2]= (V17);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	V37 = make_fixnum(V21);
	(void)((*(LnkLI52))((V20),V37));
	princ_str("\n	return;",VV[17]);
	{object V38 = Cnil;
	bds_unwind1;
	VMR6(V38)}
	goto T133;
T133:;
	if(!(((V26))==(VV[34]))){
	goto T143;}
	if(!(type_of((V17))==t_cons)){
	goto T145;}
	{register object x= car((V17)),V39= VV[35];
	while(!endp(V39))
	if(eql(x,V39->c.c_car)){
	goto T149;
	}else V39=V39->c.c_cdr;
	goto T145;}
	goto T149;
T149:;
	if(!(type_of(symbol_value(VV[21]))==t_cons)){
	goto T151;}
	if(!((car(symbol_value(VV[21])))==(VV[31]))){
	goto T151;}
	base[2]= (V17);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	V17= symbol_value(VV[21]);
	goto T145;
	goto T151;
T151:;
	if((symbol_value(VV[36]))==Cnil){
	goto T160;}
	base[2]= list(2,VV[32],(VFUN_NARGS=0,(*(LnkLI54))()));
	goto T158;
	goto T160;
T160:;
	base[2]= list(2,VV[31],(*(LnkLI55))());
	goto T158;
T158:;
	bds_bind(VV[21],base[2]);
	base[3]= (V17);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	V17= (VV[21]->s.s_dbind);
	bds_unwind1;
	goto T145;
T145:;
	princ_str("\n	frs_pop();",VV[17]);
	goto T65;
	goto T143;
T143:;
	{object V40;
	V40= (((V26))==(VV[37])?Ct:Cnil);
	if(((V40))==Cnil){
	goto T168;}
	goto T65;
	goto T168;
T168:;
	if(!(((V26))==(VV[38]))){
	goto T171;}
	V18= Ct;
	goto T65;
	goto T171;
T171:;
	{register object x= (V26),V41= VV[39];
	while(!endp(V41))
	if(type_of(V41->c.c_car)==t_cons &&eql(x,V41->c.c_car->c.c_car)){
	V22= (V41->c.c_car);
	goto T177;
	}else V41=V41->c.c_cdr;
	V22= Cnil;}
	goto T177;
T177:;
	if(((V22))==Cnil){
	goto T175;}
	{object V42;
	setq(VV[40],number_plus(symbol_value(VV[40]),small_fixnum(1)));
	V42= symbol_value(VV[40]);{object V43;
	V43= symbol_value(VV[27]);
	if(!((V43)==(car((V22))))){
	goto T181;}}
	goto T180;
	goto T181;
T181:;
	(void)((*(LnkLI56))());
	goto T180;
T180:;
	V22= cdr((V22));
	princ_str("\n	{",VV[17]);
	V44= (*(LnkLI57))(car((V22)));
	(void)((*(LnkLI46))(/* INLINE-ARGS */V44));
	princ_char(86,VV[17]);
	(void)((*(LnkLI46))((V42)));
	princ_str(" = ",VV[17]);
	(void)((
	V45 = cdr((V22)),
	(type_of(V45) == t_sfun ?(*((V45)->sfn.sfn_self)):
	(fcall.fun=(V45),fcall.argd=1,fcalln))((V17))));
	princ_char(59,VV[17]);
	V46 = make_fixnum(V21);
	(void)((*(LnkLI52))((V20),V46));
	princ_str("\n	VMR",VV[17]);
	(void)((*(LnkLI46))(symbol_value(VV[41])));
	princ_char(40,VV[17]);
	V48= (*(LnkLI57))(car((V22)));
	if(!(equal(/* INLINE-ARGS */V48,VV[42]))){
	goto T202;}
	V47= VV[43];
	goto T200;
	goto T202;
T202:;
	V47= VV[44];
	goto T200;
T200:;
	(void)((*(LnkLI46))(V47));
	princ_char(86,VV[17]);
	(void)((*(LnkLI46))((V42)));
	princ_str(")}",VV[17]);
	{object V49 = Cnil;
	bds_unwind1;
	VMR6(V49)}}
	goto T175;
T175:;
	(void)((*(LnkLI51))());}
	goto T65;
T65:;
	V25= cdr((V25));
	V26= car((V25));
	goto T60;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function UNWIND-NO-EXIT	*/

static object LI7(V51)

register object V51;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V52;
	register long V53;
	V52= Cnil;
	V53= 0;
	{register object V54;
	register object V55;
	V54= symbol_value(VV[26]);
	V55= car((V54));
	goto T217;
T217:;
	if(!(endp_prop((V54)))){
	goto T218;}
	{object V56 = (*(LnkLI51))();
	VMR7(V56)}
	goto T218;
T218:;
	if(!(type_of((V55))==t_cons)){
	goto T224;}
	if(!(((V55))==((V51)))){
	goto T222;}
	V57 = make_fixnum(V53);
	(void)((*(LnkLI52))((V52),V57));
	{object V58 = Cnil;
	VMR7(V58)}
	goto T224;
T224:;
	if(!(type_of((V55))==t_fixnum||
type_of((V55))==t_bignum||
type_of((V55))==t_ratio||
type_of((V55))==t_shortfloat||
type_of((V55))==t_longfloat||
type_of((V55))==t_complex)){
	goto T230;}
	V52= (V55);
	V53= 0;
	goto T222;
	goto T230;
T230:;
	if(!(((V55))==(VV[33]))){
	goto T236;}
	V53= (long)(V53)+(1);
	goto T222;
	goto T236;
T236:;
	{register object x= (V55),V59= VV[45];
	while(!endp(V59))
	if(eql(x,V59->c.c_car)){
	goto T241;
	}else V59=V59->c.c_cdr;
	goto T240;}
	goto T241;
T241:;
	if(!(((V51))==((V55)))){
	goto T243;}
	V60 = make_fixnum(V53);
	(void)((*(LnkLI52))((V52),V60));
	{object V61 = Cnil;
	VMR7(V61)}
	goto T243;
T243:;
	(void)((*(LnkLI51))());
	goto T222;
	goto T240;
T240:;
	if(!(((V55))==(VV[34]))){
	goto T247;}
	princ_str("\n	frs_pop();",VV[17]);
	goto T222;
	goto T247;
T247:;
	if(!(((V55))==(VV[37]))){
	goto T251;}
	if(!(((V51))==(VV[37]))){
	goto T254;}
	V62 = make_fixnum(V53);
	(void)((*(LnkLI52))((V52),V62));
	{object V63 = Cnil;
	VMR7(V63)}
	goto T254;
T254:;
	(void)((*(LnkLI51))());
	goto T222;
	goto T251;
T251:;
	{object V64;
	V64= (((V55))==(VV[38])?Ct:Cnil);
	if(((V64))==Cnil){
	goto T259;}
	goto T222;
	goto T259;
T259:;
	(void)((*(LnkLI51))());}
	goto T222;
T222:;
	V54= cdr((V54));
	V55= car((V54));
	goto T217;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TAIL-RECURSION-POSSIBLE	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{register object V65;
	register object V66;
	V65= symbol_value(VV[26]);
	V66= car((V65));
	goto T269;
T269:;
	if(!(endp_prop((V65)))){
	goto T270;}
	{object V67 = (*(LnkLI51))();
	VMR8(V67)}
	goto T270;
T270:;
	if(!(((V66))==(VV[37]))){
	goto T276;}
	{object V68 = Ct;
	VMR8(V68)}
	goto T276;
T276:;
	if(type_of((V66))==t_fixnum||
type_of((V66))==t_bignum||
type_of((V66))==t_ratio||
type_of((V66))==t_shortfloat||
type_of((V66))==t_longfloat||
type_of((V66))==t_complex){
	goto T278;}
	if(((V66))==(VV[33])){
	goto T278;}
	if(!(((V66))==(VV[34]))){
	goto T279;}
	goto T278;
T278:;
	{object V69 = Cnil;
	VMR8(V69)}
	goto T279;
T279:;
	{register object V70;
	if(!(type_of((V66))==t_cons)){
	goto T286;}
	V70= Ct;
	goto T285;
	goto T286;
T286:;
	V70= (((V66))==(VV[38])?Ct:Cnil);
	goto T285;
T285:;
	if(((V70))==Cnil){
	goto T289;}
	goto T274;
	goto T289;
T289:;
	(void)((*(LnkLI51))());}
	goto T274;
T274:;
	V65= cdr((V65));
	V66= car((V65));
	goto T269;}
	base[0]=base[0];
	return Cnil;
}
static object  LnkTLI57(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[57],(void **)(void *)&LnkLI57,1,first,ap);va_end(ap);return V1;} /* REP-TYPE */
static object  LnkTLI56(){return call_proc0(VV[56],(void **)(void *)&LnkLI56);} /* WFS-ERROR */
static object  LnkTLI55(){return call_proc0(VV[55],(void **)(void *)&LnkLI55);} /* VS-PUSH */
static object  LnkTLI54(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[54],(void **)(void *)&LnkLI54,first,ap);va_end(ap);return V1;} /* CS-PUSH */
static void LnkT53(){ call_or_link(VV[53],(void **)(void *)&Lnk53);} /* SET-LOC */
static object  LnkTLI52(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[52],(void **)(void *)&LnkLI52,2,first,ap);va_end(ap);return V1;} /* UNWIND-BDS */
static object  LnkTLI51(){return call_proc0(VV[51],(void **)(void *)&LnkLI51);} /* BABOON */
static object  LnkTLI50(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[50],(void **)(void *)&LnkLI50,2,first,ap);va_end(ap);return V1;} /* SET-JUMP-FALSE */
static object  LnkTLI49(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[49],(void **)(void *)&LnkLI49,2,first,ap);va_end(ap);return V1;} /* SET-JUMP-TRUE */
static object  LnkTLI48(){return call_proc0(VV[48],(void **)(void *)&LnkLI48);} /* RESET-TOP */
static object  LnkTLI47(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[47],(void **)(void *)&LnkLI47,2,first,ap);va_end(ap);return V1;} /* RECORD-CALL-INFO */
static object  LnkTLI46(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[46],(void **)(void *)&LnkLI46,1,first,ap);va_end(ap);return V1;} /* WT1 */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

