
#include "cmpinclude.h"
#include "gcl_cmpbind.h"
void init_gcl_cmpbind(){do_init(VV);}
/*	local entry for function C2BIND	*/

static object LI1(V2)

register object V2;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	{object V3= STREF(object,(V2),4);
	if((V3!= VV[11]))goto T1;
	if((STREF(object,(V2),12))==Cnil){
	goto T3;}
	princ_str("\n	",VV[1]);
	(void)((*(LnkLI12))(STREF(object,(V2),8)));
	princ_str("=MMcons(",VV[1]);
	(void)((*(LnkLI12))(STREF(object,(V2),8)));
	princ_char(44,VV[1]);
	(void)((VFUN_NARGS=0,(*(LnkLI13))()));
	princ_str(");",VV[1]);
	(void)((*(LnkLI14))(STREF(object,(V2),8)));
	V4= (*(LnkLI15))();
	V5= Ct;
	STSET(object,(V2),12, /* INLINE-ARGS */V4);
	{object V6 = /* INLINE-ARGS */V4;
	VMR1(V6)}
	goto T3;
T3:;
	{object V7 = Cnil;
	VMR1(V7)}
	goto T1;
T1:;
	if((V3!= VV[16]))goto T16;
	princ_str("\n	bds_bind(VV[",VV[1]);
	(void)((*(LnkLI17))(STREF(object,(V2),16)));
	princ_str("],",VV[1]);
	(void)((*(LnkLI12))(STREF(object,(V2),8)));
	princ_str(");",VV[1]);
	(VV[3]->s.s_dbind)= make_cons(VV[2],(VV[3]->s.s_dbind));
	{object V9 = (VV[3]->s.s_dbind);
	VMR1(V9)}
	goto T16;
T16:;
	if((V3!= VV[10]))goto T25;
	{object V10= STREF(object,(V2),16);
	if(!(type_of(V10)==t_fixnum||type_of(V10)==t_bignum)){
	goto T27;}}
	princ_str("\n	base0[",VV[1]);
	(void)((*(LnkLI17))(STREF(object,(V2),16)));
	princ_str("]=",VV[1]);
	(void)((*(LnkLI12))(STREF(object,(V2),8)));
	princ_char(59,VV[1]);
	{object V11 = Cnil;
	VMR1(V11)}
	goto T27;
T27:;
	{object V12 = (*(LnkLI18))();
	VMR1(V12)}
	goto T25;
T25:;
	if((V3!= VV[19]))goto T35;
	princ_str("\n	SETQ_IO(V",VV[1]);
	(void)((*(LnkLI17))(STREF(object,(V2),16)));
	princ_char(44,VV[1]);
	princ_char(86,VV[1]);
	(void)((*(LnkLI17))(STREF(object,(V2),16)));
	princ_str("alloc,",VV[1]);
	princ_char(40,VV[1]);
	(void)((*(LnkLI12))(STREF(object,(V2),8)));
	princ_str("));",VV[1]);
	{object V13 = Cnil;
	VMR1(V13)}
	goto T35;
T35:;
	princ_str("\n	V",VV[1]);
	(void)((*(LnkLI17))(STREF(object,(V2),16)));
	princ_char(61,VV[1]);
	{object V14= STREF(object,(V2),4);
	if((V14!= VV[20]))goto T52;
	goto T51;
	goto T52;
T52:;
	if((V14!= VV[21]))goto T53;
	princ_str("fix",VV[1]);
	goto T51;
	goto T53;
T53:;
	if((V14!= VV[22]))goto T55;
	princ_str("char_code",VV[1]);
	goto T51;
	goto T55;
T55:;
	if((V14!= VV[23]))goto T57;
	princ_str("lf",VV[1]);
	goto T51;
	goto T57;
T57:;
	if((V14!= VV[24]))goto T59;
	princ_str("sf",VV[1]);
	goto T51;
	goto T59;
T59:;
	(void)((*(LnkLI25))());}
	goto T51;
T51:;
	princ_char(40,VV[1]);
	(void)((*(LnkLI12))(STREF(object,(V2),8)));
	princ_str(");",VV[1]);
	{object V15 = Cnil;
	VMR1(V15)}}
	return Cnil;
}
/*	local entry for function C2BIND-LOC	*/

static object LI2(V18,V19)

register object V18;register object V19;
{	 VMB2 VMS2 VMV2
	bds_check;
	goto TTL;
TTL:;
	{object V20= STREF(object,(V18),4);
	if((V20!= VV[11]))goto T65;
	if((STREF(object,(V18),12))==Cnil){
	goto T67;}
	princ_str("\n	",VV[1]);
	(void)((*(LnkLI12))(STREF(object,(V18),8)));
	princ_str("=MMcons(",VV[1]);
	(void)((*(LnkLI17))((V19)));
	princ_char(44,VV[1]);
	(void)((VFUN_NARGS=0,(*(LnkLI13))()));
	princ_str(");",VV[1]);
	(void)((*(LnkLI14))(STREF(object,(V18),8)));
	V21= (*(LnkLI15))();
	V22= Ct;
	STSET(object,(V18),12, /* INLINE-ARGS */V21);
	{object V23 = /* INLINE-ARGS */V21;
	VMR2(V23)}
	goto T67;
T67:;
	princ_str("\n	",VV[1]);
	(void)((*(LnkLI12))(STREF(object,(V18),8)));
	princ_str("= ",VV[1]);
	(void)((*(LnkLI17))((V19)));
	princ_char(59,VV[1]);
	{object V24 = Cnil;
	VMR2(V24)}
	goto T65;
T65:;
	if((V20!= VV[16]))goto T84;
	princ_str("\n	bds_bind(VV[",VV[1]);
	(void)((*(LnkLI17))(STREF(object,(V18),16)));
	princ_str("],",VV[1]);
	(void)((*(LnkLI17))((V19)));
	princ_str(");",VV[1]);
	(VV[3]->s.s_dbind)= make_cons(VV[2],(VV[3]->s.s_dbind));
	{object V26 = (VV[3]->s.s_dbind);
	VMR2(V26)}
	goto T84;
T84:;
	if((V20!= VV[10]))goto T92;
	princ_str("\n	base0[",VV[1]);
	(void)((*(LnkLI17))(STREF(object,(V18),16)));
	princ_str("]=",VV[1]);
	(void)((*(LnkLI17))((V19)));
	princ_char(59,VV[1]);
	{object V27 = Cnil;
	VMR2(V27)}
	goto T92;
T92:;
	if((V20!= VV[19]))goto T98;
	bds_bind(VV[4],small_fixnum(0));
	bds_bind(VV[5],(VV[5]->s.s_dbind));
	(void)((*(LnkLI26))(VV[6]));
	princ_str("\n	V",VV[1]);
	(void)((*(LnkLI17))(STREF(object,(V18),16)));
	princ_str("= ",VV[1]);
	(void)((VFUN_NARGS=2,(*(LnkLI27))((V19),(V18))));
	princ_char(59,VV[1]);
	{object V28 = (*(LnkLI28))();
	bds_unwind1;
	bds_unwind1;
	VMR2(V28)}
	goto T98;
T98:;
	princ_str("\n	V",VV[1]);
	(void)((*(LnkLI17))(STREF(object,(V18),16)));
	princ_str("= ",VV[1]);
	{object V29= STREF(object,(V18),4);
	if((V29!= VV[20]))goto T112;
	base[0]= (V19);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk29)();
	vs_top=sup;
	goto T111;
	goto T112;
T112:;
	if((V29!= VV[21]))goto T114;
	base[0]= (V19);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk30)();
	vs_top=sup;
	goto T111;
	goto T114;
T114:;
	if((V29!= VV[22]))goto T116;
	base[0]= (V19);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk31)();
	vs_top=sup;
	goto T111;
	goto T116;
T116:;
	if((V29!= VV[23]))goto T118;
	base[0]= (V19);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk32)();
	vs_top=sup;
	goto T111;
	goto T118;
T118:;
	if((V29!= VV[24]))goto T120;
	base[0]= (V19);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T111;
	goto T120;
T120:;
	(void)((*(LnkLI25))());}
	goto T111;
T111:;
	princ_char(59,VV[1]);
	{object V30 = Cnil;
	VMR2(V30)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2BIND-INIT	*/

static object LI3(V33,V34)

register object V33;register object V34;
{	 VMB3 VMS3 VMV3
	bds_check;
	goto TTL;
TTL:;
	{object V35= STREF(object,(V33),4);
	if((V35!= VV[11]))goto T123;
	if((STREF(object,(V33),12))==Cnil){
	goto T125;}
	{object V36;
	V36= list(2,VV[7],STREF(object,(V33),8));
	bds_bind(VV[8],(V36));
	V37= (*(LnkLI34))((V34));
	bds_unwind1;
	princ_str("\n	",VV[1]);
	(void)((*(LnkLI17))((V36)));
	princ_str("=MMcons(",VV[1]);
	(void)((*(LnkLI17))((V36)));
	princ_char(44,VV[1]);
	(void)((VFUN_NARGS=1,(*(LnkLI13))((VV[9]->s.s_dbind))));
	princ_str(");",VV[1]);}
	(void)((*(LnkLI14))(STREF(object,(V33),8)));
	V38= (*(LnkLI15))();
	V39= Ct;
	STSET(object,(V33),12, /* INLINE-ARGS */V38);
	{object V40 = /* INLINE-ARGS */V38;
	VMR3(V40)}
	goto T125;
T125:;
	base[0]= list(2,VV[7],STREF(object,(V33),8));
	bds_bind(VV[8],base[0]);
	{object V41 = (*(LnkLI34))((V34));
	bds_unwind1;
	VMR3(V41)}
	goto T123;
T123:;
	if((V35!= VV[16]))goto T140;
	base[0]= list(2,VV[2],STREF(object,(V33),16));
	bds_bind(VV[8],base[0]);
	V42= (*(LnkLI34))((V34));
	bds_unwind1;
	(VV[3]->s.s_dbind)= make_cons(VV[2],(VV[3]->s.s_dbind));
	{object V44 = (VV[3]->s.s_dbind);
	VMR3(V44)}
	goto T140;
T140:;
	if((V35!= VV[10]))goto T144;
	base[0]= list(2,VV[10],STREF(object,(V33),16));
	bds_bind(VV[8],base[0]);
	{object V45 = (*(LnkLI34))((V34));
	bds_unwind1;
	VMR3(V45)}
	goto T144;
T144:;
	if((V35== VV[20])
	|| (V35== VV[21])
	|| (V35== VV[22])
	|| (V35== VV[23])
	|| (V35== VV[24]))goto T147;
	if((V35!= VV[19]))goto T146;
	goto T147;
T147:;
	base[0]= list(3,VV[0],(V33),Cnil);
	bds_bind(VV[8],base[0]);
	{object V46 = (*(LnkLI34))((V34));
	bds_unwind1;
	VMR3(V46)}
	goto T146;
T146:;
	{object V47 = (*(LnkLI25))();
	VMR3(V47)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-BDS-BIND	*/

static object LI4(V50,V51)

object V50;object V51;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	princ_str("\n	bds_bind(VV[",VV[1]);
	(void)((*(LnkLI17))((V51)));
	princ_str("],",VV[1]);
	(void)((*(LnkLI17))((V50)));
	princ_str(");",VV[1]);
	{object V52 = Cnil;
	VMR4(V52)}
	return Cnil;
}
static object  LnkTLI34(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[34],(void **)(void *)&LnkLI34,1,first,ap);va_end(ap);return V1;} /* C2EXPR* */
static void LnkT33(){ call_or_link(VV[33],(void **)(void *)&Lnk33);} /* WT-SHORT-FLOAT-LOC */
static void LnkT32(){ call_or_link(VV[32],(void **)(void *)&Lnk32);} /* WT-LONG-FLOAT-LOC */
static void LnkT31(){ call_or_link(VV[31],(void **)(void *)&Lnk31);} /* WT-CHARACTER-LOC */
static void LnkT30(){ call_or_link(VV[30],(void **)(void *)&Lnk30);} /* WT-FIXNUM-LOC */
static void LnkT29(){ call_or_link(VV[29],(void **)(void *)&Lnk29);} /* WT-LOC */
static object  LnkTLI28(){return call_proc0(VV[28],(void **)(void *)&LnkLI28);} /* CLOSE-INLINE-BLOCKS */
static object  LnkTLI27(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[27],(void **)(void *)&LnkLI27,first,ap);va_end(ap);return V1;} /* WT-INTEGER-LOC */
static object  LnkTLI26(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[26],(void **)(void *)&LnkLI26,1,first,ap);va_end(ap);return V1;} /* SAVE-AVMA */
static object  LnkTLI25(){return call_proc0(VV[25],(void **)(void *)&LnkLI25);} /* BABOON */
static object  LnkTLI18(){return call_proc0(VV[18],(void **)(void *)&LnkLI18);} /* WFS-ERROR */
static object  LnkTLI17(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[17],(void **)(void *)&LnkLI17,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI15(){return call_proc0(VV[15],(void **)(void *)&LnkLI15);} /* CCB-VS-PUSH */
static object  LnkTLI14(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[14],(void **)(void *)&LnkLI14,1,first,ap);va_end(ap);return V1;} /* CLINK */
static object  LnkTLI13(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[13],(void **)(void *)&LnkLI13,first,ap);va_end(ap);return V1;} /* WT-CLINK */
static object  LnkTLI12(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[12],(void **)(void *)&LnkLI12,1,first,ap);va_end(ap);return V1;} /* WT-VS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

