
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
	V24= symbol_value(VV[0]);}
goto T8;
T8:;
	V27 = make_fixnum((long)length((V24)));
	if(!(number_compare(V27,(Vcs[10]->c.c_car))>0)){
	goto T17;}
	goto T16;
goto T17;
T17:;
	V28= number_plus((Vcs[10]->c.c_car),small_fixnum(10));
	(void)((VFUN_NARGS=2,(*(LnkLI110))((V24),/* INLINE-ARGS */V28)));
goto T16;
T16:;
	if(((V25))!=Cnil){
	goto T19;}
	base[0]= (V23);
	base[1]= VV[3];
	base[2]= VV[4];
	base[3]= (V20);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk111)();
	vs_top=sup;
	if((V17)!=Cnil){
	goto T19;}{object V29;
	base[0]= (V23);
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T29;}
	V29= Cnil;
	goto T28;
goto T29;
T29:;
	V30= aref1((V24),fixint((Vcs[10]->c.c_car)));
	base[0]= (V23);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V31= vs_base[0];
	V29= ((/* INLINE-ARGS */V30)==(V31)?Ct:Cnil);
goto T28;
T28:;
	if(V29==Cnil)goto T27;
	goto T19;
goto T27;
T27:;}
	base[0]= (V23);{object V32;
	V32= aref1((V24),fixint((Vcs[10]->c.c_car)));
	if(V32==Cnil)goto T36;
	base[1]= V32;
	goto T35;
goto T36;
T36:;}
	if(!(((V24))==(symbol_value(VV[0])))){
	goto T40;}
	V33= 
	make_cclosure_new(LC16,Cnil,Vcs[10],Cdata);
	goto T38;
goto T40;
T40:;
	if(!(((V24))==(symbol_value(VV[1])))){
	goto T43;}
	V33= 
	make_cclosure_new(LC17,Cnil,Vcs[10],Cdata);
	goto T38;
goto T43;
T43:;
	if(!(((V24))==(symbol_value(VV[2])))){
	goto T46;}
	V33= 
	make_cclosure_new(LC18,Cnil,Vcs[10],Cdata);
	goto T38;
goto T46;
T46:;
	V33= Cnil;
goto T38;
T38:;
	base[1]= aset1((V24),fixint((Vcs[10]->c.c_car)),V33);
goto T35;
T35:;
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
goto T19;
T19:;
	if(((V21))==Cnil){
	goto T50;}
	(void)(remprop((V23),VV[6]));
	(void)(sputprop((V23),VV[7],Ct));
	goto T48;
goto T50;
T50:;
	(void)(remprop((V23),VV[8]));
	(void)(remprop((V23),VV[9]));
	(void)(remprop((V23),VV[10]));
	{object V34;
	V34= get((V23),VV[6],Cnil);
	if(!(type_of((V34))==t_cons)){
	goto T58;}
	if(((V16))==Cnil){
	goto T58;}
	base[0]= (V16);
	base[1]= car((V34));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk112)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T58;}
	if(!(eql(cdr((V34)),(Vcs[10]->c.c_car)))){
	goto T58;}
	V25= Ct;
	goto T48;
goto T58;
T58:;
	if(((V14))==Cnil){
	goto T71;}
	V35= (V14);
	goto T69;
goto T71;
T71:;
	V35= (V12);
goto T69;
T69:;
	V36= make_cons(V35,(Vcs[10]->c.c_car));
	(void)(sputprop((V23),VV[6],/* INLINE-ARGS */V36));}
goto T48;
T48:;
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
	goto T73;}
	base[0]=V50=MMcons(Cnil,Cnil);
goto T74;
T74:;
	if(((V51->c.c_car))!=Cnil){
	goto T77;}
	(V50->c.c_car)= Cnil;
	goto T75;
goto T77;
T77:;
	if((car((V51->c.c_car)))!=Cnil){
	goto T80;}
	(V50->c.c_car)= list(2,VV[11],cadr((V51->c.c_car)));
	goto T75;
goto T80;
T80:;
	(V50->c.c_car)= car((V51->c.c_car));
goto T75;
T75:;
	if(endp(V51=MMcdr(V51))){
	V48= base[0];
	goto T73;}
	V50=MMcdr(V50)=MMcons(Cnil,Cnil);
	goto T74;}
goto T73;
T73:;
	{object V53;
	object V54= (V47);
	if(endp(V54)){
	V49= Cnil;
	goto T82;}
	base[0]=V53=MMcons(Cnil,Cnil);
goto T83;
T83:;
	if(((V54->c.c_car))!=Cnil){
	goto T86;}
	(V53->c.c_cdr)= Cnil;
	goto T84;
goto T86;
T86:;
	if((car((V54->c.c_car)))!=Cnil){
	goto T89;}
	(V53->c.c_cdr)= Cnil;
	goto T84;
goto T89;
T89:;
	if((cadr((V54->c.c_car)))!=Cnil){
	goto T92;}
	(V53->c.c_cdr)= make_cons(car((V54->c.c_car)),Cnil);
	goto T84;
goto T92;
T92:;
	V56= list(2,car((V54->c.c_car)),cadr((V54->c.c_car)));
	(V53->c.c_cdr)= make_cons(/* INLINE-ARGS */V56,Cnil);
goto T84;
T84:;
	while(!endp(MMcdr(V53)))V53=MMcdr(V53);
	if(endp(V54=MMcdr(V54))){
	base[0]=base[0]->c.c_cdr;
	V49= base[0];
	goto T82;}
	goto T83;}
goto T82;
T82:;
	if(!(type_of((V44))==t_cons)){
	goto T96;}
	{register object V57;
	register object V58;
	register object V59;
	V57= cadr((V44));
	V58= Cnil;
	V59= Cnil;
goto T101;
T101:;
	if(!(endp((V57)))){
	goto T102;}
	base[0]= make_cons(VV[12],(V58));
	{object V60;
	object V61= (V49);
	if(endp(V61)){
	base[1]= Cnil;
	goto T107;}
	base[2]=V60=MMcons(Cnil,Cnil);
goto T108;
T108:;
	if(!(type_of((V61->c.c_car))!=t_cons)){
	goto T115;}
	V64= (V61->c.c_car);
	goto T113;
goto T115;
T115:;
	V64= car((V61->c.c_car));
goto T113;
T113:;
	{register object x= V64,V63= (V59);
	while(!endp(V63))
	if(eql(x,V63->c.c_car)){
	goto T112;
	}else V63=V63->c.c_cdr;
	goto T111;}
goto T112;
T112:;
	(V60->c.c_cdr)= Cnil;
	goto T109;
goto T111;
T111:;
	(V60->c.c_cdr)= make_cons((V61->c.c_car),Cnil);
goto T109;
T109:;
	while(!endp(MMcdr(V60)))V60=MMcdr(V60);
	if(endp(V61=MMcdr(V61))){
	base[2]=base[2]->c.c_cdr;
	base[1]= base[2];
	goto T107;}
	goto T108;}
goto T107;
T107:;
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	V49= vs_base[0];
	goto T98;
goto T102;
T102:;
	{register object x= car((V57)),V65= VV[13];
	while(!endp(V65))
	if(eql(x,V65->c.c_car)){
	goto T120;
	}else V65=V65->c.c_cdr;
	goto T118;}
goto T120;
T120:;
	if(!((car((V57)))==(VV[14]))){
	goto T121;}
	goto T118;
goto T121;
T121:;
	V57= make_cons(VV[14],(V57));
goto T118;
T118:;
	if(!((car((V57)))==(VV[14]))){
	goto T126;}
	V58= make_cons(VV[14],(V58));
	{register object V66;
	object V67;
	object V68;
	V66= cdr((V57));
	V67= Cnil;
	V68= Cnil;
goto T133;
T133:;
	if(!(endp((V66)))){
	goto T134;}
	base[0]= make_cons(VV[12],(V58));
	{object V69;
	object V70= (V49);
	if(endp(V70)){
	base[1]= Cnil;
	goto T140;}
	base[2]=V69=MMcons(Cnil,Cnil);
goto T141;
T141:;
	if(!(type_of((V70->c.c_car))!=t_cons)){
	goto T148;}
	V73= (V70->c.c_car);
	goto T146;
goto T148;
T148:;
	V73= car((V70->c.c_car));
goto T146;
T146:;
	{register object x= V73,V72= (V59);
	while(!endp(V72))
	if(eql(x,V72->c.c_car)){
	goto T145;
	}else V72=V72->c.c_cdr;
	goto T144;}
goto T145;
T145:;
	(V69->c.c_cdr)= Cnil;
	goto T142;
goto T144;
T144:;
	(V69->c.c_cdr)= make_cons((V70->c.c_car),Cnil);
goto T142;
T142:;
	while(!endp(MMcdr(V69)))V69=MMcdr(V69);
	if(endp(V70=MMcdr(V70))){
	base[2]=base[2]->c.c_cdr;
	base[1]= base[2];
	goto T140;}
	goto T141;}
goto T140;
T140:;
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	V49= vs_base[0];
	goto T130;
goto T134;
T134:;
	{register object x= car((V66)),V74= VV[13];
	while(!endp(V74))
	if(eql(x,V74->c.c_car)){
	goto T153;
	}else V74=V74->c.c_cdr;
	goto T151;}
goto T153;
T153:;
	if(!((car((V66)))==(VV[15]))){
	goto T154;}
	V58= make_cons(VV[15],(V58));
	V66= cdr((V66));
	if(endp((V66))){
	goto T162;}
	if(type_of(car((V66)))==t_symbol){
	goto T161;}
goto T162;
T162:;
	(void)((*(LnkLI113))());
goto T161;
T161:;
	V59= make_cons(car((V66)),(V59));
	V58= make_cons(car((V66)),(V58));
	V66= cdr((V66));
	if(!(endp((V66)))){
	goto T154;}
	base[0]= make_cons(VV[12],(V58));
	{object V75;
	object V76= (V49);
	if(endp(V76)){
	base[1]= Cnil;
	goto T177;}
	base[2]=V75=MMcons(Cnil,Cnil);
goto T178;
T178:;
	if(!(type_of((V76->c.c_car))!=t_cons)){
	goto T185;}
	V79= (V76->c.c_car);
	goto T183;
goto T185;
T185:;
	V79= car((V76->c.c_car));
goto T183;
T183:;
	{register object x= V79,V78= (V59);
	while(!endp(V78))
	if(eql(x,V78->c.c_car)){
	goto T182;
	}else V78=V78->c.c_cdr;
	goto T181;}
goto T182;
T182:;
	(V75->c.c_cdr)= Cnil;
	goto T179;
goto T181;
T181:;
	(V75->c.c_cdr)= make_cons((V76->c.c_car),Cnil);
goto T179;
T179:;
	while(!endp(MMcdr(V75)))V75=MMcdr(V75);
	if(endp(V76=MMcdr(V76))){
	base[2]=base[2]->c.c_cdr;
	base[1]= base[2];
	goto T177;}
	goto T178;}
goto T177;
T177:;
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	V49= vs_base[0];
	goto T130;
goto T154;
T154:;
	if((car((V66)))==(VV[12])){
	goto T187;}
	(void)((*(LnkLI113))());
goto T187;
T187:;
	V58= make_cons(VV[12],(V58));
	{register object V80;
	V80= cdr((V66));
goto T195;
T195:;
	if(!(endp((V80)))){
	goto T196;}
	goto T192;
goto T196;
T196:;
	V58= make_cons(car((V80)),(V58));
	if(!(type_of(car((V80)))!=t_cons)){
	goto T204;}
	if(!(type_of(car((V80)))==t_symbol)){
	goto T204;}
	V59= make_cons(car((V80)),(V59));
	goto T202;
goto T204;
T204:;
	if(!(type_of(caar((V80)))==t_symbol)){
	goto T210;}
	if(endp(cdar((V80)))){
	goto T209;}
	if(!(endp(cddar((V80))))){
	goto T210;}
goto T209;
T209:;
	V59= make_cons(caar((V80)),(V59));
	goto T202;
goto T210;
T210:;
	(void)((*(LnkLI113))());
goto T202;
T202:;
	V80= cdr((V80));
	goto T195;}
goto T192;
T192:;
	base[0]= (V58);
	{object V81;
	object V82= (V49);
	if(endp(V82)){
	base[1]= Cnil;
	goto T223;}
	base[2]=V81=MMcons(Cnil,Cnil);
goto T224;
T224:;
	if(!(type_of((V82->c.c_car))!=t_cons)){
	goto T231;}
	V85= (V82->c.c_car);
	goto T229;
goto T231;
T231:;
	V85= car((V82->c.c_car));
goto T229;
T229:;
	{register object x= V85,V84= (V59);
	while(!endp(V84))
	if(eql(x,V84->c.c_car)){
	goto T228;
	}else V84=V84->c.c_cdr;
	goto T227;}
goto T228;
T228:;
	(V81->c.c_cdr)= Cnil;
	goto T225;
goto T227;
T227:;
	(V81->c.c_cdr)= make_cons((V82->c.c_car),Cnil);
goto T225;
T225:;
	while(!endp(MMcdr(V81)))V81=MMcdr(V81);
	if(endp(V82=MMcdr(V82))){
	base[2]=base[2]->c.c_cdr;
	base[1]= base[2];
	goto T223;}
	goto T224;}
goto T223;
T223:;
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	V49= vs_base[0];
	goto T130;
goto T151;
T151:;
	if(!(type_of(car((V66)))!=t_cons)){
	goto T239;}
	V67= car((V66));
	goto T237;
goto T239;
T239:;
	if(!(endp(cdar((V66))))){
	goto T244;}
	V67= caar((V66));
	goto T237;
goto T244;
T244:;
	goto T235;
goto T237;
T237:;
	base[0]= (V67);
	base[1]= (V49);
	base[2]= VV[16];
	base[3]= VV[114];
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	V68= vs_base[0];
	if(((V68))==Cnil){
	goto T235;}
	V58= make_cons(car((V68)),(V58));
	goto T233;
goto T235;
T235:;
	V58= make_cons(car((V66)),(V58));
goto T233;
T233:;
	if(!(type_of(car((V66)))!=t_cons)){
	goto T258;}
	if(type_of(car((V66)))==t_symbol){
	goto T260;}
	(void)((*(LnkLI113))());
goto T260;
T260:;
	V59= make_cons(car((V66)),(V59));
	goto T256;
goto T258;
T258:;
	if(type_of(caar((V66)))==t_symbol){
	goto T265;}
	(void)((*(LnkLI113))());
	goto T256;
goto T265;
T265:;
	if(endp(cdar((V66)))){
	goto T267;}
	if(!(endp(cddar((V66))))){
	goto T268;}
goto T267;
T267:;
	V59= make_cons(caar((V66)),(V59));
	goto T256;
goto T268;
T268:;
	if(type_of(caddar((V66)))==t_symbol){
	goto T274;}
	(void)((*(LnkLI113))());
	goto T256;
goto T274;
T274:;
	if(endp(cdddar((V66)))){
	goto T277;}
	(void)((*(LnkLI113))());
	goto T256;
goto T277;
T277:;
	V59= make_cons(caar((V66)),(V59));
	V59= make_cons(caddar((V66)),(V59));
goto T256;
T256:;
	V66= cdr((V66));
	goto T133;}
goto T130;
T130:;
	goto T98;
goto T126;
T126:;
	if(type_of(car((V57)))==t_symbol){
	goto T285;}
	(void)((*(LnkLI113))());
goto T285;
T285:;
	V58= make_cons(car((V57)),(V58));
	V59= make_cons(car((V57)),(V59));
	V57= cdr((V57));
	goto T101;}
goto T98;
T98:;
	V44= car((V44));
	goto T94;
goto T96;
T96:;
	V49= make_cons(VV[17],(V49));
goto T94;
T94:;
	if(((V45))!=Cnil){
	goto T297;}
	{object V86 = list(4,VV[3],(V44),(V49),listA(3,VV[18],list(2,VV[11],(V43)),(V48)));
	VMR2(V86)}
goto T297;
T297:;
	if(((V45))==(VV[19])){
	goto T299;}
	if(!(type_of((V45))==t_cons)){
	goto T300;}
	if(!((car((V45)))==(VV[19]))){
	goto T300;}
goto T299;
T299:;
	{object V87 = list(4,VV[3],(V44),(V49),make_cons(VV[19],(V48)));
	VMR2(V87)}
goto T300;
T300:;
	if(!(((V45))==(VV[20]))){
	goto T307;}
	{object V88 = list(4,VV[3],(V44),(V49),make_cons(VV[20],(V48)));
	VMR2(V88)}
goto T307;
T307:;
	{object V89;
	base[0]= VV[21];
	base[1]= (V45);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	V89= vs_base[0];
	if(((V89))==Cnil){
	goto T313;}
	{object V90 = (V89);
	VMR2(V90)}
goto T313;
T313:;
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
	goto T318;}
	{object V104 = (V103);
	VMR4(V104)}
goto T318;
T318:;
	if(((V100))==(VV[19])){
	goto T320;}
	if(!(type_of((V100))==t_cons)){
	goto T321;}
	if(!((car((V100)))==(VV[19]))){
	goto T321;}
goto T320;
T320:;
	if(((V101))!=Cnil){
	goto T327;}
	base[0]= VV[23];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T327;
T327:;
	V105= list(3,VV[27],VV[28],(V102));
	V106= list(3,VV[30],VV[31],(V102));
	{object V107 = list(4,VV[3],(V99),VV[24],list(4,VV[25],VV[26],/* INLINE-ARGS */V105,list(3,VV[29],/* INLINE-ARGS */V106,list(2,VV[11],(V98)))));
	VMR4(V107)}
goto T321;
T321:;
	if(!(((V100))==(VV[20]))){
	goto T332;}
	if(((V101))!=Cnil){
	goto T334;}
	base[0]= VV[32];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
goto T334;
T334:;
	if(!(number_compare((V102),small_fixnum(0))==0)){
	goto T339;}
	{object V108 = list(4,VV[3],(V99),VV[33],list(3,VV[25],VV[34],list(3,VV[29],VV[35],list(2,VV[11],(V98)))));
	VMR4(V108)}
goto T339;
T339:;
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
goto T332;
T332:;
	{object V116;
	base[0]= VV[47];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V116= vs_base[0];
	if(((V116))==Cnil){
	goto T346;}
	{object V117 = (V116);
	VMR4(V117)}
goto T346;
T346:;
	{object V118 = Cnil;
	VMR4(V118)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-SLOT-DESCRIPTION	*/

static object LI5(V121,V122)

register object V121;object V122;
{	 VMB5 VMS5 VMV5
goto TTL;
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
	goto T350;}
	V123= (V121);
	goto T348;
goto T350;
T350:;
	if(!(endp(cdr((V121))))){
	goto T354;}
	V123= car((V121));
	goto T348;
goto T354;
T354:;
	V123= car((V121));
	V124= cadr((V121));
	{register object V127;
	register object V128;
	register object V129;
	V127= cddr((V121));
	V128= Cnil;
	V129= Cnil;
goto T363;
T363:;
	if(!(endp((V127)))){
	goto T364;}
	goto T348;
goto T364;
T364:;
	V128= car((V127));
	if(!(endp(cdr((V127))))){
	goto T370;}
	base[0]= VV[48];
	base[1]= (V127);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
goto T370;
T370:;
	V129= cadr((V127));
	{object V130= (V128);
	if((V130!= VV[77]))goto T378;
	V125= (V129);
	goto T377;
goto T378;
T378:;
	if((V130!= VV[116]))goto T380;
	V126= (V129);
	goto T377;
goto T380;
T380:;
	base[0]= VV[49];
	base[1]= (V127);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}
goto T377;
T377:;
	V127= cddr((V127));
	goto T363;}
goto T348;
T348:;
	{object V131 = list(5,(V123),(V124),(V125),(V126),(V122));
	VMR5(V131)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OVERWRITE-SLOT-DESCRIPTIONS	*/

static object LI6(V134,V135)

object V134;register object V135;
{	 VMB6 VMS6 VMV6
goto TTL;
TTL:;
	if(((V135))!=Cnil){
	goto T388;}
	{object V136 = Cnil;
	VMR6(V136)}
goto T388;
T388:;
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
	goto T396;}
	if((cadddr(car((V137))))!=Cnil){
	goto T398;}
	if((cadddr(car((V135))))==Cnil){
	goto T398;}
	base[0]= VV[50];
	base[1]= (V137);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
goto T398;
T398:;
	{object V138;
	object V139;
	V138= car((V137));
	V139= (*(LnkLI117))(caddr(car((V137))));
	if(type_of(cddr((V138)))!=t_cons)FEwrong_type_argument(Scons,cddr((V138)));
	(cddr((V138)))->c.c_car = (V139);
	(void)(cddr((V138)));}{object V141;
	V141= caddr(car((V137)));
	if(V141==Cnil)goto T413;
	V140= V141;
	goto T412;
goto T413;
T413:;}
	V140= Ct;
goto T412;
T412:;
	V142= (*(LnkLI118))(V140);{object V144;
	V144= caddr(car((V135)));
	if(V144==Cnil)goto T416;
	V143= V144;
	goto T415;
goto T416;
T416:;}
	V143= Ct;
goto T415;
T415:;
	V145= (*(LnkLI118))(V143);
	if(equal(/* INLINE-ARGS */V142,/* INLINE-ARGS */V145)){
	goto T409;}
	base[0]= VV[51];
	base[1]= car((V137));
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
goto T409;
T409:;
	V146= list(5,caar((V137)),cadar((V137)),caddar((V137)),cadddr(car((V137))),car(cddddr(car((V135)))));
	V147= (*(LnkLI119))((V134),cdr((V135)));
	{object V148 = make_cons(/* INLINE-ARGS */V146,/* INLINE-ARGS */V147);
	VMR6(V148)}
goto T396;
T396:;
	V149= car((V135));
	V150= (*(LnkLI119))((V134),cdr((V135)));
	{object V151 = make_cons(/* INLINE-ARGS */V149,/* INLINE-ARGS */V150);
	VMR6(V151)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-T-TYPE	*/

static object LI7(V155,V156,V157)

object V155;object V156;object V157;
{	 VMB7 VMS7 VMV7
goto TTL;
TTL:;
	{object V158;
	V158= Cnil;
	{register object V159;
	V159= (VFUN_NARGS=5,(*(LnkLI120))((V155),VV[52],VV[53],VV[54],Ct));
	if(((V156))==Cnil){
	goto T422;}
	{object V160;
	object V161;
	V160= get((V156),VV[55],Cnil);
	V161= Cnil;
	if((V160)!=Cnil){
	goto T426;}
	base[0]= VV[56];
	base[1]= (V156);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
goto T426;
T426:;
	V161= structure_ref((V160),VV[55],2);
	{object V162;
	register object V163;
	V164 = make_fixnum((long)length((V161)));
	V162= (number_compare((V155),V164)<=0?((V155)):V164);
	V163= small_fixnum(0);
goto T434;
T434:;
	if(!(number_compare((V163),(V162))>=0)){
	goto T435;}
	goto T422;
goto T435;
T435:;
	V165= aref1((V161),fixint((V163)));
	(void)(aset1((V159),fixint((V163)),/* INLINE-ARGS */V165));
	V163= one_plus((V163));
	goto T434;}}
goto T422;
T422:;
	{register object V166;
	register object V167;
	V166= (V157);
	V167= car((V166));
goto T447;
T447:;
	if(!(endp((V166)))){
	goto T448;}
	goto T443;
goto T448;
T448:;
	V158= car(cddddr((V167)));
	{register object V168;
	V168= caddr((V167));
	base[1]= (V168);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk121)();
	vs_top=sup;
	V169= vs_base[0];
	if(!(number_compare(V169,symbol_value(VV[57]))<=0)){
	goto T454;}
	base[1]= (V168);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk122)();
	vs_top=sup;
	V170= vs_base[0];
	(void)(aset1((V159),fixint((V158)),V170));}
goto T454;
T454:;
	V166= cdr((V166));
	V167= car((V166));
	goto T447;}
goto T443;
T443:;
	V171 = make_fixnum((long)length(symbol_value(VV[58])));
	if(!(number_compare((V155),V171)<0)){
	goto T468;}
	{register object V173;
	V173= small_fixnum(0);
goto T473;
T473:;
	if(!(number_compare((V173),V155)>=0)){
	goto T474;}
	goto T470;
goto T474;
T474:;
	{long V174= fix(aref1((V159),fixint((V173))));
	if((/* INLINE-ARGS */V174)==(0)){
	goto T478;}}
	{object V175 = (V159);
	VMR7(V175)}
goto T478;
T478:;
	V173= one_plus((V173));
	goto T473;}
goto T470;
T470:;
	{object V176 = symbol_value(VV[58]);
	VMR7(V176)}
goto T468;
T468:;
	{object V177 = (V159);
	VMR7(V177)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ROUND-UP	*/

static object LI8(V180,V181)

long V180;long V181;
{	 VMB8 VMS8 VMV8
goto TTL;
TTL:;
	base[0]= make_fixnum(V180);
	base[1]= make_fixnum(V181);
	vs_top=(vs_base=base+0)+2;
	Lceiling();
	vs_top=sup;
	V180= fix(vs_base[0]);
	{long V182 = (long)(V180)*(V181);
	VMR8((object)V182)}
	base[0]=base[0];
}
/*	local entry for function GET-SLOT-POS	*/

static object LI9(V186,V187,V188)

object V186;object V187;object V188;
{	 VMB9 VMS9 VMV9
goto TTL;
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
goto T496;
T496:;
	if(!(endp((V192)))){
	goto T497;}
	goto T492;
goto T497;
T497:;
	if(((V193))==Cnil){
	goto T501;}
	if((car((V193)))==Cnil){
	goto T501;}
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
	goto T510;}
	if(!(type_of((V196))==t_symbol)){
	goto T516;}
	base[1]= (V196);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T516;}
	base[1]= (V196);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_value();
	vs_top=sup;
	V196= vs_base[0];
goto T516;
T516:;
	base[1]= (V196);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T524;}
	goto T510;
goto T524;
T524:;
	{object V198;
	V198= (*(LnkLI124))((V196),(V189));
	if(type_of(cdr(V193))!=t_cons)FEwrong_type_argument(Scons,cdr(V193));
	(cdr(V193))->c.c_car = (V198);
	(void)(cdr(V193));}}
goto T510;
T510:;
	{register object x= (V189),V199= VV[60];
	while(!endp(V199))
	if(x==(V199->c.c_car)){
	goto T530;
	}else V199=V199->c.c_cdr;
	goto T501;}
goto T530;
T530:;
	V190= Ct;
goto T501;
T501:;
	V192= cdr((V192));
	V193= car((V192));
	goto T496;}
goto T492;
T492:;
	{object V200;
	if(((V190))==Cnil){
	goto T538;}
	V200= Cnil;
	goto T537;
goto T538;
T538:;
	V201 = make_fixnum((long)length(symbol_value(VV[59])));
	if(number_compare((V186),V201)<0){
	goto T540;}
	V200= Cnil;
	goto T537;
goto T540;
T540:;{object V202;
	V202= symbol_value(VV[59]);
	base[0]= Ct;
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk125)();
	vs_top=sup;
	V203= vs_base[0];
	V200= list(3,V202,number_times((V186),V203),Cnil);}
goto T537;
T537:;
	if(((V200))==Cnil){
	goto T545;}
	{object V204 = (V200);
	VMR9(V204)}
goto T545;
T545:;
	{object V205;
	register long V206;
	long V207;
	long V208;
	object V209;
	long V210;
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
goto T556;
T556:;
	if(!(endp((V211)))){
	goto T557;}
	goto T552;
goto T557;
T557:;
	V209= caddr((V212));
	base[1]= (V209);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk121)();
	vs_top=sup;
	V208= fix(vs_base[0]);
	V213 = make_fixnum(V208);
	if(number_compare(V213,symbol_value(VV[57]))<=0){
	goto T566;}
	V209= Ct;
	if(type_of(cddr(V212))!=t_cons)FEwrong_type_argument(Scons,cddr(V212));
	(cddr(V212))->c.c_car = Ct;
	(void)(cddr(V212));
	V208= fix(symbol_value(VV[57]));
	V212= nconc((V212),VV[62]);
goto T566;
T566:;
	V210= (long)(*(LnkLI126))(V206,V208);
	if(!((V206)==(V210))){
	goto T579;}
	goto T578;
goto T579;
T579:;
	V191= Ct;
goto T578;
T578:;
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
	V207= (long)(V207)+(1);
	V211= cdr((V211));
	V212= car((V211));
	goto T556;}
goto T552;
T552:;
	base[0]= Ct;
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk125)();
	vs_top=sup;
	V219= vs_base[0];
	V220 = make_fixnum((long)(*(LnkLI126))(V206,fix(V219)));
	{object V221 = list(3,(V205),V220,(V191));
	VMR9(V221)}}}}
	base[0]=base[0];
	return Cnil;
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
	Vcs[0]=Vcs[0];
	va_start(ap);
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
	if (narg <= 0) goto T598;
	else {
	V245= va_arg(ap,object);}
	if (--narg <= 0) goto T599;
	else {
	V246= va_arg(ap,object);}
	--narg; goto T600;
goto T598;
T598:;
	V245= Cnil;
goto T599;
T599:;
	V246= Cnil;
goto T600;
T600:;
	{object V247;
	object V248;
	V247= Cnil;
	V248= Cnil;
	if(type_of((V235))==t_cons){
	goto T606;}
	goto T605;
goto T606;
T606:;
	if((car((V235)))==(VV[19])){
	goto T608;}
	goto T605;
goto T608;
T608:;
	V235= VV[19];
goto T605;
T605:;
	V248= make_fixnum((long)length((V237)));
	{register object V249;
	register object V250;
	V249= (V237);
	V250= car((V249));
goto T617;
T617:;
	if(!(endp((V249)))){
	goto T618;}
	goto T613;
goto T618;
T618:;
	if((V250)==Cnil){
	goto T622;}
	if((car((V250)))!=Cnil){
	goto T623;}
	goto T622;
goto T623;
T623:;
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
goto T622;
T622:;
	V249= cdr((V249));
	V250= car((V249));
	goto T617;}
goto T613;
T613:;
	if(((V238))==Cnil){
	goto T637;}
	if(((V246))!=Cnil){
	goto T637;}
	base[0]= (V238);
	{object V252= (V235);
	if((V252!= Cnil))goto T644;
	base[1]= symbol_function(VV[128]);
	goto T643;
goto T644;
T644:;
	if((V252!= VV[20]))goto T645;
	base[1]= symbol_function(VV[129]);
	goto T643;
goto T645;
T645:;
	if((V252!= VV[19]))goto T646;
	base[1]= symbol_function(VV[130]);
	goto T643;
goto T646;
T646:;
	FEerror("The ECASE key value ~s is illegal.",1,V252);
	base[1]= symbol_function(VV[128]);}
goto T643;
T643:;
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
goto T637;
T637:;
	if(((V235))!=Cnil){
	goto T649;}
	if(!(((Vcs[0]->c.c_car))==(VV[55]))){
	goto T649;}
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
	goto T647;
goto T649;
T649:;
	{object V255;
	object V256;
	object V257;
	object V258;
	if((V240)==Cnil){
	V258= Cnil;
	goto T661;}
	V258= get((V240),VV[55],Cnil);
goto T661;
T661:;
	V255= Cnil;
	V256= small_fixnum(0);
	V257= Cnil;
	if(((V258))==Cnil){
	goto T662;}
	if((structure_ref((V258),VV[55],11))==Cnil){
	goto T665;}
	if((structure_ref((V258),VV[55],3))==Cnil){
	goto T666;}
	{object V259;
	V259= get((Vcs[0]->c.c_car),VV[55],Cnil);
	if((V259)==Cnil){
	goto T671;}
	V260= structure_ref((V259),VV[55],4);
	if((/* INLINE-ARGS */V260)==((V258))){
	goto T665;}}
goto T671;
T671:;
goto T666;
T666:;
	(void)((VFUN_NARGS=2,(*(LnkLI133))(VV[64],(V240))));
goto T665;
T665:;
	{object V262;
	base[1]= (Vcs[0]->c.c_car);
	base[2]= structure_ref(V258,VV[55],3);
	vs_top=(vs_base=base+1)+2;
	Ladjoin();
	vs_top=sup;
	V262= vs_base[0];
	(void)(structure_set(V258,VV[55],3,(V262)));}
goto T662;
T662:;
	if(((V235))!=Cnil){
	goto T676;}
	V255= (*(LnkLI134))((V248),(V240),(V237));
	V256= cadr((V255));
	V257= caddr((V255));
	V255= car((V255));
goto T676;
T676:;
	if(((V235))==Cnil){
	goto T688;}
	V263= Cnil;
	goto T687;
goto T688;
T688:;
	V263= (*(LnkLI131))((V248),(V240),(V237));
goto T687;
T687:;
	V247= (VFUN_NARGS=32,(*(LnkLI135))(VV[65],(Vcs[0]->c.c_car),VV[66],(V248),VV[67],V263,VV[68],(V255),VV[69],(V256),VV[70],(V257),VV[71],(V239),VV[72],(V258),VV[73],(V241),VV[74],(V237),VV[75],(V242),VV[76],(V243),VV[77],(V235),VV[78],(V236),VV[79],(V245),VV[80],(V234)));}
goto T647;
T647:;
	{object V264;
	V264= get((Vcs[0]->c.c_car),VV[55],Cnil);
	if(!(((Vcs[0]->c.c_car))==(VV[55]))){
	goto T694;}
	if(((V264))==Cnil){
	goto T696;}
	(void)((VFUN_NARGS=1,(*(LnkLI133))(VV[81])));
goto T696;
T696:;
	if((V264)!=Cnil){
	goto T692;}
	(void)(sputprop((Vcs[0]->c.c_car),VV[55],(V247)));
	goto T692;
goto T694;
T694:;
	if(((V264))==Cnil){
	goto T700;}
	(void)((*(LnkLI136))((V264),(V247),(Vcs[0]->c.c_car)));
	goto T692;
goto T700;
T700:;
	(void)(sputprop((Vcs[0]->c.c_car),VV[55],(V247)));
goto T692;
T692:;
	if(((V245))==Cnil){
	goto T702;}
	(void)(sputprop((Vcs[0]->c.c_car),VV[82],(V245)));
goto T702;
T702:;
	if(((V235))!=Cnil){
	goto T690;}
	if(((V244))==Cnil){
	goto T690;}
	base[0]= (V244);
	base[1]= VV[3];
	base[2]= VV[83];
	base[3]= Ct;
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk111)();
	vs_top=sup;
	if((V246)!=Cnil){
	goto T714;}
	base[0]= (V244);
	base[1]= 
	make_cclosure_new(LC20,Cnil,Vcs[0],Cdata);
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
goto T714;
T714:;
	(void)(sputprop((V244),VV[84],VV[85]));
	(void)(sputprop((V244),VV[86],(Vcs[0]->c.c_car)));}
goto T690;
T690:;
	{object V265 = Cnil;
	VMR10(V265)}}
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
	goto T718;}
	V268= cdr(base[2]);
	base[2]= car(base[2]);
goto T718;
T718:;
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
goto T745;
T745:;
	if(!(endp((V285)))){
	goto T746;}
	goto T743;
goto T746;
T746:;
	if(!(type_of(car((V285)))==t_cons)){
	goto T752;}
	if(endp(cdar((V285)))){
	goto T752;}
	V286= caar((V285));
	V287= cadar((V285));
	{object V288= (V286);
	if((V288!= VV[80]))goto T760;
	if(((V287))!=Cnil){
	goto T762;}
	V269= VV[91];
	goto T750;
goto T762;
T762:;
	V269= (V287);
	goto T750;
goto T760;
T760:;
	if((V288!= VV[137]))goto T766;
	if(((V287))!=Cnil){
	goto T768;}
	V272= Ct;
	goto T750;
goto T768;
T768:;
	if(!(endp(cddar((V285))))){
	goto T772;}
	V270= make_cons((V287),(V270));
	goto T750;
goto T772;
T772:;
	V270= make_cons(cdar((V285)),(V270));
	goto T750;
goto T766;
T766:;
	if((V288!= VV[138]))goto T776;
	V273= (V287);
	goto T750;
goto T776;
T776:;
	if((V288!= VV[54]))goto T778;
	V284= (V287);
	goto T750;
goto T778;
T778:;
	if((V288!= VV[139]))goto T780;
	V274= (V287);
	V275= Ct;
	goto T750;
goto T780;
T780:;
	if((V288!= VV[140]))goto T784;
	V276= cdar((V285));
	if((get((V287),VV[55],Cnil))!=Cnil){
	goto T750;}
	base[4]= VV[92];
	base[5]= (V287);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
	goto T750;
goto T784;
T784:;
	if((V288!= VV[73]))goto T791;
	if(type_of((V287))==t_cons){
	goto T793;}
	goto T792;
goto T793;
T793:;
	if((car((V287)))==(VV[93])){
	goto T795;}
	goto T792;
goto T795;
T795:;
	V287= cadr((V287));
goto T792;
T792:;
	V277= (V287);
	goto T750;
goto T791;
T791:;
	if((V288!= VV[77]))goto T799;
	V278= (V287);
	goto T750;
goto T799;
T799:;
	if((V288!= VV[141]))goto T801;
	V280= (V287);
	goto T750;
goto T801;
T801:;
	base[4]= VV[94];
	base[5]= (V286);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
	goto T750;}
goto T752;
T752:;
	if(!(type_of(car((V285)))==t_cons)){
	goto T807;}
	V286= caar((V285));
	goto T805;
goto T807;
T807:;
	V286= car((V285));
goto T805;
T805:;
	{object V289= (V286);
	if((V289!= VV[137]))goto T811;
	V270= make_cons((V271),(V270));
	goto T750;
goto T811;
T811:;
	if((V289!= VV[80])
	&& (V289!= VV[138])
	&& (V289!= VV[139])
	&& (V289!= VV[73]))goto T813;
	goto T750;
goto T813;
T813:;
	if((V289!= VV[78]))goto T814;
	V279= Ct;
	goto T750;
goto T814;
T814:;
	base[4]= VV[95];
	base[5]= (V286);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;}
goto T750;
T750:;
	V285= cdr((V285));
	goto T745;}
goto T743;
T743:;
	base[4]= coerce_to_string((V269));
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V269= vs_base[0];
	if((V276)==Cnil){
	goto T824;}
	if(((V277))==Cnil){
	goto T825;}
	goto T824;
goto T825;
T825:;
	V290= get(car((V276)),VV[55],Cnil);
	V277= structure_ref(V290,VV[55],6);
goto T824;
T824:;
	if(endp((V267))){
	goto T829;}
	if(!(type_of(car((V267)))==t_string)){
	goto T829;}
	V283= car((V267));
	V267= cdr((V267));
goto T829;
T829:;
	if(((V276))==Cnil){
	goto T837;}
	V291= get(car((V276)),VV[55],Cnil);
	V292= structure_ref(V291,VV[55],16);
	if(equal((V278),/* INLINE-ARGS */V292)){
	goto T837;}
	base[4]= VV[96];
	base[5]= car((V276));
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
goto T837;
T837:;
	if(((V276))!=Cnil){
	goto T847;}
	V281= small_fixnum(0);
	goto T845;
goto T847;
T847:;
	V293= get(car((V276)),VV[55],Cnil);
	V281= structure_ref(V293,VV[55],14);
goto T845;
T845:;
	if(((V278))==Cnil){
	goto T852;}
	if(((V280))==Cnil){
	goto T852;}
	V281= number_plus((V281),(V280));
goto T852;
T852:;
	if(((V278))==Cnil){
	goto T858;}
	if(((V279))==Cnil){
	goto T858;}
	V282= (V281);
	V281= one_plus((V281));
goto T858;
T858:;
	{register object V294;
	register object V295;
	V294= (V267);
	V295= Cnil;
goto T868;
T868:;
	if(!(endp((V294)))){
	goto T869;}
	V267= nreverse((V295));
	goto T866;
goto T869;
T869:;
	V296= (*(LnkLI142))(car((V294)),(V281));
	V295= make_cons(/* INLINE-ARGS */V296,(V295));
	V281= one_plus((V281));
	V294= cdr((V294));
	goto T868;}
goto T866;
T866:;
	if(((V278))==Cnil){
	goto T881;}
	if(((V279))==Cnil){
	goto T881;}
	V297= list(2,Cnil,base[2]);
	V267= make_cons(/* INLINE-ARGS */V297,(V267));
goto T881;
T881:;
	if(((V278))==Cnil){
	goto T887;}
	if(((V280))==Cnil){
	goto T887;}
	base[4]= (V280);
	vs_top=(vs_base=base+4)+1;
	Lmake_list();
	vs_top=sup;
	V298= vs_base[0];
	V267= append(V298,(V267));
goto T887;
T887:;
	{object V299;
	V299= (((V276))==Cnil?Ct:Cnil);
	if(((V299))==Cnil){
	goto T898;}
	goto T895;
goto T898;
T898:;
	if(!(endp(cdr((V276))))){
	goto T901;}
	V300= get(car((V276)),VV[55],Cnil);
	V301= structure_ref(V300,VV[55],7);
	V267= append(/* INLINE-ARGS */V301,(V267));
	goto T895;
goto T901;
T901:;
	{object V303;
	object V304= cdr((V276));
	if(endp(V304)){
	V302= Cnil;
	goto T906;}
	base[4]=V303=MMcons(Cnil,Cnil);
goto T907;
T907:;
	(V303->c.c_car)= (*(LnkLI142))((V304->c.c_car),small_fixnum(0));
	if(endp(V304=MMcdr(V304))){
	V302= base[4];
	goto T906;}
	V303=MMcdr(V303)=MMcons(Cnil,Cnil);
	goto T907;}
goto T906;
T906:;
	V306= get(car((V276)),VV[55],Cnil);
	V307= structure_ref(V306,VV[55],7);
	V308= (*(LnkLI119))(V302,/* INLINE-ARGS */V307);
	V267= append(/* INLINE-ARGS */V308,(V267));}
goto T895;
T895:;
	if(((V272))==Cnil){
	goto T912;}
	if(((V270))==Cnil){
	goto T910;}
	base[4]= VV[97];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T910;
goto T912;
T912:;
	if(((V270))!=Cnil){
	goto T910;}
	V270= make_cons((V271),Cnil);
goto T910;
T910:;{object V309;
	{object V312;
	object V313= (V270);
	if(endp(V313)){
	V311= Cnil;
	goto T923;}
	base[4]=V312=MMcons(Cnil,Cnil);
goto T924;
T924:;
	base[5]= (V313->c.c_car);
	vs_top=(vs_base=base+5)+1;
	Lsymbolp();
	vs_top=sup;
	(V312->c.c_car)= vs_base[0];
	if(endp(V313=MMcdr(V313))){
	V311= base[4];
	goto T923;}
	V312=MMcdr(V312)=MMcons(Cnil,Cnil);
	goto T924;}
goto T923;
T923:;
	{register object x= Ct,V310= V311;
	while(!endp(V310))
	if(eql(x,V310->c.c_car)){
	V309= V310;
	goto T922;
	}else V310=V310->c.c_cdr;
	V309= Cnil;}
goto T922;
T922:;
	if(V309==Cnil)goto T921;
	goto T920;
goto T921;
T921:;}
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
goto T920;
T920:;
	if(((V278))==Cnil){
	goto T932;}
	if(((V279))!=Cnil){
	goto T932;}
	if(((V275))==Cnil){
	goto T937;}
	base[4]= VV[99];
	base[5]= (V274);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
goto T937;
T937:;
	V274= Cnil;
goto T932;
T932:;
	if(((V276))==Cnil){
	goto T943;}
	V276= car((V276));
goto T943;
T943:;
	if(((V277))==Cnil){
	goto T947;}
	if(((V278))==Cnil){
	goto T947;}
	base[4]= VV[100];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
goto T947;
T947:;
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
	goto T969;}
	base[5]=V317=MMcons(Cnil,Cnil);
goto T970;
T970:;
	(V317->c.c_car)= (*(LnkLI143))(base[2],(V318->c.c_car),(V278),(V279),(V267));
	if(endp(V318=MMcdr(V318))){
	base[4]= base[5];
	goto T969;}
	V317=MMcdr(V317)=MMcons(Cnil,Cnil);
	goto T970;}
goto T969;
T969:;
	if(((V278))==Cnil){
	goto T974;}
	if(((V274))==Cnil){
	goto T974;}
	V320= (*(LnkLI144))(base[2],(V274),(V278),(V279),(V282));
	base[5]= make_cons(/* INLINE-ARGS */V320,Cnil);
	goto T972;
goto T974;
T974:;
	base[5]= Cnil;
goto T972;
T972:;
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
	Vcs[0]=Vcs[0];
	va_start(ap);
	narg= narg - 0;
	{
	parse_key_new(narg,Vcs +0,(struct key *)&LI12key,ap);
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
	VMR12(V340)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function CHECK-S-DATA	*/

static object LI13(V344,V345,V346)

register object V344;register object V345;object V346;
{	 VMB13 VMS13 VMV13
goto TTL;
TTL:;
	if((structure_ref((V344),VV[55],3))==Cnil){
	goto T998;}
	V347= structure_ref((V344),VV[55],3);
	(void)(structure_set((V345),VV[55],3,/* INLINE-ARGS */V347));
goto T998;
T998:;
	if((structure_ref((V344),VV[55],11))==Cnil){
	goto T1001;}
	(void)(structure_set((V345),VV[55],11,Ct));
goto T1001;
T1001:;
	if(equalp((V345),(V344))){
	goto T1005;}
	(void)((VFUN_NARGS=2,(*(LnkLI133))(VV[103],(V346))));
	{object V348 = sputprop((V346),VV[55],(V345));
	VMR13(V348)}
goto T1005;
T1005:;
	{object V349 = Cnil;
	VMR13(V349)}
	return Cnil;
}
/*	local entry for function FREEZE-DEFSTRUCT	*/

static object LI14(V351)

object V351;
{	 VMB14 VMS14 VMV14
goto TTL;
TTL:;
	{object V352;
	if(type_of((V351))==t_symbol){
	goto T1009;}
	V352= Cnil;
	goto T1008;
goto T1009;
T1009:;
	V352= get((V351),VV[55],Cnil);
goto T1008;
T1008:;
	if(((V352))==Cnil){
	goto T1012;}
	{object V353 = structure_set((V352),VV[55],11,Ct);
	VMR14(V353)}
goto T1012;
T1012:;
	{object V354 = Cnil;
	VMR14(V354)}}
	return Cnil;
}
/*	function definition for SHARP-S-READER	*/

static void L15()
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
goto TTL;
TTL:;
	if(((V357))==Cnil){
	goto T1014;}
	if((symbol_value(VV[104]))!=Cnil){
	goto T1014;}
	base[3]= VV[105];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
goto T1014;
T1014:;
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
	goto T1026;}
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;
goto T1026;
T1026:;
	V358= (V360);}{object V361;
	V361= get(car((V358)),VV[55],Cnil);
	if(V361==Cnil)goto T1030;
	V359= V361;
	goto T1029;
goto T1030;
T1030:;}
	base[5]= VV[106];
	base[6]= car((V358));
	vs_top=(vs_base=base+5)+2;
	Lerror();
	vs_top=sup;
	V359= vs_base[0];
goto T1029;
T1029:;
	{register object V362;
	V362= cdr((V358));
goto T1036;
T1036:;
	if(!(endp((V362)))){
	goto T1037;}
	{register object V363;
	V363= structure_ref((V359),VV[55],13);
goto T1042;
T1042:;
	if(!(endp((V363)))){
	goto T1043;}
	base[5]= VV[107];
	base[6]= car((V358));
	vs_top=(vs_base=base+5)+2;
	Lerror();
	return;
goto T1043;
T1043:;
	if(!(type_of(car((V363)))==t_symbol)){
	goto T1049;}
	base[5]= car((V363));
	{object V364;
	V364= cdr((V358));
	 vs_top=base+6;
	 while(!endp(V364))
	 {vs_push(car(V364));V364=cdr(V364);}
	vs_base=base+6;}
	super_funcall_no_event(base[5]);
	return;
goto T1049;
T1049:;
	V363= cdr((V363));
	goto T1042;}
goto T1037;
T1037:;
	base[5]= coerce_to_string(car((V362)));
	base[6]= VV[108];
	vs_top=(vs_base=base+5)+2;
	Lintern();
	vs_top=sup;
	V365= vs_base[0];
	if(type_of((V362))!=t_cons)FEwrong_type_argument(Scons,(V362));
	((V362))->c.c_car = V365;
	V362= cddr((V362));
	goto T1036;}}
	}
}
/*	local function CLOSURE	*/

static void LC20(base0)
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

static void LC19(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{object V367;
	check_arg(1);
	V367=(base[0]);
	vs_top=sup;
	if(!(type_of((V367))==t_cons)){
	goto T1068;}
	base[1]= car((V367));
	vs_top=(vs_base=base+1)+1;
	return;
goto T1068;
T1068:;
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

static void LC17(base0)
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

static void LC16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{object V370;
	check_arg(1);
	V370=(base[0]);
	vs_top=sup;
	if(!(type_of((V370))==t_structure)){
	goto T1073;}
	goto T1072;
goto T1073;
T1073:;
	base[1]= VV[5];
	base[2]= (V370);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
goto T1072;
T1072:;
	base[1]= (V370);
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk149)();
	return;
	}
}
static void LnkT149(){ call_or_link(VV[149],(void **)&Lnk149);} /* STRUCTURE-REF1 */
static void LnkT148(){ call_or_link(VV[148],(void **)&Lnk148);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI144(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[144],(void **)&LnkLI144,5,ap);va_end(ap);return V1;} /* MAKE-PREDICATE */
static object  LnkTLI143(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[143],(void **)&LnkLI143,5,ap);va_end(ap);return V1;} /* MAKE-CONSTRUCTOR */
static object  LnkTLI142(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[142],(void **)&LnkLI142,2,ap);va_end(ap);return V1;} /* PARSE-SLOT-DESCRIPTION */
static object  LnkTLI136(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[136],(void **)&LnkLI136,3,ap);va_end(ap);return V1;} /* CHECK-S-DATA */
static object  LnkTLI135(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[135],(void **)&LnkLI135,ap);va_end(ap);return V1;} /* MAKE-S-DATA */
static object  LnkTLI134(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[134],(void **)&LnkLI134,3,ap);va_end(ap);return V1;} /* GET-SLOT-POS */
static object  LnkTLI133(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[133],(void **)&LnkLI133,ap);va_end(ap);return V1;} /* WARN */
static void LnkT132(){ call_or_link(VV[132],(void **)&Lnk132);} /* MAKE-S-DATA-STRUCTURE */
static object  LnkTLI131(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[131],(void **)&LnkLI131,3,ap);va_end(ap);return V1;} /* MAKE-T-TYPE */
static void LnkT127(){ call_or_link(VV[127],(void **)&Lnk127);} /* MAKE-ACCESS-FUNCTION */
static object  LnkTLI126(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[126],(void **)&LnkLI126,20738,ap);va_end(ap);return V1;} /* ROUND-UP */
static void LnkT125(){ call_or_link(VV[125],(void **)&Lnk125);} /* SIZE-OF */
static object  LnkTLI124(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[124],(void **)&LnkLI124,2,ap);va_end(ap);return V1;} /* COERCE */
static void LnkT123(){ call_or_link(VV[123],(void **)&Lnk123);} /* TYPEP */
static void LnkT122(){ call_or_link(VV[122],(void **)&Lnk122);} /* AET-TYPE */
static void LnkT121(){ call_or_link(VV[121],(void **)&Lnk121);} /* ALIGNMENT */
static object  LnkTLI120(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[120],(void **)&LnkLI120,ap);va_end(ap);return V1;} /* MAKE-ARRAY */
static object  LnkTLI119(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[119],(void **)&LnkLI119,2,ap);va_end(ap);return V1;} /* OVERWRITE-SLOT-DESCRIPTIONS */
static object  LnkTLI118(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[118],(void **)&LnkLI118,1,ap);va_end(ap);return V1;} /* NORMALIZE-TYPE */
static object  LnkTLI117(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[117],(void **)&LnkLI117,1,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static void LnkT115(){ call_or_link(VV[115],(void **)&Lnk115);} /* X */
static object  LnkTLI113(){return call_proc0(VV[113],(void **)&LnkLI113);} /* ILLEGAL-BOA */
static void LnkT112(){ call_or_link(VV[112],(void **)&Lnk112);} /* SUBTYPEP */
static void LnkT111(){ call_or_link(VV[111],(void **)&Lnk111);} /* RECORD-FN */
static object  LnkTLI110(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[110],(void **)&LnkLI110,ap);va_end(ap);return V1;} /* ADJUST-ARRAY */
static void LnkT109(){ call_or_link(VV[109],(void **)&Lnk109);} /* STRING-CONCATENATE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

