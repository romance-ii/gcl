
#include "cmpinclude.h"
#include "cmpenv.h"
init_cmpenv(){do_init(VV);}
/*	local entry for function INIT-ENV	*/

static object LI1()

{	 VMB1 VMS1 VMV1
TTL:;
	setq(VV[0],small_fixnum(0));
	setq(VV[1],small_fixnum(0));
	setq(VV[2],small_fixnum(-1));
	setq(VV[3],small_fixnum(0));
	setq(VV[4],small_fixnum(0));
	setq(VV[5],Cnil);
	setq(VV[6],Cnil);
	setq(VV[7],Cnil);
	setq(VV[8],Cnil);
	setq(VV[9],Cnil);
	setq(VV[10],Cnil);
	setq(VV[11],Cnil);
	setq(VV[12],Cnil);
	setq(VV[13],Cnil);
	setq(VV[14],Cnil);
	setq(VV[15],Cnil);
	setq(VV[16],Cnil);
	setq(VV[17],small_fixnum(0));
	setq(VV[18],Cnil);
	{object V1 = Cnil;
	VMR1(V1)}
}
/*	macro definition for NEXT-CFUN	*/

static L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	check_arg(2);
	vs_top=sup;
	{object V2=base[0]->c.c_cdr;
	if(!endp(V2))invalid_macro_call();}
	base[2]= VV[19];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function ADD-SYMBOL	*/

static object LI3(V4)

object V4;
{	 VMB3 VMS3 VMV3
TTL:;
	{object V5;
	{register object x= (V4),V6= symbol_value(VV[5]);
	while(!endp(V6))
	if(type_of(V6->c.c_car)==t_cons &&eql(x,V6->c.c_car->c.c_car)){
	V5= (V6->c.c_car);
	goto T38;
	}else V6=V6->c.c_cdr;
	V5= Cnil;}
T38:;
	if(((V5))==Cnil){
	goto T40;}
	{object V7 = cadr((V5));
	VMR3(V7)}
T40:;
	(void)((*(LnkLI113))((V4)));
	V8= list(2,(V4),symbol_value(VV[2]));
	setq(VV[5],make_cons(/* INLINE-ARGS */V8,symbol_value(VV[5])));
	{object V9 = symbol_value(VV[2]);
	VMR3(V9)}}
}
/*	function definition for WT-TO-STRING	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	bds_check;
	{object V10;
	check_arg(1);
	V10=(base[0]);
	vs_top=sup;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk114)();
	vs_top=sup;
	bds_bind(VV[20],vs_base[0]);
	bds_bind(VV[21],Cnil);
	(void)((*(LnkLI115))((V10)));
	base[3]= (VV[20]->s.s_dbind);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk116)();
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function ADD-OBJECT	*/

static object LI5(V12)

register object V12;
{	 VMB5 VMS5 VMV5
TTL:;
	{object V13;
	V13= Cnil;
	base[0]= (V12);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk117)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T50;}
	if(!(type_of((V12))==t_cons)){
	goto T55;}
	if(!((car((V12)))==(VV[22]))){
	goto T55;}
	base[0]= cdr((V12));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk117)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T55;}
	V12= cdr((V12));
	goto T53;
T55:;
	base[0]= (V12);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk118)();
	vs_top=sup;
	V14= vs_base[0];
	V12= list(2,VV[23],V14);
T53:;
	(void)((*(LnkLI113))(Cnil));
	V15= list(2,symbol_value(VV[2]),(V12));
	setq(VV[24],make_cons(/* INLINE-ARGS */V15,symbol_value(VV[24])));
	{object V16 = symbol_value(VV[2]);
	VMR5(V16)}
T50:;
	{register object x= (V12),V17= symbol_value(VV[5]);
	while(!endp(V17))
	if(type_of(V17->c.c_car)==t_cons &&eql(x,V17->c.c_car->c.c_car)){
	V13= (V17->c.c_car);
	goto T72;
	}else V17=V17->c.c_cdr;
	V13= Cnil;}
T72:;
	if(((V13))==Cnil){
	goto T70;}
	{object V18 = cadr((V13));
	VMR5(V18)}
T70:;
	base[0]= (V12);
	base[1]= VV[25];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk119)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T74;}
	(void)((*(LnkLI113))(Cnil));{object V19;
	V19= symbol_value(VV[2]);{object V21;
	base[0]= (V12);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk120)();
	vs_top=sup;
	V21= vs_base[0];
	if(V21==Cnil)goto T82;
	V20= V21;
	goto T81;
T82:;}
	V20= (VFUN_NARGS=1,(*(LnkLI121))(VV[27]));
T81:;
	V22= list(2,V19,list(2,VV[26],V20));
	setq(VV[24],make_cons(/* INLINE-ARGS */V22,symbol_value(VV[24])));}
	{object V23 = symbol_value(VV[2]);
	VMR5(V23)}
T74:;
	(void)((*(LnkLI113))((V12)));
	V24= list(2,(V12),symbol_value(VV[2]));
	setq(VV[5],make_cons(/* INLINE-ARGS */V24,symbol_value(VV[5])));
	{object V25 = symbol_value(VV[2]);
	VMR5(V25)}}
}
/*	local entry for function ADD-CONSTANT	*/

static object LI6(V27)

object V27;
{	 VMB6 VMS6 VMV6
TTL:;
	{object V28;
	V28= Cnil;
	{register object x= (V27),V29= symbol_value(VV[6]);
	while(!endp(V29))
	if(type_of(V29->c.c_car)==t_cons &&eql(x,V29->c.c_car->c.c_car)){
	V28= (V29->c.c_car);
	goto T92;
	}else V29=V29->c.c_cdr;
	V28= Cnil;}
T92:;
	if(((V28))==Cnil){
	goto T90;}
	{object V30 = cadr((V28));
	VMR6(V30)}
T90:;
	(void)((*(LnkLI113))(Cnil));
	V31= list(2,symbol_value(VV[2]),(V27));
	setq(VV[24],make_cons(/* INLINE-ARGS */V31,symbol_value(VV[24])));
	V32= list(2,(V27),symbol_value(VV[2]));
	setq(VV[6],make_cons(/* INLINE-ARGS */V32,symbol_value(VV[6])));
	{object V33 = symbol_value(VV[2]);
	VMR6(V33)}}
}
/*	macro definition for NEXT-CVAR	*/

static L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	check_arg(2);
	vs_top=sup;
	{object V34=base[0]->c.c_cdr;
	if(!endp(V34))invalid_macro_call();}
	base[2]= VV[28];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	macro definition for NEXT-CMACRO	*/

static L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(2);
	vs_top=sup;
	{object V35=base[0]->c.c_cdr;
	if(!endp(V35))invalid_macro_call();}
	base[2]= VV[29];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function FUNCTION-ARG-TYPES	*/

static object LI9(V37)

object V37;
{	 VMB9 VMS9 VMV9
TTL:;
	{object V38;
	register object V39;
	object V40;
	V38= Cnil;
	V39= Cnil;
	V40= Cnil;
	{register object V41;
	register int V42;
	V42= 0;
	V41= (V37);
T105:;
	if(!(endp((V41)))){
	goto T106;}
	V40= reverse((V39));
	goto T102;
T106:;
	{register object x= car((V41)),V43= VV[30];
	while(!endp(V43))
	if(eql(x,V43->c.c_car)){
	goto T111;
	}else V43=V43->c.c_cdr;}
	if(!(equal(car((V41)),VV[31]))){
	goto T110;}
T111:;
	V38= Ct;
	V44= make_cons(VV[31],(V39));
	V40= reverse(/* INLINE-ARGS */V44);
	goto T102;
T110:;
	if(!((V42)<(9))){
	goto T121;}
	{register object V46;
	V46= (*(LnkLI122))(car((V41)));
	if(!((VV[32])==((V46)))){
	goto T125;}
	V45= Ct;
	goto T119;
T125:;
	V45= (V46);
	goto T119;}
T121:;
	if(!((car((V41)))==(VV[31]))){
	goto T128;}
	V45= VV[31];
	goto T119;
T128:;
	V45= Ct;
T119:;
	V39= make_cons(V45,(V39));
	V41= cdr((V41));
	V42= (1)+(V42);
	goto T105;}
T102:;
	if(((V38))==Cnil){
	goto T134;}
	{register object V47;
	V47= (V40);
T138:;
	if(((V47))!=Cnil){
	goto T139;}
	goto T134;
T139:;
	{register object V49;
	if(!((car((V47)))==(VV[31]))){
	goto T146;}
	V49= VV[31];
	goto T144;
T146:;
	V49= Ct;
T144:;
	if(type_of(V47)!=t_cons)FEwrong_type_argument(Scons,V47);
	(V47)->c.c_car = (V49);}
	V47= cdr((V47));
	goto T138;}
T134:;
	{object V50 = (V40);
	VMR9(V50)}}
}
/*	local entry for function FUNCTION-RETURN-TYPE	*/

static object LI10(V52)

register object V52;
{	 VMB10 VMS10 VMV10
TTL:;
	if((car((V52)))==(VV[33])){
	goto T153;}
	goto T152;
T153:;
	V52= cdr((V52));
T152:;
	if(!(endp((V52)))){
	goto T157;}
	{object V53 = Cnil;
	VMR10(V53)}
T157:;
	if(!(type_of(car((V52)))==t_cons)){
	goto T160;}
	if(!((caar((V52)))==(VV[33]))){
	goto T160;}
	V52= cdr(car((V52)));
	goto TTL;
T160:;
	{register object V54;
	register object V55;
	V54= (V52);
	V55= Cnil;
T167:;
	if(!(endp((V54)))){
	goto T168;}
	if(!(((V54))==Cnil)){
	goto T172;}
	goto T171;
T172:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[34],(V52))));
T171:;
	{object V56 = nreverse((V55));
	VMR10(V56)}
T168:;
	{register object V57;
	if(!((car((V54)))==(VV[31]))){
	goto T178;}
	V57= VV[31];
	goto T176;
T178:;
	V57= (*(LnkLI122))(car((V54)));
T176:;
	if(!(((V57))==(VV[32]))){
	goto T180;}
	V57= Ct;
T180:;
	V55= make_cons((V57),(V55));}
	V54= cdr((V54));
	goto T167;}
}
/*	local entry for function ADD-FUNCTION-PROCLAMATION	*/

static object LI11(V61,V62,V63)

object V61;register object V62;register object V63;
{	 VMB11 VMS11 VMV11
TTL:;
	{register object V64;
	register object V65;
	register object V66;
	V64= Ct;
	V65= Cnil;
	V66= Cnil;
	if(!(type_of((V61))==t_symbol)){
	goto T192;}
	if(!(type_of((V62))==t_cons||((V62))==Cnil)){
	goto T192;}
	{object V67= cdr((V62));
	if(!(type_of(V67)==t_cons||(V67)==Cnil)){
	goto T192;}}
	if(((V62))==Cnil){
	goto T199;}
	if(!((car((V62)))==(VV[31]))){
	goto T200;}
T199:;
	V65= VV[35];
	goto T198;
T200:;
	V65= (*(LnkLI124))(car((V62)));
T198:;
	V66= (*(LnkLI125))(cdr((V62)));
	if(!(type_of((V66))==t_cons)){
	goto T210;}
	if(!(endp(cdr((V66))))){
	goto T210;}
	if((car((V66)))==(VV[31])){
	goto T210;}
	if(type_of((V65))==t_cons){
	goto T221;}
	V69= Cnil;
	goto T220;
T221:;
	V69= (V65);
T220:;
	{register object x= VV[31],V68= V69;
	while(!endp(V68))
	if(eql(x,V68->c.c_car)){
	goto T219;
	}else V68=V68->c.c_cdr;
	goto T218;}
T219:;
	V66= Ct;
	goto T216;
T218:;
	V66= car((V66));
T216:;
	goto T208;
T210:;
	V64= Cnil;
T208:;
	{object V70;
	if(type_of((V65))==t_cons||((V65))==Cnil){
	goto T226;}
	V70= Cnil;
	goto T225;
T226:;
	V70= ((length((V65)))<(64)?Ct:Cnil);
T225:;
	if(((V70))==Cnil){
	goto T229;}
	goto T224;
T229:;
	V64= Cnil;}
T224:;
	{register object V71;
	V71= (V61);
T233:;
	if(!(type_of((V71))==t_symbol)){
	goto T237;}
	goto T236;
T237:;
	V61= (V71);
	V63= Cnil;
	goto TTL;
T236:;
	if(!(((V65))==(VV[31]))){
	goto T245;}
	(void)(remprop((V71),VV[36]));
	goto T243;
T245:;
	(void)(putprop((V71),(V65),VV[36]));
T243:;
	(void)(putprop((V71),(V66),VV[37]));
	if(((V64))==Cnil){
	goto T250;}
	(void)(putprop((V71),Ct,VV[38]));
	goto T248;
T250:;
	(void)(remprop((V71),VV[38]));
T248:;
	V63= cdr((V63));
	if(!(type_of((V63))==t_cons)){
	goto T255;}
	goto T254;
T255:;
	{object V72 = VV[39];
	VMR11(V72)}
T254:;
	V71= car((V63));
	goto T233;}
T192:;
	{object V73 = (VFUN_NARGS=3,(*(LnkLI123))(VV[40],(V61),(V62)));
	VMR11(V73)}}
}
/*	local entry for function ADD-FUNCTION-DECLARATION	*/

static object LI12(V77,V78,V79)

object V77;object V78;object V79;
{	 VMB12 VMS12 VMV12
TTL:;
	if(!(type_of((V77))==t_symbol)){
	goto T261;}
	V80= (*(LnkLI126))((V77));
	V81= (*(LnkLI124))((V78));
	V82= list(3,/* INLINE-ARGS */V80,/* INLINE-ARGS */V81,(*(LnkLI125))((V79)));
	setq(VV[15],make_cons(/* INLINE-ARGS */V82,symbol_value(VV[15])));
	{object V83 = symbol_value(VV[15]);
	VMR12(V83)}
T261:;
	{object V84 = (VFUN_NARGS=2,(*(LnkLI123))(VV[41],(V77)));
	VMR12(V84)}
}
/*	local entry for function GET-ARG-TYPES	*/

static object LI13(V86)

object V86;
{	 VMB13 VMS13 VMV13
TTL:;
	{object V87;
	V87= Cnil;
	{register object x= (V86),V88= symbol_value(VV[15]);
	while(!endp(V88))
	if(type_of(V88->c.c_car)==t_cons &&eql(x,V88->c.c_car->c.c_car)){
	V87= (V88->c.c_car);
	goto T268;
	}else V88=V88->c.c_cdr;
	V87= Cnil;}
T268:;
	if(((V87))==Cnil){
	goto T266;}
	{object V89 = cadr((V87));
	VMR13(V89)}
T266:;
	{object V90 = get((V86),VV[36],Cnil);
	VMR13(V90)}}
}
/*	local entry for function GET-RETURN-TYPE	*/

static object LI14(V92)

register object V92;
{	 VMB14 VMS14 VMV14
TTL:;
	{object V93;
	object V94;
	register object V95;
	{register object x= (V92),V96= symbol_value(VV[15]);
	while(!endp(V96))
	if(type_of(V96->c.c_car)==t_cons &&eql(x,V96->c.c_car->c.c_car)){
	V93= (V96->c.c_car);
	goto T269;
	}else V96=V96->c.c_cdr;
	V93= Cnil;}
T269:;
	if(((V93))==Cnil){
	goto T272;}
	V94= caddr((V93));
	goto T270;
T272:;
	V94= get((V92),VV[37],Cnil);
T270:;
	if((get((V92),VV[42],Cnil))==Cnil){
	goto T276;}
	V95= VV[43];
	goto T274;
T276:;
	V95= get((V92),VV[44],Cnil);
T274:;
	if(((V94))==Cnil){
	goto T279;}
	if(((V95))==Cnil){
	goto T282;}
	V95= (*(LnkLI127))((V95),(V94));
	if(((V95))==Cnil){
	goto T285;}
	{object V97 = (V95);
	VMR14(V97)}
T285:;
	{object V98 = (VFUN_NARGS=2,(*(LnkLI128))(VV[45],(V92)));
	VMR14(V98)}
T282:;
	{object V99 = (V94);
	VMR14(V99)}
T279:;
	{object V100 = (V95);
	VMR14(V100)}}
}
/*	local entry for function GET-LOCAL-ARG-TYPES	*/

static object LI15(V102)

object V102;
{	 VMB15 VMS15 VMV15
TTL:;
	{object V103;
	V103= Cnil;
	{register object x= (V102),V104= symbol_value(VV[15]);
	while(!endp(V104))
	if(type_of(V104->c.c_car)==t_cons &&eql(x,V104->c.c_car->c.c_car)){
	V103= (V104->c.c_car);
	goto T292;
	}else V104=V104->c.c_cdr;
	V103= Cnil;}
T292:;
	if(((V103))==Cnil){
	goto T290;}
	{object V105 = cadr((V103));
	VMR15(V105)}
T290:;
	{object V106 = Cnil;
	VMR15(V106)}}
}
/*	local entry for function GET-LOCAL-RETURN-TYPE	*/

static object LI16(V108)

object V108;
{	 VMB16 VMS16 VMV16
TTL:;
	{object V109;
	V109= Cnil;
	{register object x= (V108),V110= symbol_value(VV[15]);
	while(!endp(V110))
	if(type_of(V110->c.c_car)==t_cons &&eql(x,V110->c.c_car->c.c_car)){
	V109= (V110->c.c_car);
	goto T297;
	}else V110=V110->c.c_cdr;
	V109= Cnil;}
T297:;
	if(((V109))==Cnil){
	goto T295;}
	{object V111 = caddr((V109));
	VMR16(V111)}
T295:;
	{object V112 = Cnil;
	VMR16(V112)}}
}
/*	local entry for function RESET-TOP	*/

static object LI17()

{	 VMB17 VMS17 VMV17
TTL:;
	princ_str("vs_top=sup;",VV[46]);
	setq(VV[47],Ct);
	{object V113 = Ct;
	VMR17(V113)}
}
/*	macro definition for BASE-USED	*/

static L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	check_arg(2);
	vs_top=sup;
	{object V114=base[0]->c.c_cdr;
	if(!endp(V114))invalid_macro_call();}
	base[2]= VV[48];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function INLINE-POSSIBLE	*/

static object LI19(V116)

object V116;
{	 VMB19 VMS19 VMV19
TTL:;
	if(symbol_value(VV[49])!=Cnil){
	V117= symbol_value(VV[49]);
	goto T301;}{object V118;
	{register object x= (V116),V119= symbol_value(VV[18]);
	while(!endp(V119))
	if(eql(x,V119->c.c_car)){
	V118= V119;
	goto T303;
	}else V119=V119->c.c_cdr;
	V118= Cnil;}
T303:;
	if(V118==Cnil)goto T302;
	V117= V118;
	goto T301;
T302:;}
	V117= get((V116),VV[50],Cnil);
T301:;
	{object V120 = ((V117)==Cnil?Ct:Cnil);
	VMR19(V120)}
}
/*	local entry for function PROCLAIM	*/

static object LI20(V122)

object V122;
{	 VMB20 VMS20 VMV20
TTL:;
	{object V123= car((V122));
	if((V123!= VV[129]))goto T305;
	{register object V124;
	object V125;
	V124= cdr((V122));
	V125= car((V124));
T309:;
	if(!(endp((V124)))){
	goto T310;}
	goto T304;
T310:;
	if(!(type_of((V125))==t_symbol)){
	goto T316;}
	base[2]= (V125);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk130)();
	vs_top=sup;
	goto T314;
T316:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[51],(V125))));
T314:;
	V124= cdr((V124));
	V125= car((V124));
	goto T309;}
T305:;
	if((V123!= VV[131]))goto T324;
	{register object V126;
	register object V127;
	V126= cdr((V122));
	V127= car((V126));
T328:;
	if(!(endp((V126)))){
	goto T329;}
	goto T304;
T329:;
	if(!(type_of((V127))==t_symbol)){
	goto T333;}
	V127= list(2,(V127),small_fixnum(3));
T333:;
	if(!(type_of((V127))==t_cons)){
	goto T338;}
	if(!(type_of(cdr((V127)))==t_cons)){
	goto T338;}
	{object V128= cadr((V127));
	if(!(type_of(V128)==t_fixnum||
type_of(V128)==t_bignum||
type_of(V128)==t_ratio||
type_of(V128)==t_shortfloat||
type_of(V128)==t_longfloat||
type_of(V128)==t_complex)){
	goto T338;}}
	base[2]= small_fixnum(0);
	base[3]= cadr((V127));
	base[4]= small_fixnum(3);
	vs_top=(vs_base=base+2)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T339;}
T338:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[52],(V127))));
	goto T337;
T339:;
	{object V129= car((V127));
	if((V129!= VV[85]))goto T350;
	setq(VV[53],(number_compare(cadr((V127)),small_fixnum(1))>=0?Ct:Cnil));
	setq(VV[54],(number_compare(cadr((V127)),small_fixnum(2))>=0?Ct:Cnil));
	setq(VV[49],(number_compare(cadr((V127)),small_fixnum(3))>=0?Ct:Cnil));
	goto T337;
T350:;
	if((V129!= VV[86]))goto T356;
	setq(VV[55],cadr((V127)));
	goto T337;
T356:;
	if((V129!= VV[132]))goto T358;
	setq(VV[56],cadr((V127)));
	goto T337;
T358:;
	if((V129!= VV[133]))goto T360;
	setq(VV[56],number_minus(small_fixnum(3),cadr((V127))));
	goto T337;
T360:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[57],car((V127)))));}
T337:;
	V126= cdr((V126));
	V127= car((V126));
	goto T328;}
T324:;
	if((V123!= VV[134]))goto T367;
	if(!(type_of(cdr((V122)))==t_cons)){
	goto T369;}
	(void)((*(LnkLI135))(cadr((V122)),cddr((V122))));
	goto T304;
T369:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[58],(V122))));
	goto T304;
T367:;
	if((V123!= VV[136])
	&& (V123!= VV[137])
	&& (V123!= VV[138])
	&& (V123!= VV[139]))goto T371;
	(void)((*(LnkLI135))(car((V122)),cdr((V122))));
	goto T304;
T371:;
	if((V123!= VV[140]))goto T372;
	if(!(type_of(cdr((V122)))==t_cons)){
	goto T374;}
	if(!(type_of(cadr((V122)))==t_cons)){
	goto T374;}
	if(!((caadr((V122)))==(VV[26]))){
	goto T374;}
	(void)((*(LnkLI141))(caddr((V122)),cdr(cadr((V122))),cddr((V122))));
	goto T304;
T374:;
	(void)((VFUN_NARGS=2,(*(LnkLI128))(VV[59],(V122))));
	goto T304;
T372:;
	if((V123!= VV[26]))goto T380;
	if(!(type_of(cdr((V122)))==t_cons)){
	goto T382;}
	(void)((*(LnkLI141))(cadr((V122)),cddr((V122)),Cnil));
	goto T304;
T382:;
	(void)((VFUN_NARGS=2,(*(LnkLI128))(VV[60],(V122))));
	goto T304;
T380:;
	if((V123!= VV[90]))goto T384;
	{register object V130;
	object V131;
	V130= cdr((V122));
	V131= car((V130));
T388:;
	if(!(endp((V130)))){
	goto T389;}
	goto T304;
T389:;
	if(!(type_of((V131))==t_symbol)){
	goto T395;}
	(void)(remprop((V131),VV[50]));
	goto T393;
T395:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[61],(V131))));
T393:;
	V130= cdr((V130));
	V131= car((V130));
	goto T388;}
T384:;
	if((V123!= VV[92]))goto T402;
	{register object V132;
	object V133;
	V132= cdr((V122));
	V133= car((V132));
T406:;
	if(!(endp((V132)))){
	goto T407;}
	goto T304;
T407:;
	if(!(type_of((V133))==t_symbol)){
	goto T413;}
	(void)(putprop((V133),Ct,VV[50]));
	goto T411;
T413:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[62],(V133))));
T411:;
	V132= cdr((V132));
	V133= car((V132));
	goto T406;}
T402:;
	if((V123!= VV[79])
	&& (V123!= VV[142]))goto T420;
	{register object V134;
	object V135;
	V134= cdr((V122));
	V135= car((V134));
T424:;
	if(!(endp((V134)))){
	goto T425;}
	goto T304;
T425:;
	if(type_of((V135))==t_symbol){
	goto T429;}
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[63],(V135))));
T429:;
	V134= cdr((V134));
	V135= car((V134));
	goto T424;}
T420:;
	if((V123!= VV[143]))goto T437;
	{register object V136;
	register object V137;
	V136= cdr((V122));
	V137= car((V136));
T441:;
	if(!(endp((V136)))){
	goto T442;}
	goto T304;
T442:;
	if(!(type_of((V137))==t_symbol)){
	goto T448;}
	{register object x= (V137),V138= symbol_value(VV[64]);
	while(!endp(V138))
	if(eql(x,V138->c.c_car)){
	goto T446;
	}else V138=V138->c.c_cdr;}
	setq(VV[64],make_cons((V137),symbol_value(VV[64])));
	goto T446;
T448:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[65],(V137))));
T446:;
	V136= cdr((V136));
	V137= car((V136));
	goto T441;}
T437:;
	if((V123== VV[144])
	|| (V123== VV[145])
	|| (V123== VV[146])
	|| (V123== VV[147])
	|| (V123== VV[148]))goto T459;
	if((V123== VV[137])
	|| (V123== VV[149])
	|| (V123== VV[25])
	|| (V123== VV[150])
	|| (V123== VV[151]))goto T459;
	if((V123== VV[152])
	|| (V123== VV[136])
	|| (V123== VV[153])
	|| (V123== VV[154])
	|| (V123== VV[32]))goto T459;
	if((V123== VV[155])
	|| (V123== VV[156])
	|| (V123== VV[139])
	|| (V123== Cnil)
	|| (V123== VV[157]))goto T459;
	if((V123== VV[158])
	|| (V123== VV[159])
	|| (V123== VV[160])
	|| (V123== VV[161])
	|| (V123== VV[162]))goto T459;
	if((V123== VV[163])
	|| (V123== VV[164])
	|| (V123== VV[165])
	|| (V123== VV[138])
	|| (V123== VV[166]))goto T459;
	if((V123== VV[167])
	|| (V123== VV[168])
	|| (V123== VV[169])
	|| (V123== VV[170])
	|| (V123== VV[171]))goto T459;
	if((V123== VV[172])
	|| (V123== VV[173])
	|| (V123== VV[174])
	|| (V123== VV[175])
	|| (V123== Ct))goto T459;
	if((V123!= VV[176])
	&& (V123!= VV[177])
	&& (V123!= VV[178]))goto T458;
T459:;
	(void)((*(LnkLI135))(car((V122)),cdr((V122))));
	goto T304;
T458:;
	{register object x= car((V122)),V139= symbol_value(VV[64]);
	while(!endp(V139))
	if(eql(x,V139->c.c_car)){
	goto T460;
	}else V139=V139->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[66],car((V122)))));
T460:;
	base[0]= get(car((V122)),VV[67],Cnil);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T463;}
	goto T304;
T463:;
	{register object V140;
	object V141;
	V140= cdr((V122));
	V141= car((V140));
T469:;
	if(!(endp((V140)))){
	goto T470;}
	goto T304;
T470:;
	V142= get(car((V122)),VV[67],Cnil);
	(void)((
	V143 = V142,
	(type_of(V143) == t_sfun ?(*(object (*)())((V143)->sfn.sfn_self)):
	(fcall.fun=(V143),fcall.argd=1,fcalln))((V141))));
	V140= cdr((V140));
	V141= car((V140));
	goto T469;}}
T304:;
	{object V144 = Cnil;
	VMR20(V144)}
}
/*	local entry for function PROCLAIM-VAR	*/

static object LI21(V147,V148)

register object V147;object V148;
{	 VMB21 VMS21 VMV21
TTL:;
	V147= (*(LnkLI122))((V147));
	{register object V149;
	register object V150;
	V149= (V148);
	V150= car((V149));
T486:;
	if(!(endp((V149)))){
	goto T487;}
	{object V151 = Cnil;
	VMR21(V151)}
T487:;
	if(!(type_of((V150))==t_symbol)){
	goto T493;}
	{register object V152;
	register object V153;
	V152= get((V150),VV[68],Cnil);
	V153= (*(LnkLI179))((V150));
	if(((V152))==Cnil){
	goto T500;}
	V152= (*(LnkLI127))((V152),(V147));
	goto T498;
T500:;
	V152= (V147);
T498:;
	if(((V153))==Cnil){
	goto T502;}
	V154= structure_ref((V153),VV[69],5);
	V152= (*(LnkLI127))((V152),/* INLINE-ARGS */V154);
T502:;
	if(((V152))!=Cnil){
	goto T506;}
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[70],(V150))));
T506:;
	(void)(putprop((V150),(V152),VV[68]));
	if(((V153))==Cnil){
	goto T491;}
	(void)(structure_set((V153),VV[69],5,(V152)));
	goto T491;}
T493:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[71],(V150))));
T491:;
	V149= cdr((V149));
	V150= car((V149));
	goto T486;}
}
/*	function definition for C1BODY	*/

static L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	{object V155;
	object V156;
	check_arg(2);
	V155=(base[0]);
	V156=(base[1]);
	vs_top=sup;
TTL:;
	{object V157;
	object V158;
	register object V159;
	object V160;
	object V161;
	object V162;
	V157= Cnil;
	V158= Cnil;
	V159= Cnil;
	V160= Cnil;
	V161= Cnil;
	V162= Cnil;
T525:;
	if(!(endp((V155)))){
	goto T527;}
	goto T523;
T527:;
	V162= (*(LnkLI180))(car((V155)));
	if(!(type_of((V162))==t_string)){
	goto T534;}
	if(((V156))==Cnil){
	goto T537;}
	if(endp(cdr((V155)))){
	goto T537;}
	if(((V161))==Cnil){
	goto T536;}
T537:;
	goto T523;
T536:;
	V161= (V162);
	goto T532;
T534:;
	if(!(type_of((V162))==t_cons)){
	goto T545;}
	if(!((car((V162)))==(VV[72]))){
	goto T545;}
	{object V163;
	register object V164;
	V163= cdr((V162));
	V164= car((V163));
T552:;
	if(!(endp((V163)))){
	goto T553;}
	goto T532;
T553:;
	if(!(type_of((V164))==t_cons)){
	goto T558;}
	if(type_of(car((V164)))==t_symbol){
	goto T557;}
T558:;
	(void)((VFUN_NARGS=2,(*(LnkLI121))(VV[73],(V164))));
T557:;
	{object V165= car((V164));
	if((V165!= VV[129]))goto T563;
	{register object V166;
	object V167;
	V166= cdr((V164));
	V167= car((V166));
T567:;
	if(!(endp((V166)))){
	goto T568;}
	goto T562;
T568:;
	if(type_of((V167))==t_symbol){
	goto T572;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[74],(V164),(V167))));
T572:;
	V157= make_cons((V167),(V157));
	V166= cdr((V166));
	V167= car((V166));
	goto T567;}
T563:;
	if((V165!= VV[142]))goto T582;
	{register object V168;
	object V169;
	V168= cdr((V164));
	V169= car((V168));
T586:;
	if(!(endp((V168)))){
	goto T587;}
	goto T562;
T587:;
	if(type_of((V169))==t_symbol){
	goto T591;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[75],(V164),(V169))));
T591:;
	V158= make_cons((V169),(V158));
	V168= cdr((V168));
	V169= car((V168));
	goto T586;}
T582:;
	if((V165!= VV[134]))goto T601;
	if(!(endp(cdr((V164))))){
	goto T602;}
	(void)((VFUN_NARGS=2,(*(LnkLI121))(VV[76],(V164))));
T602:;
	{object V170;
	V170= (*(LnkLI122))(cadr((V164)));
	if(((V170))==Cnil){
	goto T562;}
	{register object V171;
	object V172;
	V171= cddr((V164));
	V172= car((V171));
T611:;
	if(!(endp((V171)))){
	goto T612;}
	goto T562;
T612:;
	if(type_of((V172))==t_symbol){
	goto T616;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[77],(V164),(V172))));
T616:;
	V173= make_cons((V172),(V170));
	V159= make_cons(/* INLINE-ARGS */V173,(V159));
	V171= cdr((V171));
	V172= car((V171));
	goto T611;}}
T601:;
	if((V165!= VV[79]))goto T626;
	{register object V174;
	object V175;
	V174= cdr((V164));
	V175= car((V174));
T630:;
	if(!(endp((V174)))){
	goto T631;}
	goto T562;
T631:;
	if(type_of((V175))==t_symbol){
	goto T635;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[78],(V164),(V175))));
T635:;
	V176= make_cons((V175),VV[79]);
	V159= make_cons(/* INLINE-ARGS */V176,(V159));
	V174= cdr((V174));
	V175= car((V174));
	goto T630;}
T626:;
	if((V165!= VV[181]))goto T645;
	{register object V177;
	object V178;
	V177= cdr((V164));
	V178= car((V177));
T649:;
	if(!(endp((V177)))){
	goto T650;}
	goto T562;
T650:;
	if(type_of((V178))==t_symbol){
	goto T654;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[80],(V164),(V178))));
T654:;
	V179= make_cons((V178),VV[81]);
	V159= make_cons(/* INLINE-ARGS */V179,(V159));
	V177= cdr((V177));
	V178= car((V177));
	goto T649;}
T645:;
	if((V165== VV[136])
	|| (V165== VV[137])
	|| (V165== VV[152])
	|| (V165== VV[138])
	|| (V165== VV[144]))goto T665;
	if((V165== VV[145])
	|| (V165== VV[146])
	|| (V165== VV[147])
	|| (V165== VV[148])
	|| (V165== VV[149]))goto T665;
	if((V165== VV[25])
	|| (V165== VV[150])
	|| (V165== VV[151])
	|| (V165== VV[153])
	|| (V165== VV[154]))goto T665;
	if((V165== VV[32])
	|| (V165== VV[155])
	|| (V165== VV[156])
	|| (V165== VV[139])
	|| (V165== Cnil))goto T665;
	if((V165== VV[157])
	|| (V165== VV[158])
	|| (V165== VV[159])
	|| (V165== VV[160])
	|| (V165== VV[161]))goto T665;
	if((V165== VV[162])
	|| (V165== VV[163])
	|| (V165== VV[164])
	|| (V165== VV[165])
	|| (V165== VV[166]))goto T665;
	if((V165== VV[167])
	|| (V165== VV[168])
	|| (V165== VV[169])
	|| (V165== VV[170])
	|| (V165== VV[171]))goto T665;
	if((V165== VV[172])
	|| (V165== VV[173])
	|| (V165== VV[174])
	|| (V165== VV[175])
	|| (V165== Ct))goto T665;
	if((V165!= VV[176])
	&& (V165!= VV[177])
	&& (V165!= VV[178])
	&& (V165!= VV[82]))goto T664;
T665:;
	{object V180;
	if(!((car((V164)))==(VV[82]))){
	goto T668;}
	V180= car((V164));
	goto T666;
T668:;
	V180= (*(LnkLI122))(car((V164)));
T666:;
	if(((V180))==Cnil){
	goto T562;}
	{register object V181;
	object V182;
	V181= cdr((V164));
	V182= car((V181));
T675:;
	if(!(endp((V181)))){
	goto T676;}
	goto T562;
T676:;
	if(type_of((V182))==t_symbol){
	goto T680;}
	(void)((VFUN_NARGS=3,(*(LnkLI121))(VV[83],(V164),(V182))));
T680:;
	V183= make_cons((V182),(V180));
	V159= make_cons(/* INLINE-ARGS */V183,(V159));
	V181= cdr((V181));
	V182= car((V181));
	goto T675;}}
T664:;
	V160= make_cons((V164),(V160));}
T562:;
	V163= cdr((V163));
	V164= car((V163));
	goto T552;}
T545:;
	goto T523;
T532:;
	{object V184;
	V184= car((V155));
	V155= cdr((V155));}
	goto T525;
T523:;
	base[2]= (V155);
	base[3]= (V157);
	base[4]= (V159);
	base[5]= (V158);
	base[6]= (V160);
	base[7]= (V161);
	vs_top=(vs_base=base+2)+6;
	return;}
	}
}
/*	local entry for function C1DECL-BODY	*/

static object LI23(V187,V188)

object V187;object V188;
{	 VMB23 VMS23 VMV23
	bds_check;
TTL:;
	{register object V189;
	V189= Cnil;
	if(((V187))!=Cnil){
	goto T708;}
	{object V190 = (*(LnkLI182))((V188));
	VMR23(V190)}
T708:;
	bds_bind(VV[15],symbol_value(VV[15]));
	bds_bind(VV[64],symbol_value(VV[64]));
	bds_bind(VV[18],symbol_value(VV[18]));
	bds_bind(VV[55],symbol_value(VV[55]));
	bds_bind(VV[54],symbol_value(VV[54]));
	{object V191;
	register object V192;
	V191= (V187);
	V192= car((V191));
T714:;
	if(!(endp((V191)))){
	goto T715;}
	goto T710;
T715:;
	{object V193= car((V192));
	if((V193!= VV[131]))goto T720;
	{object V194;
	register object V195;
	V194= cdr((V192));
	V195= car((V194));
T724:;
	if(!(endp((V194)))){
	goto T725;}
	goto T719;
T725:;
	if(!(type_of((V195))==t_symbol)){
	goto T729;}
	V195= list(2,(V195),small_fixnum(3));
T729:;
	if(!(type_of((V195))==t_cons)){
	goto T734;}
	if(!(type_of(cdr((V195)))==t_cons)){
	goto T734;}
	{object V196= cadr((V195));
	if(!(type_of(V196)==t_fixnum||
type_of(V196)==t_bignum||
type_of(V196)==t_ratio||
type_of(V196)==t_shortfloat||
type_of(V196)==t_longfloat||
type_of(V196)==t_complex)){
	goto T734;}}
	base[8]= small_fixnum(0);
	base[9]= cadr((V195));
	base[10]= small_fixnum(3);
	vs_top=(vs_base=base+8)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T735;}
T734:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[84],(V195))));
	goto T733;
T735:;
	{object V197= car((V195));
	if((V197!= VV[85]))goto T746;
	(VV[54]->s.s_dbind)= ((fix(cadr((V195))))>=(2)?Ct:Cnil);
	V198= list(2,VV[85],cadr((V195)));
	V189= make_cons(/* INLINE-ARGS */V198,(V189));
	goto T733;
T746:;
	if((V197!= VV[86]))goto T750;
	(VV[55]->s.s_dbind)= cadr((V195));
	V199= list(2,VV[86],cadr((V195)));
	V189= make_cons(/* INLINE-ARGS */V199,(V189));
	goto T733;
T750:;
	if((V197!= VV[132])
	&& (V197!= VV[133]))goto T754;
	goto T733;
T754:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[87],car((V195)))));}
T733:;
	V194= cdr((V194));
	V195= car((V194));
	goto T724;}
T720:;
	if((V193!= VV[140]))goto T760;
	if(endp(cdr((V192)))){
	goto T761;}
	if(!(type_of(cadr((V192)))==t_cons)){
	goto T761;}
	if(!((caadr((V192)))==(VV[26]))){
	goto T761;}
	if(!(endp(cdadr((V192))))){
	goto T762;}
T761:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[88],(V192))));
	goto T719;
T762:;
	{object V200;
	object V201;
	V200= cddr((V192));
	V201= car((V200));
T773:;
	if(!(endp((V200)))){
	goto T774;}
	goto T719;
T774:;
	(void)((*(LnkLI183))((V201),cadadr((V192)),cddadr((V192))));
	V200= cdr((V200));
	V201= car((V200));
	goto T773;}
T760:;
	if((V193!= VV[26]))goto T784;
	if(endp(cdr((V192)))){
	goto T785;}
	if(endp(cddr((V192)))){
	goto T785;}
	if(type_of(cadr((V192)))==t_symbol){
	goto T786;}
T785:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[89],(V192))));
	goto T719;
T786:;
	(void)((*(LnkLI183))(cadr((V192)),caddr((V192)),cdddr((V192))));
	goto T719;
T784:;
	if((V193!= VV[90]))goto T792;
	{object V202;
	register object V203;
	V202= cdr((V192));
	V203= car((V202));
T796:;
	if(!(endp((V202)))){
	goto T797;}
	goto T719;
T797:;
	if(!(type_of((V203))==t_symbol)){
	goto T803;}
	V204= list(2,VV[90],(V203));
	V189= make_cons(/* INLINE-ARGS */V204,(V189));
	(VV[18]->s.s_dbind)= (VFUN_NARGS=2,(*(LnkLI184))((V203),(VV[18]->s.s_dbind)));
	goto T801;
T803:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[91],(V203))));
T801:;
	V202= cdr((V202));
	V203= car((V202));
	goto T796;}
T792:;
	if((V193!= VV[92]))goto T813;
	{object V205;
	register object V206;
	V205= cdr((V192));
	V206= car((V205));
T817:;
	if(!(endp((V205)))){
	goto T818;}
	goto T719;
T818:;
	if(!(type_of((V206))==t_symbol)){
	goto T824;}
	V207= list(2,VV[92],(V206));
	V189= make_cons(/* INLINE-ARGS */V207,(V189));
	(VV[18]->s.s_dbind)= make_cons((V206),(VV[18]->s.s_dbind));
	goto T822;
T824:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[93],(V206))));
T822:;
	V205= cdr((V205));
	V206= car((V205));
	goto T817;}
T813:;
	if((V193!= VV[143]))goto T834;
	{object V208;
	register object V209;
	V208= cdr((V192));
	V209= car((V208));
T838:;
	if(!(endp((V208)))){
	goto T839;}
	goto T719;
T839:;
	if(!(type_of((V209))==t_symbol)){
	goto T845;}
	{register object x= (V209),V210= (VV[64]->s.s_dbind);
	while(!endp(V210))
	if(eql(x,V210->c.c_car)){
	goto T843;
	}else V210=V210->c.c_cdr;}
	(VV[64]->s.s_dbind)= make_cons((V209),(VV[64]->s.s_dbind));
	goto T843;
T845:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[94],(V209))));
T843:;
	V208= cdr((V208));
	V209= car((V208));
	goto T838;}
T834:;
	{register object x= car((V192)),V211= (VV[64]->s.s_dbind);
	while(!endp(V211))
	if(eql(x,V211->c.c_car)){
	goto T719;
	}else V211=V211->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[95],car((V192)))));}
T719:;
	V191= cdr((V191));
	V192= car((V191));
	goto T714;}
T710:;
	V188= (*(LnkLI182))((V188));
	{object V212 = list(4,VV[96],cadr((V188)),(V189),(V188));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR23(V212)}}
}
/*	function definition for C2DECL-BODY	*/

static L24()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	bds_check;
	{object V213;
	object V214;
	check_arg(2);
	V213=(base[0]);
	V214=(base[1]);
	vs_top=sup;
TTL:;
	bds_bind(VV[53],symbol_value(VV[53]));
	bds_bind(VV[54],symbol_value(VV[54]));
	bds_bind(VV[49],symbol_value(VV[49]));
	bds_bind(VV[18],symbol_value(VV[18]));
	bds_bind(VV[55],symbol_value(VV[55]));
	{register object V215;
	register object V216;
	V215= (V213);
	V216= car((V215));
T868:;
	if(!(endp((V215)))){
	goto T869;}
	goto T864;
T869:;
	{object V217= car((V216));
	if((V217!= VV[85]))goto T874;
	{register int V218;
	V218= fix(cadr((V216)));
	(VV[53]->s.s_dbind)= ((V218)>=(1)?Ct:Cnil);
	(VV[54]->s.s_dbind)= ((V218)>=(2)?Ct:Cnil);
	(VV[49]->s.s_dbind)= ((V218)>=(3)?Ct:Cnil);
	goto T873;}
T874:;
	if((V217!= VV[86]))goto T881;
	(VV[55]->s.s_dbind)= cadr((V216));
	goto T873;
T881:;
	if((V217!= VV[92]))goto T883;
	(VV[18]->s.s_dbind)= make_cons(cadr((V216)),(VV[18]->s.s_dbind));
	goto T873;
T883:;
	if((V217!= VV[90]))goto T885;
	(VV[18]->s.s_dbind)= (VFUN_NARGS=2,(*(LnkLI184))(cadr((V216)),(VV[18]->s.s_dbind)));
	goto T873;
T885:;
	(void)((*(LnkLI185))());}
T873:;
	V215= cdr((V215));
	V216= car((V215));
	goto T868;}
T864:;
	base[7]= (V214);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk186)();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function CHECK-VDECL	*/

static object LI25(V222,V223,V224)

register object V222;object V223;object V224;
{	 VMB25 VMS25 VMV25
TTL:;
	{register object V225;
	register object V226;
	V225= (V223);
	V226= car((V225));
T897:;
	if(!(endp((V225)))){
	goto T898;}
	goto T893;
T898:;
	{register object x= car((V226)),V227= (V222);
	while(!endp(V227))
	if(eql(x,V227->c.c_car)){
	goto T902;
	}else V227=V227->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI128))(VV[97],car((V226)))));
T902:;
	V225= cdr((V225));
	V226= car((V225));
	goto T897;}
T893:;
	{register object V228;
	register object V229;
	V228= (V224);
	V229= car((V228));
T913:;
	if(!(endp((V228)))){
	goto T914;}
	{object V230 = Cnil;
	VMR25(V230)}
T914:;
	{register object x= (V229),V231= (V222);
	while(!endp(V231))
	if(eql(x,V231->c.c_car)){
	goto T918;
	}else V231=V231->c.c_cdr;}
	(void)((VFUN_NARGS=2,(*(LnkLI128))(VV[98],(V229))));
T918:;
	V228= cdr((V228));
	V229= car((V228));
	goto T913;}
}
/*	local entry for function PROCLAMATION	*/

static object LI26(V233)

object V233;
{	 VMB26 VMS26 VMV26
TTL:;
	{object V234= car((V233));
	if((V234!= VV[129]))goto T926;
	{register object V235;
	object V236;
	V235= cdr((V233));
	V236= car((V235));
T930:;
	if(!(endp((V235)))){
	goto T931;}
	{object V237 = Ct;
	VMR26(V237)}
T931:;
	if(!(type_of((V236))==t_symbol)){
	goto T937;}
	base[2]= (V236);
	vs_top=(vs_base=base+2)+1;
	siLspecialp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T935;}
	{object V238 = Cnil;
	VMR26(V238)}
T937:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[99],(V236))));
T935:;
	V235= cdr((V235));
	V236= car((V235));
	goto T930;}
T926:;
	if((V234!= VV[131]))goto T947;
	{register object V239;
	register object V240;
	V239= cdr((V233));
	V240= car((V239));
T951:;
	if(!(endp((V239)))){
	goto T952;}
	{object V241 = Ct;
	VMR26(V241)}
T952:;
	if(!(type_of((V240))==t_symbol)){
	goto T956;}
	V240= list(2,(V240),small_fixnum(3));
T956:;
	if(!(type_of((V240))==t_cons)){
	goto T961;}
	if(!(type_of(cdr((V240)))==t_cons)){
	goto T961;}
	{object V242= cadr((V240));
	if(!(type_of(V242)==t_fixnum||
type_of(V242)==t_bignum||
type_of(V242)==t_ratio||
type_of(V242)==t_shortfloat||
type_of(V242)==t_longfloat||
type_of(V242)==t_complex)){
	goto T961;}}
	base[2]= small_fixnum(0);
	base[3]= cadr((V240));
	base[4]= small_fixnum(3);
	vs_top=(vs_base=base+2)+3;
	Lmonotonically_nondecreasing();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T962;}
T961:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[100],(V240))));
	goto T960;
T962:;
	{object V243= car((V240));
	if((V243!= VV[85]))goto T973;
	V244= cadr((V240));
	if((symbol_value(VV[53]))!=Cnil){
	goto T978;}
	V245= small_fixnum(0);
	goto T976;
T978:;
	if((symbol_value(VV[54]))!=Cnil){
	goto T981;}
	V245= small_fixnum(1);
	goto T976;
T981:;
	if((symbol_value(VV[49]))!=Cnil){
	goto T984;}
	V245= small_fixnum(2);
	goto T976;
T984:;
	V245= small_fixnum(3);
T976:;
	if(number_compare(/* INLINE-ARGS */V244,V245)==0){
	goto T960;}
	{object V246 = Cnil;
	VMR26(V246)}
T973:;
	if((V243!= VV[86]))goto T986;
	if(number_compare(cadr((V240)),symbol_value(VV[55]))==0){
	goto T960;}
	{object V247 = Cnil;
	VMR26(V247)}
T986:;
	if((V243!= VV[132]))goto T989;
	if(number_compare(cadr((V240)),symbol_value(VV[56]))==0){
	goto T960;}
	{object V248 = Cnil;
	VMR26(V248)}
T989:;
	if((V243!= VV[133]))goto T992;
	V249= number_minus(small_fixnum(3),cadr((V240)));
	if(number_compare(/* INLINE-ARGS */V249,symbol_value(VV[56]))==0){
	goto T960;}
	{object V250 = Cnil;
	VMR26(V250)}
T992:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[101],car((V240)))));}
T960:;
	V239= cdr((V239));
	V240= car((V239));
	goto T951;}
T947:;
	if((V234!= VV[134]))goto T1000;
	if(!(type_of(cdr((V233)))==t_cons)){
	goto T1002;}
	{object V251;
	object V252;
	V251= (*(LnkLI122))(cadr((V233)));
	V252= Cnil;
	{register object V253;
	object V254;
	V253= cddr((V233));
	V254= car((V253));
T1008:;
	if(!(endp((V253)))){
	goto T1009;}
	{object V255 = Ct;
	VMR26(V255)}
T1009:;
	if(!(type_of((V254))==t_symbol)){
	goto T1015;}
	V252= get((V254),VV[68],Cnil);
	if(((V252))==Cnil){
	goto T1017;}
	if(equal((V252),(V251))){
	goto T1013;}
T1017:;
	{object V256 = Cnil;
	VMR26(V256)}
T1015:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[102],(V254))));
T1013:;
	V253= cdr((V253));
	V254= car((V253));
	goto T1008;}}
T1002:;
	{object V257 = (VFUN_NARGS=2,(*(LnkLI123))(VV[103],(V233)));
	VMR26(V257)}
T1000:;
	if((V234!= VV[136])
	&& (V234!= VV[137])
	&& (V234!= VV[138])
	&& (V234!= VV[139]))goto T1027;
	{object V258;
	object V259;
	V258= (*(LnkLI122))(car((V233)));
	V259= Cnil;
	{register object V260;
	object V261;
	V260= cdr((V233));
	V261= car((V260));
T1032:;
	if(!(endp((V260)))){
	goto T1033;}
	{object V262 = Ct;
	VMR26(V262)}
T1033:;
	if(!(type_of((V261))==t_symbol)){
	goto T1039;}
	V259= get((V261),VV[68],Cnil);
	if(((V259))==Cnil){
	goto T1041;}
	if(equal((V259),(V258))){
	goto T1037;}
T1041:;
	{object V263 = Cnil;
	VMR26(V263)}
T1039:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[104],(V261))));
T1037:;
	V260= cdr((V260));
	V261= car((V260));
	goto T1032;}}
T1027:;
	if((V234!= VV[140]))goto T1051;
	if(endp(cdr((V233)))){
	goto T1052;}
	if(!(type_of(cadr((V233)))==t_cons)){
	goto T1052;}
	if(!((caadr((V233)))==(VV[26]))){
	goto T1052;}
	if(!(endp(cdadr((V233))))){
	goto T1053;}
T1052:;
	{object V264 = (VFUN_NARGS=2,(*(LnkLI123))(VV[105],(V233)));
	VMR26(V264)}
T1053:;
	{register object V265;
	object V266;
	V265= cddr((V233));
	V266= car((V265));
T1064:;
	if(!(endp((V265)))){
	goto T1065;}
	{object V267 = Ct;
	VMR26(V267)}
T1065:;
	if((get((V266),VV[38],Cnil))==Cnil){
	goto T1070;}
	V268= (*(LnkLI124))(cadadr((V233)));
	V269= get((V266),VV[36],Cnil);
	if(!(equal(/* INLINE-ARGS */V268,V269))){
	goto T1070;}
	V270= (*(LnkLI125))(cddadr((V233)));
	V271= get((V266),VV[37],Cnil);
	if(equal(/* INLINE-ARGS */V270,V271)){
	goto T1069;}
T1070:;
	{object V272 = Cnil;
	VMR26(V272)}
T1069:;
	V265= cdr((V265));
	V266= car((V265));
	goto T1064;}
T1051:;
	if((V234!= VV[26]))goto T1083;
	if(endp(cdr((V233)))){
	goto T1084;}
	if(!(endp(cddr((V233))))){
	goto T1085;}
T1084:;
	{object V273 = (VFUN_NARGS=2,(*(LnkLI123))(VV[106],(V233)));
	VMR26(V273)}
T1085:;
	if((get(cadr((V233)),VV[38],Cnil))!=Cnil){
	goto T1089;}
	{object V274 = Cnil;
	VMR26(V274)}
T1089:;
	V275= (*(LnkLI124))(caddr((V233)));
	V276= get(cadr((V233)),VV[36],Cnil);
	if(equal(/* INLINE-ARGS */V275,V276)){
	goto T1091;}
	{object V277 = Cnil;
	VMR26(V277)}
T1091:;
	V278= (*(LnkLI125))(cdddr((V233)));
	V279= get(cadr((V233)),VV[37],Cnil);
	{object V280 = (equal(/* INLINE-ARGS */V278,V279)?Ct:Cnil);
	VMR26(V280)}
T1083:;
	if((V234!= VV[90]))goto T1095;
	{register object V281;
	object V282;
	V281= cdr((V233));
	V282= car((V281));
T1099:;
	if(!(endp((V281)))){
	goto T1100;}
	{object V283 = Ct;
	VMR26(V283)}
T1100:;
	if(!(type_of((V282))==t_symbol)){
	goto T1106;}
	if((get((V282),VV[50],Cnil))==Cnil){
	goto T1104;}
	{object V284 = Cnil;
	VMR26(V284)}
T1106:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[107],(V282))));
T1104:;
	V281= cdr((V281));
	V282= car((V281));
	goto T1099;}
T1095:;
	if((V234!= VV[92]))goto T1115;
	{register object V285;
	object V286;
	V285= cdr((V233));
	V286= car((V285));
T1119:;
	if(!(endp((V285)))){
	goto T1120;}
	{object V287 = Ct;
	VMR26(V287)}
T1120:;
	if(!(type_of((V286))==t_symbol)){
	goto T1126;}
	if((get((V286),VV[50],Cnil))!=Cnil){
	goto T1124;}
	{object V288 = Cnil;
	VMR26(V288)}
T1126:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[108],(V286))));
T1124:;
	V285= cdr((V285));
	V286= car((V285));
	goto T1119;}
T1115:;
	if((V234!= VV[79])
	&& (V234!= VV[142]))goto T1135;
	{register object V289;
	object V290;
	V289= cdr((V233));
	V290= car((V289));
T1139:;
	if(!(endp((V289)))){
	goto T1140;}
	{object V291 = Ct;
	VMR26(V291)}
T1140:;
	if(type_of((V290))==t_symbol){
	goto T1144;}
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[109],(V290))));
T1144:;
	V289= cdr((V289));
	V290= car((V289));
	goto T1139;}
T1135:;
	if((V234!= VV[143]))goto T1152;
	{register object V292;
	object V293;
	V292= cdr((V233));
	V293= car((V292));
T1156:;
	if(!(endp((V292)))){
	goto T1157;}
	{object V294 = Ct;
	VMR26(V294)}
T1157:;
	if(!(type_of((V293))==t_symbol)){
	goto T1163;}
	{register object x= (V293),V295= symbol_value(VV[64]);
	while(!endp(V295))
	if(eql(x,V295->c.c_car)){
	goto T1161;
	}else V295=V295->c.c_cdr;}
	{object V296 = Cnil;
	VMR26(V296)}
T1163:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[110],(V293))));
T1161:;
	V292= cdr((V292));
	V293= car((V292));
	goto T1156;}
T1152:;
	if((V234== VV[144])
	|| (V234== VV[145])
	|| (V234== VV[146])
	|| (V234== VV[147])
	|| (V234== VV[148]))goto T1173;
	if((V234== VV[137])
	|| (V234== VV[149])
	|| (V234== VV[25])
	|| (V234== VV[150])
	|| (V234== VV[151]))goto T1173;
	if((V234== VV[152])
	|| (V234== VV[136])
	|| (V234== VV[153])
	|| (V234== VV[154])
	|| (V234== VV[32]))goto T1173;
	if((V234== VV[155])
	|| (V234== VV[156])
	|| (V234== VV[139])
	|| (V234== Cnil)
	|| (V234== VV[157]))goto T1173;
	if((V234== VV[158])
	|| (V234== VV[159])
	|| (V234== VV[160])
	|| (V234== VV[161])
	|| (V234== VV[162]))goto T1173;
	if((V234== VV[163])
	|| (V234== VV[164])
	|| (V234== VV[165])
	|| (V234== VV[138])
	|| (V234== VV[166]))goto T1173;
	if((V234== VV[167])
	|| (V234== VV[168])
	|| (V234== VV[169])
	|| (V234== VV[170])
	|| (V234== VV[171]))goto T1173;
	if((V234== VV[172])
	|| (V234== VV[173])
	|| (V234== VV[174])
	|| (V234== VV[175])
	|| (V234== Ct))goto T1173;
	if((V234!= VV[176])
	&& (V234!= VV[177])
	&& (V234!= VV[178]))goto T1172;
T1173:;
	{object V297;
	V297= (*(LnkLI122))(car((V233)));
	{register object V298;
	object V299;
	V298= cdr((V233));
	V299= car((V298));
T1178:;
	if(!(endp((V298)))){
	goto T1179;}
	{object V300 = Ct;
	VMR26(V300)}
T1179:;
	if(!(type_of((V299))==t_symbol)){
	goto T1185;}
	V301= get((V299),VV[68],Cnil);
	if(equal(V301,(V297))){
	goto T1183;}
	{object V302 = Cnil;
	VMR26(V302)}
T1185:;
	(void)((VFUN_NARGS=2,(*(LnkLI123))(VV[111],(V299))));
T1183:;
	V298= cdr((V298));
	V299= car((V298));
	goto T1178;}}
T1172:;
	{register object x= car((V233)),V303= symbol_value(VV[64]);
	while(!endp(V303))
	if(eql(x,V303->c.c_car)){
	goto T1196;
	}else V303=V303->c.c_cdr;}
	{object V304 = (VFUN_NARGS=2,(*(LnkLI123))(VV[112],car((V233))));
	VMR26(V304)}
T1196:;
	{object V305 = Cnil;
	VMR26(V305)}}
}
static LnkT186(){ call_or_link(VV[186],&Lnk186);} /* C2EXPR */
static object  LnkTLI185(){return call_proc0(VV[185],&LnkLI185);} /* BABOON */
static object  LnkTLI184(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[184],&LnkLI184,ap);} /* REMOVE */
static object  LnkTLI183(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[183],&LnkLI183,3,ap);} /* ADD-FUNCTION-DECLARATION */
static object  LnkTLI182(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[182],&LnkLI182,1,ap);} /* C1PROGN */
static object  LnkTLI180(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[180],&LnkLI180,1,ap);} /* CMP-MACROEXPAND */
static object  LnkTLI179(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[179],&LnkLI179,1,ap);} /* SCH-GLOBAL */
static object  LnkTLI141(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[141],&LnkLI141,3,ap);} /* ADD-FUNCTION-PROCLAMATION */
static object  LnkTLI135(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[135],&LnkLI135,2,ap);} /* PROCLAIM-VAR */
static LnkT130(){ call_or_link(VV[130],&Lnk130);} /* *MAKE-SPECIAL */
static object  LnkTLI128(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[128],&LnkLI128,ap);} /* CMPWARN */
static object  LnkTLI127(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[127],&LnkLI127,2,ap);} /* TYPE-AND */
static object  LnkTLI126(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[126],&LnkLI126,1,ap);} /* SCH-LOCAL-FUN */
static object  LnkTLI125(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[125],&LnkLI125,1,ap);} /* FUNCTION-RETURN-TYPE */
static object  LnkTLI124(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[124],&LnkLI124,1,ap);} /* FUNCTION-ARG-TYPES */
static object  LnkTLI123(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[123],&LnkLI123,ap);} /* WARN */
static object  LnkTLI122(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[122],&LnkLI122,1,ap);} /* TYPE-FILTER */
static object  LnkTLI121(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[121],&LnkLI121,ap);} /* CMPERR */
static LnkT120(){ call_or_link(VV[120],&Lnk120);} /* COMPILED-FUNCTION-NAME */
static LnkT119(){ call_or_link(VV[119],&Lnk119);} /* TYPEP */
static LnkT118(){ call_or_link(VV[118],&Lnk118);} /* WT-TO-STRING */
static LnkT117(){ call_or_link(VV[117],&Lnk117);} /* CONTAINS-SHARP-COMMA */
static LnkT116(){ call_or_link(VV[116],&Lnk116);} /* GET-OUTPUT-STREAM-STRING */
static object  LnkTLI115(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[115],&LnkLI115,1,ap);} /* WT-DATA1 */
static LnkT114(){ call_or_link(VV[114],&Lnk114);} /* MAKE-STRING-OUTPUT-STREAM */
static object  LnkTLI113(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[113],&LnkLI113,1,ap);} /* PUSH-DATA-INCF */
