
#include "cmpinclude.h"
#include "gcl_packlib.h"
void init_gcl_packlib(){do_init(VV);}
/*	macro definition for COERCE-TO-PACKAGE	*/

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
	if(!endp(V1))invalid_macro_call();}
	if(!((base[2])==(VV[0]))){
	goto T2;}
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2;
T2:;
	{register object V2;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V2= vs_base[0];
	V3= list(2,(V2),base[2]);
	V4= make_cons(/* INLINE-ARGS */V3,Cnil);
	V5= list(2,VV[4],(V2));
	V6= list(3,VV[3],/* INLINE-ARGS */V5,list(3,VV[5],(V2),list(2,VV[6],list(2,VV[7],(V2)))));
	base[3]= list(4,VV[1],/* INLINE-ARGS */V4,list(3,VV[2],/* INLINE-ARGS */V6,list(4,VV[8],VV[9],VV[10],base[2])),(V2));
	vs_top=(vs_base=base+3)+1;
	return;}
}
/*	function definition for FIND-ALL-SYMBOLS	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	{register object V7;
	check_arg(1);
	V7=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V7))==t_symbol)){
	goto T5;}
	V7= symbol_name((V7));
	goto T5;
T5:;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V10= vs_base[0];
	{object V8;
	object V9= V10;
	if(endp(V9)){
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	base[1]=V8=MMcons(Cnil,Cnil);
	goto T9;
T9:;
	{object V12;
	object V13;
	base[2]= (V7);
	base[3]= (V9->c.c_car);
	vs_top=(vs_base=base+2)+2;
	Lfind_symbol();
	if(vs_base>=vs_top){vs_top=sup;goto T15;}
	V12= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T16;}
	V13= vs_base[0];
	vs_top=sup;
	goto T17;
	goto T15;
T15:;
	V12= Cnil;
	goto T16;
T16:;
	V13= Cnil;
	goto T17;
T17:;
	if(((V13))==(VV[11])){
	goto T18;}
	if(!(((V13))==(VV[12]))){
	goto T19;}
	goto T18;
T18:;
	(V8->c.c_cdr)= make_cons((V12),Cnil);
	goto T11;
	goto T19;
T19:;
	(V8->c.c_cdr)= Cnil;}
	goto T11;
T11:;
	{object cdr_V8=MMcdr(V8);while(!endp(cdr_V8)) {cdr_V8=MMcdr(cdr_V8);V8=MMcdr(V8);}}
	V9=MMcdr(V9);
	if(endp(V9)){
	base[1]=base[1]->c.c_cdr;
	vs_top=(vs_base=base+1)+1;
	return;}
	goto T9;}
	}
}
/*	macro definition for DO-SYMBOLS	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(2);
	vs_top=sup;
	{object V14=base[0]->c.c_cdr;
	if(endp(V14))invalid_macro_call();
	{object V15= (V14->c.c_car);
	if(endp(V15))invalid_macro_call();
	base[2]= (V15->c.c_car);
	V15=V15->c.c_cdr;
	if(endp(V15)){
	base[3]= VV[0];
	} else {
	base[3]= (V15->c.c_car);
	V15=V15->c.c_cdr;}
	if(endp(V15)){
	base[4]= Cnil;
	} else {
	base[4]= (V15->c.c_car);
	V15=V15->c.c_cdr;}
	if(!endp(V15))invalid_macro_call();}
	V14=V14->c.c_cdr;
	base[5]= V14;}
	{register object V16;
	register object V17;
	register object V18;
	register object V19;
	object V20;
	register object V21;
	object V22;
	object V23;
	object V24;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V16= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V17= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V18= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V19= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V20= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V21= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V22= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V23= vs_base[0];
	V24= Cnil;
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk65)();
	if(vs_base<vs_top){
	V24= vs_base[0];
	vs_base++;
	}else{
	V24= Cnil;}
	if(vs_base<vs_top){
	base[5]= vs_base[0];
	}else{
	base[5]= Cnil;}
	vs_top=sup;
	V25= list(3,list(2,(V16),list(2,VV[13],base[3])),base[2],(V18));
	V26= list(3,VV[15],(V16),list(2,VV[16],(V16)));
	V27= list(3,(V19),/* INLINE-ARGS */V26,list(3,VV[17],list(3,VV[5],base[2],Cnil),base[4]));
	V28= list(2,(V22),(V21));
	V29= list(2,VV[19],(V19));
	V30= list(2,VV[20],list(3,VV[21],(V21),(V22)));
	V31= list(2,VV[23],list(3,VV[24],(V16),(V19)));
	V32= list(3,VV[22],/* INLINE-ARGS */V31,list(3,VV[5],(V21),small_fixnum(0)));
	V33= list(2,(V17),list(3,VV[26],(V21),(V22)));
	V34= list(3,VV[27],(V17),(V21));
	V35= list(3,VV[28],(V19),(V17));
	V36= list(3,VV[5],(V18),list(4,VV[22],/* INLINE-ARGS */V34,/* INLINE-ARGS */V35,list(3,VV[29],(V19),list(3,VV[30],(V17),(V21)))));
	V37= list(2,VV[32],(V18));
	V38= list(3,VV[31],/* INLINE-ARGS */V37,list(2,VV[33],(V23)));
	V39= list(3,VV[5],base[2],list(2,VV[34],(V18)));
	V40= list(3,VV[24],(V19),(V16));
	V41= list(3,VV[3],/* INLINE-ARGS */V40,list(3,VV[24],VV[35],list(2,VV[34],list(2,VV[36],list(2,VV[37],list(3,VV[38],list(2,VV[39],base[2]),(V16)))))));
	V42= list(3,VV[22],/* INLINE-ARGS */V41,make_cons(VV[40],base[5]));
	V43= list(3,VV[5],(V18),list(2,VV[41],(V18)));
	V44= list(3,VV[14],/* INLINE-ARGS */V27,list(6,VV[18],/* INLINE-ARGS */V28,/* INLINE-ARGS */V29,/* INLINE-ARGS */V30,/* INLINE-ARGS */V32,list(10,VV[25],/* INLINE-ARGS */V33,/* INLINE-ARGS */V36,(V20),/* INLINE-ARGS */V38,/* INLINE-ARGS */V39,/* INLINE-ARGS */V42,/* INLINE-ARGS */V43,list(2,VV[33],(V20)),(V23))));
	V45= make_cons(/* INLINE-ARGS */V44,Cnil);
	base[6]= listA(3,VV[1],/* INLINE-ARGS */V25,append((V24),/* INLINE-ARGS */V45));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	macro definition for DO-EXTERNAL-SYMBOLS	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	check_arg(2);
	vs_top=sup;
	{object V46=base[0]->c.c_cdr;
	if(endp(V46))invalid_macro_call();
	{object V47= (V46->c.c_car);
	if(endp(V47))invalid_macro_call();
	base[2]= (V47->c.c_car);
	V47=V47->c.c_cdr;
	if(endp(V47)){
	base[3]= VV[0];
	} else {
	base[3]= (V47->c.c_car);
	V47=V47->c.c_cdr;}
	if(endp(V47)){
	base[4]= Cnil;
	} else {
	base[4]= (V47->c.c_car);
	V47=V47->c.c_cdr;}
	if(!endp(V47))invalid_macro_call();}
	V46=V46->c.c_cdr;
	base[5]= V46;}
	{object V48;
	object V49;
	register object V50;
	object V51;
	object V52;
	object V53;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V48= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V49= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V50= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V51= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V52= vs_base[0];
	V53= Cnil;
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk65)();
	if(vs_base<vs_top){
	V53= vs_base[0];
	vs_base++;
	}else{
	V53= Cnil;}
	if(vs_base<vs_top){
	base[5]= vs_base[0];
	}else{
	base[5]= Cnil;}
	vs_top=sup;
	V54= list(3,list(2,(V48),list(2,VV[13],base[3])),base[2],(V50));
	V55= list(2,VV[19],(V48));
	V56= list(3,(V49),/* INLINE-ARGS */V55,list(3,VV[17],list(3,VV[5],base[2],Cnil),base[4]));
	V57= list(3,VV[5],(V50),list(3,VV[29],(V48),(V49)));
	V58= list(2,VV[32],(V50));
	V59= list(3,VV[31],/* INLINE-ARGS */V58,list(2,VV[33],(V52)));
	V60= list(3,VV[5],base[2],list(2,VV[34],(V50)));
	V61= list(3,VV[5],(V50),list(2,VV[41],(V50)));
	V62= list(3,/* INLINE-ARGS */V61,list(2,VV[33],(V51)),(V52));
	V63= listA(7,VV[25],/* INLINE-ARGS */V56,/* INLINE-ARGS */V57,(V51),/* INLINE-ARGS */V59,/* INLINE-ARGS */V60,append(base[5],/* INLINE-ARGS */V62));
	V64= make_cons(/* INLINE-ARGS */V63,Cnil);
	base[6]= listA(3,VV[1],/* INLINE-ARGS */V54,append((V53),/* INLINE-ARGS */V64));
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	macro definition for DO-ALL-SYMBOLS	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	check_arg(2);
	vs_top=sup;
	{object V65=base[0]->c.c_cdr;
	if(endp(V65))invalid_macro_call();
	{object V66= (V65->c.c_car);
	if(endp(V66))invalid_macro_call();
	base[2]= (V66->c.c_car);
	V66=V66->c.c_cdr;
	if(endp(V66)){
	base[3]= Cnil;
	} else {
	base[3]= (V66->c.c_car);
	V66=V66->c.c_cdr;}
	if(!endp(V66))invalid_macro_call();}
	V65=V65->c.c_cdr;
	base[4]= V65;}
	V67= list(3,VV[42],VV[43],base[3]);
	V68= list(2,base[2],VV[42]);
	base[5]= list(3,VV[14],/* INLINE-ARGS */V67,list(3,VV[44],/* INLINE-ARGS */V68,make_cons(VV[40],base[4])));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	function definition for SUBSTRINGP	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	{register object V69;
	register object V70;
	check_arg(2);
	V69=(base[0]);
	V70=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V71;
	register object V72;
	register object V73;
	V74 = make_fixnum((long)length((V70)));
	V75 = make_fixnum((long)length((V69)));
	V71= number_minus(V74,V75);
	V72= make_fixnum((long)length((V69)));
	V73= small_fixnum(0);
	goto T50;
T50:;
	if(!(number_compare((V73),(V71))>0)){
	goto T51;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T51;
T51:;
	base[2]= (V69);
	base[3]= (V70);
	base[4]= VV[45];
	base[5]= (V73);
	base[6]= VV[46];
	base[7]= number_plus((V73),(V72));
	vs_top=(vs_base=base+2)+6;
	Lstring_equal();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T55;}
	base[2]= Ct;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T55;
T55:;
	V73= one_plus((V73));
	goto T50;}
	}
}
/*	function definition for PRINT-SYMBOL-APROPOS	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	{register object V76;
	check_arg(1);
	V76=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	(void)(prin1((V76),Cnil));
	base[1]= (V76);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T68;}
	base[1]= (V76);
	vs_top=(vs_base=base+1)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T73;}
	princ_str("  Special form",Cnil);
	goto T68;
	goto T73;
T73:;
	base[1]= (V76);
	vs_top=(vs_base=base+1)+1;
	Lmacro_function();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T77;}
	princ_str("  Macro",Cnil);
	goto T68;
	goto T77;
T77:;
	princ_str("  Function",Cnil);
	goto T68;
T68:;
	base[1]= (V76);
	vs_top=(vs_base=base+1)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T80;}
	base[1]= (V76);
	vs_top=(vs_base=base+1)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T86;}
	princ_str("  Constant: ",Cnil);
	goto T84;
	goto T86;
T86:;
	princ_str("  has value: ",Cnil);
	goto T84;
T84:;
	base[1]= (V76);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_value();
	vs_top=sup;
	V77= vs_base[0];
	(void)(prin1(V77,Cnil));
	goto T80;
T80:;
	base[1]= terpri(Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for APROPOS-LIST	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{object V78;
	object V79;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V78=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T91;}
	V79=(base[1]);
	vs_top=sup;
	goto T92;
	goto T91;
T91:;
	V79= Cnil;
	goto T92;
T92:;
	{register object V80;
	V80= Cnil;
	V80= Cnil;
	V78= coerce_to_string((V78));
	if(((V79))==Cnil){
	goto T101;}
	{object V81;
	object V82;
	object V83;
	{object V84;
	V84= (V79);
	base[2]= (V84);
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T105;}
	base[2]= coerce_to_string((V84));
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V84= vs_base[0];
	if(((V84))!=Cnil){
	goto T105;}
	base[2]= VV[9];
	base[3]= VV[10];
	base[4]= (V79);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk8)();
	vs_top=sup;
	goto T105;
T105:;
	V81= (V84);}
	V82= Cnil;
	V83= Cnil;
	{object V85;
	object V86;
	base[4]= (V81);
	vs_top=(vs_base=base+4)+1;
	Lpackage_use_list();
	vs_top=sup;
	V87= vs_base[0];
	V85= make_cons((V81),V87);
	V86= car((V85));
	goto T121;
T121:;
	if(!(endp_prop((V85)))){
	goto T122;}
	V82= Cnil;
	goto T103;
	goto T122;
T122:;
	{long V88;
	long V89;
	base[4]= (V86);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk19)();
	if(vs_base>=vs_top){vs_top=sup;goto T131;}
	V88= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T132;}
	V89= fix(vs_base[0]);
	vs_top=sup;
	goto T133;
	goto T131;
T131:;
	V88= fix(Cnil);
	goto T132;
T132:;
	V89= fix(Cnil);
	goto T133;
T133:;
	if(((V81))==((V86))){
	goto T134;}
	V89= 0;
	goto T134;
T134:;
	{object V90;
	object V91;
	V92 = make_fixnum(V89);
	V93 = make_fixnum(V88);
	V90= number_plus(V92,V93);
	V91= small_fixnum(0);
	goto T141;
T141:;
	if(!(number_compare((V91),(V90))>=0)){
	goto T142;}
	goto T128;
	goto T142;
T142:;
	V94 = make_fixnum(V89);
	if(!(number_compare((V91),V94)<0)){
	goto T151;}
	base[5]= (V86);
	base[6]= (V91);
	vs_top=(vs_base=base+5)+2;
	siLpackage_internal();
	vs_top=sup;
	V83= vs_base[0];
	goto T149;
	goto T151;
T151:;
	base[5]= (V86);
	V95 = make_fixnum(V89);
	base[6]= number_minus((V91),V95);
	vs_top=(vs_base=base+5)+2;
	siLpackage_external();
	vs_top=sup;
	V83= vs_base[0];
	goto T149;
T149:;
	goto T147;
T147:;
	if(((V83))!=Cnil){
	goto T157;}
	goto T148;
	goto T157;
T157:;
	V82= car((V83));
	if(((V86))==((V81))){
	goto T163;}
	base[6]= symbol_name((V82));
	base[7]= (V81);
	vs_top=(vs_base=base+6)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Llast();
	vs_top=sup;
	V96= vs_base[0];
	if(!((VV[35])==(car(V96)))){
	goto T162;}
	goto T163;
T163:;
	base[5]= (V78);
	base[6]= coerce_to_string((V82));
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk66)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T172;}
	V80= make_cons((V82),(V80));
	goto T172;
T172:;
	goto T162;
T162:;
	V83= cdr((V83));
	goto T147;
	goto T148;
T148:;
	goto T145;
	goto T145;
T145:;
	V91= one_plus((V91));
	goto T141;}}
	goto T128;
T128:;
	V85= cdr((V85));
	V86= car((V85));
	goto T121;}}
	goto T103;
T103:;
	{object V97;
	base[2]= (V79);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V97= vs_base[0];
	goto T191;
T191:;
	if(((V97))!=Cnil){
	goto T192;}
	goto T99;
	goto T192;
T192:;
	{object V98;
	object V99;
	register object V100;
	{object V101;
	V101= car((V97));
	base[2]= (V101);
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T199;}
	base[2]= coerce_to_string((V101));
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V101= vs_base[0];
	if(((V101))!=Cnil){
	goto T199;}
	base[2]= VV[9];
	base[3]= VV[10];
	base[4]= car((V97));
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk8)();
	vs_top=sup;
	goto T199;
T199:;
	V98= (V101);}
	V99= Cnil;
	V100= Cnil;
	{object V102;
	object V103;
	base[3]= (V98);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk19)();
	vs_top=sup;
	V102= vs_base[0];
	V103= small_fixnum(0);
	goto T214;
T214:;
	if(!(number_compare((V103),(V102))>=0)){
	goto T215;}
	V99= Cnil;
	goto T196;
	goto T215;
T215:;
	base[3]= (V98);
	base[4]= (V103);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V100= vs_base[0];
	goto T222;
T222:;
	if(((V100))!=Cnil){
	goto T227;}
	goto T223;
	goto T227;
T227:;
	V99= car((V100));
	base[3]= (V78);
	base[4]= coerce_to_string((V99));
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk66)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T232;}
	V80= make_cons((V99),(V80));
	goto T232;
T232:;
	V100= cdr((V100));
	goto T222;
	goto T223;
T223:;
	goto T220;
	goto T220;
T220:;
	V103= one_plus((V103));
	goto T214;}}
	goto T196;
T196:;
	V97= cdr((V97));
	goto T191;}
	goto T101;
T101:;
	{object V104;
	object V105;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V104= vs_base[0];
	V105= car((V104));
	goto T249;
T249:;
	if(!(endp_prop((V104)))){
	goto T250;}
	goto T99;
	goto T250;
T250:;
	{object V106;
	register object V107;
	register object V108;
	{object V109;
	V109= (V105);
	base[4]= (V109);
	vs_top=(vs_base=base+4)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T256;}
	base[4]= coerce_to_string((V109));
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V109= vs_base[0];
	if(((V109))!=Cnil){
	goto T256;}
	base[4]= VV[9];
	base[5]= VV[10];
	base[6]= (V105);
	vs_top=(vs_base=base+4)+3;
	(void) (*Lnk8)();
	vs_top=sup;
	goto T256;
T256:;
	V106= (V109);}
	V107= Cnil;
	V108= Cnil;
	{object V110;
	register object V111;
	base[6]= (V106);
	vs_top=(vs_base=base+6)+1;
	Lpackage_use_list();
	vs_top=sup;
	V112= vs_base[0];
	V110= make_cons((V106),V112);
	V111= car((V110));
	goto T272;
T272:;
	if(!(endp_prop((V110)))){
	goto T273;}
	V107= Cnil;
	goto T254;
	goto T273;
T273:;
	{long V113;
	long V114;
	base[6]= (V111);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk19)();
	if(vs_base>=vs_top){vs_top=sup;goto T282;}
	V113= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T283;}
	V114= fix(vs_base[0]);
	vs_top=sup;
	goto T284;
	goto T282;
T282:;
	V113= fix(Cnil);
	goto T283;
T283:;
	V114= fix(Cnil);
	goto T284;
T284:;
	if(((V106))==((V111))){
	goto T285;}
	V114= 0;
	goto T285;
T285:;
	{object V115;
	register object V116;
	V117 = make_fixnum(V114);
	V118 = make_fixnum(V113);
	V115= number_plus(V117,V118);
	V116= small_fixnum(0);
	goto T292;
T292:;
	if(!(number_compare((V116),(V115))>=0)){
	goto T293;}
	goto T279;
	goto T293;
T293:;
	V119 = make_fixnum(V114);
	if(!(number_compare((V116),V119)<0)){
	goto T302;}
	base[7]= (V111);
	base[8]= (V116);
	vs_top=(vs_base=base+7)+2;
	siLpackage_internal();
	vs_top=sup;
	V108= vs_base[0];
	goto T300;
	goto T302;
T302:;
	base[7]= (V111);
	V120 = make_fixnum(V114);
	base[8]= number_minus((V116),V120);
	vs_top=(vs_base=base+7)+2;
	siLpackage_external();
	vs_top=sup;
	V108= vs_base[0];
	goto T300;
T300:;
	goto T298;
T298:;
	if(((V108))!=Cnil){
	goto T308;}
	goto T299;
	goto T308;
T308:;
	V107= car((V108));
	if(((V111))==((V106))){
	goto T314;}
	base[8]= symbol_name((V107));
	base[9]= (V106);
	vs_top=(vs_base=base+8)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+7)+1;
	Llast();
	vs_top=sup;
	V121= vs_base[0];
	if(!((VV[35])==(car(V121)))){
	goto T313;}
	goto T314;
T314:;
	base[7]= (V78);
	base[8]= coerce_to_string((V107));
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk66)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T324;}
	V80= make_cons((V107),(V80));
	goto T324;
T324:;
	goto T313;
T313:;
	V108= cdr((V108));
	goto T298;
	goto T299;
T299:;
	goto T296;
	goto T296;
T296:;
	V116= one_plus((V116));
	goto T292;}}
	goto T279;
T279:;
	V110= cdr((V110));
	V111= car((V110));
	goto T272;}}
	goto T254;
T254:;
	V104= cdr((V104));
	V105= car((V104));
	goto T249;}
	goto T99;
T99:;
	base[3]= (V80);
	base[4]= VV[47];
	base[5]= symbol_function(VV[24]);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk67)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= symbol_function(VV[68]);
	base[4]= VV[48];
	base[5]= symbol_function(VV[39]);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk69)();
	return;}
	}
}
/*	function definition for APROPOS	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{object V122;
	object V123;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V122=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T352;}
	V123=(base[1]);
	vs_top=sup;
	goto T353;
	goto T352;
T352:;
	V123= Cnil;
	goto T353;
T353:;
	{register object V124;
	register object V125;
	base[4]= (V122);
	base[5]= (V123);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V124= vs_base[0];
	V125= car((V124));
	goto T361;
T361:;
	if(!(endp_prop((V124)))){
	goto T362;}
	goto T355;
	goto T362;
T362:;
	base[4]= (V125);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk71)();
	vs_top=sup;
	V124= cdr((V124));
	V125= car((V124));
	goto T361;}
	goto T355;
T355:;
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;
	}
}
/*	macro definition for WITH-PACKAGE-ITERATOR	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	check_arg(2);
	vs_top=sup;
	{object V126=base[0]->c.c_cdr;
	if(endp(V126))invalid_macro_call();
	{object V127= (V126->c.c_car);
	if(endp(V127))invalid_macro_call();
	base[2]= (V127->c.c_car);
	V127=V127->c.c_cdr;
	if(endp(V127))invalid_macro_call();
	base[3]= (V127->c.c_car);
	V127=V127->c.c_cdr;
	base[4]= V127;}
	V126=V126->c.c_cdr;
	base[5]= V126;}
	{register object V128;
	register object V129;
	register object V130;
	register object V131;
	object V132;
	register object V133;
	register object V134;
	register object V135;
	object V136;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V128= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V129= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V130= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V131= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V132= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V133= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V134= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V135= vs_base[0];
	V136= Cnil;
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk65)();
	if(vs_base<vs_top){
	V136= vs_base[0];
	vs_base++;
	}else{
	V136= Cnil;}
	if(vs_base<vs_top){
	base[5]= vs_base[0];
	}else{
	base[5]= Cnil;}
	vs_top=sup;
	if((base[4])!=Cnil){
	goto T384;}
	base[6]= VV[49];
	base[7]= VV[50];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk8)();
	vs_top=sup;
	goto T384;
T384:;
	V137= list(2,VV[51],base[3]);
	V138= list(2,(V128),list(3,VV[15],Ct,list(4,VV[22],/* INLINE-ARGS */V137,list(2,VV[52],base[3]),base[3])));
	V139= list(2,(V131),Cnil);
	V140= list(2,(V130),Cnil);
	V141= list(2,(V129),small_fixnum(-1));
	V142= list(2,(V133),small_fixnum(0));
	V143= list(2,(V134),small_fixnum(0));
	V144= list(2,(V132),Cnil);
	V145= list(8,/* INLINE-ARGS */V138,/* INLINE-ARGS */V139,/* INLINE-ARGS */V140,/* INLINE-ARGS */V141,/* INLINE-ARGS */V142,/* INLINE-ARGS */V143,/* INLINE-ARGS */V144,list(2,(V135),Cnil));
	V146= list(2,VV[20],list(3,VV[21],(V133),(V134)));
	V147= list(2,VV[32],list(3,VV[5],(V130),list(2,VV[41],(V130))));
	V148= list(2,VV[55],(V129));
	V149= list(3,VV[54],/* INLINE-ARGS */V148,list(3,VV[26],(V133),(V134)));
	V150= list(2,VV[32],list(3,VV[5],(V131),list(2,VV[41],(V131))));
	V151= list(2,VV[32],list(3,VV[5],(V128),list(2,VV[41],(V128))));
	V152= list(3,VV[31],/* INLINE-ARGS */V151,list(3,VV[56],base[2],Cnil));
	V153= list(3,VV[57],(V128),list(2,VV[13],list(2,VV[34],(V128))));
	V154= list(3,VV[5],(V131),list(2,VV[52],list(2,VV[13],list(2,VV[34],(V128)))));
	V155= list(3,VV[58],VV[35],make_cons(VV[52],base[4]));
	V156= list(6,VV[31],/* INLINE-ARGS */V150,/* INLINE-ARGS */V152,/* INLINE-ARGS */V153,/* INLINE-ARGS */V154,list(3,VV[31],/* INLINE-ARGS */V155,list(3,VV[59],(V131),list(2,VV[16],list(2,VV[34],(V131))))));
	V157= list(2,(V134),(V133));
	V158= list(3,VV[60],/* INLINE-ARGS */V157,list(2,VV[19],list(2,VV[34],(V131))));
	V159= list(2,VV[23],list(3,VV[58],VV[11],make_cons(VV[52],base[4])));
	V160= list(2,VV[34],(V128));
	V161= list(3,VV[3],/* INLINE-ARGS */V159,list(2,VV[23],list(3,VV[24],/* INLINE-ARGS */V160,list(2,VV[34],(V131)))));
	V162= list(3,VV[31],/* INLINE-ARGS */V161,list(3,VV[5],(V133),small_fixnum(0)));
	V163= list(2,VV[23],list(3,VV[58],VV[12],make_cons(VV[52],base[4])));
	V164= list(2,VV[34],(V128));
	V165= list(3,VV[61],/* INLINE-ARGS */V163,list(3,VV[24],/* INLINE-ARGS */V164,list(2,VV[34],(V131))));
	V166= list(3,VV[31],/* INLINE-ARGS */V165,list(3,VV[5],(V134),small_fixnum(0)));
	V167= list(2,VV[62],list(3,VV[26],(V133),(V134)));
	V168= list(3,VV[5],(V129),small_fixnum(-1));
	V169= list(4,VV[31],/* INLINE-ARGS */V167,/* INLINE-ARGS */V168,list(2,VV[33],base[2]));
	V170= list(8,VV[31],/* INLINE-ARGS */V149,/* INLINE-ARGS */V156,/* INLINE-ARGS */V158,/* INLINE-ARGS */V162,/* INLINE-ARGS */V166,/* INLINE-ARGS */V169,list(3,VV[5],(V129),small_fixnum(0)));
	V171= list(3,VV[27],(V129),(V133));
	V172= list(3,VV[28],list(2,VV[34],(V131)),(V129));
	V173= list(2,VV[34],(V131));
	V174= list(4,VV[31],/* INLINE-ARGS */V147,/* INLINE-ARGS */V170,list(3,VV[5],(V130),list(4,VV[22],/* INLINE-ARGS */V171,/* INLINE-ARGS */V172,list(3,VV[29],/* INLINE-ARGS */V173,list(3,VV[30],(V129),(V133))))));
	V175= list(2,VV[32],(V130));
	V176= list(3,VV[31],/* INLINE-ARGS */V175,list(2,VV[33],base[2]));
	V177= list(2,(V132),(V135));
	V178= list(2,VV[39],list(2,VV[34],(V130)));
	V179= list(3,VV[60],/* INLINE-ARGS */V177,list(3,VV[38],/* INLINE-ARGS */V178,list(2,VV[34],(V128))));
	V180= list(2,VV[23],list(3,VV[24],(V135),VV[35]));
	V181= list(2,VV[34],(V128));
	V182= list(3,VV[61],/* INLINE-ARGS */V180,list(2,VV[23],list(3,VV[24],/* INLINE-ARGS */V181,list(2,VV[34],(V131)))));
	V183= list(6,VV[40],base[2],/* INLINE-ARGS */V174,/* INLINE-ARGS */V176,/* INLINE-ARGS */V179,list(3,VV[31],/* INLINE-ARGS */V182,list(2,VV[33],base[2])));
	V184= list(2,VV[34],(V130));
	V185= list(4,base[2],Cnil,/* INLINE-ARGS */V183,list(5,VV[63],VV[64],/* INLINE-ARGS */V184,(V135),list(2,VV[34],(V128))));
	V186= make_cons(/* INLINE-ARGS */V185,Cnil);
	base[6]= list(4,VV[1],/* INLINE-ARGS */V145,/* INLINE-ARGS */V146,listA(3,VV[53],/* INLINE-ARGS */V186,append((V136),base[5])));
	vs_top=(vs_base=base+6)+1;
	return;}
}
static void LnkT71(){ call_or_link(VV[71],(void **)(void *)&Lnk71);} /* PRINT-SYMBOL-APROPOS */
static void LnkT70(){ call_or_link(VV[70],(void **)(void *)&Lnk70);} /* APROPOS-LIST */
static void LnkT69(){ call_or_link(VV[69],(void **)(void *)&Lnk69);} /* STABLE-SORT */
static void LnkT67(){ call_or_link(VV[67],(void **)(void *)&Lnk67);} /* DELETE-DUPLICATES */
static void LnkT66(){ call_or_link(VV[66],(void **)(void *)&Lnk66);} /* SUBSTRINGP */
static void LnkT19(){ call_or_link(VV[19],(void **)(void *)&Lnk19);} /* PACKAGE-SIZE */
static void LnkT8(){ call_or_link(VV[8],(void **)(void *)&Lnk8);} /* SPECIFIC-ERROR */
static void LnkT65(){ call_or_link(VV[65],(void **)(void *)&Lnk65);} /* FIND-DECLARATIONS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

