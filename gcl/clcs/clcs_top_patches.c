
#include "cmpinclude.h"
#include "clcs_top_patches.h"
void init_clcs_top_patches(){do_init(VV);}
/*	local entry for function progn 'compile2176	*/

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
/*	local entry for function progn 'compile2188	*/

static object LI2()

{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(!((VV[0])->s.s_dbind!=OBJNULL)){
	goto T4;}
	goto T3;
	goto T4;
T4:;
	(VV[0]->s.s_dbind)= Cnil;
	goto T3;
T3:;
	{object V2 = Cnil;
	VMR2(V2)}
	return Cnil;
}
/*	local entry for function progn 'compile2201	*/

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
	vs_check;
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
	vs_check;
	bds_check;
	bds_bind(VV[3],base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(number_compare(small_fixnum(0),(VV[3]->s.s_dbind))<0)){
	goto T9;}{object V5;
	V5= (VV[3]->s.s_dbind);
	V6= number_plus((VV[4]->s.s_dbind),small_fixnum(1));
	if(!(number_compare(V5,/* INLINE-ARGS */V6)<0)){
	goto T9;}}
	{object V7;
	V8= number_minus((VV[3]->s.s_dbind),small_fixnum(1));
	V7= nth(fix(/* INLINE-ARGS */V8),(VV[5]->s.s_dbind));
	base[1]= (V7);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk72)();
	bds_unwind1;
	return;}
	goto T9;
T9:;
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
	va_start(ap,first);
	V10= V9;
	narg = narg - 1;
	if (narg <= 0) goto T17;
	else {
	V11= first;}
	--narg; goto T18;
	goto T17;
T17:;
	V11= Cnil;
	goto T18;
T18:;
	if(type_of((V10))==t_string){
	goto T21;}
	if(((*(LnkLI73))((V10)))==Cnil){
	goto T22;}
	goto T21;
T21:;
	bds_bind(VV[7],(V10));
	goto T20;
	goto T22;
T22:;
	bds_bind(VV[7],(VV[7]->s.s_dbind));
	goto T20;
T20:;
	V12= make_cons((VV[9]->s.s_dbind),(VV[10]->s.s_dbind));
	bds_bind(VV[8],make_cons(/* INLINE-ARGS */V12,(VV[8]->s.s_dbind)));
	bds_bind(VV[10],Cnil);
	if(((*(LnkLI73))((V10)))==Cnil){
	goto T29;}
	bds_bind(VV[9],make_cons(Ct,(VV[9]->s.s_dbind)));
	goto T27;
	goto T29;
T29:;
	bds_bind(VV[9],(VV[9]->s.s_dbind));
	goto T27;
T27:;
	bds_bind(VV[11],one_plus((VV[12]->s.s_dbind)));
	vs_base=vs_top;
	(void) (*Lnk74)();
	vs_top=sup;
	V13= vs_base[0];
	bds_bind(VV[12],one_minus(V13));
	bds_bind(VV[13],(VV[12]->s.s_dbind));{VOL object V14;
	base[22]= (VV[15]->s.s_dbind);
	base[23]= (VV[11]->s.s_dbind);
	vs_top=(vs_base=base+22)+2;
	(void) (*Lnk75)();
	vs_top=sup;
	V14= vs_base[0];
	if(V14==Cnil)goto T35;
	bds_bind(VV[14],V14);
	goto T34;
	goto T35;
T35:;}
	vs_base=vs_top;
	(void) (*Lnk76)();
	vs_top=sup;
	V15= vs_base[0];
	bds_bind(VV[14],one_plus(V15));
	goto T34;
T34:;
	vs_base=vs_top;
	(void) (*Lnk76)();
	vs_top=sup;
	bds_bind(VV[15],vs_base[0]);
	bds_bind(VV[16],Cnil);
	if((VV[18]->s.s_dbind)!=Cnil){
	bds_bind(VV[17],(VV[18]->s.s_dbind));
	goto T41;}
	bds_bind(VV[17],(VV[17]->s.s_dbind));
	goto T41;
T41:;
	bds_bind(VV[19],Cnil);
	bds_bind(VV[20],(VV[20]->s.s_dbind));
	bds_bind(VV[21],(VV[21]->s.s_dbind));
	bds_bind(VV[22],(VV[22]->s.s_dbind));
	bds_bind(VV[3],(VV[3]->s.s_dbind));
	bds_bind(VV[23],(VV[23]->s.s_dbind));
	bds_bind(VV[24],(VV[24]->s.s_dbind));
	bds_bind(VV[25],(VV[25]->s.s_dbind));
	bds_bind(VV[26],(VV[26]->s.s_dbind));
	bds_bind(VV[27],(VV[27]->s.s_dbind));
	bds_bind(VV[28],(VV[28]->s.s_dbind));
	bds_bind(VV[29],one_plus((VV[29]->s.s_dbind)));
	base[23]=MMcons((VV[29]->s.s_dbind),Cnil);
	bds_bind(VV[5],(VFUN_NARGS=0,(*(LnkLI77))()));
	bds_bind(VV[4],CMPmake_fixnum((long)length((VV[5]->s.s_dbind))));
	bds_bind(VV[30],(VFUN_NARGS=1,(*(LnkLI78))(VV[31])));{VOL object V16;
	{object V17;
	V17= (VFUN_NARGS=1,(*(LnkLI78))(VV[33]));
	if(((VV[32]->s.s_dbind))==Cnil){
	goto T50;}
	if(((VV[32]->s.s_dbind))==((V17))){
	goto T51;}
	goto T50;
T50:;
	V16= (V17);
	goto T48;
	goto T51;
T51:;
	V16= Cnil;}
	goto T48;
T48:;
	if(V16==Cnil)goto T47;
	bds_bind(VV[32],V16);
	goto T46;
	goto T47;
T47:;}
	{object V18;
	if(((VV[5]->s.s_dbind))==Cnil){
	goto T57;}
	V18= CMPcar((VV[5]->s.s_dbind));
	goto T55;
	goto T57;
T57:;
	V18= Cnil;
	goto T55;
T55:;
	if(((V18))==((VV[30]->s.s_dbind))){
	goto T60;}
	bds_bind(VV[32],(V18));
	goto T46;
	goto T60;
T60:;
	bds_bind(VV[32],Cnil);}
	goto T46;
T46:;
	if(((*(LnkLI73))((V10)))==Cnil){
	goto T64;}
	bds_bind(VV[34],(V10));
	goto T62;
	goto T64;
T64:;
	bds_bind(VV[34],(VV[34]->s.s_dbind));
	goto T62;
T62:;
	{object V19;
	V19= Cnil;
	{register object V20;
	object V21;
	V20= (VV[5]->s.s_dbind);
	V21= CMPcar((V20));
	goto T71;
T71:;
	if(!(((V20))==Cnil)){
	goto T72;}
	goto T67;
	goto T72;
T72:;
	if(!((VV[31])==(STREF(object,(V21),0)))){
	goto T76;}
	V19= make_cons(V21,(V19));
	goto T76;
T76:;
	V20= CMPcdr((V20));
	V21= CMPcar((V20));
	goto T71;}
	goto T67;
T67:;
	bds_bind(VV[0],nreverse((V19)));}
	if(!(type_of((V10))==t_cons)){
	goto T87;}
	base[30]= (V10);
	base[31]= (V11);
	vs_top=(vs_base=base+30)+2;
	(void) (*Lnk79)();
	vs_top=sup;
	goto T85;
	goto T87;
T87:;
	base[30]=MMcons(Cnil,base[23]);
	base[31]=alloc_frame_id();
	base[31]=MMcons(base[31],base[30]);
	frs_push(FRS_CATCH,(base[31]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[46]))goto T92;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V23= 
	make_cclosure_new(LC15,Cnil,base[31],Cdata);
	V24= 
	make_cclosure_new(LC16,Cnil,base[31],Cdata);
	V25= (VFUN_NARGS=6,(*(LnkLI80))(VV[37],VV[31],VV[38],V23,VV[39],V24));
	V26= make_cons(/* INLINE-ARGS */V25,Cnil);
	base[32]= make_cons(/* INLINE-ARGS */V26,(VV[36]->s.s_dbind));
	bds_bind(VV[36],base[32]);
	base[33]= (VV[41]->s.s_dbind);
	base[34]= VV[42];
	base[35]= (VV[7]->s.s_dbind);
	vs_top=(vs_base=base+33)+3;
	Lformat();
	vs_top=sup;
	if(!(((long)length((VV[43]->s.s_dbind)))>(0))){
	goto T100;}
	base[33]= (VV[41]->s.s_dbind);
	base[34]= VV[44];
	vs_top=(vs_base=base+33)+2;
	Lformat();
	vs_top=sup;
	goto T100;
T100:;
	vs_base=vs_top;
	(void) (*Lnk81)();
	vs_top=sup;
	(VV[45]->s.s_dbind)= Cnil;
	V27= (VFUN_NARGS=0,(*(LnkLI69))());
	frs_pop();
	bds_unwind1;
	goto T85;
	goto T92;
T92:;
	{object V28;
	V28= (base[30]->c.c_car);
	base[32]= Cnil;
	base[33]= Ct;
	vs_top=(vs_base=base+32)+2;
	vs_top=sup;
	frs_pop();
	goto T85;}
	frs_pop();
	goto T85;
	goto T85;
T85:;
	base[30]= small_fixnum(1);
	vs_top=(vs_base=base+30)+1;
	(void) (*Lnk82)();
	vs_top=sup;
	(VV[47]->s.s_dbind)= Ct;
	goto T116;
T116:;
	(VV[22]->s.s_dbind)= (VV[21]->s.s_dbind);
	(VV[21]->s.s_dbind)= (VV[20]->s.s_dbind);
	(VV[20]->s.s_dbind)= (VV[3]->s.s_dbind);
	if(((VV[45]->s.s_dbind))==Cnil){
	goto T126;}
	(VV[45]->s.s_dbind)= Cnil;
	goto T124;
	goto T126;
T126:;
	base[30]= (VV[41]->s.s_dbind);
	base[31]= VV[48];
	if(!(type_of((V10))==t_string)){
	goto T133;}
	base[32]= VV[49];
	goto T131;
	goto T133;
T133:;
	base[32]= VV[50];
	goto T131;
T131:;{VOL object V29;
	V29= (VV[51]->s.s_dbind);
	base[34]= VV[52];
	vs_top=(vs_base=base+34)+1;
	Lfind_package();
	vs_top=sup;
	V30= vs_base[0];
	if(!((V29)==(V30))){
	goto T137;}}
	base[33]= VV[53];
	goto T135;
	goto T137;
T137:;
	base[34]= (VV[51]->s.s_dbind);
	vs_top=(vs_base=base+34)+1;
	Lpackage_name();
	vs_top=sup;
	base[33]= vs_base[0];
	goto T135;
T135:;
	base[34]= (VV[9]->s.s_dbind);
	vs_top=(vs_base=base+30)+5;
	Lformat();
	vs_top=sup;
	goto T124;
T124:;
	base[30]=MMcons(Cnil,base[23]);
	base[31]=alloc_frame_id();
	base[31]=MMcons(base[31],base[30]);
	frs_push(FRS_CATCH,(base[31]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[57]))goto T146;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V31= 
	make_cclosure_new(LC17,Cnil,base[31],Cdata);
	V32= 
	make_cclosure_new(LC18,Cnil,base[31],Cdata);
	V33= (VFUN_NARGS=6,(*(LnkLI80))(VV[37],VV[31],VV[38],V31,VV[39],V32));
	V34= make_cons(/* INLINE-ARGS */V33,Cnil);
	base[32]= make_cons(/* INLINE-ARGS */V34,(VV[36]->s.s_dbind));
	bds_bind(VV[36],base[32]);
	frs_push(FRS_CATCH,VV[55]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	V35= vs_base[0];
	goto T150;}
	else{
	base[33]= (VV[41]->s.s_dbind);
	base[34]= Cnil;
	base[35]= (VV[56]->s.s_dbind);
	vs_top=(vs_base=base+33)+3;
	(void) (*Lnk83)();
	vs_top=sup;
	(VV[3]->s.s_dbind)= vs_base[0];
	if(!(((VV[3]->s.s_dbind))==((VV[56]->s.s_dbind)))){
	goto T157;}
	vs_base=vs_top;
	Lby();
	vs_top=sup;
	goto T157;
T157:;
	{register object V36;
	object V37;
	V36= Cnil;
	if((type_of((VV[3]->s.s_dbind))==t_symbol&&((VV[3]->s.s_dbind))->s.s_hpack==keyword_package)){
	goto T165;}
	if(!(type_of((VV[3]->s.s_dbind))==t_fixnum||type_of((VV[3]->s.s_dbind))==t_bignum)){
	goto T164;}
	goto T165;
T165:;
	(VV[3]->s.s_dbind)= make_cons((VV[3]->s.s_dbind),Cnil);
	goto T164;
T164:;
	if(!(type_of((VV[3]->s.s_dbind))==t_cons)){
	goto T171;}
	{object V38= CMPcar((VV[3]->s.s_dbind));
	if(!((type_of(V38)==t_symbol&&(V38)->s.s_hpack==keyword_package))){
	goto T171;}}
	V36= Ct;
	base[34]= CMPcar((VV[3]->s.s_dbind));
	base[35]= CMPcdr((VV[3]->s.s_dbind));
	symlispcall(VV[84],base+34,2);
	goto T163;
	goto T171;
T171:;
	if(!(type_of((VV[3]->s.s_dbind))==t_cons)){
	goto T180;}
	{object V39= CMPcar((VV[3]->s.s_dbind));
	if(!(type_of(V39)==t_fixnum||type_of(V39)==t_bignum)){
	goto T180;}}
	V36= Ct;
	base[34]= CMPcar((VV[3]->s.s_dbind));
	vs_top=(vs_base=base+34)+1;
	(void) (*Lnk85)();
	goto T163;
	goto T180;
T180:;
	base[34]= (VV[3]->s.s_dbind);
	base[35]= Cnil;
	base[36]= Cnil;
	base[37]= (VV[16]->s.s_dbind);
	symlispcall(VV[86],base+34,4);
	goto T163;
T163:;
	Llist();
	vs_top=sup;
	V37= vs_base[0];
	(VV[28]->s.s_dbind)= (VV[27]->s.s_dbind);
	(VV[27]->s.s_dbind)= (VV[26]->s.s_dbind);
	(VV[26]->s.s_dbind)= (V37);
	(VV[25]->s.s_dbind)= (VV[24]->s.s_dbind);
	(VV[24]->s.s_dbind)= (VV[23]->s.s_dbind);
	(VV[23]->s.s_dbind)= CMPcar((VV[26]->s.s_dbind));
	base[34]= (VV[41]->s.s_dbind);
	vs_top=(vs_base=base+34)+1;
	Lfresh_line();
	vs_top=sup;
	{register object V40;
	register object V41;
	V40= (VV[26]->s.s_dbind);
	V41= CMPcar((V40));
	goto T208;
T208:;
	if(!(((V40))==Cnil)){
	goto T209;}
	goto T160;
	goto T209;
T209:;
	base[35]= (V41);
	base[36]= (VV[41]->s.s_dbind);
	(void)simple_symlispcall(VV[87],base+35,2);
	princ_char(10,VV[41]);
	V40= CMPcdr((V40));
	V41= CMPcar((V40));
	goto T208;}}
	goto T160;
T160:;
	frs_pop();
	V35= Cnil;}
	goto T150;
T150:;
	if((V35)==Cnil){
	frs_pop();
	bds_unwind1;
	goto T117;}
	V42= ((V35)==Cnil?Ct:Cnil);
	frs_pop();
	bds_unwind1;
	goto T144;
	goto T146;
T146:;
	{register object V43;
	V43= (base[30]->c.c_car);
	base[32]= Cnil;
	base[33]= Ct;
	vs_top=(vs_base=base+32)+2;
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	frs_pop();
	goto T117;}
	frs_pop();
	goto T144;}
	frs_pop();
	goto T144;
	goto T144;
T144:;
	princ_char(10,VV[41]);
	vs_base=vs_top;
	(void) (*Lnk88)();
	vs_top=sup;
	goto T117;
T117:;
	goto T116;
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function CLCS-TERMINAL-INTERRUPT	*/

static object LI7(V45)

object V45;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	if(((V45))==Cnil){
	goto T228;}
	base[0]= VV[58];
	base[1]= VV[59];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk89)();
	vs_top=sup;
	{object V46 = vs_base[0];
	VMR7(V46)}
	goto T228;
T228:;
	base[0]= VV[60];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk90)();
	vs_top=sup;
	{object V47 = vs_base[0];
	VMR7(V47)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLCS-BREAK-QUIT	*/

static object LI8(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB8 VMS8 VMV8
	{object V48;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T233;
	else {
	V48= first;}
	--narg; goto T234;
	goto T233;
T233:;
	V48= small_fixnum(0);
	goto T234;
T234:;
	{object V49;
	V50= reverse((VV[0]->s.s_dbind));
	V49= nth(fix((V48)),/* INLINE-ARGS */V50);
	if(((V49))==Cnil){
	goto T236;}
	base[0]= (V49);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk72)();
	vs_top=sup;}
	goto T236;
T236:;
	vs_base=vs_top;
	(void) (*Lnk88)();
	vs_top=sup;
	{object V51 = vs_base[0];
	VMR8(V51)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function progn 'compile2495	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	(VV[61]->s.s_dbind)= VV[62];
	{object V52 = Cnil;
	VMR9(V52)}
	return Cnil;
}
/*	local entry for function progn 'compile2507	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	(VV[63]->s.s_dbind)= VV[64];
	{object V53 = Cnil;
	VMR10(V53)}
	return Cnil;
}
/*	function definition for BREAK-RESUME	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	if((VV[32]->s.s_dbind)==Cnil){
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;}
	base[0]= (VV[32]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk91)();
	return;
}
/*	local entry for function progn 'compile2527	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	(void)(putprop(VV[65],VV[66],VV[67]));
	{object V54 = Cnil;
	VMR12(V54)}
	return Cnil;
}
/*	local entry for function progn 'compile2539	*/

static object LI13()

{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	(void)(putprop(VV[68],VV[69],VV[67]));
	{object V55 = Cnil;
	VMR13(V55)}
	return Cnil;
}
/*	function definition for BREAK-HELP	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= (VV[41]->s.s_dbind);
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
	vs_check;
	{object V56;
	V56=(base[0]);
	vs_top=sup;
	base[1]= (V56);
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
	vs_check;
	{object V57;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V57=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V57);
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
	vs_check;
	{object V58;
	V58=(base[0]);
	vs_top=sup;
	base[1]= (V58);
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
	vs_check;
	{object V59;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V59=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V59);
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

