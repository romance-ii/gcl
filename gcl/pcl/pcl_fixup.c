
#include "cmpinclude.h"
#include "pcl_fixup.h"
void init_pcl_fixup(){do_init(VV);}
/*	local entry for function PRINT-STD-INSTANCE	*/

static object LI1(V4,V5,V6)

object V4;object V5;object V6;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= (V4);
	base[1]= (V5);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk0)(Lclptr0);
	vs_top=sup;
	{object V7 = vs_base[0];
	VMR1(V7)}
	base[0]=base[0];
	return Cnil;
}
static void LnkT0(ptr) object *ptr;{ call_or_link_closure(VV[0],(void **)(void *)&Lnk0,(void **)(void *)&Lclptr0);} /* PRINT-OBJECT */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

