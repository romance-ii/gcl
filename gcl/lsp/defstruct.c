
#include "cmpinclude.h"
#include "defstruct.h"
void init_defstruct(){do_init(VV);}
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
	Vcs[0]=Vcs[0];
	va_start(ap);
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
	V22= va_arg(ap,object);}
	--narg; goto T2;
goto T1;
T1:;
	V22= Cnil;
goto T2;
T2:;
	{register object V23;
	register object V24;
	object V25;
	base[1]= coerce_to_string((V13));
	base[2]= coerce_to_string((V18));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk107)();
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
goto T9;
T9:;
	if((V26!= VV[20]))goto T11;
	V24= symbol_value(VV[1]);
	goto T8;
goto T11;
T11:;
	if((V26!= VV[19]))goto T13;
	V24= symbol_value(VV[2]);
	goto T8;
goto T13;
T13:;
	FEerror("The ECASE key value ~s is illegal.",1,V26);
	goto T8;}
goto T8;
T8:;
	V27 = make_fixnum((long)length((V24)));
	if(!(number_compare(V27,(Vcs[10]->c.c_car))>0)){
	goto T16;}
	goto T15;
goto T16;
T16:;
	V28= number_plus((Vcs[10]->c.c_car),small_fixnum(10));
	(void)((VFUN_NARGS=2,(*(LnkLI108))((V24),/* INLINE-ARGS */V28)));
goto T15;
T15:;
	if(((V25))!=Cnil){
	goto T18;}
	base[0]= (V23);
	base[1]= VV[3];
	base[2]= VV[4];
	base[3]= (V20);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk109)();
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
goto T28;
T28:;
	V30= aref1((V24),fixint((Vcs[10]->c.c_car)));
	base[0]= (V23);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V31= vs_base[0];
	V29= ((/* INLINE-ARGS */V30)==(V31)?Ct:Cnil);
goto T27;
T27:;
	if(V29==Cnil)goto T26;
	goto T18;
goto T26;
T26:;}
	base[0]= (V23);{object V32;
	V32= aref1((V24),fixint((Vcs[10]->c.c_car)));
	if(V32==Cnil)goto T35;
	base[1]= V32;
	goto T34;
goto T35;
T35:;}
	if(!(((V24))==(symbol_value(VV[0])))){
	goto T39;}
	V33= 
	make_cclosure_new(LC16,Cnil,Vcs[10],Cdata);
	goto T37;
goto T39;
T39:;
	if(!(((V24))==(symbol_value(VV[1])))){
	goto T42;}
	V33= 
	make_cclosure_new(LC17,Cnil,Vcs[10],Cdata);
	goto T37;
goto T42;
T42:;
	if(!(((V24))==(symbol_value(VV[2])))){
	goto T45;}
	V33= 
	make_cclosure_new(LC18,Cnil,Vcs[10],Cdata);
	goto T37;
goto T45;
T45:;
	V33= Cnil;
goto T37;
T37:;
	base[1]= aset1((V24),fixint((Vcs[10]->c.c_car)),V33);
goto T34;
T34:;
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
goto T18;
T18:;
	if(((V21))==Cnil){
	goto T49;}
	(void)(remprop((V23),VV[6]));
	(void)(sputprop((V23),VV[7],Ct));
	goto T47;
goto T49;
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
	(void) (*Lnk110)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T57;}
	if(!(eql(cdr((V34)),(Vcs[10]->c.c_car)))){
	goto T57;}
	V25= Ct;
	goto T47;
goto T57;
T57:;
	if(((V14))==Cnil){
	goto T70;}
	V35= (V14);
	goto T68;
goto T70;
T70:;
	V35= (V12);
goto T68;
T68:;
	V36= make_cons(V35,(Vcs[10]->c.c_car));
	(void)(sputprop((V23),VV[6],/* INLINE-ARGS */V36));}
goto T47;
T47:;
	{object V37 = Cnil;
	VMR1(V37)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-CONSTRUCTOR	*/

static object LI2(V43,V44,V45,V46,V47)

object V43;object V44;object V45;object V46;object V47;
{	 VMB2 VMS2 VMV2
goto TTL;
TTL:;
	{object V48;
	register object V49;
	{object V50;
	object V51= (V47);
	if(endp(V51)){
	V48= Cnil;
	goto T72;}
	base[0]=V50=MMcons(Cnil,Cnil);
goto T73;
T73:;
	if(((V51->c.c_car))!=Cnil){
	goto T76;}
	(V50->c.c_car)= Cnil;
	goto T74;
goto T76;
T76:;
	if((car((V51->c.c_car)))!=Cnil){
	goto T79;}
	(V50->c.c_car)= list(2,VV[11],cadr((V51->c.c_car)));
	goto T74;
goto T79;
T79:;
	(V50->c.c_car)= car((V51->c.c_car));
goto T74;
T74:;
	V51=MMcdr(V51);
	if(endp(V51)){
	V48= base[0];
	goto T72;}
	V50=MMcdr(V50)=MMcons(Cnil,Cnil);
	goto T73;}
goto T72;
T72:;
	{object V53;
	object V54= (V47);
	if(endp(V54)){
	V49= Cnil;
	goto T81;}
	base[0]=V53=MMcons(Cnil,Cnil);
goto T82;
T82:;
	if(((V54->c.c_car))!=Cnil){
	goto T85;}
	(V53->c.c_cdr)= Cnil;
	goto T83;
goto T85;
T85:;
	if((car((V54->c.c_car)))!=Cnil){
	goto T88;}
	(V53->c.c_cdr)= Cnil;
	goto T83;
goto T88;
T88:;
	if((cadr((V54->c.c_car)))!=Cnil){
	goto T91;}
	(V53->c.c_cdr)= make_cons(car((V54->c.c_car)),Cnil);
	goto T83;
goto T91;
T91:;
	V56= list(2,car((V54->c.c_car)),cadr((V54->c.c_car)));
	(V53->c.c_cdr)= make_cons(/* INLINE-ARGS */V56,Cnil);
goto T83;
T83:;
	{object cdr_V53=MMcdr(V53);while(!endp(cdr_V53)) {cdr_V53=MMcdr(cdr_V53);V53=MMcdr(V53);}}
	V54=MMcdr(V54);
	if(endp(V54)){
	base[0]=base[0]->c.c_cdr;
	V49= base[0];
	goto T81;}
	goto T82;}
goto T81;
T81:;
	if(!(type_of((V44))==t_cons)){
	goto T95;}
	{register object V57;
	register object V58;
	register object V59;
	V57= cadr((V44));
	V58= Cnil;
	V59= Cnil;
goto T100;
T100:;
	if(!(endp_prop((V57)))){
	goto T101;}
	base[0]= make_cons(VV[12],(V58));
	{object V60;
	object V61= (V49);
	if(endp(V61)){
	base[1]= Cnil;
	goto T106;}
	base[2]=V60=MMcons(Cnil,Cnil);
goto T107;
T107:;
	if(!(type_of((V61->c.c_car))!=t_cons)){
	goto T114;}
	V64= (V61->c.c_car);
	goto T112;
goto T114;
T114:;
	V64= car((V61->c.c_car));
goto T112;
T112:;
	{register object x= V64,V63= (V59);
	while(!endp(V63))
	if(eql(x,V63->c.c_car)){
	goto T111;
	}else V63=V63->c.c_cdr;
	goto T110;}
goto T111;
T111:;
	(V60->c.c_cdr)= Cnil;
	goto T108;
goto T110;
T110:;
	(V60->c.c_cdr)= make_cons((V61->c.c_car),Cnil);
goto T108;
T108:;
	{object cdr_V60=MMcdr(V60);while(!endp(cdr_V60)) {cdr_V60=MMcdr(cdr_V60);V60=MMcdr(V60);}}
	V61=MMcdr(V61);
	if(endp(V61)){
	base[2]=base[2]->c.c_cdr;
	base[1]= base[2];
	goto T106;}
	goto T107;}
goto T106;
T106:;
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	V49= vs_base[0];
	goto T97;
goto T101;
T101:;
	{register object x= car((V57)),V65= VV[13];
	while(!endp(V65))
	if(eql(x,V65->c.c_car)){
	goto T119;
	}else V65=V65->c.c_cdr;
	goto T117;}
goto T119;
T119:;
	if(!((car((V57)))==(VV[14]))){
	goto T120;}
	goto T117;
goto T120;
T120:;
	V57= make_cons(VV[14],(V57));
goto T117;
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
goto T132;
T132:;
	if(!(endp_prop((V66)))){
	goto T133;}
	base[0]= make_cons(VV[12],(V58));
	{object V69;
	object V70= (V49);
	if(endp(V70)){
	base[1]= Cnil;
	goto T139;}
	base[2]=V69=MMcons(Cnil,Cnil);
goto T140;
T140:;
	if(!(type_of((V70->c.c_car))!=t_cons)){
	goto T147;}
	V73= (V70->c.c_car);
	goto T145;
goto T147;
T147:;
	V73= car((V70->c.c_car));
goto T145;
T145:;
	{register object x= V73,V72= (V59);
	while(!endp(V72))
	if(eql(x,V72->c.c_car)){
	goto T144;
	}else V72=V72->c.c_cdr;
	goto T143;}
goto T144;
T144:;
	(V69->c.c_cdr)= Cnil;
	goto T141;
goto T143;
T143:;
	(V69->c.c_cdr)= make_cons((V70->c.c_car),Cnil);
goto T141;
T141:;
	{object cdr_V69=MMcdr(V69);while(!endp(cdr_V69)) {cdr_V69=MMcdr(cdr_V69);V69=MMcdr(V69);}}
	V70=MMcdr(V70);
	if(endp(V70)){
	base[2]=base[2]->c.c_cdr;
	base[1]= base[2];
	goto T139;}
	goto T140;}
goto T139;
T139:;
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	V49= vs_base[0];
	goto T129;
goto T133;
T133:;
	{register object x= car((V66)),V74= VV[13];
	while(!endp(V74))
	if(eql(x,V74->c.c_car)){
	goto T152;
	}else V74=V74->c.c_cdr;
	goto T150;}
goto T152;
T152:;
	if(!((car((V66)))==(VV[15]))){
	goto T153;}
	V58= make_cons(VV[15],(V58));
	V66= cdr((V66));
	if(endp_prop((V66))){
	goto T161;}
	if(type_of(car((V66)))==t_symbol){
	goto T160;}
goto T161;
T161:;
	(void)((*(LnkLI111))());
goto T160;
T160:;
	V59= make_cons(car((V66)),(V59));
	V58= make_cons(car((V66)),(V58));
	V66= cdr((V66));
	if(!(endp_prop((V66)))){
	goto T153;}
	base[0]= make_cons(VV[12],(V58));
	{object V75;
	object V76= (V49);
	if(endp(V76)){
	base[1]= Cnil;
	goto T176;}
	base[2]=V75=MMcons(Cnil,Cnil);
goto T177;
T177:;
	if(!(type_of((V76->c.c_car))!=t_cons)){
	goto T184;}
	V79= (V76->c.c_car);
	goto T182;
goto T184;
T184:;
	V79= car((V76->c.c_car));
goto T182;
T182:;
	{register object x= V79,V78= (V59);
	while(!endp(V78))
	if(eql(x,V78->c.c_car)){
	goto T181;
	}else V78=V78->c.c_cdr;
	goto T180;}
goto T181;
T181:;
	(V75->c.c_cdr)= Cnil;
	goto T178;
goto T180;
T180:;
	(V75->c.c_cdr)= make_cons((V76->c.c_car),Cnil);
goto T178;
T178:;
	{object cdr_V75=MMcdr(V75);while(!endp(cdr_V75)) {cdr_V75=MMcdr(cdr_V75);V75=MMcdr(V75);}}
	V76=MMcdr(V76);
	if(endp(V76)){
	base[2]=base[2]->c.c_cdr;
	base[1]= base[2];
	goto T176;}
	goto T177;}
goto T176;
T176:;
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	V49= vs_base[0];
	goto T129;
goto T153;
T153:;
	if((car((V66)))==(VV[12])){
	goto T186;}
	(void)((*(LnkLI111))());
goto T186;
T186:;
	V58= make_cons(VV[12],(V58));
	{register object V80;
	V80= cdr((V66));
goto T194;
T194:;
	if(!(endp_prop((V80)))){
	goto T195;}
	goto T191;
goto T195;
T195:;
	V58= make_cons(car((V80)),(V58));
	if(!(type_of(car((V80)))!=t_cons)){
	goto T203;}
	if(!(type_of(car((V80)))==t_symbol)){
	goto T203;}
	V59= make_cons(car((V80)),(V59));
	goto T201;
goto T203;
T203:;
	if(!(type_of(caar((V80)))==t_symbol)){
	goto T209;}
	if(endp_prop(cdar((V80)))){
	goto T208;}
	if(!(endp_prop(cddar((V80))))){
	goto T209;}
goto T208;
T208:;
	V59= make_cons(caar((V80)),(V59));
	goto T201;
goto T209;
T209:;
	(void)((*(LnkLI111))());
goto T201;
T201:;
	V80= cdr((V80));
	goto T194;}
goto T191;
T191:;
	base[0]= (V58);
	{object V81;
	object V82= (V49);
	if(endp(V82)){
	base[1]= Cnil;
	goto T222;}
	base[2]=V81=MMcons(Cnil,Cnil);
goto T223;
T223:;
	if(!(type_of((V82->c.c_car))!=t_cons)){
	goto T230;}
	V85= (V82->c.c_car);
	goto T228;
goto T230;
T230:;
	V85= car((V82->c.c_car));
goto T228;
T228:;
	{register object x= V85,V84= (V59);
	while(!endp(V84))
	if(eql(x,V84->c.c_car)){
	goto T227;
	}else V84=V84->c.c_cdr;
	goto T226;}
goto T227;
T227:;
	(V81->c.c_cdr)= Cnil;
	goto T224;
goto T226;
T226:;
	(V81->c.c_cdr)= make_cons((V82->c.c_car),Cnil);
goto T224;
T224:;
	{object cdr_V81=MMcdr(V81);while(!endp(cdr_V81)) {cdr_V81=MMcdr(cdr_V81);V81=MMcdr(V81);}}
	V82=MMcdr(V82);
	if(endp(V82)){
	base[2]=base[2]->c.c_cdr;
	base[1]= base[2];
	goto T222;}
	goto T223;}
goto T222;
T222:;
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	V49= vs_base[0];
	goto T129;
goto T150;
T150:;
	if(!(type_of(car((V66)))!=t_cons)){
	goto T238;}
	V67= car((V66));
	goto T236;
goto T238;
T238:;
	if(!(endp_prop(cdar((V66))))){
	goto T243;}
	V67= caar((V66));
	goto T236;
goto T243;
T243:;
	goto T234;
goto T236;
T236:;
	base[0]= (V67);
	base[1]= (V49);
	base[2]= VV[16];
	base[3]= VV[112];
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	V68= vs_base[0];
	if(((V68))==Cnil){
	goto T234;}
	V58= make_cons(car((V68)),(V58));
	goto T232;
goto T234;
T234:;
	V58= make_cons(car((V66)),(V58));
goto T232;
T232:;
	if(!(type_of(car((V66)))!=t_cons)){
	goto T257;}
	if(type_of(car((V66)))==t_symbol){
	goto T259;}
	(void)((*(LnkLI111))());
goto T259;
T259:;
	V59= make_cons(car((V66)),(V59));
	goto T255;
goto T257;
T257:;
	if(type_of(caar((V66)))==t_symbol){
	goto T264;}
	(void)((*(LnkLI111))());
	goto T255;
goto T264;
T264:;
	if(endp_prop(cdar((V66)))){
	goto T266;}
	if(!(endp_prop(cddar((V66))))){
	goto T267;}
goto T266;
T266:;
	V59= make_cons(caar((V66)),(V59));
	goto T255;
goto T267;
T267:;
	if(type_of(caddar((V66)))==t_symbol){
	goto T273;}
	(void)((*(LnkLI111))());
	goto T255;
goto T273;
T273:;
	if(endp_prop(cdddar((V66)))){
	goto T276;}
	(void)((*(LnkLI111))());
	goto T255;
goto T276;
T276:;
	V59= make_cons(caar((V66)),(V59));
	V59= make_cons(caddar((V66)),(V59));
goto T255;
T255:;
	V66= cdr((V66));
	goto T132;}
goto T129;
T129:;
	goto T97;
goto T125;
T125:;
	if(type_of(car((V57)))==t_symbol){
	goto T284;}
	(void)((*(LnkLI111))());
goto T284;
T284:;
	V58= make_cons(car((V57)),(V58));
	V59= make_cons(car((V57)),(V59));
	V57= cdr((V57));
	goto T100;}
goto T97;
T97:;
	V44= car((V44));
	goto T93;
goto T95;
T95:;
	V49= make_cons(VV[17],(V49));
goto T93;
T93:;
	if(((V45))!=Cnil){
	goto T296;}
	{object V86 = list(4,VV[3],(V44),(V49),listA(3,VV[18],list(2,VV[11],(V43)),(V48)));
	VMR2(V86)}
goto T296;
T296:;
	if(((V45))==(VV[19])){
	goto T298;}
	if(!(type_of((V45))==t_cons)){
	goto T299;}
	if(!((car((V45)))==(VV[19]))){
	goto T299;}
goto T298;
T298:;
	{object V87 = list(4,VV[3],(V44),(V49),make_cons(VV[19],(V48)));
	VMR2(V87)}
goto T299;
T299:;
	if(!(((V45))==(VV[20]))){
	goto T306;}
	{object V88 = list(4,VV[3],(V44),(V49),make_cons(VV[20],(V48)));
	VMR2(V88)}
goto T306;
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
goto T312;
T312:;
	{object V91 = Cnil;
	VMR2(V91)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ILLEGAL-BOA	*/

static object LI3()

{	 VMB3 VMS3 VMV3
goto TTL;
TTL:;
	base[0]= VV[22];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V92 = vs_base[0];
	VMR3(V92)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-PREDICATE	*/

static object LI4(V98,V99,V100,V101,V102)

object V98;object V99;register object V100;object V101;register object V102;
{	 VMB4 VMS4 VMV4
goto TTL;
TTL:;
	{object V103;
	V103= (((V100))==Cnil?Ct:Cnil);
	if(((V103))==Cnil){
	goto T317;}
	{object V104 = (V103);
	VMR4(V104)}
goto T317;
T317:;
	if(((V100))==(VV[19])){
	goto T319;}
	if(!(type_of((V100))==t_cons)){
	goto T320;}
	if(!((car((V100)))==(VV[19]))){
	goto T320;}
goto T319;
T319:;
	if(((V101))!=Cnil){
	goto T326;}
	base[0]= VV[23];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T326;
T326:;
	V105= list(3,VV[27],VV[28],(V102));
	V106= list(3,VV[30],VV[31],(V102));
	{object V107 = list(4,VV[3],(V99),VV[24],list(4,VV[25],VV[26],/* INLINE-ARGS */V105,list(3,VV[29],/* INLINE-ARGS */V106,list(2,VV[11],(V98)))));
	VMR4(V107)}
goto T320;
T320:;
	if(!(((V100))==(VV[20]))){
	goto T331;}
	if(((V101))!=Cnil){
	goto T333;}
	base[0]= VV[32];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T333;
T333:;
	if(!(number_compare((V102),small_fixnum(0))==0)){
	goto T338;}
	{object V108 = list(4,VV[3],(V99),VV[33],list(3,VV[25],VV[34],list(3,VV[29],VV[35],list(2,VV[11],(V98)))));
	VMR4(V108)}
goto T338;
T338:;
	V109= list(2,list(3,VV[38],(V102),VV[39]),VV[40]);
	{object V110 = list(4,VV[3],(V99),VV[36],listA(4,VV[37],/* INLINE-ARGS */V109,list(2,VV[41],list(3,VV[25],VV[42],list(3,VV[29],VV[43],list(2,VV[11],(V98))))),VV[44]));
	VMR4(V110)}
goto T331;
T331:;
	{object V111;
	base[0]= VV[45];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V111= vs_base[0];
	if(((V111))==Cnil){
	goto T343;}
	{object V112 = (V111);
	VMR4(V112)}
goto T343;
T343:;
	{object V113 = Cnil;
	VMR4(V113)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-SLOT-DESCRIPTION	*/

static object LI5(V116,V117)

register object V116;object V117;
{	 VMB5 VMS5 VMV5
goto TTL;
TTL:;
	{object V118;
	object V119;
	register object V120;
	register object V121;
	V118= Cnil;
	V119= Cnil;
	V120= Cnil;
	V121= Cnil;
	if(!(type_of((V116))!=t_cons)){
	goto T347;}
	V118= (V116);
	goto T345;
goto T347;
T347:;
	if(!(endp_prop(cdr((V116))))){
	goto T351;}
	V118= car((V116));
	goto T345;
goto T351;
T351:;
	V118= car((V116));
	V119= cadr((V116));
	{register object V122;
	register object V123;
	register object V124;
	V122= cddr((V116));
	V123= Cnil;
	V124= Cnil;
goto T360;
T360:;
	if(!(endp_prop((V122)))){
	goto T361;}
	goto T345;
goto T361;
T361:;
	V123= car((V122));
	if(!(endp_prop(cdr((V122))))){
	goto T367;}
	base[0]= VV[46];
	base[1]= (V122);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
goto T367;
T367:;
	V124= cadr((V122));
	{object V125= (V123);
	if((V125!= VV[75]))goto T375;
	V120= (V124);
	goto T374;
goto T375;
T375:;
	if((V125!= VV[113]))goto T377;
	V121= (V124);
	goto T374;
goto T377;
T377:;
	base[0]= VV[47];
	base[1]= (V122);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}
goto T374;
T374:;
	V122= cddr((V122));
	goto T360;}
goto T345;
T345:;
	{object V126 = list(5,(V118),(V119),(V120),(V121),(V117));
	VMR5(V126)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OVERWRITE-SLOT-DESCRIPTIONS	*/

static object LI6(V129,V130)

object V129;register object V130;
{	 VMB6 VMS6 VMV6
goto TTL;
TTL:;
	if(((V130))!=Cnil){
	goto T385;}
	{object V131 = Cnil;
	VMR6(V131)}
goto T385;
T385:;
	{register object V132;
	base[0]= caar((V130));
	base[1]= (V129);
	base[2]= VV[16];
	base[3]= symbol_function(VV[114]);
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	V132= vs_base[0];
	if(((V132))==Cnil){
	goto T393;}
	if((cadddr(car((V132))))!=Cnil){
	goto T395;}
	if((cadddr(car((V130))))==Cnil){
	goto T395;}
	base[0]= VV[48];
	base[1]= (V132);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
goto T395;
T395:;
	{object V133;
	object V134;
	V133= car((V132));
	V134= (*(LnkLI115))(caddr(car((V132))));
	if(type_of(cddr((V133)))!=t_cons)FEwrong_type_argument(Scons,cddr((V133)));
	(cddr((V133)))->c.c_car = (V134);
	(void)(cddr((V133)));}{object V136;
	V136= caddr(car((V132)));
	if(V136==Cnil)goto T410;
	V135= V136;
	goto T409;
goto T410;
T410:;}
	V135= Ct;
goto T409;
T409:;
	V137= (*(LnkLI116))(V135);{object V139;
	V139= caddr(car((V130)));
	if(V139==Cnil)goto T413;
	V138= V139;
	goto T412;
goto T413;
T413:;}
	V138= Ct;
goto T412;
T412:;
	V140= (*(LnkLI116))(V138);
	if(equal(/* INLINE-ARGS */V137,/* INLINE-ARGS */V140)){
	goto T406;}
	base[0]= VV[49];
	base[1]= car((V132));
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
goto T406;
T406:;
	V141= list(5,caar((V132)),cadar((V132)),caddar((V132)),cadddr(car((V132))),car(cddddr(car((V130)))));
	V142= (*(LnkLI117))((V129),cdr((V130)));
	{object V143 = make_cons(/* INLINE-ARGS */V141,/* INLINE-ARGS */V142);
	VMR6(V143)}
goto T393;
T393:;
	V144= car((V130));
	V145= (*(LnkLI117))((V129),cdr((V130)));
	{object V146 = make_cons(/* INLINE-ARGS */V144,/* INLINE-ARGS */V145);
	VMR6(V146)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-T-TYPE	*/

static object LI7(V150,V151,V152)

object V150;object V151;object V152;
{	 VMB7 VMS7 VMV7
goto TTL;
TTL:;
	{object V153;
	V153= Cnil;
	{register object V154;
	V154= (VFUN_NARGS=5,(*(LnkLI118))((V150),VV[50],VV[51],VV[52],Ct));
	if(((V151))==Cnil){
	goto T419;}
	{object V155;
	object V156;
	V155= get((V151),VV[53],Cnil);
	V156= Cnil;
	if((V155)!=Cnil){
	goto T423;}
	base[0]= VV[54];
	base[1]= (V151);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
goto T423;
T423:;
	V156= structure_ref((V155),VV[53],2);
	{object V157;
	register object V158;
	V159 = make_fixnum((long)length((V156)));
	V157= (number_compare((V150),V159)<=0?((V150)):V159);
	V158= small_fixnum(0);
goto T431;
T431:;
	if(!(number_compare((V158),(V157))>=0)){
	goto T432;}
	goto T419;
goto T432;
T432:;
	V160= aref1((V156),fixint((V158)));
	(void)(aset1((V154),fixint((V158)),/* INLINE-ARGS */V160));
	V158= one_plus((V158));
	goto T431;}}
goto T419;
T419:;
	{register object V161;
	register object V162;
	V161= (V152);
	V162= car((V161));
goto T444;
T444:;
	if(!(endp_prop((V161)))){
	goto T445;}
	goto T440;
goto T445;
T445:;
	V153= car(cddddr((V162)));
	{register object V163;
	V163= caddr((V162));
	base[1]= (V163);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk119)();
	vs_top=sup;
	V164= vs_base[0];
	if(!(number_compare(V164,symbol_value(VV[55]))<=0)){
	goto T451;}
	base[1]= (V163);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk120)();
	vs_top=sup;
	V165= vs_base[0];
	(void)(aset1((V154),fixint((V153)),V165));}
goto T451;
T451:;
	V161= cdr((V161));
	V162= car((V161));
	goto T444;}
goto T440;
T440:;
	V166 = make_fixnum((long)length(symbol_value(VV[56])));
	if(!(number_compare((V150),V166)<0)){
	goto T465;}
	{register object V168;
	V168= small_fixnum(0);
goto T470;
T470:;
	if(!(number_compare((V168),V150)>=0)){
	goto T471;}
	goto T467;
goto T471;
T471:;
	{long V169= fix(aref1((V154),fixint((V168))));
	if((/* INLINE-ARGS */V169)==(0)){
	goto T475;}}
	{object V170 = (V154);
	VMR7(V170)}
goto T475;
T475:;
	V168= one_plus((V168));
	goto T470;}
goto T467;
T467:;
	{object V171 = symbol_value(VV[56]);
	VMR7(V171)}
goto T465;
T465:;
	{object V172 = (V154);
	VMR7(V172)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ROUND-UP	*/

static object LI8(V175,V176)

long V175;long V176;
{	 VMB8 VMS8 VMV8
goto TTL;
TTL:;
	base[0]= make_fixnum(V175);
	base[1]= make_fixnum(V176);
	vs_top=(vs_base=base+0)+2;
	Lceiling();
	vs_top=sup;
	V175= fix(vs_base[0]);
	{long V177 = (long)(V175)*(V176);
	VMR8((object)V177)}
	base[0]=base[0];
}
/*	local entry for function GET-SLOT-POS	*/

static object LI9(V181,V182,V183)

object V181;object V182;object V183;
{	 VMB9 VMS9 VMV9
goto TTL;
TTL:;
	{register object V184;
	object V185;
	object V186;
	V184= Cnil;
	V185= Cnil;
	V186= Cnil;
	{register object V187;
	register object V188;
	V187= (V183);
	V188= car((V187));
goto T493;
T493:;
	if(!(endp_prop((V187)))){
	goto T494;}
	goto T489;
goto T494;
T494:;
	if(((V188))==Cnil){
	goto T498;}
	if((car((V188)))==Cnil){
	goto T498;}
	V184= (*(LnkLI115))(caddr((V188)));
	if(type_of(cddr(V188))!=t_cons)FEwrong_type_argument(Scons,cddr(V188));
	(cddr(V188))->c.c_car = V184;
	(void)(cddr(V188));
	{register object V191;
	V191= cadr((V188));
	base[1]= (V191);
	base[2]= (V184);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T507;}
	if(!(type_of((V191))==t_symbol)){
	goto T513;}
	base[1]= (V191);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T513;}
	base[1]= (V191);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_value();
	vs_top=sup;
	V191= vs_base[0];
goto T513;
T513:;
	base[1]= (V191);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T521;}
	goto T507;
goto T521;
T521:;
	{object V193;
	V193= (*(LnkLI122))((V191),(V184));
	if(type_of(cdr(V188))!=t_cons)FEwrong_type_argument(Scons,cdr(V188));
	(cdr(V188))->c.c_car = (V193);
	(void)(cdr(V188));}}
goto T507;
T507:;
	{register object x= (V184),V194= VV[58];
	while(!endp(V194))
	if(x==(V194->c.c_car)){
	goto T527;
	}else V194=V194->c.c_cdr;
	goto T498;}
goto T527;
T527:;
	V185= Ct;
goto T498;
T498:;
	V187= cdr((V187));
	V188= car((V187));
	goto T493;}
goto T489;
T489:;
	{object V195;
	if(((V185))==Cnil){
	goto T535;}
	V195= Cnil;
	goto T534;
goto T535;
T535:;
	V196 = make_fixnum((long)length(symbol_value(VV[57])));
	if(number_compare((V181),V196)<0){
	goto T537;}
	V195= Cnil;
	goto T534;
goto T537;
T537:;{object V197;
	V197= symbol_value(VV[57]);
	base[0]= Ct;
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk123)();
	vs_top=sup;
	V198= vs_base[0];
	V195= list(3,V197,number_times((V181),V198),Cnil);}
goto T534;
T534:;
	if(((V195))==Cnil){
	goto T542;}
	{object V199 = (V195);
	VMR9(V199)}
goto T542;
T542:;
	{object V200;
	register long V201;
	long V202;
	long V203;
	object V204;
	long V205;
	V200= (VFUN_NARGS=5,(*(LnkLI118))((V181),VV[50],VV[59],VV[52],Ct));
	V201= 0;
	V202= 0;
	V203= 0;
	V205= 0;
	V204= Cnil;
	{register object V206;
	register object V207;
	V206= (V183);
	V207= car((V206));
goto T553;
T553:;
	if(!(endp_prop((V206)))){
	goto T554;}
	goto T549;
goto T554;
T554:;
	V204= caddr((V207));
	base[1]= (V204);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk119)();
	vs_top=sup;
	V203= fix(vs_base[0]);
	V208 = make_fixnum(V203);
	if(number_compare(V208,symbol_value(VV[55]))<=0){
	goto T563;}
	V204= Ct;
	if(type_of(cddr(V207))!=t_cons)FEwrong_type_argument(Scons,cddr(V207));
	(cddr(V207))->c.c_car = Ct;
	(void)(cddr(V207));
	V203= fix(symbol_value(VV[55]));
	V207= nconc((V207),VV[60]);
goto T563;
T563:;
	V205= (long)(*(LnkLI124))(V201,V203);
	if(!((V201)==(V205))){
	goto T576;}
	goto T575;
goto T576;
T576:;
	V186= Ct;
goto T575;
T575:;
	V201= V205;
	V211 = make_fixnum(V201);
	(void)(aset1((V200),V202,V211));
	V212 = make_fixnum(V201);
	base[1]= (V204);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk123)();
	vs_top=sup;
	V213= vs_base[0];
	V201= fix(number_plus(V212,V213));
	V202= (long)(V202)+(1);
	V206= cdr((V206));
	V207= car((V206));
	goto T553;}
goto T549;
T549:;
	base[0]= Ct;
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk123)();
	vs_top=sup;
	V214= vs_base[0];
	V215 = make_fixnum((long)(*(LnkLI124))(V201,fix(V214)));
	{object V216 = list(3,(V200),V215,(V186));
	VMR9(V216)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEFINE-STRUCTURE	*/

static object LI10(V228,V227,V226,V225,V224,V223,V222,V221,V220,V219,V218,V217,va_alist)
	object V228,V227,V226,V225,V224,V223,V222,V221,V220,V219,V218,V217;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V229;
	register object V230;
	object V231;
	object V232;
	object V233;
	object V234;
	register object V235;
	object V236;
	object V237;
	object V238;
	object V239;
	object V240;
	register object V241;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <12) too_few_arguments();
	Vcs[0]=MMcons(V228,Cnil);
	V229= V227;
	V230= V226;
	V231= V225;
	V232= V224;
	V233= V223;
	V234= V222;
	V235= V221;
	V236= V220;
	V237= V219;
	V238= V218;
	V239= V217;
	narg = narg - 12;
	if (narg <= 0) goto T595;
	else {
	V240= va_arg(ap,object);}
	if (--narg <= 0) goto T596;
	else {
	V241= va_arg(ap,object);}
	--narg; goto T597;
goto T595;
T595:;
	V240= Cnil;
goto T596;
T596:;
	V241= Cnil;
goto T597;
T597:;
	{object V242;
	object V243;
	V242= Cnil;
	V243= Cnil;
	if(type_of((V230))==t_cons){
	goto T603;}
	goto T602;
goto T603;
T603:;
	if((car((V230)))==(VV[19])){
	goto T605;}
	goto T602;
goto T605;
T605:;
	V230= VV[19];
goto T602;
T602:;
	V243= make_fixnum((long)length((V232)));
	{register object V244;
	register object V245;
	V244= (V232);
	V245= car((V244));
goto T614;
T614:;
	if(!(endp_prop((V244)))){
	goto T615;}
	goto T610;
goto T615;
T615:;
	if((V245)==Cnil){
	goto T619;}
	if((car((V245)))!=Cnil){
	goto T620;}
	goto T619;
goto T620;
T620:;
	base[1]= (Vcs[0]->c.c_car);
	base[2]= (V229);
	base[3]= (V230);
	base[4]= (V231);
	base[5]= (V235);
	base[6]= (V241);
	{object V246;
	V246= (V245);
	 vs_top=base+7;
	 while(!endp(V246))
	 {vs_push(car(V246));V246=cdr(V246);}
	vs_base=base+1;}
	(void) (*Lnk125)();
	vs_top=sup;
goto T619;
T619:;
	V244= cdr((V244));
	V245= car((V244));
	goto T614;}
goto T610;
T610:;
	if(((V233))==Cnil){
	goto T634;}
	if(((V241))!=Cnil){
	goto T634;}
	base[0]= (V233);
	{object V247= (V230);
	if((V247!= Cnil))goto T641;
	base[1]= symbol_function(VV[126]);
	goto T640;
goto T641;
T641:;
	if((V247!= VV[20]))goto T642;
	base[1]= symbol_function(VV[127]);
	goto T640;
goto T642;
T642:;
	if((V247!= VV[19]))goto T643;
	base[1]= symbol_function(VV[128]);
	goto T640;
goto T643;
T643:;
	FEerror("The ECASE key value ~s is illegal.",1,V247);
	base[1]= Cnil;
	goto T640;}
goto T640;
T640:;
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
goto T634;
T634:;
	if(((V230))!=Cnil){
	goto T646;}
	if(!(((Vcs[0]->c.c_car))==(VV[53]))){
	goto T646;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk123)();
	vs_top=sup;
	V248= vs_base[0];
	V249= number_times((V243),V248);
	base[0]= (VFUN_NARGS=5,(*(LnkLI118))(/* INLINE-ARGS */V249,VV[50],VV[61],VV[52],Ct));
	base[1]= (*(LnkLI129))((V243),Cnil,(V232));
	base[2]= symbol_value(VV[57]);
	base[3]= (V232);
	base[4]= Ct;
	vs_top=(vs_base=base+0)+5;
	(void) (*Lnk130)();
	vs_top=sup;
	V242= vs_base[0];
	goto T644;
goto T646;
T646:;
	{object V250;
	object V251;
	object V252;
	object V253;
	if((V235)==Cnil){
	V253= Cnil;
	goto T658;}
	V253= get((V235),VV[53],Cnil);
goto T658;
T658:;
	V250= Cnil;
	V251= small_fixnum(0);
	V252= Cnil;
	if(((V253))==Cnil){
	goto T659;}
	if((structure_ref((V253),VV[53],11))==Cnil){
	goto T662;}
	if((structure_ref((V253),VV[53],3))==Cnil){
	goto T663;}
	{object V254;
	V254= get((Vcs[0]->c.c_car),VV[53],Cnil);
	if((V254)==Cnil){
	goto T668;}
	V255= structure_ref((V254),VV[53],4);
	if((/* INLINE-ARGS */V255)==((V253))){
	goto T662;}}
goto T668;
T668:;
goto T663;
T663:;
	(void)((VFUN_NARGS=2,(*(LnkLI131))(VV[62],(V235))));
goto T662;
T662:;
	{object V257;
	base[1]= (Vcs[0]->c.c_car);
	base[2]= structure_ref(V253,VV[53],3);
	vs_top=(vs_base=base+1)+2;
	Ladjoin();
	vs_top=sup;
	V257= vs_base[0];
	(void)(structure_set(V253,VV[53],3,(V257)));}
goto T659;
T659:;
	if(((V230))!=Cnil){
	goto T673;}
	V250= (*(LnkLI132))((V243),(V235),(V232));
	V251= cadr((V250));
	V252= caddr((V250));
	V250= car((V250));
goto T673;
T673:;
	if(((V230))==Cnil){
	goto T685;}
	V258= Cnil;
	goto T684;
goto T685;
T685:;
	V258= (*(LnkLI129))((V243),(V235),(V232));
goto T684;
T684:;
	V242= (VFUN_NARGS=32,(*(LnkLI133))(VV[63],(Vcs[0]->c.c_car),VV[64],(V243),VV[65],V258,VV[66],(V250),VV[67],(V251),VV[68],(V252),VV[69],(V234),VV[70],(V253),VV[71],(V236),VV[72],(V232),VV[73],(V237),VV[74],(V238),VV[75],(V230),VV[76],(V231),VV[77],(V240),VV[78],(V229)));}
goto T644;
T644:;
	{object V259;
	V259= get((Vcs[0]->c.c_car),VV[53],Cnil);
	if(!(((Vcs[0]->c.c_car))==(VV[53]))){
	goto T691;}
	if(((V259))==Cnil){
	goto T693;}
	(void)((VFUN_NARGS=1,(*(LnkLI131))(VV[79])));
goto T693;
T693:;
	if((V259)!=Cnil){
	goto T689;}
	(void)(sputprop((Vcs[0]->c.c_car),VV[53],(V242)));
	goto T689;
goto T691;
T691:;
	if(((V259))==Cnil){
	goto T697;}
	(void)((*(LnkLI134))((V259),(V242),(Vcs[0]->c.c_car)));
	goto T689;
goto T697;
T697:;
	(void)(sputprop((Vcs[0]->c.c_car),VV[53],(V242)));
goto T689;
T689:;
	if(((V240))==Cnil){
	goto T699;}
	(void)(sputprop((Vcs[0]->c.c_car),VV[80],(V240)));
goto T699;
T699:;
	if(((V230))!=Cnil){
	goto T687;}
	if(((V239))==Cnil){
	goto T687;}
	base[0]= (V239);
	base[1]= VV[3];
	base[2]= VV[81];
	base[3]= Ct;
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk109)();
	vs_top=sup;
	if((V241)!=Cnil){
	goto T711;}
	base[0]= (V239);
	base[1]= 
	make_cclosure_new(LC20,Cnil,Vcs[0],Cdata);
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
goto T711;
T711:;
	(void)(sputprop((V239),VV[82],VV[83]));
	(void)(sputprop((V239),VV[84],(Vcs[0]->c.c_car)));}
goto T687;
T687:;
	{object V260 = Cnil;
	VMR10(V260)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for DEFSTRUCT	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	check_arg(2);
	vs_top=sup;
	{object V261=base[0]->c.c_cdr;
	if(endp(V261))invalid_macro_call();
	base[2]= (V261->c.c_car);
	V261=V261->c.c_cdr;
	base[3]= V261;}
	{register object V262;
	object V263;
	register object V264;
	register object V265;
	register object V266;
	register object V267;
	register object V268;
	register object V269;
	register object V270;
	register object V271;
	register object V272;
	register object V273;
	register object V274;
	register object V275;
	register object V276;
	object V277;
	object V278;
	register object V279;
	V262= base[3];
	V263= Cnil;
	V264= Cnil;
	V265= Cnil;
	V266= Cnil;
	V267= Cnil;
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
	if(!(type_of(base[2])==t_cons)){
	goto T715;}
	V263= cdr(base[2]);
	base[2]= car(base[2]);
goto T715;
T715:;
	base[4]= coerce_to_string(base[2]);
	base[5]= VV[85];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	V264= vs_base[0];
	base[5]= VV[86];
	base[6]= coerce_to_string(base[2]);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V266= vs_base[0];
	base[5]= VV[87];
	base[6]= coerce_to_string(base[2]);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V268= vs_base[0];
	base[5]= coerce_to_string(base[2]);
	base[6]= VV[88];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V269= vs_base[0];
	{register object V280;
	register object V281;
	register object V282;
	V280= (V263);
	V281= Cnil;
	V282= Cnil;
goto T742;
T742:;
	if(!(endp_prop((V280)))){
	goto T743;}
	goto T740;
goto T743;
T743:;
	if(!(type_of(car((V280)))==t_cons)){
	goto T749;}
	if(endp_prop(cdar((V280)))){
	goto T749;}
	V281= caar((V280));
	V282= cadar((V280));
	{object V283= (V281);
	if((V283!= VV[78]))goto T757;
	if(((V282))!=Cnil){
	goto T759;}
	V264= VV[89];
	goto T747;
goto T759;
T759:;
	V264= (V282);
	goto T747;
goto T757;
T757:;
	if((V283!= VV[135]))goto T763;
	if(((V282))!=Cnil){
	goto T765;}
	V267= Ct;
	goto T747;
goto T765;
T765:;
	if(!(endp_prop(cddar((V280))))){
	goto T769;}
	V265= make_cons((V282),(V265));
	goto T747;
goto T769;
T769:;
	V265= make_cons(cdar((V280)),(V265));
	goto T747;
goto T763;
T763:;
	if((V283!= VV[136]))goto T773;
	V268= (V282);
	goto T747;
goto T773;
T773:;
	if((V283!= VV[52]))goto T775;
	V279= (V282);
	goto T747;
goto T775;
T775:;
	if((V283!= VV[137]))goto T777;
	V269= (V282);
	V270= Ct;
	goto T747;
goto T777;
T777:;
	if((V283!= VV[138]))goto T781;
	V271= cdar((V280));
	if((get((V282),VV[53],Cnil))!=Cnil){
	goto T747;}
	base[4]= VV[90];
	base[5]= (V282);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
	goto T747;
goto T781;
T781:;
	if((V283!= VV[71]))goto T788;
	if(type_of((V282))==t_cons){
	goto T790;}
	goto T789;
goto T790;
T790:;
	if((car((V282)))==(VV[91])){
	goto T792;}
	goto T789;
goto T792;
T792:;
	V282= cadr((V282));
goto T789;
T789:;
	V272= (V282);
	goto T747;
goto T788;
T788:;
	if((V283!= VV[75]))goto T796;
	V273= (V282);
	goto T747;
goto T796;
T796:;
	if((V283!= VV[139]))goto T798;
	V275= (V282);
	goto T747;
goto T798;
T798:;
	base[4]= VV[92];
	base[5]= (V281);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
	goto T747;}
goto T749;
T749:;
	if(!(type_of(car((V280)))==t_cons)){
	goto T804;}
	V281= caar((V280));
	goto T802;
goto T804;
T804:;
	V281= car((V280));
goto T802;
T802:;
	{object V284= (V281);
	if((V284!= VV[135]))goto T808;
	V265= make_cons((V266),(V265));
	goto T747;
goto T808;
T808:;
	if((V284!= VV[78])
	&& (V284!= VV[136])
	&& (V284!= VV[137])
	&& (V284!= VV[71]))goto T810;
	goto T747;
goto T810;
T810:;
	if((V284!= VV[76]))goto T811;
	V274= Ct;
	goto T747;
goto T811;
T811:;
	base[4]= VV[93];
	base[5]= (V281);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;}
goto T747;
T747:;
	V280= cdr((V280));
	goto T742;}
goto T740;
T740:;
	base[4]= coerce_to_string((V264));
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V264= vs_base[0];
	if((V271)==Cnil){
	goto T821;}
	if(((V272))==Cnil){
	goto T822;}
	goto T821;
goto T822;
T822:;
	V285= get(car((V271)),VV[53],Cnil);
	V272= structure_ref(V285,VV[53],6);
goto T821;
T821:;
	if(endp_prop((V262))){
	goto T826;}
	if(!(type_of(car((V262)))==t_string)){
	goto T826;}
	V278= car((V262));
	V262= cdr((V262));
goto T826;
T826:;
	if(((V271))==Cnil){
	goto T834;}
	V286= get(car((V271)),VV[53],Cnil);
	V287= structure_ref(V286,VV[53],16);
	if(equal((V273),/* INLINE-ARGS */V287)){
	goto T834;}
	base[4]= VV[94];
	base[5]= car((V271));
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
goto T834;
T834:;
	if(((V271))!=Cnil){
	goto T844;}
	V276= small_fixnum(0);
	goto T842;
goto T844;
T844:;
	V288= get(car((V271)),VV[53],Cnil);
	V276= structure_ref(V288,VV[53],14);
goto T842;
T842:;
	if(((V273))==Cnil){
	goto T849;}
	if(((V275))==Cnil){
	goto T849;}
	V276= number_plus((V276),(V275));
goto T849;
T849:;
	if(((V273))==Cnil){
	goto T855;}
	if(((V274))==Cnil){
	goto T855;}
	V277= (V276);
	V276= one_plus((V276));
goto T855;
T855:;
	{register object V289;
	register object V290;
	V289= (V262);
	V290= Cnil;
goto T865;
T865:;
	if(!(endp_prop((V289)))){
	goto T866;}
	V262= nreverse((V290));
	goto T863;
goto T866;
T866:;
	V291= (*(LnkLI140))(car((V289)),(V276));
	V290= make_cons(/* INLINE-ARGS */V291,(V290));
	V276= one_plus((V276));
	V289= cdr((V289));
	goto T865;}
goto T863;
T863:;
	if(((V273))==Cnil){
	goto T878;}
	if(((V274))==Cnil){
	goto T878;}
	V292= list(2,Cnil,base[2]);
	V262= make_cons(/* INLINE-ARGS */V292,(V262));
goto T878;
T878:;
	if(((V273))==Cnil){
	goto T884;}
	if(((V275))==Cnil){
	goto T884;}
	base[4]= (V275);
	vs_top=(vs_base=base+4)+1;
	Lmake_list();
	vs_top=sup;
	V293= vs_base[0];
	V262= append(V293,(V262));
goto T884;
T884:;
	{object V294;
	V294= (((V271))==Cnil?Ct:Cnil);
	if(((V294))==Cnil){
	goto T895;}
	goto T892;
goto T895;
T895:;
	if(!(endp_prop(cdr((V271))))){
	goto T898;}
	V295= get(car((V271)),VV[53],Cnil);
	V296= structure_ref(V295,VV[53],7);
	V262= append(/* INLINE-ARGS */V296,(V262));
	goto T892;
goto T898;
T898:;
	{object V298;
	object V299= cdr((V271));
	if(endp(V299)){
	V297= Cnil;
	goto T903;}
	base[4]=V298=MMcons(Cnil,Cnil);
goto T904;
T904:;
	(V298->c.c_car)= (*(LnkLI140))((V299->c.c_car),small_fixnum(0));
	V299=MMcdr(V299);
	if(endp(V299)){
	V297= base[4];
	goto T903;}
	V298=MMcdr(V298)=MMcons(Cnil,Cnil);
	goto T904;}
goto T903;
T903:;
	V301= get(car((V271)),VV[53],Cnil);
	V302= structure_ref(V301,VV[53],7);
	V303= (*(LnkLI117))(V297,/* INLINE-ARGS */V302);
	V262= append(/* INLINE-ARGS */V303,(V262));}
goto T892;
T892:;
	if(((V267))==Cnil){
	goto T909;}
	if(((V265))==Cnil){
	goto T907;}
	base[4]= VV[95];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T907;
goto T909;
T909:;
	if(((V265))!=Cnil){
	goto T907;}
	V265= make_cons((V266),Cnil);
goto T907;
T907:;{object V304;
	{object V307;
	object V308= (V265);
	if(endp(V308)){
	V306= Cnil;
	goto T920;}
	base[4]=V307=MMcons(Cnil,Cnil);
goto T921;
T921:;
	base[5]= (V308->c.c_car);
	vs_top=(vs_base=base+5)+1;
	Lsymbolp();
	vs_top=sup;
	(V307->c.c_car)= vs_base[0];
	V308=MMcdr(V308);
	if(endp(V308)){
	V306= base[4];
	goto T920;}
	V307=MMcdr(V307)=MMcons(Cnil,Cnil);
	goto T921;}
goto T920;
T920:;
	{register object x= Ct,V305= V306;
	while(!endp(V305))
	if(eql(x,V305->c.c_car)){
	V304= V305;
	goto T919;
	}else V305=V305->c.c_cdr;
	V304= Cnil;}
goto T919;
T919:;
	if(V304==Cnil)goto T918;
	goto T917;
goto T918;
T918:;}
	base[5]= VV[96];
	base[6]= (V266);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V309= vs_base[0];
	V265= make_cons(V309,(V265));
goto T917;
T917:;
	if(((V273))==Cnil){
	goto T929;}
	if(((V274))!=Cnil){
	goto T929;}
	if(((V270))==Cnil){
	goto T934;}
	base[4]= VV[97];
	base[5]= (V269);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
goto T934;
T934:;
	V269= Cnil;
goto T929;
T929:;
	if(((V271))==Cnil){
	goto T940;}
	V271= car((V271));
goto T940;
T940:;
	if(((V272))==Cnil){
	goto T944;}
	if(((V273))==Cnil){
	goto T944;}
	base[4]= VV[98];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
goto T944;
T944:;
	base[4]= VV[100];
	base[5]= list(2,VV[11],base[2]);
	base[6]= list(2,VV[11],(V264));
	base[7]= list(2,VV[11],(V273));
	base[8]= list(2,VV[11],(V274));
	base[9]= list(2,VV[11],(V262));
	base[10]= list(2,VV[11],(V268));
	base[11]= list(2,VV[11],(V279));
	base[12]= list(2,VV[11],(V271));
	base[13]= list(2,VV[11],(V272));
	base[14]= list(2,VV[11],(V265));
	base[15]= list(2,VV[11],(V276));
	base[16]= list(2,VV[11],(V269));
	base[17]= list(2,VV[11],(V278));
	vs_top=(vs_base=base+4)+14;
	Llist();
	vs_top=sup;
	V310= vs_base[0];
	{object V312;
	object V313= (V265);
	if(endp(V313)){
	base[4]= Cnil;
	goto T966;}
	base[5]=V312=MMcons(Cnil,Cnil);
goto T967;
T967:;
	(V312->c.c_car)= (*(LnkLI141))(base[2],(V313->c.c_car),(V273),(V274),(V262));
	V313=MMcdr(V313);
	if(endp(V313)){
	base[4]= base[5];
	goto T966;}
	V312=MMcdr(V312)=MMcons(Cnil,Cnil);
	goto T967;}
goto T966;
T966:;
	if(((V273))==Cnil){
	goto T971;}
	if(((V269))==Cnil){
	goto T971;}
	V315= (*(LnkLI142))(base[2],(V269),(V273),(V274),(V277));
	base[5]= make_cons(/* INLINE-ARGS */V315,Cnil);
	goto T969;
goto T971;
T971:;
	base[5]= Cnil;
goto T969;
T969:;
	V316= list(2,VV[11],base[2]);
	base[6]= make_cons(/* INLINE-ARGS */V316,Cnil);
	vs_top=(vs_base=base+4)+3;
	Lappend();
	vs_top=sup;
	V311= vs_base[0];
	base[4]= listA(3,VV[99],V310,V311);
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	local entry for function MAKE-S-DATA	*/

static object LI12(va_alist)
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V317;
	object V318;
	object V319;
	object V320;
	object V321;
	object V322;
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
	Vcs[0]=Vcs[0];
	va_start(ap);
	narg= narg - 0;
	{
	parse_key_new(narg,Vcs +0,(struct key *)&LI12key,ap);
	V317=(Vcs[0]);
	V318=(Vcs[1]);
	V319=(Vcs[2]);
	V320=(Vcs[3]);
	V321=(Vcs[4]);
	V322=(Vcs[5]);
	V323=(Vcs[6]);
	V324=(Vcs[7]);
	V325=(Vcs[8]);
	V326=(Vcs[9]);
	V327=(Vcs[10]);
	V328=(Vcs[11]);
	V329=(Vcs[12]);
	V330=(Vcs[13]);
	V331=(Vcs[14]);
	V332=(Vcs[15]);
	V333=(Vcs[16]);
	V334=(Vcs[17]);
	base[0]= VV[53];
	base[1]= (V317);
	base[2]= (V318);
	base[3]= (V319);
	base[4]= (V320);
	base[5]= (V321);
	base[6]= (V322);
	base[7]= (V323);
	base[8]= (V324);
	base[9]= (V325);
	base[10]= (V326);
	base[11]= (V327);
	base[12]= (V328);
	base[13]= (V329);
	base[14]= (V330);
	base[15]= (V331);
	base[16]= (V332);
	base[17]= (V333);
	base[18]= (V334);
	vs_top=(vs_base=base+0)+19;
	siLmake_structure();
	vs_top=sup;
	{object V335 = vs_base[0];
	VMR12(V335)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function CHECK-S-DATA	*/

static object LI13(V339,V340,V341)

register object V339;register object V340;object V341;
{	 VMB13 VMS13 VMV13
goto TTL;
TTL:;
	if((structure_ref((V339),VV[53],3))==Cnil){
	goto T995;}
	V342= structure_ref((V339),VV[53],3);
	(void)(structure_set((V340),VV[53],3,/* INLINE-ARGS */V342));
goto T995;
T995:;
	if((structure_ref((V339),VV[53],11))==Cnil){
	goto T998;}
	(void)(structure_set((V340),VV[53],11,Ct));
goto T998;
T998:;
	if(equalp((V340),(V339))){
	goto T1002;}
	(void)((VFUN_NARGS=2,(*(LnkLI131))(VV[101],(V341))));
	{object V343 = sputprop((V341),VV[53],(V340));
	VMR13(V343)}
goto T1002;
T1002:;
	{object V344 = Cnil;
	VMR13(V344)}
	return Cnil;
}
/*	local entry for function FREEZE-DEFSTRUCT	*/

static object LI14(V346)

object V346;
{	 VMB14 VMS14 VMV14
goto TTL;
TTL:;
	{object V347;
	if(type_of((V346))==t_symbol){
	goto T1006;}
	V347= Cnil;
	goto T1005;
goto T1006;
T1006:;
	V347= get((V346),VV[53],Cnil);
goto T1005;
T1005:;
	if(((V347))==Cnil){
	goto T1009;}
	{object V348 = structure_set((V347),VV[53],11,Ct);
	VMR14(V348)}
goto T1009;
T1009:;
	{object V349 = Cnil;
	VMR14(V349)}}
	return Cnil;
}
/*	function definition for SHARP-S-READER	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	{object V350;
	object V351;
	object V352;
	check_arg(3);
	V350=(base[0]);
	V351=(base[1]);
	V352=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	if(((V352))==Cnil){
	goto T1011;}
	if((symbol_value(VV[102]))!=Cnil){
	goto T1011;}
	base[3]= VV[103];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
goto T1011;
T1011:;
	{register object V353;
	register object V354;
	{object V355;
	base[5]= (V350);
	base[6]= Ct;
	base[7]= Cnil;
	base[8]= Ct;
	vs_top=(vs_base=base+5)+4;
	Lread();
	vs_top=sup;
	V355= vs_base[0];
	if((symbol_value(VV[102]))==Cnil){
	goto T1023;}
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;
goto T1023;
T1023:;
	V353= (V355);}{object V356;
	V356= get(car((V353)),VV[53],Cnil);
	if(V356==Cnil)goto T1027;
	V354= V356;
	goto T1026;
goto T1027;
T1027:;}
	base[5]= VV[104];
	base[6]= car((V353));
	vs_top=(vs_base=base+5)+2;
	Lerror();
	vs_top=sup;
	V354= vs_base[0];
goto T1026;
T1026:;
	{register object V357;
	V357= cdr((V353));
goto T1033;
T1033:;
	if(!(endp_prop((V357)))){
	goto T1034;}
	{register object V358;
	V358= structure_ref((V354),VV[53],13);
goto T1039;
T1039:;
	if(!(endp_prop((V358)))){
	goto T1040;}
	base[5]= VV[105];
	base[6]= car((V353));
	vs_top=(vs_base=base+5)+2;
	Lerror();
	return;
goto T1040;
T1040:;
	if(!(type_of(car((V358)))==t_symbol)){
	goto T1046;}
	base[5]= car((V358));
	{object V359;
	V359= cdr((V353));
	 vs_top=base+6;
	 while(!endp(V359))
	 {vs_push(car(V359));V359=cdr(V359);}
	vs_base=base+6;}
	super_funcall_no_event(base[5]);
	return;
goto T1046;
T1046:;
	V358= cdr((V358));
	goto T1039;}
goto T1034;
T1034:;
	base[5]= coerce_to_string(car((V357)));
	base[6]= VV[106];
	vs_top=(vs_base=base+5)+2;
	Lintern();
	vs_top=sup;
	V360= vs_base[0];
	if(type_of((V357))!=t_cons)FEwrong_type_argument(Scons,(V357));
	((V357))->c.c_car = V360;
	V357= cddr((V357));
	goto T1033;}}
	}
}
/*	local function CLOSURE	*/

static void LC20(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{object V361;
	check_arg(1);
	V361=(base[0]);
	vs_top=sup;
	base[1]= (V361);
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk146)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC19(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{object V362;
	check_arg(1);
	V362=(base[0]);
	vs_top=sup;
	if(!(type_of((V362))==t_cons)){
	goto T1065;}
	base[1]= car((V362));
	vs_top=(vs_base=base+1)+1;
	return;
goto T1065;
T1065:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC18(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{object V363;
	check_arg(1);
	V363=(base[0]);
	vs_top=sup;
	base[1]= aref1((V363),fixint((base0[0]->c.c_car)));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC17(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{object V364;
	check_arg(1);
	V364=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V364);
	vs_top=(vs_base=base+1)+2;
	siLlist_nth();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{object V365;
	check_arg(1);
	V365=(base[0]);
	vs_top=sup;
	if(!(type_of((V365))==t_structure)){
	goto T1070;}
	goto T1069;
goto T1070;
T1070:;
	base[1]= VV[5];
	base[2]= (V365);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
goto T1069;
T1069:;
	base[1]= (V365);
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk147)();
	return;
	}
}
static void LnkT147(){ call_or_link(VV[147],(void **)&Lnk147);} /* STRUCTURE-REF1 */
static void LnkT146(){ call_or_link(VV[146],(void **)&Lnk146);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI142(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[142],(void **)&LnkLI142,5,ap);va_end(ap);return V1;} /* MAKE-PREDICATE */
static object  LnkTLI141(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[141],(void **)&LnkLI141,5,ap);va_end(ap);return V1;} /* MAKE-CONSTRUCTOR */
static object  LnkTLI140(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[140],(void **)&LnkLI140,2,ap);va_end(ap);return V1;} /* PARSE-SLOT-DESCRIPTION */
static object  LnkTLI134(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[134],(void **)&LnkLI134,3,ap);va_end(ap);return V1;} /* CHECK-S-DATA */
static object  LnkTLI133(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[133],(void **)&LnkLI133,ap);va_end(ap);return V1;} /* MAKE-S-DATA */
static object  LnkTLI132(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[132],(void **)&LnkLI132,3,ap);va_end(ap);return V1;} /* GET-SLOT-POS */
static object  LnkTLI131(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[131],(void **)&LnkLI131,ap);va_end(ap);return V1;} /* WARN */
static void LnkT130(){ call_or_link(VV[130],(void **)&Lnk130);} /* MAKE-S-DATA-STRUCTURE */
static object  LnkTLI129(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[129],(void **)&LnkLI129,3,ap);va_end(ap);return V1;} /* MAKE-T-TYPE */
static void LnkT125(){ call_or_link(VV[125],(void **)&Lnk125);} /* MAKE-ACCESS-FUNCTION */
static object  LnkTLI124(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[124],(void **)&LnkLI124,20738,ap);va_end(ap);return V1;} /* ROUND-UP */
static void LnkT123(){ call_or_link(VV[123],(void **)&Lnk123);} /* SIZE-OF */
static object  LnkTLI122(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[122],(void **)&LnkLI122,2,ap);va_end(ap);return V1;} /* COERCE */
static void LnkT121(){ call_or_link(VV[121],(void **)&Lnk121);} /* TYPEP */
static void LnkT120(){ call_or_link(VV[120],(void **)&Lnk120);} /* AET-TYPE */
static void LnkT119(){ call_or_link(VV[119],(void **)&Lnk119);} /* ALIGNMENT */
static object  LnkTLI118(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[118],(void **)&LnkLI118,ap);va_end(ap);return V1;} /* MAKE-ARRAY */
static object  LnkTLI117(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[117],(void **)&LnkLI117,2,ap);va_end(ap);return V1;} /* OVERWRITE-SLOT-DESCRIPTIONS */
static object  LnkTLI116(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[116],(void **)&LnkLI116,1,ap);va_end(ap);return V1;} /* NORMALIZE-TYPE */
static object  LnkTLI115(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[115],(void **)&LnkLI115,1,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI111(){return call_proc0(VV[111],(void **)&LnkLI111);} /* ILLEGAL-BOA */
static void LnkT110(){ call_or_link(VV[110],(void **)&Lnk110);} /* SUBTYPEP */
static void LnkT109(){ call_or_link(VV[109],(void **)&Lnk109);} /* RECORD-FN */
static object  LnkTLI108(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[108],(void **)&LnkLI108,ap);va_end(ap);return V1;} /* ADJUST-ARRAY */
static void LnkT107(){ call_or_link(VV[107],(void **)&Lnk107);} /* STRING-CONCATENATE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

