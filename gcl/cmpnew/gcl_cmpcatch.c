
#include "cmpinclude.h"
#include "gcl_cmpcatch.h"
void init_gcl_cmpcatch(){do_init(VV);}
/*	local entry for function C1CATCH	*/

static object LI1(V2)

register object V2;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	{object V3;
	object V4;
	V3= (VFUN_NARGS=2,(*(LnkLI23))(VV[0],Ct));
	V4= Cnil;
	(VV[1]->s.s_dbind)= number_plus((VV[1]->s.s_dbind),small_fixnum(1));
	if(!(((V2))==Cnil)){
	goto T5;}
	(void)((*(LnkLI24))(VV[2],small_fixnum(1),small_fixnum(0)));
	goto T5;
T5:;
	V4= (*(LnkLI25))(CMPcar((V2)));
	(void)((*(LnkLI26))((V3),CMPcadr((V4))));
	V2= (*(LnkLI27))(CMPcdr((V2)));
	(void)((*(LnkLI26))((V3),CMPcadr((V2))));
	{object V5 = list(4,VV[2],(V3),(V4),(V2));
	VMR1(V5)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2CATCH	*/

static object LI2(V8,V9)

object V8;object V9;
{	 VMB2 VMS2 VMV2
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[3],(VV[3]->s.s_dbind));
	bds_bind(VV[4],VV[5]);
	V10= (*(LnkLI28))((V8));
	bds_unwind1;
	princ_str("\n	if(nlj_active)",VV[6]);
	princ_str("\n	{nlj_active=FALSE;frs_pop();",VV[6]);
	(void)((VFUN_NARGS=2,(*(LnkLI29))(VV[7],VV[8])));
	princ_char(125,VV[6]);
	princ_str("\n	else{",VV[6]);
	base[1]= make_cons(VV[10],(VV[9]->s.s_dbind));
	bds_bind(VV[9],base[1]);
	base[2]= (V9);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk30)();
	vs_top=sup;
	bds_unwind1;
	princ_char(125,VV[6]);
	{object V11 = Cnil;
	bds_unwind1;
	VMR2(V11)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-PUSH-CATCH-FRAME	*/

static object LI3(V13)

object V13;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	princ_str("\n	frs_push(FRS_CATCH,",VV[6]);
	(void)((*(LnkLI31))((V13)));
	princ_str(");",VV[6]);
	{object V14 = Cnil;
	VMR3(V14)}
	return Cnil;
}
/*	local entry for function C1UNWIND-PROTECT	*/

static object LI4(V16)

register object V16;
{	 VMB4 VMS4 VMV4
	bds_check;
	goto TTL;
TTL:;
	{object V17;
	object V18;
	V17= (VFUN_NARGS=2,(*(LnkLI23))(VV[0],Ct));
	V18= Cnil;
	(VV[1]->s.s_dbind)= number_plus((VV[1]->s.s_dbind),small_fixnum(1));
	if(!(((V16))==Cnil)){
	goto T35;}
	(void)((*(LnkLI24))(VV[11],small_fixnum(1),small_fixnum(0)));
	goto T35;
T35:;
	base[1]= make_cons(VV[13],(VV[12]->s.s_dbind));
	base[2]= make_cons(VV[13],(VV[14]->s.s_dbind));
	base[3]= make_cons(VV[13],(VV[15]->s.s_dbind));
	bds_bind(VV[12],base[1]);
	bds_bind(VV[14],base[2]);
	bds_bind(VV[15],base[3]);
	V19= (*(LnkLI25))(CMPcar((V16)));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V18= V19;
	(void)((*(LnkLI26))((V17),CMPcadr((V18))));
	V16= (*(LnkLI27))(CMPcdr((V16)));
	(void)((*(LnkLI26))((V17),CMPcadr((V16))));
	{object V20 = list(4,VV[11],(V17),(V18),(V16));
	VMR4(V20)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2UNWIND-PROTECT	*/

static object LI5(V23,V24)

object V23;object V24;
{	 VMB5 VMS5 VMV5
	bds_check;
	goto TTL;
TTL:;
	{register object V25;
	object V26;
	bds_bind(VV[3],(VV[3]->s.s_dbind));
	V25= list(2,VV[16],(*(LnkLI32))());
	V26= Cnil;
	princ_str("\n	frs_push(FRS_PROTECT,Cnil);",VV[6]);
	princ_str("\n	{object tag=Cnil;frame_ptr fr=NULL;object p;bool active;",VV[6]);
	princ_str("\n	if(nlj_active){tag=nlj_tag;fr=nlj_fr;active=TRUE;}",VV[6]);
	princ_str("\n	else{",VV[6]);
	bds_bind(VV[4],VV[17]);
	bds_bind(VV[18],Cnil);
	(void)((*(LnkLI28))((V23)));
	V26= (VV[18]->s.s_dbind);
	bds_unwind1;
	bds_unwind1;
	princ_str("\n	active=FALSE;}",VV[6]);
	princ_str("\n	",VV[6]);
	(void)((*(LnkLI31))((V25)));
	princ_str("=Cnil;",VV[6]);
	princ_str("\n	while(vs_base<vs_top)",VV[6]);
	princ_str("\n	{",VV[6]);
	(void)((*(LnkLI31))((V25)));
	princ_str("=MMcons(vs_top[-1],",VV[6]);
	(void)((*(LnkLI31))((V25)));
	princ_str(");vs_top--;}",VV[6]);
	princ_str("\n	",VV[6]);
	(void)((*(LnkLI33))());
	princ_str("\n	nlj_active=FALSE;frs_pop();",VV[6]);
	bds_bind(VV[4],VV[19]);
	V27= (*(LnkLI28))((V24));
	bds_unwind1;
	princ_str("\n	vs_base=vs_top=base+",VV[6]);
	(void)((*(LnkLI31))((VV[3]->s.s_dbind)));
	princ_char(59,VV[6]);
	(VV[20]->s.s_dbind)= Ct;
	princ_str("\n	for(p= ",VV[6]);
	(void)((*(LnkLI31))((V25)));
	princ_str(";!endp(p);p=MMcdr(p))vs_push(MMcar(p));",VV[6]);
	princ_str("\n	if(active)unwind(fr,tag);else{",VV[6]);
	if(((V26))==Cnil){
	goto T94;}
	V28= CMPcar((V26));
	goto T92;
	goto T94;
T94:;
	V28= Cnil;
	goto T92;
T92:;
	(void)((VFUN_NARGS=3,(*(LnkLI29))(VV[7],Cnil,V28)));
	princ_str("}}",VV[6]);
	{object V29 = Cnil;
	bds_unwind1;
	VMR5(V29)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1THROW	*/

static object LI6(V31)

register object V31;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{object V32;
	object V33;
	V32= (VFUN_NARGS=0,(*(LnkLI23))());
	V33= Cnil;
	if(((V31))==Cnil){
	goto T100;}
	if(!((CMPcdr((V31)))==Cnil)){
	goto T99;}
	goto T100;
T100:;
	V34 = CMPmake_fixnum((long)length((V31)));
	(void)((*(LnkLI24))(VV[21],small_fixnum(2),V34));
	goto T99;
T99:;
	if((CMPcddr((V31)))==Cnil){
	goto T104;}
	V35 = CMPmake_fixnum((long)length((V31)));
	(void)((*(LnkLI34))(VV[21],small_fixnum(2),V35));
	goto T104;
T104:;
	V33= (*(LnkLI25))(CMPcar((V31)));
	(void)((*(LnkLI26))((V32),CMPcadr((V33))));
	V31= (*(LnkLI25))(CMPcadr((V31)));
	(void)((*(LnkLI26))((V32),CMPcadr((V31))));
	{object V36 = list(4,VV[21],(V32),(V33),(V31));
	VMR6(V36)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2THROW	*/

static object LI7(V39,V40)

register object V39;object V40;
{	 VMB7 VMS7 VMV7
	bds_check;
	goto TTL;
TTL:;
	{register object V41;
	bds_bind(VV[3],(VV[3]->s.s_dbind));
	V41= Cnil;
	princ_str("\n	{frame_ptr fr;",VV[6]);
	{object V42= CMPcar((V39));
	if((V42!= VV[35]))goto T117;
	V41= CMPcaddr((V39));
	goto T116;
	goto T117;
T117:;
	if((V42!= VV[22]))goto T119;
	V41= make_cons(VV[22],CMPcaddr((V39)));
	goto T116;
	goto T119;
T119:;
	V41= list(2,VV[16],(*(LnkLI32))());
	bds_bind(VV[4],(V41));
	V43= (*(LnkLI28))((V39));
	bds_unwind1;}
	goto T116;
T116:;
	princ_str("\n	fr=frs_sch_catch(",VV[6]);
	(void)((*(LnkLI31))((V41)));
	princ_str(");",VV[6]);
	princ_str("\n	if(fr==NULL) FEerror(\"The tag ~s is undefined.\",1,",VV[6]);
	(void)((*(LnkLI31))((V41)));
	princ_str(");",VV[6]);
	bds_bind(VV[4],VV[17]);
	V44= (*(LnkLI28))((V40));
	bds_unwind1;
	princ_str("\n	unwind(fr,",VV[6]);
	(void)((*(LnkLI31))((V41)));
	princ_str(");}",VV[6]);
	{object V45 = Cnil;
	bds_unwind1;
	VMR7(V45)}}
	base[0]=base[0];
	return Cnil;
}
static object  LnkTLI34(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[34],(void **)(void *)&LnkLI34,3,first,ap);va_end(ap);return V1;} /* TOO-MANY-ARGS */
static object  LnkTLI33(){return call_proc0(VV[33],(void **)(void *)&LnkLI33);} /* RESET-TOP */
static object  LnkTLI32(){return call_proc0(VV[32],(void **)(void *)&LnkLI32);} /* VS-PUSH */
static object  LnkTLI31(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[31],(void **)(void *)&LnkLI31,1,first,ap);va_end(ap);return V1;} /* WT1 */
static void LnkT30(){ call_or_link(VV[30],(void **)(void *)&Lnk30);} /* C2EXPR */
static object  LnkTLI29(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[29],(void **)(void *)&LnkLI29,first,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI28(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[28],(void **)(void *)&LnkLI28,1,first,ap);va_end(ap);return V1;} /* C2EXPR* */
static object  LnkTLI27(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[27],(void **)(void *)&LnkLI27,1,first,ap);va_end(ap);return V1;} /* C1PROGN */
static object  LnkTLI26(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[26],(void **)(void *)&LnkLI26,2,first,ap);va_end(ap);return V1;} /* ADD-INFO */
static object  LnkTLI25(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[25],(void **)(void *)&LnkLI25,1,first,ap);va_end(ap);return V1;} /* C1EXPR */
static object  LnkTLI24(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[24],(void **)(void *)&LnkLI24,3,first,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */
static object  LnkTLI23(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[23],(void **)(void *)&LnkLI23,first,ap);va_end(ap);return V1;} /* MAKE-INFO */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

