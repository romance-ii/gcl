
#include "cmpinclude.h"
#include "describe.h"
init_describe(){do_init(VV);}
/*	local entry for function INSPECT-READ-LINE	*/

static object LI1()

{	 VMB1 VMS1 VMV1
TTL:;
	{register object V1;
	base[0]= symbol_value(VV[0]);
	vs_top=(vs_base=base+0)+1;
	Lread_char();
	vs_top=sup;
	V1= vs_base[0];
T4:;
	base[0]= (V1);
	base[1]= VV[1];
	vs_top=(vs_base=base+0)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T6;}
	base[0]= (V1);
	base[1]= VV[2];
	vs_top=(vs_base=base+0)+2;
	Lchar_eq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T5;}
T6:;
	{object V2 = Cnil;
	VMR1(V2)}
T5:;
	base[0]= symbol_value(VV[0]);
	vs_top=(vs_base=base+0)+1;
	Lread_char();
	vs_top=sup;
	V1= vs_base[0];
	goto T4;}
}
/*	function definition for READ-INSPECT-COMMAND	*/

static L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_reserve(VM2);
	bds_check;
	{object V3;
	register object V4;
	register object V5;
	check_arg(3);
	V3=(base[0]);
	V4=(base[1]);
	V5=(base[2]);
	vs_top=sup;
TTL:;
	if((symbol_value(VV[3]))!=Cnil){
	goto T19;}
	(void)((*(LnkLI158))());
	if(((V5))==Cnil){
	goto T25;}
	(void)(princ((V3),Cnil));
	base[3]= (V4);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk159)();
	vs_top=sup;
	goto T23;
T25:;
	base[3]= Ct;
	base[4]= (V3);
	base[5]= (V4);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
T23:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
T19:;
T33:;
	(void)((*(LnkLI158))());
	if(((V5))==Cnil){
	goto T38;}
	(void)(princ((V3),Cnil));
	(void)((*(LnkLI160))());
	(void)(prin1((V4),Cnil));
	goto T36;
T38:;
	base[3]= Ct;
	base[4]= (V3);
	base[5]= (V4);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
T36:;
	base[3]= VV[4];
	vs_top=(vs_base=base+3)+1;
	Lwrite_char();
	vs_top=sup;
	vs_base=vs_top;
	Lforce_output();
	vs_top=sup;
	{register object V8;
	base[3]= symbol_value(VV[0]);
	vs_top=(vs_base=base+3)+1;
	Lread_char();
	vs_top=sup;
	V8= vs_base[0];
T52:;
	base[3]= (V8);
	base[4]= VV[4];
	vs_top=(vs_base=base+3)+2;
	Lchar_neq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T53;}
	base[3]= VV[5];
	vs_top=(vs_base=base+3)+1;
	Lchar_neq();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T53;}
	V7= (V8);
	goto T48;
T53:;
	base[3]= symbol_value(VV[0]);
	vs_top=(vs_base=base+3)+1;
	Lread_char();
	vs_top=sup;
	V8= vs_base[0];
	goto T52;}
T48:;
	{object V6= V7;
	if(!eql(V6,VV[1])
	&& !eql(V6,VV[2]))goto T66;
	if(((V5))==Cnil){
	goto T67;}
	base[3]= (V4);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk159)();
	vs_top=sup;
T67:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
T66:;
	if(!eql(V6,VV[6])
	&& !eql(V6,VV[7]))goto T71;
	(void)((*(LnkLI161))());
	if(((V5))==Cnil){
	goto T73;}
	base[3]= (V4);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk159)();
	vs_top=sup;
T73:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
T71:;
	if(!eql(V6,VV[8])
	&& !eql(V6,VV[9]))goto T77;
	(void)((*(LnkLI161))());
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
T77:;
	if(!eql(V6,VV[10])
	&& !eql(V6,VV[11]))goto T79;
	(void)((*(LnkLI161))());
	bds_bind(VV[12],Ct);
	bds_bind(VV[13],Cnil);
	bds_bind(VV[14],Cnil);
	(void)(prin1((V4),Cnil));
	princ_char(10,Cnil);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T34;
T79:;
	if(!eql(V6,VV[15])
	&& !eql(V6,VV[16]))goto T82;
	(void)((*(LnkLI161))());
	{frame_ptr fr;
	fr=frs_sch_catch(VV[17]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[17]);
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	unwind(fr,VV[17]);}
T82:;
	if(!eql(V6,VV[18])
	&& !eql(V6,VV[19]))goto T85;
	base[3]= Ct;
	{object V9;
	base[6]= symbol_value(VV[0]);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk162)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Leval();
	vs_top=sup;
	V9= vs_base[0];
	(void)((*(LnkLI161))());
	base[4]= (V9);}
	vs_top=(vs_base=base+3)+2;
	return;
T85:;
	if(!eql(V6,VV[20])
	&& !eql(V6,VV[21]))goto T92;
	{register object V10;
	register object V11;
	base[6]= symbol_value(VV[0]);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk162)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Leval();
	{object *V13=vs_top;object *V12=vs_base; vs_base=V13;
	{register object *base0=base;
	{register object *base=V13;
	register object *sup=vs_base+VM3;
	vs_reserve(VM3);
	vs_top=sup;
	(void)((*(LnkLI161))());
	}}
	vs_base=V12;vs_top=V13;}
	Llist();
	vs_top=sup;
	V10= vs_base[0];
	V11= car((V10));
T101:;
	if(!(endp((V10)))){
	goto T102;}
	goto T34;
T102:;
	base[5]= (V11);
	base[6]= VV[22];
	base[7]= symbol_value(VV[23]);
	base[8]= VV[24];
	base[9]= symbol_value(VV[25]);
	vs_top=(vs_base=base+5)+5;
	Lwrite();
	vs_top=sup;
	princ_char(10,Cnil);
	V10= cdr((V10));
	V11= car((V10));
	goto T101;}
T92:;
	if(!eql(V6,VV[26])
	&& !eql(V6,VV[27]))goto T118;
	(void)((*(LnkLI161))());
	{frame_ptr fr;
	fr=frs_sch_catch(VV[28]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[28]);
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	unwind(fr,VV[28]);}
T118:;
	(void)((*(LnkLI161))());
	princ_char(10,Cnil);
	base[3]= Ct;
	base[4]= VV[29];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;}
T34:;
	goto T33;
	}
}
/*	macro definition for INSPECT-RECURSIVELY	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	check_arg(2);
	vs_top=sup;
	{object V14=base[0]->c.c_cdr;
	if(endp(V14))invalid_macro_call();
	base[2]= (V14->c.c_car);
	V14=V14->c.c_cdr;
	if(endp(V14))invalid_macro_call();
	base[3]= (V14->c.c_car);
	V14=V14->c.c_cdr;
	if(endp(V14)){
	base[4]= Cnil;
	} else {
	base[4]= (V14->c.c_car);
	V14=V14->c.c_cdr;}
	if(!endp(V14))invalid_macro_call();}
	if((base[4])==Cnil){
	goto T128;}
	V15= list(4,VV[32],base[2],base[3],Ct);
	base[5]= list(4,VV[30],VV[31],/* INLINE-ARGS */V15,list(3,VV[33],VV[34],list(3,VV[35],base[4],VV[36])));
	vs_top=(vs_base=base+5)+1;
	return;
T128:;
	base[5]= listA(3,VV[33],list(4,VV[32],base[2],base[3],Ct),VV[37]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for INSPECT-PRINT	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	check_arg(2);
	vs_top=sup;
	{object V16=base[0]->c.c_cdr;
	if(endp(V16))invalid_macro_call();
	base[2]= (V16->c.c_car);
	V16=V16->c.c_cdr;
	if(endp(V16))invalid_macro_call();
	base[3]= (V16->c.c_car);
	V16=V16->c.c_cdr;
	if(endp(V16)){
	base[4]= Cnil;
	} else {
	base[4]= (V16->c.c_car);
	V16=V16->c.c_cdr;}
	if(!endp(V16))invalid_macro_call();}
	if((base[4])==Cnil){
	goto T132;}
	V17= list(4,VV[32],base[2],base[3],Cnil);
	base[5]= list(4,VV[30],VV[38],/* INLINE-ARGS */V17,list(3,VV[33],VV[34],list(3,VV[35],base[4],VV[36])));
	vs_top=(vs_base=base+5)+1;
	return;
T132:;
	base[5]= listA(3,VV[33],list(4,VV[32],base[2],base[3],Cnil),VV[39]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function INSPECT-INDENT	*/

static object LI5()

{	 VMB6 VMS6 VMV6
TTL:;
	vs_base=vs_top;
	Lfresh_line();
	vs_top=sup;
	base[0]= Ct;
	base[1]= VV[40];
	if(!(number_compare(symbol_value(VV[41]),small_fixnum(8))<0)){
	goto T140;}
	V18= symbol_value(VV[41]);
	goto T138;
T140:;
	V18= small_fixnum(8);
T138:;
	base[2]= number_times(small_fixnum(4),V18);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V19 = vs_base[0];
	VMR6(V19)}
}
/*	local entry for function INSPECT-INDENT-1	*/

static object LI6()

{	 VMB7 VMS7 VMV7
TTL:;
	vs_base=vs_top;
	Lfresh_line();
	vs_top=sup;
	base[0]= Ct;
	base[1]= VV[42];
	if(!(number_compare(symbol_value(VV[41]),small_fixnum(8))<0)){
	goto T148;}
	V20= symbol_value(VV[41]);
	goto T146;
T148:;
	V20= small_fixnum(8);
T146:;
	V21= number_times(small_fixnum(4),V20);
	base[2]= number_minus(/* INLINE-ARGS */V21,small_fixnum(3));
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V22 = vs_base[0];
	VMR7(V22)}
}
/*	local entry for function INSPECT-SYMBOL	*/

static object LI7(V24)

register object V24;
{	 VMB8 VMS8 VMV8
TTL:;
	{object V25;
	base[0]= (V24);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V25= vs_base[0];
	if(((V25))!=Cnil){
	goto T154;}
	base[0]= Ct;
	base[1]= VV[43];
	base[2]= (V24);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T150;
T154:;
	base[0]= VV[44];
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V26= vs_base[0];
	if(!(((V25))==(V26))){
	goto T160;}
	base[0]= Ct;
	base[1]= VV[45];
	base[2]= (V24);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	goto T150;
T160:;
	base[0]= Ct;
	base[1]= VV[46];
	base[2]= (V24);
	{object V27;
	object V28;
	base[4]= symbol_name((V24));
	base[5]= (V25);
	vs_top=(vs_base=base+4)+2;
	Lfind_symbol();
	if(vs_base>=vs_top){vs_top=sup;goto T174;}
	V27= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T175;}
	V28= vs_base[0];
	vs_top=sup;
	goto T176;
T174:;
	V27= Cnil;
T175:;
	V28= Cnil;
T176:;
	base[3]= (((V28))==(VV[47])?Ct:Cnil);}
	base[5]= (V25);
	vs_top=(vs_base=base+5)+1;
	Lpackage_name();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+0)+5;
	Lformat();
	vs_top=sup;}
T150:;
	base[0]= (V24);
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T179;}
	if((symbol_value(VV[3]))==Cnil){
	goto T184;}
	{object V29;
	object V30;
	base[0]= VV[48];
	base[2]= (V24);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_value();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Ct;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	if(vs_base>=vs_top){vs_top=sup;goto T191;}
	V29= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T192;}
	V30= vs_base[0];
	vs_top=sup;
	goto T193;
T191:;
	V29= Cnil;
T192:;
	V30= Cnil;
T193:;
	if(((V29))==Cnil){
	goto T179;}
	base[0]= (V24);
	base[1]= (V30);
	vs_top=(vs_base=base+0)+2;
	Lset();
	vs_top=sup;
	goto T179;}
T184:;
	{object V31;
	object V32;
	base[0]= VV[49];
	base[2]= (V24);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_value();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	if(vs_base>=vs_top){vs_top=sup;goto T203;}
	V31= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T204;}
	V32= vs_base[0];
	vs_top=sup;
	goto T205;
T203:;
	V31= Cnil;
T204:;
	V32= Cnil;
T205:;
	if(((V31))==Cnil){
	goto T179;}
	base[0]= (V24);
	base[1]= (V32);
	vs_top=(vs_base=base+0)+2;
	Lset();
	vs_top=sup;}
T179:;
	{register object V33;
	base[0]= (V24);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_plist();
	vs_top=sup;
	V33= vs_base[0];
T214:;
	if(!(endp((V33)))){
	goto T215;}
	goto T210;
T215:;
	if(!(type_of(car((V33)))==t_symbol)){
	goto T220;}
	base[0]= car((V33));
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V34= vs_base[0];
	base[0]= VV[50];
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V35= vs_base[0];
	if((V34)==(V35)){
	goto T219;}
	base[0]= car((V33));
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V36= vs_base[0];
	base[0]= VV[51];
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V37= vs_base[0];
	if((V36)==(V37)){
	goto T219;}
T220:;
	if((symbol_value(VV[3]))==Cnil){
	goto T235;}
	{register object V38;
	register object V39;
	base[1]= Cnil;
	base[2]= VV[52];
	base[3]= car((V33));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= cadr((V33));
	base[2]= Ct;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	if(vs_base>=vs_top){vs_top=sup;goto T244;}
	V38= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T245;}
	V39= vs_base[0];
	vs_top=sup;
	goto T246;
T244:;
	V38= Cnil;
T245:;
	V39= Cnil;
T246:;
	if(((V38))==Cnil){
	goto T219;}
	(void)(sputprop((V24),car((V33)),(V39)));
	goto T219;}
T235:;
	{register object V40;
	register object V41;
	base[1]= Cnil;
	base[2]= VV[53];
	base[3]= car((V33));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= cadr((V33));
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	if(vs_base>=vs_top){vs_top=sup;goto T256;}
	V40= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T257;}
	V41= vs_base[0];
	vs_top=sup;
	goto T258;
T256:;
	V40= Cnil;
T257:;
	V41= Cnil;
T258:;
	if(((V40))==Cnil){
	goto T219;}
	(void)(sputprop((V24),car((V33)),(V41)));}
T219:;
	V33= cddr((V33));
	goto T214;}
T210:;
	base[0]= (V24);
	base[1]= Ct;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk163)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T265;}
	base[0]= Ct;
	base[1]= VV[54];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	{object V42 = vs_base[0];
	VMR8(V42)}
T265:;
	{object V43 = Cnil;
	VMR8(V43)}
}
/*	local entry for function INSPECT-PACKAGE	*/

static object LI8(V45)

register object V45;
{	 VMB9 VMS9 VMV9
TTL:;
	base[0]= Ct;
	base[1]= VV[55];
	base[2]= (V45);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	base[0]= (V45);
	vs_top=(vs_base=base+0)+1;
	Lpackage_nicknames();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T275;}
	base[0]= VV[56];
	base[2]= (V45);
	vs_top=(vs_base=base+2)+1;
	Lpackage_nicknames();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T275;}
	princ_str("Not updated.",Cnil);
	princ_char(10,Cnil);
T275:;
	base[0]= (V45);
	vs_top=(vs_base=base+0)+1;
	Lpackage_use_list();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T286;}
	base[0]= VV[57];
	base[2]= (V45);
	vs_top=(vs_base=base+2)+1;
	Lpackage_use_list();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T286;}
	princ_str("Not updated.",Cnil);
	princ_char(10,Cnil);
T286:;
	base[0]= (V45);
	vs_top=(vs_base=base+0)+1;
	Lpackage_used_by_list();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T297;}
	base[0]= VV[58];
	base[2]= (V45);
	vs_top=(vs_base=base+2)+1;
	Lpackage_used_by_list();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T297;}
	princ_str("Not updated.",Cnil);
	princ_char(10,Cnil);
T297:;
	base[0]= (V45);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk164)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T309;}
	base[0]= VV[59];
	base[2]= (V45);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk164)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T313;}
	princ_str("Not updated.",Cnil);
	{object V46 = terpri(Cnil);
	VMR9(V46)}
T313:;
	{object V47 = Cnil;
	VMR9(V47)}
T309:;
	{object V48 = Cnil;
	VMR9(V48)}
}
/*	local entry for function INSPECT-CHARACTER	*/

static object LI9(V50)

register object V50;
{	 VMB10 VMS10 VMV10
TTL:;
	base[0]= Ct;
	base[2]= (V50);
	vs_top=(vs_base=base+2)+1;
	Lstandard_char_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T324;}
	base[1]= VV[60];
	goto T322;
T324:;
	base[2]= (V50);
	vs_top=(vs_base=base+2)+1;
	Lstring_char_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T328;}
	base[1]= VV[61];
	goto T322;
T328:;
	base[1]= VV[62];
T322:;
	base[2]= (V50);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	base[0]= VV[63];
	base[2]= (V50);
	vs_top=(vs_base=base+2)+1;
	Lchar_code();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T332;}
	princ_str("Not updated.",Cnil);
	princ_char(10,Cnil);
T332:;
	base[0]= VV[64];
	base[2]= (V50);
	vs_top=(vs_base=base+2)+1;
	Lchar_bits();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T340;}
	princ_str("Not updated.",Cnil);
	princ_char(10,Cnil);
T340:;
	base[0]= VV[65];
	base[2]= (V50);
	vs_top=(vs_base=base+2)+1;
	Lchar_font();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T349;}
	princ_str("Not updated.",Cnil);
	{object V51 = terpri(Cnil);
	VMR10(V51)}
T349:;
	{object V52 = Cnil;
	VMR10(V52)}
}
/*	local entry for function INSPECT-NUMBER	*/

static object LI10(V54)

register object V54;
{	 VMB11 VMS11 VMV11
TTL:;
	base[0]= (V54);
	vs_top=(vs_base=base+0)+1;
	Ltype_of();
	vs_top=sup;
	V56= vs_base[0];
	{object V55= V56;
	if((V55!= VV[165]))goto T358;
	base[0]= Ct;
	base[1]= VV[66];
	base[2]= (V54);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V57 = vs_base[0];
	VMR11(V57)}
T358:;
	if((V55!= VV[166]))goto T362;
	base[0]= Ct;
	base[1]= VV[67];
	base[2]= (V54);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V58 = vs_base[0];
	VMR11(V58)}
T362:;
	if((V55!= VV[167]))goto T366;
	base[0]= Ct;
	base[1]= VV[68];
	base[2]= (V54);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	base[0]= VV[69];
	base[2]= (V54);
	vs_top=(vs_base=base+2)+1;
	Lnumerator();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Ct;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T371;}
	princ_str("Not updated.",Cnil);
	princ_char(10,Cnil);
T371:;
	base[0]= VV[70];
	base[2]= (V54);
	vs_top=(vs_base=base+2)+1;
	Ldenominator();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Ct;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T380;}
	princ_str("Not updated.",Cnil);
	{object V59 = terpri(Cnil);
	VMR11(V59)}
T380:;
	{object V60 = Cnil;
	VMR11(V60)}
T366:;
	if((V55!= VV[168]))goto T387;
	base[0]= Ct;
	base[1]= VV[71];
	base[2]= (V54);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	base[0]= VV[72];
	base[2]= (V54);
	vs_top=(vs_base=base+2)+1;
	Lrealpart();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Ct;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T392;}
	princ_str("Not updated.",Cnil);
	princ_char(10,Cnil);
T392:;
	base[0]= VV[73];
	base[2]= (V54);
	vs_top=(vs_base=base+2)+1;
	Limagpart();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Ct;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T401;}
	princ_str("Not updated.",Cnil);
	{object V61 = terpri(Cnil);
	VMR11(V61)}
T401:;
	{object V62 = Cnil;
	VMR11(V62)}
T387:;
	if((V55!= VV[169])
	&& (V55!= VV[170]))goto T408;
	base[0]= Ct;
	base[1]= VV[74];
	base[2]= (V54);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V63;
	object V64;
	object V65;
	base[0]= (V54);
	vs_top=(vs_base=base+0)+1;
	Linteger_decode_float();
	if(vs_base>=vs_top){vs_top=sup;goto T415;}
	V63= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T416;}
	V64= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T417;}
	V65= vs_base[0];
	vs_top=sup;
	goto T418;
T415:;
	V63= Cnil;
T416:;
	V64= Cnil;
T417:;
	V65= Cnil;
T418:;
	base[0]= VV[75];
	base[1]= (V64);
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T419;}
	princ_str("Not updated.",Cnil);
	princ_char(10,Cnil);
T419:;
	base[0]= VV[76];
	base[1]= (V63);
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T427;}
	princ_str("Not updated.",Cnil);
	{object V66 = terpri(Cnil);
	VMR11(V66)}
T427:;
	{object V67 = Cnil;
	VMR11(V67)}}
T408:;
	if((V55!= VV[171])
	&& (V55!= VV[172]))goto T433;
	base[0]= Ct;
	base[1]= VV[77];
	base[2]= (V54);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V68;
	object V69;
	object V70;
	base[0]= (V54);
	vs_top=(vs_base=base+0)+1;
	Linteger_decode_float();
	if(vs_base>=vs_top){vs_top=sup;goto T440;}
	V68= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T441;}
	V69= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T442;}
	V70= vs_base[0];
	vs_top=sup;
	goto T443;
T440:;
	V68= Cnil;
T441:;
	V69= Cnil;
T442:;
	V70= Cnil;
T443:;
	base[0]= VV[78];
	base[1]= (V69);
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T444;}
	princ_str("Not updated.",Cnil);
	princ_char(10,Cnil);
T444:;
	base[0]= VV[79];
	base[1]= (V68);
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T452;}
	princ_str("Not updated.",Cnil);
	{object V71 = terpri(Cnil);
	VMR11(V71)}
T452:;
	{object V72 = Cnil;
	VMR11(V72)}}
T433:;
	{object V73 = Cnil;
	VMR11(V73)}}
}
/*	local entry for function INSPECT-CONS	*/

static object LI11(V75)

register object V75;
{	 VMB12 VMS12 VMV12
TTL:;
	base[0]= Ct;
	{object V76= car((V75));
	if((V76!= VV[173])
	&& (V76!= VV[174])
	&& (V76!= VV[175])
	&& (V76!= VV[176]))goto T461;
	base[1]= VV[80];
	goto T460;
T461:;
	if((V76!= VV[177]))goto T462;
	base[1]= VV[81];
	goto T460;
T462:;
	base[1]= VV[82];}
T460:;
	base[2]= (V75);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	if((symbol_value(VV[3]))==Cnil){
	goto T465;}
	{register object V77;
	register object V78;
	V77= small_fixnum(0);
	V78= (V75);
T468:;
	if(!(type_of((V78))!=t_cons)){
	goto T469;}
	{register object V79;
	register object V80;
	base[1]= Cnil;
	base[2]= VV[83];
	base[3]= (V77);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= (V78);
	base[2]= Ct;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	if(vs_base>=vs_top){vs_top=sup;goto T479;}
	V79= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T480;}
	V80= vs_base[0];
	vs_top=sup;
	goto T481;
T479:;
	V79= Cnil;
T480:;
	V80= Cnil;
T481:;
	if(((V79))==Cnil){
	goto T483;}
	{register object V81;
	register object V82;
	V83= one_minus((V77));
	V81= nthcdr(fixint(/* INLINE-ARGS */V83),(V75));
	V82= (V80);
	if(type_of((V81))!=t_cons)FEwrong_type_argument(Scons,(V81));
	((V81))->c.c_cdr = (V82);
	{object V84 = (V82);
	VMR12(V84)}}
T483:;
	{object V85 = Cnil;
	VMR12(V85)}}
T469:;
	{register object V86;
	register object V87;
	base[1]= Cnil;
	base[2]= VV[84];
	base[3]= (V77);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	vs_top=sup;
	base[0]= vs_base[0];
	base[1]= car((V78));
	base[2]= Ct;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	if(vs_base>=vs_top){vs_top=sup;goto T497;}
	V86= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T498;}
	V87= vs_base[0];
	vs_top=sup;
	goto T499;
T497:;
	V86= Cnil;
T498:;
	V87= Cnil;
T499:;
	if(((V86))==Cnil){
	goto T489;}
	{register object V88;
	register object V89;
	register object V90;
	V88= (V77);
	V89= (V75);
	V90= (V87);
	if(type_of(nthcdr(fixint((V88)),(V89)))!=t_cons)FEwrong_type_argument(Scons,nthcdr(fixint((V88)),(V89)));
	(nthcdr(fixint((V88)),(V89)))->c.c_car = (V90);
	(void)(nthcdr(fixint((V88)),(V89)));}}
T489:;
	V77= one_plus((V77));
	V78= cdr((V78));
	goto T468;}
T465:;
	{object V91 = Cnil;
	VMR12(V91)}
}
/*	local entry for function INSPECT-STRING	*/

static object LI12(V93)

register object V93;
{	 VMB13 VMS13 VMV13
TTL:;
	base[0]= Ct;
	base[2]= (V93);
	vs_top=(vs_base=base+2)+1;
	Lsimple_string_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T514;}
	base[1]= VV[85];
	goto T512;
T514:;
	base[1]= VV[86];
T512:;
	base[2]= (V93);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	base[0]= VV[87];
	base[2]= (V93);
	base[3]= small_fixnum(0);
	vs_top=(vs_base=base+2)+2;
	Larray_dimension();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T518;}
	princ_str("Not updated.",Cnil);
	princ_char(10,Cnil);
T518:;
	base[0]= (V93);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T527;}
	{object V94;
	object V95;
	base[0]= VV[88];
	base[2]= (V93);
	vs_top=(vs_base=base+2)+1;
	Lfill_pointer();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	if(vs_base>=vs_top){vs_top=sup;goto T536;}
	V94= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T537;}
	V95= vs_base[0];
	vs_top=sup;
	goto T538;
T536:;
	V94= Cnil;
T537:;
	V95= Cnil;
T538:;
	if(((V94))==Cnil){
	goto T527;}
	base[0]= (V93);
	base[1]= (V95);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;}
T527:;
	if((symbol_value(VV[3]))==Cnil){
	goto T544;}
	{register object V96;
	register object V97;
	base[1]= (V93);
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+1)+2;
	Larray_dimension();
	vs_top=sup;
	V96= vs_base[0];
	V97= small_fixnum(0);
T551:;
	if(!(number_compare((V97),(V96))>=0)){
	goto T552;}
	{object V98 = Cnil;
	VMR13(V98)}
T552:;
	{register object V99;
	register object V100;
	base[2]= Cnil;
	base[3]= VV[89];
	base[4]= (V97);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= elt((V93),fixint((V97)));
	base[3]= Ct;
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk32)();
	if(vs_base>=vs_top){vs_top=sup;goto T564;}
	V99= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T565;}
	V100= vs_base[0];
	vs_top=sup;
	goto T566;
T564:;
	V99= Cnil;
T565:;
	V100= Cnil;
T566:;
	if(((V99))==Cnil){
	goto T556;}
	(void)(elt_set((V93),fixint((V97)),(V100)));}
T556:;
	V97= one_plus((V97));
	goto T551;}
T544:;
	{object V101 = Cnil;
	VMR13(V101)}
}
/*	local entry for function INSPECT-VECTOR	*/

static object LI13(V103)

register object V103;
{	 VMB14 VMS14 VMV14
TTL:;
	base[0]= Ct;
	base[2]= (V103);
	vs_top=(vs_base=base+2)+1;
	Lsimple_vector_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T576;}
	base[1]= VV[90];
	goto T574;
T576:;
	base[1]= VV[91];
T574:;
	base[2]= (V103);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	base[0]= VV[92];
	base[2]= (V103);
	base[3]= small_fixnum(0);
	vs_top=(vs_base=base+2)+2;
	Larray_dimension();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T580;}
	princ_str("Not updated.",Cnil);
	princ_char(10,Cnil);
T580:;
	base[0]= (V103);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk178)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T589;}
	{object V104;
	object V105;
	base[0]= VV[93];
	base[2]= (V103);
	vs_top=(vs_base=base+2)+1;
	Lfill_pointer();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	if(vs_base>=vs_top){vs_top=sup;goto T598;}
	V104= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T599;}
	V105= vs_base[0];
	vs_top=sup;
	goto T600;
T598:;
	V104= Cnil;
T599:;
	V105= Cnil;
T600:;
	if(((V104))==Cnil){
	goto T589;}
	base[0]= (V103);
	base[1]= (V105);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;}
T589:;
	if((symbol_value(VV[3]))==Cnil){
	goto T606;}
	{register object V106;
	register object V107;
	base[1]= (V103);
	base[2]= small_fixnum(0);
	vs_top=(vs_base=base+1)+2;
	Larray_dimension();
	vs_top=sup;
	V106= vs_base[0];
	V107= small_fixnum(0);
T613:;
	if(!(number_compare((V107),(V106))>=0)){
	goto T614;}
	{object V108 = Cnil;
	VMR14(V108)}
T614:;
	{register object V109;
	register object V110;
	base[2]= Cnil;
	base[3]= VV[94];
	base[4]= (V107);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= aref1((V103),fixint((V107)));
	base[3]= Ct;
	vs_top=(vs_base=base+1)+3;
	(void) (*Lnk32)();
	if(vs_base>=vs_top){vs_top=sup;goto T626;}
	V109= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T627;}
	V110= vs_base[0];
	vs_top=sup;
	goto T628;
T626:;
	V109= Cnil;
T627:;
	V110= Cnil;
T628:;
	if(((V109))==Cnil){
	goto T618;}
	(void)(aset1((V103),fixint((V107)),(V110)));}
T618:;
	V107= one_plus((V107));
	goto T613;}
T606:;
	{object V111 = Cnil;
	VMR14(V111)}
}
/*	local entry for function INSPECT-ARRAY	*/

static object LI14(V113)

register object V113;
{	 VMB15 VMS15 VMV15
TTL:;
	base[0]= Ct;
	base[2]= (V113);
	vs_top=(vs_base=base+2)+1;
	Ladjustable_array_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T638;}
	base[1]= VV[95];
	goto T636;
T638:;
	base[1]= VV[96];
T636:;
	base[2]= (V113);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	base[0]= VV[97];
	base[2]= (V113);
	vs_top=(vs_base=base+2)+1;
	Larray_rank();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T642;}
	princ_str("Not updated.",Cnil);
	princ_char(10,Cnil);
T642:;
	base[0]= VV[98];
	base[1]= (*(LnkLI179))((V113));
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T650;}
	princ_str("Not updated.",Cnil);
	princ_char(10,Cnil);
T650:;
	base[0]= VV[99];
	base[2]= (V113);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk180)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T658;}
	princ_str("Not updated.",Cnil);
	{object V114 = terpri(Cnil);
	VMR15(V114)}
T658:;
	{object V115 = Cnil;
	VMR15(V115)}
}
/*	local entry for function INSPECT-STRUCTURE	*/

static object LI15(V117)

register object V117;
{	 VMB16 VMS16 VMV16
TTL:;
	{object V118;
	V118= Cnil;
	base[0]= Ct;
	base[1]= VV[100];
	base[3]= (V117);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	V118= vs_base[0];
	base[2]= (V118);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V119;
	register object V120;
	V119= get((V118),VV[101],Cnil);
	V120= structure_ref((V119),VV[101],8);
	{register object V121;
	register object V122;
	V121= structure_ref((V119),VV[101],7);
	V122= car((V121));
T677:;
	if(!(endp((V121)))){
	goto T678;}
	{object V123 = Cnil;
	VMR16(V123)}
T678:;
	base[4]= Ct;
	base[5]= VV[102];
	base[6]= aref1((V120),fixint(car(cddddr((V122)))));
	{register object V124;
	V124= caddr((V122));
	if(!((Ct)==((V124)))){
	goto T689;}
	base[7]= Cnil;
	goto T686;
T689:;
	base[7]= (V124);}
T686:;
	base[8]= car((V122));
	base[10]= (V117);
	base[11]= car(cddddr((V122)));
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk181)();
	vs_top=sup;
	base[9]= vs_base[0];
	vs_top=(vs_base=base+4)+6;
	Lformat();
	vs_top=sup;
	V121= cdr((V121));
	V122= car((V121));
	goto T677;}}}
}
/*	function definition for INSPECT-OBJECT	*/

static L16()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM17; VC17
	vs_reserve(VM17);
	bds_check;
	{VOL object V125;
	check_arg(1);
	V125=(base[0]);
	vs_top=sup;
TTL:;
	bds_bind(VV[41],symbol_value(VV[41]));
	(void)((*(LnkLI160))());
	if((symbol_value(VV[3]))!=Cnil){
	goto T701;}
	if(number_compare((VV[41]->s.s_dbind),small_fixnum(5))>0){
	goto T702;}
	{register object x= (V125),V126= symbol_value(VV[103]);
	while(!endp(V126))
	if(eql(x,V126->c.c_car)){
	goto T707;
	}else V126=V126->c.c_cdr;
	goto T701;}
T707:;
T702:;
	(void)(prin1((V125),Cnil));
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
T701:;
	(VV[41]->s.s_dbind)= number_plus((VV[41]->s.s_dbind),small_fixnum(1));
	setq(VV[103],make_cons((V125),symbol_value(VV[103])));
	frs_push(FRS_CATCH,VV[17]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	bds_unwind1;
	return;}
	else{
	if(!(type_of((V125))==t_symbol)){
	goto T715;}
	V127= (*(LnkLI182))((V125));
	frs_pop();
	base[2]= V127;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
T715:;
	base[2]= (V125);
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T718;}
	V128= (*(LnkLI183))((V125));
	frs_pop();
	base[2]= V128;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
T718:;
	if(!(type_of((V125))==t_character)){
	goto T722;}
	V129= (*(LnkLI184))((V125));
	frs_pop();
	base[2]= V129;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
T722:;
	if(!(type_of((V125))==t_fixnum||
type_of((V125))==t_bignum||
type_of((V125))==t_ratio||
type_of((V125))==t_shortfloat||
type_of((V125))==t_longfloat||
type_of((V125))==t_complex)){
	goto T725;}
	V130= (*(LnkLI185))((V125));
	frs_pop();
	base[2]= V130;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
T725:;
	if(!(type_of((V125))==t_cons)){
	goto T728;}
	V131= (*(LnkLI186))((V125));
	frs_pop();
	base[2]= V131;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
T728:;
	if(!(type_of((V125))==t_string)){
	goto T731;}
	V132= (*(LnkLI187))((V125));
	frs_pop();
	base[2]= V132;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
T731:;
	if(!(type_of((V125))==t_vector||
type_of((V125))==t_string||
type_of((V125))==t_bitvector)){
	goto T734;}
	V133= (*(LnkLI188))((V125));
	frs_pop();
	base[2]= V133;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
T734:;
	if(!(type_of((V125))==t_array||
type_of((V125))==t_vector||
type_of((V125))==t_string||
type_of((V125))==t_bitvector)){
	goto T737;}
	V134= (*(LnkLI189))((V125));
	frs_pop();
	base[2]= V134;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
T737:;
	if(!(type_of((V125))==t_structure)){
	goto T740;}
	V135= (*(LnkLI190))((V125));
	frs_pop();
	base[2]= V135;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
T740:;
	base[2]= Ct;
	base[3]= VV[104];
	base[4]= (V125);
	base[6]= (V125);
	vs_top=(vs_base=base+6)+1;
	Ltype_of();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+2)+4;
	Lformat();
	frs_pop();
	bds_unwind1;
	return;}
	}
}
/*	function definition for DESCRIBE	*/

static L17()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM18; VC18
	vs_reserve(VM18);
	bds_check;
	{VOL object V136;
	check_arg(1);
	V136=(base[0]);
	vs_top=sup;
TTL:;
	bds_bind(VV[3],Cnil);
	bds_bind(VV[41],small_fixnum(0));
	bds_bind(VV[103],Cnil);
	bds_bind(VV[13],Cnil);
	bds_bind(VV[14],Cnil);
	princ_char(10,Cnil);
	frs_push(FRS_CATCH,VV[28]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	goto T748;}
	else{
	base[6]= (V136);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk159)();
	vs_top=sup;
	frs_pop();}
T748:;
	princ_char(10,Cnil);
	vs_base=vs_top=base+6;
	vs_base[0]=Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	function definition for INSPECT	*/

static L18()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM19; VC19
	vs_reserve(VM19);
	bds_check;
	{VOL object V137;
	check_arg(1);
	V137=(base[0]);
	vs_top=sup;
TTL:;
	bds_bind(VV[3],Ct);
	bds_bind(VV[41],small_fixnum(0));
	bds_bind(VV[103],Cnil);
	bds_bind(VV[23],symbol_value(VV[13]));
	bds_bind(VV[25],symbol_value(VV[14]));
	bds_bind(VV[13],small_fixnum(3));
	bds_bind(VV[14],small_fixnum(3));
	vs_base=vs_top;
	Lread_line();
	vs_top=sup;
	princ_str("Type ? and a newline for help.",Cnil);
	princ_char(10,Cnil);
	frs_push(FRS_CATCH,VV[28]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	goto T755;}
	else{
	base[8]= (V137);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk159)();
	vs_top=sup;
	frs_pop();}
T755:;
	princ_char(10,Cnil);
	vs_base=vs_top=base+8;
	vs_base[0]=Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	function definition for PRINT-DOC	*/

static L19()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	bds_check;
	{object V138;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T759;}
	V138=(base[1]);
	vs_top=sup;
	goto T760;
T759:;
	V138= Cnil;
T760:;
	{register object V139;
	base[2]= Cnil;
	V139= Cnil;
	base[3]= base[0];
	vs_top=(vs_base=base+3)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T766;}{object V140;
	V140= (*(LnkLI191))(base[0],VV[105]);
	if(V140==Cnil)goto T770;
	base[3]= V140;
	goto T769;
T770:;}
	base[3]= VV[106];
T769:;
	base[5]= base[0];
	vs_top=(vs_base=base+5)+1;
	Lmacro_function();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T774;}
	base[4]= VV[107];
	goto T772;
T774:;
	base[4]= VV[108];
T772:;
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T764;
T766:;
	base[3]= base[0];
	vs_top=(vs_base=base+3)+1;
	Lmacro_function();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T778;}{object V141;
	V141= (*(LnkLI191))(base[0],VV[105]);
	if(V141==Cnil)goto T782;
	base[3]= V141;
	goto T781;
T782:;}
	base[3]= VV[109];
T781:;
	base[4]= VV[110];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T764;
T778:;
	base[3]= base[0];
	vs_top=(vs_base=base+3)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T786;}{object V142;
	V142= (*(LnkLI191))(base[0],VV[105]);
	if(V142==Cnil)goto T790;
	base[3]= V142;
	goto T789;
T790:;}
	base[4]= base[0];
	vs_top=(vs_base=base+4)+1;
	Lsymbol_function();
	vs_top=sup;
	V139= vs_base[0];
	if(!(type_of((V139))==t_cons)){
	goto T793;}
	{object V143= car((V139));
	if((V143!= VV[173]))goto T797;
	base[4]= Cnil;
	base[5]= VV[111];
	base[6]= cadr((V139));
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T789;
T797:;
	if((V143!= VV[174]))goto T801;
	base[4]= Cnil;
	base[5]= VV[112];
	base[6]= caddr((V139));
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T789;
T801:;
	if((V143!= VV[175]))goto T805;
	base[4]= Cnil;
	base[5]= VV[113];
	base[6]= car(cddddr((V139)));
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T789;
T805:;
	if((V143!= VV[176]))goto T809;
	base[4]= Cnil;
	base[5]= VV[114];
	base[6]= cadr(cddddr((V139)));
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T789;
T809:;
	base[3]= VV[115];
	goto T789;}
T793:;
	base[3]= VV[116];
T789:;
	base[4]= VV[117];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T764;
T786:;
	V139= (*(LnkLI191))(base[0],VV[105]);
	if(((V139))==Cnil){
	goto T764;}
	base[3]= (V139);
	base[4]= VV[118];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
T764:;
	base[3]= base[0];
	vs_top=(vs_base=base+3)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T821;}
	base[3]= base[0];
	vs_top=(vs_base=base+3)+1;
	Lsymbol_package();
	vs_top=sup;
	V144= vs_base[0];
	base[3]= VV[119];
	vs_top=(vs_base=base+3)+1;
	Lfind_package();
	vs_top=sup;
	V145= vs_base[0];
	if(!((V144)==(V145))){
	goto T824;}
	if(((*(LnkLI191))(base[0],VV[120]))==Cnil){
	goto T819;}
T824:;{object V146;
	V146= (*(LnkLI191))(base[0],VV[120]);
	if(V146==Cnil)goto T833;
	base[3]= V146;
	goto T832;
T833:;}
	base[3]= VV[121];
T832:;
	base[4]= VV[122];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T819;
T821:;
	base[3]= base[0];
	vs_top=(vs_base=base+3)+1;
	siLspecialp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T837;}{object V147;
	V147= (*(LnkLI191))(base[0],VV[120]);
	if(V147==Cnil)goto T841;
	base[3]= V147;
	goto T840;
T841:;}
	base[3]= VV[123];
T840:;
	base[4]= VV[124];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T819;
T837:;
	V139= (*(LnkLI191))(base[0],VV[120]);
	if(((V139))!=Cnil){
	goto T844;}
	base[3]= base[0];
	vs_top=(vs_base=base+3)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T819;}
T844:;
	if((V139)!=Cnil){
	base[3]= (V139);
	goto T850;}
	base[3]= VV[125];
T850:;
	base[4]= VV[126];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
T819:;
	V139= (*(LnkLI191))(base[0],VV[127]);
	if(((V139))==Cnil){
	goto T854;}
	base[3]= (V139);
	base[4]= VV[128];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T852;
T854:;
	V139= get(base[0],VV[129],Cnil);
	if(((V139))==Cnil){
	goto T852;}
	vs_base=vs_top;
	L21(base);
	vs_top=sup;
	base[3]= vs_base[0];
	bds_bind(VV[130],base[3]);
	base[5]= Cnil;
	base[6]= VV[131];
	base[7]= (V139);
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[132];
	vs_top=(vs_base=base+4)+2;
	L20(base);
	vs_top=sup;
	bds_unwind1;
T852:;
	V139= (*(LnkLI191))(base[0],VV[133]);
	if(((V139))==Cnil){
	goto T870;}
	base[3]= (V139);
	base[4]= VV[134];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T868;
T870:;
	V139= get(base[0],VV[135],Cnil);
	if(((V139))==Cnil){
	goto T868;}
	base[4]= Cnil;
	base[5]= VV[136];
	base[6]= (V139);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= VV[137];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
T868:;
	V139= (*(LnkLI191))(base[0],VV[35]);
	if(((V139))==Cnil){
	goto T884;}
	base[3]= (V139);
	base[4]= VV[138];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T763;
T884:;
	V139= get(base[0],VV[139],Cnil);
	if(((V139))==Cnil){
	goto T890;}
	vs_base=vs_top;
	L21(base);
	vs_top=sup;
	base[3]= vs_base[0];
	bds_bind(VV[130],base[3]);
	base[5]= Cnil;
	base[6]= VV[140];
	V148= get(base[0],VV[139],Cnil);
	base[7]= list(3,VV[141],base[0],V148);
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[142];
	vs_top=(vs_base=base+4)+2;
	L20(base);
	vs_top=sup;
	bds_unwind1;
	goto T763;
T890:;
	V139= get(base[0],VV[143],Cnil);
	if(((V139))==Cnil){
	goto T901;}
	vs_base=vs_top;
	L21(base);
	vs_top=sup;
	base[3]= vs_base[0];
	bds_bind(VV[130],base[3]);
	base[5]= Cnil;
	base[6]= VV[144];
	V149= get(base[0],VV[143],Cnil);
	base[7]= listA(3,VV[141],base[0],V149);
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[145];
	vs_top=(vs_base=base+4)+2;
	L20(base);
	vs_top=sup;
	bds_unwind1;
	goto T763;
T901:;
	V139= get(base[0],VV[146],Cnil);
	if(((V139))==Cnil){
	goto T763;}
	vs_base=vs_top;
	L21(base);
	vs_top=sup;
	base[3]= vs_base[0];
	bds_bind(VV[130],base[3]);
	base[5]= Cnil;
	base[6]= VV[147];
	if(!(type_of((V139))==t_cons)){
	goto T920;}
	{object V150= car((V139));
	if((V150!= VV[173]))goto T922;
	base[7]= make_cons(VV[148],cdr((V139)));
	goto T918;
T922:;
	if((V150!= VV[174]))goto T923;
	base[7]= make_cons(VV[148],cddr((V139)));
	goto T918;
T923:;
	if((V150!= VV[175]))goto T924;
	base[7]= make_cons(VV[148],cddddr((V139)));
	goto T918;
T924:;
	if((V150!= VV[176]))goto T925;
	base[7]= make_cons(VV[148],cdr(cddddr((V139))));
	goto T918;
T925:;
	base[7]= Cnil;
	goto T918;}
T920:;
	base[7]= Cnil;
T918:;
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[149];
	vs_top=(vs_base=base+4)+2;
	L20(base);
	vs_top=sup;
	bds_unwind1;
T763:;
	base[3]= symbol_name(base[0]);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk192)();
	vs_top=sup;
	if(((V138))==Cnil){
	goto T930;}
	vs_top=(vs_base=base+2)+1;
	return;
T930:;
	if((base[2])==Cnil){
	goto T934;}
	base[3]= Ct;
	base[4]= VV[153];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	goto T932;
T934:;
	base[3]= Ct;
	base[4]= VV[154];
	base[5]= base[0];
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
T932:;
	vs_base=vs_top=base+3;
	vs_base[0]=Cnil;
	return;}
	}
}
/*	function definition for APROPOS-DOC	*/

static L22()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{object V151;
	object V152;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V151=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T941;}
	V152=(base[1]);
	vs_top=sup;
	goto T942;
T941:;
	V152= VV[155];
T942:;
	{register object V153;
	V153= Cnil;
	V151= coerce_to_string((V151));
	if(((V152))==Cnil){
	goto T949;}
	{object V154;
	register object V155;
	register object V156;
	base[2]= V152;
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T953;}
	V154= V152;
	goto T951;
T953:;
	base[2]= coerce_to_string(V152);
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V154= vs_base[0];
T951:;
	V155= Cnil;
	V156= Cnil;
	{int V158;
	int V159;
	base[2]= (V154);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk193)();
	if(vs_base>=vs_top){vs_top=sup;goto T959;}
	V158= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T960;}
	V159= fix(vs_base[0]);
	vs_top=sup;
	goto T961;
T959:;
	V158= fix(Cnil);
T960:;
	V159= fix(Cnil);
T961:;
	{object V160;
	object V161;
	V162 = make_fixnum(V159);
	V163 = make_fixnum(V158);
	V160= number_plus(V162,V163);
	V161= small_fixnum(0);
T965:;
	if(!(number_compare((V161),(V160))>=0)){
	goto T966;}
	V155= Cnil;
	goto T947;
T966:;
	V164 = make_fixnum(V159);
	if(!(number_compare((V161),V164)<0)){
	goto T977;}
	base[3]= (V154);
	base[4]= (V161);
	vs_top=(vs_base=base+3)+2;
	siLpackage_internal();
	vs_top=sup;
	V156= vs_base[0];
	goto T975;
T977:;
	base[3]= (V154);
	V165 = make_fixnum(V159);
	base[4]= number_minus((V161),V165);
	vs_top=(vs_base=base+3)+2;
	siLpackage_external();
	vs_top=sup;
	V156= vs_base[0];
T975:;
T973:;
	if(((V156))!=Cnil){
	goto T983;}
	goto T974;
T983:;
	V155= car((V156));
	V166= coerce_to_string((V155));
	if(((*(LnkLI194))((V151),/* INLINE-ARGS */V166))==Cnil){
	goto T988;}{object V167;
	base[3]= (V155);
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk163)();
	vs_top=sup;
	V167= vs_base[0];
	if(V167==Cnil)goto T992;
	V153= V167;
	goto T991;
T992:;}
T991:;
T988:;
	V156= cdr((V156));
	goto T973;
T974:;
	goto T971;
T971:;
	V161= one_plus((V161));
	goto T965;}}}
T949:;
	{object V168;
	object V169;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V168= vs_base[0];
	V169= car((V168));
T1004:;
	if(!(endp((V168)))){
	goto T1005;}
	goto T947;
T1005:;
	{object V170;
	register object V171;
	register object V172;
	base[4]= V169;
	vs_top=(vs_base=base+4)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1012;}
	V170= V169;
	goto T1010;
T1012:;
	base[4]= coerce_to_string(V169);
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V170= vs_base[0];
T1010:;
	V171= Cnil;
	V172= Cnil;
	{int V174;
	int V175;
	base[4]= (V170);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk193)();
	if(vs_base>=vs_top){vs_top=sup;goto T1018;}
	V174= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1019;}
	V175= fix(vs_base[0]);
	vs_top=sup;
	goto T1020;
T1018:;
	V174= fix(Cnil);
T1019:;
	V175= fix(Cnil);
T1020:;
	{object V176;
	register object V177;
	V178 = make_fixnum(V175);
	V179 = make_fixnum(V174);
	V176= number_plus(V178,V179);
	V177= small_fixnum(0);
T1024:;
	if(!(number_compare((V177),(V176))>=0)){
	goto T1025;}
	V171= Cnil;
	goto T1009;
T1025:;
	V180 = make_fixnum(V175);
	if(!(number_compare((V177),V180)<0)){
	goto T1036;}
	base[5]= (V170);
	base[6]= (V177);
	vs_top=(vs_base=base+5)+2;
	siLpackage_internal();
	vs_top=sup;
	V172= vs_base[0];
	goto T1034;
T1036:;
	base[5]= (V170);
	V181 = make_fixnum(V175);
	base[6]= number_minus((V177),V181);
	vs_top=(vs_base=base+5)+2;
	siLpackage_external();
	vs_top=sup;
	V172= vs_base[0];
T1034:;
T1032:;
	if(((V172))!=Cnil){
	goto T1042;}
	goto T1033;
T1042:;
	V171= car((V172));
	V182= coerce_to_string((V171));
	if(((*(LnkLI194))((V151),/* INLINE-ARGS */V182))==Cnil){
	goto T1047;}{object V183;
	base[5]= (V171);
	base[6]= Ct;
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk163)();
	vs_top=sup;
	V183= vs_base[0];
	if(V183==Cnil)goto T1051;
	V153= V183;
	goto T1050;
T1051:;}
T1050:;
T1047:;
	V172= cdr((V172));
	goto T1032;
T1033:;
	goto T1030;
T1030:;
	V177= one_plus((V177));
	goto T1024;}}}
T1009:;
	V168= cdr((V168));
	V169= car((V168));
	goto T1004;}
T947:;
	if(((V153))==Cnil){
	goto T1067;}
	base[2]= Ct;
	base[3]= VV[156];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	goto T1065;
T1067:;
	base[2]= Ct;
	base[3]= VV[157];
	base[4]= (V151);
	base[5]= (V152);
	if((V152)==Cnil){
	base[6]= Cnil;
	goto T1075;}
	base[8]= V152;
	vs_top=(vs_base=base+8)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1078;}
	base[7]= V152;
	goto T1076;
T1078:;
	base[8]= coerce_to_string(V152);
	vs_top=(vs_base=base+8)+1;
	Lfind_package();
	vs_top=sup;
	base[7]= vs_base[0];
T1076:;
	vs_top=(vs_base=base+7)+1;
	Lpackage_name();
	vs_top=sup;
	base[6]= vs_base[0];
T1075:;
	vs_top=(vs_base=base+2)+5;
	Lformat();
	vs_top=sup;
T1065:;
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;}
	}
}
/*	local function GOOD-PACKAGE	*/

static L21(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	check_arg(0);
	vs_top=sup;
TTL:;
	base[0]= base0[0];
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V185= vs_base[0];
	base[0]= VV[151];
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V186= vs_base[0];
	if(!((V185)==(V186))){
	goto T1083;}
	base[0]= VV[152];
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	return;
T1083:;
	base[0]= symbol_value(VV[130]);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function DOC1	*/

static L20(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	{object V187;
	object V188;
	check_arg(2);
	V187=(base[0]);
	V188=(base[1]);
	vs_top=sup;
TTL:;
	base0[2]= Ct;
	base[2]= Ct;
	base[3]= VV[150];
	base[4]= base0[0];
	base[5]= (V188);
	base[6]= (V187);
	vs_top=(vs_base=base+2)+5;
	Lformat();
	return;
	}
}
static object  LnkTLI194(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[194],&LnkLI194,2,ap);} /* SUBSTRINGP */
static LnkT193(){ call_or_link(VV[193],&Lnk193);} /* PACKAGE-SIZE */
static LnkT192(){ call_or_link(VV[192],&Lnk192);} /* IDESCRIBE */
static object  LnkTLI191(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[191],&LnkLI191,2,ap);} /* DOCUMENTATION */
static object  LnkTLI190(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[190],&LnkLI190,1,ap);} /* INSPECT-STRUCTURE */
static object  LnkTLI189(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[189],&LnkLI189,1,ap);} /* INSPECT-ARRAY */
static object  LnkTLI188(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[188],&LnkLI188,1,ap);} /* INSPECT-VECTOR */
static object  LnkTLI187(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[187],&LnkLI187,1,ap);} /* INSPECT-STRING */
static object  LnkTLI186(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[186],&LnkLI186,1,ap);} /* INSPECT-CONS */
static object  LnkTLI185(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[185],&LnkLI185,1,ap);} /* INSPECT-NUMBER */
static object  LnkTLI184(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[184],&LnkLI184,1,ap);} /* INSPECT-CHARACTER */
static object  LnkTLI183(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[183],&LnkLI183,1,ap);} /* INSPECT-PACKAGE */
static object  LnkTLI182(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[182],&LnkLI182,1,ap);} /* INSPECT-SYMBOL */
static LnkT181(){ call_or_link(VV[181],&Lnk181);} /* STRUCTURE-REF1 */
static LnkT180(){ call_or_link(VV[180],&Lnk180);} /* ARRAY-TOTAL-SIZE */
static object  LnkTLI179(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[179],&LnkLI179,1,ap);} /* ARRAY-DIMENSIONS */
static LnkT178(){ call_or_link(VV[178],&Lnk178);} /* ARRAY-HAS-FILL-POINTER-P */
static LnkT164(){ call_or_link(VV[164],&Lnk164);} /* PACKAGE-SHADOWING-SYMBOLS */
static LnkT163(){ call_or_link(VV[163],&Lnk163);} /* PRINT-DOC */
static LnkT32(){ call_or_link(VV[32],&Lnk32);} /* READ-INSPECT-COMMAND */
static LnkT162(){ call_or_link(VV[162],&Lnk162);} /* READ-PRESERVING-WHITESPACE */
static object  LnkTLI161(){return call_proc0(VV[161],&LnkLI161);} /* INSPECT-READ-LINE */
static object  LnkTLI160(){return call_proc0(VV[160],&LnkLI160);} /* INSPECT-INDENT */
static LnkT159(){ call_or_link(VV[159],&Lnk159);} /* INSPECT-OBJECT */
static object  LnkTLI158(){return call_proc0(VV[158],&LnkLI158);} /* INSPECT-INDENT-1 */
