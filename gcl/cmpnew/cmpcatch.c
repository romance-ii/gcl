
#include "cmpinclude.h"
#include "cmpcatch.h"
init_cmpcatch(){do_init(VV);}
/*	local entry for function C1CATCH	*/

static object LI1(V2)

register object V2;
{	 VMB1 VMS1 VMV1
TTL:;
	{object V3;
	object V4;
	V3= (VFUN_NARGS=2,(*(LnkLI23))(VV[0],Ct));
	V4= Cnil;
	setq(VV[1],number_plus(symbol_value(VV[1]),small_fixnum(1)));
	if(!(endp((V2)))){
	goto T5;}
	(void)((*(LnkLI24))(VV[2],small_fixnum(1),small_fixnum(0)));
T5:;
	V4= (*(LnkLI25))(car((V2)));
	(void)((*(LnkLI26))((V3),cadr((V4))));
	V2= (*(LnkLI27))(cdr((V2)));
	(void)((*(LnkLI26))((V3),cadr((V2))));
	{object V5 = list(4,VV[2],(V3),(V4),(V2));
	VMR1(V5)}}
}
/*	local entry for function C2CATCH	*/

static object LI2(V8,V9)

object V8;object V9;
{	 VMB2 VMS2 VMV2
	bds_check;
TTL:;
	bds_bind(VV[3],symbol_value(VV[3]));
	bds_bind(VV[4],VV[5]);
	V10= (*(LnkLI28))((V8));
	bds_unwind1;
	princ_str("\n	if(nlj_active)",VV[6]);
	princ_str("\n	{nlj_active=FALSE;frs_pop();",VV[6]);
	(void)((VFUN_NARGS=2,(*(LnkLI29))(VV[7],VV[8])));
	princ_char(125,VV[6]);
	princ_str("\n	else{",VV[6]);
	base[1]= make_cons(VV[10],symbol_value(VV[9]));
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
}
/*	local entry for function SET-PUSH-CATCH-FRAME	*/

static object LI3(V13)

object V13;
{	 VMB3 VMS3 VMV3
TTL:;
	princ_str("\n	frs_push(FRS_CATCH,",VV[6]);
	(void)((*(LnkLI31))((V13)));
	princ_str(");",VV[6]);
	{object V14 = Cnil;
	VMR3(V14)}
}
/*	local entry for function C1UNWIND-PROTECT	*/

static object LI4(V16)

register object V16;
{	 VMB4 VMS4 VMV4
	bds_check;
TTL:;
	{object V17;
	object V18;
	V17= (VFUN_NARGS=2,(*(LnkLI23))(VV[0],Ct));
	V18= Cnil;
	setq(VV[1],number_plus(symbol_value(VV[1]),small_fixnum(1)));
	if(!(endp((V16)))){
	goto T35;}
	(void)((*(LnkLI24))(VV[11],small_fixnum(1),small_fixnum(0)));
T35:;
	base[1]= make_cons(VV[13],symbol_value(VV[12]));
	base[2]= make_cons(VV[13],symbol_value(VV[14]));
	base[3]= make_cons(VV[13],symbol_value(VV[15]));
	bds_bind(VV[12],base[1]);
	bds_bind(VV[14],base[2]);
	bds_bind(VV[15],base[3]);
	V19= (*(LnkLI25))(car((V16)));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	V18= V19;
	(void)((*(LnkLI26))((V17),cadr((V18))));
	V16= (*(LnkLI27))(cdr((V16)));
	(void)((*(LnkLI26))((V17),cadr((V16))));
	{object V20 = list(4,VV[11],(V17),(V18),(V16));
	VMR4(V20)}}
}
/*	local entry for function C2UNWIND-PROTECT	*/

static object LI5(V23,V24)

object V23;object V24;
{	 VMB5 VMS5 VMV5
	bds_check;
TTL:;
	{register object V25;
	object V26;
	bds_bind(VV[3],symbol_value(VV[3]));
	V25= list(2,VV[16],(*(LnkLI32))());
	V26= Cnil;
	princ_str("\n	{object tag;frame_ptr fr;object p;bool active;",VV[6]);
	princ_str("\n	frs_push(FRS_PROTECT,Cnil);",VV[6]);
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
	setq(VV[20],Ct);
	princ_str("\n	for(p= ",VV[6]);
	(void)((*(LnkLI31))((V25)));
	princ_str(";!endp(p);p=MMcdr(p))vs_push(MMcar(p));",VV[6]);
	princ_str("\n	if(active)unwind(fr,tag);else{",VV[6]);
	if(((V26))==Cnil){
	goto T94;}
	V28= car((V26));
	goto T92;
T94:;
	V28= Cnil;
T92:;
	(void)((VFUN_NARGS=3,(*(LnkLI29))(VV[7],Cnil,V28)));
	princ_str("}}",VV[6]);
	{object V29 = Cnil;
	bds_unwind1;
	VMR5(V29)}}
}
/*	local entry for function C1THROW	*/

static object LI6(V31)

register object V31;
{	 VMB6 VMS6 VMV6
TTL:;
	{object V32;
	object V33;
	V32= (VFUN_NARGS=0,(*(LnkLI23))());
	V33= Cnil;
	if(endp((V31))){
	goto T100;}
	if(!(endp(cdr((V31))))){
	goto T99;}
T100:;
	V34 = make_fixnum(length((V31)));
	(void)((*(LnkLI24))(VV[21],small_fixnum(2),V34));
T99:;
	if(endp(cddr((V31)))){
	goto T104;}
	V35 = make_fixnum(length((V31)));
	(void)((*(LnkLI34))(VV[21],small_fixnum(2),V35));
T104:;
	V33= (*(LnkLI25))(car((V31)));
	(void)((*(LnkLI26))((V32),cadr((V33))));
	V31= (*(LnkLI25))(cadr((V31)));
	(void)((*(LnkLI26))((V32),cadr((V31))));
	{object V36 = list(4,VV[21],(V32),(V33),(V31));
	VMR6(V36)}}
}
/*	local entry for function C2THROW	*/

static object LI7(V39,V40)

register object V39;object V40;
{	 VMB7 VMS7 VMV7
	bds_check;
TTL:;
	{register object V41;
	bds_bind(VV[3],symbol_value(VV[3]));
	V41= Cnil;
	princ_str("\n	{frame_ptr fr;",VV[6]);
	{object V42= car((V39));
	if((V42!= VV[35]))goto T117;
	V41= caddr((V39));
	goto T116;
T117:;
	if((V42!= VV[22]))goto T119;
	V41= make_cons(VV[22],caddr((V39)));
	goto T116;
T119:;
	V41= list(2,VV[16],(*(LnkLI32))());
	bds_bind(VV[4],(V41));
	V43= (*(LnkLI28))((V39));
	bds_unwind1;}
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
}
static object  LnkTLI34(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[34],&LnkLI34,3,ap);} /* TOO-MANY-ARGS */
static object  LnkTLI33(){return call_proc0(VV[33],&LnkLI33);} /* RESET-TOP */
static object  LnkTLI32(){return call_proc0(VV[32],&LnkLI32);} /* VS-PUSH */
static object  LnkTLI31(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[31],&LnkLI31,1,ap);} /* WT1 */
static LnkT30(){ call_or_link(VV[30],&Lnk30);} /* C2EXPR */
static object  LnkTLI29(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[29],&LnkLI29,ap);} /* UNWIND-EXIT */
static object  LnkTLI28(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[28],&LnkLI28,1,ap);} /* C2EXPR* */
static object  LnkTLI27(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[27],&LnkLI27,1,ap);} /* C1PROGN */
static object  LnkTLI26(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[26],&LnkLI26,2,ap);} /* ADD-INFO */
static object  LnkTLI25(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[25],&LnkLI25,1,ap);} /* C1EXPR */
static object  LnkTLI24(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[24],&LnkLI24,3,ap);} /* TOO-FEW-ARGS */
static object  LnkTLI23(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[23],&LnkLI23,ap);} /* MAKE-INFO */
