
#include "cmpinclude.h"
#include "cmpwt.h"
void init_cmpwt(){do_init(VV);}
/*	local entry for function WT-COMMENT	*/

static object LI1(object V1,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{object V2;
	object V3;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V2= V1;
	narg = narg - 1;
	if (narg <= 0) goto T1;
	else {
	V3= first;}
	--narg; goto T2;
	goto T1;
T1:;
	V3= Cnil;
	goto T2;
T2:;
	princ_str("\n/*	",VV[0]);
	(void)(princ((V2),symbol_value(VV[0])));
	if(((V3))==Cnil){
	goto T6;}
	{register object V4;
	V4= symbol_name((V3));
	{register long V5;
	register long V6;
	V5= (long)length((V4));
	V6= 0;
	goto T13;
T13:;
	if(!((V6)>=(V5))){
	goto T14;}
	goto T6;
	goto T14;
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
	goto T18;
T18:;
	V6= (long)(V6)+1;
	goto T13;}}
	goto T6;
T6:;
	princ_str("	*/\n",VV[0]);
	{object V8 = Cnil;
	VMR1(V8)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function WT1	*/

static object LI2(V10)

register object V10;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(type_of((V10))==t_string){
	goto T29;}
	if(type_of((V10))==t_fixnum||type_of((V10))==t_bignum){
	goto T29;}
	if(!(type_of((V10))==t_character)){
	goto T30;}
	goto T29;
T29:;
	(void)(princ((V10),symbol_value(VV[0])));
	goto T28;
	goto T30;
T30:;
	if(type_of((V10))==t_longfloat){
	goto T36;}
	if(!(type_of((V10))==t_shortfloat)){
	goto T37;}
	goto T36;
T36:;
	base[0]= symbol_value(VV[0]);
	base[1]= VV[2];
	base[2]= (V10);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T28;
	goto T37;
T37:;
	base[0]= (V10);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk43)();
	vs_top=sup;
	goto T28;
T28:;
	{object V11 = Cnil;
	VMR2(V11)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-H1	*/

static object LI3(V13)

register object V13;
{	 VMB3 VMS3 VMV3
	goto TTL;
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
	goto T51;
T51:;
	base[0]= VV[4];
	base[1]= (V13);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk44)();
	vs_top=sup;
	goto T45;}
	goto T47;
T47:;
	(void)(princ((V13),symbol_value(VV[5])));
	goto T45;
T45:;
	{object V16 = Cnil;
	VMR3(V16)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PUSH-DATA-INCF	*/

static object LI4(V18)

object V18;
{	 VMB4 VMS4 VMV4
	goto TTL;
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
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-DATA1	*/

static object LI5(V23)

object V23;
{	 VMB5 VMS5 VMV5
	bds_check;
	goto TTL;
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
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VERIFY-DATA-VECTOR	*/

static object LI6(V26)

register object V26;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{register object V27;
	V27= Cnil;
	{register object V28;
	register object V29;
	V28= make_fixnum((long)length((V26)));
	V29= small_fixnum(0);
	goto T68;
T68:;
	if(!(number_compare((V29),(V28))>=0)){
	goto T69;}
	goto T64;
	goto T69;
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
	goto T75;
T75:;
	(void)(aset1((V26),fixint((V29)),cdr((V27))));
	V29= one_plus((V29));
	goto T68;}
	goto T64;
T64:;
	{object V31 = (V26);
	VMR6(V31)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-INIT	*/

static object LI7(object V32,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{object V33;
	object V34;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V33= V32;
	narg = narg - 1;
	if (narg <= 0) goto T85;
	else {
	V34= first;}
	--narg; goto T86;
	goto T85;
T85:;
	V34= Cnil;
	goto T86;
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
	goto T96;
T96:;
	V38= make_cons((V35),cadr(symbol_value(VV[6])));
	goto T94;
T94:;
	if(type_of(cdr((V37)))!=t_cons)FEwrong_type_argument(Scons,cdr((V37)));
	(cdr((V37)))->c.c_car = (V38);
	(void)(cdr((V37)));}
	{object V41 = (V33);
	VMR7(V41)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for WT-DATA-FILE	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	(void)((*(LnkLI48))(car(symbol_value(VV[6]))));
	{object V42;
	V43= nreverse(cadr(symbol_value(VV[6])));
	V42= (*(LnkLI49))(/* INLINE-ARGS */V43,VV[23]);
	(void)((*(LnkLI48))((V42)));
	V44= car(symbol_value(VV[6]));
	V45 = make_fixnum((long)length(car(symbol_value(VV[6]))));
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
	goto T108;
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
	goto T117;
T117:;
	if(!(endp_prop((V50)))){
	goto T118;}
	goto T113;
	goto T118;
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
	goto T113;
T113:;
	(void)((*(LnkLI51))(car(symbol_value(VV[6]))));
	base[1]= symbol_value(VV[21]);
	base[2]= VV[28];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;}
}
/*	function definition for WT-FASD-DATA-FILE	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	check_arg(0);
	vs_top=sup;
	goto TTL;
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
	goto T146;
T146:;
	if(!(endp_prop((V54)))){
	goto T147;}
	goto T139;
	goto T147;
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
	goto T139;
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
	goto TTL;
TTL:;
	{object V56 = Cnil;
	VMR10(V56)}
	return Cnil;
}
/*	local entry for function WT-DATA-END	*/

static object LI11()

{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V57 = Cnil;
	VMR11(V57)}
	return Cnil;
}
/*	local entry for function WT-DATA-PACKAGE-OPERATION	*/

static object LI12(V59)

object V59;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V61;
	object V62;
	V61= symbol_value(VV[6]);
	V62= make_cons(V59,caddr((V61)));
	if(type_of(cddr((V61)))!=t_cons)FEwrong_type_argument(Scons,cddr((V61)));
	(cddr((V61)))->c.c_car = (V62);
	(void)(cddr((V61)));
	{object V63 = (V62);
	VMR12(V63)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for WT	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_reserve(VM13);
	check_arg(2);
	vs_top=sup;
	{object V64=base[0]->c.c_cdr;
	base[2]= V64;
	base[3]= Cnil;}
	{register object V65;
	register object V66;
	V65= base[2];
	V66= car((V65));
	goto T173;
T173:;
	if(!(endp_prop((V65)))){
	goto T174;}
	V67= make_cons(Cnil,base[3]);
	V68= reverse(/* INLINE-ARGS */V67);
	base[5]= make_cons(VV[29],/* INLINE-ARGS */V68);
	vs_top=(vs_base=base+5)+1;
	return;
	goto T174;
T174:;
	if(!(type_of((V66))==t_string)){
	goto T180;}
	{register object V69;
	V69= list(3,VV[30],(V66),VV[0]);
	base[3]= make_cons((V69),base[3]);
	goto T178;}
	goto T180;
T180:;
	{register object V70;
	V70= list(2,VV[31],(V66));
	base[3]= make_cons((V70),base[3]);}
	goto T178;
T178:;
	V65= cdr((V65));
	V66= car((V65));
	goto T173;}
}
/*	macro definition for WT-H	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	check_arg(2);
	vs_top=sup;
	{object V71=base[0]->c.c_cdr;
	base[2]= V71;
	base[3]= Cnil;}
	if(!(endp_prop(base[2]))){
	goto T193;}
	base[4]= VV[32];
	vs_top=(vs_base=base+4)+1;
	return;
	goto T193;
T193:;
	if(!(type_of(car(base[2]))==t_string)){
	goto T196;}
	{register object V72;
	register object V73;
	V72= cdr(base[2]);
	V73= car((V72));
	goto T201;
T201:;
	if(!(endp_prop((V72)))){
	goto T202;}
	V74= (VFUN_NARGS=3,(*(LnkLI55))(VV[33],VV[34],car(base[2])));
	V75= list(3,VV[30],/* INLINE-ARGS */V74,VV[5]);
	V76= make_cons(Cnil,base[3]);
	base[6]= listA(3,VV[29],/* INLINE-ARGS */V75,reverse(/* INLINE-ARGS */V76));
	vs_top=(vs_base=base+6)+1;
	return;
	goto T202;
T202:;
	if(!(type_of((V73))==t_string)){
	goto T208;}
	{register object V77;
	V77= list(3,VV[30],(V73),VV[5]);
	base[3]= make_cons((V77),base[3]);
	goto T206;}
	goto T208;
T208:;
	{register object V78;
	V78= list(2,VV[35],(V73));
	base[3]= make_cons((V78),base[3]);}
	goto T206;
T206:;
	V72= cdr((V72));
	V73= car((V72));
	goto T201;}
	goto T196;
T196:;
	{register object V79;
	register object V80;
	V79= base[2];
	V80= car((V79));
	goto T222;
T222:;
	if(!(endp_prop((V79)))){
	goto T223;}
	V81= make_cons(Cnil,base[3]);
	base[5]= listA(3,VV[29],VV[36],reverse(/* INLINE-ARGS */V81));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T223;
T223:;
	if(!(type_of((V80))==t_string)){
	goto T229;}
	{register object V82;
	V82= list(3,VV[30],(V80),VV[5]);
	base[3]= make_cons((V82),base[3]);
	goto T227;}
	goto T229;
T229:;
	{register object V83;
	V83= list(2,VV[35],(V80));
	base[3]= make_cons((V83),base[3]);}
	goto T227;
T227:;
	V79= cdr((V79));
	V80= car((V79));
	goto T222;}
}
/*	macro definition for WT-NL	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	check_arg(2);
	vs_top=sup;
	{object V84=base[0]->c.c_cdr;
	base[2]= V84;
	base[3]= Cnil;}
	if(!(endp_prop(base[2]))){
	goto T242;}
	base[4]= VV[37];
	vs_top=(vs_base=base+4)+1;
	return;
	goto T242;
T242:;
	if(!(type_of(car(base[2]))==t_string)){
	goto T245;}
	{register object V85;
	register object V86;
	V85= cdr(base[2]);
	V86= car((V85));
	goto T250;
T250:;
	if(!(endp_prop((V85)))){
	goto T251;}
	V87= (VFUN_NARGS=3,(*(LnkLI55))(VV[33],VV[38],car(base[2])));
	V88= list(3,VV[30],/* INLINE-ARGS */V87,VV[0]);
	V89= make_cons(Cnil,base[3]);
	base[6]= listA(3,VV[29],/* INLINE-ARGS */V88,reverse(/* INLINE-ARGS */V89));
	vs_top=(vs_base=base+6)+1;
	return;
	goto T251;
T251:;
	if(!(type_of((V86))==t_string)){
	goto T257;}
	{register object V90;
	V90= list(3,VV[30],(V86),VV[0]);
	base[3]= make_cons((V90),base[3]);
	goto T255;}
	goto T257;
T257:;
	{register object V91;
	V91= list(2,VV[31],(V86));
	base[3]= make_cons((V91),base[3]);}
	goto T255;
T255:;
	V85= cdr((V85));
	V86= car((V85));
	goto T250;}
	goto T245;
T245:;
	{register object V92;
	register object V93;
	V92= base[2];
	V93= car((V92));
	goto T271;
T271:;
	if(!(endp_prop((V92)))){
	goto T272;}
	V94= make_cons(Cnil,base[3]);
	base[5]= listA(3,VV[29],VV[39],reverse(/* INLINE-ARGS */V94));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T272;
T272:;
	if(!(type_of((V93))==t_string)){
	goto T278;}
	{register object V95;
	V95= list(3,VV[30],(V93),VV[0]);
	base[3]= make_cons((V95),base[3]);
	goto T276;}
	goto T278;
T278:;
	{register object V96;
	V96= list(2,VV[31],(V93));
	base[3]= make_cons((V96),base[3]);}
	goto T276;
T276:;
	V92= cdr((V92));
	V93= car((V92));
	goto T271;}
}
/*	macro definition for WT-NL1	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	check_arg(2);
	vs_top=sup;
	{object V97=base[0]->c.c_cdr;
	base[2]= V97;
	base[3]= Cnil;}
	if(!(endp_prop(base[2]))){
	goto T291;}
	base[4]= VV[40];
	vs_top=(vs_base=base+4)+1;
	return;
	goto T291;
T291:;
	if(!(type_of(car(base[2]))==t_string)){
	goto T294;}
	{register object V98;
	register object V99;
	V98= cdr(base[2]);
	V99= car((V98));
	goto T299;
T299:;
	if(!(endp_prop((V98)))){
	goto T300;}
	V100= (VFUN_NARGS=3,(*(LnkLI55))(VV[33],VV[41],car(base[2])));
	V101= list(3,VV[30],/* INLINE-ARGS */V100,VV[0]);
	V102= make_cons(Cnil,base[3]);
	base[6]= listA(3,VV[29],/* INLINE-ARGS */V101,reverse(/* INLINE-ARGS */V102));
	vs_top=(vs_base=base+6)+1;
	return;
	goto T300;
T300:;
	if(!(type_of((V99))==t_string)){
	goto T306;}
	{register object V103;
	V103= list(3,VV[30],(V99),VV[0]);
	base[3]= make_cons((V103),base[3]);
	goto T304;}
	goto T306;
T306:;
	{register object V104;
	V104= list(2,VV[31],(V99));
	base[3]= make_cons((V104),base[3]);}
	goto T304;
T304:;
	V98= cdr((V98));
	V99= car((V98));
	goto T299;}
	goto T294;
T294:;
	{register object V105;
	register object V106;
	V105= base[2];
	V106= car((V105));
	goto T320;
T320:;
	if(!(endp_prop((V105)))){
	goto T321;}
	V107= make_cons(Cnil,base[3]);
	base[5]= listA(3,VV[29],VV[42],reverse(/* INLINE-ARGS */V107));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T321;
T321:;
	if(!(type_of((V106))==t_string)){
	goto T327;}
	{register object V108;
	V108= list(3,VV[30],(V106),VV[0]);
	base[3]= make_cons((V108),base[3]);
	goto T325;}
	goto T327;
T327:;
	{register object V109;
	V109= list(2,VV[31],(V106));
	base[3]= make_cons((V109),base[3]);}
	goto T325;
T325:;
	V105= cdr((V105));
	V106= car((V105));
	goto T320;}
}
static object  LnkTLI55(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[55],(void **)(void *)&LnkLI55,first,ap);va_end(ap);return V1;} /* CONCATENATE */
static void LnkT54(){ call_or_link(VV[54],(void **)(void *)&Lnk54);} /* CLOSE-FASD */
static void LnkT53(){ call_or_link(VV[53],(void **)(void *)&Lnk53);} /* WRITE-FASD-TOP */
static void LnkT52(){ call_or_link(VV[52],(void **)(void *)&Lnk52);} /* FIND-SHARING-TOP */
static object  LnkTLI51(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[51],(void **)(void *)&LnkLI51,1,first,ap);va_end(ap);return V1;} /* WT-DATA1 */
static void LnkT50(){ call_or_link(VV[50],(void **)(void *)&Lnk50);} /* WT-FASD-DATA-FILE */
static object  LnkTLI49(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[49],(void **)(void *)&LnkLI49,2,first,ap);va_end(ap);return V1;} /* COERCE */
static object  LnkTLI48(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[48],(void **)(void *)&LnkLI48,1,first,ap);va_end(ap);return V1;} /* VERIFY-DATA-VECTOR */
static object  LnkTLI47(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[47],(void **)(void *)&LnkLI47,first,ap);va_end(ap);return V1;} /* CMPWARN */
static void LnkT46(){ call_or_link(VV[46],(void **)(void *)&Lnk46);} /* HASH-EQUAL */
static object  LnkTLI45(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[45],(void **)(void *)&LnkLI45,first,ap);va_end(ap);return V1;} /* VECTOR-PUSH-EXTEND */
static void LnkT44(){ call_or_link(VV[44],(void **)(void *)&Lnk44);} /* CMPILER-ERROR */
static void LnkT43(){ call_or_link(VV[43],(void **)(void *)&Lnk43);} /* WT-LOC */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

