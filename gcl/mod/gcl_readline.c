
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
	V8 = (V2);
	base[2]= (V2);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V9= vs_base[0];
	V6= make_cons(V8,V9);
	V7= CMPcar((V6));
	goto T27;
T27:;
	if(!(((V6))==Cnil)){
	goto T28;}
	V3= Cnil;
	goto T6;
	goto T28;
T28:;
	{long V10;
	long V11;
	base[2]= (V7);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk9)();
	if(vs_base>=vs_top){vs_top=sup;goto T37;}
	V10= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T38;}
	V11= fix(vs_base[0]);
	vs_top=sup;
	goto T39;
	goto T37;
T37:;
	V10= fix(Cnil);
	goto T38;
T38:;
	V11= fix(Cnil);
	goto T39;
T39:;
	if(((V2))==((V7))){
	goto T40;}
	V11= 0;
	goto T40;
T40:;
	{object V12;
	register object V13;
	V14 = CMPmake_fixnum(V11);
	V15 = CMPmake_fixnum(V10);
	V12= number_plus(V14,V15);
	V13= small_fixnum(0);
	goto T47;
T47:;
	if(!(number_compare((V13),(V12))>=0)){
	goto T48;}
	goto T34;
	goto T48;
T48:;
	V16 = CMPmake_fixnum(V11);
	if(!(number_compare((V13),V16)<0)){
	goto T57;}
	base[3]= (V7);
	base[4]= (V13);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V4= vs_base[0];
	goto T55;
	goto T57;
T57:;
	base[3]= (V7);
	V17 = CMPmake_fixnum(V11);
	base[4]= number_minus((V13),V17);
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
	V18= vs_base[0];
	if(!((VV[4])==(CMPcar(V18)))){
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
	V19= symbol_name((V3));
	V1= make_cons(/* INLINE-ARGS */V19,(V1));
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
	V13= one_plus((V13));
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
	{object V20;
	register object V21;
	register object V22;
	{object V23;
	base[0]= VV[5];
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V23= vs_base[0];
	base[0]= (V23);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T101;}
	base[0]= coerce_to_string((V23));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V23= vs_base[0];
	if(((V23))!=Cnil){
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
	V20= (V23);}
	V21= Cnil;
	V22= Cnil;
	{object V24;
	object V25;
	V26 = (V20);
	base[2]= (V20);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	V27= vs_base[0];
	V24= make_cons(V26,V27);
	V25= CMPcar((V24));
	goto T118;
T118:;
	if(!(((V24))==Cnil)){
	goto T119;}
	V21= Cnil;
	goto T97;
	goto T119;
T119:;
	{long V28;
	long V29;
	base[2]= (V25);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk9)();
	if(vs_base>=vs_top){vs_top=sup;goto T128;}
	V28= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T129;}
	V29= fix(vs_base[0]);
	vs_top=sup;
	goto T130;
	goto T128;
T128:;
	V28= fix(Cnil);
	goto T129;
T129:;
	V29= fix(Cnil);
	goto T130;
T130:;
	if(((V20))==((V25))){
	goto T131;}
	V29= 0;
	goto T131;
T131:;
	{object V30;
	register object V31;
	V32 = CMPmake_fixnum(V29);
	V33 = CMPmake_fixnum(V28);
	V30= number_plus(V32,V33);
	V31= small_fixnum(0);
	goto T138;
T138:;
	if(!(number_compare((V31),(V30))>=0)){
	goto T139;}
	goto T125;
	goto T139;
T139:;
	V34 = CMPmake_fixnum(V29);
	if(!(number_compare((V31),V34)<0)){
	goto T148;}
	base[3]= (V25);
	base[4]= (V31);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V22= vs_base[0];
	goto T146;
	goto T148;
T148:;
	base[3]= (V25);
	V35 = CMPmake_fixnum(V29);
	base[4]= number_minus((V31),V35);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V22= vs_base[0];
	goto T146;
T146:;
	goto T144;
T144:;
	if(((V22))!=Cnil){
	goto T154;}
	goto T145;
	goto T154;
T154:;
	V21= CMPcar((V22));
	if(((V25))==((V20))){
	goto T160;}
	base[4]= symbol_name((V21));
	base[5]= (V20);
	vs_top=(vs_base=base+4)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	Llast();
	vs_top=sup;
	V36= vs_base[0];
	if(!((VV[4])==(CMPcar(V36)))){
	goto T159;}
	goto T160;
T160:;
	if(((V21))->s.s_dbind!=OBJNULL){
	goto T170;}
	base[3]= (V21);
	vs_top=(vs_base=base+3)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T169;}
	goto T170;
T170:;
	base[3]= Cnil;
	base[4]= VV[6];
	base[5]= (V21);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	V37= vs_base[0];
	V38 = (V1);
	V1= make_cons(V37,V38);
	goto T169;
T169:;
	goto T159;
T159:;
	V22= CMPcdr((V22));
	goto T144;
	goto T145;
T145:;
	goto T142;
	goto T142;
T142:;
	V31= one_plus((V31));
	goto T138;}}
	goto T125;
T125:;
	V24= CMPcdr((V24));
	V25= CMPcar((V24));
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

