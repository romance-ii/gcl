
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
	register object V20;
	base[7]= (V15);
	vs_top=(vs_base=base+7)+1;
	(void) (*Lnk8)();
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
	{object V22;
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
	{long V26;
	long V27;
	base[6]= (V22);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk8)();
	if(vs_base>=vs_top){vs_top=sup;goto T66;}
	V26= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T67;}
	V27= fix(vs_base[0]);
	vs_top=sup;
	goto T68;
goto T66;
T66:;
	V26= fix(Cnil);
goto T67;
T67:;
	V27= fix(Cnil);
goto T68;
T68:;
	{object V28;
	register object V29;
	V30 = make_fixnum(V27);
	V31 = make_fixnum(V26);
	V28= number_plus(V30,V31);
	V29= small_fixnum(0);
goto T72;
T72:;
	if(!(number_compare((V29),(V28))>=0)){
	goto T73;}
	V23= Cnil;
	goto T57;
goto T73;
T73:;
	V32 = make_fixnum(V27);
	if(!(number_compare((V29),V32)<0)){
	goto T84;}
	base[7]= (V22);
	base[8]= (V29);
	vs_top=(vs_base=base+7)+2;
	siLpackage_internal();
	vs_top=sup;
	V24= vs_base[0];
	goto T82;
goto T84;
T84:;
	base[7]= (V22);
	V33 = make_fixnum(V27);
	base[8]= number_minus((V29),V33);
	vs_top=(vs_base=base+7)+2;
	siLpackage_external();
	vs_top=sup;
	V24= vs_base[0];
goto T82;
T82:;
goto T80;
T80:;
	if(((V24))!=Cnil){
	goto T90;}
	goto T81;
goto T90;
T90:;
	V23= car((V24));
	base[7]= (V23);
	vs_top=(vs_base=base+7)+1;
	Lsymbol_package();
	vs_top=sup;
	V34= vs_base[0];
	if(((V2))==(V34)){
	goto T95;}
	base[7]= (V23);
	vs_top=(vs_base=base+7)+1;
	Lsymbol_package();
	vs_top=sup;
	V35= vs_base[0];
	if(((VFUN_NARGS=2,(*(LnkLI9))(V35,(V5))))!=Cnil){
	goto T95;}
	V9= make_cons(V23,(V9));
goto T95;
T95:;
	V24= cdr((V24));
	goto T80;
goto T81;
T81:;
	goto T78;
goto T78;
T78:;
	V29= one_plus((V29));
	goto T72;}}}
goto T57;
T57:;
	V10= (VFUN_NARGS=2,(*(LnkLI10))((V8),(V9)));
	V11= (VFUN_NARGS=2,(*(LnkLI11))((V8),(V10)));
	V12= (VFUN_NARGS=2,(*(LnkLI11))((V9),(V10)));
	if(((V4))==Cnil){
	goto T119;}
	V38= make_cons(VV[1],(V4));
	base[6]= make_cons(/* INLINE-ARGS */V38,Cnil);
	goto T117;
goto T119;
T119:;
	base[6]= Cnil;
goto T117;
T117:;
	if(((V6))==Cnil){
	goto T123;}
	V39= make_cons(VV[2],(V6));
	base[7]= make_cons(/* INLINE-ARGS */V39,Cnil);
	goto T121;
goto T123;
T123:;
	base[7]= Cnil;
goto T121;
T121:;
	if(((V7))==Cnil){
	goto T127;}
	V40= make_cons(VV[3],(V7));
	base[8]= make_cons(/* INLINE-ARGS */V40,Cnil);
	goto T125;
goto T127;
T127:;
	base[8]= Cnil;
goto T125;
T125:;
	if(((V11))==Cnil){
	goto T131;}
	{object V42;
	object V43= (V11);
	if(endp(V43)){
	V41= Cnil;
	goto T133;}
	base[10]=V42=MMcons(Cnil,Cnil);
goto T134;
T134:;
	(V42->c.c_car)= symbol_name((V43->c.c_car));
	V43=MMcdr(V43);
	if(endp(V43)){
	V41= base[10];
	goto T133;}
	V42=MMcdr(V42)=MMcons(Cnil,Cnil);
	goto T134;}
goto T133;
T133:;
	V44= make_cons(VV[4],V41);
	base[9]= make_cons(/* INLINE-ARGS */V44,Cnil);
	goto T129;
goto T131;
T131:;
	base[9]= Cnil;
goto T129;
T129:;
	if(((V10))==Cnil){
	goto T138;}
	{object V45;
	object V46= (V10);
	if(endp(V46)){
	base[10]= Cnil;
	goto T136;}
	base[11]=V45=MMcons(Cnil,Cnil);
goto T140;
T140:;
	base[13]= (V46->c.c_car);
	vs_top=(vs_base=base+13)+1;
	Lsymbol_package();
	vs_top=sup;
	base[12]= vs_base[0];
	vs_top=(vs_base=base+12)+1;
	Lpackage_name();
	vs_top=sup;
	V48= vs_base[0];
	V49= list(3,VV[5],V48,symbol_name((V46->c.c_car)));
	(V45->c.c_car)= make_cons(/* INLINE-ARGS */V49,Cnil);
	V46=MMcdr(V46);
	if(endp(V46)){
	base[10]= base[11];
	goto T136;}
	V45=MMcdr(V45)=MMcons(Cnil,Cnil);
	goto T140;}
goto T138;
T138:;
	base[10]= Cnil;
goto T136;
T136:;
	if(((V12))==Cnil){
	goto T147;}
	{object V50;
	object V51= (V12);
	if(endp(V51)){
	base[11]= Cnil;
	goto T145;}
	base[12]=V50=MMcons(Cnil,Cnil);
goto T149;
T149:;
	base[14]= (V51->c.c_car);
	vs_top=(vs_base=base+14)+1;
	Lsymbol_package();
	vs_top=sup;
	base[13]= vs_base[0];
	vs_top=(vs_base=base+13)+1;
	Lpackage_name();
	vs_top=sup;
	V53= vs_base[0];
	V54= list(3,VV[6],V53,symbol_name((V51->c.c_car)));
	(V50->c.c_car)= make_cons(/* INLINE-ARGS */V54,Cnil);
	V51=MMcdr(V51);
	if(endp(V51)){
	base[11]= base[12];
	goto T145;}
	V50=MMcdr(V50)=MMcons(Cnil,Cnil);
	goto T149;}
goto T147;
T147:;
	base[11]= Cnil;
goto T145;
T145:;
	vs_top=(vs_base=base+6)+6;
	Lappend();
	vs_top=sup;
	V37= vs_base[0];
	base[6]= listA(3,VV[0],(V3),V37);
	vs_top=(vs_base=base+6)+1;
	return;}}
	}
}
static object  LnkTLI11(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[11],(void **)&LnkLI11,ap);va_end(ap);return V1;} /* SET-DIFFERENCE */
static object  LnkTLI10(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[10],(void **)&LnkLI10,ap);va_end(ap);return V1;} /* INTERSECTION */
static object  LnkTLI9(va_alist)va_dcl{object V1;va_list ap;va_start(ap);V1=call_vproc(VV[9],(void **)&LnkLI9,ap);va_end(ap);return V1;} /* FIND */
static void LnkT8(){ call_or_link(VV[8],(void **)&Lnk8);} /* PACKAGE-SIZE */
static void LnkT7(){ call_or_link(VV[7],(void **)&Lnk7);} /* PACKAGE-SHADOWING-SYMBOLS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

