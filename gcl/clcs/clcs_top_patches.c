
#include "cmpinclude.h"
#include "clcs_top_patches.h"
void init_clcs_top_patches(){do_init(VV);}
/*	local entry for function progn 'compile1788	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk71)();
	vs_top=sup;
	{object V1 = Cnil;
	VMR1(V1)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1788	*/

static object LI2()

{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T4;}
	goto T3;
	goto T4;
T4:;
	setq(VV[0],Cnil);
	goto T3;
T3:;
	{object V2 = Cnil;
	VMR2(V2)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1789	*/

static object LI3()

{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V3 = Cnil;
	VMR3(V3)}
	return Cnil;
}
/*	macro definition for WITH-CLCS-BREAK-LEVEL-BINDINGS	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	check_arg(2);
	vs_top=sup;
	{object V4=base[0]->c.c_cdr;
	base[2]= V4;}
	base[3]= listA(3,VV[1],VV[2],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for CLCS-BREAK-LEVEL-INVOKE-RESTART	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	bds_check;
	check_arg(1);
	bds_bind(VV[3],base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(number_compare(small_fixnum(0),(VV[3]->s.s_dbind))<0)){
	goto T10;}{object V5;
	V5= (VV[3]->s.s_dbind);
	V6= number_plus(symbol_value(VV[4]),small_fixnum(1));
	if(!(number_compare(V5,/* INLINE-ARGS */V6)<0)){
	goto T10;}}
	{object V7;
	V8= number_minus((VV[3]->s.s_dbind),small_fixnum(1));
	V7= nth(fixint(/* INLINE-ARGS */V8),symbol_value(VV[5]));
	base[1]= (V7);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk72)();
	bds_unwind1;
	return;}
	goto T10;
T10:;
	base[1]= Ct;
	base[2]= VV[6];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	bds_unwind1;
	return;
}
/*	function definition for CLCS-BREAK-LEVEL	*/

static void L6()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM6; VC6
	vs_reserve(VM6);
	bds_check;
	{VOL object V9;
	VOL object V10;
	if(vs_top-vs_base<1) too_few_arguments();
	if(vs_top-vs_base>2) too_many_arguments();
	V9=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T18;}
	V10=(base[1]);
	vs_top=sup;
	goto T19;
	goto T18;
T18:;
	V10= Cnil;
	goto T19;
T19:;
	if(type_of((V9))==t_string){
	goto T22;}
	base[24]= (V9);
	vs_top=(vs_base=base+24)+1;
	(void) (*Lnk73)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T23;}
	goto T22;
T22:;
	bds_bind(VV[7],(V9));
	goto T21;
	goto T23;
T23:;
	bds_bind(VV[7],symbol_value(VV[7]));
	goto T21;
T21:;
	V11= make_cons(symbol_value(VV[9]),symbol_value(VV[10]));
	bds_bind(VV[8],make_cons(/* INLINE-ARGS */V11,symbol_value(VV[8])));
	bds_bind(VV[10],Cnil);
	base[24]= (V9);
	vs_top=(vs_base=base+24)+1;
	(void) (*Lnk73)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T31;}
	bds_bind(VV[9],make_cons(Ct,symbol_value(VV[9])));
	goto T29;
	goto T31;
T31:;
	bds_bind(VV[9],symbol_value(VV[9]));
	goto T29;
T29:;
	bds_bind(VV[11],one_plus(symbol_value(VV[12])));
	vs_base=vs_top;
	(void) (*Lnk74)();
	vs_top=sup;
	V12= vs_base[0];
	bds_bind(VV[12],one_minus(V12));
	bds_bind(VV[13],(VV[12]->s.s_dbind));{VOL object V13;
	base[24]= symbol_value(VV[15]);
	base[25]= (VV[11]->s.s_dbind);
	vs_top=(vs_base=base+24)+2;
	(void) (*Lnk75)();
	vs_top=sup;
	V13= vs_base[0];
	if(V13==Cnil)goto T38;
	bds_bind(VV[14],V13);
	goto T37;
	goto T38;
T38:;}
	vs_base=vs_top;
	(void) (*Lnk76)();
	vs_top=sup;
	V14= vs_base[0];
	bds_bind(VV[14],one_plus(V14));
	goto T37;
T37:;
	vs_base=vs_top;
	(void) (*Lnk76)();
	vs_top=sup;
	bds_bind(VV[15],vs_base[0]);
	bds_bind(VV[16],Cnil);
	if(symbol_value(VV[18])!=Cnil){
	bds_bind(VV[17],symbol_value(VV[18]));
	goto T44;}
	bds_bind(VV[17],symbol_value(VV[17]));
	goto T44;
T44:;
	bds_bind(VV[19],Cnil);
	bds_bind(VV[20],symbol_value(VV[20]));
	bds_bind(VV[21],symbol_value(VV[21]));
	bds_bind(VV[22],symbol_value(VV[22]));
	bds_bind(VV[3],symbol_value(VV[3]));
	bds_bind(VV[23],symbol_value(VV[23]));
	bds_bind(VV[24],symbol_value(VV[24]));
	bds_bind(VV[25],symbol_value(VV[25]));
	bds_bind(VV[26],symbol_value(VV[26]));
	bds_bind(VV[27],symbol_value(VV[27]));
	bds_bind(VV[28],symbol_value(VV[28]));
	bds_bind(VV[29],one_plus(symbol_value(VV[29])));
	base[25]=MMcons((VV[29]->s.s_dbind),Cnil);
	vs_base=vs_top;
	(void) (*Lnk77)();
	vs_top=sup;
	bds_bind(VV[5],vs_base[0]);
	bds_bind(VV[4],make_fixnum((long)length((VV[5]->s.s_dbind))));
	base[32]= VV[31];
	vs_top=(vs_base=base+32)+1;
	(void) (*Lnk78)();
	vs_top=sup;
	bds_bind(VV[30],vs_base[0]);{VOL object V15;
	{object V16;
	base[32]= VV[33];
	vs_top=(vs_base=base+32)+1;
	(void) (*Lnk78)();
	vs_top=sup;
	V16= vs_base[0];
	if((symbol_value(VV[32]))==Cnil){
	goto T55;}
	if((symbol_value(VV[32]))==((V16))){
	goto T56;}
	goto T55;
T55:;
	V15= (V16);
	goto T52;
	goto T56;
T56:;
	V15= Cnil;}
	goto T52;
T52:;
	if(V15==Cnil)goto T51;
	bds_bind(VV[32],V15);
	goto T50;
	goto T51;
T51:;}
	{object V17;
	if(((VV[5]->s.s_dbind))==Cnil){
	goto T62;}
	V17= car((VV[5]->s.s_dbind));
	goto T60;
	goto T62;
T62:;
	V17= Cnil;
	goto T60;
T60:;
	if(((V17))==((VV[30]->s.s_dbind))){
	goto T65;}
	bds_bind(VV[32],(V17));
	goto T50;
	goto T65;
T65:;
	bds_bind(VV[32],Cnil);}
	goto T50;
T50:;
	base[32]= (V9);
	vs_top=(vs_base=base+32)+1;
	(void) (*Lnk73)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T69;}
	bds_bind(VV[34],(V9));
	goto T67;
	goto T69;
T69:;
	bds_bind(VV[34],symbol_value(VV[34]));
	goto T67;
T67:;
	{object V18;
	V18= Cnil;
	{register object V19;
	object V20;
	V19= (VV[5]->s.s_dbind);
	V20= car((V19));
	goto T77;
T77:;
	if(!(endp_prop((V19)))){
	goto T78;}
	goto T73;
	goto T78;
T78:;
	V21= structure_ref((V20),VV[35],0);
	if(!((VV[31])==(/* INLINE-ARGS */V21))){
	goto T82;}
	V18= make_cons(V20,(V18));
	goto T82;
T82:;
	V19= cdr((V19));
	V20= car((V19));
	goto T77;}
	goto T73;
T73:;
	bds_bind(VV[0],nreverse((V18)));}
	if(!(type_of((V9))==t_cons)){
	goto T93;}
	base[32]= (V9);
	base[33]= (V10);
	vs_top=(vs_base=base+32)+2;
	(void) (*Lnk79)();
	vs_top=sup;
	goto T91;
	goto T93;
T93:;
	base[32]=MMcons(Cnil,base[25]);
	base[33]=alloc_frame_id();
	base[33]=MMcons(base[33],base[32]);
	frs_push(FRS_CATCH,(base[33]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[46]))goto T98;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[35]= VV[37];
	base[36]= VV[31];
	base[37]= VV[38];
	base[38]= 
	make_cclosure_new(LC15,Cnil,base[33],Cdata);
	base[39]= VV[39];
	base[40]= 
	make_cclosure_new(LC16,Cnil,base[33],Cdata);
	vs_top=(vs_base=base+35)+6;
	(void) (*Lnk80)();
	vs_top=sup;
	V23= vs_base[0];
	V24= make_cons(V23,Cnil);
	base[34]= make_cons(/* INLINE-ARGS */V24,symbol_value(VV[36]));
	bds_bind(VV[36],base[34]);
	base[35]= symbol_value(VV[41]);
	base[36]= VV[42];
	base[37]= (VV[7]->s.s_dbind);
	vs_top=(vs_base=base+35)+3;
	Lformat();
	vs_top=sup;
	if(!(((long)length(symbol_value(VV[43])))>(0))){
	goto T111;}
	base[35]= symbol_value(VV[41]);
	base[36]= VV[44];
	vs_top=(vs_base=base+35)+2;
	Lformat();
	vs_top=sup;
	goto T111;
T111:;
	vs_base=vs_top;
	(void) (*Lnk81)();
	vs_top=sup;
	setq(VV[45],Cnil);
	vs_base=vs_top;
	(void) (*Lnk69)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T91;
	goto T98;
T98:;
	{object V25;
	V25= (base[32]->c.c_car);
	ck_larg_exactly(0,(V25));
	base[34]= Cnil;
	base[35]= Ct;
	vs_top=(vs_base=base+34)+2;
	vs_top=sup;
	frs_pop();
	goto T91;}
	frs_pop();
	goto T91;
	goto T91;
T91:;
	base[32]= small_fixnum(1);
	vs_top=(vs_base=base+32)+1;
	(void) (*Lnk82)();
	vs_top=sup;
	setq(VV[47],Ct);
	goto T127;
T127:;
	(VV[22]->s.s_dbind)= (VV[21]->s.s_dbind);
	(VV[21]->s.s_dbind)= (VV[20]->s.s_dbind);
	(VV[20]->s.s_dbind)= (VV[3]->s.s_dbind);
	if((symbol_value(VV[45]))==Cnil){
	goto T137;}
	setq(VV[45],Cnil);
	goto T135;
	goto T137;
T137:;
	base[32]= symbol_value(VV[41]);
	base[33]= VV[48];
	if(!(type_of((V9))==t_string)){
	goto T144;}
	base[34]= VV[49];
	goto T142;
	goto T144;
T144:;
	base[34]= VV[50];
	goto T142;
T142:;{VOL object V26;
	V26= symbol_value(VV[51]);
	base[36]= VV[52];
	vs_top=(vs_base=base+36)+1;
	Lfind_package();
	vs_top=sup;
	V27= vs_base[0];
	if(!((V26)==(V27))){
	goto T148;}}
	base[35]= VV[53];
	goto T146;
	goto T148;
T148:;
	base[36]= symbol_value(VV[51]);
	vs_top=(vs_base=base+36)+1;
	Lpackage_name();
	vs_top=sup;
	base[35]= vs_base[0];
	goto T146;
T146:;
	base[36]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+32)+5;
	Lformat();
	vs_top=sup;
	goto T135;
T135:;
	base[32]=MMcons(Cnil,base[25]);
	base[33]=alloc_frame_id();
	base[33]=MMcons(base[33],base[32]);
	frs_push(FRS_CATCH,(base[33]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[57]))goto T157;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[35]= VV[37];
	base[36]= VV[31];
	base[37]= VV[38];
	base[38]= 
	make_cclosure_new(LC17,Cnil,base[33],Cdata);
	base[39]= VV[39];
	base[40]= 
	make_cclosure_new(LC18,Cnil,base[33],Cdata);
	vs_top=(vs_base=base+35)+6;
	(void) (*Lnk80)();
	vs_top=sup;
	V28= vs_base[0];
	V29= make_cons(V28,Cnil);
	base[34]= make_cons(/* INLINE-ARGS */V29,symbol_value(VV[36]));
	bds_bind(VV[36],base[34]);
	frs_push(FRS_CATCH,VV[55]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	V30= vs_base[0];
	goto T166;}
	else{
	base[35]= symbol_value(VV[41]);
	base[36]= Cnil;
	base[37]= symbol_value(VV[56]);
	vs_top=(vs_base=base+35)+3;
	(void) (*Lnk83)();
	vs_top=sup;
	(VV[3]->s.s_dbind)= vs_base[0];
	if(!(((VV[3]->s.s_dbind))==(symbol_value(VV[56])))){
	goto T173;}
	vs_base=vs_top;
	Lby();
	vs_top=sup;
	goto T173;
T173:;
	{register object V31;
	object V32;
	V31= Cnil;
	if((type_of((VV[3]->s.s_dbind))==t_symbol&&((VV[3]->s.s_dbind))->s.s_hpack==keyword_package)){
	goto T181;}
	if(!(type_of((VV[3]->s.s_dbind))==t_fixnum||type_of((VV[3]->s.s_dbind))==t_bignum)){
	goto T180;}
	goto T181;
T181:;
	(VV[3]->s.s_dbind)= make_cons((VV[3]->s.s_dbind),Cnil);
	goto T180;
T180:;
	if(!(type_of((VV[3]->s.s_dbind))==t_cons)){
	goto T187;}
	{object V33= car((VV[3]->s.s_dbind));
	if(!((type_of(V33)==t_symbol&&(V33)->s.s_hpack==keyword_package))){
	goto T187;}}
	V31= Ct;
	base[36]= car((VV[3]->s.s_dbind));
	base[37]= cdr((VV[3]->s.s_dbind));
	symlispcall(VV[84],base+36,2);
	goto T179;
	goto T187;
T187:;
	if(!(type_of((VV[3]->s.s_dbind))==t_cons)){
	goto T196;}
	{object V34= car((VV[3]->s.s_dbind));
	if(!(type_of(V34)==t_fixnum||type_of(V34)==t_bignum)){
	goto T196;}}
	V31= Ct;
	base[36]= car((VV[3]->s.s_dbind));
	vs_top=(vs_base=base+36)+1;
	(void) (*Lnk85)();
	goto T179;
	goto T196;
T196:;
	base[36]= (VV[3]->s.s_dbind);
	base[37]= Cnil;
	base[38]= Cnil;
	base[39]= (VV[16]->s.s_dbind);
	symlispcall(VV[86],base+36,4);
	goto T179;
T179:;
	Llist();
	vs_top=sup;
	V32= vs_base[0];
	(VV[28]->s.s_dbind)= (VV[27]->s.s_dbind);
	(VV[27]->s.s_dbind)= (VV[26]->s.s_dbind);
	(VV[26]->s.s_dbind)= (V32);
	(VV[25]->s.s_dbind)= (VV[24]->s.s_dbind);
	(VV[24]->s.s_dbind)= (VV[23]->s.s_dbind);
	(VV[23]->s.s_dbind)= car((VV[26]->s.s_dbind));
	base[36]= symbol_value(VV[41]);
	vs_top=(vs_base=base+36)+1;
	Lfresh_line();
	vs_top=sup;
	{register object V35;
	register object V36;
	V35= (VV[26]->s.s_dbind);
	V36= car((V35));
	goto T224;
T224:;
	if(!(endp_prop((V35)))){
	goto T225;}
	goto T176;
	goto T225;
T225:;
	base[37]= (V36);
	base[38]= symbol_value(VV[41]);
	(void)simple_symlispcall(VV[87],base+37,2);
	princ_char(10,VV[41]);
	V35= cdr((V35));
	V36= car((V35));
	goto T224;}}
	goto T176;
T176:;
	frs_pop();
	V30= Cnil;}
	goto T166;
T166:;
	if((V30)==Cnil){
	frs_pop();
	bds_unwind1;
	goto T128;}
	V37= ((V30)==Cnil?Ct:Cnil);
	frs_pop();
	bds_unwind1;
	goto T155;
	goto T157;
T157:;
	{register object V38;
	V38= (base[32]->c.c_car);
	ck_larg_exactly(0,(V38));
	base[34]= Cnil;
	base[35]= Ct;
	vs_top=(vs_base=base+34)+2;
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	frs_pop();
	goto T128;}
	frs_pop();
	goto T155;}
	frs_pop();
	goto T155;
	goto T155;
T155:;
	princ_char(10,VV[41]);
	vs_base=vs_top;
	(void) (*Lnk88)();
	vs_top=sup;
	goto T128;
T128:;
	goto T127;
	}
}
/*	function definition for CLCS-TERMINAL-INTERRUPT	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	{object V39;
	check_arg(1);
	V39=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V39))==Cnil){
	goto T244;}
	base[1]= VV[58];
	base[2]= VV[59];
	vs_top=(vs_base=base+1)+2;
	Lcerror();
	return;
	goto T244;
T244:;
	base[1]= VV[60];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	return;
	}
}
/*	function definition for CLCS-BREAK-QUIT	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{object V40;
	if(vs_top-vs_base>1) too_many_arguments();
	if(vs_base>=vs_top){vs_top=sup;goto T249;}
	V40=(base[0]);
	vs_top=sup;
	goto T250;
	goto T249;
T249:;
	V40= small_fixnum(0);
	goto T250;
T250:;
	{object V41;
	V42= reverse(symbol_value(VV[0]));
	V41= nth(fixint((V40)),/* INLINE-ARGS */V42);
	if(((V41))==Cnil){
	goto T252;}
	base[1]= (V41);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk72)();
	vs_top=sup;}
	goto T252;
T252:;
	vs_base=vs_top;
	(void) (*Lnk88)();
	return;
	}
}
/*	local entry for function progn 'compile1805	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	setq(VV[61],VV[62]);
	{object V43 = Cnil;
	VMR9(V43)}
	return Cnil;
}
/*	local entry for function progn 'compile1805	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	setq(VV[63],VV[64]);
	{object V44 = Cnil;
	VMR10(V44)}
	return Cnil;
}
/*	function definition for BREAK-RESUME	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_reserve(VM11);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	if(symbol_value(VV[32])==Cnil){
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;}
	base[0]= symbol_value(VV[32]);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk89)();
	return;
}
/*	local entry for function progn 'compile1805	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	(void)(putprop(VV[65],VV[66],VV[67]));
	{object V45 = Cnil;
	VMR12(V45)}
	return Cnil;
}
/*	local entry for function progn 'compile1805	*/

static object LI13()

{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	(void)(putprop(VV[68],VV[69],VV[67]));
	{object V46 = Cnil;
	VMR13(V46)}
	return Cnil;
}
/*	function definition for BREAK-HELP	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= symbol_value(VV[41]);
	base[1]= VV[70];
	vs_top=(vs_base=base+0)+2;
	Lformat();
	vs_top=sup;
	vs_base=vs_top=base+0;
	vs_base[0]=Cnil;
	return;
}
/*	local function CLOSURE	*/

static void LC18(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	{object V47;
	check_arg(1);
	V47=(base[0]);
	vs_top=sup;
	base[1]= (V47);
	base[2]= VV[54];
	base[3]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC17(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{object V48;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V48=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V48);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[57]);
	vs_base=vs_top;
	unwind(fr,VV[57]);}
	}
}
/*	local function CLOSURE	*/

static void LC16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{object V49;
	check_arg(1);
	V49=(base[0]);
	vs_top=sup;
	base[1]= (V49);
	base[2]= VV[40];
	base[3]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC15(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{object V50;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V50=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V50);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[46]);
	vs_base=vs_top;
	unwind(fr,VV[46]);}
	}
}
static void LnkT89(){ call_or_link(VV[89],(void **)&Lnk89);} /* INVOKE-RESTART */
static void LnkT88(){ call_or_link(VV[88],(void **)&Lnk88);} /* BREAK-CURRENT */
static void LnkT85(){ call_or_link(VV[85],(void **)&Lnk85);} /* CLCS-BREAK-LEVEL-INVOKE-RESTART */
static void LnkT83(){ call_or_link(VV[83],(void **)&Lnk83);} /* DBL-READ */
static void LnkT82(){ call_or_link(VV[82],(void **)&Lnk82);} /* CATCH-FATAL */
static void LnkT69(){ call_or_link(VV[69],(void **)&Lnk69);} /* SHOW-RESTARTS */
static void LnkT81(){ call_or_link(VV[81],(void **)&Lnk81);} /* SET-CURRENT */
static void LnkT80(){ call_or_link(VV[80],(void **)&Lnk80);} /* MAKE-RESTART */
static void LnkT79(){ call_or_link(VV[79],(void **)&Lnk79);} /* SET-BACK */
static void LnkT78(){ call_or_link(VV[78],(void **)&Lnk78);} /* FIND-RESTART */
static void LnkT77(){ call_or_link(VV[77],(void **)&Lnk77);} /* COMPUTE-RESTARTS */
static void LnkT76(){ call_or_link(VV[76],(void **)&Lnk76);} /* FRS-TOP */
static void LnkT75(){ call_or_link(VV[75],(void **)&Lnk75);} /* SCH-FRS-BASE */
static void LnkT74(){ call_or_link(VV[74],(void **)&Lnk74);} /* IHS-TOP */
static void LnkT73(){ call_or_link(VV[73],(void **)&Lnk73);} /* CONDITIONP */
static void LnkT72(){ call_or_link(VV[72],(void **)&Lnk72);} /* INVOKE-RESTART-INTERACTIVELY */
static void LnkT71(){ call_or_link(VV[71],(void **)&Lnk71);} /* *MAKE-SPECIAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

