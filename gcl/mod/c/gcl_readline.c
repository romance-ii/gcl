
#include "cmpinclude.h"
#include "gcl_readline.h"
void init_gcl_readline(){do_init(VV);}
/*	function definition for INIT-READLINE	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2;}
	{object V1;
	V1= Cnil;
	{object V2;
	register object V3;
	register object V4;
	{object V5;
	base[0]= VV[1];
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V5= vs_base[0];
	base[0]= (V5);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T10;}
	base[0]= coerce_to_string((V5));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V5= vs_base[0];
	if(((V5))!=Cnil){
	goto T10;}
	base[0]= VV[2];
	base[1]= VV[3];
	base[3]= VV[1];
	vs_top=(vs_base=base+3)+1;
	Lfind_package();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk8)();
	vs_top=sup;
	goto T10;
T10:;
	V2= (V5);}
	V3= Cnil;
	V4= Cnil;
	{object V6;
	object V7;
	base[2]= (V2);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V8= vs_base[0];
	V6= make_cons((V2),V8);
	V7= CMPcar((V6));
	goto T27;
T27:;
	if(!(((V6))==Cnil)){
	goto T28;}
	V3= Cnil;
	goto T6;
	goto T28;
T28:;
	{long V9;
	long V10;
	base[2]= (V7);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk9)();
	if(vs_base>=vs_top){vs_top=sup;goto T37;}
	V9= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T38;}
	V10= fix(vs_base[0]);
	vs_top=sup;
	goto T39;
	goto T37;
T37:;
	V9= fix(Cnil);
	goto T38;
T38:;
	V10= fix(Cnil);
	goto T39;
T39:;
	if(((V2))==((V7))){
	goto T40;}
	V10= 0;
	goto T40;
T40:;
	{object V11;
	register object V12;
	V13 = CMPmake_fixnum(V10);
	V14 = CMPmake_fixnum(V9);
	V11= number_plus(V13,V14);
	V12= small_fixnum(0);
	goto T47;
T47:;
	if(!(number_compare((V12),(V11))>=0)){
	goto T48;}
	goto T34;
	goto T48;
T48:;
	V15 = CMPmake_fixnum(V10);
	if(!(number_compare((V12),V15)<0)){
	goto T57;}
	base[3]= (V7);
	base[4]= (V12);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V4= vs_base[0];
	goto T55;
	goto T57;
T57:;
	base[3]= (V7);
	V16 = CMPmake_fixnum(V10);
	base[4]= number_minus((V12),V16);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V4= vs_base[0];
	goto T55;
T55:;
	goto T53;
T53:;
	if(((V4))!=Cnil){
	goto T63;}
	goto T54;
	goto T63;
T63:;
	V3= CMPcar((V4));
	if(((V7))==((V2))){
	goto T69;}
	base[4]= symbol_name((V3));
	base[5]= (V2);
	vs_top=(vs_base=base+4)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V17= vs_base[0];
	if(!((VV[4])==(CMPcar(V17)))){
	goto T68;}
	goto T69;
T69:;
	if(((V3))->s.s_dbind!=OBJNULL){
	goto T79;}
	base[3]= (V3);
	vs_top=(vs_base=base+3)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T78;}
	goto T79;
T79:;
	V18= symbol_name((V3));
	V1= make_cons(/* INLINE-ARGS */V18,(V1));
	goto T78;
T78:;
	goto T68;
T68:;
	V4= CMPcdr((V4));
	goto T53;
	goto T54;
T54:;
	goto T51;
	goto T51;
T51:;
	V12= one_plus((V12));
	goto T47;}}
	goto T34;
T34:;
	V6= CMPcdr((V6));
	V7= CMPcar((V6));
	goto T27;}}
	goto T6;
T6:;
	goto T5;
	goto T5;
T5:;
	{object V19;
	register object V20;
	register object V21;
	{object V22;
	base[0]= VV[5];
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V22= vs_base[0];
	base[0]= (V22);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T101;}
	base[0]= coerce_to_string((V22));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V22= vs_base[0];
	if(((V22))!=Cnil){
	goto T101;}
	base[0]= VV[2];
	base[1]= VV[3];
	base[3]= VV[5];
	vs_top=(vs_base=base+3)+1;
	Lfind_package();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk8)();
	vs_top=sup;
	goto T101;
T101:;
	V19= (V22);}
	V20= Cnil;
	V21= Cnil;
	{object V23;
	object V24;
	base[2]= (V19);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V25= vs_base[0];
	V23= make_cons((V19),V25);
	V24= CMPcar((V23));
	goto T118;
T118:;
	if(!(((V23))==Cnil)){
	goto T119;}
	V20= Cnil;
	goto T97;
	goto T119;
T119:;
	{long V26;
	long V27;
	base[2]= (V24);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk9)();
	if(vs_base>=vs_top){vs_top=sup;goto T128;}
	V26= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T129;}
	V27= fix(vs_base[0]);
	vs_top=sup;
	goto T130;
	goto T128;
T128:;
	V26= fix(Cnil);
	goto T129;
T129:;
	V27= fix(Cnil);
	goto T130;
T130:;
	if(((V19))==((V24))){
	goto T131;}
	V27= 0;
	goto T131;
T131:;
	{object V28;
	register object V29;
	V30 = CMPmake_fixnum(V27);
	V31 = CMPmake_fixnum(V26);
	V28= number_plus(V30,V31);
	V29= small_fixnum(0);
	goto T138;
T138:;
	if(!(number_compare((V29),(V28))>=0)){
	goto T139;}
	goto T125;
	goto T139;
T139:;
	V32 = CMPmake_fixnum(V27);
	if(!(number_compare((V29),V32)<0)){
	goto T148;}
	base[3]= (V24);
	base[4]= (V29);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V21= vs_base[0];
	goto T146;
	goto T148;
T148:;
	base[3]= (V24);
	V33 = CMPmake_fixnum(V27);
	base[4]= number_minus((V29),V33);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V21= vs_base[0];
	goto T146;
T146:;
	goto T144;
T144:;
	if(((V21))!=Cnil){
	goto T154;}
	goto T145;
	goto T154;
T154:;
	V20= CMPcar((V21));
	if(((V24))==((V19))){
	goto T160;}
	base[4]= symbol_name((V20));
	base[5]= (V19);
	vs_top=(vs_base=base+4)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V34= vs_base[0];
	if(!((VV[4])==(CMPcar(V34)))){
	goto T159;}
	goto T160;
T160:;
	if(((V20))->s.s_dbind!=OBJNULL){
	goto T170;}
	base[3]= (V20);
	vs_top=(vs_base=base+3)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T169;}
	goto T170;
T170:;
	base[3]= Cnil;
	base[4]= VV[6];
	base[5]= (V20);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	V35= vs_base[0];
	V1= make_cons(V35,(V1));
	goto T169;
T169:;
	goto T159;
T159:;
	V21= CMPcdr((V21));
	goto T144;
	goto T145;
T145:;
	goto T142;
	goto T142;
T142:;
	V29= one_plus((V29));
	goto T138;}}
	goto T125;
T125:;
	V23= CMPcdr((V23));
	V24= CMPcar((V23));
	goto T118;}}
	goto T97;
T97:;
	goto T96;
	goto T96;
T96:;
	base[0]= Ct;
	base[1]= VV[7];
	base[2]= small_fixnum(1);
	base[3]= (V1);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk0)();
	return;}
	goto T2;
T2:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
static void LnkT0(){ call_or_link(VV[0],(void **)(void *)&Lnk0);} /* READLINE-INIT */
static void LnkT9(){ call_or_link(VV[9],(void **)(void *)&Lnk9);} /* PACKAGE-SIZE */
static void LnkT8(){ call_or_link(VV[8],(void **)(void *)&Lnk8);} /* SPECIFIC-ERROR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

