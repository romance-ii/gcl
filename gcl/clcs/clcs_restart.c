
#include "cmpinclude.h"
#include "clcs_restart.h"
void init_clcs_restart(){do_init(VV);}
/*	local entry for function progn 'compile2195	*/

static object LI1()

{	 VMB1 VMS1 VMV1
	goto TTL;
TTL:;
	base[0]= VV[0];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk90)();
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
/*	local entry for function progn 'compile2220	*/

static object LI3()

{	 VMB3 VMS3 VMV3
	goto TTL;
TTL:;
	{object V3 = Cnil;
	VMR3(V3)}
	return Cnil;
}
/*	local entry for function progn 'compile2236	*/

static object LI4()

{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	base[0]= VV[1];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk90)();
	vs_top=sup;
	{object V4 = Cnil;
	VMR4(V4)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2248	*/

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
/*	local entry for function progn 'compile2261	*/

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
	(void) (*Lnk91)();
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
/*	local entry for function progn 'compile2362	*/

static object LI10()

{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	base[0]= VV[10];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk90)();
	vs_top=sup;
	{object V40 = Cnil;
	VMR10(V40)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2374	*/

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
/*	local entry for function progn 'compile2387	*/

static object LI12()

{	 VMB12 VMS12 VMV12
	goto TTL;
TTL:;
	{object V42 = Cnil;
	VMR12(V42)}
	return Cnil;
}
/*	local entry for function progn 'compile2403	*/

static object LI13()

{	 VMB13 VMS13 VMV13
	goto TTL;
TTL:;
	base[0]= VV[11];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk90)();
	vs_top=sup;
	{object V43 = Cnil;
	VMR13(V43)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2415	*/

static object LI14()

{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if(!((VV[11])->s.s_dbind!=OBJNULL)){
	goto T70;}
	goto T69;
	goto T70;
T70:;
	(VV[11]->s.s_dbind)= Cnil;
	goto T69;
T69:;
	{object V44 = Cnil;
	VMR14(V44)}
	return Cnil;
}
/*	local entry for function progn 'compile2428	*/

static object LI15()

{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	{object V45 = Cnil;
	VMR15(V45)}
	return Cnil;
}
/*	local entry for function COMPUTE-RESTARTS	*/

static object LI16(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB16 VMS16 VMV16
	{register object V46;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T74;
	else {
	V46= first;}
	--narg; goto T75;
	goto T74;
T74:;
	V46= Cnil;
	goto T75;
T75:;
	{object V47;
	object V48;
	V47= Cnil;
	V48= Cnil;
	{register object V49;
	register object V50;
	V49= (VV[11]->s.s_dbind);
	V50= CMPcar((V49));
	goto T81;
T81:;
	if(!(((V49))==Cnil)){
	goto T82;}
	goto T77;
	goto T82;
T82:;
	if(!((CMPcar((V50)))==((V46)))){
	goto T88;}
	V47= CMPcdr((V50));
	goto T86;
	goto T88;
T88:;
	V48= append(CMPcdr((V50)),(V48));
	goto T86;
T86:;
	V49= CMPcdr((V49));
	V50= CMPcar((V49));
	goto T81;}
	goto T77;
T77:;
	{object V51;
	V51= Cnil;
	{register object V52;
	object V53;
	V52= (VV[10]->s.s_dbind);
	V53= CMPcar((V52));
	goto T101;
T101:;
	if(!(((V52))==Cnil)){
	goto T102;}
	goto T97;
	goto T102;
T102:;
	{register object V54;
	register object V55;
	V54= (V53);
	V55= CMPcar((V54));
	goto T110;
T110:;
	if(!(((V54))==Cnil)){
	goto T111;}
	goto T106;
	goto T111;
T111:;
	if(((V46))==Cnil){
	goto T117;}
	{register object x= (V55),V56= (V47);
	while(V56!=Cnil)
	if(eql(x,V56->c.c_car)){
	goto T117;
	}else V56=V56->c.c_cdr;}
	{register object x= (V55),V57= (V48);
	while(V57!=Cnil)
	if(eql(x,V57->c.c_car)){
	goto T115;
	}else V57=V57->c.c_cdr;}
	goto T117;
T117:;
	base[2]= STREF(object,(V55),16);
	base[3]= (V46);
	vs_top=(vs_base=base+3)+1;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T115;}
	V51= make_cons(V55,(V51));
	goto T115;
T115:;
	V54= CMPcdr((V54));
	V55= CMPcar((V54));
	goto T110;}
	goto T106;
T106:;
	V52= CMPcdr((V52));
	V53= CMPcar((V52));
	goto T101;}
	goto T97;
T97:;
	V59= nreverse((V51));
	V60= (*(LnkLI92))();
	{object V61 = nconc(/* INLINE-ARGS */V59,/* INLINE-ARGS */V60);
	VMR16(V61)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for WITH-CONDITION-RESTARTS	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	vs_top=sup;
	{object V62=base[0]->c.c_cdr;
	base[2]= (V62->c.c_car);
	V62=V62->c.c_cdr;
	base[3]= (V62->c.c_car);
	V62=V62->c.c_cdr;
	base[4]= V62;}
	{object V63;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V63= vs_base[0];
	V64= list(2,(V63),base[2]);
	V65= make_cons(/* INLINE-ARGS */V64,Cnil);
	V66= list(2,VV[11],list(3,VV[13],list(3,VV[8],/* INLINE-ARGS */V65,list(3,VV[13],(V63),list(3,VV[14],base[3],list(2,VV[15],list(3,VV[16],(V63),VV[11]))))),VV[11]));
	base[5]= listA(3,VV[8],make_cons(/* INLINE-ARGS */V66,Cnil),base[4]);
	vs_top=(vs_base=base+5)+1;
	return;}
}
/*	function definition for RESTART-PRINT	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{object V67;
	object V68;
	object V69;
	V67=(base[0]);
	V68=(base[1]);
	V69=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[17]->s.s_dbind))==Cnil){
	goto T139;}
	base[3]= (V68);
	base[4]= VV[18];
	base[6]= (V67);
	vs_top=(vs_base=base+6)+1;
	Ltype_of();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (*(LnkLI93))((V67));
	vs_top=(vs_base=base+3)+4;
	Lformat();
	return;
	goto T139;
T139:;
	base[3]= (V67);
	base[4]= (V68);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk94)();
	return;
	}
}
/*	local entry for function progn 'compile2579	*/

static object LI19()

{	 VMB19 VMS19 VMV19
	goto TTL;
TTL:;
	base[0]= VV[12];
	base[1]= VV[19];
	base[2]= Cnil;
	base[3]= Cnil;
	base[4]= Cnil;
	base[5]= VV[20];
	base[6]= VV[21];
	base[7]= Cnil;
	base[8]= Cnil;
	base[9]= VV[22];
	base[10]= VV[23];
	base[11]= small_fixnum(5);
	base[12]= VV[24];
	base[13]= Cnil;
	vs_top=(vs_base=base+0)+14;
	(void) (*Lnk95)();
	vs_top=sup;
	{object V70 = Cnil;
	VMR19(V70)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-RESTART	*/

static object LI20(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB20 VMS20 VMV20
	{object V71;
	object V72;
	object V73;
	object V74;
	object V75;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI20key,first,ap);
	V71=(Vcs[0]);
	V72=(Vcs[1]);
	V73=(Vcs[2]);
	V74=(Vcs[3]);
	if(Vcs[4]==0){
	V75= VV[96];
	}else{
	V75=(Vcs[4]);}
	base[0]= VV[12];
	base[1]= (V71);
	base[2]= (V72);
	base[3]= (V73);
	base[4]= (V74);
	base[5]= (V75);
	vs_top=(vs_base=base+0)+6;
	siLmake_structure();
	vs_top=sup;
	{object V76 = vs_base[0];
	VMR20(V76)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function progn 'compile2607	*/

static object LI21()

{	 VMB21 VMS21 VMV21
	goto TTL;
TTL:;
	{object V77 = Cnil;
	VMR21(V77)}
	return Cnil;
}
/*	local entry for function progn 'compile2623	*/

static object LI22()

{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	base[0]= VV[25];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk90)();
	vs_top=sup;
	{object V78 = Cnil;
	VMR22(V78)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function progn 'compile2635	*/

static object LI23()

{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	if(!((VV[25])->s.s_dbind!=OBJNULL)){
	goto T174;}
	goto T173;
	goto T174;
T174:;
	(VV[25]->s.s_dbind)= Cnil;
	goto T173;
T173:;
	{object V79 = Cnil;
	VMR23(V79)}
	return Cnil;
}
/*	local entry for function progn 'compile2648	*/

static object LI24()

{	 VMB24 VMS24 VMV24
	goto TTL;
TTL:;
	{object V80 = Cnil;
	VMR24(V80)}
	return Cnil;
}
/*	local entry for function MAKE-KCL-TOP-RESTART	*/

static object LI26(V82)

object V82;
{	 VMB25 VMS25 VMV25
	goto TTL;
TTL:;
	base[0]=MMcons((V82),Cnil);
	V83= 
	make_cclosure_new(LC46,Cnil,base[0],Cdata);
	V84= 
	make_cclosure_new(LC47,Cnil,base[0],Cdata);
	{object V85 = (VFUN_NARGS=8,(*(LnkLI43))(VV[26],VV[27],VV[28],V83,VV[29],V84,VV[39],Cnil));
	VMR25(V85)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function FIND-KCL-TOP-RESTART	*/

static object LI27(V87)

object V87;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;{object V89;
	{register object x= (V87),V90= (VV[25]->s.s_dbind);
	while(V90!=Cnil)
	if(eql(x,V90->c.c_car->c.c_car) &&V90->c.c_car != Cnil){
	V89= (V90->c.c_car);
	goto T182;
	}else V90=V90->c.c_cdr;
	V89= Cnil;}
	goto T182;
T182:;
	if(V89==Cnil)goto T181;
	V88= V89;
	goto T180;
	goto T181;
T181:;}
	{object V92;
	V93= (*(LnkLI97))((V87));
	V92= make_cons((V87),/* INLINE-ARGS */V93);
	(VV[25]->s.s_dbind)= make_cons((V92),(VV[25]->s.s_dbind));
	V91= (VV[25]->s.s_dbind);}
	V88= CMPcar(V91);
	goto T180;
T180:;
	{object V94 = CMPcdr(V88);
	VMR26(V94)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function KCL-TOP-RESTARTS	*/

static object LI28()

{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V95;
	object V96;
	object V97;
	base[4]= (VV[32]->s.s_dbind);
	{object V98;
	object V99= base[4];
	if(V99==Cnil){
	V95= Cnil;
	goto T186;}
	base[3]=V98=MMcons(Cnil,Cnil);
	goto T187;
T187:;
	if((CMPcdr((V99->c.c_car)))==Cnil){
	goto T190;}
	(V98->c.c_cdr)= make_cons(CMPcdr((V99->c.c_car)),Cnil);
	goto T188;
	goto T190;
T190:;
	(V98->c.c_cdr)= Cnil;
	goto T188;
T188:;
	while(MMcdr(V98)!=Cnil)V98=MMcdr(V98);
	if((V99=MMcdr(V99))==Cnil){
	base[3]=base[3]->c.c_cdr;
	V95= base[3];
	goto T186;}
	goto T187;}
	goto T186;
T186:;
	if(((VV[30]->s.s_dbind))==Cnil){
	goto T194;}
	V96= make_cons((VV[30]->s.s_dbind),(V95));
	goto T192;
	goto T194;
T194:;
	V96= (V95);
	goto T192;
T192:;
	{object V101;
	object V102= (V96);
	if(V102==Cnil){
	V97= Cnil;
	goto T196;}
	base[3]=V101=MMcons(Cnil,Cnil);
	goto T197;
T197:;
	(V101->c.c_car)= (*(LnkLI98))((V102->c.c_car));
	if((V102=MMcdr(V102))==Cnil){
	V97= base[3];
	goto T196;}
	V101=MMcdr(V101)=MMcons(Cnil,Cnil);
	goto T197;}
	goto T196;
T196:;
	{object V103;
	object V104= (V96);
	object V105= (V97);
	if(V104==Cnil||V105==Cnil){
	(VV[25]->s.s_dbind)= Cnil;
	goto T200;}
	base[3]=V103=MMcons(Cnil,Cnil);
	goto T201;
T201:;
	(V103->c.c_car)= make_cons((V104->c.c_car),(V105->c.c_car));
	if((V104=MMcdr(V104))==Cnil||(V105=MMcdr(V105))==Cnil){
	(VV[25]->s.s_dbind)= base[3];
	goto T200;}
	V103=MMcdr(V103)=MMcons(Cnil,Cnil);
	goto T201;}
	goto T200;
T200:;
	{object V106 = (V97);
	VMR27(V106)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for RESTART-REPORT	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	{object V107;
	base[0]=MMcons(base[0],Cnil);
	V107=(base[1]);
	vs_top=sup;
	{object V108;
	V108= STREF(object,(base[0]->c.c_car),8);
	if(((V108))==Cnil){
	goto T206;}
	base[2]= (V108);
	goto T203;
	goto T206;
T206:;
	base[3]= STREF(object,(base[0]->c.c_car),0);
	base[3]=MMcons(base[3],base[0]);
	base[2]= 
	make_cclosure_new(LC48,Cnil,base[3],Cdata);}
	goto T203;
T203:;
	base[3]= (V107);
	vs_top=(vs_base=base+3)+1;
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;
	}
}
/*	macro definition for RESTART-BIND	*/

static void L30()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	vs_top=sup;
	{object V109=base[0]->c.c_cdr;
	base[2]= (V109->c.c_car);
	V109=V109->c.c_cdr;
	base[3]= V109;}
	{object V111;
	object V112= base[2];
	if(V112==Cnil){
	V110= Cnil;
	goto T210;}
	base[4]=V111=MMcons(Cnil,Cnil);
	goto T211;
T211:;
	(V111->c.c_car)= listA(6,VV[43],VV[26],list(2,VV[7],CMPcar((V112->c.c_car))),VV[28],CMPcadr((V112->c.c_car)),CMPcddr((V112->c.c_car)));
	if((V112=MMcdr(V112))==Cnil){
	V110= base[4];
	goto T210;}
	V111=MMcdr(V111)=MMcons(Cnil,Cnil);
	goto T211;}
	goto T210;
T210:;
	V114= list(2,VV[10],list(3,VV[13],make_cons(VV[42],V110),VV[10]));
	base[4]= listA(3,VV[8],make_cons(/* INLINE-ARGS */V114,Cnil),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function FIND-RESTART	*/

static object LI31(object V115,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB30 VMS30 VMV30
	{register object V116;
	object V117;
	va_start(ap,first);
	V116= V115;
	narg = narg - 1;
	if (narg <= 0) goto T213;
	else {
	V117= first;}
	--narg; goto T214;
	goto T213;
T213:;
	V117= Cnil;
	goto T214;
T214:;
	{object V118;
	V118= (VFUN_NARGS=1,(*(LnkLI99))((V117)));
	{register object V119;
	register object V120;
	V119= (V118);
	V120= CMPcar((V119));
	goto T220;
T220:;
	if(!(((V119))==Cnil)){
	goto T221;}
	{object V121 = Cnil;
	VMR30(V121)}
	goto T221;
T221:;
	if(((V120))==((V116))){
	goto T226;}
	if(!((STREF(object,(V120),0))==((V116)))){
	goto T225;}
	goto T226;
T226:;
	{object V122 = (V120);
	VMR30(V122)}
	goto T225;
T225:;
	V119= CMPcdr((V119));
	V120= CMPcar((V119));
	goto T220;}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for INVOKE-RESTART	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	{object V123;
	object V124;
	V123=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V124=(base[1]);
	vs_top=sup;
	{object V125;{object V126;
	V126= (VFUN_NARGS=1,(*(LnkLI59))((V123)));
	if(V126==Cnil)goto T236;
	V125= V126;
	goto T235;
	goto T236;
T236:;}
	base[2]= VV[44];
	base[3]= VV[45];
	base[4]= (V123);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk100)();
	vs_top=sup;
	V125= vs_base[0];
	goto T235;
T235:;
	base[2]= STREF(object,(V125),4);
	{object V127;
	V127= (V124);
	 vs_top=base+3;
	 while(V127!=Cnil)
	 {vs_push((V127)->c.c_car);V127=(V127)->c.c_cdr;}
	vs_base=base+3;}
	{object _funobj = base[2];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	function definition for INVOKE-RESTART-INTERACTIVELY	*/

static void L33()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	{object V128;
	V128=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V129;{object V130;
	V130= (VFUN_NARGS=1,(*(LnkLI59))((V128)));
	if(V130==Cnil)goto T244;
	V129= V130;
	goto T243;
	goto T244;
T244:;}
	base[1]= VV[46];
	base[2]= (V128);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk91)();
	vs_top=sup;
	V129= vs_base[0];
	goto T243;
T243:;
	base[1]= STREF(object,(V129),4);
	{object V131;
	{object V132;
	V132= STREF(object,(V129),12);
	if(((V132))==Cnil){
	goto T252;}
	vs_base=vs_top;
	{object _funobj = (V132);if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	vs_top=sup;
	V131= vs_base[0];
	goto T249;
	goto T252;
T252:;
	V131= Cnil;}
	goto T249;
T249:;
	 vs_top=base+2;
	 while(V131!=Cnil)
	 {vs_push((V131)->c.c_car);V131=(V131)->c.c_cdr;}
	vs_base=base+2;}
	{object _funobj = base[1];if(type_of(_funobj)==t_cclosure && (_funobj->cc.cc_turbo))
                   (*(_funobj->cc.cc_self))(_funobj->cc.cc_turbo);
               else if (type_of(_funobj)==t_cfun) (*(_funobj->cc.cc_self))();
               else super_funcall_no_event(_funobj);}
	return;}
	}
}
/*	macro definition for ONCE-ONLY	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	vs_top=sup;
	{object V133=base[0]->c.c_cdr;
	base[2]= (V133->c.c_car);
	V133=V133->c.c_cdr;
	base[3]= V133;}
	base[4]= base[2];
	base[5]= base[3];
	vs_top=(vs_base=base+4)+2;
	L35(base);
	return;
}
/*	function definition for MUNGE-RESTART-CASE-EXPRESSION	*/

static void L36()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{register object V134;
	object V135;
	V134=(base[0]);
	V135=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V136;
	base[2]= (V134);
	vs_top=(vs_base=base+2)+1;
	Lmacroexpand();
	vs_top=sup;
	V136= vs_base[0];
	if(!(type_of((V136))==t_cons)){
	goto T259;}
	{register object V137;
	object V138;
	V137= CMPcar((V136));
	if(!(((V137))==(VV[51]))){
	goto T264;}
	V138= CMPcddr((V136));
	goto T262;
	goto T264;
T264:;
	V138= CMPcdr((V136));
	goto T262;
T262:;
	{register object x= (V137),V139= VV[52];
	while(V139!=Cnil)
	if(eql(x,V139->c.c_car)){
	goto T268;
	}else V139=V139->c.c_cdr;
	goto T267;}
	goto T268;
T268:;
	{object V140;
	register object V141;
	V142= CMPcar((V138));
	V143= make_cons(VV[42],CMPcdr((V138)));
	{object V145= (V137);
	if((V145!= VV[101]))goto T271;
	V144= VV[54];
	goto T270;
	goto T271;
T271:;
	if((V145!= VV[102]))goto T272;
	V144= VV[55];
	goto T270;
	goto T272;
T272:;
	V144= VV[56];}
	goto T270;
T270:;
	V146= list(2,VV[7],V144);
	V140= list(5,VV[53],/* INLINE-ARGS */V142,/* INLINE-ARGS */V143,/* INLINE-ARGS */V146,list(2,VV[7],(V137)));
	base[4]= VV[57];
	vs_top=(vs_base=base+4)+1;
	Lgensym();
	vs_top=sup;
	V141= vs_base[0];
	V147= list(2,(V141),(V140));
	V148= make_cons(/* INLINE-ARGS */V147,Cnil);
	{object V150;
	object V151= (V135);
	if(V151==Cnil){
	V149= Cnil;
	goto T275;}
	base[4]=V150=MMcons(Cnil,Cnil);
	goto T276;
T276:;
	(V150->c.c_car)= list(2,VV[59],list(2,VV[7],CMPcar((V151->c.c_car))));
	if((V151=MMcdr(V151))==Cnil){
	V149= base[4];
	goto T275;}
	V150=MMcdr(V150)=MMcons(Cnil,Cnil);
	goto T276;}
	goto T275;
T275:;
	V153= make_cons(VV[42],V149);
	if(!(((V137))==(VV[51]))){
	goto T280;}
	V154= list(3,VV[51],CMPcadr((V134)),(V141));
	goto T278;
	goto T280;
T280:;
	V154= list(2,(V137),(V141));
	goto T278;
T278:;
	base[4]= list(3,VV[8],/* INLINE-ARGS */V148,list(4,VV[58],(V141),/* INLINE-ARGS */V153,V154));
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T267;
T267:;
	base[4]= (V134);
	vs_top=(vs_base=base+4)+1;
	return;}
	goto T259;
T259:;
	base[2]= (V134);
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	macro definition for RESTART-CASE	*/

static void L37()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	vs_top=sup;
	{object V155=base[0]->c.c_cdr;
	base[2]= (V155->c.c_car);
	V155=V155->c.c_cdr;
	base[3]= V155;}
	{object V156;
	object V157;
	object V158;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V156= vs_base[0];
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V157= vs_base[0];
	{object V159;
	object V160= base[3];
	if(V160==Cnil){
	V158= Cnil;
	goto T284;}
	base[4]=V159=MMcons(Cnil,Cnil);
	goto T285;
T285:;
	{object V162;
	object V163;
	base[5]= CMPcddr((V160->c.c_car));
	base[6]= VV[79];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk6)();
	if(vs_base>=vs_top){vs_top=sup;goto T290;}
	V162= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T291;}
	V163= vs_base[0];
	vs_top=sup;
	goto T292;
	goto T290;
T290:;
	V162= Cnil;
	goto T291;
T291:;
	V163= Cnil;
	goto T292;
T292:;
	{object V164;
	object V165;
	object V166;
	base[5]= (V162);
	base[6]= VV[61];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V164= vs_base[0];
	base[5]= (V162);
	base[6]= VV[62];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V165= vs_base[0];
	base[5]= (V162);
	base[6]= VV[63];
	vs_top=(vs_base=base+5)+2;
	Lgetf();
	vs_top=sup;
	V166= vs_base[0];
	V167= CMPcar((V160->c.c_car));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V168= vs_base[0];
	base[5]= VV[61];
	base[6]= (V164);
	base[7]= VV[62];
	base[8]= (V165);
	base[9]= VV[63];
	base[10]= (V166);
	vs_top=(vs_base=base+5)+6;
	L38(base);
	vs_top=sup;
	V169= vs_base[0];
	(V159->c.c_car)= list(5,/* INLINE-ARGS */V167,V168,V169,CMPcadr((V160->c.c_car)),(V163));}}
	if((V160=MMcdr(V160))==Cnil){
	V158= base[4];
	goto T284;}
	V159=MMcdr(V159)=MMcons(Cnil,Cnil);
	goto T285;}
	goto T284;
T284:;
	V170= list(2,(V157),Cnil);
	V171= make_cons(/* INLINE-ARGS */V170,Cnil);
	{object V173;
	object V174= (V158);
	if(V174==Cnil){
	V172= Cnil;
	goto T310;}
	base[4]=V173=MMcons(Cnil,Cnil);
	goto T311;
T311:;
	{object V176;
	object V177;
	object V178;
	V176= CMPcar((V174->c.c_car));
	V177= CMPcadr((V174->c.c_car));
	V178= CMPcaddr((V174->c.c_car));
	V179= list(3,VV[70],(V157),VV[71]);
	(V173->c.c_car)= listA(3,(V176),list(2,VV[67],list(4,VV[68],VV[69],/* INLINE-ARGS */V179,list(2,VV[72],(V177)))),(V178));}
	if((V174=MMcdr(V174))==Cnil){
	V172= base[4];
	goto T310;}
	V173=MMcdr(V173)=MMcons(Cnil,Cnil);
	goto T311;}
	goto T310;
T310:;
	base[4]= base[2];
	base[5]= (V158);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk103)();
	vs_top=sup;
	V180= vs_base[0];
	V181= list(3,VV[66],V172,list(3,VV[73],(V156),V180));
	{object V183;
	object V184= (V158);
	if(V184==Cnil){
	V182= Cnil;
	goto T319;}
	base[4]=V183=MMcons(Cnil,Cnil);
	goto T320;
T320:;
	{object V186;
	object V187;
	object V188;
	V186= CMPcadr((V184->c.c_car));
	V187= CMPcadddr((V184->c.c_car));
	V188= CMPcar(CMPcddddr((V184->c.c_car)));
	(V183->c.c_cdr)= list(2,(V186),list(3,VV[73],(V156),list(3,VV[74],list(2,VV[67],listA(3,VV[68],(V187),(V188))),(V157))));}
	while(MMcdr(V183)!=Cnil)V183=MMcdr(V183);
	if((V184=MMcdr(V184))==Cnil){
	base[4]=base[4]->c.c_cdr;
	V182= base[4];
	goto T319;}
	goto T320;}
	goto T319;
T319:;
	base[4]= list(3,VV[64],(V156),list(3,VV[8],/* INLINE-ARGS */V171,listA(3,VV[65],/* INLINE-ARGS */V181,V182)));
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for WITH-SIMPLE-RESTART	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	vs_top=sup;
	{object V189=base[0]->c.c_cdr;
	{object V190= (V189->c.c_car);
	base[2]= (V190->c.c_car);
	V190=V190->c.c_cdr;
	base[3]= (V190->c.c_car);
	V190=V190->c.c_cdr;
	base[4]= V190;}
	V189=V189->c.c_cdr;
	base[5]= V189;}
	V191= make_cons(VV[47],base[5]);
	base[6]= list(3,VV[80],/* INLINE-ARGS */V191,list(5,base[2],Cnil,VV[61],list(3,VV[68],VV[81],listA(4,VV[82],VV[77],base[3],base[4])),VV[83]));
	vs_top=(vs_base=base+6)+1;
	return;
}
/*	function definition for ABORT	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	{object V192;
	if(vs_base>=vs_top){vs_top=sup;goto T325;}
	V192=(base[0]);
	vs_top=sup;
	goto T326;
	goto T325;
T325:;
	V192= Cnil;
	goto T326;
T326:;
	base[1]= (VFUN_NARGS=2,(*(LnkLI59))(VV[84],(V192)));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk104)();
	vs_top=sup;
	base[1]= VV[85];
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk91)();
	return;
	}
}
/*	function definition for CONTINUE	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[86];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk104)();
	return;
}
/*	function definition for MUFFLE-WARNING	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[87];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk104)();
	return;
}
/*	function definition for STORE-VALUE	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	{object V193;
	V193=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[88];
	base[2]= (V193);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk104)();
	return;
	}
}
/*	function definition for USE-VALUE	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	{object V194;
	V194=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= VV[89];
	base[2]= (V194);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk104)();
	return;
	}
}
/*	local function TRANSFORM-KEYWORDS	*/

static void L38(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	{register object V195;
	object V196;
	object V197;
	parse_key(vs_base,FALSE,FALSE,3,VV[61],VV[62],VV[63]);
	vs_top=sup;
	V195=(base[0]);
	V196=(base[1]);
	V197=(base[2]);
	{register object V198;
	V198= Cnil;
	if(((V195))==Cnil){
	goto T337;}
	if(!(type_of((V195))==t_string)){
	goto T343;}
	V199= list(2,VV[67],list(3,VV[68],VV[75],list(3,VV[76],(V195),VV[77])));
	goto T341;
	goto T343;
T343:;
	V199= list(2,VV[67],(V195));
	goto T341;
T341:;
	V198= listA(3,V199,VV[29],(V198));
	goto T337;
T337:;
	if(((V196))==Cnil){
	goto T345;}
	V198= listA(3,list(2,VV[67],(V196)),VV[39],(V198));
	goto T345;
T345:;
	if(((V197))==Cnil){
	goto T349;}
	V198= listA(3,list(2,VV[67],(V197)),VV[78],(V198));
	goto T349;
T349:;
	base[6]= nreverse((V198));
	vs_top=(vs_base=base+6)+1;
	return;}
	}
}
/*	local function FROB	*/

static void L35(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{object V200;
	object V201;
	V200=(base[0]);
	V201=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V200))!=Cnil){
	goto T354;}
	base[2]= make_cons(VV[47],(V201));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T354;
T354:;
	{register object V202;
	V202= CMPcar((V200));
	if(!(((long)length((V202)))!=(2))){
	goto T357;}
	base[2]= VV[48];
	base[3]= (V202);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk91)();
	vs_top=sup;
	goto T357;
T357:;
	{object V203;
	object V204;
	V203= CMPcar((V202));
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V204= vs_base[0];
	V205= list(2,(V204),CMPcadr((V202)));
	V206= list(2,/* INLINE-ARGS */V205,list(2,(V203),VV[49]));
	V207= list(2,VV[42],list(3,VV[42],(V203),(V204)));
	base[2]= CMPcdr((V200));
	base[3]= (V201);
	vs_top=(vs_base=base+2)+2;
	L35(base0);
	vs_top=sup;
	V208= vs_base[0];
	base[2]= list(3,VV[8],/* INLINE-ARGS */V206,list(4,VV[42],VV[50],/* INLINE-ARGS */V207,V208));
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	local function CLOSURE	*/

static void LC48(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_check;
	{object V209;
	V209=(base[0]);
	vs_top=sup;
	if(((base0[0]->c.c_car))==Cnil){
	goto T368;}
	base[1]= (V209);
	base[2]= VV[40];
	base[3]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	goto T368;
T368:;
	base[1]= (V209);
	base[2]= VV[41];
	base[3]= (base0[1]->c.c_car);
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;
	}
}
/*	local function CLOSURE	*/

static void LC47(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	{object V210;
	V210=(base[0]);
	vs_top=sup;
	{object V211;
	if(!(((base0[0]->c.c_car))==((VV[30]->s.s_dbind)))){
	goto T378;}
	V211= (VV[31]->s.s_dbind);
	goto T376;
	goto T378;
T378:;{object V213;
	base[1]= (base0[0]->c.c_car);
	base[2]= (VV[32]->s.s_dbind);
	base[3]= VV[33];
	base[4]= (VV[15]->s.s_gfdef);
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk105)();
	vs_top=sup;
	V213= vs_base[0];
	if(V213==Cnil)goto T381;
	V212= V213;
	goto T380;
	goto T381;
T381:;}
	V212= VV[34];
	goto T380;
T380:;
	V211= CMPcar(V212);
	goto T376;
T376:;
	if(!(((V211))==(VV[35]))){
	goto T388;}
	base[1]= (V210);
	base[2]= VV[36];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;
	goto T388;
T388:;
	if(((V211))!=Cnil){
	goto T393;}
	base[1]= (V210);
	base[2]= VV[37];
	vs_top=(vs_base=base+1)+2;
	Lformat();
	return;
	goto T393;
T393:;
	base[1]= (V210);
	base[2]= VV[38];
	base[3]= CMPmake_fixnum((long)length((V211)));
	vs_top=(vs_base=base+1)+3;
	Lformat();
	return;}
	}
}
/*	local function CLOSURE	*/

static void LC46(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	vs_top=sup;
	{frame_ptr fr;
	V214= make_cons((base0[0]->c.c_car),Cnil);
	base[0]= CMPcar(/* INLINE-ARGS */V214);
	fr=frs_sch_catch(base[0]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,base[0]);
	base[1]= (base0[0]->c.c_car);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,base[0]);}
}
/*	local function CLOSURE	*/

static void LC45(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	{object V215;
	V215=(base[0]);
	vs_top=sup;
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
static void LnkT105(){ call_or_link(VV[105],(void **)(void *)&Lnk105);} /* FIND */
static void LnkT104(){ call_or_link(VV[104],(void **)(void *)&Lnk104);} /* INVOKE-RESTART */
static void LnkT103(){ call_or_link(VV[103],(void **)(void *)&Lnk103);} /* MUNGE-RESTART-CASE-EXPRESSION */
static void LnkT6(){ call_or_link(VV[6],(void **)(void *)&Lnk6);} /* PARSE-KEYWORD-PAIRS */
static void LnkT100(){ call_or_link(VV[100],(void **)(void *)&Lnk100);} /* SPECIFIC-ERROR */
static object  LnkTLI59(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[59],(void **)(void *)&LnkLI59,first,ap);va_end(ap);return V1;} /* FIND-RESTART */
static object  LnkTLI99(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[99],(void **)(void *)&LnkLI99,first,ap);va_end(ap);return V1;} /* COMPUTE-RESTARTS */
static object  LnkTLI98(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[98],(void **)(void *)&LnkLI98,1,first,ap);va_end(ap);return V1;} /* FIND-KCL-TOP-RESTART */
static object  LnkTLI97(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[97],(void **)(void *)&LnkLI97,1,first,ap);va_end(ap);return V1;} /* MAKE-KCL-TOP-RESTART */
static object  LnkTLI43(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[43],(void **)(void *)&LnkLI43,first,ap);va_end(ap);return V1;} /* MAKE-RESTART */
static void LnkT95(){ call_or_link(VV[95],(void **)(void *)&Lnk95);} /* DEFINE-STRUCTURE */
static void LnkT94(){ call_or_link(VV[94],(void **)(void *)&Lnk94);} /* RESTART-REPORT */
static object  LnkTLI93(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[93],(void **)(void *)&LnkLI93,1,first,ap);va_end(ap);return V1;} /* UNIQUE-ID */
static object  LnkTLI92(){return call_proc0(VV[92],(void **)(void *)&LnkLI92);} /* KCL-TOP-RESTARTS */
static void LnkT91(){ call_or_link(VV[91],(void **)(void *)&Lnk91);} /* ERROR */
static void LnkT90(){ call_or_link(VV[90],(void **)(void *)&Lnk90);} /* *MAKE-SPECIAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

