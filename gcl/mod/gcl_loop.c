
#include "cmpinclude.h"
#include "gcl_loop.h"
void init_gcl_loop(){do_init(VV);}
/*	macro definition for LOOP-COPYLIST*	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	vs_top=sup;
	{object V1=base[0]->c.c_cdr;
	base[2]= (V1->c.c_car);}
	base[3]= list(2,VV[0],base[2]);
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local entry for function LOOP-GENTEMP	*/

static object LI2(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB2 VMS2 VMV2
	{object V2;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T1;
	else {
	V2= first;}
	--narg; goto T2;
	goto T1;
T1:;
	V2= VV[1];
	goto T2;
T2:;
	if(((VV[2]->s.s_dbind))==Cnil){
	goto T5;}
	base[0]= coerce_to_string((V2));
	vs_top=(vs_base=base+0)+1;
	Lgensym();
	vs_top=sup;
	{object V3 = vs_base[0];
	VMR2(V3)}
	goto T5;
T5:;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	{object V4 = vs_base[0];
	VMR2(V4)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for LOOP-OPTIMIZATION-QUANTITIES	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{object V5;
	V5=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= small_fixnum(1);
	base[2]= small_fixnum(1);
	base[3]= small_fixnum(1);
	base[4]= small_fixnum(1);
	base[5]= small_fixnum(1);
	vs_top=(vs_base=base+1)+5;
	return;
	}
}
/*	local entry for function HIDE-VARIABLE-REFERENCES	*/

static object LI4(V8,V9)

object V8;object V9;
{	 VMB4 VMS4 VMV4
	goto TTL;
TTL:;
	{object V10 = (V9);
	VMR4(V10)}
	return Cnil;
}
/*	local entry for function HIDE-VARIABLE-REFERENCE	*/

static object LI5(V14,V15,V16)

object V14;object V15;object V16;
{	 VMB5 VMS5 VMV5
	goto TTL;
TTL:;
	{object V17 = (V16);
	VMR5(V17)}
	return Cnil;
}
/*	macro definition for WITH-LOOP-LIST-COLLECTION-HEAD	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	vs_top=sup;
	{object V18=base[0]->c.c_cdr;
	{object V19= (V18->c.c_car);
	base[2]= (V19->c.c_car);
	V19=V19->c.c_cdr;
	base[3]= (V19->c.c_car);
	V19=V19->c.c_cdr;
	if(endp(V19)){
	base[4]= Cnil;
	} else {
	base[4]= (V19->c.c_car);}}
	V18=V18->c.c_cdr;
	base[5]= V18;}
	{object V20;
	if(base[4]==Cnil){
	V20= Cnil;
	goto T14;}
	V21= list(2,base[4],Cnil);
	V20= make_cons(/* INLINE-ARGS */V21,Cnil);
	goto T14;
T14:;
	V22= list(2,base[2],VV[4]);
	base[6]= listA(3,VV[3],listA(3,/* INLINE-ARGS */V22,list(2,base[3],base[2]),(V20)),base[5]);
	vs_top=(vs_base=base+6)+1;
	return;}
}
/*	macro definition for LOOP-COLLECT-RPLACD	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	vs_top=sup;
	{object V23=base[0]->c.c_cdr;
	{object V24= (V23->c.c_car);
	base[2]= (V24->c.c_car);
	V24=V24->c.c_cdr;
	base[3]= (V24->c.c_car);
	V24=V24->c.c_cdr;
	if(endp(V24)){
	base[4]= Cnil;
	} else {
	base[4]= (V24->c.c_car);}}
	V23=V23->c.c_cdr;
	base[5]= (V23->c.c_car);}
	base[6]= base[5];
	base[7]= base[1];
	vs_top=(vs_base=base+6)+2;
	Lmacroexpand();
	vs_top=sup;
	base[5]= vs_base[0];
	{register object V26;
	V26= Cnil;
	if(!(type_of(base[5])==t_cons)){
	goto T20;}
	if(!((CMPcar(base[5]))==(VV[5]))){
	goto T24;}
	V27 = CMPmake_fixnum((long)length(CMPcdr(base[5])));
	V26= one_minus(V27);
	goto T20;
	goto T24;
T24:;
	{register object x= CMPcar(base[5]),V28= VV[6];
	while(V28!=Cnil)
	if(eql(x,V28->c.c_car)){
	goto T28;
	}else V28=V28->c.c_cdr;
	goto T20;}
	goto T28;
T28:;
	if((CMPcddr(base[5]))==Cnil){
	goto T20;}
	base[6]= base[5];
	vs_top=(vs_base=base+6)+1;
	Llast();
	vs_top=sup;
	V30= vs_base[0];
	{register object x= CMPcar(V30),V29= VV[7];
	while(V29!=Cnil)
	if(eql(x,V29->c.c_car)){
	goto T32;
	}else V29=V29->c.c_cdr;
	goto T20;}
	goto T32;
T32:;
	V31 = CMPmake_fixnum((long)length(CMPcdr(base[5])));
	V26= number_minus(V31,small_fixnum(2));
	goto T20;
T20:;
	{object V32;
	if(((V26))!=Cnil){
	goto T38;}
	V33= list(3,VV[9],list(2,VV[10],base[3]),base[5]);
	V32= list(3,VV[8],/* INLINE-ARGS */V33,list(3,VV[11],base[3],list(2,VV[12],list(2,VV[10],base[3]))));
	goto T36;
	goto T38;
T38:;
	if(!(number_compare((V26),small_fixnum(0))<0)){
	goto T41;}
	base[6]= Cnil;
	vs_top=(vs_base=base+6)+1;
	return;
	goto T41;
T41:;
	if(!(number_compare((V26),small_fixnum(0))==0)){
	goto T44;}
	V32= list(3,VV[13],base[3],list(3,VV[11],base[3],base[5]));
	goto T36;
	goto T44;
T44:;
	base[6]= list(3,VV[9],list(2,VV[10],base[3]),base[5]);
	base[7]= (V26);
	vs_top=(vs_base=base+6)+2;
	L8(base);
	vs_top=sup;
	V34= vs_base[0];
	V32= list(3,VV[11],base[3],V34);
	goto T36;
T36:;
	if((base[4])==Cnil){
	goto T49;}
	V32= list(3,VV[14],(V32),list(3,VV[11],base[4],list(2,VV[10],base[2])));
	goto T49;
T49:;
	base[6]= (V32);
	vs_top=(vs_base=base+6)+1;
	return;}}
}
/*	macro definition for LOOP-COLLECT-ANSWER	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	vs_top=sup;
	{object V35=base[0]->c.c_cdr;
	base[2]= (V35->c.c_car);
	V35=V35->c.c_cdr;
	if(endp(V35)){
	base[3]= Cnil;
	} else {
	base[3]= (V35->c.c_car);}}
	if(base[3]!=Cnil){
	vs_top=(vs_base=base+3)+1;
	return;}
	base[4]= list(2,VV[10],base[2]);
	vs_top=(vs_base=base+4)+1;
	return;
}
/*	local entry for function MAKE-LOOP-MINIMAX-INTERNAL	*/

static object LI10(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB9 VMS9 VMV9
	{object V36;
	object V37;
	object V38;
	object V39;
	object V40;
	object V41;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI10key,first,ap);
	V36=(Vcs[0]);
	V37=(Vcs[1]);
	V38=(Vcs[2]);
	V39=(Vcs[3]);
	V40=(Vcs[4]);
	V41=(Vcs[5]);
	base[0]= VV[18];
	base[1]= (V36);
	base[2]= (V37);
	base[3]= (V38);
	base[4]= (V39);
	base[5]= (V40);
	base[6]= (V41);
	vs_top=(vs_base=base+0)+7;
	siLmake_structure();
	vs_top=sup;
	{object V42 = vs_base[0];
	VMR9(V42)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MAKE-LOOP-MINIMAX	*/

static object LI11(V45,V46)

object V45;object V46;
{	 VMB10 VMS10 VMV10
	goto TTL;
TTL:;
	{object V47;
	base[0]= (V46);
	base[1]= (VV[19]->s.s_dbind);
	base[2]= VV[20];
	base[3]= (VV[333]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	Lassoc();
	vs_top=sup;
	V48= vs_base[0];
	V47= CMPcdr(V48);
	V49= (VFUN_NARGS=1,(*(LnkLI335))(VV[24]));
	if(((V47))==Cnil){
	goto T68;}
	V50= Cnil;
	goto T67;
	goto T68;
T68:;
	V50= (VFUN_NARGS=1,(*(LnkLI335))(VV[26]));
	goto T67;
T67:;
	{object V51 = (VFUN_NARGS=12,(*(LnkLI334))(VV[21],(V45),VV[22],(V46),VV[23],/* INLINE-ARGS */V49,VV[25],V50,VV[27],Cnil,VV[28],(V47)));
	VMR10(V51)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-NOTE-MINIMAX-OPERATION	*/

static object LI12(V54,V55)

object V54;register object V55;
{	 VMB11 VMS11 VMV11
	goto TTL;
TTL:;
	{object V58;
	base[1]= V54;
	base[2]= STREF(object,V55,16);
	vs_top=(vs_base=base+1)+2;
	Ladjoin();
	vs_top=sup;
	V58= vs_base[0];
	V59= Ct;
	STSET(object,V55,16, (V58));
	(void)((V58));}
	if((CMPcdr(STREF(object,(V55),16)))==Cnil){
	goto T74;}
	if((STREF(object,(V55),12))!=Cnil){
	goto T74;}
	V60= (VFUN_NARGS=1,(*(LnkLI335))(VV[26]));
	V61= Ct;
	STSET(object,(V55),12, /* INLINE-ARGS */V60);
	(void)(/* INLINE-ARGS */V60);
	goto T74;
T74:;
	{object V62 = (V54);
	VMR11(V62)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for WITH-MINIMAX-VALUE	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	vs_top=sup;
	{object V63=base[0]->c.c_cdr;
	base[2]= (V63->c.c_car);
	V63=V63->c.c_cdr;
	base[3]= V63;}
	{object V64;
	object V65;
	object V66;
	register object V67;
	register object V68;
	object V69;
	object V70;
	V64= (*(LnkLI336))(STREF(object,base[2],4));
	V65= CMPcar(STREF(object,base[2],16));
	V66= STREF(object,base[2],20);
	V67= STREF(object,base[2],0);
	V68= STREF(object,base[2],8);
	V69= STREF(object,base[2],12);
	V70= STREF(object,base[2],4);
	if(((V69))==Cnil){
	goto T87;}
	V71= list(2,(V67),(V64));
	V72= list(2,(V68),(V64));
	V73= list(3,/* INLINE-ARGS */V71,/* INLINE-ARGS */V72,list(2,(V69),Cnil));
	base[4]= listA(4,VV[29],/* INLINE-ARGS */V73,list(2,VV[30],list(4,VV[31],(V70),(V67),(V68))),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T87;
T87:;
	if(!(((V65))==(VV[32]))){
	goto T91;}
	V74= CMPcar((V66));
	goto T89;
	goto T91;
T91:;
	V74= CMPcadr((V66));
	goto T89;
T89:;
	V75= list(2,(V67),V74);
	V76= list(2,/* INLINE-ARGS */V75,list(2,(V68),(V64)));
	base[4]= listA(4,VV[29],/* INLINE-ARGS */V76,list(2,VV[30],list(4,VV[31],(V70),(V67),(V68))),base[3]);
	vs_top=(vs_base=base+4)+1;
	return;}
}
/*	macro definition for LOOP-ACCUMULATE-MINIMAX-VALUE	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	vs_top=sup;
	{object V77=base[0]->c.c_cdr;
	base[2]= (V77->c.c_car);
	V77=V77->c.c_cdr;
	base[3]= (V77->c.c_car);
	V77=V77->c.c_cdr;
	base[4]= (V77->c.c_car);}
	{object V78;
	object V79;
	register object V80;
	object V81;
	V78= STREF(object,base[2],0);
	V79= STREF(object,base[2],8);
	V80= STREF(object,base[2],12);
	{object V83= base[3];
	if((V83!= VV[32]))goto T98;
	V82= VV[33];
	goto T97;
	goto T98;
T98:;
	if((V83!= VV[338]))goto T99;
	V82= VV[34];
	goto T97;
	goto T99;
T99:;
	FEerror("The ECASE key value ~s is illegal.",1,V83);
	V82= Cnil;
	goto T97;}
	goto T97;
T97:;
	V84= list(3,V82,(V79),(V78));
	V81= (*(LnkLI337))(Ct,STREF(object,base[2],0),/* INLINE-ARGS */V84);
	V85= list(3,VV[11],(V79),base[4]);
	if(((V80))==Cnil){
	goto T102;}
	V86= list(3,VV[35],list(2,VV[36],(V80)),(V81));
	goto T100;
	goto T102;
T102:;
	V86= (V81);
	goto T100;
T100:;
	if((V80)==Cnil){
	V87= Cnil;
	goto T104;}
	V87= list(2,(V80),Ct);
	goto T104;
T104:;
	V88= list(2,(V78),(V79));
	V89= append(V87,/* INLINE-ARGS */V88);
	base[9]= list(3,VV[14],/* INLINE-ARGS */V85,list(3,VV[8],V86,make_cons(VV[11],/* INLINE-ARGS */V89)));
	vs_top=(vs_base=base+9)+1;
	return;}
}
/*	local entry for function LOOP-TEQUAL	*/

static object LI15(V92,V93)

object V92;object V93;
{	 VMB14 VMS14 VMV14
	goto TTL;
TTL:;
	if(type_of((V92))==t_symbol){
	goto T105;}
	{object V94 = Cnil;
	VMR14(V94)}
	goto T105;
T105:;
	base[0]= (V92);
	base[1]= (V93);
	vs_top=(vs_base=base+0)+2;
	Lstring_eq();
	vs_top=sup;
	{object V95 = vs_base[0];
	VMR14(V95)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-TASSOC	*/

static object LI16(V98,V99)

object V98;object V99;
{	 VMB15 VMS15 VMV15
	goto TTL;
TTL:;
	if(type_of((V98))==t_symbol){
	goto T109;}
	{object V100 = Cnil;
	VMR15(V100)}
	goto T109;
T109:;
	base[0]= (V98);
	base[1]= (V99);
	base[2]= VV[20];
	base[3]= (VV[339]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	Lassoc();
	vs_top=sup;
	{object V101 = vs_base[0];
	VMR15(V101)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-TMEMBER	*/

static object LI17(V104,V105)

object V104;object V105;
{	 VMB16 VMS16 VMV16
	goto TTL;
TTL:;
	if(type_of((V104))==t_symbol){
	goto T115;}
	{object V106 = Cnil;
	VMR16(V106)}
	goto T115;
T115:;
	base[0]= (V104);
	base[1]= (V105);
	base[2]= VV[20];
	base[3]= (VV[339]->s.s_gfdef);
	vs_top=(vs_base=base+0)+4;
	Lmember();
	vs_top=sup;
	{object V107 = vs_base[0];
	VMR16(V107)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-LOOKUP-KEYWORD	*/

static object LI18(V110,V111)

object V110;object V111;
{	 VMB17 VMS17 VMV17
	goto TTL;
TTL:;
	if(type_of((V110))==t_symbol){
	goto T121;}
	{object V112 = Cnil;
	VMR17(V112)}
	goto T121;
T121:;
	base[1]= symbol_name((V110));
	base[2]= (V111);
	vs_top=(vs_base=base+1)+2;
	Lgethash();
	vs_top=sup;
	base[0]= vs_base[0];
	vs_top=(vs_base=base+0)+1;
	vs_top=sup;
	{object V113 = vs_base[0];
	VMR17(V113)}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for LOOP-STORE-TABLE-DATA	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	vs_top=sup;
	{object V114=base[0]->c.c_cdr;
	base[2]= (V114->c.c_car);
	V114=V114->c.c_cdr;
	base[3]= (V114->c.c_car);
	V114=V114->c.c_cdr;
	base[4]= (V114->c.c_car);}
	base[5]= list(3,VV[9],list(3,VV[37],list(2,VV[38],base[2]),base[3]),base[4]);
	vs_top=(vs_base=base+5)+1;
	return;
}
/*	local entry for function MAKE-LOOP-UNIVERSE	*/

static object LI20(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB19 VMS19 VMV19
	{object V115;
	object V116;
	object V117;
	object V118;
	object V119;
	object V120;
	object V121;
	object V122;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI20key,first,ap);
	V115=(Vcs[0]);
	V116=(Vcs[1]);
	V117=(Vcs[2]);
	V118=(Vcs[3]);
	V119=(Vcs[4]);
	V120=(Vcs[5]);
	V121=(Vcs[6]);
	V122=(Vcs[7]);
	base[0]= VV[39];
	base[1]= (V115);
	base[2]= (V116);
	base[3]= (V117);
	base[4]= (V118);
	base[5]= (V119);
	base[6]= (V120);
	base[7]= (V121);
	base[8]= (V122);
	vs_top=(vs_base=base+0)+9;
	siLmake_structure();
	vs_top=sup;
	{object V123 = vs_base[0];
	VMR19(V123)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function PRINT-LOOP-UNIVERSE	*/

static object LI21(V127,V128,V129)

object V127;object V128;object V129;
{	 VMB20 VMS20 VMV20
	goto TTL;
TTL:;
	{object V130;
	{object V131= STREF(object,(V127),24);
	if((V131!= Cnil))goto T136;
	V130= VV[40];
	goto T135;
	goto T136;
T136:;
	if((V131!= Ct))goto T137;
	V130= VV[41];
	goto T135;
	goto T137;
T137:;
	if((V131!= VV[314]))goto T138;
	V130= VV[42];
	goto T135;
	goto T138;
T138:;
	V130= STREF(object,(V127),24);}
	goto T135;
T135:;
	base[0]= (V128);
	base[1]= VV[43];
	base[3]= (V127);
	vs_top=(vs_base=base+3)+1;
	Ltype_of();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V130);
	vs_top=(vs_base=base+0)+4;
	Lformat();
	vs_top=sup;
	{object V132 = vs_base[0];
	VMR20(V132)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-STANDARD-LOOP-UNIVERSE	*/

static object LI22(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB21 VMS21 VMV21
	bds_check;
	{object V133;
	object V134;
	object V135;
	object V136;
	object V137;
	object V138;
	object V139;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI22key,first,ap);
	V133=(Vcs[0]);
	V134=(Vcs[1]);
	V135=(Vcs[2]);
	V136=(Vcs[3]);
	V137=(Vcs[4]);
	V138=(Vcs[5]);
	V139=(Vcs[6]);
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
	goto T146;
T146:;
	base[2]= (V139);
	base[3]= VV[46];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk340)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T147;}
	bds_unwind1;
	bds_unwind1;
	goto T144;
	goto T147;
T147:;
	base[2]= VV[47];
	base[3]= VV[48];
	base[4]= VV[49];
	base[5]= (V139);
	base[6]= VV[46];
	vs_top=(vs_base=base+2)+5;
	Lcerror();
	vs_top=sup;
	base[2]= (VV[50]->s.s_dbind);
	base[3]= VV[51];
	base[4]= VV[49];
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[2]= (VV[50]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	Lfinish_output();
	vs_top=sup;
	vs_base=vs_top;
	Lread();
	vs_top=sup;
	V139= vs_base[0];
	base[2]= (VV[50]->s.s_dbind);
	base[3]= VV[52];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	goto T146;
	goto T144;
T144:;
	base[0]= (V133);
	vs_top=(vs_base=base+0)+1;
	L23(base);
	vs_top=sup;
	V140= vs_base[0];
	base[0]= (V134);
	vs_top=(vs_base=base+0)+1;
	L23(base);
	vs_top=sup;
	V141= vs_base[0];
	base[0]= (V135);
	vs_top=(vs_base=base+0)+1;
	L23(base);
	vs_top=sup;
	V142= vs_base[0];
	base[0]= (V136);
	vs_top=(vs_base=base+0)+1;
	L23(base);
	vs_top=sup;
	V143= vs_base[0];
	V144= (((((V139))==Cnil?Ct:Cnil))==Cnil?Ct:Cnil);
	base[0]= (V137);
	vs_top=(vs_base=base+0)+1;
	L23(base);
	vs_top=sup;
	V145= vs_base[0];
	{object V147;
	object V148;
	V147= CMPmake_fixnum((long)length((V138)));
	base[2]= VV[61];
	if(!(number_compare((V147),small_fixnum(10))<0)){
	goto T188;}
	base[3]= small_fixnum(10);
	goto T186;
	goto T188;
T188:;
	base[3]= (V147);
	goto T186;
T186:;
	base[4]= VV[20];
	base[5]= (VV[342]->s.s_gfdef);
	vs_top=(vs_base=base+2)+4;
	Lmake_hash_table();
	vs_top=sup;
	V148= vs_base[0];
	{register object V149;
	register object V150;
	V149= (V138);
	V150= CMPcar((V149));
	goto T196;
T196:;
	if(!(((V149))==Cnil)){
	goto T197;}
	goto T192;
	goto T197;
T197:;
	if(!(type_of((V150))!=t_cons)){
	goto T203;}
	base[3]= V150;
	base[4]= V148;
	base[5]= V150;
	vs_top=(vs_base=base+3)+3;
	siLhash_set();
	vs_top=sup;
	goto T201;
	goto T203;
T203:;
	{object V154;
	object V156;
	V154= CMPcar((V150));
	V156= CMPcadr((V150));
	base[5]= (V154);
	base[6]= V148;
	base[7]= (V156);
	vs_top=(vs_base=base+5)+3;
	siLhash_set();
	vs_top=sup;}
	goto T201;
T201:;
	V149= CMPcdr((V149));
	V150= CMPcar((V149));
	goto T196;}
	goto T192;
T192:;
	V146= (V148);}
	{object V157 = (VFUN_NARGS=16,(*(LnkLI341))(VV[53],V140,VV[54],V141,VV[55],V142,VV[56],V143,VV[57],(V139),VV[58],/* INLINE-ARGS */V144,VV[59],V145,VV[60],V146));
	VMR21(V157)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function LOOP-MAKE-PSETQ	*/

static object LI24(V159)

register object V159;
{	 VMB22 VMS22 VMV22
	goto TTL;
TTL:;
	if((V159)==Cnil){
	{object V160 = Cnil;
	VMR22(V160)}}
	V161= CMPcar((V159));
	if((CMPcddr((V159)))!=Cnil){
	goto T220;}
	V162= CMPcadr((V159));
	goto T218;
	goto T220;
T220:;
	V163= CMPcadr((V159));
	V162= list(3,VV[62],/* INLINE-ARGS */V163,(*(LnkLI344))(CMPcddr((V159))));
	goto T218;
T218:;
	V164= list(2,/* INLINE-ARGS */V161,V162);
	{object V165 = (*(LnkLI343))(/* INLINE-ARGS */V164);
	VMR22(V165)}
	return Cnil;
}
/*	local entry for function LOOP-MAKE-DESETQ	*/

static object LI25(V167)

object V167;
{	 VMB23 VMS23 VMV23
	goto TTL;
TTL:;
	if(((V167))!=Cnil){
	goto T223;}
	{object V168 = Cnil;
	VMR23(V168)}
	goto T223;
T223:;
	if(((VV[63]->s.s_dbind))==Cnil){
	goto T227;}
	V169= CMPcadr((VV[63]->s.s_dbind));
	goto T225;
	goto T227;
T227:;
	V169= VV[64];
	goto T225;
T225:;
	{object V170 = make_cons(V169,(V167));
	VMR23(V170)}
	return Cnil;
}
/*	macro definition for LOOP-REALLY-DESETQ	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM24; VC24
	vs_check;
	vs_top=sup;
	{object V171=base[0]->c.c_cdr;
	base[2]= V171;}
	{register object V172;
	V172= Cnil;
	goto T230;
T230:;
	if((base[2])!=Cnil){
	goto T231;}
	if((CMPcdr((V172)))!=Cnil){
	goto T235;}
	base[3]= CMPcar((V172));
	vs_top=(vs_base=base+3)+1;
	return;
	goto T235;
T235:;
	V173= nreverse((V172));
	base[3]= make_cons(VV[14],/* INLINE-ARGS */V173);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T231;
T231:;
	{register object V174;
	V174= CMPcar(base[2]);
	base[2]= CMPcdr(base[2]);
	base[4]= (V174);}
	{register object V175;
	V175= CMPcar(base[2]);
	base[2]= CMPcdr(base[2]);
	base[5]= (V175);}
	vs_top=(vs_base=base+4)+2;
	L28(base);
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V172);
	vs_top=(vs_base=base+3)+2;
	Lrevappend();
	vs_top=sup;
	V172= vs_base[0];
	goto T230;}
}
/*	function definition for LOOP-CONSTANT-FOLD-IF-POSSIBLE	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	{object V176;
	object V177;
	V176=(base[0]);
	vs_base=vs_base+1;
	if(vs_base>=vs_top){vs_top=sup;goto T252;}
	V177=(base[1]);
	vs_top=sup;
	goto T253;
	goto T252;
T252:;
	V177= Cnil;
	goto T253;
T253:;
	{register object V179;
	register object V180;
	V179= Cnil;
	V180= Cnil;
	base[2]= V176;
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	V179= vs_base[0];
	if(((V179))==Cnil){
	goto T255;}
	base[2]= V176;
	vs_top=(vs_base=base+2)+1;
	Leval();
	vs_top=sup;
	V180= vs_base[0];
	goto T255;
T255:;
	if(((V179))==Cnil){
	goto T262;}
	if(((V177))==Cnil){
	goto T262;}
	base[2]= (V180);
	base[3]= (V177);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk340)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T262;}
	(void)((VFUN_NARGS=4,(*(LnkLI345))(VV[67],(V176),(V180),(V177))));
	V179= Cnil;
	V180= Cnil;
	goto T262;
T262:;
	base[2]= V176;
	base[3]= (V179);
	base[4]= (V180);
	vs_top=(vs_base=base+2)+3;
	return;}
	}
}
/*	local entry for function LOOP-CONSTANTP	*/

static object LI30(V182)

object V182;
{	 VMB26 VMS26 VMV26
	goto TTL;
TTL:;
	base[0]= (V182);
	vs_top=(vs_base=base+0)+1;
	Lconstantp();
	vs_top=sup;
	{object V183 = vs_base[0];
	VMR26(V183)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-CODE-DUPLICATION-THRESHOLD	*/

static object LI31(V185)

object V185;
{	 VMB27 VMS27 VMV27
	goto TTL;
TTL:;
	{object V186;
	object V187;
	base[0]= (V185);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk346)();
	if(vs_base>=vs_top){vs_top=sup;goto T281;}
	V186= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T282;}
	V187= vs_base[0];
	vs_top=sup;
	goto T283;
	goto T281;
T281:;
	V186= Cnil;
	goto T282;
T282:;
	V187= Cnil;
	goto T283;
T283:;
	V188= number_minus((V186),(V187));
	V189= number_times(/* INLINE-ARGS */V188,small_fixnum(10));
	{object V190 = number_plus(small_fixnum(40),/* INLINE-ARGS */V189);
	VMR27(V190)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for LOOP-BODY	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	vs_top=sup;
	{object V191=base[0]->c.c_cdr;
	base[2]= (V191->c.c_car);
	V191=V191->c.c_cdr;
	base[3]= (V191->c.c_car);
	V191=V191->c.c_cdr;
	base[4]= (V191->c.c_car);
	V191=V191->c.c_cdr;
	base[5]= (V191->c.c_car);
	V191=V191->c.c_cdr;
	base[6]= (V191->c.c_car);
	base[7]= Cnil;
	base[8]= Cnil;
	base[9]= Cnil;}
	if(((long)length(base[3]))==((long)length(base[5]))){
	goto T287;}
	base[10]= VV[68];
	vs_top=(vs_base=base+10)+1;
	Lerror();
	vs_top=sup;
	goto T287;
T287:;
	base[7]= reverse(base[3]);
	base[8]= reverse(base[5]);
	if(((VV[69]->s.s_dbind))!=Cnil){
	goto T296;}
	if((base[7])!=Cnil){
	goto T295;}
	goto T296;
T296:;
	vs_base=vs_top;
	L35(base);
	return;
	goto T295;
T295:;
	{register long V192;
	V192= fix((*(LnkLI347))(base[1]));
	goto T302;
T302:;
	goto T307;
T307:;
	if((base[7])==Cnil){
	goto T309;}
	if(equal(CMPcar(base[7]),CMPcar(base[8]))){
	goto T308;}
	goto T309;
T309:;
	goto T305;
	goto T308;
T308:;
	{register object V193;
	{register object V194;
	V194= CMPcar(base[7]);
	base[7]= CMPcdr(base[7]);
	V193= (V194);}
	base[4]= make_cons((V193),base[4]);}
	{register object V195;
	V195= CMPcar(base[8]);
	base[8]= CMPcdr(base[8]);}
	goto T307;
	goto T305;
T305:;
	if((base[7])!=Cnil){
	goto T326;}
	vs_base=vs_top;
	L35(base);
	return;
	goto T326;
T326:;
	{register object V196;
	register object V197;
	register object V198;
	register object V199;
	register object V200;
	V196= base[7];
	V197= base[8];
	V198= Cnil;
	V199= small_fixnum(0);
	V200= Cnil;
	goto T331;
T331:;
	if(((V196))!=Cnil){
	goto T332;}
	vs_base=vs_top;
	L35(base);
	return;
	goto T332;
T332:;
	if(equal(CMPcar((V196)),CMPcar((V197)))){
	goto T338;}
	V198= (V196);
	V199= small_fixnum(0);
	goto T336;
	goto T338;
T338:;
	base[10]= CMPcar((V196));
	base[11]= base[1];
	vs_top=(vs_base=base+10)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	V200= vs_base[0];
	if(((V200))==Cnil){
	goto T343;}
	V199= number_plus((V199),(V200));
	V201 = CMPmake_fixnum(V192);
	if(!(number_compare((V199),V201)>0)){
	goto T336;}
	goto T343;
T343:;
	{register object V202;
	register object V203;
	V202= Cnil;
	V203= Cnil;
	goto T354;
T354:;
	{register object V204;
	{register object V205;
	V205= CMPcar(base[7]);
	base[7]= CMPcdr(base[7]);
	V204= (V205);}
	V203= make_cons((V204),(V203));}
	{register object V206;
	{register object V207;
	V207= CMPcar(base[8]);
	base[8]= CMPcdr(base[8]);
	V206= (V207);}
	V202= make_cons((V206),(V202));}
	if(!((base[7])==(CMPcdr((V198))))){
	goto T369;}
	goto T352;
	goto T369;
T369:;
	goto T354;
	goto T352;
T352:;
	if((base[9])!=Cnil){
	goto T374;}
	{register object V208;
	base[9]= (VV[70]->s.s_dbind);
	V208= list(3,VV[11],base[9],Ct);
	V203= make_cons((V208),(V203));}
	goto T374;
T374:;
	{register object V209;
	base[12]= (V202);
	vs_top=(vs_base=base+12)+1;
	L33(base);
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+11)+1;
	L34(base);
	vs_top=sup;
	V210= vs_base[0];
	base[12]= (V203);
	vs_top=(vs_base=base+12)+1;
	L33(base);
	vs_top=sup;
	base[11]= vs_base[0];
	vs_top=(vs_base=base+11)+1;
	L34(base);
	vs_top=sup;
	V211= vs_base[0];
	V209= list(4,VV[71],base[9],V210,V211);
	base[4]= make_cons((V209),base[4]);}}
	goto T390;
T390:;
	{register object V212;
	V212= CMPcar(base[8]);
	base[8]= CMPcdr(base[8]);}
	{register object V213;
	{register object V214;
	V214= CMPcar(base[7]);
	base[7]= CMPcdr(base[7]);
	V213= (V214);}
	base[4]= make_cons((V213),base[4]);}
	if(!((base[7])==(CMPcdr((V196))))){
	goto T403;}
	goto T388;
	goto T403;
T403:;
	goto T390;
	goto T388;
T388:;
	goto T329;
	goto T336;
T336:;
	V196= CMPcdr((V196));
	V197= CMPcdr((V197));
	goto T331;}
	goto T329;
T329:;
	goto T302;}
}
/*	local entry for function DUPLICATABLE-CODE-P	*/

static object LI36(V217,V218)

object V217;object V218;
{	 VMB29 VMS29 VMV29
	goto TTL;
TTL:;
	if(((V217))!=Cnil){
	goto T415;}
	{long V219 = 0;
	VMR29((object)V219)}
	goto T415;
T415:;
	{long V220;
	base[0]= (V217);
	base[1]= (V218);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk77)();
	vs_top=sup;
	V220= fix(vs_base[0]);
	{long V221 = V220;
	VMR29((object)V221)}}
	base[0]=base[0];
}
/*	local entry for function DESTRUCTURING-SIZE	*/

static object LI37(V223)

object V223;
{	 VMB30 VMS30 VMV30
	goto TTL;
TTL:;
	{register object V224;
	register object V225;
	V224= (V223);
	V225= small_fixnum(0);
	goto T421;
T421:;
	if(!(type_of((V224))!=t_cons)){
	goto T422;}
	if(((V224))!=Cnil){
	goto T427;}
	V226= small_fixnum(0);
	goto T425;
	goto T427;
T427:;
	V226= small_fixnum(1);
	goto T425;
T425:;
	{object V227 = number_plus((V225),V226);
	VMR30(V227)}
	goto T422;
T422:;
	{object V228;
	V228= CMPcdr((V224));
	V229= (*(LnkLI348))(CMPcar((V224)));
	V225= number_plus(/* INLINE-ARGS */V229,(V225));
	V224= (V228);}
	goto T421;}
	return Cnil;
}
/*	function definition for ESTIMATE-CODE-SIZE	*/

static void L38()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM31; VC31
	vs_check;
	{VOL object V230;
	VOL object V231;
	V230=(base[0]);
	V231=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	frs_push(FRS_CATCH,VV[77]);
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	return;}
	else{
	base[2]= (V230);
	base[3]= (V231);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk349)();
	frs_pop();
	return;}
	}
}
/*	function definition for ESTIMATE-CODE-SIZE-1	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	{object V232;
	V232=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V232);
	vs_top=(vs_base=base+2)+1;
	Lconstantp();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T438;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T438;
T438:;
	if(!(type_of((V232))==t_symbol)){
	goto T442;}
	{object V233;
	object V234;
	base[2]= (V232);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	Lmacroexpand_1();
	if(vs_base>=vs_top){vs_top=sup;goto T447;}
	V233= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T448;}
	V234= vs_base[0];
	vs_top=sup;
	goto T449;
	goto T447;
T447:;
	V233= Cnil;
	goto T448;
T448:;
	V234= Cnil;
	goto T449;
T449:;
	if(((V234))==Cnil){
	goto T451;}
	V232= (V233);
	goto TTL;
	goto T451;
T451:;
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T442;
T442:;
	if(!(type_of((V232))!=t_cons)){
	goto T457;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T457;
T457:;
	if(!(type_of(CMPcar((V232)))==t_symbol)){
	goto T460;}
	{object V235;
	object V236;
	register long V237;
	V235= CMPcar((V232));
	V237= 0;
	V236= Cnil;
	{object V238 =((V235))->s.s_plist;
	 object ind= VV[77];
	while(V238!=Cnil){
	if(V238->c.c_car==ind){
	V236= (V238->c.c_cdr->c.c_car);
	goto T467;
	}else V238=V238->c.c_cdr->c.c_cdr;}
	V236= Cnil;}
	goto T467;
T467:;
	if(((V236))==Cnil){
	goto T465;}
	if(!(type_of(V236)==t_fixnum)){
	goto T469;}
	base[2]= CMPcdr((V232));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V240= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((long)(fix((V236)))+(V240));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T469;
T469:;
	base[2]= (V232);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	super_funcall_no_event((V236));
	return;
	goto T465;
T465:;
	{register object x= (V235),V241= (VV[78]->s.s_dbind);
	while(V241!=Cnil)
	if(eql(x,V241->c.c_car->c.c_car) &&V241->c.c_car != Cnil){
	V236= (V241->c.c_car);
	goto T478;
	}else V241=V241->c.c_cdr;
	V236= Cnil;}
	goto T478;
T478:;
	if(((V236))==Cnil){
	goto T476;}
	{long V242= fix(CMPcadr((V236)));
	base[2]= CMPcdr((V232));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V243= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((long)(/* INLINE-ARGS */V242)+(V243));
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T476;
T476:;
	if(!(((V235))==(VV[79]))){
	goto T482;}
	{register object V244;
	object V245;
	V244= CMPcdr((V232));
	V245= CMPcar((V244));
	goto T487;
T487:;
	if(!(((V244))==Cnil)){
	goto T488;}
	base[4]= CMPmake_fixnum(V237);
	vs_top=(vs_base=base+4)+1;
	return;
	goto T488;
T488:;
	V246 = CMPmake_fixnum(V237);
	base[4]= (V245);
	vs_top=(vs_base=base+4)+1;
	L40(base);
	vs_top=sup;
	V247= vs_base[0];
	V237= fix(number_plus(V246,V247));
	V237= (long)(V237)+(1);
	V244= CMPcdr((V244));
	V245= CMPcar((V244));
	goto T487;}
	goto T482;
T482:;
	if(!(((V235))==(VV[80]))){
	goto T504;}
	{register object V248;
	V248= CMPcdr((V232));
	goto T508;
T508:;
	if(((V248))!=Cnil){
	goto T509;}
	base[2]= CMPmake_fixnum(V237);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T509;
T509:;
	base[2]= CMPmake_fixnum(V237);
	base[3]= (*(LnkLI348))(CMPcar((V248)));
	base[5]= CMPcadr((V248));
	base[6]= base[1];
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	base[4]= vs_base[0];
	vs_top=(vs_base=base+2)+3;
	Lplus();
	vs_top=sup;
	V237= fix(vs_base[0]);
	V248= CMPcdr((V248));
	goto T508;}
	goto T504;
T504:;
	{register object x= (V235),V249= VV[81];
	while(V249!=Cnil)
	if(eql(x,V249->c.c_car)){
	goto T525;
	}else V249=V249->c.c_cdr;
	goto T524;}
	goto T525;
T525:;
	{object V250;
	V250= CMPcdr((V232));
	goto T528;
T528:;
	if(((V250))!=Cnil){
	goto T529;}
	base[2]= CMPmake_fixnum(V237);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T529;
T529:;
	base[2]= CMPmake_fixnum(V237);
	base[4]= CMPcadr((V250));
	base[5]= base[1];
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= small_fixnum(1);
	vs_top=(vs_base=base+2)+3;
	Lplus();
	vs_top=sup;
	V237= fix(vs_base[0]);
	V250= CMPcdr((V250));
	goto T528;}
	goto T524;
T524:;
	if(!(((V235))==(VV[82]))){
	goto T544;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T544;
T544:;
	if(!(((V235))==(VV[83]))){
	goto T547;}
	base[2]= small_fixnum(1);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T547;
T547:;
	if(!(((V235))==(VV[84]))){
	goto T550;}
	{long V251= (long)length(CMPcadr((V232)));
	base[2]= CMPcddr((V232));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V252= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((long)(/* INLINE-ARGS */V251)+(V252));
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T550;
T550:;
	if(!(((V235))==(VV[85]))){
	goto T555;}
	base[2]= CMPcaddr((V232));
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	V253= vs_base[0];
	base[2]= one_plus(V253);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T555;
T555:;
	base[2]= (V235);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk350)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T560;}
	{register object x= (V235),V254= (VV[86]->s.s_dbind);
	while(V254!=Cnil)
	if(eql(x,V254->c.c_car)){
	goto T565;
	}else V254=V254->c.c_cdr;
	goto T561;}
	goto T565;
T565:;
	goto T560;
T560:;
	{frame_ptr fr;
	fr=frs_sch_catch(VV[77]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[77]);
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	unwind(fr,VV[77]);}
	goto T561;
T561:;
	{object V255;
	object V256;
	base[2]= (V232);
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	Lmacroexpand_1();
	if(vs_base>=vs_top){vs_top=sup;goto T570;}
	V255= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T571;}
	V256= vs_base[0];
	vs_top=sup;
	goto T572;
	goto T570;
T570:;
	V255= Cnil;
	goto T571;
T571:;
	V256= Cnil;
	goto T572;
T572:;
	if(((V256))==Cnil){
	goto T574;}
	V232= (V255);
	goto TTL;
	goto T574;
T574:;
	base[2]= CMPcdr((V232));
	vs_top=(vs_base=base+2)+1;
	L40(base);
	vs_top=sup;
	V257= fix(vs_base[0]);
	base[2]= CMPmake_fixnum((long)(3)+(V257));
	vs_top=(vs_base=base+2)+1;
	return;}}
	goto T460;
T460:;
	{frame_ptr fr;
	fr=frs_sch_catch(VV[77]);
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,VV[77]);
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	unwind(fr,VV[77]);}
	}
}
/*	local entry for function LOOP-CONTEXT	*/

static object LI41()

{	 VMB33 VMS33 VMV33
	goto TTL;
TTL:;
	{register object V258;
	register object V259;
	V258= (VV[87]->s.s_dbind);
	V259= Cnil;
	goto T583;
T583:;
	if(!(((V258))==(CMPcdr((VV[88]->s.s_dbind))))){
	goto T584;}
	{object V260 = nreverse((V259));
	VMR33(V260)}
	goto T584;
T584:;
	{object V261;
	V261= CMPcdr((V258));
	V259= make_cons(CMPcar((V258)),(V259));
	V258= (V261);}
	goto T583;}
	return Cnil;
}
/*	function definition for LOOP-ERROR	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{object V262;
	object V263;
	V262=(base[0]);
	vs_base=vs_base+1;
	vs_top[0]=Cnil;
	{object *p=vs_top;
	 for(;p>vs_base;p--)p[-1]=MMcons(p[-1],p[0]);}
	V263=(base[1]);
	vs_top=sup;
	base[2]= VV[89];
	base[3]= VV[90];
	base[4]= (V262);
	base[5]= (V263);
	base[6]= (*(LnkLI351))();
	vs_top=(vs_base=base+2)+5;
	(void) (*Lnk352)();
	return;
	}
}
/*	local entry for function LOOP-WARN	*/

static object LI43(object V264,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB35 VMS35 VMV35
	{object V265;
	object V266;
	va_start(ap,first);
	V265= V264;
	narg= narg - 1;
	V267 = list_vector_new(narg,first,ap);
	V266= V267;
	base[0]= VV[91];
	base[1]= (V265);
	base[2]= (V266);
	base[3]= (*(LnkLI351))();
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk353)();
	vs_top=sup;
	{object V268 = vs_base[0];
	VMR35(V268)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LOOP-CHECK-DATA-TYPE	*/

static object LI44(object V270,object V269,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB36 VMS36 VMV36
	{register object V271;
	register object V272;
	object V273;
	va_start(ap,first);
	V271= V270;
	V272= V269;
	narg = narg - 2;
	if (narg <= 0) goto T601;
	else {
	V273= first;}
	--narg; goto T602;
	goto T601;
T601:;
	V273= (V272);
	goto T602;
T602:;
	if(((V271))!=Cnil){
	goto T605;}
	{object V274 = (V273);
	VMR36(V274)}
	goto T605;
T605:;
	{object V275;
	object V276;
	base[0]= (V271);
	base[1]= (V272);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk333)();
	if(vs_base>=vs_top){vs_top=sup;goto T610;}
	V275= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T611;}
	V276= vs_base[0];
	vs_top=sup;
	goto T612;
	goto T610;
T610:;
	V275= Cnil;
	goto T611;
T611:;
	V276= Cnil;
	goto T612;
T612:;
	if(((V276))!=Cnil){
	goto T615;}
	(void)((VFUN_NARGS=3,(*(LnkLI345))(VV[92],(V271),(V272))));
	goto T613;
	goto T615;
T615:;
	if(((V275))!=Cnil){
	goto T613;}
	base[0]= VV[93];
	base[1]= (V271);
	base[2]= (V272);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T613;
T613:;
	{object V277 = (V271);
	VMR36(V277)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	macro definition for LOOP-FINISH	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	vs_top=sup;
	base[2]= VV[94];
	vs_top=(vs_base=base+2)+1;
	return;
}
/*	local entry for function SUBST-GENSYMS-FOR-NIL	*/

static object LI46(V280)

register object V280;
{	 VMB38 VMS38 VMV38
	goto TTL;
TTL:;
	if(((V280))!=Cnil){
	goto T623;}
	{object V282;
	V282= (VFUN_NARGS=0,(*(LnkLI335))());
	(VV[95]->s.s_dbind)= make_cons((V282),(VV[95]->s.s_dbind));
	V281= (VV[95]->s.s_dbind);}
	{object V283 = CMPcar(V281);
	VMR38(V283)}
	goto T623;
T623:;
	if(!(type_of((V280))!=t_cons)){
	goto T629;}
	{object V284 = (V280);
	VMR38(V284)}
	goto T629;
T629:;
	V285= (*(LnkLI355))(CMPcar((V280)));
	V286= (*(LnkLI355))(CMPcdr((V280)));
	{object V287 = make_cons(/* INLINE-ARGS */V285,/* INLINE-ARGS */V286);
	VMR38(V287)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-BUILD-DESTRUCTURING-BINDINGS	*/

static object LI47(V290,V291)

register object V290;object V291;
{	 VMB39 VMS39 VMV39
	bds_check;
	goto TTL;
TTL:;
	if(((V290))==Cnil){
	goto T632;}
	bds_bind(VV[95],Cnil);
	V292= (*(LnkLI355))(CMPcar((V290)));
	V293= CMPcadr((V290));
	V294= list(2,VV[30],make_cons(VV[97],(VV[95]->s.s_dbind)));
	V295= listA(5,VV[96],/* INLINE-ARGS */V292,/* INLINE-ARGS */V293,/* INLINE-ARGS */V294,(*(LnkLI356))(CMPcddr((V290)),(V291)));
	{object V296 = make_cons(/* INLINE-ARGS */V295,Cnil);
	bds_unwind1;
	VMR39(V296)}
	goto T632;
T632:;
	{object V297 = (V291);
	VMR39(V297)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-TRANSLATE	*/

static object LI48(V301,V302,V303)

object V301;object V302;object V303;
{	 VMB40 VMS40 VMV40
	bds_check;
	goto TTL;
TTL:;
	bds_bind(VV[99],V303);
	bds_bind(VV[98],V302);
	bds_bind(VV[88],V301);
	bds_bind(VV[100],(VV[88]->s.s_dbind));
	bds_bind(VV[87],Cnil);
	bds_bind(VV[101],Cnil);
	bds_bind(VV[102],Cnil);
	bds_bind(VV[103],Cnil);
	bds_bind(VV[104],Cnil);
	bds_bind(VV[105],Cnil);
	bds_bind(VV[106],Cnil);
	bds_bind(VV[107],Cnil);
	bds_bind(VV[108],Cnil);
	bds_bind(VV[109],Cnil);
	bds_bind(VV[110],Cnil);
	bds_bind(VV[111],Cnil);
	bds_bind(VV[112],Cnil);
	bds_bind(VV[113],Cnil);
	bds_bind(VV[114],Cnil);
	bds_bind(VV[115],Cnil);
	bds_bind(VV[116],Cnil);
	bds_bind(VV[117],Cnil);
	bds_bind(VV[118],Cnil);
	bds_bind(VV[119],Cnil);
	bds_bind(VV[120],Cnil);
	bds_bind(VV[121],Cnil);
	(void)((*(LnkLI357))());
	(void)((*(LnkLI358))());
	{register object V304;
	V305= nreverse((VV[108]->s.s_dbind));
	V306= nreverse((VV[110]->s.s_dbind));
	V307= nreverse((VV[111]->s.s_dbind));
	V308= nreverse((VV[113]->s.s_dbind));
	base[23]= (VV[114]->s.s_dbind);
	base[24]= nreverse((VV[115]->s.s_dbind));
	vs_top=(vs_base=base+23)+2;
	Lreconc();
	vs_top=sup;
	V309= vs_base[0];
	V304= list(6,VV[122],/* INLINE-ARGS */V305,/* INLINE-ARGS */V306,/* INLINE-ARGS */V307,/* INLINE-ARGS */V308,V309);
	{register object V310;
	register object V311;
	V310= (VV[107]->s.s_dbind);
	V311= CMPcar((V310));
	goto T644;
T644:;
	if(!(((V310))==Cnil)){
	goto T645;}
	goto T640;
	goto T645;
T645:;
	{object V312;
	object V313;
	object V314;
	object V315;
	V312= CMPcar((V311));
	V313= CMPcadr((V311));
	V314= CMPcaddr((V311));
	V315= CMPcadddr((V311));
	{register object V316;
	register object V317;
	V316= (V315);
	V317= CMPcar((V316));
	goto T658;
T658:;
	if(!(((V316))==Cnil)){
	goto T659;}
	goto T654;
	goto T659;
T659:;
	V318= make_cons((V304),Cnil);
	V304= append((V317),/* INLINE-ARGS */V318);
	V316= CMPcdr((V316));
	V317= CMPcar((V316));
	goto T658;}
	goto T654;
T654:;
	if(((V312))!=Cnil){
	goto T670;}
	if(((V313))!=Cnil){
	goto T670;}
	if(((V314))==Cnil){
	goto T649;}
	goto T670;
T670:;
	{object V319;
	V319= make_cons((V304),Cnil);
	if(((V313))==Cnil){
	goto T677;}
	{object V320;
	V320= make_cons(VV[30],(V313));
	V319= make_cons((V320),(V319));}
	goto T677;
T677:;
	if(((V312))!=Cnil){
	goto T685;}
	V321= VV[123];
	goto T683;
	goto T685;
T685:;
	if(((VV[63]->s.s_dbind))==Cnil){
	goto T688;}
	V321= CMPcar((VV[63]->s.s_dbind));
	goto T683;
	goto T688;
T688:;
	V321= VV[29];
	goto T683;
T683:;
	V304= listA(3,V321,(V312),(*(LnkLI356))((V314),(V319)));}}
	goto T649;
T649:;
	V310= CMPcdr((V310));
	V311= CMPcar((V310));
	goto T644;}
	goto T640;
T640:;
	if(((VV[120]->s.s_dbind))==Cnil){
	goto T696;}
	goto T699;
T699:;
	if((CMPcar((VV[120]->s.s_dbind)))!=Cnil){
	goto T700;}
	{object V322 = (V304);
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR40(V322)}
	goto T700;
T700:;
	{object V324;
	V324= CMPcar((VV[120]->s.s_dbind));
	(VV[120]->s.s_dbind)= CMPcdr((VV[120]->s.s_dbind));
	V323= (V324);}
	V304= list(3,VV[124],V323,(V304));
	goto T699;
	goto T696;
T696:;
	{object V325 = list(3,VV[124],Cnil,(V304));
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	bds_unwind1;
	VMR40(V325)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-ITERATION-DRIVER	*/

static object LI49()

{	 VMB41 VMS41 VMV41
	goto TTL;
TTL:;
	goto T713;
T713:;
	if(((VV[88]->s.s_dbind))!=Cnil){
	goto T714;}
	{object V326 = Cnil;
	VMR41(V326)}
	goto T714;
T714:;
	{register object V327;
	register object V328;
	V327= CMPcar((VV[88]->s.s_dbind));
	V328= Cnil;
	if(type_of((V327))==t_symbol){
	goto T721;}
	base[0]= VV[125];
	base[1]= (V327);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T718;
	goto T721;
T721:;
	(VV[87]->s.s_dbind)= (VV[88]->s.s_dbind);
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V328= (*(LnkLI360))((V327),STREF(object,(VV[99]->s.s_dbind),0));
	if(((V328))==Cnil){
	goto T729;}
	base[1]= CMPcar((V328));
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	base[0]= vs_base[0];
	{object V329;
	V329= CMPcdr((V328));
	 vs_top=base+1;
	 while(V329!=Cnil)
	 {vs_push((V329)->c.c_car);V329=(V329)->c.c_cdr;}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	goto T718;
	goto T729;
T729:;
	V328= (*(LnkLI360))((V327),STREF(object,(VV[99]->s.s_dbind),4));
	if(((V328))==Cnil){
	goto T736;}
	(void)((*(LnkLI361))((V328)));
	goto T718;
	goto T736;
T736:;
	if(((*(LnkLI362))((V327),VV[126]))==Cnil){
	goto T740;}
	base[0]= VV[127];
	base[1]= (V327);
	base[2]= CMPcar((VV[88]->s.s_dbind));
	base[3]= CMPcadr((VV[88]->s.s_dbind));
	vs_top=(vs_base=base+0)+4;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T718;
	goto T740;
T740:;
	base[0]= VV[128];
	base[1]= (V327);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;}
	goto T718;
T718:;
	goto T713;
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOOP-POP-SOURCE	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[88]->s.s_dbind))==Cnil){
	goto T751;}
	{object V330;
	V330= CMPcar((VV[88]->s.s_dbind));
	(VV[88]->s.s_dbind)= CMPcdr((VV[88]->s.s_dbind));
	base[0]= (V330);
	vs_top=(vs_base=base+0)+1;
	return;}
	goto T751;
T751:;
	base[0]= VV[129];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	return;
}
/*	local entry for function LOOP-GET-COMPOUND-FORM	*/

static object LI51()

{	 VMB43 VMS43 VMV43
	goto TTL;
TTL:;
	{object V331;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V331= vs_base[0];
	if(type_of((V331))==t_cons){
	goto T758;}
	base[0]= VV[130];
	base[1]= (V331);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T758;
T758:;
	{object V332 = (V331);
	VMR43(V332)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-GET-PROGN	*/

static object LI52()

{	 VMB44 VMS44 VMV44
	goto TTL;
TTL:;
	{register object V333;
	register object V334;
	V335= (*(LnkLI364))();
	V333= make_cons(/* INLINE-ARGS */V335,Cnil);
	V334= CMPcar((VV[88]->s.s_dbind));
	goto T766;
T766:;
	if(!(type_of((V334))!=t_cons)){
	goto T767;}
	if((CMPcdr((V333)))!=Cnil){
	goto T771;}
	{object V336 = CMPcar((V333));
	VMR44(V336)}
	goto T771;
T771:;
	V337= nreverse((V333));
	{object V338 = make_cons(VV[14],/* INLINE-ARGS */V337);
	VMR44(V338)}
	goto T767;
T767:;
	V339= (*(LnkLI364))();
	V333= make_cons(/* INLINE-ARGS */V339,(V333));
	V334= CMPcar((VV[88]->s.s_dbind));
	goto T766;}
	return Cnil;
}
/*	function definition for LOOP-GET-FORM	*/

static void L53()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	if(((VV[88]->s.s_dbind))==Cnil){
	goto T779;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	return;
	goto T779;
T779:;
	base[0]= VV[131];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	return;
}
/*	local entry for function LOOP-CONSTRUCT-RETURN	*/

static object LI54(V341)

object V341;
{	 VMB46 VMS46 VMV46
	goto TTL;
TTL:;
	{object V342 = list(3,VV[85],CMPcar((VV[120]->s.s_dbind)),(V341));
	VMR46(V342)}
	return Cnil;
}
/*	local entry for function LOOP-PSEUDO-BODY	*/

static object LI55(V344)

object V344;
{	 VMB47 VMS47 VMV47
	goto TTL;
TTL:;
	if(((VV[112]->s.s_dbind))!=Cnil){
	goto T782;}
	if(((VV[117]->s.s_dbind))==Cnil){
	goto T783;}
	goto T782;
T782:;
	(VV[111]->s.s_dbind)= make_cons(V344,(VV[111]->s.s_dbind));
	{object V346 = (VV[111]->s.s_dbind);
	VMR47(V346)}
	goto T783;
T783:;
	(VV[110]->s.s_dbind)= make_cons(V344,(VV[110]->s.s_dbind));
	(VV[113]->s.s_dbind)= make_cons(V344,(VV[113]->s.s_dbind));
	{object V349 = (VV[113]->s.s_dbind);
	VMR47(V349)}
	return Cnil;
}
/*	local entry for function LOOP-EMIT-BODY	*/

static object LI56(V351)

object V351;
{	 VMB48 VMS48 VMV48
	goto TTL;
TTL:;
	(VV[112]->s.s_dbind)= Ct;
	{object V352 = (*(LnkLI365))((V351));
	VMR48(V352)}
	return Cnil;
}
/*	local entry for function LOOP-EMIT-FINAL-VALUE	*/

static object LI57(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB49 VMS49 VMV49
	{object V353;
	object V354;
	va_start(ap,first);
	narg = narg - 0;
	if (narg <= 0) goto T793;
	else {
	V353= first;}
	V354= Ct;
	--narg; goto T794;
	goto T793;
T793:;
	V353= Cnil;
	V354= Cnil;
	goto T794;
T794:;
	if(((V354))==Cnil){
	goto T796;}
	{object V355;
	V355= (*(LnkLI366))((V353));
	(VV[115]->s.s_dbind)= make_cons((V355),(VV[115]->s.s_dbind));}
	goto T796;
T796:;
	if(((VV[116]->s.s_dbind))==Cnil){
	goto T801;}
	(void)((VFUN_NARGS=2,(*(LnkLI345))(VV[132],(VV[116]->s.s_dbind))));
	goto T801;
T801:;
	(VV[116]->s.s_dbind)= CMPcar((VV[87]->s.s_dbind));
	{object V356 = (VV[116]->s.s_dbind);
	VMR49(V356)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	function definition for LOOP-DISALLOW-CONDITIONAL	*/

static void L58()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_check;
	{object V357;
	if(vs_base>=vs_top){vs_top=sup;goto T805;}
	V357=(base[0]);
	vs_top=sup;
	goto T806;
	goto T805;
T805:;
	V357= Cnil;
	goto T806;
T806:;
	if(((VV[117]->s.s_dbind))==Cnil){
	goto T809;}
	base[1]= VV[133];
	base[2]= (V357);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk354)();
	return;
	goto T809;
T809:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for LOOP-DISALLOW-ANONYMOUS-COLLECTORS	*/

static void L59()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= VV[134];
	base[1]= (VV[121]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk367)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T814;}
	base[0]= VV[135];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	return;
	goto T814;
T814:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for LOOP-DISALLOW-AGGREGATE-BOOLEANS	*/

static void L60()
{register object *base=vs_base;
	register object *sup=base+VM52; VC52
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	if(((*(LnkLI362))((VV[116]->s.s_dbind),VV[136]))==Cnil){
	goto T820;}
	base[0]= VV[137];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	return;
	goto T820;
T820:;
	base[0]= Cnil;
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	local entry for function LOOP-TYPED-INIT	*/

static object LI61(V359)

register object V359;
{	 VMB53 VMS53 VMV53
	goto TTL;
TTL:;
	if(((V359))==Cnil){
	goto T824;}
	base[0]= (V359);
	base[1]= VV[138];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk333)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T824;}
	base[0]= (V359);
	base[1]= VV[139];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk333)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T830;}
	base[0]= (V359);
	base[1]= VV[140];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk333)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T831;}
	goto T830;
T830:;
	base[0]= small_fixnum(0);
	base[1]= (V359);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk368)();
	vs_top=sup;
	{object V360 = vs_base[0];
	VMR53(V360)}
	goto T831;
T831:;
	{object V361 = small_fixnum(0);
	VMR53(V361)}
	goto T824;
T824:;
	{object V362 = Cnil;
	VMR53(V362)}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOOP-OPTIONAL-TYPE	*/

static void L62()
{register object *base=vs_base;
	register object *sup=base+VM54; VC54
	vs_check;
	if(vs_base>=vs_top){vs_top=sup;goto T841;}
	vs_top=sup;
	goto T842;
	goto T841;
T841:;
	base[0]= Cnil;
	goto T842;
T842:;
	if((VV[88]->s.s_dbind)==Cnil){
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	base[1]= CMPcar((VV[88]->s.s_dbind));
	if(((*(LnkLI369))(base[1],VV[141]))==Cnil){
	goto T846;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk359)();
	return;
	goto T846;
T846:;
	if(!(type_of(base[1])==t_symbol)){
	goto T850;}
	{object V363;{object V364;
	base[2]= base[1];
	base[3]= STREF(object,(VV[99]->s.s_dbind),16);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V364= vs_base[0];
	if(V364==Cnil)goto T853;
	V363= V364;
	goto T852;
	goto T853;
T853:;}
	base[2]= symbol_name(base[1]);
	base[3]= STREF(object,(VV[99]->s.s_dbind),20);
	vs_top=(vs_base=base+2)+2;
	Lgethash();
	vs_top=sup;
	V363= vs_base[0];
	goto T852;
T852:;
	if(((V363))==Cnil){
	goto T860;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	base[2]= (V363);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T860;
T860:;
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T850;
T850:;
	if(!(type_of(base[0])==t_cons)){
	goto T865;}
	if(type_of(base[1])==t_cons){
	goto T863;}
	base[2]= VV[142];
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T863;
	goto T865;
T865:;
	base[2]= VV[143];
	base[3]= base[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T863;
T863:;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	base[2]= base[1];
	base[3]= base[0];
	vs_top=(vs_base=base+2)+2;
	L63(base);
	return;
}
/*	local entry for function LOOP-BIND-BLOCK	*/

static object LI65()

{	 VMB55 VMS55 VMV55
	goto TTL;
TTL:;
	if(((VV[102]->s.s_dbind))!=Cnil){
	goto T876;}
	if(((VV[105]->s.s_dbind))!=Cnil){
	goto T876;}
	if(((VV[109]->s.s_dbind))==Cnil){
	goto T877;}
	goto T876;
T876:;
	{object V365;
	V366= nreverse((VV[102]->s.s_dbind));
	V365= list(4,/* INLINE-ARGS */V366,(VV[105]->s.s_dbind),(VV[106]->s.s_dbind),(VV[109]->s.s_dbind));
	(VV[107]->s.s_dbind)= make_cons((V365),(VV[107]->s.s_dbind));}
	(VV[102]->s.s_dbind)= Cnil;
	(VV[105]->s.s_dbind)= Cnil;
	(VV[106]->s.s_dbind)= Cnil;
	(VV[109]->s.s_dbind)= Cnil;
	{object V367 = Cnil;
	VMR55(V367)}
	goto T877;
T877:;
	{object V368 = Cnil;
	VMR55(V368)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-VARIABLE-P	*/

static object LI66(V370)

register object V370;
{	 VMB56 VMS56 VMV56
	goto TTL;
TTL:;
	{register object V371;
	V371= (VV[107]->s.s_dbind);
	goto T894;
T894:;
	if(((V371))!=Cnil){
	goto T899;}
	{object V372 = Cnil;
	VMR56(V372)}
	goto T899;
T899:;
	{register object x= (V370),V373= CMPcaar((V371));
	while(V373!=Cnil)
	if(EQ(x,V373->c.c_car->c.c_car) &&V373->c.c_car != Cnil){
	goto T902;
	}else V373=V373->c.c_cdr;
	goto T897;}
	goto T902;
T902:;
	{object V374 = Ct;
	VMR56(V374)}
	goto T897;
T897:;
	V371= CMPcdr((V371));
	goto T894;}
	return Cnil;
}
/*	local entry for function LOOP-MAKE-VARIABLE	*/

static object LI67(object V377,object V376,object V375,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB57 VMS57 VMV57
	{register object V378;
	register object V379;
	register object V380;
	object V381;
	va_start(ap,first);
	V378= V377;
	V379= V376;
	V380= V375;
	narg = narg - 3;
	if (narg <= 0) goto T906;
	else {
	V381= first;}
	--narg; goto T907;
	goto T906;
T906:;
	V381= Cnil;
	goto T907;
T907:;
	if(((V378))!=Cnil){
	goto T911;}
	if(((V379))==Cnil){
	goto T909;}
	{object V382;
	V378= (VFUN_NARGS=1,(*(LnkLI335))(VV[146]));
	V382= list(2,(V378),(V379));
	(VV[102]->s.s_dbind)= make_cons((V382),(VV[102]->s.s_dbind));}
	{object V383;
	V383= list(2,VV[97],(V378));
	(VV[105]->s.s_dbind)= make_cons((V383),(VV[105]->s.s_dbind));
	goto T909;}
	goto T911;
T911:;
	if(!(type_of((V378))!=t_cons)){
	goto T922;}
	if(((V381))==Cnil){
	goto T926;}
	{register object x= (V378),V384= (VV[101]->s.s_dbind);
	while(V384!=Cnil)
	if(eql(x,V384->c.c_car)){
	goto T930;
	}else V384=V384->c.c_cdr;
	goto T929;}
	goto T930;
T930:;
	base[0]= VV[147];
	base[1]= (V378);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T924;
	goto T929;
T929:;
	(VV[101]->s.s_dbind)= make_cons(V378,(VV[101]->s.s_dbind));
	goto T924;
	goto T926;
T926:;
	{register object x= (V378),V386= (VV[102]->s.s_dbind);
	while(V386!=Cnil)
	if(eql(x,V386->c.c_car->c.c_car) &&V386->c.c_car != Cnil){
	goto T935;
	}else V386=V386->c.c_cdr;
	goto T924;}
	goto T935;
T935:;
	base[0]= VV[148];
	base[1]= (V378);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T924;
T924:;
	if(type_of((V378))==t_symbol){
	goto T938;}
	base[0]= VV[149];
	base[1]= (V378);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T938;
T938:;
	(void)((*(LnkLI370))((V378),(V380)));
	{object V387;
	if((V379)!=Cnil){
	V388= (V379);
	goto T945;}
	V388= (*(LnkLI336))((V380));
	goto T945;
T945:;
	V387= list(2,(V378),V388);
	(VV[102]->s.s_dbind)= make_cons((V387),(VV[102]->s.s_dbind));
	goto T909;}
	goto T922;
T922:;
	if(((V379))==Cnil){
	goto T948;}
	if(((VV[63]->s.s_dbind))==Cnil){
	goto T951;}
	(void)((*(LnkLI370))((V378),(V380)));
	{object V389;
	V389= list(2,(V378),(V379));
	(VV[102]->s.s_dbind)= make_cons((V389),(VV[102]->s.s_dbind));
	goto T909;}
	goto T951;
T951:;
	{object V390;
	V390= (VFUN_NARGS=1,(*(LnkLI335))(VV[150]));
	(void)((*(LnkLI370))((V378),(V380)));
	{object V391;
	V391= list(2,(V390),(V379));
	(VV[102]->s.s_dbind)= make_cons((V391),(VV[102]->s.s_dbind));}
	(VV[106]->s.s_dbind)= listA(3,(V378),(V390),(VV[106]->s.s_dbind));
	goto T909;}
	goto T948;
T948:;
	{object V392;
	object V393;
	V392= Cnil;
	V393= Cnil;
	if(!(type_of((V380))!=t_cons)){
	goto T964;}
	V393= (V380);
	V392= (V393);
	goto T962;
	goto T964;
T964:;
	V392= CMPcar((V380));
	V393= CMPcdr((V380));
	goto T962;
T962:;
	(void)((VFUN_NARGS=4,(*(LnkLI371))(CMPcar((V378)),Cnil,(V392),(V381))));
	(void)((VFUN_NARGS=4,(*(LnkLI371))(CMPcdr((V378)),Cnil,(V393),(V381))));}
	goto T909;
T909:;
	{object V394 = (V378);
	VMR57(V394)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LOOP-MAKE-ITERATION-VARIABLE	*/

static object LI68(V398,V399,V400)

object V398;object V399;object V400;
{	 VMB58 VMS58 VMV58
	goto TTL;
TTL:;
	{object V401 = (VFUN_NARGS=4,(*(LnkLI371))((V398),(V399),(V400),Ct));
	VMR58(V401)}
	return Cnil;
}
/*	local entry for function LOOP-DECLARE-VARIABLE	*/

static object LI69(V404,V405)

register object V404;register object V405;
{	 VMB59 VMS59 VMV59
	goto TTL;
TTL:;
	if(((V404))==Cnil){
	goto T972;}
	if(((V405))==Cnil){
	goto T972;}
	if(!(((V405))==(Ct))){
	goto T973;}
	goto T972;
T972:;
	{object V406 = Cnil;
	VMR59(V406)}
	goto T973;
T973:;
	if(!(type_of((V404))==t_symbol)){
	goto T980;}
	if(((V405))==(Ct)){
	goto T983;}
	{register object x= (V404),V407= (VV[103]->s.s_dbind);
	while(V407!=Cnil)
	if(eql(x,V407->c.c_car)){
	goto T983;
	}else V407=V407->c.c_cdr;}
	{object V409;
	V409= list(3,VV[31],V405,(V404));
	(VV[105]->s.s_dbind)= make_cons((V409),(VV[105]->s.s_dbind));
	{object V410 = (VV[105]->s.s_dbind);
	VMR59(V410)}}
	goto T983;
T983:;
	{object V411 = Cnil;
	VMR59(V411)}
	goto T980;
T980:;
	if(!(type_of((V404))==t_cons)){
	goto T990;}
	if(!(type_of((V405))==t_cons)){
	goto T993;}
	(void)((*(LnkLI370))(CMPcar((V404)),CMPcar((V405))));
	V404= CMPcdr((V404));
	V405= CMPcdr((V405));
	goto TTL;
	goto T993;
T993:;
	(void)((*(LnkLI370))(CMPcar((V404)),(V405)));
	V404= CMPcdr((V404));
	goto TTL;
	goto T990;
T990:;
	base[0]= VV[151];
	base[1]= (V404);
	vs_top=(vs_base=base+0)+2;
	Lerror();
	vs_top=sup;
	{object V412 = vs_base[0];
	VMR59(V412)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-MAYBE-BIND-FORM	*/

static object LI70(V415,V416)

object V415;object V416;
{	 VMB60 VMS60 VMV60
	goto TTL;
TTL:;
	if(((*(LnkLI372))((V415)))==Cnil){
	goto T1006;}
	{object V417 = (V415);
	VMR60(V417)}
	goto T1006;
T1006:;
	V418= (VFUN_NARGS=1,(*(LnkLI335))(VV[152]));
	{object V419 = (VFUN_NARGS=3,(*(LnkLI371))(/* INLINE-ARGS */V418,(V415),(V416)));
	VMR60(V419)}
	return Cnil;
}
/*	local entry for function LOOP-DO-IF	*/

static object LI71(V422,V423)

object V422;object V423;
{	 VMB61 VMS61 VMV61
	bds_check;
	goto TTL;
TTL:;
	{object V424;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V424= vs_base[0];
	bds_bind(VV[117],Ct);
	base[1]= Cnil;
	base[2]= Ct;
	{object V425;
	object V426;
	base[3]= (V422);
	vs_top=(vs_base=base+3)+1;
	L72(base);
	vs_top=sup;
	V425= vs_base[0];
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[153]))==Cnil){
	goto T1013;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	base[3]= VV[153];
	vs_top=(vs_base=base+3)+1;
	L72(base);
	vs_top=sup;
	V427= vs_base[0];
	V426= make_cons(V427,Cnil);
	goto T1011;
	goto T1013;
T1013:;
	V426= Cnil;
	goto T1011;
T1011:;
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[154]))==Cnil){
	goto T1018;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	goto T1018;
T1018:;
	if((base[1])==Cnil){
	goto T1021;}
	V424= list(3,VV[11],base[1],(V424));
	goto T1021;
T1021:;
	if(((V423))==Cnil){
	goto T1027;}
	V428= list(2,VV[36],(V424));
	goto T1025;
	goto T1027;
T1027:;
	V428= (V424);
	goto T1025;
T1025:;
	V429= listA(4,VV[71],V428,(V425),(V426));
	{object V430 = (*(LnkLI365))(/* INLINE-ARGS */V429);
	bds_unwind1;
	VMR61(V430)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-INITIALLY	*/

static object LI73()

{	 VMB62 VMS62 VMV62
	goto TTL;
TTL:;
	base[0]= VV[159];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk373)();
	vs_top=sup;
	{object V431;
	V431= (*(LnkLI374))();
	(VV[108]->s.s_dbind)= make_cons((V431),(VV[108]->s.s_dbind));
	{object V432 = (VV[108]->s.s_dbind);
	VMR62(V432)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-FINALLY	*/

static object LI74()

{	 VMB63 VMS63 VMV63
	goto TTL;
TTL:;
	base[0]= VV[160];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk373)();
	vs_top=sup;
	{object V433;
	V433= (*(LnkLI374))();
	(VV[114]->s.s_dbind)= make_cons((V433),(VV[114]->s.s_dbind));
	{object V434 = (VV[114]->s.s_dbind);
	VMR63(V434)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-DO	*/

static object LI75()

{	 VMB64 VMS64 VMV64
	goto TTL;
TTL:;
	V435= (*(LnkLI374))();
	{object V436 = (*(LnkLI375))(/* INLINE-ARGS */V435);
	VMR64(V436)}
	return Cnil;
}
/*	local entry for function LOOP-DO-NAMED	*/

static object LI76()

{	 VMB65 VMS65 VMV65
	goto TTL;
TTL:;
	{register object V437;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V437= vs_base[0];
	if(type_of((V437))==t_symbol){
	goto T1038;}
	base[0]= VV[161];
	base[1]= (V437);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1038;
T1038:;
	if(((VV[110]->s.s_dbind))!=Cnil){
	goto T1044;}
	if(((VV[111]->s.s_dbind))!=Cnil){
	goto T1044;}
	if(((VV[115]->s.s_dbind))!=Cnil){
	goto T1044;}
	if(((VV[117]->s.s_dbind))==Cnil){
	goto T1043;}
	goto T1044;
T1044:;
	base[0]= VV[162];
	base[1]= (V437);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1043;
T1043:;
	if(((VV[120]->s.s_dbind))==Cnil){
	goto T1054;}
	base[0]= VV[163];
	base[1]= CMPcar((VV[120]->s.s_dbind));
	base[2]= (V437);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1054;
T1054:;
	(VV[120]->s.s_dbind)= list(2,(V437),Cnil);
	{object V438 = (VV[120]->s.s_dbind);
	VMR65(V438)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-RETURN	*/

static object LI77()

{	 VMB66 VMS66 VMV66
	goto TTL;
TTL:;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V439= vs_base[0];
	V440= (*(LnkLI366))(V439);
	{object V441 = (*(LnkLI365))(/* INLINE-ARGS */V440);
	VMR66(V441)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-LOOP-COLLECTOR	*/

static object LI78(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB67 VMS67 VMV67
	{object V442;
	object V443;
	object V444;
	object V445;
	object V446;
	object V447;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI78key,first,ap);
	V442=(Vcs[0]);
	V443=(Vcs[1]);
	V444=(Vcs[2]);
	V445=(Vcs[3]);
	V446=(Vcs[4]);
	V447=(Vcs[5]);
	base[0]= VV[164];
	base[1]= (V442);
	base[2]= (V443);
	base[3]= (V444);
	base[4]= (V445);
	base[5]= (V446);
	base[6]= (V447);
	vs_top=(vs_base=base+0)+7;
	siLmake_structure();
	vs_top=sup;
	{object V448 = vs_base[0];
	VMR67(V448)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	function definition for LOOP-GET-COLLECTION-INFO	*/

static void L79()
{register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_check;
	{object V449;
	object V450;
	object V451;
	V449=(base[0]);
	V450=(base[1]);
	V451=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V452;
	register object V453;
	register object V454;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V452= vs_base[0];
	if((STREF(object,(VV[99]->s.s_dbind),24))==Cnil){
	goto T1071;}
	V453= Cnil;
	goto T1070;
	goto T1071;
T1071:;
	vs_base=vs_top;
	(void) (*Lnk378)();
	vs_top=sup;
	V453= vs_base[0];
	goto T1070;
T1070:;
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[165]))==Cnil){
	goto T1075;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V454= vs_base[0];
	goto T1073;
	goto T1075;
T1075:;
	V454= Cnil;
	goto T1073;
T1073:;
	if(type_of((V454))==t_symbol){
	goto T1078;}
	base[3]= VV[166];
	base[4]= (V454);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1078;
T1078:;
	if(((V454))!=Cnil){
	goto T1083;}
	vs_base=vs_top;
	(void) (*Lnk379)();
	vs_top=sup;
	goto T1083;
T1083:;
	if(((V453))!=Cnil){
	goto T1086;}{object V455;
	vs_base=vs_top;
	(void) (*Lnk378)();
	vs_top=sup;
	V455= vs_base[0];
	if(V455==Cnil)goto T1090;
	V453= V455;
	goto T1089;
	goto T1090;
T1090:;}
	V453= (V451);
	goto T1089;
T1089:;
	goto T1086;
T1086:;
	{register object V456;
	base[3]= (V454);
	base[4]= (VV[121]->s.s_dbind);
	base[5]= VV[167];
	base[6]= (VV[134]->s.s_gfdef);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk380)();
	vs_top=sup;
	V456= vs_base[0];
	if(((V456))!=Cnil){
	goto T1099;}
	if(((V454))==Cnil){
	goto T1101;}
	if(((*(LnkLI381))((V454)))==Cnil){
	goto T1101;}
	base[3]= VV[168];
	base[4]= (V454);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1101;
T1101:;
	{object V457;
	V458= make_cons((V449),Cnil);
	V456= (VFUN_NARGS=8,(*(LnkLI382))(VV[169],(V454),VV[170],(V450),VV[171],/* INLINE-ARGS */V458,VV[172],(V453)));
	V457= (V456);
	(VV[121]->s.s_dbind)= make_cons((V457),(VV[121]->s.s_dbind));
	goto T1097;}
	goto T1099;
T1099:;
	if((STREF(object,(V456),4))==((V450))){
	goto T1111;}
	base[3]= VV[173];
	base[4]= (V454);
	base[5]= CMPcar(STREF(object,(V456),8));
	base[6]= (V449);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1111;
T1111:;
	if(equal((V453),STREF(object,(V456),16))){
	goto T1118;}
	(void)((VFUN_NARGS=4,(*(LnkLI345))(VV[174],(V454),(V453),STREF(object,(V456),16))));
	if(!((STREF(object,(V456),16))==(Ct))){
	goto T1118;}
	V459= Ct;
	STSET(object,(V456),16, (V453));
	(void)((V453));
	goto T1118;
T1118:;
	{object V462;
	V462= make_cons(V449,STREF(object,V456,8));
	V463= Ct;
	STSET(object,V456,8, (V462));
	(void)((V462));}
	goto T1097;
T1097:;
	base[3]= (V456);
	base[4]= (V452);
	vs_top=(vs_base=base+3)+2;
	return;}}
	}
}
/*	local entry for function LOOP-LIST-COLLECTION	*/

static object LI80(V465)

object V465;
{	 VMB69 VMS69 VMV69
	goto TTL;
TTL:;
	{register object V466;
	register object V467;
	base[0]= (V465);
	base[1]= VV[5];
	base[2]= VV[5];
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk383)();
	if(vs_base>=vs_top){vs_top=sup;goto T1131;}
	V466= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1132;}
	V467= vs_base[0];
	vs_top=sup;
	goto T1133;
	goto T1131;
T1131:;
	V466= Cnil;
	goto T1132;
T1132:;
	V467= Cnil;
	goto T1133;
T1133:;
	{register object V468;
	V468= STREF(object,(V466),12);
	if(((V468))!=Cnil){
	goto T1135;}
	V469= (VFUN_NARGS=1,(*(LnkLI335))(VV[175]));
	V470= (VFUN_NARGS=1,(*(LnkLI335))(VV[176]));
	if((STREF(object,(V466),0))!=Cnil){
	goto T1141;}
	V471= Cnil;
	goto T1140;
	goto T1141;
T1141:;
	V471= make_cons(STREF(object,(V466),0),Cnil);
	goto T1140;
T1140:;
	V468= listA(3,/* INLINE-ARGS */V469,/* INLINE-ARGS */V470,V471);
	V472= Ct;
	STSET(object,(V466),12, (V468));
	(void)((V468));
	{object V473;
	V473= list(2,VV[177],(V468));
	(VV[109]->s.s_dbind)= make_cons((V473),(VV[109]->s.s_dbind));}
	if((STREF(object,(V466),0))!=Cnil){
	goto T1135;}
	V474= listA(3,VV[178],CMPcar((V468)),CMPcddr((V468)));
	(void)((VFUN_NARGS=1,(*(LnkLI384))(/* INLINE-ARGS */V474)));
	goto T1135;
T1135:;
	{object V475= (V465);
	if((V475!= VV[5]))goto T1149;
	V467= list(2,VV[5],(V467));
	goto T1148;
	goto T1149;
T1149:;
	if((V475!= VV[385]))goto T1151;
	goto T1148;
	goto T1151;
T1151:;
	if((V475!= VV[386]))goto T1152;
	if(!(type_of((V467))==t_cons)){
	goto T1153;}
	if((CMPcar((V467)))==(VV[5])){
	goto T1148;}
	goto T1153;
T1153:;
	V467= list(2,VV[179],(V467));
	goto T1148;
	goto T1152;
T1152:;
	FEerror("The ECASE key value ~s is illegal.",1,V475);
	goto T1148;}
	goto T1148;
T1148:;
	V476= list(3,VV[180],(V468),(V467));
	{object V477 = (*(LnkLI375))(/* INLINE-ARGS */V476);
	VMR69(V477)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-SUM-COLLECTION	*/

static object LI81(V481,V482,V483)

object V481;object V482;object V483;
{	 VMB70 VMS70 VMV70
	goto TTL;
TTL:;
	{register object V484;
	object V485;
	base[0]= (V481);
	base[1]= VV[181];
	base[2]= (V483);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk383)();
	if(vs_base>=vs_top){vs_top=sup;goto T1162;}
	V484= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1163;}
	V485= vs_base[0];
	vs_top=sup;
	goto T1164;
	goto T1162;
T1162:;
	V484= Cnil;
	goto T1163;
T1163:;
	V485= Cnil;
	goto T1164;
T1164:;
	(void)((VFUN_NARGS=2,(*(LnkLI387))(STREF(object,(V484),16),(V482))));
	{register object V486;
	V486= STREF(object,(V484),12);
	if(((V486))!=Cnil){
	goto T1167;}{object V488;
	V488= STREF(object,(V484),0);
	if(V488==Cnil)goto T1173;
	V487= V488;
	goto T1172;
	goto T1173;
T1173:;}
	V487= (VFUN_NARGS=1,(*(LnkLI335))(VV[182]));
	goto T1172;
T1172:;
	V489= (VFUN_NARGS=3,(*(LnkLI371))(V487,Cnil,STREF(object,(V484),16)));
	V486= make_cons(/* INLINE-ARGS */V489,Cnil);
	V490= Ct;
	STSET(object,(V484),12, (V486));
	(void)((V486));
	if((STREF(object,(V484),0))!=Cnil){
	goto T1167;}
	(void)((VFUN_NARGS=1,(*(LnkLI384))(CMPcar(STREF(object,(V484),12)))));
	goto T1167;
T1167:;
	if(!(((V481))==(VV[183]))){
	goto T1179;}
	V492= CMPcar((V486));
	V493= CMPcar((V486));
	V494= list(2,VV[184],CMPcar((V486)));
	V491= list(3,VV[8],(V485),list(3,VV[11],/* INLINE-ARGS */V492,(*(LnkLI337))(Ct,/* INLINE-ARGS */V493,/* INLINE-ARGS */V494)));
	goto T1177;
	goto T1179;
T1179:;
	V495= CMPcar((V486));
	V496= (*(LnkLI337))(Ct,CMPcar((V486)),CMPcar((V486)));
	V491= list(3,VV[11],/* INLINE-ARGS */V495,list(3,VV[185],/* INLINE-ARGS */V496,(V485)));
	goto T1177;
T1177:;
	{object V497 = (*(LnkLI375))(V491);
	VMR70(V497)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-MAXMIN-COLLECTION	*/

static object LI82(V499)

object V499;
{	 VMB71 VMS71 VMV71
	goto TTL;
TTL:;
	{register object V500;
	object V501;
	base[0]= (V499);
	base[1]= VV[186];
	base[2]= (VV[187]->s.s_dbind);
	vs_top=(vs_base=base+0)+3;
	(void) (*Lnk383)();
	if(vs_base>=vs_top){vs_top=sup;goto T1185;}
	V500= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1186;}
	V501= vs_base[0];
	vs_top=sup;
	goto T1187;
	goto T1185;
T1185:;
	V500= Cnil;
	goto T1186;
T1186:;
	V501= Cnil;
	goto T1187;
T1187:;
	(void)((VFUN_NARGS=2,(*(LnkLI387))(STREF(object,(V500),16),(VV[187]->s.s_dbind))));
	{register object V502;
	V502= STREF(object,(V500),20);
	if(((V502))!=Cnil){
	goto T1190;}{object V504;
	V504= STREF(object,(V500),0);
	if(V504==Cnil)goto T1196;
	V503= V504;
	goto T1195;
	goto T1196;
T1196:;}
	V503= (VFUN_NARGS=1,(*(LnkLI335))(VV[188]));
	goto T1195;
T1195:;
	V502= (*(LnkLI388))(V503,STREF(object,(V500),16));
	V505= Ct;
	STSET(object,(V500),20, (V502));
	(void)((V502));
	if((STREF(object,(V500),0))!=Cnil){
	goto T1190;}
	(void)((VFUN_NARGS=1,(*(LnkLI384))(STREF(object,(V502),0))));
	goto T1190;
T1190:;
	(void)((*(LnkLI389))((V499),(V502)));
	{object V506;
	V506= list(2,VV[189],(V502));
	(VV[109]->s.s_dbind)= make_cons((V506),(VV[109]->s.s_dbind));}
	V507= list(4,VV[190],(V502),(V499),(V501));
	{object V508 = (*(LnkLI375))(/* INLINE-ARGS */V507);
	VMR71(V508)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-ALWAYS	*/

static object LI83(V511,V512)

object V511;object V512;
{	 VMB72 VMS72 VMV72
	goto TTL;
TTL:;
	{object V513;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V513= vs_base[0];
	if(((V511))==Cnil){
	goto T1205;}
	vs_base=vs_top;
	(void) (*Lnk373)();
	vs_top=sup;
	goto T1205;
T1205:;
	vs_base=vs_top;
	(void) (*Lnk390)();
	vs_top=sup;
	if(((V512))==Cnil){
	goto T1212;}
	V514= VV[8];
	goto T1210;
	goto T1212;
T1212:;
	V514= VV[191];
	goto T1210;
T1210:;
	V515= list(3,V514,(V513),(*(LnkLI366))(Cnil));
	(void)((*(LnkLI375))(/* INLINE-ARGS */V515));
	{object V516 = (VFUN_NARGS=1,(*(LnkLI384))(Ct));
	VMR72(V516)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-THEREIS	*/

static object LI84(V518)

object V518;
{	 VMB73 VMS73 VMV73
	goto TTL;
TTL:;
	if(((V518))==Cnil){
	goto T1214;}
	vs_base=vs_top;
	(void) (*Lnk373)();
	vs_top=sup;
	goto T1214;
T1214:;
	vs_base=vs_top;
	(void) (*Lnk390)();
	vs_top=sup;
	(void)((VFUN_NARGS=0,(*(LnkLI384))()));
	V519= (*(LnkLI391))();
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V520= vs_base[0];
	V521= list(3,VV[11],/* INLINE-ARGS */V519,V520);
	V522= list(3,VV[8],/* INLINE-ARGS */V521,(*(LnkLI366))((VV[118]->s.s_dbind)));
	{object V523 = (*(LnkLI375))(/* INLINE-ARGS */V522);
	VMR73(V523)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-WHILE	*/

static object LI85(V526,V527)

object V526;object V527;
{	 VMB74 VMS74 VMV74
	goto TTL;
TTL:;
	{object V528;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V528= vs_base[0];
	base[1]= (V527);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk373)();
	vs_top=sup;
	if(((V526))==Cnil){
	goto T1225;}
	V529= VV[8];
	goto T1223;
	goto T1225;
T1225:;
	V529= VV[191];
	goto T1223;
T1223:;
	V530= list(3,V529,(V528),VV[192]);
	{object V531 = (*(LnkLI365))(/* INLINE-ARGS */V530);
	VMR74(V531)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-DO-WITH	*/

static object LI86()

{	 VMB75 VMS75 VMV75
	goto TTL;
TTL:;
	base[0]= VV[193];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk373)();
	vs_top=sup;
	{register object V532;
	register object V533;
	register object V534;
	V532= Cnil;
	V533= Cnil;
	V534= Cnil;
	goto T1230;
T1230:;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V532= vs_base[0];
	base[0]= (V532);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk378)();
	vs_top=sup;
	V534= vs_base[0];
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[194]))==Cnil){
	goto T1241;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V533= vs_base[0];
	goto T1239;
	goto T1241;
T1241:;
	V533= Cnil;
	goto T1239;
T1239:;
	if(((V532))==Cnil){
	goto T1244;}
	if(((*(LnkLI381))((V532)))==Cnil){
	goto T1244;}
	base[0]= VV[195];
	base[1]= (V532);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1244;
T1244:;
	(void)((VFUN_NARGS=3,(*(LnkLI371))((V532),(V533),(V534))));
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[158]))==Cnil){
	goto T1254;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	goto T1252;
	goto T1254;
T1254:;
	{object V535 = (*(LnkLI358))();
	VMR75(V535)}
	goto T1252;
T1252:;
	goto T1230;}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-HACK-ITERATION	*/

static object LI87(V537)

register object V537;
{	 VMB76 VMS76 VMV76
	goto TTL;
TTL:;
	{object V538;
	object V539;
	object V540;
	object V541;
	object V542;
	object V543;
	object V544;
	object V545;
	register object V546;
	object V547;
	V538= Cnil;
	V539= Cnil;
	V540= Cnil;
	V541= Cnil;
	V542= Cnil;
	V543= Cnil;
	V544= Cnil;
	V545= Cnil;
	V546= Cnil;
	V547= Cnil;
	goto T1259;
T1259:;
	base[1]= CMPcar((V537));
	vs_top=(vs_base=base+1)+1;
	Lsymbol_function();
	vs_top=sup;
	base[0]= vs_base[0];
	{object V548;
	V548= CMPcdr((V537));
	 vs_top=base+1;
	 while(V548!=Cnil)
	 {vs_push((V548)->c.c_car);V548=(V548)->c.c_cdr;}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V547= vs_base[0];
	V546= (V547);
	if((CMPcar((V546)))!=Cnil){
	goto T1269;}
	goto T1268;
	goto T1269;
T1269:;
	{object V549;
	V549= CMPcar((V546));
	V538= make_cons((V549),(V538));}
	goto T1268;
T1268:;
	V546= CMPcdr((V546));
	base[0]= CMPcar((V546));
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V550= vs_base[0];
	V539= nconc((V539),V550);
	V546= CMPcdr((V546));
	if((CMPcar((V546)))!=Cnil){
	goto T1279;}
	goto T1278;
	goto T1279;
T1279:;
	{object V551;
	V551= CMPcar((V546));
	V540= make_cons((V551),(V540));}
	goto T1278;
T1278:;
	V546= CMPcdr((V546));
	base[0]= CMPcar((V546));
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V552= vs_base[0];
	V541= nconc((V541),V552);
	V546= CMPcdr((V546));
	if(((VV[112]->s.s_dbind))==Cnil){
	goto T1291;}
	base[0]= VV[196];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1291;
T1291:;
	if(((V546))!=Cnil){
	goto T1295;}
	V546= (V547);
	goto T1295;
T1295:;
	if((CMPcar((V546)))==Cnil){
	goto T1299;}
	{object V553;
	V553= CMPcar((V546));
	V542= make_cons((V553),(V542));}
	goto T1299;
T1299:;
	V546= CMPcdr((V546));
	base[0]= CMPcar((V546));
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V554= vs_base[0];
	V543= nconc((V543),V554);
	V546= CMPcdr((V546));
	if((CMPcar((V546)))==Cnil){
	goto T1309;}
	{object V555;
	V555= CMPcar((V546));
	V544= make_cons((V555),(V544));}
	goto T1309;
T1309:;
	base[0]= CMPcadr((V546));
	vs_top=(vs_base=base+0)+1;
	Lcopy_list();
	vs_top=sup;
	V556= vs_base[0];
	V545= nconc((V545),V556);
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[158]))!=Cnil){
	goto T1319;}
	V557= (*(LnkLI343))((V545));
	base[0]= (V544);
	vs_top=(vs_base=base+0)+1;
	L88(base);
	vs_top=sup;
	V558= vs_base[0];
	V559= (*(LnkLI344))((V543));
	base[0]= (V542);
	vs_top=(vs_base=base+0)+1;
	L88(base);
	vs_top=sup;
	V560= vs_base[0];
	(VV[110]->s.s_dbind)= listA(5,/* INLINE-ARGS */V557,V558,/* INLINE-ARGS */V559,V560,(VV[110]->s.s_dbind));
	V561= (*(LnkLI343))((V541));
	base[0]= (V540);
	vs_top=(vs_base=base+0)+1;
	L88(base);
	vs_top=sup;
	V562= vs_base[0];
	V563= (*(LnkLI344))((V539));
	base[0]= (V538);
	vs_top=(vs_base=base+0)+1;
	L88(base);
	vs_top=sup;
	V564= vs_base[0];
	(VV[113]->s.s_dbind)= listA(5,/* INLINE-ARGS */V561,V562,/* INLINE-ARGS */V563,V564,(VV[113]->s.s_dbind));
	(void)((*(LnkLI358))());
	{object V565 = Cnil;
	VMR76(V565)}
	goto T1319;
T1319:;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	if((STREF(object,(VV[99]->s.s_dbind),28))!=Cnil){
	goto T1336;}
	V546= (*(LnkLI360))(CMPcar((VV[88]->s.s_dbind)),STREF(object,(VV[99]->s.s_dbind),4));
	if(((V546))==Cnil){
	goto T1336;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V537= (V546);
	goto T1336;
T1336:;
	goto T1259;}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOOP-DO-FOR	*/

static void L89()
{register object *base=vs_base;
	register object *sup=base+VM77; VC77
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	{object V566;
	object V567;
	object V568;
	object V569;
	object V570;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V566= vs_base[0];
	base[3]= (V566);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk378)();
	vs_top=sup;
	V567= vs_base[0];
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V568= vs_base[0];
	V569= Cnil;
	V570= Cnil;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V569= vs_base[0];
	if(!(type_of((V568))==t_symbol)){
	goto T1355;}
	V570= (*(LnkLI360))((V568),STREF(object,(VV[99]->s.s_dbind),8));
	if(((V570))!=Cnil){
	goto T1354;}
	goto T1355;
T1355:;
	base[3]= VV[199];
	base[4]= (V568);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1354;
T1354:;
	base[3]= CMPcar((V570));
	base[4]= (V566);
	base[5]= (V569);
	base[6]= (V567);
	{object V571;
	V571= CMPcdr((V570));
	 vs_top=base+7;
	 while(V571!=Cnil)
	 {vs_push((V571)->c.c_car);V571=(V571)->c.c_cdr;}
	vs_base=base+4;}
	super_funcall_no_event(base[3]);
	return;}
}
/*	local entry for function LOOP-DO-REPEAT	*/

static object LI90()

{	 VMB78 VMS78 VMV78
	goto TTL;
TTL:;
	base[0]= VV[200];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk373)();
	vs_top=sup;
	{object V572;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V572= vs_base[0];
	{object V574;
	V575= (VFUN_NARGS=0,(*(LnkLI335))());
	V574= (VFUN_NARGS=3,(*(LnkLI371))(/* INLINE-ARGS */V575,(V572),VV[201]));
	{object V576;
	V576= list(3,VV[8],list(2,VV[202],list(2,VV[203],(V574))),VV[204]);
	(VV[110]->s.s_dbind)= make_cons((V576),(VV[110]->s.s_dbind));}
	{object V577;
	V577= list(3,VV[8],list(2,VV[202],list(2,VV[203],(V574))),VV[205]);
	(VV[113]->s.s_dbind)= make_cons((V577),(VV[113]->s.s_dbind));
	{object V578 = (VV[113]->s.s_dbind);
	VMR78(V578)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-WHEN-IT-VARIABLE	*/

static object LI91()

{	 VMB79 VMS79 VMV79
	goto TTL;
TTL:;
	if((VV[118]->s.s_dbind)!=Cnil){
	{object V579 = (VV[118]->s.s_dbind);
	VMR79(V579)}}
	V580= (VFUN_NARGS=1,(*(LnkLI335))(VV[206]));
	(VV[118]->s.s_dbind)= (VFUN_NARGS=3,(*(LnkLI371))(/* INLINE-ARGS */V580,Cnil,Cnil));
	{object V581 = (VV[118]->s.s_dbind);
	VMR79(V581)}
	return Cnil;
}
/*	local entry for function LOOP-ANSI-FOR-EQUALS	*/

static object LI92(V585,V586,V587)

register object V585;object V586;object V587;
{	 VMB80 VMS80 VMV80
	goto TTL;
TTL:;
	(void)((*(LnkLI392))((V585),Cnil,(V587)));
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[207]))==Cnil){
	goto T1379;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V588= vs_base[0];
	V589= list(2,(V585),V588);
	{object V590 = listA(7,Cnil,/* INLINE-ARGS */V589,Cnil,Cnil,Cnil,list(2,(V585),(V586)),VV[208]);
	VMR80(V590)}
	goto T1379;
T1379:;
	{object V591 = listA(3,Cnil,list(2,(V585),(V586)),VV[209]);
	VMR80(V591)}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-FOR-ACROSS	*/

static object LI93(V595,V596,V597)

object V595;object V596;object V597;
{	 VMB81 VMS81 VMV81
	goto TTL;
TTL:;
	(void)((*(LnkLI392))((V595),Cnil,(V597)));
	{object V598;
	register object V599;
	V598= (VFUN_NARGS=1,(*(LnkLI335))(VV[210]));
	V599= (VFUN_NARGS=1,(*(LnkLI335))(VV[211]));
	{register object V600;
	object V601;
	object V602;
	base[0]= (V596);
	base[1]= VV[212];
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk393)();
	if(vs_base>=vs_top){vs_top=sup;goto T1389;}
	V600= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1390;}
	V601= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1391;}
	V602= vs_base[0];
	vs_top=sup;
	goto T1392;
	goto T1389;
T1389:;
	V600= Cnil;
	goto T1390;
T1390:;
	V601= Cnil;
	goto T1391;
T1391:;
	V602= Cnil;
	goto T1392;
T1392:;
	if(!(type_of((V600))==t_cons)){
	goto T1396;}
	if(!((CMPcar((V600)))==(VV[213]))){
	goto T1396;}
	V603= CMPcadr((V600));
	goto T1394;
	goto T1396;
T1396:;
	V603= VV[212];
	goto T1394;
T1394:;
	(void)((VFUN_NARGS=3,(*(LnkLI371))((V598),(V600),V603)));
	(void)((VFUN_NARGS=3,(*(LnkLI371))((V599),small_fixnum(0),VV[214])));
	{long V604;
	object V605;
	register object V606;
	object V607;
	object V608;
	object V609;
	V604= 0;
	if(((V601))!=Cnil){
	goto T1404;}
	{object V610;
	V610= (VFUN_NARGS=1,(*(LnkLI335))(VV[215]));
	{object V611;
	V611= list(3,VV[11],(V610),list(2,VV[216],(V598)));
	(VV[108]->s.s_dbind)= make_cons((V611),(VV[108]->s.s_dbind));}
	V605= (VFUN_NARGS=3,(*(LnkLI371))((V610),small_fixnum(0),VV[214]));
	goto T1402;}
	goto T1404;
T1404:;
	V604= (long)length((V602));
	V605= CMPmake_fixnum(V604);
	goto T1402;
T1402:;
	V606= list(3,VV[217],(V599),(V605));
	V607= (V606);
	V608= list(2,(V595),list(3,VV[218],(V598),(V599)));
	V609= list(2,(V599),list(2,VV[184],(V599)));
	if(((V601))==Cnil){
	goto T1415;}
	V606= ((V604)==(0)?Ct:Cnil);
	if(!((V604)<=(1))){
	goto T1415;}
	V607= Ct;
	goto T1415;
T1415:;
	if(((((V606))==((V607))?Ct:Cnil))==Cnil){
	goto T1424;}
	V612= Cnil;
	goto T1423;
	goto T1424;
T1424:;
	V612= list(4,(V606),(V608),Cnil,(V609));
	goto T1423;
T1423:;
	{object V613 = listA(5,(V607),(V608),Cnil,(V609),V612);
	VMR81(V613)}}}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for LOOP-LIST-STEP	*/

static void L94()
{register object *base=vs_base;
	register object *sup=base+VM82; VC82
	vs_check;
	{object V614;
	V614=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V615;
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[219]))==Cnil){
	goto T1428;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V615= vs_base[0];
	goto T1426;
	goto T1428;
T1428:;
	V615= VV[220];
	goto T1426;
T1426:;
	if(!(type_of((V615))==t_cons)){
	goto T1432;}
	if(!((CMPcar((V615)))==(VV[221]))){
	goto T1432;}
	(void)((VFUN_NARGS=1,(*(LnkLI345))(VV[222])));
	base[1]= list(3,VV[223],(V615),(V614));
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
	goto T1432;
T1432:;
	if(!(type_of((V615))==t_cons)){
	goto T1440;}
	if(!((CMPcar((V615)))==(VV[83]))){
	goto T1440;}
	base[1]= list(2,CMPcadr((V615)),(V614));
	base[2]= CMPcadr((V615));
	vs_top=(vs_base=base+1)+2;
	return;
	goto T1440;
T1440:;
	V616= (VFUN_NARGS=1,(*(LnkLI335))(VV[224]));
	V617= (VFUN_NARGS=3,(*(LnkLI371))(/* INLINE-ARGS */V616,(V615),VV[83]));
	base[1]= list(3,VV[223],/* INLINE-ARGS */V617,(V614));
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	local entry for function LOOP-FOR-ON	*/

static object LI95(V621,V622,V623)

register object V621;object V622;object V623;
{	 VMB83 VMS83 VMV83
	goto TTL;
TTL:;
	{object V624;
	object V625;
	object V626;
	base[0]= (V622);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk393)();
	if(vs_base>=vs_top){vs_top=sup;goto T1450;}
	V624= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1451;}
	V625= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1452;}
	V626= vs_base[0];
	vs_top=sup;
	goto T1453;
	goto T1450;
T1450:;
	V624= Cnil;
	goto T1451;
T1451:;
	V625= Cnil;
	goto T1452;
T1452:;
	V626= Cnil;
	goto T1453;
T1453:;
	{register object V627;
	V627= (V621);
	if(((V621))==Cnil){
	goto T1456;}
	if(!(type_of((V621))==t_symbol)){
	goto T1456;}
	(void)((*(LnkLI392))((V621),(V624),(V623)));
	goto T1454;
	goto T1456;
T1456:;
	V627= (VFUN_NARGS=0,(*(LnkLI335))());
	(void)((VFUN_NARGS=3,(*(LnkLI371))((V627),(V624),VV[5])));
	(void)((*(LnkLI392))((V621),Cnil,(V623)));
	goto T1454;
T1454:;
	{object V628;
	object V629;
	base[0]= (V627);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk394)();
	if(vs_base>=vs_top){vs_top=sup;goto T1464;}
	V628= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1465;}
	V629= vs_base[0];
	vs_top=sup;
	goto T1466;
	goto T1464;
T1464:;
	V628= Cnil;
	goto T1465;
T1465:;
	V629= Cnil;
	goto T1466;
T1466:;
	{register object V630;
	object V631;
	V632= (((V621))==((V627))?Ct:Cnil);
	V633= list(2,VV[225],(V627));
	V630= (*(LnkLI337))(/* INLINE-ARGS */V632,(V627),/* INLINE-ARGS */V633);
	V631= (V630);
	if(((V625))==Cnil){
	goto T1469;}
	if(!(type_of((V626))==t_cons||((V626))==Cnil)){
	goto T1469;}
	V630= (((V626))==Cnil?Ct:Cnil);
	goto T1469;
T1469:;
	if(!(((V621))==((V627)))){
	goto T1476;}
	{object V634 = list(8,Cnil,list(2,(V627),(*(LnkLI337))(Ct,(V627),(V628))),(V631),Cnil,Cnil,Cnil,(V630),Cnil);
	VMR83(V634)}
	goto T1476;
T1476:;
	{object V635;
	object V636;
	V635= list(2,(V621),(V627));
	V636= list(2,(V627),(V628));
	if(((((V630))==((V631))?Ct:Cnil))==Cnil){
	goto T1481;}
	V637= Cnil;
	goto T1480;
	goto T1481;
T1481:;
	V637= list(4,(V630),(V635),Cnil,(V636));
	goto T1480;
T1480:;
	{object V638 = listA(5,(V631),(V635),Cnil,(V636),V637);
	VMR83(V638)}}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-FOR-IN	*/

static object LI96(V642,V643,V644)

object V642;object V643;object V644;
{	 VMB84 VMS84 VMV84
	goto TTL;
TTL:;
	{object V645;
	object V646;
	object V647;
	base[0]= (V643);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk393)();
	if(vs_base>=vs_top){vs_top=sup;goto T1485;}
	V645= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1486;}
	V646= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1487;}
	V647= vs_base[0];
	vs_top=sup;
	goto T1488;
	goto T1485;
T1485:;
	V645= Cnil;
	goto T1486;
T1486:;
	V646= Cnil;
	goto T1487;
T1487:;
	V647= Cnil;
	goto T1488;
T1488:;
	{register object V648;
	V648= (VFUN_NARGS=1,(*(LnkLI335))(VV[226]));
	(void)((*(LnkLI392))((V642),Cnil,(V644)));
	(void)((VFUN_NARGS=3,(*(LnkLI371))((V648),(V645),VV[5])));
	{object V649;
	object V650;
	base[0]= (V648);
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk394)();
	if(vs_base>=vs_top){vs_top=sup;goto T1494;}
	V649= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1495;}
	V650= vs_base[0];
	vs_top=sup;
	goto T1496;
	goto T1494;
T1494:;
	V649= Cnil;
	goto T1495;
T1495:;
	V650= Cnil;
	goto T1496;
T1496:;
	{register object V651;
	object V652;
	object V653;
	object V654;
	V651= list(2,VV[227],(V648));
	V652= (V651);
	V653= list(2,(V642),list(2,VV[65],(V648)));
	V654= list(2,(V648),(V649));
	if(((V646))==Cnil){
	goto T1501;}
	if(!(type_of((V647))==t_cons||((V647))==Cnil)){
	goto T1501;}
	V651= (((V647))==Cnil?Ct:Cnil);
	goto T1501;
T1501:;
	if(((((V651))==((V652))?Ct:Cnil))==Cnil){
	goto T1508;}
	V655= Cnil;
	goto T1507;
	goto T1508;
T1508:;
	V655= list(4,(V651),(V653),Cnil,(V654));
	goto T1507;
T1507:;
	{object V656 = listA(5,(V652),(V653),Cnil,(V654),V655);
	VMR84(V656)}}}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function MAKE-LOOP-PATH	*/

static object LI97(object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB85 VMS85 VMV85
	{object V657;
	object V658;
	object V659;
	object V660;
	object V661;
	va_start(ap,first);
	narg= narg - 0;
	{
	parse_key_new_new(narg,Vcs +0,(struct key *)(void *)&LI97key,first,ap);
	V657=(Vcs[0]);
	V658=(Vcs[1]);
	V659=(Vcs[2]);
	V660=(Vcs[3]);
	V661=(Vcs[4]);
	base[0]= VV[228];
	base[1]= (V657);
	base[2]= (V658);
	base[3]= (V659);
	base[4]= (V660);
	base[5]= (V661);
	vs_top=(vs_base=base+0)+6;
	siLmake_structure();
	vs_top=sup;
	{object V662 = vs_base[0];
	VMR85(V662)}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function ADD-LOOP-PATH	*/

static object LI98(object V665,object V664,object V663,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB86 VMS86 VMV86
	bds_check;
	{object V666;
	object V667;
	register object V668;
	object V669;
	object V670;
	object V671;
	va_start(ap,first);
	V666= V665;
	V667= V664;
	V668= V663;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI98key,first,ap);
	V669=(Vcs[3]);
	V670=(Vcs[4]);
	V671=(Vcs[5]);
	if(type_of((V666))==t_cons||((V666))==Cnil){
	goto T1516;}
	V666= make_cons((V666),Cnil);
	goto T1516;
T1516:;
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
	goto T1522;
T1522:;
	base[2]= (V668);
	base[3]= VV[39];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk395)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1523;}
	bds_unwind1;
	bds_unwind1;
	goto T1520;
	goto T1523;
T1523:;
	base[2]= VV[47];
	base[3]= VV[48];
	base[4]= VV[229];
	base[5]= (V668);
	base[6]= VV[39];
	vs_top=(vs_base=base+2)+5;
	Lcerror();
	vs_top=sup;
	base[2]= (VV[50]->s.s_dbind);
	base[3]= VV[51];
	base[4]= VV[229];
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[2]= (VV[50]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	Lfinish_output();
	vs_top=sup;
	vs_base=vs_top;
	Lread();
	vs_top=sup;
	V668= vs_base[0];
	base[2]= (VV[50]->s.s_dbind);
	base[3]= VV[52];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	goto T1522;
	goto T1520;
T1520:;
	{object V672;
	object V673;
	V672= STREF(object,(V668),12);
	{object V675;
	object V676= (V666);
	if(V676==Cnil){
	V674= Cnil;
	goto T1550;}
	base[0]=V675=MMcons(Cnil,Cnil);
	goto T1551;
T1551:;
	(V675->c.c_car)= symbol_name((V676->c.c_car));
	if((V676=MMcdr(V676))==Cnil){
	V674= base[0];
	goto T1550;}
	V675=MMcdr(V675)=MMcons(Cnil,Cnil);
	goto T1551;}
	goto T1550;
T1550:;
	{object V678;
	object V679= (V669);
	if(V679==Cnil){
	V677= Cnil;
	goto T1553;}
	base[0]=V678=MMcons(Cnil,Cnil);
	goto T1554;
T1554:;
	if(!(type_of((V679->c.c_car))==t_cons||((V679->c.c_car))==Cnil)){
	goto T1557;}
	(V678->c.c_car)= (V679->c.c_car);
	goto T1555;
	goto T1557;
T1557:;
	(V678->c.c_car)= make_cons((V679->c.c_car),Cnil);
	goto T1555;
T1555:;
	if((V679=MMcdr(V679))==Cnil){
	V677= base[0];
	goto T1553;}
	V678=MMcdr(V678)=MMcons(Cnil,Cnil);
	goto T1554;}
	goto T1553;
T1553:;
	V673= (VFUN_NARGS=10,(*(LnkLI396))(VV[230],V674,VV[231],(V667),VV[232],(V671),VV[233],V677,VV[234],(V670)));
	{register object V681;
	register object V682;
	V681= (V666);
	V682= CMPcar((V681));
	goto T1563;
T1563:;
	if(!(((V681))==Cnil)){
	goto T1564;}
	goto T1559;
	goto T1564;
T1564:;
	{register object V683;
	register object V684;
	register object V685;
	V683= symbol_name((V682));
	V684= (V672);
	V685= (V673);
	base[2]= (V683);
	base[3]= (V684);
	base[4]= (V685);
	vs_top=(vs_base=base+2)+3;
	siLhash_set();
	vs_top=sup;}
	V681= CMPcdr((V681));
	V682= CMPcar((V681));
	goto T1563;}
	goto T1559;
T1559:;
	{object V686 = (V673);
	VMR86(V686)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function LOOP-FOR-BEING	*/

static object LI99(V690,V691,V692)

object V690;object V691;object V692;
{	 VMB87 VMS87 VMV87
	goto TTL;
TTL:;
	{register object V693;
	object V694;
	object V695;
	object V696;
	object V697;
	V693= Cnil;
	V694= Cnil;
	V695= Cnil;
	V696= Cnil;
	V697= Cnil;
	if(((*(LnkLI362))((V691),VV[235]))==Cnil){
	goto T1582;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V693= vs_base[0];
	goto T1580;
	goto T1582;
T1582:;
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[158]))==Cnil){
	goto T1586;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V695= Ct;
	if(((*(LnkLI362))(CMPcar((VV[88]->s.s_dbind)),VV[236]))!=Cnil){
	goto T1591;}
	base[0]= VV[237];
	base[1]= CMPcar((VV[88]->s.s_dbind));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1591;
T1591:;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V693= vs_base[0];
	V698= list(2,VV[238],(V691));
	V697= make_cons(/* INLINE-ARGS */V698,Cnil);
	goto T1580;
	goto T1586;
T1586:;
	base[0]= VV[239];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1580;
T1580:;
	if(type_of((V693))==t_symbol){
	goto T1603;}
	base[0]= VV[240];
	base[1]= (V693);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1601;
	goto T1603;
T1603:;
	V694= (*(LnkLI360))((V693),STREF(object,(VV[99]->s.s_dbind),12));
	if(((V694))!=Cnil){
	goto T1608;}
	base[0]= VV[241];
	base[1]= (V693);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1601;
	goto T1608;
T1608:;
	if(((V695))==Cnil){
	goto T1601;}
	if((STREF(object,(V694),8))!=Cnil){
	goto T1601;}
	base[0]= VV[242];
	base[1]= (V693);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1601;
T1601:;
	{object V699;
	object V700;
	object V701;
	V699= STREF(object,(V694),12);
	V702= (VFUN_NARGS=2,(*(LnkLI397))(STREF(object,(V694),4),Ct));
	V700= nconc((V697),/* INLINE-ARGS */V702);
	V701= STREF(object,(V694),16);
	if(!(type_of((V699))==t_symbol)){
	goto T1623;}
	base[0]= (V699);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V699= vs_base[0];
	goto T1623;
T1623:;
	if(((V695))==Cnil){
	goto T1630;}
	base[0]= (V699);
	base[1]= (V690);
	base[2]= (V692);
	base[3]= (V700);
	base[4]= VV[243];
	base[5]= Ct;
	{object V703;
	V703= (V701);
	 vs_top=base+6;
	 while(V703!=Cnil)
	 {vs_push((V703)->c.c_car);V703=(V703)->c.c_cdr;}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V696= vs_base[0];
	goto T1628;
	goto T1630;
T1630:;
	base[0]= (V699);
	base[1]= (V690);
	base[2]= (V692);
	base[3]= (V700);
	{object V704;
	V704= (V701);
	 vs_top=base+4;
	 while(V704!=Cnil)
	 {vs_push((V704)->c.c_car);V704=(V704)->c.c_cdr;}
	vs_base=base+1;}
	super_funcall_no_event(base[0]);
	vs_top=sup;
	V696= vs_base[0];
	goto T1628;
T1628:;}
	if(((VV[104]->s.s_dbind))==Cnil){
	goto T1644;}
	base[0]= VV[244];
	base[1]= (VV[104]->s.s_dbind);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1644;
T1644:;
	V706 = CMPmake_fixnum((long)length((V696)));
	{register object x= V706,V705= VV[245];
	while(V705!=Cnil)
	if(eql(x,V705->c.c_car)){
	goto T1649;
	}else V705=V705->c.c_cdr;}
	base[0]= VV[246];
	base[1]= (V693);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1649;
T1649:;
	{register object V707;
	register object V708;
	V707= CMPcar((V696));
	V708= Cnil;
	goto T1657;
T1657:;
	if(((V707))!=Cnil){
	goto T1658;}
	goto T1654;
	goto T1658;
T1658:;
	V708= CMPcar((V707));
	if(!(type_of((V708))!=t_cons)){
	goto T1664;}
	(void)((*(LnkLI392))((V708),Cnil,Cnil));
	goto T1662;
	goto T1664;
T1664:;
	(void)((*(LnkLI392))(CMPcar((V708)),CMPcadr((V708)),CMPcaddr((V708))));
	goto T1662;
T1662:;
	V707= CMPcdr((V707));
	goto T1657;}
	goto T1654;
T1654:;
	V709= reverse(CMPcadr((V696)));
	(VV[108]->s.s_dbind)= nconc(/* INLINE-ARGS */V709,(VV[108]->s.s_dbind));
	{object V710 = CMPcddr((V696));
	VMR87(V710)}}
	base[0]=base[0];
	return Cnil;
}
/*	function definition for NAMED-VARIABLE	*/

static void L100()
{register object *base=vs_base;
	register object *sup=base+VM88; VC88
	vs_check;
	{object V711;
	V711=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V712;
	V712= (*(LnkLI398))((V711),(VV[104]->s.s_dbind));
	if(((V712))!=Cnil){
	goto T1674;}
	base[1]= (VFUN_NARGS=0,(*(LnkLI335))());
	base[2]= Cnil;
	vs_top=(vs_base=base+1)+2;
	return;
	goto T1674;
T1674:;
	base[1]= (V712);
	base[2]= (VV[104]->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk399)();
	vs_top=sup;
	(VV[104]->s.s_dbind)= vs_base[0];
	base[1]= CMPcdr((V712));
	base[2]= Ct;
	vs_top=(vs_base=base+1)+2;
	return;}
	}
}
/*	local entry for function LOOP-COLLECT-PREPOSITIONAL-PHRASES	*/

static object LI101(object V713,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB89 VMS89 VMV89
	{object V714;
	object V715;
	object V716;
	va_start(ap,first);
	V714= V713;
	narg = narg - 1;
	if (narg <= 0) goto T1684;
	else {
	V715= first;}
	if (--narg <= 0) goto T1685;
	else {
	V716= va_arg(ap,object);}
	--narg; goto T1686;
	goto T1684;
T1684:;
	V715= Cnil;
	goto T1685;
T1685:;
	V716= Cnil;
	goto T1686;
T1686:;
	base[0]=make_cclosure_new(LC102,Cnil,Cnil,Cdata);
	base[0]=MMcons(base[0],Cnil);
	{object V717;
	object V718;
	object V719;
	object V720;
	object V721;
	object V722;
	{object V723;
	object V724= (V716);
	if(V724==Cnil){
	V721= Cnil;
	goto T1689;}
	base[1]=V723=MMcons(Cnil,Cnil);
	goto T1690;
T1690:;
	base[3]= CMPcar((V724->c.c_car));
	base[4]= (V714);
	base[5]= VV[20];
	base[6]= (base[0]->c.c_car);
	vs_top=(vs_base=base+3)+4;
	(void) (*Lnk380)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	Lcopy_list();
	vs_top=sup;
	(V723->c.c_cdr)= vs_base[0];
	while(MMcdr(V723)!=Cnil)V723=MMcdr(V723);
	if((V724=MMcdr(V724))==Cnil){
	base[1]=base[1]->c.c_cdr;
	V721= base[1];
	goto T1689;}
	goto T1690;}
	goto T1689;
T1689:;
	{object V726;
	object V727= (V716);
	if(V727==Cnil){
	V722= Cnil;
	goto T1697;}
	base[1]=V726=MMcons(Cnil,Cnil);
	goto T1698;
T1698:;
	(V726->c.c_car)= CMPcar((V727->c.c_car));
	if((V727=MMcdr(V727))==Cnil){
	V722= base[1];
	goto T1697;}
	V726=MMcdr(V726)=MMcons(Cnil,Cnil);
	goto T1698;}
	goto T1697;
T1697:;
	V717= Cnil;
	V718= (V716);
	V719= Cnil;
	V720= Cnil;
	goto T1701;
T1701:;
	if(((VV[88]->s.s_dbind))!=Cnil){
	goto T1702;}
	{object V728 = nreverse((V718));
	VMR89(V728)}
	goto T1702;
T1702:;
	V717= CMPcar((VV[88]->s.s_dbind));
	{register object V729;
	object V730;
	V729= (V714);
	V730= CMPcar((V729));
	goto T1712;
T1712:;
	if(!(((V729))==Cnil)){
	goto T1713;}
	goto T1708;
	goto T1713;
T1713:;
	base[2]= (V717);
	base[3]= (V730);
	vs_top=(vs_base=base+2)+2;
	L102(base);
	vs_top=sup;
	V720= vs_base[0];
	if(((V720))==Cnil){
	goto T1717;}
	V719= (V730);
	goto T1708;
	goto T1717;
T1717:;
	V729= CMPcdr((V729));
	V730= CMPcar((V729));
	goto T1712;}
	goto T1708;
T1708:;
	if(((V719))==Cnil){
	goto T1731;}
	{register object x= (V720),V731= (V721);
	while(V731!=Cnil)
	if(eql(x,V731->c.c_car)){
	goto T1735;
	}else V731=V731->c.c_cdr;
	goto T1733;}
	goto T1735;
T1735:;
	{register object x= (V720),V732= (V722);
	while(V732!=Cnil)
	if(eql(x,V732->c.c_car)){
	goto T1739;
	}else V732=V732->c.c_cdr;
	goto T1738;}
	goto T1739;
T1739:;
	base[1]= VV[247];
	goto T1736;
	goto T1738;
T1738:;
	base[1]= VV[248];
	goto T1736;
T1736:;
	base[2]= (V717);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1733;
T1733:;
	if(!(type_of((V719))==t_cons||((V719))==Cnil)){
	goto T1744;}
	V722= append((V719),(V722));
	goto T1742;
	goto T1744;
T1744:;
	V722= make_cons((V719),(V722));
	goto T1742;
T1742:;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	{object V733;
	vs_base=vs_top;
	(void) (*Lnk363)();
	vs_top=sup;
	V734= vs_base[0];
	V733= list(2,(V720),V734);
	V718= make_cons((V733),(V718));
	goto T1729;}
	goto T1731;
T1731:;
	if(((V715))==Cnil){
	goto T1751;}
	if(((*(LnkLI369))((V717),VV[249]))==Cnil){
	goto T1751;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	{register object V735;
	object V736;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V735= vs_base[0];
	V736= Cnil;
	goto T1758;
T1758:;
	if((CMPcadr((V735)))==Cnil){
	goto T1761;}
	V736= (*(LnkLI398))(CMPcar((V735)),(VV[104]->s.s_dbind));
	if(((V736))==Cnil){
	goto T1765;}
	base[1]= VV[250];
	base[2]= CMPcar((V735));
	base[3]= CMPcadr((V735));
	base[4]= CMPcadr((V736));
	vs_top=(vs_base=base+1)+4;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1761;
	goto T1765;
T1765:;
	{object V737;
	V737= make_cons(CMPcar((V735)),CMPcadr((V735)));
	(VV[104]->s.s_dbind)= make_cons((V737),(VV[104]->s.s_dbind));}
	goto T1761;
T1761:;
	if(((VV[88]->s.s_dbind))==Cnil){
	goto T1775;}
	if(!(type_of(CMPcar((VV[88]->s.s_dbind)))==t_symbol)){
	goto T1774;}
	goto T1775;
T1775:;
	goto T1729;
	goto T1774;
T1774:;
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	V735= vs_base[0];
	goto T1758;}
	goto T1751;
T1751:;
	{object V738 = nreverse((V718));
	VMR89(V738)}
	goto T1729;
T1729:;
	V719= Cnil;
	V720= Cnil;
	goto T1701;}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}
/*	local entry for function LOOP-SEQUENCER	*/

static object LI103(V749,V750,V751,V752,V753,V754,V755,V756,V757,V758)

object V749;register object V750;object V751;object V752;object V753;object V754;object V755;object V756;object V757;object V758;
{	 VMB90 VMS90 VMV90
	goto TTL;
TTL:;
	{object V759;
	object V760;
	object V761;
	object V762;
	object V763;
	object V764;
	object V765;
	register object V766;
	register object V767;
	object V768;
	object V769;
	object V770;
	object V771;
	object V772;
	object V773;{object V775;
	V775= (*(LnkLI336))((V750));
	if(V775==Cnil)goto T1788;
	V774= V775;
	goto T1787;
	goto T1788;
T1788:;}
	V774= small_fixnum(0);
	goto T1787;
T1787:;
	V763= one_plus(V774);
	V759= Cnil;
	V760= Cnil;
	V761= Cnil;
	V762= Cnil;
	V764= Ct;
	V765= Cnil;
	V766= Cnil;
	V767= Cnil;
	V768= Cnil;
	V769= Cnil;
	V770= Cnil;
	V771= Cnil;
	V772= Cnil;
	V773= Cnil;
	if(((V752))==Cnil){
	goto T1790;}
	(void)((*(LnkLI392))((V752),Cnil,(V753)));
	goto T1790;
T1790:;
	{register object V776;
	register object V777;
	register object V778;
	object V779;
	V776= (V758);
	V777= Cnil;
	V778= Cnil;
	V779= Cnil;
	goto T1795;
T1795:;
	if(((V776))!=Cnil){
	goto T1796;}
	goto T1793;
	goto T1796;
T1796:;
	V777= CMPcaar((V776));
	V778= CMPcadar((V776));
	{object V780= (V777);
	if((V780!= VV[400])
	&& (V780!= VV[238]))goto T1805;
	V760= Ct;
	(void)((VFUN_NARGS=3,(*(LnkLI371))((V754),(V778),(V755))));
	goto T1804;
	goto T1805;
T1805:;
	if((V780!= VV[401])
	&& (V780!= VV[251])
	&& (V780!= VV[253]))goto T1808;
	V768= Ct;
	if(!(((V777))==(VV[251]))){
	goto T1813;}
	V766= VV[252];
	goto T1811;
	goto T1813;
T1813:;
	if(!(((V777))==(VV[253]))){
	goto T1811;}
	V766= VV[254];
	goto T1811;
T1811:;
	base[0]= (V778);
	base[1]= (V750);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk393)();
	if(vs_base<vs_top){
	V778= vs_base[0];
	vs_base++;
	}else{
	V778= Cnil;}
	if(vs_base<vs_top){
	V770= vs_base[0];
	vs_base++;
	}else{
	V770= Cnil;}
	if(vs_base<vs_top){
	V769= vs_base[0];
	}else{
	V769= Cnil;}
	vs_top=sup;
	(void)((*(LnkLI392))((V749),(V778),(V750)));
	goto T1804;
	goto T1808;
T1808:;
	if((V780!= VV[255])
	&& (V780!= VV[256])
	&& (V780!= VV[257])
	&& (V780!= VV[258])
	&& (V780!= VV[259]))goto T1823;
	if(((*(LnkLI369))((V777),VV[255]))==Cnil){
	goto T1826;}
	V766= VV[254];
	V767= VV[254];
	goto T1824;
	goto T1826;
T1826:;
	if(((*(LnkLI369))((V777),VV[256]))==Cnil){
	goto T1831;}
	V767= Ct;
	goto T1824;
	goto T1831;
T1831:;
	if(((*(LnkLI369))((V777),VV[257]))==Cnil){
	goto T1835;}
	V766= VV[252];
	V767= VV[252];
	goto T1824;
	goto T1835;
T1835:;
	if(((*(LnkLI369))((V777),VV[258]))==Cnil){
	goto T1840;}
	V766= VV[252];
	goto T1824;
	goto T1840;
T1840:;
	if(((*(LnkLI369))((V777),VV[259]))==Cnil){
	goto T1824;}
	V766= VV[254];
	goto T1824;
T1824:;
	V771= Ct;
	base[0]= (V778);
	base[1]= (V750);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk393)();
	if(vs_base<vs_top){
	V778= vs_base[0];
	vs_base++;
	}else{
	V778= Cnil;}
	if(vs_base<vs_top){
	V772= vs_base[0];
	vs_base++;
	}else{
	V772= Cnil;}
	if(vs_base<vs_top){
	V773= vs_base[0];
	}else{
	V773= Cnil;}
	vs_top=sup;
	if(((V772))==Cnil){
	goto T1854;}
	V759= list(2,VV[221],(V773));
	goto T1852;
	goto T1854;
T1854:;
	V781= (VFUN_NARGS=1,(*(LnkLI335))(VV[260]));
	V759= (VFUN_NARGS=3,(*(LnkLI371))(/* INLINE-ARGS */V781,(V778),(V750)));
	goto T1852;
T1852:;
	goto T1804;
	goto T1823;
T1823:;
	if((V780!= VV[219]))goto T1856;
	base[0]= (V778);
	base[1]= (V750);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk393)();
	if(vs_base<vs_top){
	V778= vs_base[0];
	vs_base++;
	}else{
	V778= Cnil;}
	if(vs_base<vs_top){
	V764= vs_base[0];
	vs_base++;
	}else{
	V764= Cnil;}
	if(vs_base<vs_top){
	V763= vs_base[0];
	}else{
	V763= Cnil;}
	vs_top=sup;
	if(((V764))!=Cnil){
	goto T1804;}
	V763= (VFUN_NARGS=1,(*(LnkLI335))(VV[261]));
	(void)((VFUN_NARGS=3,(*(LnkLI371))((V763),(V778),(V750))));
	goto T1804;
	goto T1856;
T1856:;
	base[0]= VV[262];
	base[1]= (V777);
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;}
	goto T1804;
T1804:;
	if(((V779))==Cnil){
	goto T1866;}
	if(((V766))==Cnil){
	goto T1866;}
	if(((V766))==((V779))){
	goto T1866;}
	base[0]= VV[263];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1866;
T1866:;
	V779= (V766);
	V776= CMPcdr((V776));
	goto T1795;}
	goto T1793;
T1793:;
	if(((V754))==Cnil){
	goto T1879;}
	if(((V760))!=Cnil){
	goto T1879;}
	base[0]= VV[264];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1879;
T1879:;
	if(((V768))!=Cnil){
	goto T1885;}
	V770= Ct;{object V783;
	V783= (*(LnkLI336))((V750));
	if(V783==Cnil)goto T1892;
	V769= V783;
	goto T1891;
	goto T1892;
T1892:;}
	V769= small_fixnum(0);
	goto T1891;
T1891:;
	V782= (V769);
	(void)((*(LnkLI392))((V749),V782,(V750)));
	goto T1885;
T1885:;
	{register object x= (V766),V784= VV[265];
	while(V784!=Cnil)
	if(eql(x,V784->c.c_car)){
	goto T1897;
	}else V784=V784->c.c_cdr;
	goto T1896;}
	goto T1897;
T1897:;
	if(((V771))!=Cnil){
	goto T1899;}
	if(((V757))==Cnil){
	goto T1898;}
	goto T1899;
T1899:;
	if(((V771))!=Cnil){
	goto T1903;}
	V759= (VFUN_NARGS=1,(*(LnkLI335))(VV[266]));
	(void)((VFUN_NARGS=3,(*(LnkLI371))((V759),Cnil,(V750))));
	{object V785;
	V785= list(3,VV[11],(V759),(V757));
	(VV[108]->s.s_dbind)= make_cons((V785),(VV[108]->s.s_dbind));}
	goto T1903;
T1903:;
	if(((V767))==Cnil){
	goto T1912;}
	V761= VV[34];
	goto T1910;
	goto T1912;
T1912:;
	V761= VV[217];
	goto T1910;
T1910:;
	goto T1898;
T1898:;
	if(!(eql((V763),small_fixnum(1)))){
	goto T1916;}
	V765= list(2,VV[184],(V749));
	goto T1914;
	goto T1916;
T1916:;
	V765= list(3,VV[185],(V749),(V763));
	goto T1914;
T1914:;
	goto T1894;
	goto T1896;
T1896:;
	if(((V768))!=Cnil){
	goto T1918;}
	if(((V757))!=Cnil){
	goto T1921;}
	base[0]= VV[267];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T1921;
T1921:;
	{object V786;
	V786= list(3,VV[11],(V749),list(2,VV[268],(V757)));
	(VV[108]->s.s_dbind)= make_cons((V786),(VV[108]->s.s_dbind));}
	goto T1918;
T1918:;
	if(((V757))==Cnil){
	goto T1927;}
	if(((V759))!=Cnil){
	goto T1927;}
	V759= (*(LnkLI336))((V750));
	V767= Ct;
	goto T1927;
T1927:;
	if(((V759))==Cnil){
	goto T1935;}
	if(((V767))==Cnil){
	goto T1940;}
	V761= VV[33];
	goto T1938;
	goto T1940;
T1940:;
	V761= VV[269];
	goto T1938;
T1938:;
	goto T1935;
T1935:;
	if(!(eql((V763),small_fixnum(1)))){
	goto T1944;}
	V765= list(2,VV[268],(V749));
	goto T1942;
	goto T1944;
T1944:;
	V765= list(3,VV[270],(V749),(V763));
	goto T1942;
T1942:;
	goto T1894;
T1894:;
	if(((V761))==Cnil){
	goto T1946;}
	V787= list(3,(V761),(V749),(V759));
	V762= (*(LnkLI337))(Ct,(V749),/* INLINE-ARGS */V787);
	goto T1946;
T1946:;
	if(((V756))==Cnil){
	goto T1950;}
	V756= list(2,(V752),(*(LnkLI337))((V751),(V749),(V756)));
	goto T1950;
T1950:;
	{object V788;
	object V789;
	V788= (V762);
	V789= (V762);
	if(((V764))==Cnil){
	goto T1954;}
	if(((V770))==Cnil){
	goto T1954;}
	if(((V772))==Cnil){
	goto T1954;}
	base[0]= (V761);
	vs_top=(vs_base=base+0)+1;
	Lsymbol_function();
	vs_top=sup;
	V790= vs_base[0];
	V788= (
	V791 = V790,
	(type_of(V791) == t_sfun ?(*((V791)->sfn.sfn_self)):
	(fcall.argd=2,type_of(V791)==t_vfun) ?
	(*((V791)->sfn.sfn_self)):
	(fcall.fun=(V791),fcalln))((V769),(V773)));
	if(((V788))==Cnil){
	goto T1954;}
	V789= Ct;
	goto T1954;
T1954:;
	{object V792 = list(8,Cnil,list(2,(V749),(*(LnkLI337))(Ct,(V749),(V765))),(V789),(V756),Cnil,Cnil,(V788),(V756));
	VMR90(V792)}}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-FOR-ARITHMETIC	*/

static object LI104(V797,V798,V799,V800)

object V797;object V798;object V799;object V800;
{	 VMB91 VMS91 VMV91
	goto TTL;
TTL:;
	V801= (VFUN_NARGS=2,(*(LnkLI387))((V799),(VV[187]->s.s_dbind)));
	V802= list(2,(V800),(V798));
	V803= make_cons(/* INLINE-ARGS */V802,Cnil);
	V804= (VFUN_NARGS=3,(*(LnkLI397))(VV[271],Cnil,/* INLINE-ARGS */V803));
	{object V805 = (*(LnkLI402))((V797),/* INLINE-ARGS */V801,Ct,Cnil,Cnil,Cnil,Cnil,Cnil,Cnil,/* INLINE-ARGS */V804);
	VMR91(V805)}
	return Cnil;
}
/*	local entry for function LOOP-SEQUENCE-ELEMENTS-PATH	*/

static object LI105(object V808,object V807,object V806,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB92 VMS92 VMV92
	{object V809;
	object V810;
	object V811;
	object V812;
	object V813;
	object V814;
	object V815;
	va_start(ap,first);
	V809= V808;
	V810= V807;
	V811= V806;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI105key,first,ap);
	V812=(Vcs[3]);
	V813=(Vcs[4]);
	V814=(Vcs[5]);
	V815=(Vcs[6]);
	{object V816;
	object V817;
	base[0]= VV[272];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk407)();
	if(vs_base>=vs_top){vs_top=sup;goto T1969;}
	V816= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T1970;}
	V817= vs_base[0];
	vs_top=sup;
	goto T1971;
	goto T1969;
T1969:;
	V816= Cnil;
	goto T1970;
T1970:;
	V817= Cnil;
	goto T1971;
T1971:;
	{object V818;
	base[0]= VV[273];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk407)();
	vs_top=sup;
	V818= vs_base[0];
	if((V810)!=Cnil){
	V819= (V810);
	goto T1974;}
	V819= (V815);
	goto T1974;
T1974:;
	V820= list(3,(V812),(V818),(V816));
	V821= list(2,(V813),(V818));
	{object V822 = listA(3,Cnil,Cnil,(*(LnkLI402))((V816),VV[214],(V817),(V809),V819,(V818),(V814),/* INLINE-ARGS */V820,/* INLINE-ARGS */V821,(V811)));
	VMR92(V822)}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function LOOP-HASH-TABLE-ITERATION-PATH	*/

static object LI106(object V825,object V824,object V823,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB93 VMS93 VMV93
	bds_check;
	{object V826;
	object V827;
	object V828;
	register object V829;
	va_start(ap,first);
	V826= V825;
	V827= V824;
	V828= V823;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI106key,first,ap);
	V829=(Vcs[3]);
	bds_bind(VV[44],small_fixnum(4));
	bds_bind(VV[45],small_fixnum(4));
	goto T1977;
T1977:;
	base[2]= (V829);
	base[3]= VV[274];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk340)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T1978;}
	bds_unwind1;
	bds_unwind1;
	goto T1975;
	goto T1978;
T1978:;
	base[2]= VV[47];
	base[3]= VV[48];
	base[4]= VV[275];
	base[5]= (V829);
	base[6]= VV[274];
	vs_top=(vs_base=base+2)+5;
	Lcerror();
	vs_top=sup;
	base[2]= (VV[50]->s.s_dbind);
	base[3]= VV[51];
	base[4]= VV[275];
	vs_top=(vs_base=base+2)+3;
	Lformat();
	vs_top=sup;
	base[2]= (VV[50]->s.s_dbind);
	vs_top=(vs_base=base+2)+1;
	Lfinish_output();
	vs_top=sup;
	vs_base=vs_top;
	Lread();
	vs_top=sup;
	V829= vs_base[0];
	base[2]= (VV[50]->s.s_dbind);
	base[3]= VV[52];
	vs_top=(vs_base=base+2)+2;
	Lformat();
	vs_top=sup;
	goto T1977;
	goto T1975;
T1975:;
	if((CMPcdr((V828)))!=Cnil){
	goto T2004;}
	{register object x= CMPcaar((V828)),V830= VV[276];
	while(V830!=Cnil)
	if(eql(x,V830->c.c_car)){
	goto T2005;
	}else V830=V830->c.c_cdr;}
	goto T2004;
T2004:;
	base[0]= VV[277];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2003;
	goto T2005;
T2005:;
	if(((V828))!=Cnil){
	goto T2003;}
	base[0]= VV[278];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2003;
T2003:;
	{object V831;
	object V832;
	object V833;
	register object V834;
	V831= (VFUN_NARGS=1,(*(LnkLI335))(VV[279]));
	V832= (VFUN_NARGS=1,(*(LnkLI335))(VV[280]));
	V833= Cnil;
	V834= Cnil;
	{object V835;
	object V836;
	if(!(((V829))==(VV[281]))){
	goto T2018;}
	base[0]= VV[282];
	goto T2016;
	goto T2018;
T2018:;
	base[0]= VV[281];
	goto T2016;
T2016:;
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk407)();
	if(vs_base>=vs_top){vs_top=sup;goto T2020;}
	V835= vs_base[0];
	vs_base++;
	if(vs_base>=vs_top){vs_top=sup;goto T2021;}
	V836= vs_base[0];
	vs_top=sup;
	goto T2022;
	goto T2020;
T2020:;
	V835= Cnil;
	goto T2021;
T2021:;
	V836= Cnil;
	goto T2022;
T2022:;
	V836= Ct;
	V833= (*(LnkLI391))();
	{register object V837;
	register object V838;
	object V839;
	object V840;
	object V841;
	object V842;
	register object V843;
	V837= Cnil;
	V838= Cnil;
	V839= (VFUN_NARGS=1,(*(LnkLI335))(VV[283]));
	V840= (VFUN_NARGS=1,(*(LnkLI335))(VV[284]));
	V841= (VFUN_NARGS=1,(*(LnkLI335))(VV[285]));
	if((V826)!=Cnil){
	V842= (V826);
	goto T2032;}
	V842= (VFUN_NARGS=0,(*(LnkLI335))());
	goto T2032;
T2032:;
	V844= list(3,(V842),Cnil,(V827));
	V845= list(2,(V831),CMPcadar((V828)));
	if((V836)==Cnil){
	V846= Cnil;
	goto T2034;}
	if((V835)==Cnil){
	V846= Cnil;
	goto T2034;}
	V847= list(2,(V835),Cnil);
	V846= make_cons(/* INLINE-ARGS */V847,Cnil);
	goto T2034;
T2034:;
	V843= listA(3,/* INLINE-ARGS */V844,/* INLINE-ARGS */V845,V846);
	if(!(((V829))==(VV[281]))){
	goto T2037;}
	V837= (V842);
	if((V836)==Cnil){
	V838= Cnil;
	goto T2041;}
	V838= (V835);
	goto T2041;
T2041:;
	goto T2035;
	goto T2037;
T2037:;
	if((V836)==Cnil){
	V837= Cnil;
	goto T2043;}
	V837= (V835);
	goto T2043;
T2043:;
	V838= (V842);
	goto T2035;
T2035:;
	{object V848;
	V848= list(2,VV[286],list(2,(V832),(V831)));
	(VV[109]->s.s_dbind)= make_cons((V848),(VV[109]->s.s_dbind));}
	if(!(type_of((V837))==t_cons)){
	goto T2048;}{object V849;
	V849= (V837);
	V837= (VFUN_NARGS=1,(*(LnkLI335))(VV[284]));
	V834= listA(3,V849,(V837),(V834));}
	{object V850;
	V850= list(2,(V837),Cnil);
	V843= make_cons((V850),(V843));}
	goto T2048;
T2048:;
	if(!(type_of((V838))==t_cons)){
	goto T2056;}{object V851;
	V851= (V838);
	V838= (VFUN_NARGS=1,(*(LnkLI335))(VV[283]));
	V834= listA(3,V851,(V838),(V834));}
	{object V852;
	V852= list(2,(V838),Cnil);
	V843= make_cons((V852),(V843));}
	goto T2056;
T2056:;
	V853= list(3,(V841),(V840),(V839));
	V854= make_cons((V832),Cnil);
	V855= list(3,VV[11],(V838),(V839));
	V856= list(4,VV[8],(V841),/* INLINE-ARGS */V855,list(3,VV[11],(V837),(V840)));
	{object V857 = list(6,(V843),Cnil,Cnil,Cnil,list(2,VV[36],list(5,VV[287],/* INLINE-ARGS */V853,/* INLINE-ARGS */V854,/* INLINE-ARGS */V856,list(3,VV[11],(V833),(V841)))),(V834));
	VMR93(V857)}}}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function LOOP-PACKAGE-SYMBOLS-ITERATION-PATH	*/

static object LI107(object V860,object V859,object V858,object first,...)
{	
	va_list ap;
	int narg = VFUN_NARGS; VMB94 VMS94 VMV94
	{object V861;
	object V862;
	register object V863;
	object V864;
	va_start(ap,first);
	V861= V860;
	V862= V859;
	V863= V858;
	narg= narg - 3;
	{
	parse_key_new_new(narg,Vcs +3,(struct key *)(void *)&LI107key,first,ap);
	V864=(Vcs[3]);
	if(((V863))==Cnil){
	goto T2066;}
	if((CMPcdr((V863)))==Cnil){
	goto T2066;}
	base[0]= VV[288];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2064;
	goto T2066;
T2066:;
	if(((V863))==Cnil){
	goto T2064;}
	{register object x= CMPcaar((V863)),V865= VV[289];
	while(V865!=Cnil)
	if(eql(x,V865->c.c_car)){
	goto T2064;
	}else V865=V865->c.c_cdr;}
	base[0]= VV[290];
	base[1]= CMPcaar((V863));
	vs_top=(vs_base=base+0)+2;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2064;
T2064:;
	if(type_of((V861))==t_symbol){
	goto T2077;}
	base[0]= VV[291];
	vs_top=(vs_base=base+0)+1;
	(void) (*Lnk354)();
	vs_top=sup;
	goto T2077;
T2077:;
	{object V866;
	object V867;
	object V868;
	object V869;
	V866= (VFUN_NARGS=1,(*(LnkLI335))(VV[292]));
	V867= (VFUN_NARGS=1,(*(LnkLI335))(VV[293]));
	if((V861)!=Cnil){
	V868= (V861);
	goto T2083;}
	V868= (VFUN_NARGS=0,(*(LnkLI335))());
	goto T2083;
T2083:;{object V870;
	V870= CMPcadar((V863));
	if(V870==Cnil)goto T2085;
	V869= V870;
	goto T2084;
	goto T2085;
T2085:;}
	V869= VV[294];
	goto T2084;
T2084:;
	{object V871;
	V871= list(2,VV[295],listA(3,(V867),(V866),(V864)));
	(VV[109]->s.s_dbind)= make_cons((V871),(VV[109]->s.s_dbind));}
	V872= list(3,(V868),Cnil,(V862));
	V873= list(2,/* INLINE-ARGS */V872,list(2,(V866),(V869)));
	V874= (*(LnkLI391))();
	V875= list(2,/* INLINE-ARGS */V874,(V868));
	{object V876 = list(6,/* INLINE-ARGS */V873,Cnil,Cnil,Cnil,list(2,VV[36],list(3,VV[84],/* INLINE-ARGS */V875,make_cons((V867),Cnil))),Cnil);
	VMR94(V876)}}
	va_end(ap);
	base[0]=base[0];
	return Cnil;}
	}}
/*	local entry for function MAKE-ANSI-LOOP-UNIVERSE	*/

static object LI108(V878)

object V878;
{	 VMB95 VMS95 VMV95
	goto TTL;
TTL:;
	{register object V879;
	base[0]= VV[296];
	base[1]= VV[297];
	base[2]= VV[298];
	base[3]= VV[299];
	base[4]= VV[300];
	base[5]= VV[301];
	base[6]= VV[302];
	base[7]= VV[303];
	base[8]= VV[304];
	base[9]= VV[305];
	base[10]= VV[306];
	base[11]= VV[307];
	base[12]= list(2,VV[183],list(4,VV[308],VV[183],(VV[187]->s.s_dbind),VV[214]));
	base[13]= list(2,VV[309],list(4,VV[308],VV[183],(VV[187]->s.s_dbind),VV[214]));
	base[14]= VV[310];
	vs_top=(vs_base=base+0)+15;
	LlistA();
	vs_top=sup;
	V880= vs_base[0];
	if(((V878))==Cnil){
	goto T2109;}
	V881= VV[314];
	goto T2107;
	goto T2109;
T2109:;
	V881= Ct;
	goto T2107;
T2107:;
	V879= (VFUN_NARGS=12,(*(LnkLI410))(VV[53],V880,VV[54],VV[311],VV[55],VV[312],VV[60],VV[313],VV[59],Cnil,VV[57],V881));
	(void)((VFUN_NARGS=9,(*(LnkLI411))(VV[315],VV[316],(V879),VV[233],VV[317],VV[234],Cnil,VV[232],VV[318])));
	(void)((VFUN_NARGS=9,(*(LnkLI411))(VV[319],VV[316],(V879),VV[233],VV[320],VV[234],Cnil,VV[232],VV[321])));
	(void)((VFUN_NARGS=9,(*(LnkLI411))(VV[322],VV[323],(V879),VV[233],VV[324],VV[234],Cnil,VV[232],VV[325])));
	(void)((VFUN_NARGS=9,(*(LnkLI411))(VV[326],VV[323],(V879),VV[233],VV[327],VV[234],Cnil,VV[232],VV[328])));
	(void)((VFUN_NARGS=9,(*(LnkLI411))(VV[329],VV[323],(V879),VV[233],VV[330],VV[234],Cnil,VV[232],VV[331])));
	{object V882 = (V879);
	VMR95(V882)}}
	base[0]=base[0];
	return Cnil;
}
/*	local entry for function LOOP-STANDARD-EXPANSION	*/

static object LI109(V886,V887,V888)

register object V886;object V887;object V888;
{	 VMB96 VMS96 VMV96
	goto TTL;
TTL:;
	if(((V886))==Cnil){
	goto T2117;}
	if(!(type_of(CMPcar((V886)))==t_symbol)){
	goto T2117;}
	{object V889 = (*(LnkLI412))((V886),(V887),(V888));
	VMR96(V889)}
	goto T2117;
T2117:;
	{object V890;
	vs_base=vs_top;
	Lgensym();
	vs_top=sup;
	V890= vs_base[0];
	V891= make_cons(VV[14],(V886));
	{object V892 = list(3,VV[124],Cnil,list(4,VV[73],(V890),/* INLINE-ARGS */V891,list(2,VV[82],(V890))));
	VMR96(V892)}}
	base[0]=base[0];
	return Cnil;
}
/*	macro definition for LOOP	*/

static void L110()
{register object *base=vs_base;
	register object *sup=base+VM97; VC97
	vs_check;
	vs_top=sup;
	{object V893=base[0]->c.c_cdr;
	base[2]= V893;}
	base[3]= (*(LnkLI413))(base[2],base[1],(VV[332]->s.s_dbind));
	vs_top=(vs_base=base+3)+1;
	return;
}
/*	local function IN-GROUP-P	*/

static void LC102(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM98; VC98
	vs_check;
	{object V894;
	object V895;
	V894=(base[0]);
	V895=(base[1]);
	vs_top=sup;
	V896= (*(LnkLI362))((V894),(V895));
	base[2]= CMPcar(/* INLINE-ARGS */V896);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function IN-GROUP-P	*/

static void L102(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM99; VC99
	vs_check;
	{object V897;
	object V898;
	V897=(base[0]);
	V898=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	V899= (*(LnkLI362))((V897),(V898));
	base[2]= CMPcar(/* INLINE-ARGS */V899);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function MAKE-ENDTEST	*/

static void L88(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM100; VC100
	vs_check;
	{object V900;
	V900=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V900))!=Cnil){
	goto T2123;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2123;
T2123:;
	{register object x= Ct,V901= (V900);
	while(V901!=Cnil)
	if(eql(x,V901->c.c_car)){
	goto T2127;
	}else V901=V901->c.c_cdr;
	goto T2126;}
	goto T2127;
T2127:;
	base[1]= VV[197];
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2126;
T2126:;
	V900= nreverse((V900));
	if((CMPcdr((V900)))!=Cnil){
	goto T2130;}
	V902= CMPcar((V900));
	goto T2128;
	goto T2130;
T2130:;
	V902= make_cons(VV[35],(V900));
	goto T2128;
T2128:;
	base[1]= list(3,VV[8],V902,VV[198]);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function GET-CLAUSE	*/

static void L72(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM101; VC101
	vs_check;
	{object V903;
	V903=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V904;
	V904= Cnil;
	goto T2134;
T2134:;
	{register object V905;
	register object V906;
	V905= CMPcar((VV[88]->s.s_dbind));
	bds_bind(VV[111],Cnil);
	V906= Cnil;
	if(type_of((V905))==t_symbol){
	goto T2140;}
	base[2]= VV[155];
	base[3]= (V905);
	base[4]= (V903);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk354)();
	vs_top=sup;
	bds_unwind1;
	goto T2137;
	goto T2140;
T2140:;
	(VV[87]->s.s_dbind)= (VV[88]->s.s_dbind);
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[156]))==Cnil){
	goto T2148;}
	if((base0[2])==Cnil){
	goto T2148;}
	if(base0[1]!=Cnil){
	V907= base0[1];
	goto T2154;}
	base0[1]= (*(LnkLI391))();
	V907= base0[1];
	goto T2154;
T2154:;
	(VV[88]->s.s_dbind)= make_cons(V907,CMPcdr((VV[88]->s.s_dbind)));
	goto T2148;
T2148:;
	V906= (*(LnkLI360))((V905),STREF(object,(VV[99]->s.s_dbind),0));
	if(((V906))==Cnil){
	goto T2156;}
	base[3]= CMPcar((V906));
	vs_top=(vs_base=base+3)+1;
	Lsymbol_function();
	vs_top=sup;
	base[2]= vs_base[0];
	{object V908;
	V908= CMPcdr((V906));
	 vs_top=base+3;
	 while(V908!=Cnil)
	 {vs_push((V908)->c.c_car);V908=(V908)->c.c_cdr;}
	vs_base=base+3;}
	super_funcall_no_event(base[2]);
	vs_top=sup;
	if(!(((VV[111]->s.s_dbind))==Cnil)){
	goto T2157;}
	goto T2156;
T2156:;
	base[2]= VV[157];
	base[3]= (V905);
	base[4]= (V903);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk354)();
	vs_top=sup;
	bds_unwind1;
	goto T2137;
	goto T2157;
T2157:;
	base[2]= (VV[111]->s.s_dbind);
	base[3]= (V904);
	vs_top=(vs_base=base+2)+2;
	Lreconc();
	vs_top=sup;
	V904= vs_base[0];
	bds_unwind1;}
	goto T2137;
T2137:;
	base0[2]= Cnil;
	if(((*(LnkLI369))(CMPcar((VV[88]->s.s_dbind)),VV[158]))==Cnil){
	goto T2176;}
	vs_base=vs_top;
	(void) (*Lnk359)();
	vs_top=sup;
	goto T2174;
	goto T2176;
T2176:;
	if((CMPcdr((V904)))==Cnil){
	goto T2179;}
	V909= nreverse((V904));
	base[1]= make_cons(VV[14],/* INLINE-ARGS */V909);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2179;
T2179:;
	base[1]= CMPcar((V904));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2174;
T2174:;
	goto T2134;}
	}
}
/*	local function REPLICATE	*/

static void L64(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM102; VC102
	vs_check;
	{object V910;
	object V911;
	V910=(base[0]);
	V911=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(type_of((V911))!=t_cons)){
	goto T2184;}
	base[2]= (V910);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2184;
T2184:;
	base[2]= (V910);
	base[3]= CMPcar((V911));
	vs_top=(vs_base=base+2)+2;
	L64(base0);
	vs_top=sup;
	V912= vs_base[0];
	base[2]= (V910);
	base[3]= CMPcdr((V911));
	vs_top=(vs_base=base+2)+2;
	L64(base0);
	vs_top=sup;
	V913= vs_base[0];
	base[2]= make_cons(V912,V913);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function TRANSLATE	*/

static void L63(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM103; VC103
	vs_check;
	{register object V914;
	register object V915;
	V914=(base[0]);
	V915=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(((V914))!=Cnil){
	goto T2193;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2193;
T2193:;
	if(!(type_of((V914))!=t_cons)){
	goto T2196;}{object V916;
	base[3]= (V914);
	base[4]= STREF(object,(VV[99]->s.s_dbind),16);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V916= vs_base[0];
	if(V916==Cnil)goto T2199;
	base[2]= V916;
	goto T2198;
	goto T2199;
T2199:;}{object V917;
	base[3]= symbol_name((V914));
	base[4]= STREF(object,(VV[99]->s.s_dbind),20);
	vs_top=(vs_base=base+3)+2;
	Lgethash();
	vs_top=sup;
	V917= vs_base[0];
	if(V917==Cnil)goto T2203;
	base[2]= V917;
	goto T2198;
	goto T2203;
T2203:;}
	base[3]= VV[144];
	base[4]= base0[1];
	base[5]= (V914);
	vs_top=(vs_base=base+3)+3;
	(void) (*Lnk354)();
	vs_top=sup;
	base[2]= vs_base[0];
	goto T2198;
T2198:;
	base[3]= (V915);
	vs_top=(vs_base=base+2)+2;
	L64(base0);
	return;
	goto T2196;
T2196:;
	if(!(type_of((V915))!=t_cons)){
	goto T2212;}
	base[2]= VV[145];
	base[3]= base0[1];
	base[4]= base0[0];
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk354)();
	return;
	goto T2212;
T2212:;
	base[2]= CMPcar((V914));
	base[3]= CMPcar((V915));
	vs_top=(vs_base=base+2)+2;
	L63(base0);
	vs_top=sup;
	V918= vs_base[0];
	base[2]= CMPcdr((V914));
	base[3]= CMPcdr((V915));
	vs_top=(vs_base=base+2)+2;
	L63(base0);
	vs_top=sup;
	V919= vs_base[0];
	base[2]= make_cons(V918,V919);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	local function LIST-SIZE	*/

static void L40(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM104; VC104
	vs_check;
	{object V920;
	V920=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{long V921;
	V921= 0;
	{register object V922;
	object V923;
	V922= (V920);
	V923= CMPcar((V922));
	goto T2227;
T2227:;
	if(!(((V922))==Cnil)){
	goto T2228;}
	base[2]= CMPmake_fixnum(V921);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2228;
T2228:;
	V924 = CMPmake_fixnum(V921);
	base[2]= (V923);
	base[3]= base0[1];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk349)();
	vs_top=sup;
	V925= vs_base[0];
	V921= fix(number_plus(V924,V925));
	V922= CMPcdr((V922));
	V923= CMPcar((V922));
	goto T2227;}}
	}
}
/*	local function MAKEBODY	*/

static void L35(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM105; VC105
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	{object V926;
	V928= nreverse(base0[7]);
	base[0]= append(base0[2],/* INLINE-ARGS */V928);
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V927= vs_base[0];
	base[1]= base0[8];
	base[2]= VV[75];
	vs_top=(vs_base=base+1)+2;
	Lreconc();
	vs_top=sup;
	V930= vs_base[0];
	base[0]= append(base0[4],V930);
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V929= vs_base[0];
	base[0]= base0[6];
	vs_top=(vs_base=base+0)+1;
	L33(base0);
	vs_top=sup;
	V931= vs_base[0];
	V932= make_cons(VV[76],V931);
	V933= append(V929,/* INLINE-ARGS */V932);
	V934= make_cons(VV[74],/* INLINE-ARGS */V933);
	V935= append(V927,/* INLINE-ARGS */V934);
	V926= make_cons(VV[73],/* INLINE-ARGS */V935);
	if((base0[9])==Cnil){
	goto T2253;}
	V936= list(2,base0[9],Cnil);
	base[0]= list(3,VV[29],make_cons(/* INLINE-ARGS */V936,Cnil),(V926));
	vs_top=(vs_base=base+0)+1;
	return;
	goto T2253;
T2253:;
	base[0]= (V926);
	vs_top=(vs_base=base+0)+1;
	return;}
}
/*	local function PIFY	*/

static void L34(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM106; VC106
	vs_check;
	{object V937;
	V937=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if((CMPcdr((V937)))!=Cnil){
	goto T2256;}
	base[1]= CMPcar((V937));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2256;
T2256:;
	base[1]= make_cons(VV[14],(V937));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	local function PSIMP	*/

static void L33(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM107; VC107
	vs_check;
	{object V938;
	V938=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V939;
	V939= Cnil;
	{register object V940;
	register object V941;
	V940= (V938);
	V941= CMPcar((V940));
	goto T2262;
T2262:;
	if(!(((V940))==Cnil)){
	goto T2263;}
	goto T2258;
	goto T2263;
T2263:;
	if(((V941))==Cnil){
	goto T2267;}
	V939= make_cons(V941,(V939));
	if(!(type_of((V941))==t_cons)){
	goto T2267;}
	{register object x= CMPcar((V941)),V943= VV[72];
	while(V943!=Cnil)
	if(eql(x,V943->c.c_car)){
	goto T2275;
	}else V943=V943->c.c_cdr;
	goto T2267;}
	goto T2275;
T2275:;
	goto T2258;
	goto T2267;
T2267:;
	V940= CMPcdr((V940));
	V941= CMPcar((V940));
	goto T2262;}
	goto T2258;
T2258:;
	base[1]= nreverse((V939));
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	local function FIND-NON-NULL	*/

static void L27(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM108; VC108
	vs_check;
	{object V944;
	V944=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V945;
	V945= (V944);
	goto T2282;
T2282:;
	if(type_of((V945))==t_cons){
	goto T2283;}
	base[1]= (V945);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2283;
T2283:;
	{register object V946;
	V946= CMPcar((V945));
	V945= CMPcdr((V945));
	base[1]= (V946);}
	vs_top=(vs_base=base+1)+1;
	L27(base0);
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2287;}
	base[1]= Ct;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T2287;
T2287:;
	goto T2282;}
	}
}
/*	local function LOOP-DESETQ-INTERNAL	*/

static void L28(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM109; VC109
	vs_check;
	{register object V947;
	register object V948;
	object V949;
	V947=(base[0]);
	V948=(base[1]);
	vs_base=vs_base+2;
	if(vs_base>=vs_top){vs_top=sup;goto T2296;}
	V949=(base[2]);
	vs_top=sup;
	goto T2297;
	goto T2296;
T2296:;
	V949= Cnil;
	goto T2297;
T2297:;
	{register object V950;
	V950= (V947);
	if(!(((V950))==Cnil)){
	goto T2300;}
	if(!(type_of((V948))==t_cons)){
	goto T2303;}
	if(!((CMPcar((V948)))==(VV[62]))){
	goto T2306;}
	{object V951;
	object V952= CMPcdr((V948));
	if(V952==Cnil){
	base[4]= Cnil;
	vs_top=(vs_base=base+4)+1;
	return;}
	base[3]=V951=MMcons(Cnil,Cnil);
	goto T2308;
T2308:;
	{register object V953;
	V953= (V952->c.c_car);
	if(type_of((V953))==t_cons){
	goto T2310;}
	(V951->c.c_cdr)= Cnil;
	goto T2309;
	goto T2310;
T2310:;
	if(!((((CMPcar((V953)))==(VV[65])?Ct:Cnil))==Cnil)){
	goto T2314;}
	goto T2312;
	goto T2314;
T2314:;
	if(!(((type_of(CMPcadr((V953)))==t_symbol?Ct:Cnil))==Cnil)){
	goto T2316;}
	goto T2312;
	goto T2316;
T2316:;
	base[4]= (V953);
	base[5]= base0[1];
	vs_top=(vs_base=base+4)+2;
	Lmacroexpand();
	vs_top=sup;
	V953= vs_base[0];
	if(((type_of((V953))==t_symbol?Ct:Cnil))==Cnil){
	goto T2312;}
	(V951->c.c_cdr)= Cnil;
	goto T2309;
	goto T2312;
T2312:;
	(V951->c.c_cdr)= make_cons((V953),Cnil);}
	goto T2309;
T2309:;
	while(MMcdr(V951)!=Cnil)V951=MMcdr(V951);
	if((V952=MMcdr(V952))==Cnil){
	base[3]=base[3]->c.c_cdr;
	vs_top=(vs_base=base+3)+1;
	return;}
	goto T2308;}
	goto T2306;
T2306:;
	base[3]= make_cons((V948),Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2303;
T2303:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2300;
T2300:;
	if(!(type_of((V950))==t_cons)){
	goto T2322;}
	{object V954;
	object V955;
	object V956;
	object V957;
	V954= CMPcar((V947));
	V955= CMPcdr((V947));
	base[7]= (V954);
	vs_top=(vs_base=base+7)+1;
	L27(base0);
	vs_top=sup;
	V956= vs_base[0];
	base[7]= (V955);
	vs_top=(vs_base=base+7)+1;
	L27(base0);
	vs_top=sup;
	V957= vs_base[0];
	if(((V956))!=Cnil){
	goto T2330;}
	if(((V957))==Cnil){
	goto T2331;}
	goto T2330;
T2330:;
	if(((V957))==Cnil){
	goto T2336;}
	{register object V959;
	object V960;
	if((V949)!=Cnil){
	V959= (V949);
	goto T2338;}
	V959= (VV[66]->s.s_dbind);
	goto T2338;
T2338:;
	base[9]= (V954);
	base[10]= list(2,VV[65],(V959));
	vs_top=(vs_base=base+9)+2;
	L28(base0);
	vs_top=sup;
	V961= vs_base[0];
	V962= list(3,VV[11],(V959),list(2,VV[10],(V959)));
	base[9]= (V955);
	base[10]= (V959);
	base[11]= (V959);
	vs_top=(vs_base=base+9)+3;
	L28(base0);
	vs_top=sup;
	V963= vs_base[0];
	V964= make_cons(/* INLINE-ARGS */V962,V963);
	V960= append(V961,/* INLINE-ARGS */V964);
	if((V949)==Cnil){
	goto T2348;}
	if(((V959))==((V948))){
	goto T2352;}
	V966= list(3,VV[11],(V959),(V948));
	V965= make_cons(/* INLINE-ARGS */V966,Cnil);
	goto T2350;
	goto T2352;
T2352:;
	V965= Cnil;
	goto T2350;
T2350:;
	base[9]= append(V965,(V960));
	vs_top=(vs_base=base+9)+1;
	return;
	goto T2348;
T2348:;
	V967= list(2,(V959),(V948));
	V968= listA(3,VV[29],make_cons(/* INLINE-ARGS */V967,Cnil),(V960));
	base[9]= make_cons(/* INLINE-ARGS */V968,Cnil);
	vs_top=(vs_base=base+9)+1;
	return;}
	goto T2336;
T2336:;
	base[7]= (V954);
	base[8]= list(2,VV[65],(V948));
	base[9]= (V949);
	vs_top=(vs_base=base+7)+3;
	L28(base0);
	return;
	goto T2331;
T2331:;
	base[7]= Cnil;
	vs_top=(vs_base=base+7)+1;
	return;}
	goto T2322;
T2322:;
	if(((V947))==((V948))){
	goto T2358;}
	V969= list(3,VV[11],(V947),(V948));
	base[3]= make_cons(/* INLINE-ARGS */V969,Cnil);
	vs_top=(vs_base=base+3)+1;
	return;
	goto T2358;
T2358:;
	base[3]= Cnil;
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function MAKETABLE	*/

static void L23(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM110; VC110
	vs_check;
	{object V970;
	V970=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V971;
	object V972;
	V971= CMPmake_fixnum((long)length((V970)));
	base[3]= VV[61];
	if(!(number_compare((V971),small_fixnum(10))<0)){
	goto T2365;}
	base[4]= small_fixnum(10);
	goto T2363;
	goto T2365;
T2365:;
	base[4]= (V971);
	goto T2363;
T2363:;
	base[5]= VV[20];
	base[6]= (VV[414]->s.s_gfdef);
	vs_top=(vs_base=base+3)+4;
	Lmake_hash_table();
	vs_top=sup;
	V972= vs_base[0];
	{register object V973;
	object V974;
	V973= (V970);
	V974= CMPcar((V973));
	goto T2373;
T2373:;
	if(!(((V973))==Cnil)){
	goto T2374;}
	goto T2369;
	goto T2374;
T2374:;
	{object V975;
	object V977;
	V975= symbol_name(CMPcar((V974)));
	V977= CMPcadr((V974));
	base[6]= (V975);
	base[7]= V972;
	base[8]= (V977);
	vs_top=(vs_base=base+6)+3;
	siLhash_set();
	vs_top=sup;}
	V973= CMPcdr((V973));
	V974= CMPcar((V973));
	goto T2373;}
	goto T2369;
T2369:;
	base[3]= (V972);
	vs_top=(vs_base=base+3)+1;
	return;}
	}
}
/*	local function CDR-WRAP	*/

static void L8(base0)
register object *base0;
{	register object *base=vs_base;
	register object *sup=base+VM111; VC111
	vs_check;
	{register object V978;
	register long V979;
	V978=(base[0]);
	V979=fix(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	goto T2390;
T2390:;
	if(!((V979)<=(4))){
	goto T2391;}switch(V979){
	case 1:
	goto T2397;
T2397:;
	V980= VV[10];
	goto T2395;
	case 2:
	goto T2398;
T2398:;
	V980= VV[15];
	goto T2395;
	case 3:
	goto T2399;
T2399:;
	V980= VV[16];
	goto T2395;
	case 4:
	goto T2400;
T2400:;
	V980= VV[17];
	goto T2395;
	default:
	goto T2401;
T2401:;
	V980= Cnil;
	goto T2395;}
	V980= Cnil;
	goto T2395;
T2395:;
	V978= list(2,V980,(V978));
	base[2]= (V978);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2391;
T2391:;
	V978= list(2,VV[17],(V978));
	V979= (long)(V979)-(4);
	goto T2390;
	}
}
static object  LnkTLI413(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[413],(void **)(void *)&LnkLI413,3,first,ap);va_end(ap);return V1;} /* LOOP-STANDARD-EXPANSION */
static object  LnkTLI412(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[412],(void **)(void *)&LnkLI412,3,first,ap);va_end(ap);return V1;} /* LOOP-TRANSLATE */
static object  LnkTLI411(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[411],(void **)(void *)&LnkLI411,first,ap);va_end(ap);return V1;} /* ADD-LOOP-PATH */
static object  LnkTLI410(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[410],(void **)(void *)&LnkLI410,first,ap);va_end(ap);return V1;} /* MAKE-STANDARD-LOOP-UNIVERSE */
static void LnkT407(){ call_or_link(VV[407],(void **)(void *)&Lnk407);} /* NAMED-VARIABLE */
static object  LnkTLI402(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[402],(void **)(void *)&LnkLI402,10,first,ap);va_end(ap);return V1;} /* LOOP-SEQUENCER */
static void LnkT399(){ call_or_link(VV[399],(void **)(void *)&Lnk399);} /* DELETE */
static object  LnkTLI398(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[398],(void **)(void *)&LnkLI398,2,first,ap);va_end(ap);return V1;} /* LOOP-TASSOC */
static object  LnkTLI397(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[397],(void **)(void *)&LnkLI397,first,ap);va_end(ap);return V1;} /* LOOP-COLLECT-PREPOSITIONAL-PHRASES */
static object  LnkTLI396(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[396],(void **)(void *)&LnkLI396,first,ap);va_end(ap);return V1;} /* MAKE-LOOP-PATH */
static void LnkT395(){ call_or_link(VV[395],(void **)(void *)&Lnk395);} /* STRUCTURE-SUBTYPE-P */
static void LnkT394(){ call_or_link(VV[394],(void **)(void *)&Lnk394);} /* LOOP-LIST-STEP */
static void LnkT393(){ call_or_link(VV[393],(void **)(void *)&Lnk393);} /* LOOP-CONSTANT-FOLD-IF-POSSIBLE */
static object  LnkTLI392(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[392],(void **)(void *)&LnkLI392,3,first,ap);va_end(ap);return V1;} /* LOOP-MAKE-ITERATION-VARIABLE */
static object  LnkTLI391(){return call_proc0(VV[391],(void **)(void *)&LnkLI391);} /* LOOP-WHEN-IT-VARIABLE */
static void LnkT390(){ call_or_link(VV[390],(void **)(void *)&Lnk390);} /* LOOP-DISALLOW-ANONYMOUS-COLLECTORS */
static object  LnkTLI389(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[389],(void **)(void *)&LnkLI389,2,first,ap);va_end(ap);return V1;} /* LOOP-NOTE-MINIMAX-OPERATION */
static object  LnkTLI388(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[388],(void **)(void *)&LnkLI388,2,first,ap);va_end(ap);return V1;} /* MAKE-LOOP-MINIMAX */
static object  LnkTLI387(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[387],(void **)(void *)&LnkLI387,first,ap);va_end(ap);return V1;} /* LOOP-CHECK-DATA-TYPE */
static object  LnkTLI384(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[384],(void **)(void *)&LnkLI384,first,ap);va_end(ap);return V1;} /* LOOP-EMIT-FINAL-VALUE */
static void LnkT383(){ call_or_link(VV[383],(void **)(void *)&Lnk383);} /* LOOP-GET-COLLECTION-INFO */
static object  LnkTLI382(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[382],(void **)(void *)&LnkLI382,first,ap);va_end(ap);return V1;} /* MAKE-LOOP-COLLECTOR */
static object  LnkTLI381(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[381],(void **)(void *)&LnkLI381,1,first,ap);va_end(ap);return V1;} /* LOOP-VARIABLE-P */
static void LnkT380(){ call_or_link(VV[380],(void **)(void *)&Lnk380);} /* FIND */
static void LnkT379(){ call_or_link(VV[379],(void **)(void *)&Lnk379);} /* LOOP-DISALLOW-AGGREGATE-BOOLEANS */
static void LnkT378(){ call_or_link(VV[378],(void **)(void *)&Lnk378);} /* LOOP-OPTIONAL-TYPE */
static object  LnkTLI375(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[375],(void **)(void *)&LnkLI375,1,first,ap);va_end(ap);return V1;} /* LOOP-EMIT-BODY */
static object  LnkTLI374(){return call_proc0(VV[374],(void **)(void *)&LnkLI374);} /* LOOP-GET-PROGN */
static void LnkT373(){ call_or_link(VV[373],(void **)(void *)&Lnk373);} /* LOOP-DISALLOW-CONDITIONAL */
static object  LnkTLI372(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[372],(void **)(void *)&LnkLI372,1,first,ap);va_end(ap);return V1;} /* LOOP-CONSTANTP */
static object  LnkTLI371(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[371],(void **)(void *)&LnkLI371,first,ap);va_end(ap);return V1;} /* LOOP-MAKE-VARIABLE */
static object  LnkTLI370(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[370],(void **)(void *)&LnkLI370,2,first,ap);va_end(ap);return V1;} /* LOOP-DECLARE-VARIABLE */
static object  LnkTLI369(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[369],(void **)(void *)&LnkLI369,2,first,ap);va_end(ap);return V1;} /* LOOP-TEQUAL */
static void LnkT368(){ call_or_link(VV[368],(void **)(void *)&Lnk368);} /* COERCE */
static void LnkT367(){ call_or_link(VV[367],(void **)(void *)&Lnk367);} /* FIND-IF-NOT */
static object  LnkTLI366(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[366],(void **)(void *)&LnkLI366,1,first,ap);va_end(ap);return V1;} /* LOOP-CONSTRUCT-RETURN */
static object  LnkTLI365(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[365],(void **)(void *)&LnkLI365,1,first,ap);va_end(ap);return V1;} /* LOOP-PSEUDO-BODY */
static object  LnkTLI364(){return call_proc0(VV[364],(void **)(void *)&LnkLI364);} /* LOOP-GET-COMPOUND-FORM */
static void LnkT363(){ call_or_link(VV[363],(void **)(void *)&Lnk363);} /* LOOP-GET-FORM */
static object  LnkTLI362(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[362],(void **)(void *)&LnkLI362,2,first,ap);va_end(ap);return V1;} /* LOOP-TMEMBER */
static object  LnkTLI361(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[361],(void **)(void *)&LnkLI361,1,first,ap);va_end(ap);return V1;} /* LOOP-HACK-ITERATION */
static object  LnkTLI360(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[360],(void **)(void *)&LnkLI360,2,first,ap);va_end(ap);return V1;} /* LOOP-LOOKUP-KEYWORD */
static void LnkT359(){ call_or_link(VV[359],(void **)(void *)&Lnk359);} /* LOOP-POP-SOURCE */
static object  LnkTLI358(){return call_proc0(VV[358],(void **)(void *)&LnkLI358);} /* LOOP-BIND-BLOCK */
static object  LnkTLI357(){return call_proc0(VV[357],(void **)(void *)&LnkLI357);} /* LOOP-ITERATION-DRIVER */
static object  LnkTLI356(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[356],(void **)(void *)&LnkLI356,2,first,ap);va_end(ap);return V1;} /* LOOP-BUILD-DESTRUCTURING-BINDINGS */
static object  LnkTLI355(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[355],(void **)(void *)&LnkLI355,1,first,ap);va_end(ap);return V1;} /* SUBST-GENSYMS-FOR-NIL */
static void LnkT354(){ call_or_link(VV[354],(void **)(void *)&Lnk354);} /* LOOP-ERROR */
static void LnkT333(){ call_or_link(VV[333],(void **)(void *)&Lnk333);} /* SUBTYPEP */
static void LnkT353(){ call_or_link(VV[353],(void **)(void *)&Lnk353);} /* WARN */
static void LnkT352(){ call_or_link(VV[352],(void **)(void *)&Lnk352);} /* SPECIFIC-ERROR */
static object  LnkTLI351(){return call_proc0(VV[351],(void **)(void *)&LnkLI351);} /* LOOP-CONTEXT */
static void LnkT350(){ call_or_link(VV[350],(void **)(void *)&Lnk350);} /* SPECIAL-OPERATOR-P */
static void LnkT349(){ call_or_link(VV[349],(void **)(void *)&Lnk349);} /* ESTIMATE-CODE-SIZE-1 */
static object  LnkTLI348(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[348],(void **)(void *)&LnkLI348,1,first,ap);va_end(ap);return V1;} /* DESTRUCTURING-SIZE */
static void LnkT77(){ call_or_link(VV[77],(void **)(void *)&Lnk77);} /* ESTIMATE-CODE-SIZE */
static object  LnkTLI347(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[347],(void **)(void *)&LnkLI347,1,first,ap);va_end(ap);return V1;} /* LOOP-CODE-DUPLICATION-THRESHOLD */
static void LnkT346(){ call_or_link(VV[346],(void **)(void *)&Lnk346);} /* LOOP-OPTIMIZATION-QUANTITIES */
static object  LnkTLI345(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[345],(void **)(void *)&LnkLI345,first,ap);va_end(ap);return V1;} /* LOOP-WARN */
static object  LnkTLI344(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[344],(void **)(void *)&LnkLI344,1,first,ap);va_end(ap);return V1;} /* LOOP-MAKE-PSETQ */
static object  LnkTLI343(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[343],(void **)(void *)&LnkLI343,1,first,ap);va_end(ap);return V1;} /* LOOP-MAKE-DESETQ */
static object  LnkTLI341(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[341],(void **)(void *)&LnkLI341,first,ap);va_end(ap);return V1;} /* MAKE-LOOP-UNIVERSE */
static void LnkT340(){ call_or_link(VV[340],(void **)(void *)&Lnk340);} /* TYPEP */
static object  LnkTLI337(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[337],(void **)(void *)&LnkLI337,3,first,ap);va_end(ap);return V1;} /* HIDE-VARIABLE-REFERENCE */
static object  LnkTLI336(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(VV[336],(void **)(void *)&LnkLI336,1,first,ap);va_end(ap);return V1;} /* LOOP-TYPED-INIT */
static object  LnkTLI335(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[335],(void **)(void *)&LnkLI335,first,ap);va_end(ap);return V1;} /* LOOP-GENTEMP */
static object  LnkTLI334(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_vproc_new(VV[334],(void **)(void *)&LnkLI334,first,ap);va_end(ap);return V1;} /* MAKE-LOOP-MINIMAX-INTERNAL */

#ifdef SYSTEM_SPECIAL_INIT
SYSTEM_SPECIAL_INIT
#endif

