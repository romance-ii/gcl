
#include "cmpinclude.h"
#include "cmpbind.h"
void init_cmpbind(){do_init(VV);}
/*	local entry for function C2BIND	*/

static object LI1(V2)

register object V2;
{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	V4= structure_ref((V2),VV[0],1);
	{object V3= /* INLINE-ARGS */V4;
	if((V3!= VV[11]))goto T1;
	if((structure_ref((V2),VV[0],3))==Cnil){
	goto T3;}
	princ_str("\n	",VV[1]);
	V5= structure_ref((V2),VV[0],2);
	(void)((*(LnkLI12))(/* INLINE-ARGS */V5));
	princ_str("=MMcons(",VV[1]);
	V6= structure_ref((V2),VV[0],2);
	(void)((*(LnkLI12))(/* INLINE-ARGS */V6));
	princ_char(44,VV[1]);
	(void)((VFUN_NARGS=0,(*(LnkLI13))()));
	princ_str(");",VV[1]);
	V7= structure_ref((V2),VV[0],2);
	(void)((*(LnkLI14))(/* INLINE-ARGS */V7));
	V8= (*(LnkLI15))();
	{object V9 = structure_set((V2),VV[0],3,/* INLINE-ARGS */V8);
	VMR1(V9)}
	goto T3;
T3:;
	{object V10 = Cnil;
	VMR1(V10)}
	goto T1;
T1:;
	if((V3!= VV[16]))goto T16;
	princ_str("\n	bds_bind(VV[",VV[1]);
	V11= structure_ref((V2),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V11));
	princ_str("],",VV[1]);
	V12= structure_ref((V2),VV[0],2);
	(void)((*(LnkLI12))(/* INLINE-ARGS */V12));
	princ_str(");",VV[1]);
	setq(VV[3],make_cons(VV[2],symbol_value(VV[3])));
	{object V14 = symbol_value(VV[3]);
	VMR1(V14)}
	goto T16;
T16:;
	if((V3!= VV[10]))goto T25;
	V15= structure_ref((V2),VV[0],4);
	if(!(type_of(/* INLINE-ARGS */V15)==t_fixnum||type_of(/* INLINE-ARGS */V15)==t_bignum)){
	goto T27;}
	princ_str("\n	base0[",VV[1]);
	V16= structure_ref((V2),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V16));
	princ_str("]=",VV[1]);
	V17= structure_ref((V2),VV[0],2);
	(void)((*(LnkLI12))(/* INLINE-ARGS */V17));
	princ_char(59,VV[1]);
	{object V18 = Cnil;
	VMR1(V18)}
	goto T27;
T27:;
	{object V19 = (*(LnkLI18))();
	VMR1(V19)}
	goto T25;
T25:;
	if((V3!= VV[19]))goto T35;
	princ_str("\n	SETQ_IO(V",VV[1]);
	V20= structure_ref((V2),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V20));
	princ_char(44,VV[1]);
	princ_char(86,VV[1]);
	V21= structure_ref((V2),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V21));
	princ_str("alloc,",VV[1]);
	princ_char(40,VV[1]);
	V22= structure_ref((V2),VV[0],2);
	(void)((*(LnkLI12))(/* INLINE-ARGS */V22));
	princ_str("));",VV[1]);
	{object V23 = Cnil;
	VMR1(V23)}
	goto T35;
T35:;
	princ_str("\n	V",VV[1]);
	V24= structure_ref((V2),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V24));
	princ_char(61,VV[1]);
	V26= structure_ref((V2),VV[0],1);
	{object V25= /* INLINE-ARGS */V26;
	if((V25!= VV[20]))goto T52;
	goto T51;
	goto T52;
T52:;
	if((V25!= VV[21]))goto T53;
	princ_str("fix",VV[1]);
	goto T51;
	goto T53;
T53:;
	if((V25!= VV[22]))goto T55;
	princ_str("char_code",VV[1]);
	goto T51;
	goto T55;
T55:;
	if((V25!= VV[23]))goto T57;
	princ_str("lf",VV[1]);
	goto T51;
	goto T57;
T57:;
	if((V25!= VV[24]))goto T59;
	princ_str("sf",VV[1]);
	goto T51;
	goto T59;
T59:;
	(void)((*(LnkLI25))());}
	goto T51;
T51:;
	princ_char(40,VV[1]);
	V27= structure_ref((V2),VV[0],2);
	(void)((*(LnkLI12))(/* INLINE-ARGS */V27));
	princ_str(");",VV[1]);
	{object V28 = Cnil;
	VMR1(V28)}}
	return Cnil;
}
/*	local entry for function C2BIND-LOC	*/

static object LI2(V31,V32)

register object V31;register object V32;
{	 VMB2 VMS2 VMV2
	bds_check;
	goto TTL;
TTL:;
	V34= structure_ref((V31),VV[0],1);
	{object V33= /* INLINE-ARGS */V34;
	if((V33!= VV[11]))goto T65;
	if((structure_ref((V31),VV[0],3))==Cnil){
	goto T67;}
	princ_str("\n	",VV[1]);
	V35= structure_ref((V31),VV[0],2);
	(void)((*(LnkLI12))(/* INLINE-ARGS */V35));
	princ_str("=MMcons(",VV[1]);
	(void)((*(LnkLI17))((V32)));
	princ_char(44,VV[1]);
	(void)((VFUN_NARGS=0,(*(LnkLI13))()));
	princ_str(");",VV[1]);
	V36= structure_ref((V31),VV[0],2);
	(void)((*(LnkLI14))(/* INLINE-ARGS */V36));
	V37= (*(LnkLI15))();
	{object V38 = structure_set((V31),VV[0],3,/* INLINE-ARGS */V37);
	VMR2(V38)}
	goto T67;
T67:;
	princ_str("\n	",VV[1]);
	V39= structure_ref((V31),VV[0],2);
	(void)((*(LnkLI12))(/* INLINE-ARGS */V39));
	princ_str("= ",VV[1]);
	(void)((*(LnkLI17))((V32)));
	princ_char(59,VV[1]);
	{object V40 = Cnil;
	VMR2(V40)}
	goto T65;
T65:;
	if((V33!= VV[16]))goto T84;
	princ_str("\n	bds_bind(VV[",VV[1]);
	V41= structure_ref((V31),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V41));
	princ_str("],",VV[1]);
	(void)((*(LnkLI17))((V32)));
	princ_str(");",VV[1]);
	setq(VV[3],make_cons(VV[2],symbol_value(VV[3])));
	{object V43 = symbol_value(VV[3]);
	VMR2(V43)}
	goto T84;
T84:;
	if((V33!= VV[10]))goto T92;
	princ_str("\n	base0[",VV[1]);
	V44= structure_ref((V31),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V44));
	princ_str("]=",VV[1]);
	(void)((*(LnkLI17))((V32)));
	princ_char(59,VV[1]);
	{object V45 = Cnil;
	VMR2(V45)}
	goto T92;
T92:;
	if((V33!= VV[19]))goto T98;
	bds_bind(VV[4],small_fixnum(0));
	bds_bind(VV[5],symbol_value(VV[5]));
	base[2]= VV[6];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk26)();
	vs_top=sup;
	princ_str("\n	V",VV[1]);
	V46= structure_ref((V31),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V46));
	princ_str("= ",VV[1]);
	base[2]= (V32);
	base[3]= (V31);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk27)();
	vs_top=sup;
	princ_char(59,VV[1]);
	{object V47 = (*(LnkLI28))();
	bds_unwind1;
	bds_unwind1;
	VMR2(V47)}
	goto T98;
T98:;
	princ_str("\n	V",VV[1]);
	V48= structure_ref((V31),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V48));
	princ_str("= ",VV[1]);
	V50= structure_ref((V31),VV[0],1);
	{object V49= /* INLINE-ARGS */V50;
	if((V49!= VV[20]))goto T115;
	base[0]= (V32);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk29)();
	vs_top=sup;
	goto T114;
	goto T115;
T115:;
	if((V49!= VV[21]))goto T117;
	base[0]= (V32);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk30)();
	vs_top=sup;
	goto T114;
	goto T117;
T117:;
	if((V49!= VV[22]))goto T119;
	base[0]= (V32);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk31)();
	vs_top=sup;
	goto T114;
	goto T119;
T119:;
	if((V49!= VV[23]))goto T121;
	base[0]= (V32);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk32)();
	vs_top=sup;
	goto T114;
	goto T121;
T121:;
	if((V49!= VV[24]))goto T123;
	base[0]= (V32);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T114;
	goto T123;
T123:;
	(void)((*(LnkLI25))());}
	goto T114;
T114:;
	princ_char(59,VV[1]);
	{object V51 = Cnil;
	VMR2(V51)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2BIND-INIT	*/

static object LI3(V54,V55)

register object V54;register object V55;
{	 VMB3 VMS3 VMV3
	bds_check;
	goto TTL;
TTL:;
	V57= structure_ref((V54),VV[0],1);
	{object V56= /* INLINE-ARGS */V57;
	if((V56!= VV[11]))goto T126;
	if((structure_ref((V54),VV[0],3))==Cnil){
	goto T128;}
	{object V58;
	V58= list(2,VV[7],structure_ref((V54),VV[0],2));
	bds_bind(VV[8],(V58));
	V59= (*(LnkLI34))((V55));
	bds_unwind1;
	princ_str("\n	",VV[1]);
	(void)((*(LnkLI17))((V58)));
	princ_str("=MMcons(",VV[1]);
	(void)((*(LnkLI17))((V58)));
	princ_char(44,VV[1]);
	(void)((VFUN_NARGS=1,(*(LnkLI13))(symbol_value(VV[9]))));
	princ_str(");",VV[1]);}
	V60= structure_ref((V54),VV[0],2);
	(void)((*(LnkLI14))(/* INLINE-ARGS */V60));
	V61= (*(LnkLI15))();
	{object V62 = structure_set((V54),VV[0],3,/* INLINE-ARGS */V61);
	VMR3(V62)}
	goto T128;
T128:;
	base[0]= list(2,VV[7],structure_ref((V54),VV[0],2));
	bds_bind(VV[8],base[0]);
	{object V63 = (*(LnkLI34))((V55));
	bds_unwind1;
	VMR3(V63)}
	goto T126;
T126:;
	if((V56!= VV[16]))goto T143;
	base[0]= list(2,VV[2],structure_ref((V54),VV[0],4));
	bds_bind(VV[8],base[0]);
	V64= (*(LnkLI34))((V55));
	bds_unwind1;
	setq(VV[3],make_cons(VV[2],symbol_value(VV[3])));
	{object V66 = symbol_value(VV[3]);
	VMR3(V66)}
	goto T143;
T143:;
	if((V56!= VV[10]))goto T147;
	base[0]= list(2,VV[10],structure_ref((V54),VV[0],4));
	bds_bind(VV[8],base[0]);
	{object V67 = (*(LnkLI34))((V55));
	bds_unwind1;
	VMR3(V67)}
	goto T147;
T147:;
	if((V56== VV[20])
	|| (V56== VV[21])
	|| (V56== VV[22])
	|| (V56== VV[23])
	|| (V56== VV[24]))goto T150;
	if((V56!= VV[19]))goto T149;
	goto T150;
T150:;
	base[0]= list(3,VV[0],(V54),Cnil);
	bds_bind(VV[8],base[0]);
	{object V68 = (*(LnkLI34))((V55));
	bds_unwind1;
	VMR3(V68)}
	goto T149;
T149:;
	{object V69 = (*(LnkLI25))();
	VMR3(V69)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SET-BDS-BIND	*/

static object LI4(V72,V73)

object V72;object V73;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	princ_str("\n	bds_bind(VV[",VV[1]);
	(void)((*(LnkLI17))((V73)));
	princ_str("],",VV[1]);
	(void)((*(LnkLI17))((V72)));
	princ_str(");",VV[1]);
	{object V74 = Cnil;
	VMR4(V74)}
	return Cnil;
}
static object  LnkTLI34(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[34],(void **)(void *)&LnkLI34,1,first,ap);va_end(ap);return V1;} /* C2EXPR* */
static void LnkT33(){ call_or_link(VV[33],(void **)(void *)&Lnk33);} /* WT-SHORT-FLOAT-LOC */
static void LnkT32(){ call_or_link(VV[32],(void **)(void *)&Lnk32);} /* WT-LONG-FLOAT-LOC */
static void LnkT31(){ call_or_link(VV[31],(void **)(void *)&Lnk31);} /* WT-CHARACTER-LOC */
static void LnkT30(){ call_or_link(VV[30],(void **)(void *)&Lnk30);} /* WT-FIXNUM-LOC */
static void LnkT29(){ call_or_link(VV[29],(void **)(void *)&Lnk29);} /* WT-LOC */
static object  LnkTLI28(){return call_proc0(VV[28],(void **)(void *)&LnkLI28);} /* CLOSE-INLINE-BLOCKS */
static void LnkT27(){ call_or_link(VV[27],(void **)(void *)&Lnk27);} /* WT-INTEGER-LOC */
static void LnkT26(){ call_or_link(VV[26],(void **)(void *)&Lnk26);} /* SAVE-AVMA */
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

