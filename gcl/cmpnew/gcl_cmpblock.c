
#include "cmpinclude.h"
#include "gcl_cmpblock.h"
void init_gcl_cmpblock(){do_init(VV);}
/*	local entry for function MAKE-BLK	*/

static object LI1(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{object V1;
	object V2;
	object V3;
	object V4;
	object V5;
	object V6;
	object V7;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI1key,first,ap);
	V1=(Vcs[0]);
	V2=(Vcs[1]);
	V3=(Vcs[2]);
	V4=(Vcs[3]);
	V5=(Vcs[4]);
	V6=(Vcs[5]);
	V7=(Vcs[6]);
	base[0]= VV[0];
	base[1]= (V1);
	base[2]= (V2);
	base[3]= (V3);
	base[4]= (V4);
	base[5]= (V5);
	base[6]= (V6);
	base[7]= (V7);
	vs_top=(vs_base=base+0)+8;
	siLmake_structure();
	vs_top=sup;
	{object V8 = vs_base[0];
	VMR1(V8)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function C1BLOCK	*/

static object LI2(V10)

register object V10;
{	 VMB2 VMS2 VMV2
	bds_check;
	goto TTL;
TTL:;
	if(!(((V10))==Cnil)){
	goto T9;}
	(void)((*(LnkLI26))(VV[1],small_fixnum(1),small_fixnum(0)));
	goto T9;
T9:;
	if(type_of(CMPcar((V10)))==t_symbol){
	goto T12;}
	(void)((VFUN_NARGS=2,(*(LnkLI27))(VV[2],CMPcar((V10)))));
	goto T12;
T12:;
	{register object V11;
	object V12;
	V11= (VFUN_NARGS=8,(*(LnkLI28))(VV[3],CMPcar((V10)),VV[4],Cnil,VV[5],Cnil,VV[6],Cnil));
	bds_bind(VV[7],make_cons((V11),(VV[7]->s.s_dbind)));
	V12= (*(LnkLI29))(CMPcdr((V10)));
	if((STREF(object,(V11),12))!=Cnil){
	goto T19;}
	if((STREF(object,(V11),8))==Cnil){
	goto T18;}
	goto T19;
T19:;
	(VV[8]->s.s_dbind)= number_plus((VV[8]->s.s_dbind),small_fixnum(1));
	goto T18;
T18:;
	if((STREF(object,(V11),12))!=Cnil){
	goto T24;}
	if((STREF(object,(V11),8))!=Cnil){
	goto T24;}
	if((STREF(object,(V11),4))==Cnil){
	goto T25;}
	goto T24;
T24:;
	V13= (*(LnkLI30))(CMPcadr((V12)));
	{object V14 = list(4,VV[1],/* INLINE-ARGS */V13,(V11),(V12));
	bds_unwind1;
	VMR2(V14)}
	goto T25;
T25:;
	{object V15 = (V12);
	bds_unwind1;
	VMR2(V15)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for C2BLOCK	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{register object V16;
	object V17;
	V16=(base[0]);
	V17=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((STREF(object,(V16),12))==Cnil){
	goto T32;}
	base[2]= (*(LnkLI31))((V16),(V17));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T32;
T32:;
	if((STREF(object,(V16),8))==Cnil){
	goto T35;}
	base[2]= (*(LnkLI32))((V16),(V17));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T35;
T35:;
	base[2]= (V16);
	base[3]= (V17);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk33)();
	return;
	}
}
/*	function definition for C2BLOCK-LOCAL	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{object V18;
	object V19;
	V18=(base[0]);
	V19=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	V20= Ct;
	STSET(object,(V18),16, (VV[9]->s.s_dbind));
	(void)((VV[9]->s.s_dbind));
	V21= Ct;
	STSET(object,(V18),20, (VV[10]->s.s_dbind));
	(void)((VV[10]->s.s_dbind));
	base[2]= (V19);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk34)();
	return;
	}
}
/*	local entry for function C2BLOCK-CLB	*/

static object LI5(V24,V25)

register object V24;object V25;
{	 VMB5 VMS5 VMV5
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[11],(VV[11]->s.s_dbind));
	V26= Ct;
	STSET(object,(V24),16, (VV[9]->s.s_dbind));
	(void)((VV[9]->s.s_dbind));
	V27= Ct;
	STSET(object,(V24),20, (VV[10]->s.s_dbind));
	(void)((VV[10]->s.s_dbind));
	V28= (*(LnkLI35))();
	V29= Ct;
	STSET(object,(V24),8, /* INLINE-ARGS */V28);
	(void)(/* INLINE-ARGS */V28);
	princ_str("\n	",VV[12]);
	(void)((*(LnkLI36))(STREF(object,(V24),8)));
	princ_str("=alloc_frame_id();",VV[12]);
	princ_str("\n	frs_push(FRS_CATCH,",VV[12]);
	(void)((*(LnkLI36))(STREF(object,(V24),8)));
	princ_str(");",VV[12]);
	princ_str("\n	if(nlj_active)",VV[12]);
	princ_str("\n	{nlj_active=FALSE;frs_pop();",VV[12]);
	(void)((VFUN_NARGS=2,(*(LnkLI37))(VV[13],VV[14])));
	princ_char(125,VV[12]);
	princ_str("\n	else{",VV[12]);
	base[1]= make_cons(VV[16],(VV[15]->s.s_dbind));
	bds_bind(VV[15],base[1]);
	base[2]= (V25);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk34)();
	vs_top=sup;
	bds_unwind1;
	princ_str("\n	}",VV[12]);
	{object V30 = Cnil;
	bds_unwind1;
	VMR5(V30)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2BLOCK-CCB	*/

static object LI6(V33,V34)

register object V33;object V34;
{	 VMB6 VMS6 VMV6
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[11],(VV[11]->s.s_dbind));
	bds_bind(VV[17],(VV[17]->s.s_dbind));
	bds_bind(VV[18],(VV[18]->s.s_dbind));
	V35= Ct;
	STSET(object,(V33),16, (VV[9]->s.s_dbind));
	(void)((VV[9]->s.s_dbind));
	V36= Ct;
	STSET(object,(V33),20, (VV[10]->s.s_dbind));
	(void)((VV[10]->s.s_dbind));
	V37= (*(LnkLI35))();
	V38= Ct;
	STSET(object,(V33),8, /* INLINE-ARGS */V37);
	(void)(/* INLINE-ARGS */V37);
	V39= (*(LnkLI38))(STREF(object,(V33),0));
	V40= Ct;
	STSET(object,(V33),24, /* INLINE-ARGS */V39);
	(void)(/* INLINE-ARGS */V39);
	princ_str("\n	",VV[12]);
	(void)((*(LnkLI36))(STREF(object,(V33),8)));
	princ_str("=alloc_frame_id();",VV[12]);
	princ_str("\n	",VV[12]);
	(void)((*(LnkLI36))(STREF(object,(V33),8)));
	princ_str("=MMcons(",VV[12]);
	(void)((*(LnkLI36))(STREF(object,(V33),8)));
	princ_char(44,VV[12]);
	(void)((VFUN_NARGS=0,(*(LnkLI39))()));
	princ_str(");",VV[12]);
	(void)((*(LnkLI40))(STREF(object,(V33),8)));
	V41= (*(LnkLI41))();
	V42= Ct;
	STSET(object,(V33),12, /* INLINE-ARGS */V41);
	(void)(/* INLINE-ARGS */V41);
	princ_str("\n	frs_push(FRS_CATCH,",VV[12]);
	(void)((*(LnkLI42))(STREF(object,(V33),8)));
	princ_str(");",VV[12]);
	princ_str("\n	if(nlj_active)",VV[12]);
	princ_str("\n	{nlj_active=FALSE;frs_pop();",VV[12]);
	(void)((VFUN_NARGS=2,(*(LnkLI37))(VV[13],VV[14])));
	princ_char(125,VV[12]);
	princ_str("\n	else{",VV[12]);
	base[3]= make_cons(VV[16],(VV[15]->s.s_dbind));
	bds_bind(VV[15],base[3]);
	base[4]= (V34);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk34)();
	vs_top=sup;
	bds_unwind1;
	princ_str("\n	}",VV[12]);
	{object V43 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR6(V43)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1RETURN-FROM	*/

static object LI7(V45)

object V45;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	if(!(((V45))==Cnil)){
	goto T107;}
	(void)((*(LnkLI26))(VV[19],small_fixnum(1),small_fixnum(0)));
	goto T105;
	goto T107;
T107:;
	if((CMPcdr((V45)))==Cnil){
	goto T110;}
	if((CMPcddr((V45)))==Cnil){
	goto T110;}
	V46 = CMPmake_fixnum((long)length((V45)));
	(void)((*(LnkLI43))(VV[19],small_fixnum(2),V46));
	goto T105;
	goto T110;
T110:;
	if(type_of(CMPcar((V45)))==t_symbol){
	goto T105;}
	(void)(CMPcar((V45)));
	goto T105;
T105:;
	{register object V47;
	register object V48;
	register object V49;
	register object V50;
	V47= (VV[7]->s.s_dbind);
	V48= CMPcar((V45));
	V49= Cnil;
	V50= Cnil;
	goto T120;
T120:;
	if(!(((V47))==Cnil)){
	goto T121;}
	{object V51 = (VFUN_NARGS=2,(*(LnkLI27))(VV[21],(V48)));
	VMR7(V51)}
	goto T121;
T121:;
	{object V52= CMPcar((V47));
	if((V52!= VV[44]))goto T126;
	V49= Ct;
	goto T125;
	goto T126;
T126:;
	if((V52!= VV[45]))goto T128;
	V50= Ct;
	goto T125;
	goto T128;
T128:;
	if(!((STREF(object,CMPcar((V47)),0))==((V48)))){
	goto T125;}
	{register object V53;
	register object V54;
	V53= (*(LnkLI46))(CMPcadr((V45)));
	V54= CMPcar((V47));
	if(((V49))==Cnil){
	goto T136;}
	V55= Ct;
	STSET(object,(V54),12, Ct);
	(void)(Ct);
	goto T134;
	goto T136;
T136:;
	if(((V50))==Cnil){
	goto T139;}
	V56= Ct;
	STSET(object,(V54),8, Ct);
	(void)(Ct);
	goto T134;
	goto T139;
T139:;
	V57= Ct;
	STSET(object,(V54),4, Ct);
	(void)(Ct);
	goto T134;
T134:;
	V58= (*(LnkLI30))(CMPcadr((V53)));
	{object V59 = list(6,VV[19],/* INLINE-ARGS */V58,(V54),(V50),(V49),(V53));
	VMR7(V59)}}}
	goto T125;
T125:;
	V47= CMPcdr((V47));
	goto T120;}
	return Cnil;
}
/*	function definition for C2RETURN-FROM	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	{object V60;
	object V61;
	object V62;
	object V63;
	V60=(base[0]);
	V61=(base[1]);
	V62=(base[2]);
	V63=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V62))==Cnil){
	goto T145;}
	base[4]= (*(LnkLI47))((V60),(V63));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T145;
T145:;
	if(((V61))==Cnil){
	goto T148;}
	base[4]= (*(LnkLI48))((V60),(V63));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T148;
T148:;
	base[4]= (V60);
	base[5]= (V63);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk49)();
	return;
	}
}
/*	function definition for C2RETURN-LOCAL	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	bds_check;
	{object V64;
	object V65;
	V64=(base[0]);
	V65=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= STREF(object,(V64),20);
	base[3]= STREF(object,(V64),16);
	bds_bind(VV[10],base[2]);
	bds_bind(VV[9],base[3]);
	base[4]= (V65);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk34)();
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function C2RETURN-CLB	*/

static object LI10(V68,V69)

object V68;object V69;
{	 VMB10 VMS10 VMV10
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[10],VV[22]);
	V70= (*(LnkLI50))((V69));
	bds_unwind1;
	princ_str("\n	unwind(frs_sch(",VV[12]);
	if((STREF(object,(V68),12))==Cnil){
	goto T160;}
	(void)((*(LnkLI42))(STREF(object,(V68),8)));
	goto T158;
	goto T160;
T160:;
	(void)((*(LnkLI36))(STREF(object,(V68),8)));
	goto T158;
T158:;
	princ_str("),Cnil);",VV[12]);
	{object V71 = Cnil;
	VMR10(V71)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2RETURN-CCB	*/

static object LI11(V74,V75)

object V74;object V75;
{	 VMB11 VMS11 VMV11
	bds_check;
	goto TTL;
TTL:;
	princ_str("\n	{frame_ptr fr;",VV[12]);
	princ_str("\n	fr=frs_sch(",VV[12]);
	(void)((*(LnkLI51))(STREF(object,(V74),12)));
	princ_str(");",VV[12]);
	princ_str("\n	if(fr==NULL) FEerror(\"The block ~s is missing.\",1,VV[",VV[12]);
	(void)((*(LnkLI52))(STREF(object,(V74),24)));
	princ_str("]);",VV[12]);
	bds_bind(VV[10],VV[22]);
	V76= (*(LnkLI50))((V75));
	bds_unwind1;
	princ_str("\n	unwind(fr,Cnil);}",VV[12]);
	{object V77 = Cnil;
	VMR11(V77)}
	base[0]=base[0];
	return Cnil;
}
static object  LnkTLI52(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[52],(void **)(void *)&LnkLI52,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI51(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[51],(void **)(void *)&LnkLI51,1,first,ap);va_end(ap);return V1;} /* WT-CCB-VS */
static object  LnkTLI50(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[50],(void **)(void *)&LnkLI50,1,first,ap);va_end(ap);return V1;} /* C2EXPR* */
static void LnkT49(){ call_or_link(VV[49],(void **)(void *)&Lnk49);} /* C2RETURN-LOCAL */
static object  LnkTLI48(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[48],(void **)(void *)&LnkLI48,2,first,ap);va_end(ap);return V1;} /* C2RETURN-CLB */
static object  LnkTLI47(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[47],(void **)(void *)&LnkLI47,2,first,ap);va_end(ap);return V1;} /* C2RETURN-CCB */
static object  LnkTLI46(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[46],(void **)(void *)&LnkLI46,1,first,ap);va_end(ap);return V1;} /* C1EXPR */
static object  LnkTLI43(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[43],(void **)(void *)&LnkLI43,3,first,ap);va_end(ap);return V1;} /* TOO-MANY-ARGS */
static object  LnkTLI42(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[42],(void **)(void *)&LnkLI42,1,first,ap);va_end(ap);return V1;} /* WT-VS* */
static object  LnkTLI41(){return call_proc0(VV[41],(void **)(void *)&LnkLI41);} /* CCB-VS-PUSH */
static object  LnkTLI40(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[40],(void **)(void *)&LnkLI40,1,first,ap);va_end(ap);return V1;} /* CLINK */
static object  LnkTLI39(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[39],(void **)(void *)&LnkLI39,first,ap);va_end(ap);return V1;} /* WT-CLINK */
static object  LnkTLI38(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[38],(void **)(void *)&LnkLI38,1,first,ap);va_end(ap);return V1;} /* ADD-SYMBOL */
static object  LnkTLI37(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[37],(void **)(void *)&LnkLI37,first,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI36(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[36],(void **)(void *)&LnkLI36,1,first,ap);va_end(ap);return V1;} /* WT-VS */
static object  LnkTLI35(){return call_proc0(VV[35],(void **)(void *)&LnkLI35);} /* VS-PUSH */
static void LnkT34(){ call_or_link(VV[34],(void **)(void *)&Lnk34);} /* C2EXPR */
static void LnkT33(){ call_or_link(VV[33],(void **)(void *)&Lnk33);} /* C2BLOCK-LOCAL */
static object  LnkTLI32(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[32],(void **)(void *)&LnkLI32,2,first,ap);va_end(ap);return V1;} /* C2BLOCK-CLB */
static object  LnkTLI31(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[31],(void **)(void *)&LnkLI31,2,first,ap);va_end(ap);return V1;} /* C2BLOCK-CCB */
static object  LnkTLI30(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[30],(void **)(void *)&LnkLI30,1,first,ap);va_end(ap);return V1;} /* RESET-INFO-TYPE */
static object  LnkTLI29(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[29],(void **)(void *)&LnkLI29,1,first,ap);va_end(ap);return V1;} /* C1PROGN */
static object  LnkTLI28(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[28],(void **)(void *)&LnkLI28,first,ap);va_end(ap);return V1;} /* MAKE-BLK */
static object  LnkTLI27(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[27],(void **)(void *)&LnkLI27,first,ap);va_end(ap);return V1;} /* CMPERR */
static object  LnkTLI26(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[26],(void **)(void *)&LnkLI26,3,first,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

