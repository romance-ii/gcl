
#include "cmpinclude.h"
#include "clcs_top_patches.h"
void init_clcs_top_patches(){do_init(VV);}
/*	local entry for function progn 'compile2189	*/

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
/*	local entry for function progn 'compile2201	*/

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
/*	local entry for function progn 'compile2214	*/

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
/*	local entry for function CLCS-BREAK-LEVEL	*/

static object LI6(object V9,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	bds_check;
	{VOL object V10;
	VOL object V11;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V10= V9;
	narg = narg - 1;
	if (narg <= 0) goto T18;
	else {
	V11= first;}
	--narg; goto T19;
	goto T18;
T18:;
	V11= Cnil;
	goto T19;
T19:;
	if(type_of((V10))==t_string){
	goto T22;}
	if(((*(LnkLI73))((V10)))==Cnil){
	goto T23;}
	goto T22;
T22:;
	bds_bind(VV[7],(V10));
	goto T21;
	goto T23;
T23:;
	bds_bind(VV[7],symbol_value(VV[7]));
	goto T21;
T21:;
	V12= make_cons(symbol_value(VV[9]),symbol_value(VV[10]));
	bds_bind(VV[8],make_cons(/* INLINE-ARGS */V12,symbol_value(VV[8])));
	bds_bind(VV[10],Cnil);
	if(((*(LnkLI73))((V10)))==Cnil){
	goto T30;}
	bds_bind(VV[9],make_cons(Ct,symbol_value(VV[9])));
	goto T28;
	goto T30;
T30:;
	bds_bind(VV[9],symbol_value(VV[9]));
	goto T28;
T28:;
	bds_bind(VV[11],one_plus(symbol_value(VV[12])));
	vs_base=vs_top;
	(void) (*Lnk74)();
	vs_top=sup;
	V13= vs_base[0];
	bds_bind(VV[12],one_minus(V13));
	bds_bind(VV[13],(VV[12]->s.s_dbind));{VOL object V14;
	base[22]= symbol_value(VV[15]);
	base[23]= (VV[11]->s.s_dbind);
	vs_top=(vs_base=base+22)+2;
	(void) (*Lnk75)();
	vs_top=sup;
	V14= vs_base[0];
	if(V14==Cnil)goto T36;
	bds_bind(VV[14],V14);
	goto T35;
	goto T36;
T36:;}
	vs_base=vs_top;
	(void) (*Lnk76)();
	vs_top=sup;
	V15= vs_base[0];
	bds_bind(VV[14],one_plus(V15));
	goto T35;
T35:;
	vs_base=vs_top;
	(void) (*Lnk76)();
	vs_top=sup;
	bds_bind(VV[15],vs_base[0]);
	bds_bind(VV[16],Cnil);
	if(symbol_value(VV[18])!=Cnil){
	bds_bind(VV[17],symbol_value(VV[18]));
	goto T42;}
	bds_bind(VV[17],symbol_value(VV[17]));
	goto T42;
T42:;
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
	base[23]=MMcons((VV[29]->s.s_dbind),Cnil);
	bds_bind(VV[5],(VFUN_NARGS=0,(*(LnkLI77))()));
	bds_bind(VV[4],make_fixnum((long)length((VV[5]->s.s_dbind))));
	bds_bind(VV[30],(VFUN_NARGS=1,(*(LnkLI78))(VV[31])));{VOL object V16;
	{object V17;
	V17= (VFUN_NARGS=1,(*(LnkLI78))(VV[33]));
	if((symbol_value(VV[32]))==Cnil){
	goto T51;}
	if((symbol_value(VV[32]))==((V17))){
	goto T52;}
	goto T51;
T51:;
	V16= (V17);
	goto T49;
	goto T52;
T52:;
	V16= Cnil;}
	goto T49;
T49:;
	if(V16==Cnil)goto T48;
	bds_bind(VV[32],V16);
	goto T47;
	goto T48;
T48:;}
	{object V18;
	if(((VV[5]->s.s_dbind))==Cnil){
	goto T58;}
	V18= car((VV[5]->s.s_dbind));
	goto T56;
	goto T58;
T58:;
	V18= Cnil;
	goto T56;
T56:;
	if(((V18))==((VV[30]->s.s_dbind))){
	goto T61;}
	bds_bind(VV[32],(V18));
	goto T47;
	goto T61;
T61:;
	bds_bind(VV[32],Cnil);}
	goto T47;
T47:;
	if(((*(LnkLI73))((V10)))==Cnil){
	goto T65;}
	bds_bind(VV[34],(V10));
	goto T63;
	goto T65;
T65:;
	bds_bind(VV[34],symbol_value(VV[34]));
	goto T63;
T63:;
	{object V19;
	V19= Cnil;
	{register object V20;
	object V21;
	V20= (VV[5]->s.s_dbind);
	V21= car((V20));
	goto T72;
T72:;
	if(!(endp_prop((V20)))){
	goto T73;}
	goto T68;
	goto T73;
T73:;
	V22= structure_ref((V21),VV[35],0);
	if(!((VV[31])==(/* INLINE-ARGS */V22))){
	goto T77;}
	V19= make_cons(V21,(V19));
	goto T77;
T77:;
	V20= cdr((V20));
	V21= car((V20));
	goto T72;}
	goto T68;
T68:;
	bds_bind(VV[0],nreverse((V19)));}
	if(!(type_of((V10))==t_cons)){
	goto T88;}
	base[30]= (V10);
	base[31]= (V11);
	vs_top=(vs_base=base+30)+2;
	(void) (*Lnk79)();
	vs_top=sup;
	goto T86;
	goto T88;
T88:;
	base[30]=MMcons(Cnil,base[23]);
	base[31]=alloc_frame_id();
	base[31]=MMcons(base[31],base[30]);
	frs_push(FRS_CATCH,(base[31]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[46]))goto T93;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V24= 
	make_cclosure_new(LC15,Cnil,base[31],Cdata);
	V25= 
	make_cclosure_new(LC16,Cnil,base[31],Cdata);
	V26= (VFUN_NARGS=6,(*(LnkLI80))(VV[37],VV[31],VV[38],V24,VV[39],V25));
	V27= make_cons(/* INLINE-ARGS */V26,Cnil);
	base[32]= make_cons(/* INLINE-ARGS */V27,symbol_value(VV[36]));
	bds_bind(VV[36],base[32]);
	base[33]= symbol_value(VV[41]);
	base[34]= VV[42];
	base[35]= (VV[7]->s.s_dbind);
	vs_top=(vs_base=base+33)+3;
	Lformat();
	vs_top=sup;
	if(!(((long)length(symbol_value(VV[43])))>(0))){
	goto T101;}
	base[33]= symbol_value(VV[41]);
	base[34]= VV[44];
	vs_top=(vs_base=base+33)+2;
	Lformat();
	vs_top=sup;
	goto T101;
T101:;
	vs_base=vs_top;
	(void) (*Lnk81)();
	vs_top=sup;
	setq(VV[45],Cnil);
	V28= (VFUN_NARGS=0,(*(LnkLI69))());
	frs_pop();
	bds_unwind1;
	goto T86;
	goto T93;
T93:;
	{object V29;
	V29= (base[30]->c.c_car);
	ck_larg_exactly(0,(V29));
	base[32]= Cnil;
	base[33]= Ct;
	vs_top=(vs_base=base+32)+2;
	vs_top=sup;
	frs_pop();
	goto T86;}
	frs_pop();
	goto T86;
	goto T86;
T86:;
	base[30]= small_fixnum(1);
	vs_top=(vs_base=base+30)+1;
	(void) (*Lnk82)();
	vs_top=sup;
	setq(VV[47],Ct);
	goto T117;
T117:;
	(VV[22]->s.s_dbind)= (VV[21]->s.s_dbind);
	(VV[21]->s.s_dbind)= (VV[20]->s.s_dbind);
	(VV[20]->s.s_dbind)= (VV[3]->s.s_dbind);
	if((symbol_value(VV[45]))==Cnil){
	goto T127;}
	setq(VV[45],Cnil);
	goto T125;
	goto T127;
T127:;
	base[30]= symbol_value(VV[41]);
	base[31]= VV[48];
	if(!(type_of((V10))==t_string)){
	goto T134;}
	base[32]= VV[49];
	goto T132;
	goto T134;
T134:;
	base[32]= VV[50];
	goto T132;
T132:;{VOL object V30;
	V30= symbol_value(VV[51]);
	base[34]= VV[52];
	vs_top=(vs_base=base+34)+1;
	Lfind_package();
	vs_top=sup;
	V31= vs_base[0];
	if(!((V30)==(V31))){
	goto T138;}}
	base[33]= VV[53];
	goto T136;
	goto T138;
T138:;
	base[34]= symbol_value(VV[51]);
	vs_top=(vs_base=base+34)+1;
	Lpackage_name();
	vs_top=sup;
	base[33]= vs_base[0];
	goto T136;
T136:;
	base[34]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+30)+5;
	Lformat();
	vs_top=sup;
	goto T125;
T125:;
	base[30]=MMcons(Cnil,base[23]);
	base[31]=alloc_frame_id();
	base[31]=MMcons(base[31],base[30]);
	frs_push(FRS_CATCH,(base[31]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[57]))goto T147;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V32= 
	make_cclosure_new(LC17,Cnil,base[31],Cdata);
	V33= 
	make_cclosure_new(LC18,Cnil,base[31],Cdata);
	V34= (VFUN_NARGS=6,(*(LnkLI80))(VV[37],VV[31],VV[38],V32,VV[39],V33));
	V35= make_cons(/* INLINE-ARGS */V34,Cnil);
	base[32]= make_cons(/* INLINE-ARGS */V35,symbol_value(VV[36]));
	bds_bind(VV[36],base[32]);
	frs_push(FRS_CATCH,VV[55]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	V36= vs_base[0];
	goto T151;}
	else{
	base[33]= symbol_value(VV[41]);
	base[34]= Cnil;
	base[35]= symbol_value(VV[56]);
	vs_top=(vs_base=base+33)+3;
	(void) (*Lnk83)();
	vs_top=sup;
	(VV[3]->s.s_dbind)= vs_base[0];
	if(!(((VV[3]->s.s_dbind))==(symbol_value(VV[56])))){
	goto T158;}
	vs_base=vs_top;
	Lby();
	vs_top=sup;
	goto T158;
T158:;
	{register object V37;
	object V38;
	V37= Cnil;
	if((type_of((VV[3]->s.s_dbind))==t_symbol&&((VV[3]->s.s_dbind))->s.s_hpack==keyword_package)){
	goto T166;}
	if(!(type_of((VV[3]->s.s_dbind))==t_fixnum||type_of((VV[3]->s.s_dbind))==t_bignum)){
	goto T165;}
	goto T166;
T166:;
	(VV[3]->s.s_dbind)= make_cons((VV[3]->s.s_dbind),Cnil);
	goto T165;
T165:;
	if(!(type_of((VV[3]->s.s_dbind))==t_cons)){
	goto T172;}
	{object V39= car((VV[3]->s.s_dbind));
	if(!((type_of(V39)==t_symbol&&(V39)->s.s_hpack==keyword_package))){
	goto T172;}}
	V37= Ct;
	base[34]= car((VV[3]->s.s_dbind));
	base[35]= cdr((VV[3]->s.s_dbind));
	symlispcall(VV[84],base+34,2);
	goto T164;
	goto T172;
T172:;
	if(!(type_of((VV[3]->s.s_dbind))==t_cons)){
	goto T181;}
	{object V40= car((VV[3]->s.s_dbind));
	if(!(type_of(V40)==t_fixnum||type_of(V40)==t_bignum)){
	goto T181;}}
	V37= Ct;
	base[34]= car((VV[3]->s.s_dbind));
	vs_top=(vs_base=base+34)+1;
	(void) (*Lnk85)();
	goto T164;
	goto T181;
T181:;
	base[34]= (VV[3]->s.s_dbind);
	base[35]= Cnil;
	base[36]= Cnil;
	base[37]= (VV[16]->s.s_dbind);
	symlispcall(VV[86],base+34,4);
	goto T164;
T164:;
	Llist();
	vs_top=sup;
	V38= vs_base[0];
	(VV[28]->s.s_dbind)= (VV[27]->s.s_dbind);
	(VV[27]->s.s_dbind)= (VV[26]->s.s_dbind);
	(VV[26]->s.s_dbind)= (V38);
	(VV[25]->s.s_dbind)= (VV[24]->s.s_dbind);
	(VV[24]->s.s_dbind)= (VV[23]->s.s_dbind);
	(VV[23]->s.s_dbind)= car((VV[26]->s.s_dbind));
	base[34]= symbol_value(VV[41]);
	vs_top=(vs_base=base+34)+1;
	Lfresh_line();
	vs_top=sup;
	{register object V41;
	register object V42;
	V41= (VV[26]->s.s_dbind);
	V42= car((V41));
	goto T209;
T209:;
	if(!(endp_prop((V41)))){
	goto T210;}
	goto T161;
	goto T210;
T210:;
	base[35]= (V42);
	base[36]= symbol_value(VV[41]);
	(void)simple_symlispcall(VV[87],base+35,2);
	princ_char(10,VV[41]);
	V41= cdr((V41));
	V42= car((V41));
	goto T209;}}
	goto T161;
T161:;
	frs_pop();
	V36= Cnil;}
	goto T151;
T151:;
	if((V36)==Cnil){
	frs_pop();
	bds_unwind1;
	goto T118;}
	V43= ((V36)==Cnil?Ct:Cnil);
	frs_pop();
	bds_unwind1;
	goto T145;
	goto T147;
T147:;
	{register object V44;
	V44= (base[30]->c.c_car);
	ck_larg_exactly(0,(V44));
	base[32]= Cnil;
	base[33]= Ct;
	vs_top=(vs_base=base+32)+2;
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	frs_pop();
	goto T118;}
	frs_pop();
	goto T145;}
	frs_pop();
	goto T145;
	goto T145;
T145:;
	princ_char(10,VV[41]);
	vs_base=vs_top;
	(void) (*Lnk88)();
	vs_top=sup;
	goto T118;
T118:;
	goto T117;
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function CLCS-TERMINAL-INTERRUPT	*/

static object LI7(V46)

object V46;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	if(((V46))==Cnil){
	goto T229;}
	base[0]= VV[58];
	base[1]= VV[59];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk89)();
	vs_top=sup;
	{object V47 = vs_base[0];
	VMR7(V47)}
	goto T229;
T229:;
	base[0]= VV[60];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk90)();
	vs_top=sup;
	{object V48 = vs_base[0];
	VMR7(V48)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLCS-BREAK-QUIT	*/

static object LI8(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB8 VMS8 VMV8
	{object V49;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T234;
	else {
	V49= first;}
	--narg; goto T235;
	goto T234;
T234:;
	V49= small_fixnum(0);
	goto T235;
T235:;
	{object V50;
	V51= reverse(symbol_value(VV[0]));
	V50= nth(fixint((V49)),/* INLINE-ARGS */V51);
	if(((V50))==Cnil){
	goto T237;}
	base[0]= (V50);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk72)();
	vs_top=sup;}
	goto T237;
T237:;
	vs_base=vs_top;
	(void) (*Lnk88)();
	vs_top=sup;
	{object V52 = vs_base[0];
	VMR8(V52)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function progn 'compile2508	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	setq(VV[61],VV[62]);
	{object V53 = Cnil;
	VMR9(V53)}
	return Cnil;
}
/*	local entry for function progn 'compile2520	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	setq(VV[63],VV[64]);
	{object V54 = Cnil;
	VMR10(V54)}
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
	(void) (*Lnk91)();
	return;
}
/*	local entry for function progn 'compile2540	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	(void)(putprop(VV[65],VV[66],VV[67]));
	{object V55 = Cnil;
	VMR12(V55)}
	return Cnil;
}
/*	local entry for function progn 'compile2552	*/

static object LI13()

{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	(void)(putprop(VV[68],VV[69],VV[67]));
	{object V56 = Cnil;
	VMR13(V56)}
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
	{object V57;
	check_arg(1);
	V57=(base[0]);
	vs_top=sup;
	base[1]= (V57);
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
	{object V58;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V58=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V58);
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
	{object V59;
	check_arg(1);
	V59=(base[0]);
	vs_top=sup;
	base[1]= (V59);
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
	{object V60;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V60=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V60);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[46]);
	vs_base=vs_top;
	unwind(fr,VV[46]);}
	}
}
static void LnkT91(){ call_or_link(VV[91],(void **)(void *)&Lnk91);} /* INVOKE-RESTART */
static void LnkT90(){ call_or_link(VV[90],(void **)(void *)&Lnk90);} /* ERROR */
static void LnkT89(){ call_or_link(VV[89],(void **)(void *)&Lnk89);} /* CERROR */
static void LnkT88(){ call_or_link(VV[88],(void **)(void *)&Lnk88);} /* BREAK-CURRENT */
static void LnkT85(){ call_or_link(VV[85],(void **)(void *)&Lnk85);} /* CLCS-BREAK-LEVEL-INVOKE-RESTART */
static void LnkT83(){ call_or_link(VV[83],(void **)(void *)&Lnk83);} /* DBL-READ */
static void LnkT82(){ call_or_link(VV[82],(void **)(void *)&Lnk82);} /* CATCH-FATAL */
static object  LnkTLI69(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[69],(void **)(void *)&LnkLI69,first,ap);va_end(ap);return V1;} /* SHOW-RESTARTS */
static void LnkT81(){ call_or_link(VV[81],(void **)(void *)&Lnk81);} /* SET-CURRENT */
static object  LnkTLI80(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[80],(void **)(void *)&LnkLI80,first,ap);va_end(ap);return V1;} /* MAKE-RESTART */
static void LnkT79(){ call_or_link(VV[79],(void **)(void *)&Lnk79);} /* SET-BACK */
static object  LnkTLI78(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[78],(void **)(void *)&LnkLI78,first,ap);va_end(ap);return V1;} /* FIND-RESTART */
static object  LnkTLI77(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[77],(void **)(void *)&LnkLI77,first,ap);va_end(ap);return V1;} /* COMPUTE-RESTARTS */
static void LnkT76(){ call_or_link(VV[76],(void **)(void *)&Lnk76);} /* FRS-TOP */
static void LnkT75(){ call_or_link(VV[75],(void **)(void *)&Lnk75);} /* SCH-FRS-BASE */
static void LnkT74(){ call_or_link(VV[74],(void **)(void *)&Lnk74);} /* IHS-TOP */
static object  LnkTLI73(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[73],(void **)(void *)&LnkLI73,1,first,ap);va_end(ap);return V1;} /* CONDITIONP */
static void LnkT72(){ call_or_link(VV[72],(void **)(void *)&Lnk72);} /* INVOKE-RESTART-INTERACTIVELY */
static void LnkT71(){ call_or_link(VV[71],(void **)(void *)&Lnk71);} /* *MAKE-SPECIAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

