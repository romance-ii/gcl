
#include "cmpinclude.h"
#include "cmptag.h"
init_cmptag(){do_init(VV);}
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
	VMR1(V9)}}
	}}
/*	local entry for function JUMPS-TO-P	*/

static object LI2(V12,V13)

register object V12;object V13;
{	 VMB2 VMS2 VMV2
TTL:;
	{object V14;
	V14= Cnil;
	if(!(type_of((V12))!=t_cons)){
	goto T12;}
	{object V15 = Cnil;
	VMR2(V15)}
T12:;
	{object V16;
	if((car((V12)))==(VV[1])){
	goto T15;}
	V16= Cnil;
	goto T14;
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
T17:;
	V17= structure_ref((V14),VV[0],0);
	V16= ((/* INLINE-ARGS */V17)==((V13))?Ct:Cnil);
T14:;
	if(((V16))==Cnil){
	goto T23;}
	{object V18 = (V16);
	VMR2(V18)}
T23:;{object V19;
	V19= (*(LnkLI46))(car((V12)),(V13));
	if(V19==Cnil)goto T25;
	{object V20 = V19;
	VMR2(V20)}
T25:;}
	V12= cdr((V12));
	goto TTL;}}
}
/*	local entry for function ADD-REG1	*/

static object LI3(V22)

register object V22;
{	 VMB3 VMS3 VMV3
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
	{int V23= fix(structure_ref((V22),VV[2],6));
	V24 = make_fixnum((/* INLINE-ARGS */V23)+(fix(symbol_value(VV[3]))));
	{object V25 = structure_set((V22),VV[2],6,V24);
	VMR3(V25)}}
T34:;
	{object V26 = Cnil;
	VMR3(V26)}
T31:;
	(void)((*(LnkLI47))(car((V22))));
	V22= cdr((V22));
	goto TTL;
}
/*	local entry for function ADD-LOOP-REGISTERS	*/

static object LI4(V28)

object V28;
{	 VMB4 VMS4 VMV4
TTL:;
	{register object V29;
	register object V30;
	register object V31;
	V29= (V28);
	V30= Cnil;
	V31= Cnil;
T42:;
	if(((V29))!=Cnil){
	goto T43;}
	{register object V32;
	V32= (V31);
T47:;
	if(!(((V32))==((V30)))){
	goto T48;}
	{object V33 = (*(LnkLI47))(car((V32)));
	VMR4(V33)}
T48:;
	(void)((*(LnkLI47))(car((V32))));
	V32= cdr((V32));
	goto T47;}
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
T62:;
	{register object V34;
	register object V35;
	V34= cdr((V29));
	V35= structure_ref(car((V29)),VV[0],0);
T67:;
	if(((V34))!=Cnil){
	goto T68;}
	goto T57;
T68:;
	if(((*(LnkLI46))(car((V34)),(V35)))==Cnil){
	goto T72;}
	V30= (V34);
T72:;
	V34= cdr((V34));
	goto T67;}
T57:;
	V29= cdr((V29));
	goto T42;}
}
/*	local entry for function C1TAGBODY	*/

static object LI5(V37)

object V37;
{	 VMB5 VMS5 VMV5
	bds_check;
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
T85:;
	if(type_of((V40->c.c_car))==t_symbol){
	goto T87;}
	if(!(type_of((V40->c.c_car))==t_fixnum||type_of((V40->c.c_car))==t_bignum)){
	goto T88;}
T87:;
	{object V42;
	V42= (VFUN_NARGS=8,(*(LnkLI49))(VV[5],(V40->c.c_car),VV[6],Cnil,VV[7],Cnil,VV[8],Cnil));
	(VV[4]->s.s_dbind)= make_cons((V42),(VV[4]->s.s_dbind));
	(V39->c.c_car)= (V42);
	goto T86;}
T88:;
	(V39->c.c_car)= (V40->c.c_car);
T86:;
	if(endp(V40=MMcdr(V40))){
	V37= base[2];
	goto T84;}
	V39=MMcdr(V39)=MMcons(Cnil,Cnil);
	goto T85;}
T84:;
	{object V43;
	object V44= (V37);
	if(endp(V44)){
	V37= Cnil;
	goto T96;}
	base[2]=V43=MMcons(Cnil,Cnil);
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
T100:;
	(V43->c.c_car)= (*(LnkLI50))((V44->c.c_car),(V38));
T98:;
	if(endp(V44=MMcdr(V44))){
	V37= base[2];
	goto T96;}
	V43=MMcdr(V43)=MMcons(Cnil,Cnil);
	goto T97;}
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
T105:;
	if(!(endp((V46)))){
	goto T106;}
	if(((V50))!=Cnil){
	goto T109;}
	if(((V49))!=Cnil){
	goto T109;}
	if(((V48))==Cnil){
	goto T110;}
T109:;
	V47= reverse((V47));
	if(((V49))!=Cnil){
	goto T119;}
	if(((V50))==Cnil){
	goto T120;}
T119:;
	setq(VV[9],number_plus(symbol_value(VV[9]),small_fixnum(1)));
	goto T118;
T120:;
	(void)((*(LnkLI51))((V47)));
T118:;
	{object V51 = list(5,VV[10],(V38),(V49),(V50),(V47));
	bds_unwind1;
	VMR5(V51)}
T110:;
	V52= (*(LnkLI52))();
	V53= make_cons(/* INLINE-ARGS */V52,(V47));
	{object V54 = list(3,VV[11],(V38),reverse(/* INLINE-ARGS */V53));
	bds_unwind1;
	VMR5(V54)}
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
T140:;
	if((structure_ref(car((V46)),VV[0],1))==Cnil){
	goto T126;}
	V47= make_cons(car((V46)),(V47));
	V48= Ct;
	goto T126;
T128:;
	V47= make_cons(car((V46)),(V47));
T126:;
	V46= cdr((V46));
	goto T105;}}
}
/*	local entry for function C2TAGBODY	*/

static object LI6(V64,V65,V66)

object V64;object V65;object V66;
{	 VMB6 VMS6 VMV6
TTL:;
	if(((V65))==Cnil){
	goto T156;}
	{object V67 = (*(LnkLI54))((V66));
	VMR6(V67)}
T156:;
	if(((V64))==Cnil){
	goto T159;}
	{object V68 = (*(LnkLI55))((V66));
	VMR6(V68)}
T159:;
	{object V69 = (*(LnkLI56))((V66));
	VMR6(V69)}
}
/*	local entry for function C2TAGBODY-LOCAL	*/

static object LI7(V71)

object V71;
{	 VMB7 VMS7 VMV7
	bds_check;
TTL:;
	{register object V72;
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	V72= make_cons(symbol_value(VV[12]),Cnil);
	{register object V73;
	register object V74;
	V73= (V71);
	V74= car((V73));
T167:;
	if(!(endp((V73)))){
	goto T168;}
	goto T163;
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
T172:;
	V73= cdr((V73));
	V74= car((V73));
	goto T167;}
T163:;
	base[1]= make_cons((V72),symbol_value(VV[13]));
	bds_bind(VV[13],base[1]);
	{object V76 = (*(LnkLI57))((V71));
	bds_unwind1;
	VMR7(V76)}}
}
/*	local entry for function C2TAGBODY-BODY	*/

static object LI8(V78)

object V78;
{	 VMB8 VMS8 VMV8
	bds_check;
TTL:;
	{register object V79;
	register object V80;
	V79= (V78);
	V80= Cnil;
T186:;
	if(!(endp(cdr((V79))))){
	goto T187;}
	if(((V80))==Cnil){
	goto T191;}
	{object V81 = (VFUN_NARGS=1,(*(LnkLI58))(Cnil));
	VMR8(V81)}
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
	princ_str("\nT",VV[14]);
	V84= structure_ref(car((V79)),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V84)));
	princ_str(":;",VV[14]);
T199:;
	{object V85 = (VFUN_NARGS=1,(*(LnkLI58))(Cnil));
	VMR8(V85)}
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
	goto T205;}
	princ_str("\nT",VV[14]);
	(void)((*(LnkLI60))(car((VV[15]->s.s_dbind))));
	princ_str(":;",VV[14]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
T205:;
	if((caar((V79)))==(VV[1])){
	goto T217;}
	{object V86 = (VFUN_NARGS=1,(*(LnkLI58))(Cnil));
	VMR8(V86)}
T217:;
	{object V87 = Cnil;
	VMR8(V87)}
T187:;
	if(((V80))==Cnil){
	goto T222;}
	V80= Cnil;
	goto T220;
T222:;
	base[0]= car((V79));
	base[1]= VV[0];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T226;}
	V88= structure_ref(car((V79)),VV[0],7);
	(void)((*(LnkLI59))(/* INLINE-ARGS */V88));
	V89= structure_ref(car((V79)),VV[0],4);
	if((cdr(/* INLINE-ARGS */V89))==Cnil){
	goto T220;}
	princ_str("\nT",VV[14]);
	V90= structure_ref(car((V79)),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V90)));
	princ_str(":;",VV[14]);
	goto T220;
T226:;
	base[3]= cadr((V79));
	base[4]= VV[0];
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T238;}
	V80= Ct;
	bds_bind(VV[15],structure_ref(cadr((V79)),VV[0],4));
	goto T236;
T238:;
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	bds_bind(VV[15],make_cons(symbol_value(VV[12]),Cnil));
T236:;
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
	goto T249;}
	goto T248;
T249:;
	V91= structure_ref(cadr((V79)),VV[0],7);
	(void)((*(LnkLI59))(/* INLINE-ARGS */V91));
T248:;
	if((cdr((VV[15]->s.s_dbind)))==Cnil){
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	goto T220;}
	princ_str("\nT",VV[14]);
	(void)((*(LnkLI60))(car((VV[15]->s.s_dbind))));
	princ_str(":;",VV[14]);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
T220:;
	V79= cdr((V79));
	goto T186;}
}
/*	local entry for function C2TAGBODY-CLB	*/

static object LI9(V93)

object V93;
{	 VMB9 VMS9 VMV9
	bds_check;
TTL:;
	{register object V94;
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	V94= make_cons(symbol_value(VV[12]),Cnil);
	bds_bind(VV[18],symbol_value(VV[18]));
	{register object V95;
	base[2]= make_cons(VV[19],symbol_value(VV[13]));
	V95= (*(LnkLI62))();
	bds_bind(VV[13],base[2]);
	princ_str("\n	",VV[14]);
	(void)((*(LnkLI63))((V95)));
	princ_str("=alloc_frame_id();",VV[14]);
	princ_str("\n	frs_push(FRS_CATCH,",VV[14]);
	(void)((*(LnkLI63))((V95)));
	princ_str(");",VV[14]);
	princ_str("\n	if(nlj_active){",VV[14]);
	princ_str("\n	nlj_active=FALSE;",VV[14]);
	{register object V96;
	register object V97;
	V96= (V93);
	V97= car((V96));
T282:;
	if(!(endp((V96)))){
	goto T283;}
	goto T278;
T283:;
	base[4]= (V97);
	base[5]= VV[0];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T287;}
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	V98= make_cons(symbol_value(VV[12]),Ct);
	(void)(structure_set((V97),VV[0],4,/* INLINE-ARGS */V98));
	(void)(structure_set((V97),VV[0],5,(V94)));
	if((structure_ref((V97),VV[0],2))==Cnil){
	goto T287;}
	(void)(structure_set((V97),VV[0],2,(V95)));
	princ_str("\n	if(eql(nlj_tag,VV[",VV[14]);
	V99= structure_ref((V97),VV[0],6);
	(void)((*(LnkLI60))(/* INLINE-ARGS */V99));
	princ_str("]))",VV[14]);
	V100= structure_ref((V97),VV[0],4);
	if(type_of(/* INLINE-ARGS */V100)!=t_cons)FEwrong_type_argument(Scons,/* INLINE-ARGS */V100);
	(/* INLINE-ARGS */V100)->c.c_cdr = Ct;
	princ_str("goto T",VV[14]);
	V101= structure_ref((V97),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V101)));
	princ_char(59,VV[14]);
T287:;
	V96= cdr((V96));
	V97= car((V96));
	goto T282;}
T278:;
	princ_str("\n	FEerror(\"The GO tag ~s is not established.\",1,nlj_tag);",VV[14]);
	princ_str("\n	}",VV[14]);
	base[3]= make_cons((V94),(VV[13]->s.s_dbind));
	bds_bind(VV[13],base[3]);
	{object V102 = (*(LnkLI57))((V93));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR9(V102)}}}
}
/*	local entry for function C2TAGBODY-CCB	*/

static object LI10(V104)

object V104;
{	 VMB10 VMS10 VMV10
	bds_check;
TTL:;
	{register object V105;
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	V105= make_cons(symbol_value(VV[12]),Cnil);
	bds_bind(VV[18],symbol_value(VV[18]));
	bds_bind(VV[20],symbol_value(VV[20]));
	bds_bind(VV[21],symbol_value(VV[21]));
	{register object V106;
	register object V107;
	base[4]= make_cons(VV[19],symbol_value(VV[13]));
	V106= (*(LnkLI62))();
	bds_bind(VV[13],base[4]);
	V107= Cnil;
	princ_str("\n	",VV[14]);
	(void)((*(LnkLI63))((V106)));
	princ_str("=alloc_frame_id();",VV[14]);
	princ_str("\n	",VV[14]);
	(void)((*(LnkLI63))((V106)));
	princ_str("=MMcons(",VV[14]);
	(void)((*(LnkLI63))((V106)));
	princ_char(44,VV[14]);
	(void)((VFUN_NARGS=0,(*(LnkLI64))()));
	princ_str(");",VV[14]);
	(void)((*(LnkLI65))((V106)));
	V107= (*(LnkLI66))();
	princ_str("\n	frs_push(FRS_CATCH,",VV[14]);
	(void)((*(LnkLI67))((V106)));
	princ_str(");",VV[14]);
	princ_str("\n	if(nlj_active){",VV[14]);
	princ_str("\n	nlj_active=FALSE;",VV[14]);
	{register object V108;
	register object V109;
	V108= (V104);
	V109= car((V108));
T350:;
	if(!(endp((V108)))){
	goto T351;}
	goto T346;
T351:;
	base[6]= (V109);
	base[7]= VV[0];
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T355;}
	setq(VV[12],number_plus(symbol_value(VV[12]),small_fixnum(1)));
	V110= make_cons(symbol_value(VV[12]),Ct);
	(void)(structure_set((V109),VV[0],4,/* INLINE-ARGS */V110));
	(void)(structure_set((V109),VV[0],5,(V105)));
	if((structure_ref((V109),VV[0],2))!=Cnil){
	goto T363;}
	if((structure_ref((V109),VV[0],3))==Cnil){
	goto T355;}
T363:;
	(void)(structure_set((V109),VV[0],2,(V106)));
	if((structure_ref((V109),VV[0],3))==Cnil){
	goto T368;}
	(void)(structure_set((V109),VV[0],3,(V107)));
T368:;
	princ_str("\n	if(eql(nlj_tag,VV[",VV[14]);
	V111= structure_ref((V109),VV[0],6);
	(void)((*(LnkLI60))(/* INLINE-ARGS */V111));
	princ_str("]))",VV[14]);
	V112= structure_ref((V109),VV[0],4);
	if(type_of(/* INLINE-ARGS */V112)!=t_cons)FEwrong_type_argument(Scons,/* INLINE-ARGS */V112);
	(/* INLINE-ARGS */V112)->c.c_cdr = Ct;
	princ_str("goto T",VV[14]);
	V113= structure_ref((V109),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V113)));
	princ_char(59,VV[14]);
T355:;
	V108= cdr((V108));
	V109= car((V108));
	goto T350;}
T346:;
	princ_str("\n	FEerror(\"The GO tag ~s is not established.\",1,nlj_tag);",VV[14]);
	princ_str("\n	}",VV[14]);
	base[5]= make_cons((V105),(VV[13]->s.s_dbind));
	bds_bind(VV[13],base[5]);
	{object V114 = (*(LnkLI57))((V104));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR10(V114)}}}
}
/*	local entry for function C1GO	*/

static object LI11(V116)

object V116;
{	 VMB11 VMS11 VMV11
TTL:;
	if(!(endp((V116)))){
	goto T391;}
	(void)((*(LnkLI68))(VV[1],small_fixnum(1),small_fixnum(0)));
	goto T389;
T391:;
	if(endp(cdr((V116)))){
	goto T394;}
	V117 = make_fixnum(length((V116)));
	(void)((*(LnkLI69))(VV[1],small_fixnum(1),V117));
	goto T389;
T394:;
	if(type_of(car((V116)))==t_symbol){
	goto T389;}
	{object V118= car((V116));
	if(type_of(V118)==t_fixnum||type_of(V118)==t_bignum){
	goto T389;}}
	(void)(car((V116)));
T389:;
	{register object V119;
	register object V120;
	register object V121;
	register object V122;
	V119= symbol_value(VV[4]);
	V120= car((V116));
	V121= Cnil;
	V122= Cnil;
T404:;
	if(!(endp((V119)))){
	goto T405;}
	{object V123 = (VFUN_NARGS=2,(*(LnkLI70))(VV[23],(V120)));
	VMR11(V123)}
T405:;
	{object V124= car((V119));
	if((V124!= VV[71]))goto T410;
	V121= Ct;
	goto T409;
T410:;
	if((V124!= VV[72]))goto T412;
	V122= Ct;
	goto T409;
T412:;
	V125= structure_ref(car((V119)),VV[0],0);
	if(!((/* INLINE-ARGS */V125)==((V120)))){
	goto T409;}
	{register object V126;
	V126= car((V119));
	if(((V121))==Cnil){
	goto T419;}
	(void)(structure_set((V126),VV[0],3,Ct));
	goto T417;
T419:;
	if(((V122))==Cnil){
	goto T422;}
	(void)(structure_set((V126),VV[0],2,Ct));
	goto T417;
T422:;
	(void)(structure_set((V126),VV[0],1,Ct));
T417:;
	{object V127 = list(5,VV[1],symbol_value(VV[24]),(V122),(V121),(V126));
	VMR11(V127)}}}
T409:;
	V119= cdr((V119));
	goto T404;}
}
/*	local entry for function C2GO	*/

static object LI12(V131,V132,V133)

object V131;object V132;object V133;
{	 VMB12 VMS12 VMV12
TTL:;
	if(((V132))==Cnil){
	goto T428;}
	{object V134 = (*(LnkLI73))((V133));
	VMR12(V134)}
T428:;
	if(((V131))==Cnil){
	goto T431;}
	{object V135 = (*(LnkLI74))((V133));
	VMR12(V135)}
T431:;
	{object V136 = (*(LnkLI75))((V133));
	VMR12(V136)}
}
/*	local entry for function C2GO-LOCAL	*/

static object LI13(V138)

object V138;
{	 VMB13 VMS13 VMV13
TTL:;
	V139= structure_ref((V138),VV[0],5);
	(void)((*(LnkLI76))(/* INLINE-ARGS */V139));
	princ_str("\n	",VV[14]);
	V140= structure_ref((V138),VV[0],4);
	if(type_of(/* INLINE-ARGS */V140)!=t_cons)FEwrong_type_argument(Scons,/* INLINE-ARGS */V140);
	(/* INLINE-ARGS */V140)->c.c_cdr = Ct;
	princ_str("goto T",VV[14]);
	V141= structure_ref((V138),VV[0],4);
	(void)((*(LnkLI60))(car(/* INLINE-ARGS */V141)));
	princ_char(59,VV[14]);
	{object V142 = Cnil;
	VMR13(V142)}
}
/*	local entry for function C2GO-CLB	*/

static object LI14(V144)

register object V144;
{	 VMB14 VMS14 VMV14
TTL:;
	princ_str("\n	vs_base=vs_top;",VV[14]);
	princ_str("\n	unwind(frs_sch(",VV[14]);
	if((structure_ref((V144),VV[0],3))==Cnil){
	goto T445;}
	V145= structure_ref((V144),VV[0],2);
	(void)((*(LnkLI67))(/* INLINE-ARGS */V145));
	goto T443;
T445:;
	V146= structure_ref((V144),VV[0],2);
	(void)((*(LnkLI63))(/* INLINE-ARGS */V146));
T443:;
	princ_str("),VV[",VV[14]);
	V147= structure_ref((V144),VV[0],6);
	(void)((*(LnkLI60))(/* INLINE-ARGS */V147));
	princ_str("]);",VV[14]);
	{object V148 = Cnil;
	VMR14(V148)}
}
/*	local entry for function C2GO-CCB	*/

static object LI15(V150)

object V150;
{	 VMB15 VMS15 VMV15
TTL:;
	princ_str("\n	{frame_ptr fr;",VV[14]);
	princ_str("\n	fr=frs_sch(",VV[14]);
	V151= structure_ref((V150),VV[0],3);
	(void)((*(LnkLI77))(/* INLINE-ARGS */V151));
	princ_str(");",VV[14]);
	princ_str("\n	if(fr==NULL)FEerror(\"The GO tag ~s is missing.\",1,VV[",VV[14]);
	V152= structure_ref((V150),VV[0],6);
	(void)((*(LnkLI60))(/* INLINE-ARGS */V152));
	princ_str("]);",VV[14]);
	princ_str("\n	vs_base=vs_top;",VV[14]);
	princ_str("\n	unwind(fr,VV[",VV[14]);
	V153= structure_ref((V150),VV[0],6);
	(void)((*(LnkLI60))(/* INLINE-ARGS */V153));
	princ_str("]);}",VV[14]);
	{object V154 = Cnil;
	VMR15(V154)}
}
/*	local entry for function WT-SWITCH-CASE	*/

static object LI16(V156)

register object V156;
{	 VMB16 VMS16 VMV16
TTL:;
	if(((V156))==Cnil){
	goto T467;}
	princ_str("\n	",VV[14]);
	if(!(type_of((V156))==t_fixnum)){
	goto T473;}
	V157= VV[25];
	goto T471;
T473:;
	V157= VV[26];
T471:;
	(void)((*(LnkLI60))(V157));
	(void)((*(LnkLI60))((V156)));
	princ_char(58,VV[14]);
	{object V158 = Cnil;
	VMR16(V158)}
T467:;
	{object V159 = Cnil;
	VMR16(V159)}
}
/*	local entry for function C1SWITCH	*/

static object LI17(V161)

object V161;
{	 VMB17 VMS17 VMV17
	bds_check;
TTL:;
	bds_bind(VV[4],symbol_value(VV[4]));
	{object V162;
	register object V163;
	object V164;
	V162= car((V161));
	V163= cdr((V161));
	V164= (*(LnkLI78))((V162));
	base[4]= cadr((V164));
	base[5]= VV[27];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk45)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T481;}
	base[4]= structure_ref(cadr((V164)),VV[27],2);
	base[5]= VV[28];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk79)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T481;}{object V165;
	{register object x= Ct,V166= (V163);
	while(!endp(V166))
	if(eql(x,V166->c.c_car)){
	V165= V166;
	goto T491;
	}else V166=V166->c.c_cdr;
	V165= Cnil;}
T491:;
	if(V165==Cnil)goto T490;
	goto T489;
T490:;}
	V167= make_cons(Ct,Cnil);
	V163= append((V163),/* INLINE-ARGS */V167);
T489:;
	{object V168;
	object V169= (V163);
	if(endp(V169)){
	V163= Cnil;
	goto T494;}
	base[4]=V168=MMcons(Cnil,Cnil);
T495:;
	{register object V170;
	V170= (V169->c.c_car);
	if(type_of((V170))==t_symbol){
	goto T497;}
	if(!(type_of((V170))==t_fixnum||type_of((V170))==t_bignum)){
	goto T498;}
T497:;
	{register object V171;
	V171= (VFUN_NARGS=8,(*(LnkLI49))(VV[5],(V170),VV[6],Cnil,VV[7],Cnil,VV[8],Cnil));
	if(!(type_of((V170))==t_fixnum)){
	goto T505;}
	(void)(structure_set((V171),VV[0],1,Ct));
	(void)(structure_set((V171),VV[0],7,(V170)));
	goto T503;
T505:;
	if(!((Ct)==((V170)))){
	goto T503;}
	(void)(structure_set((V171),VV[0],1,Ct));
	(void)(structure_set((V171),VV[0],7,VV[29]));
T503:;
	(V168->c.c_car)= (V171);
	goto T496;}
T498:;
	(V168->c.c_car)= (V170);}
T496:;
	if(endp(V169=MMcdr(V169))){
	V163= base[4];
	goto T494;}
	V168=MMcdr(V168)=MMcons(Cnil,Cnil);
	goto T495;}
T494:;
	{object V172;
	V173= append((V163),VV[30]);
	V172= (*(LnkLI80))(/* INLINE-ARGS */V173);
	V174= list(3,VV[31],cadr((V172)),(V164));
	{object V175 = nconc(/* INLINE-ARGS */V174,cddr((V172)));
	bds_unwind1;
	VMR17(V175)}}
T481:;
	V176= make_cons(VV[31],(V161));
	V177= (*(LnkLI81))(/* INLINE-ARGS */V176);
	{object V178 = (*(LnkLI78))(/* INLINE-ARGS */V177);
	bds_unwind1;
	VMR17(V178)}}
}
/*	local entry for function C2SWITCH	*/

static object LI18(V183,V184,V185,V186)

object V183;object V184;object V185;object V186;
{	 VMB18 VMS18 VMV18
	bds_check;
TTL:;
	bds_bind(VV[32],small_fixnum(0));
	bds_bind(VV[18],symbol_value(VV[18]));
	{object V187;
	V188= make_cons((V183),Cnil);
	V187= (VFUN_NARGS=2,(*(LnkLI82))(/* INLINE-ARGS */V188,VV[33]));
	base[2]= VV[34];
	base[3]= (V187);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk83)();
	vs_top=sup;
	if(((V185))==Cnil){
	goto T518;}
	(void)((*(LnkLI54))((V186)));
	goto T516;
T518:;
	if(((V184))==Cnil){
	goto T521;}
	(void)((*(LnkLI55))((V186)));
	goto T516;
T521:;
	(void)((*(LnkLI56))((V186)));
T516:;
	princ_char(125,VV[14]);
	(void)((VFUN_NARGS=1,(*(LnkLI58))(Cnil)));
	{object V189 = (*(LnkLI84))();
	bds_unwind1;
	bds_unwind1;
	VMR18(V189)}}
}
/*	macro definition for SWITCH	*/

static L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	check_arg(2);
	vs_top=sup;
	{object V190=base[0]->c.c_cdr;
	if(endp(V190))invalid_macro_call();
	base[2]= (V190->c.c_car);
	V190=V190->c.c_cdr;
	base[3]= V190;
	base[4]= Cnil;}
	{register object V191;
	register object V192;
	V191= base[3];
	V192= car((V191));
T531:;
	if(!(endp((V191)))){
	goto T532;}
	goto T527;
T532:;
	if(!(type_of((V192))==t_fixnum||type_of((V192))==t_bignum)){
	goto T536;}
	V193= list(3,VV[36],(V192),base[2]);
	V194= list(4,VV[35],/* INLINE-ARGS */V193,list(2,VV[1],(V192)),Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V194,base[4]);
T536:;
	V191= cdr((V191));
	V192= car((V191));
	goto T531;}
T527:;
	V195= nreverse(base[4]);
	base[5]= base[3];
	{register object x= Ct,V197= base[3];
	while(!endp(V197))
	if(eql(x,V197->c.c_car)){
	goto T550;
	}else V197=V197->c.c_cdr;
	goto T549;}
T550:;
	base[6]= Cnil;
	goto T547;
T549:;
	base[6]= VV[38];
T547:;
	base[7]= VV[39];
	vs_top=(vs_base=base+5)+3;
	Lappend();
	vs_top=sup;
	V196= vs_base[0];
	V198= make_cons(VV[37],V196);
	V199= append(/* INLINE-ARGS */V195,/* INLINE-ARGS */V198);
	base[5]= make_cons(VV[10],/* INLINE-ARGS */V199);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	macro definition for SWITCH-FINISH	*/

static L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	check_arg(2);
	vs_top=sup;
	{object V200=base[0]->c.c_cdr;
	if(!endp(V200))invalid_macro_call();}
	base[2]= VV[40];
	vs_top=(vs_base=base+2)+1;
	return;
}
static object  LnkTLI84(){return call_proc0(VV[84],&LnkLI84);} /* CLOSE-INLINE-BLOCKS */
static LnkT83(){ call_or_link(VV[83],&Lnk83);} /* WT-INLINE-LOC */
static object  LnkTLI82(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[82],&LnkLI82,ap);} /* INLINE-ARGS */
static object  LnkTLI81(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[81],&LnkLI81,1,ap);} /* CMP-MACROEXPAND-1 */
static object  LnkTLI80(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[80],&LnkLI80,1,ap);} /* C1TAGBODY */
static LnkT79(){ call_or_link(VV[79],&Lnk79);} /* SUBTYPEP */
static object  LnkTLI78(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[78],&LnkLI78,1,ap);} /* C1EXPR */
static object  LnkTLI77(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[77],&LnkLI77,1,ap);} /* WT-CCB-VS */
static object  LnkTLI76(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[76],&LnkLI76,1,ap);} /* UNWIND-NO-EXIT */
static object  LnkTLI75(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[75],&LnkLI75,1,ap);} /* C2GO-LOCAL */
static object  LnkTLI74(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[74],&LnkLI74,1,ap);} /* C2GO-CLB */
static object  LnkTLI73(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[73],&LnkLI73,1,ap);} /* C2GO-CCB */
static object  LnkTLI70(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[70],&LnkLI70,ap);} /* CMPERR */
static object  LnkTLI69(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[69],&LnkLI69,3,ap);} /* TOO-MANY-ARGS */
static object  LnkTLI68(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[68],&LnkLI68,3,ap);} /* TOO-FEW-ARGS */
static object  LnkTLI67(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[67],&LnkLI67,1,ap);} /* WT-VS* */
static object  LnkTLI66(){return call_proc0(VV[66],&LnkLI66);} /* CCB-VS-PUSH */
static object  LnkTLI65(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[65],&LnkLI65,1,ap);} /* CLINK */
static object  LnkTLI64(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[64],&LnkLI64,ap);} /* WT-CLINK */
static object  LnkTLI63(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[63],&LnkLI63,1,ap);} /* WT-VS */
static object  LnkTLI62(){return call_proc0(VV[62],&LnkLI62);} /* VS-PUSH */
static LnkT61(){ call_or_link(VV[61],&Lnk61);} /* C2EXPR */
static object  LnkTLI60(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[60],&LnkLI60,1,ap);} /* WT1 */
static object  LnkTLI59(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[59],&LnkLI59,1,ap);} /* WT-SWITCH-CASE */
static object  LnkTLI58(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[58],&LnkLI58,ap);} /* UNWIND-EXIT */
static object  LnkTLI57(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[57],&LnkLI57,1,ap);} /* C2TAGBODY-BODY */
static object  LnkTLI56(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[56],&LnkLI56,1,ap);} /* C2TAGBODY-LOCAL */
static object  LnkTLI55(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[55],&LnkLI55,1,ap);} /* C2TAGBODY-CLB */
static object  LnkTLI54(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[54],&LnkLI54,1,ap);} /* C2TAGBODY-CCB */
static object  LnkTLI53(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[53],&LnkLI53,1,ap);} /* ADD-OBJECT */
static object  LnkTLI52(){return call_proc0(VV[52],&LnkLI52);} /* C1NIL */
static object  LnkTLI51(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[51],&LnkLI51,1,ap);} /* ADD-LOOP-REGISTERS */
static object  LnkTLI50(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[50],&LnkLI50,2,ap);} /* C1EXPR* */
static object  LnkTLI49(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[49],&LnkLI49,ap);} /* MAKE-TAG */
static object  LnkTLI48(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_vproc(VV[48],&LnkLI48,ap);} /* MAKE-INFO */
static object  LnkTLI47(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[47],&LnkLI47,1,ap);} /* ADD-REG1 */
static object  LnkTLI46(va_alist)va_dcl{va_list ap;va_start(ap);return(object )call_proc(VV[46],&LnkLI46,2,ap);} /* JUMPS-TO-P */
static LnkT45(){ call_or_link(VV[45],&Lnk45);} /* STRUCTURE-SUBTYPE-P */
