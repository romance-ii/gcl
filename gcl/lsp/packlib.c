
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
	(void) (*Lnk61)();
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
	(void) (*Lnk61)();
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
/*	local entry for function APROPOS-LIST	*/

static object LI8(object V86,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB8 VMS8 VMV8
	{object V87;
	object V88;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V87= V86;
	narg = narg - 1;
	if (narg <= 0) goto T91;
	else {
	V88= first;}
	--narg; goto T92;
	goto T91;
T91:;
	V88= Cnil;
	goto T92;
T92:;
	{register object V89;
	V89= Cnil;
	V89= Cnil;
	V87= coerce_to_string((V87));
	if(((V88))==Cnil){
	goto T101;}
	{object V90;
	object V91;
	object V92;
	base[0]= V88;
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T106;}
	V90= V88;
	goto T104;
	goto T106;
T106:;
	base[0]= coerce_to_string(V88);
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V90= vs_base[0];
	goto T104;
T104:;
	V91= Cnil;
	V92= Cnil;
	{object V94;
	object V95;
	base[2]= (V90);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V96= vs_base[0];
	V94= make_cons((V90),V96);
	V95= car((V94));
	goto T115;
T115:;
	if(!(endp_prop((V94)))){
	goto T116;}
	V91= Cnil;
	goto T103;
	goto T116;
T116:;
	{long V97;
	long V98;
	base[2]= (V95);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk15)();
	if(vs_base>=vs_top){vs_top=sup;goto T125;}
	V97= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T126;}
	V98= fix(vs_base[0]);
	vs_top=sup;
	goto T127;
	goto T125;
T125:;
	V97= fix(Cnil);
	goto T126;
T126:;
	V98= fix(Cnil);
	goto T127;
T127:;
	if(((V90))==((V95))){
	goto T128;}
	V98= 0;
	goto T128;
T128:;
	{object V99;
	object V100;
	V101 = make_fixnum(V98);
	V102 = make_fixnum(V97);
	V99= number_plus(V101,V102);
	V100= small_fixnum(0);
	goto T135;
T135:;
	if(!(number_compare((V100),(V99))>=0)){
	goto T136;}
	goto T122;
	goto T136;
T136:;
	V103 = make_fixnum(V98);
	if(!(number_compare((V100),V103)<0)){
	goto T145;}
	base[3]= (V95);
	base[4]= (V100);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V92= vs_base[0];
	goto T143;
	goto T145;
T145:;
	base[3]= (V95);
	V104 = make_fixnum(V98);
	base[4]= number_minus((V100),V104);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V92= vs_base[0];
	goto T143;
T143:;
	goto T141;
T141:;
	if(((V92))!=Cnil){
	goto T151;}
	goto T142;
	goto T151;
T151:;
	V91= car((V92));
	if(((V95))==((V90))){
	goto T157;}
	base[4]= symbol_name((V91));
	base[5]= (V90);
	vs_top=(vs_base=base+4)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V105= vs_base[0];
	if(!((VV[31])==(car(V105)))){
	goto T156;}
	goto T157;
T157:;
	V106= coerce_to_string((V91));
	if(((*(LnkLI62))((V87),/* INLINE-ARGS */V106))==Cnil){
	goto T166;}
	V89= make_cons((V91),(V89));
	goto T166;
T166:;
	goto T156;
T156:;
	V92= cdr((V92));
	goto T141;
	goto T142;
T142:;
	goto T139;
	goto T139;
T139:;
	V100= one_plus((V100));
	goto T135;}}
	goto T122;
T122:;
	V94= cdr((V94));
	V95= car((V94));
	goto T115;}}
	goto T103;
T103:;
	{object V107;
	base[0]= (V88);
	vs_top=(vs_base=base+0)+1;
	Lpackage_use_list();
	vs_top=sup;
	V107= vs_base[0];
	goto T183;
T183:;
	if(((V107))!=Cnil){
	goto T184;}
	goto T99;
	goto T184;
T184:;
	{object V108;
	object V109;
	register object V110;
	{object V111;
	V111= car((V107));
	base[0]= (V111);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T192;}
	V108= (V111);
	goto T189;
	goto T192;
T192:;
	base[0]= coerce_to_string((V111));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V108= vs_base[0];}
	goto T189;
T189:;
	V109= Cnil;
	V110= Cnil;
	{object V112;
	object V113;
	base[1]= (V108);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk15)();
	vs_top=sup;
	V112= vs_base[0];
	V113= small_fixnum(0);
	goto T200;
T200:;
	if(!(number_compare((V113),(V112))>=0)){
	goto T201;}
	V109= Cnil;
	goto T188;
	goto T201;
T201:;
	base[1]= (V108);
	base[2]= (V113);
	vs_top=(vs_base=base+1)+2;
	siLpackage_external();
	vs_top=sup;
	V110= vs_base[0];
	goto T208;
T208:;
	if(((V110))!=Cnil){
	goto T213;}
	goto T209;
	goto T213;
T213:;
	V109= car((V110));
	V114= coerce_to_string((V109));
	if(((*(LnkLI62))((V87),/* INLINE-ARGS */V114))==Cnil){
	goto T218;}
	V89= make_cons((V109),(V89));
	goto T218;
T218:;
	V110= cdr((V110));
	goto T208;
	goto T209;
T209:;
	goto T206;
	goto T206;
T206:;
	V113= one_plus((V113));
	goto T200;}}
	goto T188;
T188:;
	V107= cdr((V107));
	goto T183;}
	goto T101;
T101:;
	{object V115;
	object V116;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V115= vs_base[0];
	V116= car((V115));
	goto T233;
T233:;
	if(!(endp_prop((V115)))){
	goto T234;}
	goto T99;
	goto T234;
T234:;
	{object V117;
	register object V118;
	register object V119;
	base[2]= V116;
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T241;}
	V117= V116;
	goto T239;
	goto T241;
T241:;
	base[2]= coerce_to_string(V116);
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V117= vs_base[0];
	goto T239;
T239:;
	V118= Cnil;
	V119= Cnil;
	{object V121;
	register object V122;
	base[4]= (V117);
	vs_top=(vs_base=base+4)+1;
	Lpackage_use_list();
	vs_top=sup;
	V123= vs_base[0];
	V121= make_cons((V117),V123);
	V122= car((V121));
	goto T250;
T250:;
	if(!(endp_prop((V121)))){
	goto T251;}
	V118= Cnil;
	goto T238;
	goto T251;
T251:;
	{long V124;
	long V125;
	base[4]= (V122);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk15)();
	if(vs_base>=vs_top){vs_top=sup;goto T260;}
	V124= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T261;}
	V125= fix(vs_base[0]);
	vs_top=sup;
	goto T262;
	goto T260;
T260:;
	V124= fix(Cnil);
	goto T261;
T261:;
	V125= fix(Cnil);
	goto T262;
T262:;
	if(((V117))==((V122))){
	goto T263;}
	V125= 0;
	goto T263;
T263:;
	{object V126;
	register object V127;
	V128 = make_fixnum(V125);
	V129 = make_fixnum(V124);
	V126= number_plus(V128,V129);
	V127= small_fixnum(0);
	goto T270;
T270:;
	if(!(number_compare((V127),(V126))>=0)){
	goto T271;}
	goto T257;
	goto T271;
T271:;
	V130 = make_fixnum(V125);
	if(!(number_compare((V127),V130)<0)){
	goto T280;}
	base[5]= (V122);
	base[6]= (V127);
	vs_top=(vs_base=base+5)+2;
	siLpackage_internal();
	vs_top=sup;
	V119= vs_base[0];
	goto T278;
	goto T280;
T280:;
	base[5]= (V122);
	V131 = make_fixnum(V125);
	base[6]= number_minus((V127),V131);
	vs_top=(vs_base=base+5)+2;
	siLpackage_external();
	vs_top=sup;
	V119= vs_base[0];
	goto T278;
T278:;
	goto T276;
T276:;
	if(((V119))!=Cnil){
	goto T286;}
	goto T277;
	goto T286;
T286:;
	V118= car((V119));
	if(((V122))==((V117))){
	goto T292;}
	base[6]= symbol_name((V118));
	base[7]= (V117);
	vs_top=(vs_base=base+6)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Llast();
	vs_top=sup;
	V132= vs_base[0];
	if(!((VV[31])==(car(V132)))){
	goto T291;}
	goto T292;
T292:;
	V133= coerce_to_string((V118));
	if(((*(LnkLI62))((V87),/* INLINE-ARGS */V133))==Cnil){
	goto T302;}
	V89= make_cons((V118),(V89));
	goto T302;
T302:;
	goto T291;
T291:;
	V119= cdr((V119));
	goto T276;
	goto T277;
T277:;
	goto T274;
	goto T274;
T274:;
	V127= one_plus((V127));
	goto T270;}}
	goto T257;
T257:;
	V121= cdr((V121));
	V122= car((V121));
	goto T250;}}
	goto T238;
T238:;
	V115= cdr((V115));
	V116= car((V115));
	goto T233;}
	goto T99;
T99:;
	V134= symbol_function(VV[19]);
	base[0]= (VFUN_NARGS=3,(*(LnkLI63))((V89),VV[43],V134));
	base[1]= symbol_function(VV[64]);
	base[2]= VV[44];
	base[3]= symbol_function(VV[35]);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk65)();
	vs_top=sup;
	{object V135 = vs_base[0];
	VMR8(V135)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for APROPOS	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{object V136;
	object V137;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V136=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T326;}
	V137=(base[1]);
	vs_top=sup;
	goto T327;
	goto T326;
T326:;
	V137= Cnil;
	goto T327;
T327:;
	{register object V138;
	register object V139;
	V138= (VFUN_NARGS=2,(*(LnkLI66))((V136),(V137)));
	V139= car((V138));
	goto T333;
T333:;
	if(!(endp_prop((V138)))){
	goto T334;}
	goto T329;
	goto T334;
T334:;
	(void)((*(LnkLI67))((V139)));
	V138= cdr((V138));
	V139= car((V138));
	goto T333;}
	goto T329;
T329:;
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
	{object V140=base[0]->c.c_cdr;
	if(endp(V140))invalid_macro_call();
	{object V141= (V140->c.c_car);
	if(endp(V141))invalid_macro_call();
	base[2]= (V141->c.c_car);
	V141=V141->c.c_cdr;
	if(endp(V141))invalid_macro_call();
	base[3]= (V141->c.c_car);
	V141=V141->c.c_cdr;
	base[4]= V141;}
	V140=V140->c.c_cdr;
	base[5]= V140;}
	{register object V142;
	register object V143;
	register object V144;
	register object V145;
	object V146;
	register object V147;
	register object V148;
	register object V149;
	object V150;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V142= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V143= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V144= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V145= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V146= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V147= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V148= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V149= vs_base[0];
	V150= Cnil;
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk61)();
	if(vs_base<vs_top){
	V150= vs_base[0];
	vs_base++;
	}else{
	V150= Cnil;}
	if(vs_base<vs_top){
	base[5]= vs_base[0];
	}else{
	base[5]= Cnil;}
	vs_top=sup;
	if((base[4])!=Cnil){
	goto T355;}
	base[6]= VV[45];
	base[7]= VV[46];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk68)();
	vs_top=sup;
	goto T355;
T355:;
	V151= list(2,VV[47],base[3]);
	V152= list(2,(V142),list(3,VV[10],Ct,list(4,VV[2],/* INLINE-ARGS */V151,list(2,VV[48],base[3]),base[3])));
	V153= list(2,(V145),Cnil);
	V154= list(2,(V144),Cnil);
	V155= list(2,(V143),small_fixnum(-1));
	V156= list(2,(V147),small_fixnum(0));
	V157= list(2,(V148),small_fixnum(0));
	V158= list(2,(V146),Cnil);
	V159= list(8,/* INLINE-ARGS */V152,/* INLINE-ARGS */V153,/* INLINE-ARGS */V154,/* INLINE-ARGS */V155,/* INLINE-ARGS */V156,/* INLINE-ARGS */V157,/* INLINE-ARGS */V158,list(2,(V149),Cnil));
	V160= list(2,VV[16],list(3,VV[17],(V147),(V148)));
	V161= list(2,VV[27],list(3,VV[13],(V144),list(2,VV[37],(V144))));
	V162= list(2,VV[51],(V143));
	V163= list(3,VV[50],/* INLINE-ARGS */V162,list(3,VV[21],(V147),(V148)));
	V164= list(2,VV[27],list(3,VV[13],(V145),list(2,VV[37],(V145))));
	V165= list(2,VV[27],list(3,VV[13],(V142),list(2,VV[37],(V142))));
	V166= list(3,VV[26],/* INLINE-ARGS */V165,list(3,VV[52],base[2],Cnil));
	V167= list(3,VV[53],(V142),list(2,VV[8],list(2,VV[29],(V142))));
	V168= list(3,VV[13],(V145),list(2,VV[48],list(2,VV[8],list(2,VV[29],(V142)))));
	V169= list(3,VV[54],VV[31],make_cons(VV[48],base[4]));
	V170= list(6,VV[26],/* INLINE-ARGS */V164,/* INLINE-ARGS */V166,/* INLINE-ARGS */V167,/* INLINE-ARGS */V168,list(3,VV[26],/* INLINE-ARGS */V169,list(3,VV[55],(V145),list(2,VV[11],list(2,VV[29],(V145))))));
	V171= list(2,(V148),(V147));
	V172= list(3,VV[56],/* INLINE-ARGS */V171,list(2,VV[15],list(2,VV[29],(V145))));
	V173= list(2,VV[18],list(3,VV[54],VV[6],make_cons(VV[48],base[4])));
	V174= list(2,VV[29],(V142));
	V175= list(3,VV[30],/* INLINE-ARGS */V173,list(2,VV[18],list(3,VV[19],/* INLINE-ARGS */V174,list(2,VV[29],(V145)))));
	V176= list(3,VV[26],/* INLINE-ARGS */V175,list(3,VV[13],(V147),small_fixnum(0)));
	V177= list(2,VV[18],list(3,VV[54],VV[7],make_cons(VV[48],base[4])));
	V178= list(2,VV[29],(V142));
	V179= list(3,VV[57],/* INLINE-ARGS */V177,list(3,VV[19],/* INLINE-ARGS */V178,list(2,VV[29],(V145))));
	V180= list(3,VV[26],/* INLINE-ARGS */V179,list(3,VV[13],(V148),small_fixnum(0)));
	V181= list(2,VV[58],list(3,VV[21],(V147),(V148)));
	V182= list(3,VV[13],(V143),small_fixnum(-1));
	V183= list(4,VV[26],/* INLINE-ARGS */V181,/* INLINE-ARGS */V182,list(2,VV[28],base[2]));
	V184= list(8,VV[26],/* INLINE-ARGS */V163,/* INLINE-ARGS */V170,/* INLINE-ARGS */V172,/* INLINE-ARGS */V176,/* INLINE-ARGS */V180,/* INLINE-ARGS */V183,list(3,VV[13],(V143),small_fixnum(0)));
	V185= list(3,VV[22],(V143),(V147));
	V186= list(3,VV[23],list(2,VV[29],(V145)),(V143));
	V187= list(2,VV[29],(V145));
	V188= list(4,VV[26],/* INLINE-ARGS */V161,/* INLINE-ARGS */V184,list(3,VV[13],(V144),list(4,VV[2],/* INLINE-ARGS */V185,/* INLINE-ARGS */V186,list(3,VV[24],/* INLINE-ARGS */V187,list(3,VV[25],(V143),(V147))))));
	V189= list(2,VV[27],(V144));
	V190= list(3,VV[26],/* INLINE-ARGS */V189,list(2,VV[28],base[2]));
	V191= list(2,(V146),(V149));
	V192= list(2,VV[35],list(2,VV[29],(V144)));
	V193= list(3,VV[56],/* INLINE-ARGS */V191,list(3,VV[34],/* INLINE-ARGS */V192,list(2,VV[29],(V142))));
	V194= list(2,VV[18],list(3,VV[19],(V149),VV[31]));
	V195= list(2,VV[29],(V142));
	V196= list(3,VV[57],/* INLINE-ARGS */V194,list(2,VV[18],list(3,VV[19],/* INLINE-ARGS */V195,list(2,VV[29],(V145)))));
	V197= list(6,VV[36],base[2],/* INLINE-ARGS */V188,/* INLINE-ARGS */V190,/* INLINE-ARGS */V193,list(3,VV[26],/* INLINE-ARGS */V196,list(2,VV[28],base[2])));
	V198= list(2,VV[29],(V144));
	V199= list(4,base[2],Cnil,/* INLINE-ARGS */V197,list(5,VV[59],VV[60],/* INLINE-ARGS */V198,(V149),list(2,VV[29],(V142))));
	V200= make_cons(/* INLINE-ARGS */V199,Cnil);
	base[6]= list(4,VV[1],/* INLINE-ARGS */V159,/* INLINE-ARGS */V160,listA(3,VV[49],/* INLINE-ARGS */V200,append((V150),base[5])));
	vs_top=(vs_base=base+6)+1;
	return;}
}
static void LnkT68(){ call_or_link(VV[68],(void **)(void *)&Lnk68);} /* SPECIFIC-ERROR */
static object  LnkTLI67(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[67],(void **)(void *)&LnkLI67,1,first,ap);va_end(ap);return V1;} /* PRINT-SYMBOL-APROPOS */
static object  LnkTLI66(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[66],(void **)(void *)&LnkLI66,first,ap);va_end(ap);return V1;} /* APROPOS-LIST */
static void LnkT65(){ call_or_link(VV[65],(void **)(void *)&Lnk65);} /* STABLE-SORT */
static object  LnkTLI63(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[63],(void **)(void *)&LnkLI63,first,ap);va_end(ap);return V1;} /* DELETE-DUPLICATES */
static object  LnkTLI62(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[62],(void **)(void *)&LnkLI62,2,first,ap);va_end(ap);return V1;} /* SUBSTRINGP */
static void LnkT15(){ call_or_link(VV[15],(void **)(void *)&Lnk15);} /* PACKAGE-SIZE */
static void LnkT61(){ call_or_link(VV[61],(void **)(void *)&Lnk61);} /* FIND-DECLARATIONS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

