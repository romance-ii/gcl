
#include "cmpinclude.h"
#include "clcs_install.h"
void init_clcs_install(){do_init(VV);}
/*	local entry for function progn 'compile2181	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk26)();
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
	setq(VV[0],VV[1]);
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
/*	local entry for function INSTALL-SYMBOL	*/

static object LI4(V6,V7)

register object V6;object V7;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	if((get((V6),VV[2],Cnil))!=Cnil){
	goto T9;}
	base[0]= (V6);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V8= vs_base[0];
	(void)(sputprop((V6),VV[2],V8));
	goto T9;
T9:;
	base[0]= (V6);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V9= vs_base[0];
	base[0]= (V7);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V10= vs_base[0];
	if((V9)==(V10)){
	goto T15;}
	base[0]= (V6);
	base[2]= (V7);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	base[1]= vs_base[0];
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	{object V11 = vs_base[0];
	VMR4(V11)}
	goto T15;
T15:;
	{object V12 = Cnil;
	VMR4(V12)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REVERT-SYMBOL	*/

static object LI5(V14)

register object V14;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	if((get((V14),VV[2],Cnil))==Cnil){
	goto T25;}
	base[0]= (V14);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V15= vs_base[0];
	V16= get((V14),VV[2],Cnil);
	if((V15)==(V16)){
	goto T25;}
	base[0]= (V14);
	base[1]= get((V14),VV[2],Cnil);
	vs_top=(vs_base=base+0)+2;
	siLfset();
	vs_top=sup;
	{object V17 = vs_base[0];
	VMR5(V17)}
	goto T25;
T25:;
	{object V18 = Cnil;
	VMR5(V18)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2266	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	base[0]= VV[3];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk26)();
	vs_top=sup;
	{object V19 = Cnil;
	VMR6(V19)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2278	*/

static object LI7()

{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	base[0]= VV[3];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T37;}
	goto T36;
	goto T37;
T37:;
	base[1]= symbol_value(VV[0]);
	{object V21;
	object V22= base[1];
	if(endp(V22)){
	V20= Cnil;
	goto T41;}
	base[0]=V21=MMcons(Cnil,Cnil);
	goto T42;
T42:;
	base[2]= symbol_name((V22->c.c_car));
	base[3]= VV[4];
	vs_top=(vs_base=base+2)+2;
	Lintern();
	vs_top=sup;
	V24= vs_base[0];
	(V21->c.c_car)= list(2,V24,(V22->c.c_car));
	V22=MMcdr(V22);
	if(endp(V22)){
	V20= base[0];
	goto T41;}
	V21=MMcdr(V21)=MMcons(Cnil,Cnil);
	goto T42;}
	goto T41;
T41:;
	setq(VV[3],nconc(V20,VV[5]));
	goto T36;
T36:;
	{object V25 = Cnil;
	VMR7(V25)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2295	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V26 = Cnil;
	VMR8(V26)}
	return Cnil;
}
/*	local entry for function INSTALL-CLCS-SYMBOLS	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	{register object V27;
	register object V28;
	V27= symbol_value(VV[3]);
	V28= car((V27));
	goto T52;
T52:;
	if(!(endp_prop((V27)))){
	goto T53;}
	goto T48;
	goto T53;
T53:;
	(void)((*(LnkLI27))(car((V28)),cadr((V28))));
	V27= cdr((V27));
	V28= car((V27));
	goto T52;}
	goto T48;
T48:;
	{object V29 = Cnil;
	VMR9(V29)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function REVERT-CLCS-SYMBOLS	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{register object V30;
	register object V31;
	V30= reverse(symbol_value(VV[3]));
	V31= car((V30));
	goto T67;
T67:;
	if(!(endp_prop((V30)))){
	goto T68;}
	goto T63;
	goto T68;
T68:;
	(void)((*(LnkLI28))(car((V31))));
	V30= cdr((V30));
	V31= car((V30));
	goto T67;}
	goto T63;
T63:;
	{object V32 = Cnil;
	VMR10(V32)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for CLCS-COMPILE-FILE	*/

static void L11()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM11; VC11
	vs_reserve(VM11);
	bds_check;
	{VOL object V33;
	if(vs_top-vs_base<1) too_few_arguments();
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V33=(base[1]);
	vs_top=sup;
	goto T79;
T79:;
	base[2]=MMcons(Cnil,base[0]);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[15]))goto T82;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V34= 
	make_cclosure_new(LC16,Cnil,base[3],Cdata);
	V35= 
	make_cclosure_new(LC17,Cnil,base[3],Cdata);
	V36= (VFUN_NARGS=6,(*(LnkLI29))(VV[7],VV[8],VV[9],V34,VV[10],V35));
	V37= make_cons(/* INLINE-ARGS */V36,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V37,symbol_value(VV[6]));
	bds_bind(VV[6],base[4]);
	{register object V38;
	{register object V39;
	V39= get(VV[12],VV[2],Cnil);
	if(((V39))==Cnil){
	goto T91;}
	base[5]= (V39);
	goto T88;
	goto T91;
T91:;
	base[5]= symbol_function(VV[12]);}
	goto T88;
T88:;
	base[6]= (base[0]->c.c_car);
	{object V40;
	V40= (V33);
	 vs_top=base+7;
	 while(!endp(V40))
	 {vs_push(car(V40));V40=cdr(V40);}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	Llist();
	vs_top=sup;
	V38= vs_base[0];
	if((symbol_value(VV[13]))!=Cnil){
	goto T95;}
	base[5]= (V38);
	vs_top=(vs_base=base+5)+1;
	Lvalues_list();
	frs_pop();
	bds_unwind1;
	return;
	goto T95;
T95:;
	base[5]= VV[14];
	base[6]= VV[12];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk30)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T80;}
	goto T82;
T82:;
	{register object V41;
	V41= (base[2]->c.c_car);
	ck_larg_exactly(0,(V41));
	base[4]= Cnil;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	vs_top=sup;
	frs_pop();
	goto T80;}
	frs_pop();
	goto T80;
	goto T80;
T80:;
	goto T79;
	}
}
/*	function definition for CLCS-COMPILE	*/

static void L12()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM12; VC12
	vs_reserve(VM12);
	bds_check;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	base[0]=MMcons(base[0],Cnil);
	vs_top=sup;
	goto T106;
T106:;
	base[1]=MMcons(Cnil,base[0]);
	base[2]=alloc_frame_id();
	base[2]=MMcons(base[2],base[1]);
	frs_push(FRS_CATCH,(base[2]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[19]))goto T109;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V42= 
	make_cclosure_new(LC18,Cnil,base[2],Cdata);
	V43= 
	make_cclosure_new(LC19,Cnil,base[2],Cdata);
	V44= (VFUN_NARGS=6,(*(LnkLI29))(VV[7],VV[8],VV[9],V42,VV[10],V43));
	V45= make_cons(/* INLINE-ARGS */V44,Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V45,symbol_value(VV[6]));
	bds_bind(VV[6],base[3]);
	{register object V46;
	{register object V47;
	V47= get(VV[17],VV[2],Cnil);
	if(((V47))==Cnil){
	goto T118;}
	base[4]= (V47);
	goto T115;
	goto T118;
T118:;
	base[4]= symbol_function(VV[12]);}
	goto T115;
T115:;
	{object V48;
	V48= (base[0]->c.c_car);
	 vs_top=base+5;
	 while(!endp(V48))
	 {vs_push(car(V48));V48=cdr(V48);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	Llist();
	vs_top=sup;
	V46= vs_base[0];
	if((symbol_value(VV[13]))!=Cnil){
	goto T121;}
	base[4]= (V46);
	vs_top=(vs_base=base+4)+1;
	Lvalues_list();
	frs_pop();
	bds_unwind1;
	return;
	goto T121;
T121:;
	base[4]= VV[18];
	base[5]= VV[17];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk30)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T107;}
	goto T109;
T109:;
	{register object V49;
	V49= (base[1]->c.c_car);
	ck_larg_exactly(0,(V49));
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	vs_top=sup;
	frs_pop();
	goto T107;}
	frs_pop();
	goto T107;
	goto T107;
T107:;
	goto T106;
}
/*	function definition for CLCS-LOAD	*/

static void L13()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM13; VC13
	vs_reserve(VM13);
	bds_check;
	{VOL object V50;
	if(vs_top-vs_base<1) too_few_arguments();
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V50=(base[1]);
	vs_top=sup;
	goto T132;
T132:;
	base[2]=MMcons(Cnil,base[0]);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[22]))goto T135;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V51= 
	make_cclosure_new(LC20,Cnil,base[3],Cdata);
	V52= 
	make_cclosure_new(LC21,Cnil,base[3],Cdata);
	V53= (VFUN_NARGS=6,(*(LnkLI29))(VV[7],VV[8],VV[9],V51,VV[10],V52));
	V54= make_cons(/* INLINE-ARGS */V53,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V54,symbol_value(VV[6]));
	bds_bind(VV[6],base[4]);
	{register object V55;
	V55= get(VV[21],VV[2],Cnil);
	if(((V55))==Cnil){
	goto T142;}
	base[5]= (V55);
	goto T139;
	goto T142;
T142:;
	base[5]= symbol_function(VV[21]);}
	goto T139;
T139:;
	base[6]= (base[0]->c.c_car);
	{object V56;
	V56= (V50);
	 vs_top=base+7;
	 while(!endp(V56))
	 {vs_push(car(V56));V56=cdr(V56);}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	frs_pop();
	bds_unwind1;
	return;
	goto T135;
T135:;
	{register object V57;
	V57= (base[2]->c.c_car);
	ck_larg_exactly(0,(V57));
	base[4]= Cnil;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	vs_top=sup;
	frs_pop();
	goto T133;}
	frs_pop();
	goto T133;
	goto T133;
T133:;
	goto T132;
	}
}
/*	function definition for CLCS-OPEN	*/

static void L14()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM14; VC14
	vs_reserve(VM14);
	bds_check;
	{VOL object V58;
	if(vs_top-vs_base<1) too_few_arguments();
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V58=(base[1]);
	vs_top=sup;
	goto T151;
T151:;
	base[2]=MMcons(Cnil,base[0]);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[25]))goto T154;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V59= 
	make_cclosure_new(LC22,Cnil,base[3],Cdata);
	V60= 
	make_cclosure_new(LC23,Cnil,base[3],Cdata);
	V61= (VFUN_NARGS=6,(*(LnkLI29))(VV[7],VV[8],VV[9],V59,VV[10],V60));
	V62= make_cons(/* INLINE-ARGS */V61,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V62,symbol_value(VV[6]));
	bds_bind(VV[6],base[4]);
	{register object V63;
	V63= get(VV[24],VV[2],Cnil);
	if(((V63))==Cnil){
	goto T161;}
	base[5]= (V63);
	goto T158;
	goto T161;
T161:;
	base[5]= symbol_function(VV[24]);}
	goto T158;
T158:;
	base[6]= (base[0]->c.c_car);
	{object V64;
	V64= (V58);
	 vs_top=base+7;
	 while(!endp(V64))
	 {vs_push(car(V64));V64=cdr(V64);}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	frs_pop();
	bds_unwind1;
	return;
	goto T154;
T154:;
	{register object V65;
	V65= (base[2]->c.c_car);
	ck_larg_exactly(0,(V65));
	base[4]= Cnil;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	vs_top=sup;
	frs_pop();
	goto T152;}
	frs_pop();
	goto T152;
	goto T152;
T152:;
	goto T151;
	}
}
/*	local entry for function progn 'compile2835	*/

static object LI15()

{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	(void)((*(LnkLI31))());
	{object V66 = Cnil;
	VMR15(V66)}
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{register object V67;
	check_arg(1);
	V67=(base[0]);
	vs_top=sup;
	base[1]= (V67);
	base[2]= VV[23];
	base[3]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC22(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{register object V68;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V68=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V68);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[25]);
	vs_base=vs_top;
	unwind(fr,VV[25]);}
	}
}
/*	local function CLOSURE	*/

static void LC21(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{register object V69;
	check_arg(1);
	V69=(base[0]);
	vs_top=sup;
	base[1]= (V69);
	base[2]= VV[20];
	base[3]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC20(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{register object V70;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V70=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V70);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[22]);
	vs_base=vs_top;
	unwind(fr,VV[22]);}
	}
}
/*	local function CLOSURE	*/

static void LC19(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{register object V71;
	check_arg(1);
	V71=(base[0]);
	vs_top=sup;
	base[1]= (V71);
	base[2]= VV[16];
	base[3]= car((base0[2]->c.c_car));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC18(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{register object V72;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V72=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V72);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[19]);
	vs_base=vs_top;
	unwind(fr,VV[19]);}
	}
}
/*	local function CLOSURE	*/

static void LC17(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	{register object V73;
	check_arg(1);
	V73=(base[0]);
	vs_top=sup;
	base[1]= (V73);
	base[2]= VV[11];
	base[3]= (base0[2]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	{register object V74;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V74=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V74);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[15]);
	vs_base=vs_top;
	unwind(fr,VV[15]);}
	}
}
static object  LnkTLI31(){return call_proc0(VV[31],(void **)(void *)&LnkLI31);} /* INSTALL-CLCS-SYMBOLS */
static void LnkT30(){ call_or_link(VV[30],(void **)(void *)&Lnk30);} /* ERROR */
static object  LnkTLI29(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[29],(void **)(void *)&LnkLI29,first,ap);va_end(ap);return V1;} /* MAKE-RESTART */
static object  LnkTLI28(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[28],(void **)(void *)&LnkLI28,1,first,ap);va_end(ap);return V1;} /* REVERT-SYMBOL */
static object  LnkTLI27(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[27],(void **)(void *)&LnkLI27,2,first,ap);va_end(ap);return V1;} /* INSTALL-SYMBOL */
static void LnkT26(){ call_or_link(VV[26],(void **)(void *)&Lnk26);} /* *MAKE-SPECIAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

