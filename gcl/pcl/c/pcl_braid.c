
#include "cmpinclude.h"
#include "pcl_braid.h"
void init_pcl_braid(){do_init(VV);}
/*	local entry for function ALLOCATE-STANDARD-INSTANCE	*/

static object LI1(object V1,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB1 VMS1 VMV1
	{object V2;
	object V3;
	object V4;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V2= V1;
	narg = narg - 1;
	if (narg <= 0) goto T1;
	else {
	V3= first;}
	V4= Ct;
	--narg; goto T2;
	goto T1;
T1:;
	V3= Cnil;
	V4= Cnil;
	goto T2;
T2:;
	{object V5;
	V5= (*(LnkLI178))();
	V6= Ct;
	STSET(object,(V5),0, (V2));
	(void)((V2));
	if(((V4))==Cnil){
	goto T9;}
	base[0]= (V3);
	vs_top=(vs_base=base+0)+1;
	Lcopy_seq();
	vs_top=sup;
	V7= vs_base[0];
	goto T7;
	goto T9;
T9:;
	base[0]= ((V2))->v.v_self[12];
	base[1]= VV[2];
	base[2]= (VV[0]->s.s_dbind);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk179)();
	vs_top=sup;
	V7= vs_base[0];
	goto T7;
T7:;
	V8= Ct;
	STSET(object,(V5),4, V7);
	(void)(V7);
	{object V9 = (V5);
	VMR1(V9)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for ALLOCATE-FUNCALLABLE-INSTANCE-SLOTS	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V10=base[0]->c.c_cdr;
	if(endp(V10))invalid_macro_call();
	base[2]= (V10->c.c_car);
	V10=V10->c.c_cdr;
	if(endp(V10)){
	base[3]= Cnil;
	} else {
	base[3]= (V10->c.c_car);
	V10=V10->c.c_cdr;}
	if(endp(V10)){
	base[4]= Cnil;
	} else {
	base[4]= (V10->c.c_car);
	V10=V10->c.c_cdr;}
	if(!endp(V10))invalid_macro_call();}
	V11= list(2,VV[4],list(2,VV[5],base[2]));
	V12= make_cons(/* INLINE-ARGS */V11,Cnil);
	if((base[3])==Cnil){
	goto T19;}
	V13= list(4,VV[6],base[3],list(2,VV[7],base[4]),VV[8]);
	goto T17;
	goto T19;
T19:;
	V13= VV[9];
	goto T17;
T17:;
	base[5]= list(3,VV[3],/* INLINE-ARGS */V12,V13);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function ALLOCATE-FUNCALLABLE-INSTANCE	*/

static object LI3(object V14,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB3 VMS3 VMV3
	{object V15;
	object V16;
	object V17;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V15= V14;
	narg = narg - 1;
	if (narg <= 0) goto T21;
	else {
	V16= first;}
	V17= Ct;
	--narg; goto T22;
	goto T21;
T21:;
	V16= Cnil;
	V17= Cnil;
	goto T22;
T22:;
	base[0]= (*(LnkLI180))();
	base[0]=MMcons(base[0],Cnil);
	V18= 
	make_cclosure_new(LC45,Cnil,base[0],Cdata);
	(void)((*(LnkLI181))((base[0]->c.c_car),V18));
	{object V19;
	V19= ((base[0]->c.c_car))->cc.cc_turbo[13];
	((V19))->c.c_car = V15;}
	{object V21;
	object V22;
	V21= ((base[0]->c.c_car))->cc.cc_turbo[12];
	{object V23;
	V23= ((V15))->v.v_self[12];
	if(((V17))==Cnil){
	goto T35;}
	base[3]= (V16);
	vs_top=(vs_base=base+3)+1;
	Lcopy_seq();
	vs_top=sup;
	V22= vs_base[0];
	goto T32;
	goto T35;
T35:;
	base[3]= (V23);
	base[4]= VV[2];
	base[5]= (VV[0]->s.s_dbind);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk179)();
	vs_top=sup;
	V22= vs_base[0];}
	goto T32;
T32:;
	((V21))->c.c_car = (V22);}
	{object V24 = (base[0]->c.c_car);
	VMR3(V24)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function ALLOCATE-STRUCTURE-INSTANCE	*/

static object LI4(object V25,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB4 VMS4 VMV4
	{object V26;
	object V27;
	object V28;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V26= V25;
	narg = narg - 1;
	if (narg <= 0) goto T42;
	else {
	V27= first;}
	V28= Ct;
	--narg; goto T43;
	goto T42;
T42:;
	V27= Cnil;
	V28= Cnil;
	goto T43;
T43:;
	{object V29;
	object V30;
	V29= ((V26))->v.v_self[11];
	base[2]= (V29);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk183)(Lclptr183);
	vs_top=sup;
	V30= vs_base[0];
	if(((V30))==Cnil){
	goto T49;}
	{object V31;
	register object V32;
	V31= (
	(type_of((V30)) == t_sfun ?(*(((V30))->sfn.sfn_self)):
	(fcall.argd=0,type_of((V30))==t_vfun) ?
	(*(((V30))->sfn.sfn_self)):
	(fcall.fun=((V30)),fcalln))());
	base[2]= (V29);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk184)(Lclptr184);
	vs_top=sup;
	V32= vs_base[0];
	if(((V28))==Cnil){
	goto T54;}
	{long V33;
	register long V34;
	V33= (long)length((V27));
	V34= 0;
	goto T60;
T60:;
	if(!((V34)>=(V33))){
	goto T61;}
	goto T54;
	goto T61;
T61:;
	{register object V35;
	{register object V36;
	V36= CMPcar((V32));
	V32= CMPcdr((V32));
	V35= (V36);}
	{register object V37;
	register object V38;
	register object V39;
	register object V40;
	V37= (V29);
	V38= (V31);
	V39= (V35);
	V40= ((V27))->v.v_self[V34];
	V41= ({object _tmp=get(VV[185],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[185])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[185])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V42 = V41,
	(type_of(V42) == t_sfun ?(*((V42)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V42)==t_vfun) ?
	(*((V42)->sfn.sfn_self)):
	(fcall.fun=(V42),fcalln))((V40),(V37),(V38),(V39))));}}
	V34= (long)(V34)+1;
	goto T60;}
	goto T54;
T54:;
	{object V43 = (V31);
	VMR4(V43)}}
	goto T49;
T49:;
	base[2]= VV[11];
	base[4]= (V29);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk186)(Lclptr186);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	{object V44 = vs_base[0];
	VMR4(V44)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for INITIAL-CLASSES-AND-WRAPPERS	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	check_arg(2);
	vs_top=sup;
	{object V45=base[0]->c.c_cdr;
	base[2]= V45;}
	{object V47;
	object V48= base[2];
	if(V48==Cnil){
	V46= Cnil;
	goto T80;}
	base[3]=V47=MMcons(Cnil,Cnil);
	goto T81;
T81:;
	{register object V49;
	V49= (V48->c.c_car);
	{object V50;
	base[5]= Cnil;
	base[6]= VV[13];
	base[7]= (V49);
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (VV[14]->s.s_dbind);
	vs_top=(vs_base=base+4)+2;
	Lintern();
	vs_top=sup;
	V50= vs_base[0];
	if(!(((V49))==(VV[16]))){
	goto T91;}
	V51= VV[17];
	goto T89;
	goto T91;
T91:;
	V51= list(2,VV[18],list(2,VV[19],list(2,VV[20],(V49))));
	goto T89;
T89:;
	if(!(((V49))==(VV[16]))){
	goto T95;}
	V52= VV[22];
	goto T93;
	goto T95;
T95:;
	V52= VV[23];
	goto T93;
T93:;
	V53= list(2,VV[21],V52);
	V54= list(2,VV[24],(V50));
	(V47->c.c_car)= list(9,VV[15],(V50),V51,(V49),/* INLINE-ARGS */V53,/* INLINE-ARGS */V54,(V49),list(2,VV[25],list(2,VV[20],(V49))),(V49));}}
	if((V48=MMcdr(V48))==Cnil){
	V46= base[3];
	goto T80;}
	V47=MMcdr(V47)=MMcons(Cnil,Cnil);
	goto T81;}
	goto T80;
T80:;
	base[3]= make_cons(VV[12],V46);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function BOOTSTRAP-META-BRAID	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	bds_check;
	goto TTL;
TTL:;
	{object V56;
	V56= (VFUN_NARGS=1,(*(LnkLI187))(VV[26]));
	{object V58;
	V58= VV[188];
	V59= ({object _tmp=get(VV[189],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[189])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[189])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V60 = V59,
	(type_of(V60) == t_sfun ?(*((V60)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V60)==t_vfun) ?
	(*((V60)->sfn.sfn_self)):
	(fcall.fun=(V60),fcalln))((V58),V56)));}
	(void)((*(LnkLI190))(VV[26],(V56)));}
	{object V61;
	object V62;
	object V63;
	object V64;
	object V65;
	object V66;
	object V67;
	object V68;
	object V69;
	object V70;
	object V71;
	object V72;
	object V73;
	object V74;
	object V75;
	object V76;
	object V77;
	object V78;
	bds_bind(VV[27],Cnil);
	V61= Cnil;
	V62= Cnil;
	V63= Cnil;
	V64= Cnil;
	V65= Cnil;
	V66= Cnil;
	V67= Cnil;
	V68= Cnil;
	V69= Cnil;
	V70= Cnil;
	V71= Cnil;
	V72= Cnil;
	V73= Cnil;
	V74= Cnil;
	V75= Cnil;
	V76= Cnil;
	V77= Cnil;
	V78= Cnil;
	V79 = CMPmake_fixnum((long)(*(LnkLI19))(VV[28]));
	V61= (VFUN_NARGS=1,(*(LnkLI18))(V79));
	V62= (VFUN_NARGS=1,(*(LnkLI21))((V61)));
	(void)(((V61))->v.v_self[11]= ((V62)));
	V82= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V83 = V82,
	(type_of(V83) == t_sfun ?(*((V83)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V83)==t_vfun) ?
	(*((V83)->sfn.sfn_self)):
	(fcall.fun=(V83),fcalln))(V62,VV[28])));
	V84 = CMPmake_fixnum((long)(*(LnkLI19))(VV[29]));
	V63= (VFUN_NARGS=1,(*(LnkLI18))(V84));
	V64= (VFUN_NARGS=1,(*(LnkLI21))((V61)));
	(void)(((V63))->v.v_self[11]= ((V64)));
	V87= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V88 = V87,
	(type_of(V88) == t_sfun ?(*((V88)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V88)==t_vfun) ?
	(*((V88)->sfn.sfn_self)):
	(fcall.fun=(V88),fcalln))(V64,VV[29])));
	V89 = CMPmake_fixnum((long)(*(LnkLI19))(VV[30]));
	V65= (VFUN_NARGS=1,(*(LnkLI18))(V89));
	V66= (VFUN_NARGS=1,(*(LnkLI21))((V61)));
	(void)(((V65))->v.v_self[11]= ((V66)));
	V92= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V93 = V92,
	(type_of(V93) == t_sfun ?(*((V93)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V93)==t_vfun) ?
	(*((V93)->sfn.sfn_self)):
	(fcall.fun=(V93),fcalln))(V66,VV[30])));
	V94 = CMPmake_fixnum((long)(*(LnkLI19))(VV[31]));
	V67= (VFUN_NARGS=1,(*(LnkLI18))(V94));
	V68= (VFUN_NARGS=1,(*(LnkLI21))((V61)));
	(void)(((V67))->v.v_self[11]= ((V68)));
	V97= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V98 = V97,
	(type_of(V98) == t_sfun ?(*((V98)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V98)==t_vfun) ?
	(*((V98)->sfn.sfn_self)):
	(fcall.fun=(V98),fcalln))(V68,VV[31])));
	V99 = CMPmake_fixnum((long)(*(LnkLI19))(VV[32]));
	V69= (VFUN_NARGS=1,(*(LnkLI18))(V99));
	V70= (VFUN_NARGS=1,(*(LnkLI21))((V61)));
	(void)(((V69))->v.v_self[11]= ((V70)));
	V102= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V103 = V102,
	(type_of(V103) == t_sfun ?(*((V103)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V103)==t_vfun) ?
	(*((V103)->sfn.sfn_self)):
	(fcall.fun=(V103),fcalln))(V70,VV[32])));
	V104 = CMPmake_fixnum((long)(*(LnkLI19))(VV[33]));
	V71= (VFUN_NARGS=1,(*(LnkLI18))(V104));
	V72= (VFUN_NARGS=1,(*(LnkLI21))((V61)));
	(void)(((V71))->v.v_self[11]= ((V72)));
	V107= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V108 = V107,
	(type_of(V108) == t_sfun ?(*((V108)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V108)==t_vfun) ?
	(*((V108)->sfn.sfn_self)):
	(fcall.fun=(V108),fcalln))(V72,VV[33])));
	V109 = CMPmake_fixnum((long)(*(LnkLI19))(VV[34]));
	V73= (VFUN_NARGS=1,(*(LnkLI18))(V109));
	V74= (VFUN_NARGS=1,(*(LnkLI21))((V61)));
	(void)(((V73))->v.v_self[11]= ((V74)));
	V112= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V113 = V112,
	(type_of(V113) == t_sfun ?(*((V113)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V113)==t_vfun) ?
	(*((V113)->sfn.sfn_self)):
	(fcall.fun=(V113),fcalln))(V74,VV[34])));
	V114 = CMPmake_fixnum((long)(*(LnkLI19))(VV[35]));
	V75= (VFUN_NARGS=1,(*(LnkLI18))(V114));
	V76= (VFUN_NARGS=1,(*(LnkLI21))((V61)));
	(void)(((V75))->v.v_self[11]= ((V76)));
	V117= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V118 = V117,
	(type_of(V118) == t_sfun ?(*((V118)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V118)==t_vfun) ?
	(*((V118)->sfn.sfn_self)):
	(fcall.fun=(V118),fcalln))(V76,VV[35])));
	V77= (VV[17]->s.s_dbind);
	V78= (VFUN_NARGS=1,(*(LnkLI21))((V63)));
	(void)(((V77))->v.v_self[11]= ((V78)));
	V121= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V122 = V121,
	(type_of(V122) == t_sfun ?(*((V122)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V122)==t_vfun) ?
	(*((V122)->sfn.sfn_self)):
	(fcall.fun=(V122),fcalln))(V78,VV[16])));
	{object V123;
	object V124;
	V123= (VV[36]->s.s_dbind);
	V124= CMPcar((V123));
	goto T187;
T187:;
	if(!(((V123))==Cnil)){
	goto T188;}
	goto T183;
	goto T188;
T188:;
	{object V125;
	object V126;
	object V127;
	object V128;
	V125= (*(LnkLI191))((V124));
	V126= (*(LnkLI192))((V124));
	{object V130= V126;
	if((V130!= VV[30]))goto T196;
	V127= (V65);
	goto T195;
	goto T196;
T196:;
	if((V130!= VV[28]))goto T197;
	V127= (V61);
	goto T195;
	goto T197;
T197:;
	if((V130!= VV[29]))goto T198;
	V127= (V63);
	goto T195;
	goto T198;
T198:;
	if((V130!= VV[31]))goto T199;
	V127= (V67);
	goto T195;
	goto T199;
T199:;
	if((V130!= VV[32]))goto T200;
	V127= (V69);
	goto T195;
	goto T200;
T200:;
	base[6]= VV[37];
	base[7]= VV[38];
	base[8]= VV[39];
	base[9]= VV[40];
	base[10]= V126;
	base[11]= VV[41];
	base[12]= VV[42];
	base[13]= VV[43];
	base[14]= VV[44];
	vs_top=(vs_base=base+6)+9;
	(void) (*Lnk193)();
	vs_top=sup;
	V127= vs_base[0];}
	goto T195;
T195:;{object V131;
	V131= (VFUN_NARGS=2,(*(LnkLI25))((V125),Cnil));
	if(V131==Cnil)goto T211;
	V128= V131;
	goto T210;
	goto T211;
T211:;}
	V128= (VFUN_NARGS=1,(*(LnkLI21))((V127)));
	goto T210;
T210:;
	if(((V126))==(VV[28])){
	goto T214;}
	if(!(((V126))==(VV[29]))){
	goto T213;}
	goto T214;
T214:;
	(void)((*(LnkLI194))((V125)));
	goto T213;
T213:;
	V134= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V135 = V134,
	(type_of(V135) == t_sfun ?(*((V135)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V135)==t_vfun) ?
	(*((V135)->sfn.sfn_self)):
	(fcall.fun=(V135),fcalln))(V128,V125)));}
	V123= CMPcdr((V123));
	V124= CMPcar((V123));
	goto T187;}
	goto T183;
T183:;
	{object V136;
	register object V137;
	V136= (VV[36]->s.s_dbind);
	V137= CMPcar((V136));
	goto T228;
T228:;
	if(!(((V136))==Cnil)){
	goto T229;}
	goto T224;
	goto T229;
T229:;
	{register object V138;
	register object V139;
	object V140;
	object V141;
	object V142;
	object V143;
	V138= (*(LnkLI191))((V137));
	V139= (*(LnkLI192))((V137));
	V140= (*(LnkLI195))((V137));
	V141= (*(LnkLI196))((V137));
	V142= (*(LnkLI197))((V137));
	V143= (*(LnkLI198))((V137));
	{object V144;
	base[2]= (V143);
	base[3]= VV[45];
	vs_top=(vs_base=base+2)+2;
	Lgetf();
	vs_top=sup;
	V144= vs_base[0];
	{register object V145;
	object V146;
	object V147;
	object V148;
	base[2]= (V138);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk199)();
	if(vs_base>=vs_top){vs_top=sup;goto T245;}
	V145= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T246;}
	V146= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T247;}
	V147= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T248;}
	V148= vs_base[0];
	vs_top=sup;
	goto T249;
	goto T245;
T245:;
	V145= Cnil;
	goto T246;
T246:;
	V146= Cnil;
	goto T247;
T247:;
	V147= Cnil;
	goto T248;
T248:;
	V148= Cnil;
	goto T249;
T249:;
	{register object V149;
	register object V150;
	object V151;
	V149= (VFUN_NARGS=1,(*(LnkLI25))((V138)));
	if(!(((V149))==((V66)))){
	goto T253;}
	V150= (V65);
	goto T251;
	goto T253;
T253:;
	if(!(((V149))==((V62)))){
	goto T256;}
	V150= (V61);
	goto T251;
	goto T256;
T256:;
	if(!(((V149))==((V64)))){
	goto T259;}
	V150= (V63);
	goto T251;
	goto T259;
T259:;
	if(!(((V149))==((V72)))){
	goto T262;}
	V150= (V71);
	goto T251;
	goto T262;
T262:;
	if(!(((V149))==((V74)))){
	goto T265;}
	V150= (V73);
	goto T251;
	goto T265;
T265:;
	if(!(((V149))==((V68)))){
	goto T268;}
	V150= (V67);
	goto T251;
	goto T268;
T268:;
	if(!(((V149))==((V70)))){
	goto T271;}
	V150= (V69);
	goto T251;
	goto T271;
T271:;
	if(!(((V149))==((V76)))){
	goto T274;}
	V150= (V75);
	goto T251;
	goto T274;
T274:;
	if(!(((V149))==((V78)))){
	goto T277;}
	V150= (V77);
	goto T251;
	goto T277;
T277:;
	V152 = CMPmake_fixnum((long)length((V145)));
	V150= (VFUN_NARGS=2,(*(LnkLI18))(V152,(V149)));
	goto T251;
T251:;
	V151= Cnil;
	if(!(((V138))==(Ct))){
	goto T280;}
	(VV[46]->s.s_dbind)= (V150);
	goto T280;
T280:;
	base[6]= Cnil;
	base[7]= VV[47];
	base[8]= symbol_name((V138));
	vs_top=(vs_base=base+6)+3;
	Lformat();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (VV[14]->s.s_dbind);
	vs_top=(vs_base=base+5)+2;
	Lintern();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V149);
	vs_top=(vs_base=base+4)+2;
	Lset();
	vs_top=sup;
	{register object V153;
	object V154;
	V153= (V145);
	V154= CMPcar((V153));
	goto T296;
T296:;
	if(!(((V153))==Cnil)){
	goto T297;}
	goto T292;
	goto T297;
T297:;
	base[5]= (V154);
	base[6]= VV[48];
	base[7]= VV[49];
	vs_top=(vs_base=base+5)+3;
	Lgetf();
	vs_top=sup;
	V155= vs_base[0];
	if((V155)==(VV[49])){
	goto T301;}
	base[5]= VV[50];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	goto T301;
T301:;
	V153= CMPcdr((V153));
	V154= CMPcar((V153));
	goto T296;}
	goto T292;
T292:;
	base[5]=VV[200]->s.s_gfdef;
	{object V157;
	object V158= (V145);
	if(V158==Cnil){
	V156= Cnil;
	goto T316;}
	base[4]=V157=MMcons(Cnil,Cnil);
	goto T317;
T317:;
	base[6]= (V158->c.c_car);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk200)();
	vs_top=sup;
	(V157->c.c_car)= vs_base[0];
	if((V158=MMcdr(V158))==Cnil){
	V156= base[4];
	goto T316;}
	V157=MMcdr(V157)=MMcons(Cnil,Cnil);
	goto T317;}
	goto T316;
T316:;
	(void)(((V150))->v.v_self[9]= (V156));
	(void)(((V150))->v.v_self[10]= (Cnil));
	if(!(((V139))==(VV[29]))){
	goto T323;}
	V151= (VFUN_NARGS=1,(*(LnkLI201))((V150)));
	goto T321;
	goto T323;
T323:;
	V151= (VFUN_NARGS=1,(*(LnkLI21))((V150)));
	goto T321;
T321:;
	V142= (*(LnkLI202))((V138),(V149),(V142),(V71),Cnil);
	V145= (*(LnkLI202))((V138),(V149),(V145),(V73),Ct);
	{object V159= (V139);
	if((V159!= VV[28])
	&& (V159!= VV[29]))goto T329;
	(void)((VFUN_NARGS=14,(*(LnkLI203))((V139),(V149),(V138),(V75),(V140),(V141),(V148),(V146),(V150),(V151),(V142),(V145),(V144),(V147))));
	goto T233;
	goto T329;
T329:;
	if((V159!= VV[31]))goto T330;
	(void)((VFUN_NARGS=10,(*(LnkLI203))((V139),(V149),(V138),(V75),(V140),(V141),(V148),(V146),(V150),(V151))));
	goto T233;
	goto T330;
T330:;
	if((V159!= VV[30]))goto T331;
	(void)((VFUN_NARGS=10,(*(LnkLI203))((V139),(V149),(V138),(V75),(V140),(V141),(V148),(V146),(V150),(V151))));
	goto T233;
	goto T331;
T331:;
	if((V159!= VV[32]))goto T332;
	(void)((VFUN_NARGS=9,(*(LnkLI203))((V139),(V149),(V138),(V75),(V140),(V141),(V148),(V146),(V150))));
	goto T233;
	goto T332;
T332:;}}}}}
	goto T233;
T233:;
	V136= CMPcdr((V136));
	V137= CMPcar((V136));
	goto T228;}
	goto T224;
T224:;
	{object V160;
	object V161;
	V160= (VFUN_NARGS=1,(*(LnkLI25))(VV[51]));
	if(type_of(V160)==t_structure){
	goto T344;}
	goto T342;
	goto T344;
T344:;
	if(!(((V160)->str.str_def)==(VV[52]))){
	goto T342;}
	V162= STREF(object,(V160),4);
	goto T340;
	goto T342;
T342:;{object V164;
	V164= (VV[53]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V160);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk204)();
	vs_top=sup;
	V165= vs_base[0];
	if(!((V164)==(CMPcar(V165)))){
	goto T347;}}
	V162= CMPcar(((V160))->cc.cc_turbo[12]);
	goto T340;
	goto T347;
T347:;
	base[4]= VV[54];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V162= vs_base[0];
	goto T340;
T340:;
	V166= (*(LnkLI205))(VV[28],VV[55]);
	V161= (V162)->v.v_self[fix(/* INLINE-ARGS */V166)];
	base[3]= (VFUN_NARGS=1,(*(LnkLI21))((V161)));
	base[4]= VV[56];
	vs_base=vs_top;
	(void) (*Lnk206)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L7(base);
	vs_top=sup;
	base[4]= VV[57];
	base[5]= VV[58];
	vs_top=(vs_base=base+4)+2;
	L7(base);
	vs_top=sup;
	base[4]= VV[59];
	base[5]= VV[60];
	vs_top=(vs_base=base+4)+2;
	L7(base);
	vs_top=sup;
	base[4]= VV[61];
	base[5]= Cnil;
	vs_top=(vs_base=base+4)+2;
	L7(base);
	vs_top=sup;
	(VV[62]->s.s_dbind)= base[3];
	{object V167 = (VV[62]->s.s_dbind);
	bds_unwind1;
	VMR6(V167)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-INITIALIZE-CLASS	*/

static object LI8(object V176,object V175,object V174,object V173,object V172,object V171,object V170,object V169,object V168,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{register object V177;
	object V178;
	object V179;
	object V180;
	object V181;
	register object V182;
	register object V183;
	object V184;
	object V185;
	object V186;
	register object V187;
	register object V188;
	va_start(ap,first);
	if(narg <9) too_few_arguments();
	base[0]= V176;
	base[1]= V175;
	V177= V174;
	V178= V173;
	V179= V172;
	V180= V171;
	V181= V170;
	V182= V169;
	V183= V168;
	narg = narg - 9;
	if (narg <= 0) goto T367;
	else {
	V184= first;}
	if (--narg <= 0) goto T368;
	else {
	V185= va_arg(ap,object);}
	if (--narg <= 0) goto T369;
	else {
	V186= va_arg(ap,object);}
	if (--narg <= 0) goto T370;
	else {
	V187= va_arg(ap,object);}
	if (--narg <= 0) goto T371;
	else {
	V188= va_arg(ap,object);}
	--narg; goto T372;
	goto T367;
T367:;
	V184= Cnil;
	goto T368;
T368:;
	V185= Cnil;
	goto T369;
T369:;
	V186= Cnil;
	goto T370;
T370:;
	V187= Cnil;
	goto T371;
T371:;
	V188= Cnil;
	goto T372;
T372:;
	base[14]= VV[63];
	base[15]= (V177);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[56];
	base[15]= (V179);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[57];
	V189= (VFUN_NARGS=1,(*(LnkLI25))(Ct));
	if(!((base[1])==(/* INLINE-ARGS */V189))){
	goto T388;}
	base[15]= Ct;
	goto T386;
	goto T388;
T388:;
	base[15]= list(2,VV[26],base[1]);
	goto T386;
T386:;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[35];
	{object V190;
	V190= (VFUN_NARGS=1,(*(LnkLI21))((V178)));
	V191= list(2,VV[64],base[1]);
	(void)((*(LnkLI207))(VV[35],(V190),VV[57],/* INLINE-ARGS */V191));
	(void)((*(LnkLI207))(VV[35],(V190),VV[65],base[1]));
	base[15]= (V190);}
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[66];
	base[16]= (V182);
	vs_top=(vs_base=base+16)+1;
	L9(base);
	vs_top=sup;
	base[15]= vs_base[0];
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[67];
	base[16]= CMPcdr((V182));
	vs_top=(vs_base=base+16)+1;
	L9(base);
	vs_top=sup;
	base[15]= vs_base[0];
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[68];
	base[15]= Cnil;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[69];
	base[16]= (V180);
	vs_top=(vs_base=base+16)+1;
	L9(base);
	vs_top=sup;
	base[15]= vs_base[0];
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[70];
	base[16]= (V181);
	vs_top=(vs_base=base+16)+1;
	L9(base);
	vs_top=sup;
	base[15]= vs_base[0];
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[71];
	base[15]= make_cons(Cnil,Cnil);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[55];
	base[15]= (V183);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[72];{object V192;
	{register object x= (V177),V194= (VV[73]->s.s_dbind);
	while(V194!=Cnil)
	if(eql(x,V194->c.c_car->c.c_car) &&V194->c.c_car != Cnil){
	V193= (V194->c.c_car);
	goto T426;
	}else V194=V194->c.c_cdr;
	V193= Cnil;}
	goto T426;
T426:;
	V192= CMPcadr(V193);
	if(V192==Cnil)goto T424;
	base[15]= V192;
	goto T423;
	goto T424;
T424:;}
	base[16]= (V177);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk208)();
	vs_top=sup;
	base[15]= vs_base[0];
	goto T423;
T423:;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[74];
	if((V187)==Cnil){
	V195= Cnil;
	goto T431;}
	V195= list(2,VV[75],(V187));
	goto T431;
T431:;
	if((V188)==Cnil){
	V196= Cnil;
	goto T432;}
	V196= list(2,VV[76],(V188));
	goto T432;
T432:;
	base[15]= append(V195,V196);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	{register object x= base[0],V197= VV[77];
	while(V197!=Cnil)
	if(x==(V197->c.c_car)){
	goto T435;
	}else V197=V197->c.c_cdr;
	goto T433;}
	goto T435;
T435:;
	base[14]= VV[78];
	base[15]= (V185);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[79];
	base[15]= (V186);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[80];
	base[15]= Cnil;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	goto T433;
T433:;
	if(!((base[0])==(VV[32]))){
	goto T446;}
	base[14]= VV[72];{object V199;
	{register object x= (V177),V201= (VV[73]->s.s_dbind);
	while(V201!=Cnil)
	if(eql(x,V201->c.c_car->c.c_car) &&V201->c.c_car != Cnil){
	V200= (V201->c.c_car);
	goto T453;
	}else V201=V201->c.c_cdr;
	V200= Cnil;}
	goto T453;
T453:;
	V199= CMPcadr(V200);
	if(V199==Cnil)goto T451;
	base[15]= V199;
	goto T450;
	goto T451;
T451:;}
	base[16]= (V177);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk208)();
	vs_top=sup;
	base[15]= vs_base[0];
	goto T450;
T450:;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[82];
	base[15]= list(2,VV[83],list(2,VV[84],list(2,VV[85],VV[81])));
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[86];
	base[15]= VV[81];
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[87];
	base[15]= Ct;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[74];
	base[15]= Cnil;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[88];
	vs_base=vs_top;
	{object _funobj = VV[81];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[15]= vs_base[0];
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	goto T444;
	goto T446;
T446:;
	base[14]= VV[88];
	if((V184)!=Cnil){
	base[15]= (V184);
	goto T470;}
	base[15]= (VFUN_NARGS=1,(*(LnkLI21))((V183)));
	goto T470;
T470:;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	goto T444;
T444:;
	{object V202 = base[1];
	VMR7(V202)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BOOTSTRAP-MAKE-SLOT-DEFINITIONS	*/

static object LI11(V208,V209,V210,V211,V212)

object V208;object V209;object V210;object V211;object V212;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V213;
	V213= small_fixnum(-1);
	{object V214;
	object V215= (V210);
	if(V215==Cnil){
	{object V216 = Cnil;
	VMR8(V216)}}
	base[0]=V214=MMcons(Cnil,Cnil);
	goto T471;
T471:;
	V213= number_plus((V213),small_fixnum(1));
	(V214->c.c_car)= (*(LnkLI209))((V208),(V209),(V215->c.c_car),(V211),(V212),(V213));
	if((V215=MMcdr(V215))==Cnil){
	{object V218 = base[0];
	VMR8(V218)}}
	V214=MMcdr(V214)=MMcons(Cnil,Cnil);
	goto T471;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-MAKE-SLOT-DEFINITION	*/

static object LI15(V225,V226,V227,V228,V229,V230)

register object V225;register object V226;object V227;object V228;register object V229;register object V230;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	base[0]= (V227);
	{register object V231;
	if(((V229))==Cnil){
	goto T477;}
	base[1]= VV[34];
	goto T475;
	goto T477;
T477:;
	base[1]= VV[33];
	goto T475;
T475:;
	base[2]= (VFUN_NARGS=1,(*(LnkLI21))((V228)));
	base[4]= base[0];
	base[5]= VV[38];
	vs_top=(vs_base=base+4)+2;
	Lgetf();
	vs_top=sup;
	V231= vs_base[0];
	base[4]= VV[63];
	base[5]= (V231);
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[89];
	base[6]= VV[90];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[91];
	base[6]= VV[92];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[93];
	base[6]= VV[94];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[95];
	base[6]= VV[96];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[97];
	base[6]= VV[98];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[99];
	base[5]= VV[49];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[57];{object V232;
	base[6]= VV[100];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	V232= vs_base[0];
	if(V232==Cnil)goto T512;
	base[5]= V232;
	goto T511;
	goto T512;
T512:;}
	base[5]= Ct;
	goto T511;
T511:;
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[59];{object V233;
	base[6]= VV[101];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	V233= vs_base[0];
	if(V233==Cnil)goto T518;
	base[5]= V233;
	goto T517;
	goto T518;
T518:;}
	base[5]= VV[102];
	goto T517;
T517:;
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[26];
	base[5]= (V226);
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	if(((V229))==Cnil){
	goto T524;}
	base[4]= VV[103];
	base[5]= (V230);
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[104];
	base[6]= Cnil;
	base[7]= (V231);
	base[8]= (V230);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk210)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[105];
	base[6]= Cnil;
	base[7]= (V231);
	base[8]= (V230);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk211)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[106];
	base[6]= Cnil;
	base[7]= (V231);
	base[8]= (V230);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk212)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[107];
	base[5]= small_fixnum(7);
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	{object V235;{object V236;
	base[4]= (V231);
	base[5]= (VV[108]->s.s_dbind);
	vs_top=(vs_base=base+4)+2;
	Lgethash();
	vs_top=sup;
	V236= vs_base[0];
	if(V236==Cnil)goto T552;
	V235= V236;
	goto T551;
	goto T552;
T552:;}
	{object V238;
	object V239;
	V238= (VV[108]->s.s_dbind);
	base[5]= VV[109];
	base[6]= VV[110];
	base[7]= VV[111];
	base[8]= small_fixnum(5);
	vs_top=(vs_base=base+5)+4;
	Lmake_hash_table();
	vs_top=sup;
	V239= vs_base[0];
	base[5]= V231;
	base[6]= (V238);
	base[7]= (V239);
	vs_top=(vs_base=base+5)+3;
	siLhash_set();
	vs_top=sup;
	V235= vs_base[0];}
	goto T551;
T551:;
	base[4]= V226;
	base[5]= V235;
	base[6]= base[2];
	vs_top=(vs_base=base+4)+3;
	siLhash_set();
	vs_top=sup;}
	goto T524;
T524:;
	if(!(((V225))==(VV[28]))){
	goto T568;}
	if(!(((V231))==(VV[79]))){
	goto T568;}
	if(((V229))==Cnil){
	goto T568;}
	(VV[112]->s.s_dbind)= base[2];
	goto T568;
T568:;
	if(!(((V225))==(VV[29]))){
	goto T576;}
	if(!(((V231))==(VV[79]))){
	goto T576;}
	if(((V229))==Cnil){
	goto T576;}
	(VV[113]->s.s_dbind)= base[2];
	goto T576;
T576:;
	{object V243 = base[2];
	VMR9(V243)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-ACCESSOR-DEFINITIONS	*/

static object LI18(V245)

object V245;
{	 VMB10 VMS10 VMV10
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[114],(V245));
	{register object V246;
	register object V247;
	V246= (VV[36]->s.s_dbind);
	V247= CMPcar((V246));
	goto T587;
T587:;
	if(!(((V246))==Cnil)){
	goto T588;}
	{object V248 = Cnil;
	bds_unwind1;
	VMR10(V248)}
	goto T588;
T588:;
	{object V249;
	object V250;
	V249= (*(LnkLI191))((V247));
	V250= (*(LnkLI192))((V247));
	if(((V250))==(VV[31])){
	goto T592;}
	{object V251;
	V251= (*(LnkLI197))((V247));
	{register object V252;
	register object V253;
	V252= (V251);
	V253= CMPcar((V252));
	goto T601;
T601:;
	if(!(((V252))==Cnil)){
	goto T602;}
	goto T592;
	goto T602;
T602:;
	{register object V254;
	register object V255;
	register object V256;
	base[3]= (V253);
	base[4]= VV[38];
	vs_top=(vs_base=base+3)+2;
	Lgetf();
	vs_top=sup;
	V254= vs_base[0];
	base[3]= (V253);
	base[4]= VV[96];
	vs_top=(vs_base=base+3)+2;
	Lgetf();
	vs_top=sup;
	V255= vs_base[0];
	base[3]= (V253);
	base[4]= VV[98];
	vs_top=(vs_base=base+3)+2;
	Lgetf();
	vs_top=sup;
	V256= vs_base[0];
	(void)((*(LnkLI213))((V249),(V254),(V255),(V256),Cnil));
	V257= (*(LnkLI214))((V254));
	V258= make_cons(/* INLINE-ARGS */V257,Cnil);
	V259= (*(LnkLI215))((V254));
	V260= make_cons(/* INLINE-ARGS */V259,Cnil);
	V261= (*(LnkLI216))((V254));
	V262= make_cons(/* INLINE-ARGS */V261,Cnil);
	(void)((*(LnkLI213))(VV[115],(V254),/* INLINE-ARGS */V258,/* INLINE-ARGS */V260,/* INLINE-ARGS */V262));}
	V252= CMPcdr((V252));
	V253= CMPcar((V252));
	goto T601;}}}
	goto T592;
T592:;
	V246= CMPcdr((V246));
	V247= CMPcar((V246));
	goto T587;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for BOOTSTRAP-ACCESSOR-DEFINITION	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{register object V263;
	object V264;
	object V265;
	object V266;
	check_arg(4);
	V263=(base[0]);
	V264=(base[1]);
	V265=(base[2]);
	V266=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V267;
	object V268;
	object V269;
	object V270;
	object V271;
	{object V273= V266;
	if((V273!= VV[129]))goto T628;
	base[4]= VV[116];
	base[5]= (VV[217]->s.s_gfdef);
	base[6]= make_cons((V263),Cnil);
	base[7]= make_cons((V263),Cnil);
	base[8]= VV[117];
	vs_top=(vs_base=base+4)+5;
	goto T627;
	goto T628;
T628:;
	if((V273!= VV[130]))goto T634;
	base[4]= VV[118];
	base[5]= (VV[218]->s.s_gfdef);
	base[6]= list(2,VV[119],(V263));
	base[7]= list(2,Ct,(V263));
	base[8]= VV[120];
	vs_top=(vs_base=base+4)+5;
	goto T627;
	goto T634;
T634:;
	if((V273!= VV[131]))goto T640;
	base[4]= VV[121];
	base[5]= (VV[219]->s.s_gfdef);
	base[6]= make_cons((V263),Cnil);
	base[7]= make_cons((V263),Cnil);
	base[8]= VV[122];
	vs_top=(vs_base=base+4)+5;
	goto T627;
	goto T640;
T640:;
	base[4]= VV[37];
	base[5]= VV[38];
	base[6]= VV[39];
	base[7]= VV[40];
	base[8]= V266;
	base[9]= VV[41];
	base[10]= VV[123];
	base[11]= VV[43];
	base[12]= VV[124];
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk193)();}
	goto T627;
T627:;
	if(vs_base>=vs_top){vs_top=sup;goto T655;}
	V267= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T656;}
	V268= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T657;}
	V269= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T658;}
	V270= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T659;}
	V271= vs_base[0];
	vs_top=sup;
	goto T660;
	goto T655;
T655:;
	V267= Cnil;
	goto T656;
T656:;
	V268= Cnil;
	goto T657;
T657:;
	V269= Cnil;
	goto T658;
T658:;
	V270= Cnil;
	goto T659;
T659:;
	V271= Cnil;
	goto T660;
T660:;
	{register object V274;
	base[4]= (V264);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk220)();
	vs_top=sup;
	V274= vs_base[0];
	base[4]= (V270);
	if(type_of(V274)==t_structure){
	goto T672;}
	goto T670;
	goto T672;
T672:;
	if(!(((V274)->str.str_def)==(VV[125]))){
	goto T670;}
	V275= STREF(object,(V274),4);
	goto T668;
	goto T670;
T670:;{object V277;
	V277= (VV[53]->s.s_dbind);
	base[6]= small_fixnum(14);
	base[7]= (V274);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk204)();
	vs_top=sup;
	V278= vs_base[0];
	if(!((V277)==(CMPcar(V278)))){
	goto T675;}}
	V275= CMPcar(((V274))->cc.cc_turbo[12]);
	goto T668;
	goto T675;
T675:;
	base[6]= VV[54];
	vs_top=(vs_base=base+6)+1;
	Lerror();
	vs_top=sup;
	V275= vs_base[0];
	goto T668;
T668:;
	base[5]= (V275)->v.v_self[fix((VV[126]->s.s_dbind))];
	base[6]= VV[127];
	base[7]= (VV[221]->s.s_gfdef);
	base[8]= VV[109];
	base[9]= (VV[222]->s.s_gfdef);
	vs_top=(vs_base=base+4)+6;
	(void) (*Lnk223)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T664;}
	{register object x= (V264),V279= (VV[128]->s.s_dbind);
	while(V279!=Cnil)
	if(equal(x,V279->c.c_car->c.c_car) &&V279->c.c_car != Cnil){
	goto T686;
	}else V279=V279->c.c_cdr;}
	base[4]= (VFUN_NARGS=1,(*(LnkLI224))((V274)));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T686;
T686:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T664;
T664:;
	base[4]=(VV[225]->s.s_gfdef);
	base[5]= (V274);
	base[7]=(VV[226]->s.s_gfdef);
	base[8]= (V267);
	base[9]= Cnil;
	base[10]= (V269);
	base[11]= (V270);
	base[13]= (V263);
	base[14]= (V265);
	vs_top=(vs_base=base+13)+2;
	{object _funobj = (V268);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[12]= vs_base[0];
	base[13]= (V271);
	base[14]= (V265);
	base[6]= simple_lispcall(base+7,7);
	lispcall(base+4,2);
	return;}}
	}
}
/*	local entry for function BOOTSTRAP-ACCESSOR-DEFINITIONS1	*/

static object LI24(V285,V286,V287,V288,V289)

object V285;object V286;object V287;object V288;object V289;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	base[0]= (V286);
	base[1]= (V285);
	{register object V290;
	object V291;
	V290= (V287);
	V291= CMPcar((V290));
	goto T703;
T703:;
	if(!(((V290))==Cnil)){
	goto T704;}
	goto T699;
	goto T704;
T704:;
	base[3]= (V291);
	vs_top=(vs_base=base+3)+1;
	L25(base);
	vs_top=sup;
	V290= CMPcdr((V290));
	V291= CMPcar((V290));
	goto T703;}
	goto T699;
T699:;
	{register object V292;
	object V293;
	V292= (V288);
	V293= CMPcar((V292));
	goto T719;
T719:;
	if(!(((V292))==Cnil)){
	goto T720;}
	goto T715;
	goto T720;
T720:;
	base[3]= (V293);
	vs_top=(vs_base=base+3)+1;
	L26(base);
	vs_top=sup;
	V292= CMPcdr((V292));
	V293= CMPcar((V292));
	goto T719;}
	goto T715;
T715:;
	{register object V294;
	object V295;
	V294= (V289);
	V295= CMPcar((V294));
	goto T734;
T734:;
	if(!(((V294))==Cnil)){
	goto T735;}
	{object V296 = Cnil;
	VMR12(V296)}
	goto T735;
T735:;
	base[3]= (V295);
	vs_top=(vs_base=base+3)+1;
	L27(base);
	vs_top=sup;
	V294= CMPcdr((V294));
	V295= CMPcar((V294));
	goto T734;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-CLASS-PREDICATES	*/

static object LI28(V298)

object V298;
{	 VMB13 VMS13 VMV13
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[114],(V298));
	{register object V299;
	register object V300;
	V299= (VV[36]->s.s_dbind);
	V300= CMPcar((V299));
	goto T749;
T749:;
	if(!(((V299))==Cnil)){
	goto T750;}
	{object V301 = Cnil;
	bds_unwind1;
	VMR13(V301)}
	goto T750;
T750:;
	{register object V302;
	register object V303;
	V302= (*(LnkLI191))((V300));
	V303= (VFUN_NARGS=1,(*(LnkLI25))((V302)));
	{register object V304;
	register object V305;
	V304= (V302);
	base[5]= (V303);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V306= vs_base[0];
	V305= (*(LnkLI227))((V303),V306);
	V307= ({object _tmp=get(VV[229],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[229])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[229])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V308 = V307,
	(type_of(V308) == t_sfun ?(*((V308)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V308)==t_vfun) ?
	(*((V308)->sfn.sfn_self)):
	(fcall.fun=(V308),fcalln))((V305),(V304))));}}
	V299= CMPcdr((V299));
	V300= CMPcar((V299));
	goto T749;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-BUILT-IN-CLASSES	*/

static object LI29()

{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{register object V309;
	object V310;
	V309= (VV[132]->s.s_dbind);
	V310= CMPcar((V309));
	goto T771;
T771:;
	if(!(((V309))==Cnil)){
	goto T772;}
	goto T767;
	goto T772;
T772:;
	{register object V311;
	register object V312;
	V311= CMPcadr((V310));
	V312= CMPcar((V311));
	goto T780;
T780:;
	if(!(((V311))==Cnil)){
	goto T781;}
	goto T776;
	goto T781;
T781:;
	if(((V312))==(Ct)){
	goto T785;}
	{register object x= (V312),V313= (VV[132]->s.s_dbind);
	while(V313!=Cnil)
	if(EQ(x,V313->c.c_car->c.c_car) &&V313->c.c_car != Cnil){
	goto T785;
	}else V313=V313->c.c_cdr;}
	base[3]= VV[133];
	base[4]= CMPcar((V310));
	base[5]= (V312);
	base[6]= (V312);
	vs_top=(vs_base=base+3)+4;
	Lerror();
	vs_top=sup;
	goto T785;
T785:;
	V311= CMPcdr((V311));
	V312= CMPcar((V311));
	goto T780;}
	goto T776;
T776:;
	V309= CMPcdr((V309));
	V310= CMPcar((V309));
	goto T771;}
	goto T767;
T767:;
	{object V314;
	object V315;
	V314= (VFUN_NARGS=1,(*(LnkLI25))(VV[31]));
	base[2]= (V314);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V315= vs_base[0];
	{register object V316;
	object V317;
	V316= (VV[132]->s.s_dbind);
	V317= CMPcar((V316));
	goto T811;
T811:;
	if(!(((V316))==Cnil)){
	goto T812;}
	goto T804;
	goto T812;
T812:;
	{object V318;
	V318= (VFUN_NARGS=1,(*(LnkLI21))((V315)));
	{object V319;
	V319= CMPcar((V317));
	V321= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V322 = V321,
	(type_of(V322) == t_sfun ?(*((V322)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V322)==t_vfun) ?
	(*((V322)->sfn.sfn_self)):
	(fcall.fun=(V322),fcalln))(V318,(V319))));}}
	V316= CMPcdr((V316));
	V317= CMPcar((V316));
	goto T811;}}
	goto T804;
T804:;
	{object V323;
	base[0]= (VFUN_NARGS=1,(*(LnkLI25))(VV[35]));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V323= vs_base[0];
	{register object V324;
	object V325;
	V324= (VV[132]->s.s_dbind);
	V325= CMPcar((V324));
	goto T831;
T831:;
	if(!(((V324))==Cnil)){
	goto T832;}
	goto T825;
	goto T832;
T832:;
	{object V326;
	object V327;
	object V328;
	object V329;
	register object V330;
	register object V331;
	V326= Cnil;
	V327= Cnil;
	V328= Cnil;
	V329= Cnil;
	V330= Cnil;
	V331= Cnil;
	V331= (V325);
	V330= CMPcar((V331));
	V331= CMPcdr((V331));
	V329= CMPcar((V331));
	V331= CMPcdr((V331));
	V328= CMPcar((V331));
	V331= CMPcdr((V331));
	V327= CMPcar((V331));
	V331= CMPcdr((V331));
	V326= CMPcar((V331));
	{object V332;
	register object V333;
	V332= (VFUN_NARGS=1,(*(LnkLI25))((V330)));
	V333= (VFUN_NARGS=2,(*(LnkLI18))(small_fixnum(0),(V332)));
	base[3]= (*(LnkLI231))((V330));
	base[4]= (V332);
	vs_top=(vs_base=base+3)+2;
	Lset();
	vs_top=sup;
	base[3]= (*(LnkLI232))((V330));
	base[4]= (V333);
	vs_top=(vs_base=base+3)+2;
	Lset();
	vs_top=sup;
	(void)(((V333))->v.v_self[9]= (Cnil));
	(void)(((V333))->v.v_self[10]= (Cnil));
	V334= make_cons((V330),(V327));
	(void)((VFUN_NARGS=10,(*(LnkLI203))(VV[31],(V332),(V330),(V323),Cnil,(V329),(V328),/* INLINE-ARGS */V334,(V333),(V326))));}}
	V324= CMPcdr((V324));
	V325= CMPcar((V324));
	goto T831;}}
	goto T825;
T825:;
	{register object V335;
	object V336;
	V335= (VV[132]->s.s_dbind);
	V336= CMPcar((V335));
	goto T877;
T877:;
	if(!(((V335))==Cnil)){
	goto T878;}
	{object V337 = Cnil;
	VMR14(V337)}
	goto T878;
T878:;
	{object V338;
	object V339;
	V338= CMPcar((V336));
	V339= (VFUN_NARGS=1,(*(LnkLI25))((V338)));
	{object V341;
	base[4]= (V339);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk228)(Lclptr228);
	vs_top=sup;
	V342= vs_base[0];
	V341= (*(LnkLI227))((V339),V342);
	V343= ({object _tmp=get(VV[229],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[229])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[229])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V344 = V343,
	(type_of(V344) == t_sfun ?(*((V344)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V344)==t_vfun) ?
	(*((V344)->sfn.sfn_self)):
	(fcall.fun=(V344),fcalln))((V341),V338)));}}
	V335= CMPcdr((V335));
	V336= CMPcar((V335));
	goto T877;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WRAPPER-FOR-STRUCTURE	*/

static object LI30(V346)

object V346;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{register object V347;
	if(type_of((V346))==t_structure){
	goto T895;}
	V347= Cnil;
	goto T894;
	goto T895;
T895:;
	V347= ((V346))->str.str_def->str.str_self[0];
	goto T894;
T894:;
	if(!(type_of((V347))==t_symbol)){
	goto T897;}
	if(!(((V347))==(VV[1]))){
	goto T901;}
	{object V348 = STREF(object,(V346),0);
	VMR15(V348)}
	goto T901;
T901:;
	if(!(((V347))==((VV[134]->s.s_dbind)))){
	goto T904;}
	{object V349 = (VV[135]->s.s_dbind);
	VMR15(V349)}
	goto T904;
T904:;
	if(!(((V347))==((VV[136]->s.s_dbind)))){
	goto T907;}
	{object V350 = (VV[137]->s.s_dbind);
	VMR15(V350)}
	goto T907;
T907:;
	(VV[136]->s.s_dbind)= (VV[134]->s.s_dbind);
	(VV[137]->s.s_dbind)= (VV[135]->s.s_dbind);
	goto T897;
T897:;
	{object V351;
	object V352;
	object V353;
	V351= (VFUN_NARGS=1,(*(LnkLI234))((V347)));{object V354;
	V354= CMPcar((V351));
	if(V354==Cnil)goto T914;
	V352= V354;
	goto T913;
	goto T914;
T914:;}
	V352= (VFUN_NARGS=2,(*(LnkLI235))((V347),(V351)));
	goto T913;
T913:;
	if(((V352))==Cnil){
	goto T918;}
	base[3]= (V352);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V353= vs_base[0];
	goto T916;
	goto T918;
T918:;
	V353= (VV[46]->s.s_dbind);
	goto T916;
T916:;
	if(!(type_of((V347))==t_symbol)){
	goto T921;}
	(VV[134]->s.s_dbind)= (V347);
	(VV[135]->s.s_dbind)= (V353);
	goto T921;
T921:;
	{object V355 = (V353);
	VMR15(V355)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BUILT-IN-OR-STRUCTURE-WRAPPER1	*/

static object LI31(V357)

object V357;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{object V358;{object V359;
	V359= (*(LnkLI236))((V357));
	if(V359==Cnil)goto T928;
	V358= V359;
	goto T927;
	goto T928;
T928:;}
	V358= (VV[46]->s.s_dbind);
	goto T927;
T927:;{object V360;
	if(((V358))==((VV[46]->s.s_dbind))){
	goto T932;}
	V360= Cnil;
	goto T931;
	goto T932;
T932:;
	if(type_of((V357))==t_structure){
	goto T934;}
	V360= Cnil;
	goto T931;
	goto T934;
T934:;
	{object V361;
	object V362;
	base[2]= (V357);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V361= vs_base[0];
	V362= (VFUN_NARGS=2,(*(LnkLI25))((V361),Cnil));
	if((V362)==Cnil){
	V360= Cnil;
	goto T931;}
	base[2]= (V362);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk230)(Lclptr230);
	vs_top=sup;
	V360= vs_base[0];}
	goto T931;
T931:;
	if(V360==Cnil)goto T930;
	{object V363 = V360;
	VMR16(V363)}
	goto T930;
T930:;}
	{object V364 = (V358);
	VMR16(V364)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLASS-OF	*/

static object LI32(V366)

register object V366;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if(type_of(V366)==t_structure){
	goto T944;}
	goto T942;
	goto T944;
T944:;
	if(!(((V366)->str.str_def)==(VV[138]))){
	goto T942;}
	V367= STREF(object,(V366),0);
	goto T940;
	goto T942;
T942:;{object V369;
	V369= (VV[53]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V366);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk204)();
	vs_top=sup;
	V370= vs_base[0];
	if(!((V369)==(CMPcar(V370)))){
	goto T947;}}
	V367= CMPcar(((V366))->cc.cc_turbo[13]);
	goto T940;
	goto T947;
T947:;
	if(!(type_of((V366))==t_structure)){
	goto T953;}
	V367= (*(LnkLI237))((V366));
	goto T940;
	goto T953;
T953:;
	if(!(type_of((V366))==t_symbol)){
	goto T956;}
	if(((V366))==Cnil){
	goto T959;}
	V367= (VV[139]->s.s_dbind);
	goto T940;
	goto T959;
T959:;
	V367= (VV[140]->s.s_dbind);
	goto T940;
	goto T956;
T956:;
	V367= (*(LnkLI236))((V366));
	goto T940;
T940:;
	{object V371 = (V367)->v.v_self[11];
	VMR17(V371)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WRAPPER-OF	*/

static object LI33(V373)

register object V373;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	if(type_of(V373)==t_structure){
	goto T964;}
	goto T962;
	goto T964;
T964:;
	if(!(((V373)->str.str_def)==(VV[141]))){
	goto T962;}
	{object V375 = STREF(object,(V373),0);
	VMR18(V375)}
	goto T962;
T962:;{object V376;
	V376= (VV[53]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V373);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk204)();
	vs_top=sup;
	V377= vs_base[0];
	if(!((V376)==(CMPcar(V377)))){
	goto T967;}}
	{object V378 = CMPcar(((V373))->cc.cc_turbo[13]);
	VMR18(V378)}
	goto T967;
T967:;
	if(!(type_of((V373))==t_structure)){
	goto T973;}
	{object V379 = (*(LnkLI237))((V373));
	VMR18(V379)}
	goto T973;
T973:;
	if(!(type_of((V373))==t_symbol)){
	goto T976;}
	if(((V373))==Cnil){
	goto T979;}
	{object V380 = (VV[139]->s.s_dbind);
	VMR18(V380)}
	goto T979;
T979:;
	{object V381 = (VV[140]->s.s_dbind);
	VMR18(V381)}
	goto T976;
T976:;
	{object V382 = (*(LnkLI236))((V373));
	VMR18(V382)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for STRUCTURE-WRAPPER	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V383;
	check_arg(1);
	V383=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(type_of((V383))==t_structure){
	goto T983;}
	V384= Cnil;
	goto T982;
	goto T983;
T983:;
	V384= ((V383))->str.str_def->str.str_self[0];
	goto T982;
T982:;
	base[1]= (VFUN_NARGS=1,(*(LnkLI25))(V384));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk230)(Lclptr230);
	return;
	}
}
/*	local entry for function EVAL-FORM	*/

static object LI36(V386)

object V386;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	base[0]=MMcons((V386),Cnil);
	{object V387 = 
	make_cclosure_new(LC47,Cnil,base[0],Cdata);
	VMR20(V387)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SLOT-INITARGS-FROM-STRUCTURE-SLOTD	*/

static object LI37(V389)

register object V389;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	base[0]= VV[38];
	base[1]= (*(LnkLI238))((V389));
	base[2]= VV[142];
	base[3]= (*(LnkLI239))((V389));
	base[4]= VV[143];
	base[5]= (*(LnkLI240))((V389));
	base[6]= VV[144];
	base[7]= (*(LnkLI241))((V389));
	base[8]= VV[100];{object V390;
	V390= (*(LnkLI242))((V389));
	if(V390==Cnil)goto T995;
	base[9]= V390;
	goto T994;
	goto T995;
T995:;}
	base[9]= Ct;
	goto T994;
T994:;
	base[10]= VV[90];
	base[12]= (V389);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk243)();
	vs_top=sup;
	base[11]= vs_base[0];
	base[12]= VV[92];
	base[14]= (V389);
	vs_top=(vs_base=base+14)+1;
	(void) (*Lnk243)();
	vs_top=sup;
	V391= vs_base[0];
	base[13]= (*(LnkLI244))(V391);
	vs_top=(vs_base=base+0)+14;
	Llist();
	vs_top=sup;
	{object V392 = vs_base[0];
	VMR21(V392)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for FIND-STRUCTURE-CLASS	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	bds_check;
	{register object V393;
	check_arg(1);
	V393=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((*(LnkLI245))((V393)))==Cnil){
	goto T1005;}
	if(((VV[145]->s.s_dbind))==((V393))){
	goto T1008;}
	bds_bind(VV[145],(V393));
	base[2]= (V393);
	base[3]= VV[146];
	base[4]= VV[32];
	base[5]= VV[38];
	base[6]= (V393);
	base[7]= VV[147];
	if(((*(LnkLI246))((V393)))==Cnil){
	goto T1018;}
	V394= (*(LnkLI246))((V393));
	base[8]= make_cons(/* INLINE-ARGS */V394,Cnil);
	goto T1016;
	goto T1018;
T1018:;
	base[8]= Cnil;
	goto T1016;
T1016:;
	base[9]= VV[148];
	V397= (*(LnkLI247))((V393));
	{object V395;
	object V396= /* INLINE-ARGS */V397;
	if(V396==Cnil){
	base[10]= Cnil;
	goto T1021;}
	base[11]=V395=MMcons(Cnil,Cnil);
	goto T1022;
T1022:;
	(V395->c.c_car)= (*(LnkLI248))((V396->c.c_car));
	if((V396=MMcdr(V396))==Cnil){
	base[10]= base[11];
	goto T1021;}
	V395=MMcdr(V395)=MMcons(Cnil,Cnil);
	goto T1022;}
	goto T1021;
T1021:;
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk249)();
	bds_unwind1;
	return;
	goto T1008;
T1008:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T1005;
T1005:;
	base[1]= VV[149];
	base[2]= (V393);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
/*	local entry for function BUILT-IN-WRAPPER-OF	*/

static object LI39(V399)

register object V399;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;{object V400;
	if(type_of((V399))==t_symbol){
	goto T1028;}
	V400= Cnil;
	goto T1027;
	goto T1028;
T1028:;{object V401;
	if(((V399))==Cnil){
	goto T1032;}
	V401= Cnil;
	goto T1031;
	goto T1032;
T1032:;
	V401= (VV[140]->s.s_dbind);
	goto T1031;
T1031:;
	if(V401==Cnil)goto T1030;
	V400= V401;
	goto T1027;
	goto T1030;
T1030:;}
	V400= (VV[139]->s.s_dbind);
	goto T1027;
T1027:;
	if(V400==Cnil)goto T1026;
	{object V402 = V400;
	VMR23(V402)}
	goto T1026;
T1026:;}{object V403;
	if(type_of((V399))==t_character){
	goto T1036;}
	V403= Cnil;
	goto T1035;
	goto T1036;
T1036:;
	V403= (VV[150]->s.s_dbind);
	goto T1035;
T1035:;
	if(V403==Cnil)goto T1034;
	{object V404 = V403;
	VMR23(V404)}
	goto T1034;
T1034:;}{object V405;
	if(type_of((V399))==t_array||
type_of((V399))==t_vector||
type_of((V399))==t_string||
type_of((V399))==t_bitvector){
	goto T1040;}
	V405= Cnil;
	goto T1039;
	goto T1040;
T1040:;{object V406;
	if(type_of((V399))==t_vector||
type_of((V399))==t_string||
type_of((V399))==t_bitvector){
	goto T1044;}
	V406= Cnil;
	goto T1043;
	goto T1044;
T1044:;{object V407;
	if((type_of((V399))==t_bitvector)){
	goto T1048;}
	V407= Cnil;
	goto T1047;
	goto T1048;
T1048:;
	V407= (VV[153]->s.s_dbind);
	goto T1047;
T1047:;
	if(V407==Cnil)goto T1046;
	V406= V407;
	goto T1043;
	goto T1046;
T1046:;}{object V408;
	if(type_of((V399))==t_string){
	goto T1052;}
	V408= Cnil;
	goto T1051;
	goto T1052;
T1052:;
	V408= (VV[154]->s.s_dbind);
	goto T1051;
T1051:;
	if(V408==Cnil)goto T1050;
	V406= V408;
	goto T1043;
	goto T1050;
T1050:;}
	V406= (VV[152]->s.s_dbind);
	goto T1043;
T1043:;
	if(V406==Cnil)goto T1042;
	V405= V406;
	goto T1039;
	goto T1042;
T1042:;}
	V405= (VV[151]->s.s_dbind);
	goto T1039;
T1039:;
	if(V405==Cnil)goto T1038;
	{object V409 = V405;
	VMR23(V409)}
	goto T1038;
T1038:;}{object V410;
	if(!(type_of(V399)==t_cons||(V399)==Cnil)){
	goto T1058;}
	goto T1056;
	goto T1058;
T1058:;
	if(type_of(V399)==t_vector||
type_of(V399)==t_string||
type_of(V399)==t_bitvector){
	goto T1056;}
	V410= Cnil;
	goto T1055;
	goto T1056;
T1056:;{object V412;
	if(type_of((V399))==t_vector||
type_of((V399))==t_string||
type_of((V399))==t_bitvector){
	goto T1062;}
	V412= Cnil;
	goto T1061;
	goto T1062;
T1062:;{object V413;
	if((type_of((V399))==t_bitvector)){
	goto T1066;}
	V413= Cnil;
	goto T1065;
	goto T1066;
T1066:;
	V413= (VV[153]->s.s_dbind);
	goto T1065;
T1065:;
	if(V413==Cnil)goto T1064;
	V412= V413;
	goto T1061;
	goto T1064;
T1064:;}{object V414;
	if(type_of((V399))==t_string){
	goto T1070;}
	V414= Cnil;
	goto T1069;
	goto T1070;
T1070:;
	V414= (VV[154]->s.s_dbind);
	goto T1069;
T1069:;
	if(V414==Cnil)goto T1068;
	V412= V414;
	goto T1061;
	goto T1068;
T1068:;}
	V412= (VV[152]->s.s_dbind);
	goto T1061;
T1061:;
	if(V412==Cnil)goto T1060;
	V410= V412;
	goto T1055;
	goto T1060;
T1060:;}{object V415;
	if(!(type_of(V399)==t_cons)){
	goto T1076;}
	goto T1074;
	goto T1076;
T1076:;
	if((V399)==Cnil){
	goto T1074;}
	V415= Cnil;
	goto T1073;
	goto T1074;
T1074:;{object V417;
	if(((V399))==Cnil){
	goto T1080;}
	V417= Cnil;
	goto T1079;
	goto T1080;
T1080:;
	V417= (VV[140]->s.s_dbind);
	goto T1079;
T1079:;
	if(V417==Cnil)goto T1078;
	V415= V417;
	goto T1073;
	goto T1078;
T1078:;}{object V418;
	if(type_of((V399))==t_cons){
	goto T1084;}
	V418= Cnil;
	goto T1083;
	goto T1084;
T1084:;
	V418= (VV[157]->s.s_dbind);
	goto T1083;
T1083:;
	if(V418==Cnil)goto T1082;
	V415= V418;
	goto T1073;
	goto T1082;
T1082:;}
	V415= (VV[156]->s.s_dbind);
	goto T1073;
T1073:;
	if(V415==Cnil)goto T1072;
	V410= V415;
	goto T1055;
	goto T1072;
T1072:;}
	V410= (VV[155]->s.s_dbind);
	goto T1055;
T1055:;
	if(V410==Cnil)goto T1054;
	{object V419 = V410;
	VMR23(V419)}
	goto T1054;
T1054:;}{object V420;
	if(type_of((V399))==t_fixnum||
type_of((V399))==t_bignum||
type_of((V399))==t_ratio||
type_of((V399))==t_shortfloat||
type_of((V399))==t_longfloat||
type_of((V399))==t_complex){
	goto T1088;}
	V420= Cnil;
	goto T1087;
	goto T1088;
T1088:;{object V421;
	base[0]= (V399);
	base[1]= VV[165];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk250)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1092;}
	V421= Cnil;
	goto T1091;
	goto T1092;
T1092:;{object V422;
	base[0]= (V399);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk251)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1098;}
	V422= Cnil;
	goto T1097;
	goto T1098;
T1098:;{object V423;
	if(type_of((V399))==t_ratio){
	goto T1103;}
	V423= Cnil;
	goto T1102;
	goto T1103;
T1103:;
	V423= (VV[161]->s.s_dbind);
	goto T1102;
T1102:;
	if(V423==Cnil)goto T1101;
	V422= V423;
	goto T1097;
	goto T1101;
T1101:;}{object V424;
	if(type_of((V399))==t_fixnum||type_of((V399))==t_bignum){
	goto T1107;}
	V424= Cnil;
	goto T1106;
	goto T1107;
T1107:;
	V424= (VV[162]->s.s_dbind);
	goto T1106;
T1106:;
	if(V424==Cnil)goto T1105;
	V422= V424;
	goto T1097;
	goto T1105;
T1105:;}
	V422= (VV[160]->s.s_dbind);
	goto T1097;
T1097:;
	if(V422==Cnil)goto T1096;
	V421= V422;
	goto T1091;
	goto T1096;
T1096:;}{object V425;
	if(type_of((V399))==t_shortfloat||type_of((V399))==t_longfloat){
	goto T1111;}
	V425= Cnil;
	goto T1110;
	goto T1111;
T1111:;
	V425= (VV[163]->s.s_dbind);
	goto T1110;
T1110:;
	if(V425==Cnil)goto T1109;
	V421= V425;
	goto T1091;
	goto T1109;
T1109:;}
	V421= (VV[159]->s.s_dbind);
	goto T1091;
T1091:;
	if(V421==Cnil)goto T1090;
	V420= V421;
	goto T1087;
	goto T1090;
T1090:;}{object V426;
	base[0]= (V399);
	vs_top=(vs_base=base+0)+1;
	Lcomplexp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1115;}
	V426= Cnil;
	goto T1114;
	goto T1115;
T1115:;
	V426= (VV[164]->s.s_dbind);
	goto T1114;
T1114:;
	if(V426==Cnil)goto T1113;
	V420= V426;
	goto T1087;
	goto T1113;
T1113:;}
	V420= (VV[158]->s.s_dbind);
	goto T1087;
T1087:;
	if(V420==Cnil)goto T1086;
	{object V427 = V420;
	VMR23(V427)}
	goto T1086;
T1086:;}
	{object V428 = (VV[46]->s.s_dbind);
	VMR23(V428)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-RETURNING-NIL	*/

static object LI40(V431,V432)

object V431;object V432;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{object V433 = Cnil;
	VMR24(V433)}
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-RETURNING-T	*/

static object LI41(V436,V437)

object V436;object V437;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{object V438 = Ct;
	VMR25(V438)}
	return Cnil;
}
/*	local entry for function MAKE-CLASS-PREDICATE	*/

static object LI42(V441,V442)

object V441;object V442;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{register object V443;
	object V444;
	base[2]= (V442);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk220)();
	vs_top=sup;
	V443= vs_base[0];
	if(!(((VV[166]->s.s_dbind))==(VV[167]))){
	goto T1122;}
	base[2]= (V443);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk252)(Lclptr252);
	vs_top=sup;
	V444= vs_base[0];
	goto T1120;
	goto T1122;
T1122:;
	if(type_of(V443)==t_structure){
	goto T1129;}
	goto T1127;
	goto T1129;
T1129:;
	if(!(((V443)->str.str_def)==(VV[168]))){
	goto T1127;}
	V445= STREF(object,(V443),4);
	goto T1125;
	goto T1127;
T1127:;{object V447;
	V447= (VV[53]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V443);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk204)();
	vs_top=sup;
	V448= vs_base[0];
	if(!((V447)==(CMPcar(V448)))){
	goto T1132;}}
	V445= CMPcar(((V443))->cc.cc_turbo[12]);
	goto T1125;
	goto T1132;
T1132:;
	base[2]= VV[54];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V445= vs_base[0];
	goto T1125;
T1125:;
	V444= (V445)->v.v_self[fix((VV[126]->s.s_dbind))];
	goto T1120;
T1120:;
	if(((V444))!=Cnil){
	goto T1138;}
	if(((V441))==((VV[169]->s.s_dbind))){
	goto T1141;}
	{object V449;
	object V450;
	object V451;
	V449= (VV[253]->s.s_gfdef);
	V450= list(2,VV[170],(V449));
	base[5]= VV[171];
	base[6]= Cnil;
	base[7]= make_cons(VV[65],Cnil);
	base[8]= make_cons((VV[169]->s.s_dbind),Cnil);
	base[9]= (V450);
	base[10]= VV[172];
	V451= simple_symlispcall(VV[226],base+5,6);
	V455= ({object _tmp=get(VV[254],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[254])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[254])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V456 = V455,
	(type_of(V456) == t_sfun ?(*((V456)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V456)==t_vfun) ?
	(*((V456)->sfn.sfn_self)):
	(fcall.fun=(V456),fcalln))(Cnil,V449,VV[173])));
	base[5]= (V443);
	base[6]= (V451);
	(void)simple_symlispcall(VV[225],base+5,2);}
	goto T1141;
T1141:;
	{object V457;
	object V458;
	object V459;
	V457= (VV[255]->s.s_gfdef);
	V458= list(2,VV[170],(V457));
	base[5]= VV[171];
	base[6]= Cnil;
	base[7]= make_cons(VV[65],Cnil);
	base[8]= make_cons((V441),Cnil);
	base[9]= (V458);
	base[10]= VV[174];
	V459= simple_symlispcall(VV[226],base+5,6);
	V463= ({object _tmp=get(VV[254],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[254])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[254])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	(void)((
	V464 = V463,
	(type_of(V464) == t_sfun ?(*((V464)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V464)==t_vfun) ?
	(*((V464)->sfn.sfn_self)):
	(fcall.fun=(V464),fcalln))(Ct,V457,VV[173])));
	base[5]= (V443);
	base[6]= (V459);
	(void)simple_symlispcall(VV[225],base+5,2);}
	goto T1138;
T1138:;
	{object V465 = (V443);
	VMR26(V465)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for G5978	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[175];
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for (FAST-METHOD NO-APPLICABLE-METHOD (T))	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	{object V466;
	object V467;
	register object V468;
	object V469;
	check_arg(4);
	V466=(base[0]);
	V467=(base[1]);
	V468=(base[2]);
	V469=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= VV[176];
	base[5]= VV[177];
	base[6]= (V468);
	base[7]= V469;
	vs_top=(vs_base=base+4)+4;
	Lcerror();
	vs_top=sup;
	base[4]= (V468);
	{object V472;
	V472= V469;
	 vs_top=base+5;
	 while(V472!=Cnil)
	 {vs_push((V472)->c.c_car);V472=(V472)->c.c_cdr;}
	vs_base=base+5;}
	{object _funobj = base[4];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	local function CLOSURE	*/

static void LC47(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	check_arg(0);
	vs_top=sup;
	base[0]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+0)+1;
	Leval();
	return;
}
/*	local function DO-BOUNDP-DEFINITION	*/

static void L27(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	{object V473;
	check_arg(1);
	V473=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[1];
	base[2]= (V473);
	base[3]= base0[0];
	base[4]= VV[131];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk256)();
	return;
	}
}
/*	local function DO-WRITER-DEFINITION	*/

static void L26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	{object V474;
	check_arg(1);
	V474=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[1];
	base[2]= (V474);
	base[3]= base0[0];
	base[4]= VV[130];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk256)();
	return;
	}
}
/*	local function DO-READER-DEFINITION	*/

static void L25(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	{object V475;
	check_arg(1);
	V475=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[1];
	base[2]= (V475);
	base[3]= base0[0];
	base[4]= VV[129];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk256)();
	return;
	}
}
/*	local function SET-VAL	*/

static void L17(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	{object V476;
	object V477;
	check_arg(2);
	V476=(base[0]);
	V477=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI207))(base0[1],base0[2],(V476),(V477));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function GET-VAL	*/

static void L16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{object V478;
	check_arg(1);
	V478=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[0];
	base[2]= (V478);
	vs_top=(vs_base=base+1)+2;
	Lgetf();
	return;
	}
}
/*	local function SET-SLOT	*/

static void L10(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	{object V479;
	object V480;
	check_arg(2);
	V479=(base[0]);
	V480=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI207))(base0[0],base0[1],(V479),(V480));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLASSES	*/

static void L9(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{object V481;
	check_arg(1);
	V481=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]=VV[25]->s.s_gfdef;
	{object V482;
	object V483= (V481);
	if(V483==Cnil){
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	base[1]=V482=MMcons(Cnil,Cnil);
	goto T1194;
T1194:;
	base[3]= (V483->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk25)();
	vs_top=sup;
	(V482->c.c_car)= vs_base[0];
	if((V483=MMcdr(V483))==Cnil){
	vs_top=(vs_base=base+1)+1;
	return;}
	V482=MMcdr(V482)=MMcons(Cnil,Cnil);
	goto T1194;}
	}
}
/*	local function SET-SLOT	*/

static void L7(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	{object V484;
	object V485;
	check_arg(2);
	V484=(base[0]);
	V485=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI207))(VV[51],base0[3],(V484),(V485));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC46(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	{object V486;
	check_arg(1);
	V486=(base[0]);
	vs_top=sup;
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC45(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	{object V487;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V487=(base[0]);
	vs_top=sup;
	base[1]= VV[10];
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
static void LnkT25(){ call_or_link(VV[25],(void **)(void *)&Lnk25);} /* FIND-CLASS */
static void LnkT256(){ call_or_link(VV[256],(void **)(void *)&Lnk256);} /* BOOTSTRAP-ACCESSOR-DEFINITION */
static void LnkT252(ptr) object *ptr;{ call_or_link_closure(VV[252],(void **)(void *)&Lnk252,(void **)(void *)&Lclptr252);} /* GENERIC-FUNCTION-METHODS */
static void LnkT251(){ call_or_link(VV[251],(void **)(void *)&Lnk251);} /* RATIONALP */
static void LnkT250(){ call_or_link(VV[250],(void **)(void *)&Lnk250);} /* TYPEP */
static void LnkT249(){ call_or_link(VV[249],(void **)(void *)&Lnk249);} /* ENSURE-CLASS */
static object  LnkTLI248(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[248],(void **)(void *)&LnkLI248,1,first,ap);va_end(ap);return V1;} /* SLOT-INITARGS-FROM-STRUCTURE-SLOTD */
static object  LnkTLI247(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[247],(void **)(void *)&LnkLI247,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-TYPE-SLOT-DESCRIPTION-LIST */
static object  LnkTLI246(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[246],(void **)(void *)&LnkLI246,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-TYPE-INCLUDED-TYPE-NAME */
static object  LnkTLI245(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[245],(void **)(void *)&LnkLI245,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-TYPE-P */
static object  LnkTLI244(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[244],(void **)(void *)&LnkLI244,1,first,ap);va_end(ap);return V1;} /* EVAL-FORM */
static void LnkT243(){ call_or_link(VV[243],(void **)(void *)&Lnk243);} /* STRUCTURE-SLOTD-INIT-FORM */
static object  LnkTLI242(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[242],(void **)(void *)&LnkLI242,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SLOTD-TYPE */
static object  LnkTLI241(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[241],(void **)(void *)&LnkLI241,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SLOTD-WRITER-FUNCTION */
static object  LnkTLI240(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[240],(void **)(void *)&LnkLI240,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SLOTD-READER-FUNCTION */
static object  LnkTLI239(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[239],(void **)(void *)&LnkLI239,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SLOTD-ACCESSOR-SYMBOL */
static object  LnkTLI238(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[238],(void **)(void *)&LnkLI238,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SLOTD-NAME */
static object  LnkTLI237(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[237],(void **)(void *)&LnkLI237,1,first,ap);va_end(ap);return V1;} /* WRAPPER-FOR-STRUCTURE */
static object  LnkTLI236(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[236],(void **)(void *)&LnkLI236,1,first,ap);va_end(ap);return V1;} /* BUILT-IN-WRAPPER-OF */
static object  LnkTLI235(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[235],(void **)(void *)&LnkLI235,first,ap);va_end(ap);return V1;} /* FIND-CLASS-FROM-CELL */
static object  LnkTLI234(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[234],(void **)(void *)&LnkLI234,first,ap);va_end(ap);return V1;} /* FIND-CLASS-CELL */
static object  LnkTLI233(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[233],(void **)(void *)&LnkLI233,1,first,ap);va_end(ap);return V1;} /* %STRUCTURE-NAME */
static object  LnkTLI232(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[232],(void **)(void *)&LnkLI232,1,first,ap);va_end(ap);return V1;} /* GET-BUILT-IN-WRAPPER-SYMBOL */
static object  LnkTLI231(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[231],(void **)(void *)&LnkLI231,1,first,ap);va_end(ap);return V1;} /* GET-BUILT-IN-CLASS-SYMBOL */
static void LnkT230(ptr) object *ptr;{ call_or_link_closure(VV[230],(void **)(void *)&Lnk230,(void **)(void *)&Lclptr230);} /* CLASS-WRAPPER */
static void LnkT228(ptr) object *ptr;{ call_or_link_closure(VV[228],(void **)(void *)&Lnk228,(void **)(void *)&Lclptr228);} /* CLASS-PREDICATE-NAME */
static object  LnkTLI227(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[227],(void **)(void *)&LnkLI227,2,first,ap);va_end(ap);return V1;} /* MAKE-CLASS-PREDICATE */
static object  LnkTLI224(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[224],(void **)(void *)&LnkLI224,first,ap);va_end(ap);return V1;} /* UPDATE-DFUN */
static void LnkT223(){ call_or_link(VV[223],(void **)(void *)&Lnk223);} /* FIND */
static void LnkT220(){ call_or_link(VV[220],(void **)(void *)&Lnk220);} /* ENSURE-GENERIC-FUNCTION */
static object  LnkTLI216(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[216],(void **)(void *)&LnkLI216,1,first,ap);va_end(ap);return V1;} /* SLOT-BOUNDP-SYMBOL */
static object  LnkTLI215(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[215],(void **)(void *)&LnkLI215,1,first,ap);va_end(ap);return V1;} /* SLOT-WRITER-SYMBOL */
static object  LnkTLI214(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[214],(void **)(void *)&LnkLI214,1,first,ap);va_end(ap);return V1;} /* SLOT-READER-SYMBOL */
static object  LnkTLI213(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[213],(void **)(void *)&LnkLI213,5,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-ACCESSOR-DEFINITIONS1 */
static void LnkT212(){ call_or_link(VV[212],(void **)(void *)&Lnk212);} /* MAKE-OPTIMIZED-STD-BOUNDP-METHOD-FUNCTION */
static void LnkT211(){ call_or_link(VV[211],(void **)(void *)&Lnk211);} /* MAKE-OPTIMIZED-STD-WRITER-METHOD-FUNCTION */
static void LnkT210(){ call_or_link(VV[210],(void **)(void *)&Lnk210);} /* MAKE-OPTIMIZED-STD-READER-METHOD-FUNCTION */
static object  LnkTLI209(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[209],(void **)(void *)&LnkLI209,6,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-MAKE-SLOT-DEFINITION */
static void LnkT208(){ call_or_link(VV[208],(void **)(void *)&Lnk208);} /* MAKE-CLASS-PREDICATE-NAME */
static object  LnkTLI207(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[207],(void **)(void *)&LnkLI207,4,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-SET-SLOT */
static void LnkT206(){ call_or_link(VV[206],(void **)(void *)&Lnk206);} /* LOAD-TRUENAME */
static object  LnkTLI205(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[205],(void **)(void *)&LnkLI205,2,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-SLOT-INDEX */
static void LnkT204(){ call_or_link(VV[204],(void **)(void *)&Lnk204);} /* CCLOSURE-ENV-NTHCDR */
static object  LnkTLI203(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[203],(void **)(void *)&LnkLI203,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-INITIALIZE-CLASS */
static object  LnkTLI202(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[202],(void **)(void *)&LnkLI202,5,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-MAKE-SLOT-DEFINITIONS */
static object  LnkTLI201(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[201],(void **)(void *)&LnkLI201,first,ap);va_end(ap);return V1;} /* ALLOCATE-FUNCALLABLE-INSTANCE */
static void LnkT200(){ call_or_link(VV[200],(void **)(void *)&Lnk200);} /* CANONICAL-SLOT-NAME */
static void LnkT199(){ call_or_link(VV[199],(void **)(void *)&Lnk199);} /* EARLY-COLLECT-INHERITANCE */
static object  LnkTLI198(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[198],(void **)(void *)&LnkLI198,1,first,ap);va_end(ap);return V1;} /* ECD-OTHER-INITARGS */
static object  LnkTLI197(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[197],(void **)(void *)&LnkLI197,1,first,ap);va_end(ap);return V1;} /* ECD-CANONICAL-SLOTS */
static object  LnkTLI196(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[196],(void **)(void *)&LnkLI196,1,first,ap);va_end(ap);return V1;} /* ECD-SUPERCLASS-NAMES */
static object  LnkTLI195(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[195],(void **)(void *)&LnkLI195,1,first,ap);va_end(ap);return V1;} /* ECD-SOURCE */
static object  LnkTLI194(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[194],(void **)(void *)&LnkLI194,1,first,ap);va_end(ap);return V1;} /* INFORM-TYPE-SYSTEM-ABOUT-STD-CLASS */
static object  LnkTLI25(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[25],(void **)(void *)&LnkLI25,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static void LnkT193(){ call_or_link(VV[193],(void **)(void *)&Lnk193);} /* ERROR */
static object  LnkTLI192(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[192],(void **)(void *)&LnkLI192,1,first,ap);va_end(ap);return V1;} /* ECD-METACLASS */
static object  LnkTLI191(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[191],(void **)(void *)&LnkLI191,1,first,ap);va_end(ap);return V1;} /* ECD-CLASS-NAME */
static object  LnkTLI21(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[21],(void **)(void *)&LnkLI21,first,ap);va_end(ap);return V1;} /* ALLOCATE-STANDARD-INSTANCE */
static object  LnkTLI19(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[19],(void **)(void *)&LnkLI19,257,first,ap);va_end(ap);return V1;} /* EARLY-CLASS-SIZE */
static object  LnkTLI18(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[18],(void **)(void *)&LnkLI18,first,ap);va_end(ap);return V1;} /* MAKE-WRAPPER */
static object  LnkTLI190(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[190],(void **)(void *)&LnkLI190,2,first,ap);va_end(ap);return V1;} /* DO-SATISFIES-DEFTYPE */
static object  LnkTLI187(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[187],(void **)(void *)&LnkLI187,first,ap);va_end(ap);return V1;} /* MAKE-TYPE-PREDICATE-NAME */
static void LnkT186(ptr) object *ptr;{ call_or_link_closure(VV[186],(void **)(void *)&Lnk186,(void **)(void *)&Lclptr186);} /* CLASS-NAME */
static void LnkT184(ptr) object *ptr;{ call_or_link_closure(VV[184],(void **)(void *)&Lnk184,(void **)(void *)&Lclptr184);} /* CLASS-SLOTS */
static void LnkT183(ptr) object *ptr;{ call_or_link_closure(VV[183],(void **)(void *)&Lnk183,(void **)(void *)&Lclptr183);} /* CLASS-DEFSTRUCT-CONSTRUCTOR */
static object  LnkTLI182(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[182],(void **)(void *)&LnkLI182,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static object  LnkTLI181(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[181],(void **)(void *)&LnkLI181,2,first,ap);va_end(ap);return V1;} /* SET-FUNCALLABLE-INSTANCE-FUNCTION */
static object  LnkTLI180(){return call_proc0(VV[180],(void **)(void *)&LnkLI180);} /* ALLOCATE-FUNCALLABLE-INSTANCE-1 */
static void LnkT179(){ call_or_link(VV[179],(void **)(void *)&Lnk179);} /* MAKE-ARRAY */
static object  LnkTLI178(){return call_proc0(VV[178],(void **)(void *)&LnkLI178);} /* %%ALLOCATE-INSTANCE--CLASS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

