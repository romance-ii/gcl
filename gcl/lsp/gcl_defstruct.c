
#include "cmpinclude.h"
#include "gcl_defstruct.h"
void init_gcl_defstruct(){do_init(VV);}
/*	local entry for function MAKE-ACCESS-FUNCTION	*/

static object LI1(object V12,object V11,object V10,object V9,object V8,object V7,object V6,object V5,object V4,object V3,object V2,object V1,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{object V13;
	object V14;
	object V15;
	object V16;
	object V17;
	object V18;
	object V19;
	object V20;
	object V21;
	object V22;
	object V23;
	object V24;
	va_start(ap,first);
	if(narg <12) too_few_arguments();
	V13= V12;
	V14= V11;
	V15= V10;
	V16= V9;
	V17= V8;
	V18= V7;
	V19= V6;
	V20= V5;
	V21= V4;
	V22= V3;
	V23= V2;
	Vcs[11]=MMcons(V1,Cnil);
	narg = narg - 12;
	if (narg <= 0) goto T1;
	else {
	V24= first;}
	--narg; goto T2;
	goto T1;
T1:;
	V24= Cnil;
	goto T2;
T2:;
	{register object V25;
	register object V26;
	object V27;
	if(((V15))==Cnil){
	goto T6;}
	V25= (V20);
	goto T4;
	goto T6;
T6:;
	base[1]= coerce_to_string((V14));
	base[2]= coerce_to_string((V20));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk108)();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	Lintern();
	vs_top=sup;
	V25= vs_base[0];
	goto T4;
T4:;
	V26= Cnil;
	V27= Cnil;
	{object V28= (V16);
	if((V28!= Cnil))goto T12;
	V26= symbol_value(VV[0]);
	goto T11;
	goto T12;
T12:;
	if((V28!= VV[20]))goto T14;
	V26= symbol_value(VV[1]);
	goto T11;
	goto T14;
T14:;
	if((V28!= VV[19]))goto T16;
	V26= symbol_value(VV[2]);
	goto T11;
	goto T16;
T16:;
	FEerror("The ECASE key value ~s is illegal.",1,V28);
	goto T11;}
	goto T11;
T11:;
	V29 = make_fixnum((long)length((V26)));
	if(!(number_compare(V29,(Vcs[11]->c.c_car))>0)){
	goto T19;}
	goto T18;
	goto T19;
T19:;
	V30= number_plus((Vcs[11]->c.c_car),small_fixnum(10));
	(void)((VFUN_NARGS=2,(*(LnkLI109))((V26),/* INLINE-ARGS */V30)));
	goto T18;
T18:;
	if(((V27))!=Cnil){
	goto T21;}
	base[0]= (V25);
	base[1]= VV[3];
	base[2]= VV[4];
	base[3]= (V22);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk110)();
	vs_top=sup;
	if((V19)!=Cnil){
	goto T21;}{object V31;
	base[0]= (V25);
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T31;}
	V31= Cnil;
	goto T30;
	goto T31;
T31:;
	V32= aref1((V26),fixint((Vcs[11]->c.c_car)));
	base[0]= (V25);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V33= vs_base[0];
	V31= ((/* INLINE-ARGS */V32)==(V33)?Ct:Cnil);
	goto T30;
T30:;
	if(V31==Cnil)goto T29;
	goto T21;
	goto T29;
T29:;}
	base[0]= (V25);{object V34;
	V34= aref1((V26),fixint((Vcs[11]->c.c_car)));
	if(V34==Cnil)goto T38;
	base[1]= V34;
	goto T37;
	goto T38;
T38:;}
	if(!(((V26))==(symbol_value(VV[0])))){
	goto T42;}
	V35= 
	make_cclosure_new(LC16,Cnil,Vcs[11],Cdata);
	goto T40;
	goto T42;
T42:;
	if(!(((V26))==(symbol_value(VV[1])))){
	goto T45;}
	V35= 
	make_cclosure_new(LC17,Cnil,Vcs[11],Cdata);
	goto T40;
	goto T45;
T45:;
	if(!(((V26))==(symbol_value(VV[2])))){
	goto T48;}
	V35= 
	make_cclosure_new(LC18,Cnil,Vcs[11],Cdata);
	goto T40;
	goto T48;
T48:;
	V35= Cnil;
	goto T40;
T40:;
	base[1]= aset1((V26),fixint((Vcs[11]->c.c_car)),V35);
	goto T37;
T37:;
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	goto T21;
T21:;
	if(((V23))==Cnil){
	goto T52;}
	(void)(remprop((V25),VV[6]));
	(void)(sputprop((V25),VV[7],Ct));
	goto T50;
	goto T52;
T52:;
	(void)(remprop((V25),VV[8]));
	(void)(remprop((V25),VV[9]));
	(void)(remprop((V25),VV[10]));
	{object V36;
	V36= get((V25),VV[6],Cnil);
	if(!(type_of((V36))==t_cons)){
	goto T60;}
	if(((V18))==Cnil){
	goto T60;}
	base[0]= (V18);
	base[1]= car((V36));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk111)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T60;}
	if(!(eql(cdr((V36)),(Vcs[11]->c.c_car)))){
	goto T60;}
	V27= Ct;
	goto T50;
	goto T60;
T60:;
	if(((V16))==Cnil){
	goto T73;}
	V37= (V16);
	goto T71;
	goto T73;
T73:;
	V37= (V13);
	goto T71;
T71:;
	V38= make_cons(V37,(Vcs[11]->c.c_car));
	(void)(sputprop((V25),VV[6],/* INLINE-ARGS */V38));}
	goto T50;
T50:;
	{object V39 = Cnil;
	VMR1(V39)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function MAKE-CONSTRUCTOR	*/

static object LI2(V45,V46,V47,V48,V49)

object V45;object V46;object V47;object V48;object V49;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{object V50;
	register object V51;
	{object V52;
	object V53= (V49);
	if(endp(V53)){
	V50= Cnil;
	goto T75;}
	base[0]=V52=MMcons(Cnil,Cnil);
	goto T76;
T76:;
	if(((V53->c.c_car))!=Cnil){
	goto T79;}
	(V52->c.c_car)= Cnil;
	goto T77;
	goto T79;
T79:;
	if((car((V53->c.c_car)))!=Cnil){
	goto T82;}
	(V52->c.c_car)= list(2,VV[11],cadr((V53->c.c_car)));
	goto T77;
	goto T82;
T82:;
	(V52->c.c_car)= car((V53->c.c_car));
	goto T77;
T77:;
	V53=MMcdr(V53);
	if(endp(V53)){
	V50= base[0];
	goto T75;}
	V52=MMcdr(V52)=MMcons(Cnil,Cnil);
	goto T76;}
	goto T75;
T75:;
	{object V55;
	object V56= (V49);
	if(endp(V56)){
	V51= Cnil;
	goto T84;}
	base[0]=V55=MMcons(Cnil,Cnil);
	goto T85;
T85:;
	if(((V56->c.c_car))!=Cnil){
	goto T88;}
	(V55->c.c_cdr)= Cnil;
	goto T86;
	goto T88;
T88:;
	if((car((V56->c.c_car)))!=Cnil){
	goto T91;}
	(V55->c.c_cdr)= Cnil;
	goto T86;
	goto T91;
T91:;
	if((cadr((V56->c.c_car)))!=Cnil){
	goto T94;}
	(V55->c.c_cdr)= make_cons(car((V56->c.c_car)),Cnil);
	goto T86;
	goto T94;
T94:;
	V58= list(2,car((V56->c.c_car)),cadr((V56->c.c_car)));
	(V55->c.c_cdr)= make_cons(/* INLINE-ARGS */V58,Cnil);
	goto T86;
T86:;
	{object cdr_V55=MMcdr(V55);while(!endp(cdr_V55)) {cdr_V55=MMcdr(cdr_V55);V55=MMcdr(V55);}}
	V56=MMcdr(V56);
	if(endp(V56)){
	base[0]=base[0]->c.c_cdr;
	V51= base[0];
	goto T84;}
	goto T85;}
	goto T84;
T84:;
	if(!(type_of((V46))==t_cons)){
	goto T98;}
	{register object V59;
	register object V60;
	register object V61;
	V59= cadr((V46));
	V60= Cnil;
	V61= Cnil;
	goto T103;
T103:;
	if(!(endp_prop((V59)))){
	goto T104;}
	base[0]= make_cons(VV[12],(V60));
	{object V62;
	object V63= (V51);
	if(endp(V63)){
	base[1]= Cnil;
	goto T109;}
	base[2]=V62=MMcons(Cnil,Cnil);
	goto T110;
T110:;
	if(!(type_of((V63->c.c_car))!=t_cons)){
	goto T117;}
	V66= (V63->c.c_car);
	goto T115;
	goto T117;
T117:;
	V66= car((V63->c.c_car));
	goto T115;
T115:;
	{register object x= V66,V65= (V61);
	while(!endp(V65))
	if(eql(x,V65->c.c_car)){
	goto T114;
	}else V65=V65->c.c_cdr;
	goto T113;}
	goto T114;
T114:;
	(V62->c.c_cdr)= Cnil;
	goto T111;
	goto T113;
T113:;
	(V62->c.c_cdr)= make_cons((V63->c.c_car),Cnil);
	goto T111;
T111:;
	{object cdr_V62=MMcdr(V62);while(!endp(cdr_V62)) {cdr_V62=MMcdr(cdr_V62);V62=MMcdr(V62);}}
	V63=MMcdr(V63);
	if(endp(V63)){
	base[2]=base[2]->c.c_cdr;
	base[1]= base[2];
	goto T109;}
	goto T110;}
	goto T109;
T109:;
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	V51= vs_base[0];
	goto T100;
	goto T104;
T104:;
	{register object x= car((V59)),V67= VV[13];
	while(!endp(V67))
	if(eql(x,V67->c.c_car)){
	goto T122;
	}else V67=V67->c.c_cdr;
	goto T120;}
	goto T122;
T122:;
	if(!((car((V59)))==(VV[14]))){
	goto T123;}
	goto T120;
	goto T123;
T123:;
	V59= make_cons(VV[14],(V59));
	goto T120;
T120:;
	if(!((car((V59)))==(VV[14]))){
	goto T128;}
	V60= make_cons(VV[14],(V60));
	{register object V69;
	object V70;
	object V71;
	V69= cdr((V59));
	V70= Cnil;
	V71= Cnil;
	goto T135;
T135:;
	if(!(endp_prop((V69)))){
	goto T136;}
	base[0]= make_cons(VV[12],(V60));
	{object V72;
	object V73= (V51);
	if(endp(V73)){
	base[1]= Cnil;
	goto T142;}
	base[2]=V72=MMcons(Cnil,Cnil);
	goto T143;
T143:;
	if(!(type_of((V73->c.c_car))!=t_cons)){
	goto T150;}
	V76= (V73->c.c_car);
	goto T148;
	goto T150;
T150:;
	V76= car((V73->c.c_car));
	goto T148;
T148:;
	{register object x= V76,V75= (V61);
	while(!endp(V75))
	if(eql(x,V75->c.c_car)){
	goto T147;
	}else V75=V75->c.c_cdr;
	goto T146;}
	goto T147;
T147:;
	(V72->c.c_cdr)= Cnil;
	goto T144;
	goto T146;
T146:;
	(V72->c.c_cdr)= make_cons((V73->c.c_car),Cnil);
	goto T144;
T144:;
	{object cdr_V72=MMcdr(V72);while(!endp(cdr_V72)) {cdr_V72=MMcdr(cdr_V72);V72=MMcdr(V72);}}
	V73=MMcdr(V73);
	if(endp(V73)){
	base[2]=base[2]->c.c_cdr;
	base[1]= base[2];
	goto T142;}
	goto T143;}
	goto T142;
T142:;
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	V51= vs_base[0];
	goto T132;
	goto T136;
T136:;
	{register object x= car((V69)),V77= VV[13];
	while(!endp(V77))
	if(eql(x,V77->c.c_car)){
	goto T155;
	}else V77=V77->c.c_cdr;
	goto T153;}
	goto T155;
T155:;
	if(!((car((V69)))==(VV[15]))){
	goto T156;}
	V60= make_cons(VV[15],(V60));
	V69= cdr((V69));
	if(endp_prop((V69))){
	goto T164;}
	if(type_of(car((V69)))==t_symbol){
	goto T163;}
	goto T164;
T164:;
	(void)((*(LnkLI112))());
	goto T163;
T163:;
	V61= make_cons(car((V69)),(V61));
	V60= make_cons(car((V69)),(V60));
	V69= cdr((V69));
	if(!(endp_prop((V69)))){
	goto T156;}
	base[0]= make_cons(VV[12],(V60));
	{object V78;
	object V79= (V51);
	if(endp(V79)){
	base[1]= Cnil;
	goto T179;}
	base[2]=V78=MMcons(Cnil,Cnil);
	goto T180;
T180:;
	if(!(type_of((V79->c.c_car))!=t_cons)){
	goto T187;}
	V82= (V79->c.c_car);
	goto T185;
	goto T187;
T187:;
	V82= car((V79->c.c_car));
	goto T185;
T185:;
	{register object x= V82,V81= (V61);
	while(!endp(V81))
	if(eql(x,V81->c.c_car)){
	goto T184;
	}else V81=V81->c.c_cdr;
	goto T183;}
	goto T184;
T184:;
	(V78->c.c_cdr)= Cnil;
	goto T181;
	goto T183;
T183:;
	(V78->c.c_cdr)= make_cons((V79->c.c_car),Cnil);
	goto T181;
T181:;
	{object cdr_V78=MMcdr(V78);while(!endp(cdr_V78)) {cdr_V78=MMcdr(cdr_V78);V78=MMcdr(V78);}}
	V79=MMcdr(V79);
	if(endp(V79)){
	base[2]=base[2]->c.c_cdr;
	base[1]= base[2];
	goto T179;}
	goto T180;}
	goto T179;
T179:;
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	V51= vs_base[0];
	goto T132;
	goto T156;
T156:;
	if((car((V69)))==(VV[12])){
	goto T189;}
	(void)((*(LnkLI112))());
	goto T189;
T189:;
	V60= make_cons(VV[12],(V60));
	{register object V83;
	V83= cdr((V69));
	goto T197;
T197:;
	if(!(endp_prop((V83)))){
	goto T198;}
	goto T194;
	goto T198;
T198:;
	V60= make_cons(car((V83)),(V60));
	if(!(type_of(car((V83)))!=t_cons)){
	goto T206;}
	if(!(type_of(car((V83)))==t_symbol)){
	goto T206;}
	V61= make_cons(car((V83)),(V61));
	goto T204;
	goto T206;
T206:;
	if(!(type_of(caar((V83)))==t_symbol)){
	goto T212;}
	if(endp_prop(cdar((V83)))){
	goto T211;}
	if(!(endp_prop(cddar((V83))))){
	goto T212;}
	goto T211;
T211:;
	V61= make_cons(caar((V83)),(V61));
	goto T204;
	goto T212;
T212:;
	(void)((*(LnkLI112))());
	goto T204;
T204:;
	V83= cdr((V83));
	goto T197;}
	goto T194;
T194:;
	base[0]= (V60);
	{object V84;
	object V85= (V51);
	if(endp(V85)){
	base[1]= Cnil;
	goto T225;}
	base[2]=V84=MMcons(Cnil,Cnil);
	goto T226;
T226:;
	if(!(type_of((V85->c.c_car))!=t_cons)){
	goto T233;}
	V88= (V85->c.c_car);
	goto T231;
	goto T233;
T233:;
	V88= car((V85->c.c_car));
	goto T231;
T231:;
	{register object x= V88,V87= (V61);
	while(!endp(V87))
	if(eql(x,V87->c.c_car)){
	goto T230;
	}else V87=V87->c.c_cdr;
	goto T229;}
	goto T230;
T230:;
	(V84->c.c_cdr)= Cnil;
	goto T227;
	goto T229;
T229:;
	(V84->c.c_cdr)= make_cons((V85->c.c_car),Cnil);
	goto T227;
T227:;
	{object cdr_V84=MMcdr(V84);while(!endp(cdr_V84)) {cdr_V84=MMcdr(cdr_V84);V84=MMcdr(V84);}}
	V85=MMcdr(V85);
	if(endp(V85)){
	base[2]=base[2]->c.c_cdr;
	base[1]= base[2];
	goto T225;}
	goto T226;}
	goto T225;
T225:;
	vs_top=(vs_base=base+0)+2;
	Lreconc();
	vs_top=sup;
	V51= vs_base[0];
	goto T132;
	goto T153;
T153:;
	if(!(type_of(car((V69)))!=t_cons)){
	goto T241;}
	V70= car((V69));
	goto T239;
	goto T241;
T241:;
	if(!(endp_prop(cdar((V69))))){
	goto T246;}
	V70= caar((V69));
	goto T239;
	goto T246;
T246:;
	goto T237;
	goto T239;
T239:;
	base[0]= (V70);
	base[1]= (V51);
	base[2]= VV[16];
	base[3]= VV[113];
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	V71= vs_base[0];
	if(((V71))==Cnil){
	goto T237;}
	V60= make_cons(car((V71)),(V60));
	goto T235;
	goto T237;
T237:;
	V60= make_cons(car((V69)),(V60));
	goto T235;
T235:;
	if(!(type_of(car((V69)))!=t_cons)){
	goto T260;}
	if(type_of(car((V69)))==t_symbol){
	goto T262;}
	(void)((*(LnkLI112))());
	goto T262;
T262:;
	V61= make_cons(car((V69)),(V61));
	goto T258;
	goto T260;
T260:;
	if(type_of(caar((V69)))==t_symbol){
	goto T267;}
	(void)((*(LnkLI112))());
	goto T258;
	goto T267;
T267:;
	if(endp_prop(cdar((V69)))){
	goto T269;}
	if(!(endp_prop(cddar((V69))))){
	goto T270;}
	goto T269;
T269:;
	V61= make_cons(caar((V69)),(V61));
	goto T258;
	goto T270;
T270:;
	if(type_of(caddar((V69)))==t_symbol){
	goto T276;}
	(void)((*(LnkLI112))());
	goto T258;
	goto T276;
T276:;
	if(endp_prop(cdddar((V69)))){
	goto T279;}
	(void)((*(LnkLI112))());
	goto T258;
	goto T279;
T279:;
	V61= make_cons(caar((V69)),(V61));
	V61= make_cons(caddar((V69)),(V61));
	goto T258;
T258:;
	V69= cdr((V69));
	goto T135;}
	goto T132;
T132:;
	goto T100;
	goto T128;
T128:;
	if(type_of(car((V59)))==t_symbol){
	goto T287;}
	(void)((*(LnkLI112))());
	goto T287;
T287:;
	V60= make_cons(car((V59)),(V60));
	V61= make_cons(car((V59)),(V61));
	V59= cdr((V59));
	goto T103;}
	goto T100;
T100:;
	V46= car((V46));
	goto T96;
	goto T98;
T98:;
	V51= make_cons(VV[17],(V51));
	goto T96;
T96:;
	if(((V47))!=Cnil){
	goto T299;}
	{object V89 = list(4,VV[3],(V46),(V51),listA(3,VV[18],list(2,VV[11],(V45)),(V50)));
	VMR2(V89)}
	goto T299;
T299:;
	if(((V47))==(VV[19])){
	goto T301;}
	if(!(type_of((V47))==t_cons)){
	goto T302;}
	if(!((car((V47)))==(VV[19]))){
	goto T302;}
	goto T301;
T301:;
	{object V90 = list(4,VV[3],(V46),(V51),make_cons(VV[19],(V50)));
	VMR2(V90)}
	goto T302;
T302:;
	if(!(((V47))==(VV[20]))){
	goto T309;}
	{object V91 = list(4,VV[3],(V46),(V51),make_cons(VV[20],(V50)));
	VMR2(V91)}
	goto T309;
T309:;
	{object V92;
	base[0]= VV[21];
	base[1]= (V47);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	V92= vs_base[0];
	if(((V92))==Cnil){
	goto T315;}
	{object V93 = (V92);
	VMR2(V93)}
	goto T315;
T315:;
	{object V94 = Cnil;
	VMR2(V94)}}}
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
	{object V95 = vs_base[0];
	VMR3(V95)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-PREDICATE	*/

static object LI4(V101,V102,V103,V104,V105)

object V101;object V102;register object V103;object V104;register object V105;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{object V106;
	V106= (((V103))==Cnil?Ct:Cnil);
	if(((V106))==Cnil){
	goto T320;}
	{object V107 = (V106);
	VMR4(V107)}
	goto T320;
T320:;
	if(((V103))==(VV[19])){
	goto T322;}
	if(!(type_of((V103))==t_cons)){
	goto T323;}
	if(!((car((V103)))==(VV[19]))){
	goto T323;}
	goto T322;
T322:;
	if(((V104))!=Cnil){
	goto T329;}
	base[0]= VV[23];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T329;
T329:;
	V108= list(3,VV[27],VV[28],(V105));
	V109= list(3,VV[30],VV[31],(V105));
	{object V110 = list(4,VV[3],(V102),VV[24],list(4,VV[25],VV[26],/* INLINE-ARGS */V108,list(3,VV[29],/* INLINE-ARGS */V109,list(2,VV[11],(V101)))));
	VMR4(V110)}
	goto T323;
T323:;
	if(!(((V103))==(VV[20]))){
	goto T334;}
	if(((V104))!=Cnil){
	goto T336;}
	base[0]= VV[32];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T336;
T336:;
	if(!(number_compare((V105),small_fixnum(0))==0)){
	goto T341;}
	{object V111 = list(4,VV[3],(V102),VV[33],list(3,VV[25],VV[34],list(3,VV[29],VV[35],list(2,VV[11],(V101)))));
	VMR4(V111)}
	goto T341;
T341:;
	V112= list(2,list(3,VV[38],(V105),VV[39]),VV[40]);
	{object V113 = list(4,VV[3],(V102),VV[36],listA(4,VV[37],/* INLINE-ARGS */V112,list(2,VV[41],list(3,VV[25],VV[42],list(3,VV[29],VV[43],list(2,VV[11],(V101))))),VV[44]));
	VMR4(V113)}
	goto T334;
T334:;
	{object V114;
	base[0]= VV[45];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	V114= vs_base[0];
	if(((V114))==Cnil){
	goto T346;}
	{object V115 = (V114);
	VMR4(V115)}
	goto T346;
T346:;
	{object V116 = Cnil;
	VMR4(V116)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PARSE-SLOT-DESCRIPTION	*/

static object LI5(V119,V120)

register object V119;object V120;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V121;
	object V122;
	register object V123;
	register object V124;
	V121= Cnil;
	V122= Cnil;
	V123= Cnil;
	V124= Cnil;
	if(!(type_of((V119))!=t_cons)){
	goto T350;}
	V121= (V119);
	goto T348;
	goto T350;
T350:;
	if(!(endp_prop(cdr((V119))))){
	goto T354;}
	V121= car((V119));
	goto T348;
	goto T354;
T354:;
	V121= car((V119));
	V122= cadr((V119));
	{register object V125;
	register object V126;
	register object V127;
	V125= cddr((V119));
	V126= Cnil;
	V127= Cnil;
	goto T363;
T363:;
	if(!(endp_prop((V125)))){
	goto T364;}
	goto T348;
	goto T364;
T364:;
	V126= car((V125));
	if(!(endp_prop(cdr((V125))))){
	goto T370;}
	base[0]= VV[46];
	base[1]= (V125);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T370;
T370:;
	V127= cadr((V125));
	{object V128= (V126);
	if((V128!= VV[75]))goto T378;
	V123= (V127);
	goto T377;
	goto T378;
T378:;
	if((V128!= VV[114]))goto T380;
	V124= (V127);
	goto T377;
	goto T380;
T380:;
	base[0]= VV[47];
	base[1]= (V125);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;}
	goto T377;
T377:;
	V125= cddr((V125));
	goto T363;}
	goto T348;
T348:;
	{object V129 = list(5,(V121),(V122),(V123),(V124),(V120));
	VMR5(V129)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function OVERWRITE-SLOT-DESCRIPTIONS	*/

static object LI6(V132,V133)

object V132;register object V133;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	if(((V133))!=Cnil){
	goto T388;}
	{object V134 = Cnil;
	VMR6(V134)}
	goto T388;
T388:;
	{register object V135;
	base[0]= caar((V133));
	base[1]= (V132);
	base[2]= VV[16];
	base[3]= symbol_function(VV[115]);
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	V135= vs_base[0];
	if(((V135))==Cnil){
	goto T396;}
	if((cadddr(car((V135))))!=Cnil){
	goto T398;}
	if((cadddr(car((V133))))==Cnil){
	goto T398;}
	base[0]= VV[48];
	base[1]= (V135);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T398;
T398:;
	{object V136;
	object V137;
	V136= car((V135));
	V137= (*(LnkLI116))(caddr(car((V135))));
	if(type_of(cddr((V136)))!=t_cons)FEwrong_type_argument(Scons,cddr((V136)));
	(cddr((V136)))->c.c_car = (V137);
	(void)(cddr((V136)));}{object V139;
	V139= caddr(car((V135)));
	if(V139==Cnil)goto T413;
	V138= V139;
	goto T412;
	goto T413;
T413:;}
	V138= Ct;
	goto T412;
T412:;
	V140= (*(LnkLI117))(V138);{object V142;
	V142= caddr(car((V133)));
	if(V142==Cnil)goto T416;
	V141= V142;
	goto T415;
	goto T416;
T416:;}
	V141= Ct;
	goto T415;
T415:;
	V143= (*(LnkLI117))(V141);
	if(equal(/* INLINE-ARGS */V140,/* INLINE-ARGS */V143)){
	goto T409;}
	base[0]= VV[49];
	base[1]= car((V135));
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T409;
T409:;
	V144= list(5,caar((V135)),cadar((V135)),caddar((V135)),cadddr(car((V135))),car(cddddr(car((V133)))));
	V145= (*(LnkLI118))((V132),cdr((V133)));
	{object V146 = make_cons(/* INLINE-ARGS */V144,/* INLINE-ARGS */V145);
	VMR6(V146)}
	goto T396;
T396:;
	V147= car((V133));
	V148= (*(LnkLI118))((V132),cdr((V133)));
	{object V149 = make_cons(/* INLINE-ARGS */V147,/* INLINE-ARGS */V148);
	VMR6(V149)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-T-TYPE	*/

static object LI7(V153,V154,V155)

object V153;object V154;object V155;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V156;
	V156= Cnil;
	{register object V157;
	V157= (VFUN_NARGS=5,(*(LnkLI119))((V153),VV[50],VV[51],VV[52],Ct));
	if(((V154))==Cnil){
	goto T422;}
	{object V158;
	object V159;
	V158= get((V154),VV[53],Cnil);
	V159= Cnil;
	if((V158)!=Cnil){
	goto T426;}
	base[0]= VV[54];
	base[1]= (V154);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T426;
T426:;
	V159= structure_ref((V158),VV[53],2);
	{object V160;
	register object V161;
	V162 = make_fixnum((long)length((V159)));
	V160= (number_compare((V153),V162)<=0?((V153)):V162);
	V161= small_fixnum(0);
	goto T434;
T434:;
	if(!(number_compare((V161),(V160))>=0)){
	goto T435;}
	goto T422;
	goto T435;
T435:;
	V163= aref1((V159),fixint((V161)));
	(void)(aset1((V157),fixint((V161)),/* INLINE-ARGS */V163));
	V161= one_plus((V161));
	goto T434;}}
	goto T422;
T422:;
	{register object V164;
	register object V165;
	V164= (V155);
	V165= car((V164));
	goto T447;
T447:;
	if(!(endp_prop((V164)))){
	goto T448;}
	goto T443;
	goto T448;
T448:;
	V156= car(cddddr((V165)));
	{register object V166;
	V166= caddr((V165));
	base[1]= (V166);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk120)();
	vs_top=sup;
	V167= vs_base[0];
	if(!(number_compare(V167,symbol_value(VV[55]))<=0)){
	goto T454;}
	base[1]= (V166);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk121)();
	vs_top=sup;
	V168= vs_base[0];
	(void)(aset1((V157),fixint((V156)),V168));}
	goto T454;
T454:;
	V164= cdr((V164));
	V165= car((V164));
	goto T447;}
	goto T443;
T443:;
	V169 = make_fixnum((long)length(symbol_value(VV[56])));
	if(!(number_compare((V153),V169)<0)){
	goto T468;}
	{register object V171;
	V171= small_fixnum(0);
	goto T473;
T473:;
	if(!(number_compare((V171),V153)>=0)){
	goto T474;}
	goto T470;
	goto T474;
T474:;
	{long V172= fix(aref1((V157),fixint((V171))));
	if((/* INLINE-ARGS */V172)==(0)){
	goto T478;}}
	{object V173 = (V157);
	VMR7(V173)}
	goto T478;
T478:;
	V171= one_plus((V171));
	goto T473;}
	goto T470;
T470:;
	{object V174 = symbol_value(VV[56]);
	VMR7(V174)}
	goto T468;
T468:;
	{object V175 = (V157);
	VMR7(V175)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ROUND-UP	*/

static object LI8(V178,V179)

long V178;long V179;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	base[0]= make_fixnum(V178);
	base[1]= make_fixnum(V179);
	vs_top=(vs_base=base+0)+2;
	Lceiling();
	vs_top=sup;
	V178= fix(vs_base[0]);
	{long V180 = (long)(V178)*(V179);
	VMR8((object)V180)}
	base[0]=base[0];
}
/*	local entry for function GET-SLOT-POS	*/

static object LI9(V184,V185,V186)

object V184;object V185;object V186;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{register object V187;
	object V188;
	object V189;
	V187= Cnil;
	V188= Cnil;
	V189= Cnil;
	{register object V190;
	register object V191;
	V190= (V186);
	V191= car((V190));
	goto T496;
T496:;
	if(!(endp_prop((V190)))){
	goto T497;}
	goto T492;
	goto T497;
T497:;
	if(((V191))==Cnil){
	goto T501;}
	if((car((V191)))==Cnil){
	goto T501;}
	V187= (*(LnkLI116))(caddr((V191)));
	if(type_of(cddr(V191))!=t_cons)FEwrong_type_argument(Scons,cddr(V191));
	(cddr(V191))->c.c_car = V187;
	(void)(cddr(V191));
	{register object V194;
	V194= cadr((V191));
	base[1]= (V194);
	base[2]= (V187);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk122)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T510;}
	if(!(type_of((V194))==t_symbol)){
	goto T516;}
	base[1]= (V194);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T516;}
	base[1]= (V194);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_value();
	vs_top=sup;
	V194= vs_base[0];
	goto T516;
T516:;
	base[1]= (V194);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T524;}
	goto T510;
	goto T524;
T524:;
	{object V196;
	V196= (*(LnkLI123))((V194),(V187));
	if(type_of(cdr(V191))!=t_cons)FEwrong_type_argument(Scons,cdr(V191));
	(cdr(V191))->c.c_car = (V196);
	(void)(cdr(V191));}}
	goto T510;
T510:;
	{register object x= (V187),V197= VV[58];
	while(!endp(V197))
	if(x==(V197->c.c_car)){
	goto T530;
	}else V197=V197->c.c_cdr;
	goto T501;}
	goto T530;
T530:;
	V188= Ct;
	goto T501;
T501:;
	V190= cdr((V190));
	V191= car((V190));
	goto T496;}
	goto T492;
T492:;
	{object V198;
	if(((V188))==Cnil){
	goto T538;}
	V198= Cnil;
	goto T537;
	goto T538;
T538:;
	V199 = make_fixnum((long)length(symbol_value(VV[57])));
	if(number_compare((V184),V199)<0){
	goto T540;}
	V198= Cnil;
	goto T537;
	goto T540;
T540:;{object V200;
	V200= symbol_value(VV[57]);
	base[0]= Ct;
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	V201= vs_base[0];
	V198= list(3,V200,number_times((V184),V201),Cnil);}
	goto T537;
T537:;
	if(((V198))==Cnil){
	goto T545;}
	{object V202 = (V198);
	VMR9(V202)}
	goto T545;
T545:;
	{object V203;
	register long V204;
	long V205;
	long V206;
	object V207;
	long V208;
	V203= (VFUN_NARGS=5,(*(LnkLI119))((V184),VV[50],VV[59],VV[52],Ct));
	V204= 0;
	V205= 0;
	V206= 0;
	V208= 0;
	V207= Cnil;
	{register object V209;
	register object V210;
	V209= (V186);
	V210= car((V209));
	goto T556;
T556:;
	if(!(endp_prop((V209)))){
	goto T557;}
	goto T552;
	goto T557;
T557:;
	V207= caddr((V210));
	base[1]= (V207);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk120)();
	vs_top=sup;
	V206= fix(vs_base[0]);
	V211 = make_fixnum(V206);
	if(number_compare(V211,symbol_value(VV[55]))<=0){
	goto T566;}
	V207= Ct;
	if(type_of(cddr(V210))!=t_cons)FEwrong_type_argument(Scons,cddr(V210));
	(cddr(V210))->c.c_car = Ct;
	(void)(cddr(V210));
	V206= fix(symbol_value(VV[55]));
	V210= nconc((V210),VV[60]);
	goto T566;
T566:;
	V208= (long)(*(LnkLI125))(V204,V206);
	if(!((V204)==(V208))){
	goto T579;}
	goto T578;
	goto T579;
T579:;
	V189= Ct;
	goto T578;
T578:;
	V204= V208;
	V214 = make_fixnum(V204);
	(void)(aset1((V203),V205,V214));
	V215 = make_fixnum(V204);
	base[1]= (V207);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	V216= vs_base[0];
	V204= fix(number_plus(V215,V216));
	V205= (long)(V205)+(1);
	V209= cdr((V209));
	V210= car((V209));
	goto T556;}
	goto T552;
T552:;
	base[0]= Ct;
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	V217= vs_base[0];
	V218 = make_fixnum((long)(*(LnkLI125))(V204,fix(V217)));
	{object V219 = list(3,(V203),V218,(V189));
	VMR9(V219)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DEFINE-STRUCTURE	*/

static object LI10(object V232,object V231,object V230,object V229,object V228,object V227,object V226,object V225,object V224,object V223,object V222,object V221,object V220,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{object V233;
	object V234;
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
	va_start(ap,first);
	if(narg <13) too_few_arguments();
	Vcs[0]=MMcons(V232,Cnil);
	V233= V231;
	V234= V230;
	V235= V229;
	V236= V228;
	V237= V227;
	V238= V226;
	V239= V225;
	V240= V224;
	V241= V223;
	V242= V222;
	V243= V221;
	V244= V220;
	narg = narg - 13;
	if (narg <= 0) goto T598;
	else {
	V245= first;}
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
	if(!(endp_prop((V249)))){
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
	base[2]= (V233);
	base[3]= (V234);
	base[4]= (V235);
	base[5]= (V236);
	base[6]= (V240);
	base[7]= (V246);
	{object V251;
	V251= (V250);
	 vs_top=base+8;
	 while(!endp(V251))
	 {vs_push(car(V251));V251=cdr(V251);}
	vs_base=base+1;}
	(void) (*Lnk126)();
	vs_top=sup;
	goto T622;
T622:;
	V249= cdr((V249));
	V250= car((V249));
	goto T617;}
	goto T613;
T613:;
	if(((V238))==Cnil){
	goto T638;}
	if(((V246))!=Cnil){
	goto T638;}
	base[0]= (V238);
	{object V252= (V235);
	if((V252!= Cnil))goto T645;
	base[1]= symbol_function(VV[127]);
	goto T644;
	goto T645;
T645:;
	if((V252!= VV[20]))goto T646;
	base[1]= symbol_function(VV[128]);
	goto T644;
	goto T646;
T646:;
	if((V252!= VV[19]))goto T647;
	base[1]= symbol_function(VV[129]);
	goto T644;
	goto T647;
T647:;
	FEerror("The ECASE key value ~s is illegal.",1,V252);
	base[1]= Cnil;
	goto T644;}
	goto T644;
T644:;
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	goto T638;
T638:;
	if(((V235))!=Cnil){
	goto T650;}
	if(!(((Vcs[0]->c.c_car))==(VV[53]))){
	goto T650;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk124)();
	vs_top=sup;
	V253= vs_base[0];
	V254= number_times((V248),V253);
	base[0]= (VFUN_NARGS=5,(*(LnkLI119))(/* INLINE-ARGS */V254,VV[50],VV[61],VV[52],Ct));
	base[1]= (*(LnkLI130))((V248),Cnil,(V237));
	base[2]= symbol_value(VV[57]);
	base[3]= (V237);
	base[4]= Ct;
	vs_top=(vs_base=base+0)+5;
	(void) (*Lnk131)();
	vs_top=sup;
	V247= vs_base[0];
	goto T648;
	goto T650;
T650:;
	{object V255;
	object V256;
	object V257;
	object V258;
	if((V240)==Cnil){
	V258= Cnil;
	goto T662;}
	V258= get((V240),VV[53],Cnil);
	goto T662;
T662:;
	V255= Cnil;
	V256= small_fixnum(0);
	V257= Cnil;
	if(((V258))==Cnil){
	goto T663;}
	if((structure_ref((V258),VV[53],11))==Cnil){
	goto T666;}
	if((structure_ref((V258),VV[53],3))==Cnil){
	goto T667;}
	{object V259;
	V259= get((Vcs[0]->c.c_car),VV[53],Cnil);
	if((V259)==Cnil){
	goto T672;}
	V260= structure_ref((V259),VV[53],4);
	if((/* INLINE-ARGS */V260)==((V258))){
	goto T666;}}
	goto T672;
T672:;
	goto T667;
T667:;
	(void)((VFUN_NARGS=2,(*(LnkLI132))(VV[62],(V240))));
	goto T666;
T666:;
	{object V261;
	object V263;
	V261= (Vcs[0]->c.c_car);
	base[1]= (V261);
	base[2]= structure_ref(V258,VV[53],3);
	vs_top=(vs_base=base+1)+2;
	Ladjoin();
	vs_top=sup;
	V263= vs_base[0];
	(void)(structure_set(V258,VV[53],3,(V263)));}
	goto T663;
T663:;
	if(((V235))!=Cnil){
	goto T678;}
	V255= (*(LnkLI133))((V248),(V240),(V237));
	V256= cadr((V255));
	V257= caddr((V255));
	V255= car((V255));
	goto T678;
T678:;
	if(((V235))==Cnil){
	goto T690;}
	V264= Cnil;
	goto T689;
	goto T690;
T690:;
	V264= (*(LnkLI130))((V248),(V240),(V237));
	goto T689;
T689:;
	V247= (VFUN_NARGS=32,(*(LnkLI134))(VV[63],(Vcs[0]->c.c_car),VV[64],(V248),VV[65],V264,VV[66],(V255),VV[67],(V256),VV[68],(V257),VV[69],(V239),VV[70],(V258),VV[71],(V241),VV[72],(V237),VV[73],(V242),VV[74],(V243),VV[75],(V235),VV[76],(V236),VV[77],(V245),VV[78],(V233)));}
	goto T648;
T648:;
	{object V265;
	V265= get((Vcs[0]->c.c_car),VV[53],Cnil);
	if(!(((Vcs[0]->c.c_car))==(VV[53]))){
	goto T696;}
	if(((V265))==Cnil){
	goto T698;}
	(void)((VFUN_NARGS=1,(*(LnkLI132))(VV[79])));
	goto T698;
T698:;
	if((V265)!=Cnil){
	goto T694;}
	(void)(sputprop((Vcs[0]->c.c_car),VV[53],(V247)));
	goto T694;
	goto T696;
T696:;
	if(((V265))==Cnil){
	goto T702;}
	(void)((*(LnkLI135))((V265),(V247),(Vcs[0]->c.c_car)));
	goto T694;
	goto T702;
T702:;
	(void)(sputprop((Vcs[0]->c.c_car),VV[53],(V247)));
	goto T694;
T694:;
	if(((V245))==Cnil){
	goto T704;}
	(void)(sputprop((Vcs[0]->c.c_car),VV[80],(V245)));
	goto T704;
T704:;
	if(((V235))!=Cnil){
	goto T692;}
	if(((V244))==Cnil){
	goto T692;}
	base[0]= (V244);
	base[1]= VV[3];
	base[2]= VV[81];
	base[3]= Ct;
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk110)();
	vs_top=sup;
	if((V246)!=Cnil){
	goto T716;}
	base[0]= (V244);
	base[1]= 
	make_cclosure_new(LC20,Cnil,Vcs[0],Cdata);
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	goto T716;
T716:;
	(void)(sputprop((V244),VV[82],VV[83]));
	(void)(sputprop((V244),VV[84],(Vcs[0]->c.c_car)));}
	goto T692;
T692:;
	{object V266 = Cnil;
	VMR10(V266)}}
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
	{object V267=base[0]->c.c_cdr;
	if(endp(V267))invalid_macro_call();
	base[2]= (V267->c.c_car);
	V267=V267->c.c_cdr;
	base[3]= V267;}
	{register object V268;
	object V269;
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
	register object V282;
	object V283;
	object V284;
	register object V285;
	register object V286;
	V268= base[3];
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
	V285= Cnil;
	V286= Cnil;
	if(!(type_of(base[2])==t_cons)){
	goto T720;}
	V269= cdr(base[2]);
	base[2]= car(base[2]);
	goto T720;
T720:;
	base[4]= coerce_to_string(base[2]);
	base[5]= VV[85];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk108)();
	vs_top=sup;
	V270= vs_base[0];
	base[5]= VV[86];
	base[6]= coerce_to_string(base[2]);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk108)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V272= vs_base[0];
	base[5]= VV[87];
	base[6]= coerce_to_string(base[2]);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk108)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V274= vs_base[0];
	base[5]= coerce_to_string(base[2]);
	base[6]= VV[88];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk108)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V275= vs_base[0];
	{register object V287;
	register object V288;
	register object V289;
	V287= (V269);
	V288= Cnil;
	V289= Cnil;
	goto T747;
T747:;
	if(!(endp_prop((V287)))){
	goto T748;}
	goto T745;
	goto T748;
T748:;
	if(!(type_of(car((V287)))==t_cons)){
	goto T754;}
	if(endp_prop(cdar((V287)))){
	goto T754;}
	V288= caar((V287));
	V289= cadar((V287));
	{object V290= (V288);
	if((V290!= VV[78]))goto T762;
	if(((V289))!=Cnil){
	goto T764;}
	V270= VV[89];
	V286= Ct;
	goto T752;
	goto T764;
T764:;
	V270= (V289);
	goto T752;
	goto T762;
T762:;
	if((V290!= VV[136]))goto T770;
	if(((V289))!=Cnil){
	goto T772;}
	V273= Ct;
	goto T752;
	goto T772;
T772:;
	if(!(endp_prop(cddar((V287))))){
	goto T776;}
	V271= make_cons((V289),(V271));
	goto T752;
	goto T776;
T776:;
	V271= make_cons(cdar((V287)),(V271));
	goto T752;
	goto T770;
T770:;
	if((V290!= VV[137]))goto T780;
	V274= (V289);
	goto T752;
	goto T780;
T780:;
	if((V290!= VV[52]))goto T782;
	V285= (V289);
	goto T752;
	goto T782;
T782:;
	if((V290!= VV[138]))goto T784;
	V275= (V289);
	V276= Ct;
	goto T752;
	goto T784;
T784:;
	if((V290!= VV[139]))goto T788;
	V277= cdar((V287));
	if((get((V289),VV[53],Cnil))!=Cnil){
	goto T752;}
	base[4]= VV[90];
	base[5]= (V289);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
	goto T752;
	goto T788;
T788:;
	if((V290!= VV[71]))goto T795;
	if(type_of((V289))==t_cons){
	goto T797;}
	goto T796;
	goto T797;
T797:;
	if((car((V289)))==(VV[91])){
	goto T799;}
	goto T796;
	goto T799;
T799:;
	V289= cadr((V289));
	goto T796;
T796:;
	V278= (V289);
	goto T752;
	goto T795;
T795:;
	if((V290!= VV[75]))goto T803;
	V279= (V289);
	goto T752;
	goto T803;
T803:;
	if((V290!= VV[140]))goto T805;
	V281= (V289);
	goto T752;
	goto T805;
T805:;
	base[4]= VV[92];
	base[5]= (V288);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
	goto T752;}
	goto T754;
T754:;
	if(!(type_of(car((V287)))==t_cons)){
	goto T811;}
	V288= caar((V287));
	goto T809;
	goto T811;
T811:;
	V288= car((V287));
	goto T809;
T809:;
	{object V291= (V288);
	if((V291!= VV[136]))goto T815;
	V271= make_cons((V272),(V271));
	goto T752;
	goto T815;
T815:;
	if((V291!= VV[137])
	&& (V291!= VV[138])
	&& (V291!= VV[71]))goto T817;
	goto T752;
	goto T817;
T817:;
	if((V291!= VV[78]))goto T818;
	V270= VV[93];
	V286= Ct;
	goto T752;
	goto T818;
T818:;
	if((V291!= VV[76]))goto T822;
	V280= Ct;
	goto T752;
	goto T822;
T822:;
	base[4]= VV[94];
	base[5]= (V288);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;}
	goto T752;
T752:;
	V287= cdr((V287));
	goto T747;}
	goto T745;
T745:;
	base[4]= coerce_to_string((V270));
	vs_top=(vs_base=base+4)+1;
	Lintern();
	vs_top=sup;
	V270= vs_base[0];
	if((V277)==Cnil){
	goto T832;}
	if(((V278))==Cnil){
	goto T833;}
	goto T832;
	goto T833;
T833:;
	V292= get(car((V277)),VV[53],Cnil);
	V278= structure_ref(V292,VV[53],6);
	goto T832;
T832:;
	if(endp_prop((V268))){
	goto T837;}
	if(!(type_of(car((V268)))==t_string)){
	goto T837;}
	V284= car((V268));
	V268= cdr((V268));
	goto T837;
T837:;
	if(((V277))==Cnil){
	goto T845;}
	V293= get(car((V277)),VV[53],Cnil);
	V294= structure_ref(V293,VV[53],16);
	if(equal((V279),/* INLINE-ARGS */V294)){
	goto T845;}
	base[4]= VV[95];
	base[5]= car((V277));
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
	goto T845;
T845:;
	if(((V277))!=Cnil){
	goto T855;}
	V282= small_fixnum(0);
	goto T853;
	goto T855;
T855:;
	V295= get(car((V277)),VV[53],Cnil);
	V282= structure_ref(V295,VV[53],14);
	goto T853;
T853:;
	if(((V279))==Cnil){
	goto T860;}
	if(((V281))==Cnil){
	goto T860;}
	V282= number_plus((V282),(V281));
	goto T860;
T860:;
	if(((V279))==Cnil){
	goto T866;}
	if(((V280))==Cnil){
	goto T866;}
	V283= (V282);
	V282= one_plus((V282));
	goto T866;
T866:;
	{register object V296;
	register object V297;
	V296= (V268);
	V297= Cnil;
	goto T876;
T876:;
	if(!(endp_prop((V296)))){
	goto T877;}
	V268= nreverse((V297));
	goto T874;
	goto T877;
T877:;
	V298= (*(LnkLI141))(car((V296)),(V282));
	V297= make_cons(/* INLINE-ARGS */V298,(V297));
	V282= one_plus((V282));
	V296= cdr((V296));
	goto T876;}
	goto T874;
T874:;
	if(((V279))==Cnil){
	goto T889;}
	if(((V280))==Cnil){
	goto T889;}
	V299= list(2,Cnil,base[2]);
	V268= make_cons(/* INLINE-ARGS */V299,(V268));
	goto T889;
T889:;
	if(((V279))==Cnil){
	goto T895;}
	if(((V281))==Cnil){
	goto T895;}
	base[4]= (V281);
	vs_top=(vs_base=base+4)+1;
	Lmake_list();
	vs_top=sup;
	V300= vs_base[0];
	V268= append(V300,(V268));
	goto T895;
T895:;
	{object V301;
	V301= (((V277))==Cnil?Ct:Cnil);
	if(((V301))==Cnil){
	goto T906;}
	goto T903;
	goto T906;
T906:;
	if(!(endp_prop(cdr((V277))))){
	goto T909;}
	V302= get(car((V277)),VV[53],Cnil);
	V303= structure_ref(V302,VV[53],7);
	V268= append(/* INLINE-ARGS */V303,(V268));
	goto T903;
	goto T909;
T909:;
	{object V305;
	object V306= cdr((V277));
	if(endp(V306)){
	V304= Cnil;
	goto T914;}
	base[4]=V305=MMcons(Cnil,Cnil);
	goto T915;
T915:;
	(V305->c.c_car)= (*(LnkLI141))((V306->c.c_car),small_fixnum(0));
	V306=MMcdr(V306);
	if(endp(V306)){
	V304= base[4];
	goto T914;}
	V305=MMcdr(V305)=MMcons(Cnil,Cnil);
	goto T915;}
	goto T914;
T914:;
	V308= get(car((V277)),VV[53],Cnil);
	V309= structure_ref(V308,VV[53],7);
	V310= (*(LnkLI118))(V304,/* INLINE-ARGS */V309);
	V268= append(/* INLINE-ARGS */V310,(V268));}
	goto T903;
T903:;
	if(((V273))==Cnil){
	goto T920;}
	if(((V271))==Cnil){
	goto T918;}
	base[4]= VV[96];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T918;
	goto T920;
T920:;
	if(((V271))!=Cnil){
	goto T918;}
	V271= make_cons((V272),Cnil);
	goto T918;
T918:;{object V311;
	{object V314;
	object V315= (V271);
	if(endp(V315)){
	V313= Cnil;
	goto T931;}
	base[4]=V314=MMcons(Cnil,Cnil);
	goto T932;
T932:;
	base[5]= (V315->c.c_car);
	vs_top=(vs_base=base+5)+1;
	Lsymbolp();
	vs_top=sup;
	(V314->c.c_car)= vs_base[0];
	V315=MMcdr(V315);
	if(endp(V315)){
	V313= base[4];
	goto T931;}
	V314=MMcdr(V314)=MMcons(Cnil,Cnil);
	goto T932;}
	goto T931;
T931:;
	{register object x= Ct,V312= V313;
	while(!endp(V312))
	if(eql(x,V312->c.c_car)){
	V311= V312;
	goto T930;
	}else V312=V312->c.c_cdr;
	V311= Cnil;}
	goto T930;
T930:;
	if(V311==Cnil)goto T929;
	goto T928;
	goto T929;
T929:;}
	{object V316;
	base[6]= VV[97];
	base[7]= (V272);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk108)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Lintern();
	vs_top=sup;
	V316= vs_base[0];
	V271= make_cons((V316),(V271));}
	goto T928;
T928:;
	if(((V279))==Cnil){
	goto T940;}
	if(((V280))!=Cnil){
	goto T940;}
	if(((V276))==Cnil){
	goto T945;}
	base[4]= VV[98];
	base[5]= (V275);
	vs_top=(vs_base=base+4)+2;
	Lerror();
	vs_top=sup;
	goto T945;
T945:;
	V275= Cnil;
	goto T940;
T940:;
	if(((V277))==Cnil){
	goto T951;}
	V277= car((V277));
	goto T951;
T951:;
	if(((V278))==Cnil){
	goto T955;}
	if(((V279))==Cnil){
	goto T955;}
	base[4]= VV[99];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	goto T955;
T955:;
	base[4]= VV[101];
	base[5]= list(2,VV[11],base[2]);
	base[6]= list(2,VV[11],(V270));
	base[7]= list(2,VV[11],(V286));
	base[8]= list(2,VV[11],(V279));
	base[9]= list(2,VV[11],(V280));
	base[10]= list(2,VV[11],(V268));
	base[11]= list(2,VV[11],(V274));
	base[12]= list(2,VV[11],(V285));
	base[13]= list(2,VV[11],(V277));
	base[14]= list(2,VV[11],(V278));
	base[15]= list(2,VV[11],(V271));
	base[16]= list(2,VV[11],(V282));
	base[17]= list(2,VV[11],(V275));
	base[18]= list(2,VV[11],(V284));
	vs_top=(vs_base=base+4)+15;
	Llist();
	vs_top=sup;
	V317= vs_base[0];
	{object V319;
	object V320= (V271);
	if(endp(V320)){
	base[4]= Cnil;
	goto T978;}
	base[5]=V319=MMcons(Cnil,Cnil);
	goto T979;
T979:;
	(V319->c.c_car)= (*(LnkLI142))(base[2],(V320->c.c_car),(V279),(V280),(V268));
	V320=MMcdr(V320);
	if(endp(V320)){
	base[4]= base[5];
	goto T978;}
	V319=MMcdr(V319)=MMcons(Cnil,Cnil);
	goto T979;}
	goto T978;
T978:;
	if(((V279))==Cnil){
	goto T983;}
	if(((V275))==Cnil){
	goto T983;}
	V322= (*(LnkLI143))(base[2],(V275),(V279),(V280),(V283));
	base[5]= make_cons(/* INLINE-ARGS */V322,Cnil);
	goto T981;
	goto T983;
T983:;
	base[5]= Cnil;
	goto T981;
T981:;
	V323= list(2,VV[11],base[2]);
	base[6]= make_cons(/* INLINE-ARGS */V323,Cnil);
	vs_top=(vs_base=base+4)+3;
	Lappend();
	vs_top=sup;
	V318= vs_base[0];
	base[4]= listA(3,VV[100],V317,V318);
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	local entry for function MAKE-S-DATA	*/

static object LI12(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V324;
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
	object V340;
	object V341;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI12key,first,ap);
	V324=(Vcs[0]);
	V325=(Vcs[1]);
	V326=(Vcs[2]);
	V327=(Vcs[3]);
	V328=(Vcs[4]);
	V329=(Vcs[5]);
	V330=(Vcs[6]);
	V331=(Vcs[7]);
	V332=(Vcs[8]);
	V333=(Vcs[9]);
	V334=(Vcs[10]);
	V335=(Vcs[11]);
	V336=(Vcs[12]);
	V337=(Vcs[13]);
	V338=(Vcs[14]);
	V339=(Vcs[15]);
	V340=(Vcs[16]);
	V341=(Vcs[17]);
	base[0]= VV[53];
	base[1]= (V324);
	base[2]= (V325);
	base[3]= (V326);
	base[4]= (V327);
	base[5]= (V328);
	base[6]= (V329);
	base[7]= (V330);
	base[8]= (V331);
	base[9]= (V332);
	base[10]= (V333);
	base[11]= (V334);
	base[12]= (V335);
	base[13]= (V336);
	base[14]= (V337);
	base[15]= (V338);
	base[16]= (V339);
	base[17]= (V340);
	base[18]= (V341);
	vs_top=(vs_base=base+0)+19;
	siLmake_structure();
	vs_top=sup;
	{object V342 = vs_base[0];
	VMR12(V342)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function CHECK-S-DATA	*/

static object LI13(V346,V347,V348)

register object V346;register object V347;object V348;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	if((structure_ref((V346),VV[53],3))==Cnil){
	goto T1007;}
	V349= structure_ref((V346),VV[53],3);
	(void)(structure_set((V347),VV[53],3,/* INLINE-ARGS */V349));
	goto T1007;
T1007:;
	if((structure_ref((V346),VV[53],11))==Cnil){
	goto T1010;}
	(void)(structure_set((V347),VV[53],11,Ct));
	goto T1010;
T1010:;
	if(equalp((V347),(V346))){
	goto T1014;}
	(void)((VFUN_NARGS=2,(*(LnkLI132))(VV[102],(V348))));
	{object V350 = sputprop((V348),VV[53],(V347));
	VMR13(V350)}
	goto T1014;
T1014:;
	{object V351 = Cnil;
	VMR13(V351)}
	return Cnil;
}
/*	local entry for function FREEZE-DEFSTRUCT	*/

static object LI14(V353)

object V353;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{object V354;
	if(type_of((V353))==t_symbol){
	goto T1018;}
	V354= Cnil;
	goto T1017;
	goto T1018;
T1018:;
	V354= get((V353),VV[53],Cnil);
	goto T1017;
T1017:;
	if(((V354))==Cnil){
	goto T1021;}
	{object V355 = structure_set((V354),VV[53],11,Ct);
	VMR14(V355)}
	goto T1021;
T1021:;
	{object V356 = Cnil;
	VMR14(V356)}}
	return Cnil;
}
/*	function definition for SHARP-S-READER	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	{object V357;
	object V358;
	object V359;
	check_arg(3);
	V357=(base[0]);
	V358=(base[1]);
	V359=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V359))==Cnil){
	goto T1023;}
	if((symbol_value(VV[103]))!=Cnil){
	goto T1023;}
	base[3]= VV[104];
	vs_top=(vs_base=base+3)+1;
	Lerror();
	vs_top=sup;
	goto T1023;
T1023:;
	{register object V360;
	register object V361;
	{object V362;
	base[5]= (V357);
	base[6]= Ct;
	base[7]= Cnil;
	base[8]= Ct;
	vs_top=(vs_base=base+5)+4;
	Lread();
	vs_top=sup;
	V362= vs_base[0];
	if((symbol_value(VV[103]))==Cnil){
	goto T1035;}
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;
	goto T1035;
T1035:;
	V360= (V362);}{object V363;
	V363= get(car((V360)),VV[53],Cnil);
	if(V363==Cnil)goto T1039;
	V361= V363;
	goto T1038;
	goto T1039;
T1039:;}
	base[5]= VV[105];
	base[6]= car((V360));
	vs_top=(vs_base=base+5)+2;
	Lerror();
	vs_top=sup;
	V361= vs_base[0];
	goto T1038;
T1038:;
	{register object V364;
	V364= cdr((V360));
	goto T1045;
T1045:;
	if(!(endp_prop((V364)))){
	goto T1046;}
	{register object V365;
	V365= structure_ref((V361),VV[53],13);
	goto T1051;
T1051:;
	if(!(endp_prop((V365)))){
	goto T1052;}
	base[5]= VV[106];
	base[6]= car((V360));
	vs_top=(vs_base=base+5)+2;
	Lerror();
	return;
	goto T1052;
T1052:;
	if(!(type_of(car((V365)))==t_symbol)){
	goto T1058;}
	base[5]= car((V365));
	{object V366;
	V366= cdr((V360));
	 vs_top=base+6;
	 while(!endp(V366))
	 {vs_push(car(V366));V366=cdr(V366);}
	vs_base=base+6;}
	super_funcall_no_event(base[5]);
	return;
	goto T1058;
T1058:;
	V365= cdr((V365));
	goto T1051;}
	goto T1046;
T1046:;
	base[5]= coerce_to_string(car((V364)));
	base[6]= VV[107];
	vs_top=(vs_base=base+5)+2;
	Lintern();
	vs_top=sup;
	V367= vs_base[0];
	if(type_of((V364))!=t_cons)FEwrong_type_argument(Scons,(V364));
	((V364))->c.c_car = V367;
	V364= cddr((V364));
	goto T1045;}}
	}
}
/*	local function CLOSURE	*/

static void LC20(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{object V368;
	check_arg(1);
	V368=(base[0]);
	vs_top=sup;
	base[1]= (V368);
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk147)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC19(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{object V369;
	check_arg(1);
	V369=(base[0]);
	vs_top=sup;
	if(!(type_of((V369))==t_cons)){
	goto T1077;}
	base[1]= car((V369));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1077;
T1077:;
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
	{object V370;
	check_arg(1);
	V370=(base[0]);
	vs_top=sup;
	base[1]= aref1((V370),fixint((base0[0]->c.c_car)));
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
	{object V371;
	check_arg(1);
	V371=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V371);
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
	{object V372;
	check_arg(1);
	V372=(base[0]);
	vs_top=sup;
	if(!(type_of((V372))==t_structure)){
	goto T1082;}
	goto T1081;
	goto T1082;
T1082:;
	base[1]= VV[5];
	base[2]= (V372);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	vs_top=sup;
	goto T1081;
T1081:;
	base[1]= (V372);
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk148)();
	return;
	}
}
static void LnkT148(){ call_or_link(VV[148],(void **)(void *)&Lnk148);} /* STRUCTURE-REF1 */
static void LnkT147(){ call_or_link(VV[147],(void **)(void *)&Lnk147);} /* STRUCTURE-SUBTYPE-P */
static object  LnkTLI143(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[143],(void **)(void *)&LnkLI143,5,first,ap);va_end(ap);return V1;} /* MAKE-PREDICATE */
static object  LnkTLI142(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[142],(void **)(void *)&LnkLI142,5,first,ap);va_end(ap);return V1;} /* MAKE-CONSTRUCTOR */
static object  LnkTLI141(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[141],(void **)(void *)&LnkLI141,2,first,ap);va_end(ap);return V1;} /* PARSE-SLOT-DESCRIPTION */
static object  LnkTLI135(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[135],(void **)(void *)&LnkLI135,3,first,ap);va_end(ap);return V1;} /* CHECK-S-DATA */
static object  LnkTLI134(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[134],(void **)(void *)&LnkLI134,first,ap);va_end(ap);return V1;} /* MAKE-S-DATA */
static object  LnkTLI133(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[133],(void **)(void *)&LnkLI133,3,first,ap);va_end(ap);return V1;} /* GET-SLOT-POS */
static object  LnkTLI132(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[132],(void **)(void *)&LnkLI132,first,ap);va_end(ap);return V1;} /* WARN */
static void LnkT131(){ call_or_link(VV[131],(void **)(void *)&Lnk131);} /* MAKE-S-DATA-STRUCTURE */
static object  LnkTLI130(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[130],(void **)(void *)&LnkLI130,3,first,ap);va_end(ap);return V1;} /* MAKE-T-TYPE */
static void LnkT126(){ call_or_link(VV[126],(void **)(void *)&Lnk126);} /* MAKE-ACCESS-FUNCTION */
static object  LnkTLI125(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[125],(void **)(void *)&LnkLI125,20738,first,ap);va_end(ap);return V1;} /* ROUND-UP */
static void LnkT124(){ call_or_link(VV[124],(void **)(void *)&Lnk124);} /* SIZE-OF */
static object  LnkTLI123(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[123],(void **)(void *)&LnkLI123,2,first,ap);va_end(ap);return V1;} /* COERCE */
static void LnkT122(){ call_or_link(VV[122],(void **)(void *)&Lnk122);} /* TYPEP */
static void LnkT121(){ call_or_link(VV[121],(void **)(void *)&Lnk121);} /* AET-TYPE */
static void LnkT120(){ call_or_link(VV[120],(void **)(void *)&Lnk120);} /* ALIGNMENT */
static object  LnkTLI119(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[119],(void **)(void *)&LnkLI119,first,ap);va_end(ap);return V1;} /* MAKE-ARRAY */
static object  LnkTLI118(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[118],(void **)(void *)&LnkLI118,2,first,ap);va_end(ap);return V1;} /* OVERWRITE-SLOT-DESCRIPTIONS */
static object  LnkTLI117(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[117],(void **)(void *)&LnkLI117,1,first,ap);va_end(ap);return V1;} /* NORMALIZE-TYPE */
static object  LnkTLI116(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[116],(void **)(void *)&LnkLI116,1,first,ap);va_end(ap);return V1;} /* BEST-ARRAY-ELEMENT-TYPE */
static object  LnkTLI112(){return call_proc0(VV[112],(void **)(void *)&LnkLI112);} /* ILLEGAL-BOA */
static void LnkT111(){ call_or_link(VV[111],(void **)(void *)&Lnk111);} /* SUBTYPEP */
static void LnkT110(){ call_or_link(VV[110],(void **)(void *)&Lnk110);} /* RECORD-FN */
static object  LnkTLI109(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[109],(void **)(void *)&LnkLI109,first,ap);va_end(ap);return V1;} /* ADJUST-ARRAY */
static void LnkT108(){ call_or_link(VV[108],(void **)(void *)&Lnk108);} /* STRING-CONCATENATE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

