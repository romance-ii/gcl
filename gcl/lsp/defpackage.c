
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
	V9= symbol_function(VV[64]);
	V10= (VFUN_NARGS=4,(*(LnkLI63))((V6),base[3],VV[4],V9));
	if(!(number_compare(small_fixnum(2),/* INLINE-ARGS */V10)<=0)){
	goto T30;}
	base[5]= VV[5];
	base[6]= VV[6];
	base[7]= (V6);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk65)();
	vs_top=sup;
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
	{object V11;
	object V12;
	object V13;
	object V14;
	register object V15;
	object V16;
	object V17;
	object V18;
	object V19;
	base[6]= VV[7];
	base[7]= base[3];
	vs_top=(vs_base=base+6)+2;
	L5(base);
	vs_top=sup;
	V22= vs_base[0];
	{object V20;
	object V21= V22;
	if(endp(V21)){
	V11= Cnil;
	goto T42;}
	base[5]=V20=MMcons(Cnil,Cnil);
goto T43;
T43:;
	(V20->c.c_car)= coerce_to_string((V21->c.c_car));
	V21=MMcdr(V21);
	if(endp(V21)){
	V11= base[5];
	goto T42;}
	V20=MMcdr(V20)=MMcons(Cnil,Cnil);
	goto T43;}
goto T42;
T42:;
	base[5]= VV[8];
	base[6]= base[3];
	vs_top=(vs_base=base+5)+2;
	L5(base);
	vs_top=sup;
	V23= vs_base[0];
	V12= car(V23);
	base[5]= VV[9];
	base[6]= base[3];
	vs_top=(vs_base=base+5)+2;
	L5(base);
	vs_top=sup;
	V24= vs_base[0];
	V13= car(V24);
	base[6]= VV[10];
	base[7]= base[3];
	vs_top=(vs_base=base+6)+2;
	L5(base);
	vs_top=sup;
	V27= vs_base[0];
	{object V25;
	object V26= V27;
	if(endp(V26)){
	V14= Cnil;
	goto T56;}
	base[5]=V25=MMcons(Cnil,Cnil);
goto T57;
T57:;
	(V25->c.c_car)= coerce_to_string((V26->c.c_car));
	V26=MMcdr(V26);
	if(endp(V26)){
	V14= base[5];
	goto T56;}
	V25=MMcdr(V25)=MMcons(Cnil,Cnil);
	goto T57;}
goto T56;
T56:;
	base[6]= VV[11];
	base[7]= base[3];
	vs_top=(vs_base=base+6)+2;
	L5(base);
	vs_top=sup;
	V30= vs_base[0];
	{object V28;
	object V29= V30;
	if(endp(V29)){
	V15= Cnil;
	goto T62;}
	base[5]=V28=MMcons(Cnil,Cnil);
goto T63;
T63:;
	(V28->c.c_car)= coerce_to_string((V29->c.c_car));
	V29=MMcdr(V29);
	if(endp(V29)){
	V15= base[5];
	goto T62;}
	V28=MMcdr(V28)=MMcons(Cnil,Cnil);
	goto T63;}
goto T62;
T62:;
	base[6]= VV[12];
	base[7]= base[3];
	vs_top=(vs_base=base+6)+2;
	L5(base);
	vs_top=sup;
	V33= vs_base[0];
	{object V31;
	object V32= V33;
	if(endp(V32)){
	V16= Cnil;
	goto T68;}
	base[5]=V31=MMcons(Cnil,Cnil);
goto T69;
T69:;
	(V31->c.c_car)= coerce_to_string((V32->c.c_car));
	V32=MMcdr(V32);
	if(endp(V32)){
	V16= base[5];
	goto T68;}
	V31=MMcdr(V31)=MMcons(Cnil,Cnil);
	goto T69;}
goto T68;
T68:;
	{register object V34;
	register object V35;
	base[5]= VV[13];
	base[6]= base[3];
	vs_top=(vs_base=base+5)+2;
	L4(base);
	vs_top=sup;
	V35= vs_base[0];
	V34= Cnil;
	{register object V36;
	register object V37;
	register object V38;
	V36= Cnil;
	V37= Cnil;
	V38= Cnil;
goto T79;
T79:;
	if(((V35))==Cnil){
	goto T82;}
	goto T81;
goto T82;
T82:;
	goto T80;
goto T81;
T81:;
	{register object V39;
	V39= car((V35));
	V34= (V39);}
	V40= coerce_to_string(car((V34)));
	{object V42;
	object V43= cdr((V34));
	if(endp(V43)){
	V41= Cnil;
	goto T89;}
	base[5]=V42=MMcons(Cnil,Cnil);
goto T90;
T90:;
	(V42->c.c_car)= coerce_to_string((V43->c.c_car));
	V43=MMcdr(V43);
	if(endp(V43)){
	V41= base[5];
	goto T89;}
	V42=MMcdr(V42)=MMcons(Cnil,Cnil);
	goto T90;}
goto T89;
T89:;
	V38= make_cons(/* INLINE-ARGS */V40,V41);
	if(((V37))==Cnil){
	goto T94;}
	{register object V44;
	register object V45;
	V44= (V37);
	V37= make_cons((V38),Cnil);
	V45= (V37);
	if(type_of((V44))!=t_cons)FEwrong_type_argument(Scons,(V44));
	((V44))->c.c_cdr = (V45);
	goto T92;}
goto T94;
T94:;
	V37= make_cons((V38),Cnil);
	V36= (V37);
goto T92;
T92:;
	V35= cdr((V35));
	goto T79;
goto T80;
T80:;
	V17= (V36);
	goto T74;
	V17= Cnil;
	goto T74;
	V17= Cnil;
	goto T74;}}
goto T74;
T74:;
	{register object V46;
	register object V47;
	base[5]= VV[14];
	base[6]= base[3];
	vs_top=(vs_base=base+5)+2;
	L4(base);
	vs_top=sup;
	V47= vs_base[0];
	V46= Cnil;
	{register object V48;
	register object V49;
	register object V50;
	V48= Cnil;
	V49= Cnil;
	V50= Cnil;
goto T111;
T111:;
	if(((V47))==Cnil){
	goto T114;}
	goto T113;
goto T114;
T114:;
	goto T112;
goto T113;
T113:;
	{register object V51;
	V51= car((V47));
	V46= (V51);}
	V52= coerce_to_string(car((V46)));
	{object V54;
	object V55= cdr((V46));
	if(endp(V55)){
	V53= Cnil;
	goto T121;}
	base[5]=V54=MMcons(Cnil,Cnil);
goto T122;
T122:;
	(V54->c.c_car)= coerce_to_string((V55->c.c_car));
	V55=MMcdr(V55);
	if(endp(V55)){
	V53= base[5];
	goto T121;}
	V54=MMcdr(V54)=MMcons(Cnil,Cnil);
	goto T122;}
goto T121;
T121:;
	V50= make_cons(/* INLINE-ARGS */V52,V53);
	if(((V49))==Cnil){
	goto T126;}
	{register object V56;
	register object V57;
	V56= (V49);
	V49= make_cons((V50),Cnil);
	V57= (V49);
	if(type_of((V56))!=t_cons)FEwrong_type_argument(Scons,(V56));
	((V56))->c.c_cdr = (V57);
	goto T124;}
goto T126;
T126:;
	V49= make_cons((V50),Cnil);
	V48= (V49);
goto T124;
T124:;
	V47= cdr((V47));
	goto T111;
goto T112;
T112:;
	V18= (V48);
	goto T106;
	V18= Cnil;
	goto T106;
	V18= Cnil;
	goto T106;}}
goto T106;
T106:;
	base[6]= VV[15];
	base[7]= base[3];
	vs_top=(vs_base=base+6)+2;
	L5(base);
	vs_top=sup;
	V60= vs_base[0];
	{object V58;
	object V59= V60;
	if(endp(V59)){
	V19= Cnil;
	goto T138;}
	base[5]=V58=MMcons(Cnil,Cnil);
goto T139;
T139:;
	(V58->c.c_car)= coerce_to_string((V59->c.c_car));
	V59=MMcdr(V59);
	if(endp(V59)){
	V19= base[5];
	goto T138;}
	V58=MMcdr(V58)=MMcons(Cnil,Cnil);
	goto T139;}
goto T138;
T138:;
	{register object V61;
	register object V62;
	base[5]= (V14);
	base[6]= (V15);
	{register object V63;
	register object V64;
	V63= Cnil;
	V64= (V17);
	{register object V65;
	register object V66;
	register object V67;
	V65= Cnil;
	V66= Cnil;
	V67= Cnil;
goto T151;
T151:;
	if(((V64))==Cnil){
	goto T154;}
	goto T153;
goto T154;
T154:;
	goto T152;
goto T153;
T153:;
	{register object V68;
	V68= car((V64));
	V63= (V68);}
	base[8]= cdr((V63));
	vs_top=(vs_base=base+8)+1;
	Lcopy_list();
	vs_top=sup;
	V67= vs_base[0];
	if(((V66))==Cnil){
	goto T164;}
	{register object V69;
	register object V70;
	V69= (V66);
	V70= (V67);
	if(type_of((V69))!=t_cons)FEwrong_type_argument(Scons,(V69));
	((V69))->c.c_cdr = (V70);
	if(((V70))!=Cnil){
	goto T166;}}
	goto T162;
goto T166;
T166:;
	base[8]= cdr((V66));
	vs_top=(vs_base=base+8)+1;
	Llast();
	vs_top=sup;
	V66= vs_base[0];
	goto T162;
goto T164;
T164:;
	V65= (V67);
	base[8]= (V65);
	vs_top=(vs_base=base+8)+1;
	Llast();
	vs_top=sup;
	V66= vs_base[0];
goto T162;
T162:;
	V64= cdr((V64));
	goto T151;
goto T152;
T152:;
	base[7]= (V65);
	goto T149;
	base[7]= Cnil;
	goto T149;
	base[7]= Cnil;
	goto T149;}}
goto T149;
T149:;
	{register object V71;
	register object V72;
	V71= Cnil;
	V72= (V18);
	{register object V73;
	register object V74;
	register object V75;
	V73= Cnil;
	V74= Cnil;
	V75= Cnil;
goto T182;
T182:;
	if(((V72))==Cnil){
	goto T185;}
	goto T184;
goto T185;
T185:;
	goto T183;
goto T184;
T184:;
	{register object V76;
	V76= car((V72));
	V71= (V76);}
	base[9]= cdr((V71));
	vs_top=(vs_base=base+9)+1;
	Lcopy_list();
	vs_top=sup;
	V75= vs_base[0];
	if(((V74))==Cnil){
	goto T195;}
	{register object V77;
	register object V78;
	V77= (V74);
	V78= (V75);
	if(type_of((V77))!=t_cons)FEwrong_type_argument(Scons,(V77));
	((V77))->c.c_cdr = (V78);
	if(((V78))!=Cnil){
	goto T197;}}
	goto T193;
goto T197;
T197:;
	base[9]= cdr((V74));
	vs_top=(vs_base=base+9)+1;
	Llast();
	vs_top=sup;
	V74= vs_base[0];
	goto T193;
goto T195;
T195:;
	V73= (V75);
	base[9]= (V73);
	vs_top=(vs_base=base+9)+1;
	Llast();
	vs_top=sup;
	V74= vs_base[0];
goto T193;
T193:;
	V72= cdr((V72));
	goto T182;
goto T183;
T183:;
	base[8]= (V73);
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
	V62= vs_base[0];
	V61= Cnil;
goto T212;
T212:;
	if(((V62))==Cnil){
	goto T215;}
	goto T214;
goto T215;
T215:;
	goto T213;
goto T214;
T214:;
	{register object V79;
	V79= car((V62));
	V61= (V79);}
	base[5]= VV[5];
	base[6]= VV[16];
	base[7]= car((V61));
	{register object V80;
	register object V81;
	V81= cdr((V61));
	V80= Cnil;
	{register object V82;
	register object V83;
	register object V84;
	V82= Cnil;
	V83= Cnil;
	V84= Cnil;
goto T227;
T227:;
	if(((V81))==Cnil){
	goto T230;}
	goto T229;
goto T230;
T230:;
	goto T228;
goto T229;
T229:;
	{register object V85;
	V85= car((V81));
	V80= (V85);}
	{object V86= (V80);
	if(!eql(V86,VV[17]))goto T237;
	V84= VV[10];
	goto T236;
goto T237;
T237:;
	if(!eql(V86,VV[18]))goto T238;
	V84= VV[11];
	goto T236;
goto T238;
T238:;
	if(!eql(V86,VV[19]))goto T239;
	V84= VV[13];
	goto T236;
goto T239;
T239:;
	if(!eql(V86,VV[20]))goto T240;
	V84= VV[14];
	goto T236;
goto T240;
T240:;
	V84= Cnil;}
goto T236;
T236:;
	if(((V83))==Cnil){
	goto T243;}
	{register object V87;
	register object V88;
	V87= (V83);
	V83= make_cons((V84),Cnil);
	V88= (V83);
	if(type_of((V87))!=t_cons)FEwrong_type_argument(Scons,(V87));
	((V87))->c.c_cdr = (V88);
	goto T241;}
goto T243;
T243:;
	V83= make_cons((V84),Cnil);
	V82= (V83);
goto T241;
T241:;
	V81= cdr((V81));
	goto T227;
goto T228;
T228:;
	base[8]= (V82);
	goto T224;
	base[8]= Cnil;
	goto T224;
	base[8]= Cnil;
	goto T224;}}
goto T224;
T224:;
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk65)();
	vs_top=sup;
	V62= cdr((V62));
	goto T212;
goto T213;
T213:;
	goto T145;
	goto T145;}
goto T145;
T145:;
	{register object V89;
	register object V90;
	base[5]= (V16);
	base[6]= (V15);
	vs_top=(vs_base=base+5)+2;
	L2(base);
	vs_top=sup;
	V90= vs_base[0];
	V89= Cnil;
goto T262;
T262:;
	if(((V90))==Cnil){
	goto T265;}
	goto T264;
goto T265;
T265:;
	goto T263;
goto T264;
T264:;
	{register object V91;
	V91= car((V90));
	V89= (V91);}
	base[5]= VV[5];
	base[6]= VV[21];
	base[7]= car((V89));
	{register object V92;
	register object V93;
	V93= cdr((V89));
	V92= Cnil;
	{register object V94;
	register object V95;
	register object V96;
	V94= Cnil;
	V95= Cnil;
	V96= Cnil;
goto T277;
T277:;
	if(((V93))==Cnil){
	goto T280;}
	goto T279;
goto T280;
T280:;
	goto T278;
goto T279;
T279:;
	{register object V97;
	V97= car((V93));
	V92= (V97);}
	{object V98= (V92);
	if(!eql(V98,VV[17]))goto T287;
	V96= VV[12];
	goto T286;
goto T287;
T287:;
	if(!eql(V98,VV[18]))goto T288;
	V96= VV[11];
	goto T286;
goto T288;
T288:;
	V96= Cnil;}
goto T286;
T286:;
	if(((V95))==Cnil){
	goto T291;}
	{register object V99;
	register object V100;
	V99= (V95);
	V95= make_cons((V96),Cnil);
	V100= (V95);
	if(type_of((V99))!=t_cons)FEwrong_type_argument(Scons,(V99));
	((V99))->c.c_cdr = (V100);
	goto T289;}
goto T291;
T291:;
	V95= make_cons((V96),Cnil);
	V94= (V95);
goto T289;
T289:;
	V93= cdr((V93));
	goto T277;
goto T278;
T278:;
	base[8]= (V94);
	goto T274;
	base[8]= Cnil;
	goto T274;
	base[8]= Cnil;
	goto T274;}}
goto T274;
T274:;
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk65)();
	vs_top=sup;
	V90= cdr((V90));
	goto T262;
goto T263;
T263:;
	goto T144;
	goto T144;}
goto T144;
T144:;
	V101= list(2,VV[27],base[2]);
	V102= list(3,VV[29],base[2],base[2]);
	if(((V11))==Cnil){
	goto T308;}
	V104= list(4,VV[29],base[2],base[2],list(2,VV[30],(V11)));
	V103= make_cons(/* INLINE-ARGS */V104,Cnil);
	goto T306;
goto T308;
T308:;
	V103= Cnil;
goto T306;
T306:;
	base[5]= VV[31];
	base[6]= base[3];
	base[7]= VV[4];
	base[8]= symbol_function(VV[64]);
	vs_top=(vs_base=base+5)+4;
	Lmember();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T312;}
	V106= list(3,VV[32],list(2,VV[33],list(2,VV[27],base[2])),base[2]);
	V105= make_cons(/* INLINE-ARGS */V106,Cnil);
	goto T310;
goto T312;
T312:;
	V105= Cnil;
goto T310;
T310:;
	V107= listA(3,VV[28],/* INLINE-ARGS */V102,append(V103,V105));
	V108= list(2,VV[30],(V11));
	if(((V13))==Cnil){
	goto T320;}
	V109= Cnil;
	goto T318;
goto T320;
T320:;
	V109= Cnil;
goto T318;
T318:;
	V110= list(4,VV[26],/* INLINE-ARGS */V101,/* INLINE-ARGS */V107,listA(7,VV[34],base[2],VV[35],VV[36],VV[37],/* INLINE-ARGS */V108,V109));
	base[5]= base[2];
	base[6]= VV[40];
	vs_top=(vs_base=base+5)+2;
	Lintern();
	vs_top=sup;
	V111= vs_base[0];
	V112= list(3,VV[38],list(3,VV[39],list(2,VV[30],V111),VV[41]),(V12));
	V113= make_cons(/* INLINE-ARGS */V112,Cnil);
	V114= list(2,VV[43],list(2,VV[27],base[2]));
	V115= make_cons(/* INLINE-ARGS */V114,Cnil);
	if(((V14))==Cnil){
	goto T328;}
	V117= list(2,VV[44],list(3,VV[45],VV[46],list(2,VV[30],(V14))));
	base[5]= make_cons(/* INLINE-ARGS */V117,Cnil);
	goto T326;
goto T328;
T328:;
	base[5]= Cnil;
goto T326;
T326:;
	if(((V17))==Cnil){
	goto T332;}
	{object V118;
	object V119= (V17);
	if(endp(V119)){
	base[6]= Cnil;
	goto T330;}
	base[7]=V118=MMcons(Cnil,Cnil);
goto T334;
T334:;
	V121= list(2,VV[48],list(3,VV[49],VV[50],list(3,VV[51],VV[52],car((V119->c.c_car)))));
	(V118->c.c_car)= list(2,VV[47],list(3,VV[45],/* INLINE-ARGS */V121,list(2,VV[30],cdr((V119->c.c_car)))));
	V119=MMcdr(V119);
	if(endp(V119)){
	base[6]= base[7];
	goto T330;}
	V118=MMcdr(V118)=MMcons(Cnil,Cnil);
	goto T334;}
goto T332;
T332:;
	base[6]= Cnil;
goto T330;
T330:;
	base[8]= VV[31];
	base[9]= base[3];
	base[10]= VV[22];
	base[11]= (base[4]->c.c_car);
	vs_top=(vs_base=base+8)+4;
	Lmember();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T339;}
	base[9]= VV[31];
	base[10]= base[3];
	vs_top=(vs_base=base+9)+2;
	L5(base);
	vs_top=sup;
	V125= vs_base[0];
	{object V123;
	object V124= V125;
	if(endp(V124)){
	V122= Cnil;
	goto T337;}
	base[8]=V123=MMcons(Cnil,Cnil);
goto T345;
T345:;
	(V123->c.c_car)= coerce_to_string((V124->c.c_car));
	V124=MMcdr(V124);
	if(endp(V124)){
	V122= base[8];
	goto T337;}
	V123=MMcdr(V123)=MMcons(Cnil,Cnil);
	goto T345;}
goto T339;
T339:;
	V122= VV[54];
goto T337;
T337:;
	V126= list(2,VV[53],list(2,VV[30],V122));
	if(((V18))==Cnil){
	goto T353;}
	{object V128;
	object V129= (V18);
	if(endp(V129)){
	base[8]= Cnil;
	goto T351;}
	base[9]=V128=MMcons(Cnil,Cnil);
goto T355;
T355:;
	V131= list(2,VV[48],list(3,VV[49],VV[56],list(3,VV[51],VV[52],car((V129->c.c_car)))));
	(V128->c.c_car)= list(2,VV[55],list(3,VV[45],/* INLINE-ARGS */V131,list(2,VV[30],cdr((V129->c.c_car)))));
	V129=MMcdr(V129);
	if(endp(V129)){
	base[8]= base[9];
	goto T351;}
	V128=MMcdr(V128)=MMcons(Cnil,Cnil);
	goto T355;}
goto T353;
T353:;
	base[8]= Cnil;
goto T351;
T351:;
	if(((V15))==Cnil){
	goto T359;}
	V132= list(3,VV[45],VV[57],list(2,VV[30],(V15)));
	base[9]= make_cons(/* INLINE-ARGS */V132,Cnil);
	goto T357;
goto T359;
T359:;
	base[9]= Cnil;
goto T357;
T357:;
	if(((V16))==Cnil){
	goto T363;}
	V133= list(2,VV[58],list(3,VV[45],VV[59],list(2,VV[30],(V16))));
	base[10]= make_cons(/* INLINE-ARGS */V133,Cnil);
	goto T361;
goto T363;
T363:;
	base[10]= Cnil;
goto T361;
T361:;
	if(((V19))==Cnil){
	goto T367;}
	V134= list(3,VV[60],list(2,VV[61],list(2,VV[30],(V19))),VV[62]);
	base[11]= make_cons(/* INLINE-ARGS */V134,Cnil);
	goto T365;
goto T367;
T367:;
	base[11]= Cnil;
goto T365;
T365:;
	vs_top=(vs_base=base+8)+4;
	Lappend();
	vs_top=sup;
	V127= vs_base[0];
	base[7]= make_cons(/* INLINE-ARGS */V126,V127);
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V116= vs_base[0];
	V135= listA(3,VV[42],/* INLINE-ARGS */V115,V116);
	V136= list(2,/* INLINE-ARGS */V135,list(2,VV[27],base[2]));
	base[5]= listA(4,VV[24],VV[25],/* INLINE-ARGS */V110,append(/* INLINE-ARGS */V113,/* INLINE-ARGS */V136));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local function FIND-DUPLICATES	*/

static void L2(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	{object V137;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V137=(base[0]);
	vs_top=sup;
	{object V138;
	V138= Cnil;
	{object V139;
	object V140;
	V139= Cnil;
	V140= (V137);
	{object V141;
	V141= cdr((V137));
	{register long V142;
	V142= 1;
goto T373;
T373:;
	if(((V141))==Cnil){
	goto T376;}
	goto T375;
goto T376;
T376:;
	goto T374;
goto T375;
T375:;
	if(((V140))==Cnil){
	goto T379;}
	goto T378;
goto T379;
T379:;
	goto T374;
goto T378;
T378:;
	{object V143;
	V143= car((V140));
	V139= (V143);}
	{register object V144;
	register object V145;
	V144= Cnil;
	V145= (V139);
	{register object V146;
	V146= Cnil;
goto T386;
T386:;
	if(((V145))==Cnil){
	goto T389;}
	goto T388;
goto T389;
T389:;
	goto T387;
goto T388;
T388:;
	{object V147;
	V147= car((V145));
	V144= (V147);}
	{object V148;
	V149= symbol_function(VV[64]);
	V150= symbol_function(VV[67]);
	V148= (VFUN_NARGS=6,(*(LnkLI66))((V144),(V138),VV[4],V149,VV[22],V150));
	V146= (V148);}
	V152 = make_fixnum(V142);
	{register object x= V152,V151= (V146);
	while(!endp(V151))
	if(eql(x,V151->c.c_car)){
	goto T399;
	}else V151=V151->c.c_cdr;}
	{object V153;
	register object V154;
	V153= Cnil;
	V154= (V141);
	{register long V155;
	{object V156;
	V157 = make_fixnum(V142);
	V156= one_plus(V157);{object V158;
	V158= (type_of((V156))==t_fixnum?Ct:Cnil);
	if(V158==Cnil)goto T405;
	goto T404;
goto T405;
T405:;}
	(void)((*(LnkLI68))());
goto T404;
T404:;
	V155= fix((V156));}
goto T408;
T408:;
	if(((V154))==Cnil){
	goto T411;}
	goto T410;
goto T411;
T411:;
	goto T409;
goto T410;
T410:;
	{object V159;
	V159= car((V154));
	V153= (V159);}
	base[1]= (V144);
	base[2]= (V153);
	base[3]= VV[22];
	base[4]= symbol_function(VV[67]);
	vs_top=(vs_base=base+1)+4;
	Lmember();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T416;}
	if(((V146))==Cnil){
	goto T424;}
	V160 = make_fixnum(V155);
	V161= make_cons(V160,Cnil);
	(void)(nconc((V146),/* INLINE-ARGS */V161));
	goto T416;
goto T424;
T424:;
	{object V163;
	V164 = make_fixnum(V142);
	V165 = make_fixnum(V155);
	V163= list(3,(V144),V164,V165);
	V138= make_cons((V163),(V138));
	V162= (V138);}
	V146= car(V162);
goto T416;
T416:;
	V154= cdr((V154));
	if(!((V155)<(2147483646))){
	goto T433;}
	goto T432;
goto T433;
T433:;
	(void)((*(LnkLI68))());
goto T432;
T432:;
	V155= (long)(V155)+(1);
	goto T408;
goto T409;
T409:;
	goto T399;
	goto T399;}}
goto T399;
T399:;
	V145= cdr((V145));
	goto T386;
goto T387;
T387:;
	goto T384;
	goto T384;}}
goto T384;
T384:;
	V140= cdr((V140));
	V141= cdr((V141));
	if(!((V142)<(2147483646))){
	goto T446;}
	goto T445;
goto T446;
T446:;
	(void)((*(LnkLI68))());
goto T445;
T445:;
	V142= (long)(V142)+(1);
	goto T373;
goto T374;
T374:;
	goto T369;
	goto T369;}}}
goto T369;
T369:;
	base[1]= (V138);
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
	{object V166;
	object V167;
	check_arg(2);
	V166=(base[0]);
	V167=(base[1]);
	vs_top=sup;
	if(!(type_of((V167))==t_cons)){
	goto T452;}
	base[2]= (equal(car((V167)),(V166))?Ct:Cnil);
	vs_top=(vs_base=base+2)+1;
	return;
goto T452;
T452:;
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
	{object V168;
	object V169;
	check_arg(2);
	V168=(base[0]);
	V169=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V170;
	V170= Cnil;
	{object V171;
	register object V172;
	register object V173;
	V171= Cnil;
	V172= Cnil;
	V173= Cnil;
	{object V174;
	base[2]= (V168);
	base[3]= (V169);
	base[4]= VV[22];
	base[5]= (base0[4]->c.c_car);
	vs_top=(vs_base=base+2)+4;
	Lmember();
	vs_top=sup;
	V174= vs_base[0];
	V170= (V174);}
goto T455;
T455:;
	if(((V170))==Cnil){
	goto T464;}
	goto T463;
goto T464;
T464:;
	goto T456;
goto T463;
T463:;
	if(((V170))==Cnil){
	goto T466;}
	base[2]= cdr(car((V170)));
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	V173= vs_base[0];
	if(((V172))==Cnil){
	goto T473;}
	{register object V175;
	register object V176;
	V175= (V172);
	V176= (V173);
	if(type_of((V175))!=t_cons)FEwrong_type_argument(Scons,(V175));
	((V175))->c.c_cdr = (V176);
	if(((V176))!=Cnil){
	goto T475;}}
	goto T466;
goto T475;
T475:;
	base[2]= cdr((V172));
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V172= vs_base[0];
	goto T466;
goto T473;
T473:;
	V171= (V173);
	base[2]= (V171);
	vs_top=(vs_base=base+2)+1;
	Llast();
	vs_top=sup;
	V172= vs_base[0];
goto T466;
T466:;
	{register object V177;
	base[2]= (V168);
	base[3]= cdr((V170));
	base[4]= VV[22];
	base[5]= (base0[4]->c.c_car);
	vs_top=(vs_base=base+2)+4;
	Lmember();
	vs_top=sup;
	V177= vs_base[0];
	V170= (V177);}
	goto T455;
goto T456;
T456:;
	base[2]= (V171);
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
	{object V178;
	object V179;
	check_arg(2);
	V178=(base[0]);
	V179=(base[1]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V180;
	V180= Cnil;
	{object V181;
	register object V182;
	register object V183;
	V181= Cnil;
	V182= Cnil;
	V183= Cnil;
	{object V184;
	base[2]= (V178);
	base[3]= (V179);
	base[4]= VV[22];
	base[5]= (base0[4]->c.c_car);
	vs_top=(vs_base=base+2)+4;
	Lmember();
	vs_top=sup;
	V184= vs_base[0];
	V180= (V184);}
goto T495;
T495:;
	if(((V180))==Cnil){
	goto T504;}
	goto T503;
goto T504;
T504:;
	goto T496;
goto T503;
T503:;
	if(((V180))==Cnil){
	goto T506;}
	V183= cdr(car((V180)));
	if(((V182))==Cnil){
	goto T512;}
	{register object V185;
	register object V186;
	V185= (V182);
	V182= make_cons((V183),Cnil);
	V186= (V182);
	if(type_of((V185))!=t_cons)FEwrong_type_argument(Scons,(V185));
	((V185))->c.c_cdr = (V186);
	goto T506;}
goto T512;
T512:;
	V182= make_cons((V183),Cnil);
	V181= (V182);
goto T506;
T506:;
	{register object V187;
	base[2]= (V178);
	base[3]= cdr((V180));
	base[4]= VV[22];
	base[5]= (base0[4]->c.c_car);
	vs_top=(vs_base=base+2)+4;
	Lmember();
	vs_top=sup;
	V187= vs_base[0];
	V180= (V187);}
	goto T495;
goto T496;
T496:;
	base[2]= (V181);
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
static object  LnkTLI68(){return call_proc0(VV[68],(void **)&LnkLI68);} /* TYPE-ERROR */
static object  LnkTLI66(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[66],(void **)&LnkLI66,ap);va_end(ap);return V1;} /* FIND */
static void LnkT65(){ call_or_link(VV[65],(void **)&Lnk65);} /* SPECIFIC-ERROR */
static object  LnkTLI63(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[63],(void **)&LnkLI63,ap);va_end(ap);return V1;} /* COUNT */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

