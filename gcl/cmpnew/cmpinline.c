
#include "cmpinclude.h"
#include "cmpinline.h"
void init_cmpinline(){do_init(VV);}
/*	local entry for function MAKE-INFO	*/

static object LI1(va_alist)
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{object V1;
	object V2;
	object V3;
	object V4;
	object V5;
	Vcs[0]=Vcs[0];
	va_start(ap);
	narg= narg - 0;
	{
	parse_key_new(narg,Vcs +0,(struct key *)&LI1key,ap);
	V1=(Vcs[0]);
	V2=(Vcs[1]);
	if(Vcs[2]==0){
	V3= Ct;
	}else{
	V3=(Vcs[2]);}
	V4=(Vcs[3]);
	V5=(Vcs[4]);
	base[0]= VV[0];
	base[1]= (V1);
	base[2]= (V2);
	base[3]= (V3);
	base[4]= (V4);
	base[5]= (V5);
	vs_top=(vs_base=base+0)+6;
	siLmake_structure();
	vs_top=sup;
	{object V6 = vs_base[0];
	VMR1(V6)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function ADD-INFO	*/

static object LI2(V9,V10)

register object V9;object V10;
{	 VMB2 VMS2 VMV2
goto TTL;
TTL:;
	V11= structure_ref((V10),VV[0],0);
	V12= structure_ref((V9),VV[0],0);
	V13= append(/* INLINE-ARGS */V11,/* INLINE-ARGS */V12);
	(void)(structure_set((V9),VV[0],0,/* INLINE-ARGS */V13));
	V14= structure_ref((V10),VV[0],1);
	V15= structure_ref((V9),VV[0],1);
	V16= append(/* INLINE-ARGS */V14,/* INLINE-ARGS */V15);
	(void)(structure_set((V9),VV[0],1,/* INLINE-ARGS */V16));
	if((structure_ref((V10),VV[0],3))==Cnil){
	goto T11;}
	{object V17 = structure_set((V9),VV[0],3,Ct);
	VMR2(V17)}
goto T11;
T11:;
	{object V18 = Cnil;
	VMR2(V18)}
	return Cnil;
}
/*	local entry for function ARGS-INFO-CHANGED-VARS	*/

static object LI3(V21,V22)

register object V21;object V22;
{	 VMB3 VMS3 VMV3
goto TTL;
TTL:;
	V24= structure_ref((V21),VV[1],1);
	{object V23= /* INLINE-ARGS */V24;
	if((V23== VV[71])
	|| (V23== VV[45])
	|| (V23== VV[72])
	|| (V23== VV[46])
	|| (V23== VV[47]))goto T14;
	if((V23!= VV[18]))goto T13;
goto T14;
T14:;
	{register object V25;
	register object V26;
	V25= (V22);
	V26= car((V25));
goto T18;
T18:;
	if(!(endp_prop((V25)))){
	goto T19;}
	{object V27 = Cnil;
	VMR3(V27)}
goto T19;
T19:;
	V29= structure_ref(cadr((V26)),VV[0],0);
	{register object x= (V21),V28= /* INLINE-ARGS */V29;
	while(!endp(V28))
	if(eql(x,V28->c.c_car)){
	goto T25;
	}else V28=V28->c.c_cdr;
	goto T23;}
goto T25;
T25:;
	{object V30 = Ct;
	VMR3(V30)}
goto T23;
T23:;
	V25= cdr((V25));
	V26= car((V25));
	goto T18;}
goto T13;
T13:;
	if((V23!= VV[73]))goto T31;
	{object V31 = Cnil;
	VMR3(V31)}
goto T31;
T31:;
	{register object V32;
	register object V33;
	V32= (V22);
	V33= car((V32));
goto T35;
T35:;
	if(!(endp_prop((V32)))){
	goto T36;}
	{object V34 = Cnil;
	VMR3(V34)}
goto T36;
T36:;
	V36= structure_ref(cadr((V33)),VV[0],0);
	{register object x= (V21),V35= /* INLINE-ARGS */V36;
	while(!endp(V35))
	if(eql(x,V35->c.c_car)){
	goto T41;
	}else V35=V35->c.c_cdr;}
	if((structure_ref(cadr((V33)),VV[0],3))==Cnil){
	goto T40;}
goto T41;
T41:;
	{object V37 = Ct;
	VMR3(V37)}
goto T40;
T40:;
	V32= cdr((V32));
	V33= car((V32));
	goto T35;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ARGS-INFO-REFERRED-VARS	*/

static object LI4(V40,V41)

register object V40;object V41;
{	 VMB4 VMS4 VMV4
goto TTL;
TTL:;
	V43= structure_ref((V40),VV[1],1);
	{object V42= /* INLINE-ARGS */V43;
	if((V42== VV[71])
	|| (V42== VV[73])
	|| (V42== VV[45])
	|| (V42== VV[72])
	|| (V42== VV[46]))goto T51;
	if((V42!= VV[47])
	&& (V42!= VV[18]))goto T50;
goto T51;
T51:;
	{register object V44;
	register object V45;
	V44= (V41);
	V45= car((V44));
goto T55;
T55:;
	if(!(endp_prop((V44)))){
	goto T56;}
	{object V46 = Cnil;
	VMR4(V46)}
goto T56;
T56:;
	V48= structure_ref(cadr((V45)),VV[0],1);
	{register object x= (V40),V47= /* INLINE-ARGS */V48;
	while(!endp(V47))
	if(eql(x,V47->c.c_car)){
	goto T62;
	}else V47=V47->c.c_cdr;
	goto T60;}
goto T62;
T62:;
	{object V49 = Ct;
	VMR4(V49)}
goto T60;
T60:;
	V44= cdr((V44));
	V45= car((V44));
	goto T55;}
goto T50;
T50:;
	{register object V50;
	register object V51;
	V50= (V41);
	V51= car((V50));
goto T71;
T71:;
	if(!(endp_prop((V50)))){
	goto T72;}
	{object V52 = Cnil;
	VMR4(V52)}
goto T72;
T72:;
	V54= structure_ref(cadr((V51)),VV[0],1);
	{register object x= (V40),V53= /* INLINE-ARGS */V54;
	while(!endp(V53))
	if(eql(x,V53->c.c_car)){
	goto T77;
	}else V53=V53->c.c_cdr;}
	if((structure_ref(cadr((V51)),VV[0],3))==Cnil){
	goto T76;}
goto T77;
T77:;
	{object V55 = Ct;
	VMR4(V55)}
goto T76;
T76:;
	V50= cdr((V50));
	V51= car((V50));
	goto T71;}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for INC-INLINE-BLOCKS	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	check_arg(0);
	vs_top=sup;
goto TTL;
TTL:;
	if(!(type_of(symbol_value(VV[2]))==t_cons)){
	goto T87;}
	{object V56;
	object V57;
	V56= symbol_value(VV[2]);
	V57= number_plus(car((V56)),small_fixnum(1));
	if(type_of((V56))!=t_cons)FEwrong_type_argument(Scons,(V56));
	((V56))->c.c_car = (V57);
	base[1]= (V57);
	vs_top=(vs_base=base+1)+1;
	return;}
goto T87;
T87:;
	setq(VV[2],number_plus(symbol_value(VV[2]),small_fixnum(1)));
	base[0]= symbol_value(VV[2]);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local entry for function INLINE-ARGS	*/

static object LI6(V59,V58,va_alist)
	object V59,V58;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	bds_check;
	{object V60;
	object V61;
	object V62;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <2) too_few_arguments();
	V60= V59;
	V61= V58;
	narg = narg - 2;
	if (narg <= 0) goto T93;
	else {
	V62= va_arg(ap,object);}
	--narg; goto T94;
goto T93;
T93:;
	V62= Cnil;
goto T94;
T94:;
	{register object V63;
	register object V64;
	V63= Cnil;
	V64= Cnil;
	{register object V65;
	object V66;
	V65= (V60);
	V66= (V61);
goto T99;
T99:;
	if(!(endp_prop((V65)))){
	goto T100;}
	{object V67 = reverse((V63));
	VMR6(V67)}
goto T100;
T100:;
	{register object V68;
	register object V69;
	V68= car((V65));
	V69= car((V66));
	{object V70= car((V68));
	if((V70!= VV[14]))goto T107;
	V71= (*(LnkLI74))(caddr((V68)),(V69));
	V63= make_cons(/* INLINE-ARGS */V71,(V63));
	goto T104;
goto T107;
T107:;
	if((V70!= VV[1]))goto T109;
	if(((*(LnkLI75))(caaddr((V68)),cdr((V65))))==Cnil){
	goto T111;}
	V73= structure_ref(caaddr((V68)),VV[1],1);
	{register object x= /* INLINE-ARGS */V73,V72= symbol_value(VV[3]);
	while(!endp(V72))
	if(eql(x,V72->c.c_car)){
	goto T116;
	}else V72=V72->c.c_cdr;
	goto T114;}
goto T116;
T116:;
	V74= structure_ref(caaddr((V68)),VV[1],1);
	if(!(((V69))==(/* INLINE-ARGS */V74))){
	goto T114;}
	{object V75;
	setq(VV[4],number_plus(symbol_value(VV[4]),small_fixnum(1)));
	V75= symbol_value(VV[4]);
	princ_str("\n	{",VV[5]);
	V76= (*(LnkLI77))((V69));
	(void)((*(LnkLI76))(/* INLINE-ARGS */V76));
	princ_char(86,VV[5]);
	(void)((*(LnkLI76))((V75)));
	princ_str("= V",VV[5]);
	V77= structure_ref(caaddr((V68)),VV[1],4);
	(void)((*(LnkLI76))(/* INLINE-ARGS */V77));
	princ_char(59,VV[5]);
	V78= list(3,VV[6],(V75),VV[7]);
	V63= make_cons(/* INLINE-ARGS */V78,(V63));
	vs_base=vs_top;
	(void) (*Lnk78)();
	vs_top=sup;
	goto T104;}
goto T114;
T114:;
	{object V79;
	V79= (*(LnkLI79))();
	princ_str("\n	",VV[5]);
	(void)((*(LnkLI76))((V79)));
	princ_str("= ",VV[5]);
	(void)((*(LnkLI80))(caaddr((V68)),cadr(caddr((V68)))));
	princ_char(59,VV[5]);
	V80= (*(LnkLI74))((V79),(V69));
	V63= make_cons(/* INLINE-ARGS */V80,(V63));
	goto T104;}
goto T111;
T111:;
	V82= structure_ref(caaddr((V68)),VV[1],1);
	{register object x= /* INLINE-ARGS */V82,V81= VV[8];
	while(!endp(V81))
	if(eql(x,V81->c.c_car)){
	goto T142;
	}else V81=V81->c.c_cdr;
	goto T140;}
goto T142;
T142:;
	V83= structure_ref(caaddr((V68)),VV[1],1);
	if(((V69))==(/* INLINE-ARGS */V83)){
	goto T140;}
	{object V84;
	V84= (VFUN_NARGS=1,(*(LnkLI81))((V69)));
	princ_str("\n	V",VV[5]);
	(void)((*(LnkLI76))((V84)));
	princ_str(" = ",VV[5]);
	V85= make_cons(VV[1],caddr((V68)));
	V86= (*(LnkLI74))(/* INLINE-ARGS */V85,(V69));
	(void)((*(LnkLI76))(/* INLINE-ARGS */V86));
	princ_char(59,VV[5]);
	V87= list(2,VV[6],(V84));
	V63= make_cons(/* INLINE-ARGS */V87,(V63));
	goto T104;}
goto T140;
T140:;
	V88= make_cons(VV[1],caddr((V68)));
	V89= (*(LnkLI74))(/* INLINE-ARGS */V88,(V69));
	V63= make_cons(/* INLINE-ARGS */V89,(V63));
	goto T104;
goto T109;
T109:;
	if((V70!= VV[82]))goto T153;
	{object V90;
	V90= caddr((V68));
	if(((*(LnkLI83))((V90)))!=Cnil){
	goto T158;}
	goto T155;
goto T158;
T158:;
	V91= cadddr((V68));
	V92= structure_ref(cadr((V68)),VV[0],2);
	V64= (*(LnkLI84))((V90),/* INLINE-ARGS */V91,/* INLINE-ARGS */V92);
	if(((V64))!=Cnil){
	goto T160;}
	goto T155;
goto T160;
T160:;
	base[0]= (V64);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk85)();
	vs_top=sup;}
	{register object V93;
	V93= (*(LnkLI86))((V64),cadddr((V68)));
	base[0]= small_fixnum(0);
	base[1]= caddr((V64));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T168;}
	if((symbol_value(VV[9]))==Cnil){
	goto T166;}
goto T168;
T168:;
	{register object x= cadr((V64)),V94= VV[10];
	while(!endp(V94))
	if(eql(x,V94->c.c_car)){
	goto T175;
	}else V94=V94->c.c_cdr;
	goto T167;}
goto T175;
T175:;
	if(((V69))==(cadr((V64)))){
	goto T167;}
goto T166;
T166:;
	{object V95;
	V95= (VFUN_NARGS=1,(*(LnkLI81))((V69)));
	princ_str("\n	V",VV[5]);
	(void)((*(LnkLI76))((V95)));
	princ_str(" = ",VV[5]);
	V96= (*(LnkLI74))((V93),(V69));
	(void)((*(LnkLI76))(/* INLINE-ARGS */V96));
	princ_char(59,VV[5]);
	V97= list(2,VV[6],(V95));
	V63= make_cons(/* INLINE-ARGS */V97,(V63));
	goto T104;}
goto T167;
T167:;
	if(((*(LnkLI87))(cdr((V65)),cdr((V66))))!=Cnil){
	goto T185;}
	base[0]= small_fixnum(0);
	base[1]= caddr((V64));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T189;}
	if(((V62))==Cnil){
	goto T185;}
	{register object x= (V62),V98= VV[11];
	while(!endp(V98))
	if(x==(V98->c.c_car)){
	goto T196;
	}else V98=V98->c.c_cdr;
	goto T185;}
goto T196;
T196:;
goto T189;
T189:;
	base[0]= small_fixnum(4);
	base[1]= caddr((V64));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T185;}
	base[0]= small_fixnum(1);
	base[1]= caddr((V64));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T186;}
	if((cdr((V65)))==Cnil){
	goto T186;}
goto T185;
T185:;
	{object V99;
	V99= Cnil;
	if(!(((V69))==(Ct))){
	goto T208;}
	V99= (VFUN_NARGS=0,(*(LnkLI81))());
	princ_str("\n	V",VV[5]);
	(void)((*(LnkLI76))((V99)));
	princ_str("= ",VV[5]);
	base[0]= (V93);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk88)();
	vs_top=sup;
	goto T206;
goto T208;
T208:;
	setq(VV[4],number_plus(symbol_value(VV[4]),small_fixnum(1)));
	V99= symbol_value(VV[4]);
	princ_str("\n	{",VV[5]);
	V100= (*(LnkLI77))((V69));
	(void)((*(LnkLI76))(/* INLINE-ARGS */V100));
	princ_char(86,VV[5]);
	(void)((*(LnkLI76))((V99)));
	princ_str("= ",VV[5]);
	{object V101= (V69);
	if((V101!= VV[45]))goto T227;
	base[0]= (V93);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk89)();
	vs_top=sup;
	goto T226;
goto T227;
T227:;
	if((V101!= VV[40]))goto T229;
	base[0]= (V93);
	base[1]= VV[7];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk90)();
	vs_top=sup;
	goto T226;
goto T229;
T229:;
	if((V101!= VV[72]))goto T232;
	base[0]= (V93);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk91)();
	vs_top=sup;
	goto T226;
goto T232;
T232:;
	if((V101!= VV[46]))goto T234;
	base[0]= (V93);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk92)();
	vs_top=sup;
	goto T226;
goto T234;
T234:;
	if((V101!= VV[47]))goto T236;
	base[0]= (V93);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk93)();
	vs_top=sup;
	goto T226;
goto T236;
T236:;
	base[0]= (V93);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk88)();
	vs_top=sup;}
goto T226;
T226:;
	vs_base=vs_top;
	(void) (*Lnk78)();
	vs_top=sup;
goto T206;
T206:;
	princ_char(59,VV[5]);
	V102= list(3,VV[6],(V99),VV[7]);
	V63= make_cons(/* INLINE-ARGS */V102,(V63));
	goto T104;}
goto T186;
T186:;
	V103= (*(LnkLI74))((V93),(V69));
	V63= make_cons(/* INLINE-ARGS */V103,(V63));
	goto T104;}
goto T155;
T155:;
	{object V104;
	if((symbol_value(VV[9]))==Cnil){
	goto T245;}
	V104= list(2,VV[6],(VFUN_NARGS=0,(*(LnkLI81))()));
	goto T243;
goto T245;
T245:;
	V104= list(2,VV[12],(*(LnkLI94))());
goto T243;
T243:;
	bds_bind(VV[13],(V104));
	V105= (*(LnkLI95))((V68));
	bds_unwind1;
	V106= (*(LnkLI74))((V104),(V69));
	V63= make_cons(/* INLINE-ARGS */V106,(V63));
	goto T104;}
goto T153;
T153:;
	if((V70!= VV[96]))goto T249;
	V107= (*(LnkLI97))(cdr((V68)),(V69));
	V63= make_cons(/* INLINE-ARGS */V107,(V63));
	goto T104;
goto T249;
T249:;
	if((V70!= VV[98]))goto T251;
	{object V108;
	object V109;
	V108= caddr((V68));
	V109= cadddr((V68));
	base[0]= make_cons(VV[1],(V108));
	bds_bind(VV[13],base[0]);
	V110= (*(LnkLI95))((V109));
	bds_unwind1;
	if(!((car((V109)))==(VV[14]))){
	goto T257;}
	V111= (*(LnkLI74))(caddr((V109)),(V69));
	V63= make_cons(/* INLINE-ARGS */V111,(V63));
	goto T104;
goto T257;
T257:;
	V65= listA(3,(V68),list(3,VV[1],cadr((V68)),(V108)),cdr((V65)));
	V66= make_cons((V69),(V66));
	goto T104;}
goto T251;
T251:;
	{object V112;
	if((symbol_value(VV[9]))==Cnil){
	goto T265;}
	if(!(((V69))==(Ct))){
	goto T268;}
	V112= list(2,VV[6],(VFUN_NARGS=0,(*(LnkLI81))()));
	goto T263;
goto T268;
T268:;
	setq(VV[4],number_plus(symbol_value(VV[4]),small_fixnum(1)));
	V113= make_cons((V69),symbol_value(VV[4]));
	setq(VV[15],make_cons(/* INLINE-ARGS */V113,symbol_value(VV[15])));
	{register object x= (V69),V115= symbol_value(VV[3]);
	while(!endp(V115))
	if(eql(x,V115->c.c_car)){
	goto T276;
	}else V115=V115->c.c_cdr;
	goto T275;}
goto T276;
T276:;
	V114= (V69);
	goto T273;
goto T275;
T275:;
	V114= VV[18];
goto T273;
T273:;
	V116= (VFUN_NARGS=6,(*(LnkLI99))(VV[16],(V69),VV[17],V114,VV[19],cdar(symbol_value(VV[15]))));
	V112= list(3,VV[1],/* INLINE-ARGS */V116,Cnil);
	goto T263;
goto T265;
T265:;
	V112= list(2,VV[12],(*(LnkLI94))());
goto T263;
T263:;
	bds_bind(VV[13],(V112));
	(void)((*(LnkLI95))((V68)));
	V117= (*(LnkLI74))((V112),(V69));
	V63= make_cons(/* INLINE-ARGS */V117,(V63));
	bds_unwind1;}}}
goto T104;
T104:;
	V65= cdr((V65));
	V66= cdr((V66));
	goto T99;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function COERCE-LOC	*/

static object LI7(V120,V121)

register object V120;object V121;
{	 VMB7 VMS7 VMV7
goto TTL;
TTL:;
	{object V122= (V121);
	if((V122!= VV[45]))goto T283;
	{object V123 = list(2,VV[20],(V120));
	VMR7(V123)}
goto T283;
T283:;
	if((V122!= VV[40]))goto T284;
	{object V124 = list(2,VV[21],(V120));
	VMR7(V124)}
goto T284;
T284:;
	if((V122!= VV[72]))goto T285;
	{object V125 = list(2,VV[22],(V120));
	VMR7(V125)}
goto T285;
T285:;
	if((V122!= VV[46]))goto T286;
	{object V126 = list(2,VV[23],(V120));
	VMR7(V126)}
goto T286;
T286:;
	if((V122!= VV[47]))goto T287;
	{object V127 = list(2,VV[24],(V120));
	VMR7(V127)}
goto T287;
T287:;
	{object V128 = (V120);
	VMR7(V128)}}
	return Cnil;
}
/*	local entry for function GET-INLINE-LOC	*/

static object LI8(V131,V132)

object V131;object V132;
{	 VMB8 VMS8 VMV8
goto TTL;
TTL:;
	{object V133;
	object V134;
	V133= car(cdddr((V131)));
	V134= Cnil;
	V134= (VFUN_NARGS=3,(*(LnkLI7))((V132),car((V131)),(V133)));
	if(!(type_of((V133))==t_string)){
	goto T292;}
	base[1]= elt((V133),0);
	base[2]= VV[25];
	vs_top=(vs_base=base+1)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T292;}
	{register long V135;
	object V136;
	V135= 1;
	V136= Cnil;
	{unsigned char V137;
	V137= char_code(elt((V133),V135));
goto T303;
T303:;
	base[1]= code_char(V137);
	base[2]= VV[26];
	vs_top=(vs_base=base+1)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T304;}
	V135= (long)(V135)+(1);
	goto T300;
goto T304;
T304:;
	V138 = make_fixnum((long)((long)(V137))-(48));
	V136= make_cons(V138,(V136));
	V135= (long)(V135)+(1);
	V137= char_code(elt((V133),V135));
	goto T303;}
goto T300;
T300:;
	{object V139;
	long V140;
	register object V141;
	V140= 0;
	V139= (V134);
	V141= Cnil;
goto T320;
T320:;
	if(!(endp_prop((V139)))){
	goto T321;}
	V134= reverse((V141));
	goto T292;
goto T321;
T321:;
	V143 = make_fixnum(V140);
	{register object x= V143,V142= (V136);
	while(!endp(V142))
	if(eql(x,V142->c.c_car)){
	goto T329;
	}else V142=V142->c.c_cdr;
	goto T328;}
goto T329;
T329:;
	{register object V144;
	register object V145;
	object V146;
	V144= car((V139));
	V145= (V144);
	V146= Cnil;
	if(!(type_of((V144))==t_cons)){
	goto T333;}
	{register object x= car((V144)),V147= VV[27];
	while(!endp(V147))
	if(eql(x,V147->c.c_car)){
	goto T337;
	}else V147=V147->c.c_cdr;
	goto T333;}
goto T337;
T337:;
	V146= car((V144));
	V145= cadr((V144));
goto T333;
T333:;
	if(!(type_of((V145))==t_cons)){
	goto T342;}
	{register object x= car((V145)),V148= VV[28];
	while(!endp(V148))
	if(eql(x,V148->c.c_car)){
	goto T341;
	}else V148=V148->c.c_cdr;}
	{register object x= car((V145)),V149= VV[29];
	while(!endp(V149))
	if(eql(x,V149->c.c_car)){
	goto T348;
	}else V149=V149->c.c_cdr;
	goto T342;}
goto T348;
T348:;
	base[2]= small_fixnum(0);
	base[3]= cadr((V145));
	vs_top=(vs_base=base+2)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T341;}
	base[2]= small_fixnum(1);
	base[3]= cadr((V145));
	vs_top=(vs_base=base+2)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T342;}
goto T341;
T341:;
	princ_str("\n	{",VV[5]);
	vs_base=vs_top;
	(void) (*Lnk78)();
	vs_top=sup;
	{register object V150;
	setq(VV[4],number_plus(symbol_value(VV[4]),small_fixnum(1)));
	V150= symbol_value(VV[4]);
	V151= list(2,VV[6],(V150));
	V141= make_cons(/* INLINE-ARGS */V151,(V141));
	{object V152= (V146);
	if((V152!= Cnil))goto T364;
	princ_str("object V",VV[5]);
	(void)((*(LnkLI76))((V150)));
	princ_str("= ",VV[5]);
	base[2]= (V144);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk88)();
	vs_top=sup;
	goto T359;
goto T364;
T364:;
	if((V152!= VV[20]))goto T370;
	princ_str("int V",VV[5]);
	(void)((*(LnkLI76))((V150)));
	princ_str("= ",VV[5]);
	base[2]= (V145);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk89)();
	vs_top=sup;
	goto T359;
goto T370;
T370:;
	if((V152!= VV[21]))goto T376;
	princ_str("GEN V",VV[5]);
	(void)((*(LnkLI76))((V150)));
	princ_str("= ",VV[5]);
	base[2]= (V145);
	base[3]= VV[30];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk90)();
	vs_top=sup;
	goto T359;
goto T376;
T376:;
	if((V152!= VV[22]))goto T383;
	princ_str("unsigned char V",VV[5]);
	(void)((*(LnkLI76))((V150)));
	princ_str("= ",VV[5]);
	base[2]= (V145);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk91)();
	vs_top=sup;
	goto T359;
goto T383;
T383:;
	if((V152!= VV[23]))goto T389;
	princ_str("double V",VV[5]);
	(void)((*(LnkLI76))((V150)));
	princ_str("= ",VV[5]);
	base[2]= (V145);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk92)();
	vs_top=sup;
	goto T359;
goto T389;
T389:;
	if((V152!= VV[24]))goto T395;
	princ_str("float V",VV[5]);
	(void)((*(LnkLI76))((V150)));
	princ_str("= ",VV[5]);
	base[2]= (V145);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk93)();
	vs_top=sup;
	goto T359;
goto T395;
T395:;
	(void)((*(LnkLI100))());}}
goto T359;
T359:;
	princ_char(59,VV[5]);
	goto T326;
goto T342;
T342:;
	V141= make_cons((V144),(V141));
	goto T326;}
goto T328;
T328:;
	V141= make_cons(car((V139)),(V141));
goto T326;
T326:;
	V139= cdr((V139));
	V140= (long)(V140)+1;
	goto T320;}}
goto T292;
T292:;
	V153= (*(LnkLI101))(cadr((V131)));
	{object V154 = list(4,/* INLINE-ARGS */V153,caddr((V131)),(V133),(V134));
	VMR8(V154)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INLINE-TYPE	*/

static object LI9(V156)

object V156;
{	 VMB9 VMS9 VMV9
goto TTL;
TTL:;{object V157;
	{register object x= (V156),V159= symbol_value(VV[31]);
	while(!endp(V159))
	if(type_of(V159->c.c_car)==t_cons &&eql(x,V159->c.c_car->c.c_car)){
	V158= (V159->c.c_car);
	goto T410;
	}else V159=V159->c.c_cdr;
	V158= Cnil;}
goto T410;
T410:;
	V157= cdr(V158);
	if(V157==Cnil)goto T408;
	{object V160 = V157;
	VMR9(V160)}
goto T408;
T408:;}
	{object V161 = VV[32];
	VMR9(V161)}
	return Cnil;
}
/*	local entry for function GET-INLINE-INFO	*/

static object LI10(V165,V166,V167)

object V165;register object V166;object V167;
{	 VMB10 VMS10 VMV10
goto TTL;
TTL:;
	{register object V168;
	base[0]=MMcons(Cnil,Cnil);
	V168= Cnil;
	if(((VFUN_NARGS=2,(*(LnkLI102))((V165),(V166))))!=Cnil){
	goto T413;}
	goto T412;
goto T413;
T413:;
	(void)((*(LnkLI103))((V165),(V167),(V166)));
goto T412;
T412:;
	{object V169;
	object V170= (V166);
	if(endp(V170)){
	V166= Cnil;
	goto T416;}
	base[1]=V169=MMcons(Cnil,Cnil);
goto T417;
T417:;
	(V169->c.c_car)= structure_ref(cadr((V170->c.c_car)),VV[0],2);
	V170=MMcdr(V170);
	if(endp(V170)){
	V166= base[1];
	goto T416;}
	V169=MMcdr(V169)=MMcons(Cnil,Cnil);
	goto T417;}
goto T416;
T416:;
	if((symbol_value(VV[33]))==Cnil){
	goto T423;}
	(base[0]->c.c_car)= get((V165),VV[34],Cnil);
	if(((base[0]->c.c_car))==Cnil){
	goto T419;}
	goto T421;
goto T423;
T423:;
	(base[0]->c.c_car)= get((V165),VV[35],Cnil);
	if(((base[0]->c.c_car))==Cnil){
	goto T419;}
goto T421;
T421:;
	{register object V172;
	object V173;
	V172= (base[0]->c.c_car);
	V173= car((V172));
goto T430;
T430:;
	if(!(endp_prop((V172)))){
	goto T431;}
	goto T419;
goto T431;
T431:;
	V168= (*(LnkLI104))((V173),(V166),(V167));
	if(((V168))==Cnil){
	goto T435;}
	{object V174 = (V168);
	VMR10(V174)}
goto T435;
T435:;
	V172= cdr((V172));
	V173= car((V172));
	goto T430;}
goto T419;
T419:;
	(base[0]->c.c_car)= get((V165),VV[36],Cnil);
	if(((base[0]->c.c_car))==Cnil){
	goto T444;}
	{register object V175;
	object V176;
	V175= (base[0]->c.c_car);
	V176= car((V175));
goto T451;
T451:;
	if(!(endp_prop((V175)))){
	goto T452;}
	goto T444;
goto T452;
T452:;
	V168= (*(LnkLI104))((V176),(V166),(V167));
	if(((V168))==Cnil){
	goto T456;}
	{object V177 = (V168);
	VMR10(V177)}
goto T456;
T456:;
	V175= cdr((V175));
	V176= car((V175));
	goto T451;}
goto T444;
T444:;
	{register object V178;
	object V179;
	V178= symbol_value(VV[37]);
	V179= car((V178));
goto T469;
T469:;
	if(!(endp_prop((V178)))){
	goto T470;}
	goto T465;
goto T470;
T470:;
	if(!((car((V179)))==((V165)))){
	goto T474;}
	V168= (*(LnkLI104))(cdr((V179)),(V166),(V167));
	if(((V168))==Cnil){
	goto T474;}
	{object V180 = (V168);
	VMR10(V180)}
goto T474;
T474:;
	V178= cdr((V178));
	V179= car((V178));
	goto T469;}
goto T465;
T465:;
	(base[0]->c.c_car)= get((V165),VV[38],Cnil);
	if(((base[0]->c.c_car))==Cnil){
	goto T485;}
	if(!(type_of((base[0]->c.c_car))==t_cons)){
	goto T492;}
	if(!(type_of(car((base[0]->c.c_car)))==t_fixnum)){
	goto T492;}
	{object V181;
	V182 = make_fixnum((long)length((V166)));
	V181= (number_compare(V182,car((base[0]->c.c_car)))>=0?Ct:Cnil);
	(base[0]->c.c_car)= cdr((base[0]->c.c_car));
	if(((V181))==Cnil){
	goto T485;}
	goto T490;}
goto T492;
T492:;
goto T490;
T490:;
	base[1]= make_fixnum((long)length((V166)));
	base[2]= VV[39];
	base[3]= Ct;
	vs_top=(vs_base=base+1)+3;
	Lmake_list();
	vs_top=sup;
	V183= vs_base[0];
	V184= 
	make_cclosure_new(LC27,Cnil,base[0],Cdata);
	{object V185 = list(4,V183,Ct,small_fixnum(3),V184);
	VMR10(V185)}
goto T485;
T485:;
	{object V186 = Cnil;
	VMR10(V186)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INLINE-TYPE-MATCHES	*/

static object LI11(V190,V191,V192)

register object V190;object V191;object V192;
{	 VMB11 VMS11 VMV11
goto TTL;
TTL:;
	{register object V193;
	V193= Cnil;
	if(type_of(caddr((V190)))==t_fixnum){
	goto T505;}
	base[0]= (V190);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk105)();
	vs_top=sup;
goto T505;
T505:;
	{register object x= VV[40],V194= car((V190));
	while(!endp(V194))
	if(eql(x,V194->c.c_car)){
	goto T511;
	}else V194=V194->c.c_cdr;
	goto T509;}
goto T511;
T511:;
	{object V195 = Cnil;
	VMR11(V195)}
goto T509;
T509:;
	{register object V196;
	V196= car((V190));
	{register object V197;
	register object V198;
	V197= (V191);
	V198= car((V197));
goto T520;
T520:;
	if(!(endp_prop((V197)))){
	goto T521;}
	if(!(equal((V196),VV[41]))){
	goto T524;}
	goto T515;
goto T524;
T524:;
	if(!(endp_prop((V196)))){
	goto T513;}
	goto T515;
goto T521;
T521:;
	if(!(endp_prop((V196)))){
	goto T527;}
	goto T513;
goto T527;
T527:;
	if(!(equal((V196),VV[42]))){
	goto T530;}
	V196= VV[43];
goto T530;
T530:;
	if(!((car((V196)))==(VV[44]))){
	goto T536;}
	if(((*(LnkLI106))(VV[45],(V198)))==Cnil){
	goto T539;}
	V193= make_cons(VV[45],(V193));
	goto T534;
goto T539;
T539:;
	if(((*(LnkLI106))(VV[46],(V198)))==Cnil){
	goto T543;}
	V193= make_cons(VV[46],(V193));
	goto T534;
goto T543;
T543:;
	if(((*(LnkLI106))(VV[47],(V198)))==Cnil){
	goto T547;}
	V193= make_cons(VV[47],(V193));
	goto T534;
goto T547;
T547:;
	goto T513;
goto T536;
T536:;
	if(((*(LnkLI106))(car((V196)),(V198)))==Cnil){
	goto T551;}
	V193= make_cons(car((V196)),(V193));
	goto T534;
goto T551;
T551:;
	goto T513;
goto T534;
T534:;
	{register object V199;
	V199= car((V196));
	V196= cdr((V196));}
	V197= cdr((V197));
	V198= car((V197));
	goto T520;}}
goto T515;
T515:;
	if(((*(LnkLI106))(cadr((V190)),(V192)))==Cnil){
	goto T513;}
	V200= reverse((V193));
	{object V201 = make_cons(/* INLINE-ARGS */V200,cdr((V190)));
	VMR11(V201)}
goto T513;
T513:;
	{object V202 = Cnil;
	VMR11(V202)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function NEED-TO-PROTECT	*/

static object LI12(V205,V206)

object V205;object V206;
{	 VMB12 VMS12 VMV12
goto TTL;
TTL:;
	{register object V207;
	V207= Cnil;
	{register object V208;
	register object V209;
	V208= (V205);
	V209= (V206);
goto T566;
T566:;
	if(!(endp_prop((V208)))){
	goto T567;}
	{object V210 = Cnil;
	VMR12(V210)}
goto T567;
T567:;
	{register object V211;
	V211= car((V208));
	{object V212= car((V211));
	if((V212!= VV[14]))goto T573;
	goto T571;
goto T573;
T573:;
	if((V212!= VV[1]))goto T574;
	if(((*(LnkLI75))(caaddr((V211)),cdr((V208))))!=Cnil){
	goto T575;}
	V214= structure_ref(caaddr((V211)),VV[1],1);
	{register object x= /* INLINE-ARGS */V214,V213= VV[48];
	while(!endp(V213))
	if(eql(x,V213->c.c_car)){
	goto T579;
	}else V213=V213->c.c_cdr;
	goto T571;}
goto T579;
T579:;
	V215= car((V209));
	V216= structure_ref(caaddr((V211)),VV[1],1);
	if((/* INLINE-ARGS */V215)==(/* INLINE-ARGS */V216)){
	goto T571;}
goto T575;
T575:;
	{object V217 = Ct;
	VMR12(V217)}
goto T574;
T574:;
	if((V212!= VV[82]))goto T581;
	{register object V218;
	V218= caddr((V211));
	if(((*(LnkLI83))((V218)))==Cnil){
	goto T583;}
	V219= cadddr((V211));
	V220= structure_ref(cadr((V211)),VV[0],2);
	V207= (*(LnkLI84))((V218),/* INLINE-ARGS */V219,/* INLINE-ARGS */V220);
	if(((V207))==Cnil){
	goto T583;}
	base[0]= small_fixnum(0);
	base[1]= caddr((V207));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T583;}
	base[0]= small_fixnum(1);
	base[1]= caddr((V207));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T583;}
	base[0]= small_fixnum(4);
	base[1]= caddr((V207));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T583;}
	{register object x= cadr((V207)),V221= VV[49];
	while(!endp(V221))
	if(eql(x,V221->c.c_car)){
	goto T603;
	}else V221=V221->c.c_cdr;
	goto T601;}
goto T603;
T603:;
	if(!((car((V209)))==(cadr((V207))))){
	goto T583;}
goto T601;
T601:;
	if(((*(LnkLI87))(cadddr((V211)),car((V207))))==Cnil){
	goto T571;}
goto T583;
T583:;
	{object V222 = Ct;
	VMR12(V222)}}
goto T581;
T581:;
	if((V212!= VV[96]))goto T606;
	V223= make_cons(caddr((V211)),Cnil);
	if(((*(LnkLI87))(/* INLINE-ARGS */V223,VV[50]))==Cnil){
	goto T571;}
	{object V224 = Ct;
	VMR12(V224)}
goto T606;
T606:;
	{object V225 = Ct;
	VMR12(V225)}}}
goto T571;
T571:;
	V208= cdr((V208));
	V209= cdr((V209));
	goto T566;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-C-PUSH	*/

static object LI13()

{	 VMB13 VMS13 VMV13
goto TTL;
TTL:;
	if((symbol_value(VV[9]))==Cnil){
	goto T614;}
	vs_base=vs_top;
	(void) (*Lnk78)();
	vs_top=sup;
	{object V226;
	setq(VV[4],number_plus(symbol_value(VV[4]),small_fixnum(1)));
	V226= symbol_value(VV[4]);
	princ_char(123,VV[5]);
	(void)((*(LnkLI76))(symbol_value(VV[51])));
	princ_str("object V",VV[5]);
	(void)((*(LnkLI76))((V226)));
	princ_char(59,VV[5]);
	{object V227 = list(2,VV[6],(V226));
	VMR13(V227)}}
goto T614;
T614:;
	{object V228 = list(2,VV[12],(*(LnkLI94))());
	VMR13(V228)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLOSE-INLINE-BLOCKS	*/

static object LI14()

{	 VMB14 VMS14 VMV14
goto TTL;
TTL:;
	{register object V229;
	V229= symbol_value(VV[2]);
	if(!(type_of((V229))==t_cons)){
	goto T626;}
	if(!(eql(cdr((V229)),VV[52]))){
	goto T629;}
	princ_str("restore_avma;",VV[5]);
goto T629;
T629:;
	V229= car((V229));
goto T626;
T626:;
	{register long V230;
	register long V231;
	V230= fix((V229));
	V231= 0;
goto T637;
T637:;
	if(!((V231)>=(V230))){
	goto T638;}
	{object V232 = Cnil;
	VMR14(V232)}
goto T638;
T638:;
	princ_char(125,VV[5]);
	V231= (long)(V231)+1;
	goto T637;}}
	return Cnil;
}
/*	function definition for WT-INLINE-LOC	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	{register object V233;
	object V234;
	check_arg(2);
	V233=(base[0]);
	V234=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{register long V235;
	long V236;
	V235= 0;
	V236= -1;
	if(!(type_of((V233))==t_string)){
	goto T650;}
	base[2]= elt((V233),0);
	base[3]= VV[25];
	vs_top=(vs_base=base+2)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T652;}
	V235= 1;
goto T660;
T660:;
	base[2]= elt((V233),V235);
	base[3]= VV[26];
	vs_top=(vs_base=base+2)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T661;}
	V235= (long)(V235)+(1);
	goto T652;
goto T661;
T661:;
	V235= (long)(V235)+(1);
	goto T660;
goto T652;
T652:;
	{long V237;
	V237= (long)length((V233));
goto T674;
T674:;
	if(!((V235)>=(V237))){
	goto T675;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
goto T675;
T675:;
	{unsigned char V238;
	V238= char_code(elt((V233),V235));
	base[2]= code_char(V238);
	base[3]= VV[53];
	vs_top=(vs_base=base+2)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T682;}
	{register object V239;
	register object V240;
	V239= elt((V233),(long)(V235)+1);
	V240= small_fixnum(0);
	if(!(eql((V239),VV[54]))){
	goto T689;}
	if(!((V236)>=(0))){
	goto T691;}
	V241 = make_fixnum(V236);
	V242= one_plus(V241);
	V243 = make_fixnum((long)length((V234)));
	if(!(number_compare(/* INLINE-ARGS */V242,V243)<0)){
	goto T691;}
	princ_char(44,VV[5]);
goto T691;
T691:;
	{register object V244;
	V245 = make_fixnum(V236);
	V246= one_plus(V245);
	V244= nthcdr(fixint(/* INLINE-ARGS */V246),(V234));
goto T699;
T699:;
	if(((V244))!=Cnil){
	goto T700;}
	goto T686;
goto T700;
T700:;
	base[2]= car((V244));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk88)();
	vs_top=sup;
	if((cdr((V244)))==Cnil){
	goto T706;}
	princ_char(44,VV[5]);
goto T706;
T706:;
	V244= cdr((V244));
	goto T699;}
goto T689;
T689:;
	base[2]= (V239);
	base[3]= small_fixnum(10);
	vs_top=(vs_base=base+2)+2;
	Ldigit_char_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T686;}
	base[2]= (V239);
	vs_top=(vs_base=base+2)+1;
	Lchar_code();
	vs_top=sup;
	V247= vs_base[0];
	V248 = make_fixnum((long)(48));
	V240= number_minus(V247,V248);
	V249 = make_fixnum((long)length((V233)));
	V250 = make_fixnum(V235);
	V251= number_plus(V250,small_fixnum(2));
	if(!(number_compare(V249,/* INLINE-ARGS */V251)>0)){
	goto T721;}
	V252 = make_fixnum(V235);
	V253= number_plus(V252,small_fixnum(2));
	V239= elt((V233),fixint(/* INLINE-ARGS */V253));
	base[2]= (V239);
	vs_top=(vs_base=base+2)+1;
	Ldigit_char_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T721;}
	V254= number_times((V240),small_fixnum(10));
	base[2]= (V239);
	vs_top=(vs_base=base+2)+1;
	Lchar_code();
	vs_top=sup;
	V255= vs_base[0];
	V256 = make_fixnum((long)(48));
	V257= number_minus(V255,V256);
	V240= number_plus(/* INLINE-ARGS */V254,/* INLINE-ARGS */V257);
	V235= (long)(V235)+(1);
goto T721;
T721:;
	V258 = make_fixnum(V236);
	if(!(number_compare((V240),V258)>=0)){
	goto T734;}
	V236= fix((V240));
goto T734;
T734:;
	base[2]= nth(fixint((V240)),(V234));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk88)();
	vs_top=sup;}
goto T686;
T686:;
	V235= (long)(V235)+(2);
	goto T679;
goto T682;
T682:;
	(void)(princ(code_char(V238),symbol_value(VV[5])));
	V235= (long)(V235)+(1);}
goto T679;
T679:;
	goto T674;}
goto T650;
T650:;
	base[2]= (V233);
	{object V259;
	V259= (V234);
	 vs_top=base+3;
	 while(!endp(V259))
	 {vs_push(car(V259));V259=cdr(V259);}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	return;}
	}
}
/*	function definition for WT-INLINE	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{object V260;
	object V261;
	object V262;
	check_arg(3);
	V260=(base[0]);
	V261=(base[1]);
	V262=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	base[3]= (V261);
	base[4]= (V262);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk107)();
	return;
	}
}
/*	local entry for function WT-INLINE-COND	*/

static object LI17(V266,V267,V268)

object V266;object V267;object V268;
{	 VMB17 VMS17 VMV17
goto TTL;
TTL:;
	princ_char(40,VV[5]);
	base[0]= (V267);
	base[1]= (V268);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_str("?Ct:Cnil)",VV[5]);
	{object V269 = Cnil;
	VMR17(V269)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-INLINE-FIXNUM	*/

static object LI18(V273,V274,V275)

object V273;object V274;object V275;
{	 VMB18 VMS18 VMV18
goto TTL;
TTL:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[56]))==0)){
	goto T754;}
	princ_str("CMP",VV[5]);
goto T754;
T754:;
	princ_str("make_fixnum((long)",VV[5]);
	base[0]= (V274);
	base[1]= (V275);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_char(41,VV[5]);
	{object V276 = Cnil;
	VMR18(V276)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WT-INLINE-INTEGER	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{object V277;
	object V278;
	object V279;
	check_arg(3);
	V277=(base[0]);
	V278=(base[1]);
	V279=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	princ_str("make_integer(",VV[5]);
	base[3]= (V278);
	base[4]= (V279);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_char(41,VV[5]);
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local entry for function WT-INLINE-CHARACTER	*/

static object LI20(V283,V284,V285)

object V283;object V284;object V285;
{	 VMB20 VMS20 VMV20
goto TTL;
TTL:;
	princ_str("code_char(",VV[5]);
	base[0]= (V284);
	base[1]= (V285);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_char(41,VV[5]);
	{object V286 = Cnil;
	VMR20(V286)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-INLINE-LONG-FLOAT	*/

static object LI21(V290,V291,V292)

object V290;object V291;object V292;
{	 VMB21 VMS21 VMV21
goto TTL;
TTL:;
	princ_str("make_longfloat(",VV[5]);
	base[0]= (V291);
	base[1]= (V292);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_char(41,VV[5]);
	{object V293 = Cnil;
	VMR21(V293)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-INLINE-SHORT-FLOAT	*/

static object LI22(V297,V298,V299)

object V297;object V298;object V299;
{	 VMB22 VMS22 VMV22
goto TTL;
TTL:;
	princ_str("make_shortfloat(",VV[5]);
	base[0]= (V298);
	base[1]= (V299);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_char(41,VV[5]);
	{object V300 = Cnil;
	VMR22(V300)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ARGS-CAUSE-SIDE-EFFECT	*/

static object LI23(V302)

object V302;
{	 VMB23 VMS23 VMV23
goto TTL;
TTL:;
	{register object V303;
	V303= Cnil;
	{register object V304;
	register object V305;
	V304= (V302);
	V305= car((V304));
goto T792;
T792:;
	if(!(endp_prop((V304)))){
	goto T793;}
	{object V306 = Cnil;
	VMR23(V306)}
goto T793;
T793:;
	{object V307= car((V305));
	if((V307!= VV[14])
	&& (V307!= VV[1])
	&& (V307!= VV[96]))goto T798;
	goto T797;
goto T798;
T798:;
	if((V307!= VV[82]))goto T799;
	{register object V308;
	V308= caddr((V305));
	if(((*(LnkLI83))((V308)))==Cnil){
	goto T801;}
	V309= cadddr((V305));
	V310= structure_ref(cadr((V305)),VV[0],2);
	V303= (*(LnkLI84))((V308),/* INLINE-ARGS */V309,/* INLINE-ARGS */V310);
	if(((V303))==Cnil){
	goto T801;}
	base[1]= (V303);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk105)();
	vs_top=sup;
	base[1]= small_fixnum(1);
	base[2]= caddr((V303));
	vs_top=(vs_base=base+1)+2;
	Llogbitp();
	vs_top=sup;
	V311= vs_base[0];
	if((V311)==Cnil){
	goto T797;}
goto T801;
T801:;
	{object V312 = Ct;
	VMR23(V312)}}
goto T799;
T799:;
	{object V313 = Ct;
	VMR23(V313)}}
goto T797;
T797:;
	V304= cdr((V304));
	V305= car((V304));
	goto T792;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LIST-INLINE	*/

static object LI24(va_alist)
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB24 VMS24 VMV24
	{object V314;
	Vcs[0]=Vcs[0];
	va_start(ap);
	narg= narg - 0;
	V315 = list_vector(narg,ap);
	V314= V315;
	{object V316;
	object V317;
	V316= Cnil;
	V317= make_fixnum((long)length((V314)));
	if(type_of(symbol_value(VV[13]))==t_cons){
	goto T825;}
	V316= Cnil;
	goto T824;
goto T825;
T825:;
	if((car(symbol_value(VV[13])))==(VV[1])){
	goto T827;}
	V316= Cnil;
	goto T824;
goto T827;
T827:;
	V318= structure_ref(cadr(symbol_value(VV[13])),VV[1],5);
	V316= ((/* INLINE-ARGS */V318)==(VV[57])?Ct:Cnil);
goto T824;
T824:;
	if(((V316))==Cnil){
	goto T822;}
	princ_str("(ALLOCA_CONS(",VV[5]);
	(void)((*(LnkLI76))((V317)));
	princ_str("),ON_STACK_LIST(",VV[5]);
	(void)((*(LnkLI76))((V317)));
	goto T820;
goto T822;
T822:;
	princ_str("list(",VV[5]);
	V319 = make_fixnum((long)length((V314)));
	(void)((*(LnkLI76))(V319));
goto T820;
T820:;
	{register object V320;
	register object V321;
	V320= (V314);
	V321= car((V320));
goto T839;
T839:;
	if(!(endp_prop((V320)))){
	goto T840;}
	goto T835;
goto T840;
T840:;
	(void)((*(LnkLI76))(VV[58]));
	(void)((*(LnkLI76))((V321)));
	V320= cdr((V320));
	V321= car((V320));
	goto T839;}
goto T835;
T835:;
	(void)((*(LnkLI76))(VV[59]));
	if(((V316))==Cnil){
	goto T855;}
	(void)((*(LnkLI76))(VV[59]));
	{object V322 = Cnil;
	VMR24(V322)}
goto T855;
T855:;
	{object V323 = Cnil;
	VMR24(V323)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LIST*-INLINE	*/

static object LI25(va_alist)
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB25 VMS25 VMV25
	{register object V324;
	Vcs[0]=Vcs[0];
	va_start(ap);
	narg= narg - 0;
	V325 = list_vector(narg,ap);
	V324= V325;switch((long)length((V324))){
	case 1:
goto T859;
T859:;
	(void)((*(LnkLI76))(car((V324))));
	{object V326 = Cnil;
	VMR25(V326)}
	case 2:
goto T860;
T860:;
	princ_str("make_cons(",VV[5]);
	(void)((*(LnkLI76))(car((V324))));
	princ_char(44,VV[5]);
	(void)((*(LnkLI76))(cadr((V324))));
	princ_char(41,VV[5]);
	{object V327 = Cnil;
	VMR25(V327)}
	default:
goto T861;
T861:;
	princ_str("listA(",VV[5]);
	V328 = make_fixnum((long)length((V324)));
	(void)((*(LnkLI76))(V328));
	{register object V329;
	register object V330;
	V329= (V324);
	V330= car((V329));
goto T876;
T876:;
	if(!(endp_prop((V329)))){
	goto T877;}
	goto T872;
goto T877;
T877:;
	(void)((*(LnkLI76))(VV[58]));
	(void)((*(LnkLI76))((V330)));
	V329= cdr((V329));
	V330= car((V329));
	goto T876;}
goto T872;
T872:;
	(void)((*(LnkLI76))(VV[59]));
	{object V331 = Cnil;
	VMR25(V331)}
	{object V332 = Cnil;
	VMR25(V332)}}
	{object V333 = Cnil;
	VMR25(V333)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function DEFSYSFUN	*/

static object LI26(V340,V341,V342,V343,V344,V345)

register object V340;object V341;object V342;register object V343;object V344;object V345;
{	 VMB26 VMS26 VMV26
goto TTL;
TTL:;
	if(((V341))==Cnil){
	goto T890;}
	(void)(putprop((V340),(V341),VV[60]));
goto T890;
T890:;
	if(((V342))==Cnil){
	goto T893;}
	{object V347;
	object V348= (V342);
	if(endp(V348)){
	V346= Cnil;
	goto T896;}
	base[0]=V347=MMcons(Cnil,Cnil);
goto T897;
T897:;
	if(!(((V348->c.c_car))==(VV[61]))){
	goto T900;}
	(V347->c.c_car)= VV[61];
	goto T898;
goto T900;
T900:;
	(V347->c.c_car)= (*(LnkLI108))((V348->c.c_car));
goto T898;
T898:;
	V348=MMcdr(V348);
	if(endp(V348)){
	V346= base[0];
	goto T896;}
	V347=MMcdr(V347)=MMcons(Cnil,Cnil);
	goto T897;}
goto T896;
T896:;
	(void)(putprop((V340),V346,VV[62]));
goto T893;
T893:;
	if(((V343))==Cnil){
	goto T902;}
	{register object V350;
	if(!(type_of((V343))!=t_cons)){
	goto T908;}
	V351= make_cons((V343),Cnil);
	goto T906;
goto T908;
T908:;
	V351= (V343);
goto T906;
T906:;
	V350= (*(LnkLI109))(V351);
	if(!(type_of((V350))==t_cons)){
	goto T911;}
	goto T910;
goto T911;
T911:;
	V350= make_cons((V350),Cnil);
goto T910;
T910:;
	if((cdr((V350)))!=Cnil){
	goto T916;}
	V352= car((V350));
	goto T914;
goto T916;
T916:;
	V352= make_cons(VV[63],(V350));
goto T914;
T914:;
	(void)(putprop((V340),V352,VV[64]));}
goto T902;
T902:;
	if(((V344))==Cnil){
	goto T918;}
	(void)(putprop((V340),Ct,VV[65]));
goto T918;
T918:;
	if(((V345))==Cnil){
	goto T922;}
	{object V353 = putprop((V340),Ct,VV[66]);
	VMR26(V353)}
goto T922;
T922:;
	{object V354 = Cnil;
	VMR26(V354)}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC27(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	{object V355;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V355=(base[0]);
	vs_top=sup;
	princ_str("(VFUN_NARGS=",VV[5]);
	V356 = make_fixnum((long)length((V355)));
	(void)((*(LnkLI76))(V356));
	princ_char(44,VV[5]);
	base[1]= (base0[0]->c.c_car);
	base[2]= (V355);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_char(41,VV[5]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static object  LnkTLI109(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[109],(void **)&LnkLI109,1,ap);va_end(ap);return V1;} /* FUNCTION-RETURN-TYPE */
static object  LnkTLI108(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[108],(void **)&LnkLI108,1,ap);va_end(ap);return V1;} /* TYPE-FILTER */
static void LnkT107(){ call_or_link(VV[107],(void **)&Lnk107);} /* WT-INLINE-LOC */
static object  LnkTLI106(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[106],(void **)&LnkLI106,2,ap);va_end(ap);return V1;} /* TYPE>= */
static void LnkT105(){ call_or_link(VV[105],(void **)&Lnk105);} /* FIX-OPT */
static object  LnkTLI104(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[104],(void **)&LnkLI104,3,ap);va_end(ap);return V1;} /* INLINE-TYPE-MATCHES */
static object  LnkTLI103(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[103],(void **)&LnkLI103,3,ap);va_end(ap);return V1;} /* ADD-FAST-LINK */
static object  LnkTLI102(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[102],(void **)&LnkLI102,ap);va_end(ap);return V1;} /* FAST-LINK-PROCLAIMED-TYPE-P */
static object  LnkTLI101(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[101],(void **)&LnkLI101,1,ap);va_end(ap);return V1;} /* INLINE-TYPE */
static object  LnkTLI100(){return call_proc0(VV[100],(void **)&LnkLI100);} /* BABOON */
static object  LnkTLI7(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[7],(void **)&LnkLI7,ap);va_end(ap);return V1;} /* INLINE-ARGS */
static object  LnkTLI99(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[99],(void **)&LnkLI99,ap);va_end(ap);return V1;} /* MAKE-VAR */
static object  LnkTLI97(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[97],(void **)&LnkLI97,2,ap);va_end(ap);return V1;} /* COERCE-LOC-STRUCTURE-REF */
static object  LnkTLI95(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[95],(void **)&LnkLI95,1,ap);va_end(ap);return V1;} /* C2EXPR* */
static object  LnkTLI94(){return call_proc0(VV[94],(void **)&LnkLI94);} /* VS-PUSH */
static void LnkT93(){ call_or_link(VV[93],(void **)&Lnk93);} /* WT-SHORT-FLOAT-LOC */
static void LnkT92(){ call_or_link(VV[92],(void **)&Lnk92);} /* WT-LONG-FLOAT-LOC */
static void LnkT91(){ call_or_link(VV[91],(void **)&Lnk91);} /* WT-CHARACTER-LOC */
static void LnkT90(){ call_or_link(VV[90],(void **)&Lnk90);} /* WT-INTEGER-LOC */
static void LnkT89(){ call_or_link(VV[89],(void **)&Lnk89);} /* WT-FIXNUM-LOC */
static void LnkT88(){ call_or_link(VV[88],(void **)&Lnk88);} /* WT-LOC */
static object  LnkTLI87(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[87],(void **)&LnkLI87,2,ap);va_end(ap);return V1;} /* NEED-TO-PROTECT */
static object  LnkTLI86(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[86],(void **)&LnkLI86,2,ap);va_end(ap);return V1;} /* GET-INLINE-LOC */
static void LnkT85(){ call_or_link(VV[85],(void **)&Lnk85);} /* SAVE-AVMA */
static object  LnkTLI84(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[84],(void **)&LnkLI84,3,ap);va_end(ap);return V1;} /* GET-INLINE-INFO */
static object  LnkTLI83(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[83],(void **)&LnkLI83,1,ap);va_end(ap);return V1;} /* INLINE-POSSIBLE */
static object  LnkTLI81(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[81],(void **)&LnkLI81,ap);va_end(ap);return V1;} /* CS-PUSH */
static object  LnkTLI80(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[80],(void **)&LnkLI80,2,ap);va_end(ap);return V1;} /* WT-VAR */
static object  LnkTLI79(){return call_proc0(VV[79],(void **)&LnkLI79);} /* WT-C-PUSH */
static void LnkT78(){ call_or_link(VV[78],(void **)&Lnk78);} /* INC-INLINE-BLOCKS */
static object  LnkTLI77(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[77],(void **)&LnkLI77,1,ap);va_end(ap);return V1;} /* REP-TYPE */
static object  LnkTLI76(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[76],(void **)&LnkLI76,1,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI75(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[75],(void **)&LnkLI75,2,ap);va_end(ap);return V1;} /* ARGS-INFO-CHANGED-VARS */
static object  LnkTLI74(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[74],(void **)&LnkLI74,2,ap);va_end(ap);return V1;} /* COERCE-LOC */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

