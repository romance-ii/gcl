
#include "cmpinclude.h"
#include "pcl_gazonk4.h"
void init_pcl_gazonk4(){do_init(VV);}
/*	function definition for CMP-ANON	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	check_arg(2);
	base[0]=MMcons(base[0],Cnil);
	base[1]=MMcons(base[1],base[0]);
	vs_top=sup;
	base[2]= 
	make_cclosure_new(LC2,Cnil,base[1],Cdata);
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC2(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{object V1;
	object V2;
	object V3;
	object V4;
	object V5;
	check_arg(5);
	V1=(base[0]);
	V2=(base[1]);
	V3=(base[2]);
	V4=(base[3]);
	V5=(base[4]);
	vs_top=sup;
	base[5]= (base0[1]->c.c_car);
	base[6]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+5)+2;
	Lerror();
	return;
	}
}

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

