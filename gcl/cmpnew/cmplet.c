
#include "cmpinclude.h"
#include "cmplet.h"
init_cmplet(){do_init(VV);}
/*	local entry for function C1LET	*/

static object LI1(V2)

object V2;
{	 VMB1 VMS1 VMV1
	bds_check;
TTL:;
	{object V3;
	object V4;
	register object V5;
	register object V6;
	register object V7;
	object V8;
	object V9;
	object V10;
	object V11;
	object V12;
	V3= (VFUN_NARGS=0,(*(LnkLI39))());
	V4= symbol_value(VV[0]);
	V5= Cnil;
	V6= Cnil;
	V7= Cnil;
	V8= Cnil;
	V9= Cnil;
	V10= Cnil;
	V11= Cnil;
	V12= Cnil;
	bds_bind(VV[1],symbol_value(VV[1]));
	if(!(endp((V2)))){
	goto T11;}
	(void)((*(LnkLI40))(VV[2],small_fixnum(1),small_fixnum(0)));
T11:;
	base[2]= cdr((V2));
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk41)();
	if(vs_base<vs_top){
	V11= vs_base[0];
	vs_base++;
	}else{
	V11= Cnil;}
	if(vs_base<vs_top){
	V8= vs_base[0];
	vs_base++;
	}else{
	V8= Cnil;}
	if(vs_base<vs_top){
	V10= vs_base[0];
	vs_base++;
	}else{
	V10= Cnil;}
	if(vs_base<vs_top){
	V9= vs_base[0];
	vs_base++;
	}else{
	V9= Cnil;}
	if(vs_base<vs_top){
	V12= vs_base[0];
	}else{
	V12= Cnil;}
	vs_top=sup;
	(void)((*(LnkLI42))((V8)));
	{register object V13;
	register object V14;
	V13= car((V2));
	V14= car((V13));
T23:;
	if(!(endp((V13)))){
	goto T24;}
	goto T19;
T24:;
	if(!(type_of((V14))==t_symbol)){
	goto T30;}
	{object V15;
	V15= (*(LnkLI43))((V14),(V8),(V9),(V10));
	V7= make_cons((V14),(V7));
	V6= make_cons((V15),(V6));
	V16= structure_ref((V15),VV[3],5);
	V17= (*(LnkLI44))(/* INLINE-ARGS */V16);
	V5= make_cons(/* INLINE-ARGS */V17,(V5));
	goto T28;}
T30:;
	if(!(type_of((V14))==t_cons)){
	goto T39;}
	if(endp(cdr((V14)))){
	goto T38;}
	if(endp(cddr((V14)))){
	goto T38;}
T39:;
	(void)((VFUN_NARGS=2,(*(LnkLI45))(VV[4],(V14))));
T38:;
	{object V18;
	V18= (*(LnkLI43))(car((V14)),(V8),(V9),(V10));
	V7= make_cons(car((V14)),(V7));
	V6= make_cons((V18),(V6));
	if(!(endp(cdr((V14))))){
	goto T53;}
	V20= structure_ref((V18),VV[3],5);
	V19= (*(LnkLI44))(/* INLINE-ARGS */V20);
	goto T51;
T53:;
	V21= structure_ref((V18),VV[3],5);
	V22= (*(LnkLI47))(cadr((V14)),(V3));
	V19= (*(LnkLI46))(/* INLINE-ARGS */V21,/* INLINE-ARGS */V22,cadr((V14)));
T51:;
	V5= make_cons(V19,(V5));}
T28:;
	V13= cdr((V13));
	V14= car((V13));
	goto T23;}
T19:;
	{register object V23;
	object V24;
	V23= reverse((V6));
	V24= car((V23));
T64:;
	if(!(endp((V23)))){
	goto T65;}
	goto T60;
T65:;
	(VV[1]->s.s_dbind)= make_cons((V24),(VV[1]->s.s_dbind));
	V23= cdr((V23));
	V24= car((V23));
	goto T64;}
T60:;
	(void)((*(LnkLI48))((V7),(V10),(V9)));
	V11= (*(LnkLI49))((V12),(V11));
	(void)((*(LnkLI50))((V3),cadr((V11))));
	V25= structure_ref(cadr((V11)),VV[5],2);
	(void)(structure_set((V3),VV[5],2,/* INLINE-ARGS */V25));
	{register object V26;
	object V27;
	V26= (V6);
	V27= car((V26));
T85:;
	if(!(endp((V26)))){
	goto T86;}
	goto T81;
T86:;
	(void)((*(LnkLI51))((V27)));
	V26= cdr((V26));
	V27= car((V26));
	goto T85;}
T81:;
	if(!(eql((V4),symbol_value(VV[0])))){
	goto T97;}
	goto T96;
T97:;
	(void)(structure_set((V3),VV[5],4,Ct));
T96:;
	V28= reverse((V6));
	{object V29 = list(5,VV[2],(V3),/* INLINE-ARGS */V28,reverse((V5)),(V11));
	bds_unwind1;
	VMR1(V29)}}
}
/*	local entry for function C2LET	*/

static object LI2(V33,V34,V35)

object V33;object V34;object V35;
{	 VMB2 VMS2 VMV2
	bds_check;
TTL:;
	{object V36;
	register object V37;
	register object V38;
	V36= Cnil;
	V37= Cnil;
	V38= Cnil;
	bds_bind(VV[6],symbol_value(VV[6]));
	bds_bind(VV[7],symbol_value(VV[7]));
	bds_bind(VV[8],symbol_value(VV[8]));
	bds_bind(VV[9],symbol_value(VV[9]));
	{object V39;
	object V40;
	object V41;
	V39= (V33);
	V40= (V34);
	V41= Cnil;
T104:;
	if(!(endp((V39)))){
	goto T105;}
	goto T102;
T105:;
	{register object V42;
	register object V43;
	object V44;
	V42= car((V40));
	V43= car((V39));
	V44= (*(LnkLI52))((V43));
	if(((V44))==Cnil){
	goto T115;}
	(void)(structure_set((V43),VV[3],1,(V44)));
	setq(VV[10],number_plus(symbol_value(VV[10]),small_fixnum(1)));
	(void)(structure_set((V43),VV[3],4,symbol_value(VV[10])));
	goto T113;
T115:;
	V45= structure_ref((V43),VV[3],1);
	if(!((/* INLINE-ARGS */V45)==(VV[11]))){
	goto T120;}{object V46;
	base[7]= structure_ref((V43),VV[3],4);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	V46= vs_base[0];
	if(V46==Cnil)goto T122;
	goto T113;
T122:;}
	(void)((*(LnkLI54))());
	goto T113;
T120:;
	V47= (*(LnkLI55))();
	(void)(structure_set((V43),VV[3],2,/* INLINE-ARGS */V47));
T113:;
	V49= structure_ref((V43),VV[3],1);
	{object V48= /* INLINE-ARGS */V49;
	if((V48!= VV[56])
	&& (V48!= VV[57])
	&& (V48!= VV[58])
	&& (V48!= VV[59])
	&& (V48!= VV[60]))goto T126;
	V50= list(3,VV[12],list(3,VV[3],(V43),Cnil),(V42));
	V38= make_cons(/* INLINE-ARGS */V50,(V38));
	goto T125;
T126:;
	{object V51= car((V42));
	if((V51!= VV[61]))goto T128;
	if(((*(LnkLI62))((V43),(V35)))==Cnil){
	goto T130;}
	(void)(structure_set((V43),VV[3],1,VV[13]));
	(void)(structure_set((V43),VV[3],4,caddr((V42))));
	goto T125;
T130:;
	V52= list(2,(V43),caddr((V42)));
	V37= make_cons(/* INLINE-ARGS */V52,(V37));
	goto T125;
T128:;
	if((V51!= VV[3]))goto T134;
	{register object V53;
	V53= caaddr((V42));
	if(((*(LnkLI63))((V53),cdr((V40))))!=Cnil){
	goto T136;}
	V55= structure_ref((V53),VV[3],1);
	{register object x= /* INLINE-ARGS */V55,V54= VV[14];
	while(!endp(V54))
	if(eql(x,V54->c.c_car)){
	goto T141;
	}else V54=V54->c.c_cdr;
	goto T137;}
T141:;
	V57= structure_ref((V53),VV[3],0);
	{register object x= /* INLINE-ARGS */V57,V56= (V41);
	while(!endp(V56))
	if(eql(x,V56->c.c_car)){
	goto T142;
	}else V56=V56->c.c_cdr;
	goto T137;}
T142:;
T136:;
	V59= structure_ref((V43),VV[3],1);
	if(!((/* INLINE-ARGS */V59)==(VV[15]))){
	goto T146;}
	V58= list(3,VV[3],(V43),Cnil);
	goto T144;
T146:;
	V60= structure_ref((V43),VV[3],1);
	if(!((/* INLINE-ARGS */V60)==(VV[11]))){
	goto T149;}
	V58= list(2,VV[11],structure_ref((V43),VV[3],4));
	goto T144;
T149:;
	V61= make_cons((V43),Cnil);
	V37= make_cons(/* INLINE-ARGS */V61,(V37));
	V58= list(2,VV[16],structure_ref((V43),VV[3],2));
T144:;
	V62= list(3,VV[12],V58,(V42));
	V38= make_cons(/* INLINE-ARGS */V62,(V38));
	goto T125;
T137:;
	if(((*(LnkLI62))((V43),(V35)))==Cnil){
	goto T154;}
	V64= structure_ref((V53),VV[3],1);
	{register object x= /* INLINE-ARGS */V64,V63= VV[17];
	while(!endp(V63))
	if(eql(x,V63->c.c_car)){
	goto T158;
	}else V63=V63->c.c_cdr;
	goto T154;}
T158:;
	if((structure_ref((V53),VV[3],3))!=Cnil){
	goto T154;}
	V66= structure_ref(cadr((V35)),VV[5],0);
	{register object x= (V53),V65= /* INLINE-ARGS */V66;
	while(!endp(V65))
	if(eql(x,V65->c.c_car)){
	goto T154;
	}else V65=V65->c.c_cdr;}
	(void)(structure_set((V43),VV[3],1,VV[13]));
	V69= structure_ref((V53),VV[3],1);
	{object V68= /* INLINE-ARGS */V69;
	if((V68!= VV[28]))goto T164;
	V67= list(2,VV[16],structure_ref((V53),VV[3],2));
	goto T163;
T164:;
	if((V68!= VV[13]))goto T165;
	V67= structure_ref((V53),VV[3],4);
	goto T163;
T165:;
	if((V68!= VV[15]))goto T166;
	V67= list(2,VV[18],structure_ref((V53),VV[3],4));
	goto T163;
T166:;
	V67= (*(LnkLI64))();}
T163:;
	(void)(structure_set((V43),VV[3],4,V67));
	goto T125;
T154:;
	V70= list(2,(V43),list(3,VV[3],(V53),cadr(caddr((V42)))));
	V37= make_cons(/* INLINE-ARGS */V70,(V37));
	goto T125;}
T134:;
	V72= structure_ref((V43),VV[3],1);
	if(!((/* INLINE-ARGS */V72)==(VV[15]))){
	goto T171;}
	V71= list(3,VV[3],(V43),Cnil);
	goto T169;
T171:;
	V73= structure_ref((V43),VV[3],1);
	if(!((/* INLINE-ARGS */V73)==(VV[11]))){
	goto T174;}
	V71= list(2,VV[11],structure_ref((V43),VV[3],4));
	goto T169;
T174:;
	V74= make_cons((V43),Cnil);
	V37= make_cons(/* INLINE-ARGS */V74,(V37));
	V71= list(2,VV[16],structure_ref((V43),VV[3],2));
T169:;
	V75= list(3,VV[12],V71,(V42));
	V38= make_cons(/* INLINE-ARGS */V75,(V38));}}
T125:;
	V76= structure_ref((V43),VV[3],1);
	if(!((/* INLINE-ARGS */V76)==(VV[19]))){
	goto T109;}
	V77= structure_ref((V43),VV[3],0);
	V41= make_cons(/* INLINE-ARGS */V77,(V41));}
T109:;
	V39= cdr((V39));
	V40= cdr((V40));
	goto T104;}
T102:;
	V36= (*(LnkLI65))((V33));
	{object V78;
	object V79;
	V78= reverse((V38));
	V79= car((V78));
T191:;
	if(!(endp((V78)))){
	goto T192;}
	goto T187;
T192:;
	base[6]= cadr((V79));
	bds_bind(VV[20],base[6]);
	V80= (*(LnkLI12))(caddr((V79)));
	bds_unwind1;
	V78= cdr((V78));
	V79= car((V78));
	goto T191;}
T187:;
	{object V81;
	object V82;
	V81= reverse((V37));
	V82= car((V81));
T207:;
	if(!(endp((V81)))){
	goto T208;}
	goto T203;
T208:;
	if((cdr((V82)))==Cnil){
	goto T214;}
	(void)((*(LnkLI66))(car((V82)),cadr((V82))));
	goto T212;
T214:;
	(void)((*(LnkLI67))(car((V82))));
T212:;
	V81= cdr((V81));
	V82= car((V81));
	goto T207;}
T203:;
	base[4]= (V35);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	if(((V36))==Cnil){
	goto T224;}
	princ_char(125,VV[21]);
	{object V83 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR2(V83)}
T224:;
	{object V84 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR2(V84)}}
}
/*	local entry for function C1LET*	*/

static object LI3(V86)

object V86;
{	 VMB3 VMS3 VMV3
	bds_check;
TTL:;
	{register object V87;
	register object V88;
	register object V89;
	object V90;
	object V91;
	object V92;
	object V93;
	object V94;
	object V95;
	object V96;
	V87= Cnil;
	V88= Cnil;
	V89= Cnil;
	V90= symbol_value(VV[0]);
	V91= Cnil;
	V92= Cnil;
	V93= Cnil;
	V94= Cnil;
	V95= Cnil;
	V96= (VFUN_NARGS=0,(*(LnkLI39))());
	bds_bind(VV[1],symbol_value(VV[1]));
	if(!(endp((V86)))){
	goto T237;}
	(void)((*(LnkLI40))(VV[22],small_fixnum(1),small_fixnum(0)));
T237:;
	base[2]= cdr((V86));
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk41)();
	if(vs_base<vs_top){
	V94= vs_base[0];
	vs_base++;
	}else{
	V94= Cnil;}
	if(vs_base<vs_top){
	V91= vs_base[0];
	vs_base++;
	}else{
	V91= Cnil;}
	if(vs_base<vs_top){
	V93= vs_base[0];
	vs_base++;
	}else{
	V93= Cnil;}
	if(vs_base<vs_top){
	V92= vs_base[0];
	vs_base++;
	}else{
	V92= Cnil;}
	if(vs_base<vs_top){
	V95= vs_base[0];
	}else{
	V95= Cnil;}
	vs_top=sup;
	(void)((*(LnkLI42))((V91)));
	{register object V97;
	register object V98;
	V97= car((V86));
	V98= car((V97));
T249:;
	if(!(endp((V97)))){
	goto T250;}
	goto T245;
T250:;
	if(!(type_of((V98))==t_symbol)){
	goto T256;}
	{object V99;
	V99= (*(LnkLI43))((V98),(V91),(V92),(V93));
	V89= make_cons((V98),(V89));
	V100= structure_ref((V99),VV[3],5);
	V101= (*(LnkLI44))(/* INLINE-ARGS */V100);
	V87= make_cons(/* INLINE-ARGS */V101,(V87));
	V88= make_cons((V99),(V88));
	(VV[1]->s.s_dbind)= make_cons((V99),(VV[1]->s.s_dbind));
	goto T254;}
T256:;
	if(!(type_of((V98))==t_cons)){
	goto T266;}
	if(endp(cdr((V98)))){
	goto T267;}
	if(endp(cddr((V98)))){
	goto T267;}
T266:;
	(void)((VFUN_NARGS=2,(*(LnkLI45))(VV[23],(V98))));
	goto T254;
T267:;
	{register object V102;
	V102= (*(LnkLI43))(car((V98)),(V91),(V92),(V93));
	V89= make_cons(car((V98)),(V89));
	if(!(endp(cdr((V98))))){
	goto T280;}
	V104= structure_ref((V102),VV[3],5);
	V103= (*(LnkLI44))(/* INLINE-ARGS */V104);
	goto T278;
T280:;
	V105= structure_ref((V102),VV[3],5);
	V106= (*(LnkLI47))(cadr((V98)),(V96));
	V103= (*(LnkLI46))(/* INLINE-ARGS */V105,/* INLINE-ARGS */V106,cadr((V98)));
T278:;
	V87= make_cons(V103,(V87));
	V88= make_cons((V102),(V88));
	(VV[1]->s.s_dbind)= make_cons((V102),(VV[1]->s.s_dbind));}
T254:;
	V97= cdr((V97));
	V98= car((V97));
	goto T249;}
T245:;
	(void)((*(LnkLI48))((V89),(V93),(V92)));
	V94= (*(LnkLI49))((V95),(V94));
	(void)((*(LnkLI50))((V96),cadr((V94))));
	V107= structure_ref(cadr((V94)),VV[5],2);
	(void)(structure_set((V96),VV[5],2,/* INLINE-ARGS */V107));
	{register object V108;
	object V109;
	V108= (V88);
	V109= car((V108));
T299:;
	if(!(endp((V108)))){
	goto T300;}
	goto T295;
T300:;
	(void)((*(LnkLI51))((V109)));
	V108= cdr((V108));
	V109= car((V108));
	goto T299;}
T295:;
	if(!(eql((V90),symbol_value(VV[0])))){
	goto T311;}
	goto T310;
T311:;
	(void)(structure_set((V96),VV[5],4,Ct));
T310:;
	V110= reverse((V88));
	{object V111 = list(5,VV[22],(V96),/* INLINE-ARGS */V110,reverse((V87)),(V94));
	bds_unwind1;
	VMR3(V111)}}
}
/*	local entry for function C2LET*	*/

static object LI4(V115,V116,V117)

object V115;object V116;object V117;
{	 VMB4 VMS4 VMV4
	bds_check;
TTL:;
	{object V118;
	V118= Cnil;
	bds_bind(VV[6],symbol_value(VV[6]));
	bds_bind(VV[7],symbol_value(VV[7]));
	bds_bind(VV[8],symbol_value(VV[8]));
	bds_bind(VV[9],symbol_value(VV[9]));
	{object V119;
	register object V120;
	V119= (V115);
	V120= (V116);
T316:;
	if(!(endp((V119)))){
	goto T317;}
	goto T314;
T317:;
	{object V121;
	register object V122;
	object V123;
	V121= car((V120));
	V122= car((V119));
	V123= (*(LnkLI52))((V122));
	if(((V123))==Cnil){
	goto T325;}
	(void)(structure_set((V122),VV[3],1,(V123)));
	setq(VV[10],number_plus(symbol_value(VV[10]),small_fixnum(1)));
	(void)(structure_set((V122),VV[3],4,symbol_value(VV[10])));
T325:;
	V125= structure_ref((V122),VV[3],1);
	{register object x= /* INLINE-ARGS */V125,V124= VV[24];
	while(!endp(V124))
	if(eql(x,V124->c.c_car)){
	goto T332;
	}else V124=V124->c.c_cdr;
	goto T331;}
T332:;
	goto T321;
T331:;
	{object V126= car((V121));
	if((V126!= VV[61]))goto T333;
	if(((*(LnkLI69))((V122),(V117),cdr((V120))))==Cnil){
	goto T335;}
	(void)(structure_set((V122),VV[3],1,VV[13]));
	(void)(structure_set((V122),VV[3],4,caddr((V121))));
	goto T321;
T335:;
	{object V127;
	V128= structure_ref((V122),VV[3],1);
	V127= ((/* INLINE-ARGS */V128)==(VV[15])?Ct:Cnil);
	if(((V127))==Cnil){
	goto T340;}
	goto T321;
T340:;
	V129= structure_ref((V122),VV[3],1);
	if(!((/* INLINE-ARGS */V129)==(VV[11]))){
	goto T343;}{object V130;
	base[7]= structure_ref((V122),VV[3],4);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	V130= vs_base[0];
	if(V130==Cnil)goto T345;
	goto T321;
T345:;}
	(void)((*(LnkLI64))());
	goto T321;
T343:;
	V131= (*(LnkLI55))();
	(void)(structure_set((V122),VV[3],2,/* INLINE-ARGS */V131));
	goto T321;}
T333:;
	if((V126!= VV[3]))goto T348;
	{register object V132;
	V132= caaddr((V121));
	if(((*(LnkLI69))((V122),(V117),cdr((V120))))==Cnil){
	goto T351;}
	V134= structure_ref((V132),VV[3],1);
	{register object x= /* INLINE-ARGS */V134,V133= VV[25];
	while(!endp(V133))
	if(eql(x,V133->c.c_car)){
	goto T355;
	}else V133=V133->c.c_cdr;
	goto T351;}
T355:;
	if((structure_ref((V132),VV[3],3))!=Cnil){
	goto T351;}
	if(((*(LnkLI63))((V132),cdr((V120))))!=Cnil){
	goto T351;}
	V136= structure_ref(cadr((V117)),VV[5],0);
	{register object x= (V132),V135= /* INLINE-ARGS */V136;
	while(!endp(V135))
	if(eql(x,V135->c.c_car)){
	goto T351;
	}else V135=V135->c.c_cdr;}
	(void)(structure_set((V122),VV[3],1,VV[13]));
	V139= structure_ref((V132),VV[3],1);
	{object V138= /* INLINE-ARGS */V139;
	if((V138!= VV[28]))goto T363;
	V137= list(2,VV[16],structure_ref((V132),VV[3],2));
	goto T362;
T363:;
	if((V138!= VV[13]))goto T364;
	V137= structure_ref((V132),VV[3],4);
	goto T362;
T364:;
	if((V138!= VV[15]))goto T365;
	V137= list(2,VV[18],structure_ref((V132),VV[3],4));
	goto T362;
T365:;
	V137= (*(LnkLI64))();}
T362:;
	(void)(structure_set((V122),VV[3],4,V137));
	goto T321;
T351:;
	{object V140;
	V141= structure_ref((V122),VV[3],1);
	V140= ((/* INLINE-ARGS */V141)==(VV[15])?Ct:Cnil);
	if(((V140))==Cnil){
	goto T368;}
	goto T321;
T368:;
	V142= (*(LnkLI55))();
	(void)(structure_set((V122),VV[3],2,/* INLINE-ARGS */V142));
	goto T321;}}
T348:;
	if((V126!= VV[70])
	&& !eql(V126,VV[26])
	&& !eql(V126,VV[27]))goto T370;
	goto T321;
T370:;
	V143= (*(LnkLI55))();
	(void)(structure_set((V122),VV[3],2,/* INLINE-ARGS */V143));}}
T321:;
	V119= cdr((V119));
	V120= cdr((V120));
	goto T316;}
T314:;
	V118= (*(LnkLI65))((V115));
	{object V144;
	object V145;
	register object V146;
	register object V147;
	V144= (V115);
	V145= (V116);
	V146= Cnil;
	V147= Cnil;
T379:;
	if(((V144))!=Cnil){
	goto T380;}
	goto T377;
T380:;
	V146= car((V144));
	V147= car((V145));
	V149= structure_ref((V146),VV[3],1);
	{object V148= /* INLINE-ARGS */V149;
	if((V148== VV[56])
	|| (V148== VV[57])
	|| (V148== VV[58])
	|| (V148== VV[59])
	|| (V148== VV[15]))goto T390;
	if((V148!= VV[60]))goto T389;
T390:;
	base[4]= list(3,VV[3],(V146),Cnil);
	bds_bind(VV[20],base[4]);
	V150= (*(LnkLI12))((V147));
	bds_unwind1;
	goto T388;
T389:;
	if((V148!= VV[13]))goto T392;
	goto T388;
T392:;
	{object V151= car((V147));
	if((V151!= VV[61]))goto T393;
	(void)((*(LnkLI66))((V146),caddr((V147))));
	goto T388;
T393:;
	if((V151!= VV[3]))goto T394;
	V152= list(3,VV[3],caaddr((V147)),cadr(caddr((V147))));
	(void)((*(LnkLI66))((V146),/* INLINE-ARGS */V152));
	goto T388;
T394:;
	(void)((*(LnkLI71))((V146),(V147)));}}
T388:;
	V144= cdr((V144));
	V145= cdr((V145));
	goto T379;}
T377:;
	base[4]= (V117);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	if(((V118))==Cnil){
	goto T402;}
	princ_char(125,VV[21]);
	{object V153 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR4(V153)}
T402:;
	{object V154 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR4(V154)}}
}
/*	local entry for function CAN-BE-REPLACED	*/

static object LI5(V157,V158)

register object V157;object V158;
{	 VMB5 VMS5 VMV5
TTL:;
	V159= structure_ref((V157),VV[3],1);
	if(!((/* INLINE-ARGS */V159)==(VV[28]))){
	goto T407;}
	goto T405;
T407:;
	V160= structure_ref((V157),VV[3],1);
	if((/* INLINE-ARGS */V160)==(VV[15])){
	goto T409;}
	goto T406;
T409:;
	{int V161= fix(structure_ref((V157),VV[3],6));
	if((/* INLINE-ARGS */V161)<(fix(symbol_value(VV[29])))){
	goto T405;}}
T406:;
	{object V162 = Cnil;
	VMR5(V162)}
T405:;
	V163= structure_ref((V157),VV[3],3);
	if((/* INLINE-ARGS */V163)==Cnil){
	goto T411;}
	{object V164 = Cnil;
	VMR5(V164)}
T411:;
	V165= structure_ref((V157),VV[3],4);
	if((((/* INLINE-ARGS */V165)==(VV[30])?Ct:Cnil))==Cnil){
	goto T413;}
	{object V166 = Cnil;
	VMR5(V166)}
T413:;
	V169= structure_ref(cadr((V158)),VV[5],0);
	{register object x= (V157),V168= /* INLINE-ARGS */V169;
	while(!endp(V168))
	if(eql(x,V168->c.c_car)){
	V167= V168;
	goto T415;
	}else V168=V168->c.c_cdr;
	V167= Cnil;}
T415:;
	{object V170 = ((V167)==Cnil?Ct:Cnil);
	VMR5(V170)}
}
/*	local entry for function CAN-BE-REPLACED*	*/

static object LI6(V174,V175,V176)

register object V174;object V175;object V176;
{	 VMB6 VMS6 VMV6
TTL:;
	if(((*(LnkLI62))((V174),(V175)))!=Cnil){
	goto T416;}
	{object V177 = Cnil;
	VMR6(V177)}
T416:;
	{register object V178;
	register object V179;
	V178= (V176);
	V179= car((V178));
T421:;
	if(!(endp((V178)))){
	goto T422;}
	{object V180 = Ct;
	VMR6(V180)}
T422:;
	V182= structure_ref(cadr((V179)),VV[5],0);
	{register object x= (V174),V181= /* INLINE-ARGS */V182;
	while(!endp(V181))
	if(eql(x,V181->c.c_car)){
	goto T428;
	}else V181=V181->c.c_cdr;
	goto T426;}
T428:;
	{object V183 = Cnil;
	VMR6(V183)}
T426:;
	V178= cdr((V178));
	V179= car((V178));
	goto T421;}
}
/*	local entry for function WRITE-BLOCK-OPEN	*/

static object LI7(V185)

object V185;
{	 VMB7 VMS7 VMV7
TTL:;
	{register object V186;
	V186= Cnil;
	{register object V187;
	register object V188;
	V187= (V185);
	V188= car((V187));
T438:;
	if(!(endp((V187)))){
	goto T439;}
	goto T434;
T439:;
	{register object V189;
	V189= structure_ref((V188),VV[3],1);
	{register object x= (V189),V190= VV[31];
	while(!endp(V190))
	if(eql(x,V190->c.c_car)){
	goto T446;
	}else V190=V190->c.c_cdr;
	goto T443;}
T446:;
	princ_str("\n	",VV[21]);
	if(((V186))!=Cnil){
	goto T448;}
	princ_char(123,VV[21]);
	V186= Ct;
T448:;
	base[1]= (V188);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk72)();
	vs_top=sup;}
T443:;
	V187= cdr((V187));
	V188= car((V187));
	goto T438;}
T434:;
	{object V191 = (V186);
	VMR7(V191)}}
}
/*	macro definition for STACK-LET	*/

static L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(2);
	vs_top=sup;
	{object V192=base[0]->c.c_cdr;
	base[2]= V192;}
	base[3]= make_cons(VV[2],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function C1STACK-LET	*/

static object LI9(V194)

object V194;
{	 VMB9 VMS9 VMV9
TTL:;
	{object V195;
	register object V196;
	V195= Cnil;
	V196= Cnil;
	{object V197;
	V197= car((V194));
	{register object V198;
	register object V199;
	V198= (V197);
	V199= car((V198));
T467:;
	if(!(endp((V198)))){
	goto T468;}
	goto T463;
T468:;
	if(!(type_of((V199))!=t_cons)){
	goto T476;}
	V200= (V199);
	goto T474;
T476:;
	{register object V201;
	{object V202;
	register object V203;
	V202= car((V199));
	V203= cadr((V199));
	if(type_of((V203))==t_cons){
	goto T481;}
	V201= Cnil;
	goto T478;
T481:;
	if(!((car((V203)))==(VV[32]))){
	goto T485;}
	goto T483;
T485:;
	if((car((V203)))==(VV[33])){
	goto T487;}
	goto T484;
T487:;
	if((cddr((V203)))==Cnil){
	goto T489;}
	goto T484;
T489:;
	V203= list(3,VV[32],cadr((V203)),Cnil);
	if(((V203))!=Cnil){
	goto T483;}
T484:;
	V201= Cnil;
	goto T478;
T483:;
	setq(VV[10],number_plus(symbol_value(VV[10]),small_fixnum(1)));
	V196= make_cons(symbol_value(VV[10]),(V196));
	V201= list(2,(V202),listA(3,VV[34],car((V196)),cdr((V203))));}
T478:;
	if(((V201))==Cnil){
	goto T496;}
	V200= (V201);
	goto T474;
T496:;
	(void)((VFUN_NARGS=3,(*(LnkLI73))(VV[35],(V199),cdr((V194)))));
	V200= (V199);}
T474:;
	V195= make_cons(V200,(V195));
	V198= cdr((V198));
	V199= car((V198));
	goto T467;}
T463:;
	{object V204;
	V205= nreverse((V195));
	V206= listA(3,VV[2],/* INLINE-ARGS */V205,cdr((V194)));
	V204= (*(LnkLI74))(/* INLINE-ARGS */V206);
	{object V207 = list(4,VV[36],cadr((V204)),(V196),(V204));
	VMR9(V207)}}}}
}
/*	local entry for function C2STACK-LET	*/

static object LI10(V210,V211)

object V210;object V211;
{	 VMB10 VMS10 VMV10
TTL:;
	{object V212;
	setq(VV[10],number_plus(symbol_value(VV[10]),small_fixnum(1)));
	V212= symbol_value(VV[10]);
	princ_str("\n	{Cons_Macro",VV[21]);
	(void)((*(LnkLI75))((V212)));
	princ_char(59,VV[21]);
	base[0]= (V211);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	princ_char(125,VV[21]);
	princ_str("\n#define Cons_Macro",VV[37]);
	(void)((*(LnkLI76))((V212)));
	base[0]= Cnil;
	base[1]= VV[38];
	base[2]= (V210);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V213= vs_base[0];
	(void)((*(LnkLI76))(V213));
	{object V214 = Cnil;
	VMR10(V214)}}
}
static object  LnkTLI76(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[76],&LnkLI76,1,ap);} /* WT-H1 */
static object  LnkTLI75(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[75],&LnkLI75,1,ap);} /* WT1 */
static object  LnkTLI74(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[74],&LnkLI74,1,ap);} /* C1EXPR */
static object  LnkTLI73(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[73],&LnkLI73,ap);} /* CMPWARN */
static LnkT72(){ call_or_link(VV[72],&Lnk72);} /* WT-VAR-DECL */
static object  LnkTLI71(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[71],&LnkLI71,2,ap);} /* C2BIND-INIT */
static object  LnkTLI69(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[69],&LnkLI69,3,ap);} /* CAN-BE-REPLACED* */
static LnkT68(){ call_or_link(VV[68],&Lnk68);} /* C2EXPR */
static object  LnkTLI67(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[67],&LnkLI67,1,ap);} /* C2BIND */
static object  LnkTLI66(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[66],&LnkLI66,2,ap);} /* C2BIND-LOC */
static object  LnkTLI12(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[12],&LnkLI12,1,ap);} /* C2EXPR* */
static object  LnkTLI65(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[65],&LnkLI65,1,ap);} /* WRITE-BLOCK-OPEN */
static object  LnkTLI64(){return call_proc0(VV[64],&LnkLI64);} /* BABOON */
static object  LnkTLI63(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[63],&LnkLI63,2,ap);} /* ARGS-INFO-CHANGED-VARS */
static object  LnkTLI62(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[62],&LnkLI62,2,ap);} /* CAN-BE-REPLACED */
static object  LnkTLI55(){return call_proc0(VV[55],&LnkLI55);} /* VS-PUSH */
static object  LnkTLI54(){return call_proc0(VV[54],&LnkLI54);} /* WFS-ERROR */
static LnkT53(){ call_or_link(VV[53],&Lnk53);} /* FIXNUMP */
static object  LnkTLI52(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[52],&LnkLI52,1,ap);} /* C2VAR-KIND */
static object  LnkTLI51(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[51],&LnkLI51,1,ap);} /* CHECK-VREF */
static object  LnkTLI50(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[50],&LnkLI50,2,ap);} /* ADD-INFO */
static object  LnkTLI49(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[49],&LnkLI49,2,ap);} /* C1DECL-BODY */
static object  LnkTLI48(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[48],&LnkLI48,3,ap);} /* CHECK-VDECL */
static object  LnkTLI47(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[47],&LnkLI47,2,ap);} /* C1EXPR* */
static object  LnkTLI46(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[46],&LnkLI46,3,ap);} /* AND-FORM-TYPE */
static object  LnkTLI45(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[45],&LnkLI45,ap);} /* CMPERR */
static object  LnkTLI44(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[44],&LnkLI44,1,ap);} /* DEFAULT-INIT */
static object  LnkTLI43(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[43],&LnkLI43,4,ap);} /* C1MAKE-VAR */
static object  LnkTLI42(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[42],&LnkLI42,1,ap);} /* C1ADD-GLOBALS */
static LnkT41(){ call_or_link(VV[41],&Lnk41);} /* C1BODY */
static object  LnkTLI40(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[40],&LnkLI40,3,ap);} /* TOO-FEW-ARGS */
static object  LnkTLI39(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[39],&LnkLI39,ap);} /* MAKE-INFO */
