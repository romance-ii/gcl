
#include "cmpinclude.h"
#include "gcl_arraylib.h"
void init_gcl_arraylib(){do_init(VV);}
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
	if(!(endp_prop((V6)))){
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
	if(!(endp_prop((V12)))){
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
/*	local entry for function UPGRADED-ARRAY-ELEMENT-TYPE	*/

static object LI2(object V16,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB2 VMS2 VMV2
	{object V17;
	object V18;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V17= V16;
	narg = narg - 1;
	if (narg <= 0) goto T55;
	else {
	V18= first;}
	--narg; goto T56;
	goto T55;
T55:;
	V18= Cnil;
	goto T56;
T56:;
	{object V19 = (*(LnkLI19))((V17));
	VMR2(V19)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function MAKE-ARRAY	*/

static object LI3(object V20,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB3 VMS3 VMV3
	{register object V21;
	object V22;
	object V23;
	register object V24;
	object V25;
	object V26;
	object V27;
	object V28;
	object V29;
	object V30;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V21= V20;
	narg= narg - 1;
	{
	parse_key_new_new(narg,Vcs +1,(struct key *)(void *)&LI3key,first,ap);
	if(Vcs[1]==0){
	V22= Ct;
	}else{
	V22=(Vcs[1]);}
	V23=(Vcs[2]);
	if(Vcs[3]==0){
	V24= Cnil;
	V25= Cnil;
	}else{
	V24=(Vcs[3]);
	V25= Ct;}
	V26=(Vcs[4]);
	V27=(Vcs[5]);
	V28=(Vcs[6]);
	V29=(Vcs[7]);
	V30=(Vcs[8]);
	if(!(type_of((V21))==t_fixnum||type_of((V21))==t_bignum)){
	goto T60;}
	V21= make_cons((V21),Cnil);
	goto T60;
T60:;
	V22= (*(LnkLI19))((V22));
	if(!(((long)length((V21)))==(1))){
	goto T67;}
	{register object V31;
	base[0]= (V22);
	base[1]= car((V21));
	base[2]= (V26);
	base[3]= (V27);
	base[4]= (V28);
	base[5]= (V29);
	base[6]= (V30);
	base[7]= (V23);
	vs_top=(vs_base=base+0)+8;
	siLmake_vector();
	vs_top=sup;
	V31= vs_base[0];
	if(((V25))==Cnil){
	goto T78;}
	{long V32;
	register long V33;
	V32= fix(car((V21)));
	V33= 0;
	goto T84;
T84:;
	if(!((V33)>=(V32))){
	goto T85;}
	goto T78;
	goto T85;
T85:;
	V34= elt((V24),V33);
	(void)(aset1((V31),V33,/* INLINE-ARGS */V34));
	V33= (long)(V33)+1;
	goto T84;}
	goto T78;
T78:;
	{object V35 = (V31);
	VMR3(V35)}}
	goto T67;
T67:;
	{register object V36;
	base[1]= (V22);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk23)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V30);
	base[2]= (V23);
	base[3]= (V28);
	base[4]= (V29);
	base[5]= (V21);
	vs_top=(vs_base=base+0)+6;
	(void) (*Lnk24)();
	vs_top=sup;
	V36= vs_base[0];
	if(((V27))==Cnil){
	goto T101;}
	base[0]= VV[6];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T101;
T101:;
	{register object x= small_fixnum(0),V37= (V21);
	while(!endp(V37))
	if(eql(x,V37->c.c_car)){
	goto T105;
	}else V37=V37->c.c_cdr;}
	if(((V25))==Cnil){
	goto T105;}
	{register object V38;
	base[0]= make_fixnum((long)length((V21)));
	base[1]= VV[7];
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+0)+3;
	Lmake_list();
	vs_top=sup;
	V38= vs_base[0];
	goto T115;
T115:;
	base[0]= (V36);
	base[1]= (*(LnkLI25))((V24),(V38));
	base[2]= (V38);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk26)();
	vs_top=sup;
	if(((*(LnkLI27))((V38),(V21)))==Cnil){
	goto T122;}
	goto T105;
	goto T122;
T122:;
	goto T115;}
	goto T105;
T105:;
	{object V39 = (V36);
	VMR3(V39)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function INCREMENT-CURSOR	*/

static object LI4(V42,V43)

register object V42;object V43;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if(((V42))!=Cnil){
	goto T128;}
	{object V44 = Ct;
	VMR4(V44)}
	goto T128;
T128:;
	{object V45;
	V45= (*(LnkLI27))(cdr((V42)),cdr((V43)));
	if(((V45))==Cnil){
	goto T132;}
	if(!(((long)(fix(car((V42))))+1)>=(fix(car((V43)))))){
	goto T135;}
	if(type_of((V42))!=t_cons)FEwrong_type_argument(Scons,(V42));
	((V42))->c.c_car = small_fixnum(0);
	{object V46 = Ct;
	VMR4(V46)}
	goto T135;
T135:;
	V47 = make_fixnum((long)(fix(car((V42))))+1);
	if(type_of((V42))!=t_cons)FEwrong_type_argument(Scons,(V42));
	((V42))->c.c_car = V47;
	{object V48 = Cnil;
	VMR4(V48)}
	goto T132;
T132:;
	{object V49 = Cnil;
	VMR4(V49)}}
	return Cnil;
}
/*	local entry for function SEQUENCE-CURSOR	*/

static object LI5(V52,V53)

object V52;object V53;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	if(((V53))!=Cnil){
	goto T140;}
	{object V54 = (V52);
	VMR5(V54)}
	goto T140;
T140:;
	V52= elt((V52),fix(car((V53))));
	V53= cdr((V53));
	goto TTL;
	return Cnil;
}
/*	local entry for function VECTOR	*/

static object LI6(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	{object V55;
	va_start(ap,first);
	narg= narg - 0;
	V56 = (ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));
	V55= V56;
	{object V57;
	V58 = make_fixnum((long)length((V55)));
	V57= make_cons(V58,Cnil);
	{object V59 = (VFUN_NARGS=5,(*(LnkLI28))((V57),VV[8],Ct,VV[9],(V55)));
	VMR6(V59)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function ARRAY-DIMENSIONS	*/

static object LI7(V61)

register object V61;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V62;
	register object V63;
	base[0]= (V61);
	vs_top=(vs_base=base+0)+1;
	Larray_rank();
	vs_top=sup;
	V62= vs_base[0];
	V63= Cnil;
	goto T149;
T149:;
	if(!(number_compare((V62),small_fixnum(0))==0)){
	goto T150;}
	{object V64 = (V63);
	VMR7(V64)}
	goto T150;
T150:;
	V62= one_minus((V62));
	base[0]= (V61);
	base[1]= (V62);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V65= vs_base[0];
	V63= make_cons(V65,(V63));
	goto T149;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ARRAY-IN-BOUNDS-P	*/

static object LI8(object V66,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB8 VMS8 VMV8
	{register object V67;
	object V68;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V67= V66;
	narg= narg - 1;
	V69 = (ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));
	V68= V69;
	{register object V70;
	base[1]= (V67);
	vs_top=(vs_base=base+1)+1;
	Larray_rank();
	vs_top=sup;
	V70= vs_base[0];
	V71 = make_fixnum((long)length((V68)));
	if(!(number_compare((V70),V71)!=0)){
	goto T165;}
	base[1]= VV[10];
	base[2]= (V70);
	base[3]= make_fixnum((long)length((V68)));
	vs_top=(vs_base=base+1)+3;
	Lerror();
	vs_top=sup;
	goto T165;
T165:;
	{register object V72;
	register object V73;
	V72= small_fixnum(0);
	V73= (V68);
	goto T172;
T172:;
	if(!(number_compare((V72),(V70))>=0)){
	goto T173;}
	{object V74 = Ct;
	VMR8(V74)}
	goto T173;
T173:;
	if(number_compare(car((V73)),small_fixnum(0))<0){
	goto T178;}
	V75= car((V73));
	base[1]= (V67);
	base[2]= (V72);
	vs_top=(vs_base=base+1)+2;
	Larray_dimension();
	vs_top=sup;
	V76= vs_base[0];
	if(!(number_compare(/* INLINE-ARGS */V75,V76)>=0)){
	goto T177;}
	goto T178;
T178:;
	{object V77 = Cnil;
	VMR8(V77)}
	goto T177;
T177:;
	V72= one_plus((V72));
	V73= cdr((V73));
	goto T172;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function ARRAY-ROW-MAJOR-INDEX	*/

static object LI9(object V78,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{register object V79;
	object V80;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V79= V78;
	narg= narg - 1;
	V81 = (ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));
	V80= V81;
	{register object V82;
	register object V83;
	register object V84;
	V82= small_fixnum(0);
	V83= small_fixnum(0);
	V84= (V80);
	goto T190;
T190:;
	if(((V84))!=Cnil){
	goto T191;}
	{object V85 = (V83);
	VMR9(V85)}
	goto T191;
T191:;
	{object V86;
	V86= one_plus((V82));
	base[0]= (V79);
	base[1]= (V82);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V87= vs_base[0];
	V88= number_times((V83),V87);
	V83= number_plus(/* INLINE-ARGS */V88,car((V84)));
	V84= cdr((V84));
	V82= (V86);}
	goto T190;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT	*/

static object LI10(object V89,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V90;
	object V91;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V90= V89;
	narg= narg - 1;
	V92 = (ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));
	V91= V92;
	base[0]= (V90);
	{object V93;
	V93= (V91);
	 vs_top=base+1;
	 while(!endp(V93))
	 {vs_push(car(V93));V93=cdr(V93);}
	vs_base=base+0;}
	Laref();
	vs_top=sup;
	{object V94 = vs_base[0];
	VMR10(V94)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SBIT	*/

static object LI11(object V95,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V96;
	object V97;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V96= V95;
	narg= narg - 1;
	V98 = (ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));
	V97= V98;
	base[0]= (V96);
	{object V99;
	V99= (V97);
	 vs_top=base+1;
	 while(!endp(V99))
	 {vs_push(car(V99));V99=cdr(V99);}
	vs_base=base+0;}
	Laref();
	vs_top=sup;
	{object V100 = vs_base[0];
	VMR11(V100)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-AND	*/

static object LI12(object V102,object V101,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V103;
	object V104;
	object V105;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V103= V102;
	V104= V101;
	narg = narg - 2;
	if (narg <= 0) goto T207;
	else {
	V105= first;}
	--narg; goto T208;
	goto T207;
T207:;
	V105= Cnil;
	goto T208;
T208:;
	base[0]= small_fixnum(1);
	base[1]= (V103);
	base[2]= (V104);
	base[3]= (V105);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V106 = vs_base[0];
	VMR12(V106)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-IOR	*/

static object LI13(object V108,object V107,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB13 VMS13 VMV13
	{object V109;
	object V110;
	object V111;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V109= V108;
	V110= V107;
	narg = narg - 2;
	if (narg <= 0) goto T214;
	else {
	V111= first;}
	--narg; goto T215;
	goto T214;
T214:;
	V111= Cnil;
	goto T215;
T215:;
	base[0]= small_fixnum(7);
	base[1]= (V109);
	base[2]= (V110);
	base[3]= (V111);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V112 = vs_base[0];
	VMR13(V112)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-XOR	*/

static object LI14(object V114,object V113,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB14 VMS14 VMV14
	{object V115;
	object V116;
	object V117;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V115= V114;
	V116= V113;
	narg = narg - 2;
	if (narg <= 0) goto T221;
	else {
	V117= first;}
	--narg; goto T222;
	goto T221;
T221:;
	V117= Cnil;
	goto T222;
T222:;
	base[0]= small_fixnum(6);
	base[1]= (V115);
	base[2]= (V116);
	base[3]= (V117);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V118 = vs_base[0];
	VMR14(V118)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-EQV	*/

static object LI15(object V120,object V119,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB15 VMS15 VMV15
	{object V121;
	object V122;
	object V123;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V121= V120;
	V122= V119;
	narg = narg - 2;
	if (narg <= 0) goto T228;
	else {
	V123= first;}
	--narg; goto T229;
	goto T228;
T228:;
	V123= Cnil;
	goto T229;
T229:;
	base[0]= small_fixnum(9);
	base[1]= (V121);
	base[2]= (V122);
	base[3]= (V123);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V124 = vs_base[0];
	VMR15(V124)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-NAND	*/

static object LI16(object V126,object V125,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB16 VMS16 VMV16
	{object V127;
	object V128;
	object V129;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V127= V126;
	V128= V125;
	narg = narg - 2;
	if (narg <= 0) goto T235;
	else {
	V129= first;}
	--narg; goto T236;
	goto T235;
T235:;
	V129= Cnil;
	goto T236;
T236:;
	base[0]= small_fixnum(14);
	base[1]= (V127);
	base[2]= (V128);
	base[3]= (V129);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V130 = vs_base[0];
	VMR16(V130)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-NOR	*/

static object LI17(object V132,object V131,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB17 VMS17 VMV17
	{object V133;
	object V134;
	object V135;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V133= V132;
	V134= V131;
	narg = narg - 2;
	if (narg <= 0) goto T242;
	else {
	V135= first;}
	--narg; goto T243;
	goto T242;
T242:;
	V135= Cnil;
	goto T243;
T243:;
	base[0]= small_fixnum(8);
	base[1]= (V133);
	base[2]= (V134);
	base[3]= (V135);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V136 = vs_base[0];
	VMR17(V136)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-ANDC1	*/

static object LI18(object V138,object V137,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB18 VMS18 VMV18
	{object V139;
	object V140;
	object V141;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V139= V138;
	V140= V137;
	narg = narg - 2;
	if (narg <= 0) goto T249;
	else {
	V141= first;}
	--narg; goto T250;
	goto T249;
T249:;
	V141= Cnil;
	goto T250;
T250:;
	base[0]= small_fixnum(4);
	base[1]= (V139);
	base[2]= (V140);
	base[3]= (V141);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V142 = vs_base[0];
	VMR18(V142)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-ANDC2	*/

static object LI19(object V144,object V143,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB19 VMS19 VMV19
	{object V145;
	object V146;
	object V147;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V145= V144;
	V146= V143;
	narg = narg - 2;
	if (narg <= 0) goto T256;
	else {
	V147= first;}
	--narg; goto T257;
	goto T256;
T256:;
	V147= Cnil;
	goto T257;
T257:;
	base[0]= small_fixnum(2);
	base[1]= (V145);
	base[2]= (V146);
	base[3]= (V147);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V148 = vs_base[0];
	VMR19(V148)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-ORC1	*/

static object LI20(object V150,object V149,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB20 VMS20 VMV20
	{object V151;
	object V152;
	object V153;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V151= V150;
	V152= V149;
	narg = narg - 2;
	if (narg <= 0) goto T263;
	else {
	V153= first;}
	--narg; goto T264;
	goto T263;
T263:;
	V153= Cnil;
	goto T264;
T264:;
	base[0]= small_fixnum(13);
	base[1]= (V151);
	base[2]= (V152);
	base[3]= (V153);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V154 = vs_base[0];
	VMR20(V154)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-ORC2	*/

static object LI21(object V156,object V155,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB21 VMS21 VMV21
	{object V157;
	object V158;
	object V159;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V157= V156;
	V158= V155;
	narg = narg - 2;
	if (narg <= 0) goto T270;
	else {
	V159= first;}
	--narg; goto T271;
	goto T270;
T270:;
	V159= Cnil;
	goto T271;
T271:;
	base[0]= small_fixnum(11);
	base[1]= (V157);
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
/*	local entry for function BIT-NOT	*/

static object LI22(object V161,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB22 VMS22 VMV22
	{object V162;
	object V163;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V162= V161;
	narg = narg - 1;
	if (narg <= 0) goto T277;
	else {
	V163= first;}
	--narg; goto T278;
	goto T277;
T277:;
	V163= Cnil;
	goto T278;
T278:;
	base[0]= small_fixnum(12);
	base[1]= (V162);
	base[2]= (V162);
	base[3]= (V163);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V164 = vs_base[0];
	VMR22(V164)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function VECTOR-PUSH	*/

static object LI23(V167,V168)

object V167;register object V168;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	{register long V169;
	base[0]= (V168);
	vs_top=(vs_base=base+0)+1;
	Lfill_pointer();
	vs_top=sup;
	V169= fix(vs_base[0]);
	base[0]= (V168);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V170= vs_base[0];
	if(!((V169)<(fix(V170)))){
	goto T287;}
	(void)(aset1((V168),V169,(V167)));
	base[0]= (V168);
	base[1]= make_fixnum((long)(V169)+1);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	{object V171 = make_fixnum(V169);
	VMR23(V171)}
	goto T287;
T287:;
	{object V172 = Cnil;
	VMR23(V172)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VECTOR-PUSH-EXTEND	*/

static object LI24(object V174,object V173,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB24 VMS24 VMV24
	{object V175;
	register object V176;
	object V177;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V175= V174;
	V176= V173;
	narg = narg - 2;
	if (narg <= 0) goto T296;
	else {
	V177= first;}
	--narg; goto T297;
	goto T296;
T296:;
	V177= Cnil;
	goto T297;
T297:;
	{register long V178;
	base[0]= (V176);
	vs_top=(vs_base=base+0)+1;
	Lfill_pointer();
	vs_top=sup;
	V178= fix(vs_base[0]);
	base[0]= (V176);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V179= vs_base[0];
	if(!((V178)<(fix(V179)))){
	goto T302;}
	(void)(aset1((V176),V178,(V175)));
	base[0]= (V176);
	base[1]= make_fixnum((long)(V178)+1);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	{object V180 = make_fixnum(V178);
	VMR24(V180)}
	goto T302;
T302:;
	base[0]= (V176);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V181= vs_base[0];
	if((V177)!=Cnil){
	V182= (V177);
	goto T315;}
	base[0]= (V176);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V183= vs_base[0];
	if(!((fix(V183))>(0))){
	goto T317;}
	base[0]= (V176);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V182= vs_base[0];
	goto T315;
	goto T317;
T317:;
	V182= small_fixnum(5);
	goto T315;
T315:;
	V184= number_plus(V181,V182);
	V185= make_cons(/* INLINE-ARGS */V184,Cnil);
	base[0]= (V176);
	vs_top=(vs_base=base+0)+1;
	Larray_element_type();
	vs_top=sup;
	V186= vs_base[0];
	V187 = make_fixnum(V178);
	(void)((VFUN_NARGS=6,(*(LnkLI29))((V176),/* INLINE-ARGS */V185,VV[8],V186,VV[11],V187)));
	(void)(aset1((V176),V178,(V175)));
	base[0]= (V176);
	base[1]= make_fixnum((long)(V178)+1);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	{object V188 = make_fixnum(V178);
	VMR24(V188)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function VECTOR-POP	*/

static object LI25(V190)

register object V190;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{long V191;
	base[0]= (V190);
	vs_top=(vs_base=base+0)+1;
	Lfill_pointer();
	vs_top=sup;
	V191= fix(vs_base[0]);
	if(!((V191)==(0))){
	goto T332;}
	base[0]= VV[12];
	base[1]= (V190);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T332;
T332:;
	base[0]= (V190);
	base[1]= make_fixnum((long)(V191)-1);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	{object V192 = aref1((V190),(long)(V191)-1);
	VMR25(V192)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADJUST-ARRAY	*/

static object LI26(object V194,object V193,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{register object V195;
	register object V196;
	register object V197;
	object V198;
	object V199;
	object V200;
	object V201;
	object V202;
	object V203;
	object V204;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V195= V194;
	V196= V193;
	narg= narg - 2;
	V205 = (ALLOCA_CONS(narg),ON_STACK_MAKE_LIST(narg));
	V197= V205;
	{
	parse_key_rest_new(V205,narg,Vcs +3,(struct key *)(void *)&LI26key,first,ap);
	V198=(Vcs[3]);
	V199=(Vcs[4]);
	V200=(Vcs[5]);
	V201=(Vcs[6]);
	V202=(Vcs[7]);
	V203=(Vcs[8]);
	V204=(Vcs[9]);
	{register object V206;
	V206= Cnil;
	if(!(type_of((V196))==t_fixnum||type_of((V196))==t_bignum)){
	goto T341;}
	V196= make_cons((V196),Cnil);
	goto T341;
T341:;
	{register object x= VV[11],V207= (V197);
	while(!endp(V207))
	if(eql(x,V207->c.c_car)){
	V206= V207;
	goto T349;
	}else V207=V207->c.c_cdr;
	V206= Cnil;}
	goto T349;
T349:;
	if(((V206))==Cnil){
	goto T347;}
	base[0]= (V195);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk30)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T345;}
	base[0]= VV[13];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T345;
	goto T347;
T347:;
	base[0]= (V195);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk30)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T345;}
	{object V208;
	base[1]= (V195);
	vs_top=(vs_base=base+1)+1;
	Lfill_pointer();
	vs_top=sup;
	V208= vs_base[0];
	V197= ON_STACK_CONS((V208),(V197));}
	V197= ON_STACK_CONS(VV[11],(V197));
	goto T345;
T345:;
	base[0]= (V195);
	vs_top=(vs_base=base+0)+1;
	Larray_element_type();
	vs_top=sup;
	V198= vs_base[0];
	if(((V198))==(Ct)){
	goto T365;}
	V197= ON_STACK_CONS(V198,(V197));
	V197= ON_STACK_CONS(VV[8],(V197));
	goto T365;
T365:;
	{register object x= VV[14],V212= (V197);
	while(!endp(V212))
	if(eql(x,V212->c.c_car)){
	goto T371;
	}else V212=V212->c.c_cdr;}
	{object V213;
	base[1]= (V195);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk31)();
	vs_top=sup;
	V213= vs_base[0];
	V197= ON_STACK_CONS((V213),(V197));}
	V197= ON_STACK_CONS(VV[14],(V197));
	goto T371;
T371:;
	{register object V215;
	base[0]= (V196);
	base[1]= VV[15];
	base[2]= Ct;
	{object V216;
	V216= (V197);
	 vs_top=base+3;
	 while(!endp(V216))
	 {vs_push(car(V216));V216=cdr(V216);}
	vs_base=base+0;}
	(void) (*Lnk28)();
	vs_top=sup;
	V215= vs_base[0];
	if((cdr((V196)))==Cnil){
	goto T385;}
	V217= cdr((V196));
	V218= (*(LnkLI32))((V195));
	if(!(equal(/* INLINE-ARGS */V217,cdr(/* INLINE-ARGS */V218)))){
	goto T386;}
	if(!(((V198))==(VV[16]))){
	goto T385;}
	base[0]= (V196);
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V219= vs_base[0];
	{int V220= fix(car(V219));
	if(!((0)==((long)(V220>=0&&(8)>0?(V220)%(8):imod(V220,8))))){
	goto T386;}}
	goto T385;
T385:;
	base[0]= (V195);
	base[1]= (V215);
	base[2]= small_fixnum(0);
	base[3]= small_fixnum(0);
	base[5]= (V215);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	V221= vs_base[0];
	base[5]= (V195);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	V222= vs_base[0];
	base[4]= (number_compare(V221,V222)<=0?(V221):V222);
	vs_top=(vs_base=base+0)+5;
	(void) (*Lnk34)();
	vs_top=sup;
	goto T384;
	goto T386;
T386:;
	{register object V223;
	base[0]= make_fixnum((long)length((V196)));
	base[1]= VV[7];
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+0)+3;
	Lmake_list();
	vs_top=sup;
	V223= vs_base[0];
	goto T410;
T410:;
	base[0]= (V195);
	{object V224;
	V224= (V223);
	 vs_top=base+1;
	 while(!endp(V224))
	 {vs_push(car(V224));V224=cdr(V224);}
	vs_base=base+0;}
	(void) (*Lnk35)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T413;}
	base[0]= (V215);
	base[2]= (V195);
	{object V225;
	V225= (V223);
	 vs_top=base+3;
	 while(!endp(V225))
	 {vs_push(car(V225));V225=cdr(V225);}
	vs_base=base+2;}
	Laref();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= (V223);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk26)();
	vs_top=sup;
	goto T413;
T413:;
	if(((*(LnkLI27))((V223),(V196)))==Cnil){
	goto T423;}
	goto T384;
	goto T423;
T423:;
	goto T410;}
	goto T384;
T384:;
	base[0]= (V195);
	base[1]= (V215);
	vs_top=(vs_base=base+0)+2;
	siLreplace_array();
	vs_top=sup;
	V206= cadr((V206));
	if(((V206))==Cnil){
	goto T433;}
	if(!(eql(Ct,(V206)))){
	goto T437;}
	base[0]= (V195);
	base[2]= (V195);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	goto T433;
	goto T437;
T437:;
	if(!(type_of((V206))==t_fixnum)){
	goto T443;}
	base[0]= (V195);
	base[1]= (V206);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	goto T433;
	goto T443;
T443:;
	base[0]= VV[17];
	base[1]= (V206);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T433;
T433:;
	{object V226 = (V195);
	VMR26(V226)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
static void LnkT35(){ call_or_link(VV[35],(void **)(void *)&Lnk35);} /* ARRAY-IN-BOUNDS-P */
static void LnkT34(){ call_or_link(VV[34],(void **)(void *)&Lnk34);} /* COPY-ARRAY-PORTION */
static void LnkT33(){ call_or_link(VV[33],(void **)(void *)&Lnk33);} /* ARRAY-TOTAL-SIZE */
static object  LnkTLI32(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[32],(void **)(void *)&LnkLI32,1,first,ap);va_end(ap);return V1;} /* ARRAY-DIMENSIONS */
static void LnkT28(){ call_or_link(VV[28],(void **)(void *)&Lnk28);} /* MAKE-ARRAY */
static void LnkT31(){ call_or_link(VV[31],(void **)(void *)&Lnk31);} /* STATICP */
static void LnkT30(){ call_or_link(VV[30],(void **)(void *)&Lnk30);} /* ARRAY-HAS-FILL-POINTER-P */
static object  LnkTLI29(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[29],(void **)(void *)&LnkLI29,first,ap);va_end(ap);return V1;} /* ADJUST-ARRAY */
static object  LnkTLI28(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[28],(void **)(void *)&LnkLI28,first,ap);va_end(ap);return V1;} /* MAKE-ARRAY */
static object  LnkTLI27(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[27],(void **)(void *)&LnkLI27,2,first,ap);va_end(ap);return V1;} /* INCREMENT-CURSOR */
static void LnkT26(){ call_or_link(VV[26],(void **)(void *)&Lnk26);} /* ASET-BY-CURSOR */
static object  LnkTLI25(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[25],(void **)(void *)&LnkLI25,2,first,ap);va_end(ap);return V1;} /* SEQUENCE-CURSOR */
static void LnkT24(){ call_or_link(VV[24],(void **)(void *)&Lnk24);} /* MAKE-ARRAY1 */
static void LnkT23(){ call_or_link(VV[23],(void **)(void *)&Lnk23);} /* GET-AELTTYPE */
static object  LnkTLI19(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[19],(void **)(void *)&LnkLI19,1,first,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static void LnkT18(){ call_or_link(VV[18],(void **)(void *)&Lnk18);} /* SUBTYPEP */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

