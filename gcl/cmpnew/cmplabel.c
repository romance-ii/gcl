
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
	base[3]= list(4,VV[2],/* INLINE-ARGS */V4,/* INLINE-ARGS */V5,list(4,VV[4],VV[8],list(2,VV[6],base[2]),VV[9]));
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
	V7= list(3,VV[11],base[2],Ct);
	base[3]= list(3,VV[10],/* INLINE-ARGS */V7,list(4,VV[12],VV[13],list(2,VV[6],base[2]),VV[14]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function UNWIND-BDS	*/

static object LI5(V10,V11)

object V10;object V11;
{	 VMB5 VMS5 VMV5
goto TTL;
TTL:;
	if(!(type_of(symbol_value(VV[15]))==t_cons)){
	goto T1;}
	princ_str("\n	restore_avma; ",VV[16]);
goto T1;
T1:;
	if(((V10))==Cnil){
	goto T5;}
	princ_str("\n	bds_unwind(V",VV[16]);
	(void)((*(LnkLI42))((V10)));
	princ_str(");",VV[16]);
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
	princ_str("\n	bds_unwind1;",VV[16]);
	V13= (V13)+1;
	goto T14;}
	return Cnil;
}
/*	local entry for function UNWIND-EXIT	*/

static object LI6(V16,va_alist)
	object V16;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	bds_check;
	{register object V17;
	object V18;
	object V19;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V17= V16;
	narg = narg - 1;
	if (narg <= 0) goto T24;
	else {
	V18= va_arg(ap,object);}
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
	bds_bind(VV[17],symbol_value(VV[17]));
	V20= Cnil;
	V21= 0;
	V22= Cnil;
	if(symbol_value(VV[18])==Cnil){
	goto T32;}
	(void)((*(LnkLI43))((V17),(V19)));
goto T32;
T32:;
	if(!(((V17))==(VV[19]))){
	goto T33;}
	if((symbol_value(VV[20]))==(VV[21])){
	goto T33;}
	if((symbol_value(VV[20]))==(VV[22])){
	goto T33;}
	princ_str("\n	",VV[16]);
	(void)((*(LnkLI44))());
goto T33;
T33:;
	if(!(type_of(symbol_value(VV[20]))==t_cons)){
	goto T43;}
	if(!((car(symbol_value(VV[20])))==(VV[23]))){
	goto T43;}
	(void)((*(LnkLI45))((V17),cadr(symbol_value(VV[20]))));
	if(!(((V17))==(Ct))){
	goto T41;}
	{object V23 = Cnil;
	bds_unwind1;
	VMR6(V23)}
goto T43;
T43:;
	if(!(type_of(symbol_value(VV[20]))==t_cons)){
	goto T41;}
	if(!((car(symbol_value(VV[20])))==(VV[24]))){
	goto T41;}
	(void)((*(LnkLI46))((V17),cadr(symbol_value(VV[20]))));
	if(((V17))!=Cnil){
	goto T41;}
	{object V24 = Cnil;
	bds_unwind1;
	VMR6(V24)}
goto T41;
T41:;
	{object V25;
	register object V26;
	V25= symbol_value(VV[25]);
	V26= car((V25));
goto T60;
T60:;
	if(!(endp((V25)))){
	goto T61;}
	{object V27 = (*(LnkLI47))();
	bds_unwind1;
	VMR6(V27)}
goto T61;
T61:;
	if(!(type_of((V26))==t_cons)){
	goto T67;}
	if(!(((V26))==(symbol_value(VV[26])))){
	goto T70;}
	if(!(type_of(symbol_value(VV[20]))==t_cons)){
	goto T74;}
	if((car(symbol_value(VV[20])))==(VV[23])){
	goto T73;}
	if(!((car(symbol_value(VV[20])))==(VV[24]))){
	goto T74;}
goto T73;
T73:;
	V28 = make_fixnum(V21);
	(void)((*(LnkLI48))((V20),V28));
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
	if(!((car((V17)))==(VV[27]))){
	goto T89;}
	V30= structure_ref(cadr((V17)),VV[27],1);
	{register object x= /* INLINE-ARGS */V30,V29= VV[28];
	while(!endp(V29))
	if(eql(x,V29->c.c_car)){
	goto T85;
	}else V29=V29->c.c_cdr;}
goto T89;
T89:;
	{register object x= car((V17)),V31= VV[29];
	while(!endp(V31))
	if(eql(x,V31->c.c_car)){
	goto T93;
	}else V31=V31->c.c_cdr;
	goto T86;}
goto T93;
T93:;
goto T85;
T85:;
	if(!(type_of(symbol_value(VV[20]))==t_cons)){
	goto T95;}
	if(!((car(symbol_value(VV[20])))==(VV[30]))){
	goto T95;}
	base[2]= (V17);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk49)();
	vs_top=sup;
	V32 = make_fixnum(V21);
	(void)((*(LnkLI48))((V20),V32));
	goto T72;
goto T95;
T95:;
	{object V33;
	V33= list(2,VV[31],(VFUN_NARGS=0,(*(LnkLI50))()));
	bds_bind(VV[20],(V33));
	base[3]= (V17);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk49)();
	vs_top=sup;
	bds_unwind1;
	V34 = make_fixnum(V21);
	(void)((*(LnkLI48))((V20),V34));
	base[2]= (V33);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk49)();
	vs_top=sup;
	goto T72;}
goto T86;
T86:;
	V35 = make_fixnum(V21);
	(void)((*(LnkLI48))((V20),V35));
	base[2]= (V17);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk49)();
	vs_top=sup;
	goto T72;
goto T81;
T81:;
	base[2]= (V17);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk49)();
	vs_top=sup;
goto T72;
T72:;
	if(((V18))==Cnil){
	goto T109;}
	if(!(type_of(symbol_value(VV[15]))==t_cons)){
	goto T112;}
	princ_str("\n	restore_avma; ",VV[16]);
goto T112;
T112:;
	princ_str("\n	",VV[16]);
	if(type_of(symbol_value(VV[26]))!=t_cons)FEwrong_type_argument(Scons,symbol_value(VV[26]));
	(symbol_value(VV[26]))->c.c_cdr = Ct;
	princ_str("goto T",VV[16]);
	(void)((*(LnkLI42))(car(symbol_value(VV[26]))));
	princ_char(59,VV[16]);
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
	if(!(((V26))==(VV[32]))){
	goto T129;}
	V21= (V21)+(1);
	goto T65;
goto T129;
T129:;
	if(!(((V26))==(VV[21]))){
	goto T133;}
	if(!((symbol_value(VV[26]))==(VV[21]))){
	goto T65;}
	base[2]= (V17);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk49)();
	vs_top=sup;
	V37 = make_fixnum(V21);
	(void)((*(LnkLI48))((V20),V37));
	princ_str("\n	return;",VV[16]);
	{object V38 = Cnil;
	bds_unwind1;
	VMR6(V38)}
goto T133;
T133:;
	if(!(((V26))==(VV[33]))){
	goto T143;}
	if(!(type_of((V17))==t_cons)){
	goto T145;}
	{register object x= car((V17)),V39= VV[34];
	while(!endp(V39))
	if(eql(x,V39->c.c_car)){
	goto T149;
	}else V39=V39->c.c_cdr;
	goto T145;}
goto T149;
T149:;
	if(!(type_of(symbol_value(VV[20]))==t_cons)){
	goto T151;}
	if(!((car(symbol_value(VV[20])))==(VV[30]))){
	goto T151;}
	base[2]= (V17);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk49)();
	vs_top=sup;
	V17= symbol_value(VV[20]);
	goto T145;
goto T151;
T151:;
	if((symbol_value(VV[35]))==Cnil){
	goto T160;}
	base[2]= list(2,VV[31],(VFUN_NARGS=0,(*(LnkLI50))()));
	goto T158;
goto T160;
T160:;
	base[2]= list(2,VV[30],(*(LnkLI51))());
goto T158;
T158:;
	bds_bind(VV[20],base[2]);
	base[3]= (V17);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk49)();
	vs_top=sup;
	V17= (VV[20]->s.s_dbind);
	bds_unwind1;
goto T145;
T145:;
	princ_str("\n	frs_pop();",VV[16]);
	goto T65;
goto T143;
T143:;
	{object V40;
	V40= (((V26))==(VV[36])?Ct:Cnil);
	if(((V40))==Cnil){
	goto T168;}
	goto T65;
goto T168;
T168:;
	if(!(((V26))==(VV[37]))){
	goto T171;}
	V18= Ct;
	goto T65;
goto T171;
T171:;
	{register object x= (V26),V41= VV[38];
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
	setq(VV[39],number_plus(symbol_value(VV[39]),small_fixnum(1)));
	V42= symbol_value(VV[39]);{object V43;
	V43= symbol_value(VV[26]);
	if(!((V43)==(car((V22))))){
	goto T181;}}
	goto T180;
goto T181;
T181:;
	(void)((*(LnkLI52))());
goto T180;
T180:;
	V22= cdr((V22));
	princ_str("\n	{",VV[16]);
	V44= (*(LnkLI53))(car((V22)));
	(void)((*(LnkLI42))(/* INLINE-ARGS */V44));
	princ_char(86,VV[16]);
	(void)((*(LnkLI42))((V42)));
	princ_str(" = ",VV[16]);
	(void)((
	V45 = cdr((V22)),
	(type_of(V45) == t_sfun ?(*(object (*)())((V45)->sfn.sfn_self)):
	(fcall.fun=(V45),fcall.argd=1,fcalln))((V17))));
	princ_char(59,VV[16]);
	V46 = make_fixnum(V21);
	(void)((*(LnkLI48))((V20),V46));
	princ_str("\n	VMR",VV[16]);
	(void)((*(LnkLI42))(symbol_value(VV[40])));
	princ_str("(V",VV[16]);
	(void)((*(LnkLI42))((V42)));
	princ_str(")}",VV[16]);
	{object V47 = Cnil;
	bds_unwind1;
	VMR6(V47)}}
goto T175;
T175:;
	(void)((*(LnkLI47))());}
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

static object LI7(V49)

register object V49;
{	 VMB7 VMS7 VMV7
goto TTL;
TTL:;
	{register object V50;
	register long V51;
	V50= Cnil;
	V51= 0;
	{register object V52;
	register object V53;
	V52= symbol_value(VV[25]);
	V53= car((V52));
goto T211;
T211:;
	if(!(endp((V52)))){
	goto T212;}
	{object V54 = (*(LnkLI47))();
	VMR7(V54)}
goto T212;
T212:;
	if(!(type_of((V53))==t_cons)){
	goto T218;}
	if(!(((V53))==((V49)))){
	goto T216;}
	V55 = make_fixnum(V51);
	(void)((*(LnkLI48))((V50),V55));
	{object V56 = Cnil;
	VMR7(V56)}
goto T218;
T218:;
	if(!(type_of((V53))==t_fixnum||
type_of((V53))==t_bignum||
type_of((V53))==t_ratio||
type_of((V53))==t_shortfloat||
type_of((V53))==t_longfloat||
type_of((V53))==t_complex)){
	goto T224;}
	V50= (V53);
	V51= 0;
	goto T216;
goto T224;
T224:;
	if(!(((V53))==(VV[32]))){
	goto T230;}
	V51= (V51)+(1);
	goto T216;
goto T230;
T230:;
	{register object x= (V53),V57= VV[41];
	while(!endp(V57))
	if(eql(x,V57->c.c_car)){
	goto T235;
	}else V57=V57->c.c_cdr;
	goto T234;}
goto T235;
T235:;
	if(!(((V49))==((V53)))){
	goto T237;}
	V58 = make_fixnum(V51);
	(void)((*(LnkLI48))((V50),V58));
	{object V59 = Cnil;
	VMR7(V59)}
goto T237;
T237:;
	(void)((*(LnkLI47))());
	goto T216;
goto T234;
T234:;
	if(!(((V53))==(VV[33]))){
	goto T241;}
	princ_str("\n	frs_pop();",VV[16]);
	goto T216;
goto T241;
T241:;
	if(!(((V53))==(VV[36]))){
	goto T245;}
	if(!(((V49))==(VV[36]))){
	goto T248;}
	V60 = make_fixnum(V51);
	(void)((*(LnkLI48))((V50),V60));
	{object V61 = Cnil;
	VMR7(V61)}
goto T248;
T248:;
	(void)((*(LnkLI47))());
	goto T216;
goto T245;
T245:;
	{object V62;
	V62= (((V53))==(VV[37])?Ct:Cnil);
	if(((V62))==Cnil){
	goto T253;}
	goto T216;
goto T253;
T253:;
	(void)((*(LnkLI47))());}
goto T216;
T216:;
	V52= cdr((V52));
	V53= car((V52));
	goto T211;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TAIL-RECURSION-POSSIBLE	*/

static object LI8()

{	 VMB8 VMS8 VMV8
goto TTL;
TTL:;
	{register object V63;
	register object V64;
	V63= symbol_value(VV[25]);
	V64= car((V63));
goto T263;
T263:;
	if(!(endp((V63)))){
	goto T264;}
	{object V65 = (*(LnkLI47))();
	VMR8(V65)}
goto T264;
T264:;
	if(!(((V64))==(VV[36]))){
	goto T270;}
	{object V66 = Ct;
	VMR8(V66)}
goto T270;
T270:;
	if(type_of((V64))==t_fixnum||
type_of((V64))==t_bignum||
type_of((V64))==t_ratio||
type_of((V64))==t_shortfloat||
type_of((V64))==t_longfloat||
type_of((V64))==t_complex){
	goto T272;}
	if(((V64))==(VV[32])){
	goto T272;}
	if(!(((V64))==(VV[33]))){
	goto T273;}
goto T272;
T272:;
	{object V67 = Cnil;
	VMR8(V67)}
goto T273;
T273:;
	{register object V68;
	if(!(type_of((V64))==t_cons)){
	goto T280;}
	V68= Ct;
	goto T279;
goto T280;
T280:;
	V68= (((V64))==(VV[37])?Ct:Cnil);
goto T279;
T279:;
	if(((V68))==Cnil){
	goto T283;}
	goto T268;
goto T283;
T283:;
	(void)((*(LnkLI47))());}
goto T268;
T268:;
	V63= cdr((V63));
	V64= car((V63));
	goto T263;}
	base[0]=base[0];
	return Cnil;
}
static object  LnkTLI53(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[53],(void **)&LnkLI53,1,ap);} /* REP-TYPE */
static object  LnkTLI52(){return call_proc0(VV[52],(void **)&LnkLI52);} /* WFS-ERROR */
static object  LnkTLI51(){return call_proc0(VV[51],(void **)&LnkLI51);} /* VS-PUSH */
static object  LnkTLI50(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[50],(void **)&LnkLI50,ap);} /* CS-PUSH */
static void LnkT49(){ call_or_link(VV[49],(void **)&Lnk49);} /* SET-LOC */
static object  LnkTLI48(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[48],(void **)&LnkLI48,2,ap);} /* UNWIND-BDS */
static object  LnkTLI47(){return call_proc0(VV[47],(void **)&LnkLI47);} /* BABOON */
static object  LnkTLI46(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[46],(void **)&LnkLI46,2,ap);} /* SET-JUMP-FALSE */
static object  LnkTLI45(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[45],(void **)&LnkLI45,2,ap);} /* SET-JUMP-TRUE */
static object  LnkTLI44(){return call_proc0(VV[44],(void **)&LnkLI44);} /* RESET-TOP */
static object  LnkTLI43(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[43],(void **)&LnkLI43,2,ap);} /* RECORD-CALL-INFO */
static object  LnkTLI42(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[42],(void **)&LnkLI42,1,ap);} /* WT1 */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

