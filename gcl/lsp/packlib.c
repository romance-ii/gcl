
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
	while(!endp(MMcdr(V8)))V8=MMcdr(V8);
	if(endp(V9=MMcdr(V9))){
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
	object V21;
	register object V22;
	object V23;
	object V24;
	object V25;
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
	V25= Cnil;
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk32)();
	if(vs_base<vs_top){
	V25= vs_base[0];
	vs_base++;
	}else{
	V25= Cnil;}
	if(vs_base<vs_top){
	base[5]= vs_base[0];
	}else{
	base[5]= Cnil;}
	vs_top=sup;
	V26= list(3,list(2,(V18),list(2,VV[8],base[3])),base[2],(V20));
	V27= list(2,(V23),(V22));
	V28= list(2,VV[10],(V18));
	V29= list(2,VV[11],list(3,VV[12],(V22),(V23)));
	V30= list(3,VV[14],(V22),(V23));
	V31= list(3,(V19),/* INLINE-ARGS */V30,list(3,VV[15],list(3,VV[16],base[2],Cnil),base[4]));
	V32= list(3,VV[17],(V19),(V22));
	V33= list(3,VV[18],(V18),(V19));
	V34= list(3,VV[16],(V20),list(4,VV[2],/* INLINE-ARGS */V32,/* INLINE-ARGS */V33,list(3,VV[19],(V18),list(3,VV[20],(V19),(V22)))));
	V35= list(2,VV[22],(V20));
	V36= list(3,VV[21],/* INLINE-ARGS */V35,list(2,VV[23],(V24)));
	V37= list(3,VV[16],base[2],list(2,VV[24],(V20)));
	V38= list(3,VV[16],(V20),list(2,VV[25],(V20)));
	V39= list(3,/* INLINE-ARGS */V38,list(2,VV[23],(V21)),(V24));
	V40= list(5,VV[9],/* INLINE-ARGS */V27,/* INLINE-ARGS */V28,/* INLINE-ARGS */V29,listA(7,VV[13],/* INLINE-ARGS */V31,/* INLINE-ARGS */V34,(V21),/* INLINE-ARGS */V36,/* INLINE-ARGS */V37,append(base[5],/* INLINE-ARGS */V39)));
	V41= make_cons(/* INLINE-ARGS */V40,Cnil);
	base[6]= listA(3,VV[1],/* INLINE-ARGS */V26,append((V25),/* INLINE-ARGS */V41));
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
	{object V42=base[0]->c.c_cdr;
	if(endp(V42))invalid_macro_call();
	{object V43= (V42->c.c_car);
	if(endp(V43))invalid_macro_call();
	base[2]= (V43->c.c_car);
	V43=V43->c.c_cdr;
	if(endp(V43)){
	base[3]= VV[0];
	} else {
	base[3]= (V43->c.c_car);
	V43=V43->c.c_cdr;}
	if(endp(V43)){
	base[4]= Cnil;
	} else {
	base[4]= (V43->c.c_car);
	V43=V43->c.c_cdr;}
	if(!endp(V43))invalid_macro_call();}
	V42=V42->c.c_cdr;
	base[5]= V42;}
	{object V44;
	object V45;
	register object V46;
	object V47;
	object V48;
	object V49;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V44= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V45= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V46= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V47= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V48= vs_base[0];
	V49= Cnil;
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk32)();
	if(vs_base<vs_top){
	V49= vs_base[0];
	vs_base++;
	}else{
	V49= Cnil;}
	if(vs_base<vs_top){
	base[5]= vs_base[0];
	}else{
	base[5]= Cnil;}
	vs_top=sup;
	V50= list(3,list(2,(V44),list(2,VV[8],base[3])),base[2],(V46));
	V51= list(2,VV[10],(V44));
	V52= list(3,(V45),/* INLINE-ARGS */V51,list(3,VV[15],list(3,VV[16],base[2],Cnil),base[4]));
	V53= list(3,VV[16],(V46),list(3,VV[19],(V44),(V45)));
	V54= list(2,VV[22],(V46));
	V55= list(3,VV[21],/* INLINE-ARGS */V54,list(2,VV[23],(V48)));
	V56= list(3,VV[16],base[2],list(2,VV[24],(V46)));
	V57= list(3,VV[16],(V46),list(2,VV[25],(V46)));
	V58= list(3,/* INLINE-ARGS */V57,list(2,VV[23],(V47)),(V48));
	V59= listA(7,VV[13],/* INLINE-ARGS */V52,/* INLINE-ARGS */V53,(V47),/* INLINE-ARGS */V55,/* INLINE-ARGS */V56,append(base[5],/* INLINE-ARGS */V58));
	V60= make_cons(/* INLINE-ARGS */V59,Cnil);
	base[6]= listA(3,VV[1],/* INLINE-ARGS */V50,append((V49),/* INLINE-ARGS */V60));
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
	{object V61=base[0]->c.c_cdr;
	if(endp(V61))invalid_macro_call();
	{object V62= (V61->c.c_car);
	if(endp(V62))invalid_macro_call();
	base[2]= (V62->c.c_car);
	V62=V62->c.c_cdr;
	if(endp(V62)){
	base[3]= Cnil;
	} else {
	base[3]= (V62->c.c_car);
	V62=V62->c.c_cdr;}
	if(!endp(V62))invalid_macro_call();}
	V61=V61->c.c_cdr;
	base[4]= V61;}
	V63= list(3,VV[27],VV[28],base[3]);
	base[5]= list(3,VV[26],/* INLINE-ARGS */V63,listA(3,VV[29],list(2,base[2],VV[27]),base[4]));
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function SUBSTRINGP	*/

static object LI6(V66,V67)

register object V66;register object V67;
{	 VMB6 VMS6 VMV6
goto TTL;
TTL:;
	{register object V68;
	register object V69;
	register object V70;
	V71 = make_fixnum(length((V67)));
	V72 = make_fixnum(length((V66)));
	V68= number_minus(V71,V72);
	V69= make_fixnum(length((V66)));
	V70= small_fixnum(0);
goto T49;
T49:;
	if(!(number_compare((V70),(V68))>0)){
	goto T50;}
	{object V73 = Cnil;
	VMR6(V73)}
goto T50;
T50:;
	base[0]= (V66);
	base[1]= (V67);
	base[2]= VV[30];
	base[3]= (V70);
	base[4]= VV[31];
	base[5]= number_plus((V70),(V69));
	vs_top=(vs_base=base+0)+6;
	Lstring_equal();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T54;}
	{object V74 = Ct;
	VMR6(V74)}
goto T54;
T54:;
	V70= one_plus((V70));
	goto T49;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function PRINT-SYMBOL-APROPOS	*/

static object LI7(V76)

register object V76;
{	 VMB7 VMS7 VMV7
goto TTL;
TTL:;
	(void)(prin1((V76),Cnil));
	base[0]= (V76);
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T67;}
	base[0]= (V76);
	vs_top=(vs_base=base+0)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T72;}
	princ_str("  Special form",Cnil);
	goto T67;
goto T72;
T72:;
	base[0]= (V76);
	vs_top=(vs_base=base+0)+1;
	Lmacro_function();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T76;}
	princ_str("  Macro",Cnil);
	goto T67;
goto T76;
T76:;
	princ_str("  Function",Cnil);
goto T67;
T67:;
	base[0]= (V76);
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T79;}
	base[0]= (V76);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T85;}
	princ_str("  Constant: ",Cnil);
	goto T83;
goto T85;
T85:;
	princ_str("  has value: ",Cnil);
goto T83;
T83:;
	base[0]= (V76);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_value();
	vs_top=sup;
	V77= vs_base[0];
	(void)(prin1(V77,Cnil));
goto T79;
T79:;
	{object V78 = terpri(Cnil);
	VMR7(V78)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for APROPOS	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{object V79;
	object V80;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V79=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T90;}
	V80=(base[1]);
	vs_top=sup;
	goto T91;
goto T90;
T90:;
	V80= Cnil;
goto T91;
T91:;
	V79= coerce_to_string((V79));
	if(((V80))==Cnil){
	goto T97;}
	{object V81;
	object V82;
	register object V83;
	base[2]= V80;
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T102;}
	V81= V80;
	goto T100;
goto T102;
T102:;
	base[2]= coerce_to_string(V80);
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V81= vs_base[0];
goto T100;
T100:;
	V82= Cnil;
	V83= Cnil;
	{long V85;
	long V86;
	base[2]= (V81);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk10)();
	if(vs_base>=vs_top){vs_top=sup;goto T108;}
	V85= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T109;}
	V86= fix(vs_base[0]);
	vs_top=sup;
	goto T110;
goto T108;
T108:;
	V85= fix(Cnil);
goto T109;
T109:;
	V86= fix(Cnil);
goto T110;
T110:;
	{object V87;
	object V88;
	V89 = make_fixnum(V86);
	V90 = make_fixnum(V85);
	V87= number_plus(V89,V90);
	V88= small_fixnum(0);
goto T114;
T114:;
	if(!(number_compare((V88),(V87))>=0)){
	goto T115;}
	V82= Cnil;
	goto T99;
goto T115;
T115:;
	V91 = make_fixnum(V86);
	if(!(number_compare((V88),V91)<0)){
	goto T126;}
	base[3]= (V81);
	base[4]= (V88);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V83= vs_base[0];
	goto T124;
goto T126;
T126:;
	base[3]= (V81);
	V92 = make_fixnum(V86);
	base[4]= number_minus((V88),V92);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V83= vs_base[0];
goto T124;
T124:;
goto T122;
T122:;
	if(((V83))!=Cnil){
	goto T132;}
	goto T123;
goto T132;
T132:;
	V82= car((V83));
	V93= coerce_to_string((V82));
	if(((*(LnkLI33))((V79),/* INLINE-ARGS */V93))==Cnil){
	goto T137;}
	(void)((*(LnkLI34))((V82)));
goto T137;
T137:;
	V83= cdr((V83));
	goto T122;
goto T123;
T123:;
	goto T120;
goto T120;
T120:;
	V88= one_plus((V88));
	goto T114;}}}
goto T99;
T99:;
	{object V94;
	base[2]= (V80);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V94= vs_base[0];
goto T148;
T148:;
	if(((V94))!=Cnil){
	goto T149;}
	goto T95;
goto T149;
T149:;
	{object V95;
	register object V96;
	register object V97;
	{object V98;
	V98= car((V94));
	base[2]= (V98);
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T157;}
	V95= (V98);
	goto T154;
goto T157;
T157:;
	base[2]= coerce_to_string((V98));
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V95= vs_base[0];}
goto T154;
T154:;
	V96= Cnil;
	V97= Cnil;
	{object V99;
	object V100;
	base[3]= (V95);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk10)();
	vs_top=sup;
	V99= vs_base[0];
	V100= small_fixnum(0);
goto T165;
T165:;
	if(!(number_compare((V100),(V99))>=0)){
	goto T166;}
	V96= Cnil;
	goto T153;
goto T166;
T166:;
	base[3]= (V95);
	base[4]= (V100);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V97= vs_base[0];
goto T173;
T173:;
	if(((V97))!=Cnil){
	goto T178;}
	goto T174;
goto T178;
T178:;
	V96= car((V97));
	V101= coerce_to_string((V96));
	if(((*(LnkLI33))((V79),/* INLINE-ARGS */V101))==Cnil){
	goto T183;}
	(void)((*(LnkLI34))((V96)));
goto T183;
T183:;
	V97= cdr((V97));
	goto T173;
goto T174;
T174:;
	goto T171;
goto T171;
T171:;
	V100= one_plus((V100));
	goto T165;}}
goto T153;
T153:;
	V94= cdr((V94));
	goto T148;}
goto T97;
T97:;
	{object V102;
	object V103;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V102= vs_base[0];
	V103= car((V102));
goto T197;
T197:;
	if(!(endp((V102)))){
	goto T198;}
	goto T95;
goto T198;
T198:;
	{object V104;
	register object V105;
	register object V106;
	base[4]= V103;
	vs_top=(vs_base=base+4)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T205;}
	V104= V103;
	goto T203;
goto T205;
T205:;
	base[4]= coerce_to_string(V103);
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V104= vs_base[0];
goto T203;
T203:;
	V105= Cnil;
	V106= Cnil;
	{long V108;
	long V109;
	base[4]= (V104);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk10)();
	if(vs_base>=vs_top){vs_top=sup;goto T211;}
	V108= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T212;}
	V109= fix(vs_base[0]);
	vs_top=sup;
	goto T213;
goto T211;
T211:;
	V108= fix(Cnil);
goto T212;
T212:;
	V109= fix(Cnil);
goto T213;
T213:;
	{object V110;
	register object V111;
	V112 = make_fixnum(V109);
	V113 = make_fixnum(V108);
	V110= number_plus(V112,V113);
	V111= small_fixnum(0);
goto T217;
T217:;
	if(!(number_compare((V111),(V110))>=0)){
	goto T218;}
	V105= Cnil;
	goto T202;
goto T218;
T218:;
	V114 = make_fixnum(V109);
	if(!(number_compare((V111),V114)<0)){
	goto T229;}
	base[5]= (V104);
	base[6]= (V111);
	vs_top=(vs_base=base+5)+2;
	siLpackage_internal();
	vs_top=sup;
	V106= vs_base[0];
	goto T227;
goto T229;
T229:;
	base[5]= (V104);
	V115 = make_fixnum(V109);
	base[6]= number_minus((V111),V115);
	vs_top=(vs_base=base+5)+2;
	siLpackage_external();
	vs_top=sup;
	V106= vs_base[0];
goto T227;
T227:;
goto T225;
T225:;
	if(((V106))!=Cnil){
	goto T235;}
	goto T226;
goto T235;
T235:;
	V105= car((V106));
	V116= coerce_to_string((V105));
	if(((*(LnkLI33))((V79),/* INLINE-ARGS */V116))==Cnil){
	goto T240;}
	(void)((*(LnkLI34))((V105)));
goto T240;
T240:;
	V106= cdr((V106));
	goto T225;
goto T226;
T226:;
	goto T223;
goto T223;
T223:;
	V111= one_plus((V111));
	goto T217;}}}
goto T202;
T202:;
	V102= cdr((V102));
	V103= car((V102));
	goto T197;}
goto T95;
T95:;
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;
	}
}
/*	local entry for function APROPOS-LIST	*/

static object LI9(V117,va_alist)
	object V117;
	va_dcl 
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V118;
	object V119;
	Vcs[0]=Vcs[0];
	va_start(ap);
	if(narg <1) too_few_arguments();
	V118= V117;
	narg = narg - 1;
	if (narg <= 0) goto T253;
	else {
	V119= va_arg(ap,object);}
	--narg; goto T254;
goto T253;
T253:;
	V119= Cnil;
goto T254;
T254:;
	{register object V120;
	V120= Cnil;
	V120= Cnil;
	V118= coerce_to_string((V118));
	if(((V119))==Cnil){
	goto T263;}
	{object V121;
	object V122;
	object V123;
	base[0]= V119;
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T268;}
	V121= V119;
	goto T266;
goto T268;
T268:;
	base[0]= coerce_to_string(V119);
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V121= vs_base[0];
goto T266;
T266:;
	V122= Cnil;
	V123= Cnil;
	{long V125;
	long V126;
	base[0]= (V121);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk10)();
	if(vs_base>=vs_top){vs_top=sup;goto T274;}
	V125= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T275;}
	V126= fix(vs_base[0]);
	vs_top=sup;
	goto T276;
goto T274;
T274:;
	V125= fix(Cnil);
goto T275;
T275:;
	V126= fix(Cnil);
goto T276;
T276:;
	{object V127;
	object V128;
	V129 = make_fixnum(V126);
	V130 = make_fixnum(V125);
	V127= number_plus(V129,V130);
	V128= small_fixnum(0);
goto T280;
T280:;
	if(!(number_compare((V128),(V127))>=0)){
	goto T281;}
	V122= Cnil;
	goto T265;
goto T281;
T281:;
	V131 = make_fixnum(V126);
	if(!(number_compare((V128),V131)<0)){
	goto T292;}
	base[1]= (V121);
	base[2]= (V128);
	vs_top=(vs_base=base+1)+2;
	siLpackage_internal();
	vs_top=sup;
	V123= vs_base[0];
	goto T290;
goto T292;
T292:;
	base[1]= (V121);
	V132 = make_fixnum(V126);
	base[2]= number_minus((V128),V132);
	vs_top=(vs_base=base+1)+2;
	siLpackage_external();
	vs_top=sup;
	V123= vs_base[0];
goto T290;
T290:;
goto T288;
T288:;
	if(((V123))!=Cnil){
	goto T298;}
	goto T289;
goto T298;
T298:;
	V122= car((V123));
	V133= coerce_to_string((V122));
	if(((*(LnkLI33))((V118),/* INLINE-ARGS */V133))==Cnil){
	goto T303;}
	V120= make_cons((V122),(V120));
goto T303;
T303:;
	V123= cdr((V123));
	goto T288;
goto T289;
T289:;
	goto T286;
goto T286;
T286:;
	V128= one_plus((V128));
	goto T280;}}}
goto T265;
T265:;
	{object V134;
	base[0]= (V119);
	vs_top=(vs_base=base+0)+1;
	Lpackage_use_list();
	vs_top=sup;
	V134= vs_base[0];
goto T315;
T315:;
	if(((V134))!=Cnil){
	goto T316;}
	goto T261;
goto T316;
T316:;
	{object V135;
	register object V136;
	register object V137;
	{object V138;
	V138= car((V134));
	base[0]= (V138);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T324;}
	V135= (V138);
	goto T321;
goto T324;
T324:;
	base[0]= coerce_to_string((V138));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V135= vs_base[0];}
goto T321;
T321:;
	V136= Cnil;
	V137= Cnil;
	{long V139;
	long V140;
	base[0]= (V135);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk10)();
	if(vs_base>=vs_top){vs_top=sup;goto T330;}
	V139= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T331;}
	V140= fix(vs_base[0]);
	vs_top=sup;
	goto T332;
goto T330;
T330:;
	V139= fix(Cnil);
goto T331;
T331:;
	V140= fix(Cnil);
goto T332;
T332:;
	{object V141;
	register object V142;
	V143 = make_fixnum(V140);
	V144 = make_fixnum(V139);
	V141= number_plus(V143,V144);
	V142= small_fixnum(0);
goto T336;
T336:;
	if(!(number_compare((V142),(V141))>=0)){
	goto T337;}
	V136= Cnil;
	goto T320;
goto T337;
T337:;
	V145 = make_fixnum(V140);
	if(!(number_compare((V142),V145)<0)){
	goto T348;}
	base[1]= (V135);
	base[2]= (V142);
	vs_top=(vs_base=base+1)+2;
	siLpackage_internal();
	vs_top=sup;
	V137= vs_base[0];
	goto T346;
goto T348;
T348:;
	base[1]= (V135);
	V146 = make_fixnum(V140);
	base[2]= number_minus((V142),V146);
	vs_top=(vs_base=base+1)+2;
	siLpackage_external();
	vs_top=sup;
	V137= vs_base[0];
goto T346;
T346:;
goto T344;
T344:;
	if(((V137))!=Cnil){
	goto T354;}
	goto T345;
goto T354;
T354:;
	V136= car((V137));
	V147= coerce_to_string((V136));
	if(((*(LnkLI33))((V118),/* INLINE-ARGS */V147))==Cnil){
	goto T359;}
	V120= make_cons((V136),(V120));
goto T359;
T359:;
	V137= cdr((V137));
	goto T344;
goto T345;
T345:;
	goto T342;
goto T342;
T342:;
	V142= one_plus((V142));
	goto T336;}}}
goto T320;
T320:;
	V134= cdr((V134));
	goto T315;}
goto T263;
T263:;
	{object V148;
	object V149;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V148= vs_base[0];
	V149= car((V148));
goto T374;
T374:;
	if(!(endp((V148)))){
	goto T375;}
	goto T261;
goto T375;
T375:;
	{object V150;
	register object V151;
	register object V152;
	base[2]= V149;
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T382;}
	V150= V149;
	goto T380;
goto T382;
T382:;
	base[2]= coerce_to_string(V149);
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V150= vs_base[0];
goto T380;
T380:;
	V151= Cnil;
	V152= Cnil;
	{long V154;
	long V155;
	base[2]= (V150);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk10)();
	if(vs_base>=vs_top){vs_top=sup;goto T388;}
	V154= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T389;}
	V155= fix(vs_base[0]);
	vs_top=sup;
	goto T390;
goto T388;
T388:;
	V154= fix(Cnil);
goto T389;
T389:;
	V155= fix(Cnil);
goto T390;
T390:;
	{object V156;
	register object V157;
	V158 = make_fixnum(V155);
	V159 = make_fixnum(V154);
	V156= number_plus(V158,V159);
	V157= small_fixnum(0);
goto T394;
T394:;
	if(!(number_compare((V157),(V156))>=0)){
	goto T395;}
	V151= Cnil;
	goto T379;
goto T395;
T395:;
	V160 = make_fixnum(V155);
	if(!(number_compare((V157),V160)<0)){
	goto T406;}
	base[3]= (V150);
	base[4]= (V157);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V152= vs_base[0];
	goto T404;
goto T406;
T406:;
	base[3]= (V150);
	V161 = make_fixnum(V155);
	base[4]= number_minus((V157),V161);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V152= vs_base[0];
goto T404;
T404:;
goto T402;
T402:;
	if(((V152))!=Cnil){
	goto T412;}
	goto T403;
goto T412;
T412:;
	V151= car((V152));
	V162= coerce_to_string((V151));
	if(((*(LnkLI33))((V118),/* INLINE-ARGS */V162))==Cnil){
	goto T417;}
	V120= make_cons((V151),(V120));
goto T417;
T417:;
	V152= cdr((V152));
	goto T402;
goto T403;
T403:;
	goto T400;
goto T400;
T400:;
	V157= one_plus((V157));
	goto T394;}}}
goto T379;
T379:;
	V148= cdr((V148));
	V149= car((V148));
	goto T374;}
goto T261;
T261:;
	{object V163 = (V120);
	VMR9(V163)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
static object  LnkTLI34(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[34],(void **)&LnkLI34,1,ap);} /* PRINT-SYMBOL-APROPOS */
static object  LnkTLI33(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[33],(void **)&LnkLI33,2,ap);} /* SUBSTRINGP */
static void LnkT10(){ call_or_link(VV[10],(void **)&Lnk10);} /* PACKAGE-SIZE */
static void LnkT32(){ call_or_link(VV[32],(void **)&Lnk32);} /* FIND-DECLARATIONS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

