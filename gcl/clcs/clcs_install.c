
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
/*	function definition for INSTALL-SYMBOL	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	{register object V4;
	object V5;
	check_arg(2);
	V4=(base[0]);
	V5=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((get((V4),VV[2],Cnil))!=Cnil){
	goto T9;}
	base[2]= (V4);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	V6= vs_base[0];
	(void)(sputprop((V4),VV[2],V6));
	goto T9;
T9:;
	base[2]= (V4);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	V7= vs_base[0];
	base[2]= (V5);
	vs_top=(vs_base=base+2)+1;
	Lsymbol_function();
	vs_top=sup;
	V8= vs_base[0];
	if((V7)==(V8)){
	goto T15;}
	base[2]= (V4);
	base[4]= (V5);
	vs_top=(vs_base=base+4)+1;
	Lsymbol_function();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	siLfset();
	return;
	goto T15;
T15:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for REVERT-SYMBOL	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_reserve(VM5);
	{register object V9;
	check_arg(1);
	V9=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((get((V9),VV[2],Cnil))==Cnil){
	goto T25;}
	base[1]= (V9);
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	V10= vs_base[0];
	V11= get((V9),VV[2],Cnil);
	if((V10)==(V11)){
	goto T25;}
	base[1]= (V9);
	base[2]= get((V9),VV[2],Cnil);
	vs_top=(vs_base=base+1)+2;
	siLfset();
	return;
	goto T25;
T25:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
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
	{object V12 = Cnil;
	VMR6(V12)}
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
	{object V14;
	object V15= base[1];
	if(endp(V15)){
	V13= Cnil;
	goto T41;}
	base[0]=V14=MMcons(Cnil,Cnil);
	goto T42;
T42:;
	base[2]= symbol_name((V15->c.c_car));
	base[3]= VV[4];
	vs_top=(vs_base=base+2)+2;
	Lintern();
	vs_top=sup;
	V17= vs_base[0];
	(V14->c.c_car)= list(2,V17,(V15->c.c_car));
	V15=MMcdr(V15);
	if(endp(V15)){
	V13= base[0];
	goto T41;}
	V14=MMcdr(V14)=MMcons(Cnil,Cnil);
	goto T42;}
	goto T41;
T41:;
	setq(VV[3],nconc(V13,VV[5]));
	goto T36;
T36:;
	{object V18 = Cnil;
	VMR7(V18)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2295	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V19 = Cnil;
	VMR8(V19)}
	return Cnil;
}
/*	function definition for INSTALL-CLCS-SYMBOLS	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V20;
	register object V21;
	V20= symbol_value(VV[3]);
	V21= car((V20));
	goto T52;
T52:;
	if(!(endp_prop((V20)))){
	goto T53;}
	goto T48;
	goto T53;
T53:;
	base[1]= car((V21));
	base[2]= cadr((V21));
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk27)();
	vs_top=sup;
	V20= cdr((V20));
	V21= car((V20));
	goto T52;}
	goto T48;
T48:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for REVERT-CLCS-SYMBOLS	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V22;
	register object V23;
	V22= reverse(symbol_value(VV[3]));
	V23= car((V22));
	goto T69;
T69:;
	if(!(endp_prop((V22)))){
	goto T70;}
	goto T65;
	goto T70;
T70:;
	base[2]= car((V23));
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk28)();
	vs_top=sup;
	V22= cdr((V22));
	V23= car((V22));
	goto T69;}
	goto T65;
T65:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for CLCS-COMPILE-FILE	*/

static void L11()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM11; VC11
	vs_reserve(VM11);
	bds_check;
	{VOL object V24;
	if(vs_top-vs_base<1) too_few_arguments();
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V24=(base[1]);
	vs_top=sup;
	goto T82;
T82:;
	base[2]=MMcons(Cnil,base[0]);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[15]))goto T85;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[5]= VV[7];
	base[6]= VV[8];
	base[7]= VV[9];
	base[8]= 
	make_cclosure_new(LC16,Cnil,base[3],Cdata);
	base[9]= VV[10];
	base[10]= 
	make_cclosure_new(LC17,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+5)+6;
	(void) (*Lnk29)();
	vs_top=sup;
	V25= vs_base[0];
	V26= make_cons(V25,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V26,symbol_value(VV[6]));
	bds_bind(VV[6],base[4]);
	{register object V27;
	{register object V28;
	V28= get(VV[12],VV[2],Cnil);
	if(((V28))==Cnil){
	goto T99;}
	base[5]= (V28);
	goto T96;
	goto T99;
T99:;
	base[5]= symbol_function(VV[12]);}
	goto T96;
T96:;
	base[6]= (base[0]->c.c_car);
	{object V29;
	V29= (V24);
	 vs_top=base+7;
	 while(!endp(V29))
	 {vs_push(car(V29));V29=cdr(V29);}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	Llist();
	vs_top=sup;
	V27= vs_base[0];
	if((symbol_value(VV[13]))!=Cnil){
	goto T103;}
	base[5]= (V27);
	vs_top=(vs_base=base+5)+1;
	Lvalues_list();
	frs_pop();
	bds_unwind1;
	return;
	goto T103;
T103:;
	base[5]= VV[14];
	base[6]= VV[12];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk30)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T83;}
	goto T85;
T85:;
	{register object V30;
	V30= (base[2]->c.c_car);
	ck_larg_exactly(0,(V30));
	base[4]= Cnil;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	vs_top=sup;
	frs_pop();
	goto T83;}
	frs_pop();
	goto T83;
	goto T83;
T83:;
	goto T82;
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
	goto T114;
T114:;
	base[1]=MMcons(Cnil,base[0]);
	base[2]=alloc_frame_id();
	base[2]=MMcons(base[2],base[1]);
	frs_push(FRS_CATCH,(base[2]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[19]))goto T117;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[4]= VV[7];
	base[5]= VV[8];
	base[6]= VV[9];
	base[7]= 
	make_cclosure_new(LC18,Cnil,base[2],Cdata);
	base[8]= VV[10];
	base[9]= 
	make_cclosure_new(LC19,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+4)+6;
	(void) (*Lnk29)();
	vs_top=sup;
	V31= vs_base[0];
	V32= make_cons(V31,Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V32,symbol_value(VV[6]));
	bds_bind(VV[6],base[3]);
	{register object V33;
	{register object V34;
	V34= get(VV[17],VV[2],Cnil);
	if(((V34))==Cnil){
	goto T131;}
	base[4]= (V34);
	goto T128;
	goto T131;
T131:;
	base[4]= symbol_function(VV[12]);}
	goto T128;
T128:;
	{object V35;
	V35= (base[0]->c.c_car);
	 vs_top=base+5;
	 while(!endp(V35))
	 {vs_push(car(V35));V35=cdr(V35);}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	Llist();
	vs_top=sup;
	V33= vs_base[0];
	if((symbol_value(VV[13]))!=Cnil){
	goto T134;}
	base[4]= (V33);
	vs_top=(vs_base=base+4)+1;
	Lvalues_list();
	frs_pop();
	bds_unwind1;
	return;
	goto T134;
T134:;
	base[4]= VV[18];
	base[5]= VV[17];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk30)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T115;}
	goto T117;
T117:;
	{register object V36;
	V36= (base[1]->c.c_car);
	ck_larg_exactly(0,(V36));
	base[3]= Cnil;
	base[4]= Ct;
	vs_top=(vs_base=base+3)+2;
	vs_top=sup;
	frs_pop();
	goto T115;}
	frs_pop();
	goto T115;
	goto T115;
T115:;
	goto T114;
}
/*	function definition for CLCS-LOAD	*/

static void L13()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM13; VC13
	vs_reserve(VM13);
	bds_check;
	{VOL object V37;
	if(vs_top-vs_base<1) too_few_arguments();
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V37=(base[1]);
	vs_top=sup;
	goto T145;
T145:;
	base[2]=MMcons(Cnil,base[0]);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[22]))goto T148;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[5]= VV[7];
	base[6]= VV[8];
	base[7]= VV[9];
	base[8]= 
	make_cclosure_new(LC20,Cnil,base[3],Cdata);
	base[9]= VV[10];
	base[10]= 
	make_cclosure_new(LC21,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+5)+6;
	(void) (*Lnk29)();
	vs_top=sup;
	V38= vs_base[0];
	V39= make_cons(V38,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V39,symbol_value(VV[6]));
	bds_bind(VV[6],base[4]);
	{register object V40;
	V40= get(VV[21],VV[2],Cnil);
	if(((V40))==Cnil){
	goto T160;}
	base[5]= (V40);
	goto T157;
	goto T160;
T160:;
	base[5]= symbol_function(VV[21]);}
	goto T157;
T157:;
	base[6]= (base[0]->c.c_car);
	{object V41;
	V41= (V37);
	 vs_top=base+7;
	 while(!endp(V41))
	 {vs_push(car(V41));V41=cdr(V41);}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	frs_pop();
	bds_unwind1;
	return;
	goto T148;
T148:;
	{register object V42;
	V42= (base[2]->c.c_car);
	ck_larg_exactly(0,(V42));
	base[4]= Cnil;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	vs_top=sup;
	frs_pop();
	goto T146;}
	frs_pop();
	goto T146;
	goto T146;
T146:;
	goto T145;
	}
}
/*	function definition for CLCS-OPEN	*/

static void L14()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM14; VC14
	vs_reserve(VM14);
	bds_check;
	{VOL object V43;
	if(vs_top-vs_base<1) too_few_arguments();
	base[0]=MMcons(base[0],Cnil);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V43=(base[1]);
	vs_top=sup;
	goto T169;
T169:;
	base[2]=MMcons(Cnil,base[0]);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[25]))goto T172;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[5]= VV[7];
	base[6]= VV[8];
	base[7]= VV[9];
	base[8]= 
	make_cclosure_new(LC22,Cnil,base[3],Cdata);
	base[9]= VV[10];
	base[10]= 
	make_cclosure_new(LC23,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+5)+6;
	(void) (*Lnk29)();
	vs_top=sup;
	V44= vs_base[0];
	V45= make_cons(V44,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V45,symbol_value(VV[6]));
	bds_bind(VV[6],base[4]);
	{register object V46;
	V46= get(VV[24],VV[2],Cnil);
	if(((V46))==Cnil){
	goto T184;}
	base[5]= (V46);
	goto T181;
	goto T184;
T184:;
	base[5]= symbol_function(VV[24]);}
	goto T181;
T181:;
	base[6]= (base[0]->c.c_car);
	{object V47;
	V47= (V43);
	 vs_top=base+7;
	 while(!endp(V47))
	 {vs_push(car(V47));V47=cdr(V47);}
	vs_base=base+6;}
	{object _funobj = base[5];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	frs_pop();
	bds_unwind1;
	return;
	goto T172;
T172:;
	{register object V48;
	V48= (base[2]->c.c_car);
	ck_larg_exactly(0,(V48));
	base[4]= Cnil;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	vs_top=sup;
	frs_pop();
	goto T170;}
	frs_pop();
	goto T170;
	goto T170;
T170:;
	goto T169;
	}
}
/*	local entry for function progn 'compile2835	*/

static object LI15()

{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk31)();
	vs_top=sup;
	{object V49 = Cnil;
	VMR15(V49)}
	base[0]=base[0];
	return Cnil;
}
/*	local function CLOSURE	*/

static void LC23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{register object V50;
	check_arg(1);
	V50=(base[0]);
	vs_top=sup;
	base[1]= (V50);
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
	{register object V51;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V51=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V51);
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
	{register object V52;
	check_arg(1);
	V52=(base[0]);
	vs_top=sup;
	base[1]= (V52);
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
	{register object V53;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V53=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V53);
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
	{register object V54;
	check_arg(1);
	V54=(base[0]);
	vs_top=sup;
	base[1]= (V54);
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
	{register object V55;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V55=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V55);
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
	{register object V56;
	check_arg(1);
	V56=(base[0]);
	vs_top=sup;
	base[1]= (V56);
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
	{register object V57;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V57=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V57);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[15]);
	vs_base=vs_top;
	unwind(fr,VV[15]);}
	}
}
static void LnkT31(){ call_or_link(VV[31],(void **)&Lnk31);} /* INSTALL-CLCS-SYMBOLS */
static void LnkT30(){ call_or_link(VV[30],(void **)&Lnk30);} /* ERROR */
static void LnkT29(){ call_or_link(VV[29],(void **)&Lnk29);} /* MAKE-RESTART */
static void LnkT28(){ call_or_link(VV[28],(void **)&Lnk28);} /* REVERT-SYMBOL */
static void LnkT27(){ call_or_link(VV[27],(void **)&Lnk27);} /* INSTALL-SYMBOL */
static void LnkT26(){ call_or_link(VV[26],(void **)&Lnk26);} /* *MAKE-SPECIAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

