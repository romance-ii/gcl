
#include "cmpinclude.h"
#include "gcl_cmplabel.h"
void init_gcl_cmplabel(){do_init(VV);}
/*	macro definition for NEXT-LABEL	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	vs_top=sup;
	base[2]= VV[0];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	macro definition for NEXT-LABEL*	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	vs_top=sup;
	base[2]= VV[1];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	macro definition for WT-LABEL	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	vs_top=sup;
	{object V3=base[0]->c.c_cdr;
	base[2]= (V3->c.c_car);}
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
	vs_check;
	vs_top=sup;
	{object V6=base[0]->c.c_cdr;
	base[2]= (V6->c.c_car);}
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
	if(!(type_of((VV[16]->s.s_dbind))==t_cons)){
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
	V14 = CMPmake_fixnum(V13);
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
	bds_bind(VV[18],(VV[18]->s.s_dbind));
	V20= Cnil;
	V21= 0;
	V22= Cnil;
	if((VV[19]->s.s_dbind)==Cnil){
	goto T32;}
	base[1]= (V17);
	base[2]= (V19);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk47)();
	vs_top=sup;
	goto T32;
T32:;
	if(!(((V17))==(VV[20]))){
	goto T35;}
	if(((VV[21]->s.s_dbind))==(VV[22])){
	goto T35;}
	if(((VV[21]->s.s_dbind))==(VV[23])){
	goto T35;}
	princ_str("\n	",VV[17]);
	(void)((*(LnkLI48))());
	goto T35;
T35:;
	if(!(type_of((VV[21]->s.s_dbind))==t_cons)){
	goto T45;}
	if(!((CMPcar((VV[21]->s.s_dbind)))==(VV[24]))){
	goto T45;}
	(void)((*(LnkLI49))((V17),CMPcadr((VV[21]->s.s_dbind))));
	if(!(((V17))==(Ct))){
	goto T43;}
	{object V23 = Cnil;
	bds_unwind1;
	VMR6(V23)}
	goto T45;
T45:;
	if(!(type_of((VV[21]->s.s_dbind))==t_cons)){
	goto T43;}
	if(!((CMPcar((VV[21]->s.s_dbind)))==(VV[25]))){
	goto T43;}
	(void)((*(LnkLI50))((V17),CMPcadr((VV[21]->s.s_dbind))));
	if(((V17))!=Cnil){
	goto T43;}
	{object V24 = Cnil;
	bds_unwind1;
	VMR6(V24)}
	goto T43;
T43:;
	{object V25;
	register object V26;
	V25= (VV[26]->s.s_dbind);
	V26= CMPcar((V25));
	goto T62;
T62:;
	if(!(((V25))==Cnil)){
	goto T63;}
	{object V27 = (*(LnkLI51))();
	bds_unwind1;
	VMR6(V27)}
	goto T63;
T63:;
	if(!(type_of((V26))==t_cons)){
	goto T69;}
	if(!(((V26))==((VV[27]->s.s_dbind)))){
	goto T72;}
	if(!(type_of((VV[21]->s.s_dbind))==t_cons)){
	goto T76;}
	if((CMPcar((VV[21]->s.s_dbind)))==(VV[24])){
	goto T75;}
	if(!((CMPcar((VV[21]->s.s_dbind)))==(VV[25]))){
	goto T76;}
	goto T75;
T75:;
	V28 = CMPmake_fixnum(V21);
	(void)((*(LnkLI52))((V20),V28));
	goto T74;
	goto T76;
T76:;
	if(((V20))!=Cnil){
	goto T82;}
	if(!((V21)>0)){
	goto T83;}
	goto T82;
T82:;
	if(!(type_of((V17))==t_cons)){
	goto T88;}
	if(!((CMPcar((V17)))==(VV[28]))){
	goto T91;}
	{register object x= STREF(object,CMPcadr((V17)),4),V29= VV[29];
	while(V29!=Cnil)
	if(eql(x,V29->c.c_car)){
	goto T87;
	}else V29=V29->c.c_cdr;}
	goto T91;
T91:;
	{register object x= CMPcar((V17)),V30= VV[30];
	while(V30!=Cnil)
	if(eql(x,V30->c.c_car)){
	goto T95;
	}else V30=V30->c.c_cdr;
	goto T88;}
	goto T95;
T95:;
	goto T87;
T87:;
	if(!(type_of((VV[21]->s.s_dbind))==t_cons)){
	goto T97;}
	if(!((CMPcar((VV[21]->s.s_dbind)))==(VV[31]))){
	goto T97;}
	base[2]= (V17);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	V31 = CMPmake_fixnum(V21);
	(void)((*(LnkLI52))((V20),V31));
	goto T74;
	goto T97;
T97:;
	{object V32;
	V32= list(2,VV[32],(VFUN_NARGS=0,(*(LnkLI54))()));
	bds_bind(VV[21],(V32));
	base[3]= (V17);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	bds_unwind1;
	V33 = CMPmake_fixnum(V21);
	(void)((*(LnkLI52))((V20),V33));
	base[2]= (V32);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	goto T74;}
	goto T88;
T88:;
	V34 = CMPmake_fixnum(V21);
	(void)((*(LnkLI52))((V20),V34));
	base[2]= (V17);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	goto T74;
	goto T83;
T83:;
	base[2]= (V17);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	goto T74;
T74:;
	if(((V18))==Cnil){
	goto T111;}
	if(!(type_of((VV[16]->s.s_dbind))==t_cons)){
	goto T114;}
	princ_str("\n	restore_avma; ",VV[17]);
	goto T114;
T114:;
	princ_str("\n	",VV[17]);
	((VV[27]->s.s_dbind))->c.c_cdr = Ct;
	princ_str("goto T",VV[17]);
	(void)((*(LnkLI46))(CMPcar((VV[27]->s.s_dbind))));
	princ_char(59,VV[17]);
	goto T111;
T111:;
	{object V35 = Cnil;
	bds_unwind1;
	VMR6(V35)}
	goto T72;
T72:;
	V18= Ct;
	goto T67;
	goto T69;
T69:;
	if(!(type_of((V26))==t_fixnum||
type_of((V26))==t_bignum||
type_of((V26))==t_ratio||
type_of((V26))==t_shortfloat||
type_of((V26))==t_longfloat||
type_of((V26))==t_complex)){
	goto T125;}
	V20= (V26);
	V21= 0;
	goto T67;
	goto T125;
T125:;
	if(!(((V26))==(VV[33]))){
	goto T131;}
	V21= (long)(V21)+(1);
	goto T67;
	goto T131;
T131:;
	if(!(((V26))==(VV[22]))){
	goto T135;}
	if(!(((VV[27]->s.s_dbind))==(VV[22]))){
	goto T67;}
	base[2]= (V17);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	V36 = CMPmake_fixnum(V21);
	(void)((*(LnkLI52))((V20),V36));
	princ_str("\n	return;",VV[17]);
	{object V37 = Cnil;
	bds_unwind1;
	VMR6(V37)}
	goto T135;
T135:;
	if(!(((V26))==(VV[34]))){
	goto T145;}
	if(!(type_of((V17))==t_cons)){
	goto T147;}
	{register object x= CMPcar((V17)),V38= VV[35];
	while(V38!=Cnil)
	if(eql(x,V38->c.c_car)){
	goto T151;
	}else V38=V38->c.c_cdr;
	goto T147;}
	goto T151;
T151:;
	if(!(type_of((VV[21]->s.s_dbind))==t_cons)){
	goto T153;}
	if(!((CMPcar((VV[21]->s.s_dbind)))==(VV[31]))){
	goto T153;}
	base[2]= (V17);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	V17= (VV[21]->s.s_dbind);
	goto T147;
	goto T153;
T153:;
	if(((VV[36]->s.s_dbind))==Cnil){
	goto T162;}
	base[2]= list(2,VV[32],(VFUN_NARGS=0,(*(LnkLI54))()));
	goto T160;
	goto T162;
T162:;
	base[2]= list(2,VV[31],(*(LnkLI55))());
	goto T160;
T160:;
	bds_bind(VV[21],base[2]);
	base[3]= (V17);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	V17= (VV[21]->s.s_dbind);
	bds_unwind1;
	goto T147;
T147:;
	princ_str("\n	frs_pop();",VV[17]);
	goto T67;
	goto T145;
T145:;
	{object V39;
	V39= (((V26))==(VV[37])?Ct:Cnil);
	if(((V39))==Cnil){
	goto T170;}
	goto T67;
	goto T170;
T170:;
	if(!(((V26))==(VV[38]))){
	goto T173;}
	V18= Ct;
	goto T67;
	goto T173;
T173:;
	{register object x= (V26),V40= VV[39];
	while(V40!=Cnil)
	if(eql(x,V40->c.c_car->c.c_car) &&V40->c.c_car != Cnil){
	V22= (V40->c.c_car);
	goto T179;
	}else V40=V40->c.c_cdr;
	V22= Cnil;}
	goto T179;
T179:;
	if(((V22))==Cnil){
	goto T177;}
	{object V41;
	(VV[40]->s.s_dbind)= number_plus((VV[40]->s.s_dbind),small_fixnum(1));
	V41= (VV[40]->s.s_dbind);{object V42;
	V42= (VV[27]->s.s_dbind);
	if(!((V42)==(CMPcar((V22))))){
	goto T183;}}
	goto T182;
	goto T183;
T183:;
	(void)((*(LnkLI56))());
	goto T182;
T182:;
	V22= CMPcdr((V22));
	princ_str("\n	{",VV[17]);
	V43= (*(LnkLI57))(CMPcar((V22)));
	(void)((*(LnkLI46))(/* INLINE-ARGS */V43));
	princ_char(86,VV[17]);
	(void)((*(LnkLI46))((V41)));
	princ_str(" = ",VV[17]);
	(void)((
	V44 = CMPcdr((V22)),
	(type_of(V44) == t_sfun ?(*((V44)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V44)==t_vfun) ?
	(*((V44)->sfn.sfn_self)):
	(fcall.fun=(V44),fcalln))((V17))));
	princ_char(59,VV[17]);
	V45 = CMPmake_fixnum(V21);
	(void)((*(LnkLI52))((V20),V45));
	princ_str("\n	VMR",VV[17]);
	(void)((*(LnkLI46))((VV[41]->s.s_dbind)));
	princ_char(40,VV[17]);
	V47= (*(LnkLI57))(CMPcar((V22)));
	if(!(equal(/* INLINE-ARGS */V47,VV[42]))){
	goto T204;}
	V46= VV[43];
	goto T202;
	goto T204;
T204:;
	V46= VV[44];
	goto T202;
T202:;
	(void)((*(LnkLI46))(V46));
	princ_char(86,VV[17]);
	(void)((*(LnkLI46))((V41)));
	princ_str(")}",VV[17]);
	{object V48 = Cnil;
	bds_unwind1;
	VMR6(V48)}}
	goto T177;
T177:;
	(void)((*(LnkLI51))());}
	goto T67;
T67:;
	V25= CMPcdr((V25));
	V26= CMPcar((V25));
	goto T62;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function UNWIND-NO-EXIT	*/

static object LI7(V50)

register object V50;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V51;
	register long V52;
	V51= Cnil;
	V52= 0;
	{register object V53;
	register object V54;
	V53= (VV[26]->s.s_dbind);
	V54= CMPcar((V53));
	goto T219;
T219:;
	if(!(((V53))==Cnil)){
	goto T220;}
	{object V55 = (*(LnkLI51))();
	VMR7(V55)}
	goto T220;
T220:;
	if(!(type_of((V54))==t_cons)){
	goto T226;}
	if(!(((V54))==((V50)))){
	goto T224;}
	V56 = CMPmake_fixnum(V52);
	(void)((*(LnkLI52))((V51),V56));
	{object V57 = Cnil;
	VMR7(V57)}
	goto T226;
T226:;
	if(!(type_of((V54))==t_fixnum||
type_of((V54))==t_bignum||
type_of((V54))==t_ratio||
type_of((V54))==t_shortfloat||
type_of((V54))==t_longfloat||
type_of((V54))==t_complex)){
	goto T232;}
	V51= (V54);
	V52= 0;
	goto T224;
	goto T232;
T232:;
	if(!(((V54))==(VV[33]))){
	goto T238;}
	V52= (long)(V52)+(1);
	goto T224;
	goto T238;
T238:;
	{register object x= (V54),V58= VV[45];
	while(V58!=Cnil)
	if(eql(x,V58->c.c_car)){
	goto T243;
	}else V58=V58->c.c_cdr;
	goto T242;}
	goto T243;
T243:;
	if(!(((V50))==((V54)))){
	goto T245;}
	V59 = CMPmake_fixnum(V52);
	(void)((*(LnkLI52))((V51),V59));
	{object V60 = Cnil;
	VMR7(V60)}
	goto T245;
T245:;
	(void)((*(LnkLI51))());
	goto T224;
	goto T242;
T242:;
	if(!(((V54))==(VV[34]))){
	goto T249;}
	princ_str("\n	frs_pop();",VV[17]);
	goto T224;
	goto T249;
T249:;
	if(!(((V54))==(VV[37]))){
	goto T253;}
	if(!(((V50))==(VV[37]))){
	goto T256;}
	V61 = CMPmake_fixnum(V52);
	(void)((*(LnkLI52))((V51),V61));
	{object V62 = Cnil;
	VMR7(V62)}
	goto T256;
T256:;
	(void)((*(LnkLI51))());
	goto T224;
	goto T253;
T253:;
	{object V63;
	V63= (((V54))==(VV[38])?Ct:Cnil);
	if(((V63))==Cnil){
	goto T261;}
	goto T224;
	goto T261;
T261:;
	(void)((*(LnkLI51))());}
	goto T224;
T224:;
	V53= CMPcdr((V53));
	V54= CMPcar((V53));
	goto T219;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function TAIL-RECURSION-POSSIBLE	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{register object V64;
	register object V65;
	V64= (VV[26]->s.s_dbind);
	V65= CMPcar((V64));
	goto T271;
T271:;
	if(!(((V64))==Cnil)){
	goto T272;}
	{object V66 = (*(LnkLI51))();
	VMR8(V66)}
	goto T272;
T272:;
	if(!(((V65))==(VV[37]))){
	goto T278;}
	{object V67 = Ct;
	VMR8(V67)}
	goto T278;
T278:;
	if(type_of((V65))==t_fixnum||
type_of((V65))==t_bignum||
type_of((V65))==t_ratio||
type_of((V65))==t_shortfloat||
type_of((V65))==t_longfloat||
type_of((V65))==t_complex){
	goto T280;}
	if(((V65))==(VV[33])){
	goto T280;}
	if(!(((V65))==(VV[34]))){
	goto T281;}
	goto T280;
T280:;
	{object V68 = Cnil;
	VMR8(V68)}
	goto T281;
T281:;
	{register object V69;
	if(!(type_of((V65))==t_cons)){
	goto T288;}
	V69= Ct;
	goto T287;
	goto T288;
T288:;
	V69= (((V65))==(VV[38])?Ct:Cnil);
	goto T287;
T287:;
	if(((V69))==Cnil){
	goto T291;}
	goto T276;
	goto T291;
T291:;
	(void)((*(LnkLI51))());}
	goto T276;
T276:;
	V64= CMPcdr((V64));
	V65= CMPcar((V64));
	goto T271;}
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
static void LnkT47(){ call_or_link(VV[47],(void **)(void *)&Lnk47);} /* RECORD-CALL-INFO */
static object  LnkTLI46(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[46],(void **)(void *)&LnkLI46,1,first,ap);va_end(ap);return V1;} /* WT1 */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

