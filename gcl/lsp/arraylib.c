
#include "cmpinclude.h"
#include "arraylib.h"
void init_arraylib(){do_init(VV);}
/*	local entry for function BEST-ARRAY-ELEMENT-TYPE	*/

static object LI1(V2)

register object V2;
{	 VMB1 VMS1 VMV1
goto TTL;
TTL:;
	if(eql(Ct,(V2))){
	goto T1;}
	if(((V2))!=Cnil){
	goto T2;}
goto T1;
T1:;
	{object V3 = Ct;
	VMR1(V3)}
goto T2;
T2:;
	{register object x= (V2),V4= VV[0];
	while(!endp(V4))
	if(x==(V4->c.c_car)){
	goto T8;
	}else V4=V4->c.c_cdr;
	goto T7;}
goto T8;
T8:;
	{object V5 = (V2);
	VMR1(V5)}
goto T7;
T7:;
	base[0]= (V2);
	base[1]= VV[1];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk18)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T10;}
	{register object V6;
	register object V7;
	V6= VV[2];
	V7= car((V6));
goto T17;
T17:;
	if(!(endp((V6)))){
	goto T18;}
	{object V8 = VV[1];
	VMR1(V8)}
goto T18;
T18:;
	base[1]= (V2);
	base[2]= (V7);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk18)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T22;}
	{object V9 = (V7);
	VMR1(V9)}
goto T22;
T22:;
	V6= cdr((V6));
	V7= car((V6));
	goto T17;}
goto T10;
T10:;
	if(!(eql((V2),VV[3]))){
	goto T33;}
	{object V10 = VV[4];
	VMR1(V10)}
goto T33;
T33:;{object V11;
	{register object V12;
	register object V13;
	V12= VV[5];
	V13= car((V12));
goto T40;
T40:;
	if(!(endp((V12)))){
	goto T41;}
	V11= Cnil;
	goto T36;
goto T41;
T41:;
	base[1]= (V2);
	base[2]= (V13);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk18)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T45;}
	V11= (V13);
	goto T36;
goto T45;
T45:;
	V12= cdr((V12));
	V13= car((V12));
	goto T40;}
goto T36;
T36:;
	if(V11==Cnil)goto T35;
	{object V14 = V11;
	VMR1(V14)}
goto T35;
T35:;}
	{object V15 = Ct;
	VMR1(V15)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-ARRAY	*/

static object LI2(V16,va_alist)
	object V16;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB2 VMS2 VMV2
	{register object V17;
	object V18;
	object V19;
	register object V20;
	object V21;
	object V22;
	object V23;
	object V24;
	object V25;
	object V26;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V17= V16;
	narg= narg - 1;
	{
	parse_key_new(narg,Vcs +1,(struct key *)&LI2key,ap);
	if(Vcs[1]==0){
	V18= Ct;
	}else{
	V18=(Vcs[1]);}
	V19=(Vcs[2]);
	if(Vcs[3]==0){
	V20= Cnil;
	V21= Cnil;
	}else{
	V20=(Vcs[3]);
	V21= Ct;}
	V22=(Vcs[4]);
	V23=(Vcs[5]);
	V24=(Vcs[6]);
	V25=(Vcs[7]);
	V26=(Vcs[8]);
	if(!(type_of((V17))==t_fixnum||type_of((V17))==t_bignum)){
	goto T57;}
	V17= make_cons((V17),Cnil);
goto T57;
T57:;
	V18= (*(LnkLI22))((V18));
	if(!(((long)length((V17)))==(1))){
	goto T64;}
	{register object V27;
	base[0]= (V18);
	base[1]= car((V17));
	base[2]= (V22);
	base[3]= (V23);
	base[4]= (V24);
	base[5]= (V25);
	base[6]= (V26);
	base[7]= (V19);
	vs_top=(vs_base=base+0)+8;
	siLmake_vector();
	vs_top=sup;
	V27= vs_base[0];
	if(((V21))==Cnil){
	goto T75;}
	{long V28;
	register long V29;
	V28= fix(car((V17)));
	V29= 0;
goto T81;
T81:;
	if(!((V29)>=(V28))){
	goto T82;}
	goto T75;
goto T82;
T82:;
	V30= elt((V20),V29);
	(void)(aset1((V27),V29,/* INLINE-ARGS */V30));
	V29= (long)(V29)+1;
	goto T81;}
goto T75;
T75:;
	{object V31 = (V27);
	VMR2(V31)}}
goto T64;
T64:;
	{register object V32;
	base[1]= (V18);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk23)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V26);
	base[2]= (V19);
	base[3]= (V24);
	base[4]= (V25);
	base[5]= (V17);
	vs_top=(vs_base=base+0)+6;
	(void) (*Lnk24)();
	vs_top=sup;
	V32= vs_base[0];
	if(((V23))==Cnil){
	goto T98;}
	base[0]= VV[6];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T98;
T98:;
	{register object x= small_fixnum(0),V33= (V17);
	while(!endp(V33))
	if(eql(x,V33->c.c_car)){
	goto T102;
	}else V33=V33->c.c_cdr;}
	if(((V21))==Cnil){
	goto T102;}
	{register object V34;
	base[0]= make_fixnum((long)length((V17)));
	base[1]= VV[7];
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+0)+3;
	Lmake_list();
	vs_top=sup;
	V34= vs_base[0];
goto T112;
T112:;
	base[0]= (V32);
	base[1]= (*(LnkLI25))((V20),(V34));
	base[2]= (V34);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk26)();
	vs_top=sup;
	if(((*(LnkLI27))((V34),(V17)))==Cnil){
	goto T119;}
	goto T102;
goto T119;
T119:;
	goto T112;}
goto T102;
T102:;
	{object V35 = (V32);
	VMR2(V35)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function INCREMENT-CURSOR	*/

static object LI3(V38,V39)

register object V38;object V39;
{	 VMB3 VMS3 VMV3
goto TTL;
TTL:;
	if(((V38))!=Cnil){
	goto T125;}
	{object V40 = Ct;
	VMR3(V40)}
goto T125;
T125:;
	{object V41;
	V41= (*(LnkLI27))(cdr((V38)),cdr((V39)));
	if(((V41))==Cnil){
	goto T129;}
	if(!(((long)(fix(car((V38))))+1)>=(fix(car((V39)))))){
	goto T132;}
	if(type_of((V38))!=t_cons)FEwrong_type_argument(Scons,(V38));
	((V38))->c.c_car = small_fixnum(0);
	{object V42 = Ct;
	VMR3(V42)}
goto T132;
T132:;
	V43 = make_fixnum((long)(fix(car((V38))))+1);
	if(type_of((V38))!=t_cons)FEwrong_type_argument(Scons,(V38));
	((V38))->c.c_car = V43;
	{object V44 = Cnil;
	VMR3(V44)}
goto T129;
T129:;
	{object V45 = Cnil;
	VMR3(V45)}}
	return Cnil;
}
/*	local entry for function SEQUENCE-CURSOR	*/

static object LI4(V48,V49)

object V48;object V49;
{	 VMB4 VMS4 VMV4
goto TTL;
TTL:;
	if(((V49))!=Cnil){
	goto T137;}
	{object V50 = (V48);
	VMR4(V50)}
goto T137;
T137:;
	V48= elt((V48),fix(car((V49))));
	V49= cdr((V49));
	goto TTL;
	return Cnil;
}
/*	local entry for function VECTOR	*/

static object LI5(va_alist)
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB5 VMS5 VMV5
	{object V51;
	Vcs[0]=Vcs[0];
	va_start(ap);
	narg= narg - 0;
	V52 = (ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR(narg,ap));
	V51= V52;
	{object V53;
	V54 = make_fixnum((long)length((V51)));
	V53= make_cons(V54,Cnil);
	{object V55 = (VFUN_NARGS=5,(*(LnkLI28))((V53),VV[8],Ct,VV[9],(V51)));
	VMR5(V55)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function ARRAY-DIMENSIONS	*/

static object LI6(V57)

register object V57;
{	 VMB6 VMS6 VMV6
goto TTL;
TTL:;
	{register object V58;
	register object V59;
	base[0]= (V57);
	vs_top=(vs_base=base+0)+1;
	Larray_rank();
	vs_top=sup;
	V58= vs_base[0];
	V59= Cnil;
goto T146;
T146:;
	if(!(number_compare((V58),small_fixnum(0))==0)){
	goto T147;}
	{object V60 = (V59);
	VMR6(V60)}
goto T147;
T147:;
	V58= one_minus((V58));
	base[0]= (V57);
	base[1]= (V58);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V61= vs_base[0];
	V59= make_cons(V61,(V59));
	goto T146;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ARRAY-IN-BOUNDS-P	*/

static object LI7(V62,va_alist)
	object V62;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{register object V63;
	object V64;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V63= V62;
	narg= narg - 1;
	V65 = (ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR(narg,ap));
	V64= V65;
	{register object V66;
	base[1]= (V63);
	vs_top=(vs_base=base+1)+1;
	Larray_rank();
	vs_top=sup;
	V66= vs_base[0];
	V67 = make_fixnum((long)length((V64)));
	if(!(number_compare((V66),V67)!=0)){
	goto T162;}
	base[1]= VV[10];
	base[2]= (V66);
	base[3]= make_fixnum((long)length((V64)));
	vs_top=(vs_base=base+1)+3;
	Lerror();
	vs_top=sup;
goto T162;
T162:;
	{register object V68;
	register object V69;
	V68= small_fixnum(0);
	V69= (V64);
goto T169;
T169:;
	if(!(number_compare((V68),(V66))>=0)){
	goto T170;}
	{object V70 = Ct;
	VMR7(V70)}
goto T170;
T170:;
	if(number_compare(car((V69)),small_fixnum(0))<0){
	goto T175;}
	V71= car((V69));
	base[1]= (V63);
	base[2]= (V68);
	vs_top=(vs_base=base+1)+2;
	Larray_dimension();
	vs_top=sup;
	V72= vs_base[0];
	if(!(number_compare(/* INLINE-ARGS */V71,V72)>=0)){
	goto T174;}
goto T175;
T175:;
	{object V73 = Cnil;
	VMR7(V73)}
goto T174;
T174:;
	V68= one_plus((V68));
	V69= cdr((V69));
	goto T169;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function ARRAY-ROW-MAJOR-INDEX	*/

static object LI8(V74,va_alist)
	object V74;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB8 VMS8 VMV8
	{register object V75;
	object V76;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V75= V74;
	narg= narg - 1;
	V77 = (ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR(narg,ap));
	V76= V77;
	{register object V78;
	register object V79;
	register object V80;
	V78= small_fixnum(0);
	V79= small_fixnum(0);
	V80= (V76);
goto T187;
T187:;
	if(((V80))!=Cnil){
	goto T188;}
	{object V81 = (V79);
	VMR8(V81)}
goto T188;
T188:;
	{object V82;
	V82= one_plus((V78));
	base[0]= (V75);
	base[1]= (V78);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V83= vs_base[0];
	V84= number_times((V79),V83);
	V79= number_plus(/* INLINE-ARGS */V84,car((V80)));
	V80= cdr((V80));
	V78= (V82);}
	goto T187;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT	*/

static object LI9(V85,va_alist)
	object V85;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V86;
	object V87;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V86= V85;
	narg= narg - 1;
	V88 = (ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR(narg,ap));
	V87= V88;
	base[0]= (V86);
	{object V89;
	V89= (V87);
	 vs_top=base+1;
	 while(!endp(V89))
	 {vs_push(car(V89));V89=cdr(V89);}
	vs_base=base+0;}
	Laref();
	vs_top=sup;
	{object V90 = vs_base[0];
	VMR9(V90)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SBIT	*/

static object LI10(V91,va_alist)
	object V91;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V92;
	object V93;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V92= V91;
	narg= narg - 1;
	V94 = (ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR(narg,ap));
	V93= V94;
	base[0]= (V92);
	{object V95;
	V95= (V93);
	 vs_top=base+1;
	 while(!endp(V95))
	 {vs_push(car(V95));V95=cdr(V95);}
	vs_base=base+0;}
	Laref();
	vs_top=sup;
	{object V96 = vs_base[0];
	VMR10(V96)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-AND	*/

static object LI11(V98,V97,va_alist)
	object V98,V97;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V99;
	object V100;
	object V101;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V99= V98;
	V100= V97;
	narg = narg - 2;
	if (narg <= 0) goto T204;
	else {
	V101= va_arg(ap,object);}
	--narg; goto T205;
goto T204;
T204:;
	V101= Cnil;
goto T205;
T205:;
	base[0]= small_fixnum(1);
	base[1]= (V99);
	base[2]= (V100);
	base[3]= (V101);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V102 = vs_base[0];
	VMR11(V102)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-IOR	*/

static object LI12(V104,V103,va_alist)
	object V104,V103;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V105;
	object V106;
	object V107;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V105= V104;
	V106= V103;
	narg = narg - 2;
	if (narg <= 0) goto T211;
	else {
	V107= va_arg(ap,object);}
	--narg; goto T212;
goto T211;
T211:;
	V107= Cnil;
goto T212;
T212:;
	base[0]= small_fixnum(7);
	base[1]= (V105);
	base[2]= (V106);
	base[3]= (V107);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V108 = vs_base[0];
	VMR12(V108)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-XOR	*/

static object LI13(V110,V109,va_alist)
	object V110,V109;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB13 VMS13 VMV13
	{object V111;
	object V112;
	object V113;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V111= V110;
	V112= V109;
	narg = narg - 2;
	if (narg <= 0) goto T218;
	else {
	V113= va_arg(ap,object);}
	--narg; goto T219;
goto T218;
T218:;
	V113= Cnil;
goto T219;
T219:;
	base[0]= small_fixnum(6);
	base[1]= (V111);
	base[2]= (V112);
	base[3]= (V113);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V114 = vs_base[0];
	VMR13(V114)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-EQV	*/

static object LI14(V116,V115,va_alist)
	object V116,V115;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB14 VMS14 VMV14
	{object V117;
	object V118;
	object V119;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V117= V116;
	V118= V115;
	narg = narg - 2;
	if (narg <= 0) goto T225;
	else {
	V119= va_arg(ap,object);}
	--narg; goto T226;
goto T225;
T225:;
	V119= Cnil;
goto T226;
T226:;
	base[0]= small_fixnum(9);
	base[1]= (V117);
	base[2]= (V118);
	base[3]= (V119);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V120 = vs_base[0];
	VMR14(V120)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-NAND	*/

static object LI15(V122,V121,va_alist)
	object V122,V121;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB15 VMS15 VMV15
	{object V123;
	object V124;
	object V125;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V123= V122;
	V124= V121;
	narg = narg - 2;
	if (narg <= 0) goto T232;
	else {
	V125= va_arg(ap,object);}
	--narg; goto T233;
goto T232;
T232:;
	V125= Cnil;
goto T233;
T233:;
	base[0]= small_fixnum(14);
	base[1]= (V123);
	base[2]= (V124);
	base[3]= (V125);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V126 = vs_base[0];
	VMR15(V126)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-NOR	*/

static object LI16(V128,V127,va_alist)
	object V128,V127;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB16 VMS16 VMV16
	{object V129;
	object V130;
	object V131;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V129= V128;
	V130= V127;
	narg = narg - 2;
	if (narg <= 0) goto T239;
	else {
	V131= va_arg(ap,object);}
	--narg; goto T240;
goto T239;
T239:;
	V131= Cnil;
goto T240;
T240:;
	base[0]= small_fixnum(8);
	base[1]= (V129);
	base[2]= (V130);
	base[3]= (V131);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V132 = vs_base[0];
	VMR16(V132)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-ANDC1	*/

static object LI17(V134,V133,va_alist)
	object V134,V133;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB17 VMS17 VMV17
	{object V135;
	object V136;
	object V137;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V135= V134;
	V136= V133;
	narg = narg - 2;
	if (narg <= 0) goto T246;
	else {
	V137= va_arg(ap,object);}
	--narg; goto T247;
goto T246;
T246:;
	V137= Cnil;
goto T247;
T247:;
	base[0]= small_fixnum(4);
	base[1]= (V135);
	base[2]= (V136);
	base[3]= (V137);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V138 = vs_base[0];
	VMR17(V138)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-ANDC2	*/

static object LI18(V140,V139,va_alist)
	object V140,V139;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB18 VMS18 VMV18
	{object V141;
	object V142;
	object V143;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V141= V140;
	V142= V139;
	narg = narg - 2;
	if (narg <= 0) goto T253;
	else {
	V143= va_arg(ap,object);}
	--narg; goto T254;
goto T253;
T253:;
	V143= Cnil;
goto T254;
T254:;
	base[0]= small_fixnum(2);
	base[1]= (V141);
	base[2]= (V142);
	base[3]= (V143);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V144 = vs_base[0];
	VMR18(V144)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-ORC1	*/

static object LI19(V146,V145,va_alist)
	object V146,V145;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB19 VMS19 VMV19
	{object V147;
	object V148;
	object V149;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V147= V146;
	V148= V145;
	narg = narg - 2;
	if (narg <= 0) goto T260;
	else {
	V149= va_arg(ap,object);}
	--narg; goto T261;
goto T260;
T260:;
	V149= Cnil;
goto T261;
T261:;
	base[0]= small_fixnum(13);
	base[1]= (V147);
	base[2]= (V148);
	base[3]= (V149);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V150 = vs_base[0];
	VMR19(V150)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-ORC2	*/

static object LI20(V152,V151,va_alist)
	object V152,V151;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB20 VMS20 VMV20
	{object V153;
	object V154;
	object V155;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V153= V152;
	V154= V151;
	narg = narg - 2;
	if (narg <= 0) goto T267;
	else {
	V155= va_arg(ap,object);}
	--narg; goto T268;
goto T267;
T267:;
	V155= Cnil;
goto T268;
T268:;
	base[0]= small_fixnum(11);
	base[1]= (V153);
	base[2]= (V154);
	base[3]= (V155);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V156 = vs_base[0];
	VMR20(V156)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-NOT	*/

static object LI21(V157,va_alist)
	object V157;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB21 VMS21 VMV21
	{object V158;
	object V159;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V158= V157;
	narg = narg - 1;
	if (narg <= 0) goto T274;
	else {
	V159= va_arg(ap,object);}
	--narg; goto T275;
goto T274;
T274:;
	V159= Cnil;
goto T275;
T275:;
	base[0]= small_fixnum(12);
	base[1]= (V158);
	base[2]= (V158);
	base[3]= (V159);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V160 = vs_base[0];
	VMR21(V160)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function VECTOR-PUSH	*/

static object LI22(V163,V164)

object V163;register object V164;
{	 VMB22 VMS22 VMV22
goto TTL;
TTL:;
	{register long V165;
	base[0]= (V164);
	vs_top=(vs_base=base+0)+1;
	Lfill_pointer();
	vs_top=sup;
	V165= fix(vs_base[0]);
	base[0]= (V164);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V166= vs_base[0];
	if(!((V165)<(fix(V166)))){
	goto T284;}
	(void)(aset1((V164),V165,(V163)));
	base[0]= (V164);
	base[1]= make_fixnum((long)(V165)+1);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	{object V167 = make_fixnum(V165);
	VMR22(V167)}
goto T284;
T284:;
	{object V168 = Cnil;
	VMR22(V168)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VECTOR-PUSH-EXTEND	*/

static object LI23(V170,V169,va_alist)
	object V170,V169;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB23 VMS23 VMV23
	{object V171;
	register object V172;
	object V173;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V171= V170;
	V172= V169;
	narg = narg - 2;
	if (narg <= 0) goto T293;
	else {
	V173= va_arg(ap,object);}
	--narg; goto T294;
goto T293;
T293:;
	V173= Cnil;
goto T294;
T294:;
	{register long V174;
	base[0]= (V172);
	vs_top=(vs_base=base+0)+1;
	Lfill_pointer();
	vs_top=sup;
	V174= fix(vs_base[0]);
	base[0]= (V172);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V175= vs_base[0];
	if(!((V174)<(fix(V175)))){
	goto T299;}
	(void)(aset1((V172),V174,(V171)));
	base[0]= (V172);
	base[1]= make_fixnum((long)(V174)+1);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	{object V176 = make_fixnum(V174);
	VMR23(V176)}
goto T299;
T299:;
	base[0]= (V172);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V177= vs_base[0];
	if((V173)!=Cnil){
	V178= (V173);
	goto T312;}
	base[0]= (V172);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V179= vs_base[0];
	if(!((fix(V179))>(0))){
	goto T314;}
	base[0]= (V172);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V178= vs_base[0];
	goto T312;
goto T314;
T314:;
	V178= small_fixnum(5);
goto T312;
T312:;
	V180= number_plus(V177,V178);
	V181= make_cons(/* INLINE-ARGS */V180,Cnil);
	base[0]= (V172);
	vs_top=(vs_base=base+0)+1;
	Larray_element_type();
	vs_top=sup;
	V182= vs_base[0];
	V183 = make_fixnum(V174);
	(void)((VFUN_NARGS=6,(*(LnkLI29))((V172),/* INLINE-ARGS */V181,VV[8],V182,VV[11],V183)));
	(void)(aset1((V172),V174,(V171)));
	base[0]= (V172);
	base[1]= make_fixnum((long)(V174)+1);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	{object V184 = make_fixnum(V174);
	VMR23(V184)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function VECTOR-POP	*/

static object LI24(V186)

register object V186;
{	 VMB24 VMS24 VMV24
goto TTL;
TTL:;
	{long V187;
	base[0]= (V186);
	vs_top=(vs_base=base+0)+1;
	Lfill_pointer();
	vs_top=sup;
	V187= fix(vs_base[0]);
	if(!((V187)==(0))){
	goto T329;}
	base[0]= VV[12];
	base[1]= (V186);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
goto T329;
T329:;
	base[0]= (V186);
	base[1]= make_fixnum((long)(V187)-1);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	{object V188 = aref1((V186),(long)(V187)-1);
	VMR24(V188)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADJUST-ARRAY	*/

static object LI25(V190,V189,va_alist)
	object V190,V189;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB25 VMS25 VMV25
	{register object V191;
	register object V192;
	register object V193;
	object V194;
	object V195;
	object V196;
	object V197;
	object V198;
	object V199;
	object V200;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V191= V190;
	V192= V189;
	narg= narg - 2;
	V201 = (ALLOCA_CONS(narg),ON_STACK_MAKE_LIST(narg));
	V193= V201;
	{
	parse_key_rest(V201,narg,Vcs +3,(struct key *)&LI25key,ap);
	V194=(Vcs[3]);
	V195=(Vcs[4]);
	V196=(Vcs[5]);
	V197=(Vcs[6]);
	V198=(Vcs[7]);
	V199=(Vcs[8]);
	V200=(Vcs[9]);
	{register object V202;
	V202= Cnil;
	if(!(type_of((V192))==t_fixnum||type_of((V192))==t_bignum)){
	goto T338;}
	V192= make_cons((V192),Cnil);
goto T338;
T338:;
	{register object x= VV[11],V203= (V193);
	while(!endp(V203))
	if(eql(x,V203->c.c_car)){
	V202= V203;
	goto T346;
	}else V203=V203->c.c_cdr;
	V202= Cnil;}
goto T346;
T346:;
	if(((V202))==Cnil){
	goto T344;}
	base[0]= (V191);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk30)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T342;}
	base[0]= VV[13];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T342;
goto T344;
T344:;
	base[0]= (V191);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk30)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T342;}
	base[0]= (V191);
	vs_top=(vs_base=base+0)+1;
	Lfill_pointer();
	vs_top=sup;
	V204= vs_base[0];
	V193= ON_STACK_CONS(V204,(V193));
	V193= ON_STACK_CONS(VV[11],(V193));
goto T342;
T342:;
	base[0]= (V191);
	vs_top=(vs_base=base+0)+1;
	Larray_element_type();
	vs_top=sup;
	V194= vs_base[0];
	if(((V194))==(Ct)){
	goto T362;}
	V193= ON_STACK_CONS((V194),(V193));
	V193= ON_STACK_CONS(VV[8],(V193));
goto T362;
T362:;
	{register object x= VV[14],V205= (V193);
	while(!endp(V205))
	if(eql(x,V205->c.c_car)){
	goto T368;
	}else V205=V205->c.c_cdr;}
	base[0]= (V191);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk31)();
	vs_top=sup;
	V206= vs_base[0];
	V193= ON_STACK_CONS(V206,(V193));
	V193= ON_STACK_CONS(VV[14],(V193));
goto T368;
T368:;
	{register object V207;
	base[0]= (V192);
	base[1]= VV[15];
	base[2]= Ct;
	{object V208;
	V208= (V193);
	 vs_top=base+3;
	 while(!endp(V208))
	 {vs_push(car(V208));V208=cdr(V208);}
	vs_base=base+0;}
	(void) (*Lnk28)();
	vs_top=sup;
	V207= vs_base[0];
	if((cdr((V192)))==Cnil){
	goto T382;}
	V209= cdr((V192));
	V210= (*(LnkLI32))((V191));
	if(!(equal(/* INLINE-ARGS */V209,cdr(/* INLINE-ARGS */V210)))){
	goto T383;}
	if(!(((V194))==(VV[16]))){
	goto T382;}
	base[0]= (V192);
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V211= vs_base[0];
	{int V212= fix(car(V211));
	if(!((0)==((long)(V212>=0&&(8)>0?(V212)%(8):imod(V212,8))))){
	goto T383;}}
goto T382;
T382:;
	base[0]= (V191);
	base[1]= (V207);
	base[2]= small_fixnum(0);
	base[3]= small_fixnum(0);
	base[5]= (V207);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	V213= vs_base[0];
	base[5]= (V191);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	V214= vs_base[0];
	base[4]= (number_compare(V213,V214)<=0?(V213):V214);
	vs_top=(vs_base=base+0)+5;
	(void) (*Lnk34)();
	vs_top=sup;
	goto T381;
goto T383;
T383:;
	{register object V215;
	base[0]= make_fixnum((long)length((V192)));
	base[1]= VV[7];
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+0)+3;
	Lmake_list();
	vs_top=sup;
	V215= vs_base[0];
goto T407;
T407:;
	base[0]= (V191);
	{object V216;
	V216= (V215);
	 vs_top=base+1;
	 while(!endp(V216))
	 {vs_push(car(V216));V216=cdr(V216);}
	vs_base=base+0;}
	(void) (*Lnk35)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T410;}
	base[0]= (V207);
	base[2]= (V191);
	{object V217;
	V217= (V215);
	 vs_top=base+3;
	 while(!endp(V217))
	 {vs_push(car(V217));V217=cdr(V217);}
	vs_base=base+2;}
	Laref();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= (V215);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk26)();
	vs_top=sup;
goto T410;
T410:;
	if(((*(LnkLI27))((V215),(V192)))==Cnil){
	goto T420;}
	goto T381;
goto T420;
T420:;
	goto T407;}
goto T381;
T381:;
	base[0]= (V191);
	base[1]= (V207);
	vs_top=(vs_base=base+0)+2;
	siLreplace_array();
	vs_top=sup;
	V202= cadr((V202));
	if(((V202))==Cnil){
	goto T430;}
	if(!(eql(Ct,(V202)))){
	goto T434;}
	base[0]= (V191);
	base[2]= (V191);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	goto T430;
goto T434;
T434:;
	if(!(type_of((V202))==t_fixnum)){
	goto T440;}
	base[0]= (V191);
	base[1]= (V202);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	goto T430;
goto T440;
T440:;
	base[0]= VV[17];
	base[1]= (V202);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
goto T430;
T430:;
	{object V218 = (V191);
	VMR25(V218)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
static void LnkT35(){ call_or_link(VV[35],(void **)&Lnk35);} /* ARRAY-IN-BOUNDS-P */
static void LnkT34(){ call_or_link(VV[34],(void **)&Lnk34);} /* COPY-ARRAY-PORTION */
static void LnkT33(){ call_or_link(VV[33],(void **)&Lnk33);} /* ARRAY-TOTAL-SIZE */
static object  LnkTLI32(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[32],(void **)&LnkLI32,1,ap);va_end(ap);return V1;} /* ARRAY-DIMENSIONS */
static void LnkT28(){ call_or_link(VV[28],(void **)&Lnk28);} /* MAKE-ARRAY */
static void LnkT31(){ call_or_link(VV[31],(void **)&Lnk31);} /* STATICP */
static void LnkT30(){ call_or_link(VV[30],(void **)&Lnk30);} /* ARRAY-HAS-FILL-POINTER-P */
static object  LnkTLI29(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[29],(void **)&LnkLI29,ap);va_end(ap);return V1;} /* ADJUST-ARRAY */
static object  LnkTLI28(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[28],(void **)&LnkLI28,ap);va_end(ap);return V1;} /* MAKE-ARRAY */
static object  LnkTLI27(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[27],(void **)&LnkLI27,2,ap);va_end(ap);return V1;} /* INCREMENT-CURSOR */
static void LnkT26(){ call_or_link(VV[26],(void **)&Lnk26);} /* ASET-BY-CURSOR */
static object  LnkTLI25(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[25],(void **)&LnkLI25,2,ap);va_end(ap);return V1;} /* SEQUENCE-CURSOR */
static void LnkT24(){ call_or_link(VV[24],(void **)&Lnk24);} /* MAKE-ARRAY1 */
static void LnkT23(){ call_or_link(VV[23],(void **)&Lnk23);} /* GET-AELTTYPE */
static object  LnkTLI22(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[22],(void **)&LnkLI22,1,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static void LnkT18(){ call_or_link(VV[18],(void **)&Lnk18);} /* SUBTYPEP */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

