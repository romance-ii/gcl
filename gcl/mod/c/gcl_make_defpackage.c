
#include "cmpinclude.h"
#include "gcl_make_defpackage.h"
void init_gcl_make_defpackage(){do_init(VV);}
/*	local entry for function MAKE-DEFPACKAGE-FORM	*/

static object LI1(V2)

object V2;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	{object V3;
	base[0]= (V2);
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V3= vs_base[0];
	{object V4;
	object V5;
	object V6;
	object V7;
	object V8;
	object V9;
	object V10;
	object V11;
	object V12;
	object V13;
	base[5]= (V3);
	vs_top=(vs_base=base+5)+1;
	Lpackage_name();
	vs_top=sup;
	V4= vs_base[0];
	base[5]= (V3);
	vs_top=(vs_base=base+5)+1;
	Lpackage_nicknames();
	vs_top=sup;
	V5= vs_base[0];
	base[5]= (V3);
	vs_top=(vs_base=base+5)+1;
	Lpackage_use_list();
	vs_top=sup;
	V6= vs_base[0];
	{object V14;
	object V15= (V6);
	if(V15==Cnil){
	V7= Cnil;
	goto T9;}
	base[5]=V14=MMcons(Cnil,Cnil);
	goto T10;
T10:;
	base[6]= (V15->c.c_car);
	vs_top=(vs_base=base+6)+1;
	Lpackage_name();
	vs_top=sup;
	(V14->c.c_car)= vs_base[0];
	if((V15=MMcdr(V15))==Cnil){
	V7= base[5];
	goto T9;}
	V14=MMcdr(V14)=MMcons(Cnil,Cnil);
	goto T10;}
	goto T9;
T9:;
	V8= Cnil;
	base[5]= (V3);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk10)();
	vs_top=sup;
	V9= vs_base[0];
	V10= Cnil;
	V11= Cnil;
	V12= Cnil;
	V13= Cnil;
	{object V16;
	object V17;
	register object V18;
	{object V19;
	V19= (V3);
	base[5]= (V19);
	vs_top=(vs_base=base+5)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T22;}
	base[5]= coerce_to_string((V19));
	vs_top=(vs_base=base+5)+1;
	Lfind_package();
	vs_top=sup;
	V19= vs_base[0];
	if(((V19))!=Cnil){
	goto T22;}
	base[5]= VV[0];
	base[6]= VV[1];
	base[7]= (V3);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk11)();
	vs_top=sup;
	goto T22;
T22:;
	V16= (V19);}
	V17= Cnil;
	V18= Cnil;
	{object V20;
	object V21;
	base[6]= (V16);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk12)();
	vs_top=sup;
	V20= vs_base[0];
	V21= small_fixnum(0);
	goto T37;
T37:;
	if(!(number_compare((V21),(V20))>=0)){
	goto T38;}
	V17= Cnil;
	goto T20;
	goto T38;
T38:;
	base[6]= (V16);
	base[7]= (V21);
	vs_top=(vs_base=base+6)+2;
	siLpackage_external();
	vs_top=sup;
	V18= vs_base[0];
	goto T45;
T45:;
	if(((V18))!=Cnil){
	goto T50;}
	goto T46;
	goto T50;
T50:;
	V17= CMPcar((V18));
	{object V22;
	V22= symbol_name((V17));
	V8= make_cons((V22),(V8));}
	V18= CMPcdr((V18));
	goto T45;
	goto T46;
T46:;
	goto T43;
	goto T43;
T43:;
	V21= one_plus((V21));
	goto T37;}}
	goto T20;
T20:;
	{register object V23;
	register object V24;
	register object V25;
	{object V26;
	V26= (V3);
	base[5]= (V26);
	vs_top=(vs_base=base+5)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T65;}
	base[5]= coerce_to_string((V26));
	vs_top=(vs_base=base+5)+1;
	Lfind_package();
	vs_top=sup;
	V26= vs_base[0];
	if(((V26))!=Cnil){
	goto T65;}
	base[5]= VV[0];
	base[6]= VV[1];
	base[7]= (V3);
	vs_top=(vs_base=base+5)+3;
	(void) (*Lnk11)();
	vs_top=sup;
	goto T65;
T65:;
	V23= (V26);}
	V24= Cnil;
	V25= Cnil;
	{object V27;
	register object V28;
	base[7]= (V23);
	vs_top=(vs_base=base+7)+1;
	Lpackage_use_list();
	vs_top=sup;
	V29= vs_base[0];
	V27= make_cons((V23),V29);
	V28= CMPcar((V27));
	goto T81;
T81:;
	if(!(((V27))==Cnil)){
	goto T82;}
	V24= Cnil;
	goto T63;
	goto T82;
T82:;
	{long V30;
	long V31;
	base[7]= (V28);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk12)();
	if(vs_base>=vs_top){vs_top=sup;goto T91;}
	V30= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T92;}
	V31= fix(vs_base[0]);
	vs_top=sup;
	goto T93;
	goto T91;
T91:;
	V30= fix(Cnil);
	goto T92;
T92:;
	V31= fix(Cnil);
	goto T93;
T93:;
	if(((V23))==((V28))){
	goto T94;}
	V31= 0;
	goto T94;
T94:;
	{object V32;
	register object V33;
	V34 = CMPmake_fixnum(V31);
	V35 = CMPmake_fixnum(V30);
	V32= number_plus(V34,V35);
	V33= small_fixnum(0);
	goto T101;
T101:;
	if(!(number_compare((V33),(V32))>=0)){
	goto T102;}
	goto T88;
	goto T102;
T102:;
	V36 = CMPmake_fixnum(V31);
	if(!(number_compare((V33),V36)<0)){
	goto T111;}
	base[8]= (V28);
	base[9]= (V33);
	vs_top=(vs_base=base+8)+2;
	siLpackage_internal();
	vs_top=sup;
	V25= vs_base[0];
	goto T109;
	goto T111;
T111:;
	base[8]= (V28);
	V37 = CMPmake_fixnum(V31);
	base[9]= number_minus((V33),V37);
	vs_top=(vs_base=base+8)+2;
	siLpackage_external();
	vs_top=sup;
	V25= vs_base[0];
	goto T109;
T109:;
	goto T107;
T107:;
	if(((V25))!=Cnil){
	goto T117;}
	goto T108;
	goto T117;
T117:;
	V24= CMPcar((V25));
	if(((V28))==((V23))){
	goto T123;}
	base[9]= symbol_name((V24));
	base[10]= (V23);
	vs_top=(vs_base=base+9)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+8)+1;
	Llast();
	vs_top=sup;
	V38= vs_base[0];
	if(!((VV[2])==(CMPcar(V38)))){
	goto T122;}
	goto T123;
T123:;
	base[8]= (V24);
	vs_top=(vs_base=base+8)+1;
	Lsymbol_package();
	vs_top=sup;
	V39= vs_base[0];
	if(((V3))==(V39)){
	goto T132;}
	base[9]= (V24);
	vs_top=(vs_base=base+9)+1;
	Lsymbol_package();
	vs_top=sup;
	base[8]= vs_base[0];
	base[9]= (V6);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk13)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T132;}
	V10= make_cons(V24,(V10));
	goto T132;
T132:;
	goto T122;
T122:;
	V25= CMPcdr((V25));
	goto T107;
	goto T108;
T108:;
	goto T105;
	goto T105;
T105:;
	V33= one_plus((V33));
	goto T101;}}
	goto T88;
T88:;
	V27= CMPcdr((V27));
	V28= CMPcar((V27));
	goto T81;}}
	goto T63;
T63:;
	base[5]= (V9);
	base[6]= (V10);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk14)();
	vs_top=sup;
	V11= vs_base[0];
	base[5]= (V9);
	base[6]= (V11);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk15)();
	vs_top=sup;
	V12= vs_base[0];
	base[5]= (V10);
	base[6]= (V11);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk15)();
	vs_top=sup;
	V13= vs_base[0];
	if(((V5))==Cnil){
	goto T168;}
	V42= make_cons(VV[4],(V5));
	base[5]= make_cons(/* INLINE-ARGS */V42,Cnil);
	goto T166;
	goto T168;
T168:;
	base[5]= Cnil;
	goto T166;
T166:;
	if(((V7))==Cnil){
	goto T172;}
	V43= make_cons(VV[5],(V7));
	base[6]= make_cons(/* INLINE-ARGS */V43,Cnil);
	goto T170;
	goto T172;
T172:;
	base[6]= Cnil;
	goto T170;
T170:;
	if(((V8))==Cnil){
	goto T176;}
	V44= make_cons(VV[6],(V8));
	base[7]= make_cons(/* INLINE-ARGS */V44,Cnil);
	goto T174;
	goto T176;
T176:;
	base[7]= Cnil;
	goto T174;
T174:;
	if(((V12))==Cnil){
	goto T180;}
	{object V46;
	object V47= (V12);
	if(V47==Cnil){
	V45= Cnil;
	goto T182;}
	base[9]=V46=MMcons(Cnil,Cnil);
	goto T183;
T183:;
	(V46->c.c_car)= symbol_name((V47->c.c_car));
	if((V47=MMcdr(V47))==Cnil){
	V45= base[9];
	goto T182;}
	V46=MMcdr(V46)=MMcons(Cnil,Cnil);
	goto T183;}
	goto T182;
T182:;
	V48= make_cons(VV[7],V45);
	base[8]= make_cons(/* INLINE-ARGS */V48,Cnil);
	goto T178;
	goto T180;
T180:;
	base[8]= Cnil;
	goto T178;
T178:;
	if(((V11))==Cnil){
	goto T187;}
	{object V49;
	object V50= (V11);
	if(V50==Cnil){
	base[9]= Cnil;
	goto T185;}
	base[10]=V49=MMcons(Cnil,Cnil);
	goto T189;
T189:;
	base[12]= (V50->c.c_car);
	vs_top=(vs_base=base+12)+1;
	Lsymbol_package();
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+11)+1;
	Lpackage_name();
	vs_top=sup;
	V52= vs_base[0];
	V53= list(3,VV[8],V52,symbol_name((V50->c.c_car)));
	(V49->c.c_car)= make_cons(/* INLINE-ARGS */V53,Cnil);
	if((V50=MMcdr(V50))==Cnil){
	base[9]= base[10];
	goto T185;}
	V49=MMcdr(V49)=MMcons(Cnil,Cnil);
	goto T189;}
	goto T187;
T187:;
	base[9]= Cnil;
	goto T185;
T185:;
	if(((V13))==Cnil){
	goto T196;}
	{object V54;
	object V55= (V13);
	if(V55==Cnil){
	base[10]= Cnil;
	goto T194;}
	base[11]=V54=MMcons(Cnil,Cnil);
	goto T198;
T198:;
	base[13]= (V55->c.c_car);
	vs_top=(vs_base=base+13)+1;
	Lsymbol_package();
	vs_top=sup;
	base[12]= vs_base[0];
	vs_top=(vs_base=base+12)+1;
	Lpackage_name();
	vs_top=sup;
	V57= vs_base[0];
	V58= list(3,VV[9],V57,symbol_name((V55->c.c_car)));
	(V54->c.c_car)= make_cons(/* INLINE-ARGS */V58,Cnil);
	if((V55=MMcdr(V55))==Cnil){
	base[10]= base[11];
	goto T194;}
	V54=MMcdr(V54)=MMcons(Cnil,Cnil);
	goto T198;}
	goto T196;
T196:;
	base[10]= Cnil;
	goto T194;
T194:;
	vs_top=(vs_base=base+5)+6;
	Lappend();
	vs_top=sup;
	V41= vs_base[0];
	{object V59 = listA(3,VV[3],(V4),V41);
	VMR1(V59)}}}
	base[0]=base[0];
	return Cnil;
}
static void LnkT15(){ call_or_link(VV[15],(void **)(void *)&Lnk15);} /* SET-DIFFERENCE */
static void LnkT14(){ call_or_link(VV[14],(void **)(void *)&Lnk14);} /* INTERSECTION */
static void LnkT13(){ call_or_link(VV[13],(void **)(void *)&Lnk13);} /* FIND */
static void LnkT12(){ call_or_link(VV[12],(void **)(void *)&Lnk12);} /* PACKAGE-SIZE */
static void LnkT11(){ call_or_link(VV[11],(void **)(void *)&Lnk11);} /* SPECIFIC-ERROR */
static void LnkT10(){ call_or_link(VV[10],(void **)(void *)&Lnk10);} /* PACKAGE-SHADOWING-SYMBOLS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

