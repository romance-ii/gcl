
#include "cmpinclude.h"
#include "destructuring_bind.h"
init_destructuring_bind(){do_init(VV);}
/*	function definition for PARSE-DEFMACRO	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
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
	if(vs_top-vs_base<5) too_few_arguments();
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
	(void) (*Lnk22)();
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
	bds_bind(VV[5],Cnil);
	{object V13;
	object V14;
	object V15;
	base[19]= (V1);
	base[20]= (V2);
	base[21]= (V4);
	base[22]= (V5);
	base[23]= (V9);
	base[24]= (((V6))==Cnil?Ct:Cnil);
	base[25]= Cnil;
	base[26]= (V8);
	vs_top=(vs_base=base+19)+8;
	(void) (*Lnk80)();
	if(vs_base>=vs_top){vs_top=sup;goto T20;}
	V13= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T21;}
	V14= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T22;}
	V15= vs_base[0];
	vs_top=sup;
	goto T23;
T20:;
	V13= Cnil;
T21:;
	V14= Cnil;
T22:;
	V15= Cnil;
T23:;
	V16= nreverse((VV[4]->s.s_dbind));
	if(((VV[5]->s.s_dbind))==Cnil){
	goto T28;}
	V18= list(2,VV[7],make_cons(VV[8],(VV[5]->s.s_dbind)));
	base[20]= make_cons(/* INLINE-ARGS */V18,Cnil);
	goto T26;
T28:;
	base[20]= Cnil;
T26:;
	base[21]= (VV[2]->s.s_dbind);
	V19= nreverse((VV[3]->s.s_dbind));
	V20= listA(3,VV[6],/* INLINE-ARGS */V19,append((V11),(V10)));
	base[22]= make_cons(/* INLINE-ARGS */V20,Cnil);
	vs_top=(vs_base=base+20)+3;
	Lappend();
	vs_top=sup;
	V17= vs_base[0];
	base[19]= listA(3,VV[6],/* INLINE-ARGS */V16,V17);
	if(((V8))==Cnil){
	goto T34;}
	if(((V13))!=Cnil){
	goto T34;}
	V21= list(2,VV[7],list(2,VV[9],(V8)));
	base[20]= make_cons(/* INLINE-ARGS */V21,Cnil);
	goto T32;
T34:;
	base[20]= Cnil;
T32:;
	base[21]= (V12);
	base[22]= (V14);
	base[23]= (V15);
	vs_top=(vs_base=base+19)+5;
	bds_unwind1;
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
	vs_reserve(VM2);
	{object V22;
	object V23;
	register object V24;
	register object V25;
	object V26;
	object V27;
	object V28;
	object V29;
	if(vs_top-vs_base<5) too_few_arguments();
	if(vs_top-vs_base>8) too_many_arguments();
	V22=(base[0]);
	V23=(base[1]);
	V24=(base[2]);
	V25=(base[3]);
	V26=(base[4]);
	vs_base=vs_base+5;
	if(vs_base>=vs_top){vs_top=sup;goto T41;}
	V27=(base[5]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T42;}
	V28=(base[6]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T43;}
	V29=(base[7]);
	vs_top=sup;
	goto T44;
T41:;
	V27= Cnil;
T42:;
	V28= Cnil;
T43:;
	V29= Cnil;
T44:;
	{register object V30;
	object V31;
	register object V32;
	object V33;
	object V34;
	object V35;
	object V36;
	object V37;
	object V38;
	if(((V27))==Cnil){
	goto T50;}
	V30= list(2,VV[10],(V23));
	goto T48;
T50:;
	V30= (V23);
T48:;
	V31= VV[11];
	V32= small_fixnum(0);
	V33= small_fixnum(0);
	V34= Cnil;
	V35= Cnil;
	V36= Cnil;
	V37= Cnil;
	V38= Cnil;
	{object V39;
	V39= (V22);
T57:;
	if(!(type_of((V39))!=t_cons)){
	goto T58;}
	goto T52;
T58:;
	if(!((car((V39)))==(VV[12]))){
	goto T62;}
	goto T55;
T62:;
	V39= cdr((V39));
	goto T57;}
T55:;
	if((car((V22)))==(VV[12])){
	goto T52;}
	base[8]= VV[13];
	base[9]= (V25);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	vs_top=sup;
T52:;
	{register object V40;
	V40= (V22);
T73:;
	if(!(type_of((V40))!=t_cons)){
	goto T74;}
	if(((V40))!=Cnil){
	goto T78;}
	goto T71;
T78:;
	base[8]= (V40);
	base[9]= (V30);
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V36= Ct;
	goto T71;
T74:;
	{register object V41;
	V41= car((V40));
	if(!(((V41))==(VV[12]))){
	goto T89;}
	if((cdr((V40)))==Cnil){
	goto T92;}
	if(!(type_of(cadr((V40)))==t_symbol)){
	goto T92;}
	V40= cdr((V40));
	base[8]= car((V40));
	base[9]= (V23);
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	goto T86;
T92:;
	base[8]= VV[14];
	base[9]= (V25);
	base[10]= (V24);
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk82)();
	vs_top=sup;
	goto T86;
T89:;
	if(!(((V41))==(VV[15]))){
	goto T105;}
	if(((V28))==Cnil){
	goto T109;}
	base[8]= VV[16];
	base[9]= (V25);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	vs_top=sup;
	goto T107;
T109:;
	if(((V27))!=Cnil){
	goto T107;}
	base[8]= VV[17];
	vs_top=(vs_base=base+8)+1;
	Lerror();
	vs_top=sup;
T107:;
	if((cdr((V40)))==Cnil){
	goto T117;}
	if(!(type_of(cadr((V40)))==t_symbol)){
	goto T117;}
	V40= cdr((V40));
	base[8]= car((V40));
	base[9]= (V29);
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V38= Ct;
	goto T86;
T117:;
	base[8]= VV[18];
	base[9]= (V25);
	base[10]= (V24);
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk82)();
	vs_top=sup;
	goto T86;
T105:;
	if(((V41))==(VV[19])){
	goto T131;}
	if(!(((V41))==(VV[20]))){
	goto T132;}
T131:;
	if((cdr((V40)))==Cnil){
	goto T137;}
	if(!(type_of(cadr((V40)))==t_symbol)){
	goto T137;}
	V40= cdr((V40));
	V36= Ct;
	base[8]= car((V40));
	base[9]= (V30);
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	goto T86;
T137:;
	if((cdr((V40)))==Cnil){
	goto T149;}
	if(!(type_of(cadr((V40)))==t_cons)){
	goto T149;}
	if(!(type_of(caadr((V40)))==t_symbol)){
	goto T149;}
	V40= cdr((V40));
	V36= Ct;
	{object V42;
	object V43;
	object V44;
	object V45;
	V42= caar((V40));
	V43= cadar((V40));
	V44= caddar((V40));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V45= vs_base[0];
	base[8]= (V45);
	base[9]= list(2,VV[21],list(4,VV[22],(V30),(V29),(((((V44))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil)));
	base[10]= Ct;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V38= Ct;
	if(((V42))==Cnil){
	goto T169;}
	base[8]= (V42);
	base[9]= list(2,VV[23],(V45));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
T169:;
	if(((V43))==Cnil){
	goto T175;}
	base[8]= (V43);
	base[9]= list(2,VV[24],(V45));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
T175:;
	if(((V44))==Cnil){
	goto T86;}
	base[8]= (V44);
	base[9]= list(2,VV[25],(V45));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	goto T86;}
T149:;
	base[8]= symbol_name((V41));
	base[9]= (V25);
	base[10]= (V24);
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk82)();
	vs_top=sup;
	goto T86;
T132:;
	if(!(((V41))==(VV[26]))){
	goto T190;}
	V31= VV[27];
	goto T86;
T190:;
	if(!(((V41))==(VV[28]))){
	goto T194;}
	V31= VV[29];
	base[8]= VV[30];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V35= vs_base[0];
	setq(VV[5],make_cons((V35),symbol_value(VV[5])));
	V36= Ct;
	base[8]= (V35);
	base[9]= (V30);
	base[10]= Ct;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	goto T86;
T194:;
	if(!(((V41))==(VV[31]))){
	goto T209;}
	V37= Ct;
	goto T86;
T209:;
	if(!(((V41))==(VV[32]))){
	goto T213;}
	V31= VV[33];
	goto T86;
T213:;
	if(!(type_of((V41))==t_cons||((V41))==Cnil)){
	goto T217;}
	{object V46= (V31);
	if((V46!= VV[11]))goto T219;
	{object V47;
	base[8]= VV[34];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V47= vs_base[0];
	base[8]= (V47);
	base[9]= list(2,VV[23],(V30));
	base[10]= (V41);
	base[11]= (V24);
	base[12]= (V25);
	base[13]= (V26);
	vs_top=(vs_base=base+8)+6;
	(void) (*Lnk83)();
	vs_top=sup;
	base[8]= (V41);
	base[9]= (V47);
	base[10]= (V24);
	base[11]= (V25);
	base[12]= (V26);
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk80)();
	vs_top=sup;}
	V30= list(2,VV[10],(V30));
	V33= number_plus((V33),small_fixnum(1));
	V32= number_plus((V32),small_fixnum(1));
	goto T86;
T219:;
	if((V46!= VV[27]))goto T240;
	if(!((length((V41)))>(3))){
	goto T241;}
	base[8]= VV[35];
	base[9]= VV[36];
	base[10]= (V41);
	vs_top=(vs_base=base+8)+3;
	Lcerror();
	vs_top=sup;
T241:;
	base[8]= car((V41));
	base[9]= cadr((V41));
	base[10]= caddr((V41));
	base[11]= list(2,VV[37],list(2,VV[38],(V30)));
	base[12]= list(2,VV[23],(V30));
	base[13]= (V24);
	base[14]= (V25);
	base[15]= (V26);
	vs_top=(vs_base=base+8)+8;
	(void) (*Lnk84)();
	vs_top=sup;
	V30= list(2,VV[10],(V30));
	V32= number_plus((V32),small_fixnum(1));
	goto T86;
T240:;
	if((V46!= VV[29]))goto T259;
	{object V48;
	object V49;
	object V50;
	object V51;
	V48= (type_of(car((V41)))==t_cons?Ct:Cnil);
	if(((V48))==Cnil){
	goto T263;}
	V49= cadar((V41));
	goto T261;
T263:;
	V49= car((V41));
T261:;
	if(((V48))==Cnil){
	goto T267;}
	V50= caar((V41));
	goto T265;
T267:;
	base[12]= (V49);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk85)();
	vs_top=sup;
	V50= vs_base[0];
T265:;
	V51= caddr((V41));
	base[12]= (V49);
	base[13]= cadr((V41));
	base[14]= (V51);
	base[15]= list(3,VV[39],list(2,VV[40],(V50)),(V35));
	base[16]= list(3,VV[41],list(2,VV[40],(V50)),(V35));
	base[17]= (V24);
	base[18]= (V25);
	base[19]= (V26);
	vs_top=(vs_base=base+12)+8;
	(void) (*Lnk84)();
	vs_top=sup;
	V34= make_cons((V50),(V34));
	goto T86;}
T259:;
	if((V46!= VV[33]))goto T281;
	base[8]= car((V41));
	base[9]= cadr((V41));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	goto T86;
T281:;
	goto T86;}
T217:;
	if(!(type_of((V41))==t_symbol)){
	goto T286;}
	{object V52= (V31);
	if((V52!= VV[11]))goto T288;
	V33= number_plus((V33),small_fixnum(1));
	V32= number_plus((V32),small_fixnum(1));
	base[8]= (V41);
	base[9]= list(2,VV[23],(V30));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V30= list(2,VV[10],(V30));
	goto T86;
T288:;
	if((V52!= VV[27]))goto T298;
	V32= number_plus((V32),small_fixnum(1));
	base[8]= (V41);
	base[9]= list(2,VV[23],(V30));
	base[10]= Cnil;
	base[11]= list(2,VV[37],list(2,VV[38],(V30)));
	vs_top=(vs_base=base+8)+4;
	(void) (*Lnk81)();
	vs_top=sup;
	V30= list(2,VV[10],(V30));
	goto T86;
T298:;
	if((V52!= VV[29]))goto T307;
	{object V53;
	base[8]= (V41);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk85)();
	vs_top=sup;
	V53= vs_base[0];
	base[8]= (V41);
	base[9]= list(3,VV[41],(V53),(V35));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	V34= make_cons((V53),(V34));
	goto T86;}
T307:;
	if((V52!= VV[33]))goto T315;
	base[8]= (V41);
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
	base[9]= (V41);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	vs_top=sup;}
T86:;
	V40= cdr((V40));
	goto T73;}
T71:;
	if(((V36))!=Cnil){
	goto T324;}
	if(((V27))==Cnil){
	goto T330;}
	V54= list(2,VV[10],(V23));
	goto T328;
T330:;
	V54= (V23);
T328:;
	V55= list(2,VV[45],list(3,VV[46],VV[47],V54));
	if(((V36))!=Cnil){
	goto T334;}
	V56= make_cons((V32),Cnil);
	goto T332;
T334:;
	V56= Cnil;
T332:;
	V57= listA(4,VV[44],(V33),/* INLINE-ARGS */V55,V56);
	{object V59;
	if(((V27))==Cnil){
	goto T339;}
	V59= list(2,VV[10],(V23));
	goto T337;
T339:;
	V59= (V23);
T337:;
	if(!(((V26))==(VV[1]))){
	goto T342;}
	V60= list(2,VV[40],(V25));
	V61= list(2,VV[40],(V24));
	V62= list(2,VV[40],(V22));
	if(((V36))!=Cnil){
	goto T346;}
	V63= (V32);
	goto T344;
T346:;
	V63= Cnil;
T344:;
	V58= list(7,VV[48],/* INLINE-ARGS */V60,/* INLINE-ARGS */V61,(V59),/* INLINE-ARGS */V62,(V33),V63);
	goto T336;
T342:;
	V64= list(2,VV[40],(V25));
	if(((V24))==Cnil){
	goto T350;}
	V65= list(2,VV[51],list(2,VV[40],(V24)));
	goto T348;
T350:;
	V65= Cnil;
T348:;
	V66= list(2,VV[40],(V22));
	if(((V36))!=Cnil){
	goto T354;}
	V67= list(2,VV[55],(V32));
	goto T352;
T354:;
	V67= Cnil;
T352:;
	V68= listA(7,VV[52],(V59),VV[53],/* INLINE-ARGS */V66,VV[54],(V33),V67);
	V58= listA(5,(V26),VV[49],VV[50],/* INLINE-ARGS */V64,append(V65,/* INLINE-ARGS */V68));}
T336:;
	V69= list(3,VV[43],/* INLINE-ARGS */V57,V58);
	setq(VV[2],make_cons(/* INLINE-ARGS */V69,symbol_value(VV[2])));
T324:;
	if(((V34))==Cnil){
	goto T356;}
	{object V70;
	object V71;
	base[8]= VV[56];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V70= vs_base[0];
	base[8]= VV[57];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V71= vs_base[0];
	V72= list(2,(V70),(V71));
	V73= list(2,VV[40],(V34));
	V74= list(4,VV[59],(V35),/* INLINE-ARGS */V73,list(2,VV[40],(V37)));
	V75= list(2,VV[40],(V25));
	if(((V24))==Cnil){
	goto T366;}
	V76= list(2,VV[51],list(2,VV[40],(V24)));
	goto T364;
T366:;
	V76= Cnil;
T364:;
	V77= list(4,VV[62],(V70),VV[63],(V71));
	V78= list(4,VV[58],/* INLINE-ARGS */V72,/* INLINE-ARGS */V74,list(3,VV[60],(V70),listA(5,(V26),VV[61],VV[50],/* INLINE-ARGS */V75,append(V76,/* INLINE-ARGS */V77))));
	setq(VV[2],make_cons(/* INLINE-ARGS */V78,symbol_value(VV[2])));}
T356:;
	base[8]= (V38);
	base[9]= (V33);
	if(((V36))!=Cnil){
	goto T372;}
	base[10]= (V32);
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
	vs_reserve(VM3);
	{object V79;
	object V80;
	object V81;
	object V82;
	object V83;
	object V84;
	check_arg(6);
	V79=(base[0]);
	V80=(base[1]);
	V81=(base[2]);
	V82=(base[3]);
	V83=(base[4]);
	V84=(base[5]);
	vs_top=sup;
TTL:;
	{register object V85;
	base[6]= VV[64];
	vs_top=(vs_base=base+6)+1;
	Lgensym();
	vs_top=sup;
	V85= vs_base[0];
	V86= list(2,(V85),(V80));
	V87= make_cons(/* INLINE-ARGS */V86,Cnil);
	V88= list(2,VV[67],(V85));
	V89= list(2,VV[40],(V83));
	if(((V82))==Cnil){
	goto T379;}
	V90= list(2,VV[51],list(2,VV[40],(V82)));
	goto T377;
T379:;
	V90= Cnil;
T377:;
	V91= list(4,VV[69],(V85),VV[53],list(2,VV[40],(V81)));
	V92= list(2,(V79),list(3,VV[65],/* INLINE-ARGS */V87,list(4,VV[66],/* INLINE-ARGS */V88,(V85),listA(5,(V84),VV[68],VV[50],/* INLINE-ARGS */V89,append(V90,/* INLINE-ARGS */V91)))));
	setq(VV[4],make_cons(/* INLINE-ARGS */V92,symbol_value(VV[4])));
	base[6]= symbol_value(VV[4]);
	vs_top=(vs_base=base+6)+1;
	return;}
	}
}
/*	function definition for PUSH-LET-BINDING	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	{object V93;
	object V94;
	object V95;
	object V96;
	object V97;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>5) too_many_arguments();
	V93=(base[0]);
	V94=(base[1]);
	V95=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T381;}
	V96=(base[3]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T382;}
	V97=(base[4]);
	vs_top=sup;
	goto T383;
T381:;
	V96= Cnil;
T382:;
	V97= symbol_value(VV[0]);
T383:;
	{object V98;
	if(((V96))==Cnil){
	goto T388;}
	V98= list(2,(V93),list(4,VV[66],(V96),(V94),(V97)));
	goto T386;
T388:;
	V98= list(2,(V93),(V94));
T386:;
	if(((V95))==Cnil){
	goto T391;}
	setq(VV[4],make_cons((V98),symbol_value(VV[4])));
	base[5]= symbol_value(VV[4]);
	vs_top=(vs_base=base+5)+1;
	return;
T391:;
	setq(VV[3],make_cons((V98),symbol_value(VV[3])));
	base[5]= symbol_value(VV[3]);
	vs_top=(vs_base=base+5)+1;
	return;}
	}
}
/*	function definition for PUSH-OPTIONAL-BINDING	*/

static L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{register object V99;
	object V100;
	register object V101;
	object V102;
	object V103;
	object V104;
	object V105;
	object V106;
	check_arg(8);
	V99=(base[0]);
	V100=(base[1]);
	V101=(base[2]);
	V102=(base[3]);
	V103=(base[4]);
	V104=(base[5]);
	V105=(base[6]);
	V106=(base[7]);
	vs_top=sup;
TTL:;
	if(((V101))!=Cnil){
	goto T395;}
	base[8]= VV[70];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V101= vs_base[0];
T395:;
	base[8]= (V101);
	base[9]= (V102);
	base[10]= Ct;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk81)();
	vs_top=sup;
	if(!(type_of((V99))==t_cons)){
	goto T405;}
	{object V107;
	base[8]= VV[71];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V107= vs_base[0];
	base[8]= (V107);
	base[9]= list(4,VV[66],(V101),(V103),(V100));
	base[10]= (V99);
	base[11]= (V104);
	base[12]= (V105);
	base[13]= (V106);
	vs_top=(vs_base=base+8)+6;
	(void) (*Lnk83)();
	vs_top=sup;
	base[8]= (V99);
	base[9]= (V107);
	base[10]= (V104);
	base[11]= (V105);
	base[12]= (V106);
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk80)();
	return;}
T405:;
	if(!(type_of((V99))==t_symbol)){
	goto T422;}
	base[8]= (V99);
	base[9]= (V103);
	base[10]= Cnil;
	base[11]= (V101);
	base[12]= (V100);
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk81)();
	return;
T422:;
	base[8]= VV[72];
	base[9]= (V99);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	return;
	}
}
/*	function definition for PARSE-BODY	*/

static L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	{object V108;
	object V109;
	register object V110;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V108=(base[0]);
	V109=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T431;}
	V110=(base[2]);
	vs_top=sup;
	goto T432;
T431:;
	V110= Ct;
T432:;
	{register object V111;
	register object V112;
	V111= Cnil;
	V112= Cnil;
	{register object V113;
	V113= (V108);
T435:;
	if(!(endp((V113)))){
	goto T436;}
	base[3]= (V113);
	base[4]= nreverse((V111));
	base[5]= (V112);
	vs_top=(vs_base=base+3)+3;
	return;
T436:;
	{register object V114;
	V114= car((V113));
	if(!(type_of((V114))==t_string)){
	goto T446;}
	if((cdr((V113)))==Cnil){
	goto T446;}
	if(((V110))==Cnil){
	goto T451;}
	V112= (V114);
	V110= Cnil;
	goto T443;
T451:;
	base[3]= (V113);
	base[4]= nreverse((V111));
	base[5]= (V112);
	vs_top=(vs_base=base+3)+3;
	return;
T446:;
	if(!(type_of((V114))==t_cons)){
	goto T459;}
	if(type_of(car((V114)))==t_symbol){
	goto T460;}
T459:;
	base[3]= (V113);
	base[4]= nreverse((V111));
	base[5]= (V112);
	vs_top=(vs_base=base+3)+3;
	return;
T460:;
	if(!((car((V114)))==(VV[7]))){
	goto T468;}
	V111= make_cons((V114),(V111));
	goto T443;
T468:;
	base[3]= (V113);
	base[4]= nreverse((V111));
	base[5]= (V112);
	vs_top=(vs_base=base+3)+3;
	return;}
T443:;
	V113= cdr((V113));
	goto T435;}}
	}
}
/*	macro definition for DESTRUCTURING-BIND	*/

static L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	check_arg(2);
	vs_top=sup;
	{object V115=base[0]->c.c_cdr;
	if(endp(V115))invalid_macro_call();
	base[2]= (V115->c.c_car);
	V115=V115->c.c_cdr;
	if(endp(V115))invalid_macro_call();
	base[3]= (V115->c.c_car);
	V115=V115->c.c_cdr;
	base[4]= V115;}
	{object V116;
	base[6]= VV[73];
	vs_top=(vs_base=base+6)+1;
	Lgensym();
	vs_top=sup;
	V116= vs_base[0];
	{object V117;
	object V118;
	base[6]= base[2];
	base[7]= (V116);
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
	V117= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T490;}
	V118= vs_base[0];
	vs_top=sup;
	goto T491;
T489:;
	V117= Cnil;
T490:;
	V118= Cnil;
T491:;
	V119= list(2,(V116),base[3]);
	V120= make_cons(/* INLINE-ARGS */V119,Cnil);
	V121= make_cons((V117),Cnil);
	base[6]= listA(3,VV[65],/* INLINE-ARGS */V120,append((V118),/* INLINE-ARGS */V121));
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
static LnkT22(){ call_or_link(VV[22],&Lnk22);} /* PARSE-BODY */
