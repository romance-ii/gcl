
#include "cmpinclude.h"
#include "pcl_fin.h"
void init_pcl_fin(){do_init(VV);}
/*	macro definition for FUNCALLABLE-INSTANCE-DATA-POSITION	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	if(endp(V1))invalid_macro_call();
	base[2]= (V1->c.c_car);
	V1=V1->c.c_cdr;
	if(!endp(V1))invalid_macro_call();}
	if(!(type_of(base[2])==t_cons)){
	goto T2;}
	if(!((CMPcar(base[2]))==(VV[0]))){
	goto T2;}{object V2;
	base[3]= CMPcadr(base[2]);
	base[4]= VV[1];
	base[5]= VV[2];
	base[6]= (VV[26]->s.s_gfdef);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk6)();
	vs_top=sup;
	V2= vs_base[0];
	if(V2==Cnil)goto T6;
	base[3]= V2;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T6;
T6:;}
	base[3]= VV[3];
	base[4]= CMPcadr(base[2]);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk27)();
	vs_top=sup;
	base[3]= list(3,VV[4],VV[5],list(2,VV[0],CMPcadr(base[2])));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2;
T2:;
	base[3]= listA(3,VV[6],base[2],VV[7]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function CALLED-FIN-WITHOUT-FUNCTION	*/

static object LI2(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB2 VMS2 VMV2
	{object V3;
	Vcs[0]=Vcs[0];
	va_start(ap,first);
	narg= narg - 0;
	V4 = list_vector_new(narg,first,ap);
	V3= V4;
	base[0]= VV[8];
	vs_top=(vs_base=base+0)+1;
	Lerror();
	vs_top=sup;
	{object V5 = vs_base[0];
	VMR2(V5)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for FUNCALLABLE-INSTANCE-MARKER	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V6=base[0]->c.c_cdr;
	if(endp(V6))invalid_macro_call();
	base[2]= (V6->c.c_car);
	V6=V6->c.c_cdr;
	if(!endp(V6))invalid_macro_call();}
	base[3]= list(2,VV[9],list(3,VV[10],VV[11],base[2]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function ALLOCATE-FUNCALLABLE-INSTANCE-1	*/

static object LI4()

{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{register object V7;
	object V8;
	V7= (*(LnkLI28))();
	base[0]= small_fixnum(15);
	base[1]= VV[12];
	base[2]= Cnil;
	vs_top=(vs_base=base+0)+3;
	Lmake_list();
	vs_top=sup;
	V8= vs_base[0];
	(void)((((V7))->cc.cc_env)=((V8)));
	base[0]= (V7);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk30)();
	vs_top=sup;
	{object V9;
	object V10;
	base[1]= small_fixnum(14);
	base[2]= (V7);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk10)();
	vs_top=sup;
	V9= vs_base[0];
	V10= (VV[13]->s.s_dbind);
	((V9))->c.c_car = (V10);}
	{object V11 = (V7);
	VMR4(V11)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ALLOCATE-FUNCALLABLE-INSTANCE-2	*/

static object LI5()

{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	base[0]=MMcons(Cnil,Cnil);
	{object V12 = 
	make_cclosure_new(LC14,Cnil,base[0],Cdata);
	VMR5(V12)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FUNCALLABLE-INSTANCE-P	*/

static object LI6(V14)

object V14;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;{object V15;
	V15= (VV[13]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V14);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk10)();
	vs_top=sup;
	V16= vs_base[0];
	{object V17 = ((V15)==(CMPcar(V16))?Ct:Cnil);
	VMR6(V17)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-FUNCALLABLE-INSTANCE-FUNCTION	*/

static object LI7(V20,V21)

register object V20;register object V21;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	if(((*(LnkLI20))((V20)))!=Cnil){
	goto T35;}
	base[0]= VV[14];
	base[1]= (V20);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T33;
	goto T35;
T35:;
	base[0]= (V21);
	vs_top=(vs_base=base+0)+1;
	Lfunctionp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T40;}
	base[0]= VV[15];
	base[1]= (V21);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	goto T33;
	goto T40;
T40:;
	if(!(type_of((V21))==t_cclosure)){
	goto T46;}
	if(!(((long)length(((V21))->cc.cc_env))<=(12))){
	goto T46;}
	base[0]= (V20);
	base[1]= (V21);
	base[2]= small_fixnum(12);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T33;
	goto T46;
T46:;
	base[0]= (V21);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk35)();
	vs_top=sup;
	V22= vs_base[0];
	(void)((*(LnkLI34))((V20),V22));
	goto T33;
T33:;
	{object V23 = (V20);
	VMR7(V23)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for FUNCALLABLE-INSTANCE-DATA-1	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V24=base[0]->c.c_cdr;
	if(endp(V24))invalid_macro_call();
	base[2]= (V24->c.c_car);
	V24=V24->c.c_cdr;
	if(endp(V24))invalid_macro_call();
	base[3]= (V24->c.c_car);
	V24=V24->c.c_cdr;
	if(!endp(V24))invalid_macro_call();}
	{object V25;
	object V26;
	base[6]= list(2,VV[16],base[3]);
	base[7]= base[1];
	vs_top=(vs_base=base+6)+2;
	Lmacroexpand();
	vs_top=sup;
	V25= vs_base[0];
	base[6]= (V25);
	vs_top=(vs_base=base+6)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T60;}
	base[6]= small_fixnum(15);
	base[8]= (V25);
	vs_top=(vs_base=base+8)+1;
	Leval();
	vs_top=sup;
	base[7]= vs_base[0];
	base[8]= small_fixnum(2);
	vs_top=(vs_base=base+6)+3;
	Lminus();
	vs_top=sup;
	V26= vs_base[0];
	goto T58;
	goto T60;
T60:;
	V26= list(4,VV[17],VV[18],list(2,VV[16],base[3]),small_fixnum(2));
	goto T58;
T58:;
	base[6]= list(2,VV[9],list(3,VV[19],(V26),base[2]));
	vs_top=(vs_base=base+6)+1;
	return;}
}
#define TURBO_CLOSURE

static void make_trampoline_internal();
static void make_turbo_trampoline_internal();

static object
make_trampoline(function)
     object function;
{
  vs_push(MMcons(function,Cnil));
#ifdef TURBO_CLOSURE
  if(type_of(function)==t_cclosure)
    {if(function->cc.cc_turbo==NULL)turbo_closure(function);
     vs_head=make_cclosure(make_turbo_trampoline_internal,Cnil,vs_head,Cnil,NULL,0);
     return vs_pop;}
#endif
  vs_head=make_cclosure(make_trampoline_internal,Cnil,vs_head,Cnil,NULL,0);
  return vs_pop;
}

static void
make_trampoline_internal(base0)
     object *base0;
{super_funcall_no_event(base0[0]->c.c_car);}

static void
make_turbo_trampoline_internal(base0)
     object *base0;
{ object function=base0[0]->c.c_car;
  (*function->cc.cc_self)(function->cc.cc_turbo);
}


/*	function definition for MAKE-TRAMPOLINE	*/

static void L9()
{	object *old_base=vs_base;
	object x;
	x=
	make_trampoline(
	vs_base[0]);
	vs_top=(vs_base=old_base)+1;
	vs_base[0]=x;
}
/*	macro definition for FSC-INSTANCE-P	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V27=base[0]->c.c_cdr;
	if(endp(V27))invalid_macro_call();
	base[2]= (V27->c.c_car);
	V27=V27->c.c_cdr;
	if(!endp(V27))invalid_macro_call();}
	base[3]= list(2,VV[20],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for FSC-INSTANCE-CLASS	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V28=base[0]->c.c_cdr;
	if(endp(V28))invalid_macro_call();
	base[2]= (V28->c.c_car);
	V28=V28->c.c_cdr;
	if(!endp(V28))invalid_macro_call();}
	base[3]= list(2,VV[21],list(3,VV[22],base[2],VV[23]));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for FSC-INSTANCE-WRAPPER	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V29=base[0]->c.c_cdr;
	if(endp(V29))invalid_macro_call();
	base[2]= (V29->c.c_car);
	V29=V29->c.c_cdr;
	if(!endp(V29))invalid_macro_call();}
	base[3]= list(3,VV[22],base[2],VV[24]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	macro definition for FSC-INSTANCE-SLOTS	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V30=base[0]->c.c_cdr;
	if(endp(V30))invalid_macro_call();
	base[2]= (V30->c.c_car);
	V30=V30->c.c_cdr;
	if(!endp(V30))invalid_macro_call();}
	base[3]= list(3,VV[22],base[2],VV[25]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC14(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V31;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V31=(base[0]);
	vs_top=sup;
	(void)simple_symlispcall(VV[36],base+1,0);
	base[1]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk37)();
	vs_top=sup;
	(base0[0]->c.c_car)= vs_base[0];
	base[1]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT37(){ call_or_link(VV[37],(void **)(void *)&Lnk37);} /* DUMMY-FUNCTION */
static void LnkT35(){ call_or_link(VV[35],(void **)(void *)&Lnk35);} /* MAKE-TRAMPOLINE */
static object  LnkTLI34(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[34],(void **)(void *)&LnkLI34,2,first,ap);va_end(ap);return V1;} /* SET-FUNCALLABLE-INSTANCE-FUNCTION */
static void LnkT33(){ call_or_link(VV[33],(void **)(void *)&Lnk33);} /* %SET-CCLOSURE */
static object  LnkTLI32(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[32],(void **)(void *)&LnkLI32,1,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV */
static object  LnkTLI31(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[31],(void **)(void *)&LnkLI31,1,first,ap);va_end(ap);return V1;} /* CCLOSUREP */
static object  LnkTLI20(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[20],(void **)(void *)&LnkLI20,1,first,ap);va_end(ap);return V1;} /* FUNCALLABLE-INSTANCE-P */
static void LnkT10(){ call_or_link(VV[10],(void **)(void *)&Lnk10);} /* CCLOSURE-ENV-NTHCDR */
static void LnkT30(){ call_or_link(VV[30],(void **)(void *)&Lnk30);} /* TURBO-CLOSURE */
static object  LnkTLI29(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[29],(void **)(void *)&LnkLI29,2,first,ap);va_end(ap);return V1;} /* %SET-CCLOSURE-ENV */
static object  LnkTLI28(){return call_proc0(VV[28],(void **)(void *)&LnkLI28);} /* ALLOCATE-FUNCALLABLE-INSTANCE-2 */
static void LnkT27(){ call_or_link(VV[27],(void **)(void *)&Lnk27);} /* WARN */
static void LnkT6(){ call_or_link(VV[6],(void **)(void *)&Lnk6);} /* POSITION */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

