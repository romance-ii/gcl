
#include "cmpinclude.h"
#include "destructuring_bind.h"
void init_destructuring_bind(){do_init(VV);}
/*	function definition for PARSE-DEFMACRO	*/

static void L1()
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
	parse_key(vs_base+5,FALSE,FALSE,5,VV[77],VV[78],VV[79],VV[80],VV[81]);
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
	(void) (*Lnk24)();
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
goto T7;
T7:;
	V10= Cnil;
goto T8;
T8:;
	V11= Cnil;
goto T9;
T9:;
	V12= Cnil;
goto T10;
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
	(void) (*Lnk82)();
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
goto T20;
T20:;
	V13= Cnil;
goto T21;
T21:;
	V14= Cnil;
goto T22;
T22:;
	V15= Cnil;
goto T23;
T23:;
	V16= nreverse((VV[4]->s.s_dbind));
	if(((VV[5]->s.s_dbind))==Cnil){
	goto T28;}
	V18= list(2,VV[7],make_cons(VV[8],(VV[5]->s.s_dbind)));
	base[20]= make_cons(/* INLINE-ARGS */V18,Cnil);
	goto T26;
goto T28;
T28:;
	base[20]= Cnil;
goto T26;
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
goto T34;
T34:;
	base[20]= Cnil;
goto T32;
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
/*	function definition for MAKE-KEYWORD	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	{object V22;
	check_arg(1);
	V22=(base[0]);
	vs_top=sup;
goto TTL;
TTL:;
	base[1]= VV[10];
	base[2]= (V22);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
/*	function definition for DEFMACRO-ERROR	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	{object V23;
	object V24;
	object V25;
	check_arg(3);
	V23=(base[0]);
	V24=(base[1]);
	V25=(base[2]);
	vs_top=sup;
goto TTL;
TTL:;
	base[3]= VV[11];
	base[4]= (V23);
	base[5]= (V24);
	base[6]= (V25);
	vs_top=(vs_base=base+3)+4;
	Lerror();
	return;
	}
}
/*	function definition for PARSE-DEFMACRO-LAMBDA-LIST	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	{object V26;
	object V27;
	register object V28;
	register object V29;
	object V30;
	object V31;
	object V32;
	object V33;
	if(vs_top-vs_base<5) too_few_arguments();
	if(vs_top-vs_base>8) too_many_arguments();
	V26=(base[0]);
	V27=(base[1]);
	V28=(base[2]);
	V29=(base[3]);
	V30=(base[4]);
	vs_base=vs_base+5;
	if(vs_base>=vs_top){vs_top=sup;goto T47;}
	V31=(base[5]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T48;}
	V32=(base[6]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T49;}
	V33=(base[7]);
	vs_top=sup;
	goto T50;
goto T47;
T47:;
	V31= Cnil;
goto T48;
T48:;
	V32= Cnil;
goto T49;
T49:;
	V33= Cnil;
goto T50;
T50:;
	{register object V34;
	object V35;
	register object V36;
	object V37;
	object V38;
	object V39;
	object V40;
	object V41;
	object V42;
	if(((V31))==Cnil){
	goto T56;}
	V34= list(2,VV[12],(V27));
	goto T54;
goto T56;
T56:;
	V34= (V27);
goto T54;
T54:;
	V35= VV[13];
	V36= small_fixnum(0);
	V37= small_fixnum(0);
	V38= Cnil;
	V39= Cnil;
	V40= Cnil;
	V41= Cnil;
	V42= Cnil;
	{object V43;
	V43= (V26);
goto T63;
T63:;
	if(!(type_of((V43))!=t_cons)){
	goto T64;}
	goto T58;
goto T64;
T64:;
	if(!((car((V43)))==(VV[14]))){
	goto T68;}
	goto T61;
goto T68;
T68:;
	V43= cdr((V43));
	goto T63;}
goto T61;
T61:;
	if((car((V26)))==(VV[14])){
	goto T58;}
	base[8]= VV[15];
	base[9]= (V29);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	vs_top=sup;
goto T58;
T58:;
	{register object V44;
	V44= (V26);
goto T79;
T79:;
	if(!(type_of((V44))!=t_cons)){
	goto T80;}
	if(((V44))!=Cnil){
	goto T84;}
	goto T77;
goto T84;
T84:;
	base[8]= (V44);
	base[9]= (V34);
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk83)();
	vs_top=sup;
	V40= Ct;
	goto T77;
goto T80;
T80:;
	{register object V45;
	V45= car((V44));
	if(!(((V45))==(VV[14]))){
	goto T95;}
	if((cdr((V44)))==Cnil){
	goto T98;}
	if(!(type_of(cadr((V44)))==t_symbol)){
	goto T98;}
	V44= cdr((V44));
	base[8]= car((V44));
	base[9]= (V27);
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk83)();
	vs_top=sup;
	goto T92;
goto T98;
T98:;
	base[8]= VV[16];
	base[9]= (V29);
	base[10]= (V28);
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk84)();
	vs_top=sup;
	goto T92;
goto T95;
T95:;
	if(!(((V45))==(VV[17]))){
	goto T111;}
	if(((V32))==Cnil){
	goto T115;}
	base[8]= VV[18];
	base[9]= (V29);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	vs_top=sup;
	goto T113;
goto T115;
T115:;
	if(((V31))!=Cnil){
	goto T113;}
	base[8]= VV[19];
	vs_top=(vs_base=base+8)+1;
	Lerror();
	vs_top=sup;
goto T113;
T113:;
	if((cdr((V44)))==Cnil){
	goto T123;}
	if(!(type_of(cadr((V44)))==t_symbol)){
	goto T123;}
	V44= cdr((V44));
	base[8]= car((V44));
	base[9]= (V33);
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk83)();
	vs_top=sup;
	V42= Ct;
	goto T92;
goto T123;
T123:;
	base[8]= VV[20];
	base[9]= (V29);
	base[10]= (V28);
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk84)();
	vs_top=sup;
	goto T92;
goto T111;
T111:;
	if(((V45))==(VV[21])){
	goto T137;}
	if(!(((V45))==(VV[22]))){
	goto T138;}
goto T137;
T137:;
	if((cdr((V44)))==Cnil){
	goto T143;}
	if(!(type_of(cadr((V44)))==t_symbol)){
	goto T143;}
	V44= cdr((V44));
	V40= Ct;
	base[8]= car((V44));
	base[9]= (V34);
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk83)();
	vs_top=sup;
	goto T92;
goto T143;
T143:;
	if((cdr((V44)))==Cnil){
	goto T155;}
	if(!(type_of(cadr((V44)))==t_cons)){
	goto T155;}
	if(!(type_of(caadr((V44)))==t_symbol)){
	goto T155;}
	V44= cdr((V44));
	V40= Ct;
	{object V46;
	object V47;
	object V48;
	object V49;
	V46= caar((V44));
	V47= cadar((V44));
	V48= caddar((V44));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V49= vs_base[0];
	base[8]= (V49);
	base[9]= list(2,VV[23],list(4,VV[24],(V34),(V33),(((((V48))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil)));
	base[10]= Ct;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk83)();
	vs_top=sup;
	V42= Ct;
	if(((V46))==Cnil){
	goto T175;}
	base[8]= (V46);
	base[9]= list(2,VV[25],(V49));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk83)();
	vs_top=sup;
goto T175;
T175:;
	if(((V47))==Cnil){
	goto T181;}
	base[8]= (V47);
	base[9]= list(2,VV[26],(V49));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk83)();
	vs_top=sup;
goto T181;
T181:;
	if(((V48))==Cnil){
	goto T92;}
	base[8]= (V48);
	base[9]= list(2,VV[27],(V49));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk83)();
	vs_top=sup;
	goto T92;}
goto T155;
T155:;
	base[8]= symbol_name((V45));
	base[9]= (V29);
	base[10]= (V28);
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk84)();
	vs_top=sup;
	goto T92;
goto T138;
T138:;
	if(!(((V45))==(VV[28]))){
	goto T196;}
	V35= VV[29];
	goto T92;
goto T196;
T196:;
	if(!(((V45))==(VV[30]))){
	goto T200;}
	V35= VV[31];
	base[8]= VV[32];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V39= vs_base[0];
	setq(VV[5],make_cons((V39),symbol_value(VV[5])));
	V40= Ct;
	base[8]= (V39);
	base[9]= (V34);
	base[10]= Ct;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk83)();
	vs_top=sup;
	goto T92;
goto T200;
T200:;
	if(!(((V45))==(VV[33]))){
	goto T215;}
	V41= Ct;
	goto T92;
goto T215;
T215:;
	if(!(((V45))==(VV[34]))){
	goto T219;}
	V35= VV[35];
	goto T92;
goto T219;
T219:;
	if(!(type_of((V45))==t_cons||((V45))==Cnil)){
	goto T223;}
	{object V50= (V35);
	if((V50!= VV[13]))goto T225;
	{object V51;
	base[8]= VV[36];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V51= vs_base[0];
	base[8]= (V51);
	base[9]= list(2,VV[25],(V34));
	base[10]= (V45);
	base[11]= (V28);
	base[12]= (V29);
	base[13]= (V30);
	vs_top=(vs_base=base+8)+6;
	(void) (*Lnk85)();
	vs_top=sup;
	base[8]= (V45);
	base[9]= (V51);
	base[10]= (V28);
	base[11]= (V29);
	base[12]= (V30);
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk82)();
	vs_top=sup;}
	V34= list(2,VV[12],(V34));
	V37= number_plus((V37),small_fixnum(1));
	V36= number_plus((V36),small_fixnum(1));
	goto T92;
goto T225;
T225:;
	if((V50!= VV[29]))goto T246;
	if(!(((long)length((V45)))>(3))){
	goto T247;}
	base[8]= VV[37];
	base[9]= VV[38];
	base[10]= (V45);
	vs_top=(vs_base=base+8)+3;
	Lcerror();
	vs_top=sup;
goto T247;
T247:;
	base[8]= car((V45));
	base[9]= cadr((V45));
	base[10]= caddr((V45));
	base[11]= list(2,VV[39],list(2,VV[40],(V34)));
	base[12]= list(2,VV[25],(V34));
	base[13]= (V28);
	base[14]= (V29);
	base[15]= (V30);
	vs_top=(vs_base=base+8)+8;
	(void) (*Lnk86)();
	vs_top=sup;
	V34= list(2,VV[12],(V34));
	V36= number_plus((V36),small_fixnum(1));
	goto T92;
goto T246;
T246:;
	if((V50!= VV[31]))goto T265;
	{object V52;
	object V53;
	object V54;
	object V55;
	V52= (type_of(car((V45)))==t_cons?Ct:Cnil);
	if(((V52))==Cnil){
	goto T269;}
	V53= cadar((V45));
	goto T267;
goto T269;
T269:;
	V53= car((V45));
goto T267;
T267:;
	if(((V52))==Cnil){
	goto T273;}
	V54= caar((V45));
	goto T271;
goto T273;
T273:;
	base[12]= (V53);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk87)();
	vs_top=sup;
	V54= vs_base[0];
goto T271;
T271:;
	V55= caddr((V45));
	base[12]= (V53);
	base[13]= cadr((V45));
	base[14]= (V55);
	base[15]= list(3,VV[41],list(2,VV[42],(V54)),(V39));
	base[16]= list(3,VV[43],list(2,VV[42],(V54)),(V39));
	base[17]= (V28);
	base[18]= (V29);
	base[19]= (V30);
	vs_top=(vs_base=base+12)+8;
	(void) (*Lnk86)();
	vs_top=sup;
	V38= make_cons((V54),(V38));
	goto T92;}
goto T265;
T265:;
	if((V50!= VV[35]))goto T287;
	base[8]= car((V45));
	base[9]= cadr((V45));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk83)();
	vs_top=sup;
	goto T92;
goto T287;
T287:;
	goto T92;}
goto T223;
T223:;
	if(!(type_of((V45))==t_symbol)){
	goto T292;}
	{object V56= (V35);
	if((V56!= VV[13]))goto T294;
	V37= number_plus((V37),small_fixnum(1));
	V36= number_plus((V36),small_fixnum(1));
	base[8]= (V45);
	base[9]= list(2,VV[25],(V34));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk83)();
	vs_top=sup;
	V34= list(2,VV[12],(V34));
	goto T92;
goto T294;
T294:;
	if((V56!= VV[29]))goto T304;
	V36= number_plus((V36),small_fixnum(1));
	base[8]= (V45);
	base[9]= list(2,VV[25],(V34));
	base[10]= Cnil;
	base[11]= list(2,VV[39],list(2,VV[40],(V34)));
	vs_top=(vs_base=base+8)+4;
	(void) (*Lnk83)();
	vs_top=sup;
	V34= list(2,VV[12],(V34));
	goto T92;
goto T304;
T304:;
	if((V56!= VV[31]))goto T313;
	{object V57;
	base[8]= (V45);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk87)();
	vs_top=sup;
	V57= vs_base[0];
	base[8]= (V45);
	base[9]= list(3,VV[43],(V57),(V39));
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk83)();
	vs_top=sup;
	V38= make_cons((V57),(V38));
	goto T92;}
goto T313;
T313:;
	if((V56!= VV[35]))goto T321;
	base[8]= (V45);
	base[9]= Cnil;
	base[10]= Cnil;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk83)();
	vs_top=sup;
	goto T92;
goto T321;
T321:;
	goto T92;}
goto T292;
T292:;
	base[8]= VV[44];
	base[9]= (V45);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	vs_top=sup;}
goto T92;
T92:;
	V44= cdr((V44));
	goto T79;}
goto T77;
T77:;
	if(((V40))!=Cnil){
	goto T330;}
	if(((V31))==Cnil){
	goto T336;}
	V58= list(2,VV[12],(V27));
	goto T334;
goto T336;
T336:;
	V58= (V27);
goto T334;
T334:;
	V59= list(2,VV[47],list(3,VV[48],VV[49],V58));
	if(((V40))!=Cnil){
	goto T340;}
	V60= make_cons((V36),Cnil);
	goto T338;
goto T340;
T340:;
	V60= Cnil;
goto T338;
T338:;
	V61= listA(4,VV[46],(V37),/* INLINE-ARGS */V59,V60);
	{object V63;
	if(((V31))==Cnil){
	goto T345;}
	V63= list(2,VV[12],(V27));
	goto T343;
goto T345;
T345:;
	V63= (V27);
goto T343;
T343:;
	if(!(((V30))==(VV[1]))){
	goto T348;}
	V64= list(2,VV[42],(V29));
	V65= list(2,VV[42],(V28));
	V66= list(2,VV[42],(V26));
	if(((V40))!=Cnil){
	goto T352;}
	V67= (V36);
	goto T350;
goto T352;
T352:;
	V67= Cnil;
goto T350;
T350:;
	V62= list(7,VV[50],/* INLINE-ARGS */V64,/* INLINE-ARGS */V65,(V63),/* INLINE-ARGS */V66,(V37),V67);
	goto T342;
goto T348;
T348:;
	V68= list(2,VV[42],(V29));
	if(((V28))==Cnil){
	goto T356;}
	V69= list(2,VV[53],list(2,VV[42],(V28)));
	goto T354;
goto T356;
T356:;
	V69= Cnil;
goto T354;
T354:;
	V70= list(2,VV[42],(V26));
	if(((V40))!=Cnil){
	goto T360;}
	V71= list(2,VV[57],(V36));
	goto T358;
goto T360;
T360:;
	V71= Cnil;
goto T358;
T358:;
	V72= listA(7,VV[54],(V63),VV[55],/* INLINE-ARGS */V70,VV[56],(V37),V71);
	V62= listA(5,(V30),VV[51],VV[52],/* INLINE-ARGS */V68,append(V69,/* INLINE-ARGS */V72));}
goto T342;
T342:;
	V73= list(3,VV[45],/* INLINE-ARGS */V61,V62);
	setq(VV[2],make_cons(/* INLINE-ARGS */V73,symbol_value(VV[2])));
goto T330;
T330:;
	if(((V38))==Cnil){
	goto T362;}
	{object V74;
	object V75;
	base[8]= VV[58];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V74= vs_base[0];
	base[8]= VV[59];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V75= vs_base[0];
	V76= list(2,(V74),(V75));
	V77= list(2,VV[42],(V38));
	V78= list(4,VV[61],(V39),/* INLINE-ARGS */V77,list(2,VV[42],(V41)));
	V79= list(2,VV[42],(V29));
	if(((V28))==Cnil){
	goto T372;}
	V80= list(2,VV[53],list(2,VV[42],(V28)));
	goto T370;
goto T372;
T372:;
	V80= Cnil;
goto T370;
T370:;
	V81= list(4,VV[64],(V74),VV[65],(V75));
	V82= list(4,VV[60],/* INLINE-ARGS */V76,/* INLINE-ARGS */V78,list(3,VV[62],(V74),listA(5,(V30),VV[63],VV[52],/* INLINE-ARGS */V79,append(V80,/* INLINE-ARGS */V81))));
	setq(VV[2],make_cons(/* INLINE-ARGS */V82,symbol_value(VV[2])));}
goto T362;
T362:;
	base[8]= (V42);
	base[9]= (V37);
	if(((V40))!=Cnil){
	goto T378;}
	base[10]= (V36);
	goto T376;
goto T378;
T378:;
	base[10]= Cnil;
goto T376;
T376:;
	vs_top=(vs_base=base+8)+3;
	return;}
	}
}
/*	function definition for PUSH-SUB-LIST-BINDING	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{object V83;
	object V84;
	object V85;
	object V86;
	object V87;
	object V88;
	check_arg(6);
	V83=(base[0]);
	V84=(base[1]);
	V85=(base[2]);
	V86=(base[3]);
	V87=(base[4]);
	V88=(base[5]);
	vs_top=sup;
goto TTL;
TTL:;
	{register object V89;
	base[6]= VV[66];
	vs_top=(vs_base=base+6)+1;
	Lgensym();
	vs_top=sup;
	V89= vs_base[0];
	V90= list(2,(V89),(V84));
	V91= make_cons(/* INLINE-ARGS */V90,Cnil);
	V92= list(2,VV[69],(V89));
	V93= list(2,VV[42],(V87));
	if(((V86))==Cnil){
	goto T385;}
	V94= list(2,VV[53],list(2,VV[42],(V86)));
	goto T383;
goto T385;
T385:;
	V94= Cnil;
goto T383;
T383:;
	V95= list(4,VV[71],(V89),VV[55],list(2,VV[42],(V85)));
	V96= list(2,(V83),list(3,VV[67],/* INLINE-ARGS */V91,list(4,VV[68],/* INLINE-ARGS */V92,(V89),listA(5,(V88),VV[70],VV[52],/* INLINE-ARGS */V93,append(V94,/* INLINE-ARGS */V95)))));
	setq(VV[4],make_cons(/* INLINE-ARGS */V96,symbol_value(VV[4])));
	base[6]= symbol_value(VV[4]);
	vs_top=(vs_base=base+6)+1;
	return;}
	}
}
/*	function definition for PUSH-LET-BINDING	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	{object V97;
	object V98;
	object V99;
	object V100;
	object V101;
	if(vs_top-vs_base<3) too_few_arguments();
	if(vs_top-vs_base>5) too_many_arguments();
	V97=(base[0]);
	V98=(base[1]);
	V99=(base[2]);
	vs_base=vs_base+3;
	if(vs_base>=vs_top){vs_top=sup;goto T387;}
	V100=(base[3]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T388;}
	V101=(base[4]);
	vs_top=sup;
	goto T389;
goto T387;
T387:;
	V100= Cnil;
goto T388;
T388:;
	V101= symbol_value(VV[0]);
goto T389;
T389:;
	{object V102;
	if(((V100))==Cnil){
	goto T394;}
	V102= list(2,(V97),list(4,VV[68],(V100),(V98),(V101)));
	goto T392;
goto T394;
T394:;
	V102= list(2,(V97),(V98));
goto T392;
T392:;
	if(((V99))==Cnil){
	goto T397;}
	setq(VV[4],make_cons((V102),symbol_value(VV[4])));
	base[5]= symbol_value(VV[4]);
	vs_top=(vs_base=base+5)+1;
	return;
goto T397;
T397:;
	setq(VV[3],make_cons((V102),symbol_value(VV[3])));
	base[5]= symbol_value(VV[3]);
	vs_top=(vs_base=base+5)+1;
	return;}
	}
}
/*	function definition for PUSH-OPTIONAL-BINDING	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	{register object V103;
	object V104;
	register object V105;
	object V106;
	object V107;
	object V108;
	object V109;
	object V110;
	check_arg(8);
	V103=(base[0]);
	V104=(base[1]);
	V105=(base[2]);
	V106=(base[3]);
	V107=(base[4]);
	V108=(base[5]);
	V109=(base[6]);
	V110=(base[7]);
	vs_top=sup;
goto TTL;
TTL:;
	if(((V105))!=Cnil){
	goto T401;}
	base[8]= VV[72];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V105= vs_base[0];
goto T401;
T401:;
	base[8]= (V105);
	base[9]= (V106);
	base[10]= Ct;
	vs_top=(vs_base=base+8)+3;
	(void) (*Lnk83)();
	vs_top=sup;
	if(!(type_of((V103))==t_cons)){
	goto T411;}
	{object V111;
	base[8]= VV[73];
	vs_top=(vs_base=base+8)+1;
	Lgensym();
	vs_top=sup;
	V111= vs_base[0];
	base[8]= (V111);
	base[9]= list(4,VV[68],(V105),(V107),(V104));
	base[10]= (V103);
	base[11]= (V108);
	base[12]= (V109);
	base[13]= (V110);
	vs_top=(vs_base=base+8)+6;
	(void) (*Lnk85)();
	vs_top=sup;
	base[8]= (V103);
	base[9]= (V111);
	base[10]= (V108);
	base[11]= (V109);
	base[12]= (V110);
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk82)();
	return;}
goto T411;
T411:;
	if(!(type_of((V103))==t_symbol)){
	goto T428;}
	base[8]= (V103);
	base[9]= (V107);
	base[10]= Cnil;
	base[11]= (V105);
	base[12]= (V104);
	vs_top=(vs_base=base+8)+5;
	(void) (*Lnk83)();
	return;
goto T428;
T428:;
	base[8]= VV[74];
	base[9]= (V103);
	vs_top=(vs_base=base+8)+2;
	Lerror();
	return;
	}
}
/*	function definition for PARSE-BODY	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{object V112;
	object V113;
	register object V114;
	if(vs_top-vs_base<2) too_few_arguments();
	if(vs_top-vs_base>3) too_many_arguments();
	V112=(base[0]);
	V113=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T437;}
	V114=(base[2]);
	vs_top=sup;
	goto T438;
goto T437;
T437:;
	V114= Ct;
goto T438;
T438:;
	{register object V115;
	register object V116;
	V115= Cnil;
	V116= Cnil;
	{register object V117;
	V117= (V112);
goto T441;
T441:;
	if(!(endp_prop((V117)))){
	goto T442;}
	base[3]= (V117);
	base[4]= nreverse((V115));
	base[5]= (V116);
	vs_top=(vs_base=base+3)+3;
	return;
goto T442;
T442:;
	{register object V118;
	V118= car((V117));
	if(!(type_of((V118))==t_string)){
	goto T452;}
	if((cdr((V117)))==Cnil){
	goto T452;}
	if(((V114))==Cnil){
	goto T457;}
	V116= (V118);
	V114= Cnil;
	goto T449;
goto T457;
T457:;
	base[3]= (V117);
	base[4]= nreverse((V115));
	base[5]= (V116);
	vs_top=(vs_base=base+3)+3;
	return;
goto T452;
T452:;
	if(!(type_of((V118))==t_cons)){
	goto T465;}
	if(type_of(car((V118)))==t_symbol){
	goto T466;}
goto T465;
T465:;
	base[3]= (V117);
	base[4]= nreverse((V115));
	base[5]= (V116);
	vs_top=(vs_base=base+3)+3;
	return;
goto T466;
T466:;
	if(!((car((V118)))==(VV[7]))){
	goto T474;}
	V115= make_cons((V118),(V115));
	goto T449;
goto T474;
T474:;
	base[3]= (V117);
	base[4]= nreverse((V115));
	base[5]= (V116);
	vs_top=(vs_base=base+3)+3;
	return;}
goto T449;
T449:;
	V117= cdr((V117));
	goto T441;}}
	}
}
/*	macro definition for DESTRUCTURING-BIND	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	check_arg(2);
	vs_top=sup;
	{object V119=base[0]->c.c_cdr;
	if(endp(V119))invalid_macro_call();
	base[2]= (V119->c.c_car);
	V119=V119->c.c_cdr;
	if(endp(V119))invalid_macro_call();
	base[3]= (V119->c.c_car);
	V119=V119->c.c_cdr;
	base[4]= V119;}
	{object V120;
	base[6]= VV[75];
	vs_top=(vs_base=base+6)+1;
	Lgensym();
	vs_top=sup;
	V120= vs_base[0];
	{object V121;
	object V122;
	base[6]= base[2];
	base[7]= (V120);
	base[8]= base[4];
	base[9]= Cnil;
	base[10]= VV[76];
	base[11]= VV[77];
	base[12]= Ct;
	base[13]= VV[78];
	base[14]= Cnil;
	vs_top=(vs_base=base+6)+9;
	(void) (*Lnk88)();
	if(vs_base>=vs_top){vs_top=sup;goto T495;}
	V121= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T496;}
	V122= vs_base[0];
	vs_top=sup;
	goto T497;
goto T495;
T495:;
	V121= Cnil;
goto T496;
T496:;
	V122= Cnil;
goto T497;
T497:;
	V123= list(2,(V120),base[3]);
	V124= make_cons(/* INLINE-ARGS */V123,Cnil);
	V125= make_cons((V121),Cnil);
	base[6]= listA(3,VV[67],/* INLINE-ARGS */V124,append((V122),/* INLINE-ARGS */V125));
	vs_top=(vs_base=base+6)+1;
	return;}}
}
static void LnkT88(){ call_or_link(VV[88],(void **)&Lnk88);} /* PARSE-DEFMACRO */
static void LnkT87(){ call_or_link(VV[87],(void **)&Lnk87);} /* MAKE-KEYWORD */
static void LnkT86(){ call_or_link(VV[86],(void **)&Lnk86);} /* PUSH-OPTIONAL-BINDING */
static void LnkT85(){ call_or_link(VV[85],(void **)&Lnk85);} /* PUSH-SUB-LIST-BINDING */
static void LnkT84(){ call_or_link(VV[84],(void **)&Lnk84);} /* DEFMACRO-ERROR */
static void LnkT83(){ call_or_link(VV[83],(void **)&Lnk83);} /* PUSH-LET-BINDING */
static void LnkT82(){ call_or_link(VV[82],(void **)&Lnk82);} /* PARSE-DEFMACRO-LAMBDA-LIST */
static void LnkT24(){ call_or_link(VV[24],(void **)&Lnk24);} /* PARSE-BODY */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

