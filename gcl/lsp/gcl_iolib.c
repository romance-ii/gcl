
#include "cmpinclude.h"
#include "gcl_iolib.h"
void init_gcl_iolib(){do_init(VV);}
/*	macro definition for WITH-OPEN-STREAM	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	{object V2= (V1->c.c_car);
	if(endp(V2))invalid_macro_call();
	base[2]= (V2->c.c_car);
	V2=V2->c.c_cdr;
	if(endp(V2))invalid_macro_call();
	base[3]= (V2->c.c_car);
	V2=V2->c.c_cdr;
	if(!endp(V2))invalid_macro_call();}
	V1=V1->c.c_cdr;
	base[4]= V1;}
	{object V3;
	object V4;
	base[5]= base[4];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk39)();
	if(vs_base>=vs_top){vs_top=sup;goto T3;}
	V3= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T4;}
	V4= vs_base[0];
	vs_top=sup;
	goto T5;
	goto T3;
T3:;
	V3= Cnil;
	goto T4;
T4:;
	V4= Cnil;
	goto T5;
T5:;
	V5= list(2,base[2],base[3]);
	V6= make_cons(/* INLINE-ARGS */V5,Cnil);
	V7= make_cons(VV[2],(V4));
	V8= list(3,VV[1],/* INLINE-ARGS */V7,list(2,VV[3],base[2]));
	V9= make_cons(/* INLINE-ARGS */V8,Cnil);
	base[5]= listA(3,VV[0],/* INLINE-ARGS */V6,append((V3),/* INLINE-ARGS */V9));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	macro definition for WITH-INPUT-FROM-STRING	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	check_arg(2);
	vs_top=sup;
	{object V10=base[0]->c.c_cdr;
	if(endp(V10))invalid_macro_call();
	{object V11= (V10->c.c_car);
	if(endp(V11))invalid_macro_call();
	base[2]= (V11->c.c_car);
	V11=V11->c.c_cdr;
	if(endp(V11))invalid_macro_call();
	base[3]= (V11->c.c_car);
	V11=V11->c.c_cdr;
	{object V12=getf(V11,VV[40],OBJNULL);
	if(V12==OBJNULL){
	base[4]= Cnil;} else {
	base[4]= V12;
	}}
	{object V13=getf(V11,VV[41],OBJNULL);
	if(V13==OBJNULL){
	base[5]= Cnil;} else {
	base[5]= V13;
	}}
	{object V14=getf(V11,VV[42],OBJNULL);
	if(V14==OBJNULL){
	base[6]= Cnil;} else {
	base[6]= V14;
	}}
	check_other_key(V11,3,VV[40],VV[41],VV[42]);}
	V10=V10->c.c_cdr;
	base[7]= V10;}
	if((base[4])==Cnil){
	goto T10;}
	{object V15;
	object V16;
	base[8]= base[7];
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk39)();
	if(vs_base>=vs_top){vs_top=sup;goto T14;}
	V15= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T15;}
	V16= vs_base[0];
	vs_top=sup;
	goto T16;
	goto T14;
T14:;
	V15= Cnil;
	goto T15;
T15:;
	V16= Cnil;
	goto T16;
T16:;
	V17= list(2,base[2],list(4,VV[4],base[3],base[5],base[6]));
	V18= make_cons(/* INLINE-ARGS */V17,Cnil);
	V19= make_cons(VV[2],(V16));
	V20= list(3,VV[1],/* INLINE-ARGS */V19,list(3,VV[5],base[4],list(2,VV[6],base[2])));
	V21= make_cons(/* INLINE-ARGS */V20,Cnil);
	base[8]= listA(3,VV[0],/* INLINE-ARGS */V18,append((V15),/* INLINE-ARGS */V21));
	vs_top=(vs_base=base+8)+1;
	return;}
	goto T10;
T10:;
	V22= list(2,base[2],list(4,VV[4],base[3],base[5],base[6]));
	base[8]= listA(3,VV[0],make_cons(/* INLINE-ARGS */V22,Cnil),base[7]);
	vs_top=(vs_base=base+8)+1;
	return;
}
/*	macro definition for WITH-OUTPUT-TO-STRING	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(2);
	vs_top=sup;
	{object V23=base[0]->c.c_cdr;
	if(endp(V23))invalid_macro_call();
	{object V24= (V23->c.c_car);
	if(endp(V24))invalid_macro_call();
	base[2]= (V24->c.c_car);
	V24=V24->c.c_cdr;
	if(endp(V24)){
	base[3]= Cnil;
	} else {
	base[3]= (V24->c.c_car);
	V24=V24->c.c_cdr;}
	if(!endp(V24))invalid_macro_call();}
	V23=V23->c.c_cdr;
	base[4]= V23;}
	if((base[3])==Cnil){
	goto T19;}
	V25= list(2,base[2],list(2,VV[7],base[3]));
	base[5]= listA(3,VV[0],make_cons(/* INLINE-ARGS */V25,Cnil),base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
	goto T19;
T19:;
	V26= list(2,base[2],VV[8]);
	V27= make_cons(/* INLINE-ARGS */V26,Cnil);
	V28= list(2,VV[9],base[2]);
	V29= make_cons(/* INLINE-ARGS */V28,Cnil);
	base[5]= listA(3,VV[0],/* INLINE-ARGS */V27,append(base[4],/* INLINE-ARGS */V29));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	function definition for READ-FROM-STRING	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	{object V30;
	object V31;
	object V32;
	object V33;
	object V34;
	object V35;
	if(vs_top-vs_base<1) too_few_arguments();
	parse_key(vs_base+3,FALSE,FALSE,3,VV[41],VV[42],VV[43]);
	V30=(base[0]);
	vs_base += 1;
	if(vs_base>=vs_top){vs_top=sup;goto T21;}
	V31=(base[1]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T22;}
	V32=(base[2]);
	vs_top=sup;goto T23;
	goto T21;
T21:;
	V31= Ct;
	goto T22;
T22:;
	V32= Cnil;
	goto T23;
T23:;
	if(base[6]==Cnil){
	V33= small_fixnum(0);
	}else{
	V33=(base[3]);}
	if(base[7]==Cnil){
	V34= make_fixnum((long)length((V30)));
	}else{
	V34=(base[4]);}
	V35=(base[5]);
	{register object V36;
	base[9]= (V30);
	base[10]= (V33);
	base[11]= (V34);
	vs_top=(vs_base=base+9)+3;
	(void) (*Lnk4)();
	vs_top=sup;
	V36= vs_base[0];
	if(((V35))==Cnil){
	goto T33;}
	base[10]= (V36);
	base[11]= (V31);
	base[12]= (V32);
	vs_top=(vs_base=base+10)+3;
	(void) (*Lnk44)();
	vs_top=sup;
	base[9]= vs_base[0];
	base[11]= (V36);
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk6)();
	vs_top=sup;
	base[10]= vs_base[0];
	vs_top=(vs_base=base+9)+2;
	return;
	goto T33;
T33:;
	base[10]= (V36);
	base[11]= (V31);
	base[12]= (V32);
	vs_top=(vs_base=base+10)+3;
	Lread();
	vs_top=sup;
	base[9]= vs_base[0];
	base[11]= (V36);
	vs_top=(vs_base=base+11)+1;
	(void) (*Lnk6)();
	vs_top=sup;
	base[10]= vs_base[0];
	vs_top=(vs_base=base+9)+2;
	return;}
	}
}
/*	function definition for WRITE-TO-STRING	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{object V37;
	object V38;
	object V39;
	object V40;
	object V41;
	object V42;
	object V43;
	object V44;
	object V45;
	object V46;
	object V47;
	object V48;
	if(vs_top-vs_base<1) too_few_arguments();
	parse_key(vs_base+1,TRUE,FALSE,10,VV[45],VV[46],VV[47],VV[48],VV[49],VV[50],VV[51],VV[52],VV[53],VV[54]);
	V37=(base[0]);
	vs_top=sup;
	V38=(base[1]);
	V39=(base[2]);
	V40=(base[3]);
	V41=(base[4]);
	V42=(base[5]);
	V43=(base[6]);
	V44=(base[7]);
	V45=(base[8]);
	V46=(base[9]);
	V47=(base[10]);
	V48=(base[11]);
	{object V49;
	vs_base=vs_top;
	(void) (*Lnk55)();
	vs_top=sup;
	V49= vs_base[0];
	base[23]= (V37);
	base[24]= VV[10];
	base[25]= (V49);
	{object V50;
	V50= (V38);
	 vs_top=base+26;
	 while(!endp(V50))
	 {vs_push(car(V50));V50=cdr(V50);}
	vs_base=base+23;}
	Lwrite();
	vs_top=sup;
	base[23]= (V49);
	vs_top=(vs_base=base+23)+1;
	(void) (*Lnk9)();
	return;}
	}
}
/*	function definition for PRIN1-TO-STRING	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	{object V51;
	check_arg(1);
	V51=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V52;
	vs_base=vs_top;
	(void) (*Lnk55)();
	vs_top=sup;
	V52= vs_base[0];
	(void)(prin1((V51),(V52)));
	base[2]= (V52);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk9)();
	return;}
	}
}
/*	function definition for PRINC-TO-STRING	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	{object V53;
	check_arg(1);
	V53=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V54;
	vs_base=vs_top;
	(void) (*Lnk55)();
	vs_top=sup;
	V54= vs_base[0];
	(void)(princ((V53),(V54)));
	base[2]= (V54);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk9)();
	return;}
	}
}
/*	macro definition for WITH-OPEN-FILE	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	check_arg(2);
	vs_top=sup;
	{object V55=base[0]->c.c_cdr;
	if(endp(V55))invalid_macro_call();
	{object V56= (V55->c.c_car);
	if(endp(V56))invalid_macro_call();
	base[2]= (V56->c.c_car);
	V56=V56->c.c_cdr;
	base[3]= V56;}
	V55=V55->c.c_cdr;
	base[4]= V55;}
	{object V57;
	object V58;
	base[5]= base[4];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk39)();
	if(vs_base>=vs_top){vs_top=sup;goto T62;}
	V57= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T63;}
	V58= vs_base[0];
	vs_top=sup;
	goto T64;
	goto T62;
T62:;
	V57= Cnil;
	goto T63;
T63:;
	V58= Cnil;
	goto T64;
T64:;
	V59= list(2,base[2],make_cons(VV[11],base[3]));
	V60= make_cons(/* INLINE-ARGS */V59,Cnil);
	V61= make_cons(VV[2],(V58));
	V62= list(3,VV[1],/* INLINE-ARGS */V61,list(3,VV[12],base[2],list(2,VV[3],base[2])));
	V63= make_cons(/* INLINE-ARGS */V62,Cnil);
	base[5]= listA(3,VV[0],/* INLINE-ARGS */V60,append((V57),/* INLINE-ARGS */V63));
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	local entry for function Y-OR-N-P	*/

static object LI9(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{register object V64;
	register object V65;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T65;
	else {
	V64= first;}
	--narg; goto T66;
	goto T65;
T65:;
	V64= Cnil;
	goto T66;
T66:;
	V66 = list_vector_new(narg,first,ap);
	V65= V66;
	{register object V67;
	V67= Cnil;
	goto T69;
T69:;
	if(((V64))==Cnil){
	goto T72;}
	base[0]= symbol_value(VV[13]);
	base[1]= VV[14];
	base[2]= (V64);
	base[3]= (V65);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	goto T72;
T72:;
	base[0]= symbol_value(VV[13]);
	vs_top=(vs_base=base+0)+1;
	Lread();
	vs_top=sup;
	V67= vs_base[0];
	base[0]= symbol_name((V67));
	base[1]= VV[15];
	vs_top=(vs_base=base+0)+2;
	Lstring_equal();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T84;}
	{object V68 = Ct;
	VMR9(V68)}
	goto T84;
T84:;
	base[0]= symbol_name((V67));
	base[1]= VV[16];
	vs_top=(vs_base=base+0)+2;
	Lstring_equal();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T82;}
	{object V69 = Cnil;
	VMR9(V69)}
	goto T82;
T82:;
	goto T69;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function YES-OR-NO-P	*/

static object LI10(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB10 VMS10 VMV10
	{register object V70;
	register object V71;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T94;
	else {
	V70= first;}
	--narg; goto T95;
	goto T94;
T94:;
	V70= Cnil;
	goto T95;
T95:;
	V72 = list_vector_new(narg,first,ap);
	V71= V72;
	{register object V73;
	V73= Cnil;
	goto T98;
T98:;
	if(((V70))==Cnil){
	goto T101;}
	base[0]= symbol_value(VV[13]);
	base[1]= VV[17];
	base[2]= (V70);
	base[3]= (V71);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	goto T101;
T101:;
	base[0]= symbol_value(VV[13]);
	vs_top=(vs_base=base+0)+1;
	Lread();
	vs_top=sup;
	V73= vs_base[0];
	base[0]= symbol_name((V73));
	base[1]= VV[18];
	vs_top=(vs_base=base+0)+2;
	Lstring_equal();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T113;}
	{object V74 = Ct;
	VMR10(V74)}
	goto T113;
T113:;
	base[0]= symbol_name((V73));
	base[1]= VV[19];
	vs_top=(vs_base=base+0)+2;
	Lstring_equal();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T111;}
	{object V75 = Cnil;
	VMR10(V75)}
	goto T111;
T111:;
	goto T98;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function SHARP-A-READER	*/

static object LI11(V79,V80,V81)

object V79;object V80;register object V81;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{register object V82;
	base[0]= (V79);
	base[1]= Cnil;
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+0)+4;
	Lread();
	vs_top=sup;
	V82= vs_base[0];
	if((symbol_value(VV[20]))==Cnil){
	goto T129;}
	{object V83 = Cnil;
	VMR11(V83)}
	goto T129;
T129:;
	{register object V84;
	register object V85;
	register object V86;
	V84= small_fixnum(0);
	V85= Cnil;
	V86= (V82);
	goto T132;
T132:;
	if(!(number_compare((V84),(V81))>=0)){
	goto T133;}
	V87= nreverse((V85));
	{object V88 = (VFUN_NARGS=3,(*(LnkLI56))(/* INLINE-ARGS */V87,VV[21],(V82)));
	VMR11(V88)}
	goto T133;
T133:;
	V84= one_plus((V84));
	V89 = make_fixnum((long)length((V86)));
	V85= make_cons(V89,(V85));
	if(!(((long)length((V86)))==0)){
	goto T142;}
	goto T140;
	goto T142;
T142:;
	V86= elt((V86),0);
	goto T140;
T140:;
	goto T132;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function DRIBBLE	*/

static object LI12(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	{object V90;
	object V91;
	object V92;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T145;
	else {
	V90= first;}
	V91= Ct;
	if (--narg <= 0) goto T146;
	else {
	V92= va_arg(ap,object);}
	--narg; goto T147;
	goto T145;
T145:;
	V90= VV[22];
	V91= Cnil;
	goto T146;
T146:;
	V92= VV[23];
	goto T147;
T147:;
	if(((V91))!=Cnil){
	goto T151;}
	if((symbol_value(VV[24]))!=Cnil){
	goto T153;}
	base[0]= VV[25];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	goto T153;
T153:;
	if(!((symbol_value(VV[26]))==(symbol_value(VV[27])))){
	goto T159;}
	setq(VV[27],symbol_value(VV[28]));
	goto T157;
	goto T159;
T159:;
	(void)((VFUN_NARGS=1,(*(LnkLI57))(VV[29])));
	goto T157;
T157:;
	base[0]= symbol_value(VV[24]);
	vs_top=(vs_base=base+0)+1;
	Lclose();
	vs_top=sup;
	setq(VV[24],Cnil);
	base[0]= Ct;
	base[1]= VV[30];
	base[2]= symbol_value(VV[31]);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V93 = vs_base[0];
	VMR12(V93)}
	goto T151;
T151:;
	if((symbol_value(VV[24]))==Cnil){
	goto T170;}
	base[0]= VV[32];
	base[1]= symbol_value(VV[31]);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V94 = vs_base[0];
	VMR12(V94)}
	goto T170;
T170:;
	{object V95;
	object V96;
	base[2]= (V90);
	vs_top=(vs_base=base+2)+1;
	Lnamestring();
	vs_top=sup;
	V95= vs_base[0];
	base[2]= (V90);
	base[3]= VV[33];
	base[4]= VV[34];
	base[5]= VV[35];
	base[6]= (V92);
	base[7]= VV[36];
	base[8]= VV[37];
	vs_top=(vs_base=base+2)+7;
	(void) (*Lnk11)();
	vs_top=sup;
	V96= vs_base[0];
	setq(VV[31],(V95));
	setq(VV[24],(V96));
	setq(VV[28],symbol_value(VV[27]));
	base[3]= symbol_value(VV[27]);
	base[4]= (V96);
	vs_top=(vs_base=base+3)+2;
	Lmake_echo_stream();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= symbol_value(VV[27]);
	base[5]= (V96);
	vs_top=(vs_base=base+4)+2;
	Lmake_broadcast_stream();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lmake_two_way_stream();
	vs_top=sup;
	setq(VV[26],vs_base[0]);
	setq(VV[27],symbol_value(VV[26]));
	{object V97;
	object V98;
	object V99;
	object V100;
	object V101;
	object V102;
	vs_base=vs_top;
	(void) (*Lnk58)();
	if(vs_base>=vs_top){vs_top=sup;goto T201;}
	V97= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T202;}
	V98= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T203;}
	V99= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T204;}
	V100= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T205;}
	V101= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T206;}
	V102= vs_base[0];
	vs_top=sup;
	goto T207;
	goto T201;
T201:;
	V97= Cnil;
	goto T202;
T202:;
	V98= Cnil;
	goto T203;
T203:;
	V99= Cnil;
	goto T204;
T204:;
	V100= Cnil;
	goto T205;
T205:;
	V101= Cnil;
	goto T206;
T206:;
	V102= Cnil;
	goto T207;
T207:;
	base[2]= Ct;
	base[3]= VV[38];
	base[4]= (V95);
	base[5]= (V102);
	base[6]= (V101);
	base[7]= (V100);
	base[8]= (V99);
	base[9]= (V98);
	base[10]= (V97);
	vs_top=(vs_base=base+2)+9;
	Lformat();
	vs_top=sup;
	{object V103 = vs_base[0];
	VMR12(V103)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
static void LnkT58(){ call_or_link(VV[58],(void **)(void *)&Lnk58);} /* GET-DECODED-TIME */
static void LnkT11(){ call_or_link(VV[11],(void **)(void *)&Lnk11);} /* OPEN */
static object  LnkTLI57(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[57],(void **)(void *)&LnkLI57,first,ap);va_end(ap);return V1;} /* WARN */
static object  LnkTLI56(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[56],(void **)(void *)&LnkLI56,first,ap);va_end(ap);return V1;} /* MAKE-ARRAY */
static void LnkT9(){ call_or_link(VV[9],(void **)(void *)&Lnk9);} /* GET-OUTPUT-STREAM-STRING */
static void LnkT55(){ call_or_link(VV[55],(void **)(void *)&Lnk55);} /* MAKE-STRING-OUTPUT-STREAM */
static void LnkT6(){ call_or_link(VV[6],(void **)(void *)&Lnk6);} /* GET-STRING-INPUT-STREAM-INDEX */
static void LnkT44(){ call_or_link(VV[44],(void **)(void *)&Lnk44);} /* READ-PRESERVING-WHITESPACE */
static void LnkT4(){ call_or_link(VV[4],(void **)(void *)&Lnk4);} /* MAKE-STRING-INPUT-STREAM */
static void LnkT39(){ call_or_link(VV[39],(void **)(void *)&Lnk39);} /* FIND-DECLARATIONS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

