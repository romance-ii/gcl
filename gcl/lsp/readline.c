
#include "cmpinclude.h"
#include "readline.h"
void init_readline(){do_init(VV);}
/*	function definition for INIT-READLINE	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(0);
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
	if((vs_base[0])==Cnil){
	goto T11;}
	V2= (V5);
	goto T7;
	goto T11;
T11:;
	base[0]= coerce_to_string((V5));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V2= vs_base[0];}
	goto T7;
T7:;
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
	V7= car((V6));
	goto T20;
T20:;
	if(!(endp_prop((V6)))){
	goto T21;}
	V3= Cnil;
	goto T6;
	goto T21;
T21:;
	{long V9;
	long V10;
	base[2]= (V7);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk6)();
	if(vs_base>=vs_top){vs_top=sup;goto T30;}
	V9= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T31;}
	V10= fix(vs_base[0]);
	vs_top=sup;
	goto T32;
	goto T30;
T30:;
	V9= fix(Cnil);
	goto T31;
T31:;
	V10= fix(Cnil);
	goto T32;
T32:;
	if(((V2))==((V7))){
	goto T33;}
	V10= 0;
	goto T33;
T33:;
	{object V11;
	register object V12;
	V13 = make_fixnum(V10);
	V14 = make_fixnum(V9);
	V11= number_plus(V13,V14);
	V12= small_fixnum(0);
	goto T40;
T40:;
	if(!(number_compare((V12),(V11))>=0)){
	goto T41;}
	goto T27;
	goto T41;
T41:;
	V15 = make_fixnum(V10);
	if(!(number_compare((V12),V15)<0)){
	goto T50;}
	base[3]= (V7);
	base[4]= (V12);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V4= vs_base[0];
	goto T48;
	goto T50;
T50:;
	base[3]= (V7);
	V16 = make_fixnum(V10);
	base[4]= number_minus((V12),V16);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V4= vs_base[0];
	goto T48;
T48:;
	goto T46;
T46:;
	if(((V4))!=Cnil){
	goto T56;}
	goto T47;
	goto T56;
T56:;
	V3= car((V4));
	if(((V7))==((V2))){
	goto T62;}
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
	if(!((VV[2])==(car(V17)))){
	goto T61;}
	goto T62;
T62:;
	base[3]= (V3);
	vs_top=(vs_base=base+3)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T72;}
	base[3]= (V3);
	vs_top=(vs_base=base+3)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T71;}
	goto T72;
T72:;
	V18= symbol_name((V3));
	V1= make_cons(/* INLINE-ARGS */V18,(V1));
	goto T71;
T71:;
	goto T61;
T61:;
	V4= cdr((V4));
	goto T46;
	goto T47;
T47:;
	goto T44;
	goto T44;
T44:;
	V12= one_plus((V12));
	goto T40;}}
	goto T27;
T27:;
	V6= cdr((V6));
	V7= car((V6));
	goto T20;}}
	goto T6;
T6:;
	goto T5;
	goto T5;
T5:;
	{object V19;
	register object V20;
	register object V21;
	{object V22;
	base[0]= VV[3];
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V22= vs_base[0];
	base[0]= (V22);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T96;}
	V19= (V22);
	goto T92;
	goto T96;
T96:;
	base[0]= coerce_to_string((V22));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V19= vs_base[0];}
	goto T92;
T92:;
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
	V24= car((V23));
	goto T105;
T105:;
	if(!(endp_prop((V23)))){
	goto T106;}
	V20= Cnil;
	goto T91;
	goto T106;
T106:;
	{long V26;
	long V27;
	base[2]= (V24);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk6)();
	if(vs_base>=vs_top){vs_top=sup;goto T115;}
	V26= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T116;}
	V27= fix(vs_base[0]);
	vs_top=sup;
	goto T117;
	goto T115;
T115:;
	V26= fix(Cnil);
	goto T116;
T116:;
	V27= fix(Cnil);
	goto T117;
T117:;
	if(((V19))==((V24))){
	goto T118;}
	V27= 0;
	goto T118;
T118:;
	{object V28;
	register object V29;
	V30 = make_fixnum(V27);
	V31 = make_fixnum(V26);
	V28= number_plus(V30,V31);
	V29= small_fixnum(0);
	goto T125;
T125:;
	if(!(number_compare((V29),(V28))>=0)){
	goto T126;}
	goto T112;
	goto T126;
T126:;
	V32 = make_fixnum(V27);
	if(!(number_compare((V29),V32)<0)){
	goto T135;}
	base[3]= (V24);
	base[4]= (V29);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V21= vs_base[0];
	goto T133;
	goto T135;
T135:;
	base[3]= (V24);
	V33 = make_fixnum(V27);
	base[4]= number_minus((V29),V33);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V21= vs_base[0];
	goto T133;
T133:;
	goto T131;
T131:;
	if(((V21))!=Cnil){
	goto T141;}
	goto T132;
	goto T141;
T141:;
	V20= car((V21));
	if(((V24))==((V19))){
	goto T147;}
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
	if(!((VV[2])==(car(V34)))){
	goto T146;}
	goto T147;
T147:;
	base[3]= (V20);
	vs_top=(vs_base=base+3)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T157;}
	base[3]= (V20);
	vs_top=(vs_base=base+3)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T156;}
	goto T157;
T157:;
	base[3]= Cnil;
	base[4]= VV[4];
	base[5]= (V20);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	V35= vs_base[0];
	V1= make_cons(V35,(V1));
	goto T156;
T156:;
	goto T146;
T146:;
	V21= cdr((V21));
	goto T131;
	goto T132;
T132:;
	goto T129;
	goto T129;
T129:;
	V29= one_plus((V29));
	goto T125;}}
	goto T112;
T112:;
	V23= cdr((V23));
	V24= car((V23));
	goto T105;}}
	goto T91;
T91:;
	goto T90;
	goto T90;
T90:;
	base[0]= Ct;
	base[1]= VV[5];
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
static void LnkT6(){ call_or_link(VV[6],(void **)(void *)&Lnk6);} /* PACKAGE-SIZE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

