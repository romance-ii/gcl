
#include "cmpinclude.h"
#include "defpackage.h"
void init_defpackage(){do_init(VV);}
/*	macro definition for DEFPACKAGE	*/

static void L1()
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
goto T3;
T3:;
	if(((V3))==Cnil){
	goto T6;}
	goto T5;
goto T6;
T6:;
	goto T4;
goto T5;
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
goto T11;
T11:;
	V3= cdr((V3));
	goto T3;
goto T4;
T4:;
	goto T1;
	goto T1;}
goto T1;
T1:;
	base[4]=MMcons(Cnil,Cnil);
	(base[4]->c.c_car)=make_cclosure_new(LC3,Cnil,base[4],Cdata);
	{register object V6;
	register object V7;
	V6= Cnil;
	V7= VV[3];
goto T22;
T22:;
	if(((V7))==Cnil){
	goto T25;}
	goto T24;
goto T25;
T25:;
	goto T23;
goto T24;
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
goto T30;
T30:;
	V7= cdr((V7));
	goto T22;
goto T23;
T23:;
	goto T20;
	goto T20;}
goto T20;
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
goto T43;
T43:;
	(V21->c.c_car)= coerce_to_string((V22->c.c_car));
	V22=MMcdr(V22);
	if(endp(V22)){
	V12= base[5];
	goto T42;}
	V21=MMcdr(V21)=MMcons(Cnil,Cnil);
	goto T43;}
goto T42;
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
goto T57;
T57:;
	(V26->c.c_car)= coerce_to_string((V27->c.c_car));
	V27=MMcdr(V27);
	if(endp(V27)){
	V15= base[5];
	goto T56;}
	V26=MMcdr(V26)=MMcons(Cnil,Cnil);
	goto T57;}
goto T56;
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
goto T63;
T63:;
	(V29->c.c_car)= coerce_to_string((V30->c.c_car));
	V30=MMcdr(V30);
	if(endp(V30)){
	V16= base[5];
	goto T62;}
	V29=MMcdr(V29)=MMcons(Cnil,Cnil);
	goto T63;}
goto T62;
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
goto T69;
T69:;
	(V32->c.c_car)= coerce_to_string((V33->c.c_car));
	V33=MMcdr(V33);
	if(endp(V33)){
	V17= base[5];
	goto T68;}
	V32=MMcdr(V32)=MMcons(Cnil,Cnil);
	goto T69;}
goto T68;
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
goto T79;
T79:;
	if(((V36))==Cnil){
	goto T82;}
	goto T81;
goto T82;
T82:;
	goto T80;
goto T81;
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
goto T90;
T90:;
	(V43->c.c_car)= coerce_to_string((V44->c.c_car));
	V44=MMcdr(V44);
	if(endp(V44)){
	V42= base[5];
	goto T89;}
	V43=MMcdr(V43)=MMcons(Cnil,Cnil);
	goto T90;}
goto T89;
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
goto T94;
T94:;
	V38= make_cons((V39),Cnil);
	V37= (V38);
goto T92;
T92:;
	V36= cdr((V36));
	goto T79;
goto T80;
T80:;
	V18= (V37);
	goto T74;
	V18= Cnil;
	goto T74;
	V18= Cnil;
	goto T74;}}
goto T74;
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
goto T111;
T111:;
	if(((V48))==Cnil){
	goto T114;}
	goto T113;
goto T114;
T114:;
	goto T112;
goto T113;
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
goto T122;
T122:;
	(V55->c.c_car)= coerce_to_string((V56->c.c_car));
	V56=MMcdr(V56);
	if(endp(V56)){
	V54= base[5];
	goto T121;}
	V55=MMcdr(V55)=MMcons(Cnil,Cnil);
	goto T122;}
goto T121;
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
goto T126;
T126:;
	V50= make_cons((V51),Cnil);
	V49= (V50);
goto T124;
T124:;
	V48= cdr((V48));
	goto T111;
goto T112;
T112:;
	V19= (V49);
	goto T106;
	V19= Cnil;
	goto T106;
	V19= Cnil;
	goto T106;}}
goto T106;
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
goto T139;
T139:;
	(V59->c.c_car)= coerce_to_string((V60->c.c_car));
	V60=MMcdr(V60);
	if(endp(V60)){
	V20= base[5];
	goto T138;}
	V59=MMcdr(V59)=MMcons(Cnil,Cnil);
	goto T139;}
goto T138;
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
goto T151;
T151:;
	if(((V65))==Cnil){
	goto T154;}
	goto T153;
goto T154;
T154:;
	goto T152;
goto T153;
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
goto T166;
T166:;
	base[8]= cdr((V67));
	vs_top=(vs_base=base+8)+1;
	Llast();
	vs_top=sup;
	V67= vs_base[0];
	goto T162;
goto T164;
T164:;
	V66= (V68);
	base[8]= (V66);
	vs_top=(vs_base=base+8)+1;
	Llast();
	vs_top=sup;
	V67= vs_base[0];
goto T162;
T162:;
	V65= cdr((V65));
	goto T151;
goto T152;
T152:;
	base[7]= (V66);
	goto T149;
	base[7]= Cnil;
	goto T149;
	base[7]= Cnil;
	goto T149;}}
goto T149;
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
goto T182;
T182:;
	if(((V73))==Cnil){
	goto T185;}
	goto T184;
goto T185;
T185:;
	goto T183;
goto T184;
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
goto T197;
T197:;
	base[9]= cdr((V75));
	vs_top=(vs_base=base+9)+1;
	Llast();
	vs_top=sup;
	V75= vs_base[0];
	goto T193;
goto T195;
T195:;
	V74= (V76);
	base[9]= (V74);
	vs_top=(vs_base=base+9)+1;
	Llast();
	vs_top=sup;
	V75= vs_base[0];
goto T193;
T193:;
	V73= cdr((V73));
	goto T182;
goto T183;
T183:;
	base[8]= (V74);
	goto T180;
	base[8]= Cnil;
	goto T180;
	base[8]= Cnil;
	goto T180;}}
goto T180;
T180:;
	vs_top=(vs_base=base+5)+4;
	L2(base);
	vs_top=sup;
	V63= vs_base[0];
	V62= Cnil;
goto T212;
T212:;
	if(((V63))==Cnil){
	goto T215;}
	goto T214;
goto T215;
T215:;
	goto T213;
goto T214;
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
goto T226;
T226:;
	if(((V82))==Cnil){
	goto T229;}
	goto T228;
goto T229;
T229:;
	goto T227;
goto T228;
T228:;
	{register object V86;
	V86= car((V82));
	V81= (V86);}
	{object V87= (V81);
	if(!eql(V87,VV[16]))goto T236;
	V85= VV[9];
	goto T235;
goto T236;
T236:;
	if(!eql(V87,VV[17]))goto T237;
	V85= VV[10];
	goto T235;
goto T237;
T237:;
	if(!eql(V87,VV[18]))goto T238;
	V85= VV[12];
	goto T235;
goto T238;
T238:;
	if(!eql(V87,VV[19]))goto T239;
	V85= VV[13];
	goto T235;
goto T239;
T239:;
	V85= Cnil;}
goto T235;
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
goto T242;
T242:;
	V84= make_cons((V85),Cnil);
	V83= (V84);
goto T240;
T240:;
	V82= cdr((V82));
	goto T226;
goto T227;
T227:;
	base[7]= (V83);
	goto T223;
	base[7]= Cnil;
	goto T223;
	base[7]= Cnil;
	goto T223;}}
goto T223;
T223:;
	vs_top=(vs_base=base+5)+3;
	Lerror();
	vs_top=sup;
	V63= cdr((V63));
	goto T212;
goto T213;
T213:;
	goto T145;
	goto T145;}
goto T145;
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
goto T261;
T261:;
	if(((V91))==Cnil){
	goto T264;}
	goto T263;
goto T264;
T264:;
	goto T262;
goto T263;
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
goto T275;
T275:;
	if(((V94))==Cnil){
	goto T278;}
	goto T277;
goto T278;
T278:;
	goto T276;
goto T277;
T277:;
	{register object V98;
	V98= car((V94));
	V93= (V98);}
	{object V99= (V93);
	if(!eql(V99,VV[16]))goto T285;
	V97= VV[11];
	goto T284;
goto T285;
T285:;
	if(!eql(V99,VV[17]))goto T286;
	V97= VV[10];
	goto T284;
goto T286;
T286:;
	V97= Cnil;}
goto T284;
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
goto T289;
T289:;
	V96= make_cons((V97),Cnil);
	V95= (V96);
goto T287;
T287:;
	V94= cdr((V94));
	goto T275;
goto T276;
T276:;
	base[7]= (V95);
	goto T272;
	base[7]= Cnil;
	goto T272;
	base[7]= Cnil;
	goto T272;}}
goto T272;
T272:;
	vs_top=(vs_base=base+5)+3;
	Lerror();
	vs_top=sup;
	V91= cdr((V91));
	goto T261;
goto T262;
T262:;
	goto T144;
	goto T144;}
goto T144;
T144:;
	V102= list(2,VV[26],base[2]);
	V103= list(3,VV[28],base[2],base[2]);
	if(((V12))==Cnil){
	goto T306;}
	V105= list(4,VV[28],base[2],base[2],list(2,VV[29],(V12)));
	V104= make_cons(/* INLINE-ARGS */V105,Cnil);
	goto T304;
goto T306;
T306:;
	V104= Cnil;
goto T304;
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
goto T310;
T310:;
	V106= Cnil;
goto T308;
T308:;
	V108= listA(3,VV[27],/* INLINE-ARGS */V103,append(V104,V106));
	V109= list(2,VV[29],(V12));
	if(((V14))==Cnil){
	goto T318;}
	V110= Cnil;
	goto T316;
goto T318;
T318:;
	V110= Cnil;
goto T316;
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
goto T322;
T322:;
	V112= Cnil;
goto T320;
T320:;
	V115= list(2,VV[42],list(2,VV[26],base[2]));
	V116= make_cons(/* INLINE-ARGS */V115,Cnil);
	if(((V15))==Cnil){
	goto T330;}
	V118= list(2,VV[43],list(3,VV[44],VV[45],list(2,VV[29],(V15))));
	base[5]= make_cons(/* INLINE-ARGS */V118,Cnil);
	goto T328;
goto T330;
T330:;
	base[5]= Cnil;
goto T328;
T328:;
	if(((V18))==Cnil){
	goto T334;}
	{object V119;
	object V120= (V18);
	if(endp(V120)){
	base[6]= Cnil;
	goto T332;}
	base[7]=V119=MMcons(Cnil,Cnil);
goto T336;
T336:;
	V122= list(2,VV[47],list(3,VV[48],VV[49],list(3,VV[50],VV[51],car((V120->c.c_car)))));
	(V119->c.c_car)= list(2,VV[46],list(3,VV[44],/* INLINE-ARGS */V122,list(2,VV[29],cdr((V120->c.c_car)))));
	V120=MMcdr(V120);
	if(endp(V120)){
	base[6]= base[7];
	goto T332;}
	V119=MMcdr(V119)=MMcons(Cnil,Cnil);
	goto T336;}
goto T334;
T334:;
	base[6]= Cnil;
goto T332;
T332:;
	base[8]= VV[30];
	base[9]= base[3];
	base[10]= VV[21];
	base[11]= (base[4]->c.c_car);
	vs_top=(vs_base=base+8)+4;
	Lmember();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T341;}
	base[9]= VV[30];
	base[10]= base[3];
	vs_top=(vs_base=base+9)+2;
	L5(base);
	vs_top=sup;
	V126= vs_base[0];
	{object V124;
	object V125= V126;
	if(endp(V125)){
	V123= Cnil;
	goto T339;}
	base[8]=V124=MMcons(Cnil,Cnil);
goto T347;
T347:;
	(V124->c.c_car)= coerce_to_string((V125->c.c_car));
	V125=MMcdr(V125);
	if(endp(V125)){
	V123= base[8];
	goto T339;}
	V124=MMcdr(V124)=MMcons(Cnil,Cnil);
	goto T347;}
goto T341;
T341:;
	V123= VV[53];
goto T339;
T339:;
	V127= list(2,VV[52],list(2,VV[29],V123));
	if(((V19))==Cnil){
	goto T355;}
	{object V129;
	object V130= (V19);
	if(endp(V130)){
	base[8]= Cnil;
	goto T353;}
	base[9]=V129=MMcons(Cnil,Cnil);
goto T357;
T357:;
	V132= list(2,VV[47],list(3,VV[48],VV[55],list(3,VV[50],VV[51],car((V130->c.c_car)))));
	(V129->c.c_car)= list(2,VV[54],list(3,VV[44],/* INLINE-ARGS */V132,list(2,VV[29],cdr((V130->c.c_car)))));
	V130=MMcdr(V130);
	if(endp(V130)){
	base[8]= base[9];
	goto T353;}
	V129=MMcdr(V129)=MMcons(Cnil,Cnil);
	goto T357;}
goto T355;
T355:;
	base[8]= Cnil;
goto T353;
T353:;
	if(((V16))==Cnil){
	goto T361;}
	V133= list(3,VV[44],VV[56],list(2,VV[29],(V16)));
	base[9]= make_cons(/* INLINE-ARGS */V133,Cnil);
	goto T359;
goto T361;
T361:;
	base[9]= Cnil;
goto T359;
T359:;
	if(((V17))==Cnil){
	goto T365;}
	V134= list(2,VV[57],list(3,VV[44],VV[58],list(2,VV[29],(V17))));
	base[10]= make_cons(/* INLINE-ARGS */V134,Cnil);
	goto T363;
goto T365;
T365:;
	base[10]= Cnil;
goto T363;
T363:;
	if(((V20))==Cnil){
	goto T369;}
	V135= list(3,VV[59],list(2,VV[60],list(2,VV[29],(V20))),VV[61]);
	base[11]= make_cons(/* INLINE-ARGS */V135,Cnil);
	goto T367;
goto T369;
T369:;
	base[11]= Cnil;
goto T367;
T367:;
	vs_top=(vs_base=base+8)+4;
	Lappend();
	vs_top=sup;
	V128= vs_base[0];
	base[7]= make_cons(/* INLINE-ARGS */V127,V128);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V117= vs_base[0];
	V136= listA(3,VV[41],/* INLINE-ARGS */V116,V117);
	V137= list(2,/* INLINE-ARGS */V136,list(2,VV[26],base[2]));
	base[5]= listA(4,VV[23],VV[24],/* INLINE-ARGS */V111,append(V112,/* INLINE-ARGS */V137));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local function FIND-DUPLICATES	*/

static void L2(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	{object V138;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V138=(base[0]);
	vs_top=sup;
	{object V139;
	V139= Cnil;
	{object V140;
	object V141;
	V140= Cnil;
	V141= (V138);
	{object V142;
	V142= cdr((V138));
	{register long V143;
	V143= 1;
goto T375;
T375:;
	if(((V142))==Cnil){
	goto T378;}
	goto T377;
goto T378;
T378:;
	goto T376;
goto T377;
T377:;
	if(((V141))==Cnil){
	goto T381;}
	goto T380;
goto T381;
T381:;
	goto T376;
goto T380;
T380:;
	{object V144;
	V144= car((V141));
	V140= (V144);}
	{register object V145;
	register object V146;
	V145= Cnil;
	V146= (V140);
	{register object V147;
	V147= Cnil;
goto T388;
T388:;
	if(((V146))==Cnil){
	goto T391;}
	goto T390;
goto T391;
T391:;
	goto T389;
goto T390;
T390:;
	{object V148;
	V148= car((V146));
	V145= (V148);}
	{object V149;
	V150= symbol_function(VV[63]);
	V151= symbol_function(VV[66]);
	V149= (VFUN_NARGS=6,(*(LnkLI65))((V145),(V139),VV[4],V150,VV[21],V151));
	V147= (V149);}
	V153 = make_fixnum(V143);
	{register object x= V153,V152= (V147);
	while(!endp(V152))
	if(eql(x,V152->c.c_car)){
	goto T401;
	}else V152=V152->c.c_cdr;}
	{object V154;
	register object V155;
	V154= Cnil;
	V155= (V142);
	{register long V156;
	{object V157;
	V158 = make_fixnum(V143);
	V157= one_plus(V158);{object V159;
	V159= (type_of((V157))==t_fixnum?Ct:Cnil);
	if(V159==Cnil)goto T407;
	goto T406;
goto T407;
T407:;}
	(void)((*(LnkLI67))());
goto T406;
T406:;
	V156= fix((V157));}
goto T410;
T410:;
	if(((V155))==Cnil){
	goto T413;}
	goto T412;
goto T413;
T413:;
	goto T411;
goto T412;
T412:;
	{object V160;
	V160= car((V155));
	V154= (V160);}
	base[1]= (V145);
	base[2]= (V154);
	base[3]= VV[21];
	base[4]= symbol_function(VV[66]);
	vs_top=(vs_base=base+1)+4;
	Lmember();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T418;}
	if(((V147))==Cnil){
	goto T426;}
	V161 = make_fixnum(V156);
	V162= make_cons(V161,Cnil);
	(void)(nconc((V147),/* INLINE-ARGS */V162));
	goto T418;
goto T426;
T426:;
	{object V164;
	V165 = make_fixnum(V143);
	V166 = make_fixnum(V156);
	V164= list(3,(V145),V165,V166);
	V139= make_cons((V164),(V139));
	V163= (V139);}
	V147= car(V163);
goto T418;
T418:;
	V155= cdr((V155));
	if(!((V156)<(2147483646))){
	goto T435;}
	goto T434;
goto T435;
T435:;
	(void)((*(LnkLI67))());
goto T434;
T434:;
	V156= (long)(V156)+(1);
	goto T410;
goto T411;
T411:;
	goto T401;
	goto T401;}}
goto T401;
T401:;
	V146= cdr((V146));
	goto T388;
goto T389;
T389:;
	goto T386;
	goto T386;}}
goto T386;
T386:;
	V141= cdr((V141));
	V142= cdr((V142));
	if(!((V143)<(2147483646))){
	goto T448;}
	goto T447;
goto T448;
T448:;
	(void)((*(LnkLI67))());
goto T447;
T447:;
	V143= (long)(V143)+(1);
	goto T375;
goto T376;
T376:;
	goto T371;
	goto T371;}}}
goto T371;
T371:;
	base[1]= (V139);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function OPTION-TEST	*/

static void LC3(base0)
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
	goto T454;}
	base[2]= (equal(car((V168)),(V167))?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T454;
T454:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function OPTION-VALUES	*/

static void L5(base0)
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
goto TTL;
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
goto T457;
T457:;
	if(((V171))==Cnil){
	goto T466;}
	goto T465;
goto T466;
T466:;
	goto T458;
goto T465;
T465:;
	if(((V171))==Cnil){
	goto T468;}
	base[2]= cdr(car((V171)));
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	V174= vs_base[0];
	if(((V173))==Cnil){
	goto T475;}
	{register object V176;
	register object V177;
	V176= (V173);
	V177= (V174);
	if(type_of((V176))!=t_cons)FEwrong_type_argument(Scons,(V176));
	((V176))->c.c_cdr = (V177);
	if(((V177))!=Cnil){
	goto T477;}}
	goto T468;
goto T477;
T477:;
	base[2]= cdr((V173));
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V173= vs_base[0];
	goto T468;
goto T475;
T475:;
	V172= (V174);
	base[2]= (V172);
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V173= vs_base[0];
goto T468;
T468:;
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
	goto T457;
goto T458;
T458:;
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

static void L4(base0)
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
goto TTL;
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
goto T497;
T497:;
	if(((V181))==Cnil){
	goto T506;}
	goto T505;
goto T506;
T506:;
	goto T498;
goto T505;
T505:;
	if(((V181))==Cnil){
	goto T508;}
	V184= cdr(car((V181)));
	if(((V183))==Cnil){
	goto T514;}
	{register object V186;
	register object V187;
	V186= (V183);
	V183= make_cons((V184),Cnil);
	V187= (V183);
	if(type_of((V186))!=t_cons)FEwrong_type_argument(Scons,(V186));
	((V186))->c.c_cdr = (V187);
	goto T508;}
goto T514;
T514:;
	V183= make_cons((V184),Cnil);
	V182= (V183);
goto T508;
T508:;
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
	goto T497;
goto T498;
T498:;
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
static object  LnkTLI67(){return call_proc0(VV[67],(void **)&LnkLI67);} /* TYPE-ERROR */
static object  LnkTLI65(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[65],(void **)&LnkLI65,ap);va_end(ap);return V1;} /* FIND */
static object  LnkTLI64(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[64],(void **)&LnkLI64,ap);va_end(ap);return V1;} /* WARN */
static object  LnkTLI62(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[62],(void **)&LnkLI62,ap);va_end(ap);return V1;} /* COUNT */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

