
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
	V5= (*(LnkLI167))();
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
	(void) (*Lnk168)();
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
	base[0]= (*(LnkLI169))();
	base[0]=MMcons(base[0],Cnil);
	V18= 
	make_cclosure_new(LC45,Cnil,base[0],Cdata);
	(void)((*(LnkLI170))((base[0]->c.c_car),V18));
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
	(void) (*Lnk168)();
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
	(void) (*Lnk172)(Lclptr172);
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
	(void) (*Lnk173)(Lclptr173);
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
	V37= (V29);
	V38= (V31);
	V39= (V35);
	base[2]= ((V27))->v.v_self[V34];
	base[3]= (V37);
	base[4]= (V38);
	base[5]= (V39);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk174)(Lclptr174);
	vs_top=sup;}}
	V34= (long)(V34)+1;
	goto T60;}
	goto T54;
T54:;
	{object V40 = (V31);
	VMR4(V40)}}
	goto T49;
T49:;
	base[2]= VV[11];
	base[4]= (V29);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk175)(Lclptr175);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	{object V41 = vs_base[0];
	VMR4(V41)}}
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
	{object V42=base[0]->c.c_cdr;
	base[2]= V42;}
	{object V44;
	object V45= base[2];
	if(V45==Cnil){
	V43= Cnil;
	goto T79;}
	base[3]=V44=MMcons(Cnil,Cnil);
	goto T80;
T80:;
	{register object V46;
	V46= (V45->c.c_car);
	{object V47;
	base[5]= Cnil;
	base[6]= VV[13];
	base[7]= (V46);
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (VV[14]->s.s_dbind);
	vs_top=(vs_base=base+4)+2;
	Lintern();
	vs_top=sup;
	V47= vs_base[0];
	if(!(((V46))==(VV[16]))){
	goto T90;}
	V48= VV[17];
	goto T88;
	goto T90;
T90:;
	V48= list(2,VV[18],list(2,VV[19],list(2,VV[20],(V46))));
	goto T88;
T88:;
	if(!(((V46))==(VV[16]))){
	goto T94;}
	V49= VV[22];
	goto T92;
	goto T94;
T94:;
	V49= VV[23];
	goto T92;
T92:;
	V50= list(2,VV[21],V49);
	V51= list(2,VV[24],(V47));
	(V44->c.c_car)= list(9,VV[15],(V47),V48,(V46),/* INLINE-ARGS */V50,/* INLINE-ARGS */V51,(V46),list(2,VV[25],list(2,VV[20],(V46))),(V46));}}
	if((V45=MMcdr(V45))==Cnil){
	V43= base[3];
	goto T79;}
	V44=MMcdr(V44)=MMcons(Cnil,Cnil);
	goto T80;}
	goto T79;
T79:;
	base[3]= make_cons(VV[12],V43);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function BOOTSTRAP-META-BRAID	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	bds_check;
	goto TTL;
TTL:;
	{object V53;
	V53= (VFUN_NARGS=1,(*(LnkLI176))(VV[26]));
	V55= VV[178];
	(void)((*(LnkLI177))(V55,V53));
	(void)((*(LnkLI179))(VV[26],(V53)));}
	{object V56;
	object V57;
	object V58;
	object V59;
	object V60;
	object V61;
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
	bds_bind(VV[27],Cnil);
	V56= Cnil;
	V57= Cnil;
	V58= Cnil;
	V59= Cnil;
	V60= Cnil;
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
	V74 = CMPmake_fixnum((long)(*(LnkLI19))(VV[28]));
	V56= (VFUN_NARGS=1,(*(LnkLI18))(V74));
	V57= (VFUN_NARGS=1,(*(LnkLI21))((V56)));
	(void)(((V56))->v.v_self[11]= ((V57)));
	(void)((*(LnkLI180))(V57,VV[28]));
	V77 = CMPmake_fixnum((long)(*(LnkLI19))(VV[29]));
	V58= (VFUN_NARGS=1,(*(LnkLI18))(V77));
	V59= (VFUN_NARGS=1,(*(LnkLI21))((V56)));
	(void)(((V58))->v.v_self[11]= ((V59)));
	(void)((*(LnkLI180))(V59,VV[29]));
	V80 = CMPmake_fixnum((long)(*(LnkLI19))(VV[30]));
	V60= (VFUN_NARGS=1,(*(LnkLI18))(V80));
	V61= (VFUN_NARGS=1,(*(LnkLI21))((V56)));
	(void)(((V60))->v.v_self[11]= ((V61)));
	(void)((*(LnkLI180))(V61,VV[30]));
	V83 = CMPmake_fixnum((long)(*(LnkLI19))(VV[31]));
	V62= (VFUN_NARGS=1,(*(LnkLI18))(V83));
	V63= (VFUN_NARGS=1,(*(LnkLI21))((V56)));
	(void)(((V62))->v.v_self[11]= ((V63)));
	(void)((*(LnkLI180))(V63,VV[31]));
	V86 = CMPmake_fixnum((long)(*(LnkLI19))(VV[32]));
	V64= (VFUN_NARGS=1,(*(LnkLI18))(V86));
	V65= (VFUN_NARGS=1,(*(LnkLI21))((V56)));
	(void)(((V64))->v.v_self[11]= ((V65)));
	(void)((*(LnkLI180))(V65,VV[32]));
	V89 = CMPmake_fixnum((long)(*(LnkLI19))(VV[33]));
	V66= (VFUN_NARGS=1,(*(LnkLI18))(V89));
	V67= (VFUN_NARGS=1,(*(LnkLI21))((V56)));
	(void)(((V66))->v.v_self[11]= ((V67)));
	(void)((*(LnkLI180))(V67,VV[33]));
	V92 = CMPmake_fixnum((long)(*(LnkLI19))(VV[34]));
	V68= (VFUN_NARGS=1,(*(LnkLI18))(V92));
	V69= (VFUN_NARGS=1,(*(LnkLI21))((V56)));
	(void)(((V68))->v.v_self[11]= ((V69)));
	(void)((*(LnkLI180))(V69,VV[34]));
	V95 = CMPmake_fixnum((long)(*(LnkLI19))(VV[35]));
	V70= (VFUN_NARGS=1,(*(LnkLI18))(V95));
	V71= (VFUN_NARGS=1,(*(LnkLI21))((V56)));
	(void)(((V70))->v.v_self[11]= ((V71)));
	(void)((*(LnkLI180))(V71,VV[35]));
	V72= (VV[17]->s.s_dbind);
	V73= (VFUN_NARGS=1,(*(LnkLI21))((V58)));
	(void)(((V72))->v.v_self[11]= ((V73)));
	(void)((*(LnkLI180))(V73,VV[16]));
	{object V100;
	object V101;
	V100= (VV[36]->s.s_dbind);
	V101= CMPcar((V100));
	goto T176;
T176:;
	if(!(((V100))==Cnil)){
	goto T177;}
	goto T172;
	goto T177;
T177:;
	{object V102;
	object V103;
	object V104;
	object V105;
	V102= (*(LnkLI181))((V101));
	V103= (*(LnkLI182))((V101));
	{object V106= (V103);
	if((V106!= VV[30]))goto T185;
	V104= (V60);
	goto T184;
	goto T185;
T185:;
	if((V106!= VV[28]))goto T186;
	V104= (V56);
	goto T184;
	goto T186;
T186:;
	if((V106!= VV[29]))goto T187;
	V104= (V58);
	goto T184;
	goto T187;
T187:;
	if((V106!= VV[31]))goto T188;
	V104= (V62);
	goto T184;
	goto T188;
T188:;
	if((V106!= VV[32]))goto T189;
	V104= (V64);
	goto T184;
	goto T189;
T189:;
	FEerror("The ECASE key value ~s is illegal.",1,V106);
	V104= Cnil;
	goto T184;}
	goto T184;
T184:;{object V107;
	V107= (VFUN_NARGS=2,(*(LnkLI25))((V102),Cnil));
	if(V107==Cnil)goto T191;
	V105= V107;
	goto T190;
	goto T191;
T191:;}
	V105= (VFUN_NARGS=1,(*(LnkLI21))((V104)));
	goto T190;
T190:;
	if(((V103))==(VV[28])){
	goto T194;}
	if(!(((V103))==(VV[29]))){
	goto T193;}
	goto T194;
T194:;
	(void)((*(LnkLI183))((V102)));
	goto T193;
T193:;
	(void)((*(LnkLI180))(V105,V102));}
	V100= CMPcdr((V100));
	V101= CMPcar((V100));
	goto T176;}
	goto T172;
T172:;
	{object V110;
	register object V111;
	V110= (VV[36]->s.s_dbind);
	V111= CMPcar((V110));
	goto T207;
T207:;
	if(!(((V110))==Cnil)){
	goto T208;}
	goto T203;
	goto T208;
T208:;
	{register object V112;
	register object V113;
	object V114;
	object V115;
	object V116;
	object V117;
	V112= (*(LnkLI181))((V111));
	V113= (*(LnkLI182))((V111));
	V114= (*(LnkLI184))((V111));
	V115= (*(LnkLI185))((V111));
	V116= (*(LnkLI186))((V111));
	V117= (*(LnkLI187))((V111));
	{object V118;
	base[2]= (V117);
	base[3]= VV[37];
	vs_top=(vs_base=base+2)+2;
	Lgetf();
	vs_top=sup;
	V118= vs_base[0];
	{register object V119;
	object V120;
	object V121;
	object V122;
	base[2]= (V112);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk188)();
	if(vs_base>=vs_top){vs_top=sup;goto T224;}
	V119= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T225;}
	V120= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T226;}
	V121= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T227;}
	V122= vs_base[0];
	vs_top=sup;
	goto T228;
	goto T224;
T224:;
	V119= Cnil;
	goto T225;
T225:;
	V120= Cnil;
	goto T226;
T226:;
	V121= Cnil;
	goto T227;
T227:;
	V122= Cnil;
	goto T228;
T228:;
	{register object V123;
	register object V124;
	object V125;
	V123= (VFUN_NARGS=1,(*(LnkLI25))((V112)));
	if(!(((V123))==((V61)))){
	goto T232;}
	V124= (V60);
	goto T230;
	goto T232;
T232:;
	if(!(((V123))==((V57)))){
	goto T235;}
	V124= (V56);
	goto T230;
	goto T235;
T235:;
	if(!(((V123))==((V59)))){
	goto T238;}
	V124= (V58);
	goto T230;
	goto T238;
T238:;
	if(!(((V123))==((V67)))){
	goto T241;}
	V124= (V66);
	goto T230;
	goto T241;
T241:;
	if(!(((V123))==((V69)))){
	goto T244;}
	V124= (V68);
	goto T230;
	goto T244;
T244:;
	if(!(((V123))==((V63)))){
	goto T247;}
	V124= (V62);
	goto T230;
	goto T247;
T247:;
	if(!(((V123))==((V65)))){
	goto T250;}
	V124= (V64);
	goto T230;
	goto T250;
T250:;
	if(!(((V123))==((V71)))){
	goto T253;}
	V124= (V70);
	goto T230;
	goto T253;
T253:;
	if(!(((V123))==((V73)))){
	goto T256;}
	V124= (V72);
	goto T230;
	goto T256;
T256:;
	V126 = CMPmake_fixnum((long)length((V119)));
	V124= (VFUN_NARGS=2,(*(LnkLI18))(V126,(V123)));
	goto T230;
T230:;
	V125= Cnil;
	if(!(((V112))==(Ct))){
	goto T259;}
	(VV[38]->s.s_dbind)= (V124);
	goto T259;
T259:;
	base[6]= Cnil;
	base[7]= VV[39];
	base[8]= symbol_name((V112));
	vs_top=(vs_base=base+6)+3;
	Lformat();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (VV[14]->s.s_dbind);
	vs_top=(vs_base=base+5)+2;
	Lintern();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V123);
	vs_top=(vs_base=base+4)+2;
	Lset();
	vs_top=sup;
	{register object V127;
	object V128;
	V127= (V119);
	V128= CMPcar((V127));
	goto T275;
T275:;
	if(!(((V127))==Cnil)){
	goto T276;}
	goto T271;
	goto T276;
T276:;
	base[5]= (V128);
	base[6]= VV[40];
	base[7]= VV[41];
	vs_top=(vs_base=base+5)+3;
	Lgetf();
	vs_top=sup;
	V129= vs_base[0];
	if((V129)==(VV[41])){
	goto T280;}
	base[5]= VV[42];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	goto T280;
T280:;
	V127= CMPcdr((V127));
	V128= CMPcar((V127));
	goto T275;}
	goto T271;
T271:;
	base[5]=VV[189]->s.s_gfdef;
	{object V131;
	object V132= (V119);
	if(V132==Cnil){
	V130= Cnil;
	goto T295;}
	base[4]=V131=MMcons(Cnil,Cnil);
	goto T296;
T296:;
	base[6]= (V132->c.c_car);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk189)();
	vs_top=sup;
	(V131->c.c_car)= vs_base[0];
	if((V132=MMcdr(V132))==Cnil){
	V130= base[4];
	goto T295;}
	V131=MMcdr(V131)=MMcons(Cnil,Cnil);
	goto T296;}
	goto T295;
T295:;
	(void)(((V124))->v.v_self[9]= (V130));
	(void)(((V124))->v.v_self[10]= (Cnil));
	if(!(((V113))==(VV[29]))){
	goto T302;}
	V125= (VFUN_NARGS=1,(*(LnkLI190))((V124)));
	goto T300;
	goto T302;
T302:;
	V125= (VFUN_NARGS=1,(*(LnkLI21))((V124)));
	goto T300;
T300:;
	V116= (*(LnkLI191))((V112),(V123),(V116),(V66),Cnil);
	V119= (*(LnkLI191))((V112),(V123),(V119),(V68),Ct);
	{object V133= (V113);
	if((V133!= VV[28])
	&& (V133!= VV[29]))goto T308;
	(void)((VFUN_NARGS=14,(*(LnkLI192))((V113),(V123),(V112),(V70),(V114),(V115),(V122),(V120),(V124),(V125),(V116),(V119),(V118),(V121))));
	goto T212;
	goto T308;
T308:;
	if((V133!= VV[31]))goto T309;
	(void)((VFUN_NARGS=10,(*(LnkLI192))((V113),(V123),(V112),(V70),(V114),(V115),(V122),(V120),(V124),(V125))));
	goto T212;
	goto T309;
T309:;
	if((V133!= VV[30]))goto T310;
	(void)((VFUN_NARGS=10,(*(LnkLI192))((V113),(V123),(V112),(V70),(V114),(V115),(V122),(V120),(V124),(V125))));
	goto T212;
	goto T310;
T310:;
	if((V133!= VV[32]))goto T311;
	(void)((VFUN_NARGS=9,(*(LnkLI192))((V113),(V123),(V112),(V70),(V114),(V115),(V122),(V120),(V124))));
	goto T212;
	goto T311;
T311:;}}}}}
	goto T212;
T212:;
	V110= CMPcdr((V110));
	V111= CMPcar((V110));
	goto T207;}
	goto T203;
T203:;
	{object V134;
	object V135;
	V134= (VFUN_NARGS=1,(*(LnkLI25))(VV[43]));
	if(type_of(V134)==t_structure){
	goto T323;}
	goto T321;
	goto T323;
T323:;
	if(!(((V134)->str.str_def)==(VV[44]))){
	goto T321;}
	V136= STREF(object,(V134),4);
	goto T319;
	goto T321;
T321:;{object V138;
	V138= (VV[45]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V134);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk193)();
	vs_top=sup;
	V139= vs_base[0];
	if(!((V138)==(CMPcar(V139)))){
	goto T326;}}
	V136= CMPcar(((V134))->cc.cc_turbo[12]);
	goto T319;
	goto T326;
T326:;
	base[4]= VV[46];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V136= vs_base[0];
	goto T319;
T319:;
	V140= (*(LnkLI194))(VV[28],VV[47]);
	V135= (V136)->v.v_self[fix(/* INLINE-ARGS */V140)];
	base[3]= (VFUN_NARGS=1,(*(LnkLI21))((V135)));
	base[4]= VV[48];
	vs_base=vs_top;
	(void) (*Lnk195)();
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
	{object V141 = (VV[54]->s.s_dbind);
	bds_unwind1;
	VMR6(V141)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-INITIALIZE-CLASS	*/

static object LI8(object V150,object V149,object V148,object V147,object V146,object V145,object V144,object V143,object V142,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{register object V151;
	object V152;
	object V153;
	object V154;
	object V155;
	object V156;
	object V157;
	object V158;
	object V159;
	object V160;
	object V161;
	object V162;
	va_start(ap,first);
	if(narg <9) too_few_arguments();
	base[0]= V150;
	base[1]= V149;
	V151= V148;
	V152= V147;
	V153= V146;
	V154= V145;
	V155= V144;
	V156= V143;
	V157= V142;
	narg = narg - 9;
	if (narg <= 0) goto T346;
	else {
	V158= first;}
	if (--narg <= 0) goto T347;
	else {
	V159= va_arg(ap,object);}
	if (--narg <= 0) goto T348;
	else {
	V160= va_arg(ap,object);}
	if (--narg <= 0) goto T349;
	else {
	V161= va_arg(ap,object);}
	if (--narg <= 0) goto T350;
	else {
	V162= va_arg(ap,object);}
	--narg; goto T351;
	goto T346;
T346:;
	V158= Cnil;
	goto T347;
T347:;
	V159= Cnil;
	goto T348;
T348:;
	V160= Cnil;
	goto T349;
T349:;
	V161= Cnil;
	goto T350;
T350:;
	V162= Cnil;
	goto T351;
T351:;
	base[14]= VV[55];
	base[15]= (V151);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[48];
	base[15]= (V153);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[49];
	V163= (VFUN_NARGS=1,(*(LnkLI25))(Ct));
	if(!((base[1])==(/* INLINE-ARGS */V163))){
	goto T367;}
	base[15]= Ct;
	goto T365;
	goto T367;
T367:;
	base[15]= list(2,VV[26],base[1]);
	goto T365;
T365:;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[35];
	{object V164;
	V164= (VFUN_NARGS=1,(*(LnkLI21))((V152)));
	V165= list(2,VV[56],base[1]);
	(void)((*(LnkLI196))(VV[35],(V164),VV[49],/* INLINE-ARGS */V165));
	(void)((*(LnkLI196))(VV[35],(V164),VV[57],base[1]));
	base[15]= (V164);}
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[58];
	base[16]= (V156);
	vs_top=(vs_base=base+16)+1;
	L9(base);
	vs_top=sup;
	base[15]= vs_base[0];
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[59];
	base[16]= CMPcdr((V156));
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
	base[16]= (V154);
	vs_top=(vs_base=base+16)+1;
	L9(base);
	vs_top=sup;
	base[15]= vs_base[0];
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[62];
	base[16]= (V155);
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
	base[15]= (V157);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[64];{object V166;
	{register object x= (V151),V168= (VV[65]->s.s_dbind);
	while(V168!=Cnil)
	if(eql(x,V168->c.c_car->c.c_car) &&V168->c.c_car != Cnil){
	V167= (V168->c.c_car);
	goto T405;
	}else V168=V168->c.c_cdr;
	V167= Cnil;}
	goto T405;
T405:;
	V166= CMPcadr(V167);
	if(V166==Cnil)goto T403;
	base[15]= V166;
	goto T402;
	goto T403;
T403:;}
	base[16]= (V151);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk197)();
	vs_top=sup;
	base[15]= vs_base[0];
	goto T402;
T402:;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[66];
	if((V161)==Cnil){
	V169= Cnil;
	goto T410;}
	V169= list(2,VV[67],(V161));
	goto T410;
T410:;
	if((V162)==Cnil){
	V170= Cnil;
	goto T411;}
	V170= list(2,VV[68],(V162));
	goto T411;
T411:;
	base[15]= append(V169,V170);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	{register object x= base[0],V171= VV[69];
	while(V171!=Cnil)
	if(x==(V171->c.c_car)){
	goto T414;
	}else V171=V171->c.c_cdr;
	goto T412;}
	goto T414;
T414:;
	base[14]= VV[70];
	base[15]= (V159);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[71];
	base[15]= (V160);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[72];
	base[15]= Cnil;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	goto T412;
T412:;
	if(!((base[0])==(VV[32]))){
	goto T425;}
	base[14]= VV[64];{object V173;
	{register object x= (V151),V175= (VV[65]->s.s_dbind);
	while(V175!=Cnil)
	if(eql(x,V175->c.c_car->c.c_car) &&V175->c.c_car != Cnil){
	V174= (V175->c.c_car);
	goto T432;
	}else V175=V175->c.c_cdr;
	V174= Cnil;}
	goto T432;
T432:;
	V173= CMPcadr(V174);
	if(V173==Cnil)goto T430;
	base[15]= V173;
	goto T429;
	goto T430;
T430:;}
	base[16]= (V151);
	vs_top=(vs_base=base+16)+1;
	(void) (*Lnk197)();
	vs_top=sup;
	base[15]= vs_base[0];
	goto T429;
T429:;
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
	goto T423;
	goto T425;
T425:;
	base[14]= VV[80];
	if((V158)!=Cnil){
	base[15]= (V158);
	goto T449;}
	base[15]= (VFUN_NARGS=1,(*(LnkLI21))((V157)));
	goto T449;
T449:;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	goto T423;
T423:;
	{object V176 = base[1];
	VMR7(V176)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BOOTSTRAP-MAKE-SLOT-DEFINITIONS	*/

static object LI11(V182,V183,V184,V185,V186)

object V182;object V183;object V184;object V185;object V186;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V187;
	V187= small_fixnum(-1);
	{object V188;
	object V189= (V184);
	if(V189==Cnil){
	{object V190 = Cnil;
	VMR8(V190)}}
	base[0]=V188=MMcons(Cnil,Cnil);
	goto T450;
T450:;
	V187= number_plus((V187),small_fixnum(1));
	(V188->c.c_car)= (*(LnkLI198))((V182),(V183),(V189->c.c_car),(V185),(V186),(V187));
	if((V189=MMcdr(V189))==Cnil){
	{object V192 = base[0];
	VMR8(V192)}}
	V188=MMcdr(V188)=MMcons(Cnil,Cnil);
	goto T450;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-MAKE-SLOT-DEFINITION	*/

static object LI15(V199,V200,V201,V202,V203,V204)

object V199;object V200;object V201;object V202;register object V203;register object V204;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	base[0]= (V201);
	{register object V205;
	if(((V203))==Cnil){
	goto T456;}
	base[1]= VV[34];
	goto T454;
	goto T456;
T456:;
	base[1]= VV[33];
	goto T454;
T454:;
	base[2]= (VFUN_NARGS=1,(*(LnkLI21))((V202)));
	base[4]= base[0];
	base[5]= VV[81];
	vs_top=(vs_base=base+4)+2;
	Lgetf();
	vs_top=sup;
	V205= vs_base[0];
	base[4]= VV[55];
	base[5]= (V205);
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
	base[4]= VV[49];{object V206;
	base[6]= VV[93];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	V206= vs_base[0];
	if(V206==Cnil)goto T491;
	base[5]= V206;
	goto T490;
	goto T491;
T491:;}
	base[5]= Ct;
	goto T490;
T490:;
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[51];{object V207;
	base[6]= VV[94];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	V207= vs_base[0];
	if(V207==Cnil)goto T497;
	base[5]= V207;
	goto T496;
	goto T497;
T497:;}
	base[5]= VV[95];
	goto T496;
T496:;
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[26];
	base[5]= (V200);
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	if(((V203))==Cnil){
	goto T503;}
	base[4]= VV[96];
	base[5]= (V204);
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[97];
	base[6]= Cnil;
	base[7]= (V205);
	base[8]= (V204);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk199)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[98];
	base[6]= Cnil;
	base[7]= (V205);
	base[8]= (V204);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk200)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[99];
	base[6]= Cnil;
	base[7]= (V205);
	base[8]= (V204);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk201)();
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
	{object V209;{object V210;
	base[4]= (V205);
	base[5]= (VV[101]->s.s_dbind);
	vs_top=(vs_base=base+4)+2;
	Lgethash();
	vs_top=sup;
	V210= vs_base[0];
	if(V210==Cnil)goto T531;
	V209= V210;
	goto T530;
	goto T531;
T531:;}
	{object V212;
	object V213;
	V212= (VV[101]->s.s_dbind);
	base[5]= VV[102];
	base[6]= VV[103];
	base[7]= VV[104];
	base[8]= small_fixnum(5);
	vs_top=(vs_base=base+5)+4;
	Lmake_hash_table();
	vs_top=sup;
	V213= vs_base[0];
	base[5]= V205;
	base[6]= (V212);
	base[7]= (V213);
	vs_top=(vs_base=base+5)+3;
	siLhash_set();
	vs_top=sup;
	V209= vs_base[0];}
	goto T530;
T530:;
	base[4]= V200;
	base[5]= V209;
	base[6]= base[2];
	vs_top=(vs_base=base+4)+3;
	siLhash_set();
	vs_top=sup;}
	goto T503;
T503:;
	if(!(((V199))==(VV[28]))){
	goto T547;}
	if(!(((V205))==(VV[71]))){
	goto T547;}
	if(((V203))==Cnil){
	goto T547;}
	(VV[105]->s.s_dbind)= base[2];
	goto T547;
T547:;
	if(!(((V199))==(VV[29]))){
	goto T555;}
	if(!(((V205))==(VV[71]))){
	goto T555;}
	if(((V203))==Cnil){
	goto T555;}
	(VV[106]->s.s_dbind)= base[2];
	goto T555;
T555:;
	{object V217 = base[2];
	VMR9(V217)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-ACCESSOR-DEFINITIONS	*/

static object LI18(V219)

object V219;
{	 VMB10 VMS10 VMV10
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[107],(V219));
	{register object V220;
	register object V221;
	V220= (VV[36]->s.s_dbind);
	V221= CMPcar((V220));
	goto T566;
T566:;
	if(!(((V220))==Cnil)){
	goto T567;}
	{object V222 = Cnil;
	bds_unwind1;
	VMR10(V222)}
	goto T567;
T567:;
	{object V223;
	object V224;
	V223= (*(LnkLI181))((V221));
	V224= (*(LnkLI182))((V221));
	if(((V224))==(VV[31])){
	goto T571;}
	{object V225;
	V225= (*(LnkLI186))((V221));
	{register object V226;
	register object V227;
	V226= (V225);
	V227= CMPcar((V226));
	goto T580;
T580:;
	if(!(((V226))==Cnil)){
	goto T581;}
	goto T571;
	goto T581;
T581:;
	{register object V228;
	register object V229;
	register object V230;
	base[3]= (V227);
	base[4]= VV[81];
	vs_top=(vs_base=base+3)+2;
	Lgetf();
	vs_top=sup;
	V228= vs_base[0];
	base[3]= (V227);
	base[4]= VV[89];
	vs_top=(vs_base=base+3)+2;
	Lgetf();
	vs_top=sup;
	V229= vs_base[0];
	base[3]= (V227);
	base[4]= VV[91];
	vs_top=(vs_base=base+3)+2;
	Lgetf();
	vs_top=sup;
	V230= vs_base[0];
	(void)((*(LnkLI202))((V223),(V228),(V229),(V230),Cnil));
	V231= (*(LnkLI203))((V228));
	V232= make_cons(/* INLINE-ARGS */V231,Cnil);
	V233= (*(LnkLI204))((V228));
	V234= make_cons(/* INLINE-ARGS */V233,Cnil);
	V235= (*(LnkLI205))((V228));
	V236= make_cons(/* INLINE-ARGS */V235,Cnil);
	(void)((*(LnkLI202))(VV[108],(V228),/* INLINE-ARGS */V232,/* INLINE-ARGS */V234,/* INLINE-ARGS */V236));}
	V226= CMPcdr((V226));
	V227= CMPcar((V226));
	goto T580;}}}
	goto T571;
T571:;
	V220= CMPcdr((V220));
	V221= CMPcar((V220));
	goto T566;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for BOOTSTRAP-ACCESSOR-DEFINITION	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{register object V237;
	object V238;
	object V239;
	object V240;
	check_arg(4);
	V237=(base[0]);
	V238=(base[1]);
	V239=(base[2]);
	V240=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V241;
	object V242;
	object V243;
	object V244;
	object V245;
	{object V246= (V240);
	if((V246!= VV[120]))goto T607;
	base[4]= VV[109];
	base[5]= (VV[206]->s.s_gfdef);
	base[6]= make_cons((V237),Cnil);
	base[7]= make_cons((V237),Cnil);
	base[8]= VV[110];
	vs_top=(vs_base=base+4)+5;
	goto T606;
	goto T607;
T607:;
	if((V246!= VV[121]))goto T613;
	base[4]= VV[111];
	base[5]= (VV[207]->s.s_gfdef);
	base[6]= list(2,VV[112],(V237));
	base[7]= list(2,Ct,(V237));
	base[8]= VV[113];
	vs_top=(vs_base=base+4)+5;
	goto T606;
	goto T613;
T613:;
	if((V246!= VV[122]))goto T619;
	base[4]= VV[114];
	base[5]= (VV[208]->s.s_gfdef);
	base[6]= make_cons((V237),Cnil);
	base[7]= make_cons((V237),Cnil);
	base[8]= VV[115];
	vs_top=(vs_base=base+4)+5;
	goto T606;
	goto T619;
T619:;
	FEerror("The ECASE key value ~s is illegal.",1,V246);
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	goto T606;}
	goto T606;
T606:;
	if(vs_base>=vs_top){vs_top=sup;goto T625;}
	V241= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T626;}
	V242= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T627;}
	V243= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T628;}
	V244= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T629;}
	V245= vs_base[0];
	vs_top=sup;
	goto T630;
	goto T625;
T625:;
	V241= Cnil;
	goto T626;
T626:;
	V242= Cnil;
	goto T627;
T627:;
	V243= Cnil;
	goto T628;
T628:;
	V244= Cnil;
	goto T629;
T629:;
	V245= Cnil;
	goto T630;
T630:;
	{register object V247;
	base[4]= (V238);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk209)();
	vs_top=sup;
	V247= vs_base[0];
	base[4]= (V244);
	if(type_of(V247)==t_structure){
	goto T642;}
	goto T640;
	goto T642;
T642:;
	if(!(((V247)->str.str_def)==(VV[116]))){
	goto T640;}
	V248= STREF(object,(V247),4);
	goto T638;
	goto T640;
T640:;{object V250;
	V250= (VV[45]->s.s_dbind);
	base[6]= small_fixnum(14);
	base[7]= (V247);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk193)();
	vs_top=sup;
	V251= vs_base[0];
	if(!((V250)==(CMPcar(V251)))){
	goto T645;}}
	V248= CMPcar(((V247))->cc.cc_turbo[12]);
	goto T638;
	goto T645;
T645:;
	base[6]= VV[46];
	vs_top=(vs_base=base+6)+1;
	Lerror();
	vs_top=sup;
	V248= vs_base[0];
	goto T638;
T638:;
	base[5]= (V248)->v.v_self[fix((VV[117]->s.s_dbind))];
	base[6]= VV[118];
	base[7]= (VV[210]->s.s_gfdef);
	base[8]= VV[102];
	base[9]= (VV[211]->s.s_gfdef);
	vs_top=(vs_base=base+4)+6;
	(void) (*Lnk212)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T634;}
	{register object x= (V238),V252= (VV[119]->s.s_dbind);
	while(V252!=Cnil)
	if(equal(x,V252->c.c_car->c.c_car) &&V252->c.c_car != Cnil){
	goto T656;
	}else V252=V252->c.c_cdr;}
	base[4]= (VFUN_NARGS=1,(*(LnkLI213))((V247)));
	vs_top=(vs_base=base+4)+1;
	return;
	goto T656;
T656:;
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;
	goto T634;
T634:;
	base[4]=(VV[214]->s.s_gfdef);
	base[5]= (V247);
	base[7]=(VV[215]->s.s_gfdef);
	base[8]= (V241);
	base[9]= Cnil;
	base[10]= (V243);
	base[11]= (V244);
	base[13]= (V237);
	base[14]= (V239);
	vs_top=(vs_base=base+13)+2;
	{object _funobj = (V242);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[12]= vs_base[0];
	base[13]= (V245);
	base[14]= (V239);
	base[6]= simple_lispcall(base+7,7);
	lispcall(base+4,2);
	return;}}
	}
}
/*	local entry for function BOOTSTRAP-ACCESSOR-DEFINITIONS1	*/

static object LI24(V258,V259,V260,V261,V262)

object V258;object V259;object V260;object V261;object V262;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	base[0]= (V259);
	base[1]= (V258);
	{register object V263;
	register object V264;
	V263= (V260);
	V264= CMPcar((V263));
	goto T673;
T673:;
	if(!(((V263))==Cnil)){
	goto T674;}
	goto T669;
	goto T674;
T674:;
	base[3]= (V264);
	vs_top=(vs_base=base+3)+1;
	L25(base);
	vs_top=sup;
	V263= CMPcdr((V263));
	V264= CMPcar((V263));
	goto T673;}
	goto T669;
T669:;
	{register object V265;
	register object V266;
	V265= (V261);
	V266= CMPcar((V265));
	goto T689;
T689:;
	if(!(((V265))==Cnil)){
	goto T690;}
	goto T685;
	goto T690;
T690:;
	base[3]= (V266);
	vs_top=(vs_base=base+3)+1;
	L26(base);
	vs_top=sup;
	V265= CMPcdr((V265));
	V266= CMPcar((V265));
	goto T689;}
	goto T685;
T685:;
	{register object V267;
	register object V268;
	V267= (V262);
	V268= CMPcar((V267));
	goto T704;
T704:;
	if(!(((V267))==Cnil)){
	goto T705;}
	{object V269 = Cnil;
	VMR12(V269)}
	goto T705;
T705:;
	base[3]= (V268);
	vs_top=(vs_base=base+3)+1;
	L27(base);
	vs_top=sup;
	V267= CMPcdr((V267));
	V268= CMPcar((V267));
	goto T704;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-CLASS-PREDICATES	*/

static object LI28(V271)

object V271;
{	 VMB13 VMS13 VMV13
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[107],(V271));
	{register object V272;
	register object V273;
	V272= (VV[36]->s.s_dbind);
	V273= CMPcar((V272));
	goto T719;
T719:;
	if(!(((V272))==Cnil)){
	goto T720;}
	{object V274 = Cnil;
	bds_unwind1;
	VMR13(V274)}
	goto T720;
T720:;
	{register object V275;
	register object V276;
	V275= (*(LnkLI181))((V273));
	V276= (VFUN_NARGS=1,(*(LnkLI25))((V275)));
	{register object V277;
	register object V278;
	V277= (V275);
	base[5]= (V276);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk217)(Lclptr217);
	vs_top=sup;
	V279= vs_base[0];
	V278= (*(LnkLI216))((V276),V279);
	(void)((*(LnkLI218))((V278),(V277)));}}
	V272= CMPcdr((V272));
	V273= CMPcar((V272));
	goto T719;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-BUILT-IN-CLASSES	*/

static object LI29()

{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{register object V280;
	object V281;
	V280= (VV[123]->s.s_dbind);
	V281= CMPcar((V280));
	goto T740;
T740:;
	if(!(((V280))==Cnil)){
	goto T741;}
	goto T736;
	goto T741;
T741:;
	{register object V282;
	register object V283;
	V282= CMPcadr((V281));
	V283= CMPcar((V282));
	goto T749;
T749:;
	if(!(((V282))==Cnil)){
	goto T750;}
	goto T745;
	goto T750;
T750:;
	if(((V283))==(Ct)){
	goto T754;}
	{register object x= (V283),V284= (VV[123]->s.s_dbind);
	while(V284!=Cnil)
	if(EQ(x,V284->c.c_car->c.c_car) &&V284->c.c_car != Cnil){
	goto T754;
	}else V284=V284->c.c_cdr;}
	base[3]= VV[124];
	base[4]= CMPcar((V281));
	base[5]= (V283);
	base[6]= (V283);
	vs_top=(vs_base=base+3)+4;
	Lerror();
	vs_top=sup;
	goto T754;
T754:;
	V282= CMPcdr((V282));
	V283= CMPcar((V282));
	goto T749;}
	goto T745;
T745:;
	V280= CMPcdr((V280));
	V281= CMPcar((V280));
	goto T740;}
	goto T736;
T736:;
	{object V285;
	object V286;
	V285= (VFUN_NARGS=1,(*(LnkLI25))(VV[31]));
	base[2]= (V285);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk219)(Lclptr219);
	vs_top=sup;
	V286= vs_base[0];
	{register object V287;
	object V288;
	V287= (VV[123]->s.s_dbind);
	V288= CMPcar((V287));
	goto T780;
T780:;
	if(!(((V287))==Cnil)){
	goto T781;}
	goto T773;
	goto T781;
T781:;
	{object V289;
	V289= (VFUN_NARGS=1,(*(LnkLI21))((V286)));
	{object V290;
	V290= CMPcar((V288));
	(void)((*(LnkLI180))(V289,(V290)));}}
	V287= CMPcdr((V287));
	V288= CMPcar((V287));
	goto T780;}}
	goto T773;
T773:;
	{object V292;
	base[0]= (VFUN_NARGS=1,(*(LnkLI25))(VV[35]));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk219)(Lclptr219);
	vs_top=sup;
	V292= vs_base[0];
	{register object V293;
	object V294;
	V293= (VV[123]->s.s_dbind);
	V294= CMPcar((V293));
	goto T799;
T799:;
	if(!(((V293))==Cnil)){
	goto T800;}
	goto T793;
	goto T800;
T800:;
	{object V295;
	object V296;
	object V297;
	object V298;
	register object V299;
	register object V300;
	V295= Cnil;
	V296= Cnil;
	V297= Cnil;
	V298= Cnil;
	V299= Cnil;
	V300= Cnil;
	V300= (V294);
	V299= CMPcar((V300));
	V300= CMPcdr((V300));
	V298= CMPcar((V300));
	V300= CMPcdr((V300));
	V297= CMPcar((V300));
	V300= CMPcdr((V300));
	V296= CMPcar((V300));
	V300= CMPcdr((V300));
	V295= CMPcar((V300));
	{object V301;
	register object V302;
	V301= (VFUN_NARGS=1,(*(LnkLI25))((V299)));
	V302= (VFUN_NARGS=2,(*(LnkLI18))(small_fixnum(0),(V301)));
	base[3]= (*(LnkLI220))((V299));
	base[4]= (V301);
	vs_top=(vs_base=base+3)+2;
	Lset();
	vs_top=sup;
	base[3]= (*(LnkLI221))((V299));
	base[4]= (V302);
	vs_top=(vs_base=base+3)+2;
	Lset();
	vs_top=sup;
	(void)(((V302))->v.v_self[9]= (Cnil));
	(void)(((V302))->v.v_self[10]= (Cnil));
	V303= make_cons((V299),(V296));
	(void)((VFUN_NARGS=10,(*(LnkLI192))(VV[31],(V301),(V299),(V292),Cnil,(V298),(V297),/* INLINE-ARGS */V303,(V302),(V295))));}}
	V293= CMPcdr((V293));
	V294= CMPcar((V293));
	goto T799;}}
	goto T793;
T793:;
	{register object V304;
	object V305;
	V304= (VV[123]->s.s_dbind);
	V305= CMPcar((V304));
	goto T845;
T845:;
	if(!(((V304))==Cnil)){
	goto T846;}
	{object V306 = Cnil;
	VMR14(V306)}
	goto T846;
T846:;
	{object V307;
	object V308;
	V307= CMPcar((V305));
	V308= (VFUN_NARGS=1,(*(LnkLI25))((V307)));
	{object V310;
	base[4]= (V308);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk217)(Lclptr217);
	vs_top=sup;
	V311= vs_base[0];
	V310= (*(LnkLI216))((V308),V311);
	(void)((*(LnkLI218))((V310),V307));}}
	V304= CMPcdr((V304));
	V305= CMPcar((V304));
	goto T845;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WRAPPER-FOR-STRUCTURE	*/

static object LI30(V313)

object V313;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{register object V314;
	if(type_of((V313))==t_structure){
	goto T862;}
	V314= Cnil;
	goto T861;
	goto T862;
T862:;
	V314= ((V313))->str.str_def->str.str_self[0];
	goto T861;
T861:;
	if(!(type_of((V314))==t_symbol)){
	goto T864;}
	if(!(((V314))==(VV[1]))){
	goto T868;}
	{object V315 = STREF(object,(V313),0);
	VMR15(V315)}
	goto T868;
T868:;
	if(!(((V314))==((VV[125]->s.s_dbind)))){
	goto T871;}
	{object V316 = (VV[126]->s.s_dbind);
	VMR15(V316)}
	goto T871;
T871:;
	if(!(((V314))==((VV[127]->s.s_dbind)))){
	goto T874;}
	{object V317 = (VV[128]->s.s_dbind);
	VMR15(V317)}
	goto T874;
T874:;
	(VV[127]->s.s_dbind)= (VV[125]->s.s_dbind);
	(VV[128]->s.s_dbind)= (VV[126]->s.s_dbind);
	goto T864;
T864:;
	{object V318;
	object V319;
	object V320;
	V318= (VFUN_NARGS=1,(*(LnkLI223))((V314)));{object V321;
	V321= CMPcar((V318));
	if(V321==Cnil)goto T881;
	V319= V321;
	goto T880;
	goto T881;
T881:;}
	V319= (VFUN_NARGS=2,(*(LnkLI224))((V314),(V318)));
	goto T880;
T880:;
	if(((V319))==Cnil){
	goto T885;}
	base[3]= (V319);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk219)(Lclptr219);
	vs_top=sup;
	V320= vs_base[0];
	goto T883;
	goto T885;
T885:;
	V320= (VV[38]->s.s_dbind);
	goto T883;
T883:;
	if(!(type_of((V314))==t_symbol)){
	goto T888;}
	(VV[125]->s.s_dbind)= (V314);
	(VV[126]->s.s_dbind)= (V320);
	goto T888;
T888:;
	{object V322 = (V320);
	VMR15(V322)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BUILT-IN-OR-STRUCTURE-WRAPPER1	*/

static object LI31(V324)

object V324;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{object V325;{object V326;
	V326= (*(LnkLI225))((V324));
	if(V326==Cnil)goto T895;
	V325= V326;
	goto T894;
	goto T895;
T895:;}
	V325= (VV[38]->s.s_dbind);
	goto T894;
T894:;{object V327;
	if(((V325))==((VV[38]->s.s_dbind))){
	goto T899;}
	V327= Cnil;
	goto T898;
	goto T899;
T899:;
	if(type_of((V324))==t_structure){
	goto T901;}
	V327= Cnil;
	goto T898;
	goto T901;
T901:;
	{object V328;
	object V329;
	base[2]= (V324);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V328= vs_base[0];
	V329= (VFUN_NARGS=2,(*(LnkLI25))((V328),Cnil));
	if((V329)==Cnil){
	V327= Cnil;
	goto T898;}
	base[2]= (V329);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk219)(Lclptr219);
	vs_top=sup;
	V327= vs_base[0];}
	goto T898;
T898:;
	if(V327==Cnil)goto T897;
	{object V330 = V327;
	VMR16(V330)}
	goto T897;
T897:;}
	{object V331 = (V325);
	VMR16(V331)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLASS-OF	*/

static object LI32(V333)

register object V333;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if(type_of(V333)==t_structure){
	goto T911;}
	goto T909;
	goto T911;
T911:;
	if(!(((V333)->str.str_def)==(VV[129]))){
	goto T909;}
	V334= STREF(object,(V333),0);
	goto T907;
	goto T909;
T909:;{object V336;
	V336= (VV[45]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V333);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk193)();
	vs_top=sup;
	V337= vs_base[0];
	if(!((V336)==(CMPcar(V337)))){
	goto T914;}}
	V334= CMPcar(((V333))->cc.cc_turbo[13]);
	goto T907;
	goto T914;
T914:;
	if(!(type_of((V333))==t_structure)){
	goto T920;}
	V334= (*(LnkLI226))((V333));
	goto T907;
	goto T920;
T920:;
	if(!(type_of((V333))==t_symbol)){
	goto T923;}
	if(((V333))==Cnil){
	goto T926;}
	V334= (VV[130]->s.s_dbind);
	goto T907;
	goto T926;
T926:;
	V334= (VV[131]->s.s_dbind);
	goto T907;
	goto T923;
T923:;
	V334= (*(LnkLI225))((V333));
	goto T907;
T907:;
	{object V338 = (V334)->v.v_self[11];
	VMR17(V338)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WRAPPER-OF	*/

static object LI33(V340)

register object V340;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	if(type_of(V340)==t_structure){
	goto T931;}
	goto T929;
	goto T931;
T931:;
	if(!(((V340)->str.str_def)==(VV[132]))){
	goto T929;}
	{object V342 = STREF(object,(V340),0);
	VMR18(V342)}
	goto T929;
T929:;{object V343;
	V343= (VV[45]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V340);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk193)();
	vs_top=sup;
	V344= vs_base[0];
	if(!((V343)==(CMPcar(V344)))){
	goto T934;}}
	{object V345 = CMPcar(((V340))->cc.cc_turbo[13]);
	VMR18(V345)}
	goto T934;
T934:;
	if(!(type_of((V340))==t_structure)){
	goto T940;}
	{object V346 = (*(LnkLI226))((V340));
	VMR18(V346)}
	goto T940;
T940:;
	if(!(type_of((V340))==t_symbol)){
	goto T943;}
	if(((V340))==Cnil){
	goto T946;}
	{object V347 = (VV[130]->s.s_dbind);
	VMR18(V347)}
	goto T946;
T946:;
	{object V348 = (VV[131]->s.s_dbind);
	VMR18(V348)}
	goto T943;
T943:;
	{object V349 = (*(LnkLI225))((V340));
	VMR18(V349)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for STRUCTURE-WRAPPER	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V350;
	check_arg(1);
	V350=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(type_of((V350))==t_structure){
	goto T950;}
	V351= Cnil;
	goto T949;
	goto T950;
T950:;
	V351= ((V350))->str.str_def->str.str_self[0];
	goto T949;
T949:;
	base[1]= (VFUN_NARGS=1,(*(LnkLI25))(V351));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk219)(Lclptr219);
	return;
	}
}
/*	local entry for function EVAL-FORM	*/

static object LI36(V353)

object V353;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	base[0]=MMcons((V353),Cnil);
	{object V354 = 
	make_cclosure_new(LC47,Cnil,base[0],Cdata);
	VMR20(V354)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SLOT-INITARGS-FROM-STRUCTURE-SLOTD	*/

static object LI37(V356)

register object V356;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	base[0]= VV[81];
	base[1]= (*(LnkLI227))((V356));
	base[2]= VV[133];
	base[3]= (*(LnkLI228))((V356));
	base[4]= VV[134];
	base[5]= (*(LnkLI229))((V356));
	base[6]= VV[135];
	base[7]= (*(LnkLI230))((V356));
	base[8]= VV[93];{object V357;
	V357= (*(LnkLI231))((V356));
	if(V357==Cnil)goto T962;
	base[9]= V357;
	goto T961;
	goto T962;
T962:;}
	base[9]= Ct;
	goto T961;
T961:;
	base[10]= VV[83];
	base[12]= (V356);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk232)();
	vs_top=sup;
	base[11]= vs_base[0];
	base[12]= VV[85];
	base[14]= (V356);
	vs_top=(vs_base=base+14)+1;
	(void) (*Lnk232)();
	vs_top=sup;
	V358= vs_base[0];
	base[13]= (*(LnkLI233))(V358);
	vs_top=(vs_base=base+0)+14;
	Llist();
	vs_top=sup;
	{object V359 = vs_base[0];
	VMR21(V359)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for FIND-STRUCTURE-CLASS	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	bds_check;
	{register object V360;
	check_arg(1);
	V360=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((*(LnkLI234))((V360)))==Cnil){
	goto T972;}
	if(((VV[136]->s.s_dbind))==((V360))){
	goto T975;}
	bds_bind(VV[136],(V360));
	base[2]= (V360);
	base[3]= VV[137];
	base[4]= VV[32];
	base[5]= VV[81];
	base[6]= (V360);
	base[7]= VV[138];
	if(((*(LnkLI235))((V360)))==Cnil){
	goto T985;}
	V361= (*(LnkLI235))((V360));
	base[8]= make_cons(/* INLINE-ARGS */V361,Cnil);
	goto T983;
	goto T985;
T985:;
	base[8]= Cnil;
	goto T983;
T983:;
	base[9]= VV[139];
	V364= (*(LnkLI236))((V360));
	{object V362;
	object V363= /* INLINE-ARGS */V364;
	if(V363==Cnil){
	base[10]= Cnil;
	goto T988;}
	base[11]=V362=MMcons(Cnil,Cnil);
	goto T989;
T989:;
	(V362->c.c_car)= (*(LnkLI237))((V363->c.c_car));
	if((V363=MMcdr(V363))==Cnil){
	base[10]= base[11];
	goto T988;}
	V362=MMcdr(V362)=MMcons(Cnil,Cnil);
	goto T989;}
	goto T988;
T988:;
	vs_top=(vs_base=base+2)+9;
	(void) (*Lnk238)();
	bds_unwind1;
	return;
	goto T975;
T975:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T972;
T972:;
	base[1]= VV[140];
	base[2]= (V360);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
/*	local entry for function BUILT-IN-WRAPPER-OF	*/

static object LI39(V366)

register object V366;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;{object V367;
	if(type_of((V366))==t_symbol){
	goto T995;}
	V367= Cnil;
	goto T994;
	goto T995;
T995:;{object V368;
	if(((V366))==Cnil){
	goto T999;}
	V368= Cnil;
	goto T998;
	goto T999;
T999:;
	V368= (VV[131]->s.s_dbind);
	goto T998;
T998:;
	if(V368==Cnil)goto T997;
	V367= V368;
	goto T994;
	goto T997;
T997:;}
	V367= (VV[130]->s.s_dbind);
	goto T994;
T994:;
	if(V367==Cnil)goto T993;
	{object V369 = V367;
	VMR23(V369)}
	goto T993;
T993:;}{object V370;
	if(type_of((V366))==t_character){
	goto T1003;}
	V370= Cnil;
	goto T1002;
	goto T1003;
T1003:;
	V370= (VV[141]->s.s_dbind);
	goto T1002;
T1002:;
	if(V370==Cnil)goto T1001;
	{object V371 = V370;
	VMR23(V371)}
	goto T1001;
T1001:;}{object V372;
	if(type_of((V366))==t_array||
type_of((V366))==t_vector||
type_of((V366))==t_string||
type_of((V366))==t_bitvector){
	goto T1007;}
	V372= Cnil;
	goto T1006;
	goto T1007;
T1007:;{object V373;
	if(type_of((V366))==t_vector||
type_of((V366))==t_string||
type_of((V366))==t_bitvector){
	goto T1011;}
	V373= Cnil;
	goto T1010;
	goto T1011;
T1011:;{object V374;
	if((type_of((V366))==t_bitvector)){
	goto T1015;}
	V374= Cnil;
	goto T1014;
	goto T1015;
T1015:;
	V374= (VV[144]->s.s_dbind);
	goto T1014;
T1014:;
	if(V374==Cnil)goto T1013;
	V373= V374;
	goto T1010;
	goto T1013;
T1013:;}{object V375;
	if(type_of((V366))==t_string){
	goto T1019;}
	V375= Cnil;
	goto T1018;
	goto T1019;
T1019:;
	V375= (VV[145]->s.s_dbind);
	goto T1018;
T1018:;
	if(V375==Cnil)goto T1017;
	V373= V375;
	goto T1010;
	goto T1017;
T1017:;}
	V373= (VV[143]->s.s_dbind);
	goto T1010;
T1010:;
	if(V373==Cnil)goto T1009;
	V372= V373;
	goto T1006;
	goto T1009;
T1009:;}
	V372= (VV[142]->s.s_dbind);
	goto T1006;
T1006:;
	if(V372==Cnil)goto T1005;
	{object V376 = V372;
	VMR23(V376)}
	goto T1005;
T1005:;}{object V377;
	if(!(type_of(V366)==t_cons||(V366)==Cnil)){
	goto T1025;}
	goto T1023;
	goto T1025;
T1025:;
	if(type_of(V366)==t_vector||
type_of(V366)==t_string||
type_of(V366)==t_bitvector){
	goto T1023;}
	V377= Cnil;
	goto T1022;
	goto T1023;
T1023:;{object V379;
	if(type_of((V366))==t_vector||
type_of((V366))==t_string||
type_of((V366))==t_bitvector){
	goto T1029;}
	V379= Cnil;
	goto T1028;
	goto T1029;
T1029:;{object V380;
	if((type_of((V366))==t_bitvector)){
	goto T1033;}
	V380= Cnil;
	goto T1032;
	goto T1033;
T1033:;
	V380= (VV[144]->s.s_dbind);
	goto T1032;
T1032:;
	if(V380==Cnil)goto T1031;
	V379= V380;
	goto T1028;
	goto T1031;
T1031:;}{object V381;
	if(type_of((V366))==t_string){
	goto T1037;}
	V381= Cnil;
	goto T1036;
	goto T1037;
T1037:;
	V381= (VV[145]->s.s_dbind);
	goto T1036;
T1036:;
	if(V381==Cnil)goto T1035;
	V379= V381;
	goto T1028;
	goto T1035;
T1035:;}
	V379= (VV[143]->s.s_dbind);
	goto T1028;
T1028:;
	if(V379==Cnil)goto T1027;
	V377= V379;
	goto T1022;
	goto T1027;
T1027:;}{object V382;
	if(!(type_of(V366)==t_cons)){
	goto T1043;}
	goto T1041;
	goto T1043;
T1043:;
	if((V366)==Cnil){
	goto T1041;}
	V382= Cnil;
	goto T1040;
	goto T1041;
T1041:;{object V384;
	if(((V366))==Cnil){
	goto T1047;}
	V384= Cnil;
	goto T1046;
	goto T1047;
T1047:;
	V384= (VV[131]->s.s_dbind);
	goto T1046;
T1046:;
	if(V384==Cnil)goto T1045;
	V382= V384;
	goto T1040;
	goto T1045;
T1045:;}{object V385;
	if(type_of((V366))==t_cons){
	goto T1051;}
	V385= Cnil;
	goto T1050;
	goto T1051;
T1051:;
	V385= (VV[148]->s.s_dbind);
	goto T1050;
T1050:;
	if(V385==Cnil)goto T1049;
	V382= V385;
	goto T1040;
	goto T1049;
T1049:;}
	V382= (VV[147]->s.s_dbind);
	goto T1040;
T1040:;
	if(V382==Cnil)goto T1039;
	V377= V382;
	goto T1022;
	goto T1039;
T1039:;}
	V377= (VV[146]->s.s_dbind);
	goto T1022;
T1022:;
	if(V377==Cnil)goto T1021;
	{object V386 = V377;
	VMR23(V386)}
	goto T1021;
T1021:;}{object V387;
	if(type_of((V366))==t_fixnum||
type_of((V366))==t_bignum||
type_of((V366))==t_ratio||
type_of((V366))==t_shortfloat||
type_of((V366))==t_longfloat||
type_of((V366))==t_complex){
	goto T1055;}
	V387= Cnil;
	goto T1054;
	goto T1055;
T1055:;{object V388;
	base[0]= (V366);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk239)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1059;}
	V388= Cnil;
	goto T1058;
	goto T1059;
T1059:;{object V389;
	if(type_of((V366))==t_ratio){
	goto T1064;}
	V389= Cnil;
	goto T1063;
	goto T1064;
T1064:;
	V389= (VV[151]->s.s_dbind);
	goto T1063;
T1063:;
	if(V389==Cnil)goto T1062;
	V388= V389;
	goto T1058;
	goto T1062;
T1062:;}{object V390;
	if(type_of((V366))==t_fixnum||type_of((V366))==t_bignum){
	goto T1068;}
	V390= Cnil;
	goto T1067;
	goto T1068;
T1068:;
	V390= (VV[152]->s.s_dbind);
	goto T1067;
T1067:;
	if(V390==Cnil)goto T1066;
	V388= V390;
	goto T1058;
	goto T1066;
T1066:;}
	V388= (VV[150]->s.s_dbind);
	goto T1058;
T1058:;
	if(V388==Cnil)goto T1057;
	V387= V388;
	goto T1054;
	goto T1057;
T1057:;}{object V391;
	if(type_of((V366))==t_shortfloat||type_of((V366))==t_longfloat){
	goto T1072;}
	V391= Cnil;
	goto T1071;
	goto T1072;
T1072:;
	V391= (VV[153]->s.s_dbind);
	goto T1071;
T1071:;
	if(V391==Cnil)goto T1070;
	V387= V391;
	goto T1054;
	goto T1070;
T1070:;}{object V392;
	base[0]= (V366);
	vs_top=(vs_base=base+0)+1;
	Lcomplexp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1076;}
	V392= Cnil;
	goto T1075;
	goto T1076;
T1076:;
	V392= (VV[154]->s.s_dbind);
	goto T1075;
T1075:;
	if(V392==Cnil)goto T1074;
	V387= V392;
	goto T1054;
	goto T1074;
T1074:;}
	V387= (VV[149]->s.s_dbind);
	goto T1054;
T1054:;
	if(V387==Cnil)goto T1053;
	{object V393 = V387;
	VMR23(V393)}
	goto T1053;
T1053:;}
	{object V394 = (VV[38]->s.s_dbind);
	VMR23(V394)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-RETURNING-NIL	*/

static object LI40(V397,V398)

object V397;object V398;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{object V399 = Cnil;
	VMR24(V399)}
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-RETURNING-T	*/

static object LI41(V402,V403)

object V402;object V403;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{object V404 = Ct;
	VMR25(V404)}
	return Cnil;
}
/*	local entry for function MAKE-CLASS-PREDICATE	*/

static object LI42(V407,V408)

object V407;object V408;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{register object V409;
	object V410;
	base[2]= (V408);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk209)();
	vs_top=sup;
	V409= vs_base[0];
	if(!(((VV[155]->s.s_dbind))==(VV[156]))){
	goto T1083;}
	base[2]= (V409);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk240)(Lclptr240);
	vs_top=sup;
	V410= vs_base[0];
	goto T1081;
	goto T1083;
T1083:;
	if(type_of(V409)==t_structure){
	goto T1090;}
	goto T1088;
	goto T1090;
T1090:;
	if(!(((V409)->str.str_def)==(VV[157]))){
	goto T1088;}
	V411= STREF(object,(V409),4);
	goto T1086;
	goto T1088;
T1088:;{object V413;
	V413= (VV[45]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V409);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk193)();
	vs_top=sup;
	V414= vs_base[0];
	if(!((V413)==(CMPcar(V414)))){
	goto T1093;}}
	V411= CMPcar(((V409))->cc.cc_turbo[12]);
	goto T1086;
	goto T1093;
T1093:;
	base[2]= VV[46];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V411= vs_base[0];
	goto T1086;
T1086:;
	V410= (V411)->v.v_self[fix((VV[117]->s.s_dbind))];
	goto T1081;
T1081:;
	if(((V410))!=Cnil){
	goto T1099;}
	if(((V407))==((VV[158]->s.s_dbind))){
	goto T1102;}
	{object V415;
	object V416;
	object V417;
	V415= (VV[241]->s.s_gfdef);
	V416= list(2,VV[159],(V415));
	base[5]= VV[160];
	base[6]= Cnil;
	base[7]= make_cons(VV[57],Cnil);
	base[8]= make_cons((VV[158]->s.s_dbind),Cnil);
	base[9]= (V416);
	base[10]= VV[161];
	V417= simple_symlispcall(VV[215],base+5,6);
	(void)((*(LnkLI242))(Cnil,V415,VV[162]));
	base[5]= (V409);
	base[6]= (V417);
	(void)simple_symlispcall(VV[214],base+5,2);}
	goto T1102;
T1102:;
	{object V420;
	object V421;
	object V422;
	V420= (VV[243]->s.s_gfdef);
	V421= list(2,VV[159],(V420));
	base[5]= VV[160];
	base[6]= Cnil;
	base[7]= make_cons(VV[57],Cnil);
	base[8]= make_cons((V407),Cnil);
	base[9]= (V421);
	base[10]= VV[163];
	V422= simple_symlispcall(VV[215],base+5,6);
	(void)((*(LnkLI242))(Ct,V420,VV[162]));
	base[5]= (V409);
	base[6]= (V422);
	(void)simple_symlispcall(VV[214],base+5,2);}
	goto T1099;
T1099:;
	{object V425 = (V409);
	VMR26(V425)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for G5630	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	check_arg(0);
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[164];
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for (FAST-METHOD NO-APPLICABLE-METHOD (T))	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	{object V426;
	object V427;
	object V428;
	object V429;
	check_arg(4);
	V426=(base[0]);
	V427=(base[1]);
	V428=(base[2]);
	V429=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= VV[165];
	base[5]= VV[166];
	base[6]= (V428);
	base[7]= V429;
	vs_top=(vs_base=base+4)+4;
	Lcerror();
	vs_top=sup;
	base[4]= (V428);
	{object V432;
	V432= V429;
	 vs_top=base+5;
	 while(V432!=Cnil)
	 {vs_push((V432)->c.c_car);V432=(V432)->c.c_cdr;}
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
	{object V433;
	check_arg(1);
	V433=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[1];
	base[2]= (V433);
	base[3]= base0[0];
	base[4]= VV[122];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk244)();
	return;
	}
}
/*	local function DO-WRITER-DEFINITION	*/

static void L26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	{object V434;
	check_arg(1);
	V434=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[1];
	base[2]= (V434);
	base[3]= base0[0];
	base[4]= VV[121];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk244)();
	return;
	}
}
/*	local function DO-READER-DEFINITION	*/

static void L25(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	{object V435;
	check_arg(1);
	V435=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[1];
	base[2]= (V435);
	base[3]= base0[0];
	base[4]= VV[120];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk244)();
	return;
	}
}
/*	local function SET-VAL	*/

static void L17(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	{object V436;
	object V437;
	check_arg(2);
	V436=(base[0]);
	V437=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI196))(base0[1],base0[2],(V436),(V437));
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
	{object V438;
	check_arg(1);
	V438=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[0];
	base[2]= (V438);
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
	{object V439;
	object V440;
	check_arg(2);
	V439=(base[0]);
	V440=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI196))(base0[0],base0[1],(V439),(V440));
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
	{object V441;
	check_arg(1);
	V441=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]=VV[25]->s.s_gfdef;
	{object V442;
	object V443= (V441);
	if(V443==Cnil){
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	base[1]=V442=MMcons(Cnil,Cnil);
	goto T1154;
T1154:;
	base[3]= (V443->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk25)();
	vs_top=sup;
	(V442->c.c_car)= vs_base[0];
	if((V443=MMcdr(V443))==Cnil){
	vs_top=(vs_base=base+1)+1;
	return;}
	V442=MMcdr(V442)=MMcons(Cnil,Cnil);
	goto T1154;}
	}
}
/*	local function SET-SLOT	*/

static void L7(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	{object V444;
	object V445;
	check_arg(2);
	V444=(base[0]);
	V445=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI196))(VV[43],base0[3],(V444),(V445));
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
	{object V446;
	check_arg(1);
	V446=(base[0]);
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
	{object V447;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V447=(base[0]);
	vs_top=sup;
	base[1]= VV[10];
	base[2]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
static void LnkT25(){ call_or_link(VV[25],(void **)(void *)&Lnk25);} /* FIND-CLASS */
static void LnkT244(){ call_or_link(VV[244],(void **)(void *)&Lnk244);} /* BOOTSTRAP-ACCESSOR-DEFINITION */
static object  LnkTLI242(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[242],(void **)(void *)&LnkLI242,3,first,ap);va_end(ap);return V1;} /* SETF PCL METHOD-FUNCTION-GET */
static void LnkT240(ptr) object *ptr;{ call_or_link_closure(VV[240],(void **)(void *)&Lnk240,(void **)(void *)&Lclptr240);} /* GENERIC-FUNCTION-METHODS */
static void LnkT239(){ call_or_link(VV[239],(void **)(void *)&Lnk239);} /* RATIONALP */
static void LnkT238(){ call_or_link(VV[238],(void **)(void *)&Lnk238);} /* ENSURE-CLASS */
static object  LnkTLI237(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[237],(void **)(void *)&LnkLI237,1,first,ap);va_end(ap);return V1;} /* SLOT-INITARGS-FROM-STRUCTURE-SLOTD */
static object  LnkTLI236(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[236],(void **)(void *)&LnkLI236,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-TYPE-SLOT-DESCRIPTION-LIST */
static object  LnkTLI235(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[235],(void **)(void *)&LnkLI235,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-TYPE-INCLUDED-TYPE-NAME */
static object  LnkTLI234(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[234],(void **)(void *)&LnkLI234,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-TYPE-P */
static object  LnkTLI233(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[233],(void **)(void *)&LnkLI233,1,first,ap);va_end(ap);return V1;} /* EVAL-FORM */
static void LnkT232(){ call_or_link(VV[232],(void **)(void *)&Lnk232);} /* STRUCTURE-SLOTD-INIT-FORM */
static object  LnkTLI231(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[231],(void **)(void *)&LnkLI231,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SLOTD-TYPE */
static object  LnkTLI230(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[230],(void **)(void *)&LnkLI230,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SLOTD-WRITER-FUNCTION */
static object  LnkTLI229(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[229],(void **)(void *)&LnkLI229,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SLOTD-READER-FUNCTION */
static object  LnkTLI228(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[228],(void **)(void *)&LnkLI228,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SLOTD-ACCESSOR-SYMBOL */
static object  LnkTLI227(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[227],(void **)(void *)&LnkLI227,1,first,ap);va_end(ap);return V1;} /* STRUCTURE-SLOTD-NAME */
static object  LnkTLI226(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[226],(void **)(void *)&LnkLI226,1,first,ap);va_end(ap);return V1;} /* WRAPPER-FOR-STRUCTURE */
static object  LnkTLI225(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[225],(void **)(void *)&LnkLI225,1,first,ap);va_end(ap);return V1;} /* BUILT-IN-WRAPPER-OF */
static object  LnkTLI224(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[224],(void **)(void *)&LnkLI224,first,ap);va_end(ap);return V1;} /* FIND-CLASS-FROM-CELL */
static object  LnkTLI223(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[223],(void **)(void *)&LnkLI223,first,ap);va_end(ap);return V1;} /* FIND-CLASS-CELL */
static object  LnkTLI222(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[222],(void **)(void *)&LnkLI222,1,first,ap);va_end(ap);return V1;} /* %STRUCTURE-NAME */
static object  LnkTLI221(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[221],(void **)(void *)&LnkLI221,1,first,ap);va_end(ap);return V1;} /* GET-BUILT-IN-WRAPPER-SYMBOL */
static object  LnkTLI220(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[220],(void **)(void *)&LnkLI220,1,first,ap);va_end(ap);return V1;} /* GET-BUILT-IN-CLASS-SYMBOL */
static void LnkT219(ptr) object *ptr;{ call_or_link_closure(VV[219],(void **)(void *)&Lnk219,(void **)(void *)&Lclptr219);} /* CLASS-WRAPPER */
static object  LnkTLI218(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[218],(void **)(void *)&LnkLI218,2,first,ap);va_end(ap);return V1;} /* SETF PCL FIND-CLASS-PREDICATE */
static void LnkT217(ptr) object *ptr;{ call_or_link_closure(VV[217],(void **)(void *)&Lnk217,(void **)(void *)&Lclptr217);} /* CLASS-PREDICATE-NAME */
static object  LnkTLI216(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[216],(void **)(void *)&LnkLI216,2,first,ap);va_end(ap);return V1;} /* MAKE-CLASS-PREDICATE */
static object  LnkTLI213(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[213],(void **)(void *)&LnkLI213,first,ap);va_end(ap);return V1;} /* UPDATE-DFUN */
static void LnkT212(){ call_or_link(VV[212],(void **)(void *)&Lnk212);} /* FIND */
static void LnkT209(){ call_or_link(VV[209],(void **)(void *)&Lnk209);} /* ENSURE-GENERIC-FUNCTION */
static object  LnkTLI205(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[205],(void **)(void *)&LnkLI205,1,first,ap);va_end(ap);return V1;} /* SLOT-BOUNDP-SYMBOL */
static object  LnkTLI204(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[204],(void **)(void *)&LnkLI204,1,first,ap);va_end(ap);return V1;} /* SLOT-WRITER-SYMBOL */
static object  LnkTLI203(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[203],(void **)(void *)&LnkLI203,1,first,ap);va_end(ap);return V1;} /* SLOT-READER-SYMBOL */
static object  LnkTLI202(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[202],(void **)(void *)&LnkLI202,5,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-ACCESSOR-DEFINITIONS1 */
static void LnkT201(){ call_or_link(VV[201],(void **)(void *)&Lnk201);} /* MAKE-OPTIMIZED-STD-BOUNDP-METHOD-FUNCTION */
static void LnkT200(){ call_or_link(VV[200],(void **)(void *)&Lnk200);} /* MAKE-OPTIMIZED-STD-WRITER-METHOD-FUNCTION */
static void LnkT199(){ call_or_link(VV[199],(void **)(void *)&Lnk199);} /* MAKE-OPTIMIZED-STD-READER-METHOD-FUNCTION */
static object  LnkTLI198(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[198],(void **)(void *)&LnkLI198,6,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-MAKE-SLOT-DEFINITION */
static void LnkT197(){ call_or_link(VV[197],(void **)(void *)&Lnk197);} /* MAKE-CLASS-PREDICATE-NAME */
static object  LnkTLI196(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[196],(void **)(void *)&LnkLI196,4,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-SET-SLOT */
static void LnkT195(){ call_or_link(VV[195],(void **)(void *)&Lnk195);} /* LOAD-TRUENAME */
static object  LnkTLI194(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[194],(void **)(void *)&LnkLI194,2,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-SLOT-INDEX */
static void LnkT193(){ call_or_link(VV[193],(void **)(void *)&Lnk193);} /* CCLOSURE-ENV-NTHCDR */
static object  LnkTLI192(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[192],(void **)(void *)&LnkLI192,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-INITIALIZE-CLASS */
static object  LnkTLI191(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[191],(void **)(void *)&LnkLI191,5,first,ap);va_end(ap);return V1;} /* BOOTSTRAP-MAKE-SLOT-DEFINITIONS */
static object  LnkTLI190(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[190],(void **)(void *)&LnkLI190,first,ap);va_end(ap);return V1;} /* ALLOCATE-FUNCALLABLE-INSTANCE */
static void LnkT189(){ call_or_link(VV[189],(void **)(void *)&Lnk189);} /* CANONICAL-SLOT-NAME */
static void LnkT188(){ call_or_link(VV[188],(void **)(void *)&Lnk188);} /* EARLY-COLLECT-INHERITANCE */
static object  LnkTLI187(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[187],(void **)(void *)&LnkLI187,1,first,ap);va_end(ap);return V1;} /* ECD-OTHER-INITARGS */
static object  LnkTLI186(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[186],(void **)(void *)&LnkLI186,1,first,ap);va_end(ap);return V1;} /* ECD-CANONICAL-SLOTS */
static object  LnkTLI185(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[185],(void **)(void *)&LnkLI185,1,first,ap);va_end(ap);return V1;} /* ECD-SUPERCLASS-NAMES */
static object  LnkTLI184(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[184],(void **)(void *)&LnkLI184,1,first,ap);va_end(ap);return V1;} /* ECD-SOURCE */
static object  LnkTLI183(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[183],(void **)(void *)&LnkLI183,1,first,ap);va_end(ap);return V1;} /* INFORM-TYPE-SYSTEM-ABOUT-STD-CLASS */
static object  LnkTLI25(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[25],(void **)(void *)&LnkLI25,first,ap);va_end(ap);return V1;} /* FIND-CLASS */
static object  LnkTLI182(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[182],(void **)(void *)&LnkLI182,1,first,ap);va_end(ap);return V1;} /* ECD-METACLASS */
static object  LnkTLI181(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[181],(void **)(void *)&LnkLI181,1,first,ap);va_end(ap);return V1;} /* ECD-CLASS-NAME */
static object  LnkTLI180(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[180],(void **)(void *)&LnkLI180,2,first,ap);va_end(ap);return V1;} /* SETF PCL FIND-CLASS */
static object  LnkTLI21(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[21],(void **)(void *)&LnkLI21,first,ap);va_end(ap);return V1;} /* ALLOCATE-STANDARD-INSTANCE */
static object  LnkTLI19(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[19],(void **)(void *)&LnkLI19,257,first,ap);va_end(ap);return V1;} /* EARLY-CLASS-SIZE */
static object  LnkTLI18(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[18],(void **)(void *)&LnkLI18,first,ap);va_end(ap);return V1;} /* MAKE-WRAPPER */
static object  LnkTLI179(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[179],(void **)(void *)&LnkLI179,2,first,ap);va_end(ap);return V1;} /* DO-SATISFIES-DEFTYPE */
static object  LnkTLI177(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[177],(void **)(void *)&LnkLI177,2,first,ap);va_end(ap);return V1;} /* SETF PCL GDEFINITION */
static object  LnkTLI176(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[176],(void **)(void *)&LnkLI176,first,ap);va_end(ap);return V1;} /* MAKE-TYPE-PREDICATE-NAME */
static void LnkT175(ptr) object *ptr;{ call_or_link_closure(VV[175],(void **)(void *)&Lnk175,(void **)(void *)&Lclptr175);} /* CLASS-NAME */
static void LnkT174(ptr) object *ptr;{ call_or_link_closure(VV[174],(void **)(void *)&Lnk174,(void **)(void *)&Lclptr174);} /* SETF PCL SLOT-VALUE-USING-CLASS */
static void LnkT173(ptr) object *ptr;{ call_or_link_closure(VV[173],(void **)(void *)&Lnk173,(void **)(void *)&Lclptr173);} /* CLASS-SLOTS */
static void LnkT172(ptr) object *ptr;{ call_or_link_closure(VV[172],(void **)(void *)&Lnk172,(void **)(void *)&Lclptr172);} /* CLASS-DEFSTRUCT-CONSTRUCTOR */
static object  LnkTLI171(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[171],(void **)(void *)&LnkLI171,4098,first,ap);va_end(ap);return V1;} /* %CCLOSURE-ENV-NTHCDR */
static object  LnkTLI170(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[170],(void **)(void *)&LnkLI170,2,first,ap);va_end(ap);return V1;} /* SET-FUNCALLABLE-INSTANCE-FUNCTION */
static object  LnkTLI169(){return call_proc0(VV[169],(void **)(void *)&LnkLI169);} /* ALLOCATE-FUNCALLABLE-INSTANCE-1 */
static void LnkT168(){ call_or_link(VV[168],(void **)(void *)&Lnk168);} /* MAKE-ARRAY */
static object  LnkTLI167(){return call_proc0(VV[167],(void **)(void *)&LnkLI167);} /* %%ALLOCATE-INSTANCE--CLASS */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

