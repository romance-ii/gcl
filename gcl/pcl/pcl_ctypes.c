
#include "cmpinclude.h"
#include "pcl_ctypes.h"
void init_pcl_ctypes(){do_init(VV);}
/*	function definition for (DEFINE-METHOD-COMBINATION +)9081	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[0];
	base[1]= VV[0];
	base[2]= Ct;
	base[3]= VV[1];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk10)();
	return;
}
/*	function definition for (DEFINE-METHOD-COMBINATION AND)9081	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[2];
	base[1]= VV[2];
	base[2]= Ct;
	base[3]= VV[1];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk10)();
	return;
}
/*	function definition for (DEFINE-METHOD-COMBINATION APPEND)9081	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[3];
	base[1]= VV[3];
	base[2]= Cnil;
	base[3]= VV[1];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk10)();
	return;
}
/*	function definition for (DEFINE-METHOD-COMBINATION LIST)9081	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[4];
	base[1]= VV[4];
	base[2]= Cnil;
	base[3]= VV[1];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk10)();
	return;
}
/*	function definition for (DEFINE-METHOD-COMBINATION MAX)9081	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[5];
	base[1]= VV[5];
	base[2]= Ct;
	base[3]= VV[1];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk10)();
	return;
}
/*	function definition for (DEFINE-METHOD-COMBINATION MIN)9081	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[6];
	base[1]= VV[6];
	base[2]= Ct;
	base[3]= VV[1];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk10)();
	return;
}
/*	function definition for (DEFINE-METHOD-COMBINATION NCONC)9081	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[7];
	base[1]= VV[7];
	base[2]= Ct;
	base[3]= VV[1];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk10)();
	return;
}
/*	function definition for (DEFINE-METHOD-COMBINATION OR)9081	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[8];
	base[1]= VV[8];
	base[2]= Ct;
	base[3]= VV[1];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk10)();
	return;
}
/*	function definition for (DEFINE-METHOD-COMBINATION PROGN)9081	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[9];
	base[1]= VV[9];
	base[2]= Ct;
	base[3]= VV[1];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk10)();
	return;
}
static void LnkT10(){ call_or_link(VV[10],(void **)(void *)&Lnk10);} /* LOAD-SHORT-DEFCOMBIN */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

