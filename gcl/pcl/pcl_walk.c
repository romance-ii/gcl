
#include "cmpinclude.h"
#include "pcl_walk.h"
void init_pcl_walk(){do_init(VV);}
/*	local entry for function UNBOUND-LEXICAL-FUNCTION	*/

static object LI1(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{object V1;
	va_start(ap,first);
	narg= narg - 0;
	V2 = list_vector_new(narg,first,ap);
	V1= V2;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V3 = vs_base[0];
	VMR1(V3)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for WITH-AUGMENTED-ENVIRONMENT	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V4=base[0]->c.c_cdr;
	if(endp(V4))invalid_macro_call();
	{object V5= (V4->c.c_car);
	if(endp(V5))invalid_macro_call();
	base[2]= (V5->c.c_car);
	V5=V5->c.c_cdr;
	if(endp(V5))invalid_macro_call();
	base[3]= (V5->c.c_car);
	V5=V5->c.c_cdr;
	{object V6=getf(V5,VV[18],OBJNULL);
	if(V6==OBJNULL){
	base[4]= Cnil;} else {
	base[4]= V6;
	}}
	{object V7=getf(V5,VV[19],OBJNULL);
	if(V7==OBJNULL){
	base[5]= Cnil;} else {
	base[5]= V7;
	}}
	check_other_key(V5,2,VV[18],VV[19]);}
	V4=V4->c.c_cdr;
	base[6]= V4;}
	V8= list(2,base[2],list(4,VV[2],base[3],base[4],base[5]));
	base[7]= listA(3,VV[1],make_cons(/* INLINE-ARGS */V8,Cnil),base[6]);
	vs_top=(vs_base=base+7)+1;
	return;
}
/*	local entry for function WITH-AUGMENTED-ENVIRONMENT-INTERNAL	*/

static object LI3(V12,V13,V14)

object V12;object V13;object V14;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V15;
	register object V16;
	object V17;
	V15= CMPcar((V12));
	V16= CMPcadr((V12));
	V17= CMPcaddr((V12));
	{register object V18;
	register object V19;
	V18= (V13);
	V19= CMPcar((V18));
	goto T11;
T11:;
	if(!(((V18))==Cnil)){
	goto T12;}
	goto T7;
	goto T12;
T12:;
	{register object V20;
	V21= CMPcar((V19));
	V22= (VV[69]->s.s_gfdef);
	V20= list(3,/* INLINE-ARGS */V21,VV[3],V22);
	V16= make_cons((V20),(V16));}
	V18= CMPcdr((V18));
	V19= CMPcar((V18));
	goto T11;}
	goto T7;
T7:;
	{register object V23;
	register object V24;
	V23= (V14);
	V24= CMPcar((V23));
	goto T29;
T29:;
	if(!(((V23))==Cnil)){
	goto T30;}
	goto T25;
	goto T30;
T30:;
	{register object V25;
	V25= list(3,CMPcar((V24)),VV[4],CMPcadr((V24)));
	V16= make_cons((V25),(V16));}
	V23= CMPcdr((V23));
	V24= CMPcar((V23));
	goto T29;}
	goto T25;
T25:;
	{object V26 = list(3,(V15),(V16),(V17));
	VMR3(V26)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ENVIRONMENT-FUNCTION	*/

static object LI4(V29,V30)

object V29;object V30;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if(((V29))==Cnil){
	goto T43;}
	{object V31;
	{register object x= (V30),V32= CMPcadr((V29));
	while(V32!=Cnil)
	if(eql(x,V32->c.c_car->c.c_car) &&V32->c.c_car != Cnil){
	V31= (V32->c.c_car);
	goto T45;
	}else V32=V32->c.c_cdr;
	V31= Cnil;}
	goto T45;
T45:;
	if((V31)==Cnil){
	{object V33 = Cnil;
	VMR4(V33)}}
	if((CMPcadr((V31)))==(VV[3])){
	goto T46;}
	{object V34 = Cnil;
	VMR4(V34)}
	goto T46;
T46:;
	{object V35 = CMPcaddr((V31));
	VMR4(V35)}}
	goto T43;
T43:;
	{object V36 = Cnil;
	VMR4(V36)}
	return Cnil;
}
/*	local entry for function ENVIRONMENT-MACRO	*/

static object LI5(V39,V40)

object V39;object V40;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	if(((V39))==Cnil){
	goto T49;}
	{object V41;
	{register object x= (V40),V42= CMPcadr((V39));
	while(V42!=Cnil)
	if(eql(x,V42->c.c_car->c.c_car) &&V42->c.c_car != Cnil){
	V41= (V42->c.c_car);
	goto T51;
	}else V42=V42->c.c_cdr;
	V41= Cnil;}
	goto T51;
T51:;
	if((V41)==Cnil){
	{object V43 = Cnil;
	VMR5(V43)}}
	if((CMPcadr((V41)))==(VV[4])){
	goto T52;}
	{object V44 = Cnil;
	VMR5(V44)}
	goto T52;
T52:;
	{object V45 = CMPcaddr((V41));
	VMR5(V45)}}
	goto T49;
T49:;
	{object V46 = Cnil;
	VMR5(V46)}
	return Cnil;
}
/*	macro definition for WITH-NEW-DEFINITION-IN-ENVIRONMENT	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V47=base[0]->c.c_cdr;
	if(endp(V47))invalid_macro_call();
	{object V48= (V47->c.c_car);
	if(endp(V48))invalid_macro_call();
	base[2]= (V48->c.c_car);
	V48=V48->c.c_cdr;
	if(endp(V48))invalid_macro_call();
	base[3]= (V48->c.c_car);
	V48=V48->c.c_cdr;
	if(endp(V48))invalid_macro_call();
	base[4]= (V48->c.c_car);
	V48=V48->c.c_cdr;
	if(!endp(V48))invalid_macro_call();}
	V47=V47->c.c_cdr;
	base[5]= V47;}
	{object V49;
	object V50;
	base[6]= VV[5];
	vs_top=(vs_base=base+6)+1;
	Lmake_symbol();
	vs_top=sup;
	V49= vs_base[0];
	base[6]= VV[6];
	vs_top=(vs_base=base+6)+1;
	Lmake_symbol();
	vs_top=sup;
	V50= vs_base[0];
	V51= list(2,(V49),Cnil);
	V52= list(2,/* INLINE-ARGS */V51,list(2,(V50),Cnil));
	V53= list(2,VV[8],base[4]);
	V54= list(2,VV[11],list(2,VV[12],base[4]));
	V55= list(2,VV[9],list(3,VV[10],/* INLINE-ARGS */V54,list(3,VV[13],VV[11],(V49))));
	V56= list(2,VV[15],list(2,VV[12],base[4]));
	V57= list(4,VV[7],/* INLINE-ARGS */V53,/* INLINE-ARGS */V55,list(2,VV[14],list(3,VV[10],/* INLINE-ARGS */V56,list(3,VV[13],VV[16],(V50)))));
	base[6]= list(4,VV[1],/* INLINE-ARGS */V52,/* INLINE-ARGS */V57,listA(3,VV[17],list(6,base[2],base[3],VV[18],(V49),VV[19],(V50)),base[5]));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	local entry for function CONVERT-MACRO-TO-LAMBDA	*/

static object LI7(object V59,object V58,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{object V60;
	object V61;
	object V62;
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V60= V59;
	V61= V58;
	narg = narg - 2;
	if (narg <= 0) goto T58;
	else {
	V62= first;}
	--narg; goto T59;
	goto T58;
T58:;
	V62= VV[20];
	goto T59;
T59:;
	{object V63;
	base[0]= (V62);
	vs_top=(vs_base=base+0)+1;
	Lmake_symbol();
	vs_top=sup;
	V63= vs_base[0];
	base[0]= listA(4,VV[21],(V63),(V60),(V61));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	base[0]= (V63);
	vs_top=(vs_base=base+0)+1;
	Lmacro_function();
	vs_top=sup;
	{object V64 = vs_base[0];
	VMR7(V64)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for WALKER-ENVIRONMENT-BIND	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V65=base[0]->c.c_cdr;
	if(endp(V65))invalid_macro_call();
	{object V66= (V65->c.c_car);
	if(endp(V66))invalid_macro_call();
	base[2]= (V66->c.c_car);
	V66=V66->c.c_cdr;
	if(endp(V66))invalid_macro_call();
	base[3]= (V66->c.c_car);
	V66=V66->c.c_cdr;
	base[4]= V66;}
	V65=V65->c.c_cdr;
	base[5]= V65;}
	base[6]= listA(3,VV[17],list(4,base[2],base[3],VV[19],listA(3,VV[22],base[3],base[4])),base[5]);
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	local entry for function ENV-LOCK	*/

static object LI9(V68)

object V68;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{object V69 = (*(LnkLI70))((V68),(VV[23]->s.s_dbind));
	VMR9(V69)}
	return Cnil;
}
/*	local entry for function WALKER-ENVIRONMENT-BIND-1	*/

static object LI10(object V70,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V71;
	object V72;
	object V73;
	object V74;
	object V75;
	object V76;
	object V77;
	object V78;
	object V79;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V71= V70;
	narg= narg - 1;
	{
	parse_key_new_new(narg,Vcs +1,(struct key *)(void *)&LI10key,first,ap);
	if(Vcs[1]==0){
	V72= Cnil;
	V73= Cnil;
	}else{
	V72=(Vcs[1]);
	V73= Ct;}
	if(Vcs[2]==0){
	V74= Cnil;
	V75= Cnil;
	}else{
	V74=(Vcs[2]);
	V75= Ct;}
	if(Vcs[3]==0){
	V76= Cnil;
	V77= Cnil;
	}else{
	V76=(Vcs[3]);
	V77= Ct;}
	if(Vcs[4]==0){
	V78= Cnil;
	V79= Cnil;
	}else{
	V78=(Vcs[4]);
	V79= Ct;}
	{register object V80;
	V80= (*(LnkLI70))((V71),(VV[23]->s.s_dbind));{object V81;
	V81= (VV[23]->s.s_dbind);
	if(((V73))==Cnil){
	goto T73;}
	V82= (V72);
	goto T71;
	goto T73;
T73:;
	V82= CMPcar((V80));
	goto T71;
T71:;
	if(((V75))==Cnil){
	goto T77;}
	V83= (V74);
	goto T75;
	goto T77;
T77:;
	V83= CMPcadr((V80));
	goto T75;
T75:;
	if(((V77))==Cnil){
	goto T81;}
	V84= (V76);
	goto T79;
	goto T81;
T81:;
	V84= CMPcaddr((V80));
	goto T79;
T79:;
	if(((V79))==Cnil){
	goto T85;}
	V85= (V78);
	goto T83;
	goto T85;
T85:;
	V85= CMPcadddr((V80));
	goto T83;
T83:;
	V86= list(2,V81,list(4,V82,V83,V84,V85));
	{object V87 = make_cons(/* INLINE-ARGS */V86,Cnil);
	VMR10(V87)}}}
	va_end(ap);
	return Cnil;}
	}}
/*	local entry for function ENV-WALK-FUNCTION	*/

static object LI11(V89)

object V89;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	V90= (*(LnkLI72))((V89));
	{object V91 = CMPcar(/* INLINE-ARGS */V90);
	VMR11(V91)}
	return Cnil;
}
/*	local entry for function ENV-WALK-FORM	*/

static object LI12(V93)

object V93;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	V94= (*(LnkLI72))((V93));
	{object V95 = CMPcadr(/* INLINE-ARGS */V94);
	VMR12(V95)}
	return Cnil;
}
/*	local entry for function ENV-DECLARATIONS	*/

static object LI13(V97)

object V97;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	V98= (*(LnkLI72))((V97));
	{object V99 = CMPcaddr(/* INLINE-ARGS */V98);
	VMR13(V99)}
	return Cnil;
}
/*	local entry for function ENV-LEXICAL-VARIABLES	*/

static object LI14(V101)

object V101;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	V102= (*(LnkLI72))((V101));
	{object V103 = CMPcadddr(/* INLINE-ARGS */V102);
	VMR14(V103)}
	return Cnil;
}
/*	local entry for function NOTE-DECLARATION	*/

static object LI15(V106,V107)

object V106;object V107;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V109;
	object V110;
	V109= (*(LnkLI72))((V107));
	V110= make_cons(V106,CMPcaddr((V109)));
	(CMPcddr((V109)))->c.c_car = (V110);
	(void)(CMPcddr((V109)));
	{object V111 = (V110);
	VMR15(V111)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function NOTE-LEXICAL-BINDING	*/

static object LI16(V114,V115)

object V114;object V115;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{object V116;
	object V117;
	object V118;
	V116= list(2,(V114),VV[24]);
	V117= (*(LnkLI72))((V115));
	V118= make_cons((V116),CMPcadddr((V117)));
	(CMPcdddr((V117)))->c.c_car = (V118);
	(void)(CMPcdddr((V117)));
	{object V119 = (V118);
	VMR16(V119)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VARIABLE-LEXICAL-P	*/

static object LI17(V122,V123)

object V122;object V123;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V124;
	base[0]= (V122);
	base[1]= (*(LnkLI73))((V123));
	base[2]= VV[25];
	base[3]= (VV[8]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	V124= vs_base[0];
	if(!((CMPcadar((V124)))==(VV[24]))){
	goto T100;}
	{object V125 = (V124);
	VMR17(V125)}
	goto T100;
T100:;
	{object V126 = Cnil;
	VMR17(V126)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VARIABLE-SYMBOL-MACRO-P	*/

static object LI18(V129,V130)

object V129;object V130;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	{object V131;
	base[0]= (V129);
	base[1]= (*(LnkLI73))((V130));
	base[2]= VV[25];
	base[3]= (VV[8]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	V131= vs_base[0];
	if(!((CMPcadar((V131)))==(VV[26]))){
	goto T108;}
	{object V132 = (V131);
	VMR18(V132)}
	goto T108;
T108:;
	{object V133 = Cnil;
	VMR18(V133)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VARIABLE-DECLARATION	*/

static object LI19(V137,V138,V139)

register object V137;object V138;object V139;
{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	{register object x= (V137),V140= (VV[27]->s.s_dbind);
	while(V140!=Cnil)
	if(eql(x,V140->c.c_car)){
	goto T111;
	}else V140=V140->c.c_cdr;}
	base[0]= VV[28];
	base[1]= (V137);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V141 = vs_base[0];
	VMR19(V141)}
	goto T111;
T111:;
	{register object V142;{object V143;
	V143= (*(LnkLI74))((V138),(V139));
	if(V143==Cnil)goto T116;
	V142= V143;
	goto T115;
	goto T116;
T116:;}
	V142= (V138);
	goto T115;
T115:;
	{register object V144;
	register object V145;
	V144= (*(LnkLI75))((V139));
	V145= CMPcar((V144));
	goto T121;
T121:;
	if(!(((V144))==Cnil)){
	goto T122;}
	{object V146 = Cnil;
	VMR19(V146)}
	goto T122;
T122:;
	if(!((CMPcar((V145)))==((V137)))){
	goto T126;}
	if(!((CMPcadr((V145)))==((V142)))){
	goto T126;}
	{object V147 = (V145);
	VMR19(V147)}
	goto T126;
T126:;
	V144= CMPcdr((V144));
	V145= CMPcar((V144));
	goto T121;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function VARIABLE-SPECIAL-P	*/

static object LI20(V150,V151)

object V150;object V151;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	V152= (*(LnkLI76))(VV[29],(V150),(V151));
	if(!((((/* INLINE-ARGS */V152)==Cnil?Ct:Cnil))==Cnil)){
	goto T136;}
	{object V153 = Ct;
	VMR20(V153)}
	goto T136;
T136:;
	{object V154 = (*(LnkLI77))((V150));
	VMR20(V154)}
	return Cnil;
}
/*	local entry for function VARIABLE-GLOBALLY-SPECIAL-P	*/

static object LI21(V156)

object V156;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	base[0]= (V156);
	vs_top=(vs_base=base+0)+1;
	siLspecialp();
	vs_top=sup;
	{object V157 = vs_base[0];
	VMR21(V157)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for GET-WALKER-TEMPLATE-INTERNAL	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V158=base[0]->c.c_cdr;
	if(endp(V158))invalid_macro_call();
	base[2]= (V158->c.c_car);
	V158=V158->c.c_cdr;
	if(!endp(V158))invalid_macro_call();}
	base[3]= list(3,VV[30],base[2],VV[31]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for DEFINE-WALKER-TEMPLATE	*/

static void L23()
{register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V159=base[0]->c.c_cdr;
	if(endp(V159))invalid_macro_call();
	base[2]= (V159->c.c_car);
	V159=V159->c.c_cdr;
	if(endp(V159)){
	base[3]= VV[32];
	} else {
	base[3]= (V159->c.c_car);
	V159=V159->c.c_cdr;}
	if(!endp(V159))invalid_macro_call();}
	V160= list(2,VV[36],list(2,VV[37],base[2]));
	base[4]= list(3,VV[33],VV[34],list(3,VV[35],/* INLINE-ARGS */V160,list(2,VV[37],base[3])));
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function GET-WALKER-TEMPLATE	*/

static object LI24(V162)

register object V162;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	if(!(type_of((V162))==t_symbol)){
	goto T141;}{object V163;
	{object V164 =((V162))->s.s_plist;
	 object ind= VV[38];
	while(V164!=Cnil){
	if(V164->c.c_car==ind){
	V163= (V164->c.c_cdr->c.c_car);
	goto T144;
	}else V164=V164->c.c_cdr->c.c_cdr;}
	V163= Cnil;}
	goto T144;
T144:;
	if(V163==Cnil)goto T143;
	{object V165 = V163;
	VMR24(V165)}
	goto T143;
T143:;}
	{object V166 = (*(LnkLI78))((V162));
	VMR24(V166)}
	goto T141;
T141:;
	if(!(type_of((V162))==t_cons||((V162))==Cnil)){
	goto T146;}
	if(!((CMPcar((V162)))==(VV[39]))){
	goto T146;}
	{object V167 = VV[40];
	VMR24(V167)}
	goto T146;
T146:;
	base[0]= VV[41];
	base[1]= (V162);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V168 = vs_base[0];
	VMR24(V168)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function GET-IMPLEMENTATION-DEPENDENT-WALKER-TEMPLATE	*/

static object LI25(V170)

object V170;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{object V171 = Cnil;
	VMR25(V171)}
	return Cnil;
}
/*	function definition for MACROEXPAND-ALL	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	bds_check;
	{object V172;
	object V173;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V172=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T152;}
	V173=(base[1]);
	vs_top=sup;
	goto T153;
	goto T152;
T152:;
	V173= Cnil;
	goto T153;
T153:;
	bds_bind(VV[42],Ct);
	base[3]= (V172);
	base[4]= (V173);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk79)();
	bds_unwind1;
	return;
	}
}
/*	function definition for WALK-FORM	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	{object V174;
	object V175;
	object V176;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V174=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T157;}
	V175=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T158;}
	V176=(base[2]);
	vs_top=sup;
	goto T159;
	goto T157;
T157:;
	V175= Cnil;
	goto T158;
T158:;
	V176= VV[80];
	goto T159;
T159:;
	{object V177;
	V178 = (V175);
	V179= (VFUN_NARGS=3,(*(LnkLI22))((V175),VV[43],(V176)));
	V177= (*(LnkLI2))(V178,Cnil,/* INLINE-ARGS */V179);
	base[3]= (V174);
	base[4]= VV[44];
	base[5]= (V177);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk81)();
	return;}
	}
}
/*	function definition for NESTED-WALK-FORM	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	{object V180;
	object V181;
	object V182;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V180=(base[0]);
	V181=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T166;}
	V182=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T167;}
	base[3]=MMcons(base[3],Cnil);
	vs_top=sup;
	goto T168;
	goto T166;
T166:;
	V182= Cnil;
	goto T167;
T167:;
	base[3]= VV[82];
	base[3]=MMcons(base[3],Cnil);
	goto T168;
T168:;
	V183 = (V180);
	V184= (*(LnkLI83))((V182));
	if(!((V183)==(/* INLINE-ARGS */V184))){
	goto T172;}
	base[4]= (*(LnkLI84))((V182));
	base[4]=MMcons(base[4],base[3]);
	{frame_ptr fr;
	fr=frs_sch_catch((V180));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,(V180));
	base[5]= (V181);
	base[6]= (V182);
	base[7]= 
	make_cclosure_new(LC81,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk79)();
	unwind(fr,(V180));}
	goto T172;
T172:;
	base[4]= (V181);
	base[5]= (V182);
	base[6]= (base[3]->c.c_car);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk79)();
	return;
	}
}
/*	function definition for WALK-FORM-INTERNAL	*/

static void L29()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM29; VC29
	vs_check;
	{VOL object V185;
	VOL object V186;
	VOL object V187;
	check_arg(3);
	V185=(base[0]);
	V186=(base[1]);
	V187=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	frs_push(FRS_CATCH,(V185));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	{VOL object V188;
	VOL object V189;
	base[3]= (*(LnkLI84))((V187));
	base[4]= (V185);
	base[5]= (V186);
	base[6]= (V187);
	vs_top=(vs_base=base+4)+3;
	super_funcall_no_event(base[3]);
	if(vs_base>=vs_top){vs_top=sup;goto T188;}
	V188= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T189;}
	V189= vs_base[0];
	vs_top=sup;
	goto T190;
	goto T188;
T188:;
	V188= Cnil;
	goto T189;
T189:;
	V189= Cnil;
	goto T190;
T190:;
	frs_push(FRS_CATCH,(V188));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	frs_pop();
	return;}
	else{
	if(((V189))==Cnil){
	goto T193;}
	frs_pop();
	frs_pop();
	base[3]= (V188);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T193;
T193:;
	if(((V185))==((V188))){
	goto T196;}
	base[3]= (V188);
	base[4]= (V186);
	base[5]= (V187);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk81)();
	frs_pop();
	frs_pop();
	return;
	goto T196;
T196:;
	if(type_of((V188))==t_cons){
	goto T202;}
	{object V190;
	V191= (*(LnkLI85))((V188),(V187));
	V190= CMPcar(/* INLINE-ARGS */V191);
	if(((V190))==Cnil){
	goto T206;}
	{object V192;
	base[3]= CMPcddr((V190));
	base[4]= (V186);
	base[5]= (V187);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V192= vs_base[0];
	if(!(((V192))==(CMPcddr((V190))))){
	goto T213;}
	if(((VV[42]->s.s_dbind))==Cnil){
	goto T216;}
	frs_pop();
	frs_pop();
	base[3]= (V192);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T216;
T216:;
	frs_pop();
	frs_pop();
	base[3]= (V188);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T213;
T213:;
	frs_pop();
	frs_pop();
	base[3]= (V192);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T206;
T206:;
	frs_pop();
	frs_pop();
	base[3]= (V188);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T202;
T202:;
	{register object V193;
	register object V194;
	V193= CMPcar((V188));
	V194= (*(LnkLI86))((V193));
	if(((V194))==Cnil){
	goto T221;}
	if(!(type_of((V194))==t_symbol)){
	goto T224;}
	base[5]= (V188);
	base[6]= (V186);
	base[7]= (V187);
	vs_top=(vs_base=base+5)+3;
	super_funcall_no_event((V194));
	frs_pop();
	frs_pop();
	return;
	goto T224;
T224:;
	V195= (*(LnkLI87))((V188),(V194),(V186),(V187));
	frs_pop();
	frs_pop();
	base[5]= V195;
	vs_top=(vs_base=base+5)+1;
	return;
	goto T221;
T221:;
	{register object V196;
	object V197;
	{object V198;
	V199 = (V187);
	V200= (VFUN_NARGS=3,(*(LnkLI22))((V187),VV[45],(V188)));
	V198= (*(LnkLI2))(V199,Cnil,/* INLINE-ARGS */V200);
	base[5]= (V188);
	base[6]= (V198);
	vs_top=(vs_base=base+5)+2;
	Lmacroexpand_1();}
	if(vs_base>=vs_top){vs_top=sup;goto T233;}
	V196= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T234;}
	V197= vs_base[0];
	vs_top=sup;
	goto T235;
	goto T233;
T233:;
	V196= Cnil;
	goto T234;
T234:;
	V197= Cnil;
	goto T235;
T235:;
	if(((V197))==Cnil){
	goto T237;}
	{object V201;
	base[5]= (V196);
	base[6]= (V186);
	base[7]= (V187);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V201= vs_base[0];
	if(!(((V201))==((V196)))){
	goto T244;}
	if(((VV[42]->s.s_dbind))==Cnil){
	goto T247;}
	frs_pop();
	frs_pop();
	base[5]= (V196);
	vs_top=(vs_base=base+5)+1;
	return;
	goto T247;
T247:;
	frs_pop();
	frs_pop();
	base[5]= (V188);
	vs_top=(vs_base=base+5)+1;
	return;
	goto T244;
T244:;
	frs_pop();
	frs_pop();
	base[5]= (V201);
	vs_top=(vs_base=base+5)+1;
	return;}
	goto T237;
T237:;
	if(!(type_of((V193))==t_symbol)){
	goto T250;}
	base[5]= (V193);
	vs_top=(vs_base=base+5)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T250;}
	base[5]= (V193);
	vs_top=(vs_base=base+5)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T250;}
	base[5]= VV[46];
	base[6]= (V193);
	vs_top=(vs_base=base+5)+2;
	Lerror();
	frs_pop();
	frs_pop();
	return;
	goto T250;
T250:;
	V202= (*(LnkLI87))((V196),VV[47],(V186),(V187));
	frs_pop();
	frs_pop();
	base[5]= V202;
	vs_top=(vs_base=base+5)+1;
	return;}}}}}
	}
}
/*	local entry for function WALK-TEMPLATE	*/

static object LI30(V207,V208,V209,V210)

register object V207;register object V208;register object V209;register object V210;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	if(!(type_of((V208))!=t_cons)){
	goto T261;}
	{object V211= (V208);
	if((V211!= VV[63])
	&& (V211!= VV[3])
	&& (V211!= VV[88])
	&& (V211!= VV[89])
	&& (V211!= VV[90]))goto T263;
	base[0]= (V207);
	base[1]= VV[44];
	base[2]= (V210);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	{object V212 = vs_base[0];
	VMR30(V212)}
	goto T263;
T263:;
	if((V211!= VV[37])
	&& (V211!= Cnil))goto T267;
	{object V213 = (V207);
	VMR30(V213)}
	goto T267;
T267:;
	if((V211!= VV[91]))goto T268;
	base[0]= (V207);
	base[1]= VV[48];
	base[2]= (V210);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	{object V214 = vs_base[0];
	VMR30(V214)}
	goto T268;
T268:;
	if((V211!= VV[39])
	&& (V211!= VV[92]))goto T272;
	if(type_of((V207))==t_symbol){
	goto T273;}
	if(!(type_of((V207))==t_cons||((V207))==Cnil)){
	goto T274;}
	if(!(((long)length((V207)))==(2))){
	goto T274;}
	if(!((CMPcar((V207)))==(VV[35]))){
	goto T274;}
	goto T273;
T273:;
	{object V215 = (V207);
	VMR30(V215)}
	goto T274;
T274:;
	base[0]= (V207);
	base[1]= (V209);
	base[2]= (V210);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	{object V216 = vs_base[0];
	VMR30(V216)}
	goto T272;
T272:;
	FEerror("The ECASE key value ~s is illegal.",1,V211);
	{object V217 = Cnil;
	VMR30(V217)}}
	goto T261;
T261:;
	{object V218= CMPcar((V208));
	if((V218!= VV[93]))goto T285;
	V219 = (V207);
	V220= CMPcdr((V208));
	if((CMPcddr((V208)))!=Cnil){
	goto T288;}
	V221= Cnil;
	goto T286;
	goto T288;
T288:;
	V222 = CMPmake_fixnum((long)length((V207)));
	V223 = CMPmake_fixnum((long)length(CMPcddr((V208))));
	V224= number_minus(V222,V223);
	V221= nthcdr(fix(/* INLINE-ARGS */V224),(V207));
	goto T286;
T286:;
	V225 = (V209);
	V226 = (V210);
	{object V227 = (*(LnkLI94))(V219,/* INLINE-ARGS */V220,V221,V225,V226);
	VMR30(V227)}
	goto T285;
T285:;
	if((V218!= VV[57]))goto T290;
	{object V228;
	V228= (V207);
	{object V229= CMPcadr((V208));
	if(!(type_of(V229)==t_cons||(V229)==Cnil)){
	goto T298;}}
	base[0]= CMPcadr((V208));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T295;}
	goto T296;
	goto T298;
T298:;
	base[0]= CMPcadr((V208));
	base[1]= (V207);
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event(base[0]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T295;}
	goto T296;
T296:;
	V208= CMPcaddr((V208));
	goto T293;
	goto T295;
T295:;
	V208= CMPcadddr((V208));
	goto T293;
T293:;
	V207= (V228);}
	goto TTL;
	goto T290;
T290:;
	if((V218!= VV[95]))goto T305;
	V208= CMPcadr((V208));
	goto TTL;
	goto T305;
T305:;
	if(!(type_of((V207))!=t_cons)){
	goto T312;}
	{object V230 = (V207);
	VMR30(V230)}
	goto T312;
T312:;
	V231 = (V207);
	V232= (*(LnkLI87))(CMPcar((V207)),CMPcar((V208)),(V209),(V210));
	V233= (*(LnkLI87))(CMPcdr((V207)),CMPcdr((V208)),(V209),(V210));
	{object V234 = (*(LnkLI96))(V231,/* INLINE-ARGS */V232,/* INLINE-ARGS */V233);
	VMR30(V234)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-TEMPLATE-HANDLE-REPEAT	*/

static object LI31(V240,V241,V242,V243,V244)

object V240;object V241;object V242;object V243;object V244;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	if(!(((V240))==((V242)))){
	goto T315;}
	{object V245 = (*(LnkLI87))((V240),CMPcdr((V241)),(V243),(V244));
	VMR31(V245)}
	goto T315;
T315:;
	{object V246 = (*(LnkLI97))((V240),(V241),CMPcar((V241)),(V242),(V243),(V244));
	VMR31(V246)}
	return Cnil;
}
/*	local entry for function WALK-TEMPLATE-HANDLE-REPEAT-1	*/

static object LI32(V253,V254,V255,V256,V257,V258)

register object V253;register object V254;register object V255;register object V256;register object V257;register object V258;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	if(((V253))!=Cnil){
	goto T318;}
	{object V259 = Cnil;
	VMR32(V259)}
	goto T318;
T318:;
	if(!(((V253))==((V256)))){
	goto T321;}
	if(((V255))!=Cnil){
	goto T324;}
	{object V260 = (*(LnkLI87))((V256),CMPcdr((V254)),(V257),(V258));
	VMR32(V260)}
	goto T324;
T324:;
	base[0]= VV[49];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V261 = vs_base[0];
	VMR32(V261)}
	goto T321;
T321:;
	if(((V255))!=Cnil){
	goto T328;}
	{object V262;
	V262= (V254);
	V255= CMPcar((V254));
	V254= (V262);}
	goto TTL;
	goto T328;
T328:;
	V263 = (V253);
	V264= (*(LnkLI87))(CMPcar((V253)),CMPcar((V255)),(V257),(V258));
	V265= (*(LnkLI97))(CMPcdr((V253)),(V254),CMPcdr((V255)),(V256),(V257),(V258));
	{object V266 = (*(LnkLI96))(V263,/* INLINE-ARGS */V264,/* INLINE-ARGS */V265);
	VMR32(V266)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-REPEAT-EVAL	*/

static object LI33(V269,V270)

register object V269;object V270;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	if((V269)==Cnil){
	{object V271 = Cnil;
	VMR33(V271)}}
	V272 = (V269);
	base[0]= CMPcar((V269));
	base[1]= VV[44];
	base[2]= (V270);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V273= vs_base[0];
	V274= (*(LnkLI98))(CMPcdr((V269)),(V270));
	{object V275 = (*(LnkLI96))(V272,V273,/* INLINE-ARGS */V274);
	VMR33(V275)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RECONS	*/

static object LI34(V279,V280,V281)

object V279;object V280;object V281;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	if(!((CMPcar((V279)))==((V280)))){
	goto T341;}
	if((CMPcdr((V279)))==((V281))){
	goto T342;}
	goto T341;
T341:;
	{object V282 = make_cons((V280),(V281));
	VMR34(V282)}
	goto T342;
T342:;
	{object V283 = (V279);
	VMR34(V283)}
	return Cnil;
}
/*	local entry for function RELIST	*/

static object LI35(object V284,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB35 VMS35 VMV35
	{object V285;
	object V286;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V285= V284;
	narg= narg - 1;
	V287 = list_vector_new(narg,first,ap);
	V286= V287;
	if(((V286))!=Cnil){
	goto T347;}
	{object V288 = Cnil;
	VMR35(V288)}
	goto T347;
T347:;
	{object V289 = (*(LnkLI99))((V285),(V286),Cnil);
	VMR35(V289)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function RELIST*	*/

static object LI36(object V290,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{object V291;
	object V292;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V291= V290;
	narg= narg - 1;
	V293 = list_vector_new(narg,first,ap);
	V292= V293;
	{object V294 = (*(LnkLI99))((V291),(V292),Ct);
	VMR36(V294)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function RELIST-INTERNAL	*/

static object LI37(V298,V299,V300)

object V298;register object V299;object V300;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	if((CMPcdr((V299)))!=Cnil){
	goto T350;}
	if(((V300))==Cnil){
	goto T353;}
	{object V301 = CMPcar((V299));
	VMR37(V301)}
	goto T353;
T353:;
	{object V302 = (*(LnkLI96))((V298),CMPcar((V299)),Cnil);
	VMR37(V302)}
	goto T350;
T350:;
	V303 = (V298);
	V304= CMPcar((V299));
	V305= (*(LnkLI99))(CMPcdr((V298)),CMPcdr((V299)),(V300));
	{object V306 = (*(LnkLI96))(V303,/* INLINE-ARGS */V304,/* INLINE-ARGS */V305);
	VMR37(V306)}
	return Cnil;
}
/*	function definition for WALK-DECLARATIONS	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	{object V307;
	object V308;
	register object V309;
	object V310;
	register object V311;
	object V312;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>6) too_many_arguments();
	V307=(base[0]);
	V308=(base[1]);
	V309=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T355;}
	V310=(base[3]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T356;}
	V311=(base[4]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T357;}
	V312=(base[5]);
	vs_top=sup;
	goto T358;
	goto T355;
T355:;
	V310= Cnil;
	goto T356;
T356:;
	V311= Cnil;
	goto T357;
T357:;
	V312= Cnil;
	goto T358;
T358:;
	{object V313;
	object V314;
	object V315;
	V313= CMPcar((V307));
	V314= Cnil;
	V315= Cnil;
	if(!(type_of((V313))==t_string)){
	goto T366;}
	if((CMPcdr((V307)))==Cnil){
	goto T366;}
	if(((V310))!=Cnil){
	goto T366;}
	if(((V311))!=Cnil){
	goto T366;}
	V316 = (V307);
	V317 = (V313);
	base[7]= CMPcdr((V307));
	base[8]= (V308);
	base[9]= (V309);
	base[10]= Ct;
	vs_top=(vs_base=base+7)+4;
	(void) (*Lnk100)();
	vs_top=sup;
	V318= vs_base[0];
	base[7]= (*(LnkLI96))(V316,V317,V318);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T366;
T366:;
	if(!(type_of((V313))==t_cons||((V313))==Cnil)){
	goto T380;}
	if(!((CMPcar((V313)))==(VV[50]))){
	goto T380;}
	{register object V319;
	register object V320;
	V319= CMPcdr((V313));
	V320= CMPcar((V319));
	goto T388;
T388:;
	if(!(((V319))==Cnil)){
	goto T389;}
	goto T384;
	goto T389;
T389:;
	{register object V321;
	register object V322;
	object V323;
	V321= CMPcar((V320));
	V322= CMPcadr((V320));
	V323= CMPcddr((V320));
	{register object x= (V321),V324= (VV[27]->s.s_dbind);
	while(V324!=Cnil)
	if(eql(x,V324->c.c_car)){
	goto T400;
	}else V324=V324->c.c_cdr;
	goto T399;}
	goto T400;
T400:;
	V325 = (V321);{object V327;
	V327= (*(LnkLI74))((V322),(V309));
	if(V327==Cnil)goto T402;
	V326= V327;
	goto T401;
	goto T402;
T402:;}
	V326= (V322);
	goto T401;
T401:;
	V328 = (V323);
	V329= listA(3,V325,V326,V328);
	(void)((*(LnkLI101))(/* INLINE-ARGS */V329,(V309)));
	goto T397;
	goto T399;
T399:;
	(void)((*(LnkLI101))((V320),(V309)));
	goto T397;
T397:;
	V311= make_cons(V320,(V311));}
	V319= CMPcdr((V319));
	V320= CMPcar((V319));
	goto T388;}
	goto T384;
T384:;
	V331 = (V307);
	V332 = (V313);
	base[7]= CMPcdr((V307));
	base[8]= (V308);
	base[9]= (V309);
	base[10]= (V310);
	base[11]= (V311);
	vs_top=(vs_base=base+7)+5;
	(void) (*Lnk100)();
	vs_top=sup;
	V333= vs_base[0];
	base[7]= (*(LnkLI96))(V331,V332,V333);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T380;
T380:;
	if(((V313))==Cnil){
	goto T417;}
	if(!(type_of((V313))==t_cons||((V313))==Cnil)){
	goto T417;}
	if(((*(LnkLI86))(CMPcar((V313))))!=Cnil){
	goto T417;}
	base[7]= (V313);
	base[8]= (V309);
	vs_top=(vs_base=base+7)+2;
	Lmacroexpand_1();
	if(vs_base<vs_top){
	V315= vs_base[0];
	vs_base++;
	}else{
	V315= Cnil;}
	if(vs_base<vs_top){
	V314= vs_base[0];
	}else{
	V314= Cnil;}
	vs_top=sup;
	if(((V314))==Cnil){
	goto T417;}
	base[7]= (*(LnkLI96))((V307),(V315),CMPcdr((V307)));
	base[8]= (V308);
	base[9]= (V309);
	base[10]= (V310);
	base[11]= (V311);
	if((V312)!=Cnil){
	base[12]= (V312);
	goto T434;}
	base[12]= (V307);
	goto T434;
T434:;
	vs_top=(vs_base=base+7)+6;
	(void) (*Lnk100)();
	return;
	goto T417;
T417:;
	if((V312)!=Cnil){
	base[7]= (V312);
	goto T435;}
	base[7]= (V307);
	goto T435;
T435:;
	base[8]= (V309);
	vs_top=(vs_base=base+7)+2;
	super_funcall_no_event((V308));
	return;}
	}
}
/*	local entry for function WALK-UNEXPECTED-DECLARE	*/

static object LI39(V337,V338,V339)

object V337;object V338;object V339;
{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	base[0]= VV[51];
	base[1]= (V337);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk102)();
	vs_top=sup;
	{object V340 = (V337);
	VMR39(V340)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-ARGLIST	*/

static object LI40(object V343,object V342,object V341,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB40 VMS40 VMV40
	{register object V344;
	object V345;
	register object V346;
	object V347;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V344= V343;
	V345= V342;
	V346= V341;
	narg = narg - 3;
	if (narg <= 0) goto T440;
	else {
	V347= first;}
	--narg; goto T441;
	goto T440;
T440:;
	V347= Cnil;
	goto T441;
T441:;
	{register object V348;
	V348= Cnil;
	if(((V344))!=Cnil){
	goto T445;}
	{object V349 = Cnil;
	VMR40(V349)}
	goto T445;
T445:;
	V348= CMPcar((V344));
	V350 = (V348);
	if(!(type_of(V350)==t_symbol)){
	goto T448;}{object V351;
	{register object x= (V348),V352= VV[52];
	while(V352!=Cnil)
	if(eql(x,V352->c.c_car)){
	V351= V352;
	goto T453;
	}else V352=V352->c.c_cdr;
	V351= Cnil;}
	goto T453;
T453:;
	if(V351==Cnil)goto T452;
	goto T451;
	goto T452;
T452:;}
	(void)((*(LnkLI103))((V348),(V346)));
	goto T451;
T451:;
	V353 = (V344);
	V354 = (V348);
	V355= CMPcdr((V344));
	V356 = (V345);
	V357 = (V346);
	if((V347)==Cnil){
	V358= Cnil;
	goto T454;}
	{register object x= (V348),V360= VV[52];
	while(V360!=Cnil)
	if(eql(x,V360->c.c_car)){
	V359= V360;
	goto T455;
	}else V360=V360->c.c_cdr;
	V359= Cnil;}
	goto T455;
T455:;
	V358= ((V359)==Cnil?Ct:Cnil);
	goto T454;
T454:;
	V361= (VFUN_NARGS=4,(*(LnkLI104))(/* INLINE-ARGS */V355,V356,V357,V358));
	{object V362 = (*(LnkLI96))(V353,V354,/* INLINE-ARGS */V361);
	VMR40(V362)}
	goto T448;
T448:;
	if(!(type_of((V348))==t_cons)){
	goto T457;}
	{object V363;
	V364 = (V344);
	if(((V347))==Cnil){
	goto T462;}
	V365= (VFUN_NARGS=4,(*(LnkLI104))((V348),(V345),(V346),(V347)));
	goto T460;
	goto T462;
T462:;
	V366 = (V348);
	V367= CMPcar((V348));
	base[0]= CMPcadr((V348));
	base[1]= VV[44];
	base[2]= (V346);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V368= vs_base[0];
	V365= (VFUN_NARGS=4,(*(LnkLI105))(V366,/* INLINE-ARGS */V367,V368,CMPcddr((V348))));
	goto T460;
T460:;
	V369= (VFUN_NARGS=4,(*(LnkLI104))(CMPcdr((V344)),(V345),(V346),Cnil));
	V363= (*(LnkLI96))(V364,V365,/* INLINE-ARGS */V369);
	if(!(type_of(CMPcar((V348)))==t_symbol)){
	goto T470;}
	(void)((*(LnkLI103))(CMPcar((V348)),(V346)));
	goto T468;
	goto T470;
T470:;
	(void)((*(LnkLI103))(CMPcadar((V348)),(V346)));
	goto T468;
T468:;
	if(!((CMPcddr((V348)))==Cnil)){
	goto T473;}
	goto T472;
	goto T473;
T473:;
	if(!(((type_of(CMPcaddr((V348)))==t_symbol?Ct:Cnil))==Cnil)){
	goto T475;}
	goto T472;
	goto T475;
T475:;
	(void)((*(LnkLI103))(CMPcaddr((V348)),(V346)));
	goto T472;
T472:;
	{object V370 = (V363);
	VMR40(V370)}}
	goto T457;
T457:;
	base[0]= VV[53];
	base[1]= (V344);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V371 = vs_base[0];
	VMR40(V371)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function WALK-LET	*/

static object LI41(V375,V376,V377)

object V375;object V376;object V377;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V378 = (*(LnkLI106))((V375),(V376),(V377),Cnil);
	VMR41(V378)}
	return Cnil;
}
/*	local entry for function WALK-LET*	*/

static object LI42(V382,V383,V384)

object V382;object V383;object V384;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	{object V385 = (*(LnkLI106))((V382),(V383),(V384),Ct);
	VMR42(V385)}
	return Cnil;
}
/*	local entry for function WALK-PROG	*/

static object LI43(V389,V390,V391)

object V389;object V390;object V391;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	{object V392 = (*(LnkLI107))((V389),(V390),(V391),Cnil);
	VMR43(V392)}
	return Cnil;
}
/*	local entry for function WALK-PROG*	*/

static object LI44(V396,V397,V398)

object V396;object V397;object V398;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{object V399 = (*(LnkLI107))((V396),(V397),(V398),Ct);
	VMR44(V399)}
	return Cnil;
}
/*	local entry for function WALK-DO	*/

static object LI45(V403,V404,V405)

object V403;object V404;object V405;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	{object V406 = (*(LnkLI108))((V403),(V404),(V405),Cnil);
	VMR45(V406)}
	return Cnil;
}
/*	local entry for function WALK-DO*	*/

static object LI46(V410,V411,V412)

object V410;object V411;object V412;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{object V413 = (*(LnkLI108))((V410),(V411),(V412),Ct);
	VMR46(V413)}
	return Cnil;
}
/*	local entry for function WALK-LETLET*	*/

static object LI47(V418,V419,V420,V421)

register object V418;object V419;object V420;object V421;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{object V422;
	V423 = (V420);
	V424= (VFUN_NARGS=1,(*(LnkLI22))((V420)));
	V422= (*(LnkLI2))(V423,Cnil,/* INLINE-ARGS */V424);
	{object V425;
	object V426;
	object V427;
	object V428;
	object V429;
	V425= CMPcar((V418));
	V426= CMPcadr((V418));
	V427= CMPcddr((V418));
	V428= (*(LnkLI109))((V426),(V420),(V422),(V419),(V421));
	base[5]= (V427);
	base[6]= (VV[98]->s.s_gfdef);
	base[7]= (V422);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V429= vs_base[0];
	{object V430 = (VFUN_NARGS=4,(*(LnkLI105))((V418),(V425),(V428),(V429)));
	VMR47(V430)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-LOCALLY	*/

static object LI48(V434,V435,V436)

object V434;object V435;object V436;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V437;
	object V438;
	object V439;
	V437= CMPcar((V434));
	V438= CMPcdr((V434));
	base[3]= (V438);
	base[4]= (VV[98]->s.s_gfdef);
	base[5]= (V436);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V439= vs_base[0];
	{object V440 = (VFUN_NARGS=3,(*(LnkLI105))((V434),(V437),(V439)));
	VMR48(V440)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-PROGPROG*	*/

static object LI50(V445,V446,V447,V448)

register object V445;object V446;object V447;object V448;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	base[0]=MMcons((V446),Cnil);
	{object V449;
	V450 = (V447);
	V451= (VFUN_NARGS=1,(*(LnkLI22))((V447)));
	V449= (*(LnkLI2))(V450,Cnil,/* INLINE-ARGS */V451);
	{object V452;
	object V453;
	V452= CMPcadr((V445));
	if(type_of((V452))==t_symbol){
	goto T497;}
	V453= Cnil;
	goto T496;
	goto T497;
T497:;
	V453= (((((V452))==(Cnil)?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T496;
T496:;
	{object V454;
	object V455;
	object V456;
	object V457;
	if(((V453))==Cnil){
	goto T501;}
	base[3]= CMPcar((V445));
	base[4]= CMPcadr((V445));
	base[5]= CMPcaddr((V445));
	base[6]= CMPcdddr((V445));
	vs_top=(vs_base=base+3)+4;
	goto T499;
	goto T501;
T501:;
	base[3]= CMPcar((V445));
	base[4]= Cnil;
	base[5]= CMPcadr((V445));
	base[6]= CMPcddr((V445));
	vs_top=(vs_base=base+3)+4;
	goto T499;
T499:;
	if(vs_base>=vs_top){vs_top=sup;goto T511;}
	V454= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T512;}
	V455= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T513;}
	V456= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T514;}
	V457= vs_base[0];
	vs_top=sup;
	goto T515;
	goto T511;
T511:;
	V454= Cnil;
	goto T512;
T512:;
	V455= Cnil;
	goto T513;
T513:;
	V456= Cnil;
	goto T514;
T514:;
	V457= Cnil;
	goto T515;
T515:;
	{object V458;
	object V459;
	V458= (*(LnkLI109))((V456),(V447),(V449),(base[0]->c.c_car),(V448));
	base[5]= (V457);
	base[6]= 
	make_cclosure_new(LC82,Cnil,base[0],Cdata);
	base[7]= (V449);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V459= vs_base[0];
	if(((V455))==Cnil){
	goto T522;}
	{object V460 = (VFUN_NARGS=5,(*(LnkLI105))((V445),(V454),(V455),(V458),(V459)));
	VMR49(V460)}
	goto T522;
T522:;
	{object V461 = (VFUN_NARGS=4,(*(LnkLI105))((V445),(V454),(V458),(V459)));
	VMR49(V461)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-DODO*	*/

static object LI51(V466,V467,V468,V469)

register object V466;object V467;object V468;object V469;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{register object V470;
	V471 = (V468);
	V472= (VFUN_NARGS=1,(*(LnkLI22))((V468)));
	V470= (*(LnkLI2))(V471,Cnil,/* INLINE-ARGS */V472);
	{object V473;
	object V474;
	object V475;
	object V476;
	object V477;
	object V478;
	V473= CMPcar((V466));
	V474= CMPcadr((V466));
	V475= CMPcaddr((V466));
	V476= CMPcdddr((V466));
	V477= (*(LnkLI109))((V474),(V468),(V470),(V467),(V469));
	base[6]= (V476);
	base[7]= (VV[98]->s.s_gfdef);
	base[8]= (V470);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V478= vs_base[0];
	V479 = (V466);
	V480 = (V473);
	V481= (*(LnkLI110))((V474),(V477),(V467),(V470));
	V482= (*(LnkLI87))((V475),VV[54],(V467),(V470));
	V483 = (V478);
	{object V484 = (VFUN_NARGS=5,(*(LnkLI105))(V479,V480,/* INLINE-ARGS */V481,/* INLINE-ARGS */V482,V483));
	VMR50(V484)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WALK-LET-IF	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	{object V485;
	object V486;
	object V487;
	check_arg(3);
	V485=(base[0]);
	V486=(base[1]);
	V487=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V488;
	object V489;
	object V490;
	V488= CMPcadr((V485));
	V489= CMPcaddr((V485));
	V490= CMPcdddr((V485));
	{object V492;
	object V493= (V489);
	if(V493==Cnil){
	V491= Cnil;
	goto T538;}
	base[4]=V492=MMcons(Cnil,Cnil);
	goto T539;
T539:;
	if(!(type_of((V493->c.c_car))==t_cons||((V493->c.c_car))==Cnil)){
	goto T542;}
	(V492->c.c_car)= CMPcar((V493->c.c_car));
	goto T540;
	goto T542;
T542:;
	(V492->c.c_car)= (V493->c.c_car);
	goto T540;
T540:;
	if((V493=MMcdr(V493))==Cnil){
	V491= base[4];
	goto T538;}
	V492=MMcdr(V492)=MMcons(Cnil,Cnil);
	goto T539;}
	goto T538;
T538:;
	V495= list(2,VV[50],make_cons(VV[29],V491));
	V496= listA(3,VV[56],Cnil,(V490));
	V497= make_cons(/* INLINE-ARGS */V496,Cnil);
	base[3]= list(4,VV[1],Cnil,/* INLINE-ARGS */V495,list(3,VV[55],/* INLINE-ARGS */V497,list(4,VV[57],(V488),list(3,VV[1],(V489),VV[58]),VV[59])));
	base[4]= (V486);
	base[5]= (V487);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk81)();
	return;}
	}
}
/*	local entry for function WALK-MULTIPLE-VALUE-SETQ	*/

static object LI54(V501,V502,V503)

register object V501;object V502;object V503;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	base[0]=MMcons((V503),Cnil);
	{object V504;
	V504= CMPcadr((V501));
	base[1]= 
	make_cclosure_new(LC83,Cnil,base[0],Cdata);
	base[2]= (V504);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk111)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T548;}
	{object V505;
	object V506;
	object V507;
	object V508;
	{object V509;
	object V510= (V504);
	if(V510==Cnil){
	V505= Cnil;
	goto T552;}
	base[5]=V509=MMcons(Cnil,Cnil);
	goto T553;
T553:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	(V509->c.c_car)= vs_base[0];
	if((V510=MMcdr(V510))==Cnil){
	V505= base[5];
	goto T552;}
	V509=MMcdr(V509)=MMcons(Cnil,Cnil);
	goto T553;}
	goto T552;
T552:;
	{object V512;
	object V513= (V504);
	object V514= (V505);
	if(V513==Cnil||V514==Cnil){
	V506= Cnil;
	goto T555;}
	base[5]=V512=MMcons(Cnil,Cnil);
	goto T556;
T556:;
	(V512->c.c_car)= list(3,VV[60],(V513->c.c_car),(V514->c.c_car));
	if((V513=MMcdr(V513))==Cnil||(V514=MMcdr(V514))==Cnil){
	V506= base[5];
	goto T555;}
	V512=MMcdr(V512)=MMcons(Cnil,Cnil);
	goto T556;}
	goto T555;
T555:;
	V507= listA(4,VV[61],(V505),CMPcaddr((V501)),(V506));
	base[5]= (V507);
	base[6]= (V502);
	base[7]= (base[0]->c.c_car);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V508= vs_base[0];
	if(!(((V508))==((V507)))){
	goto T564;}
	{object V517 = (V501);
	VMR52(V517)}
	goto T564;
T564:;
	{object V518 = (V508);
	VMR52(V518)}}
	goto T548;
T548:;
	{object V519 = (*(LnkLI87))((V501),VV[62],(V502),(base[0]->c.c_car));
	VMR52(V519)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-MULTIPLE-VALUE-BIND	*/

static object LI56(V523,V524,V525)

register object V523;object V524;object V525;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	base[0]=MMcons((V525),Cnil);
	base[1]=MMcons((V524),base[0]);
	V526 = (base[0]->c.c_car);
	V527= (VFUN_NARGS=1,(*(LnkLI22))((base[0]->c.c_car)));
	base[2]= (*(LnkLI2))(V526,Cnil,/* INLINE-ARGS */V527);
	base[2]=MMcons(base[2],base[1]);
	{object V528;
	object V529;
	object V530;
	object V531;
	V528= CMPcar((V523));
	base[4]= CMPcadr((V523));
	base[4]=MMcons(base[4],base[2]);
	V529= (*(LnkLI87))(CMPcaddr((V523)),VV[63],(base[1]->c.c_car),(base[0]->c.c_car));
	V530= CMPcdddr((V523));
	base[7]=MMcons(Cnil,base[4]);
	base[9]= (V530);
	base[10]= 
	make_cclosure_new(LC84,Cnil,base[7],Cdata);
	base[11]= (base[2]->c.c_car);
	vs_top=(vs_base=base+9)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V531= vs_base[0];
	{object V532 = (VFUN_NARGS=5,(*(LnkLI105))((V523),(V528),(base[7]->c.c_car),(V529),(V531)));
	VMR53(V532)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-BINDINGS-1	*/

static object LI57(V538,V539,V540,V541,V542)

register object V538;object V539;register object V540;object V541;object V542;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	if((V538)==Cnil){
	{object V543 = Cnil;
	VMR54(V543)}}
	{register object V544;
	V544= CMPcar((V538));
	V545 = (V538);
	if(!(type_of((V544))==t_symbol)){
	goto T578;}
	(void)((*(LnkLI103))((V544),(V540)));
	V546= V544;
	goto T576;
	goto T578;
T578:;
	{object V548;
	V549 = (V544);
	V550= CMPcar((V544));
	base[0]= CMPcadr((V544));
	base[1]= (V541);
	if(((V542))==Cnil){
	goto T587;}
	base[2]= (V540);
	goto T585;
	goto T587;
T587:;
	base[2]= (V539);
	goto T585;
T585:;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V551= vs_base[0];
	V548= (VFUN_NARGS=4,(*(LnkLI105))(V549,/* INLINE-ARGS */V550,V551,CMPcddr((V544))));
	(void)((*(LnkLI103))(CMPcar((V544)),(V540)));
	V546= (V548);}
	goto T576;
T576:;
	V552= (*(LnkLI109))(CMPcdr((V538)),(V539),(V540),(V541),(V542));
	{object V553 = (*(LnkLI96))(V545,V546,/* INLINE-ARGS */V552);
	VMR54(V553)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-BINDINGS-2	*/

static object LI58(V558,V559,V560,V561)

register object V558;object V559;object V560;object V561;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	if((V558)==Cnil){
	{object V562 = Cnil;
	VMR55(V562)}}
	{register object V563;
	object V564;
	V563= CMPcar((V558));
	V564= CMPcar((V559));
	V565 = (V558);
	if(!(type_of((V563))==t_symbol)){
	goto T594;}
	V566= (V563);
	goto T592;
	goto T594;
T594:;
	V567 = (V563);
	V568= CMPcar((V564));
	V569= CMPcadr((V564));
	V570= (*(LnkLI87))(CMPcddr((V563)),VV[64],(V560),(V561));
	V566= (VFUN_NARGS=4,(*(LnkLI105))(V567,/* INLINE-ARGS */V568,/* INLINE-ARGS */V569,/* INLINE-ARGS */V570));
	goto T592;
T592:;
	V571= (*(LnkLI110))(CMPcdr((V558)),CMPcdr((V559)),(V560),(V561));
	{object V572 = (*(LnkLI96))(V565,V566,/* INLINE-ARGS */V571);
	VMR55(V572)}}
	return Cnil;
}
/*	local entry for function WALK-LAMBDA	*/

static object LI59(V576,V577,V578)

register object V576;object V577;object V578;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V579;
	V580 = (V578);
	V581= (VFUN_NARGS=1,(*(LnkLI22))((V578)));
	V579= (*(LnkLI2))(V580,Cnil,/* INLINE-ARGS */V581);
	{object V582;
	object V583;
	object V584;
	object V585;
	V582= CMPcadr((V576));
	V583= CMPcddr((V576));
	V584= (VFUN_NARGS=3,(*(LnkLI104))((V582),(V577),(V579)));
	base[4]= (V583);
	base[5]= (VV[98]->s.s_gfdef);
	base[6]= (V579);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V585= vs_base[0];
	{object V586 = (VFUN_NARGS=4,(*(LnkLI105))((V576),CMPcar((V576)),(V584),(V585)));
	VMR56(V586)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-NAMED-LAMBDA	*/

static object LI60(V590,V591,V592)

register object V590;object V591;object V592;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;
	{object V593;
	V594 = (V592);
	V595= (VFUN_NARGS=1,(*(LnkLI22))((V592)));
	V593= (*(LnkLI2))(V594,Cnil,/* INLINE-ARGS */V595);
	{object V596;
	object V597;
	object V598;
	object V599;
	object V600;
	V596= CMPcadr((V590));
	V597= CMPcaddr((V590));
	V598= CMPcdddr((V590));
	V599= (VFUN_NARGS=3,(*(LnkLI104))((V597),(V591),(V593)));
	base[5]= (V598);
	base[6]= (VV[98]->s.s_gfdef);
	base[7]= (V593);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V600= vs_base[0];
	{object V601 = (VFUN_NARGS=5,(*(LnkLI105))((V590),CMPcar((V590)),(V596),(V599),(V600)));
	VMR57(V601)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-SETQ	*/

static object LI61(V605,V606,V607)

object V605;object V606;object V607;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	if((CMPcdddr((V605)))==Cnil){
	goto T614;}
	{object V608;
	object V609;
	{register object V610;
	register object V611;
	V611= CMPcdr((V605));
	V610= Cnil;
	goto T619;
T619:;
	if(((V611))!=Cnil){
	goto T621;}
	V608= nreverse((V610));
	goto T616;
	goto T621;
T621:;
	{register object V612;
	register object V613;
	{register object V614;
	V614= CMPcar((V611));
	V611= CMPcdr((V611));
	V612= (V614);}
	{register object V615;
	V615= CMPcar((V611));
	V611= CMPcdr((V611));
	V613= (V615);}
	{register object V616;
	V616= list(3,VV[60],(V612),(V613));
	V610= make_cons((V616),(V610));}}
	goto T619;}
	goto T616;
T616:;
	V609= (*(LnkLI98))((V608),(V607));
	if(!(((V608))==((V609)))){
	goto T637;}
	{object V617 = (V605);
	VMR58(V617)}
	goto T637;
T637:;
	{object V618 = make_cons(VV[65],(V609));
	VMR58(V618)}}
	goto T614;
T614:;
	{object V619;
	object V620;
	object V621;
	V619= CMPcadr((V605));
	V620= CMPcaddr((V605));
	V622= (*(LnkLI85))((V619),(V607));
	V621= CMPcar(/* INLINE-ARGS */V622);
	if(((V621))==Cnil){
	goto T643;}
	{object V623;
	object V624;
	V623= list(3,VV[35],CMPcddr((V621)),(V620));
	base[5]= (V623);
	base[6]= (V606);
	base[7]= (V607);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V624= vs_base[0];
	if(!(((V623))==((V624)))){
	goto T651;}
	{object V625 = (V605);
	VMR58(V625)}
	goto T651;
T651:;
	{object V626 = (V624);
	VMR58(V626)}}
	goto T643;
T643:;
	V627 = (V605);
	base[3]= (V619);
	base[4]= VV[48];
	base[5]= (V607);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V628= vs_base[0];
	base[3]= (V620);
	base[4]= VV[44];
	base[5]= (V607);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V629= vs_base[0];
	{object V630 = (VFUN_NARGS=4,(*(LnkLI112))(V627,VV[60],V628,V629));
	VMR58(V630)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-SYMBOL-MACROLET	*/

static object LI62(V634,V635,V636)

object V634;object V635;object V636;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	{object V637;
	V637= CMPcadr((V634));
	{object V638;
	V639 = (V636);
	{object V641;
	object V642= (V637);
	if(V642==Cnil){
	V640= Cnil;
	goto T663;}
	base[1]=V641=MMcons(Cnil,Cnil);
	goto T664;
T664:;
	(V641->c.c_car)= listA(3,CMPcar((V642->c.c_car)),VV[26],CMPcadr((V642->c.c_car)));
	if((V642=MMcdr(V642))==Cnil){
	V640= base[1];
	goto T663;}
	V641=MMcdr(V641)=MMcons(Cnil,Cnil);
	goto T664;}
	goto T663;
T663:;
	V644= (*(LnkLI73))((V636));
	V645= append(V640,/* INLINE-ARGS */V644);
	V646= (VFUN_NARGS=3,(*(LnkLI22))((V636),VV[66],/* INLINE-ARGS */V645));
	V638= (*(LnkLI2))(V639,Cnil,/* INLINE-ARGS */V646);
	V647 = (V634);
	V648 = (V637);
	V649= (*(LnkLI98))(CMPcddr((V634)),(V638));
	{object V650 = (VFUN_NARGS=4,(*(LnkLI105))(V647,VV[67],V648,/* INLINE-ARGS */V649));
	VMR59(V650)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-TAGBODY	*/

static object LI63(V654,V655,V656)

object V654;object V655;object V656;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;
	V657 = (V654);
	V658= CMPcar((V654));
	V659= (*(LnkLI113))(CMPcdr((V654)),(V655),(V656));
	{object V660 = (*(LnkLI96))(V657,/* INLINE-ARGS */V658,/* INLINE-ARGS */V659);
	VMR60(V660)}
	return Cnil;
}
/*	local entry for function WALK-TAGBODY-1	*/

static object LI64(V664,V665,V666)

register object V664;object V665;object V666;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	if((V664)==Cnil){
	{object V667 = Cnil;
	VMR61(V667)}}
	V668 = (V664);
	base[0]= CMPcar((V664));
	if(!(type_of(CMPcar((V664)))==t_symbol)){
	goto T670;}
	base[1]= VV[37];
	goto T668;
	goto T670;
T670:;
	base[1]= (V665);
	goto T668;
T668:;
	base[2]= (V666);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V669= vs_base[0];
	V670= (*(LnkLI113))(CMPcdr((V664)),(V665),(V666));
	{object V671 = (*(LnkLI96))(V668,V669,/* INLINE-ARGS */V670);
	VMR61(V671)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-COMPILER-LET	*/

static object LI65(V675,V676,V677)

object V675;object V676;object V677;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	{register object V678;
	register object V679;
	V678= Cnil;
	V679= Cnil;
	{register object V680;
	register object V681;
	V680= CMPcadr((V675));
	V681= CMPcar((V680));
	goto T677;
T677:;
	if(!(((V680))==Cnil)){
	goto T678;}
	goto T673;
	goto T678;
T678:;
	if(!(type_of((V681))==t_symbol)){
	goto T684;}
	{register object V682;
	V682= (V681);
	V678= make_cons((V682),(V678));}
	{register object V683;
	V683= Cnil;
	V679= make_cons((V683),(V679));
	goto T682;}
	goto T684;
T684:;
	{register object V684;
	V684= CMPcar((V681));
	V678= make_cons((V684),(V678));}
	{register object V685;
	base[3]= CMPcadr((V681));
	vs_top=(vs_base=base+3)+1;
	Leval();
	vs_top=sup;
	V685= vs_base[0];
	V679= make_cons((V685),(V679));}
	goto T682;
T682:;
	V680= CMPcdr((V680));
	V681= CMPcar((V680));
	goto T677;}
	goto T673;
T673:;
	V686 = (V675);
	V687= CMPcar((V675));
	V688= CMPcadr((V675));
	{object symbols,values;
	bds_ptr V690=bds_top;
	base[0]= (V678);
	symbols= base[0];
	base[1]= (V679);
	values= base[1];
	while(!endp(symbols)){
	if(endp(values))bds_bind(MMcar(symbols),OBJNULL);
	else{bds_bind(MMcar(symbols),MMcar(values));
	values=MMcdr(values);}
	symbols=MMcdr(symbols);}
	V691= (*(LnkLI98))(CMPcddr((V675)),(V677));
	bds_unwind(V690);
	V689= V691;}
	{object V692 = (VFUN_NARGS=4,(*(LnkLI105))(V686,/* INLINE-ARGS */V687,/* INLINE-ARGS */V688,V689));
	VMR62(V692)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-MACROLET	*/

static object LI68(V696,V697,V698)

object V696;object V697;object V698;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	base[0]= (V697);
	V699= (*(LnkLI84))((V698));
	V700= (VFUN_NARGS=3,(*(LnkLI22))(Cnil,VV[43],/* INLINE-ARGS */V699));
	base[1]= (*(LnkLI2))(Cnil,Cnil,/* INLINE-ARGS */V700);
	{register object V701;
	register object V702;
	V701= Cnil;
	V702= Cnil;
	{object V703= CMPcar((V696));
	if((V703!= VV[55])
	&& (V703!= VV[114]))goto T707;
	{register object V704;
	register object V705;
	V704= CMPcadr((V696));
	V705= CMPcar((V704));
	goto T711;
T711:;
	if(!(((V704))==Cnil)){
	goto T712;}
	goto T706;
	goto T712;
T712:;
	V701= make_cons(V705,(V701));
	V704= CMPcdr((V704));
	V705= CMPcar((V704));
	goto T711;}
	goto T707;
T707:;
	if((V703!= VV[115]))goto T723;
	{register object V707;
	register object V708;
	V707= CMPcadr((V696));
	V708= CMPcar((V707));
	goto T727;
T727:;
	if(!(((V707))==Cnil)){
	goto T728;}
	goto T706;
	goto T728;
T728:;
	{object V709;
	V710= CMPcar((V708));
	V711= CMPcadr((V708));
	V712= CMPcddr((V708));
	V713= coerce_to_string(CMPcar((V708)));
	V709= list(2,/* INLINE-ARGS */V710,(VFUN_NARGS=3,(*(LnkLI116))(/* INLINE-ARGS */V711,/* INLINE-ARGS */V712,/* INLINE-ARGS */V713)));
	V702= make_cons((V709),(V702));}
	V707= CMPcdr((V707));
	V708= CMPcar((V707));
	goto T727;}
	goto T723;
T723:;
	FEerror("The ECASE key value ~s is illegal.",1,V703);
	goto T706;}
	goto T706;
T706:;
	{object V714;
	V714= (*(LnkLI2))((V698),(V701),(V702));
	V715 = (V696);
	V716= CMPcar((V696));
	base[2]= CMPcadr((V696));
	vs_top=(vs_base=base+2)+1;
	L69(base);
	vs_top=sup;
	V717= vs_base[0];
	base[2]= CMPcddr((V696));
	base[3]= (VV[98]->s.s_gfdef);
	base[4]= (V714);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V718= vs_base[0];
	{object V719 = (VFUN_NARGS=4,(*(LnkLI105))(V715,/* INLINE-ARGS */V716,V717,V718));
	VMR63(V719)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-FLET	*/

static object LI72(V723,V724,V725)

object V723;object V724;object V725;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	base[0]= (V725);
	base[1]= (V724);
	V726 = (V723);
	V727= CMPcar((V723));
	V728= CMPcdr((V723));
	base[2]= CMPcadr((V723));
	vs_top=(vs_base=base+2)+1;
	L73(base);
	vs_top=sup;
	V729= vs_base[0];
	{register object V731;
	register object V732;
	V731= Cnil;
	V732= Cnil;
	{object V733= CMPcar((V723));
	if((V733!= VV[55])
	&& (V733!= VV[114]))goto T751;
	{register object V734;
	register object V735;
	V734= CMPcadr((V723));
	V735= CMPcar((V734));
	goto T755;
T755:;
	if(!(((V734))==Cnil)){
	goto T756;}
	goto T750;
	goto T756;
T756:;
	V731= make_cons(V735,(V731));
	V734= CMPcdr((V734));
	V735= CMPcar((V734));
	goto T755;}
	goto T751;
T751:;
	if((V733!= VV[115]))goto T767;
	{register object V737;
	register object V738;
	V737= CMPcadr((V723));
	V738= CMPcar((V737));
	goto T771;
T771:;
	if(!(((V737))==Cnil)){
	goto T772;}
	goto T750;
	goto T772;
T772:;
	{object V739;
	V740= CMPcar((V738));
	V741= CMPcadr((V738));
	V742= CMPcddr((V738));
	V743= coerce_to_string(CMPcar((V738)));
	V739= list(2,/* INLINE-ARGS */V740,(VFUN_NARGS=3,(*(LnkLI116))(/* INLINE-ARGS */V741,/* INLINE-ARGS */V742,/* INLINE-ARGS */V743)));
	V732= make_cons((V739),(V732));}
	V737= CMPcdr((V737));
	V738= CMPcar((V737));
	goto T771;}
	goto T767;
T767:;
	FEerror("The ECASE key value ~s is illegal.",1,V733);
	goto T750;}
	goto T750;
T750:;
	{object V744;
	V744= (*(LnkLI2))(base[0],(V731),(V732));
	base[2]= CMPcddr((V723));
	base[3]= (VV[98]->s.s_gfdef);
	base[4]= (V744);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V730= vs_base[0];}}
	V745= (*(LnkLI96))(/* INLINE-ARGS */V728,V729,V730);
	{object V746 = (*(LnkLI96))(V726,/* INLINE-ARGS */V727,/* INLINE-ARGS */V745);
	VMR64(V746)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-LABELS	*/

static object LI76(V750,V751,V752)

object V750;object V751;object V752;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	base[0]= (V751);
	{register object V753;
	register object V754;
	V753= Cnil;
	V754= Cnil;
	{object V755= CMPcar((V750));
	if((V755!= VV[55])
	&& (V755!= VV[114]))goto T789;
	{register object V756;
	register object V757;
	V756= CMPcadr((V750));
	V757= CMPcar((V756));
	goto T793;
T793:;
	if(!(((V756))==Cnil)){
	goto T794;}
	goto T788;
	goto T794;
T794:;
	V753= make_cons(V757,(V753));
	V756= CMPcdr((V756));
	V757= CMPcar((V756));
	goto T793;}
	goto T789;
T789:;
	if((V755!= VV[115]))goto T805;
	{register object V759;
	register object V760;
	V759= CMPcadr((V750));
	V760= CMPcar((V759));
	goto T809;
T809:;
	if(!(((V759))==Cnil)){
	goto T810;}
	goto T788;
	goto T810;
T810:;
	{object V761;
	V762= CMPcar((V760));
	V763= CMPcadr((V760));
	V764= CMPcddr((V760));
	V765= coerce_to_string(CMPcar((V760)));
	V761= list(2,/* INLINE-ARGS */V762,(VFUN_NARGS=3,(*(LnkLI116))(/* INLINE-ARGS */V763,/* INLINE-ARGS */V764,/* INLINE-ARGS */V765)));
	V754= make_cons((V761),(V754));}
	V759= CMPcdr((V759));
	V760= CMPcar((V759));
	goto T809;}
	goto T805;
T805:;
	FEerror("The ECASE key value ~s is illegal.",1,V755);
	goto T788;}
	goto T788;
T788:;
	base[1]= (*(LnkLI2))((V752),(V753),(V754));
	V766 = (V750);
	V767= CMPcar((V750));
	V768= CMPcdr((V750));
	base[2]= CMPcadr((V750));
	vs_top=(vs_base=base+2)+1;
	L77(base);
	vs_top=sup;
	V769= vs_base[0];
	base[2]= CMPcddr((V750));
	base[3]= (VV[98]->s.s_gfdef);
	base[4]= base[1];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V770= vs_base[0];
	V771= (*(LnkLI96))(/* INLINE-ARGS */V768,V769,V770);
	{object V772 = (*(LnkLI96))(V766,/* INLINE-ARGS */V767,/* INLINE-ARGS */V771);
	VMR65(V772)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-IF	*/

static object LI78(V776,V777,V778)

register object V776;object V777;object V778;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	{object V779;
	object V780;
	object V781;
	V779= CMPcadr((V776));
	V780= CMPcaddr((V776));
	if((CMPcddddr((V776)))==Cnil){
	goto T833;}
	base[0]= VV[68];
	base[1]= (V776);
	base[2]= CMPmake_fixnum((long)length(CMPcdr((V776))));
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk102)();
	vs_top=sup;
	V781= make_cons(VV[65],CMPcdddr((V776)));
	goto T831;
	goto T833;
T833:;
	V781= CMPcadddr((V776));
	goto T831;
T831:;
	V782 = (V776);
	base[0]= (V779);
	base[1]= (V777);
	base[2]= (V778);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V783= vs_base[0];
	base[0]= (V780);
	base[1]= (V777);
	base[2]= (V778);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V784= vs_base[0];
	base[0]= (V781);
	base[1]= (V777);
	base[2]= (V778);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V785= vs_base[0];
	{object V786 = (VFUN_NARGS=5,(*(LnkLI112))(V782,VV[57],V783,V784,V785));
	VMR66(V786)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function WALK-DEFINITIONS	*/

static void L77(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_check;
	{object V787;
	check_arg(1);
	V787=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V787))!=Cnil){
	goto T852;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T852;
T852:;
	V788 = (V787);
	V789= (*(LnkLI117))(CMPcar((V787)),base0[0],base0[1]);
	base[1]= CMPcdr((V787));
	vs_top=(vs_base=base+1)+1;
	L77(base0);
	vs_top=sup;
	V790= vs_base[0];
	base[1]= (*(LnkLI96))(V788,/* INLINE-ARGS */V789,V790);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function WALK-DEFINITIONS	*/

static void L73(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_check;
	{object V791;
	check_arg(1);
	V791=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V791))!=Cnil){
	goto T857;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T857;
T857:;
	V792 = (V791);
	V793= (*(LnkLI117))(CMPcar((V791)),base0[1],base0[0]);
	base[1]= CMPcdr((V791));
	vs_top=(vs_base=base+1)+1;
	L73(base0);
	vs_top=sup;
	V794= vs_base[0];
	base[1]= (*(LnkLI96))(V792,/* INLINE-ARGS */V793,V794);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function WALK-DEFINITIONS	*/

static void L69(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_check;
	{object V795;
	check_arg(1);
	V795=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((V795)==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	{object V796;
	V796= CMPcar((V795));
	V797 = (V795);
	V798 = (V796);
	V799= CMPcar((V796));
	V800= (VFUN_NARGS=4,(*(LnkLI104))(CMPcadr((V796)),base0[0],base0[1],Ct));
	base[1]= CMPcddr((V796));
	base[2]= (VV[98]->s.s_gfdef);
	base[3]= base0[1];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V801= vs_base[0];
	V802= (VFUN_NARGS=4,(*(LnkLI105))(V798,/* INLINE-ARGS */V799,/* INLINE-ARGS */V800,V801));
	base[1]= CMPcdr((V795));
	vs_top=(vs_base=base+1)+1;
	L69(base0);
	vs_top=sup;
	V803= vs_base[0];
	base[1]= (*(LnkLI96))(V797,/* INLINE-ARGS */V802,V803);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC84(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM70; VC70
	vs_check;
	{object V804;
	object V805;
	check_arg(2);
	V804=(base[0]);
	V805=(base[1]);
	vs_top=sup;
	(base0[0]->c.c_car)= (*(LnkLI109))((base0[1]->c.c_car),(base0[4]->c.c_car),(base0[2]->c.c_car),(base0[3]->c.c_car),Cnil);
	base[2]= (*(LnkLI98))((V804),(V805));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC83(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM71; VC71
	vs_check;
	{object V806;
	check_arg(1);
	V806=(base[0]);
	vs_top=sup;
	base[1]= (*(LnkLI85))((V806),(base0[0]->c.c_car));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC82(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM72; VC72
	vs_check;
	{object V807;
	object V808;
	check_arg(2);
	V807=(base[0]);
	V808=(base[1]);
	vs_top=sup;
	base[2]= (*(LnkLI113))((V807),(base0[0]->c.c_car),(V808));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC81(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM73; VC73
	vs_check;
	{register object V809;
	object V810;
	register object V811;
	check_arg(3);
	V809=(base[0]);
	V810=(base[1]);
	V811=(base[2]);
	vs_top=sup;
	{register object V812;
	register object V813;
	object V814;
	object V815;
	V812= Cnil;
	V813= Cnil;
	V814= Cnil;
	V815= Cnil;
	goto T872;
T872:;
	base[3]= (V809);
	base[4]= (V810);
	base[5]= (V811);
	vs_top=(vs_base=base+3)+3;
	super_funcall_no_event((base0[1]->c.c_car));
	if(vs_base<vs_top){
	V812= vs_base[0];
	vs_base++;
	}else{
	V812= Cnil;}
	if(vs_base<vs_top){
	V813= vs_base[0];
	}else{
	V813= Cnil;}
	vs_top=sup;
	if(((V813))==Cnil){
	goto T881;}
	goto T870;
	goto T881;
T881:;
	{register object V816;
	V816= (((((V812))==((V809))?Ct:Cnil))==Cnil?Ct:Cnil);
	if(((V816))==Cnil){
	goto T885;}
	goto T879;
	goto T885;
T885:;
	if(type_of((V812))==t_cons){
	goto T888;}
	goto T870;
	goto T888;
T888:;
	if(((*(LnkLI86))(CMPcar((V812))))==Cnil){
	goto T891;}
	goto T870;
	goto T891;
T891:;
	{register object V817;
	register object V818;
	{register object V819;
	V820 = (V811);
	V821= (VFUN_NARGS=3,(*(LnkLI22))((V811),VV[45],(V812)));
	V819= (*(LnkLI2))(V820,Cnil,/* INLINE-ARGS */V821);
	base[3]= (V812);
	base[4]= (V819);
	vs_top=(vs_base=base+3)+2;
	Lmacroexpand_1();}
	if(vs_base>=vs_top){vs_top=sup;goto T897;}
	V817= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T898;}
	V818= vs_base[0];
	vs_top=sup;
	goto T899;
	goto T897;
T897:;
	V817= Cnil;
	goto T898;
T898:;
	V818= Cnil;
	goto T899;
T899:;
	if(((V818))==Cnil){
	goto T901;}
	V812= (V817);
	goto T879;
	goto T901;
T901:;
	goto T870;}}
	goto T879;
T879:;
	V809= (V812);
	goto T872;
	goto T870;
T870:;
	base[3]= (V812);
	base[4]= (V810);
	base[5]= (V811);
	vs_top=(vs_base=base+3)+3;
	super_funcall_no_event((base0[0]->c.c_car));
	if(vs_base<vs_top){
	V814= vs_base[0];
	vs_base++;
	}else{
	V814= Cnil;}
	if(vs_base<vs_top){
	V815= vs_base[0];
	}else{
	V815= Cnil;}
	vs_top=sup;
	base[3]= (V814);
	if((V813)==Cnil){
	base[4]= Cnil;
	goto T912;}
	base[4]= (V815);
	goto T912;
T912:;
	vs_top=(vs_base=base+3)+2;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC80(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM74; VC74
	vs_check;
	{object V822;
	object V823;
	object V824;
	check_arg(3);
	V822=(base[0]);
	V823=(base[1]);
	V824=(base[2]);
	vs_top=sup;
	base[3]= (V822);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC79(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM75; VC75
	vs_check;
	{object V825;
	object V826;
	object V827;
	check_arg(3);
	V825=(base[0]);
	V826=(base[1]);
	V827=(base[2]);
	vs_top=sup;
	base[3]= (V825);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
static object  LnkTLI117(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[117],(void **)(void *)&LnkLI117,3,first,ap);va_end(ap);return V1;} /* WALK-LAMBDA */
static object  LnkTLI116(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[116],(void **)(void *)&LnkLI116,first,ap);va_end(ap);return V1;} /* CONVERT-MACRO-TO-LAMBDA */
static object  LnkTLI113(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[113],(void **)(void *)&LnkLI113,3,first,ap);va_end(ap);return V1;} /* WALK-TAGBODY-1 */
static object  LnkTLI112(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[112],(void **)(void *)&LnkLI112,first,ap);va_end(ap);return V1;} /* RELIST */
static void LnkT111(){ call_or_link(VV[111],(void **)(void *)&Lnk111);} /* SOME */
static object  LnkTLI110(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[110],(void **)(void *)&LnkLI110,4,first,ap);va_end(ap);return V1;} /* WALK-BINDINGS-2 */
static object  LnkTLI109(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[109],(void **)(void *)&LnkLI109,5,first,ap);va_end(ap);return V1;} /* WALK-BINDINGS-1 */
static object  LnkTLI108(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[108],(void **)(void *)&LnkLI108,4,first,ap);va_end(ap);return V1;} /* WALK-DODO* */
static object  LnkTLI107(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[107],(void **)(void *)&LnkLI107,4,first,ap);va_end(ap);return V1;} /* WALK-PROGPROG* */
static object  LnkTLI106(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[106],(void **)(void *)&LnkLI106,4,first,ap);va_end(ap);return V1;} /* WALK-LETLET* */
static object  LnkTLI105(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[105],(void **)(void *)&LnkLI105,first,ap);va_end(ap);return V1;} /* RELIST* */
static object  LnkTLI104(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[104],(void **)(void *)&LnkLI104,first,ap);va_end(ap);return V1;} /* WALK-ARGLIST */
static object  LnkTLI103(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[103],(void **)(void *)&LnkLI103,2,first,ap);va_end(ap);return V1;} /* NOTE-LEXICAL-BINDING */
static void LnkT102(){ call_or_link(VV[102],(void **)(void *)&Lnk102);} /* WARN */
static object  LnkTLI101(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[101],(void **)(void *)&LnkLI101,2,first,ap);va_end(ap);return V1;} /* NOTE-DECLARATION */
static void LnkT100(){ call_or_link(VV[100],(void **)(void *)&Lnk100);} /* WALK-DECLARATIONS */
static object  LnkTLI99(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[99],(void **)(void *)&LnkLI99,3,first,ap);va_end(ap);return V1;} /* RELIST-INTERNAL */
static object  LnkTLI98(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[98],(void **)(void *)&LnkLI98,2,first,ap);va_end(ap);return V1;} /* WALK-REPEAT-EVAL */
static object  LnkTLI97(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[97],(void **)(void *)&LnkLI97,6,first,ap);va_end(ap);return V1;} /* WALK-TEMPLATE-HANDLE-REPEAT-1 */
static object  LnkTLI96(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[96],(void **)(void *)&LnkLI96,3,first,ap);va_end(ap);return V1;} /* RECONS */
static object  LnkTLI94(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[94],(void **)(void *)&LnkLI94,5,first,ap);va_end(ap);return V1;} /* WALK-TEMPLATE-HANDLE-REPEAT */
static object  LnkTLI87(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[87],(void **)(void *)&LnkLI87,4,first,ap);va_end(ap);return V1;} /* WALK-TEMPLATE */
static object  LnkTLI86(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[86],(void **)(void *)&LnkLI86,1,first,ap);va_end(ap);return V1;} /* GET-WALKER-TEMPLATE */
static object  LnkTLI85(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[85],(void **)(void *)&LnkLI85,2,first,ap);va_end(ap);return V1;} /* VARIABLE-SYMBOL-MACRO-P */
static object  LnkTLI84(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[84],(void **)(void *)&LnkLI84,1,first,ap);va_end(ap);return V1;} /* ENV-WALK-FUNCTION */
static object  LnkTLI83(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[83],(void **)(void *)&LnkLI83,1,first,ap);va_end(ap);return V1;} /* ENV-WALK-FORM */
static void LnkT81(){ call_or_link(VV[81],(void **)(void *)&Lnk81);} /* WALK-FORM-INTERNAL */
static object  LnkTLI22(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[22],(void **)(void *)&LnkLI22,first,ap);va_end(ap);return V1;} /* WALKER-ENVIRONMENT-BIND-1 */
static object  LnkTLI2(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[2],(void **)(void *)&LnkLI2,3,first,ap);va_end(ap);return V1;} /* WITH-AUGMENTED-ENVIRONMENT-INTERNAL */
static void LnkT79(){ call_or_link(VV[79],(void **)(void *)&Lnk79);} /* WALK-FORM */
static object  LnkTLI78(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[78],(void **)(void *)&LnkLI78,1,first,ap);va_end(ap);return V1;} /* GET-IMPLEMENTATION-DEPENDENT-WALKER-TEMPLATE */
static object  LnkTLI77(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[77],(void **)(void *)&LnkLI77,1,first,ap);va_end(ap);return V1;} /* VARIABLE-GLOBALLY-SPECIAL-P */
static object  LnkTLI76(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[76],(void **)(void *)&LnkLI76,3,first,ap);va_end(ap);return V1;} /* VARIABLE-DECLARATION */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[75],(void **)(void *)&LnkLI75,1,first,ap);va_end(ap);return V1;} /* ENV-DECLARATIONS */
static object  LnkTLI74(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[74],(void **)(void *)&LnkLI74,2,first,ap);va_end(ap);return V1;} /* VARIABLE-LEXICAL-P */
static object  LnkTLI73(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[73],(void **)(void *)&LnkLI73,1,first,ap);va_end(ap);return V1;} /* ENV-LEXICAL-VARIABLES */
static object  LnkTLI72(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[72],(void **)(void *)&LnkLI72,1,first,ap);va_end(ap);return V1;} /* ENV-LOCK */
static object  LnkTLI70(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[70],(void **)(void *)&LnkLI70,2,first,ap);va_end(ap);return V1;} /* ENVIRONMENT-MACRO */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

