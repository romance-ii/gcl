
#include "cmpinclude.h"
#include "pcl_macros.h"
void init_pcl_macros(){do_init(VV);}
/*	macro definition for MEMQ	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[3]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(!endp(V1))invalid_macro_call();}
	base[4]= listA(4,VV[0],base[2],base[3],VV[1]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for ASSQ	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V2=base[0]->c.c_cdr;
	if(endp(V2))invalid_macro_call();
	base[2]= (V2->c.c_car);
	V2=V2->c.c_cdr;
	if(endp(V2))invalid_macro_call();
	base[3]= (V2->c.c_car);
	V2=V2->c.c_cdr;
	if(!endp(V2))invalid_macro_call();}
	base[4]= listA(4,VV[2],base[2],base[3],VV[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for RASSQ	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V3=base[0]->c.c_cdr;
	if(endp(V3))invalid_macro_call();
	base[2]= (V3->c.c_car);
	V3=V3->c.c_cdr;
	if(endp(V3))invalid_macro_call();
	base[3]= (V3->c.c_car);
	V3=V3->c.c_cdr;
	if(!endp(V3))invalid_macro_call();}
	base[4]= listA(4,VV[4],base[2],base[3],VV[5]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for DELQ	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V4=base[0]->c.c_cdr;
	if(endp(V4))invalid_macro_call();
	base[2]= (V4->c.c_car);
	V4=V4->c.c_cdr;
	if(endp(V4))invalid_macro_call();
	base[3]= (V4->c.c_car);
	V4=V4->c.c_cdr;
	if(!endp(V4))invalid_macro_call();}
	base[4]= listA(4,VV[6],base[2],base[3],VV[7]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for POSQ	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V5=base[0]->c.c_cdr;
	if(endp(V5))invalid_macro_call();
	base[2]= (V5->c.c_car);
	V5=V5->c.c_cdr;
	if(endp(V5))invalid_macro_call();
	base[3]= (V5->c.c_car);
	V5=V5->c.c_cdr;
	if(!endp(V5))invalid_macro_call();}
	base[4]= listA(4,VV[8],base[2],base[3],VV[9]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for NEQ	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V6=base[0]->c.c_cdr;
	if(endp(V6))invalid_macro_call();
	base[2]= (V6->c.c_car);
	V6=V6->c.c_cdr;
	if(endp(V6))invalid_macro_call();
	base[3]= (V6->c.c_car);
	V6=V6->c.c_cdr;
	if(!endp(V6))invalid_macro_call();}
	base[4]= list(2,VV[10],list(3,VV[11],base[2],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function MAKE-CAXR	*/

static object LI7(V9,V10)

object V9;object V10;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	if(!(number_compare((V9),small_fixnum(4))<0)){
	goto T2;}
	{object V11 = list(2,nth(fix((V9)),VV[12]),(V10));
	VMR7(V11)}
	goto T2;
T2:;
	V9= number_minus((V9),small_fixnum(4));
	V10= list(2,VV[13],(V10));
	goto TTL;
	return Cnil;
}
/*	local entry for function MAKE-CDXR	*/

static object LI8(V14,V15)

register object V14;object V15;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	if(!(number_compare(small_fixnum(0),(V14))==0)){
	goto T8;}
	{object V16 = (V15);
	VMR8(V16)}
	goto T8;
T8:;
	if(!(number_compare((V14),small_fixnum(5))<0)){
	goto T11;}
	{object V17 = list(2,nth(fix((V14)),VV[14]),(V15));
	VMR8(V17)}
	goto T11;
T11:;
	V14= number_minus((V14),small_fixnum(4));
	V15= list(2,VV[13],(V15));
	goto TTL;
	return Cnil;
}
/*	function definition for G1905	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[15];
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local entry for function TRUE	*/

static object LI10(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V18;
	va_start(ap,first);
	narg= narg - 0;
	V19 = list_vector_new(narg,first,ap);
	V18= V19;
	{object V20 = Ct;
	VMR10(V20)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function FALSE	*/

static object LI11(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	{object V21;
	va_start(ap,first);
	narg= narg - 0;
	V22 = list_vector_new(narg,first,ap);
	V21= V22;
	{object V23 = Cnil;
	VMR11(V23)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function ZERO	*/

static object LI12(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V24;
	va_start(ap,first);
	narg= narg - 0;
	V25 = list_vector_new(narg,first,ap);
	V24= V25;
	{object V26 = small_fixnum(0);
	VMR12(V26)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function MAKE-PLIST	*/

static object LI13(V29,V30)

object V29;object V30;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	if(((V30))!=Cnil){
	goto T17;}
	{object V31 = Cnil;
	VMR13(V31)}
	goto T17;
T17:;
	V32= CMPcar((V29));
	V33= CMPcar((V30));
	{object V34 = listA(3,/* INLINE-ARGS */V32,/* INLINE-ARGS */V33,(*(LnkLI130))(CMPcdr((V29)),CMPcdr((V30))));
	VMR13(V34)}
	return Cnil;
}
/*	local entry for function REMTAIL	*/

static object LI14(V37,V38)

object V37;object V38;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if(!(((V37))==((V38)))){
	goto T20;}
	{object V39 = Cnil;
	VMR14(V39)}
	goto T20;
T20:;
	V40= CMPcar((V37));
	V41= (*(LnkLI131))(CMPcdr((V37)),(V38));
	{object V42 = make_cons(/* INLINE-ARGS */V40,/* INLINE-ARGS */V41);
	VMR14(V42)}
	return Cnil;
}
/*	macro definition for ONCE-ONLY	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V43=base[0]->c.c_cdr;
	if(endp(V43))invalid_macro_call();
	base[2]= (V43->c.c_car);
	V43=V43->c.c_cdr;
	base[3]= V43;}
	{register object V44;
	register object V45;
	register object V46;
	register object V47;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V44= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V45= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V46= vs_base[0];
	V47= Cnil;
	{register object V48;
	register object V49;
	V48= base[2];
	V49= CMPcar((V48));
	goto T29;
T29:;
	if(!(((V48))==Cnil)){
	goto T30;}
	goto T25;
	goto T30;
T30:;
	{register object V50;
	V51= list(2,VV[18],(V49));
	V52= list(2,VV[19],(V49));
	V53= list(2,VV[21],(V49));
	V54= list(4,VV[17],/* INLINE-ARGS */V51,/* INLINE-ARGS */V52,list(3,VV[20],/* INLINE-ARGS */V53,list(3,VV[0],list(2,VV[22],(V49)),VV[23])));
	V55= list(2,(V44),VV[25]);
	V56= make_cons(/* INLINE-ARGS */V55,Cnil);
	V57= list(3,VV[26],(V44),(V45));
	V50= list(4,VV[16],/* INLINE-ARGS */V54,(V49),list(5,VV[24],/* INLINE-ARGS */V56,/* INLINE-ARGS */V57,list(3,VV[26],(V49),(V46)),(V44)));
	V47= make_cons((V50),(V47));}
	V48= CMPcdr((V48));
	V49= CMPcar((V48));
	goto T29;}
	goto T25;
T25:;
	V62= reverse((V47));
	{object V59;
	object V60= base[2];
	object V61= /* INLINE-ARGS */V62;
	if(V60==Cnil||V61==Cnil){
	V58= Cnil;
	goto T42;}
	base[4]=V59=MMcons(Cnil,Cnil);
	goto T43;
T43:;
	(V59->c.c_car)= list(2,(V60->c.c_car),(V61->c.c_car));
	if((V60=MMcdr(V60))==Cnil||(V61=MMcdr(V61))==Cnil){
	V58= base[4];
	goto T42;}
	V59=MMcdr(V59)=MMcons(Cnil,Cnil);
	goto T43;}
	goto T42;
T42:;
	V63= list(3,(V45),(V46),list(2,VV[28],listA(3,VV[24],V58,base[3])));
	V64= list(2,VV[33],(V45));
	base[4]= list(3,VV[27],/* INLINE-ARGS */V63,list(4,VV[29],VV[30],list(4,VV[31],VV[32],/* INLINE-ARGS */V64,list(2,VV[33],(V46))),VV[28]));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	function definition for EXTRACT-DECLARATIONS	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{register object V65;
	object V66;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V65=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T45;}
	V66=(base[1]);
	vs_top=sup;
	goto T46;
	goto T45;
T45:;
	V66= Cnil;
	goto T46;
T46:;
	{object V67;
	register object V68;
	register object V69;
	V67= Cnil;
	V68= Cnil;
	V69= Cnil;
	if(!(type_of(CMPcar((V65)))==t_string)){
	goto T48;}
	if((CMPcdr((V65)))==Cnil){
	goto T48;}
	{object V70;
	V70= CMPcar((V65));
	V65= CMPcdr((V65));
	V67= (V70);}
	goto T48;
T48:;
	goto T59;
T59:;
	if(((V65))!=Cnil){
	goto T61;}
	goto T57;
	goto T61;
T61:;
	V69= CMPcar((V65));
	goto T69;
T69:;
	if(type_of((V69))==t_cons||((V69))==Cnil){
	goto T72;}
	goto T57;
	goto T72;
T72:;
	if(!((CMPcar((V69)))==(VV[34]))){
	goto T75;}
	goto T67;
	goto T75;
T75:;
	{register object V71;
	object V72;
	base[2]= (V69);
	base[3]= (V66);
	vs_top=(vs_base=base+2)+2;
	Lmacroexpand_1();
	if(vs_base>=vs_top){vs_top=sup;goto T80;}
	V71= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T81;}
	V72= vs_base[0];
	vs_top=sup;
	goto T82;
	goto T80;
T80:;
	V71= Cnil;
	goto T81;
T81:;
	V72= Cnil;
	goto T82;
T82:;
	if(!(((V71))==((V69)))){
	goto T83;}
	if(((V72))==Cnil){
	goto T84;}
	goto T83;
T83:;
	V69= (V71);
	goto T70;
	goto T84;
T84:;
	goto T57;}
	goto T70;
T70:;
	goto T69;
	goto T67;
T67:;
	{object V73;
	V73= CMPcar((V65));
	V65= CMPcdr((V65));}
	{register object V74;
	register object V75;
	V74= CMPcdr((V69));
	V75= CMPcar((V74));
	goto T97;
T97:;
	if(!(((V74))==Cnil)){
	goto T98;}
	goto T60;
	goto T98;
T98:;
	V68= make_cons(V75,(V68));
	V74= CMPcdr((V74));
	V75= CMPcar((V74));
	goto T97;}
	goto T60;
T60:;
	goto T59;
	goto T57;
T57:;
	base[2]= (V67);
	if((V68)==Cnil){
	base[3]= Cnil;
	goto T111;}
	V77= nreverse((V68));
	V78= make_cons(VV[34],/* INLINE-ARGS */V77);
	base[3]= make_cons(/* INLINE-ARGS */V78,Cnil);
	goto T111;
T111:;
	base[4]= (V65);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	local entry for function GET-DECLARATION	*/

static object LI17(object V80,object V79,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB17 VMS17 VMV17
	{register object V81;
	object V82;
	register object V83;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V81= V80;
	V82= V79;
	narg = narg - 2;
	if (narg <= 0) goto T113;
	else {
	V83= first;}
	--narg; goto T114;
	goto T113;
T113:;
	V83= Cnil;
	goto T114;
T114:;
	{register object V84;
	register object V85;
	V84= (V82);
	V85= CMPcar((V84));
	goto T119;
T119:;
	if(!(((V84))==Cnil)){
	goto T120;}
	{object V86 = (V83);
	VMR17(V86)}
	goto T120;
T120:;
	{register object V87;
	register object V88;
	V87= CMPcdr((V85));
	V88= CMPcar((V87));
	goto T128;
T128:;
	if(!(((V87))==Cnil)){
	goto T129;}
	goto T124;
	goto T129;
T129:;
	if(!(type_of((V88))==t_cons)){
	goto T133;}
	if(!((CMPcar((V88)))==((V81)))){
	goto T133;}
	{object V89 = CMPcdr((V88));
	VMR17(V89)}
	goto T133;
T133:;
	V87= CMPcdr((V87));
	V88= CMPcar((V87));
	goto T128;}
	goto T124;
T124:;
	V84= CMPcdr((V84));
	V85= CMPcar((V84));
	goto T119;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for MAKE-KEYWORD	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{object V90;
	check_arg(1);
	V90=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= symbol_name((V90));
	base[2]= (VV[35]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lintern();
	return;
	}
}
/*	local entry for function STRING-APPEND	*/

static object LI19(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB19 VMS19 VMV19
	{register object V91;
	va_start(ap,first);
	narg= narg - 0;
	V92 = list_vector_new(narg,first,ap);
	V91= V92;
	base[0]= (V91);
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V91= vs_base[0];
	{register object V93;
	V93= (V91);
	goto T154;
T154:;
	if(((V93))!=Cnil){
	goto T155;}
	base[0]=VV[132]->s.s_gfdef;
	base[1]= VV[36];
	{object V94;
	V94= (V91);
	 vs_top=base+2;
	 while(V94!=Cnil)
	 {vs_push((V94)->c.c_car);V94=(V94)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk132)();
	vs_top=sup;
	{object V95 = vs_base[0];
	VMR19(V95)}
	goto T155;
T155:;
	V96= coerce_to_string(CMPcar((V93)));
	((V93))->c.c_car = /* INLINE-ARGS */V96;
	V93= CMPcdr((V93));
	goto T154;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for SYMBOL-APPEND	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{object V97;
	object V98;
	object V99;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V97=(base[0]);
	V98=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T165;}
	V99=(base[2]);
	vs_top=sup;
	goto T166;
	goto T165;
T165:;
	V99= (VV[37]->s.s_dbind);
	goto T166;
T166:;
	base[3]= (VFUN_NARGS=2,(*(LnkLI133))((V97),(V98)));
	base[4]= (V99);
	vs_top=(vs_base=base+3)+2;
	Lintern();
	return;
	}
}
/*	macro definition for CHECK-MEMBER	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V100=base[0]->c.c_cdr;
	if(endp(V100))invalid_macro_call();
	base[2]= (V100->c.c_car);
	V100=V100->c.c_cdr;
	if(endp(V100))invalid_macro_call();
	base[3]= (V100->c.c_car);
	V100=V100->c.c_cdr;
	{object V101=getf(V100,VV[39],OBJNULL);
	if(V101==OBJNULL){
	base[4]= (VV[134]->s.s_gfdef);
	} else {
	base[4]= V101;}}
	{object V102=getf(V100,VV[135],OBJNULL);
	if(V102==OBJNULL){
	base[5]= base[2];
	} else {
	base[5]= V102;}}
	check_other_key(V100,2,VV[39],VV[135]);}
	{register object V103;
	register object V104;
	object V105;
	V103= Cnil;
	V104= Cnil;
	{object V106;
	object V107;
	if(type_of(base[2])==t_symbol){
	goto T176;}
	if(type_of(base[2])==t_fixnum||
type_of(base[2])==t_bignum||
type_of(base[2])==t_ratio||
type_of(base[2])==t_shortfloat||
type_of(base[2])==t_longfloat||
type_of(base[2])==t_complex){
	goto T176;}
	if(!(type_of(base[2])==t_cons||(base[2])==Cnil)){
	goto T177;}
	{register object x= CMPcar(base[2]),V108= VV[38];
	while(V108!=Cnil)
	if(eql(x,V108->c.c_car)){
	goto T184;
	}else V108=V108->c.c_cdr;
	goto T177;}
	goto T184;
T184:;
	goto T176;
T176:;
	V106= base[2];
	goto T175;
	goto T177;
T177:;
	{object V109;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V109= vs_base[0];
	V103= make_cons(V109,(V103));
	V104= make_cons(base[2],(V104));
	V106= (V109);}
	goto T175;
T175:;
	if(type_of(base[3])==t_symbol){
	goto T191;}
	if(type_of(base[3])==t_fixnum||
type_of(base[3])==t_bignum||
type_of(base[3])==t_ratio||
type_of(base[3])==t_shortfloat||
type_of(base[3])==t_longfloat||
type_of(base[3])==t_complex){
	goto T191;}
	if(!(type_of(base[3])==t_cons||(base[3])==Cnil)){
	goto T192;}
	{register object x= CMPcar(base[3]),V112= VV[38];
	while(V112!=Cnil)
	if(eql(x,V112->c.c_car)){
	goto T199;
	}else V112=V112->c.c_cdr;
	goto T192;}
	goto T199;
T199:;
	goto T191;
T191:;
	V107= base[3];
	goto T190;
	goto T192;
T192:;
	{object V113;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V113= vs_base[0];
	V103= make_cons(V113,(V103));
	V104= make_cons(base[3],(V104));
	V107= (V113);}
	goto T190;
T190:;
	V116= list(5,VV[0],(V106),(V107),VV[39],base[4]);
	V105= list(3,VV[17],/* INLINE-ARGS */V116,list(5,VV[40],VV[41],list(2,VV[42],base[5]),(V106),(V107)));}
	V121= reverse((V103));
	V122= reverse((V104));
	{object V118;
	object V119= /* INLINE-ARGS */V121;
	object V120= /* INLINE-ARGS */V122;
	if(V119==Cnil||V120==Cnil){
	V117= Cnil;
	goto T205;}
	base[7]=V118=MMcons(Cnil,Cnil);
	goto T206;
T206:;
	(V118->c.c_car)= list(2,(V119->c.c_car),(V120->c.c_car));
	if((V119=MMcdr(V119))==Cnil||(V120=MMcdr(V120))==Cnil){
	V117= base[7];
	goto T205;}
	V118=MMcdr(V118)=MMcons(Cnil,Cnil);
	goto T206;}
	goto T205;
T205:;
	base[7]= list(3,VV[24],V117,(V105));
	vs_top=(vs_base=base+7)+1;
	return;}
}
/*	macro definition for ALIST-ENTRY	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V123=base[0]->c.c_cdr;
	if(endp(V123))invalid_macro_call();
	base[2]= (V123->c.c_car);
	V123=V123->c.c_cdr;
	if(endp(V123))invalid_macro_call();
	base[3]= (V123->c.c_car);
	V123=V123->c.c_cdr;
	if(endp(V123))invalid_macro_call();
	base[4]= (V123->c.c_car);
	V123=V123->c.c_cdr;
	if(!endp(V123))invalid_macro_call();}
	{register object V124;
	register object V125;
	object V126;
	V124= Cnil;
	V125= Cnil;
	{register object V127;
	object V128;
	if(type_of(base[2])==t_symbol){
	goto T212;}
	if(type_of(base[2])==t_fixnum||
type_of(base[2])==t_bignum||
type_of(base[2])==t_ratio||
type_of(base[2])==t_shortfloat||
type_of(base[2])==t_longfloat||
type_of(base[2])==t_complex){
	goto T212;}
	if(!(type_of(base[2])==t_cons||(base[2])==Cnil)){
	goto T213;}
	{register object x= CMPcar(base[2]),V129= VV[38];
	while(V129!=Cnil)
	if(eql(x,V129->c.c_car)){
	goto T220;
	}else V129=V129->c.c_cdr;
	goto T213;}
	goto T220;
T220:;
	goto T212;
T212:;
	V127= base[2];
	goto T211;
	goto T213;
T213:;
	{object V130;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V130= vs_base[0];
	V124= make_cons(V130,(V124));
	V125= make_cons(base[2],(V125));
	V127= (V130);}
	goto T211;
T211:;
	if(type_of(base[3])==t_symbol){
	goto T227;}
	if(type_of(base[3])==t_fixnum||
type_of(base[3])==t_bignum||
type_of(base[3])==t_ratio||
type_of(base[3])==t_shortfloat||
type_of(base[3])==t_longfloat||
type_of(base[3])==t_complex){
	goto T227;}
	if(!(type_of(base[3])==t_cons||(base[3])==Cnil)){
	goto T228;}
	{register object x= CMPcar(base[3]),V133= VV[38];
	while(V133!=Cnil)
	if(eql(x,V133->c.c_car)){
	goto T235;
	}else V133=V133->c.c_cdr;
	goto T228;}
	goto T235;
T235:;
	goto T227;
T227:;
	V128= base[3];
	goto T226;
	goto T228;
T228:;
	{object V134;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V134= vs_base[0];
	V124= make_cons(V134,(V124));
	V125= make_cons(base[3],(V125));
	V128= (V134);}
	goto T226;
T226:;
	V137= list(3,VV[43],(V128),(V127));
	V138= list(3,VV[45],(V127),list(3,VV[46],list(2,base[4],(V128)),(V127)));
	V126= list(3,VV[17],/* INLINE-ARGS */V137,list(3,VV[44],/* INLINE-ARGS */V138,list(2,VV[22],(V127))));}
	V143= reverse((V124));
	V144= reverse((V125));
	{object V140;
	object V141= /* INLINE-ARGS */V143;
	object V142= /* INLINE-ARGS */V144;
	if(V141==Cnil||V142==Cnil){
	V139= Cnil;
	goto T241;}
	base[6]=V140=MMcons(Cnil,Cnil);
	goto T242;
T242:;
	(V140->c.c_car)= list(2,(V141->c.c_car),(V142->c.c_car));
	if((V141=MMcdr(V141))==Cnil||(V142=MMcdr(V142))==Cnil){
	V139= base[6];
	goto T241;}
	V140=MMcdr(V140)=MMcons(Cnil,Cnil);
	goto T242;}
	goto T241;
T241:;
	base[6]= list(3,VV[24],V139,(V126));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	macro definition for PCL-DESTRUCTURING-BIND	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V145=base[0]->c.c_cdr;
	if(endp(V145))invalid_macro_call();
	base[2]= (V145->c.c_car);
	V145=V145->c.c_cdr;
	if(endp(V145))invalid_macro_call();
	base[3]= (V145->c.c_car);
	V145=V145->c.c_cdr;
	base[4]= V145;}
	{object V146;
	object V147;
	object V148;
	base[5]= base[4];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk136)();
	if(vs_base>=vs_top){vs_top=sup;goto T246;}
	V146= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T247;}
	V147= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T248;}
	V148= vs_base[0];
	vs_top=sup;
	goto T249;
	goto T246;
T246:;
	V146= Cnil;
	goto T247;
T247:;
	V147= Cnil;
	goto T248;
T248:;
	V148= Cnil;
	goto T249;
T249:;
	{object V149;
	object V150;
	base[5]= base[2];
	base[6]= base[3];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk137)();
	if(vs_base>=vs_top){vs_top=sup;goto T253;}
	V149= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T254;}
	V150= vs_base[0];
	vs_top=sup;
	goto T255;
	goto T253;
T253:;
	V149= Cnil;
	goto T254;
T254:;
	V150= Cnil;
	goto T255;
T255:;
	base[5]= (V147);
	base[6]= (V149);
	base[7]= make_cons(VV[47],(V148));
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V151= vs_base[0];
	base[5]= listA(3,VV[24],(V150),V151);
	vs_top=(vs_base=base+5)+1;
	return;}}
}
/*	function definition for DESTRUCTURE	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	bds_check;
	{object V152;
	object V153;
	check_arg(2);
	V152=(base[0]);
	V153=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V154;
	bds_bind(VV[48],Cnil);
	V154= Cnil;
	(VV[48]->s.s_dbind)= VV[49];
	V155= list(3,VV[50],VV[51],(V153));
	V154= make_cons(/* INLINE-ARGS */V155,Cnil);
	V153= VV[51];
	V156= (*(LnkLI138))((V152),(V153));
	V157= nreverse(/* INLINE-ARGS */V156);
	base[3]= nconc((V154),/* INLINE-ARGS */V157);
	base[5]= Cnil;
	base[6]= (VV[48]->s.s_dbind);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk6)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+3)+2;
	bds_unwind1;
	return;}
	}
}
/*	local entry for function DESTRUCTURE-INTERNAL	*/

static object LI25(V160,V161)

object V160;register object V161;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{object V162;
	register object V163;
	register object V164;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V162= vs_base[0];
	base[0]= small_fixnum(0);
	V163= Cnil;
	V164= Cnil;
	{register object V165;
	V165= (V160);
	goto T273;
T273:;
	if(((V165))!=Cnil){
	goto T274;}
	goto T271;
	goto T274;
T274:;
	V163= CMPcar((V165));
	if(!(type_of((V163))==t_symbol)){
	goto T280;}
	{register object x= (V163),V166= VV[52];
	while(V166!=Cnil)
	if(x==(V166->c.c_car)){
	goto T283;
	}else V166=V166->c.c_cdr;}
	(VV[48]->s.s_dbind)= make_cons(V163,(VV[48]->s.s_dbind));
	goto T283;
T283:;
	if((CMPcdr((V165)))!=Cnil){
	goto T288;}
	{object V168;
	base[2]= (V163);
	base[3]= (V161);
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	L26(base);
	vs_top=sup;
	V168= vs_base[0];
	V164= make_cons((V168),(V164));
	goto T278;}
	goto T288;
T288:;
	if(!(type_of(CMPcdr((V165)))==t_symbol)){
	goto T296;}
	{object V169;
	base[2]= (V163);
	base[3]= (V161);
	base[4]= CMPcdr((V165));
	vs_top=(vs_base=base+2)+3;
	L26(base);
	vs_top=sup;
	V169= vs_base[0];
	V164= make_cons((V169),(V164));}
	{object V170;
	V170= CMPcdr((V165));
	(VV[48]->s.s_dbind)= make_cons((V170),(VV[48]->s.s_dbind));}
	goto T271;
	goto T296;
T296:;
	{register object x= (V163),V171= VV[53];
	while(V171!=Cnil)
	if(x==(V171->c.c_car)){
	goto T309;
	}else V171=V171->c.c_cdr;
	goto T308;}
	goto T309;
T309:;
	base[0]= number_plus(base[0],small_fixnum(1));
	goto T278;
	goto T308;
T308:;
	{register object x= CMPcadr((V165)),V172= VV[54];
	while(V172!=Cnil)
	if(x==(V172->c.c_car)){
	goto T313;
	}else V172=V172->c.c_cdr;
	goto T312;}
	goto T313;
T313:;
	{object V173;
	base[2]= (V163);
	base[3]= (V161);
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	L26(base);
	vs_top=sup;
	V173= vs_base[0];
	V164= make_cons((V173),(V164));}
	base[0]= number_plus(base[0],small_fixnum(1));
	goto T278;
	goto T312;
T312:;
	{object V174;
	base[2]= (V163);
	base[3]= (V161);
	base[4]= (V161);
	vs_top=(vs_base=base+2)+3;
	L26(base);
	vs_top=sup;
	V174= vs_base[0];
	V164= make_cons((V174),(V164));
	goto T278;}
	goto T280;
T280:;
	{object V175;
	V176= list(2,(V162),Cnil);
	V177= make_cons(/* INLINE-ARGS */V176,Cnil);
	base[2]= (V162);
	base[3]= (V161);
	if(!(type_of(CMPcdr((V165)))==t_symbol)){
	goto T333;}
	base[4]= CMPcdr((V165));
	goto T331;
	goto T333;
T333:;
	base[4]= (V161);
	goto T331;
T331:;
	vs_top=(vs_base=base+2)+3;
	L26(base);
	vs_top=sup;
	V178= vs_base[0];
	if(!(type_of((V165))==t_cons)){
	goto T337;}
	V179= CMPcar((V165));
	goto T335;
	goto T337;
T337:;
	V179= (V165);
	goto T335;
T335:;
	V180= (*(LnkLI138))(V179,(V162));
	V175= listA(4,VV[24],/* INLINE-ARGS */V177,V178,nreverse(/* INLINE-ARGS */V180));
	V164= make_cons((V175),(V164));}
	if(!(type_of(CMPcdr((V165)))==t_symbol)){
	goto T278;}
	{object V181;
	V181= CMPcdr((V165));
	(VV[48]->s.s_dbind)= make_cons((V181),(VV[48]->s.s_dbind));}
	goto T271;
	goto T278;
T278:;
	V165= CMPcdr((V165));
	goto T273;}
	goto T271;
T271:;
	{object V182 = (V164);
	VMR25(V182)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for COLLECTING-ONCE	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V183=base[0]->c.c_cdr;
	{object V184=getf(V183,VV[139],OBJNULL);
	if(V184==OBJNULL){
	base[2]= Cnil;
	} else {
	base[2]= V184;}}
	check_other_key(V183,1,VV[139]);}
	V185= list(2,VV[57],base[2]);
	if(base[2]==Cnil){
	V186= Cnil;
	goto T349;}
	V186= VV[59];
	goto T349;
T349:;
	base[3]= list(3,VV[27],list(2,/* INLINE-ARGS */V185,list(2,VV[58],V186)),VV[60]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for DOPLIST	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V187=base[0]->c.c_cdr;
	if(endp(V187))invalid_macro_call();
	{object V188= (V187->c.c_car);
	if(endp(V188))invalid_macro_call();
	base[2]= (V188->c.c_car);
	V188=V188->c.c_cdr;
	if(endp(V188))invalid_macro_call();
	base[3]= (V188->c.c_car);
	V188=V188->c.c_cdr;
	if(!endp(V188))invalid_macro_call();}
	V187=V187->c.c_cdr;
	if(endp(V187))invalid_macro_call();
	base[4]= (V187->c.c_car);
	V187=V187->c.c_cdr;
	base[5]= V187;}
	{object V189;
	object V190;
	object V191;
	base[6]= base[5];
	base[7]= base[1];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk136)();
	if(vs_base>=vs_top){vs_top=sup;goto T353;}
	V189= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T354;}
	V190= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T355;}
	V191= vs_base[0];
	vs_top=sup;
	goto T356;
	goto T353;
T353:;
	V189= Cnil;
	goto T354;
T354:;
	V190= Cnil;
	goto T355;
T355:;
	V191= Cnil;
	goto T356;
T356:;
	V192= list(3,list(2,VV[61],base[4]),base[2],base[3]);
	V193= list(3,VV[50],base[2],VV[64]);
	V194= list(3,VV[50],base[3],VV[66]);
	V195= list(6,VV[62],VV[63],/* INLINE-ARGS */V193,VV[65],/* INLINE-ARGS */V194,make_cons(VV[44],(V191)));
	V196= make_cons(/* INLINE-ARGS */V195,Cnil);
	base[6]= listA(3,VV[24],/* INLINE-ARGS */V192,append((V190),/* INLINE-ARGS */V196));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	macro definition for IF*	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V197=base[0]->c.c_cdr;
	if(endp(V197))invalid_macro_call();
	base[2]= (V197->c.c_car);
	V197=V197->c.c_cdr;
	if(endp(V197))invalid_macro_call();
	base[3]= (V197->c.c_car);
	V197=V197->c.c_cdr;
	base[4]= V197;}
	base[5]= list(4,VV[16],base[2],base[3],make_cons(VV[44],base[4]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for DOLIST-CAREFULLY	*/

static void L30()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V198=base[0]->c.c_cdr;
	if(endp(V198))invalid_macro_call();
	{object V199= (V198->c.c_car);
	if(endp(V199))invalid_macro_call();
	base[2]= (V199->c.c_car);
	V199=V199->c.c_cdr;
	if(endp(V199))invalid_macro_call();
	base[3]= (V199->c.c_car);
	V199=V199->c.c_cdr;
	if(endp(V199))invalid_macro_call();
	base[4]= (V199->c.c_car);
	V199=V199->c.c_cdr;
	if(!endp(V199))invalid_macro_call();}
	V198=V198->c.c_cdr;
	base[5]= V198;}
	V200= list(2,base[2],Cnil);
	V201= list(2,/* INLINE-ARGS */V200,list(2,VV[67],base[3]));
	V202= listA(3,VV[44],list(3,VV[50],base[2],VV[70]),base[5]);
	base[6]= list(3,VV[24],/* INLINE-ARGS */V201,list(3,VV[62],VV[68],list(4,VV[16],VV[69],/* INLINE-ARGS */V202,make_cons(base[4],Cnil))));
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	macro definition for PRINTING-RANDOM-THING	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V203=base[0]->c.c_cdr;
	if(endp(V203))invalid_macro_call();
	{object V204= (V203->c.c_car);
	if(endp(V204))invalid_macro_call();
	base[2]= (V204->c.c_car);
	V204=V204->c.c_cdr;
	if(endp(V204))invalid_macro_call();
	base[3]= (V204->c.c_car);
	V204=V204->c.c_cdr;
	if(!endp(V204))invalid_macro_call();}
	V203=V203->c.c_cdr;
	base[4]= V203;}
	{register object V205;
	register object V206;
	object V207;
	V205= Cnil;
	V206= Cnil;
	{object V208;
	register object V209;
	if(type_of(base[2])==t_symbol){
	goto T361;}
	if(type_of(base[2])==t_fixnum||
type_of(base[2])==t_bignum||
type_of(base[2])==t_ratio||
type_of(base[2])==t_shortfloat||
type_of(base[2])==t_longfloat||
type_of(base[2])==t_complex){
	goto T361;}
	if(!(type_of(base[2])==t_cons||(base[2])==Cnil)){
	goto T362;}
	{register object x= CMPcar(base[2]),V210= VV[38];
	while(V210!=Cnil)
	if(eql(x,V210->c.c_car)){
	goto T369;
	}else V210=V210->c.c_cdr;
	goto T362;}
	goto T369;
T369:;
	goto T361;
T361:;
	V208= base[2];
	goto T360;
	goto T362;
T362:;
	{object V211;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V211= vs_base[0];
	V205= make_cons(V211,(V205));
	V206= make_cons(base[2],(V206));
	V208= (V211);}
	goto T360;
T360:;
	if(type_of(base[3])==t_symbol){
	goto T376;}
	if(type_of(base[3])==t_fixnum||
type_of(base[3])==t_bignum||
type_of(base[3])==t_ratio||
type_of(base[3])==t_shortfloat||
type_of(base[3])==t_longfloat||
type_of(base[3])==t_complex){
	goto T376;}
	if(!(type_of(base[3])==t_cons||(base[3])==Cnil)){
	goto T377;}
	{register object x= CMPcar(base[3]),V214= VV[38];
	while(V214!=Cnil)
	if(eql(x,V214->c.c_car)){
	goto T384;
	}else V214=V214->c.c_cdr;
	goto T377;}
	goto T384;
T384:;
	goto T376;
T376:;
	V209= base[3];
	goto T375;
	goto T377;
T377:;
	{object V215;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V215= vs_base[0];
	V205= make_cons(V215,(V205));
	V206= make_cons(base[3],(V206));
	V209= (V215);}
	goto T375;
T375:;
	V218= list(3,VV[71],(V209),VV[72]);
	V219= list(3,VV[71],(V209),VV[73]);
	V220= list(3,VV[74],(V208),(V209));
	V221= list(3,/* INLINE-ARGS */V219,/* INLINE-ARGS */V220,list(3,VV[71],(V209),VV[75]));
	V207= listA(3,VV[44],/* INLINE-ARGS */V218,append(base[4],/* INLINE-ARGS */V221));}
	V226= reverse((V205));
	V227= reverse((V206));
	{object V223;
	object V224= /* INLINE-ARGS */V226;
	object V225= /* INLINE-ARGS */V227;
	if(V224==Cnil||V225==Cnil){
	V222= Cnil;
	goto T390;}
	base[6]=V223=MMcons(Cnil,Cnil);
	goto T391;
T391:;
	(V223->c.c_car)= list(2,(V224->c.c_car),(V225->c.c_car));
	if((V224=MMcdr(V224))==Cnil||(V225=MMcdr(V225))==Cnil){
	V222= base[6];
	goto T390;}
	V223=MMcdr(V223)=MMcons(Cnil,Cnil);
	goto T391;}
	goto T390;
T390:;
	base[6]= list(3,VV[24],V222,(V207));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	local entry for function PRINTING-RANDOM-THING-INTERNAL	*/

static object LI32(V230,V231)

object V230;object V231;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{object V232 = Cnil;
	VMR31(V232)}
	return Cnil;
}
/*	local entry for function CAPITALIZE-WORDS	*/

static object LI33(object V233,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB32 VMS32 VMV32
	{object V234;
	register object V235;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V234= V233;
	narg = narg - 1;
	if (narg <= 0) goto T393;
	else {
	V235= first;}
	--narg; goto T394;
	goto T393;
T393:;
	V235= Ct;
	goto T394;
T394:;
	{register object V236;
	base[0]= coerce_to_string((V234));
	vs_top=(vs_base=base+0)+1;
	Lcopy_seq();
	vs_top=sup;
	V236= vs_base[0];
	{register object V237;
	register object V238;
	register object V239;
	register object V240;
	V237= Ct;
	V238= CMPmake_fixnum((long)((V236))->v.v_fillp);
	V239= Cnil;
	V240= small_fixnum(0);
	goto T403;
T403:;
	if(!(number_compare((V240),(V238))==0)){
	goto T404;}
	{object V241 = (V236);
	VMR32(V241)}
	goto T404;
T404:;
	V239= elt((V236),fix((V240)));
	base[1]= (V239);
	vs_top=(vs_base=base+1)+1;
	Lboth_case_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T412;}
	if(((V237))==Cnil){
	goto T417;}
	base[1]= (V239);
	vs_top=(vs_base=base+1)+1;
	Llower_case_p();
	vs_top=sup;
	V237= vs_base[0];
	if(((V237))!=Cnil){
	goto T419;}
	goto T415;
	goto T419;
T419:;
	base[1]= (V239);
	vs_top=(vs_base=base+1)+1;
	Lchar_upcase();
	vs_top=sup;
	V242= vs_base[0];
	(void)(elt_set((V236),fix((V240)),V242));
	goto T415;
	goto T417;
T417:;
	if(((V237))==Cnil){
	goto T425;}
	goto T415;
	goto T425;
T425:;
	base[1]= (V239);
	vs_top=(vs_base=base+1)+1;
	Lchar_downcase();
	vs_top=sup;
	V243= vs_base[0];
	(void)(elt_set((V236),fix((V240)),V243));
	goto T415;
T415:;
	V237= Cnil;
	goto T410;
	goto T412;
T412:;
	base[1]= (V239);
	base[2]= VV[76];
	vs_top=(vs_base=base+1)+2;
	Lchar_equal();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T431;}
	V237= Ct;
	if(((V235))!=Cnil){
	goto T410;}
	(void)(elt_set((V236),fix((V240)),VV[77]));
	goto T410;
	goto T431;
T431:;
	V237= Cnil;
	goto T410;
T410:;
	V240= number_plus((V240),small_fixnum(1));
	goto T403;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for DEFINE-COMPILER-MACRO	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V244=base[0]->c.c_cdr;
	if(endp(V244))invalid_macro_call();
	base[2]= (V244->c.c_car);
	V244=V244->c.c_cdr;
	if(endp(V244))invalid_macro_call();
	base[3]= (V244->c.c_car);
	V244=V244->c.c_cdr;
	base[4]= V244;}
	base[5]= listA(4,VV[78],base[2],base[3],base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function MAKE-CONSTANT-FUNCTION	*/

static object LI36(V246)

object V246;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	base[0]=MMcons((V246),Cnil);
	{object V247 = 
	make_cclosure_new(LC65,Cnil,base[0],Cdata);
	VMR34(V247)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FUNCTION-RETURNING-NIL	*/

static object LI37(V249)

object V249;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	{object V250 = Cnil;
	VMR35(V250)}
	return Cnil;
}
/*	local entry for function FUNCTION-RETURNING-T	*/

static object LI38(V252)

object V252;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	{object V253 = Ct;
	VMR36(V253)}
	return Cnil;
}
/*	macro definition for FIND-CLASS-CELL-CLASS	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V254=base[0]->c.c_cdr;
	if(endp(V254))invalid_macro_call();
	base[2]= (V254->c.c_car);
	V254=V254->c.c_cdr;
	if(!endp(V254))invalid_macro_call();}
	base[3]= list(2,VV[22],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for FIND-CLASS-CELL-PREDICATE	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V255=base[0]->c.c_cdr;
	if(endp(V255))invalid_macro_call();
	base[2]= (V255->c.c_car);
	V255=V255->c.c_cdr;
	if(!endp(V255))invalid_macro_call();}
	base[3]= list(2,VV[79],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for FIND-CLASS-CELL-MAKE-INSTANCE-FUNCTION-KEYS	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V256=base[0]->c.c_cdr;
	if(endp(V256))invalid_macro_call();
	base[2]= (V256->c.c_car);
	V256=V256->c.c_cdr;
	if(!endp(V256))invalid_macro_call();}
	base[3]= list(2,VV[80],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for MAKE-FIND-CLASS-CELL	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V257=base[0]->c.c_cdr;
	if(endp(V257))invalid_macro_call();
	base[2]= (V257->c.c_car);
	V257=V257->c.c_cdr;
	if(!endp(V257))invalid_macro_call();}
	base[3]= VV[81];
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function FIND-CLASS-CELL	*/

static object LI43(object V258,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB41 VMS41 VMV41
	{register object V259;
	object V260;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V259= V258;
	narg = narg - 1;
	if (narg <= 0) goto T449;
	else {
	V260= first;}
	--narg; goto T450;
	goto T449;
T449:;
	V260= Cnil;
	goto T450;
T450:;{object V261;
	base[0]= (V259);
	base[1]= (VV[82]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V261= vs_base[0];
	if(V261==Cnil)goto T452;
	{object V262 = V261;
	VMR41(V262)}
	goto T452;
T452:;}
	if(((V260))!=Cnil){
	goto T457;}
	if(((*(LnkLI140))((V259)))!=Cnil){
	goto T459;}
	base[0]= VV[83];
	base[1]= (V259);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T459;
T459:;
	{object V264;
	object V265;
	V264= (VV[82]->s.s_dbind);
	V266= (VV[141]->s.s_gfdef);
	V265= listA(3,Cnil,V266,Cnil);
	base[1]= V259;
	base[2]= (V264);
	base[3]= (V265);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;
	{object V267 = vs_base[0];
	VMR41(V267)}}
	goto T457;
T457:;
	{object V268 = Cnil;
	VMR41(V268)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function FIND-CLASS-FROM-CELL	*/

static object LI44(object V270,object V269,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB42 VMS42 VMV42
	{register object V271;
	object V272;
	object V273;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V271= V270;
	V272= V269;
	narg = narg - 2;
	if (narg <= 0) goto T470;
	else {
	V273= first;}
	--narg; goto T471;
	goto T470;
T470:;
	V273= Ct;
	goto T471;
T471:;{object V274;
	V274= CMPcar((V272));
	if(V274==Cnil)goto T473;
	{object V275 = V274;
	VMR42(V275)}
	goto T473;
T473:;}{object V276;
	if((VV[84]->s.s_dbind)==Cnil){
	V276= Cnil;
	goto T476;}
	if(((*(LnkLI142))((V271)))!=Cnil){
	goto T477;}
	V276= Cnil;
	goto T476;
	goto T477;
T477:;
	base[0]= (V271);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk143)();
	vs_top=sup;
	V276= vs_base[0];
	goto T476;
T476:;
	if(V276==Cnil)goto T475;
	{object V277 = V276;
	VMR42(V277)}
	goto T475;
T475:;}
	if(((V273))!=Cnil){
	goto T481;}
	{object V278 = Cnil;
	VMR42(V278)}
	goto T481;
T481:;
	if(((*(LnkLI140))((V271)))==Cnil){
	goto T484;}
	base[0]= VV[85];
	base[1]= (V271);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V279 = vs_base[0];
	VMR42(V279)}
	goto T484;
T484:;
	base[0]= VV[86];
	base[1]= (V271);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V280 = vs_base[0];
	VMR42(V280)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function FIND-CLASS-PREDICATE-FROM-CELL	*/

static object LI45(object V282,object V281,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB43 VMS43 VMV43
	{object V283;
	object V284;
	object V285;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V283= V282;
	V284= V281;
	narg = narg - 2;
	if (narg <= 0) goto T490;
	else {
	V285= first;}
	--narg; goto T491;
	goto T490;
T490:;
	V285= Ct;
	goto T491;
T491:;
	if((CMPcar((V284)))!=Cnil){
	goto T493;}
	(void)((VFUN_NARGS=3,(*(LnkLI144))((V283),(V284),(V285))));
	goto T493;
T493:;
	{object V286 = CMPcadr((V284));
	VMR43(V286)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function LEGAL-CLASS-NAME-P	*/

static object LI46(V288)

object V288;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	if(type_of((V288))==t_symbol){
	goto T496;}
	{object V289 = Cnil;
	VMR44(V289)}
	goto T496;
T496:;
	{object V290 = ((((type_of((V288))==t_symbol&&((V288))->s.s_hpack==keyword_package)?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR44(V290)}
	return Cnil;
}
/*	local entry for function FIND-CLASS	*/

static object LI47(object V291,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB45 VMS45 VMV45
	{object V292;
	object V293;
	object V294;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V292= V291;
	narg = narg - 1;
	if (narg <= 0) goto T498;
	else {
	V293= first;}
	if (--narg <= 0) goto T499;
	else {
	V294= va_arg(ap,object);}
	--narg; goto T500;
	goto T498;
T498:;
	V293= Ct;
	goto T499;
T499:;
	V294= Cnil;
	goto T500;
T500:;
	V295= (VFUN_NARGS=2,(*(LnkLI145))((V292),(V293)));
	{object V296 = (VFUN_NARGS=3,(*(LnkLI144))((V292),/* INLINE-ARGS */V295,(V293)));
	VMR45(V296)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function FIND-CLASS-PREDICATE	*/

static object LI48(object V297,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB46 VMS46 VMV46
	{object V298;
	object V299;
	object V300;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V298= V297;
	narg = narg - 1;
	if (narg <= 0) goto T503;
	else {
	V299= first;}
	if (--narg <= 0) goto T504;
	else {
	V300= va_arg(ap,object);}
	--narg; goto T505;
	goto T503;
T503:;
	V299= Ct;
	goto T504;
T504:;
	V300= Cnil;
	goto T505;
T505:;
	V301= (VFUN_NARGS=2,(*(LnkLI145))((V298),(V299)));
	{object V302 = (VFUN_NARGS=3,(*(LnkLI146))((V298),/* INLINE-ARGS */V301,(V299)));
	VMR46(V302)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function SETF PCL FIND-CLASS	*/

static object LI49(V305,V306)

register object V305;object V306;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	if(((*(LnkLI140))((V306)))==Cnil){
	goto T509;}
	{object V307;
	V307= (VFUN_NARGS=1,(*(LnkLI145))((V306)));
	(V307)->c.c_car = V305;
	if(((VV[87]->s.s_dbind))==(VV[88])){
	goto T514;}
	if(!(((VV[87]->s.s_dbind))==(VV[89]))){
	goto T515;}
	goto T514;
T514:;
	{object V311;
	base[2]= (V305);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk147)(Lclptr147);
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V311= vs_base[0];
	(CMPcdr(V307))->c.c_car = (V311);
	(void)(CMPcdr(V307));}
	if(((V305))==Cnil){
	goto T525;}
	base[0]= (V305);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk148)(Lclptr148);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T525;}
	{register object V312;
	register object V313;
	V312= CMPcddr((V307));
	V313= CMPcar((V312));
	goto T533;
T533:;
	if(!(((V312))==Cnil)){
	goto T534;}
	{object V314 = Cnil;
	VMR47(V314)}
	goto T534;
T534:;
	V315= (VFUN_NARGS=4,(*(LnkLI150))((V305),CMPcar((V313)),Cnil,CMPcdr((V313))));
	(void)((*(LnkLI149))(/* INLINE-ARGS */V315,VV[90]));
	V312= CMPcdr((V312));
	V313= CMPcar((V312));
	goto T533;}
	goto T525;
T525:;
	{object V316 = Cnil;
	VMR47(V316)}
	goto T515;
T515:;
	{object V317 = Cnil;
	VMR47(V317)}}
	goto T509;
T509:;
	base[0]= VV[91];
	base[1]= (V306);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V318 = vs_base[0];
	VMR47(V318)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SETF PCL FIND-CLASS-PREDICATE	*/

static object LI50(V321,V322)

object V321;object V322;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	if(((*(LnkLI140))((V322)))==Cnil){
	goto T547;}
	{object V323;
	V323= (VFUN_NARGS=1,(*(LnkLI145))((V322)));
	(CMPcdr((V323)))->c.c_car = V321;
	(void)(CMPcdr((V323)));
	{object V325 = V321;
	VMR48(V325)}}
	goto T547;
T547:;
	base[0]= VV[92];
	base[1]= (V322);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V326 = vs_base[0];
	VMR48(V326)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for FIND-WRAPPER	*/

static void L51()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	{object V327;
	check_arg(1);
	V327=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (VFUN_NARGS=1,(*(LnkLI151))((V327)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk152)(Lclptr152);
	return;
	}
}
/*	macro definition for GATHERING1	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V328=base[0]->c.c_cdr;
	if(endp(V328))invalid_macro_call();
	base[2]= (V328->c.c_car);
	V328=V328->c.c_cdr;
	base[3]= V328;}
	V329= list(2,VV[94],base[2]);
	V330= make_cons(/* INLINE-ARGS */V329,Cnil);
	base[4]= list(3,VV[93],/* INLINE-ARGS */V330,listA(3,VV[95],VV[96],base[3]));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for VECTORIZING	*/

static void L53()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V331=base[0]->c.c_cdr;
	{object V332=getf(V331,VV[153],OBJNULL);
	if(V332==OBJNULL){
	base[2]= small_fixnum(0);
	} else {
	base[2]= V332;}}
	check_other_key(V331,1,VV[153]);}
	V333= list(2,VV[97],base[2]);
	base[3]= list(3,VV[27],make_cons(/* INLINE-ARGS */V333,VV[98]),VV[99]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for *LIST-ELEMENTS	*/

static void L54()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V334=base[0]->c.c_cdr;
	if(endp(V334))invalid_macro_call();
	base[2]= (V334->c.c_car);
	V334=V334->c.c_cdr;
	{object V335=getf(V334,VV[154],OBJNULL);
	if(V335==OBJNULL){
	base[3]= (VV[55]->s.s_gfdef);
	} else {
	base[3]= V335;}}
	check_other_key(V334,1,VV[154]);}
	V336= list(2,VV[58],base[2]);
	V337= make_cons(/* INLINE-ARGS */V336,Cnil);
	base[4]= list(3,VV[24],/* INLINE-ARGS */V337,list(2,VV[100],list(3,VV[101],VV[102],list(4,VV[16],VV[103],VV[104],list(3,VV[105],VV[106],list(3,VV[50],VV[58],list(3,VV[107],base[3],VV[58])))))));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for *LIST-TAILS	*/

static void L55()
{register object *base=vs_base;
	register object *sup=base+VM53; VC53
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V338=base[0]->c.c_cdr;
	if(endp(V338))invalid_macro_call();
	base[2]= (V338->c.c_car);
	V338=V338->c.c_cdr;
	{object V339=getf(V338,VV[154],OBJNULL);
	if(V339==OBJNULL){
	base[3]= (VV[55]->s.s_gfdef);
	} else {
	base[3]= V339;}}
	check_other_key(V338,1,VV[154]);}
	V340= list(2,VV[58],base[2]);
	V341= make_cons(/* INLINE-ARGS */V340,Cnil);
	base[4]= list(3,VV[24],/* INLINE-ARGS */V341,list(2,VV[100],list(3,VV[101],VV[108],list(3,VV[105],VV[109],list(3,VV[50],VV[58],list(3,VV[107],base[3],VV[58]))))));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for FUNCTION-FUNCALL	*/

static void L56()
{register object *base=vs_base;
	register object *sup=base+VM54; VC54
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V342=base[0]->c.c_cdr;
	if(endp(V342))invalid_macro_call();
	base[2]= (V342->c.c_car);
	V342=V342->c.c_cdr;
	base[3]= V342;}
	base[4]= listA(3,VV[107],base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	macro definition for FUNCTION-APPLY	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V343=base[0]->c.c_cdr;
	if(endp(V343))invalid_macro_call();
	base[2]= (V343->c.c_car);
	V343=V343->c.c_cdr;
	base[3]= V343;}
	base[4]= listA(3,VV[110],base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function GET-SETF-FUNCTION-NAME	*/

static object LI58(V345)

register object V345;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;{object V346;
	base[0]= (V345);
	base[1]= (VV[111]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V346= vs_base[0];
	if(V346==Cnil)goto T557;
	{object V347 = V346;
	VMR56(V347)}
	goto T557;
T557:;}
	{object V349;
	object V350;
	V349= (VV[111]->s.s_dbind);
	{object V351;
	base[1]= (V345);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_package();
	vs_top=sup;
	V351= vs_base[0];
	if(((V351))==Cnil){
	goto T566;}
	base[2]= Cnil;
	base[3]= VV[112];
	base[5]= (V351);
	vs_top=(vs_base=base+5)+1;
	Lpackage_name();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= symbol_name((V345));
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= (VV[113]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lintern();
	vs_top=sup;
	V350= vs_base[0];
	goto T562;
	goto T566;
T566:;
	base[2]= Cnil;
	base[3]= VV[114];
	base[4]= symbol_name((V345));
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Lmake_symbol();
	vs_top=sup;
	V350= vs_base[0];}
	goto T562;
T562:;
	base[1]= V345;
	base[2]= (V349);
	base[3]= (V350);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;
	{object V352 = vs_base[0];
	VMR56(V352)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for DO-STANDARD-DEFSETF	*/

static void L59()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V353=base[0]->c.c_cdr;
	base[2]= V353;}
	base[3]= list(3,VV[115],VV[116],list(3,VV[117],list(2,VV[118],list(2,VV[42],base[2])),VV[119]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function DO-STANDARD-DEFSETFS-FOR-DEFCLASS	*/

static object LI60(V355)

object V355;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	{register object V356;
	register object V357;
	V356= (V355);
	V357= CMPcar((V356));
	goto T585;
T585:;
	if(!(((V356))==Cnil)){
	goto T586;}
	{object V358 = Cnil;
	VMR58(V358)}
	goto T586;
T586:;
	(void)((*(LnkLI155))((V357)));
	V356= CMPcdr((V356));
	V357= CMPcar((V356));
	goto T585;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DO-STANDARD-DEFSETF-1	*/

static object LI61(V360)

register object V360;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	if(((*(LnkLI156))((V360)))==Cnil){
	goto T596;}
	{object V361 =((V360))->s.s_plist;
	 object ind= VV[120];
	while(V361!=Cnil){
	if(V361->c.c_car==ind){
	if(((V361->c.c_cdr->c.c_car))!=Cnil){
	goto T597;}
	goto T600;
	}else V361=V361->c.c_cdr->c.c_cdr;}}
	goto T600;
T600:;
	goto T596;
T596:;
	(void)(sputprop((V360),VV[120],Ct));
	base[0]= (*(LnkLI157))((V360));
	base[0]=MMcons(base[0],Cnil);
	{object V362;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V362= vs_base[0];
	{object V364;
	V364= 
	make_cclosure_new(LC66,Cnil,base[0],Cdata);
	base[2]= V362;
	base[3]= make_cons(VV[121],(V364));
	vs_top=(vs_base=base+2)+2;
	siLfset();
	vs_top=sup;}
	base[1]= list(3,VV[122],(V360),(V362));
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	{object V365 = vs_base[0];
	VMR59(V365)}}
	goto T597;
T597:;
	{object V366 = Cnil;
	VMR59(V366)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SETFBOUNDP	*/

static object LI62(V368)

object V368;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;{object V369;
	{object V370 =((V368))->s.s_plist;
	 object ind= VV[123];
	while(V370!=Cnil){
	if(V370->c.c_car==ind){
	V369= (V370->c.c_cdr->c.c_car);
	goto T611;
	}else V370=V370->c.c_cdr->c.c_cdr;}
	V369= Cnil;}
	goto T611;
T611:;
	if(V369==Cnil)goto T610;
	{object V371 = V369;
	VMR60(V371)}
	goto T610;
T610:;}{object V372;
	{object V373 =((V368))->s.s_plist;
	 object ind= VV[124];
	while(V373!=Cnil){
	if(V373->c.c_car==ind){
	V372= (V373->c.c_cdr->c.c_car);
	goto T613;
	}else V373=V373->c.c_cdr->c.c_cdr;}
	V372= Cnil;}
	goto T613;
T613:;
	if(V372==Cnil)goto T612;
	{object V374 = V372;
	VMR60(V374)}
	goto T612;
T612:;}
	{object V375 =((V368))->s.s_plist;
	 object ind= VV[125];
	while(V375!=Cnil){
	if(V375->c.c_car==ind){
	{object V376 = (V375->c.c_cdr->c.c_car);
	VMR60(V376)}
	}else V375=V375->c.c_cdr->c.c_cdr;}
	{object V377 = Cnil;
	VMR60(V377)}}
	return Cnil;
}
/*	macro definition for ORIGINAL-DEFINITION	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V378=base[0]->c.c_cdr;
	if(endp(V378))invalid_macro_call();
	base[2]= (V378->c.c_car);
	V378=V378->c.c_cdr;
	if(!endp(V378))invalid_macro_call();}
	base[3]= list(3,VV[126],base[2],VV[127]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function REDEFINE-FUNCTION	*/

static object LI64(V381,V382)

register object V381;object V382;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	base[0]= V381;
	base[1]= (VV[128]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[128]->s.s_dbind)= vs_base[0];
	{object V384 =((V381))->s.s_plist;
	 object ind= VV[129];
	while(V384!=Cnil){
	if(V384->c.c_car==ind){
	if(((V384->c.c_cdr->c.c_car))!=Cnil){
	goto T618;}
	goto T620;
	}else V384=V384->c.c_cdr->c.c_cdr;}}
	goto T620;
T620:;
	base[0]= (V381);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V385= vs_base[0];
	(void)(sputprop((V381),VV[129],V385));
	goto T618;
T618:;
	base[0]= (V381);
	base[2]= (V382);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	{object V386 = vs_base[0];
	VMR62(V386)}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC66(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_check;
	{object V387;
	object V388;
	check_arg(2);
	V387=(base[0]);
	V388=(base[1]);
	vs_top=sup;
	{object V389;
	object V390;
	object V391;
	base[5]= CMPcdr((V387));
	vs_top=(vs_base=base+5)+1;
	Lbutlast();
	vs_top=sup;
	V389= vs_base[0];
	{object V392;
	object V393= (V389);
	if(V393==Cnil){
	V390= Cnil;
	goto T628;}
	base[5]=V392=MMcons(Cnil,Cnil);
	goto T629;
T629:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V395= vs_base[0];
	(V392->c.c_car)= list(2,V395,(V393->c.c_car));
	if((V393=MMcdr(V393))==Cnil){
	V390= base[5];
	goto T628;}
	V392=MMcdr(V392)=MMcons(Cnil,Cnil);
	goto T629;}
	goto T628;
T628:;
	{object V396;
	object V397= (V390);
	if(V397==Cnil){
	V391= Cnil;
	goto T632;}
	base[5]=V396=MMcons(Cnil,Cnil);
	goto T633;
T633:;
	(V396->c.c_car)= CMPcar((V397->c.c_car));
	if((V397=MMcdr(V397))==Cnil){
	V391= base[5];
	goto T632;}
	V396=MMcdr(V396)=MMcons(Cnil,Cnil);
	goto T633;}
	goto T632;
T632:;
	base[5]= (V387);
	vs_top=(vs_base=base+5)+1;
	Llast();
	vs_top=sup;
	V398= vs_base[0];
	base[5]= list(3,VV[24],(V390),listA(3,(base0[0]->c.c_car),CMPcar(V398),(V391)));
	vs_top=(vs_base=base+5)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC65(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM64; VC64
	vs_check;
	{object V399;
	check_arg(1);
	V399=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function MAKE-POP	*/

static void L26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_check;
	{object V400;
	object V401;
	object V402;
	check_arg(3);
	V400=(base[0]);
	V401=(base[1]);
	V402=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V403;
	if(!(number_compare(small_fixnum(0),base0[0])==0)){
	goto T639;}
	if((V400)==Cnil){
	V404= Cnil;
	goto T641;}
	V404= list(3,VV[50],(V400),list(2,VV[22],(V401)));
	goto T641;
T641:;
	if((V402)==Cnil){
	V405= Cnil;
	goto T642;}
	V405= list(3,VV[50],(V402),list(2,VV[55],(V401)));
	goto T642;
T642:;
	V403= list(3,VV[44],V404,V405);
	goto T637;
	goto T639;
T639:;
	if(((V402))!=Cnil){
	goto T644;}
	if((V400)==Cnil){
	V403= Cnil;
	goto T637;}
	V403= list(3,VV[50],(V400),(*(LnkLI158))(base0[0],(V401)));
	goto T637;
	goto T644;
T644:;
	V406= list(3,VV[50],(V402),(*(LnkLI159))(base0[0],(V401)));
	if((V400)==Cnil){
	V407= Cnil;
	goto T646;}
	V407= list(3,VV[50],(V400),list(2,VV[56],(V402)));
	goto T646;
T646:;
	V403= list(3,VV[44],/* INLINE-ARGS */V406,V407);
	goto T637;
T637:;
	base0[0]= small_fixnum(0);
	base[3]= (V403);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
static object  LnkTLI159(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[159],(void **)(void *)&LnkLI159,2,first,ap);va_end(ap);return V1;} /* MAKE-CDXR */
static object  LnkTLI158(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[158],(void **)(void *)&LnkLI158,2,first,ap);va_end(ap);return V1;} /* MAKE-CAXR */
static object  LnkTLI157(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[157],(void **)(void *)&LnkLI157,1,first,ap);va_end(ap);return V1;} /* GET-SETF-FUNCTION-NAME */
static object  LnkTLI156(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[156],(void **)(void *)&LnkLI156,1,first,ap);va_end(ap);return V1;} /* SETFBOUNDP */
static object  LnkTLI155(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[155],(void **)(void *)&LnkLI155,1,first,ap);va_end(ap);return V1;} /* DO-STANDARD-DEFSETF-1 */
static void LnkT152(ptr) object *ptr;{ call_or_link_closure(VV[152],(void **)(void *)&Lnk152,(void **)(void *)&Lclptr152);} /* CLASS-WRAPPER */
static object  LnkTLI151(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[151],(void **)(void *)&LnkLI151,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static object  LnkTLI150(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[150],(void **)(void *)&LnkLI150,first,ap);va_end(ap);return V1;} /* INITIALIZE-INFO */
static object  LnkTLI149(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[149],(void **)(void *)&LnkLI149,2,first,ap);va_end(ap);return V1;} /* UPDATE-INITIALIZE-INFO-INTERNAL */
static void LnkT148(ptr) object *ptr;{ call_or_link_closure(VV[148],(void **)(void *)&Lnk148,(void **)(void *)&Lclptr148);} /* FORWARD-REFERENCED-CLASS-P */
static void LnkT147(ptr) object *ptr;{ call_or_link_closure(VV[147],(void **)(void *)&Lnk147,(void **)(void *)&Lclptr147);} /* CLASS-PREDICATE-NAME */
static object  LnkTLI146(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[146],(void **)(void *)&LnkLI146,first,ap);va_end(ap);return V1;} /* FIND-CLASS-PREDICATE-FROM-CELL */
static object  LnkTLI145(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[145],(void **)(void *)&LnkLI145,first,ap);va_end(ap);return V1;} /* FIND-CLASS-CELL */
static object  LnkTLI144(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[144],(void **)(void *)&LnkLI144,first,ap);va_end(ap);return V1;} /* FIND-CLASS-FROM-CELL */
static void LnkT143(){ call_or_link(VV[143],(void **)(void *)&Lnk143);} /* FIND-STRUCTURE-CLASS */
static object  LnkTLI142(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[142],(void **)(void *)&LnkLI142,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-TYPE-P */
static object  LnkTLI140(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[140],(void **)(void *)&LnkLI140,1,first,ap);va_end(ap);return V1;} /* LEGAL-CLASS-NAME-P */
static void LnkT6(){ call_or_link(VV[6],(void **)(void *)&Lnk6);} /* DELETE */
static object  LnkTLI138(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[138],(void **)(void *)&LnkLI138,2,first,ap);va_end(ap);return V1;} /* DESTRUCTURE-INTERNAL */
static void LnkT137(){ call_or_link(VV[137],(void **)(void *)&Lnk137);} /* DESTRUCTURE */
static void LnkT136(){ call_or_link(VV[136],(void **)(void *)&Lnk136);} /* EXTRACT-DECLARATIONS */
static object  LnkTLI133(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[133],(void **)(void *)&LnkLI133,first,ap);va_end(ap);return V1;} /* STRING-APPEND */
static void LnkT132(){ call_or_link(VV[132],(void **)(void *)&Lnk132);} /* CONCATENATE */
static object  LnkTLI131(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[131],(void **)(void *)&LnkLI131,2,first,ap);va_end(ap);return V1;} /* REMTAIL */
static object  LnkTLI130(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[130],(void **)(void *)&LnkLI130,2,first,ap);va_end(ap);return V1;} /* MAKE-PLIST */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

