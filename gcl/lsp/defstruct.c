
#include "cmpinclude.h"
#include "defstruct.h"
void init_defstruct(){do_init(VV);}
/*	local entry for function MAKE-ACCESS-FUNCTION	*/

static object LI1(object V11,object V10,object V9,object V8,object V7,object V6,object V5,object V4,object V3,object V2,object V1,object first,...)
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
	va_start(ap,first);
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
	V22= first;}
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
	{register object V67;
	object V68;
	object V69;
	V67= cdr((V57));
	V68= Cnil;
	V69= Cnil;
goto T132;
T132:;
	if(!(endp_prop((V67)))){
	goto T133;}
	base[0]= make_cons(VV[12],(V58));
	{object V70;
	object V71= (V49);
	if(endp(V71)){
	base[1]= Cnil;
	goto T139;}
	base[2]=V70=MMcons(Cnil,Cnil);
goto T140;
T140:;
	if(!(type_of((V71->c.c_car))!=t_cons)){
	goto T147;}
	V74= (V71->c.c_car);
	goto T145;
goto T147;
T147:;
	V74= car((V71->c.c_car));
goto T145;
T145:;
	{register object x= V74,V73= (V59);
	while(!endp(V73))
	if(eql(x,V73->c.c_car)){
	goto T144;
	}else V73=V73->c.c_cdr;
	goto T143;}
goto T144;
T144:;
	(V70->c.c_cdr)= Cnil;
	goto T141;
goto T143;
T143:;
	(V70->c.c_cdr)= make_cons((V71->c.c_car),Cnil);
goto T141;
T141:;
	{object cdr_V70=MMcdr(V70);while(!endp(cdr_V70)) {cdr_V70=MMcdr(cdr_V70);V70=MMcdr(V70);}}
	V71=MMcdr(V71);
	if(endp(V71)){
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
	{register object x= car((V67)),V75= VV[13];
	while(!endp(V75))
	if(eql(x,V75->c.c_car)){
	goto T152;
	}else V75=V75->c.c_cdr;
	goto T150;}
goto T152;
T152:;
	if(!((car((V67)))==(VV[15]))){
	goto T153;}
	V58= make_cons(VV[15],(V58));
	V67= cdr((V67));
	if(endp_prop((V67))){
	goto T161;}
	if(type_of(car((V67)))==t_symbol){
	goto T160;}
goto T161;
T161:;
	(void)((*(LnkLI111))());
goto T160;
T160:;
	V59= make_cons(car((V67)),(V59));
	V58= make_cons(car((V67)),(V58));
	V67= cdr((V67));
	if(!(endp_prop((V67)))){
	goto T153;}
	base[0]= make_cons(VV[12],(V58));
	{object V76;
	object V77= (V49);
	if(endp(V77)){
	base[1]= Cnil;
	goto T176;}
	base[2]=V76=MMcons(Cnil,Cnil);
goto T177;
T177:;
	if(!(type_of((V77->c.c_car))!=t_cons)){
	goto T184;}
	V80= (V77->c.c_car);
	goto T182;
goto T184;
T184:;
	V80= car((V77->c.c_car));
goto T182;
T182:;
	{register object x= V80,V79= (V59);
	while(!endp(V79))
	if(eql(x,V79->c.c_car)){
	goto T181;
	}else V79=V79->c.c_cdr;
	goto T180;}
goto T181;
T181:;
	(V76->c.c_cdr)= Cnil;
	goto T178;
goto T180;
T180:;
	(V76->c.c_cdr)= make_cons((V77->c.c_car),Cnil);
goto T178;
T178:;
	{object cdr_V76=MMcdr(V76);while(!endp(cdr_V76)) {cdr_V76=MMcdr(cdr_V76);V76=MMcdr(V76);}}
	V77=MMcdr(V77);
	if(endp(V77)){
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
	if((car((V67)))==(VV[12])){
	goto T186;}
	(void)((*(LnkLI111))());
goto T186;
T186:;
	V58= make_cons(VV[12],(V58));
	{register object V81;
	V81= cdr((V67));
goto T194;
T194:;
	if(!(endp_prop((V81)))){
	goto T195;}
	goto T191;
goto T195;
T195:;
	V58= make_cons(car((V81)),(V58));
	if(!(type_of(car((V81)))!=t_cons)){
	goto T203;}
	if(!(type_of(car((V81)))==t_symbol)){
	goto T203;}
	V59= make_cons(car((V81)),(V59));
	goto T201;
goto T203;
T203:;
	if(!(type_of(caar((V81)))==t_symbol)){
	goto T209;}
	if(endp_prop(cdar((V81)))){
	goto T208;}
	if(!(endp_prop(cddar((V81))))){
	goto T209;}
goto T208;
T208:;
	V59= make_cons(caar((V81)),(V59));
	goto T201;
goto T209;
T209:;
	(void)((*(LnkLI111))());
goto T201;
T201:;
	V81= cdr((V81));
	goto T194;}
goto T191;
T191:;
	base[0]= (V58);
	{object V82;
	object V83= (V49);
	if(endp(V83)){
	base[1]= Cnil;
	goto T222;}
	base[2]=V82=MMcons(Cnil,Cnil);
goto T223;
T223:;
	if(!(type_of((V83->c.c_car))!=t_cons)){
	goto T230;}
	V86= (V83->c.c_car);
	goto T228;
goto T230;
T230:;
	V86= car((V83->c.c_car));
goto T228;
T228:;
	{register object x= V86,V85= (V59);
	while(!endp(V85))
	if(eql(x,V85->c.c_car)){
	goto T227;
	}else V85=V85->c.c_cdr;
	goto T226;}
goto T227;
T227:;
	(V82->c.c_cdr)= Cnil;
	goto T224;
goto T226;
T226:;
	(V82->c.c_cdr)= make_cons((V83->c.c_car),Cnil);
goto T224;
T224:;
	{object cdr_V82=MMcdr(V82);while(!endp(cdr_V82)) {cdr_V82=MMcdr(cdr_V82);V82=MMcdr(V82);}}
	V83=MMcdr(V83);
	if(endp(V83)){
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
	if(!(type_of(car((V67)))!=t_cons)){
	goto T238;}
	V68= car((V67));
	goto T236;
goto T238;
T238:;
	if(!(endp_prop(cdar((V67))))){
	goto T243;}
	V68= caar((V67));
	goto T236;
goto T243;
T243:;
	goto T234;
goto T236;
T236:;
	base[0]= (V68);
	base[1]= (V49);
	base[2]= VV[16];
	base[3]= VV[112];
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	V69= vs_base[0];
	if(((V69))==Cnil){
	goto T234;}
	V58= make_cons(car((V69)),(V58));
	goto T232;
goto T234;
T234:;
	V58= make_cons(car((V67)),(V58));
goto T232;
T232:;
	if(!(type_of(car((V67)))!=t_cons)){
	goto T257;}
	if(type_of(car((V67)))==t_symbol){
	goto T259;}
	(void)((*(LnkLI111))());
goto T259;
T259:;
	V59= make_cons(car((V67)),(V59));
	goto T255;
goto T257;
T257:;
	if(type_of(caar((V67)))==t_symbol){
	goto T264;}
	(void)((*(LnkLI111))());
	goto T255;
goto T264;
T264:;
	if(endp_prop(cdar((V67)))){
	goto T266;}
	if(!(endp_prop(cddar((V67))))){
	goto T267;}
goto T266;
T266:;
	V59= make_cons(caar((V67)),(V59));
	goto T255;
goto T267;
T267:;
	if(type_of(caddar((V67)))==t_symbol){
	goto T273;}
	(void)((*(LnkLI111))());
	goto T255;
goto T273;
T273:;
	if(endp_prop(cdddar((V67)))){
	goto T276;}
	(void)((*(LnkLI111))());
	goto T255;
goto T276;
T276:;
	V59= make_cons(caar((V67)),(V59));
	V59= make_cons(caddar((V67)),(V59));
goto T255;
T255:;
	V67= cdr((V67));
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
	{object V87 = list(4,VV[3],(V44),(V49),listA(3,VV[18],list(2,VV[11],(V43)),(V48)));
	VMR2(V87)}
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
	{object V88 = list(4,VV[3],(V44),(V49),make_cons(VV[19],(V48)));
	VMR2(V88)}
goto T299;
T299:;
	if(!(((V45))==(VV[20]))){
	goto T306;}
	{object V89 = list(4,VV[3],(V44),(V49),make_cons(VV[20],(V48)));
	VMR2(V89)}
goto T306;
T306:;
	{object V90;
	base[0]= VV[21];
	base[1]= (V45);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	V90= vs_base[0];
	if(((V90))==Cnil){
	goto T312;}
	{object V91 = (V90);
	VMR2(V91)}
goto T312;
T312:;
	{object V92 = Cnil;
	VMR2(V92)}}}
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
	{object V93 = vs_base[0];
	VMR3(V93)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-PREDICATE	*/

static object LI4(V99,V100,V101,V102,V103)

object V99;object V100;register object V101;object V102;register object V103;
{	 VMB4 VMS4 VMV4
goto TTL;
TTL:;
	{object V104;
	V104= (((V101))==Cnil?Ct:Cnil);
	if(((V104))==Cnil){
	goto T317;}
	{object V105 = (V104);
	VMR4(V105)}
goto T317;
T317:;
	if(((V101))==(VV[19])){
	goto T319;}
	if(!(type_of((V101))==t_cons)){
	goto T320;}
	if(!((car((V101)))==(VV[19]))){
	goto T320;}
goto T319;
T319:;
	if(((V102))!=Cnil){
	goto T326;}
	base[0]= VV[23];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T326;
T326:;
	V106= list(3,VV[27],VV[28],(V103));
	V107= list(3,VV[30],VV[31],(V103));
	{object V108 = list(4,VV[3],(V100),VV[24],list(4,VV[25],VV[26],/* INLINE-ARGS */V106,list(3,VV[29],/* INLINE-ARGS */V107,list(2,VV[11],(V99)))));
	VMR4(V108)}
goto T320;
T320:;
	if(!(((V101))==(VV[20]))){
	goto T331;}
	if(((V102))!=Cnil){
	goto T333;}
	base[0]= VV[32];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T333;
T333:;
	if(!(number_compare((V103),small_fixnum(0))==0)){
	goto T338;}
	{object V109 = list(4,VV[3],(V100),VV[33],list(3,VV[25],VV[34],list(3,VV[29],VV[35],list(2,VV[11],(V99)))));
	VMR4(V109)}
goto T338;
T338:;
	V110= list(2,list(3,VV[38],(V103),VV[39]),VV[40]);
	{object V111 = list(4,VV[3],(V100),VV[36],listA(4,VV[37],/* INLINE-ARGS */V110,list(2,VV[41],list(3,VV[25],VV[42],list(3,VV[29],VV[43],list(2,VV[11],(V99))))),VV[44]));
	VMR4(V111)}
goto T331;
T331:;
	{object V112;
	base[0]= VV[45];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V112= vs_base[0];
	if(((V112))==Cnil){
	goto T343;}
	{object V113 = (V112);
	VMR4(V113)}
goto T343;
T343:;
	{object V114 = Cnil;
	VMR4(V114)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-SLOT-DESCRIPTION	*/

static object LI5(V117,V118)

register object V117;object V118;
{	 VMB5 VMS5 VMV5
goto TTL;
TTL:;
	{object V119;
	object V120;
	register object V121;
	register object V122;
	V119= Cnil;
	V120= Cnil;
	V121= Cnil;
	V122= Cnil;
	if(!(type_of((V117))!=t_cons)){
	goto T347;}
	V119= (V117);
	goto T345;
goto T347;
T347:;
	if(!(endp_prop(cdr((V117))))){
	goto T351;}
	V119= car((V117));
	goto T345;
goto T351;
T351:;
	V119= car((V117));
	V120= cadr((V117));
	{register object V123;
	register object V124;
	register object V125;
	V123= cddr((V117));
	V124= Cnil;
	V125= Cnil;
goto T360;
T360:;
	if(!(endp_prop((V123)))){
	goto T361;}
	goto T345;
goto T361;
T361:;
	V124= car((V123));
	if(!(endp_prop(cdr((V123))))){
	goto T367;}
	base[0]= VV[46];
	base[1]= (V123);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
goto T367;
T367:;
	V125= cadr((V123));
	{object V126= (V124);
	if((V126!= VV[75]))goto T375;
	V121= (V125);
	goto T374;
goto T375;
T375:;
	if((V126!= VV[113]))goto T377;
	V122= (V125);
	goto T374;
goto T377;
T377:;
	base[0]= VV[47];
	base[1]= (V123);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}
goto T374;
T374:;
	V123= cddr((V123));
	goto T360;}
goto T345;
T345:;
	{object V127 = list(5,(V119),(V120),(V121),(V122),(V118));
	VMR5(V127)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OVERWRITE-SLOT-DESCRIPTIONS	*/

static object LI6(V130,V131)

object V130;register object V131;
{	 VMB6 VMS6 VMV6
goto TTL;
TTL:;
	if(((V131))!=Cnil){
	goto T385;}
	{object V132 = Cnil;
	VMR6(V132)}
goto T385;
T385:;
	{register object V133;
	base[0]= caar((V131));
	base[1]= (V130);
	base[2]= VV[16];
	base[3]= symbol_function(VV[114]);
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	V133= vs_base[0];
	if(((V133))==Cnil){
	goto T393;}
	if((cadddr(car((V133))))!=Cnil){
	goto T395;}
	if((cadddr(car((V131))))==Cnil){
	goto T395;}
	base[0]= VV[48];
	base[1]= (V133);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
goto T395;
T395:;
	{object V134;
	object V135;
	V134= car((V133));
	V135= (*(LnkLI115))(caddr(car((V133))));
	if(type_of(cddr((V134)))!=t_cons)FEwrong_type_argument(Scons,cddr((V134)));
	(cddr((V134)))->c.c_car = (V135);
	(void)(cddr((V134)));}{object V137;
	V137= caddr(car((V133)));
	if(V137==Cnil)goto T410;
	V136= V137;
	goto T409;
goto T410;
T410:;}
	V136= Ct;
goto T409;
T409:;
	V138= (*(LnkLI116))(V136);{object V140;
	V140= caddr(car((V131)));
	if(V140==Cnil)goto T413;
	V139= V140;
	goto T412;
goto T413;
T413:;}
	V139= Ct;
goto T412;
T412:;
	V141= (*(LnkLI116))(V139);
	if(equal(/* INLINE-ARGS */V138,/* INLINE-ARGS */V141)){
	goto T406;}
	base[0]= VV[49];
	base[1]= car((V133));
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
goto T406;
T406:;
	V142= list(5,caar((V133)),cadar((V133)),caddar((V133)),cadddr(car((V133))),car(cddddr(car((V131)))));
	V143= (*(LnkLI117))((V130),cdr((V131)));
	{object V144 = make_cons(/* INLINE-ARGS */V142,/* INLINE-ARGS */V143);
	VMR6(V144)}
goto T393;
T393:;
	V145= car((V131));
	V146= (*(LnkLI117))((V130),cdr((V131)));
	{object V147 = make_cons(/* INLINE-ARGS */V145,/* INLINE-ARGS */V146);
	VMR6(V147)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-T-TYPE	*/

static object LI7(V151,V152,V153)

object V151;object V152;object V153;
{	 VMB7 VMS7 VMV7
goto TTL;
TTL:;
	{object V154;
	V154= Cnil;
	{register object V155;
	V155= (VFUN_NARGS=5,(*(LnkLI118))((V151),VV[50],VV[51],VV[52],Ct));
	if(((V152))==Cnil){
	goto T419;}
	{object V156;
	object V157;
	V156= get((V152),VV[53],Cnil);
	V157= Cnil;
	if((V156)!=Cnil){
	goto T423;}
	base[0]= VV[54];
	base[1]= (V152);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
goto T423;
T423:;
	V157= structure_ref((V156),VV[53],2);
	{object V158;
	register object V159;
	V160 = make_fixnum((long)length((V157)));
	V158= (number_compare((V151),V160)<=0?((V151)):V160);
	V159= small_fixnum(0);
goto T431;
T431:;
	if(!(number_compare((V159),(V158))>=0)){
	goto T432;}
	goto T419;
goto T432;
T432:;
	V161= aref1((V157),fixint((V159)));
	(void)(aset1((V155),fixint((V159)),/* INLINE-ARGS */V161));
	V159= one_plus((V159));
	goto T431;}}
goto T419;
T419:;
	{register object V162;
	register object V163;
	V162= (V153);
	V163= car((V162));
goto T444;
T444:;
	if(!(endp_prop((V162)))){
	goto T445;}
	goto T440;
goto T445;
T445:;
	V154= car(cddddr((V163)));
	{register object V164;
	V164= caddr((V163));
	base[1]= (V164);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk119)();
	vs_top=sup;
	V165= vs_base[0];
	if(!(number_compare(V165,symbol_value(VV[55]))<=0)){
	goto T451;}
	base[1]= (V164);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk120)();
	vs_top=sup;
	V166= vs_base[0];
	(void)(aset1((V155),fixint((V154)),V166));}
goto T451;
T451:;
	V162= cdr((V162));
	V163= car((V162));
	goto T444;}
goto T440;
T440:;
	V167 = make_fixnum((long)length(symbol_value(VV[56])));
	if(!(number_compare((V151),V167)<0)){
	goto T465;}
	{register object V169;
	V169= small_fixnum(0);
goto T470;
T470:;
	if(!(number_compare((V169),V151)>=0)){
	goto T471;}
	goto T467;
goto T471;
T471:;
	{long V170= fix(aref1((V155),fixint((V169))));
	if((/* INLINE-ARGS */V170)==(0)){
	goto T475;}}
	{object V171 = (V155);
	VMR7(V171)}
goto T475;
T475:;
	V169= one_plus((V169));
	goto T470;}
goto T467;
T467:;
	{object V172 = symbol_value(VV[56]);
	VMR7(V172)}
goto T465;
T465:;
	{object V173 = (V155);
	VMR7(V173)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ROUND-UP	*/

static object LI8(V176,V177)

long V176;long V177;
{	 VMB8 VMS8 VMV8
goto TTL;
TTL:;
	base[0]= make_fixnum(V176);
	base[1]= make_fixnum(V177);
	vs_top=(vs_base=base+0)+2;
	Lceiling();
	vs_top=sup;
	V176= fix(vs_base[0]);
	{long V178 = (long)(V176)*(V177);
	VMR8((object)V178)}
	base[0]=base[0];
}
/*	local entry for function GET-SLOT-POS	*/

static object LI9(V182,V183,V184)

object V182;object V183;object V184;
{	 VMB9 VMS9 VMV9
goto TTL;
TTL:;
	{register object V185;
	object V186;
	object V187;
	V185= Cnil;
	V186= Cnil;
	V187= Cnil;
	{register object V188;
	register object V189;
	V188= (V184);
	V189= car((V188));
goto T493;
T493:;
	if(!(endp_prop((V188)))){
	goto T494;}
	goto T489;
goto T494;
T494:;
	if(((V189))==Cnil){
	goto T498;}
	if((car((V189)))==Cnil){
	goto T498;}
	V185= (*(LnkLI115))(caddr((V189)));
	if(type_of(cddr(V189))!=t_cons)FEwrong_type_argument(Scons,cddr(V189));
	(cddr(V189))->c.c_car = V185;
	(void)(cddr(V189));
	{register object V192;
	V192= cadr((V189));
	base[1]= (V192);
	base[2]= (V185);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk121)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T507;}
	if(!(type_of((V192))==t_symbol)){
	goto T513;}
	base[1]= (V192);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T513;}
	base[1]= (V192);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_value();
	vs_top=sup;
	V192= vs_base[0];
goto T513;
T513:;
	base[1]= (V192);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T521;}
	goto T507;
goto T521;
T521:;
	{object V194;
	V194= (*(LnkLI122))((V192),(V185));
	if(type_of(cdr(V189))!=t_cons)FEwrong_type_argument(Scons,cdr(V189));
	(cdr(V189))->c.c_car = (V194);
	(void)(cdr(V189));}}
goto T507;
T507:;
	{register object x= (V185),V195= VV[58];
	while(!endp(V195))
	if(x==(V195->c.c_car)){
	goto T527;
	}else V195=V195->c.c_cdr;
	goto T498;}
goto T527;
T527:;
	V186= Ct;
goto T498;
T498:;
	V188= cdr((V188));
	V189= car((V188));
	goto T493;}
goto T489;
T489:;
	{object V196;
	if(((V186))==Cnil){
	goto T535;}
	V196= Cnil;
	goto T534;
goto T535;
T535:;
	V197 = make_fixnum((long)length(symbol_value(VV[57])));
	if(number_compare((V182),V197)<0){
	goto T537;}
	V196= Cnil;
	goto T534;
goto T537;
T537:;{object V198;
	V198= symbol_value(VV[57]);
	base[0]= Ct;
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk123)();
	vs_top=sup;
	V199= vs_base[0];
	V196= list(3,V198,number_times((V182),V199),Cnil);}
goto T534;
T534:;
	if(((V196))==Cnil){
	goto T542;}
	{object V200 = (V196);
	VMR9(V200)}
goto T542;
T542:;
	{object V201;
	register long V202;
	long V203;
	long V204;
	object V205;
	long V206;
	V201= (VFUN_NARGS=5,(*(LnkLI118))((V182),VV[50],VV[59],VV[52],Ct));
	V202= 0;
	V203= 0;
	V204= 0;
	V206= 0;
	V205= Cnil;
	{register object V207;
	register object V208;
	V207= (V184);
	V208= car((V207));
goto T553;
T553:;
	if(!(endp_prop((V207)))){
	goto T554;}
	goto T549;
goto T554;
T554:;
	V205= caddr((V208));
	base[1]= (V205);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk119)();
	vs_top=sup;
	V204= fix(vs_base[0]);
	V209 = make_fixnum(V204);
	if(number_compare(V209,symbol_value(VV[55]))<=0){
	goto T563;}
	V205= Ct;
	if(type_of(cddr(V208))!=t_cons)FEwrong_type_argument(Scons,cddr(V208));
	(cddr(V208))->c.c_car = Ct;
	(void)(cddr(V208));
	V204= fix(symbol_value(VV[55]));
	V208= nconc((V208),VV[60]);
goto T563;
T563:;
	V206= (long)(*(LnkLI124))(V202,V204);
	if(!((V202)==(V206))){
	goto T576;}
	goto T575;
goto T576;
T576:;
	V187= Ct;
goto T575;
T575:;
	V202= V206;
	V212 = make_fixnum(V202);
	(void)(aset1((V201),V203,V212));
	V213 = make_fixnum(V202);
	base[1]= (V205);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk123)();
	vs_top=sup;
	V214= vs_base[0];
	V202= fix(number_plus(V213,V214));
	V203= (long)(V203)+(1);
	V207= cdr((V207));
	V208= car((V207));
	goto T553;}
goto T549;
T549:;
	base[0]= Ct;
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk123)();
	vs_top=sup;
	V215= vs_base[0];
	V216 = make_fixnum((long)(*(LnkLI124))(V202,fix(V215)));
	{object V217 = list(3,(V201),V216,(V187));
	VMR9(V217)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEFINE-STRUCTURE	*/

static object LI10(object V229,object V228,object V227,object V226,object V225,object V224,object V223,object V222,object V221,object V220,object V219,object V218,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V230;
	register object V231;
	object V232;
	object V233;
	object V234;
	object V235;
	register object V236;
	object V237;
	object V238;
	object V239;
	object V240;
	object V241;
	register object V242;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <12) too_few_arguments();
	Vcs[0]=MMcons(V229,Cnil);
	V230= V228;
	V231= V227;
	V232= V226;
	V233= V225;
	V234= V224;
	V235= V223;
	V236= V222;
	V237= V221;
	V238= V220;
	V239= V219;
	V240= V218;
	narg = narg - 12;
	if (narg <= 0) goto T595;
	else {
	V241= first;}
	if (--narg <= 0) goto T596;
	else {
	V242= va_arg(ap,object);}
	--narg; goto T597;
goto T595;
T595:;
	V241= Cnil;
goto T596;
T596:;
	V242= Cnil;
goto T597;
T597:;
	{object V243;
	object V244;
	V243= Cnil;
	V244= Cnil;
	if(type_of((V231))==t_cons){
	goto T603;}
	goto T602;
goto T603;
T603:;
	if((car((V231)))==(VV[19])){
	goto T605;}
	goto T602;
goto T605;
T605:;
	V231= VV[19];
goto T602;
T602:;
	V244= make_fixnum((long)length((V233)));
	{register object V245;
	register object V246;
	V245= (V233);
	V246= car((V245));
goto T614;
T614:;
	if(!(endp_prop((V245)))){
	goto T615;}
	goto T610;
goto T615;
T615:;
	if((V246)==Cnil){
	goto T619;}
	if((car((V246)))!=Cnil){
	goto T620;}
	goto T619;
goto T620;
T620:;
	base[1]= (Vcs[0]->c.c_car);
	base[2]= (V230);
	base[3]= (V231);
	base[4]= (V232);
	base[5]= (V236);
	base[6]= (V242);
	{object V247;
	V247= (V246);
	 vs_top=base+7;
	 while(!endp(V247))
	 {vs_push(car(V247));V247=cdr(V247);}
	vs_base=base+1;}
	(void) (*Lnk125)();
	vs_top=sup;
goto T619;
T619:;
	V245= cdr((V245));
	V246= car((V245));
	goto T614;}
goto T610;
T610:;
	if(((V234))==Cnil){
	goto T634;}
	if(((V242))!=Cnil){
	goto T634;}
	base[0]= (V234);
	{object V248= (V231);
	if((V248!= Cnil))goto T641;
	base[1]= symbol_function(VV[126]);
	goto T640;
goto T641;
T641:;
	if((V248!= VV[20]))goto T642;
	base[1]= symbol_function(VV[127]);
	goto T640;
goto T642;
T642:;
	if((V248!= VV[19]))goto T643;
	base[1]= symbol_function(VV[128]);
	goto T640;
goto T643;
T643:;
	FEerror("The ECASE key value ~s is illegal.",1,V248);
	base[1]= Cnil;
	goto T640;}
goto T640;
T640:;
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
goto T634;
T634:;
	if(((V231))!=Cnil){
	goto T646;}
	if(!(((Vcs[0]->c.c_car))==(VV[53]))){
	goto T646;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk123)();
	vs_top=sup;
	V249= vs_base[0];
	V250= number_times((V244),V249);
	base[0]= (VFUN_NARGS=5,(*(LnkLI118))(/* INLINE-ARGS */V250,VV[50],VV[61],VV[52],Ct));
	base[1]= (*(LnkLI129))((V244),Cnil,(V233));
	base[2]= symbol_value(VV[57]);
	base[3]= (V233);
	base[4]= Ct;
	vs_top=(vs_base=base+0)+5;
	(void) (*Lnk130)();
	vs_top=sup;
	V243= vs_base[0];
	goto T644;
goto T646;
T646:;
	{object V251;
	object V252;
	object V253;
	object V254;
	if((V236)==Cnil){
	V254= Cnil;
	goto T658;}
	V254= get((V236),VV[53],Cnil);
goto T658;
T658:;
	V251= Cnil;
	V252= small_fixnum(0);
	V253= Cnil;
	if(((V254))==Cnil){
	goto T659;}
	if((structure_ref((V254),VV[53],11))==Cnil){
	goto T662;}
	if((structure_ref((V254),VV[53],3))==Cnil){
	goto T663;}
	{object V255;
	V255= get((Vcs[0]->c.c_car),VV[53],Cnil);
	if((V255)==Cnil){
	goto T668;}
	V256= structure_ref((V255),VV[53],4);
	if((/* INLINE-ARGS */V256)==((V254))){
	goto T662;}}
goto T668;
T668:;
goto T663;
T663:;
	(void)((VFUN_NARGS=2,(*(LnkLI131))(VV[62],(V236))));
goto T662;
T662:;
	{object V257;
	object V259;
	V257= (Vcs[0]->c.c_car);
	base[1]= (V257);
	base[2]= structure_ref(V254,VV[53],3);
	vs_top=(vs_base=base+1)+2;
	Ladjoin();
	vs_top=sup;
	V259= vs_base[0];
	(void)(structure_set(V254,VV[53],3,(V259)));}
goto T659;
T659:;
	if(((V231))!=Cnil){
	goto T674;}
	V251= (*(LnkLI132))((V244),(V236),(V233));
	V252= cadr((V251));
	V253= caddr((V251));
	V251= car((V251));
goto T674;
T674:;
	if(((V231))==Cnil){
	goto T686;}
	V260= Cnil;
	goto T685;
goto T686;
T686:;
	V260= (*(LnkLI129))((V244),(V236),(V233));
goto T685;
T685:;
	V243= (VFUN_NARGS=32,(*(LnkLI133))(VV[63],(Vcs[0]->c.c_car),VV[64],(V244),VV[65],V260,VV[66],(V251),VV[67],(V252),VV[68],(V253),VV[69],(V235),VV[70],(V254),VV[71],(V237),VV[72],(V233),VV[73],(V238),VV[74],(V239),VV[75],(V231),VV[76],(V232),VV[77],(V241),VV[78],(V230)));}
goto T644;
T644:;
	{object V261;
	V261= get((Vcs[0]->c.c_car),VV[53],Cnil);
	if(!(((Vcs[0]->c.c_car))==(VV[53]))){
	goto T692;}
	if(((V261))==Cnil){
	goto T694;}
	(void)((VFUN_NARGS=1,(*(LnkLI131))(VV[79])));
goto T694;
T694:;
	if((V261)!=Cnil){
	goto T690;}
	(void)(sputprop((Vcs[0]->c.c_car),VV[53],(V243)));
	goto T690;
goto T692;
T692:;
	if(((V261))==Cnil){
	goto T698;}
	(void)((*(LnkLI134))((V261),(V243),(Vcs[0]->c.c_car)));
	goto T690;
goto T698;
T698:;
	(void)(sputprop((Vcs[0]->c.c_car),VV[53],(V243)));
goto T690;
T690:;
	if(((V241))==Cnil){
	goto T700;}
	(void)(sputprop((Vcs[0]->c.c_car),VV[80],(V241)));
goto T700;
T700:;
	if(((V231))!=Cnil){
	goto T688;}
	if(((V240))==Cnil){
	goto T688;}
	base[0]= (V240);
	base[1]= VV[3];
	base[2]= VV[81];
	base[3]= Ct;
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk109)();
	vs_top=sup;
	if((V242)!=Cnil){
	goto T712;}
	base[0]= (V240);
	base[1]= 
	make_cclosure_new(LC20,Cnil,Vcs[0],Cdata);
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
goto T712;
T712:;
	(void)(sputprop((V240),VV[82],VV[83]));
	(void)(sputprop((V240),VV[84],(Vcs[0]->c.c_car)));}
goto T688;
T688:;
	{object V262 = Cnil;
	VMR10(V262)}}
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
	{object V263=base[0]->c.c_cdr;
	if(endp(V263))invalid_macro_call();
	base[2]= (V263->c.c_car);
	V263=V263->c.c_cdr;
	base[3]= V263;}
	{register object V264;
	object V265;
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
	register object V277;
	register object V278;
	object V279;
	object V280;
	register object V281;
	V264= base[3];
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
	V280= Cnil;
	V281= Cnil;
	if(!(type_of(base[2])==t_cons)){
	goto T716;}
	V265= cdr(base[2]);
	base[2]= car(base[2]);
goto T716;
T716:;
	base[4]= coerce_to_string(base[2]);
	base[5]= VV[85];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	V266= vs_base[0];
	base[5]= VV[86];
	base[6]= coerce_to_string(base[2]);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V268= vs_base[0];
	base[5]= VV[87];
	base[6]= coerce_to_string(base[2]);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V270= vs_base[0];
	base[5]= coerce_to_string(base[2]);
	base[6]= VV[88];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V271= vs_base[0];
	{register object V282;
	register object V283;
	register object V284;
	V282= (V265);
	V283= Cnil;
	V284= Cnil;
goto T743;
T743:;
	if(!(endp_prop((V282)))){
	goto T744;}
	goto T741;
goto T744;
T744:;
	if(!(type_of(car((V282)))==t_cons)){
	goto T750;}
	if(endp_prop(cdar((V282)))){
	goto T750;}
	V283= caar((V282));
	V284= cadar((V282));
	{object V285= (V283);
	if((V285!= VV[78]))goto T758;
	if(((V284))!=Cnil){
	goto T760;}
	V266= VV[89];
	goto T748;
goto T760;
T760:;
	V266= (V284);
	goto T748;
goto T758;
T758:;
	if((V285!= VV[135]))goto T764;
	if(((V284))!=Cnil){
	goto T766;}
	V269= Ct;
	goto T748;
goto T766;
T766:;
	if(!(endp_prop(cddar((V282))))){
	goto T770;}
	V267= make_cons((V284),(V267));
	goto T748;
goto T770;
T770:;
	V267= make_cons(cdar((V282)),(V267));
	goto T748;
goto T764;
T764:;
	if((V285!= VV[136]))goto T774;
	V270= (V284);
	goto T748;
goto T774;
T774:;
	if((V285!= VV[52]))goto T776;
	V281= (V284);
	goto T748;
goto T776;
T776:;
	if((V285!= VV[137]))goto T778;
	V271= (V284);
	V272= Ct;
	goto T748;
goto T778;
T778:;
	if((V285!= VV[138]))goto T782;
	V273= cdar((V282));
	if((get((V284),VV[53],Cnil))!=Cnil){
	goto T748;}
	base[4]= VV[90];
	base[5]= (V284);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
	goto T748;
goto T782;
T782:;
	if((V285!= VV[71]))goto T789;
	if(type_of((V284))==t_cons){
	goto T791;}
	goto T790;
goto T791;
T791:;
	if((car((V284)))==(VV[91])){
	goto T793;}
	goto T790;
goto T793;
T793:;
	V284= cadr((V284));
goto T790;
T790:;
	V274= (V284);
	goto T748;
goto T789;
T789:;
	if((V285!= VV[75]))goto T797;
	V275= (V284);
	goto T748;
goto T797;
T797:;
	if((V285!= VV[139]))goto T799;
	V277= (V284);
	goto T748;
goto T799;
T799:;
	base[4]= VV[92];
	base[5]= (V283);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
	goto T748;}
goto T750;
T750:;
	if(!(type_of(car((V282)))==t_cons)){
	goto T805;}
	V283= caar((V282));
	goto T803;
goto T805;
T805:;
	V283= car((V282));
goto T803;
T803:;
	{object V286= (V283);
	if((V286!= VV[135]))goto T809;
	V267= make_cons((V268),(V267));
	goto T748;
goto T809;
T809:;
	if((V286!= VV[78])
	&& (V286!= VV[136])
	&& (V286!= VV[137])
	&& (V286!= VV[71]))goto T811;
	goto T748;
goto T811;
T811:;
	if((V286!= VV[76]))goto T812;
	V276= Ct;
	goto T748;
goto T812;
T812:;
	base[4]= VV[93];
	base[5]= (V283);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;}
goto T748;
T748:;
	V282= cdr((V282));
	goto T743;}
goto T741;
T741:;
	base[4]= coerce_to_string((V266));
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V266= vs_base[0];
	if((V273)==Cnil){
	goto T822;}
	if(((V274))==Cnil){
	goto T823;}
	goto T822;
goto T823;
T823:;
	V287= get(car((V273)),VV[53],Cnil);
	V274= structure_ref(V287,VV[53],6);
goto T822;
T822:;
	if(endp_prop((V264))){
	goto T827;}
	if(!(type_of(car((V264)))==t_string)){
	goto T827;}
	V280= car((V264));
	V264= cdr((V264));
goto T827;
T827:;
	if(((V273))==Cnil){
	goto T835;}
	V288= get(car((V273)),VV[53],Cnil);
	V289= structure_ref(V288,VV[53],16);
	if(equal((V275),/* INLINE-ARGS */V289)){
	goto T835;}
	base[4]= VV[94];
	base[5]= car((V273));
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
goto T835;
T835:;
	if(((V273))!=Cnil){
	goto T845;}
	V278= small_fixnum(0);
	goto T843;
goto T845;
T845:;
	V290= get(car((V273)),VV[53],Cnil);
	V278= structure_ref(V290,VV[53],14);
goto T843;
T843:;
	if(((V275))==Cnil){
	goto T850;}
	if(((V277))==Cnil){
	goto T850;}
	V278= number_plus((V278),(V277));
goto T850;
T850:;
	if(((V275))==Cnil){
	goto T856;}
	if(((V276))==Cnil){
	goto T856;}
	V279= (V278);
	V278= one_plus((V278));
goto T856;
T856:;
	{register object V291;
	register object V292;
	V291= (V264);
	V292= Cnil;
goto T866;
T866:;
	if(!(endp_prop((V291)))){
	goto T867;}
	V264= nreverse((V292));
	goto T864;
goto T867;
T867:;
	V293= (*(LnkLI140))(car((V291)),(V278));
	V292= make_cons(/* INLINE-ARGS */V293,(V292));
	V278= one_plus((V278));
	V291= cdr((V291));
	goto T866;}
goto T864;
T864:;
	if(((V275))==Cnil){
	goto T879;}
	if(((V276))==Cnil){
	goto T879;}
	V294= list(2,Cnil,base[2]);
	V264= make_cons(/* INLINE-ARGS */V294,(V264));
goto T879;
T879:;
	if(((V275))==Cnil){
	goto T885;}
	if(((V277))==Cnil){
	goto T885;}
	base[4]= (V277);
	vs_top=(vs_base=base+4)+1;
	Lmake_list();
	vs_top=sup;
	V295= vs_base[0];
	V264= append(V295,(V264));
goto T885;
T885:;
	{object V296;
	V296= (((V273))==Cnil?Ct:Cnil);
	if(((V296))==Cnil){
	goto T896;}
	goto T893;
goto T896;
T896:;
	if(!(endp_prop(cdr((V273))))){
	goto T899;}
	V297= get(car((V273)),VV[53],Cnil);
	V298= structure_ref(V297,VV[53],7);
	V264= append(/* INLINE-ARGS */V298,(V264));
	goto T893;
goto T899;
T899:;
	{object V300;
	object V301= cdr((V273));
	if(endp(V301)){
	V299= Cnil;
	goto T904;}
	base[4]=V300=MMcons(Cnil,Cnil);
goto T905;
T905:;
	(V300->c.c_car)= (*(LnkLI140))((V301->c.c_car),small_fixnum(0));
	V301=MMcdr(V301);
	if(endp(V301)){
	V299= base[4];
	goto T904;}
	V300=MMcdr(V300)=MMcons(Cnil,Cnil);
	goto T905;}
goto T904;
T904:;
	V303= get(car((V273)),VV[53],Cnil);
	V304= structure_ref(V303,VV[53],7);
	V305= (*(LnkLI117))(V299,/* INLINE-ARGS */V304);
	V264= append(/* INLINE-ARGS */V305,(V264));}
goto T893;
T893:;
	if(((V269))==Cnil){
	goto T910;}
	if(((V267))==Cnil){
	goto T908;}
	base[4]= VV[95];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T908;
goto T910;
T910:;
	if(((V267))!=Cnil){
	goto T908;}
	V267= make_cons((V268),Cnil);
goto T908;
T908:;{object V306;
	{object V309;
	object V310= (V267);
	if(endp(V310)){
	V308= Cnil;
	goto T921;}
	base[4]=V309=MMcons(Cnil,Cnil);
goto T922;
T922:;
	base[5]= (V310->c.c_car);
	vs_top=(vs_base=base+5)+1;
	Lsymbolp();
	vs_top=sup;
	(V309->c.c_car)= vs_base[0];
	V310=MMcdr(V310);
	if(endp(V310)){
	V308= base[4];
	goto T921;}
	V309=MMcdr(V309)=MMcons(Cnil,Cnil);
	goto T922;}
goto T921;
T921:;
	{register object x= Ct,V307= V308;
	while(!endp(V307))
	if(eql(x,V307->c.c_car)){
	V306= V307;
	goto T920;
	}else V307=V307->c.c_cdr;
	V306= Cnil;}
goto T920;
T920:;
	if(V306==Cnil)goto T919;
	goto T918;
goto T919;
T919:;}
	{object V311;
	base[6]= VV[96];
	base[7]= (V268);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk107)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lintern();
	vs_top=sup;
	V311= vs_base[0];
	V267= make_cons((V311),(V267));}
goto T918;
T918:;
	if(((V275))==Cnil){
	goto T930;}
	if(((V276))!=Cnil){
	goto T930;}
	if(((V272))==Cnil){
	goto T935;}
	base[4]= VV[97];
	base[5]= (V271);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
goto T935;
T935:;
	V271= Cnil;
goto T930;
T930:;
	if(((V273))==Cnil){
	goto T941;}
	V273= car((V273));
goto T941;
T941:;
	if(((V274))==Cnil){
	goto T945;}
	if(((V275))==Cnil){
	goto T945;}
	base[4]= VV[98];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
goto T945;
T945:;
	base[4]= VV[100];
	base[5]= list(2,VV[11],base[2]);
	base[6]= list(2,VV[11],(V266));
	base[7]= list(2,VV[11],(V275));
	base[8]= list(2,VV[11],(V276));
	base[9]= list(2,VV[11],(V264));
	base[10]= list(2,VV[11],(V270));
	base[11]= list(2,VV[11],(V281));
	base[12]= list(2,VV[11],(V273));
	base[13]= list(2,VV[11],(V274));
	base[14]= list(2,VV[11],(V267));
	base[15]= list(2,VV[11],(V278));
	base[16]= list(2,VV[11],(V271));
	base[17]= list(2,VV[11],(V280));
	vs_top=(vs_base=base+4)+14;
	Llist();
	vs_top=sup;
	V312= vs_base[0];
	{object V314;
	object V315= (V267);
	if(endp(V315)){
	base[4]= Cnil;
	goto T967;}
	base[5]=V314=MMcons(Cnil,Cnil);
goto T968;
T968:;
	(V314->c.c_car)= (*(LnkLI141))(base[2],(V315->c.c_car),(V275),(V276),(V264));
	V315=MMcdr(V315);
	if(endp(V315)){
	base[4]= base[5];
	goto T967;}
	V314=MMcdr(V314)=MMcons(Cnil,Cnil);
	goto T968;}
goto T967;
T967:;
	if(((V275))==Cnil){
	goto T972;}
	if(((V271))==Cnil){
	goto T972;}
	V317= (*(LnkLI142))(base[2],(V271),(V275),(V276),(V279));
	base[5]= make_cons(/* INLINE-ARGS */V317,Cnil);
	goto T970;
goto T972;
T972:;
	base[5]= Cnil;
goto T970;
T970:;
	V318= list(2,VV[11],base[2]);
	base[6]= make_cons(/* INLINE-ARGS */V318,Cnil);
	vs_top=(vs_base=base+4)+3;
	Lappend();
	vs_top=sup;
	V313= vs_base[0];
	base[4]= listA(3,VV[99],V312,V313);
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	local entry for function MAKE-S-DATA	*/

static object LI12(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V319;
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
	object V335;
	object V336;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)&LI12key,first,ap);
	V319=(Vcs[0]);
	V320=(Vcs[1]);
	V321=(Vcs[2]);
	V322=(Vcs[3]);
	V323=(Vcs[4]);
	V324=(Vcs[5]);
	V325=(Vcs[6]);
	V326=(Vcs[7]);
	V327=(Vcs[8]);
	V328=(Vcs[9]);
	V329=(Vcs[10]);
	V330=(Vcs[11]);
	V331=(Vcs[12]);
	V332=(Vcs[13]);
	V333=(Vcs[14]);
	V334=(Vcs[15]);
	V335=(Vcs[16]);
	V336=(Vcs[17]);
	base[0]= VV[53];
	base[1]= (V319);
	base[2]= (V320);
	base[3]= (V321);
	base[4]= (V322);
	base[5]= (V323);
	base[6]= (V324);
	base[7]= (V325);
	base[8]= (V326);
	base[9]= (V327);
	base[10]= (V328);
	base[11]= (V329);
	base[12]= (V330);
	base[13]= (V331);
	base[14]= (V332);
	base[15]= (V333);
	base[16]= (V334);
	base[17]= (V335);
	base[18]= (V336);
	vs_top=(vs_base=base+0)+19;
	siLmake_structure();
	vs_top=sup;
	{object V337 = vs_base[0];
	VMR12(V337)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function CHECK-S-DATA	*/

static object LI13(V341,V342,V343)

register object V341;register object V342;object V343;
{	 VMB13 VMS13 VMV13
goto TTL;
TTL:;
	if((structure_ref((V341),VV[53],3))==Cnil){
	goto T996;}
	V344= structure_ref((V341),VV[53],3);
	(void)(structure_set((V342),VV[53],3,/* INLINE-ARGS */V344));
goto T996;
T996:;
	if((structure_ref((V341),VV[53],11))==Cnil){
	goto T999;}
	(void)(structure_set((V342),VV[53],11,Ct));
goto T999;
T999:;
	if(equalp((V342),(V341))){
	goto T1003;}
	(void)((VFUN_NARGS=2,(*(LnkLI131))(VV[101],(V343))));
	{object V345 = sputprop((V343),VV[53],(V342));
	VMR13(V345)}
goto T1003;
T1003:;
	{object V346 = Cnil;
	VMR13(V346)}
	return Cnil;
}
/*	local entry for function FREEZE-DEFSTRUCT	*/

static object LI14(V348)

object V348;
{	 VMB14 VMS14 VMV14
goto TTL;
TTL:;
	{object V349;
	if(type_of((V348))==t_symbol){
	goto T1007;}
	V349= Cnil;
	goto T1006;
goto T1007;
T1007:;
	V349= get((V348),VV[53],Cnil);
goto T1006;
T1006:;
	if(((V349))==Cnil){
	goto T1010;}
	{object V350 = structure_set((V349),VV[53],11,Ct);
	VMR14(V350)}
goto T1010;
T1010:;
	{object V351 = Cnil;
	VMR14(V351)}}
	return Cnil;
}
/*	function definition for SHARP-S-READER	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	{object V352;
	object V353;
	object V354;
	check_arg(3);
	V352=(base[0]);
	V353=(base[1]);
	V354=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	if(((V354))==Cnil){
	goto T1012;}
	if((symbol_value(VV[102]))!=Cnil){
	goto T1012;}
	base[3]= VV[103];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
goto T1012;
T1012:;
	{register object V355;
	register object V356;
	{object V357;
	base[5]= (V352);
	base[6]= Ct;
	base[7]= Cnil;
	base[8]= Ct;
	vs_top=(vs_base=base+5)+4;
	Lread();
	vs_top=sup;
	V357= vs_base[0];
	if((symbol_value(VV[102]))==Cnil){
	goto T1024;}
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;
goto T1024;
T1024:;
	V355= (V357);}{object V358;
	V358= get(car((V355)),VV[53],Cnil);
	if(V358==Cnil)goto T1028;
	V356= V358;
	goto T1027;
goto T1028;
T1028:;}
	base[5]= VV[104];
	base[6]= car((V355));
	vs_top=(vs_base=base+5)+2;
	Lerror();
	vs_top=sup;
	V356= vs_base[0];
goto T1027;
T1027:;
	{register object V359;
	V359= cdr((V355));
goto T1034;
T1034:;
	if(!(endp_prop((V359)))){
	goto T1035;}
	{register object V360;
	V360= structure_ref((V356),VV[53],13);
goto T1040;
T1040:;
	if(!(endp_prop((V360)))){
	goto T1041;}
	base[5]= VV[105];
	base[6]= car((V355));
	vs_top=(vs_base=base+5)+2;
	Lerror();
	return;
goto T1041;
T1041:;
	if(!(type_of(car((V360)))==t_symbol)){
	goto T1047;}
	base[5]= car((V360));
	{object V361;
	V361= cdr((V355));
	 vs_top=base+6;
	 while(!endp(V361))
	 {vs_push(car(V361));V361=cdr(V361);}
	vs_base=base+6;}
	super_funcall_no_event(base[5]);
	return;
goto T1047;
T1047:;
	V360= cdr((V360));
	goto T1040;}
goto T1035;
T1035:;
	base[5]= coerce_to_string(car((V359)));
	base[6]= VV[106];
	vs_top=(vs_base=base+5)+2;
	Lintern();
	vs_top=sup;
	V362= vs_base[0];
	if(type_of((V359))!=t_cons)FEwrong_type_argument(Scons,(V359));
	((V359))->c.c_car = V362;
	V359= cddr((V359));
	goto T1034;}}
	}
}
/*	local function CLOSURE	*/

static void LC20(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{object V363;
	check_arg(1);
	V363=(base[0]);
	vs_top=sup;
	base[1]= (V363);
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
	{object V364;
	check_arg(1);
	V364=(base[0]);
	vs_top=sup;
	if(!(type_of((V364))==t_cons)){
	goto T1066;}
	base[1]= car((V364));
	vs_top=(vs_base=base+1)+1;
	return;
goto T1066;
T1066:;
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
	{object V365;
	check_arg(1);
	V365=(base[0]);
	vs_top=sup;
	base[1]= aref1((V365),fixint((base0[0]->c.c_car)));
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
	{object V366;
	check_arg(1);
	V366=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V366);
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
	{object V367;
	check_arg(1);
	V367=(base[0]);
	vs_top=sup;
	if(!(type_of((V367))==t_structure)){
	goto T1071;}
	goto T1070;
goto T1071;
T1071:;
	base[1]= VV[5];
	base[2]= (V367);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
goto T1070;
T1070:;
	base[1]= (V367);
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk147)();
	return;
	}
}
static void LnkT147(){ call_or_link(VV[147],(void **)&Lnk147);} /* STRUCTURE-REF1 */
static void LnkT146(){ call_or_link(VV[146],(void **)&Lnk146);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI142(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[142],(void **)&LnkLI142,5,first,ap);va_end(ap);return V1;} /* MAKE-PREDICATE */
static object  LnkTLI141(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[141],(void **)&LnkLI141,5,first,ap);va_end(ap);return V1;} /* MAKE-CONSTRUCTOR */
static object  LnkTLI140(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[140],(void **)&LnkLI140,2,first,ap);va_end(ap);return V1;} /* PARSE-SLOT-DESCRIPTION */
static object  LnkTLI134(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[134],(void **)&LnkLI134,3,first,ap);va_end(ap);return V1;} /* CHECK-S-DATA */
static object  LnkTLI133(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[133],(void **)&LnkLI133,first,ap);va_end(ap);return V1;} /* MAKE-S-DATA */
static object  LnkTLI132(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[132],(void **)&LnkLI132,3,first,ap);va_end(ap);return V1;} /* GET-SLOT-POS */
static object  LnkTLI131(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[131],(void **)&LnkLI131,first,ap);va_end(ap);return V1;} /* WARN */
static void LnkT130(){ call_or_link(VV[130],(void **)&Lnk130);} /* MAKE-S-DATA-STRUCTURE */
static object  LnkTLI129(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[129],(void **)&LnkLI129,3,first,ap);va_end(ap);return V1;} /* MAKE-T-TYPE */
static void LnkT125(){ call_or_link(VV[125],(void **)&Lnk125);} /* MAKE-ACCESS-FUNCTION */
static object  LnkTLI124(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[124],(void **)&LnkLI124,20738,first,ap);va_end(ap);return V1;} /* ROUND-UP */
static void LnkT123(){ call_or_link(VV[123],(void **)&Lnk123);} /* SIZE-OF */
static object  LnkTLI122(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[122],(void **)&LnkLI122,2,first,ap);va_end(ap);return V1;} /* COERCE */
static void LnkT121(){ call_or_link(VV[121],(void **)&Lnk121);} /* TYPEP */
static void LnkT120(){ call_or_link(VV[120],(void **)&Lnk120);} /* AET-TYPE */
static void LnkT119(){ call_or_link(VV[119],(void **)&Lnk119);} /* ALIGNMENT */
static object  LnkTLI118(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[118],(void **)&LnkLI118,first,ap);va_end(ap);return V1;} /* MAKE-ARRAY */
static object  LnkTLI117(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[117],(void **)&LnkLI117,2,first,ap);va_end(ap);return V1;} /* OVERWRITE-SLOT-DESCRIPTIONS */
static object  LnkTLI116(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[116],(void **)&LnkLI116,1,first,ap);va_end(ap);return V1;} /* NORMALIZE-TYPE */
static object  LnkTLI115(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[115],(void **)&LnkLI115,1,first,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI111(){return call_proc0(VV[111],(void **)&LnkLI111);} /* ILLEGAL-BOA */
static void LnkT110(){ call_or_link(VV[110],(void **)&Lnk110);} /* SUBTYPEP */
static void LnkT109(){ call_or_link(VV[109],(void **)&Lnk109);} /* RECORD-FN */
static object  LnkTLI108(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[108],(void **)&LnkLI108,first,ap);va_end(ap);return V1;} /* ADJUST-ARRAY */
static void LnkT107(){ call_or_link(VV[107],(void **)&Lnk107);} /* STRING-CONCATENATE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

