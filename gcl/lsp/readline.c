
#include <cmpinclude.h>
#include "readline.h"
init_readline(){do_init(VV);}
/*	function definition for INIT-READLINE	*/

static L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_reserve(VM1);
	check_arg(0);
	vs_top=sup;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2;}
	{register object V1;
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
T11:;
	base[0]= coerce_to_string((V5));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V2= vs_base[0];}
T7:;
	V3= Cnil;
	V4= Cnil;
	{int V6;
	int V7;
	base[0]= (V2);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk5)();
	if(vs_base>=vs_top){vs_top=sup;goto T17;}
	V6= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T18;}
	V7= fix(vs_base[0]);
	vs_top=sup;
	goto T19;
T17:;
	V6= fix(Cnil);
T18:;
	V7= fix(Cnil);
T19:;
	{object V8;
	register object V9;
	V10 = make_fixnum(V7);
	V11 = make_fixnum(V6);
	V8= number_plus(V10,V11);
	V9= small_fixnum(0);
T23:;
	if(!(number_compare((V9),(V8))>=0)){
	goto T24;}
	V3= Cnil;
	goto T6;
T24:;
	V12 = make_fixnum(V7);
	if(!(number_compare((V9),V12)<0)){
	goto T35;}
	base[1]= (V2);
	base[2]= (V9);
	vs_top=(vs_base=base+1)+2;
	siLpackage_internal();
	vs_top=sup;
	V4= vs_base[0];
	goto T33;
T35:;
	base[1]= (V2);
	V13 = make_fixnum(V7);
	base[2]= number_minus((V9),V13);
	vs_top=(vs_base=base+1)+2;
	siLpackage_external();
	vs_top=sup;
	V4= vs_base[0];
T33:;
T31:;
	if(((V4))!=Cnil){
	goto T41;}
	goto T32;
T41:;
	V3= car((V4));
	base[1]= (V3);
	vs_top=(vs_base=base+1)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T47;}
	base[1]= (V3);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T46;}
T47:;
	V14= symbol_name((V3));
	V1= make_cons(/* INLINE-ARGS */V14,(V1));
T46:;
	V4= cdr((V4));
	goto T31;
T32:;
	goto T29;
T29:;
	V9= one_plus((V9));
	goto T23;}}}
T6:;
	goto T5;
T5:;
	{object V15;
	register object V16;
	register object V17;
	{object V18;
	base[0]= VV[2];
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V18= vs_base[0];
	base[0]= (V18);
	vs_top=(vs_base=base+0)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T66;}
	V15= (V18);
	goto T62;
T66:;
	base[0]= coerce_to_string((V18));
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V15= vs_base[0];}
T62:;
	V16= Cnil;
	V17= Cnil;
	{int V19;
	int V20;
	base[0]= (V15);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk5)();
	if(vs_base>=vs_top){vs_top=sup;goto T72;}
	V19= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T73;}
	V20= fix(vs_base[0]);
	vs_top=sup;
	goto T74;
T72:;
	V19= fix(Cnil);
T73:;
	V20= fix(Cnil);
T74:;
	{object V21;
	register object V22;
	V23 = make_fixnum(V20);
	V24 = make_fixnum(V19);
	V21= number_plus(V23,V24);
	V22= small_fixnum(0);
T78:;
	if(!(number_compare((V22),(V21))>=0)){
	goto T79;}
	V16= Cnil;
	goto T61;
T79:;
	V25 = make_fixnum(V20);
	if(!(number_compare((V22),V25)<0)){
	goto T90;}
	base[1]= (V15);
	base[2]= (V22);
	vs_top=(vs_base=base+1)+2;
	siLpackage_internal();
	vs_top=sup;
	V17= vs_base[0];
	goto T88;
T90:;
	base[1]= (V15);
	V26 = make_fixnum(V20);
	base[2]= number_minus((V22),V26);
	vs_top=(vs_base=base+1)+2;
	siLpackage_external();
	vs_top=sup;
	V17= vs_base[0];
T88:;
T86:;
	if(((V17))!=Cnil){
	goto T96;}
	goto T87;
T96:;
	V16= car((V17));
	base[1]= (V16);
	vs_top=(vs_base=base+1)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T102;}
	base[1]= (V16);
	vs_top=(vs_base=base+1)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T101;}
T102:;
	base[1]= Cnil;
	base[2]= VV[3];
	base[3]= (V16);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	V27= vs_base[0];
	V1= make_cons(V27,(V1));
T101:;
	V17= cdr((V17));
	goto T86;
T87:;
	goto T84;
T84:;
	V22= one_plus((V22));
	goto T78;}}}
T61:;
	goto T60;
T60:;
	base[0]= Ct;
	base[1]= VV[4];
	base[2]= small_fixnum(1);
	base[3]= (V1);
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk0)();
	return;}
T2:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
static LnkT0(){ call_or_link(VV[0],&Lnk0);} /* READLINE-INIT */
static LnkT5(){ call_or_link(VV[5],&Lnk5);} /* PACKAGE-SIZE */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

