
#include "cmpinclude.h"
#include "pcl_walk.h"
void init_pcl_walk(){do_init(VV);}
/*	local entry for function UNBOUND-LEXICAL-FUNCTION	*/

static object LI1(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{object V1;
	Vcs[0]=Vcs[0];
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
	base[4]= Cnil;
	} else {
	base[4]= V6;}}
	{object V7=getf(V5,VV[19],OBJNULL);
	if(V7==OBJNULL){
	base[5]= Cnil;
	} else {
	base[5]= V7;}}
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
	Vcs[0]=Vcs[0];
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
	Vcs[0]=Vcs[0];
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
	V178= (VFUN_NARGS=3,(*(LnkLI22))((V175),VV[43],(V176)));
	V177= (*(LnkLI2))((V175),Cnil,/* INLINE-ARGS */V178);
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
	{object V179;
	object V180;
	object V181;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>4) too_many_arguments();
	V179=(base[0]);
	V180=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T166;}
	V181=(base[2]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T167;}
	base[3]=MMcons(base[3],Cnil);
	vs_top=sup;
	goto T168;
	goto T166;
T166:;
	V181= Cnil;
	goto T167;
T167:;
	base[3]= VV[82];
	base[3]=MMcons(base[3],Cnil);
	goto T168;
T168:;
	V182= (*(LnkLI83))((V181));
	if(!(((V179))==(/* INLINE-ARGS */V182))){
	goto T172;}
	base[4]= (*(LnkLI84))((V181));
	base[4]=MMcons(base[4],base[3]);
	{frame_ptr fr;
	fr=frs_sch_catch((V179));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,(V179));
	base[5]= (V180);
	base[6]= (V181);
	base[7]= 
	make_cclosure_new(LC81,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk79)();
	unwind(fr,(V179));}
	goto T172;
T172:;
	base[4]= (V180);
	base[5]= (V181);
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
	{VOL object V183;
	VOL object V184;
	VOL object V185;
	check_arg(3);
	V183=(base[0]);
	V184=(base[1]);
	V185=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	frs_push(FRS_CATCH,(V183));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	{VOL object V186;
	VOL object V187;
	base[3]= (*(LnkLI84))((V185));
	base[4]= (V183);
	base[5]= (V184);
	base[6]= (V185);
	vs_top=(vs_base=base+4)+3;
	super_funcall_no_event(base[3]);
	if(vs_base>=vs_top){vs_top=sup;goto T188;}
	V186= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T189;}
	V187= vs_base[0];
	vs_top=sup;
	goto T190;
	goto T188;
T188:;
	V186= Cnil;
	goto T189;
T189:;
	V187= Cnil;
	goto T190;
T190:;
	frs_push(FRS_CATCH,(V186));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	frs_pop();
	return;}
	else{
	if(((V187))==Cnil){
	goto T193;}
	frs_pop();
	frs_pop();
	base[3]= (V186);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T193;
T193:;
	if(((V183))==((V186))){
	goto T196;}
	base[3]= (V186);
	base[4]= (V184);
	base[5]= (V185);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk81)();
	frs_pop();
	frs_pop();
	return;
	goto T196;
T196:;
	if(type_of((V186))==t_cons){
	goto T202;}
	{object V188;
	V189= (*(LnkLI85))((V186),(V185));
	V188= CMPcar(/* INLINE-ARGS */V189);
	if(((V188))==Cnil){
	goto T206;}
	{object V190;
	base[3]= CMPcddr((V188));
	base[4]= (V184);
	base[5]= (V185);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V190= vs_base[0];
	if(!(((V190))==(CMPcddr((V188))))){
	goto T213;}
	if(((VV[42]->s.s_dbind))==Cnil){
	goto T216;}
	frs_pop();
	frs_pop();
	base[3]= (V190);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T216;
T216:;
	frs_pop();
	frs_pop();
	base[3]= (V186);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T213;
T213:;
	frs_pop();
	frs_pop();
	base[3]= (V190);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T206;
T206:;
	frs_pop();
	frs_pop();
	base[3]= (V186);
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T202;
T202:;
	{register object V191;
	register object V192;
	V191= CMPcar((V186));
	V192= (*(LnkLI86))((V191));
	if(((V192))==Cnil){
	goto T221;}
	if(!(type_of((V192))==t_symbol)){
	goto T224;}
	base[5]= (V186);
	base[6]= (V184);
	base[7]= (V185);
	vs_top=(vs_base=base+5)+3;
	super_funcall_no_event((V192));
	frs_pop();
	frs_pop();
	return;
	goto T224;
T224:;
	V193= (*(LnkLI87))((V186),(V192),(V184),(V185));
	frs_pop();
	frs_pop();
	base[5]= V193;
	vs_top=(vs_base=base+5)+1;
	return;
	goto T221;
T221:;
	{register object V194;
	object V195;
	{object V196;
	V197= (VFUN_NARGS=3,(*(LnkLI22))((V185),VV[45],(V186)));
	V196= (*(LnkLI2))((V185),Cnil,/* INLINE-ARGS */V197);
	base[5]= (V186);
	base[6]= (V196);
	vs_top=(vs_base=base+5)+2;
	Lmacroexpand_1();}
	if(vs_base>=vs_top){vs_top=sup;goto T233;}
	V194= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T234;}
	V195= vs_base[0];
	vs_top=sup;
	goto T235;
	goto T233;
T233:;
	V194= Cnil;
	goto T234;
T234:;
	V195= Cnil;
	goto T235;
T235:;
	if(((V195))==Cnil){
	goto T237;}
	{object V198;
	base[5]= (V194);
	base[6]= (V184);
	base[7]= (V185);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V198= vs_base[0];
	if(!(((V198))==((V194)))){
	goto T244;}
	if(((VV[42]->s.s_dbind))==Cnil){
	goto T247;}
	frs_pop();
	frs_pop();
	base[5]= (V194);
	vs_top=(vs_base=base+5)+1;
	return;
	goto T247;
T247:;
	frs_pop();
	frs_pop();
	base[5]= (V186);
	vs_top=(vs_base=base+5)+1;
	return;
	goto T244;
T244:;
	frs_pop();
	frs_pop();
	base[5]= (V198);
	vs_top=(vs_base=base+5)+1;
	return;}
	goto T237;
T237:;
	if(!(type_of((V191))==t_symbol)){
	goto T250;}
	base[5]= (V191);
	vs_top=(vs_base=base+5)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T250;}
	base[5]= (V191);
	vs_top=(vs_base=base+5)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T250;}
	base[5]= VV[46];
	base[6]= (V191);
	vs_top=(vs_base=base+5)+2;
	Lerror();
	frs_pop();
	frs_pop();
	return;
	goto T250;
T250:;
	V199= (*(LnkLI87))((V194),VV[47],(V184),(V185));
	frs_pop();
	frs_pop();
	base[5]= V199;
	vs_top=(vs_base=base+5)+1;
	return;}}}}}
	}
}
/*	local entry for function WALK-TEMPLATE	*/

static object LI30(V204,V205,V206,V207)

register object V204;register object V205;register object V206;register object V207;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	if(!(type_of((V205))!=t_cons)){
	goto T261;}
	{object V208= (V205);
	if((V208!= VV[63])
	&& (V208!= VV[3])
	&& (V208!= VV[88])
	&& (V208!= VV[89])
	&& (V208!= VV[90]))goto T263;
	base[0]= (V204);
	base[1]= VV[44];
	base[2]= (V207);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	{object V209 = vs_base[0];
	VMR30(V209)}
	goto T263;
T263:;
	if((V208!= VV[37])
	&& (V208!= Cnil))goto T267;
	{object V210 = (V204);
	VMR30(V210)}
	goto T267;
T267:;
	if((V208!= VV[91]))goto T268;
	base[0]= (V204);
	base[1]= VV[48];
	base[2]= (V207);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	{object V211 = vs_base[0];
	VMR30(V211)}
	goto T268;
T268:;
	if((V208!= VV[39])
	&& (V208!= VV[92]))goto T272;
	if(type_of((V204))==t_symbol){
	goto T273;}
	if(!(type_of((V204))==t_cons||((V204))==Cnil)){
	goto T274;}
	if(!(((long)length((V204)))==(2))){
	goto T274;}
	if(!((CMPcar((V204)))==(VV[35]))){
	goto T274;}
	goto T273;
T273:;
	{object V212 = (V204);
	VMR30(V212)}
	goto T274;
T274:;
	base[0]= (V204);
	base[1]= (V206);
	base[2]= (V207);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	{object V213 = vs_base[0];
	VMR30(V213)}
	goto T272;
T272:;
	FEerror("The ECASE key value ~s is illegal.",1,V208);
	{object V214 = Cnil;
	VMR30(V214)}}
	goto T261;
T261:;
	{object V215= CMPcar((V205));
	if((V215!= VV[93]))goto T285;
	V216= CMPcdr((V205));
	if((CMPcddr((V205)))!=Cnil){
	goto T288;}
	V217= Cnil;
	goto T286;
	goto T288;
T288:;
	V218 = CMPmake_fixnum((long)length((V204)));
	V219 = CMPmake_fixnum((long)length(CMPcddr((V205))));
	V220= number_minus(V218,V219);
	V217= nthcdr(fix(/* INLINE-ARGS */V220),(V204));
	goto T286;
T286:;
	{object V221 = (*(LnkLI94))((V204),/* INLINE-ARGS */V216,V217,(V206),(V207));
	VMR30(V221)}
	goto T285;
T285:;
	if((V215!= VV[57]))goto T290;
	{object V222;
	V222= (V204);
	{object V223= CMPcadr((V205));
	if(!(type_of(V223)==t_cons||(V223)==Cnil)){
	goto T298;}}
	base[0]= CMPcadr((V205));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T295;}
	goto T296;
	goto T298;
T298:;
	base[0]= CMPcadr((V205));
	base[1]= (V204);
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event(base[0]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T295;}
	goto T296;
T296:;
	V205= CMPcaddr((V205));
	goto T293;
	goto T295;
T295:;
	V205= CMPcadddr((V205));
	goto T293;
T293:;
	V204= (V222);}
	goto TTL;
	goto T290;
T290:;
	if((V215!= VV[95]))goto T305;
	V205= CMPcadr((V205));
	goto TTL;
	goto T305;
T305:;
	if(!(type_of((V204))!=t_cons)){
	goto T312;}
	{object V224 = (V204);
	VMR30(V224)}
	goto T312;
T312:;
	V225= (*(LnkLI87))(CMPcar((V204)),CMPcar((V205)),(V206),(V207));
	V226= (*(LnkLI87))(CMPcdr((V204)),CMPcdr((V205)),(V206),(V207));
	{object V227 = (*(LnkLI96))((V204),/* INLINE-ARGS */V225,/* INLINE-ARGS */V226);
	VMR30(V227)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-TEMPLATE-HANDLE-REPEAT	*/

static object LI31(V233,V234,V235,V236,V237)

object V233;object V234;object V235;object V236;object V237;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	if(!(((V233))==((V235)))){
	goto T315;}
	{object V238 = (*(LnkLI87))((V233),CMPcdr((V234)),(V236),(V237));
	VMR31(V238)}
	goto T315;
T315:;
	{object V239 = (*(LnkLI97))((V233),(V234),CMPcar((V234)),(V235),(V236),(V237));
	VMR31(V239)}
	return Cnil;
}
/*	local entry for function WALK-TEMPLATE-HANDLE-REPEAT-1	*/

static object LI32(V246,V247,V248,V249,V250,V251)

register object V246;register object V247;register object V248;register object V249;register object V250;register object V251;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	if(((V246))!=Cnil){
	goto T318;}
	{object V252 = Cnil;
	VMR32(V252)}
	goto T318;
T318:;
	if(!(((V246))==((V249)))){
	goto T321;}
	if(((V248))!=Cnil){
	goto T324;}
	{object V253 = (*(LnkLI87))((V249),CMPcdr((V247)),(V250),(V251));
	VMR32(V253)}
	goto T324;
T324:;
	base[0]= VV[49];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V254 = vs_base[0];
	VMR32(V254)}
	goto T321;
T321:;
	if(((V248))!=Cnil){
	goto T328;}
	{object V255;
	V255= (V247);
	V248= CMPcar((V247));
	V247= (V255);}
	goto TTL;
	goto T328;
T328:;
	V256= (*(LnkLI87))(CMPcar((V246)),CMPcar((V248)),(V250),(V251));
	V257= (*(LnkLI97))(CMPcdr((V246)),(V247),CMPcdr((V248)),(V249),(V250),(V251));
	{object V258 = (*(LnkLI96))((V246),/* INLINE-ARGS */V256,/* INLINE-ARGS */V257);
	VMR32(V258)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-REPEAT-EVAL	*/

static object LI33(V261,V262)

register object V261;object V262;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	if((V261)==Cnil){
	{object V263 = Cnil;
	VMR33(V263)}}
	base[0]= CMPcar((V261));
	base[1]= VV[44];
	base[2]= (V262);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V264= vs_base[0];
	V265= (*(LnkLI98))(CMPcdr((V261)),(V262));
	{object V266 = (*(LnkLI96))((V261),V264,/* INLINE-ARGS */V265);
	VMR33(V266)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RECONS	*/

static object LI34(V270,V271,V272)

object V270;object V271;object V272;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	if(!((CMPcar((V270)))==((V271)))){
	goto T341;}
	if((CMPcdr((V270)))==((V272))){
	goto T342;}
	goto T341;
T341:;
	{object V273 = make_cons((V271),(V272));
	VMR34(V273)}
	goto T342;
T342:;
	{object V274 = (V270);
	VMR34(V274)}
	return Cnil;
}
/*	local entry for function RELIST	*/

static object LI35(object V275,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB35 VMS35 VMV35
	{object V276;
	object V277;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V276= V275;
	narg= narg - 1;
	V278 = list_vector_new(narg,first,ap);
	V277= V278;
	if(((V277))!=Cnil){
	goto T347;}
	{object V279 = Cnil;
	VMR35(V279)}
	goto T347;
T347:;
	{object V280 = (*(LnkLI99))((V276),(V277),Cnil);
	VMR35(V280)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function RELIST*	*/

static object LI36(object V281,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{object V282;
	object V283;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V282= V281;
	narg= narg - 1;
	V284 = list_vector_new(narg,first,ap);
	V283= V284;
	{object V285 = (*(LnkLI99))((V282),(V283),Ct);
	VMR36(V285)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function RELIST-INTERNAL	*/

static object LI37(V289,V290,V291)

object V289;register object V290;object V291;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	if((CMPcdr((V290)))!=Cnil){
	goto T350;}
	if(((V291))==Cnil){
	goto T353;}
	{object V292 = CMPcar((V290));
	VMR37(V292)}
	goto T353;
T353:;
	{object V293 = (*(LnkLI96))((V289),CMPcar((V290)),Cnil);
	VMR37(V293)}
	goto T350;
T350:;
	V294= CMPcar((V290));
	V295= (*(LnkLI99))(CMPcdr((V289)),CMPcdr((V290)),(V291));
	{object V296 = (*(LnkLI96))((V289),/* INLINE-ARGS */V294,/* INLINE-ARGS */V295);
	VMR37(V296)}
	return Cnil;
}
/*	function definition for WALK-DECLARATIONS	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	{object V297;
	object V298;
	register object V299;
	object V300;
	register object V301;
	object V302;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>6) too_many_arguments();
	V297=(base[0]);
	V298=(base[1]);
	V299=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T355;}
	V300=(base[3]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T356;}
	V301=(base[4]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T357;}
	V302=(base[5]);
	vs_top=sup;
	goto T358;
	goto T355;
T355:;
	V300= Cnil;
	goto T356;
T356:;
	V301= Cnil;
	goto T357;
T357:;
	V302= Cnil;
	goto T358;
T358:;
	{object V303;
	object V304;
	object V305;
	V303= CMPcar((V297));
	V304= Cnil;
	V305= Cnil;
	if(!(type_of((V303))==t_string)){
	goto T366;}
	if((CMPcdr((V297)))==Cnil){
	goto T366;}
	if(((V300))!=Cnil){
	goto T366;}
	if(((V301))!=Cnil){
	goto T366;}
	base[7]= CMPcdr((V297));
	base[8]= (V298);
	base[9]= (V299);
	base[10]= Ct;
	vs_top=(vs_base=base+7)+4;
	(void) (*Lnk100)();
	vs_top=sup;
	V306= vs_base[0];
	base[7]= (*(LnkLI96))((V297),(V303),V306);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T366;
T366:;
	if(!(type_of((V303))==t_cons||((V303))==Cnil)){
	goto T380;}
	if(!((CMPcar((V303)))==(VV[50]))){
	goto T380;}
	{register object V307;
	register object V308;
	V307= CMPcdr((V303));
	V308= CMPcar((V307));
	goto T388;
T388:;
	if(!(((V307))==Cnil)){
	goto T389;}
	goto T384;
	goto T389;
T389:;
	{register object V309;
	register object V310;
	object V311;
	V309= CMPcar((V308));
	V310= CMPcadr((V308));
	V311= CMPcddr((V308));
	{register object x= (V309),V312= (VV[27]->s.s_dbind);
	while(V312!=Cnil)
	if(eql(x,V312->c.c_car)){
	goto T400;
	}else V312=V312->c.c_cdr;
	goto T399;}
	goto T400;
T400:;{object V314;
	V314= (*(LnkLI74))((V310),(V299));
	if(V314==Cnil)goto T402;
	V313= V314;
	goto T401;
	goto T402;
T402:;}
	V313= (V310);
	goto T401;
T401:;
	V315= listA(3,(V309),V313,(V311));
	(void)((*(LnkLI101))(/* INLINE-ARGS */V315,(V299)));
	goto T397;
	goto T399;
T399:;
	(void)((*(LnkLI101))((V308),(V299)));
	goto T397;
T397:;
	V301= make_cons(V308,(V301));}
	V307= CMPcdr((V307));
	V308= CMPcar((V307));
	goto T388;}
	goto T384;
T384:;
	base[7]= CMPcdr((V297));
	base[8]= (V298);
	base[9]= (V299);
	base[10]= (V300);
	base[11]= (V301);
	vs_top=(vs_base=base+7)+5;
	(void) (*Lnk100)();
	vs_top=sup;
	V317= vs_base[0];
	base[7]= (*(LnkLI96))((V297),(V303),V317);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T380;
T380:;
	if(((V303))==Cnil){
	goto T417;}
	if(!(type_of((V303))==t_cons||((V303))==Cnil)){
	goto T417;}
	if(((*(LnkLI86))(CMPcar((V303))))!=Cnil){
	goto T417;}
	base[7]= (V303);
	base[8]= (V299);
	vs_top=(vs_base=base+7)+2;
	Lmacroexpand_1();
	if(vs_base<vs_top){
	V305= vs_base[0];
	vs_base++;
	}else{
	V305= Cnil;}
	if(vs_base<vs_top){
	V304= vs_base[0];
	}else{
	V304= Cnil;}
	vs_top=sup;
	if(((V304))==Cnil){
	goto T417;}
	base[7]= (*(LnkLI96))((V297),(V305),CMPcdr((V297)));
	base[8]= (V298);
	base[9]= (V299);
	base[10]= (V300);
	base[11]= (V301);
	if((V302)!=Cnil){
	base[12]= (V302);
	goto T434;}
	base[12]= (V297);
	goto T434;
T434:;
	vs_top=(vs_base=base+7)+6;
	(void) (*Lnk100)();
	return;
	goto T417;
T417:;
	if((V302)!=Cnil){
	base[7]= (V302);
	goto T435;}
	base[7]= (V297);
	goto T435;
T435:;
	base[8]= (V299);
	vs_top=(vs_base=base+7)+2;
	super_funcall_no_event((V298));
	return;}
	}
}
/*	local entry for function WALK-UNEXPECTED-DECLARE	*/

static object LI39(V321,V322,V323)

object V321;object V322;object V323;
{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	base[0]= VV[51];
	base[1]= (V321);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk102)();
	vs_top=sup;
	{object V324 = (V321);
	VMR39(V324)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-ARGLIST	*/

static object LI40(object V327,object V326,object V325,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB40 VMS40 VMV40
	{register object V328;
	object V329;
	register object V330;
	object V331;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V328= V327;
	V329= V326;
	V330= V325;
	narg = narg - 3;
	if (narg <= 0) goto T440;
	else {
	V331= first;}
	--narg; goto T441;
	goto T440;
T440:;
	V331= Cnil;
	goto T441;
T441:;
	{register object V332;
	V332= Cnil;
	if(((V328))!=Cnil){
	goto T445;}
	{object V333 = Cnil;
	VMR40(V333)}
	goto T445;
T445:;
	V332= CMPcar((V328));
	if(!(type_of((V332))==t_symbol)){
	goto T448;}{object V334;
	{register object x= (V332),V335= VV[52];
	while(V335!=Cnil)
	if(eql(x,V335->c.c_car)){
	V334= V335;
	goto T453;
	}else V335=V335->c.c_cdr;
	V334= Cnil;}
	goto T453;
T453:;
	if(V334==Cnil)goto T452;
	goto T451;
	goto T452;
T452:;}
	(void)((*(LnkLI103))((V332),(V330)));
	goto T451;
T451:;
	V336= CMPcdr((V328));
	if((V331)==Cnil){
	V337= Cnil;
	goto T454;}
	{register object x= (V332),V339= VV[52];
	while(V339!=Cnil)
	if(eql(x,V339->c.c_car)){
	V338= V339;
	goto T455;
	}else V339=V339->c.c_cdr;
	V338= Cnil;}
	goto T455;
T455:;
	V337= ((V338)==Cnil?Ct:Cnil);
	goto T454;
T454:;
	V340= (VFUN_NARGS=4,(*(LnkLI104))(/* INLINE-ARGS */V336,(V329),(V330),V337));
	{object V341 = (*(LnkLI96))((V328),(V332),/* INLINE-ARGS */V340);
	VMR40(V341)}
	goto T448;
T448:;
	if(!(type_of((V332))==t_cons)){
	goto T457;}
	{object V342;
	if(((V331))==Cnil){
	goto T462;}
	V343= (VFUN_NARGS=4,(*(LnkLI104))((V332),(V329),(V330),(V331)));
	goto T460;
	goto T462;
T462:;
	V344= CMPcar((V332));
	base[0]= CMPcadr((V332));
	base[1]= VV[44];
	base[2]= (V330);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V345= vs_base[0];
	V343= (VFUN_NARGS=4,(*(LnkLI105))((V332),/* INLINE-ARGS */V344,V345,CMPcddr((V332))));
	goto T460;
T460:;
	V346= (VFUN_NARGS=4,(*(LnkLI104))(CMPcdr((V328)),(V329),(V330),Cnil));
	V342= (*(LnkLI96))((V328),V343,/* INLINE-ARGS */V346);
	if(!(type_of(CMPcar((V332)))==t_symbol)){
	goto T470;}
	(void)((*(LnkLI103))(CMPcar((V332)),(V330)));
	goto T468;
	goto T470;
T470:;
	(void)((*(LnkLI103))(CMPcadar((V332)),(V330)));
	goto T468;
T468:;
	if(!((CMPcddr((V332)))==Cnil)){
	goto T473;}
	goto T472;
	goto T473;
T473:;
	if(!(((type_of(CMPcaddr((V332)))==t_symbol?Ct:Cnil))==Cnil)){
	goto T475;}
	goto T472;
	goto T475;
T475:;
	(void)((*(LnkLI103))(CMPcaddr((V332)),(V330)));
	goto T472;
T472:;
	{object V347 = (V342);
	VMR40(V347)}}
	goto T457;
T457:;
	base[0]= VV[53];
	base[1]= (V328);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V348 = vs_base[0];
	VMR40(V348)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function WALK-LET	*/

static object LI41(V352,V353,V354)

object V352;object V353;object V354;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V355 = (*(LnkLI106))((V352),(V353),(V354),Cnil);
	VMR41(V355)}
	return Cnil;
}
/*	local entry for function WALK-LET*	*/

static object LI42(V359,V360,V361)

object V359;object V360;object V361;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	{object V362 = (*(LnkLI106))((V359),(V360),(V361),Ct);
	VMR42(V362)}
	return Cnil;
}
/*	local entry for function WALK-PROG	*/

static object LI43(V366,V367,V368)

object V366;object V367;object V368;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	{object V369 = (*(LnkLI107))((V366),(V367),(V368),Cnil);
	VMR43(V369)}
	return Cnil;
}
/*	local entry for function WALK-PROG*	*/

static object LI44(V373,V374,V375)

object V373;object V374;object V375;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{object V376 = (*(LnkLI107))((V373),(V374),(V375),Ct);
	VMR44(V376)}
	return Cnil;
}
/*	local entry for function WALK-DO	*/

static object LI45(V380,V381,V382)

object V380;object V381;object V382;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	{object V383 = (*(LnkLI108))((V380),(V381),(V382),Cnil);
	VMR45(V383)}
	return Cnil;
}
/*	local entry for function WALK-DO*	*/

static object LI46(V387,V388,V389)

object V387;object V388;object V389;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{object V390 = (*(LnkLI108))((V387),(V388),(V389),Ct);
	VMR46(V390)}
	return Cnil;
}
/*	local entry for function WALK-LETLET*	*/

static object LI47(V395,V396,V397,V398)

register object V395;object V396;object V397;object V398;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{object V399;
	V400= (VFUN_NARGS=1,(*(LnkLI22))((V397)));
	V399= (*(LnkLI2))((V397),Cnil,/* INLINE-ARGS */V400);
	{object V401;
	object V402;
	object V403;
	object V404;
	object V405;
	V401= CMPcar((V395));
	V402= CMPcadr((V395));
	V403= CMPcddr((V395));
	V404= (*(LnkLI109))((V402),(V397),(V399),(V396),(V398));
	base[5]= (V403);
	base[6]= (VV[98]->s.s_gfdef);
	base[7]= (V399);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V405= vs_base[0];
	{object V406 = (VFUN_NARGS=4,(*(LnkLI105))((V395),(V401),(V404),(V405)));
	VMR47(V406)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-LOCALLY	*/

static object LI48(V410,V411,V412)

object V410;object V411;object V412;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V413;
	object V414;
	object V415;
	V413= CMPcar((V410));
	V414= CMPcdr((V410));
	base[3]= (V414);
	base[4]= (VV[98]->s.s_gfdef);
	base[5]= (V412);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V415= vs_base[0];
	{object V416 = (VFUN_NARGS=3,(*(LnkLI105))((V410),(V413),(V415)));
	VMR48(V416)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-PROGPROG*	*/

static object LI50(V421,V422,V423,V424)

register object V421;object V422;object V423;object V424;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	base[0]=MMcons((V422),Cnil);
	{object V425;
	V426= (VFUN_NARGS=1,(*(LnkLI22))((V423)));
	V425= (*(LnkLI2))((V423),Cnil,/* INLINE-ARGS */V426);
	{object V427;
	object V428;
	V427= CMPcadr((V421));
	if(type_of((V427))==t_symbol){
	goto T497;}
	V428= Cnil;
	goto T496;
	goto T497;
T497:;
	V428= (((((V427))==(Cnil)?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T496;
T496:;
	{object V429;
	object V430;
	object V431;
	object V432;
	if(((V428))==Cnil){
	goto T501;}
	base[3]= CMPcar((V421));
	base[4]= CMPcadr((V421));
	base[5]= CMPcaddr((V421));
	base[6]= CMPcdddr((V421));
	vs_top=(vs_base=base+3)+4;
	goto T499;
	goto T501;
T501:;
	base[3]= CMPcar((V421));
	base[4]= Cnil;
	base[5]= CMPcadr((V421));
	base[6]= CMPcddr((V421));
	vs_top=(vs_base=base+3)+4;
	goto T499;
T499:;
	if(vs_base>=vs_top){vs_top=sup;goto T511;}
	V429= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T512;}
	V430= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T513;}
	V431= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T514;}
	V432= vs_base[0];
	vs_top=sup;
	goto T515;
	goto T511;
T511:;
	V429= Cnil;
	goto T512;
T512:;
	V430= Cnil;
	goto T513;
T513:;
	V431= Cnil;
	goto T514;
T514:;
	V432= Cnil;
	goto T515;
T515:;
	{object V433;
	object V434;
	V433= (*(LnkLI109))((V431),(V423),(V425),(base[0]->c.c_car),(V424));
	base[5]= (V432);
	base[6]= 
	make_cclosure_new(LC82,Cnil,base[0],Cdata);
	base[7]= (V425);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V434= vs_base[0];
	if(((V430))==Cnil){
	goto T522;}
	{object V435 = (VFUN_NARGS=5,(*(LnkLI105))((V421),(V429),(V430),(V433),(V434)));
	VMR49(V435)}
	goto T522;
T522:;
	{object V436 = (VFUN_NARGS=4,(*(LnkLI105))((V421),(V429),(V433),(V434)));
	VMR49(V436)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-DODO*	*/

static object LI51(V441,V442,V443,V444)

register object V441;object V442;object V443;object V444;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{register object V445;
	V446= (VFUN_NARGS=1,(*(LnkLI22))((V443)));
	V445= (*(LnkLI2))((V443),Cnil,/* INLINE-ARGS */V446);
	{object V447;
	object V448;
	object V449;
	object V450;
	object V451;
	object V452;
	V447= CMPcar((V441));
	V448= CMPcadr((V441));
	V449= CMPcaddr((V441));
	V450= CMPcdddr((V441));
	V451= (*(LnkLI109))((V448),(V443),(V445),(V442),(V444));
	base[6]= (V450);
	base[7]= (VV[98]->s.s_gfdef);
	base[8]= (V445);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V452= vs_base[0];
	V453= (*(LnkLI110))((V448),(V451),(V442),(V445));
	V454= (*(LnkLI87))((V449),VV[54],(V442),(V445));
	{object V455 = (VFUN_NARGS=5,(*(LnkLI105))((V441),(V447),/* INLINE-ARGS */V453,/* INLINE-ARGS */V454,(V452)));
	VMR50(V455)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WALK-LET-IF	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	{object V456;
	object V457;
	object V458;
	check_arg(3);
	V456=(base[0]);
	V457=(base[1]);
	V458=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V459;
	object V460;
	object V461;
	V459= CMPcadr((V456));
	V460= CMPcaddr((V456));
	V461= CMPcdddr((V456));
	{object V463;
	object V464= (V460);
	if(V464==Cnil){
	V462= Cnil;
	goto T538;}
	base[4]=V463=MMcons(Cnil,Cnil);
	goto T539;
T539:;
	if(!(type_of((V464->c.c_car))==t_cons||((V464->c.c_car))==Cnil)){
	goto T542;}
	(V463->c.c_car)= CMPcar((V464->c.c_car));
	goto T540;
	goto T542;
T542:;
	(V463->c.c_car)= (V464->c.c_car);
	goto T540;
T540:;
	if((V464=MMcdr(V464))==Cnil){
	V462= base[4];
	goto T538;}
	V463=MMcdr(V463)=MMcons(Cnil,Cnil);
	goto T539;}
	goto T538;
T538:;
	V466= list(2,VV[50],make_cons(VV[29],V462));
	V467= listA(3,VV[56],Cnil,(V461));
	V468= make_cons(/* INLINE-ARGS */V467,Cnil);
	base[3]= list(4,VV[1],Cnil,/* INLINE-ARGS */V466,list(3,VV[55],/* INLINE-ARGS */V468,list(4,VV[57],(V459),list(3,VV[1],(V460),VV[58]),VV[59])));
	base[4]= (V457);
	base[5]= (V458);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk81)();
	return;}
	}
}
/*	local entry for function WALK-MULTIPLE-VALUE-SETQ	*/

static object LI54(V472,V473,V474)

register object V472;object V473;object V474;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	base[0]=MMcons((V474),Cnil);
	{object V475;
	V475= CMPcadr((V472));
	base[1]= 
	make_cclosure_new(LC83,Cnil,base[0],Cdata);
	base[2]= (V475);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk111)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T548;}
	{object V476;
	object V477;
	object V478;
	object V479;
	{object V480;
	object V481= (V475);
	if(V481==Cnil){
	V476= Cnil;
	goto T552;}
	base[5]=V480=MMcons(Cnil,Cnil);
	goto T553;
T553:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	(V480->c.c_car)= vs_base[0];
	if((V481=MMcdr(V481))==Cnil){
	V476= base[5];
	goto T552;}
	V480=MMcdr(V480)=MMcons(Cnil,Cnil);
	goto T553;}
	goto T552;
T552:;
	{object V483;
	object V484= (V475);
	object V485= (V476);
	if(V484==Cnil||V485==Cnil){
	V477= Cnil;
	goto T555;}
	base[5]=V483=MMcons(Cnil,Cnil);
	goto T556;
T556:;
	(V483->c.c_car)= list(3,VV[60],(V484->c.c_car),(V485->c.c_car));
	if((V484=MMcdr(V484))==Cnil||(V485=MMcdr(V485))==Cnil){
	V477= base[5];
	goto T555;}
	V483=MMcdr(V483)=MMcons(Cnil,Cnil);
	goto T556;}
	goto T555;
T555:;
	V478= listA(4,VV[61],(V476),CMPcaddr((V472)),(V477));
	base[5]= (V478);
	base[6]= (V473);
	base[7]= (base[0]->c.c_car);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V479= vs_base[0];
	if(!(((V479))==((V478)))){
	goto T564;}
	{object V488 = (V472);
	VMR52(V488)}
	goto T564;
T564:;
	{object V489 = (V479);
	VMR52(V489)}}
	goto T548;
T548:;
	{object V490 = (*(LnkLI87))((V472),VV[62],(V473),(base[0]->c.c_car));
	VMR52(V490)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-MULTIPLE-VALUE-BIND	*/

static object LI56(V494,V495,V496)

register object V494;object V495;object V496;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	base[0]=MMcons((V496),Cnil);
	base[1]=MMcons((V495),base[0]);
	V497= (VFUN_NARGS=1,(*(LnkLI22))((base[0]->c.c_car)));
	base[2]= (*(LnkLI2))((base[0]->c.c_car),Cnil,/* INLINE-ARGS */V497);
	base[2]=MMcons(base[2],base[1]);
	{object V498;
	object V499;
	object V500;
	object V501;
	V498= CMPcar((V494));
	base[4]= CMPcadr((V494));
	base[4]=MMcons(base[4],base[2]);
	V499= (*(LnkLI87))(CMPcaddr((V494)),VV[63],(base[1]->c.c_car),(base[0]->c.c_car));
	V500= CMPcdddr((V494));
	base[7]=MMcons(Cnil,base[4]);
	base[9]= (V500);
	base[10]= 
	make_cclosure_new(LC84,Cnil,base[7],Cdata);
	base[11]= (base[2]->c.c_car);
	vs_top=(vs_base=base+9)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V501= vs_base[0];
	{object V502 = (VFUN_NARGS=5,(*(LnkLI105))((V494),(V498),(base[7]->c.c_car),(V499),(V501)));
	VMR53(V502)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-BINDINGS-1	*/

static object LI57(V508,V509,V510,V511,V512)

register object V508;object V509;register object V510;object V511;object V512;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	if((V508)==Cnil){
	{object V513 = Cnil;
	VMR54(V513)}}
	{register object V514;
	V514= CMPcar((V508));
	if(!(type_of((V514))==t_symbol)){
	goto T578;}
	(void)((*(LnkLI103))((V514),(V510)));
	V515= V514;
	goto T576;
	goto T578;
T578:;
	{object V517;
	V518= CMPcar((V514));
	base[0]= CMPcadr((V514));
	base[1]= (V511);
	if(((V512))==Cnil){
	goto T587;}
	base[2]= (V510);
	goto T585;
	goto T587;
T587:;
	base[2]= (V509);
	goto T585;
T585:;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V519= vs_base[0];
	V517= (VFUN_NARGS=4,(*(LnkLI105))((V514),/* INLINE-ARGS */V518,V519,CMPcddr((V514))));
	(void)((*(LnkLI103))(CMPcar((V514)),(V510)));
	V515= (V517);}
	goto T576;
T576:;
	V520= (*(LnkLI109))(CMPcdr((V508)),(V509),(V510),(V511),(V512));
	{object V521 = (*(LnkLI96))((V508),V515,/* INLINE-ARGS */V520);
	VMR54(V521)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-BINDINGS-2	*/

static object LI58(V526,V527,V528,V529)

register object V526;object V527;object V528;object V529;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	if((V526)==Cnil){
	{object V530 = Cnil;
	VMR55(V530)}}
	{register object V531;
	object V532;
	V531= CMPcar((V526));
	V532= CMPcar((V527));
	if(!(type_of((V531))==t_symbol)){
	goto T594;}
	V533= (V531);
	goto T592;
	goto T594;
T594:;
	V534= CMPcar((V532));
	V535= CMPcadr((V532));
	V536= (*(LnkLI87))(CMPcddr((V531)),VV[64],(V528),(V529));
	V533= (VFUN_NARGS=4,(*(LnkLI105))((V531),/* INLINE-ARGS */V534,/* INLINE-ARGS */V535,/* INLINE-ARGS */V536));
	goto T592;
T592:;
	V537= (*(LnkLI110))(CMPcdr((V526)),CMPcdr((V527)),(V528),(V529));
	{object V538 = (*(LnkLI96))((V526),V533,/* INLINE-ARGS */V537);
	VMR55(V538)}}
	return Cnil;
}
/*	local entry for function WALK-LAMBDA	*/

static object LI59(V542,V543,V544)

register object V542;object V543;object V544;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V545;
	V546= (VFUN_NARGS=1,(*(LnkLI22))((V544)));
	V545= (*(LnkLI2))((V544),Cnil,/* INLINE-ARGS */V546);
	{object V547;
	object V548;
	object V549;
	object V550;
	V547= CMPcadr((V542));
	V548= CMPcddr((V542));
	V549= (VFUN_NARGS=3,(*(LnkLI104))((V547),(V543),(V545)));
	base[4]= (V548);
	base[5]= (VV[98]->s.s_gfdef);
	base[6]= (V545);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V550= vs_base[0];
	{object V551 = (VFUN_NARGS=4,(*(LnkLI105))((V542),CMPcar((V542)),(V549),(V550)));
	VMR56(V551)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-NAMED-LAMBDA	*/

static object LI60(V555,V556,V557)

register object V555;object V556;object V557;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;
	{object V558;
	V559= (VFUN_NARGS=1,(*(LnkLI22))((V557)));
	V558= (*(LnkLI2))((V557),Cnil,/* INLINE-ARGS */V559);
	{object V560;
	object V561;
	object V562;
	object V563;
	object V564;
	V560= CMPcadr((V555));
	V561= CMPcaddr((V555));
	V562= CMPcdddr((V555));
	V563= (VFUN_NARGS=3,(*(LnkLI104))((V561),(V556),(V558)));
	base[5]= (V562);
	base[6]= (VV[98]->s.s_gfdef);
	base[7]= (V558);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V564= vs_base[0];
	{object V565 = (VFUN_NARGS=5,(*(LnkLI105))((V555),CMPcar((V555)),(V560),(V563),(V564)));
	VMR57(V565)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-SETQ	*/

static object LI61(V569,V570,V571)

object V569;object V570;object V571;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	if((CMPcdddr((V569)))==Cnil){
	goto T614;}
	{object V572;
	object V573;
	{register object V574;
	register object V575;
	V575= CMPcdr((V569));
	V574= Cnil;
	goto T619;
T619:;
	if(((V575))!=Cnil){
	goto T621;}
	V572= nreverse((V574));
	goto T616;
	goto T621;
T621:;
	{register object V576;
	register object V577;
	{register object V578;
	V578= CMPcar((V575));
	V575= CMPcdr((V575));
	V576= (V578);}
	{register object V579;
	V579= CMPcar((V575));
	V575= CMPcdr((V575));
	V577= (V579);}
	{register object V580;
	V580= list(3,VV[60],(V576),(V577));
	V574= make_cons((V580),(V574));}}
	goto T619;}
	goto T616;
T616:;
	V573= (*(LnkLI98))((V572),(V571));
	if(!(((V572))==((V573)))){
	goto T637;}
	{object V581 = (V569);
	VMR58(V581)}
	goto T637;
T637:;
	{object V582 = make_cons(VV[65],(V573));
	VMR58(V582)}}
	goto T614;
T614:;
	{object V583;
	object V584;
	object V585;
	V583= CMPcadr((V569));
	V584= CMPcaddr((V569));
	V586= (*(LnkLI85))((V583),(V571));
	V585= CMPcar(/* INLINE-ARGS */V586);
	if(((V585))==Cnil){
	goto T643;}
	{object V587;
	object V588;
	V587= list(3,VV[35],CMPcddr((V585)),(V584));
	base[5]= (V587);
	base[6]= (V570);
	base[7]= (V571);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V588= vs_base[0];
	if(!(((V587))==((V588)))){
	goto T651;}
	{object V589 = (V569);
	VMR58(V589)}
	goto T651;
T651:;
	{object V590 = (V588);
	VMR58(V590)}}
	goto T643;
T643:;
	base[3]= (V583);
	base[4]= VV[48];
	base[5]= (V571);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V591= vs_base[0];
	base[3]= (V584);
	base[4]= VV[44];
	base[5]= (V571);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V592= vs_base[0];
	{object V593 = (VFUN_NARGS=4,(*(LnkLI112))((V569),VV[60],V591,V592));
	VMR58(V593)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-SYMBOL-MACROLET	*/

static object LI62(V597,V598,V599)

object V597;object V598;object V599;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	{object V600;
	V600= CMPcadr((V597));
	{object V601;
	{object V603;
	object V604= (V600);
	if(V604==Cnil){
	V602= Cnil;
	goto T663;}
	base[1]=V603=MMcons(Cnil,Cnil);
	goto T664;
T664:;
	(V603->c.c_car)= listA(3,CMPcar((V604->c.c_car)),VV[26],CMPcadr((V604->c.c_car)));
	if((V604=MMcdr(V604))==Cnil){
	V602= base[1];
	goto T663;}
	V603=MMcdr(V603)=MMcons(Cnil,Cnil);
	goto T664;}
	goto T663;
T663:;
	V606= (*(LnkLI73))((V599));
	V607= append(V602,/* INLINE-ARGS */V606);
	V608= (VFUN_NARGS=3,(*(LnkLI22))((V599),VV[66],/* INLINE-ARGS */V607));
	V601= (*(LnkLI2))((V599),Cnil,/* INLINE-ARGS */V608);
	V609= (*(LnkLI98))(CMPcddr((V597)),(V601));
	{object V610 = (VFUN_NARGS=4,(*(LnkLI105))((V597),VV[67],(V600),/* INLINE-ARGS */V609));
	VMR59(V610)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-TAGBODY	*/

static object LI63(V614,V615,V616)

object V614;object V615;object V616;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;
	V617= CMPcar((V614));
	V618= (*(LnkLI113))(CMPcdr((V614)),(V615),(V616));
	{object V619 = (*(LnkLI96))((V614),/* INLINE-ARGS */V617,/* INLINE-ARGS */V618);
	VMR60(V619)}
	return Cnil;
}
/*	local entry for function WALK-TAGBODY-1	*/

static object LI64(V623,V624,V625)

register object V623;object V624;object V625;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	if((V623)==Cnil){
	{object V626 = Cnil;
	VMR61(V626)}}
	base[0]= CMPcar((V623));
	if(!(type_of(CMPcar((V623)))==t_symbol)){
	goto T670;}
	base[1]= VV[37];
	goto T668;
	goto T670;
T670:;
	base[1]= (V624);
	goto T668;
T668:;
	base[2]= (V625);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V627= vs_base[0];
	V628= (*(LnkLI113))(CMPcdr((V623)),(V624),(V625));
	{object V629 = (*(LnkLI96))((V623),V627,/* INLINE-ARGS */V628);
	VMR61(V629)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-COMPILER-LET	*/

static object LI65(V633,V634,V635)

object V633;object V634;object V635;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	{register object V636;
	register object V637;
	V636= Cnil;
	V637= Cnil;
	{register object V638;
	register object V639;
	V638= CMPcadr((V633));
	V639= CMPcar((V638));
	goto T677;
T677:;
	if(!(((V638))==Cnil)){
	goto T678;}
	goto T673;
	goto T678;
T678:;
	if(!(type_of((V639))==t_symbol)){
	goto T684;}
	{register object V640;
	V640= (V639);
	V636= make_cons((V640),(V636));}
	{register object V641;
	V641= Cnil;
	V637= make_cons((V641),(V637));
	goto T682;}
	goto T684;
T684:;
	{register object V642;
	V642= CMPcar((V639));
	V636= make_cons((V642),(V636));}
	{register object V643;
	base[3]= CMPcadr((V639));
	vs_top=(vs_base=base+3)+1;
	Leval();
	vs_top=sup;
	V643= vs_base[0];
	V637= make_cons((V643),(V637));}
	goto T682;
T682:;
	V638= CMPcdr((V638));
	V639= CMPcar((V638));
	goto T677;}
	goto T673;
T673:;
	V644= CMPcar((V633));
	V645= CMPcadr((V633));
	{object symbols,values;
	bds_ptr V647=bds_top;
	base[0]= (V636);
	symbols= base[0];
	base[1]= (V637);
	values= base[1];
	while(!endp(symbols)){
	if(endp(values))bds_bind(MMcar(symbols),OBJNULL);
	else{bds_bind(MMcar(symbols),MMcar(values));
	values=MMcdr(values);}
	symbols=MMcdr(symbols);}
	V648= (*(LnkLI98))(CMPcddr((V633)),(V635));
	bds_unwind(V647);
	V646= V648;}
	{object V649 = (VFUN_NARGS=4,(*(LnkLI105))((V633),/* INLINE-ARGS */V644,/* INLINE-ARGS */V645,V646));
	VMR62(V649)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-MACROLET	*/

static object LI68(V653,V654,V655)

object V653;object V654;object V655;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	base[0]= (V654);
	V656= (*(LnkLI84))((V655));
	V657= (VFUN_NARGS=3,(*(LnkLI22))(Cnil,VV[43],/* INLINE-ARGS */V656));
	base[1]= (*(LnkLI2))(Cnil,Cnil,/* INLINE-ARGS */V657);
	{register object V658;
	register object V659;
	V658= Cnil;
	V659= Cnil;
	{object V660= CMPcar((V653));
	if((V660!= VV[55])
	&& (V660!= VV[114]))goto T707;
	{register object V661;
	register object V662;
	V661= CMPcadr((V653));
	V662= CMPcar((V661));
	goto T711;
T711:;
	if(!(((V661))==Cnil)){
	goto T712;}
	goto T706;
	goto T712;
T712:;
	V658= make_cons(V662,(V658));
	V661= CMPcdr((V661));
	V662= CMPcar((V661));
	goto T711;}
	goto T707;
T707:;
	if((V660!= VV[115]))goto T723;
	{register object V664;
	register object V665;
	V664= CMPcadr((V653));
	V665= CMPcar((V664));
	goto T727;
T727:;
	if(!(((V664))==Cnil)){
	goto T728;}
	goto T706;
	goto T728;
T728:;
	{object V666;
	V667= CMPcar((V665));
	V668= CMPcadr((V665));
	V669= CMPcddr((V665));
	V670= coerce_to_string(CMPcar((V665)));
	V666= list(2,/* INLINE-ARGS */V667,(VFUN_NARGS=3,(*(LnkLI116))(/* INLINE-ARGS */V668,/* INLINE-ARGS */V669,/* INLINE-ARGS */V670)));
	V659= make_cons((V666),(V659));}
	V664= CMPcdr((V664));
	V665= CMPcar((V664));
	goto T727;}
	goto T723;
T723:;
	FEerror("The ECASE key value ~s is illegal.",1,V660);
	goto T706;}
	goto T706;
T706:;
	{object V671;
	V671= (*(LnkLI2))((V655),(V658),(V659));
	V672= CMPcar((V653));
	base[2]= CMPcadr((V653));
	vs_top=(vs_base=base+2)+1;
	L69(base);
	vs_top=sup;
	V673= vs_base[0];
	base[2]= CMPcddr((V653));
	base[3]= (VV[98]->s.s_gfdef);
	base[4]= (V671);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V674= vs_base[0];
	{object V675 = (VFUN_NARGS=4,(*(LnkLI105))((V653),/* INLINE-ARGS */V672,V673,V674));
	VMR63(V675)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-FLET	*/

static object LI72(V679,V680,V681)

object V679;object V680;object V681;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	base[0]= (V681);
	base[1]= (V680);
	V682= CMPcar((V679));
	V683= CMPcdr((V679));
	base[2]= CMPcadr((V679));
	vs_top=(vs_base=base+2)+1;
	L73(base);
	vs_top=sup;
	V684= vs_base[0];
	{register object V686;
	register object V687;
	V686= Cnil;
	V687= Cnil;
	{object V688= CMPcar((V679));
	if((V688!= VV[55])
	&& (V688!= VV[114]))goto T751;
	{register object V689;
	register object V690;
	V689= CMPcadr((V679));
	V690= CMPcar((V689));
	goto T755;
T755:;
	if(!(((V689))==Cnil)){
	goto T756;}
	goto T750;
	goto T756;
T756:;
	V686= make_cons(V690,(V686));
	V689= CMPcdr((V689));
	V690= CMPcar((V689));
	goto T755;}
	goto T751;
T751:;
	if((V688!= VV[115]))goto T767;
	{register object V692;
	register object V693;
	V692= CMPcadr((V679));
	V693= CMPcar((V692));
	goto T771;
T771:;
	if(!(((V692))==Cnil)){
	goto T772;}
	goto T750;
	goto T772;
T772:;
	{object V694;
	V695= CMPcar((V693));
	V696= CMPcadr((V693));
	V697= CMPcddr((V693));
	V698= coerce_to_string(CMPcar((V693)));
	V694= list(2,/* INLINE-ARGS */V695,(VFUN_NARGS=3,(*(LnkLI116))(/* INLINE-ARGS */V696,/* INLINE-ARGS */V697,/* INLINE-ARGS */V698)));
	V687= make_cons((V694),(V687));}
	V692= CMPcdr((V692));
	V693= CMPcar((V692));
	goto T771;}
	goto T767;
T767:;
	FEerror("The ECASE key value ~s is illegal.",1,V688);
	goto T750;}
	goto T750;
T750:;
	{object V699;
	V699= (*(LnkLI2))(base[0],(V686),(V687));
	base[2]= CMPcddr((V679));
	base[3]= (VV[98]->s.s_gfdef);
	base[4]= (V699);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V685= vs_base[0];}}
	V700= (*(LnkLI96))(/* INLINE-ARGS */V683,V684,V685);
	{object V701 = (*(LnkLI96))((V679),/* INLINE-ARGS */V682,/* INLINE-ARGS */V700);
	VMR64(V701)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-LABELS	*/

static object LI76(V705,V706,V707)

object V705;object V706;object V707;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	base[0]= (V706);
	{register object V708;
	register object V709;
	V708= Cnil;
	V709= Cnil;
	{object V710= CMPcar((V705));
	if((V710!= VV[55])
	&& (V710!= VV[114]))goto T789;
	{register object V711;
	register object V712;
	V711= CMPcadr((V705));
	V712= CMPcar((V711));
	goto T793;
T793:;
	if(!(((V711))==Cnil)){
	goto T794;}
	goto T788;
	goto T794;
T794:;
	V708= make_cons(V712,(V708));
	V711= CMPcdr((V711));
	V712= CMPcar((V711));
	goto T793;}
	goto T789;
T789:;
	if((V710!= VV[115]))goto T805;
	{register object V714;
	register object V715;
	V714= CMPcadr((V705));
	V715= CMPcar((V714));
	goto T809;
T809:;
	if(!(((V714))==Cnil)){
	goto T810;}
	goto T788;
	goto T810;
T810:;
	{object V716;
	V717= CMPcar((V715));
	V718= CMPcadr((V715));
	V719= CMPcddr((V715));
	V720= coerce_to_string(CMPcar((V715)));
	V716= list(2,/* INLINE-ARGS */V717,(VFUN_NARGS=3,(*(LnkLI116))(/* INLINE-ARGS */V718,/* INLINE-ARGS */V719,/* INLINE-ARGS */V720)));
	V709= make_cons((V716),(V709));}
	V714= CMPcdr((V714));
	V715= CMPcar((V714));
	goto T809;}
	goto T805;
T805:;
	FEerror("The ECASE key value ~s is illegal.",1,V710);
	goto T788;}
	goto T788;
T788:;
	base[1]= (*(LnkLI2))((V707),(V708),(V709));
	V721= CMPcar((V705));
	V722= CMPcdr((V705));
	base[2]= CMPcadr((V705));
	vs_top=(vs_base=base+2)+1;
	L77(base);
	vs_top=sup;
	V723= vs_base[0];
	base[2]= CMPcddr((V705));
	base[3]= (VV[98]->s.s_gfdef);
	base[4]= base[1];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V724= vs_base[0];
	V725= (*(LnkLI96))(/* INLINE-ARGS */V722,V723,V724);
	{object V726 = (*(LnkLI96))((V705),/* INLINE-ARGS */V721,/* INLINE-ARGS */V725);
	VMR65(V726)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-IF	*/

static object LI78(V730,V731,V732)

register object V730;object V731;object V732;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	{object V733;
	object V734;
	object V735;
	V733= CMPcadr((V730));
	V734= CMPcaddr((V730));
	if((CMPcddddr((V730)))==Cnil){
	goto T833;}
	base[0]= VV[68];
	base[1]= (V730);
	base[2]= CMPmake_fixnum((long)length(CMPcdr((V730))));
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk102)();
	vs_top=sup;
	V735= make_cons(VV[65],CMPcdddr((V730)));
	goto T831;
	goto T833;
T833:;
	V735= CMPcadddr((V730));
	goto T831;
T831:;
	base[0]= (V733);
	base[1]= (V731);
	base[2]= (V732);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V736= vs_base[0];
	base[0]= (V734);
	base[1]= (V731);
	base[2]= (V732);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V737= vs_base[0];
	base[0]= (V735);
	base[1]= (V731);
	base[2]= (V732);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V738= vs_base[0];
	{object V739 = (VFUN_NARGS=5,(*(LnkLI112))((V730),VV[57],V736,V737,V738));
	VMR66(V739)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function WALK-DEFINITIONS	*/

static void L77(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_check;
	{object V740;
	check_arg(1);
	V740=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V740))!=Cnil){
	goto T852;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T852;
T852:;
	V741= (*(LnkLI117))(CMPcar((V740)),base0[0],base0[1]);
	base[1]= CMPcdr((V740));
	vs_top=(vs_base=base+1)+1;
	L77(base0);
	vs_top=sup;
	V742= vs_base[0];
	base[1]= (*(LnkLI96))((V740),/* INLINE-ARGS */V741,V742);
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
	{object V743;
	check_arg(1);
	V743=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V743))!=Cnil){
	goto T857;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T857;
T857:;
	V744= (*(LnkLI117))(CMPcar((V743)),base0[1],base0[0]);
	base[1]= CMPcdr((V743));
	vs_top=(vs_base=base+1)+1;
	L73(base0);
	vs_top=sup;
	V745= vs_base[0];
	base[1]= (*(LnkLI96))((V743),/* INLINE-ARGS */V744,V745);
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
	{object V746;
	check_arg(1);
	V746=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((V746)==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	{object V747;
	V747= CMPcar((V746));
	V748= CMPcar((V747));
	V749= (VFUN_NARGS=4,(*(LnkLI104))(CMPcadr((V747)),base0[0],base0[1],Ct));
	base[1]= CMPcddr((V747));
	base[2]= (VV[98]->s.s_gfdef);
	base[3]= base0[1];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V750= vs_base[0];
	V751= (VFUN_NARGS=4,(*(LnkLI105))((V747),/* INLINE-ARGS */V748,/* INLINE-ARGS */V749,V750));
	base[1]= CMPcdr((V746));
	vs_top=(vs_base=base+1)+1;
	L69(base0);
	vs_top=sup;
	V752= vs_base[0];
	base[1]= (*(LnkLI96))((V746),/* INLINE-ARGS */V751,V752);
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
	{object V753;
	object V754;
	check_arg(2);
	V753=(base[0]);
	V754=(base[1]);
	vs_top=sup;
	(base0[0]->c.c_car)= (*(LnkLI109))((base0[1]->c.c_car),(base0[4]->c.c_car),(base0[2]->c.c_car),(base0[3]->c.c_car),Cnil);
	base[2]= (*(LnkLI98))((V753),(V754));
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
	{object V755;
	check_arg(1);
	V755=(base[0]);
	vs_top=sup;
	base[1]= (*(LnkLI85))((V755),(base0[0]->c.c_car));
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
	{object V756;
	object V757;
	check_arg(2);
	V756=(base[0]);
	V757=(base[1]);
	vs_top=sup;
	base[2]= (*(LnkLI113))((V756),(base0[0]->c.c_car),(V757));
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
	{register object V758;
	object V759;
	register object V760;
	check_arg(3);
	V758=(base[0]);
	V759=(base[1]);
	V760=(base[2]);
	vs_top=sup;
	{register object V761;
	register object V762;
	object V763;
	object V764;
	V761= Cnil;
	V762= Cnil;
	V763= Cnil;
	V764= Cnil;
	goto T872;
T872:;
	base[3]= (V758);
	base[4]= (V759);
	base[5]= (V760);
	vs_top=(vs_base=base+3)+3;
	super_funcall_no_event((base0[1]->c.c_car));
	if(vs_base<vs_top){
	V761= vs_base[0];
	vs_base++;
	}else{
	V761= Cnil;}
	if(vs_base<vs_top){
	V762= vs_base[0];
	}else{
	V762= Cnil;}
	vs_top=sup;
	if(((V762))==Cnil){
	goto T881;}
	goto T870;
	goto T881;
T881:;
	{register object V765;
	V765= (((((V761))==((V758))?Ct:Cnil))==Cnil?Ct:Cnil);
	if(((V765))==Cnil){
	goto T885;}
	goto T879;
	goto T885;
T885:;
	if(type_of((V761))==t_cons){
	goto T888;}
	goto T870;
	goto T888;
T888:;
	if(((*(LnkLI86))(CMPcar((V761))))==Cnil){
	goto T891;}
	goto T870;
	goto T891;
T891:;
	{register object V766;
	register object V767;
	{register object V768;
	V769= (VFUN_NARGS=3,(*(LnkLI22))((V760),VV[45],(V761)));
	V768= (*(LnkLI2))((V760),Cnil,/* INLINE-ARGS */V769);
	base[3]= (V761);
	base[4]= (V768);
	vs_top=(vs_base=base+3)+2;
	Lmacroexpand_1();}
	if(vs_base>=vs_top){vs_top=sup;goto T897;}
	V766= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T898;}
	V767= vs_base[0];
	vs_top=sup;
	goto T899;
	goto T897;
T897:;
	V766= Cnil;
	goto T898;
T898:;
	V767= Cnil;
	goto T899;
T899:;
	if(((V767))==Cnil){
	goto T901;}
	V761= (V766);
	goto T879;
	goto T901;
T901:;
	goto T870;}}
	goto T879;
T879:;
	V758= (V761);
	goto T872;
	goto T870;
T870:;
	base[3]= (V761);
	base[4]= (V759);
	base[5]= (V760);
	vs_top=(vs_base=base+3)+3;
	super_funcall_no_event((base0[0]->c.c_car));
	if(vs_base<vs_top){
	V763= vs_base[0];
	vs_base++;
	}else{
	V763= Cnil;}
	if(vs_base<vs_top){
	V764= vs_base[0];
	}else{
	V764= Cnil;}
	vs_top=sup;
	base[3]= (V763);
	if((V762)==Cnil){
	base[4]= Cnil;
	goto T912;}
	base[4]= (V764);
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
	{object V770;
	object V771;
	object V772;
	check_arg(3);
	V770=(base[0]);
	V771=(base[1]);
	V772=(base[2]);
	vs_top=sup;
	base[3]= (V770);
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
	{object V773;
	object V774;
	object V775;
	check_arg(3);
	V773=(base[0]);
	V774=(base[1]);
	V775=(base[2]);
	vs_top=sup;
	base[3]= (V773);
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

