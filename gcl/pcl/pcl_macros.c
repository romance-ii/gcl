
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
	{object V34 = listA(3,/* INLINE-ARGS */V32,/* INLINE-ARGS */V33,(*(LnkLI123))(CMPcdr((V29)),CMPcdr((V30))));
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
	V41= (*(LnkLI124))(CMPcdr((V37)),(V38));
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
	base[0]=VV[125]->s.s_gfdef;
	base[1]= VV[36];
	{object V95;
	V95= (V92);
	 vs_top=base+2;
	 while(V95!=Cnil)
	 {vs_push((V95)->c.c_car);V95=(V95)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk125)();
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
	base[3]= (VFUN_NARGS=2,(*(LnkLI126))((V98),(V99)));
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
	base[4]= (VV[127]->s.s_gfdef);} else {
	base[4]= V102;
	}}
	{object V103=getf(V101,VV[128],OBJNULL);
	if(V103==OBJNULL){
	base[5]= base[2];} else {
	base[5]= V103;
	}}
	check_other_key(V101,2,VV[39],VV[128]);}
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
	(void) (*Lnk129)();
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
	(void) (*Lnk130)();
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
	V161= (*(LnkLI131))((V156),(V157));
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
	V187= (*(LnkLI131))(V185,V186);
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
	{object V191=getf(V190,VV[132],OBJNULL);
	if(V191==OBJNULL){
	base[2]= Cnil;} else {
	base[2]= V191;
	}}
	check_other_key(V190,1,VV[132]);}
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
	(void) (*Lnk129)();
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
	if(((*(LnkLI133))((V271)))!=Cnil){
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
	V278= (VV[134]->s.s_gfdef);
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
	if(((*(LnkLI135))((V283)))!=Cnil){
	goto T477;}
	V288= Cnil;
	goto T476;
	goto T477;
T477:;
	base[0]= (V283);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk136)();
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
	if(((*(LnkLI133))((V283)))==Cnil){
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
	(void)((VFUN_NARGS=3,(*(LnkLI137))((V295),(V296),(V297))));
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
	V308= (VFUN_NARGS=2,(*(LnkLI138))((V304),(V305)));
	V309 = (V305);
	{object V310 = (VFUN_NARGS=3,(*(LnkLI137))(V307,/* INLINE-ARGS */V308,V309));
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
	V316= (VFUN_NARGS=2,(*(LnkLI138))((V312),(V313)));
	V317 = (V313);
	{object V318 = (VFUN_NARGS=3,(*(LnkLI139))(V315,/* INLINE-ARGS */V316,V317));
	VMR46(V318)}
	va_end(ap);
	return Cnil;}
	}
/*	function definition for G2035	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	{register object V319;
	object V320;
	check_arg(2);
	V319=(base[0]);
	V320=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((*(LnkLI133))((V320)))==Cnil){
	goto T509;}
	{object V321;
	V321= (VFUN_NARGS=1,(*(LnkLI138))((V320)));
	(V321)->c.c_car = V319;
	if(((VV[87]->s.s_dbind))==(VV[88])){
	goto T514;}
	if(!(((VV[87]->s.s_dbind))==(VV[89]))){
	goto T515;}
	goto T514;
T514:;
	{object V325;
	base[4]= (V319);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk140)(Lclptr140);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	V325= vs_base[0];
	(CMPcdr(V321))->c.c_car = (V325);
	(void)(CMPcdr(V321));}
	if(((V319))==Cnil){
	goto T525;}
	base[2]= (V319);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk141)(Lclptr141);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T525;}
	{register object V326;
	register object V327;
	V326= CMPcddr((V321));
	V327= CMPcar((V326));
	goto T533;
T533:;
	if(!(((V326))==Cnil)){
	goto T534;}
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T534;
T534:;
	V328= (VFUN_NARGS=4,(*(LnkLI143))((V319),CMPcar((V327)),Cnil,CMPcdr((V327))));
	(void)((*(LnkLI142))(/* INLINE-ARGS */V328,VV[90]));
	V326= CMPcdr((V326));
	V327= CMPcar((V326));
	goto T533;}
	goto T525;
T525:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T515;
T515:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T509;
T509:;
	base[2]= VV[91];
	base[3]= (V320);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	return;
	}
}
/*	function definition for G2044	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_check;
	{object V329;
	object V330;
	check_arg(2);
	V329=(base[0]);
	V330=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((*(LnkLI133))((V330)))==Cnil){
	goto T547;}
	{object V331;
	V331= (VFUN_NARGS=1,(*(LnkLI138))((V330)));
	(CMPcdr((V331)))->c.c_car = V329;
	(void)(CMPcdr((V331)));
	base[3]= V329;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T547;
T547:;
	base[2]= VV[92];
	base[3]= (V330);
	vs_top=(vs_base=base+2)+2;
	Lerror();
	return;
	}
}
/*	function definition for FIND-WRAPPER	*/

static void L51()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	{object V333;
	check_arg(1);
	V333=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (VFUN_NARGS=1,(*(LnkLI144))((V333)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk145)(Lclptr145);
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
	{object V334=base[0]->c.c_cdr;
	if(endp(V334))invalid_macro_call();
	base[2]= (V334->c.c_car);
	V334=V334->c.c_cdr;
	base[3]= V334;}
	V335= list(2,VV[94],base[2]);
	V336= make_cons(/* INLINE-ARGS */V335,Cnil);
	base[4]= list(3,VV[93],/* INLINE-ARGS */V336,listA(3,VV[95],VV[96],base[3]));
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
	{object V337=base[0]->c.c_cdr;
	{object V338=getf(V337,VV[146],OBJNULL);
	if(V338==OBJNULL){
	base[2]= small_fixnum(0);} else {
	base[2]= V338;
	}}
	check_other_key(V337,1,VV[146]);}
	V339= list(2,VV[97],base[2]);
	base[3]= list(3,VV[27],make_cons(/* INLINE-ARGS */V339,VV[98]),VV[99]);
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
	{object V340=base[0]->c.c_cdr;
	if(endp(V340))invalid_macro_call();
	base[2]= (V340->c.c_car);
	V340=V340->c.c_cdr;
	{object V341=getf(V340,VV[147],OBJNULL);
	if(V341==OBJNULL){
	base[3]= (VV[55]->s.s_gfdef);} else {
	base[3]= V341;
	}}
	check_other_key(V340,1,VV[147]);}
	V342= list(2,VV[58],base[2]);
	V343= make_cons(/* INLINE-ARGS */V342,Cnil);
	base[4]= list(3,VV[24],/* INLINE-ARGS */V343,list(2,VV[100],list(3,VV[101],VV[102],list(4,VV[16],VV[103],VV[104],list(3,VV[105],VV[106],list(3,VV[50],VV[58],list(3,VV[107],base[3],VV[58])))))));
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
	{object V344=base[0]->c.c_cdr;
	if(endp(V344))invalid_macro_call();
	base[2]= (V344->c.c_car);
	V344=V344->c.c_cdr;
	{object V345=getf(V344,VV[147],OBJNULL);
	if(V345==OBJNULL){
	base[3]= (VV[55]->s.s_gfdef);} else {
	base[3]= V345;
	}}
	check_other_key(V344,1,VV[147]);}
	V346= list(2,VV[58],base[2]);
	V347= make_cons(/* INLINE-ARGS */V346,Cnil);
	base[4]= list(3,VV[24],/* INLINE-ARGS */V347,list(2,VV[100],list(3,VV[101],VV[108],list(3,VV[105],VV[109],list(3,VV[50],VV[58],list(3,VV[107],base[3],VV[58]))))));
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
	{object V348=base[0]->c.c_cdr;
	if(endp(V348))invalid_macro_call();
	base[2]= (V348->c.c_car);
	V348=V348->c.c_cdr;
	base[3]= V348;}
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
	{object V349=base[0]->c.c_cdr;
	if(endp(V349))invalid_macro_call();
	base[2]= (V349->c.c_car);
	V349=V349->c.c_cdr;
	base[3]= V349;}
	base[4]= listA(3,VV[110],base[2],base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function GET-SETF-FUNCTION-NAME	*/

static object LI58(V351)

object V351;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V352 = list(2,VV[45],(V351));
	VMR56(V352)}
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
	base[3]= list(3,VV[111],VV[112],list(3,VV[113],list(2,VV[114],list(2,VV[42],base[2])),VV[115]));
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
	goto T560;
T560:;
	if(!(((V356))==Cnil)){
	goto T561;}
	{object V358 = Cnil;
	VMR58(V358)}
	goto T561;
T561:;
	(void)((*(LnkLI148))((V357)));
	V356= CMPcdr((V356));
	V357= CMPcar((V356));
	goto T560;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DO-STANDARD-DEFSETF-1	*/

static object LI61(V360)

object V360;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	{object V361 = Cnil;
	VMR59(V361)}
	return Cnil;
}
/*	local entry for function SETFBOUNDP	*/

static object LI62(V363)

object V363;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;{object V364;
	{object V365 =((V363))->s.s_plist;
	 object ind= VV[116];
	while(V365!=Cnil){
	if(V365->c.c_car==ind){
	V364= (V365->c.c_cdr->c.c_car);
	goto T572;
	}else V365=V365->c.c_cdr->c.c_cdr;}
	V364= Cnil;}
	goto T572;
T572:;
	if(V364==Cnil)goto T571;
	{object V366 = V364;
	VMR60(V366)}
	goto T571;
T571:;}{object V367;
	{object V368 =((V363))->s.s_plist;
	 object ind= VV[117];
	while(V368!=Cnil){
	if(V368->c.c_car==ind){
	V367= (V368->c.c_cdr->c.c_car);
	goto T574;
	}else V368=V368->c.c_cdr->c.c_cdr;}
	V367= Cnil;}
	goto T574;
T574:;
	if(V367==Cnil)goto T573;
	{object V369 = V367;
	VMR60(V369)}
	goto T573;
T573:;}
	{object V370 =((V363))->s.s_plist;
	 object ind= VV[118];
	while(V370!=Cnil){
	if(V370->c.c_car==ind){
	{object V371 = (V370->c.c_cdr->c.c_car);
	VMR60(V371)}
	}else V370=V370->c.c_cdr->c.c_cdr;}
	{object V372 = Cnil;
	VMR60(V372)}}
	return Cnil;
}
/*	macro definition for ORIGINAL-DEFINITION	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V373=base[0]->c.c_cdr;
	if(endp(V373))invalid_macro_call();
	base[2]= (V373->c.c_car);
	V373=V373->c.c_cdr;
	if(!endp(V373))invalid_macro_call();}
	base[3]= list(3,VV[119],base[2],VV[120]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function REDEFINE-FUNCTION	*/

static object LI64(V376,V377)

register object V376;object V377;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	base[0]= V376;
	base[1]= (VV[121]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Ladjoin();
	vs_top=sup;
	(VV[121]->s.s_dbind)= vs_base[0];
	{object V379 =((V376))->s.s_plist;
	 object ind= VV[122];
	while(V379!=Cnil){
	if(V379->c.c_car==ind){
	if(((V379->c.c_cdr->c.c_car))!=Cnil){
	goto T579;}
	goto T581;
	}else V379=V379->c.c_cdr->c.c_cdr;}}
	goto T581;
T581:;
	V380 = (V376);
	base[0]= (V376);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V381= vs_base[0];
	(void)(sputprop(V380,VV[122],V381));
	goto T579;
T579:;
	base[0]= (V376);
	base[2]= (V377);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	{object V382 = vs_base[0];
	VMR62(V382)}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC65(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_check;
	{object V383;
	check_arg(1);
	V383=(base[0]);
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
	register object *sup=base+VM64; VC64
	vs_check;
	{object V384;
	object V385;
	object V386;
	check_arg(3);
	V384=(base[0]);
	V385=(base[1]);
	V386=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V387;
	if(!(number_compare(small_fixnum(0),base0[0])==0)){
	goto T589;}
	if((V384)==Cnil){
	V388= Cnil;
	goto T591;}
	V388= list(3,VV[50],(V384),list(2,VV[22],(V385)));
	goto T591;
T591:;
	if((V386)==Cnil){
	V389= Cnil;
	goto T592;}
	V389= list(3,VV[50],(V386),list(2,VV[55],(V385)));
	goto T592;
T592:;
	V387= list(3,VV[44],V388,V389);
	goto T587;
	goto T589;
T589:;
	if(((V386))!=Cnil){
	goto T594;}
	if((V384)==Cnil){
	V387= Cnil;
	goto T587;}
	V390 = (V384);
	V387= list(3,VV[50],V390,(*(LnkLI149))(base0[0],(V385)));
	goto T587;
	goto T594;
T594:;
	V391 = (V386);
	V392= list(3,VV[50],V391,(*(LnkLI150))(base0[0],(V385)));
	if((V384)==Cnil){
	V393= Cnil;
	goto T596;}
	V393= list(3,VV[50],(V384),list(2,VV[56],(V386)));
	goto T596;
T596:;
	V387= list(3,VV[44],/* INLINE-ARGS */V392,V393);
	goto T587;
T587:;
	base0[0]= small_fixnum(0);
	base[3]= (V387);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
static object  LnkTLI150(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[150],(void **)(void *)&LnkLI150,2,first,ap);va_end(ap);return V1;} /* MAKE-CDXR */
static object  LnkTLI149(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[149],(void **)(void *)&LnkLI149,2,first,ap);va_end(ap);return V1;} /* MAKE-CAXR */
static object  LnkTLI148(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[148],(void **)(void *)&LnkLI148,1,first,ap);va_end(ap);return V1;} /* DO-STANDARD-DEFSETF-1 */
static void LnkT145(ptr) object *ptr;{ call_or_link_closure(VV[145],(void **)(void *)&Lnk145,(void **)(void *)&Lclptr145);} /* CLASS-WRAPPER */
static object  LnkTLI144(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[144],(void **)(void *)&LnkLI144,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static object  LnkTLI143(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[143],(void **)(void *)&LnkLI143,first,ap);va_end(ap);return V1;} /* INITIALIZE-INFO */
static object  LnkTLI142(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[142],(void **)(void *)&LnkLI142,2,first,ap);va_end(ap);return V1;} /* UPDATE-INITIALIZE-INFO-INTERNAL */
static void LnkT141(ptr) object *ptr;{ call_or_link_closure(VV[141],(void **)(void *)&Lnk141,(void **)(void *)&Lclptr141);} /* FORWARD-REFERENCED-CLASS-P */
static void LnkT140(ptr) object *ptr;{ call_or_link_closure(VV[140],(void **)(void *)&Lnk140,(void **)(void *)&Lclptr140);} /* CLASS-PREDICATE-NAME */
static object  LnkTLI139(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[139],(void **)(void *)&LnkLI139,first,ap);va_end(ap);return V1;} /* FIND-CLASS-PREDICATE-FROM-CELL */
static object  LnkTLI138(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[138],(void **)(void *)&LnkLI138,first,ap);va_end(ap);return V1;} /* FIND-CLASS-CELL */
static object  LnkTLI137(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[137],(void **)(void *)&LnkLI137,first,ap);va_end(ap);return V1;} /* FIND-CLASS-FROM-CELL */
static void LnkT136(){ call_or_link(VV[136],(void **)(void *)&Lnk136);} /* FIND-STRUCTURE-CLASS */
static object  LnkTLI135(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[135],(void **)(void *)&LnkLI135,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-TYPE-P */
static object  LnkTLI133(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[133],(void **)(void *)&LnkLI133,1,first,ap);va_end(ap);return V1;} /* LEGAL-CLASS-NAME-P */
static void LnkT6(){ call_or_link(VV[6],(void **)(void *)&Lnk6);} /* DELETE */
static object  LnkTLI131(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[131],(void **)(void *)&LnkLI131,2,first,ap);va_end(ap);return V1;} /* DESTRUCTURE-INTERNAL */
static void LnkT130(){ call_or_link(VV[130],(void **)(void *)&Lnk130);} /* DESTRUCTURE */
static void LnkT129(){ call_or_link(VV[129],(void **)(void *)&Lnk129);} /* EXTRACT-DECLARATIONS */
static object  LnkTLI126(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[126],(void **)(void *)&LnkLI126,first,ap);va_end(ap);return V1;} /* STRING-APPEND */
static void LnkT125(){ call_or_link(VV[125],(void **)(void *)&Lnk125);} /* CONCATENATE */
static object  LnkTLI124(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[124],(void **)(void *)&LnkLI124,2,first,ap);va_end(ap);return V1;} /* REMTAIL */
static object  LnkTLI123(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[123],(void **)(void *)&LnkLI123,2,first,ap);va_end(ap);return V1;} /* MAKE-PLIST */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

