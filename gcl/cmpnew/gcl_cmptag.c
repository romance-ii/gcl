
#include "cmpinclude.h"
#include "gcl_cmptag.h"
void init_gcl_cmptag(){do_init(VV);}
/*	local entry for function MAKE-TAG	*/

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
	object V8;
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
	V8=(Vcs[7]);
	base[0]= VV[0];
	base[1]= (V1);
	base[2]= (V2);
	base[3]= (V3);
	base[4]= (V4);
	base[5]= (V5);
	base[6]= (V6);
	base[7]= (V7);
	base[8]= (V8);
	vs_top=(vs_base=base+0)+9;
	siLmake_structure();
	vs_top=sup;
	{object V9 = vs_base[0];
	VMR1(V9)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function JUMPS-TO-P	*/

static object LI2(V12,V13)

register object V12;object V13;
{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	{object V14;
	V14= Cnil;
	if(!(type_of((V12))!=t_cons)){
	goto T12;}
	{object V15 = Cnil;
	VMR2(V15)}
	goto T12;
T12:;
	{object V16;
	if((CMPcar((V12)))==(VV[1])){
	goto T15;}
	V16= Cnil;
	goto T14;
	goto T15;
T15:;
	V14= CMPcadddr(CMPcdr((V12)));
	base[0]= (V14);
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T17;}
	V16= Cnil;
	goto T14;
	goto T17;
T17:;
	V16= ((STREF(object,(V14),0))==((V13))?Ct:Cnil);
	goto T14;
T14:;
	if(((V16))==Cnil){
	goto T23;}
	{object V17 = (V16);
	VMR2(V17)}
	goto T23;
T23:;{object V18;
	V18= (*(LnkLI46))(CMPcar((V12)),(V13));
	if(V18==Cnil)goto T25;
	{object V19 = V18;
	VMR2(V19)}
	goto T25;
T25:;}
	V12= CMPcdr((V12));
	goto TTL;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-REG1	*/

static object LI3(V21)

register object V21;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	if(!(type_of((V21))!=t_cons)){
	goto T31;}
	base[0]= (V21);
	base[1]= VV[2];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T34;}
	V22 = CMPmake_fixnum((long)(fix(STREF(object,(V21),24)))+(fix((VV[3]->s.s_dbind))));
	V23= Ct;
	STSET(object,(V21),24, V22);
	{object V24 = V22;
	VMR3(V24)}
	goto T34;
T34:;
	{object V25 = Cnil;
	VMR3(V25)}
	goto T31;
T31:;
	(void)((*(LnkLI47))(CMPcar((V21))));
	V21= CMPcdr((V21));
	goto TTL;
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-LOOP-REGISTERS	*/

static object LI4(V27)

object V27;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{register object V28;
	register object V29;
	register object V30;
	V28= (V27);
	V29= Cnil;
	V30= Cnil;
	goto T42;
T42:;
	if(((V28))!=Cnil){
	goto T43;}
	{register object V31;
	V31= (V30);
	goto T47;
T47:;
	if(!(((V31))==((V29)))){
	goto T48;}
	{object V32 = (*(LnkLI47))(CMPcar((V31)));
	VMR4(V32)}
	goto T48;
T48:;
	(void)((*(LnkLI47))(CMPcar((V31))));
	V31= CMPcdr((V31));
	goto T47;}
	goto T43;
T43:;
	base[0]= CMPcar((V28));
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T57;}
	if((V30)!=Cnil){
	goto T62;}
	V30= (V28);
	goto T62;
T62:;
	{register object V33;
	register object V34;
	V33= CMPcdr((V28));
	V34= STREF(object,CMPcar((V28)),0);
	goto T67;
T67:;
	if(((V33))!=Cnil){
	goto T68;}
	goto T57;
	goto T68;
T68:;
	if(((*(LnkLI46))(CMPcar((V33)),(V34)))==Cnil){
	goto T72;}
	V29= (V33);
	goto T72;
T72:;
	V33= CMPcdr((V33));
	goto T67;}
	goto T57;
T57:;
	V28= CMPcdr((V28));
	goto T42;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1TAGBODY	*/

static object LI5(V36)

object V36;
{	 VMB5 VMS5 VMV5
	bds_check;
	goto TTL;
TTL:;
	{register object V37;
	bds_bind(VV[4],(VV[4]->s.s_dbind));
	V37= (VFUN_NARGS=0,(*(LnkLI48))());
	{object V38;
	object V39= (V36);
	if(V39==Cnil){
	V36= Cnil;
	goto T84;}
	base[2]=V38=MMcons(Cnil,Cnil);
	goto T85;
T85:;
	if(type_of((V39->c.c_car))==t_symbol){
	goto T87;}
	if(!(type_of((V39->c.c_car))==t_fixnum||type_of((V39->c.c_car))==t_bignum)){
	goto T88;}
	goto T87;
T87:;
	{object V41;
	V41= (VFUN_NARGS=8,(*(LnkLI49))(VV[5],(V39->c.c_car),VV[6],Cnil,VV[7],Cnil,VV[8],Cnil));
	(VV[4]->s.s_dbind)= make_cons(V41,(VV[4]->s.s_dbind));
	(V38->c.c_car)= (V41);
	goto T86;}
	goto T88;
T88:;
	(V38->c.c_car)= (V39->c.c_car);
	goto T86;
T86:;
	if((V39=MMcdr(V39))==Cnil){
	V36= base[2];
	goto T84;}
	V38=MMcdr(V38)=MMcons(Cnil,Cnil);
	goto T85;}
	goto T84;
T84:;
	{object V43;
	object V44= (V36);
	if(V44==Cnil){
	V36= Cnil;
	goto T96;}
	base[2]=V43=MMcons(Cnil,Cnil);
	goto T97;
T97:;
	base[3]= (V44->c.c_car);
	base[4]= VV[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T100;}
	(V43->c.c_car)= (V44->c.c_car);
	goto T98;
	goto T100;
T100:;
	(V43->c.c_car)= (*(LnkLI50))((V44->c.c_car),(V37));
	goto T98;
T98:;
	if((V44=MMcdr(V44))==Cnil){
	V36= base[2];
	goto T96;}
	V43=MMcdr(V43)=MMcons(Cnil,Cnil);
	goto T97;}
	goto T96;
T96:;
	{register object V46;
	register object V47;
	register object V48;
	register object V49;
	register object V50;
	V46= (V36);
	V47= Cnil;
	V48= Cnil;
	V49= Cnil;
	V50= Cnil;
	goto T105;
T105:;
	if(!(((V46))==Cnil)){
	goto T106;}
	if(((V50))!=Cnil){
	goto T109;}
	if(((V49))!=Cnil){
	goto T109;}
	if(((V48))==Cnil){
	goto T110;}
	goto T109;
T109:;
	V47= reverse((V47));
	if(((V49))!=Cnil){
	goto T119;}
	if(((V50))==Cnil){
	goto T120;}
	goto T119;
T119:;
	(VV[9]->s.s_dbind)= number_plus((VV[9]->s.s_dbind),small_fixnum(1));
	goto T118;
	goto T120;
T120:;
	(void)((*(LnkLI51))((V47)));
	goto T118;
T118:;
	{object V51 = list(5,VV[10],(V37),(V49),(V50),(V47));
	bds_unwind1;
	VMR5(V51)}
	goto T110;
T110:;
	V52= (*(LnkLI52))();
	V53= make_cons(/* INLINE-ARGS */V52,(V47));
	{object V54 = list(3,VV[11],(V37),reverse(/* INLINE-ARGS */V53));
	bds_unwind1;
	VMR5(V54)}
	goto T106;
T106:;
	base[2]= CMPcar((V46));
	base[3]= VV[0];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T128;}
	if((STREF(object,CMPcar((V46)),12))==Cnil){
	goto T133;}
	{object V55;
	V55= CMPcar((V46));
	V47= make_cons((V55),(V47));}
	V56= CMPcar((V46));
	V57= (*(LnkLI53))(STREF(object,CMPcar((V46)),0));
	V58= Ct;
	STSET(object,/* INLINE-ARGS */V56,24, /* INLINE-ARGS */V57);
	(void)(/* INLINE-ARGS */V57);
	V50= Ct;
	goto T126;
	goto T133;
T133:;
	if((STREF(object,CMPcar((V46)),8))==Cnil){
	goto T141;}
	{object V59;
	V59= CMPcar((V46));
	V47= make_cons((V59),(V47));}
	V60= CMPcar((V46));
	V61= (*(LnkLI53))(STREF(object,CMPcar((V46)),0));
	V62= Ct;
	STSET(object,/* INLINE-ARGS */V60,24, /* INLINE-ARGS */V61);
	(void)(/* INLINE-ARGS */V61);
	V49= Ct;
	goto T126;
	goto T141;
T141:;
	if((STREF(object,CMPcar((V46)),4))==Cnil){
	goto T126;}
	{object V63;
	V63= CMPcar((V46));
	V47= make_cons((V63),(V47));}
	V48= Ct;
	goto T126;
	goto T128;
T128:;
	{object V64;
	V64= CMPcar((V46));
	V47= make_cons((V64),(V47));}
	goto T126;
T126:;
	V46= CMPcdr((V46));
	goto T105;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2TAGBODY	*/

static object LI6(V68,V69,V70)

object V68;object V69;object V70;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	if(((V69))==Cnil){
	goto T160;}
	{object V71 = (*(LnkLI54))((V70));
	VMR6(V71)}
	goto T160;
T160:;
	if(((V68))==Cnil){
	goto T163;}
	{object V72 = (*(LnkLI55))((V70));
	VMR6(V72)}
	goto T163;
T163:;
	{object V73 = (*(LnkLI56))((V70));
	VMR6(V73)}
	return Cnil;
}
/*	local entry for function C2TAGBODY-LOCAL	*/

static object LI7(V75)

object V75;
{	 VMB7 VMS7 VMV7
	bds_check;
	goto TTL;
TTL:;
	{register object V76;
	(VV[12]->s.s_dbind)= number_plus((VV[12]->s.s_dbind),small_fixnum(1));
	V76= make_cons((VV[12]->s.s_dbind),Cnil);
	{register object V77;
	register object V78;
	V77= (V75);
	V78= CMPcar((V77));
	goto T171;
T171:;
	if(!(((V77))==Cnil)){
	goto T172;}
	goto T167;
	goto T172;
T172:;
	base[2]= (V78);
	base[3]= VV[0];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T176;}
	(VV[12]->s.s_dbind)= number_plus((VV[12]->s.s_dbind),small_fixnum(1));
	V79= make_cons((VV[12]->s.s_dbind),Ct);
	V80= Ct;
	STSET(object,(V78),16, /* INLINE-ARGS */V79);
	(void)(/* INLINE-ARGS */V79);
	V81= Ct;
	STSET(object,(V78),20, (V76));
	(void)((V76));
	goto T176;
T176:;
	V77= CMPcdr((V77));
	V78= CMPcar((V77));
	goto T171;}
	goto T167;
T167:;
	base[1]= make_cons((V76),(VV[13]->s.s_dbind));
	bds_bind(VV[13],base[1]);
	{object V82 = (*(LnkLI57))((V75));
	bds_unwind1;
	VMR7(V82)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2TAGBODY-BODY	*/

static object LI8(V84)

object V84;
{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	{register object V85;
	register object V86;
	V85= (V84);
	V86= Cnil;
	goto T190;
T190:;
	if(!((CMPcdr((V85)))==Cnil)){
	goto T191;}
	if(((V86))==Cnil){
	goto T195;}
	{object V87 = (VFUN_NARGS=1,(*(LnkLI58))(Cnil));
	VMR8(V87)}
	goto T195;
T195:;
	base[0]= CMPcar((V85));
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T198;}
	(void)((*(LnkLI59))(STREF(object,CMPcar((V85)),28)));
	if((CMPcdr(STREF(object,CMPcar((V85)),16)))==Cnil){
	goto T203;}
	princ_str("\n	goto T",VV[14]);
	(void)((*(LnkLI60))(CMPcar(STREF(object,CMPcar((V85)),16))));
	princ_char(59,VV[14]);
	princ_str("\nT",VV[14]);
	(void)((*(LnkLI60))(CMPcar(STREF(object,CMPcar((V85)),16))));
	princ_str(":;",VV[14]);
	goto T203;
T203:;
	{object V88 = (VFUN_NARGS=1,(*(LnkLI58))(Cnil));
	VMR8(V88)}
	goto T198;
T198:;
	(VV[12]->s.s_dbind)= number_plus((VV[12]->s.s_dbind),small_fixnum(1));
	bds_bind(VV[15],make_cons((VV[12]->s.s_dbind),Cnil));
	bds_bind(VV[13],make_cons((VV[15]->s.s_dbind),(VV[13]->s.s_dbind)));
	bds_bind(VV[16],VV[17]);
	base[3]= CMPcar((V85));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk61)();
	vs_top=sup;
	if((CMPcdr((VV[15]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T213;}
	princ_str("\n	goto T",VV[14]);
	(void)((*(LnkLI60))(CMPcar((VV[15]->s.s_dbind))));
	princ_char(59,VV[14]);
	princ_str("\nT",VV[14]);
	(void)((*(LnkLI60))(CMPcar((VV[15]->s.s_dbind))));
	princ_str(":;",VV[14]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T213;
T213:;
	if((CMPcaar((V85)))==(VV[1])){
	goto T229;}
	{object V89 = (VFUN_NARGS=1,(*(LnkLI58))(Cnil));
	VMR8(V89)}
	goto T229;
T229:;
	{object V90 = Cnil;
	VMR8(V90)}
	goto T191;
T191:;
	if(((V86))==Cnil){
	goto T234;}
	V86= Cnil;
	goto T232;
	goto T234;
T234:;
	base[0]= CMPcar((V85));
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T238;}
	(void)((*(LnkLI59))(STREF(object,CMPcar((V85)),28)));
	if((CMPcdr(STREF(object,CMPcar((V85)),16)))==Cnil){
	goto T232;}
	princ_str("\n	goto T",VV[14]);
	(void)((*(LnkLI60))(CMPcar(STREF(object,CMPcar((V85)),16))));
	princ_char(59,VV[14]);
	princ_str("\nT",VV[14]);
	(void)((*(LnkLI60))(CMPcar(STREF(object,CMPcar((V85)),16))));
	princ_str(":;",VV[14]);
	goto T232;
	goto T238;
T238:;
	base[3]= CMPcadr((V85));
	base[4]= VV[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T254;}
	V86= Ct;
	bds_bind(VV[15],STREF(object,CMPcadr((V85)),16));
	goto T252;
	goto T254;
T254:;
	(VV[12]->s.s_dbind)= number_plus((VV[12]->s.s_dbind),small_fixnum(1));
	bds_bind(VV[15],make_cons((VV[12]->s.s_dbind),Cnil));
	goto T252;
T252:;
	bds_bind(VV[13],make_cons((VV[15]->s.s_dbind),(VV[13]->s.s_dbind)));
	bds_bind(VV[16],VV[17]);
	base[3]= CMPcar((V85));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk61)();
	vs_top=sup;
	base[3]= CMPcadr((V85));
	base[4]= VV[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T265;}
	goto T264;
	goto T265;
T265:;
	(void)((*(LnkLI59))(STREF(object,CMPcadr((V85)),28)));
	goto T264;
T264:;
	if((CMPcdr((VV[15]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T232;}
	princ_str("\n	goto T",VV[14]);
	(void)((*(LnkLI60))(CMPcar((VV[15]->s.s_dbind))));
	princ_char(59,VV[14]);
	princ_str("\nT",VV[14]);
	(void)((*(LnkLI60))(CMPcar((VV[15]->s.s_dbind))));
	princ_str(":;",VV[14]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T232;
T232:;
	V85= CMPcdr((V85));
	goto T190;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2TAGBODY-CLB	*/

static object LI9(V92)

object V92;
{	 VMB9 VMS9 VMV9
	bds_check;
	goto TTL;
TTL:;
	{register object V93;
	(VV[12]->s.s_dbind)= number_plus((VV[12]->s.s_dbind),small_fixnum(1));
	V93= make_cons((VV[12]->s.s_dbind),Cnil);
	bds_bind(VV[18],(VV[18]->s.s_dbind));
	{register object V94;
	base[2]= make_cons(VV[19],(VV[13]->s.s_dbind));
	V94= (*(LnkLI62))();
	bds_bind(VV[13],base[2]);
	princ_str("\n	",VV[14]);
	(void)((*(LnkLI63))((V94)));
	princ_str("=alloc_frame_id();",VV[14]);
	princ_str("\n	frs_push(FRS_CATCH,",VV[14]);
	(void)((*(LnkLI63))((V94)));
	princ_str(");",VV[14]);
	princ_str("\n	if(nlj_active){",VV[14]);
	princ_str("\n	nlj_active=FALSE;",VV[14]);
	{register object V95;
	register object V96;
	V95= (V92);
	V96= CMPcar((V95));
	goto T302;
T302:;
	if(!(((V95))==Cnil)){
	goto T303;}
	goto T298;
	goto T303;
T303:;
	base[4]= (V96);
	base[5]= VV[0];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T307;}
	(VV[12]->s.s_dbind)= number_plus((VV[12]->s.s_dbind),small_fixnum(1));
	V97= make_cons((VV[12]->s.s_dbind),Ct);
	V98= Ct;
	STSET(object,(V96),16, /* INLINE-ARGS */V97);
	(void)(/* INLINE-ARGS */V97);
	V99= Ct;
	STSET(object,(V96),20, (V93));
	(void)((V93));
	if((STREF(object,(V96),8))==Cnil){
	goto T307;}
	V100= Ct;
	STSET(object,(V96),8, (V94));
	(void)((V94));
	princ_str("\n	if(eql(nlj_tag,VV[",VV[14]);
	(void)((*(LnkLI60))(STREF(object,(V96),24)));
	princ_str("]))",VV[14]);
	(STREF(object,(V96),16))->c.c_cdr = Ct;
	(void)(STREF(object,(V96),16));
	princ_str("goto T",VV[14]);
	(void)((*(LnkLI60))(CMPcar(STREF(object,(V96),16))));
	princ_char(59,VV[14]);
	goto T307;
T307:;
	V95= CMPcdr((V95));
	V96= CMPcar((V95));
	goto T302;}
	goto T298;
T298:;
	princ_str("\n	FEerror(\"The GO tag ~s is not established.\",1,nlj_tag);",VV[14]);
	princ_str("\n	}",VV[14]);
	base[3]= make_cons((V93),(VV[13]->s.s_dbind));
	bds_bind(VV[13],base[3]);
	{object V101 = (*(LnkLI57))((V92));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR9(V101)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2TAGBODY-CCB	*/

static object LI10(V103)

object V103;
{	 VMB10 VMS10 VMV10
	bds_check;
	goto TTL;
TTL:;
	{register object V104;
	(VV[12]->s.s_dbind)= number_plus((VV[12]->s.s_dbind),small_fixnum(1));
	V104= make_cons((VV[12]->s.s_dbind),Cnil);
	bds_bind(VV[18],(VV[18]->s.s_dbind));
	bds_bind(VV[20],(VV[20]->s.s_dbind));
	bds_bind(VV[21],(VV[21]->s.s_dbind));
	{register object V105;
	register object V106;
	base[4]= make_cons(VV[19],(VV[13]->s.s_dbind));
	V105= (*(LnkLI62))();
	bds_bind(VV[13],base[4]);
	V106= Cnil;
	princ_str("\n	",VV[14]);
	(void)((*(LnkLI63))((V105)));
	princ_str("=alloc_frame_id();",VV[14]);
	princ_str("\n	",VV[14]);
	(void)((*(LnkLI63))((V105)));
	princ_str("=MMcons(",VV[14]);
	(void)((*(LnkLI63))((V105)));
	princ_char(44,VV[14]);
	(void)((VFUN_NARGS=0,(*(LnkLI64))()));
	princ_str(");",VV[14]);
	(void)((*(LnkLI65))((V105)));
	V106= (*(LnkLI66))();
	princ_str("\n	frs_push(FRS_CATCH,",VV[14]);
	(void)((*(LnkLI67))((V105)));
	princ_str(");",VV[14]);
	princ_str("\n	if(nlj_active){",VV[14]);
	princ_str("\n	nlj_active=FALSE;",VV[14]);
	{register object V107;
	register object V108;
	V107= (V103);
	V108= CMPcar((V107));
	goto T370;
T370:;
	if(!(((V107))==Cnil)){
	goto T371;}
	goto T366;
	goto T371;
T371:;
	base[6]= (V108);
	base[7]= VV[0];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T375;}
	(VV[12]->s.s_dbind)= number_plus((VV[12]->s.s_dbind),small_fixnum(1));
	V109= make_cons((VV[12]->s.s_dbind),Ct);
	V110= Ct;
	STSET(object,(V108),16, /* INLINE-ARGS */V109);
	(void)(/* INLINE-ARGS */V109);
	V111= Ct;
	STSET(object,(V108),20, (V104));
	(void)((V104));
	if((STREF(object,(V108),8))!=Cnil){
	goto T383;}
	if((STREF(object,(V108),12))==Cnil){
	goto T375;}
	goto T383;
T383:;
	V112= Ct;
	STSET(object,(V108),8, (V105));
	(void)((V105));
	if((STREF(object,(V108),12))==Cnil){
	goto T388;}
	V113= Ct;
	STSET(object,(V108),12, (V106));
	(void)((V106));
	goto T388;
T388:;
	princ_str("\n	if(eql(nlj_tag,VV[",VV[14]);
	(void)((*(LnkLI60))(STREF(object,(V108),24)));
	princ_str("]))",VV[14]);
	(STREF(object,(V108),16))->c.c_cdr = Ct;
	(void)(STREF(object,(V108),16));
	princ_str("goto T",VV[14]);
	(void)((*(LnkLI60))(CMPcar(STREF(object,(V108),16))));
	princ_char(59,VV[14]);
	goto T375;
T375:;
	V107= CMPcdr((V107));
	V108= CMPcar((V107));
	goto T370;}
	goto T366;
T366:;
	princ_str("\n	FEerror(\"The GO tag ~s is not established.\",1,nlj_tag);",VV[14]);
	princ_str("\n	}",VV[14]);
	base[5]= make_cons((V104),(VV[13]->s.s_dbind));
	bds_bind(VV[13],base[5]);
	{object V114 = (*(LnkLI57))((V103));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR10(V114)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1GO	*/

static object LI11(V116)

object V116;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	if(!(((V116))==Cnil)){
	goto T411;}
	(void)((*(LnkLI68))(VV[1],small_fixnum(1),small_fixnum(0)));
	goto T409;
	goto T411;
T411:;
	if((CMPcdr((V116)))==Cnil){
	goto T414;}
	V117 = CMPmake_fixnum((long)length((V116)));
	(void)((*(LnkLI69))(VV[1],small_fixnum(1),V117));
	goto T409;
	goto T414;
T414:;
	if(type_of(CMPcar((V116)))==t_symbol){
	goto T409;}
	{object V118= CMPcar((V116));
	if(type_of(V118)==t_fixnum||type_of(V118)==t_bignum){
	goto T409;}}
	(void)(CMPcar((V116)));
	goto T409;
T409:;
	{register object V119;
	register object V120;
	register object V121;
	register object V122;
	V119= (VV[4]->s.s_dbind);
	V120= CMPcar((V116));
	V121= Cnil;
	V122= Cnil;
	goto T424;
T424:;
	if(!(((V119))==Cnil)){
	goto T425;}
	{object V123 = (VFUN_NARGS=2,(*(LnkLI70))(VV[23],(V120)));
	VMR11(V123)}
	goto T425;
T425:;
	{object V124= CMPcar((V119));
	if((V124!= VV[71]))goto T430;
	V121= Ct;
	goto T429;
	goto T430;
T430:;
	if((V124!= VV[72]))goto T432;
	V122= Ct;
	goto T429;
	goto T432;
T432:;
	if(!((STREF(object,CMPcar((V119)),0))==((V120)))){
	goto T429;}
	{register object V125;
	V125= CMPcar((V119));
	if(((V121))==Cnil){
	goto T439;}
	V126= Ct;
	STSET(object,(V125),12, Ct);
	(void)(Ct);
	goto T437;
	goto T439;
T439:;
	if(((V122))==Cnil){
	goto T442;}
	V127= Ct;
	STSET(object,(V125),8, Ct);
	(void)(Ct);
	goto T437;
	goto T442;
T442:;
	V128= Ct;
	STSET(object,(V125),4, Ct);
	(void)(Ct);
	goto T437;
T437:;
	{object V129 = list(5,VV[1],(VV[24]->s.s_dbind),(V122),(V121),(V125));
	VMR11(V129)}}}
	goto T429;
T429:;
	V119= CMPcdr((V119));
	goto T424;}
	return Cnil;
}
/*	local entry for function C2GO	*/

static object LI12(V133,V134,V135)

object V133;object V134;object V135;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	if(((V134))==Cnil){
	goto T448;}
	{object V136 = (*(LnkLI73))((V135));
	VMR12(V136)}
	goto T448;
T448:;
	if(((V133))==Cnil){
	goto T451;}
	{object V137 = (*(LnkLI74))((V135));
	VMR12(V137)}
	goto T451;
T451:;
	{object V138 = (*(LnkLI75))((V135));
	VMR12(V138)}
	return Cnil;
}
/*	local entry for function C2GO-LOCAL	*/

static object LI13(V140)

object V140;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	(void)((*(LnkLI76))(STREF(object,(V140),20)));
	princ_str("\n	",VV[14]);
	(STREF(object,(V140),16))->c.c_cdr = Ct;
	(void)(STREF(object,(V140),16));
	princ_str("goto T",VV[14]);
	(void)((*(LnkLI60))(CMPcar(STREF(object,(V140),16))));
	princ_char(59,VV[14]);
	{object V141 = Cnil;
	VMR13(V141)}
	return Cnil;
}
/*	local entry for function C2GO-CLB	*/

static object LI14(V143)

register object V143;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	princ_str("\n	vs_base=vs_top;",VV[14]);
	princ_str("\n	unwind(frs_sch(",VV[14]);
	if((STREF(object,(V143),12))==Cnil){
	goto T465;}
	(void)((*(LnkLI67))(STREF(object,(V143),8)));
	goto T463;
	goto T465;
T465:;
	(void)((*(LnkLI63))(STREF(object,(V143),8)));
	goto T463;
T463:;
	princ_str("),VV[",VV[14]);
	(void)((*(LnkLI60))(STREF(object,(V143),24)));
	princ_str("]);",VV[14]);
	{object V144 = Cnil;
	VMR14(V144)}
	return Cnil;
}
/*	local entry for function C2GO-CCB	*/

static object LI15(V146)

object V146;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	princ_str("\n	{frame_ptr fr;",VV[14]);
	princ_str("\n	fr=frs_sch(",VV[14]);
	(void)((*(LnkLI77))(STREF(object,(V146),12)));
	princ_str(");",VV[14]);
	princ_str("\n	if(fr==NULL)FEerror(\"The GO tag ~s is missing.\",1,VV[",VV[14]);
	(void)((*(LnkLI60))(STREF(object,(V146),24)));
	princ_str("]);",VV[14]);
	princ_str("\n	vs_base=vs_top;",VV[14]);
	princ_str("\n	unwind(fr,VV[",VV[14]);
	(void)((*(LnkLI60))(STREF(object,(V146),24)));
	princ_str("]);}",VV[14]);
	{object V147 = Cnil;
	VMR15(V147)}
	return Cnil;
}
/*	local entry for function WT-SWITCH-CASE	*/

static object LI16(V149)

register object V149;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	if(((V149))==Cnil){
	goto T487;}
	princ_str("\n	",VV[14]);
	if(!(type_of((V149))==t_fixnum)){
	goto T493;}
	V150= VV[25];
	goto T491;
	goto T493;
T493:;
	V150= VV[26];
	goto T491;
T491:;
	(void)((*(LnkLI60))(V150));
	(void)((*(LnkLI60))((V149)));
	princ_char(58,VV[14]);
	{object V151 = Cnil;
	VMR16(V151)}
	goto T487;
T487:;
	{object V152 = Cnil;
	VMR16(V152)}
	return Cnil;
}
/*	local entry for function C1SWITCH	*/

static object LI17(V154)

object V154;
{	 VMB17 VMS17 VMV17
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[4],(VV[4]->s.s_dbind));
	{object V155;
	register object V156;
	object V157;
	V155= CMPcar((V154));
	V156= CMPcdr((V154));
	V157= (*(LnkLI78))((V155));
	base[4]= CMPcadr((V157));
	base[5]= VV[27];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T501;}
	base[4]= STREF(object,CMPcadr((V157)),8);
	base[5]= VV[28];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk79)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T501;}{object V158;
	{register object x= Ct,V159= (V156);
	while(V159!=Cnil)
	if(eql(x,V159->c.c_car)){
	V158= V159;
	goto T511;
	}else V159=V159->c.c_cdr;
	V158= Cnil;}
	goto T511;
T511:;
	if(V158==Cnil)goto T510;
	goto T509;
	goto T510;
T510:;}
	V160= make_cons(Ct,Cnil);
	V156= append((V156),/* INLINE-ARGS */V160);
	goto T509;
T509:;
	{object V161;
	object V162= (V156);
	if(V162==Cnil){
	V156= Cnil;
	goto T514;}
	base[4]=V161=MMcons(Cnil,Cnil);
	goto T515;
T515:;
	{register object V163;
	V163= (V162->c.c_car);
	if(type_of((V163))==t_symbol){
	goto T517;}
	if(!(type_of((V163))==t_fixnum||type_of((V163))==t_bignum)){
	goto T518;}
	goto T517;
T517:;
	{register object V164;
	V164= (VFUN_NARGS=8,(*(LnkLI49))(VV[5],(V163),VV[6],Cnil,VV[7],Cnil,VV[8],Cnil));
	if(!(type_of((V163))==t_fixnum)){
	goto T525;}
	V165= Ct;
	STSET(object,(V164),4, Ct);
	(void)(Ct);
	V166= Ct;
	STSET(object,(V164),28, (V163));
	(void)((V163));
	goto T523;
	goto T525;
T525:;
	if(!((Ct)==((V163)))){
	goto T523;}
	V167= Ct;
	STSET(object,(V164),4, Ct);
	(void)(Ct);
	V168= Ct;
	STSET(object,(V164),28, VV[29]);
	(void)(VV[29]);
	goto T523;
T523:;
	(V161->c.c_car)= (V164);
	goto T516;}
	goto T518;
T518:;
	(V161->c.c_car)= (V163);}
	goto T516;
T516:;
	if((V162=MMcdr(V162))==Cnil){
	V156= base[4];
	goto T514;}
	V161=MMcdr(V161)=MMcons(Cnil,Cnil);
	goto T515;}
	goto T514;
T514:;
	{object V169;
	V170= append((V156),VV[30]);
	V169= (*(LnkLI80))(/* INLINE-ARGS */V170);
	V171= list(3,VV[31],CMPcadr((V169)),(V157));
	{object V172 = nconc(/* INLINE-ARGS */V171,CMPcddr((V169)));
	bds_unwind1;
	VMR17(V172)}}
	goto T501;
T501:;
	V173= make_cons(VV[31],(V154));
	V174= (*(LnkLI81))(/* INLINE-ARGS */V173);
	{object V175 = (*(LnkLI78))(/* INLINE-ARGS */V174);
	bds_unwind1;
	VMR17(V175)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2SWITCH	*/

static object LI18(V180,V181,V182,V183)

object V180;object V181;object V182;object V183;
{	 VMB18 VMS18 VMV18
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[32],small_fixnum(0));
	bds_bind(VV[18],(VV[18]->s.s_dbind));
	{object V184;
	V185= make_cons((V180),Cnil);
	V184= (VFUN_NARGS=2,(*(LnkLI82))(/* INLINE-ARGS */V185,VV[33]));
	base[2]= VV[34];
	base[3]= (V184);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk83)();
	vs_top=sup;
	if(((V182))==Cnil){
	goto T538;}
	(void)((*(LnkLI54))((V183)));
	goto T536;
	goto T538;
T538:;
	if(((V181))==Cnil){
	goto T541;}
	(void)((*(LnkLI55))((V183)));
	goto T536;
	goto T541;
T541:;
	(void)((*(LnkLI56))((V183)));
	goto T536;
T536:;
	princ_char(125,VV[14]);
	(void)((VFUN_NARGS=1,(*(LnkLI58))(Cnil)));
	{object V186 = (*(LnkLI84))();
	bds_unwind1;
	bds_unwind1;
	VMR18(V186)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for SWITCH	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	vs_top=sup;
	{object V187=base[0]->c.c_cdr;
	base[2]= (V187->c.c_car);
	V187=V187->c.c_cdr;
	base[3]= V187;
	base[4]= Cnil;}
	{register object V188;
	register object V189;
	V188= base[3];
	V189= CMPcar((V188));
	goto T551;
T551:;
	if(!(((V188))==Cnil)){
	goto T552;}
	goto T547;
	goto T552;
T552:;
	if(!(type_of((V189))==t_fixnum||type_of((V189))==t_bignum)){
	goto T556;}
	{register object V190;
	V191= list(3,VV[36],(V189),base[2]);
	V190= list(4,VV[35],/* INLINE-ARGS */V191,list(2,VV[1],(V189)),Cnil);
	base[4]= make_cons((V190),base[4]);}
	goto T556;
T556:;
	V188= CMPcdr((V188));
	V189= CMPcar((V188));
	goto T551;}
	goto T547;
T547:;
	V192= nreverse(base[4]);
	base[5]= base[3];
	{register object x= Ct,V194= base[3];
	while(V194!=Cnil)
	if(eql(x,V194->c.c_car)){
	goto T571;
	}else V194=V194->c.c_cdr;
	goto T570;}
	goto T571;
T571:;
	base[6]= Cnil;
	goto T568;
	goto T570;
T570:;
	base[6]= VV[38];
	goto T568;
T568:;
	base[7]= VV[39];
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V193= vs_base[0];
	V195= make_cons(VV[37],V193);
	V196= append(/* INLINE-ARGS */V192,/* INLINE-ARGS */V195);
	base[5]= make_cons(VV[10],/* INLINE-ARGS */V196);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for SWITCH-FINISH	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	vs_top=sup;
	base[2]= VV[40];
	vs_top=(vs_base=base+2)+1;
	return;
}
static object  LnkTLI84(){return call_proc0(VV[84],(void **)(void *)&LnkLI84);} /* CLOSE-INLINE-BLOCKS */
static void LnkT83(){ call_or_link(VV[83],(void **)(void *)&Lnk83);} /* WT-INLINE-LOC */
static object  LnkTLI82(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[82],(void **)(void *)&LnkLI82,first,ap);va_end(ap);return V1;} /* INLINE-ARGS */
static object  LnkTLI81(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[81],(void **)(void *)&LnkLI81,1,first,ap);va_end(ap);return V1;} /* CMP-MACROEXPAND-1 */
static object  LnkTLI80(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[80],(void **)(void *)&LnkLI80,1,first,ap);va_end(ap);return V1;} /* C1TAGBODY */
static void LnkT79(){ call_or_link(VV[79],(void **)(void *)&Lnk79);} /* SUBTYPEP */
static object  LnkTLI78(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[78],(void **)(void *)&LnkLI78,1,first,ap);va_end(ap);return V1;} /* C1EXPR */
static object  LnkTLI77(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[77],(void **)(void *)&LnkLI77,1,first,ap);va_end(ap);return V1;} /* WT-CCB-VS */
static object  LnkTLI76(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[76],(void **)(void *)&LnkLI76,1,first,ap);va_end(ap);return V1;} /* UNWIND-NO-EXIT */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[75],(void **)(void *)&LnkLI75,1,first,ap);va_end(ap);return V1;} /* C2GO-LOCAL */
static object  LnkTLI74(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[74],(void **)(void *)&LnkLI74,1,first,ap);va_end(ap);return V1;} /* C2GO-CLB */
static object  LnkTLI73(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[73],(void **)(void *)&LnkLI73,1,first,ap);va_end(ap);return V1;} /* C2GO-CCB */
static object  LnkTLI70(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[70],(void **)(void *)&LnkLI70,first,ap);va_end(ap);return V1;} /* CMPERR */
static object  LnkTLI69(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[69],(void **)(void *)&LnkLI69,3,first,ap);va_end(ap);return V1;} /* TOO-MANY-ARGS */
static object  LnkTLI68(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[68],(void **)(void *)&LnkLI68,3,first,ap);va_end(ap);return V1;} /* TOO-FEW-ARGS */
static object  LnkTLI67(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[67],(void **)(void *)&LnkLI67,1,first,ap);va_end(ap);return V1;} /* WT-VS* */
static object  LnkTLI66(){return call_proc0(VV[66],(void **)(void *)&LnkLI66);} /* CCB-VS-PUSH */
static object  LnkTLI65(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[65],(void **)(void *)&LnkLI65,1,first,ap);va_end(ap);return V1;} /* CLINK */
static object  LnkTLI64(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[64],(void **)(void *)&LnkLI64,first,ap);va_end(ap);return V1;} /* WT-CLINK */
static object  LnkTLI63(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[63],(void **)(void *)&LnkLI63,1,first,ap);va_end(ap);return V1;} /* WT-VS */
static object  LnkTLI62(){return call_proc0(VV[62],(void **)(void *)&LnkLI62);} /* VS-PUSH */
static void LnkT61(){ call_or_link(VV[61],(void **)(void *)&Lnk61);} /* C2EXPR */
static object  LnkTLI60(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[60],(void **)(void *)&LnkLI60,1,first,ap);va_end(ap);return V1;} /* WT1 */
static object  LnkTLI59(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[59],(void **)(void *)&LnkLI59,1,first,ap);va_end(ap);return V1;} /* WT-SWITCH-CASE */
static object  LnkTLI58(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[58],(void **)(void *)&LnkLI58,first,ap);va_end(ap);return V1;} /* UNWIND-EXIT */
static object  LnkTLI57(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[57],(void **)(void *)&LnkLI57,1,first,ap);va_end(ap);return V1;} /* C2TAGBODY-BODY */
static object  LnkTLI56(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[56],(void **)(void *)&LnkLI56,1,first,ap);va_end(ap);return V1;} /* C2TAGBODY-LOCAL */
static object  LnkTLI55(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[55],(void **)(void *)&LnkLI55,1,first,ap);va_end(ap);return V1;} /* C2TAGBODY-CLB */
static object  LnkTLI54(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[54],(void **)(void *)&LnkLI54,1,first,ap);va_end(ap);return V1;} /* C2TAGBODY-CCB */
static object  LnkTLI53(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[53],(void **)(void *)&LnkLI53,1,first,ap);va_end(ap);return V1;} /* ADD-OBJECT */
static object  LnkTLI52(){return call_proc0(VV[52],(void **)(void *)&LnkLI52);} /* C1NIL */
static object  LnkTLI51(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[51],(void **)(void *)&LnkLI51,1,first,ap);va_end(ap);return V1;} /* ADD-LOOP-REGISTERS */
static object  LnkTLI50(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[50],(void **)(void *)&LnkLI50,2,first,ap);va_end(ap);return V1;} /* C1EXPR* */
static object  LnkTLI49(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[49],(void **)(void *)&LnkLI49,first,ap);va_end(ap);return V1;} /* MAKE-TAG */
static object  LnkTLI48(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[48],(void **)(void *)&LnkLI48,first,ap);va_end(ap);return V1;} /* MAKE-INFO */
static object  LnkTLI47(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[47],(void **)(void *)&LnkLI47,1,first,ap);va_end(ap);return V1;} /* ADD-REG1 */
static object  LnkTLI46(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[46],(void **)(void *)&LnkLI46,2,first,ap);va_end(ap);return V1;} /* JUMPS-TO-P */
static void LnkT45(){ call_or_link(VV[45],(void **)(void *)&Lnk45);} /* STRUCTURE-SUBTYPE-P */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

