
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
	if(!(endp_prop((V2)))){
	goto T11;}
	(void)((*(LnkLI40))(VV[2],small_fixnum(1),small_fixnum(0)));
	goto T11;
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
	goto T23;
T23:;
	if(!(endp_prop((V13)))){
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
	V19= structure_ref((V15),VV[3],5);
	V18= (*(LnkLI44))(/* INLINE-ARGS */V19);
	V5= make_cons((V18),(V5));
	goto T28;}}
	goto T30;
T30:;
	if(!(type_of((V14))==t_cons)){
	goto T40;}
	if(endp_prop(cdr((V14)))){
	goto T39;}
	if(endp_prop(cddr((V14)))){
	goto T39;}
	goto T40;
T40:;
	(void)((VFUN_NARGS=2,(*(LnkLI45))(VV[4],(V14))));
	goto T39;
T39:;
	{object V20;
	V20= (*(LnkLI43))(car((V14)),(V8),(V9),(V10));
	{object V21;
	V21= car((V14));
	V7= make_cons((V21),(V7));}
	V6= make_cons(V20,(V6));
	{object V23;
	if(!(endp_prop(cdr((V14))))){
	goto T54;}
	V24= structure_ref((V20),VV[3],5);
	V23= (*(LnkLI44))(/* INLINE-ARGS */V24);
	goto T52;
	goto T54;
T54:;
	V25= structure_ref((V20),VV[3],5);
	V26= (*(LnkLI47))(cadr((V14)),(V3));
	V23= (*(LnkLI46))(/* INLINE-ARGS */V25,/* INLINE-ARGS */V26,cadr((V14)));
	goto T52;
T52:;
	V5= make_cons((V23),(V5));}}
	goto T28;
T28:;
	V13= cdr((V13));
	V14= car((V13));
	goto T23;}
	goto T19;
T19:;
	{register object V27;
	object V28;
	V27= reverse((V6));
	V28= car((V27));
	goto T66;
T66:;
	if(!(endp_prop((V27)))){
	goto T67;}
	goto T62;
	goto T67;
T67:;
	(VV[1]->s.s_dbind)= make_cons(V28,(VV[1]->s.s_dbind));
	V27= cdr((V27));
	V28= car((V27));
	goto T66;}
	goto T62;
T62:;
	(void)((*(LnkLI48))((V7),(V10),(V9)));
	V11= (*(LnkLI49))((V12),(V11));
	(void)((*(LnkLI50))((V3),cadr((V11))));
	V30= structure_ref(cadr((V11)),VV[5],2);
	(void)(structure_set((V3),VV[5],2,/* INLINE-ARGS */V30));
	{register object V31;
	object V32;
	V31= (V6);
	V32= car((V31));
	goto T87;
T87:;
	if(!(endp_prop((V31)))){
	goto T88;}
	goto T83;
	goto T88;
T88:;
	(void)((*(LnkLI51))((V32)));
	V31= cdr((V31));
	V32= car((V31));
	goto T87;}
	goto T83;
T83:;
	if(!(eql((V4),symbol_value(VV[0])))){
	goto T99;}
	goto T98;
	goto T99;
T99:;
	(void)(structure_set((V3),VV[5],4,Ct));
	goto T98;
T98:;
	V33= reverse((V6));
	{object V34 = list(5,VV[2],(V3),/* INLINE-ARGS */V33,reverse((V5)),(V11));
	bds_unwind1;
	VMR1(V34)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2LET	*/

static object LI2(V38,V39,V40)

object V38;object V39;object V40;
{	 VMB2 VMS2 VMV2
	bds_check;
	goto TTL;
TTL:;
	{object V41;
	register object V42;
	register object V43;
	V41= Cnil;
	V42= Cnil;
	V43= Cnil;
	bds_bind(VV[6],symbol_value(VV[6]));
	bds_bind(VV[7],symbol_value(VV[7]));
	bds_bind(VV[8],symbol_value(VV[8]));
	bds_bind(VV[9],symbol_value(VV[9]));
	{object V44;
	object V45;
	object V46;
	V44= (V38);
	V45= (V39);
	V46= Cnil;
	goto T106;
T106:;
	if(!(endp_prop((V44)))){
	goto T107;}
	goto T104;
	goto T107;
T107:;
	{register object V47;
	register object V48;
	object V49;
	V47= car((V45));
	V48= car((V44));
	V49= (*(LnkLI52))((V48));
	if(((V49))==Cnil){
	goto T117;}
	(void)(structure_set((V48),VV[3],1,(V49)));
	setq(VV[10],number_plus(symbol_value(VV[10]),small_fixnum(1)));
	(void)(structure_set((V48),VV[3],4,symbol_value(VV[10])));
	goto T115;
	goto T117;
T117:;
	V50= structure_ref((V48),VV[3],1);
	if(!((/* INLINE-ARGS */V50)==(VV[11]))){
	goto T122;}{object V51;
	base[7]= structure_ref((V48),VV[3],4);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	V51= vs_base[0];
	if(V51==Cnil)goto T124;
	goto T115;
	goto T124;
T124:;}
	(void)((*(LnkLI54))());
	goto T115;
	goto T122;
T122:;
	V52= (*(LnkLI55))();
	(void)(structure_set((V48),VV[3],2,/* INLINE-ARGS */V52));
	goto T115;
T115:;
	V54= structure_ref((V48),VV[3],1);
	{object V53= /* INLINE-ARGS */V54;
	if((V53!= VV[56])
	&& (V53!= VV[57])
	&& (V53!= VV[58])
	&& (V53!= VV[59])
	&& (V53!= VV[60]))goto T128;
	{object V55;
	V55= list(3,VV[12],list(3,VV[3],(V48),Cnil),(V47));
	V43= make_cons((V55),(V43));
	goto T127;}
	goto T128;
T128:;
	{object V56= car((V47));
	if((V56!= VV[61]))goto T131;
	if(((*(LnkLI62))((V48),(V40)))==Cnil){
	goto T133;}
	(void)(structure_set((V48),VV[3],1,VV[13]));
	(void)(structure_set((V48),VV[3],4,caddr((V47))));
	goto T127;
	goto T133;
T133:;
	{object V57;
	V57= list(2,(V48),caddr((V47)));
	V42= make_cons((V57),(V42));
	goto T127;}
	goto T131;
T131:;
	if((V56!= VV[3]))goto T138;
	{register object V58;
	V58= caaddr((V47));
	if(((*(LnkLI63))((V58),cdr((V45))))!=Cnil){
	goto T140;}
	V60= structure_ref((V58),VV[3],1);
	{register object x= /* INLINE-ARGS */V60,V59= VV[14];
	while(!endp(V59))
	if(eql(x,V59->c.c_car)){
	goto T145;
	}else V59=V59->c.c_cdr;
	goto T141;}
	goto T145;
T145:;
	V62= structure_ref((V58),VV[3],0);
	{register object x= /* INLINE-ARGS */V62,V61= (V46);
	while(!endp(V61))
	if(eql(x,V61->c.c_car)){
	goto T146;
	}else V61=V61->c.c_cdr;
	goto T141;}
	goto T146;
T146:;
	goto T140;
T140:;
	{object V63;
	V65= structure_ref((V48),VV[3],1);
	if(!((/* INLINE-ARGS */V65)==(VV[15]))){
	goto T150;}
	V64= list(3,VV[3],(V48),Cnil);
	goto T148;
	goto T150;
T150:;
	V66= structure_ref((V48),VV[3],1);
	if(!((/* INLINE-ARGS */V66)==(VV[11]))){
	goto T153;}
	V64= list(2,VV[11],structure_ref((V48),VV[3],4));
	goto T148;
	goto T153;
T153:;
	{object V67;
	V67= make_cons((V48),Cnil);
	V42= make_cons((V67),(V42));}
	V64= list(2,VV[16],structure_ref((V48),VV[3],2));
	goto T148;
T148:;
	V63= list(3,VV[12],V64,(V47));
	V43= make_cons((V63),(V43));
	goto T127;}
	goto T141;
T141:;
	if(((*(LnkLI62))((V48),(V40)))==Cnil){
	goto T160;}
	V69= structure_ref((V58),VV[3],1);
	{register object x= /* INLINE-ARGS */V69,V68= VV[17];
	while(!endp(V68))
	if(eql(x,V68->c.c_car)){
	goto T164;
	}else V68=V68->c.c_cdr;
	goto T160;}
	goto T164;
T164:;
	if((structure_ref((V58),VV[3],3))!=Cnil){
	goto T160;}
	V71= structure_ref(cadr((V40)),VV[5],0);
	{register object x= (V58),V70= /* INLINE-ARGS */V71;
	while(!endp(V70))
	if(eql(x,V70->c.c_car)){
	goto T160;
	}else V70=V70->c.c_cdr;}
	(void)(structure_set((V48),VV[3],1,VV[13]));
	V74= structure_ref((V58),VV[3],1);
	{object V73= /* INLINE-ARGS */V74;
	if((V73!= VV[28]))goto T170;
	V72= list(2,VV[16],structure_ref((V58),VV[3],2));
	goto T169;
	goto T170;
T170:;
	if((V73!= VV[13]))goto T171;
	V72= structure_ref((V58),VV[3],4);
	goto T169;
	goto T171;
T171:;
	if((V73!= VV[15]))goto T172;
	V72= list(2,VV[18],structure_ref((V58),VV[3],4));
	goto T169;
	goto T172;
T172:;
	V72= (*(LnkLI64))();}
	goto T169;
T169:;
	(void)(structure_set((V48),VV[3],4,V72));
	goto T127;
	goto T160;
T160:;
	{object V75;
	V75= list(2,(V48),list(3,VV[3],(V58),cadr(caddr((V47)))));
	V42= make_cons((V75),(V42));
	goto T127;}}
	goto T138;
T138:;
	{object V76;
	V78= structure_ref((V48),VV[3],1);
	if(!((/* INLINE-ARGS */V78)==(VV[15]))){
	goto T178;}
	V77= list(3,VV[3],(V48),Cnil);
	goto T176;
	goto T178;
T178:;
	V79= structure_ref((V48),VV[3],1);
	if(!((/* INLINE-ARGS */V79)==(VV[11]))){
	goto T181;}
	V77= list(2,VV[11],structure_ref((V48),VV[3],4));
	goto T176;
	goto T181;
T181:;
	{object V80;
	V80= make_cons((V48),Cnil);
	V42= make_cons((V80),(V42));}
	V77= list(2,VV[16],structure_ref((V48),VV[3],2));
	goto T176;
T176:;
	V76= list(3,VV[12],V77,(V47));
	V43= make_cons((V76),(V43));}}}
	goto T127;
T127:;
	V81= structure_ref((V48),VV[3],1);
	if(!((/* INLINE-ARGS */V81)==(VV[19]))){
	goto T111;}
	{object V82;
	V82= structure_ref((V48),VV[3],0);
	V46= make_cons((V82),(V46));}}
	goto T111;
T111:;
	V44= cdr((V44));
	V45= cdr((V45));
	goto T106;}
	goto T104;
T104:;
	V41= (*(LnkLI65))((V38));
	{object V83;
	object V84;
	V83= reverse((V43));
	V84= car((V83));
	goto T201;
T201:;
	if(!(endp_prop((V83)))){
	goto T202;}
	goto T197;
	goto T202;
T202:;
	base[6]= cadr((V84));
	bds_bind(VV[20],base[6]);
	V85= (*(LnkLI12))(caddr((V84)));
	bds_unwind1;
	V83= cdr((V83));
	V84= car((V83));
	goto T201;}
	goto T197;
T197:;
	{object V86;
	object V87;
	V86= reverse((V42));
	V87= car((V86));
	goto T217;
T217:;
	if(!(endp_prop((V86)))){
	goto T218;}
	goto T213;
	goto T218;
T218:;
	if((cdr((V87)))==Cnil){
	goto T224;}
	(void)((*(LnkLI66))(car((V87)),cadr((V87))));
	goto T222;
	goto T224;
T224:;
	(void)((*(LnkLI67))(car((V87))));
	goto T222;
T222:;
	V86= cdr((V86));
	V87= car((V86));
	goto T217;}
	goto T213;
T213:;
	base[4]= (V40);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	if(((V41))==Cnil){
	goto T234;}
	princ_char(125,VV[21]);
	{object V88 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR2(V88)}
	goto T234;
T234:;
	{object V89 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR2(V89)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1LET*	*/

static object LI3(V91)

object V91;
{	 VMB3 VMS3 VMV3
	bds_check;
	goto TTL;
TTL:;
	{register object V92;
	register object V93;
	register object V94;
	object V95;
	object V96;
	object V97;
	object V98;
	object V99;
	object V100;
	object V101;
	V92= Cnil;
	V93= Cnil;
	V94= Cnil;
	V95= symbol_value(VV[0]);
	V96= Cnil;
	V97= Cnil;
	V98= Cnil;
	V99= Cnil;
	V100= Cnil;
	V101= (VFUN_NARGS=0,(*(LnkLI39))());
	bds_bind(VV[1],symbol_value(VV[1]));
	if(!(endp_prop((V91)))){
	goto T247;}
	(void)((*(LnkLI40))(VV[22],small_fixnum(1),small_fixnum(0)));
	goto T247;
T247:;
	base[2]= cdr((V91));
	base[3]= Cnil;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk41)();
	if(vs_base<vs_top){
	V99= vs_base[0];
	vs_base++;
	}else{
	V99= Cnil;}
	if(vs_base<vs_top){
	V96= vs_base[0];
	vs_base++;
	}else{
	V96= Cnil;}
	if(vs_base<vs_top){
	V98= vs_base[0];
	vs_base++;
	}else{
	V98= Cnil;}
	if(vs_base<vs_top){
	V97= vs_base[0];
	vs_base++;
	}else{
	V97= Cnil;}
	if(vs_base<vs_top){
	V100= vs_base[0];
	}else{
	V100= Cnil;}
	vs_top=sup;
	(void)((*(LnkLI42))((V96)));
	{register object V102;
	register object V103;
	V102= car((V91));
	V103= car((V102));
	goto T259;
T259:;
	if(!(endp_prop((V102)))){
	goto T260;}
	goto T255;
	goto T260;
T260:;
	if(!(type_of((V103))==t_symbol)){
	goto T266;}
	{object V104;
	V104= (*(LnkLI43))((V103),(V96),(V97),(V98));
	V94= make_cons(V103,(V94));
	{object V106;
	V107= structure_ref((V104),VV[3],5);
	V106= (*(LnkLI44))(/* INLINE-ARGS */V107);
	V92= make_cons((V106),(V92));}
	V93= make_cons(V104,(V93));
	(VV[1]->s.s_dbind)= make_cons(V104,(VV[1]->s.s_dbind));
	goto T264;}
	goto T266;
T266:;
	if(!(type_of((V103))==t_cons)){
	goto T277;}
	if(endp_prop(cdr((V103)))){
	goto T278;}
	if(endp_prop(cddr((V103)))){
	goto T278;}
	goto T277;
T277:;
	(void)((VFUN_NARGS=2,(*(LnkLI45))(VV[23],(V103))));
	goto T264;
	goto T278;
T278:;
	{register object V110;
	V110= (*(LnkLI43))(car((V103)),(V96),(V97),(V98));
	{object V111;
	V111= car((V103));
	V94= make_cons((V111),(V94));}
	{object V112;
	if(!(endp_prop(cdr((V103))))){
	goto T291;}
	V113= structure_ref((V110),VV[3],5);
	V112= (*(LnkLI44))(/* INLINE-ARGS */V113);
	goto T289;
	goto T291;
T291:;
	V114= structure_ref((V110),VV[3],5);
	V115= (*(LnkLI47))(cadr((V103)),(V101));
	V112= (*(LnkLI46))(/* INLINE-ARGS */V114,/* INLINE-ARGS */V115,cadr((V103)));
	goto T289;
T289:;
	V92= make_cons((V112),(V92));}
	V93= make_cons(V110,(V93));
	(VV[1]->s.s_dbind)= make_cons(V110,(VV[1]->s.s_dbind));}
	goto T264;
T264:;
	V102= cdr((V102));
	V103= car((V102));
	goto T259;}
	goto T255;
T255:;
	(void)((*(LnkLI48))((V94),(V98),(V97)));
	V99= (*(LnkLI49))((V100),(V99));
	(void)((*(LnkLI50))((V101),cadr((V99))));
	V118= structure_ref(cadr((V99)),VV[5],2);
	(void)(structure_set((V101),VV[5],2,/* INLINE-ARGS */V118));
	{register object V119;
	object V120;
	V119= (V93);
	V120= car((V119));
	goto T311;
T311:;
	if(!(endp_prop((V119)))){
	goto T312;}
	goto T307;
	goto T312;
T312:;
	(void)((*(LnkLI51))((V120)));
	V119= cdr((V119));
	V120= car((V119));
	goto T311;}
	goto T307;
T307:;
	if(!(eql((V95),symbol_value(VV[0])))){
	goto T323;}
	goto T322;
	goto T323;
T323:;
	(void)(structure_set((V101),VV[5],4,Ct));
	goto T322;
T322:;
	V121= reverse((V93));
	{object V122 = list(5,VV[22],(V101),/* INLINE-ARGS */V121,reverse((V92)),(V99));
	bds_unwind1;
	VMR3(V122)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2LET*	*/

static object LI4(V126,V127,V128)

object V126;object V127;object V128;
{	 VMB4 VMS4 VMV4
	bds_check;
	goto TTL;
TTL:;
	{object V129;
	V129= Cnil;
	bds_bind(VV[6],symbol_value(VV[6]));
	bds_bind(VV[7],symbol_value(VV[7]));
	bds_bind(VV[8],symbol_value(VV[8]));
	bds_bind(VV[9],symbol_value(VV[9]));
	{object V130;
	register object V131;
	V130= (V126);
	V131= (V127);
	goto T328;
T328:;
	if(!(endp_prop((V130)))){
	goto T329;}
	goto T326;
	goto T329;
T329:;
	{object V132;
	register object V133;
	object V134;
	V132= car((V131));
	V133= car((V130));
	V134= (*(LnkLI52))((V133));
	if(((V134))==Cnil){
	goto T337;}
	(void)(structure_set((V133),VV[3],1,(V134)));
	setq(VV[10],number_plus(symbol_value(VV[10]),small_fixnum(1)));
	(void)(structure_set((V133),VV[3],4,symbol_value(VV[10])));
	goto T337;
T337:;
	V136= structure_ref((V133),VV[3],1);
	{register object x= /* INLINE-ARGS */V136,V135= VV[24];
	while(!endp(V135))
	if(eql(x,V135->c.c_car)){
	goto T344;
	}else V135=V135->c.c_cdr;
	goto T343;}
	goto T344;
T344:;
	goto T333;
	goto T343;
T343:;
	{object V137= car((V132));
	if((V137!= VV[61]))goto T345;
	if(((*(LnkLI69))((V133),(V128),cdr((V131))))==Cnil){
	goto T347;}
	(void)(structure_set((V133),VV[3],1,VV[13]));
	(void)(structure_set((V133),VV[3],4,caddr((V132))));
	goto T333;
	goto T347;
T347:;
	{object V138;
	V139= structure_ref((V133),VV[3],1);
	V138= ((/* INLINE-ARGS */V139)==(VV[15])?Ct:Cnil);
	if(((V138))==Cnil){
	goto T352;}
	goto T333;
	goto T352;
T352:;
	V140= structure_ref((V133),VV[3],1);
	if(!((/* INLINE-ARGS */V140)==(VV[11]))){
	goto T355;}{object V141;
	base[7]= structure_ref((V133),VV[3],4);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk53)();
	vs_top=sup;
	V141= vs_base[0];
	if(V141==Cnil)goto T357;
	goto T333;
	goto T357;
T357:;}
	(void)((*(LnkLI64))());
	goto T333;
	goto T355;
T355:;
	V142= (*(LnkLI55))();
	(void)(structure_set((V133),VV[3],2,/* INLINE-ARGS */V142));
	goto T333;}
	goto T345;
T345:;
	if((V137!= VV[3]))goto T360;
	{register object V143;
	V143= caaddr((V132));
	if(((*(LnkLI69))((V133),(V128),cdr((V131))))==Cnil){
	goto T363;}
	V145= structure_ref((V143),VV[3],1);
	{register object x= /* INLINE-ARGS */V145,V144= VV[25];
	while(!endp(V144))
	if(eql(x,V144->c.c_car)){
	goto T367;
	}else V144=V144->c.c_cdr;
	goto T363;}
	goto T367;
T367:;
	if((structure_ref((V143),VV[3],3))!=Cnil){
	goto T363;}
	if(((*(LnkLI63))((V143),cdr((V131))))!=Cnil){
	goto T363;}
	V147= structure_ref(cadr((V128)),VV[5],0);
	{register object x= (V143),V146= /* INLINE-ARGS */V147;
	while(!endp(V146))
	if(eql(x,V146->c.c_car)){
	goto T363;
	}else V146=V146->c.c_cdr;}
	(void)(structure_set((V133),VV[3],1,VV[13]));
	V150= structure_ref((V143),VV[3],1);
	{object V149= /* INLINE-ARGS */V150;
	if((V149!= VV[28]))goto T375;
	V148= list(2,VV[16],structure_ref((V143),VV[3],2));
	goto T374;
	goto T375;
T375:;
	if((V149!= VV[13]))goto T376;
	V148= structure_ref((V143),VV[3],4);
	goto T374;
	goto T376;
T376:;
	if((V149!= VV[15]))goto T377;
	V148= list(2,VV[18],structure_ref((V143),VV[3],4));
	goto T374;
	goto T377;
T377:;
	V148= (*(LnkLI64))();}
	goto T374;
T374:;
	(void)(structure_set((V133),VV[3],4,V148));
	goto T333;
	goto T363;
T363:;
	{object V151;
	V152= structure_ref((V133),VV[3],1);
	V151= ((/* INLINE-ARGS */V152)==(VV[15])?Ct:Cnil);
	if(((V151))==Cnil){
	goto T380;}
	goto T333;
	goto T380;
T380:;
	V153= (*(LnkLI55))();
	(void)(structure_set((V133),VV[3],2,/* INLINE-ARGS */V153));
	goto T333;}}
	goto T360;
T360:;
	if((V137!= VV[70])
	&& !eql(V137,VV[26])
	&& !eql(V137,VV[27]))goto T382;
	goto T333;
	goto T382;
T382:;
	V154= (*(LnkLI55))();
	(void)(structure_set((V133),VV[3],2,/* INLINE-ARGS */V154));}}
	goto T333;
T333:;
	V130= cdr((V130));
	V131= cdr((V131));
	goto T328;}
	goto T326;
T326:;
	V129= (*(LnkLI65))((V126));
	{object V155;
	object V156;
	register object V157;
	register object V158;
	V155= (V126);
	V156= (V127);
	V157= Cnil;
	V158= Cnil;
	goto T391;
T391:;
	if(((V155))!=Cnil){
	goto T392;}
	goto T389;
	goto T392;
T392:;
	V157= car((V155));
	V158= car((V156));
	V160= structure_ref((V157),VV[3],1);
	{object V159= /* INLINE-ARGS */V160;
	if((V159== VV[56])
	|| (V159== VV[57])
	|| (V159== VV[58])
	|| (V159== VV[59])
	|| (V159== VV[15]))goto T402;
	if((V159!= VV[60]))goto T401;
	goto T402;
T402:;
	base[4]= list(3,VV[3],(V157),Cnil);
	bds_bind(VV[20],base[4]);
	V161= (*(LnkLI12))((V158));
	bds_unwind1;
	goto T400;
	goto T401;
T401:;
	if((V159!= VV[13]))goto T404;
	goto T400;
	goto T404;
T404:;
	{object V162= car((V158));
	if((V162!= VV[61]))goto T405;
	(void)((*(LnkLI66))((V157),caddr((V158))));
	goto T400;
	goto T405;
T405:;
	if((V162!= VV[3]))goto T406;
	V163= list(3,VV[3],caaddr((V158)),cadr(caddr((V158))));
	(void)((*(LnkLI66))((V157),/* INLINE-ARGS */V163));
	goto T400;
	goto T406;
T406:;
	(void)((*(LnkLI71))((V157),(V158)));}}
	goto T400;
T400:;
	V155= cdr((V155));
	V156= cdr((V156));
	goto T391;}
	goto T389;
T389:;
	base[4]= (V128);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	if(((V129))==Cnil){
	goto T414;}
	princ_char(125,VV[21]);
	{object V164 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR4(V164)}
	goto T414;
T414:;
	{object V165 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR4(V165)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CAN-BE-REPLACED	*/

static object LI5(V168,V169)

register object V168;object V169;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	V170= structure_ref((V168),VV[3],1);
	if(!((/* INLINE-ARGS */V170)==(VV[28]))){
	goto T419;}
	goto T417;
	goto T419;
T419:;
	V171= structure_ref((V168),VV[3],1);
	if((/* INLINE-ARGS */V171)==(VV[15])){
	goto T421;}
	goto T418;
	goto T421;
T421:;
	{long V172= fix(structure_ref((V168),VV[3],6));
	if((/* INLINE-ARGS */V172)<(fix(symbol_value(VV[29])))){
	goto T417;}}
	goto T418;
T418:;
	{object V173 = Cnil;
	VMR5(V173)}
	goto T417;
T417:;
	V174= structure_ref((V168),VV[3],3);
	if((/* INLINE-ARGS */V174)==Cnil){
	goto T423;}
	{object V175 = Cnil;
	VMR5(V175)}
	goto T423;
T423:;
	V176= structure_ref((V168),VV[3],4);
	if((((/* INLINE-ARGS */V176)==(VV[30])?Ct:Cnil))==Cnil){
	goto T425;}
	{object V177 = Cnil;
	VMR5(V177)}
	goto T425;
T425:;
	V180= structure_ref(cadr((V169)),VV[5],0);
	{register object x= (V168),V179= /* INLINE-ARGS */V180;
	while(!endp(V179))
	if(eql(x,V179->c.c_car)){
	V178= V179;
	goto T427;
	}else V179=V179->c.c_cdr;
	V178= Cnil;}
	goto T427;
T427:;
	{object V181 = ((V178)==Cnil?Ct:Cnil);
	VMR5(V181)}
	return Cnil;
}
/*	local entry for function CAN-BE-REPLACED*	*/

static object LI6(V185,V186,V187)

register object V185;object V186;object V187;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	if(((*(LnkLI62))((V185),(V186)))!=Cnil){
	goto T428;}
	{object V188 = Cnil;
	VMR6(V188)}
	goto T428;
T428:;
	{register object V189;
	register object V190;
	V189= (V187);
	V190= car((V189));
	goto T433;
T433:;
	if(!(endp_prop((V189)))){
	goto T434;}
	{object V191 = Ct;
	VMR6(V191)}
	goto T434;
T434:;
	V193= structure_ref(cadr((V190)),VV[5],0);
	{register object x= (V185),V192= /* INLINE-ARGS */V193;
	while(!endp(V192))
	if(eql(x,V192->c.c_car)){
	goto T440;
	}else V192=V192->c.c_cdr;
	goto T438;}
	goto T440;
T440:;
	{object V194 = Cnil;
	VMR6(V194)}
	goto T438;
T438:;
	V189= cdr((V189));
	V190= car((V189));
	goto T433;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WRITE-BLOCK-OPEN	*/

static object LI7(V196)

object V196;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{register object V197;
	V197= Cnil;
	{register object V198;
	register object V199;
	V198= (V196);
	V199= car((V198));
	goto T450;
T450:;
	if(!(endp_prop((V198)))){
	goto T451;}
	goto T446;
	goto T451;
T451:;
	{register object V200;
	V200= structure_ref((V199),VV[3],1);
	{register object x= (V200),V201= VV[31];
	while(!endp(V201))
	if(eql(x,V201->c.c_car)){
	goto T458;
	}else V201=V201->c.c_cdr;
	goto T455;}
	goto T458;
T458:;
	princ_str("\n	",VV[21]);
	if(((V197))!=Cnil){
	goto T460;}
	princ_char(123,VV[21]);
	V197= Ct;
	goto T460;
T460:;
	base[1]= (V199);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk72)();
	vs_top=sup;}
	goto T455;
T455:;
	V198= cdr((V198));
	V199= car((V198));
	goto T450;}
	goto T446;
T446:;
	{object V202 = (V197);
	VMR7(V202)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for STACK-LET	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(2);
	vs_top=sup;
	{object V203=base[0]->c.c_cdr;
	base[2]= V203;}
	base[3]= make_cons(VV[2],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function C1STACK-LET	*/

static object LI9(V205)

object V205;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{object V206;
	register object V207;
	V206= Cnil;
	V207= Cnil;
	{object V208;
	V208= car((V205));
	{register object V209;
	register object V210;
	V209= (V208);
	V210= car((V209));
	goto T479;
T479:;
	if(!(endp_prop((V209)))){
	goto T480;}
	goto T475;
	goto T480;
T480:;
	{object V211;
	if(!(type_of((V210))!=t_cons)){
	goto T487;}
	V211= (V210);
	goto T485;
	goto T487;
T487:;
	{register object V212;
	{object V213;
	register object V214;
	V213= car((V210));
	V214= cadr((V210));
	if(type_of((V214))==t_cons){
	goto T492;}
	V212= Cnil;
	goto T489;
	goto T492;
T492:;
	if(!((car((V214)))==(VV[32]))){
	goto T496;}
	goto T494;
	goto T496;
T496:;
	if((car((V214)))==(VV[33])){
	goto T498;}
	goto T495;
	goto T498;
T498:;
	if((cddr((V214)))==Cnil){
	goto T500;}
	goto T495;
	goto T500;
T500:;
	V214= list(3,VV[32],cadr((V214)),Cnil);
	if(((V214))!=Cnil){
	goto T494;}
	goto T495;
T495:;
	V212= Cnil;
	goto T489;
	goto T494;
T494:;
	{object V215;
	setq(VV[10],number_plus(symbol_value(VV[10]),small_fixnum(1)));
	V215= symbol_value(VV[10]);
	V207= make_cons((V215),(V207));}
	V212= list(2,(V213),listA(3,VV[34],car((V207)),cdr((V214))));}
	goto T489;
T489:;
	if(((V212))==Cnil){
	goto T508;}
	V211= (V212);
	goto T485;
	goto T508;
T508:;
	(void)((VFUN_NARGS=3,(*(LnkLI73))(VV[35],(V210),cdr((V205)))));
	V211= (V210);}
	goto T485;
T485:;
	V206= make_cons((V211),(V206));}
	V209= cdr((V209));
	V210= car((V209));
	goto T479;}
	goto T475;
T475:;
	{object V216;
	V217= nreverse((V206));
	V218= listA(3,VV[2],/* INLINE-ARGS */V217,cdr((V205)));
	V216= (*(LnkLI74))(/* INLINE-ARGS */V218);
	{object V219 = list(4,VV[36],cadr((V216)),(V207),(V216));
	VMR9(V219)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2STACK-LET	*/

static object LI10(V222,V223)

object V222;object V223;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V224;
	setq(VV[10],number_plus(symbol_value(VV[10]),small_fixnum(1)));
	V224= symbol_value(VV[10]);
	princ_str("\n	{Cons_Macro",VV[21]);
	(void)((*(LnkLI75))((V224)));
	princ_char(59,VV[21]);
	base[0]= (V223);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	princ_char(125,VV[21]);
	princ_str("\n#define Cons_Macro",VV[37]);
	(void)((*(LnkLI76))((V224)));
	base[0]= Cnil;
	base[1]= VV[38];
	base[2]= (V222);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	V225= vs_base[0];
	(void)((*(LnkLI76))(V225));
	{object V226 = Cnil;
	VMR10(V226)}}
	base[0]=base[0];
	return Cnil;
}
static object  LnkTLI76(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[76],(void **)(void *)&LnkLI76,1,first,ap);va_end(ap);return V1;} /* WT-H1 */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[75],(void **)(void *)&LnkLI75,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI74(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[74],(void **)(void *)&LnkLI74,1,first,ap);va_end(ap);return V1;} /* C1EXPR */
static object  LnkTLI73(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[73],(void **)(void *)&LnkLI73,first,ap);va_end(ap);return V1;} /* CMPWARN */
static void LnkT72(){ call_or_link(VV[72],(void **)(void *)&Lnk72);} /* WT-VAR-DECL */
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

