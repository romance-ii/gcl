
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
	{object V134;
	V134= ((V118))->v.v_self[0];
	if(type_of((V134))==t_fixnum){
	goto T418;}
	base[2]= VV[15];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T418;
T418:;
	V133= fix((V134));}
	if((V127)==(V133)){
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
	{object V135;
	object V136;
	check_arg(2);
	V135=(base[0]);
	V136=(base[1]);
	vs_top=sup;
	{object V137;
	V137= Cnil;
	{long V138;
	object V139;
	long V140;
	long V141;
	object V142;
	object V143;
	V138= (long)STREF(unsigned char,(base0[1]->c.c_car),16);
	V139= STREF(object,(base0[1]->c.c_car),40);
	V140= (long)STREF(fixnum,(base0[1]->c.c_car),24);
	V141= (long)STREF(fixnum,(base0[1]->c.c_car),28);
	V142= STREF(object,(base0[1]->c.c_car),44);
	if(type_of(V136)==t_structure){
	goto T436;}
	goto T434;
	goto T436;
T436:;
	if(!(((V136)->str.str_def)==(VV[19]))){
	goto T434;}
	V143= STREF(object,(V136),0);
	goto T432;
	goto T434;
T434:;{object V145;
	V145= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V136);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V146= vs_base[0];
	if(!((V145)==(CMPcar(V146)))){
	goto T439;}}
	V143= CMPcar(((V136))->cc.cc_turbo[13]);
	goto T432;
	goto T439;
T439:;
	goto T426;
	goto T432;
T432:;
	{long V147;
	long V148;
	{long V149;
	V149= fix(((V143))->v.v_self[V138]);
	if(!((V149)==0)){
	goto T447;}
	goto T426;
	goto T447;
T447:;
	V147= (long)((V140) & (V149));}
	{object V150;
	V150= ((V139))->v.v_self[0];
	if(type_of((V150))==t_fixnum){
	goto T452;}
	base[2]= VV[15];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T452;
T452:;
	V148= fix((V150));}
	{long V151;
	V151= V147;
	goto T459;
T459:;
	if(!(((V143))==(((V139))->v.v_self[V151]))){
	goto T461;}
	V137= ((V139))->v.v_self[(long)(V151)+1];
	goto T457;
	goto T461;
T461:;
	V151= (long)(V151)+(2);
	if(!((V151)==(V141))){
	goto T468;}
	V151= 0;
	goto T468;
T468:;
	if(!((V151)==(V147))){
	goto T460;}
	{register object V152;
	object V153;
	V152= (V142);
	V153= CMPcar((V152));
	goto T478;
T478:;
	if(!(((V152))==Cnil)){
	goto T479;}
	goto T474;
	goto T479;
T479:;
	if(!((CMPcar((V153)))==((V143)))){
	goto T483;}
	V137= CMPcdr((V153));
	goto T457;
	goto T483;
T483:;
	V152= CMPcdr((V152));
	V153= CMPcar((V152));
	goto T478;}
	goto T474;
T474:;
	goto T426;
	goto T460;
T460:;
	goto T459;
	goto T457;
T457:;
	{object V155;
	V155= ((V139))->v.v_self[0];
	if(type_of((V155))==t_fixnum){
	goto T498;}
	base[2]= VV[15];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T498;
T498:;
	V154= fix((V155));}
	if((V148)==(V154)){
	goto T444;}
	goto T426;}}
	goto T444;
T444:;
	(V137)->c.c_cdr = V135;
	base[2]= V135;
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T426;
T426:;
	base[2]= (V135);
	base[3]= (V136);
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
	{object V158;
	check_arg(1);
	V158=(base[0]);
	vs_top=sup;
	{object V159;
	V159= Cnil;
	{long V160;
	object V161;
	long V162;
	long V163;
	object V164;
	object V165;
	V160= (long)STREF(unsigned char,(base0[2]->c.c_car),16);
	V161= STREF(object,(base0[2]->c.c_car),40);
	V162= (long)STREF(fixnum,(base0[2]->c.c_car),24);
	V163= (long)STREF(fixnum,(base0[2]->c.c_car),28);
	V164= STREF(object,(base0[2]->c.c_car),44);
	if(type_of(V158)==t_structure){
	goto T517;}
	goto T515;
	goto T517;
T517:;
	if(!(((V158)->str.str_def)==(VV[18]))){
	goto T515;}
	V159= STREF(object,(V158),4);
	V165= STREF(object,(V158),0);
	goto T513;
	goto T515;
T515:;{object V167;
	V167= (VV[3]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (V158);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V168= vs_base[0];
	if(!((V167)==(CMPcar(V168)))){
	goto T522;}}
	V159= CMPcar(((V158))->cc.cc_turbo[12]);
	V165= CMPcar(((V158))->cc.cc_turbo[13]);
	goto T513;
	goto T522;
T522:;
	goto T507;
	goto T513;
T513:;
	{long V169;
	long V170;
	{long V171;
	V171= fix(((V165))->v.v_self[V160]);
	if(!((V171)==0)){
	goto T532;}
	goto T507;
	goto T532;
T532:;
	V169= (long)((V162) & (V171));}
	V170= V169;
	goto T537;
T537:;
	if(!(((V165))==(((V161))->v.v_self[V170]))){
	goto T539;}
	goto T529;
	goto T539;
T539:;
	V170= (long)(V170)+(1);
	if(!((V170)==(V163))){
	goto T544;}
	V170= 0;
	goto T544;
T544:;
	if(!((V170)==(V169))){
	goto T538;}
	{register object V172;
	object V173;
	V172= (V164);
	V173= CMPcar((V172));
	goto T554;
T554:;
	if(!(((V172))==Cnil)){
	goto T555;}
	goto T550;
	goto T555;
T555:;
	if(!((CMPcar((V173)))==((V165)))){
	goto T559;}
	goto T529;
	goto T559;
T559:;
	V172= CMPcdr((V172));
	V173= CMPcar((V172));
	goto T554;}
	goto T550;
T550:;
	goto T507;
	goto T538;
T538:;
	goto T537;}
	goto T529;
T529:;
	{object V174;
	V174= ((V159))->v.v_self[fix((base0[1]->c.c_car))];
	if(!(((V174))==((VV[4]->s.s_dbind)))){
	goto T570;}
	base[1]= (V158);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T570;
T570:;
	base[1]= (V174);
	vs_top=(vs_base=base+1)+1;
	return;}}
	goto T507;
T507:;
	base[1]= (V158);
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
	{object V175;
	check_arg(1);
	V175=(base[0]);
	vs_top=sup;
	{long V176;
	object V177;
	long V178;
	long V179;
	object V180;
	object V181;
	V176= (long)STREF(unsigned char,(base0[2]->c.c_car),16);
	V177= STREF(object,(base0[2]->c.c_car),40);
	V178= (long)STREF(fixnum,(base0[2]->c.c_car),24);
	V179= (long)STREF(fixnum,(base0[2]->c.c_car),28);
	V180= STREF(object,(base0[2]->c.c_car),44);
	if(type_of(V175)==t_structure){
	goto T586;}
	goto T584;
	goto T586;
T586:;
	if(!(((V175)->str.str_def)==(VV[17]))){
	goto T584;}
	V181= STREF(object,(V175),0);
	goto T582;
	goto T584;
T584:;{object V183;
	V183= (VV[3]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (V175);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V184= vs_base[0];
	if(!((V183)==(CMPcar(V184)))){
	goto T589;}}
	V181= CMPcar(((V175))->cc.cc_turbo[13]);
	goto T582;
	goto T589;
T589:;
	goto T576;
	goto T582;
T582:;
	{long V185;
	long V186;
	{long V187;
	V187= fix(((V181))->v.v_self[V176]);
	if(!((V187)==0)){
	goto T597;}
	goto T576;
	goto T597;
T597:;
	V185= (long)((V178) & (V187));}
	V186= V185;
	goto T602;
T602:;
	if(!(((V181))==(((V177))->v.v_self[V186]))){
	goto T604;}
	goto T594;
	goto T604;
T604:;
	V186= (long)(V186)+(1);
	if(!((V186)==(V179))){
	goto T609;}
	V186= 0;
	goto T609;
T609:;
	if(!((V186)==(V185))){
	goto T603;}
	{register object V188;
	object V189;
	V188= (V180);
	V189= CMPcar((V188));
	goto T619;
T619:;
	if(!(((V188))==Cnil)){
	goto T620;}
	goto T615;
	goto T620;
T620:;
	if(!((CMPcar((V189)))==((V181)))){
	goto T624;}
	goto T594;
	goto T624;
T624:;
	V188= CMPcdr((V188));
	V189= CMPcar((V188));
	goto T619;}
	goto T615;
T615:;
	goto T576;
	goto T603;
T603:;
	goto T602;}
	goto T594;
T594:;
	{object V190;
	V190= CMPcdr((base0[1]->c.c_car));
	if(!(((V190))==((VV[4]->s.s_dbind)))){
	goto T635;}
	base[1]= (V175);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T635;
T635:;
	base[1]= (V190);
	vs_top=(vs_base=base+1)+1;
	return;}}
	goto T576;
T576:;
	base[1]= (V175);
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
	{object V191;
	check_arg(1);
	V191=(base[0]);
	vs_top=sup;
	{object V192;
	object V193;
	V192= Cnil;
	V193= Cnil;
	{long V194;
	object V195;
	long V196;
	long V197;
	object V198;
	object V199;
	V194= (long)STREF(unsigned char,(base0[1]->c.c_car),16);
	V195= STREF(object,(base0[1]->c.c_car),40);
	V196= (long)STREF(fixnum,(base0[1]->c.c_car),24);
	V197= (long)STREF(fixnum,(base0[1]->c.c_car),28);
	V198= STREF(object,(base0[1]->c.c_car),44);
	if(type_of(V191)==t_structure){
	goto T651;}
	goto T649;
	goto T651;
T651:;
	if(!(((V191)->str.str_def)==(VV[16]))){
	goto T649;}
	V192= STREF(object,(V191),4);
	V199= STREF(object,(V191),0);
	goto T647;
	goto T649;
T649:;{object V201;
	V201= (VV[3]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (V191);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V202= vs_base[0];
	if(!((V201)==(CMPcar(V202)))){
	goto T656;}}
	V192= CMPcar(((V191))->cc.cc_turbo[12]);
	V199= CMPcar(((V191))->cc.cc_turbo[13]);
	goto T647;
	goto T656;
T656:;
	goto T641;
	goto T647;
T647:;
	{long V203;
	long V204;
	{long V205;
	V205= fix(((V199))->v.v_self[V194]);
	if(!((V205)==0)){
	goto T666;}
	goto T641;
	goto T666;
T666:;
	V203= (long)((V196) & (V205));}
	{object V206;
	V206= ((V195))->v.v_self[0];
	if(type_of((V206))==t_fixnum){
	goto T671;}
	base[1]= VV[15];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T671;
T671:;
	V204= fix((V206));}
	{long V207;
	V207= V203;
	goto T678;
T678:;
	if(!(((V199))==(((V195))->v.v_self[V207]))){
	goto T680;}
	V193= ((V195))->v.v_self[(long)(V207)+1];
	goto T676;
	goto T680;
T680:;
	V207= (long)(V207)+(2);
	if(!((V207)==(V197))){
	goto T687;}
	V207= 0;
	goto T687;
T687:;
	if(!((V207)==(V203))){
	goto T679;}
	{register object V208;
	object V209;
	V208= (V198);
	V209= CMPcar((V208));
	goto T697;
T697:;
	if(!(((V208))==Cnil)){
	goto T698;}
	goto T693;
	goto T698;
T698:;
	if(!((CMPcar((V209)))==((V199)))){
	goto T702;}
	V193= CMPcdr((V209));
	goto T676;
	goto T702;
T702:;
	V208= CMPcdr((V208));
	V209= CMPcar((V208));
	goto T697;}
	goto T693;
T693:;
	goto T641;
	goto T679;
T679:;
	goto T678;
	goto T676;
T676:;
	{object V211;
	V211= ((V195))->v.v_self[0];
	if(type_of((V211))==t_fixnum){
	goto T717;}
	base[1]= VV[15];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T717;
T717:;
	V210= fix((V211));}
	if((V204)==(V210)){
	goto T663;}
	goto T641;}}
	goto T663;
T663:;
	{object V212;
	V212= ((V192))->v.v_self[fix((V193))];
	if(!(((V212))==((VV[4]->s.s_dbind)))){
	goto T723;}
	base[1]= (V191);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T723;
T723:;
	base[1]= (V212);
	vs_top=(vs_base=base+1)+1;
	return;}}
	goto T641;
T641:;
	base[1]= (V191);
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
	{object V213;
	check_arg(1);
	V213=(base[0]);
	vs_top=sup;
	{object V214;
	V214= Cnil;
	{long V215;
	object V216;
	long V217;
	long V218;
	object V219;
	object V220;
	V215= (long)STREF(unsigned char,(base0[1]->c.c_car),16);
	V216= STREF(object,(base0[1]->c.c_car),40);
	V217= (long)STREF(fixnum,(base0[1]->c.c_car),24);
	V218= (long)STREF(fixnum,(base0[1]->c.c_car),28);
	V219= STREF(object,(base0[1]->c.c_car),44);
	if(type_of(V213)==t_structure){
	goto T739;}
	goto T737;
	goto T739;
T739:;
	if(!(((V213)->str.str_def)==(VV[14]))){
	goto T737;}
	V220= STREF(object,(V213),0);
	goto T735;
	goto T737;
T737:;{object V222;
	V222= (VV[3]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (V213);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V223= vs_base[0];
	if(!((V222)==(CMPcar(V223)))){
	goto T742;}}
	V220= CMPcar(((V213))->cc.cc_turbo[13]);
	goto T735;
	goto T742;
T742:;
	goto T729;
	goto T735;
T735:;
	{long V224;
	long V225;
	{long V226;
	V226= fix(((V220))->v.v_self[V215]);
	if(!((V226)==0)){
	goto T750;}
	goto T729;
	goto T750;
T750:;
	V224= (long)((V217) & (V226));}
	{object V227;
	V227= ((V216))->v.v_self[0];
	if(type_of((V227))==t_fixnum){
	goto T755;}
	base[1]= VV[15];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T755;
T755:;
	V225= fix((V227));}
	{long V228;
	V228= V224;
	goto T762;
T762:;
	if(!(((V220))==(((V216))->v.v_self[V228]))){
	goto T764;}
	V214= ((V216))->v.v_self[(long)(V228)+1];
	goto T760;
	goto T764;
T764:;
	V228= (long)(V228)+(2);
	if(!((V228)==(V218))){
	goto T771;}
	V228= 0;
	goto T771;
T771:;
	if(!((V228)==(V224))){
	goto T763;}
	{register object V229;
	object V230;
	V229= (V219);
	V230= CMPcar((V229));
	goto T781;
T781:;
	if(!(((V229))==Cnil)){
	goto T782;}
	goto T777;
	goto T782;
T782:;
	if(!((CMPcar((V230)))==((V220)))){
	goto T786;}
	V214= CMPcdr((V230));
	goto T760;
	goto T786;
T786:;
	V229= CMPcdr((V229));
	V230= CMPcar((V229));
	goto T781;}
	goto T777;
T777:;
	goto T729;
	goto T763;
T763:;
	goto T762;
	goto T760;
T760:;
	{object V232;
	V232= ((V216))->v.v_self[0];
	if(type_of((V232))==t_fixnum){
	goto T801;}
	base[1]= VV[15];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T801;
T801:;
	V231= fix((V232));}
	if((V225)==(V231)){
	goto T747;}
	goto T729;}}
	goto T747;
T747:;
	{object V233;
	V233= CMPcdr((V214));
	if(!(((V233))==((VV[4]->s.s_dbind)))){
	goto T807;}
	base[1]= (V213);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T807;
T807:;
	base[1]= (V233);
	vs_top=(vs_base=base+1)+1;
	return;}}
	goto T729;
T729:;
	base[1]= (V213);
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
	{object V234;
	register object V235;
	check_arg(2);
	V234=(base[0]);
	V235=(base[1]);
	vs_top=sup;
	{object V236;
	object V237;
	V236= Cnil;
	if(type_of(V235)==t_structure){
	goto T817;}
	goto T815;
	goto T817;
T817:;
	if(!(((V235)->str.str_def)==(VV[12]))){
	goto T815;}
	V236= STREF(object,(V235),4);
	V237= STREF(object,(V235),0);
	goto T813;
	goto T815;
T815:;{object V239;
	V239= (VV[3]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V235);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V240= vs_base[0];
	if(!((V239)==(CMPcar(V240)))){
	goto T822;}}
	V236= CMPcar(((V235))->cc.cc_turbo[12]);
	V237= CMPcar(((V235))->cc.cc_turbo[13]);
	goto T813;
	goto T822;
T822:;
	V237= Cnil;
	goto T813;
T813:;
	if(((V237))==Cnil){
	goto T829;}
	if((fix(((V237))->v.v_self[0]))==0){
	goto T829;}
	if(((V237))==((base0[3]->c.c_car))){
	goto T830;}
	if(((V237))==((base0[2]->c.c_car))){
	goto T830;}
	goto T829;
T829:;
	base[3]= (V234);
	base[4]= (V235);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T830;
T830:;
	base[3]= ((V236))->v.v_self[fix((base0[1]->c.c_car))]= ((V234));
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
	{object V241;
	register object V242;
	check_arg(2);
	V241=(base[0]);
	V242=(base[1]);
	vs_top=sup;
	{object V243;
	if(type_of(V242)==t_structure){
	goto T844;}
	goto T842;
	goto T844;
T844:;
	if(!(((V242)->str.str_def)==(VV[11]))){
	goto T842;}
	V243= STREF(object,(V242),0);
	goto T840;
	goto T842;
T842:;{object V245;
	V245= (VV[3]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V242);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V246= vs_base[0];
	if(!((V245)==(CMPcar(V246)))){
	goto T847;}}
	V243= CMPcar(((V242))->cc.cc_turbo[13]);
	goto T840;
	goto T847;
T847:;
	V243= Cnil;
	goto T840;
T840:;
	if(((V243))==Cnil){
	goto T852;}
	if((fix(((V243))->v.v_self[0]))==0){
	goto T852;}
	if(((V243))==((base0[3]->c.c_car))){
	goto T853;}
	if(((V243))==((base0[2]->c.c_car))){
	goto T853;}
	goto T852;
T852:;
	base[3]= (V241);
	base[4]= (V242);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T853;
T853:;
	{object V247;
	V247= (base0[1]->c.c_car);
	((V247))->c.c_cdr = V241;
	base[3]= V241;
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
	{object V249;
	register object V250;
	check_arg(2);
	V249=(base[0]);
	V250=(base[1]);
	vs_top=sup;
	{object V251;
	object V252;
	V251= Cnil;
	if(type_of(V250)==t_structure){
	goto T870;}
	goto T868;
	goto T870;
T870:;
	if(!(((V250)->str.str_def)==(VV[10]))){
	goto T868;}
	V251= STREF(object,(V250),4);
	V252= STREF(object,(V250),0);
	goto T866;
	goto T868;
T868:;{object V254;
	V254= (VV[3]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V250);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V255= vs_base[0];
	if(!((V254)==(CMPcar(V255)))){
	goto T875;}}
	V251= CMPcar(((V250))->cc.cc_turbo[12]);
	V252= CMPcar(((V250))->cc.cc_turbo[13]);
	goto T866;
	goto T875;
T875:;
	V252= Cnil;
	goto T866;
T866:;
	if(((V252))==Cnil){
	goto T882;}
	if((fix(((V252))->v.v_self[0]))==0){
	goto T882;}
	if(((V252))==((base0[2]->c.c_car))){
	goto T883;}
	goto T882;
T882:;
	base[3]= (V249);
	base[4]= (V250);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T883;
T883:;
	base[3]= ((V251))->v.v_self[fix((base0[1]->c.c_car))]= ((V249));
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
	{object V256;
	register object V257;
	check_arg(2);
	V256=(base[0]);
	V257=(base[1]);
	vs_top=sup;
	{object V258;
	if(type_of(V257)==t_structure){
	goto T895;}
	goto T893;
	goto T895;
T895:;
	if(!(((V257)->str.str_def)==(VV[9]))){
	goto T893;}
	V258= STREF(object,(V257),0);
	goto T891;
	goto T893;
T893:;{object V260;
	V260= (VV[3]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V257);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V261= vs_base[0];
	if(!((V260)==(CMPcar(V261)))){
	goto T898;}}
	V258= CMPcar(((V257))->cc.cc_turbo[13]);
	goto T891;
	goto T898;
T898:;
	V258= Cnil;
	goto T891;
T891:;
	if(((V258))==Cnil){
	goto T903;}
	if((fix(((V258))->v.v_self[0]))==0){
	goto T903;}
	if(((V258))==((base0[2]->c.c_car))){
	goto T904;}
	goto T903;
T903:;
	base[3]= (V256);
	base[4]= (V257);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T904;
T904:;
	{object V262;
	V262= (base0[1]->c.c_car);
	((V262))->c.c_cdr = V256;
	base[3]= V256;
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
	{register object V264;
	check_arg(1);
	V264=(base[0]);
	vs_top=sup;
	{object V265;
	object V266;
	object V267;
	V265= Cnil;
	if(type_of(V264)==t_structure){
	goto T919;}
	goto T917;
	goto T919;
T919:;
	if(!(((V264)->str.str_def)==(VV[8]))){
	goto T917;}
	V265= STREF(object,(V264),4);
	V266= STREF(object,(V264),0);
	goto T915;
	goto T917;
T917:;{object V269;
	V269= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V264);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V270= vs_base[0];
	if(!((V269)==(CMPcar(V270)))){
	goto T924;}}
	V265= CMPcar(((V264))->cc.cc_turbo[12]);
	V266= CMPcar(((V264))->cc.cc_turbo[13]);
	goto T915;
	goto T924;
T924:;
	V266= Cnil;
	goto T915;
T915:;
	V267= Cnil;
	if(((V266))==Cnil){
	goto T932;}
	if((fix(((V266))->v.v_self[0]))==0){
	goto T932;}
	if(((V266))==((base0[3]->c.c_car))){
	goto T938;}
	if(!(((V266))==((base0[2]->c.c_car)))){
	goto T932;}
	goto T938;
T938:;{object V271;
	V271= (VV[4]->s.s_dbind);
	V267= ((V265))->v.v_self[fix((base0[1]->c.c_car))];
	if(!((V271)==((V267)))){
	goto T933;}}
	goto T932;
T932:;
	base[2]= (V264);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T933;
T933:;
	base[2]= (V267);
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
	{register object V272;
	check_arg(1);
	V272=(base[0]);
	vs_top=sup;
	{object V273;
	object V274;
	if(type_of(V272)==t_structure){
	goto T949;}
	goto T947;
	goto T949;
T949:;
	if(!(((V272)->str.str_def)==(VV[7]))){
	goto T947;}
	V273= STREF(object,(V272),0);
	goto T945;
	goto T947;
T947:;{object V276;
	V276= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V272);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V277= vs_base[0];
	if(!((V276)==(CMPcar(V277)))){
	goto T952;}}
	V273= CMPcar(((V272))->cc.cc_turbo[13]);
	goto T945;
	goto T952;
T952:;
	V273= Cnil;
	goto T945;
T945:;
	V274= Cnil;
	if(((V273))==Cnil){
	goto T958;}
	if((fix(((V273))->v.v_self[0]))==0){
	goto T958;}
	if(((V273))==((base0[3]->c.c_car))){
	goto T964;}
	if(!(((V273))==((base0[2]->c.c_car)))){
	goto T958;}
	goto T964;
T964:;{object V278;
	V278= (VV[4]->s.s_dbind);
	V274= CMPcdr((base0[1]->c.c_car));
	if(!((V278)==((V274)))){
	goto T959;}}
	goto T958;
T958:;
	base[2]= (V272);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T959;
T959:;
	base[2]= (V274);
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
	{register object V279;
	check_arg(1);
	V279=(base[0]);
	vs_top=sup;
	{object V280;
	object V281;
	object V282;
	V280= Cnil;
	if(type_of(V279)==t_structure){
	goto T976;}
	goto T974;
	goto T976;
T976:;
	if(!(((V279)->str.str_def)==(VV[5]))){
	goto T974;}
	V280= STREF(object,(V279),4);
	V281= STREF(object,(V279),0);
	goto T972;
	goto T974;
T974:;{object V284;
	V284= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V279);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V285= vs_base[0];
	if(!((V284)==(CMPcar(V285)))){
	goto T981;}}
	V280= CMPcar(((V279))->cc.cc_turbo[12]);
	V281= CMPcar(((V279))->cc.cc_turbo[13]);
	goto T972;
	goto T981;
T981:;
	V281= Cnil;
	goto T972;
T972:;
	V282= Cnil;
	if(((V281))==Cnil){
	goto T989;}
	if((fix(((V281))->v.v_self[0]))==0){
	goto T989;}
	if(!(((V281))==((base0[2]->c.c_car)))){
	goto T989;}{object V286;
	V286= (VV[4]->s.s_dbind);
	V282= ((V280))->v.v_self[fix((base0[1]->c.c_car))];
	if(!((V286)==((V282)))){
	goto T990;}}
	goto T989;
T989:;
	base[2]= (V279);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T990;
T990:;
	base[2]= (V282);
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
	{register object V287;
	check_arg(1);
	V287=(base[0]);
	vs_top=sup;
	{object V288;
	object V289;
	if(type_of(V287)==t_structure){
	goto T1004;}
	goto T1002;
	goto T1004;
T1004:;
	if(!(((V287)->str.str_def)==(VV[1]))){
	goto T1002;}
	V288= STREF(object,(V287),0);
	goto T1000;
	goto T1002;
T1002:;{object V291;
	V291= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V287);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk55)();
	vs_top=sup;
	V292= vs_base[0];
	if(!((V291)==(CMPcar(V292)))){
	goto T1007;}}
	V288= CMPcar(((V287))->cc.cc_turbo[13]);
	goto T1000;
	goto T1007;
T1007:;
	V288= Cnil;
	goto T1000;
T1000:;
	V289= Cnil;
	if(((V288))==Cnil){
	goto T1013;}
	if((fix(((V288))->v.v_self[0]))==0){
	goto T1013;}
	if(!(((V288))==((base0[2]->c.c_car)))){
	goto T1013;}{object V293;
	V293= (VV[4]->s.s_dbind);
	V289= CMPcdr((base0[1]->c.c_car));
	if(!((V293)==((V289)))){
	goto T1014;}}
	goto T1013;
T1013:;
	base[2]= (V287);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1014;
T1014:;
	base[2]= (V289);
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

