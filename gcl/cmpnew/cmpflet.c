
#include "cmpinclude.h"
#include "cmpflet.h"
init_cmpflet(){do_init(VV);}
/*	local entry for function MAKE-FUN	*/

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
	narg= narg - 0;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +0,&LI1key,ap);
	V1=(Vcs[0]);
	V2=(Vcs[1]);
	V3=(Vcs[2]);
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
	VMR1(V6)}}
	}}
/*	local entry for function C1FLET	*/

static object LI2(V8)

object V8;
{	 VMB2 VMS2 VMV2
	bds_check;
TTL:;
	{object V9;
	object V10;
	object V11;
	object V12;
	object V13;
	object V14;
	object V15;
	object V16;
	object V17;
	V9= Cnil;
	V10= Cnil;
	V11= Cnil;
	V12= Cnil;
	V13= Cnil;
	V14= Cnil;
	V15= Cnil;
	V16= Cnil;
	V17= Cnil;
	if(!(endp((V8)))){
	goto T16;}
	(void)((*(LnkLI42))(VV[1],small_fixnum(1),small_fixnum(0)));
T16:;
	bds_bind(VV[2],symbol_value(VV[2]));
	{register object V18;
	register object V19;
	V18= car((V8));
	V19= car((V18));
T24:;
	if(!(endp((V18)))){
	goto T25;}
	goto T20;
T25:;
	if(endp((V19))){
	goto T30;}
	if(!(type_of(car((V19)))==t_symbol)){
	goto T30;}
	if(!(endp(cdr((V19))))){
	goto T29;}
T30:;
	(void)((VFUN_NARGS=2,(*(LnkLI43))(VV[3],(V19))));
T29:;
	{object V20;
	V20= (VFUN_NARGS=6,(*(LnkLI44))(VV[4],car((V19)),VV[5],Cnil,VV[6],Cnil));
	(VV[2]->s.s_dbind)= make_cons((V20),(VV[2]->s.s_dbind));
	V21= list(2,(V20),cdr((V19)));
	V15= make_cons(/* INLINE-ARGS */V21,(V15));}
	V18= cdr((V18));
	V19= car((V18));
	goto T24;}
T20:;
	base[1]= cdr((V8));
	base[2]= Ct;
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	if(vs_base<vs_top){
	V9= vs_base[0];
	vs_base++;
	}else{
	V9= Cnil;}
	if(vs_base<vs_top){
	V10= vs_base[0];
	vs_base++;
	}else{
	V10= Cnil;}
	if(vs_base<vs_top){
	V11= vs_base[0];
	vs_base++;
	}else{
	V11= Cnil;}
	if(vs_base<vs_top){
	V12= vs_base[0];
	vs_base++;
	}else{
	V12= Cnil;}
	if(vs_base<vs_top){
	V13= vs_base[0];
	}else{
	V13= Cnil;}
	vs_top=sup;
	bds_bind(VV[7],symbol_value(VV[7]));
	(void)((*(LnkLI46))((V10)));
	(void)((*(LnkLI47))(Cnil,(V11),(V12)));
	V9= (*(LnkLI48))((V13),(V9));
	bds_unwind1;
	base[1]= cadr((V9));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk49)();
	vs_top=sup;
	V14= vs_base[0];
	bds_unwind1;
	{register object V22;
	register object V23;
	V22= reverse((V15));
	V23= car((V22));
T60:;
	if(!(endp((V22)))){
	goto T61;}
	goto T56;
T61:;
	if((structure_ref(car((V23)),VV[0],2))==Cnil){
	goto T65;}
	base[2]= make_cons(VV[8],symbol_value(VV[7]));
	base[3]= make_cons(VV[8],symbol_value(VV[2]));
	base[4]= make_cons(VV[8],symbol_value(VV[9]));
	base[5]= make_cons(VV[8],symbol_value(VV[10]));
	bds_bind(VV[7],base[2]);
	bds_bind(VV[2],base[3]);
	bds_bind(VV[9],base[4]);
	bds_bind(VV[10],base[5]);
	{object V24;
	V25= cadr((V23));
	V26= structure_ref(car((V23)),VV[0],0);
	V24= (VFUN_NARGS=2,(*(LnkLI50))(/* INLINE-ARGS */V25,/* INLINE-ARGS */V26));
	(void)((*(LnkLI51))((V14),cadr((V24))));
	V27= list(2,car((V23)),(V24));
	V17= make_cons(/* INLINE-ARGS */V27,(V17));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}
T65:;
	if((structure_ref(car((V23)),VV[0],1))==Cnil){
	goto T75;}
	base[2]= make_cons(VV[11],symbol_value(VV[9]));
	base[3]= make_cons(VV[11],symbol_value(VV[10]));
	base[4]= make_cons(VV[11],symbol_value(VV[7]));
	bds_bind(VV[9],base[2]);
	bds_bind(VV[10],base[3]);
	bds_bind(VV[7],base[4]);
	{object V28;
	V29= cadr((V23));
	V30= structure_ref(car((V23)),VV[0],0);
	V28= (VFUN_NARGS=2,(*(LnkLI50))(/* INLINE-ARGS */V29,/* INLINE-ARGS */V30));
	(void)((*(LnkLI51))((V14),cadr((V28))));
	V31= list(2,car((V23)),(V28));
	V16= make_cons(/* INLINE-ARGS */V31,(V16));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}
T75:;
	if((structure_ref(car((V23)),VV[0],1))!=Cnil){
	goto T85;}
	if((structure_ref(car((V23)),VV[0],2))==Cnil){
	goto T84;}
T85:;
	V32= car((V23));
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	(void)(structure_set(/* INLINE-ARGS */V32,VV[0],3,symbol_value(VV[12])));
T84:;
	V22= cdr((V22));
	V23= car((V22));
	goto T60;}
T56:;
	if(((V16))!=Cnil){
	goto T95;}
	if(((V17))==Cnil){
	goto T96;}
T95:;
	V33= reverse((V16));
	{object V34 = list(5,VV[1],(V14),/* INLINE-ARGS */V33,reverse((V17)),(V9));
	VMR2(V34)}
T96:;
	{object V35 = (V9);
	VMR2(V35)}}
}
/*	function definition for C2FLET	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	bds_check;
	{object V36;
	object V37;
	object V38;
	check_arg(3);
	V36=(base[0]);
	V37=(base[1]);
	V38=(base[2]);
	vs_top=sup;
TTL:;
	bds_bind(VV[13],symbol_value(VV[13]));
	bds_bind(VV[14],symbol_value(VV[14]));
	bds_bind(VV[15],symbol_value(VV[15]));
	{register object V39;
	object V40;
	V39= (V36);
	V40= car((V39));
T104:;
	if(!(endp((V39)))){
	goto T105;}
	goto T100;
T105:;
	(void)(structure_set(car((V40)),VV[0],4,symbol_value(VV[16])));{object V41;
	V41= (VV[14]->s.s_dbind);{object V42;
	V42= (VV[15]->s.s_dbind);
	V43= list(5,Cnil,V41,V42,car((V40)),cadr((V40)));
	setq(VV[17],make_cons(/* INLINE-ARGS */V43,symbol_value(VV[17])));}}
	V39= cdr((V39));
	V40= car((V39));
	goto T104;}
T100:;
	{register object V44;
	register object V45;
	V44= (V37);
	V45= car((V44));
T121:;
	if(!(endp((V44)))){
	goto T122;}
	goto T117;
T122:;
	if(((VV[14]->s.s_dbind))!=Cnil){
	goto T130;}
	V46= Cnil;
	goto T128;
T130:;
	V46= make_cons(small_fixnum(0),small_fixnum(0));
T128:;{object V47;
	V47= (VV[15]->s.s_dbind);
	V48= list(5,VV[18],V46,V47,car((V45)),cadr((V45)));
	setq(VV[17],make_cons(/* INLINE-ARGS */V48,symbol_value(VV[17])));}
	setq(VV[19],make_cons(car((V45)),symbol_value(VV[19])));
	{register object V49;
	V49= car((V45));
	V50= (*(LnkLI52))();
	(void)(structure_set((V49),VV[0],1,/* INLINE-ARGS */V50));
	princ_str("\n	",VV[20]);
	V51= structure_ref((V49),VV[0],1);
	(void)((*(LnkLI53))(/* INLINE-ARGS */V51));
	princ_str("=make_cclosure_new(LC",VV[20]);
	V52= structure_ref((V49),VV[0],3);
	(void)((*(LnkLI54))(/* INLINE-ARGS */V52));
	princ_str(",Cnil,",VV[20]);
	(void)((VFUN_NARGS=0,(*(LnkLI55))()));
	princ_str(",Cdata);",VV[20]);
	princ_str("\n	",VV[20]);
	V53= structure_ref((V49),VV[0],1);
	(void)((*(LnkLI53))(/* INLINE-ARGS */V53));
	princ_str("=MMcons(",VV[20]);
	V54= structure_ref((V49),VV[0],1);
	(void)((*(LnkLI53))(/* INLINE-ARGS */V54));
	princ_char(44,VV[20]);
	(void)((VFUN_NARGS=0,(*(LnkLI55))()));
	princ_str(");",VV[20]);
	V55= structure_ref((V49),VV[0],1);
	(void)((*(LnkLI56))(/* INLINE-ARGS */V55));
	V56= (*(LnkLI57))();
	(void)(structure_set((V49),VV[0],2,/* INLINE-ARGS */V56));}
	V44= cdr((V44));
	V45= car((V44));
	goto T121;}
T117:;
	base[6]= (V38);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk58)();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function C1LABELS	*/

static object LI4(V58)

object V58;
{	 VMB4 VMS4 VMV4
	bds_check;
TTL:;
	{object V59;
	object V60;
	object V61;
	object V62;
	object V63;
	object V64;
	object V65;
	object V66;
	object V67;
	object V68;
	register object V69;
	V59= Cnil;
	V60= Cnil;
	V61= Cnil;
	V62= Cnil;
	V63= Cnil;
	V64= Cnil;
	V65= Cnil;
	V66= Cnil;
	V67= Cnil;
	V68= Cnil;
	V69= Cnil;
	bds_bind(VV[2],symbol_value(VV[2]));
	if(!(endp((V58)))){
	goto T174;}
	(void)((*(LnkLI42))(VV[21],small_fixnum(1),small_fixnum(0)));
T174:;
	{object V70;
	register object V71;
	V70= car((V58));
	V71= car((V70));
T181:;
	if(!(endp((V70)))){
	goto T182;}
	goto T177;
T182:;
	if(endp((V71))){
	goto T187;}
	if(!(type_of(car((V71)))==t_symbol)){
	goto T187;}
	if(!(endp(cdr((V71))))){
	goto T186;}
T187:;
	(void)((VFUN_NARGS=2,(*(LnkLI43))(VV[22],(V71))));
T186:;
	{register object x= car((V71)),V72= (V68);
	while(!endp(V72))
	if(eql(x,V72->c.c_car)){
	goto T195;
	}else V72=V72->c.c_cdr;
	goto T193;}
T195:;
	(void)((VFUN_NARGS=2,(*(LnkLI43))(VV[23],car((V71)))));
T193:;
	V68= make_cons(car((V71)),(V68));
	{object V73;
	V73= (VFUN_NARGS=6,(*(LnkLI44))(VV[4],car((V71)),VV[5],Cnil,VV[6],Cnil));
	(VV[2]->s.s_dbind)= make_cons((V73),(VV[2]->s.s_dbind));
	V74= list(4,(V73),Cnil,Cnil,cdr((V71)));
	V65= make_cons(/* INLINE-ARGS */V74,(V65));}
	V70= cdr((V70));
	V71= car((V70));
	goto T181;}
T177:;
	V65= reverse((V65));
	base[1]= cdr((V58));
	base[2]= Ct;
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk45)();
	if(vs_base<vs_top){
	V59= vs_base[0];
	vs_base++;
	}else{
	V59= Cnil;}
	if(vs_base<vs_top){
	V60= vs_base[0];
	vs_base++;
	}else{
	V60= Cnil;}
	if(vs_base<vs_top){
	V61= vs_base[0];
	vs_base++;
	}else{
	V61= Cnil;}
	if(vs_base<vs_top){
	V62= vs_base[0];
	vs_base++;
	}else{
	V62= Cnil;}
	if(vs_base<vs_top){
	V63= vs_base[0];
	}else{
	V63= Cnil;}
	vs_top=sup;
	bds_bind(VV[7],symbol_value(VV[7]));
	(void)((*(LnkLI46))((V60)));
	(void)((*(LnkLI47))(Cnil,(V61),(V62)));
	V59= (*(LnkLI48))((V63),(V59));
	bds_unwind1;
	base[1]= cadr((V59));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk49)();
	vs_top=sup;
	V64= vs_base[0];
T223:;
	V69= Cnil;
	{register object V75;
	register object V76;
	V75= (V65);
	V76= car((V75));
T231:;
	if(!(endp((V75)))){
	goto T232;}
	goto T227;
T232:;
	if((structure_ref(car((V76)),VV[0],1))==Cnil){
	goto T236;}
	if((cadr((V76)))!=Cnil){
	goto T236;}
	V69= Ct;
	if(type_of(cdr(V76))!=t_cons)FEwrong_type_argument(Scons,cdr(V76));
	(cdr(V76))->c.c_car = Ct;
	(void)(cdr(V76));
	base[2]= make_cons(VV[11],symbol_value(VV[9]));
	base[3]= make_cons(VV[11],symbol_value(VV[10]));
	base[4]= make_cons(VV[11],symbol_value(VV[7]));
	bds_bind(VV[9],base[2]);
	bds_bind(VV[10],base[3]);
	bds_bind(VV[7],base[4]);
	{object V79;
	V80= cadddr((V76));
	V81= structure_ref(car((V76)),VV[0],0);
	V79= (VFUN_NARGS=2,(*(LnkLI50))(/* INLINE-ARGS */V80,/* INLINE-ARGS */V81));
	(void)((*(LnkLI51))((V64),cadr((V79))));
	V82= list(2,car((V76)),(V79));
	V66= make_cons(/* INLINE-ARGS */V82,(V66));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}
T236:;
	V75= cdr((V75));
	V76= car((V75));
	goto T231;}
T227:;
	if(((V69))!=Cnil){
	goto T224;}
	goto T221;
T224:;
	goto T223;
T221:;
T261:;
	V69= Cnil;
	{register object V83;
	register object V84;
	V83= (V65);
	V84= car((V83));
T269:;
	if(!(endp((V83)))){
	goto T270;}
	goto T265;
T270:;
	if((structure_ref(car((V84)),VV[0],2))==Cnil){
	goto T274;}
	if((caddr((V84)))!=Cnil){
	goto T274;}
	V69= Ct;
	if(type_of(cddr(V84))!=t_cons)FEwrong_type_argument(Scons,cddr(V84));
	(cddr(V84))->c.c_car = Ct;
	(void)(cddr(V84));
	base[2]= make_cons(VV[8],symbol_value(VV[7]));
	base[3]= make_cons(VV[8],(VV[2]->s.s_dbind));
	base[4]= make_cons(VV[8],symbol_value(VV[9]));
	base[5]= make_cons(VV[8],symbol_value(VV[10]));
	bds_bind(VV[7],base[2]);
	bds_bind(VV[2],base[3]);
	bds_bind(VV[9],base[4]);
	bds_bind(VV[10],base[5]);
	{object V87;
	V88= cadddr((V84));
	V89= structure_ref(car((V84)),VV[0],0);
	V87= (VFUN_NARGS=2,(*(LnkLI50))(/* INLINE-ARGS */V88,/* INLINE-ARGS */V89));
	(void)((*(LnkLI51))((V64),cadr((V87))));
	V90= list(2,car((V84)),(V87));
	V67= make_cons(/* INLINE-ARGS */V90,(V67));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;}
T274:;
	V83= cdr((V83));
	V84= car((V83));
	goto T269;}
T265:;
	if(((V69))!=Cnil){
	goto T262;}
	goto T259;
T262:;
	goto T261;
T259:;
	{object V91;
	object V92;
	V91= (V65);
	V92= car((V91));
T302:;
	if(!(endp((V91)))){
	goto T303;}
	goto T298;
T303:;
	if((structure_ref(car((V92)),VV[0],1))!=Cnil){
	goto T308;}
	if((structure_ref(car((V92)),VV[0],2))==Cnil){
	goto T307;}
T308:;
	V93= car((V92));
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	(void)(structure_set(/* INLINE-ARGS */V93,VV[0],3,symbol_value(VV[12])));
T307:;
	V91= cdr((V91));
	V92= car((V91));
	goto T302;}
T298:;
	if(((V66))!=Cnil){
	goto T318;}
	if(((V67))==Cnil){
	goto T319;}
T318:;
	V94= reverse((V66));
	{object V95 = list(5,VV[21],(V64),/* INLINE-ARGS */V94,reverse((V67)),(V59));
	bds_unwind1;
	VMR4(V95)}
T319:;
	{object V96 = (V59);
	bds_unwind1;
	VMR4(V96)}}
}
/*	function definition for C2LABELS	*/

static L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	bds_check;
	{object V97;
	object V98;
	object V99;
	check_arg(3);
	V97=(base[0]);
	V98=(base[1]);
	V99=(base[2]);
	vs_top=sup;
TTL:;
	bds_bind(VV[13],symbol_value(VV[13]));
	bds_bind(VV[14],symbol_value(VV[14]));
	{register object V100;
	object V101;
	V100= (V98);
	V101= car((V100));
T327:;
	if(!(endp((V100)))){
	goto T328;}
	goto T323;
T328:;
	{register object V102;
	V102= car((V101));
	V103= (*(LnkLI52))();
	(void)(structure_set((V102),VV[0],1,/* INLINE-ARGS */V103));
	princ_str("\n	",VV[20]);
	V104= structure_ref((V102),VV[0],1);
	(void)((*(LnkLI53))(/* INLINE-ARGS */V104));
	princ_str("=MMcons(Cnil,",VV[20]);
	(void)((VFUN_NARGS=0,(*(LnkLI55))()));
	princ_str(");",VV[20]);
	V105= structure_ref((V102),VV[0],1);
	(void)((*(LnkLI56))(/* INLINE-ARGS */V105));
	V106= (*(LnkLI57))();
	(void)(structure_set((V102),VV[0],2,/* INLINE-ARGS */V106));}
	V100= cdr((V100));
	V101= car((V100));
	goto T327;}
T323:;
	{register object V107;
	object V108;
	V107= (V97);
	V108= car((V107));
T352:;
	if(!(endp((V107)))){
	goto T353;}
	goto T348;
T353:;
	(void)(structure_set(car((V108)),VV[0],4,symbol_value(VV[16])));{object V109;
	V109= (VV[14]->s.s_dbind);{object V110;
	V110= symbol_value(VV[15]);
	V111= list(5,Cnil,V109,V110,car((V108)),cadr((V108)));
	setq(VV[17],make_cons(/* INLINE-ARGS */V111,symbol_value(VV[17])));}}
	V107= cdr((V107));
	V108= car((V107));
	goto T352;}
T348:;
	{register object V112;
	register object V113;
	V112= (V98);
	V113= car((V112));
T369:;
	if(!(endp((V112)))){
	goto T370;}
	goto T365;
T370:;
	if(((VV[14]->s.s_dbind))!=Cnil){
	goto T378;}
	V114= Cnil;
	goto T376;
T378:;
	V114= make_cons(small_fixnum(0),small_fixnum(0));
T376:;{object V115;
	V115= symbol_value(VV[15]);
	V116= list(5,VV[18],V114,V115,car((V113)),cadr((V113)));
	setq(VV[17],make_cons(/* INLINE-ARGS */V116,symbol_value(VV[17])));}
	setq(VV[19],make_cons(car((V113)),symbol_value(VV[19])));
	princ_str("\n	",VV[20]);
	V117= structure_ref(car((V113)),VV[0],1);
	(void)((*(LnkLI59))(/* INLINE-ARGS */V117));
	princ_str("=make_cclosure_new(LC",VV[20]);
	V118= structure_ref(car((V113)),VV[0],3);
	(void)((*(LnkLI54))(/* INLINE-ARGS */V118));
	princ_str(",Cnil,",VV[20]);
	(void)((VFUN_NARGS=0,(*(LnkLI55))()));
	princ_str(",Cdata);",VV[20]);
	V112= cdr((V112));
	V113= car((V112));
	goto T369;}
T365:;
	base[5]= (V99);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk58)();
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function C1MACROLET	*/

static object LI6(V120)

object V120;
{	 VMB6 VMS6 VMV6
	bds_check;
TTL:;
	{object V121;
	object V122;
	object V123;
	object V124;
	object V125;
	V121= Cnil;
	V122= Cnil;
	V123= Cnil;
	V124= Cnil;
	V125= Cnil;
	bds_bind(VV[2],symbol_value(VV[2]));
	bds_bind(VV[7],symbol_value(VV[7]));
	if(!(endp((V120)))){
	goto T402;}
	(void)((*(LnkLI42))(VV[24],small_fixnum(1),small_fixnum(0)));
T402:;
	{register object V126;
	register object V127;
	V126= car((V120));
	V127= car((V126));
T409:;
	if(!(endp((V126)))){
	goto T410;}
	goto T405;
T410:;
	if(endp((V127))){
	goto T415;}
	if(!(type_of(car((V127)))==t_symbol)){
	goto T415;}
	if(!(endp(cdr((V127))))){
	goto T414;}
T415:;
	(void)((VFUN_NARGS=2,(*(LnkLI43))(VV[25],(V127))));
T414:;
	V128= car((V127));
	V129= (*(LnkLI60))(car((V127)),cadr((V127)),cddr((V127)));
	V130= list(2,/* INLINE-ARGS */V128,caddr(/* INLINE-ARGS */V129));
	(VV[2]->s.s_dbind)= make_cons(/* INLINE-ARGS */V130,(VV[2]->s.s_dbind));
	V126= cdr((V126));
	V127= car((V126));
	goto T409;}
T405:;
	base[2]= cdr((V120));
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk45)();
	if(vs_base<vs_top){
	V121= vs_base[0];
	vs_base++;
	}else{
	V121= Cnil;}
	if(vs_base<vs_top){
	V122= vs_base[0];
	vs_base++;
	}else{
	V122= Cnil;}
	if(vs_base<vs_top){
	V123= vs_base[0];
	vs_base++;
	}else{
	V123= Cnil;}
	if(vs_base<vs_top){
	V124= vs_base[0];
	vs_base++;
	}else{
	V124= Cnil;}
	if(vs_base<vs_top){
	V125= vs_base[0];
	}else{
	V125= Cnil;}
	vs_top=sup;
	(void)((*(LnkLI46))((V122)));
	(void)((*(LnkLI47))(Cnil,(V123),(V124)));
	{object V131 = (*(LnkLI48))((V125),(V121));
	bds_unwind1;
	bds_unwind1;
	VMR6(V131)}}
}
/*	local entry for function C1LOCAL-FUN	*/

static object LI7(V133)

register object V133;
{	 VMB7 VMS7 VMV7
TTL:;
	{register object V134;
	V134= Cnil;
	{register object V135;
	register object V136;
	V135= symbol_value(VV[2]);
	V136= car((V135));
T438:;
	if(!(endp((V135)))){
	goto T439;}
	{object V137 = Cnil;
	VMR7(V137)}
T439:;
	if(!(((V136))==(VV[8]))){
	goto T445;}
	V134= Ct;
	goto T443;
T445:;
	if(!(type_of((V136))==t_cons)){
	goto T449;}
	if(!((car((V136)))==((V133)))){
	goto T443;}
	{object V138 = cadr((V136));
	VMR7(V138)}
T449:;
	V139= structure_ref((V136),VV[0],0);
	if(!((/* INLINE-ARGS */V139)==((V133)))){
	goto T443;}
	if(((V134))==Cnil){
	goto T457;}
	(void)(structure_set((V136),VV[0],2,Ct));
	goto T455;
T457:;
	(void)(structure_set((V136),VV[0],1,Ct));
T455:;
	{object V140 = list(4,VV[26],symbol_value(VV[27]),(V136),(V134));
	VMR7(V140)}
T443:;
	V135= cdr((V135));
	V136= car((V135));
	goto T438;}}
}
/*	local entry for function SCH-LOCAL-FUN	*/

static object LI8(V142)

register object V142;
{	 VMB8 VMS8 VMV8
TTL:;
	{register object V143;
	register object V144;
	V143= symbol_value(VV[2]);
	V144= car((V143));
T467:;
	if(!(endp((V143)))){
	goto T468;}
	{object V145 = (V142);
	VMR8(V145)}
T468:;
	if(((V144))==(VV[8])){
	goto T472;}
	if(type_of((V144))==t_cons){
	goto T472;}
	V146= structure_ref((V144),VV[0],0);
	if(!((/* INLINE-ARGS */V146)==((V142)))){
	goto T472;}
	{object V147 = (V144);
	VMR8(V147)}
T472:;
	V143= cdr((V143));
	V144= car((V143));
	goto T467;}
}
/*	local entry for function C1LOCAL-CLOSURE	*/

static object LI9(V149)

register object V149;
{	 VMB9 VMS9 VMV9
TTL:;
	{register object V150;
	V150= Cnil;
	{register object V151;
	register object V152;
	V151= symbol_value(VV[2]);
	V152= car((V151));
T488:;
	if(!(endp((V151)))){
	goto T489;}
	{object V153 = Cnil;
	VMR9(V153)}
T489:;
	if(!(((V152))==(VV[8]))){
	goto T495;}
	V150= Ct;
	goto T493;
T495:;
	if(!(type_of((V152))==t_cons)){
	goto T499;}
	if(!((car((V152)))==((V149)))){
	goto T493;}
	{object V154 = cadr((V152));
	VMR9(V154)}
T499:;
	V155= structure_ref((V152),VV[0],0);
	if(!((/* INLINE-ARGS */V155)==((V149)))){
	goto T493;}
	(void)(structure_set((V152),VV[0],2,Ct));
	{object V156 = list(4,VV[26],symbol_value(VV[27]),(V152),(V150));
	VMR9(V156)}
T493:;
	V151= cdr((V151));
	V152= car((V151));
	goto T488;}}
}
/*	local entry for function C2CALL-LOCAL	*/

static object LI10(V159,V160)

register object V159;register object V160;
{	 VMB10 VMS10 VMV10
	bds_check;
TTL:;
	bds_bind(VV[13],symbol_value(VV[13]));
	if((cadr((V159)))==Cnil){
	goto T513;}
	(void)((*(LnkLI61))((V160)));
	princ_str("\n	cclosure_call(",VV[20]);
	V161= structure_ref(car((V159)),VV[0],2);
	(void)((*(LnkLI62))(/* INLINE-ARGS */V161));
	princ_str(");",VV[20]);
	goto T511;
T513:;
	if(!(type_of((V160))==t_cons||((V160))==Cnil)){
	goto T521;}
	if((symbol_value(VV[28]))==Cnil){
	goto T521;}
	if((symbol_value(VV[29]))==Cnil){
	goto T521;}
	if(!((car(symbol_value(VV[29])))==(car((V159))))){
	goto T521;}
	if(!((symbol_value(VV[30]))==(VV[31]))){
	goto T521;}
	if(((*(LnkLI63))())==Cnil){
	goto T521;}
	if(!((length((V160)))==(length(cdr(symbol_value(VV[29])))))){
	goto T521;}
	bds_bind(VV[32],VV[33]);
	setq(VV[34],number_plus(symbol_value(VV[34]),small_fixnum(1)));
	bds_bind(VV[30],make_cons(symbol_value(VV[34]),Cnil));
	bds_bind(VV[35],make_cons((VV[30]->s.s_dbind),symbol_value(VV[35])));
	{object V163;
	object V164= cdr(symbol_value(VV[29]));
	if(endp(V164)){
	V162= Cnil;
	goto T540;}
	base[4]=V163=MMcons(Cnil,Cnil);
T541:;
	(V163->c.c_car)= list(2,(V164->c.c_car),Cnil);
	if(endp(V164=MMcdr(V164))){
	V162= base[4];
	goto T540;}
	V163=MMcdr(V163)=MMcons(Cnil,Cnil);
	goto T541;}
T540:;
	(void)((*(LnkLI64))(V162,(V160)));
	if((cdr((VV[30]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T535;}
	princ_str("\nT",VV[20]);
	(void)((*(LnkLI54))(car((VV[30]->s.s_dbind))));
	princ_str(":;",VV[20]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
T535:;
	(void)((*(LnkLI65))(VV[36]));
	princ_str("\n	goto TTL;",VV[20]);
	V166= structure_ref(car((V159)),VV[0],0);
	(void)((VFUN_NARGS=2,(*(LnkLI66))(VV[37],/* INLINE-ARGS */V166)));
	goto T511;
T521:;
	(void)((*(LnkLI61))((V160)));
	princ_str("\n	L",VV[20]);
	V167= structure_ref(car((V159)),VV[0],3);
	(void)((*(LnkLI54))(/* INLINE-ARGS */V167));
	princ_char(40,VV[20]);
	{register int V168;
	register int V169;
	V168= fix(structure_ref(car((V159)),VV[0],4));
	V169= 0;
T560:;
	if(!((V169)>=(V168))){
	goto T561;}
	goto T556;
T561:;
	princ_str("base",VV[20]);
	V170 = make_fixnum(V169);
	(void)((*(LnkLI54))(V170));
	princ_char(44,VV[20]);
	V169= (V169)+1;
	goto T560;}
T556:;
	princ_str("base",VV[20]);
	V171= structure_ref(car((V159)),VV[0],4);
	if(number_compare(/* INLINE-ARGS */V171,symbol_value(VV[16]))==0){
	goto T574;}
	V172= structure_ref(car((V159)),VV[0],4);
	(void)((*(LnkLI54))(/* INLINE-ARGS */V172));
T574:;
	princ_str(");",VV[20]);
	setq(VV[38],Ct);
T511:;
	{object V173 = (VFUN_NARGS=1,(*(LnkLI67))(VV[39]));
	bds_unwind1;
	VMR10(V173)}
}
static object  LnkTLI67(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[67],&LnkLI67,ap);} /* UNWIND-EXIT */
static object  LnkTLI66(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[66],&LnkLI66,ap);} /* CMPNOTE */
static object  LnkTLI65(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[65],&LnkLI65,1,ap);} /* UNWIND-NO-EXIT */
static object  LnkTLI64(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[64],&LnkLI64,2,ap);} /* C2PSETQ */
static object  LnkTLI63(){return call_proc0(VV[63],&LnkLI63);} /* TAIL-RECURSION-POSSIBLE */
static object  LnkTLI62(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[62],&LnkLI62,1,ap);} /* WT-CCB-VS */
static object  LnkTLI61(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[61],&LnkLI61,1,ap);} /* PUSH-ARGS */
static object  LnkTLI60(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[60],&LnkLI60,3,ap);} /* DEFMACRO* */
static object  LnkTLI59(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[59],&LnkLI59,1,ap);} /* WT-VS* */
static LnkT58(){ call_or_link(VV[58],&Lnk58);} /* C2EXPR */
static object  LnkTLI57(){return call_proc0(VV[57],&LnkLI57);} /* CCB-VS-PUSH */
static object  LnkTLI56(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[56],&LnkLI56,1,ap);} /* CLINK */
static object  LnkTLI55(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[55],&LnkLI55,ap);} /* WT-CLINK */
static object  LnkTLI54(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[54],&LnkLI54,1,ap);} /* WT1 */
static object  LnkTLI53(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[53],&LnkLI53,1,ap);} /* WT-VS */
static object  LnkTLI52(){return call_proc0(VV[52],&LnkLI52);} /* VS-PUSH */
static object  LnkTLI51(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[51],&LnkLI51,2,ap);} /* ADD-INFO */
static object  LnkTLI50(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[50],&LnkLI50,ap);} /* C1LAMBDA-EXPR */
static LnkT49(){ call_or_link(VV[49],&Lnk49);} /* COPY-INFO */
static object  LnkTLI48(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[48],&LnkLI48,2,ap);} /* C1DECL-BODY */
static object  LnkTLI47(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[47],&LnkLI47,3,ap);} /* CHECK-VDECL */
static object  LnkTLI46(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[46],&LnkLI46,1,ap);} /* C1ADD-GLOBALS */
static LnkT45(){ call_or_link(VV[45],&Lnk45);} /* C1BODY */
static object  LnkTLI44(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[44],&LnkLI44,ap);} /* MAKE-FUN */
static object  LnkTLI43(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[43],&LnkLI43,ap);} /* CMPERR */
static object  LnkTLI42(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[42],&LnkLI42,3,ap);} /* TOO-FEW-ARGS */
