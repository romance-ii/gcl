
#include "cmpinclude.h"
#include "make_defpackage.h"
init_make_defpackage(){do_init(VV);}
/*	function definition for MAKE-DEFPACKAGE-FORM	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	{object V1;
	check_arg(1);
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
	if(endp(V14)){
	V6= Cnil;
	goto T9;}
	base[6]=V13=MMcons(Cnil,Cnil);
T10:;
	base[7]= (V14->c.c_car);
	vs_top=(vs_base=base+7)+1;
	Lpackage_name();
	vs_top=sup;
	(V13->c.c_car)= vs_base[0];
	if(endp(V14=MMcdr(V14))){
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
	V16= car((V17));
	V21= symbol_name((V16));
	V7= make_cons(/* INLINE-ARGS */V21,(V7));
	V17= cdr((V17));
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
	{long V26;
	long V27;
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
	V30 = make_fixnum(V27);
	V31 = make_fixnum(V26);
	V28= number_plus(V30,V31);
	V29= small_fixnum(0);
T71:;
	if(!(number_compare((V29),(V28))>=0)){
	goto T72;}
	V23= Cnil;
	goto T56;
T72:;
	V32 = make_fixnum(V27);
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
	V33 = make_fixnum(V27);
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
	V23= car((V24));
	base[7]= (V23);
	vs_top=(vs_base=base+7)+1;
	Lsymbol_package();
	vs_top=sup;
	V34= vs_base[0];
	if(((V2))==(V34)){
	goto T94;}
	base[7]= (V23);
	vs_top=(vs_base=base+7)+1;
	Lsymbol_package();
	vs_top=sup;
	V35= vs_base[0];
	if(((VFUN_NARGS=2,(*(LnkLI9))(V35,(V5))))!=Cnil){
	goto T94;}
	V9= make_cons((V23),(V9));
T94:;
	V24= cdr((V24));
	goto T79;
T80:;
	goto T77;
T77:;
	V29= one_plus((V29));
	goto T71;}}}
T56:;
	V10= (VFUN_NARGS=2,(*(LnkLI10))((V8),(V9)));
	V11= (VFUN_NARGS=2,(*(LnkLI11))((V8),(V10)));
	V12= (VFUN_NARGS=2,(*(LnkLI11))((V9),(V10)));
	if(((V4))==Cnil){
	goto T118;}
	V37= make_cons(VV[1],(V4));
	base[6]= make_cons(/* INLINE-ARGS */V37,Cnil);
	goto T116;
T118:;
	base[6]= Cnil;
T116:;
	if(((V6))==Cnil){
	goto T122;}
	V38= make_cons(VV[2],(V6));
	base[7]= make_cons(/* INLINE-ARGS */V38,Cnil);
	goto T120;
T122:;
	base[7]= Cnil;
T120:;
	if(((V7))==Cnil){
	goto T126;}
	V39= make_cons(VV[3],(V7));
	base[8]= make_cons(/* INLINE-ARGS */V39,Cnil);
	goto T124;
T126:;
	base[8]= Cnil;
T124:;
	if(((V11))==Cnil){
	goto T130;}
	{object V41;
	object V42= (V11);
	if(endp(V42)){
	V40= Cnil;
	goto T132;}
	base[10]=V41=MMcons(Cnil,Cnil);
T133:;
	(V41->c.c_car)= symbol_name((V42->c.c_car));
	if(endp(V42=MMcdr(V42))){
	V40= base[10];
	goto T132;}
	V41=MMcdr(V41)=MMcons(Cnil,Cnil);
	goto T133;}
T132:;
	V43= make_cons(VV[4],V40);
	base[9]= make_cons(/* INLINE-ARGS */V43,Cnil);
	goto T128;
T130:;
	base[9]= Cnil;
T128:;
	if(((V10))==Cnil){
	goto T137;}
	{object V44;
	object V45= (V10);
	if(endp(V45)){
	base[10]= Cnil;
	goto T135;}
	base[11]=V44=MMcons(Cnil,Cnil);
T139:;
	base[13]= (V45->c.c_car);
	vs_top=(vs_base=base+13)+1;
	Lsymbol_package();
	vs_top=sup;
	base[12]= vs_base[0];
	vs_top=(vs_base=base+12)+1;
	Lpackage_name();
	vs_top=sup;
	V47= vs_base[0];
	V48= list(3,VV[5],V47,symbol_name((V45->c.c_car)));
	(V44->c.c_car)= make_cons(/* INLINE-ARGS */V48,Cnil);
	if(endp(V45=MMcdr(V45))){
	base[10]= base[11];
	goto T135;}
	V44=MMcdr(V44)=MMcons(Cnil,Cnil);
	goto T139;}
T137:;
	base[10]= Cnil;
T135:;
	if(((V12))==Cnil){
	goto T146;}
	{object V49;
	object V50= (V12);
	if(endp(V50)){
	base[11]= Cnil;
	goto T144;}
	base[12]=V49=MMcons(Cnil,Cnil);
T148:;
	base[14]= (V50->c.c_car);
	vs_top=(vs_base=base+14)+1;
	Lsymbol_package();
	vs_top=sup;
	base[13]= vs_base[0];
	vs_top=(vs_base=base+13)+1;
	Lpackage_name();
	vs_top=sup;
	V52= vs_base[0];
	V53= list(3,VV[6],V52,symbol_name((V50->c.c_car)));
	(V49->c.c_car)= make_cons(/* INLINE-ARGS */V53,Cnil);
	if(endp(V50=MMcdr(V50))){
	base[11]= base[12];
	goto T144;}
	V49=MMcdr(V49)=MMcons(Cnil,Cnil);
	goto T148;}
T146:;
	base[11]= Cnil;
T144:;
	vs_top=(vs_base=base+6)+6;
	Lappend();
	vs_top=sup;
	V36= vs_base[0];
	base[6]= listA(3,VV[0],(V3),V36);
	vs_top=(vs_base=base+6)+1;
	return;}}
	}
}
static object  LnkTLI11(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[11],&LnkLI11,ap);} /* SET-DIFFERENCE */
static object  LnkTLI10(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[10],&LnkLI10,ap);} /* INTERSECTION */
static object  LnkTLI9(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[9],&LnkLI9,ap);} /* FIND */
static LnkT8(){ call_or_link(VV[8],&Lnk8);} /* PACKAGE-SIZE */
static LnkT7(){ call_or_link(VV[7],&Lnk7);} /* PACKAGE-SHADOWING-SYMBOLS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

