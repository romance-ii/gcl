
#include <cmpinclude.h>
#include "make_defpackage.h"
init_make_defpackage(){do_init(VV);}
/*	function definition for MAKE-DEFPACKAGE-FORM	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	{object V1;
	V1=(base[0]);
	vs_top=sup;
TTL:;
	{object V2;
	base[1]= (V1);
	vs_top=(vs_base=base+1)+1;
	Lfind_package();
	vs_top=sup;
	V2= vs_base[0];
	{object V3;
	object V4;
	object V5;
	object V6;
	register object V7;
	object V8;
	register object V9;
	object V10;
	object V11;
	object V12;
	base[6]= (V2);
	vs_top=(vs_base=base+6)+1;
	Lpackage_name();
	vs_top=sup;
	V3= vs_base[0];
	base[6]= (V2);
	vs_top=(vs_base=base+6)+1;
	Lpackage_nicknames();
	vs_top=sup;
	V4= vs_base[0];
	base[6]= (V2);
	vs_top=(vs_base=base+6)+1;
	Lpackage_use_list();
	vs_top=sup;
	V5= vs_base[0];
	{object V13;
	object V14= (V5);
	if(V14==Cnil){
	V6= Cnil;
	goto T9;}
	base[6]=V13=MMcons(Cnil,Cnil);
T10:;
	base[7]= (V14->c.c_car);
	vs_top=(vs_base=base+7)+1;
	Lpackage_name();
	vs_top=sup;
	(V13->c.c_car)= vs_base[0];
	if((V14=MMcdr(V14))==Cnil){
	V6= base[6];
	goto T9;}
	V13=MMcdr(V13)=MMcons(Cnil,Cnil);
	goto T10;}
T9:;
	V7= Cnil;
	base[6]= (V2);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk7)();
	vs_top=sup;
	V8= vs_base[0];
	V9= Cnil;
	V10= Cnil;
	V11= Cnil;
	V12= Cnil;
	{object V15;
	register object V16;
	register object V17;
	base[6]= V2;
	vs_top=(vs_base=base+6)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T23;}
	V15= V2;
	goto T21;
T23:;
	base[6]= coerce_to_string(V2);
	vs_top=(vs_base=base+6)+1;
	Lfind_package();
	vs_top=sup;
	V15= vs_base[0];
T21:;
	V16= Cnil;
	V17= Cnil;
	{object V19;
	register object V20;
	base[7]= (V15);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk8)();
	vs_top=sup;
	V19= vs_base[0];
	V20= small_fixnum(0);
T31:;
	if(!(number_compare((V20),(V19))>=0)){
	goto T32;}
	V16= Cnil;
	goto T20;
T32:;
	base[7]= (V15);
	base[8]= (V20);
	vs_top=(vs_base=base+7)+2;
	siLpackage_external();
	vs_top=sup;
	V17= vs_base[0];
T39:;
	if(((V17))!=Cnil){
	goto T44;}
	goto T40;
T44:;
	V16= CMPcar((V17));
	V21= symbol_name((V16));
	V7= make_cons(/* INLINE-ARGS */V21,(V7));
	V17= CMPcdr((V17));
	goto T39;
T40:;
	goto T37;
T37:;
	V20= one_plus((V20));
	goto T31;}}
T20:;
	{object V22;
	register object V23;
	register object V24;
	base[6]= V2;
	vs_top=(vs_base=base+6)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T59;}
	V22= V2;
	goto T57;
T59:;
	base[6]= coerce_to_string(V2);
	vs_top=(vs_base=base+6)+1;
	Lfind_package();
	vs_top=sup;
	V22= vs_base[0];
T57:;
	V23= Cnil;
	V24= Cnil;
	{int V26;
	int V27;
	base[6]= (V22);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk8)();
	if(vs_base>=vs_top){vs_top=sup;goto T65;}
	V26= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T66;}
	V27= fix(vs_base[0]);
	vs_top=sup;
	goto T67;
T65:;
	V26= fix(Cnil);
T66:;
	V27= fix(Cnil);
T67:;
	{object V28;
	register object V29;
	V30 = CMPmake_fixnum(V27);
	V31 = CMPmake_fixnum(V26);
	V28= number_plus(V30,V31);
	V29= small_fixnum(0);
T71:;
	if(!(number_compare((V29),(V28))>=0)){
	goto T72;}
	V23= Cnil;
	goto T56;
T72:;
	V32 = CMPmake_fixnum(V27);
	if(!(number_compare((V29),V32)<0)){
	goto T83;}
	base[7]= (V22);
	base[8]= (V29);
	vs_top=(vs_base=base+7)+2;
	siLpackage_internal();
	vs_top=sup;
	V24= vs_base[0];
	goto T81;
T83:;
	base[7]= (V22);
	V33 = CMPmake_fixnum(V27);
	base[8]= number_minus((V29),V33);
	vs_top=(vs_base=base+7)+2;
	siLpackage_external();
	vs_top=sup;
	V24= vs_base[0];
T81:;
T79:;
	if(((V24))!=Cnil){
	goto T89;}
	goto T80;
T89:;
	V23= CMPcar((V24));
	base[7]= (V23);
	vs_top=(vs_base=base+7)+1;
	Lsymbol_package();
	vs_top=sup;
	V34= vs_base[0];
	if(((V2))==(V34)){
	goto T94;}
	base[8]= (V23);
	vs_top=(vs_base=base+8)+1;
	Lsymbol_package();
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= (V5);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk9)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T94;}
	V9= make_cons((V23),(V9));
T94:;
	V24= CMPcdr((V24));
	goto T79;
T80:;
	goto T77;
T77:;
	V29= one_plus((V29));
	goto T71;}}}
T56:;
	base[6]= (V8);
	base[7]= (V9);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk10)();
	vs_top=sup;
	V10= vs_base[0];
	base[6]= (V8);
	base[7]= (V10);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk11)();
	vs_top=sup;
	V11= vs_base[0];
	base[6]= (V9);
	base[7]= (V10);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk11)();
	vs_top=sup;
	V12= vs_base[0];
	if(((V4))==Cnil){
	goto T125;}
	V36= make_cons(VV[1],(V4));
	base[6]= make_cons(/* INLINE-ARGS */V36,Cnil);
	goto T123;
T125:;
	base[6]= Cnil;
T123:;
	if(((V6))==Cnil){
	goto T129;}
	V37= make_cons(VV[2],(V6));
	base[7]= make_cons(/* INLINE-ARGS */V37,Cnil);
	goto T127;
T129:;
	base[7]= Cnil;
T127:;
	if(((V7))==Cnil){
	goto T133;}
	V38= make_cons(VV[3],(V7));
	base[8]= make_cons(/* INLINE-ARGS */V38,Cnil);
	goto T131;
T133:;
	base[8]= Cnil;
T131:;
	if(((V11))==Cnil){
	goto T137;}
	{object V40;
	object V41= (V11);
	if(V41==Cnil){
	V39= Cnil;
	goto T139;}
	base[10]=V40=MMcons(Cnil,Cnil);
T140:;
	(V40->c.c_car)= symbol_name((V41->c.c_car));
	if((V41=MMcdr(V41))==Cnil){
	V39= base[10];
	goto T139;}
	V40=MMcdr(V40)=MMcons(Cnil,Cnil);
	goto T140;}
T139:;
	V42= make_cons(VV[4],V39);
	base[9]= make_cons(/* INLINE-ARGS */V42,Cnil);
	goto T135;
T137:;
	base[9]= Cnil;
T135:;
	if(((V10))==Cnil){
	goto T144;}
	{object V43;
	object V44= (V10);
	if(V44==Cnil){
	base[10]= Cnil;
	goto T142;}
	base[11]=V43=MMcons(Cnil,Cnil);
T146:;
	base[13]= (V44->c.c_car);
	vs_top=(vs_base=base+13)+1;
	Lsymbol_package();
	vs_top=sup;
	base[12]= vs_base[0];
	vs_top=(vs_base=base+12)+1;
	Lpackage_name();
	vs_top=sup;
	V46= vs_base[0];
	V47= list(3,VV[5],V46,symbol_name((V44->c.c_car)));
	(V43->c.c_car)= make_cons(/* INLINE-ARGS */V47,Cnil);
	if((V44=MMcdr(V44))==Cnil){
	base[10]= base[11];
	goto T142;}
	V43=MMcdr(V43)=MMcons(Cnil,Cnil);
	goto T146;}
T144:;
	base[10]= Cnil;
T142:;
	if(((V12))==Cnil){
	goto T153;}
	{object V48;
	object V49= (V12);
	if(V49==Cnil){
	base[11]= Cnil;
	goto T151;}
	base[12]=V48=MMcons(Cnil,Cnil);
T155:;
	base[14]= (V49->c.c_car);
	vs_top=(vs_base=base+14)+1;
	Lsymbol_package();
	vs_top=sup;
	base[13]= vs_base[0];
	vs_top=(vs_base=base+13)+1;
	Lpackage_name();
	vs_top=sup;
	V51= vs_base[0];
	V52= list(3,VV[6],V51,symbol_name((V49->c.c_car)));
	(V48->c.c_car)= make_cons(/* INLINE-ARGS */V52,Cnil);
	if((V49=MMcdr(V49))==Cnil){
	base[11]= base[12];
	goto T151;}
	V48=MMcdr(V48)=MMcons(Cnil,Cnil);
	goto T155;}
T153:;
	base[11]= Cnil;
T151:;
	vs_top=(vs_base=base+6)+6;
	Lappend();
	vs_top=sup;
	V35= vs_base[0];
	base[6]= listA(3,VV[0],(V3),V35);
	vs_top=(vs_base=base+6)+1;
	return;}}
	}
}
static LnkT11(){ call_or_link(VV[11],&Lnk11);} /* SET-DIFFERENCE */
static LnkT10(){ call_or_link(VV[10],&Lnk10);} /* INTERSECTION */
static LnkT9(){ call_or_link(VV[9],&Lnk9);} /* FIND */
static LnkT8(){ call_or_link(VV[8],&Lnk8);} /* PACKAGE-SIZE */
static LnkT7(){ call_or_link(VV[7],&Lnk7);} /* PACKAGE-SHADOWING-SYMBOLS */
