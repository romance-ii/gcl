
#include "cmpinclude.h"
#include "defstruct.h"
init_defstruct(){do_init(VV);}
/*	local entry for function MAKE-ACCESS-FUNCTION	*/

static object LI1(V11,V10,V9,V8,V7,V6,V5,V4,V3,V2,V1,va_alist)
	object V11,V10,V9,V8,V7,V6,V5,V4,V3,V2,V1;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{object V12;
	object V13;
	object V14;
	object V15;
	object V16;
	object V17;
	object V18;
	object V19;
	object V20;
	object V21;
	object V22;
	if(narg <11) too_few_arguments();
	V12= V11;
	V13= V10;
	V14= V9;
	V15= V8;
	V16= V7;
	V17= V6;
	V18= V5;
	V19= V4;
	V20= V3;
	V21= V2;
	Vcs[10]=MMcons(V1,Cnil);
	narg = narg - 11;
	if (narg <= 0) goto T1;
	else {
	va_start(ap);
	V22= va_arg(ap,object);}
	--narg; goto T2;
T1:;
	V22= Cnil;
T2:;
	{register object V23;
	register object V24;
	object V25;
	base[1]= coerce_to_string((V13));
	base[2]= coerce_to_string((V18));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk109)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lintern();
	vs_top=sup;
	V23= vs_base[0];
	V24= Cnil;
	V25= Cnil;
	{object V26= (V14);
	if((V26!= Cnil))goto T9;
	V24= symbol_value(VV[0]);
	goto T8;
T9:;
	if((V26!= VV[20]))goto T11;
	V24= symbol_value(VV[1]);
	goto T8;
T11:;
	if((V26!= VV[19]))goto T13;
	V24= symbol_value(VV[2]);
	goto T8;
T13:;
	FEerror("The ECASE key value ~s is illegal.",1,V26);}
T8:;
	V27 = make_fixnum(length((V24)));
	if(!(number_compare(V27,(Vcs[10]->c.c_car))>0)){
	goto T16;}
	goto T15;
T16:;
	V28= number_plus((Vcs[10]->c.c_car),small_fixnum(10));
	(void)((VFUN_NARGS=2,(*(LnkLI110))((V24),/* INLINE-ARGS */V28)));
T15:;
	if(((V25))!=Cnil){
	goto T18;}
	base[0]= (V23);
	base[1]= VV[3];
	base[2]= VV[4];
	base[3]= (V20);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk111)();
	vs_top=sup;
	if((V17)!=Cnil){
	goto T18;}{object V29;
	base[0]= (V23);
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T28;}
	V29= Cnil;
	goto T27;
T28:;
	V30= aref1((V24),fixint((Vcs[10]->c.c_car)));
	base[0]= (V23);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V31= vs_base[0];
	V29= ((/* INLINE-ARGS */V30)==(V31)?Ct:Cnil);
T27:;
	if(V29==Cnil)goto T26;
	goto T18;
T26:;}
	base[0]= (V23);{object V32;
	V32= aref1((V24),fixint((Vcs[10]->c.c_car)));
	if(V32==Cnil)goto T35;
	base[1]= V32;
	goto T34;
T35:;}
	if(!(((V24))==(symbol_value(VV[0])))){
	goto T39;}
	V33= 
	make_cclosure_new(LC16,Cnil,Vcs[10],Cdata);
	goto T37;
T39:;
	if(!(((V24))==(symbol_value(VV[1])))){
	goto T42;}
	V33= 
	make_cclosure_new(LC17,Cnil,Vcs[10],Cdata);
	goto T37;
T42:;
	if(!(((V24))==(symbol_value(VV[2])))){
	goto T45;}
	V33= 
	make_cclosure_new(LC18,Cnil,Vcs[10],Cdata);
	goto T37;
T45:;
	V33= Cnil;
T37:;
	base[1]= aset1((V24),fixint((Vcs[10]->c.c_car)),V33);
T34:;
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
T18:;
	if(((V21))==Cnil){
	goto T49;}
	(void)(remprop((V23),VV[6]));
	(void)(sputprop((V23),VV[7],Ct));
	goto T47;
T49:;
	(void)(remprop((V23),VV[8]));
	(void)(remprop((V23),VV[9]));
	(void)(remprop((V23),VV[10]));
	{object V34;
	V34= get((V23),VV[6],Cnil);
	if(!(type_of((V34))==t_cons)){
	goto T57;}
	if(((V16))==Cnil){
	goto T57;}
	base[0]= (V16);
	base[1]= car((V34));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk112)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T57;}
	if(!(eql(cdr((V34)),(Vcs[10]->c.c_car)))){
	goto T57;}
	V25= Ct;
	goto T47;
T57:;
	if(((V14))==Cnil){
	goto T70;}
	V35= (V14);
	goto T68;
T70:;
	V35= (V12);
T68:;
	V36= make_cons(V35,(Vcs[10]->c.c_car));
	(void)(sputprop((V23),VV[6],/* INLINE-ARGS */V36));}
T47:;
	{object V37 = Cnil;
	VMR1(V37)}}}
	}
/*	local entry for function MAKE-CONSTRUCTOR	*/

static object LI2(V43,V44,V45,V46,V47)

object V43;object V44;object V45;object V46;object V47;
{	 VMB2 VMS2 VMV2
TTL:;
	{object V48;
	register object V49;
	{object V50;
	object V51= (V47);
	if(endp(V51)){
	V48= Cnil;
	goto T72;}
	base[0]=V50=MMcons(Cnil,Cnil);
T73:;
	if(((V51->c.c_car))!=Cnil){
	goto T76;}
	(V50->c.c_car)= Cnil;
	goto T74;
T76:;
	if((car((V51->c.c_car)))!=Cnil){
	goto T79;}
	(V50->c.c_car)= list(2,VV[11],cadr((V51->c.c_car)));
	goto T74;
T79:;
	(V50->c.c_car)= car((V51->c.c_car));
T74:;
	if(endp(V51=MMcdr(V51))){
	V48= base[0];
	goto T72;}
	V50=MMcdr(V50)=MMcons(Cnil,Cnil);
	goto T73;}
T72:;
	{object V53;
	object V54= (V47);
	if(endp(V54)){
	V49= Cnil;
	goto T81;}
	base[0]=V53=MMcons(Cnil,Cnil);
T82:;
	if(((V54->c.c_car))!=Cnil){
	goto T85;}
	(V53->c.c_cdr)= Cnil;
	goto T83;
T85:;
	if((car((V54->c.c_car)))!=Cnil){
	goto T88;}
	(V53->c.c_cdr)= Cnil;
	goto T83;
T88:;
	if((cadr((V54->c.c_car)))!=Cnil){
	goto T91;}
	(V53->c.c_cdr)= make_cons(car((V54->c.c_car)),Cnil);
	goto T83;
T91:;
	V56= list(2,car((V54->c.c_car)),cadr((V54->c.c_car)));
	(V53->c.c_cdr)= make_cons(/* INLINE-ARGS */V56,Cnil);
T83:;
	while(!endp(MMcdr(V53)))V53=MMcdr(V53);
	if(endp(V54=MMcdr(V54))){
	base[0]=base[0]->c.c_cdr;
	V49= base[0];
	goto T81;}
	goto T82;}
T81:;
	if(!(type_of((V44))==t_cons)){
	goto T95;}
	{register object V57;
	register object V58;
	register object V59;
	V57= cadr((V44));
	V58= Cnil;
	V59= Cnil;
T100:;
	if(!(endp((V57)))){
	goto T101;}
	base[0]= make_cons(VV[12],(V58));
	{object V60;
	object V61= (V49);
	if(endp(V61)){
	base[1]= Cnil;
	goto T106;}
	base[2]=V60=MMcons(Cnil,Cnil);
T107:;
	if(!(type_of((V61->c.c_car))!=t_cons)){
	goto T114;}
	V64= (V61->c.c_car);
	goto T112;
T114:;
	V64= car((V61->c.c_car));
T112:;
	{register object x= V64,V63= (V59);
	while(!endp(V63))
	if(eql(x,V63->c.c_car)){
	goto T111;
	}else V63=V63->c.c_cdr;
	goto T110;}
T111:;
	(V60->c.c_cdr)= Cnil;
	goto T108;
T110:;
	(V60->c.c_cdr)= make_cons((V61->c.c_car),Cnil);
T108:;
	while(!endp(MMcdr(V60)))V60=MMcdr(V60);
	if(endp(V61=MMcdr(V61))){
	base[2]=base[2]->c.c_cdr;
	base[1]= base[2];
	goto T106;}
	goto T107;}
T106:;
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	V49= vs_base[0];
	goto T97;
T101:;
	{register object x= car((V57)),V65= VV[13];
	while(!endp(V65))
	if(eql(x,V65->c.c_car)){
	goto T119;
	}else V65=V65->c.c_cdr;
	goto T117;}
T119:;
	if(!((car((V57)))==(VV[14]))){
	goto T120;}
	goto T117;
T120:;
	V57= make_cons(VV[14],(V57));
T117:;
	if(!((car((V57)))==(VV[14]))){
	goto T125;}
	V58= make_cons(VV[14],(V58));
	{register object V66;
	object V67;
	object V68;
	V66= cdr((V57));
	V67= Cnil;
	V68= Cnil;
T132:;
	if(!(endp((V66)))){
	goto T133;}
	base[0]= make_cons(VV[12],(V58));
	{object V69;
	object V70= (V49);
	if(endp(V70)){
	base[1]= Cnil;
	goto T139;}
	base[2]=V69=MMcons(Cnil,Cnil);
T140:;
	if(!(type_of((V70->c.c_car))!=t_cons)){
	goto T147;}
	V73= (V70->c.c_car);
	goto T145;
T147:;
	V73= car((V70->c.c_car));
T145:;
	{register object x= V73,V72= (V59);
	while(!endp(V72))
	if(eql(x,V72->c.c_car)){
	goto T144;
	}else V72=V72->c.c_cdr;
	goto T143;}
T144:;
	(V69->c.c_cdr)= Cnil;
	goto T141;
T143:;
	(V69->c.c_cdr)= make_cons((V70->c.c_car),Cnil);
T141:;
	while(!endp(MMcdr(V69)))V69=MMcdr(V69);
	if(endp(V70=MMcdr(V70))){
	base[2]=base[2]->c.c_cdr;
	base[1]= base[2];
	goto T139;}
	goto T140;}
T139:;
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	V49= vs_base[0];
	goto T129;
T133:;
	{register object x= car((V66)),V74= VV[13];
	while(!endp(V74))
	if(eql(x,V74->c.c_car)){
	goto T152;
	}else V74=V74->c.c_cdr;
	goto T150;}
T152:;
	if(!((car((V66)))==(VV[15]))){
	goto T153;}
	V58= make_cons(VV[15],(V58));
	V66= cdr((V66));
	if(endp((V66))){
	goto T161;}
	if(type_of(car((V66)))==t_symbol){
	goto T160;}
T161:;
	(void)((*(LnkLI113))());
T160:;
	V59= make_cons(car((V66)),(V59));
	V58= make_cons(car((V66)),(V58));
	V66= cdr((V66));
	if(!(endp((V66)))){
	goto T153;}
	base[0]= make_cons(VV[12],(V58));
	{object V75;
	object V76= (V49);
	if(endp(V76)){
	base[1]= Cnil;
	goto T176;}
	base[2]=V75=MMcons(Cnil,Cnil);
T177:;
	if(!(type_of((V76->c.c_car))!=t_cons)){
	goto T184;}
	V79= (V76->c.c_car);
	goto T182;
T184:;
	V79= car((V76->c.c_car));
T182:;
	{register object x= V79,V78= (V59);
	while(!endp(V78))
	if(eql(x,V78->c.c_car)){
	goto T181;
	}else V78=V78->c.c_cdr;
	goto T180;}
T181:;
	(V75->c.c_cdr)= Cnil;
	goto T178;
T180:;
	(V75->c.c_cdr)= make_cons((V76->c.c_car),Cnil);
T178:;
	while(!endp(MMcdr(V75)))V75=MMcdr(V75);
	if(endp(V76=MMcdr(V76))){
	base[2]=base[2]->c.c_cdr;
	base[1]= base[2];
	goto T176;}
	goto T177;}
T176:;
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	V49= vs_base[0];
	goto T129;
T153:;
	if((car((V66)))==(VV[12])){
	goto T186;}
	(void)((*(LnkLI113))());
T186:;
	V58= make_cons(VV[12],(V58));
	{register object V80;
	V80= cdr((V66));
T194:;
	if(!(endp((V80)))){
	goto T195;}
	goto T191;
T195:;
	V58= make_cons(car((V80)),(V58));
	if(!(type_of(car((V80)))!=t_cons)){
	goto T203;}
	if(!(type_of(car((V80)))==t_symbol)){
	goto T203;}
	V59= make_cons(car((V80)),(V59));
	goto T201;
T203:;
	if(!(type_of(caar((V80)))==t_symbol)){
	goto T209;}
	if(endp(cdar((V80)))){
	goto T208;}
	if(!(endp(cddar((V80))))){
	goto T209;}
T208:;
	V59= make_cons(caar((V80)),(V59));
	goto T201;
T209:;
	(void)((*(LnkLI113))());
T201:;
	V80= cdr((V80));
	goto T194;}
T191:;
	base[0]= (V58);
	{object V81;
	object V82= (V49);
	if(endp(V82)){
	base[1]= Cnil;
	goto T222;}
	base[2]=V81=MMcons(Cnil,Cnil);
T223:;
	if(!(type_of((V82->c.c_car))!=t_cons)){
	goto T230;}
	V85= (V82->c.c_car);
	goto T228;
T230:;
	V85= car((V82->c.c_car));
T228:;
	{register object x= V85,V84= (V59);
	while(!endp(V84))
	if(eql(x,V84->c.c_car)){
	goto T227;
	}else V84=V84->c.c_cdr;
	goto T226;}
T227:;
	(V81->c.c_cdr)= Cnil;
	goto T224;
T226:;
	(V81->c.c_cdr)= make_cons((V82->c.c_car),Cnil);
T224:;
	while(!endp(MMcdr(V81)))V81=MMcdr(V81);
	if(endp(V82=MMcdr(V82))){
	base[2]=base[2]->c.c_cdr;
	base[1]= base[2];
	goto T222;}
	goto T223;}
T222:;
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	V49= vs_base[0];
	goto T129;
T150:;
	if(!(type_of(car((V66)))!=t_cons)){
	goto T238;}
	V67= car((V66));
	goto T236;
T238:;
	if(!(endp(cdar((V66))))){
	goto T243;}
	V67= caar((V66));
	goto T236;
T243:;
	goto T234;
T236:;
	base[0]= (V67);
	base[1]= (V49);
	base[2]= VV[16];
	base[3]= VV[114];
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	V68= vs_base[0];
	if(((V68))==Cnil){
	goto T234;}
	V58= make_cons(car((V68)),(V58));
	goto T232;
T234:;
	V58= make_cons(car((V66)),(V58));
T232:;
	if(!(type_of(car((V66)))!=t_cons)){
	goto T257;}
	if(type_of(car((V66)))==t_symbol){
	goto T259;}
	(void)((*(LnkLI113))());
T259:;
	V59= make_cons(car((V66)),(V59));
	goto T255;
T257:;
	if(type_of(caar((V66)))==t_symbol){
	goto T264;}
	(void)((*(LnkLI113))());
	goto T255;
T264:;
	if(endp(cdar((V66)))){
	goto T266;}
	if(!(endp(cddar((V66))))){
	goto T267;}
T266:;
	V59= make_cons(caar((V66)),(V59));
	goto T255;
T267:;
	if(type_of(caddar((V66)))==t_symbol){
	goto T273;}
	(void)((*(LnkLI113))());
	goto T255;
T273:;
	if(endp(cdddar((V66)))){
	goto T276;}
	(void)((*(LnkLI113))());
	goto T255;
T276:;
	V59= make_cons(caar((V66)),(V59));
	V59= make_cons(caddar((V66)),(V59));
T255:;
	V66= cdr((V66));
	goto T132;}
T129:;
	goto T97;
T125:;
	if(type_of(car((V57)))==t_symbol){
	goto T284;}
	(void)((*(LnkLI113))());
T284:;
	V58= make_cons(car((V57)),(V58));
	V59= make_cons(car((V57)),(V59));
	V57= cdr((V57));
	goto T100;}
T97:;
	V44= car((V44));
	goto T93;
T95:;
	V49= make_cons(VV[17],(V49));
T93:;
	if(((V45))!=Cnil){
	goto T296;}
	{object V86 = list(4,VV[3],(V44),(V49),listA(3,VV[18],list(2,VV[11],(V43)),(V48)));
	VMR2(V86)}
T296:;
	if(((V45))==(VV[19])){
	goto T298;}
	if(!(type_of((V45))==t_cons)){
	goto T299;}
	if(!((car((V45)))==(VV[19]))){
	goto T299;}
T298:;
	{object V87 = list(4,VV[3],(V44),(V49),make_cons(VV[19],(V48)));
	VMR2(V87)}
T299:;
	if(!(((V45))==(VV[20]))){
	goto T306;}
	{object V88 = list(4,VV[3],(V44),(V49),make_cons(VV[20],(V48)));
	VMR2(V88)}
T306:;
	{object V89;
	base[0]= VV[21];
	base[1]= (V45);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	V89= vs_base[0];
	if(((V89))==Cnil){
	goto T312;}
	{object V90 = (V89);
	VMR2(V90)}
T312:;
	{object V91 = Cnil;
	VMR2(V91)}}}
}
/*	local entry for function ILLEGAL-BOA	*/

static object LI3()

{	 VMB3 VMS3 VMV3
TTL:;
	base[0]= VV[22];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V92 = vs_base[0];
	VMR3(V92)}
}
/*	local entry for function MAKE-PREDICATE	*/

static object LI4(V98,V99,V100,V101,V102)

object V98;object V99;register object V100;object V101;register object V102;
{	 VMB4 VMS4 VMV4
TTL:;
	{object V103;
	V103= (((V100))==Cnil?Ct:Cnil);
	if(((V103))==Cnil){
	goto T317;}
	{object V104 = (V103);
	VMR4(V104)}
T317:;
	if(((V100))==(VV[19])){
	goto T319;}
	if(!(type_of((V100))==t_cons)){
	goto T320;}
	if(!((car((V100)))==(VV[19]))){
	goto T320;}
T319:;
	if(((V101))!=Cnil){
	goto T326;}
	base[0]= VV[23];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T326:;
	V105= list(3,VV[27],VV[28],(V102));
	V106= list(3,VV[30],VV[31],(V102));
	{object V107 = list(4,VV[3],(V99),VV[24],list(4,VV[25],VV[26],/* INLINE-ARGS */V105,list(3,VV[29],/* INLINE-ARGS */V106,list(2,VV[11],(V98)))));
	VMR4(V107)}
T320:;
	if(!(((V100))==(VV[20]))){
	goto T331;}
	if(((V101))!=Cnil){
	goto T333;}
	base[0]= VV[32];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
T333:;
	if(!(number_compare((V102),small_fixnum(0))==0)){
	goto T338;}
	{object V108 = list(4,VV[3],(V99),VV[33],list(3,VV[25],VV[34],list(3,VV[29],VV[35],list(2,VV[11],(V98)))));
	VMR4(V108)}
T338:;
	V109= list(3,VV[38],(V102),VV[39]);
	base[0]= cdr(symbol_value(VV[40]));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk115)();
	vs_top=sup;
	V110= vs_base[0];
	V111= list(2,/* INLINE-ARGS */V109,V110);
	V112= make_cons(VV[42],Cnil);
	V113= make_cons(VV[43],Cnil);
	V114= list(2,VV[41],list(3,VV[25],/* INLINE-ARGS */V112,list(3,VV[29],/* INLINE-ARGS */V113,list(2,VV[11],(V98)))));
	{object V115 = list(4,VV[3],(V99),VV[36],list(5,VV[37],/* INLINE-ARGS */V111,/* INLINE-ARGS */V114,VV[44],list(3,VV[45],make_cons(VV[42],Cnil),VV[46])));
	VMR4(V115)}
T331:;
	{object V116;
	base[0]= VV[47];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V116= vs_base[0];
	if(((V116))==Cnil){
	goto T345;}
	{object V117 = (V116);
	VMR4(V117)}
T345:;
	{object V118 = Cnil;
	VMR4(V118)}}}
}
/*	local entry for function PARSE-SLOT-DESCRIPTION	*/

static object LI5(V121,V122)

register object V121;object V122;
{	 VMB5 VMS5 VMV5
TTL:;
	{object V123;
	object V124;
	register object V125;
	register object V126;
	V123= Cnil;
	V124= Cnil;
	V125= Cnil;
	V126= Cnil;
	if(!(type_of((V121))!=t_cons)){
	goto T349;}
	V123= (V121);
	goto T347;
T349:;
	if(!(endp(cdr((V121))))){
	goto T353;}
	V123= car((V121));
	goto T347;
T353:;
	V123= car((V121));
	V124= cadr((V121));
	{register object V127;
	register object V128;
	register object V129;
	V127= cddr((V121));
	V128= Cnil;
	V129= Cnil;
T362:;
	if(!(endp((V127)))){
	goto T363;}
	goto T347;
T363:;
	V128= car((V127));
	if(!(endp(cdr((V127))))){
	goto T369;}
	base[0]= VV[48];
	base[1]= (V127);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
T369:;
	V129= cadr((V127));
	{object V130= (V128);
	if((V130!= VV[77]))goto T377;
	V125= (V129);
	goto T376;
T377:;
	if((V130!= VV[116]))goto T379;
	V126= (V129);
	goto T376;
T379:;
	base[0]= VV[49];
	base[1]= (V127);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}
T376:;
	V127= cddr((V127));
	goto T362;}
T347:;
	{object V131 = list(5,(V123),(V124),(V125),(V126),(V122));
	VMR5(V131)}}
}
/*	local entry for function OVERWRITE-SLOT-DESCRIPTIONS	*/

static object LI6(V134,V135)

object V134;register object V135;
{	 VMB6 VMS6 VMV6
TTL:;
	if(((V135))!=Cnil){
	goto T387;}
	{object V136 = Cnil;
	VMR6(V136)}
T387:;
	{register object V137;
	base[0]= caar((V135));
	base[1]= (V134);
	base[2]= VV[16];
	base[3]= symbol_function(VV[43]);
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	V137= vs_base[0];
	if(((V137))==Cnil){
	goto T395;}
	if((cadddr(car((V137))))!=Cnil){
	goto T397;}
	if((cadddr(car((V135))))==Cnil){
	goto T397;}
	base[0]= VV[50];
	base[1]= (V137);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
T397:;
	{object V138;
	object V139;
	V138= car((V137));
	V139= (*(LnkLI117))(caddr(car((V137))));
	if(type_of(cddr((V138)))!=t_cons)FEwrong_type_argument(Scons,cddr((V138)));
	(cddr((V138)))->c.c_car = (V139);
	(void)(cddr((V138)));}{object V141;
	V141= caddr(car((V137)));
	if(V141==Cnil)goto T412;
	V140= V141;
	goto T411;
T412:;}
	V140= Ct;
T411:;
	V142= (*(LnkLI118))(V140);{object V144;
	V144= caddr(car((V135)));
	if(V144==Cnil)goto T415;
	V143= V144;
	goto T414;
T415:;}
	V143= Ct;
T414:;
	V145= (*(LnkLI118))(V143);
	if(equal(/* INLINE-ARGS */V142,/* INLINE-ARGS */V145)){
	goto T408;}
	base[0]= VV[51];
	base[1]= car((V137));
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
T408:;
	V146= list(5,caar((V137)),cadar((V137)),caddar((V137)),cadddr(car((V137))),car(cddddr(car((V135)))));
	V147= (*(LnkLI119))((V134),cdr((V135)));
	{object V148 = make_cons(/* INLINE-ARGS */V146,/* INLINE-ARGS */V147);
	VMR6(V148)}
T395:;
	V149= car((V135));
	V150= (*(LnkLI119))((V134),cdr((V135)));
	{object V151 = make_cons(/* INLINE-ARGS */V149,/* INLINE-ARGS */V150);
	VMR6(V151)}}
}
/*	local entry for function MAKE-T-TYPE	*/

static object LI7(V155,V156,V157)

object V155;object V156;object V157;
{	 VMB7 VMS7 VMV7
TTL:;
	{object V158;
	V158= Cnil;
	{register object V159;
	V159= (VFUN_NARGS=5,(*(LnkLI120))((V155),VV[52],VV[53],VV[54],Ct));
	if(((V156))==Cnil){
	goto T421;}
	{object V160;
	object V161;
	V160= get((V156),VV[55],Cnil);
	V161= Cnil;
	if((V160)!=Cnil){
	goto T425;}
	base[0]= VV[56];
	base[1]= (V156);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
T425:;
	V161= structure_ref((V160),VV[55],2);
	{object V162;
	register object V163;
	V164 = make_fixnum(length((V161)));
	V162= (number_compare((V155),V164)<=0?((V155)):V164);
	V163= small_fixnum(0);
T433:;
	if(!(number_compare((V163),(V162))>=0)){
	goto T434;}
	goto T421;
T434:;
	V165= aref1((V161),fixint((V163)));
	(void)(aset1((V159),fixint((V163)),/* INLINE-ARGS */V165));
	V163= one_plus((V163));
	goto T433;}}
T421:;
	{register object V166;
	register object V167;
	V166= (V157);
	V167= car((V166));
T446:;
	if(!(endp((V166)))){
	goto T447;}
	goto T442;
T447:;
	V158= car(cddddr((V167)));
	{register object V168;
	V168= caddr((V167));
	base[1]= (V168);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk121)();
	vs_top=sup;
	V169= vs_base[0];
	if(!(number_compare(V169,symbol_value(VV[57]))<=0)){
	goto T453;}
	base[1]= (V168);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	V170= vs_base[0];
	(void)(aset1((V159),fixint((V158)),V170));}
T453:;
	V166= cdr((V166));
	V167= car((V166));
	goto T446;}
T442:;
	V171 = make_fixnum(length(symbol_value(VV[58])));
	if(!(number_compare((V155),V171)<0)){
	goto T467;}
	{register object V173;
	V173= small_fixnum(0);
T472:;
	if(!(number_compare((V173),V155)>=0)){
	goto T473;}
	goto T469;
T473:;
	{int V174= fix(aref1((V159),fixint((V173))));
	if((/* INLINE-ARGS */V174)==(0)){
	goto T477;}}
	{object V175 = (V159);
	VMR7(V175)}
T477:;
	V173= one_plus((V173));
	goto T472;}
T469:;
	{object V176 = symbol_value(VV[58]);
	VMR7(V176)}
T467:;
	{object V177 = (V159);
	VMR7(V177)}}}
}
/*	local entry for function ROUND-UP	*/

static int LI8(V180,V181)

int V180;int V181;
{	 VMB8 VMS8 VMV8
TTL:;
	base[0]= make_fixnum(V180);
	base[1]= make_fixnum(V181);
	vs_top=(vs_base=base+0)+2;
	Lceiling();
	vs_top=sup;
	V180= fix(vs_base[0]);
	{int V182 = (V180)*(V181);
	VMR8(V182)}
}
/*	local entry for function GET-SLOT-POS	*/

static object LI9(V186,V187,V188)

object V186;object V187;object V188;
{	 VMB9 VMS9 VMV9
TTL:;
	{register object V189;
	object V190;
	object V191;
	V189= Cnil;
	V190= Cnil;
	V191= Cnil;
	{register object V192;
	register object V193;
	V192= (V188);
	V193= car((V192));
T495:;
	if(!(endp((V192)))){
	goto T496;}
	goto T491;
T496:;
	if(((V193))==Cnil){
	goto T500;}
	if((car((V193)))==Cnil){
	goto T500;}
	V189= (*(LnkLI117))(caddr((V193)));
	if(type_of(cddr(V193))!=t_cons)FEwrong_type_argument(Scons,cddr(V193));
	(cddr(V193))->c.c_car = V189;
	(void)(cddr(V193));
	{register object V196;
	V196= cadr((V193));
	base[1]= (V196);
	base[2]= (V189);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk123)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T509;}
	if(!(type_of((V196))==t_symbol)){
	goto T515;}
	base[1]= (V196);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T515;}
	base[1]= (V196);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_value();
	vs_top=sup;
	V196= vs_base[0];
T515:;
	base[1]= (V196);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T523;}
	goto T509;
T523:;
	{object V198;
	V198= (*(LnkLI124))((V196),(V189));
	if(type_of(cdr(V193))!=t_cons)FEwrong_type_argument(Scons,cdr(V193));
	(cdr(V193))->c.c_car = (V198);
	(void)(cdr(V193));}}
T509:;
	{register object x= (V189),V199= VV[60];
	while(!endp(V199))
	if(x==(V199->c.c_car)){
	goto T529;
	}else V199=V199->c.c_cdr;
	goto T500;}
T529:;
	V190= Ct;
T500:;
	V192= cdr((V192));
	V193= car((V192));
	goto T495;}
T491:;
	{object V200;
	if(((V190))==Cnil){
	goto T537;}
	V200= Cnil;
	goto T536;
T537:;
	V201 = make_fixnum(length(symbol_value(VV[59])));
	if(number_compare((V186),V201)<0){
	goto T539;}
	V200= Cnil;
	goto T536;
T539:;{object V202;
	V202= symbol_value(VV[59]);
	base[0]= Ct;
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk125)();
	vs_top=sup;
	V203= vs_base[0];
	V200= list(3,V202,number_times((V186),V203),Cnil);}
T536:;
	if(((V200))==Cnil){
	goto T544;}
	{object V204 = (V200);
	VMR9(V204)}
T544:;
	{object V205;
	register int V206;
	int V207;
	int V208;
	object V209;
	int V210;
	V205= (VFUN_NARGS=5,(*(LnkLI120))((V186),VV[52],VV[61],VV[54],Ct));
	V206= 0;
	V207= 0;
	V208= 0;
	V210= 0;
	V209= Cnil;
	{register object V211;
	register object V212;
	V211= (V188);
	V212= car((V211));
T555:;
	if(!(endp((V211)))){
	goto T556;}
	goto T551;
T556:;
	V209= caddr((V212));
	base[1]= (V209);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk121)();
	vs_top=sup;
	V208= fix(vs_base[0]);
	V213 = make_fixnum(V208);
	if(number_compare(V213,symbol_value(VV[57]))<=0){
	goto T565;}
	V209= Ct;
	if(type_of(cddr(V212))!=t_cons)FEwrong_type_argument(Scons,cddr(V212));
	(cddr(V212))->c.c_car = Ct;
	(void)(cddr(V212));
	V208= fix(symbol_value(VV[57]));
	V212= nconc((V212),VV[62]);
T565:;
	V210= (*(LnkLI126))(V206,V208);
	if(!((V206)==(V210))){
	goto T578;}
	goto T577;
T578:;
	V191= Ct;
T577:;
	V206= V210;
	V216 = make_fixnum(V206);
	(void)(aset1((V205),V207,V216));
	V217 = make_fixnum(V206);
	base[1]= (V209);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk125)();
	vs_top=sup;
	V218= vs_base[0];
	V206= fix(number_plus(V217,V218));
	V207= (V207)+(1);
	V211= cdr((V211));
	V212= car((V211));
	goto T555;}
T551:;
	base[0]= Ct;
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk125)();
	vs_top=sup;
	V219= vs_base[0];
	V220 = make_fixnum((*(LnkLI126))(V206,fix(V219)));
	{object V221 = list(3,(V205),V220,(V191));
	VMR9(V221)}}}}
}
/*	local entry for function DEFINE-STRUCTURE	*/

static object LI10(V233,V232,V231,V230,V229,V228,V227,V226,V225,V224,V223,V222,va_alist)
	object V233,V232,V231,V230,V229,V228,V227,V226,V225,V224,V223,V222;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V234;
	register object V235;
	object V236;
	object V237;
	object V238;
	object V239;
	register object V240;
	object V241;
	object V242;
	object V243;
	object V244;
	object V245;
	register object V246;
	if(narg <12) too_few_arguments();
	Vcs[0]=MMcons(V233,Cnil);
	V234= V232;
	V235= V231;
	V236= V230;
	V237= V229;
	V238= V228;
	V239= V227;
	V240= V226;
	V241= V225;
	V242= V224;
	V243= V223;
	V244= V222;
	narg = narg - 12;
	if (narg <= 0) goto T597;
	else {
	va_start(ap);
	V245= va_arg(ap,object);}
	if (--narg <= 0) goto T598;
	else {
	V246= va_arg(ap,object);}
	--narg; goto T599;
T597:;
	V245= Cnil;
T598:;
	V246= Cnil;
T599:;
	{object V247;
	object V248;
	V247= Cnil;
	V248= Cnil;
	if(type_of((V235))==t_cons){
	goto T605;}
	goto T604;
T605:;
	if((car((V235)))==(VV[19])){
	goto T607;}
	goto T604;
T607:;
	V235= VV[19];
T604:;
	V248= make_fixnum(length((V237)));
	{register object V249;
	register object V250;
	V249= (V237);
	V250= car((V249));
T616:;
	if(!(endp((V249)))){
	goto T617;}
	goto T612;
T617:;
	if((V250)==Cnil){
	goto T621;}
	if((car((V250)))!=Cnil){
	goto T622;}
	goto T621;
T622:;
	base[1]= (Vcs[0]->c.c_car);
	base[2]= (V234);
	base[3]= (V235);
	base[4]= (V236);
	base[5]= (V240);
	base[6]= (V246);
	{object V251;
	V251= (V250);
	 vs_top=base+7;
	 while(!endp(V251))
	 {vs_push(car(V251));V251=cdr(V251);}
	vs_base=base+1;}
	(void) (*Lnk127)();
	vs_top=sup;
T621:;
	V249= cdr((V249));
	V250= car((V249));
	goto T616;}
T612:;
	if(((V238))==Cnil){
	goto T636;}
	if(((V246))!=Cnil){
	goto T636;}
	base[0]= (V238);
	{object V252= (V235);
	if((V252!= Cnil))goto T643;
	base[1]= symbol_function(VV[128]);
	goto T642;
T643:;
	if((V252!= VV[20]))goto T644;
	base[1]= symbol_function(VV[129]);
	goto T642;
T644:;
	if((V252!= VV[19]))goto T645;
	base[1]= symbol_function(VV[130]);
	goto T642;
T645:;
	FEerror("The ECASE key value ~s is illegal.",1,V252);}
T642:;
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
T636:;
	if(((V235))!=Cnil){
	goto T648;}
	if(!(((Vcs[0]->c.c_car))==(VV[55]))){
	goto T648;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk125)();
	vs_top=sup;
	V253= vs_base[0];
	V254= number_times((V248),V253);
	base[0]= (VFUN_NARGS=5,(*(LnkLI120))(/* INLINE-ARGS */V254,VV[52],VV[63],VV[54],Ct));
	base[1]= (*(LnkLI131))((V248),Cnil,(V237));
	base[2]= symbol_value(VV[59]);
	base[3]= (V237);
	base[4]= Ct;
	vs_top=(vs_base=base+0)+5;
	(void) (*Lnk132)();
	vs_top=sup;
	V247= vs_base[0];
	goto T646;
T648:;
	{object V255;
	object V256;
	object V257;
	object V258;
	if((V240)==Cnil){
	V258= Cnil;
	goto T660;}
	V258= get((V240),VV[55],Cnil);
T660:;
	V255= Cnil;
	V256= small_fixnum(0);
	V257= Cnil;
	if(((V258))==Cnil){
	goto T661;}
	if((structure_ref((V258),VV[55],11))==Cnil){
	goto T664;}
	if((structure_ref((V258),VV[55],3))==Cnil){
	goto T665;}
	{object V259;
	V259= get((Vcs[0]->c.c_car),VV[55],Cnil);
	if((V259)==Cnil){
	goto T670;}
	V260= structure_ref((V259),VV[55],4);
	if((/* INLINE-ARGS */V260)==((V258))){
	goto T664;}}
T670:;
T665:;
	(void)((VFUN_NARGS=2,(*(LnkLI133))(VV[64],(V240))));
T664:;
	{object V262;
	base[1]= (Vcs[0]->c.c_car);
	base[2]= structure_ref(V258,VV[55],3);
	vs_top=(vs_base=base+1)+2;
	Ladjoin();
	vs_top=sup;
	V262= vs_base[0];
	(void)(structure_set(V258,VV[55],3,(V262)));}
T661:;
	if(((V235))!=Cnil){
	goto T675;}
	V255= (*(LnkLI134))((V248),(V240),(V237));
	V256= cadr((V255));
	V257= caddr((V255));
	V255= car((V255));
T675:;
	if(((V235))==Cnil){
	goto T687;}
	V263= Cnil;
	goto T686;
T687:;
	V263= (*(LnkLI131))((V248),(V240),(V237));
T686:;
	V247= (VFUN_NARGS=32,(*(LnkLI135))(VV[65],(Vcs[0]->c.c_car),VV[66],(V248),VV[67],V263,VV[68],(V255),VV[69],(V256),VV[70],(V257),VV[71],(V239),VV[72],(V258),VV[73],(V241),VV[74],(V237),VV[75],(V242),VV[76],(V243),VV[77],(V235),VV[78],(V236),VV[79],(V245),VV[80],(V234)));}
T646:;
	{object V264;
	V264= get((Vcs[0]->c.c_car),VV[55],Cnil);
	if(!(((Vcs[0]->c.c_car))==(VV[55]))){
	goto T693;}
	if(((V264))==Cnil){
	goto T695;}
	(void)((VFUN_NARGS=1,(*(LnkLI133))(VV[81])));
T695:;
	if((V264)!=Cnil){
	goto T691;}
	(void)(sputprop((Vcs[0]->c.c_car),VV[55],(V247)));
	goto T691;
T693:;
	if(((V264))==Cnil){
	goto T699;}
	(void)((*(LnkLI136))((V264),(V247),(Vcs[0]->c.c_car)));
	goto T691;
T699:;
	(void)(sputprop((Vcs[0]->c.c_car),VV[55],(V247)));
T691:;
	if(((V245))==Cnil){
	goto T701;}
	(void)(sputprop((Vcs[0]->c.c_car),VV[82],(V245)));
T701:;
	if(((V235))!=Cnil){
	goto T689;}
	if(((V244))==Cnil){
	goto T689;}
	base[0]= (V244);
	base[1]= VV[3];
	base[2]= VV[83];
	base[3]= Ct;
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk111)();
	vs_top=sup;
	if((V246)!=Cnil){
	goto T713;}
	base[0]= (V244);
	base[1]= 
	make_cclosure_new(LC20,Cnil,Vcs[0],Cdata);
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
T713:;
	(void)(sputprop((V244),VV[84],VV[85]));
	(void)(sputprop((V244),VV[86],(Vcs[0]->c.c_car)));}
T689:;
	{object V265 = Cnil;
	VMR10(V265)}}}
	}
/*	macro definition for DEFSTRUCT	*/

static L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	check_arg(2);
	vs_top=sup;
	{object V266=base[0]->c.c_cdr;
	if(endp(V266))invalid_macro_call();
	base[2]= (V266->c.c_car);
	V266=V266->c.c_cdr;
	base[3]= V266;}
	{register object V267;
	object V268;
	register object V269;
	register object V270;
	register object V271;
	register object V272;
	register object V273;
	register object V274;
	register object V275;
	register object V276;
	register object V277;
	register object V278;
	register object V279;
	register object V280;
	register object V281;
	object V282;
	object V283;
	register object V284;
	V267= base[3];
	V268= Cnil;
	V269= Cnil;
	V270= Cnil;
	V271= Cnil;
	V272= Cnil;
	V273= Cnil;
	V274= Cnil;
	V275= Cnil;
	V276= Cnil;
	V277= Cnil;
	V278= Cnil;
	V279= Cnil;
	V280= Cnil;
	V281= Cnil;
	V282= Cnil;
	V283= Cnil;
	V284= Cnil;
	if(!(type_of(base[2])==t_cons)){
	goto T717;}
	V268= cdr(base[2]);
	base[2]= car(base[2]);
T717:;
	base[4]= coerce_to_string(base[2]);
	base[5]= VV[87];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk109)();
	vs_top=sup;
	V269= vs_base[0];
	base[5]= VV[88];
	base[6]= coerce_to_string(base[2]);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk109)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V271= vs_base[0];
	base[5]= VV[89];
	base[6]= coerce_to_string(base[2]);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk109)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V273= vs_base[0];
	base[5]= coerce_to_string(base[2]);
	base[6]= VV[90];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk109)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V274= vs_base[0];
	{register object V285;
	register object V286;
	register object V287;
	V285= (V268);
	V286= Cnil;
	V287= Cnil;
T744:;
	if(!(endp((V285)))){
	goto T745;}
	goto T742;
T745:;
	if(!(type_of(car((V285)))==t_cons)){
	goto T751;}
	if(endp(cdar((V285)))){
	goto T751;}
	V286= caar((V285));
	V287= cadar((V285));
	{object V288= (V286);
	if((V288!= VV[80]))goto T759;
	if(((V287))!=Cnil){
	goto T761;}
	V269= VV[91];
	goto T749;
T761:;
	V269= (V287);
	goto T749;
T759:;
	if((V288!= VV[137]))goto T765;
	if(((V287))!=Cnil){
	goto T767;}
	V272= Ct;
	goto T749;
T767:;
	if(!(endp(cddar((V285))))){
	goto T771;}
	V270= make_cons((V287),(V270));
	goto T749;
T771:;
	V270= make_cons(cdar((V285)),(V270));
	goto T749;
T765:;
	if((V288!= VV[138]))goto T775;
	V273= (V287);
	goto T749;
T775:;
	if((V288!= VV[54]))goto T777;
	V284= (V287);
	goto T749;
T777:;
	if((V288!= VV[139]))goto T779;
	V274= (V287);
	V275= Ct;
	goto T749;
T779:;
	if((V288!= VV[140]))goto T783;
	V276= cdar((V285));
	if((get((V287),VV[55],Cnil))!=Cnil){
	goto T749;}
	base[4]= VV[92];
	base[5]= (V287);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
	goto T749;
T783:;
	if((V288!= VV[73]))goto T790;
	if(type_of((V287))==t_cons){
	goto T792;}
	goto T791;
T792:;
	if((car((V287)))==(VV[93])){
	goto T794;}
	goto T791;
T794:;
	V287= cadr((V287));
T791:;
	V277= (V287);
	goto T749;
T790:;
	if((V288!= VV[77]))goto T798;
	V278= (V287);
	goto T749;
T798:;
	if((V288!= VV[141]))goto T800;
	V280= (V287);
	goto T749;
T800:;
	base[4]= VV[94];
	base[5]= (V286);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
	goto T749;}
T751:;
	if(!(type_of(car((V285)))==t_cons)){
	goto T806;}
	V286= caar((V285));
	goto T804;
T806:;
	V286= car((V285));
T804:;
	{object V289= (V286);
	if((V289!= VV[137]))goto T810;
	V270= make_cons((V271),(V270));
	goto T749;
T810:;
	if((V289!= VV[80])
	&& (V289!= VV[138])
	&& (V289!= VV[139])
	&& (V289!= VV[73]))goto T812;
	goto T749;
T812:;
	if((V289!= VV[78]))goto T813;
	V279= Ct;
	goto T749;
T813:;
	base[4]= VV[95];
	base[5]= (V286);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;}
T749:;
	V285= cdr((V285));
	goto T744;}
T742:;
	base[4]= coerce_to_string((V269));
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V269= vs_base[0];
	if((V276)==Cnil){
	goto T823;}
	if(((V277))==Cnil){
	goto T824;}
	goto T823;
T824:;
	V290= get(car((V276)),VV[55],Cnil);
	V277= structure_ref(V290,VV[55],6);
T823:;
	if(endp((V267))){
	goto T828;}
	if(!(type_of(car((V267)))==t_string)){
	goto T828;}
	V283= car((V267));
	V267= cdr((V267));
T828:;
	if(((V276))==Cnil){
	goto T836;}
	V291= get(car((V276)),VV[55],Cnil);
	V292= structure_ref(V291,VV[55],16);
	if(equal((V278),/* INLINE-ARGS */V292)){
	goto T836;}
	base[4]= VV[96];
	base[5]= car((V276));
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
T836:;
	if(((V276))!=Cnil){
	goto T846;}
	V281= small_fixnum(0);
	goto T844;
T846:;
	V293= get(car((V276)),VV[55],Cnil);
	V281= structure_ref(V293,VV[55],14);
T844:;
	if(((V278))==Cnil){
	goto T851;}
	if(((V280))==Cnil){
	goto T851;}
	V281= number_plus((V281),(V280));
T851:;
	if(((V278))==Cnil){
	goto T857;}
	if(((V279))==Cnil){
	goto T857;}
	V282= (V281);
	V281= one_plus((V281));
T857:;
	{register object V294;
	register object V295;
	V294= (V267);
	V295= Cnil;
T867:;
	if(!(endp((V294)))){
	goto T868;}
	V267= nreverse((V295));
	goto T865;
T868:;
	V296= (*(LnkLI142))(car((V294)),(V281));
	V295= make_cons(/* INLINE-ARGS */V296,(V295));
	V281= one_plus((V281));
	V294= cdr((V294));
	goto T867;}
T865:;
	if(((V278))==Cnil){
	goto T880;}
	if(((V279))==Cnil){
	goto T880;}
	V297= list(2,Cnil,base[2]);
	V267= make_cons(/* INLINE-ARGS */V297,(V267));
T880:;
	if(((V278))==Cnil){
	goto T886;}
	if(((V280))==Cnil){
	goto T886;}
	base[4]= (V280);
	vs_top=(vs_base=base+4)+1;
	Lmake_list();
	vs_top=sup;
	V298= vs_base[0];
	V267= append(V298,(V267));
T886:;
	{object V299;
	V299= (((V276))==Cnil?Ct:Cnil);
	if(((V299))==Cnil){
	goto T897;}
	goto T894;
T897:;
	if(!(endp(cdr((V276))))){
	goto T900;}
	V300= get(car((V276)),VV[55],Cnil);
	V301= structure_ref(V300,VV[55],7);
	V267= append(/* INLINE-ARGS */V301,(V267));
	goto T894;
T900:;
	{object V303;
	object V304= cdr((V276));
	if(endp(V304)){
	V302= Cnil;
	goto T905;}
	base[4]=V303=MMcons(Cnil,Cnil);
T906:;
	(V303->c.c_car)= (*(LnkLI142))((V304->c.c_car),small_fixnum(0));
	if(endp(V304=MMcdr(V304))){
	V302= base[4];
	goto T905;}
	V303=MMcdr(V303)=MMcons(Cnil,Cnil);
	goto T906;}
T905:;
	V306= get(car((V276)),VV[55],Cnil);
	V307= structure_ref(V306,VV[55],7);
	V308= (*(LnkLI119))(V302,/* INLINE-ARGS */V307);
	V267= append(/* INLINE-ARGS */V308,(V267));}
T894:;
	if(((V272))==Cnil){
	goto T911;}
	if(((V270))==Cnil){
	goto T909;}
	base[4]= VV[97];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T909;
T911:;
	if(((V270))!=Cnil){
	goto T909;}
	V270= make_cons((V271),Cnil);
T909:;{object V309;
	{object V312;
	object V313= (V270);
	if(endp(V313)){
	V311= Cnil;
	goto T922;}
	base[4]=V312=MMcons(Cnil,Cnil);
T923:;
	base[5]= (V313->c.c_car);
	vs_top=(vs_base=base+5)+1;
	Lsymbolp();
	vs_top=sup;
	(V312->c.c_car)= vs_base[0];
	if(endp(V313=MMcdr(V313))){
	V311= base[4];
	goto T922;}
	V312=MMcdr(V312)=MMcons(Cnil,Cnil);
	goto T923;}
T922:;
	{register object x= Ct,V310= V311;
	while(!endp(V310))
	if(eql(x,V310->c.c_car)){
	V309= V310;
	goto T921;
	}else V310=V310->c.c_cdr;
	V309= Cnil;}
T921:;
	if(V309==Cnil)goto T920;
	goto T919;
T920:;}
	base[5]= VV[98];
	base[6]= (V271);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk109)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V314= vs_base[0];
	V270= make_cons(V314,(V270));
T919:;
	if(((V278))==Cnil){
	goto T931;}
	if(((V279))!=Cnil){
	goto T931;}
	if(((V275))==Cnil){
	goto T936;}
	base[4]= VV[99];
	base[5]= (V274);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
T936:;
	V274= Cnil;
T931:;
	if(((V276))==Cnil){
	goto T942;}
	V276= car((V276));
T942:;
	if(((V277))==Cnil){
	goto T946;}
	if(((V278))==Cnil){
	goto T946;}
	base[4]= VV[100];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
T946:;
	base[4]= VV[102];
	base[5]= list(2,VV[11],base[2]);
	base[6]= list(2,VV[11],(V269));
	base[7]= list(2,VV[11],(V278));
	base[8]= list(2,VV[11],(V279));
	base[9]= list(2,VV[11],(V267));
	base[10]= list(2,VV[11],(V273));
	base[11]= list(2,VV[11],(V284));
	base[12]= list(2,VV[11],(V276));
	base[13]= list(2,VV[11],(V277));
	base[14]= list(2,VV[11],(V270));
	base[15]= list(2,VV[11],(V281));
	base[16]= list(2,VV[11],(V274));
	base[17]= list(2,VV[11],(V283));
	vs_top=(vs_base=base+4)+14;
	Llist();
	vs_top=sup;
	V315= vs_base[0];
	{object V317;
	object V318= (V270);
	if(endp(V318)){
	base[4]= Cnil;
	goto T968;}
	base[5]=V317=MMcons(Cnil,Cnil);
T969:;
	(V317->c.c_car)= (*(LnkLI143))(base[2],(V318->c.c_car),(V278),(V279),(V267));
	if(endp(V318=MMcdr(V318))){
	base[4]= base[5];
	goto T968;}
	V317=MMcdr(V317)=MMcons(Cnil,Cnil);
	goto T969;}
T968:;
	if(((V278))==Cnil){
	goto T973;}
	if(((V274))==Cnil){
	goto T973;}
	V320= (*(LnkLI144))(base[2],(V274),(V278),(V279),(V282));
	base[5]= make_cons(/* INLINE-ARGS */V320,Cnil);
	goto T971;
T973:;
	base[5]= Cnil;
T971:;
	V321= list(2,VV[11],base[2]);
	base[6]= make_cons(/* INLINE-ARGS */V321,Cnil);
	vs_top=(vs_base=base+4)+3;
	Lappend();
	vs_top=sup;
	V316= vs_base[0];
	base[4]= listA(3,VV[101],V315,V316);
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	local entry for function MAKE-S-DATA	*/

static object LI12(va_alist)
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V322;
	object V323;
	object V324;
	object V325;
	object V326;
	object V327;
	object V328;
	object V329;
	object V330;
	object V331;
	object V332;
	object V333;
	object V334;
	object V335;
	object V336;
	object V337;
	object V338;
	object V339;
	narg= narg - 0;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +0,&LI12key,ap);
	V322=(Vcs[0]);
	V323=(Vcs[1]);
	V324=(Vcs[2]);
	V325=(Vcs[3]);
	V326=(Vcs[4]);
	V327=(Vcs[5]);
	V328=(Vcs[6]);
	V329=(Vcs[7]);
	V330=(Vcs[8]);
	V331=(Vcs[9]);
	V332=(Vcs[10]);
	V333=(Vcs[11]);
	V334=(Vcs[12]);
	V335=(Vcs[13]);
	V336=(Vcs[14]);
	V337=(Vcs[15]);
	V338=(Vcs[16]);
	V339=(Vcs[17]);
	base[0]= VV[55];
	base[1]= (V322);
	base[2]= (V323);
	base[3]= (V324);
	base[4]= (V325);
	base[5]= (V326);
	base[6]= (V327);
	base[7]= (V328);
	base[8]= (V329);
	base[9]= (V330);
	base[10]= (V331);
	base[11]= (V332);
	base[12]= (V333);
	base[13]= (V334);
	base[14]= (V335);
	base[15]= (V336);
	base[16]= (V337);
	base[17]= (V338);
	base[18]= (V339);
	vs_top=(vs_base=base+0)+19;
	siLmake_structure();
	vs_top=sup;
	{object V340 = vs_base[0];
	VMR12(V340)}}
	}}
/*	local entry for function CHECK-S-DATA	*/

static object LI13(V344,V345,V346)

register object V344;register object V345;object V346;
{	 VMB13 VMS13 VMV13
TTL:;
	if((structure_ref((V344),VV[55],3))==Cnil){
	goto T997;}
	V347= structure_ref((V344),VV[55],3);
	(void)(structure_set((V345),VV[55],3,/* INLINE-ARGS */V347));
T997:;
	if((structure_ref((V344),VV[55],11))==Cnil){
	goto T1000;}
	(void)(structure_set((V345),VV[55],11,Ct));
T1000:;
	if(equalp((V345),(V344))){
	goto T1004;}
	(void)((VFUN_NARGS=2,(*(LnkLI133))(VV[103],(V346))));
	{object V348 = sputprop((V346),VV[55],(V345));
	VMR13(V348)}
T1004:;
	{object V349 = Cnil;
	VMR13(V349)}
}
/*	local entry for function FREEZE-DEFSTRUCT	*/

static object LI14(V351)

object V351;
{	 VMB14 VMS14 VMV14
TTL:;
	{object V352;
	if(type_of((V351))==t_symbol){
	goto T1008;}
	V352= Cnil;
	goto T1007;
T1008:;
	V352= get((V351),VV[55],Cnil);
T1007:;
	if(((V352))==Cnil){
	goto T1011;}
	{object V353 = structure_set((V352),VV[55],11,Ct);
	VMR14(V353)}
T1011:;
	{object V354 = Cnil;
	VMR14(V354)}}
}
/*	function definition for SHARP-S-READER	*/

static L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	{object V355;
	object V356;
	object V357;
	check_arg(3);
	V355=(base[0]);
	V356=(base[1]);
	V357=(base[2]);
	vs_top=sup;
TTL:;
	if(((V357))==Cnil){
	goto T1013;}
	if((symbol_value(VV[104]))!=Cnil){
	goto T1013;}
	base[3]= VV[105];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
T1013:;
	{register object V358;
	register object V359;
	{object V360;
	base[5]= (V355);
	base[6]= Ct;
	base[7]= Cnil;
	base[8]= Ct;
	vs_top=(vs_base=base+5)+4;
	Lread();
	vs_top=sup;
	V360= vs_base[0];
	if((symbol_value(VV[104]))==Cnil){
	goto T1025;}
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;
T1025:;
	V358= (V360);}{object V361;
	V361= get(car((V358)),VV[55],Cnil);
	if(V361==Cnil)goto T1029;
	V359= V361;
	goto T1028;
T1029:;}
	base[5]= VV[106];
	base[6]= car((V358));
	vs_top=(vs_base=base+5)+2;
	Lerror();
	vs_top=sup;
	V359= vs_base[0];
T1028:;
	{register object V362;
	V362= cdr((V358));
T1035:;
	if(!(endp((V362)))){
	goto T1036;}
	{register object V363;
	V363= structure_ref((V359),VV[55],13);
T1041:;
	if(!(endp((V363)))){
	goto T1042;}
	base[5]= VV[107];
	base[6]= car((V358));
	vs_top=(vs_base=base+5)+2;
	Lerror();
	return;
T1042:;
	if(!(type_of(car((V363)))==t_symbol)){
	goto T1048;}
	base[5]= car((V363));
	{object V364;
	V364= cdr((V358));
	 vs_top=base+6;
	 while(!endp(V364))
	 {vs_push(car(V364));V364=cdr(V364);}
	vs_base=base+6;}
	super_funcall_no_event(base[5]);
	return;
T1048:;
	V363= cdr((V363));
	goto T1041;}
T1036:;
	base[5]= coerce_to_string(car((V362)));
	base[6]= VV[108];
	vs_top=(vs_base=base+5)+2;
	Lintern();
	vs_top=sup;
	V365= vs_base[0];
	if(type_of((V362))!=t_cons)FEwrong_type_argument(Scons,(V362));
	((V362))->c.c_car = V365;
	V362= cddr((V362));
	goto T1035;}}
	}
}
/*	local function CLOSURE	*/

static LC20(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{object V366;
	check_arg(1);
	V366=(base[0]);
	vs_top=sup;
	base[1]= (V366);
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk148)();
	return;
	}
}
/*	local function CLOSURE	*/

static LC19(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{object V367;
	check_arg(1);
	V367=(base[0]);
	vs_top=sup;
	if(!(type_of((V367))==t_cons)){
	goto T1067;}
	base[1]= car((V367));
	vs_top=(vs_base=base+1)+1;
	return;
T1067:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static LC18(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{object V368;
	check_arg(1);
	V368=(base[0]);
	vs_top=sup;
	base[1]= aref1((V368),fixint((base0[0]->c.c_car)));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static LC17(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{object V369;
	check_arg(1);
	V369=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V369);
	vs_top=(vs_base=base+1)+2;
	siLlist_nth();
	return;
	}
}
/*	local function CLOSURE	*/

static LC16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{object V370;
	check_arg(1);
	V370=(base[0]);
	vs_top=sup;
	if(!(type_of((V370))==t_structure)){
	goto T1072;}
	goto T1071;
T1072:;
	base[1]= VV[5];
	base[2]= (V370);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
T1071:;
	base[1]= (V370);
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk149)();
	return;
	}
}
static LnkT149(){ call_or_link(VV[149],&Lnk149);} /* STRUCTURE-REF1 */
static LnkT148(){ call_or_link(VV[148],&Lnk148);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI144(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[144],&LnkLI144,5,ap);} /* MAKE-PREDICATE */
static object  LnkTLI143(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[143],&LnkLI143,5,ap);} /* MAKE-CONSTRUCTOR */
static object  LnkTLI142(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[142],&LnkLI142,2,ap);} /* PARSE-SLOT-DESCRIPTION */
static object  LnkTLI136(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[136],&LnkLI136,3,ap);} /* CHECK-S-DATA */
static object  LnkTLI135(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[135],&LnkLI135,ap);} /* MAKE-S-DATA */
static object  LnkTLI134(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[134],&LnkLI134,3,ap);} /* GET-SLOT-POS */
static object  LnkTLI133(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[133],&LnkLI133,ap);} /* WARN */
static LnkT132(){ call_or_link(VV[132],&Lnk132);} /* MAKE-S-DATA-STRUCTURE */
static object  LnkTLI131(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[131],&LnkLI131,3,ap);} /* MAKE-T-TYPE */
static LnkT127(){ call_or_link(VV[127],&Lnk127);} /* MAKE-ACCESS-FUNCTION */
static int  LnkTLI126(va_alist)va_dcl{va_list ap;va_start(ap);return(int )call_proc(VV[126],&LnkLI126,20738,ap);} /* ROUND-UP */
static LnkT125(){ call_or_link(VV[125],&Lnk125);} /* SIZE-OF */
static object  LnkTLI124(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[124],&LnkLI124,2,ap);} /* COERCE */
static LnkT123(){ call_or_link(VV[123],&Lnk123);} /* TYPEP */
static LnkT122(){ call_or_link(VV[122],&Lnk122);} /* AET-TYPE */
static LnkT121(){ call_or_link(VV[121],&Lnk121);} /* ALIGNMENT */
static object  LnkTLI120(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[120],&LnkLI120,ap);} /* MAKE-ARRAY */
static object  LnkTLI119(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[119],&LnkLI119,2,ap);} /* OVERWRITE-SLOT-DESCRIPTIONS */
static object  LnkTLI118(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[118],&LnkLI118,1,ap);} /* NORMALIZE-TYPE */
static object  LnkTLI117(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[117],&LnkLI117,1,ap);} /* BEST-ARRAY-ELEMENT-TYPE */
static LnkT115(){ call_or_link(VV[115],&Lnk115);} /* X */
static object  LnkTLI113(){return call_proc0(VV[113],&LnkLI113);} /* ILLEGAL-BOA */
static LnkT112(){ call_or_link(VV[112],&Lnk112);} /* SUBTYPEP */
static LnkT111(){ call_or_link(VV[111],&Lnk111);} /* RECORD-FN */
static object  LnkTLI110(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[110],&LnkLI110,ap);} /* ADJUST-ARRAY */
static LnkT109(){ call_or_link(VV[109],&Lnk109);} /* STRING-CONCATENATE */
