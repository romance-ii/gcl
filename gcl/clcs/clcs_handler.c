
#include "cmpinclude.h"
#include "clcs_handler.h"
void init_clcs_handler(){do_init(VV);}
/*	local entry for function progn 'compile2181	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk66)();
	vs_top=sup;
	{object V1 = Cnil;
	VMR1(V1)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2193	*/

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
/*	local entry for function progn 'compile2206	*/

static object LI3()

{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V3 = Cnil;
	VMR3(V3)}
	return Cnil;
}
/*	macro definition for HANDLER-BIND	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	check_arg(2);
	vs_top=sup;
	{object V4=base[0]->c.c_cdr;
	if(endp(V4))invalid_macro_call();
	base[2]= (V4->c.c_car);
	V4=V4->c.c_cdr;
	base[3]= V4;}
	base[4]= VV[67];
	base[5]= base[2];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk68)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T9;}
	base[4]= VV[1];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk21)();
	vs_top=sup;
	goto T9;
T9:;
	{object V6;
	object V7= base[2];
	if(endp(V7)){
	V5= Cnil;
	goto T15;}
	base[4]=V6=MMcons(Cnil,Cnil);
	goto T16;
T16:;
	(V6->c.c_car)= list(3,VV[3],list(2,VV[5],car((V7->c.c_car))),cadr((V7->c.c_car)));
	V7=MMcdr(V7);
	if(endp(V7)){
	V5= base[4];
	goto T15;}
	V6=MMcdr(V6)=MMcons(Cnil,Cnil);
	goto T16;}
	goto T15;
T15:;
	V9= list(2,VV[0],list(3,VV[3],make_cons(VV[4],V5),VV[0]));
	base[4]= listA(3,VV[2],make_cons(/* INLINE-ARGS */V9,Cnil),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function progn 'compile2244	*/

static object LI5()

{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	base[0]= VV[6];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk66)();
	vs_top=sup;
	{object V10 = Cnil;
	VMR5(V10)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2256	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	base[0]= VV[6];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T21;}
	goto T20;
	goto T21;
T21:;
	setq(VV[6],Cnil);
	goto T20;
T20:;
	{object V11 = Cnil;
	VMR6(V11)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2269	*/

static object LI7()

{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V12 = Cnil;
	VMR7(V12)}
	return Cnil;
}
/*	local entry for function SIGNAL	*/

static object LI8(object V13,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB8 VMS8 VMV8
	bds_check;
	{object V14;
	object V15;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V14= V13;
	narg= narg - 1;
	V16 = list_vector_new(narg,first,ap);
	V15= V16;
	{register object V17;
	base[1]= (V14);
	base[2]= (V15);
	base[3]= VV[7];
	base[4]= VV[8];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk69)();
	vs_top=sup;
	V17= vs_base[0];
	bds_bind(VV[0],symbol_value(VV[0]));
	base[1]= (V17);
	base[2]= symbol_value(VV[6]);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T31;}
	(void)((VFUN_NARGS=2,(*(LnkLI71))(VV[9],(V17))));
	goto T31;
T31:;
	goto T38;
T38:;
	if(((VV[0]->s.s_dbind))!=Cnil){
	goto T40;}
	goto T36;
	goto T40;
T40:;
	{register object V18;
	{register object V19;
	V19= car((VV[0]->s.s_dbind));
	(VV[0]->s.s_dbind)= cdr((VV[0]->s.s_dbind));
	V18= (V19);}
	{register object V20;
	register object V21;
	V20= (V18);
	V21= car((V20));
	goto T50;
T50:;
	if(!(endp_prop((V20)))){
	goto T51;}
	goto T39;
	goto T51;
T51:;
	base[2]= (V17);
	base[3]= car((V21));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T55;}
	(void)((
	V22 = cdr((V21)),
	(type_of(V22) == t_sfun ?(*((V22)->sfn.sfn_self)):
	(fcall.fun=(V22),fcall.argd=1,fcalln))((V17))));
	goto T39;
	goto T55;
T55:;
	V20= cdr((V20));
	V21= car((V20));
	goto T50;}}
	goto T39;
T39:;
	goto T38;
	goto T36;
T36:;
	{object V23 = Cnil;
	bds_unwind1;
	VMR8(V23)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for COERCE-TO-CONDITION	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{register object V24;
	register object V25;
	object V26;
	object V27;
	check_arg(4);
	V24=(base[0]);
	V25=(base[1]);
	V26=(base[2]);
	V27=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((*(LnkLI72))((V24)))==Cnil){
	goto T68;}
	if(((V25))==Cnil){
	goto T70;}
	V28= list(2,(V24),(V27));
	(void)((VFUN_NARGS=10,(*(LnkLI73))(VV[10],VV[11],VV[12],(V25),VV[13],VV[14],VV[15],VV[16],VV[17],/* INLINE-ARGS */V28)));
	goto T70;
T70:;
	base[4]= (V24);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T68;
T68:;
	if(type_of((V24))==t_symbol){
	goto T73;}
	if(((*(LnkLI74))((V24)))==Cnil){
	goto T74;}
	goto T73;
T73:;
	base[4]=symbol_function(VV[75]);
	base[5]= (V24);
	{object V29;
	V29= (V25);
	 vs_top=base+6;
	 while(!endp(V29))
	 {vs_push(car(V29));V29=cdr(V29);}
	vs_base=base+5;}
	(void) (*Lnk75)();
	return;
	goto T74;
T74:;
	if(!(type_of((V24))==t_string)){
	goto T81;}
	base[4]= (V26);
	base[5]= VV[15];
	base[6]= (V24);
	base[7]= VV[17];
	base[8]= (V25);
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk75)();
	return;
	goto T81;
T81:;
	base[4]= VV[11];
	base[5]= VV[12];
	base[6]= (V24);
	base[7]= VV[13];
	base[8]= VV[18];
	base[9]= VV[15];
	base[10]= VV[19];
	base[11]= VV[17];
	base[12]= list(2,(V27),(V24));
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk21)();
	return;
	}
}
/*	function definition for ERROR	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	{object V30;
	object V31;
	if(vs_top-vs_base<1) too_few_arguments();
	V30=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V31=(base[1]);
	vs_top=sup;
	{object V32;
	base[2]= (V30);
	base[3]= (V31);
	base[4]= VV[20];
	base[5]= VV[21];
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk69)();
	vs_top=sup;
	V32= vs_base[0];
	(void)((VFUN_NARGS=1,(*(LnkLI8))((V32))));
	base[2]= (V32);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk76)();
	return;}
	}
}
/*	local entry for function CERROR	*/

static object LI11(object V34,object V33,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	bds_check;
	{VOL object V35;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <2) too_few_arguments();
	Vcs[0]=MMcons(V34,Cnil);
	V35= V33;
	narg= narg - 2;
	V36 = list_vector_new(narg,first,ap);
	Vcs[2]=MMcons(V36,Vcs[0]);
	base[0]=MMcons(Cnil,Vcs[2]);
	base[1]=alloc_frame_id();
	base[1]=MMcons(base[1],base[0]);
	frs_push(FRS_CATCH,(base[1]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[28]))goto T106;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V37= 
	make_cclosure_new(LC17,Cnil,base[1],Cdata);
	V38= 
	make_cclosure_new(LC18,Cnil,base[1],Cdata);
	V39= (VFUN_NARGS=6,(*(LnkLI77))(VV[23],VV[24],VV[25],V37,VV[26],V38));
	V40= make_cons(/* INLINE-ARGS */V39,Cnil);
	base[2]= make_cons(/* INLINE-ARGS */V40,symbol_value(VV[22]));
	bds_bind(VV[22],base[2]);
	base[3]= (V35);
	{object V41;
	V41= (Vcs[2]->c.c_car);
	 vs_top=base+4;
	 while(!endp(V41))
	 {vs_push(car(V41));V41=cdr(V41);}
	vs_base=base+3;}
	(void) (*Lnk21)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T104;
	goto T106;
T106:;
	{object V42;
	V42= (base[0]->c.c_car);
	ck_larg_exactly(0,(V42));
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	vs_top=sup;
	frs_pop();
	goto T104;}
	frs_pop();
	goto T104;
	goto T104;
T104:;
	{object V43 = Cnil;
	VMR11(V43)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BREAK	*/

static object LI12(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	bds_check;
	{VOL object V44;
	VOL object V45;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T115;
	else {
	V44= first;}
	--narg; goto T116;
	goto T115;
T115:;
	V44= VV[29];
	goto T116;
T116:;
	V46 = list_vector_new(narg,first,ap);
	V45= V46;
	base[0]=MMcons(Cnil,Cnil);
	base[1]=alloc_frame_id();
	base[1]=MMcons(base[1],base[0]);
	frs_push(FRS_CATCH,(base[1]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[31]))goto T120;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V47= 
	make_cclosure_new(LC19,Cnil,base[1],Cdata);
	V48= 
	make_cclosure_new(LC20,Cnil,base[1],Cdata);
	V49= (VFUN_NARGS=6,(*(LnkLI77))(VV[23],VV[24],VV[25],V47,VV[26],V48));
	V50= make_cons(/* INLINE-ARGS */V49,Cnil);
	base[2]= make_cons(/* INLINE-ARGS */V50,symbol_value(VV[22]));
	bds_bind(VV[22],base[2]);
	base[4]= VV[7];
	base[5]= VV[15];
	base[6]= (V44);
	base[7]= VV[17];
	base[8]= (V45);
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk75)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk76)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T118;
	goto T120;
T120:;
	{object V51;
	V51= (base[0]->c.c_car);
	ck_larg_exactly(0,(V51));
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	vs_top=sup;
	frs_pop();
	goto T118;}
	frs_pop();
	goto T118;
	goto T118;
T118:;
	{object V52 = Cnil;
	VMR12(V52)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function WARN	*/

static object LI13(object V53,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB13 VMS13 VMV13
	bds_check;
	{VOL object V54;
	VOL object V55;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V54= V53;
	narg= narg - 1;
	V56 = list_vector_new(narg,first,ap);
	V55= V56;
	{VOL object V57;
	base[0]= (V54);
	base[1]= (V55);
	base[2]= VV[32];
	base[3]= VV[33];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk69)();
	vs_top=sup;
	V57= vs_base[0];
	goto T140;
T140:;
	base[0]= (V57);
	base[1]= VV[34];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T141;}
	goto T138;
	goto T141;
T141:;
	base[0]=MMcons(Cnil,Cnil);
	base[1]=alloc_frame_id();
	base[1]=MMcons(base[1],base[0]);
	frs_push(FRS_CATCH,(base[1]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[41]))goto T148;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V58= 
	make_cclosure_new(LC21,Cnil,base[1],Cdata);
	V59= 
	make_cclosure_new(LC22,Cnil,base[1],Cdata);
	V60= symbol_function(VV[78]);
	V61= (VFUN_NARGS=8,(*(LnkLI77))(VV[23],VV[35],VV[25],V58,VV[26],V59,VV[38],V60));
	V62= make_cons(/* INLINE-ARGS */V61,Cnil);
	base[2]= make_cons(/* INLINE-ARGS */V62,symbol_value(VV[22]));
	bds_bind(VV[22],base[2]);
	base[3]= VV[39];
	base[4]= VV[37];
	base[5]= (V57);
	base[6]= VV[40];
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk21)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T146;
	goto T148;
T148:;
	{register object V63;
	V63= (base[0]->c.c_car);
	ck_larg_exactly(1,(V63));
	base[2]=((V63))->c.c_car;
	V57= base[2];
	frs_pop();
	goto T140;}
	frs_pop();
	goto T146;
	goto T146;
T146:;
	goto T138;
	goto T138;
T138:;
	if((symbol_value(VV[42]))==Cnil){
	goto T160;}
	(void)((VFUN_NARGS=2,(*(LnkLI71))(VV[43],(V57))));
	goto T160;
T160:;
	base[0]=MMcons(Cnil,Cnil);
	base[1]=alloc_frame_id();
	base[1]=MMcons(base[1],base[0]);
	frs_push(FRS_CATCH,(base[1]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[46]))goto T165;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V64= 
	make_cclosure_new(LC23,Cnil,base[1],Cdata);
	V65= 
	make_cclosure_new(LC24,Cnil,base[1],Cdata);
	V66= (VFUN_NARGS=6,(*(LnkLI77))(VV[23],VV[44],VV[25],V64,VV[26],V65));
	V67= make_cons(/* INLINE-ARGS */V66,Cnil);
	base[2]= make_cons(/* INLINE-ARGS */V67,symbol_value(VV[22]));
	bds_bind(VV[22],base[2]);
	V68= (VFUN_NARGS=1,(*(LnkLI8))((V57)));
	frs_pop();
	bds_unwind1;
	goto T163;
	goto T165;
T165:;
	{object V69;
	V69= (base[0]->c.c_car);
	ck_larg_exactly(0,(V69));
	frs_pop();
	{object V70 = Cnil;
	VMR13(V70)}}
	frs_pop();
	goto T163;
	goto T163;
T163:;
	base[0]= symbol_value(VV[47]);
	base[1]= VV[48];
	base[2]= (V57);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V71 = Cnil;
	VMR13(V71)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for HANDLER-CASE	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	check_arg(2);
	vs_top=sup;
	{object V72=base[0]->c.c_cdr;
	if(endp(V72))invalid_macro_call();
	base[2]= (V72->c.c_car);
	V72=V72->c.c_cdr;
	base[3]= V72;}
	{object V73;
	{register object x= VV[49],V74= base[3];
	while(!endp(V74))
	if(type_of(V74->c.c_car)==t_cons &&eql(x,V74->c.c_car->c.c_car)){
	V73= (V74->c.c_car);
	goto T174;
	}else V74=V74->c.c_cdr;
	V73= Cnil;}
	goto T174;
T174:;
	if(((V73))==Cnil){
	goto T176;}
	{object V75;
	object V76;
	base[4]= VV[50];
	vs_top=(vs_base=base+4)+1;
	Lmake_symbol();
	vs_top=sup;
	V75= vs_base[0];
	base[4]= VV[51];
	vs_top=(vs_base=base+4)+1;
	Lmake_symbol();
	vs_top=sup;
	V76= vs_base[0];
	V77= list(2,VV[54],make_cons(VV[55],cdr((V73))));
	V78= list(3,VV[56],(V75),base[2]);
	base[4]= (V73);
	base[5]= base[3];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk79)();
	vs_top=sup;
	V79= vs_base[0];
	base[4]= list(3,VV[52],(V76),list(3,VV[53],/* INLINE-ARGS */V77,list(3,VV[52],(V75),list(3,VV[56],(V76),listA(3,VV[57],/* INLINE-ARGS */V78,V79)))));
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T176;
T176:;
	{object V80;
	register object V81;
	object V82;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V80= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V81= vs_base[0];
	{object V83;
	object V84= base[3];
	if(endp(V84)){
	V82= Cnil;
	goto T187;}
	base[4]=V83=MMcons(Cnil,Cnil);
	goto T188;
T188:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V86= vs_base[0];
	(V83->c.c_car)= make_cons(V86,(V84->c.c_car));
	V84=MMcdr(V84);
	if(endp(V84)){
	V82= base[4];
	goto T187;}
	V83=MMcdr(V83)=MMcons(Cnil,Cnil);
	goto T188;}
	goto T187;
T187:;
	V87= list(2,(V81),Cnil);
	V88= make_cons(/* INLINE-ARGS */V87,Cnil);
	{object V90;
	object V91= (V82);
	if(endp(V91)){
	V89= Cnil;
	goto T191;}
	base[4]=V90=MMcons(Cnil,Cnil);
	goto T192;
T192:;
	V93= cadr((V91->c.c_car));
	if((caddr((V91->c.c_car)))==Cnil){
	goto T196;}
	V95= list(3,VV[61],(V81),VV[62]);
	V94= make_cons(/* INLINE-ARGS */V95,Cnil);
	goto T194;
	goto T196;
T196:;
	V94= Cnil;
	goto T194;
T194:;
	V96= list(2,VV[63],car((V91->c.c_car)));
	V97= make_cons(/* INLINE-ARGS */V96,Cnil);
	(V90->c.c_car)= list(2,/* INLINE-ARGS */V93,list(2,VV[54],listA(3,VV[55],VV[60],append(V94,/* INLINE-ARGS */V97))));
	V91=MMcdr(V91);
	if(endp(V91)){
	V89= base[4];
	goto T191;}
	V90=MMcdr(V90)=MMcons(Cnil,Cnil);
	goto T192;}
	goto T191;
T191:;
	V98= list(3,VV[59],V89,list(3,VV[56],(V80),base[2]));
	{object V100;
	object V101= (V82);
	if(endp(V101)){
	V99= Cnil;
	goto T198;}
	base[4]=V100=MMcons(Cnil,Cnil);
	goto T199;
T199:;
	{register object V102;
	V102= (V101->c.c_car);
	V103= car((V102));
	{register object V105;
	V105= cdddr((V102));
	if((caddr((V102)))==Cnil){
	goto T205;}
	V107= list(2,caaddr((V102)),(V81));
	V106= listA(3,VV[2],make_cons(/* INLINE-ARGS */V107,Cnil),(V105));
	goto T203;
	goto T205;
T205:;
	if((cdr((V105)))!=Cnil){
	goto T208;}
	V106= car((V105));
	goto T203;
	goto T208;
T208:;
	V106= make_cons(VV[64],(V105));
	goto T203;
T203:;
	V104= list(3,VV[56],(V80),V106);}
	(V100->c.c_cdr)= list(2,/* INLINE-ARGS */V103,V104);}
	{object cdr_V100=MMcdr(V100);while(!endp(cdr_V100)) {cdr_V100=MMcdr(cdr_V100);V100=MMcdr(V100);}}
	V101=MMcdr(V101);
	if(endp(V101)){
	base[4]=base[4]->c.c_cdr;
	V99= base[4];
	goto T198;}
	goto T199;}
	goto T198;
T198:;
	base[4]= list(3,VV[52],(V80),list(4,VV[2],/* INLINE-ARGS */V88,(V81),listA(3,VV[58],/* INLINE-ARGS */V98,V99)));
	vs_top=(vs_base=base+4)+1;
	return;}}
}
/*	macro definition for IGNORE-ERRORS	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	check_arg(2);
	vs_top=sup;
	{object V108=base[0]->c.c_cdr;
	base[2]= V108;}
	base[3]= list(3,VV[57],make_cons(VV[64],base[2]),VV[65]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC24(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{object V109;
	check_arg(1);
	V109=(base[0]);
	vs_top=sup;
	base[1]= VV[45];
	base[2]= (V109);
	vs_top=(vs_base=base+1)+2;
	Lwrite_string();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{object V110;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V110=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V110);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[46]);
	vs_base=vs_top;
	unwind(fr,VV[46]);}
	}
}
/*	local function CLOSURE	*/

static void LC22(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{register object V111;
	check_arg(1);
	V111=(base[0]);
	vs_top=sup;
	base[1]= (V111);
	base[2]= VV[36];
	base[3]= VV[37];
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC21(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{register object V112;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V112=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V112);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[41]);
	vs_base=vs_top;
	unwind(fr,VV[41]);}
	}
}
/*	local function CLOSURE	*/

static void LC20(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{object V113;
	check_arg(1);
	V113=(base[0]);
	vs_top=sup;
	base[1]= (V113);
	base[2]= VV[30];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC19(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{object V114;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V114=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V114);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[31]);
	vs_base=vs_top;
	unwind(fr,VV[31]);}
	}
}
/*	local function CLOSURE	*/

static void LC18(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	{object V115;
	check_arg(1);
	V115=(base[0]);
	vs_top=sup;
	base[1]= (V115);
	base[2]= VV[27];
	base[4]= Cnil;
	base[5]= (base0[3]->c.c_car);
	{object V116;
	V116= (base0[2]->c.c_car);
	 vs_top=base+6;
	 while(!endp(V116))
	 {vs_push(car(V116));V116=cdr(V116);}
	vs_base=base+4;}
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC17(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	{object V117;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V117=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V117);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[28]);
	vs_base=vs_top;
	unwind(fr,VV[28]);}
	}
}
/*	local function CLOSURE	*/

static void LC16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	{object V118;
	check_arg(1);
	V118=(base[0]);
	vs_top=sup;
	if(type_of((V118))==t_cons||((V118))==Cnil){
	goto T231;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T231;
T231:;
	base[1]= (((long)length((V118)))==(2)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT79(){ call_or_link(VV[79],(void **)(void *)&Lnk79);} /* REMOVE */
static object  LnkTLI77(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[77],(void **)(void *)&LnkLI77,first,ap);va_end(ap);return V1;} /* MAKE-RESTART */
static void LnkT76(){ call_or_link(VV[76],(void **)(void *)&Lnk76);} /* INVOKE-DEBUGGER */
static object  LnkTLI8(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[8],(void **)(void *)&LnkLI8,first,ap);va_end(ap);return V1;} /* SIGNAL */
static void LnkT75(){ call_or_link(VV[75],(void **)(void *)&Lnk75);} /* MAKE-CONDITION */
static object  LnkTLI74(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[74],(void **)(void *)&LnkLI74,1,first,ap);va_end(ap);return V1;} /* CONDITION-CLASS-P */
static object  LnkTLI73(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[73],(void **)(void *)&LnkLI73,first,ap);va_end(ap);return V1;} /* CERROR */
static object  LnkTLI72(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[72],(void **)(void *)&LnkLI72,1,first,ap);va_end(ap);return V1;} /* CONDITIONP */
static object  LnkTLI71(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[71],(void **)(void *)&LnkLI71,first,ap);va_end(ap);return V1;} /* BREAK */
static void LnkT70(){ call_or_link(VV[70],(void **)(void *)&Lnk70);} /* TYPEP */
static void LnkT69(){ call_or_link(VV[69],(void **)(void *)&Lnk69);} /* COERCE-TO-CONDITION */
static void LnkT21(){ call_or_link(VV[21],(void **)(void *)&Lnk21);} /* ERROR */
static void LnkT68(){ call_or_link(VV[68],(void **)(void *)&Lnk68);} /* EVERY */
static void LnkT66(){ call_or_link(VV[66],(void **)(void *)&Lnk66);} /* *MAKE-SPECIAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

