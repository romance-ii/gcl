
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
	{object V5= V1;
	if((V5!= VV[45]))goto T2;
	{object V7= V2;
	if(!eql(V7,VV[0]))goto T3;
	if(((V3))==Cnil){
	goto T5;}
	base[3]= VV[46];
	goto T1;
	goto T5;
T5:;
	base[3]= VV[47];
	goto T1;
	goto T3;
T3:;
	if(!eql(V7,VV[6]))goto T7;
	if(((V3))==Cnil){
	goto T9;}
	base[3]= VV[48];
	goto T1;
	goto T9;
T9:;
	base[3]= VV[49];
	goto T1;
	goto T7;
T7:;
	base[4]= VV[9];
	base[5]= VV[10];
	base[6]= VV[11];
	base[7]= VV[12];
	base[8]= V2;
	base[9]= VV[13];
	base[10]= VV[14];
	base[11]= VV[15];
	base[12]= VV[16];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk50)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T1;}
	goto T2;
T2:;
	if((V5!= VV[51]))goto T20;
	{object V9= V2;
	if(!eql(V9,VV[0]))goto T21;
	if(((V3))==Cnil){
	goto T23;}
	base[3]= VV[52];
	goto T1;
	goto T23;
T23:;
	base[3]= VV[53];
	goto T1;
	goto T21;
T21:;
	if(!eql(V9,VV[6]))goto T25;
	if(((V3))==Cnil){
	goto T27;}
	base[3]= VV[54];
	goto T1;
	goto T27;
T27:;
	base[3]= VV[55];
	goto T1;
	goto T25;
T25:;
	base[4]= VV[9];
	base[5]= VV[10];
	base[6]= VV[11];
	base[7]= VV[12];
	base[8]= V2;
	base[9]= VV[13];
	base[10]= VV[21];
	base[11]= VV[15];
	base[12]= VV[22];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk50)();
	vs_top=sup;
	base[3]= vs_base[0];
	goto T1;}
	goto T20;
T20:;
	base[4]= VV[9];
	base[5]= VV[10];
	base[6]= VV[11];
	base[7]= VV[12];
	base[8]= V1;
	base[9]= VV[13];
	base[10]= VV[23];
	base[11]= VV[15];
	base[12]= VV[24];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk50)();
	vs_top=sup;
	base[3]= vs_base[0];}
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
	{object V10;
	object V11;
	object V12;
	check_arg(3);
	V10=(base[0]);
	V11=(base[1]);
	V12=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V14= V10;
	if((V14!= VV[45]))goto T49;
	if(((V11))==Cnil){
	goto T51;}
	if(((V12))==Cnil){
	goto T54;}
	base[3]= VV[56];
	goto T48;
	goto T54;
T54:;
	base[3]= VV[57];
	goto T48;
	goto T51;
T51:;
	if(((V12))==Cnil){
	goto T57;}
	base[3]= VV[58];
	goto T48;
	goto T57;
T57:;
	base[3]= VV[59];
	goto T48;
	goto T49;
T49:;
	if((V14!= VV[51]))goto T59;
	if(((V11))==Cnil){
	goto T61;}
	if(((V12))==Cnil){
	goto T64;}
	base[3]= VV[60];
	goto T48;
	goto T64;
T64:;
	base[3]= VV[61];
	goto T48;
	goto T61;
T61:;
	if(((V12))==Cnil){
	goto T67;}
	base[3]= VV[62];
	goto T48;
	goto T67;
T67:;
	base[3]= VV[63];
	goto T48;
	goto T59;
T59:;
	base[4]= VV[9];
	base[5]= VV[10];
	base[6]= VV[11];
	base[7]= VV[12];
	base[8]= V10;
	base[9]= VV[13];
	base[10]= VV[35];
	base[11]= VV[15];
	base[12]= VV[36];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk50)();
	vs_top=sup;
	base[3]= vs_base[0];}
	goto T48;
T48:;
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
	{object V15=base[0]->c.c_cdr;
	if(!endp(V15))invalid_macro_call();}
	base[3]= (VV[41]->s.s_dbind);
	{object V17;
	object V18= base[3];
	if(V18==Cnil){
	V16= Cnil;
	goto T79;}
	base[2]=V17=MMcons(Cnil,Cnil);
	goto T80;
T80:;
	V20= list(2,VV[39],(V18->c.c_car));
	(V17->c.c_car)= list(3,VV[38],/* INLINE-ARGS */V20,make_cons(VV[40],(V18->c.c_car)));
	if((V18=MMcdr(V18))==Cnil){
	V16= base[2];
	goto T79;}
	V17=MMcdr(V17)=MMcons(Cnil,Cnil);
	goto T80;}
	goto T79;
T79:;
	base[2]= make_cons(VV[37],V16);
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function INITIALIZE-CHECKING-OR-CACHING-FUNCTION-LIST	*/

static object LI4()

{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	(VV[42]->s.s_dbind)= Cnil;
	{object V21 = (VV[42]->s.s_dbind);
	VMR4(V21)}
	return Cnil;
}
/*	macro definition for EMIT-CHECKING-OR-CACHING-FUNCTION-PRECOMPILED	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V22=base[0]->c.c_cdr;
	if(!endp(V22))invalid_macro_call();}
	base[2]= VV[43];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	function definition for EMIT-CHECKING-OR-CACHING-FUNCTION	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V23;
	object V24;
	object V25;
	object V26;
	check_arg(4);
	V23=(base[0]);
	V24=(base[1]);
	V25=(base[2]);
	V26=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V27;
	V30= list(4,(V23),(V24),(V25),(V26));
	{register object x= /* INLINE-ARGS */V30,V29= (VV[42]->s.s_dbind);
	while(V29!=Cnil)
	if(equal(x,V29->c.c_car->c.c_car) &&V29->c.c_car != Cnil){
	V28= (V29->c.c_car);
	goto T84;
	}else V29=V29->c.c_cdr;
	V28= Cnil;}
	goto T84;
T84:;
	V27= CMPcdr(V28);
	if(((V27))==Cnil){
	goto T86;}
	base[4]= (V27);
	base[5]= Cnil;
	vs_top=(vs_base=base+4)+2;
	return;
	goto T86;
T86:;
	base[4]= (*(LnkLI64))((V23),(V24),(V25),(V26));
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	return;}
	}
}
/*	local entry for function EMIT-CHECKING-OR-CACHING-FUNCTION-PRELIMINARY	*/

static object LI8(V35,V36,V37,V38)

object V35;object V36;object V37;object V38;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	base[0]=MMcons((V37),Cnil);
	base[1]=MMcons((V36),base[0]);
	if(((V35))==Cnil){
	goto T93;}
	{object V39 = 
	make_cclosure_new(LC26,Cnil,base[1],Cdata);
	VMR7(V39)}
	goto T93;
T93:;
	{object V40 = 
	make_cclosure_new(LC27,Cnil,base[1],Cdata);
	VMR7(V40)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for EMIT-DEFAULT-ONLY-FUNCTION	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	{object V41;
	object V42;
	check_arg(2);
	V41=(base[0]);
	V42=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= VV[65];
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
	{object V43;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V43=(base[0]);
	vs_top=sup;
	base[1]= (base0[0]->c.c_car);
	base[2]= (V43);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk66)();
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
	{object V44;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V44=(base[0]);
	vs_top=sup;
	{object V45;
	object V46;
	object V47;
	register object V48;
	object V49;
	V45= (V44);
	V46= Cnil;
	V47= Cnil;
	V48= Cnil;
	V49= Cnil;
	{register object V50;
	object V51;
	V50= (base0[4]->c.c_car);
	V51= CMPcar((V50));
	goto T108;
T108:;
	if(!(((V50))==Cnil)){
	goto T109;}
	goto T104;
	goto T109;
T109:;
	if(((V45))!=Cnil){
	goto T113;}
	V47= Ct;
	goto T104;
	goto T113;
T113:;
	{object V52;
	register object V53;
	{object V54;
	V54= CMPcar((V45));
	V45= CMPcdr((V45));
	V52= (V54);}
	V53= Cnil;
	if(((V51))==(Ct)){
	goto T118;}
	V53= (*(LnkLI67))((V52));
	if(!((((((V53))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T128;}
	V46= Ct;
	V53= (*(LnkLI68))((V52));
	goto T128;
T128:;
	if(((V48))!=Cnil){
	goto T135;}
	V48= (V53);
	goto T118;
	goto T135;
T135:;
	if(type_of((V48))==t_cons){
	goto T139;}
	V49= make_cons((V53),Cnil);
	V48= make_cons((V48),(V49));
	goto T118;
	goto T139;
T139:;
	{object V55;
	V55= make_cons((V53),Cnil);
	(V49)->c.c_cdr = V55;
	V49= (V55);}}
	goto T118;
T118:;
	V50= CMPcdr((V50));
	V51= CMPcar((V50));
	goto T108;}
	goto T104;
T104:;
	if(((V47))==Cnil){
	goto T154;}
	base[1]= (base0[0]->c.c_car);
	{object V58;
	V58= (V44);
	 vs_top=base+2;
	 while(V58!=Cnil)
	 {vs_push((V58)->c.c_car);V58=(V58)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T154;
T154:;
	if(((V46))==Cnil){
	goto T159;}
	base[1]= (base0[0]->c.c_car);
	{object V59;
	V59= (V44);
	 vs_top=base+2;
	 while(V59!=Cnil)
	 {vs_push((V59)->c.c_car);V59=(V59)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T159;
T159:;
	{object V60;{object V61;
	V61= (VV[44]->s.s_dbind);
	V62= (VFUN_NARGS=3,(*(LnkLI69))((base0[2]->c.c_car),(V48),(VV[44]->s.s_dbind)));
	V60= ((((V61)==(/* INLINE-ARGS */V62)?Ct:Cnil))==Cnil?Ct:Cnil);}
	if(((V60))==Cnil){
	goto T165;}
	base[1]= (base0[1]->c.c_car);
	base[2]= (V44);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk66)();
	return;
	goto T165;
T165:;
	if(((base0[3]->c.c_car))==Cnil){
	goto T170;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T170;
T170:;
	base[1]= (base0[0]->c.c_car);
	{object V63;
	V63= (V44);
	 vs_top=base+2;
	 while(V63!=Cnil)
	 {vs_push((V63)->c.c_car);V63=(V63)->c.c_cdr;}
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
	{object V64;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V64=(base[0]);
	vs_top=sup;
	{object V65;
	object V66;
	object V67;
	register object V68;
	object V69;
	V65= (V64);
	V66= Cnil;
	V67= Cnil;
	V68= Cnil;
	V69= Cnil;
	{register object V70;
	object V71;
	V70= (base0[3]->c.c_car);
	V71= CMPcar((V70));
	goto T183;
T183:;
	if(!(((V70))==Cnil)){
	goto T184;}
	goto T179;
	goto T184;
T184:;
	if(((V65))!=Cnil){
	goto T188;}
	V67= Ct;
	goto T179;
	goto T188;
T188:;
	{object V72;
	register object V73;
	{object V74;
	V74= CMPcar((V65));
	V65= CMPcdr((V65));
	V72= (V74);}
	V73= Cnil;
	if(((V71))==(Ct)){
	goto T193;}
	V73= (*(LnkLI67))((V72));
	if(!((((((V73))->v.v_self[8])==(Ct)?Ct:Cnil))==Cnil)){
	goto T203;}
	V66= Ct;
	V73= (*(LnkLI68))((V72));
	goto T203;
T203:;
	if(((V68))!=Cnil){
	goto T210;}
	V68= (V73);
	goto T193;
	goto T210;
T210:;
	if(type_of((V68))==t_cons){
	goto T214;}
	V69= make_cons((V73),Cnil);
	V68= make_cons((V68),(V69));
	goto T193;
	goto T214;
T214:;
	{object V75;
	V75= make_cons((V73),Cnil);
	(V69)->c.c_cdr = V75;
	V69= (V75);}}
	goto T193;
T193:;
	V70= CMPcdr((V70));
	V71= CMPcar((V70));
	goto T183;}
	goto T179;
T179:;
	if(((V67))==Cnil){
	goto T229;}
	base[1]= (base0[0]->c.c_car);
	{object V78;
	V78= (V64);
	 vs_top=base+2;
	 while(V78!=Cnil)
	 {vs_push((V78)->c.c_car);V78=(V78)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T229;
T229:;
	if(((V66))==Cnil){
	goto T234;}
	base[1]= (base0[0]->c.c_car);
	{object V79;
	V79= (V64);
	 vs_top=base+2;
	 while(V79!=Cnil)
	 {vs_push((V79)->c.c_car);V79=(V79)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T234;
T234:;
	{object V80;
	V80= (VFUN_NARGS=3,(*(LnkLI69))((base0[1]->c.c_car),(V68),(VV[44]->s.s_dbind)));
	if(!(((V80))==((VV[44]->s.s_dbind)))){
	goto T240;}
	base[1]= (base0[0]->c.c_car);
	{object V81;
	V81= (V64);
	 vs_top=base+2;
	 while(V81!=Cnil)
	 {vs_push((V81)->c.c_car);V81=(V81)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T240;
T240:;
	if(((base0[2]->c.c_car))==Cnil){
	goto T245;}
	base[1]= (V80);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T245;
T245:;
	base[1]= (V80);
	base[2]= (V64);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk66)();
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
	{object V82;
	object V83;
	check_arg(2);
	V82=(base[0]);
	V83=(base[1]);
	vs_top=sup;
	{object V84;
	V84= Cnil;
	{long V85;
	object V86;
	long V87;
	long V88;
	object V89;
	object V90;
	V85= (long)STREF(unsigned char,(base0[2]->c.c_car),16);
	V86= STREF(object,(base0[2]->c.c_car),40);
	V87= (long)STREF(fixnum,(base0[2]->c.c_car),24);
	V88= (long)STREF(fixnum,(base0[2]->c.c_car),28);
	V89= STREF(object,(base0[2]->c.c_car),44);
	if(type_of(V83)==t_structure){
	goto T260;}
	goto T258;
	goto T260;
T260:;
	if(!(((V83)->str.str_def)==(VV[34]))){
	goto T258;}
	V84= STREF(object,(V83),4);
	V90= STREF(object,(V83),0);
	goto T256;
	goto T258;
T258:;{object V92;
	V92= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V83);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V93= vs_base[0];
	if(!((V92)==(CMPcar(V93)))){
	goto T265;}}
	V84= CMPcar(((V83))->cc.cc_turbo[12]);
	V90= CMPcar(((V83))->cc.cc_turbo[13]);
	goto T256;
	goto T265;
T265:;
	goto T250;
	goto T256;
T256:;
	{long V94;
	long V95;
	{long V96;
	V96= fix(((V90))->v.v_self[V85]);
	if(!((V96)==0)){
	goto T275;}
	goto T250;
	goto T275;
T275:;
	V94= (long)((V87) & (V96));}
	V95= V94;
	goto T280;
T280:;
	if(!(((V90))==(((V86))->v.v_self[V95]))){
	goto T282;}
	goto T272;
	goto T282;
T282:;
	V95= (long)(V95)+(1);
	if(!((V95)==(V88))){
	goto T287;}
	V95= 0;
	goto T287;
T287:;
	if(!((V95)==(V94))){
	goto T281;}
	{register object V97;
	object V98;
	V97= (V89);
	V98= CMPcar((V97));
	goto T297;
T297:;
	if(!(((V97))==Cnil)){
	goto T298;}
	goto T293;
	goto T298;
T298:;
	if(!((CMPcar((V98)))==((V90)))){
	goto T302;}
	goto T272;
	goto T302;
T302:;
	V97= CMPcdr((V97));
	V98= CMPcar((V97));
	goto T297;}
	goto T293;
T293:;
	goto T250;
	goto T281;
T281:;
	goto T280;}
	goto T272;
T272:;
	base[2]= ((V84))->v.v_self[fix((base0[1]->c.c_car))]= ((V82));
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T250;
T250:;
	base[2]= (V82);
	base[3]= (V83);
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
	{object V99;
	object V100;
	check_arg(2);
	V99=(base[0]);
	V100=(base[1]);
	vs_top=sup;
	{long V101;
	object V102;
	long V103;
	long V104;
	object V105;
	object V106;
	V101= (long)STREF(unsigned char,(base0[2]->c.c_car),16);
	V102= STREF(object,(base0[2]->c.c_car),40);
	V103= (long)STREF(fixnum,(base0[2]->c.c_car),24);
	V104= (long)STREF(fixnum,(base0[2]->c.c_car),28);
	V105= STREF(object,(base0[2]->c.c_car),44);
	if(type_of(V100)==t_structure){
	goto T325;}
	goto T323;
	goto T325;
T325:;
	if(!(((V100)->str.str_def)==(VV[33]))){
	goto T323;}
	V106= STREF(object,(V100),0);
	goto T321;
	goto T323;
T323:;{object V108;
	V108= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V100);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V109= vs_base[0];
	if(!((V108)==(CMPcar(V109)))){
	goto T328;}}
	V106= CMPcar(((V100))->cc.cc_turbo[13]);
	goto T321;
	goto T328;
T328:;
	goto T315;
	goto T321;
T321:;
	{long V110;
	long V111;
	{long V112;
	V112= fix(((V106))->v.v_self[V101]);
	if(!((V112)==0)){
	goto T336;}
	goto T315;
	goto T336;
T336:;
	V110= (long)((V103) & (V112));}
	V111= V110;
	goto T341;
T341:;
	if(!(((V106))==(((V102))->v.v_self[V111]))){
	goto T343;}
	goto T333;
	goto T343;
T343:;
	V111= (long)(V111)+(1);
	if(!((V111)==(V104))){
	goto T348;}
	V111= 0;
	goto T348;
T348:;
	if(!((V111)==(V110))){
	goto T342;}
	{register object V113;
	object V114;
	V113= (V105);
	V114= CMPcar((V113));
	goto T358;
T358:;
	if(!(((V113))==Cnil)){
	goto T359;}
	goto T354;
	goto T359;
T359:;
	if(!((CMPcar((V114)))==((V106)))){
	goto T363;}
	goto T333;
	goto T363;
T363:;
	V113= CMPcdr((V113));
	V114= CMPcar((V113));
	goto T358;}
	goto T354;
T354:;
	goto T315;
	goto T342;
T342:;
	goto T341;}
	goto T333;
T333:;
	{object V115;
	V115= (base0[1]->c.c_car);
	((V115))->c.c_cdr = V99;
	base[2]= V99;
	vs_top=(vs_base=base+2)+1;
	return;}}
	goto T315;
T315:;
	base[2]= (V99);
	base[3]= (V100);
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
	{object V117;
	object V118;
	check_arg(2);
	V117=(base[0]);
	V118=(base[1]);
	vs_top=sup;
	{object V119;
	object V120;
	V119= Cnil;
	V120= Cnil;
	{long V121;
	object V122;
	long V123;
	long V124;
	object V125;
	object V126;
	V121= (long)STREF(unsigned char,(base0[1]->c.c_car),16);
	V122= STREF(object,(base0[1]->c.c_car),40);
	V123= (long)STREF(fixnum,(base0[1]->c.c_car),24);
	V124= (long)STREF(fixnum,(base0[1]->c.c_car),28);
	V125= STREF(object,(base0[1]->c.c_car),44);
	if(type_of(V118)==t_structure){
	goto T388;}
	goto T386;
	goto T388;
T388:;
	if(!(((V118)->str.str_def)==(VV[32]))){
	goto T386;}
	V119= STREF(object,(V118),4);
	V126= STREF(object,(V118),0);
	goto T384;
	goto T386;
T386:;{object V128;
	V128= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V118);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V129= vs_base[0];
	if(!((V128)==(CMPcar(V129)))){
	goto T393;}}
	V119= CMPcar(((V118))->cc.cc_turbo[12]);
	V126= CMPcar(((V118))->cc.cc_turbo[13]);
	goto T384;
	goto T393;
T393:;
	goto T378;
	goto T384;
T384:;
	{long V130;
	long V131;
	{long V132;
	V132= fix(((V126))->v.v_self[V121]);
	if(!((V132)==0)){
	goto T403;}
	goto T378;
	goto T403;
T403:;
	V130= (long)((V123) & (V132));}
	{object V133;
	V133= ((V122))->v.v_self[0];
	if(type_of((V133))==t_fixnum){
	goto T408;}
	base[2]= VV[27];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T408;
T408:;
	V131= fix((V133));}
	{long V134;
	V134= V130;
	goto T415;
T415:;
	if(!(((V126))==(((V122))->v.v_self[V134]))){
	goto T417;}
	V120= ((V122))->v.v_self[(long)(V134)+1];
	goto T413;
	goto T417;
T417:;
	V134= (long)(V134)+(2);
	if(!((V134)==(V124))){
	goto T424;}
	V134= 0;
	goto T424;
T424:;
	if(!((V134)==(V130))){
	goto T416;}
	{register object V135;
	object V136;
	V135= (V125);
	V136= CMPcar((V135));
	goto T434;
T434:;
	if(!(((V135))==Cnil)){
	goto T435;}
	goto T430;
	goto T435;
T435:;
	if(!((CMPcar((V136)))==((V126)))){
	goto T439;}
	V120= CMPcdr((V136));
	goto T413;
	goto T439;
T439:;
	V135= CMPcdr((V135));
	V136= CMPcar((V135));
	goto T434;}
	goto T430;
T430:;
	goto T378;
	goto T416;
T416:;
	goto T415;
	goto T413;
T413:;
	{object V138;
	V138= ((V122))->v.v_self[0];
	if(type_of((V138))==t_fixnum){
	goto T454;}
	base[2]= VV[27];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T454;
T454:;
	V137= fix((V138));}
	if((V131)==(V137)){
	goto T400;}
	goto T378;}}
	goto T400;
T400:;
	base[2]= ((V119))->v.v_self[fix((V120))]= ((V117));
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T378;
T378:;
	base[2]= (V117);
	base[3]= (V118);
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
	{object V139;
	object V140;
	check_arg(2);
	V139=(base[0]);
	V140=(base[1]);
	vs_top=sup;
	{object V141;
	V141= Cnil;
	{long V142;
	object V143;
	long V144;
	long V145;
	object V146;
	object V147;
	V142= (long)STREF(unsigned char,(base0[1]->c.c_car),16);
	V143= STREF(object,(base0[1]->c.c_car),40);
	V144= (long)STREF(fixnum,(base0[1]->c.c_car),24);
	V145= (long)STREF(fixnum,(base0[1]->c.c_car),28);
	V146= STREF(object,(base0[1]->c.c_car),44);
	if(type_of(V140)==t_structure){
	goto T472;}
	goto T470;
	goto T472;
T472:;
	if(!(((V140)->str.str_def)==(VV[31]))){
	goto T470;}
	V147= STREF(object,(V140),0);
	goto T468;
	goto T470;
T470:;{object V149;
	V149= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V140);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V150= vs_base[0];
	if(!((V149)==(CMPcar(V150)))){
	goto T475;}}
	V147= CMPcar(((V140))->cc.cc_turbo[13]);
	goto T468;
	goto T475;
T475:;
	goto T462;
	goto T468;
T468:;
	{long V151;
	long V152;
	{long V153;
	V153= fix(((V147))->v.v_self[V142]);
	if(!((V153)==0)){
	goto T483;}
	goto T462;
	goto T483;
T483:;
	V151= (long)((V144) & (V153));}
	{object V154;
	V154= ((V143))->v.v_self[0];
	if(type_of((V154))==t_fixnum){
	goto T488;}
	base[2]= VV[27];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T488;
T488:;
	V152= fix((V154));}
	{long V155;
	V155= V151;
	goto T495;
T495:;
	if(!(((V147))==(((V143))->v.v_self[V155]))){
	goto T497;}
	V141= ((V143))->v.v_self[(long)(V155)+1];
	goto T493;
	goto T497;
T497:;
	V155= (long)(V155)+(2);
	if(!((V155)==(V145))){
	goto T504;}
	V155= 0;
	goto T504;
T504:;
	if(!((V155)==(V151))){
	goto T496;}
	{register object V156;
	object V157;
	V156= (V146);
	V157= CMPcar((V156));
	goto T514;
T514:;
	if(!(((V156))==Cnil)){
	goto T515;}
	goto T510;
	goto T515;
T515:;
	if(!((CMPcar((V157)))==((V147)))){
	goto T519;}
	V141= CMPcdr((V157));
	goto T493;
	goto T519;
T519:;
	V156= CMPcdr((V156));
	V157= CMPcar((V156));
	goto T514;}
	goto T510;
T510:;
	goto T462;
	goto T496;
T496:;
	goto T495;
	goto T493;
T493:;
	{object V159;
	V159= ((V143))->v.v_self[0];
	if(type_of((V159))==t_fixnum){
	goto T534;}
	base[2]= VV[27];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	goto T534;
T534:;
	V158= fix((V159));}
	if((V152)==(V158)){
	goto T480;}
	goto T462;}}
	goto T480;
T480:;
	(V141)->c.c_cdr = V139;
	base[2]= V139;
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T462;
T462:;
	base[2]= (V139);
	base[3]= (V140);
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
	{object V162;
	check_arg(1);
	V162=(base[0]);
	vs_top=sup;
	{object V163;
	V163= Cnil;
	{long V164;
	object V165;
	long V166;
	long V167;
	object V168;
	object V169;
	V164= (long)STREF(unsigned char,(base0[2]->c.c_car),16);
	V165= STREF(object,(base0[2]->c.c_car),40);
	V166= (long)STREF(fixnum,(base0[2]->c.c_car),24);
	V167= (long)STREF(fixnum,(base0[2]->c.c_car),28);
	V168= STREF(object,(base0[2]->c.c_car),44);
	if(type_of(V162)==t_structure){
	goto T553;}
	goto T551;
	goto T553;
T553:;
	if(!(((V162)->str.str_def)==(VV[30]))){
	goto T551;}
	V163= STREF(object,(V162),4);
	V169= STREF(object,(V162),0);
	goto T549;
	goto T551;
T551:;{object V171;
	V171= (VV[3]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (V162);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V172= vs_base[0];
	if(!((V171)==(CMPcar(V172)))){
	goto T558;}}
	V163= CMPcar(((V162))->cc.cc_turbo[12]);
	V169= CMPcar(((V162))->cc.cc_turbo[13]);
	goto T549;
	goto T558;
T558:;
	goto T543;
	goto T549;
T549:;
	{long V173;
	long V174;
	{long V175;
	V175= fix(((V169))->v.v_self[V164]);
	if(!((V175)==0)){
	goto T568;}
	goto T543;
	goto T568;
T568:;
	V173= (long)((V166) & (V175));}
	V174= V173;
	goto T573;
T573:;
	if(!(((V169))==(((V165))->v.v_self[V174]))){
	goto T575;}
	goto T565;
	goto T575;
T575:;
	V174= (long)(V174)+(1);
	if(!((V174)==(V167))){
	goto T580;}
	V174= 0;
	goto T580;
T580:;
	if(!((V174)==(V173))){
	goto T574;}
	{register object V176;
	object V177;
	V176= (V168);
	V177= CMPcar((V176));
	goto T590;
T590:;
	if(!(((V176))==Cnil)){
	goto T591;}
	goto T586;
	goto T591;
T591:;
	if(!((CMPcar((V177)))==((V169)))){
	goto T595;}
	goto T565;
	goto T595;
T595:;
	V176= CMPcdr((V176));
	V177= CMPcar((V176));
	goto T590;}
	goto T586;
T586:;
	goto T543;
	goto T574;
T574:;
	goto T573;}
	goto T565;
T565:;
	{object V178;
	V178= ((V163))->v.v_self[fix((base0[1]->c.c_car))];
	if(!(((V178))==((VV[4]->s.s_dbind)))){
	goto T606;}
	base[1]= (V162);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T606;
T606:;
	base[1]= (V178);
	vs_top=(vs_base=base+1)+1;
	return;}}
	goto T543;
T543:;
	base[1]= (V162);
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
	{object V179;
	check_arg(1);
	V179=(base[0]);
	vs_top=sup;
	{long V180;
	object V181;
	long V182;
	long V183;
	object V184;
	object V185;
	V180= (long)STREF(unsigned char,(base0[2]->c.c_car),16);
	V181= STREF(object,(base0[2]->c.c_car),40);
	V182= (long)STREF(fixnum,(base0[2]->c.c_car),24);
	V183= (long)STREF(fixnum,(base0[2]->c.c_car),28);
	V184= STREF(object,(base0[2]->c.c_car),44);
	if(type_of(V179)==t_structure){
	goto T622;}
	goto T620;
	goto T622;
T622:;
	if(!(((V179)->str.str_def)==(VV[29]))){
	goto T620;}
	V185= STREF(object,(V179),0);
	goto T618;
	goto T620;
T620:;{object V187;
	V187= (VV[3]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (V179);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V188= vs_base[0];
	if(!((V187)==(CMPcar(V188)))){
	goto T625;}}
	V185= CMPcar(((V179))->cc.cc_turbo[13]);
	goto T618;
	goto T625;
T625:;
	goto T612;
	goto T618;
T618:;
	{long V189;
	long V190;
	{long V191;
	V191= fix(((V185))->v.v_self[V180]);
	if(!((V191)==0)){
	goto T633;}
	goto T612;
	goto T633;
T633:;
	V189= (long)((V182) & (V191));}
	V190= V189;
	goto T638;
T638:;
	if(!(((V185))==(((V181))->v.v_self[V190]))){
	goto T640;}
	goto T630;
	goto T640;
T640:;
	V190= (long)(V190)+(1);
	if(!((V190)==(V183))){
	goto T645;}
	V190= 0;
	goto T645;
T645:;
	if(!((V190)==(V189))){
	goto T639;}
	{register object V192;
	object V193;
	V192= (V184);
	V193= CMPcar((V192));
	goto T655;
T655:;
	if(!(((V192))==Cnil)){
	goto T656;}
	goto T651;
	goto T656;
T656:;
	if(!((CMPcar((V193)))==((V185)))){
	goto T660;}
	goto T630;
	goto T660;
T660:;
	V192= CMPcdr((V192));
	V193= CMPcar((V192));
	goto T655;}
	goto T651;
T651:;
	goto T612;
	goto T639;
T639:;
	goto T638;}
	goto T630;
T630:;
	{object V194;
	V194= CMPcdr((base0[1]->c.c_car));
	if(!(((V194))==((VV[4]->s.s_dbind)))){
	goto T671;}
	base[1]= (V179);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T671;
T671:;
	base[1]= (V194);
	vs_top=(vs_base=base+1)+1;
	return;}}
	goto T612;
T612:;
	base[1]= (V179);
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
	{object V195;
	check_arg(1);
	V195=(base[0]);
	vs_top=sup;
	{object V196;
	object V197;
	V196= Cnil;
	V197= Cnil;
	{long V198;
	object V199;
	long V200;
	long V201;
	object V202;
	object V203;
	V198= (long)STREF(unsigned char,(base0[1]->c.c_car),16);
	V199= STREF(object,(base0[1]->c.c_car),40);
	V200= (long)STREF(fixnum,(base0[1]->c.c_car),24);
	V201= (long)STREF(fixnum,(base0[1]->c.c_car),28);
	V202= STREF(object,(base0[1]->c.c_car),44);
	if(type_of(V195)==t_structure){
	goto T687;}
	goto T685;
	goto T687;
T687:;
	if(!(((V195)->str.str_def)==(VV[28]))){
	goto T685;}
	V196= STREF(object,(V195),4);
	V203= STREF(object,(V195),0);
	goto T683;
	goto T685;
T685:;{object V205;
	V205= (VV[3]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (V195);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V206= vs_base[0];
	if(!((V205)==(CMPcar(V206)))){
	goto T692;}}
	V196= CMPcar(((V195))->cc.cc_turbo[12]);
	V203= CMPcar(((V195))->cc.cc_turbo[13]);
	goto T683;
	goto T692;
T692:;
	goto T677;
	goto T683;
T683:;
	{long V207;
	long V208;
	{long V209;
	V209= fix(((V203))->v.v_self[V198]);
	if(!((V209)==0)){
	goto T702;}
	goto T677;
	goto T702;
T702:;
	V207= (long)((V200) & (V209));}
	{object V210;
	V210= ((V199))->v.v_self[0];
	if(type_of((V210))==t_fixnum){
	goto T707;}
	base[1]= VV[27];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T707;
T707:;
	V208= fix((V210));}
	{long V211;
	V211= V207;
	goto T714;
T714:;
	if(!(((V203))==(((V199))->v.v_self[V211]))){
	goto T716;}
	V197= ((V199))->v.v_self[(long)(V211)+1];
	goto T712;
	goto T716;
T716:;
	V211= (long)(V211)+(2);
	if(!((V211)==(V201))){
	goto T723;}
	V211= 0;
	goto T723;
T723:;
	if(!((V211)==(V207))){
	goto T715;}
	{register object V212;
	object V213;
	V212= (V202);
	V213= CMPcar((V212));
	goto T733;
T733:;
	if(!(((V212))==Cnil)){
	goto T734;}
	goto T729;
	goto T734;
T734:;
	if(!((CMPcar((V213)))==((V203)))){
	goto T738;}
	V197= CMPcdr((V213));
	goto T712;
	goto T738;
T738:;
	V212= CMPcdr((V212));
	V213= CMPcar((V212));
	goto T733;}
	goto T729;
T729:;
	goto T677;
	goto T715;
T715:;
	goto T714;
	goto T712;
T712:;
	{object V215;
	V215= ((V199))->v.v_self[0];
	if(type_of((V215))==t_fixnum){
	goto T753;}
	base[1]= VV[27];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T753;
T753:;
	V214= fix((V215));}
	if((V208)==(V214)){
	goto T699;}
	goto T677;}}
	goto T699;
T699:;
	{object V216;
	V216= ((V196))->v.v_self[fix((V197))];
	if(!(((V216))==((VV[4]->s.s_dbind)))){
	goto T759;}
	base[1]= (V195);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T759;
T759:;
	base[1]= (V216);
	vs_top=(vs_base=base+1)+1;
	return;}}
	goto T677;
T677:;
	base[1]= (V195);
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
	{object V217;
	check_arg(1);
	V217=(base[0]);
	vs_top=sup;
	{object V218;
	V218= Cnil;
	{long V219;
	object V220;
	long V221;
	long V222;
	object V223;
	object V224;
	V219= (long)STREF(unsigned char,(base0[1]->c.c_car),16);
	V220= STREF(object,(base0[1]->c.c_car),40);
	V221= (long)STREF(fixnum,(base0[1]->c.c_car),24);
	V222= (long)STREF(fixnum,(base0[1]->c.c_car),28);
	V223= STREF(object,(base0[1]->c.c_car),44);
	if(type_of(V217)==t_structure){
	goto T775;}
	goto T773;
	goto T775;
T775:;
	if(!(((V217)->str.str_def)==(VV[26]))){
	goto T773;}
	V224= STREF(object,(V217),0);
	goto T771;
	goto T773;
T773:;{object V226;
	V226= (VV[3]->s.s_dbind);
	base[1]= small_fixnum(14);
	base[2]= (V217);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V227= vs_base[0];
	if(!((V226)==(CMPcar(V227)))){
	goto T778;}}
	V224= CMPcar(((V217))->cc.cc_turbo[13]);
	goto T771;
	goto T778;
T778:;
	goto T765;
	goto T771;
T771:;
	{long V228;
	long V229;
	{long V230;
	V230= fix(((V224))->v.v_self[V219]);
	if(!((V230)==0)){
	goto T786;}
	goto T765;
	goto T786;
T786:;
	V228= (long)((V221) & (V230));}
	{object V231;
	V231= ((V220))->v.v_self[0];
	if(type_of((V231))==t_fixnum){
	goto T791;}
	base[1]= VV[27];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T791;
T791:;
	V229= fix((V231));}
	{long V232;
	V232= V228;
	goto T798;
T798:;
	if(!(((V224))==(((V220))->v.v_self[V232]))){
	goto T800;}
	V218= ((V220))->v.v_self[(long)(V232)+1];
	goto T796;
	goto T800;
T800:;
	V232= (long)(V232)+(2);
	if(!((V232)==(V222))){
	goto T807;}
	V232= 0;
	goto T807;
T807:;
	if(!((V232)==(V228))){
	goto T799;}
	{register object V233;
	object V234;
	V233= (V223);
	V234= CMPcar((V233));
	goto T817;
T817:;
	if(!(((V233))==Cnil)){
	goto T818;}
	goto T813;
	goto T818;
T818:;
	if(!((CMPcar((V234)))==((V224)))){
	goto T822;}
	V218= CMPcdr((V234));
	goto T796;
	goto T822;
T822:;
	V233= CMPcdr((V233));
	V234= CMPcar((V233));
	goto T817;}
	goto T813;
T813:;
	goto T765;
	goto T799;
T799:;
	goto T798;
	goto T796;
T796:;
	{object V236;
	V236= ((V220))->v.v_self[0];
	if(type_of((V236))==t_fixnum){
	goto T837;}
	base[1]= VV[27];
	vs_top=(vs_base=base+1)+1;
	Lerror();
	vs_top=sup;
	goto T837;
T837:;
	V235= fix((V236));}
	if((V229)==(V235)){
	goto T783;}
	goto T765;}}
	goto T783;
T783:;
	{object V237;
	V237= CMPcdr((V218));
	if(!(((V237))==((VV[4]->s.s_dbind)))){
	goto T843;}
	base[1]= (V217);
	vs_top=(vs_base=base+1)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T843;
T843:;
	base[1]= (V237);
	vs_top=(vs_base=base+1)+1;
	return;}}
	goto T765;
T765:;
	base[1]= (V217);
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
	goto T853;}
	goto T851;
	goto T853;
T853:;
	if(!(((V239)->str.str_def)==(VV[20]))){
	goto T851;}
	V240= STREF(object,(V239),4);
	V241= STREF(object,(V239),0);
	goto T849;
	goto T851;
T851:;{object V243;
	V243= (VV[3]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V239);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V244= vs_base[0];
	if(!((V243)==(CMPcar(V244)))){
	goto T858;}}
	V240= CMPcar(((V239))->cc.cc_turbo[12]);
	V241= CMPcar(((V239))->cc.cc_turbo[13]);
	goto T849;
	goto T858;
T858:;
	V241= Cnil;
	goto T849;
T849:;
	if(((V241))==Cnil){
	goto T865;}
	if((fix(((V241))->v.v_self[0]))==0){
	goto T865;}
	if(((V241))==((base0[3]->c.c_car))){
	goto T866;}
	if(((V241))==((base0[2]->c.c_car))){
	goto T866;}
	goto T865;
T865:;
	base[3]= (V238);
	base[4]= (V239);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T866;
T866:;
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
	goto T880;}
	goto T878;
	goto T880;
T880:;
	if(!(((V246)->str.str_def)==(VV[19]))){
	goto T878;}
	V247= STREF(object,(V246),0);
	goto T876;
	goto T878;
T878:;{object V249;
	V249= (VV[3]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V246);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V250= vs_base[0];
	if(!((V249)==(CMPcar(V250)))){
	goto T883;}}
	V247= CMPcar(((V246))->cc.cc_turbo[13]);
	goto T876;
	goto T883;
T883:;
	V247= Cnil;
	goto T876;
T876:;
	if(((V247))==Cnil){
	goto T888;}
	if((fix(((V247))->v.v_self[0]))==0){
	goto T888;}
	if(((V247))==((base0[3]->c.c_car))){
	goto T889;}
	if(((V247))==((base0[2]->c.c_car))){
	goto T889;}
	goto T888;
T888:;
	base[3]= (V245);
	base[4]= (V246);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T889;
T889:;
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
	goto T906;}
	goto T904;
	goto T906;
T906:;
	if(!(((V254)->str.str_def)==(VV[18]))){
	goto T904;}
	V255= STREF(object,(V254),4);
	V256= STREF(object,(V254),0);
	goto T902;
	goto T904;
T904:;{object V258;
	V258= (VV[3]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V254);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V259= vs_base[0];
	if(!((V258)==(CMPcar(V259)))){
	goto T911;}}
	V255= CMPcar(((V254))->cc.cc_turbo[12]);
	V256= CMPcar(((V254))->cc.cc_turbo[13]);
	goto T902;
	goto T911;
T911:;
	V256= Cnil;
	goto T902;
T902:;
	if(((V256))==Cnil){
	goto T918;}
	if((fix(((V256))->v.v_self[0]))==0){
	goto T918;}
	if(((V256))==((base0[2]->c.c_car))){
	goto T919;}
	goto T918;
T918:;
	base[3]= (V253);
	base[4]= (V254);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T919;
T919:;
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
	goto T931;}
	goto T929;
	goto T931;
T931:;
	if(!(((V261)->str.str_def)==(VV[17]))){
	goto T929;}
	V262= STREF(object,(V261),0);
	goto T927;
	goto T929;
T929:;{object V264;
	V264= (VV[3]->s.s_dbind);
	base[3]= small_fixnum(14);
	base[4]= (V261);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V265= vs_base[0];
	if(!((V264)==(CMPcar(V265)))){
	goto T934;}}
	V262= CMPcar(((V261))->cc.cc_turbo[13]);
	goto T927;
	goto T934;
T934:;
	V262= Cnil;
	goto T927;
T927:;
	if(((V262))==Cnil){
	goto T939;}
	if((fix(((V262))->v.v_self[0]))==0){
	goto T939;}
	if(((V262))==((base0[2]->c.c_car))){
	goto T940;}
	goto T939;
T939:;
	base[3]= (V260);
	base[4]= (V261);
	vs_top=(vs_base=base+3)+2;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T940;
T940:;
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
	goto T955;}
	goto T953;
	goto T955;
T955:;
	if(!(((V268)->str.str_def)==(VV[8]))){
	goto T953;}
	V269= STREF(object,(V268),4);
	V270= STREF(object,(V268),0);
	goto T951;
	goto T953;
T953:;{object V273;
	V273= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V268);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V274= vs_base[0];
	if(!((V273)==(CMPcar(V274)))){
	goto T960;}}
	V269= CMPcar(((V268))->cc.cc_turbo[12]);
	V270= CMPcar(((V268))->cc.cc_turbo[13]);
	goto T951;
	goto T960;
T960:;
	V270= Cnil;
	goto T951;
T951:;
	V271= Cnil;
	if(((V270))==Cnil){
	goto T968;}
	if((fix(((V270))->v.v_self[0]))==0){
	goto T968;}
	if(((V270))==((base0[3]->c.c_car))){
	goto T974;}
	if(!(((V270))==((base0[2]->c.c_car)))){
	goto T968;}
	goto T974;
T974:;{object V275;
	V275= (VV[4]->s.s_dbind);
	V271= ((V269))->v.v_self[fix((base0[1]->c.c_car))];
	if(!((V275)==((V271)))){
	goto T969;}}
	goto T968;
T968:;
	base[2]= (V268);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T969;
T969:;
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
	{register object V276;
	check_arg(1);
	V276=(base[0]);
	vs_top=sup;
	{object V277;
	object V278;
	if(type_of(V276)==t_structure){
	goto T985;}
	goto T983;
	goto T985;
T985:;
	if(!(((V276)->str.str_def)==(VV[7]))){
	goto T983;}
	V277= STREF(object,(V276),0);
	goto T981;
	goto T983;
T983:;{object V280;
	V280= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V276);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V281= vs_base[0];
	if(!((V280)==(CMPcar(V281)))){
	goto T988;}}
	V277= CMPcar(((V276))->cc.cc_turbo[13]);
	goto T981;
	goto T988;
T988:;
	V277= Cnil;
	goto T981;
T981:;
	V278= Cnil;
	if(((V277))==Cnil){
	goto T994;}
	if((fix(((V277))->v.v_self[0]))==0){
	goto T994;}
	if(((V277))==((base0[3]->c.c_car))){
	goto T1000;}
	if(!(((V277))==((base0[2]->c.c_car)))){
	goto T994;}
	goto T1000;
T1000:;{object V282;
	V282= (VV[4]->s.s_dbind);
	V278= CMPcdr((base0[1]->c.c_car));
	if(!((V282)==((V278)))){
	goto T995;}}
	goto T994;
T994:;
	base[2]= (V276);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T995;
T995:;
	base[2]= (V278);
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
	{register object V283;
	check_arg(1);
	V283=(base[0]);
	vs_top=sup;
	{object V284;
	object V285;
	object V286;
	V284= Cnil;
	if(type_of(V283)==t_structure){
	goto T1012;}
	goto T1010;
	goto T1012;
T1012:;
	if(!(((V283)->str.str_def)==(VV[5]))){
	goto T1010;}
	V284= STREF(object,(V283),4);
	V285= STREF(object,(V283),0);
	goto T1008;
	goto T1010;
T1010:;{object V288;
	V288= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V283);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V289= vs_base[0];
	if(!((V288)==(CMPcar(V289)))){
	goto T1017;}}
	V284= CMPcar(((V283))->cc.cc_turbo[12]);
	V285= CMPcar(((V283))->cc.cc_turbo[13]);
	goto T1008;
	goto T1017;
T1017:;
	V285= Cnil;
	goto T1008;
T1008:;
	V286= Cnil;
	if(((V285))==Cnil){
	goto T1025;}
	if((fix(((V285))->v.v_self[0]))==0){
	goto T1025;}
	if(!(((V285))==((base0[2]->c.c_car)))){
	goto T1025;}{object V290;
	V290= (VV[4]->s.s_dbind);
	V286= ((V284))->v.v_self[fix((base0[1]->c.c_car))];
	if(!((V290)==((V286)))){
	goto T1026;}}
	goto T1025;
T1025:;
	base[2]= (V283);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1026;
T1026:;
	base[2]= (V286);
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
	{register object V291;
	check_arg(1);
	V291=(base[0]);
	vs_top=sup;
	{object V292;
	object V293;
	if(type_of(V291)==t_structure){
	goto T1040;}
	goto T1038;
	goto T1040;
T1040:;
	if(!(((V291)->str.str_def)==(VV[1]))){
	goto T1038;}
	V292= STREF(object,(V291),0);
	goto T1036;
	goto T1038;
T1038:;{object V295;
	V295= (VV[3]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V291);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V296= vs_base[0];
	if(!((V295)==(CMPcar(V296)))){
	goto T1043;}}
	V292= CMPcar(((V291))->cc.cc_turbo[13]);
	goto T1036;
	goto T1043;
T1043:;
	V292= Cnil;
	goto T1036;
T1036:;
	V293= Cnil;
	if(((V292))==Cnil){
	goto T1049;}
	if((fix(((V292))->v.v_self[0]))==0){
	goto T1049;}
	if(!(((V292))==((base0[2]->c.c_car)))){
	goto T1049;}{object V297;
	V297= (VV[4]->s.s_dbind);
	V293= CMPcdr((base0[1]->c.c_car));
	if(!((V297)==((V293)))){
	goto T1050;}}
	goto T1049;
T1049:;
	base[2]= (V291);
	vs_top=(vs_base=base+2)+1;
	{object _funobj = (base0[0]->c.c_car);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	goto T1050;
T1050:;
	base[2]= (V293);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
static object  LnkTLI71(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[71],(void **)(void *)&LnkLI71,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static void LnkT70(){ call_or_link(VV[70],(void **)(void *)&Lnk70);} /* CCLOSURE-ENV-NTHCDR */
static object  LnkTLI69(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[69],(void **)(void *)&LnkLI69,first,ap);va_end(ap);return V1;} /* PROBE-CACHE */
static object  LnkTLI68(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[68],(void **)(void *)&LnkLI68,1,first,ap);va_end(ap);return V1;} /* CHECK-WRAPPER-VALIDITY */
static object  LnkTLI67(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[67],(void **)(void *)&LnkLI67,1,first,ap);va_end(ap);return V1;} /* WRAPPER-OF */
static void LnkT66(){ call_or_link(VV[66],(void **)(void *)&Lnk66);} /* INVOKE-EMF */
static object  LnkTLI64(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[64],(void **)(void *)&LnkLI64,4,first,ap);va_end(ap);return V1;} /* EMIT-CHECKING-OR-CACHING-FUNCTION-PRELIMINARY */
static void LnkT50(){ call_or_link(VV[50],(void **)(void *)&Lnk50);} /* ERROR */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

