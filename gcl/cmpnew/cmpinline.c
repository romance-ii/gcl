
#include "cmpinclude.h"
#include "cmpinline.h"
void init_cmpinline(){do_init(VV);}
/*	local entry for function MAKE-INFO	*/

static object LI1(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{object V1;
	object V2;
	object V3;
	object V4;
	object V5;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI1key,first,ap);
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

static object LI6(object V59,object V58,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	bds_check;
	{object V60;
	object V61;
	object V62;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	V60= V59;
	V61= V58;
	narg = narg - 2;
	if (narg <= 0) goto T93;
	else {
	V62= first;}
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
	{object V71;
	V71= (*(LnkLI74))(caddr((V68)),(V69));
	V63= make_cons((V71),(V63));
	goto T104;}
	goto T107;
T107:;
	if((V70!= VV[1]))goto T110;
	if(((*(LnkLI75))(caaddr((V68)),cdr((V65))))==Cnil){
	goto T112;}
	V73= structure_ref(caaddr((V68)),VV[1],1);
	{register object x= /* INLINE-ARGS */V73,V72= symbol_value(VV[3]);
	while(!endp(V72))
	if(eql(x,V72->c.c_car)){
	goto T117;
	}else V72=V72->c.c_cdr;
	goto T115;}
	goto T117;
T117:;
	V74= structure_ref(caaddr((V68)),VV[1],1);
	if(!(((V69))==(/* INLINE-ARGS */V74))){
	goto T115;}
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
	{object V78;
	V78= list(3,VV[6],(V75),VV[7]);
	V63= make_cons((V78),(V63));}
	vs_base=vs_top;
	(void) (*Lnk78)();
	vs_top=sup;
	goto T104;}
	goto T115;
T115:;
	{object V79;
	V79= (*(LnkLI79))();
	princ_str("\n	",VV[5]);
	(void)((*(LnkLI76))((V79)));
	princ_str("= ",VV[5]);
	(void)((*(LnkLI80))(caaddr((V68)),cadr(caddr((V68)))));
	princ_char(59,VV[5]);
	{object V80;
	V80= (*(LnkLI74))((V79),(V69));
	V63= make_cons((V80),(V63));
	goto T104;}}
	goto T112;
T112:;
	V82= structure_ref(caaddr((V68)),VV[1],1);
	{register object x= /* INLINE-ARGS */V82,V81= VV[8];
	while(!endp(V81))
	if(eql(x,V81->c.c_car)){
	goto T145;
	}else V81=V81->c.c_cdr;
	goto T143;}
	goto T145;
T145:;
	V83= structure_ref(caaddr((V68)),VV[1],1);
	if(((V69))==(/* INLINE-ARGS */V83)){
	goto T143;}
	{object V84;
	V84= (VFUN_NARGS=1,(*(LnkLI81))((V69)));
	princ_str("\n	V",VV[5]);
	(void)((*(LnkLI76))((V84)));
	princ_str(" = ",VV[5]);
	V85= make_cons(VV[1],caddr((V68)));
	V86= (*(LnkLI74))(/* INLINE-ARGS */V85,(V69));
	(void)((*(LnkLI76))(/* INLINE-ARGS */V86));
	princ_char(59,VV[5]);
	{object V87;
	V87= list(2,VV[6],(V84));
	V63= make_cons((V87),(V63));
	goto T104;}}
	goto T143;
T143:;
	{object V88;
	V89= make_cons(VV[1],caddr((V68)));
	V88= (*(LnkLI74))(/* INLINE-ARGS */V89,(V69));
	V63= make_cons((V88),(V63));
	goto T104;}
	goto T110;
T110:;
	if((V70!= VV[82]))goto T158;
	{object V90;
	V90= caddr((V68));
	if(((*(LnkLI83))((V90)))!=Cnil){
	goto T163;}
	goto T160;
	goto T163;
T163:;
	V91= cadddr((V68));
	V92= structure_ref(cadr((V68)),VV[0],2);
	V64= (*(LnkLI84))((V90),/* INLINE-ARGS */V91,/* INLINE-ARGS */V92);
	if(((V64))!=Cnil){
	goto T165;}
	goto T160;
	goto T165;
T165:;
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
	goto T173;}
	if((symbol_value(VV[9]))==Cnil){
	goto T171;}
	goto T173;
T173:;
	{register object x= cadr((V64)),V94= VV[10];
	while(!endp(V94))
	if(eql(x,V94->c.c_car)){
	goto T180;
	}else V94=V94->c.c_cdr;
	goto T172;}
	goto T180;
T180:;
	if(((V69))==(cadr((V64)))){
	goto T172;}
	goto T171;
T171:;
	{object V95;
	V95= (VFUN_NARGS=1,(*(LnkLI81))((V69)));
	princ_str("\n	V",VV[5]);
	(void)((*(LnkLI76))((V95)));
	princ_str(" = ",VV[5]);
	V96= (*(LnkLI74))((V93),(V69));
	(void)((*(LnkLI76))(/* INLINE-ARGS */V96));
	princ_char(59,VV[5]);
	{object V97;
	V97= list(2,VV[6],(V95));
	V63= make_cons((V97),(V63));
	goto T104;}}
	goto T172;
T172:;
	if(((*(LnkLI87))(cdr((V65)),cdr((V66))))!=Cnil){
	goto T191;}
	base[0]= small_fixnum(0);
	base[1]= caddr((V64));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T195;}
	if(((V62))==Cnil){
	goto T191;}
	{register object x= (V62),V98= VV[11];
	while(!endp(V98))
	if(x==(V98->c.c_car)){
	goto T202;
	}else V98=V98->c.c_cdr;
	goto T191;}
	goto T202;
T202:;
	goto T195;
T195:;
	base[0]= small_fixnum(4);
	base[1]= caddr((V64));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T191;}
	base[0]= small_fixnum(1);
	base[1]= caddr((V64));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T192;}
	if((cdr((V65)))==Cnil){
	goto T192;}
	goto T191;
T191:;
	{object V99;
	V99= Cnil;
	if(!(((V69))==(Ct))){
	goto T214;}
	V99= (VFUN_NARGS=0,(*(LnkLI81))());
	princ_str("\n	V",VV[5]);
	(void)((*(LnkLI76))((V99)));
	princ_str("= ",VV[5]);
	base[0]= (V93);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk88)();
	vs_top=sup;
	goto T212;
	goto T214;
T214:;
	setq(VV[4],number_plus(symbol_value(VV[4]),small_fixnum(1)));
	V99= symbol_value(VV[4]);
	princ_str("\n	{",VV[5]);
	V100= (*(LnkLI77))((V69));
	(void)((*(LnkLI76))(/* INLINE-ARGS */V100));
	princ_char(86,VV[5]);
	(void)((*(LnkLI76))((V99)));
	princ_str("= ",VV[5]);
	{object V101= (V69);
	if((V101!= VV[45]))goto T233;
	base[0]= (V93);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk89)();
	vs_top=sup;
	goto T232;
	goto T233;
T233:;
	if((V101!= VV[40]))goto T235;
	base[0]= (V93);
	base[1]= VV[7];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk90)();
	vs_top=sup;
	goto T232;
	goto T235;
T235:;
	if((V101!= VV[72]))goto T238;
	base[0]= (V93);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk91)();
	vs_top=sup;
	goto T232;
	goto T238;
T238:;
	if((V101!= VV[46]))goto T240;
	base[0]= (V93);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk92)();
	vs_top=sup;
	goto T232;
	goto T240;
T240:;
	if((V101!= VV[47]))goto T242;
	base[0]= (V93);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk93)();
	vs_top=sup;
	goto T232;
	goto T242;
T242:;
	base[0]= (V93);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk88)();
	vs_top=sup;}
	goto T232;
T232:;
	vs_base=vs_top;
	(void) (*Lnk78)();
	vs_top=sup;
	goto T212;
T212:;
	princ_char(59,VV[5]);
	{object V102;
	V102= list(3,VV[6],(V99),VV[7]);
	V63= make_cons((V102),(V63));
	goto T104;}}
	goto T192;
T192:;
	{object V103;
	V103= (*(LnkLI74))((V93),(V69));
	V63= make_cons((V103),(V63));
	goto T104;}}
	goto T160;
T160:;
	{object V104;
	if((symbol_value(VV[9]))==Cnil){
	goto T253;}
	V104= list(2,VV[6],(VFUN_NARGS=0,(*(LnkLI81))()));
	goto T251;
	goto T253;
T253:;
	V104= list(2,VV[12],(*(LnkLI94))());
	goto T251;
T251:;
	bds_bind(VV[13],(V104));
	V105= (*(LnkLI95))((V68));
	bds_unwind1;
	{object V106;
	V106= (*(LnkLI74))((V104),(V69));
	V63= make_cons((V106),(V63));
	goto T104;}}
	goto T158;
T158:;
	if((V70!= VV[96]))goto T258;
	{object V107;
	V107= (*(LnkLI97))(cdr((V68)),(V69));
	V63= make_cons((V107),(V63));
	goto T104;}
	goto T258;
T258:;
	if((V70!= VV[98]))goto T261;
	{object V108;
	object V109;
	V108= caddr((V68));
	V109= cadddr((V68));
	base[0]= make_cons(VV[1],(V108));
	bds_bind(VV[13],base[0]);
	V110= (*(LnkLI95))((V109));
	bds_unwind1;
	if(!((car((V109)))==(VV[14]))){
	goto T267;}
	{object V111;
	V111= (*(LnkLI74))(caddr((V109)),(V69));
	V63= make_cons((V111),(V63));
	goto T104;}
	goto T267;
T267:;
	V65= listA(3,(V68),list(3,VV[1],cadr((V68)),(V108)),cdr((V65)));
	V66= make_cons((V69),(V66));
	goto T104;}
	goto T261;
T261:;
	{object V112;
	if((symbol_value(VV[9]))==Cnil){
	goto T276;}
	if(!(((V69))==(Ct))){
	goto T279;}
	V112= list(2,VV[6],(VFUN_NARGS=0,(*(LnkLI81))()));
	goto T274;
	goto T279;
T279:;
	{object V113;
	setq(VV[4],number_plus(symbol_value(VV[4]),small_fixnum(1)));
	V113= make_cons((V69),symbol_value(VV[4]));
	setq(VV[15],make_cons((V113),symbol_value(VV[15])));}
	{register object x= (V69),V115= symbol_value(VV[3]);
	while(!endp(V115))
	if(eql(x,V115->c.c_car)){
	goto T288;
	}else V115=V115->c.c_cdr;
	goto T287;}
	goto T288;
T288:;
	V114= (V69);
	goto T285;
	goto T287;
T287:;
	V114= VV[18];
	goto T285;
T285:;
	V116= (VFUN_NARGS=6,(*(LnkLI99))(VV[16],(V69),VV[17],V114,VV[19],cdar(symbol_value(VV[15]))));
	V112= list(3,VV[1],/* INLINE-ARGS */V116,Cnil);
	goto T274;
	goto T276;
T276:;
	V112= list(2,VV[12],(*(LnkLI94))());
	goto T274;
T274:;
	bds_bind(VV[13],(V112));
	(void)((*(LnkLI95))((V68)));
	{object V117;
	V117= (*(LnkLI74))((V112),(V69));
	V63= make_cons((V117),(V63));
	bds_unwind1;}}}}
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
	if((V122!= VV[45]))goto T296;
	{object V123 = list(2,VV[20],(V120));
	VMR7(V123)}
	goto T296;
T296:;
	if((V122!= VV[40]))goto T297;
	{object V124 = list(2,VV[21],(V120));
	VMR7(V124)}
	goto T297;
T297:;
	if((V122!= VV[72]))goto T298;
	{object V125 = list(2,VV[22],(V120));
	VMR7(V125)}
	goto T298;
T298:;
	if((V122!= VV[46]))goto T299;
	{object V126 = list(2,VV[23],(V120));
	VMR7(V126)}
	goto T299;
T299:;
	if((V122!= VV[47]))goto T300;
	{object V127 = list(2,VV[24],(V120));
	VMR7(V127)}
	goto T300;
T300:;
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
	goto T305;}
	base[1]= elt((V133),0);
	base[2]= VV[25];
	vs_top=(vs_base=base+1)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T305;}
	{register long V135;
	object V136;
	V135= 1;
	V136= Cnil;
	{unsigned char V137;
	V137= char_code(elt((V133),V135));
	goto T316;
T316:;
	base[1]= code_char(V137);
	base[2]= VV[26];
	vs_top=(vs_base=base+1)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T317;}
	V135= (long)(V135)+(1);
	goto T313;
	goto T317;
T317:;
	{object V138;
	V138= make_fixnum((long)((long)(V137))-(48));
	V136= make_cons((V138),(V136));}
	V135= (long)(V135)+(1);
	V137= char_code(elt((V133),V135));
	goto T316;}
	goto T313;
T313:;
	{object V139;
	long V140;
	register object V141;
	V140= 0;
	V139= (V134);
	V141= Cnil;
	goto T334;
T334:;
	if(!(endp_prop((V139)))){
	goto T335;}
	V134= reverse((V141));
	goto T305;
	goto T335;
T335:;
	V143 = make_fixnum(V140);
	{register object x= V143,V142= (V136);
	while(!endp(V142))
	if(eql(x,V142->c.c_car)){
	goto T343;
	}else V142=V142->c.c_cdr;
	goto T342;}
	goto T343;
T343:;
	{register object V144;
	register object V145;
	object V146;
	V144= car((V139));
	V145= (V144);
	V146= Cnil;
	if(!(type_of((V144))==t_cons)){
	goto T347;}
	{register object x= car((V144)),V147= VV[27];
	while(!endp(V147))
	if(eql(x,V147->c.c_car)){
	goto T351;
	}else V147=V147->c.c_cdr;
	goto T347;}
	goto T351;
T351:;
	V146= car((V144));
	V145= cadr((V144));
	goto T347;
T347:;
	if(!(type_of((V145))==t_cons)){
	goto T356;}
	{register object x= car((V145)),V148= VV[28];
	while(!endp(V148))
	if(eql(x,V148->c.c_car)){
	goto T355;
	}else V148=V148->c.c_cdr;}
	{register object x= car((V145)),V149= VV[29];
	while(!endp(V149))
	if(eql(x,V149->c.c_car)){
	goto T362;
	}else V149=V149->c.c_cdr;
	goto T356;}
	goto T362;
T362:;
	base[2]= small_fixnum(0);
	base[3]= cadr((V145));
	vs_top=(vs_base=base+2)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T355;}
	base[2]= small_fixnum(1);
	base[3]= cadr((V145));
	vs_top=(vs_base=base+2)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T356;}
	goto T355;
T355:;
	princ_str("\n	{",VV[5]);
	vs_base=vs_top;
	(void) (*Lnk78)();
	vs_top=sup;
	{register object V150;
	setq(VV[4],number_plus(symbol_value(VV[4]),small_fixnum(1)));
	V150= symbol_value(VV[4]);
	{object V151;
	V151= list(2,VV[6],(V150));
	V141= make_cons((V151),(V141));}
	{object V152= (V146);
	if((V152!= Cnil))goto T379;
	princ_str("object V",VV[5]);
	(void)((*(LnkLI76))((V150)));
	princ_str("= ",VV[5]);
	base[2]= (V144);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk88)();
	vs_top=sup;
	goto T373;
	goto T379;
T379:;
	if((V152!= VV[20]))goto T385;
	princ_str("int V",VV[5]);
	(void)((*(LnkLI76))((V150)));
	princ_str("= ",VV[5]);
	base[2]= (V145);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk89)();
	vs_top=sup;
	goto T373;
	goto T385;
T385:;
	if((V152!= VV[21]))goto T391;
	princ_str("GEN V",VV[5]);
	(void)((*(LnkLI76))((V150)));
	princ_str("= ",VV[5]);
	base[2]= (V145);
	base[3]= VV[30];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk90)();
	vs_top=sup;
	goto T373;
	goto T391;
T391:;
	if((V152!= VV[22]))goto T398;
	princ_str("unsigned char V",VV[5]);
	(void)((*(LnkLI76))((V150)));
	princ_str("= ",VV[5]);
	base[2]= (V145);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk91)();
	vs_top=sup;
	goto T373;
	goto T398;
T398:;
	if((V152!= VV[23]))goto T404;
	princ_str("double V",VV[5]);
	(void)((*(LnkLI76))((V150)));
	princ_str("= ",VV[5]);
	base[2]= (V145);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk92)();
	vs_top=sup;
	goto T373;
	goto T404;
T404:;
	if((V152!= VV[24]))goto T410;
	princ_str("float V",VV[5]);
	(void)((*(LnkLI76))((V150)));
	princ_str("= ",VV[5]);
	base[2]= (V145);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk93)();
	vs_top=sup;
	goto T373;
	goto T410;
T410:;
	(void)((*(LnkLI100))());}}
	goto T373;
T373:;
	princ_char(59,VV[5]);
	goto T340;
	goto T356;
T356:;
	V141= make_cons(V144,(V141));
	goto T340;}
	goto T342;
T342:;
	{object V154;
	V154= car((V139));
	V141= make_cons((V154),(V141));}
	goto T340;
T340:;
	V139= cdr((V139));
	V140= (long)(V140)+1;
	goto T334;}}
	goto T305;
T305:;
	V155= (*(LnkLI101))(cadr((V131)));
	{object V156 = list(4,/* INLINE-ARGS */V155,caddr((V131)),(V133),(V134));
	VMR8(V156)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INLINE-TYPE	*/

static object LI9(V158)

object V158;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;{object V159;
	{register object x= (V158),V161= symbol_value(VV[31]);
	while(!endp(V161))
	if(type_of(V161->c.c_car)==t_cons &&eql(x,V161->c.c_car->c.c_car)){
	V160= (V161->c.c_car);
	goto T426;
	}else V161=V161->c.c_cdr;
	V160= Cnil;}
	goto T426;
T426:;
	V159= cdr(V160);
	if(V159==Cnil)goto T424;
	{object V162 = V159;
	VMR9(V162)}
	goto T424;
T424:;}
	{object V163 = VV[32];
	VMR9(V163)}
	return Cnil;
}
/*	local entry for function GET-INLINE-INFO	*/

static object LI10(V167,V168,V169)

object V167;register object V168;object V169;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{register object V170;
	base[0]=MMcons(Cnil,Cnil);
	V170= Cnil;
	if(((VFUN_NARGS=2,(*(LnkLI102))((V167),(V168))))!=Cnil){
	goto T429;}
	goto T428;
	goto T429;
T429:;
	(void)((*(LnkLI103))((V167),(V169),(V168)));
	goto T428;
T428:;
	{object V171;
	object V172= (V168);
	if(endp(V172)){
	V168= Cnil;
	goto T432;}
	base[1]=V171=MMcons(Cnil,Cnil);
	goto T433;
T433:;
	(V171->c.c_car)= structure_ref(cadr((V172->c.c_car)),VV[0],2);
	V172=MMcdr(V172);
	if(endp(V172)){
	V168= base[1];
	goto T432;}
	V171=MMcdr(V171)=MMcons(Cnil,Cnil);
	goto T433;}
	goto T432;
T432:;
	if((symbol_value(VV[33]))==Cnil){
	goto T439;}
	(base[0]->c.c_car)= get((V167),VV[34],Cnil);
	if(((base[0]->c.c_car))==Cnil){
	goto T435;}
	goto T437;
	goto T439;
T439:;
	(base[0]->c.c_car)= get((V167),VV[35],Cnil);
	if(((base[0]->c.c_car))==Cnil){
	goto T435;}
	goto T437;
T437:;
	{register object V174;
	object V175;
	V174= (base[0]->c.c_car);
	V175= car((V174));
	goto T446;
T446:;
	if(!(endp_prop((V174)))){
	goto T447;}
	goto T435;
	goto T447;
T447:;
	V170= (*(LnkLI104))((V175),(V168),(V169));
	if(((V170))==Cnil){
	goto T451;}
	{object V176 = (V170);
	VMR10(V176)}
	goto T451;
T451:;
	V174= cdr((V174));
	V175= car((V174));
	goto T446;}
	goto T435;
T435:;
	(base[0]->c.c_car)= get((V167),VV[36],Cnil);
	if(((base[0]->c.c_car))==Cnil){
	goto T460;}
	{register object V177;
	object V178;
	V177= (base[0]->c.c_car);
	V178= car((V177));
	goto T467;
T467:;
	if(!(endp_prop((V177)))){
	goto T468;}
	goto T460;
	goto T468;
T468:;
	V170= (*(LnkLI104))((V178),(V168),(V169));
	if(((V170))==Cnil){
	goto T472;}
	{object V179 = (V170);
	VMR10(V179)}
	goto T472;
T472:;
	V177= cdr((V177));
	V178= car((V177));
	goto T467;}
	goto T460;
T460:;
	{register object V180;
	object V181;
	V180= symbol_value(VV[37]);
	V181= car((V180));
	goto T485;
T485:;
	if(!(endp_prop((V180)))){
	goto T486;}
	goto T481;
	goto T486;
T486:;
	if(!((car((V181)))==((V167)))){
	goto T490;}
	V170= (*(LnkLI104))(cdr((V181)),(V168),(V169));
	if(((V170))==Cnil){
	goto T490;}
	{object V182 = (V170);
	VMR10(V182)}
	goto T490;
T490:;
	V180= cdr((V180));
	V181= car((V180));
	goto T485;}
	goto T481;
T481:;
	(base[0]->c.c_car)= get((V167),VV[38],Cnil);
	if(((base[0]->c.c_car))==Cnil){
	goto T501;}
	if(!(type_of((base[0]->c.c_car))==t_cons)){
	goto T508;}
	if(!(type_of(car((base[0]->c.c_car)))==t_fixnum)){
	goto T508;}
	{object V183;
	V184 = make_fixnum((long)length((V168)));
	V183= (number_compare(V184,car((base[0]->c.c_car)))>=0?Ct:Cnil);
	(base[0]->c.c_car)= cdr((base[0]->c.c_car));
	if(((V183))==Cnil){
	goto T501;}
	goto T506;}
	goto T508;
T508:;
	goto T506;
T506:;
	base[1]= make_fixnum((long)length((V168)));
	base[2]= VV[39];
	base[3]= Ct;
	vs_top=(vs_base=base+1)+3;
	Lmake_list();
	vs_top=sup;
	V185= vs_base[0];
	V186= 
	make_cclosure_new(LC27,Cnil,base[0],Cdata);
	{object V187 = list(4,V185,Ct,small_fixnum(3),V186);
	VMR10(V187)}
	goto T501;
T501:;
	{object V188 = Cnil;
	VMR10(V188)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INLINE-TYPE-MATCHES	*/

static object LI11(V192,V193,V194)

object V192;object V193;object V194;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{register object V195;
	V195= Cnil;
	if(type_of(caddr((V192)))==t_fixnum){
	goto T521;}
	base[0]= (V192);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk105)();
	vs_top=sup;
	goto T521;
T521:;
	{register object x= VV[40],V196= car((V192));
	while(!endp(V196))
	if(eql(x,V196->c.c_car)){
	goto T527;
	}else V196=V196->c.c_cdr;
	goto T525;}
	goto T527;
T527:;
	{object V197 = Cnil;
	VMR11(V197)}
	goto T525;
T525:;
	{register object V198;
	V198= car((V192));
	{register object V199;
	register object V200;
	V199= (V193);
	V200= car((V199));
	goto T536;
T536:;
	if(!(endp_prop((V199)))){
	goto T537;}
	if(!(equal((V198),VV[41]))){
	goto T540;}
	goto T531;
	goto T540;
T540:;
	if(!(endp_prop((V198)))){
	goto T529;}
	goto T531;
	goto T537;
T537:;
	if(!(endp_prop((V198)))){
	goto T543;}
	goto T529;
	goto T543;
T543:;
	if(!(equal((V198),VV[42]))){
	goto T546;}
	V198= VV[43];
	goto T546;
T546:;
	if(!((car((V198)))==(VV[44]))){
	goto T552;}
	if(((*(LnkLI106))(VV[45],(V200)))==Cnil){
	goto T555;}
	{register object V201;
	V201= VV[45];
	V195= make_cons((V201),(V195));
	goto T550;}
	goto T555;
T555:;
	if(((*(LnkLI106))(VV[46],(V200)))==Cnil){
	goto T560;}
	{register object V202;
	V202= VV[46];
	V195= make_cons((V202),(V195));
	goto T550;}
	goto T560;
T560:;
	if(((*(LnkLI106))(VV[47],(V200)))==Cnil){
	goto T565;}
	{register object V203;
	V203= VV[47];
	V195= make_cons((V203),(V195));
	goto T550;}
	goto T565;
T565:;
	goto T529;
	goto T552;
T552:;
	if(((*(LnkLI106))(car((V198)),(V200)))==Cnil){
	goto T570;}
	{register object V204;
	V204= car((V198));
	V195= make_cons((V204),(V195));
	goto T550;}
	goto T570;
T570:;
	goto T529;
	goto T550;
T550:;
	{register object V205;
	V205= car((V198));
	V198= cdr((V198));}
	V199= cdr((V199));
	V200= car((V199));
	goto T536;}}
	goto T531;
T531:;
	if(((*(LnkLI106))(cadr((V192)),(V194)))==Cnil){
	goto T529;}
	V206= reverse((V195));
	{object V207 = make_cons(/* INLINE-ARGS */V206,cdr((V192)));
	VMR11(V207)}
	goto T529;
T529:;
	{object V208 = Cnil;
	VMR11(V208)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function NEED-TO-PROTECT	*/

static object LI12(V211,V212)

object V211;object V212;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{register object V213;
	V213= Cnil;
	{register object V214;
	register object V215;
	V214= (V211);
	V215= (V212);
	goto T586;
T586:;
	if(!(endp_prop((V214)))){
	goto T587;}
	{object V216 = Cnil;
	VMR12(V216)}
	goto T587;
T587:;
	{register object V217;
	V217= car((V214));
	{object V218= car((V217));
	if((V218!= VV[14]))goto T593;
	goto T591;
	goto T593;
T593:;
	if((V218!= VV[1]))goto T594;
	if(((*(LnkLI75))(caaddr((V217)),cdr((V214))))!=Cnil){
	goto T595;}
	V220= structure_ref(caaddr((V217)),VV[1],1);
	{register object x= /* INLINE-ARGS */V220,V219= VV[48];
	while(!endp(V219))
	if(eql(x,V219->c.c_car)){
	goto T599;
	}else V219=V219->c.c_cdr;
	goto T591;}
	goto T599;
T599:;
	V221= car((V215));
	V222= structure_ref(caaddr((V217)),VV[1],1);
	if((/* INLINE-ARGS */V221)==(/* INLINE-ARGS */V222)){
	goto T591;}
	goto T595;
T595:;
	{object V223 = Ct;
	VMR12(V223)}
	goto T594;
T594:;
	if((V218!= VV[82]))goto T601;
	{register object V224;
	V224= caddr((V217));
	if(((*(LnkLI83))((V224)))==Cnil){
	goto T603;}
	V225= cadddr((V217));
	V226= structure_ref(cadr((V217)),VV[0],2);
	V213= (*(LnkLI84))((V224),/* INLINE-ARGS */V225,/* INLINE-ARGS */V226);
	if(((V213))==Cnil){
	goto T603;}
	base[0]= small_fixnum(0);
	base[1]= caddr((V213));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T603;}
	base[0]= small_fixnum(1);
	base[1]= caddr((V213));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T603;}
	base[0]= small_fixnum(4);
	base[1]= caddr((V213));
	vs_top=(vs_base=base+0)+2;
	Llogbitp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T603;}
	{register object x= cadr((V213)),V227= VV[49];
	while(!endp(V227))
	if(eql(x,V227->c.c_car)){
	goto T623;
	}else V227=V227->c.c_cdr;
	goto T621;}
	goto T623;
T623:;
	if(!((car((V215)))==(cadr((V213))))){
	goto T603;}
	goto T621;
T621:;
	if(((*(LnkLI87))(cadddr((V217)),car((V213))))==Cnil){
	goto T591;}
	goto T603;
T603:;
	{object V228 = Ct;
	VMR12(V228)}}
	goto T601;
T601:;
	if((V218!= VV[96]))goto T626;
	V229= make_cons(caddr((V217)),Cnil);
	if(((*(LnkLI87))(/* INLINE-ARGS */V229,VV[50]))==Cnil){
	goto T591;}
	{object V230 = Ct;
	VMR12(V230)}
	goto T626;
T626:;
	{object V231 = Ct;
	VMR12(V231)}}}
	goto T591;
T591:;
	V214= cdr((V214));
	V215= cdr((V215));
	goto T586;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-C-PUSH	*/

static object LI13()

{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	if((symbol_value(VV[9]))==Cnil){
	goto T634;}
	vs_base=vs_top;
	(void) (*Lnk78)();
	vs_top=sup;
	{object V232;
	setq(VV[4],number_plus(symbol_value(VV[4]),small_fixnum(1)));
	V232= symbol_value(VV[4]);
	princ_char(123,VV[5]);
	(void)((*(LnkLI76))(symbol_value(VV[51])));
	princ_str("object V",VV[5]);
	(void)((*(LnkLI76))((V232)));
	princ_char(59,VV[5]);
	{object V233 = list(2,VV[6],(V232));
	VMR13(V233)}}
	goto T634;
T634:;
	{object V234 = list(2,VV[12],(*(LnkLI94))());
	VMR13(V234)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLOSE-INLINE-BLOCKS	*/

static object LI14()

{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{register object V235;
	V235= symbol_value(VV[2]);
	if(!(type_of((V235))==t_cons)){
	goto T646;}
	if(!(eql(cdr((V235)),VV[52]))){
	goto T649;}
	princ_str("restore_avma;",VV[5]);
	goto T649;
T649:;
	V235= car((V235));
	goto T646;
T646:;
	{register long V236;
	register long V237;
	V236= fix((V235));
	V237= 0;
	goto T657;
T657:;
	if(!((V237)>=(V236))){
	goto T658;}
	{object V238 = Cnil;
	VMR14(V238)}
	goto T658;
T658:;
	princ_char(125,VV[5]);
	V237= (long)(V237)+1;
	goto T657;}}
	return Cnil;
}
/*	function definition for WT-INLINE-LOC	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	{register object V239;
	object V240;
	check_arg(2);
	V239=(base[0]);
	V240=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register long V241;
	long V242;
	V241= 0;
	V242= -1;
	if(!(type_of((V239))==t_string)){
	goto T670;}
	base[2]= elt((V239),0);
	base[3]= VV[25];
	vs_top=(vs_base=base+2)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T672;}
	V241= 1;
	goto T680;
T680:;
	base[2]= elt((V239),V241);
	base[3]= VV[26];
	vs_top=(vs_base=base+2)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T681;}
	V241= (long)(V241)+(1);
	goto T672;
	goto T681;
T681:;
	V241= (long)(V241)+(1);
	goto T680;
	goto T672;
T672:;
	{long V243;
	V243= (long)length((V239));
	goto T694;
T694:;
	if(!((V241)>=(V243))){
	goto T695;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T695;
T695:;
	{unsigned char V244;
	V244= char_code(elt((V239),V241));
	base[2]= code_char(V244);
	base[3]= VV[53];
	vs_top=(vs_base=base+2)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T702;}
	{register object V245;
	register object V246;
	V245= elt((V239),(long)(V241)+1);
	V246= small_fixnum(0);
	if(!(eql((V245),VV[54]))){
	goto T709;}
	if(!((V242)>=(0))){
	goto T711;}
	V247 = make_fixnum(V242);
	V248= one_plus(V247);
	V249 = make_fixnum((long)length((V240)));
	if(!(number_compare(/* INLINE-ARGS */V248,V249)<0)){
	goto T711;}
	princ_char(44,VV[5]);
	goto T711;
T711:;
	{register object V250;
	V251 = make_fixnum(V242);
	V252= one_plus(V251);
	V250= nthcdr(fixint(/* INLINE-ARGS */V252),(V240));
	goto T719;
T719:;
	if(((V250))!=Cnil){
	goto T720;}
	goto T706;
	goto T720;
T720:;
	base[2]= car((V250));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk88)();
	vs_top=sup;
	if((cdr((V250)))==Cnil){
	goto T726;}
	princ_char(44,VV[5]);
	goto T726;
T726:;
	V250= cdr((V250));
	goto T719;}
	goto T709;
T709:;
	base[2]= (V245);
	base[3]= small_fixnum(10);
	vs_top=(vs_base=base+2)+2;
	Ldigit_char_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T706;}
	base[2]= (V245);
	vs_top=(vs_base=base+2)+1;
	Lchar_code();
	vs_top=sup;
	V253= vs_base[0];
	V254 = make_fixnum((long)(48));
	V246= number_minus(V253,V254);
	V255 = make_fixnum((long)length((V239)));
	V256 = make_fixnum(V241);
	V257= number_plus(V256,small_fixnum(2));
	if(!(number_compare(V255,/* INLINE-ARGS */V257)>0)){
	goto T741;}
	V258 = make_fixnum(V241);
	V259= number_plus(V258,small_fixnum(2));
	V245= elt((V239),fixint(/* INLINE-ARGS */V259));
	base[2]= (V245);
	vs_top=(vs_base=base+2)+1;
	Ldigit_char_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T741;}
	V260= number_times((V246),small_fixnum(10));
	base[2]= (V245);
	vs_top=(vs_base=base+2)+1;
	Lchar_code();
	vs_top=sup;
	V261= vs_base[0];
	V262 = make_fixnum((long)(48));
	V263= number_minus(V261,V262);
	V246= number_plus(/* INLINE-ARGS */V260,/* INLINE-ARGS */V263);
	V241= (long)(V241)+(1);
	goto T741;
T741:;
	V264 = make_fixnum(V242);
	if(!(number_compare((V246),V264)>=0)){
	goto T754;}
	V242= fix((V246));
	goto T754;
T754:;
	base[2]= nth(fixint((V246)),(V240));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk88)();
	vs_top=sup;}
	goto T706;
T706:;
	V241= (long)(V241)+(2);
	goto T699;
	goto T702;
T702:;
	(void)(princ(code_char(V244),symbol_value(VV[5])));
	V241= (long)(V241)+(1);}
	goto T699;
T699:;
	goto T694;}
	goto T670;
T670:;
	base[2]= (V239);
	{object V265;
	V265= (V240);
	 vs_top=base+3;
	 while(!endp(V265))
	 {vs_push(car(V265));V265=cdr(V265);}
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
	{object V266;
	object V267;
	object V268;
	check_arg(3);
	V266=(base[0]);
	V267=(base[1]);
	V268=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (V267);
	base[4]= (V268);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk107)();
	return;
	}
}
/*	local entry for function WT-INLINE-COND	*/

static object LI17(V272,V273,V274)

object V272;object V273;object V274;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	princ_char(40,VV[5]);
	base[0]= (V273);
	base[1]= (V274);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_str("?Ct:Cnil)",VV[5]);
	{object V275 = Cnil;
	VMR17(V275)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-INLINE-FIXNUM	*/

static object LI18(V279,V280,V281)

object V279;object V280;object V281;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	if(!(number_compare(small_fixnum(0),symbol_value(VV[56]))==0)){
	goto T774;}
	princ_str("CMP",VV[5]);
	goto T774;
T774:;
	princ_str("make_fixnum((long)",VV[5]);
	base[0]= (V280);
	base[1]= (V281);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_char(41,VV[5]);
	{object V282 = Cnil;
	VMR18(V282)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for WT-INLINE-INTEGER	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{object V283;
	object V284;
	object V285;
	check_arg(3);
	V283=(base[0]);
	V284=(base[1]);
	V285=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	princ_str("make_integer(",VV[5]);
	base[3]= (V284);
	base[4]= (V285);
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

static object LI20(V289,V290,V291)

object V289;object V290;object V291;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	princ_str("code_char(",VV[5]);
	base[0]= (V290);
	base[1]= (V291);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_char(41,VV[5]);
	{object V292 = Cnil;
	VMR20(V292)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-INLINE-LONG-FLOAT	*/

static object LI21(V296,V297,V298)

object V296;object V297;object V298;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	princ_str("make_longfloat(",VV[5]);
	base[0]= (V297);
	base[1]= (V298);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_char(41,VV[5]);
	{object V299 = Cnil;
	VMR21(V299)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WT-INLINE-SHORT-FLOAT	*/

static object LI22(V303,V304,V305)

object V303;object V304;object V305;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	princ_str("make_shortfloat(",VV[5]);
	base[0]= (V304);
	base[1]= (V305);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_char(41,VV[5]);
	{object V306 = Cnil;
	VMR22(V306)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ARGS-CAUSE-SIDE-EFFECT	*/

static object LI23(V308)

object V308;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	{register object V309;
	V309= Cnil;
	{register object V310;
	register object V311;
	V310= (V308);
	V311= car((V310));
	goto T812;
T812:;
	if(!(endp_prop((V310)))){
	goto T813;}
	{object V312 = Cnil;
	VMR23(V312)}
	goto T813;
T813:;
	{object V313= car((V311));
	if((V313!= VV[14])
	&& (V313!= VV[1])
	&& (V313!= VV[96]))goto T818;
	goto T817;
	goto T818;
T818:;
	if((V313!= VV[82]))goto T819;
	{register object V314;
	V314= caddr((V311));
	if(((*(LnkLI83))((V314)))==Cnil){
	goto T821;}
	V315= cadddr((V311));
	V316= structure_ref(cadr((V311)),VV[0],2);
	V309= (*(LnkLI84))((V314),/* INLINE-ARGS */V315,/* INLINE-ARGS */V316);
	if(((V309))==Cnil){
	goto T821;}
	base[1]= (V309);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk105)();
	vs_top=sup;
	base[1]= small_fixnum(1);
	base[2]= caddr((V309));
	vs_top=(vs_base=base+1)+2;
	Llogbitp();
	vs_top=sup;
	V317= vs_base[0];
	if((V317)==Cnil){
	goto T817;}
	goto T821;
T821:;
	{object V318 = Ct;
	VMR23(V318)}}
	goto T819;
T819:;
	{object V319 = Ct;
	VMR23(V319)}}
	goto T817;
T817:;
	V310= cdr((V310));
	V311= car((V310));
	goto T812;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LIST-INLINE	*/

static object LI24(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB24 VMS24 VMV24
	{object V320;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg= narg - 0;
	V321 = list_vector_new(narg,first,ap);
	V320= V321;
	{object V322;
	object V323;
	V322= Cnil;
	V323= make_fixnum((long)length((V320)));
	if(type_of(symbol_value(VV[13]))==t_cons){
	goto T845;}
	V322= Cnil;
	goto T844;
	goto T845;
T845:;
	if((car(symbol_value(VV[13])))==(VV[1])){
	goto T847;}
	V322= Cnil;
	goto T844;
	goto T847;
T847:;
	V324= structure_ref(cadr(symbol_value(VV[13])),VV[1],5);
	V322= ((/* INLINE-ARGS */V324)==(VV[57])?Ct:Cnil);
	goto T844;
T844:;
	if(((V322))==Cnil){
	goto T842;}
	princ_str("(ALLOCA_CONS(",VV[5]);
	(void)((*(LnkLI76))((V323)));
	princ_str("),ON_STACK_LIST(",VV[5]);
	(void)((*(LnkLI76))((V323)));
	goto T840;
	goto T842;
T842:;
	princ_str("list(",VV[5]);
	V325 = make_fixnum((long)length((V320)));
	(void)((*(LnkLI76))(V325));
	goto T840;
T840:;
	{register object V326;
	register object V327;
	V326= (V320);
	V327= car((V326));
	goto T859;
T859:;
	if(!(endp_prop((V326)))){
	goto T860;}
	goto T855;
	goto T860;
T860:;
	(void)((*(LnkLI76))(VV[58]));
	(void)((*(LnkLI76))((V327)));
	V326= cdr((V326));
	V327= car((V326));
	goto T859;}
	goto T855;
T855:;
	(void)((*(LnkLI76))(VV[59]));
	if(((V322))==Cnil){
	goto T875;}
	(void)((*(LnkLI76))(VV[59]));
	{object V328 = Cnil;
	VMR24(V328)}
	goto T875;
T875:;
	{object V329 = Cnil;
	VMR24(V329)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LIST*-INLINE	*/

static object LI25(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB25 VMS25 VMV25
	{register object V330;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg= narg - 0;
	V331 = list_vector_new(narg,first,ap);
	V330= V331;switch((long)length((V330))){
	case 1:
	goto T879;
T879:;
	(void)((*(LnkLI76))(car((V330))));
	{object V332 = Cnil;
	VMR25(V332)}
	case 2:
	goto T880;
T880:;
	princ_str("make_cons(",VV[5]);
	(void)((*(LnkLI76))(car((V330))));
	princ_char(44,VV[5]);
	(void)((*(LnkLI76))(cadr((V330))));
	princ_char(41,VV[5]);
	{object V333 = Cnil;
	VMR25(V333)}
	default:
	goto T881;
T881:;
	princ_str("listA(",VV[5]);
	V334 = make_fixnum((long)length((V330)));
	(void)((*(LnkLI76))(V334));
	{register object V335;
	register object V336;
	V335= (V330);
	V336= car((V335));
	goto T896;
T896:;
	if(!(endp_prop((V335)))){
	goto T897;}
	goto T892;
	goto T897;
T897:;
	(void)((*(LnkLI76))(VV[58]));
	(void)((*(LnkLI76))((V336)));
	V335= cdr((V335));
	V336= car((V335));
	goto T896;}
	goto T892;
T892:;
	(void)((*(LnkLI76))(VV[59]));
	{object V337 = Cnil;
	VMR25(V337)}
	{object V338 = Cnil;
	VMR25(V338)}}
	{object V339 = Cnil;
	VMR25(V339)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function DEFSYSFUN	*/

static object LI26(V346,V347,V348,V349,V350,V351)

register object V346;object V347;object V348;register object V349;object V350;object V351;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	if(((V347))==Cnil){
	goto T910;}
	(void)(putprop((V346),(V347),VV[60]));
	goto T910;
T910:;
	if(((V348))==Cnil){
	goto T913;}
	{object V353;
	object V354= (V348);
	if(endp(V354)){
	V352= Cnil;
	goto T916;}
	base[0]=V353=MMcons(Cnil,Cnil);
	goto T917;
T917:;
	if(!(((V354->c.c_car))==(VV[61]))){
	goto T920;}
	(V353->c.c_car)= VV[61];
	goto T918;
	goto T920;
T920:;
	(V353->c.c_car)= (*(LnkLI108))((V354->c.c_car));
	goto T918;
T918:;
	V354=MMcdr(V354);
	if(endp(V354)){
	V352= base[0];
	goto T916;}
	V353=MMcdr(V353)=MMcons(Cnil,Cnil);
	goto T917;}
	goto T916;
T916:;
	(void)(putprop((V346),V352,VV[62]));
	goto T913;
T913:;
	if(((V349))==Cnil){
	goto T922;}
	{register object V356;
	if(!(type_of((V349))!=t_cons)){
	goto T928;}
	V357= make_cons((V349),Cnil);
	goto T926;
	goto T928;
T928:;
	V357= (V349);
	goto T926;
T926:;
	V356= (*(LnkLI109))(V357);
	if(!(type_of((V356))==t_cons)){
	goto T931;}
	goto T930;
	goto T931;
T931:;
	V356= make_cons((V356),Cnil);
	goto T930;
T930:;
	if((cdr((V356)))!=Cnil){
	goto T936;}
	V358= car((V356));
	goto T934;
	goto T936;
T936:;
	V358= make_cons(VV[63],(V356));
	goto T934;
T934:;
	(void)(putprop((V346),V358,VV[64]));}
	goto T922;
T922:;
	if(((V350))==Cnil){
	goto T938;}
	(void)(putprop((V346),Ct,VV[65]));
	goto T938;
T938:;
	if(((V351))==Cnil){
	goto T942;}
	{object V359 = putprop((V346),Ct,VV[66]);
	VMR26(V359)}
	goto T942;
T942:;
	{object V360 = Cnil;
	VMR26(V360)}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC27(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_reserve(VM27);
	{object V361;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V361=(base[0]);
	vs_top=sup;
	princ_str("(VFUN_NARGS=",VV[5]);
	V362 = make_fixnum((long)length((V361)));
	(void)((*(LnkLI76))(V362));
	princ_char(44,VV[5]);
	base[1]= (base0[0]->c.c_car);
	base[2]= (V361);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	princ_char(41,VV[5]);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static object  LnkTLI109(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[109],(void **)(void *)&LnkLI109,1,first,ap);va_end(ap);return V1;} /* FUNCTION-RETURN-TYPE */
static object  LnkTLI108(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[108],(void **)(void *)&LnkLI108,1,first,ap);va_end(ap);return V1;} /* TYPE-FILTER */
static void LnkT107(){ call_or_link(VV[107],(void **)(void *)&Lnk107);} /* WT-INLINE-LOC */
static object  LnkTLI106(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[106],(void **)(void *)&LnkLI106,2,first,ap);va_end(ap);return V1;} /* TYPE>= */
static void LnkT105(){ call_or_link(VV[105],(void **)(void *)&Lnk105);} /* FIX-OPT */
static object  LnkTLI104(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[104],(void **)(void *)&LnkLI104,3,first,ap);va_end(ap);return V1;} /* INLINE-TYPE-MATCHES */
static object  LnkTLI103(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[103],(void **)(void *)&LnkLI103,3,first,ap);va_end(ap);return V1;} /* ADD-FAST-LINK */
static object  LnkTLI102(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[102],(void **)(void *)&LnkLI102,first,ap);va_end(ap);return V1;} /* FAST-LINK-PROCLAIMED-TYPE-P */
static object  LnkTLI101(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[101],(void **)(void *)&LnkLI101,1,first,ap);va_end(ap);return V1;} /* INLINE-TYPE */
static object  LnkTLI100(){return call_proc0(VV[100],(void **)(void *)&LnkLI100);} /* BABOON */
static object  LnkTLI7(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[7],(void **)(void *)&LnkLI7,first,ap);va_end(ap);return V1;} /* INLINE-ARGS */
static object  LnkTLI99(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[99],(void **)(void *)&LnkLI99,first,ap);va_end(ap);return V1;} /* MAKE-VAR */
static object  LnkTLI97(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[97],(void **)(void *)&LnkLI97,2,first,ap);va_end(ap);return V1;} /* COERCE-LOC-STRUCTURE-REF */
static object  LnkTLI95(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[95],(void **)(void *)&LnkLI95,1,first,ap);va_end(ap);return V1;} /* C2EXPR* */
static object  LnkTLI94(){return call_proc0(VV[94],(void **)(void *)&LnkLI94);} /* VS-PUSH */
static void LnkT93(){ call_or_link(VV[93],(void **)(void *)&Lnk93);} /* WT-SHORT-FLOAT-LOC */
static void LnkT92(){ call_or_link(VV[92],(void **)(void *)&Lnk92);} /* WT-LONG-FLOAT-LOC */
static void LnkT91(){ call_or_link(VV[91],(void **)(void *)&Lnk91);} /* WT-CHARACTER-LOC */
static void LnkT90(){ call_or_link(VV[90],(void **)(void *)&Lnk90);} /* WT-INTEGER-LOC */
static void LnkT89(){ call_or_link(VV[89],(void **)(void *)&Lnk89);} /* WT-FIXNUM-LOC */
static void LnkT88(){ call_or_link(VV[88],(void **)(void *)&Lnk88);} /* WT-LOC */
static object  LnkTLI87(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[87],(void **)(void *)&LnkLI87,2,first,ap);va_end(ap);return V1;} /* NEED-TO-PROTECT */
static object  LnkTLI86(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[86],(void **)(void *)&LnkLI86,2,first,ap);va_end(ap);return V1;} /* GET-INLINE-LOC */
static void LnkT85(){ call_or_link(VV[85],(void **)(void *)&Lnk85);} /* SAVE-AVMA */
static object  LnkTLI84(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[84],(void **)(void *)&LnkLI84,3,first,ap);va_end(ap);return V1;} /* GET-INLINE-INFO */
static object  LnkTLI83(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[83],(void **)(void *)&LnkLI83,1,first,ap);va_end(ap);return V1;} /* INLINE-POSSIBLE */
static object  LnkTLI81(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[81],(void **)(void *)&LnkLI81,first,ap);va_end(ap);return V1;} /* CS-PUSH */
static object  LnkTLI80(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[80],(void **)(void *)&LnkLI80,2,first,ap);va_end(ap);return V1;} /* WT-VAR */
static object  LnkTLI79(){return call_proc0(VV[79],(void **)(void *)&LnkLI79);} /* WT-C-PUSH */
static void LnkT78(){ call_or_link(VV[78],(void **)(void *)&Lnk78);} /* INC-INLINE-BLOCKS */
static object  LnkTLI77(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[77],(void **)(void *)&LnkLI77,1,first,ap);va_end(ap);return V1;} /* REP-TYPE */
static object  LnkTLI76(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[76],(void **)(void *)&LnkLI76,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[75],(void **)(void *)&LnkLI75,2,first,ap);va_end(ap);return V1;} /* ARGS-INFO-CHANGED-VARS */
static object  LnkTLI74(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[74],(void **)(void *)&LnkLI74,2,first,ap);va_end(ap);return V1;} /* COERCE-LOC */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

