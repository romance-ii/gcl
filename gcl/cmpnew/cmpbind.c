
#include "cmpinclude.h"
#include "cmpbind.h"
init_cmpbind(){do_init(VV);}
/*	local entry for function C2BIND	*/

static object LI1(V2)

register object V2;
{	 VMB1 VMS1 VMV1
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
T3:;
	{object V10 = Cnil;
	VMR1(V10)}
T1:;
	if((V3!= VV[16]))goto T16;
	princ_str("\n	bds_bind(VV[",VV[1]);
	V11= structure_ref((V2),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V11));
	princ_str("],",VV[1]);
	V12= structure_ref((V2),VV[0],2);
	(void)((*(LnkLI12))(/* INLINE-ARGS */V12));
	princ_str(");",VV[1]);
	setq(VV[2],make_cons(VV[3],symbol_value(VV[2])));
	{object V13 = symbol_value(VV[2]);
	VMR1(V13)}
T16:;
	if((V3!= VV[10]))goto T25;
	V14= structure_ref((V2),VV[0],4);
	if(!(type_of(/* INLINE-ARGS */V14)==t_fixnum||type_of(/* INLINE-ARGS */V14)==t_bignum)){
	goto T27;}
	princ_str("\n	base0[",VV[1]);
	V15= structure_ref((V2),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V15));
	princ_str("]=",VV[1]);
	V16= structure_ref((V2),VV[0],2);
	(void)((*(LnkLI12))(/* INLINE-ARGS */V16));
	princ_char(59,VV[1]);
	{object V17 = Cnil;
	VMR1(V17)}
T27:;
	{object V18 = (*(LnkLI18))();
	VMR1(V18)}
T25:;
	if((V3!= VV[19]))goto T35;
	princ_str("\n	SETQ_IO(V",VV[1]);
	V19= structure_ref((V2),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V19));
	princ_char(44,VV[1]);
	princ_char(86,VV[1]);
	V20= structure_ref((V2),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V20));
	princ_str("alloc,",VV[1]);
	princ_char(40,VV[1]);
	V21= structure_ref((V2),VV[0],2);
	(void)((*(LnkLI12))(/* INLINE-ARGS */V21));
	princ_str("));",VV[1]);
	{object V22 = Cnil;
	VMR1(V22)}
T35:;
	princ_str("\n	V",VV[1]);
	V23= structure_ref((V2),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V23));
	princ_char(61,VV[1]);
	V25= structure_ref((V2),VV[0],1);
	{object V24= /* INLINE-ARGS */V25;
	if((V24!= VV[20]))goto T52;
	goto T51;
T52:;
	if((V24!= VV[21]))goto T53;
	princ_str("fix",VV[1]);
	goto T51;
T53:;
	if((V24!= VV[22]))goto T55;
	princ_str("char_code",VV[1]);
	goto T51;
T55:;
	if((V24!= VV[23]))goto T57;
	princ_str("lf",VV[1]);
	goto T51;
T57:;
	if((V24!= VV[24]))goto T59;
	princ_str("sf",VV[1]);
	goto T51;
T59:;
	(void)((*(LnkLI25))());}
T51:;
	princ_char(40,VV[1]);
	V26= structure_ref((V2),VV[0],2);
	(void)((*(LnkLI12))(/* INLINE-ARGS */V26));
	princ_str(");",VV[1]);
	{object V27 = Cnil;
	VMR1(V27)}}
}
/*	local entry for function C2BIND-LOC	*/

static object LI2(V30,V31)

register object V30;register object V31;
{	 VMB2 VMS2 VMV2
	bds_check;
TTL:;
	V33= structure_ref((V30),VV[0],1);
	{object V32= /* INLINE-ARGS */V33;
	if((V32!= VV[11]))goto T65;
	if((structure_ref((V30),VV[0],3))==Cnil){
	goto T67;}
	princ_str("\n	",VV[1]);
	V34= structure_ref((V30),VV[0],2);
	(void)((*(LnkLI12))(/* INLINE-ARGS */V34));
	princ_str("=MMcons(",VV[1]);
	(void)((*(LnkLI17))((V31)));
	princ_char(44,VV[1]);
	(void)((VFUN_NARGS=0,(*(LnkLI13))()));
	princ_str(");",VV[1]);
	V35= structure_ref((V30),VV[0],2);
	(void)((*(LnkLI14))(/* INLINE-ARGS */V35));
	V36= (*(LnkLI15))();
	{object V37 = structure_set((V30),VV[0],3,/* INLINE-ARGS */V36);
	VMR2(V37)}
T67:;
	princ_str("\n	",VV[1]);
	V38= structure_ref((V30),VV[0],2);
	(void)((*(LnkLI12))(/* INLINE-ARGS */V38));
	princ_str("= ",VV[1]);
	(void)((*(LnkLI17))((V31)));
	princ_char(59,VV[1]);
	{object V39 = Cnil;
	VMR2(V39)}
T65:;
	if((V32!= VV[16]))goto T84;
	princ_str("\n	bds_bind(VV[",VV[1]);
	V40= structure_ref((V30),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V40));
	princ_str("],",VV[1]);
	(void)((*(LnkLI17))((V31)));
	princ_str(");",VV[1]);
	setq(VV[2],make_cons(VV[3],symbol_value(VV[2])));
	{object V41 = symbol_value(VV[2]);
	VMR2(V41)}
T84:;
	if((V32!= VV[10]))goto T92;
	princ_str("\n	base0[",VV[1]);
	V42= structure_ref((V30),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V42));
	princ_str("]=",VV[1]);
	(void)((*(LnkLI17))((V31)));
	princ_char(59,VV[1]);
	{object V43 = Cnil;
	VMR2(V43)}
T92:;
	if((V32!= VV[19]))goto T98;
	bds_bind(VV[4],small_fixnum(0));
	bds_bind(VV[5],symbol_value(VV[5]));
	base[2]= VV[6];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk26)();
	vs_top=sup;
	princ_str("\n	V",VV[1]);
	V44= structure_ref((V30),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V44));
	princ_str("= ",VV[1]);
	base[2]= (V31);
	base[3]= (V30);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk27)();
	vs_top=sup;
	princ_char(59,VV[1]);
	{object V45 = (*(LnkLI28))();
	bds_unwind1;
	bds_unwind1;
	VMR2(V45)}
T98:;
	princ_str("\n	V",VV[1]);
	V46= structure_ref((V30),VV[0],4);
	(void)((*(LnkLI17))(/* INLINE-ARGS */V46));
	princ_str("= ",VV[1]);
	V48= structure_ref((V30),VV[0],1);
	{object V47= /* INLINE-ARGS */V48;
	if((V47!= VV[20]))goto T115;
	base[0]= (V31);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk29)();
	vs_top=sup;
	goto T114;
T115:;
	if((V47!= VV[21]))goto T117;
	base[0]= (V31);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk30)();
	vs_top=sup;
	goto T114;
T117:;
	if((V47!= VV[22]))goto T119;
	base[0]= (V31);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk31)();
	vs_top=sup;
	goto T114;
T119:;
	if((V47!= VV[23]))goto T121;
	base[0]= (V31);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk32)();
	vs_top=sup;
	goto T114;
T121:;
	if((V47!= VV[24]))goto T123;
	base[0]= (V31);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk33)();
	vs_top=sup;
	goto T114;
T123:;
	(void)((*(LnkLI25))());}
T114:;
	princ_char(59,VV[1]);
	{object V49 = Cnil;
	VMR2(V49)}}
}
/*	local entry for function C2BIND-INIT	*/

static object LI3(V52,V53)

register object V52;register object V53;
{	 VMB3 VMS3 VMV3
	bds_check;
TTL:;
	V55= structure_ref((V52),VV[0],1);
	{object V54= /* INLINE-ARGS */V55;
	if((V54!= VV[11]))goto T126;
	if((structure_ref((V52),VV[0],3))==Cnil){
	goto T128;}
	{object V56;
	V56= list(2,VV[7],structure_ref((V52),VV[0],2));
	bds_bind(VV[8],(V56));
	V57= (*(LnkLI34))((V53));
	bds_unwind1;
	princ_str("\n	",VV[1]);
	(void)((*(LnkLI17))((V56)));
	princ_str("=MMcons(",VV[1]);
	(void)((*(LnkLI17))((V56)));
	princ_char(44,VV[1]);
	(void)((VFUN_NARGS=1,(*(LnkLI13))(symbol_value(VV[9]))));
	princ_str(");",VV[1]);}
	V58= structure_ref((V52),VV[0],2);
	(void)((*(LnkLI14))(/* INLINE-ARGS */V58));
	V59= (*(LnkLI15))();
	{object V60 = structure_set((V52),VV[0],3,/* INLINE-ARGS */V59);
	VMR3(V60)}
T128:;
	base[0]= list(2,VV[7],structure_ref((V52),VV[0],2));
	bds_bind(VV[8],base[0]);
	{object V61 = (*(LnkLI34))((V53));
	bds_unwind1;
	VMR3(V61)}
T126:;
	if((V54!= VV[16]))goto T143;
	base[0]= list(2,VV[3],structure_ref((V52),VV[0],4));
	bds_bind(VV[8],base[0]);
	V62= (*(LnkLI34))((V53));
	bds_unwind1;
	setq(VV[2],make_cons(VV[3],symbol_value(VV[2])));
	{object V63 = symbol_value(VV[2]);
	VMR3(V63)}
T143:;
	if((V54!= VV[10]))goto T147;
	base[0]= list(2,VV[10],structure_ref((V52),VV[0],4));
	bds_bind(VV[8],base[0]);
	{object V64 = (*(LnkLI34))((V53));
	bds_unwind1;
	VMR3(V64)}
T147:;
	if((V54== VV[20])
	|| (V54== VV[21])
	|| (V54== VV[22])
	|| (V54== VV[23])
	|| (V54== VV[24]))goto T150;
	if((V54!= VV[19]))goto T149;
T150:;
	base[0]= list(3,VV[0],(V52),Cnil);
	bds_bind(VV[8],base[0]);
	{object V65 = (*(LnkLI34))((V53));
	bds_unwind1;
	VMR3(V65)}
T149:;
	{object V66 = (*(LnkLI25))();
	VMR3(V66)}}
}
/*	local entry for function SET-BDS-BIND	*/

static object LI4(V69,V70)

object V69;object V70;
{	 VMB4 VMS4 VMV4
TTL:;
	princ_str("\n	bds_bind(VV[",VV[1]);
	(void)((*(LnkLI17))((V70)));
	princ_str("],",VV[1]);
	(void)((*(LnkLI17))((V69)));
	princ_str(");",VV[1]);
	{object V71 = Cnil;
	VMR4(V71)}
}
static object  LnkTLI34(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[34],&LnkLI34,1,ap);} /* C2EXPR* */
static LnkT33(){ call_or_link(VV[33],&Lnk33);} /* WT-SHORT-FLOAT-LOC */
static LnkT32(){ call_or_link(VV[32],&Lnk32);} /* WT-LONG-FLOAT-LOC */
static LnkT31(){ call_or_link(VV[31],&Lnk31);} /* WT-CHARACTER-LOC */
static LnkT30(){ call_or_link(VV[30],&Lnk30);} /* WT-FIXNUM-LOC */
static LnkT29(){ call_or_link(VV[29],&Lnk29);} /* WT-LOC */
static object  LnkTLI28(){return call_proc0(VV[28],&LnkLI28);} /* CLOSE-INLINE-BLOCKS */
static LnkT27(){ call_or_link(VV[27],&Lnk27);} /* WT-INTEGER-LOC */
static LnkT26(){ call_or_link(VV[26],&Lnk26);} /* SAVE-AVMA */
static object  LnkTLI25(){return call_proc0(VV[25],&LnkLI25);} /* BABOON */
static object  LnkTLI18(){return call_proc0(VV[18],&LnkLI18);} /* WFS-ERROR */
static object  LnkTLI17(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[17],&LnkLI17,1,ap);} /* WT1 */
static object  LnkTLI15(){return call_proc0(VV[15],&LnkLI15);} /* CCB-VS-PUSH */
static object  LnkTLI14(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[14],&LnkLI14,1,ap);} /* CLINK */
static object  LnkTLI13(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[13],&LnkLI13,ap);} /* WT-CLINK */
static object  LnkTLI12(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[12],&LnkLI12,1,ap);} /* WT-VS */
