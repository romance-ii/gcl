
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
	V63 = base[3];
	V64= list(3,(V45),(V46),list(2,VV[28],listA(3,VV[24],V58,V63)));
	V65= list(2,VV[33],(V45));
	base[4]= list(3,VV[27],/* INLINE-ARGS */V64,list(4,VV[29],VV[30],list(4,VV[31],VV[32],/* INLINE-ARGS */V65,list(2,VV[33],(V46))),VV[28]));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	function definition for EXTRACT-DECLARATIONS	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{register object V66;
	object V67;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V66=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T45;}
	V67=(base[1]);
	vs_top=sup;
	goto T46;
	goto T45;
T45:;
	V67= Cnil;
	goto T46;
T46:;
	{object V68;
	register object V69;
	register object V70;
	V68= Cnil;
	V69= Cnil;
	V70= Cnil;
	if(!(type_of(CMPcar((V66)))==t_string)){
	goto T48;}
	if((CMPcdr((V66)))==Cnil){
	goto T48;}
	{object V71;
	V71= CMPcar((V66));
	V66= CMPcdr((V66));
	V68= (V71);}
	goto T48;
T48:;
	goto T59;
T59:;
	if(((V66))!=Cnil){
	goto T61;}
	goto T57;
	goto T61;
T61:;
	V70= CMPcar((V66));
	goto T69;
T69:;
	if(type_of((V70))==t_cons||((V70))==Cnil){
	goto T72;}
	goto T57;
	goto T72;
T72:;
	if(!((CMPcar((V70)))==(VV[34]))){
	goto T75;}
	goto T67;
	goto T75;
T75:;
	{register object V72;
	object V73;
	base[2]= (V70);
	base[3]= (V67);
	vs_top=(vs_base=base+2)+2;
	Lmacroexpand_1();
	if(vs_base>=vs_top){vs_top=sup;goto T80;}
	V72= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T81;}
	V73= vs_base[0];
	vs_top=sup;
	goto T82;
	goto T80;
T80:;
	V72= Cnil;
	goto T81;
T81:;
	V73= Cnil;
	goto T82;
T82:;
	if(!(((V72))==((V70)))){
	goto T83;}
	if(((V73))==Cnil){
	goto T84;}
	goto T83;
T83:;
	V70= (V72);
	goto T70;
	goto T84;
T84:;
	goto T57;}
	goto T70;
T70:;
	goto T69;
	goto T67;
T67:;
	{object V74;
	V74= CMPcar((V66));
	V66= CMPcdr((V66));}
	{register object V75;
	register object V76;
	V75= CMPcdr((V70));
	V76= CMPcar((V75));
	goto T97;
T97:;
	if(!(((V75))==Cnil)){
	goto T98;}
	goto T60;
	goto T98;
T98:;
	V69= make_cons(V76,(V69));
	V75= CMPcdr((V75));
	V76= CMPcar((V75));
	goto T97;}
	goto T60;
T60:;
	goto T59;
	goto T57;
T57:;
	base[2]= (V68);
	if((V69)==Cnil){
	base[3]= Cnil;
	goto T111;}
	V78= nreverse((V69));
	V79= make_cons(VV[34],/* INLINE-ARGS */V78);
	base[3]= make_cons(/* INLINE-ARGS */V79,Cnil);
	goto T111;
T111:;
	base[4]= (V66);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	local entry for function GET-DECLARATION	*/

static object LI17(object V81,object V80,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB17 VMS17 VMV17
	{register object V82;
	object V83;
	register object V84;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V82= V81;
	V83= V80;
	narg = narg - 2;
	if (narg <= 0) goto T113;
	else {
	V84= first;}
	--narg; goto T114;
	goto T113;
T113:;
	V84= Cnil;
	goto T114;
T114:;
	{register object V85;
	register object V86;
	V85= (V83);
	V86= CMPcar((V85));
	goto T119;
T119:;
	if(!(((V85))==Cnil)){
	goto T120;}
	{object V87 = (V84);
	VMR17(V87)}
	goto T120;
T120:;
	{register object V88;
	register object V89;
	V88= CMPcdr((V86));
	V89= CMPcar((V88));
	goto T128;
T128:;
	if(!(((V88))==Cnil)){
	goto T129;}
	goto T124;
	goto T129;
T129:;
	if(!(type_of((V89))==t_cons)){
	goto T133;}
	if(!((CMPcar((V89)))==((V82)))){
	goto T133;}
	{object V90 = CMPcdr((V89));
	VMR17(V90)}
	goto T133;
T133:;
	V88= CMPcdr((V88));
	V89= CMPcar((V88));
	goto T128;}
	goto T124;
T124:;
	V85= CMPcdr((V85));
	V86= CMPcar((V85));
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
	{object V91;
	check_arg(1);
	V91=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= symbol_name((V91));
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
	{register object V92;
	va_start(ap,first);
	narg= narg - 0;
	V93 = list_vector_new(narg,first,ap);
	V92= V93;
	base[0]= (V92);
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V92= vs_base[0];
	{register object V94;
	V94= (V92);
	goto T154;
T154:;
	if(((V94))!=Cnil){
	goto T155;}
	base[0]=VV[132]->s.s_gfdef;
	base[1]= VV[36];
	{object V95;
	V95= (V92);
	 vs_top=base+2;
	 while(V95!=Cnil)
	 {vs_push((V95)->c.c_car);V95=(V95)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk132)();
	vs_top=sup;
	{object V96 = vs_base[0];
	VMR19(V96)}
	goto T155;
T155:;
	V97= coerce_to_string(CMPcar((V94)));
	((V94))->c.c_car = /* INLINE-ARGS */V97;
	V94= CMPcdr((V94));
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
	{object V98;
	object V99;
	object V100;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V98=(base[0]);
	V99=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T165;}
	V100=(base[2]);
	vs_top=sup;
	goto T166;
	goto T165;
T165:;
	V100= (VV[37]->s.s_dbind);
	goto T166;
T166:;
	base[3]= (VFUN_NARGS=2,(*(LnkLI133))((V98),(V99)));
	base[4]= (V100);
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
	{object V101=base[0]->c.c_cdr;
	if(endp(V101))invalid_macro_call();
	base[2]= (V101->c.c_car);
	V101=V101->c.c_cdr;
	if(endp(V101))invalid_macro_call();
	base[3]= (V101->c.c_car);
	V101=V101->c.c_cdr;
	{object V102=getf(V101,VV[39],OBJNULL);
	if(V102==OBJNULL){
	base[4]= (VV[134]->s.s_gfdef);} else {
	base[4]= V102;
	}}
	{object V103=getf(V101,VV[135],OBJNULL);
	if(V103==OBJNULL){
	base[5]= base[2];} else {
	base[5]= V103;
	}}
	check_other_key(V101,2,VV[39],VV[135]);}
	{register object V104;
	register object V105;
	object V106;
	V104= Cnil;
	V105= Cnil;
	{object V107;
	object V108;
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
	{register object x= CMPcar(base[2]),V109= VV[38];
	while(V109!=Cnil)
	if(eql(x,V109->c.c_car)){
	goto T184;
	}else V109=V109->c.c_cdr;
	goto T177;}
	goto T184;
T184:;
	goto T176;
T176:;
	V107= base[2];
	goto T175;
	goto T177;
T177:;
	{object V110;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V110= vs_base[0];
	V104= make_cons(V110,(V104));
	V105= make_cons(base[2],(V105));
	V107= (V110);}
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
	{register object x= CMPcar(base[3]),V113= VV[38];
	while(V113!=Cnil)
	if(eql(x,V113->c.c_car)){
	goto T199;
	}else V113=V113->c.c_cdr;
	goto T192;}
	goto T199;
T199:;
	goto T191;
T191:;
	V108= base[3];
	goto T190;
	goto T192;
T192:;
	{object V114;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V114= vs_base[0];
	V104= make_cons(V114,(V104));
	V105= make_cons(base[3],(V105));
	V108= (V114);}
	goto T190;
T190:;
	V117= list(5,VV[0],(V107),(V108),VV[39],base[4]);
	V106= list(3,VV[17],/* INLINE-ARGS */V117,list(5,VV[40],VV[41],list(2,VV[42],base[5]),(V107),(V108)));}
	V122= reverse((V104));
	V123= reverse((V105));
	{object V119;
	object V120= /* INLINE-ARGS */V122;
	object V121= /* INLINE-ARGS */V123;
	if(V120==Cnil||V121==Cnil){
	V118= Cnil;
	goto T205;}
	base[7]=V119=MMcons(Cnil,Cnil);
	goto T206;
T206:;
	(V119->c.c_car)= list(2,(V120->c.c_car),(V121->c.c_car));
	if((V120=MMcdr(V120))==Cnil||(V121=MMcdr(V121))==Cnil){
	V118= base[7];
	goto T205;}
	V119=MMcdr(V119)=MMcons(Cnil,Cnil);
	goto T206;}
	goto T205;
T205:;
	V124 = (V106);
	base[7]= list(3,VV[24],V118,V124);
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
	{object V125=base[0]->c.c_cdr;
	if(endp(V125))invalid_macro_call();
	base[2]= (V125->c.c_car);
	V125=V125->c.c_cdr;
	if(endp(V125))invalid_macro_call();
	base[3]= (V125->c.c_car);
	V125=V125->c.c_cdr;
	if(endp(V125))invalid_macro_call();
	base[4]= (V125->c.c_car);
	V125=V125->c.c_cdr;
	if(!endp(V125))invalid_macro_call();}
	{register object V126;
	register object V127;
	object V128;
	V126= Cnil;
	V127= Cnil;
	{register object V129;
	object V130;
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
	{register object x= CMPcar(base[2]),V131= VV[38];
	while(V131!=Cnil)
	if(eql(x,V131->c.c_car)){
	goto T220;
	}else V131=V131->c.c_cdr;
	goto T213;}
	goto T220;
T220:;
	goto T212;
T212:;
	V129= base[2];
	goto T211;
	goto T213;
T213:;
	{object V132;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V132= vs_base[0];
	V126= make_cons(V132,(V126));
	V127= make_cons(base[2],(V127));
	V129= (V132);}
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
	{register object x= CMPcar(base[3]),V135= VV[38];
	while(V135!=Cnil)
	if(eql(x,V135->c.c_car)){
	goto T235;
	}else V135=V135->c.c_cdr;
	goto T228;}
	goto T235;
T235:;
	goto T227;
T227:;
	V130= base[3];
	goto T226;
	goto T228;
T228:;
	{object V136;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V136= vs_base[0];
	V126= make_cons(V136,(V126));
	V127= make_cons(base[3],(V127));
	V130= (V136);}
	goto T226;
T226:;
	V139= list(3,VV[43],(V130),(V129));
	V140= list(3,VV[45],(V129),list(3,VV[46],list(2,base[4],(V130)),(V129)));
	V128= list(3,VV[17],/* INLINE-ARGS */V139,list(3,VV[44],/* INLINE-ARGS */V140,list(2,VV[22],(V129))));}
	V145= reverse((V126));
	V146= reverse((V127));
	{object V142;
	object V143= /* INLINE-ARGS */V145;
	object V144= /* INLINE-ARGS */V146;
	if(V143==Cnil||V144==Cnil){
	V141= Cnil;
	goto T241;}
	base[6]=V142=MMcons(Cnil,Cnil);
	goto T242;
T242:;
	(V142->c.c_car)= list(2,(V143->c.c_car),(V144->c.c_car));
	if((V143=MMcdr(V143))==Cnil||(V144=MMcdr(V144))==Cnil){
	V141= base[6];
	goto T241;}
	V142=MMcdr(V142)=MMcons(Cnil,Cnil);
	goto T242;}
	goto T241;
T241:;
	V147 = (V128);
	base[6]= list(3,VV[24],V141,V147);
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
	{object V148=base[0]->c.c_cdr;
	if(endp(V148))invalid_macro_call();
	base[2]= (V148->c.c_car);
	V148=V148->c.c_cdr;
	if(endp(V148))invalid_macro_call();
	base[3]= (V148->c.c_car);
	V148=V148->c.c_cdr;
	base[4]= V148;}
	{object V149;
	object V150;
	object V151;
	base[5]= base[4];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk136)();
	if(vs_base>=vs_top){vs_top=sup;goto T246;}
	V149= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T247;}
	V150= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T248;}
	V151= vs_base[0];
	vs_top=sup;
	goto T249;
	goto T246;
T246:;
	V149= Cnil;
	goto T247;
T247:;
	V150= Cnil;
	goto T248;
T248:;
	V151= Cnil;
	goto T249;
T249:;
	{object V152;
	object V153;
	base[5]= base[2];
	base[6]= base[3];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk137)();
	if(vs_base>=vs_top){vs_top=sup;goto T253;}
	V152= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T254;}
	V153= vs_base[0];
	vs_top=sup;
	goto T255;
	goto T253;
T253:;
	V152= Cnil;
	goto T254;
T254:;
	V153= Cnil;
	goto T255;
T255:;
	V154 = (V153);
	base[5]= (V150);
	base[6]= (V152);
	base[7]= make_cons(VV[47],(V151));
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V155= vs_base[0];
	base[5]= listA(3,VV[24],V154,V155);
	vs_top=(vs_base=base+5)+1;
	return;}}
}
/*	function definition for DESTRUCTURE	*/

static void L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	bds_check;
	{object V156;
	object V157;
	check_arg(2);
	V156=(base[0]);
	V157=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V158;
	bds_bind(VV[48],Cnil);
	V158= Cnil;
	(VV[48]->s.s_dbind)= VV[49];
	V159= list(3,VV[50],VV[51],(V157));
	V158= make_cons(/* INLINE-ARGS */V159,Cnil);
	V157= VV[51];
	V160 = (V158);
	V161= (*(LnkLI138))((V156),(V157));
	V162= nreverse(/* INLINE-ARGS */V161);
	base[3]= nconc(V160,/* INLINE-ARGS */V162);
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

static object LI25(V165,V166)

object V165;register object V166;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{object V167;
	register object V168;
	register object V169;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V167= vs_base[0];
	base[0]= small_fixnum(0);
	V168= Cnil;
	V169= Cnil;
	{register object V170;
	V170= (V165);
	goto T273;
T273:;
	if(((V170))!=Cnil){
	goto T274;}
	goto T271;
	goto T274;
T274:;
	V168= CMPcar((V170));
	V171 = (V168);
	if(!(type_of(V171)==t_symbol)){
	goto T280;}
	{register object x= (V168),V172= VV[52];
	while(V172!=Cnil)
	if(x==(V172->c.c_car)){
	goto T283;
	}else V172=V172->c.c_cdr;}
	(VV[48]->s.s_dbind)= make_cons(V168,(VV[48]->s.s_dbind));
	goto T283;
T283:;
	if((CMPcdr((V170)))!=Cnil){
	goto T288;}
	{object V174;
	base[2]= (V168);
	base[3]= (V166);
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	L26(base);
	vs_top=sup;
	V174= vs_base[0];
	V169= make_cons((V174),(V169));
	goto T278;}
	goto T288;
T288:;
	if(!(type_of(CMPcdr((V170)))==t_symbol)){
	goto T296;}
	{object V175;
	base[2]= (V168);
	base[3]= (V166);
	base[4]= CMPcdr((V170));
	vs_top=(vs_base=base+2)+3;
	L26(base);
	vs_top=sup;
	V175= vs_base[0];
	V169= make_cons((V175),(V169));}
	{object V176;
	V176= CMPcdr((V170));
	(VV[48]->s.s_dbind)= make_cons((V176),(VV[48]->s.s_dbind));}
	goto T271;
	goto T296;
T296:;
	{register object x= (V168),V177= VV[53];
	while(V177!=Cnil)
	if(x==(V177->c.c_car)){
	goto T309;
	}else V177=V177->c.c_cdr;
	goto T308;}
	goto T309;
T309:;
	base[0]= number_plus(base[0],small_fixnum(1));
	goto T278;
	goto T308;
T308:;
	{register object x= CMPcadr((V170)),V178= VV[54];
	while(V178!=Cnil)
	if(x==(V178->c.c_car)){
	goto T313;
	}else V178=V178->c.c_cdr;
	goto T312;}
	goto T313;
T313:;
	{object V179;
	base[2]= (V168);
	base[3]= (V166);
	base[4]= Cnil;
	vs_top=(vs_base=base+2)+3;
	L26(base);
	vs_top=sup;
	V179= vs_base[0];
	V169= make_cons((V179),(V169));}
	base[0]= number_plus(base[0],small_fixnum(1));
	goto T278;
	goto T312;
T312:;
	{object V180;
	base[2]= (V168);
	base[3]= (V166);
	base[4]= (V166);
	vs_top=(vs_base=base+2)+3;
	L26(base);
	vs_top=sup;
	V180= vs_base[0];
	V169= make_cons((V180),(V169));
	goto T278;}
	goto T280;
T280:;
	{object V181;
	V182= list(2,(V167),Cnil);
	V183= make_cons(/* INLINE-ARGS */V182,Cnil);
	base[2]= (V167);
	base[3]= (V166);
	if(!(type_of(CMPcdr((V170)))==t_symbol)){
	goto T333;}
	base[4]= CMPcdr((V170));
	goto T331;
	goto T333;
T333:;
	base[4]= (V166);
	goto T331;
T331:;
	vs_top=(vs_base=base+2)+3;
	L26(base);
	vs_top=sup;
	V184= vs_base[0];
	if(!(type_of((V170))==t_cons)){
	goto T337;}
	V185= CMPcar((V170));
	goto T335;
	goto T337;
T337:;
	V185= (V170);
	goto T335;
T335:;
	V186 = (V167);
	V187= (*(LnkLI138))(V185,V186);
	V181= listA(4,VV[24],/* INLINE-ARGS */V183,V184,nreverse(/* INLINE-ARGS */V187));
	V169= make_cons((V181),(V169));}
	if(!(type_of(CMPcdr((V170)))==t_symbol)){
	goto T278;}
	{object V188;
	V188= CMPcdr((V170));
	(VV[48]->s.s_dbind)= make_cons((V188),(VV[48]->s.s_dbind));}
	goto T271;
	goto T278;
T278:;
	V170= CMPcdr((V170));
	goto T273;}
	goto T271;
T271:;
	{object V189 = (V169);
	VMR25(V189)}}
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
	{object V190=base[0]->c.c_cdr;
	{object V191=getf(V190,VV[139],OBJNULL);
	if(V191==OBJNULL){
	base[2]= Cnil;} else {
	base[2]= V191;
	}}
	check_other_key(V190,1,VV[139]);}
	V192= list(2,VV[57],base[2]);
	if(base[2]==Cnil){
	V193= Cnil;
	goto T349;}
	V193= VV[59];
	goto T349;
T349:;
	base[3]= list(3,VV[27],list(2,/* INLINE-ARGS */V192,list(2,VV[58],V193)),VV[60]);
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
	{object V194=base[0]->c.c_cdr;
	if(endp(V194))invalid_macro_call();
	{object V195= (V194->c.c_car);
	if(endp(V195))invalid_macro_call();
	base[2]= (V195->c.c_car);
	V195=V195->c.c_cdr;
	if(endp(V195))invalid_macro_call();
	base[3]= (V195->c.c_car);
	V195=V195->c.c_cdr;
	if(!endp(V195))invalid_macro_call();}
	V194=V194->c.c_cdr;
	if(endp(V194))invalid_macro_call();
	base[4]= (V194->c.c_car);
	V194=V194->c.c_cdr;
	base[5]= V194;}
	{object V196;
	object V197;
	object V198;
	base[6]= base[5];
	base[7]= base[1];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk136)();
	if(vs_base>=vs_top){vs_top=sup;goto T353;}
	V196= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T354;}
	V197= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T355;}
	V198= vs_base[0];
	vs_top=sup;
	goto T356;
	goto T353;
T353:;
	V196= Cnil;
	goto T354;
T354:;
	V197= Cnil;
	goto T355;
T355:;
	V198= Cnil;
	goto T356;
T356:;
	V199= list(3,list(2,VV[61],base[4]),base[2],base[3]);
	V200= list(3,VV[50],base[2],VV[64]);
	V201= list(3,VV[50],base[3],VV[66]);
	V202= list(6,VV[62],VV[63],/* INLINE-ARGS */V200,VV[65],/* INLINE-ARGS */V201,make_cons(VV[44],(V198)));
	V203= make_cons(/* INLINE-ARGS */V202,Cnil);
	base[6]= listA(3,VV[24],/* INLINE-ARGS */V199,append((V197),/* INLINE-ARGS */V203));
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
	{object V204=base[0]->c.c_cdr;
	if(endp(V204))invalid_macro_call();
	base[2]= (V204->c.c_car);
	V204=V204->c.c_cdr;
	if(endp(V204))invalid_macro_call();
	base[3]= (V204->c.c_car);
	V204=V204->c.c_cdr;
	base[4]= V204;}
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
	{object V205=base[0]->c.c_cdr;
	if(endp(V205))invalid_macro_call();
	{object V206= (V205->c.c_car);
	if(endp(V206))invalid_macro_call();
	base[2]= (V206->c.c_car);
	V206=V206->c.c_cdr;
	if(endp(V206))invalid_macro_call();
	base[3]= (V206->c.c_car);
	V206=V206->c.c_cdr;
	if(endp(V206))invalid_macro_call();
	base[4]= (V206->c.c_car);
	V206=V206->c.c_cdr;
	if(!endp(V206))invalid_macro_call();}
	V205=V205->c.c_cdr;
	base[5]= V205;}
	V207= list(2,base[2],Cnil);
	V208= list(2,/* INLINE-ARGS */V207,list(2,VV[67],base[3]));
	V209= listA(3,VV[44],list(3,VV[50],base[2],VV[70]),base[5]);
	base[6]= list(3,VV[24],/* INLINE-ARGS */V208,list(3,VV[62],VV[68],list(4,VV[16],VV[69],/* INLINE-ARGS */V209,make_cons(base[4],Cnil))));
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
	{object V210=base[0]->c.c_cdr;
	if(endp(V210))invalid_macro_call();
	{object V211= (V210->c.c_car);
	if(endp(V211))invalid_macro_call();
	base[2]= (V211->c.c_car);
	V211=V211->c.c_cdr;
	if(endp(V211))invalid_macro_call();
	base[3]= (V211->c.c_car);
	V211=V211->c.c_cdr;
	if(!endp(V211))invalid_macro_call();}
	V210=V210->c.c_cdr;
	base[4]= V210;}
	{register object V212;
	register object V213;
	object V214;
	V212= Cnil;
	V213= Cnil;
	{object V215;
	register object V216;
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
	{register object x= CMPcar(base[2]),V217= VV[38];
	while(V217!=Cnil)
	if(eql(x,V217->c.c_car)){
	goto T369;
	}else V217=V217->c.c_cdr;
	goto T362;}
	goto T369;
T369:;
	goto T361;
T361:;
	V215= base[2];
	goto T360;
	goto T362;
T362:;
	{object V218;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V218= vs_base[0];
	V212= make_cons(V218,(V212));
	V213= make_cons(base[2],(V213));
	V215= (V218);}
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
	{register object x= CMPcar(base[3]),V221= VV[38];
	while(V221!=Cnil)
	if(eql(x,V221->c.c_car)){
	goto T384;
	}else V221=V221->c.c_cdr;
	goto T377;}
	goto T384;
T384:;
	goto T376;
T376:;
	V216= base[3];
	goto T375;
	goto T377;
T377:;
	{object V222;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V222= vs_base[0];
	V212= make_cons(V222,(V212));
	V213= make_cons(base[3],(V213));
	V216= (V222);}
	goto T375;
T375:;
	V225= list(3,VV[71],(V216),VV[72]);
	V226= list(3,VV[71],(V216),VV[73]);
	V227= list(3,VV[74],(V215),(V216));
	V228= list(3,/* INLINE-ARGS */V226,/* INLINE-ARGS */V227,list(3,VV[71],(V216),VV[75]));
	V214= listA(3,VV[44],/* INLINE-ARGS */V225,append(base[4],/* INLINE-ARGS */V228));}
	V233= reverse((V212));
	V234= reverse((V213));
	{object V230;
	object V231= /* INLINE-ARGS */V233;
	object V232= /* INLINE-ARGS */V234;
	if(V231==Cnil||V232==Cnil){
	V229= Cnil;
	goto T390;}
	base[6]=V230=MMcons(Cnil,Cnil);
	goto T391;
T391:;
	(V230->c.c_car)= list(2,(V231->c.c_car),(V232->c.c_car));
	if((V231=MMcdr(V231))==Cnil||(V232=MMcdr(V232))==Cnil){
	V229= base[6];
	goto T390;}
	V230=MMcdr(V230)=MMcons(Cnil,Cnil);
	goto T391;}
	goto T390;
T390:;
	V235 = (V214);
	base[6]= list(3,VV[24],V229,V235);
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	local entry for function PRINTING-RANDOM-THING-INTERNAL	*/

static object LI32(V238,V239)

object V238;object V239;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	{object V240 = Cnil;
	VMR31(V240)}
	return Cnil;
}
/*	local entry for function CAPITALIZE-WORDS	*/

static object LI33(object V241,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB32 VMS32 VMV32
	{object V242;
	register object V243;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V242= V241;
	narg = narg - 1;
	if (narg <= 0) goto T393;
	else {
	V243= first;}
	--narg; goto T394;
	goto T393;
T393:;
	V243= Ct;
	goto T394;
T394:;
	{register object V244;
	base[0]= coerce_to_string((V242));
	vs_top=(vs_base=base+0)+1;
	Lcopy_seq();
	vs_top=sup;
	V244= vs_base[0];
	{register object V245;
	register object V246;
	register object V247;
	register object V248;
	V245= Ct;
	V246= CMPmake_fixnum((long)((V244))->v.v_fillp);
	V247= Cnil;
	V248= small_fixnum(0);
	goto T403;
T403:;
	if(!(number_compare((V248),(V246))==0)){
	goto T404;}
	{object V249 = (V244);
	VMR32(V249)}
	goto T404;
T404:;
	V247= elt((V244),fix((V248)));
	base[1]= (V247);
	vs_top=(vs_base=base+1)+1;
	Lboth_case_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T412;}
	if(((V245))==Cnil){
	goto T417;}
	base[1]= (V247);
	vs_top=(vs_base=base+1)+1;
	Llower_case_p();
	vs_top=sup;
	V245= vs_base[0];
	if(((V245))!=Cnil){
	goto T419;}
	goto T415;
	goto T419;
T419:;
	V250 = (V244);
	V251 = (V248);
	base[1]= (V247);
	vs_top=(vs_base=base+1)+1;
	Lchar_upcase();
	vs_top=sup;
	V252= vs_base[0];
	(void)(elt_set(V250,fix(V251),V252));
	goto T415;
	goto T417;
T417:;
	if(((V245))==Cnil){
	goto T425;}
	goto T415;
	goto T425;
T425:;
	V253 = (V244);
	V254 = (V248);
	base[1]= (V247);
	vs_top=(vs_base=base+1)+1;
	Lchar_downcase();
	vs_top=sup;
	V255= vs_base[0];
	(void)(elt_set(V253,fix(V254),V255));
	goto T415;
T415:;
	V245= Cnil;
	goto T410;
	goto T412;
T412:;
	base[1]= (V247);
	base[2]= VV[76];
	vs_top=(vs_base=base+1)+2;
	Lchar_equal();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T431;}
	V245= Ct;
	if(((V243))!=Cnil){
	goto T410;}
	(void)(elt_set((V244),fix((V248)),VV[77]));
	goto T410;
	goto T431;
T431:;
	V245= Cnil;
	goto T410;
T410:;
	V248= number_plus((V248),small_fixnum(1));
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
	{object V256=base[0]->c.c_cdr;
	if(endp(V256))invalid_macro_call();
	base[2]= (V256->c.c_car);
	V256=V256->c.c_cdr;
	if(endp(V256))invalid_macro_call();
	base[3]= (V256->c.c_car);
	V256=V256->c.c_cdr;
	base[4]= V256;}
	base[5]= listA(4,VV[78],base[2],base[3],base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function MAKE-CONSTANT-FUNCTION	*/

static object LI36(V258)

object V258;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	base[0]=MMcons((V258),Cnil);
	{object V259 = 
	make_cclosure_new(LC65,Cnil,base[0],Cdata);
	VMR34(V259)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FUNCTION-RETURNING-NIL	*/

static object LI37(V261)

object V261;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	{object V262 = Cnil;
	VMR35(V262)}
	return Cnil;
}
/*	local entry for function FUNCTION-RETURNING-T	*/

static object LI38(V264)

object V264;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;
	{object V265 = Ct;
	VMR36(V265)}
	return Cnil;
}
/*	macro definition for FIND-CLASS-CELL-CLASS	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V266=base[0]->c.c_cdr;
	if(endp(V266))invalid_macro_call();
	base[2]= (V266->c.c_car);
	V266=V266->c.c_cdr;
	if(!endp(V266))invalid_macro_call();}
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
	{object V267=base[0]->c.c_cdr;
	if(endp(V267))invalid_macro_call();
	base[2]= (V267->c.c_car);
	V267=V267->c.c_cdr;
	if(!endp(V267))invalid_macro_call();}
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
	{object V268=base[0]->c.c_cdr;
	if(endp(V268))invalid_macro_call();
	base[2]= (V268->c.c_car);
	V268=V268->c.c_cdr;
	if(!endp(V268))invalid_macro_call();}
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
	{object V269=base[0]->c.c_cdr;
	if(endp(V269))invalid_macro_call();
	base[2]= (V269->c.c_car);
	V269=V269->c.c_cdr;
	if(!endp(V269))invalid_macro_call();}
	base[3]= VV[81];
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function FIND-CLASS-CELL	*/

static object LI43(object V270,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB41 VMS41 VMV41
	{register object V271;
	object V272;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V271= V270;
	narg = narg - 1;
	if (narg <= 0) goto T449;
	else {
	V272= first;}
	--narg; goto T450;
	goto T449;
T449:;
	V272= Cnil;
	goto T450;
T450:;{object V273;
	base[0]= (V271);
	base[1]= (VV[82]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V273= vs_base[0];
	if(V273==Cnil)goto T452;
	{object V274 = V273;
	VMR41(V274)}
	goto T452;
T452:;}
	if(((V272))!=Cnil){
	goto T457;}
	if(((*(LnkLI140))((V271)))!=Cnil){
	goto T459;}
	base[0]= VV[83];
	base[1]= (V271);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T459;
T459:;
	{object V276;
	object V277;
	V276= (VV[82]->s.s_dbind);
	V278= (VV[141]->s.s_gfdef);
	V277= listA(3,Cnil,V278,Cnil);
	base[1]= V271;
	base[2]= (V276);
	base[3]= (V277);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;
	{object V279 = vs_base[0];
	VMR41(V279)}}
	goto T457;
T457:;
	{object V280 = Cnil;
	VMR41(V280)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function FIND-CLASS-FROM-CELL	*/

static object LI44(object V282,object V281,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB42 VMS42 VMV42
	{register object V283;
	object V284;
	object V285;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V283= V282;
	V284= V281;
	narg = narg - 2;
	if (narg <= 0) goto T470;
	else {
	V285= first;}
	--narg; goto T471;
	goto T470;
T470:;
	V285= Ct;
	goto T471;
T471:;{object V286;
	V286= CMPcar((V284));
	if(V286==Cnil)goto T473;
	{object V287 = V286;
	VMR42(V287)}
	goto T473;
T473:;}{object V288;
	if((VV[84]->s.s_dbind)==Cnil){
	V288= Cnil;
	goto T476;}
	if(((*(LnkLI142))((V283)))!=Cnil){
	goto T477;}
	V288= Cnil;
	goto T476;
	goto T477;
T477:;
	base[0]= (V283);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk143)();
	vs_top=sup;
	V288= vs_base[0];
	goto T476;
T476:;
	if(V288==Cnil)goto T475;
	{object V289 = V288;
	VMR42(V289)}
	goto T475;
T475:;}
	if(((V285))!=Cnil){
	goto T481;}
	{object V290 = Cnil;
	VMR42(V290)}
	goto T481;
T481:;
	if(((*(LnkLI140))((V283)))==Cnil){
	goto T484;}
	base[0]= VV[85];
	base[1]= (V283);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V291 = vs_base[0];
	VMR42(V291)}
	goto T484;
T484:;
	base[0]= VV[86];
	base[1]= (V283);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V292 = vs_base[0];
	VMR42(V292)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function FIND-CLASS-PREDICATE-FROM-CELL	*/

static object LI45(object V294,object V293,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB43 VMS43 VMV43
	{object V295;
	object V296;
	object V297;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V295= V294;
	V296= V293;
	narg = narg - 2;
	if (narg <= 0) goto T490;
	else {
	V297= first;}
	--narg; goto T491;
	goto T490;
T490:;
	V297= Ct;
	goto T491;
T491:;
	if((CMPcar((V296)))!=Cnil){
	goto T493;}
	(void)((VFUN_NARGS=3,(*(LnkLI144))((V295),(V296),(V297))));
	goto T493;
T493:;
	{object V298 = CMPcadr((V296));
	VMR43(V298)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function LEGAL-CLASS-NAME-P	*/

static object LI46(V300)

object V300;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	if(type_of((V300))==t_symbol){
	goto T496;}
	{object V301 = Cnil;
	VMR44(V301)}
	goto T496;
T496:;
	{object V302 = ((((type_of((V300))==t_symbol&&((V300))->s.s_hpack==keyword_package)?Ct:Cnil))==Cnil?Ct:Cnil);
	VMR44(V302)}
	return Cnil;
}
/*	local entry for function FIND-CLASS	*/

static object LI47(object V303,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB45 VMS45 VMV45
	{object V304;
	object V305;
	object V306;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V304= V303;
	narg = narg - 1;
	if (narg <= 0) goto T498;
	else {
	V305= first;}
	if (--narg <= 0) goto T499;
	else {
	V306= va_arg(ap,object);}
	--narg; goto T500;
	goto T498;
T498:;
	V305= Ct;
	goto T499;
T499:;
	V306= Cnil;
	goto T500;
T500:;
	V307 = (V304);
	V308= (VFUN_NARGS=2,(*(LnkLI145))((V304),(V305)));
	V309 = (V305);
	{object V310 = (VFUN_NARGS=3,(*(LnkLI144))(V307,/* INLINE-ARGS */V308,V309));
	VMR45(V310)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function FIND-CLASS-PREDICATE	*/

static object LI48(object V311,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB46 VMS46 VMV46
	{object V312;
	object V313;
	object V314;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V312= V311;
	narg = narg - 1;
	if (narg <= 0) goto T503;
	else {
	V313= first;}
	if (--narg <= 0) goto T504;
	else {
	V314= va_arg(ap,object);}
	--narg; goto T505;
	goto T503;
T503:;
	V313= Ct;
	goto T504;
T504:;
	V314= Cnil;
	goto T505;
T505:;
	V315 = (V312);
	V316= (VFUN_NARGS=2,(*(LnkLI145))((V312),(V313)));
	V317 = (V313);
	{object V318 = (VFUN_NARGS=3,(*(LnkLI146))(V315,/* INLINE-ARGS */V316,V317));
	VMR46(V318)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function SETF PCL FIND-CLASS	*/

static object LI49(V321,V322)

register object V321;object V322;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	if(((*(LnkLI140))((V322)))==Cnil){
	goto T509;}
	{object V323;
	V323= (VFUN_NARGS=1,(*(LnkLI145))((V322)));
	(V323)->c.c_car = V321;
	if(((VV[87]->s.s_dbind))==(VV[88])){
	goto T514;}
	if(!(((VV[87]->s.s_dbind))==(VV[89]))){
	goto T515;}
	goto T514;
T514:;
	{object V327;
	base[2]= (V321);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk147)(Lclptr147);
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V327= vs_base[0];
	(CMPcdr(V323))->c.c_car = (V327);
	(void)(CMPcdr(V323));}
	if(((V321))==Cnil){
	goto T525;}
	base[0]= (V321);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk148)(Lclptr148);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T525;}
	{register object V328;
	register object V329;
	V328= CMPcddr((V323));
	V329= CMPcar((V328));
	goto T533;
T533:;
	if(!(((V328))==Cnil)){
	goto T534;}
	{object V330 = Cnil;
	VMR47(V330)}
	goto T534;
T534:;
	V331= (VFUN_NARGS=4,(*(LnkLI150))((V321),CMPcar((V329)),Cnil,CMPcdr((V329))));
	(void)((*(LnkLI149))(/* INLINE-ARGS */V331,VV[90]));
	V328= CMPcdr((V328));
	V329= CMPcar((V328));
	goto T533;}
	goto T525;
T525:;
	{object V332 = Cnil;
	VMR47(V332)}
	goto T515;
T515:;
	{object V333 = Cnil;
	VMR47(V333)}}
	goto T509;
T509:;
	base[0]= VV[91];
	base[1]= (V322);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V334 = vs_base[0];
	VMR47(V334)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SETF PCL FIND-CLASS-PREDICATE	*/

static object LI50(V337,V338)

object V337;object V338;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	if(((*(LnkLI140))((V338)))==Cnil){
	goto T547;}
	{object V339;
	V339= (VFUN_NARGS=1,(*(LnkLI145))((V338)));
	(CMPcdr((V339)))->c.c_car = V337;
	(void)(CMPcdr((V339)));
	{object V341 = V337;
	VMR48(V341)}}
	goto T547;
T547:;
	base[0]= VV[92];
	base[1]= (V338);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V342 = vs_base[0];
	VMR48(V342)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for FIND-WRAPPER	*/

static void L51()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	{object V343;
	check_arg(1);
	V343=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (VFUN_NARGS=1,(*(LnkLI151))((V343)));
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
	{object V344=base[0]->c.c_cdr;
	if(endp(V344))invalid_macro_call();
	base[2]= (V344->c.c_car);
	V344=V344->c.c_cdr;
	base[3]= V344;}
	V345= list(2,VV[94],base[2]);
	V346= make_cons(/* INLINE-ARGS */V345,Cnil);
	base[4]= list(3,VV[93],/* INLINE-ARGS */V346,listA(3,VV[95],VV[96],base[3]));
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
	{object V347=base[0]->c.c_cdr;
	{object V348=getf(V347,VV[153],OBJNULL);
	if(V348==OBJNULL){
	base[2]= small_fixnum(0);} else {
	base[2]= V348;
	}}
	check_other_key(V347,1,VV[153]);}
	V349= list(2,VV[97],base[2]);
	base[3]= list(3,VV[27],make_cons(/* INLINE-ARGS */V349,VV[98]),VV[99]);
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
	{object V350=base[0]->c.c_cdr;
	if(endp(V350))invalid_macro_call();
	base[2]= (V350->c.c_car);
	V350=V350->c.c_cdr;
	{object V351=getf(V350,VV[154],OBJNULL);
	if(V351==OBJNULL){
	base[3]= (VV[55]->s.s_gfdef);} else {
	base[3]= V351;
	}}
	check_other_key(V350,1,VV[154]);}
	V352= list(2,VV[58],base[2]);
	V353= make_cons(/* INLINE-ARGS */V352,Cnil);
	base[4]= list(3,VV[24],/* INLINE-ARGS */V353,list(2,VV[100],list(3,VV[101],VV[102],list(4,VV[16],VV[103],VV[104],list(3,VV[105],VV[106],list(3,VV[50],VV[58],list(3,VV[107],base[3],VV[58])))))));
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
	{object V354=base[0]->c.c_cdr;
	if(endp(V354))invalid_macro_call();
	base[2]= (V354->c.c_car);
	V354=V354->c.c_cdr;
	{object V355=getf(V354,VV[154],OBJNULL);
	if(V355==OBJNULL){
	base[3]= (VV[55]->s.s_gfdef);} else {
	base[3]= V355;
	}}
	check_other_key(V354,1,VV[154]);}
	V356= list(2,VV[58],base[2]);
	V357= make_cons(/* INLINE-ARGS */V356,Cnil);
	base[4]= list(3,VV[24],/* INLINE-ARGS */V357,list(2,VV[100],list(3,VV[101],VV[108],list(3,VV[105],VV[109],list(3,VV[50],VV[58],list(3,VV[107],base[3],VV[58]))))));
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
	{object V358=base[0]->c.c_cdr;
	if(endp(V358))invalid_macro_call();
	base[2]= (V358->c.c_car);
	V358=V358->c.c_cdr;
	base[3]= V358;}
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
	{object V359=base[0]->c.c_cdr;
	if(endp(V359))invalid_macro_call();
	base[2]= (V359->c.c_car);
	V359=V359->c.c_cdr;
	base[3]= V359;}
	base[4]= listA(3,VV[110],base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function GET-SETF-FUNCTION-NAME	*/

static object LI58(V361)

register object V361;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;{object V362;
	base[0]= (V361);
	base[1]= (VV[111]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V362= vs_base[0];
	if(V362==Cnil)goto T557;
	{object V363 = V362;
	VMR56(V363)}
	goto T557;
T557:;}
	{object V365;
	object V366;
	V365= (VV[111]->s.s_dbind);
	{object V367;
	base[1]= (V361);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_package();
	vs_top=sup;
	V367= vs_base[0];
	if(((V367))==Cnil){
	goto T566;}
	base[2]= Cnil;
	base[3]= VV[112];
	base[5]= (V367);
	vs_top=(vs_base=base+5)+1;
	Lpackage_name();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= symbol_name((V361));
	vs_top=(vs_base=base+2)+4;
	Lformat();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= (VV[113]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	Lintern();
	vs_top=sup;
	V366= vs_base[0];
	goto T562;
	goto T566;
T566:;
	base[2]= Cnil;
	base[3]= VV[114];
	base[4]= symbol_name((V361));
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+1)+1;
	Lmake_symbol();
	vs_top=sup;
	V366= vs_base[0];}
	goto T562;
T562:;
	base[1]= V361;
	base[2]= (V365);
	base[3]= (V366);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;
	{object V368 = vs_base[0];
	VMR56(V368)}}
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
	{object V369=base[0]->c.c_cdr;
	base[2]= V369;}
	base[3]= list(3,VV[115],VV[116],list(3,VV[117],list(2,VV[118],list(2,VV[42],base[2])),VV[119]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function DO-STANDARD-DEFSETFS-FOR-DEFCLASS	*/

static object LI60(V371)

object V371;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	{register object V372;
	register object V373;
	V372= (V371);
	V373= CMPcar((V372));
	goto T585;
T585:;
	if(!(((V372))==Cnil)){
	goto T586;}
	{object V374 = Cnil;
	VMR58(V374)}
	goto T586;
T586:;
	(void)((*(LnkLI155))((V373)));
	V372= CMPcdr((V372));
	V373= CMPcar((V372));
	goto T585;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DO-STANDARD-DEFSETF-1	*/

static object LI61(V376)

register object V376;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	if(((*(LnkLI156))((V376)))==Cnil){
	goto T596;}
	{object V377 =((V376))->s.s_plist;
	 object ind= VV[120];
	while(V377!=Cnil){
	if(V377->c.c_car==ind){
	if(((V377->c.c_cdr->c.c_car))!=Cnil){
	goto T597;}
	goto T600;
	}else V377=V377->c.c_cdr->c.c_cdr;}}
	goto T600;
T600:;
	goto T596;
T596:;
	(void)(sputprop((V376),VV[120],Ct));
	base[0]= (*(LnkLI157))((V376));
	base[0]=MMcons(base[0],Cnil);
	{object V378;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V378= vs_base[0];
	{object V380;
	V380= 
	make_cclosure_new(LC66,Cnil,base[0],Cdata);
	base[2]= V378;
	base[3]= make_cons(VV[121],(V380));
	vs_top=(vs_base=base+2)+2;
	siLfset();
	vs_top=sup;}
	base[1]= list(3,VV[122],(V376),(V378));
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	{object V381 = vs_base[0];
	VMR59(V381)}}
	goto T597;
T597:;
	{object V382 = Cnil;
	VMR59(V382)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SETFBOUNDP	*/

static object LI62(V384)

object V384;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;{object V385;
	{object V386 =((V384))->s.s_plist;
	 object ind= VV[123];
	while(V386!=Cnil){
	if(V386->c.c_car==ind){
	V385= (V386->c.c_cdr->c.c_car);
	goto T611;
	}else V386=V386->c.c_cdr->c.c_cdr;}
	V385= Cnil;}
	goto T611;
T611:;
	if(V385==Cnil)goto T610;
	{object V387 = V385;
	VMR60(V387)}
	goto T610;
T610:;}{object V388;
	{object V389 =((V384))->s.s_plist;
	 object ind= VV[124];
	while(V389!=Cnil){
	if(V389->c.c_car==ind){
	V388= (V389->c.c_cdr->c.c_car);
	goto T613;
	}else V389=V389->c.c_cdr->c.c_cdr;}
	V388= Cnil;}
	goto T613;
T613:;
	if(V388==Cnil)goto T612;
	{object V390 = V388;
	VMR60(V390)}
	goto T612;
T612:;}
	{object V391 =((V384))->s.s_plist;
	 object ind= VV[125];
	while(V391!=Cnil){
	if(V391->c.c_car==ind){
	{object V392 = (V391->c.c_cdr->c.c_car);
	VMR60(V392)}
	}else V391=V391->c.c_cdr->c.c_cdr;}
	{object V393 = Cnil;
	VMR60(V393)}}
	return Cnil;
}
/*	macro definition for ORIGINAL-DEFINITION	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V394=base[0]->c.c_cdr;
	if(endp(V394))invalid_macro_call();
	base[2]= (V394->c.c_car);
	V394=V394->c.c_cdr;
	if(!endp(V394))invalid_macro_call();}
	base[3]= list(3,VV[126],base[2],VV[127]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function REDEFINE-FUNCTION	*/

static object LI64(V397,V398)

register object V397;object V398;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	base[0]= V397;
	base[1]= (VV[128]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[128]->s.s_dbind)= vs_base[0];
	{object V400 =((V397))->s.s_plist;
	 object ind= VV[129];
	while(V400!=Cnil){
	if(V400->c.c_car==ind){
	if(((V400->c.c_cdr->c.c_car))!=Cnil){
	goto T618;}
	goto T620;
	}else V400=V400->c.c_cdr->c.c_cdr;}}
	goto T620;
T620:;
	V401 = (V397);
	base[0]= (V397);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V402= vs_base[0];
	(void)(sputprop(V401,VV[129],V402));
	goto T618;
T618:;
	base[0]= (V397);
	base[2]= (V398);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	{object V403 = vs_base[0];
	VMR62(V403)}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC66(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_check;
	{object V404;
	object V405;
	check_arg(2);
	V404=(base[0]);
	V405=(base[1]);
	vs_top=sup;
	{object V406;
	object V407;
	object V408;
	base[5]= CMPcdr((V404));
	vs_top=(vs_base=base+5)+1;
	Lbutlast();
	vs_top=sup;
	V406= vs_base[0];
	{object V409;
	object V410= (V406);
	if(V410==Cnil){
	V407= Cnil;
	goto T628;}
	base[5]=V409=MMcons(Cnil,Cnil);
	goto T629;
T629:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V412= vs_base[0];
	V413 = (V410->c.c_car);
	(V409->c.c_car)= list(2,V412,V413);
	if((V410=MMcdr(V410))==Cnil){
	V407= base[5];
	goto T628;}
	V409=MMcdr(V409)=MMcons(Cnil,Cnil);
	goto T629;}
	goto T628;
T628:;
	{object V414;
	object V415= (V407);
	if(V415==Cnil){
	V408= Cnil;
	goto T632;}
	base[5]=V414=MMcons(Cnil,Cnil);
	goto T633;
T633:;
	(V414->c.c_car)= CMPcar((V415->c.c_car));
	if((V415=MMcdr(V415))==Cnil){
	V408= base[5];
	goto T632;}
	V414=MMcdr(V414)=MMcons(Cnil,Cnil);
	goto T633;}
	goto T632;
T632:;
	base[5]= (V404);
	vs_top=(vs_base=base+5)+1;
	Llast();
	vs_top=sup;
	V416= vs_base[0];
	base[5]= list(3,VV[24],(V407),listA(3,(base0[0]->c.c_car),CMPcar(V416),(V408)));
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
	{object V417;
	check_arg(1);
	V417=(base[0]);
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
	{object V418;
	object V419;
	object V420;
	check_arg(3);
	V418=(base[0]);
	V419=(base[1]);
	V420=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V421;
	if(!(number_compare(small_fixnum(0),base0[0])==0)){
	goto T639;}
	if((V418)==Cnil){
	V422= Cnil;
	goto T641;}
	V422= list(3,VV[50],(V418),list(2,VV[22],(V419)));
	goto T641;
T641:;
	if((V420)==Cnil){
	V423= Cnil;
	goto T642;}
	V423= list(3,VV[50],(V420),list(2,VV[55],(V419)));
	goto T642;
T642:;
	V421= list(3,VV[44],V422,V423);
	goto T637;
	goto T639;
T639:;
	if(((V420))!=Cnil){
	goto T644;}
	if((V418)==Cnil){
	V421= Cnil;
	goto T637;}
	V424 = (V418);
	V421= list(3,VV[50],V424,(*(LnkLI158))(base0[0],(V419)));
	goto T637;
	goto T644;
T644:;
	V425 = (V420);
	V426= list(3,VV[50],V425,(*(LnkLI159))(base0[0],(V419)));
	if((V418)==Cnil){
	V427= Cnil;
	goto T646;}
	V427= list(3,VV[50],(V418),list(2,VV[56],(V420)));
	goto T646;
T646:;
	V421= list(3,VV[44],/* INLINE-ARGS */V426,V427);
	goto T637;
T637:;
	base0[0]= small_fixnum(0);
	base[3]= (V421);
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

