
#include "cmpinclude.h"
#include "gcl_describe.h"
void init_gcl_describe(){do_init(VV);}
/*	local entry for function INSPECT-READ-LINE	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	{register object V1;
	base[0]= symbol_value(VV[0]);
	vs_top=(vs_base=base+0)+1;
	Lread_char();
	vs_top=sup;
	V1= vs_base[0];
	goto T4;
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
	goto T6;
T6:;
	{object V2 = Cnil;
	VMR1(V2)}
	goto T5;
T5:;
	base[0]= symbol_value(VV[0]);
	vs_top=(vs_base=base+0)+1;
	Lread_char();
	vs_top=sup;
	V1= vs_base[0];
	goto T4;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for READ-INSPECT-COMMAND	*/

static void L2()
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
	goto TTL;
TTL:;
	if((symbol_value(VV[3]))!=Cnil){
	goto T19;}
	(void)((*(LnkLI159))());
	if(((V5))==Cnil){
	goto T25;}
	(void)(princ((V3),Cnil));
	base[3]= (V4);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk160)();
	vs_top=sup;
	goto T23;
	goto T25;
T25:;
	base[3]= Ct;
	base[4]= (V3);
	base[5]= (V4);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	goto T23;
T23:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T19;
T19:;
	goto T33;
T33:;
	(void)((*(LnkLI159))());
	if(((V5))==Cnil){
	goto T38;}
	(void)(princ((V3),Cnil));
	(void)((*(LnkLI161))());
	(void)(prin1((V4),Cnil));
	goto T36;
	goto T38;
T38:;
	base[3]= Ct;
	base[4]= (V3);
	base[5]= (V4);
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	goto T36;
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
	goto T52;
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
	goto T53;
T53:;
	base[3]= symbol_value(VV[0]);
	vs_top=(vs_base=base+3)+1;
	Lread_char();
	vs_top=sup;
	V8= vs_base[0];
	goto T52;}
	goto T48;
T48:;
	{object V6= V7;
	if(!eql(V6,VV[1])
	&& !eql(V6,VV[2]))goto T66;
	if(((V5))==Cnil){
	goto T67;}
	base[3]= (V4);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk160)();
	vs_top=sup;
	goto T67;
T67:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T66;
T66:;
	if(!eql(V6,VV[6])
	&& !eql(V6,VV[7]))goto T71;
	(void)((*(LnkLI162))());
	if(((V5))==Cnil){
	goto T73;}
	base[3]= (V4);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk160)();
	vs_top=sup;
	goto T73;
T73:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T71;
T71:;
	if(!eql(V6,VV[8])
	&& !eql(V6,VV[9]))goto T77;
	(void)((*(LnkLI162))());
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T77;
T77:;
	if(!eql(V6,VV[10])
	&& !eql(V6,VV[11]))goto T79;
	(void)((*(LnkLI162))());
	bds_bind(VV[12],Ct);
	bds_bind(VV[13],Cnil);
	bds_bind(VV[14],Cnil);
	(void)(prin1((V4),Cnil));
	princ_char(10,Cnil);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T34;
	goto T79;
T79:;
	if(!eql(V6,VV[15])
	&& !eql(V6,VV[16]))goto T82;
	(void)((*(LnkLI162))());
	{frame_ptr fr;
	fr=frs_sch_catch(VV[17]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[17]);
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	unwind(fr,VV[17]);}
	goto T82;
T82:;
	if(!eql(V6,VV[18])
	&& !eql(V6,VV[19]))goto T85;
	base[3]= Ct;
	{object V9;
	base[6]= symbol_value(VV[0]);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk163)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Leval();
	vs_top=sup;
	V9= vs_base[0];
	(void)((*(LnkLI162))());
	base[4]= (V9);}
	vs_top=(vs_base=base+3)+2;
	return;
	goto T85;
T85:;
	if(!eql(V6,VV[20])
	&& !eql(V6,VV[21]))goto T92;
	{register object V10;
	register object V11;
	base[6]= symbol_value(VV[0]);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk163)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Leval();
	{object *V13=vs_top;object *V12=vs_base; vs_base=V13;
	{register object *base0=base;
	{register object *base=V13;
	register object *sup=vs_base+VM3;
	base0[0]=base0[0];
	base[0]=base[0];
	vs_reserve(VM3);
	vs_top=sup;
	(void)((*(LnkLI162))());
	}}
	vs_base=V12;vs_top=V13;}
	Llist();
	vs_top=sup;
	V10= vs_base[0];
	V11= car((V10));
	goto T101;
T101:;
	if(!(endp_prop((V10)))){
	goto T102;}
	goto T34;
	goto T102;
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
	goto T92;
T92:;
	if(!eql(V6,VV[26])
	&& !eql(V6,VV[27]))goto T118;
	(void)((*(LnkLI162))());
	{frame_ptr fr;
	fr=frs_sch_catch(VV[28]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[28]);
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	unwind(fr,VV[28]);}
	goto T118;
T118:;
	(void)((*(LnkLI162))());
	princ_char(10,Cnil);
	base[3]= Ct;
	base[4]= VV[29];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;}
	goto T34;
T34:;
	goto T33;
	}
}
/*	macro definition for INSPECT-RECURSIVELY	*/

static void L3()
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
	goto T128;
T128:;
	base[5]= listA(3,VV[33],list(4,VV[32],base[2],base[3],Ct),VV[37]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for INSPECT-PRINT	*/

static void L4()
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
	goto T132;
T132:;
	base[5]= listA(3,VV[33],list(4,VV[32],base[2],base[3],Cnil),VV[39]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function INSPECT-INDENT	*/

static object LI5()

{	 VMB6 VMS6 VMV6
	goto TTL;
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
	goto T140;
T140:;
	V18= small_fixnum(8);
	goto T138;
T138:;
	base[2]= number_times(small_fixnum(4),V18);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V19 = vs_base[0];
	VMR6(V19)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INSPECT-INDENT-1	*/

static object LI6()

{	 VMB7 VMS7 VMV7
	goto TTL;
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
	goto T148;
T148:;
	V20= small_fixnum(8);
	goto T146;
T146:;
	V21= number_times(small_fixnum(4),V20);
	base[2]= number_minus(/* INLINE-ARGS */V21,small_fixnum(3));
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V22 = vs_base[0];
	VMR7(V22)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INSPECT-SYMBOL	*/

static object LI7(V24)

register object V24;
{	 VMB8 VMS8 VMV8
	goto TTL;
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
	goto T154;
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
	goto T160;
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
	goto T174;
T174:;
	V27= Cnil;
	goto T175;
T175:;
	V28= Cnil;
	goto T176;
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
	goto T150;
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
	goto T191;
T191:;
	V29= Cnil;
	goto T192;
T192:;
	V30= Cnil;
	goto T193;
T193:;
	if(((V29))==Cnil){
	goto T179;}
	base[0]= (V24);
	base[1]= (V30);
	vs_top=(vs_base=base+0)+2;
	Lset();
	vs_top=sup;
	goto T179;}
	goto T184;
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
	goto T203;
T203:;
	V31= Cnil;
	goto T204;
T204:;
	V32= Cnil;
	goto T205;
T205:;
	if(((V31))==Cnil){
	goto T179;}
	base[0]= (V24);
	base[1]= (V32);
	vs_top=(vs_base=base+0)+2;
	Lset();
	vs_top=sup;}
	goto T179;
T179:;
	{register object V33;
	base[0]= (V24);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_plist();
	vs_top=sup;
	V33= vs_base[0];
	goto T214;
T214:;
	if(!(endp_prop((V33)))){
	goto T215;}
	goto T210;
	goto T215;
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
	goto T220;
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
	goto T244;
T244:;
	V38= Cnil;
	goto T245;
T245:;
	V39= Cnil;
	goto T246;
T246:;
	if(((V38))==Cnil){
	goto T219;}
	(void)(sputprop((V24),car((V33)),(V39)));
	goto T219;}
	goto T235;
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
	goto T256;
T256:;
	V40= Cnil;
	goto T257;
T257:;
	V41= Cnil;
	goto T258;
T258:;
	if(((V40))==Cnil){
	goto T219;}
	(void)(sputprop((V24),car((V33)),(V41)));}
	goto T219;
T219:;
	V33= cddr((V33));
	goto T214;}
	goto T210;
T210:;
	base[0]= (V24);
	base[1]= Ct;
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk164)();
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
	goto T265;
T265:;
	{object V43 = Cnil;
	VMR8(V43)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INSPECT-PACKAGE	*/

static object LI8(V45)

register object V45;
{	 VMB9 VMS9 VMV9
	goto TTL;
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
	goto T275;
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
	goto T286;
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
	goto T297;
T297:;
	base[0]= (V45);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk165)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T309;}
	base[0]= VV[59];
	base[2]= (V45);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk165)();
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
	goto T313;
T313:;
	{object V47 = Cnil;
	VMR9(V47)}
	goto T309;
T309:;
	{object V48 = Cnil;
	VMR9(V48)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INSPECT-CHARACTER	*/

static object LI9(V50)

register object V50;
{	 VMB10 VMS10 VMV10
	goto TTL;
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
	goto T324;
T324:;
	base[2]= (V50);
	vs_top=(vs_base=base+2)+1;
	Lstring_char_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T328;}
	base[1]= VV[61];
	goto T322;
	goto T328;
T328:;
	base[1]= VV[62];
	goto T322;
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
	goto T332;
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
	goto T340;
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
	goto T349;
T349:;
	{object V52 = Cnil;
	VMR10(V52)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INSPECT-NUMBER	*/

static object LI10(V54)

register object V54;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	base[0]= (V54);
	vs_top=(vs_base=base+0)+1;
	Ltype_of();
	vs_top=sup;
	V56= vs_base[0];
	{object V55= V56;
	if((V55!= VV[166]))goto T358;
	base[0]= Ct;
	base[1]= VV[66];
	base[2]= (V54);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V57 = vs_base[0];
	VMR11(V57)}
	goto T358;
T358:;
	if((V55!= VV[167]))goto T362;
	base[0]= Ct;
	base[1]= VV[67];
	base[2]= (V54);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V58 = vs_base[0];
	VMR11(V58)}
	goto T362;
T362:;
	if((V55!= VV[168]))goto T366;
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
	goto T371;
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
	goto T380;
T380:;
	{object V60 = Cnil;
	VMR11(V60)}
	goto T366;
T366:;
	if((V55!= VV[169]))goto T387;
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
	goto T392;
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
	goto T401;
T401:;
	{object V62 = Cnil;
	VMR11(V62)}
	goto T387;
T387:;
	if((V55!= VV[170])
	&& (V55!= VV[171]))goto T408;
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
	goto T415;
T415:;
	V63= Cnil;
	goto T416;
T416:;
	V64= Cnil;
	goto T417;
T417:;
	V65= Cnil;
	goto T418;
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
	goto T419;
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
	goto T427;
T427:;
	{object V67 = Cnil;
	VMR11(V67)}}
	goto T408;
T408:;
	if((V55!= VV[172])
	&& (V55!= VV[173]))goto T433;
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
	goto T440;
T440:;
	V68= Cnil;
	goto T441;
T441:;
	V69= Cnil;
	goto T442;
T442:;
	V70= Cnil;
	goto T443;
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
	goto T444;
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
	goto T452;
T452:;
	{object V72 = Cnil;
	VMR11(V72)}}
	goto T433;
T433:;
	{object V73 = Cnil;
	VMR11(V73)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INSPECT-CONS	*/

static object LI11(V75)

register object V75;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	base[0]= Ct;
	{object V76= car((V75));
	if((V76!= VV[174])
	&& (V76!= VV[175])
	&& (V76!= VV[176])
	&& (V76!= VV[177]))goto T461;
	base[1]= VV[80];
	goto T460;
	goto T461;
T461:;
	if((V76!= VV[178]))goto T462;
	base[1]= VV[81];
	goto T460;
	goto T462;
T462:;
	base[1]= VV[82];}
	goto T460;
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
	goto T468;
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
	goto T479;
T479:;
	V79= Cnil;
	goto T480;
T480:;
	V80= Cnil;
	goto T481;
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
	goto T483;
T483:;
	{object V85 = Cnil;
	VMR12(V85)}}
	goto T469;
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
	goto T497;
T497:;
	V86= Cnil;
	goto T498;
T498:;
	V87= Cnil;
	goto T499;
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
	goto T489;
T489:;
	V77= one_plus((V77));
	V78= cdr((V78));
	goto T468;}
	goto T465;
T465:;
	{object V91 = Cnil;
	VMR12(V91)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INSPECT-STRING	*/

static object LI12(V93)

register object V93;
{	 VMB13 VMS13 VMV13
	goto TTL;
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
	goto T514;
T514:;
	base[1]= VV[86];
	goto T512;
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
	goto T518;
T518:;
	base[0]= (V93);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk179)();
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
	goto T536;
T536:;
	V94= Cnil;
	goto T537;
T537:;
	V95= Cnil;
	goto T538;
T538:;
	if(((V94))==Cnil){
	goto T527;}
	base[0]= (V93);
	base[1]= (V95);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;}
	goto T527;
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
	goto T551;
T551:;
	if(!(number_compare((V97),(V96))>=0)){
	goto T552;}
	{object V98 = Cnil;
	VMR13(V98)}
	goto T552;
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
	goto T564;
T564:;
	V99= Cnil;
	goto T565;
T565:;
	V100= Cnil;
	goto T566;
T566:;
	if(((V99))==Cnil){
	goto T556;}
	(void)(elt_set((V93),fixint((V97)),(V100)));}
	goto T556;
T556:;
	V97= one_plus((V97));
	goto T551;}
	goto T544;
T544:;
	{object V101 = Cnil;
	VMR13(V101)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INSPECT-VECTOR	*/

static object LI13(V103)

register object V103;
{	 VMB14 VMS14 VMV14
	goto TTL;
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
	goto T576;
T576:;
	base[1]= VV[91];
	goto T574;
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
	goto T580;
T580:;
	base[0]= (V103);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk179)();
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
	goto T598;
T598:;
	V104= Cnil;
	goto T599;
T599:;
	V105= Cnil;
	goto T600;
T600:;
	if(((V104))==Cnil){
	goto T589;}
	base[0]= (V103);
	base[1]= (V105);
	vs_top=(vs_base=base+0)+2;
	siLfill_pointer_set();
	vs_top=sup;}
	goto T589;
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
	goto T613;
T613:;
	if(!(number_compare((V107),(V106))>=0)){
	goto T614;}
	{object V108 = Cnil;
	VMR14(V108)}
	goto T614;
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
	goto T626;
T626:;
	V109= Cnil;
	goto T627;
T627:;
	V110= Cnil;
	goto T628;
T628:;
	if(((V109))==Cnil){
	goto T618;}
	(void)(aset1((V103),fixint((V107)),(V110)));}
	goto T618;
T618:;
	V107= one_plus((V107));
	goto T613;}
	goto T606;
T606:;
	{object V111 = Cnil;
	VMR14(V111)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INSPECT-ARRAY	*/

static object LI14(V113)

register object V113;
{	 VMB15 VMS15 VMV15
	goto TTL;
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
	goto T638;
T638:;
	base[1]= VV[96];
	goto T636;
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
	goto T642;
T642:;
	base[0]= VV[98];
	base[1]= (*(LnkLI180))((V113));
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk32)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T650;}
	princ_str("Not updated.",Cnil);
	princ_char(10,Cnil);
	goto T650;
T650:;
	base[0]= VV[99];
	base[2]= (V113);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk181)();
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
	goto T658;
T658:;
	{object V115 = Cnil;
	VMR15(V115)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function INSPECT-STRUCTURE	*/

static object LI15(V117)

register object V117;
{	 VMB16 VMS16 VMV16
	goto TTL;
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
	goto T677;
T677:;
	if(!(endp_prop((V121)))){
	goto T678;}
	{object V123 = Cnil;
	VMR16(V123)}
	goto T678;
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
	goto T689;
T689:;
	base[7]= (V124);}
	goto T686;
T686:;
	base[8]= car((V122));
	base[10]= (V117);
	base[11]= car(cddddr((V122)));
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk182)();
	vs_top=sup;
	base[9]= vs_base[0];
	vs_top=(vs_base=base+4)+6;
	Lformat();
	vs_top=sup;
	V121= cdr((V121));
	V122= car((V121));
	goto T677;}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for INSPECT-OBJECT	*/

static void L16()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM17; VC17
	vs_reserve(VM17);
	bds_check;
	{VOL object V125;
	check_arg(1);
	V125=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[41],symbol_value(VV[41]));
	(void)((*(LnkLI161))());
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
	goto T707;
T707:;
	goto T702;
T702:;
	(void)(prin1((V125),Cnil));
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T701;
T701:;
	(VV[41]->s.s_dbind)= number_plus((VV[41]->s.s_dbind),small_fixnum(1));
	setq(VV[103],make_cons(V125,symbol_value(VV[103])));
	frs_push(FRS_CATCH,VV[17]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	bds_unwind1;
	return;}
	else{
	if(!(type_of((V125))==t_symbol)){
	goto T715;}
	V128= (*(LnkLI183))((V125));
	frs_pop();
	base[2]= V128;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T715;
T715:;
	base[2]= (V125);
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T718;}
	V129= (*(LnkLI184))((V125));
	frs_pop();
	base[2]= V129;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T718;
T718:;
	if(!(type_of((V125))==t_character)){
	goto T722;}
	V130= (*(LnkLI185))((V125));
	frs_pop();
	base[2]= V130;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T722;
T722:;
	if(!(type_of((V125))==t_fixnum||
type_of((V125))==t_bignum||
type_of((V125))==t_ratio||
type_of((V125))==t_shortfloat||
type_of((V125))==t_longfloat||
type_of((V125))==t_complex)){
	goto T725;}
	V131= (*(LnkLI186))((V125));
	frs_pop();
	base[2]= V131;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T725;
T725:;
	if(!(type_of((V125))==t_cons)){
	goto T728;}
	V132= (*(LnkLI187))((V125));
	frs_pop();
	base[2]= V132;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T728;
T728:;
	if(!(type_of((V125))==t_string)){
	goto T731;}
	V133= (*(LnkLI188))((V125));
	frs_pop();
	base[2]= V133;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T731;
T731:;
	if(!(type_of((V125))==t_vector||
type_of((V125))==t_string||
type_of((V125))==t_bitvector)){
	goto T734;}
	V134= (*(LnkLI189))((V125));
	frs_pop();
	base[2]= V134;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T734;
T734:;
	if(!(type_of((V125))==t_array||
type_of((V125))==t_vector||
type_of((V125))==t_string||
type_of((V125))==t_bitvector)){
	goto T737;}
	V135= (*(LnkLI190))((V125));
	frs_pop();
	base[2]= V135;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T737;
T737:;
	if(!(type_of((V125))==t_structure)){
	goto T740;}
	V136= (*(LnkLI191))((V125));
	frs_pop();
	base[2]= V136;
	vs_top=(vs_base=base+2)+1;
	bds_unwind1;
	return;
	goto T740;
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

static void L17()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM18; VC18
	vs_reserve(VM18);
	bds_check;
	{VOL object V137;
	check_arg(1);
	V137=(base[0]);
	vs_top=sup;
	goto TTL;
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
	base[6]= (V137);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk160)();
	vs_top=sup;
	frs_pop();}
	goto T748;
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

static void L18()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM19; VC19
	vs_reserve(VM19);
	bds_check;
	{VOL object V138;
	check_arg(1);
	V138=(base[0]);
	vs_top=sup;
	goto TTL;
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
	base[8]= (V138);
	vs_top=(vs_base=base+8)+1;
	(void) (*Lnk160)();
	vs_top=sup;
	frs_pop();}
	goto T755;
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

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	bds_check;
	{object V139;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T759;}
	V139=(base[1]);
	vs_top=sup;
	goto T760;
	goto T759;
T759:;
	V139= Cnil;
	goto T760;
T760:;
	{register object V140;
	base[2]= Cnil;
	V140= Cnil;
	base[3]= base[0];
	vs_top=(vs_base=base+3)+1;
	Lspecial_form_p();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T766;}{object V141;
	V141= (*(LnkLI192))(base[0],VV[105]);
	if(V141==Cnil)goto T770;
	base[3]= V141;
	goto T769;
	goto T770;
T770:;}
	base[3]= VV[106];
	goto T769;
T769:;
	base[5]= base[0];
	vs_top=(vs_base=base+5)+1;
	Lmacro_function();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T774;}
	base[4]= VV[107];
	goto T772;
	goto T774;
T774:;
	base[4]= VV[108];
	goto T772;
T772:;
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T764;
	goto T766;
T766:;
	base[3]= base[0];
	vs_top=(vs_base=base+3)+1;
	Lmacro_function();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T778;}{object V142;
	V142= (*(LnkLI192))(base[0],VV[105]);
	if(V142==Cnil)goto T782;
	base[3]= V142;
	goto T781;
	goto T782;
T782:;}
	base[3]= VV[109];
	goto T781;
T781:;
	base[4]= VV[110];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T764;
	goto T778;
T778:;
	base[3]= base[0];
	vs_top=(vs_base=base+3)+1;
	Lfboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T786;}{object V143;
	V143= (*(LnkLI192))(base[0],VV[105]);
	if(V143==Cnil)goto T790;
	base[3]= V143;
	goto T789;
	goto T790;
T790:;}
	base[4]= base[0];
	vs_top=(vs_base=base+4)+1;
	Lsymbol_function();
	vs_top=sup;
	V140= vs_base[0];
	if(!(type_of((V140))==t_cons)){
	goto T793;}
	{object V144= car((V140));
	if((V144!= VV[174]))goto T797;
	base[4]= Cnil;
	base[5]= VV[111];
	base[6]= cadr((V140));
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T789;
	goto T797;
T797:;
	if((V144!= VV[175]))goto T801;
	base[4]= Cnil;
	base[5]= VV[112];
	base[6]= caddr((V140));
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T789;
	goto T801;
T801:;
	if((V144!= VV[176]))goto T805;
	base[4]= Cnil;
	base[5]= VV[113];
	base[6]= car(cddddr((V140)));
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T789;
	goto T805;
T805:;
	if((V144!= VV[177]))goto T809;
	base[4]= Cnil;
	base[5]= VV[114];
	base[6]= cadr(cddddr((V140)));
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T789;
	goto T809;
T809:;
	base[3]= VV[115];
	goto T789;}
	goto T793;
T793:;
	base[3]= VV[116];
	goto T789;
T789:;
	base[4]= VV[117];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T764;
	goto T786;
T786:;
	V140= (*(LnkLI192))(base[0],VV[105]);
	if(((V140))==Cnil){
	goto T764;}
	base[3]= (V140);
	base[4]= VV[118];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T764;
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
	V145= vs_base[0];
	base[3]= VV[119];
	vs_top=(vs_base=base+3)+1;
	Lfind_package();
	vs_top=sup;
	V146= vs_base[0];
	if(!((V145)==(V146))){
	goto T824;}
	if(((*(LnkLI192))(base[0],VV[120]))==Cnil){
	goto T819;}
	goto T824;
T824:;{object V147;
	V147= (*(LnkLI192))(base[0],VV[120]);
	if(V147==Cnil)goto T833;
	base[3]= V147;
	goto T832;
	goto T833;
T833:;}
	base[3]= VV[121];
	goto T832;
T832:;
	base[4]= VV[122];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T819;
	goto T821;
T821:;
	base[3]= base[0];
	vs_top=(vs_base=base+3)+1;
	siLspecialp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T837;}{object V148;
	V148= (*(LnkLI192))(base[0],VV[120]);
	if(V148==Cnil)goto T841;
	base[3]= V148;
	goto T840;
	goto T841;
T841:;}
	base[3]= VV[123];
	goto T840;
T840:;
	base[4]= VV[124];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T819;
	goto T837;
T837:;
	V140= (*(LnkLI192))(base[0],VV[120]);
	if(((V140))!=Cnil){
	goto T844;}
	base[3]= base[0];
	vs_top=(vs_base=base+3)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T819;}
	goto T844;
T844:;
	if((V140)!=Cnil){
	base[3]= (V140);
	goto T850;}
	base[3]= VV[125];
	goto T850;
T850:;
	base[4]= VV[126];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T819;
T819:;
	V140= (*(LnkLI192))(base[0],VV[127]);
	if(((V140))==Cnil){
	goto T854;}
	base[3]= (V140);
	base[4]= VV[128];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T852;
	goto T854;
T854:;
	V140= get(base[0],VV[129],Cnil);
	if(((V140))==Cnil){
	goto T852;}
	vs_base=vs_top;
	L21(base);
	vs_top=sup;
	base[3]= vs_base[0];
	bds_bind(VV[130],base[3]);
	base[5]= Cnil;
	base[6]= VV[131];
	base[7]= (V140);
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= VV[132];
	vs_top=(vs_base=base+4)+2;
	L20(base);
	vs_top=sup;
	bds_unwind1;
	goto T852;
T852:;
	V140= (*(LnkLI192))(base[0],VV[133]);
	if(((V140))==Cnil){
	goto T870;}
	base[3]= (V140);
	base[4]= VV[134];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T868;
	goto T870;
T870:;
	V140= get(base[0],VV[135],Cnil);
	if(((V140))==Cnil){
	goto T868;}
	base[4]= Cnil;
	base[5]= VV[136];
	base[6]= (V140);
	vs_top=(vs_base=base+4)+3;
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= VV[137];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T868;
T868:;
	V140= (*(LnkLI192))(base[0],VV[35]);
	if(((V140))==Cnil){
	goto T884;}
	base[3]= (V140);
	base[4]= VV[138];
	vs_top=(vs_base=base+3)+2;
	L20(base);
	vs_top=sup;
	goto T763;
	goto T884;
T884:;
	V140= get(base[0],VV[139],Cnil);
	if(((V140))==Cnil){
	goto T890;}
	vs_base=vs_top;
	L21(base);
	vs_top=sup;
	base[3]= vs_base[0];
	bds_bind(VV[130],base[3]);
	base[5]= Cnil;
	base[6]= VV[140];
	V149= get(base[0],VV[139],Cnil);
	base[7]= list(3,VV[141],base[0],V149);
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
	goto T890;
T890:;
	V140= get(base[0],VV[143],Cnil);
	if(((V140))==Cnil){
	goto T901;}
	vs_base=vs_top;
	L21(base);
	vs_top=sup;
	base[3]= vs_base[0];
	bds_bind(VV[130],base[3]);
	base[5]= Cnil;
	base[6]= VV[144];
	V150= get(base[0],VV[143],Cnil);
	base[7]= listA(3,VV[141],base[0],V150);
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
	goto T901;
T901:;
	V140= get(base[0],VV[146],Cnil);
	if(((V140))==Cnil){
	goto T763;}
	vs_base=vs_top;
	L21(base);
	vs_top=sup;
	base[3]= vs_base[0];
	bds_bind(VV[130],base[3]);
	base[5]= Cnil;
	base[6]= VV[147];
	if(!(type_of((V140))==t_cons)){
	goto T920;}
	{object V151= car((V140));
	if((V151!= VV[174]))goto T922;
	base[7]= make_cons(VV[148],cdr((V140)));
	goto T918;
	goto T922;
T922:;
	if((V151!= VV[175]))goto T923;
	base[7]= make_cons(VV[148],cddr((V140)));
	goto T918;
	goto T923;
T923:;
	if((V151!= VV[176]))goto T924;
	base[7]= make_cons(VV[148],cddddr((V140)));
	goto T918;
	goto T924;
T924:;
	if((V151!= VV[177]))goto T925;
	base[7]= make_cons(VV[148],cdr(cddddr((V140))));
	goto T918;
	goto T925;
T925:;
	base[7]= Cnil;
	goto T918;}
	goto T920;
T920:;
	base[7]= Cnil;
	goto T918;
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
	goto T763;
T763:;
	base[3]= symbol_name(base[0]);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk193)();
	vs_top=sup;
	if(((V139))==Cnil){
	goto T930;}
	vs_top=(vs_base=base+2)+1;
	return;
	goto T930;
T930:;
	if((base[2])==Cnil){
	goto T934;}
	base[3]= Ct;
	base[4]= VV[153];
	vs_top=(vs_base=base+3)+2;
	Lformat();
	vs_top=sup;
	goto T932;
	goto T934;
T934:;
	base[3]= Ct;
	base[4]= VV[154];
	base[5]= base[0];
	vs_top=(vs_base=base+3)+3;
	Lformat();
	vs_top=sup;
	goto T932;
T932:;
	vs_base=vs_top=base+3;
	vs_base[0]=Cnil;
	return;}
	}
}
/*	function definition for APROPOS-DOC	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{object V152;
	object V153;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V152=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T941;}
	V153=(base[1]);
	vs_top=sup;
	goto T942;
	goto T941;
T941:;
	V153= VV[155];
	goto T942;
T942:;
	{register object V154;
	V154= Cnil;
	V152= coerce_to_string((V152));
	if(((V153))==Cnil){
	goto T949;}
	{object V155;
	object V156;
	register object V157;
	base[2]= V153;
	vs_top=(vs_base=base+2)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T953;}
	V155= V153;
	goto T951;
	goto T953;
T953:;
	base[2]= coerce_to_string(V153);
	vs_top=(vs_base=base+2)+1;
	Lfind_package();
	vs_top=sup;
	V155= vs_base[0];
	goto T951;
T951:;
	V156= Cnil;
	V157= Cnil;
	{object V159;
	object V160;
	base[4]= (V155);
	vs_top=(vs_base=base+4)+1;
	Lpackage_use_list();
	vs_top=sup;
	V161= vs_base[0];
	V159= make_cons((V155),V161);
	V160= car((V159));
	goto T962;
T962:;
	if(!(endp_prop((V159)))){
	goto T963;}
	V156= Cnil;
	goto T947;
	goto T963;
T963:;
	{long V162;
	long V163;
	base[4]= (V160);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk194)();
	if(vs_base>=vs_top){vs_top=sup;goto T972;}
	V162= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T973;}
	V163= fix(vs_base[0]);
	vs_top=sup;
	goto T974;
	goto T972;
T972:;
	V162= fix(Cnil);
	goto T973;
T973:;
	V163= fix(Cnil);
	goto T974;
T974:;
	if(((V155))==((V160))){
	goto T975;}
	V163= 0;
	goto T975;
T975:;
	{object V164;
	object V165;
	V166 = make_fixnum(V163);
	V167 = make_fixnum(V162);
	V164= number_plus(V166,V167);
	V165= small_fixnum(0);
	goto T982;
T982:;
	if(!(number_compare((V165),(V164))>=0)){
	goto T983;}
	goto T969;
	goto T983;
T983:;
	V168 = make_fixnum(V163);
	if(!(number_compare((V165),V168)<0)){
	goto T992;}
	base[5]= (V160);
	base[6]= (V165);
	vs_top=(vs_base=base+5)+2;
	siLpackage_internal();
	vs_top=sup;
	V157= vs_base[0];
	goto T990;
	goto T992;
T992:;
	base[5]= (V160);
	V169 = make_fixnum(V163);
	base[6]= number_minus((V165),V169);
	vs_top=(vs_base=base+5)+2;
	siLpackage_external();
	vs_top=sup;
	V157= vs_base[0];
	goto T990;
T990:;
	goto T988;
T988:;
	if(((V157))!=Cnil){
	goto T998;}
	goto T989;
	goto T998;
T998:;
	V156= car((V157));
	if(((V160))==((V155))){
	goto T1004;}
	base[6]= symbol_name((V156));
	base[7]= (V155);
	vs_top=(vs_base=base+6)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	Llast();
	vs_top=sup;
	V170= vs_base[0];
	if(!((VV[156])==(car(V170)))){
	goto T1003;}
	goto T1004;
T1004:;
	V171= coerce_to_string((V156));
	if(((*(LnkLI195))((V152),/* INLINE-ARGS */V171))==Cnil){
	goto T1013;}{object V172;
	base[5]= (V156);
	base[6]= Ct;
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk164)();
	vs_top=sup;
	V172= vs_base[0];
	if(V172==Cnil)goto T1017;
	V154= V172;
	goto T1016;
	goto T1017;
T1017:;}
	goto T1016;
T1016:;
	goto T1013;
T1013:;
	goto T1003;
T1003:;
	V157= cdr((V157));
	goto T988;
	goto T989;
T989:;
	goto T986;
	goto T986;
T986:;
	V165= one_plus((V165));
	goto T982;}}
	goto T969;
T969:;
	V159= cdr((V159));
	V160= car((V159));
	goto T962;}}
	goto T949;
T949:;
	{object V173;
	object V174;
	vs_base=vs_top;
	Llist_all_packages();
	vs_top=sup;
	V173= vs_base[0];
	V174= car((V173));
	goto T1034;
T1034:;
	if(!(endp_prop((V173)))){
	goto T1035;}
	goto T947;
	goto T1035;
T1035:;
	{object V175;
	register object V176;
	register object V177;
	base[4]= V174;
	vs_top=(vs_base=base+4)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1042;}
	V175= V174;
	goto T1040;
	goto T1042;
T1042:;
	base[4]= coerce_to_string(V174);
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V175= vs_base[0];
	goto T1040;
T1040:;
	V176= Cnil;
	V177= Cnil;
	{object V179;
	register object V180;
	base[6]= (V175);
	vs_top=(vs_base=base+6)+1;
	Lpackage_use_list();
	vs_top=sup;
	V181= vs_base[0];
	V179= make_cons((V175),V181);
	V180= car((V179));
	goto T1051;
T1051:;
	if(!(endp_prop((V179)))){
	goto T1052;}
	V176= Cnil;
	goto T1039;
	goto T1052;
T1052:;
	{long V182;
	long V183;
	base[6]= (V180);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk194)();
	if(vs_base>=vs_top){vs_top=sup;goto T1061;}
	V182= fix(vs_base[0]);
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1062;}
	V183= fix(vs_base[0]);
	vs_top=sup;
	goto T1063;
	goto T1061;
T1061:;
	V182= fix(Cnil);
	goto T1062;
T1062:;
	V183= fix(Cnil);
	goto T1063;
T1063:;
	if(((V175))==((V180))){
	goto T1064;}
	V183= 0;
	goto T1064;
T1064:;
	{object V184;
	register object V185;
	V186 = make_fixnum(V183);
	V187 = make_fixnum(V182);
	V184= number_plus(V186,V187);
	V185= small_fixnum(0);
	goto T1071;
T1071:;
	if(!(number_compare((V185),(V184))>=0)){
	goto T1072;}
	goto T1058;
	goto T1072;
T1072:;
	V188 = make_fixnum(V183);
	if(!(number_compare((V185),V188)<0)){
	goto T1081;}
	base[7]= (V180);
	base[8]= (V185);
	vs_top=(vs_base=base+7)+2;
	siLpackage_internal();
	vs_top=sup;
	V177= vs_base[0];
	goto T1079;
	goto T1081;
T1081:;
	base[7]= (V180);
	V189 = make_fixnum(V183);
	base[8]= number_minus((V185),V189);
	vs_top=(vs_base=base+7)+2;
	siLpackage_external();
	vs_top=sup;
	V177= vs_base[0];
	goto T1079;
T1079:;
	goto T1077;
T1077:;
	if(((V177))!=Cnil){
	goto T1087;}
	goto T1078;
	goto T1087;
T1087:;
	V176= car((V177));
	if(((V180))==((V175))){
	goto T1093;}
	base[8]= symbol_name((V176));
	base[9]= (V175);
	vs_top=(vs_base=base+8)+2;
	Lfind_symbol();
	Llist();
	vs_top=sup;
	base[7]= vs_base[0];
	vs_top=(vs_base=base+7)+1;
	Llast();
	vs_top=sup;
	V190= vs_base[0];
	if(!((VV[156])==(car(V190)))){
	goto T1092;}
	goto T1093;
T1093:;
	V191= coerce_to_string((V176));
	if(((*(LnkLI195))((V152),/* INLINE-ARGS */V191))==Cnil){
	goto T1103;}{object V192;
	base[7]= (V176);
	base[8]= Ct;
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk164)();
	vs_top=sup;
	V192= vs_base[0];
	if(V192==Cnil)goto T1107;
	V154= V192;
	goto T1106;
	goto T1107;
T1107:;}
	goto T1106;
T1106:;
	goto T1103;
T1103:;
	goto T1092;
T1092:;
	V177= cdr((V177));
	goto T1077;
	goto T1078;
T1078:;
	goto T1075;
	goto T1075;
T1075:;
	V185= one_plus((V185));
	goto T1071;}}
	goto T1058;
T1058:;
	V179= cdr((V179));
	V180= car((V179));
	goto T1051;}}
	goto T1039;
T1039:;
	V173= cdr((V173));
	V174= car((V173));
	goto T1034;}
	goto T947;
T947:;
	if(((V154))==Cnil){
	goto T1128;}
	base[2]= Ct;
	base[3]= VV[157];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	goto T1126;
	goto T1128;
T1128:;
	base[2]= Ct;
	base[3]= VV[158];
	base[4]= (V152);
	base[5]= (V153);
	if((V153)==Cnil){
	base[6]= Cnil;
	goto T1136;}
	base[8]= V153;
	vs_top=(vs_base=base+8)+1;
	Lpackagep();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1139;}
	base[7]= V153;
	goto T1137;
	goto T1139;
T1139:;
	base[8]= coerce_to_string(V153);
	vs_top=(vs_base=base+8)+1;
	Lfind_package();
	vs_top=sup;
	base[7]= vs_base[0];
	goto T1137;
T1137:;
	vs_top=(vs_base=base+7)+1;
	Lpackage_name();
	vs_top=sup;
	base[6]= vs_base[0];
	goto T1136;
T1136:;
	vs_top=(vs_base=base+2)+5;
	Lformat();
	vs_top=sup;
	goto T1126;
T1126:;
	vs_base=vs_top=base+2;
	vs_base[0]=Cnil;
	return;}
	}
}
/*	local function GOOD-PACKAGE	*/

static void L21(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= base0[0];
	vs_top=(vs_base=base+0)+1;
	Lsymbol_package();
	vs_top=sup;
	V194= vs_base[0];
	base[0]= VV[151];
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	vs_top=sup;
	V195= vs_base[0];
	if(!((V194)==(V195))){
	goto T1144;}
	base[0]= VV[152];
	vs_top=(vs_base=base+0)+1;
	Lfind_package();
	return;
	goto T1144;
T1144:;
	base[0]= symbol_value(VV[130]);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local function DOC1	*/

static void L20(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	{object V196;
	object V197;
	check_arg(2);
	V196=(base[0]);
	V197=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base0[2]= Ct;
	base[2]= Ct;
	base[3]= VV[150];
	base[4]= base0[0];
	base[5]= (V197);
	base[6]= (V196);
	vs_top=(vs_base=base+2)+5;
	Lformat();
	return;
	}
}
static object  LnkTLI195(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[195],(void **)(void *)&LnkLI195,2,first,ap);va_end(ap);return V1;} /* SUBSTRINGP */
static void LnkT194(){ call_or_link(VV[194],(void **)(void *)&Lnk194);} /* PACKAGE-SIZE */
static void LnkT193(){ call_or_link(VV[193],(void **)(void *)&Lnk193);} /* IDESCRIBE */
static object  LnkTLI192(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[192],(void **)(void *)&LnkLI192,2,first,ap);va_end(ap);return V1;} /* DOCUMENTATION */
static object  LnkTLI191(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[191],(void **)(void *)&LnkLI191,1,first,ap);va_end(ap);return V1;} /* INSPECT-STRUCTURE */
static object  LnkTLI190(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[190],(void **)(void *)&LnkLI190,1,first,ap);va_end(ap);return V1;} /* INSPECT-ARRAY */
static object  LnkTLI189(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[189],(void **)(void *)&LnkLI189,1,first,ap);va_end(ap);return V1;} /* INSPECT-VECTOR */
static object  LnkTLI188(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[188],(void **)(void *)&LnkLI188,1,first,ap);va_end(ap);return V1;} /* INSPECT-STRING */
static object  LnkTLI187(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[187],(void **)(void *)&LnkLI187,1,first,ap);va_end(ap);return V1;} /* INSPECT-CONS */
static object  LnkTLI186(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[186],(void **)(void *)&LnkLI186,1,first,ap);va_end(ap);return V1;} /* INSPECT-NUMBER */
static object  LnkTLI185(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[185],(void **)(void *)&LnkLI185,1,first,ap);va_end(ap);return V1;} /* INSPECT-CHARACTER */
static object  LnkTLI184(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[184],(void **)(void *)&LnkLI184,1,first,ap);va_end(ap);return V1;} /* INSPECT-PACKAGE */
static object  LnkTLI183(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[183],(void **)(void *)&LnkLI183,1,first,ap);va_end(ap);return V1;} /* INSPECT-SYMBOL */
static void LnkT182(){ call_or_link(VV[182],(void **)(void *)&Lnk182);} /* STRUCTURE-REF1 */
static void LnkT181(){ call_or_link(VV[181],(void **)(void *)&Lnk181);} /* ARRAY-TOTAL-SIZE */
static object  LnkTLI180(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[180],(void **)(void *)&LnkLI180,1,first,ap);va_end(ap);return V1;} /* ARRAY-DIMENSIONS */
static void LnkT179(){ call_or_link(VV[179],(void **)(void *)&Lnk179);} /* ARRAY-HAS-FILL-POINTER-P */
static void LnkT165(){ call_or_link(VV[165],(void **)(void *)&Lnk165);} /* PACKAGE-SHADOWING-SYMBOLS */
static void LnkT164(){ call_or_link(VV[164],(void **)(void *)&Lnk164);} /* PRINT-DOC */
static void LnkT32(){ call_or_link(VV[32],(void **)(void *)&Lnk32);} /* READ-INSPECT-COMMAND */
static void LnkT163(){ call_or_link(VV[163],(void **)(void *)&Lnk163);} /* READ-PRESERVING-WHITESPACE */
static object  LnkTLI162(){return call_proc0(VV[162],(void **)(void *)&LnkLI162);} /* INSPECT-READ-LINE */
static object  LnkTLI161(){return call_proc0(VV[161],(void **)(void *)&LnkLI161);} /* INSPECT-INDENT */
static void LnkT160(){ call_or_link(VV[160],(void **)(void *)&Lnk160);} /* INSPECT-OBJECT */
static object  LnkTLI159(){return call_proc0(VV[159],(void **)(void *)&LnkLI159);} /* INSPECT-INDENT-1 */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

