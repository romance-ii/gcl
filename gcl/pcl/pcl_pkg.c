
#include "cmpinclude.h"
#include "pcl_pkg.h"
void init_pcl_pkg(){do_init(VV);}
/*	local entry for function USE-PACKAGE-PCL	*/

static object LI1(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	bds_check;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T1;
	else {
	bds_bind(VV[0],first);}
	--narg; goto T2;
	goto T1;
T1:;
	bds_bind(VV[0],(VV[0]->s.s_dbind));
	goto T2;
T2:;
	bds_bind(VV[0],(VV[1]->s.s_dbind));
	{object V1;
	object V2= Cnil;
	if(V2==Cnil){
	bds_unwind1;
	base[0]= Cnil;
	goto T5;}
	base[2]=V1=MMcons(Cnil,Cnil);
	goto T6;
T6:;
	base[3]= (V2->c.c_car);
	vs_top=(vs_base=base+3)+1;
	Lintern();
	vs_top=sup;
	(V1->c.c_car)= vs_base[0];
	if((V2=MMcdr(V2))==Cnil){
	bds_unwind1;
	base[0]= base[2];
	goto T5;}
	V1=MMcdr(V1)=MMcons(Cnil,Cnil);
	goto T6;}
	goto T5;
T5:;
	vs_top=(vs_base=base+0)+1;
	Lshadowing_import();
	vs_top=sup;
	base[0]= (VV[1]->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	Luse_package();
	vs_top=sup;
	{object V3 = vs_base[0];
	bds_unwind1;
	VMR1(V3)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

