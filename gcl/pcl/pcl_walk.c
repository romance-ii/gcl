
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
	V22= (VV[97]->s.s_gfdef);
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
	{object V69 = (*(LnkLI98))((V68),(VV[23]->s.s_dbind));
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
	V80= (*(LnkLI98))((V71),(VV[23]->s.s_dbind));{object V81;
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
	V90= (*(LnkLI100))((V89));
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
	V94= (*(LnkLI100))((V93));
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
	V98= (*(LnkLI100))((V97));
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
	V102= (*(LnkLI100))((V101));
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
	V109= (*(LnkLI100))((V107));
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
	V117= (*(LnkLI100))((V115));
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
	base[1]= (*(LnkLI101))((V123));
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
	base[1]= (*(LnkLI101))((V130));
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
	V143= (*(LnkLI102))((V138),(V139));
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
	V144= (*(LnkLI103))((V139));
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
	V152= (*(LnkLI104))(VV[29],(V150),(V151));
	if(!((((/* INLINE-ARGS */V152)==Cnil?Ct:Cnil))==Cnil)){
	goto T136;}
	{object V153 = Ct;
	VMR20(V153)}
	goto T136;
T136:;
	{object V154 = (*(LnkLI105))((V150));
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
	{object V166 = (*(LnkLI106))((V162));
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
	(void) (*Lnk107)();
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
	V176= VV[108];
	goto T159;
T159:;
	{object V177;
	V178= (VFUN_NARGS=3,(*(LnkLI22))((V175),VV[43],(V176)));
	V177= (*(LnkLI2))((V175),Cnil,/* INLINE-ARGS */V178);
	base[3]= (V174);
	base[4]= VV[44];
	base[5]= (V177);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk109)();
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
	base[3]= VV[110];
	base[3]=MMcons(base[3],Cnil);
	goto T168;
T168:;
	V182= (*(LnkLI111))((V181));
	if(!(((V179))==(/* INLINE-ARGS */V182))){
	goto T172;}
	base[4]= (*(LnkLI112))((V181));
	base[4]=MMcons(base[4],base[3]);
	{frame_ptr fr;
	fr=frs_sch_catch((V179));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,(V179));
	base[5]= (V180);
	base[6]= (V181);
	base[7]= 
	make_cclosure_new(LC81,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk107)();
	unwind(fr,(V179));}
	goto T172;
T172:;
	base[4]= (V180);
	base[5]= (V181);
	base[6]= (base[3]->c.c_car);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk107)();
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
	base[3]= (*(LnkLI112))((V185));
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
	(void) (*Lnk109)();
	frs_pop();
	frs_pop();
	return;
	goto T196;
T196:;
	if(type_of((V186))==t_cons){
	goto T202;}
	{object V188;
	V189= (*(LnkLI113))((V186),(V185));
	V188= CMPcar(/* INLINE-ARGS */V189);
	if(((V188))==Cnil){
	goto T206;}
	{object V190;
	base[3]= CMPcddr((V188));
	base[4]= (V184);
	base[5]= (V185);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk109)();
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
	V192= (*(LnkLI114))((V191));
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
	V193= (*(LnkLI115))((V186),(V192),(V184),(V185));
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
	(void) (*Lnk109)();
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
	V199= (*(LnkLI115))((V194),VV[47],(V184),(V185));
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
	{object V209= V205;
	if((V209!= VV[71])
	&& (V209!= VV[3])
	&& (V209!= VV[116])
	&& (V209!= VV[117])
	&& (V209!= VV[118]))goto T263;
	base[0]= (V204);
	base[1]= VV[44];
	base[2]= (V207);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk109)();
	vs_top=sup;
	{object V210 = vs_base[0];
	VMR30(V210)}
	goto T263;
T263:;
	if((V209!= VV[37])
	&& (V209!= Cnil))goto T267;
	{object V211 = (V204);
	VMR30(V211)}
	goto T267;
T267:;
	if((V209!= VV[119]))goto T268;
	base[0]= (V204);
	base[1]= VV[48];
	base[2]= (V207);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk109)();
	vs_top=sup;
	{object V212 = vs_base[0];
	VMR30(V212)}
	goto T268;
T268:;
	if((V209!= VV[39])
	&& (V209!= VV[120]))goto T272;
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
	{object V213 = (V204);
	VMR30(V213)}
	goto T274;
T274:;
	base[0]= (V204);
	base[1]= (V206);
	base[2]= (V207);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk109)();
	vs_top=sup;
	{object V214 = vs_base[0];
	VMR30(V214)}
	goto T272;
T272:;
	base[0]= VV[49];
	base[1]= VV[50];
	base[2]= VV[51];
	base[3]= VV[52];
	base[4]= V205;
	base[5]= VV[53];
	base[6]= VV[54];
	base[7]= VV[55];
	base[8]= VV[56];
	vs_top=(vs_base=base+0)+9;
	(void) (*Lnk121)();
	vs_top=sup;
	{object V215 = vs_base[0];
	VMR30(V215)}}
	goto T261;
T261:;
	{object V216= CMPcar((V205));
	if((V216!= VV[122]))goto T294;
	V217= CMPcdr((V205));
	if((CMPcddr((V205)))!=Cnil){
	goto T297;}
	V218= Cnil;
	goto T295;
	goto T297;
T297:;
	V219 = CMPmake_fixnum((long)length((V204)));
	V220 = CMPmake_fixnum((long)length(CMPcddr((V205))));
	V221= number_minus(V219,V220);
	V218= nthcdr(fix(/* INLINE-ARGS */V221),(V204));
	goto T295;
T295:;
	{object V222 = (*(LnkLI123))((V204),/* INLINE-ARGS */V217,V218,(V206),(V207));
	VMR30(V222)}
	goto T294;
T294:;
	if((V216!= VV[65]))goto T299;
	{object V223;
	V223= (V204);
	{object V224= CMPcadr((V205));
	if(!(type_of(V224)==t_cons||(V224)==Cnil)){
	goto T307;}}
	base[0]= CMPcadr((V205));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T304;}
	goto T305;
	goto T307;
T307:;
	base[0]= CMPcadr((V205));
	base[1]= (V204);
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event(base[0]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T304;}
	goto T305;
T305:;
	V205= CMPcaddr((V205));
	goto T302;
	goto T304;
T304:;
	V205= CMPcadddr((V205));
	goto T302;
T302:;
	V204= (V223);}
	goto TTL;
	goto T299;
T299:;
	if((V216!= VV[124]))goto T314;
	V205= CMPcadr((V205));
	goto TTL;
	goto T314;
T314:;
	if(!(type_of((V204))!=t_cons)){
	goto T321;}
	{object V225 = (V204);
	VMR30(V225)}
	goto T321;
T321:;
	V226= (*(LnkLI115))(CMPcar((V204)),CMPcar((V205)),(V206),(V207));
	V227= (*(LnkLI115))(CMPcdr((V204)),CMPcdr((V205)),(V206),(V207));
	{object V228 = (*(LnkLI125))((V204),/* INLINE-ARGS */V226,/* INLINE-ARGS */V227);
	VMR30(V228)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-TEMPLATE-HANDLE-REPEAT	*/

static object LI31(V234,V235,V236,V237,V238)

object V234;object V235;object V236;object V237;object V238;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	if(!(((V234))==((V236)))){
	goto T324;}
	{object V239 = (*(LnkLI115))((V234),CMPcdr((V235)),(V237),(V238));
	VMR31(V239)}
	goto T324;
T324:;
	{object V240 = (*(LnkLI126))((V234),(V235),CMPcar((V235)),(V236),(V237),(V238));
	VMR31(V240)}
	return Cnil;
}
/*	local entry for function WALK-TEMPLATE-HANDLE-REPEAT-1	*/

static object LI32(V247,V248,V249,V250,V251,V252)

register object V247;register object V248;register object V249;register object V250;register object V251;register object V252;
{	 VMB32 VMS32 VMV32
	goto TTL;
TTL:;
	if(((V247))!=Cnil){
	goto T327;}
	{object V253 = Cnil;
	VMR32(V253)}
	goto T327;
T327:;
	if(!(((V247))==((V250)))){
	goto T330;}
	if(((V249))!=Cnil){
	goto T333;}
	{object V254 = (*(LnkLI115))((V250),CMPcdr((V248)),(V251),(V252));
	VMR32(V254)}
	goto T333;
T333:;
	base[0]= VV[57];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V255 = vs_base[0];
	VMR32(V255)}
	goto T330;
T330:;
	if(((V249))!=Cnil){
	goto T337;}
	{object V256;
	V256= (V248);
	V249= CMPcar((V248));
	V248= (V256);}
	goto TTL;
	goto T337;
T337:;
	V257= (*(LnkLI115))(CMPcar((V247)),CMPcar((V249)),(V251),(V252));
	V258= (*(LnkLI126))(CMPcdr((V247)),(V248),CMPcdr((V249)),(V250),(V251),(V252));
	{object V259 = (*(LnkLI125))((V247),/* INLINE-ARGS */V257,/* INLINE-ARGS */V258);
	VMR32(V259)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-REPEAT-EVAL	*/

static object LI33(V262,V263)

register object V262;object V263;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	if((V262)==Cnil){
	{object V264 = Cnil;
	VMR33(V264)}}
	base[0]= CMPcar((V262));
	base[1]= VV[44];
	base[2]= (V263);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk109)();
	vs_top=sup;
	V265= vs_base[0];
	V266= (*(LnkLI127))(CMPcdr((V262)),(V263));
	{object V267 = (*(LnkLI125))((V262),V265,/* INLINE-ARGS */V266);
	VMR33(V267)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function RECONS	*/

static object LI34(V271,V272,V273)

object V271;object V272;object V273;
{	 VMB34 VMS34 VMV34
	goto TTL;
TTL:;
	if(!((CMPcar((V271)))==((V272)))){
	goto T350;}
	if((CMPcdr((V271)))==((V273))){
	goto T351;}
	goto T350;
T350:;
	{object V274 = make_cons((V272),(V273));
	VMR34(V274)}
	goto T351;
T351:;
	{object V275 = (V271);
	VMR34(V275)}
	return Cnil;
}
/*	local entry for function RELIST	*/

static object LI35(object V276,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB35 VMS35 VMV35
	{object V277;
	object V278;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V277= V276;
	narg= narg - 1;
	V279 = list_vector_new(narg,first,ap);
	V278= V279;
	if(((V278))!=Cnil){
	goto T356;}
	{object V280 = Cnil;
	VMR35(V280)}
	goto T356;
T356:;
	{object V281 = (*(LnkLI128))((V277),(V278),Cnil);
	VMR35(V281)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function RELIST*	*/

static object LI36(object V282,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{object V283;
	object V284;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V283= V282;
	narg= narg - 1;
	V285 = list_vector_new(narg,first,ap);
	V284= V285;
	{object V286 = (*(LnkLI128))((V283),(V284),Ct);
	VMR36(V286)}
	va_end(ap);
	return Cnil;}
	}
/*	local entry for function RELIST-INTERNAL	*/

static object LI37(V290,V291,V292)

object V290;register object V291;object V292;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	if((CMPcdr((V291)))!=Cnil){
	goto T359;}
	if(((V292))==Cnil){
	goto T362;}
	{object V293 = CMPcar((V291));
	VMR37(V293)}
	goto T362;
T362:;
	{object V294 = (*(LnkLI125))((V290),CMPcar((V291)),Cnil);
	VMR37(V294)}
	goto T359;
T359:;
	V295= CMPcar((V291));
	V296= (*(LnkLI128))(CMPcdr((V290)),CMPcdr((V291)),(V292));
	{object V297 = (*(LnkLI125))((V290),/* INLINE-ARGS */V295,/* INLINE-ARGS */V296);
	VMR37(V297)}
	return Cnil;
}
/*	function definition for WALK-DECLARATIONS	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	{object V298;
	object V299;
	register object V300;
	object V301;
	register object V302;
	object V303;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>6) too_many_arguments();
	V298=(base[0]);
	V299=(base[1]);
	V300=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T364;}
	V301=(base[3]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T365;}
	V302=(base[4]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T366;}
	V303=(base[5]);
	vs_top=sup;
	goto T367;
	goto T364;
T364:;
	V301= Cnil;
	goto T365;
T365:;
	V302= Cnil;
	goto T366;
T366:;
	V303= Cnil;
	goto T367;
T367:;
	{object V304;
	object V305;
	object V306;
	V304= CMPcar((V298));
	V305= Cnil;
	V306= Cnil;
	if(!(type_of((V304))==t_string)){
	goto T375;}
	if((CMPcdr((V298)))==Cnil){
	goto T375;}
	if(((V301))!=Cnil){
	goto T375;}
	if(((V302))!=Cnil){
	goto T375;}
	base[7]= CMPcdr((V298));
	base[8]= (V299);
	base[9]= (V300);
	base[10]= Ct;
	vs_top=(vs_base=base+7)+4;
	(void) (*Lnk129)();
	vs_top=sup;
	V307= vs_base[0];
	base[7]= (*(LnkLI125))((V298),(V304),V307);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T375;
T375:;
	if(!(type_of((V304))==t_cons||((V304))==Cnil)){
	goto T389;}
	if(!((CMPcar((V304)))==(VV[58]))){
	goto T389;}
	{register object V308;
	register object V309;
	V308= CMPcdr((V304));
	V309= CMPcar((V308));
	goto T397;
T397:;
	if(!(((V308))==Cnil)){
	goto T398;}
	goto T393;
	goto T398;
T398:;
	{register object V310;
	register object V311;
	object V312;
	V310= CMPcar((V309));
	V311= CMPcadr((V309));
	V312= CMPcddr((V309));
	{register object x= (V310),V313= (VV[27]->s.s_dbind);
	while(V313!=Cnil)
	if(eql(x,V313->c.c_car)){
	goto T409;
	}else V313=V313->c.c_cdr;
	goto T408;}
	goto T409;
T409:;{object V315;
	V315= (*(LnkLI102))((V311),(V300));
	if(V315==Cnil)goto T411;
	V314= V315;
	goto T410;
	goto T411;
T411:;}
	V314= (V311);
	goto T410;
T410:;
	V316= listA(3,(V310),V314,(V312));
	(void)((*(LnkLI130))(/* INLINE-ARGS */V316,(V300)));
	goto T406;
	goto T408;
T408:;
	(void)((*(LnkLI130))((V309),(V300)));
	goto T406;
T406:;
	V302= make_cons(V309,(V302));}
	V308= CMPcdr((V308));
	V309= CMPcar((V308));
	goto T397;}
	goto T393;
T393:;
	base[7]= CMPcdr((V298));
	base[8]= (V299);
	base[9]= (V300);
	base[10]= (V301);
	base[11]= (V302);
	vs_top=(vs_base=base+7)+5;
	(void) (*Lnk129)();
	vs_top=sup;
	V318= vs_base[0];
	base[7]= (*(LnkLI125))((V298),(V304),V318);
	vs_top=(vs_base=base+7)+1;
	return;
	goto T389;
T389:;
	if(((V304))==Cnil){
	goto T426;}
	if(!(type_of((V304))==t_cons||((V304))==Cnil)){
	goto T426;}
	if(((*(LnkLI114))(CMPcar((V304))))!=Cnil){
	goto T426;}
	base[7]= (V304);
	base[8]= (V300);
	vs_top=(vs_base=base+7)+2;
	Lmacroexpand_1();
	if(vs_base<vs_top){
	V306= vs_base[0];
	vs_base++;
	}else{
	V306= Cnil;}
	if(vs_base<vs_top){
	V305= vs_base[0];
	}else{
	V305= Cnil;}
	vs_top=sup;
	if(((V305))==Cnil){
	goto T426;}
	base[7]= (*(LnkLI125))((V298),(V306),CMPcdr((V298)));
	base[8]= (V299);
	base[9]= (V300);
	base[10]= (V301);
	base[11]= (V302);
	if((V303)!=Cnil){
	base[12]= (V303);
	goto T443;}
	base[12]= (V298);
	goto T443;
T443:;
	vs_top=(vs_base=base+7)+6;
	(void) (*Lnk129)();
	return;
	goto T426;
T426:;
	if((V303)!=Cnil){
	base[7]= (V303);
	goto T444;}
	base[7]= (V298);
	goto T444;
T444:;
	base[8]= (V300);
	vs_top=(vs_base=base+7)+2;
	super_funcall_no_event((V299));
	return;}
	}
}
/*	local entry for function WALK-UNEXPECTED-DECLARE	*/

static object LI39(V322,V323,V324)

object V322;object V323;object V324;
{	 VMB39 VMS39 VMV39
	goto TTL;
TTL:;
	base[0]= VV[59];
	base[1]= (V322);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk131)();
	vs_top=sup;
	{object V325 = (V322);
	VMR39(V325)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-ARGLIST	*/

static object LI40(object V328,object V327,object V326,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB40 VMS40 VMV40
	{register object V329;
	object V330;
	register object V331;
	object V332;
	va_start(ap,first);
	if(narg <3) too_few_arguments();
	V329= V328;
	V330= V327;
	V331= V326;
	narg = narg - 3;
	if (narg <= 0) goto T449;
	else {
	V332= first;}
	--narg; goto T450;
	goto T449;
T449:;
	V332= Cnil;
	goto T450;
T450:;
	{register object V333;
	V333= Cnil;
	if(((V329))!=Cnil){
	goto T454;}
	{object V334 = Cnil;
	VMR40(V334)}
	goto T454;
T454:;
	V333= CMPcar((V329));
	if(!(type_of((V333))==t_symbol)){
	goto T457;}{object V335;
	{register object x= (V333),V336= VV[60];
	while(V336!=Cnil)
	if(eql(x,V336->c.c_car)){
	V335= V336;
	goto T462;
	}else V336=V336->c.c_cdr;
	V335= Cnil;}
	goto T462;
T462:;
	if(V335==Cnil)goto T461;
	goto T460;
	goto T461;
T461:;}
	(void)((*(LnkLI132))((V333),(V331)));
	goto T460;
T460:;
	V337= CMPcdr((V329));
	if((V332)==Cnil){
	V338= Cnil;
	goto T463;}
	{register object x= (V333),V340= VV[60];
	while(V340!=Cnil)
	if(eql(x,V340->c.c_car)){
	V339= V340;
	goto T464;
	}else V340=V340->c.c_cdr;
	V339= Cnil;}
	goto T464;
T464:;
	V338= ((V339)==Cnil?Ct:Cnil);
	goto T463;
T463:;
	V341= (VFUN_NARGS=4,(*(LnkLI133))(/* INLINE-ARGS */V337,(V330),(V331),V338));
	{object V342 = (*(LnkLI125))((V329),(V333),/* INLINE-ARGS */V341);
	VMR40(V342)}
	goto T457;
T457:;
	if(!(type_of((V333))==t_cons)){
	goto T466;}
	{object V343;
	if(((V332))==Cnil){
	goto T471;}
	V344= (VFUN_NARGS=4,(*(LnkLI133))((V333),(V330),(V331),(V332)));
	goto T469;
	goto T471;
T471:;
	V345= CMPcar((V333));
	base[0]= CMPcadr((V333));
	base[1]= VV[44];
	base[2]= (V331);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk109)();
	vs_top=sup;
	V346= vs_base[0];
	V344= (VFUN_NARGS=4,(*(LnkLI134))((V333),/* INLINE-ARGS */V345,V346,CMPcddr((V333))));
	goto T469;
T469:;
	V347= (VFUN_NARGS=4,(*(LnkLI133))(CMPcdr((V329)),(V330),(V331),Cnil));
	V343= (*(LnkLI125))((V329),V344,/* INLINE-ARGS */V347);
	if(!(type_of(CMPcar((V333)))==t_symbol)){
	goto T479;}
	(void)((*(LnkLI132))(CMPcar((V333)),(V331)));
	goto T477;
	goto T479;
T479:;
	(void)((*(LnkLI132))(CMPcadar((V333)),(V331)));
	goto T477;
T477:;
	if(!((CMPcddr((V333)))==Cnil)){
	goto T482;}
	goto T481;
	goto T482;
T482:;
	if(!(((type_of(CMPcaddr((V333)))==t_symbol?Ct:Cnil))==Cnil)){
	goto T484;}
	goto T481;
	goto T484;
T484:;
	(void)((*(LnkLI132))(CMPcaddr((V333)),(V331)));
	goto T481;
T481:;
	{object V348 = (V343);
	VMR40(V348)}}
	goto T466;
T466:;
	base[0]= VV[61];
	base[1]= (V329);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V349 = vs_base[0];
	VMR40(V349)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function WALK-LET	*/

static object LI41(V353,V354,V355)

object V353;object V354;object V355;
{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	{object V356 = (*(LnkLI135))((V353),(V354),(V355),Cnil);
	VMR41(V356)}
	return Cnil;
}
/*	local entry for function WALK-LET*	*/

static object LI42(V360,V361,V362)

object V360;object V361;object V362;
{	 VMB42 VMS42 VMV42
	goto TTL;
TTL:;
	{object V363 = (*(LnkLI135))((V360),(V361),(V362),Ct);
	VMR42(V363)}
	return Cnil;
}
/*	local entry for function WALK-PROG	*/

static object LI43(V367,V368,V369)

object V367;object V368;object V369;
{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	{object V370 = (*(LnkLI136))((V367),(V368),(V369),Cnil);
	VMR43(V370)}
	return Cnil;
}
/*	local entry for function WALK-PROG*	*/

static object LI44(V374,V375,V376)

object V374;object V375;object V376;
{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{object V377 = (*(LnkLI136))((V374),(V375),(V376),Ct);
	VMR44(V377)}
	return Cnil;
}
/*	local entry for function WALK-DO	*/

static object LI45(V381,V382,V383)

object V381;object V382;object V383;
{	 VMB45 VMS45 VMV45
	goto TTL;
TTL:;
	{object V384 = (*(LnkLI137))((V381),(V382),(V383),Cnil);
	VMR45(V384)}
	return Cnil;
}
/*	local entry for function WALK-DO*	*/

static object LI46(V388,V389,V390)

object V388;object V389;object V390;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{object V391 = (*(LnkLI137))((V388),(V389),(V390),Ct);
	VMR46(V391)}
	return Cnil;
}
/*	local entry for function WALK-LETLET*	*/

static object LI47(V396,V397,V398,V399)

register object V396;object V397;object V398;object V399;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	{object V400;
	V401= (VFUN_NARGS=1,(*(LnkLI22))((V398)));
	V400= (*(LnkLI2))((V398),Cnil,/* INLINE-ARGS */V401);
	{object V402;
	object V403;
	object V404;
	object V405;
	object V406;
	V402= CMPcar((V396));
	V403= CMPcadr((V396));
	V404= CMPcddr((V396));
	V405= (*(LnkLI138))((V403),(V398),(V400),(V397),(V399));
	base[5]= (V404);
	base[6]= (VV[127]->s.s_gfdef);
	base[7]= (V400);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk129)();
	vs_top=sup;
	V406= vs_base[0];
	{object V407 = (VFUN_NARGS=4,(*(LnkLI134))((V396),(V402),(V405),(V406)));
	VMR47(V407)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-LOCALLY	*/

static object LI48(V411,V412,V413)

object V411;object V412;object V413;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	{object V414;
	object V415;
	object V416;
	V414= CMPcar((V411));
	V415= CMPcdr((V411));
	base[3]= (V415);
	base[4]= (VV[127]->s.s_gfdef);
	base[5]= (V413);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk129)();
	vs_top=sup;
	V416= vs_base[0];
	{object V417 = (VFUN_NARGS=3,(*(LnkLI134))((V411),(V414),(V416)));
	VMR48(V417)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-PROGPROG*	*/

static object LI50(V422,V423,V424,V425)

register object V422;object V423;object V424;object V425;
{	 VMB49 VMS49 VMV49
	goto TTL;
TTL:;
	base[0]=MMcons((V423),Cnil);
	{object V426;
	V427= (VFUN_NARGS=1,(*(LnkLI22))((V424)));
	V426= (*(LnkLI2))((V424),Cnil,/* INLINE-ARGS */V427);
	{object V428;
	object V429;
	V428= CMPcadr((V422));
	if(type_of((V428))==t_symbol){
	goto T506;}
	V429= Cnil;
	goto T505;
	goto T506;
T506:;
	V429= (((((V428))==(Cnil)?Ct:Cnil))==Cnil?Ct:Cnil);
	goto T505;
T505:;
	{object V430;
	object V431;
	object V432;
	object V433;
	if(((V429))==Cnil){
	goto T510;}
	base[3]= CMPcar((V422));
	base[4]= CMPcadr((V422));
	base[5]= CMPcaddr((V422));
	base[6]= CMPcdddr((V422));
	vs_top=(vs_base=base+3)+4;
	goto T508;
	goto T510;
T510:;
	base[3]= CMPcar((V422));
	base[4]= Cnil;
	base[5]= CMPcadr((V422));
	base[6]= CMPcddr((V422));
	vs_top=(vs_base=base+3)+4;
	goto T508;
T508:;
	if(vs_base>=vs_top){vs_top=sup;goto T520;}
	V430= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T521;}
	V431= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T522;}
	V432= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T523;}
	V433= vs_base[0];
	vs_top=sup;
	goto T524;
	goto T520;
T520:;
	V430= Cnil;
	goto T521;
T521:;
	V431= Cnil;
	goto T522;
T522:;
	V432= Cnil;
	goto T523;
T523:;
	V433= Cnil;
	goto T524;
T524:;
	{object V434;
	object V435;
	V434= (*(LnkLI138))((V432),(V424),(V426),(base[0]->c.c_car),(V425));
	base[5]= (V433);
	base[6]= 
	make_cclosure_new(LC82,Cnil,base[0],Cdata);
	base[7]= (V426);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk129)();
	vs_top=sup;
	V435= vs_base[0];
	if(((V431))==Cnil){
	goto T531;}
	{object V436 = (VFUN_NARGS=5,(*(LnkLI134))((V422),(V430),(V431),(V434),(V435)));
	VMR49(V436)}
	goto T531;
T531:;
	{object V437 = (VFUN_NARGS=4,(*(LnkLI134))((V422),(V430),(V434),(V435)));
	VMR49(V437)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-DODO*	*/

static object LI51(V442,V443,V444,V445)

register object V442;object V443;object V444;object V445;
{	 VMB50 VMS50 VMV50
	goto TTL;
TTL:;
	{register object V446;
	V447= (VFUN_NARGS=1,(*(LnkLI22))((V444)));
	V446= (*(LnkLI2))((V444),Cnil,/* INLINE-ARGS */V447);
	{object V448;
	object V449;
	object V450;
	object V451;
	object V452;
	object V453;
	V448= CMPcar((V442));
	V449= CMPcadr((V442));
	V450= CMPcaddr((V442));
	V451= CMPcdddr((V442));
	V452= (*(LnkLI138))((V449),(V444),(V446),(V443),(V445));
	base[6]= (V451);
	base[7]= (VV[127]->s.s_gfdef);
	base[8]= (V446);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk129)();
	vs_top=sup;
	V453= vs_base[0];
	V454= (*(LnkLI139))((V449),(V452),(V443),(V446));
	V455= (*(LnkLI115))((V450),VV[62],(V443),(V446));
	{object V456 = (VFUN_NARGS=5,(*(LnkLI134))((V442),(V448),/* INLINE-ARGS */V454,/* INLINE-ARGS */V455,(V453)));
	VMR50(V456)}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WALK-LET-IF	*/

static void L52()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	{object V457;
	object V458;
	object V459;
	check_arg(3);
	V457=(base[0]);
	V458=(base[1]);
	V459=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V460;
	object V461;
	object V462;
	V460= CMPcadr((V457));
	V461= CMPcaddr((V457));
	V462= CMPcdddr((V457));
	{object V464;
	object V465= (V461);
	if(V465==Cnil){
	V463= Cnil;
	goto T547;}
	base[4]=V464=MMcons(Cnil,Cnil);
	goto T548;
T548:;
	if(!(type_of((V465->c.c_car))==t_cons||((V465->c.c_car))==Cnil)){
	goto T551;}
	(V464->c.c_car)= CMPcar((V465->c.c_car));
	goto T549;
	goto T551;
T551:;
	(V464->c.c_car)= (V465->c.c_car);
	goto T549;
T549:;
	if((V465=MMcdr(V465))==Cnil){
	V463= base[4];
	goto T547;}
	V464=MMcdr(V464)=MMcons(Cnil,Cnil);
	goto T548;}
	goto T547;
T547:;
	V467= list(2,VV[58],make_cons(VV[29],V463));
	V468= listA(3,VV[64],Cnil,(V462));
	V469= make_cons(/* INLINE-ARGS */V468,Cnil);
	base[3]= list(4,VV[1],Cnil,/* INLINE-ARGS */V467,list(3,VV[63],/* INLINE-ARGS */V469,list(4,VV[65],(V460),list(3,VV[1],(V461),VV[66]),VV[67])));
	base[4]= (V458);
	base[5]= (V459);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk109)();
	return;}
	}
}
/*	local entry for function WALK-MULTIPLE-VALUE-SETQ	*/

static object LI54(V473,V474,V475)

register object V473;object V474;object V475;
{	 VMB52 VMS52 VMV52
	goto TTL;
TTL:;
	base[0]=MMcons((V475),Cnil);
	{object V476;
	V476= CMPcadr((V473));
	base[1]= 
	make_cclosure_new(LC83,Cnil,base[0],Cdata);
	base[2]= (V476);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk140)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T557;}
	{object V477;
	object V478;
	object V479;
	object V480;
	{object V481;
	object V482= (V476);
	if(V482==Cnil){
	V477= Cnil;
	goto T561;}
	base[5]=V481=MMcons(Cnil,Cnil);
	goto T562;
T562:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	(V481->c.c_car)= vs_base[0];
	if((V482=MMcdr(V482))==Cnil){
	V477= base[5];
	goto T561;}
	V481=MMcdr(V481)=MMcons(Cnil,Cnil);
	goto T562;}
	goto T561;
T561:;
	{object V484;
	object V485= (V476);
	object V486= (V477);
	if(V485==Cnil||V486==Cnil){
	V478= Cnil;
	goto T564;}
	base[5]=V484=MMcons(Cnil,Cnil);
	goto T565;
T565:;
	(V484->c.c_car)= list(3,VV[68],(V485->c.c_car),(V486->c.c_car));
	if((V485=MMcdr(V485))==Cnil||(V486=MMcdr(V486))==Cnil){
	V478= base[5];
	goto T564;}
	V484=MMcdr(V484)=MMcons(Cnil,Cnil);
	goto T565;}
	goto T564;
T564:;
	V479= listA(4,VV[69],(V477),CMPcaddr((V473)),(V478));
	base[5]= (V479);
	base[6]= (V474);
	base[7]= (base[0]->c.c_car);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk109)();
	vs_top=sup;
	V480= vs_base[0];
	if(!(((V480))==((V479)))){
	goto T573;}
	{object V489 = (V473);
	VMR52(V489)}
	goto T573;
T573:;
	{object V490 = (V480);
	VMR52(V490)}}
	goto T557;
T557:;
	{object V491 = (*(LnkLI115))((V473),VV[70],(V474),(base[0]->c.c_car));
	VMR52(V491)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-MULTIPLE-VALUE-BIND	*/

static object LI56(V495,V496,V497)

register object V495;object V496;object V497;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	base[0]=MMcons((V497),Cnil);
	base[1]=MMcons((V496),base[0]);
	V498= (VFUN_NARGS=1,(*(LnkLI22))((base[0]->c.c_car)));
	base[2]= (*(LnkLI2))((base[0]->c.c_car),Cnil,/* INLINE-ARGS */V498);
	base[2]=MMcons(base[2],base[1]);
	{object V499;
	object V500;
	object V501;
	object V502;
	V499= CMPcar((V495));
	base[4]= CMPcadr((V495));
	base[4]=MMcons(base[4],base[2]);
	V500= (*(LnkLI115))(CMPcaddr((V495)),VV[71],(base[1]->c.c_car),(base[0]->c.c_car));
	V501= CMPcdddr((V495));
	base[7]=MMcons(Cnil,base[4]);
	base[9]= (V501);
	base[10]= 
	make_cclosure_new(LC84,Cnil,base[7],Cdata);
	base[11]= (base[2]->c.c_car);
	vs_top=(vs_base=base+9)+3;
	(void) (*Lnk129)();
	vs_top=sup;
	V502= vs_base[0];
	{object V503 = (VFUN_NARGS=5,(*(LnkLI134))((V495),(V499),(base[7]->c.c_car),(V500),(V502)));
	VMR53(V503)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-BINDINGS-1	*/

static object LI57(V509,V510,V511,V512,V513)

register object V509;object V510;register object V511;object V512;object V513;
{	 VMB54 VMS54 VMV54
	goto TTL;
TTL:;
	if((V509)==Cnil){
	{object V514 = Cnil;
	VMR54(V514)}}
	{register object V515;
	V515= CMPcar((V509));
	if(!(type_of((V515))==t_symbol)){
	goto T587;}
	(void)((*(LnkLI132))((V515),(V511)));
	V516= V515;
	goto T585;
	goto T587;
T587:;
	{object V518;
	V519= CMPcar((V515));
	base[0]= CMPcadr((V515));
	base[1]= (V512);
	if(((V513))==Cnil){
	goto T596;}
	base[2]= (V511);
	goto T594;
	goto T596;
T596:;
	base[2]= (V510);
	goto T594;
T594:;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk109)();
	vs_top=sup;
	V520= vs_base[0];
	V518= (VFUN_NARGS=4,(*(LnkLI134))((V515),/* INLINE-ARGS */V519,V520,CMPcddr((V515))));
	(void)((*(LnkLI132))(CMPcar((V515)),(V511)));
	V516= (V518);}
	goto T585;
T585:;
	V521= (*(LnkLI138))(CMPcdr((V509)),(V510),(V511),(V512),(V513));
	{object V522 = (*(LnkLI125))((V509),V516,/* INLINE-ARGS */V521);
	VMR54(V522)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-BINDINGS-2	*/

static object LI58(V527,V528,V529,V530)

register object V527;object V528;object V529;object V530;
{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	if((V527)==Cnil){
	{object V531 = Cnil;
	VMR55(V531)}}
	{register object V532;
	object V533;
	V532= CMPcar((V527));
	V533= CMPcar((V528));
	if(!(type_of((V532))==t_symbol)){
	goto T603;}
	V534= (V532);
	goto T601;
	goto T603;
T603:;
	V535= CMPcar((V533));
	V536= CMPcadr((V533));
	V537= (*(LnkLI115))(CMPcddr((V532)),VV[72],(V529),(V530));
	V534= (VFUN_NARGS=4,(*(LnkLI134))((V532),/* INLINE-ARGS */V535,/* INLINE-ARGS */V536,/* INLINE-ARGS */V537));
	goto T601;
T601:;
	V538= (*(LnkLI139))(CMPcdr((V527)),CMPcdr((V528)),(V529),(V530));
	{object V539 = (*(LnkLI125))((V527),V534,/* INLINE-ARGS */V538);
	VMR55(V539)}}
	return Cnil;
}
/*	local entry for function WALK-LAMBDA	*/

static object LI59(V543,V544,V545)

register object V543;object V544;object V545;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{object V546;
	V547= (VFUN_NARGS=1,(*(LnkLI22))((V545)));
	V546= (*(LnkLI2))((V545),Cnil,/* INLINE-ARGS */V547);
	{object V548;
	object V549;
	object V550;
	object V551;
	V548= CMPcadr((V543));
	V549= CMPcddr((V543));
	V550= (VFUN_NARGS=3,(*(LnkLI133))((V548),(V544),(V546)));
	base[4]= (V549);
	base[5]= (VV[127]->s.s_gfdef);
	base[6]= (V546);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk129)();
	vs_top=sup;
	V551= vs_base[0];
	{object V552 = (VFUN_NARGS=4,(*(LnkLI134))((V543),CMPcar((V543)),(V550),(V551)));
	VMR56(V552)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-NAMED-LAMBDA	*/

static object LI60(V556,V557,V558)

register object V556;object V557;object V558;
{	 VMB57 VMS57 VMV57
	goto TTL;
TTL:;
	{object V559;
	V560= (VFUN_NARGS=1,(*(LnkLI22))((V558)));
	V559= (*(LnkLI2))((V558),Cnil,/* INLINE-ARGS */V560);
	{object V561;
	object V562;
	object V563;
	object V564;
	object V565;
	V561= CMPcadr((V556));
	V562= CMPcaddr((V556));
	V563= CMPcdddr((V556));
	V564= (VFUN_NARGS=3,(*(LnkLI133))((V562),(V557),(V559)));
	base[5]= (V563);
	base[6]= (VV[127]->s.s_gfdef);
	base[7]= (V559);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk129)();
	vs_top=sup;
	V565= vs_base[0];
	{object V566 = (VFUN_NARGS=5,(*(LnkLI134))((V556),CMPcar((V556)),(V561),(V564),(V565)));
	VMR57(V566)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-SETQ	*/

static object LI61(V570,V571,V572)

object V570;object V571;object V572;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	if((CMPcdddr((V570)))==Cnil){
	goto T623;}
	{object V573;
	object V574;
	{register object V575;
	register object V576;
	V576= CMPcdr((V570));
	V575= Cnil;
	goto T628;
T628:;
	if(((V576))!=Cnil){
	goto T630;}
	V573= nreverse((V575));
	goto T625;
	goto T630;
T630:;
	{register object V577;
	register object V578;
	{register object V579;
	V579= CMPcar((V576));
	V576= CMPcdr((V576));
	V577= (V579);}
	{register object V580;
	V580= CMPcar((V576));
	V576= CMPcdr((V576));
	V578= (V580);}
	{register object V581;
	V581= list(3,VV[68],(V577),(V578));
	V575= make_cons((V581),(V575));}}
	goto T628;}
	goto T625;
T625:;
	V574= (*(LnkLI127))((V573),(V572));
	if(!(((V573))==((V574)))){
	goto T646;}
	{object V582 = (V570);
	VMR58(V582)}
	goto T646;
T646:;
	{object V583 = make_cons(VV[73],(V574));
	VMR58(V583)}}
	goto T623;
T623:;
	{object V584;
	object V585;
	object V586;
	V584= CMPcadr((V570));
	V585= CMPcaddr((V570));
	V587= (*(LnkLI113))((V584),(V572));
	V586= CMPcar(/* INLINE-ARGS */V587);
	if(((V586))==Cnil){
	goto T652;}
	{object V588;
	object V589;
	V588= list(3,VV[35],CMPcddr((V586)),(V585));
	base[5]= (V588);
	base[6]= (V571);
	base[7]= (V572);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk109)();
	vs_top=sup;
	V589= vs_base[0];
	if(!(((V588))==((V589)))){
	goto T660;}
	{object V590 = (V570);
	VMR58(V590)}
	goto T660;
T660:;
	{object V591 = (V589);
	VMR58(V591)}}
	goto T652;
T652:;
	base[3]= (V584);
	base[4]= VV[48];
	base[5]= (V572);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk109)();
	vs_top=sup;
	V592= vs_base[0];
	base[3]= (V585);
	base[4]= VV[44];
	base[5]= (V572);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk109)();
	vs_top=sup;
	V593= vs_base[0];
	{object V594 = (VFUN_NARGS=4,(*(LnkLI141))((V570),VV[68],V592,V593));
	VMR58(V594)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-SYMBOL-MACROLET	*/

static object LI62(V598,V599,V600)

object V598;object V599;object V600;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	{object V601;
	V601= CMPcadr((V598));
	{object V602;
	{object V604;
	object V605= (V601);
	if(V605==Cnil){
	V603= Cnil;
	goto T672;}
	base[1]=V604=MMcons(Cnil,Cnil);
	goto T673;
T673:;
	(V604->c.c_car)= listA(3,CMPcar((V605->c.c_car)),VV[26],CMPcadr((V605->c.c_car)));
	if((V605=MMcdr(V605))==Cnil){
	V603= base[1];
	goto T672;}
	V604=MMcdr(V604)=MMcons(Cnil,Cnil);
	goto T673;}
	goto T672;
T672:;
	V607= (*(LnkLI101))((V600));
	V608= append(V603,/* INLINE-ARGS */V607);
	V609= (VFUN_NARGS=3,(*(LnkLI22))((V600),VV[74],/* INLINE-ARGS */V608));
	V602= (*(LnkLI2))((V600),Cnil,/* INLINE-ARGS */V609);
	V610= (*(LnkLI127))(CMPcddr((V598)),(V602));
	{object V611 = (VFUN_NARGS=4,(*(LnkLI134))((V598),VV[75],(V601),/* INLINE-ARGS */V610));
	VMR59(V611)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-TAGBODY	*/

static object LI63(V615,V616,V617)

object V615;object V616;object V617;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;
	V618= CMPcar((V615));
	V619= (*(LnkLI142))(CMPcdr((V615)),(V616),(V617));
	{object V620 = (*(LnkLI125))((V615),/* INLINE-ARGS */V618,/* INLINE-ARGS */V619);
	VMR60(V620)}
	return Cnil;
}
/*	local entry for function WALK-TAGBODY-1	*/

static object LI64(V624,V625,V626)

register object V624;object V625;object V626;
{	 VMB61 VMS61 VMV61
	goto TTL;
TTL:;
	if((V624)==Cnil){
	{object V627 = Cnil;
	VMR61(V627)}}
	base[0]= CMPcar((V624));
	if(!(type_of(CMPcar((V624)))==t_symbol)){
	goto T679;}
	base[1]= VV[37];
	goto T677;
	goto T679;
T679:;
	base[1]= (V625);
	goto T677;
T677:;
	base[2]= (V626);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk109)();
	vs_top=sup;
	V628= vs_base[0];
	V629= (*(LnkLI142))(CMPcdr((V624)),(V625),(V626));
	{object V630 = (*(LnkLI125))((V624),V628,/* INLINE-ARGS */V629);
	VMR61(V630)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-COMPILER-LET	*/

static object LI65(V634,V635,V636)

object V634;object V635;object V636;
{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	{register object V637;
	register object V638;
	V637= Cnil;
	V638= Cnil;
	{register object V639;
	register object V640;
	V639= CMPcadr((V634));
	V640= CMPcar((V639));
	goto T686;
T686:;
	if(!(((V639))==Cnil)){
	goto T687;}
	goto T682;
	goto T687;
T687:;
	if(!(type_of((V640))==t_symbol)){
	goto T693;}
	{register object V641;
	V641= (V640);
	V637= make_cons((V641),(V637));}
	{register object V642;
	V642= Cnil;
	V638= make_cons((V642),(V638));
	goto T691;}
	goto T693;
T693:;
	{register object V643;
	V643= CMPcar((V640));
	V637= make_cons((V643),(V637));}
	{register object V644;
	base[3]= CMPcadr((V640));
	vs_top=(vs_base=base+3)+1;
	Leval();
	vs_top=sup;
	V644= vs_base[0];
	V638= make_cons((V644),(V638));}
	goto T691;
T691:;
	V639= CMPcdr((V639));
	V640= CMPcar((V639));
	goto T686;}
	goto T682;
T682:;
	V645= CMPcar((V634));
	V646= CMPcadr((V634));
	{object symbols,values;
	bds_ptr V648=bds_top;
	base[0]= (V637);
	symbols= base[0];
	base[1]= (V638);
	values= base[1];
	while(!endp(symbols)){
	if(endp(values))bds_bind(MMcar(symbols),OBJNULL);
	else{bds_bind(MMcar(symbols),MMcar(values));
	values=MMcdr(values);}
	symbols=MMcdr(symbols);}
	V649= (*(LnkLI127))(CMPcddr((V634)),(V636));
	bds_unwind(V648);
	V647= V649;}
	{object V650 = (VFUN_NARGS=4,(*(LnkLI134))((V634),/* INLINE-ARGS */V645,/* INLINE-ARGS */V646,V647));
	VMR62(V650)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-MACROLET	*/

static object LI68(V654,V655,V656)

object V654;object V655;object V656;
{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	base[0]= (V655);
	V657= (*(LnkLI112))((V656));
	V658= (VFUN_NARGS=3,(*(LnkLI22))(Cnil,VV[43],/* INLINE-ARGS */V657));
	base[1]= (*(LnkLI2))(Cnil,Cnil,/* INLINE-ARGS */V658);
	{object V659;
	object V660;
	V659= Cnil;
	V660= Cnil;
	{object V661;
	V661= CMPcar((V654));
	{object V662= (V661);
	if((V662!= VV[63])
	&& (V662!= VV[143]))goto T717;
	{register object V663;
	object V664;
	V663= CMPcadr((V654));
	V664= CMPcar((V663));
	goto T721;
T721:;
	if(!(((V663))==Cnil)){
	goto T722;}
	goto T715;
	goto T722;
T722:;
	V659= make_cons(V664,(V659));
	V663= CMPcdr((V663));
	V664= CMPcar((V663));
	goto T721;}
	goto T717;
T717:;
	if((V662!= VV[144]))goto T733;
	{register object V666;
	register object V667;
	V666= CMPcadr((V654));
	V667= CMPcar((V666));
	goto T737;
T737:;
	if(!(((V666))==Cnil)){
	goto T738;}
	goto T715;
	goto T738;
T738:;
	{object V668;
	V669= CMPcar((V667));
	V670= CMPcadr((V667));
	V671= CMPcddr((V667));
	V672= coerce_to_string(CMPcar((V667)));
	V668= list(2,/* INLINE-ARGS */V669,(VFUN_NARGS=3,(*(LnkLI145))(/* INLINE-ARGS */V670,/* INLINE-ARGS */V671,/* INLINE-ARGS */V672)));
	V660= make_cons((V668),(V660));}
	V666= CMPcdr((V666));
	V667= CMPcar((V666));
	goto T737;}
	goto T733;
T733:;
	base[2]= VV[49];
	base[3]= VV[50];
	base[4]= VV[51];
	base[5]= VV[52];
	base[6]= (V661);
	base[7]= VV[53];
	base[8]= VV[82];
	base[9]= VV[55];
	base[10]= VV[83];
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk121)();
	vs_top=sup;}}
	goto T715;
T715:;
	{object V673;
	V673= (*(LnkLI2))((V656),(V659),(V660));
	V674= CMPcar((V654));
	base[2]= CMPcadr((V654));
	vs_top=(vs_base=base+2)+1;
	L69(base);
	vs_top=sup;
	V675= vs_base[0];
	base[2]= CMPcddr((V654));
	base[3]= (VV[127]->s.s_gfdef);
	base[4]= (V673);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk129)();
	vs_top=sup;
	V676= vs_base[0];
	{object V677 = (VFUN_NARGS=4,(*(LnkLI134))((V654),/* INLINE-ARGS */V674,V675,V676));
	VMR63(V677)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-FLET	*/

static object LI72(V681,V682,V683)

object V681;object V682;object V683;
{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	base[0]= (V683);
	base[1]= (V682);
	V684= CMPcar((V681));
	V685= CMPcdr((V681));
	base[2]= CMPcadr((V681));
	vs_top=(vs_base=base+2)+1;
	L73(base);
	vs_top=sup;
	V686= vs_base[0];
	{object V688;
	object V689;
	V688= Cnil;
	V689= Cnil;
	{object V690;
	V690= CMPcar((V681));
	{object V691= (V690);
	if((V691!= VV[63])
	&& (V691!= VV[143]))goto T771;
	{register object V692;
	object V693;
	V692= CMPcadr((V681));
	V693= CMPcar((V692));
	goto T775;
T775:;
	if(!(((V692))==Cnil)){
	goto T776;}
	goto T769;
	goto T776;
T776:;
	V688= make_cons(V693,(V688));
	V692= CMPcdr((V692));
	V693= CMPcar((V692));
	goto T775;}
	goto T771;
T771:;
	if((V691!= VV[144]))goto T787;
	{register object V695;
	register object V696;
	V695= CMPcadr((V681));
	V696= CMPcar((V695));
	goto T791;
T791:;
	if(!(((V695))==Cnil)){
	goto T792;}
	goto T769;
	goto T792;
T792:;
	{object V697;
	V698= CMPcar((V696));
	V699= CMPcadr((V696));
	V700= CMPcddr((V696));
	V701= coerce_to_string(CMPcar((V696)));
	V697= list(2,/* INLINE-ARGS */V698,(VFUN_NARGS=3,(*(LnkLI145))(/* INLINE-ARGS */V699,/* INLINE-ARGS */V700,/* INLINE-ARGS */V701)));
	V689= make_cons((V697),(V689));}
	V695= CMPcdr((V695));
	V696= CMPcar((V695));
	goto T791;}
	goto T787;
T787:;
	base[2]= VV[49];
	base[3]= VV[50];
	base[4]= VV[51];
	base[5]= VV[52];
	base[6]= (V690);
	base[7]= VV[53];
	base[8]= VV[90];
	base[9]= VV[55];
	base[10]= VV[91];
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk121)();
	vs_top=sup;}}
	goto T769;
T769:;
	{object V702;
	V702= (*(LnkLI2))(base[0],(V688),(V689));
	base[2]= CMPcddr((V681));
	base[3]= (VV[127]->s.s_gfdef);
	base[4]= (V702);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk129)();
	vs_top=sup;
	V687= vs_base[0];}}
	V703= (*(LnkLI125))(/* INLINE-ARGS */V685,V686,V687);
	{object V704 = (*(LnkLI125))((V681),/* INLINE-ARGS */V684,/* INLINE-ARGS */V703);
	VMR64(V704)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-LABELS	*/

static object LI76(V708,V709,V710)

object V708;object V709;object V710;
{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	base[0]= (V709);
	{register object V711;
	register object V712;
	V711= Cnil;
	V712= Cnil;
	{object V713;
	V713= CMPcar((V708));
	{object V714= (V713);
	if((V714!= VV[63])
	&& (V714!= VV[143]))goto T819;
	{register object V715;
	register object V716;
	V715= CMPcadr((V708));
	V716= CMPcar((V715));
	goto T823;
T823:;
	if(!(((V715))==Cnil)){
	goto T824;}
	goto T817;
	goto T824;
T824:;
	V711= make_cons(V716,(V711));
	V715= CMPcdr((V715));
	V716= CMPcar((V715));
	goto T823;}
	goto T819;
T819:;
	if((V714!= VV[144]))goto T835;
	{register object V718;
	register object V719;
	V718= CMPcadr((V708));
	V719= CMPcar((V718));
	goto T839;
T839:;
	if(!(((V718))==Cnil)){
	goto T840;}
	goto T817;
	goto T840;
T840:;
	{object V720;
	V721= CMPcar((V719));
	V722= CMPcadr((V719));
	V723= CMPcddr((V719));
	V724= coerce_to_string(CMPcar((V719)));
	V720= list(2,/* INLINE-ARGS */V721,(VFUN_NARGS=3,(*(LnkLI145))(/* INLINE-ARGS */V722,/* INLINE-ARGS */V723,/* INLINE-ARGS */V724)));
	V712= make_cons((V720),(V712));}
	V718= CMPcdr((V718));
	V719= CMPcar((V718));
	goto T839;}
	goto T835;
T835:;
	base[1]= VV[49];
	base[2]= VV[50];
	base[3]= VV[51];
	base[4]= VV[52];
	base[5]= (V713);
	base[6]= VV[53];
	base[7]= VV[94];
	base[8]= VV[55];
	base[9]= VV[95];
	vs_top=(vs_base=base+1)+9;
	(void) (*Lnk121)();
	vs_top=sup;}}
	goto T817;
T817:;
	base[1]= (*(LnkLI2))((V710),(V711),(V712));
	V725= CMPcar((V708));
	V726= CMPcdr((V708));
	base[2]= CMPcadr((V708));
	vs_top=(vs_base=base+2)+1;
	L77(base);
	vs_top=sup;
	V727= vs_base[0];
	base[2]= CMPcddr((V708));
	base[3]= (VV[127]->s.s_gfdef);
	base[4]= base[1];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk129)();
	vs_top=sup;
	V728= vs_base[0];
	V729= (*(LnkLI125))(/* INLINE-ARGS */V726,V727,V728);
	{object V730 = (*(LnkLI125))((V708),/* INLINE-ARGS */V725,/* INLINE-ARGS */V729);
	VMR65(V730)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WALK-IF	*/

static object LI78(V734,V735,V736)

register object V734;object V735;object V736;
{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	{object V737;
	object V738;
	object V739;
	V737= CMPcadr((V734));
	V738= CMPcaddr((V734));
	if((CMPcddddr((V734)))==Cnil){
	goto T872;}
	base[0]= VV[96];
	base[1]= (V734);
	base[2]= CMPmake_fixnum((long)length(CMPcdr((V734))));
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk131)();
	vs_top=sup;
	V739= make_cons(VV[73],CMPcdddr((V734)));
	goto T870;
	goto T872;
T872:;
	V739= CMPcadddr((V734));
	goto T870;
T870:;
	base[0]= (V737);
	base[1]= (V735);
	base[2]= (V736);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk109)();
	vs_top=sup;
	V740= vs_base[0];
	base[0]= (V738);
	base[1]= (V735);
	base[2]= (V736);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk109)();
	vs_top=sup;
	V741= vs_base[0];
	base[0]= (V739);
	base[1]= (V735);
	base[2]= (V736);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk109)();
	vs_top=sup;
	V742= vs_base[0];
	{object V743 = (VFUN_NARGS=5,(*(LnkLI141))((V734),VV[65],V740,V741,V742));
	VMR66(V743)}}
	base[0]=base[0];
	return Cnil;
}
/*	local function WALK-DEFINITIONS	*/

static void L77(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_check;
	{object V744;
	check_arg(1);
	V744=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V744))!=Cnil){
	goto T891;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T891;
T891:;
	V745= (*(LnkLI146))(CMPcar((V744)),base0[0],base0[1]);
	base[1]= CMPcdr((V744));
	vs_top=(vs_base=base+1)+1;
	L77(base0);
	vs_top=sup;
	V746= vs_base[0];
	base[1]= (*(LnkLI125))((V744),/* INLINE-ARGS */V745,V746);
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
	{object V747;
	check_arg(1);
	V747=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V747))!=Cnil){
	goto T896;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T896;
T896:;
	V748= (*(LnkLI146))(CMPcar((V747)),base0[1],base0[0]);
	base[1]= CMPcdr((V747));
	vs_top=(vs_base=base+1)+1;
	L73(base0);
	vs_top=sup;
	V749= vs_base[0];
	base[1]= (*(LnkLI125))((V747),/* INLINE-ARGS */V748,V749);
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
	{object V750;
	check_arg(1);
	V750=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((V750)==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	{object V751;
	V751= CMPcar((V750));
	V752= CMPcar((V751));
	V753= (VFUN_NARGS=4,(*(LnkLI133))(CMPcadr((V751)),base0[0],base0[1],Ct));
	base[1]= CMPcddr((V751));
	base[2]= (VV[127]->s.s_gfdef);
	base[3]= base0[1];
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk129)();
	vs_top=sup;
	V754= vs_base[0];
	V755= (VFUN_NARGS=4,(*(LnkLI134))((V751),/* INLINE-ARGS */V752,/* INLINE-ARGS */V753,V754));
	base[1]= CMPcdr((V750));
	vs_top=(vs_base=base+1)+1;
	L69(base0);
	vs_top=sup;
	V756= vs_base[0];
	base[1]= (*(LnkLI125))((V750),/* INLINE-ARGS */V755,V756);
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
	{object V757;
	object V758;
	check_arg(2);
	V757=(base[0]);
	V758=(base[1]);
	vs_top=sup;
	(base0[0]->c.c_car)= (*(LnkLI138))((base0[1]->c.c_car),(base0[4]->c.c_car),(base0[2]->c.c_car),(base0[3]->c.c_car),Cnil);
	base[2]= (*(LnkLI127))((V757),(V758));
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
	{object V759;
	check_arg(1);
	V759=(base[0]);
	vs_top=sup;
	base[1]= (*(LnkLI113))((V759),(base0[0]->c.c_car));
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
	{object V760;
	object V761;
	check_arg(2);
	V760=(base[0]);
	V761=(base[1]);
	vs_top=sup;
	base[2]= (*(LnkLI142))((V760),(base0[0]->c.c_car),(V761));
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
	{register object V762;
	object V763;
	register object V764;
	check_arg(3);
	V762=(base[0]);
	V763=(base[1]);
	V764=(base[2]);
	vs_top=sup;
	{register object V765;
	register object V766;
	object V767;
	object V768;
	V765= Cnil;
	V766= Cnil;
	V767= Cnil;
	V768= Cnil;
	goto T911;
T911:;
	base[3]= (V762);
	base[4]= (V763);
	base[5]= (V764);
	vs_top=(vs_base=base+3)+3;
	super_funcall_no_event((base0[1]->c.c_car));
	if(vs_base<vs_top){
	V765= vs_base[0];
	vs_base++;
	}else{
	V765= Cnil;}
	if(vs_base<vs_top){
	V766= vs_base[0];
	}else{
	V766= Cnil;}
	vs_top=sup;
	if(((V766))==Cnil){
	goto T920;}
	goto T909;
	goto T920;
T920:;
	{register object V769;
	V769= (((((V765))==((V762))?Ct:Cnil))==Cnil?Ct:Cnil);
	if(((V769))==Cnil){
	goto T924;}
	goto T918;
	goto T924;
T924:;
	if(type_of((V765))==t_cons){
	goto T927;}
	goto T909;
	goto T927;
T927:;
	if(((*(LnkLI114))(CMPcar((V765))))==Cnil){
	goto T930;}
	goto T909;
	goto T930;
T930:;
	{register object V770;
	register object V771;
	{register object V772;
	V773= (VFUN_NARGS=3,(*(LnkLI22))((V764),VV[45],(V765)));
	V772= (*(LnkLI2))((V764),Cnil,/* INLINE-ARGS */V773);
	base[3]= (V765);
	base[4]= (V772);
	vs_top=(vs_base=base+3)+2;
	Lmacroexpand_1();}
	if(vs_base>=vs_top){vs_top=sup;goto T936;}
	V770= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T937;}
	V771= vs_base[0];
	vs_top=sup;
	goto T938;
	goto T936;
T936:;
	V770= Cnil;
	goto T937;
T937:;
	V771= Cnil;
	goto T938;
T938:;
	if(((V771))==Cnil){
	goto T940;}
	V765= (V770);
	goto T918;
	goto T940;
T940:;
	goto T909;}}
	goto T918;
T918:;
	V762= (V765);
	goto T911;
	goto T909;
T909:;
	base[3]= (V765);
	base[4]= (V763);
	base[5]= (V764);
	vs_top=(vs_base=base+3)+3;
	super_funcall_no_event((base0[0]->c.c_car));
	if(vs_base<vs_top){
	V767= vs_base[0];
	vs_base++;
	}else{
	V767= Cnil;}
	if(vs_base<vs_top){
	V768= vs_base[0];
	}else{
	V768= Cnil;}
	vs_top=sup;
	base[3]= (V767);
	if((V766)==Cnil){
	base[4]= Cnil;
	goto T951;}
	base[4]= (V768);
	goto T951;
T951:;
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
	{object V774;
	object V775;
	object V776;
	check_arg(3);
	V774=(base[0]);
	V775=(base[1]);
	V776=(base[2]);
	vs_top=sup;
	base[3]= (V774);
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
	{object V777;
	object V778;
	object V779;
	check_arg(3);
	V777=(base[0]);
	V778=(base[1]);
	V779=(base[2]);
	vs_top=sup;
	base[3]= (V777);
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
static object  LnkTLI146(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[146],(void **)(void *)&LnkLI146,3,first,ap);va_end(ap);return V1;} /* WALK-LAMBDA */
static object  LnkTLI145(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[145],(void **)(void *)&LnkLI145,first,ap);va_end(ap);return V1;} /* CONVERT-MACRO-TO-LAMBDA */
static object  LnkTLI142(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[142],(void **)(void *)&LnkLI142,3,first,ap);va_end(ap);return V1;} /* WALK-TAGBODY-1 */
static object  LnkTLI141(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[141],(void **)(void *)&LnkLI141,first,ap);va_end(ap);return V1;} /* RELIST */
static void LnkT140(){ call_or_link(VV[140],(void **)(void *)&Lnk140);} /* SOME */
static object  LnkTLI139(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[139],(void **)(void *)&LnkLI139,4,first,ap);va_end(ap);return V1;} /* WALK-BINDINGS-2 */
static object  LnkTLI138(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[138],(void **)(void *)&LnkLI138,5,first,ap);va_end(ap);return V1;} /* WALK-BINDINGS-1 */
static object  LnkTLI137(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[137],(void **)(void *)&LnkLI137,4,first,ap);va_end(ap);return V1;} /* WALK-DODO* */
static object  LnkTLI136(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[136],(void **)(void *)&LnkLI136,4,first,ap);va_end(ap);return V1;} /* WALK-PROGPROG* */
static object  LnkTLI135(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[135],(void **)(void *)&LnkLI135,4,first,ap);va_end(ap);return V1;} /* WALK-LETLET* */
static object  LnkTLI134(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[134],(void **)(void *)&LnkLI134,first,ap);va_end(ap);return V1;} /* RELIST* */
static object  LnkTLI133(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[133],(void **)(void *)&LnkLI133,first,ap);va_end(ap);return V1;} /* WALK-ARGLIST */
static object  LnkTLI132(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[132],(void **)(void *)&LnkLI132,2,first,ap);va_end(ap);return V1;} /* NOTE-LEXICAL-BINDING */
static void LnkT131(){ call_or_link(VV[131],(void **)(void *)&Lnk131);} /* WARN */
static object  LnkTLI130(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[130],(void **)(void *)&LnkLI130,2,first,ap);va_end(ap);return V1;} /* NOTE-DECLARATION */
static void LnkT129(){ call_or_link(VV[129],(void **)(void *)&Lnk129);} /* WALK-DECLARATIONS */
static object  LnkTLI128(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[128],(void **)(void *)&LnkLI128,3,first,ap);va_end(ap);return V1;} /* RELIST-INTERNAL */
static object  LnkTLI127(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[127],(void **)(void *)&LnkLI127,2,first,ap);va_end(ap);return V1;} /* WALK-REPEAT-EVAL */
static object  LnkTLI126(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[126],(void **)(void *)&LnkLI126,6,first,ap);va_end(ap);return V1;} /* WALK-TEMPLATE-HANDLE-REPEAT-1 */
static object  LnkTLI125(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[125],(void **)(void *)&LnkLI125,3,first,ap);va_end(ap);return V1;} /* RECONS */
static object  LnkTLI123(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[123],(void **)(void *)&LnkLI123,5,first,ap);va_end(ap);return V1;} /* WALK-TEMPLATE-HANDLE-REPEAT */
static void LnkT121(){ call_or_link(VV[121],(void **)(void *)&Lnk121);} /* ERROR */
static object  LnkTLI115(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[115],(void **)(void *)&LnkLI115,4,first,ap);va_end(ap);return V1;} /* WALK-TEMPLATE */
static object  LnkTLI114(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[114],(void **)(void *)&LnkLI114,1,first,ap);va_end(ap);return V1;} /* GET-WALKER-TEMPLATE */
static object  LnkTLI113(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[113],(void **)(void *)&LnkLI113,2,first,ap);va_end(ap);return V1;} /* VARIABLE-SYMBOL-MACRO-P */
static object  LnkTLI112(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[112],(void **)(void *)&LnkLI112,1,first,ap);va_end(ap);return V1;} /* ENV-WALK-FUNCTION */
static object  LnkTLI111(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[111],(void **)(void *)&LnkLI111,1,first,ap);va_end(ap);return V1;} /* ENV-WALK-FORM */
static void LnkT109(){ call_or_link(VV[109],(void **)(void *)&Lnk109);} /* WALK-FORM-INTERNAL */
static object  LnkTLI22(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[22],(void **)(void *)&LnkLI22,first,ap);va_end(ap);return V1;} /* WALKER-ENVIRONMENT-BIND-1 */
static object  LnkTLI2(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[2],(void **)(void *)&LnkLI2,3,first,ap);va_end(ap);return V1;} /* WITH-AUGMENTED-ENVIRONMENT-INTERNAL */
static void LnkT107(){ call_or_link(VV[107],(void **)(void *)&Lnk107);} /* WALK-FORM */
static object  LnkTLI106(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[106],(void **)(void *)&LnkLI106,1,first,ap);va_end(ap);return V1;} /* GET-IMPLEMENTATION-DEPENDENT-WALKER-TEMPLATE */
static object  LnkTLI105(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[105],(void **)(void *)&LnkLI105,1,first,ap);va_end(ap);return V1;} /* VARIABLE-GLOBALLY-SPECIAL-P */
static object  LnkTLI104(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[104],(void **)(void *)&LnkLI104,3,first,ap);va_end(ap);return V1;} /* VARIABLE-DECLARATION */
static object  LnkTLI103(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[103],(void **)(void *)&LnkLI103,1,first,ap);va_end(ap);return V1;} /* ENV-DECLARATIONS */
static object  LnkTLI102(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[102],(void **)(void *)&LnkLI102,2,first,ap);va_end(ap);return V1;} /* VARIABLE-LEXICAL-P */
static object  LnkTLI101(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[101],(void **)(void *)&LnkLI101,1,first,ap);va_end(ap);return V1;} /* ENV-LEXICAL-VARIABLES */
static object  LnkTLI100(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[100],(void **)(void *)&LnkLI100,1,first,ap);va_end(ap);return V1;} /* ENV-LOCK */
static object  LnkTLI98(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[98],(void **)(void *)&LnkLI98,2,first,ap);va_end(ap);return V1;} /* ENVIRONMENT-MACRO */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

