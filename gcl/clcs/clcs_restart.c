
#include "cmpinclude.h"
#include "clcs_restart.h"
void init_clcs_restart(){do_init(VV);}
/*	local entry for function progn 'compile2191	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk69)();
	vs_top=sup;
	{object V1 = Cnil;
	VMR1(V1)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2203	*/

static object LI2()

{	 VMB2 VMS2 VMV2
	goto TTL;
TTL:;
	if(!((VV[0])->s.s_dbind!=OBJNULL)){
	goto T4;}
	goto T3;
	goto T4;
T4:;
	vs_base=vs_top;
	Lmake_hash_table();
	vs_top=sup;
	(VV[0]->s.s_dbind)= vs_base[0];
	goto T3;
T3:;
	{object V2 = Cnil;
	VMR2(V2)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2216	*/

static object LI3()

{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V3 = Cnil;
	VMR3(V3)}
	return Cnil;
}
/*	local entry for function progn 'compile2232	*/

static object LI4()

{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	base[0]= VV[1];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk69)();
	vs_top=sup;
	{object V4 = Cnil;
	VMR4(V4)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2244	*/

static object LI5()

{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	if(!((VV[1])->s.s_dbind!=OBJNULL)){
	goto T11;}
	goto T10;
	goto T11;
T11:;
	(VV[1]->s.s_dbind)= small_fixnum(-1);
	goto T10;
T10:;
	{object V5 = Cnil;
	VMR5(V5)}
	return Cnil;
}
/*	local entry for function progn 'compile2257	*/

static object LI6()

{	 VMB6 VMS6 VMV6
	goto TTL;
TTL:;
	{object V6 = Cnil;
	VMR6(V6)}
	return Cnil;
}
/*	local entry for function UNIQUE-ID	*/

static object LI7(V8)

object V8;
{	 VMB7 VMS7 VMV7
	goto TTL;
TTL:;{object V9;
	base[0]= (V8);
	base[1]= (VV[0]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	Lgethash();
	vs_top=sup;
	V9= vs_base[0];
	if(V9==Cnil)goto T15;
	{object V10 = V9;
	VMR7(V10)}
	goto T15;
T15:;}
	{object V12;
	object V13;
	V12= (VV[0]->s.s_dbind);
	(VV[1]->s.s_dbind)= number_plus((VV[1]->s.s_dbind),small_fixnum(1));
	V13= (VV[1]->s.s_dbind);
	base[1]= V8;
	base[2]= (V12);
	base[3]= (V13);
	vs_top=(vs_base=base+1)+3;
	siLhash_set();
	vs_top=sup;
	{object V14 = vs_base[0];
	VMR7(V14)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for PARSE-KEYWORD-PAIRS	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	{object V15;
	register object V16;
	V15=(base[0]);
	V16=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V17;
	register object V18;
	V17= (V15);
	V18= Cnil;
	goto T26;
T26:;
	if(((V17))==Cnil){
	goto T28;}
	{register object x= CMPcar((V17)),V19= (V16);
	while(V19!=Cnil)
	if(eql(x,V19->c.c_car)){
	goto T27;
	}else V19=V19->c.c_cdr;}
	goto T28;
T28:;
	base[2]= nreverse((V18));
	base[3]= (V17);
	vs_top=(vs_base=base+2)+2;
	return;
	goto T27;
T27:;
	{object V20;
	V20= CMPcddr((V17));
	V18= listA(3,CMPcadr((V17)),CMPcar((V17)),(V18));
	V17= (V20);}
	goto T26;}
	}
}
/*	macro definition for WITH-KEYWORD-PAIRS	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	vs_top=sup;
	{object V21=base[0]->c.c_cdr;
	{object V22= (V21->c.c_car);
	base[2]= (V22->c.c_car);
	V22=V22->c.c_cdr;
	base[3]= (V22->c.c_car);
	V22=V22->c.c_cdr;
	if(endp(V22)){
	base[4]= Cnil;
	} else {
	base[4]= (V22->c.c_car);}}
	V21=V21->c.c_cdr;
	base[5]= V21;}
	{register object V23;
	{register object x= VV[2],V24= base[2];
	while(V24!=Cnil)
	if(eql(x,V24->c.c_car)){
	V23= V24;
	goto T40;
	}else V24=V24->c.c_cdr;
	V23= Cnil;}
	goto T40;
T40:;
	if(((long)length((V23)))==(2)){
	goto T41;}
	base[6]= VV[3];
	base[7]= (V23);
	vs_top=(vs_base=base+6)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	goto T41;
T41:;
	{object V25;
	object V26;
	object V27;
	base[6]= base[2];
	base[7]= (V23);
	vs_top=(vs_base=base+6)+2;
	Lldiff();
	vs_top=sup;
	V25= vs_base[0];
	if(base[4]!=Cnil){
	V26= base[4];
	goto T49;}
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V26= vs_base[0];
	goto T49;
T49:;
	V27= CMPcadr((V23));
	{object V28;
	{object V29;
	object V30= (V25);
	if(V30==Cnil){
	V28= Cnil;
	goto T51;}
	base[6]=V29=MMcons(Cnil,Cnil);
	goto T52;
T52:;
	base[7]= coerce_to_string((V30->c.c_car));
	base[9]= VV[4];
	vs_top=(vs_base=base+9)+1;
	Lfind_package();
	vs_top=sup;
	base[8]= vs_base[0];
	vs_top=(vs_base=base+7)+2;
	Lintern();
	vs_top=sup;
	(V29->c.c_car)= vs_base[0];
	if((V30=MMcdr(V30))==Cnil){
	V28= base[6];
	goto T51;}
	V29=MMcdr(V29)=MMcons(Cnil,Cnil);
	goto T52;}
	goto T51;
T51:;
	V32= list(2,(V26),(V27));
	V33= list(3,VV[6],base[3],list(2,VV[7],(V28)));
	{object V35;
	object V36= (V25);
	object V37= (V28);
	if(V36==Cnil||V37==Cnil){
	V34= Cnil;
	goto T57;}
	base[6]=V35=MMcons(Cnil,Cnil);
	goto T58;
T58:;
	(V35->c.c_car)= list(2,(V36->c.c_car),list(3,VV[9],(V26),(V37->c.c_car)));
	if((V36=MMcdr(V36))==Cnil||(V37=MMcdr(V37))==Cnil){
	V34= base[6];
	goto T57;}
	V35=MMcdr(V35)=MMcons(Cnil,Cnil);
	goto T58;}
	goto T57;
T57:;
	V40 = base[5];
	base[6]= list(4,VV[5],/* INLINE-ARGS */V32,/* INLINE-ARGS */V33,listA(3,VV[8],V34,V40));
	vs_top=(vs_base=base+6)+1;
	return;}}}
}
/*	local entry for function progn 'compile2358	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	base[0]= VV[10];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk69)();
	vs_top=sup;
	{object V41 = Cnil;
	VMR10(V41)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2370	*/

static object LI11()

{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	if(!((VV[10])->s.s_dbind!=OBJNULL)){
	goto T63;}
	goto T62;
	goto T63;
T63:;
	(VV[10]->s.s_dbind)= Cnil;
	goto T62;
T62:;
	{object V42 = Cnil;
	VMR11(V42)}
	return Cnil;
}
/*	local entry for function progn 'compile2383	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V43 = Cnil;
	VMR12(V43)}
	return Cnil;
}
/*	local entry for function COMPUTE-RESTARTS	*/

static object LI13(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB13 VMS13 VMV13
	{object V44;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T67;
	else {
	V44= first;}
	--narg; goto T68;
	goto T67;
T67:;
	V44= Cnil;
	goto T68;
T68:;
	base[1]= (VV[10]->s.s_dbind);
	{object V46;
	object V47= base[1];
	if(V47==Cnil){
	V45= Cnil;
	goto T70;}
	base[0]=V46=MMcons(Cnil,Cnil);
	goto T71;
T71:;
	base[2]= (V47->c.c_car);
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	(V46->c.c_cdr)= vs_base[0];
	while(MMcdr(V46)!=Cnil)V46=MMcdr(V46);
	if((V47=MMcdr(V47))==Cnil){
	base[0]=base[0]->c.c_cdr;
	V45= base[0];
	goto T70;}
	goto T71;}
	goto T70;
T70:;
	V48= (*(LnkLI71))();
	{object V49 = nconc(V45,/* INLINE-ARGS */V48);
	VMR13(V49)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for RESTART-PRINT	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V50;
	object V51;
	object V52;
	V50=(base[0]);
	V51=(base[1]);
	V52=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[11]->s.s_dbind))==Cnil){
	goto T75;}
	base[3]= (V51);
	base[4]= VV[12];
	base[6]= (V50);
	vs_top=(vs_base=base+6)+1;
	Ltype_of();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (*(LnkLI72))((V50));
	vs_top=(vs_base=base+3)+4;
	Lformat();
	return;
	goto T75;
T75:;
	base[3]= (V50);
	base[4]= (V51);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk73)();
	return;
	}
}
/*	local entry for function progn 'compile2423	*/

static object LI15()

{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	base[0]= VV[13];
	base[1]= VV[14];
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= VV[15];
	base[6]= VV[16];
	base[7]= Cnil;
	base[8]= Cnil;
	base[9]= VV[17];
	base[10]= VV[18];
	base[11]= small_fixnum(4);
	base[12]= VV[19];
	base[13]= Cnil;
	vs_top=(vs_base=base+0)+14;
	(void) (*Lnk74)();
	vs_top=sup;
	{object V53 = Cnil;
	VMR15(V53)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-RESTART	*/

static object LI16(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB16 VMS16 VMV16
	{object V54;
	object V55;
	object V56;
	object V57;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI16key,first,ap);
	V54=(Vcs[0]);
	V55=(Vcs[1]);
	V56=(Vcs[2]);
	V57=(Vcs[3]);
	base[0]= VV[13];
	base[1]= (V54);
	base[2]= (V55);
	base[3]= (V56);
	base[4]= (V57);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V58 = vs_base[0];
	VMR16(V58)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function progn 'compile2443	*/

static object LI17()

{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V59 = Cnil;
	VMR17(V59)}
	return Cnil;
}
/*	local entry for function progn 'compile2459	*/

static object LI18()

{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	base[0]= VV[20];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk69)();
	vs_top=sup;
	{object V60 = Cnil;
	VMR18(V60)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2471	*/

static object LI19()

{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	if(!((VV[20])->s.s_dbind!=OBJNULL)){
	goto T108;}
	goto T107;
	goto T108;
T108:;
	(VV[20]->s.s_dbind)= Cnil;
	goto T107;
T107:;
	{object V61 = Cnil;
	VMR19(V61)}
	return Cnil;
}
/*	local entry for function progn 'compile2484	*/

static object LI20()

{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V62 = Cnil;
	VMR20(V62)}
	return Cnil;
}
/*	local entry for function MAKE-KCL-TOP-RESTART	*/

static object LI22(V64)

object V64;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	base[0]=MMcons((V64),Cnil);
	V65= 
	make_cclosure_new(LC38,Cnil,base[0],Cdata);
	V66= 
	make_cclosure_new(LC39,Cnil,base[0],Cdata);
	{object V67 = (VFUN_NARGS=8,(*(LnkLI39))(VV[21],VV[22],VV[23],V65,VV[24],V66,VV[34],Cnil));
	VMR21(V67)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIND-KCL-TOP-RESTART	*/

static object LI23(V69)

object V69;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;{object V71;
	{register object x= (V69),V72= (VV[20]->s.s_dbind);
	while(V72!=Cnil)
	if(eql(x,V72->c.c_car->c.c_car) &&V72->c.c_car != Cnil){
	V71= (V72->c.c_car);
	goto T116;
	}else V72=V72->c.c_cdr;
	V71= Cnil;}
	goto T116;
T116:;
	if(V71==Cnil)goto T115;
	V70= V71;
	goto T114;
	goto T115;
T115:;}
	{object V74;
	V75 = (V69);
	V76= (*(LnkLI75))((V69));
	V74= make_cons(V75,/* INLINE-ARGS */V76);
	(VV[20]->s.s_dbind)= make_cons((V74),(VV[20]->s.s_dbind));
	V73= (VV[20]->s.s_dbind);}
	V70= CMPcar(V73);
	goto T114;
T114:;
	{object V77 = CMPcdr(V70);
	VMR22(V77)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function KCL-TOP-RESTARTS	*/

static object LI24()

{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	{object V78;
	object V79;
	object V80;
	base[4]= (VV[27]->s.s_dbind);
	{object V81;
	object V82= base[4];
	if(V82==Cnil){
	V78= Cnil;
	goto T120;}
	base[3]=V81=MMcons(Cnil,Cnil);
	goto T121;
T121:;
	if((CMPcdr((V82->c.c_car)))==Cnil){
	goto T124;}
	(V81->c.c_cdr)= make_cons(CMPcdr((V82->c.c_car)),Cnil);
	goto T122;
	goto T124;
T124:;
	(V81->c.c_cdr)= Cnil;
	goto T122;
T122:;
	while(MMcdr(V81)!=Cnil)V81=MMcdr(V81);
	if((V82=MMcdr(V82))==Cnil){
	base[3]=base[3]->c.c_cdr;
	V78= base[3];
	goto T120;}
	goto T121;}
	goto T120;
T120:;
	if(((VV[25]->s.s_dbind))==Cnil){
	goto T128;}
	V79= make_cons((VV[25]->s.s_dbind),(V78));
	goto T126;
	goto T128;
T128:;
	V79= (V78);
	goto T126;
T126:;
	{object V84;
	object V85= (V79);
	if(V85==Cnil){
	V80= Cnil;
	goto T130;}
	base[3]=V84=MMcons(Cnil,Cnil);
	goto T131;
T131:;
	(V84->c.c_car)= (*(LnkLI76))((V85->c.c_car));
	if((V85=MMcdr(V85))==Cnil){
	V80= base[3];
	goto T130;}
	V84=MMcdr(V84)=MMcons(Cnil,Cnil);
	goto T131;}
	goto T130;
T130:;
	{object V86;
	object V87= (V79);
	object V88= (V80);
	if(V87==Cnil||V88==Cnil){
	(VV[20]->s.s_dbind)= Cnil;
	goto T134;}
	base[3]=V86=MMcons(Cnil,Cnil);
	goto T135;
T135:;
	(V86->c.c_car)= make_cons((V87->c.c_car),(V88->c.c_car));
	if((V87=MMcdr(V87))==Cnil||(V88=MMcdr(V88))==Cnil){
	(VV[20]->s.s_dbind)= base[3];
	goto T134;}
	V86=MMcdr(V86)=MMcons(Cnil,Cnil);
	goto T135;}
	goto T134;
T134:;
	{object V89 = (V80);
	VMR23(V89)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for RESTART-REPORT	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V90;
	base[0]=MMcons(base[0],Cnil);
	V90=(base[1]);
	vs_top=sup;
	{object V91;
	V91= STREF(object,(base[0]->c.c_car),8);
	if(((V91))==Cnil){
	goto T140;}
	base[2]= (V91);
	goto T137;
	goto T140;
T140:;
	base[3]= STREF(object,(base[0]->c.c_car),0);
	base[3]=MMcons(base[3],base[0]);
	base[2]= 
	make_cclosure_new(LC40,Cnil,base[3],Cdata);}
	goto T137;
T137:;
	base[3]= (V90);
	vs_top=(vs_base=base+3)+1;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	macro definition for RESTART-BIND	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	vs_top=sup;
	{object V92=base[0]->c.c_cdr;
	base[2]= (V92->c.c_car);
	V92=V92->c.c_cdr;
	base[3]= V92;}
	{object V94;
	object V95= base[2];
	if(V95==Cnil){
	V93= Cnil;
	goto T144;}
	base[4]=V94=MMcons(Cnil,Cnil);
	goto T145;
T145:;
	(V94->c.c_car)= listA(6,VV[39],VV[21],list(2,VV[7],CMPcar((V95->c.c_car))),VV[23],CMPcadr((V95->c.c_car)),CMPcddr((V95->c.c_car)));
	if((V95=MMcdr(V95))==Cnil){
	V93= base[4];
	goto T144;}
	V94=MMcdr(V94)=MMcons(Cnil,Cnil);
	goto T145;}
	goto T144;
T144:;
	V97= list(2,VV[10],list(3,VV[37],make_cons(VV[38],V93),VV[10]));
	base[4]= listA(3,VV[8],make_cons(/* INLINE-ARGS */V97,Cnil),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function FIND-RESTART	*/

static object LI27(object V98,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{register object V99;
	object V100;
	va_start(ap,first);
	V99= V98;
	narg = narg - 1;
	if (narg <= 0) goto T147;
	else {
	V100= first;}
	--narg; goto T148;
	goto T147;
T147:;
	V100= Cnil;
	goto T148;
T148:;
	{register object V101;
	object V102;
	V101= (VV[10]->s.s_dbind);
	V102= CMPcar((V101));
	goto T154;
T154:;
	if(!(((V101))==Cnil)){
	goto T155;}
	goto T150;
	goto T155;
T155:;
	{register object V103;
	register object V104;
	V103= (V102);
	V104= CMPcar((V103));
	goto T163;
T163:;
	if(!(((V103))==Cnil)){
	goto T164;}
	goto T159;
	goto T164;
T164:;
	if(((V104))==((V99))){
	goto T169;}
	if(!((STREF(object,(V104),0))==((V99)))){
	goto T168;}
	goto T169;
T169:;
	{object V105 = (V104);
	VMR26(V105)}
	goto T168;
T168:;
	V103= CMPcdr((V103));
	V104= CMPcar((V103));
	goto T163;}
	goto T159;
T159:;
	V101= CMPcdr((V101));
	V102= CMPcar((V101));
	goto T154;}
	goto T150;
T150:;
	{object V106;
	V106= (*(LnkLI71))();
	{register object V107;
	register object V108;
	V107= (V106);
	V108= CMPcar((V107));
	goto T187;
T187:;
	if(!(((V107))==Cnil)){
	goto T188;}
	{object V109 = Cnil;
	VMR26(V109)}
	goto T188;
T188:;
	if(((V108))==((V99))){
	goto T193;}
	if(!((STREF(object,(V108),0))==((V99)))){
	goto T192;}
	goto T193;
T193:;
	{object V110 = (V108);
	VMR26(V110)}
	goto T192;
T192:;
	V107= CMPcdr((V107));
	V108= CMPcar((V107));
	goto T187;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for INVOKE-RESTART	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	{object V111;
	object V112;
	V111=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V112=(base[1]);
	vs_top=sup;
	{object V113;{object V114;
	V114= (VFUN_NARGS=1,(*(LnkLI77))((V111)));
	if(V114==Cnil)goto T203;
	V113= V114;
	goto T202;
	goto T203;
T203:;}
	base[2]= VV[40];
	base[3]= (V111);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V113= vs_base[0];
	goto T202;
T202:;
	base[2]= STREF(object,(V113),4);
	{object V115;
	V115= (V112);
	 vs_top=base+3;
	 while(V115!=Cnil)
	 {vs_push((V115)->c.c_car);V115=(V115)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	function definition for INVOKE-RESTART-INTERACTIVELY	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	{object V116;
	V116=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V117;{object V118;
	V118= (VFUN_NARGS=1,(*(LnkLI77))((V116)));
	if(V118==Cnil)goto T210;
	V117= V118;
	goto T209;
	goto T210;
T210:;}
	base[1]= VV[41];
	base[2]= (V116);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V117= vs_base[0];
	goto T209;
T209:;
	base[1]= STREF(object,(V117),4);
	{object V119;
	{object V120;
	V120= STREF(object,(V117),12);
	if(((V120))==Cnil){
	goto T218;}
	vs_base=vs_top;
	{object _funobj = (V120);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V119= vs_base[0];
	goto T215;
	goto T218;
T218:;
	V119= Cnil;}
	goto T215;
T215:;
	 vs_top=base+2;
	 while(V119!=Cnil)
	 {vs_push((V119)->c.c_car);V119=(V119)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	macro definition for RESTART-CASE	*/

static void L30()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	vs_top=sup;
	{object V121=base[0]->c.c_cdr;
	base[2]= (V121->c.c_car);
	V121=V121->c.c_cdr;
	base[3]= V121;}
	{object V122;
	object V123;
	object V124;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V122= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V123= vs_base[0];
	{object V125;
	object V126= base[3];
	if(V126==Cnil){
	V124= Cnil;
	goto T222;}
	base[4]=V125=MMcons(Cnil,Cnil);
	goto T223;
T223:;
	{object V128;
	object V129;
	base[5]= CMPcddr((V126->c.c_car));
	base[6]= VV[42];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk6)();
	if(vs_base>=vs_top){vs_top=sup;goto T228;}
	V128= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T229;}
	V129= vs_base[0];
	vs_top=sup;
	goto T230;
	goto T228;
T228:;
	V128= Cnil;
	goto T229;
T229:;
	V129= Cnil;
	goto T230;
T230:;
	{object V130;
	object V131;
	base[5]= (V128);
	base[6]= VV[43];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V130= vs_base[0];
	base[5]= (V128);
	base[6]= VV[44];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V131= vs_base[0];
	V132= CMPcar((V126->c.c_car));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V133= vs_base[0];
	base[5]= VV[43];
	base[6]= (V130);
	base[7]= VV[44];
	base[8]= (V131);
	vs_top=(vs_base=base+5)+4;
	L31(base);
	vs_top=sup;
	V134= vs_base[0];
	V135 = (V129);
	(V125->c.c_car)= list(5,/* INLINE-ARGS */V132,V133,V134,CMPcadr((V126->c.c_car)),V135);}}
	if((V126=MMcdr(V126))==Cnil){
	V124= base[4];
	goto T222;}
	V125=MMcdr(V125)=MMcons(Cnil,Cnil);
	goto T223;}
	goto T222;
T222:;
	V136= list(2,(V123),Cnil);
	V137= make_cons(/* INLINE-ARGS */V136,Cnil);
	{object V139;
	object V140= (V124);
	if(V140==Cnil){
	V138= Cnil;
	goto T243;}
	base[4]=V139=MMcons(Cnil,Cnil);
	goto T244;
T244:;
	{object V142;
	object V143;
	object V144;
	V142= CMPcar((V140->c.c_car));
	V143= CMPcadr((V140->c.c_car));
	V144= CMPcaddr((V140->c.c_car));
	V145= list(3,VV[51],(V123),VV[52]);
	(V139->c.c_car)= listA(3,(V142),list(2,VV[48],list(4,VV[49],VV[50],/* INLINE-ARGS */V145,list(2,VV[53],(V143)))),(V144));}
	if((V140=MMcdr(V140))==Cnil){
	V138= base[4];
	goto T243;}
	V139=MMcdr(V139)=MMcons(Cnil,Cnil);
	goto T244;}
	goto T243;
T243:;
	V146= list(3,VV[47],V138,list(3,VV[54],(V122),base[2]));
	{object V148;
	object V149= (V124);
	if(V149==Cnil){
	V147= Cnil;
	goto T249;}
	base[4]=V148=MMcons(Cnil,Cnil);
	goto T250;
T250:;
	{object V151;
	object V152;
	object V153;
	V151= CMPcadr((V149->c.c_car));
	V152= CMPcadddr((V149->c.c_car));
	V153= CMPcar(CMPcddddr((V149->c.c_car)));
	(V148->c.c_cdr)= list(2,(V151),list(3,VV[54],(V122),list(3,VV[55],list(2,VV[48],listA(3,VV[49],(V152),(V153))),(V123))));}
	while(MMcdr(V148)!=Cnil)V148=MMcdr(V148);
	if((V149=MMcdr(V149))==Cnil){
	base[4]=base[4]->c.c_cdr;
	V147= base[4];
	goto T249;}
	goto T250;}
	goto T249;
T249:;
	base[4]= list(3,VV[45],(V122),list(3,VV[8],/* INLINE-ARGS */V137,listA(3,VV[46],/* INLINE-ARGS */V146,V147)));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for WITH-SIMPLE-RESTART	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	vs_top=sup;
	{object V154=base[0]->c.c_cdr;
	{object V155= (V154->c.c_car);
	base[2]= (V155->c.c_car);
	V155=V155->c.c_cdr;
	base[3]= (V155->c.c_car);
	V155=V155->c.c_cdr;
	base[4]= V155;}
	V154=V154->c.c_cdr;
	base[5]= V154;}
	V156= make_cons(VV[60],base[5]);
	base[6]= list(3,VV[59],/* INLINE-ARGS */V156,list(5,base[2],Cnil,VV[43],list(3,VV[49],VV[61],listA(4,VV[62],VV[58],base[3],base[4])),VV[63]));
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	function definition for ABORT	*/

static void L33()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[22];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk78)();
	vs_top=sup;
	base[0]= VV[64];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk70)();
	return;
}
/*	function definition for CONTINUE	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[65];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk78)();
	return;
}
/*	function definition for MUFFLE-WARNING	*/

static void L35()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[66];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk78)();
	return;
}
/*	function definition for STORE-VALUE	*/

static void L36()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{object V157;
	V157=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[67];
	base[2]= (V157);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk78)();
	return;
	}
}
/*	function definition for USE-VALUE	*/

static void L37()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	{object V158;
	V158=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[68];
	base[2]= (V158);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk78)();
	return;
	}
}
/*	local function TRANSFORM-KEYWORDS	*/

static void L31(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{register object V159;
	object V160;
	parse_key(vs_base,FALSE,FALSE,2,VV[43],VV[44]);
	vs_top=sup;
	V159=(base[0]);
	V160=(base[1]);
	{register object V161;
	V161= Cnil;
	if(((V159))==Cnil){
	goto T264;}
	if(!(type_of((V159))==t_string)){
	goto T270;}
	V162= list(2,VV[48],list(3,VV[49],VV[56],list(3,VV[57],(V159),VV[58])));
	goto T268;
	goto T270;
T270:;
	V162= list(2,VV[48],(V159));
	goto T268;
T268:;
	V163 = (V161);
	V161= listA(3,V162,VV[24],V163);
	goto T264;
T264:;
	if(((V160))==Cnil){
	goto T272;}
	V161= listA(3,list(2,VV[48],(V160)),VV[34],(V161));
	goto T272;
T272:;
	base[4]= nreverse((V161));
	vs_top=(vs_base=base+4)+1;
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC40(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	{object V164;
	V164=(base[0]);
	vs_top=sup;
	if(((base0[0]->c.c_car))==Cnil){
	goto T277;}
	base[1]= (V164);
	base[2]= VV[35];
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	goto T277;
T277:;
	base[1]= (V164);
	base[2]= VV[36];
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC39(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	{object V165;
	V165=(base[0]);
	vs_top=sup;
	{object V166;
	if(!(((base0[0]->c.c_car))==((VV[25]->s.s_dbind)))){
	goto T287;}
	V166= (VV[26]->s.s_dbind);
	goto T285;
	goto T287;
T287:;{object V168;
	base[1]= (base0[0]->c.c_car);
	base[2]= (VV[27]->s.s_dbind);
	base[3]= VV[28];
	base[4]= (VV[79]->s.s_gfdef);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk80)();
	vs_top=sup;
	V168= vs_base[0];
	if(V168==Cnil)goto T290;
	V167= V168;
	goto T289;
	goto T290;
T290:;}
	V167= VV[29];
	goto T289;
T289:;
	V166= CMPcar(V167);
	goto T285;
T285:;
	if(!(((V166))==(VV[30]))){
	goto T297;}
	base[1]= (V165);
	base[2]= VV[31];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;
	goto T297;
T297:;
	if(((V166))!=Cnil){
	goto T302;}
	base[1]= (V165);
	base[2]= VV[32];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;
	goto T302;
T302:;
	base[1]= (V165);
	base[2]= VV[33];
	base[3]= CMPmake_fixnum((long)length((V166)));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC38(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	vs_top=sup;
	{frame_ptr fr;
	V169= make_cons((base0[0]->c.c_car),Cnil);
	base[0]= CMPcar(/* INLINE-ARGS */V169);
	fr=frs_sch_catch(base[0]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,base[0]);
	base[1]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,base[0]);}
}
static void LnkT80(){ call_or_link(VV[80],(void **)(void *)&Lnk80);} /* FIND */
static void LnkT78(){ call_or_link(VV[78],(void **)(void *)&Lnk78);} /* INVOKE-RESTART */
static void LnkT6(){ call_or_link(VV[6],(void **)(void *)&Lnk6);} /* PARSE-KEYWORD-PAIRS */
static object  LnkTLI77(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[77],(void **)(void *)&LnkLI77,first,ap);va_end(ap);return V1;} /* FIND-RESTART */
static object  LnkTLI76(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[76],(void **)(void *)&LnkLI76,1,first,ap);va_end(ap);return V1;} /* FIND-KCL-TOP-RESTART */
static object  LnkTLI75(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[75],(void **)(void *)&LnkLI75,1,first,ap);va_end(ap);return V1;} /* MAKE-KCL-TOP-RESTART */
static object  LnkTLI39(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[39],(void **)(void *)&LnkLI39,first,ap);va_end(ap);return V1;} /* MAKE-RESTART */
static void LnkT74(){ call_or_link(VV[74],(void **)(void *)&Lnk74);} /* DEFINE-STRUCTURE */
static void LnkT73(){ call_or_link(VV[73],(void **)(void *)&Lnk73);} /* RESTART-REPORT */
static object  LnkTLI72(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[72],(void **)(void *)&LnkLI72,1,first,ap);va_end(ap);return V1;} /* UNIQUE-ID */
static object  LnkTLI71(){return call_proc0(VV[71],(void **)(void *)&LnkLI71);} /* KCL-TOP-RESTARTS */
static void LnkT70(){ call_or_link(VV[70],(void **)(void *)&Lnk70);} /* ERROR */
static void LnkT69(){ call_or_link(VV[69],(void **)(void *)&Lnk69);} /* *MAKE-SPECIAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

