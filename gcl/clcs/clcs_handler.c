
#include "cmpinclude.h"
#include "clcs_handler.h"
void init_clcs_handler(){do_init(VV);}
/*	local entry for function progn 'compile2195	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	{object V1 = Cnil;
	VMR1(V1)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2207	*/

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
/*	local entry for function progn 'compile2220	*/

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
	base[4]= VV[69];
	base[5]= base[2];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk70)();
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
/*	local entry for function progn 'compile2258	*/

static object LI5()

{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	base[0]= VV[6];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	{object V10 = Cnil;
	VMR5(V10)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2270	*/

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
/*	local entry for function progn 'compile2283	*/

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
	(void) (*Lnk71)();
	vs_top=sup;
	V17= vs_base[0];
	bds_bind(VV[0],(VV[0]->s.s_dbind));
	base[1]= (V17);
	base[2]= (VV[6]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk72)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T29;}
	(void)((VFUN_NARGS=2,(*(LnkLI73))(VV[9],(V17))));
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
	(void) (*Lnk72)();
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
	if(((*(LnkLI74))((V24)))==Cnil){
	goto T66;}
	if(((V25))==Cnil){
	goto T68;}
	V28= list(2,(V24),(V27));
	(void)((VFUN_NARGS=10,(*(LnkLI75))(VV[10],VV[11],VV[12],(V25),VV[13],VV[14],VV[15],VV[16],VV[17],/* INLINE-ARGS */V28)));
	goto T68;
T68:;
	base[4]= (V24);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T66;
T66:;
	if(type_of((V24))==t_symbol){
	goto T71;}
	if(((*(LnkLI76))((V24)))==Cnil){
	goto T72;}
	goto T71;
T71:;
	base[4]=VV[77]->s.s_gfdef;
	base[5]= (V24);
	{object V29;
	V29= (V25);
	 vs_top=base+6;
	 while(V29!=Cnil)
	 {vs_push((V29)->c.c_car);V29=(V29)->c.c_cdr;}
	vs_base=base+5;}
	(void) (*Lnk77)();
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
	(void) (*Lnk77)();
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
	(void) (*Lnk71)();
	vs_top=sup;
	V32= vs_base[0];
	(void)((VFUN_NARGS=1,(*(LnkLI8))((V32))));
	base[2]= (V32);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk78)();
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
	V39= (VFUN_NARGS=6,(*(LnkLI79))(VV[23],VV[24],VV[25],V37,VV[26],V38));
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
	V49= (VFUN_NARGS=6,(*(LnkLI79))(VV[23],VV[24],VV[25],V47,VV[26],V48));
	V50= make_cons(/* INLINE-ARGS */V49,Cnil);
	base[2]= make_cons(/* INLINE-ARGS */V50,(VV[22]->s.s_dbind));
	bds_bind(VV[22],base[2]);
	base[4]= VV[7];
	base[5]= VV[15];
	base[6]= (V44);
	base[7]= VV[17];
	base[8]= (V45);
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk77)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk78)();
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
	(void) (*Lnk71)();
	vs_top=sup;
	V57= vs_base[0];
	goto T138;
T138:;
	base[0]= (V57);
	base[1]= VV[34];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk72)();
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
	if(eql(nlj_tag,VV[42]))goto T146;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V58= 
	make_cclosure_new(LC22,Cnil,base[1],Cdata);
	V59= 
	make_cclosure_new(LC23,Cnil,base[1],Cdata);
	V60= (VV[80]->s.s_gfdef);
	V61= (VFUN_NARGS=8,(*(LnkLI79))(VV[23],VV[35],VV[25],V58,VV[26],V59,VV[38],V60));
	V62= make_cons(/* INLINE-ARGS */V61,Cnil);
	base[2]= make_cons(/* INLINE-ARGS */V62,(VV[22]->s.s_dbind));
	bds_bind(VV[22],base[2]);
	{register object V63;
	base[3]= VV[39];
	base[4]= list(3,VV[37],(V57),VV[40]);
	base[5]= VV[20];
	base[6]= VV[21];
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk71)();
	vs_top=sup;
	V63= vs_base[0];
	{register object V65;
	V65= (V63);
	V66= (VFUN_NARGS=1,(*(LnkLI81))(VV[35]));
	V67= make_cons(/* INLINE-ARGS */V66,Cnil);
	{register object x= (V65),V69= (VV[41]->s.s_dbind);
	while(V69!=Cnil)
	if(eql(x,V69->c.c_car->c.c_car) &&V69->c.c_car != Cnil){
	V68= (V69->c.c_car);
	goto T158;
	}else V69=V69->c.c_cdr;
	V68= Cnil;}
	goto T158;
T158:;
	V70= append(/* INLINE-ARGS */V67,CMPcdr(V68));
	V64= make_cons((V65),/* INLINE-ARGS */V70);}
	base[3]= make_cons(V64,(VV[41]->s.s_dbind));
	bds_bind(VV[41],base[3]);
	base[4]= (V63);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk21)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	goto T144;}
	goto T146;
T146:;
	{register object V71;
	V71= (base[0]->c.c_car);
	base[2]=((V71))->c.c_car;
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
	if(((VV[43]->s.s_dbind))==Cnil){
	goto T163;}
	(void)((VFUN_NARGS=2,(*(LnkLI73))(VV[44],(V57))));
	goto T163;
T163:;
	base[0]=MMcons(Cnil,Cnil);
	base[1]=alloc_frame_id();
	base[1]=MMcons(base[1],base[0]);
	frs_push(FRS_CATCH,(base[1]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[47]))goto T168;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V72= 
	make_cclosure_new(LC24,Cnil,base[1],Cdata);
	V73= 
	make_cclosure_new(LC25,Cnil,base[1],Cdata);
	V74= (VFUN_NARGS=6,(*(LnkLI79))(VV[23],VV[45],VV[25],V72,VV[26],V73));
	V75= make_cons(/* INLINE-ARGS */V74,Cnil);
	base[2]= make_cons(/* INLINE-ARGS */V75,(VV[22]->s.s_dbind));
	bds_bind(VV[22],base[2]);
	{object V76;
	base[3]= (V57);
	base[4]= Cnil;
	base[5]= VV[7];
	base[6]= VV[8];
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk71)();
	vs_top=sup;
	V76= vs_base[0];
	V79= (VFUN_NARGS=1,(*(LnkLI81))(VV[45]));
	V80= make_cons(/* INLINE-ARGS */V79,Cnil);
	{register object x= V76,V82= (VV[41]->s.s_dbind);
	while(V82!=Cnil)
	if(eql(x,V82->c.c_car->c.c_car) &&V82->c.c_car != Cnil){
	V81= (V82->c.c_car);
	goto T179;
	}else V82=V82->c.c_cdr;
	V81= Cnil;}
	goto T179;
T179:;
	V83= append(/* INLINE-ARGS */V80,CMPcdr(V81));
	V77= make_cons(V76,/* INLINE-ARGS */V83);
	base[3]= make_cons(V77,(VV[41]->s.s_dbind));
	bds_bind(VV[41],base[3]);
	V84= (VFUN_NARGS=1,(*(LnkLI8))((V76)));
	frs_pop();
	bds_unwind1;
	bds_unwind1;
	goto T166;}
	goto T168;
T168:;
	{object V85;
	V85= (base[0]->c.c_car);
	frs_pop();
	{object V86 = Cnil;
	VMR13(V86)}}
	frs_pop();
	goto T166;
	goto T166;
T166:;
	base[0]= (VV[48]->s.s_dbind);
	base[1]= VV[49];
	base[2]= (V57);
	vs_top=(vs_base=base+0)+3;
	Lformat();
	vs_top=sup;
	{object V87 = Cnil;
	VMR13(V87)}}
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
	{object V88=base[0]->c.c_cdr;
	base[2]= (V88->c.c_car);
	V88=V88->c.c_cdr;
	base[3]= V88;}
	{object V89;
	{register object x= VV[50],V90= base[3];
	while(V90!=Cnil)
	if(eql(x,V90->c.c_car->c.c_car) &&V90->c.c_car != Cnil){
	V89= (V90->c.c_car);
	goto T185;
	}else V90=V90->c.c_cdr;
	V89= Cnil;}
	goto T185;
T185:;
	if(((V89))==Cnil){
	goto T187;}
	{object V91;
	object V92;
	base[4]= VV[51];
	vs_top=(vs_base=base+4)+1;
	Lmake_symbol();
	vs_top=sup;
	V91= vs_base[0];
	base[4]= VV[52];
	vs_top=(vs_base=base+4)+1;
	Lmake_symbol();
	vs_top=sup;
	V92= vs_base[0];
	V93= list(2,VV[55],make_cons(VV[56],CMPcdr((V89))));
	V94= list(3,VV[57],(V91),base[2]);
	base[4]= (V89);
	base[5]= base[3];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk82)();
	vs_top=sup;
	V95= vs_base[0];
	base[4]= list(3,VV[53],(V92),list(3,VV[54],/* INLINE-ARGS */V93,list(3,VV[53],(V91),list(3,VV[57],(V92),listA(3,VV[58],/* INLINE-ARGS */V94,V95)))));
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T187;
T187:;
	{object V96;
	register object V97;
	object V98;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V96= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V97= vs_base[0];
	{object V99;
	object V100= base[3];
	if(V100==Cnil){
	V98= Cnil;
	goto T198;}
	base[4]=V99=MMcons(Cnil,Cnil);
	goto T199;
T199:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V102= vs_base[0];
	(V99->c.c_car)= make_cons(V102,(V100->c.c_car));
	if((V100=MMcdr(V100))==Cnil){
	V98= base[4];
	goto T198;}
	V99=MMcdr(V99)=MMcons(Cnil,Cnil);
	goto T199;}
	goto T198;
T198:;
	V103= list(2,(V97),Cnil);
	V104= make_cons(/* INLINE-ARGS */V103,Cnil);
	{object V106;
	object V107= (V98);
	if(V107==Cnil){
	V105= Cnil;
	goto T202;}
	base[4]=V106=MMcons(Cnil,Cnil);
	goto T203;
T203:;
	V109= CMPcadr((V107->c.c_car));
	if((CMPcaddr((V107->c.c_car)))==Cnil){
	goto T207;}
	V111= list(3,VV[62],(V97),VV[63]);
	V110= make_cons(/* INLINE-ARGS */V111,Cnil);
	goto T205;
	goto T207;
T207:;
	V110= Cnil;
	goto T205;
T205:;
	V112= list(2,VV[64],CMPcar((V107->c.c_car)));
	V113= make_cons(/* INLINE-ARGS */V112,Cnil);
	(V106->c.c_car)= list(2,/* INLINE-ARGS */V109,list(2,VV[55],listA(3,VV[56],VV[61],append(V110,/* INLINE-ARGS */V113))));
	if((V107=MMcdr(V107))==Cnil){
	V105= base[4];
	goto T202;}
	V106=MMcdr(V106)=MMcons(Cnil,Cnil);
	goto T203;}
	goto T202;
T202:;
	V114= list(3,VV[60],V105,list(3,VV[57],(V96),base[2]));
	{object V116;
	object V117= (V98);
	if(V117==Cnil){
	V115= Cnil;
	goto T209;}
	base[4]=V116=MMcons(Cnil,Cnil);
	goto T210;
T210:;
	{register object V118;
	V118= (V117->c.c_car);
	V119= CMPcar((V118));
	{register object V121;
	V121= CMPcdddr((V118));
	if((CMPcaddr((V118)))==Cnil){
	goto T216;}
	V123= list(2,CMPcaaddr((V118)),(V97));
	V122= listA(3,VV[2],make_cons(/* INLINE-ARGS */V123,Cnil),(V121));
	goto T214;
	goto T216;
T216:;
	if((CMPcdr((V121)))!=Cnil){
	goto T219;}
	V122= CMPcar((V121));
	goto T214;
	goto T219;
T219:;
	V122= make_cons(VV[65],(V121));
	goto T214;
T214:;
	V120= list(3,VV[57],(V96),V122);}
	(V116->c.c_cdr)= list(2,/* INLINE-ARGS */V119,V120);}
	while(MMcdr(V116)!=Cnil)V116=MMcdr(V116);
	if((V117=MMcdr(V117))==Cnil){
	base[4]=base[4]->c.c_cdr;
	V115= base[4];
	goto T209;}
	goto T210;}
	goto T209;
T209:;
	base[4]= list(3,VV[53],(V96),list(4,VV[2],/* INLINE-ARGS */V104,(V97),listA(3,VV[59],/* INLINE-ARGS */V114,V115)));
	vs_top=(vs_base=base+4)+1;
	return;}}
}
/*	macro definition for IGNORE-ERRORS	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	vs_top=sup;
	{object V124=base[0]->c.c_cdr;
	base[2]= V124;}
	base[3]= list(3,VV[58],make_cons(VV[65],base[2]),VV[66]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	function definition for FIND-CLASS-NO-ERROR	*/

static void L16()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM16; VC16
	vs_check;
	bds_check;
	{VOL object V125;
	V125=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]=MMcons(Cnil,Cnil);
	base[2]=alloc_frame_id();
	base[2]=MMcons(base[2],base[1]);
	frs_push(FRS_CATCH,(base[2]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[67]))goto T223;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	V126= 
	make_cclosure_new(LC26,Cnil,base[2],Cdata);
	V127= make_cons(VV[21],V126);
	V128= make_cons(/* INLINE-ARGS */V127,Cnil);
	base[3]= make_cons(/* INLINE-ARGS */V128,(VV[0]->s.s_dbind));
	bds_bind(VV[0],base[3]);
	base[4]= (V125);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk83)();
	frs_pop();
	bds_unwind1;
	return;
	goto T223;
T223:;
	{object V129;
	V129= (base[1]->c.c_car);
	base[3]= Cnil;
	base[4]= (V129);
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
	{object V130;
	V130=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V130);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[67]);
	vs_base=vs_top;
	unwind(fr,VV[67]);}
	}
}
/*	local function CLOSURE	*/

static void LC25(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{object V131;
	V131=(base[0]);
	vs_top=sup;
	base[1]= VV[46];
	base[2]= (V131);
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
	{object V132;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V132=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V132);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[47]);
	vs_base=vs_top;
	unwind(fr,VV[47]);}
	}
}
/*	local function CLOSURE	*/

static void LC23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{register object V133;
	V133=(base[0]);
	vs_top=sup;
	base[1]= (V133);
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
	{register object V134;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V134=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V134);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[42]);
	vs_base=vs_top;
	unwind(fr,VV[42]);}
	}
}
/*	local function CLOSURE	*/

static void LC21(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	{object V135;
	V135=(base[0]);
	vs_top=sup;
	base[1]= (V135);
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
	{object V136;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V136=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V136);
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
	{object V137;
	V137=(base[0]);
	vs_top=sup;
	base[1]= (V137);
	base[2]= VV[27];
	base[4]= Cnil;
	base[5]= (base0[3]->c.c_car);
	{object V138;
	V138= (base0[2]->c.c_car);
	 vs_top=base+6;
	 while(V138!=Cnil)
	 {vs_push((V138)->c.c_car);V138=(V138)->c.c_cdr;}
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
	{object V139;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V139=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V139);
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
	{object V140;
	V140=(base[0]);
	vs_top=sup;
	if(type_of((V140))==t_cons||((V140))==Cnil){
	goto T253;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T253;
T253:;
	base[1]= (((long)length((V140)))==(2)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT83(){ call_or_link(VV[83],(void **)(void *)&Lnk83);} /* FIND-CLASS */
static void LnkT82(){ call_or_link(VV[82],(void **)(void *)&Lnk82);} /* REMOVE */
static object  LnkTLI81(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[81],(void **)(void *)&LnkLI81,first,ap);va_end(ap);return V1;} /* FIND-RESTART */
static object  LnkTLI79(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[79],(void **)(void *)&LnkLI79,first,ap);va_end(ap);return V1;} /* MAKE-RESTART */
static void LnkT78(){ call_or_link(VV[78],(void **)(void *)&Lnk78);} /* INVOKE-DEBUGGER */
static object  LnkTLI8(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[8],(void **)(void *)&LnkLI8,first,ap);va_end(ap);return V1;} /* SIGNAL */
static void LnkT77(){ call_or_link(VV[77],(void **)(void *)&Lnk77);} /* MAKE-CONDITION */
static object  LnkTLI76(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[76],(void **)(void *)&LnkLI76,1,first,ap);va_end(ap);return V1;} /* CONDITION-CLASS-P */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[75],(void **)(void *)&LnkLI75,first,ap);va_end(ap);return V1;} /* CERROR */
static object  LnkTLI74(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[74],(void **)(void *)&LnkLI74,1,first,ap);va_end(ap);return V1;} /* CONDITIONP */
static object  LnkTLI73(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[73],(void **)(void *)&LnkLI73,first,ap);va_end(ap);return V1;} /* BREAK */
static void LnkT72(){ call_or_link(VV[72],(void **)(void *)&Lnk72);} /* TYPEP */
static void LnkT71(){ call_or_link(VV[71],(void **)(void *)&Lnk71);} /* COERCE-TO-CONDITION */
static void LnkT21(){ call_or_link(VV[21],(void **)(void *)&Lnk21);} /* ERROR */
static void LnkT70(){ call_or_link(VV[70],(void **)(void *)&Lnk70);} /* EVERY */
static void LnkT68(){ call_or_link(VV[68],(void **)(void *)&Lnk68);} /* *MAKE-SPECIAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

