
#include "cmpinclude.h"
#include "gcl_cmplet.h"
void init_gcl_cmplet(){do_init(VV);}
/*	local entry for function C1LET	*/

static object LI1(V2)

object V2;
{	 VMB1 VMS1 VMV1
	bds_check;
	goto TTL;
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
	V4= (VV[0]->s.s_dbind);
	V5= Cnil;
	V6= Cnil;
	V7= Cnil;
	V8= Cnil;
	V9= Cnil;
	V10= Cnil;
	V11= Cnil;
	V12= Cnil;
	bds_bind(VV[1],(VV[1]->s.s_dbind));
	if(!(((V2))==Cnil)){
	goto T11;}
	(void)((*(LnkLI40))(VV[2],small_fixnum(1),small_fixnum(0)));
	goto T11;
T11:;
	base[2]= CMPcdr((V2));
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
	V13= CMPcar((V2));
	V14= CMPcar((V13));
	goto T23;
T23:;
	if(!(((V13))==Cnil)){
	goto T24;}
	goto T19;
	goto T24;
T24:;
	if(!(type_of((V14))==t_symbol)){
	goto T30;}
	{object V15;
	V15= (*(LnkLI43))((V14),(V8),(V9),(V10));
	V7= make_cons(V14,(V7));
	V6= make_cons(V15,(V6));
	{object V18;
	V18= (*(LnkLI44))(STREF(object,(V15),20));
	V5= make_cons((V18),(V5));
	goto T28;}}
	goto T30;
T30:;
	if(!(type_of((V14))==t_cons)){
	goto T40;}
	if((CMPcdr((V14)))==Cnil){
	goto T39;}
	if((CMPcddr((V14)))==Cnil){
	goto T39;}
	goto T40;
T40:;
	(void)((VFUN_NARGS=2,(*(LnkLI45))(VV[4],(V14))));
	goto T39;
T39:;
	{object V19;
	V19= (*(LnkLI43))(CMPcar((V14)),(V8),(V9),(V10));
	{object V20;
	V20= CMPcar((V14));
	V7= make_cons((V20),(V7));}
	V6= make_cons(V19,(V6));
	{object V22;
	if(!((CMPcdr((V14)))==Cnil)){
	goto T54;}
	V22= (*(LnkLI44))(STREF(object,(V19),20));
	goto T52;
	goto T54;
T54:;
	V23= (*(LnkLI47))(CMPcadr((V14)),(V3));
	V22= (*(LnkLI46))(STREF(object,(V19),20),/* INLINE-ARGS */V23,CMPcadr((V14)));
	goto T52;
T52:;
	V5= make_cons((V22),(V5));}}
	goto T28;
T28:;
	V13= CMPcdr((V13));
	V14= CMPcar((V13));
	goto T23;}
	goto T19;
T19:;
	{register object V24;
	object V25;
	V24= reverse((V6));
	V25= CMPcar((V24));
	goto T66;
T66:;
	if(!(((V24))==Cnil)){
	goto T67;}
	goto T62;
	goto T67;
T67:;
	(VV[1]->s.s_dbind)= make_cons(V25,(VV[1]->s.s_dbind));
	V24= CMPcdr((V24));
	V25= CMPcar((V24));
	goto T66;}
	goto T62;
T62:;
	(void)((*(LnkLI48))((V7),(V10),(V9)));
	V11= (*(LnkLI49))((V12),(V11));
	(void)((*(LnkLI50))((V3),CMPcadr((V11))));
	V27= Ct;
	STSET(object,(V3),8, STREF(object,CMPcadr((V11)),8));
	(void)(STREF(object,CMPcadr((V11)),8));
	{register object V28;
	object V29;
	V28= (V6);
	V29= CMPcar((V28));
	goto T87;
T87:;
	if(!(((V28))==Cnil)){
	goto T88;}
	goto T83;
	goto T88;
T88:;
	(void)((*(LnkLI51))((V29)));
	V28= CMPcdr((V28));
	V29= CMPcar((V28));
	goto T87;}
	goto T83;
T83:;
	if(!(eql((V4),(VV[0]->s.s_dbind)))){
	goto T99;}
	goto T98;
	goto T99;
T99:;
	V30= Ct;
	STSET(object,(V3),16, Ct);
	(void)(Ct);
	goto T98;
T98:;
	V31= reverse((V6));
	{object V32 = list(5,VV[2],(V3),/* INLINE-ARGS */V31,reverse((V5)),(V11));
	bds_unwind1;
	VMR1(V32)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2LET	*/

static object LI2(V36,V37,V38)

object V36;object V37;object V38;
{	 VMB2 VMS2 VMV2
	bds_check;
	goto TTL;
TTL:;
	{object V39;
	register object V40;
	register object V41;
	V39= Cnil;
	V40= Cnil;
	V41= Cnil;
	bds_bind(VV[6],(VV[6]->s.s_dbind));
	bds_bind(VV[7],(VV[7]->s.s_dbind));
	bds_bind(VV[8],(VV[8]->s.s_dbind));
	bds_bind(VV[9],(VV[9]->s.s_dbind));
	{object V42;
	object V43;
	object V44;
	V42= (V36);
	V43= (V37);
	V44= Cnil;
	goto T106;
T106:;
	if(!(((V42))==Cnil)){
	goto T107;}
	goto T104;
	goto T107;
T107:;
	{register object V45;
	register object V46;
	object V47;
	V45= CMPcar((V43));
	V46= CMPcar((V42));
	V47= (*(LnkLI52))((V46));
	if(((V47))==Cnil){
	goto T117;}
	V48= Ct;
	STSET(object,(V46),4, (V47));
	(void)((V47));
	(VV[10]->s.s_dbind)= number_plus((VV[10]->s.s_dbind),small_fixnum(1));
	V49= Ct;
	STSET(object,(V46),16, (VV[10]->s.s_dbind));
	(void)((VV[10]->s.s_dbind));
	goto T115;
	goto T117;
T117:;
	if(!((STREF(object,(V46),4))==(VV[11]))){
	goto T122;}{object V50;
	base[7]= STREF(object,(V46),16);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	V50= vs_base[0];
	if(V50==Cnil)goto T124;
	goto T115;
	goto T124;
T124:;}
	(void)((*(LnkLI54))());
	goto T115;
	goto T122;
T122:;
	V51= (*(LnkLI55))();
	V52= Ct;
	STSET(object,(V46),8, /* INLINE-ARGS */V51);
	(void)(/* INLINE-ARGS */V51);
	goto T115;
T115:;
	{object V53= STREF(object,(V46),4);
	if((V53!= VV[56])
	&& (V53!= VV[57])
	&& (V53!= VV[58])
	&& (V53!= VV[59])
	&& (V53!= VV[60]))goto T128;
	{object V54;
	V54= list(3,VV[12],list(3,VV[3],(V46),Cnil),(V45));
	V41= make_cons((V54),(V41));
	goto T127;}
	goto T128;
T128:;
	{object V55= CMPcar((V45));
	if((V55!= VV[61]))goto T131;
	if(((*(LnkLI62))((V46),(V38)))==Cnil){
	goto T133;}
	V56= Ct;
	STSET(object,(V46),4, VV[13]);
	(void)(VV[13]);
	V57= CMPcaddr((V45));
	V58= Ct;
	STSET(object,(V46),16, /* INLINE-ARGS */V57);
	(void)(/* INLINE-ARGS */V57);
	goto T127;
	goto T133;
T133:;
	{object V59;
	V59= list(2,(V46),CMPcaddr((V45)));
	V40= make_cons((V59),(V40));
	goto T127;}
	goto T131;
T131:;
	if((V55!= VV[3]))goto T138;
	{register object V60;
	V60= CMPcaaddr((V45));
	if(((*(LnkLI63))((V60),CMPcdr((V43))))!=Cnil){
	goto T140;}
	{register object x= STREF(object,(V60),4),V61= VV[14];
	while(V61!=Cnil)
	if(eql(x,V61->c.c_car)){
	goto T145;
	}else V61=V61->c.c_cdr;
	goto T141;}
	goto T145;
T145:;
	{register object x= STREF(object,(V60),0),V62= (V44);
	while(V62!=Cnil)
	if(eql(x,V62->c.c_car)){
	goto T146;
	}else V62=V62->c.c_cdr;
	goto T141;}
	goto T146;
T146:;
	goto T140;
T140:;
	{object V63;
	if(!((STREF(object,(V46),4))==(VV[15]))){
	goto T150;}
	V64= list(3,VV[3],(V46),Cnil);
	goto T148;
	goto T150;
T150:;
	if(!((STREF(object,(V46),4))==(VV[11]))){
	goto T153;}
	V64= list(2,VV[11],STREF(object,(V46),16));
	goto T148;
	goto T153;
T153:;
	{object V65;
	V65= make_cons((V46),Cnil);
	V40= make_cons((V65),(V40));}
	V64= list(2,VV[16],STREF(object,(V46),8));
	goto T148;
T148:;
	V63= list(3,VV[12],V64,(V45));
	V41= make_cons((V63),(V41));
	goto T127;}
	goto T141;
T141:;
	if(((*(LnkLI62))((V46),(V38)))==Cnil){
	goto T160;}
	{register object x= STREF(object,(V60),4),V66= VV[17];
	while(V66!=Cnil)
	if(eql(x,V66->c.c_car)){
	goto T164;
	}else V66=V66->c.c_cdr;
	goto T160;}
	goto T164;
T164:;
	if((STREF(object,(V60),12))!=Cnil){
	goto T160;}
	{register object x= (V60),V67= STREF(object,CMPcadr((V38)),0);
	while(V67!=Cnil)
	if(eql(x,V67->c.c_car)){
	goto T160;
	}else V67=V67->c.c_cdr;}
	V68= Ct;
	STSET(object,(V46),4, VV[13]);
	(void)(VV[13]);
	{object V70= STREF(object,(V60),4);
	if((V70!= VV[28]))goto T170;
	V69= list(2,VV[16],STREF(object,(V60),8));
	goto T169;
	goto T170;
T170:;
	if((V70!= VV[13]))goto T171;
	V69= STREF(object,(V60),16);
	goto T169;
	goto T171;
T171:;
	if((V70!= VV[15]))goto T172;
	V69= list(2,VV[18],STREF(object,(V60),16));
	goto T169;
	goto T172;
T172:;
	V69= (*(LnkLI64))();}
	goto T169;
T169:;
	V71= Ct;
	STSET(object,(V46),16, V69);
	(void)(V69);
	goto T127;
	goto T160;
T160:;
	{object V72;
	V72= list(2,(V46),list(3,VV[3],(V60),CMPcadr(CMPcaddr((V45)))));
	V40= make_cons((V72),(V40));
	goto T127;}}
	goto T138;
T138:;
	{object V73;
	if(!((STREF(object,(V46),4))==(VV[15]))){
	goto T178;}
	V74= list(3,VV[3],(V46),Cnil);
	goto T176;
	goto T178;
T178:;
	if(!((STREF(object,(V46),4))==(VV[11]))){
	goto T181;}
	V74= list(2,VV[11],STREF(object,(V46),16));
	goto T176;
	goto T181;
T181:;
	{object V75;
	V75= make_cons((V46),Cnil);
	V40= make_cons((V75),(V40));}
	V74= list(2,VV[16],STREF(object,(V46),8));
	goto T176;
T176:;
	V73= list(3,VV[12],V74,(V45));
	V41= make_cons((V73),(V41));}}}
	goto T127;
T127:;
	if(!((STREF(object,(V46),4))==(VV[19]))){
	goto T111;}
	{object V76;
	V76= STREF(object,(V46),0);
	V44= make_cons((V76),(V44));}}
	goto T111;
T111:;
	V42= CMPcdr((V42));
	V43= CMPcdr((V43));
	goto T106;}
	goto T104;
T104:;
	V39= (*(LnkLI65))((V36));
	{object V77;
	object V78;
	V77= reverse((V41));
	V78= CMPcar((V77));
	goto T201;
T201:;
	if(!(((V77))==Cnil)){
	goto T202;}
	goto T197;
	goto T202;
T202:;
	base[6]= CMPcadr((V78));
	bds_bind(VV[20],base[6]);
	V79= (*(LnkLI12))(CMPcaddr((V78)));
	bds_unwind1;
	V77= CMPcdr((V77));
	V78= CMPcar((V77));
	goto T201;}
	goto T197;
T197:;
	{object V80;
	object V81;
	V80= reverse((V40));
	V81= CMPcar((V80));
	goto T217;
T217:;
	if(!(((V80))==Cnil)){
	goto T218;}
	goto T213;
	goto T218;
T218:;
	if((CMPcdr((V81)))==Cnil){
	goto T224;}
	(void)((*(LnkLI66))(CMPcar((V81)),CMPcadr((V81))));
	goto T222;
	goto T224;
T224:;
	(void)((*(LnkLI67))(CMPcar((V81))));
	goto T222;
T222:;
	V80= CMPcdr((V80));
	V81= CMPcar((V80));
	goto T217;}
	goto T213;
T213:;
	base[4]= (V38);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	if(((V39))==Cnil){
	goto T234;}
	princ_char(125,VV[21]);
	{object V82 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR2(V82)}
	goto T234;
T234:;
	{object V83 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR2(V83)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1LET*	*/

static object LI3(V85)

object V85;
{	 VMB3 VMS3 VMV3
	bds_check;
	goto TTL;
TTL:;
	{register object V86;
	register object V87;
	register object V88;
	object V89;
	object V90;
	object V91;
	object V92;
	object V93;
	object V94;
	object V95;
	V86= Cnil;
	V87= Cnil;
	V88= Cnil;
	V89= (VV[0]->s.s_dbind);
	V90= Cnil;
	V91= Cnil;
	V92= Cnil;
	V93= Cnil;
	V94= Cnil;
	V95= (VFUN_NARGS=0,(*(LnkLI39))());
	bds_bind(VV[1],(VV[1]->s.s_dbind));
	if(!(((V85))==Cnil)){
	goto T247;}
	(void)((*(LnkLI40))(VV[22],small_fixnum(1),small_fixnum(0)));
	goto T247;
T247:;
	base[2]= CMPcdr((V85));
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk41)();
	if(vs_base<vs_top){
	V93= vs_base[0];
	vs_base++;
	}else{
	V93= Cnil;}
	if(vs_base<vs_top){
	V90= vs_base[0];
	vs_base++;
	}else{
	V90= Cnil;}
	if(vs_base<vs_top){
	V92= vs_base[0];
	vs_base++;
	}else{
	V92= Cnil;}
	if(vs_base<vs_top){
	V91= vs_base[0];
	vs_base++;
	}else{
	V91= Cnil;}
	if(vs_base<vs_top){
	V94= vs_base[0];
	}else{
	V94= Cnil;}
	vs_top=sup;
	(void)((*(LnkLI42))((V90)));
	{register object V96;
	register object V97;
	V96= CMPcar((V85));
	V97= CMPcar((V96));
	goto T259;
T259:;
	if(!(((V96))==Cnil)){
	goto T260;}
	goto T255;
	goto T260;
T260:;
	if(!(type_of((V97))==t_symbol)){
	goto T266;}
	{object V98;
	V98= (*(LnkLI43))((V97),(V90),(V91),(V92));
	V88= make_cons(V97,(V88));
	{object V100;
	V100= (*(LnkLI44))(STREF(object,(V98),20));
	V86= make_cons((V100),(V86));}
	V87= make_cons(V98,(V87));
	(VV[1]->s.s_dbind)= make_cons(V98,(VV[1]->s.s_dbind));
	goto T264;}
	goto T266;
T266:;
	if(!(type_of((V97))==t_cons)){
	goto T277;}
	if((CMPcdr((V97)))==Cnil){
	goto T278;}
	if((CMPcddr((V97)))==Cnil){
	goto T278;}
	goto T277;
T277:;
	(void)((VFUN_NARGS=2,(*(LnkLI45))(VV[23],(V97))));
	goto T264;
	goto T278;
T278:;
	{register object V103;
	V103= (*(LnkLI43))(CMPcar((V97)),(V90),(V91),(V92));
	{object V104;
	V104= CMPcar((V97));
	V88= make_cons((V104),(V88));}
	{object V105;
	if(!((CMPcdr((V97)))==Cnil)){
	goto T291;}
	V105= (*(LnkLI44))(STREF(object,(V103),20));
	goto T289;
	goto T291;
T291:;
	V106= (*(LnkLI47))(CMPcadr((V97)),(V95));
	V105= (*(LnkLI46))(STREF(object,(V103),20),/* INLINE-ARGS */V106,CMPcadr((V97)));
	goto T289;
T289:;
	V86= make_cons((V105),(V86));}
	V87= make_cons(V103,(V87));
	(VV[1]->s.s_dbind)= make_cons(V103,(VV[1]->s.s_dbind));}
	goto T264;
T264:;
	V96= CMPcdr((V96));
	V97= CMPcar((V96));
	goto T259;}
	goto T255;
T255:;
	(void)((*(LnkLI48))((V88),(V92),(V91)));
	V93= (*(LnkLI49))((V94),(V93));
	(void)((*(LnkLI50))((V95),CMPcadr((V93))));
	V109= Ct;
	STSET(object,(V95),8, STREF(object,CMPcadr((V93)),8));
	(void)(STREF(object,CMPcadr((V93)),8));
	{register object V110;
	object V111;
	V110= (V87);
	V111= CMPcar((V110));
	goto T311;
T311:;
	if(!(((V110))==Cnil)){
	goto T312;}
	goto T307;
	goto T312;
T312:;
	(void)((*(LnkLI51))((V111)));
	V110= CMPcdr((V110));
	V111= CMPcar((V110));
	goto T311;}
	goto T307;
T307:;
	if(!(eql((V89),(VV[0]->s.s_dbind)))){
	goto T323;}
	goto T322;
	goto T323;
T323:;
	V112= Ct;
	STSET(object,(V95),16, Ct);
	(void)(Ct);
	goto T322;
T322:;
	V113= reverse((V87));
	{object V114 = list(5,VV[22],(V95),/* INLINE-ARGS */V113,reverse((V86)),(V93));
	bds_unwind1;
	VMR3(V114)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2LET*	*/

static object LI4(V118,V119,V120)

object V118;object V119;object V120;
{	 VMB4 VMS4 VMV4
	bds_check;
	goto TTL;
TTL:;
	{object V121;
	V121= Cnil;
	bds_bind(VV[6],(VV[6]->s.s_dbind));
	bds_bind(VV[7],(VV[7]->s.s_dbind));
	bds_bind(VV[8],(VV[8]->s.s_dbind));
	bds_bind(VV[9],(VV[9]->s.s_dbind));
	{object V122;
	register object V123;
	V122= (V118);
	V123= (V119);
	goto T328;
T328:;
	if(!(((V122))==Cnil)){
	goto T329;}
	goto T326;
	goto T329;
T329:;
	{object V124;
	register object V125;
	object V126;
	V124= CMPcar((V123));
	V125= CMPcar((V122));
	V126= (*(LnkLI52))((V125));
	if(((V126))==Cnil){
	goto T337;}
	V127= Ct;
	STSET(object,(V125),4, (V126));
	(void)((V126));
	(VV[10]->s.s_dbind)= number_plus((VV[10]->s.s_dbind),small_fixnum(1));
	V128= Ct;
	STSET(object,(V125),16, (VV[10]->s.s_dbind));
	(void)((VV[10]->s.s_dbind));
	goto T337;
T337:;
	{register object x= STREF(object,(V125),4),V129= VV[24];
	while(V129!=Cnil)
	if(eql(x,V129->c.c_car)){
	goto T344;
	}else V129=V129->c.c_cdr;
	goto T343;}
	goto T344;
T344:;
	goto T333;
	goto T343;
T343:;
	{object V130= CMPcar((V124));
	if((V130!= VV[61]))goto T345;
	if(((*(LnkLI69))((V125),(V120),CMPcdr((V123))))==Cnil){
	goto T347;}
	V131= Ct;
	STSET(object,(V125),4, VV[13]);
	(void)(VV[13]);
	V132= CMPcaddr((V124));
	V133= Ct;
	STSET(object,(V125),16, /* INLINE-ARGS */V132);
	(void)(/* INLINE-ARGS */V132);
	goto T333;
	goto T347;
T347:;
	{object V134;
	V134= ((STREF(object,(V125),4))==(VV[15])?Ct:Cnil);
	if(((V134))==Cnil){
	goto T352;}
	goto T333;
	goto T352;
T352:;
	if(!((STREF(object,(V125),4))==(VV[11]))){
	goto T355;}{object V135;
	base[7]= STREF(object,(V125),16);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	V135= vs_base[0];
	if(V135==Cnil)goto T357;
	goto T333;
	goto T357;
T357:;}
	(void)((*(LnkLI64))());
	goto T333;
	goto T355;
T355:;
	V136= (*(LnkLI55))();
	V137= Ct;
	STSET(object,(V125),8, /* INLINE-ARGS */V136);
	(void)(/* INLINE-ARGS */V136);
	goto T333;}
	goto T345;
T345:;
	if((V130!= VV[3]))goto T360;
	{register object V138;
	V138= CMPcaaddr((V124));
	if(((*(LnkLI69))((V125),(V120),CMPcdr((V123))))==Cnil){
	goto T363;}
	{register object x= STREF(object,(V138),4),V139= VV[25];
	while(V139!=Cnil)
	if(eql(x,V139->c.c_car)){
	goto T367;
	}else V139=V139->c.c_cdr;
	goto T363;}
	goto T367;
T367:;
	if((STREF(object,(V138),12))!=Cnil){
	goto T363;}
	if(((*(LnkLI63))((V138),CMPcdr((V123))))!=Cnil){
	goto T363;}
	{register object x= (V138),V140= STREF(object,CMPcadr((V120)),0);
	while(V140!=Cnil)
	if(eql(x,V140->c.c_car)){
	goto T363;
	}else V140=V140->c.c_cdr;}
	V141= Ct;
	STSET(object,(V125),4, VV[13]);
	(void)(VV[13]);
	{object V143= STREF(object,(V138),4);
	if((V143!= VV[28]))goto T375;
	V142= list(2,VV[16],STREF(object,(V138),8));
	goto T374;
	goto T375;
T375:;
	if((V143!= VV[13]))goto T376;
	V142= STREF(object,(V138),16);
	goto T374;
	goto T376;
T376:;
	if((V143!= VV[15]))goto T377;
	V142= list(2,VV[18],STREF(object,(V138),16));
	goto T374;
	goto T377;
T377:;
	V142= (*(LnkLI64))();}
	goto T374;
T374:;
	V144= Ct;
	STSET(object,(V125),16, V142);
	(void)(V142);
	goto T333;
	goto T363;
T363:;
	{object V145;
	V145= ((STREF(object,(V125),4))==(VV[15])?Ct:Cnil);
	if(((V145))==Cnil){
	goto T380;}
	goto T333;
	goto T380;
T380:;
	V146= (*(LnkLI55))();
	V147= Ct;
	STSET(object,(V125),8, /* INLINE-ARGS */V146);
	(void)(/* INLINE-ARGS */V146);
	goto T333;}}
	goto T360;
T360:;
	if((V130!= VV[70])
	&& !eql(V130,VV[26])
	&& !eql(V130,VV[27]))goto T382;
	goto T333;
	goto T382;
T382:;
	V148= (*(LnkLI55))();
	V149= Ct;
	STSET(object,(V125),8, /* INLINE-ARGS */V148);
	(void)(/* INLINE-ARGS */V148);}}
	goto T333;
T333:;
	V122= CMPcdr((V122));
	V123= CMPcdr((V123));
	goto T328;}
	goto T326;
T326:;
	V121= (*(LnkLI65))((V118));
	{object V150;
	object V151;
	register object V152;
	register object V153;
	V150= (V118);
	V151= (V119);
	V152= Cnil;
	V153= Cnil;
	goto T391;
T391:;
	if(((V150))!=Cnil){
	goto T392;}
	goto T389;
	goto T392;
T392:;
	V152= CMPcar((V150));
	V153= CMPcar((V151));
	{object V154= STREF(object,(V152),4);
	if((V154== VV[56])
	|| (V154== VV[57])
	|| (V154== VV[58])
	|| (V154== VV[59])
	|| (V154== VV[15]))goto T402;
	if((V154!= VV[60]))goto T401;
	goto T402;
T402:;
	base[4]= list(3,VV[3],(V152),Cnil);
	bds_bind(VV[20],base[4]);
	V155= (*(LnkLI12))((V153));
	bds_unwind1;
	goto T400;
	goto T401;
T401:;
	if((V154!= VV[13]))goto T404;
	goto T400;
	goto T404;
T404:;
	{object V156= CMPcar((V153));
	if((V156!= VV[61]))goto T405;
	(void)((*(LnkLI66))((V152),CMPcaddr((V153))));
	goto T400;
	goto T405;
T405:;
	if((V156!= VV[3]))goto T406;
	V157= list(3,VV[3],CMPcaaddr((V153)),CMPcadr(CMPcaddr((V153))));
	(void)((*(LnkLI66))((V152),/* INLINE-ARGS */V157));
	goto T400;
	goto T406;
T406:;
	(void)((*(LnkLI71))((V152),(V153)));}}
	goto T400;
T400:;
	V150= CMPcdr((V150));
	V151= CMPcdr((V151));
	goto T391;}
	goto T389;
T389:;
	base[4]= (V120);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	if(((V121))==Cnil){
	goto T414;}
	princ_char(125,VV[21]);
	{object V158 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR4(V158)}
	goto T414;
T414:;
	{object V159 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR4(V159)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CAN-BE-REPLACED	*/

static object LI5(V162,V163)

register object V162;object V163;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	if(!((STREF(object,(V162),4))==(VV[28]))){
	goto T419;}
	goto T417;
	goto T419;
T419:;
	if((STREF(object,(V162),4))==(VV[15])){
	goto T421;}
	goto T418;
	goto T421;
T421:;
	if((fix(STREF(object,(V162),24)))<(fix((VV[29]->s.s_dbind)))){
	goto T417;}
	goto T418;
T418:;
	{object V164 = Cnil;
	VMR5(V164)}
	goto T417;
T417:;
	if((STREF(object,(V162),12))==Cnil){
	goto T423;}
	{object V165 = Cnil;
	VMR5(V165)}
	goto T423;
T423:;
	if((((STREF(object,(V162),16))==(VV[30])?Ct:Cnil))==Cnil){
	goto T425;}
	{object V166 = Cnil;
	VMR5(V166)}
	goto T425;
T425:;
	{register object x= (V162),V168= STREF(object,CMPcadr((V163)),0);
	while(V168!=Cnil)
	if(eql(x,V168->c.c_car)){
	V167= V168;
	goto T427;
	}else V168=V168->c.c_cdr;
	V167= Cnil;}
	goto T427;
T427:;
	{object V169 = ((V167)==Cnil?Ct:Cnil);
	VMR5(V169)}
	return Cnil;
}
/*	local entry for function CAN-BE-REPLACED*	*/

static object LI6(V173,V174,V175)

register object V173;object V174;object V175;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	if(((*(LnkLI62))((V173),(V174)))!=Cnil){
	goto T428;}
	{object V176 = Cnil;
	VMR6(V176)}
	goto T428;
T428:;
	{register object V177;
	register object V178;
	V177= (V175);
	V178= CMPcar((V177));
	goto T433;
T433:;
	if(!(((V177))==Cnil)){
	goto T434;}
	{object V179 = Ct;
	VMR6(V179)}
	goto T434;
T434:;
	{register object x= (V173),V180= STREF(object,CMPcadr((V178)),0);
	while(V180!=Cnil)
	if(eql(x,V180->c.c_car)){
	goto T440;
	}else V180=V180->c.c_cdr;
	goto T438;}
	goto T440;
T440:;
	{object V181 = Cnil;
	VMR6(V181)}
	goto T438;
T438:;
	V177= CMPcdr((V177));
	V178= CMPcar((V177));
	goto T433;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WRITE-BLOCK-OPEN	*/

static object LI7(V183)

object V183;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V184;
	V184= Cnil;
	{register object V185;
	register object V186;
	V185= (V183);
	V186= CMPcar((V185));
	goto T450;
T450:;
	if(!(((V185))==Cnil)){
	goto T451;}
	goto T446;
	goto T451;
T451:;
	{register object V187;
	V187= STREF(object,(V186),4);
	{register object x= (V187),V188= VV[31];
	while(V188!=Cnil)
	if(eql(x,V188->c.c_car)){
	goto T458;
	}else V188=V188->c.c_cdr;
	goto T455;}
	goto T458;
T458:;
	princ_str("\n	",VV[21]);
	if(((V184))!=Cnil){
	goto T460;}
	princ_char(123,VV[21]);
	V184= Ct;
	goto T460;
T460:;
	(void)((*(LnkLI72))((V186)));}
	goto T455;
T455:;
	V185= CMPcdr((V185));
	V186= CMPcar((V185));
	goto T450;}
	goto T446;
T446:;
	{object V189 = (V184);
	VMR7(V189)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for STACK-LET	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	vs_top=sup;
	{object V190=base[0]->c.c_cdr;
	base[2]= V190;}
	base[3]= make_cons(VV[2],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function C1STACK-LET	*/

static object LI9(V192)

object V192;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{object V193;
	register object V194;
	V193= Cnil;
	V194= Cnil;
	{object V195;
	V195= CMPcar((V192));
	{register object V196;
	register object V197;
	V196= (V195);
	V197= CMPcar((V196));
	goto T478;
T478:;
	if(!(((V196))==Cnil)){
	goto T479;}
	goto T474;
	goto T479;
T479:;
	{object V198;
	if(!(type_of((V197))!=t_cons)){
	goto T486;}
	V198= (V197);
	goto T484;
	goto T486;
T486:;
	{register object V199;
	{object V200;
	register object V201;
	V200= CMPcar((V197));
	V201= CMPcadr((V197));
	if(type_of((V201))==t_cons){
	goto T491;}
	V199= Cnil;
	goto T488;
	goto T491;
T491:;
	if(!((CMPcar((V201)))==(VV[32]))){
	goto T495;}
	goto T493;
	goto T495;
T495:;
	if((CMPcar((V201)))==(VV[33])){
	goto T497;}
	goto T494;
	goto T497;
T497:;
	if((CMPcddr((V201)))==Cnil){
	goto T499;}
	goto T494;
	goto T499;
T499:;
	V201= list(3,VV[32],CMPcadr((V201)),Cnil);
	if(((V201))!=Cnil){
	goto T493;}
	goto T494;
T494:;
	V199= Cnil;
	goto T488;
	goto T493;
T493:;
	{object V202;
	(VV[10]->s.s_dbind)= number_plus((VV[10]->s.s_dbind),small_fixnum(1));
	V202= (VV[10]->s.s_dbind);
	V194= make_cons((V202),(V194));}
	V199= list(2,(V200),listA(3,VV[34],CMPcar((V194)),CMPcdr((V201))));}
	goto T488;
T488:;
	if(((V199))==Cnil){
	goto T507;}
	V198= (V199);
	goto T484;
	goto T507;
T507:;
	(void)((VFUN_NARGS=3,(*(LnkLI73))(VV[35],(V197),CMPcdr((V192)))));
	V198= (V197);}
	goto T484;
T484:;
	V193= make_cons((V198),(V193));}
	V196= CMPcdr((V196));
	V197= CMPcar((V196));
	goto T478;}
	goto T474;
T474:;
	{object V203;
	V204= nreverse((V193));
	V205= listA(3,VV[2],/* INLINE-ARGS */V204,CMPcdr((V192)));
	V203= (*(LnkLI74))(/* INLINE-ARGS */V205);
	{object V206 = list(4,VV[36],CMPcadr((V203)),(V194),(V203));
	VMR9(V206)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2STACK-LET	*/

static object LI10(V209,V210)

object V209;object V210;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V211;
	(VV[10]->s.s_dbind)= number_plus((VV[10]->s.s_dbind),small_fixnum(1));
	V211= (VV[10]->s.s_dbind);
	princ_str("\n	{Cons_Macro",VV[21]);
	(void)((*(LnkLI75))((V211)));
	princ_char(59,VV[21]);
	base[0]= (V210);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	princ_char(125,VV[21]);
	princ_str("\n#define Cons_Macro",VV[37]);
	(void)((*(LnkLI76))((V211)));
	base[0]= Cnil;
	base[1]= VV[38];
	base[2]= (V209);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V212= vs_base[0];
	(void)((*(LnkLI76))(V212));
	{object V213 = Cnil;
	VMR10(V213)}}
	base[0]=base[0];
	return Cnil;
}
static object  LnkTLI76(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[76],(void **)(void *)&LnkLI76,1,first,ap);va_end(ap);return V1;} /* WT-H1 */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[75],(void **)(void *)&LnkLI75,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI74(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[74],(void **)(void *)&LnkLI74,1,first,ap);va_end(ap);return V1;} /* C1EXPR */
static object  LnkTLI73(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[73],(void **)(void *)&LnkLI73,first,ap);va_end(ap);return V1;} /* CMPWARN */
static object  LnkTLI72(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[72],(void **)(void *)&LnkLI72,1,first,ap);va_end(ap);return V1;} /* WT-VAR-DECL */
static object  LnkTLI71(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[71],(void **)(void *)&LnkLI71,2,first,ap);va_end(ap);return V1;} /* C2BIND-INIT */
static object  LnkTLI69(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[69],(void **)(void *)&LnkLI69,3,first,ap);va_end(ap);return V1;} /* CAN-BE-REPLACED* */
static void LnkT68(){ call_or_link(VV[68],(void **)(void *)&Lnk68);} /* C2EXPR */
static object  LnkTLI67(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[67],(void **)(void *)&LnkLI67,1,first,ap);va_end(ap);return V1;} /* C2BIND */
static object  LnkTLI66(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[66],(void **)(void *)&LnkLI66,2,first,ap);va_end(ap);return V1;} /* C2BIND-LOC */
static object  LnkTLI12(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[12],(void **)(void *)&LnkLI12,1,first,ap);va_end(ap);return V1;} /* C2EXPR* */
static object  LnkTLI65(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[65],(void **)(void *)&LnkLI65,1,first,ap);va_end(ap);return V1;} /* WRITE-BLOCK-OPEN */
static object  LnkTLI64(){return call_proc0(VV[64],(void **)(void *)&LnkLI64);} /* BABOON */
static object  LnkTLI63(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[63],(void **)(void *)&LnkLI63,2,first,ap);va_end(ap);return V1;} /* ARGS-INFO-CHANGED-VARS */
static object  LnkTLI62(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[62],(void **)(void *)&LnkLI62,2,first,ap);va_end(ap);return V1;} /* CAN-BE-REPLACED */
static object  LnkTLI55(){return call_proc0(VV[55],(void **)(void *)&LnkLI55);} /* VS-PUSH */
static object  LnkTLI54(){return call_proc0(VV[54],(void **)(void *)&LnkLI54);} /* WFS-ERROR */
static void LnkT53(){ call_or_link(VV[53],(void **)(void *)&Lnk53);} /* FIXNUMP */
static object  LnkTLI52(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[52],(void **)(void *)&LnkLI52,1,first,ap);va_end(ap);return V1;} /* C2VAR-KIND */
static object  LnkTLI51(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[51],(void **)(void *)&LnkLI51,1,first,ap);va_end(ap);return V1;} /* CHECK-VREF */
static object  LnkTLI50(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[50],(void **)(void *)&LnkLI50,2,first,ap);va_end(ap);return V1;} /* ADD-INFO */
static object  LnkTLI49(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[49],(void **)(void *)&LnkLI49,2,first,ap);va_end(ap);return V1;} /* C1DECL-BODY */
static object  LnkTLI48(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[48],(void **)(void *)&LnkLI48,3,first,ap);va_end(ap);return V1;} /* CHECK-VDECL */
static object  LnkTLI47(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[47],(void **)(void *)&LnkLI47,2,first,ap);va_end(ap);return V1;} /* C1EXPR* */
static object  LnkTLI46(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[46],(void **)(void *)&LnkLI46,3,first,ap);va_end(ap);return V1;} /* AND-FORM-TYPE */
static object  LnkTLI45(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[45],(void **)(void *)&LnkLI45,first,ap);va_end(ap);return V1;} /* CMPERR */
static object  LnkTLI44(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[44],(void **)(void *)&LnkLI44,1,first,ap);va_end(ap);return V1;} /* DEFAULT-INIT */
static object  LnkTLI43(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[43],(void **)(void *)&LnkLI43,4,first,ap);va_end(ap);return V1;} /* C1MAKE-VAR */
static object  LnkTLI42(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[42],(void **)(void *)&LnkLI42,1,first,ap);va_end(ap);return V1;} /* C1ADD-GLOBALS */
static void LnkT41(){ call_or_link(VV[41],(void **)(void *)&Lnk41);} /* C1BODY */
static object  LnkTLI40(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[40],(void **)(void *)&LnkLI40,3,first,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */
static object  LnkTLI39(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[39],(void **)(void *)&LnkLI39,first,ap);va_end(ap);return V1;} /* MAKE-INFO */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

