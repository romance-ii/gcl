
#include "cmpinclude.h"
#include "packlib.h"
void init_packlib(){do_init(VV);}
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
	V5= list(2,VV[3],(V2));
	base[3]= list(3,VV[1],/* INLINE-ARGS */V4,list(4,VV[2],/* INLINE-ARGS */V5,(V2),list(2,VV[4],list(2,VV[5],(V2)))));
	vs_top=(vs_base=base+3)+1;
	return;}
}
/*	local entry for function FIND-ALL-SYMBOLS	*/

static object LI2(V7)

register object V7;
{	 VMB2 VMS2 VMV2
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
	{object V11 = Cnil;
	VMR2(V11)}}
	base[0]=V8=MMcons(Cnil,Cnil);
goto T9;
T9:;
	{object V13;
	object V14;
	base[1]= (V7);
	base[2]= (V9->c.c_car);
	vs_top=(vs_base=base+1)+2;
	Lfind_symbol();
	if(vs_base>=vs_top){vs_top=sup;goto T15;}
	V13= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T16;}
	V14= vs_base[0];
	vs_top=sup;
	goto T17;
goto T15;
T15:;
	V13= Cnil;
goto T16;
T16:;
	V14= Cnil;
goto T17;
T17:;
	if(((V14))==(VV[6])){
	goto T18;}
	if(!(((V14))==(VV[7]))){
	goto T19;}
goto T18;
T18:;
	(V8->c.c_cdr)= make_cons((V13),Cnil);
	goto T11;
goto T19;
T19:;
	(V8->c.c_cdr)= Cnil;}
goto T11;
T11:;
	{object cdr_V8=MMcdr(V8);while(!endp(cdr_V8)) {cdr_V8=MMcdr(cdr_V8);V8=MMcdr(V8);}}
	V9=MMcdr(V9);
	if(endp(V9)){
	base[0]=base[0]->c.c_cdr;
	{object V15 = base[0];
	VMR2(V15)}}
	goto T9;}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for DO-SYMBOLS	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	check_arg(2);
	vs_top=sup;
	{object V16=base[0]->c.c_cdr;
	if(endp(V16))invalid_macro_call();
	{object V17= (V16->c.c_car);
	if(endp(V17))invalid_macro_call();
	base[2]= (V17->c.c_car);
	V17=V17->c.c_cdr;
	if(endp(V17)){
	base[3]= VV[0];
	} else {
	base[3]= (V17->c.c_car);
	V17=V17->c.c_cdr;}
	if(endp(V17)){
	base[4]= Cnil;
	} else {
	base[4]= (V17->c.c_car);
	V17=V17->c.c_cdr;}
	if(!endp(V17))invalid_macro_call();}
	V16=V16->c.c_cdr;
	base[5]= V16;}
	{register object V18;
	register object V19;
	register object V20;
	register object V21;
	object V22;
	register object V23;
	object V24;
	object V25;
	object V26;
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
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V24= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V25= vs_base[0];
	V26= Cnil;
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk42)();
	if(vs_base<vs_top){
	V26= vs_base[0];
	vs_base++;
	}else{
	V26= Cnil;}
	if(vs_base<vs_top){
	base[5]= vs_base[0];
	}else{
	base[5]= Cnil;}
	vs_top=sup;
	V27= list(3,list(2,(V18),list(2,VV[8],base[3])),base[2],(V20));
	V28= list(3,VV[10],(V18),list(2,VV[11],(V18)));
	V29= list(3,(V21),/* INLINE-ARGS */V28,list(3,VV[12],list(3,VV[13],base[2],Cnil),base[4]));
	V30= list(2,(V24),(V23));
	V31= list(2,VV[15],(V21));
	V32= list(2,VV[16],list(3,VV[17],(V23),(V24)));
	V33= list(2,VV[18],list(3,VV[19],(V18),(V21)));
	V34= list(3,VV[2],/* INLINE-ARGS */V33,list(3,VV[13],(V23),small_fixnum(0)));
	V35= list(2,(V19),list(3,VV[21],(V23),(V24)));
	V36= list(3,VV[22],(V19),(V23));
	V37= list(3,VV[23],(V21),(V19));
	V38= list(3,VV[13],(V20),list(4,VV[2],/* INLINE-ARGS */V36,/* INLINE-ARGS */V37,list(3,VV[24],(V21),list(3,VV[25],(V19),(V23)))));
	V39= list(2,VV[27],(V20));
	V40= list(3,VV[26],/* INLINE-ARGS */V39,list(2,VV[28],(V25)));
	V41= list(3,VV[13],base[2],list(2,VV[29],(V20)));
	V42= list(3,VV[19],(V21),(V18));
	V43= list(3,VV[30],/* INLINE-ARGS */V42,list(3,VV[19],VV[31],list(2,VV[29],list(2,VV[32],list(2,VV[33],list(3,VV[34],list(2,VV[35],base[2]),(V18)))))));
	V44= list(3,VV[2],/* INLINE-ARGS */V43,make_cons(VV[12],base[5]));
	V45= list(3,VV[13],(V20),list(2,VV[36],(V20)));
	V46= list(3,VV[9],/* INLINE-ARGS */V29,list(6,VV[14],/* INLINE-ARGS */V30,/* INLINE-ARGS */V31,/* INLINE-ARGS */V32,/* INLINE-ARGS */V34,list(10,VV[20],/* INLINE-ARGS */V35,/* INLINE-ARGS */V38,(V22),/* INLINE-ARGS */V40,/* INLINE-ARGS */V41,/* INLINE-ARGS */V44,/* INLINE-ARGS */V45,list(2,VV[28],(V22)),(V25))));
	V47= make_cons(/* INLINE-ARGS */V46,Cnil);
	base[6]= listA(3,VV[1],/* INLINE-ARGS */V27,append((V26),/* INLINE-ARGS */V47));
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
	{object V48=base[0]->c.c_cdr;
	if(endp(V48))invalid_macro_call();
	{object V49= (V48->c.c_car);
	if(endp(V49))invalid_macro_call();
	base[2]= (V49->c.c_car);
	V49=V49->c.c_cdr;
	if(endp(V49)){
	base[3]= VV[0];
	} else {
	base[3]= (V49->c.c_car);
	V49=V49->c.c_cdr;}
	if(endp(V49)){
	base[4]= Cnil;
	} else {
	base[4]= (V49->c.c_car);
	V49=V49->c.c_cdr;}
	if(!endp(V49))invalid_macro_call();}
	V48=V48->c.c_cdr;
	base[5]= V48;}
	{object V50;
	object V51;
	register object V52;
	object V53;
	object V54;
	object V55;
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
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V53= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V54= vs_base[0];
	V55= Cnil;
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk42)();
	if(vs_base<vs_top){
	V55= vs_base[0];
	vs_base++;
	}else{
	V55= Cnil;}
	if(vs_base<vs_top){
	base[5]= vs_base[0];
	}else{
	base[5]= Cnil;}
	vs_top=sup;
	V56= list(3,list(2,(V50),list(2,VV[8],base[3])),base[2],(V52));
	V57= list(2,VV[15],(V50));
	V58= list(3,(V51),/* INLINE-ARGS */V57,list(3,VV[12],list(3,VV[13],base[2],Cnil),base[4]));
	V59= list(3,VV[13],(V52),list(3,VV[24],(V50),(V51)));
	V60= list(2,VV[27],(V52));
	V61= list(3,VV[26],/* INLINE-ARGS */V60,list(2,VV[28],(V54)));
	V62= list(3,VV[13],base[2],list(2,VV[29],(V52)));
	V63= list(3,VV[13],(V52),list(2,VV[36],(V52)));
	V64= list(3,/* INLINE-ARGS */V63,list(2,VV[28],(V53)),(V54));
	V65= listA(7,VV[20],/* INLINE-ARGS */V58,/* INLINE-ARGS */V59,(V53),/* INLINE-ARGS */V61,/* INLINE-ARGS */V62,append(base[5],/* INLINE-ARGS */V64));
	V66= make_cons(/* INLINE-ARGS */V65,Cnil);
	base[6]= listA(3,VV[1],/* INLINE-ARGS */V56,append((V55),/* INLINE-ARGS */V66));
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
	{object V67=base[0]->c.c_cdr;
	if(endp(V67))invalid_macro_call();
	{object V68= (V67->c.c_car);
	if(endp(V68))invalid_macro_call();
	base[2]= (V68->c.c_car);
	V68=V68->c.c_cdr;
	if(endp(V68)){
	base[3]= Cnil;
	} else {
	base[3]= (V68->c.c_car);
	V68=V68->c.c_cdr;}
	if(!endp(V68))invalid_macro_call();}
	V67=V67->c.c_cdr;
	base[4]= V67;}
	V69= list(3,VV[37],VV[38],base[3]);
	base[5]= list(3,VV[9],/* INLINE-ARGS */V69,listA(3,VV[39],list(2,base[2],VV[37]),base[4]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function SUBSTRINGP	*/

static object LI6(V72,V73)

register object V72;register object V73;
{	 VMB6 VMS6 VMV6
goto TTL;
TTL:;
	{register object V74;
	register object V75;
	register object V76;
	V77 = make_fixnum((long)length((V73)));
	V78 = make_fixnum((long)length((V72)));
	V74= number_minus(V77,V78);
	V75= make_fixnum((long)length((V72)));
	V76= small_fixnum(0);
goto T50;
T50:;
	if(!(number_compare((V76),(V74))>0)){
	goto T51;}
	{object V79 = Cnil;
	VMR6(V79)}
goto T51;
T51:;
	base[0]= (V72);
	base[1]= (V73);
	base[2]= VV[40];
	base[3]= (V76);
	base[4]= VV[41];
	base[5]= number_plus((V76),(V75));
	vs_top=(vs_base=base+0)+6;
	Lstring_equal();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T55;}
	{object V80 = Ct;
	VMR6(V80)}
goto T55;
T55:;
	V76= one_plus((V76));
	goto T50;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PRINT-SYMBOL-APROPOS	*/

static object LI7(V82)

register object V82;
{	 VMB7 VMS7 VMV7
goto TTL;
TTL:;
	(void)(prin1((V82),Cnil));
	base[0]= (V82);
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T68;}
	base[0]= (V82);
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T73;}
	princ_str("  Special form",Cnil);
	goto T68;
goto T73;
T73:;
	base[0]= (V82);
	vs_top=(vs_base=base+0)+1;
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
	base[0]= (V82);
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T80;}
	base[0]= (V82);
	vs_top=(vs_base=base+0)+1;
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
	base[0]= (V82);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_value();
	vs_top=sup;
	V83= vs_base[0];
	(void)(prin1(V83,Cnil));
goto T80;
T80:;
	{object V84 = terpri(Cnil);
	VMR7(V84)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for APROPOS	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{object V85;
	object V86;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V85=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T91;}
	V86=(base[1]);
	vs_top=sup;
	goto T92;
goto T91;
T91:;
	V86= Cnil;
goto T92;
T92:;
	V85= coerce_to_string((V85));
	if(((V86))==Cnil){
	goto T98;}
	{object V87;
	object V88;
	register object V89;
	base[2]= V86;
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T103;}
	V87= V86;
	goto T101;
goto T103;
T103:;
	base[2]= coerce_to_string(V86);
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V87= vs_base[0];
goto T101;
T101:;
	V88= Cnil;
	V89= Cnil;
	{object V91;
	object V92;
	base[4]= (V87);
	vs_top=(vs_base=base+4)+1;
	Lpackage_use_list();
	vs_top=sup;
	V93= vs_base[0];
	V91= make_cons((V87),V93);
	V92= car((V91));
goto T112;
T112:;
	if(!(endp_prop((V91)))){
	goto T113;}
	V88= Cnil;
	goto T100;
goto T113;
T113:;
	{long V94;
	long V95;
	base[4]= (V92);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk15)();
	if(vs_base>=vs_top){vs_top=sup;goto T122;}
	V94= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T123;}
	V95= fix(vs_base[0]);
	vs_top=sup;
	goto T124;
goto T122;
T122:;
	V94= fix(Cnil);
goto T123;
T123:;
	V95= fix(Cnil);
goto T124;
T124:;
	if(((V87))==((V92))){
	goto T125;}
	V95= 0;
goto T125;
T125:;
	{object V96;
	object V97;
	V98 = make_fixnum(V95);
	V99 = make_fixnum(V94);
	V96= number_plus(V98,V99);
	V97= small_fixnum(0);
goto T132;
T132:;
	if(!(number_compare((V97),(V96))>=0)){
	goto T133;}
	goto T119;
goto T133;
T133:;
	V100 = make_fixnum(V95);
	if(!(number_compare((V97),V100)<0)){
	goto T142;}
	base[5]= (V92);
	base[6]= (V97);
	vs_top=(vs_base=base+5)+2;
	siLpackage_internal();
	vs_top=sup;
	V89= vs_base[0];
	goto T140;
goto T142;
T142:;
	base[5]= (V92);
	V101 = make_fixnum(V95);
	base[6]= number_minus((V97),V101);
	vs_top=(vs_base=base+5)+2;
	siLpackage_external();
	vs_top=sup;
	V89= vs_base[0];
goto T140;
T140:;
goto T138;
T138:;
	if(((V89))!=Cnil){
	goto T148;}
	goto T139;
goto T148;
T148:;
	V88= car((V89));
	if(((V92))==((V87))){
	goto T154;}
	base[6]= symbol_name((V88));
	base[7]= (V87);
	vs_top=(vs_base=base+6)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Llast();
	vs_top=sup;
	V102= vs_base[0];
	if(!((VV[31])==(car(V102)))){
	goto T153;}
goto T154;
T154:;
	V103= coerce_to_string((V88));
	if(((*(LnkLI43))((V85),/* INLINE-ARGS */V103))==Cnil){
	goto T153;}
	(void)((*(LnkLI44))((V88)));
goto T153;
T153:;
	V89= cdr((V89));
	goto T138;
goto T139;
T139:;
	goto T136;
goto T136;
T136:;
	V97= one_plus((V97));
	goto T132;}}
goto T119;
T119:;
	V91= cdr((V91));
	V92= car((V91));
	goto T112;}}
goto T100;
T100:;
	{object V104;
	base[2]= (V86);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V104= vs_base[0];
goto T178;
T178:;
	if(((V104))!=Cnil){
	goto T179;}
	goto T96;
goto T179;
T179:;
	{object V105;
	object V106;
	register object V107;
	{object V108;
	V108= car((V104));
	base[2]= (V108);
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T187;}
	V105= (V108);
	goto T184;
goto T187;
T187:;
	base[2]= coerce_to_string((V108));
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V105= vs_base[0];}
goto T184;
T184:;
	V106= Cnil;
	V107= Cnil;
	{object V109;
	object V110;
	base[3]= (V105);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk15)();
	vs_top=sup;
	V109= vs_base[0];
	V110= small_fixnum(0);
goto T195;
T195:;
	if(!(number_compare((V110),(V109))>=0)){
	goto T196;}
	V106= Cnil;
	goto T183;
goto T196;
T196:;
	base[3]= (V105);
	base[4]= (V110);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V107= vs_base[0];
goto T203;
T203:;
	if(((V107))!=Cnil){
	goto T208;}
	goto T204;
goto T208;
T208:;
	V106= car((V107));
	V111= coerce_to_string((V106));
	if(((*(LnkLI43))((V85),/* INLINE-ARGS */V111))==Cnil){
	goto T213;}
	(void)((*(LnkLI44))((V106)));
goto T213;
T213:;
	V107= cdr((V107));
	goto T203;
goto T204;
T204:;
	goto T201;
goto T201;
T201:;
	V110= one_plus((V110));
	goto T195;}}
goto T183;
T183:;
	V104= cdr((V104));
	goto T178;}
goto T98;
T98:;
	{object V112;
	object V113;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V112= vs_base[0];
	V113= car((V112));
goto T227;
T227:;
	if(!(endp_prop((V112)))){
	goto T228;}
	goto T96;
goto T228;
T228:;
	{object V114;
	register object V115;
	register object V116;
	base[4]= V113;
	vs_top=(vs_base=base+4)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T235;}
	V114= V113;
	goto T233;
goto T235;
T235:;
	base[4]= coerce_to_string(V113);
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V114= vs_base[0];
goto T233;
T233:;
	V115= Cnil;
	V116= Cnil;
	{object V118;
	register object V119;
	base[6]= (V114);
	vs_top=(vs_base=base+6)+1;
	Lpackage_use_list();
	vs_top=sup;
	V120= vs_base[0];
	V118= make_cons((V114),V120);
	V119= car((V118));
goto T244;
T244:;
	if(!(endp_prop((V118)))){
	goto T245;}
	V115= Cnil;
	goto T232;
goto T245;
T245:;
	{long V121;
	long V122;
	base[6]= (V119);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk15)();
	if(vs_base>=vs_top){vs_top=sup;goto T254;}
	V121= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T255;}
	V122= fix(vs_base[0]);
	vs_top=sup;
	goto T256;
goto T254;
T254:;
	V121= fix(Cnil);
goto T255;
T255:;
	V122= fix(Cnil);
goto T256;
T256:;
	if(((V114))==((V119))){
	goto T257;}
	V122= 0;
goto T257;
T257:;
	{object V123;
	register object V124;
	V125 = make_fixnum(V122);
	V126 = make_fixnum(V121);
	V123= number_plus(V125,V126);
	V124= small_fixnum(0);
goto T264;
T264:;
	if(!(number_compare((V124),(V123))>=0)){
	goto T265;}
	goto T251;
goto T265;
T265:;
	V127 = make_fixnum(V122);
	if(!(number_compare((V124),V127)<0)){
	goto T274;}
	base[7]= (V119);
	base[8]= (V124);
	vs_top=(vs_base=base+7)+2;
	siLpackage_internal();
	vs_top=sup;
	V116= vs_base[0];
	goto T272;
goto T274;
T274:;
	base[7]= (V119);
	V128 = make_fixnum(V122);
	base[8]= number_minus((V124),V128);
	vs_top=(vs_base=base+7)+2;
	siLpackage_external();
	vs_top=sup;
	V116= vs_base[0];
goto T272;
T272:;
goto T270;
T270:;
	if(((V116))!=Cnil){
	goto T280;}
	goto T271;
goto T280;
T280:;
	V115= car((V116));
	if(((V119))==((V114))){
	goto T286;}
	base[8]= symbol_name((V115));
	base[9]= (V114);
	vs_top=(vs_base=base+8)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+7)+1;
	Llast();
	vs_top=sup;
	V129= vs_base[0];
	if(!((VV[31])==(car(V129)))){
	goto T285;}
goto T286;
T286:;
	V130= coerce_to_string((V115));
	if(((*(LnkLI43))((V85),/* INLINE-ARGS */V130))==Cnil){
	goto T285;}
	(void)((*(LnkLI44))((V115)));
goto T285;
T285:;
	V116= cdr((V116));
	goto T270;
goto T271;
T271:;
	goto T268;
goto T268;
T268:;
	V124= one_plus((V124));
	goto T264;}}
goto T251;
T251:;
	V118= cdr((V118));
	V119= car((V118));
	goto T244;}}
goto T232;
T232:;
	V112= cdr((V112));
	V113= car((V112));
	goto T227;}
goto T96;
T96:;
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;
	}
}
/*	local entry for function APROPOS-LIST	*/

static object LI9(V131,va_alist)
	object V131;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V132;
	object V133;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V132= V131;
	narg = narg - 1;
	if (narg <= 0) goto T312;
	else {
	V133= va_arg(ap,object);}
	--narg; goto T313;
goto T312;
T312:;
	V133= Cnil;
goto T313;
T313:;
	{register object V134;
	V134= Cnil;
	V134= Cnil;
	V132= coerce_to_string((V132));
	if(((V133))==Cnil){
	goto T322;}
	{object V135;
	object V136;
	object V137;
	base[0]= V133;
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T327;}
	V135= V133;
	goto T325;
goto T327;
T327:;
	base[0]= coerce_to_string(V133);
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V135= vs_base[0];
goto T325;
T325:;
	V136= Cnil;
	V137= Cnil;
	{object V139;
	object V140;
	base[2]= (V135);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V141= vs_base[0];
	V139= make_cons((V135),V141);
	V140= car((V139));
goto T336;
T336:;
	if(!(endp_prop((V139)))){
	goto T337;}
	V136= Cnil;
	goto T324;
goto T337;
T337:;
	{long V142;
	long V143;
	base[2]= (V140);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk15)();
	if(vs_base>=vs_top){vs_top=sup;goto T346;}
	V142= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T347;}
	V143= fix(vs_base[0]);
	vs_top=sup;
	goto T348;
goto T346;
T346:;
	V142= fix(Cnil);
goto T347;
T347:;
	V143= fix(Cnil);
goto T348;
T348:;
	if(((V135))==((V140))){
	goto T349;}
	V143= 0;
goto T349;
T349:;
	{object V144;
	object V145;
	V146 = make_fixnum(V143);
	V147 = make_fixnum(V142);
	V144= number_plus(V146,V147);
	V145= small_fixnum(0);
goto T356;
T356:;
	if(!(number_compare((V145),(V144))>=0)){
	goto T357;}
	goto T343;
goto T357;
T357:;
	V148 = make_fixnum(V143);
	if(!(number_compare((V145),V148)<0)){
	goto T366;}
	base[3]= (V140);
	base[4]= (V145);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V137= vs_base[0];
	goto T364;
goto T366;
T366:;
	base[3]= (V140);
	V149 = make_fixnum(V143);
	base[4]= number_minus((V145),V149);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V137= vs_base[0];
goto T364;
T364:;
goto T362;
T362:;
	if(((V137))!=Cnil){
	goto T372;}
	goto T363;
goto T372;
T372:;
	V136= car((V137));
	if(((V140))==((V135))){
	goto T378;}
	base[4]= symbol_name((V136));
	base[5]= (V135);
	vs_top=(vs_base=base+4)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V150= vs_base[0];
	if(!((VV[31])==(car(V150)))){
	goto T377;}
goto T378;
T378:;
	V151= coerce_to_string((V136));
	if(((*(LnkLI43))((V132),/* INLINE-ARGS */V151))==Cnil){
	goto T377;}
	V134= make_cons((V136),(V134));
goto T377;
T377:;
	V137= cdr((V137));
	goto T362;
goto T363;
T363:;
	goto T360;
goto T360;
T360:;
	V145= one_plus((V145));
	goto T356;}}
goto T343;
T343:;
	V139= cdr((V139));
	V140= car((V139));
	goto T336;}}
goto T324;
T324:;
	{object V152;
	base[0]= (V133);
	vs_top=(vs_base=base+0)+1;
	Lpackage_use_list();
	vs_top=sup;
	V152= vs_base[0];
goto T403;
T403:;
	if(((V152))!=Cnil){
	goto T404;}
	goto T320;
goto T404;
T404:;
	{object V153;
	register object V154;
	register object V155;
	{object V156;
	V156= car((V152));
	base[0]= (V156);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T412;}
	V153= (V156);
	goto T409;
goto T412;
T412:;
	base[0]= coerce_to_string((V156));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V153= vs_base[0];}
goto T409;
T409:;
	V154= Cnil;
	V155= Cnil;
	{object V157;
	object V158;
	base[2]= (V153);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V159= vs_base[0];
	V157= make_cons((V153),V159);
	V158= car((V157));
goto T421;
T421:;
	if(!(endp_prop((V157)))){
	goto T422;}
	V154= Cnil;
	goto T408;
goto T422;
T422:;
	{long V160;
	long V161;
	base[2]= (V158);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk15)();
	if(vs_base>=vs_top){vs_top=sup;goto T431;}
	V160= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T432;}
	V161= fix(vs_base[0]);
	vs_top=sup;
	goto T433;
goto T431;
T431:;
	V160= fix(Cnil);
goto T432;
T432:;
	V161= fix(Cnil);
goto T433;
T433:;
	if(((V153))==((V158))){
	goto T434;}
	V161= 0;
goto T434;
T434:;
	{object V162;
	register object V163;
	V164 = make_fixnum(V161);
	V165 = make_fixnum(V160);
	V162= number_plus(V164,V165);
	V163= small_fixnum(0);
goto T441;
T441:;
	if(!(number_compare((V163),(V162))>=0)){
	goto T442;}
	goto T428;
goto T442;
T442:;
	V166 = make_fixnum(V161);
	if(!(number_compare((V163),V166)<0)){
	goto T451;}
	base[3]= (V158);
	base[4]= (V163);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V155= vs_base[0];
	goto T449;
goto T451;
T451:;
	base[3]= (V158);
	V167 = make_fixnum(V161);
	base[4]= number_minus((V163),V167);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V155= vs_base[0];
goto T449;
T449:;
goto T447;
T447:;
	if(((V155))!=Cnil){
	goto T457;}
	goto T448;
goto T457;
T457:;
	V154= car((V155));
	if(((V158))==((V153))){
	goto T463;}
	base[4]= symbol_name((V154));
	base[5]= (V153);
	vs_top=(vs_base=base+4)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V168= vs_base[0];
	if(!((VV[31])==(car(V168)))){
	goto T462;}
goto T463;
T463:;
	V169= coerce_to_string((V154));
	if(((*(LnkLI43))((V132),/* INLINE-ARGS */V169))==Cnil){
	goto T462;}
	V134= make_cons((V154),(V134));
goto T462;
T462:;
	V155= cdr((V155));
	goto T447;
goto T448;
T448:;
	goto T445;
goto T445;
T445:;
	V163= one_plus((V163));
	goto T441;}}
goto T428;
T428:;
	V157= cdr((V157));
	V158= car((V157));
	goto T421;}}
goto T408;
T408:;
	V152= cdr((V152));
	goto T403;}
goto T322;
T322:;
	{object V170;
	object V171;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V170= vs_base[0];
	V171= car((V170));
goto T491;
T491:;
	if(!(endp_prop((V170)))){
	goto T492;}
	goto T320;
goto T492;
T492:;
	{object V172;
	register object V173;
	register object V174;
	base[2]= V171;
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T499;}
	V172= V171;
	goto T497;
goto T499;
T499:;
	base[2]= coerce_to_string(V171);
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V172= vs_base[0];
goto T497;
T497:;
	V173= Cnil;
	V174= Cnil;
	{object V176;
	object V177;
	base[4]= (V172);
	vs_top=(vs_base=base+4)+1;
	Lpackage_use_list();
	vs_top=sup;
	V178= vs_base[0];
	V176= make_cons((V172),V178);
	V177= car((V176));
goto T508;
T508:;
	if(!(endp_prop((V176)))){
	goto T509;}
	V173= Cnil;
	goto T496;
goto T509;
T509:;
	{long V179;
	long V180;
	base[4]= (V177);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk15)();
	if(vs_base>=vs_top){vs_top=sup;goto T518;}
	V179= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T519;}
	V180= fix(vs_base[0]);
	vs_top=sup;
	goto T520;
goto T518;
T518:;
	V179= fix(Cnil);
goto T519;
T519:;
	V180= fix(Cnil);
goto T520;
T520:;
	if(((V172))==((V177))){
	goto T521;}
	V180= 0;
goto T521;
T521:;
	{object V181;
	register object V182;
	V183 = make_fixnum(V180);
	V184 = make_fixnum(V179);
	V181= number_plus(V183,V184);
	V182= small_fixnum(0);
goto T528;
T528:;
	if(!(number_compare((V182),(V181))>=0)){
	goto T529;}
	goto T515;
goto T529;
T529:;
	V185 = make_fixnum(V180);
	if(!(number_compare((V182),V185)<0)){
	goto T538;}
	base[5]= (V177);
	base[6]= (V182);
	vs_top=(vs_base=base+5)+2;
	siLpackage_internal();
	vs_top=sup;
	V174= vs_base[0];
	goto T536;
goto T538;
T538:;
	base[5]= (V177);
	V186 = make_fixnum(V180);
	base[6]= number_minus((V182),V186);
	vs_top=(vs_base=base+5)+2;
	siLpackage_external();
	vs_top=sup;
	V174= vs_base[0];
goto T536;
T536:;
goto T534;
T534:;
	if(((V174))!=Cnil){
	goto T544;}
	goto T535;
goto T544;
T544:;
	V173= car((V174));
	if(((V177))==((V172))){
	goto T550;}
	base[6]= symbol_name((V173));
	base[7]= (V172);
	vs_top=(vs_base=base+6)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Llast();
	vs_top=sup;
	V187= vs_base[0];
	if(!((VV[31])==(car(V187)))){
	goto T549;}
goto T550;
T550:;
	V188= coerce_to_string((V173));
	if(((*(LnkLI43))((V132),/* INLINE-ARGS */V188))==Cnil){
	goto T549;}
	V134= make_cons((V173),(V134));
goto T549;
T549:;
	V174= cdr((V174));
	goto T534;
goto T535;
T535:;
	goto T532;
goto T532;
T532:;
	V182= one_plus((V182));
	goto T528;}}
goto T515;
T515:;
	V176= cdr((V176));
	V177= car((V176));
	goto T508;}}
goto T496;
T496:;
	V170= cdr((V170));
	V171= car((V170));
	goto T491;}
goto T320;
T320:;
	{object V189 = (V134);
	VMR9(V189)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
static object  LnkTLI44(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[44],(void **)&LnkLI44,1,ap);va_end(ap);return V1;} /* PRINT-SYMBOL-APROPOS */
static object  LnkTLI43(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[43],(void **)&LnkLI43,2,ap);va_end(ap);return V1;} /* SUBSTRINGP */
static void LnkT15(){ call_or_link(VV[15],(void **)&Lnk15);} /* PACKAGE-SIZE */
static void LnkT42(){ call_or_link(VV[42],(void **)&Lnk42);} /* FIND-DECLARATIONS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

