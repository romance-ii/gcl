
#include "cmpinclude.h"
#include "cmptag.h"
void init_cmptag(){do_init(VV);}
/*	local entry for function MAKE-TAG	*/

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
	object V8;
	Vcs[0]=Vcs[0];
	va_start(ap);
	narg= narg - 0;
	{
	parse_key_new(narg,Vcs +0,(struct key *)&LI1key,ap);
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
	V24 = make_fixnum((/* INLINE-ARGS */V23)+(fix(symbol_value(VV[3]))));
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
	(VV[4]->s.s_dbind)= make_cons((V42),(VV[4]->s.s_dbind));
	(V39->c.c_car)= (V42);
	goto T86;}
goto T88;
T88:;
	(V39->c.c_car)= (V40->c.c_car);
goto T86;
T86:;
	if(endp(V40=MMcdr(V40))){
	V37= base[2];
	goto T84;}
	V39=MMcdr(V39)=MMcons(Cnil,Cnil);
	goto T85;}
goto T84;
T84:;
	{object V43;
	object V44= (V37);
	if(endp(V44)){
	V37= Cnil;
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
	(V43->c.c_car)= (*(LnkLI50))((V44->c.c_car),(V38));
goto T98;
T98:;
	if(endp(V44=MMcdr(V44))){
	V37= base[2];
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
	V46= (V37);
	V47= Cnil;
	V48= Cnil;
	V49= Cnil;
	V50= Cnil;
goto T105;
T105:;
	if(!(endp((V46)))){
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
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	goto T118;
goto T120;
T120:;
	(void)((*(LnkLI51))((V47)));
goto T118;
T118:;
	{object V51 = list(5,VV[10],(V38),(V49),(V50),(V47));
	bds_unwind1;
	VMR5(V51)}
goto T110;
T110:;
	V52= (*(LnkLI52))();
	V53= make_cons(/* INLINE-ARGS */V52,(V47));
	{object V54 = list(3,VV[11],(V38),reverse(/* INLINE-ARGS */V53));
	bds_unwind1;
	VMR5(V54)}
goto T106;
T106:;
	base[2]= car((V46));
	base[3]= VV[0];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T128;}
	if((structure_ref(car((V46)),VV[0],3))==Cnil){
	goto T133;}
	V47= make_cons(car((V46)),(V47));
	V55= car((V46));
	V56= structure_ref(car((V46)),VV[0],0);
	V57= (*(LnkLI53))(/* INLINE-ARGS */V56);
	(void)(structure_set(/* INLINE-ARGS */V55,VV[0],6,/* INLINE-ARGS */V57));
	V50= Ct;
	goto T126;
goto T133;
T133:;
	if((structure_ref(car((V46)),VV[0],2))==Cnil){
	goto T140;}
	V47= make_cons(car((V46)),(V47));
	V58= car((V46));
	V59= structure_ref(car((V46)),VV[0],0);
	V60= (*(LnkLI53))(/* INLINE-ARGS */V59);
	(void)(structure_set(/* INLINE-ARGS */V58,VV[0],6,/* INLINE-ARGS */V60));
	V49= Ct;
	goto T126;
goto T140;
T140:;
	if((structure_ref(car((V46)),VV[0],1))==Cnil){
	goto T126;}
	V47= make_cons(car((V46)),(V47));
	V48= Ct;
	goto T126;
goto T128;
T128:;
	V47= make_cons(car((V46)),(V47));
goto T126;
T126:;
	V46= cdr((V46));
	goto T105;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2TAGBODY	*/

static object LI6(V64,V65,V66)

object V64;object V65;object V66;
{	 VMB6 VMS6 VMV6
goto TTL;
TTL:;
	if(((V65))==Cnil){
	goto T156;}
	{object V67 = (*(LnkLI54))((V66));
	VMR6(V67)}
goto T156;
T156:;
	if(((V64))==Cnil){
	goto T159;}
	{object V68 = (*(LnkLI55))((V66));
	VMR6(V68)}
goto T159;
T159:;
	{object V69 = (*(LnkLI56))((V66));
	VMR6(V69)}
	return Cnil;
}
/*	local entry for function C2TAGBODY-LOCAL	*/

static object LI7(V71)

object V71;
{	 VMB7 VMS7 VMV7
	bds_check;
goto TTL;
TTL:;
	{register object V72;
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	V72= make_cons(symbol_value(VV[12]),Cnil);
	{register object V73;
	register object V74;
	V73= (V71);
	V74= car((V73));
goto T167;
T167:;
	if(!(endp((V73)))){
	goto T168;}
	goto T163;
goto T168;
T168:;
	base[2]= (V74);
	base[3]= VV[0];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T172;}
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	V75= make_cons(symbol_value(VV[12]),Ct);
	(void)(structure_set((V74),VV[0],4,/* INLINE-ARGS */V75));
	(void)(structure_set((V74),VV[0],5,(V72)));
goto T172;
T172:;
	V73= cdr((V73));
	V74= car((V73));
	goto T167;}
goto T163;
T163:;
	base[1]= make_cons((V72),symbol_value(VV[13]));
	bds_bind(VV[13],base[1]);
	{object V76 = (*(LnkLI57))((V71));
	bds_unwind1;
	VMR7(V76)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2TAGBODY-BODY	*/

static object LI8(V78)

object V78;
{	 VMB8 VMS8 VMV8
	bds_check;
goto TTL;
TTL:;
	{register object V79;
	register object V80;
	V79= (V78);
	V80= Cnil;
goto T186;
T186:;
	if(!(endp(cdr((V79))))){
	goto T187;}
	if(((V80))==Cnil){
	goto T191;}
	{object V81 = (VFUN_NARGS=1,(*(LnkLI58))(Cnil));
	VMR8(V81)}
goto T191;
T191:;
	base[0]= car((V79));
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T194;}
	V82= structure_ref(car((V79)),VV[0],7);
	(void)((*(LnkLI59))(/* INLINE-ARGS */V82));
	V83= structure_ref(car((V79)),VV[0],4);
	if((cdr(/* INLINE-ARGS */V83))==Cnil){
	goto T199;}
	princ_str("\ngoto T",VV[14]);
	V84= structure_ref(car((V79)),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V84)));
	princ_char(59,VV[14]);
	princ_str("\nT",VV[14]);
	V85= structure_ref(car((V79)),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V85)));
	princ_str(":;",VV[14]);
goto T199;
T199:;
	{object V86 = (VFUN_NARGS=1,(*(LnkLI58))(Cnil));
	VMR8(V86)}
goto T194;
T194:;
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	bds_bind(VV[15],make_cons(symbol_value(VV[12]),Cnil));
	bds_bind(VV[13],make_cons((VV[15]->s.s_dbind),symbol_value(VV[13])));
	bds_bind(VV[16],VV[17]);
	base[3]= car((V79));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk61)();
	vs_top=sup;
	if((cdr((VV[15]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T209;}
	princ_str("\ngoto T",VV[14]);
	(void)((*(LnkLI60))(car((VV[15]->s.s_dbind))));
	princ_char(59,VV[14]);
	princ_str("\nT",VV[14]);
	(void)((*(LnkLI60))(car((VV[15]->s.s_dbind))));
	princ_str(":;",VV[14]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
goto T209;
T209:;
	if((caar((V79)))==(VV[1])){
	goto T225;}
	{object V87 = (VFUN_NARGS=1,(*(LnkLI58))(Cnil));
	VMR8(V87)}
goto T225;
T225:;
	{object V88 = Cnil;
	VMR8(V88)}
goto T187;
T187:;
	if(((V80))==Cnil){
	goto T230;}
	V80= Cnil;
	goto T228;
goto T230;
T230:;
	base[0]= car((V79));
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T234;}
	V89= structure_ref(car((V79)),VV[0],7);
	(void)((*(LnkLI59))(/* INLINE-ARGS */V89));
	V90= structure_ref(car((V79)),VV[0],4);
	if((cdr(/* INLINE-ARGS */V90))==Cnil){
	goto T228;}
	princ_str("\ngoto T",VV[14]);
	V91= structure_ref(car((V79)),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V91)));
	princ_char(59,VV[14]);
	princ_str("\nT",VV[14]);
	V92= structure_ref(car((V79)),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V92)));
	princ_str(":;",VV[14]);
	goto T228;
goto T234;
T234:;
	base[3]= cadr((V79));
	base[4]= VV[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T250;}
	V80= Ct;
	bds_bind(VV[15],structure_ref(cadr((V79)),VV[0],4));
	goto T248;
goto T250;
T250:;
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	bds_bind(VV[15],make_cons(symbol_value(VV[12]),Cnil));
goto T248;
T248:;
	bds_bind(VV[13],make_cons((VV[15]->s.s_dbind),symbol_value(VV[13])));
	bds_bind(VV[16],VV[17]);
	base[3]= car((V79));
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk61)();
	vs_top=sup;
	base[3]= cadr((V79));
	base[4]= VV[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T261;}
	goto T260;
goto T261;
T261:;
	V93= structure_ref(cadr((V79)),VV[0],7);
	(void)((*(LnkLI59))(/* INLINE-ARGS */V93));
goto T260;
T260:;
	if((cdr((VV[15]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T228;}
	princ_str("\ngoto T",VV[14]);
	(void)((*(LnkLI60))(car((VV[15]->s.s_dbind))));
	princ_char(59,VV[14]);
	princ_str("\nT",VV[14]);
	(void)((*(LnkLI60))(car((VV[15]->s.s_dbind))));
	princ_str(":;",VV[14]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
goto T228;
T228:;
	V79= cdr((V79));
	goto T186;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2TAGBODY-CLB	*/

static object LI9(V95)

object V95;
{	 VMB9 VMS9 VMV9
	bds_check;
goto TTL;
TTL:;
	{register object V96;
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	V96= make_cons(symbol_value(VV[12]),Cnil);
	bds_bind(VV[18],symbol_value(VV[18]));
	{register object V97;
	base[2]= make_cons(VV[19],symbol_value(VV[13]));
	V97= (*(LnkLI62))();
	bds_bind(VV[13],base[2]);
	princ_str("\n	",VV[14]);
	(void)((*(LnkLI63))((V97)));
	princ_str("=alloc_frame_id();",VV[14]);
	princ_str("\n	frs_push(FRS_CATCH,",VV[14]);
	(void)((*(LnkLI63))((V97)));
	princ_str(");",VV[14]);
	princ_str("\n	if(nlj_active){",VV[14]);
	princ_str("\n	nlj_active=FALSE;",VV[14]);
	{register object V98;
	register object V99;
	V98= (V95);
	V99= car((V98));
goto T298;
T298:;
	if(!(endp((V98)))){
	goto T299;}
	goto T294;
goto T299;
T299:;
	base[4]= (V99);
	base[5]= VV[0];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T303;}
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	V100= make_cons(symbol_value(VV[12]),Ct);
	(void)(structure_set((V99),VV[0],4,/* INLINE-ARGS */V100));
	(void)(structure_set((V99),VV[0],5,(V96)));
	if((structure_ref((V99),VV[0],2))==Cnil){
	goto T303;}
	(void)(structure_set((V99),VV[0],2,(V97)));
	princ_str("\n	if(eql(nlj_tag,VV[",VV[14]);
	V101= structure_ref((V99),VV[0],6);
	(void)((*(LnkLI60))(/* INLINE-ARGS */V101));
	princ_str("]))",VV[14]);
	V102= structure_ref((V99),VV[0],4);
	if(type_of(/* INLINE-ARGS */V102)!=t_cons)FEwrong_type_argument(Scons,/* INLINE-ARGS */V102);
	(/* INLINE-ARGS */V102)->c.c_cdr = Ct;
	princ_str("goto T",VV[14]);
	V103= structure_ref((V99),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V103)));
	princ_char(59,VV[14]);
goto T303;
T303:;
	V98= cdr((V98));
	V99= car((V98));
	goto T298;}
goto T294;
T294:;
	princ_str("\n	FEerror(\"The GO tag ~s is not established.\",1,nlj_tag);",VV[14]);
	princ_str("\n	}",VV[14]);
	base[3]= make_cons((V96),(VV[13]->s.s_dbind));
	bds_bind(VV[13],base[3]);
	{object V104 = (*(LnkLI57))((V95));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR9(V104)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2TAGBODY-CCB	*/

static object LI10(V106)

object V106;
{	 VMB10 VMS10 VMV10
	bds_check;
goto TTL;
TTL:;
	{register object V107;
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	V107= make_cons(symbol_value(VV[12]),Cnil);
	bds_bind(VV[18],symbol_value(VV[18]));
	bds_bind(VV[20],symbol_value(VV[20]));
	bds_bind(VV[21],symbol_value(VV[21]));
	{register object V108;
	register object V109;
	base[4]= make_cons(VV[19],symbol_value(VV[13]));
	V108= (*(LnkLI62))();
	bds_bind(VV[13],base[4]);
	V109= Cnil;
	princ_str("\n	",VV[14]);
	(void)((*(LnkLI63))((V108)));
	princ_str("=alloc_frame_id();",VV[14]);
	princ_str("\n	",VV[14]);
	(void)((*(LnkLI63))((V108)));
	princ_str("=MMcons(",VV[14]);
	(void)((*(LnkLI63))((V108)));
	princ_char(44,VV[14]);
	(void)((VFUN_NARGS=0,(*(LnkLI64))()));
	princ_str(");",VV[14]);
	(void)((*(LnkLI65))((V108)));
	V109= (*(LnkLI66))();
	princ_str("\n	frs_push(FRS_CATCH,",VV[14]);
	(void)((*(LnkLI67))((V108)));
	princ_str(");",VV[14]);
	princ_str("\n	if(nlj_active){",VV[14]);
	princ_str("\n	nlj_active=FALSE;",VV[14]);
	{register object V110;
	register object V111;
	V110= (V106);
	V111= car((V110));
goto T366;
T366:;
	if(!(endp((V110)))){
	goto T367;}
	goto T362;
goto T367;
T367:;
	base[6]= (V111);
	base[7]= VV[0];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T371;}
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	V112= make_cons(symbol_value(VV[12]),Ct);
	(void)(structure_set((V111),VV[0],4,/* INLINE-ARGS */V112));
	(void)(structure_set((V111),VV[0],5,(V107)));
	if((structure_ref((V111),VV[0],2))!=Cnil){
	goto T379;}
	if((structure_ref((V111),VV[0],3))==Cnil){
	goto T371;}
goto T379;
T379:;
	(void)(structure_set((V111),VV[0],2,(V108)));
	if((structure_ref((V111),VV[0],3))==Cnil){
	goto T384;}
	(void)(structure_set((V111),VV[0],3,(V109)));
goto T384;
T384:;
	princ_str("\n	if(eql(nlj_tag,VV[",VV[14]);
	V113= structure_ref((V111),VV[0],6);
	(void)((*(LnkLI60))(/* INLINE-ARGS */V113));
	princ_str("]))",VV[14]);
	V114= structure_ref((V111),VV[0],4);
	if(type_of(/* INLINE-ARGS */V114)!=t_cons)FEwrong_type_argument(Scons,/* INLINE-ARGS */V114);
	(/* INLINE-ARGS */V114)->c.c_cdr = Ct;
	princ_str("goto T",VV[14]);
	V115= structure_ref((V111),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V115)));
	princ_char(59,VV[14]);
goto T371;
T371:;
	V110= cdr((V110));
	V111= car((V110));
	goto T366;}
goto T362;
T362:;
	princ_str("\n	FEerror(\"The GO tag ~s is not established.\",1,nlj_tag);",VV[14]);
	princ_str("\n	}",VV[14]);
	base[5]= make_cons((V107),(VV[13]->s.s_dbind));
	bds_bind(VV[13],base[5]);
	{object V116 = (*(LnkLI57))((V106));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR10(V116)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C1GO	*/

static object LI11(V118)

object V118;
{	 VMB11 VMS11 VMV11
goto TTL;
TTL:;
	if(!(endp((V118)))){
	goto T407;}
	(void)((*(LnkLI68))(VV[1],small_fixnum(1),small_fixnum(0)));
	goto T405;
goto T407;
T407:;
	if(endp(cdr((V118)))){
	goto T410;}
	V119 = make_fixnum(length((V118)));
	(void)((*(LnkLI69))(VV[1],small_fixnum(1),V119));
	goto T405;
goto T410;
T410:;
	if(type_of(car((V118)))==t_symbol){
	goto T405;}
	{object V120= car((V118));
	if(type_of(V120)==t_fixnum||type_of(V120)==t_bignum){
	goto T405;}}
	(void)(car((V118)));
goto T405;
T405:;
	{register object V121;
	register object V122;
	register object V123;
	register object V124;
	V121= symbol_value(VV[4]);
	V122= car((V118));
	V123= Cnil;
	V124= Cnil;
goto T420;
T420:;
	if(!(endp((V121)))){
	goto T421;}
	{object V125 = (VFUN_NARGS=2,(*(LnkLI70))(VV[23],(V122)));
	VMR11(V125)}
goto T421;
T421:;
	{object V126= car((V121));
	if((V126!= VV[71]))goto T426;
	V123= Ct;
	goto T425;
goto T426;
T426:;
	if((V126!= VV[72]))goto T428;
	V124= Ct;
	goto T425;
goto T428;
T428:;
	V127= structure_ref(car((V121)),VV[0],0);
	if(!((/* INLINE-ARGS */V127)==((V122)))){
	goto T425;}
	{register object V128;
	V128= car((V121));
	if(((V123))==Cnil){
	goto T435;}
	(void)(structure_set((V128),VV[0],3,Ct));
	goto T433;
goto T435;
T435:;
	if(((V124))==Cnil){
	goto T438;}
	(void)(structure_set((V128),VV[0],2,Ct));
	goto T433;
goto T438;
T438:;
	(void)(structure_set((V128),VV[0],1,Ct));
goto T433;
T433:;
	{object V129 = list(5,VV[1],symbol_value(VV[24]),(V124),(V123),(V128));
	VMR11(V129)}}}
goto T425;
T425:;
	V121= cdr((V121));
	goto T420;}
	return Cnil;
}
/*	local entry for function C2GO	*/

static object LI12(V133,V134,V135)

object V133;object V134;object V135;
{	 VMB12 VMS12 VMV12
goto TTL;
TTL:;
	if(((V134))==Cnil){
	goto T444;}
	{object V136 = (*(LnkLI73))((V135));
	VMR12(V136)}
goto T444;
T444:;
	if(((V133))==Cnil){
	goto T447;}
	{object V137 = (*(LnkLI74))((V135));
	VMR12(V137)}
goto T447;
T447:;
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
	V141= structure_ref((V140),VV[0],5);
	(void)((*(LnkLI76))(/* INLINE-ARGS */V141));
	princ_str("\n	",VV[14]);
	V142= structure_ref((V140),VV[0],4);
	if(type_of(/* INLINE-ARGS */V142)!=t_cons)FEwrong_type_argument(Scons,/* INLINE-ARGS */V142);
	(/* INLINE-ARGS */V142)->c.c_cdr = Ct;
	princ_str("goto T",VV[14]);
	V143= structure_ref((V140),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V143)));
	princ_char(59,VV[14]);
	{object V144 = Cnil;
	VMR13(V144)}
	return Cnil;
}
/*	local entry for function C2GO-CLB	*/

static object LI14(V146)

register object V146;
{	 VMB14 VMS14 VMV14
goto TTL;
TTL:;
	princ_str("\n	vs_base=vs_top;",VV[14]);
	princ_str("\n	unwind(frs_sch(",VV[14]);
	if((structure_ref((V146),VV[0],3))==Cnil){
	goto T461;}
	V147= structure_ref((V146),VV[0],2);
	(void)((*(LnkLI67))(/* INLINE-ARGS */V147));
	goto T459;
goto T461;
T461:;
	V148= structure_ref((V146),VV[0],2);
	(void)((*(LnkLI63))(/* INLINE-ARGS */V148));
goto T459;
T459:;
	princ_str("),VV[",VV[14]);
	V149= structure_ref((V146),VV[0],6);
	(void)((*(LnkLI60))(/* INLINE-ARGS */V149));
	princ_str("]);",VV[14]);
	{object V150 = Cnil;
	VMR14(V150)}
	return Cnil;
}
/*	local entry for function C2GO-CCB	*/

static object LI15(V152)

object V152;
{	 VMB15 VMS15 VMV15
goto TTL;
TTL:;
	princ_str("\n	{frame_ptr fr;",VV[14]);
	princ_str("\n	fr=frs_sch(",VV[14]);
	V153= structure_ref((V152),VV[0],3);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V153));
	princ_str(");",VV[14]);
	princ_str("\n	if(fr==NULL)FEerror(\"The GO tag ~s is missing.\",1,VV[",VV[14]);
	V154= structure_ref((V152),VV[0],6);
	(void)((*(LnkLI60))(/* INLINE-ARGS */V154));
	princ_str("]);",VV[14]);
	princ_str("\n	vs_base=vs_top;",VV[14]);
	princ_str("\n	unwind(fr,VV[",VV[14]);
	V155= structure_ref((V152),VV[0],6);
	(void)((*(LnkLI60))(/* INLINE-ARGS */V155));
	princ_str("]);}",VV[14]);
	{object V156 = Cnil;
	VMR15(V156)}
	return Cnil;
}
/*	local entry for function WT-SWITCH-CASE	*/

static object LI16(V158)

register object V158;
{	 VMB16 VMS16 VMV16
goto TTL;
TTL:;
	if(((V158))==Cnil){
	goto T483;}
	princ_str("\n	",VV[14]);
	if(!(type_of((V158))==t_fixnum)){
	goto T489;}
	V159= VV[25];
	goto T487;
goto T489;
T489:;
	V159= VV[26];
goto T487;
T487:;
	(void)((*(LnkLI60))(V159));
	(void)((*(LnkLI60))((V158)));
	princ_char(58,VV[14]);
	{object V160 = Cnil;
	VMR16(V160)}
goto T483;
T483:;
	{object V161 = Cnil;
	VMR16(V161)}
	return Cnil;
}
/*	local entry for function C1SWITCH	*/

static object LI17(V163)

object V163;
{	 VMB17 VMS17 VMV17
	bds_check;
goto TTL;
TTL:;
	bds_bind(VV[4],symbol_value(VV[4]));
	{object V164;
	register object V165;
	object V166;
	V164= car((V163));
	V165= cdr((V163));
	V166= (*(LnkLI78))((V164));
	base[4]= cadr((V166));
	base[5]= VV[27];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T497;}
	base[4]= structure_ref(cadr((V166)),VV[27],2);
	base[5]= VV[28];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk79)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T497;}{object V167;
	{register object x= Ct,V168= (V165);
	while(!endp(V168))
	if(eql(x,V168->c.c_car)){
	V167= V168;
	goto T507;
	}else V168=V168->c.c_cdr;
	V167= Cnil;}
goto T507;
T507:;
	if(V167==Cnil)goto T506;
	goto T505;
goto T506;
T506:;}
	V169= make_cons(Ct,Cnil);
	V165= append((V165),/* INLINE-ARGS */V169);
goto T505;
T505:;
	{object V170;
	object V171= (V165);
	if(endp(V171)){
	V165= Cnil;
	goto T510;}
	base[4]=V170=MMcons(Cnil,Cnil);
goto T511;
T511:;
	{register object V172;
	V172= (V171->c.c_car);
	if(type_of((V172))==t_symbol){
	goto T513;}
	if(!(type_of((V172))==t_fixnum||type_of((V172))==t_bignum)){
	goto T514;}
goto T513;
T513:;
	{register object V173;
	V173= (VFUN_NARGS=8,(*(LnkLI49))(VV[5],(V172),VV[6],Cnil,VV[7],Cnil,VV[8],Cnil));
	if(!(type_of((V172))==t_fixnum)){
	goto T521;}
	(void)(structure_set((V173),VV[0],1,Ct));
	(void)(structure_set((V173),VV[0],7,(V172)));
	goto T519;
goto T521;
T521:;
	if(!((Ct)==((V172)))){
	goto T519;}
	(void)(structure_set((V173),VV[0],1,Ct));
	(void)(structure_set((V173),VV[0],7,VV[29]));
goto T519;
T519:;
	(V170->c.c_car)= (V173);
	goto T512;}
goto T514;
T514:;
	(V170->c.c_car)= (V172);}
goto T512;
T512:;
	if(endp(V171=MMcdr(V171))){
	V165= base[4];
	goto T510;}
	V170=MMcdr(V170)=MMcons(Cnil,Cnil);
	goto T511;}
goto T510;
T510:;
	{object V174;
	V175= append((V165),VV[30]);
	V174= (*(LnkLI80))(/* INLINE-ARGS */V175);
	V176= list(3,VV[31],cadr((V174)),(V166));
	{object V177 = nconc(/* INLINE-ARGS */V176,cddr((V174)));
	bds_unwind1;
	VMR17(V177)}}
goto T497;
T497:;
	V178= make_cons(VV[31],(V163));
	V179= (*(LnkLI81))(/* INLINE-ARGS */V178);
	{object V180 = (*(LnkLI78))(/* INLINE-ARGS */V179);
	bds_unwind1;
	VMR17(V180)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function C2SWITCH	*/

static object LI18(V185,V186,V187,V188)

object V185;object V186;object V187;object V188;
{	 VMB18 VMS18 VMV18
	bds_check;
goto TTL;
TTL:;
	bds_bind(VV[32],small_fixnum(0));
	bds_bind(VV[18],symbol_value(VV[18]));
	{object V189;
	V190= make_cons((V185),Cnil);
	V189= (VFUN_NARGS=2,(*(LnkLI82))(/* INLINE-ARGS */V190,VV[33]));
	base[2]= VV[34];
	base[3]= (V189);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk83)();
	vs_top=sup;
	if(((V187))==Cnil){
	goto T534;}
	(void)((*(LnkLI54))((V188)));
	goto T532;
goto T534;
T534:;
	if(((V186))==Cnil){
	goto T537;}
	(void)((*(LnkLI55))((V188)));
	goto T532;
goto T537;
T537:;
	(void)((*(LnkLI56))((V188)));
goto T532;
T532:;
	princ_char(125,VV[14]);
	(void)((VFUN_NARGS=1,(*(LnkLI58))(Cnil)));
	{object V191 = (*(LnkLI84))();
	bds_unwind1;
	bds_unwind1;
	VMR18(V191)}}
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
	{object V192=base[0]->c.c_cdr;
	if(endp(V192))invalid_macro_call();
	base[2]= (V192->c.c_car);
	V192=V192->c.c_cdr;
	base[3]= V192;
	base[4]= Cnil;}
	{register object V193;
	register object V194;
	V193= base[3];
	V194= car((V193));
goto T547;
T547:;
	if(!(endp((V193)))){
	goto T548;}
	goto T543;
goto T548;
T548:;
	if(!(type_of((V194))==t_fixnum||type_of((V194))==t_bignum)){
	goto T552;}
	V195= list(3,VV[36],(V194),base[2]);
	V196= list(4,VV[35],/* INLINE-ARGS */V195,list(2,VV[1],(V194)),Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V196,base[4]);
goto T552;
T552:;
	V193= cdr((V193));
	V194= car((V193));
	goto T547;}
goto T543;
T543:;
	V197= nreverse(base[4]);
	base[5]= base[3];
	{register object x= Ct,V199= base[3];
	while(!endp(V199))
	if(eql(x,V199->c.c_car)){
	goto T566;
	}else V199=V199->c.c_cdr;
	goto T565;}
goto T566;
T566:;
	base[6]= Cnil;
	goto T563;
goto T565;
T565:;
	base[6]= VV[38];
goto T563;
T563:;
	base[7]= VV[39];
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V198= vs_base[0];
	V200= make_cons(VV[37],V198);
	V201= append(/* INLINE-ARGS */V197,/* INLINE-ARGS */V200);
	base[5]= make_cons(VV[10],/* INLINE-ARGS */V201);
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
	{object V202=base[0]->c.c_cdr;
	if(!endp(V202))invalid_macro_call();}
	base[2]= VV[40];
	vs_top=(vs_base=base+2)+1;
	return;
}
static object  LnkTLI84(){return call_proc0(VV[84],(void **)&LnkLI84);} /* CLOSE-INLINE-BLOCKS */
static void LnkT83(){ call_or_link(VV[83],(void **)&Lnk83);} /* WT-INLINE-LOC */
static object  LnkTLI82(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[82],(void **)&LnkLI82,ap);} /* INLINE-ARGS */
static object  LnkTLI81(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[81],(void **)&LnkLI81,1,ap);} /* CMP-MACROEXPAND-1 */
static object  LnkTLI80(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[80],(void **)&LnkLI80,1,ap);} /* C1TAGBODY */
static void LnkT79(){ call_or_link(VV[79],(void **)&Lnk79);} /* SUBTYPEP */
static object  LnkTLI78(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[78],(void **)&LnkLI78,1,ap);} /* C1EXPR */
static object  LnkTLI77(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[77],(void **)&LnkLI77,1,ap);} /* WT-CCB-VS */
static object  LnkTLI76(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[76],(void **)&LnkLI76,1,ap);} /* UNWIND-NO-EXIT */
static object  LnkTLI75(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[75],(void **)&LnkLI75,1,ap);} /* C2GO-LOCAL */
static object  LnkTLI74(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[74],(void **)&LnkLI74,1,ap);} /* C2GO-CLB */
static object  LnkTLI73(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[73],(void **)&LnkLI73,1,ap);} /* C2GO-CCB */
static object  LnkTLI70(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[70],(void **)&LnkLI70,ap);} /* CMPERR */
static object  LnkTLI69(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[69],(void **)&LnkLI69,3,ap);} /* TOO-MANY-ARGS */
static object  LnkTLI68(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[68],(void **)&LnkLI68,3,ap);} /* TOO-FEW-ARGS */
static object  LnkTLI67(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[67],(void **)&LnkLI67,1,ap);} /* WT-VS* */
static object  LnkTLI66(){return call_proc0(VV[66],(void **)&LnkLI66);} /* CCB-VS-PUSH */
static object  LnkTLI65(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[65],(void **)&LnkLI65,1,ap);} /* CLINK */
static object  LnkTLI64(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[64],(void **)&LnkLI64,ap);} /* WT-CLINK */
static object  LnkTLI63(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[63],(void **)&LnkLI63,1,ap);} /* WT-VS */
static object  LnkTLI62(){return call_proc0(VV[62],(void **)&LnkLI62);} /* VS-PUSH */
static void LnkT61(){ call_or_link(VV[61],(void **)&Lnk61);} /* C2EXPR */
static object  LnkTLI60(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[60],(void **)&LnkLI60,1,ap);} /* WT1 */
static object  LnkTLI59(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[59],(void **)&LnkLI59,1,ap);} /* WT-SWITCH-CASE */
static object  LnkTLI58(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[58],(void **)&LnkLI58,ap);} /* UNWIND-EXIT */
static object  LnkTLI57(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[57],(void **)&LnkLI57,1,ap);} /* C2TAGBODY-BODY */
static object  LnkTLI56(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[56],(void **)&LnkLI56,1,ap);} /* C2TAGBODY-LOCAL */
static object  LnkTLI55(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[55],(void **)&LnkLI55,1,ap);} /* C2TAGBODY-CLB */
static object  LnkTLI54(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[54],(void **)&LnkLI54,1,ap);} /* C2TAGBODY-CCB */
static object  LnkTLI53(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[53],(void **)&LnkLI53,1,ap);} /* ADD-OBJECT */
static object  LnkTLI52(){return call_proc0(VV[52],(void **)&LnkLI52);} /* C1NIL */
static object  LnkTLI51(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[51],(void **)&LnkLI51,1,ap);} /* ADD-LOOP-REGISTERS */
static object  LnkTLI50(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[50],(void **)&LnkLI50,2,ap);} /* C1EXPR* */
static object  LnkTLI49(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[49],(void **)&LnkLI49,ap);} /* MAKE-TAG */
static object  LnkTLI48(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[48],(void **)&LnkLI48,ap);} /* MAKE-INFO */
static object  LnkTLI47(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[47],(void **)&LnkLI47,1,ap);} /* ADD-REG1 */
static object  LnkTLI46(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[46],(void **)&LnkLI46,2,ap);} /* JUMPS-TO-P */
static void LnkT45(){ call_or_link(VV[45],(void **)&Lnk45);} /* STRUCTURE-SUBTYPE-P */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

