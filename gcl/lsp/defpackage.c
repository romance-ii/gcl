
#include <cmpinclude.h>
#include "defpackage.h"
init_defpackage(){do_init(VV);}
/*	macro definition for DEFPACKAGE	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	base[3]= V1;}
	{register object V2;
	register object V3;
	V2= Cnil;
	V3= base[3];
T3:;
	if(((V3))==Cnil){
	goto T6;}
	goto T5;
T6:;
	goto T4;
T5:;
	{register object V4;
	V4= car((V3));
	V2= (V4);}
	{register object x= car((V2)),V5= VV[0];
	while(!endp(V5))
	if(eql(x,V5->c.c_car)){
	goto T11;
	}else V5=V5->c.c_cdr;}
	base[4]= VV[1];
	base[5]= VV[2];
	base[6]= (V2);
	vs_top=(vs_base=base+4)+3;
	Lcerror();
	vs_top=sup;
T11:;
	V3= cdr((V3));
	goto T3;
T4:;
	goto T1;
	goto T1;}
T1:;
	base[4]=MMcons(Cnil,Cnil);
	(base[4]->c.c_car)=make_cclosure_new(LC3,Cnil,base[4],Cdata);
	{register object V6;
	register object V7;
	V6= Cnil;
	V7= VV[3];
T22:;
	if(((V7))==Cnil){
	goto T25;}
	goto T24;
T25:;
	goto T23;
T24:;
	{register object V8;
	V8= car((V7));
	V6= (V8);}
	V9= symbol_function(VV[63]);
	V10= (VFUN_NARGS=4,(*(LnkLI62))((V6),base[3],VV[4],V9));
	if(!(number_compare(small_fixnum(2),/* INLINE-ARGS */V10)<=0)){
	goto T30;}
	base[5]= (V6);
	base[6]= base[3];
	vs_top=(vs_base=base+5)+2;
	L5(base);
	vs_top=sup;
	V11= vs_base[0];
	(void)((VFUN_NARGS=3,(*(LnkLI64))(VV[5],(V6),car(V11))));
T30:;
	V7= cdr((V7));
	goto T22;
T23:;
	goto T20;
	goto T20;}
T20:;
	base[2]= coerce_to_string(base[2]);
	{object V12;
	object V13;
	object V14;
	object V15;
	register object V16;
	object V17;
	object V18;
	object V19;
	object V20;
	base[6]= VV[6];
	base[7]= base[3];
	vs_top=(vs_base=base+6)+2;
	L5(base);
	vs_top=sup;
	V23= vs_base[0];
	{object V21;
	object V22= V23;
	if(endp(V22)){
	V12= Cnil;
	goto T42;}
	base[5]=V21=MMcons(Cnil,Cnil);
T43:;
	(V21->c.c_car)= coerce_to_string((V22->c.c_car));
	if(endp(V22=MMcdr(V22))){
	V12= base[5];
	goto T42;}
	V21=MMcdr(V21)=MMcons(Cnil,Cnil);
	goto T43;}
T42:;
	base[5]= VV[7];
	base[6]= base[3];
	vs_top=(vs_base=base+5)+2;
	L5(base);
	vs_top=sup;
	V24= vs_base[0];
	V13= car(V24);
	base[5]= VV[8];
	base[6]= base[3];
	vs_top=(vs_base=base+5)+2;
	L5(base);
	vs_top=sup;
	V25= vs_base[0];
	V14= car(V25);
	base[6]= VV[9];
	base[7]= base[3];
	vs_top=(vs_base=base+6)+2;
	L5(base);
	vs_top=sup;
	V28= vs_base[0];
	{object V26;
	object V27= V28;
	if(endp(V27)){
	V15= Cnil;
	goto T56;}
	base[5]=V26=MMcons(Cnil,Cnil);
T57:;
	(V26->c.c_car)= coerce_to_string((V27->c.c_car));
	if(endp(V27=MMcdr(V27))){
	V15= base[5];
	goto T56;}
	V26=MMcdr(V26)=MMcons(Cnil,Cnil);
	goto T57;}
T56:;
	base[6]= VV[10];
	base[7]= base[3];
	vs_top=(vs_base=base+6)+2;
	L5(base);
	vs_top=sup;
	V31= vs_base[0];
	{object V29;
	object V30= V31;
	if(endp(V30)){
	V16= Cnil;
	goto T62;}
	base[5]=V29=MMcons(Cnil,Cnil);
T63:;
	(V29->c.c_car)= coerce_to_string((V30->c.c_car));
	if(endp(V30=MMcdr(V30))){
	V16= base[5];
	goto T62;}
	V29=MMcdr(V29)=MMcons(Cnil,Cnil);
	goto T63;}
T62:;
	base[6]= VV[11];
	base[7]= base[3];
	vs_top=(vs_base=base+6)+2;
	L5(base);
	vs_top=sup;
	V34= vs_base[0];
	{object V32;
	object V33= V34;
	if(endp(V33)){
	V17= Cnil;
	goto T68;}
	base[5]=V32=MMcons(Cnil,Cnil);
T69:;
	(V32->c.c_car)= coerce_to_string((V33->c.c_car));
	if(endp(V33=MMcdr(V33))){
	V17= base[5];
	goto T68;}
	V32=MMcdr(V32)=MMcons(Cnil,Cnil);
	goto T69;}
T68:;
	{register object V35;
	register object V36;
	base[5]= VV[12];
	base[6]= base[3];
	vs_top=(vs_base=base+5)+2;
	L4(base);
	vs_top=sup;
	V36= vs_base[0];
	V35= Cnil;
	{register object V37;
	register object V38;
	register object V39;
	V37= Cnil;
	V38= Cnil;
	V39= Cnil;
T79:;
	if(((V36))==Cnil){
	goto T82;}
	goto T81;
T82:;
	goto T80;
T81:;
	{register object V40;
	V40= car((V36));
	V35= (V40);}
	V41= coerce_to_string(car((V35)));
	{object V43;
	object V44= cdr((V35));
	if(endp(V44)){
	V42= Cnil;
	goto T89;}
	base[5]=V43=MMcons(Cnil,Cnil);
T90:;
	(V43->c.c_car)= coerce_to_string((V44->c.c_car));
	if(endp(V44=MMcdr(V44))){
	V42= base[5];
	goto T89;}
	V43=MMcdr(V43)=MMcons(Cnil,Cnil);
	goto T90;}
T89:;
	V39= make_cons(/* INLINE-ARGS */V41,V42);
	if(((V38))==Cnil){
	goto T94;}
	{register object V45;
	register object V46;
	V45= (V38);
	V38= make_cons((V39),Cnil);
	V46= (V38);
	if(type_of((V45))!=t_cons)FEwrong_type_argument(Scons,(V45));
	((V45))->c.c_cdr = (V46);
	goto T92;}
T94:;
	V38= make_cons((V39),Cnil);
	V37= (V38);
T92:;
	V36= cdr((V36));
	goto T79;
T80:;
	V18= (V37);
	goto T74;
	V18= Cnil;
	goto T74;
	V18= Cnil;
	goto T74;}}
T74:;
	{register object V47;
	register object V48;
	base[5]= VV[13];
	base[6]= base[3];
	vs_top=(vs_base=base+5)+2;
	L4(base);
	vs_top=sup;
	V48= vs_base[0];
	V47= Cnil;
	{register object V49;
	register object V50;
	register object V51;
	V49= Cnil;
	V50= Cnil;
	V51= Cnil;
T111:;
	if(((V48))==Cnil){
	goto T114;}
	goto T113;
T114:;
	goto T112;
T113:;
	{register object V52;
	V52= car((V48));
	V47= (V52);}
	V53= coerce_to_string(car((V47)));
	{object V55;
	object V56= cdr((V47));
	if(endp(V56)){
	V54= Cnil;
	goto T121;}
	base[5]=V55=MMcons(Cnil,Cnil);
T122:;
	(V55->c.c_car)= coerce_to_string((V56->c.c_car));
	if(endp(V56=MMcdr(V56))){
	V54= base[5];
	goto T121;}
	V55=MMcdr(V55)=MMcons(Cnil,Cnil);
	goto T122;}
T121:;
	V51= make_cons(/* INLINE-ARGS */V53,V54);
	if(((V50))==Cnil){
	goto T126;}
	{register object V57;
	register object V58;
	V57= (V50);
	V50= make_cons((V51),Cnil);
	V58= (V50);
	if(type_of((V57))!=t_cons)FEwrong_type_argument(Scons,(V57));
	((V57))->c.c_cdr = (V58);
	goto T124;}
T126:;
	V50= make_cons((V51),Cnil);
	V49= (V50);
T124:;
	V48= cdr((V48));
	goto T111;
T112:;
	V19= (V49);
	goto T106;
	V19= Cnil;
	goto T106;
	V19= Cnil;
	goto T106;}}
T106:;
	base[6]= VV[14];
	base[7]= base[3];
	vs_top=(vs_base=base+6)+2;
	L5(base);
	vs_top=sup;
	V61= vs_base[0];
	{object V59;
	object V60= V61;
	if(endp(V60)){
	V20= Cnil;
	goto T138;}
	base[5]=V59=MMcons(Cnil,Cnil);
T139:;
	(V59->c.c_car)= coerce_to_string((V60->c.c_car));
	if(endp(V60=MMcdr(V60))){
	V20= base[5];
	goto T138;}
	V59=MMcdr(V59)=MMcons(Cnil,Cnil);
	goto T139;}
T138:;
	{register object V62;
	register object V63;
	base[5]= (V15);
	base[6]= (V16);
	{register object V64;
	register object V65;
	V64= Cnil;
	V65= (V18);
	{register object V66;
	register object V67;
	register object V68;
	V66= Cnil;
	V67= Cnil;
	V68= Cnil;
T151:;
	if(((V65))==Cnil){
	goto T154;}
	goto T153;
T154:;
	goto T152;
T153:;
	{register object V69;
	V69= car((V65));
	V64= (V69);}
	base[8]= cdr((V64));
	vs_top=(vs_base=base+8)+1;
	Lcopy_list();
	vs_top=sup;
	V68= vs_base[0];
	if(((V67))==Cnil){
	goto T164;}
	{register object V70;
	register object V71;
	V70= (V67);
	V71= (V68);
	if(type_of((V70))!=t_cons)FEwrong_type_argument(Scons,(V70));
	((V70))->c.c_cdr = (V71);
	if(((V71))!=Cnil){
	goto T166;}}
	goto T162;
T166:;
	base[8]= cdr((V67));
	vs_top=(vs_base=base+8)+1;
	Llast();
	vs_top=sup;
	V67= vs_base[0];
	goto T162;
T164:;
	V66= (V68);
	base[8]= (V66);
	vs_top=(vs_base=base+8)+1;
	Llast();
	vs_top=sup;
	V67= vs_base[0];
T162:;
	V65= cdr((V65));
	goto T151;
T152:;
	base[7]= (V66);
	goto T149;
	base[7]= Cnil;
	goto T149;
	base[7]= Cnil;
	goto T149;}}
T149:;
	{register object V72;
	register object V73;
	V72= Cnil;
	V73= (V19);
	{register object V74;
	register object V75;
	register object V76;
	V74= Cnil;
	V75= Cnil;
	V76= Cnil;
T182:;
	if(((V73))==Cnil){
	goto T185;}
	goto T184;
T185:;
	goto T183;
T184:;
	{register object V77;
	V77= car((V73));
	V72= (V77);}
	base[9]= cdr((V72));
	vs_top=(vs_base=base+9)+1;
	Lcopy_list();
	vs_top=sup;
	V76= vs_base[0];
	if(((V75))==Cnil){
	goto T195;}
	{register object V78;
	register object V79;
	V78= (V75);
	V79= (V76);
	if(type_of((V78))!=t_cons)FEwrong_type_argument(Scons,(V78));
	((V78))->c.c_cdr = (V79);
	if(((V79))!=Cnil){
	goto T197;}}
	goto T193;
T197:;
	base[9]= cdr((V75));
	vs_top=(vs_base=base+9)+1;
	Llast();
	vs_top=sup;
	V75= vs_base[0];
	goto T193;
T195:;
	V74= (V76);
	base[9]= (V74);
	vs_top=(vs_base=base+9)+1;
	Llast();
	vs_top=sup;
	V75= vs_base[0];
T193:;
	V73= cdr((V73));
	goto T182;
T183:;
	base[8]= (V74);
	goto T180;
	base[8]= Cnil;
	goto T180;
	base[8]= Cnil;
	goto T180;}}
T180:;
	vs_top=(vs_base=base+5)+4;
	L2(base);
	vs_top=sup;
	V63= vs_base[0];
	V62= Cnil;
T212:;
	if(((V63))==Cnil){
	goto T215;}
	goto T214;
T215:;
	goto T213;
T214:;
	{register object V80;
	V80= car((V63));
	V62= (V80);}
	base[5]= VV[15];
	base[6]= car((V62));
	{register object V81;
	register object V82;
	V82= cdr((V62));
	V81= Cnil;
	{register object V83;
	register object V84;
	register object V85;
	V83= Cnil;
	V84= Cnil;
	V85= Cnil;
T226:;
	if(((V82))==Cnil){
	goto T229;}
	goto T228;
T229:;
	goto T227;
T228:;
	{register object V86;
	V86= car((V82));
	V81= (V86);}
	{object V87= (V81);
	if(!eql(V87,VV[16]))goto T236;
	V85= VV[9];
	goto T235;
T236:;
	if(!eql(V87,VV[17]))goto T237;
	V85= VV[10];
	goto T235;
T237:;
	if(!eql(V87,VV[18]))goto T238;
	V85= VV[12];
	goto T235;
T238:;
	if(!eql(V87,VV[19]))goto T239;
	V85= VV[13];
	goto T235;
T239:;
	V85= Cnil;}
T235:;
	if(((V84))==Cnil){
	goto T242;}
	{register object V88;
	register object V89;
	V88= (V84);
	V84= make_cons((V85),Cnil);
	V89= (V84);
	if(type_of((V88))!=t_cons)FEwrong_type_argument(Scons,(V88));
	((V88))->c.c_cdr = (V89);
	goto T240;}
T242:;
	V84= make_cons((V85),Cnil);
	V83= (V84);
T240:;
	V82= cdr((V82));
	goto T226;
T227:;
	base[7]= (V83);
	goto T223;
	base[7]= Cnil;
	goto T223;
	base[7]= Cnil;
	goto T223;}}
T223:;
	vs_top=(vs_base=base+5)+3;
	Lerror();
	vs_top=sup;
	V63= cdr((V63));
	goto T212;
T213:;
	goto T145;
	goto T145;}
T145:;
	{register object V90;
	register object V91;
	base[5]= (V17);
	base[6]= (V16);
	vs_top=(vs_base=base+5)+2;
	L2(base);
	vs_top=sup;
	V91= vs_base[0];
	V90= Cnil;
T261:;
	if(((V91))==Cnil){
	goto T264;}
	goto T263;
T264:;
	goto T262;
T263:;
	{register object V92;
	V92= car((V91));
	V90= (V92);}
	base[5]= VV[20];
	base[6]= car((V90));
	{register object V93;
	register object V94;
	V94= cdr((V90));
	V93= Cnil;
	{register object V95;
	register object V96;
	register object V97;
	V95= Cnil;
	V96= Cnil;
	V97= Cnil;
T275:;
	if(((V94))==Cnil){
	goto T278;}
	goto T277;
T278:;
	goto T276;
T277:;
	{register object V98;
	V98= car((V94));
	V93= (V98);}
	{object V99= (V93);
	if(!eql(V99,VV[16]))goto T285;
	V97= VV[11];
	goto T284;
T285:;
	if(!eql(V99,VV[17]))goto T286;
	V97= VV[10];
	goto T284;
T286:;
	V97= Cnil;}
T284:;
	if(((V96))==Cnil){
	goto T289;}
	{register object V100;
	register object V101;
	V100= (V96);
	V96= make_cons((V97),Cnil);
	V101= (V96);
	if(type_of((V100))!=t_cons)FEwrong_type_argument(Scons,(V100));
	((V100))->c.c_cdr = (V101);
	goto T287;}
T289:;
	V96= make_cons((V97),Cnil);
	V95= (V96);
T287:;
	V94= cdr((V94));
	goto T275;
T276:;
	base[7]= (V95);
	goto T272;
	base[7]= Cnil;
	goto T272;
	base[7]= Cnil;
	goto T272;}}
T272:;
	vs_top=(vs_base=base+5)+3;
	Lerror();
	vs_top=sup;
	V91= cdr((V91));
	goto T261;
T262:;
	goto T144;
	goto T144;}
T144:;
	V102= list(2,VV[26],base[2]);
	V103= list(3,VV[28],base[2],base[2]);
	if(((V12))==Cnil){
	goto T306;}
	V105= list(4,VV[28],base[2],base[2],list(2,VV[29],(V12)));
	V104= make_cons(/* INLINE-ARGS */V105,Cnil);
	goto T304;
T306:;
	V104= Cnil;
T304:;
	base[5]= VV[30];
	base[6]= base[3];
	base[7]= VV[4];
	base[8]= symbol_function(VV[63]);
	vs_top=(vs_base=base+5)+4;
	Lmember();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T310;}
	V107= list(3,VV[31],list(2,VV[32],list(2,VV[26],base[2])),base[2]);
	V106= make_cons(/* INLINE-ARGS */V107,Cnil);
	goto T308;
T310:;
	V106= Cnil;
T308:;
	V108= listA(3,VV[27],/* INLINE-ARGS */V103,append(V104,V106));
	V109= list(2,VV[29],(V12));
	if(((V14))==Cnil){
	goto T318;}
	V110= Cnil;
	goto T316;
T318:;
	V110= Cnil;
T316:;
	V111= list(4,VV[25],/* INLINE-ARGS */V102,/* INLINE-ARGS */V108,listA(7,VV[33],base[2],VV[34],VV[35],VV[36],/* INLINE-ARGS */V109,V110));
	if(((V13))==Cnil){
	goto T322;}
	base[5]= base[2];
	base[6]= VV[39];
	vs_top=(vs_base=base+5)+2;
	Lintern();
	vs_top=sup;
	V113= vs_base[0];
	V114= list(3,VV[37],list(3,VV[38],list(2,VV[29],V113),VV[40]),(V13));
	V112= make_cons(/* INLINE-ARGS */V114,Cnil);
	goto T320;
T322:;
	V112= Cnil;
T320:;
	V115= list(2,VV[42],list(2,VV[26],base[2]));
	V116= make_cons(/* INLINE-ARGS */V115,Cnil);
	if(((V15))==Cnil){
	goto T330;}
	V118= list(2,VV[43],list(3,VV[44],VV[45],list(2,VV[29],(V15))));
	base[5]= make_cons(/* INLINE-ARGS */V118,Cnil);
	goto T328;
T330:;
	base[5]= Cnil;
T328:;
	if(((V18))==Cnil){
	goto T334;}
	{object V119;
	object V120= (V18);
	if(endp(V120)){
	base[6]= Cnil;
	goto T332;}
	base[7]=V119=MMcons(Cnil,Cnil);
T336:;
	V122= list(2,VV[47],list(3,VV[48],VV[49],list(3,VV[50],VV[51],car((V120->c.c_car)))));
	(V119->c.c_car)= list(2,VV[46],list(3,VV[44],/* INLINE-ARGS */V122,list(2,VV[29],cdr((V120->c.c_car)))));
	if(endp(V120=MMcdr(V120))){
	base[6]= base[7];
	goto T332;}
	V119=MMcdr(V119)=MMcons(Cnil,Cnil);
	goto T336;}
T334:;
	base[6]= Cnil;
T332:;{object V124;
	base[9]= VV[30];
	base[10]= base[3];
	vs_top=(vs_base=base+9)+2;
	L5(base);
	vs_top=sup;
	V127= vs_base[0];
	{object V125;
	object V126= V127;
	if(endp(V126)){
	V124= Cnil;
	goto T341;}
	base[8]=V125=MMcons(Cnil,Cnil);
T342:;
	(V125->c.c_car)= coerce_to_string((V126->c.c_car));
	if(endp(V126=MMcdr(V126))){
	V124= base[8];
	goto T341;}
	V125=MMcdr(V125)=MMcons(Cnil,Cnil);
	goto T342;}
T341:;
	if(V124==Cnil)goto T340;
	V123= V124;
	goto T339;
T340:;}
	V123= VV[53];
T339:;
	V128= list(2,VV[52],list(2,VV[29],V123));
	if(((V19))==Cnil){
	goto T350;}
	{object V130;
	object V131= (V19);
	if(endp(V131)){
	base[8]= Cnil;
	goto T348;}
	base[9]=V130=MMcons(Cnil,Cnil);
T352:;
	V133= list(2,VV[47],list(3,VV[48],VV[55],list(3,VV[50],VV[51],car((V131->c.c_car)))));
	(V130->c.c_car)= list(2,VV[54],list(3,VV[44],/* INLINE-ARGS */V133,list(2,VV[29],cdr((V131->c.c_car)))));
	if(endp(V131=MMcdr(V131))){
	base[8]= base[9];
	goto T348;}
	V130=MMcdr(V130)=MMcons(Cnil,Cnil);
	goto T352;}
T350:;
	base[8]= Cnil;
T348:;
	if(((V16))==Cnil){
	goto T356;}
	V134= list(3,VV[44],VV[56],list(2,VV[29],(V16)));
	base[9]= make_cons(/* INLINE-ARGS */V134,Cnil);
	goto T354;
T356:;
	base[9]= Cnil;
T354:;
	if(((V17))==Cnil){
	goto T360;}
	V135= list(2,VV[57],list(3,VV[44],VV[58],list(2,VV[29],(V17))));
	base[10]= make_cons(/* INLINE-ARGS */V135,Cnil);
	goto T358;
T360:;
	base[10]= Cnil;
T358:;
	if(((V20))==Cnil){
	goto T364;}
	V136= list(3,VV[59],list(2,VV[60],list(2,VV[29],(V20))),VV[61]);
	base[11]= make_cons(/* INLINE-ARGS */V136,Cnil);
	goto T362;
T364:;
	base[11]= Cnil;
T362:;
	vs_top=(vs_base=base+8)+4;
	Lappend();
	vs_top=sup;
	V129= vs_base[0];
	base[7]= make_cons(/* INLINE-ARGS */V128,V129);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V117= vs_base[0];
	V137= listA(3,VV[41],/* INLINE-ARGS */V116,V117);
	V138= list(2,/* INLINE-ARGS */V137,list(2,VV[26],base[2]));
	base[5]= listA(4,VV[23],VV[24],/* INLINE-ARGS */V111,append(V112,/* INLINE-ARGS */V138));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local function FIND-DUPLICATES	*/

static L2(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	{object V139;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V139=(base[0]);
	vs_top=sup;
	{object V140;
	V140= Cnil;
	{object V141;
	object V142;
	V141= Cnil;
	V142= (V139);
	{object V143;
	V143= cdr((V139));
	{register int V144;
	V144= 1;
T370:;
	if(((V143))==Cnil){
	goto T373;}
	goto T372;
T373:;
	goto T371;
T372:;
	if(((V142))==Cnil){
	goto T376;}
	goto T375;
T376:;
	goto T371;
T375:;
	{object V145;
	V145= car((V142));
	V141= (V145);}
	{register object V146;
	register object V147;
	V146= Cnil;
	V147= (V141);
	{register object V148;
	V148= Cnil;
T383:;
	if(((V147))==Cnil){
	goto T386;}
	goto T385;
T386:;
	goto T384;
T385:;
	{object V149;
	V149= car((V147));
	V146= (V149);}
	{object V150;
	V151= symbol_function(VV[63]);
	V152= symbol_function(VV[66]);
	V150= (VFUN_NARGS=6,(*(LnkLI65))((V146),(V140),VV[4],V151,VV[21],V152));
	V148= (V150);}
	V154 = make_fixnum(V144);
	{register object x= V154,V153= (V148);
	while(!endp(V153))
	if(eql(x,V153->c.c_car)){
	goto T396;
	}else V153=V153->c.c_cdr;}
	{object V155;
	register object V156;
	V155= Cnil;
	V156= (V143);
	{register int V157;
	{object V158;
	V159 = make_fixnum(V144);
	V158= one_plus(V159);{object V160;
	V160= (type_of((V158))==t_fixnum?Ct:Cnil);
	if(V160==Cnil)goto T402;
	goto T401;
T402:;}
	(void)((*(LnkLI67))());
T401:;
	V157= fix((V158));}
T405:;
	if(((V156))==Cnil){
	goto T408;}
	goto T407;
T408:;
	goto T406;
T407:;
	{object V161;
	V161= car((V156));
	V155= (V161);}
	base[1]= (V146);
	base[2]= (V155);
	base[3]= VV[21];
	base[4]= symbol_function(VV[66]);
	vs_top=(vs_base=base+1)+4;
	Lmember();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T413;}
	if(((V148))==Cnil){
	goto T421;}
	V162 = make_fixnum(V157);
	V163= make_cons(V162,Cnil);
	(void)(nconc((V148),/* INLINE-ARGS */V163));
	goto T413;
T421:;
	V164 = make_fixnum(V144);
	V165 = make_fixnum(V157);
	V166= list(3,(V146),V164,V165);
	V140= make_cons(/* INLINE-ARGS */V166,(V140));
	V148= car((V140));
T413:;
	V156= cdr((V156));
	if(!((V157)<(2147483646))){
	goto T428;}
	goto T427;
T428:;
	(void)((*(LnkLI67))());
T427:;
	V157= (V157)+(1);
	goto T405;
T406:;
	goto T396;
	goto T396;}}
T396:;
	V147= cdr((V147));
	goto T383;
T384:;
	goto T381;
	goto T381;}}
T381:;
	V142= cdr((V142));
	V143= cdr((V143));
	if(!((V144)<(2147483646))){
	goto T441;}
	goto T440;
T441:;
	(void)((*(LnkLI67))());
T440:;
	V144= (V144)+(1);
	goto T370;
T371:;
	goto T366;
	goto T366;}}}
T366:;
	base[1]= (V140);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function OPTION-TEST	*/

static LC3(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	{object V167;
	object V168;
	check_arg(2);
	V167=(base[0]);
	V168=(base[1]);
	vs_top=sup;
	if(!(type_of((V168))==t_cons)){
	goto T447;}
	base[2]= (equal(car((V168)),(V167))?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
T447:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function OPTION-VALUES	*/

static L5(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	{object V169;
	object V170;
	check_arg(2);
	V169=(base[0]);
	V170=(base[1]);
	vs_top=sup;
TTL:;
	{register object V171;
	V171= Cnil;
	{object V172;
	register object V173;
	register object V174;
	V172= Cnil;
	V173= Cnil;
	V174= Cnil;
	{object V175;
	base[2]= (V169);
	base[3]= (V170);
	base[4]= VV[21];
	base[5]= (base0[4]->c.c_car);
	vs_top=(vs_base=base+2)+4;
	Lmember();
	vs_top=sup;
	V175= vs_base[0];
	V171= (V175);}
T450:;
	if(((V171))==Cnil){
	goto T459;}
	goto T458;
T459:;
	goto T451;
T458:;
	if(((V171))==Cnil){
	goto T461;}
	base[2]= cdr(car((V171)));
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	V174= vs_base[0];
	if(((V173))==Cnil){
	goto T468;}
	{register object V176;
	register object V177;
	V176= (V173);
	V177= (V174);
	if(type_of((V176))!=t_cons)FEwrong_type_argument(Scons,(V176));
	((V176))->c.c_cdr = (V177);
	if(((V177))!=Cnil){
	goto T470;}}
	goto T461;
T470:;
	base[2]= cdr((V173));
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V173= vs_base[0];
	goto T461;
T468:;
	V172= (V174);
	base[2]= (V172);
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V173= vs_base[0];
T461:;
	{register object V178;
	base[2]= (V169);
	base[3]= cdr((V171));
	base[4]= VV[21];
	base[5]= (base0[4]->c.c_car);
	vs_top=(vs_base=base+2)+4;
	Lmember();
	vs_top=sup;
	V178= vs_base[0];
	V171= (V178);}
	goto T450;
T451:;
	base[2]= (V172);
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	local function OPTION-VALUES-LIST	*/

static L4(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{object V179;
	object V180;
	check_arg(2);
	V179=(base[0]);
	V180=(base[1]);
	vs_top=sup;
TTL:;
	{register object V181;
	V181= Cnil;
	{object V182;
	register object V183;
	register object V184;
	V182= Cnil;
	V183= Cnil;
	V184= Cnil;
	{object V185;
	base[2]= (V179);
	base[3]= (V180);
	base[4]= VV[21];
	base[5]= (base0[4]->c.c_car);
	vs_top=(vs_base=base+2)+4;
	Lmember();
	vs_top=sup;
	V185= vs_base[0];
	V181= (V185);}
T490:;
	if(((V181))==Cnil){
	goto T499;}
	goto T498;
T499:;
	goto T491;
T498:;
	if(((V181))==Cnil){
	goto T501;}
	V184= cdr(car((V181)));
	if(((V183))==Cnil){
	goto T507;}
	{register object V186;
	register object V187;
	V186= (V183);
	V183= make_cons((V184),Cnil);
	V187= (V183);
	if(type_of((V186))!=t_cons)FEwrong_type_argument(Scons,(V186));
	((V186))->c.c_cdr = (V187);
	goto T501;}
T507:;
	V183= make_cons((V184),Cnil);
	V182= (V183);
T501:;
	{register object V188;
	base[2]= (V179);
	base[3]= cdr((V181));
	base[4]= VV[21];
	base[5]= (base0[4]->c.c_car);
	vs_top=(vs_base=base+2)+4;
	Lmember();
	vs_top=sup;
	V188= vs_base[0];
	V181= (V188);}
	goto T490;
T491:;
	base[2]= (V182);
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
static object  LnkTLI67(){return call_proc0(VV[67],&LnkLI67);} /* TYPE-ERROR */
static object  LnkTLI65(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[65],&LnkLI65,ap);} /* FIND */
static object  LnkTLI64(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[64],&LnkLI64,ap);} /* WARN */
static object  LnkTLI62(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[62],&LnkLI62,ap);} /* COUNT */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

