
#include "cmpinclude.h"
#include "pcl_fsc.h"
void init_pcl_fsc(){do_init(VV);}
/*	local entry for function (FAST-METHOD WRAPPER-FETCHER (FUNCALLABLE-STANDARD-CLASS))	*/

static object LI1(V4,V5,V6)

object V4;object V5;object V6;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	{object V8 = VV[0];
	VMR1(V8)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD SLOTS-FETCHER (FUNCALLABLE-STANDARD-CLASS))	*/

static object LI2(V12,V13,V14)

object V12;object V13;object V14;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{object V16 = VV[1];
	VMR2(V16)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD RAW-INSTANCE-ALLOCATOR (FUNCALLABLE-STANDARD-CLASS))	*/

static object LI3(V20,V21,V22)

object V20;object V21;object V22;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V24 = VV[2];
	VMR3(V24)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD VALIDATE-SUPERCLASS (FUNCALLABLE-STANDARD-CLASS STANDARD-CLASS))	*/

static object LI4(V29,V30,V31,V32)

object V29;object V30;object V31;object V32;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{object V34 = Ct;
	VMR4(V34)}
	return Cnil;
}
/*	local entry for function (FAST-METHOD ALLOCATE-INSTANCE (FUNCALLABLE-STANDARD-CLASS))	*/

static object LI5(V39,V40,V41,V42)

object V39;object V40;register object V41;object V42;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	base[0]= (V41);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk3)(Lclptr3);
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T17;}
	base[0]= (V41);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk4)(Lclptr4);
	vs_top=sup;
	goto T17;
T17:;
	base[0]= (V41);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk5)(Lclptr5);
	vs_top=sup;
	V45= vs_base[0];
	{object V46 = (VFUN_NARGS=1,(*(LnkLI2))(V45));
	VMR5(V46)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-READER-METHOD-FUNCTION (FUNCALLABLE-STANDARD-CLASS T))	*/

static object LI6(V51,V52,V53,V54)

object V51;object V52;object V53;object V54;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	base[0]= (V53);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk7)(Lclptr7);
	vs_top=sup;
	V56= vs_base[0];
	{object V57 = (*(LnkLI6))(V56,(V54));
	VMR6(V57)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function (FAST-METHOD MAKE-WRITER-METHOD-FUNCTION (FUNCALLABLE-STANDARD-CLASS T))	*/

static object LI7(V62,V63,V64,V65)

object V62;object V63;object V64;object V65;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	base[0]= (V64);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk7)(Lclptr7);
	vs_top=sup;
	V67= vs_base[0];
	{object V68 = (*(LnkLI8))(V67,(V65));
	VMR7(V68)}
	base[0]=base[0];
	return Cnil;
}
static object  LnkTLI8(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[8],(void **)(void *)&LnkLI8,2,first,ap);va_end(ap);return V1;} /* MAKE-STD-WRITER-METHOD-FUNCTION */
static void LnkT7(ptr) object *ptr;{ call_or_link_closure(VV[7],(void **)(void *)&Lnk7,(void **)(void *)&Lclptr7);} /* CLASS-NAME */
static object  LnkTLI6(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[6],(void **)(void *)&LnkLI6,2,first,ap);va_end(ap);return V1;} /* MAKE-STD-READER-METHOD-FUNCTION */
static void LnkT5(ptr) object *ptr;{ call_or_link_closure(VV[5],(void **)(void *)&Lnk5,(void **)(void *)&Lclptr5);} /* CLASS-WRAPPER */
static object  LnkTLI2(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[2],(void **)(void *)&LnkLI2,first,ap);va_end(ap);return V1;} /* ALLOCATE-FUNCALLABLE-INSTANCE */
static void LnkT4(ptr) object *ptr;{ call_or_link_closure(VV[4],(void **)(void *)&Lnk4,(void **)(void *)&Lclptr4);} /* FINALIZE-INHERITANCE */
static void LnkT3(ptr) object *ptr;{ call_or_link_closure(VV[3],(void **)(void *)&Lnk3,(void **)(void *)&Lclptr3);} /* CLASS-FINALIZED-P */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

