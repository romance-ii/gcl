
#include "cmpinclude.h"
#include "cmptag.h"
void init_cmptag(){do_init(VV);}
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
	if((car((V12)))==(VV[1])){
	goto T15;}
	V16= Cnil;
	goto T14;
	goto T15;
T15:;
	V14= cadddr(cdr((V12)));
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
	V17= structure_ref((V14),VV[0],0);
	V16= ((/* INLINE-ARGS */V17)==((V13))?Ct:Cnil);
	goto T14;
T14:;
	if(((V16))==Cnil){
	goto T23;}
	{object V18 = (V16);
	VMR2(V18)}
	goto T23;
T23:;{object V19;
	V19= (*(LnkLI46))(car((V12)),(V13));
	if(V19==Cnil)goto T25;
	{object V20 = V19;
	VMR2(V20)}
	goto T25;
T25:;}
	V12= cdr((V12));
	goto TTL;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-REG1	*/

static object LI3(V22)

register object V22;
{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	if(!(type_of((V22))!=t_cons)){
	goto T31;}
	base[0]= (V22);
	base[1]= VV[2];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T34;}
	{long V23= fix(structure_ref((V22),VV[2],6));
	V24 = make_fixnum((long)(/* INLINE-ARGS */V23)+(fix(symbol_value(VV[3]))));
	{object V25 = structure_set((V22),VV[2],6,V24);
	VMR3(V25)}}
	goto T34;
T34:;
	{object V26 = Cnil;
	VMR3(V26)}
	goto T31;
T31:;
	(void)((*(LnkLI47))(car((V22))));
	V22= cdr((V22));
	goto TTL;
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function ADD-LOOP-REGISTERS	*/

static object LI4(V28)

object V28;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{register object V29;
	register object V30;
	register object V31;
	V29= (V28);
	V30= Cnil;
	V31= Cnil;
	goto T42;
T42:;
	if(((V29))!=Cnil){
	goto T43;}
	{register object V32;
	V32= (V31);
	goto T47;
T47:;
	if(!(((V32))==((V30)))){
	goto T48;}
	{object V33 = (*(LnkLI47))(car((V32)));
	VMR4(V33)}
	goto T48;
T48:;
	(void)((*(LnkLI47))(car((V32))));
	V32= cdr((V32));
	goto T47;}
	goto T43;
T43:;
	base[0]= car((V29));
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T57;}
	if((V31)!=Cnil){
	goto T62;}
	V31= (V29);
	goto T62;
T62:;
	{register object V34;
	register object V35;
	V34= cdr((V29));
	V35= structure_ref(car((V29)),VV[0],0);
	goto T67;
T67:;
	if(((V34))!=Cnil){
	goto T68;}
	goto T57;
	goto T68;
T68:;
	if(((*(LnkLI46))(car((V34)),(V35)))==Cnil){
	goto T72;}
	V30= (V34);
	goto T72;
T72:;
	V34= cdr((V34));
	goto T67;}
	goto T57;
T57:;
	V29= cdr((V29));
	goto T42;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1TAGBODY	*/

static object LI5(V37)

object V37;
{	 VMB5 VMS5 VMV5
	bds_check;
	goto TTL;
TTL:;
	{register object V38;
	bds_bind(VV[4],symbol_value(VV[4]));
	V38= (VFUN_NARGS=0,(*(LnkLI48))());
	{object V39;
	object V40= (V37);
	if(endp(V40)){
	V37= Cnil;
	goto T84;}
	base[2]=V39=MMcons(Cnil,Cnil);
	goto T85;
T85:;
	if(type_of((V40->c.c_car))==t_symbol){
	goto T87;}
	if(!(type_of((V40->c.c_car))==t_fixnum||type_of((V40->c.c_car))==t_bignum)){
	goto T88;}
	goto T87;
T87:;
	{object V42;
	V42= (VFUN_NARGS=8,(*(LnkLI49))(VV[5],(V40->c.c_car),VV[6],Cnil,VV[7],Cnil,VV[8],Cnil));
	(VV[4]->s.s_dbind)= make_cons(V42,(VV[4]->s.s_dbind));
	(V39->c.c_car)= (V42);
	goto T86;}
	goto T88;
T88:;
	(V39->c.c_car)= (V40->c.c_car);
	goto T86;
T86:;
	V40=MMcdr(V40);
	if(endp(V40)){
	V37= base[2];
	goto T84;}
	V39=MMcdr(V39)=MMcons(Cnil,Cnil);
	goto T85;}
	goto T84;
T84:;
	{object V44;
	object V45= (V37);
	if(endp(V45)){
	V37= Cnil;
	goto T96;}
	base[2]=V44=MMcons(Cnil,Cnil);
	goto T97;
T97:;
	base[3]= (V45->c.c_car);
	base[4]= VV[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T100;}
	(V44->c.c_car)= (V45->c.c_car);
	goto T98;
	goto T100;
T100:;
	(V44->c.c_car)= (*(LnkLI50))((V45->c.c_car),(V38));
	goto T98;
T98:;
	V45=MMcdr(V45);
	if(endp(V45)){
	V37= base[2];
	goto T96;}
	V44=MMcdr(V44)=MMcons(Cnil,Cnil);
	goto T97;}
	goto T96;
T96:;
	{register object V47;
	register object V48;
	register object V49;
	register object V50;
	register object V51;
	V47= (V37);
	V48= Cnil;
	V49= Cnil;
	V50= Cnil;
	V51= Cnil;
	goto T105;
T105:;
	if(!(endp_prop((V47)))){
	goto T106;}
	if(((V51))!=Cnil){
	goto T109;}
	if(((V50))!=Cnil){
	goto T109;}
	if(((V49))==Cnil){
	goto T110;}
	goto T109;
T109:;
	V48= reverse((V48));
	if(((V50))!=Cnil){
	goto T119;}
	if(((V51))==Cnil){
	goto T120;}
	goto T119;
T119:;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	goto T118;
	goto T120;
T120:;
	(void)((*(LnkLI51))((V48)));
	goto T118;
T118:;
	{object V52 = list(5,VV[10],(V38),(V50),(V51),(V48));
	bds_unwind1;
	VMR5(V52)}
	goto T110;
T110:;
	V53= (*(LnkLI52))();
	V54= make_cons(/* INLINE-ARGS */V53,(V48));
	{object V55 = list(3,VV[11],(V38),reverse(/* INLINE-ARGS */V54));
	bds_unwind1;
	VMR5(V55)}
	goto T106;
T106:;
	base[2]= car((V47));
	base[3]= VV[0];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T128;}
	if((structure_ref(car((V47)),VV[0],3))==Cnil){
	goto T133;}
	{object V56;
	V56= car((V47));
	V48= make_cons((V56),(V48));}
	V57= car((V47));
	V58= structure_ref(car((V47)),VV[0],0);
	V59= (*(LnkLI53))(/* INLINE-ARGS */V58);
	(void)(structure_set(/* INLINE-ARGS */V57,VV[0],6,/* INLINE-ARGS */V59));
	V51= Ct;
	goto T126;
	goto T133;
T133:;
	if((structure_ref(car((V47)),VV[0],2))==Cnil){
	goto T141;}
	{object V60;
	V60= car((V47));
	V48= make_cons((V60),(V48));}
	V61= car((V47));
	V62= structure_ref(car((V47)),VV[0],0);
	V63= (*(LnkLI53))(/* INLINE-ARGS */V62);
	(void)(structure_set(/* INLINE-ARGS */V61,VV[0],6,/* INLINE-ARGS */V63));
	V50= Ct;
	goto T126;
	goto T141;
T141:;
	if((structure_ref(car((V47)),VV[0],1))==Cnil){
	goto T126;}
	{object V64;
	V64= car((V47));
	V48= make_cons((V64),(V48));}
	V49= Ct;
	goto T126;
	goto T128;
T128:;
	{object V65;
	V65= car((V47));
	V48= make_cons((V65),(V48));}
	goto T126;
T126:;
	V47= cdr((V47));
	goto T105;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2TAGBODY	*/

static object LI6(V69,V70,V71)

object V69;object V70;object V71;
{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	if(((V70))==Cnil){
	goto T160;}
	{object V72 = (*(LnkLI54))((V71));
	VMR6(V72)}
	goto T160;
T160:;
	if(((V69))==Cnil){
	goto T163;}
	{object V73 = (*(LnkLI55))((V71));
	VMR6(V73)}
	goto T163;
T163:;
	{object V74 = (*(LnkLI56))((V71));
	VMR6(V74)}
	return Cnil;
}
/*	local entry for function C2TAGBODY-LOCAL	*/

static object LI7(V76)

object V76;
{	 VMB7 VMS7 VMV7
	bds_check;
	goto TTL;
TTL:;
	{register object V77;
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	V77= make_cons(symbol_value(VV[12]),Cnil);
	{register object V78;
	register object V79;
	V78= (V76);
	V79= car((V78));
	goto T171;
T171:;
	if(!(endp_prop((V78)))){
	goto T172;}
	goto T167;
	goto T172;
T172:;
	base[2]= (V79);
	base[3]= VV[0];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T176;}
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	V80= make_cons(symbol_value(VV[12]),Ct);
	(void)(structure_set((V79),VV[0],4,/* INLINE-ARGS */V80));
	(void)(structure_set((V79),VV[0],5,(V77)));
	goto T176;
T176:;
	V78= cdr((V78));
	V79= car((V78));
	goto T171;}
	goto T167;
T167:;
	base[1]= make_cons((V77),symbol_value(VV[13]));
	bds_bind(VV[13],base[1]);
	{object V81 = (*(LnkLI57))((V76));
	bds_unwind1;
	VMR7(V81)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2TAGBODY-BODY	*/

static object LI8(V83)

object V83;
{	 VMB8 VMS8 VMV8
	bds_check;
	goto TTL;
TTL:;
	{register object V84;
	register object V85;
	V84= (V83);
	V85= Cnil;
	goto T190;
T190:;
	if(!(endp_prop(cdr((V84))))){
	goto T191;}
	if(((V85))==Cnil){
	goto T195;}
	{object V86 = (VFUN_NARGS=1,(*(LnkLI58))(Cnil));
	VMR8(V86)}
	goto T195;
T195:;
	base[0]= car((V84));
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T198;}
	V87= structure_ref(car((V84)),VV[0],7);
	(void)((*(LnkLI59))(/* INLINE-ARGS */V87));
	V88= structure_ref(car((V84)),VV[0],4);
	if((cdr(/* INLINE-ARGS */V88))==Cnil){
	goto T203;}
	princ_str("\n	goto T",VV[14]);
	V89= structure_ref(car((V84)),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V89)));
	princ_char(59,VV[14]);
	princ_str("\nT",VV[14]);
	V90= structure_ref(car((V84)),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V90)));
	princ_str(":;",VV[14]);
	goto T203;
T203:;
	{object V91 = (VFUN_NARGS=1,(*(LnkLI58))(Cnil));
	VMR8(V91)}
	goto T198;
T198:;
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	bds_bind(VV[15],make_cons(symbol_value(VV[12]),Cnil));
	bds_bind(VV[13],make_cons((VV[15]->s.s_dbind),symbol_value(VV[13])));
	bds_bind(VV[16],VV[17]);
	base[3]= car((V84));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk61)();
	vs_top=sup;
	if((cdr((VV[15]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T213;}
	princ_str("\n	goto T",VV[14]);
	(void)((*(LnkLI60))(car((VV[15]->s.s_dbind))));
	princ_char(59,VV[14]);
	princ_str("\nT",VV[14]);
	(void)((*(LnkLI60))(car((VV[15]->s.s_dbind))));
	princ_str(":;",VV[14]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T213;
T213:;
	if((caar((V84)))==(VV[1])){
	goto T229;}
	{object V92 = (VFUN_NARGS=1,(*(LnkLI58))(Cnil));
	VMR8(V92)}
	goto T229;
T229:;
	{object V93 = Cnil;
	VMR8(V93)}
	goto T191;
T191:;
	if(((V85))==Cnil){
	goto T234;}
	V85= Cnil;
	goto T232;
	goto T234;
T234:;
	base[0]= car((V84));
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T238;}
	V94= structure_ref(car((V84)),VV[0],7);
	(void)((*(LnkLI59))(/* INLINE-ARGS */V94));
	V95= structure_ref(car((V84)),VV[0],4);
	if((cdr(/* INLINE-ARGS */V95))==Cnil){
	goto T232;}
	princ_str("\n	goto T",VV[14]);
	V96= structure_ref(car((V84)),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V96)));
	princ_char(59,VV[14]);
	princ_str("\nT",VV[14]);
	V97= structure_ref(car((V84)),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V97)));
	princ_str(":;",VV[14]);
	goto T232;
	goto T238;
T238:;
	base[3]= cadr((V84));
	base[4]= VV[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T254;}
	V85= Ct;
	bds_bind(VV[15],structure_ref(cadr((V84)),VV[0],4));
	goto T252;
	goto T254;
T254:;
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	bds_bind(VV[15],make_cons(symbol_value(VV[12]),Cnil));
	goto T252;
T252:;
	bds_bind(VV[13],make_cons((VV[15]->s.s_dbind),symbol_value(VV[13])));
	bds_bind(VV[16],VV[17]);
	base[3]= car((V84));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk61)();
	vs_top=sup;
	base[3]= cadr((V84));
	base[4]= VV[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T265;}
	goto T264;
	goto T265;
T265:;
	V98= structure_ref(cadr((V84)),VV[0],7);
	(void)((*(LnkLI59))(/* INLINE-ARGS */V98));
	goto T264;
T264:;
	if((cdr((VV[15]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T232;}
	princ_str("\n	goto T",VV[14]);
	(void)((*(LnkLI60))(car((VV[15]->s.s_dbind))));
	princ_char(59,VV[14]);
	princ_str("\nT",VV[14]);
	(void)((*(LnkLI60))(car((VV[15]->s.s_dbind))));
	princ_str(":;",VV[14]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T232;
T232:;
	V84= cdr((V84));
	goto T190;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2TAGBODY-CLB	*/

static object LI9(V100)

object V100;
{	 VMB9 VMS9 VMV9
	bds_check;
	goto TTL;
TTL:;
	{register object V101;
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	V101= make_cons(symbol_value(VV[12]),Cnil);
	bds_bind(VV[18],symbol_value(VV[18]));
	{register object V102;
	base[2]= make_cons(VV[19],symbol_value(VV[13]));
	V102= (*(LnkLI62))();
	bds_bind(VV[13],base[2]);
	princ_str("\n	",VV[14]);
	(void)((*(LnkLI63))((V102)));
	princ_str("=alloc_frame_id();",VV[14]);
	princ_str("\n	frs_push(FRS_CATCH,",VV[14]);
	(void)((*(LnkLI63))((V102)));
	princ_str(");",VV[14]);
	princ_str("\n	if(nlj_active){",VV[14]);
	princ_str("\n	nlj_active=FALSE;",VV[14]);
	{register object V103;
	register object V104;
	V103= (V100);
	V104= car((V103));
	goto T302;
T302:;
	if(!(endp_prop((V103)))){
	goto T303;}
	goto T298;
	goto T303;
T303:;
	base[4]= (V104);
	base[5]= VV[0];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T307;}
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	V105= make_cons(symbol_value(VV[12]),Ct);
	(void)(structure_set((V104),VV[0],4,/* INLINE-ARGS */V105));
	(void)(structure_set((V104),VV[0],5,(V101)));
	if((structure_ref((V104),VV[0],2))==Cnil){
	goto T307;}
	(void)(structure_set((V104),VV[0],2,(V102)));
	princ_str("\n	if(eql(nlj_tag,VV[",VV[14]);
	V106= structure_ref((V104),VV[0],6);
	(void)((*(LnkLI60))(/* INLINE-ARGS */V106));
	princ_str("]))",VV[14]);
	V107= structure_ref((V104),VV[0],4);
	if(type_of(/* INLINE-ARGS */V107)!=t_cons)FEwrong_type_argument(Scons,/* INLINE-ARGS */V107);
	(/* INLINE-ARGS */V107)->c.c_cdr = Ct;
	princ_str("goto T",VV[14]);
	V108= structure_ref((V104),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V108)));
	princ_char(59,VV[14]);
	goto T307;
T307:;
	V103= cdr((V103));
	V104= car((V103));
	goto T302;}
	goto T298;
T298:;
	princ_str("\n	FEerror(\"The GO tag ~s is not established.\",1,nlj_tag);",VV[14]);
	princ_str("\n	}",VV[14]);
	base[3]= make_cons((V101),(VV[13]->s.s_dbind));
	bds_bind(VV[13],base[3]);
	{object V109 = (*(LnkLI57))((V100));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR9(V109)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2TAGBODY-CCB	*/

static object LI10(V111)

object V111;
{	 VMB10 VMS10 VMV10
	bds_check;
	goto TTL;
TTL:;
	{register object V112;
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	V112= make_cons(symbol_value(VV[12]),Cnil);
	bds_bind(VV[18],symbol_value(VV[18]));
	bds_bind(VV[20],symbol_value(VV[20]));
	bds_bind(VV[21],symbol_value(VV[21]));
	{register object V113;
	register object V114;
	base[4]= make_cons(VV[19],symbol_value(VV[13]));
	V113= (*(LnkLI62))();
	bds_bind(VV[13],base[4]);
	V114= Cnil;
	princ_str("\n	",VV[14]);
	(void)((*(LnkLI63))((V113)));
	princ_str("=alloc_frame_id();",VV[14]);
	princ_str("\n	",VV[14]);
	(void)((*(LnkLI63))((V113)));
	princ_str("=MMcons(",VV[14]);
	(void)((*(LnkLI63))((V113)));
	princ_char(44,VV[14]);
	(void)((VFUN_NARGS=0,(*(LnkLI64))()));
	princ_str(");",VV[14]);
	(void)((*(LnkLI65))((V113)));
	V114= (*(LnkLI66))();
	princ_str("\n	frs_push(FRS_CATCH,",VV[14]);
	(void)((*(LnkLI67))((V113)));
	princ_str(");",VV[14]);
	princ_str("\n	if(nlj_active){",VV[14]);
	princ_str("\n	nlj_active=FALSE;",VV[14]);
	{register object V115;
	register object V116;
	V115= (V111);
	V116= car((V115));
	goto T370;
T370:;
	if(!(endp_prop((V115)))){
	goto T371;}
	goto T366;
	goto T371;
T371:;
	base[6]= (V116);
	base[7]= VV[0];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T375;}
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	V117= make_cons(symbol_value(VV[12]),Ct);
	(void)(structure_set((V116),VV[0],4,/* INLINE-ARGS */V117));
	(void)(structure_set((V116),VV[0],5,(V112)));
	if((structure_ref((V116),VV[0],2))!=Cnil){
	goto T383;}
	if((structure_ref((V116),VV[0],3))==Cnil){
	goto T375;}
	goto T383;
T383:;
	(void)(structure_set((V116),VV[0],2,(V113)));
	if((structure_ref((V116),VV[0],3))==Cnil){
	goto T388;}
	(void)(structure_set((V116),VV[0],3,(V114)));
	goto T388;
T388:;
	princ_str("\n	if(eql(nlj_tag,VV[",VV[14]);
	V118= structure_ref((V116),VV[0],6);
	(void)((*(LnkLI60))(/* INLINE-ARGS */V118));
	princ_str("]))",VV[14]);
	V119= structure_ref((V116),VV[0],4);
	if(type_of(/* INLINE-ARGS */V119)!=t_cons)FEwrong_type_argument(Scons,/* INLINE-ARGS */V119);
	(/* INLINE-ARGS */V119)->c.c_cdr = Ct;
	princ_str("goto T",VV[14]);
	V120= structure_ref((V116),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V120)));
	princ_char(59,VV[14]);
	goto T375;
T375:;
	V115= cdr((V115));
	V116= car((V115));
	goto T370;}
	goto T366;
T366:;
	princ_str("\n	FEerror(\"The GO tag ~s is not established.\",1,nlj_tag);",VV[14]);
	princ_str("\n	}",VV[14]);
	base[5]= make_cons((V112),(VV[13]->s.s_dbind));
	bds_bind(VV[13],base[5]);
	{object V121 = (*(LnkLI57))((V111));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR10(V121)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1GO	*/

static object LI11(V123)

object V123;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	if(!(endp_prop((V123)))){
	goto T411;}
	(void)((*(LnkLI68))(VV[1],small_fixnum(1),small_fixnum(0)));
	goto T409;
	goto T411;
T411:;
	if(endp_prop(cdr((V123)))){
	goto T414;}
	V124 = make_fixnum((long)length((V123)));
	(void)((*(LnkLI69))(VV[1],small_fixnum(1),V124));
	goto T409;
	goto T414;
T414:;
	if(type_of(car((V123)))==t_symbol){
	goto T409;}
	{object V125= car((V123));
	if(type_of(V125)==t_fixnum||type_of(V125)==t_bignum){
	goto T409;}}
	(void)(car((V123)));
	goto T409;
T409:;
	{register object V126;
	register object V127;
	register object V128;
	register object V129;
	V126= symbol_value(VV[4]);
	V127= car((V123));
	V128= Cnil;
	V129= Cnil;
	goto T424;
T424:;
	if(!(endp_prop((V126)))){
	goto T425;}
	{object V130 = (VFUN_NARGS=2,(*(LnkLI70))(VV[23],(V127)));
	VMR11(V130)}
	goto T425;
T425:;
	{object V131= car((V126));
	if((V131!= VV[71]))goto T430;
	V128= Ct;
	goto T429;
	goto T430;
T430:;
	if((V131!= VV[72]))goto T432;
	V129= Ct;
	goto T429;
	goto T432;
T432:;
	V132= structure_ref(car((V126)),VV[0],0);
	if(!((/* INLINE-ARGS */V132)==((V127)))){
	goto T429;}
	{register object V133;
	V133= car((V126));
	if(((V128))==Cnil){
	goto T439;}
	(void)(structure_set((V133),VV[0],3,Ct));
	goto T437;
	goto T439;
T439:;
	if(((V129))==Cnil){
	goto T442;}
	(void)(structure_set((V133),VV[0],2,Ct));
	goto T437;
	goto T442;
T442:;
	(void)(structure_set((V133),VV[0],1,Ct));
	goto T437;
T437:;
	{object V134 = list(5,VV[1],symbol_value(VV[24]),(V129),(V128),(V133));
	VMR11(V134)}}}
	goto T429;
T429:;
	V126= cdr((V126));
	goto T424;}
	return Cnil;
}
/*	local entry for function C2GO	*/

static object LI12(V138,V139,V140)

object V138;object V139;object V140;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	if(((V139))==Cnil){
	goto T448;}
	{object V141 = (*(LnkLI73))((V140));
	VMR12(V141)}
	goto T448;
T448:;
	if(((V138))==Cnil){
	goto T451;}
	{object V142 = (*(LnkLI74))((V140));
	VMR12(V142)}
	goto T451;
T451:;
	{object V143 = (*(LnkLI75))((V140));
	VMR12(V143)}
	return Cnil;
}
/*	local entry for function C2GO-LOCAL	*/

static object LI13(V145)

object V145;
{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	V146= structure_ref((V145),VV[0],5);
	(void)((*(LnkLI76))(/* INLINE-ARGS */V146));
	princ_str("\n	",VV[14]);
	V147= structure_ref((V145),VV[0],4);
	if(type_of(/* INLINE-ARGS */V147)!=t_cons)FEwrong_type_argument(Scons,/* INLINE-ARGS */V147);
	(/* INLINE-ARGS */V147)->c.c_cdr = Ct;
	princ_str("goto T",VV[14]);
	V148= structure_ref((V145),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V148)));
	princ_char(59,VV[14]);
	{object V149 = Cnil;
	VMR13(V149)}
	return Cnil;
}
/*	local entry for function C2GO-CLB	*/

static object LI14(V151)

register object V151;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	princ_str("\n	vs_base=vs_top;",VV[14]);
	princ_str("\n	unwind(frs_sch(",VV[14]);
	if((structure_ref((V151),VV[0],3))==Cnil){
	goto T465;}
	V152= structure_ref((V151),VV[0],2);
	(void)((*(LnkLI67))(/* INLINE-ARGS */V152));
	goto T463;
	goto T465;
T465:;
	V153= structure_ref((V151),VV[0],2);
	(void)((*(LnkLI63))(/* INLINE-ARGS */V153));
	goto T463;
T463:;
	princ_str("),VV[",VV[14]);
	V154= structure_ref((V151),VV[0],6);
	(void)((*(LnkLI60))(/* INLINE-ARGS */V154));
	princ_str("]);",VV[14]);
	{object V155 = Cnil;
	VMR14(V155)}
	return Cnil;
}
/*	local entry for function C2GO-CCB	*/

static object LI15(V157)

object V157;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	princ_str("\n	{frame_ptr fr;",VV[14]);
	princ_str("\n	fr=frs_sch(",VV[14]);
	V158= structure_ref((V157),VV[0],3);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V158));
	princ_str(");",VV[14]);
	princ_str("\n	if(fr==NULL)FEerror(\"The GO tag ~s is missing.\",1,VV[",VV[14]);
	V159= structure_ref((V157),VV[0],6);
	(void)((*(LnkLI60))(/* INLINE-ARGS */V159));
	princ_str("]);",VV[14]);
	princ_str("\n	vs_base=vs_top;",VV[14]);
	princ_str("\n	unwind(fr,VV[",VV[14]);
	V160= structure_ref((V157),VV[0],6);
	(void)((*(LnkLI60))(/* INLINE-ARGS */V160));
	princ_str("]);}",VV[14]);
	{object V161 = Cnil;
	VMR15(V161)}
	return Cnil;
}
/*	local entry for function WT-SWITCH-CASE	*/

static object LI16(V163)

register object V163;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	if(((V163))==Cnil){
	goto T487;}
	princ_str("\n	",VV[14]);
	if(!(type_of((V163))==t_fixnum)){
	goto T493;}
	V164= VV[25];
	goto T491;
	goto T493;
T493:;
	V164= VV[26];
	goto T491;
T491:;
	(void)((*(LnkLI60))(V164));
	(void)((*(LnkLI60))((V163)));
	princ_char(58,VV[14]);
	{object V165 = Cnil;
	VMR16(V165)}
	goto T487;
T487:;
	{object V166 = Cnil;
	VMR16(V166)}
	return Cnil;
}
/*	local entry for function C1SWITCH	*/

static object LI17(V168)

object V168;
{	 VMB17 VMS17 VMV17
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[4],symbol_value(VV[4]));
	{object V169;
	register object V170;
	object V171;
	V169= car((V168));
	V170= cdr((V168));
	V171= (*(LnkLI78))((V169));
	base[4]= cadr((V171));
	base[5]= VV[27];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T501;}
	base[4]= structure_ref(cadr((V171)),VV[27],2);
	base[5]= VV[28];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk79)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T501;}{object V172;
	{register object x= Ct,V173= (V170);
	while(!endp(V173))
	if(eql(x,V173->c.c_car)){
	V172= V173;
	goto T511;
	}else V173=V173->c.c_cdr;
	V172= Cnil;}
	goto T511;
T511:;
	if(V172==Cnil)goto T510;
	goto T509;
	goto T510;
T510:;}
	V174= make_cons(Ct,Cnil);
	V170= append((V170),/* INLINE-ARGS */V174);
	goto T509;
T509:;
	{object V175;
	object V176= (V170);
	if(endp(V176)){
	V170= Cnil;
	goto T514;}
	base[4]=V175=MMcons(Cnil,Cnil);
	goto T515;
T515:;
	{register object V177;
	V177= (V176->c.c_car);
	if(type_of((V177))==t_symbol){
	goto T517;}
	if(!(type_of((V177))==t_fixnum||type_of((V177))==t_bignum)){
	goto T518;}
	goto T517;
T517:;
	{register object V178;
	V178= (VFUN_NARGS=8,(*(LnkLI49))(VV[5],(V177),VV[6],Cnil,VV[7],Cnil,VV[8],Cnil));
	if(!(type_of((V177))==t_fixnum)){
	goto T525;}
	(void)(structure_set((V178),VV[0],1,Ct));
	(void)(structure_set((V178),VV[0],7,(V177)));
	goto T523;
	goto T525;
T525:;
	if(!((Ct)==((V177)))){
	goto T523;}
	(void)(structure_set((V178),VV[0],1,Ct));
	(void)(structure_set((V178),VV[0],7,VV[29]));
	goto T523;
T523:;
	(V175->c.c_car)= (V178);
	goto T516;}
	goto T518;
T518:;
	(V175->c.c_car)= (V177);}
	goto T516;
T516:;
	V176=MMcdr(V176);
	if(endp(V176)){
	V170= base[4];
	goto T514;}
	V175=MMcdr(V175)=MMcons(Cnil,Cnil);
	goto T515;}
	goto T514;
T514:;
	{object V179;
	V180= append((V170),VV[30]);
	V179= (*(LnkLI80))(/* INLINE-ARGS */V180);
	V181= list(3,VV[31],cadr((V179)),(V171));
	{object V182 = nconc(/* INLINE-ARGS */V181,cddr((V179)));
	bds_unwind1;
	VMR17(V182)}}
	goto T501;
T501:;
	V183= make_cons(VV[31],(V168));
	V184= (*(LnkLI81))(/* INLINE-ARGS */V183);
	{object V185 = (*(LnkLI78))(/* INLINE-ARGS */V184);
	bds_unwind1;
	VMR17(V185)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2SWITCH	*/

static object LI18(V190,V191,V192,V193)

object V190;object V191;object V192;object V193;
{	 VMB18 VMS18 VMV18
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[32],small_fixnum(0));
	bds_bind(VV[18],symbol_value(VV[18]));
	{object V194;
	V195= make_cons((V190),Cnil);
	V194= (VFUN_NARGS=2,(*(LnkLI82))(/* INLINE-ARGS */V195,VV[33]));
	base[2]= VV[34];
	base[3]= (V194);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk83)();
	vs_top=sup;
	if(((V192))==Cnil){
	goto T538;}
	(void)((*(LnkLI54))((V193)));
	goto T536;
	goto T538;
T538:;
	if(((V191))==Cnil){
	goto T541;}
	(void)((*(LnkLI55))((V193)));
	goto T536;
	goto T541;
T541:;
	(void)((*(LnkLI56))((V193)));
	goto T536;
T536:;
	princ_char(125,VV[14]);
	(void)((VFUN_NARGS=1,(*(LnkLI58))(Cnil)));
	{object V196 = (*(LnkLI84))();
	bds_unwind1;
	bds_unwind1;
	VMR18(V196)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for SWITCH	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	check_arg(2);
	vs_top=sup;
	{object V197=base[0]->c.c_cdr;
	if(endp(V197))invalid_macro_call();
	base[2]= (V197->c.c_car);
	V197=V197->c.c_cdr;
	base[3]= V197;
	base[4]= Cnil;}
	{register object V198;
	register object V199;
	V198= base[3];
	V199= car((V198));
	goto T551;
T551:;
	if(!(endp_prop((V198)))){
	goto T552;}
	goto T547;
	goto T552;
T552:;
	if(!(type_of((V199))==t_fixnum||type_of((V199))==t_bignum)){
	goto T556;}
	{register object V200;
	V201= list(3,VV[36],(V199),base[2]);
	V200= list(4,VV[35],/* INLINE-ARGS */V201,list(2,VV[1],(V199)),Cnil);
	base[4]= make_cons((V200),base[4]);}
	goto T556;
T556:;
	V198= cdr((V198));
	V199= car((V198));
	goto T551;}
	goto T547;
T547:;
	V202= nreverse(base[4]);
	base[5]= base[3];
	{register object x= Ct,V204= base[3];
	while(!endp(V204))
	if(eql(x,V204->c.c_car)){
	goto T571;
	}else V204=V204->c.c_cdr;
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
	V203= vs_base[0];
	V205= make_cons(VV[37],V203);
	V206= append(/* INLINE-ARGS */V202,/* INLINE-ARGS */V205);
	base[5]= make_cons(VV[10],/* INLINE-ARGS */V206);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for SWITCH-FINISH	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	check_arg(2);
	vs_top=sup;
	{object V207=base[0]->c.c_cdr;
	if(!endp(V207))invalid_macro_call();}
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

