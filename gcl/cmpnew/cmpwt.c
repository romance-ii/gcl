
#include "cmpinclude.h"
#include "cmpwt.h"
init_cmpwt(){do_init(VV);}
/*	local entry for function WT-COMMENT	*/

static object LI1(V1,va_alist)
	object V1;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{object V2;
	object V3;
	if(narg <1) too_few_arguments();
	V2= V1;
	narg = narg - 1;
	if (narg <= 0) goto T1;
	else {
	va_start(ap);
	V3= va_arg(ap,object);}
	--narg; goto T2;
T1:;
	V3= Cnil;
T2:;
	princ_str("\n/*	",VV[0]);
	(void)(princ((V2),symbol_value(VV[0])));
	if(((V3))==Cnil){
	goto T6;}
	{register object V4;
	V4= symbol_name((V3));
	{register int V5;
	register int V6;
	V5= length((V4));
	V6= 0;
T13:;
	if(!((V6)>=(V5))){
	goto T14;}
	goto T6;
T14:;
	{register unsigned char V7;
	V7= char_code(elt((V4),V6));
	base[0]= code_char(V7);
	base[1]= VV[1];
	vs_top=(vs_base=base+0)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T18;}
	(void)(princ(code_char(V7),symbol_value(VV[0])));}
T18:;
	V6= (V6)+1;
	goto T13;}}
T6:;
	princ_str("	*/\n",VV[0]);
	{object V8 = Cnil;
	VMR1(V8)}}
	}
/*	local entry for function WT1	*/

static object LI2(V10)

register object V10;
{	 VMB2 VMS2 VMV2
TTL:;
	if(type_of((V10))==t_string){
	goto T29;}
	if(type_of((V10))==t_fixnum||type_of((V10))==t_bignum){
	goto T29;}
	if(!(type_of((V10))==t_character)){
	goto T30;}
T29:;
	(void)(princ((V10),symbol_value(VV[0])));
	goto T28;
T30:;
	if(type_of((V10))==t_longfloat){
	goto T36;}
	if(!(type_of((V10))==t_shortfloat)){
	goto T37;}
T36:;
	base[0]= symbol_value(VV[0]);
	base[1]= VV[2];
	base[2]= (V10);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T28;
T37:;
	base[0]= (V10);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk43)();
	vs_top=sup;
T28:;
	{object V11 = Cnil;
	VMR2(V11)}
}
/*	local entry for function WT-H1	*/

static object LI3(V13)

register object V13;
{	 VMB3 VMS3 VMV3
TTL:;
	if(!(type_of((V13))==t_cons)){
	goto T47;}
	{object V14;
	V14= get(car((V13)),VV[3],Cnil);
	if(((V14))==Cnil){
	goto T51;}
	base[0]= (V14);
	{object V15;
	V15= cdr((V13));
	 vs_top=base+1;
	 while(!endp(V15))
	 {vs_push(car(V15));V15=cdr(V15);}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	goto T45;
T51:;
	base[0]= VV[4];
	base[1]= (V13);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk44)();
	vs_top=sup;
	goto T45;}
T47:;
	(void)(princ((V13),symbol_value(VV[5])));
T45:;
	{object V16 = Cnil;
	VMR3(V16)}
}
/*	local entry for function PUSH-DATA-INCF	*/

static object LI4(V18)

object V18;
{	 VMB4 VMS4 VMV4
TTL:;
	base[0]= (V18);
	base[1]= small_fixnum(-1000);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk46)();
	vs_top=sup;
	V19= vs_base[0];
	V20= make_cons(V19,(V18));
	(void)((VFUN_NARGS=2,(*(LnkLI45))(/* INLINE-ARGS */V20,car(symbol_value(VV[6])))));
	setq(VV[7],number_plus(symbol_value(VV[7]),small_fixnum(1)));
	{object V21 = symbol_value(VV[7]);
	VMR4(V21)}
}
/*	local entry for function WT-DATA1	*/

static object LI5(V23)

object V23;
{	 VMB5 VMS5 VMV5
	bds_check;
TTL:;
	bds_bind(VV[8],Cnil);
	bds_bind(VV[9],small_fixnum(10));
	bds_bind(VV[10],Ct);
	bds_bind(VV[11],Cnil);
	bds_bind(VV[12],Cnil);
	bds_bind(VV[13],Cnil);
	bds_bind(VV[14],VV[15]);
	bds_bind(VV[16],Ct);
	bds_bind(VV[17],Ct);
	bds_bind(VV[18],Ct);
	bds_bind(VV[19],Ct);
	bds_bind(VV[20],Ct);
	princ_char(10,VV[21]);
	{object V24 = prin1((V23),symbol_value(VV[21]));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR5(V24)}
}
/*	local entry for function VERIFY-DATA-VECTOR	*/

static object LI6(V26)

register object V26;
{	 VMB6 VMS6 VMV6
TTL:;
	{register object V27;
	V27= Cnil;
	{register object V28;
	register object V29;
	V28= make_fixnum(length((V26)));
	V29= small_fixnum(0);
T68:;
	if(!(number_compare((V29),(V28))>=0)){
	goto T69;}
	goto T64;
T69:;
	V27= aref1((V26),fixint((V29)));
	{register object V30;
	base[1]= cdr((V27));
	base[2]= small_fixnum(-1000);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk46)();
	vs_top=sup;
	V30= vs_base[0];
	if(eql(car((V27)),(V30))){
	goto T75;}
	(void)((VFUN_NARGS=2,(*(LnkLI47))(VV[22],cdr((V27)))));}
T75:;
	(void)(aset1((V26),fixint((V29)),cdr((V27))));
	V29= one_plus((V29));
	goto T68;}
T64:;
	{object V31 = (V26);
	VMR6(V31)}}
}
/*	local entry for function ADD-INIT	*/

static object LI7(V32,va_alist)
	object V32;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{object V33;
	object V34;
	if(narg <1) too_few_arguments();
	V33= V32;
	narg = narg - 1;
	if (narg <= 0) goto T85;
	else {
	va_start(ap);
	V34= va_arg(ap,object);}
	--narg; goto T86;
T85:;
	V34= Cnil;
T86:;
	{object V35;
	base[0]= (V33);
	base[1]= small_fixnum(-1000);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk46)();
	vs_top=sup;
	V36= vs_base[0];
	V35= make_cons(V36,(V33));
	{object V37;
	object V38;
	V37= symbol_value(VV[6]);
	if(((V34))==Cnil){
	goto T96;}
	V39= cadr(symbol_value(VV[6]));
	V40= make_cons((V35),Cnil);
	V38= nconc(/* INLINE-ARGS */V39,/* INLINE-ARGS */V40);
	goto T94;
T96:;
	V38= make_cons((V35),cadr(symbol_value(VV[6])));
T94:;
	if(type_of(cdr((V37)))!=t_cons)FEwrong_type_argument(Scons,cdr((V37)));
	(cdr((V37)))->c.c_car = (V38);
	(void)(cdr((V37)));}
	{object V41 = (V33);
	VMR7(V41)}}}
	}
/*	function definition for WT-DATA-FILE	*/

static L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(0);
	vs_top=sup;
TTL:;
	(void)((*(LnkLI48))(car(symbol_value(VV[6]))));
	{object V42;
	V43= nreverse(cadr(symbol_value(VV[6])));
	V42= (*(LnkLI49))(/* INLINE-ARGS */V43,VV[23]);
	(void)((*(LnkLI48))((V42)));
	V44= car(symbol_value(VV[6]));
	V45 = make_fixnum(length(car(symbol_value(VV[6]))));
	V46= number_minus(V45,small_fixnum(1));
	V47= make_cons(VV[24],(V42));
	(void)(aset1(/* INLINE-ARGS */V44,fixint(/* INLINE-ARGS */V46),/* INLINE-ARGS */V47));
	{object V48;
	object V49;
	V48= symbol_value(VV[6]);
	V49= nreverse(caddr(symbol_value(VV[6])));
	if(type_of(cddr((V48)))!=t_cons)FEwrong_type_argument(Scons,cddr((V48)));
	(cddr((V48)))->c.c_car = (V49);
	(void)(cddr((V48)));}
	if((symbol_value(VV[25]))==Cnil){
	goto T108;}
	vs_base=vs_top;
	(void) (*Lnk50)();
	return;
T108:;
	base[1]= symbol_value(VV[21]);
	base[2]= VV[26];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	vs_top=sup;
	{register object V50;
	register object V51;
	V50= caddr(symbol_value(VV[6]));
	V51= car((V50));
T117:;
	if(!(endp((V50)))){
	goto T118;}
	goto T113;
T118:;
	base[3]= symbol_value(VV[21]);
	base[4]= VV[27];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	(void)((*(LnkLI51))((V51)));
	V50= cdr((V50));
	V51= car((V50));
	goto T117;}
T113:;
	(void)((*(LnkLI51))(car(symbol_value(VV[6]))));
	base[1]= symbol_value(VV[21]);
	base[2]= VV[28];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;}
}
/*	function definition for WT-FASD-DATA-FILE	*/

static L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	check_arg(0);
	vs_top=sup;
TTL:;
	{object V52;
	object V53;
	V52= car(symbol_value(VV[6]));
	V53= Cnil;
	base[1]= (V52);
	base[2]= elt(car(symbol_value(VV[25])),1);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk52)();
	vs_top=sup;
	V53= caddr(symbol_value(VV[6]));
	if(((V53))==Cnil){
	goto T139;}
	{register object V54;
	register object V55;
	V54= (V53);
	V55= car((V54));
T146:;
	if(!(endp((V54)))){
	goto T147;}
	goto T139;
T147:;
	base[2]= small_fixnum(1);
	base[3]= symbol_value(VV[21]);
	vs_top=(vs_base=base+2)+2;
	Lwrite_byte();
	vs_top=sup;
	base[2]= (V55);
	base[3]= car(symbol_value(VV[25]));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk53)();
	vs_top=sup;
	V54= cdr((V54));
	V55= car((V54));
	goto T146;}
T139:;
	base[1]= (V52);
	base[2]= car(symbol_value(VV[25]));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk53)();
	vs_top=sup;
	base[1]= car(symbol_value(VV[25]));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk54)();
	return;}
}
/*	local entry for function WT-DATA-BEGIN	*/

static object LI10()

{	 VMB10 VMS10 VMV10
TTL:;
	{object V56 = Cnil;
	VMR10(V56)}
}
/*	local entry for function WT-DATA-END	*/

static object LI11()

{	 VMB11 VMS11 VMV11
TTL:;
	{object V57 = Cnil;
	VMR11(V57)}
}
/*	local entry for function WT-DATA-PACKAGE-OPERATION	*/

static object LI12(V59)

object V59;
{	 VMB12 VMS12 VMV12
TTL:;
	{object V60;
	object V61;
	V60= symbol_value(VV[6]);
	V61= make_cons((V59),caddr((V60)));
	if(type_of(cddr((V60)))!=t_cons)FEwrong_type_argument(Scons,cddr((V60)));
	(cddr((V60)))->c.c_car = (V61);
	(void)(cddr((V60)));
	{object V62 = (V61);
	VMR12(V62)}}
}
/*	macro definition for WT	*/

static L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	check_arg(2);
	vs_top=sup;
	{object V63=base[0]->c.c_cdr;
	base[2]= V63;
	base[3]= Cnil;}
	{register object V64;
	register object V65;
	V64= base[2];
	V65= car((V64));
T173:;
	if(!(endp((V64)))){
	goto T174;}
	V66= make_cons(Cnil,base[3]);
	V67= reverse(/* INLINE-ARGS */V66);
	base[5]= make_cons(VV[29],/* INLINE-ARGS */V67);
	vs_top=(vs_base=base+5)+1;
	return;
T174:;
	if(!(type_of((V65))==t_string)){
	goto T180;}
	V68= list(3,VV[30],(V65),VV[0]);
	base[3]= make_cons(/* INLINE-ARGS */V68,base[3]);
	goto T178;
T180:;
	V69= list(2,VV[31],(V65));
	base[3]= make_cons(/* INLINE-ARGS */V69,base[3]);
T178:;
	V64= cdr((V64));
	V65= car((V64));
	goto T173;}
}
/*	macro definition for WT-H	*/

static L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	check_arg(2);
	vs_top=sup;
	{object V70=base[0]->c.c_cdr;
	base[2]= V70;
	base[3]= Cnil;}
	if(!(endp(base[2]))){
	goto T191;}
	base[4]= VV[32];
	vs_top=(vs_base=base+4)+1;
	return;
T191:;
	if(!(type_of(car(base[2]))==t_string)){
	goto T194;}
	{register object V71;
	register object V72;
	V71= cdr(base[2]);
	V72= car((V71));
T199:;
	if(!(endp((V71)))){
	goto T200;}
	V73= (VFUN_NARGS=3,(*(LnkLI55))(VV[33],VV[34],car(base[2])));
	V74= list(3,VV[30],/* INLINE-ARGS */V73,VV[5]);
	V75= make_cons(Cnil,base[3]);
	base[6]= listA(3,VV[29],/* INLINE-ARGS */V74,reverse(/* INLINE-ARGS */V75));
	vs_top=(vs_base=base+6)+1;
	return;
T200:;
	if(!(type_of((V72))==t_string)){
	goto T206;}
	V76= list(3,VV[30],(V72),VV[5]);
	base[3]= make_cons(/* INLINE-ARGS */V76,base[3]);
	goto T204;
T206:;
	V77= list(2,VV[35],(V72));
	base[3]= make_cons(/* INLINE-ARGS */V77,base[3]);
T204:;
	V71= cdr((V71));
	V72= car((V71));
	goto T199;}
T194:;
	{register object V78;
	register object V79;
	V78= base[2];
	V79= car((V78));
T218:;
	if(!(endp((V78)))){
	goto T219;}
	V80= make_cons(Cnil,base[3]);
	base[5]= listA(3,VV[29],VV[36],reverse(/* INLINE-ARGS */V80));
	vs_top=(vs_base=base+5)+1;
	return;
T219:;
	if(!(type_of((V79))==t_string)){
	goto T225;}
	V81= list(3,VV[30],(V79),VV[5]);
	base[3]= make_cons(/* INLINE-ARGS */V81,base[3]);
	goto T223;
T225:;
	V82= list(2,VV[35],(V79));
	base[3]= make_cons(/* INLINE-ARGS */V82,base[3]);
T223:;
	V78= cdr((V78));
	V79= car((V78));
	goto T218;}
}
/*	macro definition for WT-NL	*/

static L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	check_arg(2);
	vs_top=sup;
	{object V83=base[0]->c.c_cdr;
	base[2]= V83;
	base[3]= Cnil;}
	if(!(endp(base[2]))){
	goto T236;}
	base[4]= VV[37];
	vs_top=(vs_base=base+4)+1;
	return;
T236:;
	if(!(type_of(car(base[2]))==t_string)){
	goto T239;}
	{register object V84;
	register object V85;
	V84= cdr(base[2]);
	V85= car((V84));
T244:;
	if(!(endp((V84)))){
	goto T245;}
	V86= (VFUN_NARGS=3,(*(LnkLI55))(VV[33],VV[38],car(base[2])));
	V87= list(3,VV[30],/* INLINE-ARGS */V86,VV[0]);
	V88= make_cons(Cnil,base[3]);
	base[6]= listA(3,VV[29],/* INLINE-ARGS */V87,reverse(/* INLINE-ARGS */V88));
	vs_top=(vs_base=base+6)+1;
	return;
T245:;
	if(!(type_of((V85))==t_string)){
	goto T251;}
	V89= list(3,VV[30],(V85),VV[0]);
	base[3]= make_cons(/* INLINE-ARGS */V89,base[3]);
	goto T249;
T251:;
	V90= list(2,VV[31],(V85));
	base[3]= make_cons(/* INLINE-ARGS */V90,base[3]);
T249:;
	V84= cdr((V84));
	V85= car((V84));
	goto T244;}
T239:;
	{register object V91;
	register object V92;
	V91= base[2];
	V92= car((V91));
T263:;
	if(!(endp((V91)))){
	goto T264;}
	V93= make_cons(Cnil,base[3]);
	base[5]= listA(3,VV[29],VV[39],reverse(/* INLINE-ARGS */V93));
	vs_top=(vs_base=base+5)+1;
	return;
T264:;
	if(!(type_of((V92))==t_string)){
	goto T270;}
	V94= list(3,VV[30],(V92),VV[0]);
	base[3]= make_cons(/* INLINE-ARGS */V94,base[3]);
	goto T268;
T270:;
	V95= list(2,VV[31],(V92));
	base[3]= make_cons(/* INLINE-ARGS */V95,base[3]);
T268:;
	V91= cdr((V91));
	V92= car((V91));
	goto T263;}
}
/*	macro definition for WT-NL1	*/

static L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	check_arg(2);
	vs_top=sup;
	{object V96=base[0]->c.c_cdr;
	base[2]= V96;
	base[3]= Cnil;}
	if(!(endp(base[2]))){
	goto T281;}
	base[4]= VV[40];
	vs_top=(vs_base=base+4)+1;
	return;
T281:;
	if(!(type_of(car(base[2]))==t_string)){
	goto T284;}
	{register object V97;
	register object V98;
	V97= cdr(base[2]);
	V98= car((V97));
T289:;
	if(!(endp((V97)))){
	goto T290;}
	V99= (VFUN_NARGS=3,(*(LnkLI55))(VV[33],VV[41],car(base[2])));
	V100= list(3,VV[30],/* INLINE-ARGS */V99,VV[0]);
	V101= make_cons(Cnil,base[3]);
	base[6]= listA(3,VV[29],/* INLINE-ARGS */V100,reverse(/* INLINE-ARGS */V101));
	vs_top=(vs_base=base+6)+1;
	return;
T290:;
	if(!(type_of((V98))==t_string)){
	goto T296;}
	V102= list(3,VV[30],(V98),VV[0]);
	base[3]= make_cons(/* INLINE-ARGS */V102,base[3]);
	goto T294;
T296:;
	V103= list(2,VV[31],(V98));
	base[3]= make_cons(/* INLINE-ARGS */V103,base[3]);
T294:;
	V97= cdr((V97));
	V98= car((V97));
	goto T289;}
T284:;
	{register object V104;
	register object V105;
	V104= base[2];
	V105= car((V104));
T308:;
	if(!(endp((V104)))){
	goto T309;}
	V106= make_cons(Cnil,base[3]);
	base[5]= listA(3,VV[29],VV[42],reverse(/* INLINE-ARGS */V106));
	vs_top=(vs_base=base+5)+1;
	return;
T309:;
	if(!(type_of((V105))==t_string)){
	goto T315;}
	V107= list(3,VV[30],(V105),VV[0]);
	base[3]= make_cons(/* INLINE-ARGS */V107,base[3]);
	goto T313;
T315:;
	V108= list(2,VV[31],(V105));
	base[3]= make_cons(/* INLINE-ARGS */V108,base[3]);
T313:;
	V104= cdr((V104));
	V105= car((V104));
	goto T308;}
}
static object  LnkTLI55(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[55],&LnkLI55,ap);} /* CONCATENATE */
static LnkT54(){ call_or_link(VV[54],&Lnk54);} /* CLOSE-FASD */
static LnkT53(){ call_or_link(VV[53],&Lnk53);} /* WRITE-FASD-TOP */
static LnkT52(){ call_or_link(VV[52],&Lnk52);} /* FIND-SHARING-TOP */
static object  LnkTLI51(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[51],&LnkLI51,1,ap);} /* WT-DATA1 */
static LnkT50(){ call_or_link(VV[50],&Lnk50);} /* WT-FASD-DATA-FILE */
static object  LnkTLI49(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[49],&LnkLI49,2,ap);} /* COERCE */
static object  LnkTLI48(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[48],&LnkLI48,1,ap);} /* VERIFY-DATA-VECTOR */
static object  LnkTLI47(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[47],&LnkLI47,ap);} /* CMPWARN */
static LnkT46(){ call_or_link(VV[46],&Lnk46);} /* HASH-EQUAL */
static object  LnkTLI45(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[45],&LnkLI45,ap);} /* VECTOR-PUSH-EXTEND */
static LnkT44(){ call_or_link(VV[44],&Lnk44);} /* CMPILER-ERROR */
static LnkT43(){ call_or_link(VV[43],&Lnk43);} /* WT-LOC */
