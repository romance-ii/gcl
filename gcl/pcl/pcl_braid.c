
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
	V5= (*(LnkLI169))();
	V6 = (V5);
	V7 = (V2);
	V8= Ct;
	STSET(object,V6,0, V7);
	(void)(V7);
	V9 = (V5);
	if(((V4))==Cnil){
	goto T9;}
	base[0]= (V3);
	vs_top=(vs_base=base+0)+1;
	Lcopy_seq();
	vs_top=sup;
	V10= vs_base[0];
	goto T7;
	goto T9;
T9:;
	base[0]= ((V2))->v.v_self[12];
	base[1]= VV[2];
	base[2]= (VV[0]->s.s_dbind);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk170)();
	vs_top=sup;
	V10= vs_base[0];
	goto T7;
T7:;
	V11= Ct;
	STSET(object,V9,4, V10);
	(void)(V10);
	{object V12 = (V5);
	VMR1(V12)}}
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
	{object V13=base[0]->c.c_cdr;
	if(endp(V13))invalid_macro_call();
	base[2]= (V13->c.c_car);
	V13=V13->c.c_cdr;
	if(endp(V13)){
	base[3]= Cnil;
	} else {
	base[3]= (V13->c.c_car);
	V13=V13->c.c_cdr;}
	if(endp(V13)){
	base[4]= Cnil;
	} else {
	base[4]= (V13->c.c_car);
	V13=V13->c.c_cdr;}
	if(!endp(V13))invalid_macro_call();}
	V14= list(2,VV[4],list(2,VV[5],base[2]));
	V15= make_cons(/* INLINE-ARGS */V14,Cnil);
	if((base[3])==Cnil){
	goto T19;}
	V16= list(4,VV[6],base[3],list(2,VV[7],base[4]),VV[8]);
	goto T17;
	goto T19;
T19:;
	V16= VV[9];
	goto T17;
T17:;
	base[5]= list(3,VV[3],/* INLINE-ARGS */V15,V16);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function ALLOCATE-FUNCALLABLE-INSTANCE	*/

static object LI3(object V17,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB3 VMS3 VMV3
	{object V18;
	object V19;
	object V20;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V18= V17;
	narg = narg - 1;
	if (narg <= 0) goto T21;
	else {
	V19= first;}
	V20= Ct;
	--narg; goto T22;
	goto T21;
T21:;
	V19= Cnil;
	V20= Cnil;
	goto T22;
T22:;
	base[0]= (*(LnkLI171))();
	base[0]=MMcons(base[0],Cnil);
	V21 = (base[0]->c.c_car);
	V22= 
	make_cclosure_new(LC45,Cnil,base[0],Cdata);
	(void)((*(LnkLI172))(V21,V22));
	{object V23;
	V23= ((base[0]->c.c_car))->cc.cc_turbo[13];
	((V23))->c.c_car = V18;}
	{object V25;
	object V26;
	V25= ((base[0]->c.c_car))->cc.cc_turbo[12];
	{object V27;
	V27= ((V18))->v.v_self[12];
	if(((V20))==Cnil){
	goto T35;}
	base[3]= (V19);
	vs_top=(vs_base=base+3)+1;
	Lcopy_seq();
	vs_top=sup;
	V26= vs_base[0];
	goto T32;
	goto T35;
T35:;
	base[3]= (V27);
	base[4]= VV[2];
	base[5]= (VV[0]->s.s_dbind);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk170)();
	vs_top=sup;
	V26= vs_base[0];}
	goto T32;
T32:;
	((V25))->c.c_car = (V26);}
	{object V28 = (base[0]->c.c_car);
	VMR3(V28)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function ALLOCATE-STRUCTURE-INSTANCE	*/

static object LI4(object V29,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB4 VMS4 VMV4
	{object V30;
	object V31;
	object V32;
	va_start(ap,first);
	if(narg <1) too_few_arguments();
	V30= V29;
	narg = narg - 1;
	if (narg <= 0) goto T42;
	else {
	V31= first;}
	V32= Ct;
	--narg; goto T43;
	goto T42;
T42:;
	V31= Cnil;
	V32= Cnil;
	goto T43;
T43:;
	{object V33;
	object V34;
	V33= ((V30))->v.v_self[11];
	base[2]= (V33);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk174)(Lclptr174);
	vs_top=sup;
	V34= vs_base[0];
	if(((V34))==Cnil){
	goto T49;}
	{object V35;
	register object V36;
	V35= (
	(type_of((V34)) == t_sfun ?(*(((V34))->sfn.sfn_self)):
	(fcall.argd=0,type_of((V34))==t_vfun) ?
	(*(((V34))->sfn.sfn_self)):
	(fcall.fun=((V34)),fcalln))());
	base[2]= (V33);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk175)(Lclptr175);
	vs_top=sup;
	V36= vs_base[0];
	if(((V32))==Cnil){
	goto T54;}
	{long V37;
	register long V38;
	V37= (long)length((V31));
	V38= 0;
	goto T60;
T60:;
	if(!((V38)>=(V37))){
	goto T61;}
	goto T54;
	goto T61;
T61:;
	{register object V39;
	{register object V40;
	V40= CMPcar((V36));
	V36= CMPcdr((V36));
	V39= (V40);}
	{register object V41;
	register object V42;
	register object V43;
	register object V44;
	V41= (V33);
	V42= (V35);
	V43= (V39);
	V44= ((V31))->v.v_self[V38];
	V45= ({object _tmp=get(VV[176],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[176])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[176])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V46 = (V44);
	V47 = (V41);
	V48 = (V42);
	V49 = (V43);
	(void)((
	V50 = V45,
	(type_of(V50) == t_sfun ?(*((V50)->sfn.sfn_self)):
	(fcall.argd=4,type_of(V50)==t_vfun) ?
	(*((V50)->sfn.sfn_self)):
	(fcall.fun=(V50),fcalln))(V46,V47,V48,V49)));}}
	V38= (long)(V38)+1;
	goto T60;}
	goto T54;
T54:;
	{object V51 = (V35);
	VMR4(V51)}}
	goto T49;
T49:;
	base[2]= VV[11];
	base[4]= (V33);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk177)(Lclptr177);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	{object V52 = vs_base[0];
	VMR4(V52)}}
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
	{object V53=base[0]->c.c_cdr;
	base[2]= V53;}
	{object V55;
	object V56= base[2];
	if(V56==Cnil){
	V54= Cnil;
	goto T80;}
	base[3]=V55=MMcons(Cnil,Cnil);
	goto T81;
T81:;
	{register object V57;
	V57= (V56->c.c_car);
	{object V58;
	base[5]= Cnil;
	base[6]= VV[13];
	base[7]= (V57);
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (VV[14]->s.s_dbind);
	vs_top=(vs_base=base+4)+2;
	Lintern();
	vs_top=sup;
	V58= vs_base[0];
	V59 = (V58);
	if(!(((V57))==(VV[16]))){
	goto T91;}
	V60= VV[17];
	goto T89;
	goto T91;
T91:;
	V60= list(2,VV[18],list(2,VV[19],list(2,VV[20],(V57))));
	goto T89;
T89:;
	V61 = (V57);
	if(!(((V57))==(VV[16]))){
	goto T95;}
	V62= VV[22];
	goto T93;
	goto T95;
T95:;
	V62= VV[23];
	goto T93;
T93:;
	V63= list(2,VV[21],V62);
	V64= list(2,VV[24],(V58));
	V65 = (V57);
	V66 = (V57);
	(V55->c.c_car)= list(9,VV[15],V59,V60,V61,/* INLINE-ARGS */V63,/* INLINE-ARGS */V64,V65,list(2,VV[25],list(2,VV[20],(V57))),V66);}}
	if((V56=MMcdr(V56))==Cnil){
	V54= base[3];
	goto T80;}
	V55=MMcdr(V55)=MMcons(Cnil,Cnil);
	goto T81;}
	goto T80;
T80:;
	base[3]= make_cons(VV[12],V54);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function BOOTSTRAP-META-BRAID	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	bds_check;
	goto TTL;
TTL:;
	{object V68;
	V68= (VFUN_NARGS=1,(*(LnkLI178))(VV[26]));
	{object V70;
	V70= VV[179];
	V71= ({object _tmp=get(VV[180],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[180])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[180])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V72 = (V70);
	V73 = V68;
	(void)((
	V74 = V71,
	(type_of(V74) == t_sfun ?(*((V74)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V74)==t_vfun) ?
	(*((V74)->sfn.sfn_self)):
	(fcall.fun=(V74),fcalln))(V72,V73)));}
	(void)((*(LnkLI181))(VV[26],(V68)));}
	{object V75;
	object V76;
	object V77;
	object V78;
	object V79;
	object V80;
	object V81;
	object V82;
	object V83;
	object V84;
	object V85;
	object V86;
	object V87;
	object V88;
	object V89;
	object V90;
	object V91;
	object V92;
	bds_bind(VV[27],Cnil);
	V75= Cnil;
	V76= Cnil;
	V77= Cnil;
	V78= Cnil;
	V79= Cnil;
	V80= Cnil;
	V81= Cnil;
	V82= Cnil;
	V83= Cnil;
	V84= Cnil;
	V85= Cnil;
	V86= Cnil;
	V87= Cnil;
	V88= Cnil;
	V89= Cnil;
	V90= Cnil;
	V91= Cnil;
	V92= Cnil;
	V93 = CMPmake_fixnum((long)(*(LnkLI19))(VV[28]));
	V75= (VFUN_NARGS=1,(*(LnkLI18))(V93));
	V76= (VFUN_NARGS=1,(*(LnkLI21))((V75)));
	(void)(((V75))->v.v_self[11]= ((V76)));
	V96= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V97 = V76;
	V98 = VV[28];
	(void)((
	V99 = V96,
	(type_of(V99) == t_sfun ?(*((V99)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V99)==t_vfun) ?
	(*((V99)->sfn.sfn_self)):
	(fcall.fun=(V99),fcalln))(V97,V98)));
	V100 = CMPmake_fixnum((long)(*(LnkLI19))(VV[29]));
	V77= (VFUN_NARGS=1,(*(LnkLI18))(V100));
	V78= (VFUN_NARGS=1,(*(LnkLI21))((V75)));
	(void)(((V77))->v.v_self[11]= ((V78)));
	V103= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V104 = V78;
	V105 = VV[29];
	(void)((
	V106 = V103,
	(type_of(V106) == t_sfun ?(*((V106)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V106)==t_vfun) ?
	(*((V106)->sfn.sfn_self)):
	(fcall.fun=(V106),fcalln))(V104,V105)));
	V107 = CMPmake_fixnum((long)(*(LnkLI19))(VV[30]));
	V79= (VFUN_NARGS=1,(*(LnkLI18))(V107));
	V80= (VFUN_NARGS=1,(*(LnkLI21))((V75)));
	(void)(((V79))->v.v_self[11]= ((V80)));
	V110= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V111 = V80;
	V112 = VV[30];
	(void)((
	V113 = V110,
	(type_of(V113) == t_sfun ?(*((V113)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V113)==t_vfun) ?
	(*((V113)->sfn.sfn_self)):
	(fcall.fun=(V113),fcalln))(V111,V112)));
	V114 = CMPmake_fixnum((long)(*(LnkLI19))(VV[31]));
	V81= (VFUN_NARGS=1,(*(LnkLI18))(V114));
	V82= (VFUN_NARGS=1,(*(LnkLI21))((V75)));
	(void)(((V81))->v.v_self[11]= ((V82)));
	V117= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V118 = V82;
	V119 = VV[31];
	(void)((
	V120 = V117,
	(type_of(V120) == t_sfun ?(*((V120)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V120)==t_vfun) ?
	(*((V120)->sfn.sfn_self)):
	(fcall.fun=(V120),fcalln))(V118,V119)));
	V121 = CMPmake_fixnum((long)(*(LnkLI19))(VV[32]));
	V83= (VFUN_NARGS=1,(*(LnkLI18))(V121));
	V84= (VFUN_NARGS=1,(*(LnkLI21))((V75)));
	(void)(((V83))->v.v_self[11]= ((V84)));
	V124= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V125 = V84;
	V126 = VV[32];
	(void)((
	V127 = V124,
	(type_of(V127) == t_sfun ?(*((V127)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V127)==t_vfun) ?
	(*((V127)->sfn.sfn_self)):
	(fcall.fun=(V127),fcalln))(V125,V126)));
	V128 = CMPmake_fixnum((long)(*(LnkLI19))(VV[33]));
	V85= (VFUN_NARGS=1,(*(LnkLI18))(V128));
	V86= (VFUN_NARGS=1,(*(LnkLI21))((V75)));
	(void)(((V85))->v.v_self[11]= ((V86)));
	V131= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V132 = V86;
	V133 = VV[33];
	(void)((
	V134 = V131,
	(type_of(V134) == t_sfun ?(*((V134)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V134)==t_vfun) ?
	(*((V134)->sfn.sfn_self)):
	(fcall.fun=(V134),fcalln))(V132,V133)));
	V135 = CMPmake_fixnum((long)(*(LnkLI19))(VV[34]));
	V87= (VFUN_NARGS=1,(*(LnkLI18))(V135));
	V88= (VFUN_NARGS=1,(*(LnkLI21))((V75)));
	(void)(((V87))->v.v_self[11]= ((V88)));
	V138= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V139 = V88;
	V140 = VV[34];
	(void)((
	V141 = V138,
	(type_of(V141) == t_sfun ?(*((V141)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V141)==t_vfun) ?
	(*((V141)->sfn.sfn_self)):
	(fcall.fun=(V141),fcalln))(V139,V140)));
	V142 = CMPmake_fixnum((long)(*(LnkLI19))(VV[35]));
	V89= (VFUN_NARGS=1,(*(LnkLI18))(V142));
	V90= (VFUN_NARGS=1,(*(LnkLI21))((V75)));
	(void)(((V89))->v.v_self[11]= ((V90)));
	V145= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V146 = V90;
	V147 = VV[35];
	(void)((
	V148 = V145,
	(type_of(V148) == t_sfun ?(*((V148)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V148)==t_vfun) ?
	(*((V148)->sfn.sfn_self)):
	(fcall.fun=(V148),fcalln))(V146,V147)));
	V91= (VV[17]->s.s_dbind);
	V92= (VFUN_NARGS=1,(*(LnkLI21))((V77)));
	(void)(((V91))->v.v_self[11]= ((V92)));
	V151= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V152 = V92;
	V153 = VV[16];
	(void)((
	V154 = V151,
	(type_of(V154) == t_sfun ?(*((V154)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V154)==t_vfun) ?
	(*((V154)->sfn.sfn_self)):
	(fcall.fun=(V154),fcalln))(V152,V153)));
	{object V155;
	object V156;
	V155= (VV[36]->s.s_dbind);
	V156= CMPcar((V155));
	goto T187;
T187:;
	if(!(((V155))==Cnil)){
	goto T188;}
	goto T183;
	goto T188;
T188:;
	{object V157;
	object V158;
	object V159;
	object V160;
	V157= (*(LnkLI182))((V156));
	V158= (*(LnkLI183))((V156));
	{object V161= (V158);
	if((V161!= VV[30]))goto T196;
	V159= (V79);
	goto T195;
	goto T196;
T196:;
	if((V161!= VV[28]))goto T197;
	V159= (V75);
	goto T195;
	goto T197;
T197:;
	if((V161!= VV[29]))goto T198;
	V159= (V77);
	goto T195;
	goto T198;
T198:;
	if((V161!= VV[31]))goto T199;
	V159= (V81);
	goto T195;
	goto T199;
T199:;
	if((V161!= VV[32]))goto T200;
	V159= (V83);
	goto T195;
	goto T200;
T200:;
	FEerror("The ECASE key value ~s is illegal.",1,V161);
	V159= Cnil;
	goto T195;}
	goto T195;
T195:;{object V162;
	V162= (VFUN_NARGS=2,(*(LnkLI25))((V157),Cnil));
	if(V162==Cnil)goto T202;
	V160= V162;
	goto T201;
	goto T202;
T202:;}
	V160= (VFUN_NARGS=1,(*(LnkLI21))((V159)));
	goto T201;
T201:;
	if(((V158))==(VV[28])){
	goto T205;}
	if(!(((V158))==(VV[29]))){
	goto T204;}
	goto T205;
T205:;
	(void)((*(LnkLI184))((V157)));
	goto T204;
T204:;
	V165= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V166 = V160;
	V167 = V157;
	(void)((
	V168 = V165,
	(type_of(V168) == t_sfun ?(*((V168)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V168)==t_vfun) ?
	(*((V168)->sfn.sfn_self)):
	(fcall.fun=(V168),fcalln))(V166,V167)));}
	V155= CMPcdr((V155));
	V156= CMPcar((V155));
	goto T187;}
	goto T183;
T183:;
	{object V169;
	register object V170;
	V169= (VV[36]->s.s_dbind);
	V170= CMPcar((V169));
	goto T219;
T219:;
	if(!(((V169))==Cnil)){
	goto T220;}
	goto T215;
	goto T220;
T220:;
	{register object V171;
	register object V172;
	object V173;
	object V174;
	object V175;
	object V176;
	V171= (*(LnkLI182))((V170));
	V172= (*(LnkLI183))((V170));
	V173= (*(LnkLI185))((V170));
	V174= (*(LnkLI186))((V170));
	V175= (*(LnkLI187))((V170));
	V176= (*(LnkLI188))((V170));
	{object V177;
	base[2]= (V176);
	base[3]= VV[37];
	vs_top=(vs_base=base+2)+2;
	Lgetf();
	vs_top=sup;
	V177= vs_base[0];
	{register object V178;
	object V179;
	object V180;
	object V181;
	base[2]= (V171);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk189)();
	if(vs_base>=vs_top){vs_top=sup;goto T236;}
	V178= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T237;}
	V179= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T238;}
	V180= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T239;}
	V181= vs_base[0];
	vs_top=sup;
	goto T240;
	goto T236;
T236:;
	V178= Cnil;
	goto T237;
T237:;
	V179= Cnil;
	goto T238;
T238:;
	V180= Cnil;
	goto T239;
T239:;
	V181= Cnil;
	goto T240;
T240:;
	{register object V182;
	register object V183;
	object V184;
	V182= (VFUN_NARGS=1,(*(LnkLI25))((V171)));
	if(!(((V182))==((V80)))){
	goto T244;}
	V183= (V79);
	goto T242;
	goto T244;
T244:;
	if(!(((V182))==((V76)))){
	goto T247;}
	V183= (V75);
	goto T242;
	goto T247;
T247:;
	if(!(((V182))==((V78)))){
	goto T250;}
	V183= (V77);
	goto T242;
	goto T250;
T250:;
	if(!(((V182))==((V86)))){
	goto T253;}
	V183= (V85);
	goto T242;
	goto T253;
T253:;
	if(!(((V182))==((V88)))){
	goto T256;}
	V183= (V87);
	goto T242;
	goto T256;
T256:;
	if(!(((V182))==((V82)))){
	goto T259;}
	V183= (V81);
	goto T242;
	goto T259;
T259:;
	if(!(((V182))==((V84)))){
	goto T262;}
	V183= (V83);
	goto T242;
	goto T262;
T262:;
	if(!(((V182))==((V90)))){
	goto T265;}
	V183= (V89);
	goto T242;
	goto T265;
T265:;
	if(!(((V182))==((V92)))){
	goto T268;}
	V183= (V91);
	goto T242;
	goto T268;
T268:;
	V185 = CMPmake_fixnum((long)length((V178)));
	V183= (VFUN_NARGS=2,(*(LnkLI18))(V185,(V182)));
	goto T242;
T242:;
	V184= Cnil;
	if(!(((V171))==(Ct))){
	goto T271;}
	(VV[38]->s.s_dbind)= (V183);
	goto T271;
T271:;
	base[6]= Cnil;
	base[7]= VV[39];
	base[8]= symbol_name((V171));
	vs_top=(vs_base=base+6)+3;
	Lformat();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (VV[14]->s.s_dbind);
	vs_top=(vs_base=base+5)+2;
	Lintern();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V182);
	vs_top=(vs_base=base+4)+2;
	Lset();
	vs_top=sup;
	{register object V186;
	object V187;
	V186= (V178);
	V187= CMPcar((V186));
	goto T287;
T287:;
	if(!(((V186))==Cnil)){
	goto T288;}
	goto T283;
	goto T288;
T288:;
	base[5]= (V187);
	base[6]= VV[40];
	base[7]= VV[41];
	vs_top=(vs_base=base+5)+3;
	Lgetf();
	vs_top=sup;
	V188= vs_base[0];
	if((V188)==(VV[41])){
	goto T292;}
	base[5]= VV[42];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	goto T292;
T292:;
	V186= CMPcdr((V186));
	V187= CMPcar((V186));
	goto T287;}
	goto T283;
T283:;
	V189 = (V183);
	base[5]=VV[190]->s.s_gfdef;
	{object V191;
	object V192= (V178);
	if(V192==Cnil){
	V190= Cnil;
	goto T307;}
	base[4]=V191=MMcons(Cnil,Cnil);
	goto T308;
T308:;
	base[6]= (V192->c.c_car);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk190)();
	vs_top=sup;
	(V191->c.c_car)= vs_base[0];
	if((V192=MMcdr(V192))==Cnil){
	V190= base[4];
	goto T307;}
	V191=MMcdr(V191)=MMcons(Cnil,Cnil);
	goto T308;}
	goto T307;
T307:;
	(void)((V189)->v.v_self[9]= (V190));
	(void)(((V183))->v.v_self[10]= (Cnil));
	if(!(((V172))==(VV[29]))){
	goto T314;}
	V184= (VFUN_NARGS=1,(*(LnkLI191))((V183)));
	goto T312;
	goto T314;
T314:;
	V184= (VFUN_NARGS=1,(*(LnkLI21))((V183)));
	goto T312;
T312:;
	V175= (*(LnkLI192))((V171),(V182),(V175),(V85),Cnil);
	V178= (*(LnkLI192))((V171),(V182),(V178),(V87),Ct);
	{object V193= (V172);
	if((V193!= VV[28])
	&& (V193!= VV[29]))goto T320;
	(void)((VFUN_NARGS=14,(*(LnkLI193))((V172),(V182),(V171),(V89),(V173),(V174),(V181),(V179),(V183),(V184),(V175),(V178),(V177),(V180))));
	goto T224;
	goto T320;
T320:;
	if((V193!= VV[31]))goto T321;
	(void)((VFUN_NARGS=10,(*(LnkLI193))((V172),(V182),(V171),(V89),(V173),(V174),(V181),(V179),(V183),(V184))));
	goto T224;
	goto T321;
T321:;
	if((V193!= VV[30]))goto T322;
	(void)((VFUN_NARGS=10,(*(LnkLI193))((V172),(V182),(V171),(V89),(V173),(V174),(V181),(V179),(V183),(V184))));
	goto T224;
	goto T322;
T322:;
	if((V193!= VV[32]))goto T323;
	(void)((VFUN_NARGS=9,(*(LnkLI193))((V172),(V182),(V171),(V89),(V173),(V174),(V181),(V179),(V183))));
	goto T224;
	goto T323;
T323:;}}}}}
	goto T224;
T224:;
	V169= CMPcdr((V169));
	V170= CMPcar((V169));
	goto T219;}
	goto T215;
T215:;
	{object V194;
	object V195;
	V194= (VFUN_NARGS=1,(*(LnkLI25))(VV[43]));
	if(type_of(V194)==t_structure){
	goto T335;}
	goto T333;
	goto T335;
T335:;
	if(!(((V194)->str.str_def)==(VV[44]))){
	goto T333;}
	V196= STREF(object,(V194),4);
	goto T331;
	goto T333;
T333:;{object V198;
	V198= (VV[45]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V194);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk194)();
	vs_top=sup;
	V199= vs_base[0];
	if(!((V198)==(CMPcar(V199)))){
	goto T338;}}
	V196= CMPcar(((V194))->cc.cc_turbo[12]);
	goto T331;
	goto T338;
T338:;
	base[4]= VV[46];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V196= vs_base[0];
	goto T331;
T331:;
	V200= (*(LnkLI195))(VV[28],VV[47]);
	V195= (V196)->v.v_self[fix(/* INLINE-ARGS */V200)];
	base[3]= (VFUN_NARGS=1,(*(LnkLI21))((V195)));
	base[4]= VV[48];
	vs_base=vs_top;
	(void) (*Lnk196)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L7(base);
	vs_top=sup;
	base[4]= VV[49];
	base[5]= VV[50];
	vs_top=(vs_base=base+4)+2;
	L7(base);
	vs_top=sup;
	base[4]= VV[51];
	base[5]= VV[52];
	vs_top=(vs_base=base+4)+2;
	L7(base);
	vs_top=sup;
	base[4]= VV[53];
	base[5]= Cnil;
	vs_top=(vs_base=base+4)+2;
	L7(base);
	vs_top=sup;
	(VV[54]->s.s_dbind)= base[3];
	{object V201 = (VV[54]->s.s_dbind);
	bds_unwind1;
	VMR6(V201)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-INITIALIZE-CLASS	*/

static object LI8(object V210,object V209,object V208,object V207,object V206,object V205,object V204,object V203,object V202,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{register object V211;
	object V212;
	object V213;
	object V214;
	object V215;
	object V216;
	object V217;
	object V218;
	object V219;
	object V220;
	object V221;
	object V222;
	va_start(ap,first);
	if(narg <9) too_few_arguments();
	base[0]= V210;
	base[1]= V209;
	V211= V208;
	V212= V207;
	V213= V206;
	V214= V205;
	V215= V204;
	V216= V203;
	V217= V202;
	narg = narg - 9;
	if (narg <= 0) goto T358;
	else {
	V218= first;}
	if (--narg <= 0) goto T359;
	else {
	V219= va_arg(ap,object);}
	if (--narg <= 0) goto T360;
	else {
	V220= va_arg(ap,object);}
	if (--narg <= 0) goto T361;
	else {
	V221= va_arg(ap,object);}
	if (--narg <= 0) goto T362;
	else {
	V222= va_arg(ap,object);}
	--narg; goto T363;
	goto T358;
T358:;
	V218= Cnil;
	goto T359;
T359:;
	V219= Cnil;
	goto T360;
T360:;
	V220= Cnil;
	goto T361;
T361:;
	V221= Cnil;
	goto T362;
T362:;
	V222= Cnil;
	goto T363;
T363:;
	base[14]= VV[55];
	base[15]= (V211);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[48];
	base[15]= (V213);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[49];
	V223 = base[1];
	V224= (VFUN_NARGS=1,(*(LnkLI25))(Ct));
	if(!((V223)==(/* INLINE-ARGS */V224))){
	goto T379;}
	base[15]= Ct;
	goto T377;
	goto T379;
T379:;
	base[15]= list(2,VV[26],base[1]);
	goto T377;
T377:;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[35];
	{object V225;
	V225= (VFUN_NARGS=1,(*(LnkLI21))((V212)));
	V226= list(2,VV[56],base[1]);
	(void)((*(LnkLI197))(VV[35],(V225),VV[49],/* INLINE-ARGS */V226));
	(void)((*(LnkLI197))(VV[35],(V225),VV[57],base[1]));
	base[15]= (V225);}
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[58];
	base[16]= (V216);
	vs_top=(vs_base=base+16)+1;
	L9(base);
	vs_top=sup;
	base[15]= vs_base[0];
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[59];
	base[16]= CMPcdr((V216));
	vs_top=(vs_base=base+16)+1;
	L9(base);
	vs_top=sup;
	base[15]= vs_base[0];
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[60];
	base[15]= Cnil;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[61];
	base[16]= (V214);
	vs_top=(vs_base=base+16)+1;
	L9(base);
	vs_top=sup;
	base[15]= vs_base[0];
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[62];
	base[16]= (V215);
	vs_top=(vs_base=base+16)+1;
	L9(base);
	vs_top=sup;
	base[15]= vs_base[0];
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[63];
	base[15]= make_cons(Cnil,Cnil);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[47];
	base[15]= (V217);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[64];{object V227;
	{register object x= (V211),V229= (VV[65]->s.s_dbind);
	while(V229!=Cnil)
	if(eql(x,V229->c.c_car->c.c_car) &&V229->c.c_car != Cnil){
	V228= (V229->c.c_car);
	goto T417;
	}else V229=V229->c.c_cdr;
	V228= Cnil;}
	goto T417;
T417:;
	V227= CMPcadr(V228);
	if(V227==Cnil)goto T415;
	base[15]= V227;
	goto T414;
	goto T415;
T415:;}
	base[16]= (V211);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk198)();
	vs_top=sup;
	base[15]= vs_base[0];
	goto T414;
T414:;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[66];
	if((V221)==Cnil){
	V230= Cnil;
	goto T422;}
	V230= list(2,VV[67],(V221));
	goto T422;
T422:;
	if((V222)==Cnil){
	V231= Cnil;
	goto T423;}
	V231= list(2,VV[68],(V222));
	goto T423;
T423:;
	base[15]= append(V230,V231);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	{register object x= base[0],V232= VV[69];
	while(V232!=Cnil)
	if(x==(V232->c.c_car)){
	goto T426;
	}else V232=V232->c.c_cdr;
	goto T424;}
	goto T426;
T426:;
	base[14]= VV[70];
	base[15]= (V219);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[71];
	base[15]= (V220);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[72];
	base[15]= Cnil;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	goto T424;
T424:;
	if(!((base[0])==(VV[32]))){
	goto T437;}
	base[14]= VV[64];{object V234;
	{register object x= (V211),V236= (VV[65]->s.s_dbind);
	while(V236!=Cnil)
	if(eql(x,V236->c.c_car->c.c_car) &&V236->c.c_car != Cnil){
	V235= (V236->c.c_car);
	goto T444;
	}else V236=V236->c.c_cdr;
	V235= Cnil;}
	goto T444;
T444:;
	V234= CMPcadr(V235);
	if(V234==Cnil)goto T442;
	base[15]= V234;
	goto T441;
	goto T442;
T442:;}
	base[16]= (V211);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk198)();
	vs_top=sup;
	base[15]= vs_base[0];
	goto T441;
T441:;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[74];
	base[15]= list(2,VV[75],list(2,VV[76],list(2,VV[77],VV[73])));
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[78];
	base[15]= VV[73];
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[79];
	base[15]= Ct;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[66];
	base[15]= Cnil;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[80];
	vs_base=vs_top;
	{object _funobj = VV[73];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[15]= vs_base[0];
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	goto T435;
	goto T437;
T437:;
	base[14]= VV[80];
	if((V218)!=Cnil){
	base[15]= (V218);
	goto T461;}
	base[15]= (VFUN_NARGS=1,(*(LnkLI21))((V217)));
	goto T461;
T461:;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	goto T435;
T435:;
	{object V237 = base[1];
	VMR7(V237)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BOOTSTRAP-MAKE-SLOT-DEFINITIONS	*/

static object LI11(V243,V244,V245,V246,V247)

object V243;object V244;object V245;object V246;object V247;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V248;
	V248= small_fixnum(-1);
	{object V249;
	object V250= (V245);
	if(V250==Cnil){
	{object V251 = Cnil;
	VMR8(V251)}}
	base[0]=V249=MMcons(Cnil,Cnil);
	goto T462;
T462:;
	V248= number_plus((V248),small_fixnum(1));
	(V249->c.c_car)= (*(LnkLI199))((V243),(V244),(V250->c.c_car),(V246),(V247),(V248));
	if((V250=MMcdr(V250))==Cnil){
	{object V253 = base[0];
	VMR8(V253)}}
	V249=MMcdr(V249)=MMcons(Cnil,Cnil);
	goto T462;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-MAKE-SLOT-DEFINITION	*/

static object LI15(V260,V261,V262,V263,V264,V265)

object V260;object V261;object V262;object V263;register object V264;register object V265;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	base[0]= (V262);
	{register object V266;
	if(((V264))==Cnil){
	goto T468;}
	base[1]= VV[34];
	goto T466;
	goto T468;
T468:;
	base[1]= VV[33];
	goto T466;
T466:;
	base[2]= (VFUN_NARGS=1,(*(LnkLI21))((V263)));
	base[4]= base[0];
	base[5]= VV[81];
	vs_top=(vs_base=base+4)+2;
	Lgetf();
	vs_top=sup;
	V266= vs_base[0];
	base[4]= VV[55];
	base[5]= (V266);
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[82];
	base[6]= VV[83];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[84];
	base[6]= VV[85];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[86];
	base[6]= VV[87];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[88];
	base[6]= VV[89];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[90];
	base[6]= VV[91];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[92];
	base[5]= VV[41];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[49];{object V267;
	base[6]= VV[93];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	V267= vs_base[0];
	if(V267==Cnil)goto T503;
	base[5]= V267;
	goto T502;
	goto T503;
T503:;}
	base[5]= Ct;
	goto T502;
T502:;
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[51];{object V268;
	base[6]= VV[94];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	V268= vs_base[0];
	if(V268==Cnil)goto T509;
	base[5]= V268;
	goto T508;
	goto T509;
T509:;}
	base[5]= VV[95];
	goto T508;
T508:;
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[26];
	base[5]= (V261);
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	if(((V264))==Cnil){
	goto T515;}
	base[4]= VV[96];
	base[5]= (V265);
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[97];
	base[6]= Cnil;
	base[7]= (V266);
	base[8]= (V265);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk200)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[98];
	base[6]= Cnil;
	base[7]= (V266);
	base[8]= (V265);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk201)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[99];
	base[6]= Cnil;
	base[7]= (V266);
	base[8]= (V265);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk202)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[100];
	base[5]= small_fixnum(7);
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	{object V270;{object V271;
	base[4]= (V266);
	base[5]= (VV[101]->s.s_dbind);
	vs_top=(vs_base=base+4)+2;
	Lgethash();
	vs_top=sup;
	V271= vs_base[0];
	if(V271==Cnil)goto T543;
	V270= V271;
	goto T542;
	goto T543;
T543:;}
	{object V273;
	object V274;
	V273= (VV[101]->s.s_dbind);
	base[5]= VV[102];
	base[6]= VV[103];
	base[7]= VV[104];
	base[8]= small_fixnum(5);
	vs_top=(vs_base=base+5)+4;
	Lmake_hash_table();
	vs_top=sup;
	V274= vs_base[0];
	base[5]= V266;
	base[6]= (V273);
	base[7]= (V274);
	vs_top=(vs_base=base+5)+3;
	siLhash_set();
	vs_top=sup;
	V270= vs_base[0];}
	goto T542;
T542:;
	base[4]= V261;
	base[5]= V270;
	base[6]= base[2];
	vs_top=(vs_base=base+4)+3;
	siLhash_set();
	vs_top=sup;}
	goto T515;
T515:;
	if(!(((V260))==(VV[28]))){
	goto T559;}
	if(!(((V266))==(VV[71]))){
	goto T559;}
	if(((V264))==Cnil){
	goto T559;}
	(VV[105]->s.s_dbind)= base[2];
	goto T559;
T559:;
	if(!(((V260))==(VV[29]))){
	goto T567;}
	if(!(((V266))==(VV[71]))){
	goto T567;}
	if(((V264))==Cnil){
	goto T567;}
	(VV[106]->s.s_dbind)= base[2];
	goto T567;
T567:;
	{object V278 = base[2];
	VMR9(V278)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-ACCESSOR-DEFINITIONS	*/

static object LI18(V280)

object V280;
{	 VMB10 VMS10 VMV10
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[107],(V280));
	{register object V281;
	register object V282;
	V281= (VV[36]->s.s_dbind);
	V282= CMPcar((V281));
	goto T578;
T578:;
	if(!(((V281))==Cnil)){
	goto T579;}
	{object V283 = Cnil;
	bds_unwind1;
	VMR10(V283)}
	goto T579;
T579:;
	{object V284;
	object V285;
	V284= (*(LnkLI182))((V282));
	V285= (*(LnkLI183))((V282));
	if(((V285))==(VV[31])){
	goto T583;}
	{object V286;
	V286= (*(LnkLI187))((V282));
	{register object V287;
	register object V288;
	V287= (V286);
	V288= CMPcar((V287));
	goto T592;
T592:;
	if(!(((V287))==Cnil)){
	goto T593;}
	goto T583;
	goto T593;
T593:;
	{register object V289;
	register object V290;
	register object V291;
	base[3]= (V288);
	base[4]= VV[81];
	vs_top=(vs_base=base+3)+2;
	Lgetf();
	vs_top=sup;
	V289= vs_base[0];
	base[3]= (V288);
	base[4]= VV[89];
	vs_top=(vs_base=base+3)+2;
	Lgetf();
	vs_top=sup;
	V290= vs_base[0];
	base[3]= (V288);
	base[4]= VV[91];
	vs_top=(vs_base=base+3)+2;
	Lgetf();
	vs_top=sup;
	V291= vs_base[0];
	(void)((*(LnkLI203))((V284),(V289),(V290),(V291),Cnil));
	V292= (*(LnkLI204))((V289));
	V293= make_cons(/* INLINE-ARGS */V292,Cnil);
	V294= (*(LnkLI205))((V289));
	V295= make_cons(/* INLINE-ARGS */V294,Cnil);
	V296= (*(LnkLI206))((V289));
	V297= make_cons(/* INLINE-ARGS */V296,Cnil);
	(void)((*(LnkLI203))(VV[108],(V289),/* INLINE-ARGS */V293,/* INLINE-ARGS */V295,/* INLINE-ARGS */V297));}
	V287= CMPcdr((V287));
	V288= CMPcar((V287));
	goto T592;}}}
	goto T583;
T583:;
	V281= CMPcdr((V281));
	V282= CMPcar((V281));
	goto T578;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for BOOTSTRAP-ACCESSOR-DEFINITION	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{register object V298;
	object V299;
	object V300;
	object V301;
	check_arg(4);
	V298=(base[0]);
	V299=(base[1]);
	V300=(base[2]);
	V301=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V302;
	object V303;
	object V304;
	object V305;
	object V306;
	{object V307= (V301);
	if((V307!= VV[120]))goto T619;
	base[4]= VV[109];
	base[5]= (VV[207]->s.s_gfdef);
	base[6]= make_cons((V298),Cnil);
	base[7]= make_cons((V298),Cnil);
	base[8]= VV[110];
	vs_top=(vs_base=base+4)+5;
	goto T618;
	goto T619;
T619:;
	if((V307!= VV[121]))goto T625;
	base[4]= VV[111];
	base[5]= (VV[208]->s.s_gfdef);
	base[6]= list(2,VV[112],(V298));
	base[7]= list(2,Ct,(V298));
	base[8]= VV[113];
	vs_top=(vs_base=base+4)+5;
	goto T618;
	goto T625;
T625:;
	if((V307!= VV[122]))goto T631;
	base[4]= VV[114];
	base[5]= (VV[209]->s.s_gfdef);
	base[6]= make_cons((V298),Cnil);
	base[7]= make_cons((V298),Cnil);
	base[8]= VV[115];
	vs_top=(vs_base=base+4)+5;
	goto T618;
	goto T631;
T631:;
	FEerror("The ECASE key value ~s is illegal.",1,V307);
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	goto T618;}
	goto T618;
T618:;
	if(vs_base>=vs_top){vs_top=sup;goto T637;}
	V302= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T638;}
	V303= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T639;}
	V304= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T640;}
	V305= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T641;}
	V306= vs_base[0];
	vs_top=sup;
	goto T642;
	goto T637;
T637:;
	V302= Cnil;
	goto T638;
T638:;
	V303= Cnil;
	goto T639;
T639:;
	V304= Cnil;
	goto T640;
T640:;
	V305= Cnil;
	goto T641;
T641:;
	V306= Cnil;
	goto T642;
T642:;
	{register object V308;
	base[4]= (V299);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk210)();
	vs_top=sup;
	V308= vs_base[0];
	base[4]= (V305);
	if(type_of(V308)==t_structure){
	goto T654;}
	goto T652;
	goto T654;
T654:;
	if(!(((V308)->str.str_def)==(VV[116]))){
	goto T652;}
	V309= STREF(object,(V308),4);
	goto T650;
	goto T652;
T652:;{object V311;
	V311= (VV[45]->s.s_dbind);
	base[6]= small_fixnum(14);
	base[7]= (V308);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk194)();
	vs_top=sup;
	V312= vs_base[0];
	if(!((V311)==(CMPcar(V312)))){
	goto T657;}}
	V309= CMPcar(((V308))->cc.cc_turbo[12]);
	goto T650;
	goto T657;
T657:;
	base[6]= VV[46];
	vs_top=(vs_base=base+6)+1;
	Lerror();
	vs_top=sup;
	V309= vs_base[0];
	goto T650;
T650:;
	V313 = (VV[117]->s.s_dbind);
	base[5]= (V309)->v.v_self[fix(V313)];
	base[6]= VV[118];
	base[7]= (VV[211]->s.s_gfdef);
	base[8]= VV[102];
	base[9]= (VV[212]->s.s_gfdef);
	vs_top=(vs_base=base+4)+6;
	(void) (*Lnk213)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T646;}
	{register object x= (V299),V314= (VV[119]->s.s_dbind);
	while(V314!=Cnil)
	if(equal(x,V314->c.c_car->c.c_car) &&V314->c.c_car != Cnil){
	goto T668;
	}else V314=V314->c.c_cdr;}
	base[4]= (VFUN_NARGS=1,(*(LnkLI214))((V308)));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T668;
T668:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T646;
T646:;
	base[4]=(VV[215]->s.s_gfdef);
	base[5]= (V308);
	base[7]=(VV[216]->s.s_gfdef);
	base[8]= (V302);
	base[9]= Cnil;
	base[10]= (V304);
	base[11]= (V305);
	base[13]= (V298);
	base[14]= (V300);
	vs_top=(vs_base=base+13)+2;
	{object _funobj = (V303);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[12]= vs_base[0];
	base[13]= (V306);
	base[14]= (V300);
	base[6]= simple_lispcall(base+7,7);
	lispcall(base+4,2);
	return;}}
	}
}
/*	local entry for function BOOTSTRAP-ACCESSOR-DEFINITIONS1	*/

static object LI24(V320,V321,V322,V323,V324)

object V320;object V321;object V322;object V323;object V324;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	base[0]= (V321);
	base[1]= (V320);
	{register object V325;
	register object V326;
	V325= (V322);
	V326= CMPcar((V325));
	goto T685;
T685:;
	if(!(((V325))==Cnil)){
	goto T686;}
	goto T681;
	goto T686;
T686:;
	base[3]= (V326);
	vs_top=(vs_base=base+3)+1;
	L25(base);
	vs_top=sup;
	V325= CMPcdr((V325));
	V326= CMPcar((V325));
	goto T685;}
	goto T681;
T681:;
	{register object V327;
	register object V328;
	V327= (V323);
	V328= CMPcar((V327));
	goto T701;
T701:;
	if(!(((V327))==Cnil)){
	goto T702;}
	goto T697;
	goto T702;
T702:;
	base[3]= (V328);
	vs_top=(vs_base=base+3)+1;
	L26(base);
	vs_top=sup;
	V327= CMPcdr((V327));
	V328= CMPcar((V327));
	goto T701;}
	goto T697;
T697:;
	{register object V329;
	register object V330;
	V329= (V324);
	V330= CMPcar((V329));
	goto T716;
T716:;
	if(!(((V329))==Cnil)){
	goto T717;}
	{object V331 = Cnil;
	VMR12(V331)}
	goto T717;
T717:;
	base[3]= (V330);
	vs_top=(vs_base=base+3)+1;
	L27(base);
	vs_top=sup;
	V329= CMPcdr((V329));
	V330= CMPcar((V329));
	goto T716;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-CLASS-PREDICATES	*/

static object LI28(V333)

object V333;
{	 VMB13 VMS13 VMV13
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[107],(V333));
	{register object V334;
	register object V335;
	V334= (VV[36]->s.s_dbind);
	V335= CMPcar((V334));
	goto T731;
T731:;
	if(!(((V334))==Cnil)){
	goto T732;}
	{object V336 = Cnil;
	bds_unwind1;
	VMR13(V336)}
	goto T732;
T732:;
	{register object V337;
	register object V338;
	V337= (*(LnkLI182))((V335));
	V338= (VFUN_NARGS=1,(*(LnkLI25))((V337)));
	{register object V339;
	register object V340;
	V339= (V337);
	V341 = (V338);
	base[5]= (V338);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk218)(Lclptr218);
	vs_top=sup;
	V342= vs_base[0];
	V340= (*(LnkLI217))(V341,V342);
	V343= ({object _tmp=get(VV[219],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[219])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[219])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V344 = (V340);
	V345 = (V339);
	(void)((
	V346 = V343,
	(type_of(V346) == t_sfun ?(*((V346)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V346)==t_vfun) ?
	(*((V346)->sfn.sfn_self)):
	(fcall.fun=(V346),fcalln))(V344,V345)));}}
	V334= CMPcdr((V334));
	V335= CMPcar((V334));
	goto T731;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-BUILT-IN-CLASSES	*/

static object LI29()

{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{register object V347;
	object V348;
	V347= (VV[123]->s.s_dbind);
	V348= CMPcar((V347));
	goto T753;
T753:;
	if(!(((V347))==Cnil)){
	goto T754;}
	goto T749;
	goto T754;
T754:;
	{register object V349;
	register object V350;
	V349= CMPcadr((V348));
	V350= CMPcar((V349));
	goto T762;
T762:;
	if(!(((V349))==Cnil)){
	goto T763;}
	goto T758;
	goto T763;
T763:;
	if(((V350))==(Ct)){
	goto T767;}
	{register object x= (V350),V351= (VV[123]->s.s_dbind);
	while(V351!=Cnil)
	if(EQ(x,V351->c.c_car->c.c_car) &&V351->c.c_car != Cnil){
	goto T767;
	}else V351=V351->c.c_cdr;}
	base[3]= VV[124];
	base[4]= CMPcar((V348));
	base[5]= (V350);
	base[6]= (V350);
	vs_top=(vs_base=base+3)+4;
	Lerror();
	vs_top=sup;
	goto T767;
T767:;
	V349= CMPcdr((V349));
	V350= CMPcar((V349));
	goto T762;}
	goto T758;
T758:;
	V347= CMPcdr((V347));
	V348= CMPcar((V347));
	goto T753;}
	goto T749;
T749:;
	{object V352;
	object V353;
	V352= (VFUN_NARGS=1,(*(LnkLI25))(VV[31]));
	base[2]= (V352);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk220)(Lclptr220);
	vs_top=sup;
	V353= vs_base[0];
	{register object V354;
	object V355;
	V354= (VV[123]->s.s_dbind);
	V355= CMPcar((V354));
	goto T793;
T793:;
	if(!(((V354))==Cnil)){
	goto T794;}
	goto T786;
	goto T794;
T794:;
	{object V356;
	V356= (VFUN_NARGS=1,(*(LnkLI21))((V353)));
	{object V357;
	V357= CMPcar((V355));
	V359= ({object _tmp=get(VV[25],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[25])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[25])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V360 = V356;
	V361 = (V357);
	(void)((
	V362 = V359,
	(type_of(V362) == t_sfun ?(*((V362)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V362)==t_vfun) ?
	(*((V362)->sfn.sfn_self)):
	(fcall.fun=(V362),fcalln))(V360,V361)));}}
	V354= CMPcdr((V354));
	V355= CMPcar((V354));
	goto T793;}}
	goto T786;
T786:;
	{object V363;
	base[0]= (VFUN_NARGS=1,(*(LnkLI25))(VV[35]));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk220)(Lclptr220);
	vs_top=sup;
	V363= vs_base[0];
	{register object V364;
	object V365;
	V364= (VV[123]->s.s_dbind);
	V365= CMPcar((V364));
	goto T813;
T813:;
	if(!(((V364))==Cnil)){
	goto T814;}
	goto T807;
	goto T814;
T814:;
	{object V366;
	object V367;
	object V368;
	object V369;
	register object V370;
	register object V371;
	V366= Cnil;
	V367= Cnil;
	V368= Cnil;
	V369= Cnil;
	V370= Cnil;
	V371= Cnil;
	V371= (V365);
	V370= CMPcar((V371));
	V371= CMPcdr((V371));
	V369= CMPcar((V371));
	V371= CMPcdr((V371));
	V368= CMPcar((V371));
	V371= CMPcdr((V371));
	V367= CMPcar((V371));
	V371= CMPcdr((V371));
	V366= CMPcar((V371));
	{object V372;
	register object V373;
	V372= (VFUN_NARGS=1,(*(LnkLI25))((V370)));
	V373= (VFUN_NARGS=2,(*(LnkLI18))(small_fixnum(0),(V372)));
	base[3]= (*(LnkLI221))((V370));
	base[4]= (V372);
	vs_top=(vs_base=base+3)+2;
	Lset();
	vs_top=sup;
	base[3]= (*(LnkLI222))((V370));
	base[4]= (V373);
	vs_top=(vs_base=base+3)+2;
	Lset();
	vs_top=sup;
	(void)(((V373))->v.v_self[9]= (Cnil));
	(void)(((V373))->v.v_self[10]= (Cnil));
	V374= make_cons((V370),(V367));
	(void)((VFUN_NARGS=10,(*(LnkLI193))(VV[31],(V372),(V370),(V363),Cnil,(V369),(V368),/* INLINE-ARGS */V374,(V373),(V366))));}}
	V364= CMPcdr((V364));
	V365= CMPcar((V364));
	goto T813;}}
	goto T807;
T807:;
	{register object V375;
	object V376;
	V375= (VV[123]->s.s_dbind);
	V376= CMPcar((V375));
	goto T859;
T859:;
	if(!(((V375))==Cnil)){
	goto T860;}
	{object V377 = Cnil;
	VMR14(V377)}
	goto T860;
T860:;
	{object V378;
	object V379;
	V378= CMPcar((V376));
	V379= (VFUN_NARGS=1,(*(LnkLI25))((V378)));
	{object V381;
	V382 = (V379);
	base[4]= (V379);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk218)(Lclptr218);
	vs_top=sup;
	V383= vs_base[0];
	V381= (*(LnkLI217))(V382,V383);
	V384= ({object _tmp=get(VV[219],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[219])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[219])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V385 = (V381);
	V386 = V378;
	(void)((
	V387 = V384,
	(type_of(V387) == t_sfun ?(*((V387)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V387)==t_vfun) ?
	(*((V387)->sfn.sfn_self)):
	(fcall.fun=(V387),fcalln))(V385,V386)));}}
	V375= CMPcdr((V375));
	V376= CMPcar((V375));
	goto T859;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WRAPPER-FOR-STRUCTURE	*/

static object LI30(V389)

object V389;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{register object V390;
	if(type_of((V389))==t_structure){
	goto T877;}
	V390= Cnil;
	goto T876;
	goto T877;
T877:;
	V390= ((V389))->str.str_def->str.str_self[0];
	goto T876;
T876:;
	if(!(type_of((V390))==t_symbol)){
	goto T879;}
	if(!(((V390))==(VV[1]))){
	goto T883;}
	{object V391 = STREF(object,(V389),0);
	VMR15(V391)}
	goto T883;
T883:;
	if(!(((V390))==((VV[125]->s.s_dbind)))){
	goto T886;}
	{object V392 = (VV[126]->s.s_dbind);
	VMR15(V392)}
	goto T886;
T886:;
	if(!(((V390))==((VV[127]->s.s_dbind)))){
	goto T889;}
	{object V393 = (VV[128]->s.s_dbind);
	VMR15(V393)}
	goto T889;
T889:;
	(VV[127]->s.s_dbind)= (VV[125]->s.s_dbind);
	(VV[128]->s.s_dbind)= (VV[126]->s.s_dbind);
	goto T879;
T879:;
	{object V394;
	object V395;
	object V396;
	V394= (VFUN_NARGS=1,(*(LnkLI224))((V390)));{object V397;
	V397= CMPcar((V394));
	if(V397==Cnil)goto T896;
	V395= V397;
	goto T895;
	goto T896;
T896:;}
	V395= (VFUN_NARGS=2,(*(LnkLI225))((V390),(V394)));
	goto T895;
T895:;
	if(((V395))==Cnil){
	goto T900;}
	base[3]= (V395);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk220)(Lclptr220);
	vs_top=sup;
	V396= vs_base[0];
	goto T898;
	goto T900;
T900:;
	V396= (VV[38]->s.s_dbind);
	goto T898;
T898:;
	if(!(type_of((V390))==t_symbol)){
	goto T903;}
	(VV[125]->s.s_dbind)= (V390);
	(VV[126]->s.s_dbind)= (V396);
	goto T903;
T903:;
	{object V398 = (V396);
	VMR15(V398)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BUILT-IN-OR-STRUCTURE-WRAPPER1	*/

static object LI31(V400)

object V400;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{object V401;{object V402;
	V402= (*(LnkLI226))((V400));
	if(V402==Cnil)goto T910;
	V401= V402;
	goto T909;
	goto T910;
T910:;}
	V401= (VV[38]->s.s_dbind);
	goto T909;
T909:;{object V403;
	if(((V401))==((VV[38]->s.s_dbind))){
	goto T914;}
	V403= Cnil;
	goto T913;
	goto T914;
T914:;
	if(type_of((V400))==t_structure){
	goto T916;}
	V403= Cnil;
	goto T913;
	goto T916;
T916:;
	{object V404;
	object V405;
	base[2]= (V400);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V404= vs_base[0];
	V405= (VFUN_NARGS=2,(*(LnkLI25))((V404),Cnil));
	if((V405)==Cnil){
	V403= Cnil;
	goto T913;}
	base[2]= (V405);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk220)(Lclptr220);
	vs_top=sup;
	V403= vs_base[0];}
	goto T913;
T913:;
	if(V403==Cnil)goto T912;
	{object V406 = V403;
	VMR16(V406)}
	goto T912;
T912:;}
	{object V407 = (V401);
	VMR16(V407)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLASS-OF	*/

static object LI32(V409)

register object V409;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if(type_of(V409)==t_structure){
	goto T926;}
	goto T924;
	goto T926;
T926:;
	if(!(((V409)->str.str_def)==(VV[129]))){
	goto T924;}
	V410= STREF(object,(V409),0);
	goto T922;
	goto T924;
T924:;{object V412;
	V412= (VV[45]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V409);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk194)();
	vs_top=sup;
	V413= vs_base[0];
	if(!((V412)==(CMPcar(V413)))){
	goto T929;}}
	V410= CMPcar(((V409))->cc.cc_turbo[13]);
	goto T922;
	goto T929;
T929:;
	if(!(type_of((V409))==t_structure)){
	goto T935;}
	V410= (*(LnkLI227))((V409));
	goto T922;
	goto T935;
T935:;
	if(!(type_of((V409))==t_symbol)){
	goto T938;}
	if(((V409))==Cnil){
	goto T941;}
	V410= (VV[130]->s.s_dbind);
	goto T922;
	goto T941;
T941:;
	V410= (VV[131]->s.s_dbind);
	goto T922;
	goto T938;
T938:;
	V410= (*(LnkLI226))((V409));
	goto T922;
T922:;
	{object V414 = (V410)->v.v_self[11];
	VMR17(V414)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WRAPPER-OF	*/

static object LI33(V416)

register object V416;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	if(type_of(V416)==t_structure){
	goto T946;}
	goto T944;
	goto T946;
T946:;
	if(!(((V416)->str.str_def)==(VV[132]))){
	goto T944;}
	{object V418 = STREF(object,(V416),0);
	VMR18(V418)}
	goto T944;
T944:;{object V419;
	V419= (VV[45]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V416);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk194)();
	vs_top=sup;
	V420= vs_base[0];
	if(!((V419)==(CMPcar(V420)))){
	goto T949;}}
	{object V421 = CMPcar(((V416))->cc.cc_turbo[13]);
	VMR18(V421)}
	goto T949;
T949:;
	if(!(type_of((V416))==t_structure)){
	goto T955;}
	{object V422 = (*(LnkLI227))((V416));
	VMR18(V422)}
	goto T955;
T955:;
	if(!(type_of((V416))==t_symbol)){
	goto T958;}
	if(((V416))==Cnil){
	goto T961;}
	{object V423 = (VV[130]->s.s_dbind);
	VMR18(V423)}
	goto T961;
T961:;
	{object V424 = (VV[131]->s.s_dbind);
	VMR18(V424)}
	goto T958;
T958:;
	{object V425 = (*(LnkLI226))((V416));
	VMR18(V425)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for STRUCTURE-WRAPPER	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V426;
	check_arg(1);
	V426=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(type_of((V426))==t_structure){
	goto T965;}
	V427= Cnil;
	goto T964;
	goto T965;
T965:;
	V427= ((V426))->str.str_def->str.str_self[0];
	goto T964;
T964:;
	base[1]= (VFUN_NARGS=1,(*(LnkLI25))(V427));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk220)(Lclptr220);
	return;
	}
}
/*	local entry for function EVAL-FORM	*/

static object LI36(V429)

object V429;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	base[0]=MMcons((V429),Cnil);
	{object V430 = 
	make_cclosure_new(LC47,Cnil,base[0],Cdata);
	VMR20(V430)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SLOT-INITARGS-FROM-STRUCTURE-SLOTD	*/

static object LI37(V432)

register object V432;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	base[0]= VV[81];
	base[1]= (*(LnkLI228))((V432));
	base[2]= VV[133];
	base[3]= (*(LnkLI229))((V432));
	base[4]= VV[134];
	base[5]= (*(LnkLI230))((V432));
	base[6]= VV[135];
	base[7]= (*(LnkLI231))((V432));
	base[8]= VV[93];{object V433;
	V433= (*(LnkLI232))((V432));
	if(V433==Cnil)goto T977;
	base[9]= V433;
	goto T976;
	goto T977;
T977:;}
	base[9]= Ct;
	goto T976;
T976:;
	base[10]= VV[83];
	base[12]= (V432);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk233)();
	vs_top=sup;
	base[11]= vs_base[0];
	base[12]= VV[85];
	base[14]= (V432);
	vs_top=(vs_base=base+14)+1;
	(void) (*Lnk233)();
	vs_top=sup;
	V434= vs_base[0];
	base[13]= (*(LnkLI234))(V434);
	vs_top=(vs_base=base+0)+14;
	Llist();
	vs_top=sup;
	{object V435 = vs_base[0];
	VMR21(V435)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for FIND-STRUCTURE-CLASS	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	bds_check;
	{register object V436;
	check_arg(1);
	V436=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((*(LnkLI235))((V436)))==Cnil){
	goto T987;}
	if(((VV[136]->s.s_dbind))==((V436))){
	goto T990;}
	bds_bind(VV[136],(V436));
	base[2]= (V436);
	base[3]= VV[137];
	base[4]= VV[32];
	base[5]= VV[81];
	base[6]= (V436);
	base[7]= VV[138];
	if(((*(LnkLI236))((V436)))==Cnil){
	goto T1000;}
	V437= (*(LnkLI236))((V436));
	base[8]= make_cons(/* INLINE-ARGS */V437,Cnil);
	goto T998;
	goto T1000;
T1000:;
	base[8]= Cnil;
	goto T998;
T998:;
	base[9]= VV[139];
	V440= (*(LnkLI237))((V436));
	{object V438;
	object V439= /* INLINE-ARGS */V440;
	if(V439==Cnil){
	base[10]= Cnil;
	goto T1003;}
	base[11]=V438=MMcons(Cnil,Cnil);
	goto T1004;
T1004:;
	(V438->c.c_car)= (*(LnkLI238))((V439->c.c_car));
	if((V439=MMcdr(V439))==Cnil){
	base[10]= base[11];
	goto T1003;}
	V438=MMcdr(V438)=MMcons(Cnil,Cnil);
	goto T1004;}
	goto T1003;
T1003:;
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk239)();
	bds_unwind1;
	return;
	goto T990;
T990:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T987;
T987:;
	base[1]= VV[140];
	base[2]= (V436);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
/*	local entry for function BUILT-IN-WRAPPER-OF	*/

static object LI39(V442)

register object V442;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;{object V443;
	if(type_of((V442))==t_symbol){
	goto T1010;}
	V443= Cnil;
	goto T1009;
	goto T1010;
T1010:;{object V444;
	if(((V442))==Cnil){
	goto T1014;}
	V444= Cnil;
	goto T1013;
	goto T1014;
T1014:;
	V444= (VV[131]->s.s_dbind);
	goto T1013;
T1013:;
	if(V444==Cnil)goto T1012;
	V443= V444;
	goto T1009;
	goto T1012;
T1012:;}
	V443= (VV[130]->s.s_dbind);
	goto T1009;
T1009:;
	if(V443==Cnil)goto T1008;
	{object V445 = V443;
	VMR23(V445)}
	goto T1008;
T1008:;}{object V446;
	if(type_of((V442))==t_character){
	goto T1018;}
	V446= Cnil;
	goto T1017;
	goto T1018;
T1018:;
	V446= (VV[141]->s.s_dbind);
	goto T1017;
T1017:;
	if(V446==Cnil)goto T1016;
	{object V447 = V446;
	VMR23(V447)}
	goto T1016;
T1016:;}{object V448;
	if(type_of((V442))==t_array||
type_of((V442))==t_vector||
type_of((V442))==t_string||
type_of((V442))==t_bitvector){
	goto T1022;}
	V448= Cnil;
	goto T1021;
	goto T1022;
T1022:;{object V449;
	if(type_of((V442))==t_vector||
type_of((V442))==t_string||
type_of((V442))==t_bitvector){
	goto T1026;}
	V449= Cnil;
	goto T1025;
	goto T1026;
T1026:;{object V450;
	if((type_of((V442))==t_bitvector)){
	goto T1030;}
	V450= Cnil;
	goto T1029;
	goto T1030;
T1030:;
	V450= (VV[144]->s.s_dbind);
	goto T1029;
T1029:;
	if(V450==Cnil)goto T1028;
	V449= V450;
	goto T1025;
	goto T1028;
T1028:;}{object V451;
	if(type_of((V442))==t_string){
	goto T1034;}
	V451= Cnil;
	goto T1033;
	goto T1034;
T1034:;
	V451= (VV[145]->s.s_dbind);
	goto T1033;
T1033:;
	if(V451==Cnil)goto T1032;
	V449= V451;
	goto T1025;
	goto T1032;
T1032:;}
	V449= (VV[143]->s.s_dbind);
	goto T1025;
T1025:;
	if(V449==Cnil)goto T1024;
	V448= V449;
	goto T1021;
	goto T1024;
T1024:;}
	V448= (VV[142]->s.s_dbind);
	goto T1021;
T1021:;
	if(V448==Cnil)goto T1020;
	{object V452 = V448;
	VMR23(V452)}
	goto T1020;
T1020:;}{object V453;
	if(!(type_of(V442)==t_cons||(V442)==Cnil)){
	goto T1040;}
	goto T1038;
	goto T1040;
T1040:;
	if(type_of(V442)==t_vector||
type_of(V442)==t_string||
type_of(V442)==t_bitvector){
	goto T1038;}
	V453= Cnil;
	goto T1037;
	goto T1038;
T1038:;{object V455;
	if(type_of((V442))==t_vector||
type_of((V442))==t_string||
type_of((V442))==t_bitvector){
	goto T1044;}
	V455= Cnil;
	goto T1043;
	goto T1044;
T1044:;{object V456;
	if((type_of((V442))==t_bitvector)){
	goto T1048;}
	V456= Cnil;
	goto T1047;
	goto T1048;
T1048:;
	V456= (VV[144]->s.s_dbind);
	goto T1047;
T1047:;
	if(V456==Cnil)goto T1046;
	V455= V456;
	goto T1043;
	goto T1046;
T1046:;}{object V457;
	if(type_of((V442))==t_string){
	goto T1052;}
	V457= Cnil;
	goto T1051;
	goto T1052;
T1052:;
	V457= (VV[145]->s.s_dbind);
	goto T1051;
T1051:;
	if(V457==Cnil)goto T1050;
	V455= V457;
	goto T1043;
	goto T1050;
T1050:;}
	V455= (VV[143]->s.s_dbind);
	goto T1043;
T1043:;
	if(V455==Cnil)goto T1042;
	V453= V455;
	goto T1037;
	goto T1042;
T1042:;}{object V458;
	if(!(type_of(V442)==t_cons)){
	goto T1058;}
	goto T1056;
	goto T1058;
T1058:;
	if((V442)==Cnil){
	goto T1056;}
	V458= Cnil;
	goto T1055;
	goto T1056;
T1056:;{object V460;
	if(((V442))==Cnil){
	goto T1062;}
	V460= Cnil;
	goto T1061;
	goto T1062;
T1062:;
	V460= (VV[131]->s.s_dbind);
	goto T1061;
T1061:;
	if(V460==Cnil)goto T1060;
	V458= V460;
	goto T1055;
	goto T1060;
T1060:;}{object V461;
	if(type_of((V442))==t_cons){
	goto T1066;}
	V461= Cnil;
	goto T1065;
	goto T1066;
T1066:;
	V461= (VV[148]->s.s_dbind);
	goto T1065;
T1065:;
	if(V461==Cnil)goto T1064;
	V458= V461;
	goto T1055;
	goto T1064;
T1064:;}
	V458= (VV[147]->s.s_dbind);
	goto T1055;
T1055:;
	if(V458==Cnil)goto T1054;
	V453= V458;
	goto T1037;
	goto T1054;
T1054:;}
	V453= (VV[146]->s.s_dbind);
	goto T1037;
T1037:;
	if(V453==Cnil)goto T1036;
	{object V462 = V453;
	VMR23(V462)}
	goto T1036;
T1036:;}{object V463;
	if(type_of((V442))==t_fixnum||
type_of((V442))==t_bignum||
type_of((V442))==t_ratio||
type_of((V442))==t_shortfloat||
type_of((V442))==t_longfloat||
type_of((V442))==t_complex){
	goto T1070;}
	V463= Cnil;
	goto T1069;
	goto T1070;
T1070:;{object V464;
	base[0]= (V442);
	base[1]= VV[156];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk240)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1074;}
	V464= Cnil;
	goto T1073;
	goto T1074;
T1074:;{object V465;
	base[0]= (V442);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk241)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1080;}
	V465= Cnil;
	goto T1079;
	goto T1080;
T1080:;{object V466;
	if(type_of((V442))==t_ratio){
	goto T1085;}
	V466= Cnil;
	goto T1084;
	goto T1085;
T1085:;
	V466= (VV[152]->s.s_dbind);
	goto T1084;
T1084:;
	if(V466==Cnil)goto T1083;
	V465= V466;
	goto T1079;
	goto T1083;
T1083:;}{object V467;
	if(type_of((V442))==t_fixnum||type_of((V442))==t_bignum){
	goto T1089;}
	V467= Cnil;
	goto T1088;
	goto T1089;
T1089:;
	V467= (VV[153]->s.s_dbind);
	goto T1088;
T1088:;
	if(V467==Cnil)goto T1087;
	V465= V467;
	goto T1079;
	goto T1087;
T1087:;}
	V465= (VV[151]->s.s_dbind);
	goto T1079;
T1079:;
	if(V465==Cnil)goto T1078;
	V464= V465;
	goto T1073;
	goto T1078;
T1078:;}{object V468;
	if(type_of((V442))==t_shortfloat||type_of((V442))==t_longfloat){
	goto T1093;}
	V468= Cnil;
	goto T1092;
	goto T1093;
T1093:;
	V468= (VV[154]->s.s_dbind);
	goto T1092;
T1092:;
	if(V468==Cnil)goto T1091;
	V464= V468;
	goto T1073;
	goto T1091;
T1091:;}
	V464= (VV[150]->s.s_dbind);
	goto T1073;
T1073:;
	if(V464==Cnil)goto T1072;
	V463= V464;
	goto T1069;
	goto T1072;
T1072:;}{object V469;
	base[0]= (V442);
	vs_top=(vs_base=base+0)+1;
	Lcomplexp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1097;}
	V469= Cnil;
	goto T1096;
	goto T1097;
T1097:;
	V469= (VV[155]->s.s_dbind);
	goto T1096;
T1096:;
	if(V469==Cnil)goto T1095;
	V463= V469;
	goto T1069;
	goto T1095;
T1095:;}
	V463= (VV[149]->s.s_dbind);
	goto T1069;
T1069:;
	if(V463==Cnil)goto T1068;
	{object V470 = V463;
	VMR23(V470)}
	goto T1068;
T1068:;}
	{object V471 = (VV[38]->s.s_dbind);
	VMR23(V471)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-RETURNING-NIL	*/

static object LI40(V474,V475)

object V474;object V475;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{object V476 = Cnil;
	VMR24(V476)}
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-RETURNING-T	*/

static object LI41(V479,V480)

object V479;object V480;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{object V481 = Ct;
	VMR25(V481)}
	return Cnil;
}
/*	local entry for function MAKE-CLASS-PREDICATE	*/

static object LI42(V484,V485)

object V484;object V485;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{register object V486;
	object V487;
	base[2]= (V485);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk210)();
	vs_top=sup;
	V486= vs_base[0];
	if(!(((VV[157]->s.s_dbind))==(VV[158]))){
	goto T1104;}
	base[2]= (V486);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk242)(Lclptr242);
	vs_top=sup;
	V487= vs_base[0];
	goto T1102;
	goto T1104;
T1104:;
	if(type_of(V486)==t_structure){
	goto T1111;}
	goto T1109;
	goto T1111;
T1111:;
	if(!(((V486)->str.str_def)==(VV[159]))){
	goto T1109;}
	V488= STREF(object,(V486),4);
	goto T1107;
	goto T1109;
T1109:;{object V490;
	V490= (VV[45]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V486);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk194)();
	vs_top=sup;
	V491= vs_base[0];
	if(!((V490)==(CMPcar(V491)))){
	goto T1114;}}
	V488= CMPcar(((V486))->cc.cc_turbo[12]);
	goto T1107;
	goto T1114;
T1114:;
	base[2]= VV[46];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V488= vs_base[0];
	goto T1107;
T1107:;
	V492 = (VV[117]->s.s_dbind);
	V487= (V488)->v.v_self[fix(V492)];
	goto T1102;
T1102:;
	if(((V487))!=Cnil){
	goto T1120;}
	if(((V484))==((VV[160]->s.s_dbind))){
	goto T1123;}
	{object V493;
	object V494;
	object V495;
	V493= (VV[243]->s.s_gfdef);
	V494= list(2,VV[161],(V493));
	base[5]= VV[162];
	base[6]= Cnil;
	base[7]= make_cons(VV[57],Cnil);
	base[8]= make_cons((VV[160]->s.s_dbind),Cnil);
	base[9]= (V494);
	base[10]= VV[163];
	V495= simple_symlispcall(VV[216],base+5,6);
	V499= ({object _tmp=get(VV[244],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[244])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[244])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V500 = Cnil;
	V501 = V493;
	V502 = VV[164];
	(void)((
	V503 = V499,
	(type_of(V503) == t_sfun ?(*((V503)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V503)==t_vfun) ?
	(*((V503)->sfn.sfn_self)):
	(fcall.fun=(V503),fcalln))(V500,V501,V502)));
	base[5]= (V486);
	base[6]= (V495);
	(void)simple_symlispcall(VV[215],base+5,2);}
	goto T1123;
T1123:;
	{object V504;
	object V505;
	object V506;
	V504= (VV[245]->s.s_gfdef);
	V505= list(2,VV[161],(V504));
	base[5]= VV[162];
	base[6]= Cnil;
	base[7]= make_cons(VV[57],Cnil);
	base[8]= make_cons((V484),Cnil);
	base[9]= (V505);
	base[10]= VV[165];
	V506= simple_symlispcall(VV[216],base+5,6);
	V510= ({object _tmp=get(VV[244],sSsetf_function,Cnil);if (_tmp==Cnil) {int bs=((object)VV[244])->s.s_fillp+8;char *b=alloca(bs);snprintf(b,bs,"(SETF %-.*s)",bs-8,((object)VV[244])->s.s_self);FEundefined_function(make_simple_string(b));}_tmp;});
	V511 = Ct;
	V512 = V504;
	V513 = VV[164];
	(void)((
	V514 = V510,
	(type_of(V514) == t_sfun ?(*((V514)->sfn.sfn_self)):
	(fcall.argd=3,type_of(V514)==t_vfun) ?
	(*((V514)->sfn.sfn_self)):
	(fcall.fun=(V514),fcalln))(V511,V512,V513)));
	base[5]= (V486);
	base[6]= (V506);
	(void)simple_symlispcall(VV[215],base+5,2);}
	goto T1120;
T1120:;
	{object V515 = (V486);
	VMR26(V515)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for G5599	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[166];
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for (FAST-METHOD NO-APPLICABLE-METHOD (T))	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	{object V516;
	object V517;
	object V518;
	object V519;
	check_arg(4);
	V516=(base[0]);
	V517=(base[1]);
	V518=(base[2]);
	V519=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= VV[167];
	base[5]= VV[168];
	base[6]= (V518);
	base[7]= V519;
	vs_top=(vs_base=base+4)+4;
	Lcerror();
	vs_top=sup;
	base[4]= (V518);
	{object V522;
	V522= V519;
	 vs_top=base+5;
	 while(V522!=Cnil)
	 {vs_push((V522)->c.c_car);V522=(V522)->c.c_cdr;}
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
	{object V523;
	check_arg(1);
	V523=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[1];
	base[2]= (V523);
	base[3]= base0[0];
	base[4]= VV[122];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk246)();
	return;
	}
}
/*	local function DO-WRITER-DEFINITION	*/

static void L26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	{object V524;
	check_arg(1);
	V524=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[1];
	base[2]= (V524);
	base[3]= base0[0];
	base[4]= VV[121];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk246)();
	return;
	}
}
/*	local function DO-READER-DEFINITION	*/

static void L25(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	{object V525;
	check_arg(1);
	V525=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[1];
	base[2]= (V525);
	base[3]= base0[0];
	base[4]= VV[120];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk246)();
	return;
	}
}
/*	local function SET-VAL	*/

static void L17(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	{object V526;
	object V527;
	check_arg(2);
	V526=(base[0]);
	V527=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI197))(base0[1],base0[2],(V526),(V527));
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
	{object V528;
	check_arg(1);
	V528=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[0];
	base[2]= (V528);
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
	{object V529;
	object V530;
	check_arg(2);
	V529=(base[0]);
	V530=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI197))(base0[0],base0[1],(V529),(V530));
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
	{object V531;
	check_arg(1);
	V531=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]=VV[25]->s.s_gfdef;
	{object V532;
	object V533= (V531);
	if(V533==Cnil){
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	base[1]=V532=MMcons(Cnil,Cnil);
	goto T1177;
T1177:;
	base[3]= (V533->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk25)();
	vs_top=sup;
	(V532->c.c_car)= vs_base[0];
	if((V533=MMcdr(V533))==Cnil){
	vs_top=(vs_base=base+1)+1;
	return;}
	V532=MMcdr(V532)=MMcons(Cnil,Cnil);
	goto T1177;}
	}
}
/*	local function SET-SLOT	*/

static void L7(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	{object V534;
	object V535;
	check_arg(2);
	V534=(base[0]);
	V535=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI197))(VV[43],base0[3],(V534),(V535));
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
	{object V536;
	check_arg(1);
	V536=(base[0]);
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
	{object V537;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V537=(base[0]);
	vs_top=sup;
	base[1]= VV[10];
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
static void LnkT25(){ call_or_link(VV[25],(void **)(void *)&Lnk25);} /* FIND-CLASS */
static void LnkT246(){ call_or_link(VV[246],(void **)(void *)&Lnk246);} /* BOOTSTRAP-ACCESSOR-DEFINITION */
static void LnkT242(ptr) object *ptr;{ call_or_link_closure(VV[242],(void **)(void *)&Lnk242,(void **)(void *)&Lclptr242);} /* GENERIC-FUNCTION-METHODS */
static void LnkT241(){ call_or_link(VV[241],(void **)(void *)&Lnk241);} /* RATIONALP */
static void LnkT240(){ call_or_link(VV[240],(void **)(void *)&Lnk240);} /* TYPEP */
static void LnkT239(){ call_or_link(VV[239],(void **)(void *)&Lnk239);} /* ENSURE-CLASS */
static object  LnkTLI238(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[238],(void **)(void *)&LnkLI238,1,first,ap);va_end(ap);return V1;} /* SLOT-INITARGS-FROM-STRUCTURE-SLOTD */
static object  LnkTLI237(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[237],(void **)(void *)&LnkLI237,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-TYPE-SLOT-DESCRIPTION-LIST */
static object  LnkTLI236(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[236],(void **)(void *)&LnkLI236,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-TYPE-INCLUDED-TYPE-NAME */
static object  LnkTLI235(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[235],(void **)(void *)&LnkLI235,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-TYPE-P */
static object  LnkTLI234(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[234],(void **)(void *)&LnkLI234,1,first,ap);va_end(ap);return V1;} /* EVAL-FORM */
static void LnkT233(){ call_or_link(VV[233],(void **)(void *)&Lnk233);} /* STRUCTURE-SLOTD-INIT-FORM */
static object  LnkTLI232(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[232],(void **)(void *)&LnkLI232,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SLOTD-TYPE */
static object  LnkTLI231(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[231],(void **)(void *)&LnkLI231,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SLOTD-WRITER-FUNCTION */
static object  LnkTLI230(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[230],(void **)(void *)&LnkLI230,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SLOTD-READER-FUNCTION */
static object  LnkTLI229(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[229],(void **)(void *)&LnkLI229,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SLOTD-ACCESSOR-SYMBOL */
static object  LnkTLI228(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[228],(void **)(void *)&LnkLI228,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SLOTD-NAME */
static object  LnkTLI227(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[227],(void **)(void *)&LnkLI227,1,first,ap);va_end(ap);return V1;} /* WRAPPER-FOR-STRUCTURE */
static object  LnkTLI226(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[226],(void **)(void *)&LnkLI226,1,first,ap);va_end(ap);return V1;} /* BUILT-IN-WRAPPER-OF */
static object  LnkTLI225(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[225],(void **)(void *)&LnkLI225,first,ap);va_end(ap);return V1;} /* FIND-CLASS-FROM-CELL */
static object  LnkTLI224(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[224],(void **)(void *)&LnkLI224,first,ap);va_end(ap);return V1;} /* FIND-CLASS-CELL */
static object  LnkTLI223(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[223],(void **)(void *)&LnkLI223,1,first,ap);va_end(ap);return V1;} /* %STRUCTURE-NAME */
static object  LnkTLI222(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[222],(void **)(void *)&LnkLI222,1,first,ap);va_end(ap);return V1;} /* GET-BUILT-IN-WRAPPER-SYMBOL */
static object  LnkTLI221(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[221],(void **)(void *)&LnkLI221,1,first,ap);va_end(ap);return V1;} /* GET-BUILT-IN-CLASS-SYMBOL */
static void LnkT220(ptr) object *ptr;{ call_or_link_closure(VV[220],(void **)(void *)&Lnk220,(void **)(void *)&Lclptr220);} /* CLASS-WRAPPER */
static void LnkT218(ptr) object *ptr;{ call_or_link_closure(VV[218],(void **)(void *)&Lnk218,(void **)(void *)&Lclptr218);} /* CLASS-PREDICATE-NAME */
static object  LnkTLI217(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[217],(void **)(void *)&LnkLI217,2,first,ap);va_end(ap);return V1;} /* MAKE-CLASS-PREDICATE */
static object  LnkTLI214(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[214],(void **)(void *)&LnkLI214,first,ap);va_end(ap);return V1;} /* UPDATE-DFUN */
static void LnkT213(){ call_or_link(VV[213],(void **)(void *)&Lnk213);} /* FIND */
static void LnkT210(){ call_or_link(VV[210],(void **)(void *)&Lnk210);} /* ENSURE-GENERIC-FUNCTION */
static object  LnkTLI206(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[206],(void **)(void *)&LnkLI206,1,first,ap);va_end(ap);return V1;} /* SLOT-BOUNDP-SYMBOL */
static object  LnkTLI205(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[205],(void **)(void *)&LnkLI205,1,first,ap);va_end(ap);return V1;} /* SLOT-WRITER-SYMBOL */
static object  LnkTLI204(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[204],(void **)(void *)&LnkLI204,1,first,ap);va_end(ap);return V1;} /* SLOT-READER-SYMBOL */
static object  LnkTLI203(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[203],(void **)(void *)&LnkLI203,5,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-ACCESSOR-DEFINITIONS1 */
static void LnkT202(){ call_or_link(VV[202],(void **)(void *)&Lnk202);} /* MAKE-OPTIMIZED-STD-BOUNDP-METHOD-FUNCTION */
static void LnkT201(){ call_or_link(VV[201],(void **)(void *)&Lnk201);} /* MAKE-OPTIMIZED-STD-WRITER-METHOD-FUNCTION */
static void LnkT200(){ call_or_link(VV[200],(void **)(void *)&Lnk200);} /* MAKE-OPTIMIZED-STD-READER-METHOD-FUNCTION */
static object  LnkTLI199(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[199],(void **)(void *)&LnkLI199,6,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-MAKE-SLOT-DEFINITION */
static void LnkT198(){ call_or_link(VV[198],(void **)(void *)&Lnk198);} /* MAKE-CLASS-PREDICATE-NAME */
static object  LnkTLI197(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[197],(void **)(void *)&LnkLI197,4,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-SET-SLOT */
static void LnkT196(){ call_or_link(VV[196],(void **)(void *)&Lnk196);} /* LOAD-TRUENAME */
static object  LnkTLI195(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[195],(void **)(void *)&LnkLI195,2,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-SLOT-INDEX */
static void LnkT194(){ call_or_link(VV[194],(void **)(void *)&Lnk194);} /* CCLOSURE-ENV-NTHCDR */
static object  LnkTLI193(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[193],(void **)(void *)&LnkLI193,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-INITIALIZE-CLASS */
static object  LnkTLI192(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[192],(void **)(void *)&LnkLI192,5,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-MAKE-SLOT-DEFINITIONS */
static object  LnkTLI191(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[191],(void **)(void *)&LnkLI191,first,ap);va_end(ap);return V1;} /* ALLOCATE-FUNCALLABLE-INSTANCE */
static void LnkT190(){ call_or_link(VV[190],(void **)(void *)&Lnk190);} /* CANONICAL-SLOT-NAME */
static void LnkT189(){ call_or_link(VV[189],(void **)(void *)&Lnk189);} /* EARLY-COLLECT-INHERITANCE */
static object  LnkTLI188(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[188],(void **)(void *)&LnkLI188,1,first,ap);va_end(ap);return V1;} /* ECD-OTHER-INITARGS */
static object  LnkTLI187(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[187],(void **)(void *)&LnkLI187,1,first,ap);va_end(ap);return V1;} /* ECD-CANONICAL-SLOTS */
static object  LnkTLI186(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[186],(void **)(void *)&LnkLI186,1,first,ap);va_end(ap);return V1;} /* ECD-SUPERCLASS-NAMES */
static object  LnkTLI185(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[185],(void **)(void *)&LnkLI185,1,first,ap);va_end(ap);return V1;} /* ECD-SOURCE */
static object  LnkTLI184(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[184],(void **)(void *)&LnkLI184,1,first,ap);va_end(ap);return V1;} /* INFORM-TYPE-SYSTEM-ABOUT-STD-CLASS */
static object  LnkTLI25(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[25],(void **)(void *)&LnkLI25,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static object  LnkTLI183(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[183],(void **)(void *)&LnkLI183,1,first,ap);va_end(ap);return V1;} /* ECD-METACLASS */
static object  LnkTLI182(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[182],(void **)(void *)&LnkLI182,1,first,ap);va_end(ap);return V1;} /* ECD-CLASS-NAME */
static object  LnkTLI21(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[21],(void **)(void *)&LnkLI21,first,ap);va_end(ap);return V1;} /* ALLOCATE-STANDARD-INSTANCE */
static object  LnkTLI19(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[19],(void **)(void *)&LnkLI19,257,first,ap);va_end(ap);return V1;} /* EARLY-CLASS-SIZE */
static object  LnkTLI18(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[18],(void **)(void *)&LnkLI18,first,ap);va_end(ap);return V1;} /* MAKE-WRAPPER */
static object  LnkTLI181(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[181],(void **)(void *)&LnkLI181,2,first,ap);va_end(ap);return V1;} /* DO-SATISFIES-DEFTYPE */
static object  LnkTLI178(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[178],(void **)(void *)&LnkLI178,first,ap);va_end(ap);return V1;} /* MAKE-TYPE-PREDICATE-NAME */
static void LnkT177(ptr) object *ptr;{ call_or_link_closure(VV[177],(void **)(void *)&Lnk177,(void **)(void *)&Lclptr177);} /* CLASS-NAME */
static void LnkT175(ptr) object *ptr;{ call_or_link_closure(VV[175],(void **)(void *)&Lnk175,(void **)(void *)&Lclptr175);} /* CLASS-SLOTS */
static void LnkT174(ptr) object *ptr;{ call_or_link_closure(VV[174],(void **)(void *)&Lnk174,(void **)(void *)&Lclptr174);} /* CLASS-DEFSTRUCT-CONSTRUCTOR */
static object  LnkTLI173(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[173],(void **)(void *)&LnkLI173,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static object  LnkTLI172(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[172],(void **)(void *)&LnkLI172,2,first,ap);va_end(ap);return V1;} /* SET-FUNCALLABLE-INSTANCE-FUNCTION */
static object  LnkTLI171(){return call_proc0(VV[171],(void **)(void *)&LnkLI171);} /* ALLOCATE-FUNCALLABLE-INSTANCE-1 */
static void LnkT170(){ call_or_link(VV[170],(void **)(void *)&Lnk170);} /* MAKE-ARRAY */
static object  LnkTLI169(){return call_proc0(VV[169],(void **)(void *)&LnkLI169);} /* %%ALLOCATE-INSTANCE--CLASS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

