
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
	(void) (*Lnk43)();
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
	V44= list(3,VV[2],/* INLINE-ARGS */V43,make_cons(VV[36],base[5]));
	V45= list(3,VV[13],(V20),list(2,VV[37],(V20)));
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
	(void) (*Lnk43)();
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
	V63= list(3,VV[13],(V52),list(2,VV[37],(V52)));
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
	V69= list(3,VV[38],VV[39],base[3]);
	V70= list(2,base[2],VV[38]);
	base[5]= list(3,VV[9],/* INLINE-ARGS */V69,list(3,VV[40],/* INLINE-ARGS */V70,make_cons(VV[36],base[4])));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function SUBSTRINGP	*/

static object LI6(V73,V74)

register object V73;register object V74;
{	 VMB6 VMS6 VMV6
goto TTL;
TTL:;
	{register object V75;
	register object V76;
	register object V77;
	V78 = make_fixnum((long)length((V74)));
	V79 = make_fixnum((long)length((V73)));
	V75= number_minus(V78,V79);
	V76= make_fixnum((long)length((V73)));
	V77= small_fixnum(0);
goto T50;
T50:;
	if(!(number_compare((V77),(V75))>0)){
	goto T51;}
	{object V80 = Cnil;
	VMR6(V80)}
goto T51;
T51:;
	base[0]= (V73);
	base[1]= (V74);
	base[2]= VV[41];
	base[3]= (V77);
	base[4]= VV[42];
	base[5]= number_plus((V77),(V76));
	vs_top=(vs_base=base+0)+6;
	Lstring_equal();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T55;}
	{object V81 = Ct;
	VMR6(V81)}
goto T55;
T55:;
	V77= one_plus((V77));
	goto T50;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PRINT-SYMBOL-APROPOS	*/

static object LI7(V83)

register object V83;
{	 VMB7 VMS7 VMV7
goto TTL;
TTL:;
	(void)(prin1((V83),Cnil));
	base[0]= (V83);
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T68;}
	base[0]= (V83);
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T73;}
	princ_str("  Special form",Cnil);
	goto T68;
goto T73;
T73:;
	base[0]= (V83);
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
	base[0]= (V83);
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T80;}
	base[0]= (V83);
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
	base[0]= (V83);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_value();
	vs_top=sup;
	V84= vs_base[0];
	(void)(prin1(V84,Cnil));
goto T80;
T80:;
	{object V85 = terpri(Cnil);
	VMR7(V85)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for APROPOS	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{object V86;
	object V87;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V86=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T91;}
	V87=(base[1]);
	vs_top=sup;
	goto T92;
goto T91;
T91:;
	V87= Cnil;
goto T92;
T92:;
	V86= coerce_to_string((V86));
	if(((V87))==Cnil){
	goto T98;}
	{object V88;
	object V89;
	register object V90;
	base[2]= V87;
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T103;}
	V88= V87;
	goto T101;
goto T103;
T103:;
	base[2]= coerce_to_string(V87);
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V88= vs_base[0];
goto T101;
T101:;
	V89= Cnil;
	V90= Cnil;
	{object V92;
	object V93;
	base[4]= (V88);
	vs_top=(vs_base=base+4)+1;
	Lpackage_use_list();
	vs_top=sup;
	V94= vs_base[0];
	V92= make_cons((V88),V94);
	V93= car((V92));
goto T112;
T112:;
	if(!(endp_prop((V92)))){
	goto T113;}
	V89= Cnil;
	goto T100;
goto T113;
T113:;
	{long V95;
	long V96;
	base[4]= (V93);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk15)();
	if(vs_base>=vs_top){vs_top=sup;goto T122;}
	V95= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T123;}
	V96= fix(vs_base[0]);
	vs_top=sup;
	goto T124;
goto T122;
T122:;
	V95= fix(Cnil);
goto T123;
T123:;
	V96= fix(Cnil);
goto T124;
T124:;
	if(((V88))==((V93))){
	goto T125;}
	V96= 0;
goto T125;
T125:;
	{object V97;
	object V98;
	V99 = make_fixnum(V96);
	V100 = make_fixnum(V95);
	V97= number_plus(V99,V100);
	V98= small_fixnum(0);
goto T132;
T132:;
	if(!(number_compare((V98),(V97))>=0)){
	goto T133;}
	goto T119;
goto T133;
T133:;
	V101 = make_fixnum(V96);
	if(!(number_compare((V98),V101)<0)){
	goto T142;}
	base[5]= (V93);
	base[6]= (V98);
	vs_top=(vs_base=base+5)+2;
	siLpackage_internal();
	vs_top=sup;
	V90= vs_base[0];
	goto T140;
goto T142;
T142:;
	base[5]= (V93);
	V102 = make_fixnum(V96);
	base[6]= number_minus((V98),V102);
	vs_top=(vs_base=base+5)+2;
	siLpackage_external();
	vs_top=sup;
	V90= vs_base[0];
goto T140;
T140:;
goto T138;
T138:;
	if(((V90))!=Cnil){
	goto T148;}
	goto T139;
goto T148;
T148:;
	V89= car((V90));
	if(((V93))==((V88))){
	goto T154;}
	base[6]= symbol_name((V89));
	base[7]= (V88);
	vs_top=(vs_base=base+6)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Llast();
	vs_top=sup;
	V103= vs_base[0];
	if(!((VV[31])==(car(V103)))){
	goto T153;}
goto T154;
T154:;
	V104= coerce_to_string((V89));
	if(((*(LnkLI44))((V86),/* INLINE-ARGS */V104))==Cnil){
	goto T163;}
	(void)((*(LnkLI45))((V89)));
goto T163;
T163:;
goto T153;
T153:;
	V90= cdr((V90));
	goto T138;
goto T139;
T139:;
	goto T136;
goto T136;
T136:;
	V98= one_plus((V98));
	goto T132;}}
goto T119;
T119:;
	V92= cdr((V92));
	V93= car((V92));
	goto T112;}}
goto T100;
T100:;
	{object V105;
	base[2]= (V87);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V105= vs_base[0];
goto T179;
T179:;
	if(((V105))!=Cnil){
	goto T180;}
	goto T96;
goto T180;
T180:;
	{object V106;
	object V107;
	register object V108;
	{object V109;
	V109= car((V105));
	base[2]= (V109);
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T188;}
	V106= (V109);
	goto T185;
goto T188;
T188:;
	base[2]= coerce_to_string((V109));
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V106= vs_base[0];}
goto T185;
T185:;
	V107= Cnil;
	V108= Cnil;
	{object V110;
	object V111;
	base[3]= (V106);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk15)();
	vs_top=sup;
	V110= vs_base[0];
	V111= small_fixnum(0);
goto T196;
T196:;
	if(!(number_compare((V111),(V110))>=0)){
	goto T197;}
	V107= Cnil;
	goto T184;
goto T197;
T197:;
	base[3]= (V106);
	base[4]= (V111);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V108= vs_base[0];
goto T204;
T204:;
	if(((V108))!=Cnil){
	goto T209;}
	goto T205;
goto T209;
T209:;
	V107= car((V108));
	V112= coerce_to_string((V107));
	if(((*(LnkLI44))((V86),/* INLINE-ARGS */V112))==Cnil){
	goto T214;}
	(void)((*(LnkLI45))((V107)));
goto T214;
T214:;
	V108= cdr((V108));
	goto T204;
goto T205;
T205:;
	goto T202;
goto T202;
T202:;
	V111= one_plus((V111));
	goto T196;}}
goto T184;
T184:;
	V105= cdr((V105));
	goto T179;}
goto T98;
T98:;
	{object V113;
	object V114;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V113= vs_base[0];
	V114= car((V113));
goto T228;
T228:;
	if(!(endp_prop((V113)))){
	goto T229;}
	goto T96;
goto T229;
T229:;
	{object V115;
	register object V116;
	register object V117;
	base[4]= V114;
	vs_top=(vs_base=base+4)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T236;}
	V115= V114;
	goto T234;
goto T236;
T236:;
	base[4]= coerce_to_string(V114);
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V115= vs_base[0];
goto T234;
T234:;
	V116= Cnil;
	V117= Cnil;
	{object V119;
	register object V120;
	base[6]= (V115);
	vs_top=(vs_base=base+6)+1;
	Lpackage_use_list();
	vs_top=sup;
	V121= vs_base[0];
	V119= make_cons((V115),V121);
	V120= car((V119));
goto T245;
T245:;
	if(!(endp_prop((V119)))){
	goto T246;}
	V116= Cnil;
	goto T233;
goto T246;
T246:;
	{long V122;
	long V123;
	base[6]= (V120);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk15)();
	if(vs_base>=vs_top){vs_top=sup;goto T255;}
	V122= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T256;}
	V123= fix(vs_base[0]);
	vs_top=sup;
	goto T257;
goto T255;
T255:;
	V122= fix(Cnil);
goto T256;
T256:;
	V123= fix(Cnil);
goto T257;
T257:;
	if(((V115))==((V120))){
	goto T258;}
	V123= 0;
goto T258;
T258:;
	{object V124;
	register object V125;
	V126 = make_fixnum(V123);
	V127 = make_fixnum(V122);
	V124= number_plus(V126,V127);
	V125= small_fixnum(0);
goto T265;
T265:;
	if(!(number_compare((V125),(V124))>=0)){
	goto T266;}
	goto T252;
goto T266;
T266:;
	V128 = make_fixnum(V123);
	if(!(number_compare((V125),V128)<0)){
	goto T275;}
	base[7]= (V120);
	base[8]= (V125);
	vs_top=(vs_base=base+7)+2;
	siLpackage_internal();
	vs_top=sup;
	V117= vs_base[0];
	goto T273;
goto T275;
T275:;
	base[7]= (V120);
	V129 = make_fixnum(V123);
	base[8]= number_minus((V125),V129);
	vs_top=(vs_base=base+7)+2;
	siLpackage_external();
	vs_top=sup;
	V117= vs_base[0];
goto T273;
T273:;
goto T271;
T271:;
	if(((V117))!=Cnil){
	goto T281;}
	goto T272;
goto T281;
T281:;
	V116= car((V117));
	if(((V120))==((V115))){
	goto T287;}
	base[8]= symbol_name((V116));
	base[9]= (V115);
	vs_top=(vs_base=base+8)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+7)+1;
	Llast();
	vs_top=sup;
	V130= vs_base[0];
	if(!((VV[31])==(car(V130)))){
	goto T286;}
goto T287;
T287:;
	V131= coerce_to_string((V116));
	if(((*(LnkLI44))((V86),/* INLINE-ARGS */V131))==Cnil){
	goto T297;}
	(void)((*(LnkLI45))((V116)));
goto T297;
T297:;
goto T286;
T286:;
	V117= cdr((V117));
	goto T271;
goto T272;
T272:;
	goto T269;
goto T269;
T269:;
	V125= one_plus((V125));
	goto T265;}}
goto T252;
T252:;
	V119= cdr((V119));
	V120= car((V119));
	goto T245;}}
goto T233;
T233:;
	V113= cdr((V113));
	V114= car((V113));
	goto T228;}
goto T96;
T96:;
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;
	}
}
/*	local entry for function APROPOS-LIST	*/

static object LI9(V132,va_alist)
	object V132;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V133;
	object V134;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V133= V132;
	narg = narg - 1;
	if (narg <= 0) goto T315;
	else {
	V134= va_arg(ap,object);}
	--narg; goto T316;
goto T315;
T315:;
	V134= Cnil;
goto T316;
T316:;
	{register object V135;
	V135= Cnil;
	V135= Cnil;
	V133= coerce_to_string((V133));
	if(((V134))==Cnil){
	goto T325;}
	{object V136;
	object V137;
	object V138;
	base[0]= V134;
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T330;}
	V136= V134;
	goto T328;
goto T330;
T330:;
	base[0]= coerce_to_string(V134);
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V136= vs_base[0];
goto T328;
T328:;
	V137= Cnil;
	V138= Cnil;
	{object V140;
	object V141;
	base[2]= (V136);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V142= vs_base[0];
	V140= make_cons((V136),V142);
	V141= car((V140));
goto T339;
T339:;
	if(!(endp_prop((V140)))){
	goto T340;}
	V137= Cnil;
	goto T327;
goto T340;
T340:;
	{long V143;
	long V144;
	base[2]= (V141);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk15)();
	if(vs_base>=vs_top){vs_top=sup;goto T349;}
	V143= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T350;}
	V144= fix(vs_base[0]);
	vs_top=sup;
	goto T351;
goto T349;
T349:;
	V143= fix(Cnil);
goto T350;
T350:;
	V144= fix(Cnil);
goto T351;
T351:;
	if(((V136))==((V141))){
	goto T352;}
	V144= 0;
goto T352;
T352:;
	{object V145;
	object V146;
	V147 = make_fixnum(V144);
	V148 = make_fixnum(V143);
	V145= number_plus(V147,V148);
	V146= small_fixnum(0);
goto T359;
T359:;
	if(!(number_compare((V146),(V145))>=0)){
	goto T360;}
	goto T346;
goto T360;
T360:;
	V149 = make_fixnum(V144);
	if(!(number_compare((V146),V149)<0)){
	goto T369;}
	base[3]= (V141);
	base[4]= (V146);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V138= vs_base[0];
	goto T367;
goto T369;
T369:;
	base[3]= (V141);
	V150 = make_fixnum(V144);
	base[4]= number_minus((V146),V150);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V138= vs_base[0];
goto T367;
T367:;
goto T365;
T365:;
	if(((V138))!=Cnil){
	goto T375;}
	goto T366;
goto T375;
T375:;
	V137= car((V138));
	if(((V141))==((V136))){
	goto T381;}
	base[4]= symbol_name((V137));
	base[5]= (V136);
	vs_top=(vs_base=base+4)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V151= vs_base[0];
	if(!((VV[31])==(car(V151)))){
	goto T380;}
goto T381;
T381:;
	V152= coerce_to_string((V137));
	if(((*(LnkLI44))((V133),/* INLINE-ARGS */V152))==Cnil){
	goto T390;}
	V135= make_cons((V137),(V135));
goto T390;
T390:;
goto T380;
T380:;
	V138= cdr((V138));
	goto T365;
goto T366;
T366:;
	goto T363;
goto T363;
T363:;
	V146= one_plus((V146));
	goto T359;}}
goto T346;
T346:;
	V140= cdr((V140));
	V141= car((V140));
	goto T339;}}
goto T327;
T327:;
	{object V153;
	base[0]= (V134);
	vs_top=(vs_base=base+0)+1;
	Lpackage_use_list();
	vs_top=sup;
	V153= vs_base[0];
goto T407;
T407:;
	if(((V153))!=Cnil){
	goto T408;}
	goto T323;
goto T408;
T408:;
	{object V154;
	register object V155;
	register object V156;
	{object V157;
	V157= car((V153));
	base[0]= (V157);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T416;}
	V154= (V157);
	goto T413;
goto T416;
T416:;
	base[0]= coerce_to_string((V157));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V154= vs_base[0];}
goto T413;
T413:;
	V155= Cnil;
	V156= Cnil;
	{object V158;
	object V159;
	base[2]= (V154);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V160= vs_base[0];
	V158= make_cons((V154),V160);
	V159= car((V158));
goto T425;
T425:;
	if(!(endp_prop((V158)))){
	goto T426;}
	V155= Cnil;
	goto T412;
goto T426;
T426:;
	{long V161;
	long V162;
	base[2]= (V159);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk15)();
	if(vs_base>=vs_top){vs_top=sup;goto T435;}
	V161= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T436;}
	V162= fix(vs_base[0]);
	vs_top=sup;
	goto T437;
goto T435;
T435:;
	V161= fix(Cnil);
goto T436;
T436:;
	V162= fix(Cnil);
goto T437;
T437:;
	if(((V154))==((V159))){
	goto T438;}
	V162= 0;
goto T438;
T438:;
	{object V163;
	register object V164;
	V165 = make_fixnum(V162);
	V166 = make_fixnum(V161);
	V163= number_plus(V165,V166);
	V164= small_fixnum(0);
goto T445;
T445:;
	if(!(number_compare((V164),(V163))>=0)){
	goto T446;}
	goto T432;
goto T446;
T446:;
	V167 = make_fixnum(V162);
	if(!(number_compare((V164),V167)<0)){
	goto T455;}
	base[3]= (V159);
	base[4]= (V164);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V156= vs_base[0];
	goto T453;
goto T455;
T455:;
	base[3]= (V159);
	V168 = make_fixnum(V162);
	base[4]= number_minus((V164),V168);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V156= vs_base[0];
goto T453;
T453:;
goto T451;
T451:;
	if(((V156))!=Cnil){
	goto T461;}
	goto T452;
goto T461;
T461:;
	V155= car((V156));
	if(((V159))==((V154))){
	goto T467;}
	base[4]= symbol_name((V155));
	base[5]= (V154);
	vs_top=(vs_base=base+4)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V169= vs_base[0];
	if(!((VV[31])==(car(V169)))){
	goto T466;}
goto T467;
T467:;
	V170= coerce_to_string((V155));
	if(((*(LnkLI44))((V133),/* INLINE-ARGS */V170))==Cnil){
	goto T476;}
	V135= make_cons((V155),(V135));
goto T476;
T476:;
goto T466;
T466:;
	V156= cdr((V156));
	goto T451;
goto T452;
T452:;
	goto T449;
goto T449;
T449:;
	V164= one_plus((V164));
	goto T445;}}
goto T432;
T432:;
	V158= cdr((V158));
	V159= car((V158));
	goto T425;}}
goto T412;
T412:;
	V153= cdr((V153));
	goto T407;}
goto T325;
T325:;
	{object V171;
	object V172;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V171= vs_base[0];
	V172= car((V171));
goto T496;
T496:;
	if(!(endp_prop((V171)))){
	goto T497;}
	goto T323;
goto T497;
T497:;
	{object V173;
	register object V174;
	register object V175;
	base[2]= V172;
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T504;}
	V173= V172;
	goto T502;
goto T504;
T504:;
	base[2]= coerce_to_string(V172);
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V173= vs_base[0];
goto T502;
T502:;
	V174= Cnil;
	V175= Cnil;
	{object V177;
	object V178;
	base[4]= (V173);
	vs_top=(vs_base=base+4)+1;
	Lpackage_use_list();
	vs_top=sup;
	V179= vs_base[0];
	V177= make_cons((V173),V179);
	V178= car((V177));
goto T513;
T513:;
	if(!(endp_prop((V177)))){
	goto T514;}
	V174= Cnil;
	goto T501;
goto T514;
T514:;
	{long V180;
	long V181;
	base[4]= (V178);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk15)();
	if(vs_base>=vs_top){vs_top=sup;goto T523;}
	V180= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T524;}
	V181= fix(vs_base[0]);
	vs_top=sup;
	goto T525;
goto T523;
T523:;
	V180= fix(Cnil);
goto T524;
T524:;
	V181= fix(Cnil);
goto T525;
T525:;
	if(((V173))==((V178))){
	goto T526;}
	V181= 0;
goto T526;
T526:;
	{object V182;
	register object V183;
	V184 = make_fixnum(V181);
	V185 = make_fixnum(V180);
	V182= number_plus(V184,V185);
	V183= small_fixnum(0);
goto T533;
T533:;
	if(!(number_compare((V183),(V182))>=0)){
	goto T534;}
	goto T520;
goto T534;
T534:;
	V186 = make_fixnum(V181);
	if(!(number_compare((V183),V186)<0)){
	goto T543;}
	base[5]= (V178);
	base[6]= (V183);
	vs_top=(vs_base=base+5)+2;
	siLpackage_internal();
	vs_top=sup;
	V175= vs_base[0];
	goto T541;
goto T543;
T543:;
	base[5]= (V178);
	V187 = make_fixnum(V181);
	base[6]= number_minus((V183),V187);
	vs_top=(vs_base=base+5)+2;
	siLpackage_external();
	vs_top=sup;
	V175= vs_base[0];
goto T541;
T541:;
goto T539;
T539:;
	if(((V175))!=Cnil){
	goto T549;}
	goto T540;
goto T549;
T549:;
	V174= car((V175));
	if(((V178))==((V173))){
	goto T555;}
	base[6]= symbol_name((V174));
	base[7]= (V173);
	vs_top=(vs_base=base+6)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Llast();
	vs_top=sup;
	V188= vs_base[0];
	if(!((VV[31])==(car(V188)))){
	goto T554;}
goto T555;
T555:;
	V189= coerce_to_string((V174));
	if(((*(LnkLI44))((V133),/* INLINE-ARGS */V189))==Cnil){
	goto T565;}
	V135= make_cons((V174),(V135));
goto T565;
T565:;
goto T554;
T554:;
	V175= cdr((V175));
	goto T539;
goto T540;
T540:;
	goto T537;
goto T537;
T537:;
	V183= one_plus((V183));
	goto T533;}}
goto T520;
T520:;
	V177= cdr((V177));
	V178= car((V177));
	goto T513;}}
goto T501;
T501:;
	V171= cdr((V171));
	V172= car((V171));
	goto T496;}
goto T323;
T323:;
	{object V190 = (V135);
	VMR9(V190)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
static object  LnkTLI45(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[45],(void **)&LnkLI45,1,ap);va_end(ap);return V1;} /* PRINT-SYMBOL-APROPOS */
static object  LnkTLI44(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_proc(VV[44],(void **)&LnkLI44,2,ap);va_end(ap);return V1;} /* SUBSTRINGP */
static void LnkT15(){ call_or_link(VV[15],(void **)&Lnk15);} /* PACKAGE-SIZE */
static void LnkT43(){ call_or_link(VV[43],(void **)&Lnk43);} /* FIND-DECLARATIONS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

