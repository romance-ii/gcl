
#include "cmpinclude.h"
#include "make_defpackage.h"
void init_make_defpackage(){do_init(VV);}
/*	function definition for MAKE-DEFPACKAGE-FORM	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	{object V1;
	check_arg(1);
	V1=(base[0]);
	vs_top=sup;
	goto TTL;
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
	object V7;
	object V8;
	object V9;
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
	goto T10;
T10:;
	base[7]= (V14->c.c_car);
	vs_top=(vs_base=base+7)+1;
	Lpackage_name();
	vs_top=sup;
	(V13->c.c_car)= vs_base[0];
	V14=MMcdr(V14);
	if(endp(V14)){
	V6= base[6];
	goto T9;}
	V13=MMcdr(V13)=MMcons(Cnil,Cnil);
	goto T10;}
	goto T9;
T9:;
	V7= Cnil;
	base[6]= (V2);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk8)();
	vs_top=sup;
	V8= vs_base[0];
	V9= Cnil;
	V10= Cnil;
	V11= Cnil;
	V12= Cnil;
	{object V15;
	object V16;
	register object V17;
	base[6]= V2;
	vs_top=(vs_base=base+6)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T23;}
	V15= V2;
	goto T21;
	goto T23;
T23:;
	base[6]= coerce_to_string(V2);
	vs_top=(vs_base=base+6)+1;
	Lfind_package();
	vs_top=sup;
	V15= vs_base[0];
	goto T21;
T21:;
	V16= Cnil;
	V17= Cnil;
	{object V19;
	object V20;
	base[7]= (V15);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk9)();
	vs_top=sup;
	V19= vs_base[0];
	V20= small_fixnum(0);
	goto T31;
T31:;
	if(!(number_compare((V20),(V19))>=0)){
	goto T32;}
	V16= Cnil;
	goto T20;
	goto T32;
T32:;
	base[7]= (V15);
	base[8]= (V20);
	vs_top=(vs_base=base+7)+2;
	siLpackage_external();
	vs_top=sup;
	V17= vs_base[0];
	goto T39;
T39:;
	if(((V17))!=Cnil){
	goto T44;}
	goto T40;
	goto T44;
T44:;
	V16= car((V17));
	{object V21;
	V21= symbol_name((V16));
	V7= make_cons((V21),(V7));}
	V17= cdr((V17));
	goto T39;
	goto T40;
T40:;
	goto T37;
	goto T37;
T37:;
	V20= one_plus((V20));
	goto T31;}}
	goto T20;
T20:;
	{register object V22;
	register object V23;
	register object V24;
	base[6]= V2;
	vs_top=(vs_base=base+6)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T60;}
	V22= V2;
	goto T58;
	goto T60;
T60:;
	base[6]= coerce_to_string(V2);
	vs_top=(vs_base=base+6)+1;
	Lfind_package();
	vs_top=sup;
	V22= vs_base[0];
	goto T58;
T58:;
	V23= Cnil;
	V24= Cnil;
	{object V26;
	register object V27;
	base[8]= (V22);
	vs_top=(vs_base=base+8)+1;
	Lpackage_use_list();
	vs_top=sup;
	V28= vs_base[0];
	V26= make_cons((V22),V28);
	V27= car((V26));
	goto T69;
T69:;
	if(!(endp_prop((V26)))){
	goto T70;}
	V23= Cnil;
	goto T57;
	goto T70;
T70:;
	{long V29;
	long V30;
	base[8]= (V27);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk9)();
	if(vs_base>=vs_top){vs_top=sup;goto T79;}
	V29= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T80;}
	V30= fix(vs_base[0]);
	vs_top=sup;
	goto T81;
	goto T79;
T79:;
	V29= fix(Cnil);
	goto T80;
T80:;
	V30= fix(Cnil);
	goto T81;
T81:;
	if(((V22))==((V27))){
	goto T82;}
	V30= 0;
	goto T82;
T82:;
	{object V31;
	register object V32;
	V33 = make_fixnum(V30);
	V34 = make_fixnum(V29);
	V31= number_plus(V33,V34);
	V32= small_fixnum(0);
	goto T89;
T89:;
	if(!(number_compare((V32),(V31))>=0)){
	goto T90;}
	goto T76;
	goto T90;
T90:;
	V35 = make_fixnum(V30);
	if(!(number_compare((V32),V35)<0)){
	goto T99;}
	base[9]= (V27);
	base[10]= (V32);
	vs_top=(vs_base=base+9)+2;
	siLpackage_internal();
	vs_top=sup;
	V24= vs_base[0];
	goto T97;
	goto T99;
T99:;
	base[9]= (V27);
	V36 = make_fixnum(V30);
	base[10]= number_minus((V32),V36);
	vs_top=(vs_base=base+9)+2;
	siLpackage_external();
	vs_top=sup;
	V24= vs_base[0];
	goto T97;
T97:;
	goto T95;
T95:;
	if(((V24))!=Cnil){
	goto T105;}
	goto T96;
	goto T105;
T105:;
	V23= car((V24));
	if(((V27))==((V22))){
	goto T111;}
	base[10]= symbol_name((V23));
	base[11]= (V22);
	vs_top=(vs_base=base+10)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[9]= vs_base[0];
	vs_top=(vs_base=base+9)+1;
	Llast();
	vs_top=sup;
	V37= vs_base[0];
	if(!((VV[0])==(car(V37)))){
	goto T110;}
	goto T111;
T111:;
	base[9]= (V23);
	vs_top=(vs_base=base+9)+1;
	Lsymbol_package();
	vs_top=sup;
	V38= vs_base[0];
	if(((V2))==(V38)){
	goto T120;}
	base[9]= (V23);
	vs_top=(vs_base=base+9)+1;
	Lsymbol_package();
	vs_top=sup;
	V39= vs_base[0];
	if(((VFUN_NARGS=2,(*(LnkLI10))(V39,(V5))))!=Cnil){
	goto T120;}
	V9= make_cons(V23,(V9));
	goto T120;
T120:;
	goto T110;
T110:;
	V24= cdr((V24));
	goto T95;
	goto T96;
T96:;
	goto T93;
	goto T93;
T93:;
	V32= one_plus((V32));
	goto T89;}}
	goto T76;
T76:;
	V26= cdr((V26));
	V27= car((V26));
	goto T69;}}
	goto T57;
T57:;
	V10= (VFUN_NARGS=2,(*(LnkLI11))((V8),(V9)));
	V11= (VFUN_NARGS=2,(*(LnkLI12))((V8),(V10)));
	V12= (VFUN_NARGS=2,(*(LnkLI12))((V9),(V10)));
	if(((V4))==Cnil){
	goto T149;}
	V42= make_cons(VV[2],(V4));
	base[6]= make_cons(/* INLINE-ARGS */V42,Cnil);
	goto T147;
	goto T149;
T149:;
	base[6]= Cnil;
	goto T147;
T147:;
	if(((V6))==Cnil){
	goto T153;}
	V43= make_cons(VV[3],(V6));
	base[7]= make_cons(/* INLINE-ARGS */V43,Cnil);
	goto T151;
	goto T153;
T153:;
	base[7]= Cnil;
	goto T151;
T151:;
	if(((V7))==Cnil){
	goto T157;}
	V44= make_cons(VV[4],(V7));
	base[8]= make_cons(/* INLINE-ARGS */V44,Cnil);
	goto T155;
	goto T157;
T157:;
	base[8]= Cnil;
	goto T155;
T155:;
	if(((V11))==Cnil){
	goto T161;}
	{object V46;
	object V47= (V11);
	if(endp(V47)){
	V45= Cnil;
	goto T163;}
	base[10]=V46=MMcons(Cnil,Cnil);
	goto T164;
T164:;
	(V46->c.c_car)= symbol_name((V47->c.c_car));
	V47=MMcdr(V47);
	if(endp(V47)){
	V45= base[10];
	goto T163;}
	V46=MMcdr(V46)=MMcons(Cnil,Cnil);
	goto T164;}
	goto T163;
T163:;
	V48= make_cons(VV[5],V45);
	base[9]= make_cons(/* INLINE-ARGS */V48,Cnil);
	goto T159;
	goto T161;
T161:;
	base[9]= Cnil;
	goto T159;
T159:;
	if(((V10))==Cnil){
	goto T168;}
	{object V49;
	object V50= (V10);
	if(endp(V50)){
	base[10]= Cnil;
	goto T166;}
	base[11]=V49=MMcons(Cnil,Cnil);
	goto T170;
T170:;
	base[13]= (V50->c.c_car);
	vs_top=(vs_base=base+13)+1;
	Lsymbol_package();
	vs_top=sup;
	base[12]= vs_base[0];
	vs_top=(vs_base=base+12)+1;
	Lpackage_name();
	vs_top=sup;
	V52= vs_base[0];
	V53= list(3,VV[6],V52,symbol_name((V50->c.c_car)));
	(V49->c.c_car)= make_cons(/* INLINE-ARGS */V53,Cnil);
	V50=MMcdr(V50);
	if(endp(V50)){
	base[10]= base[11];
	goto T166;}
	V49=MMcdr(V49)=MMcons(Cnil,Cnil);
	goto T170;}
	goto T168;
T168:;
	base[10]= Cnil;
	goto T166;
T166:;
	if(((V12))==Cnil){
	goto T177;}
	{object V54;
	object V55= (V12);
	if(endp(V55)){
	base[11]= Cnil;
	goto T175;}
	base[12]=V54=MMcons(Cnil,Cnil);
	goto T179;
T179:;
	base[14]= (V55->c.c_car);
	vs_top=(vs_base=base+14)+1;
	Lsymbol_package();
	vs_top=sup;
	base[13]= vs_base[0];
	vs_top=(vs_base=base+13)+1;
	Lpackage_name();
	vs_top=sup;
	V57= vs_base[0];
	V58= list(3,VV[7],V57,symbol_name((V55->c.c_car)));
	(V54->c.c_car)= make_cons(/* INLINE-ARGS */V58,Cnil);
	V55=MMcdr(V55);
	if(endp(V55)){
	base[11]= base[12];
	goto T175;}
	V54=MMcdr(V54)=MMcons(Cnil,Cnil);
	goto T179;}
	goto T177;
T177:;
	base[11]= Cnil;
	goto T175;
T175:;
	vs_top=(vs_base=base+6)+6;
	Lappend();
	vs_top=sup;
	V41= vs_base[0];
	base[6]= listA(3,VV[1],(V3),V41);
	vs_top=(vs_base=base+6)+1;
	return;}}
	}
}
static object  LnkTLI12(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[12],(void **)(void *)&LnkLI12,first,ap);va_end(ap);return V1;} /* SET-DIFFERENCE */
static object  LnkTLI11(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[11],(void **)(void *)&LnkLI11,first,ap);va_end(ap);return V1;} /* INTERSECTION */
static object  LnkTLI10(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[10],(void **)(void *)&LnkLI10,first,ap);va_end(ap);return V1;} /* FIND */
static void LnkT9(){ call_or_link(VV[9],(void **)(void *)&Lnk9);} /* PACKAGE-SIZE */
static void LnkT8(){ call_or_link(VV[8],(void **)(void *)&Lnk8);} /* PACKAGE-SHADOWING-SYMBOLS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

