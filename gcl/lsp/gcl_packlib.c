
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
/*	local entry for function FIND-ALL-SYMBOLS	*/

static object LI2(V8)

register object V8;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(!(type_of((V8))==t_symbol)){
	goto T5;}
	V8= symbol_name((V8));
	goto T5;
T5:;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V11= vs_base[0];
	{object V9;
	object V10= V11;
	if(endp(V10)){
	{object V12 = Cnil;
	VMR2(V12)}}
	base[0]=V9=MMcons(Cnil,Cnil);
	goto T9;
T9:;
	{object V14;
	object V15;
	base[1]= (V8);
	base[2]= (V10->c.c_car);
	vs_top=(vs_base=base+1)+2;
	Lfind_symbol();
	if(vs_base>=vs_top){vs_top=sup;goto T15;}
	V14= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T16;}
	V15= vs_base[0];
	vs_top=sup;
	goto T17;
	goto T15;
T15:;
	V14= Cnil;
	goto T16;
T16:;
	V15= Cnil;
	goto T17;
T17:;
	if(((V15))==(VV[11])){
	goto T18;}
	if(!(((V15))==(VV[12]))){
	goto T19;}
	goto T18;
T18:;
	(V9->c.c_cdr)= make_cons((V14),Cnil);
	goto T11;
	goto T19;
T19:;
	(V9->c.c_cdr)= Cnil;}
	goto T11;
T11:;
	{object cdr_V9=MMcdr(V9);while(!endp(cdr_V9)) {cdr_V9=MMcdr(cdr_V9);V9=MMcdr(V9);}}
	V10=MMcdr(V10);
	if(endp(V10)){
	base[0]=base[0]->c.c_cdr;
	{object V16 = base[0];
	VMR2(V16)}}
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
	{object V17=base[0]->c.c_cdr;
	if(endp(V17))invalid_macro_call();
	{object V18= (V17->c.c_car);
	if(endp(V18))invalid_macro_call();
	base[2]= (V18->c.c_car);
	V18=V18->c.c_cdr;
	if(endp(V18)){
	base[3]= VV[0];
	} else {
	base[3]= (V18->c.c_car);
	V18=V18->c.c_cdr;}
	if(endp(V18)){
	base[4]= Cnil;
	} else {
	base[4]= (V18->c.c_car);
	V18=V18->c.c_cdr;}
	if(!endp(V18))invalid_macro_call();}
	V17=V17->c.c_cdr;
	base[5]= V17;}
	{register object V19;
	register object V20;
	register object V21;
	register object V22;
	object V23;
	register object V24;
	object V25;
	object V26;
	object V27;
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
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V26= vs_base[0];
	V27= Cnil;
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk65)();
	if(vs_base<vs_top){
	V27= vs_base[0];
	vs_base++;
	}else{
	V27= Cnil;}
	if(vs_base<vs_top){
	base[5]= vs_base[0];
	}else{
	base[5]= Cnil;}
	vs_top=sup;
	V28= list(3,list(2,(V19),list(2,VV[13],base[3])),base[2],(V21));
	V29= list(3,VV[15],(V19),list(2,VV[16],(V19)));
	V30= list(3,(V22),/* INLINE-ARGS */V29,list(3,VV[17],list(3,VV[5],base[2],Cnil),base[4]));
	V31= list(2,(V25),(V24));
	V32= list(2,VV[19],(V22));
	V33= list(2,VV[20],list(3,VV[21],(V24),(V25)));
	V34= list(2,VV[23],list(3,VV[24],(V19),(V22)));
	V35= list(3,VV[22],/* INLINE-ARGS */V34,list(3,VV[5],(V24),small_fixnum(0)));
	V36= list(2,(V20),list(3,VV[26],(V24),(V25)));
	V37= list(3,VV[27],(V20),(V24));
	V38= list(3,VV[28],(V22),(V20));
	V39= list(3,VV[5],(V21),list(4,VV[22],/* INLINE-ARGS */V37,/* INLINE-ARGS */V38,list(3,VV[29],(V22),list(3,VV[30],(V20),(V24)))));
	V40= list(2,VV[32],(V21));
	V41= list(3,VV[31],/* INLINE-ARGS */V40,list(2,VV[33],(V26)));
	V42= list(3,VV[5],base[2],list(2,VV[34],(V21)));
	V43= list(3,VV[24],(V22),(V19));
	V44= list(3,VV[3],/* INLINE-ARGS */V43,list(3,VV[24],VV[35],list(2,VV[34],list(2,VV[36],list(2,VV[37],list(3,VV[38],list(2,VV[39],base[2]),(V19)))))));
	V45= list(3,VV[22],/* INLINE-ARGS */V44,make_cons(VV[40],base[5]));
	V46= list(3,VV[5],(V21),list(2,VV[41],(V21)));
	V47= list(3,VV[14],/* INLINE-ARGS */V30,list(6,VV[18],/* INLINE-ARGS */V31,/* INLINE-ARGS */V32,/* INLINE-ARGS */V33,/* INLINE-ARGS */V35,list(10,VV[25],/* INLINE-ARGS */V36,/* INLINE-ARGS */V39,(V23),/* INLINE-ARGS */V41,/* INLINE-ARGS */V42,/* INLINE-ARGS */V45,/* INLINE-ARGS */V46,list(2,VV[33],(V23)),(V26))));
	V48= make_cons(/* INLINE-ARGS */V47,Cnil);
	base[6]= listA(3,VV[1],/* INLINE-ARGS */V28,append((V27),/* INLINE-ARGS */V48));
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
	{object V49=base[0]->c.c_cdr;
	if(endp(V49))invalid_macro_call();
	{object V50= (V49->c.c_car);
	if(endp(V50))invalid_macro_call();
	base[2]= (V50->c.c_car);
	V50=V50->c.c_cdr;
	if(endp(V50)){
	base[3]= VV[0];
	} else {
	base[3]= (V50->c.c_car);
	V50=V50->c.c_cdr;}
	if(endp(V50)){
	base[4]= Cnil;
	} else {
	base[4]= (V50->c.c_car);
	V50=V50->c.c_cdr;}
	if(!endp(V50))invalid_macro_call();}
	V49=V49->c.c_cdr;
	base[5]= V49;}
	{object V51;
	object V52;
	register object V53;
	object V54;
	object V55;
	object V56;
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
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V55= vs_base[0];
	V56= Cnil;
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk65)();
	if(vs_base<vs_top){
	V56= vs_base[0];
	vs_base++;
	}else{
	V56= Cnil;}
	if(vs_base<vs_top){
	base[5]= vs_base[0];
	}else{
	base[5]= Cnil;}
	vs_top=sup;
	V57= list(3,list(2,(V51),list(2,VV[13],base[3])),base[2],(V53));
	V58= list(2,VV[19],(V51));
	V59= list(3,(V52),/* INLINE-ARGS */V58,list(3,VV[17],list(3,VV[5],base[2],Cnil),base[4]));
	V60= list(3,VV[5],(V53),list(3,VV[29],(V51),(V52)));
	V61= list(2,VV[32],(V53));
	V62= list(3,VV[31],/* INLINE-ARGS */V61,list(2,VV[33],(V55)));
	V63= list(3,VV[5],base[2],list(2,VV[34],(V53)));
	V64= list(3,VV[5],(V53),list(2,VV[41],(V53)));
	V65= list(3,/* INLINE-ARGS */V64,list(2,VV[33],(V54)),(V55));
	V66= listA(7,VV[25],/* INLINE-ARGS */V59,/* INLINE-ARGS */V60,(V54),/* INLINE-ARGS */V62,/* INLINE-ARGS */V63,append(base[5],/* INLINE-ARGS */V65));
	V67= make_cons(/* INLINE-ARGS */V66,Cnil);
	base[6]= listA(3,VV[1],/* INLINE-ARGS */V57,append((V56),/* INLINE-ARGS */V67));
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
	{object V68=base[0]->c.c_cdr;
	if(endp(V68))invalid_macro_call();
	{object V69= (V68->c.c_car);
	if(endp(V69))invalid_macro_call();
	base[2]= (V69->c.c_car);
	V69=V69->c.c_cdr;
	if(endp(V69)){
	base[3]= Cnil;
	} else {
	base[3]= (V69->c.c_car);
	V69=V69->c.c_cdr;}
	if(!endp(V69))invalid_macro_call();}
	V68=V68->c.c_cdr;
	base[4]= V68;}
	V70= list(3,VV[42],VV[43],base[3]);
	V71= list(2,base[2],VV[42]);
	base[5]= list(3,VV[14],/* INLINE-ARGS */V70,list(3,VV[44],/* INLINE-ARGS */V71,make_cons(VV[40],base[4])));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function SUBSTRINGP	*/

static object LI6(V74,V75)

register object V74;register object V75;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{register object V76;
	register object V77;
	register object V78;
	V79 = make_fixnum((long)length((V75)));
	V80 = make_fixnum((long)length((V74)));
	V76= number_minus(V79,V80);
	V77= make_fixnum((long)length((V74)));
	V78= small_fixnum(0);
	goto T50;
T50:;
	if(!(number_compare((V78),(V76))>0)){
	goto T51;}
	{object V81 = Cnil;
	VMR6(V81)}
	goto T51;
T51:;
	base[0]= (V74);
	base[1]= (V75);
	base[2]= VV[45];
	base[3]= (V78);
	base[4]= VV[46];
	base[5]= number_plus((V78),(V77));
	vs_top=(vs_base=base+0)+6;
	Lstring_equal();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T55;}
	{object V82 = Ct;
	VMR6(V82)}
	goto T55;
T55:;
	V78= one_plus((V78));
	goto T50;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PRINT-SYMBOL-APROPOS	*/

static object LI7(V84)

register object V84;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	(void)(prin1((V84),Cnil));
	base[0]= (V84);
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T68;}
	base[0]= (V84);
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T73;}
	princ_str("  Special form",Cnil);
	goto T68;
	goto T73;
T73:;
	base[0]= (V84);
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
	base[0]= (V84);
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T80;}
	base[0]= (V84);
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
	base[0]= (V84);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_value();
	vs_top=sup;
	V85= vs_base[0];
	(void)(prin1(V85,Cnil));
	goto T80;
T80:;
	{object V86 = terpri(Cnil);
	VMR7(V86)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function APROPOS-LIST	*/

static object LI8(object V87,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB8 VMS8 VMV8
	{object V88;
	object V89;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V88= V87;
	narg = narg - 1;
	if (narg <= 0) goto T91;
	else {
	V89= first;}
	--narg; goto T92;
	goto T91;
T91:;
	V89= Cnil;
	goto T92;
T92:;
	{register object V90;
	V90= Cnil;
	V90= Cnil;
	V88= coerce_to_string((V88));
	if(((V89))==Cnil){
	goto T101;}
	{object V91;
	object V92;
	object V93;
	{object V94;
	V94= (V89);
	base[0]= (V94);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T105;}
	base[0]= coerce_to_string((V94));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V94= vs_base[0];
	if(((V94))!=Cnil){
	goto T105;}
	base[0]= VV[9];
	base[1]= VV[10];
	base[2]= (V89);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk8)();
	vs_top=sup;
	goto T105;
T105:;
	V91= (V94);}
	V92= Cnil;
	V93= Cnil;
	{object V95;
	object V96;
	base[2]= (V91);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V97= vs_base[0];
	V95= make_cons((V91),V97);
	V96= car((V95));
	goto T121;
T121:;
	if(!(endp_prop((V95)))){
	goto T122;}
	V92= Cnil;
	goto T103;
	goto T122;
T122:;
	{long V98;
	long V99;
	base[2]= (V96);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk19)();
	if(vs_base>=vs_top){vs_top=sup;goto T131;}
	V98= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T132;}
	V99= fix(vs_base[0]);
	vs_top=sup;
	goto T133;
	goto T131;
T131:;
	V98= fix(Cnil);
	goto T132;
T132:;
	V99= fix(Cnil);
	goto T133;
T133:;
	if(((V91))==((V96))){
	goto T134;}
	V99= 0;
	goto T134;
T134:;
	{object V100;
	object V101;
	V102 = make_fixnum(V99);
	V103 = make_fixnum(V98);
	V100= number_plus(V102,V103);
	V101= small_fixnum(0);
	goto T141;
T141:;
	if(!(number_compare((V101),(V100))>=0)){
	goto T142;}
	goto T128;
	goto T142;
T142:;
	V104 = make_fixnum(V99);
	if(!(number_compare((V101),V104)<0)){
	goto T151;}
	base[3]= (V96);
	base[4]= (V101);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V93= vs_base[0];
	goto T149;
	goto T151;
T151:;
	base[3]= (V96);
	V105 = make_fixnum(V99);
	base[4]= number_minus((V101),V105);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V93= vs_base[0];
	goto T149;
T149:;
	goto T147;
T147:;
	if(((V93))!=Cnil){
	goto T157;}
	goto T148;
	goto T157;
T157:;
	V92= car((V93));
	if(((V96))==((V91))){
	goto T163;}
	base[4]= symbol_name((V92));
	base[5]= (V91);
	vs_top=(vs_base=base+4)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V106= vs_base[0];
	if(!((VV[35])==(car(V106)))){
	goto T162;}
	goto T163;
T163:;
	V107= coerce_to_string((V92));
	if(((*(LnkLI66))((V88),/* INLINE-ARGS */V107))==Cnil){
	goto T172;}
	V90= make_cons((V92),(V90));
	goto T172;
T172:;
	goto T162;
T162:;
	V93= cdr((V93));
	goto T147;
	goto T148;
T148:;
	goto T145;
	goto T145;
T145:;
	V101= one_plus((V101));
	goto T141;}}
	goto T128;
T128:;
	V95= cdr((V95));
	V96= car((V95));
	goto T121;}}
	goto T103;
T103:;
	{object V108;
	base[0]= (V89);
	vs_top=(vs_base=base+0)+1;
	Lpackage_use_list();
	vs_top=sup;
	V108= vs_base[0];
	goto T189;
T189:;
	if(((V108))!=Cnil){
	goto T190;}
	goto T99;
	goto T190;
T190:;
	{object V109;
	object V110;
	register object V111;
	{object V112;
	V112= car((V108));
	base[0]= (V112);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T197;}
	base[0]= coerce_to_string((V112));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V112= vs_base[0];
	if(((V112))!=Cnil){
	goto T197;}
	base[0]= VV[9];
	base[1]= VV[10];
	base[2]= car((V108));
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk8)();
	vs_top=sup;
	goto T197;
T197:;
	V109= (V112);}
	V110= Cnil;
	V111= Cnil;
	{object V113;
	object V114;
	base[1]= (V109);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk19)();
	vs_top=sup;
	V113= vs_base[0];
	V114= small_fixnum(0);
	goto T212;
T212:;
	if(!(number_compare((V114),(V113))>=0)){
	goto T213;}
	V110= Cnil;
	goto T194;
	goto T213;
T213:;
	base[1]= (V109);
	base[2]= (V114);
	vs_top=(vs_base=base+1)+2;
	siLpackage_external();
	vs_top=sup;
	V111= vs_base[0];
	goto T220;
T220:;
	if(((V111))!=Cnil){
	goto T225;}
	goto T221;
	goto T225;
T225:;
	V110= car((V111));
	V115= coerce_to_string((V110));
	if(((*(LnkLI66))((V88),/* INLINE-ARGS */V115))==Cnil){
	goto T230;}
	V90= make_cons((V110),(V90));
	goto T230;
T230:;
	V111= cdr((V111));
	goto T220;
	goto T221;
T221:;
	goto T218;
	goto T218;
T218:;
	V114= one_plus((V114));
	goto T212;}}
	goto T194;
T194:;
	V108= cdr((V108));
	goto T189;}
	goto T101;
T101:;
	{object V116;
	object V117;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V116= vs_base[0];
	V117= car((V116));
	goto T245;
T245:;
	if(!(endp_prop((V116)))){
	goto T246;}
	goto T99;
	goto T246;
T246:;
	{object V118;
	register object V119;
	register object V120;
	{object V121;
	V121= (V117);
	base[2]= (V121);
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T252;}
	base[2]= coerce_to_string((V121));
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V121= vs_base[0];
	if(((V121))!=Cnil){
	goto T252;}
	base[2]= VV[9];
	base[3]= VV[10];
	base[4]= (V117);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk8)();
	vs_top=sup;
	goto T252;
T252:;
	V118= (V121);}
	V119= Cnil;
	V120= Cnil;
	{object V122;
	register object V123;
	base[4]= (V118);
	vs_top=(vs_base=base+4)+1;
	Lpackage_use_list();
	vs_top=sup;
	V124= vs_base[0];
	V122= make_cons((V118),V124);
	V123= car((V122));
	goto T268;
T268:;
	if(!(endp_prop((V122)))){
	goto T269;}
	V119= Cnil;
	goto T250;
	goto T269;
T269:;
	{long V125;
	long V126;
	base[4]= (V123);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk19)();
	if(vs_base>=vs_top){vs_top=sup;goto T278;}
	V125= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T279;}
	V126= fix(vs_base[0]);
	vs_top=sup;
	goto T280;
	goto T278;
T278:;
	V125= fix(Cnil);
	goto T279;
T279:;
	V126= fix(Cnil);
	goto T280;
T280:;
	if(((V118))==((V123))){
	goto T281;}
	V126= 0;
	goto T281;
T281:;
	{object V127;
	register object V128;
	V129 = make_fixnum(V126);
	V130 = make_fixnum(V125);
	V127= number_plus(V129,V130);
	V128= small_fixnum(0);
	goto T288;
T288:;
	if(!(number_compare((V128),(V127))>=0)){
	goto T289;}
	goto T275;
	goto T289;
T289:;
	V131 = make_fixnum(V126);
	if(!(number_compare((V128),V131)<0)){
	goto T298;}
	base[5]= (V123);
	base[6]= (V128);
	vs_top=(vs_base=base+5)+2;
	siLpackage_internal();
	vs_top=sup;
	V120= vs_base[0];
	goto T296;
	goto T298;
T298:;
	base[5]= (V123);
	V132 = make_fixnum(V126);
	base[6]= number_minus((V128),V132);
	vs_top=(vs_base=base+5)+2;
	siLpackage_external();
	vs_top=sup;
	V120= vs_base[0];
	goto T296;
T296:;
	goto T294;
T294:;
	if(((V120))!=Cnil){
	goto T304;}
	goto T295;
	goto T304;
T304:;
	V119= car((V120));
	if(((V123))==((V118))){
	goto T310;}
	base[6]= symbol_name((V119));
	base[7]= (V118);
	vs_top=(vs_base=base+6)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Llast();
	vs_top=sup;
	V133= vs_base[0];
	if(!((VV[35])==(car(V133)))){
	goto T309;}
	goto T310;
T310:;
	V134= coerce_to_string((V119));
	if(((*(LnkLI66))((V88),/* INLINE-ARGS */V134))==Cnil){
	goto T320;}
	V90= make_cons((V119),(V90));
	goto T320;
T320:;
	goto T309;
T309:;
	V120= cdr((V120));
	goto T294;
	goto T295;
T295:;
	goto T292;
	goto T292;
T292:;
	V128= one_plus((V128));
	goto T288;}}
	goto T275;
T275:;
	V122= cdr((V122));
	V123= car((V122));
	goto T268;}}
	goto T250;
T250:;
	V116= cdr((V116));
	V117= car((V116));
	goto T245;}
	goto T99;
T99:;
	V135= symbol_function(VV[24]);
	base[0]= (VFUN_NARGS=3,(*(LnkLI67))((V90),VV[47],V135));
	base[1]= symbol_function(VV[68]);
	base[2]= VV[48];
	base[3]= symbol_function(VV[39]);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk69)();
	vs_top=sup;
	{object V136 = vs_base[0];
	VMR8(V136)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for APROPOS	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{object V137;
	object V138;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V137=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T344;}
	V138=(base[1]);
	vs_top=sup;
	goto T345;
	goto T344;
T344:;
	V138= Cnil;
	goto T345;
T345:;
	{register object V139;
	register object V140;
	V139= (VFUN_NARGS=2,(*(LnkLI70))((V137),(V138)));
	V140= car((V139));
	goto T351;
T351:;
	if(!(endp_prop((V139)))){
	goto T352;}
	goto T347;
	goto T352;
T352:;
	(void)((*(LnkLI71))((V140)));
	V139= cdr((V139));
	V140= car((V139));
	goto T351;}
	goto T347;
T347:;
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
	{object V141=base[0]->c.c_cdr;
	if(endp(V141))invalid_macro_call();
	{object V142= (V141->c.c_car);
	if(endp(V142))invalid_macro_call();
	base[2]= (V142->c.c_car);
	V142=V142->c.c_cdr;
	if(endp(V142))invalid_macro_call();
	base[3]= (V142->c.c_car);
	V142=V142->c.c_cdr;
	base[4]= V142;}
	V141=V141->c.c_cdr;
	base[5]= V141;}
	{register object V143;
	register object V144;
	register object V145;
	register object V146;
	object V147;
	register object V148;
	register object V149;
	register object V150;
	object V151;
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
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V150= vs_base[0];
	V151= Cnil;
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk65)();
	if(vs_base<vs_top){
	V151= vs_base[0];
	vs_base++;
	}else{
	V151= Cnil;}
	if(vs_base<vs_top){
	base[5]= vs_base[0];
	}else{
	base[5]= Cnil;}
	vs_top=sup;
	if((base[4])!=Cnil){
	goto T373;}
	base[6]= VV[49];
	base[7]= VV[50];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk8)();
	vs_top=sup;
	goto T373;
T373:;
	V152= list(2,VV[51],base[3]);
	V153= list(2,(V143),list(3,VV[15],Ct,list(4,VV[22],/* INLINE-ARGS */V152,list(2,VV[52],base[3]),base[3])));
	V154= list(2,(V146),Cnil);
	V155= list(2,(V145),Cnil);
	V156= list(2,(V144),small_fixnum(-1));
	V157= list(2,(V148),small_fixnum(0));
	V158= list(2,(V149),small_fixnum(0));
	V159= list(2,(V147),Cnil);
	V160= list(8,/* INLINE-ARGS */V153,/* INLINE-ARGS */V154,/* INLINE-ARGS */V155,/* INLINE-ARGS */V156,/* INLINE-ARGS */V157,/* INLINE-ARGS */V158,/* INLINE-ARGS */V159,list(2,(V150),Cnil));
	V161= list(2,VV[20],list(3,VV[21],(V148),(V149)));
	V162= list(2,VV[32],list(3,VV[5],(V145),list(2,VV[41],(V145))));
	V163= list(2,VV[55],(V144));
	V164= list(3,VV[54],/* INLINE-ARGS */V163,list(3,VV[26],(V148),(V149)));
	V165= list(2,VV[32],list(3,VV[5],(V146),list(2,VV[41],(V146))));
	V166= list(2,VV[32],list(3,VV[5],(V143),list(2,VV[41],(V143))));
	V167= list(3,VV[31],/* INLINE-ARGS */V166,list(3,VV[56],base[2],Cnil));
	V168= list(3,VV[57],(V143),list(2,VV[13],list(2,VV[34],(V143))));
	V169= list(3,VV[5],(V146),list(2,VV[52],list(2,VV[13],list(2,VV[34],(V143)))));
	V170= list(3,VV[58],VV[35],make_cons(VV[52],base[4]));
	V171= list(6,VV[31],/* INLINE-ARGS */V165,/* INLINE-ARGS */V167,/* INLINE-ARGS */V168,/* INLINE-ARGS */V169,list(3,VV[31],/* INLINE-ARGS */V170,list(3,VV[59],(V146),list(2,VV[16],list(2,VV[34],(V146))))));
	V172= list(2,(V149),(V148));
	V173= list(3,VV[60],/* INLINE-ARGS */V172,list(2,VV[19],list(2,VV[34],(V146))));
	V174= list(2,VV[23],list(3,VV[58],VV[11],make_cons(VV[52],base[4])));
	V175= list(2,VV[34],(V143));
	V176= list(3,VV[3],/* INLINE-ARGS */V174,list(2,VV[23],list(3,VV[24],/* INLINE-ARGS */V175,list(2,VV[34],(V146)))));
	V177= list(3,VV[31],/* INLINE-ARGS */V176,list(3,VV[5],(V148),small_fixnum(0)));
	V178= list(2,VV[23],list(3,VV[58],VV[12],make_cons(VV[52],base[4])));
	V179= list(2,VV[34],(V143));
	V180= list(3,VV[61],/* INLINE-ARGS */V178,list(3,VV[24],/* INLINE-ARGS */V179,list(2,VV[34],(V146))));
	V181= list(3,VV[31],/* INLINE-ARGS */V180,list(3,VV[5],(V149),small_fixnum(0)));
	V182= list(2,VV[62],list(3,VV[26],(V148),(V149)));
	V183= list(3,VV[5],(V144),small_fixnum(-1));
	V184= list(4,VV[31],/* INLINE-ARGS */V182,/* INLINE-ARGS */V183,list(2,VV[33],base[2]));
	V185= list(8,VV[31],/* INLINE-ARGS */V164,/* INLINE-ARGS */V171,/* INLINE-ARGS */V173,/* INLINE-ARGS */V177,/* INLINE-ARGS */V181,/* INLINE-ARGS */V184,list(3,VV[5],(V144),small_fixnum(0)));
	V186= list(3,VV[27],(V144),(V148));
	V187= list(3,VV[28],list(2,VV[34],(V146)),(V144));
	V188= list(2,VV[34],(V146));
	V189= list(4,VV[31],/* INLINE-ARGS */V162,/* INLINE-ARGS */V185,list(3,VV[5],(V145),list(4,VV[22],/* INLINE-ARGS */V186,/* INLINE-ARGS */V187,list(3,VV[29],/* INLINE-ARGS */V188,list(3,VV[30],(V144),(V148))))));
	V190= list(2,VV[32],(V145));
	V191= list(3,VV[31],/* INLINE-ARGS */V190,list(2,VV[33],base[2]));
	V192= list(2,(V147),(V150));
	V193= list(2,VV[39],list(2,VV[34],(V145)));
	V194= list(3,VV[60],/* INLINE-ARGS */V192,list(3,VV[38],/* INLINE-ARGS */V193,list(2,VV[34],(V143))));
	V195= list(2,VV[23],list(3,VV[24],(V150),VV[35]));
	V196= list(2,VV[34],(V143));
	V197= list(3,VV[61],/* INLINE-ARGS */V195,list(2,VV[23],list(3,VV[24],/* INLINE-ARGS */V196,list(2,VV[34],(V146)))));
	V198= list(6,VV[40],base[2],/* INLINE-ARGS */V189,/* INLINE-ARGS */V191,/* INLINE-ARGS */V194,list(3,VV[31],/* INLINE-ARGS */V197,list(2,VV[33],base[2])));
	V199= list(2,VV[34],(V145));
	V200= list(4,base[2],Cnil,/* INLINE-ARGS */V198,list(5,VV[63],VV[64],/* INLINE-ARGS */V199,(V150),list(2,VV[34],(V143))));
	V201= make_cons(/* INLINE-ARGS */V200,Cnil);
	base[6]= list(4,VV[1],/* INLINE-ARGS */V160,/* INLINE-ARGS */V161,listA(3,VV[53],/* INLINE-ARGS */V201,append((V151),base[5])));
	vs_top=(vs_base=base+6)+1;
	return;}
}
static object  LnkTLI71(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[71],(void **)(void *)&LnkLI71,1,first,ap);va_end(ap);return V1;} /* PRINT-SYMBOL-APROPOS */
static object  LnkTLI70(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[70],(void **)(void *)&LnkLI70,first,ap);va_end(ap);return V1;} /* APROPOS-LIST */
static void LnkT69(){ call_or_link(VV[69],(void **)(void *)&Lnk69);} /* STABLE-SORT */
static object  LnkTLI67(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[67],(void **)(void *)&LnkLI67,first,ap);va_end(ap);return V1;} /* DELETE-DUPLICATES */
static object  LnkTLI66(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[66],(void **)(void *)&LnkLI66,2,first,ap);va_end(ap);return V1;} /* SUBSTRINGP */
static void LnkT19(){ call_or_link(VV[19],(void **)(void *)&Lnk19);} /* PACKAGE-SIZE */
static void LnkT8(){ call_or_link(VV[8],(void **)(void *)&Lnk8);} /* SPECIFIC-ERROR */
static void LnkT65(){ call_or_link(VV[65],(void **)(void *)&Lnk65);} /* FIND-DECLARATIONS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

