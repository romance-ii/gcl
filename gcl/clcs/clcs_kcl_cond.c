
#include "cmpinclude.h"
#include "clcs_kcl_cond.h"
void init_clcs_kcl_cond(){do_init(VV);}
/*	local entry for function progn 'compile1788	*/

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
	base[0]= VV[1];
	base[1]= VV[2];
	vs_top=(vs_base=base+0)+2;
	Lmake_hash_table();
	vs_top=sup;
	setq(VV[0],vs_base[0]);
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
/*	macro definition for FIND-INTERNAL-ERROR-DATA	*/

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
	if(!endp(V4))invalid_macro_call();}
	base[3]= list(3,VV[3],list(2,VV[4],base[2]),VV[0]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for CLCS-UNIVERSAL-ERROR-HANDLER	*/

static void L5()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM5; VC5
	vs_reserve(VM5);
	bds_check;
	{VOL object V5;
	VOL object V6;
	VOL object V7;
	VOL object V8;
	if(vs_top-vs_base<5) too_few_arguments();
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
	base[7]= symbol_value(VV[0]);
	vs_top=(vs_base=base+6)+2;
	Lgethash();
	vs_top=sup;
	V9= vs_base[0];
	if(((V9))==Cnil){
	goto T15;}
	{VOL object V10;
	V10= car((V9));
	if(((V6))==Cnil){
	goto T19;}
	base[6]=MMcons(Cnil,base[5]);
	base[7]=alloc_frame_id();
	base[7]=MMcons(base[7],base[6]);
	frs_push(FRS_CATCH,(base[7]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[14]))goto T22;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[9]= VV[6];
	base[10]= VV[7];
	base[11]= VV[8];
	base[12]= 
	make_cclosure_new(LC23,Cnil,base[7],Cdata);
	base[13]= VV[9];
	base[14]= 
	make_cclosure_new(LC24,Cnil,base[7],Cdata);
	vs_top=(vs_base=base+9)+6;
	(void) (*Lnk41)();
	vs_top=sup;
	V11= vs_base[0];
	V12= make_cons(V11,Cnil);
	base[8]= make_cons(/* INLINE-ARGS */V12,symbol_value(VV[5]));
	bds_bind(VV[5],base[8]);
	base[9]=symbol_function(VV[32]);
	base[10]= (V10);
	base[11]= VV[11];
	base[12]= (V7);
	{object V13;
	{object V14;
	{object V15;
	object V16= cdr((V9));
	object V17= (base[5]->c.c_car);
	if(endp(V16)||endp(V17)){
	V14= Cnil;
	goto T35;}
	base[13]=V15=MMcons(Cnil,Cnil);
	goto T36;
T36:;
	(V15->c.c_cdr)= list(2,(V16->c.c_car),(V17->c.c_car));
	{object cdr_V15=MMcdr(V15);while(!endp(cdr_V15)) {cdr_V15=MMcdr(cdr_V15);V15=MMcdr(V15);}}
	V16=MMcdr(V16);
	V17=MMcdr(V17);
	if(endp(V16)||endp(V17)){
	base[13]=base[13]->c.c_cdr;
	V14= base[13];
	goto T35;}
	goto T36;}
	goto T35;
T35:;
	base[13]= (V10);
	vs_top=(vs_base=base+13)+1;
	(void) (*Lnk42)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T39;}
	V13= listA(5,VV[12],(V8),VV[13],(base[5]->c.c_car),(V14));
	goto T34;
	goto T39;
T39:;
	V13= (V14);}
	goto T34;
T34:;
	 vs_top=base+13;
	 while(!endp(V13))
	 {vs_push(car(V13));V13=cdr(V13);}
	vs_base=base+10;}
	(void) (*Lnk32)();
	frs_pop();
	bds_unwind1;
	return;
	goto T22;
T22:;
	{object V18;
	V18= (base[6]->c.c_car);
	ck_larg_exactly(0,(V18));
	base[8]= Cnil;
	base[9]= Ct;
	vs_top=(vs_base=base+8)+2;
	frs_pop();
	return;}
	frs_pop();
	base[8]= Cnil;
	vs_top=(vs_base=base+8)+1;
	return;
	goto T19;
T19:;
	base[6]=symbol_function(VV[32]);
	base[7]= (V10);
	base[8]= VV[11];
	base[9]= (V7);
	{object V19;
	{object V20;
	{object V21;
	object V22= cdr((V9));
	object V23= (base[5]->c.c_car);
	if(endp(V22)||endp(V23)){
	V20= Cnil;
	goto T49;}
	base[10]=V21=MMcons(Cnil,Cnil);
	goto T50;
T50:;
	(V21->c.c_cdr)= list(2,(V22->c.c_car),(V23->c.c_car));
	{object cdr_V21=MMcdr(V21);while(!endp(cdr_V21)) {cdr_V21=MMcdr(cdr_V21);V21=MMcdr(V21);}}
	V22=MMcdr(V22);
	V23=MMcdr(V23);
	if(endp(V22)||endp(V23)){
	base[10]=base[10]->c.c_cdr;
	V20= base[10];
	goto T49;}
	goto T50;}
	goto T49;
T49:;
	base[10]= (V10);
	vs_top=(vs_base=base+10)+1;
	(void) (*Lnk42)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T53;}
	V19= listA(5,VV[12],(V8),VV[13],(base[5]->c.c_car),(V20));
	goto T48;
	goto T53;
T53:;
	V19= (V20);}
	goto T48;
T48:;
	 vs_top=base+10;
	 while(!endp(V19))
	 {vs_push(car(V19));V19=cdr(V19);}
	vs_base=base+7;}
	(void) (*Lnk32)();
	return;}
	goto T15;
T15:;
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
/*	function definition for SET-INTERNAL-ERROR	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_reserve(VM6);
	{object V24;
	object V25;
	object V26;
	object V27;
	if(vs_top-vs_base<3) too_few_arguments();
	V24=(base[0]);
	V25=(base[1]);
	V26=(base[2]);
	vs_base=vs_base+3;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V27=(base[3]);
	vs_top=sup;
	{object V28;
	object V29;
	object V30;
	V28= make_cons((V24),Cnil);
	V29= symbol_value(VV[0]);
	V30= make_cons((V26),(V27));
	base[6]= (V28);
	base[7]= (V29);
	base[8]= (V30);
	vs_top=(vs_base=base+6)+3;
	siLhash_set();
	return;}
	}
}
/*	function definition for INITIALIZE-INTERNAL-ERROR-TABLE	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_reserve(VM7);
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= symbol_value(VV[0]);
	vs_top=(vs_base=base+0)+1;
	Lclrhash();
	vs_top=sup;
	{register object V31;
	register object V32;
	V31= symbol_value(VV[16]);
	V32= car((V31));
	goto T74;
T74:;
	if(!(endp_prop((V31)))){
	goto T75;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T75;
T75:;
	{object V33;
	V33= cdr((V32));
	 vs_top=base+1;
	 while(!endp(V33))
	 {vs_push(car(V33));V33=cdr(V33);}
	vs_base=base+1;}
	(void) (*Lnk43)();
	vs_top=sup;
	V31= cdr((V31));
	V32= car((V31));
	goto T74;}
}
/*	local entry for function progn 'compile1802	*/

static object LI8()

{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	base[0]= VV[16];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk40)();
	vs_top=sup;
	{object V34 = Cnil;
	VMR8(V34)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1802	*/

static object LI9()

{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	setq(VV[16],VV[17]);
	{object V35 = Cnil;
	VMR9(V35)}
	return Cnil;
}
/*	local entry for function progn 'compile1802	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V36 = Cnil;
	VMR10(V36)}
	return Cnil;
}
/*	local entry for function progn 'compile1892	*/

static object LI11()

{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk44)();
	vs_top=sup;
	{object V37 = Cnil;
	VMR11(V37)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for CONDITION-BACKTRACE	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_reserve(VM12);
	bds_check;
	{object V38;
	check_arg(1);
	V38=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	bds_bind(VV[18],symbol_value(VV[19]));
	bds_bind(VV[20],one_plus(symbol_value(VV[21])));
	vs_base=vs_top;
	(void) (*Lnk45)();
	vs_top=sup;
	V39= vs_base[0];
	bds_bind(VV[21],one_minus(V39));
	bds_bind(VV[22],(VV[21]->s.s_dbind));{object V40;
	base[8]= symbol_value(VV[24]);
	base[9]= (VV[20]->s.s_dbind);
	vs_top=(vs_base=base+8)+2;
	(void) (*Lnk46)();
	vs_top=sup;
	V40= vs_base[0];
	if(V40==Cnil)goto T96;
	bds_bind(VV[23],V40);
	goto T95;
	goto T96;
T96:;}
	vs_base=vs_top;
	(void) (*Lnk47)();
	vs_top=sup;
	V41= vs_base[0];
	bds_bind(VV[23],one_plus(V41));
	goto T95;
T95:;
	vs_base=vs_top;
	(void) (*Lnk47)();
	vs_top=sup;
	bds_bind(VV[24],vs_base[0]);
	bds_bind(VV[25],Cnil);
	base[8]= symbol_value(VV[19]);
	base[9]= VV[26];
	base[10]= (V38);
	vs_top=(vs_base=base+8)+3;
	Lformat();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk48)();
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
/*	local entry for function progn 'compile1892	*/

static object LI13()

{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	base[0]= VV[27];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk40)();
	vs_top=sup;
	{object V42 = Cnil;
	VMR13(V42)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1892	*/

static object LI14()

{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	base[0]= VV[27];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T109;}
	goto T108;
	goto T109;
T109:;
	setq(VV[27],Cnil);
	goto T108;
T108:;
	{object V43 = Cnil;
	VMR14(V43)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1893	*/

static object LI15()

{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V44 = Cnil;
	VMR15(V44)}
	return Cnil;
}
/*	function definition for CLCS-ERROR-SET	*/

static void L16()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM16; VC16
	vs_reserve(VM16);
	bds_check;
	check_arg(1);
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
	if(eql(nlj_tag,VV[34]))goto T115;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[6]= VV[6];
	base[7]= VV[28];
	base[8]= VV[8];
	base[9]= 
	make_cclosure_new(LC25,Cnil,base[4],Cdata);
	base[10]= VV[9];
	base[11]= 
	make_cclosure_new(LC26,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+6)+6;
	(void) (*Lnk41)();
	vs_top=sup;
	V45= vs_base[0];
	V46= make_cons(V45,Cnil);
	base[5]= make_cons(/* INLINE-ARGS */V46,symbol_value(VV[5]));
	bds_bind(VV[5],base[5]);
	V47= 
	make_cclosure_new(LC27,Cnil,base[4],Cdata);
	V48= make_cons(VV[32],V47);
	V49= make_cons(/* INLINE-ARGS */V48,Cnil);
	base[6]= make_cons(/* INLINE-ARGS */V49,symbol_value(VV[31]));
	bds_bind(VV[31],base[6]);
	base[8]= (base[0]->c.c_car);
	vs_top=(vs_base=base+8)+1;
	Leval();
	Llist();
	vs_top=sup;
	V50= vs_base[0];
	base[7]= make_cons(Cnil,V50);
	vs_top=(vs_base=base+7)+1;
	Lvalues_list();
	frs_pop();
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	return;
	goto T115;
T115:;
	{object V51;
	V51= (base[3]->c.c_car);
	ck_larg_exactly(0,(V51));
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
/*	function definition for RESET-FUNCTION	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{object V52;
	check_arg(1);
	V52=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V52);
	base[3]= (V52);
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+1)+2;
	siLfset();
	return;
	}
}
/*	local entry for function progn 'compile1899	*/

static object LI18()

{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	base[0]= VV[28];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk50)();
	vs_top=sup;
	{object V53 = Cnil;
	VMR18(V53)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1899	*/

static object LI19()

{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	base[0]= VV[35];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk50)();
	vs_top=sup;
	{object V54 = Cnil;
	VMR19(V54)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1899	*/

static object LI20()

{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	base[0]= VV[36];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk50)();
	vs_top=sup;
	{object V55 = Cnil;
	VMR20(V55)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile1899	*/

static object LI21()

{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	setq(VV[37],Ct);
	{object V56 = Cnil;
	VMR21(V56)}
	return Cnil;
}
/*	function definition for CMP-TOPLEVEL-EVAL	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	bds_check;
	{object V57;
	check_arg(1);
	V57=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk45)();
	vs_top=sup;
	V58= vs_base[0];
	bds_bind(VV[21],one_minus(V58));
	bds_bind(VV[33],symbol_value(VV[37]));
	base[4]= VV[39];
	vs_top=(vs_base=base+4)+1;
	Lfind_package();
	vs_top=sup;
	V59= vs_base[0];
	bds_bind(VV[38],make_cons(V59,symbol_value(VV[38])));
	base[4]= (V57);
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
	vs_reserve(VM23);
	{object V60;
	check_arg(1);
	V60=(base[0]);
	vs_top=sup;
	if((symbol_value(VV[33]))!=Cnil){
	goto T148;}
	if((symbol_value(VV[27]))!=Cnil){
	goto T148;}
	base[1]= (V60);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk51)();
	vs_top=sup;
	{frame_ptr fr;
	fr=frs_sch((base0[3]->c.c_car));
	if(fr==NULL) FEerror("The block ~s is missing.",1,VV[49]);
	base[1]= (V60);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,Cnil);}
	goto T148;
T148:;
	(base0[2]->c.c_car)= (V60);
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
	vs_reserve(VM24);
	{object V61;
	check_arg(1);
	V61=(base[0]);
	vs_top=sup;
	base[1]= (V61);
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
	vs_reserve(VM25);
	{object V62;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V62=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V62);
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
	vs_reserve(VM26);
	{object V63;
	check_arg(1);
	V63=(base[0]);
	vs_top=sup;
	base[1]= (V63);
	base[2]= VV[10];
	base[4]= Cnil;
	base[5]= (base0[3]->c.c_car);
	{object V64;
	V64= (base0[2]->c.c_car);
	 vs_top=base+6;
	 while(!endp(V64))
	 {vs_push(car(V64));V64=cdr(V64);}
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
	vs_reserve(VM27);
	{object V65;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V65=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V65);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[14]);
	vs_base=vs_top;
	unwind(fr,VV[14]);}
	}
}
static void LnkT51(){ call_or_link(VV[51],(void **)&Lnk51);} /* CONDITION-BACKTRACE */
static void LnkT28(){ call_or_link(VV[28],(void **)&Lnk28);} /* ERROR-SET */
static void LnkT50(){ call_or_link(VV[50],(void **)&Lnk50);} /* RESET-FUNCTION */
static void LnkT48(){ call_or_link(VV[48],(void **)&Lnk48);} /* SIMPLE-BACKTRACE */
static void LnkT47(){ call_or_link(VV[47],(void **)&Lnk47);} /* FRS-TOP */
static void LnkT46(){ call_or_link(VV[46],(void **)&Lnk46);} /* SCH-FRS-BASE */
static void LnkT45(){ call_or_link(VV[45],(void **)&Lnk45);} /* IHS-TOP */
static void LnkT44(){ call_or_link(VV[44],(void **)&Lnk44);} /* INITIALIZE-INTERNAL-ERROR-TABLE */
static void LnkT43(){ call_or_link(VV[43],(void **)&Lnk43);} /* SET-INTERNAL-ERROR */
static void LnkT32(){ call_or_link(VV[32],(void **)&Lnk32);} /* ERROR */
static void LnkT42(){ call_or_link(VV[42],(void **)&Lnk42);} /* SIMPLE-CONDITION-CLASS-P */
static void LnkT41(){ call_or_link(VV[41],(void **)&Lnk41);} /* MAKE-RESTART */
static void LnkT40(){ call_or_link(VV[40],(void **)&Lnk40);} /* *MAKE-SPECIAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

