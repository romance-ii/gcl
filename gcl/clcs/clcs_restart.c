
#include "cmpinclude.h"
#include "clcs_restart.h"
void init_clcs_restart(){do_init(VV);}
/*	local entry for function progn 'compile2186	*/

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
/*	local entry for function progn 'compile2211	*/

static object LI3()

{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V3 = Cnil;
	VMR3(V3)}
	return Cnil;
}
/*	local entry for function progn 'compile2227	*/

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
/*	local entry for function progn 'compile2239	*/

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
/*	local entry for function progn 'compile2252	*/

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
	base[6]= list(4,VV[5],/* INLINE-ARGS */V32,/* INLINE-ARGS */V33,listA(3,VV[8],V34,base[5]));
	vs_top=(vs_base=base+6)+1;
	return;}}}
}
/*	local entry for function progn 'compile2353	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	base[0]= VV[10];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk69)();
	vs_top=sup;
	{object V40 = Cnil;
	VMR10(V40)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2365	*/

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
	{object V41 = Cnil;
	VMR11(V41)}
	return Cnil;
}
/*	local entry for function progn 'compile2378	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V42 = Cnil;
	VMR12(V42)}
	return Cnil;
}
/*	local entry for function COMPUTE-RESTARTS	*/

static object LI13(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB13 VMS13 VMV13
	{object V43;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T67;
	else {
	V43= first;}
	--narg; goto T68;
	goto T67;
T67:;
	V43= Cnil;
	goto T68;
T68:;
	base[1]= (VV[10]->s.s_dbind);
	{object V45;
	object V46= base[1];
	if(V46==Cnil){
	V44= Cnil;
	goto T70;}
	base[0]=V45=MMcons(Cnil,Cnil);
	goto T71;
T71:;
	base[2]= (V46->c.c_car);
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	(V45->c.c_cdr)= vs_base[0];
	while(MMcdr(V45)!=Cnil)V45=MMcdr(V45);
	if((V46=MMcdr(V46))==Cnil){
	base[0]=base[0]->c.c_cdr;
	V44= base[0];
	goto T70;}
	goto T71;}
	goto T70;
T70:;
	V47= (*(LnkLI71))();
	{object V48 = nconc(V44,/* INLINE-ARGS */V47);
	VMR13(V48)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for RESTART-PRINT	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V49;
	object V50;
	object V51;
	V49=(base[0]);
	V50=(base[1]);
	V51=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[11]->s.s_dbind))==Cnil){
	goto T75;}
	base[3]= (V50);
	base[4]= VV[12];
	base[6]= (V49);
	vs_top=(vs_base=base+6)+1;
	Ltype_of();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (*(LnkLI72))((V49));
	vs_top=(vs_base=base+3)+4;
	Lformat();
	return;
	goto T75;
T75:;
	base[3]= (V49);
	base[4]= (V50);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk73)();
	return;
	}
}
/*	local entry for function progn 'compile2418	*/

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
	{object V52 = Cnil;
	VMR15(V52)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-RESTART	*/

static object LI16(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB16 VMS16 VMV16
	{object V53;
	object V54;
	object V55;
	object V56;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI16key,first,ap);
	V53=(Vcs[0]);
	V54=(Vcs[1]);
	V55=(Vcs[2]);
	V56=(Vcs[3]);
	base[0]= VV[13];
	base[1]= (V53);
	base[2]= (V54);
	base[3]= (V55);
	base[4]= (V56);
	vs_top=(vs_base=base+0)+5;
	siLmake_structure();
	vs_top=sup;
	{object V57 = vs_base[0];
	VMR16(V57)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function progn 'compile2438	*/

static object LI17()

{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	{object V58 = Cnil;
	VMR17(V58)}
	return Cnil;
}
/*	local entry for function progn 'compile2454	*/

static object LI18()

{	 VMB18 VMS18 VMV18
	goto TTL;
TTL:;
	base[0]= VV[20];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk69)();
	vs_top=sup;
	{object V59 = Cnil;
	VMR18(V59)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2466	*/

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
	{object V60 = Cnil;
	VMR19(V60)}
	return Cnil;
}
/*	local entry for function progn 'compile2479	*/

static object LI20()

{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V61 = Cnil;
	VMR20(V61)}
	return Cnil;
}
/*	local entry for function MAKE-KCL-TOP-RESTART	*/

static object LI22(V63)

object V63;
{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	base[0]=MMcons((V63),Cnil);
	V64= 
	make_cclosure_new(LC38,Cnil,base[0],Cdata);
	V65= 
	make_cclosure_new(LC39,Cnil,base[0],Cdata);
	{object V66 = (VFUN_NARGS=8,(*(LnkLI39))(VV[21],VV[22],VV[23],V64,VV[24],V65,VV[34],Cnil));
	VMR21(V66)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIND-KCL-TOP-RESTART	*/

static object LI23(V68)

object V68;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;{object V70;
	{register object x= (V68),V71= (VV[20]->s.s_dbind);
	while(V71!=Cnil)
	if(eql(x,V71->c.c_car->c.c_car) &&V71->c.c_car != Cnil){
	V70= (V71->c.c_car);
	goto T116;
	}else V71=V71->c.c_cdr;
	V70= Cnil;}
	goto T116;
T116:;
	if(V70==Cnil)goto T115;
	V69= V70;
	goto T114;
	goto T115;
T115:;}
	{object V73;
	V74= (*(LnkLI75))((V68));
	V73= make_cons((V68),/* INLINE-ARGS */V74);
	(VV[20]->s.s_dbind)= make_cons((V73),(VV[20]->s.s_dbind));
	V72= (VV[20]->s.s_dbind);}
	V69= CMPcar(V72);
	goto T114;
T114:;
	{object V75 = CMPcdr(V69);
	VMR22(V75)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function KCL-TOP-RESTARTS	*/

static object LI24()

{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	{object V76;
	object V77;
	object V78;
	base[4]= (VV[27]->s.s_dbind);
	{object V79;
	object V80= base[4];
	if(V80==Cnil){
	V76= Cnil;
	goto T120;}
	base[3]=V79=MMcons(Cnil,Cnil);
	goto T121;
T121:;
	if((CMPcdr((V80->c.c_car)))==Cnil){
	goto T124;}
	(V79->c.c_cdr)= make_cons(CMPcdr((V80->c.c_car)),Cnil);
	goto T122;
	goto T124;
T124:;
	(V79->c.c_cdr)= Cnil;
	goto T122;
T122:;
	while(MMcdr(V79)!=Cnil)V79=MMcdr(V79);
	if((V80=MMcdr(V80))==Cnil){
	base[3]=base[3]->c.c_cdr;
	V76= base[3];
	goto T120;}
	goto T121;}
	goto T120;
T120:;
	if(((VV[25]->s.s_dbind))==Cnil){
	goto T128;}
	V77= make_cons((VV[25]->s.s_dbind),(V76));
	goto T126;
	goto T128;
T128:;
	V77= (V76);
	goto T126;
T126:;
	{object V82;
	object V83= (V77);
	if(V83==Cnil){
	V78= Cnil;
	goto T130;}
	base[3]=V82=MMcons(Cnil,Cnil);
	goto T131;
T131:;
	(V82->c.c_car)= (*(LnkLI76))((V83->c.c_car));
	if((V83=MMcdr(V83))==Cnil){
	V78= base[3];
	goto T130;}
	V82=MMcdr(V82)=MMcons(Cnil,Cnil);
	goto T131;}
	goto T130;
T130:;
	{object V84;
	object V85= (V77);
	object V86= (V78);
	if(V85==Cnil||V86==Cnil){
	(VV[20]->s.s_dbind)= Cnil;
	goto T134;}
	base[3]=V84=MMcons(Cnil,Cnil);
	goto T135;
T135:;
	(V84->c.c_car)= make_cons((V85->c.c_car),(V86->c.c_car));
	if((V85=MMcdr(V85))==Cnil||(V86=MMcdr(V86))==Cnil){
	(VV[20]->s.s_dbind)= base[3];
	goto T134;}
	V84=MMcdr(V84)=MMcons(Cnil,Cnil);
	goto T135;}
	goto T134;
T134:;
	{object V87 = (V78);
	VMR23(V87)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for RESTART-REPORT	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	{object V88;
	base[0]=MMcons(base[0],Cnil);
	V88=(base[1]);
	vs_top=sup;
	{object V89;
	V89= STREF(object,(base[0]->c.c_car),8);
	if(((V89))==Cnil){
	goto T140;}
	base[2]= (V89);
	goto T137;
	goto T140;
T140:;
	base[3]= STREF(object,(base[0]->c.c_car),0);
	base[3]=MMcons(base[3],base[0]);
	base[2]= 
	make_cclosure_new(LC40,Cnil,base[3],Cdata);}
	goto T137;
T137:;
	base[3]= (V88);
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
	{object V90=base[0]->c.c_cdr;
	base[2]= (V90->c.c_car);
	V90=V90->c.c_cdr;
	base[3]= V90;}
	{object V92;
	object V93= base[2];
	if(V93==Cnil){
	V91= Cnil;
	goto T144;}
	base[4]=V92=MMcons(Cnil,Cnil);
	goto T145;
T145:;
	(V92->c.c_car)= listA(6,VV[39],VV[21],list(2,VV[7],CMPcar((V93->c.c_car))),VV[23],CMPcadr((V93->c.c_car)),CMPcddr((V93->c.c_car)));
	if((V93=MMcdr(V93))==Cnil){
	V91= base[4];
	goto T144;}
	V92=MMcdr(V92)=MMcons(Cnil,Cnil);
	goto T145;}
	goto T144;
T144:;
	V95= list(2,VV[10],list(3,VV[37],make_cons(VV[38],V91),VV[10]));
	base[4]= listA(3,VV[8],make_cons(/* INLINE-ARGS */V95,Cnil),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function FIND-RESTART	*/

static object LI27(object V96,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB26 VMS26 VMV26
	{register object V97;
	object V98;
	va_start(ap,first);
	V97= V96;
	narg = narg - 1;
	if (narg <= 0) goto T147;
	else {
	V98= first;}
	--narg; goto T148;
	goto T147;
T147:;
	V98= Cnil;
	goto T148;
T148:;
	{register object V99;
	object V100;
	V99= (VV[10]->s.s_dbind);
	V100= CMPcar((V99));
	goto T154;
T154:;
	if(!(((V99))==Cnil)){
	goto T155;}
	goto T150;
	goto T155;
T155:;
	{register object V101;
	register object V102;
	V101= (V100);
	V102= CMPcar((V101));
	goto T163;
T163:;
	if(!(((V101))==Cnil)){
	goto T164;}
	goto T159;
	goto T164;
T164:;
	if(((V102))==((V97))){
	goto T169;}
	if(!((STREF(object,(V102),0))==((V97)))){
	goto T168;}
	goto T169;
T169:;
	{object V103 = (V102);
	VMR26(V103)}
	goto T168;
T168:;
	V101= CMPcdr((V101));
	V102= CMPcar((V101));
	goto T163;}
	goto T159;
T159:;
	V99= CMPcdr((V99));
	V100= CMPcar((V99));
	goto T154;}
	goto T150;
T150:;
	{object V104;
	V104= (*(LnkLI71))();
	{register object V105;
	register object V106;
	V105= (V104);
	V106= CMPcar((V105));
	goto T187;
T187:;
	if(!(((V105))==Cnil)){
	goto T188;}
	{object V107 = Cnil;
	VMR26(V107)}
	goto T188;
T188:;
	if(((V106))==((V97))){
	goto T193;}
	if(!((STREF(object,(V106),0))==((V97)))){
	goto T192;}
	goto T193;
T193:;
	{object V108 = (V106);
	VMR26(V108)}
	goto T192;
T192:;
	V105= CMPcdr((V105));
	V106= CMPcar((V105));
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
	{object V109;
	object V110;
	V109=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V110=(base[1]);
	vs_top=sup;
	{object V111;{object V112;
	V112= (VFUN_NARGS=1,(*(LnkLI77))((V109)));
	if(V112==Cnil)goto T203;
	V111= V112;
	goto T202;
	goto T203;
T203:;}
	base[2]= VV[40];
	base[3]= (V109);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V111= vs_base[0];
	goto T202;
T202:;
	base[2]= STREF(object,(V111),4);
	{object V113;
	V113= (V110);
	 vs_top=base+3;
	 while(V113!=Cnil)
	 {vs_push((V113)->c.c_car);V113=(V113)->c.c_cdr;}
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
	{object V114;
	V114=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V115;{object V116;
	V116= (VFUN_NARGS=1,(*(LnkLI77))((V114)));
	if(V116==Cnil)goto T210;
	V115= V116;
	goto T209;
	goto T210;
T210:;}
	base[1]= VV[41];
	base[2]= (V114);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk70)();
	vs_top=sup;
	V115= vs_base[0];
	goto T209;
T209:;
	base[1]= STREF(object,(V115),4);
	{object V117;
	{object V118;
	V118= STREF(object,(V115),12);
	if(((V118))==Cnil){
	goto T218;}
	vs_base=vs_top;
	{object _funobj = (V118);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V117= vs_base[0];
	goto T215;
	goto T218;
T218:;
	V117= Cnil;}
	goto T215;
T215:;
	 vs_top=base+2;
	 while(V117!=Cnil)
	 {vs_push((V117)->c.c_car);V117=(V117)->c.c_cdr;}
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
	{object V119=base[0]->c.c_cdr;
	base[2]= (V119->c.c_car);
	V119=V119->c.c_cdr;
	base[3]= V119;}
	{object V120;
	object V121;
	object V122;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V120= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V121= vs_base[0];
	{object V123;
	object V124= base[3];
	if(V124==Cnil){
	V122= Cnil;
	goto T222;}
	base[4]=V123=MMcons(Cnil,Cnil);
	goto T223;
T223:;
	{object V126;
	object V127;
	base[5]= CMPcddr((V124->c.c_car));
	base[6]= VV[42];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk6)();
	if(vs_base>=vs_top){vs_top=sup;goto T228;}
	V126= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T229;}
	V127= vs_base[0];
	vs_top=sup;
	goto T230;
	goto T228;
T228:;
	V126= Cnil;
	goto T229;
T229:;
	V127= Cnil;
	goto T230;
T230:;
	{object V128;
	object V129;
	base[5]= (V126);
	base[6]= VV[43];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V128= vs_base[0];
	base[5]= (V126);
	base[6]= VV[44];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V129= vs_base[0];
	V130= CMPcar((V124->c.c_car));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V131= vs_base[0];
	base[5]= VV[43];
	base[6]= (V128);
	base[7]= VV[44];
	base[8]= (V129);
	vs_top=(vs_base=base+5)+4;
	L31(base);
	vs_top=sup;
	V132= vs_base[0];
	(V123->c.c_car)= list(5,/* INLINE-ARGS */V130,V131,V132,CMPcadr((V124->c.c_car)),(V127));}}
	if((V124=MMcdr(V124))==Cnil){
	V122= base[4];
	goto T222;}
	V123=MMcdr(V123)=MMcons(Cnil,Cnil);
	goto T223;}
	goto T222;
T222:;
	V133= list(2,(V121),Cnil);
	V134= make_cons(/* INLINE-ARGS */V133,Cnil);
	{object V136;
	object V137= (V122);
	if(V137==Cnil){
	V135= Cnil;
	goto T243;}
	base[4]=V136=MMcons(Cnil,Cnil);
	goto T244;
T244:;
	{object V139;
	object V140;
	object V141;
	V139= CMPcar((V137->c.c_car));
	V140= CMPcadr((V137->c.c_car));
	V141= CMPcaddr((V137->c.c_car));
	V142= list(3,VV[51],(V121),VV[52]);
	(V136->c.c_car)= listA(3,(V139),list(2,VV[48],list(4,VV[49],VV[50],/* INLINE-ARGS */V142,list(2,VV[53],(V140)))),(V141));}
	if((V137=MMcdr(V137))==Cnil){
	V135= base[4];
	goto T243;}
	V136=MMcdr(V136)=MMcons(Cnil,Cnil);
	goto T244;}
	goto T243;
T243:;
	V143= list(3,VV[47],V135,list(3,VV[54],(V120),base[2]));
	{object V145;
	object V146= (V122);
	if(V146==Cnil){
	V144= Cnil;
	goto T249;}
	base[4]=V145=MMcons(Cnil,Cnil);
	goto T250;
T250:;
	{object V148;
	object V149;
	object V150;
	V148= CMPcadr((V146->c.c_car));
	V149= CMPcadddr((V146->c.c_car));
	V150= CMPcar(CMPcddddr((V146->c.c_car)));
	(V145->c.c_cdr)= list(2,(V148),list(3,VV[54],(V120),list(3,VV[55],list(2,VV[48],listA(3,VV[49],(V149),(V150))),(V121))));}
	while(MMcdr(V145)!=Cnil)V145=MMcdr(V145);
	if((V146=MMcdr(V146))==Cnil){
	base[4]=base[4]->c.c_cdr;
	V144= base[4];
	goto T249;}
	goto T250;}
	goto T249;
T249:;
	base[4]= list(3,VV[45],(V120),list(3,VV[8],/* INLINE-ARGS */V134,listA(3,VV[46],/* INLINE-ARGS */V143,V144)));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for WITH-SIMPLE-RESTART	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	vs_top=sup;
	{object V151=base[0]->c.c_cdr;
	{object V152= (V151->c.c_car);
	base[2]= (V152->c.c_car);
	V152=V152->c.c_cdr;
	base[3]= (V152->c.c_car);
	V152=V152->c.c_cdr;
	base[4]= V152;}
	V151=V151->c.c_cdr;
	base[5]= V151;}
	V153= make_cons(VV[60],base[5]);
	base[6]= list(3,VV[59],/* INLINE-ARGS */V153,list(5,base[2],Cnil,VV[43],list(3,VV[49],VV[61],listA(4,VV[62],VV[58],base[3],base[4])),VV[63]));
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
	{object V154;
	V154=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[67];
	base[2]= (V154);
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
	{object V155;
	V155=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[68];
	base[2]= (V155);
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
	{register object V156;
	object V157;
	parse_key(vs_base,FALSE,FALSE,2,VV[43],VV[44]);
	vs_top=sup;
	V156=(base[0]);
	V157=(base[1]);
	{register object V158;
	V158= Cnil;
	if(((V156))==Cnil){
	goto T264;}
	if(!(type_of((V156))==t_string)){
	goto T270;}
	V159= list(2,VV[48],list(3,VV[49],VV[56],list(3,VV[57],(V156),VV[58])));
	goto T268;
	goto T270;
T270:;
	V159= list(2,VV[48],(V156));
	goto T268;
T268:;
	V158= listA(3,V159,VV[24],(V158));
	goto T264;
T264:;
	if(((V157))==Cnil){
	goto T272;}
	V158= listA(3,list(2,VV[48],(V157)),VV[34],(V158));
	goto T272;
T272:;
	base[4]= nreverse((V158));
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
	{object V160;
	V160=(base[0]);
	vs_top=sup;
	if(((base0[0]->c.c_car))==Cnil){
	goto T277;}
	base[1]= (V160);
	base[2]= VV[35];
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	goto T277;
T277:;
	base[1]= (V160);
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
	{object V161;
	V161=(base[0]);
	vs_top=sup;
	{object V162;
	if(!(((base0[0]->c.c_car))==((VV[25]->s.s_dbind)))){
	goto T287;}
	V162= (VV[26]->s.s_dbind);
	goto T285;
	goto T287;
T287:;{object V164;
	base[1]= (base0[0]->c.c_car);
	base[2]= (VV[27]->s.s_dbind);
	base[3]= VV[28];
	base[4]= (VV[79]->s.s_gfdef);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk80)();
	vs_top=sup;
	V164= vs_base[0];
	if(V164==Cnil)goto T290;
	V163= V164;
	goto T289;
	goto T290;
T290:;}
	V163= VV[29];
	goto T289;
T289:;
	V162= CMPcar(V163);
	goto T285;
T285:;
	if(!(((V162))==(VV[30]))){
	goto T297;}
	base[1]= (V161);
	base[2]= VV[31];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;
	goto T297;
T297:;
	if(((V162))!=Cnil){
	goto T302;}
	base[1]= (V161);
	base[2]= VV[32];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;
	goto T302;
T302:;
	base[1]= (V161);
	base[2]= VV[33];
	base[3]= CMPmake_fixnum((long)length((V162)));
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
	V165= make_cons((base0[0]->c.c_car),Cnil);
	base[0]= CMPcar(/* INLINE-ARGS */V165);
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

