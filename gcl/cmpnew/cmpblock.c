
#include "cmpinclude.h"
#include "cmpblock.h"
init_cmpblock(){do_init(VV);}
/*	local entry for function MAKE-BLK	*/

static object LI1(va_alist)
	va_dcl 
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
	narg= narg - 0;
	va_start(ap);
	{
	parse_key_new(narg,Vcs +0,&LI1key,ap);
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
	VMR1(V8)}}
	}}
/*	local entry for function C1BLOCK	*/

static object LI2(V10)

register object V10;
{	 VMB2 VMS2 VMV2
	bds_check;
TTL:;
	if(!(endp((V10)))){
	goto T9;}
	(void)((*(LnkLI26))(VV[1],small_fixnum(1),small_fixnum(0)));
T9:;
	if(type_of(car((V10)))==t_symbol){
	goto T12;}
	(void)((VFUN_NARGS=2,(*(LnkLI27))(VV[2],car((V10)))));
T12:;
	{register object V11;
	object V12;
	V11= (VFUN_NARGS=8,(*(LnkLI28))(VV[3],car((V10)),VV[4],Cnil,VV[5],Cnil,VV[6],Cnil));
	bds_bind(VV[7],make_cons((V11),symbol_value(VV[7])));
	V12= (*(LnkLI29))(cdr((V10)));
	if((structure_ref((V11),VV[0],3))!=Cnil){
	goto T19;}
	if((structure_ref((V11),VV[0],2))==Cnil){
	goto T18;}
T19:;
	setq(VV[8],number_plus(symbol_value(VV[8]),small_fixnum(1)));
T18:;
	if((structure_ref((V11),VV[0],3))!=Cnil){
	goto T24;}
	if((structure_ref((V11),VV[0],2))!=Cnil){
	goto T24;}
	if((structure_ref((V11),VV[0],1))==Cnil){
	goto T25;}
T24:;
	V13= (*(LnkLI30))(cadr((V12)));
	{object V14 = list(4,VV[1],/* INLINE-ARGS */V13,(V11),(V12));
	bds_unwind1;
	VMR2(V14)}
T25:;
	{object V15 = (V12);
	bds_unwind1;
	VMR2(V15)}}
}
/*	function definition for C2BLOCK	*/

static L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_reserve(VM3);
	{register object V16;
	object V17;
	check_arg(2);
	V16=(base[0]);
	V17=(base[1]);
	vs_top=sup;
TTL:;
	if((structure_ref((V16),VV[0],3))==Cnil){
	goto T32;}
	base[2]= (*(LnkLI31))((V16),(V17));
	vs_top=(vs_base=base+2)+1;
	return;
T32:;
	if((structure_ref((V16),VV[0],2))==Cnil){
	goto T35;}
	base[2]= (*(LnkLI32))((V16),(V17));
	vs_top=(vs_base=base+2)+1;
	return;
T35:;
	base[2]= (V16);
	base[3]= (V17);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk33)();
	return;
	}
}
/*	function definition for C2BLOCK-LOCAL	*/

static L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_reserve(VM4);
	{object V18;
	object V19;
	check_arg(2);
	V18=(base[0]);
	V19=(base[1]);
	vs_top=sup;
TTL:;
	(void)(structure_set((V18),VV[0],4,symbol_value(VV[9])));
	(void)(structure_set((V18),VV[0],5,symbol_value(VV[10])));
	base[2]= (V19);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk34)();
	return;
	}
}
/*	local entry for function C2BLOCK-CLB	*/

static object LI5(V22,V23)

register object V22;object V23;
{	 VMB5 VMS5 VMV5
	bds_check;
TTL:;
	bds_bind(VV[11],symbol_value(VV[11]));
	(void)(structure_set((V22),VV[0],4,symbol_value(VV[9])));
	(void)(structure_set((V22),VV[0],5,symbol_value(VV[10])));
	V24= (*(LnkLI35))();
	(void)(structure_set((V22),VV[0],2,/* INLINE-ARGS */V24));
	princ_str("\n	",VV[12]);
	V25= structure_ref((V22),VV[0],2);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V25));
	princ_str("=alloc_frame_id();",VV[12]);
	princ_str("\n	frs_push(FRS_CATCH,",VV[12]);
	V26= structure_ref((V22),VV[0],2);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V26));
	princ_str(");",VV[12]);
	princ_str("\n	if(nlj_active)",VV[12]);
	princ_str("\n	{nlj_active=FALSE;frs_pop();",VV[12]);
	(void)((VFUN_NARGS=2,(*(LnkLI37))(VV[13],VV[14])));
	princ_char(125,VV[12]);
	princ_str("\n	else{",VV[12]);
	base[1]= make_cons(VV[16],symbol_value(VV[15]));
	bds_bind(VV[15],base[1]);
	base[2]= (V23);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk34)();
	vs_top=sup;
	bds_unwind1;
	princ_str("\n	}",VV[12]);
	{object V27 = Cnil;
	bds_unwind1;
	VMR5(V27)}
}
/*	local entry for function C2BLOCK-CCB	*/

static object LI6(V30,V31)

register object V30;object V31;
{	 VMB6 VMS6 VMV6
	bds_check;
TTL:;
	bds_bind(VV[11],symbol_value(VV[11]));
	bds_bind(VV[17],symbol_value(VV[17]));
	bds_bind(VV[18],symbol_value(VV[18]));
	(void)(structure_set((V30),VV[0],4,symbol_value(VV[9])));
	(void)(structure_set((V30),VV[0],5,symbol_value(VV[10])));
	V32= (*(LnkLI35))();
	(void)(structure_set((V30),VV[0],2,/* INLINE-ARGS */V32));
	V33= structure_ref((V30),VV[0],0);
	V34= (*(LnkLI38))(/* INLINE-ARGS */V33);
	(void)(structure_set((V30),VV[0],6,/* INLINE-ARGS */V34));
	princ_str("\n	",VV[12]);
	V35= structure_ref((V30),VV[0],2);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V35));
	princ_str("=alloc_frame_id();",VV[12]);
	princ_str("\n	",VV[12]);
	V36= structure_ref((V30),VV[0],2);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V36));
	princ_str("=MMcons(",VV[12]);
	V37= structure_ref((V30),VV[0],2);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V37));
	princ_char(44,VV[12]);
	(void)((VFUN_NARGS=0,(*(LnkLI39))()));
	princ_str(");",VV[12]);
	V38= structure_ref((V30),VV[0],2);
	(void)((*(LnkLI40))(/* INLINE-ARGS */V38));
	V39= (*(LnkLI41))();
	(void)(structure_set((V30),VV[0],3,/* INLINE-ARGS */V39));
	princ_str("\n	frs_push(FRS_CATCH,",VV[12]);
	V40= structure_ref((V30),VV[0],2);
	(void)((*(LnkLI42))(/* INLINE-ARGS */V40));
	princ_str(");",VV[12]);
	princ_str("\n	if(nlj_active)",VV[12]);
	princ_str("\n	{nlj_active=FALSE;frs_pop();",VV[12]);
	(void)((VFUN_NARGS=2,(*(LnkLI37))(VV[13],VV[14])));
	princ_char(125,VV[12]);
	princ_str("\n	else{",VV[12]);
	base[3]= make_cons(VV[16],symbol_value(VV[15]));
	bds_bind(VV[15],base[3]);
	base[4]= (V31);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk34)();
	vs_top=sup;
	bds_unwind1;
	princ_str("\n	}",VV[12]);
	{object V41 = Cnil;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR6(V41)}
}
/*	local entry for function C1RETURN-FROM	*/

static object LI7(V43)

object V43;
{	 VMB7 VMS7 VMV7
TTL:;
	if(!(endp((V43)))){
	goto T107;}
	(void)((*(LnkLI26))(VV[19],small_fixnum(1),small_fixnum(0)));
	goto T105;
T107:;
	if(endp(cdr((V43)))){
	goto T110;}
	if(endp(cddr((V43)))){
	goto T110;}
	V44 = make_fixnum(length((V43)));
	(void)((*(LnkLI43))(VV[19],small_fixnum(2),V44));
	goto T105;
T110:;
	if(type_of(car((V43)))==t_symbol){
	goto T105;}
	(void)(car((V43)));
T105:;
	{register object V45;
	register object V46;
	register object V47;
	register object V48;
	V45= symbol_value(VV[7]);
	V46= car((V43));
	V47= Cnil;
	V48= Cnil;
T120:;
	if(!(endp((V45)))){
	goto T121;}
	{object V49 = (VFUN_NARGS=2,(*(LnkLI27))(VV[21],(V46)));
	VMR7(V49)}
T121:;
	{object V50= car((V45));
	if((V50!= VV[44]))goto T126;
	V47= Ct;
	goto T125;
T126:;
	if((V50!= VV[45]))goto T128;
	V48= Ct;
	goto T125;
T128:;
	V51= structure_ref(car((V45)),VV[0],0);
	if(!((/* INLINE-ARGS */V51)==((V46)))){
	goto T125;}
	{register object V52;
	register object V53;
	V52= (*(LnkLI46))(cadr((V43)));
	V53= car((V45));
	if(((V47))==Cnil){
	goto T136;}
	(void)(structure_set((V53),VV[0],3,Ct));
	goto T134;
T136:;
	if(((V48))==Cnil){
	goto T139;}
	(void)(structure_set((V53),VV[0],2,Ct));
	goto T134;
T139:;
	(void)(structure_set((V53),VV[0],1,Ct));
T134:;
	V54= (*(LnkLI30))(cadr((V52)));
	{object V55 = list(6,VV[19],/* INLINE-ARGS */V54,(V53),(V48),(V47),(V52));
	VMR7(V55)}}}
T125:;
	V45= cdr((V45));
	goto T120;}
}
/*	function definition for C2RETURN-FROM	*/

static L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	{object V56;
	object V57;
	object V58;
	object V59;
	check_arg(4);
	V56=(base[0]);
	V57=(base[1]);
	V58=(base[2]);
	V59=(base[3]);
	vs_top=sup;
TTL:;
	if(((V58))==Cnil){
	goto T145;}
	base[4]= (*(LnkLI47))((V56),(V59));
	vs_top=(vs_base=base+4)+1;
	return;
T145:;
	if(((V57))==Cnil){
	goto T148;}
	base[4]= (*(LnkLI48))((V56),(V59));
	vs_top=(vs_base=base+4)+1;
	return;
T148:;
	base[4]= (V56);
	base[5]= (V59);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk49)();
	return;
	}
}
/*	function definition for C2RETURN-LOCAL	*/

static L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	bds_check;
	{object V60;
	object V61;
	check_arg(2);
	V60=(base[0]);
	V61=(base[1]);
	vs_top=sup;
TTL:;
	base[2]= structure_ref((V60),VV[0],5);
	base[3]= structure_ref((V60),VV[0],4);
	bds_bind(VV[10],base[2]);
	bds_bind(VV[9],base[3]);
	base[4]= (V61);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk34)();
	bds_unwind1;
	bds_unwind1;
	return;
	}
}
/*	local entry for function C2RETURN-CLB	*/

static object LI10(V64,V65)

object V64;object V65;
{	 VMB10 VMS10 VMV10
	bds_check;
TTL:;
	bds_bind(VV[10],VV[22]);
	V66= (*(LnkLI50))((V65));
	bds_unwind1;
	princ_str("\n	unwind(frs_sch(",VV[12]);
	if((structure_ref((V64),VV[0],3))==Cnil){
	goto T160;}
	V67= structure_ref((V64),VV[0],2);
	(void)((*(LnkLI42))(/* INLINE-ARGS */V67));
	goto T158;
T160:;
	V68= structure_ref((V64),VV[0],2);
	(void)((*(LnkLI36))(/* INLINE-ARGS */V68));
T158:;
	princ_str("),Cnil);",VV[12]);
	{object V69 = Cnil;
	VMR10(V69)}
}
/*	local entry for function C2RETURN-CCB	*/

static object LI11(V72,V73)

object V72;object V73;
{	 VMB11 VMS11 VMV11
	bds_check;
TTL:;
	princ_str("\n	{frame_ptr fr;",VV[12]);
	princ_str("\n	fr=frs_sch(",VV[12]);
	V74= structure_ref((V72),VV[0],3);
	(void)((*(LnkLI51))(/* INLINE-ARGS */V74));
	princ_str(");",VV[12]);
	princ_str("\n	if(fr==NULL) FEerror(\"The block ~s is missing.\",1,VV[",VV[12]);
	V75= structure_ref((V72),VV[0],6);
	(void)((*(LnkLI52))(/* INLINE-ARGS */V75));
	princ_str("]);",VV[12]);
	bds_bind(VV[10],VV[22]);
	V76= (*(LnkLI50))((V73));
	bds_unwind1;
	princ_str("\n	unwind(fr,Cnil);}",VV[12]);
	{object V77 = Cnil;
	VMR11(V77)}
}
static object  LnkTLI52(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[52],&LnkLI52,1,ap);} /* WT1 */
static object  LnkTLI51(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[51],&LnkLI51,1,ap);} /* WT-CCB-VS */
static object  LnkTLI50(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[50],&LnkLI50,1,ap);} /* C2EXPR* */
static LnkT49(){ call_or_link(VV[49],&Lnk49);} /* C2RETURN-LOCAL */
static object  LnkTLI48(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[48],&LnkLI48,2,ap);} /* C2RETURN-CLB */
static object  LnkTLI47(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[47],&LnkLI47,2,ap);} /* C2RETURN-CCB */
static object  LnkTLI46(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[46],&LnkLI46,1,ap);} /* C1EXPR */
static object  LnkTLI43(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[43],&LnkLI43,3,ap);} /* TOO-MANY-ARGS */
static object  LnkTLI42(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[42],&LnkLI42,1,ap);} /* WT-VS* */
static object  LnkTLI41(){return call_proc0(VV[41],&LnkLI41);} /* CCB-VS-PUSH */
static object  LnkTLI40(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[40],&LnkLI40,1,ap);} /* CLINK */
static object  LnkTLI39(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[39],&LnkLI39,ap);} /* WT-CLINK */
static object  LnkTLI38(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[38],&LnkLI38,1,ap);} /* ADD-SYMBOL */
static object  LnkTLI37(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[37],&LnkLI37,ap);} /* UNWIND-EXIT */
static object  LnkTLI36(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[36],&LnkLI36,1,ap);} /* WT-VS */
static object  LnkTLI35(){return call_proc0(VV[35],&LnkLI35);} /* VS-PUSH */
static LnkT34(){ call_or_link(VV[34],&Lnk34);} /* C2EXPR */
static LnkT33(){ call_or_link(VV[33],&Lnk33);} /* C2BLOCK-LOCAL */
static object  LnkTLI32(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[32],&LnkLI32,2,ap);} /* C2BLOCK-CLB */
static object  LnkTLI31(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[31],&LnkLI31,2,ap);} /* C2BLOCK-CCB */
static object  LnkTLI30(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[30],&LnkLI30,1,ap);} /* RESET-INFO-TYPE */
static object  LnkTLI29(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[29],&LnkLI29,1,ap);} /* C1PROGN */
static object  LnkTLI28(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[28],&LnkLI28,ap);} /* MAKE-BLK */
static object  LnkTLI27(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[27],&LnkLI27,ap);} /* CMPERR */
static object  LnkTLI26(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[26],&LnkLI26,3,ap);} /* TOO-FEW-ARGS */
