
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
	(void) (*Lnk168)();
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
	base[0]= (*(LnkLI169))();
	base[0]=MMcons(base[0],Cnil);
	V21 = (base[0]->c.c_car);
	V22= 
	make_cclosure_new(LC45,Cnil,base[0],Cdata);
	(void)((*(LnkLI170))(V21,V22));
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
	(void) (*Lnk168)();
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
	(void) (*Lnk172)(Lclptr172);
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
	(void) (*Lnk173)(Lclptr173);
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
	V41= (V33);
	V42= (V35);
	V43= (V39);
	base[2]= ((V31))->v.v_self[V38];
	base[3]= (V41);
	base[4]= (V42);
	base[5]= (V43);
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk174)(Lclptr174);
	vs_top=sup;}}
	V38= (long)(V38)+1;
	goto T60;}
	goto T54;
T54:;
	{object V44 = (V35);
	VMR4(V44)}}
	goto T49;
T49:;
	base[2]= VV[11];
	base[4]= (V33);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk175)(Lclptr175);
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	Lerror();
	vs_top=sup;
	{object V45 = vs_base[0];
	VMR4(V45)}}
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
	{object V46=base[0]->c.c_cdr;
	base[2]= V46;}
	{object V48;
	object V49= base[2];
	if(V49==Cnil){
	V47= Cnil;
	goto T79;}
	base[3]=V48=MMcons(Cnil,Cnil);
	goto T80;
T80:;
	{register object V50;
	V50= (V49->c.c_car);
	{object V51;
	base[5]= Cnil;
	base[6]= VV[13];
	base[7]= (V50);
	vs_top=(vs_base=base+5)+3;
	Lformat();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (VV[14]->s.s_dbind);
	vs_top=(vs_base=base+4)+2;
	Lintern();
	vs_top=sup;
	V51= vs_base[0];
	V52 = (V51);
	if(!(((V50))==(VV[16]))){
	goto T90;}
	V53= VV[17];
	goto T88;
	goto T90;
T90:;
	V53= list(2,VV[18],list(2,VV[19],list(2,VV[20],(V50))));
	goto T88;
T88:;
	V54 = (V50);
	if(!(((V50))==(VV[16]))){
	goto T94;}
	V55= VV[22];
	goto T92;
	goto T94;
T94:;
	V55= VV[23];
	goto T92;
T92:;
	V56= list(2,VV[21],V55);
	V57= list(2,VV[24],(V51));
	V58 = (V50);
	V59 = (V50);
	(V48->c.c_car)= list(9,VV[15],V52,V53,V54,/* INLINE-ARGS */V56,/* INLINE-ARGS */V57,V58,list(2,VV[25],list(2,VV[20],(V50))),V59);}}
	if((V49=MMcdr(V49))==Cnil){
	V47= base[3];
	goto T79;}
	V48=MMcdr(V48)=MMcons(Cnil,Cnil);
	goto T80;}
	goto T79;
T79:;
	base[3]= make_cons(VV[12],V47);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function BOOTSTRAP-META-BRAID	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	bds_check;
	goto TTL;
TTL:;
	{object V61;
	V61= (VFUN_NARGS=1,(*(LnkLI176))(VV[26]));
	V63= VV[178];
	V64 = V61;
	(void)((*(LnkLI177))(V63,V64));
	(void)((*(LnkLI179))(VV[26],(V61)));}
	{object V65;
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
	object V79;
	object V80;
	object V81;
	object V82;
	bds_bind(VV[27],Cnil);
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
	V79= Cnil;
	V80= Cnil;
	V81= Cnil;
	V82= Cnil;
	V83 = CMPmake_fixnum((long)(*(LnkLI19))(VV[28]));
	V65= (VFUN_NARGS=1,(*(LnkLI18))(V83));
	V66= (VFUN_NARGS=1,(*(LnkLI21))((V65)));
	(void)(((V65))->v.v_self[11]= ((V66)));
	(void)((*(LnkLI180))(V66,VV[28]));
	V86 = CMPmake_fixnum((long)(*(LnkLI19))(VV[29]));
	V67= (VFUN_NARGS=1,(*(LnkLI18))(V86));
	V68= (VFUN_NARGS=1,(*(LnkLI21))((V65)));
	(void)(((V67))->v.v_self[11]= ((V68)));
	(void)((*(LnkLI180))(V68,VV[29]));
	V89 = CMPmake_fixnum((long)(*(LnkLI19))(VV[30]));
	V69= (VFUN_NARGS=1,(*(LnkLI18))(V89));
	V70= (VFUN_NARGS=1,(*(LnkLI21))((V65)));
	(void)(((V69))->v.v_self[11]= ((V70)));
	(void)((*(LnkLI180))(V70,VV[30]));
	V92 = CMPmake_fixnum((long)(*(LnkLI19))(VV[31]));
	V71= (VFUN_NARGS=1,(*(LnkLI18))(V92));
	V72= (VFUN_NARGS=1,(*(LnkLI21))((V65)));
	(void)(((V71))->v.v_self[11]= ((V72)));
	(void)((*(LnkLI180))(V72,VV[31]));
	V95 = CMPmake_fixnum((long)(*(LnkLI19))(VV[32]));
	V73= (VFUN_NARGS=1,(*(LnkLI18))(V95));
	V74= (VFUN_NARGS=1,(*(LnkLI21))((V65)));
	(void)(((V73))->v.v_self[11]= ((V74)));
	(void)((*(LnkLI180))(V74,VV[32]));
	V98 = CMPmake_fixnum((long)(*(LnkLI19))(VV[33]));
	V75= (VFUN_NARGS=1,(*(LnkLI18))(V98));
	V76= (VFUN_NARGS=1,(*(LnkLI21))((V65)));
	(void)(((V75))->v.v_self[11]= ((V76)));
	(void)((*(LnkLI180))(V76,VV[33]));
	V101 = CMPmake_fixnum((long)(*(LnkLI19))(VV[34]));
	V77= (VFUN_NARGS=1,(*(LnkLI18))(V101));
	V78= (VFUN_NARGS=1,(*(LnkLI21))((V65)));
	(void)(((V77))->v.v_self[11]= ((V78)));
	(void)((*(LnkLI180))(V78,VV[34]));
	V104 = CMPmake_fixnum((long)(*(LnkLI19))(VV[35]));
	V79= (VFUN_NARGS=1,(*(LnkLI18))(V104));
	V80= (VFUN_NARGS=1,(*(LnkLI21))((V65)));
	(void)(((V79))->v.v_self[11]= ((V80)));
	(void)((*(LnkLI180))(V80,VV[35]));
	V81= (VV[17]->s.s_dbind);
	V82= (VFUN_NARGS=1,(*(LnkLI21))((V67)));
	(void)(((V81))->v.v_self[11]= ((V82)));
	(void)((*(LnkLI180))(V82,VV[16]));
	{object V109;
	object V110;
	V109= (VV[36]->s.s_dbind);
	V110= CMPcar((V109));
	goto T176;
T176:;
	if(!(((V109))==Cnil)){
	goto T177;}
	goto T172;
	goto T177;
T177:;
	{object V111;
	object V112;
	object V113;
	object V114;
	V111= (*(LnkLI181))((V110));
	V112= (*(LnkLI182))((V110));
	{object V115= (V112);
	if((V115!= VV[30]))goto T185;
	V113= (V69);
	goto T184;
	goto T185;
T185:;
	if((V115!= VV[28]))goto T186;
	V113= (V65);
	goto T184;
	goto T186;
T186:;
	if((V115!= VV[29]))goto T187;
	V113= (V67);
	goto T184;
	goto T187;
T187:;
	if((V115!= VV[31]))goto T188;
	V113= (V71);
	goto T184;
	goto T188;
T188:;
	if((V115!= VV[32]))goto T189;
	V113= (V73);
	goto T184;
	goto T189;
T189:;
	FEerror("The ECASE key value ~s is illegal.",1,V115);
	V113= Cnil;
	goto T184;}
	goto T184;
T184:;{object V116;
	V116= (VFUN_NARGS=2,(*(LnkLI25))((V111),Cnil));
	if(V116==Cnil)goto T191;
	V114= V116;
	goto T190;
	goto T191;
T191:;}
	V114= (VFUN_NARGS=1,(*(LnkLI21))((V113)));
	goto T190;
T190:;
	if(((V112))==(VV[28])){
	goto T194;}
	if(!(((V112))==(VV[29]))){
	goto T193;}
	goto T194;
T194:;
	(void)((*(LnkLI183))((V111)));
	goto T193;
T193:;
	(void)((*(LnkLI180))(V114,V111));}
	V109= CMPcdr((V109));
	V110= CMPcar((V109));
	goto T176;}
	goto T172;
T172:;
	{object V119;
	register object V120;
	V119= (VV[36]->s.s_dbind);
	V120= CMPcar((V119));
	goto T207;
T207:;
	if(!(((V119))==Cnil)){
	goto T208;}
	goto T203;
	goto T208;
T208:;
	{register object V121;
	register object V122;
	object V123;
	object V124;
	object V125;
	object V126;
	V121= (*(LnkLI181))((V120));
	V122= (*(LnkLI182))((V120));
	V123= (*(LnkLI184))((V120));
	V124= (*(LnkLI185))((V120));
	V125= (*(LnkLI186))((V120));
	V126= (*(LnkLI187))((V120));
	{object V127;
	base[2]= (V126);
	base[3]= VV[37];
	vs_top=(vs_base=base+2)+2;
	Lgetf();
	vs_top=sup;
	V127= vs_base[0];
	{register object V128;
	object V129;
	object V130;
	object V131;
	base[2]= (V121);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk188)();
	if(vs_base>=vs_top){vs_top=sup;goto T224;}
	V128= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T225;}
	V129= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T226;}
	V130= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T227;}
	V131= vs_base[0];
	vs_top=sup;
	goto T228;
	goto T224;
T224:;
	V128= Cnil;
	goto T225;
T225:;
	V129= Cnil;
	goto T226;
T226:;
	V130= Cnil;
	goto T227;
T227:;
	V131= Cnil;
	goto T228;
T228:;
	{register object V132;
	register object V133;
	object V134;
	V132= (VFUN_NARGS=1,(*(LnkLI25))((V121)));
	if(!(((V132))==((V70)))){
	goto T232;}
	V133= (V69);
	goto T230;
	goto T232;
T232:;
	if(!(((V132))==((V66)))){
	goto T235;}
	V133= (V65);
	goto T230;
	goto T235;
T235:;
	if(!(((V132))==((V68)))){
	goto T238;}
	V133= (V67);
	goto T230;
	goto T238;
T238:;
	if(!(((V132))==((V76)))){
	goto T241;}
	V133= (V75);
	goto T230;
	goto T241;
T241:;
	if(!(((V132))==((V78)))){
	goto T244;}
	V133= (V77);
	goto T230;
	goto T244;
T244:;
	if(!(((V132))==((V72)))){
	goto T247;}
	V133= (V71);
	goto T230;
	goto T247;
T247:;
	if(!(((V132))==((V74)))){
	goto T250;}
	V133= (V73);
	goto T230;
	goto T250;
T250:;
	if(!(((V132))==((V80)))){
	goto T253;}
	V133= (V79);
	goto T230;
	goto T253;
T253:;
	if(!(((V132))==((V82)))){
	goto T256;}
	V133= (V81);
	goto T230;
	goto T256;
T256:;
	V135 = CMPmake_fixnum((long)length((V128)));
	V133= (VFUN_NARGS=2,(*(LnkLI18))(V135,(V132)));
	goto T230;
T230:;
	V134= Cnil;
	if(!(((V121))==(Ct))){
	goto T259;}
	(VV[38]->s.s_dbind)= (V133);
	goto T259;
T259:;
	base[6]= Cnil;
	base[7]= VV[39];
	base[8]= symbol_name((V121));
	vs_top=(vs_base=base+6)+3;
	Lformat();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (VV[14]->s.s_dbind);
	vs_top=(vs_base=base+5)+2;
	Lintern();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V132);
	vs_top=(vs_base=base+4)+2;
	Lset();
	vs_top=sup;
	{register object V136;
	object V137;
	V136= (V128);
	V137= CMPcar((V136));
	goto T275;
T275:;
	if(!(((V136))==Cnil)){
	goto T276;}
	goto T271;
	goto T276;
T276:;
	base[5]= (V137);
	base[6]= VV[40];
	base[7]= VV[41];
	vs_top=(vs_base=base+5)+3;
	Lgetf();
	vs_top=sup;
	V138= vs_base[0];
	if((V138)==(VV[41])){
	goto T280;}
	base[5]= VV[42];
	vs_top=(vs_base=base+5)+1;
	Lerror();
	vs_top=sup;
	goto T280;
T280:;
	V136= CMPcdr((V136));
	V137= CMPcar((V136));
	goto T275;}
	goto T271;
T271:;
	V139 = (V133);
	base[5]=VV[189]->s.s_gfdef;
	{object V141;
	object V142= (V128);
	if(V142==Cnil){
	V140= Cnil;
	goto T295;}
	base[4]=V141=MMcons(Cnil,Cnil);
	goto T296;
T296:;
	base[6]= (V142->c.c_car);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk189)();
	vs_top=sup;
	(V141->c.c_car)= vs_base[0];
	if((V142=MMcdr(V142))==Cnil){
	V140= base[4];
	goto T295;}
	V141=MMcdr(V141)=MMcons(Cnil,Cnil);
	goto T296;}
	goto T295;
T295:;
	(void)((V139)->v.v_self[9]= (V140));
	(void)(((V133))->v.v_self[10]= (Cnil));
	if(!(((V122))==(VV[29]))){
	goto T302;}
	V134= (VFUN_NARGS=1,(*(LnkLI190))((V133)));
	goto T300;
	goto T302;
T302:;
	V134= (VFUN_NARGS=1,(*(LnkLI21))((V133)));
	goto T300;
T300:;
	V125= (*(LnkLI191))((V121),(V132),(V125),(V75),Cnil);
	V128= (*(LnkLI191))((V121),(V132),(V128),(V77),Ct);
	{object V143= (V122);
	if((V143!= VV[28])
	&& (V143!= VV[29]))goto T308;
	(void)((VFUN_NARGS=14,(*(LnkLI192))((V122),(V132),(V121),(V79),(V123),(V124),(V131),(V129),(V133),(V134),(V125),(V128),(V127),(V130))));
	goto T212;
	goto T308;
T308:;
	if((V143!= VV[31]))goto T309;
	(void)((VFUN_NARGS=10,(*(LnkLI192))((V122),(V132),(V121),(V79),(V123),(V124),(V131),(V129),(V133),(V134))));
	goto T212;
	goto T309;
T309:;
	if((V143!= VV[30]))goto T310;
	(void)((VFUN_NARGS=10,(*(LnkLI192))((V122),(V132),(V121),(V79),(V123),(V124),(V131),(V129),(V133),(V134))));
	goto T212;
	goto T310;
T310:;
	if((V143!= VV[32]))goto T311;
	(void)((VFUN_NARGS=9,(*(LnkLI192))((V122),(V132),(V121),(V79),(V123),(V124),(V131),(V129),(V133))));
	goto T212;
	goto T311;
T311:;}}}}}
	goto T212;
T212:;
	V119= CMPcdr((V119));
	V120= CMPcar((V119));
	goto T207;}
	goto T203;
T203:;
	{object V144;
	object V145;
	V144= (VFUN_NARGS=1,(*(LnkLI25))(VV[43]));
	if(type_of(V144)==t_structure){
	goto T323;}
	goto T321;
	goto T323;
T323:;
	if(!(((V144)->str.str_def)==(VV[44]))){
	goto T321;}
	V146= STREF(object,(V144),4);
	goto T319;
	goto T321;
T321:;{object V148;
	V148= (VV[45]->s.s_dbind);
	base[4]= small_fixnum(14);
	base[5]= (V144);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk193)();
	vs_top=sup;
	V149= vs_base[0];
	if(!((V148)==(CMPcar(V149)))){
	goto T326;}}
	V146= CMPcar(((V144))->cc.cc_turbo[12]);
	goto T319;
	goto T326;
T326:;
	base[4]= VV[46];
	vs_top=(vs_base=base+4)+1;
	Lerror();
	vs_top=sup;
	V146= vs_base[0];
	goto T319;
T319:;
	V150= (*(LnkLI194))(VV[28],VV[47]);
	V145= (V146)->v.v_self[fix(/* INLINE-ARGS */V150)];
	base[3]= (VFUN_NARGS=1,(*(LnkLI21))((V145)));
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
	{object V151 = (VV[54]->s.s_dbind);
	bds_unwind1;
	VMR6(V151)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-INITIALIZE-CLASS	*/

static object LI8(object V160,object V159,object V158,object V157,object V156,object V155,object V154,object V153,object V152,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB7 VMS7 VMV7
	{register object V161;
	object V162;
	object V163;
	object V164;
	object V165;
	object V166;
	object V167;
	object V168;
	object V169;
	object V170;
	object V171;
	object V172;
	va_start(ap,first);
	if(narg <9) too_few_arguments();
	base[0]= V160;
	base[1]= V159;
	V161= V158;
	V162= V157;
	V163= V156;
	V164= V155;
	V165= V154;
	V166= V153;
	V167= V152;
	narg = narg - 9;
	if (narg <= 0) goto T346;
	else {
	V168= first;}
	if (--narg <= 0) goto T347;
	else {
	V169= va_arg(ap,object);}
	if (--narg <= 0) goto T348;
	else {
	V170= va_arg(ap,object);}
	if (--narg <= 0) goto T349;
	else {
	V171= va_arg(ap,object);}
	if (--narg <= 0) goto T350;
	else {
	V172= va_arg(ap,object);}
	--narg; goto T351;
	goto T346;
T346:;
	V168= Cnil;
	goto T347;
T347:;
	V169= Cnil;
	goto T348;
T348:;
	V170= Cnil;
	goto T349;
T349:;
	V171= Cnil;
	goto T350;
T350:;
	V172= Cnil;
	goto T351;
T351:;
	base[14]= VV[55];
	base[15]= (V161);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[48];
	base[15]= (V163);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[49];
	V173 = base[1];
	V174= (VFUN_NARGS=1,(*(LnkLI25))(Ct));
	if(!((V173)==(/* INLINE-ARGS */V174))){
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
	{object V175;
	V175= (VFUN_NARGS=1,(*(LnkLI21))((V162)));
	V176= list(2,VV[56],base[1]);
	(void)((*(LnkLI196))(VV[35],(V175),VV[49],/* INLINE-ARGS */V176));
	(void)((*(LnkLI196))(VV[35],(V175),VV[57],base[1]));
	base[15]= (V175);}
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[58];
	base[16]= (V166);
	vs_top=(vs_base=base+16)+1;
	L9(base);
	vs_top=sup;
	base[15]= vs_base[0];
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[59];
	base[16]= CMPcdr((V166));
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
	base[16]= (V164);
	vs_top=(vs_base=base+16)+1;
	L9(base);
	vs_top=sup;
	base[15]= vs_base[0];
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[62];
	base[16]= (V165);
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
	base[15]= (V167);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[64];{object V177;
	{register object x= (V161),V179= (VV[65]->s.s_dbind);
	while(V179!=Cnil)
	if(eql(x,V179->c.c_car->c.c_car) &&V179->c.c_car != Cnil){
	V178= (V179->c.c_car);
	goto T405;
	}else V179=V179->c.c_cdr;
	V178= Cnil;}
	goto T405;
T405:;
	V177= CMPcadr(V178);
	if(V177==Cnil)goto T403;
	base[15]= V177;
	goto T402;
	goto T403;
T403:;}
	base[16]= (V161);
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
	if((V171)==Cnil){
	V180= Cnil;
	goto T410;}
	V180= list(2,VV[67],(V171));
	goto T410;
T410:;
	if((V172)==Cnil){
	V181= Cnil;
	goto T411;}
	V181= list(2,VV[68],(V172));
	goto T411;
T411:;
	base[15]= append(V180,V181);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	{register object x= base[0],V182= VV[69];
	while(V182!=Cnil)
	if(x==(V182->c.c_car)){
	goto T414;
	}else V182=V182->c.c_cdr;
	goto T412;}
	goto T414;
T414:;
	base[14]= VV[70];
	base[15]= (V169);
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	base[14]= VV[71];
	base[15]= (V170);
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
	base[14]= VV[64];{object V184;
	{register object x= (V161),V186= (VV[65]->s.s_dbind);
	while(V186!=Cnil)
	if(eql(x,V186->c.c_car->c.c_car) &&V186->c.c_car != Cnil){
	V185= (V186->c.c_car);
	goto T432;
	}else V186=V186->c.c_cdr;
	V185= Cnil;}
	goto T432;
T432:;
	V184= CMPcadr(V185);
	if(V184==Cnil)goto T430;
	base[15]= V184;
	goto T429;
	goto T430;
T430:;}
	base[16]= (V161);
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
	if((V168)!=Cnil){
	base[15]= (V168);
	goto T449;}
	base[15]= (VFUN_NARGS=1,(*(LnkLI21))((V167)));
	goto T449;
T449:;
	vs_top=(vs_base=base+14)+2;
	L10(base);
	vs_top=sup;
	goto T423;
T423:;
	{object V187 = base[1];
	VMR7(V187)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BOOTSTRAP-MAKE-SLOT-DEFINITIONS	*/

static object LI11(V193,V194,V195,V196,V197)

object V193;object V194;object V195;object V196;object V197;
{	 VMB8 VMS8 VMV8
	goto TTL;
TTL:;
	{object V198;
	V198= small_fixnum(-1);
	{object V199;
	object V200= (V195);
	if(V200==Cnil){
	{object V201 = Cnil;
	VMR8(V201)}}
	base[0]=V199=MMcons(Cnil,Cnil);
	goto T450;
T450:;
	V198= number_plus((V198),small_fixnum(1));
	(V199->c.c_car)= (*(LnkLI198))((V193),(V194),(V200->c.c_car),(V196),(V197),(V198));
	if((V200=MMcdr(V200))==Cnil){
	{object V203 = base[0];
	VMR8(V203)}}
	V199=MMcdr(V199)=MMcons(Cnil,Cnil);
	goto T450;}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-MAKE-SLOT-DEFINITION	*/

static object LI15(V210,V211,V212,V213,V214,V215)

object V210;object V211;object V212;object V213;register object V214;register object V215;
{	 VMB9 VMS9 VMV9
	goto TTL;
TTL:;
	base[0]= (V212);
	{register object V216;
	if(((V214))==Cnil){
	goto T456;}
	base[1]= VV[34];
	goto T454;
	goto T456;
T456:;
	base[1]= VV[33];
	goto T454;
T454:;
	base[2]= (VFUN_NARGS=1,(*(LnkLI21))((V213)));
	base[4]= base[0];
	base[5]= VV[81];
	vs_top=(vs_base=base+4)+2;
	Lgetf();
	vs_top=sup;
	V216= vs_base[0];
	base[4]= VV[55];
	base[5]= (V216);
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
	base[4]= VV[49];{object V217;
	base[6]= VV[93];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	V217= vs_base[0];
	if(V217==Cnil)goto T491;
	base[5]= V217;
	goto T490;
	goto T491;
T491:;}
	base[5]= Ct;
	goto T490;
T490:;
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[51];{object V218;
	base[6]= VV[94];
	vs_top=(vs_base=base+6)+1;
	L16(base);
	vs_top=sup;
	V218= vs_base[0];
	if(V218==Cnil)goto T497;
	base[5]= V218;
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
	base[5]= (V211);
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	if(((V214))==Cnil){
	goto T503;}
	base[4]= VV[96];
	base[5]= (V215);
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[97];
	base[6]= Cnil;
	base[7]= (V216);
	base[8]= (V215);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk199)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[98];
	base[6]= Cnil;
	base[7]= (V216);
	base[8]= (V215);
	vs_top=(vs_base=base+6)+3;
	(void) (*Lnk200)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+4)+2;
	L17(base);
	vs_top=sup;
	base[4]= VV[99];
	base[6]= Cnil;
	base[7]= (V216);
	base[8]= (V215);
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
	{object V220;{object V221;
	base[4]= (V216);
	base[5]= (VV[101]->s.s_dbind);
	vs_top=(vs_base=base+4)+2;
	Lgethash();
	vs_top=sup;
	V221= vs_base[0];
	if(V221==Cnil)goto T531;
	V220= V221;
	goto T530;
	goto T531;
T531:;}
	{object V223;
	object V224;
	V223= (VV[101]->s.s_dbind);
	base[5]= VV[102];
	base[6]= VV[103];
	base[7]= VV[104];
	base[8]= small_fixnum(5);
	vs_top=(vs_base=base+5)+4;
	Lmake_hash_table();
	vs_top=sup;
	V224= vs_base[0];
	base[5]= V216;
	base[6]= (V223);
	base[7]= (V224);
	vs_top=(vs_base=base+5)+3;
	siLhash_set();
	vs_top=sup;
	V220= vs_base[0];}
	goto T530;
T530:;
	base[4]= V211;
	base[5]= V220;
	base[6]= base[2];
	vs_top=(vs_base=base+4)+3;
	siLhash_set();
	vs_top=sup;}
	goto T503;
T503:;
	if(!(((V210))==(VV[28]))){
	goto T547;}
	if(!(((V216))==(VV[71]))){
	goto T547;}
	if(((V214))==Cnil){
	goto T547;}
	(VV[105]->s.s_dbind)= base[2];
	goto T547;
T547:;
	if(!(((V210))==(VV[29]))){
	goto T555;}
	if(!(((V216))==(VV[71]))){
	goto T555;}
	if(((V214))==Cnil){
	goto T555;}
	(VV[106]->s.s_dbind)= base[2];
	goto T555;
T555:;
	{object V228 = base[2];
	VMR9(V228)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-ACCESSOR-DEFINITIONS	*/

static object LI18(V230)

object V230;
{	 VMB10 VMS10 VMV10
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[107],(V230));
	{register object V231;
	register object V232;
	V231= (VV[36]->s.s_dbind);
	V232= CMPcar((V231));
	goto T566;
T566:;
	if(!(((V231))==Cnil)){
	goto T567;}
	{object V233 = Cnil;
	bds_unwind1;
	VMR10(V233)}
	goto T567;
T567:;
	{object V234;
	object V235;
	V234= (*(LnkLI181))((V232));
	V235= (*(LnkLI182))((V232));
	if(((V235))==(VV[31])){
	goto T571;}
	{object V236;
	V236= (*(LnkLI186))((V232));
	{register object V237;
	register object V238;
	V237= (V236);
	V238= CMPcar((V237));
	goto T580;
T580:;
	if(!(((V237))==Cnil)){
	goto T581;}
	goto T571;
	goto T581;
T581:;
	{register object V239;
	register object V240;
	register object V241;
	base[3]= (V238);
	base[4]= VV[81];
	vs_top=(vs_base=base+3)+2;
	Lgetf();
	vs_top=sup;
	V239= vs_base[0];
	base[3]= (V238);
	base[4]= VV[89];
	vs_top=(vs_base=base+3)+2;
	Lgetf();
	vs_top=sup;
	V240= vs_base[0];
	base[3]= (V238);
	base[4]= VV[91];
	vs_top=(vs_base=base+3)+2;
	Lgetf();
	vs_top=sup;
	V241= vs_base[0];
	(void)((*(LnkLI202))((V234),(V239),(V240),(V241),Cnil));
	V242= (*(LnkLI203))((V239));
	V243= make_cons(/* INLINE-ARGS */V242,Cnil);
	V244= (*(LnkLI204))((V239));
	V245= make_cons(/* INLINE-ARGS */V244,Cnil);
	V246= (*(LnkLI205))((V239));
	V247= make_cons(/* INLINE-ARGS */V246,Cnil);
	(void)((*(LnkLI202))(VV[108],(V239),/* INLINE-ARGS */V243,/* INLINE-ARGS */V245,/* INLINE-ARGS */V247));}
	V237= CMPcdr((V237));
	V238= CMPcar((V237));
	goto T580;}}}
	goto T571;
T571:;
	V231= CMPcdr((V231));
	V232= CMPcar((V231));
	goto T566;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for BOOTSTRAP-ACCESSOR-DEFINITION	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{register object V248;
	object V249;
	object V250;
	object V251;
	check_arg(4);
	V248=(base[0]);
	V249=(base[1]);
	V250=(base[2]);
	V251=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V252;
	object V253;
	object V254;
	object V255;
	object V256;
	{object V257= (V251);
	if((V257!= VV[120]))goto T607;
	base[4]= VV[109];
	base[5]= (VV[206]->s.s_gfdef);
	base[6]= make_cons((V248),Cnil);
	base[7]= make_cons((V248),Cnil);
	base[8]= VV[110];
	vs_top=(vs_base=base+4)+5;
	goto T606;
	goto T607;
T607:;
	if((V257!= VV[121]))goto T613;
	base[4]= VV[111];
	base[5]= (VV[207]->s.s_gfdef);
	base[6]= list(2,VV[112],(V248));
	base[7]= list(2,Ct,(V248));
	base[8]= VV[113];
	vs_top=(vs_base=base+4)+5;
	goto T606;
	goto T613;
T613:;
	if((V257!= VV[122]))goto T619;
	base[4]= VV[114];
	base[5]= (VV[208]->s.s_gfdef);
	base[6]= make_cons((V248),Cnil);
	base[7]= make_cons((V248),Cnil);
	base[8]= VV[115];
	vs_top=(vs_base=base+4)+5;
	goto T606;
	goto T619;
T619:;
	FEerror("The ECASE key value ~s is illegal.",1,V257);
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	goto T606;}
	goto T606;
T606:;
	if(vs_base>=vs_top){vs_top=sup;goto T625;}
	V252= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T626;}
	V253= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T627;}
	V254= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T628;}
	V255= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T629;}
	V256= vs_base[0];
	vs_top=sup;
	goto T630;
	goto T625;
T625:;
	V252= Cnil;
	goto T626;
T626:;
	V253= Cnil;
	goto T627;
T627:;
	V254= Cnil;
	goto T628;
T628:;
	V255= Cnil;
	goto T629;
T629:;
	V256= Cnil;
	goto T630;
T630:;
	{register object V258;
	base[4]= (V249);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk209)();
	vs_top=sup;
	V258= vs_base[0];
	base[4]= (V255);
	if(type_of(V258)==t_structure){
	goto T642;}
	goto T640;
	goto T642;
T642:;
	if(!(((V258)->str.str_def)==(VV[116]))){
	goto T640;}
	V259= STREF(object,(V258),4);
	goto T638;
	goto T640;
T640:;{object V261;
	V261= (VV[45]->s.s_dbind);
	base[6]= small_fixnum(14);
	base[7]= (V258);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk193)();
	vs_top=sup;
	V262= vs_base[0];
	if(!((V261)==(CMPcar(V262)))){
	goto T645;}}
	V259= CMPcar(((V258))->cc.cc_turbo[12]);
	goto T638;
	goto T645;
T645:;
	base[6]= VV[46];
	vs_top=(vs_base=base+6)+1;
	Lerror();
	vs_top=sup;
	V259= vs_base[0];
	goto T638;
T638:;
	V263 = (VV[117]->s.s_dbind);
	base[5]= (V259)->v.v_self[fix(V263)];
	base[6]= VV[118];
	base[7]= (VV[210]->s.s_gfdef);
	base[8]= VV[102];
	base[9]= (VV[211]->s.s_gfdef);
	vs_top=(vs_base=base+4)+6;
	(void) (*Lnk212)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T634;}
	{register object x= (V249),V264= (VV[119]->s.s_dbind);
	while(V264!=Cnil)
	if(equal(x,V264->c.c_car->c.c_car) &&V264->c.c_car != Cnil){
	goto T656;
	}else V264=V264->c.c_cdr;}
	base[4]= (VFUN_NARGS=1,(*(LnkLI213))((V258)));
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
	base[5]= (V258);
	base[7]=(VV[215]->s.s_gfdef);
	base[8]= (V252);
	base[9]= Cnil;
	base[10]= (V254);
	base[11]= (V255);
	base[13]= (V248);
	base[14]= (V250);
	vs_top=(vs_base=base+13)+2;
	{object _funobj = (V253);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	base[12]= vs_base[0];
	base[13]= (V256);
	base[14]= (V250);
	base[6]= simple_lispcall(base+7,7);
	lispcall(base+4,2);
	return;}}
	}
}
/*	local entry for function BOOTSTRAP-ACCESSOR-DEFINITIONS1	*/

static object LI24(V270,V271,V272,V273,V274)

object V270;object V271;object V272;object V273;object V274;
{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	base[0]= (V271);
	base[1]= (V270);
	{register object V275;
	register object V276;
	V275= (V272);
	V276= CMPcar((V275));
	goto T673;
T673:;
	if(!(((V275))==Cnil)){
	goto T674;}
	goto T669;
	goto T674;
T674:;
	base[3]= (V276);
	vs_top=(vs_base=base+3)+1;
	L25(base);
	vs_top=sup;
	V275= CMPcdr((V275));
	V276= CMPcar((V275));
	goto T673;}
	goto T669;
T669:;
	{register object V277;
	register object V278;
	V277= (V273);
	V278= CMPcar((V277));
	goto T689;
T689:;
	if(!(((V277))==Cnil)){
	goto T690;}
	goto T685;
	goto T690;
T690:;
	base[3]= (V278);
	vs_top=(vs_base=base+3)+1;
	L26(base);
	vs_top=sup;
	V277= CMPcdr((V277));
	V278= CMPcar((V277));
	goto T689;}
	goto T685;
T685:;
	{register object V279;
	register object V280;
	V279= (V274);
	V280= CMPcar((V279));
	goto T704;
T704:;
	if(!(((V279))==Cnil)){
	goto T705;}
	{object V281 = Cnil;
	VMR12(V281)}
	goto T705;
T705:;
	base[3]= (V280);
	vs_top=(vs_base=base+3)+1;
	L27(base);
	vs_top=sup;
	V279= CMPcdr((V279));
	V280= CMPcar((V279));
	goto T704;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-CLASS-PREDICATES	*/

static object LI28(V283)

object V283;
{	 VMB13 VMS13 VMV13
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[107],(V283));
	{register object V284;
	register object V285;
	V284= (VV[36]->s.s_dbind);
	V285= CMPcar((V284));
	goto T719;
T719:;
	if(!(((V284))==Cnil)){
	goto T720;}
	{object V286 = Cnil;
	bds_unwind1;
	VMR13(V286)}
	goto T720;
T720:;
	{register object V287;
	register object V288;
	V287= (*(LnkLI181))((V285));
	V288= (VFUN_NARGS=1,(*(LnkLI25))((V287)));
	{register object V289;
	register object V290;
	V289= (V287);
	V291 = (V288);
	base[5]= (V288);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk217)(Lclptr217);
	vs_top=sup;
	V292= vs_base[0];
	V290= (*(LnkLI216))(V291,V292);
	(void)((*(LnkLI218))((V290),(V289)));}}
	V284= CMPcdr((V284));
	V285= CMPcar((V284));
	goto T719;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BOOTSTRAP-BUILT-IN-CLASSES	*/

static object LI29()

{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	{register object V293;
	object V294;
	V293= (VV[123]->s.s_dbind);
	V294= CMPcar((V293));
	goto T740;
T740:;
	if(!(((V293))==Cnil)){
	goto T741;}
	goto T736;
	goto T741;
T741:;
	{register object V295;
	register object V296;
	V295= CMPcadr((V294));
	V296= CMPcar((V295));
	goto T749;
T749:;
	if(!(((V295))==Cnil)){
	goto T750;}
	goto T745;
	goto T750;
T750:;
	if(((V296))==(Ct)){
	goto T754;}
	{register object x= (V296),V297= (VV[123]->s.s_dbind);
	while(V297!=Cnil)
	if(EQ(x,V297->c.c_car->c.c_car) &&V297->c.c_car != Cnil){
	goto T754;
	}else V297=V297->c.c_cdr;}
	base[3]= VV[124];
	base[4]= CMPcar((V294));
	base[5]= (V296);
	base[6]= (V296);
	vs_top=(vs_base=base+3)+4;
	Lerror();
	vs_top=sup;
	goto T754;
T754:;
	V295= CMPcdr((V295));
	V296= CMPcar((V295));
	goto T749;}
	goto T745;
T745:;
	V293= CMPcdr((V293));
	V294= CMPcar((V293));
	goto T740;}
	goto T736;
T736:;
	{object V298;
	object V299;
	V298= (VFUN_NARGS=1,(*(LnkLI25))(VV[31]));
	base[2]= (V298);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk219)(Lclptr219);
	vs_top=sup;
	V299= vs_base[0];
	{register object V300;
	object V301;
	V300= (VV[123]->s.s_dbind);
	V301= CMPcar((V300));
	goto T780;
T780:;
	if(!(((V300))==Cnil)){
	goto T781;}
	goto T773;
	goto T781;
T781:;
	{object V302;
	V302= (VFUN_NARGS=1,(*(LnkLI21))((V299)));
	{object V303;
	V303= CMPcar((V301));
	(void)((*(LnkLI180))(V302,(V303)));}}
	V300= CMPcdr((V300));
	V301= CMPcar((V300));
	goto T780;}}
	goto T773;
T773:;
	{object V305;
	base[0]= (VFUN_NARGS=1,(*(LnkLI25))(VV[35]));
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk219)(Lclptr219);
	vs_top=sup;
	V305= vs_base[0];
	{register object V306;
	object V307;
	V306= (VV[123]->s.s_dbind);
	V307= CMPcar((V306));
	goto T799;
T799:;
	if(!(((V306))==Cnil)){
	goto T800;}
	goto T793;
	goto T800;
T800:;
	{object V308;
	object V309;
	object V310;
	object V311;
	register object V312;
	register object V313;
	V308= Cnil;
	V309= Cnil;
	V310= Cnil;
	V311= Cnil;
	V312= Cnil;
	V313= Cnil;
	V313= (V307);
	V312= CMPcar((V313));
	V313= CMPcdr((V313));
	V311= CMPcar((V313));
	V313= CMPcdr((V313));
	V310= CMPcar((V313));
	V313= CMPcdr((V313));
	V309= CMPcar((V313));
	V313= CMPcdr((V313));
	V308= CMPcar((V313));
	{object V314;
	register object V315;
	V314= (VFUN_NARGS=1,(*(LnkLI25))((V312)));
	V315= (VFUN_NARGS=2,(*(LnkLI18))(small_fixnum(0),(V314)));
	base[3]= (*(LnkLI220))((V312));
	base[4]= (V314);
	vs_top=(vs_base=base+3)+2;
	Lset();
	vs_top=sup;
	base[3]= (*(LnkLI221))((V312));
	base[4]= (V315);
	vs_top=(vs_base=base+3)+2;
	Lset();
	vs_top=sup;
	(void)(((V315))->v.v_self[9]= (Cnil));
	(void)(((V315))->v.v_self[10]= (Cnil));
	V316= make_cons((V312),(V309));
	(void)((VFUN_NARGS=10,(*(LnkLI192))(VV[31],(V314),(V312),(V305),Cnil,(V311),(V310),/* INLINE-ARGS */V316,(V315),(V308))));}}
	V306= CMPcdr((V306));
	V307= CMPcar((V306));
	goto T799;}}
	goto T793;
T793:;
	{register object V317;
	object V318;
	V317= (VV[123]->s.s_dbind);
	V318= CMPcar((V317));
	goto T845;
T845:;
	if(!(((V317))==Cnil)){
	goto T846;}
	{object V319 = Cnil;
	VMR14(V319)}
	goto T846;
T846:;
	{object V320;
	object V321;
	V320= CMPcar((V318));
	V321= (VFUN_NARGS=1,(*(LnkLI25))((V320)));
	{object V323;
	V324 = (V321);
	base[4]= (V321);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk217)(Lclptr217);
	vs_top=sup;
	V325= vs_base[0];
	V323= (*(LnkLI216))(V324,V325);
	(void)((*(LnkLI218))((V323),V320));}}
	V317= CMPcdr((V317));
	V318= CMPcar((V317));
	goto T845;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WRAPPER-FOR-STRUCTURE	*/

static object LI30(V327)

object V327;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{register object V328;
	if(type_of((V327))==t_structure){
	goto T862;}
	V328= Cnil;
	goto T861;
	goto T862;
T862:;
	V328= ((V327))->str.str_def->str.str_self[0];
	goto T861;
T861:;
	if(!(type_of((V328))==t_symbol)){
	goto T864;}
	if(!(((V328))==(VV[1]))){
	goto T868;}
	{object V329 = STREF(object,(V327),0);
	VMR15(V329)}
	goto T868;
T868:;
	if(!(((V328))==((VV[125]->s.s_dbind)))){
	goto T871;}
	{object V330 = (VV[126]->s.s_dbind);
	VMR15(V330)}
	goto T871;
T871:;
	if(!(((V328))==((VV[127]->s.s_dbind)))){
	goto T874;}
	{object V331 = (VV[128]->s.s_dbind);
	VMR15(V331)}
	goto T874;
T874:;
	(VV[127]->s.s_dbind)= (VV[125]->s.s_dbind);
	(VV[128]->s.s_dbind)= (VV[126]->s.s_dbind);
	goto T864;
T864:;
	{object V332;
	object V333;
	object V334;
	V332= (VFUN_NARGS=1,(*(LnkLI223))((V328)));{object V335;
	V335= CMPcar((V332));
	if(V335==Cnil)goto T881;
	V333= V335;
	goto T880;
	goto T881;
T881:;}
	V333= (VFUN_NARGS=2,(*(LnkLI224))((V328),(V332)));
	goto T880;
T880:;
	if(((V333))==Cnil){
	goto T885;}
	base[3]= (V333);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk219)(Lclptr219);
	vs_top=sup;
	V334= vs_base[0];
	goto T883;
	goto T885;
T885:;
	V334= (VV[38]->s.s_dbind);
	goto T883;
T883:;
	if(!(type_of((V328))==t_symbol)){
	goto T888;}
	(VV[125]->s.s_dbind)= (V328);
	(VV[126]->s.s_dbind)= (V334);
	goto T888;
T888:;
	{object V336 = (V334);
	VMR15(V336)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function BUILT-IN-OR-STRUCTURE-WRAPPER1	*/

static object LI31(V338)

object V338;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	{object V339;{object V340;
	V340= (*(LnkLI225))((V338));
	if(V340==Cnil)goto T895;
	V339= V340;
	goto T894;
	goto T895;
T895:;}
	V339= (VV[38]->s.s_dbind);
	goto T894;
T894:;{object V341;
	if(((V339))==((VV[38]->s.s_dbind))){
	goto T899;}
	V341= Cnil;
	goto T898;
	goto T899;
T899:;
	if(type_of((V338))==t_structure){
	goto T901;}
	V341= Cnil;
	goto T898;
	goto T901;
T901:;
	{object V342;
	object V343;
	base[2]= (V338);
	vs_top=(vs_base=base+2)+1;
	Ltype_of();
	vs_top=sup;
	V342= vs_base[0];
	V343= (VFUN_NARGS=2,(*(LnkLI25))((V342),Cnil));
	if((V343)==Cnil){
	V341= Cnil;
	goto T898;}
	base[2]= (V343);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk219)(Lclptr219);
	vs_top=sup;
	V341= vs_base[0];}
	goto T898;
T898:;
	if(V341==Cnil)goto T897;
	{object V344 = V341;
	VMR16(V344)}
	goto T897;
T897:;}
	{object V345 = (V339);
	VMR16(V345)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function CLASS-OF	*/

static object LI32(V347)

register object V347;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if(type_of(V347)==t_structure){
	goto T911;}
	goto T909;
	goto T911;
T911:;
	if(!(((V347)->str.str_def)==(VV[129]))){
	goto T909;}
	V348= STREF(object,(V347),0);
	goto T907;
	goto T909;
T909:;{object V350;
	V350= (VV[45]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V347);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk193)();
	vs_top=sup;
	V351= vs_base[0];
	if(!((V350)==(CMPcar(V351)))){
	goto T914;}}
	V348= CMPcar(((V347))->cc.cc_turbo[13]);
	goto T907;
	goto T914;
T914:;
	if(!(type_of((V347))==t_structure)){
	goto T920;}
	V348= (*(LnkLI226))((V347));
	goto T907;
	goto T920;
T920:;
	if(!(type_of((V347))==t_symbol)){
	goto T923;}
	if(((V347))==Cnil){
	goto T926;}
	V348= (VV[130]->s.s_dbind);
	goto T907;
	goto T926;
T926:;
	V348= (VV[131]->s.s_dbind);
	goto T907;
	goto T923;
T923:;
	V348= (*(LnkLI225))((V347));
	goto T907;
T907:;
	{object V352 = (V348)->v.v_self[11];
	VMR17(V352)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function WRAPPER-OF	*/

static object LI33(V354)

register object V354;
{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	if(type_of(V354)==t_structure){
	goto T931;}
	goto T929;
	goto T931;
T931:;
	if(!(((V354)->str.str_def)==(VV[132]))){
	goto T929;}
	{object V356 = STREF(object,(V354),0);
	VMR18(V356)}
	goto T929;
T929:;{object V357;
	V357= (VV[45]->s.s_dbind);
	base[0]= small_fixnum(14);
	base[1]= (V354);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk193)();
	vs_top=sup;
	V358= vs_base[0];
	if(!((V357)==(CMPcar(V358)))){
	goto T934;}}
	{object V359 = CMPcar(((V354))->cc.cc_turbo[13]);
	VMR18(V359)}
	goto T934;
T934:;
	if(!(type_of((V354))==t_structure)){
	goto T940;}
	{object V360 = (*(LnkLI226))((V354));
	VMR18(V360)}
	goto T940;
T940:;
	if(!(type_of((V354))==t_symbol)){
	goto T943;}
	if(((V354))==Cnil){
	goto T946;}
	{object V361 = (VV[130]->s.s_dbind);
	VMR18(V361)}
	goto T946;
T946:;
	{object V362 = (VV[131]->s.s_dbind);
	VMR18(V362)}
	goto T943;
T943:;
	{object V363 = (*(LnkLI225))((V354));
	VMR18(V363)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for STRUCTURE-WRAPPER	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V364;
	check_arg(1);
	V364=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(type_of((V364))==t_structure){
	goto T950;}
	V365= Cnil;
	goto T949;
	goto T950;
T950:;
	V365= ((V364))->str.str_def->str.str_self[0];
	goto T949;
T949:;
	base[1]= (VFUN_NARGS=1,(*(LnkLI25))(V365));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk219)(Lclptr219);
	return;
	}
}
/*	local entry for function EVAL-FORM	*/

static object LI36(V367)

object V367;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	base[0]=MMcons((V367),Cnil);
	{object V368 = 
	make_cclosure_new(LC47,Cnil,base[0],Cdata);
	VMR20(V368)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function SLOT-INITARGS-FROM-STRUCTURE-SLOTD	*/

static object LI37(V370)

register object V370;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	base[0]= VV[81];
	base[1]= (*(LnkLI227))((V370));
	base[2]= VV[133];
	base[3]= (*(LnkLI228))((V370));
	base[4]= VV[134];
	base[5]= (*(LnkLI229))((V370));
	base[6]= VV[135];
	base[7]= (*(LnkLI230))((V370));
	base[8]= VV[93];{object V371;
	V371= (*(LnkLI231))((V370));
	if(V371==Cnil)goto T962;
	base[9]= V371;
	goto T961;
	goto T962;
T962:;}
	base[9]= Ct;
	goto T961;
T961:;
	base[10]= VV[83];
	base[12]= (V370);
	vs_top=(vs_base=base+12)+1;
	(void) (*Lnk232)();
	vs_top=sup;
	base[11]= vs_base[0];
	base[12]= VV[85];
	base[14]= (V370);
	vs_top=(vs_base=base+14)+1;
	(void) (*Lnk232)();
	vs_top=sup;
	V372= vs_base[0];
	base[13]= (*(LnkLI233))(V372);
	vs_top=(vs_base=base+0)+14;
	Llist();
	vs_top=sup;
	{object V373 = vs_base[0];
	VMR21(V373)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for FIND-STRUCTURE-CLASS	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	bds_check;
	{register object V374;
	check_arg(1);
	V374=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((*(LnkLI234))((V374)))==Cnil){
	goto T972;}
	if(((VV[136]->s.s_dbind))==((V374))){
	goto T975;}
	bds_bind(VV[136],(V374));
	base[2]= (V374);
	base[3]= VV[137];
	base[4]= VV[32];
	base[5]= VV[81];
	base[6]= (V374);
	base[7]= VV[138];
	if(((*(LnkLI235))((V374)))==Cnil){
	goto T985;}
	V375= (*(LnkLI235))((V374));
	base[8]= make_cons(/* INLINE-ARGS */V375,Cnil);
	goto T983;
	goto T985;
T985:;
	base[8]= Cnil;
	goto T983;
T983:;
	base[9]= VV[139];
	V378= (*(LnkLI236))((V374));
	{object V376;
	object V377= /* INLINE-ARGS */V378;
	if(V377==Cnil){
	base[10]= Cnil;
	goto T988;}
	base[11]=V376=MMcons(Cnil,Cnil);
	goto T989;
T989:;
	(V376->c.c_car)= (*(LnkLI237))((V377->c.c_car));
	if((V377=MMcdr(V377))==Cnil){
	base[10]= base[11];
	goto T988;}
	V376=MMcdr(V376)=MMcons(Cnil,Cnil);
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
	base[2]= (V374);
	vs_top=(vs_base=base+1)+2;
	Lerror();
	return;
	}
}
/*	local entry for function BUILT-IN-WRAPPER-OF	*/

static object LI39(V380)

register object V380;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;{object V381;
	if(type_of((V380))==t_symbol){
	goto T995;}
	V381= Cnil;
	goto T994;
	goto T995;
T995:;{object V382;
	if(((V380))==Cnil){
	goto T999;}
	V382= Cnil;
	goto T998;
	goto T999;
T999:;
	V382= (VV[131]->s.s_dbind);
	goto T998;
T998:;
	if(V382==Cnil)goto T997;
	V381= V382;
	goto T994;
	goto T997;
T997:;}
	V381= (VV[130]->s.s_dbind);
	goto T994;
T994:;
	if(V381==Cnil)goto T993;
	{object V383 = V381;
	VMR23(V383)}
	goto T993;
T993:;}{object V384;
	if(type_of((V380))==t_character){
	goto T1003;}
	V384= Cnil;
	goto T1002;
	goto T1003;
T1003:;
	V384= (VV[141]->s.s_dbind);
	goto T1002;
T1002:;
	if(V384==Cnil)goto T1001;
	{object V385 = V384;
	VMR23(V385)}
	goto T1001;
T1001:;}{object V386;
	if(type_of((V380))==t_array||
type_of((V380))==t_vector||
type_of((V380))==t_string||
type_of((V380))==t_bitvector){
	goto T1007;}
	V386= Cnil;
	goto T1006;
	goto T1007;
T1007:;{object V387;
	if(type_of((V380))==t_vector||
type_of((V380))==t_string||
type_of((V380))==t_bitvector){
	goto T1011;}
	V387= Cnil;
	goto T1010;
	goto T1011;
T1011:;{object V388;
	if((type_of((V380))==t_bitvector)){
	goto T1015;}
	V388= Cnil;
	goto T1014;
	goto T1015;
T1015:;
	V388= (VV[144]->s.s_dbind);
	goto T1014;
T1014:;
	if(V388==Cnil)goto T1013;
	V387= V388;
	goto T1010;
	goto T1013;
T1013:;}{object V389;
	if(type_of((V380))==t_string){
	goto T1019;}
	V389= Cnil;
	goto T1018;
	goto T1019;
T1019:;
	V389= (VV[145]->s.s_dbind);
	goto T1018;
T1018:;
	if(V389==Cnil)goto T1017;
	V387= V389;
	goto T1010;
	goto T1017;
T1017:;}
	V387= (VV[143]->s.s_dbind);
	goto T1010;
T1010:;
	if(V387==Cnil)goto T1009;
	V386= V387;
	goto T1006;
	goto T1009;
T1009:;}
	V386= (VV[142]->s.s_dbind);
	goto T1006;
T1006:;
	if(V386==Cnil)goto T1005;
	{object V390 = V386;
	VMR23(V390)}
	goto T1005;
T1005:;}{object V391;
	if(!(type_of(V380)==t_cons||(V380)==Cnil)){
	goto T1025;}
	goto T1023;
	goto T1025;
T1025:;
	if(type_of(V380)==t_vector||
type_of(V380)==t_string||
type_of(V380)==t_bitvector){
	goto T1023;}
	V391= Cnil;
	goto T1022;
	goto T1023;
T1023:;{object V393;
	if(type_of((V380))==t_vector||
type_of((V380))==t_string||
type_of((V380))==t_bitvector){
	goto T1029;}
	V393= Cnil;
	goto T1028;
	goto T1029;
T1029:;{object V394;
	if((type_of((V380))==t_bitvector)){
	goto T1033;}
	V394= Cnil;
	goto T1032;
	goto T1033;
T1033:;
	V394= (VV[144]->s.s_dbind);
	goto T1032;
T1032:;
	if(V394==Cnil)goto T1031;
	V393= V394;
	goto T1028;
	goto T1031;
T1031:;}{object V395;
	if(type_of((V380))==t_string){
	goto T1037;}
	V395= Cnil;
	goto T1036;
	goto T1037;
T1037:;
	V395= (VV[145]->s.s_dbind);
	goto T1036;
T1036:;
	if(V395==Cnil)goto T1035;
	V393= V395;
	goto T1028;
	goto T1035;
T1035:;}
	V393= (VV[143]->s.s_dbind);
	goto T1028;
T1028:;
	if(V393==Cnil)goto T1027;
	V391= V393;
	goto T1022;
	goto T1027;
T1027:;}{object V396;
	if(!(type_of(V380)==t_cons)){
	goto T1043;}
	goto T1041;
	goto T1043;
T1043:;
	if((V380)==Cnil){
	goto T1041;}
	V396= Cnil;
	goto T1040;
	goto T1041;
T1041:;{object V398;
	if(((V380))==Cnil){
	goto T1047;}
	V398= Cnil;
	goto T1046;
	goto T1047;
T1047:;
	V398= (VV[131]->s.s_dbind);
	goto T1046;
T1046:;
	if(V398==Cnil)goto T1045;
	V396= V398;
	goto T1040;
	goto T1045;
T1045:;}{object V399;
	if(type_of((V380))==t_cons){
	goto T1051;}
	V399= Cnil;
	goto T1050;
	goto T1051;
T1051:;
	V399= (VV[148]->s.s_dbind);
	goto T1050;
T1050:;
	if(V399==Cnil)goto T1049;
	V396= V399;
	goto T1040;
	goto T1049;
T1049:;}
	V396= (VV[147]->s.s_dbind);
	goto T1040;
T1040:;
	if(V396==Cnil)goto T1039;
	V391= V396;
	goto T1022;
	goto T1039;
T1039:;}
	V391= (VV[146]->s.s_dbind);
	goto T1022;
T1022:;
	if(V391==Cnil)goto T1021;
	{object V400 = V391;
	VMR23(V400)}
	goto T1021;
T1021:;}{object V401;
	if(type_of((V380))==t_fixnum||
type_of((V380))==t_bignum||
type_of((V380))==t_ratio||
type_of((V380))==t_shortfloat||
type_of((V380))==t_longfloat||
type_of((V380))==t_complex){
	goto T1055;}
	V401= Cnil;
	goto T1054;
	goto T1055;
T1055:;{object V402;
	base[0]= (V380);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk239)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1059;}
	V402= Cnil;
	goto T1058;
	goto T1059;
T1059:;{object V403;
	if(type_of((V380))==t_ratio){
	goto T1064;}
	V403= Cnil;
	goto T1063;
	goto T1064;
T1064:;
	V403= (VV[151]->s.s_dbind);
	goto T1063;
T1063:;
	if(V403==Cnil)goto T1062;
	V402= V403;
	goto T1058;
	goto T1062;
T1062:;}{object V404;
	if(type_of((V380))==t_fixnum||type_of((V380))==t_bignum){
	goto T1068;}
	V404= Cnil;
	goto T1067;
	goto T1068;
T1068:;
	V404= (VV[152]->s.s_dbind);
	goto T1067;
T1067:;
	if(V404==Cnil)goto T1066;
	V402= V404;
	goto T1058;
	goto T1066;
T1066:;}
	V402= (VV[150]->s.s_dbind);
	goto T1058;
T1058:;
	if(V402==Cnil)goto T1057;
	V401= V402;
	goto T1054;
	goto T1057;
T1057:;}{object V405;
	if(type_of((V380))==t_shortfloat||type_of((V380))==t_longfloat){
	goto T1072;}
	V405= Cnil;
	goto T1071;
	goto T1072;
T1072:;
	V405= (VV[153]->s.s_dbind);
	goto T1071;
T1071:;
	if(V405==Cnil)goto T1070;
	V401= V405;
	goto T1054;
	goto T1070;
T1070:;}{object V406;
	base[0]= (V380);
	vs_top=(vs_base=base+0)+1;
	Lcomplexp();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T1076;}
	V406= Cnil;
	goto T1075;
	goto T1076;
T1076:;
	V406= (VV[154]->s.s_dbind);
	goto T1075;
T1075:;
	if(V406==Cnil)goto T1074;
	V401= V406;
	goto T1054;
	goto T1074;
T1074:;}
	V401= (VV[149]->s.s_dbind);
	goto T1054;
T1054:;
	if(V401==Cnil)goto T1053;
	{object V407 = V401;
	VMR23(V407)}
	goto T1053;
T1053:;}
	{object V408 = (VV[38]->s.s_dbind);
	VMR23(V408)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-RETURNING-NIL	*/

static object LI40(V411,V412)

object V411;object V412;
{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{object V413 = Cnil;
	VMR24(V413)}
	return Cnil;
}
/*	local entry for function METHOD-FUNCTION-RETURNING-T	*/

static object LI41(V416,V417)

object V416;object V417;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	{object V418 = Ct;
	VMR25(V418)}
	return Cnil;
}
/*	local entry for function MAKE-CLASS-PREDICATE	*/

static object LI42(V421,V422)

object V421;object V422;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	{register object V423;
	object V424;
	base[2]= (V422);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk209)();
	vs_top=sup;
	V423= vs_base[0];
	if(!(((VV[155]->s.s_dbind))==(VV[156]))){
	goto T1083;}
	base[2]= (V423);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk240)(Lclptr240);
	vs_top=sup;
	V424= vs_base[0];
	goto T1081;
	goto T1083;
T1083:;
	if(type_of(V423)==t_structure){
	goto T1090;}
	goto T1088;
	goto T1090;
T1090:;
	if(!(((V423)->str.str_def)==(VV[157]))){
	goto T1088;}
	V425= STREF(object,(V423),4);
	goto T1086;
	goto T1088;
T1088:;{object V427;
	V427= (VV[45]->s.s_dbind);
	base[2]= small_fixnum(14);
	base[3]= (V423);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk193)();
	vs_top=sup;
	V428= vs_base[0];
	if(!((V427)==(CMPcar(V428)))){
	goto T1093;}}
	V425= CMPcar(((V423))->cc.cc_turbo[12]);
	goto T1086;
	goto T1093;
T1093:;
	base[2]= VV[46];
	vs_top=(vs_base=base+2)+1;
	Lerror();
	vs_top=sup;
	V425= vs_base[0];
	goto T1086;
T1086:;
	V429 = (VV[117]->s.s_dbind);
	V424= (V425)->v.v_self[fix(V429)];
	goto T1081;
T1081:;
	if(((V424))!=Cnil){
	goto T1099;}
	if(((V421))==((VV[158]->s.s_dbind))){
	goto T1102;}
	{object V430;
	object V431;
	object V432;
	V430= (VV[241]->s.s_gfdef);
	V431= list(2,VV[159],(V430));
	base[5]= VV[160];
	base[6]= Cnil;
	base[7]= make_cons(VV[57],Cnil);
	base[8]= make_cons((VV[158]->s.s_dbind),Cnil);
	base[9]= (V431);
	base[10]= VV[161];
	V432= simple_symlispcall(VV[215],base+5,6);
	(void)((*(LnkLI242))(Cnil,V430,VV[162]));
	base[5]= (V423);
	base[6]= (V432);
	(void)simple_symlispcall(VV[214],base+5,2);}
	goto T1102;
T1102:;
	{object V435;
	object V436;
	object V437;
	V435= (VV[243]->s.s_gfdef);
	V436= list(2,VV[159],(V435));
	base[5]= VV[160];
	base[6]= Cnil;
	base[7]= make_cons(VV[57],Cnil);
	base[8]= make_cons((V421),Cnil);
	base[9]= (V436);
	base[10]= VV[163];
	V437= simple_symlispcall(VV[215],base+5,6);
	(void)((*(LnkLI242))(Ct,V435,VV[162]));
	base[5]= (V423);
	base[6]= (V437);
	(void)simple_symlispcall(VV[214],base+5,2);}
	goto T1099;
T1099:;
	{object V440 = (V423);
	VMR26(V440)}}
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
	{object V441;
	object V442;
	object V443;
	object V444;
	check_arg(4);
	V441=(base[0]);
	V442=(base[1]);
	V443=(base[2]);
	V444=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= VV[165];
	base[5]= VV[166];
	base[6]= (V443);
	base[7]= V444;
	vs_top=(vs_base=base+4)+4;
	Lcerror();
	vs_top=sup;
	base[4]= (V443);
	{object V447;
	V447= V444;
	 vs_top=base+5;
	 while(V447!=Cnil)
	 {vs_push((V447)->c.c_car);V447=(V447)->c.c_cdr;}
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
	{object V448;
	check_arg(1);
	V448=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[1];
	base[2]= (V448);
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
	{object V449;
	check_arg(1);
	V449=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[1];
	base[2]= (V449);
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
	{object V450;
	check_arg(1);
	V450=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[1];
	base[2]= (V450);
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
	{object V451;
	object V452;
	check_arg(2);
	V451=(base[0]);
	V452=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI196))(base0[1],base0[2],(V451),(V452));
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
	{object V453;
	check_arg(1);
	V453=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= base0[0];
	base[2]= (V453);
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
	{object V454;
	object V455;
	check_arg(2);
	V454=(base[0]);
	V455=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI196))(base0[0],base0[1],(V454),(V455));
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
	{object V456;
	check_arg(1);
	V456=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]=VV[25]->s.s_gfdef;
	{object V457;
	object V458= (V456);
	if(V458==Cnil){
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	base[1]=V457=MMcons(Cnil,Cnil);
	goto T1154;
T1154:;
	base[3]= (V458->c.c_car);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk25)();
	vs_top=sup;
	(V457->c.c_car)= vs_base[0];
	if((V458=MMcdr(V458))==Cnil){
	vs_top=(vs_base=base+1)+1;
	return;}
	V457=MMcdr(V457)=MMcons(Cnil,Cnil);
	goto T1154;}
	}
}
/*	local function SET-SLOT	*/

static void L7(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	{object V459;
	object V460;
	check_arg(2);
	V459=(base[0]);
	V460=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (*(LnkLI196))(VV[43],base0[3],(V459),(V460));
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
	{object V461;
	check_arg(1);
	V461=(base[0]);
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
	{object V462;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V462=(base[0]);
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

