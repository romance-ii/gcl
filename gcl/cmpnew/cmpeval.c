
#include "cmpinclude.h"
#include "cmpeval.h"
void init_cmpeval(){do_init(VV);}
/*	local entry for function C1EXPR*	*/

static object LI1(V3,V4)

register object V3;object V4;
{	 VMB1 VMS1 VMV1
goto TTL;
TTL:;
	V3= (*(LnkLI123))((V3));
	(void)((*(LnkLI124))((V4),cadr((V3))));
	{object V5 = (V3);
	VMR1(V5)}
	return Cnil;
}
/*	local entry for function C1EXPR	*/

static object LI2(V7)

VOL object V7;
{	 VMB2 VMS2 VMV2
goto TTL;
TTL:;
	frs_push(FRS_CATCH,VV[0]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	V7= vs_base[0];
	goto T5;}
	else{
	if(!(type_of((V7))==t_symbol)){
	goto T8;}
	if(!(((V7))==(Cnil))){
	goto T11;}
	V8= (*(LnkLI125))();
	frs_pop();
	V7= V8;
	goto T5;
goto T11;
T11:;
	if(!(((V7))==(Ct))){
	goto T14;}
	V9= (*(LnkLI126))();
	frs_pop();
	V7= V9;
	goto T5;
goto T14;
T14:;
	if(!((type_of((V7))==t_symbol&&((V7))->s.s_hpack==keyword_package))){
	goto T17;}
	V10= (*(LnkLI128))((V7));
	V11= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],/* INLINE-ARGS */V10));
	V12= list(3,VV[1],/* INLINE-ARGS */V11,list(2,VV[3],(*(LnkLI129))((V7))));
	frs_pop();
	V7= V12;
	goto T5;
goto T17;
T17:;
	base[0]= (V7);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T20;}
	{object V13;
	base[0]= (V7);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_value();
	vs_top=sup;
	V13= vs_base[0];{object V14;
	V14= (*(LnkLI130))((V13),Cnil);
	if(V14==Cnil)goto T25;
	frs_pop();
	V7= V14;
	goto T5;
goto T25;
T25:;}
	V15= (*(LnkLI128))((V13));
	V16= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],/* INLINE-ARGS */V15));
	V17= list(3,VV[1],/* INLINE-ARGS */V16,list(2,VV[3],(*(LnkLI131))((V7))));
	frs_pop();
	V7= V17;
	goto T5;}
goto T20;
T20:;
	V18= (*(LnkLI132))((V7));
	frs_pop();
	V7= V18;
	goto T5;
goto T8;
T8:;
	if(!(type_of((V7))==t_cons)){
	goto T28;}
	{register object V19;
	V19= car((V7));
	if(!(type_of((V19))==t_symbol)){
	goto T32;}
	base[0]= (V19);
	base[1]= cdr((V7));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk133)();
	vs_top=sup;
	frs_pop();
	V7= vs_base[0];
	goto T5;
goto T32;
T32:;
	if(!(type_of((V19))==t_cons)){
	goto T37;}
	if(!((car((V19)))==(VV[4]))){
	goto T37;}
	V20= (*(LnkLI134))(cdr((V19)),cdr((V7)));
	frs_pop();
	V7= V20;
	goto T5;
goto T37;
T37:;
	if(!(type_of((V19))==t_cons)){
	goto T42;}
	if(!((car((V19)))==(VV[5]))){
	goto T42;}
	V21= (VFUN_NARGS=1,(*(LnkLI135))(VV[6]));
	frs_pop();
	V7= V21;
	goto T5;
goto T42;
T42:;
	V22= (VFUN_NARGS=2,(*(LnkLI135))(VV[7],(V19)));
	frs_pop();
	V7= V22;
	goto T5;}
goto T28;
T28:;
	V23= (*(LnkLI130))((V7),Ct);
	frs_pop();
	V7= V23;}
goto T5;
T5:;
	if(!(((V7))==(VV[8]))){
	goto T47;}
	{object V24 = (*(LnkLI125))();
	VMR2(V24)}
goto T47;
T47:;
	{object V25 = (V7);
	VMR2(V25)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1SHARP-COMMA	*/

static object LI3(V27)

object V27;
{	 VMB3 VMS3 VMV3
goto TTL;
TTL:;
	V28= make_cons(VV[5],(V27));
	{object V29 = (*(LnkLI130))(/* INLINE-ARGS */V28,Ct);
	VMR3(V29)}
	return Cnil;
}
/*	local entry for function C1DEFINE-STRUCTURE	*/

static object LI4(V31)

object V31;
{	 VMB4 VMS4 VMV4
	bds_check;
goto TTL;
TTL:;
	bds_bind(VV[9],Cnil);
	base[1]= make_cons(VV[10],(V31));
	vs_top=(vs_base=base+1)+1;
	Leval();
	vs_top=sup;
	V32= listA(3,VV[5],VV[10],(V31));
	(void)((*(LnkLI130))(/* INLINE-ARGS */V32,Ct));
	(void)((*(LnkLI136))());
	{object V33 = Cnil;
	bds_unwind1;
	VMR4(V33)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1NIL	*/

static object LI5()

{	 VMB5 VMS5 VMV5
goto TTL;
TTL:;
	{object V34 = symbol_value(VV[11]);
	VMR5(V34)}
	return Cnil;
}
/*	local entry for function C1T	*/

static object LI6()

{	 VMB6 VMS6 VMV6
goto TTL;
TTL:;
	{object V35 = symbol_value(VV[12]);
	VMR6(V35)}
	return Cnil;
}
/*	function definition for FLAGS-POS	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	{register object V36;
	check_arg(1);
	V36=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register long V37;
	V37= 0;
	{register object V38;
	register object V39;
	V38= VV[13];
	V39= car((V38));
goto T58;
T58:;
	if(!(endp_prop((V38)))){
	goto T59;}
	goto T54;
goto T59;
T59:;
	{register object x= (V36),V40= (V39);
	while(!endp(V40))
	if(x==(V40->c.c_car)){
	goto T65;
	}else V40=V40->c.c_cdr;
	goto T63;}
goto T65;
T65:;
	base[2]= make_fixnum(V37);
	vs_top=(vs_base=base+2)+1;
	return;
goto T63;
T63:;
	V37= (long)(V37)+(1);
	V38= cdr((V38));
	V39= car((V38));
	goto T58;}
goto T54;
T54:;
	base[1]= VV[14];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	return;}
	}
}
/*	macro definition for FLAG-P	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(2);
	vs_top=sup;
	{object V41=base[0]->c.c_cdr;
	if(endp(V41))invalid_macro_call();
	base[2]= (V41->c.c_car);
	V41=V41->c.c_cdr;
	if(endp(V41))invalid_macro_call();
	base[3]= (V41->c.c_car);
	V41=V41->c.c_cdr;
	if(!endp(V41))invalid_macro_call();}
	base[4]= base[3];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk137)();
	vs_top=sup;
	V42= vs_base[0];
	base[4]= list(3,VV[15],V42,base[2]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	function definition for FIX-OPT	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{register object V43;
	check_arg(1);
	V43=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V44;
	V44= cddr((V43));
	if(type_of(car((V44)))==t_fixnum){
	goto T77;}
	if((symbol_value(VV[16]))==Cnil){
	goto T80;}
	(void)((VFUN_NARGS=2,(*(LnkLI138))(VV[17],(V43))));
goto T80;
T80:;
	{object V46;
	if((car((V44)))==Cnil){
	goto T87;}
	base[2]= small_fixnum(2);
	goto T85;
goto T87;
T87:;
	base[2]= small_fixnum(0);
goto T85;
T85:;
	if((cadr((V44)))==Cnil){
	goto T91;}
	base[3]= small_fixnum(1);
	goto T89;
goto T91;
T91:;
	base[3]= small_fixnum(0);
goto T89;
T89:;
	vs_top=(vs_base=base+2)+2;
	Llogior();
	vs_top=sup;
	V47= vs_base[0];
	V46= make_cons(V47,cddr((V44)));
	if(type_of(cdr(V43))!=t_cons)FEwrong_type_argument(Scons,cdr(V43));
	(cdr(V43))->c.c_cdr = (V46);
	(void)(cdr(V43));}
goto T77;
T77:;
	base[1]= (V43);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for RESULT-TYPE-FROM-ARGS	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	{object V48;
	register object V49;
	check_arg(2);
	V48=(base[0]);
	V49=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V50;
	V50= Cnil;
	V50= get((V48),VV[18],Cnil);
	if(((V50))==Cnil){
	goto T96;}
	if(((V50))==(VV[19])){
	goto T96;}
	if(type_of((V50))==t_cons){
	goto T96;}
	{register object V51;
	object V52;
	V51= VV[20];
	V52= car((V51));
goto T106;
T106:;
	if(!(endp_prop((V51)))){
	goto T107;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
goto T107;
T107:;
	{register object V53;
	register object V54;
	V53= get((V48),(V52),Cnil);
	V54= car((V53));
goto T115;
T115:;
	if(!(endp_prop((V53)))){
	goto T116;}
	goto T111;
goto T116;
T116:;
	base[5]= (V54);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk139)();
	vs_top=sup;
	base[5]= small_fixnum(3);
	base[6]= caddr((V54));
	vs_top=(vs_base=base+5)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T122;}
	if(!(((long)length((V49)))==((long)length(car((V54)))))){
	goto T122;}
	{register object V55;
	register object V56;
	V56= car((V54));
	V55= (V49);
goto T133;
T133:;
	if(((V55))!=Cnil){
	goto T134;}
	goto T130;
goto T134;
T134:;
	if((car((V55)))==(car((V56)))){
	goto T138;}
	if(((*(LnkLI140))(car((V56)),car((V55))))!=Cnil){
	goto T138;}
	goto T122;
goto T138;
T138:;
	V55= cdr((V55));
	V56= cdr((V56));
	goto T133;}
goto T130;
T130:;
	base[5]= cadr((V54));
	vs_top=(vs_base=base+5)+1;
	return;
goto T122;
T122:;
	V53= cdr((V53));
	V54= car((V53));
	goto T115;}
goto T111;
T111:;
	V51= cdr((V51));
	V52= car((V51));
	goto T106;}
goto T96;
T96:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	macro definition for FLAGS	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	check_arg(2);
	vs_top=sup;
	{object V57=base[0]->c.c_cdr;
	base[2]= V57;
	base[3]= small_fixnum(0);}
	{register object V58;
	register object V59;
	V58= base[2];
	V59= car((V58));
goto T162;
T162:;
	if(!(endp_prop((V58)))){
	goto T163;}
	goto T158;
goto T163;
T163:;
	base[5]= base[3];
	base[7]= small_fixnum(1);
	base[9]= (V59);
	vs_top=(vs_base=base+9)+1;
	(void) (*Lnk137)();
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+7)+2;
	Lash();
	vs_top=sup;
	base[6]= vs_base[0];
	vs_top=(vs_base=base+5)+2;
	Llogior();
	vs_top=sup;
	base[3]= vs_base[0];
	V58= cdr((V58));
	V59= car((V58));
	goto T162;}
goto T158;
T158:;
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for C1SYMBOL-FUN	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	{object V60;
	register object V61;
	check_arg(2);
	V60=(base[0]);
	V61=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{object V62;
	V62= Cnil;
	V62= get((V60),VV[21],Cnil);
	if(((V62))==Cnil){
	goto T181;}
	base[2]= (V61);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V62));
	return;
goto T181;
T181:;
	{object V63;
	V62= get((V60),VV[22],Cnil);
	if(((V62))!=Cnil){
	goto T186;}
	V63= Cnil;
	goto T185;
goto T186;
T186:;
	V63= (
	(type_of((V62)) == t_sfun ?(*(((V62))->sfn.sfn_self)):
	(fcall.fun=((V62)),fcall.argd=2,fcalln))((V60),(V61)));
goto T185;
T185:;
	if(((V63))==Cnil){
	goto T190;}
	base[2]= (V63);
	vs_top=(vs_base=base+2)+1;
	return;
goto T190;
T190:;
	V62= (*(LnkLI141))((V60));
	if(((V62))==Cnil){
	goto T193;}
	if(!((car((V62)))==(VV[23]))){
	goto T197;}
	{object V64;
	object V65;
	V64= (VFUN_NARGS=2,(*(LnkLI127))(VV[24],Ct));
	V65= (*(LnkLI142))((V61),(V64));
	{object V66;
	V66= (*(LnkLI143))(caddr((V62)));
	if(((V66))==Cnil){
	goto T201;}
	(void)(structure_set((V64),VV[25],2,(V66)));}
goto T201;
T201:;
	{register object V67;
	V67= (*(LnkLI144))(caddr((V62)));
	if(((V67))==Cnil){
	goto T205;}
	{object V68;
	V68= Cnil;
	{object V69;
	object V70;
	V69= (V65);
	V70= car((V69));
goto T213;
T213:;
	if(!(endp_prop((V69)))){
	goto T214;}
	goto T209;
goto T214;
T214:;
	if(!(endp_prop((V67)))){
	goto T220;}
	V68= make_cons((V70),(V68));
	goto T218;
goto T220;
T220:;
	V71= (*(LnkLI145))(car((V67)),(V70),car((V61)));
	V68= make_cons(/* INLINE-ARGS */V71,(V68));
	{object V72;
	V72= car((V67));
	V67= cdr((V67));}
	{object V73;
	V73= car((V61));
	V61= cdr((V61));}
goto T218;
T218:;
	V69= cdr((V69));
	V70= car((V69));
	goto T213;}
goto T209;
T209:;
	V65= reverse((V68));}}
goto T205;
T205:;
	base[4]= list(4,VV[23],(V64),cddr((V62)),(V65));
	vs_top=(vs_base=base+4)+1;
	return;}
goto T197;
T197:;
	V74= (*(LnkLI146))((V62),(V60),(V61));
	base[2]= (*(LnkLI123))(/* INLINE-ARGS */V74);
	vs_top=(vs_base=base+2)+1;
	return;
goto T193;
T193:;
	{object V75;
	V62= get((V60),VV[26],Cnil);
	if(((V62))!=Cnil){
	goto T239;}
	V75= Cnil;
	goto T238;
goto T239;
T239:;
	if(((*(LnkLI147))((V60)))!=Cnil){
	goto T242;}
	V75= Cnil;
	goto T238;
goto T242;
T242:;
	V75= (
	(type_of((V62)) == t_sfun ?(*(((V62))->sfn.sfn_self)):
	(fcall.fun=((V62)),fcall.argd=2,fcalln))((V60),(V61)));
goto T238;
T238:;
	if(((V75))==Cnil){
	goto T245;}
	base[2]= (V75);
	vs_top=(vs_base=base+2)+1;
	return;
goto T245;
T245:;
	V62= get((V60),VV[27],Cnil);
	if(((V62))==Cnil){
	goto T248;}
	if(((*(LnkLI147))((V60)))==Cnil){
	goto T248;}
	base[2]= (V61);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V62));
	return;
goto T248;
T248:;
	V62= get((V60),VV[28],Cnil);
	if(((V62))==Cnil){
	goto T255;}
	if(((*(LnkLI147))((V60)))==Cnil){
	goto T255;}
	base[2]= car((V62));
	base[3]= (V61);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event(base[2]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T255;}
	base[2]= cdr((V62));
	base[3]= (V61);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event(base[2]);
	return;
goto T255;
T255:;
	{object V76;
	base[2]= (V60);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_package();
	vs_top=sup;
	V77= vs_base[0];
	base[2]= VV[29];
	vs_top=(vs_base=base+2)+1;
	Lsymbol_package();
	vs_top=sup;
	V78= vs_base[0];
	if((V77)==(V78)){
	goto T268;}
	goto T267;
goto T268;
T268:;
	base[2]= (V60);
	vs_top=(vs_base=base+2)+1;
	Lfboundp();
	vs_top=sup;
	V79= vs_base[0];
	if((V79)==Cnil){
	goto T274;}
	goto T267;
goto T274;
T274:;
	(void)((VFUN_NARGS=2,(*(LnkLI138))(VV[30],(V60))));
goto T267;
T267:;
	if(symbol_value(VV[31])==Cnil){
	goto T278;}
	(void)((*(LnkLI32))(VV[32],(V60)));
goto T278;
T278:;
	V76= Cnil;
	if(((V76))==Cnil){
	goto T280;}
	base[2]= (V76);
	vs_top=(vs_base=base+2)+1;
	return;
goto T280;
T280:;
	base[2]= (V60);
	vs_top=(vs_base=base+2)+1;
	Lmacro_function();
	vs_top=sup;
	V62= vs_base[0];
	if(((V62))==Cnil){
	goto T283;}
	V80= (*(LnkLI146))((V62),(V60),(V61));
	base[2]= (*(LnkLI123))(/* INLINE-ARGS */V80);
	vs_top=(vs_base=base+2)+1;
	return;
goto T283;
T283:;
	V62= get((V60),VV[33],Cnil);
	if(((V62))==Cnil){
	goto T288;}
	V82= list(2,VV[35],(V62));
	base[2]= list(4,VV[34],/* INLINE-ARGS */V82,list(2,VV[35],make_cons((V60),(V61))),Cnil);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk148)();
	vs_top=sup;
	V81= vs_base[0];
	base[2]= (*(LnkLI123))(V81);
	vs_top=(vs_base=base+2)+1;
	return;
goto T288;
T288:;
	V62= get((V60),VV[36],Cnil);
	if(((V62))==Cnil){
	goto T294;}
	if(((*(LnkLI147))((V60)))==Cnil){
	goto T294;}
	if(!(type_of((V62))==t_cons)){
	goto T294;}
	if(!(type_of(cdr((V62)))==t_fixnum)){
	goto T294;}
	if(endp_prop((V61))){
	goto T294;}
	if(!(endp_prop(cdr((V61))))){
	goto T294;}
	{object V83= car((V62));
	if((V83!= VV[46]))goto T307;
	V84= list(3,VV[37],car((V61)),cdr((V62)));
	base[2]= (*(LnkLI123))(/* INLINE-ARGS */V84);
	vs_top=(vs_base=base+2)+1;
	return;
goto T307;
T307:;
	if((V83!= VV[113]))goto T308;
	V85= list(3,VV[38],cdr((V62)),car((V61)));
	base[2]= (*(LnkLI123))(/* INLINE-ARGS */V85);
	vs_top=(vs_base=base+2)+1;
	return;
goto T308;
T308:;
	base[2]= (*(LnkLI149))(car((V61)),car((V62)),cdr((V62)));
	vs_top=(vs_base=base+2)+1;
	return;}
goto T294;
T294:;
	if(!(((V60))==(VV[5]))){
	goto T310;}
	base[2]= (VFUN_NARGS=1,(*(LnkLI135))(VV[39]));
	vs_top=(vs_base=base+2)+1;
	return;
goto T310;
T310:;
	{object V86;
	object V87;
	V88= get((V60),VV[40],Cnil);
	V86= (VFUN_NARGS=2,(*(LnkLI127))(VV[24],((V88)==Cnil?Ct:Cnil)));
	V87= (*(LnkLI142))((V61),(V86));
	{object V89;
	V89= (*(LnkLI150))((V60));
	if(((V89))==Cnil){
	goto T315;}
	if(!(equal((V89),VV[41]))){
	goto T320;}
	V89= Cnil;
	goto T315;
goto T320;
T320:;
	(void)(structure_set((V86),VV[25],2,(V89)));}
goto T315;
T315:;
	{register object V90;
	V90= (*(LnkLI151))((V60));
	if(((V90))==Cnil){
	goto T323;}
	{register object V91;
	register object V92;
	object V93;
	V91= (V87);
	V92= Cnil;
	V93= (V61);
goto T328;
T328:;
	if(!(endp_prop((V91)))){
	goto T329;}
	V87= reverse((V92));
	goto T323;
goto T329;
T329:;
	if(!(endp_prop((V90)))){
	goto T336;}
	V92= make_cons(car((V91)),(V92));
	goto T334;
goto T336;
T336:;
	V94= (*(LnkLI145))(car((V90)),car((V91)),car((V93)));
	V92= make_cons(/* INLINE-ARGS */V94,(V92));
	{object V95;
	V95= car((V90));
	V90= cdr((V90));}
goto T334;
T334:;
	V91= cdr((V91));
	V93= cdr((V93));
	goto T328;}}
goto T323;
T323:;
	{register object V96;
	V96= get((V60),VV[42],Cnil);
	if(((V96))==Cnil){
	goto T348;}
	{object V97;
	object V98;
	V97= (V87);
	V98= (V61);
goto T353;
T353:;
	if(endp_prop((V96))){
	goto T355;}
	if(!(endp_prop((V97)))){
	goto T354;}
goto T355;
T355:;
	goto T348;
goto T354;
T354:;
	(void)((*(LnkLI152))(car((V96)),car((V97)),car((V98))));
	{object V99;
	V99= car((V96));
	V96= cdr((V96));}
	V97= cdr((V97));
	V98= cdr((V98));
	goto T353;}}
goto T348;
T348:;
	{object V100= (V60);
	if((V100!= VV[153]))goto T370;
	{object V101;
	V101= structure_ref(cadar((V87)),VV[25],2);
	if(!(((V101))==(VV[43]))){
	goto T373;}
	V101= VV[44];
	if((VV[44])!=Cnil){
	goto T372;}
goto T373;
T373:;
	if(!(type_of((V101))==t_cons)){
	goto T369;}
	if((car((V101)))==(VV[45])){
	goto T380;}
	if(!((car((V101)))==(VV[46]))){
	goto T369;}
goto T380;
T380:;
	V101= cadr((V101));
	if(((V101))==Cnil){
	goto T369;}
goto T372;
T372:;
	V102= structure_ref((V86),VV[25],2);
	V101= (*(LnkLI154))(/* INLINE-ARGS */V102,(V101));
	if(((V101))!=Cnil){
	goto T388;}
	V103= make_cons((V60),(V61));
	(void)((VFUN_NARGS=2,(*(LnkLI138))(VV[47],/* INLINE-ARGS */V103)));
goto T388;
T388:;
	(void)(structure_set((V86),VV[25],2,(V101)));
	goto T369;}
goto T370;
T370:;
	if((V100!= VV[155]))goto T391;
	{object V104;
	V104= structure_ref(cadar((V87)),VV[25],2);
	if(!(((V104))==(VV[43]))){
	goto T394;}
	V104= VV[44];
	if((VV[44])!=Cnil){
	goto T393;}
goto T394;
T394:;
	if(!(type_of((V104))==t_cons)){
	goto T369;}
	if((car((V104)))==(VV[45])){
	goto T401;}
	if(!((car((V104)))==(VV[46]))){
	goto T369;}
goto T401;
T401:;
	V104= cadr((V104));
	if(((V104))==Cnil){
	goto T369;}
goto T393;
T393:;
	V105= structure_ref((V86),VV[25],2);
	base[4]= (V87);
	vs_top=(vs_base=base+4)+1;
	Llast();
	vs_top=sup;
	V106= vs_base[0];
	V107= structure_ref(cadar(V106),VV[25],2);
	V108= (*(LnkLI154))(/* INLINE-ARGS */V107,(V104));
	V104= (*(LnkLI154))(/* INLINE-ARGS */V105,/* INLINE-ARGS */V108);
	if(((V104))!=Cnil){
	goto T411;}
	V109= make_cons((V60),(V61));
	(void)((VFUN_NARGS=2,(*(LnkLI138))(VV[48],/* INLINE-ARGS */V109)));
goto T411;
T411:;
	(void)(structure_set((V86),VV[25],2,(V104)));
	base[4]= (V87);
	vs_top=(vs_base=base+4)+1;
	Llast();
	vs_top=sup;
	V110= vs_base[0];
	(void)(structure_set(cadar(V110),VV[25],2,(V104)));
	goto T369;}
goto T391;
T391:;}
goto T369;
T369:;
	{object V111;
	base[4]= (V60);
	{object V112;
	object V113= (V87);
	if(endp(V113)){
	base[5]= Cnil;
	goto T420;}
	base[6]=V112=MMcons(Cnil,Cnil);
goto T421;
T421:;
	(V112->c.c_car)= structure_ref(cadr((V113->c.c_car)),VV[25],2);
	V113=MMcdr(V113);
	if(endp(V113)){
	base[5]= base[6];
	goto T420;}
	V112=MMcdr(V112)=MMcons(Cnil,Cnil);
	goto T421;}
goto T420;
T420:;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk156)();
	vs_top=sup;
	V111= vs_base[0];
	if(((V111))==Cnil){
	goto T417;}
	V115= structure_ref((V86),VV[25],2);
	V111= (*(LnkLI154))((V111),/* INLINE-ARGS */V115);
	(void)(structure_set((V86),VV[25],2,(V111)));}
goto T417;
T417:;
	base[4]= list(4,VV[49],(V86),(V60),(V87));
	vs_top=(vs_base=base+4)+1;
	return;}}}}}
	}
}
/*	local entry for function REPLACE-CONSTANT	*/

static object LI13(V117)

object V117;
{	 VMB13 VMS13 VMV13
goto TTL;
TTL:;
	{register object V118;
	register object V119;
	V118= Cnil;
	V119= Cnil;
	{register object V120;
	V120= (V117);
goto T430;
T430:;
	if(((V120))!=Cnil){
	goto T431;}
	{object V121 = (V118);
	VMR13(V121)}
goto T431;
T431:;
	base[0]= car((V120));
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T435;}
	base[0]= car((V120));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V119= vs_base[0];
	if(type_of((V119))==t_fixnum||
type_of((V119))==t_bignum||
type_of((V119))==t_ratio||
type_of((V119))==t_shortfloat||
type_of((V119))==t_longfloat||
type_of((V119))==t_complex){
	goto T436;}
	if(!(type_of((V119))==t_character)){
	goto T435;}
goto T436;
T436:;
	V118= Ct;
	{register object V122;
	register object V123;
	V122= (V120);
	V123= (V119);
	if(type_of((V122))!=t_cons)FEwrong_type_argument(Scons,(V122));
	((V122))->c.c_car = (V123);}
goto T435;
T435:;
	V120= cdr((V120));
	goto T430;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1LAMBDA-FUN	*/

static object LI14(V126,V127)

register object V126;object V127;
{	 VMB14 VMS14 VMV14
goto TTL;
TTL:;
	{object V128;
	V128= (VFUN_NARGS=2,(*(LnkLI127))(VV[24],Ct));
	V127= (*(LnkLI142))((V127),(V128));
	V126= (VFUN_NARGS=1,(*(LnkLI157))((V126)));
	(void)((*(LnkLI124))((V128),cadr((V126))));
	{object V129 = list(4,VV[50],(V128),(V126),(V127));
	VMR14(V129)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C2EXPR	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	bds_check;
	{register object V130;
	check_arg(1);
	V130=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	if(!((car((V130)))==(VV[49]))){
	goto T460;}
	V131= caddr((V130));
	V132= cadddr((V130));
	V133= structure_ref(cadr((V130)),VV[25],2);
	base[1]= (*(LnkLI158))(/* INLINE-ARGS */V131,/* INLINE-ARGS */V132,Cnil,/* INLINE-ARGS */V133);
	vs_top=(vs_base=base+1)+1;
	return;
goto T460;
T460:;
	if((car((V130)))==(VV[51])){
	goto T462;}
	if(!((car((V130)))==(VV[52]))){
	goto T463;}
goto T462;
T462:;
	base[1]= (*(LnkLI159))(cadr((V130)));
	bds_bind(VV[53],base[1]);
	base[2]= get(car((V130)),VV[54],Cnil);
	{object V134;
	V134= cddr((V130));
	 vs_top=base+3;
	 while(!endp(V134))
	 {vs_push(car(V134));V134=cdr(V134);}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	bds_unwind1;
	return;
goto T463;
T463:;
	{register object V135;
	V135= get(car((V130)),VV[54],Cnil);
	if(((V135))==Cnil){
	goto T472;}
	base[1]= (V135);
	{object V136;
	V136= cddr((V130));
	 vs_top=base+2;
	 while(!endp(V136))
	 {vs_push(car(V136));V136=cdr(V136);}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	return;
goto T472;
T472:;
	V135= get(car((V130)),VV[55],Cnil);
	if(((V135))==Cnil){
	goto T477;}
	base[1]= (V130);
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V135));
	return;
goto T477;
T477:;
	base[1]= (*(LnkLI160))();
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local entry for function C2FUNCALL-SFUN	*/

static object LI16(V140,V141,V142)

object V140;object V141;object V142;
{	 VMB16 VMS16 VMV16
	bds_check;
goto TTL;
TTL:;
	{object V143;
	object V144;
	V143= Cnil;
	V144= make_cons((V140),(V141));
	bds_bind(VV[56],small_fixnum(0));
	base[2]= make_fixnum((long)length((V144)));
	base[3]= VV[57];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V145= vs_base[0];
	V146= list(4,V145,Ct,small_fixnum(3),VV[58]);
	V143= (*(LnkLI161))(/* INLINE-ARGS */V146,(V144));
	(void)((VFUN_NARGS=1,(*(LnkLI162))((V143))));
	{object V147 = (*(LnkLI163))();
	bds_unwind1;
	VMR16(V147)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2EXPR*	*/

static object LI17(V149)

object V149;
{	 VMB17 VMS17 VMV17
	bds_check;
goto TTL;
TTL:;
	setq(VV[60],number_plus(symbol_value(VV[60]),small_fixnum(1)));
	bds_bind(VV[59],make_cons(symbol_value(VV[60]),Cnil));
	bds_bind(VV[61],make_cons((VV[59]->s.s_dbind),symbol_value(VV[61])));
	base[2]= (V149);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk164)();
	vs_top=sup;
	if((cdr((VV[59]->s.s_dbind)))==Cnil){
	goto T497;}
	princ_str("\ngoto T",VV[62]);
	(void)((*(LnkLI165))(car((VV[59]->s.s_dbind))));
	princ_char(59,VV[62]);
	princ_str("\nT",VV[62]);
	(void)((*(LnkLI165))(car((VV[59]->s.s_dbind))));
	princ_str(":;",VV[62]);
	{object V150 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR17(V150)}
goto T497;
T497:;
	{object V151 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR17(V151)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2EXPR-TOP	*/

static object LI18(V154,V155)

object V154;object V155;
{	 VMB18 VMS18 VMV18
	bds_check;
goto TTL;
TTL:;
	bds_bind(VV[63],small_fixnum(0));
	bds_bind(VV[64],small_fixnum(0));
	bds_bind(VV[65],one_plus(symbol_value(VV[65])));
	setq(VV[66],number_plus(symbol_value(VV[66]),small_fixnum(1)));
	bds_bind(VV[67],symbol_value(VV[66]));
	princ_str("\n	{register object *base",VV[62]);
	V156= one_minus((VV[65]->s.s_dbind));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V156));
	princ_str("=base;",VV[62]);
	setq(VV[68],Ct);
	princ_str("\n	{register object *base=V",VV[62]);
	(void)((*(LnkLI165))((V155)));
	princ_char(59,VV[62]);
	princ_str("\n	register object *sup=vs_base+VM",VV[62]);
	(void)((*(LnkLI165))((VV[67]->s.s_dbind)));
	princ_char(59,VV[62]);
	princ_str("\n	base",VV[62]);
	V157= one_minus((VV[65]->s.s_dbind));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V157));
	princ_str("[0]=base",VV[62]);
	V158= one_minus((VV[65]->s.s_dbind));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V158));
	princ_str("[0];",VV[62]);
	princ_str("\n	base[0]=base[0];",VV[62]);
	if((symbol_value(VV[69]))==Cnil){
	goto T533;}
	princ_str("\n	vs_reserve(VM",VV[62]);
	(void)((*(LnkLI165))((VV[67]->s.s_dbind)));
	princ_str(");",VV[62]);
	goto T531;
goto T533;
T533:;
	princ_str("\n	vs_check;",VV[62]);
goto T531;
T531:;
	princ_str("\n	",VV[62]);
	(void)((*(LnkLI166))());
	base[4]= (V154);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk164)();
	vs_top=sup;
	V159= make_cons((VV[67]->s.s_dbind),(VV[64]->s.s_dbind));
	setq(VV[70],make_cons(/* INLINE-ARGS */V159,symbol_value(VV[70])));
	princ_str("\n	}}",VV[62]);
	{object V160 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR18(V160)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2EXPR-TOP*	*/

static object LI19(V163,V164)

object V163;object V164;
{	 VMB19 VMS19 VMV19
	bds_check;
goto TTL;
TTL:;
	setq(VV[60],number_plus(symbol_value(VV[60]),small_fixnum(1)));
	bds_bind(VV[59],make_cons(symbol_value(VV[60]),Cnil));
	bds_bind(VV[61],make_cons((VV[59]->s.s_dbind),symbol_value(VV[61])));
	(void)((*(LnkLI167))((V163),(V164)));
	if((cdr((VV[59]->s.s_dbind)))==Cnil){
	goto T551;}
	princ_str("\ngoto T",VV[62]);
	(void)((*(LnkLI165))(car((VV[59]->s.s_dbind))));
	princ_char(59,VV[62]);
	princ_str("\nT",VV[62]);
	(void)((*(LnkLI165))(car((VV[59]->s.s_dbind))));
	princ_str(":;",VV[62]);
	{object V165 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR19(V165)}
goto T551;
T551:;
	{object V166 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR19(V166)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1PROGN	*/

static object LI20(V168)

register object V168;
{	 VMB20 VMS20 VMV20
goto TTL;
TTL:;
	{register object V169;
	V169= Cnil;
	if(!(endp_prop((V168)))){
	goto T562;}
	{object V170 = (*(LnkLI125))();
	VMR20(V170)}
goto T562;
T562:;
	if(!(endp_prop(cdr((V168))))){
	goto T565;}
	{object V171 = (*(LnkLI123))(car((V168)));
	VMR20(V171)}
goto T565;
T565:;
	{register object V172;
	V172= (VFUN_NARGS=0,(*(LnkLI127))());
	{register object V173;
	register object V174;
	V173= (V168);
	V174= car((V173));
goto T572;
T572:;
	if(!(endp_prop((V173)))){
	goto T573;}
	goto T568;
goto T573;
T573:;
	V174= (*(LnkLI123))((V174));
	V169= make_cons((V174),(V169));
	(void)((*(LnkLI124))((V172),cadr((V174))));
	V173= cdr((V173));
	V174= car((V173));
	goto T572;}
goto T568;
T568:;
	V175= structure_ref(cadar((V169)),VV[25],2);
	(void)(structure_set((V172),VV[25],2,/* INLINE-ARGS */V175));
	{object V176 = list(3,VV[71],(V172),reverse((V169)));
	VMR20(V176)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1PROGN*	*/

static object LI21(V179,V180)

register object V179;object V180;
{	 VMB21 VMS21 VMV21
goto TTL;
TTL:;
	V179= (*(LnkLI168))((V179));
	(void)((*(LnkLI124))((V180),cadr((V179))));
	{object V181 = (V179);
	VMR21(V181)}
	return Cnil;
}
/*	function definition for C2PROGN	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	bds_check;
	{object V182;
	check_arg(1);
	V182=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V183;
	V183= (V182);
goto T592;
T592:;
	if(!(endp_prop(cdr((V183))))){
	goto T593;}
	base[1]= car((V183));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk164)();
	return;
goto T593;
T593:;
	bds_bind(VV[72],VV[73]);
	setq(VV[60],number_plus(symbol_value(VV[60]),small_fixnum(1)));
	bds_bind(VV[59],make_cons(symbol_value(VV[60]),Cnil));
	bds_bind(VV[61],make_cons((VV[59]->s.s_dbind),symbol_value(VV[61])));
	base[4]= car((V183));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk164)();
	vs_top=sup;
	if((cdr((VV[59]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T598;}
	princ_str("\ngoto T",VV[62]);
	(void)((*(LnkLI165))(car((VV[59]->s.s_dbind))));
	princ_char(59,VV[62]);
	princ_str("\nT",VV[62]);
	(void)((*(LnkLI165))(car((VV[59]->s.s_dbind))));
	princ_str(":;",VV[62]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
goto T598;
T598:;
	V183= cdr((V183));
	goto T592;}
	}
}
/*	local entry for function C1ARGS	*/

static object LI23(V186,V187)

object V186;object V187;
{	 VMB23 VMS23 VMV23
goto TTL;
TTL:;
	{object V188;
	object V189= (V186);
	if(endp(V189)){
	{object V190 = Cnil;
	VMR23(V190)}}
	base[0]=V188=MMcons(Cnil,Cnil);
goto T616;
T616:;
	(V188->c.c_car)= (*(LnkLI169))((V189->c.c_car),(V187));
	V189=MMcdr(V189);
	if(endp(V189)){
	{object V192 = base[0];
	VMR23(V192)}}
	V188=MMcdr(V188)=MMcons(Cnil,Cnil);
	goto T616;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1STRUCTURE-REF	*/

static object LI24(V194)

register object V194;
{	 VMB24 VMS24 VMV24
goto TTL;
TTL:;
	if((symbol_value(VV[69]))!=Cnil){
	goto T619;}
	if(endp_prop((V194))){
	goto T619;}
	if(endp_prop(cdr((V194)))){
	goto T619;}
	if(!(type_of(cadr((V194)))==t_cons)){
	goto T619;}
	if(!((caadr((V194)))==(VV[35]))){
	goto T619;}
	if(endp_prop(cdadr((V194)))){
	goto T619;}
	if(!(type_of(cadadr((V194)))==t_symbol)){
	goto T619;}
	if(!(endp_prop(cddadr((V194))))){
	goto T619;}
	if(endp_prop(cddr((V194)))){
	goto T619;}
	if(!(type_of(caddr((V194)))==t_fixnum)){
	goto T619;}
	if(!(endp_prop(cdddr((V194))))){
	goto T619;}
	{object V195 = (*(LnkLI149))(car((V194)),cadadr((V194)),caddr((V194)));
	VMR24(V195)}
goto T619;
T619:;
	{object V196;
	V196= (VFUN_NARGS=0,(*(LnkLI127))());
	{object V197 = list(4,VV[49],(V196),VV[74],(*(LnkLI142))((V194),(V196)));
	VMR24(V197)}}
	return Cnil;
}
/*	local entry for function C1STRUCTURE-REF1	*/

static object LI25(V201,V202,V203)

object V201;object V202;object V203;
{	 VMB25 VMS25 VMV25
goto TTL;
TTL:;
	{object V204;
	V204= (VFUN_NARGS=0,(*(LnkLI127))());
	if((symbol_value(VV[69]))==Cnil){
	goto T644;}
	V205= list(4,VV[74],(V201),list(2,VV[35],(V202)),(V203));
	{object V206 = (*(LnkLI123))(/* INLINE-ARGS */V205);
	VMR25(V206)}
goto T644;
T644:;
	{object V207;
	object V208;
	V207= get((V202),VV[76],Cnil);
	V209= structure_ref((V207),VV[76],2);
	V208= aref1(/* INLINE-ARGS */V209,fixint((V203)));
	V210= aref1(symbol_value(VV[75]),fixint((V208)));
	V211= (*(LnkLI170))(/* INLINE-ARGS */V210);
	(void)(structure_set((V204),VV[25],2,/* INLINE-ARGS */V211));
	V212= (*(LnkLI169))((V201),(V204));
	V213= (*(LnkLI171))((V202));
	{object V214 = list(6,VV[77],(V204),/* INLINE-ARGS */V212,/* INLINE-ARGS */V213,(V203),(V207));
	VMR25(V214)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COERCE-LOC-STRUCTURE-REF	*/

static object LI26(V217,V218)

object V217;object V218;
{	 VMB26 VMS26 VMV26
goto TTL;
TTL:;
	{object V219;
	V219= cdr((V217));
	{object V220;
	object V221;
	V220= cadddr((V219));
	V221= caddr((V219));
	if(((V220))==Cnil){
	goto T653;}
	{object V222;
	register object V223;
	V224= structure_ref((V220),VV[76],2);
	V222= aref1(/* INLINE-ARGS */V224,fixint((V221)));
	V223= aref1(symbol_value(VV[75]),fixint((V222)));
	V225= (*(LnkLI170))((V223));
	V226= (*(LnkLI172))(/* INLINE-ARGS */V225);
	if(!((/* INLINE-ARGS */V226)==(VV[78]))){
	goto T657;}
	if(!(eql((V222),small_fixnum(0)))){
	goto T660;}
	goto T657;
goto T660;
T660:;
	base[5]= VV[79];
	base[6]= (V223);
	vs_top=(vs_base=base+5)+2;
	Lerror();
	vs_top=sup;
goto T657;
T657:;
	V227= car((V217));
	V228= (*(LnkLI170))((V223));
	(void)(structure_set(/* INLINE-ARGS */V227,VV[25],2,/* INLINE-ARGS */V228));
	V229= (*(LnkLI170))((V223));
	V230= (*(LnkLI172))(/* INLINE-ARGS */V229);
	V231= make_cons(car((V219)),Cnil);
	V232= (VFUN_NARGS=2,(*(LnkLI174))(/* INLINE-ARGS */V231,VV[81]));
	V233= list(4,/* INLINE-ARGS */V230,small_fixnum(0),VV[80],list(4,car(/* INLINE-ARGS */V232),VV[82],(V221),(V220)));
	V234= (*(LnkLI170))((V218));
	{object V235 = (*(LnkLI173))(/* INLINE-ARGS */V233,/* INLINE-ARGS */V234);
	VMR26(V235)}}
goto T653;
T653:;
	{object V236 = (*(LnkLI175))();
	VMR26(V236)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2STRUCTURE-REF	*/

static object LI27(V241,V242,V243,V244)

object V241;object V242;object V243;object V244;
{	 VMB27 VMS27 VMV27
	bds_check;
goto TTL;
TTL:;
	bds_bind(VV[63],symbol_value(VV[63]));
	bds_bind(VV[56],small_fixnum(0));
	{object V245;
	object V246;
	V247= make_cons((V241),Cnil);
	V248= (VFUN_NARGS=2,(*(LnkLI174))(/* INLINE-ARGS */V247,VV[83]));
	V245= car(/* INLINE-ARGS */V248);{object V249;
	V249= symbol_value(VV[75]);
	V250= structure_ref((V244),VV[76],2);
	V251= aref1(/* INLINE-ARGS */V250,fixint((V243)));
	V246= aref1(V249,fixint(/* INLINE-ARGS */V251));}
	V252= (*(LnkLI170))((V246));
	V253= (*(LnkLI172))(/* INLINE-ARGS */V252);
	V254= list(4,/* INLINE-ARGS */V253,small_fixnum(0),VV[80],list(4,(V245),(V242),(V243),(V244)));
	(void)((VFUN_NARGS=1,(*(LnkLI162))(/* INLINE-ARGS */V254)));}
	{object V255 = (*(LnkLI163))();
	bds_unwind1;
	bds_unwind1;
	VMR27(V255)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MY-CALL	*/

static object LI28(V260,V261,V262,V263)

object V260;object V261;object V262;object V263;
{	 VMB28 VMS28 VMV28
goto TTL;
TTL:;
	{object V264;
	object V265;
	V264= structure_ref((V263),VV[76],2);
	V265= structure_ref((V263),VV[76],8);
	if((symbol_value(VV[69]))==Cnil){
	goto T672;}
	{object V266 = (*(LnkLI175))();
	VMR28(V266)}
goto T672;
T672:;
	princ_str("STREF(",VV[62]);{object V267;
	V267= symbol_value(VV[75]);
	V268= aref1((V264),fixint((V262)));
	V269= aref1(V267,fixint(/* INLINE-ARGS */V268));
	V270= (*(LnkLI176))(/* INLINE-ARGS */V269);
	(void)((*(LnkLI165))(/* INLINE-ARGS */V270));}
	princ_char(44,VV[62]);
	(void)((*(LnkLI165))((V260)));
	princ_char(44,VV[62]);
	V271= aref1((V265),fixint((V262)));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V271));
	princ_char(41,VV[62]);
	{object V272 = Cnil;
	VMR28(V272)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1STRUCTURE-SET	*/

static object LI29(V274)

register object V274;
{	 VMB29 VMS29 VMV29
goto TTL;
TTL:;
	{register object V275;
	V275= (VFUN_NARGS=0,(*(LnkLI127))());
	if(endp_prop((V274))){
	goto T683;}
	if((symbol_value(VV[69]))!=Cnil){
	goto T683;}
	if(endp_prop(cdr((V274)))){
	goto T683;}
	if(!(type_of(cadr((V274)))==t_cons)){
	goto T683;}
	if(!((caadr((V274)))==(VV[35]))){
	goto T683;}
	if(endp_prop(cdadr((V274)))){
	goto T683;}
	if(!(type_of(cadadr((V274)))==t_symbol)){
	goto T683;}
	if(!(endp_prop(cddadr((V274))))){
	goto T683;}
	if(endp_prop(cddr((V274)))){
	goto T683;}
	if(!(type_of(caddr((V274)))==t_fixnum)){
	goto T683;}
	if(endp_prop(cdddr((V274)))){
	goto T683;}
	if(!(endp_prop(cddddr((V274))))){
	goto T683;}
	{object V276;
	object V277;
	V276= (*(LnkLI123))(car((V274)));
	V277= (*(LnkLI123))(cadddr((V274)));
	(void)((*(LnkLI124))((V275),cadr((V276))));
	(void)((*(LnkLI124))((V275),cadr((V277))));
	V278= structure_ref(cadr((V277)),VV[25],2);
	(void)(structure_set((V275),VV[25],2,/* INLINE-ARGS */V278));
	V279= (*(LnkLI171))(cadadr((V274)));
	V280= caddr((V274));
	V281= get(cadadr((V274)),VV[76],Cnil);
	{object V282 = list(7,VV[84],(V275),(V276),/* INLINE-ARGS */V279,/* INLINE-ARGS */V280,(V277),V281);
	VMR29(V282)}}
goto T683;
T683:;
	{object V283 = list(4,VV[49],(V275),VV[85],(*(LnkLI142))((V274),(V275)));
	VMR29(V283)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2STRUCTURE-SET	*/

static object LI30(V289,V290,V291,V292,V293)

object V289;object V290;object V291;object V292;object V293;
{	 VMB30 VMS30 VMV30
	bds_check;
goto TTL;
TTL:;
	{object V294;
	V294= Cnil;
	bds_bind(VV[63],symbol_value(VV[63]));
	bds_bind(VV[56],small_fixnum(0));
	{object V295;
	object V296;
	object V297;
	object V298;
	object V299;
	object V300;
	V295= structure_ref((V293),VV[76],2);{object V301;
	V301= symbol_value(VV[75]);
	V302= aref1((V295),fixint((V291)));
	V296= aref1(V301,fixint(/* INLINE-ARGS */V302));}
	V297= structure_ref((V293),VV[76],8);
	V298= (*(LnkLI170))((V296));
	V299= Cnil;
	V300= Cnil;
	V303= (VFUN_NARGS=0,(*(LnkLI127))());
	V304= list(3,(V289),(V292),list(4,VV[49],/* INLINE-ARGS */V303,VV[86],Cnil));
	if(!(((V296))==(Ct))){
	goto T725;}
	V305= VV[87];
	goto T723;
goto T725;
T725:;
	V305= list(3,Ct,(V298),Ct);
goto T723;
T723:;
	V294= (VFUN_NARGS=2,(*(LnkLI174))(/* INLINE-ARGS */V304,V305));
	V299= car((V294));
	V300= cadr((V294));
	if((symbol_value(VV[69]))==Cnil){
	goto T731;}
	(void)((*(LnkLI175))());
goto T731;
T731:;
	princ_str("\n	STSET(",VV[62]);
	V306= (*(LnkLI176))((V296));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V306));
	princ_char(44,VV[62]);
	(void)((*(LnkLI165))((V299)));
	princ_char(44,VV[62]);
	V307= aref1((V297),fixint((V291)));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V307));
	princ_str(", ",VV[62]);
	(void)((*(LnkLI165))((V300)));
	princ_str(");",VV[62]);
	V308= (*(LnkLI172))((V298));
	V309= list(4,/* INLINE-ARGS */V308,small_fixnum(0),VV[88],make_cons((V300),Cnil));
	(void)((VFUN_NARGS=1,(*(LnkLI162))(/* INLINE-ARGS */V309)));
	{object V310 = (*(LnkLI163))();
	bds_unwind1;
	bds_unwind1;
	VMR30(V310)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1CONSTANT-VALUE	*/

static object LI31(V313,V314)

register object V313;object V314;
{	 VMB31 VMS31 VMV31
goto TTL;
TTL:;
	if(!(((V313))==(Cnil))){
	goto T746;}
	{object V315 = (*(LnkLI125))();
	VMR31(V315)}
goto T746;
T746:;
	if(!(((V313))==(Ct))){
	goto T749;}
	{object V316 = (*(LnkLI126))();
	VMR31(V316)}
goto T749;
T749:;
	if(!(type_of((V313))==t_fixnum)){
	goto T752;}
	V317= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],VV[89]));
	V319= (*(LnkLI177))((V313));
	if(number_compare(/* INLINE-ARGS */V319,VV[91])>=0){
	goto T755;}
	V318= Cnil;
	goto T754;
goto T755;
T755:;
	V318= (*(LnkLI129))((V313));
goto T754;
T754:;
	{object V320 = list(3,VV[1],/* INLINE-ARGS */V317,list(3,VV[90],V318,(V313)));
	VMR31(V320)}
goto T752;
T752:;
	if(!(type_of((V313))==t_character)){
	goto T758;}
	V321= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],VV[44]));
	V322= (*(LnkLI129))((V313));
	base[0]= (V313);
	vs_top=(vs_base=base+0)+1;
	Lchar_code();
	vs_top=sup;
	V323= vs_base[0];
	{object V324 = list(3,VV[1],/* INLINE-ARGS */V321,list(3,VV[92],/* INLINE-ARGS */V322,V323));
	VMR31(V324)}
goto T758;
T758:;
	if(!(type_of((V313))==t_longfloat)){
	goto T763;}
	{object V325;
	object V326;
	V325= Cnil;
	V326= Cnil;
	{register object x= (V313),V328= symbol_value(VV[93]);
	while(!endp(V328))
	if(type_of(V328->c.c_car)==t_cons &&eql(x,V328->c.c_car->c.c_car)){
	V327= (V328->c.c_car);
	goto T769;
	}else V328=V328->c.c_cdr;
	V327= Cnil;}
goto T769;
T769:;
	V325= cadr(V327);
	if(((V325))!=Cnil){
	goto T765;}
	V326= (*(LnkLI177))((V313));
	base[0]= VV[94];
	base[1]= small_fixnum(2);
	vs_top=(vs_base=base+0)+2;
	Ldivide();
	vs_top=sup;
	V329= vs_base[0];
	if(!(number_compare((V326),V329)>0)){
	goto T771;}
	base[0]= (V313);
	base[1]= VV[94];
	vs_top=(vs_base=base+0)+2;
	Ldivide();
	vs_top=sup;
	V330= vs_base[0];
	V331= list(4,VV[5],VV[19],V330,VV[95]);
	if(((*(LnkLI123))(/* INLINE-ARGS */V331))!=Cnil){
	goto T770;}
goto T771;
T771:;
	V332 = make_longfloat((double)(4.9406564584124650e-324)*(double)(1.0000000e+20));
	if(!(number_compare((V326),V332)<0)){
	goto T765;}
	base[0]= (V313);
	base[1]= VV[96];
	vs_top=(vs_base=base+0)+2;
	Ldivide();
	vs_top=sup;
	V333= vs_base[0];
	V334= list(4,VV[5],VV[19],V333,VV[98]);
	if(((*(LnkLI123))(/* INLINE-ARGS */V334))==Cnil){
	goto T765;}
goto T770;
T770:;
	V325= symbol_value(VV[99]);
	V335= list(2,(V313),(V325));
	setq(VV[93],make_cons(/* INLINE-ARGS */V335,symbol_value(VV[93])));
goto T765;
T765:;
	V336= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],VV[100]));
	if((V325)!=Cnil){
	V337= (V325);
	goto T790;}
	V337= (*(LnkLI129))((V313));
goto T790;
T790:;
	{object V338 = list(3,VV[1],/* INLINE-ARGS */V336,list(3,VV[101],V337,(V313)));
	VMR31(V338)}}
goto T763;
T763:;
	if(!(type_of((V313))==t_shortfloat)){
	goto T792;}
	V339= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],VV[102]));
	V340= (*(LnkLI129))((V313));
	{object V341 = list(3,VV[1],/* INLINE-ARGS */V339,list(3,VV[103],/* INLINE-ARGS */V340,(V313)));
	VMR31(V341)}
goto T792;
T792:;
	if(((V314))==Cnil){
	goto T795;}
	V342= (*(LnkLI128))((V313));
	V343= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],/* INLINE-ARGS */V342));
	{object V344 = list(3,VV[1],/* INLINE-ARGS */V343,list(2,VV[3],(*(LnkLI129))((V313))));
	VMR31(V344)}
goto T795;
T795:;
	{object V345 = Cnil;
	VMR31(V345)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for DEFINE-COMPILER-MACRO	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_reserve(VM32);
	check_arg(2);
	vs_top=sup;
	{object V346=base[0]->c.c_cdr;
	if(endp(V346))invalid_macro_call();
	base[2]= (V346->c.c_car);
	V346=V346->c.c_cdr;
	if(endp(V346))invalid_macro_call();
	base[3]= (V346->c.c_car);
	V346=V346->c.c_cdr;
	base[4]= V346;}
	V347= list(2,VV[35],base[2]);
	V348= list(2,VV[35],base[2]);
	V349= list(2,VV[35],base[3]);
	V350= list(4,VV[104],/* INLINE-ARGS */V347,list(2,VV[105],list(4,VV[106],/* INLINE-ARGS */V348,/* INLINE-ARGS */V349,list(2,VV[35],base[4]))),VV[107]);
	base[5]= list(3,VV[71],/* INLINE-ARGS */V350,list(2,VV[35],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function UNDEF-COMPILER-MACRO	*/

static object LI33(V352)

object V352;
{	 VMB33 VMS33 VMV33
goto TTL;
TTL:;
	{object V353 = remprop((V352),VV[33]);
	VMR33(V353)}
	return Cnil;
}
/*	macro definition for DEFINE-INLINE-FUNCTION	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_reserve(VM34);
	bds_check;
	check_arg(2);
	vs_top=sup;
	{object V354=base[0]->c.c_cdr;
	if(endp(V354))invalid_macro_call();
	base[2]= (V354->c.c_car);
	V354=V354->c.c_cdr;
	if(endp(V354))invalid_macro_call();
	base[3]= (V354->c.c_car);
	V354=V354->c.c_cdr;
	base[4]= V354;}
	{register object V355;
	V355= Cnil;
	bds_bind(VV[108],symbol_value(VV[108]));
	{register object V356;
	register object V357;
	V356= base[3];
	V357= car((V356));
goto T801;
T801:;
	if(!(endp_prop((V356)))){
	goto T802;}
	goto T797;
goto T802;
T802:;
	if(!(type_of((V357))==t_symbol)){
	goto T808;}
	{register object x= (V357),V358= VV[109];
	while(!endp(V358))
	if(x==(V358->c.c_car)){
	goto T808;
	}else V358=V358->c.c_cdr;}{object V360;
	{register object V361;
	V361= car((VV[108]->s.s_dbind));
	(VV[108]->s.s_dbind)= cdr((VV[108]->s.s_dbind));
	V360= (V361);}
	if(V360==Cnil)goto T814;
	V359= V360;
	goto T813;
goto T814;
T814:;}
	base[7]= VV[110];
	base[9]= VV[111];
	vs_top=(vs_base=base+9)+1;
	Lfind_package();
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+7)+2;
	Lgentemp();
	vs_top=sup;
	V359= vs_base[0];
goto T813;
T813:;
	V355= make_cons(V359,(V355));
	goto T806;
goto T808;
T808:;
	base[7]= VV[112];
	base[8]= (V357);
	base[9]= base[2];
	vs_top=(vs_base=base+7)+3;
	Lerror();
	vs_top=sup;
goto T806;
T806:;
	V356= cdr((V356));
	V357= car((V356));
	goto T801;}
goto T797;
T797:;
	{object V362;
	{object V364;
	object V365= base[3];
	object V366= (V355);
	if(endp(V365)||endp(V366)){
	V363= Cnil;
	goto T831;}
	base[6]=V364=MMcons(Cnil,Cnil);
goto T832;
T832:;
	(V364->c.c_car)= list(3,VV[113],list(2,VV[35],(V365->c.c_car)),(V366->c.c_car));
	V365=MMcdr(V365);
	V366=MMcdr(V366);
	if(endp(V365)||endp(V366)){
	V363= base[6];
	goto T831;}
	V364=MMcdr(V364)=MMcons(Cnil,Cnil);
	goto T832;}
goto T831;
T831:;
	V362= make_cons(VV[113],V363);
	V369= listA(4,VV[114],base[2],base[3],base[4]);
	base[6]= list(3,VV[71],/* INLINE-ARGS */V369,list(4,VV[115],base[2],(V355),list(4,VV[116],VV[117],(V362),list(2,VV[35],base[4]))));
	vs_top=(vs_base=base+6)+1;
	bds_unwind1;
	return;}}
}
/*	local entry for function NAME-TO-SD	*/

static object LI35(V371)

object V371;
{	 VMB35 VMS35 VMV35
goto TTL;
TTL:;
	{object V372;
	V372= Cnil;{object V373;
	if(type_of((V371))==t_symbol){
	goto T838;}
	V373= Cnil;
	goto T837;
goto T838;
T838:;
	V372= get((V371),VV[76],Cnil);
	V373= (V372);
goto T837;
T837:;
	if(V373==Cnil)goto T836;
	goto T835;
goto T836;
T836:;}
	base[0]= VV[118];
	base[1]= (V371);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
goto T835;
T835:;
	{object V374 = (V372);
	VMR35(V374)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function NAME-SD1	*/

static object LI36(V376)

object V376;
{	 VMB36 VMS36 VMV36
goto TTL;
TTL:;{object V377;
	V377= get((V376),VV[119],Cnil);
	if(V377==Cnil)goto T843;
	{object V378 = V377;
	VMR36(V378)}
goto T843;
T843:;}
	V379= list(3,VV[5],VV[119],list(2,VV[35],(V376)));
	{object V380 = sputprop((V376),VV[120],/* INLINE-ARGS */V379);
	VMR36(V380)}
	return Cnil;
}
/*	local entry for function CO1STRUCTURE-PREDICATE	*/

static object LI37(V383,V384)

object V383;object V384;
{	 VMB37 VMS37 VMV37
goto TTL;
TTL:;
	{object V385;
	V385= Cnil;
	if(!(type_of((V383))==t_symbol)){
	goto T847;}
	V385= get((V383),VV[121],Cnil);
	if(((V385))==Cnil){
	goto T847;}
	V386= car((V384));
	V387= list(3,VV[122],/* INLINE-ARGS */V386,list(2,VV[35],(V385)));
	{object V388 = (*(LnkLI123))(/* INLINE-ARGS */V387);
	VMR37(V388)}
goto T847;
T847:;
	{object V389 = Cnil;
	VMR37(V389)}}
	return Cnil;
}
static object  LnkTLI177(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[177],(void **)&LnkLI177,1,ap);va_end(ap);return V1;} /* ABS */
static object  LnkTLI176(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[176],(void **)&LnkLI176,1,ap);va_end(ap);return V1;} /* AET-C-TYPE */
static object  LnkTLI175(){return call_proc0(VV[175],(void **)&LnkLI175);} /* WFS-ERROR */
static object  LnkTLI174(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[174],(void **)&LnkLI174,ap);va_end(ap);return V1;} /* INLINE-ARGS */
static object  LnkTLI173(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[173],(void **)&LnkLI173,2,ap);va_end(ap);return V1;} /* COERCE-LOC */
static object  LnkTLI172(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[172],(void **)&LnkLI172,1,ap);va_end(ap);return V1;} /* INLINE-TYPE */
static object  LnkTLI171(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[171],(void **)&LnkLI171,1,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI170(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[170],(void **)&LnkLI170,1,ap);va_end(ap);return V1;} /* TYPE-FILTER */
static object  LnkTLI169(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[169],(void **)&LnkLI169,2,ap);va_end(ap);return V1;} /* C1EXPR* */
static object  LnkTLI168(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[168],(void **)&LnkLI168,1,ap);va_end(ap);return V1;} /* C1PROGN */
static object  LnkTLI167(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[167],(void **)&LnkLI167,2,ap);va_end(ap);return V1;} /* C2EXPR-TOP */
static object  LnkTLI166(){return call_proc0(VV[166],(void **)&LnkLI166);} /* RESET-TOP */
static object  LnkTLI165(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[165],(void **)&LnkLI165,1,ap);va_end(ap);return V1;} /* WT1 */
static void LnkT164(){ call_or_link(VV[164],(void **)&Lnk164);} /* C2EXPR */
static object  LnkTLI163(){return call_proc0(VV[163],(void **)&LnkLI163);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI162(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[162],(void **)&LnkLI162,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI161(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[161],(void **)&LnkLI161,2,ap);va_end(ap);return V1;} /* GET-INLINE-LOC */
static object  LnkTLI160(){return call_proc0(VV[160],(void **)&LnkLI160);} /* BABOON */
static object  LnkTLI159(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[159],(void **)&LnkLI159,1,ap);va_end(ap);return V1;} /* VOLATILE */
static object  LnkTLI158(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[158],(void **)&LnkLI158,4,ap);va_end(ap);return V1;} /* C2CALL-GLOBAL */
static object  LnkTLI157(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[157],(void **)&LnkLI157,ap);va_end(ap);return V1;} /* C1LAMBDA-EXPR */
static void LnkT156(){ call_or_link(VV[156],(void **)&Lnk156);} /* RESULT-TYPE-FROM-ARGS */
static object  LnkTLI154(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[154],(void **)&LnkLI154,2,ap);va_end(ap);return V1;} /* TYPE-AND */
static object  LnkTLI152(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[152],(void **)&LnkLI152,3,ap);va_end(ap);return V1;} /* CHECK-FORM-TYPE */
static object  LnkTLI151(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[151],(void **)&LnkLI151,1,ap);va_end(ap);return V1;} /* GET-ARG-TYPES */
static object  LnkTLI150(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[150],(void **)&LnkLI150,1,ap);va_end(ap);return V1;} /* GET-RETURN-TYPE */
static object  LnkTLI149(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[149],(void **)&LnkLI149,3,ap);va_end(ap);return V1;} /* C1STRUCTURE-REF1 */
static void LnkT148(){ call_or_link(VV[148],(void **)&Lnk148);} /* CMP-EVAL */
static object  LnkTLI32(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[32],(void **)&LnkLI32,2,ap);va_end(ap);return V1;} /* RECORD-CALL-INFO */
static object  LnkTLI147(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[147],(void **)&LnkLI147,1,ap);va_end(ap);return V1;} /* INLINE-POSSIBLE */
static object  LnkTLI146(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[146],(void **)&LnkLI146,3,ap);va_end(ap);return V1;} /* CMP-EXPAND-MACRO */
static object  LnkTLI145(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[145],(void **)&LnkLI145,3,ap);va_end(ap);return V1;} /* AND-FORM-TYPE */
static object  LnkTLI144(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[144],(void **)&LnkLI144,1,ap);va_end(ap);return V1;} /* GET-LOCAL-ARG-TYPES */
static object  LnkTLI143(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[143],(void **)&LnkLI143,1,ap);va_end(ap);return V1;} /* GET-LOCAL-RETURN-TYPE */
static object  LnkTLI142(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[142],(void **)&LnkLI142,2,ap);va_end(ap);return V1;} /* C1ARGS */
static object  LnkTLI141(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[141],(void **)&LnkLI141,1,ap);va_end(ap);return V1;} /* C1LOCAL-FUN */
static object  LnkTLI140(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[140],(void **)&LnkLI140,2,ap);va_end(ap);return V1;} /* TYPE>= */
static void LnkT139(){ call_or_link(VV[139],(void **)&Lnk139);} /* FIX-OPT */
static object  LnkTLI138(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[138],(void **)&LnkLI138,ap);va_end(ap);return V1;} /* CMPWARN */
static void LnkT137(){ call_or_link(VV[137],(void **)&Lnk137);} /* FLAGS-POS */
static object  LnkTLI136(){return call_proc0(VV[136],(void **)&LnkLI136);} /* ADD-LOAD-TIME-SHARP-COMMA */
static object  LnkTLI135(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[135],(void **)&LnkLI135,ap);va_end(ap);return V1;} /* CMPERR */
static object  LnkTLI134(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[134],(void **)&LnkLI134,2,ap);va_end(ap);return V1;} /* C1LAMBDA-FUN */
static void LnkT133(){ call_or_link(VV[133],(void **)&Lnk133);} /* C1SYMBOL-FUN */
static object  LnkTLI132(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[132],(void **)&LnkLI132,1,ap);va_end(ap);return V1;} /* C1VAR */
static object  LnkTLI131(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[131],(void **)&LnkLI131,1,ap);va_end(ap);return V1;} /* ADD-CONSTANT */
static object  LnkTLI130(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[130],(void **)&LnkLI130,2,ap);va_end(ap);return V1;} /* C1CONSTANT-VALUE */
static object  LnkTLI129(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[129],(void **)&LnkLI129,1,ap);va_end(ap);return V1;} /* ADD-OBJECT */
static object  LnkTLI128(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[128],(void **)&LnkLI128,1,ap);va_end(ap);return V1;} /* OBJECT-TYPE */
static object  LnkTLI127(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[127],(void **)&LnkLI127,ap);va_end(ap);return V1;} /* MAKE-INFO */
static object  LnkTLI126(){return call_proc0(VV[126],(void **)&LnkLI126);} /* C1T */
static object  LnkTLI125(){return call_proc0(VV[125],(void **)&LnkLI125);} /* C1NIL */
static object  LnkTLI124(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[124],(void **)&LnkLI124,2,ap);va_end(ap);return V1;} /* ADD-INFO */
static object  LnkTLI123(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[123],(void **)&LnkLI123,1,ap);va_end(ap);return V1;} /* C1EXPR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

