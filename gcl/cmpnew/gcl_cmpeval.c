
#include "cmpinclude.h"
#include "gcl_cmpeval.h"
void init_gcl_cmpeval(){do_init(VV);}
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
	V68= make_cons(V70,(V68));
	goto T218;
	goto T220;
T220:;
	{object V72;
	V72= (*(LnkLI145))(car((V67)),(V70),car((V61)));
	V68= make_cons((V72),(V68));}
	{object V73;
	V73= car((V67));
	V67= cdr((V67));}
	{object V74;
	V74= car((V61));
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
	V75= (*(LnkLI146))((V62),(V60),(V61));
	base[2]= (*(LnkLI123))(/* INLINE-ARGS */V75);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T193;
T193:;
	{object V76;
	V62= get((V60),VV[26],Cnil);
	if(((V62))!=Cnil){
	goto T240;}
	V76= Cnil;
	goto T239;
	goto T240;
T240:;
	if(((*(LnkLI147))((V60)))!=Cnil){
	goto T243;}
	V76= Cnil;
	goto T239;
	goto T243;
T243:;
	V76= (
	(type_of((V62)) == t_sfun ?(*(((V62))->sfn.sfn_self)):
	(fcall.fun=((V62)),fcall.argd=2,fcalln))((V60),(V61)));
	goto T239;
T239:;
	if(((V76))==Cnil){
	goto T246;}
	base[2]= (V76);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T246;
T246:;
	V62= get((V60),VV[27],Cnil);
	if(((V62))==Cnil){
	goto T249;}
	if(((*(LnkLI147))((V60)))==Cnil){
	goto T249;}
	base[2]= (V61);
	vs_top=(vs_base=base+2)+1;
	super_funcall_no_event((V62));
	return;
	goto T249;
T249:;
	V62= get((V60),VV[28],Cnil);
	if(((V62))==Cnil){
	goto T256;}
	if(((*(LnkLI147))((V60)))==Cnil){
	goto T256;}
	base[2]= car((V62));
	base[3]= (V61);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event(base[2]);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T256;}
	base[2]= cdr((V62));
	base[3]= (V61);
	vs_top=(vs_base=base+3)+1;
	super_funcall_no_event(base[2]);
	return;
	goto T256;
T256:;
	{object V77;
	base[2]= (V60);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_package();
	vs_top=sup;
	V78= vs_base[0];
	base[2]= VV[29];
	vs_top=(vs_base=base+2)+1;
	Lsymbol_package();
	vs_top=sup;
	V79= vs_base[0];
	if((V78)==(V79)){
	goto T269;}
	goto T268;
	goto T269;
T269:;
	base[2]= (V60);
	vs_top=(vs_base=base+2)+1;
	Lfboundp();
	vs_top=sup;
	V80= vs_base[0];
	if((V80)==Cnil){
	goto T275;}
	goto T268;
	goto T275;
T275:;
	(void)((VFUN_NARGS=2,(*(LnkLI138))(VV[30],(V60))));
	goto T268;
T268:;
	if(symbol_value(VV[31])==Cnil){
	goto T279;}
	(void)((*(LnkLI32))(VV[32],(V60)));
	goto T279;
T279:;
	V77= Cnil;
	if(((V77))==Cnil){
	goto T281;}
	base[2]= (V77);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T281;
T281:;
	base[2]= (V60);
	vs_top=(vs_base=base+2)+1;
	Lmacro_function();
	vs_top=sup;
	V62= vs_base[0];
	if(((V62))==Cnil){
	goto T284;}
	V81= (*(LnkLI146))((V62),(V60),(V61));
	base[2]= (*(LnkLI123))(/* INLINE-ARGS */V81);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T284;
T284:;
	V62= get((V60),VV[33],Cnil);
	if(((V62))==Cnil){
	goto T289;}
	V83= list(2,VV[35],(V62));
	base[2]= list(4,VV[34],/* INLINE-ARGS */V83,list(2,VV[35],make_cons((V60),(V61))),Cnil);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk148)();
	vs_top=sup;
	V82= vs_base[0];
	base[2]= (*(LnkLI123))(V82);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T289;
T289:;
	V62= get((V60),VV[36],Cnil);
	if(((V62))==Cnil){
	goto T295;}
	if(((*(LnkLI147))((V60)))==Cnil){
	goto T295;}
	if(!(type_of((V62))==t_cons)){
	goto T295;}
	if(!(type_of(cdr((V62)))==t_fixnum)){
	goto T295;}
	if(endp_prop((V61))){
	goto T295;}
	if(!(endp_prop(cdr((V61))))){
	goto T295;}
	{object V84= car((V62));
	if((V84!= VV[46]))goto T308;
	V85= list(3,VV[37],car((V61)),cdr((V62)));
	base[2]= (*(LnkLI123))(/* INLINE-ARGS */V85);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T308;
T308:;
	if((V84!= VV[113]))goto T309;
	V86= list(3,VV[38],cdr((V62)),car((V61)));
	base[2]= (*(LnkLI123))(/* INLINE-ARGS */V86);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T309;
T309:;
	base[2]= (*(LnkLI149))(car((V61)),car((V62)),cdr((V62)));
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T295;
T295:;
	if(!(((V60))==(VV[5]))){
	goto T311;}
	base[2]= (VFUN_NARGS=1,(*(LnkLI135))(VV[39]));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T311;
T311:;
	{object V87;
	object V88;
	V89= get((V60),VV[40],Cnil);
	V87= (VFUN_NARGS=2,(*(LnkLI127))(VV[24],((V89)==Cnil?Ct:Cnil)));
	V88= (*(LnkLI142))((V61),(V87));
	{object V90;
	V90= (*(LnkLI150))((V60));
	if(((V90))==Cnil){
	goto T316;}
	if(!(equal((V90),VV[41]))){
	goto T321;}
	V90= Cnil;
	goto T316;
	goto T321;
T321:;
	(void)(structure_set((V87),VV[25],2,(V90)));}
	goto T316;
T316:;
	{register object V91;
	V91= (*(LnkLI151))((V60));
	if(((V91))==Cnil){
	goto T324;}
	{register object V92;
	register object V93;
	object V94;
	V92= (V88);
	V93= Cnil;
	V94= (V61);
	goto T329;
T329:;
	if(!(endp_prop((V92)))){
	goto T330;}
	V88= reverse((V93));
	goto T324;
	goto T330;
T330:;
	if(!(endp_prop((V91)))){
	goto T337;}
	{object V95;
	V95= car((V92));
	V93= make_cons((V95),(V93));
	goto T335;}
	goto T337;
T337:;
	{object V96;
	V96= (*(LnkLI145))(car((V91)),car((V92)),car((V94)));
	V93= make_cons((V96),(V93));}
	{object V97;
	V97= car((V91));
	V91= cdr((V91));}
	goto T335;
T335:;
	V92= cdr((V92));
	V94= cdr((V94));
	goto T329;}}
	goto T324;
T324:;
	{register object V98;
	V98= get((V60),VV[42],Cnil);
	if(((V98))==Cnil){
	goto T351;}
	{object V99;
	object V100;
	V99= (V88);
	V100= (V61);
	goto T356;
T356:;
	if(endp_prop((V98))){
	goto T358;}
	if(!(endp_prop((V99)))){
	goto T357;}
	goto T358;
T358:;
	goto T351;
	goto T357;
T357:;
	(void)((*(LnkLI152))(car((V98)),car((V99)),car((V100))));
	{object V101;
	V101= car((V98));
	V98= cdr((V98));}
	V99= cdr((V99));
	V100= cdr((V100));
	goto T356;}}
	goto T351;
T351:;
	{object V102= (V60);
	if((V102!= VV[153]))goto T373;
	{object V103;
	V103= structure_ref(cadar((V88)),VV[25],2);
	if(!(((V103))==(VV[43]))){
	goto T376;}
	V103= VV[44];
	if((VV[44])!=Cnil){
	goto T375;}
	goto T376;
T376:;
	if(!(type_of((V103))==t_cons)){
	goto T372;}
	if((car((V103)))==(VV[45])){
	goto T383;}
	if(!((car((V103)))==(VV[46]))){
	goto T372;}
	goto T383;
T383:;
	V103= cadr((V103));
	if(((V103))==Cnil){
	goto T372;}
	goto T375;
T375:;
	V104= structure_ref((V87),VV[25],2);
	V103= (*(LnkLI154))(/* INLINE-ARGS */V104,(V103));
	if(((V103))!=Cnil){
	goto T391;}
	V105= make_cons((V60),(V61));
	(void)((VFUN_NARGS=2,(*(LnkLI138))(VV[47],/* INLINE-ARGS */V105)));
	goto T391;
T391:;
	(void)(structure_set((V87),VV[25],2,(V103)));
	goto T372;}
	goto T373;
T373:;
	if((V102!= VV[155]))goto T394;
	{object V106;
	V106= structure_ref(cadar((V88)),VV[25],2);
	if(!(((V106))==(VV[43]))){
	goto T397;}
	V106= VV[44];
	if((VV[44])!=Cnil){
	goto T396;}
	goto T397;
T397:;
	if(!(type_of((V106))==t_cons)){
	goto T372;}
	if((car((V106)))==(VV[45])){
	goto T404;}
	if(!((car((V106)))==(VV[46]))){
	goto T372;}
	goto T404;
T404:;
	V106= cadr((V106));
	if(((V106))==Cnil){
	goto T372;}
	goto T396;
T396:;
	V107= structure_ref((V87),VV[25],2);
	base[4]= (V88);
	vs_top=(vs_base=base+4)+1;
	Llast();
	vs_top=sup;
	V108= vs_base[0];
	V109= structure_ref(cadar(V108),VV[25],2);
	V110= (*(LnkLI154))(/* INLINE-ARGS */V109,(V106));
	V106= (*(LnkLI154))(/* INLINE-ARGS */V107,/* INLINE-ARGS */V110);
	if(((V106))!=Cnil){
	goto T414;}
	V111= make_cons((V60),(V61));
	(void)((VFUN_NARGS=2,(*(LnkLI138))(VV[48],/* INLINE-ARGS */V111)));
	goto T414;
T414:;
	(void)(structure_set((V87),VV[25],2,(V106)));
	base[4]= (V88);
	vs_top=(vs_base=base+4)+1;
	Llast();
	vs_top=sup;
	V112= vs_base[0];
	(void)(structure_set(cadar(V112),VV[25],2,(V106)));
	goto T372;}
	goto T394;
T394:;}
	goto T372;
T372:;
	{object V113;
	base[4]= (V60);
	{object V114;
	object V115= (V88);
	if(endp(V115)){
	base[5]= Cnil;
	goto T423;}
	base[6]=V114=MMcons(Cnil,Cnil);
	goto T424;
T424:;
	(V114->c.c_car)= structure_ref(cadr((V115->c.c_car)),VV[25],2);
	V115=MMcdr(V115);
	if(endp(V115)){
	base[5]= base[6];
	goto T423;}
	V114=MMcdr(V114)=MMcons(Cnil,Cnil);
	goto T424;}
	goto T423;
T423:;
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk156)();
	vs_top=sup;
	V113= vs_base[0];
	if(((V113))==Cnil){
	goto T420;}
	V117= structure_ref((V87),VV[25],2);
	V113= (*(LnkLI154))((V113),/* INLINE-ARGS */V117);
	(void)(structure_set((V87),VV[25],2,(V113)));}
	goto T420;
T420:;
	base[4]= list(4,VV[49],(V87),(V60),(V88));
	vs_top=(vs_base=base+4)+1;
	return;}}}}}
	}
}
/*	local entry for function REPLACE-CONSTANT	*/

static object LI13(V119)

object V119;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	{register object V120;
	register object V121;
	V120= Cnil;
	V121= Cnil;
	{register object V122;
	V122= (V119);
	goto T433;
T433:;
	if(((V122))!=Cnil){
	goto T434;}
	{object V123 = (V120);
	VMR13(V123)}
	goto T434;
T434:;
	base[0]= car((V122));
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T438;}
	base[0]= car((V122));
	vs_top=(vs_base=base+0)+1;
	Leval();
	vs_top=sup;
	V121= vs_base[0];
	if(type_of((V121))==t_fixnum||
type_of((V121))==t_bignum||
type_of((V121))==t_ratio||
type_of((V121))==t_shortfloat||
type_of((V121))==t_longfloat||
type_of((V121))==t_complex){
	goto T439;}
	if(!(type_of((V121))==t_character)){
	goto T438;}
	goto T439;
T439:;
	V120= Ct;
	{register object V124;
	register object V125;
	V124= (V122);
	V125= (V121);
	if(type_of((V124))!=t_cons)FEwrong_type_argument(Scons,(V124));
	((V124))->c.c_car = (V125);}
	goto T438;
T438:;
	V122= cdr((V122));
	goto T433;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1LAMBDA-FUN	*/

static object LI14(V128,V129)

register object V128;object V129;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{object V130;
	V130= (VFUN_NARGS=2,(*(LnkLI127))(VV[24],Ct));
	V129= (*(LnkLI142))((V129),(V130));
	V128= (VFUN_NARGS=1,(*(LnkLI157))((V128)));
	(void)((*(LnkLI124))((V130),cadr((V128))));
	{object V131 = list(4,VV[50],(V130),(V128),(V129));
	VMR14(V131)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C2EXPR	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	bds_check;
	{register object V132;
	check_arg(1);
	V132=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((car((V132)))==(VV[49]))){
	goto T463;}
	V133= caddr((V132));
	V134= cadddr((V132));
	V135= structure_ref(cadr((V132)),VV[25],2);
	base[1]= (*(LnkLI158))(/* INLINE-ARGS */V133,/* INLINE-ARGS */V134,Cnil,/* INLINE-ARGS */V135);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T463;
T463:;
	if((car((V132)))==(VV[51])){
	goto T465;}
	if(!((car((V132)))==(VV[52]))){
	goto T466;}
	goto T465;
T465:;
	base[1]= (*(LnkLI159))(cadr((V132)));
	bds_bind(VV[53],base[1]);
	base[2]= get(car((V132)),VV[54],Cnil);
	{object V136;
	V136= cddr((V132));
	 vs_top=base+3;
	 while(!endp(V136))
	 {vs_push(car(V136));V136=cdr(V136);}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	bds_unwind1;
	return;
	goto T466;
T466:;
	{register object V137;
	V137= get(car((V132)),VV[54],Cnil);
	if(((V137))==Cnil){
	goto T475;}
	base[1]= (V137);
	{object V138;
	V138= cddr((V132));
	 vs_top=base+2;
	 while(!endp(V138))
	 {vs_push(car(V138));V138=cdr(V138);}
	vs_base=base+2;}
	super_funcall_no_event(base[1]);
	return;
	goto T475;
T475:;
	V137= get(car((V132)),VV[55],Cnil);
	if(((V137))==Cnil){
	goto T480;}
	base[1]= (V132);
	vs_top=(vs_base=base+1)+1;
	super_funcall_no_event((V137));
	return;
	goto T480;
T480:;
	base[1]= (*(LnkLI160))();
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local entry for function C2FUNCALL-SFUN	*/

static object LI16(V142,V143,V144)

object V142;object V143;object V144;
{	 VMB16 VMS16 VMV16
	bds_check;
	goto TTL;
TTL:;
	{object V145;
	object V146;
	V145= Cnil;
	V146= make_cons((V142),(V143));
	bds_bind(VV[56],small_fixnum(0));
	base[2]= make_fixnum((long)length((V146)));
	base[3]= VV[57];
	base[4]= Ct;
	vs_top=(vs_base=base+2)+3;
	Lmake_list();
	vs_top=sup;
	V147= vs_base[0];
	V148= list(4,V147,Ct,small_fixnum(3),VV[58]);
	V145= (*(LnkLI161))(/* INLINE-ARGS */V148,(V146));
	(void)((VFUN_NARGS=1,(*(LnkLI162))((V145))));
	{object V149 = (*(LnkLI163))();
	bds_unwind1;
	VMR16(V149)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2EXPR*	*/

static object LI17(V151)

object V151;
{	 VMB17 VMS17 VMV17
	bds_check;
	goto TTL;
TTL:;
	setq(VV[60],number_plus(symbol_value(VV[60]),small_fixnum(1)));
	bds_bind(VV[59],make_cons(symbol_value(VV[60]),Cnil));
	bds_bind(VV[61],make_cons((VV[59]->s.s_dbind),symbol_value(VV[61])));
	base[2]= (V151);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk164)();
	vs_top=sup;
	if((cdr((VV[59]->s.s_dbind)))==Cnil){
	goto T500;}
	princ_str("\n	goto T",VV[62]);
	(void)((*(LnkLI165))(car((VV[59]->s.s_dbind))));
	princ_char(59,VV[62]);
	princ_str("\nT",VV[62]);
	(void)((*(LnkLI165))(car((VV[59]->s.s_dbind))));
	princ_str(":;",VV[62]);
	{object V152 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR17(V152)}
	goto T500;
T500:;
	{object V153 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR17(V153)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2EXPR-TOP	*/

static object LI18(V156,V157)

object V156;object V157;
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
	V158= one_minus((VV[65]->s.s_dbind));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V158));
	princ_str("=base;",VV[62]);
	setq(VV[68],Ct);
	princ_str("\n	{register object *base=V",VV[62]);
	(void)((*(LnkLI165))((V157)));
	princ_char(59,VV[62]);
	princ_str("\n	register object *sup=vs_base+VM",VV[62]);
	(void)((*(LnkLI165))((VV[67]->s.s_dbind)));
	princ_char(59,VV[62]);
	princ_str("\n	base",VV[62]);
	V159= one_minus((VV[65]->s.s_dbind));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V159));
	princ_str("[0]=base",VV[62]);
	V160= one_minus((VV[65]->s.s_dbind));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V160));
	princ_str("[0];",VV[62]);
	princ_str("\n	base[0]=base[0];",VV[62]);
	if((symbol_value(VV[69]))==Cnil){
	goto T536;}
	princ_str("\n	vs_reserve(VM",VV[62]);
	(void)((*(LnkLI165))((VV[67]->s.s_dbind)));
	princ_str(");",VV[62]);
	goto T534;
	goto T536;
T536:;
	princ_str("\n	vs_check;",VV[62]);
	goto T534;
T534:;
	princ_str("\n	",VV[62]);
	(void)((*(LnkLI166))());
	base[4]= (V156);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk164)();
	vs_top=sup;
	{object V161;
	V161= make_cons((VV[67]->s.s_dbind),(VV[64]->s.s_dbind));
	setq(VV[70],make_cons((V161),symbol_value(VV[70])));}
	princ_str("\n	}}",VV[62]);
	{object V162 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR18(V162)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2EXPR-TOP*	*/

static object LI19(V165,V166)

object V165;object V166;
{	 VMB19 VMS19 VMV19
	bds_check;
	goto TTL;
TTL:;
	setq(VV[60],number_plus(symbol_value(VV[60]),small_fixnum(1)));
	bds_bind(VV[59],make_cons(symbol_value(VV[60]),Cnil));
	bds_bind(VV[61],make_cons((VV[59]->s.s_dbind),symbol_value(VV[61])));
	(void)((*(LnkLI167))((V165),(V166)));
	if((cdr((VV[59]->s.s_dbind)))==Cnil){
	goto T555;}
	princ_str("\n	goto T",VV[62]);
	(void)((*(LnkLI165))(car((VV[59]->s.s_dbind))));
	princ_char(59,VV[62]);
	princ_str("\nT",VV[62]);
	(void)((*(LnkLI165))(car((VV[59]->s.s_dbind))));
	princ_str(":;",VV[62]);
	{object V167 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR19(V167)}
	goto T555;
T555:;
	{object V168 = Cnil;
	bds_unwind1;
	bds_unwind1;
	VMR19(V168)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1PROGN	*/

static object LI20(V170)

register object V170;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{register object V171;
	V171= Cnil;
	if(!(endp_prop((V170)))){
	goto T566;}
	{object V172 = (*(LnkLI125))();
	VMR20(V172)}
	goto T566;
T566:;
	if(!(endp_prop(cdr((V170))))){
	goto T569;}
	{object V173 = (*(LnkLI123))(car((V170)));
	VMR20(V173)}
	goto T569;
T569:;
	{register object V174;
	V174= (VFUN_NARGS=0,(*(LnkLI127))());
	{register object V175;
	register object V176;
	V175= (V170);
	V176= car((V175));
	goto T576;
T576:;
	if(!(endp_prop((V175)))){
	goto T577;}
	goto T572;
	goto T577;
T577:;
	V176= (*(LnkLI123))((V176));
	{register object V177;
	V177= (V176);
	V171= make_cons((V177),(V171));}
	(void)((*(LnkLI124))((V174),cadr((V176))));
	V175= cdr((V175));
	V176= car((V175));
	goto T576;}
	goto T572;
T572:;
	V178= structure_ref(cadar((V171)),VV[25],2);
	(void)(structure_set((V174),VV[25],2,/* INLINE-ARGS */V178));
	{object V179 = list(3,VV[71],(V174),reverse((V171)));
	VMR20(V179)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1PROGN*	*/

static object LI21(V182,V183)

register object V182;object V183;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	V182= (*(LnkLI168))((V182));
	(void)((*(LnkLI124))((V183),cadr((V182))));
	{object V184 = (V182);
	VMR21(V184)}
	return Cnil;
}
/*	function definition for C2PROGN	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	bds_check;
	{object V185;
	check_arg(1);
	V185=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V186;
	V186= (V185);
	goto T597;
T597:;
	if(!(endp_prop(cdr((V186))))){
	goto T598;}
	base[1]= car((V186));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk164)();
	return;
	goto T598;
T598:;
	bds_bind(VV[72],VV[73]);
	setq(VV[60],number_plus(symbol_value(VV[60]),small_fixnum(1)));
	bds_bind(VV[59],make_cons(symbol_value(VV[60]),Cnil));
	bds_bind(VV[61],make_cons((VV[59]->s.s_dbind),symbol_value(VV[61])));
	base[4]= car((V186));
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk164)();
	vs_top=sup;
	if((cdr((VV[59]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T603;}
	princ_str("\n	goto T",VV[62]);
	(void)((*(LnkLI165))(car((VV[59]->s.s_dbind))));
	princ_char(59,VV[62]);
	princ_str("\nT",VV[62]);
	(void)((*(LnkLI165))(car((VV[59]->s.s_dbind))));
	princ_str(":;",VV[62]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T603;
T603:;
	V186= cdr((V186));
	goto T597;}
	}
}
/*	local entry for function C1ARGS	*/

static object LI23(V189,V190)

object V189;object V190;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	{object V191;
	object V192= (V189);
	if(endp(V192)){
	{object V193 = Cnil;
	VMR23(V193)}}
	base[0]=V191=MMcons(Cnil,Cnil);
	goto T621;
T621:;
	(V191->c.c_car)= (*(LnkLI169))((V192->c.c_car),(V190));
	V192=MMcdr(V192);
	if(endp(V192)){
	{object V195 = base[0];
	VMR23(V195)}}
	V191=MMcdr(V191)=MMcons(Cnil,Cnil);
	goto T621;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1STRUCTURE-REF	*/

static object LI24(V197)

register object V197;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	if((symbol_value(VV[69]))!=Cnil){
	goto T624;}
	if(endp_prop((V197))){
	goto T624;}
	if(endp_prop(cdr((V197)))){
	goto T624;}
	if(!(type_of(cadr((V197)))==t_cons)){
	goto T624;}
	if(!((caadr((V197)))==(VV[35]))){
	goto T624;}
	if(endp_prop(cdadr((V197)))){
	goto T624;}
	if(!(type_of(cadadr((V197)))==t_symbol)){
	goto T624;}
	if(!(endp_prop(cddadr((V197))))){
	goto T624;}
	if(endp_prop(cddr((V197)))){
	goto T624;}
	if(!(type_of(caddr((V197)))==t_fixnum)){
	goto T624;}
	if(!(endp_prop(cdddr((V197))))){
	goto T624;}
	{object V198 = (*(LnkLI149))(car((V197)),cadadr((V197)),caddr((V197)));
	VMR24(V198)}
	goto T624;
T624:;
	{object V199;
	V199= (VFUN_NARGS=0,(*(LnkLI127))());
	{object V200 = list(4,VV[49],(V199),VV[74],(*(LnkLI142))((V197),(V199)));
	VMR24(V200)}}
	return Cnil;
}
/*	local entry for function C1STRUCTURE-REF1	*/

static object LI25(V204,V205,V206)

object V204;object V205;object V206;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{object V207;
	V207= (VFUN_NARGS=0,(*(LnkLI127))());
	if((symbol_value(VV[69]))==Cnil){
	goto T649;}
	V208= list(4,VV[74],(V204),list(2,VV[35],(V205)),(V206));
	{object V209 = (*(LnkLI123))(/* INLINE-ARGS */V208);
	VMR25(V209)}
	goto T649;
T649:;
	{object V210;
	object V211;
	V210= get((V205),VV[76],Cnil);
	V212= structure_ref((V210),VV[76],2);
	V211= aref1(/* INLINE-ARGS */V212,fixint((V206)));
	V213= aref1(symbol_value(VV[75]),fixint((V211)));
	V214= (*(LnkLI170))(/* INLINE-ARGS */V213);
	(void)(structure_set((V207),VV[25],2,/* INLINE-ARGS */V214));
	V215= (*(LnkLI169))((V204),(V207));
	V216= (*(LnkLI171))((V205));
	{object V217 = list(6,VV[77],(V207),/* INLINE-ARGS */V215,/* INLINE-ARGS */V216,(V206),(V210));
	VMR25(V217)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function COERCE-LOC-STRUCTURE-REF	*/

static object LI26(V220,V221)

object V220;object V221;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{object V222;
	V222= cdr((V220));
	{object V223;
	object V224;
	V223= cadddr((V222));
	V224= caddr((V222));
	if(((V223))==Cnil){
	goto T658;}
	{object V225;
	register object V226;
	V227= structure_ref((V223),VV[76],2);
	V225= aref1(/* INLINE-ARGS */V227,fixint((V224)));
	V226= aref1(symbol_value(VV[75]),fixint((V225)));
	V228= (*(LnkLI170))((V226));
	V229= (*(LnkLI172))(/* INLINE-ARGS */V228);
	if(!((/* INLINE-ARGS */V229)==(VV[78]))){
	goto T662;}
	if(!(eql((V225),small_fixnum(0)))){
	goto T665;}
	goto T662;
	goto T665;
T665:;
	base[5]= VV[79];
	base[6]= (V226);
	vs_top=(vs_base=base+5)+2;
	Lerror();
	vs_top=sup;
	goto T662;
T662:;
	V230= car((V220));
	V231= (*(LnkLI170))((V226));
	(void)(structure_set(/* INLINE-ARGS */V230,VV[25],2,/* INLINE-ARGS */V231));
	V232= (*(LnkLI170))((V226));
	V233= (*(LnkLI172))(/* INLINE-ARGS */V232);
	V234= make_cons(car((V222)),Cnil);
	V235= (VFUN_NARGS=2,(*(LnkLI174))(/* INLINE-ARGS */V234,VV[81]));
	V236= list(4,/* INLINE-ARGS */V233,small_fixnum(0),VV[80],list(4,car(/* INLINE-ARGS */V235),VV[82],(V224),(V223)));
	V237= (*(LnkLI170))((V221));
	{object V238 = (*(LnkLI173))(/* INLINE-ARGS */V236,/* INLINE-ARGS */V237);
	VMR26(V238)}}
	goto T658;
T658:;
	{object V239 = (*(LnkLI175))();
	VMR26(V239)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2STRUCTURE-REF	*/

static object LI27(V244,V245,V246,V247)

object V244;object V245;object V246;object V247;
{	 VMB27 VMS27 VMV27
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[63],symbol_value(VV[63]));
	bds_bind(VV[56],small_fixnum(0));
	{object V248;
	object V249;
	V250= make_cons((V244),Cnil);
	V251= (VFUN_NARGS=2,(*(LnkLI174))(/* INLINE-ARGS */V250,VV[83]));
	V248= car(/* INLINE-ARGS */V251);{object V252;
	V252= symbol_value(VV[75]);
	V253= structure_ref((V247),VV[76],2);
	V254= aref1(/* INLINE-ARGS */V253,fixint((V246)));
	V249= aref1(V252,fixint(/* INLINE-ARGS */V254));}
	V255= (*(LnkLI170))((V249));
	V256= (*(LnkLI172))(/* INLINE-ARGS */V255);
	V257= list(4,/* INLINE-ARGS */V256,small_fixnum(0),VV[80],list(4,(V248),(V245),(V246),(V247)));
	(void)((VFUN_NARGS=1,(*(LnkLI162))(/* INLINE-ARGS */V257)));}
	{object V258 = (*(LnkLI163))();
	bds_unwind1;
	bds_unwind1;
	VMR27(V258)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MY-CALL	*/

static object LI28(V263,V264,V265,V266)

object V263;object V264;object V265;object V266;
{	 VMB28 VMS28 VMV28
	goto TTL;
TTL:;
	{object V267;
	object V268;
	V267= structure_ref((V266),VV[76],2);
	V268= structure_ref((V266),VV[76],8);
	if((symbol_value(VV[69]))==Cnil){
	goto T677;}
	{object V269 = (*(LnkLI175))();
	VMR28(V269)}
	goto T677;
T677:;
	princ_str("STREF(",VV[62]);{object V270;
	V270= symbol_value(VV[75]);
	V271= aref1((V267),fixint((V265)));
	V272= aref1(V270,fixint(/* INLINE-ARGS */V271));
	V273= (*(LnkLI176))(/* INLINE-ARGS */V272);
	(void)((*(LnkLI165))(/* INLINE-ARGS */V273));}
	princ_char(44,VV[62]);
	(void)((*(LnkLI165))((V263)));
	princ_char(44,VV[62]);
	V274= aref1((V268),fixint((V265)));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V274));
	princ_char(41,VV[62]);
	{object V275 = Cnil;
	VMR28(V275)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1STRUCTURE-SET	*/

static object LI29(V277)

register object V277;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	{register object V278;
	V278= (VFUN_NARGS=0,(*(LnkLI127))());
	if(endp_prop((V277))){
	goto T688;}
	if((symbol_value(VV[69]))!=Cnil){
	goto T688;}
	if(endp_prop(cdr((V277)))){
	goto T688;}
	if(!(type_of(cadr((V277)))==t_cons)){
	goto T688;}
	if(!((caadr((V277)))==(VV[35]))){
	goto T688;}
	if(endp_prop(cdadr((V277)))){
	goto T688;}
	if(!(type_of(cadadr((V277)))==t_symbol)){
	goto T688;}
	if(!(endp_prop(cddadr((V277))))){
	goto T688;}
	if(endp_prop(cddr((V277)))){
	goto T688;}
	if(!(type_of(caddr((V277)))==t_fixnum)){
	goto T688;}
	if(endp_prop(cdddr((V277)))){
	goto T688;}
	if(!(endp_prop(cddddr((V277))))){
	goto T688;}
	{object V279;
	object V280;
	V279= (*(LnkLI123))(car((V277)));
	V280= (*(LnkLI123))(cadddr((V277)));
	(void)((*(LnkLI124))((V278),cadr((V279))));
	(void)((*(LnkLI124))((V278),cadr((V280))));
	V281= structure_ref(cadr((V280)),VV[25],2);
	(void)(structure_set((V278),VV[25],2,/* INLINE-ARGS */V281));
	V282= (*(LnkLI171))(cadadr((V277)));
	V283= caddr((V277));
	V284= get(cadadr((V277)),VV[76],Cnil);
	{object V285 = list(7,VV[84],(V278),(V279),/* INLINE-ARGS */V282,/* INLINE-ARGS */V283,(V280),V284);
	VMR29(V285)}}
	goto T688;
T688:;
	{object V286 = list(4,VV[49],(V278),VV[85],(*(LnkLI142))((V277),(V278)));
	VMR29(V286)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2STRUCTURE-SET	*/

static object LI30(V292,V293,V294,V295,V296)

object V292;object V293;object V294;object V295;object V296;
{	 VMB30 VMS30 VMV30
	bds_check;
	goto TTL;
TTL:;
	{object V297;
	V297= Cnil;
	bds_bind(VV[63],symbol_value(VV[63]));
	bds_bind(VV[56],small_fixnum(0));
	{object V298;
	object V299;
	object V300;
	object V301;
	object V302;
	object V303;
	V298= structure_ref((V296),VV[76],2);{object V304;
	V304= symbol_value(VV[75]);
	V305= aref1((V298),fixint((V294)));
	V299= aref1(V304,fixint(/* INLINE-ARGS */V305));}
	V300= structure_ref((V296),VV[76],8);
	V301= (*(LnkLI170))((V299));
	V302= Cnil;
	V303= Cnil;
	V306= (VFUN_NARGS=0,(*(LnkLI127))());
	V307= list(3,(V292),(V295),list(4,VV[49],/* INLINE-ARGS */V306,VV[86],Cnil));
	if(!(((V299))==(Ct))){
	goto T730;}
	V308= VV[87];
	goto T728;
	goto T730;
T730:;
	V308= list(3,Ct,(V301),Ct);
	goto T728;
T728:;
	V297= (VFUN_NARGS=2,(*(LnkLI174))(/* INLINE-ARGS */V307,V308));
	V302= car((V297));
	V303= cadr((V297));
	if((symbol_value(VV[69]))==Cnil){
	goto T736;}
	(void)((*(LnkLI175))());
	goto T736;
T736:;
	princ_str("\n	STSET(",VV[62]);
	V309= (*(LnkLI176))((V299));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V309));
	princ_char(44,VV[62]);
	(void)((*(LnkLI165))((V302)));
	princ_char(44,VV[62]);
	V310= aref1((V300),fixint((V294)));
	(void)((*(LnkLI165))(/* INLINE-ARGS */V310));
	princ_str(", ",VV[62]);
	(void)((*(LnkLI165))((V303)));
	princ_str(");",VV[62]);
	V311= (*(LnkLI172))((V301));
	V312= list(4,/* INLINE-ARGS */V311,small_fixnum(0),VV[88],make_cons((V303),Cnil));
	(void)((VFUN_NARGS=1,(*(LnkLI162))(/* INLINE-ARGS */V312)));
	{object V313 = (*(LnkLI163))();
	bds_unwind1;
	bds_unwind1;
	VMR30(V313)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1CONSTANT-VALUE	*/

static object LI31(V316,V317)

register object V316;object V317;
{	 VMB31 VMS31 VMV31
	goto TTL;
TTL:;
	if(!(((V316))==(Cnil))){
	goto T751;}
	{object V318 = (*(LnkLI125))();
	VMR31(V318)}
	goto T751;
T751:;
	if(!(((V316))==(Ct))){
	goto T754;}
	{object V319 = (*(LnkLI126))();
	VMR31(V319)}
	goto T754;
T754:;
	if(!(type_of((V316))==t_fixnum)){
	goto T757;}
	V320= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],VV[89]));
	V322= (*(LnkLI177))((V316));
	if(number_compare(/* INLINE-ARGS */V322,VV[91])>=0){
	goto T760;}
	V321= Cnil;
	goto T759;
	goto T760;
T760:;
	V321= (*(LnkLI129))((V316));
	goto T759;
T759:;
	{object V323 = list(3,VV[1],/* INLINE-ARGS */V320,list(3,VV[90],V321,(V316)));
	VMR31(V323)}
	goto T757;
T757:;
	if(!(type_of((V316))==t_character)){
	goto T763;}
	V324= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],VV[44]));
	V325= (*(LnkLI129))((V316));
	base[0]= (V316);
	vs_top=(vs_base=base+0)+1;
	Lchar_code();
	vs_top=sup;
	V326= vs_base[0];
	{object V327 = list(3,VV[1],/* INLINE-ARGS */V324,list(3,VV[92],/* INLINE-ARGS */V325,V326));
	VMR31(V327)}
	goto T763;
T763:;
	if(!(type_of((V316))==t_longfloat)){
	goto T768;}
	{object V328;
	object V329;
	V328= Cnil;
	V329= Cnil;
	{register object x= (V316),V331= symbol_value(VV[93]);
	while(!endp(V331))
	if(type_of(V331->c.c_car)==t_cons &&eql(x,V331->c.c_car->c.c_car)){
	V330= (V331->c.c_car);
	goto T774;
	}else V331=V331->c.c_cdr;
	V330= Cnil;}
	goto T774;
T774:;
	V328= cadr(V330);
	if(((V328))!=Cnil){
	goto T770;}
	V329= (*(LnkLI177))((V316));
	base[0]= VV[94];
	base[1]= small_fixnum(2);
	vs_top=(vs_base=base+0)+2;
	Ldivide();
	vs_top=sup;
	V332= vs_base[0];
	if(!(number_compare((V329),V332)>0)){
	goto T776;}
	base[0]= (V316);
	base[1]= VV[94];
	vs_top=(vs_base=base+0)+2;
	Ldivide();
	vs_top=sup;
	V333= vs_base[0];
	V334= list(4,VV[5],VV[19],V333,VV[95]);
	if(((*(LnkLI123))(/* INLINE-ARGS */V334))!=Cnil){
	goto T775;}
	goto T776;
T776:;
	V335 = make_longfloat((double)(4.94065645841246540e-324)*(double)(1.0000000e+20));
	if(!(number_compare((V329),V335)<0)){
	goto T770;}
	base[0]= (V316);
	base[1]= VV[96];
	vs_top=(vs_base=base+0)+2;
	Ldivide();
	vs_top=sup;
	V336= vs_base[0];
	V337= list(4,VV[5],VV[19],V336,VV[98]);
	if(((*(LnkLI123))(/* INLINE-ARGS */V337))==Cnil){
	goto T770;}
	goto T775;
T775:;
	{object V338;
	V328= symbol_value(VV[99]);
	V338= list(2,(V316),(V328));
	setq(VV[93],make_cons((V338),symbol_value(VV[93])));}
	goto T770;
T770:;
	V339= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],VV[100]));
	if((V328)!=Cnil){
	V340= (V328);
	goto T796;}
	V340= (*(LnkLI129))((V316));
	goto T796;
T796:;
	{object V341 = list(3,VV[1],/* INLINE-ARGS */V339,list(3,VV[101],V340,(V316)));
	VMR31(V341)}}
	goto T768;
T768:;
	if(!(type_of((V316))==t_shortfloat)){
	goto T798;}
	V342= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],VV[102]));
	V343= (*(LnkLI129))((V316));
	{object V344 = list(3,VV[1],/* INLINE-ARGS */V342,list(3,VV[103],/* INLINE-ARGS */V343,(V316)));
	VMR31(V344)}
	goto T798;
T798:;
	if(((V317))==Cnil){
	goto T801;}
	V345= (*(LnkLI128))((V316));
	V346= (VFUN_NARGS=2,(*(LnkLI127))(VV[2],/* INLINE-ARGS */V345));
	{object V347 = list(3,VV[1],/* INLINE-ARGS */V346,list(2,VV[3],(*(LnkLI129))((V316))));
	VMR31(V347)}
	goto T801;
T801:;
	{object V348 = Cnil;
	VMR31(V348)}
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
	{object V349=base[0]->c.c_cdr;
	if(endp(V349))invalid_macro_call();
	base[2]= (V349->c.c_car);
	V349=V349->c.c_cdr;
	if(endp(V349))invalid_macro_call();
	base[3]= (V349->c.c_car);
	V349=V349->c.c_cdr;
	base[4]= V349;}
	V350= list(2,VV[35],base[2]);
	V351= list(2,VV[35],base[2]);
	V352= list(2,VV[35],base[3]);
	V353= list(4,VV[104],/* INLINE-ARGS */V350,list(2,VV[105],list(4,VV[106],/* INLINE-ARGS */V351,/* INLINE-ARGS */V352,list(2,VV[35],base[4]))),VV[107]);
	base[5]= list(3,VV[71],/* INLINE-ARGS */V353,list(2,VV[35],base[2]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function UNDEF-COMPILER-MACRO	*/

static object LI33(V355)

object V355;
{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{object V356 = remprop((V355),VV[33]);
	VMR33(V356)}
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
	{object V357=base[0]->c.c_cdr;
	if(endp(V357))invalid_macro_call();
	base[2]= (V357->c.c_car);
	V357=V357->c.c_cdr;
	if(endp(V357))invalid_macro_call();
	base[3]= (V357->c.c_car);
	V357=V357->c.c_cdr;
	base[4]= V357;}
	{register object V358;
	V358= Cnil;
	bds_bind(VV[108],symbol_value(VV[108]));
	{register object V359;
	register object V360;
	V359= base[3];
	V360= car((V359));
	goto T807;
T807:;
	if(!(endp_prop((V359)))){
	goto T808;}
	goto T803;
	goto T808;
T808:;
	if(!(type_of((V360))==t_symbol)){
	goto T814;}
	{register object x= (V360),V361= VV[109];
	while(!endp(V361))
	if(x==(V361->c.c_car)){
	goto T814;
	}else V361=V361->c.c_cdr;}
	{register object V362;{object V363;
	{register object V364;
	V364= car((VV[108]->s.s_dbind));
	(VV[108]->s.s_dbind)= cdr((VV[108]->s.s_dbind));
	V363= (V364);}
	if(V363==Cnil)goto T819;
	V362= V363;
	goto T818;
	goto T819;
T819:;}
	base[8]= VV[110];
	base[10]= VV[111];
	vs_top=(vs_base=base+10)+1;
	Lfind_package();
	vs_top=sup;
	base[9]= vs_base[0];
	vs_top=(vs_base=base+8)+2;
	Lgentemp();
	vs_top=sup;
	V362= vs_base[0];
	goto T818;
T818:;
	V358= make_cons((V362),(V358));
	goto T812;}
	goto T814;
T814:;
	base[7]= VV[112];
	base[8]= (V360);
	base[9]= base[2];
	vs_top=(vs_base=base+7)+3;
	Lerror();
	vs_top=sup;
	goto T812;
T812:;
	V359= cdr((V359));
	V360= car((V359));
	goto T807;}
	goto T803;
T803:;
	{object V365;
	{object V367;
	object V368= base[3];
	object V369= (V358);
	if(endp(V368)||endp(V369)){
	V366= Cnil;
	goto T837;}
	base[6]=V367=MMcons(Cnil,Cnil);
	goto T838;
T838:;
	(V367->c.c_car)= list(3,VV[113],list(2,VV[35],(V368->c.c_car)),(V369->c.c_car));
	V368=MMcdr(V368);
	V369=MMcdr(V369);
	if(endp(V368)||endp(V369)){
	V366= base[6];
	goto T837;}
	V367=MMcdr(V367)=MMcons(Cnil,Cnil);
	goto T838;}
	goto T837;
T837:;
	V365= make_cons(VV[113],V366);
	V372= listA(4,VV[114],base[2],base[3],base[4]);
	base[6]= list(3,VV[71],/* INLINE-ARGS */V372,list(4,VV[115],base[2],(V358),list(4,VV[116],VV[117],(V365),list(2,VV[35],base[4]))));
	vs_top=(vs_base=base+6)+1;
	bds_unwind1;
	return;}}
}
/*	local entry for function NAME-TO-SD	*/

static object LI35(V374)

object V374;
{	 VMB35 VMS35 VMV35
	goto TTL;
TTL:;
	{object V375;
	V375= Cnil;{object V376;
	if(type_of((V374))==t_symbol){
	goto T844;}
	V376= Cnil;
	goto T843;
	goto T844;
T844:;
	V375= get((V374),VV[76],Cnil);
	V376= (V375);
	goto T843;
T843:;
	if(V376==Cnil)goto T842;
	goto T841;
	goto T842;
T842:;}
	base[0]= VV[118];
	base[1]= (V374);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T841;
T841:;
	{object V377 = (V375);
	VMR35(V377)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function NAME-SD1	*/

static object LI36(V379)

object V379;
{	 VMB36 VMS36 VMV36
	goto TTL;
TTL:;{object V380;
	V380= get((V379),VV[119],Cnil);
	if(V380==Cnil)goto T849;
	{object V381 = V380;
	VMR36(V381)}
	goto T849;
T849:;}
	V382= list(3,VV[5],VV[119],list(2,VV[35],(V379)));
	{object V383 = sputprop((V379),VV[120],/* INLINE-ARGS */V382);
	VMR36(V383)}
	return Cnil;
}
/*	local entry for function CO1STRUCTURE-PREDICATE	*/

static object LI37(V386,V387)

object V386;object V387;
{	 VMB37 VMS37 VMV37
	goto TTL;
TTL:;
	{object V388;
	V388= Cnil;
	if(!(type_of((V386))==t_symbol)){
	goto T853;}
	V388= get((V386),VV[121],Cnil);
	if(((V388))==Cnil){
	goto T853;}
	V389= car((V387));
	V390= list(3,VV[122],/* INLINE-ARGS */V389,list(2,VV[35],(V388)));
	{object V391 = (*(LnkLI123))(/* INLINE-ARGS */V390);
	VMR37(V391)}
	goto T853;
T853:;
	{object V392 = Cnil;
	VMR37(V392)}}
	return Cnil;
}
static object  LnkTLI177(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[177],(void **)(void *)&LnkLI177,1,first,ap);va_end(ap);return V1;} /* ABS */
static object  LnkTLI176(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[176],(void **)(void *)&LnkLI176,1,first,ap);va_end(ap);return V1;} /* AET-C-TYPE */
static object  LnkTLI175(){return call_proc0(VV[175],(void **)(void *)&LnkLI175);} /* WFS-ERROR */
static object  LnkTLI174(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[174],(void **)(void *)&LnkLI174,first,ap);va_end(ap);return V1;} /* INLINE-ARGS */
static object  LnkTLI173(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[173],(void **)(void *)&LnkLI173,2,first,ap);va_end(ap);return V1;} /* COERCE-LOC */
static object  LnkTLI172(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[172],(void **)(void *)&LnkLI172,1,first,ap);va_end(ap);return V1;} /* INLINE-TYPE */
static object  LnkTLI171(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[171],(void **)(void *)&LnkLI171,1,first,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI170(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[170],(void **)(void *)&LnkLI170,1,first,ap);va_end(ap);return V1;} /* TYPE-FILTER */
static object  LnkTLI169(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[169],(void **)(void *)&LnkLI169,2,first,ap);va_end(ap);return V1;} /* C1EXPR* */
static object  LnkTLI168(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[168],(void **)(void *)&LnkLI168,1,first,ap);va_end(ap);return V1;} /* C1PROGN */
static object  LnkTLI167(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[167],(void **)(void *)&LnkLI167,2,first,ap);va_end(ap);return V1;} /* C2EXPR-TOP */
static object  LnkTLI166(){return call_proc0(VV[166],(void **)(void *)&LnkLI166);} /* RESET-TOP */
static object  LnkTLI165(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[165],(void **)(void *)&LnkLI165,1,first,ap);va_end(ap);return V1;} /* WT1 */
static void LnkT164(){ call_or_link(VV[164],(void **)(void *)&Lnk164);} /* C2EXPR */
static object  LnkTLI163(){return call_proc0(VV[163],(void **)(void *)&LnkLI163);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI162(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[162],(void **)(void *)&LnkLI162,first,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI161(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[161],(void **)(void *)&LnkLI161,2,first,ap);va_end(ap);return V1;} /* GET-INLINE-LOC */
static object  LnkTLI160(){return call_proc0(VV[160],(void **)(void *)&LnkLI160);} /* BABOON */
static object  LnkTLI159(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[159],(void **)(void *)&LnkLI159,1,first,ap);va_end(ap);return V1;} /* VOLATILE */
static object  LnkTLI158(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[158],(void **)(void *)&LnkLI158,4,first,ap);va_end(ap);return V1;} /* C2CALL-GLOBAL */
static object  LnkTLI157(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[157],(void **)(void *)&LnkLI157,first,ap);va_end(ap);return V1;} /* C1LAMBDA-EXPR */
static void LnkT156(){ call_or_link(VV[156],(void **)(void *)&Lnk156);} /* RESULT-TYPE-FROM-ARGS */
static object  LnkTLI154(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[154],(void **)(void *)&LnkLI154,2,first,ap);va_end(ap);return V1;} /* TYPE-AND */
static object  LnkTLI152(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[152],(void **)(void *)&LnkLI152,3,first,ap);va_end(ap);return V1;} /* CHECK-FORM-TYPE */
static object  LnkTLI151(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[151],(void **)(void *)&LnkLI151,1,first,ap);va_end(ap);return V1;} /* GET-ARG-TYPES */
static object  LnkTLI150(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[150],(void **)(void *)&LnkLI150,1,first,ap);va_end(ap);return V1;} /* GET-RETURN-TYPE */
static object  LnkTLI149(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[149],(void **)(void *)&LnkLI149,3,first,ap);va_end(ap);return V1;} /* C1STRUCTURE-REF1 */
static void LnkT148(){ call_or_link(VV[148],(void **)(void *)&Lnk148);} /* CMP-EVAL */
static object  LnkTLI32(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[32],(void **)(void *)&LnkLI32,2,first,ap);va_end(ap);return V1;} /* RECORD-CALL-INFO */
static object  LnkTLI147(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[147],(void **)(void *)&LnkLI147,1,first,ap);va_end(ap);return V1;} /* INLINE-POSSIBLE */
static object  LnkTLI146(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[146],(void **)(void *)&LnkLI146,3,first,ap);va_end(ap);return V1;} /* CMP-EXPAND-MACRO */
static object  LnkTLI145(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[145],(void **)(void *)&LnkLI145,3,first,ap);va_end(ap);return V1;} /* AND-FORM-TYPE */
static object  LnkTLI144(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[144],(void **)(void *)&LnkLI144,1,first,ap);va_end(ap);return V1;} /* GET-LOCAL-ARG-TYPES */
static object  LnkTLI143(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[143],(void **)(void *)&LnkLI143,1,first,ap);va_end(ap);return V1;} /* GET-LOCAL-RETURN-TYPE */
static object  LnkTLI142(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[142],(void **)(void *)&LnkLI142,2,first,ap);va_end(ap);return V1;} /* C1ARGS */
static object  LnkTLI141(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[141],(void **)(void *)&LnkLI141,1,first,ap);va_end(ap);return V1;} /* C1LOCAL-FUN */
static object  LnkTLI140(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[140],(void **)(void *)&LnkLI140,2,first,ap);va_end(ap);return V1;} /* TYPE>= */
static void LnkT139(){ call_or_link(VV[139],(void **)(void *)&Lnk139);} /* FIX-OPT */
static object  LnkTLI138(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[138],(void **)(void *)&LnkLI138,first,ap);va_end(ap);return V1;} /* CMPWARN */
static void LnkT137(){ call_or_link(VV[137],(void **)(void *)&Lnk137);} /* FLAGS-POS */
static object  LnkTLI136(){return call_proc0(VV[136],(void **)(void *)&LnkLI136);} /* ADD-LOAD-TIME-SHARP-COMMA */
static object  LnkTLI135(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[135],(void **)(void *)&LnkLI135,first,ap);va_end(ap);return V1;} /* CMPERR */
static object  LnkTLI134(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[134],(void **)(void *)&LnkLI134,2,first,ap);va_end(ap);return V1;} /* C1LAMBDA-FUN */
static void LnkT133(){ call_or_link(VV[133],(void **)(void *)&Lnk133);} /* C1SYMBOL-FUN */
static object  LnkTLI132(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[132],(void **)(void *)&LnkLI132,1,first,ap);va_end(ap);return V1;} /* C1VAR */
static object  LnkTLI131(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[131],(void **)(void *)&LnkLI131,1,first,ap);va_end(ap);return V1;} /* ADD-CONSTANT */
static object  LnkTLI130(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[130],(void **)(void *)&LnkLI130,2,first,ap);va_end(ap);return V1;} /* C1CONSTANT-VALUE */
static object  LnkTLI129(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[129],(void **)(void *)&LnkLI129,1,first,ap);va_end(ap);return V1;} /* ADD-OBJECT */
static object  LnkTLI128(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[128],(void **)(void *)&LnkLI128,1,first,ap);va_end(ap);return V1;} /* OBJECT-TYPE */
static object  LnkTLI127(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[127],(void **)(void *)&LnkLI127,first,ap);va_end(ap);return V1;} /* MAKE-INFO */
static object  LnkTLI126(){return call_proc0(VV[126],(void **)(void *)&LnkLI126);} /* C1T */
static object  LnkTLI125(){return call_proc0(VV[125],(void **)(void *)&LnkLI125);} /* C1NIL */
static object  LnkTLI124(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[124],(void **)(void *)&LnkLI124,2,first,ap);va_end(ap);return V1;} /* ADD-INFO */
static object  LnkTLI123(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[123],(void **)(void *)&LnkLI123,1,first,ap);va_end(ap);return V1;} /* C1EXPR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

