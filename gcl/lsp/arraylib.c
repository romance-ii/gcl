
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
/*	function definition for UPGRADED-ARRAY-ELEMENT-TYPE	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	{object V16;
	object V17;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V16=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T55;}
	V17=(base[1]);
	vs_top=sup;
	goto T56;
	goto T55;
T55:;
	V17= Cnil;
	goto T56;
T56:;
	base[2]= (*(LnkLI19))((V16));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local entry for function MAKE-ARRAY	*/

static object LI3(object V18,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB3 VMS3 VMV3
	{register object V19;
	object V20;
	object V21;
	register object V22;
	object V23;
	object V24;
	object V25;
	object V26;
	object V27;
	object V28;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V19= V18;
	narg= narg - 1;
	{
	parse_key_new_new(narg,Vcs +1,(struct key *)(void *)&LI3key,first,ap);
	if(Vcs[1]==0){
	V20= Ct;
	}else{
	V20=(Vcs[1]);}
	V21=(Vcs[2]);
	if(Vcs[3]==0){
	V22= Cnil;
	V23= Cnil;
	}else{
	V22=(Vcs[3]);
	V23= Ct;}
	V24=(Vcs[4]);
	V25=(Vcs[5]);
	V26=(Vcs[6]);
	V27=(Vcs[7]);
	V28=(Vcs[8]);
	if(!(type_of((V19))==t_fixnum||type_of((V19))==t_bignum)){
	goto T60;}
	V19= make_cons((V19),Cnil);
	goto T60;
T60:;
	V20= (*(LnkLI19))((V20));
	if(!(((long)length((V19)))==(1))){
	goto T67;}
	{register object V29;
	base[0]= (V20);
	base[1]= car((V19));
	base[2]= (V24);
	base[3]= (V25);
	base[4]= (V26);
	base[5]= (V27);
	base[6]= (V28);
	base[7]= (V21);
	vs_top=(vs_base=base+0)+8;
	siLmake_vector();
	vs_top=sup;
	V29= vs_base[0];
	if(((V23))==Cnil){
	goto T78;}
	{long V30;
	register long V31;
	V30= fix(car((V19)));
	V31= 0;
	goto T84;
T84:;
	if(!((V31)>=(V30))){
	goto T85;}
	goto T78;
	goto T85;
T85:;
	V32= elt((V22),V31);
	(void)(aset1((V29),V31,/* INLINE-ARGS */V32));
	V31= (long)(V31)+1;
	goto T84;}
	goto T78;
T78:;
	{object V33 = (V29);
	VMR3(V33)}}
	goto T67;
T67:;
	{register object V34;
	base[1]= (V20);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk23)();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V28);
	base[2]= (V21);
	base[3]= (V26);
	base[4]= (V27);
	base[5]= (V19);
	vs_top=(vs_base=base+0)+6;
	(void) (*Lnk24)();
	vs_top=sup;
	V34= vs_base[0];
	if(((V25))==Cnil){
	goto T101;}
	base[0]= VV[6];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T101;
T101:;
	{register object x= small_fixnum(0),V35= (V19);
	while(!endp(V35))
	if(eql(x,V35->c.c_car)){
	goto T105;
	}else V35=V35->c.c_cdr;}
	if(((V23))==Cnil){
	goto T105;}
	{register object V36;
	base[0]= make_fixnum((long)length((V19)));
	base[1]= VV[7];
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+0)+3;
	Lmake_list();
	vs_top=sup;
	V36= vs_base[0];
	goto T115;
T115:;
	base[0]= (V34);
	base[1]= (*(LnkLI25))((V22),(V36));
	base[2]= (V36);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk26)();
	vs_top=sup;
	if(((*(LnkLI27))((V36),(V19)))==Cnil){
	goto T122;}
	goto T105;
	goto T122;
T122:;
	goto T115;}
	goto T105;
T105:;
	{object V37 = (V34);
	VMR3(V37)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function INCREMENT-CURSOR	*/

static object LI4(V40,V41)

register object V40;object V41;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if(((V40))!=Cnil){
	goto T128;}
	{object V42 = Ct;
	VMR4(V42)}
	goto T128;
T128:;
	{object V43;
	V43= (*(LnkLI27))(cdr((V40)),cdr((V41)));
	if(((V43))==Cnil){
	goto T132;}
	if(!(((long)(fix(car((V40))))+1)>=(fix(car((V41)))))){
	goto T135;}
	if(type_of((V40))!=t_cons)FEwrong_type_argument(Scons,(V40));
	((V40))->c.c_car = small_fixnum(0);
	{object V44 = Ct;
	VMR4(V44)}
	goto T135;
T135:;
	V45 = make_fixnum((long)(fix(car((V40))))+1);
	if(type_of((V40))!=t_cons)FEwrong_type_argument(Scons,(V40));
	((V40))->c.c_car = V45;
	{object V46 = Cnil;
	VMR4(V46)}
	goto T132;
T132:;
	{object V47 = Cnil;
	VMR4(V47)}}
	return Cnil;
}
/*	local entry for function SEQUENCE-CURSOR	*/

static object LI5(V50,V51)

object V50;object V51;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	if(((V51))!=Cnil){
	goto T140;}
	{object V52 = (V50);
	VMR5(V52)}
	goto T140;
T140:;
	V50= elt((V50),fix(car((V51))));
	V51= cdr((V51));
	goto TTL;
	return Cnil;
}
/*	local entry for function VECTOR	*/

static object LI6(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	{object V53;
	va_start(ap,first);
	narg= narg - 0;
	V54 = (ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));
	V53= V54;
	{object V55;
	V56 = make_fixnum((long)length((V53)));
	V55= make_cons(V56,Cnil);
	{object V57 = (VFUN_NARGS=5,(*(LnkLI28))((V55),VV[8],Ct,VV[9],(V53)));
	VMR6(V57)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function ARRAY-DIMENSIONS	*/

static object LI7(V59)

register object V59;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V60;
	register object V61;
	base[0]= (V59);
	vs_top=(vs_base=base+0)+1;
	Larray_rank();
	vs_top=sup;
	V60= vs_base[0];
	V61= Cnil;
	goto T149;
T149:;
	if(!(number_compare((V60),small_fixnum(0))==0)){
	goto T150;}
	{object V62 = (V61);
	VMR7(V62)}
	goto T150;
T150:;
	V60= one_minus((V60));
	base[0]= (V59);
	base[1]= (V60);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V63= vs_base[0];
	V61= make_cons(V63,(V61));
	goto T149;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ARRAY-IN-BOUNDS-P	*/

static object LI8(object V64,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB8 VMS8 VMV8
	{register object V65;
	object V66;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V65= V64;
	narg= narg - 1;
	V67 = (ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));
	V66= V67;
	{register object V68;
	base[1]= (V65);
	vs_top=(vs_base=base+1)+1;
	Larray_rank();
	vs_top=sup;
	V68= vs_base[0];
	V69 = make_fixnum((long)length((V66)));
	if(!(number_compare((V68),V69)!=0)){
	goto T165;}
	base[1]= VV[10];
	base[2]= (V68);
	base[3]= make_fixnum((long)length((V66)));
	vs_top=(vs_base=base+1)+3;
	Lerror();
	vs_top=sup;
	goto T165;
T165:;
	{register object V70;
	register object V71;
	V70= small_fixnum(0);
	V71= (V66);
	goto T172;
T172:;
	if(!(number_compare((V70),(V68))>=0)){
	goto T173;}
	{object V72 = Ct;
	VMR8(V72)}
	goto T173;
T173:;
	if(number_compare(car((V71)),small_fixnum(0))<0){
	goto T178;}
	V73= car((V71));
	base[1]= (V65);
	base[2]= (V70);
	vs_top=(vs_base=base+1)+2;
	Larray_dimension();
	vs_top=sup;
	V74= vs_base[0];
	if(!(number_compare(/* INLINE-ARGS */V73,V74)>=0)){
	goto T177;}
	goto T178;
T178:;
	{object V75 = Cnil;
	VMR8(V75)}
	goto T177;
T177:;
	V70= one_plus((V70));
	V71= cdr((V71));
	goto T172;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function ARRAY-ROW-MAJOR-INDEX	*/

static object LI9(object V76,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{register object V77;
	object V78;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V77= V76;
	narg= narg - 1;
	V79 = (ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));
	V78= V79;
	{register object V80;
	register object V81;
	register object V82;
	V80= small_fixnum(0);
	V81= small_fixnum(0);
	V82= (V78);
	goto T190;
T190:;
	if(((V82))!=Cnil){
	goto T191;}
	{object V83 = (V81);
	VMR9(V83)}
	goto T191;
T191:;
	{object V84;
	V84= one_plus((V80));
	base[0]= (V77);
	base[1]= (V80);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V85= vs_base[0];
	V86= number_times((V81),V85);
	V81= number_plus(/* INLINE-ARGS */V86,car((V82)));
	V82= cdr((V82));
	V80= (V84);}
	goto T190;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT	*/

static object LI10(object V87,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V88;
	object V89;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V88= V87;
	narg= narg - 1;
	V90 = (ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));
	V89= V90;
	base[0]= (V88);
	{object V91;
	V91= (V89);
	 vs_top=base+1;
	 while(!endp(V91))
	 {vs_push(car(V91));V91=cdr(V91);}
	vs_base=base+0;}
	Laref();
	vs_top=sup;
	{object V92 = vs_base[0];
	VMR10(V92)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SBIT	*/

static object LI11(object V93,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V94;
	object V95;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V94= V93;
	narg= narg - 1;
	V96 = (ALLOCA_CONS(narg),ON_STACK_LIST_VECTOR_NEW(narg,first,ap));
	V95= V96;
	base[0]= (V94);
	{object V97;
	V97= (V95);
	 vs_top=base+1;
	 while(!endp(V97))
	 {vs_push(car(V97));V97=cdr(V97);}
	vs_base=base+0;}
	Laref();
	vs_top=sup;
	{object V98 = vs_base[0];
	VMR11(V98)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-AND	*/

static object LI12(object V100,object V99,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V101;
	object V102;
	object V103;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V101= V100;
	V102= V99;
	narg = narg - 2;
	if (narg <= 0) goto T207;
	else {
	V103= first;}
	--narg; goto T208;
	goto T207;
T207:;
	V103= Cnil;
	goto T208;
T208:;
	base[0]= small_fixnum(1);
	base[1]= (V101);
	base[2]= (V102);
	base[3]= (V103);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V104 = vs_base[0];
	VMR12(V104)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-IOR	*/

static object LI13(object V106,object V105,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB13 VMS13 VMV13
	{object V107;
	object V108;
	object V109;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V107= V106;
	V108= V105;
	narg = narg - 2;
	if (narg <= 0) goto T214;
	else {
	V109= first;}
	--narg; goto T215;
	goto T214;
T214:;
	V109= Cnil;
	goto T215;
T215:;
	base[0]= small_fixnum(7);
	base[1]= (V107);
	base[2]= (V108);
	base[3]= (V109);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V110 = vs_base[0];
	VMR13(V110)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-XOR	*/

static object LI14(object V112,object V111,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB14 VMS14 VMV14
	{object V113;
	object V114;
	object V115;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V113= V112;
	V114= V111;
	narg = narg - 2;
	if (narg <= 0) goto T221;
	else {
	V115= first;}
	--narg; goto T222;
	goto T221;
T221:;
	V115= Cnil;
	goto T222;
T222:;
	base[0]= small_fixnum(6);
	base[1]= (V113);
	base[2]= (V114);
	base[3]= (V115);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V116 = vs_base[0];
	VMR14(V116)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-EQV	*/

static object LI15(object V118,object V117,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB15 VMS15 VMV15
	{object V119;
	object V120;
	object V121;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V119= V118;
	V120= V117;
	narg = narg - 2;
	if (narg <= 0) goto T228;
	else {
	V121= first;}
	--narg; goto T229;
	goto T228;
T228:;
	V121= Cnil;
	goto T229;
T229:;
	base[0]= small_fixnum(9);
	base[1]= (V119);
	base[2]= (V120);
	base[3]= (V121);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V122 = vs_base[0];
	VMR15(V122)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-NAND	*/

static object LI16(object V124,object V123,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB16 VMS16 VMV16
	{object V125;
	object V126;
	object V127;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V125= V124;
	V126= V123;
	narg = narg - 2;
	if (narg <= 0) goto T235;
	else {
	V127= first;}
	--narg; goto T236;
	goto T235;
T235:;
	V127= Cnil;
	goto T236;
T236:;
	base[0]= small_fixnum(14);
	base[1]= (V125);
	base[2]= (V126);
	base[3]= (V127);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V128 = vs_base[0];
	VMR16(V128)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-NOR	*/

static object LI17(object V130,object V129,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB17 VMS17 VMV17
	{object V131;
	object V132;
	object V133;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V131= V130;
	V132= V129;
	narg = narg - 2;
	if (narg <= 0) goto T242;
	else {
	V133= first;}
	--narg; goto T243;
	goto T242;
T242:;
	V133= Cnil;
	goto T243;
T243:;
	base[0]= small_fixnum(8);
	base[1]= (V131);
	base[2]= (V132);
	base[3]= (V133);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V134 = vs_base[0];
	VMR17(V134)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-ANDC1	*/

static object LI18(object V136,object V135,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB18 VMS18 VMV18
	{object V137;
	object V138;
	object V139;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V137= V136;
	V138= V135;
	narg = narg - 2;
	if (narg <= 0) goto T249;
	else {
	V139= first;}
	--narg; goto T250;
	goto T249;
T249:;
	V139= Cnil;
	goto T250;
T250:;
	base[0]= small_fixnum(4);
	base[1]= (V137);
	base[2]= (V138);
	base[3]= (V139);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V140 = vs_base[0];
	VMR18(V140)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-ANDC2	*/

static object LI19(object V142,object V141,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB19 VMS19 VMV19
	{object V143;
	object V144;
	object V145;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V143= V142;
	V144= V141;
	narg = narg - 2;
	if (narg <= 0) goto T256;
	else {
	V145= first;}
	--narg; goto T257;
	goto T256;
T256:;
	V145= Cnil;
	goto T257;
T257:;
	base[0]= small_fixnum(2);
	base[1]= (V143);
	base[2]= (V144);
	base[3]= (V145);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V146 = vs_base[0];
	VMR19(V146)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-ORC1	*/

static object LI20(object V148,object V147,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB20 VMS20 VMV20
	{object V149;
	object V150;
	object V151;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V149= V148;
	V150= V147;
	narg = narg - 2;
	if (narg <= 0) goto T263;
	else {
	V151= first;}
	--narg; goto T264;
	goto T263;
T263:;
	V151= Cnil;
	goto T264;
T264:;
	base[0]= small_fixnum(13);
	base[1]= (V149);
	base[2]= (V150);
	base[3]= (V151);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V152 = vs_base[0];
	VMR20(V152)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-ORC2	*/

static object LI21(object V154,object V153,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB21 VMS21 VMV21
	{object V155;
	object V156;
	object V157;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V155= V154;
	V156= V153;
	narg = narg - 2;
	if (narg <= 0) goto T270;
	else {
	V157= first;}
	--narg; goto T271;
	goto T270;
T270:;
	V157= Cnil;
	goto T271;
T271:;
	base[0]= small_fixnum(11);
	base[1]= (V155);
	base[2]= (V156);
	base[3]= (V157);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V158 = vs_base[0];
	VMR21(V158)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BIT-NOT	*/

static object LI22(object V159,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB22 VMS22 VMV22
	{object V160;
	object V161;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V160= V159;
	narg = narg - 1;
	if (narg <= 0) goto T277;
	else {
	V161= first;}
	--narg; goto T278;
	goto T277;
T277:;
	V161= Cnil;
	goto T278;
T278:;
	base[0]= small_fixnum(12);
	base[1]= (V160);
	base[2]= (V160);
	base[3]= (V161);
	vs_top=(vs_base=base+0)+4;
	siLbit_array_op();
	vs_top=sup;
	{object V162 = vs_base[0];
	VMR22(V162)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function VECTOR-PUSH	*/

static object LI23(V165,V166)

object V165;register object V166;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	{register long V167;
	base[0]= (V166);
	vs_top=(vs_base=base+0)+1;
	Lfill_pointer();
	vs_top=sup;
	V167= fix(vs_base[0]);
	base[0]= (V166);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V168= vs_base[0];
	if(!((V167)<(fix(V168)))){
	goto T287;}
	(void)(aset1((V166),V167,(V165)));
	base[0]= (V166);
	base[1]= make_fixnum((long)(V167)+1);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	{object V169 = make_fixnum(V167);
	VMR23(V169)}
	goto T287;
T287:;
	{object V170 = Cnil;
	VMR23(V170)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VECTOR-PUSH-EXTEND	*/

static object LI24(object V172,object V171,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB24 VMS24 VMV24
	{object V173;
	register object V174;
	object V175;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V173= V172;
	V174= V171;
	narg = narg - 2;
	if (narg <= 0) goto T296;
	else {
	V175= first;}
	--narg; goto T297;
	goto T296;
T296:;
	V175= Cnil;
	goto T297;
T297:;
	{register long V176;
	base[0]= (V174);
	vs_top=(vs_base=base+0)+1;
	Lfill_pointer();
	vs_top=sup;
	V176= fix(vs_base[0]);
	base[0]= (V174);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V177= vs_base[0];
	if(!((V176)<(fix(V177)))){
	goto T302;}
	(void)(aset1((V174),V176,(V173)));
	base[0]= (V174);
	base[1]= make_fixnum((long)(V176)+1);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	{object V178 = make_fixnum(V176);
	VMR24(V178)}
	goto T302;
T302:;
	base[0]= (V174);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V179= vs_base[0];
	if((V175)!=Cnil){
	V180= (V175);
	goto T315;}
	base[0]= (V174);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V181= vs_base[0];
	if(!((fix(V181))>(0))){
	goto T317;}
	base[0]= (V174);
	base[1]= small_fixnum(0);
	vs_top=(vs_base=base+0)+2;
	Larray_dimension();
	vs_top=sup;
	V180= vs_base[0];
	goto T315;
	goto T317;
T317:;
	V180= small_fixnum(5);
	goto T315;
T315:;
	V182= number_plus(V179,V180);
	V183= make_cons(/* INLINE-ARGS */V182,Cnil);
	base[0]= (V174);
	vs_top=(vs_base=base+0)+1;
	Larray_element_type();
	vs_top=sup;
	V184= vs_base[0];
	V185 = make_fixnum(V176);
	(void)((VFUN_NARGS=6,(*(LnkLI29))((V174),/* INLINE-ARGS */V183,VV[8],V184,VV[11],V185)));
	(void)(aset1((V174),V176,(V173)));
	base[0]= (V174);
	base[1]= make_fixnum((long)(V176)+1);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	{object V186 = make_fixnum(V176);
	VMR24(V186)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function VECTOR-POP	*/

static object LI25(V188)

register object V188;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{long V189;
	base[0]= (V188);
	vs_top=(vs_base=base+0)+1;
	Lfill_pointer();
	vs_top=sup;
	V189= fix(vs_base[0]);
	if(!((V189)==(0))){
	goto T332;}
	base[0]= VV[12];
	base[1]= (V188);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T332;
T332:;
	base[0]= (V188);
	base[1]= make_fixnum((long)(V189)-1);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	{object V190 = aref1((V188),(long)(V189)-1);
	VMR25(V190)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADJUST-ARRAY	*/

static object LI26(object V192,object V191,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{register object V193;
	register object V194;
	register object V195;
	object V196;
	object V197;
	object V198;
	object V199;
	object V200;
	object V201;
	object V202;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V193= V192;
	V194= V191;
	narg= narg - 2;
	V203 = (ALLOCA_CONS(narg),ON_STACK_MAKE_LIST(narg));
	V195= V203;
	{
	parse_key_rest_new(V203,narg,Vcs +3,(struct key *)(void *)&LI26key,first,ap);
	V196=(Vcs[3]);
	V197=(Vcs[4]);
	V198=(Vcs[5]);
	V199=(Vcs[6]);
	V200=(Vcs[7]);
	V201=(Vcs[8]);
	V202=(Vcs[9]);
	{register object V204;
	V204= Cnil;
	if(!(type_of((V194))==t_fixnum||type_of((V194))==t_bignum)){
	goto T341;}
	V194= make_cons((V194),Cnil);
	goto T341;
T341:;
	{register object x= VV[11],V205= (V195);
	while(!endp(V205))
	if(eql(x,V205->c.c_car)){
	V204= V205;
	goto T349;
	}else V205=V205->c.c_cdr;
	V204= Cnil;}
	goto T349;
T349:;
	if(((V204))==Cnil){
	goto T347;}
	base[0]= (V193);
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
	base[0]= (V193);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk30)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T345;}
	{object V206;
	base[1]= (V193);
	vs_top=(vs_base=base+1)+1;
	Lfill_pointer();
	vs_top=sup;
	V206= vs_base[0];
	V195= ON_STACK_CONS((V206),(V195));}
	V195= ON_STACK_CONS(VV[11],(V195));
	goto T345;
T345:;
	base[0]= (V193);
	vs_top=(vs_base=base+0)+1;
	Larray_element_type();
	vs_top=sup;
	V196= vs_base[0];
	if(((V196))==(Ct)){
	goto T365;}
	V195= ON_STACK_CONS(V196,(V195));
	V195= ON_STACK_CONS(VV[8],(V195));
	goto T365;
T365:;
	{register object x= VV[14],V210= (V195);
	while(!endp(V210))
	if(eql(x,V210->c.c_car)){
	goto T371;
	}else V210=V210->c.c_cdr;}
	{object V211;
	base[1]= (V193);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk31)();
	vs_top=sup;
	V211= vs_base[0];
	V195= ON_STACK_CONS((V211),(V195));}
	V195= ON_STACK_CONS(VV[14],(V195));
	goto T371;
T371:;
	{register object V213;
	base[0]= (V194);
	base[1]= VV[15];
	base[2]= Ct;
	{object V214;
	V214= (V195);
	 vs_top=base+3;
	 while(!endp(V214))
	 {vs_push(car(V214));V214=cdr(V214);}
	vs_base=base+0;}
	(void) (*Lnk28)();
	vs_top=sup;
	V213= vs_base[0];
	if((cdr((V194)))==Cnil){
	goto T385;}
	V215= cdr((V194));
	V216= (*(LnkLI32))((V193));
	if(!(equal(/* INLINE-ARGS */V215,cdr(/* INLINE-ARGS */V216)))){
	goto T386;}
	if(!(((V196))==(VV[16]))){
	goto T385;}
	base[0]= (V194);
	vs_top=(vs_base=base+0)+1;
	Llast();
	vs_top=sup;
	V217= vs_base[0];
	{int V218= fix(car(V217));
	if(!((0)==((long)(V218>=0&&(8)>0?(V218)%(8):imod(V218,8))))){
	goto T386;}}
	goto T385;
T385:;
	base[0]= (V193);
	base[1]= (V213);
	base[2]= small_fixnum(0);
	base[3]= small_fixnum(0);
	base[5]= (V213);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	V219= vs_base[0];
	base[5]= (V193);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	V220= vs_base[0];
	base[4]= (number_compare(V219,V220)<=0?(V219):V220);
	vs_top=(vs_base=base+0)+5;
	(void) (*Lnk34)();
	vs_top=sup;
	goto T384;
	goto T386;
T386:;
	{register object V221;
	base[0]= make_fixnum((long)length((V194)));
	base[1]= VV[7];
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+0)+3;
	Lmake_list();
	vs_top=sup;
	V221= vs_base[0];
	goto T410;
T410:;
	base[0]= (V193);
	{object V222;
	V222= (V221);
	 vs_top=base+1;
	 while(!endp(V222))
	 {vs_push(car(V222));V222=cdr(V222);}
	vs_base=base+0;}
	(void) (*Lnk35)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T413;}
	base[0]= (V213);
	base[2]= (V193);
	{object V223;
	V223= (V221);
	 vs_top=base+3;
	 while(!endp(V223))
	 {vs_push(car(V223));V223=cdr(V223);}
	vs_base=base+2;}
	Laref();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= (V221);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk26)();
	vs_top=sup;
	goto T413;
T413:;
	if(((*(LnkLI27))((V221),(V194)))==Cnil){
	goto T423;}
	goto T384;
	goto T423;
T423:;
	goto T410;}
	goto T384;
T384:;
	base[0]= (V193);
	base[1]= (V213);
	vs_top=(vs_base=base+0)+2;
	siLreplace_array();
	vs_top=sup;
	V204= cadr((V204));
	if(((V204))==Cnil){
	goto T433;}
	if(!(eql(Ct,(V204)))){
	goto T437;}
	base[0]= (V193);
	base[2]= (V193);
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
	if(!(type_of((V204))==t_fixnum)){
	goto T443;}
	base[0]= (V193);
	base[1]= (V204);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;
	goto T433;
	goto T443;
T443:;
	base[0]= VV[17];
	base[1]= (V204);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T433;
T433:;
	{object V224 = (V193);
	VMR26(V224)}}}
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

