
#include "cmpinclude.h"
#include "cmpeval.h"
init_cmpeval(){do_init(VV);}
/*	local entry for function C1EXPR*	*/

static object LI1(V3,V4)

register object V3;object V4;
{	 VMB1 VMS1 VMV1
TTL:;
	V3= (*(LnkLI123))((V3));
	(void)((*(LnkLI124))((V4),cadr((V3))));
	{object V5 = (V3);
	VMR1(V5)}
}
/*	local entry for function C1EXPR	*/

static object LI2(V7)

VOL object V7;
{	 VMB2 VMS2 VMV2
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
T11:;
	if(!(((V7))==(Ct))){
	goto T14;}
	V9= (*(LnkLI126))();
	frs_pop();
	V7= V9;
	goto T5;
T14:;
	if(!((type_of((V7))==t_symbol&&((V7))->s.s_hpack==keyword_package))){
	goto T17;}
	V10= (*(LnkLI128))((V7));
	V11= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],/* INLINE-ARGS */V10));
	V12= list(3,VV[1],/* INLINE-ARGS */V11,list(2,VV[3],(*(LnkLI129))((V7))));
	frs_pop();
	V7= V12;
	goto T5;
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
T25:;}
	V15= (*(LnkLI128))((V13));
	V16= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],/* INLINE-ARGS */V15));
	V17= list(3,VV[1],/* INLINE-ARGS */V16,list(2,VV[3],(*(LnkLI131))((V7))));
	frs_pop();
	V7= V17;
	goto T5;}
T20:;
	V18= (*(LnkLI132))((V7));
	frs_pop();
	V7= V18;
	goto T5;
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
T32:;
	if(!(type_of((V19))==t_cons)){
	goto T37;}
	if(!((car((V19)))==(VV[4]))){
	goto T37;}
	V20= (*(LnkLI134))(cdr((V19)),cdr((V7)));
	frs_pop();
	V7= V20;
	goto T5;
T37:;
	if(!(type_of((V19))==t_cons)){
	goto T42;}
	if(!((car((V19)))==(VV[5]))){
	goto T42;}
	V21= (VFUN_NARGS=1,(*(LnkLI135))(VV[6]));
	frs_pop();
	V7= V21;
	goto T5;
T42:;
	V22= (VFUN_NARGS=2,(*(LnkLI135))(VV[7],(V19)));
	frs_pop();
	V7= V22;
	goto T5;}
T28:;
	V23= (*(LnkLI130))((V7),Ct);
	frs_pop();
	V7= V23;}
T5:;
	if(!(((V7))==(VV[8]))){
	goto T47;}
	{object V24 = (*(LnkLI125))();
	VMR2(V24)}
T47:;
	{object V25 = (V7);
	VMR2(V25)}
}
/*	local entry for function C1SHARP-COMMA	*/

static object LI3(V27)

object V27;
{	 VMB3 VMS3 VMV3
TTL:;
	V28= make_cons(VV[5],(V27));
	{object V29 = (*(LnkLI130))(/* INLINE-ARGS */V28,Ct);
	VMR3(V29)}
}
/*	local entry for function C1DEFINE-STRUCTURE	*/

static object LI4(V31)

object V31;
{	 VMB4 VMS4 VMV4
	bds_check;
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
}
/*	local entry for function C1NIL	*/

static object LI5()

{	 VMB5 VMS5 VMV5
TTL:;
	{object V34 = symbol_value(VV[11]);
	VMR5(V34)}
}
/*	local entry for function C1T	*/

static object LI6()

{	 VMB6 VMS6 VMV6
TTL:;
	{object V35 = symbol_value(VV[12]);
	VMR6(V35)}
}
/*	function definition for FLAGS-POS	*/

static L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	{register object V36;
	check_arg(1);
	V36=(base[0]);
	vs_top=sup;
TTL:;
	{register int V37;
	V37= 0;
	{register object V38;
	register object V39;
	V38= VV[13];
	V39= car((V38));
T58:;
	if(!(endp((V38)))){
	goto T59;}
	goto T54;
T59:;
	{register object x= (V36),V40= (V39);
	while(!endp(V40))
	if(x==(V40->c.c_car)){
	goto T65;
	}else V40=V40->c.c_cdr;
	goto T63;}
T65:;
	base[2]= make_fixnum(V37);
	vs_top=(vs_base=base+2)+1;
	return;
T63:;
	V37= (V37)+(1);
	V38= cdr((V38));
	V39= car((V38));
	goto T58;}
T54:;
	base[1]= VV[14];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	return;}
	}
}
/*	macro definition for FLAG-P	*/

static L8()
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

static L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{register object V43;
	check_arg(1);
	V43=(base[0]);
	vs_top=sup;
TTL:;
	{register object V44;
	V44= cddr((V43));
	if(type_of(car((V44)))==t_fixnum){
	goto T77;}
	if((symbol_value(VV[16]))==Cnil){
	goto T80;}
	(void)((VFUN_NARGS=2,(*(LnkLI138))(VV[17],(V43))));
T80:;
	{object V46;
	if((car((V44)))==Cnil){
	goto T87;}
	base[2]= small_fixnum(2);
	goto T85;
T87:;
	base[2]= small_fixnum(0);
T85:;
	if((cadr((V44)))==Cnil){
	goto T91;}
	base[3]= small_fixnum(1);
	goto T89;
T91:;
	base[3]= small_fixnum(0);
T89:;
	vs_top=(vs_base=base+2)+2;
	Llogior();
	vs_top=sup;
	V47= vs_base[0];
	V46= make_cons(V47,cddr((V44)));
	if(type_of(cdr(V43))!=t_cons)FEwrong_type_argument(Scons,cdr(V43));
	(cdr(V43))->c.c_cdr = (V46);
	(void)(cdr(V43));}
T77:;
	base[1]= (V43);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for RESULT-TYPE-FROM-ARGS	*/

static L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	{object V48;
	register object V49;
	check_arg(2);
	V48=(base[0]);
	V49=(base[1]);
	vs_top=sup;
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
T106:;
	if(!(endp((V51)))){
	goto T107;}
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
T107:;
	{register object V53;
	register object V54;
	V53= get((V48),(V52),Cnil);
	V54= car((V53));
T115:;
	if(!(endp((V53)))){
	goto T116;}
	goto T111;
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
	if(!((length((V49)))==(length(car((V54)))))){
	goto T122;}
	{register object V55;
	register object V56;
	V56= car((V54));
	V55= (V49);
T133:;
	if(((V55))!=Cnil){
	goto T134;}
	goto T130;
T134:;
	if((car((V55)))==(car((V56)))){
	goto T138;}
	if(((*(LnkLI140))(car((V56)),car((V55))))!=Cnil){
	goto T138;}
	goto T122;
T138:;
	V55= cdr((V55));
	V56= cdr((V56));
	goto T133;}
T130:;
	base[5]= cadr((V54));
	vs_top=(vs_base=base+5)+1;
	return;
T122:;
	V53= cdr((V53));
	V54= car((V53));
	goto T115;}
T111:;
	V51= cdr((V51));
	V52= car((V51));
	goto T106;}
T96:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	macro definition for FLAGS	*/

static L11()
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
T162:;
	if(!(endp((V58)))){
	goto T163;}
	goto T158;
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
T158:;
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for C1SYMBOL-FUN	*/

static L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	{object V60;
	register object V61;
	check_arg(2);
	V60=(base[0]);
	V61=(base[1]);
	vs_top=sup;
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
T181:;
	{object V63;
	V62= get((V60),VV[22],Cnil);
	if(((V62))!=Cnil){
	goto T186;}
	V63= Cnil;
	goto T185;
T186:;
	V63= (
	(type_of((V62)) == t_sfun ?(*(object (*)())(((V62))->sfn.sfn_self)):
	(fcall.fun=((V62)),fcall.argd=2,fcalln))((V60),(V61)));
T185:;
	if(((V63))==Cnil){
	goto T190;}
	base[2]= (V63);
	vs_top=(vs_base=base+2)+1;
	return;
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
T213:;
	if(!(endp((V69)))){
	goto T214;}
	goto T209;
T214:;
	if(!(endp((V67)))){
	goto T220;}
	V68= make_cons((V70),(V68));
	goto T218;
T220:;
	V71= (*(LnkLI145))(car((V67)),(V70),car((V61)));
	V68= make_cons(/* INLINE-ARGS */V71,(V68));
	{object V72;
	V72= car((V67));
	V67= cdr((V67));}
	{object V73;
	V73= car((V61));
	V61= cdr((V61));}
T218:;
	V69= cdr((V69));
	V70= car((V69));
	goto T213;}
T209:;
	V65= reverse((V68));}}
T205:;
	base[4]= list(4,VV[23],(V64),cddr((V62)),(V65));
	vs_top=(vs_base=base+4)+1;
	return;}
T197:;
	V74= (*(LnkLI146))((V62),(V60),(V61));
	base[2]= (*(LnkLI123))(/* INLINE-ARGS */V74);
	vs_top=(vs_base=base+2)+1;
	return;
T193:;
	{object V75;
	V62= get((V60),VV[26],Cnil);
	if(((V62))!=Cnil){
	goto T239;}
	V75= Cnil;
	goto T238;
T239:;
	if(((*(LnkLI147))((V60)))!=Cnil){
	goto T242;}
	V75= Cnil;
	goto T238;
T242:;
	V75= (
	(type_of((V62)) == t_sfun ?(*(object (*)())(((V62))->sfn.sfn_self)):
	(fcall.fun=((V62)),fcall.argd=2,fcalln))((V60),(V61)));
T238:;
	if(((V75))==Cnil){
	goto T245;}
	base[2]= (V75);
	vs_top=(vs_base=base+2)+1;
	return;
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
T268:;
	base[2]= (V60);
	vs_top=(vs_base=base+2)+1;
	Lfboundp();
	vs_top=sup;
	V79= vs_base[0];
	if((V79)==Cnil){
	goto T274;}
	goto T267;
T274:;
	(void)((VFUN_NARGS=2,(*(LnkLI138))(VV[30],(V60))));
T267:;
	if(symbol_value(VV[31])==Cnil){
	goto T278;}
	(void)((*(LnkLI32))(VV[32],(V60)));
T278:;
	V76= Cnil;
	if(((V76))==Cnil){
	goto T280;}
	base[2]= (V76);
	vs_top=(vs_base=base+2)+1;
	return;
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
	if(endp((V61))){
	goto T294;}
	if(!(endp(cdr((V61))))){
	goto T294;}
	{object V83= car((V62));
	if((V83!= VV[46]))goto T307;
	V84= list(3,VV[37],car((V61)),cdr((V62)));
	base[2]= (*(LnkLI123))(/* INLINE-ARGS */V84);
	vs_top=(vs_base=base+2)+1;
	return;
T307:;
	if((V83!= VV[113]))goto T308;
	V85= list(3,VV[38],cdr((V62)),car((V61)));
	base[2]= (*(LnkLI123))(/* INLINE-ARGS */V85);
	vs_top=(vs_base=base+2)+1;
	return;
T308:;
	base[2]= (*(LnkLI149))(car((V61)),car((V62)),cdr((V62)));
	vs_top=(vs_base=base+2)+1;
	return;}
T294:;
	if(!(((V60))==(VV[5]))){
	goto T310;}
	base[2]= (VFUN_NARGS=1,(*(LnkLI135))(VV[39]));
	vs_top=(vs_base=base+2)+1;
	return;
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
T320:;
	(void)(structure_set((V86),VV[25],2,(V89)));}
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
T328:;
	if(!(endp((V91)))){
	goto T329;}
	V87= reverse((V92));
	goto T323;
T329:;
	if(!(endp((V90)))){
	goto T336;}
	V92= make_cons(car((V91)),(V92));
	goto T334;
T336:;
	V94= (*(LnkLI145))(car((V90)),car((V91)),car((V93)));
	V92= make_cons(/* INLINE-ARGS */V94,(V92));
	{object V95;
	V95= car((V90));
	V90= cdr((V90));}
T334:;
	V91= cdr((V91));
	V93= cdr((V93));
	goto T328;}}
T323:;
	{register object V96;
	V96= get((V60),VV[42],Cnil);
	if(((V96))==Cnil){
	goto T348;}
	{object V97;
	object V98;
	V97= (V87);
	V98= (V61);
T353:;
	if(endp((V96))){
	goto T355;}
	if(!(endp((V97)))){
	goto T354;}
T355:;
	goto T348;
T354:;
	(void)((*(LnkLI152))(car((V96)),car((V97)),car((V98))));
	{object V99;
	V99= car((V96));
	V96= cdr((V96));}
	V97= cdr((V97));
	V98= cdr((V98));
	goto T353;}}
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
T373:;
	if(!(type_of((V101))==t_cons)){
	goto T369;}
	if((car((V101)))==(VV[45])){
	goto T380;}
	if(!((car((V101)))==(VV[46]))){
	goto T369;}
T380:;
	V101= cadr((V101));
	if(((V101))==Cnil){
	goto T369;}
T372:;
	V102= structure_ref((V86),VV[25],2);
	V101= (*(LnkLI154))(/* INLINE-ARGS */V102,(V101));
	if(((V101))!=Cnil){
	goto T388;}
	V103= make_cons((V60),(V61));
	(void)((VFUN_NARGS=2,(*(LnkLI138))(VV[47],/* INLINE-ARGS */V103)));
T388:;
	(void)(structure_set((V86),VV[25],2,(V101)));
	goto T369;}
T370:;
	if((V100!= VV[155]))goto T391;
	{object V104;
	V104= structure_ref(cadar((V87)),VV[25],2);
	if(!(((V104))==(VV[43]))){
	goto T394;}
	V104= VV[44];
	if((VV[44])!=Cnil){
	goto T393;}
T394:;
	if(!(type_of((V104))==t_cons)){
	goto T369;}
	if((car((V104)))==(VV[45])){
	goto T401;}
	if(!((car((V104)))==(VV[46]))){
	goto T369;}
T401:;
	V104= cadr((V104));
	if(((V104))==Cnil){
	goto T369;}
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
T411:;
	(void)(structure_set((V86),VV[25],2,(V104)));
	base[4]= (V87);
	vs_top=(vs_base=base+4)+1;
	Llast();
	vs_top=sup;
	V110= vs_base[0];
	(void)(structure_set(cadar(V110),VV[25],2,(V104)));
	goto T369;}
T391:;}
T369:;
	{object V111;
	base[4]= (V60);
	{object V112;
	object V113= (V87);
	if(endp(V113)){
	base[5]= Cnil;
	goto T420;}
	base[6]=V112=MMcons(Cnil,Cnil);
T421:;
	(V112->c.c_car)= structure_ref(cadr((V113->c.c_car)),VV[25],2);
	if(endp(V113=MMcdr(V113))){
	base[5]= base[6];
	goto T420;}
	V112=MMcdr(V112)=MMcons(Cnil,Cnil);
	goto T421;}
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
TTL:;
	{register object V118;
	register object V119;
	V118= Cnil;
	V119= Cnil;
	{register object V120;
	V120= (V117);
T430:;
	if(((V120))!=Cnil){
	goto T431;}
	{object V121 = (V118);
	VMR13(V121)}
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
T436:;
	V118= Ct;
	{register object V122;
	register object V123;
	V122= (V120);
	V123= (V119);
	if(type_of((V122))!=t_cons)FEwrong_type_argument(Scons,(V122));
	((V122))->c.c_car = (V123);}
T435:;
	V120= cdr((V120));
	goto T430;}}
}
/*	local entry for function C1LAMBDA-FUN	*/

static object LI14(V126,V127)

register object V126;object V127;
{	 VMB14 VMS14 VMV14
TTL:;
	{object V128;
	V128= (VFUN_NARGS=2,(*(LnkLI127))(VV[24],Ct));
	V127= (*(LnkLI142))((V127),(V128));
	V126= (VFUN_NARGS=1,(*(LnkLI157))((V126)));
	(void)((*(LnkLI124))((V128),cadr((V126))));
	{object V129 = list(4,VV[50],(V128),(V126),(V127));
	VMR14(V129)}}
}
/*	function definition for C2EXPR	*/

static L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	bds_check;
	{register object V130;
	check_arg(1);
	V130=(base[0]);
	vs_top=sup;
TTL:;
	if(!((car((V130)))==(VV[49]))){
	goto T460;}
	V131= caddr((V130));
	V132= cadddr((V130));
	V133= structure_ref(cadr((V130)),VV[25],2);
	base[1]= (*(LnkLI158))(/* INLINE-ARGS */V131,/* INLINE-ARGS */V132,Cnil,/* INLINE-ARGS */V133);
	vs_top=(vs_base=base+1)+1;
	return;
T460:;
	if((car((V130)))==(VV[51])){
	goto T462;}
	if(!((car((V130)))==(VV[52]))){
	goto T463;}
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
T472:;
	V135= get(car((V130)),VV[55],Cnil);
	if(((V135))==Cnil){
	goto T477;}
	base[1]= (V130);
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V135));
	return;
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
TTL:;
	{object V143;
	object V144;
	V143= Cnil;
	V144= make_cons((V140),(V141));
	bds_bind(VV[56],small_fixnum(0));
	base[2]= make_fixnum(length((V144)));
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
}
/*	local entry for function C2EXPR*	*/

static object LI17(V149)

object V149;
{	 VMB17 VMS17 VMV17
	bds_check;
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
	princ_str("\nT",VV[62]);
	(void)((*(LnkLI165))(car((VV[59]->s.s_dbind))));
	princ_str(":;",VV[62]);
	{object V150 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR17(V150)}
T497:;
	{object V151 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR17(V151)}
}
/*	local entry for function C2EXPR-TOP	*/

static object LI18(V154,V155)

object V154;object V155;
{	 VMB18 VMS18 VMV18
	bds_check;
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
	if((symbol_value(VV[69]))==Cnil){
	goto T521;}
	princ_str("\n	vs_reserve(VM",VV[62]);
	(void)((*(LnkLI165))((VV[67]->s.s_dbind)));
	princ_str(");",VV[62]);
	goto T519;
T521:;
	princ_str("\n	vs_check;",VV[62]);
T519:;
	princ_str("\n	",VV[62]);
	(void)((*(LnkLI166))());
	base[4]= (V154);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk164)();
	vs_top=sup;
	V157= make_cons((VV[67]->s.s_dbind),(VV[64]->s.s_dbind));
	setq(VV[70],make_cons(/* INLINE-ARGS */V157,symbol_value(VV[70])));
	princ_str("\n	}}",VV[62]);
	{object V158 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR18(V158)}
}
/*	local entry for function C2EXPR-TOP*	*/

static object LI19(V161,V162)

object V161;object V162;
{	 VMB19 VMS19 VMV19
	bds_check;
TTL:;
	setq(VV[60],number_plus(symbol_value(VV[60]),small_fixnum(1)));
	bds_bind(VV[59],make_cons(symbol_value(VV[60]),Cnil));
	bds_bind(VV[61],make_cons((VV[59]->s.s_dbind),symbol_value(VV[61])));
	(void)((*(LnkLI167))((V161),(V162)));
	if((cdr((VV[59]->s.s_dbind)))==Cnil){
	goto T539;}
	princ_str("\nT",VV[62]);
	(void)((*(LnkLI165))(car((VV[59]->s.s_dbind))));
	princ_str(":;",VV[62]);
	{object V163 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR19(V163)}
T539:;
	{object V164 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR19(V164)}
}
/*	local entry for function C1PROGN	*/

static object LI20(V166)

register object V166;
{	 VMB20 VMS20 VMV20
TTL:;
	{register object V167;
	V167= Cnil;
	if(!(endp((V166)))){
	goto T546;}
	{object V168 = (*(LnkLI125))();
	VMR20(V168)}
T546:;
	if(!(endp(cdr((V166))))){
	goto T549;}
	{object V169 = (*(LnkLI123))(car((V166)));
	VMR20(V169)}
T549:;
	{register object V170;
	V170= (VFUN_NARGS=0,(*(LnkLI127))());
	{register object V171;
	register object V172;
	V171= (V166);
	V172= car((V171));
T556:;
	if(!(endp((V171)))){
	goto T557;}
	goto T552;
T557:;
	V172= (*(LnkLI123))((V172));
	V167= make_cons((V172),(V167));
	(void)((*(LnkLI124))((V170),cadr((V172))));
	V171= cdr((V171));
	V172= car((V171));
	goto T556;}
T552:;
	V173= structure_ref(cadar((V167)),VV[25],2);
	(void)(structure_set((V170),VV[25],2,/* INLINE-ARGS */V173));
	{object V174 = list(3,VV[71],(V170),reverse((V167)));
	VMR20(V174)}}}
}
/*	local entry for function C1PROGN*	*/

static object LI21(V177,V178)

register object V177;object V178;
{	 VMB21 VMS21 VMV21
TTL:;
	V177= (*(LnkLI168))((V177));
	(void)((*(LnkLI124))((V178),cadr((V177))));
	{object V179 = (V177);
	VMR21(V179)}
}
/*	function definition for C2PROGN	*/

static L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	bds_check;
	{object V180;
	check_arg(1);
	V180=(base[0]);
	vs_top=sup;
TTL:;
	{register object V181;
	V181= (V180);
T576:;
	if(!(endp(cdr((V181))))){
	goto T577;}
	base[1]= car((V181));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk164)();
	return;
T577:;
	bds_bind(VV[72],VV[73]);
	setq(VV[60],number_plus(symbol_value(VV[60]),small_fixnum(1)));
	bds_bind(VV[59],make_cons(symbol_value(VV[60]),Cnil));
	bds_bind(VV[61],make_cons((VV[59]->s.s_dbind),symbol_value(VV[61])));
	base[4]= car((V181));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk164)();
	vs_top=sup;
	if((cdr((VV[59]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T582;}
	princ_str("\nT",VV[62]);
	(void)((*(LnkLI165))(car((VV[59]->s.s_dbind))));
	princ_str(":;",VV[62]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
T582:;
	V181= cdr((V181));
	goto T576;}
	}
}
/*	local entry for function C1ARGS	*/

static object LI23(V184,V185)

object V184;object V185;
{	 VMB23 VMS23 VMV23
TTL:;
	{object V186;
	object V187= (V184);
	if(endp(V187)){
	{object V188 = Cnil;
	VMR23(V188)}}
	base[0]=V186=MMcons(Cnil,Cnil);
T596:;
	(V186->c.c_car)= (*(LnkLI169))((V187->c.c_car),(V185));
	if(endp(V187=MMcdr(V187))){
	{object V190 = base[0];
	VMR23(V190)}}
	V186=MMcdr(V186)=MMcons(Cnil,Cnil);
	goto T596;}
}
/*	local entry for function C1STRUCTURE-REF	*/

static object LI24(V192)

register object V192;
{	 VMB24 VMS24 VMV24
TTL:;
	if((symbol_value(VV[69]))!=Cnil){
	goto T599;}
	if(endp((V192))){
	goto T599;}
	if(endp(cdr((V192)))){
	goto T599;}
	if(!(type_of(cadr((V192)))==t_cons)){
	goto T599;}
	if(!((caadr((V192)))==(VV[35]))){
	goto T599;}
	if(endp(cdadr((V192)))){
	goto T599;}
	if(!(type_of(cadadr((V192)))==t_symbol)){
	goto T599;}
	if(!(endp(cddadr((V192))))){
	goto T599;}
	if(endp(cddr((V192)))){
	goto T599;}
	if(!(type_of(caddr((V192)))==t_fixnum)){
	goto T599;}
	if(!(endp(cdddr((V192))))){
	goto T599;}
	{object V193 = (*(LnkLI149))(car((V192)),cadadr((V192)),caddr((V192)));
	VMR24(V193)}
T599:;
	{object V194;
	V194= (VFUN_NARGS=0,(*(LnkLI127))());
	{object V195 = list(4,VV[49],(V194),VV[74],(*(LnkLI142))((V192),(V194)));
	VMR24(V195)}}
}
/*	local entry for function C1STRUCTURE-REF1	*/

static object LI25(V199,V200,V201)

object V199;object V200;object V201;
{	 VMB25 VMS25 VMV25
TTL:;
	{object V202;
	V202= (VFUN_NARGS=0,(*(LnkLI127))());
	if((symbol_value(VV[69]))==Cnil){
	goto T624;}
	V203= list(4,VV[74],(V199),list(2,VV[35],(V200)),(V201));
	{object V204 = (*(LnkLI123))(/* INLINE-ARGS */V203);
	VMR25(V204)}
T624:;
	{object V205;
	object V206;
	V205= get((V200),VV[76],Cnil);
	V207= structure_ref((V205),VV[76],2);
	V206= aref1(/* INLINE-ARGS */V207,fixint((V201)));
	V208= aref1(symbol_value(VV[75]),fixint((V206)));
	V209= (*(LnkLI170))(/* INLINE-ARGS */V208);
	(void)(structure_set((V202),VV[25],2,/* INLINE-ARGS */V209));
	V210= (*(LnkLI169))((V199),(V202));
	V211= (*(LnkLI171))((V200));
	{object V212 = list(6,VV[77],(V202),/* INLINE-ARGS */V210,/* INLINE-ARGS */V211,(V201),(V205));
	VMR25(V212)}}}
}
/*	local entry for function COERCE-LOC-STRUCTURE-REF	*/

static object LI26(V215,V216)

object V215;object V216;
{	 VMB26 VMS26 VMV26
TTL:;
	{object V217;
	V217= cdr((V215));
	{object V218;
	object V219;
	V218= cadddr((V217));
	V219= caddr((V217));
	if(((V218))==Cnil){
	goto T633;}
	{object V220;
	register object V221;
	V222= structure_ref((V218),VV[76],2);
	V220= aref1(/* INLINE-ARGS */V222,fixint((V219)));
	V221= aref1(symbol_value(VV[75]),fixint((V220)));
	V223= (*(LnkLI170))((V221));
	V224= (*(LnkLI172))(/* INLINE-ARGS */V223);
	if(!((/* INLINE-ARGS */V224)==(VV[78]))){
	goto T637;}
	if(!(eql((V220),small_fixnum(0)))){
	goto T640;}
	goto T637;
T640:;
	base[5]= VV[79];
	base[6]= (V221);
	vs_top=(vs_base=base+5)+2;
	Lerror();
	vs_top=sup;
T637:;
	V225= car((V215));
	V226= (*(LnkLI170))((V221));
	(void)(structure_set(/* INLINE-ARGS */V225,VV[25],2,/* INLINE-ARGS */V226));
	V227= (*(LnkLI170))((V221));
	V228= (*(LnkLI172))(/* INLINE-ARGS */V227);
	V229= make_cons(car((V217)),Cnil);
	V230= (VFUN_NARGS=2,(*(LnkLI174))(/* INLINE-ARGS */V229,VV[81]));
	V231= list(4,/* INLINE-ARGS */V228,small_fixnum(0),VV[80],list(4,car(/* INLINE-ARGS */V230),VV[82],(V219),(V218)));
	V232= (*(LnkLI170))((V216));
	{object V233 = (*(LnkLI173))(/* INLINE-ARGS */V231,/* INLINE-ARGS */V232);
	VMR26(V233)}}
T633:;
	{object V234 = (*(LnkLI175))();
	VMR26(V234)}}}
}
/*	local entry for function C2STRUCTURE-REF	*/

static object LI27(V239,V240,V241,V242)

object V239;object V240;object V241;object V242;
{	 VMB27 VMS27 VMV27
	bds_check;
TTL:;
	bds_bind(VV[63],symbol_value(VV[63]));
	bds_bind(VV[56],small_fixnum(0));
	{object V243;
	object V244;
	V245= make_cons((V239),Cnil);
	V246= (VFUN_NARGS=2,(*(LnkLI174))(/* INLINE-ARGS */V245,VV[83]));
	V243= car(/* INLINE-ARGS */V246);{object V247;
	V247= symbol_value(VV[75]);
	V248= structure_ref((V242),VV[76],2);
	V249= aref1(/* INLINE-ARGS */V248,fixint((V241)));
	V244= aref1(V247,fixint(/* INLINE-ARGS */V249));}
	V250= (*(LnkLI170))((V244));
	V251= (*(LnkLI172))(/* INLINE-ARGS */V250);
	V252= list(4,/* INLINE-ARGS */V251,small_fixnum(0),VV[80],list(4,(V243),(V240),(V241),(V242)));
	(void)((VFUN_NARGS=1,(*(LnkLI162))(/* INLINE-ARGS */V252)));}
	{object V253 = (*(LnkLI163))();
	bds_unwind1;
	bds_unwind1;
	VMR27(V253)}
}
/*	local entry for function MY-CALL	*/

static object LI28(V258,V259,V260,V261)

object V258;object V259;object V260;object V261;
{	 VMB28 VMS28 VMV28
TTL:;
	{object V262;
	object V263;
	V262= structure_ref((V261),VV[76],2);
	V263= structure_ref((V261),VV[76],8);
	if((symbol_value(VV[69]))==Cnil){
	goto T652;}
	{object V264 = (*(LnkLI175))();
	VMR28(V264)}
T652:;
	princ_str("STREF(",VV[62]);{object V265;
	V265= symbol_value(VV[75]);
	V266= aref1((V262),fixint((V260)));
	V267= aref1(V265,fixint(/* INLINE-ARGS */V266));
	V268= (*(LnkLI176))(/* INLINE-ARGS */V267);
	(void)((*(LnkLI165))(/* INLINE-ARGS */V268));}
	princ_char(44,VV[62]);
	(void)((*(LnkLI165))((V258)));
	princ_char(44,VV[62]);
	V269= aref1((V263),fixint((V260)));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V269));
	princ_char(41,VV[62]);
	{object V270 = Cnil;
	VMR28(V270)}}
}
/*	local entry for function C1STRUCTURE-SET	*/

static object LI29(V272)

register object V272;
{	 VMB29 VMS29 VMV29
TTL:;
	{register object V273;
	V273= (VFUN_NARGS=0,(*(LnkLI127))());
	if(endp((V272))){
	goto T663;}
	if((symbol_value(VV[69]))!=Cnil){
	goto T663;}
	if(endp(cdr((V272)))){
	goto T663;}
	if(!(type_of(cadr((V272)))==t_cons)){
	goto T663;}
	if(!((caadr((V272)))==(VV[35]))){
	goto T663;}
	if(endp(cdadr((V272)))){
	goto T663;}
	if(!(type_of(cadadr((V272)))==t_symbol)){
	goto T663;}
	if(!(endp(cddadr((V272))))){
	goto T663;}
	if(endp(cddr((V272)))){
	goto T663;}
	if(!(type_of(caddr((V272)))==t_fixnum)){
	goto T663;}
	if(endp(cdddr((V272)))){
	goto T663;}
	if(!(endp(cddddr((V272))))){
	goto T663;}
	{object V274;
	object V275;
	V274= (*(LnkLI123))(car((V272)));
	V275= (*(LnkLI123))(cadddr((V272)));
	(void)((*(LnkLI124))((V273),cadr((V274))));
	(void)((*(LnkLI124))((V273),cadr((V275))));
	V276= structure_ref(cadr((V275)),VV[25],2);
	(void)(structure_set((V273),VV[25],2,/* INLINE-ARGS */V276));
	V277= (*(LnkLI171))(cadadr((V272)));
	V278= caddr((V272));
	V279= get(cadadr((V272)),VV[76],Cnil);
	{object V280 = list(7,VV[84],(V273),(V274),/* INLINE-ARGS */V277,/* INLINE-ARGS */V278,(V275),V279);
	VMR29(V280)}}
T663:;
	{object V281 = list(4,VV[49],(V273),VV[85],(*(LnkLI142))((V272),(V273)));
	VMR29(V281)}}
}
/*	local entry for function C2STRUCTURE-SET	*/

static object LI30(V287,V288,V289,V290,V291)

object V287;object V288;object V289;object V290;object V291;
{	 VMB30 VMS30 VMV30
	bds_check;
TTL:;
	{object V292;
	V292= Cnil;
	bds_bind(VV[63],symbol_value(VV[63]));
	bds_bind(VV[56],small_fixnum(0));
	{object V293;
	object V294;
	object V295;
	object V296;
	object V297;
	object V298;
	V293= structure_ref((V291),VV[76],2);{object V299;
	V299= symbol_value(VV[75]);
	V300= aref1((V293),fixint((V289)));
	V294= aref1(V299,fixint(/* INLINE-ARGS */V300));}
	V295= structure_ref((V291),VV[76],8);
	V296= (*(LnkLI170))((V294));
	V297= Cnil;
	V298= Cnil;
	V301= (VFUN_NARGS=0,(*(LnkLI127))());
	V302= list(3,(V287),(V290),list(4,VV[49],/* INLINE-ARGS */V301,VV[86],Cnil));
	if(!(((V294))==(Ct))){
	goto T705;}
	V303= VV[87];
	goto T703;
T705:;
	V303= list(3,Ct,(V296),Ct);
T703:;
	V292= (VFUN_NARGS=2,(*(LnkLI174))(/* INLINE-ARGS */V302,V303));
	V297= car((V292));
	V298= cadr((V292));
	if((symbol_value(VV[69]))==Cnil){
	goto T711;}
	(void)((*(LnkLI175))());
T711:;
	princ_str("\n	STSET(",VV[62]);
	V304= (*(LnkLI176))((V294));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V304));
	princ_char(44,VV[62]);
	(void)((*(LnkLI165))((V297)));
	princ_char(44,VV[62]);
	V305= aref1((V295),fixint((V289)));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V305));
	princ_str(", ",VV[62]);
	(void)((*(LnkLI165))((V298)));
	princ_str(");",VV[62]);
	V306= (*(LnkLI172))((V296));
	V307= list(4,/* INLINE-ARGS */V306,small_fixnum(0),VV[88],make_cons((V298),Cnil));
	(void)((VFUN_NARGS=1,(*(LnkLI162))(/* INLINE-ARGS */V307)));
	{object V308 = (*(LnkLI163))();
	bds_unwind1;
	bds_unwind1;
	VMR30(V308)}}}
}
/*	local entry for function C1CONSTANT-VALUE	*/

static object LI31(V311,V312)

register object V311;object V312;
{	 VMB31 VMS31 VMV31
TTL:;
	if(!(((V311))==(Cnil))){
	goto T726;}
	{object V313 = (*(LnkLI125))();
	VMR31(V313)}
T726:;
	if(!(((V311))==(Ct))){
	goto T729;}
	{object V314 = (*(LnkLI126))();
	VMR31(V314)}
T729:;
	if(!(type_of((V311))==t_fixnum)){
	goto T732;}
	V315= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],VV[89]));
	V317= (*(LnkLI177))((V311));
	if(number_compare(/* INLINE-ARGS */V317,VV[91])>=0){
	goto T735;}
	V316= Cnil;
	goto T734;
T735:;
	V316= (*(LnkLI129))((V311));
T734:;
	{object V318 = list(3,VV[1],/* INLINE-ARGS */V315,list(3,VV[90],V316,(V311)));
	VMR31(V318)}
T732:;
	if(!(type_of((V311))==t_character)){
	goto T738;}
	V319= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],VV[44]));
	V320= (*(LnkLI129))((V311));
	base[0]= (V311);
	vs_top=(vs_base=base+0)+1;
	Lchar_code();
	vs_top=sup;
	V321= vs_base[0];
	{object V322 = list(3,VV[1],/* INLINE-ARGS */V319,list(3,VV[92],/* INLINE-ARGS */V320,V321));
	VMR31(V322)}
T738:;
	if(!(type_of((V311))==t_longfloat)){
	goto T743;}
	{object V323;
	object V324;
	V323= Cnil;
	V324= Cnil;
	{register object x= (V311),V326= symbol_value(VV[93]);
	while(!endp(V326))
	if(type_of(V326->c.c_car)==t_cons &&eql(x,V326->c.c_car->c.c_car)){
	V325= (V326->c.c_car);
	goto T749;
	}else V326=V326->c.c_cdr;
	V325= Cnil;}
T749:;
	V323= cadr(V325);
	if(((V323))!=Cnil){
	goto T745;}
	V324= (*(LnkLI177))((V311));
	base[0]= VV[94];
	base[1]= small_fixnum(2);
	vs_top=(vs_base=base+0)+2;
	Ldivide();
	vs_top=sup;
	V327= vs_base[0];
	if(!(number_compare((V324),V327)>0)){
	goto T751;}
	base[0]= (V311);
	base[1]= VV[94];
	vs_top=(vs_base=base+0)+2;
	Ldivide();
	vs_top=sup;
	V328= vs_base[0];
	V329= list(4,VV[5],VV[19],V328,VV[95]);
	if(((*(LnkLI123))(/* INLINE-ARGS */V329))!=Cnil){
	goto T750;}
T751:;
	V330 = make_longfloat((double)(4.9406564584124650e-324)*(double)(1.0000000e+20));
	if(!(number_compare((V324),V330)<0)){
	goto T745;}
	base[0]= (V311);
	base[1]= VV[96];
	vs_top=(vs_base=base+0)+2;
	Ldivide();
	vs_top=sup;
	V331= vs_base[0];
	V332= list(4,VV[5],VV[19],V331,VV[98]);
	if(((*(LnkLI123))(/* INLINE-ARGS */V332))==Cnil){
	goto T745;}
T750:;
	V323= symbol_value(VV[99]);
	V333= list(2,(V311),(V323));
	setq(VV[93],make_cons(/* INLINE-ARGS */V333,symbol_value(VV[93])));
T745:;
	V334= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],VV[100]));
	if((V323)!=Cnil){
	V335= (V323);
	goto T770;}
	V335= (*(LnkLI129))((V311));
T770:;
	{object V336 = list(3,VV[1],/* INLINE-ARGS */V334,list(3,VV[101],V335,(V311)));
	VMR31(V336)}}
T743:;
	if(!(type_of((V311))==t_shortfloat)){
	goto T772;}
	V337= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],VV[102]));
	V338= (*(LnkLI129))((V311));
	{object V339 = list(3,VV[1],/* INLINE-ARGS */V337,list(3,VV[103],/* INLINE-ARGS */V338,(V311)));
	VMR31(V339)}
T772:;
	if(((V312))==Cnil){
	goto T775;}
	V340= (*(LnkLI128))((V311));
	V341= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],/* INLINE-ARGS */V340));
	{object V342 = list(3,VV[1],/* INLINE-ARGS */V341,list(2,VV[3],(*(LnkLI129))((V311))));
	VMR31(V342)}
T775:;
	{object V343 = Cnil;
	VMR31(V343)}
}
/*	macro definition for DEFINE-COMPILER-MACRO	*/

static L32()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_reserve(VM32);
	check_arg(2);
	vs_top=sup;
	{object V344=base[0]->c.c_cdr;
	if(endp(V344))invalid_macro_call();
	base[2]= (V344->c.c_car);
	V344=V344->c.c_cdr;
	if(endp(V344))invalid_macro_call();
	base[3]= (V344->c.c_car);
	V344=V344->c.c_cdr;
	base[4]= V344;}
	V345= list(2,VV[35],base[2]);
	V346= list(2,VV[35],base[2]);
	V347= list(2,VV[35],base[3]);
	V348= list(4,VV[104],/* INLINE-ARGS */V345,list(2,VV[105],list(4,VV[106],/* INLINE-ARGS */V346,/* INLINE-ARGS */V347,list(2,VV[35],base[4]))),VV[107]);
	base[5]= list(3,VV[71],/* INLINE-ARGS */V348,list(2,VV[35],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function UNDEF-COMPILER-MACRO	*/

static object LI33(V350)

object V350;
{	 VMB33 VMS33 VMV33
TTL:;
	{object V351 = remprop((V350),VV[33]);
	VMR33(V351)}
}
/*	macro definition for DEFINE-INLINE-FUNCTION	*/

static L34()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_reserve(VM34);
	bds_check;
	check_arg(2);
	vs_top=sup;
	{object V352=base[0]->c.c_cdr;
	if(endp(V352))invalid_macro_call();
	base[2]= (V352->c.c_car);
	V352=V352->c.c_cdr;
	if(endp(V352))invalid_macro_call();
	base[3]= (V352->c.c_car);
	V352=V352->c.c_cdr;
	base[4]= V352;}
	{register object V353;
	V353= Cnil;
	bds_bind(VV[108],symbol_value(VV[108]));
	{register object V354;
	register object V355;
	V354= base[3];
	V355= car((V354));
T781:;
	if(!(endp((V354)))){
	goto T782;}
	goto T777;
T782:;
	if(!(type_of((V355))==t_symbol)){
	goto T788;}
	{register object x= (V355),V356= VV[109];
	while(!endp(V356))
	if(x==(V356->c.c_car)){
	goto T788;
	}else V356=V356->c.c_cdr;}{object V358;
	{register object V359;
	V359= car((VV[108]->s.s_dbind));
	(VV[108]->s.s_dbind)= cdr((VV[108]->s.s_dbind));
	V358= (V359);}
	if(V358==Cnil)goto T794;
	V357= V358;
	goto T793;
T794:;}
	base[7]= VV[110];
	base[9]= VV[111];
	vs_top=(vs_base=base+9)+1;
	Lfind_package();
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+7)+2;
	Lgentemp();
	vs_top=sup;
	V357= vs_base[0];
T793:;
	V353= make_cons(V357,(V353));
	goto T786;
T788:;
	base[7]= VV[112];
	base[8]= (V355);
	base[9]= base[2];
	vs_top=(vs_base=base+7)+3;
	Lerror();
	vs_top=sup;
T786:;
	V354= cdr((V354));
	V355= car((V354));
	goto T781;}
T777:;
	{object V360;
	{object V362;
	object V363= base[3];
	object V364= (V353);
	if(endp(V363)||endp(V364)){
	V361= Cnil;
	goto T811;}
	base[6]=V362=MMcons(Cnil,Cnil);
T812:;
	(V362->c.c_car)= list(3,VV[113],list(2,VV[35],(V363->c.c_car)),(V364->c.c_car));
	if(endp(V363=MMcdr(V363))||endp(V364=MMcdr(V364))){
	V361= base[6];
	goto T811;}
	V362=MMcdr(V362)=MMcons(Cnil,Cnil);
	goto T812;}
T811:;
	V360= make_cons(VV[113],V361);
	V367= listA(4,VV[114],base[2],base[3],base[4]);
	base[6]= list(3,VV[71],/* INLINE-ARGS */V367,list(4,VV[115],base[2],(V353),list(4,VV[116],VV[117],(V360),list(2,VV[35],base[4]))));
	vs_top=(vs_base=base+6)+1;
	bds_unwind1;
	return;}}
}
/*	local entry for function NAME-TO-SD	*/

static object LI35(V369)

object V369;
{	 VMB35 VMS35 VMV35
TTL:;
	{object V370;
	V370= Cnil;{object V371;
	if(type_of((V369))==t_symbol){
	goto T818;}
	V371= Cnil;
	goto T817;
T818:;
	V370= get((V369),VV[76],Cnil);
	V371= (V370);
T817:;
	if(V371==Cnil)goto T816;
	goto T815;
T816:;}
	base[0]= VV[118];
	base[1]= (V369);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
T815:;
	{object V372 = (V370);
	VMR35(V372)}}
}
/*	local entry for function NAME-SD1	*/

static object LI36(V374)

object V374;
{	 VMB36 VMS36 VMV36
TTL:;{object V375;
	V375= get((V374),VV[119],Cnil);
	if(V375==Cnil)goto T823;
	{object V376 = V375;
	VMR36(V376)}
T823:;}
	V377= list(3,VV[5],VV[119],list(2,VV[35],(V374)));
	{object V378 = sputprop((V374),VV[120],/* INLINE-ARGS */V377);
	VMR36(V378)}
}
/*	local entry for function CO1STRUCTURE-PREDICATE	*/

static object LI37(V381,V382)

object V381;object V382;
{	 VMB37 VMS37 VMV37
TTL:;
	{object V383;
	V383= Cnil;
	if(!(type_of((V381))==t_symbol)){
	goto T827;}
	V383= get((V381),VV[121],Cnil);
	if(((V383))==Cnil){
	goto T827;}
	V384= car((V382));
	V385= list(3,VV[122],/* INLINE-ARGS */V384,list(2,VV[35],(V383)));
	{object V386 = (*(LnkLI123))(/* INLINE-ARGS */V385);
	VMR37(V386)}
T827:;
	{object V387 = Cnil;
	VMR37(V387)}}
}
static object  LnkTLI177(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[177],&LnkLI177,1,ap);} /* ABS */
static object  LnkTLI176(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[176],&LnkLI176,1,ap);} /* AET-C-TYPE */
static object  LnkTLI175(){return call_proc0(VV[175],&LnkLI175);} /* WFS-ERROR */
static object  LnkTLI174(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[174],&LnkLI174,ap);} /* INLINE-ARGS */
static object  LnkTLI173(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[173],&LnkLI173,2,ap);} /* COERCE-LOC */
static object  LnkTLI172(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[172],&LnkLI172,1,ap);} /* INLINE-TYPE */
static object  LnkTLI171(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[171],&LnkLI171,1,ap);} /* ADD-SYMBOL */
static object  LnkTLI170(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[170],&LnkLI170,1,ap);} /* TYPE-FILTER */
static object  LnkTLI169(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[169],&LnkLI169,2,ap);} /* C1EXPR* */
static object  LnkTLI168(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[168],&LnkLI168,1,ap);} /* C1PROGN */
static object  LnkTLI167(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[167],&LnkLI167,2,ap);} /* C2EXPR-TOP */
static object  LnkTLI166(){return call_proc0(VV[166],&LnkLI166);} /* RESET-TOP */
static object  LnkTLI165(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[165],&LnkLI165,1,ap);} /* WT1 */
static LnkT164(){ call_or_link(VV[164],&Lnk164);} /* C2EXPR */
static object  LnkTLI163(){return call_proc0(VV[163],&LnkLI163);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI162(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[162],&LnkLI162,ap);} /* UNWIND-EXIT */
static object  LnkTLI161(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[161],&LnkLI161,2,ap);} /* GET-INLINE-LOC */
static object  LnkTLI160(){return call_proc0(VV[160],&LnkLI160);} /* BABOON */
static object  LnkTLI159(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[159],&LnkLI159,1,ap);} /* VOLATILE */
static object  LnkTLI158(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[158],&LnkLI158,4,ap);} /* C2CALL-GLOBAL */
static object  LnkTLI157(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[157],&LnkLI157,ap);} /* C1LAMBDA-EXPR */
static LnkT156(){ call_or_link(VV[156],&Lnk156);} /* RESULT-TYPE-FROM-ARGS */
static object  LnkTLI154(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[154],&LnkLI154,2,ap);} /* TYPE-AND */
static object  LnkTLI152(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[152],&LnkLI152,3,ap);} /* CHECK-FORM-TYPE */
static object  LnkTLI151(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[151],&LnkLI151,1,ap);} /* GET-ARG-TYPES */
static object  LnkTLI150(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[150],&LnkLI150,1,ap);} /* GET-RETURN-TYPE */
static object  LnkTLI149(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[149],&LnkLI149,3,ap);} /* C1STRUCTURE-REF1 */
static LnkT148(){ call_or_link(VV[148],&Lnk148);} /* CMP-EVAL */
static object  LnkTLI32(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[32],&LnkLI32,2,ap);} /* RECORD-CALL-INFO */
static object  LnkTLI147(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[147],&LnkLI147,1,ap);} /* INLINE-POSSIBLE */
static object  LnkTLI146(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[146],&LnkLI146,3,ap);} /* CMP-EXPAND-MACRO */
static object  LnkTLI145(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[145],&LnkLI145,3,ap);} /* AND-FORM-TYPE */
static object  LnkTLI144(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[144],&LnkLI144,1,ap);} /* GET-LOCAL-ARG-TYPES */
static object  LnkTLI143(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[143],&LnkLI143,1,ap);} /* GET-LOCAL-RETURN-TYPE */
static object  LnkTLI142(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[142],&LnkLI142,2,ap);} /* C1ARGS */
static object  LnkTLI141(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[141],&LnkLI141,1,ap);} /* C1LOCAL-FUN */
static object  LnkTLI140(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[140],&LnkLI140,2,ap);} /* TYPE>= */
static LnkT139(){ call_or_link(VV[139],&Lnk139);} /* FIX-OPT */
static object  LnkTLI138(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[138],&LnkLI138,ap);} /* CMPWARN */
static LnkT137(){ call_or_link(VV[137],&Lnk137);} /* FLAGS-POS */
static object  LnkTLI136(){return call_proc0(VV[136],&LnkLI136);} /* ADD-LOAD-TIME-SHARP-COMMA */
static object  LnkTLI135(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[135],&LnkLI135,ap);} /* CMPERR */
static object  LnkTLI134(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[134],&LnkLI134,2,ap);} /* C1LAMBDA-FUN */
static LnkT133(){ call_or_link(VV[133],&Lnk133);} /* C1SYMBOL-FUN */
static object  LnkTLI132(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[132],&LnkLI132,1,ap);} /* C1VAR */
static object  LnkTLI131(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[131],&LnkLI131,1,ap);} /* ADD-CONSTANT */
static object  LnkTLI130(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[130],&LnkLI130,2,ap);} /* C1CONSTANT-VALUE */
static object  LnkTLI129(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[129],&LnkLI129,1,ap);} /* ADD-OBJECT */
static object  LnkTLI128(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[128],&LnkLI128,1,ap);} /* OBJECT-TYPE */
static object  LnkTLI127(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[127],&LnkLI127,ap);} /* MAKE-INFO */
static object  LnkTLI126(){return call_proc0(VV[126],&LnkLI126);} /* C1T */
static object  LnkTLI125(){return call_proc0(VV[125],&LnkLI125);} /* C1NIL */
static object  LnkTLI124(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[124],&LnkLI124,2,ap);} /* ADD-INFO */
static object  LnkTLI123(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[123],&LnkLI123,1,ap);} /* C1EXPR */
