
#include "cmpinclude.h"
#include "clcs_kcl_cond.h"
void init_clcs_kcl_cond(){do_init(VV);}
/*	local entry for function progn 'compile2186	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk40)();
	vs_top=sup;
	{object V1 = Cnil;
	VMR1(V1)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2198	*/

static object LI2()

{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(!((VV[0])->s.s_dbind!=OBJNULL)){
	goto T4;}
	goto T3;
	goto T4;
T4:;
	base[0]= VV[1];
	base[1]= VV[2];
	vs_top=(vs_base=base+0)+2;
	Lmake_hash_table();
	vs_top=sup;
	(VV[0]->s.s_dbind)= vs_base[0];
	goto T3;
T3:;
	{object V2 = Cnil;
	VMR2(V2)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2211	*/

static object LI3()

{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V3 = Cnil;
	VMR3(V3)}
	return Cnil;
}
/*	macro definition for FIND-INTERNAL-ERROR-DATA	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	vs_top=sup;
	{object V4=base[0]->c.c_cdr;
	base[2]= (V4->c.c_car);}
	base[3]= list(3,VV[3],list(2,VV[4],base[2]),VV[0]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for CLCS-UNIVERSAL-ERROR-HANDLER	*/

static void L5()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM5; VC5
	vs_check;
	bds_check;
	{VOL object V5;
	VOL object V6;
	VOL object V7;
	VOL object V8;
	V5=(base[0]);
	V6=(base[1]);
	V7=(base[2]);
	base[3]=MMcons(base[3],Cnil);
	V8=(base[4]);
	vs_base=vs_base+5;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	base[5]=MMcons(base[5],base[3]);
	vs_top=sup;
	{VOL object V9;
	base[6]= make_cons((V5),Cnil);
	base[7]= (VV[0]->s.s_dbind);
	vs_top=(vs_base=base+6)+2;
	Lgethash();
	vs_top=sup;
	V9= vs_base[0];
	if(((V9))==Cnil){
	goto T14;}
	{VOL object V10;
	V10= CMPcar((V9));
	if(((V6))==Cnil){
	goto T18;}
	base[6]=MMcons(Cnil,base[5]);
	base[7]=alloc_frame_id();
	base[7]=MMcons(base[7],base[6]);
	frs_push(FRS_CATCH,(base[7]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[14]))goto T21;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V11= 
	make_cclosure_new(LC23,Cnil,base[7],Cdata);
	V12= 
	make_cclosure_new(LC24,Cnil,base[7],Cdata);
	V13= (VFUN_NARGS=6,(*(LnkLI41))(VV[6],VV[7],VV[8],V11,VV[9],V12));
	V14= make_cons(/* INLINE-ARGS */V13,Cnil);
	base[8]= make_cons(/* INLINE-ARGS */V14,(VV[5]->s.s_dbind));
	bds_bind(VV[5],base[8]);
	base[9]=VV[32]->s.s_gfdef;
	base[10]= (V10);
	base[11]= VV[11];
	base[12]= (V7);
	{object V15;
	{object V16;
	{object V17;
	object V18= CMPcdr((V9));
	object V19= (base[5]->c.c_car);
	if(V18==Cnil||V19==Cnil){
	V16= Cnil;
	goto T29;}
	base[13]=V17=MMcons(Cnil,Cnil);
	goto T30;
T30:;
	(V17->c.c_cdr)= list(2,(V18->c.c_car),(V19->c.c_car));
	while(MMcdr(V17)!=Cnil)V17=MMcdr(V17);
	if((V18=MMcdr(V18))==Cnil||(V19=MMcdr(V19))==Cnil){
	base[13]=base[13]->c.c_cdr;
	V16= base[13];
	goto T29;}
	goto T30;}
	goto T29;
T29:;
	if(((*(LnkLI42))((V10)))==Cnil){
	goto T33;}
	V15= listA(5,VV[12],(V8),VV[13],(base[5]->c.c_car),(V16));
	goto T28;
	goto T33;
T33:;
	V15= (V16);}
	goto T28;
T28:;
	 vs_top=base+13;
	 while(V15!=Cnil)
	 {vs_push((V15)->c.c_car);V15=(V15)->c.c_cdr;}
	vs_base=base+10;}
	(void) (*Lnk32)();
	frs_pop();
	bds_unwind1;
	return;
	goto T21;
T21:;
	{object V20;
	V20= (base[6]->c.c_car);
	base[8]= Cnil;
	base[9]= Ct;
	vs_top=(vs_base=base+8)+2;
	frs_pop();
	return;}
	frs_pop();
	base[8]= Cnil;
	vs_top=(vs_base=base+8)+1;
	return;
	goto T18;
T18:;
	base[6]=VV[32]->s.s_gfdef;
	base[7]= (V10);
	base[8]= VV[11];
	base[9]= (V7);
	{object V21;
	{object V22;
	{object V23;
	object V24= CMPcdr((V9));
	object V25= (base[5]->c.c_car);
	if(V24==Cnil||V25==Cnil){
	V22= Cnil;
	goto T42;}
	base[10]=V23=MMcons(Cnil,Cnil);
	goto T43;
T43:;
	(V23->c.c_cdr)= list(2,(V24->c.c_car),(V25->c.c_car));
	while(MMcdr(V23)!=Cnil)V23=MMcdr(V23);
	if((V24=MMcdr(V24))==Cnil||(V25=MMcdr(V25))==Cnil){
	base[10]=base[10]->c.c_cdr;
	V22= base[10];
	goto T42;}
	goto T43;}
	goto T42;
T42:;
	if(((*(LnkLI42))((V10)))==Cnil){
	goto T46;}
	V21= listA(5,VV[12],(V8),VV[13],(base[5]->c.c_car),(V22));
	goto T41;
	goto T46;
T46:;
	V21= (V22);}
	goto T41;
T41:;
	 vs_top=base+10;
	 while(V21!=Cnil)
	 {vs_push((V21)->c.c_car);V21=(V21)->c.c_cdr;}
	vs_base=base+7;}
	(void) (*Lnk32)();
	return;}
	goto T14;
T14:;
	base[6]= VV[15];
	base[7]= VV[11];
	base[8]= (V7);
	base[9]= VV[12];
	base[10]= (V8);
	base[11]= VV[13];
	base[12]= (base[5]->c.c_car);
	vs_top=(vs_base=base+6)+7;
	(void) (*Lnk32)();
	return;}
	}
}
/*	local entry for function SET-INTERNAL-ERROR	*/

static object LI6(object V28,object V27,object V26,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB6 VMS6 VMV6
	{object V29;
	object V30;
	object V31;
	object V32;
	va_start(ap,first);
	V29= V28;
	V30= V27;
	V31= V26;
	narg= narg - 3;
	V33 = list_vector_new(narg,first,ap);
	V32= V33;
	{object V34;
	object V35;
	object V36;
	V34= make_cons((V29),Cnil);
	V35= (VV[0]->s.s_dbind);
	V36= make_cons((V31),(V32));
	base[2]= (V34);
	base[3]= (V35);
	base[4]= (V36);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	vs_top=sup;
	{object V37 = vs_base[0];
	VMR6(V37)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function INITIALIZE-INTERNAL-ERROR-TABLE	*/

static object LI7()

{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	base[0]= (VV[0]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	Lclrhash();
	vs_top=sup;
	{register object V38;
	register object V39;
	V38= (VV[16]->s.s_dbind);
	V39= CMPcar((V38));
	goto T66;
T66:;
	if(!(((V38))==Cnil)){
	goto T67;}
	{object V40 = Cnil;
	VMR7(V40)}
	goto T67;
T67:;
	{object V41;
	V41= CMPcdr((V39));
	 vs_top=base+1;
	 while(V41!=Cnil)
	 {vs_push((V41)->c.c_car);V41=(V41)->c.c_cdr;}
	vs_base=base+1;}
	(void) (*Lnk43)();
	vs_top=sup;
	V38= CMPcdr((V38));
	V39= CMPcar((V38));
	goto T66;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2361	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	base[0]= VV[16];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk40)();
	vs_top=sup;
	{object V42 = Cnil;
	VMR8(V42)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2373	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	(VV[16]->s.s_dbind)= VV[17];
	{object V43 = Cnil;
	VMR9(V43)}
	return Cnil;
}
/*	local entry for function progn 'compile2385	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V44 = Cnil;
	VMR10(V44)}
	return Cnil;
}
/*	local entry for function progn 'compile2487	*/

static object LI11()

{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	(void)((*(LnkLI44))());
	{object V45 = Cnil;
	VMR11(V45)}
	return Cnil;
}
/*	local entry for function CONDITION-BACKTRACE	*/

static object LI12(V47)

object V47;
{	 VMB12 VMS12 VMV12
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[18],(VV[19]->s.s_dbind));
	bds_bind(VV[20],one_plus((VV[21]->s.s_dbind)));
	vs_base=vs_top;
	(void) (*Lnk45)();
	vs_top=sup;
	V48= vs_base[0];
	bds_bind(VV[21],one_minus(V48));
	bds_bind(VV[22],(VV[21]->s.s_dbind));{object V49;
	base[7]= (VV[24]->s.s_dbind);
	base[8]= (VV[20]->s.s_dbind);
	vs_top=(vs_base=base+7)+2;
	(void) (*Lnk46)();
	vs_top=sup;
	V49= vs_base[0];
	if(V49==Cnil)goto T88;
	bds_bind(VV[23],V49);
	goto T87;
	goto T88;
T88:;}
	vs_base=vs_top;
	(void) (*Lnk47)();
	vs_top=sup;
	V50= vs_base[0];
	bds_bind(VV[23],one_plus(V50));
	goto T87;
T87:;
	vs_base=vs_top;
	(void) (*Lnk47)();
	vs_top=sup;
	bds_bind(VV[24],vs_base[0]);
	bds_bind(VV[25],Cnil);
	base[7]= (VV[19]->s.s_dbind);
	base[8]= VV[26];
	base[9]= (V47);
	vs_top=(vs_base=base+7)+3;
	Lformat();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk48)();
	vs_top=sup;
	{object V51 = vs_base[0];
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR12(V51)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2515	*/

static object LI13()

{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	base[0]= VV[27];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk40)();
	vs_top=sup;
	{object V52 = Cnil;
	VMR13(V52)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2527	*/

static object LI14()

{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if(!((VV[27])->s.s_dbind!=OBJNULL)){
	goto T101;}
	goto T100;
	goto T101;
T101:;
	(VV[27]->s.s_dbind)= Cnil;
	goto T100;
T100:;
	{object V53 = Cnil;
	VMR14(V53)}
	return Cnil;
}
/*	local entry for function progn 'compile2540	*/

static object LI15()

{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V54 = Cnil;
	VMR15(V54)}
	return Cnil;
}
/*	function definition for CLCS-ERROR-SET	*/

static void L16()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM16; VC16
	vs_check;
	bds_check;
	base[0]=MMcons(base[0],Cnil);
	vs_top=sup;
	base[1]=alloc_frame_id();
	base[1]=MMcons(base[1],base[0]);
	frs_push(FRS_CATCH,(base[1]->c.c_car));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	base[2]=MMcons(Cnil,base[1]);
	base[3]=MMcons(Cnil,base[2]);
	base[4]=alloc_frame_id();
	base[4]=MMcons(base[4],base[3]);
	frs_push(FRS_CATCH,(base[4]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[34]))goto T106;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V55= 
	make_cclosure_new(LC25,Cnil,base[4],Cdata);
	V56= 
	make_cclosure_new(LC26,Cnil,base[4],Cdata);
	V57= (VFUN_NARGS=6,(*(LnkLI41))(VV[6],VV[28],VV[8],V55,VV[9],V56));
	V58= make_cons(/* INLINE-ARGS */V57,Cnil);
	base[5]= make_cons(/* INLINE-ARGS */V58,(VV[5]->s.s_dbind));
	bds_bind(VV[5],base[5]);
	V59= 
	make_cclosure_new(LC27,Cnil,base[4],Cdata);
	V60= make_cons(VV[32],V59);
	V61= make_cons(/* INLINE-ARGS */V60,Cnil);
	base[6]= make_cons(/* INLINE-ARGS */V61,(VV[31]->s.s_dbind));
	bds_bind(VV[31],base[6]);
	base[8]= (base[0]->c.c_car);
	vs_top=(vs_base=base+8)+1;
	Leval();
	Llist();
	vs_top=sup;
	V62= vs_base[0];
	base[7]= make_cons(Cnil,V62);
	vs_top=(vs_base=base+7)+1;
	Lvalues_list();
	frs_pop();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;
	goto T106;
T106:;
	{object V63;
	V63= (base[3]->c.c_car);
	frs_pop();
	frs_pop();
	base[5]= (base[2]->c.c_car);
	vs_top=(vs_base=base+5)+1;
	return;}
	frs_pop();
	frs_pop();
	base[5]= Cnil;
	vs_top=(vs_base=base+5)+1;
	return;
	}
}
/*	local entry for function RESET-FUNCTION	*/

static object LI17(V65)

object V65;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	base[0]= (V65);
	base[2]= (V65);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	{object V66 = vs_base[0];
	VMR17(V66)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2632	*/

static object LI18()

{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	(void)((*(LnkLI50))(VV[28]));
	{object V67 = Cnil;
	VMR18(V67)}
	return Cnil;
}
/*	local entry for function progn 'compile2664	*/

static object LI19()

{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	(void)((*(LnkLI50))(VV[35]));
	{object V68 = Cnil;
	VMR19(V68)}
	return Cnil;
}
/*	local entry for function progn 'compile2696	*/

static object LI20()

{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	(void)((*(LnkLI50))(VV[36]));
	{object V69 = Cnil;
	VMR20(V69)}
	return Cnil;
}
/*	local entry for function progn 'compile2708	*/

static object LI21()

{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	(VV[37]->s.s_dbind)= Ct;
	{object V70 = Cnil;
	VMR21(V70)}
	return Cnil;
}
/*	function definition for CMP-TOPLEVEL-EVAL	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	bds_check;
	{object V71;
	V71=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk45)();
	vs_top=sup;
	V72= vs_base[0];
	bds_bind(VV[21],one_minus(V72));
	bds_bind(VV[33],(VV[37]->s.s_dbind));
	base[4]= VV[39];
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V73= vs_base[0];
	bds_bind(VV[38],make_cons(V73,(VV[38]->s.s_dbind)));
	base[4]= (V71);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk28)();
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC27(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V74;
	V74=(base[0]);
	vs_top=sup;
	if(((VV[33]->s.s_dbind))!=Cnil){
	goto T131;}
	if(((VV[27]->s.s_dbind))!=Cnil){
	goto T131;}
	(void)((*(LnkLI51))((V74)));
	{frame_ptr fr;
	fr=frs_sch((base0[3]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[49]);
	base[1]= (V74);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,Cnil);}
	goto T131;
T131:;
	(base0[2]->c.c_car)= (V74);
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V75;
	V75=(base[0]);
	vs_top=sup;
	base[1]= (V75);
	base[2]= VV[29];
	base[3]= list(2,VV[28],list(2,VV[30],(base0[4]->c.c_car)));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC25(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	{object V76;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V76=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V76);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[34]);
	vs_base=vs_top;
	unwind(fr,VV[34]);}
	}
}
/*	local function CLOSURE	*/

static void LC24(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	{object V77;
	V77=(base[0]);
	vs_top=sup;
	base[1]= (V77);
	base[2]= VV[10];
	base[4]= Cnil;
	base[5]= (base0[3]->c.c_car);
	{object V78;
	V78= (base0[2]->c.c_car);
	 vs_top=base+6;
	 while(V78!=Cnil)
	 {vs_push((V78)->c.c_car);V78=(V78)->c.c_cdr;}
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

static void LC23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	{object V79;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V79=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V79);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[14]);
	vs_base=vs_top;
	unwind(fr,VV[14]);}
	}
}
static object  LnkTLI51(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[51],(void **)(void *)&LnkLI51,1,first,ap);va_end(ap);return V1;} /* CONDITION-BACKTRACE */
static void LnkT28(){ call_or_link(VV[28],(void **)(void *)&Lnk28);} /* ERROR-SET */
static object  LnkTLI50(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[50],(void **)(void *)&LnkLI50,1,first,ap);va_end(ap);return V1;} /* RESET-FUNCTION */
static void LnkT48(){ call_or_link(VV[48],(void **)(void *)&Lnk48);} /* SIMPLE-BACKTRACE */
static void LnkT47(){ call_or_link(VV[47],(void **)(void *)&Lnk47);} /* FRS-TOP */
static void LnkT46(){ call_or_link(VV[46],(void **)(void *)&Lnk46);} /* SCH-FRS-BASE */
static void LnkT45(){ call_or_link(VV[45],(void **)(void *)&Lnk45);} /* IHS-TOP */
static object  LnkTLI44(){return call_proc0(VV[44],(void **)(void *)&LnkLI44);} /* INITIALIZE-INTERNAL-ERROR-TABLE */
static void LnkT43(){ call_or_link(VV[43],(void **)(void *)&Lnk43);} /* SET-INTERNAL-ERROR */
static void LnkT32(){ call_or_link(VV[32],(void **)(void *)&Lnk32);} /* ERROR */
static object  LnkTLI42(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[42],(void **)(void *)&LnkLI42,1,first,ap);va_end(ap);return V1;} /* SIMPLE-CONDITION-CLASS-P */
static object  LnkTLI41(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[41],(void **)(void *)&LnkLI41,first,ap);va_end(ap);return V1;} /* MAKE-RESTART */
static void LnkT40(){ call_or_link(VV[40],(void **)(void *)&Lnk40);} /* *MAKE-SPECIAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

