
#include "cmpinclude.h"
#include "clcs_handler.h"
void init_clcs_handler(){do_init(VV);}
/*	local entry for function progn 'compile2181	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk66)();
	vs_top=sup;
	{object V1 = Cnil;
	VMR1(V1)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2193	*/

static object LI2()

{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T4;}
	goto T3;
	goto T4;
T4:;
	setq(VV[0],Cnil);
	goto T3;
T3:;
	{object V2 = Cnil;
	VMR2(V2)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2206	*/

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
	vs_reserve(VM4);
	check_arg(2);
	vs_top=sup;
	{object V4=base[0]->c.c_cdr;
	if(endp(V4))invalid_macro_call();
	base[2]= (V4->c.c_car);
	V4=V4->c.c_cdr;
	base[3]= V4;}
	base[4]= VV[67];
	base[5]= base[2];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk68)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T9;}
	base[4]= VV[1];
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk21)();
	vs_top=sup;
	goto T9;
T9:;
	{object V6;
	object V7= base[2];
	if(endp(V7)){
	V5= Cnil;
	goto T15;}
	base[4]=V6=MMcons(Cnil,Cnil);
	goto T16;
T16:;
	(V6->c.c_car)= list(3,VV[3],list(2,VV[5],car((V7->c.c_car))),cadr((V7->c.c_car)));
	V7=MMcdr(V7);
	if(endp(V7)){
	V5= base[4];
	goto T15;}
	V6=MMcdr(V6)=MMcons(Cnil,Cnil);
	goto T16;}
	goto T15;
T15:;
	V9= list(2,VV[0],list(3,VV[3],make_cons(VV[4],V5),VV[0]));
	base[4]= listA(3,VV[2],make_cons(/* INLINE-ARGS */V9,Cnil),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function progn 'compile2244	*/

static object LI5()

{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	base[0]= VV[6];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk66)();
	vs_top=sup;
	{object V10 = Cnil;
	VMR5(V10)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2256	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	base[0]= VV[6];
	vs_top=(vs_base=base+0)+1;
	Lboundp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T21;}
	goto T20;
	goto T21;
T21:;
	setq(VV[6],Cnil);
	goto T20;
T20:;
	{object V11 = Cnil;
	VMR6(V11)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2269	*/

static object LI7()

{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;
	{object V12 = Cnil;
	VMR7(V12)}
	return Cnil;
}
/*	function definition for SIGNAL	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_reserve(VM8);
	bds_check;
	{object V13;
	object V14;
	if(vs_top-vs_base<1) too_few_arguments();
	V13=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V14=(base[1]);
	vs_top=sup;
	{register object V15;
	base[3]= (V13);
	base[4]= (V14);
	base[5]= VV[7];
	base[6]= VV[8];
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk69)();
	vs_top=sup;
	V15= vs_base[0];
	bds_bind(VV[0],symbol_value(VV[0]));
	base[3]= (V15);
	base[4]= symbol_value(VV[6]);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T31;}
	base[3]= VV[9];
	base[4]= (V15);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk71)();
	vs_top=sup;
	goto T31;
T31:;
	goto T40;
T40:;
	if(((VV[0]->s.s_dbind))!=Cnil){
	goto T42;}
	goto T38;
	goto T42;
T42:;
	{register object V16;
	{register object V17;
	V17= car((VV[0]->s.s_dbind));
	(VV[0]->s.s_dbind)= cdr((VV[0]->s.s_dbind));
	V16= (V17);}
	{register object V18;
	register object V19;
	V18= (V16);
	V19= car((V18));
	goto T52;
T52:;
	if(!(endp_prop((V18)))){
	goto T53;}
	goto T41;
	goto T53;
T53:;
	base[4]= (V15);
	base[5]= car((V19));
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T57;}
	(void)((
	V20 = cdr((V19)),
	(type_of(V20) == t_sfun ?(*((V20)->sfn.sfn_self)):
	(fcall.fun=(V20),fcall.argd=1,fcalln))((V15))));
	goto T41;
	goto T57;
T57:;
	V18= cdr((V18));
	V19= car((V18));
	goto T52;}}
	goto T41;
T41:;
	goto T40;
	goto T38;
T38:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	bds_unwind1;
	return;}
	}
}
/*	function definition for COERCE-TO-CONDITION	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_reserve(VM9);
	{register object V21;
	register object V22;
	object V23;
	object V24;
	check_arg(4);
	V21=(base[0]);
	V22=(base[1]);
	V23=(base[2]);
	V24=(base[3]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V21);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk72)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T70;}
	if(((V22))==Cnil){
	goto T73;}
	base[4]= VV[10];
	base[5]= VV[11];
	base[6]= VV[12];
	base[7]= (V22);
	base[8]= VV[13];
	base[9]= VV[14];
	base[10]= VV[15];
	base[11]= VV[16];
	base[12]= VV[17];
	base[13]= list(2,(V21),(V24));
	vs_top=(vs_base=base+4)+10;
	(void) (*Lnk73)();
	vs_top=sup;
	goto T73;
T73:;
	base[4]= (V21);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T70;
T70:;
	if(type_of((V21))==t_symbol){
	goto T86;}
	base[4]= (V21);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk74)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T87;}
	goto T86;
T86:;
	base[4]=symbol_function(VV[75]);
	base[5]= (V21);
	{object V25;
	V25= (V22);
	 vs_top=base+6;
	 while(!endp(V25))
	 {vs_push(car(V25));V25=cdr(V25);}
	vs_base=base+5;}
	(void) (*Lnk75)();
	return;
	goto T87;
T87:;
	if(!(type_of((V21))==t_string)){
	goto T95;}
	base[4]= (V23);
	base[5]= VV[15];
	base[6]= (V21);
	base[7]= VV[17];
	base[8]= (V22);
	vs_top=(vs_base=base+4)+5;
	(void) (*Lnk75)();
	return;
	goto T95;
T95:;
	base[4]= VV[11];
	base[5]= VV[12];
	base[6]= (V21);
	base[7]= VV[13];
	base[8]= VV[18];
	base[9]= VV[15];
	base[10]= VV[19];
	base[11]= VV[17];
	base[12]= list(2,(V24),(V21));
	vs_top=(vs_base=base+4)+9;
	(void) (*Lnk21)();
	return;
	}
}
/*	function definition for ERROR	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_reserve(VM10);
	{object V26;
	object V27;
	if(vs_top-vs_base<1) too_few_arguments();
	V26=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V27=(base[1]);
	vs_top=sup;
	{object V28;
	base[2]= (V26);
	base[3]= (V27);
	base[4]= VV[20];
	base[5]= VV[21];
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk69)();
	vs_top=sup;
	V28= vs_base[0];
	base[2]= (V28);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk8)();
	vs_top=sup;
	base[2]= (V28);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk76)();
	return;}
	}
}
/*	function definition for CERROR	*/

static void L11()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM11; VC11
	vs_reserve(VM11);
	bds_check;
	{VOL object V29;
	if(vs_top-vs_base<2) too_few_arguments();
	base[0]=MMcons(base[0],Cnil);
	V29=(base[1]);
	vs_base=vs_base+2;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	base[2]=MMcons(base[2],base[0]);
	vs_top=sup;
	base[3]=MMcons(Cnil,base[2]);
	base[4]=alloc_frame_id();
	base[4]=MMcons(base[4],base[3]);
	frs_push(FRS_CATCH,(base[4]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[28]))goto T121;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[6]= VV[23];
	base[7]= VV[24];
	base[8]= VV[25];
	base[9]= 
	make_cclosure_new(LC17,Cnil,base[4],Cdata);
	base[10]= VV[26];
	base[11]= 
	make_cclosure_new(LC18,Cnil,base[4],Cdata);
	vs_top=(vs_base=base+6)+6;
	(void) (*Lnk77)();
	vs_top=sup;
	V30= vs_base[0];
	V31= make_cons(V30,Cnil);
	base[5]= make_cons(/* INLINE-ARGS */V31,symbol_value(VV[22]));
	bds_bind(VV[22],base[5]);
	base[6]= (V29);
	{object V32;
	V32= (base[2]->c.c_car);
	 vs_top=base+7;
	 while(!endp(V32))
	 {vs_push(car(V32));V32=cdr(V32);}
	vs_base=base+6;}
	(void) (*Lnk21)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T119;
	goto T121;
T121:;
	{object V33;
	V33= (base[3]->c.c_car);
	ck_larg_exactly(0,(V33));
	base[5]= Cnil;
	base[6]= Ct;
	vs_top=(vs_base=base+5)+2;
	vs_top=sup;
	frs_pop();
	goto T119;}
	frs_pop();
	goto T119;
	goto T119;
T119:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	}
}
/*	function definition for BREAK	*/

static void L12()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM12; VC12
	vs_reserve(VM12);
	bds_check;
	{VOL object V34;
	VOL object V35;
	vs_top[0]=Cnil;
	{object *p=vs_top, *q=vs_base+1;
	 for(;p>q;p--)p[-1]=MMcons(p[-1],p[0]);}
	if(vs_base>=vs_top){vs_top=sup;goto T135;}
	V34=(base[0]);
	V35=(base[1]);
	vs_top=sup;
	goto T136;
	goto T135;
T135:;
	V34= VV[29];
	V35= Cnil;
	goto T136;
T136:;
	base[2]=MMcons(Cnil,Cnil);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[31]))goto T140;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[5]= VV[23];
	base[6]= VV[24];
	base[7]= VV[25];
	base[8]= 
	make_cclosure_new(LC19,Cnil,base[3],Cdata);
	base[9]= VV[26];
	base[10]= 
	make_cclosure_new(LC20,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+5)+6;
	(void) (*Lnk77)();
	vs_top=sup;
	V36= vs_base[0];
	V37= make_cons(V36,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V37,symbol_value(VV[22]));
	bds_bind(VV[22],base[4]);
	base[6]= VV[7];
	base[7]= VV[15];
	base[8]= (V34);
	base[9]= VV[17];
	base[10]= (V35);
	vs_top=(vs_base=base+6)+5;
	(void) (*Lnk75)();
	vs_top=sup;
	base[5]= vs_base[0];
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk76)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T138;
	goto T140;
T140:;
	{object V38;
	V38= (base[2]->c.c_car);
	ck_larg_exactly(0,(V38));
	base[4]= Cnil;
	base[5]= Ct;
	vs_top=(vs_base=base+4)+2;
	vs_top=sup;
	frs_pop();
	goto T138;}
	frs_pop();
	goto T138;
	goto T138;
T138:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for WARN	*/

static void L13()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM13; VC13
	vs_reserve(VM13);
	bds_check;
	{VOL object V39;
	VOL object V40;
	if(vs_top-vs_base<1) too_few_arguments();
	V39=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V40=(base[1]);
	vs_top=sup;
	{VOL object V41;
	base[2]= (V39);
	base[3]= (V40);
	base[4]= VV[32];
	base[5]= VV[33];
	vs_top=(vs_base=base+2)+4;
	(void) (*Lnk69)();
	vs_top=sup;
	V41= vs_base[0];
	goto T165;
T165:;
	base[2]= (V41);
	base[3]= VV[34];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T166;}
	goto T163;
	goto T166;
T166:;
	base[2]=MMcons(Cnil,Cnil);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[41]))goto T173;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[5]= VV[23];
	base[6]= VV[35];
	base[7]= VV[25];
	base[8]= 
	make_cclosure_new(LC21,Cnil,base[3],Cdata);
	base[9]= VV[26];
	base[10]= 
	make_cclosure_new(LC22,Cnil,base[3],Cdata);
	base[11]= VV[38];
	base[12]= symbol_function(VV[78]);
	vs_top=(vs_base=base+5)+8;
	(void) (*Lnk77)();
	vs_top=sup;
	V42= vs_base[0];
	V43= make_cons(V42,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V43,symbol_value(VV[22]));
	bds_bind(VV[22],base[4]);
	base[5]= VV[39];
	base[6]= VV[37];
	base[7]= (V41);
	base[8]= VV[40];
	vs_top=(vs_base=base+5)+4;
	(void) (*Lnk21)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T171;
	goto T173;
T173:;
	{register object V44;
	V44= (base[2]->c.c_car);
	ck_larg_exactly(1,(V44));
	base[4]=((V44))->c.c_car;
	V41= base[4];
	frs_pop();
	goto T165;}
	frs_pop();
	goto T171;
	goto T171;
T171:;
	goto T163;
	goto T163;
T163:;
	if((symbol_value(VV[42]))==Cnil){
	goto T191;}
	base[2]= VV[43];
	base[3]= (V41);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk71)();
	vs_top=sup;
	goto T191;
T191:;
	base[2]=MMcons(Cnil,Cnil);
	base[3]=alloc_frame_id();
	base[3]=MMcons(base[3],base[2]);
	frs_push(FRS_CATCH,(base[3]->c.c_car));
	if(nlj_active){
	nlj_active=FALSE;
	if(eql(nlj_tag,VV[46]))goto T198;
	FEerror("The GO tag ~s is not established.",1,nlj_tag);
	}
	base[5]= VV[23];
	base[6]= VV[44];
	base[7]= VV[25];
	base[8]= 
	make_cclosure_new(LC23,Cnil,base[3],Cdata);
	base[9]= VV[26];
	base[10]= 
	make_cclosure_new(LC24,Cnil,base[3],Cdata);
	vs_top=(vs_base=base+5)+6;
	(void) (*Lnk77)();
	vs_top=sup;
	V45= vs_base[0];
	V46= make_cons(V45,Cnil);
	base[4]= make_cons(/* INLINE-ARGS */V46,symbol_value(VV[22]));
	bds_bind(VV[22],base[4]);
	base[5]= (V41);
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk8)();
	vs_top=sup;
	frs_pop();
	bds_unwind1;
	goto T196;
	goto T198;
T198:;
	{object V47;
	V47= (base[2]->c.c_car);
	ck_larg_exactly(0,(V47));
	frs_pop();
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	frs_pop();
	goto T196;
	goto T196;
T196:;
	base[2]= symbol_value(VV[47]);
	base[3]= VV[48];
	base[4]= (V41);
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	macro definition for HANDLER-CASE	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_reserve(VM14);
	check_arg(2);
	vs_top=sup;
	{object V48=base[0]->c.c_cdr;
	if(endp(V48))invalid_macro_call();
	base[2]= (V48->c.c_car);
	V48=V48->c.c_cdr;
	base[3]= V48;}
	{object V49;
	{register object x= VV[49],V50= base[3];
	while(!endp(V50))
	if(type_of(V50->c.c_car)==t_cons &&eql(x,V50->c.c_car->c.c_car)){
	V49= (V50->c.c_car);
	goto T213;
	}else V50=V50->c.c_cdr;
	V49= Cnil;}
	goto T213;
T213:;
	if(((V49))==Cnil){
	goto T215;}
	{object V51;
	object V52;
	base[4]= VV[50];
	vs_top=(vs_base=base+4)+1;
	Lmake_symbol();
	vs_top=sup;
	V51= vs_base[0];
	base[4]= VV[51];
	vs_top=(vs_base=base+4)+1;
	Lmake_symbol();
	vs_top=sup;
	V52= vs_base[0];
	V53= list(2,VV[54],make_cons(VV[55],cdr((V49))));
	V54= list(3,VV[56],(V51),base[2]);
	base[4]= (V49);
	base[5]= base[3];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk79)();
	vs_top=sup;
	V55= vs_base[0];
	base[4]= list(3,VV[52],(V52),list(3,VV[53],/* INLINE-ARGS */V53,list(3,VV[52],(V51),list(3,VV[56],(V52),listA(3,VV[57],/* INLINE-ARGS */V54,V55)))));
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T215;
T215:;
	{object V56;
	register object V57;
	object V58;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V56= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V57= vs_base[0];
	{object V59;
	object V60= base[3];
	if(endp(V60)){
	V58= Cnil;
	goto T226;}
	base[4]=V59=MMcons(Cnil,Cnil);
	goto T227;
T227:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V62= vs_base[0];
	(V59->c.c_car)= make_cons(V62,(V60->c.c_car));
	V60=MMcdr(V60);
	if(endp(V60)){
	V58= base[4];
	goto T226;}
	V59=MMcdr(V59)=MMcons(Cnil,Cnil);
	goto T227;}
	goto T226;
T226:;
	V63= list(2,(V57),Cnil);
	V64= make_cons(/* INLINE-ARGS */V63,Cnil);
	{object V66;
	object V67= (V58);
	if(endp(V67)){
	V65= Cnil;
	goto T230;}
	base[4]=V66=MMcons(Cnil,Cnil);
	goto T231;
T231:;
	V69= cadr((V67->c.c_car));
	if((caddr((V67->c.c_car)))==Cnil){
	goto T235;}
	V71= list(3,VV[61],(V57),VV[62]);
	V70= make_cons(/* INLINE-ARGS */V71,Cnil);
	goto T233;
	goto T235;
T235:;
	V70= Cnil;
	goto T233;
T233:;
	V72= list(2,VV[63],car((V67->c.c_car)));
	V73= make_cons(/* INLINE-ARGS */V72,Cnil);
	(V66->c.c_car)= list(2,/* INLINE-ARGS */V69,list(2,VV[54],listA(3,VV[55],VV[60],append(V70,/* INLINE-ARGS */V73))));
	V67=MMcdr(V67);
	if(endp(V67)){
	V65= base[4];
	goto T230;}
	V66=MMcdr(V66)=MMcons(Cnil,Cnil);
	goto T231;}
	goto T230;
T230:;
	V74= list(3,VV[59],V65,list(3,VV[56],(V56),base[2]));
	{object V76;
	object V77= (V58);
	if(endp(V77)){
	V75= Cnil;
	goto T237;}
	base[4]=V76=MMcons(Cnil,Cnil);
	goto T238;
T238:;
	{register object V78;
	V78= (V77->c.c_car);
	V79= car((V78));
	{register object V81;
	V81= cdddr((V78));
	if((caddr((V78)))==Cnil){
	goto T244;}
	V83= list(2,caaddr((V78)),(V57));
	V82= listA(3,VV[2],make_cons(/* INLINE-ARGS */V83,Cnil),(V81));
	goto T242;
	goto T244;
T244:;
	if((cdr((V81)))!=Cnil){
	goto T247;}
	V82= car((V81));
	goto T242;
	goto T247;
T247:;
	V82= make_cons(VV[64],(V81));
	goto T242;
T242:;
	V80= list(3,VV[56],(V56),V82);}
	(V76->c.c_cdr)= list(2,/* INLINE-ARGS */V79,V80);}
	{object cdr_V76=MMcdr(V76);while(!endp(cdr_V76)) {cdr_V76=MMcdr(cdr_V76);V76=MMcdr(V76);}}
	V77=MMcdr(V77);
	if(endp(V77)){
	base[4]=base[4]->c.c_cdr;
	V75= base[4];
	goto T237;}
	goto T238;}
	goto T237;
T237:;
	base[4]= list(3,VV[52],(V56),list(4,VV[2],/* INLINE-ARGS */V64,(V57),listA(3,VV[58],/* INLINE-ARGS */V74,V75)));
	vs_top=(vs_base=base+4)+1;
	return;}}
}
/*	macro definition for IGNORE-ERRORS	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_reserve(VM15);
	check_arg(2);
	vs_top=sup;
	{object V84=base[0]->c.c_cdr;
	base[2]= V84;}
	base[3]= list(3,VV[57],make_cons(VV[64],base[2]),VV[65]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function CLOSURE	*/

static void LC24(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_reserve(VM16);
	{object V85;
	check_arg(1);
	V85=(base[0]);
	vs_top=sup;
	base[1]= VV[45];
	base[2]= (V85);
	vs_top=(vs_base=base+1)+2;
	Lwrite_string();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_reserve(VM17);
	{object V86;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V86=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V86);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[46]);
	vs_base=vs_top;
	unwind(fr,VV[46]);}
	}
}
/*	local function CLOSURE	*/

static void LC22(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_reserve(VM18);
	{register object V87;
	check_arg(1);
	V87=(base[0]);
	vs_top=sup;
	base[1]= (V87);
	base[2]= VV[36];
	base[3]= VV[37];
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC21(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_reserve(VM19);
	{register object V88;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V88=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V88);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[41]);
	vs_base=vs_top;
	unwind(fr,VV[41]);}
	}
}
/*	local function CLOSURE	*/

static void LC20(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_reserve(VM20);
	{object V89;
	check_arg(1);
	V89=(base[0]);
	vs_top=sup;
	base[1]= (V89);
	base[2]= VV[30];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC19(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_reserve(VM21);
	{object V90;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V90=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V90);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[31]);
	vs_base=vs_top;
	unwind(fr,VV[31]);}
	}
}
/*	local function CLOSURE	*/

static void LC18(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_reserve(VM22);
	{object V91;
	check_arg(1);
	V91=(base[0]);
	vs_top=sup;
	base[1]= (V91);
	base[2]= VV[27];
	base[4]= Cnil;
	base[5]= (base0[3]->c.c_car);
	{object V92;
	V92= (base0[2]->c.c_car);
	 vs_top=base+6;
	 while(!endp(V92))
	 {vs_push(car(V92));V92=cdr(V92);}
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

static void LC17(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM23; VC23
	vs_reserve(VM23);
	{object V93;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V93=(base[0]);
	vs_top=sup;
	(base0[1]->c.c_car)= (V93);
	{frame_ptr fr;
	fr=frs_sch((base0[0]->c.c_car));
	if(fr==NULL)FEerror("The GO tag ~s is missing.",1,VV[28]);
	vs_base=vs_top;
	unwind(fr,VV[28]);}
	}
}
/*	local function CLOSURE	*/

static void LC16(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_reserve(VM24);
	{object V94;
	check_arg(1);
	V94=(base[0]);
	vs_top=sup;
	if(type_of((V94))==t_cons||((V94))==Cnil){
	goto T270;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T270;
T270:;
	base[1]= (((long)length((V94)))==(2)?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT79(){ call_or_link(VV[79],(void **)&Lnk79);} /* REMOVE */
static void LnkT77(){ call_or_link(VV[77],(void **)&Lnk77);} /* MAKE-RESTART */
static void LnkT76(){ call_or_link(VV[76],(void **)&Lnk76);} /* INVOKE-DEBUGGER */
static void LnkT8(){ call_or_link(VV[8],(void **)&Lnk8);} /* SIGNAL */
static void LnkT75(){ call_or_link(VV[75],(void **)&Lnk75);} /* MAKE-CONDITION */
static void LnkT74(){ call_or_link(VV[74],(void **)&Lnk74);} /* CONDITION-CLASS-P */
static void LnkT73(){ call_or_link(VV[73],(void **)&Lnk73);} /* CERROR */
static void LnkT72(){ call_or_link(VV[72],(void **)&Lnk72);} /* CONDITIONP */
static void LnkT71(){ call_or_link(VV[71],(void **)&Lnk71);} /* BREAK */
static void LnkT70(){ call_or_link(VV[70],(void **)&Lnk70);} /* TYPEP */
static void LnkT69(){ call_or_link(VV[69],(void **)&Lnk69);} /* COERCE-TO-CONDITION */
static void LnkT21(){ call_or_link(VV[21],(void **)&Lnk21);} /* ERROR */
static void LnkT68(){ call_or_link(VV[68],(void **)&Lnk68);} /* EVERY */
static void LnkT66(){ call_or_link(VV[66],(void **)&Lnk66);} /* *MAKE-SPECIAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

