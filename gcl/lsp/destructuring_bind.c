
#include "cmpinclude.h"
#include "destructuring_bind.h"
init_destructuring_bind(){do_init(VV);}
/*	function definition for PARSE-DEFMACRO	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	bds_check;
	{object V1;
	object V2;
	object V3;
	object V4;
	object V5;
	object V6;
	object V7;
	object V8;
	object V9;
	parse_key(vs_base+5,FALSE,FALSE,5,VV[75],VV[76],VV[77],VV[78],VV[79]);
	V1=(base[0]);
	V2=(base[1]);
	V3=(base[2]);
	V4=(base[3]);
	V5=(base[4]);
	vs_top=sup;
	V6=(base[5]);
	if(base[11]==Cnil){
	V7= Ct;
	}else{
	V7=(base[6]);}
	V8=(base[7]);
	bds_bind(VV[0],base[8]);
	if(base[14]==Cnil){
	V9= VV[1];
	}else{
	V9=(base[9]);}
	{object V10;
	object V11;
	object V12;
	base[15]= (V3);
	base[16]= Cnil;
	base[17]= (V7);
	vs_top=(vs_base=base+15)+3;
	(void) (*Lnk21)();
	if(vs_base>=vs_top){vs_top=sup;goto T7;}
	V10= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T8;}
	V11= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T9;}
	V12= vs_base[0];
	vs_top=sup;
	goto T10;
T7:;
	V10= Cnil;
T8:;
	V11= Cnil;
T9:;
	V12= Cnil;
T10:;
	bds_bind(VV[2],Cnil);
	bds_bind(VV[3],Cnil);
	bds_bind(VV[4],Cnil);
	{object V14;
	object V15;
	object V16;
	base[18]= (V1);
	base[19]= (V2);
	base[20]= (V4);
	base[21]= (V5);
	base[22]= (V9);
	base[23]= (((V6))==Cnil?Ct:Cnil);
	base[24]= Cnil;
	base[25]= (V8);
	vs_top=(vs_base=base+18)+8;
	(void) (*Lnk80)();
	if(vs_base>=vs_top){vs_top=sup;goto T20;}
	V14= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T21;}
	V15= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T22;}
	V16= vs_base[0];
	vs_top=sup;
	goto T23;
T20:;
	V14= Cnil;
T21:;
	V15= Cnil;
T22:;
	V16= Cnil;
T23:;
	V17= nreverse((VV[4]->s.s_dbind));
	if((Cnil)==Cnil){
	goto T28;}
	V19= list(2,VV[6],make_cons(VV[7],Cnil));
	base[19]= make_cons(/* INLINE-ARGS */V19,Cnil);
	goto T26;
T28:;
	base[19]= Cnil;
T26:;
	base[20]= (VV[2]->s.s_dbind);
	V20= nreverse((VV[3]->s.s_dbind));
	V21= listA(3,VV[5],/* INLINE-ARGS */V20,append((V11),(V10)));
	base[21]= make_cons(/* INLINE-ARGS */V21,Cnil);
	vs_top=(vs_base=base+19)+3;
	Lappend();
	vs_top=sup;
	V18= vs_base[0];
	base[18]= listA(3,VV[5],/* INLINE-ARGS */V17,V18);
	if(((V8))==Cnil){
	goto T34;}
	if(((V14))!=Cnil){
	goto T34;}
	V22= list(2,VV[6],list(2,VV[8],(V8)));
	base[19]= make_cons(/* INLINE-ARGS */V22,Cnil);
	goto T32;
T34:;
	base[19]= Cnil;
T32:;
	base[20]= (V12);
	base[21]= (V15);
	base[22]= (V16);
	vs_top=(vs_base=base+18)+5;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;}}
	}
}
/*	function definition for PARSE-DEFMACRO-LAMBDA-LIST	*/

static L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{object V23;
	object V24;
	register object V25;
	register object V26;
	object V27;
	object V28;
	object V29;
	object V30;
	V23=(base[0]);
	V24=(base[1]);
	V25=(base[2]);
	V26=(base[3]);
	V27=(base[4]);
	vs_base=vs_base+5;
	if(vs_base>=vs_top){vs_top=sup;goto T41;}
	V28=(base[5]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T42;}
	V29=(base[6]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T43;}
	V30=(base[7]);
	vs_top=sup;
	goto T44;
T41:;
	V28= Cnil;
T42:;
	V29= Cnil;
T43:;
	V30= Cnil;
T44:;
	{register object V31;
	object V32;
	register object V33;
	object V34;
	object V35;
	object V36;
	object V37;
	object V38;
	object V39;
	if(((V28))==Cnil){
	goto T50;}
	V31= list(2,VV[9],(V24));
	goto T48;
T50:;
	V31= (V24);
T48:;
	V32= VV[10];
	V33= small_fixnum(0);
	V34= small_fixnum(0);
	V35= Cnil;
	V36= Cnil;
	V37= Cnil;
	V38= Cnil;
	V39= Cnil;
	{object V40;
	V40= (V23);
T57:;
	if(!(type_of((V40))!=t_cons)){
	goto T58;}
	goto T52;
T58:;
	if(!((CMPcar((V40)))==(VV[11]))){
	goto T62;}
	goto T55;
T62:;
	V40= CMPcdr((V40));
	goto T57;}
T55:;
	if((CMPcar((V23)))==(VV[11])){
	goto T52;}
	base[8]= VV[12];
	base[9]= (V26);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	vs_top=sup;
T52:;
	{register object V41;
	V41= (V23);
T73:;
	if(!(type_of((V41))!=t_cons)){
	goto T74;}
	if(((V41))!=Cnil){
	goto T78;}
	goto T71;
T78:;
	base[8]= (V41);
	base[9]= (V31);
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V37= Ct;
	goto T71;
T74:;
	{register object V42;
	V42= CMPcar((V41));
	if(!(((V42))==(VV[11]))){
	goto T89;}
	if((CMPcdr((V41)))==Cnil){
	goto T92;}
	if(!(type_of(CMPcadr((V41)))==t_symbol)){
	goto T92;}
	V41= CMPcdr((V41));
	base[8]= CMPcar((V41));
	base[9]= (V24);
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	goto T86;
T92:;
	base[8]= VV[13];
	base[9]= (V26);
	base[10]= (V25);
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk82)();
	vs_top=sup;
	goto T86;
T89:;
	if(!(((V42))==(VV[14]))){
	goto T105;}
	if(((V29))==Cnil){
	goto T109;}
	base[8]= VV[15];
	base[9]= (V26);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	vs_top=sup;
	goto T107;
T109:;
	if(((V28))!=Cnil){
	goto T107;}
	base[8]= VV[16];
	vs_top=(vs_base=base+8)+1;
	Lerror();
	vs_top=sup;
T107:;
	if((CMPcdr((V41)))==Cnil){
	goto T117;}
	if(!(type_of(CMPcadr((V41)))==t_symbol)){
	goto T117;}
	V41= CMPcdr((V41));
	base[8]= CMPcar((V41));
	base[9]= (V30);
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V39= Ct;
	goto T86;
T117:;
	base[8]= VV[17];
	base[9]= (V26);
	base[10]= (V25);
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk82)();
	vs_top=sup;
	goto T86;
T105:;
	if(((V42))==(VV[18])){
	goto T131;}
	if(!(((V42))==(VV[19]))){
	goto T132;}
T131:;
	if((CMPcdr((V41)))==Cnil){
	goto T137;}
	if(!(type_of(CMPcadr((V41)))==t_symbol)){
	goto T137;}
	V41= CMPcdr((V41));
	V37= Ct;
	base[8]= CMPcar((V41));
	base[9]= (V31);
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	goto T86;
T137:;
	if((CMPcdr((V41)))==Cnil){
	goto T149;}
	if(!(type_of(CMPcadr((V41)))==t_cons)){
	goto T149;}
	if(!(type_of(CMPcaadr((V41)))==t_symbol)){
	goto T149;}
	V41= CMPcdr((V41));
	V37= Ct;
	{object V43;
	object V44;
	object V45;
	object V46;
	V43= CMPcaar((V41));
	V44= CMPcadar((V41));
	V45= CMPcaddar((V41));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V46= vs_base[0];
	base[8]= (V46);
	base[9]= list(2,VV[20],list(4,VV[21],(V31),(V30),(((((V45))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil)));
	base[10]= Ct;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V39= Ct;
	if(((V43))==Cnil){
	goto T169;}
	base[8]= (V43);
	base[9]= list(2,VV[22],(V46));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
T169:;
	if(((V44))==Cnil){
	goto T175;}
	base[8]= (V44);
	base[9]= list(2,VV[23],(V46));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
T175:;
	if(((V45))==Cnil){
	goto T86;}
	base[8]= (V45);
	base[9]= list(2,VV[24],(V46));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	goto T86;}
T149:;
	base[8]= symbol_name((V42));
	base[9]= (V26);
	base[10]= (V25);
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk82)();
	vs_top=sup;
	goto T86;
T132:;
	if(!(((V42))==(VV[25]))){
	goto T190;}
	V32= VV[26];
	goto T86;
T190:;
	if(!(((V42))==(VV[27]))){
	goto T194;}
	V32= VV[28];
	base[8]= VV[29];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V36= vs_base[0];
	(VV[30]->s.s_dbind)= make_cons((V36),(VV[30]->s.s_dbind));
	V37= Ct;
	base[8]= (V36);
	base[9]= (V31);
	base[10]= Ct;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	goto T86;
T194:;
	if(!(((V42))==(VV[31]))){
	goto T209;}
	V38= Ct;
	goto T86;
T209:;
	if(!(((V42))==(VV[32]))){
	goto T213;}
	V32= VV[33];
	goto T86;
T213:;
	if(!(type_of((V42))==t_cons||((V42))==Cnil)){
	goto T217;}
	{object V47= (V32);
	if((V47!= VV[10]))goto T219;
	{object V48;
	base[8]= VV[34];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V48= vs_base[0];
	base[8]= (V48);
	base[9]= list(2,VV[22],(V31));
	base[10]= (V42);
	base[11]= (V25);
	base[12]= (V26);
	base[13]= (V27);
	vs_top=(vs_base=base+8)+6;
	(void) (*Lnk83)();
	vs_top=sup;
	base[8]= (V42);
	base[9]= (V48);
	base[10]= (V25);
	base[11]= (V26);
	base[12]= (V27);
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk80)();
	vs_top=sup;}
	V31= list(2,VV[9],(V31));
	V34= number_plus((V34),small_fixnum(1));
	V33= number_plus((V33),small_fixnum(1));
	goto T86;
T219:;
	if((V47!= VV[26]))goto T240;
	if(!((length((V42)))>(3))){
	goto T241;}
	base[8]= VV[35];
	base[9]= VV[36];
	base[10]= (V42);
	vs_top=(vs_base=base+8)+3;
	Lcerror();
	vs_top=sup;
T241:;
	base[8]= CMPcar((V42));
	base[9]= CMPcadr((V42));
	base[10]= CMPcaddr((V42));
	base[11]= list(2,VV[37],list(2,VV[38],(V31)));
	base[12]= list(2,VV[22],(V31));
	base[13]= (V25);
	base[14]= (V26);
	base[15]= (V27);
	vs_top=(vs_base=base+8)+8;
	(void) (*Lnk84)();
	vs_top=sup;
	V31= list(2,VV[9],(V31));
	V33= number_plus((V33),small_fixnum(1));
	goto T86;
T240:;
	if((V47!= VV[28]))goto T259;
	{object V49;
	object V50;
	object V51;
	object V52;
	V49= (type_of(CMPcar((V42)))==t_cons?Ct:Cnil);
	if(((V49))==Cnil){
	goto T263;}
	V50= CMPcadar((V42));
	goto T261;
T263:;
	V50= CMPcar((V42));
T261:;
	if(((V49))==Cnil){
	goto T267;}
	V51= CMPcaar((V42));
	goto T265;
T267:;
	base[12]= (V50);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk85)();
	vs_top=sup;
	V51= vs_base[0];
T265:;
	V52= CMPcaddr((V42));
	base[12]= (V50);
	base[13]= CMPcadr((V42));
	base[14]= (V52);
	base[15]= list(3,VV[39],list(2,VV[40],(V51)),(V36));
	base[16]= list(3,VV[41],list(2,VV[40],(V51)),(V36));
	base[17]= (V25);
	base[18]= (V26);
	base[19]= (V27);
	vs_top=(vs_base=base+12)+8;
	(void) (*Lnk84)();
	vs_top=sup;
	V35= make_cons((V51),(V35));
	goto T86;}
T259:;
	if((V47!= VV[33]))goto T281;
	base[8]= CMPcar((V42));
	base[9]= CMPcadr((V42));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	goto T86;
T281:;
	goto T86;}
T217:;
	if(!(type_of((V42))==t_symbol)){
	goto T286;}
	{object V53= (V32);
	if((V53!= VV[10]))goto T288;
	V34= number_plus((V34),small_fixnum(1));
	V33= number_plus((V33),small_fixnum(1));
	base[8]= (V42);
	base[9]= list(2,VV[22],(V31));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V31= list(2,VV[9],(V31));
	goto T86;
T288:;
	if((V53!= VV[26]))goto T298;
	V33= number_plus((V33),small_fixnum(1));
	base[8]= (V42);
	base[9]= list(2,VV[22],(V31));
	base[10]= Cnil;
	base[11]= list(2,VV[37],list(2,VV[38],(V31)));
	vs_top=(vs_base=base+8)+4;
	(void) (*Lnk81)();
	vs_top=sup;
	V31= list(2,VV[9],(V31));
	goto T86;
T298:;
	if((V53!= VV[28]))goto T307;
	{object V54;
	base[8]= (V42);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk85)();
	vs_top=sup;
	V54= vs_base[0];
	base[8]= (V42);
	base[9]= list(3,VV[41],(V54),(V36));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V35= make_cons((V54),(V35));
	goto T86;}
T307:;
	if((V53!= VV[33]))goto T315;
	base[8]= (V42);
	base[9]= Cnil;
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	goto T86;
T315:;
	goto T86;}
T286:;
	base[8]= VV[42];
	base[9]= (V42);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	vs_top=sup;}
T86:;
	V41= CMPcdr((V41));
	goto T73;}
T71:;
	if(((V37))!=Cnil){
	goto T324;}
	if(((V28))==Cnil){
	goto T330;}
	V55= list(2,VV[9],(V24));
	goto T328;
T330:;
	V55= (V24);
T328:;
	V56= list(2,VV[45],list(3,VV[46],VV[47],V55));
	if(((V37))!=Cnil){
	goto T334;}
	V57= make_cons((V33),Cnil);
	goto T332;
T334:;
	V57= Cnil;
T332:;
	V58= listA(4,VV[44],(V34),/* INLINE-ARGS */V56,V57);
	{object V60;
	if(((V28))==Cnil){
	goto T339;}
	V60= list(2,VV[9],(V24));
	goto T337;
T339:;
	V60= (V24);
T337:;
	if(!(((V27))==(VV[1]))){
	goto T342;}
	V61= list(2,VV[40],(V26));
	V62= list(2,VV[40],(V25));
	V63= list(2,VV[40],(V23));
	if(((V37))!=Cnil){
	goto T346;}
	V64= (V33);
	goto T344;
T346:;
	V64= Cnil;
T344:;
	V59= list(7,VV[48],/* INLINE-ARGS */V61,/* INLINE-ARGS */V62,(V60),/* INLINE-ARGS */V63,(V34),V64);
	goto T336;
T342:;
	V65= list(2,VV[40],(V26));
	if(((V25))==Cnil){
	goto T350;}
	V66= list(2,VV[51],list(2,VV[40],(V25)));
	goto T348;
T350:;
	V66= Cnil;
T348:;
	V67= list(2,VV[40],(V23));
	if(((V37))!=Cnil){
	goto T354;}
	V68= list(2,VV[55],(V33));
	goto T352;
T354:;
	V68= Cnil;
T352:;
	V69= listA(7,VV[52],(V60),VV[53],/* INLINE-ARGS */V67,VV[54],(V34),V68);
	V59= listA(5,(V27),VV[49],VV[50],/* INLINE-ARGS */V65,append(V66,/* INLINE-ARGS */V69));}
T336:;
	V70= list(3,VV[43],/* INLINE-ARGS */V58,V59);
	(VV[2]->s.s_dbind)= make_cons(/* INLINE-ARGS */V70,(VV[2]->s.s_dbind));
T324:;
	if(((V35))==Cnil){
	goto T356;}
	{object V71;
	object V72;
	base[8]= VV[56];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V71= vs_base[0];
	base[8]= VV[57];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V72= vs_base[0];
	V73= list(2,(V71),(V72));
	V74= list(2,VV[40],(V35));
	V75= list(4,VV[59],(V36),/* INLINE-ARGS */V74,list(2,VV[40],(V38)));
	V76= list(2,VV[40],(V26));
	if(((V25))==Cnil){
	goto T366;}
	V77= list(2,VV[51],list(2,VV[40],(V25)));
	goto T364;
T366:;
	V77= Cnil;
T364:;
	V78= list(4,VV[62],(V71),VV[63],(V72));
	V79= list(4,VV[58],/* INLINE-ARGS */V73,/* INLINE-ARGS */V75,list(3,VV[60],(V71),listA(5,(V27),VV[61],VV[50],/* INLINE-ARGS */V76,append(V77,/* INLINE-ARGS */V78))));
	(VV[2]->s.s_dbind)= make_cons(/* INLINE-ARGS */V79,(VV[2]->s.s_dbind));}
T356:;
	base[8]= (V39);
	base[9]= (V34);
	if(((V37))!=Cnil){
	goto T372;}
	base[10]= (V33);
	goto T370;
T372:;
	base[10]= Cnil;
T370:;
	vs_top=(vs_base=base+8)+3;
	return;}
	}
}
/*	function definition for PUSH-SUB-LIST-BINDING	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{object V80;
	object V81;
	object V82;
	object V83;
	object V84;
	object V85;
	V80=(base[0]);
	V81=(base[1]);
	V82=(base[2]);
	V83=(base[3]);
	V84=(base[4]);
	V85=(base[5]);
	vs_top=sup;
TTL:;
	{register object V86;
	base[6]= VV[64];
	vs_top=(vs_base=base+6)+1;
	Lgensym();
	vs_top=sup;
	V86= vs_base[0];
	V87= list(2,(V86),(V81));
	V88= make_cons(/* INLINE-ARGS */V87,Cnil);
	V89= list(2,VV[67],(V86));
	V90= list(2,VV[40],(V84));
	if(((V83))==Cnil){
	goto T379;}
	V91= list(2,VV[51],list(2,VV[40],(V83)));
	goto T377;
T379:;
	V91= Cnil;
T377:;
	V92= list(4,VV[69],(V86),VV[53],list(2,VV[40],(V82)));
	V93= list(2,(V80),list(3,VV[65],/* INLINE-ARGS */V88,list(4,VV[66],/* INLINE-ARGS */V89,(V86),listA(5,(V85),VV[68],VV[50],/* INLINE-ARGS */V90,append(V91,/* INLINE-ARGS */V92)))));
	(VV[4]->s.s_dbind)= make_cons(/* INLINE-ARGS */V93,(VV[4]->s.s_dbind));
	base[6]= (VV[4]->s.s_dbind);
	vs_top=(vs_base=base+6)+1;
	return;}
	}
}
/*	function definition for PUSH-LET-BINDING	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{object V94;
	object V95;
	object V96;
	object V97;
	object V98;
	V94=(base[0]);
	V95=(base[1]);
	V96=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T381;}
	V97=(base[3]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T382;}
	V98=(base[4]);
	vs_top=sup;
	goto T383;
T381:;
	V97= Cnil;
T382:;
	V98= (VV[0]->s.s_dbind);
T383:;
	{object V99;
	if(((V97))==Cnil){
	goto T388;}
	V99= list(2,(V94),list(4,VV[66],(V97),(V95),(V98)));
	goto T386;
T388:;
	V99= list(2,(V94),(V95));
T386:;
	if(((V96))==Cnil){
	goto T391;}
	(VV[4]->s.s_dbind)= make_cons((V99),(VV[4]->s.s_dbind));
	base[5]= (VV[4]->s.s_dbind);
	vs_top=(vs_base=base+5)+1;
	return;
T391:;
	(VV[3]->s.s_dbind)= make_cons((V99),(VV[3]->s.s_dbind));
	base[5]= (VV[3]->s.s_dbind);
	vs_top=(vs_base=base+5)+1;
	return;}
	}
}
/*	function definition for PUSH-OPTIONAL-BINDING	*/

static L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{register object V100;
	object V101;
	register object V102;
	object V103;
	object V104;
	object V105;
	object V106;
	object V107;
	V100=(base[0]);
	V101=(base[1]);
	V102=(base[2]);
	V103=(base[3]);
	V104=(base[4]);
	V105=(base[5]);
	V106=(base[6]);
	V107=(base[7]);
	vs_top=sup;
TTL:;
	if(((V102))!=Cnil){
	goto T395;}
	base[8]= VV[70];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V102= vs_base[0];
T395:;
	base[8]= (V102);
	base[9]= (V103);
	base[10]= Ct;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	if(!(type_of((V100))==t_cons)){
	goto T405;}
	{object V108;
	base[8]= VV[71];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V108= vs_base[0];
	base[8]= (V108);
	base[9]= list(4,VV[66],(V102),(V104),(V101));
	base[10]= (V100);
	base[11]= (V105);
	base[12]= (V106);
	base[13]= (V107);
	vs_top=(vs_base=base+8)+6;
	(void) (*Lnk83)();
	vs_top=sup;
	base[8]= (V100);
	base[9]= (V108);
	base[10]= (V105);
	base[11]= (V106);
	base[12]= (V107);
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk80)();
	return;}
T405:;
	if(!(type_of((V100))==t_symbol)){
	goto T422;}
	base[8]= (V100);
	base[9]= (V104);
	base[10]= Cnil;
	base[11]= (V102);
	base[12]= (V101);
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk81)();
	return;
T422:;
	base[8]= VV[72];
	base[9]= (V100);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	return;
	}
}
/*	function definition for PARSE-BODY	*/

static L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V109;
	object V110;
	register object V111;
	V109=(base[0]);
	V110=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T431;}
	V111=(base[2]);
	vs_top=sup;
	goto T432;
T431:;
	V111= Ct;
T432:;
	{register object V112;
	register object V113;
	V112= Cnil;
	V113= Cnil;
	{register object V114;
	V114= (V109);
T435:;
	if(!(((V114))==Cnil)){
	goto T436;}
	base[3]= (V114);
	base[4]= nreverse((V112));
	base[5]= (V113);
	vs_top=(vs_base=base+3)+3;
	return;
T436:;
	{register object V115;
	V115= CMPcar((V114));
	if(!(type_of((V115))==t_string)){
	goto T446;}
	if((CMPcdr((V114)))==Cnil){
	goto T446;}
	if(((V111))==Cnil){
	goto T451;}
	V113= (V115);
	V111= Cnil;
	goto T443;
T451:;
	base[3]= (V114);
	base[4]= nreverse((V112));
	base[5]= (V113);
	vs_top=(vs_base=base+3)+3;
	return;
T446:;
	if(!(type_of((V115))==t_cons)){
	goto T459;}
	if(type_of(CMPcar((V115)))==t_symbol){
	goto T460;}
T459:;
	base[3]= (V114);
	base[4]= nreverse((V112));
	base[5]= (V113);
	vs_top=(vs_base=base+3)+3;
	return;
T460:;
	if(!((CMPcar((V115)))==(VV[6]))){
	goto T468;}
	V112= make_cons((V115),(V112));
	goto T443;
T468:;
	base[3]= (V114);
	base[4]= nreverse((V112));
	base[5]= (V113);
	vs_top=(vs_base=base+3)+3;
	return;}
T443:;
	V114= CMPcdr((V114));
	goto T435;}}
	}
}
/*	macro definition for DESTRUCTURING-BIND	*/

static L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	vs_top=sup;
	{object V116=base[0]->c.c_cdr;
	base[2]= (V116->c.c_car);
	V116=V116->c.c_cdr;
	base[3]= (V116->c.c_car);
	V116=V116->c.c_cdr;
	base[4]= V116;}
	{object V117;
	base[6]= VV[73];
	vs_top=(vs_base=base+6)+1;
	Lgensym();
	vs_top=sup;
	V117= vs_base[0];
	{object V118;
	object V119;
	base[6]= base[2];
	base[7]= (V117);
	base[8]= base[4];
	base[9]= Cnil;
	base[10]= VV[74];
	base[11]= VV[75];
	base[12]= Ct;
	base[13]= VV[76];
	base[14]= Cnil;
	vs_top=(vs_base=base+6)+9;
	(void) (*Lnk86)();
	if(vs_base>=vs_top){vs_top=sup;goto T489;}
	V118= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T490;}
	V119= vs_base[0];
	vs_top=sup;
	goto T491;
T489:;
	V118= Cnil;
T490:;
	V119= Cnil;
T491:;
	V120= list(2,(V117),base[3]);
	V121= make_cons(/* INLINE-ARGS */V120,Cnil);
	V122= make_cons((V118),Cnil);
	base[6]= listA(3,VV[65],/* INLINE-ARGS */V121,append((V119),/* INLINE-ARGS */V122));
	vs_top=(vs_base=base+6)+1;
	return;}}
}
static LnkT86(){ call_or_link(VV[86],&Lnk86);} /* PARSE-DEFMACRO */
static LnkT85(){ call_or_link(VV[85],&Lnk85);} /* MAKE-KEYWORD */
static LnkT84(){ call_or_link(VV[84],&Lnk84);} /* PUSH-OPTIONAL-BINDING */
static LnkT83(){ call_or_link(VV[83],&Lnk83);} /* PUSH-SUB-LIST-BINDING */
static LnkT82(){ call_or_link(VV[82],&Lnk82);} /* DEFMACRO-ERROR */
static LnkT81(){ call_or_link(VV[81],&Lnk81);} /* PUSH-LET-BINDING */
static LnkT80(){ call_or_link(VV[80],&Lnk80);} /* PARSE-DEFMACRO-LAMBDA-LIST */
static LnkT21(){ call_or_link(VV[21],&Lnk21);} /* PARSE-BODY */
