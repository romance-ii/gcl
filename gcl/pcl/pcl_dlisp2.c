
#include "cmpinclude.h"
#include "pcl_dlisp2.h"
void init_pcl_dlisp2(){do_init(VV);}
/*	function definition for EMIT-READERWRITER-FUNCTION	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	{object V1;
	object V2;
	object V3;
	check_arg(3);
	V1=(base[0]);
	V2=(base[1]);
	V3=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V4= (V1);
	if((V4!= VV[31]))goto T2;
	{object V5= (V2);
	if(!eql(V5,VV[0]))goto T3;
	if(((V3))==Cnil){
	goto T5;}
	base[3]= VV[32];
	goto T1;
	goto T5;
T5:;
	base[3]= VV[33];
	goto T1;
	goto T3;
T3:;
	if(!eql(V5,VV[6]))goto T7;
	if(((V3))==Cnil){
	goto T9;}
	base[3]= VV[34];
	goto T1;
	goto T9;
T9:;
	base[3]= VV[35];
	goto T1;
	goto T7;
T7:;
	FEerror("The ECASE key value ~s is illegal.",1,V5);
	base[3]= Cnil;
	goto T1;}
	goto T2;
T2:;
	if((V4!= VV[36]))goto T11;
	{object V6= (V2);
	if(!eql(V6,VV[0]))goto T12;
	if(((V3))==Cnil){
	goto T14;}
	base[3]= VV[37];
	goto T1;
	goto T14;
T14:;
	base[3]= VV[38];
	goto T1;
	goto T12;
T12:;
	if(!eql(V6,VV[6]))goto T16;
	if(((V3))==Cnil){
	goto T18;}
	base[3]= VV[39];
	goto T1;
	goto T18;
T18:;
	base[3]= VV[40];
	goto T1;
	goto T16;
T16:;
	FEerror("The ECASE key value ~s is illegal.",1,V6);
	base[3]= Cnil;
	goto T1;}
	goto T11;
T11:;
	FEerror("The ECASE key value ~s is illegal.",1,V4);
	base[3]= Cnil;
	goto T1;}
	goto T1;
T1:;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	}
}
/*	function definition for EMIT-ONE-OR-N-INDEX-READERWRITER-FUNCTION	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{object V7;
	object V8;
	object V9;
	check_arg(3);
	V7=(base[0]);
	V8=(base[1]);
	V9=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V10= (V7);
	if((V10!= VV[31]))goto T22;
	if(((V8))==Cnil){
	goto T24;}
	if(((V9))==Cnil){
	goto T27;}
	base[3]= VV[41];
	goto T21;
	goto T27;
T27:;
	base[3]= VV[42];
	goto T21;
	goto T24;
T24:;
	if(((V9))==Cnil){
	goto T30;}
	base[3]= VV[43];
	goto T21;
	goto T30;
T30:;
	base[3]= VV[44];
	goto T21;
	goto T22;
T22:;
	if((V10!= VV[36]))goto T32;
	if(((V8))==Cnil){
	goto T34;}
	if(((V9))==Cnil){
	goto T37;}
	base[3]= VV[45];
	goto T21;
	goto T37;
T37:;
	base[3]= VV[46];
	goto T21;
	goto T34;
T34:;
	if(((V9))==Cnil){
	goto T40;}
	base[3]= VV[47];
	goto T21;
	goto T40;
T40:;
	base[3]= VV[48];
	goto T21;
	goto T32;
T32:;
	FEerror("The ECASE key value ~s is illegal.",1,V10);
	base[3]= Cnil;
	goto T21;}
	goto T21;
T21:;
	base[4]= Cnil;
	vs_top=(vs_base=base+3)+2;
	return;
	}
}
/*	macro definition for MAKE-CHECKING-OR-CACHING-FUNCTION-LIST	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V11=base[0]->c.c_cdr;
	if(!endp(V11))invalid_macro_call();}
	base[3]= (VV[27]->s.s_dbind);
	{object V13;
	object V14= base[3];
	if(V14==Cnil){
	V12= Cnil;
	goto T43;}
	base[2]=V13=MMcons(Cnil,Cnil);
	goto T44;
T44:;
	V16= list(2,VV[25],(V14->c.c_car));
	(V13->c.c_car)= list(3,VV[24],/* INLINE-ARGS */V16,make_cons(VV[26],(V14->c.c_car)));
	if((V14=MMcdr(V14))==Cnil){
	V12= base[2];
	goto T43;}
	V13=MMcdr(V13)=MMcons(Cnil,Cnil);
	goto T44;}
	goto T43;
T43:;
	base[2]= make_cons(VV[23],V12);
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function INITIALIZE-CHECKING-OR-CACHING-FUNCTION-LIST	*/

static object LI4()

{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	(VV[28]->s.s_dbind)= Cnil;
	{object V17 = (VV[28]->s.s_dbind);
	VMR4(V17)}
	return Cnil;
}
/*	macro definition for EMIT-CHECKING-OR-CACHING-FUNCTION-PRECOMPILED	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V18=base[0]->c.c_cdr;
	if(!endp(V18))invalid_macro_call();}
	base[2]= VV[29];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	function definition for EMIT-CHECKING-OR-CACHING-FUNCTION	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V19;
	object V20;
	object V21;
	object V22;
	check_arg(4);
	V19=(base[0]);
	V20=(base[1]);
	V21=(base[2]);
	V22=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V23;
	V26= list(4,(V19),(V20),(V21),(V22));
	{register object x= /* INLINE-ARGS */V26,V25= (VV[28]->s.s_dbind);
	while(V25!=Cnil)
	if(equal(x,V25->c.c_car->c.c_car) &&V25->c.c_car != Cnil){
	V24= (V25->c.c_car);
	goto T48;
	}else V25=V25->c.c_cdr;
	V24= Cnil;}
	goto T48;
T48:;
	V23= CMPcdr(V24);
	if(((V23))==Cnil){
	goto T50;}
	base[4]= (V23);
	base[5]= Cnil;
	vs_top=(vs_base=base+4)+2;
	return;
	goto T50;
T50:;
	base[4]= (*(LnkLI49))((V19),(V20),(V21),(V22));
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	return;}
	}
}
/*	local entry for function EMIT-CHECKING-OR-CACHING-FUNCTION-PRELIMINARY	*/

static object LI8(V31,V32,V33,V34)

object V31;object V32;object V33;object V34;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	base[0]=MMcons((V33),Cnil);
	base[1]=MMcons((V32),base[0]);
	if(((V31))==Cnil){
	goto T57;}
	{object V35 = 
	make_cclosure_new(LC26,Cnil,base[1],Cdata);
	VMR7(V35)}
	goto T57;
T57:;
	{object V36 = 
	make_cclosure_new(LC27,Cnil,base[1],Cdata);
	VMR7(V36)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for EMIT-DEFAULT-ONLY-FUNCTION	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	{object V37;
	object V38;
	check_arg(2);
	V37=(base[0]);
	V38=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= VV[50];
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC28(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	check_arg(1);
	base[0]=MMcons(base[0],Cnil);
	vs_top=sup;
	base[1]= 
	make_cclosure_new(LC29,Cnil,base[0],Cdata);
	vs_top=(vs_base=base+1)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC29(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V39;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V39=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V39);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk51)();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC27(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	check_arg(3);
	base[0]=MMcons(base[0],base0[0]);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	base[3]= 
	make_cclosure_new(LC30,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC30(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{object V40;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V40=(base[0]);
	vs_top=sup;
	{object V41;
	object V42;
	object V43;
	register object V44;
	object V45;
	V41= (V40);
	V42= Cnil;
	V43= Cnil;
	V44= Cnil;
	V45= Cnil;
	{register object V46;
	object V47;
	V46= (base0[4]->c.c_car);
	V47= CMPcar((V46));
	goto T72;
T72:;
	if(!(((V46))==Cnil)){
	goto T73;}
	goto T68;
	goto T73;
T73:;
	if(((V41))!=Cnil){
	goto T77;}
	V43= Ct;
	goto T68;
	goto T77;
T77:;
	{object V48;
	register object V49;
	{object V50;
	V50= CMPcar((V41));
	V41= CMPcdr((V41));
	V48= (V50);}
	V49= Cnil;
	if(((V47))==(Ct)){
	goto T82;}
	V49= (*(LnkLI52))((V48));
	if(!((((((V49))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T92;}
	V42= Ct;
	V49= (*(LnkLI53))((V48));
	goto T92;
T92:;
	if(((V44))!=Cnil){
	goto T99;}
	V44= (V49);
	goto T82;
	goto T99;
T99:;
	if(type_of((V44))==t_cons){
	goto T103;}
	V45= make_cons((V49),Cnil);
	V44= make_cons((V44),(V45));
	goto T82;
	goto T103;
T103:;
	{object V51;
	V51= make_cons((V49),Cnil);
	(V45)->c.c_cdr = V51;
	V45= (V51);}}
	goto T82;
T82:;
	V46= CMPcdr((V46));
	V47= CMPcar((V46));
	goto T72;}
	goto T68;
T68:;
	if(((V43))==Cnil){
	goto T118;}
	base[1]= (base0[0]->c.c_car);
	{object V54;
	V54= (V40);
	 vs_top=base+2;
	 while(V54!=Cnil)
	 {vs_push((V54)->c.c_car);V54=(V54)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T118;
T118:;
	if(((V42))==Cnil){
	goto T123;}
	base[1]= (base0[0]->c.c_car);
	{object V55;
	V55= (V40);
	 vs_top=base+2;
	 while(V55!=Cnil)
	 {vs_push((V55)->c.c_car);V55=(V55)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T123;
T123:;
	{object V56;{object V57;
	V57= (VV[30]->s.s_dbind);
	V58= (VFUN_NARGS=3,(*(LnkLI54))((base0[2]->c.c_car),(V44),(VV[30]->s.s_dbind)));
	V56= ((((V57)==(/* INLINE-ARGS */V58)?Ct:Cnil))==Cnil?Ct:Cnil);}
	if(((V56))==Cnil){
	goto T129;}
	base[1]= (base0[1]->c.c_car);
	base[2]= (V40);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk51)();
	return;
	goto T129;
T129:;
	if(((base0[3]->c.c_car))==Cnil){
	goto T134;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T134;
T134:;
	base[1]= (base0[0]->c.c_car);
	{object V59;
	V59= (V40);
	 vs_top=base+2;
	 while(V59!=Cnil)
	 {vs_push((V59)->c.c_car);V59=(V59)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	check_arg(2);
	base[0]=MMcons(base[0],base0[0]);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC31,Cnil,base[1],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC31(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V60;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V60=(base[0]);
	vs_top=sup;
	{object V61;
	object V62;
	object V63;
	register object V64;
	object V65;
	V61= (V60);
	V62= Cnil;
	V63= Cnil;
	V64= Cnil;
	V65= Cnil;
	{register object V66;
	object V67;
	V66= (base0[3]->c.c_car);
	V67= CMPcar((V66));
	goto T147;
T147:;
	if(!(((V66))==Cnil)){
	goto T148;}
	goto T143;
	goto T148;
T148:;
	if(((V61))!=Cnil){
	goto T152;}
	V63= Ct;
	goto T143;
	goto T152;
T152:;
	{object V68;
	register object V69;
	{object V70;
	V70= CMPcar((V61));
	V61= CMPcdr((V61));
	V68= (V70);}
	V69= Cnil;
	if(((V67))==(Ct)){
	goto T157;}
	V69= (*(LnkLI52))((V68));
	if(!((((((V69))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T167;}
	V62= Ct;
	V69= (*(LnkLI53))((V68));
	goto T167;
T167:;
	if(((V64))!=Cnil){
	goto T174;}
	V64= (V69);
	goto T157;
	goto T174;
T174:;
	if(type_of((V64))==t_cons){
	goto T178;}
	V65= make_cons((V69),Cnil);
	V64= make_cons((V64),(V65));
	goto T157;
	goto T178;
T178:;
	{object V71;
	V71= make_cons((V69),Cnil);
	(V65)->c.c_cdr = V71;
	V65= (V71);}}
	goto T157;
T157:;
	V66= CMPcdr((V66));
	V67= CMPcar((V66));
	goto T147;}
	goto T143;
T143:;
	if(((V63))==Cnil){
	goto T193;}
	base[1]= (base0[0]->c.c_car);
	{object V74;
	V74= (V60);
	 vs_top=base+2;
	 while(V74!=Cnil)
	 {vs_push((V74)->c.c_car);V74=(V74)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T193;
T193:;
	if(((V62))==Cnil){
	goto T198;}
	base[1]= (base0[0]->c.c_car);
	{object V75;
	V75= (V60);
	 vs_top=base+2;
	 while(V75!=Cnil)
	 {vs_push((V75)->c.c_car);V75=(V75)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T198;
T198:;
	{object V76;
	V76= (VFUN_NARGS=3,(*(LnkLI54))((base0[1]->c.c_car),(V64),(VV[30]->s.s_dbind)));
	if(!(((V76))==((VV[30]->s.s_dbind)))){
	goto T204;}
	base[1]= (base0[0]->c.c_car);
	{object V77;
	V77= (V60);
	 vs_top=base+2;
	 while(V77!=Cnil)
	 {vs_push((V77)->c.c_car);V77=(V77)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T204;
T204:;
	if(((base0[2]->c.c_car))==Cnil){
	goto T209;}
	base[1]= (V76);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T209;
T209:;
	base[1]= (V76);
	base[2]= (V60);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk51)();
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC25(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	check_arg(3);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	base[3]= 
	make_cclosure_new(LC32,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC32(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V78;
	object V79;
	check_arg(2);
	V78=(base[0]);
	V79=(base[1]);
	vs_top=sup;
	{object V80;
	V80= Cnil;
	{long V81;
	object V82;
	long V83;
	long V84;
	object V85;
	object V86;
	V81= (long)STREF(unsigned char,(base0[2]->c.c_car),16);
	V82= STREF(object,(base0[2]->c.c_car),40);
	V83= (long)STREF(fixnum,(base0[2]->c.c_car),24);
	V84= (long)STREF(fixnum,(base0[2]->c.c_car),28);
	V85= STREF(object,(base0[2]->c.c_car),44);
	if(type_of(V79)==t_structure){
	goto T224;}
	goto T222;
	goto T224;
T224:;
	if(!(((V79)->str.str_def)==(VV[22]))){
	goto T222;}
	V80= STREF(object,(V79),4);
	V86= STREF(object,(V79),0);
	goto T220;
	goto T222;
T222:;{object V88;
	V88= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V79);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V89= vs_base[0];
	if(!((V88)==(CMPcar(V89)))){
	goto T229;}}
	V80= CMPcar(((V79))->cc.cc_turbo[12]);
	V86= CMPcar(((V79))->cc.cc_turbo[13]);
	goto T220;
	goto T229;
T229:;
	goto T214;
	goto T220;
T220:;
	{long V90;
	long V91;
	{long V92;
	V92= fix(((V86))->v.v_self[V81]);
	if(!((V92)==0)){
	goto T239;}
	goto T214;
	goto T239;
T239:;
	V90= (long)((V83) & (V92));}
	V91= V90;
	goto T244;
T244:;
	if(!(((V86))==(((V82))->v.v_self[V91]))){
	goto T246;}
	goto T236;
	goto T246;
T246:;
	V91= (long)(V91)+(1);
	if(!((V91)==(V84))){
	goto T251;}
	V91= 0;
	goto T251;
T251:;
	if(!((V91)==(V90))){
	goto T245;}
	{register object V93;
	object V94;
	V93= (V85);
	V94= CMPcar((V93));
	goto T261;
T261:;
	if(!(((V93))==Cnil)){
	goto T262;}
	goto T257;
	goto T262;
T262:;
	if(!((CMPcar((V94)))==((V86)))){
	goto T266;}
	goto T236;
	goto T266;
T266:;
	V93= CMPcdr((V93));
	V94= CMPcar((V93));
	goto T261;}
	goto T257;
T257:;
	goto T214;
	goto T245;
T245:;
	goto T244;}
	goto T236;
T236:;
	base[2]= ((V80))->v.v_self[fix((base0[1]->c.c_car))]= ((V78));
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T214;
T214:;
	base[2]= (V78);
	base[3]= (V79);
	vs_top=(vs_base=base+2)+2;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC24(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	check_arg(3);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	base[3]= 
	make_cclosure_new(LC33,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC33(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{object V95;
	object V96;
	check_arg(2);
	V95=(base[0]);
	V96=(base[1]);
	vs_top=sup;
	{long V97;
	object V98;
	long V99;
	long V100;
	object V101;
	object V102;
	V97= (long)STREF(unsigned char,(base0[2]->c.c_car),16);
	V98= STREF(object,(base0[2]->c.c_car),40);
	V99= (long)STREF(fixnum,(base0[2]->c.c_car),24);
	V100= (long)STREF(fixnum,(base0[2]->c.c_car),28);
	V101= STREF(object,(base0[2]->c.c_car),44);
	if(type_of(V96)==t_structure){
	goto T289;}
	goto T287;
	goto T289;
T289:;
	if(!(((V96)->str.str_def)==(VV[21]))){
	goto T287;}
	V102= STREF(object,(V96),0);
	goto T285;
	goto T287;
T287:;{object V104;
	V104= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V96);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V105= vs_base[0];
	if(!((V104)==(CMPcar(V105)))){
	goto T292;}}
	V102= CMPcar(((V96))->cc.cc_turbo[13]);
	goto T285;
	goto T292;
T292:;
	goto T279;
	goto T285;
T285:;
	{long V106;
	long V107;
	{long V108;
	V108= fix(((V102))->v.v_self[V97]);
	if(!((V108)==0)){
	goto T300;}
	goto T279;
	goto T300;
T300:;
	V106= (long)((V99) & (V108));}
	V107= V106;
	goto T305;
T305:;
	if(!(((V102))==(((V98))->v.v_self[V107]))){
	goto T307;}
	goto T297;
	goto T307;
T307:;
	V107= (long)(V107)+(1);
	if(!((V107)==(V100))){
	goto T312;}
	V107= 0;
	goto T312;
T312:;
	if(!((V107)==(V106))){
	goto T306;}
	{register object V109;
	object V110;
	V109= (V101);
	V110= CMPcar((V109));
	goto T322;
T322:;
	if(!(((V109))==Cnil)){
	goto T323;}
	goto T318;
	goto T323;
T323:;
	if(!((CMPcar((V110)))==((V102)))){
	goto T327;}
	goto T297;
	goto T327;
T327:;
	V109= CMPcdr((V109));
	V110= CMPcar((V109));
	goto T322;}
	goto T318;
T318:;
	goto T279;
	goto T306;
T306:;
	goto T305;}
	goto T297;
T297:;
	{object V111;
	V111= (base0[1]->c.c_car);
	((V111))->c.c_cdr = V95;
	base[2]= V95;
	vs_top=(vs_base=base+2)+1;
	return;}}
	goto T279;
T279:;
	base[2]= (V95);
	base[3]= (V96);
	vs_top=(vs_base=base+2)+2;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC34,Cnil,base[1],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC34(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{object V113;
	object V114;
	check_arg(2);
	V113=(base[0]);
	V114=(base[1]);
	vs_top=sup;
	{object V115;
	object V116;
	V115= Cnil;
	V116= Cnil;
	{long V117;
	object V118;
	long V119;
	long V120;
	object V121;
	object V122;
	V117= (long)STREF(unsigned char,(base0[1]->c.c_car),16);
	V118= STREF(object,(base0[1]->c.c_car),40);
	V119= (long)STREF(fixnum,(base0[1]->c.c_car),24);
	V120= (long)STREF(fixnum,(base0[1]->c.c_car),28);
	V121= STREF(object,(base0[1]->c.c_car),44);
	if(type_of(V114)==t_structure){
	goto T352;}
	goto T350;
	goto T352;
T352:;
	if(!(((V114)->str.str_def)==(VV[20]))){
	goto T350;}
	V115= STREF(object,(V114),4);
	V122= STREF(object,(V114),0);
	goto T348;
	goto T350;
T350:;{object V124;
	V124= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V114);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V125= vs_base[0];
	if(!((V124)==(CMPcar(V125)))){
	goto T357;}}
	V115= CMPcar(((V114))->cc.cc_turbo[12]);
	V122= CMPcar(((V114))->cc.cc_turbo[13]);
	goto T348;
	goto T357;
T357:;
	goto T342;
	goto T348;
T348:;
	{long V126;
	long V127;
	{long V128;
	V128= fix(((V122))->v.v_self[V117]);
	if(!((V128)==0)){
	goto T367;}
	goto T342;
	goto T367;
T367:;
	V126= (long)((V119) & (V128));}
	{object V129;
	V129= ((V118))->v.v_self[0];
	if(type_of((V129))==t_fixnum){
	goto T372;}
	base[2]= VV[15];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T372;
T372:;
	V127= fix((V129));}
	{long V130;
	V130= V126;
	goto T379;
T379:;
	if(!(((V122))==(((V118))->v.v_self[V130]))){
	goto T381;}
	V116= ((V118))->v.v_self[(long)(V130)+1];
	goto T377;
	goto T381;
T381:;
	V130= (long)(V130)+(2);
	if(!((V130)==(V120))){
	goto T388;}
	V130= 0;
	goto T388;
T388:;
	if(!((V130)==(V126))){
	goto T380;}
	{register object V131;
	object V132;
	V131= (V121);
	V132= CMPcar((V131));
	goto T398;
T398:;
	if(!(((V131))==Cnil)){
	goto T399;}
	goto T394;
	goto T399;
T399:;
	if(!((CMPcar((V132)))==((V122)))){
	goto T403;}
	V116= CMPcdr((V132));
	goto T377;
	goto T403;
T403:;
	V131= CMPcdr((V131));
	V132= CMPcar((V131));
	goto T398;}
	goto T394;
T394:;
	goto T342;
	goto T380;
T380:;
	goto T379;
	goto T377;
T377:;
	V133 = V127;
	{object V135;
	V135= ((V118))->v.v_self[0];
	if(type_of((V135))==t_fixnum){
	goto T418;}
	base[2]= VV[15];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T418;
T418:;
	V134= fix((V135));}
	if((V133)==(V134)){
	goto T364;}
	goto T342;}}
	goto T364;
T364:;
	base[2]= ((V115))->v.v_self[fix((V116))]= ((V113));
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T342;
T342:;
	base[2]= (V113);
	base[3]= (V114);
	vs_top=(vs_base=base+2)+2;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC22(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC35,Cnil,base[1],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC35(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	{object V136;
	object V137;
	check_arg(2);
	V136=(base[0]);
	V137=(base[1]);
	vs_top=sup;
	{object V138;
	V138= Cnil;
	{long V139;
	object V140;
	long V141;
	long V142;
	object V143;
	object V144;
	V139= (long)STREF(unsigned char,(base0[1]->c.c_car),16);
	V140= STREF(object,(base0[1]->c.c_car),40);
	V141= (long)STREF(fixnum,(base0[1]->c.c_car),24);
	V142= (long)STREF(fixnum,(base0[1]->c.c_car),28);
	V143= STREF(object,(base0[1]->c.c_car),44);
	if(type_of(V137)==t_structure){
	goto T436;}
	goto T434;
	goto T436;
T436:;
	if(!(((V137)->str.str_def)==(VV[19]))){
	goto T434;}
	V144= STREF(object,(V137),0);
	goto T432;
	goto T434;
T434:;{object V146;
	V146= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V137);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V147= vs_base[0];
	if(!((V146)==(CMPcar(V147)))){
	goto T439;}}
	V144= CMPcar(((V137))->cc.cc_turbo[13]);
	goto T432;
	goto T439;
T439:;
	goto T426;
	goto T432;
T432:;
	{long V148;
	long V149;
	{long V150;
	V150= fix(((V144))->v.v_self[V139]);
	if(!((V150)==0)){
	goto T447;}
	goto T426;
	goto T447;
T447:;
	V148= (long)((V141) & (V150));}
	{object V151;
	V151= ((V140))->v.v_self[0];
	if(type_of((V151))==t_fixnum){
	goto T452;}
	base[2]= VV[15];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T452;
T452:;
	V149= fix((V151));}
	{long V152;
	V152= V148;
	goto T459;
T459:;
	if(!(((V144))==(((V140))->v.v_self[V152]))){
	goto T461;}
	V138= ((V140))->v.v_self[(long)(V152)+1];
	goto T457;
	goto T461;
T461:;
	V152= (long)(V152)+(2);
	if(!((V152)==(V142))){
	goto T468;}
	V152= 0;
	goto T468;
T468:;
	if(!((V152)==(V148))){
	goto T460;}
	{register object V153;
	object V154;
	V153= (V143);
	V154= CMPcar((V153));
	goto T478;
T478:;
	if(!(((V153))==Cnil)){
	goto T479;}
	goto T474;
	goto T479;
T479:;
	if(!((CMPcar((V154)))==((V144)))){
	goto T483;}
	V138= CMPcdr((V154));
	goto T457;
	goto T483;
T483:;
	V153= CMPcdr((V153));
	V154= CMPcar((V153));
	goto T478;}
	goto T474;
T474:;
	goto T426;
	goto T460;
T460:;
	goto T459;
	goto T457;
T457:;
	V155 = V149;
	{object V157;
	V157= ((V140))->v.v_self[0];
	if(type_of((V157))==t_fixnum){
	goto T498;}
	base[2]= VV[15];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T498;
T498:;
	V156= fix((V157));}
	if((V155)==(V156)){
	goto T444;}
	goto T426;}}
	goto T444;
T444:;
	(V138)->c.c_cdr = V136;
	base[2]= V136;
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T426;
T426:;
	base[2]= (V136);
	base[3]= (V137);
	vs_top=(vs_base=base+2)+2;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC21(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	check_arg(3);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	base[3]= 
	make_cclosure_new(LC36,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC36(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V160;
	check_arg(1);
	V160=(base[0]);
	vs_top=sup;
	{object V161;
	V161= Cnil;
	{long V162;
	object V163;
	long V164;
	long V165;
	object V166;
	object V167;
	V162= (long)STREF(unsigned char,(base0[2]->c.c_car),16);
	V163= STREF(object,(base0[2]->c.c_car),40);
	V164= (long)STREF(fixnum,(base0[2]->c.c_car),24);
	V165= (long)STREF(fixnum,(base0[2]->c.c_car),28);
	V166= STREF(object,(base0[2]->c.c_car),44);
	if(type_of(V160)==t_structure){
	goto T517;}
	goto T515;
	goto T517;
T517:;
	if(!(((V160)->str.str_def)==(VV[18]))){
	goto T515;}
	V161= STREF(object,(V160),4);
	V167= STREF(object,(V160),0);
	goto T513;
	goto T515;
T515:;{object V169;
	V169= (VV[3]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (V160);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V170= vs_base[0];
	if(!((V169)==(CMPcar(V170)))){
	goto T522;}}
	V161= CMPcar(((V160))->cc.cc_turbo[12]);
	V167= CMPcar(((V160))->cc.cc_turbo[13]);
	goto T513;
	goto T522;
T522:;
	goto T507;
	goto T513;
T513:;
	{long V171;
	long V172;
	{long V173;
	V173= fix(((V167))->v.v_self[V162]);
	if(!((V173)==0)){
	goto T532;}
	goto T507;
	goto T532;
T532:;
	V171= (long)((V164) & (V173));}
	V172= V171;
	goto T537;
T537:;
	if(!(((V167))==(((V163))->v.v_self[V172]))){
	goto T539;}
	goto T529;
	goto T539;
T539:;
	V172= (long)(V172)+(1);
	if(!((V172)==(V165))){
	goto T544;}
	V172= 0;
	goto T544;
T544:;
	if(!((V172)==(V171))){
	goto T538;}
	{register object V174;
	object V175;
	V174= (V166);
	V175= CMPcar((V174));
	goto T554;
T554:;
	if(!(((V174))==Cnil)){
	goto T555;}
	goto T550;
	goto T555;
T555:;
	if(!((CMPcar((V175)))==((V167)))){
	goto T559;}
	goto T529;
	goto T559;
T559:;
	V174= CMPcdr((V174));
	V175= CMPcar((V174));
	goto T554;}
	goto T550;
T550:;
	goto T507;
	goto T538;
T538:;
	goto T537;}
	goto T529;
T529:;
	{object V176;
	V176= ((V161))->v.v_self[fix((base0[1]->c.c_car))];
	if(!(((V176))==((VV[4]->s.s_dbind)))){
	goto T570;}
	base[1]= (V160);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T570;
T570:;
	base[1]= (V176);
	vs_top=(vs_base=base+1)+1;
	return;}}
	goto T507;
T507:;
	base[1]= (V160);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC20(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	check_arg(3);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	base[3]= 
	make_cclosure_new(LC37,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC37(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	{object V177;
	check_arg(1);
	V177=(base[0]);
	vs_top=sup;
	{long V178;
	object V179;
	long V180;
	long V181;
	object V182;
	object V183;
	V178= (long)STREF(unsigned char,(base0[2]->c.c_car),16);
	V179= STREF(object,(base0[2]->c.c_car),40);
	V180= (long)STREF(fixnum,(base0[2]->c.c_car),24);
	V181= (long)STREF(fixnum,(base0[2]->c.c_car),28);
	V182= STREF(object,(base0[2]->c.c_car),44);
	if(type_of(V177)==t_structure){
	goto T586;}
	goto T584;
	goto T586;
T586:;
	if(!(((V177)->str.str_def)==(VV[17]))){
	goto T584;}
	V183= STREF(object,(V177),0);
	goto T582;
	goto T584;
T584:;{object V185;
	V185= (VV[3]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (V177);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V186= vs_base[0];
	if(!((V185)==(CMPcar(V186)))){
	goto T589;}}
	V183= CMPcar(((V177))->cc.cc_turbo[13]);
	goto T582;
	goto T589;
T589:;
	goto T576;
	goto T582;
T582:;
	{long V187;
	long V188;
	{long V189;
	V189= fix(((V183))->v.v_self[V178]);
	if(!((V189)==0)){
	goto T597;}
	goto T576;
	goto T597;
T597:;
	V187= (long)((V180) & (V189));}
	V188= V187;
	goto T602;
T602:;
	if(!(((V183))==(((V179))->v.v_self[V188]))){
	goto T604;}
	goto T594;
	goto T604;
T604:;
	V188= (long)(V188)+(1);
	if(!((V188)==(V181))){
	goto T609;}
	V188= 0;
	goto T609;
T609:;
	if(!((V188)==(V187))){
	goto T603;}
	{register object V190;
	object V191;
	V190= (V182);
	V191= CMPcar((V190));
	goto T619;
T619:;
	if(!(((V190))==Cnil)){
	goto T620;}
	goto T615;
	goto T620;
T620:;
	if(!((CMPcar((V191)))==((V183)))){
	goto T624;}
	goto T594;
	goto T624;
T624:;
	V190= CMPcdr((V190));
	V191= CMPcar((V190));
	goto T619;}
	goto T615;
T615:;
	goto T576;
	goto T603;
T603:;
	goto T602;}
	goto T594;
T594:;
	{object V192;
	V192= CMPcdr((base0[1]->c.c_car));
	if(!(((V192))==((VV[4]->s.s_dbind)))){
	goto T635;}
	base[1]= (V177);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T635;
T635:;
	base[1]= (V192);
	vs_top=(vs_base=base+1)+1;
	return;}}
	goto T576;
T576:;
	base[1]= (V177);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC19(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC38,Cnil,base[1],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC38(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	{object V193;
	check_arg(1);
	V193=(base[0]);
	vs_top=sup;
	{object V194;
	object V195;
	V194= Cnil;
	V195= Cnil;
	{long V196;
	object V197;
	long V198;
	long V199;
	object V200;
	object V201;
	V196= (long)STREF(unsigned char,(base0[1]->c.c_car),16);
	V197= STREF(object,(base0[1]->c.c_car),40);
	V198= (long)STREF(fixnum,(base0[1]->c.c_car),24);
	V199= (long)STREF(fixnum,(base0[1]->c.c_car),28);
	V200= STREF(object,(base0[1]->c.c_car),44);
	if(type_of(V193)==t_structure){
	goto T651;}
	goto T649;
	goto T651;
T651:;
	if(!(((V193)->str.str_def)==(VV[16]))){
	goto T649;}
	V194= STREF(object,(V193),4);
	V201= STREF(object,(V193),0);
	goto T647;
	goto T649;
T649:;{object V203;
	V203= (VV[3]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (V193);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V204= vs_base[0];
	if(!((V203)==(CMPcar(V204)))){
	goto T656;}}
	V194= CMPcar(((V193))->cc.cc_turbo[12]);
	V201= CMPcar(((V193))->cc.cc_turbo[13]);
	goto T647;
	goto T656;
T656:;
	goto T641;
	goto T647;
T647:;
	{long V205;
	long V206;
	{long V207;
	V207= fix(((V201))->v.v_self[V196]);
	if(!((V207)==0)){
	goto T666;}
	goto T641;
	goto T666;
T666:;
	V205= (long)((V198) & (V207));}
	{object V208;
	V208= ((V197))->v.v_self[0];
	if(type_of((V208))==t_fixnum){
	goto T671;}
	base[1]= VV[15];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T671;
T671:;
	V206= fix((V208));}
	{long V209;
	V209= V205;
	goto T678;
T678:;
	if(!(((V201))==(((V197))->v.v_self[V209]))){
	goto T680;}
	V195= ((V197))->v.v_self[(long)(V209)+1];
	goto T676;
	goto T680;
T680:;
	V209= (long)(V209)+(2);
	if(!((V209)==(V199))){
	goto T687;}
	V209= 0;
	goto T687;
T687:;
	if(!((V209)==(V205))){
	goto T679;}
	{register object V210;
	object V211;
	V210= (V200);
	V211= CMPcar((V210));
	goto T697;
T697:;
	if(!(((V210))==Cnil)){
	goto T698;}
	goto T693;
	goto T698;
T698:;
	if(!((CMPcar((V211)))==((V201)))){
	goto T702;}
	V195= CMPcdr((V211));
	goto T676;
	goto T702;
T702:;
	V210= CMPcdr((V210));
	V211= CMPcar((V210));
	goto T697;}
	goto T693;
T693:;
	goto T641;
	goto T679;
T679:;
	goto T678;
	goto T676;
T676:;
	V212 = V206;
	{object V214;
	V214= ((V197))->v.v_self[0];
	if(type_of((V214))==t_fixnum){
	goto T717;}
	base[1]= VV[15];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T717;
T717:;
	V213= fix((V214));}
	if((V212)==(V213)){
	goto T663;}
	goto T641;}}
	goto T663;
T663:;
	{object V215;
	V215= ((V194))->v.v_self[fix((V195))];
	if(!(((V215))==((VV[4]->s.s_dbind)))){
	goto T723;}
	base[1]= (V193);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T723;
T723:;
	base[1]= (V215);
	vs_top=(vs_base=base+1)+1;
	return;}}
	goto T641;
T641:;
	base[1]= (V193);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC18(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC39,Cnil,base[1],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC39(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	{object V216;
	check_arg(1);
	V216=(base[0]);
	vs_top=sup;
	{object V217;
	V217= Cnil;
	{long V218;
	object V219;
	long V220;
	long V221;
	object V222;
	object V223;
	V218= (long)STREF(unsigned char,(base0[1]->c.c_car),16);
	V219= STREF(object,(base0[1]->c.c_car),40);
	V220= (long)STREF(fixnum,(base0[1]->c.c_car),24);
	V221= (long)STREF(fixnum,(base0[1]->c.c_car),28);
	V222= STREF(object,(base0[1]->c.c_car),44);
	if(type_of(V216)==t_structure){
	goto T739;}
	goto T737;
	goto T739;
T739:;
	if(!(((V216)->str.str_def)==(VV[14]))){
	goto T737;}
	V223= STREF(object,(V216),0);
	goto T735;
	goto T737;
T737:;{object V225;
	V225= (VV[3]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (V216);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V226= vs_base[0];
	if(!((V225)==(CMPcar(V226)))){
	goto T742;}}
	V223= CMPcar(((V216))->cc.cc_turbo[13]);
	goto T735;
	goto T742;
T742:;
	goto T729;
	goto T735;
T735:;
	{long V227;
	long V228;
	{long V229;
	V229= fix(((V223))->v.v_self[V218]);
	if(!((V229)==0)){
	goto T750;}
	goto T729;
	goto T750;
T750:;
	V227= (long)((V220) & (V229));}
	{object V230;
	V230= ((V219))->v.v_self[0];
	if(type_of((V230))==t_fixnum){
	goto T755;}
	base[1]= VV[15];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T755;
T755:;
	V228= fix((V230));}
	{long V231;
	V231= V227;
	goto T762;
T762:;
	if(!(((V223))==(((V219))->v.v_self[V231]))){
	goto T764;}
	V217= ((V219))->v.v_self[(long)(V231)+1];
	goto T760;
	goto T764;
T764:;
	V231= (long)(V231)+(2);
	if(!((V231)==(V221))){
	goto T771;}
	V231= 0;
	goto T771;
T771:;
	if(!((V231)==(V227))){
	goto T763;}
	{register object V232;
	object V233;
	V232= (V222);
	V233= CMPcar((V232));
	goto T781;
T781:;
	if(!(((V232))==Cnil)){
	goto T782;}
	goto T777;
	goto T782;
T782:;
	if(!((CMPcar((V233)))==((V223)))){
	goto T786;}
	V217= CMPcdr((V233));
	goto T760;
	goto T786;
T786:;
	V232= CMPcdr((V232));
	V233= CMPcar((V232));
	goto T781;}
	goto T777;
T777:;
	goto T729;
	goto T763;
T763:;
	goto T762;
	goto T760;
T760:;
	V234 = V228;
	{object V236;
	V236= ((V219))->v.v_self[0];
	if(type_of((V236))==t_fixnum){
	goto T801;}
	base[1]= VV[15];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T801;
T801:;
	V235= fix((V236));}
	if((V234)==(V235)){
	goto T747;}
	goto T729;}}
	goto T747;
T747:;
	{object V237;
	V237= CMPcdr((V217));
	if(!(((V237))==((VV[4]->s.s_dbind)))){
	goto T807;}
	base[1]= (V216);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T807;
T807:;
	base[1]= (V237);
	vs_top=(vs_base=base+1)+1;
	return;}}
	goto T729;
T729:;
	base[1]= (V216);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC17(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	check_arg(4);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	base[3]=MMcons(base[3],base[2]);
	vs_top=sup;
	base[4]= 
	make_cclosure_new(LC40,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC40(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	{object V238;
	register object V239;
	check_arg(2);
	V238=(base[0]);
	V239=(base[1]);
	vs_top=sup;
	{object V240;
	object V241;
	V240= Cnil;
	if(type_of(V239)==t_structure){
	goto T817;}
	goto T815;
	goto T817;
T817:;
	if(!(((V239)->str.str_def)==(VV[12]))){
	goto T815;}
	V240= STREF(object,(V239),4);
	V241= STREF(object,(V239),0);
	goto T813;
	goto T815;
T815:;{object V243;
	V243= (VV[3]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V239);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V244= vs_base[0];
	if(!((V243)==(CMPcar(V244)))){
	goto T822;}}
	V240= CMPcar(((V239))->cc.cc_turbo[12]);
	V241= CMPcar(((V239))->cc.cc_turbo[13]);
	goto T813;
	goto T822;
T822:;
	V241= Cnil;
	goto T813;
T813:;
	if(((V241))==Cnil){
	goto T829;}
	if((fix(((V241))->v.v_self[0]))==0){
	goto T829;}
	if(((V241))==((base0[3]->c.c_car))){
	goto T830;}
	if(((V241))==((base0[2]->c.c_car))){
	goto T830;}
	goto T829;
T829:;
	base[3]= (V238);
	base[4]= (V239);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T830;
T830:;
	base[3]= ((V240))->v.v_self[fix((base0[1]->c.c_car))]= ((V238));
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	check_arg(4);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	base[3]=MMcons(base[3],base[2]);
	vs_top=sup;
	base[4]= 
	make_cclosure_new(LC41,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC41(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{object V245;
	register object V246;
	check_arg(2);
	V245=(base[0]);
	V246=(base[1]);
	vs_top=sup;
	{object V247;
	if(type_of(V246)==t_structure){
	goto T844;}
	goto T842;
	goto T844;
T844:;
	if(!(((V246)->str.str_def)==(VV[11]))){
	goto T842;}
	V247= STREF(object,(V246),0);
	goto T840;
	goto T842;
T842:;{object V249;
	V249= (VV[3]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V246);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V250= vs_base[0];
	if(!((V249)==(CMPcar(V250)))){
	goto T847;}}
	V247= CMPcar(((V246))->cc.cc_turbo[13]);
	goto T840;
	goto T847;
T847:;
	V247= Cnil;
	goto T840;
T840:;
	if(((V247))==Cnil){
	goto T852;}
	if((fix(((V247))->v.v_self[0]))==0){
	goto T852;}
	if(((V247))==((base0[3]->c.c_car))){
	goto T853;}
	if(((V247))==((base0[2]->c.c_car))){
	goto T853;}
	goto T852;
T852:;
	base[3]= (V245);
	base[4]= (V246);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T853;
T853:;
	{object V251;
	V251= (base0[1]->c.c_car);
	((V251))->c.c_cdr = V245;
	base[3]= V245;
	vs_top=(vs_base=base+3)+1;
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC15(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	check_arg(3);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	base[3]= 
	make_cclosure_new(LC42,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC42(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{object V253;
	register object V254;
	check_arg(2);
	V253=(base[0]);
	V254=(base[1]);
	vs_top=sup;
	{object V255;
	object V256;
	V255= Cnil;
	if(type_of(V254)==t_structure){
	goto T870;}
	goto T868;
	goto T870;
T870:;
	if(!(((V254)->str.str_def)==(VV[10]))){
	goto T868;}
	V255= STREF(object,(V254),4);
	V256= STREF(object,(V254),0);
	goto T866;
	goto T868;
T868:;{object V258;
	V258= (VV[3]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V254);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V259= vs_base[0];
	if(!((V258)==(CMPcar(V259)))){
	goto T875;}}
	V255= CMPcar(((V254))->cc.cc_turbo[12]);
	V256= CMPcar(((V254))->cc.cc_turbo[13]);
	goto T866;
	goto T875;
T875:;
	V256= Cnil;
	goto T866;
T866:;
	if(((V256))==Cnil){
	goto T882;}
	if((fix(((V256))->v.v_self[0]))==0){
	goto T882;}
	if(((V256))==((base0[2]->c.c_car))){
	goto T883;}
	goto T882;
T882:;
	base[3]= (V253);
	base[4]= (V254);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T883;
T883:;
	base[3]= ((V255))->v.v_self[fix((base0[1]->c.c_car))]= ((V253));
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC14(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	check_arg(3);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	base[3]= 
	make_cclosure_new(LC43,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC43(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	{object V260;
	register object V261;
	check_arg(2);
	V260=(base[0]);
	V261=(base[1]);
	vs_top=sup;
	{object V262;
	if(type_of(V261)==t_structure){
	goto T895;}
	goto T893;
	goto T895;
T895:;
	if(!(((V261)->str.str_def)==(VV[9]))){
	goto T893;}
	V262= STREF(object,(V261),0);
	goto T891;
	goto T893;
T893:;{object V264;
	V264= (VV[3]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V261);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V265= vs_base[0];
	if(!((V264)==(CMPcar(V265)))){
	goto T898;}}
	V262= CMPcar(((V261))->cc.cc_turbo[13]);
	goto T891;
	goto T898;
T898:;
	V262= Cnil;
	goto T891;
T891:;
	if(((V262))==Cnil){
	goto T903;}
	if((fix(((V262))->v.v_self[0]))==0){
	goto T903;}
	if(((V262))==((base0[2]->c.c_car))){
	goto T904;}
	goto T903;
T903:;
	base[3]= (V260);
	base[4]= (V261);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T904;
T904:;
	{object V266;
	V266= (base0[1]->c.c_car);
	((V266))->c.c_cdr = V260;
	base[3]= V260;
	vs_top=(vs_base=base+3)+1;
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC13(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	check_arg(4);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	base[3]=MMcons(base[3],base[2]);
	vs_top=sup;
	base[4]= 
	make_cclosure_new(LC44,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC44(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	{register object V268;
	check_arg(1);
	V268=(base[0]);
	vs_top=sup;
	{object V269;
	object V270;
	object V271;
	V269= Cnil;
	if(type_of(V268)==t_structure){
	goto T919;}
	goto T917;
	goto T919;
T919:;
	if(!(((V268)->str.str_def)==(VV[8]))){
	goto T917;}
	V269= STREF(object,(V268),4);
	V270= STREF(object,(V268),0);
	goto T915;
	goto T917;
T917:;{object V273;
	V273= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V268);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V274= vs_base[0];
	if(!((V273)==(CMPcar(V274)))){
	goto T924;}}
	V269= CMPcar(((V268))->cc.cc_turbo[12]);
	V270= CMPcar(((V268))->cc.cc_turbo[13]);
	goto T915;
	goto T924;
T924:;
	V270= Cnil;
	goto T915;
T915:;
	V271= Cnil;
	if(((V270))==Cnil){
	goto T932;}
	if((fix(((V270))->v.v_self[0]))==0){
	goto T932;}
	if(((V270))==((base0[3]->c.c_car))){
	goto T938;}
	if(!(((V270))==((base0[2]->c.c_car)))){
	goto T932;}
	goto T938;
T938:;{object V275;
	V275= (VV[4]->s.s_dbind);
	V271= ((V269))->v.v_self[fix((base0[1]->c.c_car))];
	V276 = (V271);
	if(!((V275)==(V276))){
	goto T933;}}
	goto T932;
T932:;
	base[2]= (V268);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T933;
T933:;
	base[2]= (V271);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC12(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	check_arg(4);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	base[3]=MMcons(base[3],base[2]);
	vs_top=sup;
	base[4]= 
	make_cclosure_new(LC45,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC45(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	{register object V277;
	check_arg(1);
	V277=(base[0]);
	vs_top=sup;
	{object V278;
	object V279;
	if(type_of(V277)==t_structure){
	goto T949;}
	goto T947;
	goto T949;
T949:;
	if(!(((V277)->str.str_def)==(VV[7]))){
	goto T947;}
	V278= STREF(object,(V277),0);
	goto T945;
	goto T947;
T947:;{object V281;
	V281= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V277);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V282= vs_base[0];
	if(!((V281)==(CMPcar(V282)))){
	goto T952;}}
	V278= CMPcar(((V277))->cc.cc_turbo[13]);
	goto T945;
	goto T952;
T952:;
	V278= Cnil;
	goto T945;
T945:;
	V279= Cnil;
	if(((V278))==Cnil){
	goto T958;}
	if((fix(((V278))->v.v_self[0]))==0){
	goto T958;}
	if(((V278))==((base0[3]->c.c_car))){
	goto T964;}
	if(!(((V278))==((base0[2]->c.c_car)))){
	goto T958;}
	goto T964;
T964:;{object V283;
	V283= (VV[4]->s.s_dbind);
	V279= CMPcdr((base0[1]->c.c_car));
	V284 = (V279);
	if(!((V283)==(V284))){
	goto T959;}}
	goto T958;
T958:;
	base[2]= (V277);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T959;
T959:;
	base[2]= (V279);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC11(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	check_arg(3);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	base[3]= 
	make_cclosure_new(LC46,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC46(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_check;
	{register object V285;
	check_arg(1);
	V285=(base[0]);
	vs_top=sup;
	{object V286;
	object V287;
	object V288;
	V286= Cnil;
	if(type_of(V285)==t_structure){
	goto T976;}
	goto T974;
	goto T976;
T976:;
	if(!(((V285)->str.str_def)==(VV[5]))){
	goto T974;}
	V286= STREF(object,(V285),4);
	V287= STREF(object,(V285),0);
	goto T972;
	goto T974;
T974:;{object V290;
	V290= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V285);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V291= vs_base[0];
	if(!((V290)==(CMPcar(V291)))){
	goto T981;}}
	V286= CMPcar(((V285))->cc.cc_turbo[12]);
	V287= CMPcar(((V285))->cc.cc_turbo[13]);
	goto T972;
	goto T981;
T981:;
	V287= Cnil;
	goto T972;
T972:;
	V288= Cnil;
	if(((V287))==Cnil){
	goto T989;}
	if((fix(((V287))->v.v_self[0]))==0){
	goto T989;}
	if(!(((V287))==((base0[2]->c.c_car)))){
	goto T989;}{object V292;
	V292= (VV[4]->s.s_dbind);
	V288= ((V286))->v.v_self[fix((base0[1]->c.c_car))];
	V293 = (V288);
	if(!((V292)==(V293))){
	goto T990;}}
	goto T989;
T989:;
	base[2]= (V285);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T990;
T990:;
	base[2]= (V288);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC10(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	check_arg(3);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	base[2]=MMcons(base[2],base[1]);
	vs_top=sup;
	base[3]= 
	make_cclosure_new(LC47,Cnil,base[2],Cdata);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC47(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{register object V294;
	check_arg(1);
	V294=(base[0]);
	vs_top=sup;
	{object V295;
	object V296;
	if(type_of(V294)==t_structure){
	goto T1004;}
	goto T1002;
	goto T1004;
T1004:;
	if(!(((V294)->str.str_def)==(VV[1]))){
	goto T1002;}
	V295= STREF(object,(V294),0);
	goto T1000;
	goto T1002;
T1002:;{object V298;
	V298= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V294);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V299= vs_base[0];
	if(!((V298)==(CMPcar(V299)))){
	goto T1007;}}
	V295= CMPcar(((V294))->cc.cc_turbo[13]);
	goto T1000;
	goto T1007;
T1007:;
	V295= Cnil;
	goto T1000;
T1000:;
	V296= Cnil;
	if(((V295))==Cnil){
	goto T1013;}
	if((fix(((V295))->v.v_self[0]))==0){
	goto T1013;}
	if(!(((V295))==((base0[2]->c.c_car)))){
	goto T1013;}{object V300;
	V300= (VV[4]->s.s_dbind);
	V296= CMPcdr((base0[1]->c.c_car));
	V301 = (V296);
	if(!((V300)==(V301))){
	goto T1014;}}
	goto T1013;
T1013:;
	base[2]= (V294);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1014;
T1014:;
	base[2]= (V296);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
static object  LnkTLI56(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[56],(void **)(void *)&LnkLI56,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT55(){ call_or_link(VV[55],(void **)(void *)&Lnk55);} /* CCLOSURE-ENV-NTHCDR */
static object  LnkTLI54(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[54],(void **)(void *)&LnkLI54,first,ap);va_end(ap);return V1;} /* PROBE-CACHE */
static object  LnkTLI53(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[53],(void **)(void *)&LnkLI53,1,first,ap);va_end(ap);return V1;} /* CHECK-WRAPPER-VALIDITY */
static object  LnkTLI52(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[52],(void **)(void *)&LnkLI52,1,first,ap);va_end(ap);return V1;} /* WRAPPER-OF */
static void LnkT51(){ call_or_link(VV[51],(void **)(void *)&Lnk51);} /* INVOKE-EMF */
static object  LnkTLI49(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[49],(void **)(void *)&LnkLI49,4,first,ap);va_end(ap);return V1;} /* EMIT-CHECKING-OR-CACHING-FUNCTION-PRELIMINARY */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

