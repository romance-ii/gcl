
#include "cmpinclude.h"
#include "clcs_handler.h"
void init_clcs_handler(){do_init(VV);}
/*	local entry for function progn 'compile2186	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk67)();
	vs_top=sup;
	{object V1 = Cnil;
	VMR1(V1)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2198	*/

static object LI2()

{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(!((VV[0])->s.s_dbind!=OBJNULL)){
	goto T4;}
	goto T3;
	goto T4;
T4:;
	(VV[0]->s.s_dbind)= Cnil;
	goto T3;
T3:;
	{object V2 = Cnil;
	VMR2(V2)}
	return Cnil;
}
/*	local entry for function progn 'compile2211	*/

static object LI3()

{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V3 = Cnil;
	VMR3(V3)}
	return Cnil;
}
/*	macro definition for HANDLER-BIND	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	vs_top=sup;
	{object V4=base[0]->c.c_cdr;
	base[2]= (V4->c.c_car);
	V4=V4->c.c_cdr;
	base[3]= V4;}
	base[4]= VV[68];
	base[5]= base[2];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk69)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T8;}
	base[4]= VV[1];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk21)();
	vs_top=sup;
	goto T8;
T8:;
	{object V6;
	object V7= base[2];
	if(V7==Cnil){
	V5= Cnil;
	goto T14;}
	base[4]=V6=MMcons(Cnil,Cnil);
	goto T15;
T15:;
	(V6->c.c_car)= list(3,VV[3],list(2,VV[5],CMPcar((V7->c.c_car))),CMPcadr((V7->c.c_car)));
	if((V7=MMcdr(V7))==Cnil){
	V5= base[4];
	goto T14;}
	V6=MMcdr(V6)=MMcons(Cnil,Cnil);
	goto T15;}
	goto T14;
T14:;
	V9= list(2,VV[0],list(3,VV[3],make_cons(VV[4],V5),VV[0]));
	base[4]= listA(3,VV[2],make_cons(/* INLINE-ARGS */V9,Cnil),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function progn 'compile2249	*/

static object LI5()

{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	base[0]= VV[6];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk67)();
	vs_top=sup;
	{object V10 = Cnil;
	VMR5(V10)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2261	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	if(!((VV[6])->s.s_dbind!=OBJNULL)){
	goto T20;}
	goto T19;
	goto T20;
T20:;
	(VV[6]->s.s_dbind)= Cnil;
	goto T19;
T19:;
	{object V11 = Cnil;
	VMR6(V11)}
	return Cnil;
}
/*	local entry for function progn 'compile2274	*/

static object LI7()

{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V12 = Cnil;
	VMR7(V12)}
	return Cnil;
}
/*	local entry for function SIGNAL	*/

static object LI8(object V13,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB8 VMS8 VMV8
	bds_check;
	{object V14;
	object V15;
	va_start(ap,first);
	V14= V13;
	narg= narg - 1;
	V16 = list_vector_new(narg,first,ap);
	V15= V16;
	{register object V17;
	base[1]= (V14);
	base[2]= (V15);
	base[3]= VV[7];
	base[4]= VV[8];
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk70)();
	vs_top=sup;
	V17= vs_base[0];
	bds_bind(VV[0],(VV[0]->s.s_dbind));
	base[1]= (V17);
	base[2]= (VV[6]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk71)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T29;}
	(void)((VFUN_NARGS=2,(*(LnkLI72))(VV[9],(V17))));
	goto T29;
T29:;
	goto T36;
T36:;
	if(((VV[0]->s.s_dbind))!=Cnil){
	goto T38;}
	goto T34;
	goto T38;
T38:;
	{register object V18;
	{register object V19;
	V19= CMPcar((VV[0]->s.s_dbind));
	(VV[0]->s.s_dbind)= CMPcdr((VV[0]->s.s_dbind));
	V18= (V19);}
	{register object V20;
	register object V21;
	V20= (V18);
	V21= CMPcar((V20));
	goto T48;
T48:;
	if(!(((V20))==Cnil)){
	goto T49;}
	goto T37;
	goto T49;
T49:;
	base[2]= (V17);
	base[3]= CMPcar((V21));
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk71)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T53;}
	(void)((
	V22 = CMPcdr((V21)),
	(type_of(V22) == t_sfun ?(*((V22)->sfn.sfn_self)):
	(fcall.argd=1,type_of(V22)==t_vfun) ?
	(*((V22)->sfn.sfn_self)):
	(fcall.fun=(V22),fcalln))((V17))));
	goto T37;
	goto T53;
T53:;
	V20= CMPcdr((V20));
	V21= CMPcar((V20));
	goto T48;}}
	goto T37;
T37:;
	goto T36;
	goto T34;
T34:;
	{object V23 = Cnil;
	bds_unwind1;
	VMR8(V23)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for COERCE-TO-CONDITION	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{register object V24;
	register object V25;
	object V26;
	object V27;
	V24=(base[0]);
	V25=(base[1]);
	V26=(base[2]);
	V27=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((*(LnkLI73))((V24)))==Cnil){
	goto T66;}
	if(((V25))==Cnil){
	goto T68;}
	V28= list(2,(V24),(V27));
	(void)((VFUN_NARGS=10,(*(LnkLI74))(VV[10],VV[11],VV[12],(V25),VV[13],VV[14],VV[15],VV[16],VV[17],/* INLINE-ARGS */V28)));
	goto T68;
T68:;
	base[4]= (V24);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T66;
T66:;
	if(type_of((V24))==t_symbol){
	goto T71;}
	if(((*(LnkLI75))((V24)))==Cnil){
	goto T72;}
	goto T71;
T71:;
	base[4]=VV[76]->s.s_gfdef;
	base[5]= (V24);
	{object V29;
	V29= (V25);
	 vs_top=base+6;
	 while(V29!=Cnil)
	 {vs_push((V29)->c.c_car);V29=(V29)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk76)();
	return;
	goto T72;
T72:;
	if(!(type_of((V24))==t_string)){
	goto T79;}
	base[4]= (V26);
	base[5]= VV[15];
	base[6]= (V24);
	base[7]= VV[17];
	base[8]= (V25);
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk76)();
	return;
	goto T79;
T79:;
	base[4]= VV[11];
	base[5]= VV[12];
	base[6]= (V24);
	base[7]= VV[13];
	base[8]= VV[18];
	base[9]= VV[15];
	base[10]= VV[19];
	base[11]= VV[17];
	base[12]= list(2,(V27),(V24));
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk21)();
	return;
	}
}
/*	function definition for ERROR	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V30;
	object V31;
	V30=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V31=(base[1]);
	vs_top=sup;
	{object V32;
	base[2]= (V30);
	base[3]= (V31);
	base[4]= VV[20];
	base[5]= VV[21];
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk70)();
	vs_top=sup;
	V32= vs_base[0];
	(void)((VFUN_NARGS=1,(*(LnkLI8))((V32))));
	base[2]= (V32);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk77)();
	return;}
	}
}
/*	local entry for function CERROR	*/

static object LI11(object V34,object V33,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB11 VMS11 VMV11
	bds_check;
	{VOL object V35;
	va_start(ap,first);
	Vcs[0]=MMcons(V34,Cnil);
	V35= V33;
	narg= narg - 2;
	V36 = list_vector_new(narg,first,ap);
	Vcs[2]=MMcons(V36,Vcs[0]);
	base[0]=MMcons(Cnil,Vcs[2]);
	base[1]=alloc_frame_id();
	base[1]=MMcons(base[1],base[0]);
	frs_push(FRS_CATCH,(base[1]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[28]))goto T104;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V37= 
	make_cclosure_new(LC18,Cnil,base[1],Cdata);
	V38= 
	make_cclosure_new(LC19,Cnil,base[1],Cdata);
	V39= (VFUN_NARGS=6,(*(LnkLI78))(VV[23],VV[24],VV[25],V37,VV[26],V38));
	V40= make_cons(/* INLINE-ARGS */V39,Cnil);
	base[2]= make_cons(/* INLINE-ARGS */V40,(VV[22]->s.s_dbind));
	bds_bind(VV[22],base[2]);
	base[3]= (V35);
	{object V41;
	V41= (Vcs[2]->c.c_car);
	 vs_top=base+4;
	 while(V41!=Cnil)
	 {vs_push((V41)->c.c_car);V41=(V41)->c.c_cdr;}
	vs_base=base+3;}
	(void) (*Lnk21)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T102;
	goto T104;
T104:;
	{object V42;
	V42= (base[0]->c.c_car);
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	vs_top=sup;
	frs_pop();
	goto T102;}
	frs_pop();
	goto T102;
	goto T102;
T102:;
	{object V43 = Cnil;
	VMR11(V43)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function BREAK	*/

static object LI12(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB12 VMS12 VMV12
	bds_check;
	{VOL object V44;
	VOL object V45;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T113;
	else {
	V44= first;}
	--narg; goto T114;
	goto T113;
T113:;
	V44= VV[29];
	goto T114;
T114:;
	V46 = list_vector_new(narg,first,ap);
	V45= V46;
	base[0]=MMcons(Cnil,Cnil);
	base[1]=alloc_frame_id();
	base[1]=MMcons(base[1],base[0]);
	frs_push(FRS_CATCH,(base[1]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[31]))goto T118;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V47= 
	make_cclosure_new(LC20,Cnil,base[1],Cdata);
	V48= 
	make_cclosure_new(LC21,Cnil,base[1],Cdata);
	V49= (VFUN_NARGS=6,(*(LnkLI78))(VV[23],VV[24],VV[25],V47,VV[26],V48));
	V50= make_cons(/* INLINE-ARGS */V49,Cnil);
	base[2]= make_cons(/* INLINE-ARGS */V50,(VV[22]->s.s_dbind));
	bds_bind(VV[22],base[2]);
	base[4]= VV[7];
	base[5]= VV[15];
	base[6]= (V44);
	base[7]= VV[17];
	base[8]= (V45);
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk76)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk77)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T116;
	goto T118;
T118:;
	{object V51;
	V51= (base[0]->c.c_car);
	base[2]= Cnil;
	base[3]= Ct;
	vs_top=(vs_base=base+2)+2;
	vs_top=sup;
	frs_pop();
	goto T116;}
	frs_pop();
	goto T116;
	goto T116;
T116:;
	{object V52 = Cnil;
	VMR12(V52)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function WARN	*/

static object LI13(object V53,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB13 VMS13 VMV13
	bds_check;
	{VOL object V54;
	VOL object V55;
	va_start(ap,first);
	V54= V53;
	narg= narg - 1;
	V56 = list_vector_new(narg,first,ap);
	V55= V56;
	{VOL object V57;
	base[0]= (V54);
	base[1]= (V55);
	base[2]= VV[32];
	base[3]= VV[33];
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk70)();
	vs_top=sup;
	V57= vs_base[0];
	goto T138;
T138:;
	base[0]= (V57);
	base[1]= VV[34];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk71)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T139;}
	goto T136;
	goto T139;
T139:;
	base[0]=MMcons(Cnil,Cnil);
	base[1]=alloc_frame_id();
	base[1]=MMcons(base[1],base[0]);
	frs_push(FRS_CATCH,(base[1]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[41]))goto T146;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V58= 
	make_cclosure_new(LC22,Cnil,base[1],Cdata);
	V59= 
	make_cclosure_new(LC23,Cnil,base[1],Cdata);
	V60= (VV[79]->s.s_gfdef);
	V61= (VFUN_NARGS=8,(*(LnkLI78))(VV[23],VV[35],VV[25],V58,VV[26],V59,VV[38],V60));
	V62= make_cons(/* INLINE-ARGS */V61,Cnil);
	base[2]= make_cons(/* INLINE-ARGS */V62,(VV[22]->s.s_dbind));
	bds_bind(VV[22],base[2]);
	base[3]= VV[39];
	base[4]= VV[37];
	base[5]= (V57);
	base[6]= VV[40];
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk21)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T144;
	goto T146;
T146:;
	{register object V63;
	V63= (base[0]->c.c_car);
	base[2]=((V63))->c.c_car;
	V57= base[2];
	frs_pop();
	goto T138;}
	frs_pop();
	goto T144;
	goto T144;
T144:;
	goto T136;
	goto T136;
T136:;
	if(((VV[42]->s.s_dbind))==Cnil){
	goto T158;}
	(void)((VFUN_NARGS=2,(*(LnkLI72))(VV[43],(V57))));
	goto T158;
T158:;
	base[0]=MMcons(Cnil,Cnil);
	base[1]=alloc_frame_id();
	base[1]=MMcons(base[1],base[0]);
	frs_push(FRS_CATCH,(base[1]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[46]))goto T163;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V64= 
	make_cclosure_new(LC24,Cnil,base[1],Cdata);
	V65= 
	make_cclosure_new(LC25,Cnil,base[1],Cdata);
	V66= (VFUN_NARGS=6,(*(LnkLI78))(VV[23],VV[44],VV[25],V64,VV[26],V65));
	V67= make_cons(/* INLINE-ARGS */V66,Cnil);
	base[2]= make_cons(/* INLINE-ARGS */V67,(VV[22]->s.s_dbind));
	bds_bind(VV[22],base[2]);
	V68= (VFUN_NARGS=1,(*(LnkLI8))((V57)));
	frs_pop();
	bds_unwind1;
	goto T161;
	goto T163;
T163:;
	{object V69;
	V69= (base[0]->c.c_car);
	frs_pop();
	{object V70 = Cnil;
	VMR13(V70)}}
	frs_pop();
	goto T161;
	goto T161;
T161:;
	base[0]= (VV[47]->s.s_dbind);
	base[1]= VV[48];
	base[2]= (V57);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V71 = Cnil;
	VMR13(V71)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for HANDLER-CASE	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	vs_top=sup;
	{object V72=base[0]->c.c_cdr;
	base[2]= (V72->c.c_car);
	V72=V72->c.c_cdr;
	base[3]= V72;}
	{object V73;
	{register object x= VV[49],V74= base[3];
	while(V74!=Cnil)
	if(eql(x,V74->c.c_car->c.c_car) &&V74->c.c_car != Cnil){
	V73= (V74->c.c_car);
	goto T172;
	}else V74=V74->c.c_cdr;
	V73= Cnil;}
	goto T172;
T172:;
	if(((V73))==Cnil){
	goto T174;}
	{object V75;
	object V76;
	base[4]= VV[50];
	vs_top=(vs_base=base+4)+1;
	Lmake_symbol();
	vs_top=sup;
	V75= vs_base[0];
	base[4]= VV[51];
	vs_top=(vs_base=base+4)+1;
	Lmake_symbol();
	vs_top=sup;
	V76= vs_base[0];
	V77= list(2,VV[54],make_cons(VV[55],CMPcdr((V73))));
	V78= list(3,VV[56],(V75),base[2]);
	base[4]= (V73);
	base[5]= base[3];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk80)();
	vs_top=sup;
	V79= vs_base[0];
	base[4]= list(3,VV[52],(V76),list(3,VV[53],/* INLINE-ARGS */V77,list(3,VV[52],(V75),list(3,VV[56],(V76),listA(3,VV[57],/* INLINE-ARGS */V78,V79)))));
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T174;
T174:;
	{object V80;
	register object V81;
	object V82;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V80= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V81= vs_base[0];
	{object V83;
	object V84= base[3];
	if(V84==Cnil){
	V82= Cnil;
	goto T185;}
	base[4]=V83=MMcons(Cnil,Cnil);
	goto T186;
T186:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V86= vs_base[0];
	(V83->c.c_car)= make_cons(V86,(V84->c.c_car));
	if((V84=MMcdr(V84))==Cnil){
	V82= base[4];
	goto T185;}
	V83=MMcdr(V83)=MMcons(Cnil,Cnil);
	goto T186;}
	goto T185;
T185:;
	V87= list(2,(V81),Cnil);
	V88= make_cons(/* INLINE-ARGS */V87,Cnil);
	{object V90;
	object V91= (V82);
	if(V91==Cnil){
	V89= Cnil;
	goto T189;}
	base[4]=V90=MMcons(Cnil,Cnil);
	goto T190;
T190:;
	V93= CMPcadr((V91->c.c_car));
	if((CMPcaddr((V91->c.c_car)))==Cnil){
	goto T194;}
	V95= list(3,VV[61],(V81),VV[62]);
	V94= make_cons(/* INLINE-ARGS */V95,Cnil);
	goto T192;
	goto T194;
T194:;
	V94= Cnil;
	goto T192;
T192:;
	V96= list(2,VV[63],CMPcar((V91->c.c_car)));
	V97= make_cons(/* INLINE-ARGS */V96,Cnil);
	(V90->c.c_car)= list(2,/* INLINE-ARGS */V93,list(2,VV[54],listA(3,VV[55],VV[60],append(V94,/* INLINE-ARGS */V97))));
	if((V91=MMcdr(V91))==Cnil){
	V89= base[4];
	goto T189;}
	V90=MMcdr(V90)=MMcons(Cnil,Cnil);
	goto T190;}
	goto T189;
T189:;
	V98= list(3,VV[59],V89,list(3,VV[56],(V80),base[2]));
	{object V100;
	object V101= (V82);
	if(V101==Cnil){
	V99= Cnil;
	goto T196;}
	base[4]=V100=MMcons(Cnil,Cnil);
	goto T197;
T197:;
	{register object V102;
	V102= (V101->c.c_car);
	V103= CMPcar((V102));
	{register object V105;
	V105= CMPcdddr((V102));
	if((CMPcaddr((V102)))==Cnil){
	goto T203;}
	V107= list(2,CMPcaaddr((V102)),(V81));
	V106= listA(3,VV[2],make_cons(/* INLINE-ARGS */V107,Cnil),(V105));
	goto T201;
	goto T203;
T203:;
	if((CMPcdr((V105)))!=Cnil){
	goto T206;}
	V106= CMPcar((V105));
	goto T201;
	goto T206;
T206:;
	V106= make_cons(VV[64],(V105));
	goto T201;
T201:;
	V104= list(3,VV[56],(V80),V106);}
	(V100->c.c_cdr)= list(2,/* INLINE-ARGS */V103,V104);}
	while(MMcdr(V100)!=Cnil)V100=MMcdr(V100);
	if((V101=MMcdr(V101))==Cnil){
	base[4]=base[4]->c.c_cdr;
	V99= base[4];
	goto T196;}
	goto T197;}
	goto T196;
T196:;
	base[4]= list(3,VV[52],(V80),list(4,VV[2],/* INLINE-ARGS */V88,(V81),listA(3,VV[58],/* INLINE-ARGS */V98,V99)));
	vs_top=(vs_base=base+4)+1;
	return;}}
}
/*	macro definition for IGNORE-ERRORS	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	vs_top=sup;
	{object V108=base[0]->c.c_cdr;
	base[2]= V108;}
	base[3]= list(3,VV[57],make_cons(VV[64],base[2]),VV[65]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for FIND-CLASS-NO-ERROR	*/

static void L16()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM16; VC16
	vs_check;
	bds_check;
	{VOL object V109;
	V109=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]=MMcons(Cnil,Cnil);
	base[2]=alloc_frame_id();
	base[2]=MMcons(base[2],base[1]);
	frs_push(FRS_CATCH,(base[2]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[66]))goto T210;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V110= 
	make_cclosure_new(LC26,Cnil,base[2],Cdata);
	V111= make_cons(VV[21],V110);
	V112= make_cons(/* INLINE-ARGS */V111,Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V112,(VV[0]->s.s_dbind));
	bds_bind(VV[0],base[3]);
	base[4]= (V109);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk81)();
	frs_pop();
	bds_unwind1;
	return;
	goto T210;
T210:;
	{object V113;
	V113= (base[1]->c.c_car);
	base[3]= Cnil;
	base[4]= (V113);
	vs_top=(vs_base=base+3)+2;
	frs_pop();
	return;}
	frs_pop();
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	local function CLOSURE	*/

static void LC26(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{object V114;
	V114=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V114);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[66]);
	vs_base=vs_top;
	unwind(fr,VV[66]);}
	}
}
/*	local function CLOSURE	*/

static void LC25(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{object V115;
	V115=(base[0]);
	vs_top=sup;
	base[1]= VV[45];
	base[2]= (V115);
	vs_top=(vs_base=base+1)+2;
	Lwrite_string();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC24(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V116;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V116=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V116);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[46]);
	vs_base=vs_top;
	unwind(fr,VV[46]);}
	}
}
/*	local function CLOSURE	*/

static void LC23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{register object V117;
	V117=(base[0]);
	vs_top=sup;
	base[1]= (V117);
	base[2]= VV[36];
	base[3]= VV[37];
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC22(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{register object V118;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V118=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V118);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[41]);
	vs_base=vs_top;
	unwind(fr,VV[41]);}
	}
}
/*	local function CLOSURE	*/

static void LC21(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	{object V119;
	V119=(base[0]);
	vs_top=sup;
	base[1]= (V119);
	base[2]= VV[30];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC20(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_check;
	{object V120;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V120=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V120);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[31]);
	vs_base=vs_top;
	unwind(fr,VV[31]);}
	}
}
/*	local function CLOSURE	*/

static void LC19(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V121;
	V121=(base[0]);
	vs_top=sup;
	base[1]= (V121);
	base[2]= VV[27];
	base[4]= Cnil;
	base[5]= (base0[3]->c.c_car);
	{object V122;
	V122= (base0[2]->c.c_car);
	 vs_top=base+6;
	 while(V122!=Cnil)
	 {vs_push((V122)->c.c_car);V122=(V122)->c.c_cdr;}
	vs_base=base+4;}
	Lformat();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC18(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	{object V123;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V123=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V123);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[28]);
	vs_base=vs_top;
	unwind(fr,VV[28]);}
	}
}
/*	local function CLOSURE	*/

static void LC17(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	{object V124;
	V124=(base[0]);
	vs_top=sup;
	if(type_of((V124))==t_cons||((V124))==Cnil){
	goto T240;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T240;
T240:;
	base[1]= (((long)length((V124)))==(2)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT81(){ call_or_link(VV[81],(void **)(void *)&Lnk81);} /* FIND-CLASS */
static void LnkT80(){ call_or_link(VV[80],(void **)(void *)&Lnk80);} /* REMOVE */
static object  LnkTLI78(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[78],(void **)(void *)&LnkLI78,first,ap);va_end(ap);return V1;} /* MAKE-RESTART */
static void LnkT77(){ call_or_link(VV[77],(void **)(void *)&Lnk77);} /* INVOKE-DEBUGGER */
static object  LnkTLI8(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[8],(void **)(void *)&LnkLI8,first,ap);va_end(ap);return V1;} /* SIGNAL */
static void LnkT76(){ call_or_link(VV[76],(void **)(void *)&Lnk76);} /* MAKE-CONDITION */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[75],(void **)(void *)&LnkLI75,1,first,ap);va_end(ap);return V1;} /* CONDITION-CLASS-P */
static object  LnkTLI74(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[74],(void **)(void *)&LnkLI74,first,ap);va_end(ap);return V1;} /* CERROR */
static object  LnkTLI73(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[73],(void **)(void *)&LnkLI73,1,first,ap);va_end(ap);return V1;} /* CONDITIONP */
static object  LnkTLI72(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[72],(void **)(void *)&LnkLI72,first,ap);va_end(ap);return V1;} /* BREAK */
static void LnkT71(){ call_or_link(VV[71],(void **)(void *)&Lnk71);} /* TYPEP */
static void LnkT70(){ call_or_link(VV[70],(void **)(void *)&Lnk70);} /* COERCE-TO-CONDITION */
static void LnkT21(){ call_or_link(VV[21],(void **)(void *)&Lnk21);} /* ERROR */
static void LnkT69(){ call_or_link(VV[69],(void **)(void *)&Lnk69);} /* EVERY */
static void LnkT67(){ call_or_link(VV[67],(void **)(void *)&Lnk67);} /* *MAKE-SPECIAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

